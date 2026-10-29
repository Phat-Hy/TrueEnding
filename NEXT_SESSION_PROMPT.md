MISSION CONTINUATION — Project The Maybe(Not) Last Story
(G:\Program\Project The Maybe(Not) Last Story — native PC recompilation of The Last Story / Wii SLSEXJ)

Work autonomously. Measure instead of guessing. Commit per logical change with the numbers in the message.
Keep the build green. Write findings into DEEPSEEK_HARNESS_HANDOVER.md as you make them. **0 changes to `src/`.**
Every runner launch is `--window --minimized`, one at a time.

THIS SESSION HAS ONE QUESTION. The ones already answered below are closed — do not re-open them.

=====================================================================
0. READ THESE, IN THIS ORDER
=====================================================================

  a. AGENTS.md §1 — Renderer strategy: Aurora-first. Still this project's mission; the rest of §1 and §4
     (0 changes to `src/`, minimized launches, CMPR alpha contract) still apply.
  b. DEEPSEEK_HARNESS_HANDOVER.md — the "NEXT SESSION — START HERE" block at the top (the spike's state in one
     paragraph), then §5c.46 **AP-AM** in full. Items **6d, 6e, 6f, 6g, 6h** are this session's starting point.
     Everything before AP-AM is history and several of its conclusions are disproven.
  c. tools/aurora_spike/README.md — how the spike builds and what each script does.
  d. .agents/skills/recomp-debugging.md before spending any run.

=====================================================================
1. WHERE THE SPIKE STANDS (measured — do not re-derive)
=====================================================================

  * Criterion 1 — **CLEARED, without MSVC**: aurora @ 505b5eb + prebuilt Dawn v20260807.225922 + SDL3 3.4.10
    build entirely with **MinGW GCC 16.2** (tools/w64devkit's cmake 4.4.3 + ninja 1.13.2): 503 targets,
    `ctest` **424/425**, including `ReadbackGpuTest.*` (real Dawn device, real WGSL compute). The aurora
    checkout lives at **G:\Program\aurora-spike** (`aurora/`, `build2/`, `stublibs/`).
  * Criterion 3 — **CLEARED, with content**: with `GXInit(nullptr, 0)` in the harness, `capture_copies`/`get`
    delivers a 64x64 RGBA8 copy whose **every one of its 4096 texels is exactly the rendered colour**
    `(192,128,64,255)`, in the hardware's 4x4 tile layout. That is `--synthetic-copy` and it must keep
    printing PASS. aurora's copy path is therefore **not** the white-screen defect (AP-AM 6e compares the same
    guest copy from both layers: aurora's payload is layout-exact and equals its own EFB).
  * Criterion 2 — **OPEN**. aurora *records* the cave frame (**26 616 draws, 1.12 M vertices, 102 pipelines
    created**; the raw stream with no adapter records the same 27 149 draws) and its EFB is **black** — even
    for a copy taken after **210 597** drawn vertices (`0x9036A1A0`, 320x224 RGB565: this layer's mean byte
    **148.29**, aurora's **0.00**). With the control case passing, the harness is exonerated; what remains is
    **the game's draw state as aurora interprets it**.

  RULED OUT by measurement — no run on any of these:
    staging/array sizing (fixed: per-draw array sizing cut 3.6 GB/frame of array declarations to 62 MB);
    async-pipeline skipping (`AuroraSetDrawsBlocking(GX_TRUE)` is in the harness);
    colour/alpha update (`TLS_AURORA_FORCE_UPDATE=1` forces both on — still black);
    readback timing (in-frame **and** next-frame captures both deliver black);
    the adapter itself (`--raw` submits the same draws);
    and the missing `GXInit` (that was the black-frame cause for the *control* case only, and it is fixed).

=====================================================================
2. THE QUESTION
=====================================================================

Why does aurora's EFB stay black for a real game frame when its own control case renders? Two steps, in this
order, both instrumented comparisons rather than switches:

  STEP 1 — one draw, both sides. Take the *first* draw of the cave frame that this layer renders visibly.
    * This layer: `decode_single_vertex` already decodes every attribute and `TLS_BATCH_DUMP=<frame>` prints
      per-batch NDC bounds. One runner run gives you that batch's vertex stream and its NDC box.
    * aurora: after `fifo::drain()` its `g_gxState` holds the arrays, uniforms and shader config for the same
      draw. Add a `--dump-draw N` that prints the first vertex of draw N (positions + w), the projection in
      force, the viewport/scissor rect and the vertex size.
    * The first divergence names the defect. Do not skip to the next step until you have it.

  STEP 2 — bisect the *state*, not the frame. The title's 2D pass and the cave's 3D pass differ exactly where
    the two layers differ: projection, texgen, TEV stages, textures. Capture the cheapest frame this layer
    renders *bright* that also fits the staging budget, replay it, and see whether it is black too. If a 2D/UI
    frame renders in aurora, the defect is 3D-specific and step 1 will have pointed at it.

  Budget: **one session**. If no frame renders by the end of it, that is the mission's kill criterion — report
  the blocker with numbers (migration blocked on aurora's interpretation of this game's draw state, not on
  build integration) and fall back to the per-bug path in the dossier's order: composite tail first, then CMPR
  alpha, then XF texgen 2..7 / light decode.

=====================================================================
3. INSTRUMENTS THAT EXIST — USE THEM, DO NOT REBUILD THEM
=====================================================================

  Build / run (checkout at G:\Program\aurora-spike):
    pwsh tools/aurora_spike/build.ps1                          clone -> patch -> configure -> build
    G:\Program\aurora-spike\build2\tls_gx_replay.exe <capture> <out.ppm> [options]
      --extra N            empty frames after the replay (default 8)
      --split N            feed a frame as N command-aligned aurora frames (the EFB persists across frames)
      --parse-only         parse/adapt every frame, print totals, no GPU
      --copy-record N      copy record N's geometry + this layer's bytes (writes <out>.host.bin)
      --copy-out FILE      aurora's bytes for that copy
      --synthetic-copy     the control case; must print PASS with every texel exact
      --raw / --verbose / --max-cmds N / --start-at N / --stop-after N
    Env: TLS_AURORA_STATS=1 (per-frame draws/verts/pipelines), TLS_AURORA_NO_COPY=1,
         TLS_AURORA_FORCE_UPDATE=1

  Analysis:
    python tools/aurora_spike/capinfo.py <capture>                    frames, bytes, MEM planes, copies
    python tools/aurora_spike/capfilter.py <in> <out> --from F --to F  window an oversized capture
    python tools/aurora_spike/compare.py <aurora.ppm> <host.ppm> [--out cmp.png]
    python tools/aurora_spike/copycmp.py <aurora.bin> <aurora.bin.host.bin> --w W --h H --bpp B

  Captures on disk (build/recomp/gxcap/):
    window.tlscap 158 MB — the 2-frame cave window (3400 heavy + 3401 light), 95 copy records, MEM1+MEM2.
        **This is the failing case. Start here.**
    gxfifo.tlscap 143 MB — a title window (frames 300-301). Nearly black in this layer's own capture (a fade),
        so a poor picture reference but a cheap *state* probe.
    A fresh capture is one runner run: `TLS_GX_CAPTURE=<dir>`, `TLS_GX_CAPTURE_FROM/TO`, `TLS_EFB_ORDER=none`
    (inline copies, so the recorder sees them), and `TLS_SHOT_FRAMES=<frame>` for the same-run reference shot.

  aurora's own tests are a no-game-image harness worth using: 232 `gx_fifo_tests`, and
  `tests/gfx_readback_test.cpp` is the reference for "how a frame is set up" — it calls **GXInit** and drives
  `gfx::begin_frame`/`end_frame` directly. Read it before changing the harness again.

=====================================================================
4. RULES THAT COST REAL RUNS
=====================================================================

  * **Never start a capture run you may not be able to finish**, and keep the previous capture until the new
    one is closed — an abandoned run destroyed a 235 MB capture last session.
  * Check **fifa15** and free RAM before a run. With it running the runner sits at 7-10 FPS; quiet, a run to
    frame 3400 is ~5 minutes and a run to frame 310 is ~12 seconds.
  * The recorder is window-gated now, but **some copies land after their frame's `FRAME_END`** (AP-AM 6h) and
    are tagged `frame 0`, so a filtered window can lose a frame's tail copies. Check the copy count against
    `capinfo.py` before trusting a filtered file, and look at `d3d11_present()`'s `s_flush_only` early return.
  * The light frames are **not self-contained** (replaying 3401 alone dies at offset 9 with `vtxsize 0`): a
    capture window must start on a heavy frame and a replay must include it.
  * A heavy frame needs **more than 96 MiB** in the uniform *and* storage planes: apply
    `patches/0005-replay-staging-sizes.patch` for a replay run only. With those sizes aurora's own
    null-backend tests fail (`Out of memory` on "Staging Buffer 1"), so revert before running the suite.
  * `patches/0004-spike-probes.patch` is the diagnostics set (env-gated, inert). Apply 0001-0004 always;
    0005 never for the suite.
  * The invariant and page gate were **not re-run** last session (host load). The capture instrument is inert
    by construction (`tls_gxcap_on == 0` when `TLS_GX_CAPTURE` is unset, verified by a 220-frame smoke run),
    but re-verify both gates once the host is quiet.
  * Do not record a new invariant hash without saying so explicitly and why — it is the project's page gate.

=====================================================================
5. DEFINITION OF DONE
=====================================================================

Either (a) aurora renders the cave frame — a PPM plus `compare.py` numbers against this layer's same-run
capture, and AP-AM 6e's copy comparison re-run on that frame (aurora's bytes should then carry real content) —
and the migration plan is written: the C-ABI boundary (the two register classes plus address canonicalization),
the build integration (five patches, of which two are diagnostics/optional), the staging policy this game needs
(27 k largely-unmerged draws at ~2.5 KB each against a 256 MiB per-buffer cap), and the one-time re-recording of
the invariant/page gate; or
(b) the blocker is named and measured, and the fallback is stated: per-bug fixes on the hand-rolled layer in the
dossier's existing priority order.

Write the result into DEEPSEEK_HARNESS_HANDOVER.md as §5c.46 **AP-AN** with the numbers, and commit it.
