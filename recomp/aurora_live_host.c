/* Aurora LIVE host side - see aurora_live_host.h for what this is and why it exists. */
#include "aurora_live_host.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef _WIN32
#include <windows.h>
#endif

int tls_aurora_live_on = 0;

/* The runner's guest planes, registered once and mapped into aurora once. */
static const void* s_mem1;
static uint32_t s_mem1_size;
static const void* s_mem2;
static uint32_t s_mem2_size;
static int s_mapped;

#ifdef _WIN32
typedef int (*tls_aurora_init_fn)(uint32_t, uint32_t);
typedef void (*tls_aurora_frame_fn)(const void*, uint32_t, int, int*, int*);
typedef int (*tls_aurora_readback_fn)(uint8_t*, uint32_t, uint32_t*, uint32_t*);
typedef void (*tls_aurora_shutdown_fn)(void);
typedef int (*tls_aurora_map_fn)(const void*, uint32_t, const void*, uint32_t);

static HMODULE s_mod;
static tls_aurora_init_fn s_init;
static tls_aurora_frame_fn s_frame;
static tls_aurora_readback_fn s_readback;
static tls_aurora_shutdown_fn s_shutdown;
static tls_aurora_map_fn s_map;

/* The byte buffer for one guest frame. Grown on demand: a full frame of this game is ~1.3 MB and
 * the capture format's own frames are 0.6-1.3 MB, so a 4 MB start avoids a realloc per frame. */
static uint8_t* s_buf;
static size_t s_len, s_cap;

/* The frame to render, from TLS_AURORA_FRAME. -1 = the first frame with a non-empty stream after
 * init (which is what a smoke test wants); the P1 experiment sets it to the gate's content frame. */
static long s_want_frame = -2;
/* A RANGE is what the cave frame needs: a single frame fed into a fresh aurora renders black
 * (measured: mean 1.92 at guest 2800, 22 553 draws translated), exactly the "thin first frame"
 * trap AP-AN documented on the harness side, where the fix is to start at a FULL frame. */
static long s_from = -2, s_to = -2;

/* Display-list call skipping: a 0x40 opcode costs 9 bytes and is NOT forwarded. The parser feeds
 * the list's body back through gx_pipeline_feed_byte, so the body is recorded in place. */
static int s_skip;

static void load(void) {
    const char* dll = getenv("TLS_AURORA_DLL");
    if (!dll || !*dll) dll = "G:/Program/aurora-spike/build2/libtls_aurora_live.dll";
    const char* f = getenv("TLS_AURORA_FRAME");
    s_want_frame = (f && *f) ? atol(f) : -1;
    {
        const char* a = getenv("TLS_AURORA_FROM");
        const char* b = getenv("TLS_AURORA_TO");
        s_from = (a && *a) ? atol(a) : (s_want_frame >= 0 ? s_want_frame : -1);
        s_to   = (b && *b) ? atol(b) : (s_want_frame >= 0 ? s_want_frame : -1);
    }
    /* The DLL's own dependencies (webgpu_dawn.dll, SDL3.dll, libpng16.dll, libzlib1.dll) sit next
     * to it, and Windows does NOT search a loaded module's own directory - only the app's, PATH
     * and whatever SetDllDirectory added. Without this, LoadLibrary fails with error 126
     * (ERROR_MOD_NOT_FOUND), which names the missing dependency nowhere. */
    {
        char dir[512];
        size_t n = strlen(dll);
        if (n < sizeof(dir)) {
            memcpy(dir, dll, n + 1);
            char* slash = strrchr(dir, '/');
            char* bslash = strrchr(dir, '\\');
            if (bslash && (!slash || bslash > slash)) slash = bslash;
            if (slash) *slash = '\0';
            SetDllDirectoryA(dir);
        }
    }
    printf("[AuroraLive] LoadLibrary %s ...\n", dll); fflush(stdout);
    s_mod = LoadLibraryA(dll);
    printf("[AuroraLive] handle=%p err=%lu\n", (void*)s_mod, (unsigned long)GetLastError()); fflush(stdout);
    if (!s_mod) {
        printf("[AuroraLive] LoadLibrary(%s) failed: %lu\n", dll, (unsigned long)GetLastError());
        fflush(stdout);
        return;
    }
    s_init = (tls_aurora_init_fn)(void*)GetProcAddress(s_mod, "tls_aurora_live_init");
    s_frame = (tls_aurora_frame_fn)(void*)GetProcAddress(s_mod, "tls_aurora_live_frame");
    s_readback = (tls_aurora_readback_fn)(void*)GetProcAddress(s_mod, "tls_aurora_live_readback");
    s_shutdown = (tls_aurora_shutdown_fn)(void*)GetProcAddress(s_mod, "tls_aurora_live_shutdown");
    s_map = (tls_aurora_map_fn)(void*)GetProcAddress(s_mod, "tls_aurora_live_map");
    if (!s_init || !s_frame || !s_readback) {
        printf("[AuroraLive] %s is missing the live ABI\n", dll);
        fflush(stdout);
        FreeLibrary(s_mod);
        s_mod = NULL;
        return;
    }
    printf("[AuroraLive] init 640x448 ...\n"); fflush(stdout);
    /* 640x480, not 640x448: the harness's own colour capture reports 640x480, i.e. its EFB is
     * the full NTSC VI size. The cave frame is black at 448 tall (mean 1.92) while the boot plate
     * renders correctly, and depth/viewport state is what differs between them. */
    if (!s_init(640, 480)) {
        printf("[AuroraLive] init failed\n");
        fflush(stdout);
        return;
    }
    printf("[AuroraLive] live path armed (dll=%s, frames %ld..%ld)\n", dll, s_from, s_to);
    fflush(stdout);
    tls_aurora_live_on = 1;
}

static void ensure_cap(size_t need) {
    if (s_cap >= need) return;
    size_t cap = s_cap ? s_cap : (4u << 20);
    while (cap < need) cap *= 2;
    uint8_t* p = (uint8_t*)realloc(s_buf, cap);
    if (!p) return;
    s_buf = p;
    s_cap = cap;
}
#endif

void tls_aurora_tap_byte(uint8_t byte, int idle) {
#ifdef _WIN32
    if (!tls_aurora_live_on) return;
    if (s_skip) {
        if (--s_skip == 0) idle = 1;
        return;
    }
    /* A display-list call starts only from the idle state; its 9 bytes are 0x40 + address + size,
     * so the opcode byte and the eight that follow are dropped together. */
    if (idle && byte == 0x40) {
        s_skip = 8;
        return;
    }
    ensure_cap(s_len + 1);
    if (!s_buf || s_len >= s_cap) return;
    s_buf[s_len++] = byte;
#else
    (void)byte;
    (void)idle;
#endif
}

void tls_aurora_set_guest_ram(const void* mem1, uint32_t mem1_size, const void* mem2,
                              uint32_t mem2_size) {
    s_mem1 = mem1;
    s_mem1_size = mem1_size;
    s_mem2 = mem2;
    s_mem2_size = mem2_size;
}

void tls_aurora_frame_end(uint32_t guest_frame, int at_present) {
#ifdef _WIN32
    /* ARMED HERE, not in the tap: the parser's tap is gated by the same flag the capture uses
     * (one global test per byte), so the arm decision has to live on the once-per-frame path -
     * the same shape tls_gxcap_frame_begin() uses. */
    if (!tls_aurora_live_on) {
        if (!getenv("TLS_AURORA") || s_mod != NULL) return;
        load();
        if (!tls_aurora_live_on) return;
    }
    if (s_len == 0) return;
    if (!s_mapped) {
        if (!s_map || !s_mem1) {
            printf("[AuroraLive] no guest memory registered; cannot feed aurora\n");
            fflush(stdout);
            tls_aurora_live_on = 0;
            return;
        }
        if (!s_map(s_mem1, s_mem1_size, s_mem2, s_mem2_size)) {
            tls_aurora_live_on = 0;
            return;
        }
        s_mapped = 1;
    }
    /* Feed the whole requested range; the picture is taken at the first DISPLAY BOUNDARY at or after
     * `s_to`. A range rather than one frame because a single frame into a fresh processor is missing
     * the GX state its draws inherit - the harness has the same trap and answers it with a window.
     *
     * WHY `at or after` AND NOT `== s_to`: the guest renders a frame in two halves, so the counter
     * that lands exactly on `s_to` may be the half that issues only EFB copies (measured on the
     * field: alternate presents fed 0 draws and 3 copies). Taking the picture at the next boundary
     * that the guest itself displays (an XFB copy) is the frame the layer also presents. */
    if (s_from >= 0 && (long)guest_frame < s_from) { s_len = 0; return; }
    if (s_to >= 0 && (long)guest_frame > s_to + 8) { s_len = 0; return; }
    if (s_from < 0 && s_len < 4096) { s_len = 0; return; }

    /* A frame that is NOT the guest's own display boundary keeps its bytes: the guest renders a
     * frame in two halves, so the half that issues only EFB copies must not become an aurora frame
     * (aurora clears per fed frame, which is what turned the field frame black - 5c.46 AP-AZ C). */
    if (!at_present) {
        if (s_len > (8u << 20)) s_len = 0;   /* safety valve: a loop that never presents is broken */
        return;
    }

    static int s_done = 0;
    if (s_done) { s_len = 0; return; }
    const int is_last = (s_to < 0) ? 1 : ((long)guest_frame >= s_to);
    if (is_last) s_done = 1;
    int draws = 0, copies = 0;
    s_frame(s_buf, (uint32_t)s_len, is_last, &draws, &copies);
    static uint8_t* rgba;
    static size_t rgba_cap;
    const size_t need = 640u * 448u * 4u;
    if (rgba_cap < need) {
        rgba = (uint8_t*)realloc(rgba, need);
        rgba_cap = rgba ? need : 0;
    }
    if (!is_last) {
        /* history frame: fed, no picture yet */
        printf("[AuroraLive] history guest frame %u: fed %zu bytes, %d draw(s), %d copy cmd(s)\n",
               guest_frame, s_len, draws, copies);
        fflush(stdout);
        s_len = 0;
        return;
    }
    uint32_t w = 0, h = 0;
    int bytes = rgba ? s_readback(rgba, (uint32_t)rgba_cap, &w, &h) : 0;
    printf("[AuroraLive] guest frame %u: fed %zu bytes, %d draw(s), %d copy cmd(s), readback %d bytes (%ux%u)\n",
           guest_frame, s_len, draws, copies, bytes, w, h);
    if (bytes > 0 && rgba) {
        char path[128];
        snprintf(path, sizeof(path), "build/recomp/aurora_live_%u.ppm", guest_frame);
        FILE* f = fopen(path, "wb");
        if (f) {
            fprintf(f, "P6\n%u %u\n255\n", w, h);
            unsigned long sum[3] = {0, 0, 0};
            for (uint32_t i = 0; i < w * h; i++) {
                uint8_t r = rgba[i * 4 + 0], g = rgba[i * 4 + 1], b = rgba[i * 4 + 2];
                fputc(r, f);
                fputc(g, f);
                fputc(b, f);
                sum[0] += r;
                sum[1] += g;
                sum[2] += b;
            }
            fclose(f);
            const double n = (double)w * (double)h;
            printf("[AuroraLive] wrote %s  mean=(%.2f,%.2f,%.2f)\n", path, sum[0] / n, sum[1] / n,
                   sum[2] / n);
        }
    }
    fflush(stdout);
    s_len = 0;
#endif
}

void tls_aurora_shutdown_host(void) {
#ifdef _WIN32
    if (!tls_aurora_live_on) return;
    if (s_shutdown) s_shutdown();
    tls_aurora_live_on = 0;
    if (s_mod) { FreeLibrary(s_mod); s_mod = NULL; }
#endif
}
