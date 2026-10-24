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
static void d3d11_efb_copy_to_guest(uint32_t dst_guest, uint32_t x0, uint32_t y0, uint32_t x1, uint32_t y1, uint32_t format);

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
    s_d3d11.gx_ps = s_d3d11.gx_ps_alpha;

    D3D11_INPUT_ELEMENT_DESC gx_elements[] = {
        {"POSITION", 0, DXGI_FORMAT_R32G32B32A32_FLOAT, 0, 0,  D3D11_INPUT_PER_VERTEX_DATA, 0},
        {"NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT,    0, 16, D3D11_INPUT_PER_VERTEX_DATA, 0},
        {"TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,       0, 28, D3D11_INPUT_PER_VERTEX_DATA, 0},
        {"COLOR",    0, DXGI_FORMAT_R8G8B8A8_UNORM,     0, 36, D3D11_INPUT_PER_VERTEX_DATA, 0},
    };
    hr = ID3D11Device_CreateInputLayout(s_d3d11.device, gx_elements, 4, s_gx_vs_bytecode, sizeof(s_gx_vs_bytecode), &s_d3d11.gx_input_layout);
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
    gx_pipeline_set_efb_copy_hook(d3d11_efb_copy_to_guest);
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
    uint32_t approx_words = (tu->width * tu->height) / 8; // minimum 0.5 bpp -> words
    if (approx_words == 0) approx_words = 1;
    uint32_t step = (approx_words > 64) ? (approx_words / 64) : 1;
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
        if (getenv("TLS_TEX_ALPHA_PROBE")) {
            static uint32_t s_probe = 0;
            if (s_probe < 30) {
                s_probe++;
                uint32_t opaque_cnt = 0, clear_cnt = 0;
                for (uint32_t pi = 0; pi < total_px; pi++) {
                    uint32_t pa = s_d3d11.gx_staging_rgba[pi] >> 24;
                    if (pa >= 128) opaque_cnt++; else if (pa < 8) clear_cnt++;
                }
                printf("[TEXPROBE] addr=0x%08X %ux%u fmt=%u opaque=%u clear=%u corner=0x%08X center=0x%08X\n",
                       tu->guest_addr, tu->width, tu->height, tu->format,
                       opaque_cnt, clear_cnt, s_d3d11.gx_staging_rgba[0],
                       s_d3d11.gx_staging_rgba[(tu->height / 2) * tu->width + tu->width / 2]);
                fflush(stdout);
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
                for (uint32_t pi = 0; pi < total_px; pi++) {
                    uint32_t px = s_d3d11.gx_staging_rgba[pi];
                    int r = (int)(uint8_t)px;
                    int g = (int)(uint8_t)(px >> 8);
                    int b = (int)(uint8_t)(px >> 16);
                    int lum = (r * 3 + g * 6 + b) / 10;
                    if (lum < min_luma) min_luma = lum;
                    int dr = r > base_r ? (r - base_r) : 0;
                    int dg = g > base_g ? (g - base_g) : 0;
                    int db = b > base_b ? (b - base_b) : 0;
                    int dmax = dr > dg ? (dr > db ? dr : db) : (dg > db ? dg : db);
                    if (dmax > max_delta) max_delta = dmax;
                }

                int base_luma = (base_r * 3 + base_g * 6 + base_b) / 10;
                bool is_ink_art = (base_luma - min_luma) > 60;

                if (max_delta > 10 && !is_ink_art) {
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
                } else if (is_ink_art) {
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
        case 2: return D3D11_BLEND_DEST_COLOR;
        case 3: return D3D11_BLEND_INV_DEST_COLOR;
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

static ID3D11BlendState* get_or_create_blend_state(bool blend_enable, uint8_t src_factor, uint8_t dst_factor, bool subtract) {
    uint32_t key = (blend_enable ? 1 : 0) | ((uint32_t)src_factor << 1) | ((uint32_t)dst_factor << 4) | (subtract ? (1 << 7) : 0);
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
    desc.RenderTarget[0].SrcBlendAlpha = D3D11_BLEND_ONE;
    desc.RenderTarget[0].DestBlendAlpha = D3D11_BLEND_INV_SRC_ALPHA;
    desc.RenderTarget[0].BlendOpAlpha = D3D11_BLEND_OP_ADD;
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

/* GX EFB -> texture copy (BP 0x52). Reads the requested GX-space rectangle out of the
 * backbuffer and writes it into guest memory as a GX RGBA8 texture, in the same 4x4
 * tile layout that decode_gx_texture() reads (32 bytes of A/R pairs, then 32 bytes of
 * G/B pairs, per tile). This is what produces the water reflection, the menu blur and
 * the guest's own VI framebuffers - none of which existed while the copy was ignored
 * (handover 5c.11). */
static void d3d11_efb_copy_to_guest(uint32_t dst_guest, uint32_t x0, uint32_t y0,
                                    uint32_t x1, uint32_t y1, uint32_t format) {
    if (!s_d3d11.device || !s_d3d11.context || !s_d3d11.swap_chain) return;
    if (format != 0) {
        static int s_fmt_reported = 0;
        if (s_fmt_reported++ < 4) {
            printf("[EfbCopy] format %u not implemented (only RGBA8); copy skipped\n", format);
            fflush(stdout);
        }
        return;
    }
    if (x1 < x0 || y1 < y0) return;

    uint32_t w = x1 - x0 + 1;
    uint32_t h = y1 - y0 + 1;
    if (w > 1024 || h > 1024) return;

    uint8_t* guest = (uint8_t*)host_resolve_gx_guest_addr(dst_guest);
    if (!guest) {
        static int s_addr_reported = 0;
        if (s_addr_reported++ < 4) {
            printf("[EfbCopy] destination 0x%08X is not mapped; copy skipped\n", dst_guest);
            fflush(stdout);
        }
        return;
    }

    ID3D11Texture2D* back_buffer = NULL;
    if (FAILED(IDXGISwapChain_GetBuffer(s_d3d11.swap_chain, 0, &IID_ID3D11Texture2D, (void**)&back_buffer)))
        return;

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
            const uint8_t* src = (const uint8_t*)mapped.pData;
            float sx = (s_d3d11.vp_w > 0.0f) ? (s_d3d11.vp_w / 640.0f) : (float)desc.Width / 640.0f;
            float sy = (s_d3d11.vp_h > 0.0f) ? (s_d3d11.vp_h / 480.0f) : (float)desc.Height / 480.0f;
            uint32_t tiles_x = (w + 3) / 4;
            for (uint32_t gy = 0; gy < h; gy++) {
                uint32_t py = (uint32_t)(s_d3d11.vp_y + ((float)(y0 + gy) + 0.5f) * sy);
                if (py >= desc.Height) py = desc.Height - 1;
                const uint8_t* row = src + (size_t)py * mapped.RowPitch;
                for (uint32_t gx = 0; gx < w; gx++) {
                    uint32_t px = (uint32_t)(s_d3d11.vp_x + ((float)(x0 + gx) + 0.5f) * sx);
                    if (px >= desc.Width) px = desc.Width - 1;
                    const uint8_t* p = row + (size_t)px * 4;
                    uint8_t b = p[0], g = p[1], r = p[2], a = p[3];
                    uint32_t tile = (gy / 4) * tiles_x + (gx / 4);
                    uint32_t within = (gy % 4) * 4 + (gx % 4);
                    uint8_t* tile_base = guest + (size_t)tile * 64;
                    tile_base[within * 2 + 0] = a;
                    tile_base[within * 2 + 1] = r;
                    tile_base[32 + within * 2 + 0] = g;
                    tile_base[32 + within * 2 + 1] = b;
                }
            }
            ID3D11DeviceContext_Unmap(s_d3d11.context, (ID3D11Resource*)staging, 0);
        }
        ID3D11Texture2D_Release(staging);
    }
    ID3D11Texture2D_Release(back_buffer);
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

    // Clear backbuffer to solid black
    FLOAT clear_color[4] = {0.0f, 0.0f, 0.0f, 1.0f};
    ID3D11DeviceContext_ClearRenderTargetView(s_d3d11.context, s_d3d11.rtv, clear_color);
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
    // Dense capture for menu-state diagnosis: TLS_DUMP_EVERY=<n> dumps every n frames.
    {
        const char* dump_every = getenv("TLS_DUMP_EVERY");
        if (dump_every) {
            int every = atoi(dump_every);
            if (every > 0 && (s_d3d11_dump_count % every) == 0) {
                take_shot = true;
            }
        }
    }
    /* Explicit capture points: TLS_SHOT_FRAMES=1920,2160,2400. The list above is a
     * legacy fixed set; this lets a run grab exactly the frames being investigated
     * instead of editing hardcoded numbers. */
    {
        static char s_shot_list[256];
        static int s_shot_loaded = 0;
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
                if (atoi(tok) == s_d3d11_dump_count) {
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
                    if (s_dump_frame >= 0 && (int)s_d3d11_dump_count == s_dump_frame) {
                        printf("[BatchDump] frame=%d batches=%u vtx=%u\n",
                               s_d3d11_dump_count, batch_count, gx_vtx_count);
                        uint32_t shown = 0;
                        for (uint32_t b = 0; b < batch_count && (int)shown < s_dump_max; b++) {
                            const GxDrawBatch* bd = &batches[b];
                            if (bd->vertex_count == 0) continue;
                            float minx = 1e9f, maxx = -1e9f, miny = 1e9f, maxy = -1e9f;
                            for (uint32_t vi = 0; vi < bd->vertex_count; vi++) {
                                const GxVertex* v = &gx_vtx[bd->vertex_offset + vi];
                                if (v->x < minx) minx = v->x;
                                if (v->x > maxx) maxx = v->x;
                                if (v->y < miny) miny = v->y;
                                if (v->y > maxy) maxy = v->y;
                            }
                            printf("  b%u vtx=%u tex=%d addr=0x%08X %ux%u fmt=%u tlut=0x%08X "
                                   "blend=%d src=%u dst=%u sub=%d persp=%d zwrite=%d ztest=%d "
                                   "ndc=[%.2f..%.2f, %.2f..%.2f]\n",
                                   b, bd->vertex_count, bd->has_texture, bd->tex.guest_addr,
                                   bd->tex.width, bd->tex.height, bd->tex.format, bd->tex.tlut_addr,
                                   bd->blend_enable, bd->src_factor, bd->dst_factor, bd->subtract,
                                   bd->is_perspective, bd->depth_write_enable, bd->depth_test_enable,
                                   minx, maxx, miny, maxy);
                            shown++;
                        }
                        fflush(stdout);
                    }
                }
                for (uint32_t b = 0; b < batch_count; b++) {
                    const GxDrawBatch* batch = &batches[b];
                    if (batch->vertex_count == 0) continue;



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
                        if ((b == 0 || b == 1 || b == 2 || b == 7 || b == 17 || batch->tex.guest_addr == 0x904E5EE0 || batch->tex.guest_addr == 0x907427C0 || batch->tex.guest_addr == 0x81A1A1A0) && batch->vertex_count >= 6) {
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

                    ID3D11BlendState* bs = get_or_create_blend_state(blend_enable, src_factor, dst_factor, batch->subtract);
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
                        // 2D UI: always disable depth test so UI renders cleanly on top of 3D scene
                        ID3D11DeviceContext_OMSetDepthStencilState(s_d3d11.context, s_d3d11.ds_state_ui, 0);
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
                    ID3D11DeviceContext_PSSetShader(s_d3d11.context, ps, NULL, 0);
                    ID3D11DeviceContext_PSSetShaderResources(s_d3d11.context, 0, 1, &srv);
                    ID3D11DeviceContext_Draw(s_d3d11.context, batch->vertex_count, batch->vertex_offset);
                    if (take_shot && (s_d3d11_dump_count == 900 || s_d3d11_dump_count == 1500)) {
                        char bpath[128];
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

            // Restore default blend and depth state
            ID3D11DeviceContext_OMSetBlendState(s_d3d11.context, NULL, NULL, 0xFFFFFFFF);
            ID3D11DeviceContext_OMSetDepthStencilState(s_d3d11.context, NULL, 0);
        }
    }
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
    IDXGISwapChain_Present(s_d3d11.swap_chain, s_d3d11.vsync ? 1 : 0, 0);
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
