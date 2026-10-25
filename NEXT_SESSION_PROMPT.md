MISSION CONTINUATION — Project The Maybe(Not) Last Story (G:\Program\Project The Maybe(Not) Last Story, native PC recompilation of The Last Story / Wii SLSEXJ)

Work autonomously and do not stop to report. Measure instead of guessing, commit as you go,
keep the build green, and keep going until your context is nearly exhausted. Write findings into
DEEPSEEK_HARNESS_HANDOVER.md as you make them, not at the end. 0 changes to src/.

=====================================================================
0. SESSION SETUP — the write denials are a *path-scoped sandbox* problem
=====================================================================

Two different mechanisms produce "Access is denied" here. Both are real; check which one it is.

  (a) Integrity label (5c.22 §0): every file created before a certain date carries Mid IL while
      the shell runs at Low. Fix, from a full-access session:
          icacls "<root>" /setintegritylevel (OI)(CI)L /T /C /Q
  (b) Sandbox package SID (5c.23 §0, what actually happened this session): the DSH sandbox token
      is an AppContainer whose package SID is S-1-4-272833741-438872707. The root and build/
      carry an explicit ACE for it; recomp/, tools/, config/ do NOT, so *both* creating and
      editing files there is denied while build/ works fine. CHECK WHICH:
          icacls recomp          -> is there an S-1-4-* line?
          icacls build\recomp    -> it has one
      Fix: load the skill `diagnose-windows-sandbox-acl` and run its script ONCE, unconfined,
      with  -Path '<root>\recomp'  -AllowRoot '<root>'  -Out '<root>\.acl-repair-N'. It adds a
      full-control ACE for the signed-in user and that is what unblocks the AppContainer check.
      A confined run of that script is useless (it reports the sandbox's own restriction).
      Repeat for tools/ and config/ if they are also denied (one path per invocation).

Then:
    python tools/recomp_harness.py build-runner      # ~1 s, chunks already lifted
    python tools/compile_shaders.py                  # only when you touch HLSL

Env vars do NOT persist between shell calls (fresh process). Set them in the SAME call as the
run, and clear stale ones (a leftover TLS_TEV / TLS_DEFER_EFB_COPY / TLS_INPUT_SCRIPT silently
changes the whole run):
    Get-ChildItem env: | Where-Object { $_.Name -like 'TLS_*' } | ForEach-Object { Remove-Item "env:$($_.Name)" }

The system python has NO Pillow. Use the bundled one:
    $py = "C:\Users\hypha\.dsh\dsh-runtimes\dsh-primary-runtime\dependencies\python\python.exe"

=====================================================================
1. READ FIRST
=====================================================================

  a. DEEPSEEK_HARNESS_HANDOVER.md §5c.23 in full. That is the current state. §5c.22 and §5c.21
     next. Everything before §5c.18 is history and contains disproven claims.
  b. AGENTS.md §4 (CMPR alpha contract).
  c. Dolphin sources, fetched — NOT guessed. The two that have already settled arguments:
     VideoCommon/BPMemory.h (every BP field layout, UPE_Copy::tp_realFormat, TCInfo) and
     VideoCommon/VertexShaderGen.cpp (the whole texcoord pipeline: source row, input form,
     XF tex matrix, post matrix, the q==0 case, and the fact that TCInfo is IGNORED).

=====================================================================
2. STATE AT SESSION START
=====================================================================

commit 423f2cc, tree clean, build green.

DEFAULT (no TLS_* flags), input 600-612:A,900-912:A,1200-1212:A, present 1448:
    mean (102,188,205), p10 69, p50 203, p90 203 — reproduced byte-identically on 3 runs.
That is the re-baselined default (TLS_EFB_COPY_FMT is now ON by default); the old
(124,235,255) from 5c.22 no longer applies. Re-verify it after any change.

Flags:
    TLS_EFB_COPY_FMT=0         restore the old RGBA8-for-everything copy write (A/B only)
    TLS_TEV=1                  evaluate the GX TEV combiners
    TLS_DEFER_EFB_COPY=1       replay EFB copies in stream order (proven correct, 5c.22 §3)
    TLS_EFB_ALPHA=1            guest clear alpha + alpha replace when guest blend off + guest
                               CMODE0 factors for alpha (correct, measured picture-neutral)
    TLS_TEV_TEXCOORD=1         per-stage texcoord rule (opt-in, measured *worse* on the scene)
    TLS_TEV_PROBE=<present>[,TLS_TEV_PROBE_FROM=<batch>]   now also prints tc0/tc1 (BP 0x30..0x3F)
    TLS_BATCH_PROBE=<present>  now also prints a= (framebuffer alpha average)
    TLS_EFB_CHAIN=<present>[,TLS_EFB_CHAIN_DUMP=1]         now prints srca= and dstalpha=
    TLS_SAVE_PRECREATE=1       restore the fabricated zero save file (A/B only)
    TLS_COMPOSITE_ZTEST=1      refuted, documented no-op
    TLS_TEX_DUMP=0xADDR[,0xADDR], TLS_XF_*, TLS_PC_HIST, TLS_SHOT_FRAMES, TLS_EFB_CLEAR_BLACK

Runs (~140 s, exits by itself):
    TLS_INPUT_SCRIPT='...' TLS_TEV=1 TLS_DEFER_EFB_COPY=1 TLS_SHOT_FRAMES=1448 `
      .\build\recomp\tls_runner.exe --dol orig\main.dol --frames 1452 --window --novsync *> log
Stats:  & $py tools\cmp_ref.py build\recomp\d3d11_screenshot_1448.ppm <ref.png>

=====================================================================
3. THE TWO SCREENS THAT MATTER — get this right before comparing anything
=====================================================================

  title screen (attract): input plan `600-612:A` ONLY. Static, identical every run.
      host mean 90, corners 1, centre 241  |  reference: dolphin-ref/run2/framedump_900.png
      (mean 205, corners 174-176, centre 218-220). THIS IS THE BEST TEST CASE IN THE PROJECT.
  "MENU 1448" (3 A presses): the host's picture is the *save-data corruption dialog*, not the
      MENU. Reference for that screen: dolphin-ref/run2/framedump_1440.png (== docs/evidence/27).
      dolphin-ref/run3 is NOT frame-aligned for this plan (its 1448 is the flat title plate).

RUN-TO-RUN VARIANCE IS REAL: the title/MENU particle phase differs between runs (batch counts
60..67, vertex offsets shift by 18). Per-batch indices are only comparable *within* one run.
Probes that accompany a batch dump key on the present counter (s_d3d11.frame_counter), never
g_runner_current_frame (present N renders guest frame N-1).

=====================================================================
4. SETTLED — DO NOT RE-TEST
=====================================================================

* Copy servicing: TLS_DEFER_EFB_COPY=1 is right; dstavg == srcavg on every copy of a frame.
* Every EFB copy destination format is now written in its real 4x4 tile layout, and the
  destination width is pitch*8/bpp. Sizes match Dolphin's own per-copy dumps. Formats 1(R8),
  7(A8), 8(R8), 9(RA8), 10(RGB565), 11(RGB5A3), 12(RGBA8) implemented; R4/RA4/Z fall back to an
  RGBA8 write and must NEVER drop the copy. copy_to_xfb bypasses the format check (16bpp linear).
* The EFB alpha was pinned at 1.0 (clear alpha 1.0 + ONE/INV_SRCALPHA + forced colour blending);
  TLS_EFB_ALPHA un-pins it but does not change the final picture. Not the bloom by itself.
* GX source blend factors: 2/3 = SRC_COLOR/INV_SRC_COLOR (was DEST_*). Fixed.
* REFUTED by measurement: gamma; z-testing (all composite z = 0, near plane); the fabricated
  zero save file as the cause of the corruption dialog (removing it changes nothing, byte
  identical); composite z-test flag; and BP 0x30..0x3F TCInfo as the vignette's UV remap
  (Dolphin's VertexShaderGen applies no TCInfo at all and still matches hardware — the
  registers read 0x0001003F / 0x0001007F with range_bias SET, and it is still not it).
* The stall: 0x8022A204 is NOT a flag spin. It is a max-tracking walk of a linked structure
  inside fn_8022A054 (src/game_res_texture.c, 0x5C4 bytes — the game's resource allocator),
  called from fn_8022ADD4+0x270 and retried while it returns 0. 100 % of samples at one
  address therefore means the walk never terminates.
* The white blob (tex 0x90D175E0, 18 vtx, s=4 d=1): its *size* is right (~0.2 % of the frame,
  same order as the reference's lamp flare). It saturates because it is an additive pass whose
  source alpha is 1.0. Do not chase its geometry.

=====================================================================
5. TASKS, IN ORDER
=====================================================================

1. THE SAVE-DATA VERDICT — highest value, blocks everything after it.
   The guest decides "The save data cannot be used because the data is corrupted" from what
   the NAND/ISFS layer answers, above the file: host_runner.c no longer fabricates a zero
   file (TLS_SAVE_PRECREATE=1 restores it) and the frame is byte-identical either way.
   Instrument the ISFS path in recomp/replacements.c (ISFS_Open/Read/GetAttr/GetStats and the
   NANDCheck/NANDGetStatus stubs at 0x80620220 / 0x80620BD0) and print what the guest asks for
   and what it gets. Only the *answers* can produce this dialog. Fixing it is what lets the
   MENU (and Chapter 1) be compared at all.

2. THE XF TEX + POST-TRANSFORM MATRIX — the last texcoord term.
   Dolphin's pipeline per regular texgen: raw attr -> coord.z=1 (AB11) -> XF tex matrix ->
   optional normalize -> POSTTRANSFORMMATRICES[postmtx_index..+2] (+w) -> q==0 special case.
   The host feeds the raw uv straight to the sampler. dualTexTrans is ON with PostMtxInfo=0x3D
   for these batches. This applies to *every* batch, not just the composite.
   Target: the title screen's final fullscreen SRCALPHA/INVSRCALPHA pass (b18 in that run).
   It draws K0 (opaque black) with alpha = K0.a*(1 - mask.a); the mask is a 64x64 IA8 radial
   texture at 0x9051E1A0 whose decode is PROVEN correct (it measures identically to
   Dump\Textures\SLSEXJ\tex1_64x64_e6053facb03e8a53_3.png: alpha mean 91, corner 0, centre 255).
   So the host draws the right texture with the right alpha over the *whole* screen, and
   hardware clearly does not. If the post matrix turns out to be identity for this batch, the
   next suspect is konst/K0 alpha, and after that the possibility that this pass is not what
   produces hardware's final plate at all (bisect with TLS_BATCH_CUTOFF).

3. THE ALLOCATOR CYCLE (the post-handoff stall).
   Add a visited-node ring *inside the generated loop* at label_8022A204
   (build/recomp/generated/chunks/chunk_0137_text1_802281C0.c) — it is the only place that can
   see the node addresses — and print the first repeated node. PC histograms, register dumps and
   frame counters cannot answer this. Then find who links the node into the tree twice. Validate
   over 3+ runs with and without instrumentation (the stall is not deterministic).

4. CHAPTER 1 PARITY — only after (1). The reference corpus already exists
   (dolphin-ref/run2/framedump_2000, 3000, 5000).

=====================================================================
6. RULES THAT COST TIME THIS SESSION
=====================================================================

* Read a probe's field order from the CODE, not from its label. The TEV K-register line printed
  (r, a, b, g) while the label read r,g,b,a, so an opaque black K0 ("0 1 0 0") looked green and a
  whole run went into the wrong theory. Fixed in 423f2cc — do not reintroduce it.
* Render the frame you are about to measure. Numbers are only comparable when the two pictures
  are the same screen; three different "MENU 1448" pictures exist in this repo.
* A probe that measures a copy must decode with the SAME layout the writer used — there is now
  one decoder, efb_dst_decode_texel(), and both the probe and the PPM dump go through it.
* Rate-limit any probe inside per-frame or per-vertex code: gate it with an env var and a count
  cap, inert by default. Commit per logical change with the numbers in the message.
* HLSL gotcha: an array of Texture2D indexed dynamically inside the TEV stage loop makes
  D3DCompile fail with X3511 (forced to unroll); marking the loop [loop] then fails with X3531.
  The working form is eight separate Texture2D tev_tex0..7 plus an if-chain sampler helper.
* KNOWN LANDMINE: a rare, unexplained STATUS_HEAP_CORRUPTION (0xC0000374) around frame 840 in the
  title sequence. One run died, the identical command right after passed all 2400 frames. If it
  reproduces, run TLS_ALLOC_PROBE=1 + TLS_TAIL_RING; it has the shape of the §5c.9 failures.
* Open question, cosmetic: Dolphin's per-copy dump suffix may be the raw tpf rather than
  tp_realFormat (a 160x112 destination is written `_1` while the host computes real_format 8).
  Both map to 1 byte/pixel so the copy is correct either way; settle it only if a 2-byte format
  (RA8 3/9, RGB5A3 5/11) looks wrong, using the evidence already in the handover (pitch=160 with
  a 320-wide `_6` destination implies 4 bytes/px).

GO. Do not stop to ask; commit per change; keep the handover current.
