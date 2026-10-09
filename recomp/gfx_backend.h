#ifndef GFX_BACKEND_H
#define GFX_BACKEND_H

#include <windows.h>
#include <stdbool.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    GFX_BACKEND_AUTO = 0,
    GFX_BACKEND_D3D11 = 1,
    GFX_BACKEND_D3D12 = 2,
    GFX_BACKEND_VULKAN = 3,
    GFX_BACKEND_GDI = 4
} GfxBackendType;

typedef enum {
    GFX_ASPECT_4_3 = 0,
    GFX_ASPECT_16_9 = 1,
    GFX_ASPECT_STRETCH = 2
} GfxAspectRatio;

typedef struct {
    GfxBackendType backend_type;
    int window_width;
    int window_height;
    int render_scale;       // 1 = 1x, 2 = 1080p, 3 = 1440p, 4 = 4K
    int target_fps;         // 30, 60, 120, 0 (uncapped)
    bool vsync;
    bool fullscreen;
    GfxAspectRatio aspect_ratio;
} GfxConfig;

// Initialize graphics backend for given window handle
bool gfx_backend_init(HWND hwnd, const GfxConfig* config);

// Present a new guest framebuffer (YUYV422 format from Wii VI / GX)
bool gfx_backend_present(const uint8_t* yuyv_data, int fb_width, int fb_height);

// Window resize notification
void gfx_backend_resize(int new_width, int new_height);

// Toggle fullscreen mode
void gfx_backend_toggle_fullscreen(void);

// Shut down and release all resources
void gfx_backend_shutdown(void);

// Get current backend name
const char* gfx_backend_get_name(void);

#ifdef __cplusplus
}
#endif

#endif // GFX_BACKEND_H
