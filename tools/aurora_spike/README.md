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
| `drawstate.py` | per-draw **raster** state from the capture - the capture-side twin of the layer's `TLS_BATCH_DUMP`: `BP 0x00` TEV stages, `BP 0x40` depth, `BP 0x41` decoded exactly as both implementations decode it, the texture object (`BP 0x88+m` image0 -> width/height/format, `BP 0x94+m` image3 -> address), the `BP 0x20/0x21` scissor with GX's +342 view bias removed **and as a percentage of the frame**, the EFB copies issued so far and vertex 0's `CLR0`. `--copies` lists every `BP 0x52` with source rect/destination/pitch/clear/display, `--cmd-counts` prints each frame's command count as a replay walks it (how a frame-relative index becomes a `--max-cmds` value), `--first-frame` re-bases the indices. |
| `camera.py` | the capture side of ONE draw: pos-matrix rows as aurora reads them, projection, viewport, scissor with the 342 bias removed, `CP 0x30/3`, and the first N vertices' POS -> clip -> NDC. The instrument for "is the camera the same" without a runner run. |

**The rule AP-AO cost a session to learn: a layer/aurora picture pair has to come from ONE run.** The runner's
screenshot file name carries the **present** counter (`d3d11_screenshot_<present>.ppm`) while `TLS_GX_CAPTURE`
records the **guest** frame; at the Chapter-1 cave the two are 64 apart, and a `TLS_SHOT_FRAMES` entry with no
`TLS_SHOT_GUEST` matches either. The mapping is in the run's own log: the `[D3D11] Dumped screenshot to ...`
line immediately before `[GxCap] frame <n> recorded` is the same-run screenshot for that guest frame. Also:
the field's scene at a given guest frame **drifts between runs** (guest 3300 was the cave in one run and a
white-washed tutorial prompt in another), so a frame number is only a scene anchor inside a single run.

**Check a capture window before you spend a replay on it.** `camera.py <capture> --check-window` walks every
recorded frame from a fresh state (which is what aurora's adapter does) in about 10 s and no GPU. A window is
replayable only if its **first** frame walks clean: the frames alternate between a "full" stream (~1.05 MB,
45-46 k commands, 19 k draws, 147 k vertices) and a "thin" one (~0.8 MB, 31 k commands, 9.5 k draws) that
inherits its vertex format from the previous frame, and the adapter starts with empty state, so a thin first
frame aborts with `adapter failed: draw with unknown vertex size` (measured on `gxcap/ao3301`, frame 3294, at
offset 48 - the same offset the cheap check names).

**And the NDC census** (`camera.py <capture> --frame N --ndc --ndc-top 8`, plus
`batchcensus.py <run.log>` for the layer's side) is how the two implementations' transforms are compared on one
frame: it prints the per-draw clip box, the w-divided box, the outside count and the frame union. On
`gxcap/ao3301` guest frame 3300 the union **clip x is identical on both sides, x[-4473.26..5349.33]**; the
vertex totals are not comparable because the layer's batch list is a triangle list (strip expansion).

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

## Reading the frame back: use the copy probe, not the colour capture

`AuroraReadbackCaptureColor` is not trustworthy for a frame this size - its in-frame job often never delivers
and the harness falls back to a capture taken on the *next* (empty) frame, which is how the same command budget
measured 39.07 one run and 0.00 the next. `--probe-copy` appends one real EFB copy (full 640x448, RGBA8, clear
bit off) to the end of the last replayed chunk and reads it with `capture_copies`/`get`, the path criterion 3
verified byte for byte. `--probe-ppm FILE` de-tiles that payload into a viewable image.

```powershell
tls_gx_replay build\recomp\gxcap\window.tlscap out.ppm --stop-after 1 `
    --probe-copy --probe-ppm frame.ppm --copy-out frame.bin --extra 10
```

`window.tlscap` frame 3400 through that probe: 1 146 880 bytes, mean byte 94.61, de-tiled mean RGB
(41.98, 41.94, 39.52), 98.0 % non-black - Gurgan Cave, with the hero mid-swing
(`logs_ap/an_probe40.png`). That is criterion 2.

`tools/aurora_spike/cmdlist.py <capture> --frame 0 --from A --to B` turns a `--max-cmds` bisect into the
command that changed the picture; `tile2png.py` de-tiles any copy payload (RGBA8 or RGB565) for inspection.
`tile2png.py --fmt linear565` decodes a **display (XFB) copy**, which is not tiled at all: the guest's bytes at
`0x900997E0` for frame 3295 (640x448, 573 440 bytes) are row-linear little-endian RGB565, and that decode gives
the cave (neighbour correlation 0.864 against 0.698 for 4x4-tiled and 0.607 for the byte-swapped read) -
`docs/evidence/ao_xfb_display_copy_linear565.png`. `compare.py` takes PNGs as well as PPMs and returns
`--out` a side-by-side (aurora | host | 8x difference); passing `--out` used to print the doc instead.

## What was measured

See `DEEPSEEK_HARNESS_HANDOVER.md` §5c.46 **AP-AQ** (current), **AP-AP** and its addendum, **AP-AO** and
**AP-AN** (history) for the write-ups and numbers.

## The AP-AQ result: the tail is scissor-limited AND two of its draws were executed as adds

**Read this instead of the AP-AP paragraph that follows it.** The tail of guest frame 3300 is a
**downscale/blur chain drawn into a corner of the EFB**: eight of its ten draws carry a `BP 0x20/0x21` scissor of
**160x112 (6.25 % of the frame)** or **80x56 (1.56 %)**, and each rectangle is exactly the source rect of the EFB
copy issued next to it. Two host defects turn that into the white wash, and AP-AP's diagnostic could see neither:

1. **`TLS_SCISSOR=1` never clipped anything.** `recomp/gfx_d3d11.c` creates one rasterizer state from
   `D3D11_RASTERIZER_DESC rdesc = {0}`, so `ScissorEnable` was FALSE, and D3D11 ignores `RSSetScissorRects`
   unless that flag is set. AP-AP's "applying the scissor changes the frame by nothing, `mean |d| 0.000`" is what
   an **inert** switch measures. With a second state (`rs_scissor`, `ScissorEnable = TRUE`) bound under the same
   switch, the eight corner draws' total effect on the back buffer falls from **+162 / +95 / +107** to **≤ 2**
   units on an identical pre-tail frame (`b113 = (93,95,90)` in both runs), and b118 goes
   **(255,255,255) → (95,97,92)**.
2. **Guest-disabled blends were promoted to additive.** `gfx_d3d11.c` sets `blend_enable = true` whenever
   `dst_factor ∈ {1,5,7}` without consulting CMODE0 bit 0 (the real blend enable). Three tail draws
   (`cmode0 = 0x003438` = blend **off**, `s=4 d=1`) were therefore run as `src*srcA + dst`; b118 alone took the
   frame from (188,200,187) to **pure white** six vertices before copy 49969. `TLS_NO_FORCE_BLEND=1` is the A/B.

**The copy content AP-AP's addendum measured is downstream, not causal**: `0x9038D1C0` and `0x905C3000` really
are 100 % byte-255 in guest memory, but the copies paint what the EFB holds at their own command - copy 49969 runs
**6 vertices after** b118, and its source reads `(255,255,255)` because the host had just forced that. With
both fixes guest 3300 renders the **Gurgan Cave with the tutorial popup on it**:
luma **142.29 → 36.58**, pixels above luma 250 **0.06 % → 0.00 %** (`logs_ap/aq_pair_g3300.png`).

**AP-AR promoted both fixes to the build defaults** (they are GX semantics, not options), re-recorded the gate's
two references deliberately on two independent runs each (guest 2800 `8938E369…`, guest 3500 `F97A5863…`,
luma 50.04 / 48.17, `>250` 0.00 % / 2.02 %) and replaced the "popup must be bright" assertion with a
non-saturation + bright-pixel-window check. `TLS_NO_SCISSOR=1` and `TLS_FORCE_BLEND=1` reproduce the superseded
behaviour exactly (measured: `6465ACEF…` / `C5535C7D…`), which is how the old references stay reachable. The
layer's own remaining gap is the corner chain's **content** (an 80x56 RGBA8 EFB copy is a median of 0.1 luma /
95.7 % zero texels over the 17 263 `80x56_6` dumps in Dolphin's corpus, while the layer's is byte-255) - a
TEV/combiner-class gap, bounded with its next command in AP-AQ item 8.

**AP-AT closed the red rock, and aurora is what decided it.** The layer rendered the cave's rock
atlases red while aurora rendered the same stream with 0.00 % red-dominant pixels; both AP-AS
discriminators (the uniform the GPU receives vs the probe's decode, and `TevRegular` vs Dolphin's
`WriteTevRegular`) came back clean, and the cause was the **texture upload path**: the CMPR "glow"
baseline compensation rewrote the 256x256 rock atlas `0x91EBC460` from its grey decode
(88.54, 85.39, 76.40) into (169.76, 80.21, 75.02), 75.16 % red texels. It is now restricted to the
sprite size class (`<= 64x64`, `TLS_GLOW_ALL=1` to revert): guest 2800 red-dominant **18.60 % ->
0.00 %** against aurora's 0.00 %, mean RGB (60.07,45.10,49.14) -> (42.35,46.45,49.53)
(`docs/evidence/at_pair_g2800.png` = layer before | layer after | aurora | 4x difference). The
practical lesson for this directory: **a Dolphin-derived reference on the same capture is a
one-run verdict** - it is what turned "the fragment program must be wrong" into a measurement of
the uploader, and `TLS_TEX_DUMP_FINAL` (dump the staging buffer *after* the compensations) is the
instrument that made the difference visible. Neither implementation's pictures should be compared
without checking which buffer each instrument reads.

## Aurora keeps EFB copies on the GPU, never in guest RAM (AP-AQ item 11)

`copy_tex` (`lib/dolphin/gx/GXFrameBuffer.cpp`) resolves a render texture keyed by the destination pointer
(`texture::resolve_copy_texture`) and `resolve_sampled_textures` binds it whenever a draw samples a texobj whose
`data` pointer equals that destination - so the sampling path sees the copy, while RAM never does. Measured with
`--ram-out`/`--ram-poison`: after a replay that services the game's copy at cmd 50049, 0x905C3000 in RAM is
**still 100 % 0xCD** (and so is the harness's own `--probe-copy` destination, whose readback payload is meanwhile
delivered: 116.14); and poisoning 0x9038D1C0 to 0xCD leaves the **picture byte-identical**, so the draws really do
sample the shadow texture. Consequences:

* aurora's tail numbers are real measurements (its +0.8 % across the eight draws matches the Dolphin corpus,
  where the guest's 80x56 copy is a dark corner glow);
* the harness passing `mem1Size = mem2Size = 0` is fine for *rendering* but means any guest code that reads a
  staging copy as raw memory (CPU readback, DMA, a memcpy uploader) would see stale bytes;
* AP-AP item 6's "aurora's copy is 1.9x brighter" is **closed**: payload-to-payload the copy is **1.000x**
  (aurora's EFB probe at cmd 50045 and the game's own copy at 50049 both decode to mean byte 103.18,
  RGB (53.08, 54.07, 50.56), alpha 255.00). The 1.78x sits in the **draw that samples** the shadow
  (the blit at 50127 produces (94.30, 101.69, 85.42)); `--copy-dst/--copy-wh-fmt/--copy-size` is how the
  game's own copy payload was read.

The new instrument: `--ram-out <addr>:<size>:<file>` dumps a guest range after the replay, `--ram-poison` fills it
with `0xCD` before the replay so "written" and "already in the capture" cannot be confused. Do not parse the
address with `%i`/`sscanf` - it clamps to INT_MAX (the first version took an access violation at 0x7fffffff).

## The AP-AP result as originally written (kept: its measurements stand, its causal claim does not)

The tail of guest frame 3300 is a **downscale/blur chain drawn into a corner of the EFB**. Eight of its ten
draws carry a `BP 0x20/0x21` scissor of **160x112 (6.25 % of the frame)** or **80x56 (1.56 %)**, and each
rectangle is exactly the source rect of the EFB copy issued next to it; the two full-frame draws that follow
sample the corner copy. `recomp/gfx_d3d11.c` implements no scissor at all; a diagnostic (`TLS_SCISSOR=1`, added
in AP-AP) applies it and is proven to work - **and it changes the frame by nothing** (`mean |d| 0.000`), because
the two textures the last two fullscreen draws sample are **100 % byte-255 in guest memory**
(`0x9038D1C0` 80x56 additive, `0x905C3000` 640x448 opaque blit), while the corner-limited ones are not
(`0x90395DC0` mean 136.48, `0x903DBDC0` 186.98, `0x903917C0` 129.12). The copy destinations are read straight
out of the capture's MEM2 plane, so the layer's own copy output can be audited without a GPU.

```powershell
# the guest's own registers for the tail - no GPU, no runner
python tools\aurora_spike\drawstate.py build\recomp\gxcap\ao3301\gxfifo.tlscap --frame 6 --draws 15513 --to-draw 15522
# the command indices a --max-cmds bisect needs
python tools\aurora_spike\drawstate.py <capture> --cmd-counts
# the layer's copy output, straight out of the capture's MEM2 plane (python + numpy, ~5 s)
#   offsets 0x38D1C0 / 0x5C3000 into the 0x90000000 plane, sizes 80*56*4 and 640*448*4
# aurora's side of the chain: the EFB at each truncation point
G:\Program\aurora-spike\build2\tls_gx_replay.exe <capture> o.ppm --start-at 1 --stop-after 7 `
    --max-cmds 49562 --probe-copy --probe-ppm pre.ppm --copy-out pre.bin --extra 10
```

Two traps that each cost a run:

* **`TLS_BATCH_CUTOFF=''` means 0, not unset.** `getenv` returns the empty string and `atoi("")` is 0, so every
  batch is skipped and the screenshots are `(0,0,0)`. Remove the variable (`Remove-Item Env:\TLS_BATCH_CUTOFF`).
* **`--max-cmds` is per replayed frame, not cumulative** (`aurora_replay.cpp:653` resets `cmds` per frame), so a
  cutoff low enough to bisect frame 3300 also truncates frame 3296. The frame-relative index is the unit;
  `--cmd-counts` converts it.

