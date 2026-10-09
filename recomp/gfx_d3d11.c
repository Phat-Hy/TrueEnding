#define COBJMACROS
#include <windows.h>
#include <initguid.h>
#include <d3d11.h>
#include <dxgi.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>
#include "gfx_backend.h"

// Forward declaration of backend state
typedef struct {
    HWND hwnd;
    ID3D11Device* device;
    ID3D11DeviceContext* context;
    IDXGISwapChain* swap_chain;
    ID3D11RenderTargetView* rtv;
    ID3D11Texture2D* fb_texture;
    ID3D11ShaderResourceView* fb_srv;
    ID3D11SamplerState* sampler_linear;
    ID3D11SamplerState* sampler_point;
    ID3D11VertexShader* vs;
    ID3D11PixelShader* ps;
    
    int fb_width;
    int fb_height;
    int win_width;
    int win_height;
    bool vsync;
    bool fullscreen;
    GfxAspectRatio aspect_ratio;
    uint32_t* rgba_staging;
} D3D11Backend;

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
static const uint8_t s_vs_bytecode[] = {
    68,88,66,67,41,202,118,217,148,229,195,145,177,153,30,111,81,189,178,135,1,0,0,0,
    144,2,0,0,5,0,0,0,52,0,0,0,140,0,0,0,188,0,0,0,32,1,0,0,164,1,0,0,
    82,68,69,70,80,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,0,0,0,0,4,255,255,
    0,1,0,0,60,0,0,0,77,105,99,114,111,115,111,102,116,32,40,82,41,32,72,76,
    83,76,32,83,104,97,100,101,114,32,67,111,109,112,105,108,101,114,32,49,48,46,49,0,
    73,83,71,78,40,0,0,0,1,0,0,0,8,0,0,0,32,0,0,0,0,0,0,0,6,0,0,0,
    1,0,0,0,0,0,0,0,1,1,0,0,83,86,95,86,101,114,116,101,120,73,68,0,
    79,83,71,78,92,0,0,0,2,0,0,0,8,0,0,0,32,0,0,0,0,0,0,0,1,0,0,0,
    3,0,0,0,0,0,0,0,15,0,0,0,44,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0,
    1,0,0,0,3,12,0,0,83,86,95,80,111,115,105,116,105,111,110,0,84,69,88,67,
    79,79,82,68,0,171,83,72,68,82,124,0,0,0,64,0,1,0,31,0,0,0,94,0,0,4,
    10,16,16,0,0,0,0,0,5,0,0,4,242,32,16,0,0,0,0,0,1,0,0,2,
    101,0,0,4,242,32,16,0,0,0,0,0,1,0,0,2,103,0,0,4,242,32,16,0,
    1,0,0,0,1,0,0,2,24,0,0,7,50,0,16,0,10,16,16,0,0,0,0,0,
    2,64,0,0,0,0,0,0,1,0,0,0,86,0,0,5,50,0,16,0,70,0,16,0,
    2,64,0,0,2,0,0,0,2,0,0,0,86,0,0,7,50,32,16,0,1,0,0,0,
    70,0,16,0,2,64,0,0,0,0,0,64,0,0,0,192,2,64,0,0,0,0,128,191,
    0,0,128,63,54,0,0,5,50,32,16,0,0,0,0,0,70,32,16,0,1,0,0,0,
    54,0,0,5,194,32,16,0,0,0,0,0,2,64,0,0,0,0,0,0,0,0,128,63,
    56,0,0,5,50,32,16,0,1,0,0,0,70,0,16,0,62,0,0,1,
    83,84,65,84,116,0,0,0,9,0,0,0,1,0,0,0,0,0,0,0,2,0,0,0,4,0,0,0,
    0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
};

// Precompiled bytecode for texture sampling pixel shader
// HLSL:
// Texture2D tex : register(t0);
// SamplerState smp : register(s0);
// float4 main(float4 pos : SV_Position, float2 uv : TEXCOORD) : SV_Target {
//     return tex.Sample(smp, uv);
// }
static const uint8_t s_ps_bytecode[] = {
    68,88,66,67,163,149,152,112,197,149,173,171,200,90,120,44,87,143,156,151,1,0,0,0,
    148,2,0,0,5,0,0,0,52,0,0,0,224,0,0,0,60,1,0,0,112,1,0,0,168,1,0,0,
    82,68,69,70,164,0,0,0,0,0,0,0,0,0,0,0,2,0,0,0,28,0,0,0,0,4,255,255,
    0,1,0,0,140,0,0,0,60,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,1,0,0,0,1,0,0,0,115,109,112,0,116,101,120,0,77,105,99,114,
    111,115,111,102,116,32,40,82,41,32,72,76,83,76,32,83,104,97,100,101,114,32,67,111,
    109,112,105,108,101,114,32,49,48,46,49,0,73,83,71,78,84,0,0,0,2,0,0,0,
    8,0,0,0,32,0,0,0,0,0,0,0,1,0,0,0,3,0,0,0,0,0,0,0,15,0,0,0,
    44,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0,1,0,0,0,3,3,0,0,83,86,
    95,80,111,115,105,116,105,111,110,0,84,69,88,67,79,79,82,68,0,171,79,83,71,78,
    44,0,0,0,1,0,0,0,8,0,0,0,32,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0,
    0,0,0,0,15,0,0,0,83,86,95,84,97,114,103,101,116,0,171,171,83,72,68,82,
    48,0,0,0,64,0,0,0,12,0,0,0,90,0,0,3,0,96,16,0,0,0,0,0,
    88,0,0,4,0,112,16,0,0,0,0,0,2,0,0,0,98,16,0,3,50,16,16,0,
    1,0,0,0,101,0,0,3,242,32,16,0,0,0,0,0,69,0,0,9,242,32,16,0,
    0,0,0,0,70,16,16,0,1,0,0,0,70,126,16,0,0,0,0,0,0,96,16,0,
    0,0,0,0,62,0,0,1,83,84,65,84,116,0,0,0,1,0,0,0,0,0,0,0,
    0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
};

static void recreate_render_target(void) {
    if (s_d3d11.rtv) {
        ID3D11RenderTargetView_Release(s_d3d11.rtv);
        s_d3d11.rtv = NULL;
    }
    ID3D11Texture2D* back_buffer = NULL;
    HRESULT hr = IDXGISwapChain_GetBuffer(s_d3d11.swap_chain, 0, &IID_ID3D11Texture2D, (void**)&back_buffer);
    if (SUCCEEDED(hr) && back_buffer) {
        ID3D11Device_CreateRenderTargetView(s_d3d11.device, (ID3D11Resource*)back_buffer, NULL, &s_d3d11.rtv);
        ID3D11Texture2D_Release(back_buffer);
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

    s_d3d11.rgba_staging = (uint32_t*)malloc(s_d3d11.fb_width * s_d3d11.fb_height * sizeof(uint32_t));

    printf("[D3D11] Initialized Direct3D 11 Hardware Graphics Pipeline (%dx%d, VSync: %s)\n",
           s_d3d11.win_width, s_d3d11.win_height, s_d3d11.vsync ? "ON" : "OFF");
    return true;
}

static inline uint8_t clamp_u8(int v) {
    return (uint8_t)(v < 0 ? 0 : (v > 255 ? 255 : v));
}

bool d3d11_present(const uint8_t* yuyv_data, int fb_width, int fb_height) {
    if (!s_d3d11.device || !s_d3d11.swap_chain) return false;

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

    // Convert YUYV422 to RGBA32
    if (yuyv_data && s_d3d11.rgba_staging) {
        int total_pixels = fb_width * fb_height;
        const uint8_t* src = yuyv_data;
        uint32_t* dst = s_d3d11.rgba_staging;

        for (int i = 0; i < total_pixels; i += 2) {
            int y0 = src[0];
            int u  = src[1];
            int y1 = src[2];
            int v  = src[3];
            src += 4;

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

    // Set Render Target
    ID3D11DeviceContext_OMSetRenderTargets(s_d3d11.context, 1, &s_d3d11.rtv, NULL);

    // Clear backbuffer to solid black (letterbox / pillarbox bars)
    const FLOAT black_color[4] = {0.0f, 0.0f, 0.0f, 1.0f};
    ID3D11DeviceContext_ClearRenderTargetView(s_d3d11.context, s_d3d11.rtv, black_color);

    // Calculate Aspect Ratio Preserving Viewport
    float vx = 0.0f, vy = 0.0f;
    float vw = (float)s_d3d11.win_width;
    float vh = (float)s_d3d11.win_height;

    if (s_d3d11.aspect_ratio != GFX_ASPECT_STRETCH && s_d3d11.win_height > 0) {
        float target_aspect = (s_d3d11.aspect_ratio == GFX_ASPECT_4_3) ? (4.0f / 3.0f) : (16.0f / 9.0f);
        float win_aspect = (float)s_d3d11.win_width / (float)s_d3d11.win_height;
        if (win_aspect > target_aspect) {
            // Window is wider than target -> pillarbox (black bars on left/right)
            vh = (float)s_d3d11.win_height;
            vw = (float)s_d3d11.win_height * target_aspect;
            vx = ((float)s_d3d11.win_width - vw) * 0.5f;
            vy = 0.0f;
        } else {
            // Window is taller than target -> letterbox (black bars on top/bottom)
            vw = (float)s_d3d11.win_width;
            vh = (float)s_d3d11.win_width / target_aspect;
            vx = 0.0f;
            vy = ((float)s_d3d11.win_height - vh) * 0.5f;
        }
    }

    D3D11_VIEWPORT vp = {0};
    vp.TopLeftX = vx;
    vp.TopLeftY = vy;
    vp.Width = vw;
    vp.Height = vh;
    vp.MinDepth = 0.0f;
    vp.MaxDepth = 1.0f;
    ID3D11DeviceContext_RSSetViewports(s_d3d11.context, 1, &vp);

    // Bind Pipeline
    ID3D11DeviceContext_IASetPrimitiveTopology(s_d3d11.context, D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);
    ID3D11DeviceContext_VSSetShader(s_d3d11.context, s_d3d11.vs, NULL, 0);
    ID3D11DeviceContext_PSSetShader(s_d3d11.context, s_d3d11.ps, NULL, 0);
    ID3D11DeviceContext_PSSetShaderResources(s_d3d11.context, 0, 1, &s_d3d11.fb_srv);
    ID3D11DeviceContext_PSSetSamplers(s_d3d11.context, 0, 1, &s_d3d11.sampler_linear);

    // Draw full-screen triangle (3 vertices generated procedurally in VS)
    ID3D11DeviceContext_Draw(s_d3d11.context, 3, 0);

    // Present with V-Sync
    IDXGISwapChain_Present(s_d3d11.swap_chain, s_d3d11.vsync ? 1 : 0, 0);
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
