# Kickoff prompt for the next session

Copy of the briefing the next autonomous session should start from. Written at the end of the
session that produced `a4897a4`.

---

MISSION CONTINUATION — Project The Maybe(Not) Last Story (`G:\Program\Project The Maybe(Not) Last Story`,
native PC recompilation of *The Last Story* / Wii SLSEXJ)

Work autonomously and do not stop to report. Measure instead of guessing, commit as you go, keep the
build green, and keep going until your context is nearly exhausted. Write findings into
`DEEPSEEK_HARNESS_HANDOVER.md` as you make them, not at the end.

## 0. SESSION SETUP

This workspace needs **full file access** (the last session ran with DSH `danger-full-access`; under
`workspace-write` the shell runs at Low integrity and writes to `build/`, `recomp/`, `tools/`,
`docs/` fail with "Access is denied" even though the DACL is fine). Verify with
`Set-Content build\recomp\_t.txt x; Remove-Item build\recomp\_t.txt`.

```powershell
python tools/recomp_harness.py build-runner      # ~1 s, chunks are already lifted
python tools/compile_shaders.py                  # only after editing tools/compile_shaders.py
```

Env vars do not persist between tool calls - set them in the same call as the run.

## 1. READ FIRST

Handover "READ THIS FIRST", then **§5c.18** (the Dolphin reference verdict) and **§5c.19**
(§7 = the servicing-model verdict, §9 = the concrete plan). Everything before §5c.16 is history and
several of its conclusions are disproven - in particular do **not** trust any statement that the
composite chain's ordering (deferring EFB copies to their vertex mark) is the fix; §5c.19 §7 refutes
it with measurements. Also read `AGENTS.md` and `build/ref/BPMemory.h` (Dolphin's register layouts,
the authority).

## 2. STATE

`a4897a4`, tree clean, build green. The **default path is unchanged and must stay so**: MENU frame
1448 with no `TLS_*` flags measures `(124,235,255)` - if that number moves, you broke the default.
Every new behaviour is behind a flag: `TLS_TEV=1` (TEV combiners, now including compare stages),
`TLS_GX_ALPHA_BLEND=1`, `TLS_DEFER_EFB_COPY=1` (**known wrong, see below**),
`TLS_EFB_COPY_GEOM=1` (destination size from the BP 0x4D pitch), `TLS_TEV_PROBE=<frame>` (+`_FROM`),
`TLS_BATCH_PROBE=<frame>`, `TLS_BATCH_CUTOFF=<n>`, `TLS_EFB_COPY_PROBE=1` + `TLS_EFB_COPY_FROM=<frame>`,
`TLS_EFB_SAMPLE_FRAME=<frame>`, `TLS_DRAW_ORDER=1`, `TLS_SHOT_FRAMES=<n,...>`.

## 3. WHAT IS ALREADY SETTLED — DO NOT RE-TEST

* **Hardware does not saturate.** Dolphin at the MENU: `docs/evidence/27-dolphin-menu-frame1440.png`,
  frame average `(23,25,18)`, dark cave, gold `MENU`/`NEW GAME`, one small lamp glow. No white
  ellipse. The old "does hardware reach 1.0?" gate is answered **no**.
* **Hardware's EFB copies read one snapshot per frame and never accumulate.** Bright static frame,
  base 204, every copy in the frame reads 220. So `TLS_DEFER_EFB_COPY=1` is the wrong model; the
  inline/previous-frame path has the right *shape*. Re-analyse with
  `TLS_COPY_DUMP_DIR=build/recomp/dolphin-ref/run4 python tools/analyze_dolphin_copies.py 400`.
* **The host's scene is the error, not the chain**: scene-only (`TLS_TEV=1 TLS_BATCH_CUTOFF=30`)
  measures `(76,70,62)` against the reference's `(23,25,18)` - a factor of ~3.3, which every additive
  pass then multiplies.
* Eliminated by measurement (do not redo): TEV correctness, texcoord aliasing (no batch supplies
  `TEX1..TEX7` at all), EFB/texture alpha (all 255), GX alpha blending, quad geometry (tail quads are
  genuinely fullscreen), cross-frame accumulation.

## 4. TASKS IN ORDER

1. **Gamma test (cheapest, biggest).** The 3.3x ratio fits `v_host = v_ref^(1/2.2)`
   (`23/255 -> 0.09^0.4545 = 0.34` vs host `0.30`). Add a temporary `TLS_GAMMA_TEST` output transform
   in `recomp/gfx_d3d11.c` (or a one-off experiment) and compare `TLS_BATCH_CUTOFF=30` against the
   reference. If the host is writing gamma-encoded values where the reference is linear, that is the
   whole bloom explanation and the fix is a single transform, applied to *scene* rendering only.
2. **If not gamma: texcoord generation.** BP `0x30..0x3F` texcoord info + the XF texture matrices.
   Needed because no batch supplies `TEX1..TEX7` (5c.16 §8), so any stage naming texcoord > 0 gets
   the generator's output. `GxVertex` should carry the generator's result, not more UV arrays.
3. **Then re-measure the composite chain** (`TLS_BATCH_PROBE=1448` against `(23,25,18)`) and only
   then reconsider `TLS_EFB_COPY_GEOM` / any default change. `TLS_DEFER_EFB_COPY` should never
   become the default.
4. **Task 2 - the post-handoff stall (5c.12, gateway to Chapter 1).** Resume `TLS_PC_HIST`, resolve
   the top PCs with `build/resolve.py`, tap `StreamManager::Update` (`0x8046DD60`) after frame 1882.
   Note the same input script gets *Dolphin* into Chapter 1, so the guest code path is fine and the
   stall is host-side.
5. **Task 3 - Chapter 1 parity** against `docs/evidence/30-dolphin-scene-3000.png` (Gurgan Cave,
   hero + sword + water + HUD `DAGRAN LV 5` / `SYRENNE LV 4`) and the 355 Dolphin texture dumps in
   `%APPDATA%\Dolphin Emulator\Dump\Textures\SLSEXJ\`. Name the two boot-time non-code dispatches
   (`0x005F2A10`/`0x005F2A90`).

## 5. DOLPHIN REFERENCE CAPTURE (it works now - do not rediscover the traps)

```powershell
# GFX.ini [Settings]: DumpFramesAsImages = True, DumpEFBTarget = True (per-copy dumps), DumpTextures = False
# Dolphin.ini [Movie]: DumpFrames = True, DumpFramesSilent = True      <- the on/off switch lives HERE
python tools/dolphin_capture.py --frame-plan "45-57:A,600-612:A,900-912:A,1200-1212:A,1300-1312:UP,1350-1362:A" --run 900
```

Traps that cost hours: `Start-Process -ArgumentList @('-e', $path)` does **not** quote a path with
spaces (Dolphin shows a modal "The specified file" warning over a stalled emulator); a *second*
Dolphin instance cannot open `Wii/title/00000001/00000002/data/play_rec.dat` and shows a modal "File
could not be opened"; both look exactly like "the game hangs after `NW4R SND`". `DumpFrames` in
`GFX.ini` is inert. Reference frames land in `Dump\Frames\framedump_<n>.png` (828x480), per-copy dumps
in `Dump\Textures\efb1_n<counter>_<W>x<H>_<fmt>.png`; clear `Dump\Frames` before a frame-indexed run
(the tool warns about a non-zero base). Archived corpora: `build/recomp/dolphin-ref/{boot,run2,run3,run4}`
- run3 is the full run into Chapter 1 (8297 frames), run4 has the per-copy dumps.

## 6. RULES THAT COST TIME

0 changes to `src/` (read it, never edit it). Never hand-edit generated chunks - re-lift. Never mutate
guest state or fabricate an answer the guest asks for. Never guess a low-memory constant - derive it
from `asm/ldscript.lcf`. Never flip a default on a guess: a previous session twice reverted "more
correct" changes that measurably regressed the attract screen, and this session found that the
"more correct" deferred-copy path was in fact the wrong model. Rate-limit probes. Commit per logical
change. HLSL trap: a dynamically indexed `Texture2D` array in the TEV loop fails X3511 and `[loop]`
then fails X3531 - use eight separate `Texture2D` plus an `if`-chain (`SampleTevTex`). Rare
`0xC0000374` around frame 840 - re-run with `TLS_ALLOC_PROBE=1 TLS_TAIL_RING` if it reproduces.
