#define COBJMACROS
#include <windows.h>
#include <initguid.h>
#include <d3d11.h>
#include <dxgi.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>
#include <math.h>
#include "gfx_backend.h"
#include "gx_pipeline.h"

const void* host_resolve_gx_guest_addr(uint32_t addr);

/* Byte-for-byte mirror of `cbuffer GxTev` in tools/compile_shaders.py. */
typedef struct {
    float    kreg[4][4];      /* K0..K3 constant colour registers (rgba) */
    float    kprev[4][4];     /* K0..K3 previous colour registers */
    uint32_t color[16][4];    /* x = rgb combiner bits, y = alpha combiner bits */
    uint32_t ksel[16][4];     /* x = colour KonstSel, y = alpha KonstSel */
    uint32_t order[16][4];    /* x = texmap, y = texcoord, z = enable texture */
    uint32_t num_stages;
    uint32_t alpha_test;
    uint32_t pad0, pad1;
} GxTevConstants;

static float gx_tev_reg_component(uint32_t raw) {
    int32_t v = (int32_t)(raw & 0x7FF);
    if (v & 0x400) v -= 0x800;
    return (float)v / 255.0f;
}

static void gx_tev_fill_constants(GxTevConstants* c, const GxTevState* st, bool* need_compare) {
    memset(c, 0, sizeof(*c));
    if (!st) { c->num_stages = 0; return; }    for (int i = 0; i < 4; i++) {
        /* BP 0xE0+2i holds red (bits 0..10) and alpha (12..22);
         * BP 0xE1+2i holds blue (0..10) and green (12..22). */
        c->kreg[i][0] = gx_tev_reg_component(st->kreg_ra[i]);
        c->kreg[i][1] = gx_tev_reg_component(st->kreg_bg[i] >> 12);
        c->kreg[i][2] = gx_tev_reg_component(st->kreg_bg[i]);
        c->kreg[i][3] = gx_tev_reg_component(st->kreg_ra[i] >> 12);
        c->kprev[i][0] = c->kreg[i][0];
        c->kprev[i][1] = c->kreg[i][1];
        c->kprev[i][2] = c->kreg[i][2];
        c->kprev[i][3] = c->kreg[i][3];
    }
    c->num_stages = st->num_stages ? st->num_stages : 1;
    for (int i = 0; i < 16; i++) {
        c->color[i][0] = st->combiner_color[i];
        c->color[i][1] = st->combiner_alpha[i];
        c->ksel[i][0] = st->kcsel[i];
        c->ksel[i][1] = st->kasel[i];
        c->order[i][0] = st->texmap[i];
        c->order[i][1] = st->texcoord[i];
        c->order[i][2] = st->tex_enable[i];
        if (i < c->num_stages && (((st->combiner_color[i] >> 16) & 3) == 3 ||
                                  ((st->combiner_alpha[i] >> 16) & 3) == 3)) {
            if (need_compare) *need_compare = true;
        }
    }
    c->alpha_test = (uint32_t)st->alpha_comp0 |
                    ((uint32_t)st->alpha_comp1 << 3) |
                    ((uint32_t)st->alpha_logic << 6) |
                    ((uint32_t)st->alpha_ref0 << 8) |
                    ((uint32_t)st->alpha_ref1 << 16);
}


// Forward declaration of backend state
typedef struct {
    HWND hwnd;
    ID3D11Device* device;
    ID3D11DeviceContext* context;
    IDXGISwapChain* swap_chain;
    ID3D11RenderTargetView* rtv;
    ID3D11Texture2D* depth_stencil_texture;
    ID3D11DepthStencilView* dsv;
    ID3D11DepthStencilState* ds_state_3d_opaque;
    ID3D11DepthStencilState* ds_state_3d_alpha;
    ID3D11DepthStencilState* ds_state_ui;
    ID3D11Texture2D* fb_texture;
    ID3D11ShaderResourceView* fb_srv;
    ID3D11SamplerState* sampler_linear;
    ID3D11SamplerState* sampler_point;
    ID3D11SamplerState* sampler_wrap;
    ID3D11VertexShader* vs;
    ID3D11PixelShader* ps;

    // GX 3D Pipeline rendering resources
    ID3D11InputLayout* gx_input_layout;
    ID3D11Buffer* gx_vbo;
    ID3D11VertexShader* gx_vs;
    ID3D11PixelShader* gx_ps;
    ID3D11PixelShader* gx_ps_opaque;
    ID3D11PixelShader* gx_ps_alpha;
    /* TEV pixel pipeline (TLS_TEV=1): the GX texture environment, driven by the
     * per-batch state in GxDrawBatch::tev_state. Off by default until measured. */
    ID3D11PixelShader* gx_ps_tev;
    ID3D11Buffer* gx_tev_cb;
    bool tev_enabled;
    ID3D11BlendState* blend_state_alpha;
    ID3D11RasterizerState* rs_cull_none;
    ID3D11Texture2D* gx_tex_white;
    ID3D11ShaderResourceView* gx_tex_white_srv;

#define GX_MAX_CACHED_TEXTURES 1024
    struct {
        uint32_t guest_addr;
        uint32_t width;
        uint32_t height;
        uint32_t format;
        uint32_t tlut_addr;
        uint32_t tlut_format;
        uint32_t last_frame;
        uint32_t hash;
        ID3D11Texture2D* tex;
        ID3D11ShaderResourceView* srv;
        bool is_all_zero;
    } tex_cache[GX_MAX_CACHED_TEXTURES];
    uint32_t* gx_staging_rgba;
    uint32_t gx_staging_capacity;
    uint32_t frame_counter;
    /* last completed frame, source for EFB -> texture copies */
    ID3D11Texture2D* efb_snapshot;
    UINT efb_snapshot_w, efb_snapshot_h;

    /* viewport rect used to scale the GX image onto the backbuffer (EFB copy) */
    float vp_x, vp_y, vp_w, vp_h;
    
    int fb_width;
    int fb_height;
    int win_width;
    int win_height;
    bool vsync;
    bool fullscreen;
    GfxAspectRatio aspect_ratio;
    uint32_t* rgba_staging;
} D3D11Backend;

/* EFB -> texture copy (implemented below, registered by d3d11_init). */
static void d3d11_efb_copy_to_guest(uint32_t dst_guest, uint32_t x0, uint32_t y0,
                                    uint32_t x1, uint32_t y1, uint32_t format, int half_scale,
                                    uint32_t pitch, uint32_t exec);

static D3D11Backend s_d3d11 = {0};

// Precompiled bytecode for fullscreen triangle vertex shader
// HLSL:
// struct VSOut { float4 pos : SV_Position; float2 uv : TEXCOORD; };
// VSOut main(uint id : SV_VertexID) {
//     VSOut o;
//     o.uv = float2((id << 1) & 2, id & 2);
//     o.pos = float4(o.uv * float2(2.0, -2.0) + float2(-1.0, 1.0), 0.0, 1.0);
//     return o;
// }
#include "../build/recomp/d3d11_shaders.inl"


#include "../build/recomp/gx_shaders_d3d11.inl"


static void recreate_render_target(void) {
    if (s_d3d11.rtv) {
        ID3D11RenderTargetView_Release(s_d3d11.rtv);
        s_d3d11.rtv = NULL;
    }
    if (s_d3d11.dsv) {
        ID3D11DepthStencilView_Release(s_d3d11.dsv);
        s_d3d11.dsv = NULL;
    }
    if (s_d3d11.depth_stencil_texture) {
        ID3D11Texture2D_Release(s_d3d11.depth_stencil_texture);
        s_d3d11.depth_stencil_texture = NULL;
    }

    ID3D11Texture2D* back_buffer = NULL;
    HRESULT hr = IDXGISwapChain_GetBuffer(s_d3d11.swap_chain, 0, &IID_ID3D11Texture2D, (void**)&back_buffer);
    if (SUCCEEDED(hr) && back_buffer) {
        ID3D11Device_CreateRenderTargetView(s_d3d11.device, (ID3D11Resource*)back_buffer, NULL, &s_d3d11.rtv);
        ID3D11Texture2D_Release(back_buffer);
    }

    // Create 24-bit Depth + 8-bit Stencil buffer matching backbuffer dimensions
    D3D11_TEXTURE2D_DESC depth_desc = {0};
    depth_desc.Width = s_d3d11.win_width;
    depth_desc.Height = s_d3d11.win_height;
    depth_desc.MipLevels = 1;
    depth_desc.ArraySize = 1;
    depth_desc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;
    depth_desc.SampleDesc.Count = 1;
    depth_desc.SampleDesc.Quality = 0;
    depth_desc.Usage = D3D11_USAGE_DEFAULT;
    depth_desc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

    hr = ID3D11Device_CreateTexture2D(s_d3d11.device, &depth_desc, NULL, &s_d3d11.depth_stencil_texture);
    if (SUCCEEDED(hr) && s_d3d11.depth_stencil_texture) {
        ID3D11Device_CreateDepthStencilView(s_d3d11.device, (ID3D11Resource*)s_d3d11.depth_stencil_texture, NULL, &s_d3d11.dsv);
        printf("[D3D11] Created %ux%u Hardware Depth-Stencil Buffer (D24S8)\n", s_d3d11.win_width, s_d3d11.win_height);
    }
}

bool d3d11_init(HWND hwnd, const GfxConfig* config) {
    s_d3d11.hwnd = hwnd;
    s_d3d11.win_width = config->window_width;
    s_d3d11.win_height = config->window_height;
    s_d3d11.vsync = config->vsync;
    s_d3d11.fullscreen = config->fullscreen;
    s_d3d11.aspect_ratio = config->aspect_ratio;
    s_d3d11.fb_width = 640;
    s_d3d11.fb_height = 480;

    DXGI_SWAP_CHAIN_DESC scd = {0};
    scd.BufferCount = 2;
    scd.BufferDesc.Width = s_d3d11.win_width;
    scd.BufferDesc.Height = s_d3d11.win_height;
    scd.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
    scd.BufferDesc.RefreshRate.Numerator = config->target_fps > 0 ? (UINT)config->target_fps : 60;
    scd.BufferDesc.RefreshRate.Denominator = 1;
    scd.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
    scd.OutputWindow = hwnd;
    scd.SampleDesc.Count = 1;
    scd.SampleDesc.Quality = 0;
    scd.Windowed = !config->fullscreen;
    scd.SwapEffect = DXGI_SWAP_EFFECT_DISCARD;

    D3D_FEATURE_LEVEL feature_levels[] = {
        D3D_FEATURE_LEVEL_11_0,
        D3D_FEATURE_LEVEL_10_1,
        D3D_FEATURE_LEVEL_10_0
    };
    D3D_FEATURE_LEVEL feature_level;

    HRESULT hr = D3D11CreateDeviceAndSwapChain(
        NULL,
        D3D_DRIVER_TYPE_HARDWARE,
        NULL,
        0,
        feature_levels,
        sizeof(feature_levels) / sizeof(feature_levels[0]),
        D3D11_SDK_VERSION,
        &scd,
        &s_d3d11.swap_chain,
        &s_d3d11.device,
        &feature_level,
        &s_d3d11.context
    );

    if (FAILED(hr)) {
        printf("[D3D11] Failed to create device and swapchain: 0x%08lX\n", (unsigned long)hr);
        return false;
    }

    recreate_render_target();

    // Create Shaders from bytecode
    hr = ID3D11Device_CreateVertexShader(s_d3d11.device, s_vs_bytecode, sizeof(s_vs_bytecode), NULL, &s_d3d11.vs);
    if (FAILED(hr)) {
        printf("[D3D11] Failed to create vertex shader\n");
        return false;
    }

    hr = ID3D11Device_CreatePixelShader(s_d3d11.device, s_ps_bytecode, sizeof(s_ps_bytecode), NULL, &s_d3d11.ps);
    if (FAILED(hr)) {
        printf("[D3D11] Failed to create pixel shader\n");
        return false;
    }

    // Create GX Shaders, Input Layout & Dynamic Vertex Buffer
    hr = ID3D11Device_CreateVertexShader(s_d3d11.device, s_gx_vs_bytecode, sizeof(s_gx_vs_bytecode), NULL, &s_d3d11.gx_vs);
    if (FAILED(hr)) {
        printf("[D3D11] Failed to create GX vertex shader: 0x%08X\n", (unsigned int)hr);
    }
    hr = ID3D11Device_CreatePixelShader(s_d3d11.device, s_gx_ps_opaque_bytecode, sizeof(s_gx_ps_opaque_bytecode), NULL, &s_d3d11.gx_ps_opaque);
    if (FAILED(hr)) {
        printf("[D3D11] Failed to create GX opaque pixel shader: 0x%08X\n", (unsigned int)hr);
    }
    hr = ID3D11Device_CreatePixelShader(s_d3d11.device, s_gx_ps_alpha_bytecode, sizeof(s_gx_ps_alpha_bytecode), NULL, &s_d3d11.gx_ps_alpha);
    if (FAILED(hr)) {
        printf("[D3D11] Failed to create GX alpha pixel shader: 0x%08X\n", (unsigned int)hr);
    }
    hr = ID3D11Device_CreatePixelShader(s_d3d11.device, s_gx_ps_tev_bytecode, sizeof(s_gx_ps_tev_bytecode), NULL, &s_d3d11.gx_ps_tev);
    if (FAILED(hr)) {
        fprintf(stderr, "[GFX] Failed to create TEV pixel shader hr=0x%08lX\n", (unsigned long)hr);
        return false;
    }

    /* Per-batch TEV state: 4 K registers + 4 previous + 16 combiners + 16 konst
     * selectors + 16 orders + 4 scalars. Must match the GxTevConstants mirror of
     * tools/compile_shaders.py's `cbuffer GxTev`. */
    {
        D3D11_BUFFER_DESC cb_desc;
        memset(&cb_desc, 0, sizeof(cb_desc));
        cb_desc.ByteWidth = sizeof(GxTevConstants) + ((16 - (sizeof(GxTevConstants) % 16)) % 16);
        cb_desc.Usage = D3D11_USAGE_DYNAMIC;
        cb_desc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;
        cb_desc.CPUAccessFlags = D3D11_CPU_ACCESS_WRITE;
        hr = ID3D11Device_CreateBuffer(s_d3d11.device, &cb_desc, NULL, &s_d3d11.gx_tev_cb);
        if (FAILED(hr)) {
            fprintf(stderr, "[GFX] Failed to create TEV constant buffer hr=0x%08lX\n", (unsigned long)hr);
            return false;
        }
    }
    s_d3d11.tev_enabled = getenv("TLS_TEV") != NULL;
    s_d3d11.gx_ps = s_d3d11.gx_ps_alpha;

    D3D11_INPUT_ELEMENT_DESC gx_elements[] = {
        {"POSITION", 0, DXGI_FORMAT_R32G32B32A32_FLOAT, 0, 0,  D3D11_INPUT_PER_VERTEX_DATA, 0},
        {"NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT,    0, 16, D3D11_INPUT_PER_VERTEX_DATA, 0},
        {"TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,       0, 28, D3D11_INPUT_PER_VERTEX_DATA, 0},
        {"COLOR",    0, DXGI_FORMAT_R8G8B8A8_UNORM,     0, 36, D3D11_INPUT_PER_VERTEX_DATA, 0},
        {"TEXCOORD", 1, DXGI_FORMAT_R32G32_FLOAT,       0, 40, D3D11_INPUT_PER_VERTEX_DATA, 0},
    };
    hr = ID3D11Device_CreateInputLayout(s_d3d11.device, gx_elements, 5, s_gx_vs_bytecode, sizeof(s_gx_vs_bytecode), &s_d3d11.gx_input_layout);
    if (FAILED(hr)) {
        printf("[D3D11] Failed to create GX input layout: 0x%08X\n", (unsigned int)hr);
    }

    D3D11_BUFFER_DESC vbo_desc = {0};
    vbo_desc.ByteWidth = GX_MAX_BATCH_VERTICES * sizeof(GxVertex);
    vbo_desc.Usage = D3D11_USAGE_DYNAMIC;
    vbo_desc.BindFlags = D3D11_BIND_VERTEX_BUFFER;
    vbo_desc.CPUAccessFlags = D3D11_CPU_ACCESS_WRITE;
    ID3D11Device_CreateBuffer(s_d3d11.device, &vbo_desc, NULL, &s_d3d11.gx_vbo);

    // Create Sampler State (Linear Bilinear filtering)
    D3D11_SAMPLER_DESC samp_desc = {0};
    samp_desc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;
    samp_desc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;
    samp_desc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;
    samp_desc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;
    samp_desc.ComparisonFunc = D3D11_COMPARISON_NEVER;
    samp_desc.MinLOD = 0;
    samp_desc.MaxLOD = D3D11_FLOAT32_MAX;
    ID3D11Device_CreateSamplerState(s_d3d11.device, &samp_desc, &s_d3d11.sampler_linear);

    samp_desc.AddressU = D3D11_TEXTURE_ADDRESS_WRAP;
    samp_desc.AddressV = D3D11_TEXTURE_ADDRESS_WRAP;
    samp_desc.AddressW = D3D11_TEXTURE_ADDRESS_WRAP;
    ID3D11Device_CreateSamplerState(s_d3d11.device, &samp_desc, &s_d3d11.sampler_wrap);

    // Create dynamic guest framebuffer texture (640x480 RGBA8)
    D3D11_TEXTURE2D_DESC tex_desc = {0};
    tex_desc.Width = s_d3d11.fb_width;
    tex_desc.Height = s_d3d11.fb_height;
    tex_desc.MipLevels = 1;
    tex_desc.ArraySize = 1;
    tex_desc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
    tex_desc.SampleDesc.Count = 1;
    tex_desc.Usage = D3D11_USAGE_DYNAMIC;
    tex_desc.BindFlags = D3D11_BIND_SHADER_RESOURCE;
    tex_desc.CPUAccessFlags = D3D11_CPU_ACCESS_WRITE;

    hr = ID3D11Device_CreateTexture2D(s_d3d11.device, &tex_desc, NULL, &s_d3d11.fb_texture);
    if (SUCCEEDED(hr)) {
        ID3D11Device_CreateShaderResourceView(s_d3d11.device, (ID3D11Resource*)s_d3d11.fb_texture, NULL, &s_d3d11.fb_srv);
    }

    // Create Alpha Blend State for GX Primitives
    D3D11_BLEND_DESC blend_desc = {0};
    blend_desc.RenderTarget[0].BlendEnable = TRUE;
    blend_desc.RenderTarget[0].SrcBlend = D3D11_BLEND_SRC_ALPHA;
    blend_desc.RenderTarget[0].DestBlend = D3D11_BLEND_INV_SRC_ALPHA;
    blend_desc.RenderTarget[0].BlendOp = D3D11_BLEND_OP_ADD;
    blend_desc.RenderTarget[0].SrcBlendAlpha = D3D11_BLEND_ONE;
    blend_desc.RenderTarget[0].DestBlendAlpha = D3D11_BLEND_INV_SRC_ALPHA;
    blend_desc.RenderTarget[0].BlendOpAlpha = D3D11_BLEND_OP_ADD;
    blend_desc.RenderTarget[0].RenderTargetWriteMask = D3D11_COLOR_WRITE_ENABLE_ALL;
    ID3D11Device_CreateBlendState(s_d3d11.device, &blend_desc, &s_d3d11.blend_state_alpha);

    // Create Rasterizer State with no backface culling for GX 2D/3D geometry
    D3D11_RASTERIZER_DESC rdesc = {0};
    rdesc.FillMode = D3D11_FILL_SOLID;
    rdesc.CullMode = D3D11_CULL_NONE;
    rdesc.FrontCounterClockwise = FALSE;
    rdesc.DepthClipEnable = FALSE;
    ID3D11Device_CreateRasterizerState(s_d3d11.device, &rdesc, &s_d3d11.rs_cull_none);

    // 3D Opaque Depth State: Test enabled (LESS_EQUAL), Depth write enabled
    D3D11_DEPTH_STENCIL_DESC ds_op_desc = {0};
    ds_op_desc.DepthEnable = TRUE;
    ds_op_desc.DepthWriteMask = D3D11_DEPTH_WRITE_MASK_ALL;
    ds_op_desc.DepthFunc = D3D11_COMPARISON_LESS_EQUAL;
    ds_op_desc.StencilEnable = FALSE;
    ID3D11Device_CreateDepthStencilState(s_d3d11.device, &ds_op_desc, &s_d3d11.ds_state_3d_opaque);

    // 3D Alpha Depth State: Test enabled (LESS_EQUAL), Depth write disabled (for transparent particles/glass)
    D3D11_DEPTH_STENCIL_DESC ds_al_desc = {0};
    ds_al_desc.DepthEnable = TRUE;
    ds_al_desc.DepthWriteMask = D3D11_DEPTH_WRITE_MASK_ZERO;
    ds_al_desc.DepthFunc = D3D11_COMPARISON_LESS_EQUAL;
    ds_al_desc.StencilEnable = FALSE;
    ID3D11Device_CreateDepthStencilState(s_d3d11.device, &ds_al_desc, &s_d3d11.ds_state_3d_alpha);

    // 2D UI Depth State: Test disabled, Depth write disabled
    D3D11_DEPTH_STENCIL_DESC ds_ui_desc = {0};
    ds_ui_desc.DepthEnable = FALSE;
    ds_ui_desc.DepthWriteMask = D3D11_DEPTH_WRITE_MASK_ZERO;
    ds_ui_desc.DepthFunc = D3D11_COMPARISON_ALWAYS;
    ds_ui_desc.StencilEnable = FALSE;
    ID3D11Device_CreateDepthStencilState(s_d3d11.device, &ds_ui_desc, &s_d3d11.ds_state_ui);

    // Create 1x1 White Texture fallback
    uint32_t white_pixel = 0xFFFFFFFF;
    D3D11_SUBRESOURCE_DATA init_data = { &white_pixel, 4, 4 };
    D3D11_TEXTURE2D_DESC white_desc = {0};
    white_desc.Width = 1;
    white_desc.Height = 1;
    white_desc.MipLevels = 1;
    white_desc.ArraySize = 1;
    white_desc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
    white_desc.SampleDesc.Count = 1;
    white_desc.Usage = D3D11_USAGE_IMMUTABLE;
    white_desc.BindFlags = D3D11_BIND_SHADER_RESOURCE;
    ID3D11Device_CreateTexture2D(s_d3d11.device, &white_desc, &init_data, &s_d3d11.gx_tex_white);
    ID3D11Device_CreateShaderResourceView(s_d3d11.device, (ID3D11Resource*)s_d3d11.gx_tex_white, NULL, &s_d3d11.gx_tex_white_srv);

    s_d3d11.rgba_staging = (uint32_t*)malloc(s_d3d11.fb_width * s_d3d11.fb_height * sizeof(uint32_t));

    printf("[D3D11] Initialized Direct3D 11 Hardware Graphics Pipeline (%dx%d, VSync: %s)\n",
           s_d3d11.win_width, s_d3d11.win_height, s_d3d11.vsync ? "ON" : "OFF");
    /* EFB copies run inline (reading the last completed frame) unless
     * TLS_DEFER_EFB_COPY=1, which asks this backend to replay the pipeline's copy queue
     * from inside the batch loop instead. See handover 5c.15 for why the deferred mode,
     * although it is what the hardware does, is not the default yet. */
    gx_pipeline_set_efb_copy_hook(d3d11_efb_copy_to_guest);
    gx_pipeline_set_efb_copy_deferred(getenv("TLS_DEFER_EFB_COPY") ? 1 : 0);
    return true;
}

static inline uint8_t clamp_u8(int v) {
    return (uint8_t)(v < 0 ? 0 : (v > 255 ? 255 : v));
}

static inline uint32_t decode_tlut_pixel(const uint8_t* tlut_data, uint32_t idx, uint32_t format) {
    if (!tlut_data) {
        uint8_t gray = (uint8_t)(idx * 17);
        return (uint32_t)(gray | (gray << 8) | (gray << 16) | (0xFF << 24));
    }
    uint8_t b0 = tlut_data[idx * 2 + 0];
    uint8_t b1 = tlut_data[idx * 2 + 1];
    uint16_t val = (uint16_t)(((uint16_t)b0 << 8) | b1);
    switch (format) {
        case 0: { // GX_TL_IA8: byte 0 = alpha, byte 1 = intensity
            uint8_t a = b0;
            uint8_t i = b1;
            return (uint32_t)(i | (i << 8) | (i << 16) | (a << 24));
        }
        case 1: { // GX_TL_RGB565
            uint8_t r = ((val >> 11) & 0x1F) * 255 / 31;
            uint8_t g = ((val >> 5) & 0x3F) * 255 / 63;
            uint8_t b = (val & 0x1F) * 255 / 31;
            return (uint32_t)(r | (g << 8) | (b << 16) | (0xFF << 24));
        }
        case 2: // GX_TL_RGB5A3
        default: {
            if (val & 0x8000) {
                uint8_t r = ((val >> 10) & 0x1F) * 255 / 31;
                uint8_t g = ((val >> 5) & 0x1F) * 255 / 31;
                uint8_t b = (val & 0x1F) * 255 / 31;
                return (uint32_t)(r | (g << 8) | (b << 16) | (0xFF << 24));
            } else {
                uint8_t a = ((val >> 12) & 0x7) * 255 / 7;
                uint8_t r = ((val >> 8) & 0xF) * 17;
                uint8_t g = ((val >> 4) & 0xF) * 17;
                uint8_t b = (val & 0xF) * 17;
                return (uint32_t)(r | (g << 8) | (b << 16) | (a << 24));
            }
        }
    }
}

static void decode_gx_texture(const uint8_t* src, uint32_t width, uint32_t height, uint32_t format, uint32_t* dst, uint32_t tlut_addr, uint32_t tlut_format) {

    if (!src || !dst) return;
    switch (format) {
        case 0: { // GX_TF_I4 (8x8 tiles, 32 bytes per tile: 64 pixels, 4 bits per pixel)
            uint32_t bw = (width + 7) / 8;
            uint32_t bh = (height + 7) / 8;
            const uint8_t* p = src;
            for (uint32_t by = 0; by < bh; by++) {
                for (uint32_t bx = 0; bx < bw; bx++) {
                    for (uint32_t py = 0; py < 8; py++) {
                        uint32_t y = by * 8 + py;
                        for (uint32_t px = 0; px < 8; px += 2) {
                            uint8_t byte_val = *p++;
                            uint8_t i0 = (uint8_t)((byte_val >> 4) * 17);
                            uint8_t i1 = (uint8_t)((byte_val & 0x0F) * 17);
                            if (y < height) {
                                if (bx * 8 + px < width) {
                                    dst[y * width + (bx * 8 + px)] = (uint32_t)(i0 | (i0 << 8) | (i0 << 16) | ((uint32_t)i0 << 24));
                                }
                                if (bx * 8 + px + 1 < width) {
                                    dst[y * width + (bx * 8 + px + 1)] = (uint32_t)(i1 | (i1 << 8) | (i1 << 16) | ((uint32_t)i1 << 24));
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        case 2: { // GX_TF_IA4 (8x4 tiles, 32 bytes per tile: 32 pixels, 8 bits per pixel)
            uint32_t bw = (width + 7) / 8;
            uint32_t bh = (height + 3) / 4;
            const uint8_t* p = src;
            for (uint32_t by = 0; by < bh; by++) {
                for (uint32_t bx = 0; bx < bw; bx++) {
                    for (uint32_t py = 0; py < 4; py++) {
                        uint32_t y = by * 4 + py;
                        for (uint32_t px = 0; px < 8; px++) {
                            uint32_t x = bx * 8 + px;
                            uint8_t byte_val = *p++;
                            uint8_t a = (uint8_t)((byte_val >> 4) * 17);
                            uint8_t i = (uint8_t)((byte_val & 0x0F) * 17);
                            if (y < height && x < width) {
                                dst[y * width + x] = (uint32_t)(i | (i << 8) | (i << 16) | (a << 24));
                            }
                        }
                    }
                }
            }
            break;
        }
        case 6: { // GX_TF_RGBA8 (4x4 tiles, 64 bytes per tile: 32 AR, 32 GB)
            uint32_t bw = (width + 3) / 4;
            uint32_t bh = (height + 3) / 4;
            const uint8_t* p = src;
            for (uint32_t by = 0; by < bh; by++) {
                for (uint32_t bx = 0; bx < bw; bx++) {
                    const uint8_t* ar = p;
                    const uint8_t* gb = p + 32;
                    p += 64;
                    for (uint32_t py = 0; py < 4; py++) {
                        uint32_t y = by * 4 + py;
                        if (y >= height) continue;
                        for (uint32_t px = 0; px < 4; px++) {
                            uint32_t x = bx * 4 + px;
                            if (x >= width) continue;
                            uint32_t idx = (py * 4 + px) * 2;
                            uint8_t a = ar[idx + 0];
                            uint8_t r = ar[idx + 1];
                            uint8_t g = gb[idx + 0];
                            uint8_t b = gb[idx + 1];
                            dst[y * width + x] = (uint32_t)(r | (g << 8) | (b << 16) | (a << 24));
                        }
                    }
                }
            }
            break;
        }
        case 3: { // GX_TF_IA8 (4x4 tiles, 32 bytes per tile: 16 AI pairs)
            uint32_t bw = (width + 3) / 4;
            uint32_t bh = (height + 3) / 4;
            const uint8_t* p = src;
            for (uint32_t by = 0; by < bh; by++) {
                for (uint32_t bx = 0; bx < bw; bx++) {
                    for (uint32_t py = 0; py < 4; py++) {
                        uint32_t y = by * 4 + py;
                        for (uint32_t px = 0; px < 4; px++) {
                            uint32_t x = bx * 4 + px;
                            uint8_t a = *p++;
                            uint8_t i = *p++;
                            if (y < height && x < width) {
                                dst[y * width + x] = (uint32_t)(i | (i << 8) | (i << 16) | (a << 24));
                            }
                        }
                    }
                }
            }
            break;
        }
        case 4: { // GX_TF_RGB565 (4x4 tiles, 32 bytes per tile)
            uint32_t bw = (width + 3) / 4;
            uint32_t bh = (height + 3) / 4;
            const uint8_t* p = src;
            for (uint32_t by = 0; by < bh; by++) {
                for (uint32_t bx = 0; bx < bw; bx++) {
                    for (uint32_t py = 0; py < 4; py++) {
                        uint32_t y = by * 4 + py;
                        for (uint32_t px = 0; px < 4; px++) {
                            uint32_t x = bx * 4 + px;
                            uint16_t val = (uint16_t)((p[0] << 8) | p[1]);
                            p += 2;
                            if (y < height && x < width) {
                                uint8_t r = ((val >> 11) & 0x1F) * 255 / 31;
                                uint8_t g = ((val >> 5) & 0x3F) * 255 / 63;
                                uint8_t b = (val & 0x1F) * 255 / 31;
                                dst[y * width + x] = (uint32_t)(r | (g << 8) | (b << 16) | (0xFF << 24));
                            }
                        }
                    }
                }
            }
            break;
        }
        case 5: { // GX_TF_RGB5A3
            uint32_t bw = (width + 3) / 4;
            uint32_t bh = (height + 3) / 4;
            const uint8_t* p = src;
            for (uint32_t by = 0; by < bh; by++) {
                for (uint32_t bx = 0; bx < bw; bx++) {
                    for (uint32_t py = 0; py < 4; py++) {
                        uint32_t y = by * 4 + py;
                        for (uint32_t px = 0; px < 4; px++) {
                            uint32_t x = bx * 4 + px;
                            uint16_t val = (uint16_t)((p[0] << 8) | p[1]);
                            p += 2;
                            if (y < height && x < width) {
                                uint8_t r, g, b, a;
                                if (val & 0x8000) {
                                    r = ((val >> 10) & 0x1F) * 255 / 31;
                                    g = ((val >> 5) & 0x1F) * 255 / 31;
                                    b = (val & 0x1F) * 255 / 31;
                                    a = 255;
                                } else {
                                    a = ((val >> 12) & 0x7) * 255 / 7;
                                    r = ((val >> 8) & 0xF) * 255 / 15;
                                    g = ((val >> 4) & 0xF) * 255 / 15;
                                    b = (val & 0xF) * 255 / 15;
                                }
                                dst[y * width + x] = (uint32_t)(r | (g << 8) | (b << 16) | (a << 24));
                            }
                        }
                    }
                }
            }
            break;
        }
        case 1: { // GX_TF_I8 (8x4 tiles, 32 bytes)
            uint32_t bw = (width + 7) / 8;
            uint32_t bh = (height + 3) / 4;
            const uint8_t* p = src;
            for (uint32_t by = 0; by < bh; by++) {
                for (uint32_t bx = 0; bx < bw; bx++) {
                    for (uint32_t py = 0; py < 4; py++) {
                        uint32_t y = by * 4 + py;
                        for (uint32_t px = 0; px < 8; px++) {
                            uint32_t x = bx * 8 + px;
                            uint8_t i = *p++;
                            if (y < height && x < width) {
                                dst[y * width + x] = (uint32_t)(i | (i << 8) | (i << 16) | ((uint32_t)i << 24));
                            }
                        }
                    }
                }
            }
            break;
        }
        case 14: { // GX_TF_CMPR (DXT1 in 8x8 tiles composed of four 4x4 sub-blocks)
            uint32_t bw = (width + 7) / 8;
            uint32_t bh = (height + 7) / 8;
            const uint8_t* p = src;
            static const uint32_t sub_ox[4] = { 0, 4, 0, 4 };
            static const uint32_t sub_oy[4] = { 0, 0, 4, 4 };

            int max_sub = (width <= 4 && height <= 4) ? 1 : 4;
            for (uint32_t by = 0; by < bh; by++) {
                for (uint32_t bx = 0; bx < bw; bx++) {
                    for (int sub = 0; sub < max_sub; sub++) {
                        uint16_t c0 = (uint16_t)((p[0] << 8) | p[1]);
                        uint16_t c1 = (uint16_t)((p[2] << 8) | p[3]);
                        uint32_t bits = ((uint32_t)p[4] << 24) | ((uint32_t)p[5] << 16) | ((uint32_t)p[6] << 8) | (uint32_t)p[7];
                        p += 8;

                        uint8_t r[4], g[4], b[4], a[4];
                        r[0] = ((c0 >> 11) & 0x1F) * 255 / 31;
                        g[0] = ((c0 >> 5) & 0x3F) * 255 / 63;
                        b[0] = (c0 & 0x1F) * 255 / 31;
                        a[0] = 255;

                        r[1] = ((c1 >> 11) & 0x1F) * 255 / 31;
                        g[1] = ((c1 >> 5) & 0x3F) * 255 / 63;
                        b[1] = (c1 & 0x1F) * 255 / 31;
                        a[1] = 255;

                        if (c0 > c1) {
                            r[2] = (uint8_t)((2 * r[0] + r[1]) / 3);
                            g[2] = (uint8_t)((2 * g[0] + g[1]) / 3);
                            b[2] = (uint8_t)((2 * b[0] + b[1]) / 3);
                            a[2] = 255;

                            r[3] = (uint8_t)((r[0] + 2 * r[1]) / 3);
                            g[3] = (uint8_t)((g[0] + 2 * g[1]) / 3);
                            b[3] = (uint8_t)((b[0] + 2 * b[1]) / 3);
                            a[3] = 255;
                        } else {
                            r[2] = (uint8_t)((r[0] + r[1]) / 2);
                            g[2] = (uint8_t)((g[0] + g[1]) / 2);
                            b[2] = (uint8_t)((b[0] + b[1]) / 2);
                            a[2] = 255;

                            r[3] = 0;
                            g[3] = 0;
                            b[3] = 0;
                            a[3] = 0;
                        }

                        uint32_t base_x = bx * 8 + sub_ox[sub];
                        uint32_t base_y = by * 8 + sub_oy[sub];
                        for (uint32_t py = 0; py < 4; py++) {
                            uint32_t y = base_y + py;
                            for (uint32_t px = 0; px < 4; px++) {
                                uint32_t x = base_x + px;
                                uint32_t shift = 30 - (py * 4 + px) * 2;
                                uint32_t code = (bits >> shift) & 3;
                                if (y < height && x < width) {
                                    dst[y * width + x] = (uint32_t)(r[code] | (g[code] << 8) | (b[code] << 16) | (a[code] << 24));
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        case 8: { // GX_TF_CI4 (8x8 tiles, 32 bytes per tile: 64 pixels, 4 bits per pixel)
            uint32_t bw = (width + 7) / 8;
            uint32_t bh = (height + 7) / 8;
            const uint8_t* p = src;
            const uint8_t* tlut_data = tlut_addr ? (const uint8_t*)host_resolve_gx_guest_addr(tlut_addr) : NULL;
            for (uint32_t by = 0; by < bh; by++) {
                for (uint32_t bx = 0; bx < bw; bx++) {
                    for (uint32_t py = 0; py < 8; py++) {
                        uint32_t y = by * 8 + py;
                        for (uint32_t px = 0; px < 8; px += 2) {
                            uint8_t byte_val = *p++;
                            uint8_t i0 = (uint8_t)(byte_val >> 4);
                            uint8_t i1 = (uint8_t)(byte_val & 0x0F);
                            if (y < height) {
                                if (bx * 8 + px < width) {
                                    dst[y * width + (bx * 8 + px)] = decode_tlut_pixel(tlut_data, i0, tlut_format);
                                }
                                if (bx * 8 + px + 1 < width) {
                                    dst[y * width + (bx * 8 + px + 1)] = decode_tlut_pixel(tlut_data, i1, tlut_format);
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        case 9: { // GX_TF_CI8 (8x4 tiles, 32 bytes per tile: 32 pixels, 8 bits per pixel)
            uint32_t bw = (width + 7) / 8;
            uint32_t bh = (height + 3) / 4;
            const uint8_t* p = src;
            const uint8_t* tlut_data = tlut_addr ? (const uint8_t*)host_resolve_gx_guest_addr(tlut_addr) : NULL;
            for (uint32_t by = 0; by < bh; by++) {
                for (uint32_t bx = 0; bx < bw; bx++) {
                    for (uint32_t py = 0; py < 4; py++) {
                        uint32_t y = by * 4 + py;
                        for (uint32_t px = 0; px < 8; px++) {
                            uint32_t x = bx * 8 + px;
                            uint8_t val = *p++;
                            if (y < height && x < width) {
                                dst[y * width + x] = decode_tlut_pixel(tlut_data, val, tlut_format);
                            }
                        }
                    }
                }
            }
            break;
        }
        default: {
            memset(dst, 0, width * height * 4);
            break;
        }
    }
}

static bool s_last_tex_all_zero = false;

/* Diagnostic: decode a GX texture from guest memory and report its average colour.
 * Used by TLS_TEV_PROBE to answer "is the texture this composite pass samples
 * already blown out?", which is the open question in handover 5c.16 item 4.2. */
static uint32_t* s_probe_tex_buf = NULL;
static uint32_t s_probe_tex_cap = 0;
static bool probe_texture_avg(const GxTextureUnit* tu, unsigned* out_r, unsigned* out_g, unsigned* out_b, unsigned* out_a) {
    *out_r = *out_g = *out_b = *out_a = 0;
    if (!tu || tu->guest_addr == 0 || tu->width == 0 || tu->height == 0) return false;
    const void* data = host_resolve_gx_guest_addr(tu->guest_addr);
    if (!data) return false;
    uint32_t need = tu->width * tu->height;
    if (need == 0 || need > (4u << 20)) return false;
    if (need > s_probe_tex_cap) {
        uint32_t* nb = (uint32_t*)realloc(s_probe_tex_buf, (size_t)need * 4);
        if (!nb) return false;
        s_probe_tex_buf = nb;
        s_probe_tex_cap = need;
    }
    decode_gx_texture((const uint8_t*)data, tu->width, tu->height, tu->format,
                      s_probe_tex_buf, tu->tlut_addr, tu->tlut_format);
    uint64_t sr = 0, sg = 0, sb = 0, sa = 0;
    uint32_t n = tu->width * tu->height;
    for (uint32_t i = 0; i < n; i++) {
        uint32_t p = s_probe_tex_buf[i];
        sr += p & 0xFF; sg += (p >> 8) & 0xFF; sb += (p >> 16) & 0xFF;
        sa += (p >> 24) & 0xFF;
    }
    *out_r = (unsigned)(sr / n);
    *out_g = (unsigned)(sg / n);
    *out_b = (unsigned)(sb / n);
    *out_a = (unsigned)(sa / n);
    return true;
}

/* TLS_NO_INK_MATTE=1 turns OFF the "dark ink on a light plate" reconstruction below.
 *
 * That heuristic exists because the title logo, the menu text and the button prompts are
 * authored as dark lettering on an opaque cream plate, and the GX TEV alpha stage - which
 * we do not emulate by default - is what removes the plate on hardware. The heuristic
 * removes it for us: every texel within reach of the plate luminance becomes transparent
 * and only the ink survives.
 *
 * It also fires on artwork where the plate IS the artwork. Measured on the Chapter-1
 * tutorial page (handover 5c.43 C): the parchment sheet (0x921DEA60, 512x512 CMPR,
 * full-screen at b26/b30) has light corners and a dark decorative border, so
 * `base_luma - min_luma > 60` holds and the ink matte erases the whole sheet - the
 * batch then draws nothing (the per-batch back-buffer average does not move at all
 * across b26) and the page has no background. This flag is the one-run proof of that
 * diagnosis and is inert by default; the fix has to be a rule that distinguishes the
 * two cases (per-batch, not per-texture), not a global switch. */
static int tls_ink_matte_allowed(void) {
    static int v = -1;
    if (v < 0) v = getenv("TLS_NO_INK_MATTE") ? 0 : 1;
    return v;
}

static ID3D11ShaderResourceView* get_or_upload_gx_texture(const GxTextureUnit* tu) {
    if (!tu || tu->guest_addr == 0 || tu->width == 0 || tu->height == 0) {
        s_last_tex_all_zero = true;
        return s_d3d11.gx_tex_white_srv;
    }

    const void* guest_tex_data = host_resolve_gx_guest_addr(tu->guest_addr);
    if (!guest_tex_data) {
        s_last_tex_all_zero = true;
        return s_d3d11.gx_tex_white_srv;
    }

    if (tu->guest_addr == 0x904B5C80) {
        static int s_4b5c80_log = 0;
        if (++s_4b5c80_log <= 5) {
            printf("[TEX 0x904B5C80] w=%u h=%u fmt=%u first 32 bytes: ", tu->width, tu->height, tu->format);
            const uint8_t* b = (const uint8_t*)guest_tex_data;
            for (int k = 0; k < 32; k++) printf("%02X ", b[k]);
            printf("\n");
            fflush(stdout);
        }
    }

    if (tu->guest_addr == 0x90703AA0) {
        static int s_703aa0_log = 0;
        if (++s_703aa0_log <= 5) {
            printf("[TEX 0x90703AA0] w=%u h=%u fmt=%u first 64 bytes:\n  ", tu->width, tu->height, tu->format);
            const uint8_t* b = (const uint8_t*)guest_tex_data;
            for (int k = 0; k < 64; k++) printf("%02X ", b[k]);
            printf("\n");
            fflush(stdout);
        }
    }

    const uint32_t* p_words = (const uint32_t*)guest_tex_data;
    /* Content hash, used below to decide "the cached decode of this texture is still
     * valid".
     *
     * The old size estimate was `width*height/8` words - i.e. 0.5 bytes per pixel whatever
     * the format - and only ~64 words spread across THAT range were hashed. For an RGBA8
     * destination (4 bytes/texel) that covers just the first 1/8 of the texture, so an EFB
     * copy that rewrites anything past it leaves the hash unchanged and the host keeps
     * serving a stale decoded texture. That is exactly what a byte-identical "frozen"
     * frame looks like, and the Chapter-1 composite half is a 320x224 RGBA8 destination.
     * TLS_TEX_HASH_FULL (now ON by default; set it to 0 to get the old behaviour) hashes
     * across the format's real byte size with a denser sample. */
    static int s_hash_full = -1;
    if (s_hash_full < 0) {
        const char* e = getenv("TLS_TEX_HASH_FULL");
        s_hash_full = (e && atoi(e) == 0) ? 0 : 1;
    }
    uint32_t approx_words;
    uint32_t hash_samples = 64;
    if (s_hash_full) {
        uint32_t num = 4, den = 1;                 /* default: RGBA8, 4 bytes per texel */
        switch (tu->format) {
            case 0: case 8:                num = 1; den = 2; break;  /* I4 / CI4 (4bpp) */
            case 1: case 2: case 9: case 14: num = 1; den = 1; break; /* I8 IA4 CI8 CMPR */
            case 3: case 4: case 5:        num = 2; den = 1; break;  /* IA8 RGB565 RGB5A3 */
            default:                       num = 4; den = 1; break;  /* RGBA8 / default */
        }
        uint32_t tex_bytes = (uint32_t)(((uint64_t)tu->width * tu->height * num) / den);
        approx_words = tex_bytes / 4u;
        hash_samples = 256;
    } else {
        approx_words = (tu->width * tu->height) / 8; // minimum 0.5 bpp -> words
    }
    if (approx_words == 0) approx_words = 1;
    uint32_t step = (approx_words > hash_samples) ? (approx_words / hash_samples) : 1;
    uint32_t quick_hash = 0x811c9dc5;
    for (uint32_t wi = 0; wi < approx_words; wi += step) {
        quick_hash ^= p_words[wi];
        quick_hash *= 0x01000193;
    }

    int match_idx = -1;
    int oldest_idx = 0;
    uint32_t oldest_frame = 0xFFFFFFFF;

    for (int i = 0; i < GX_MAX_CACHED_TEXTURES; i++) {
        if (s_d3d11.tex_cache[i].tex &&
            s_d3d11.tex_cache[i].guest_addr == tu->guest_addr &&
            s_d3d11.tex_cache[i].width == tu->width &&
            s_d3d11.tex_cache[i].height == tu->height &&
            s_d3d11.tex_cache[i].format == tu->format &&
            ((tu->format != 8 && tu->format != 9) ||
             (s_d3d11.tex_cache[i].tlut_addr == tu->tlut_addr && s_d3d11.tex_cache[i].tlut_format == tu->tlut_format))) {
            match_idx = i;
            break;
        }
        if (!s_d3d11.tex_cache[i].tex) {
            oldest_idx = i;
            oldest_frame = 0;
        } else if (s_d3d11.tex_cache[i].last_frame < oldest_frame) {
            oldest_frame = s_d3d11.tex_cache[i].last_frame;
            oldest_idx = i;
        }
    }

    bool need_upload = false;
    int target_idx = match_idx;

    if (match_idx >= 0) {
        // GPU Cache hit - check if dynamic content modified
        if (s_d3d11.tex_cache[match_idx].hash != quick_hash) {
            need_upload = true;
            s_d3d11.tex_cache[match_idx].hash = quick_hash;
        }
    } else {
        target_idx = oldest_idx;
        bool can_reuse = (s_d3d11.tex_cache[target_idx].tex != NULL &&
                          s_d3d11.tex_cache[target_idx].srv != NULL &&
                          s_d3d11.tex_cache[target_idx].width == tu->width &&
                          s_d3d11.tex_cache[target_idx].height == tu->height);
        if (!can_reuse) {
            if (s_d3d11.tex_cache[target_idx].srv) {
                ID3D11ShaderResourceView_Release(s_d3d11.tex_cache[target_idx].srv);
                s_d3d11.tex_cache[target_idx].srv = NULL;
            }
            if (s_d3d11.tex_cache[target_idx].tex) {
                ID3D11Texture2D_Release(s_d3d11.tex_cache[target_idx].tex);
                s_d3d11.tex_cache[target_idx].tex = NULL;
            }

            D3D11_TEXTURE2D_DESC tdesc = {0};
            tdesc.Width = tu->width;
            tdesc.Height = tu->height;
            tdesc.MipLevels = 1;
            tdesc.ArraySize = 1;
            tdesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
            tdesc.SampleDesc.Count = 1;
            tdesc.Usage = D3D11_USAGE_DYNAMIC;
            tdesc.BindFlags = D3D11_BIND_SHADER_RESOURCE;
            tdesc.CPUAccessFlags = D3D11_CPU_ACCESS_WRITE;

            HRESULT hr = ID3D11Device_CreateTexture2D(s_d3d11.device, &tdesc, NULL, &s_d3d11.tex_cache[target_idx].tex);
            if (FAILED(hr) || !s_d3d11.tex_cache[target_idx].tex) {
                return s_d3d11.gx_tex_white_srv;
            }

            hr = ID3D11Device_CreateShaderResourceView(s_d3d11.device, (ID3D11Resource*)s_d3d11.tex_cache[target_idx].tex, NULL, &s_d3d11.tex_cache[target_idx].srv);
            if (FAILED(hr) || !s_d3d11.tex_cache[target_idx].srv) {
                ID3D11Texture2D_Release(s_d3d11.tex_cache[target_idx].tex);
                s_d3d11.tex_cache[target_idx].tex = NULL;
                return s_d3d11.gx_tex_white_srv;
            }
        }

        s_d3d11.tex_cache[target_idx].guest_addr = tu->guest_addr;
        s_d3d11.tex_cache[target_idx].width = tu->width;
        s_d3d11.tex_cache[target_idx].height = tu->height;
        s_d3d11.tex_cache[target_idx].format = tu->format;
        s_d3d11.tex_cache[target_idx].tlut_addr = tu->tlut_addr;
        s_d3d11.tex_cache[target_idx].tlut_format = tu->tlut_format;
        s_d3d11.tex_cache[target_idx].hash = quick_hash;
        need_upload = true;
    }

    s_d3d11.tex_cache[target_idx].last_frame = s_d3d11.frame_counter;

    if (need_upload) {
        uint32_t needed_bytes = tu->width * tu->height * 4;
        if (s_d3d11.gx_staging_capacity < needed_bytes) {
            free(s_d3d11.gx_staging_rgba);
            s_d3d11.gx_staging_capacity = needed_bytes < (2048 * 2048 * 4) ? (2048 * 2048 * 4) : needed_bytes;
            s_d3d11.gx_staging_rgba = (uint32_t*)malloc(s_d3d11.gx_staging_capacity);
        }
        decode_gx_texture((const uint8_t*)guest_tex_data, tu->width, tu->height, tu->format, s_d3d11.gx_staging_rgba, tu->tlut_addr, tu->tlut_format);

        /* Decoded-texture dump: the picture the shader will actually sample, so a
         * "this surface renders the wrong colour" report can be split into "the decode
         * is wrong" vs "the TEV stage is wrong" without another frame of guessing.
         * TLS_TEX_DUMP=0x90CDCBE0[,addr...] writes build/recomp/tex_<addr>_<WxH>_f<fmt>.ppm
         *
         * TLS_TEX_DUMP_FRAME=<guest frame> narrows the dump to ONE frame and keeps every
         * upload, appending `_p<frame>_s<ordinal>` to the name. The unconditional form
         * above overwrites one file per address, so it can only show the buffer's LAST
         * state in the run - which is why a scratch texture reused inside a single frame
         * (the tutorial page's 64x64 CMPR at 0x90D19B80 is drawn as the black
         * illustration box and again as the SKIP plate) could not be told apart from the
         * state its first draw actually sampled (handover 5c.43 C). The per-frame form
         * keeps the uploads in draw order. */
        {
            static uint32_t s_dump_addrs[8];
            static int s_dump_count = -1;
            static int s_dump_frame = -2;
            static int s_dump_ord[8];
            extern int g_runner_current_frame;
            if (s_dump_count < 0) {
                s_dump_count = 0;
                const char* e = getenv("TLS_TEX_DUMP");
                while (e && *e && s_dump_count < 8) {
                    while (*e == ',' || *e == ' ') e++;
                    if (!*e) break;
                    s_dump_addrs[s_dump_count++] = (uint32_t)strtoul(e, (char**)&e, 0);
                }
            }
            if (s_dump_frame == -2) {
                const char* f = getenv("TLS_TEX_DUMP_FRAME");
                s_dump_frame = f ? atoi(f) : -1;
            }
            for (int di = 0; di < s_dump_count; di++) {
                if (s_dump_addrs[di] != tu->guest_addr) continue;
                int ord = -1;
                if (s_dump_frame >= 0) {
                    if (s_dump_frame != g_runner_current_frame) continue;
                    ord = s_dump_ord[di];
                    if (ord >= 64) continue;   /* plenty for one frame, and bounded */
                    s_dump_ord[di] = ord + 1;
                }
                char path[160];
                if (ord >= 0) {
                    snprintf(path, sizeof(path), "build/recomp/tex_%08X_%ux%u_f%u_p%d_s%d.ppm",
                             tu->guest_addr, tu->width, tu->height, tu->format,
                             g_runner_current_frame, ord);
                } else {
                    snprintf(path, sizeof(path), "build/recomp/tex_%08X_%ux%u_f%u.ppm",
                             tu->guest_addr, tu->width, tu->height, tu->format);
                }
                FILE* df = fopen(path, "wb");
                if (df) {
                    fprintf(df, "P6\n%u %u\n255\n", tu->width, tu->height);
                    for (uint32_t pi = 0; pi < tu->width * tu->height; pi++) {
                        uint32_t px = s_d3d11.gx_staging_rgba[pi];
                        fputc((int)(px & 0xFF), df);
                        fputc((int)((px >> 8) & 0xFF), df);
                        fputc((int)((px >> 16) & 0xFF), df);
                    }
                    fclose(df);
                    printf("[TexDump] %s\n", path);
                    fflush(stdout);
                }
            }
        }

        uint32_t total_px = tu->width * tu->height;
        uint32_t nonzero_cnt = 0;
        uint32_t transparent_cnt = 0;
        for (uint32_t pi = 0; pi < total_px; pi++) {
            uint32_t px = s_d3d11.gx_staging_rgba[pi];
            if (px != 0) {
                nonzero_cnt++;
            }
            if ((px >> 24) < 8) {
                transparent_cnt++;
            }
        }
        bool is_all_zero = (nonzero_cnt == 0);
        s_d3d11.tex_cache[target_idx].is_all_zero = is_all_zero;

        // Decoded-alpha probe: distinguishes "the texture really is opaque" from
        // "the transparent background was lost in the decode / never streamed".
        // TLS_TEX_ALPHA_ADDR=0xA,0xB narrows it to those guest addresses and ignores the
        // 30-line cap, because the page's own atlases (0x9076E5E0 IA4, 0x90703AA0 I4) are
        // uploaded long after the EFB-copy churn has used the 30 lines up (5c.43 H).
        {
            static uint32_t s_alpha_addrs[8];
            static int s_alpha_addr_count = -1;
            if (s_alpha_addr_count < 0) {
                s_alpha_addr_count = 0;
                const char* e = getenv("TLS_TEX_ALPHA_ADDR");
                while (e && *e && s_alpha_addr_count < 8) {
                    while (*e == ',' || *e == ' ') e++;
                    if (!*e) break;
                    s_alpha_addrs[s_alpha_addr_count++] = (uint32_t)strtoul(e, (char**)&e, 0);
                }
            }
            bool want_this = false;
            for (int i = 0; i < s_alpha_addr_count; i++)
                if (s_alpha_addrs[i] == tu->guest_addr) want_this = true;
            if (want_this || getenv("TLS_TEX_ALPHA_PROBE")) {
                static uint32_t s_probe = 0;
                if (want_this || s_probe < 30) {
                    if (!want_this) s_probe++;
                    uint32_t opaque_cnt = 0, clear_cnt = 0, mid_cnt = 0;
                    for (uint32_t pi = 0; pi < total_px; pi++) {
                        uint32_t pa = s_d3d11.gx_staging_rgba[pi] >> 24;
                        if (pa >= 128) opaque_cnt++; else if (pa < 8) clear_cnt++; else mid_cnt++;
                    }
                    printf("[TEXPROBE] addr=0x%08X %ux%u fmt=%u opaque=%u clear=%u mid=%u corner=0x%08X center=0x%08X\n",
                           tu->guest_addr, tu->width, tu->height, tu->format,
                           opaque_cnt, clear_cnt, mid_cnt, s_d3d11.gx_staging_rgba[0],
                           s_d3d11.gx_staging_rgba[(tu->height / 2) * tu->width + tu->width / 2]);
                    fflush(stdout);
                }
            }
        }

        // Particle sparkle textures (e.g. ui_logo_select_shine 0x907427C0, 0x9076C200):
        // On Wii GX, TEV subtracts the solid golden-beige baseline color bias (around 191, 176, 125)
        // and routes luminance to alpha.
        // On PC, without TEV subtraction, sampling this texture adds the golden background across the
        // entire quad, drawing every particle as an opaque rectangular box.
        // Dynamic baseline subtraction for CMPR/opaque textures with uniform non-black backgrounds
        // (Wii GX TEV subtraction for particle glows, sparkles, and shines)
        // Baseline subtraction turns a CMPR *glow* sprite back into a soft particle:
        // the texture is a uniform light baseline (the golden-beige ~191,176,125 that
        // Wii GX TEV subtracts) with a brighter core, and without that subtraction the
        // whole quad samples as opaque beige - the hard-edged particle boxes.
        //
        // This used to be gated on a two-address allowlist (0x907427C0 / 0x9076C200)
        // whose addresses are never actually drawn, so no particle ever qualified.
        // Decide structurally instead, and require ALL of:
        //   - CMPR and larger than 16x16: the 4x4 dialog-border texture (0x904E5EE0)
        //     and the 8x8 sparkle (0x907826E0) are never baseline-subtracted;
        //   - no texel carries real alpha, so artwork that already has a cutout keeps
        //     its own alpha;
        //   - uniform non-black corners and a *positive* deviation above the baseline
        //     (max_delta > 10, tested below). Ink only ever goes darker than its
        //     background, never brighter, so dark-on-cream artwork such as the title
        //     logo (0x90782DE0) fails this test and is left untouched.
        bool is_glow = (tu->format == 14 && tu->width > 16 && tu->height > 16 && transparent_cnt == 0);
        if (is_glow) {
            uint32_t c_tl = s_d3d11.gx_staging_rgba[0];
            uint32_t c_tr = s_d3d11.gx_staging_rgba[tu->width - 1];
            uint32_t c_bl = s_d3d11.gx_staging_rgba[(tu->height - 1) * tu->width];
            uint32_t c_br = s_d3d11.gx_staging_rgba[tu->height * tu->width - 1];

            int r0 = (int)(uint8_t)c_tl, g0 = (int)(uint8_t)(c_tl >> 8), b0 = (int)(uint8_t)(c_tl >> 16);
            int r1 = (int)(uint8_t)c_tr, g1 = (int)(uint8_t)(c_tr >> 8), b1 = (int)(uint8_t)(c_tr >> 16);
            int r2 = (int)(uint8_t)c_bl, g2 = (int)(uint8_t)(c_bl >> 8), b2 = (int)(uint8_t)(c_bl >> 16);
            int r3 = (int)(uint8_t)c_br, g3 = (int)(uint8_t)(c_br >> 8), b3 = (int)(uint8_t)(c_br >> 16);

            // Check if all 4 corners are non-black and approximately match (within baseline color tolerance)
            bool is_non_black = (r0 > 20 || g0 > 20 || b0 > 20);
            bool corners_match = (abs(r0 - r1) <= 30 && abs(g0 - g1) <= 30 && abs(b0 - b1) <= 30) &&
                                 (abs(r0 - r2) <= 30 && abs(g0 - g2) <= 30 && abs(b0 - b2) <= 30) &&
                                 (abs(r0 - r3) <= 30 && abs(g0 - g3) <= 30 && abs(b0 - b3) <= 30);

            if (is_non_black && corners_match) {
                int base_r = (r0 + r1 + r2 + r3) / 4;
                int base_g = (g0 + g1 + g2 + g3) / 4;
                int base_b = (b0 + b1 + b2 + b3) / 4;

                // Find max positive deviation (glow core) and the darkest texel.
                // Ink artwork (dark lettering on a light plate, e.g. the title logo
                // 0x90782DE0) only deviates *downwards* from its baseline; subtracting
                // its baseline would erase both plate and lettering. Glow sprites
                // deviate upwards from a beige baseline.
                int max_delta = 1;
                int min_luma = 255;
                uint32_t total_px = tu->width * tu->height;
                /* "Ink art" is dark lettering on a FLAT plate: most texels sit on the plate.
                 * A photograph (the tutorial page's parchment, 0x921DEA60) also has dark
                 * detail but its luminance is spread out, so a bare
                 * `base_luma - min_luma > 60` test calls it ink art and the matte erases the
                 * whole sheet (5c.46 D). Count the plate instead. */
                int base_luma_pre = (base_r * 3 + base_g * 6 + base_b) / 10;
                uint32_t plate_px = 0;
                for (uint32_t pi = 0; pi < total_px; pi++) {
                    uint32_t px = s_d3d11.gx_staging_rgba[pi];
                    int r = (int)(uint8_t)px;
                    int g = (int)(uint8_t)(px >> 8);
                    int b = (int)(uint8_t)(px >> 16);
                    int lum = (r * 3 + g * 6 + b) / 10;
                    if (lum > base_luma_pre - 12 && lum < base_luma_pre + 12) plate_px++;
                    if (lum < min_luma) min_luma = lum;
                    int dr = r > base_r ? (r - base_r) : 0;
                    int dg = g > base_g ? (g - base_g) : 0;
                    int db = b > base_b ? (b - base_b) : 0;
                    int dmax = dr > dg ? (dr > db ? dr : db) : (dg > db ? dg : db);
                    if (dmax > max_delta) max_delta = dmax;
                }

                int base_luma = (base_r * 3 + base_g * 6 + base_b) / 10;
                float plate_frac = total_px ? (float)plate_px / (float)total_px : 0.0f;
                /* Ink art needs BOTH a big drop to the darkest texel AND a flat plate. The
                 * second half is what the old test lacked: the tutorial page's parchment
                 * (0x921DEA60, 512x512) has base_luma 133 / min 7 - so it passed - but its
                 * plate_frac is 0.022 because it is a photograph, and the matte erased the
                 * whole sheet. The title logo (0x90782DE0), which the matte exists for, is
                 * 0.737. Measured in 5c.46 D; threshold is the midpoint of that gap. */
                static float s_plate_min = -1.0f;
                if (s_plate_min < 0.0f) {
                    const char* e = getenv("TLS_INK_PLATE_MIN");
                    s_plate_min = e ? (float)atof(e) : 0.55f;
                }
                bool is_ink_art = ((base_luma - min_luma) > 60) && (plate_frac >= s_plate_min);
                {
                    static int s_stats = -1;
                    if (s_stats < 0) s_stats = getenv("TLS_INK_STATS") ? 1 : 0;
                    if (s_stats) {
                        printf("[InkStats] tex=0x%08X %ux%u fmt=%u base_luma=%d min_luma=%d "
                               "plate_frac=%.3f ink=%d max_delta=%d\n",
                               tu->guest_addr, tu->width, tu->height, tu->format, base_luma,
                               min_luma, plate_frac, (int)is_ink_art, max_delta);
                        fflush(stdout);
                    }
                }

                /* The glow path (baseline subtraction) exists for small particle sprites: a
                 * bright core on a beige baseline. Applying it to a full-bleed texture washes
                 * the whole page out and speckles its edges - measured on the parchment
                 * (0x921DEA60) in 5c.46 D, where restricting it to small textures is what
                 * keeps the sheet photographic. */
                static int s_glow_all = -1;
                if (s_glow_all < 0) s_glow_all = getenv("TLS_GLOW_ALL") ? 1 : 0;
                bool is_glow_candidate = s_glow_all || (tu->width <= 64 && tu->height <= 64);
                if (is_glow_candidate && max_delta > 10 && !is_ink_art) {
                    for (uint32_t pi = 0; pi < total_px; pi++) {
                        uint32_t px = s_d3d11.gx_staging_rgba[pi];
                        int r = (int)(uint8_t)px;
                        int g = (int)(uint8_t)(px >> 8);
                        int b = (int)(uint8_t)(px >> 16);
                        int dr = r > base_r ? (r - base_r) : 0;
                        int dg = g > base_g ? (g - base_g) : 0;
                        int db = b > base_b ? (b - base_b) : 0;
                        int dmax = dr > dg ? (dr > db ? dr : db) : (dg > db ? dg : db);

                        if (dmax <= 2) {
                            s_d3d11.gx_staging_rgba[pi] = 0; // Transparent background
                        } else {
                            float t = (float)dmax / (float)max_delta;
                            float alpha = t * t * (3.0f - 2.0f * t); // Smooth Hermite curve
                            uint8_t out_r = (uint8_t)(255 * (0.85f + 0.15f * t));
                            uint8_t out_g = (uint8_t)(base_g + (255 - base_g) * t);
                            uint8_t out_b = (uint8_t)(base_b + (255 - base_b) * t);
                            uint8_t out_a = (uint8_t)(alpha * 255.0f);
                            s_d3d11.gx_staging_rgba[pi] = (uint32_t)(out_r | (out_g << 8) | (out_b << 16) | (out_a << 24));
                        }
                    }
                } else if (is_ink_art && tls_ink_matte_allowed()) {
                    // Ink matte: dark artwork on a uniform light plate - the title logo
                    // (0x90782DE0: black lettering on cream) and the button-prompt icons are
                    // authored this way. Wii GX removes the plate in the TEV alpha stage,
                    // which we do not emulate, so the entire opaque plate got drawn.
                    //
                    // Reconstruct what that stage produces: alpha from how far each texel
                    // falls below the plate luminance (plate -> transparent, ink -> opaque),
                    // and white RGB so the batch's own vertex colour tints the artwork
                    // instead of the baked-in black.
                    int base_l = base_luma > 0 ? base_luma : 1;
                    for (uint32_t pi = 0; pi < total_px; pi++) {
                        uint32_t px = s_d3d11.gx_staging_rgba[pi];
                        int r = (int)(uint8_t)px;
                        int g = (int)(uint8_t)(px >> 8);
                        int b = (int)(uint8_t)(px >> 16);
                        int lum = (r * 3 + g * 6 + b) / 10;
                        int ink = base_l - lum;
                        if (ink < 0) ink = 0;
                        uint32_t a = (uint32_t)(ink * 255 / base_l);
                        if (a > 255) a = 255;
                        s_d3d11.gx_staging_rgba[pi] = 0x00FFFFFFu | (a << 24);
                    }
                }
            }
        }



        D3D11_MAPPED_SUBRESOURCE mapped_tex;
        if (SUCCEEDED(ID3D11DeviceContext_Map(s_d3d11.context, (ID3D11Resource*)s_d3d11.tex_cache[target_idx].tex, 0, D3D11_MAP_WRITE_DISCARD, 0, &mapped_tex))) {
            uint8_t* p_dst = (uint8_t*)mapped_tex.pData;
            const uint8_t* p_src = (const uint8_t*)s_d3d11.gx_staging_rgba;
            uint32_t row_bytes = tu->width * 4;
            for (uint32_t y = 0; y < tu->height; y++) {
                memcpy(p_dst, p_src, row_bytes);
                p_src += row_bytes;
                p_dst += mapped_tex.RowPitch;
            }
            ID3D11DeviceContext_Unmap(s_d3d11.context, (ID3D11Resource*)s_d3d11.tex_cache[target_idx].tex, 0);
        }
    }

    s_last_tex_all_zero = s_d3d11.tex_cache[target_idx].is_all_zero;
    return s_d3d11.tex_cache[target_idx].srv ? s_d3d11.tex_cache[target_idx].srv : s_d3d11.gx_tex_white_srv;
}

static D3D11_BLEND map_gx_src_blend_factor(uint8_t factor) {
    switch (factor) {
        case 0: return D3D11_BLEND_ZERO;
        case 1: return D3D11_BLEND_ONE;
        /* GX CMODE0 names the *operand*, not the slot: 2 = SRCCLR (the source colour),
         * 3 = INVSRCCLR, 6 = DSTALPHA, 7 = INVDSTALPHA - identically for the source and
         * the destination factor (Dolphin's BlendMode::BlendFactor enum is in exactly
         * this order). The host had 2/3 mapped to DEST_COLOR/INV_DEST_COLOR in the
         * *source* slot, which is a different operation as soon as source and
         * destination differ - and the brightest composite pass of the MENU tail is
         * `s=2 d=0` (GX: dst = src*src, the "bright pass"), so this was measurable
         * (handover 5c.23). */
        case 2: return D3D11_BLEND_SRC_COLOR;
        case 3: return D3D11_BLEND_INV_SRC_COLOR;
        case 4: return D3D11_BLEND_SRC_ALPHA;
        case 5: return D3D11_BLEND_INV_SRC_ALPHA;
        case 6: return D3D11_BLEND_DEST_ALPHA;
        case 7: return D3D11_BLEND_INV_DEST_ALPHA;
        default: return D3D11_BLEND_ONE;
    }
}

static D3D11_BLEND map_gx_dst_blend_factor(uint8_t factor) {
    switch (factor) {
        case 0: return D3D11_BLEND_ZERO;
        case 1: return D3D11_BLEND_ONE;
        case 2: return D3D11_BLEND_SRC_COLOR;
        case 3: return D3D11_BLEND_INV_SRC_COLOR;
        case 4: return D3D11_BLEND_SRC_ALPHA;
        case 5: return D3D11_BLEND_INV_SRC_ALPHA;
        case 6: return D3D11_BLEND_DEST_ALPHA;
        case 7: return D3D11_BLEND_INV_DEST_ALPHA;
        default: return D3D11_BLEND_ZERO;
    }
}

#define GX_MAX_CACHED_BLEND_STATES 32
static struct {
    uint32_t key;
    ID3D11BlendState* state;
} s_blend_cache[GX_MAX_CACHED_BLEND_STATES];
static uint32_t s_blend_cache_count = 0;

static ID3D11BlendState* get_or_create_blend_state(bool blend_enable, uint8_t src_factor, uint8_t dst_factor, bool subtract, bool guest_blend_enable) {
    static int s_gx_alpha_blend = -1;
    static int s_efb_alpha = -1;
    if (s_gx_alpha_blend < 0) s_gx_alpha_blend = getenv("TLS_GX_ALPHA_BLEND") ? 1 : 0;
    if (s_efb_alpha < 0) s_efb_alpha = getenv("TLS_EFB_ALPHA") ? 1 : 0;
    uint32_t key = (blend_enable ? 1u : 0u) | ((uint32_t)src_factor << 1) | ((uint32_t)dst_factor << 4) | (subtract ? (1u << 7) : 0u) |
                   (guest_blend_enable ? (1u << 8) : 0u) | (s_gx_alpha_blend ? (1u << 9) : 0u) |
                   (s_efb_alpha ? (1u << 10) : 0u);
    for (uint32_t i = 0; i < s_blend_cache_count; i++) {
        if (s_blend_cache[i].key == key) {
            return s_blend_cache[i].state;
        }
    }
    if (s_blend_cache_count >= GX_MAX_CACHED_BLEND_STATES) {
        return s_d3d11.blend_state_alpha;
    }

    D3D11_BLEND_DESC desc = {0};
    desc.RenderTarget[0].BlendEnable = blend_enable ? TRUE : FALSE;
    desc.RenderTarget[0].SrcBlend = map_gx_src_blend_factor(src_factor);
    desc.RenderTarget[0].DestBlend = map_gx_dst_blend_factor(dst_factor);
    desc.RenderTarget[0].BlendOp = subtract ? D3D11_BLEND_OP_REV_SUBTRACT : D3D11_BLEND_OP_ADD;
    /* GX applies the *same* CMODE0 factors to the alpha channel as to RGB - there is
     * no separate alpha blend in the GameCube/Wii pixel pipeline. The host has always
     * hardcoded ONE / INV_SRC_ALPHA here, which keeps the EFB alpha pinned at 1 for
     * every blended batch. That matters far beyond the alpha channel: the composite
     * tail's additive passes are SRCALPHA/ONE, so their strength is `src.rgb * src.a`,
     * and src.a is the EFB alpha carried through the EFB copies. TLS_GX_ALPHA_BLEND=1
     * makes the alpha channel follow the guest's factors so the difference can be
     * measured instead of argued (handover 5c.16 item 8).
     *
     * Measured in 5c.23: with alpha hardcoded to ONE/INV_SRC_ALPHA *and* the EFB cleared
     * to alpha 1.0, the framebuffer alpha is 255 after **every** batch of the MENU frame
     * (TLS_BATCH_PROBE), so every EFB copy the composite tail samples carries a=255 and
     * every `SRCALPHA/ONE` pass runs at full strength. GX *replaces* the alpha when
     * blending is disabled (`dst.a = src.a`), which D3D11 expresses as ONE/ZERO.
     * TLS_EFB_ALPHA=1 enables both halves of the faithful behaviour: the guest's factors
     * for alpha when the guest blends, and alpha *replace* whenever the guest had
     * blending disabled (the host forces colour blending on for some 2D icon/text
     * batches below, so the two can disagree). */
    if (s_efb_alpha || s_gx_alpha_blend) {
        if (s_efb_alpha && !guest_blend_enable) {
            desc.RenderTarget[0].SrcBlendAlpha = D3D11_BLEND_ONE;
            desc.RenderTarget[0].DestBlendAlpha = D3D11_BLEND_ZERO;
            desc.RenderTarget[0].BlendOpAlpha = D3D11_BLEND_OP_ADD;
        } else {
            desc.RenderTarget[0].SrcBlendAlpha = map_gx_src_blend_factor(src_factor);
            desc.RenderTarget[0].DestBlendAlpha = map_gx_dst_blend_factor(dst_factor);
            desc.RenderTarget[0].BlendOpAlpha = subtract ? D3D11_BLEND_OP_REV_SUBTRACT : D3D11_BLEND_OP_ADD;
        }
    } else {
        desc.RenderTarget[0].SrcBlendAlpha = D3D11_BLEND_ONE;
        desc.RenderTarget[0].DestBlendAlpha = D3D11_BLEND_INV_SRC_ALPHA;
        desc.RenderTarget[0].BlendOpAlpha = D3D11_BLEND_OP_ADD;
    }
    desc.RenderTarget[0].RenderTargetWriteMask = D3D11_COLOR_WRITE_ENABLE_ALL;

    ID3D11BlendState* state = NULL;
    HRESULT hr = ID3D11Device_CreateBlendState(s_d3d11.device, &desc, &state);
    if (SUCCEEDED(hr) && state) {
        s_blend_cache[s_blend_cache_count].key = key;
        s_blend_cache[s_blend_cache_count].state = state;
        s_blend_cache_count++;
        return state;
    }
    return s_d3d11.blend_state_alpha;
}

static void save_backbuffer_bmp(const char* bmp_path) {
    ID3D11Texture2D* back_buffer = NULL;
    if (SUCCEEDED(IDXGISwapChain_GetBuffer(s_d3d11.swap_chain, 0, &IID_ID3D11Texture2D, (void**)&back_buffer))) {
        D3D11_TEXTURE2D_DESC desc;
        ID3D11Texture2D_GetDesc(back_buffer, &desc);
        desc.Usage = D3D11_USAGE_STAGING;
        desc.BindFlags = 0;
        desc.CPUAccessFlags = D3D11_CPU_ACCESS_READ;
        desc.MiscFlags = 0;
        ID3D11Texture2D* staging = NULL;
        if (SUCCEEDED(ID3D11Device_CreateTexture2D(s_d3d11.device, &desc, NULL, &staging))) {
            ID3D11DeviceContext_CopyResource(s_d3d11.context, (ID3D11Resource*)staging, (ID3D11Resource*)back_buffer);
            D3D11_MAPPED_SUBRESOURCE mapped;
            if (SUCCEEDED(ID3D11DeviceContext_Map(s_d3d11.context, (ID3D11Resource*)staging, 0, D3D11_MAP_READ, 0, &mapped))) {
                FILE* f_bmp = fopen(bmp_path, "wb");
                if (f_bmp) {
                    uint32_t w = desc.Width;
                    uint32_t h = desc.Height;
                    uint32_t row_padded = (w * 3 + 3) & (~3);
                    uint32_t file_size = 54 + row_padded * h;
                    uint8_t bmp_hdr[54] = {
                        'B', 'M',
                        (uint8_t)file_size, (uint8_t)(file_size >> 8), (uint8_t)(file_size >> 16), (uint8_t)(file_size >> 24),
                        0, 0, 0, 0, 54, 0, 0, 0,
                        40, 0, 0, 0,
                        (uint8_t)w, (uint8_t)(w >> 8), (uint8_t)(w >> 16), (uint8_t)(w >> 24),
                        (uint8_t)h, (uint8_t)(h >> 8), (uint8_t)(h >> 16), (uint8_t)(h >> 24),
                        1, 0, 24, 0, 0, 0, 0, 0,
                        (uint8_t)(row_padded * h), (uint8_t)((row_padded * h) >> 8), (uint8_t)((row_padded * h) >> 16), (uint8_t)((row_padded * h) >> 24),
                        0x13, 0x0B, 0, 0, 0x13, 0x0B, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
                    };
                    fwrite(bmp_hdr, 1, 54, f_bmp);
                    uint8_t* bmp_row = (uint8_t*)calloc(1, row_padded);
                    if (bmp_row) {
                        for (int y = (int)h - 1; y >= 0; y--) {
                            const uint8_t* row = (const uint8_t*)mapped.pData + y * mapped.RowPitch;
                            for (uint32_t x = 0; x < w; x++) {
                                bmp_row[x * 3 + 0] = row[x * 4 + 2]; // B
                                bmp_row[x * 3 + 1] = row[x * 4 + 1]; // G
                                bmp_row[x * 3 + 2] = row[x * 4 + 0]; // R
                            }
                            fwrite(bmp_row, 1, row_padded, f_bmp);
                        }
                        free(bmp_row);
                    }
                    fclose(f_bmp);
                }
                ID3D11DeviceContext_Unmap(s_d3d11.context, (ID3D11Resource*)staging, 0);
            }
            ID3D11Texture2D_Release(staging);
        }
        ID3D11Texture2D_Release(back_buffer);
    }
}

/* Copy the finished backbuffer aside so EFB copies see a complete picture instead of
 * the mid-frame clear colour. Called at the end of d3d11_present(), after the GX
 * batches have been drawn. */
static void d3d11_capture_efb_snapshot(void) {
    ID3D11Texture2D* back_buffer = NULL;
    if (FAILED(IDXGISwapChain_GetBuffer(s_d3d11.swap_chain, 0, &IID_ID3D11Texture2D, (void**)&back_buffer)))
        return;
    D3D11_TEXTURE2D_DESC desc;
    ID3D11Texture2D_GetDesc(back_buffer, &desc);
    HRESULT hr_snap = 0;
    if (!s_d3d11.efb_snapshot || s_d3d11.efb_snapshot_w != desc.Width || s_d3d11.efb_snapshot_h != desc.Height) {
        if (s_d3d11.efb_snapshot) ID3D11Texture2D_Release(s_d3d11.efb_snapshot);
        D3D11_TEXTURE2D_DESC sd = desc;
        sd.Usage = D3D11_USAGE_DEFAULT;
        sd.BindFlags = 0;
        sd.CPUAccessFlags = 0;
        sd.MiscFlags = 0;
        sd.SampleDesc.Count = 1;
        sd.SampleDesc.Quality = 0;
        sd.MipLevels = 1;
        sd.ArraySize = 1;
        hr_snap = ID3D11Device_CreateTexture2D(s_d3d11.device, &sd, NULL, &s_d3d11.efb_snapshot);
        if (FAILED(hr_snap)) {
            printf("[EfbSnapshot] creation FAILED (0x%08lX)\n", (unsigned long)hr_snap);
            fflush(stdout);
            s_d3d11.efb_snapshot = NULL;
            ID3D11Texture2D_Release(back_buffer);
            return;
        }
        s_d3d11.efb_snapshot_w = desc.Width;
        s_d3d11.efb_snapshot_h = desc.Height;
        printf("[EfbSnapshot] created %ux%u\n", desc.Width, desc.Height);
        fflush(stdout);
    }
    ID3D11DeviceContext_CopyResource(s_d3d11.context, (ID3D11Resource*)s_d3d11.efb_snapshot,
                                     (ID3D11Resource*)back_buffer);
    ID3D11Texture2D_Release(back_buffer);
}

/* Decode one destination texel of an EFB copy in the layout the writer below produced.
 * `format` is the copy destination format (GX_TF_*), `disp` the 16bpp linear scanout
 * buffer, `linear4` the TLS_EFB_LINEAR debug layout. This exists because the probe that
 * measures a copy must decode with the *same* rule the write used: reading an RGB565
 * destination as RGBA8 tiles reports dstavg != srcavg for a write that is correct, and
 * that would make the chain probe lie exactly when TLS_EFB_COPY_FMT is on. */
/* R8 (EFB-copy ids 8 and 1) is the GX_TF_I8 geometry: 8 texels wide by 4 tall,
 * 32 bytes per tile - not the 4x4 tile the other 32-byte formats use. The
 * texture decoder in this file says so explicitly ("case 1: GX_TF_I8 (8x4
 * tiles, 32 bytes)"), and a destination the guest samples has to be written in
 * the layout that decoder will read.
 *
 * Opt-in via TLS_R8_TILE_8X4 because the title's bloom chain also uses R8 and
 * the 1448 invariant is the only verified reference this project has: flipping
 * the default would move it with nothing to check the new value against.
 * Both the writer and efb_dst_decode_texel read this, so the chain probe stays
 * honest - a probe that decodes with a different rule than the writer is worse
 * than no probe. */
static int s_clears_this_frame = 0;
static int s_xfbs_this_frame = 0;
static float s_last_clear[4] = {0,0,0,0};

static int efb_r8_tile_8x4(void) {
    static int s = -1;
    if (s < 0) s = getenv("TLS_R8_TILE_8X4") ? 1 : 0;
    return s;
}

static void efb_dst_decode_texel(const uint8_t* guest, uint32_t format, uint32_t dst_w,
                                 uint32_t gx, uint32_t gy, int disp, int linear4,
                                 uint8_t* r, uint8_t* g, uint8_t* b, uint8_t* a) {
    *r = *g = *b = 0; *a = 255;
    if (disp) {
        uint16_t v = ((const uint16_t*)guest)[(size_t)gy * 640u + gx];
        *r = (uint8_t)(((v >> 11) & 0x1F) << 3);
        *g = (uint8_t)(((v >> 5) & 0x3F) << 2);
        *b = (uint8_t)((v & 0x1F) << 3);
        *a = 255;
        return;
    }
    if (linear4) {
        const uint8_t* p = guest + ((size_t)gy * dst_w + gx) * 4;
        *r = p[0]; *g = p[1]; *b = p[2]; *a = p[3];
        return;
    }
    uint32_t tiles_x = (dst_w + 3) / 4;
    uint32_t tile = (gy / 4) * tiles_x + (gx / 4);
    uint32_t within = (gy % 4) * 4 + (gx % 4);
    /* R8 (EFB-copy ids 8 and 1) is the GX_TF_I8 geometry: 8 texels wide by 4 tall,
     * 32 bytes per tile - not the 4x4 tile the other 32-byte formats use. The
     * texture decoder in this file says so explicitly ("case 1: GX_TF_I8 (8x4
     * tiles, 32 bytes)"), and a destination the guest samples has to be written
     * in the layout that decoder will read. Opt-in via TLS_R8_TILE_8X4 because
     * the title's bloom chain also uses R8 and the 1448 invariant is the only
     * verified reference we have. */
    /* R8 uses the 8x4 GX_TF_I8 tile; see efb_r8_tile_8x4(). Must agree with
     * the writer or the chain probe lies. */
    const bool r8 = (format == 8 || format == 1);
    if (efb_r8_tile_8x4() && r8) {
        tiles_x = (dst_w + 7) / 8;
        tile = (gy / 4) * tiles_x + (gx / 8);
        within = (gy % 4) * 8 + (gx % 8);
    }
    switch (format) {
        case 0: {           /* R4: 8x8 tiles, 32 bytes, high nibble = even texel */
            uint32_t tiles_x8 = (dst_w + 7) / 8;
            uint32_t tile8  = (gy / 8) * tiles_x8 + (gx / 8);
            uint32_t byte_i = (gy % 8) * 4 + (gx % 8) / 2;
            uint8_t  bv     = guest[(size_t)tile8 * 32 + byte_i];
            uint8_t  nib    = ((gx & 1u) == 0) ? (uint8_t)(bv >> 4) : (uint8_t)(bv & 0x0F);
            *r = *g = *b = (uint8_t)(nib * 17);
            *a = 255;
            break;
        }
        case 4: case 10: {   /* RGB565: 32-byte 4x4 tile of big-endian u16 */
            const uint8_t* t = guest + (size_t)tile * 32 + within * 2;
            uint16_t v = (uint16_t)((t[0] << 8) | t[1]);
            *r = (uint8_t)(((v >> 11) & 0x1F) << 3);
            *g = (uint8_t)(((v >> 5) & 0x3F) << 2);
            *b = (uint8_t)((v & 0x1F) << 3);
            *a = 255;   /* RGB565 destinations have no alpha: GX samples a = 1 */
            break;
        }
        case 5: case 11: {   /* RGB5A3: bit 15 set = 1-bit alpha + RGB555 */
            const uint8_t* t = guest + (size_t)tile * 32 + within * 2;
            uint16_t v = (uint16_t)((t[0] << 8) | t[1]);
            *a = (v & 0x8000) ? 255 : 0;
            *r = (uint8_t)(((v >> 10) & 0x1F) << 3);
            *g = (uint8_t)(((v >> 5) & 0x1F) << 3);
            *b = (uint8_t)((v & 0x1F) << 3);
            break;
        }
        case 3: case 9: {   /* RA8 / IA8: 32-byte 4x4 tile of (alpha, intensity) pairs */
            const uint8_t* t = guest + (size_t)tile * 32 + within * 2;
            *a = t[0];
            *r = *g = *b = t[1];
            break;
        }
        case 7: {           /* A8: 32-byte 4x4 tile of alpha */
            *a = guest[(size_t)tile * 32 + within];
            *r = *g = *b = 0;
            break;
        }
        case 8: {           /* R8: 32-byte 4x4 tile of red */
            *r = guest[(size_t)tile * 32 + within];
            *g = *b = *r;
            *a = 255;
            break;
        }
        case 1: {           /* R8 again: id 1 is the same memory layout as id 8 */
            *r = guest[(size_t)tile * 32 + within];
            *g = *b = *r;
            *a = 255;
            break;
        }
        default: {  /* GX_TF_RGBA8: 32B of A/R pairs then 32B of G/B pairs */
            const uint8_t* t = guest + (size_t)tile * 64;
            *a = t[within * 2 + 0];
            *r = t[within * 2 + 1];
            *g = t[32 + within * 2 + 0];
            *b = t[32 + within * 2 + 1];
            break;
        }
    }
}

/* GX EFB -> texture copy (BP 0x52). Reads the requested GX-space rectangle out of the
 * backbuffer and writes it into guest memory as a GX RGBA8 texture, in the same 4x4
 * tile layout that decode_gx_texture() reads (32 bytes of A/R pairs, then 32 bytes of
 * G/B pairs, per tile). This is what produces the water reflection, the menu blur and
 * the guest's own VI framebuffers - none of which existed while the copy was ignored
 * (handover 5c.11). */
static void d3d11_efb_copy_to_guest(uint32_t dst_guest, uint32_t x0, uint32_t y0,
                                    uint32_t x1, uint32_t y1, uint32_t format, int half_scale,
                                    uint32_t pitch, uint32_t exec) {
    if (!s_d3d11.device || !s_d3d11.context || !s_d3d11.swap_chain) return;
    /* Destination pixel format. Until now every copy was written as a 4-byte RGBA8 tile,
     * which is only right for the copies whose destination the guest samples as RGBA8
     * (GX_TF_RGBA8 = 6). The MENU's composite chain copies into **RGB565** destinations
     * as well - Dolphin's own per-copy dumps name them `..._320x224_4.png` - and the
     * guest samples those with GX_TF_RGB565, i.e. 2 bytes per pixel in 32-byte 4x4
     * tiles. Writing 64-byte RGBA8 tiles there puts every texel in the wrong place and
     * hands the 3D passes a garbage "previous frame" texture: measured at MENU frame
     * 1448, batch b13's TEV stage 3 samples `0x9038D1C0 320x224 fmt=4 avg=(127,112,0)`
     * and *adds* it, which is exactly the saturated red the foreground rock shows.
     *
     * TLS_EFB_COPY_FMT=1 writes the destination in the format's real tile layout and
     * derives the destination width from the pitch and the format's bytes per pixel
     * (tile row = pitch*32 bytes = dst_w*4*bpp, so dst_w = pitch*8/bpp), which
     * reproduces the guest's own pitch/dstw pairs (`pitch=80 -> 320` for RGB565,
     * `pitch=160 -> 320` for RGBA8) instead of the old source/half rule.
     *
     * PROMOTED to the default (handover 5c.23): verified on the attract/title screen,
     * where it fixes the *sizes* of the bloom chain's destinations - the title's
     * 160x112 R8 luminance chain used to be written as 40x28 RGBA8, and its 640x448
     * RA8 copies as 320x224 - and every destination then reproduces the size Dolphin's
     * own per-copy dumps name (`160x112_1`, `80x56_6`, `320x224_4`, `640x448_3`).
     * `TLS_EFB_COPY_FMT=0` restores the old write for A/B. */
    static int s_copy_fmt = -1;
    if (s_copy_fmt < 0) {
        const char* cf = getenv("TLS_EFB_COPY_FMT");
        s_copy_fmt = cf ? (atoi(cf) != 0) : 1;
    }
    int is_xfb_copy = (int)((exec >> 14) & 1u);
    if (is_xfb_copy) s_xfbs_this_frame++;
    uint32_t bpp = 4;
    int dst_supported = 1;
    if (s_copy_fmt) {
        if (is_xfb_copy) {
            bpp = 2;                  /* 16bpp linear scanout buffer, see below */
        } else {
            /* UPE_Copy::tp_realFormat() values (Dolphin's EFBCopyFormat), and the bytes
             * per pixel each one occupies in its 4x4 tile:
             *   0 R4 .5 | 1 R8 1 | 2 RA4 .5 | 3 RA8 2 | 4 RGB565 2 | 5 RGB5A3 2
             *   6 RGBA8 4 | 7 A8 1 | 8 R8 1 | 9 RA8 2 | 10 RGB565 2 | 11 RGB5A3 2
             *   12 RGBA8 4 | 13..15 Z8/Z16/Z24
             * Formats 8 (R8) and 11 (RGB5A3) were the ones the title screen's bloom chain
             * uses, and treating them as "unimplemented -> write RGBA8" also halved or
             * quartered the destination *width* (dst_w = pitch*8/bpp), so the guest
             * sampled a 160x112 R8 luminance chain as a 40x28 RGBA8 texture - measured:
             * `[EfbChain] copy=5 dst=0x9038D1C0 40x28 fmt=8` while the copy source is
             * 160x112, and the final `SRCALPHA/INVSRCALPHA` pass then drags the title
             * screen from a flat 220 plate to the black-cornered radial glow
             * (handover 5c.23). */
            switch (format) {
                case 6: case 12: bpp = 4; break;  /* RGBA8: 8B A/R + 8B G/B per 4x4 tile */
                case 4: case 10: bpp = 2; break;  /* RGB565: 32B of big-endian u16 */
                case 5: case 11: bpp = 2; break;  /* RGB5A3: 32B of big-endian u16 */
                case 3: case 9:  bpp = 2; break;  /* RA8: 32B of (alpha, red) pairs */
                case 7: bpp = 1; break;           /* A8: 32B of alpha */
                case 8: bpp = 1; break;           /* R8: 32B of red (intensity) */
                case 0: bpp = 1; break;           /* R4: 8x8 tiles, 4 bits per texel. A tile
                                                   * row is (dst_w/8)*32 = dst_w*4 bytes and
                                                   * equals pitch*32, so dst_w = pitch*8 -
                                                   * which is what bpp = 1 yields here. */
                case 1: bpp = 1; break;           /* R8 again - the id the Chapter-1
                                                   * composite chain uses (5c.25 §4c).
                                                   * Same 32B 4x4 tile as 8; leaving it
                                                   * on the RGBA8 fallback quadrupled
                                                   * dst_w (pitch*8/4 instead of *8/1). */
                default:
                    /* Keep the old behaviour for the formats that are not implemented
                     * (an RGBA8 write) rather than dropping the copy: a skipped copy
                     * leaves guest memory stale, which is worse than a wrong layout. */
                    bpp = 4;
                    dst_supported = 0;
                    break;
            }
        }
    }
    if (!dst_supported) {
        static uint32_t s_unsup = 0;
        if (s_unsup < 8) {
            printf("[EfbCopy] destination format %u not implemented, writing RGBA8 (dst=0x%08X)\n",
                   format, dst_guest);
            fflush(stdout);
            s_unsup++;
        }
    }
    if (x1 < x0 || y1 < y0) return;

    uint32_t w = x1 - x0 + 1;
    uint32_t h = y1 - y0 + 1;
    if (w > 1024 || h > 1024) return;

    /* Half-scale copies (see GxPendingEfbCopy.half_scale and handover 5c.15): the
     * destination holds w/2 x h/2 pixels, so the source rectangle is downsampled and the
     * 4x4 tile grid is dst_w/4 tiles wide, not w/4. Writing at the source size is what
     * produced the 4-pixel horizontal stripes the composite quads show. */
    uint32_t dst_w = half_scale ? ((w + 1) / 2) : w;
    uint32_t dst_h = half_scale ? ((h + 1) / 2) : h;
    uint32_t step = half_scale ? 2 : 1;
    /* TLS_EFB_COPY_GEOM=1 derives the destination size from the hardware registers
     * instead: BP 0x52 bit 14 says the copy goes into the 16bpp *linear* scanout buffer
     * (stride = pitch*32 bytes, so width = pitch*16), otherwise the destination is a 4x4
     * tiled texture whose tile row is (width/4)*64 = width*16 bytes == pitch*32, so
     * width = pitch*2. Heights follow from a uniform shrink factor source_w/dst_w.
     * The old rule above only ever produced a 2:1 shrink, so every 4:1 and 8:1 copy the
     * guest asks for (160x112 and 80x56 destinations, which the Dolphin reference dumps
     * show) was written 2-4x too large, straddling the next buffer - measured copy by
     * copy on MENU frame 1448 in handover 5c.17. */
    static int s_geom = -1;
    if (s_geom < 0) s_geom = getenv("TLS_EFB_COPY_GEOM") ? 1 : 0;
    if (s_copy_fmt) {
        /* Format-aware version of the same derivation: a 4x4-tiled destination's tile
         * row is dst_w*4*bpp bytes and equals pitch*32, so dst_w = pitch*8/bpp. */
        if (is_xfb_copy) {
            uint32_t ww = (pitch * 32u) / 2u;   /* 16bpp linear scanout buffer */
            if (ww) dst_w = ww;
            dst_h = h;
            step = 1;
        } else if (pitch) {
            uint32_t ww = (pitch * 8u) / bpp;
            if (ww && ww <= w) {
                dst_w = ww;
                step = (w % dst_w) == 0 ? (w / dst_w) : 1;
                if (step == 0) step = 1;
                dst_h = h / step;
            }
        }
    } else if (s_geom) {
        if (is_xfb_copy) {
            uint32_t ww = (pitch * 32u) / 2u;
            if (ww) dst_w = ww;
            dst_h = h;
            step = 1;
        } else if (pitch) {
            uint32_t ww = pitch * 2u;
            if (ww > w) ww = w;
            if (ww) dst_w = ww;
            step = (dst_w && (w % dst_w) == 0) ? (w / dst_w) : 1;
            if (step == 0) step = 1;
            dst_h = h / step;
        }
    }
    if (dst_w == 0) dst_w = 1;
    if (dst_h == 0) dst_h = 1;
    if (step == 0) step = 1;

    uint8_t* guest = (uint8_t*)host_resolve_gx_guest_addr(dst_guest);
    if (!guest) {
        static int s_addr_reported = 0;
        if (s_addr_reported++ < 4) {
            printf("[EfbCopy] destination 0x%08X is not mapped; copy skipped\n", dst_guest);
            fflush(stdout);
        }
        return;
    }

    /* The two ways to source an EFB copy, and why neither is the default yet: see
     * handover 5c.15. The pipeline records every GXCopyTex in stream order with the
     * vertex index that was current when the guest issued it, and this backend can
     * replay the queue from inside its batch loop so a copy reads the frame as drawn
     * so far (TLS_DEFER_EFB_COPY=1). That is what the hardware does, and it is
     * measurable: the copies of one frame then capture distinct states of the same
     * frame (black clear -> cave -> progressively brighter) instead of all capturing
     * the previous frame.
     *
     * It is NOT the default because it makes both the title attract screen and the
     * MENU background wrong in a different way (white instead of the previous
     * behaviour), i.e. the composite chain that consumes these copies has a second
     * defect that has not been found yet. Keeping the old source as the default keeps
     * the tree visually identical to 510426d while the new path stays available.
     *
     * TLS_EFB_PREV_FRAME=1 forces the old "last completed frame" source in either mode. */
    static int s_defer = -1;
    static int s_prev_frame = -1;
    if (s_defer < 0) s_defer = getenv("TLS_DEFER_EFB_COPY") ? 1 : 0;
    if (s_prev_frame < 0) s_prev_frame = getenv("TLS_EFB_PREV_FRAME") ? 1 : 0;
    /* TLS_EFB_SRC_CURRENT=1 forces the copy to read the CURRENT back buffer even
     * though the snapshot exists. The default path reads the previous-frame
     * snapshot, and the alternate-frame staleness (5c.27 §9) makes every even
     * present byte-identical - which is what a composite of a composite would
     * converge to. This flag is how to tell a feedback loop from a stale write:
     * it changes only the copy *source*, nothing else. */
    static int s_src_current = -1;
    if (s_src_current < 0) s_src_current = getenv("TLS_EFB_SRC_CURRENT") ? 1 : 0;
    {
        static int s_src = 0;
        if (s_src < 3) { s_src++; printf("[EfbCopySrc] reading %s (deferred=%d)\n",
            (s_prev_frame || (!s_defer && s_d3d11.efb_snapshot)) ? "previous-frame snapshot" : "current backbuffer",
            s_defer); fflush(stdout); }
    }
    ID3D11Texture2D* source = NULL;
    bool have_backbuffer = false;
    if (!s_src_current && (s_prev_frame || (!s_defer && s_d3d11.efb_snapshot))) {
        source = s_d3d11.efb_snapshot;
    } else {
        if (FAILED(IDXGISwapChain_GetBuffer(s_d3d11.swap_chain, 0, &IID_ID3D11Texture2D, (void**)&source)))
            return;
        have_backbuffer = true;
    }

    D3D11_TEXTURE2D_DESC desc;
    ID3D11Texture2D_GetDesc(source, &desc);
    desc.Usage = D3D11_USAGE_STAGING;
    desc.BindFlags = 0;
    desc.CPUAccessFlags = D3D11_CPU_ACCESS_READ;
    desc.MiscFlags = 0;
    ID3D11Texture2D* staging = NULL;
    if (SUCCEEDED(ID3D11Device_CreateTexture2D(s_d3d11.device, &desc, NULL, &staging))) {
        ID3D11DeviceContext_CopyResource(s_d3d11.context, (ID3D11Resource*)staging, (ID3D11Resource*)source);
        D3D11_MAPPED_SUBRESOURCE mapped;
        if (SUCCEEDED(ID3D11DeviceContext_Map(s_d3d11.context, (ID3D11Resource*)staging, 0, D3D11_MAP_READ, 0, &mapped))) {
            const uint8_t* src = (const uint8_t*)mapped.pData;
            /* Is the source we are about to sample actually the drawn frame? Scan a
             * coarse grid of the mapped backbuffer and report its brightness range.
             * TLS_EFB_SAMPLE=1. */
            {
                static int s_sample = -1;
                if (s_sample < 0) s_sample = getenv("TLS_EFB_SAMPLE") ? 1 : 0;
                if (s_sample) {
                    static int s_samples = 0;
                    extern int g_runner_current_frame;
                    if (g_runner_current_frame >= 1100 && s_samples < 4) {
                        s_samples++;
                        unsigned maxlum = 0; unsigned long sum = 0, n = 0;
                        for (UINT yy = 0; yy < desc.Height; yy += 16) {
                            const uint8_t* r2 = src + (size_t)yy * mapped.RowPitch;
                            for (UINT xx = 0; xx < desc.Width; xx += 16) {
                                const uint8_t* p2 = r2 + (size_t)xx * 4;
                                unsigned lum = p2[0] + p2[1] + p2[2];
                                if (lum > maxlum) maxlum = lum;
                                sum += lum; n++;
                            }
                        }
                        printf("[EfbSample] src=%s %ux%u avg=%.1f max=%u (of 765)\n",
                               have_backbuffer ? "backbuffer" : "snapshot", desc.Width, desc.Height,
                               (double)sum / (double)n, maxlum);
                        fflush(stdout);
                    }
                }
            }
            /* What did each copy of one guest frame actually capture? Samples the same
             * grid the copy is about to read and prints the average colour of the source
             * rectangle, so a destination holding the wrong picture can be traced to the
             * pixels it was written from. TLS_EFB_SAMPLE_FRAME=<guest frame>. */
            {
                static int s_sf = -2;
                if (s_sf == -2) {
                    const char* f = getenv("TLS_EFB_SAMPLE_FRAME");
                    s_sf = f ? atoi(f) : -1;
                }
                extern int g_runner_current_frame;
                if (s_sf >= 0 && g_runner_current_frame == s_sf) {
                    float sx0 = (s_d3d11.vp_w > 0.0f) ? (s_d3d11.vp_w / 640.0f) : (float)desc.Width / 640.0f;
                    float sy0 = (s_d3d11.vp_h > 0.0f) ? (s_d3d11.vp_h / 480.0f) : (float)desc.Height / 480.0f;
                    unsigned long sr = 0, sg = 0, sb = 0, n = 0;
                    for (uint32_t gy = 0; gy < h; gy += 8) {
                        uint32_t py = (uint32_t)(s_d3d11.vp_y + ((float)(y0 + gy) + 0.5f) * sy0);
                        if (py >= desc.Height) py = desc.Height - 1;
                        const uint8_t* row = src + (size_t)py * mapped.RowPitch;
                        for (uint32_t gx = 0; gx < w; gx += 8) {
                            uint32_t px = (uint32_t)(s_d3d11.vp_x + ((float)(x0 + gx) + 0.5f) * sx0);
                            if (px >= desc.Width) px = desc.Width - 1;
                            const uint8_t* p = row + (size_t)px * 4;
                            sr += p[2]; sg += p[1]; sb += p[0]; n++;
                        }
                    }
                    if (n == 0) n = 1;
                    printf("[EfbSampleCopy] frame=%d dst=0x%08X %ux%u src=(%u,%u)-(%u,%u) avg=(%lu,%lu,%lu)\n",
                           g_runner_current_frame, dst_guest, w, h, x0, y0, x1, y1,
                           sr / n, sg / n, sb / n);
                    fflush(stdout);
                }
            }
            float sx = (s_d3d11.vp_w > 0.0f) ? (s_d3d11.vp_w / 640.0f) : (float)desc.Width / 640.0f;
            float sy = (s_d3d11.vp_h > 0.0f) ? (s_d3d11.vp_h / 480.0f) : (float)desc.Height / 480.0f;
            uint32_t tiles_x = (dst_w + 3) / 4;
            /* A/B: display copies may want a row-linear scanout buffer rather than the
             * 4x4-tiled texture layout. TLS_EFB_LINEAR=1 writes rows linearly (R,G,B,A)
             * so the two can be compared on one frame. The two VI scanout buffers are
             * 16bpp linear (614400 B each: the gap between 0x900037C0 and 0x900997E0 is
             * 614432). Writing 32-bit pixels into them overran into the next buffer - that
             * was the doubled image in the guest framebuffer dump (handover 5c.11).
             * Display copies therefore go out as RGB565 rows; texture copies keep the
             * format's own tile layout.
             *
             * Hoisted out of the pixel loop (it was per-pixel before) because the probes
             * below must decode guest memory with exactly this rule - see
             * efb_dst_decode_texel. */
            static int s_linear = -1;
            if (s_linear < 0) s_linear = getenv("TLS_EFB_LINEAR") ? 1 : 0;
            const bool is_display_copy =
                s_copy_fmt ? (is_xfb_copy != 0)
                           : (s_geom ? (is_xfb_copy != 0)
                                     : (dst_guest == 0x900997E0u || dst_guest == 0x900037C0u));
                    /* TLS_EFB_COPY_LOG=1: report the byte RANGE each copy writes, computed from the
             * branch that will actually be taken. Several rounds chased "who writes
             * 0x903CD1C0" through lifted stores, the copy chain and the loader, and all three
             * said no - so make the copy path state its own extent (handover 5c.45 K). */
            {
                static int s_log = -1;
                static int s_n = 0;
                if (s_log < 0) s_log = getenv("TLS_EFB_COPY_LOG") ? 1 : 0;
                if (s_log && s_n < 400) {
                    s_n++;
                    size_t bytes;
                    const char* mode;
                    if (is_display_copy && !s_linear) {
                        mode = "xfb640";
                        bytes = (size_t)((y0 + dst_h) * 640u + (x0 + dst_w)) * 2u;
                    } else if (s_linear) {
                        mode = "linear";
                        bytes = (size_t)dst_w * dst_h * 4u;
                    } else {
                        mode = "tiled";
                        bytes = (size_t)((dst_h + 3) / 4) * ((dst_w + 3) / 4) * 32u;
                    }
                    printf("[EfbCopyRange] dst=0x%08X %ux%u step=%u mode=%s bytes=%zu end=0x%08X\n",
                           dst_guest, dst_w, dst_h, step, mode, bytes,
                           (unsigned)(dst_guest + bytes));
                    fflush(stdout);
                }
            }

            for (uint32_t gy = 0; gy < dst_h; gy++) {
                uint32_t py = (uint32_t)(s_d3d11.vp_y + ((float)(y0 + gy * step) + 0.5f) * sy);
                if (py >= desc.Height) py = desc.Height - 1;
                const uint8_t* row = src + (size_t)py * mapped.RowPitch;
                for (uint32_t gx = 0; gx < dst_w; gx++) {
                    uint32_t px = (uint32_t)(s_d3d11.vp_x + ((float)(x0 + gx * step) + 0.5f) * sx);
                    if (px >= desc.Width) px = desc.Width - 1;
                    const uint8_t* p = row + (size_t)px * 4;
                    uint8_t b = p[0], g = p[1], r = p[2], a = p[3];
                    if (is_display_copy && !s_linear) {
                        uint16_t* out = (uint16_t*)guest;
                        uint32_t row = (y0 + gy) * 640u + (x0 + gx);
                        out[row] = (uint16_t)(((r >> 3) << 11) | ((g >> 2) << 5) | (b >> 3));
                    } else if (s_linear) {
                        uint8_t* px = guest + ((size_t)gy * w + gx) * 4;
                        px[0] = r; px[1] = g; px[2] = b; px[3] = a;
                    } else if (!is_display_copy) {
                        uint32_t tile = (gy / 4) * tiles_x + (gx / 4);
                        uint32_t within = (gy % 4) * 4 + (gx % 4);
                        /* R8 is the 8x4 GX_TF_I8 tile, not 4x4 - see
                         * efb_r8_tile_8x4(). Opt-in so the title's R8 bloom
                         * chain keeps the invariant it was measured with. */
                        if (efb_r8_tile_8x4() && (format == 8 || format == 1)) {
                            tiles_x = (dst_w + 7) / 8;
                            tile = (gy / 4) * tiles_x + (gx / 8);
                            within = (gy % 4) * 8 + (gx % 8);
                        }
                        if (s_copy_fmt && (format == 4 || format == 10)) {
                            /* RGB565: 32-byte 4x4 tile of big-endian u16 */
                            uint16_t v = (uint16_t)(((r >> 3) << 11) | ((g >> 2) << 5) | (b >> 3));
                            uint8_t* t16 = guest + (size_t)tile * 32 + within * 2;
                            t16[0] = (uint8_t)(v >> 8);
                            t16[1] = (uint8_t)(v & 0xFF);
                        } else if (s_copy_fmt && (format == 5 || format == 11)) {
                            /* RGB5A3: 16-bit, alpha bit 15 clear => 1 bit alpha */
                            uint16_t v = (uint16_t)(((a >> 7) << 15) |
                                                    (((r * 31) / 255) << 10) |
                                                    (((g * 31) / 255) << 5) |
                                                    ((b * 31) / 255));
                            uint8_t* t16 = guest + (size_t)tile * 32 + within * 2;
                            t16[0] = (uint8_t)(v >> 8);
                            t16[1] = (uint8_t)(v & 0xFF);
                        } else if (s_copy_fmt && (format == 3 || format == 9)) {
                            /* RA8 (9) = (alpha, red) pairs; IA8 (3) = (alpha, intensity).
                             * Same 32-byte 4x4 tile, different second channel. */
                            uint8_t* t8 = guest + (size_t)tile * 32 + within * 2;
                            t8[0] = a;
                            t8[1] = (format == 9) ? r
                                                  : (uint8_t)((r * 77 + g * 150 + b * 29) >> 8);
                        } else if (s_copy_fmt && format == 7) {
                            /* A8: 32-byte 4x4 tile of alpha */
                            guest[(size_t)tile * 32 + within] = a;
                        } else if (s_copy_fmt && (format == 8 || format == 1)) {
                            /* R8: 32-byte 4x4 tile of red. The bloom chain copies the
                             * frame here to get a one-byte luminance image; writing
                             * RGBA8 instead both mis-sized the destination and put the
                             * intensity in the wrong byte. Format 1 is the same layout
                             * (the Chapter-1 chain's id for it, 5c.25 §4c). */
                            guest[(size_t)tile * 32 + within] = r;
                        } else if (s_copy_fmt && format == 0) {
                            /* R4 (format id 0): 8x8 tiles, 32 bytes per tile, 4 bits per texel.
                             * This is the exact inverse of decode_gx_texture()'s `case 0`, which
                             * is what the guest will use to sample it: inside a tile the bytes are
                             * row-major, 4 bytes per row of 8 texels, and the HIGH nibble is the
                             * even texel. Both halves must stay in step or the destination decodes
                             * as a scrambled image that still has the right average - which is why
                             * the old RGBA8 fallback looked plausible and measured wrong. */
                            uint32_t tiles_x8 = (dst_w + 7) / 8;
                            uint32_t tile8  = (gy / 8) * tiles_x8 + (gx / 8);
                            uint32_t byte_i = (gy % 8) * 4 + (gx % 8) / 2;
                            uint8_t  nib    = (uint8_t)((r >> 4) & 0x0F);
                            uint8_t* t4     = guest + (size_t)tile8 * 32 + byte_i;
                            if ((gx & 1u) == 0) *t4 = (uint8_t)((*t4 & 0x0Fu) | (uint8_t)(nib << 4));
                            else                *t4 = (uint8_t)((*t4 & 0xF0u) | nib);
                        } else {
                            uint8_t* tile_base = guest + (size_t)tile * 64;
                            tile_base[within * 2 + 0] = a;
                            tile_base[within * 2 + 1] = r;
                            tile_base[32 + within * 2 + 0] = g;
                            tile_base[32 + within * 2 + 1] = b;
                        }
                    }
                }
            }
            /* Per-copy chain probe. Hardware's `DumpEFBTarget` writes every EFB copy
             * destination in execution order, so the only honest comparison is the same
             * thing on the host: every copy of one frame in stream order, at the
             * destination's real size, printing (a) the average of the source rectangle
             * that was just read out of the frame and (b) the average of the destination
             * decoded back out of guest memory, i.e. what the guest will sample.
             * A copy whose (a) is the scene and whose (b) is black is a write/decode bug;
             * a copy whose (a) is also black is a servicing-model bug. TLS_EFB_CHAIN=<frame>,
             * TLS_EFB_CHAIN_DUMP=1 additionally writes each destination as a PPM. */
            {
                static int s_chain_frame = -2, s_chain_dump = 0, s_chain_idx = 0, s_chain_frame_seen = -1;
                if (s_chain_frame == -2) {
                    const char* f = getenv("TLS_EFB_CHAIN");
                    s_chain_frame = f ? atoi(f) : -1;
                    s_chain_dump = getenv("TLS_EFB_CHAIN_DUMP") ? 1 : 0;
                }
                extern int g_runner_current_frame;
                /* Keyed on the present counter, not the guest frame counter: the two are
                 * offset by one (present N renders guest frame N-1), so gating on the frame
                 * counter silently compared a batch dump of one frame with the copies of
                 * the next one. */
                extern int s_efb_copy_batch_ctx;
                if (s_chain_frame >= 0 && (int)s_d3d11.frame_counter == s_chain_frame && s_chain_idx < 40) {
                    if (s_chain_frame_seen != s_chain_frame) { s_chain_frame_seen = s_chain_frame; s_chain_idx = 0; }
                    float qx = (s_d3d11.vp_w > 0.0f) ? (s_d3d11.vp_w / 640.0f) : (float)desc.Width / 640.0f;
                    float qy = (s_d3d11.vp_h > 0.0f) ? (s_d3d11.vp_h / 480.0f) : (float)desc.Height / 480.0f;
                    unsigned long sr2 = 0, sg2 = 0, sb2 = 0, sa2 = 0, ns = 0;
                    for (uint32_t gy = 0; gy < dst_h; gy += 4) {
                        uint32_t py = (uint32_t)(s_d3d11.vp_y + ((float)(y0 + gy * step) + 0.5f) * qy);
                        if (py >= desc.Height) py = desc.Height - 1;
                        const uint8_t* row2 = src + (size_t)py * mapped.RowPitch;
                        for (uint32_t gx = 0; gx < dst_w; gx += 4) {
                            uint32_t px = (uint32_t)(s_d3d11.vp_x + ((float)(x0 + gx * step) + 0.5f) * qx);
                            if (px >= desc.Width) px = desc.Width - 1;
                            const uint8_t* p2 = row2 + (size_t)px * 4;
                            sr2 += p2[2]; sg2 += p2[1]; sb2 += p2[0]; sa2 += p2[3]; ns++;
                        }
                    }
                    if (ns == 0) ns = 1;
                    /* Destination content, in the layout the writer just used. The alpha
                     * average is the term that decides how strong a `SRCALPHA/ONE`
                     * additive pass is: the composite tail's passes read these copies, so
                     * `dstalpha` is the EFB alpha the guest will sample (handover 5c.23). */
                    unsigned long dr = 0, dg = 0, db = 0, da = 0, nd = 0, dpeak = 0;
                    const bool chain_disp = is_display_copy && !s_linear;
                    const bool chain_lin = (s_linear != 0);
                    for (uint32_t gy = 0; gy < dst_h; gy++) {
                        for (uint32_t gx = 0; gx < dst_w; gx++) {
                            uint8_t r8, g8, b8, a8;
                            efb_dst_decode_texel(guest, format, dst_w, gx, gy,
                                                 chain_disp, chain_lin, &r8, &g8, &b8, &a8);
                            unsigned lum = (unsigned)r8 + g8 + b8;
                            if (lum > dpeak) dpeak = lum;
                            dr += r8; dg += g8; db += b8; da += a8; nd++;
                        }
                    }
                    if (nd == 0) nd = 1;
                    printf("[EfbChain] present=%d frame=%d copy=%d batch=%d dst=0x%08X %ux%u src=(%u,%u)-(%u,%u) xfb=%d fmt=%u "
                           "srcavg=(%lu,%lu,%lu) srca=%lu dstavg=(%lu,%lu,%lu) dstalpha=%lu dstpeak=%lu\n",
                           s_d3d11.frame_counter, g_runner_current_frame, s_chain_idx, s_efb_copy_batch_ctx,
                           dst_guest, dst_w, dst_h, x0, y0, x1, y1,
                           is_xfb_copy, format, sr2 / ns, sg2 / ns, sb2 / ns, sa2 / ns,
                           dr / nd, dg / nd, db / nd, da / nd, dpeak);
                    fflush(stdout);
                    if (s_chain_dump) {
                        char path[128];
                        snprintf(path, sizeof(path), "build/recomp/efbchain_%d_%02d_%08X_%ux%u.ppm",
                                 g_runner_current_frame, s_chain_idx, dst_guest, dst_w, dst_h);
                        FILE* df = fopen(path, "wb");
                        if (df) {
                            fprintf(df, "P6\n%u %u\n255\n", dst_w, dst_h);
                            for (uint32_t yy = 0; yy < dst_h; yy++) {
                                for (uint32_t xx = 0; xx < dst_w; xx++) {
                                    uint8_t r8, g8, b8, a8;
                                    efb_dst_decode_texel(guest, format, dst_w, xx, yy,
                                                         chain_disp, chain_lin, &r8, &g8, &b8, &a8);
                                    fputc(r8, df);
                                    fputc(g8, df);
                                    fputc(b8, df);
                                }
                            }
                            fclose(df);
                        }
                    }
                    s_chain_idx++;
                }
            }
            ID3D11DeviceContext_Unmap(s_d3d11.context, (ID3D11Resource*)staging, 0);
            /* Dump a copy destination as a PPM, decoded with the same tile layout, so the
             * picture the guest will sample can be compared with the Dolphin reference
             * dump. TLS_EFB_DUMP=<frame> dumps the copies issued in that frame. */
            {
                static int s_dump_frame = -2;
                if (s_dump_frame == -2) {
                    const char* f = getenv("TLS_EFB_DUMP");
                    s_dump_frame = f ? atoi(f) : -1;
                }
                extern int g_runner_current_frame;
                if (s_dump_frame >= 0 && g_runner_current_frame >= s_dump_frame) {
                    static int s_dump_n = 0;
                    if (s_dump_n < 4) {
                        char path[96];
                        snprintf(path, sizeof(path), "build/recomp/efb_tex_%d_%08X.ppm",
                                 s_dump_n, dst_guest);
                        FILE* df = fopen(path, "wb");
                        if (df) {
                            fprintf(df, "P6\n%u %u\n255\n", w, h);
                            uint32_t dtx = (w + 3) / 4;
                            for (uint32_t yy = 0; yy < h; yy++) {
                                for (uint32_t xx = 0; xx < w; xx++) {
                                    uint32_t tile = (yy / 4) * dtx + (xx / 4);
                                    uint32_t within = (yy % 4) * 4 + (xx % 4);
                                    const uint8_t* t = guest + (size_t)tile * 64;
                                    fputc(t[within * 2 + 1], df);
                                    fputc(t[32 + within * 2 + 0], df);
                                    fputc(t[32 + within * 2 + 1], df);
                                }
                            }
                            fclose(df);
                            printf("[EfbDump] %s (%ux%u)\n", path, w, h);
                            fflush(stdout);
                        }
                        s_dump_n++;
                    }
                }
            }
            /* Proof that the copy delivered content: count distinct byte values in the
             * first 4 KB of the destination. A destination that is still uninitialised
             * reads as one or two values; a real picture has many. TLS_EFB_CHECK=1. */
            static int s_check = -1, s_check_from = 0;
            if (s_check < 0) {
                s_check = getenv("TLS_EFB_CHECK") ? 1 : 0;
                const char* cf = getenv("TLS_EFB_CHECK_FRAME");
                s_check_from = cf ? atoi(cf) : 0;
            }
            if (s_check) {
                static int s_checks = 0;
                extern int g_runner_current_frame;
                if (g_runner_current_frame >= s_check_from && s_checks < 4) {
                    s_checks++;
                    unsigned seen[256] = {0};
                    int distinct = 0;
                    for (int i = 0; i < 4096; i++) {
                        unsigned b = guest[i];
                        if (!seen[b]) { seen[b] = 1; distinct++; }
                    }
                    printf("[EfbCheck] dst=0x%08X %ux%u: %d distinct byte values in first 4KB\n",
                           dst_guest, w, h, distinct);
                    fflush(stdout);
                }
            }
        }
        ID3D11Texture2D_Release(staging);
    }
    if (have_backbuffer) ID3D11Texture2D_Release(source);
}

/* Frame matcher for the per-batch probes (TLS_BATCH_DUMP / TLS_BATCH_PROBE /
 * TLS_TEV_PROBE). The present counter and the guest frame diverge (~2800 presents per
 * 6000 frames), so a probe keyed only to the present counter silently lands on a
 * different moment than the TLS_INPUT_SCRIPT frame number it was aimed at - that
 * ambiguity cost three full runs. Match either counter, exactly as TLS_SHOT_FRAMES
 * already does, and the same frame number means the same moment everywhere. */
static bool probe_frame_hits(int want, int present_count) {
    extern int g_runner_current_frame;
    return want == present_count || want == g_runner_current_frame;
}

/* Same readback, plus the two statistics that name a *local* defect instead of a
 * frame average: the brightest sample (a saturated glow raises it without moving the
 * average much) and the number of red-dominant samples (a channel-swapped or
 * mis-decoded texture shows up as red-dominant rock, which an average hides).
 * Used by TLS_BATCH_PROBE. */
static void probe_backbuffer_stats(unsigned* out_r, unsigned* out_g, unsigned* out_b,
                                   unsigned* out_max, unsigned* out_red, unsigned* out_bright,
                                   unsigned* out_n, unsigned* out_a) {
    *out_r = *out_g = *out_b = *out_max = *out_red = *out_bright = *out_n = 0;
    if (out_a) *out_a = 0;
    ID3D11Texture2D* bb = NULL;
    if (FAILED(IDXGISwapChain_GetBuffer(s_d3d11.swap_chain, 0, &IID_ID3D11Texture2D, (void**)&bb))) return;
    D3D11_TEXTURE2D_DESC desc;
    ID3D11Texture2D_GetDesc(bb, &desc);
    desc.Usage = D3D11_USAGE_STAGING;
    desc.BindFlags = 0;
    desc.CPUAccessFlags = D3D11_CPU_ACCESS_READ;
    desc.MiscFlags = 0;
    ID3D11Texture2D* staging = NULL;
    if (SUCCEEDED(ID3D11Device_CreateTexture2D(s_d3d11.device, &desc, NULL, &staging))) {
        ID3D11DeviceContext_CopyResource(s_d3d11.context, (ID3D11Resource*)staging, (ID3D11Resource*)bb);
        D3D11_MAPPED_SUBRESOURCE mapped;
        if (SUCCEEDED(ID3D11DeviceContext_Map(s_d3d11.context, (ID3D11Resource*)staging, 0, D3D11_MAP_READ, 0, &mapped))) {
            unsigned long sr = 0, sg = 0, sb = 0, sa = 0, n = 0;
            unsigned maxlum = 0, red = 0, bright = 0;
            for (UINT y = 0; y < desc.Height; y += 16) {
                const uint8_t* row = (const uint8_t*)mapped.pData + (size_t)y * mapped.RowPitch;
                for (UINT x = 0; x < desc.Width; x += 16) {
                    const uint8_t* p = row + (size_t)x * 4;
                    unsigned b8 = p[0], g8 = p[1], r8 = p[2];
                    sb += b8; sg += g8; sr += r8; sa += p[3]; n++;
                    unsigned lum = r8 + g8 + b8;
                    if (lum > maxlum) maxlum = lum;
                    if (lum > 600) bright++;
                    if (r8 > g8 + 30 && r8 > b8 + 30) red++;
                }
            }
            if (n == 0) n = 1;
            *out_r = (unsigned)(sr / n); *out_g = (unsigned)(sg / n); *out_b = (unsigned)(sb / n);
            *out_max = maxlum; *out_red = red; *out_bright = bright; *out_n = (unsigned)n;
            /* The EFB alpha channel is the term that decides how strong a
             * `SRCALPHA/ONE` additive pass is, and it travels into every EFB copy the
             * composite tail samples. GX writes it from the TEV alpha stage; the host
             * wrote 1.0 at every clear and never looked (handover 5c.23). */
            if (out_a) *out_a = (unsigned)(sa / n);
            ID3D11DeviceContext_Unmap(s_d3d11.context, (ID3D11Resource*)staging, 0);
        }
        ID3D11Texture2D_Release(staging);
    }
    ID3D11Texture2D_Release(bb);
}

/* Region readback for per-batch attribution (TLS_BATCH_RECT): the batch's own NDC
 * rectangle only, so a 70x43-pixel UI element is measurable and no draw list is cut.
 * NDC -> pixel uses the same mapping the renderer's viewport does: x = (ndc+1)/2*W,
 * y = (1-ndc)/2*H (the projection already carries the flip that was measured earlier). */
static void probe_backbuffer_rect(float mnx, float mny, float mxx, float mxy,
                                  unsigned* out_r, unsigned* out_g, unsigned* out_b,
                                  unsigned* out_dark, unsigned* out_n) {
    *out_r = *out_g = *out_b = *out_dark = *out_n = 0;
    ID3D11Texture2D* bb = NULL;
    if (FAILED(IDXGISwapChain_GetBuffer(s_d3d11.swap_chain, 0, &IID_ID3D11Texture2D, (void**)&bb))) return;
    D3D11_TEXTURE2D_DESC desc;
    ID3D11Texture2D_GetDesc(bb, &desc);
    int x0 = (int)((mnx + 1.0f) * 0.5f * (float)desc.Width);
    int x1 = (int)((mxx + 1.0f) * 0.5f * (float)desc.Width);
    int y0 = (int)((1.0f - mxy) * 0.5f * (float)desc.Height);
    int y1 = (int)((1.0f - mny) * 0.5f * (float)desc.Height);
    if (x0 < 0) x0 = 0;
    if (y0 < 0) y0 = 0;
    if (x1 > (int)desc.Width) x1 = (int)desc.Width;
    if (y1 > (int)desc.Height) y1 = (int)desc.Height;
    if (x1 <= x0 || y1 <= y0) { ID3D11Texture2D_Release(bb); return; }
    desc.Usage = D3D11_USAGE_STAGING;
    desc.BindFlags = 0;
    desc.CPUAccessFlags = D3D11_CPU_ACCESS_READ;
    desc.MiscFlags = 0;
    ID3D11Texture2D* staging = NULL;
    if (SUCCEEDED(ID3D11Device_CreateTexture2D(s_d3d11.device, &desc, NULL, &staging))) {
        ID3D11DeviceContext_CopyResource(s_d3d11.context, (ID3D11Resource*)staging, (ID3D11Resource*)bb);
        D3D11_MAPPED_SUBRESOURCE mapped;
        if (SUCCEEDED(ID3D11DeviceContext_Map(s_d3d11.context, (ID3D11Resource*)staging, 0, D3D11_MAP_READ, 0, &mapped))) {
            unsigned long sr = 0, sg = 0, sb = 0, n = 0, dark = 0;
            for (int y = y0; y < y1; y++) {
                const uint8_t* row = (const uint8_t*)mapped.pData + (size_t)y * mapped.RowPitch;
                for (int x = x0; x < x1; x++) {
                    const uint8_t* p = row + (size_t)x * 4;
                    unsigned b8 = p[0], g8 = p[1], r8 = p[2];
                    sb += b8; sg += g8; sr += r8; n++;
                    if (r8 + g8 + b8 < 300) dark++;
                }
            }
            if (n == 0) n = 1;
            *out_r = (unsigned)(sr / n); *out_g = (unsigned)(sg / n); *out_b = (unsigned)(sb / n);
            *out_dark = (unsigned)dark; *out_n = (unsigned)n;
            ID3D11DeviceContext_Unmap(s_d3d11.context, (ID3D11Resource*)staging, 0);
        }
        ID3D11Texture2D_Release(staging);
    }
    ID3D11Texture2D_Release(bb);
}

static void probe_backbuffer_avg(unsigned* out_r, unsigned* out_g, unsigned* out_b) {
    *out_r = *out_g = *out_b = 0;
    ID3D11Texture2D* bb = NULL;
    if (FAILED(IDXGISwapChain_GetBuffer(s_d3d11.swap_chain, 0, &IID_ID3D11Texture2D, (void**)&bb))) return;
    D3D11_TEXTURE2D_DESC desc;
    ID3D11Texture2D_GetDesc(bb, &desc);
    desc.Usage = D3D11_USAGE_STAGING;
    desc.BindFlags = 0;
    desc.CPUAccessFlags = D3D11_CPU_ACCESS_READ;
    desc.MiscFlags = 0;
    ID3D11Texture2D* staging = NULL;
    if (SUCCEEDED(ID3D11Device_CreateTexture2D(s_d3d11.device, &desc, NULL, &staging))) {
        ID3D11DeviceContext_CopyResource(s_d3d11.context, (ID3D11Resource*)staging, (ID3D11Resource*)bb);
        D3D11_MAPPED_SUBRESOURCE mapped;
        if (SUCCEEDED(ID3D11DeviceContext_Map(s_d3d11.context, (ID3D11Resource*)staging, 0, D3D11_MAP_READ, 0, &mapped))) {
            unsigned long sr = 0, sg = 0, sb = 0, n = 0;
            for (UINT y = 0; y < desc.Height; y += 40) {
                const uint8_t* row = (const uint8_t*)mapped.pData + (size_t)y * mapped.RowPitch;
                for (UINT x = 0; x < desc.Width; x += 40) {
                    const uint8_t* p = row + (size_t)x * 4;
                    sb += p[0]; sg += p[1]; sr += p[2]; n++;
                }
            }
            if (n == 0) n = 1;
            *out_r = (unsigned)(sr / n); *out_g = (unsigned)(sg / n); *out_b = (unsigned)(sb / n);
            ID3D11DeviceContext_Unmap(s_d3d11.context, (ID3D11Resource*)staging, 0);
        }
        ID3D11Texture2D_Release(staging);
    }
    ID3D11Texture2D_Release(bb);
}

/* Replay the frame's queued GXCopyTex commands whose vertex mark is <= up_to_vertex.
 * Called from inside the batch loop of d3d11_present(), so each copy reads the frame as
 * the guest had drawn it at that point in its display list - which is what the hardware
 * does and what breaks the "copy the previous frame into the framebuffer" feedback loop
 * that turned the title MENU background into a flat colour (handover 5c.14/5c.15).
 * The render target must be unbound around the read; re-binding it afterwards does not
 * disturb the pixels already rendered into it. */
/* Which batch the copy being serviced is attached to (-1 = before any batch, 9999 = after
 * the last one). Only used by the TLS_EFB_CHAIN probe, so a copy can be placed in the
 * frame's draw stream instead of being printed in an unattributable block. */
int s_efb_copy_batch_ctx = -1;

static void d3d11_service_pending_copies(uint32_t* cursor, uint32_t up_to_vertex, int at_batch) {
    s_efb_copy_batch_ctx = at_batch;
    if (!cursor) return;
    /* Inline mode already performed every copy at its command, so just retire the queue. */
    if (!gx_pipeline_efb_copy_is_deferred()) {
        *cursor = gx_pipeline_get_pending_copy_count();
        return;
    }
    static int s_order = -1;
    if (s_order < 0) s_order = getenv("TLS_DRAW_ORDER") ? 1 : 0;
    uint32_t count = gx_pipeline_get_pending_copy_count();
    while (*cursor < count) {
        const GxPendingEfbCopy* c = gx_pipeline_get_pending_copy(*cursor);
        if (!c || c->vertex_mark > up_to_vertex) break;
        if (s_order) {
            printf("[CopyOrder] before batch=%d: copy #%u dst=0x%08X %ux%u src=(%u,%u)-(%u,%u) vmark=%u\n",
                   at_batch, *cursor, c->dst_guest, c->x1 - c->x0 + 1, c->y1 - c->y0 + 1,
                   c->x0, c->y0, c->x1, c->y1, c->vertex_mark);
            fflush(stdout);
        }
        ID3D11DeviceContext_OMSetRenderTargets(s_d3d11.context, 0, NULL, NULL);
        d3d11_efb_copy_to_guest(c->dst_guest, c->x0, c->y0, c->x1, c->y1, c->real_format,
                                c->half_scale, c->pitch, c->exec);
        ID3D11DeviceContext_OMSetRenderTargets(s_d3d11.context, 1, &s_d3d11.rtv, s_d3d11.dsv);
        (*cursor)++;
    }
}

bool d3d11_present(const uint8_t* yuyv_data, int fb_width, int fb_height) {
    if (!s_d3d11.device || !s_d3d11.swap_chain) return false;

    s_d3d11.frame_counter++;

    // Check if guest resolution changed
    if (fb_width != s_d3d11.fb_width || fb_height != s_d3d11.fb_height) {
        s_d3d11.fb_width = fb_width;
        s_d3d11.fb_height = fb_height;
        if (s_d3d11.fb_srv) ID3D11ShaderResourceView_Release(s_d3d11.fb_srv);
        if (s_d3d11.fb_texture) ID3D11Texture2D_Release(s_d3d11.fb_texture);

        D3D11_TEXTURE2D_DESC tex_desc = {0};
        tex_desc.Width = fb_width;
        tex_desc.Height = fb_height;
        tex_desc.MipLevels = 1;
        tex_desc.ArraySize = 1;
        tex_desc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
        tex_desc.SampleDesc.Count = 1;
        tex_desc.Usage = D3D11_USAGE_DYNAMIC;
        tex_desc.BindFlags = D3D11_BIND_SHADER_RESOURCE;
        tex_desc.CPUAccessFlags = D3D11_CPU_ACCESS_WRITE;
        ID3D11Device_CreateTexture2D(s_d3d11.device, &tex_desc, NULL, &s_d3d11.fb_texture);
        ID3D11Device_CreateShaderResourceView(s_d3d11.device, (ID3D11Resource*)s_d3d11.fb_texture, NULL, &s_d3d11.fb_srv);

        free(s_d3d11.rgba_staging);
        s_d3d11.rgba_staging = (uint32_t*)malloc(fb_width * fb_height * sizeof(uint32_t));
    }

    // Check for hardware GX geometry
    uint32_t gx_vtx_count = 0;
    const GxVertex* gx_vtx = gx_pipeline_get_vertices(&gx_vtx_count);

    // Only decode and upload software XFB texture when no hardware GX primitives are rendered
    if (gx_vtx_count == 0 && yuyv_data && s_d3d11.rgba_staging) {
        int total_pixels = fb_width * fb_height;
        const uint8_t* src = yuyv_data;
        uint32_t* dst = s_d3d11.rgba_staging;

        for (int i = 0; i < total_pixels; i += 2) {
            int y0 = src[0];
            int u  = src[1];
            int y1 = src[2];
            int v  = src[3];
            src += 4;
            if (y0 == 0 && u == 0 && y1 == 0 && v == 0) {
                dst[0] = 0xFF000000;
                dst[1] = 0xFF000000;
                dst += 2;
                continue;
            }

            int c0 = y0 - 16;
            int c1 = y1 - 16;
            int d  = u - 128;
            int e  = v - 128;

            uint8_t r0 = clamp_u8((298 * c0 + 409 * e + 128) >> 8);
            uint8_t g0 = clamp_u8((298 * c0 - 100 * d - 208 * e + 128) >> 8);
            uint8_t b0 = clamp_u8((298 * c0 + 516 * d + 128) >> 8);

            uint8_t r1 = clamp_u8((298 * c1 + 409 * e + 128) >> 8);
            uint8_t g1 = clamp_u8((298 * c1 - 100 * d - 208 * e + 128) >> 8);
            uint8_t b1 = clamp_u8((298 * c1 + 516 * d + 128) >> 8);

            dst[0] = (uint32_t)(r0 | (g0 << 8) | (b0 << 16) | (0xFF << 24));
            dst[1] = (uint32_t)(r1 | (g1 << 8) | (b1 << 16) | (0xFF << 24));
            dst += 2;
        }

        // Map and upload to dynamic GPU texture
        D3D11_MAPPED_SUBRESOURCE mapped;
        HRESULT hr = ID3D11DeviceContext_Map(s_d3d11.context, (ID3D11Resource*)s_d3d11.fb_texture, 0, D3D11_MAP_WRITE_DISCARD, 0, &mapped);
        if (SUCCEEDED(hr)) {
            const uint8_t* p_src = (const uint8_t*)s_d3d11.rgba_staging;
            uint8_t* p_dst = (uint8_t*)mapped.pData;
            int row_bytes = fb_width * 4;
            for (int y = 0; y < fb_height; y++) {
                memcpy(p_dst, p_src, row_bytes);
                p_src += row_bytes;
                p_dst += mapped.RowPitch;
            }
            ID3D11DeviceContext_Unmap(s_d3d11.context, (ID3D11Resource*)s_d3d11.fb_texture, 0);
        }
    }

    // Set Render Target and Hardware Depth-Stencil Buffer
    ID3D11DeviceContext_OMSetRenderTargets(s_d3d11.context, 1, &s_d3d11.rtv, s_d3d11.dsv);

    /* Clear the EFB to the colour the guest programmed (BP 0x4F/0x50 through
     * GXSetCopyClear), not to a hardcoded black: the pipeline already tracks it
     * (gx_pipeline_get_clear_color) and til now nothing consumed it, so any frame
     * whose guest clear was not black lost its background.
     * TLS_EFB_CLEAR_BLACK=1 restores the old behaviour for A/B. */
    FLOAT clear_color[4] = {0.0f, 0.0f, 0.0f, 1.0f};
    {
        static int s_force_black = -1;
        static int s_efb_alpha = -1;
        if (s_force_black < 0) s_force_black = getenv("TLS_EFB_CLEAR_BLACK") ? 1 : 0;
        if (s_efb_alpha < 0) s_efb_alpha = getenv("TLS_EFB_ALPHA") ? 1 : 0;
        if (!s_force_black) {
            gx_pipeline_get_clear_color(clear_color);
            /* The clear *alpha* was hardcoded to 1.0 ("depth/stencil clear alpha; the
             * guest clear alpha is not used"), which pins the EFB alpha at 1.0 for the
             * whole frame: every blended batch keeps it there (ONE/INV_SRCALPHA) and
             * every EFB copy the composite tail samples then carries a=255, so all four
             * `SRCALPHA/ONE` additive passes run at full strength (handover 5c.23).
             * GX clears the EFB alpha to the alpha in the BP 0x4F clear colour.
             * TLS_EFB_ALPHA=1 honours the guest value. */
            if (!s_efb_alpha) clear_color[3] = 1.0f;
        }
        s_clears_this_frame++;
        s_last_clear[0]=clear_color[0]; s_last_clear[1]=clear_color[1];
        s_last_clear[2]=clear_color[2]; s_last_clear[3]=clear_color[3];
        static int s_cc = 0;
        if (s_cc < 2) { s_cc++; printf("[EfbClear] clear = %.2f %.2f %.2f %.2f%s\n",
            clear_color[0], clear_color[1], clear_color[2], clear_color[3],
            s_force_black ? " (forced black)" : " (guest BP clear)"); fflush(stdout); }
    }
    /* The GX EFB is *not* cleared between frames: it keeps whatever the last frame left
     * in it unless the guest clears it itself (there is no "clear EFB" command in GX -
     * GXCopyTex's clear bit, the BP clear colour and fullscreen quads are how games do
     * it). Clearing every present therefore throws away content the guest may read: the
     * first three GXCopyTex commands of a titled MENU frame are issued at vertex mark 0,
     * i.e. before any drawing, and are a deliberate capture of the previous frame.
     * TLS_NO_FRAME_CLEAR=1 skips the colour clear (depth is always cleared) to A/B it. */
    static int s_no_clear = -1;
    if (s_no_clear < 0) s_no_clear = getenv("TLS_NO_FRAME_CLEAR") ? 1 : 0;
    if (!s_no_clear) {
        ID3D11DeviceContext_ClearRenderTargetView(s_d3d11.context, s_d3d11.rtv, clear_color);
    }
    if (s_d3d11.dsv) {
        ID3D11DeviceContext_ClearDepthStencilView(s_d3d11.context, s_d3d11.dsv, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);
    }

    // Calculate Aspect Ratio Preserving Viewport
    float vx = 0.0f, vy = 0.0f;
    float vw = (float)s_d3d11.win_width;
    float vh = (float)s_d3d11.win_height;

    if (s_d3d11.aspect_ratio != GFX_ASPECT_STRETCH && s_d3d11.win_height > 0) {
        float target_aspect = (s_d3d11.aspect_ratio == GFX_ASPECT_4_3) ? (4.0f / 3.0f) : (16.0f / 9.0f);
        float win_aspect = (float)s_d3d11.win_width / (float)s_d3d11.win_height;
        if (win_aspect > target_aspect) {
            vh = (float)s_d3d11.win_height;
            vw = (float)s_d3d11.win_height * target_aspect;
            vx = ((float)s_d3d11.win_width - vw) * 0.5f;
            vy = 0.0f;
        } else {
            vw = (float)s_d3d11.win_width;
            vh = (float)s_d3d11.win_width / target_aspect;
            vx = 0.0f;
            vy = ((float)s_d3d11.win_height - vh) * 0.5f;
        }
    }

    s_d3d11.vp_x = vx;
    s_d3d11.vp_y = vy;
    s_d3d11.vp_w = vw;
    s_d3d11.vp_h = vh;
    D3D11_VIEWPORT vp = {0};
    vp.TopLeftX = vx;
    vp.TopLeftY = vy;
    vp.Width = vw;
    vp.Height = vh;
    vp.MinDepth = 0.0f;
    vp.MaxDepth = 1.0f;
    ID3D11DeviceContext_RSSetViewports(s_d3d11.context, 1, &vp);

    static int s_d3d11_dump_count = 0;
    static DWORD s_last_f12_tick = 0;
    DWORD now_tick = GetTickCount();
    bool take_shot = false;
    s_d3d11_dump_count++;
    if ((GetAsyncKeyState(VK_F12) & 0x8000) && (now_tick - s_last_f12_tick > 500)) {
        s_last_f12_tick = now_tick;
        take_shot = true;
    }
    if (s_d3d11_dump_count == 100 || s_d3d11_dump_count == 200 || s_d3d11_dump_count == 350 || s_d3d11_dump_count == 360 || s_d3d11_dump_count == 400 || s_d3d11_dump_count == 450 || s_d3d11_dump_count == 500 || s_d3d11_dump_count == 550 || s_d3d11_dump_count == 600 || s_d3d11_dump_count == 650 || s_d3d11_dump_count == 700 || s_d3d11_dump_count == 900 || s_d3d11_dump_count == 1100 || s_d3d11_dump_count == 1200 || s_d3d11_dump_count == 1300 || s_d3d11_dump_count == 1400 || s_d3d11_dump_count == 1500 || s_d3d11_dump_count == 1600 || s_d3d11_dump_count == 1700 || s_d3d11_dump_count == 1800) {
        take_shot = true;
    }
    /* Dense capture for menu-state diagnosis: TLS_DUMP_EVERY=<n> dumps every n presents.
     * TLS_DUMP_EVERY_G=<n> is the same cadence in *guest frames*, which is what a
     * `TLS_INPUT_SCRIPT` frame number means - the two counters diverge sharply once the
     * title hands over to the game sequence (measured: ~2800 presents in 6000 frames),
     * so a present-count capture point silently misses the state it was aimed at. */
    {
        const char* dump_every = getenv("TLS_DUMP_EVERY");
        const char* dump_every_g = getenv("TLS_DUMP_EVERY_G");
        extern int g_runner_current_frame;
        if (dump_every) {
            int every = atoi(dump_every);
            if (every > 0 && (s_d3d11_dump_count % every) == 0) {
                take_shot = true;
            }
        }
        if (dump_every_g) {
            int every = atoi(dump_every_g);
            if (every > 0 && g_runner_current_frame > 0 &&
                (g_runner_current_frame % every) == 0) {
                take_shot = true;
            }
        }
    }
    /* Explicit capture points: TLS_SHOT_FRAMES=1920,2160,2400. The list above is a
     * legacy fixed set; this lets a run grab exactly the frames being investigated
     * instead of editing hardcoded numbers. A value matches the present count *or*
     * the guest frame, so "dump frame 1700 of the input script" is unambiguous. */
    {
        static char s_shot_list[256];
        static int s_shot_loaded = 0;
        extern int g_runner_current_frame;
        if (!s_shot_loaded) {
            s_shot_loaded = 1;
            const char* frames = getenv("TLS_SHOT_FRAMES");
            if (frames) {
                strncpy(s_shot_list, frames, sizeof(s_shot_list) - 1);
            }
        }
        if (s_shot_list[0]) {
            char buf[256];
            strncpy(buf, s_shot_list, sizeof(buf) - 1);
            buf[sizeof(buf) - 1] = '\0';
            for (char* tok = strtok(buf, ","); tok; tok = strtok(NULL, ",")) {
                int want = atoi(tok);
                /* TLS_SHOT_GUEST=1 keys the capture on the GUEST frame only.
                 *
                 * The default matches either counter, which is fine when the two agree -
                 * but a diagnostic that changes what is rendered also changes the present
                 * count for a given guest frame, so a bisect at a fixed frame number can
                 * silently land on a different moment. Measured (handover 5c.43 F): a
                 * TLS_BATCH_CUTOFF run and a shader-bypass run both captured a frame whose
                 * SKIP-button box averaged 84.1 with 68.6% dark pixels, while the page
                 * itself averages 221.7 there - i.e. neither shot was the page at all.
                 * Every bisect after that used this flag. */
                static int s_shot_guest_only = -1;
                if (s_shot_guest_only < 0)
                    s_shot_guest_only = getenv("TLS_SHOT_GUEST") ? 1 : 0;
                bool hit = s_shot_guest_only
                               ? (want == g_runner_current_frame)
                               : (want == s_d3d11_dump_count || want == g_runner_current_frame);
                if (hit) {
                    take_shot = true;
                    break;
                }
            }
        }
    }

    // Do not stomp cleared backbuffer with empty XFB quad on native GX hardware titles
    #if 0
    if (gx_vtx_count == 0 && s_d3d11.fb_srv) {
        ID3D11DeviceContext_IASetPrimitiveTopology(s_d3d11.context, D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);
        ID3D11DeviceContext_VSSetShader(s_d3d11.context, s_d3d11.vs, NULL, 0);
        ID3D11DeviceContext_PSSetShader(s_d3d11.context, s_d3d11.ps, NULL, 0);
        ID3D11DeviceContext_PSSetShaderResources(s_d3d11.context, 0, 1, &s_d3d11.fb_srv);
        ID3D11DeviceContext_PSSetSamplers(s_d3d11.context, 0, 1, &s_d3d11.sampler_linear);
        ID3D11DeviceContext_Draw(s_d3d11.context, 3, 0);
    }
    #endif

    /* Copies are replayed in stream order as the batch list is drawn (see
     * d3d11_service_pending_copies). Frame-start copies (vertex_mark 0) and anything the
     * guest issued before its first draw are serviced here, i.e. against the clear. */
    uint32_t efb_copy_cursor = 0;
    d3d11_service_pending_copies(&efb_copy_cursor, 0, -1);

    // Draw GX decoded primitives if present
    if (gx_vtx && gx_vtx_count > 0 && s_d3d11.gx_vbo && s_d3d11.gx_vs && s_d3d11.gx_ps) {
        D3D11_MAPPED_SUBRESOURCE mapped_vbo;
        HRESULT map_hr = ID3D11DeviceContext_Map(s_d3d11.context, (ID3D11Resource*)s_d3d11.gx_vbo, 0, D3D11_MAP_WRITE_DISCARD, 0, &mapped_vbo);
        if (SUCCEEDED(map_hr)) {

            GxVertex* dst_vtx = (GxVertex*)mapped_vbo.pData;
            memcpy(dst_vtx, gx_vtx, gx_vtx_count * sizeof(GxVertex));
            ID3D11DeviceContext_Unmap(s_d3d11.context, (ID3D11Resource*)s_d3d11.gx_vbo, 0);

            uint32_t batch_count = 0;
            const GxDrawBatch* batches = gx_pipeline_get_draw_batches(&batch_count);

            UINT stride = sizeof(GxVertex);
            UINT offset = 0;
            ID3D11DeviceContext_IASetInputLayout(s_d3d11.context, s_d3d11.gx_input_layout);
            ID3D11DeviceContext_IASetVertexBuffers(s_d3d11.context, 0, 1, &s_d3d11.gx_vbo, &stride, &offset);
            ID3D11DeviceContext_IASetPrimitiveTopology(s_d3d11.context, D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);
            ID3D11DeviceContext_VSSetShader(s_d3d11.context, s_d3d11.gx_vs, NULL, 0);
            ID3D11DeviceContext_PSSetShader(s_d3d11.context, s_d3d11.gx_ps, NULL, 0);
            ID3D11DeviceContext_PSSetSamplers(s_d3d11.context, 0, 1, &s_d3d11.sampler_linear);

            if (s_d3d11.rs_cull_none) {
                ID3D11DeviceContext_RSSetState(s_d3d11.context, s_d3d11.rs_cull_none);
            }

            // Enable alpha blending for GX geometry
            if (s_d3d11.blend_state_alpha) {
                ID3D11DeviceContext_OMSetBlendState(s_d3d11.context, s_d3d11.blend_state_alpha, NULL, 0xFFFFFFFF);
            }

            if (batches && batch_count > 0) {
                if (take_shot) {
                    printf("[D3D11 Frame %d] Total Batches: %u, Total Vtx: %u\n", s_d3d11_dump_count, batch_count, gx_vtx_count);
                }
                /* Per-batch dump for visual defects: which batch covers which part of
                 * the frame, with its texture binding and blend/depth state. Used to
                 * find out whether a black or pink region is an untextured batch, a
                 * missing texture, or a blend/depth problem. TLS_BATCH_DUMP=<frame>,
                 * TLS_BATCH_DUMP_MAX=<count> (default 48). */
                {
                    static int s_dump_frame = -2, s_dump_max = 48;
                    if (s_dump_frame == -2) {
                        const char* f = getenv("TLS_BATCH_DUMP");
                        const char* m = getenv("TLS_BATCH_DUMP_MAX");
                        s_dump_frame = f ? atoi(f) : -1;
                        if (m) s_dump_max = atoi(m);
                    }
                    if (s_dump_frame >= 0 && probe_frame_hits(s_dump_frame, (int)s_d3d11_dump_count)) {
                        printf("[BatchDump] frame=%d batches=%u vtx=%u\n",
                               s_d3d11_dump_count, batch_count, gx_vtx_count);
                        uint32_t shown = 0;
                        for (uint32_t b = 0; b < batch_count && (int)shown < s_dump_max; b++) {
                            const GxDrawBatch* bd = &batches[b];
                            if (bd->vertex_count == 0) continue;
                            float minx = 1e9f, maxx = -1e9f, miny = 1e9f, maxy = -1e9f;
                            float minz = 1e9f, maxz = -1e9f;
                            /* v->z is CLIP-space z for perspective batches (transform_vertex leaves
                             * z = c22*z + c23 + w and w = -pz), so it must be divided by w before it
                             * is compared with the clip volume. Printing it raw once made "NDC z
                             * 13.3..22.9" look like a clip failure when it was not (5c.45 I). */
                            float nminx = 1e9f, nmaxx = -1e9f, nminy = 1e9f, nmaxy = -1e9f;
                            float nminz = 1e9f, nmaxz = -1e9f;
                            uint32_t outside = 0;
                            for (uint32_t vi = 0; vi < bd->vertex_count; vi++) {
                                const GxVertex* v = &gx_vtx[bd->vertex_offset + vi];
                                if (v->x < minx) minx = v->x;
                                if (v->x > maxx) maxx = v->x;
                                if (v->y < miny) miny = v->y;
                                if (v->y > maxy) maxy = v->y;
                                if (v->z < minz) minz = v->z;
                                if (v->z > maxz) maxz = v->z;
                                float w = (v->w != 0.0f) ? v->w : 1.0f;
                                float nx = v->x / w, ny = v->y / w, nz = v->z / w;
                                if (nx < nminx) nminx = nx;
                                if (nx > nmaxx) nmaxx = nx;
                                if (ny < nminy) nminy = ny;
                                if (ny > nmaxy) nmaxy = ny;
                                if (nz < nminz) nminz = nz;
                                if (nz > nmaxz) nmaxz = nz;
                                if (nx < -1.0f || nx > 1.0f || ny < -1.0f || ny > 1.0f || nz < -1.0f || nz > 1.0f)
                                    outside++;
                            }
                            printf("  b%u vtx=%u tex=%d addr=0x%08X %ux%u fmt=%u tlut=0x%08X "
                                   "blend=%d src=%u dst=%u sub=%d persp=%d zwrite=%d ztest=%d "
                                   "ndc=[%.2f..%.2f, %.2f..%.2f] z=[%.4f..%.4f] "
                                   "wNDC=[x %.2f..%.2f y %.2f..%.2f z %.2f..%.2f] outside=%u/%u\n",
                                   b, bd->vertex_count, bd->has_texture, bd->tex.guest_addr,
                                   bd->tex.width, bd->tex.height, bd->tex.format, bd->tex.tlut_addr,
                                   bd->blend_enable, bd->src_factor, bd->dst_factor, bd->subtract,
                                   bd->is_perspective, bd->depth_write_enable, bd->depth_test_enable,
                                   minx, maxx, miny, maxy, minz, maxz,
                                   nminx, nmaxx, nminy, nmaxy, nminz, nmaxz, outside, bd->vertex_count);
                            shown++;
                        }
                        fflush(stdout);
                    }
                }
                for (uint32_t b = 0; b < batch_count; b++) {
                    const GxDrawBatch* batch = &batches[b];
                    if (batch->vertex_count == 0) continue;

                    /* Every copy the guest issued before this batch's first vertex must
                     * see the frame without this batch: flush it now. */
                    d3d11_service_pending_copies(&efb_copy_cursor, batch->vertex_offset, (int)b);

                    /* Diagnostic bisect: TLS_BATCH_CUTOFF=<n> draws only the first n
                     * batches of a frame, so the contribution of the tail composite
                     * quads can be seen instead of argued about. */
                    {
                        static int s_cutoff = -2;
                        if (s_cutoff == -2) {
                            const char* c = getenv("TLS_BATCH_CUTOFF");
                            s_cutoff = c ? atoi(c) : -1;
                        }
                        if (s_cutoff >= 0 && (int)b >= s_cutoff) break;
                    }



                    if (take_shot || s_d3d11.frame_counter == 150 || s_d3d11.frame_counter == 200 || s_d3d11.frame_counter == 300) {
                        uint32_t vo = batch->vertex_offset;
                        float min_x = 1e9f, max_x = -1e9f, min_y = 1e9f, max_y = -1e9f;
                        for (uint32_t vi = 0; vi < batch->vertex_count; vi++) {
                            float x = gx_vtx[vo + vi].x;
                            float y = gx_vtx[vo + vi].y;
                            if (x < min_x) min_x = x;
                            if (x > max_x) max_x = x;
                            if (y < min_y) min_y = y;
                            if (y > max_y) max_y = y;
                        }
                        printf("   Batch %2u: voff=%4u vcnt=%4u tex=0x%08X %3ux%3u fmt=%2u blend=%d (s=%u d=%u) | X:[%5.2f, %5.2f] Y:[%5.2f, %5.2f] col0=0x%08X\n",
                               b, vo, batch->vertex_count, batch->tex.guest_addr,
                               batch->tex.width, batch->tex.height, batch->tex.format,
                               batch->blend_enable, batch->src_factor, batch->dst_factor,
                               min_x, max_x, min_y, max_y, gx_vtx[vo].color);
                        /* 5c.43 C: the Chapter-1 tutorial page's own textures are dumped in
                         * full on a shot frame. The page submits its parchment sheet
                         * (0x921DEA60) TWICE around the illustration plate (0x90D19B80) and the
                         * font atlas (0x90703AA0), and `col0` cannot distinguish the two sheet
                         * draws - the per-vertex colours and UVs can. */
                        if ((b == 0 || b == 1 || b == 2 || b == 7 || b == 17 || batch->tex.guest_addr == 0x904E5EE0 || batch->tex.guest_addr == 0x907427C0 || batch->tex.guest_addr == 0x81A1A1A0 ||
                             batch->tex.guest_addr == 0x921DEA60u || batch->tex.guest_addr == 0x90D19B80u ||
                             batch->tex.guest_addr == 0x90703AA0u) && batch->vertex_count >= 6) {
                            for (uint32_t vi = 0; vi < 6 && vi < batch->vertex_count; vi++) {
                                uint32_t vidx = vo + vi;
                                printf("      b%u v[%u]: pos=(%.3f, %.3f, %.3f) uv=(%.3f, %.3f) col=0x%08X\n",
                                       b, vi, gx_vtx[vidx].x, gx_vtx[vidx].y, gx_vtx[vidx].z,
                                       gx_vtx[vidx].u, gx_vtx[vidx].v, gx_vtx[vidx].color);
                            }
                        }
                    }

                    uint8_t src_factor = batch->src_factor;
                    uint8_t dst_factor = batch->dst_factor;
                    bool blend_enable = batch->blend_enable;

                    // Standard GX blending rules:
                    // - Additive blending (particles, glows): dst_factor == 1
                    // - Alpha blending (UI, transparent meshes): dst_factor == 5 or 7
                    // - Alpha-bearing 2D text and icons: formats 0 (I4), 1 (I8), 2 (IA4), 3 (IA8), 5 (RGB5A3)
                    // - When dst_factor == 0 and !blend_enable: batch is opaque (2D backgrounds, opaque 3D terrain)
                    if (dst_factor == 1 || dst_factor == 5 || dst_factor == 7) {
                        blend_enable = true;
                    } else if (!batch->is_perspective && batch->has_texture && (batch->tex.format == 0 || batch->tex.format == 1 || batch->tex.format == 2 || batch->tex.format == 3 || batch->tex.format == 5)) {
                        blend_enable = true;
                        if (dst_factor == 0) {
                            src_factor = 4; // GX_BL_SRCA
                            dst_factor = 5; // GX_BL_INVSRCA
                        }
                    }

                    ID3D11BlendState* bs = get_or_create_blend_state(blend_enable, src_factor, dst_factor,
                                                                     batch->subtract, batch->blend_enable);
                    if (bs) {
                        ID3D11DeviceContext_OMSetBlendState(s_d3d11.context, bs, NULL, 0xFFFFFFFF);
                    }

                    if (batch->is_perspective) {
                        if (!batch->depth_test_enable) {
                            ID3D11DeviceContext_OMSetDepthStencilState(s_d3d11.context, s_d3d11.ds_state_ui, 0);
                        } else if (blend_enable || !batch->depth_write_enable || dst_factor == 1) {
                            // Transparent objects / particles: test depth (LESS_EQUAL), do NOT write depth
                            ID3D11DeviceContext_OMSetDepthStencilState(s_d3d11.context, s_d3d11.ds_state_3d_alpha, 0);
                        } else {
                            // Standard opaque 3D objects: test depth AND write depth
                            ID3D11DeviceContext_OMSetDepthStencilState(s_d3d11.context, s_d3d11.ds_state_3d_opaque, 0);
                        }
                    } else {
                        /* 2D UI: normally depth test off so UI renders cleanly on top of the
                         * 3D scene. The EFB-copy composite quads, however, declare ztest=1
                         * themselves, and on hardware they really are depth tested against
                         * the scene that was drawn before them - which is one candidate for
                         * why hardware's additive passes add only a few units while the
                         * host's add the whole copied frame (handover 5c.22). Honouring the
                         * guest z-mode here was tried in 5c.15 while the copy model was
                         * still stale, so the result then said nothing; TLS_COMPOSITE_ZTEST=1
                         * re-tests it now that copies are in stream order. */
                        static int s_comp_ztest = -1;
                        if (s_comp_ztest < 0) s_comp_ztest = getenv("TLS_COMPOSITE_ZTEST") ? 1 : 0;
                        if (s_comp_ztest && batch->depth_test_enable) {
                            ID3D11DeviceContext_OMSetDepthStencilState(s_d3d11.context, s_d3d11.ds_state_3d_alpha, 0);
                        } else {
                            ID3D11DeviceContext_OMSetDepthStencilState(s_d3d11.context, s_d3d11.ds_state_ui, 0);
                        }
                    }

                    ID3D11ShaderResourceView* srv = s_d3d11.gx_tex_white_srv;
                    if (batch->has_texture && batch->tex.guest_addr != 0) {
                        srv = get_or_upload_gx_texture(&batch->tex);
                        if (!srv) {
                            // A batch that names a texture but gets the 1x1 white fallback draws
                            // as a solid white quad - the stray white rectangle over the title
                            // screen. Name every distinct address that fails so the cause
                            // (unstreamed data, unknown format, zero-filled upload) is visible.
                            if (getenv("TLS_TEX_FAIL_PROBE")) {
                                static uint32_t s_fail_addrs[16];
                                static uint32_t s_fail_count = 0;
                                uint32_t i = 0;
                                while (i < s_fail_count && s_fail_addrs[i] != batch->tex.guest_addr) i++;
                                if (i == s_fail_count && s_fail_count < 16) {
                                    s_fail_addrs[s_fail_count++] = batch->tex.guest_addr;
                                    printf("[GFX] White fallback: batch %u tex=0x%08X %ux%u fmt=%u persp=%d blend=%d d=%u\n",
                                           b, batch->tex.guest_addr, batch->tex.width, batch->tex.height,
                                           batch->tex.format, batch->is_perspective, batch->blend_enable,
                                           batch->dst_factor);
                                    fflush(stdout);
                                }
                            }
                            srv = s_d3d11.gx_tex_white_srv;
                        }
                        if ((batch->tex.wrap_s == 1 || batch->tex.wrap_t == 1) && s_d3d11.sampler_wrap) {
                            ID3D11DeviceContext_PSSetSamplers(s_d3d11.context, 0, 1, &s_d3d11.sampler_wrap);
                        } else {
                            ID3D11DeviceContext_PSSetSamplers(s_d3d11.context, 0, 1, &s_d3d11.sampler_linear);
                        }
                        // Name the stray all-white rectangle that appears over the title screen.
                        // 0x9086A120 decodes to a uniform 1024x512 opaque white CMPR texture; if it
                        // is drawn as a 2D quad its placement/blend is what needs fixing.
                        if (batch->tex.guest_addr == 0x9086A120u) {
                            static int s_white_quad_logs = 0;
                            if (s_white_quad_logs < 6) {
                                s_white_quad_logs++;
                                float mnx = 1e9f, mxx = -1e9f, mny = 1e9f, mxy = -1e9f;
                                uint32_t vo = batch->vertex_offset;
                                for (uint32_t vi = 0; vi < batch->vertex_count && vi < 64; vi++) {
                                    float x = gx_vtx[vo + vi].x, y = gx_vtx[vo + vi].y;
                                    if (x < mnx) mnx = x; if (x > mxx) mxx = x;
                                    if (y < mny) mny = y; if (y > mxy) mxy = y;
                                }
                                printf("[GFX] white 1024x512 quad: batch=%u verts=%u persp=%d blend=%d "
                                       "s=%u d=%u bounds=(%.2f,%.2f)-(%.2f,%.2f) uv0=(%.3f,%.3f) col0=0x%08X\n",
                                       b, batch->vertex_count, batch->is_perspective, batch->blend_enable,
                                       batch->src_factor, batch->dst_factor, mnx, mny, mxx, mxy,
                                       gx_vtx[vo].u, gx_vtx[vo].v, gx_vtx[vo].color);
                                fflush(stdout);
                            }
                        }
                    } else {
                        ID3D11DeviceContext_PSSetSamplers(s_d3d11.context, 0, 1, &s_d3d11.sampler_linear);
                    }
                    // Skip unpopulated EFB copy fullscreen quads that would wipe the rendered 3D scene to black
                    if (!batch->is_perspective && batch->has_texture && s_last_tex_all_zero && dst_factor == 0 && batch->vertex_count >= 6) {
                        uint32_t vo = batch->vertex_offset;
                        float min_x = gx_vtx[vo].x, max_x = min_x, min_y = gx_vtx[vo].y, max_y = min_y;
                        for (uint32_t vi = 1; vi < 6 && vi < batch->vertex_count; vi++) {
                            float x = gx_vtx[vo + vi].x;
                            float y = gx_vtx[vo + vi].y;
                            if (x < min_x) min_x = x;
                            if (x > max_x) max_x = x;
                            if (y < min_y) min_y = y;
                            if (y > max_y) max_y = y;
                        }
                        if (min_x <= -0.95f && max_x >= 0.95f && min_y <= -0.95f && max_y >= 0.95f) {
                            continue;
                        }
                    }

                    ID3D11PixelShader* ps = blend_enable ? s_d3d11.gx_ps_alpha : s_d3d11.gx_ps_opaque;
                    if (s_d3d11.tev_enabled && s_d3d11.gx_ps_tev) {
                        /* GX TEV: evaluate the batch's real combiner stages. All eight
                         * texmap slots are bound (white where the batch does not use
                         * them) because the stages pick the texture, not the batch. */
                        const GxTevState* tev_st = gx_pipeline_get_tev_state(batch->tev_state);
                        bool need_compare = false;
                        GxTevConstants* cst = NULL;
                        D3D11_MAPPED_SUBRESOURCE mapped_cb;
                        if (SUCCEEDED(ID3D11DeviceContext_Map(s_d3d11.context,
                                (ID3D11Resource*)s_d3d11.gx_tev_cb, 0, D3D11_MAP_WRITE_DISCARD,
                                0, &mapped_cb))) {
                            cst = (GxTevConstants*)mapped_cb.pData;
                            gx_tev_fill_constants(cst, tev_st, &need_compare);
                            /* TLS_TEV_DUMP_BATCH=<batch index>[,<present frame>]: print exactly
                             * what the TEV shader is handed for that batch, so its arithmetic can
                             * be evaluated offline instead of inferred from its output. Added for
                             * 5c.43 G: b28 (I4 atlas) renders glyphs under TEV and b34 (IA4 atlas)
                             * draws nothing, with identical combiner words. */
                            {
                                static int s_dump_b = -2, s_dump_f = -1;
                                if (s_dump_b == -2) {
                                    const char* e = getenv("TLS_TEV_DUMP_BATCH");
                                    s_dump_b = -1;
                                    if (e && *e) {
                                        s_dump_b = atoi(e);
                                        const char* comma = strchr(e, ',');
                                        if (comma) s_dump_f = atoi(comma + 1);
                                    }
                                }
                                if (s_dump_b >= 0 && (int)b == s_dump_b &&
                                    (s_dump_f < 0 || s_dump_f == (int)s_d3d11_dump_count)) {
                                    uint32_t col = tev_st ? tev_st->combiner_color[0] : 0;
                                    uint32_t alp = tev_st ? tev_st->combiner_alpha[0] : 0;
                                    printf("[TevBatch] frame=%d b%u tex=0x%08X fmt=%u %ux%u "
                                           "stages=%u col0=0x%08X alp0=0x%08X alphaTest=0x%08X "
                                           "texenable=%u map=%u coord=%u ras=0x%08X\n",
                                           s_d3d11_dump_count, b, batch->tex.guest_addr,
                                           batch->tex.format, batch->tex.width, batch->tex.height,
                                           tev_st ? tev_st->num_stages : 0, col, alp,
                                           cst->alpha_test, tev_st ? tev_st->tex_enable[0] : 0,
                                           tev_st ? tev_st->texmap[0] : 0,
                                           tev_st ? tev_st->texcoord[0] : 0,
                                           gx_vtx[batch->vertex_offset].color);
                                    fflush(stdout);
                                }
                            }
                            /* Which UV each stage samples (handover 5c.20): uv0/uv1 when the
                             * batch supplies that texcoord attribute and the texgen exists,
                             * otherwise the constant (0,0) that hardware leaves in an
                             * ungenerated coord. Faithful, but measured to make the MENU
                             * scene *brighter* (b16 (38,35,34) -> (49,43,44)) instead of
                             * closer to the reference, so it stays opt-in:
                             * TLS_TEV_TEXCOORD=1. */
                            if (tev_st) {
                                static int s_texcoord_sel = -1;
                                if (s_texcoord_sel < 0)
                                    s_texcoord_sel = getenv("TLS_TEV_TEXCOORD") ? 1 : 0;
                                for (int i = 0; i < 16; i++) {
                                    uint32_t tc = tev_st->texcoord[i];
                                    bool have = (tc < (uint32_t)batch->xf_num_texgens) &&
                                                (tc < 2u) &&
                                                ((batch->texcoord_mask >> tc) & 1u);
                                    cst->order[i][3] = s_texcoord_sel ? (have ? tc : 2u) : 0u;
                                }
                            }
                        }
                        ID3D11ShaderResourceView* srvs[8];
                        for (int m = 0; m < 8; m++) {
                            srvs[m] = s_d3d11.gx_tex_white_srv;
                            if (batch->tev_texmap_mask & (1u << m)) {
                                ID3D11ShaderResourceView* m_srv = get_or_upload_gx_texture(&batch->tev_texmap[m]);
                                if (m_srv) srvs[m] = m_srv;
                            }
                        }
                        if (cst) {
                            ID3D11DeviceContext_Unmap(s_d3d11.context,
                                (ID3D11Resource*)s_d3d11.gx_tev_cb, 0);
                        }
                        ID3D11DeviceContext_PSSetConstantBuffers(s_d3d11.context, 0, 1, &s_d3d11.gx_tev_cb);
                        ID3D11DeviceContext_PSSetShader(s_d3d11.context, s_d3d11.gx_ps_tev, NULL, 0);
                        ID3D11DeviceContext_PSSetShaderResources(s_d3d11.context, 0, 8, srvs);
                        ID3D11DeviceContext_PSSetSamplers(s_d3d11.context, 0, 1, &s_d3d11.sampler_linear);
                    } else {
                        ID3D11DeviceContext_PSSetShader(s_d3d11.context, ps, NULL, 0);
                        ID3D11DeviceContext_PSSetShaderResources(s_d3d11.context, 0, 1, &srv);
                    }
                    ID3D11DeviceContext_Draw(s_d3d11.context, batch->vertex_count, batch->vertex_offset);
                    /* Watch the framebuffer change pass by pass. TLS_BATCH_PROBE=<frame>. */
                    {
                        static int s_probe_frame = -2;
                        if (s_probe_frame == -2) {
                            const char* f = getenv("TLS_BATCH_PROBE");
                            s_probe_frame = f ? atoi(f) : -1;
                        }
                        if (s_probe_frame >= 0 && probe_frame_hits(s_probe_frame, (int)s_d3d11_dump_count)) {
                            unsigned pr, pg, pb, pmax, pred, pbright, pn, pa;
                            probe_backbuffer_stats(&pr, &pg, &pb, &pmax, &pred, &pbright, &pn, &pa);
                            printf("[BatchProbe] frame=%d after b%u (voff=%u vcnt=%u tex=0x%08X blend=%d s=%u d=%u col0=0x%08X): avg=(%u,%u,%u) a=%u max=%u red=%u/%u bright=%u\n",
                                   s_d3d11_dump_count, b, batch->vertex_offset, batch->vertex_count,
                                   batch->tex.guest_addr, batch->blend_enable, batch->src_factor,
                                   batch->dst_factor, gx_vtx[batch->vertex_offset].color, pr, pg, pb,
                                   pa, pmax, pred, pn, pbright);
                            fflush(stdout);
                        }
                    }
                    /* Per-batch REGION attribution (TLS_BATCH_RECT=<guest frame>).
                     *
                     * TLS_BATCH_PROBE above reads the whole back buffer, so a 70x43-pixel UI
                     * element - the page's SKIP label - is invisible in its average, and
                     * TLS_BATCH_CUTOFF cannot be used instead because cutting the loop leaves
                     * the guest's end-of-frame EFB copies unserviced (handover 5c.43 F). This
                     * reads back only the batch's own NDC rectangle, so it changes nothing
                     * about the frame's inputs.
                     *
                     * Keyed on the PRESENT counter, like TLS_BATCH_DUMP and TLS_SHOT_FRAMES, because
                     * g_runner_current_frame is one behind while the draw loop runs: measured
                     * TLS_BATCH_RECT=4000 with the guest key listed a completely different scene
                     * (19 batches, textures 0x91EBC460..) while 3999 listed the page, and 3999's
                     * page is the frame the shot at 4000 captures (handover 5c.43 G). */
                    {
                        static int s_rect_frame = -2;
                        if (s_rect_frame == -2) {
                            const char* f = getenv("TLS_BATCH_RECT");
                            s_rect_frame = f ? atoi(f) : -1;
                        }
                        if (s_rect_frame >= 0 && s_rect_frame == (int)s_d3d11_dump_count) {
                            uint32_t vo3 = batch->vertex_offset;
                            float mnx = 1e9f, mxx = -1e9f, mny = 1e9f, mxy = -1e9f;
                            for (uint32_t vi = 0; vi < batch->vertex_count; vi++) {
                                float x = gx_vtx[vo3 + vi].x, y = gx_vtx[vo3 + vi].y;
                                if (x < mnx) mnx = x; if (x > mxx) mxx = x;
                                if (y < mny) mny = y; if (y > mxy) mxy = y;
                            }
                            unsigned rr, rg, rb, rdark, rn;
                            probe_backbuffer_rect(mnx, mny, mxx, mxy, &rr, &rg, &rb, &rdark, &rn);
                            printf("[BatchRect] frame=%d after b%u tex=0x%08X blend=%d s=%u d=%u "
                                   "ndc=(%.2f,%.2f)-(%.2f,%.2f) avg=(%u,%u,%u) dark=%u/%u\n",
                                   s_d3d11_dump_count, b, batch->tex.guest_addr,
                                   batch->blend_enable, batch->src_factor, batch->dst_factor,
                                   mnx, mny, mxx, mxy, rr, rg, rb, rdark, rn);
                            fflush(stdout);
                        }
                    }
                    /* TEV state of every batch (TLS_TEV_PROBE=<frame>): the decode of
                     * BP 0xC0..0xDF / 0xE0..0xE7 / 0xF6..0xFD that the shader evaluates. */
                    {
                        static int s_tev_probe_frame = -2;
                        static int s_tev_probe_from = 0;
                        if (s_tev_probe_frame == -2) {
                            const char* f = getenv("TLS_TEV_PROBE");
                            s_tev_probe_frame = f ? atoi(f) : -1;
                            const char* fb = getenv("TLS_TEV_PROBE_FROM");
                            s_tev_probe_from = fb ? atoi(fb) : 0;
                        }
                        if (s_tev_probe_frame >= 0 &&
                            probe_frame_hits(s_tev_probe_frame, (int)s_d3d11_dump_count) &&
                            (int)b >= s_tev_probe_from) {
                            printf("[TevProbe] frame=%d b%u vcnt=%u tex=0x%08X tex1=0x%08X blend=%d s=%u d=%u texcoord_mask=0x%02X tc0=%08X/%08X tc1=%08X/%08X\n",
                                   s_d3d11_dump_count, b, batch->vertex_count,
                                   batch->tex.guest_addr,
                                   batch->has_texture1 ? batch->tex1.guest_addr : 0u,
                                   batch->blend_enable, batch->src_factor, batch->dst_factor,
                                   batch->texcoord_mask,
                                   gx_pipeline_get_tc_info(0, 0), gx_pipeline_get_tc_info(0, 1),
                                   gx_pipeline_get_tc_info(1, 0), gx_pipeline_get_tc_info(1, 1));
                            {
                                /* Screen-space extent of the batch (NDC). The composite tail
                                 * is supposed to be a handful of *small* blur quads; if one of
                                 * them covers the screen, the glow's size is a geometry bug,
                                 * not a blend bug (handover 5c.16). */
                                float mnx2 = 1e9f, mxx2 = -1e9f, mny2 = 1e9f, mxy2 = -1e9f;
                                uint32_t vo2 = batch->vertex_offset;
                                for (uint32_t vi = 0; vi < batch->vertex_count; vi++) {
                                    float x = gx_vtx[vo2 + vi].x, y = gx_vtx[vo2 + vi].y;
                                    if (x < mnx2) mnx2 = x; if (x > mxx2) mxx2 = x;
                                    if (y < mny2) mny2 = y; if (y > mxy2) mxy2 = y;
                                }
                                printf("   [bounds] ndc=(%.2f,%.2f)-(%.2f,%.2f) persp=%d\n",
                                       mnx2, mny2, mxx2, mxy2, batch->is_perspective);
                            }
                            for (int m = 0; m < 8; m++) {
                                if (!(batch->tev_texmap_mask & (1u << m))) continue;
                                unsigned tr, tg, tb, ta;
                                if (probe_texture_avg(&batch->tev_texmap[m], &tr, &tg, &tb, &ta)) {
                                    printf("   [tex] map%d = 0x%08X %ux%u fmt=%u avg=(%u,%u,%u) a=%u\n",
                                           m, batch->tev_texmap[m].guest_addr,
                                           batch->tev_texmap[m].width, batch->tev_texmap[m].height,
                                           batch->tev_texmap[m].format, tr, tg, tb, ta);
                                } else {
                                    printf("   [tex] map%d = 0x%08X <unavailable>\n", m,
                                           batch->tev_texmap[m].guest_addr);
                                }
                            }
                            gx_pipeline_print_tev_state(batch->tev_state);
                            fflush(stdout);
                        }
                    }
                    if (take_shot && (s_d3d11_dump_count == 900 || s_d3d11_dump_count == 1500)) {                        char bpath[128];
                        snprintf(bpath, sizeof(bpath), "build/recomp/batch_%u_f%d.bmp", b, s_d3d11_dump_count);
                        save_backbuffer_bmp(bpath);
                        if (b == 0 || b == 1 || b == 2) {
                            char vfpath[128];
                            snprintf(vfpath, sizeof(vfpath), "build/recomp/batch_%u_f%d_verts.txt", b, s_d3d11_dump_count);
                            FILE* vf = fopen(vfpath, "w");
                            if (vf) {
                                for (uint32_t vi = 0; vi < batch->vertex_count && vi < 200; vi++) {
                                    uint32_t vidx = batch->vertex_offset + vi;
                                    fprintf(vf, "v[%u]: pos=(%.3f, %.3f, %.3f, %.3f) uv=(%.4f, %.4f) col=0x%08X\n",
                                            vi, gx_vtx[vidx].x, gx_vtx[vidx].y, gx_vtx[vidx].z, gx_vtx[vidx].w,
                                            gx_vtx[vidx].u, gx_vtx[vidx].v, gx_vtx[vidx].color);
                                }
                                fclose(vf);
                            }
                        }
                    }
                }
            } else {
                ID3D11DeviceContext_OMSetDepthStencilState(s_d3d11.context, s_d3d11.ds_state_ui, 0);
                ID3D11ShaderResourceView* srv = s_d3d11.gx_tex_white_srv;
                ID3D11DeviceContext_PSSetShaderResources(s_d3d11.context, 0, 1, &srv);
                ID3D11DeviceContext_Draw(s_d3d11.context, gx_vtx_count, 0);
            }
            /* Copies issued after the last draw read the finished frame. */
            d3d11_service_pending_copies(&efb_copy_cursor, 0xFFFFFFFFu, 9999);

            // Restore default blend and depth state
            ID3D11DeviceContext_OMSetBlendState(s_d3d11.context, NULL, NULL, 0xFFFFFFFF);
            ID3D11DeviceContext_OMSetDepthStencilState(s_d3d11.context, NULL, 0);
        }
    }
    /* Frames with no drawable geometry still issue copies (VI scanout, screen captures);
     * service everything that is left so no copy command is silently dropped. */
    d3d11_service_pending_copies(&efb_copy_cursor, 0xFFFFFFFFu, 9999);

    /* Capture plumbing is otherwise silent, which makes "no file appeared" ambiguous
     * between "the capture point was never reached" and "the write failed". Print the
     * present counter, the take_shot decision and the write result when
     * TLS_PRESENT_PROBE=1, and make a failed write loud instead of falling back. */
    {
        static int s_pp = -1;
        if (s_pp < 0) s_pp = getenv("TLS_PRESENT_PROBE") ? 1 : 0;
        /* TLS_PRESENT_WINDOW=<start>,<count> prints EVERY present in that window.
         * The 100-present cadence below cannot show the alternate-frame staleness
         * (5c.25 §4b): the defect is exactly a parity, so it only appears when two
         * adjacent presents are compared. */
        static int s_pw_start = -1, s_pw_count = 0;
        if (s_pw_start == -1) {
            const char* pw = getenv("TLS_PRESENT_WINDOW");
            s_pw_start = -2;
            if (pw && *pw) {
                int a = -1, b = 0;
                if (sscanf(pw, "%d,%d", &a, &b) == 2 && a >= 0 && b > 0) {
                    s_pw_start = a;
                    s_pw_count = b;
                }
            }
        }
        int in_window = (s_pw_start >= 0 && s_d3d11_dump_count >= s_pw_start &&
                         s_d3d11_dump_count < s_pw_start + s_pw_count);
        if (s_pp && (in_window || (s_d3d11_dump_count % 100) == 0 || take_shot)) {
            /* Per-frame characterisation, which the two halves of a multi-pass guest
             * frame need: how many batches, how many of them blend, and whether this
             * frame cleared the EFB (and to what). The [EfbClear] print above is
             * capped at two occurrences for the whole run, so it cannot answer
             * "did THIS frame clear" - which is exactly the question the parity
             * defect turns on. */
            uint32_t bc = 0, blended = 0;
            const GxDrawBatch* bd = gx_pipeline_get_draw_batches(&bc);
            for (uint32_t i = 0; i < bc; i++) if (bd[i].blend_enable) blended++;
            printf("[TLS Present] count=%d frame_counter=%d gx_vtx=%u batches=%u blended=%u "
                   "clears=%d xfbs=%d clear=(%.2f,%.2f,%.2f) take_shot=%d\n",
                   s_d3d11_dump_count, s_d3d11.frame_counter, gx_vtx_count, bc, blended,
                   s_clears_this_frame, s_xfbs_this_frame, s_last_clear[0], s_last_clear[1], s_last_clear[2],
                   (int)take_shot);
            fflush(stdout);
        }
    }
    s_clears_this_frame = 0;
    s_xfbs_this_frame = 0;

    if (take_shot) {
        ID3D11Texture2D* back_buffer = NULL;
        if (SUCCEEDED(IDXGISwapChain_GetBuffer(s_d3d11.swap_chain, 0, &IID_ID3D11Texture2D, (void**)&back_buffer))) {
            D3D11_TEXTURE2D_DESC desc;
            ID3D11Texture2D_GetDesc(back_buffer, &desc);
            desc.Usage = D3D11_USAGE_STAGING;
            desc.BindFlags = 0;
            desc.CPUAccessFlags = D3D11_CPU_ACCESS_READ;
            desc.MiscFlags = 0;
            ID3D11Texture2D* staging = NULL;
            if (SUCCEEDED(ID3D11Device_CreateTexture2D(s_d3d11.device, &desc, NULL, &staging))) {
                ID3D11DeviceContext_CopyResource(s_d3d11.context, (ID3D11Resource*)staging, (ID3D11Resource*)back_buffer);
                D3D11_MAPPED_SUBRESOURCE mapped;
                if (SUCCEEDED(ID3D11DeviceContext_Map(s_d3d11.context, (ID3D11Resource*)staging, 0, D3D11_MAP_READ, 0, &mapped))) {
                    char shot_path[128];
                    snprintf(shot_path, sizeof(shot_path), "build/recomp/d3d11_screenshot_%d.ppm", s_d3d11_dump_count);
                    FILE* f = fopen(shot_path, "wb");
                    if (!f) {
                        snprintf(shot_path, sizeof(shot_path), "build/recomp/d3d11_screenshot.ppm");
                        f = fopen(shot_path, "wb");
                    }
                    if (f) {
                        fprintf(f, "P6\n%u %u\n255\n", desc.Width, desc.Height);
                        uint8_t* row_buf = (uint8_t*)malloc(desc.Width * 3);
                        if (row_buf) {
                            for (UINT y = 0; y < desc.Height; y++) {
                                const uint8_t* row = (const uint8_t*)mapped.pData + y * mapped.RowPitch;
                                for (UINT x = 0; x < desc.Width; x++) {
                                    row_buf[x * 3 + 0] = row[x * 4 + 0];
                                    row_buf[x * 3 + 1] = row[x * 4 + 1];
                                    row_buf[x * 3 + 2] = row[x * 4 + 2];
                                }
                                fwrite(row_buf, 1, desc.Width * 3, f);
                            }
                            free(row_buf);
                        }
                        fclose(f);
                        printf("[D3D11] Dumped screenshot to %s (%u x %u)\n", shot_path, desc.Width, desc.Height);
                        fflush(stdout);
                    }

                    // Also save 24-bit BMP
                    char bmp_path[128];
                    snprintf(bmp_path, sizeof(bmp_path), "build/recomp/d3d11_screenshot_%d.bmp", s_d3d11_dump_count);
                    FILE* f_bmp = fopen(bmp_path, "wb");
                    if (!f_bmp) f_bmp = fopen("build/recomp/d3d11_screenshot.bmp", "wb");
                    if (f_bmp) {
                        uint32_t w = desc.Width;
                        uint32_t h = desc.Height;
                        uint32_t row_padded = (w * 3 + 3) & (~3);
                        uint32_t file_size = 54 + row_padded * h;
                        uint8_t bmp_hdr[54] = {
                            'B', 'M',
                            (uint8_t)file_size, (uint8_t)(file_size >> 8), (uint8_t)(file_size >> 16), (uint8_t)(file_size >> 24),
                            0, 0, 0, 0, 54, 0, 0, 0,
                            40, 0, 0, 0,
                            (uint8_t)w, (uint8_t)(w >> 8), (uint8_t)(w >> 16), (uint8_t)(w >> 24),
                            (uint8_t)h, (uint8_t)(h >> 8), (uint8_t)(h >> 16), (uint8_t)(h >> 24),
                            1, 0, 24, 0, 0, 0, 0, 0,
                            (uint8_t)(row_padded * h), (uint8_t)((row_padded * h) >> 8), (uint8_t)((row_padded * h) >> 16), (uint8_t)((row_padded * h) >> 24),
                            0x13, 0x0B, 0, 0, 0x13, 0x0B, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
                        };
                        fwrite(bmp_hdr, 1, 54, f_bmp);
                        uint8_t* bmp_row = (uint8_t*)calloc(1, row_padded);
                        if (bmp_row) {
                            for (int y = (int)h - 1; y >= 0; y--) {
                                const uint8_t* row = (const uint8_t*)mapped.pData + y * mapped.RowPitch;
                                for (uint32_t x = 0; x < w; x++) {
                                    bmp_row[x * 3 + 0] = row[x * 4 + 2]; // B
                                    bmp_row[x * 3 + 1] = row[x * 4 + 1]; // G
                                    bmp_row[x * 3 + 2] = row[x * 4 + 0]; // R
                                }
                                fwrite(bmp_row, 1, row_padded, f_bmp);
                            }
                            free(bmp_row);
                        }
                        fclose(f_bmp);
                        // Also duplicate as default d3d11_screenshot.bmp
                        CopyFileA(bmp_path, "build/recomp/d3d11_screenshot.bmp", FALSE);
                    }
                    ID3D11DeviceContext_Unmap(s_d3d11.context, (ID3D11Resource*)staging, 0);
                }
                ID3D11Texture2D_Release(staging);
            }
            ID3D11Texture2D_Release(back_buffer);
        }
    }

    // Present with V-Sync
    d3d11_capture_efb_snapshot();
    /* TLS_PRESENT_ON_XFB=1 flips the window only on frames where the guest performed an
     * XFB (scanout) copy, i.e. only on frames the guest itself considers finished.
     * Measured with the per-frame probe:
     *   - the TITLE does an XFB copy on EVERY frame (xfbs=1 at 1444..1448), so it is
     *     unaffected and keeps its cadence;
     *   - the Chapter-1 loop does one only on the composite half (xfbs=1 on 4002/4004/
     *     4006, xfbs=0 on 4001/4003/4005), so the opaque geometry half - a frame the guest
     *     never displays - stops being put on screen.
     * Default ON (set TLS_PRESENT_ON_XFB=0 to restore one present per emulated frame).
     * Measured before flipping: the ONLY stretch with no XFB copy is the initial black
     * boot (frames 2..~300 render `batches=0` anyway), while the title, the save dialog
     * and the Chapter-1 composite frames all have `xfbs=1` - so nothing that has content
     * stops being shown. In Chapter-1 this removes the opaque geometry half from the
     * screen, which the guest never displays. */
    {
        static int s_on_xfb = -1;
        if (s_on_xfb < 0) {
            const char* e = getenv("TLS_PRESENT_ON_XFB");
            s_on_xfb = (e && atoi(e) == 0) ? 0 : 1;
        }
        if (!s_on_xfb || s_xfbs_this_frame > 0)
            IDXGISwapChain_Present(s_d3d11.swap_chain, s_d3d11.vsync ? 1 : 0, 0);
    }
    gx_pipeline_end_frame();
    return true;
}

void d3d11_resize(int new_width, int new_height) {
    if (!s_d3d11.swap_chain || new_width <= 0 || new_height <= 0) return;
    s_d3d11.win_width = new_width;
    s_d3d11.win_height = new_height;

    if (s_d3d11.rtv) {
        ID3D11RenderTargetView_Release(s_d3d11.rtv);
        s_d3d11.rtv = NULL;
    }

    IDXGISwapChain_ResizeBuffers(s_d3d11.swap_chain, 0, new_width, new_height, DXGI_FORMAT_UNKNOWN, 0);
    recreate_render_target();
}

void d3d11_shutdown(void) {
    if (s_d3d11.rgba_staging) {
        free(s_d3d11.rgba_staging);
        s_d3d11.rgba_staging = NULL;
    }
    if (s_d3d11.gx_input_layout) ID3D11InputLayout_Release(s_d3d11.gx_input_layout);
    if (s_d3d11.gx_vbo) ID3D11Buffer_Release(s_d3d11.gx_vbo);
    if (s_d3d11.gx_vs) ID3D11VertexShader_Release(s_d3d11.gx_vs);
    if (s_d3d11.gx_ps_opaque) ID3D11PixelShader_Release(s_d3d11.gx_ps_opaque);
    if (s_d3d11.gx_ps_alpha) ID3D11PixelShader_Release(s_d3d11.gx_ps_alpha);
    if (s_d3d11.sampler_linear) ID3D11SamplerState_Release(s_d3d11.sampler_linear);
    if (s_d3d11.fb_srv) ID3D11ShaderResourceView_Release(s_d3d11.fb_srv);
    if (s_d3d11.fb_texture) ID3D11Texture2D_Release(s_d3d11.fb_texture);
    if (s_d3d11.vs) ID3D11VertexShader_Release(s_d3d11.vs);
    if (s_d3d11.ps) ID3D11PixelShader_Release(s_d3d11.ps);
    if (s_d3d11.rtv) ID3D11RenderTargetView_Release(s_d3d11.rtv);
    if (s_d3d11.swap_chain) IDXGISwapChain_Release(s_d3d11.swap_chain);
    if (s_d3d11.context) ID3D11DeviceContext_Release(s_d3d11.context);
    if (s_d3d11.device) ID3D11Device_Release(s_d3d11.device);
    memset(&s_d3d11, 0, sizeof(s_d3d11));
}
