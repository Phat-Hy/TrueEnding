# Kickoff prompt for the next session

Copy of the briefing the next autonomous session should start from. Written at the end of the
session that produced `4be7f14`.

---

MISSION CONTINUATION — Project The Maybe(Not) Last Story (`G:\Program\Project The Maybe(Not) Last Story`,
native PC recompilation of *The Last Story* / Wii SLSEXJ)

Work autonomously and do not stop to report. Measure instead of guessing, commit as you go, keep the
build green, and keep going until your context is nearly exhausted. Write findings into
`DEEPSEEK_HARNESS_HANDOVER.md` as you make them, not at the end.

## 0. SESSION SETUP

Needs **full file access** (DSH `danger-full-access`). Under `workspace-write` this session failed
with "Access is denied" on *existing* files in `build/` even though the DACL was fine (creating new
files worked, opening existing ones for write did not). Verify with
`Set-Content build\recomp\_t.txt x; Remove-Item build\recomp\_t.txt`. There is no `tools/resolve.py`;
the symbol resolver is `tools/resolve_symbol.py`.

```powershell
python tools/recomp_harness.py build-runner      # ~1 s, chunks are already lifted
python tools/compile_shaders.py                  # REQUIRED after editing tools/compile_shaders.py
```

Bundled Python with Pillow (for image work) is at
`C:\Users\hypha\.dsh\dsh-runtimes\dsh-primary-runtime\dependencies\python\python.exe` — the plain
`python` on PATH has no PIL. Env vars do not persist between tool calls.

## 1. READ FIRST

Handover **§5c.20** and **§5c.21** (this session), then §5c.19 §7 and §5c.18 for how the previous
verdicts were reached. Everything before §5c.16 is history. Two previous verdicts are now corrected
by measurement, so do not re-derive them:

* **Gamma is refuted** (5c.20 §1): on content-matched gold text, host `(255,255,220)` vs reference
  `(247,242,200)`, p99 155 vs 142. Do not add `TLS_GAMMA_TEST`.
* **"The scene is 3x too bright" was a scene-only-vs-composited comparison.** The real scene gap is
  ~2.5x `(38,35,34)` vs `(15,16,16)`, and the chain's own defect is bigger (5c.20 §6).

Also read `AGENTS.md`, `build/ref/BPMemory.h`, `build/ref/PixelShaderGen.cpp`. Fetch Dolphin sources
from `raw.githubusercontent.com/dolphin-emu/dolphin/master/Source/Core/VideoCommon/...` when you need
`XFMemory.h`, `CPMemory.h`, `VertexShaderGen.cpp`, `LightingShaderGen.cpp` — that is how the XF stage
was implemented this session, and it is faster and safer than guessing register layouts.

## 2. STATE

`4be7f14`, tree clean, build green. **The default path must stay unchanged**: MENU frame 1448 with no
`TLS_*` flags measures `(124,235,255)` — verified on this exact tree at `1ad412a` and again at the end
of the session. Flags: `TLS_TEV=1` (TEV combiners incl. compare), `TLS_GX_ALPHA_BLEND=1`,
`TLS_DEFER_EFB_COPY=1` (still wrong), `TLS_EFB_COPY_GEOM=1`, `TLS_TEV_TEXCOORD=1` (new, see below),
`TLS_XF_LIGHTING=1` / `TLS_XF_NO_LIGHTING=1` (new), `TLS_XF_PROBE=<frame>` (new), plus the older
`TLS_TEV_PROBE`, `TLS_BATCH_PROBE`, `TLS_BATCH_CUTOFF`, `TLS_EFB_COPY_PROBE`, `TLS_DRAW_ORDER`,
`TLS_SHOT_FRAMES`, `TLS_PC_HIST[_FROM]`, `TLS_DRAW_TRACE`, `TLS_INPUT_SCRIPT`.

## 3. SETTLED THIS SESSION — DO NOT RE-TEST

1. **`TLS_TEV=1` alone draws the MENU correctly except for the background** (`build/recomp/
   d3d11_screenshot_1448.ppm`, average `(7,6,4)`): gold `MENU` plate, `CONTINUE/NEW GAME/MULTIPLAYER`
   with Japanese sublabels, over black. The old claim that `TLS_TEV=1` leaves `(124,235,255)` does not
   reproduce; the cyan field is the *no-TEV* shader.
2. **The chain erases the scene at b32.** Per-pass table in 5c.20 §3: scene `(38,35,34)` at b16,
   then b32 replaces the whole screen with the `0x90395DC0` 320x224 copy whose **guest memory is
   `(0,0,0)`**, then b40/b41 add `(1,2,2)`/`(3,6,7)` copies, then the UI passes draw the text.
   `probe_texture_avg()` decodes guest memory, so this is content, not a sampling artefact.
3. **Hardware's copies contain the current scene.** New corpus this session: 2007 framedumps +
   30 623 `efb1_*` dumps in `%APPDATA%\Dolphin Emulator\Dump\Textures` (archive it before the next
   capture). `efb1_n013500_320x224_6.png` is the title cave at `(15,16,16)`; the within-frame sequence
   runs `0 5 12 15 15 0 0 0 16 15 15 16 16 17/20 21/24 21/24`. So hardware's chain lifts the scene
   +40 %, the host's lifts it x6.7, and the inline copy model is **provably stale**.
4. **XF lighting is implemented but irrelevant at the MENU**: channel-0 lighting is *disabled* on the
   3D batches (2 of 67 batches, 216 of 40 188 vertices lit). Keep it opt-in; it may matter in Ch.1.
5. **Texture and post matrices are identity** at the MENU (`texmtx[0..1]`, `postmtx[61]`), so the
   missing texcoord *transform* is a no-op there.
6. **Per-stage texcoord selection is faithful and implemented, but it makes the scene brighter**
   (`38,35,34` -> `49,43,44`), so it stays behind `TLS_TEV_TEXCOORD=1`. `GxVertex` now carries
   `u1/v1` (TEXCOORD1 at offset 40) and the TEV constant buffer's `tev_order[].w` selects uv0/uv1/
   constant per stage.
7. **Vision and mixing are consistent between the renderer** — the remaining suspects for the 2.5x
   scene brightness are listed in 5c.20 §5; the chain's additive strength is the largest measured
   error.
8. **The post-handoff stall is a host-side timing race** (5c.21). When it stalls, 100 % of the frame
   budget dispatches **one address, `0x8022A204`** = `fn_8022A054+0x1B0`, a spin on `mem_read32(r7+4)`
   that never advances, called from `fn_8022ADD4+0x274` (`LR=0x8022B048`, `r3=0x90002008`,
   `r12=0x80084F30`). Taps: `GameTask::Init` 81 calls last 1882, `SequenceManager::Update` last 1882,
   streaming queue `active="data/material/pc_ga_m_a00.material" status=1`. **Three runs of the same
   input plan disagree**: the run with `TLS_PC_HIST=1` (the only flag that slows dispatch) got through
   and rendered 50 247 vtx / 54 batches at frame 1920; runs with `TLS_DRAW_TRACE` or `TLS_SHOT_FRAMES`
   stalled. Dropped `0x8046BBE0` stream completions were ruled out (now instrumented; never fired).

## 4. TASKS IN ORDER

1. **Fix the copy servicing model, using the new corpus as ground truth.** The copy must contain the
   scene drawn before it. Implement in-order execution and compare **per copy** against Dolphin's
   dump of the same `WxH` (same size, same content — no framing mismatch, unlike every previous
   comparison). Then re-measure the chain against `21/24`, one pass at a time, and only then decide
   about `TLS_EFB_COPY_GEOM`. `TLS_DEFER_EFB_COPY` as it stands is not the answer either (§5c.19 §7
   measured that copies do not accumulate, and §5c.20 §6 shows the host's passes are 4x too strong
   regardless).
2. **Scene brightness (~2.5x)**: candidates in 5c.20 §5 — the chain's additive strength first, then
   TEV `RASA`/alpha in stages writing `dest=c2`, then the RGB565 EFB quantisation the reference goes
   through. `TLS_TEV_PROBE=<frame> TLS_TEV_PROBE_FROM=0` prints the scene batches' stage ops, K
   registers and per-texmap averages; `TLS_XF_PROBE` prints the whole XF file.
3. **The stall race** (5c.21): find what is timing-sensitive. Candidates: DVD callbacks delivered only
   when the guest PC is at an idle address (`tls_dvd_service_callback`), alarm/interrupt delivery, any
   host queue drained once per frame. Then name `fn_8022A054` / `fn_8022ADD4` using their call sites
   (`GameLoadTask` `0x80570CFC`, the two `vt=0` entries `0x80363DBC` / `0x803646C4`) and find what
   writes the word at `[r7+4]`. Reproduce reliably first — an instrumented run may not stall.
4. **Chapter 1 parity** vs `docs/evidence/30-dolphin-scene-3000.png` and the 355 dumps in
   `%APPDATA%\Dolphin Emulator\Dump\Textures\SLSEXJ\`; name `0x005F2A10`/`0x005F2A90`.

## 5. DOLPHIN CAPTURE (still works — the traps are real)

`Dolphin.ini [Movie] DumpFrames=True/DumpFramesSilent=True` is the on/off switch; `GFX.ini
[Settings] DumpFramesAsImages=True`, and **`DumpEFBTarget=True` for per-copy dumps** (it was set this
session; leave it). Then `python tools/dolphin_capture.py --visible --frame-plan
"600-612:A,900-912:A,1200-1212:A" --run 1100` and kill it with `taskkill /IM Dolphin.exe /F` once
enough frames exist. Traps: unquoted `-e` paths with spaces, and a second Dolphin instance, both raise
modal dialogs that look exactly like "hangs after NW4R SND". `--frame-plan` counts files in
`Dump\Frames`, so clear it before a frame-indexed run; **the frame indices of the two dump streams do
not line up exactly** — `analyse` copies by image content, not by number. Measured rates: ~10 fps
while frame-dumping (2007 frames in 250 s wall clock). Archives: `build/recomp/dolphin-ref/{boot,
run2,run3,run4}` (run4 = the 26 656-copy static bright screen behind §5c.19 §7).

## 6. RULES THAT COST TIME

0 changes to `src/`. Never hand-edit generated chunks. Never mutate guest state or fabricate an answer
the guest asks for. Never guess a low-memory constant — derive it from `asm/ldscript.lcf`. Never flip a
default on a guess: this session implemented two faithful-but-measured-worse mechanisms (per-stage
texcoord, XF lighting at the MENU) and both stay opt-in. Rate-limit probes. Commit per logical change,
with the measurement that justified it in the message. HLSL: dynamically indexed `Texture2D` fails
X3511, `[loop]` fails X3531 — eight separate textures + if-chain. Rare `0xC0000374` near frame 840 —
re-run with `TLS_ALLOC_PROBE=1 TLS_TAIL_RING`.
