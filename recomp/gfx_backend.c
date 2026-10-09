#include <windows.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include "gfx_backend.h"

// Forward declarations from backends
extern bool d3d11_init(HWND hwnd, const GfxConfig* config);
extern bool d3d11_present(const uint8_t* yuyv_data, int fb_width, int fb_height);
extern void d3d11_resize(int new_width, int new_height);
extern void d3d11_shutdown(void);

extern bool d3d12_init(HWND hwnd, const GfxConfig* config);
extern bool d3d12_present(const uint8_t* yuyv_data, int fb_width, int fb_height);
extern void d3d12_resize(int new_width, int new_height);
extern void d3d12_shutdown(void);

static GfxConfig s_active_config = {0};
static GfxBackendType s_active_backend = GFX_BACKEND_GDI;
static HWND s_hwnd = NULL;
static HDC s_hdc = NULL;
static uint32_t* s_gdi_rgb = NULL;

static inline uint8_t clamp_u8_gdi(int v) {
    return (uint8_t)(v < 0 ? 0 : (v > 255 ? 255 : v));
}

// GDI Fallback implementation
static bool gdi_init(HWND hwnd, const GfxConfig* config) {
    s_hwnd = hwnd;
    s_hdc = GetDC(hwnd);
    s_gdi_rgb = (uint32_t*)malloc(1920 * 1080 * sizeof(uint32_t));
    printf("[GFX] Initialized GDI Software Graphics Fallback\n");
    return true;
}

static bool gdi_present(const uint8_t* yuyv_data, int fb_width, int fb_height) {
    if (!s_hdc || !yuyv_data || !s_gdi_rgb) return false;

    int total_pixels = fb_width * fb_height;
    const uint8_t* src = yuyv_data;
    uint32_t* dst = s_gdi_rgb;

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

        uint8_t r0 = clamp_u8_gdi((298 * c0 + 409 * e + 128) >> 8);
        uint8_t g0 = clamp_u8_gdi((298 * c0 - 100 * d - 208 * e + 128) >> 8);
        uint8_t b0 = clamp_u8_gdi((298 * c0 + 516 * d + 128) >> 8);

        uint8_t r1 = clamp_u8_gdi((298 * c1 + 409 * e + 128) >> 8);
        uint8_t g1 = clamp_u8_gdi((298 * c1 - 100 * d - 208 * e + 128) >> 8);
        uint8_t b1 = clamp_u8_gdi((298 * c1 + 516 * d + 128) >> 8);

        // GDI expects BGRX
        dst[0] = (uint32_t)(b0 | (g0 << 8) | (r0 << 16));
        dst[1] = (uint32_t)(b1 | (g1 << 8) | (r1 << 16));
        dst += 2;
    }

    BITMAPINFO bmi = {0};
    bmi.bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
    bmi.bmiHeader.biWidth = fb_width;
    bmi.bmiHeader.biHeight = -fb_height;
    bmi.bmiHeader.biPlanes = 1;
    bmi.bmiHeader.biBitCount = 32;
    bmi.bmiHeader.biCompression = BI_RGB;

    RECT cr;
    GetClientRect(s_hwnd, &cr);
    int win_w = cr.right - cr.left;
    int win_h = cr.bottom - cr.top;

    StretchDIBits(s_hdc, 0, 0, win_w, win_h,
                  0, 0, fb_width, fb_height,
                  s_gdi_rgb, &bmi, DIB_RGB_COLORS, SRCCOPY);
    return true;
}

static void gdi_shutdown(void) {
    if (s_gdi_rgb) {
        free(s_gdi_rgb);
        s_gdi_rgb = NULL;
    }
    if (s_hdc && s_hwnd) {
        ReleaseDC(s_hwnd, s_hdc);
        s_hdc = NULL;
    }
}

bool gfx_backend_init(HWND hwnd, const GfxConfig* config) {
    s_active_config = *config;
    s_hwnd = hwnd;

    // Direct3D 12 requested or AUTO (modern first)
    if (config->backend_type == GFX_BACKEND_D3D12 || config->backend_type == GFX_BACKEND_AUTO) {
        if (d3d12_init(hwnd, config)) {
            s_active_backend = GFX_BACKEND_D3D12;
            return true;
        }
        if (config->backend_type == GFX_BACKEND_D3D12) {
            printf("[GFX] Direct3D 12 initialization failed, falling back to D3D11...\n");
        }
    }

    // Direct3D 11 requested or fallback from AUTO / D3D12
    if (config->backend_type == GFX_BACKEND_AUTO ||
        config->backend_type == GFX_BACKEND_D3D11 ||
        config->backend_type == GFX_BACKEND_D3D12) {
        if (d3d11_init(hwnd, config)) {
            s_active_backend = GFX_BACKEND_D3D11;
            return true;
        }
        printf("[GFX] Direct3D 11 initialization failed, falling back to GDI...\n");
    }

    // Fallback to GDI
    if (gdi_init(hwnd, config)) {
        s_active_backend = GFX_BACKEND_GDI;
        return true;
    }

    return false;
}

bool gfx_backend_present(const uint8_t* yuyv_data, int fb_width, int fb_height) {
    if (s_active_backend == GFX_BACKEND_D3D12) {
        return d3d12_present(yuyv_data, fb_width, fb_height);
    } else if (s_active_backend == GFX_BACKEND_D3D11) {
        return d3d11_present(yuyv_data, fb_width, fb_height);
    } else {
        return gdi_present(yuyv_data, fb_width, fb_height);
    }
}

void gfx_backend_resize(int new_width, int new_height) {
    s_active_config.window_width = new_width;
    s_active_config.window_height = new_height;
    if (s_active_backend == GFX_BACKEND_D3D12) {
        d3d12_resize(new_width, new_height);
    } else if (s_active_backend == GFX_BACKEND_D3D11) {
        d3d11_resize(new_width, new_height);
    }
}

void gfx_backend_toggle_fullscreen(void) {
    static WINDOWPLACEMENT prev_placement = { sizeof(WINDOWPLACEMENT) };
    DWORD style = GetWindowLong(s_hwnd, GWL_STYLE);

    if (!s_active_config.fullscreen) {
        MONITORINFO mi = { sizeof(mi) };
        if (GetWindowPlacement(s_hwnd, &prev_placement) &&
            GetMonitorInfo(MonitorFromWindow(s_hwnd, MONITOR_DEFAULTTOPRIMARY), &mi)) {
            SetWindowLong(s_hwnd, GWL_STYLE, style & ~WS_OVERLAPPEDWINDOW);
            SetWindowPos(s_hwnd, HWND_TOP,
                         mi.rcMonitor.left, mi.rcMonitor.top,
                         mi.rcMonitor.right - mi.rcMonitor.left,
                         mi.rcMonitor.bottom - mi.rcMonitor.top,
                         SWP_NOOWNERZORDER | SWP_FRAMECHANGED);
            s_active_config.fullscreen = true;
        }
    } else {
        SetWindowLong(s_hwnd, GWL_STYLE, style | WS_OVERLAPPEDWINDOW);
        SetWindowPlacement(s_hwnd, &prev_placement);
        SetWindowPos(s_hwnd, NULL, 0, 0, 0, 0,
                     SWP_NOMOVE | SWP_NOSIZE | SWP_NOZORDER |
                     SWP_NOOWNERZORDER | SWP_FRAMECHANGED);
        s_active_config.fullscreen = false;
    }
}

void gfx_backend_shutdown(void) {
    if (s_active_backend == GFX_BACKEND_D3D12) {
        d3d12_shutdown();
    } else if (s_active_backend == GFX_BACKEND_D3D11) {
        d3d11_shutdown();
    } else {
        gdi_shutdown();
    }
}

const char* gfx_backend_get_name(void) {
    switch (s_active_backend) {
        case GFX_BACKEND_D3D11: return "Direct3D 11 (Hardware Accelerated)";
        case GFX_BACKEND_D3D12: return "Direct3D 12 (Hardware Accelerated)";
        case GFX_BACKEND_VULKAN: return "Vulkan (Hardware Accelerated)";
        case GFX_BACKEND_GDI:   return "GDI (Software Fallback)";
        default:                return "Unknown";
    }
}
