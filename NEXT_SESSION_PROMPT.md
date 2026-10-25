MISSION CONTINUATION — Project The Maybe(Not) Last Story (G:\Program\Project The Maybe(Not) Last Story,
native PC recompilation of The Last Story / Wii SLSEXJ)

Work autonomously, do not stop to report, measure instead of guessing, commit per logical change with
the numbers in the message, keep the build green, write findings into DEEPSEEK_HARNESS_HANDOVER.md as
you make them. 0 changes to src/.

=====================================================================
0. STATE YOU INHERIT — and the invariant, stated correctly
=====================================================================

Start at a63a587 (three commits on 80a10a8: 8bf9313 mode-25 handover + capture plumbing, a0cd048 and
a63a587 handover 5c.25). Tree clean, build green, src/ untouched.

THE CHAIN NOW GOES END TO END FARTHER THAN ANY PREVIOUS SESSION: title -> save dialog -> Yes -> save
create -> mode 25 -> SetNextSequence('Game') -> GameLoadTask -> Chapter 1 opening. Measured with
screenshots, not inferred. What it does NOT do is leave the Chapter-1 intro (item 2 below).

THE INVARIANT — this is the recipe; the one you were probably handed is wrong:

    TLS_INPUT_SCRIPT='600-612:A,900-912:A,1200-1212:A' TLS_SHOT_FRAMES=1448 `
      .\build\recomp\tls_runner.exe --window --frames 1452
    & $py tools\cmp_ref.py build\recomp\d3d11_screenshot_1448.ppm

    expect  mean=(102,188,205) p10 69 p50 203 p90 203 p99 206      (a (2,2,2) reading = stale file)

Two traps that cost the last session its first hour:

  * --window IS MANDATORY FOR PICTURES. init_display_window() is the only caller of
    gfx_backend_init(), so --headless never calls d3d11_present() and TLS_SHOT_FRAMES /
    TLS_DUMP_EVERY silently do nothing. Headless can tell you guest logic; it can never tell you a
    picture. A dump file on disk may also be from an older session — check its mtime or delete first.
  * the 1448 invariant is the SAVE DIALOG (p50 203 is its flat plate), so it needs the 3-A plan. An
    idle boot at the same present is (2,2,2). "The baseline moved" is usually "the input plan was
    missing".

The bundled python has Pillow; the system python does not:
    $py = "C:\Users\hypha\.dsh\dsh-runtimes\dsh-primary-runtime\dependencies\python\python.exe"

Env vars do not persist between shell calls: set them in the same call as the run, and clear stale
TLS_* ones first (a leftover TLS_DEFER_EFB_COPY / TLS_INPUT_SCRIPT changes everything silently).

=====================================================================
1. READ FIRST
=====================================================================

  a. DEEPSEEK_HARNESS_HANDOVER.md §5c.25 in full. It supersedes §5c.24 §13 ("mode 25 is a logic dead
     end" — refuted 3x) and corrects §5c.24's reproduction recipe.
  b. §5c.24 §1-§3 for the save-data chain (still correct) and §5c.23 §1 for the EFB-alpha/bloom defect.
  c. AGENTS.md §4 (CMPR alpha contract).

Do not re-derive the save-data verdict. It is finished: the dialog is the game's ordinary first-boot
confirm, answering Yes runs the whole create path, and the HLE stubs were never its cause.

=====================================================================
2. THE LIVE THREAD — the Chapter-1 scene state machine (start here)
=====================================================================

Past frame ~3500 the picture settles into an animation loop with a PERIOD OF 600 FRAMES (10 s) and
still loops at 12000. Measured by 500/600-step sampling: 5401 == 6001 == 6601 (f90e93d2),
6201 == 5001 (46265b45), 7001 == 4001 (ea706980); 1000-frame strides never match.

It is NOT that the scene is waiting for a *direction* or START — but it IS waiting for input:
5c.27 measured that an **A press at frame 3400** opens the phase-0 gate and moves the machine to
phase 13 (see §2's ">>> DONE" block). What was measured in the bullet list below is that the
*picture* never changes, which is a different statement from "no input reaches a handler".
  * A every 100 frames, 1900..6900: no change.
  * START/PLUS at 5000/6000: no change.
  * HOLDING UP for 1000 frames (4000..5000): 4501/5001 come back byte-identical to the no-input run.
No direction, no A, no START reaches a handler. Find out why, or what the scene is waiting for.

What runs each frame: TLS_TRACE_FROM=4000 shows the sequence manager (0x80BB5CC0) and one task object
0x81127AE0 (vt 0x8078A3D0) calling 0x80368280 — a large SCENE STATE MACHINE that advances a counter at
+0x5744 and dispatches on a state word at +0x5538 through the jump table at **0x8078A268** (states 0..9).
The task list stays at ONE game task for the whole loop, so no player/scene/battle task is ever created:

    [0] GameLoadTask  task=0x80AEDCF0 up=0x80570CFC +1c=(~0.85/frame) +34=1
    [1] vt=0x00000000 task=0x80B8DD10 up=0x80363DBC
    [2] vt=0x00000000 task=0x80B8DD10 up=0x803646C4
    Sequence: 'UnknownSeq'   Streaming Queue: idle

Put the instrument on +0x5538 / on that state's wait condition — exactly the move that paid off on
task+0x2AC this session: a rate-limited dump on change, gated by a TLS_* flag, inert by default, and
decoded from the jump table first. `python tools/dol_xref.py dis <addr> [count]` reads any of these
addresses; that tool is how this session's gates were quoted from the binary instead of guessed.

>>> DONE — read 5c.26 AND 5c.27 BEFORE redoing any of this, and note that 5c.27 supersedes two
things below. The instrument exists (`TLS_SCENE_SM_PROBE=1`) and the thread has moved:
  * the outer table is 0x8078A268, not 0x8079A268 (see below);
  * there is a SECOND table at 0x8078A22C dispatching on +0x54E4 (0..14), which is what actually
    drives the Chapter-1 intro: PHASE 8 -> 0 at frame ~3380;
  * **the gate is an A-BUTTON EDGE, not an event flag.** `fn_800A555C` bit-tests the pad trigger
    word at `*(r13-26280)+0x3C28`; code 4 -> bit 11 = A. Measured: an A press at frame 3400 opens
    it, `fn_803E4478` runs, and **PHASE 0 -> 13** with +0x54F0 going 2 -> 0 (that +1 is the outer
    state Init installs). 5c.25 §4a's "input does nothing" is refuted — the PICTURE stays the same,
    which is a different statement.
  * where it stops now: phase 13's waiter object `0x81858DE0` (created by `fn_805B9F54`) holds
    `+0x88 == 1`, and phase 13's only two exits need `+0x88 == 0` or `+0x88 == 4`. Its shared tail
    cannot help: `fn_8036E170` returns 0 unless the phase is 0, 3 or 14.
The live question: **what moves `0x81858DE0 + 0x88` from 1 to 4** — and is phase 13 even the right
successor, given `fn_8036E170` only accepts 0/3/14? Script ids 167 (`0x80376524`) and 319
(`0x80376540`) are the search keys.
Also: cmd-16 style gates are **one-update edges** — press, release, press again; a held button
cannot retry.

=====================================================================
3. THREE DEFECTS ALREADY QUANTIFIED (independent of §2)
=====================================================================

(a) EVERY SECOND PRESENTED FRAME IS A STALE FRAMEBUFFER. No input past 1812, windowed:
      4001 live ea706980   4002 stale 28089bce
      4003 live a9628239   4004 stale 28089bce
      4051 live 2539003d   4052 stale 28089bce
    The stale image is an older scene (purple crystal + creature): docs/evidence/parity_nopress_4002.png.
    With input pressed the parity swaps (odd frozen, even live) but the frozen content is the same
    picture. VISetNextFrameBuffer is NEVER called (zero [TLS VI] lines), so g_last_vi_framebuffer stays
    0 and the YUYV fallback decodes the fixed 0x900997E0. **However — 5c.26 §5 refutes the second half
    of that: gx_vtx is never 0 in the Chapter-1 loop (~44.3k on even presents, ~276k on odd), and
    d3d11_present only decodes the guest XFB when gx_vtx_count == 0, so the software fallback is never
    taken. The stale frame comes out of the GX path.** Start from TLS_PRESENT_PROBE=1 plus
    TLS_PRESENT_WINDOW=<start>,<count> (prints every present — a 100-present cadence cannot show a
    parity), and dump the drawn batch list / which back buffer is flipped, not the VI framebuffer.

(b) [EfbCopy] destination format 0 / 1 not implemented, writing RGBA8 — the Chapter-1 chain hits it
    (dst 0x91FF73A0, 0x91FFF3A0, 0x92001BC0, ...). **FIXED for format 1 in 5c.26 §6** — format 1 is
    R8, i.e. the same 32-byte 4x4 tile already implemented as 8, so `case 1: bpp = 1` plus
    `(format == 8 || format == 1)` in the writer plus a `case 1` in `efb_dst_decode_texel`. Measured:
    those eight lines are gone from the Chapter-1 log. Format 0 is R4 (8x8 tiles — a genuinely
    different layout) and is deliberately still on the fallback, because there is no reference to
    validate a nibble order against. Implement it only with a TLS_EFB_CHAIN check that decodes the
    destination back (source avg vs destination avg; judge against the copy's own source rectangle,
    not against taste).

(c) THE TITLE INPUT FLOW HAS A RACE. The same plan produced 6->7 (Yes) at frame 1501 in 7 of 8 runs and
    6->4 (No) at 1282 in 1, with NO press at 1282; when it happens every later A cancels the re-raised
    dialog, the game never reaches Chapter 1, and the frames from 1300 on differ (full white bloom
    instead of the flat plate). The guest polls the pad several times per frame while the script is
    indexed by host frame. Repeat any run 3x before believing a flow difference.

=====================================================================
4. WHERE THE CHAIN IS, EXACTLY (reproduce this before touching anything)
=====================================================================

    TLS_INPUT_SCRIPT='600-612:A,900-912:A,1200-1212:A,1440-1452:UP,1500-1512:A,1600-1612:A,1700-1712:A,1800-1812:A' `
    TLS_MODE25_PROBE=1 TLS_DUMP_EVERY_G=250 `
      .\build\recomp\tls_runner.exe --window --frames 6000

    modes:  1->2 f901  2->3 f961  3->4 f962  4->5 f1201  5->6 f1202  6->7 f1501  7->8 f1502
            8->9 f1503  9->11 f1584  11->12 f1601  12->16 f1631  16->17..22 f1632..1638  22->25 f1639
    mode25: gate-A counter = 60 at f1698, gate-B handle releases at f1728,
            SetNextSequence('Game') at f1728 (lr = 0x80535D04)
    after:  title task unregistered, CreateGameTask, preload/game_start_dg.pk 6,464,516 B, 30 decompress
    frames: 2251 "Chapter 1 / Reptids' Cave" card | 3251 cave fly-through | 4001+ the 600-frame loop

Mode 25 is jump table 0x807939B8[25] = 0x80535B14:
    obj = *(task+0x2C8); if (*(obj+76) < 60) return;              // gate A
    if (fn_800CB538(task+0x284) != 0) return;                     // gate B (handle busy)
    ... switch (*(task+0x2B4)) { 0,1: fn_80572B70(mgr,"Game"); 2: ..."Multiplayer" }
Mode 11 (0x805351F0) is input-gated: the A presses at 1600/1700/1800 are what walk 11 -> .. -> 25.

=====================================================================
5. INSTRUMENTS ADDED LAST SESSION
=====================================================================

  * TLS_MODE25_PROBE=1 — mode-25 gate dump (task+0x2C8, *(obj+76), the +0x284 handle chain, +0x2B4),
    on change + every 120th update, plus every fn_800CB538 call for that handle.
  * TLS_PRESENT_PROBE=1 — per-present count / guest frame / gx_vtx / take_shot (100-frame cadence).
  * TLS_SCENE_SM_PROBE=1 (5c.26) — the Chapter-1 scene machine: +0x5538 (outer state) and +0x54E4
    (phase) on change, +0x5744/+0x5748/+0x4424, per-handler hit counters, and the two operands of the
    phase-0 gate. This is the instrument §2 asked for; it is already written.
  * TLS_PRESENT_WINDOW=<start>,<count> (5c.26) — print EVERY present in a window. A 100-present
    cadence cannot show a parity defect; this can.
  * tools/chain_run.ps1 (5c.26) — runs the chain and retries until `SetNextSequence('Game')` actually
    appears. **Use it for every Chapter-1 measurement**: a run that died on the input race prints no
    probe output at all and reads exactly like "the probe is broken".
  * TLS_DUMP_EVERY_G=<n> — capture cadence in GUEST FRAMES (TLS_DUMP_EVERY stays in presents; they
    diverge after the handover: ~2800 presents in 6000 frames).
  * TLS_SHOT_FRAMES matches a value against the present count OR the guest frame.
  * tools/shot_stats.py — mean/p50/hash per capture on one line. Use the HASH, not the mean: two
    different scenes can share a mean, which is exactly how the parity defect stayed hidden.
  * tools/dol_xref.py (existing) — dis / strings / addr. Use it instead of guessing at constants.
    `dis` decodes `addi rD, rA, imm`; note `addi rD, 0, imm` is `li rD, imm` (a literal, NOT a copy
    of r0) — reading that as a register copy sent this session down the wrong switch arm for a run.

=====================================================================
6. DO NOT RE-TEST (refuted, finished, or now optional)
=====================================================================

  * "Mode 25 is a logic dead end." Refuted 3x; it hands over at f1728. After the handover the title
    task is unregistered, so task+0x2AC keeps its last value (25) forever — reading that field is not
    evidence the title is alive. Pair every "still in mode N" claim with the frame number and whether
    the task is registered.
  * The fabricated save file; the NAND/ISFS stubs as the cause of the dialog; the XF texcoord path as
    the title vignette's cause; BP 0x30..0x3F TCInfo; gamma; composite z-testing; the copy servicing
    model; the white blob's geometry. All still refuted (§5c.22-5c.24).
  * Implementing ISFS commands 4/6/8/12 is now OPTIONAL — the default path no longer needs them to
    reach the game. Do not spend a session there unless something actually blocks on it.

=====================================================================
7. HABITS THAT COST TIME IF SKIPPED
=====================================================================

  * Render the frame you are about to measure, and say which screen it is.
  * Validate the RUN before interpreting the probe: check the log for `SetNextSequence('Game')`
    (or use tools/chain_run.ps1). The title input race makes ~1 run in 8 stop at the dialog, and
    such a run prints no Chapter-1 probe lines at all — which looks exactly like a broken probe.
    It also makes the 1448 invariant check itself report the white bloom
    (mean 120,234,255 instead of 102,188,205) about one run in four. Re-run before believing a
    mismatch on either.
  * Build fails with PermissionError on objects.rsp? Check `whoami /groups` for
    "Mandatory Label\Low". It is the session TOKEN, not the file ACL, and it cannot be repaired
    from inside a Low session — the shell has to run at Medium (5c.26 §0).
  * Dump CONSECUTIVE frames, not only strided ones — the parity defect above only shows at n, n+1.
  * Read a probe's field order from the CODE, not from its label (5c.24 §11 got the TEV map order
    backwards that way).
  * Rate-limit every probe inside per-frame/per-vertex code; gate it with an env var, inert by default.
  * Rates: ~30 s for 1452 frames windowed at 60 fps; 6000 frames ~2 min; build ~1 s. Shaders only need
    `python tools/compile_shaders.py` when you touch HLSL.
  * Verify the invariant after every change, including the last one before you stop.

GO. Do not stop to ask; commit per change; keep the handover current.
