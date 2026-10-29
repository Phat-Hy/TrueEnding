MISSION CONTINUATION — Project The Maybe(Not) Last Story
(G:\Program\Project The Maybe(Not) Last Story — native PC recompilation of The Last Story / Wii SLSEXJ)

Work autonomously. Measure instead of guessing. Commit per logical change with the numbers in the message.
Keep the build green. Write findings into DEEPSEEK_HARNESS_HANDOVER.md as you make them. **0 changes to `src/`.**
Every runner launch is `--window --minimized`, one at a time.

=====================================================================
0. READ THESE, IN THIS ORDER
=====================================================================

  a. AGENTS.md §1 — **Renderer strategy: Aurora-first**. That is this session's mission; the rest of §1 and §4
     still apply (0 changes to src/, minimized launches, CMPR alpha contract).
  b. DEEPSEEK_HARNESS_HANDOVER.md, in this order: the `WHERE THIS STANDS` block at the top, then §5c.46 **AP-AL**
     (why Aurora), **AP-AK** (the copy-ordering hypothesis, disproven — do not re-test it), **AP-AJ** + **AP-AI**
     (the white screen and what the Dolphin reference does and does not prove), and **AP-AH** (the state-1 writer
     that is never called). Everything before §5c is history; several of its conclusions are disproven.
  c. `.agents/skills/recomp-debugging.md` before spending any run.

Do not re-derive any of these — they are measured:
  * the "frozen gameplay frame" is a **pure-white screen** (255.00, std 0.00), not an idling field;
  * our copy servicing is already at exact batch boundaries (`s_batch_barrier`), so copy ordering is **not** the bug;
  * `TLS_TEV_FORCE_STAGES=1` (every batch on PSTev) and `TLS_BLEND_SLOT_FIX=1` both leave the white frame unchanged;
  * the field state machine's only writer of state 1 (`0x8036F5D8`) is never called, and every caller of it is a
    menu / game-over task — the state word is not the way to get the picture back.

=====================================================================
1. THE MISSION — a bounded Aurora spike, three exit criteria
=====================================================================

Hypothesis to test, not a migration to start: the fidelity work this project keeps paying for (TEV stages, blend
enums, XF texgen, EFB copy/readback, texture decode) is already solved in
[Aurora](https://github.com/encounter/aurora) (MIT, WebGPU/Dawn, D3D12/Vulkan/Metal), which is what the shipped
community Wii ports use — including [WiiCompiled](https://github.com/patchzyy/Wiicompiled), whose **static
recompilation of a retail DOL/REL** is this project's exact analogue. None of them writes a rasteriser.

Read first, in the Aurora tree (browse it in this order — it is MIT, so read the code, do not infer):
  * `README.md`, `docs/building.md` — dependencies (CMake, Dawn), platforms, CMake integration.
  * `lib/gx/command_processor.cpp`, `lib/gx/fifo.cpp`, `lib/gx/regs.cpp` — the **FIFO-level** entry point a
    recompiler can drive (this is the layer we need; `lib/dolphin/gx/GX*.cpp` is the source-level API for decomp
    projects and is *not* our integration point).
  * `lib/gx/readback.{hpp,cpp}` and `lib/dolphin/gx/GXAurora.h` — `capture_peeks` / `capture_copies` / `get`,
    bounded by `MaxCaptureItems = 4096` and `MaxPayloadBytes = 32 MiB`. Compare with our
    `d3d11_service_pending_copies()` + `d3d11_efb_copy_to_guest()`.
  * `tests/gx_fifo_test.cpp`, `tests/gx_readback_test.cpp`, `tests/gx_texture_cache_test.cpp` — note that these
    need no game image. That practice is the second thing to steal.

**Exit criteria — clear all three or report the blocker with numbers:**

  1. **Build.** aurora + Dawn compile against this toolchain. An MSVC-built DLL behind a C ABI is an acceptable
     answer (our runner stays MinGW/C); a MinGW GCC C++ build is better if it works. Nothing else is worth doing
     if this fails — say so and stop.
  2. **One frame.** Drive aurora's command processor from a captured GX stream and render exactly one frame: the
     invariant frame 3500. Compare it pixel-wise (`tools/frame_diff.py`-equivalent; system python has no PIL, the
     bundled one does) to the current capture in `build/recomp/d3d11_screenshot_3500.ppm`.
  3. **One EFB copy.** Service one guest EFB copy through `capture_copies`/`get` and prove the guest samples the
     same bytes it samples today. The white screen lives in this path, so this criterion is the one that decides
     whether a migration would actually fix it.

**Standing rule until these resolve:** no *new* GX-semantics feature work in `recomp/gfx_d3d11.c` /
`recomp/gx_pipeline.c`. A bug fix is allowed only when it is cheaper than the spike and verifiable in one run
against a Dolphin reference. Keep the layer building and keep the invariant green.

=====================================================================
2. INSTRUMENTS THAT ALREADY EXIST (do not rebuild them)
=====================================================================

    TLS_INPUT_SCRIPT      '600-612:A,900-912:A,...'   set it in the SAME shell call as the run; confirm
                                                     SetNextSequence('Game') @1647 in the log before reading
                                                     any frame-numbered probe.
    TLS_SHOT_FRAMES       2600,3500,4500             captures written to build/recomp/d3d11_screenshot_<f>.ppm
    TLS_BATCH_DUMP        <frame> [ _MAX ]           draw list: texture, blend, NDC bounds, outside count
    TLS_BATCH_PROBE       <frame>                    per-batch back-buffer readback (avg/max/bright), expensive
    TLS_BATCH_CUTOFF      <n>                        draw only the first n batches (bisect the composite tail)
    TLS_COPY_PROBE        <frame> | <start>-<end>    every EFB copy: dst, size, fmt, vertex_mark, mean bytes
    TLS_TEV_PROBE, TLS_BATCH_RECT, TLS_PROBE_PRESENT_ONLY, TLS_SCENE_SM_PROBE, TLS_ENTRY_PROBE, TLS_DRAW_ORDER
    TLS_TEV_FORCE_STAGES, TLS_BLEND_SLOT_FIX         (A/B switches, inert by default)
    tools/dol_callers.py <addr> --funcs              bl/b callers + pointer materialisations (dol_xref cannot)
    tools/invariant.ps1                              PASS at C5447108..., attempt 1, save 1348992/29344

Bundled python (has Pillow): C:\Users\hypha\.dsh\dsh-runtimes\dsh-primary-runtime\dependencies\python\python.exe
Reference captures: docs/evidence/ (dolphin_ref_run3_f5000_gameplay.png is **gameplay with a HUD** — but its frame
number is NOT comparable to ours; see AP-AJ).

=====================================================================
3. RULES THAT COST REAL RUNS
=====================================================================

  * One run per question; read static evidence (`src/`, `tools/dol_callers.py`, `tools/dol_xref.py`) first.
  * Env vars do not survive between shell calls — set them with the run, and clear stale `TLS_*` first.
  * Check foreign CPU load and free RAM before a run. One run at a time. `--minimized`, always.
  * A `.texture`/arena address that moves between runs invalidates any claim built from two logs — a
    destination-and-content claim must come from one line of one log.
  * Module file names lie: the field task lives in `src/game_system_wpad_motor.c`. Search by address.
  * One `exit=-1073740940` (`STATUS_HEAP_CORRUPTION`) was seen once at guest frame ~1998; the identical re-run
    completed. If you see it, re-run before bisecting your own change.
  * Do not record a new invariant hash without saying so explicitly and why — it is the project's page gate.

=====================================================================
4. DEFINITION OF DONE FOR THIS SESSION
=====================================================================

Either (a) the three criteria clear and there is a written migration plan with the C-ABI boundary, the build
integration, and the re-recording plan for the invariant/page gate — or (b) the spike is blocked at a named step,
the blocker is measured (not "it seems hard"), and the fallback is stated: continue per-bug fixes on the
hand-rolled layer, in the priority order the dossier already ranks them.

Write the result into DEEPSEEK_HARNESS_HANDOVER.md as §5c.46 **AP-AM** with the numbers, and commit it.
