/* Aurora LIVE: the replay harness's engine, exported as a C ABI so the runner can render through
 * aurora in-process (handover 5c.47 AP-AX, phase P1).
 *
 * WHY THIS FILE IS SO SMALL. The spike's adapter - the five register classes AP-AN measured (EFB
 * copy setup, array bases, the +342 view bias, texture objects, address canonicalisation) - is
 * `rewrite_frame` plus its helpers in `aurora_replay.cpp`, and they are file-static. Rather than
 * fork that code (which would make "the runner's aurora frame equals the harness's" a claim about
 * two implementations), this translation unit INCLUDES the harness and exports entry points over
 * the same statics. The DLL therefore *is* the harness's engine; only the frame source differs.
 *
 * The ABI is deliberately synchronous and dumb, because the runner is C and single-threaded:
 *
 *   int  tls_aurora_live_init(uint32_t fb_w, uint32_t fb_h);
 *   void tls_aurora_live_frame(const void* fifo, uint32_t len, int last);
 *   int  tls_aurora_live_readback(uint8_t* rgba, uint32_t cap, uint32_t* w, uint32_t* h);
 *   void tls_aurora_live_shutdown(void);
 *
 * `tls_aurora_live_frame` replays ONE frame of the guest's raw FIFO (display lists already
 * inlined by the caller - the runner's parser does that, exactly as the capture does). `last`
 * requests the colour capture of that frame. `tls_aurora_live_readback` pumps empty frames until
 * aurora delivers the capture (its readback is delivered on a later frame) and copies RGBA8 out.
 *
 * Built as `tls_aurora_live.dll` by tools/aurora_spike/spike_target.cmake.
 */

#include <filesystem>

#define main tls_aurora_replay_main_unused
#include "aurora_replay.cpp"
#undef main

namespace {

AuroraReadbackStream g_liveStream{};
uint32_t g_liveW = 0, g_liveH = 0;
bool g_liveRequested = false;
bool g_liveInit = false;
StreamState g_liveState{};
std::vector<uint8_t> g_liveRewritten;

/* The copy probe: one real EFB copy (640x448 RGBA8, clear off) appended to the last fed frame, read
 * back with key = its destination address. PROBE_COPY_DST is inside the mapped MEM2 copy. */
constexpr uint32_t kProbeCopyDst = 0x90001000u;
constexpr uint32_t kProbeCopyW = 640, kProbeCopyH = 448;
std::vector<uint8_t> g_probeCopyCmd;
std::vector<uint8_t> g_probePayload;
uint32_t g_probeKey = 2;

}  // namespace

extern "C" {

#if defined(_WIN32)
#define TLS_LIVE_EXPORT __declspec(dllexport)
#else
#define TLS_LIVE_EXPORT __attribute__((visibility("default")))
#endif

TLS_LIVE_EXPORT int tls_aurora_live_init(uint32_t fb_w, uint32_t fb_h) {
  if (g_liveInit) return 1;
  AuroraConfig config{};
  config.appName = "TLS aurora live";
  config.logCallback = &log_callback;
  config.logLevel = LOG_WARNING;
  config.desiredBackend = BACKEND_AUTO;
  config.msaa = 1;
  config.vsync = false;
  config.surface.type = AURORA_SURFACE_HEADLESS;
  config.surface.width = fb_w;
  config.surface.height = fb_h;
  config.surface.scale = 1.f;
  config.gxProcessingMode = GX_PROCESSING_DRAIN;
  /* The runner's guest MEM1/MEM2 are already mapped at the guest's own addresses (that is what
   * host_resolve_gx_guest_addr walks), so aurora must NOT allocate its own - the same
   * configuration the harness uses and the reason AP-AX verified `mem1Size = 0` first. */
  config.mem1Size = 0;
  config.mem2Size = 0;
  /* THE CACHE PATHS MUST BE EXPLICIT. With cachePath null, aurora calls SDL_GetPrefPath() at a
   * point where SDL is not initialised yet; inside a loaded DLL that returns NULL, the path stays
   * null, and the first Dawn pipeline-cache lookup dies in std::string_view(nullptr) -> strlen(0)
   * (measured: gdb backtrace through gpu_cache.cpp:39 from WGPUDawnLoadCacheDataCallbackInfo).
   * The harness never hits it because SDL's pref path resolves in an exe. */
  config.userPath = "build/recomp/aurora_live/user";
  config.cachePath = "build/recomp/aurora_live/cache";
  std::error_code ec;
  std::filesystem::create_directories(config.userPath, ec);
  std::filesystem::create_directories(config.cachePath, ec);
  std::printf("[AuroraLive] aurora_initialize ...\n"); std::fflush(stdout);
  char arg0[] = "tls_aurora_live";
  char* argvFake[] = {arg0, nullptr};
  const AuroraInfo info = aurora_initialize(1, argvFake, &config);
  std::printf("[AuroraLive] init backend=%d window %ux%u fb %ux%u\n", static_cast<int>(info.backend),
              info.windowSize.width, info.windowSize.height, info.windowSize.fb_width,
              info.windowSize.fb_height);
  std::fflush(stdout);
  std::printf("[AuroraLive] -> viewport policy\n"); std::fflush(stdout);
  AuroraSetViewportPolicy(AURORA_VIEWPORT_NATIVE);
  /* Both of these are required for a ONE-frame replay to render at all (AP-AM item 6d): draws
   * whose pipeline is still compiling are skipped by default, and GXInit is what gives the GX
   * state its defaults instead of zero TEV stages and a zero scissor. */
  std::printf("[AuroraLive] -> draws blocking\n"); std::fflush(stdout);
  AuroraSetDrawsBlocking(GX_TRUE);
  AuroraSetDrawsBlocking(GX_TRUE); /* twice, as the harness does */
  std::printf("[AuroraLive] -> GXInit\n"); std::fflush(stdout);
  GXInit(nullptr, 0);
  std::printf("[AuroraLive] -> readback stream\n"); std::fflush(stdout);
  g_liveStream = AuroraReadbackCreateStream();
  g_liveW = 0;
  g_liveH = 0;
  g_liveRequested = false;
  g_liveInit = true;
  return 1;
}

/* Map the runner's guest memory at the GUEST'S OWN ADDRESSES.
 *
 * This is the one prerequisite the live path cannot skip: aurora and the adapter dereference guest
 * virtual addresses as host pointers, and the runner's CPU keeps MEM1/MEM2 in ordinary host buffers
 * that `resolve_guest_pointer` translates - so the first frame fed live dies at 0x80000000
 * (measured: 0xC0000005). Mapping a copy at the absolute addresses is the harness's own model
 * (`map_guest_region`), reused verbatim, aliases included. One copy of ~90 MB per map, so the live
 * path maps once per run, not per frame. */
TLS_LIVE_EXPORT int tls_aurora_live_map(const void* mem1, uint32_t mem1_size, const void* mem2,
                                        uint32_t mem2_size) {
  std::string err;
  if (mem1 && mem1_size) {
    const MemPlane p1{0x80000000u, static_cast<const uint8_t*>(mem1), mem1_size};
    if (!map_guest_region(0x80000000u, 0xC0000000u, mem1_size, p1, err)) {
      std::printf("[AuroraLive] MEM1 map failed: %s\n", err.c_str());
      std::fflush(stdout);
      return 0;
    }
  }
  if (mem2 && mem2_size) {
    const MemPlane p2{0x90000000u, static_cast<const uint8_t*>(mem2), mem2_size};
    if (!map_guest_region(0x90000000u, 0xD0000000u, mem2_size, p2, err)) {
      std::printf("[AuroraLive] MEM2 map failed: %s\n", err.c_str());
      std::fflush(stdout);
      return 0;
    }
  }
  std::printf("[AuroraLive] guest memory mapped (MEM1 %u B, MEM2 %u B)\n", mem1_size, mem2_size);
  std::fflush(stdout);
  return 1;
}

/* Replay one frame. `fifo`/`len` is the guest's raw GX byte stream for that frame (display lists
 * already inlined); `last` asks for the colour capture to be taken after this frame's draws. */
TLS_LIVE_EXPORT void tls_aurora_live_frame(const void* fifo, uint32_t len, int last,
                                           int* draws_out, int* rewritten_out) {
  if (!g_liveInit) return;
  if (draws_out) *draws_out = 0;
  if (rewritten_out) *rewritten_out = 0;
  if (!aurora_begin_frame()) {
    std::printf("[AuroraLive] aurora_begin_frame failed\n");
    std::fflush(stdout);
    return;
  }
  if (fifo && len) {
    std::string err;
    uint32_t copies = 0, consumed = 0;
    g_liveRewritten.clear();
    const uint64_t drawsBefore = g_draws;
    if (!rewrite_frame(static_cast<const uint8_t*>(fifo), len, 0, len, g_liveState,
                       g_liveRewritten, copies, consumed, err)) {
      std::printf("[AuroraLive] adapter failed: %s\n", err.c_str());
      std::fflush(stdout);
    } else {
      aurora::gx::fifo::write_data_grow(g_liveRewritten.data(),
                                        static_cast<uint32_t>(g_liveRewritten.size()));
      if (draws_out) *draws_out = static_cast<int>(g_draws - drawsBefore);
      if (rewritten_out) *rewritten_out = static_cast<int>(copies);
      if (consumed != len) std::printf("[AuroraLive] adapter consumed %u of %u bytes\n", consumed, len);
    }
  }
  if (last && !g_liveRequested) {
    /* Append the probe copy AFTER the frame's own draws, then ask for its payload. */
    if (g_probeCopyCmd.empty()) {
      CopyRegs regs{};
      regs.srcX0 = 0;
      regs.srcY0 = 0;
      regs.srcX1 = kProbeCopyW - 1;
      regs.srcY1 = kProbeCopyH - 1;
      regs.dstAddr = kProbeCopyDst;
      regs.pitch = (kProbeCopyW * 4u) / 8u;
      regs.haveSrc = true;
      const uint32_t exec = 12u << 3; /* tpf 12 = format 6 (RGBA8), clear bit off */
      emit_copy_state(g_probeCopyCmd, regs, exec);
      g_probeCopyCmd.push_back(0x61);
      append_u32(g_probeCopyCmd, (uint32_t(0x52) << 24) | (exec & 0xFFFFFFu));
      g_probePayload.assign(static_cast<size_t>(kProbeCopyW) * kProbeCopyH * 4u, 0);
    }
    aurora::gx::fifo::write_data_grow(g_probeCopyCmd.data(),
                                      static_cast<uint32_t>(g_probeCopyCmd.size()));
    const uint32_t key = kProbeCopyDst;
    const AuroraReadbackCopySrc src{key, reinterpret_cast<const void*>(static_cast<uintptr_t>(kProbeCopyDst))};
    g_probeKey = key;
    g_liveW = kProbeCopyW;
    g_liveH = kProbeCopyH;
    g_liveRequested = AuroraReadbackCaptureCopies(g_liveStream, &src, 1) == GX_TRUE;
    std::printf("[AuroraLive] probe copy armed: %ux%u RGBA8 -> key 0x%08X, capture %s\n", kProbeCopyW,
                kProbeCopyH, key, g_liveRequested ? "accepted" : "REJECTED");
    std::fflush(stdout);
  }
  if (0) {
    /* The second argument is the KEY the result is looked up by, not a frame delay:
     * AuroraReadbackGet matches AuroraReadbackDest.key against it. The two must agree or ound
     * is never set - which is what "capture accepted, readback 0 bytes" was. Key 1, as the
     * harness uses on its main path. */
    g_liveRequested = AuroraReadbackCaptureColor(g_liveStream, 1, &g_liveW, &g_liveH) == GX_TRUE;
    std::printf("[AuroraLive] colour capture requested: %s (%ux%u)\n", g_liveRequested ? "yes" : "NO",
                g_liveW, g_liveH);
  }
  aurora_end_frame();
  std::fflush(stdout);
}

/* Pump empty frames until the capture lands, then copy RGBA8 into `rgba`. Returns the number of
 * bytes written, or 0 if it never arrived. */
TLS_LIVE_EXPORT int tls_aurora_live_readback(uint8_t* rgba, uint32_t cap, uint32_t* w, uint32_t* h) {
  if (!g_liveInit) return 0;
  const size_t need = static_cast<size_t>(kProbeCopyW) * kProbeCopyH * 4u;
  if (g_probePayload.size() < need) g_probePayload.assign(need, 0);
  for (int i = 0; i < 24; ++i) {
    if (g_liveRequested) {
      AuroraReadbackDest dest{g_probeKey, g_probePayload.data(),
                              static_cast<uint32_t>(g_probePayload.size()), GX_FALSE};
      if (AuroraReadbackGet(g_liveStream, &dest, 1) == GX_TRUE && dest.found == GX_TRUE) {
        /* De-tile with the harness's layout: per 64-byte 4x4 tile, 32 bytes of (A,R) pairs then
         * 32 bytes of (G,B) pairs, tiles row-major (write_probe_ppm in aurora_replay.cpp). */
        if (cap < need) return 0;
        const uint32_t tilesX = kProbeCopyW / 4;
        const uint8_t* bytes = g_probePayload.data();
        for (uint32_t y = 0; y < kProbeCopyH; ++y) {
          for (uint32_t x = 0; x < kProbeCopyW; ++x) {
            const size_t tile = static_cast<size_t>(y / 4) * tilesX + (x / 4);
            const uint8_t* t = bytes + tile * 64;
            const uint32_t idx = ((y % 4) * 4 + (x % 4)) * 2;
            uint8_t* o = rgba + (static_cast<size_t>(y) * kProbeCopyW + x) * 4u;
            o[0] = t[idx + 1];
            o[1] = t[32 + idx + 0];
            o[2] = t[32 + idx + 1];
            o[3] = 255;
          }
        }
        if (w) *w = kProbeCopyW;
        if (h) *h = kProbeCopyH;
        return static_cast<int>(need);
      }
    }
    if (!aurora_begin_frame()) break;
    aurora_end_frame();
  }
  return 0;
}

TLS_LIVE_EXPORT void tls_aurora_live_shutdown(void) {
  if (!g_liveInit) return;
  aurora_shutdown();
  g_liveInit = false;
}

}  // extern "C"
