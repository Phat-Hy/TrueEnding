# Aurora spike — driving aurora's GX command processor from a captured retail GX stream

This directory is the **Aurora spike** from `DEEPSEEK_HARNESS_HANDOVER.md` §5c.46 AP-AM. It
answers one question with measurements instead of opinion: *can [aurora](https://github.com/encounter/aurora)
(MIT, WebGPU/Dawn) render this project's real GX stream on this toolchain, and would its EFB
readback path fix the white-screen defect?*

Nothing here is on the shipping path. It is a measuring instrument:

| file | what it is |
|---|---|
| `aurora_replay.cpp` | headless aurora harness: maps guest MEM1/MEM2 at the guest's own addresses, replays the captured FIFO through `aurora::gx::fifo`, reads the EFB back as RGBA8, writes a PPM. Also services one EFB copy through `capture_copies`/`get`. |
| `spike_target.cmake` | injected into the aurora build with `-DCMAKE_PROJECT_TOP_LEVEL_INCLUDES` so the harness builds incrementally in the same build tree (no second Dawn download). |
| `build.ps1` | clone → patch → configure → build → optional replay. Reproduces the whole thing. |
| `patches/` | the changes aurora needed on MinGW GCC plus the spike probes; each is documented in its own file. |
| `capinfo.py` | prints a capture's frame window, per-frame FIFO byte counts, MEM planes and copy records. |
| `capfilter.py` | rewrites an oversized capture down to one frame window (memory-mapped, so a multi-GB file is usable). |
| `copycmp.py` | byte-compares one EFB copy: aurora's `capture_copies`/`get` payload vs this layer's bytes for the same destination. |
| `compare.py` | pixel diff of the aurora frame against the hand-rolled layer's capture (`tools/frame_diff.py`-equivalent for two different sizes). |
| `streamwalk.py` | walks one recorded frame from the capture alone (command/register census, per-draw offsets and vertex sizes, the scissor writes with GX's +342 view bias removed, POS decode from the MEM plane). This is the "layer side" of the one-draw comparison without a runner run. |
| `caprecords.py` | prints a capture's record order (frame begin/end, FIFO, MEM, COPY) - it is how AP-AN established that 76 of `window.tlscap`'s 95 copy records are written after the window closes. |
| `bpstate.py` | the BP/CP/XF state at a stream offset of frame 3400: the scissor/viewport/projection registers the guest actually wrote. |

The capture itself comes from the **runner**, not from here: `TLS_GX_CAPTURE=<dir>` (see
`recomp/gx_fifo_capture.h`) records the guest's real write-gather-pipe byte stream for a frame
window, with display lists inlined, plus a MEM1+MEM2 snapshot and every EFB copy's destination
bytes. It is inert unless the variable is set.

## Build

```powershell
pwsh tools/aurora_spike/build.ps1            # clones G:\Program\aurora-spike, patches, builds
pwsh tools/aurora_spike/build.ps1 -Replay build\recomp\gxcap\gxfifo.tlscap `
     -Out build\recomp\aurora_f3500.ppm
```

Toolchain actually used (measured, not assumed):

* **MinGW GCC 16.2.0** from `tools/w64devkit` (there is *no* MSVC C++ compiler on this machine —
  `vswhere` reports an installation, `VC\Tools\MSVC` is absent, and the session is not admin).
* **cmake 4.4.3 + ninja 1.13.2** from `tools/w64devkit/bin` (not on `PATH` by default).
* **Dawn** `v20260807.225922` prebuilt (`AURORA_DAWN_PROVIDER=package`, MSVC-built
  `webgpu_dawn.dll` + import lib) — linkable from MinGW because the WebGPU ABI is C.
* **SDL3 3.4.10** prebuilt, plus abseil, fmt, xxHash, zlib-ng, libpng, freetype, sqlite3,
  Tracy, nlohmann/json and googletest built from source by aurora's own `FetchContent`.

## The three patches aurora needed

1. `0001` — `dawn::native::DawnInstanceDescriptor` is a **C++ class in the prebuilt Dawn DLL**;
   its constructor is MSVC-mangled and cannot be linked by GCC. Replaced with the equivalent
   plain `wgpu::InstanceDescriptor` + `DawnTogglesDescriptor` chain (the same toggles, minus the
   Dawn-native logging callback and validation level).
2. `0002` — aurora applies `$<LINK_GROUP:RESCAN>` only on Linux; GNU ld needs it on Windows too
   because `aurora_core` and `aurora_gx` reference each other.
3. `0003` — the fixed-size staging buffers abort **silently** in a release build when they
   overflow (the abort does not go through the log callback). One `fprintf` before the abort.
`0004-spike-probes` is the diagnostic set the measurements in AP-AM name: an env-gated draw-stats
print (`TLS_AURORA_STATS`), a copy bypass (`TLS_AURORA_NO_COPY`, so the same stream can be replayed
with and without the adapter) and a colour/alpha-update override (`TLS_AURORA_FORCE_UPDATE`, which
was tried and disproven). All inert unless set.

`0006-spike-draw-dump` is the AP-AN instrument set: `TLS_AURORA_DUMP_DRAW=<n>` prints everything aurora holds for one draw (projection, viewport/scissor, pn matrix, TEV stage args, channel colours, `vtxDesc`, the indexed POS fetch and its decoded position) and `TLS_AURORA_Z_REMAP` probes the z convention. It is always applied; all of it is inert unless the variables are set.

`0005-replay-staging-sizes` is **optional and not applied by `build.ps1` unless `-ReplayStaging` is passed**: it raises uniforms and
storage to 96 MiB, which one heavy replay needs (AP-AM 6d) and which breaks aurora's own
null-backend tests (`Out of memory` while creating "Staging Buffer 1"). Apply it for a replay run,
not for the suite; the default tree stays at upstream sizes and passes 425/425 serially (26 s; at -j 8 three ReadbackGpuTest.* cases OOM on parallel device creation and pass 3/3 serially).

## The adapter: three register classes, measured

AP-AN found that a captured hardware FIFO needs more translation than AP-AM's two classes. The adapter in
`aurora_replay.cpp` now carries:

1. **EFB copy setup** (BP 0x49/0x4A/0x4B/0x4D -> `GX_AURORA_LOAD_COPY_SRC/_DST/_DEST`);
2. **array bases** (CP 0xA0..0xAF -> `GX_AURORA_LOAD_ARRAYBASE`, sized per draw from its own indices);
3. **the +342 view bias** (BP 0x20/0x21 minus 342 per field with BP 0x59 zeroed, and XF 0x101D/0x101E minus
   2.0) - without it aurora clamps the scissor to `(640,480,0,0)` and every draw is discarded silently;
4. **texture objects** (BP image0/image3 -> `GX_AURORA_LOAD_TEXOBJ` with a host pointer) - without it
   `GXTexObj_::data` is null and every textured TEV stage samples zero.

## What was measured

See `DEEPSEEK_HARNESS_HANDOVER.md` §5c.46 **AP-AM** for the full write-up and the numbers.

