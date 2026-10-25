MISSION CONTINUATION — Project The Maybe(Not) Last Story (G:\Program\Project The Maybe(Not) Last Story, native PC recompilation of The Last Story / Wii SLSEXJ)

Work autonomously and do not stop to report. Measure instead of guessing, commit as you go, keep the build green, and keep going until your context is nearly exhausted. Write findings into DEEPSEEK_HARNESS_HANDOVER.md immediately as you make them, not at the end. Finish only with a short summary of what changed and what is next.

=====================================================================
0. SESSION SETUP — DO THIS FIRST, IT COSTS ~20 MINUTES IF YOU DON'T
=====================================================================

This workspace is writable ONLY if the file sandbox is not in workspace-write mode.
Under workspace-write the shell runs at Low integrity while every directory created
before ~Oct 2 still carries the Mid integrity label, so writes to build/, recomp/,
tools/, docs/, src/ fail with "Access is denied" even though the DACL grants
PHATS\hypha:(F). This is NOT a permissions problem you can fix from inside the sandbox.

Verify:
    Set-Content build\recomp\_t.txt x ; Remove-Item build\recomp\_t.txt

If that fails:
  - Either get the session switched to full access, or
  - run once OUTSIDE the sandbox:
        icacls "G:\Program\Project The Maybe(Not) Last Story" /setintegritylevel "(OI)(CI)low" /T /C /Q
    (measured: 34872 files fixed, 818 under tools/w64devkit stay denied, which is harmless)

Then confirm the build:
    python tools/recomp_harness.py build-runner          # ~1 s, chunks already lifted
    python tools/compile_shaders.py                      # only if you touch HLSL

PowerShell: env vars DO NOT persist between tool calls (fresh process each time). Set them in
the SAME call as the run, and clear stale ones when switching scenarios — a leftover
TLS_TEV / TLS_DEFER_EFB_COPY / TLS_INPUT_SCRIPT silently changes the whole run. Use
    Get-ChildItem env: | Where-Object { $_.Name -like 'TLS_*' } | ForEach-Object { Remove-Item "env:$($_.Name)" }

For screenshots, the system python has no PIL. Use the bundled one:
    $py = "C:\Users\hypha\.dsh\dsh-runtimes\dsh-primary-runtime\dependencies\python\python.exe"

=====================================================================
1. READ FIRST, IN THIS ORDER
=====================================================================

  a. DEEPSEEK_HARNESS_HANDOVER.md — the "READ THIS FIRST" block at the top, then §5c.16 in
     full (subsections 1–11). §5c.16 is the current state. Everything before §5c.12 is history
     and contains disproven claims.
  b. AGENTS.md — the CMPR alpha contract, and the note that the TEV stage is no longer absent
     (it is implemented and opt-in; see 5c.16).
  c. build/ref/BPMemory.h — vendored Dolphin reference. It is the authority for every GX BP
     register field layout. Also build/ref/PixelShaderGen.cpp for the TEV/konst semantics.

=====================================================================
2. STATE AT SESSION START
=====================================================================

commit 2dcdc13, tree clean, build green, shaders rebuilt.
Six commits landed in the previous session (0d4699f..2dcdc13).

The DEFAULT PATH IS UNCHANGED and must stay that way. All new behaviour is behind env flags:
    TLS_TEV=1                  evaluate the GX TEV combiners (new pixel shader, ps_5_0)
    TLS_GX_ALPHA_BLEND=1       alpha channel follows the guest's CMODE0 factors (no measurable
                               effect yet; more correct, costs nothing)
    TLS_DEFER_EFB_COPY=1       replay EFB copies in stream order instead of inline
    TLS_TEV_PROBE=<frame>      print the decoded TEV state + sampled texture averages + NDC
                               bounds of every batch of that frame
    TLS_TEV_PROBE_FROM=<n>     only batches >= n (the composite tail is far less noisy)

What was accomplished: the GX TEV stage exists. BP 0xC0..0xDF / 0xE0..0xE7 / 0xF6..0xFD / 0xF3 are
decoded and evaluated per pixel, driven by a per-batch state snapshot. Measured: the 3D batches
really run 3..9 TEV stages over up to 6 texmaps, so the old single-stage `tex*vertexColour` shader
was wrong for nearly all geometry. With TLS_TEV=1 TLS_DEFER_EFB_COPY=1 the MENU now renders its
gold MENU / CONTINUE / NEW GAME / MULTIPLAYER text over a bloom (docs/evidence/22-…) instead of a
flat cyan field; TEV alone changes nothing (identical attract average), so it is a pure superset.

=====================================================================
3. THE OPEN QUESTION — THIS IS THE GATE
=====================================================================

The MENU and attract backgrounds are still a large white radial glow where the real game shows a
dark cave with a modest glow (docs/evidence/24-attract-1000-c.png vs 24-attract-1000-a.png).

The escalation is now FULLY ACCOUNTED FOR by three passes (5c.16 §10 table):

    b32/b33  replace                 put the scene copy back                       frame 42
    b34      SRCCLR/ZERO  dst=src*src  the bright pass: squares the frame, darks->0   frame 0
    b35/b36  SRCALPHA/ONE add        add the squared (black) frame's blur           frame 0
    b37      REPLACE                 THROWS THE SQUARED FRAME AWAY, puts back a
                                     160x112 copy taken BEFORE b34 (avg 34)          frame 34
    b38      ONE/ONE  dst = src+dst  EXACTLY DOUBLES THE FRAME                        frame 68
    b39..b47 additive                each adds ~a copy of an already-saturated frame  -> 255
    b51      SRCALPHA/INVSRCALPHA    drags the whole screen back to a flat level     ~90

Already ELIMINATED by measurement — do not re-test these:
    * TEV stage evaluation          (implemented, correct, not the bloom)
    * texcoord aliasing             every batch reports texcoord_mask=0x01; the guest supplies
                                    NO TEX1..TEX7 at all, so a wider GxVertex would be pointless
    * EFB / texture alpha           every sampled texture is a=255 (probe reports alpha)
    * GX alpha blending             TLS_GX_ALPHA_BLEND=1 changes 90 -> 93, alpha saturates anyway
    * quad geometry                 all tail batches are genuinely fullscreen, ndc=(-1,-1)-(1,1)
    * cross-frame accumulation      brightness does NOT grow with frame number

So the remaining question is a REFERENCE question, not something findable from inside the pipeline:
does GX hardware reach 1.0 the same way when the guest issues b37's replace and b38's ONE/ONE at
those vertex marks?

  If YES  -> the host is faithful, the attract phase really is a bright flash, and the work moves
             to texcoord GENERATION (BP 0x30..0x3F + XF texture matrices — the host has none, and
             it is the biggest 3D inaccuracy left) and to TEV compare stages (bias==3, 14 writes
             per MENU frame, currently pass-through).
  If NO   -> the EFB-copy SERVICING POINT is the suspect: GX may service a copy at the end of the
             display list rather than at the command, which the vertex-mark replay cannot express.

=====================================================================
4. TASK 1 (do this first): capture a Dolphin reference frame
=====================================================================

Everything needed exists:
    G:\Program\Dolphin-x64\Dolphin.exe          (exists)
    Run_TheLastStory_In_Dolphin.bat             (launches it on roms\TheLastStory.iso)
    %APPDATA%\Dolphin Emulator\ScreenShots\     (exists, EMPTY — no reference yet)
    %APPDATA%\Dolphin Emulator\Dump\Frames\     (exists, EMPTY)
    %APPDATA%\Dolphin Emulator\Logs\dolphin.log (the only artefact from the earlier reference run)

Capture the attract/MENU moment with Dolphin's Save Screenshot / Dump->Frames, then compare the
same phase against our runner. This is the gate for all further composite work — do not flip any
default before it. If Dolphin cannot be driven non-interactively, say so explicitly in the
handover and fall back to task 2 rather than guessing.

Useful our-side recipe while you are at it:
    Remove-Item SaveData\savedata.dat -ErrorAction SilentlyContinue
    $env:TLS_INPUT_SCRIPT="600-612:A,900-912:A,1200-1212:A,1300-1312:UP,1350-1362:A,1500-1512:A"
    $env:TLS_TEV="1"; $env:TLS_DEFER_EFB_COPY="1"; $env:TLS_SHOT_FRAMES="1448"
    build\recomp\tls_runner.exe --window --frames 1452 --fps 60 --no-audio
Frame numbers drift ±150 between runs (the title sequence is wall-clock paced) — ALWAYS re-measure
a probe frame in the run that produced it, and never trust a hardcoded frame from the handover.

=====================================================================
5. TASK 2: the post-handoff stall (§5c.12) — the gateway to Chapter 1
=====================================================================

Unchanged all session. After GameTask::Init (81 calls, last ~frame 1882) the engine stops
dispatching the game task, issues no more DVD reads (one request stuck at status=1), draws
nothing, yet burns the whole 321k-block budget every frame.
Already ruled out by measurement: the TLSF allocator, a single hot loop, a lost wakeup.
Next: resolve the top TLS_PC_HIST PCs to functions with build/resolve.py (resolves an address via
config/symbols.txt), and tap StreamManager::Update (0x8046DD60) after frame 1882.

=====================================================================
6. TASK 3: Chapter 1 rendering and visual parity
=====================================================================

355 Dolphin texture dumps in %APPDATA%\Dolphin Emulator\Dump\Textures\SLSEXJ. Compare DECODED
textures, not eyeballed screenshots. The two boot-time non-code dispatches (0x005F2A10 / 0x005F2A90,
lr=0x805F2F18/48) still deserve a name — cheap win.

=====================================================================
7. INSTRUMENTS (all inert unless set — prefer these over new code)
=====================================================================

TLS_TEV_PROBE=<frame> [+_FROM=<n>]  decoded TEV state, sampled texture average RGB+A, NDC bounds
TLS_BATCH_PROBE=<frame>             avg framebuffer colour + col0 after every batch (the workhorse)
TLS_BATCH_CUTOFF=<n>                draw only the first n batches: scene problems vs composite ones
TLS_EFB_SAMPLE_FRAME=<frame>        what each EFB copy actually captured
TLS_DRAW_ORDER=1                    copy/draw interleaving
TLS_DEFER_EFB_COPY=1                replay copies in stream order
TLS_EFB_PREV_FRAME=1 / TLS_EFB_COPY_PROBE (+_FROM) / TLS_EFB_DUMP
TLS_GX_ALPHA_BLEND=1                alpha follows the guest's CMODE0 factors
TLS_TEX_PPM="0xADDR,W,H;..."        dump a decoded texture
TLS_F900_PROBE (+_FRAME)            BP dump with pc=/lr=  (this is how call sites are identified)
TLS_PC_HIST (+_FROM) / TLS_ALLOC_PROBE / TLS_SAVE_PROBE / TLS_WAIT_PROBE / TLS_LOSTWAKE_PROBE
TLS_TAIL_RING / TLS_MEMCPY_PROBE / TLS_NO_FRAME_CLEAR / TLS_EFB_CLEAR_BLACK / TLS_FB_RGB565

=====================================================================
8. RULES THAT HAVE ALREADY COST TIME
=====================================================================

* 0 changes to src/ (decompiled ground truth — but READ it: src/GXFrameBuf.c is the real GX copy
  API in asm, src/GXTev.c is the real TEV setter API).
* Never hand-edit build/recomp/generated/chunks as a fix. A throwaway printf instrument is allowed
  if you immediately re-lift.
* Never mutate guest state to "make progress", and never fabricate an answer the guest asks for.
* Never guess a low-memory constant — derive it from asm/ldscript.lcf and check against
  OSThread.stackBase/stackEnd.
* Never flip a default on a guess. The default must stay visually identical to 2dcdc13 (and
  0d4699f/510426d) until a probe proves the new path is closer to hardware. A previous session
  twice reverted changes that "looked more correct" but measurably regressed the attract screen.
* Rate-limit any probe inside per-frame or per-vertex code: gate it with an env var and a count
  cap, inert by default.
* Commit per logical change in the repo style (feat/fix/debug/docs(5c.N)): what was measured, what
  changed, what the numbers were. Keep the tree clean.
* HLSL gotcha: an array of Texture2D indexed dynamically inside the TEV stage loop makes
  D3DCompile fail with X3511 (forced to unroll); marking the loop [loop] then fails with X3531.
  The working form is eight separate Texture2D tev_tex0..7 plus an if-chain sampler helper.
* KNOWN LANDMINE: a rare, unexplained STATUS_HEAP_CORRUPTION (0xC0000374) around frame 840 in the
  title sequence. One run died, the identical command right after passed all 2400 frames. If it
  reproduces, run TLS_ALLOC_PROBE=1 + TLS_TAIL_RING; it has the shape of the §5c.9 failures.

=====================================================================
9. SUGGESTED ORDER
=====================================================================

  1. Fix the sandbox (§0). Confirm build green.
  2. Task 1: Dolphin reference frame, compare, and settle the b37/b38 question. Write the verdict
     into §5c.17 the moment you have it.
  3. Whichever branch §3 sends you down (composite servicing point, or texcoord generation +
     TEV compare stages).
  4. Re-test the "ink matte" and "baseline subtraction" hacks in recomp/gfx_d3d11.c — they are
     local patches over the TEV gap and may now be removable.
  5. Task 2 (Chapter 1 gateway), then Task 3.

GO. Do not stop to ask; commit per change; keep the handover current.
