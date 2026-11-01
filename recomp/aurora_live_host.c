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
typedef void (*tls_aurora_stats_fn)(uint64_t*, uint64_t*, uint64_t*, uint64_t*, uint64_t*, uint32_t*);

static HMODULE s_mod;
static tls_aurora_init_fn s_init;
static tls_aurora_frame_fn s_frame;
static tls_aurora_readback_fn s_readback;
static tls_aurora_shutdown_fn s_shutdown;
static tls_aurora_map_fn s_map;
static tls_aurora_stats_fn s_stats;

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

/* WHICH FED FRAMES GET A PICTURE, from TLS_AURORA_SHOTS=2794,2795,... (5c.46 AP-BI).
 *
 * The alignment question AP-BD leaves open is "which guest frame is an aurora readback?", and it
 * cannot be answered with one picture per launch: the layer's own neighbouring frames differ by
 * 33-48 mean |d|, so a single aurora frame compared against four layer frames measures the frame
 * offset, not the renderer. The feed is per PRESENT and the guest renders the pair
 * (draws, then copies) as two presents - so the pair's FIRST present is the geometry half and the
 * second is the composite half, and only a readback at each of them can put the two implementations
 * on the same instant. A list, not a single number. Empty/absent = one readback at the first
 * present at/after s_to, the pre-AP-BI behaviour. */
static long s_shots[32];
static int s_nshot;
/* TLS_AURORA_LEGACY_FEED=1: AP-BC's display-boundary feed model (see the comment at its use). */
static int s_legacy_feed = -1;


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
    {
        const char* shots = getenv("TLS_AURORA_SHOTS");
        if (shots && *shots) {
            char buf[512];
            strncpy(buf, shots, sizeof(buf) - 1);
            buf[sizeof(buf) - 1] = '\0';
            for (char* tok = strtok(buf, ","); tok && s_nshot < 32; tok = strtok(NULL, ",")) {
                s_shots[s_nshot++] = atol(tok);
            }
        }
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
    s_stats = (tls_aurora_stats_fn)(void*)GetProcAddress(s_mod, "tls_aurora_live_stats");
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
     * WHY `at or after` AND NOT `== s_to`: a feed can be configured to close only on XFB presents, and
     * the counter that lands exactly on `s_to` may then be a frame that issues only EFB copies. */
    if (s_from >= 0 && (long)guest_frame < s_from) { s_len = 0; return; }
    if (s_to >= 0 && (long)guest_frame > s_to + 8) { s_len = 0; return; }
    if (s_from < 0 && s_len < 4096) { s_len = 0; return; }

    /* THE FEED MODEL, and it is the one measured thing this file has changed on (5c.46 AP-BJ).
     *
     * `at_present` is now three-valued at the call site: 1 = present with an XFB/scanout copy,
     * 2 = present without one, 0 = a mid-frame GXDrawDone flush. Both 1 and 2 END A GUEST FRAME.
     *
     * DEFAULT (feed one aurora frame per guest frame): close on every present, 1 or 2, and let a
     * flush accumulate. This is exactly what the harness does with a recorded capture - one aurora
     * frame per recorded frame - and that model measures **7.66 mean |d|** against the layer's
     * same-run shot at the same guest frame.
     *
     * TLS_AURORA_LEGACY_FEED=1 restores AP-BC's display-boundary model (close only on 1), which
     * merges the pair into one aurora frame: measured **63.14-65.77** against the same layer shots,
     * because the composite half's copies then run over a populated EFB where the layer (and the
     * harness) start from a cleared one. The two numbers are the reason this is a default change
     * and not a switch. */
    if (s_legacy_feed < 0) s_legacy_feed = getenv("TLS_AURORA_LEGACY_FEED") ? 1 : 0;
    if (s_legacy_feed ? (at_present != 1) : (at_present == 0)) {
        if (s_len > (8u << 20)) s_len = 0;   /* safety valve: a loop that never presents is broken */
        return;
    }

    /* One picture per requested fed frame (5c.46 AP-BI). Without a list, keep the old single-shot
     * behaviour: the first display boundary at or after s_to. */
    int want = 0;
    if (s_nshot > 0) {
        for (int i = 0; i < s_nshot; i++) {
            if (s_shots[i] == (long)guest_frame) { want = 1; break; }
        }
    } else {
        want = (s_to < 0) ? 1 : ((long)guest_frame >= s_to);
    }
    int draws = 0, copies = 0;
    s_frame(s_buf, (uint32_t)s_len, want, &draws, &copies);
    /* The readback buffer is reused for every shot; the PPM it is written to is named by the guest
     * frame, so a list of shots leaves one file per frame. */
    static uint8_t* rgba;
    static size_t rgba_cap;
    const size_t need = 640u * 448u * 4u;
    if (rgba_cap < need) {
        rgba = (uint8_t*)realloc(rgba, need);
        rgba_cap = rgba ? need : 0;
    }
    if (!want) {
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

/* ============================================================================================
 * P4 PUBLISH (handover 5c.46 AP-BQ). See aurora_live_host.h for why this is not
 * tls_aurora_frame_end(). The differences are deliberate and small:
 *
 *  - it runs at the TOP of d3d11_present(), so the picture belongs to THIS frame;
 *  - it ignores TLS_AURORA_FROM/_TO/_SHOTS (publishing means every present is rendered);
 *  - it never prints a per-frame line: a full-run promotion would emit 3 500 of them, so the
 *    counter it reports is a cumulative one behind TLS_AURORA_STATS instead.
 *
 * Everything else is the same path the P1/P4 measurements used: the frame's bytes go to the DLL,
 * which requests its EFB copy probe and returns the de-tiled 640x448 RGBA8 payload. The probe copy
 * is an extra copy appended INSIDE aurora, which the harness replay also performs, so the picture
 * stays the one AP-BO proved byte-identical across the two paths.
 * ============================================================================ */
static uint8_t* s_pub_buf;
static size_t s_pub_cap;
static uint32_t s_pub_w, s_pub_h;
static int s_pub_ok;
static unsigned long s_pub_frames, s_pub_fail;

/* Observable counters for the long-run question (5c.46 AP-BR). The publish path is deliberately
 * silent (it runs 3 500 times), so the leak hunt needs a way to ask "how many publishes, how many
 * of them fell back to the layer" from outside without parsing a log. */
void tls_aurora_publish_stats(unsigned long* frames, unsigned long* fails) {
    if (frames) *frames = s_pub_frames;
    if (fails) *fails = s_pub_fail;
}

/* The DLL's own long-run counters (5c.46 AP-BR). "readback calls / failures / pumped empty frames
 * / captures issued / captures rejected" is what separates a readback that is falling back from one
 * that is merely slow - the two look identical from the host. */
void tls_aurora_live_probe_stats(unsigned long long* calls, unsigned long long* fails,
                                 unsigned long long* pumps, unsigned long long* captures,
                                 unsigned long long* rejected, unsigned long long* fifo_cap) {
#ifdef _WIN32
    if (calls) *calls = 0;
    if (fails) *fails = 0;
    if (pumps) *pumps = 0;
    if (captures) *captures = 0;
    if (rejected) *rejected = 0;
    if (fifo_cap) *fifo_cap = 0;
    if (s_stats) {
        uint64_t c = 0, f = 0, p = 0, cap = 0, rej = 0;
        uint32_t fifo = 0;
        s_stats(&c, &f, &p, &cap, &rej, &fifo);
        if (calls) *calls = c;
        if (fails) *fails = f;
        if (pumps) *pumps = p;
        if (captures) *captures = cap;
        if (rejected) *rejected = rej;
        if (fifo_cap) *fifo_cap = fifo;
    }
#else
    (void)calls; (void)fails; (void)pumps; (void)captures; (void)rejected; (void)fifo_cap;
#endif
}

const uint8_t* tls_aurora_published(uint32_t* w, uint32_t* h) {
    if (!s_pub_ok) return NULL;
    if (w) *w = s_pub_w;
    if (h) *h = s_pub_h;
    return s_pub_buf;
}

int tls_aurora_publish_frame(void) {
#ifdef _WIN32
    s_pub_ok = 0;
    if (!getenv("TLS_AURORA")) return 0;
    if (getenv("TLS_LAYER")) return 0;          /* the escape hatch wins over TLS_AURORA */
    if (!tls_aurora_live_on) {
        if (s_mod != NULL) return 0;
        load();
        if (!tls_aurora_live_on) return 0;
    }
    if (s_len == 0) return 0;                   /* nothing was emitted for this frame */
    if (!s_mapped) {
        if (!s_map || !s_mem1) return 0;
        if (!s_map(s_mem1, s_mem1_size, s_mem2, s_mem2_size)) return 0;
        s_mapped = 1;
    }
    const size_t need = 640u * 448u * 4u;
    if (s_pub_cap < need) {
        s_pub_buf = (uint8_t*)realloc(s_pub_buf, need);
        s_pub_cap = s_pub_buf ? need : 0;
        if (!s_pub_buf) return 0;
    }
    int draws = 0, copies = 0;
    s_frame(s_buf, (uint32_t)s_len, 1, &draws, &copies);
    s_len = 0;                                  /* consumed: the end-of-present feed sees empty */
    uint32_t w = 0, h = 0;
    int bytes = s_readback(s_pub_buf, (uint32_t)s_pub_cap, &w, &h);
    s_pub_frames++;
    if (bytes <= 0 || w == 0 || h == 0) {
        s_pub_fail++;
        if (s_pub_fail <= 8 || (s_pub_fail % 200) == 0)
            printf("[AuroraPublish] frame %lu: no readback (%d bytes, %ux%u) - the layer presents this one\n",
                   s_pub_frames, bytes, w, h);
        if ((s_pub_fail % 200) == 0 && s_pub_fail) fflush(stdout);
        return 0;
    }
    s_pub_w = w;
    s_pub_h = h;
    s_pub_ok = 1;
    if (s_pub_frames == 1 || (s_pub_frames % 500) == 0) {
        printf("[AuroraPublish] fed %lu frame(s), %d draw(s), %d copy cmd(s), %ux%u, failures %lu\n",
               s_pub_frames, draws, copies, w, h, s_pub_fail);
        fflush(stdout);
    }
    return 1;
#else
    return 0;
#endif
}
