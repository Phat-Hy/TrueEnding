# DeepSeek Harness Handover Dossier: Project The Maybe(Not) Last Story

> ## READ THIS FIRST (state at commit `a12ec93`)
>
> **Sections 3–5b are historical.** They contain claims that were later disproven (the CMPR luma
> fallback, the "task vtable zeroed" theory, the `+0x2AC` state machine, the anime-track clamps).
> **§5c supersedes all of them** — read §5c.9 (the frame-829 stall) and §5c.10 (input), which
> describe the current state.
>
> **The frame-829 stall is fixed.** Its cause was neither the scheduler nor a lost wakeup: the host
> hardcoded the MEM1 arena low to `0x8088A000`, which is inside the boot thread's own stack, so the
> engine's 1 MB heap grew through live stack and at frame 830 an allocation returned a stack address.
> `fn_800838B8` stored it and returned through its clobbered save slot, and the boot thread executed
> string data as code (§5c.9). The arena low is now derived from the DOL (`0x8089B3C0`, the layout
> `asm/ldscript.lcf` defines). After the fix:
> - a 2400-frame run keeps `SequenceManager::Update` to frame 2398, `GameTask::Init` ends at 1032 and
>   `GameTask::Update`/`Draw` run to 2398, with 200k–300k GX vertices per frame;
> - **the title screen runs continuously and completely**: 3D cave-and-lake backdrop, the hero standing
>   in front of it, the sword/ring emblem, glowing particles, and the MENU / CONTINUE / NEW GAME /
>   MULTIPLAYER layout with its Japanese sublabels. Evidence: `docs/evidence/08-title-menu-frame500.png`,
>   `09-title-backdrop-frame1200.png`, `10-title-hero-cave-frame2200.png`,
>   `11-title-backdrop-frame1500.png` (the runner also writes `build/recomp/d3d11_screenshot_*.ppm` at
>   frames 100…1800 on every windowed run, and `TLS_SHOT_FRAMES=<n,...>` adds more);
> - no stray sentinel, no non-code dispatch after the two known boot-time ones, no exception.
> - `TLS_ARENALO=0x8088A000` restores the old behaviour exactly (`Init` 31 calls, last 829, stray
>   sentinel), so the fix is A/B verifiable.
>
> **What the scene is, precisely.** The cave/lake vista is the *title screen's* 3D backdrop, not Chapter 1
> (the series' title screen is a cave with a lake and sky through the opening). The engine is running the
> title sequence end to end: `GameTask` is its frame host, and the taps `GameTask::Init` →
> `Update`/`Draw` are that sequence running. **Chapter 1 has not been reached yet** — leaving the title
> requires the menu's own state machine to accept a real button press, and the synthetic `sim_press`
> in `0x800A555C` does not do that (it walks the title between modes 1→25 and submenus such as
> "NEW TUTORIAL" without ever handing off). Reaching gameplay needs a frame-indexed deterministic input
> script feeding the same host input state the keyboard feeds (§5c.3), not another guest-state poke.
>
> **Also corrected:** §5c.8's "single next target" (the host-callback sentinel leak) was a *symptom* of
> that stack corruption, not a cause. The leak itself has never been observed; it is now repaired if it
> ever happens (`host_repair_sentinel_in_thread`, `TLS_HOSTCALLBACK_PROBE`).
>
> **Where the work stands / next targets.** The engine runs the title sequence, draws it correctly, and
> now accepts real input (§5c.10). Open items, in the order they are worth attacking:
> 1. Make the menu choose NEW GAME. `TLS_INPUT_SCRIPT="500-512:A"` moves the title's mode machine, but
>    mode 1→2 (`SetMode(2)`) is gated by a bit-extract at `0x80534294` whose tested bit is still
>    unexplained — §5c.10 ends with the single measurement that settles it.
> 2. Visual parity of the title: the lake/water surface shows large black regions and a pink sky
>    reflection (`10-title-hero-cave-frame2200.png`).
> 3. The two boot-time non-code dispatches (`0x005F2A10`, `0x005F2A90`, both `lr=0x805F2F18/48` at
>    frame 0) are still handled by the generic safeguard and deserve a name.
>
> **First commands.**
> ```powershell
> git log --oneline -8                                  # f52de56..a12ec93 are the current session
> python tools/recomp_harness.py build-runner           # chunks are already lifted; ~1 s
> $env:TLS_INPUT_SCRIPT="500-512:A,700-712:A"
> build\recomp\tls_runner.exe --window --frames 2100 --fps 60 --no-audio
> ```
> Passes frame 830, draws the title, and drives its mode machine with the script. Screenshots are written
> automatically at frames 100…1800 (`TLS_SHOT_FRAMES=<n,...>` adds more). If `build-recomp` writes are
> denied, the workspace sandbox needs full file access for this session (see §5c.4 note).
>
> **Rules that have already cost time.** Never hand-edit `build/recomp/generated/chunks` — re-lift.
> Never mutate guest state to "make progress" — the probes in §5c.4 and §5c.9 exist so measurement
> replaces that. Never guess a low-memory constant (`0x8000310C`, `0x80000030`): the guest's `OSInit`
> trusts it and the linker script in `asm/ldscript.lcf` defines the truth — derive it, and check it
> against `OSThread.stackBase/stackEnd`.
> `build/` is git-ignored, so a fresh checkout must run `python tools/recomp_harness.py lift`.

---

**Date**: October 24, 2026  
**Target Title**: *The Last Story* (Wii / RVL-SLSE-USA / SLSEXJ)  
**Workspace**: `G:\Program\Project The Maybe(Not) Last Story`  
**Primary Goal**: Achieve 1:1 visual parity with Dolphin reference emulation and ensure smooth, crash-free interactive gameplay into Chapter 1 (Gurgan Cave).

---

## 1. Non-Negotiable Project Constraints
- **STRICTLY 0 CHANGES TO `src/`**: The decompiled C source tree in `src/` must remain pure and unmodified.
- **Allowed Edit Scope**:
  - `recomp/` (Native PC runner, D3D11/D3D12/GDI backends, GX pipeline processor, HLE OS replacements).
  - `tools/` (Shader compilation scripts, build harnesses, offline telemetry scripts).
  - `build/recomp/chunks/` (Generated recompiled C chunks from `DolRecomp`).

---

## 2. Fast Build & Run Reference

### A. Compile D3D11 HLSL Shaders
```powershell
python tools/compile_shaders.py
```
*Generates:* `build/recomp/gx_shaders_d3d11.inl` (VSMain, PSOpaque, PSAlpha).

### B. Build Native PC Runner Executable
```powershell
python tools/recomp_harness.py build-runner
```
*Build toolchain:* `tools\w64devkit\bin\gcc.exe` (MinGW-w64).  
*Output binary:* `build\recomp\tls_runner.exe` (~99.75 MB).

### C. Launch Native Game (Interactive Play)
```cmd
Play_TheLastStory.bat
```
*Or directly via CLI:*
```powershell
build\recomp\tls_runner.exe --window --fps 60
```

### D. Reference Emulation Run (Dolphin)
```cmd
Run_TheLastStory_In_Dolphin.bat
```
- **Dolphin Binary**: `G:\Program\Dolphin-x64\Dolphin.exe`
- **Game ISO**: `roms\TheLastStory.iso`
- **Dumped Reference Textures (354 dumped)**: `%APPDATA%\Dolphin Emulator\Dump\Textures\SLSEXJ\`
- **Reference Telemetry Log**: `%APPDATA%\Dolphin Emulator\Logs\dolphin.log`

---

## 3. Architecture Overview & Current State

```
                      Wii Game Disc (SLSEXJ main.dol)
                                    │
                       DolRecomp (tools/dolrecomp.exe)
                                    │
                                    ▼
       ┌────────────────────────────────────────────────────────┐
       │   459 Lifted C Chunks (build/recomp/generated/chunks/) │
       └────────────────────────────┬───────────────────────────┘
                                    │
                                    ▼
       ┌────────────────────────────────────────────────────────┐
       │     HLE Execution Engine & Hardware Abstraction        │
       │  - OS / Memory / Threads / Alarms: recomp/replacements.c│
       │  - Audio Subsystem: recomp/audio_player.c (waveOut)    │
       │  - GX Command Stream: recomp/gx_pipeline.c             │
       │  - Hardware Renderer: recomp/gfx_d3d11.c (D3D11)       │
       └────────────────────────────┬───────────────────────────┘
                                    │
                                    ▼
                  Native PC Window (build/recomp/tls_runner.exe)
```

### Real-Time Interactive Execution Status (Current Ground Truth)
> [!CAUTION]
> **Headless vs. Real-Time Discrepancy**: While offline automated tests can force frame advances and dump offscreen rasterizer buffers (such as frame 900), **real-time interactive execution via `Play_TheLastStory.bat` currently produces a black screen** for the player.
> Telemetry dumps from interactive sessions (`d3d11_screenshot_100.bmp`, `200.bmp`, `1100.bmp`, `1200.bmp`) confirm **0 non-zero pixels (100% pitch black)** during real-time gameplay.

#### Specific Pipeline Blockers Identified:
1. **Boot Screen Blackout (Frames 0–240+)**:
   - `gx_vtx_count == 0` during boot while assets load.
   - In `recomp/gfx_d3d11.c` (line 1178), the fallback software XFB display quad was disabled with `#if 0`, so the backbuffer remains solid black instead of showing boot notices or progress.
2. **Post-Processing EFB Fullscreen Stomping**:
   - In the title sequence, batches 7–16 issue fullscreen quads (`dst_factor == 0` and `dst_factor == 1`) sampling textures (`0x903917C0`, `0x903D77C0`).
   - Because EFB-to-RAM copies are not fully mapped to host textures, these quads sample black memory and overwrite previously rendered 2D/3D geometry.
3. **Menu & Input Transition Stalls**:
   - `StrapTask::Update` (`0x805A646C`) conditions prevented smooth auto-advancing into the Title Menu when `st != 0`.
   - `PadManager` polls channel 3 (`chan == 3`), requiring proper multi-channel latching in `KPADRead`.
4. **Chapter 1 GameTask Virtual Table / Jump Invalidation**:
   - Upon transitioning sequence to `'Game'` (`0x80535D04`), `CreateGameTask` encounters unmapped or corrupt jump addresses.
   - `TLS Safeguard` bypasses these calls, but the rendering task ceases pushing to the queue, causing the main thread to sleep indefinitely in `OSSleepThread(0x807C6F60)` with `GX: 0 vtx (0 batches)`.

---

## 4. Key Breakthrough Findings (from Dolphin Dump Analysis)

### Finding 1: The Alpha = 0 CMPR Texture Dilemma
- In *The Last Story*, UI text elements (e.g., *"PRESS ANY BUTTON"*, *"NEW GAME"*, *"LOAD GAME"*) and particle glints are stored in **CMPR (DXT1)** format.
- In Dolphin's raw texture dumps (`tex1_512x64_*.png` and `tex1_1024x512_*.png`), the text glyphs have bright RGB values `[248, 252, 248]`, but their embedded alpha channel is **`0.0`** (`[248, 252, 248, 0]`).
- On GameCube GX hardware, the TEV stage routes color/luminance to alpha, or additive blending is used.
- In D3D11, multiplying `alpha = texColor.a * input.color.a` results in `0.0`, discarding all text and making menus invisible!
- **Solution applied in `tools/compile_shaders.py`**:
  ```hlsl
  float luma = max(texColor.r, max(texColor.g, texColor.b));
  float texA = (texColor.a > 0.01f) ? texColor.a : luma;
  float alpha = texA * input.color.a;
  if (alpha <= 0.005f) discard;
  return float4(texColor.rgb * input.color.rgb, alpha);
  ```

### Finding 2: Unpopulated EFB Fullscreen Quads
- During post-processing passes (frame 240..360 and frame 400), full-screen quads sample unpopulated EFB addresses (e.g., `0x905C3000`, `0x90395DC0`).
- If an unpopulated all-zero quad is drawn with opaque blend factors (`dst_factor == 0`), it wipes out the entire 3D scene to black.
- `recomp/gfx_d3d11.c:1309` has logic to detect and skip all-zero quads when `dst_factor == 0`.

### Finding 3: Controller Input Pipeline
- Input is read via `KPADRead` at `0x80661B60`, `0x806572D0`, and `0x806572E0` in `recomp/replacements.c`.
- Window focus has been ensured via `ShowWindow`, `SetForegroundWindow`, and `SetFocus` in `recomp/host_runner.c`.
- Key bindings:
  - **Confirm (A / 2)**: Space, Enter, Z, E, Left Mouse Click, Xbox Gamepad Button A.
  - **Cancel (B)**: Esc, Backspace, X, Q, Right Mouse Click, Xbox Gamepad Button B.
  - **Movement**: WASD, Arrow Keys, Left Thumbstick.

---

## 5. Active Pain Points Assigned to DeepSeek Harness

1. **Title Main Menu Task Spawn**:
   Ensure `game_title_press_start.c` (`fn_803AAAE4`) transitions cleanly into `game_title_main_menu.c` (`fn_803AC3D8`) upon button press, so "New Game", "Load Game", and "Options" spawn with full text visibility.
2. **Particle Transparency Uniformity**:
   Ensure all particle emitters (smoke, dust, magic glows) utilize soft alpha blending without rendering square quad borders. Verify against Dolphin dumped textures in `%APPDATA%\Dolphin Emulator\Dump\Textures\SLSEXJ\`.
3. **Interactive Transition into Chapter 1**:
   Verify that selecting "New Game" transitions smoothly past the intro sequence into Chapter 1 (Gurgan Cave) in real-time execution (`Play_TheLastStory.bat`).

---

## 5b. Addendum — verified state after this session (supersedes parts of §3–§5)

Everything below was observed in live windowed runs (`tls_runner.exe --window --fps 60`), not inferred.

### Corrections to §3 "Real-Time Interactive Execution Status"
- Real-time is **not** black from frame 0. The title screen renders correctly (cave, gold logo, prompt, particles) and holds 40k–50k vertices / 43–55 batches per frame with the guest parked at the OS idle loop `0x805F50B0`. The black screen only appears after the title→game handoff.
- The CMPR **luma fallback in §4 Finding 1 was wrong and has been removed**. `texA = (a > 0.01) ? a : luma` replaced every legitimately transparent texel with its brightness, which is what turned the logo plate, menu text and particles into solid rectangles.

### Fixes landed this session
| # | File | Change | Verified effect |
|---|---|---|---|
| 1 | `tools/DolRecomp/src/cpu/cpu.c` `ppc_rfi` | Suppress a stale `MSR[PR]` restored from SRR1 | The reported "CPU Exception 0x00000001 at PC 0xFFF00700" is gone (zero exceptions in 45–60 s runs). `0xFFF00700` was the program-exception *vector*, not a bad jump; the real fault was `PPC_PROGRAM_PRIV` raised by `rfi` at `0x805EDC34`. |
| 2 | `recomp/replacements.c` action `0x800A555C` | Real presses fall through to the game's own evaluator `0x800DEEDC` instead of returning "pressed" | Architecturally correct (the short-circuit skipped the evaluator's edge bookkeeping), but **no verified user-visible effect**. See the retraction below. |
| 3 | `recomp/gfx_d3d11.c` glow gate | Replaced the dead 2-address allowlist with a structural test (CMPR, >16×16, no real alpha, uniform non-black corners, positive deviation) plus an ink guard | Particles render as soft glows instead of solid beige quads |
| 4 | `recomp/gfx_d3d11.c` ink matte | Reconstructs the TEV alpha stage for dark-on-light UI art (alpha from deviation below plate luminance, white RGB) | Title logo plate gone; **all** UI text renders crisply |
| 5 | `tools/compile_shaders.py` `PSAlpha` | Honest texture alpha + GX vertex-alpha convention | Removed the last source of forced-opaque transparency |
| 6 | `recomp/tls_debug.c` | Uses the real `CPUState` (the private copy lacked `ps1[32]`, shifting every field 256 B → `PC: 0x00000000` forever); task vtable read at `+0x30`; `pad284` added | PC/task telemetry is now trustworthy |

### Claims from earlier investigation that are now DISPROVEN — do not build on them
- "Task vtable zeroed" — the vtable lives at `task+0x30`; reading `+0x00` was the error.
- "`0x80760D18` is the NewTitleTask vtable" — it is a class-name **string** inside a string table. `0x807790B0` *is* a real vtable (all slots text-range code).
- "mode 9 = save-data error" — never verified. `+0x2AC`/`+0x2B0` are current/previous mode (`0x80533C04: stw r6, 688(r3)` copies one to the other).
- **RETRACTED: "the title state machine advances `1→2→4→5→9`".** Logging every flip of `+0x2AC` on one run gives
  `1→2→3→4→5→9→11→12→16→17→18→19→20→22→25` — monotonic, never returning to a menu state. `+0x2AC` is a
  step/progress counter, not the title state, so the rounds 5–9 narrative built on it (including "blocked at the
  mode-5 save check") is void. The display never changed because that field does not drive the display.
- "`f104 = 0.0` layout alpha hides the menu" — the menu layout object is never drawn at all.
- "Audio subsystem corrupts memory" — the crash persisted identically with `--no-audio`.
- "White-texture fallback draws the stray white quad" — zero fallback hits; the stray quad is a real 1024×512 all-white texture with a bad transform.

### Exact current break point
After the press-start dismissal the title state advances, but the layout renderer draws **exactly one object for the whole run** (`0x8114EAE0`, 600 draws) — no menu layout is ever submitted. `SequenceManager` then reports `active=0x810D9500` (the title task, vtable `0x80793A20`, null name) with `next=0x00000000`, and **no** Chapter-1 pack (`game_start_dg`, `change_dg`, `preload/camp`) is ever requested. The missing step is therefore: *whatever is supposed to create the title-menu layout after mode 2*.

### Debug tooling added (env-gated, inert by default)
- `TLS_DUMP_EVERY=<n>` — dense frame capture (`build/recomp/d3d11_screenshot_<frame>.ppm`)
- `TLS_TEX_ALPHA_PROBE=1` — per-texture decoded alpha statistics
- `TLS_TEX_FAIL_PROBE=1` — names every texture that falls back to the white 1×1
- `[TLS KPADRead] PRESS` — logs every read that carries a button edge (the old 1-in-60 sampling made "input never arrived" indistinguishable from "missed sample")
- `[TLS NewTitleTask] Update … <== PAD EDGE` — title state plus trigger, on the same line

### Build gotcha
`tools/recomp_harness.py` caches on source timestamps and does **not** treat `build/recomp/gx_shaders_d3d11.inl` as a dependency of `gfx_d3d11.c`. After editing shaders, touch `recomp/gfx_d3d11.c` or the change silently does not reach the binary (cost two false-negative runs this session).

## 6. Key Source Files
- [`recomp/gfx_d3d11.c`](file:///G:/Program/Project%20The%20Maybe(Not)%20Last%20Story/recomp/gfx_d3d11.c) - D3D11 rendering backend, texture decoding, and blend state management.
- [`recomp/gx_pipeline.c`](file:///G:/Program/Project%20The%20Maybe(Not)%20Last%20Story/recomp/gx_pipeline.c) - GX command parsing, vertex staging, TEV stage tracking.
- [`tools/compile_shaders.py`](file:///G:/Program/Project%20The%20Maybe(Not)%20Last%20Story/tools/compile_shaders.py) - HLSL pixel/vertex shader compiler.
- [`recomp/replacements.c`](file:///G:/Program/Project%20The%20Maybe(Not)%20Last%20Story/recomp/replacements.c) - High-level emulation of Wii OS, KPAD, DVD streaming, and task scheduling.
- [`recomp/host_runner.c`](file:///G:/Program/Project%20The%20Maybe(Not)%20Last%20Story/recomp/host_runner.c) - Main host entry point, message pump, and VBlank simulation loop.

## 7. Resuming this work

**Branch:** `fix/2d-render-and-handoff` (commit `295e777`) — all fixes below are committed there.
`main` still has the pre-session state.

**Build and run (unchanged):**
```powershell
python tools/compile_shaders.py          # -> build/recomp/gx_shaders_d3d11.inl
python tools/recomp_harness.py build-runner
Play_TheLastStory.bat                    # --window --fps 60
```
After editing shaders, **touch `recomp/gfx_d3d11.c`** or the recompile is skipped (the `.inl` is not
a tracked dependency of that translation unit).

**Set expectations for verification:** automated key injection into the game window is unreliable
(`keybd_event` + `SetForegroundWindow`, long holds help). Press keys at the real window when it matters.

**Where to look:**
- `docs/evidence/` — six downscaled before/after captures proving the particle, logo-plate and UI-text fixes
- `tools/debug/` — the accumulated one-off diagnostic scripts (log parsers, memory probes, dump helpers)
- `logs/session-archive-interactive_debug.log` — the last full interactive session, 76 MB, for reference
- `DEEPSEEK_HARNESS_HANDOVER.md` §5b — **read this before §3–§5**, it supersedes several earlier claims

**The single open question:** why does GX submission stop immediately after `GameTask::Init`?
`ViewTask`/scene initialise, the guest keeps running with zero exceptions, `GameLoadTask +0x1C`
advances (184 -> 408) and GX output grows during loading (1140 -> 2628 verts) — then the screen
goes black to the end of the run. Loader, exception path and the missing menu are all ruled out.

---

## 5c. Addendum — session findings that supersede §5b's "exact current break point"

Everything below was measured on this tree (`--window --frames 900/1000/2400 --fps 60`, host audio
off), with the generated chunks **re-lifted from `orig/main.dol`** rather than hand-edited.

### 5c.1 The generated chunks had been hand-edited, and that was destroying guest memory

`python tools/recomp_harness.py lift` regenerated 459 chunks; **11 of them differed** from the
committed-in-`build/` copies, i.e. they carried hand-injected clamps:

| Injected code | Where | What it actually clamps |
|---|---|---|
| `if (ctx->gpr[24] > 256) ctx->gpr[24] = 0;` (8 sites) | `chunk_0126` (0x801FFC08…) | `gpr[24]` — the animation track count **and** the staging-buffer size |
| `if (mem_read32(ctx, ea) > 256) mem_write32(ctx, ea, 0);` (4 sites) | `chunk_0127` (0x80200D…) | memory the loop never reads |

The premise behind them was wrong. The instructions at those addresses are **not count loads**:

```
0x80200D00:  lwz r4, 304(r26)     ; a pointer, not "count at 300(r26)"
0x80200D7C:  lwz r0, 312(r29)     ; not "track count at 316(r29)"
```

**Causal chain that the clamps created** (all observed, not inferred):

1. `fn_801FFA04` sizes a staging buffer at `0x801FFC48` (`r3 = count`, `r4 = 8` element size) and
   stores the result at `*(struct+0x84)` (`0x801FFC4C`).
2. The injected clamp zeroes `gpr[24]` first, so the size becomes 0, the allocation is skipped and
   `*(struct+0x84)` is stored as **0** (`0x801FFC58`).
3. At `0x801FFF9C` the engine loads that field as a `memcpy` destination and copies the animation
   data: `memcpy(dst=0x00000000, src=0x90303F14, len=450)` from `lr=0x801FFFB4`.
4. Physical address 0 is guest `0x80000000`, so the copy overwrites `0x80000000–0x800001C1` —
   the OS low page, **including `__OSCurrentThread` at `0x800000E4`**, which afterwards read
   `0x80000001`. `OSSleepThread` loads that global and writes the thread state through it, so from
   that moment sleep/reschedule is writing into garbage and the run wedges.

**Verification:** `TLS_MEMCPY_PROBE=1` named the copy and stopped printing it after the re-lift;
`TLS_WATCH_CURRENT_THREAD=1` showed the `__OSCurrentThread -> 0x80000001 [INVALID]` transition at
frame 671 before the re-lift and no invalid transition after it. The four clamp blocks in
`recomp/replacements.c` (cases `0x801FFCA0/0x801FFD2C/0x801FFDC0/0x801FFE50`, `0x80200080`,
`0x80200D00`, `0x80200D5C/0x80200D7C/0x80200E68`) were removed for the same reason: same wrong
offsets, same fake progress, and they rewrote guest memory.

**Lesson to keep:** the chunk files are generated. Never patch them; re-lift. If a re-lift changes
more than the DOL change explains, that diff is the hand-edit inventory.

### 5c.2 Where the game actually stops (faithful build)

Timeline on a 2400-frame run:

| Frames | State |
|---|---|
| 0–240 | boot, `GX: 0 vtx` while assets load |
| 240–420 | title renders: 78 → 50 013 verts/frame |
| 420–610 | title menu, 35k–40k verts/frame, guest parked at the OS idle loop between frames |
| 610–690 | Chapter 1 packs decompress, `GameTask::Init` #1/#2, `ViewTask::Init`, `SceneManager::Init`, ~90 `fn_801FFA04` animation binds |
| 690–840 | load continues, GX 0 |
| 840 → 2400 | **GX 0 for the rest of the run, guest parked at `0x805F50B0` (OS idle loop)**, `RunQueueBits == 0`, zero exceptions |

The runner still reports 60 FPS because each frame executes almost no blocks — the guest is fully
idle, not busy. `tls_dump_sleep_queues()` (new, runs at shutdown) shows **exactly two blocked
threads**:

```
queue 0x8087D610 (first sleep from lr=0x8071D984)   <- main/worker thread 0x808638F0, prio 3
    stack: 0x805F5420 -> 0x8071DC00 -> 0x8071D984 (drain loop at 0x8071D860) -> OSSleepThread
queue 0x80879538 (first sleep from lr=0x805F27F8)   <- thread 0x80879210, prio 4
    parked inside OSReceiveMessage (0x805F27A0) waiting for a mailbox message
```

The `0x8071D860` drain function walks three 12-byte list heads, calls a virtual destructor on each
entry, then waits for `*(mgr+36)` to become 0 — i.e. it is waiting for a **pending operation/stream
request to complete**. The text dump at the end of the run names it:
`Streaming Queue: active="data/texture/water03_we01.texture" status=1`.

So the open question is no longer "why does GX stop" but: **which producer is supposed to clear the
pending operation at `*(0x8087D5xx+36)` and feed the mailbox at `0x80879530`?** Nothing on the host
side ever signals either one.

### 5c.5 Follow-up measurements (this round) — the waiter is an idle job worker

Three measurements narrow the above to a single class of defect.

**Only three queues are ever slept on** in a whole run (`TLS_WAIT_PROBE=all` reports one line per
distinct queue): `0x807C6F60` (GX-fifo drain), `0x8087D610`, `0x80879538`. So there is no hidden
fourth waiter.

**Only two guest threads exist**, both created at frame 170 (`OSCreateThread` probe):

| Thread | Prio | Entry | Role |
|---|---|---|---|
| `0x808638F0` | 3 | `0x8071DBE0` | engine job worker, loop at `0x8071DC14` |
| `0x80879210` | 4 | `0x80718C40` | mailbox worker, blocks in `OSReceiveMessage` |

Everything before frame 170 — and the entire title screen and Chapter-1 load after it — runs on the
original boot thread `0x807CB658`.

**The worker's condition was measured, not inferred.** `TLS_LOSTWAKE_PROBE=1` reads the field the
caller tests at the moment it calls `OSSleepThread`, and it prints
`pending(+0x24)=0x00000000 <-- sleeping with the condition ALREADY satisfied` at frames 170 and 307,
i.e. the worker sleeps while `*(base+0x24) == 0` and must be woken when a job arrives. It is an
**idle worker waiting for work**, not a thread waiting for a stuck request to finish.

The producer side (`0x8071D6E0` region) is:

```
0x8071D714: stw  r3, 36(r29)    ; pending = job
0x8071D71C: stb  r31, 12(r3)
0x8071D720: lwz  r12, 0(r3)     ; vtable
0x8071D72C: bctrl               ; run the job synchronously, in the producer's own thread
0x8071D730: stw  r31, 36(r29)   ; pending = 0
0x8071D734: addi r3, r29, 52    ; <-- wakes manager+0x34 (0x8087D618)
0x8071D738: bl   OSWakeupThread
```

The worker sleeps on `manager+0x2C` (`0x8087D610`), the producer wakes `manager+0x34`
(`0x8087D618`). Both queues were signalled **exactly 20 times, all at or before frame 307**, and
never again — so after frame 307 no job is ever produced, the worker stays parked, and the boot
thread keeps the title screen alive until it reaches the handoff and goes to the OS idle loop.

**Dead ends now excluded (do not re-investigate):**

- The HLE stubs at `0x805F3A80 / 0x805F3B00 / 0x805F3B40` are **dead code**: `0x805F3A80` is the
  middle of a larger OS-init routine (`bl 0x805F6C70`), not a function entry, and intra-chunk control
  flow reaches such addresses with a plain `goto`, never through the dispatcher. The real
  `OSSendMessage`/`OSReceiveMessage` are `0x805F26D0`/`0x805F27A0` and run the recompiled code.
- The mailbox waiter is not the blocker: the game performs **zero** `OSSendMessage` calls in a
  1000-frame run, and the mailbox receives exactly once (frame 170).
- `__OSCurrentThread` corruption is gone on the faithful build (`TLS_WATCH_CURRENT_THREAD` reports no
  invalid transition), so the §5c.1 chain is fixed, not merely hidden.

**The next concrete target:** who is supposed to call the producer at `0x8071D6E0` after frame 307 —
i.e. what should keep handing the engine thread jobs. `TaskManager` still holds `GameTask` with its
two update entries (`0x80363DBC`, `0x803646C4`) at the end of the run, so the engine thread that
should be executing them is exactly the one parked on `0x8087D610`.

### 5c.6 The scheduler is consistent at the end — the guest has nothing left to run

> **Superseded by §5c.9.** The scheduler was healthy, but the reason the guest had nothing left to run
> is that the boot thread had already been derailed by a corrupted return address (an engine heap
> inside its own stack). The queue/thread measurements here are still valid.

The worker's wait function was then read from the generated code rather than from a comment tail, and
it is a normal idle-worker loop, not a broken wait:

```
0x8071D950: r30 = mgr; disableInterrupts; *(u8*)(mgr+40) = 0
loop:
0x8071D97C: OSSleepThread(mgr+44)      ; 0x8087D610
0x8071D988: bl 0x8071D5D0              ; pop a pending job (three lists at mgr+0/+12/+24)
0x8071D990: if (job != 0) -> have job
0x8071D994: if (*(u8*)(mgr+40)) -> leave
            else loop
```

With `mgr = 0x8087D5E4` the object reads: three empty job lists, `job(+0x24)=0`,
`flag(+0x28)=0`, and the worker enqueued on `+0x2C`. That is a healthy worker with no work to do.
Its queue was signalled 20 times, all at or before frame 307; after that nothing posts work.

`TLS_WATCH_CURRENT_THREAD` now also records the thread running at the first dispatch and prints it at
shutdown, which settles what the final state is:

```
Boot thread 0x807CB658 at shutdown: state=2 susp=0 prio=16 queue=0x00000000
                                     (current=0x807CB658, runbits=0x00000000)
```

So the boot/main thread is the current thread, marked RUNNING, with `RunQueueBits == 0`, sitting in
the OS idle path. The two created threads are both legitimately idle. **Nothing is corrupted and no
wakeup is missing at the end: the guest simply has no runnable work**, which is why run lengths past
frame ~840 are a quiet idle loop reporting 60 FPS for free.

That moves the question one step upstream again, and it is now measured rather than guessed. The
state-0 gate in `GameTask::Init` (`0x80366E54`) is:

```
0x80366EAC  bl 0x800D3FA4(task)          -> must be non-zero (child at task+0x18 with flag bit 0x2 at +0x38)
0x80366EBC  bl 0x8044386C(*(r13-25040))  -> must return 0        (r13 = 0x808852A0 -> 0x8087EED0)
0x80366ED0  if (*(r13-25168) != 0) return                        (-> 0x8087E1F0)
0x80366EE4  task+0x10DC = state + 1      -> advances to state 1
```

On the faithful build those gates **pass** and the state machine advances normally:

```
[GameTask] Init #17..#20  state=0
[GameTask] Init #26       state=1
[GameTask] Init #27       state=2
[GameTask] Init #28       state=3
```

and then `Init` is never dispatched again — no state 4 is ever observed — GX output drops to 0, and
the boot thread ends in the OS idle path. So the defect is not the state-0 gate and not the sequence
handoff (the manager does activate the GameTask, vtable `0x8078A3D0`, `next=0`): it is that
**dispatch of the GameTask stops after `Init` reaches state 3**, which is the next thing to explain.

Previous rounds left two useful side facts for that work: the two created engine threads are idle
(not stuck), and `StreamManager::Update` keeps running to the end with an idle queue, so the
streaming layer is not what stalls the boot thread.

### 5c.8 The quiet idle is a *real* idle: the boot thread's frame loop ends at 829

Earlier rounds described the end state as "parked at the OS idle loop". Two further measurements
sharpen that, and three plausible host-side causes were tested and disproved.

**What the end state actually is.** `tls_dump_recent_calls()` now carries frame numbers, and
`TLS_VBLANK_PROBE=<n>` prints fifo counters, queue head, run bits, current thread, PC and LR at every
vblank. Frames 826–831:

```
826  pc=0x8008367C lr=0x800833D4  cur=0x807CB658 runbits=0
827  pc=0x80695344 lr=0x800DC6D4  cur=0x807CB658 runbits=0
828  pc=0x8046E8F4 lr=0x8046EBA8  cur=0x807CB658 runbits=0
829  pc=0x805F50B0 lr=0x805F50AC  cur=0x00000000 qhead=0x807CB658 (state 4) runbits=0
830  pc=0x80478230 lr=0x80478230  cur=0x807CB658 runbits=0
831+ pc=0x805F50B0 lr=0x805F50AC  cur=0x807CB658 runbits=0   (for the rest of the run)
```

`0x805F50B0` is `while (*(0x8087F840) == 0) {}` — the SDK idle routine. The thread that ends up there
is the boot/main thread, and its saved context LR (`0x805F50AC`) is *inside that routine*, so it is
genuinely idling, not jumping to a corrupted address. Since `RunQueueBits == 0` and the only two other
threads are asleep with no work, **the guest has no runnable work left**: the main frame loop stopped
re-entering `SequenceManager::Update` after frame 829.

**Tested and disproved (do not re-run these):**

| Hypothesis | Test | Result |
|---|---|---|
| The host's hand-edited queue surgery loses the thread | `TLS_FRAMEQUEUE_WAKE=guest` calls the guest's own `OSWakeupThread` (0x805F5D60) via a new `host_call_guest()` instead | identical taps — Init 31 calls ending 829, SequenceManager 472 ending 829 |
| The wake is lost because the guest is mid-`__OSReschedule` | defer the wake while `__OSCurrentThread` is 0/invalid | **much worse**: the guest starves (SequenceManager runs once, frame 167) — the wake is load-bearing, guard reverted |
| Calling the registered VI handler each vblank delivers a retrace | `TLS_VIRETRACE=0x80602ED0` (handler for interrupt 24, found with the new `__OSSetInterruptHandler` probe) | wedges earlier: the handler needs the interrupt-entry context, so a direct call corrupts guest state |

**Two real host-side bugs found while testing, both fixed (env-gated):**

1. `host_wakeup_thread_queue()` moved threads to a run queue but never raised the "reschedule needed"
   word at `0x8087F840` that the guest's own `OSWakeupThread` sets (0x805F5E0C). `TLS_WAKE_NO_RESCHED=1`
   restores the incomplete behaviour.
2. `tls_is_system_idle()` tested only `PC == idle && RunQueueBits == 0`, which is true *while the guest
   sits in its idle loop with pending work* — so the runner refused to execute any block and the guest
   could never observe the pending-work word. It now also requires `*(0x8087F840) == 0`
   (`TLS_IDLE_IGNORE_PENDING=1` restores the old predicate).
3. The stray-host-sentinel recovery used to force `pc = lr = 0x805F50B0` permanently, which is
   unrecoverable (the run then reports 60 FPS executing nothing). It now resumes the current thread
   from its saved `OSContext` (`+0x84` LR, then `+0x198` SRR0) when that is a valid code address, and
   only parks as a last resort (`TLS_SENTINEL_PARK=1` restores the old path). The sentinel does leak in
   practice — `[TLS HostCallback] Stray host sentinel ... lr=0xFFFFFFFF` fires once per run — so the
   leak itself is still an open defect in the host-callback design (host invokes handlers with
   `lr = 0xFFFFFFFC`, and a handler that runs the scheduler saves it into a thread context).

**Where to go next, in priority order:** *(superseded by §5c.9 — item 1 was based on a symptom and
item 2 is answered; read §5c.9 first and keep this list only for its measurements)*

1. Stop the sentinel leak: `host_call_guest()`/`host_service_alarms()` should not let a guest context
   switch capture `lr = 0xFFFFFFFC`; the safe shape is to save the interrupted thread's registers into
   its `OSThread` context and let the switch stand, instead of restoring the whole `CPUState` after the
   callback.
2. Then re-answer the frame-829 question with the tools already built: the loop exit condition is
   whatever stops the boot thread re-entering `0x800C3720` after the `0x80534074` dispatch. Watch the
   loop's state words with `TLS_WATCH_ADDR`, and use the taps to confirm which method goes silent first.
3. Only then revisit interrupt delivery. The OS registers interrupt 24 → `0x80602ED0` at boot, and
   `__OSInterruptTable` is at `*(0x8087F810)`; a faithful retrace needs the OS's own exception-entry
   path, not a direct handler call.

### 5c.9 The frame-829 stall was the host's MEM1 arena low: the engine heap lived inside the stack

**Answer.** The boot thread did not stop looping because of the scheduler, a lost wakeup, or the
`0x80534074` dispatch. It stopped because **an allocation returned a live stack address and the callee
destroyed its own caller's frame**. The host had been telling the guest where MEM1's arena starts, and
the number was inside the boot thread's stack.

**The value is authoritative, not advisory.** `OSInit` (0x805EB660) at `0x805EB780` does
`lwz r3,12556(0x80000000)` → `*(0x8000310C)`; if non-zero it jumps straight to
`OSSetMEM1ArenaLo(that value)` at `0x805EB7E8` and skips its own computation. Watched with
`TLS_WATCH_ADDR=0x8087E768` (that is `__OSArenaLo`, `-28504(r13)`):

```
[Runner] WATCH 0x8087E768: 0xFFFFFFFF -> 0x8088A000 by block pc=0x805ECC10 lr=0x805EB7EC (frame 0)
```

`0x8088A000` was a host constant in `init_wii_low_memory()` ("BI2 MEM1 ArenaLo"). The application's
linker layout (`asm/ldscript.lcf`) says what it should have been, and the run confirms both halves of
that layout:

| Fact | Value | Confirmed by |
|---|---|---|
| end of `.bss` / `_stack_end` | `0x808893B0` | DOL load line `BSS: 0x807C66C0 - 0x808893B0` |
| main-thread stack | `0x808893B0 … 0x808993B0` (64 KB) | `OSThread.stackEnd/stackBase` of `0x807CB658` |
| debugger stack (`_db_stack_addr`) | `0x808993B0 + 0x2000` | `__OSThreadInit`-side layout in the lcf |
| `__ArenaLo` therefore | `align32(0x8089B3B0)` = `0x8089B3C0` | lcf `__ArenaLo = (_db_stack_addr + 0x1f) & ~0x1f` |

So the old constant sat **0xC50 bytes above the end of `.bss`**, i.e. *inside* the boot thread's stack,
not above it.

**How that became a stop at exactly frame 830.** The engine's memory manager (`fn_80082CAC`) does
`lo = OSGetMEM1ArenaLo(); hi = OSGetMEM1ArenaHi();` and creates a 1 MB heap on `lo` via
`fn_80084EE8(manager+408, lo, 0x100000)` → `fn_8022AB18(lo, 0x100000, 1)` → arena `0x8088A008`. That
heap grows upward *through the stack*; nothing notices until it reaches live frames. At frame 830 the
taps and a 256-dispatch tail (`TLS_TAIL_RING=1 TLS_TAIL_PROBE=1`) show the exact chain:

```
f=830 pc=0x800838B8 lr=0x8008CA74 sp=0x80898D58 r3=0x807C709C r4=0xA0 r5=0x20 r6=9   ; alloc through vtable
f=830 pc=0x80084F30 lr=0x80083930 ...                                              ; vtable slot 3
f=830 pc=0x8022B848 lr=0x80083930 r3=0x8088A008 r4=0x20 r5=0xA0                     ; (arena, align, size)
f=830 pc=0x8022A930 lr=0x80083930 ...                                              ; heap allocator
f=830 pc=0x80083930 lr=0x80083930 sp=0x80898D28 r3=0x80898D60  <-- STACK ADDRESS RETURNED
f=830 pc=0x000000A8 lr=0x000000AA sp=0x80898D58 r3=0x80898D60  <-- returned to garbage
```

`0x80898D60` is inside the live stack window, `0x80898D28` is the current `sp`. `fn_800838B8`'s
epilogue (`lmw r27,12(r1); lwz r0,0x34(r1); mtlr r0; addi r1,r1,0x30; blr`) then loaded
`0x000000AA` from its own clobbered save slot and returned to `0xA8`. Everything after that in the log
is consequence: the safeguard recovers to the task scheduler, the boot thread executes string data as
code (`0x65787474` = `"extu"` from a `"…el/textures/…"` path), and the last stray jump lands on
`0xFFFFFFFC` — which is where the `lr=0xFFFFFFFF` "stray host sentinel" line came from.

**Correction to §5c.8's priority 1.** The host-callback sentinel leak was *not* a cause and has never
been observed: with `TLS_HOSTCALLBACK_PROBE=1` every host callback ends at the sentinel with the thread
unchanged, and `host_repair_sentinel_in_thread()` never fires. The single stray-sentinel report was the
tail of the stack corruption above. The repair is kept because the leak would be silent and fatal if it
ever did happen, but do not "fix" the callback design for it.

**The fix** (`recomp/host_runner.c`): the low-memory map is derived from the DOL instead of guessed.

```c
arena_lo = align32(dol.bss_address + dol.bss_size      /* static end            */
                   + 0x10000                            /* main thread stack     */
                   + 0x2000);                           /* debugger stack        */
/* 0x8089B3C0 for this build; TLS_ARENALO=<hex> overrides for A/B only. */
```

**Evidence.** 2400-frame run at 60 fps, `--window --no-audio`:

```
GameTask::Init           calls=149    first=658    last=1032
GameTask::Update         calls=678    first=1033   last=2398
GameTask::Draw           calls=678    first=1034   last=2398
SequenceManager::Update  calls=1267   first=167    last=2398
frame 1500: GX 99774 vtx (91 batches) | frame 2160: GX 290544 vtx (67 batches, 0 dropped)
```

No stray sentinel, no non-code dispatch after the two known boot-time ones, no CPU exception, and the
title screen is on screen end to end: `docs/evidence/08-title-menu-frame500.png` (MENU / CONTINUE /
NEW GAME / MULTIPLAYER over the backdrop), `09-title-backdrop-frame1200.png` and
`11-title-backdrop-frame1500.png` (cave walls, lake surface, sky, moving camera),
`10-title-hero-cave-frame2200.png` (the hero standing in front of the menu with the sword/ring emblem).
A/B with `TLS_ARENALO=0x8088A000` restores the old signature byte for byte — `Init calls=31 last=829`,
`SequenceManager calls=472 last=829`, stray sentinel — so the causal link is measured, not argued.
`--headless --frames 900` also passes frame 830 (`GameTask::Init` still running at 898).

**New probes and tools (all inert unless set):**

| Knob | Effect |
|---|---|
| `TLS_TAIL_RING=1` | keeps the last 256 dispatches (pc, lr, sp, r3–r7, ctr, frame, callback depth) |
| `TLS_TAIL_PROBE=1` | dumps that ring at the first non-code address (×3) and at a stray sentinel |
| `TLS_TRACE_FROM=<frame>` | streams every dispatch from that frame (`TLS_TRACE_MAX`, default 400) |
| `TLS_HOSTCALLBACK_PROBE=1` | names each host callback, where it ended, and whether the thread changed |
| `TLS_ARENALO=<hex>` | overrides the computed arena low (A/B only — do not ship a value this way) |
| shutdown | the boot thread line now also prints `stackBase`/`stackEnd` and whether `SP` is inside |
| `tools/resolve_symbol.py 0x80083930` | names guest addresses from `config/symbols.txt` |

**What is still open after this fix** (observed, not guessed):

- **Chapter 1 is not reached.** The scene on screen is the title screen's own 3D backdrop. Input now
  reaches the engine (§5c.10), and the title's own mode machine walks 1→2→…→25 under scripted presses,
  but no sequence change is ever requested (`SequenceManager` `next` stays 0 and the active task stays
  the title task `0x810FB4C0`). Selecting NEW GAME is the next step.
- The lake/water surface draws with large black regions and a pink sky reflection
  (`10-title-hero-cave-frame2200.png`), and the "NEW TUTORIAL" plate at frame 2400 sits over black.
- The GX vertex buffer used to cap at `0x3FFFF` (262143) and silently drop the rest; that was a *host*
  limit (`GX_MAX_BATCH_VERTICES`), not the guest's. Raised to 1 M with a `dropped` counter in the frame
  telemetry (`gx_pipeline_get_dropped_vertices`); heavy title frames now report 290k–306k vertices with
  zero drops.
- The two "non-code dispatches" at frame 0 are **named and fixed**: `fn_805F2E90` is the OS
  exception-return helper (`clrlwi r3,r3,2; mtsrr0 r3; mfmsr; mtsrr1; rfi`), which hands `rfi` a MEM1
  *physical* address because the exception context runs untranslated. `0x005F2A10`/`0x005F2A90` are the
  cached code at `0x805F2A10`/`0x805F2A90`; the HLE layer now translates (and reports) them instead of
  running the crash-recovery path, so the generic safeguard no longer fires in a normal run at all.

### 5c.10 Input: the engine's action pipeline, and what the title actually waits for

**The runner could not accept input at all.** Two shortcuts had been standing in for it and both
fabricated the *answer* instead of the *input*, so the engine's own evaluator never ran:

| Removed | What it did |
|---|---|
| `sim_press` in `0x800A555C` action 4 | returned "pressed" on call counts 10/50/130/190 whenever the runner was headless |
| bypass in `0x800DEEDC` | returned "pressed" for actions 11/3 as soon as any trigger bit was set, skipping the evaluator's latch bookkeeping |

Both are gone. `TLS_INPUT_SCRIPT="500-512:A,700-712:DOWN"` now presses real buttons on a frame schedule
(`+` joins buttons, `0xHEX` presses a raw mask) inside the same host controller state the keyboard fills,
so `KPADRead`/PadManager and the evaluator see ordinary edges. **Verified:** with the script the title
walks its mode machine `1→2→3→4→5→9→11→12→16→17→18→19→20→22→25` under real presses; without it, mode 1
stays put. That chain is the same one the old `sim_press` produced, which is what "input works" now
means. Reaching *gameplay* needs the menu to actually choose NEW GAME, not just move.

**How the action pipeline works** (decoded from the DOL; `tools/decode_action_table.py`,
`tools/decode_input_maps.py`):

```
fn_800A555C(chan, action)                 # the API every menu calls
  800A5578  dev  = chan_map[chan]         # 0x80732898, identity for 0..3
  800A557C  real = action_map[action]     # 0x807328A8
  800A5580  b fn_800DEEDC(mgr, dev, real)
fn_800DEEDC                               # the evaluator
  mask = *(u32*)(mgr + 0x3C28 + dev*4)    # per-device TRIGGER mask
  return (mask >> real) & 1
fn_800DDD18(mgr)                          # PadManager update, once per frame
  for chan in 0..3: KPADRead(chan, mgr + chan*0xF00, 16)
  memset(mgr+0x3C28, 0, 16); memset(mgr+0x3C38, 0, 16); memset(mgr+0x3C48, 0, 16)
  ... builds trigger bits from button bits via the dispatch table at 0x80779950
```

Caller action ids therefore are **not** the tested bits: action 4 → bit 11 (classic A), action 5 → bit 10
(classic B), action 7 → bit 4 (X), 12 → bit 9 (MINUS), 13 → bit 8 (PLUS), 16/17 → bit 15 (HOME).
`TLS_PAD_PROBE=1` prints the mask and the queried action once per frame; `TLS_ACTION_PROBE=1` /
`TLS_ACTION_TRACE="<from>-<to>"` print the wrapper calls (with the remapped bit) so "did my press reach
the game" is never a guess again.

**Where the title stops, precisely.** Title mode 1 → 2 is this code (`fn_80534074`):

```
80534264  r3 = mgr ; r4 = 0 ; r5 = 4
80534270  bl fn_800A555C            ; caller action 4 -> real bit 11 -> classic A
80534278  beq .L_80534308           ; not pressed
8053427C  r3  = *(task+0x48)
80534280  f9  = *(f32*)(r3+0xA0)    ; 150.0 in every observed run
80534284  f0  = *(f32*)(r3+0x100)   ; 0.0 until the first accepted press, then 150.0
80534288  fcmpo cr0, f0, f9
8053428C  cror eq, gt, eq           ; EQ = (f0 >= f9)
80534294  rlwinm r0, r0, 3, 31, 31  ; the DOL bytes here are 0x54001FFF
80534298  beq .L_805342D0           ; -> "commit fade" path (which is what runs today)
805342A4  bl fn_80533BE0            ; SetMode(2)  <- never reached
```

Both visible conditions were satisfied in-run at frame 400 (trigger `0x00004800` → bit 11 set, and
`f0 = 0 <= f9 = 150`), yet the branch went to `.L_805342D0` every time, so `SetMode(2)` is never called.
The cause is the bit-extract at `0x80534294`. The asm listing renders the same bytes as
`extrwi. r0, r0, 1, 2`, and `extrwi nb,sh` encodes as `rlwinm` with `SH = sh + nb` (verified against
`extrwi r0,r0,1,25` = `0x5400D7FE`), i.e. `rlwinm ..., 3, 31, 31` — rotate 3, keep bit 31, which reads
**bit 28** of the CR word. Under this emulator's CR layout (`cr_field_shift = 4*(7-crf)` in
`tools/DolRecomp/src/backend/emitter.c`, i.e. CR0 in bits 28–31 with the nibble mirrored) bit 28 is
CR0[SO]; under the architectural layout it is CR7[LT]. Neither is the CR0[EQ] that `fcmpo`+`cror`
produced, so the gate cannot pass.

**Observed behaviour of the gate (measured, and it is inconsistent).** `.L_805342D0` writes `f256 := f160`
(0 → 150) and commits fade state. Because the branch is taken on *every* press once that has happened,
`SetMode(2)` is only reachable on the **first** press that arrives while `f256` is still 0 — i.e. the very
first frames of mode 1. That matches the runs: a single `A` at frame 400 sometimes walks the mode machine
`1→2→3→4→5→9→11→12→16→17→18→19→20→22→25` (15 transitions) and sometimes stays in mode 1, depending on
which frame the title actually reaches mode 1 in that run (asset streaming timing varies). Pressing
repeatedly makes it *worse*, not better: the first press locks the gate and every later press re-enters
the dead branch. That nondeterminism belongs to the gate, not to the input script.

To drive the gate deterministically, `TLS_AUTO_ACCEPT="1"` presses A for 12 frames **when the title task
enters** one of the listed modes (it is a real button press, triggered by guest state instead of a guessed
frame). One run walked `1→2→3→4→5→9→11→10→3→4` with it, another did not leave mode 1 at all - the
difference is whether `f256` is still 0 when the press arrives, which is the gate's own state, so
`SetMode(2)` remains first-press-only until `0x80534294` is understood.

**Next experiment (prepared, not yet landed).** `mfcr` is emitted as a raw `ctx->gpr[rd] = ctx->cr` and
`mtcrf` as a raw masked copy, so the guest sees the emulator's reversed CR image instead of the
architectural one. Converting at that boundary (`guest = bitreverse32(cr)`, and the same on the way in)
was implemented and built — 479 `mfcr` sites picked it up — but it changed nothing for *this* gate (the
reversal maps bit 28 ↔ bit 3, and this instruction needs neither) and was reverted rather than left
unverified. **The measurement (taken this round, instrumentation since re-lifted).** A one-line probe inserted at
`label_80534294` (see the technique below) printed, on the frame the press finally arrived:

```
[GateExtract] cr=0x88000888 mfcr=0x88000888 b28=0 b29=0 b30=0 cr0=0x8 xer=0x00000000 f0=0.0 f9=150.0
```

* `f0 = 0 < f9 = 150` → CR0 = LT only (`cr0=0x8`), so `cror eq,gt,eq` leaves CR0[EQ] = 0 (bit 29 = 0).
* The extracted bit is **bit 28 = 0**, which sets CR0[EQ] via `rlwinm.`, so `beq .L_805342D0` is taken.
* Under this emulator's layout that bit is `XER[SO]` (`xer=0` here). That is why the mode machine only
  ever advanced in runs where XER[SO] happened to be set earlier - i.e. by accident.

**Requirement this pins down:** `SetMode(2)` runs when the extracted bit is **1**. The only CR bit that
carries "the press is accepted now" is `CR0[EQ]` (`f0 >= f9`), so on the retail machine bit 28 of the
`mfcr` word must *be* CR0[EQ]. This emulator stores CR0 in bits 28-31 with the nibble mirrored
(`compare<<28`, LT = 0x8 → bit 31, EQ = 0x2 → bit 29), so bit 28 is SO. Making bit 28 land on CR0[EQ]
is therefore a condition-register layout fix in `tools/DolRecomp` (`cr_field_shift`, `emit_compare_*`,
`ppc_fcmp`, and the `cror`/`bc` bit numbering must move together), and it is the next concrete change to
make - verify by pressing **after** the title's fade completes (`f256 = f160 = 150`) and seeing `SetMode(2)`.

**Input-path bug found and fixed while measuring:** `TLS_AUTO_ACCEPT` consumed its press inside a single
frame because `tls_service_controller_input()` runs several times per frame (main loop plus one call per
`KPADRead` channel) and the press counter was decremented there. Counted per frame now
(`tls_auto_accept_tick`), with a one-frame delay so the press begins on a frame boundary; the pad manager
then reports `trigger=0x00004800` (action bit 11) exactly once, as it does for a real press.

The remaining question is therefore narrower: which bit does the *retail* machine's
`extrwi. r0,r0,1,2` read, and what does `0x80534294` need to test for `SetMode(2)` to run. Instrument
`ctx->cr` at `0x80534288`–`0x80534298` and compare with `f0/f9` — that single measurement settles it.
The cheapest way to get it: the generated chunk assigns `ctx->pc = 0x80534288u;` before every instruction,
so insert a one-line `printf` there **in `build/recomp/generated/chunks` as a throwaway measurement**, run
once, then immediately `python tools/recomp_harness.py lift` to restore the generated file. Editing a chunk
as a *fix* is forbidden (handover 5c.1); using it as a temporary instrument and re-lifting is not. Toolchain note: the
recompiler's sources are excluded from git (`tools/DolRecomp/` in `.gitignore`); rebuild them with
`ninja -C tools/DolRecomp/build` and re-lift (`python tools/recomp_harness.py lift`).



### 5c.11 Why the water/reflection is black and pink: EFB copies are not emulated

The title's lake surface (and every effect that samples the framebuffer) is a render-to-texture pass:
the game renders the scene, copies the EFB into a texture, then samples that texture on the water. The
copy is issued through the GX BP registers, and the pipeline implements none of them.

Measured with `TLS_F900_PROBE=1 TLS_F900_FRAME=2340` (the existing per-BP dump):

```
[F900 BP] reg=0x49 val=0x000000     <- TEXCOPYSRC (source rect: left/top)
[F900 BP] reg=0x4A val=0x06FE7F     <- TEXCOPYSRC (right/bottom)
[F900 BP] reg=0x4B val=0x829B7F     <- TEXCOPYDST (dest address, format, stride)
[F900 BP] reg=0x52 val=0x01003B     <- TEXCOPYEXEC (do the copy; clear flags)
```

`gx_pipeline_process_bp()` handles only `0x00` (GENMODE), `0x40` (ZMODE), `0x41` (CMODE0), `0x4F`/`0x50`
(clear colour), `0xF3` (alpha compare), `0x64`/`0x65` (TLUT), `0x30` (matrix index) and the vertex
descriptor registers. `0x49`/`0x4A`/`0x4B`/`0x52` are ignored, so the destination texture keeps whatever
was in MEM2 - which is exactly the black interior and pink sky-coloured region on the lake surface in
`10-title-hero-cave-frame2200.png`. `GXCopyDisp` (0x805... via `recomp/replacements.c:5620`) runs the
original guest code, so the *display* copy path exists; only the EFB->texture path is missing.

**The copy registers are decoded** (`tools/decode_bp_copy.py`, validated against the two copies the
game issues every frame at 2340):

| Register | Value | Meaning |
|---|---|---|
| `0x49` | `0x000000` | source left/top = (0,0) |
| `0x4A` | `0x06FE7F` | source right/bottom = (639,447) - the full frame |
| `0x4A` | `0x01BC9F` | source right/bottom = (159,111) - quarter-res reflection |
| `0x4B` | `0x81C68E` | dest phys `0x1038D1C0` = guest `0x9038D1C0`, format 0 (RGBA8) |
| `0x4B` | `0x829B7F` | dest phys `0x10536FE0` = guest `0x90536FE0`, format 0 (RGBA8) |
| `0x52` | `0x010A43` / `0x01003B` | execute the copy |

Layout: `0x49`/`0x4A` hold `x` in bits 0..9 and `y` in bits 10..19; `0x4B` holds **dest address >> 5 in
bits 0..23** (the low five bits are implicit, which is why a 22-bit field cannot reach MEM2) and the format
in bits 24..26; the guest address is `physical + 0x80000000` (flat model). Both destinations land in MEM2
next to the other texture allocations, which is the cross-check that the decode is right.

**The registers are now recorded and every copy is reported** (`TLS_EFB_COPY_PROBE=1`), which names
all four destinations the game copies into every frame:

```
[EfbCopy] #1 src=(0,0)-(639,447) dst=0x900997E0 fmt=0   <- VI framebuffer 0
[EfbCopy] #2 src=(0,0)-(639,447) dst=0x9038D1C0 fmt=0   <- reflection/blur texture
[EfbCopy] #3 src=(0,0)-(639,447) dst=0x90536FE0 fmt=0   <- second reflection target
[EfbCopy] #5 src=(0,0)-(639,447) dst=0x900037C0 fmt=0   <- VI framebuffer 1
```

So the missing feature is not only the water: it also means **the guest never writes its own VI
framebuffers** (`0x900037C0`/`0x900997E0` are the two addresses the runner dumps at shutdown, and they
come out as uniform garbage - the visible picture only exists because the D3D11 backend draws the decoded
GX primitives itself). Implementing the copy fixes the water, the menu blur/reflection *and* the guest XFB
in one change.

**What implementing it needs** (next task, not started): on `0x52` read back the current EFB region from the D3D11 render target
(the screenshot path in `gfx_d3d11.c` already does `CopyResource` + `Map(READ)` into a staging texture)
and convert it to the destination format the register names (RGBA8 first; RGB565 next), then write it into
guest memory at `dest`, honouring the source rectangle. That single feature covers the water, the menu
blur/reflection and most effect textures that currently sample uninitialised memory.

**Per-batch dump probe (new, inert unless set).** `TLS_BATCH_DUMP=<frame>` prints every draw batch of
that frame with `vtx`, texture address/size/format, `blend/src/dst/sub`, `persp/zwrite/ztest` and the
batch's vertex-coordinate range, which is how a black region can be attributed to a batch instead of
guessed at (example at frame 2340: 51 batches, all `fmt=14` = CMPR, batches 0-18 opaque depth-writing,
19+ blended particles/UI).

### 5c.7 The stop is the boot thread's own loop ending at frame 829

> **Superseded by §5c.9.** The loop did not "end": the boot thread returned into garbage because an
> allocation had overwritten its stack frame. The measurements below are still the ones that pinned the
> frame; the conclusion is not.

Two new probes pin the transition exactly. `tls_dump_taps()` records call count and first/last frame
for the four GameTask methods plus the sequence manager:

```
GameTask::Init            calls=31     first=658   last=829
SequenceManager::Update   calls=472    first=167   last=829
(GameTask::IsReady / Update / Draw: 0 calls on this path)
```

`TLS_SLEEP_TAIL=1` keeps the last 32 `OSSleepThread` calls. **Every one of them is thread
`0x807CB658` sleeping on `0x807C6F60` from `lr=0x80071D08`** — the GX-fifo drain loop — and the last
one is at **frame 828**. There is no sleep after it, so the boot thread does not block at the end; it
stops looping.

The last 64 non-idle dispatches end like this:

```
0x800C3720   SequenceManager::Update
0x800D28FC   task update dispatch
0x80534074   <-- last dispatch; nothing after it
```

`0x80534074` is a method of the title/sequence task class (slot 4 of vtable `0x80793A20`); the code
around it stores draw-command fields into `*(r31+712)`. After that call the boot thread never returns
to its loop: `RunQueueBits` is 0, no queue holds it, and the OS idles.

So the remaining defect is now a single question about the boot thread's main loop: **what makes it
exit (or stop re-entering `SequenceManager::Update`) right after the frame-829 dispatch?** The likely
candidates are a loop-termination flag set through the sequence unit, or a yield path that leaves the
thread unrunnable without enqueueing it. The probes to answer it are already in place: `TLS_SLEEP_TAIL`
for the sleep side, `TLS_WATCH_ADDR` on the loop's state words, and `tls_dump_taps()` for which
method stops first.





### 5c.3 Remaining fake-progress in the HLE (next to remove)

- `case 0x805F3A80 / 0x805F3B00 / 0x805F3B40` in `recomp/replacements.c` return "success"
  immediately, but the recompiled runtime's real `OSSendMessage`/`OSReceiveMessage` are
  `0x805F26D0` / `0x805F27A0`. Annotated in place as an open item — identify before touching.
- `0x800A555C` action 4 (`sim_press`) and the `--game` sequence override
  (`mem_write32(mgr+80, 2)` in `0x800C3720`) advance the title without real input. They are what
  lets a headless run reach Chapter 1 at all, but they are synthetic triggers. The replacement is a
  frame-indexed deterministic input script feeding the same host input state the keyboard feeds.

### 5c.4 New debug switches (all inert unless set)

| Variable | Effect |
|---|---|
| `TLS_MEMCPY_PROBE=1` | names any `memcpy` whose destination is below `0x80004000` (OS low page) |
| `TLS_WATCH_CURRENT_THREAD=1` | reports every `__OSCurrentThread` change, flags non-thread values |
| `TLS_WAIT_PROBE=1` | logs `OSSleepThread` on the `0x807C6Fxx` queues with the two halfword counters and a guest stack walk |
| `TLS_DUMP_OBJ=0x…` | hex-dumps that guest address at shutdown plus every heap pointer it finds in it, with inline file names |
| `TLS_NO_FRAMEQUEUE_HACK=1` | stops the runner from rewriting `0x807C6FBA` / force-waking `0x807C6F60` every vblank |
| `TLS_DUMP_EVERY=<n>` | (existing) dense frame capture |
| shutdown | `tls_dump_sleep_queues()` always prints occupied `OSThreadQueue`s with each waiter's stack |

**Build/run note:** `build/` is git-ignored, so the re-lift is not in git history —
run `python tools/recomp_harness.py lift` after checking out.

