# Kickoff prompt for the next session

Copy of the briefing the next autonomous session should start from. Written at the end of the
session that produced `3b62c9c` (superseding the one written at `4be7f14`).

---

MISSION CONTINUATION — Project The Maybe(Not) Last Story (`G:\Program\Project The Maybe(Not) Last
Story`, native PC recompilation of *The Last Story* / Wii SLSEXJ)

Work autonomously and do not stop to report. Measure instead of guessing, commit as you go, keep the
build green, and keep going until your context is nearly exhausted. Write findings into
`DEEPSEEK_HARNESS_HANDOVER.md` as you make them, not at the end. **0 changes to `src/`.**

## 0. SESSION SETUP

Needs **full file access** (DSH `danger-full-access`). If writes to *existing* files are denied while
creating new files works, check `whoami /groups` for `Mandatory Label\Low Mandatory Level`: on this
machine the workspace had been relabelled with

```powershell
icacls 'G:\Program\Project The Maybe(Not) Last Story' /setintegritylevel (OI)(CI)L /T /C /Q
```

(73 800 files, 825 refused under `tools/w64devkit/src/*`, which the build does not need). It is a
mandatory-integrity-label problem, **not** an ACL problem — do not spend time on ACL repair.

```powershell
python tools/recomp_harness.py build-runner      # ~1 s, chunks are already lifted
python tools/compile_shaders.py                  # REQUIRED after editing tools/compile_shaders.py
```

Bundled Python with Pillow and numpy is at
`C:\Users\hypha\.dsh\dsh-runtimes\dsh-primary-runtime\dependencies\python\python.exe` — the plain
`python` on PATH has no PIL. Env vars do not persist between tool calls.

**The measurement loop that works** (≈140 s per run, exits by itself, no taskkill):

```powershell
$env:TLS_INPUT_SCRIPT="600-612:A,900-912:A,1200-1212:A,1300-1312:UP,1350-1362:A,1500-1512:A"
$env:TLS_TEV="1"; $env:TLS_DEFER_EFB_COPY="1"; $env:TLS_SHOT_FRAMES="1448"
& build\recomp\tls_runner.exe --dol orig\main.dol --frames 1452 --window --novsync 2>&1 |
    Out-File build\recomp\run_x.log -Encoding utf8
& 'C:\Users\hypha\.dsh\dsh-runtimes\dsh-primary-runtime\dependencies\python\python.exe' `
    tools\img_stats.py build\recomp\d3d11_screenshot_1448.ppm
```

Write the log with a **new** file name each time, and read only the probe lines you asked for — one
frame of `TLS_TEV_PROBE` output is thousands of lines.

## 1. READ FIRST

`DEEPSEEK_HARNESS_HANDOVER.md` **§5c.22 in full** (this session: the copy model proven, the Dolphin
corpus location, the destination-format bug and its fix, the composite-chain table, the refuted
z-test), then §5c.21 (the stall), §5c.19 §7, §5c.18. Two verdicts from earlier sessions are already
corrected by measurement — do not re-derive them: **gamma is refuted** (content-matched gold text
matches within 5 %; do not add `TLS_GAMMA_TEST`) and **the "scene is 3x too bright" figure** was a
scene-only-vs-composited comparison (the real ratio is ~2.4x, and the scene is *red-dominant*, see
§5c.22 §6). Fetch Dolphin's `BPMemory.h` / `XFMemory.h` / `CPMemory.h` / `VertexShaderGen.cpp` /
`LightingShaderGen.cpp` from GitHub instead of guessing register layouts — that is how the EFB copy
registers and the texcoord rule were settled.

## 2. STATE

`3b62c9c`, tree clean, build green. **The default must stay unchanged:** MENU 1448 with no `TLS_*`
flags = `(124,235,255)` (re-verified at the end of this session). Flags that exist now:

| flag | what it does | status |
|---|---|---|
| `TLS_TEV=1` | TEV pixel shader | required for anything meaningful |
| `TLS_DEFER_EFB_COPY=1` | in-order copy servicing | **proven correct, use it** |
| `TLS_EFB_COPY_FMT=1` | writes RGB565/IA8/RGB5A3 destinations properly, `dst_w = pitch*8/bpp` | new, opt-in, **clearest correct change in the tree** |
| `TLS_TEV_TEXCOORD=1` | per-stage texcoord (+ corner texel when unsupplied) | faithful, measured, stays opt-in |
| `TLS_COMPOSITE_ZTEST=1` | honours the guest z-mode on 2D batches | **refuted, no-op** (all composite z=0) |
| `TLS_EFB_CHAIN=<present>` (+`_DUMP=1`) | every copy of one present in stream order | the tool that settled the copy model |
| `TLS_TEX_DUMP=0xADDR[,0xADDR]` | decoded texture as PPM | splits decode bugs from TEV bugs |
| `TLS_XF_LIGHTING=1` / `TLS_XF_NO_LIGHTING=1` / `TLS_XF_PROBE=<frame>` | XF stage | irrelevant at the MENU (2 of 67 batches lit) |

## 3. SETTLED — DO NOT RE-TEST

* **The copy servicing model is correct.** `TLS_DEFER_EFB_COPY=1` services each copy at the right
  point of the draw stream, and `dstavg == srcavg` on every copy (write, tile layout and decode all
  consistent). Frame 1448's copies, in order: 0 0 0 0 35 22 35 21 0 0 0 21 21 29 60 131 112 129 221
  241 222 255 -> present 91. Hardware's (Dolphin frame 1101): 0 255 0 5 251 12 15 15 0 0 0 16 15 15
  15 16 25 32 31 31 -> present `(31,34,28)`.
* **The Dolphin corpus is in `%APPDATA%\Dolphin Emulator\Dump\Textures\`**, not `…\SLSEXJ` (which
  holds only the 405 `tex1_*` dumps). 30 623 `efb1_*` + 2 015 presents, 589 of them MENU-phase.
  `python tools/copy_chain.py --best|--frames A-B|--chain` prints them in execution order.
  **A frame's 640x479 present copy average *is* its frame average.**
* **The red foreground rock was the copy destination format** (RGB565 destination written as RGBA8):
  `TLS_EFB_COPY_FMT=1` takes red-dominant samples over the whole 3D pass from 263 to 0 and moves the
  scene hue from `(38,35,34)` red-dominant to `(38,40,40)`, the reference's direction. The texture
  decode itself is correct (`TLS_TEX_DUMP=0x912E8340` = grey rock).
* **Honest z-testing is not the composite's defect** — every composite quad is at `z=0.0000`, so
  `LESS_EQUAL` passes everywhere; the flag changes the frame by zero.
* Per-stage texcoord selection weakens each additive pass from ~100-143 % to 41-81 % of the sampled
  copy (hardware: 44-56 %), so it is the right *structure*, but it is not sufficient alone and it
  makes the 3D scene brighter (`35 -> 43` at b16). Opt-in.
* XF lighting, tex/post matrices (identity at the MENU), gamma, and "the scene is drawn wrong" are all
  measured and out.
* The post-handoff stall is a host-side timing race: when it stalls, 100 % of the budget dispatches
  `0x8022A204` (`fn_8022A054+0x1B0`, spin on `mem_read32(r7+4)`, from `fn_8022ADD4+0x274`,
  `r3=0x90002008`), queue stuck on `data/material/pc_ga_m_a00.material status=1`. Three runs of the
  same input plan disagree; the only flag that separates them is one that slows dispatch. Dropped
  stream completions are ruled out (instrumented, never fired).

## 4. TASKS IN ORDER

1. **Promote `TLS_EFB_COPY_FMT`, but verify it on more than the MENU first.** It is the most clearly
   correct change in the tree (hardware register semantics + Dolphin's own dump formats + the guest's
   own sampling formats all agree). Capture the title attract screen and, if reachable, Chapter 1 with
   the flag on and off, then promote it and re-baseline the default's `(124,235,255)` figure in the
   handover. Watch for: `copy_to_xfb` must bypass the format check; unimplemented formats must keep
   writing RGBA8 rather than dropping the copy (a dropped copy leaves guest memory stale).
2. **The composite chain: the last unexplained term is the alpha channel of the EFB copy.** Levels
   after the square pass — hardware `~1 -> 16 -> 25 -> 32 -> 31`, host `0 -> 22 -> 29 -> 60 -> 131 ->
   255`. Per-pass gain over the sampled copy: host 41-143 %, hardware 44-56 %. The passes are
   `SRC_ALPHA, ONE` and the alpha they consume is the *copied* EFB alpha, which the host always writes
   as 255 (`[tex] ... a=255`). Next measurements, cheapest first:
   (a) add `dstalpha=` to `TLS_EFB_CHAIN` (decode the alpha byte out of guest memory) so the copied
   alpha is a number instead of an assumption; (b) print the alpha the GX pixel shader writes for the
   b0..b16 scene batches and compare with what their TEV alpha stage should produce; (c) check whether
   the D3D11 alpha blend (`SRCALPHA/INVSRCALPHA`) accumulates a different framebuffer alpha than GX's
   replace semantics — our EFB alpha is whatever the *blend* left there, which is not what hardware
   does; (d) only then, if hardware's alpha really is ~0.5, reproduce it. Do **not** fudge the pass
   strength to hide it: the chain's ordering, sizes, formats, destination content, K registers and TEV
   stage table have all been measured and match.
3. **The white blob is a 3D particle batch, not the chain.** `TLS_BATCH_PROBE` (which now prints
   `max=`/`red=`/`bright=`) puts it at **b30** (`0x90D175E0` 128x128 CMPR, 18 vtx, `s=4 d=1`,
   `z=109.9`): `max 556 -> 765`, `bright 0 -> 12`, then b31 (`0x907FCBA0`, 228 vtx) takes it to 14.
   Compare its on-screen size with the reference's small lamp flare
   (`docs/evidence/27-dolphin-menu-frame1440.png`, and the per-copy dump `efb1_n014594_320x224_6.png`).
4. **The stall race** (unchanged): reproduce reliably, then name `fn_8022A054` / `fn_8022ADD4` by
   their call sites (`GameLoadTask` `0x80570CFC`, the two `vt=0` entries `0x80363DBC` / `0x803646C4`)
   and find what writes the word at `[r7+4]`. Candidates: DVD callback delivery gated on an idle guest
   PC, alarm/interrupt delivery in the frame loop, a host queue drained once per frame. Any fix must be
   A/B'd over 3+ runs with and without instrumentation.
5. **Chapter 1 parity** (unchanged): `docs/evidence/30-dolphin-scene-3000.png` and the 355 dumps in
   `Dump\Textures\SLSEXJ\`; name `0x005F2A10` / `0x005F2A90`.

## 5. DOLPHIN CAPTURE

`Dolphin.ini [Movie] DumpFrames=True/DumpFramesSilent=True` is the on/off switch;
`GFX.ini [Settings] DumpFramesAsImages=True` and `DumpEFBTarget=True` (already set — leave them).
`python tools/dolphin_capture.py --visible --frame-plan "600-612:A,900-912:A,1200-1212:A" --run 1100`,
then `taskkill /IM Dolphin.exe /F` when enough frames exist. **Archive the `efb1_*` corpus before
re-capturing it** (`Copy-Item` into `build/recomp/dolphin-ref/runN`; `run4` is a different phase from
the live one). Traps: unquoted `-e` paths with spaces and a second Dolphin instance both raise modal
dialogs that look like "hangs after NW4R SND"; `--frame-plan` counts files in `Dump\Frames` (clear it
first); the two dump streams' frame numbers do not line up — match copies by content; ~10 fps while
frame-dumping.

## 6. RULES THAT COST TIME

* Never hand-edit generated chunks; never mutate guest state; never fabricate an answer the guest asks
  for; never guess a low-memory constant — derive it from `asm/ldscript.lcf`.
* Never flip a default on a guess. Two faithful-but-measured-worse mechanisms (per-stage texcoord, XF
  lighting at the MENU) stay opt-in for that reason, and the default figure in §2 is how a regression
  is caught.
* **Probes that accompany a batch-ordered dump must key on the present counter
  (`s_d3d11.frame_counter` / `s_d3d11_dump_count`), never on `g_runner_current_frame`:** present N
  renders guest frame N-1, so a frame-counter-keyed probe silently compares one frame's batch list
  with the next frame's copies (this cost a whole run this session).
* HLSL: dynamically indexed `Texture2D` fails X3511, `[loop]` fails X3531 — eight separate textures
  plus an if-chain.
* Rate-limit probes; a dense `TLS_DUMP_EVERY` or a per-batch readback makes a run 3-5x slower.
* Rare `0xC0000374` near frame 840 — re-run with `TLS_ALLOC_PROBE=1 TLS_TAIL_RING`.
