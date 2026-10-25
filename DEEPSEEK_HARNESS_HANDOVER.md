# DeepSeek Harness Handover Dossier: Project The Maybe(Not) Last Story

> ## READ THIS FIRST
>
> **Read §5c.15 first - it is the current state.** Everything from §3 to §5c.14 is history and several of its
> conclusions are now disproven. The short version:
>
> * **The 3D renderer is fine.** At the title MENU frame 1450, drawing only the first 30 draw batches gives a
>   complete, correct cave-and-lake vista (`docs/evidence/18-...`). `TLS_BATCH_CUTOFF=<n>` is the new
>   instrument that shows this in one run.
> * **The flat MENU background is the game's own post-processing chain**, batches `b30..b49` (~20 fullscreen
>   quads that sample EFB-copy destinations and replace the framebuffer). §5c.14's "closed feedback loop with
>   an arbitrary fixed point" is wrong: the chain is what covers the scene, and it is what is still broken.
> * **EFB copies now genuinely can see the frame as drawn so far** (`TLS_DEFER_EFB_COPY=1`): the pipeline
>   records every `GXCopyTex` with the vertex index current at that command and the backend replays the queue
>   inside its batch loop. Measured per copy: clear `(0,0,0)` -> cave `(52,59,61)` -> `(69)` -> `(117)` ->
>   `(219)` -> `(244)` -> `(255,255,255)` for the VI scanout copy. So the chain saturates the framebuffer to
>   white within one frame. That mode is **not the default** because the title attract screen also breaks
>   under it (flat white), which means the composite tail has a second defect still to find. The default is
>   byte-for-byte the 510426d behaviour.
> * **Two EFB copies really are half-scale** (`0x90395DC0` and `0x903917C0` are written from a 640x448 source
>   rect but sampled as 320x224), which refutes §5c.14's "all copies are 1:1". Cutting the batch list at 39
>   shows the signature: 4-pixel horizontal stripes, i.e. a 4x4-tiled image read with half the tiles-per-row
>   (`docs/evidence/19-...`). `src/GXFrameBuf.c` decodes the register set for us: BP 0x4B = destination
>   address>>5, **BP 0x4D = the only destination-geometry value the hardware sees**, BP 0x52 = fmt/mipmap/
>   clamp/clear. BP 0x4D is now decoded and printed as `pitch=`; it does not on its own decide the scale, and
>   pinning that down is the single next step (§5c.15 item 7).
> * **The post-handoff stall (§5c.12) is unchanged**: `GameTask::Init` 81 calls, last at frame 1882, one
>   streaming request stuck at `status=1`, whole block budget burned, no draws. Still the gateway to Chapter 1.
>
> **First commands.**
> ```powershell
> git log --oneline -6
> python tools/recomp_harness.py build-runner           # chunks are already lifted; ~1 s
> Remove-Item SaveData\savedata.dat -ErrorAction SilentlyContinue
> $env:TLS_INPUT_SCRIPT="600-612:A,900-912:A,1200-1212:A,1300-1312:UP,1350-1362:A,1500-1512:A"
> $env:TLS_SHOT_FRAMES="1450"
> build\recomp\tls_runner.exe --window --frames 1460 --fps 60 --no-audio
> $env:TLS_BATCH_CUTOFF="30"                            # the scene without the post chain
> ```
> This session needs **full file access**; under workspace-write, writes to `build/`, `recomp/`, `tools/`
> and `docs/` fail with Win32 error 5 even though the Windows permissions are fine.

---

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
> (the series' title screen is a cave with a lake and sky through the opening). The engine runs the title
> sequence end to end: `GameTask` is its frame host, and the taps `GameTask::Init` → `Update`/`Draw` are
> that sequence running. **The title now does hand off** (§5c.12): with a real multi-press input script the
> menu appears, the save dialog is answered, NEW GAME is selected, and mode 25 issues
> `SetNextSequence('Game')` → `CreateGameTask` → `GameTask::Init`, which streams ~300 files before the run
> stalls (see item 1 below). Chapter 1's own scene has therefore not been reached yet, but the title's own
> state machine - not a synthetic press - is what gets the engine to the Game sequence.

>
> **Also corrected:** §5c.8's "single next target" (the host-callback sentinel leak) was a *symptom* of
> that stack corruption, not a cause. The leak itself has never been observed; it is now repaired if it
> ever happens (`host_repair_sentinel_in_thread`, `TLS_HOSTCALLBACK_PROBE`).
>
> **Where the work stands / next targets.** The title sequence runs end to end, accepts real input, shows
> its menu, creates a save file and hands off to the Game sequence (§5c.12). Open items, in the order they
> are worth attacking:
> 1. **The post-handoff stall (§5c.12).** After `GameTask::Init` streams ~300 files the engine stops
>    dispatching the game task, issues no more DVD reads (one request stuck at `status=1`) and draws
>    nothing, yet still burns every frame's whole block budget. Measured *not* to be the allocator, not a
>    single hot loop and not a lost wakeup. Next: resolve the `TLS_PC_HIST` top PCs and tap
>    `StreamManager::Update` (`0x8046DD60`) after frame 1882.
> 2. Water/reflection and the guest framebuffers. §5c.11: EFB copies were not emulated at all and now are
>    (`0x49/0x4A/0x4B/0x52` decoded, viewport-scaled readback of the completed frame, write into guest memory
>    verified with `TLS_EFB_SAMPLE`). **§5c.13 closes the encoding question**: at a bright frame both classes
>    decode to the real picture (16-bit RGB565 rows for the two 614400 B VI buffers, 4x4-tiled RGBA8 for the
>    texture copies), and what remains is the destination *size* - `GXSetTexCopyDst` half-scaling, which the
>    writer ignores, so mip copies write 4x the bytes their destination was allocated for. That is the likely
>    cause of both the flat cyan MENU background (a fullscreen quad replacing the rendered scene) and possibly
>    item 1's stall, since every half-scale copy overruns MEM2.
> 3. The two boot-time non-code dispatches (`0x005F2A10`, `0x005F2A90`, both `lr=0x805F2F18/48` at
>    frame 0) are still handled by the generic safeguard and deserve a name.
>
> **First commands.**
> ```powershell
> git log --oneline -14                                 # 0e788e3..559254a are the current session
> python tools/recomp_harness.py build-runner           # chunks are already lifted; ~1 s
> $env:TLS_INPUT_SCRIPT="600-612:A,900-912:A,1200-1212:A,1300-1312:UP,1350-1362:A,1500-1512:A"
> build\recomp\tls_runner.exe --window --frames 2400 --fps 60 --no-audio
> ```
> Walks the title's whole state machine (menu on screen at frame ~1434), answers the save dialog with Yes,
> selects NEW GAME and hands off to the Game sequence at frame ~1539. Screenshots are written automatically
> at frames 100…1800 (`TLS_SHOT_FRAMES=<n,...>` adds more). If `build-recomp` writes are denied, the
> workspace sandbox needs full file access for this session (see §5c.4 note).
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

> **CORRECTED in §5c.12 — no condition-register change is needed and none was made.** The excerpt above
> dropped the `mfcr r0` at `0x80534290`, and the extract reads **bit 29**, not bit 28: `extrwi r0,r0,1,2`
> is `rlwinm r0,r0,3,31,31`, i.e. `rotl32(mfcr,3) & 1` = source bit 29 = `0x20000000` = CR0[EQ] in exactly
> the layout this emitter already produces. The gate simply opens on the press *after* the one that arms
> it, and the reason a second press never arrived was a `strtok` bug in the input script loader, not CR
> numbering. Verified in the generated chunk (`bc 12,2` testing `0x20000000`) and in the run: with a
> multi-entry script the title walks 1→2→3→4→5→6→7→8→9→11→12→16→17→18→19→20→22→25 and hands off to the
> Game sequence. See §5c.12.

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

> **Resolved in §5c.12: the bit is CR0[EQ] (bit 29) and the gate never needed a fix.** The source listing
> in `src/game_net_spectate_cam.c` has the missing `mfcr r0` at `0x80534290` (line 686 of that file:
> `cror eq, gt, eq` / `mfcr r0` / `extrwi. r0, r0, 1, 2` / `beq`), and the generated chunk emits
> `rotl32(ctx->gpr[0], 3u) & 1u` followed by `bc 12, 2` testing `0x20000000` — i.e. CR0[EQ], the value
> `cror` just produced. Both are architecturally correct. What actually stopped the mode machine was that
> `TLS_INPUT_SCRIPT` only ever loaded its **first** entry, so the second press that the gate needs never
> reached the pad. Fixed; the title now reaches the game sequence.



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

**First implementation landed, timing still wrong.** `0x52` now calls a backend hook
(`gx_pipeline_set_efb_copy_hook`) and `gfx_d3d11.c` implements the copy: read the requested GX-space
rectangle out of the backbuffer through a staging texture (viewport rect captured in `d3d11_present`),
then write it into guest memory as a GX RGBA8 texture in the same 4x4 tile layout that
`decode_gx_texture()` reads (32 bytes of A/R pairs then 32 bytes of G/B pairs per tile). Measured effect:
the guest VI framebuffers are no longer uniform - `framebuffer_0/1.ppm` went from 1 unique colour to 2948
and 507 - and the run is stable (950 frames, no exception, picture unchanged).

*When* the copy happens was fixed the same round: `d3d11_present()` ends by copying the finished
backbuffer into `s_d3d11.efb_snapshot` and EFB copies read that, so a mid-frame copy sees the last
completed frame instead of the mid-frame clear. Diagnostics confirm the ordering (`[EfbSnapshot] created
1280x720`, `[EfbCopySrc] snapshot ...` from frame 2 onward) and that the clear colour is black, not green.

What the framebuffer dump still cannot show is the *picture*: the guest copies into a **4x4-tiled RGBA8**
texture, while the runner's `framebuffer_*.ppm` writer reads the VI buffer linearly, so a correct copy looks
like scrambled green blocks in the dump (1073/633 unique colours instead of 1 uniform one - the buffer is
demonstrably being written). `TLS_EFB_CHECK=1` (with `TLS_EFB_CHECK_FRAME=<n>`) counts the distinct byte
values in the first 4 KB of every copy destination: the first copies of a run report 1-2 values, which is
correct for them - they happen while the screen is still black. A check gated at frame 1450 produced **no
output at all**, i.e. the guest issued no EFB copy in that frame window, so the lake frame that needs
checking is a different one; gate the check on a frame where `TLS_EFB_COPY_PROBE` shows copies happening
(e.g. 2340). Next steps, in order: (a) teach the dump to decode the VI buffer with the
format the guest actually configured (or decode the tiled RGBA8), then (b) look at the lake at a frame where
the water is on screen to confirm the reflection, and (c) check that the staging readback (up to 5 copies
per frame, each a GPU->CPU sync) does not cost too much frame time.

**(a) is done and it proves the copy works.** The dump assumed YUV422; `TLS_FB_RGBA8=1` decodes the guest VI
buffer as 4x4-tiled RGBA8 instead, and the dumped buffer now contains the game's own picture:
`docs/evidence/12-efb-copy-guest-framebuffer.png` shows "THE LAST STORY" and the "PUSH" prompt in the guest
framebuffer (15827 unique colours, up from 1 uniform colour). So pixels really do travel GPU -> guest memory
through the new path. Two residual artefacts are visible in that image and are the next thing to fix: the
frame appears **doubled** (logo near the top and again in the middle - a tile-row/stride offset in the write)
and there is a bright green field plus a noisy strip (the two VI buffers being copied at different times).
Fixing the tile-row offset is the last step before the lake can be judged visually.

One deduction already narrows it: the *source* is known-good. The D3D11 backbuffer screenshots taken at the
same frames (`d3d11_screenshot_*.ppm`, the pipeline that draws the gx batches) show a single, correctly
placed logo, so the doubling is introduced by the copy's tiled write, not by the readback. Concretely, check
in this order: (1) the destination's real row pitch - the VI buffer may be allocated wider than the 640 the
copy rect uses, in which case `tile = (gy/4)*tiles_x + (gx/4)` puts each 4-row band at the wrong byte
offset; measure it by looking for the guest's allocation size or by dumping `dst_guest` before the copy and
seeing where the previous frame's content repeats. (2) whether the write should be row-linear instead of
4x4-tiled for *display* copies (the GX display copy produces a scanout buffer; only the texture copies are
tiled) - the observed picture arrives at all, which means the tile layout is at least close, and a
linear-vs-tiled A/B on the same frame is the quickest way to tell.

That A/B now exists: `TLS_EFB_LINEAR=1` writes the copy rows linearly (R,G,B,A) instead of tiling, so both
layouts can be produced from the same frame. First result at frame 2340 with `TLS_FB_RGBA8=1`: the tiled
write gives 15827 unique colours and a recognisable (doubled) game frame; the linear write gives 14985
unique colours but 93% of the image decodes as pure white. Neither is right yet, so the destination
row-pitch question (1) is still the leading candidate - compare `build/recomp/framebuffer_0.ppm` between
the two runs before changing anything else.

**Root cause of the artefacts found (measurement only, not yet fixed).** The two VI framebuffer addresses
the display copy targets are `0x900997E0` and `0x900037C0`, i.e. **614432 bytes apart** - and
640x480x2 = 614400. Each VI buffer is therefore **16 bits per pixel** (RGB565 or YUV422), a linear scanout
buffer, *not* the 32-bit RGBA8 layout the copy writes. Writing 4 bytes/pixel for a 640x448 rect means
1146880 bytes into a 614400-byte buffer: the write runs straight past the end of one buffer into the next,
which is exactly the doubled image, the bright field and the noisy strip seen in
`docs/evidence/12-efb-copy-guest-framebuffer.png`.

So the two copy classes need different encodings and one code path cannot serve both:

| Copy | Destination | Encoding |
|---|---|---|
| display (`GXCopyDisp`) | the two VI buffers, 614400 B each | 16-bit linear scanout (RGB565 first; YUV422 if the picture is wrong) |
| texture (`GXCopyTex`) | `0x9038D1C0`, `0x90536FE0`, `0x903DBDC0`, 640x448 or 160x112 | 4x4-tiled RGBA8 (current code) |

The BP 0x4B format field reads 0 for both classes, so the distinction has to come from tracking
`GXSetDispCopyFmt`/`GXSetDispCopyYScale` state or from the destination range - implement the display path
as RGB565 linear first, keep the tiled path for the reflection textures, and check the lake reflection with

**Display path first result (RGB565 written, frame 2340).** With display copies going out as RGB565 rows and
`TLS_FB_RGB565=1` decoding the VI buffer, the dump drops from a scrambled frame to **32 unique colours** -
the write now stays inside its own 614400-byte buffer instead of overrunning into the next one, which was
the doubled image. What the dump shows is a black frame with faint blue curved outlines, i.e. the geometry
silhouette rather than the picture, so the channel order or the source sampling is still off - check
R/B order (RGB565 is BGR-ordered on the Wii) and whether the copy should sample the *object* pass before
the EFB is cleared. The buffer-boundary problem itself is fixed and measured.

**Channel order tested, content is sparse.** Swapping R and B in that dump turns the blue outlines red and
changes nothing else, so the stored order is a pure R/B swap (RGB565 vs BGR565) and *not* the reason the
image is nearly empty. What the copy captures is a handful of thin curves - the silhouette edges of the
backdrop geometry - which points at the **source sampling**, not the encoding: the copy samples the
backbuffer with `x*sx, y*sy` from a stale viewport rect or from a frame in which the fill was already
cleared, so only edge pixels land on sampled positions. Next check: print the sampled pixel for a few
known-bright coordinates (the logo text) at the frame being copied, and compare with the same coordinates in
`d3d11_screenshot_<frame>.ppm`; if the screenshot is bright there and the sample is black, the copy is
reading the wrong buffer (snapshot capture order) rather than the wrong layout.

**Answer: the source is the drawn frame.** `TLS_EFB_SAMPLE=1` (gated to frames >= 1100) scans the mapped
source on a 16-pixel grid and reports its brightness range: `src=snapshot 1280x720 avg=5.8 max=765` - i.e.
the snapshot the copy reads contains the drawn frame (pure white pixels present, average brightness matching
a mostly-black logo screen). The earlier all-black samples were the run's *first* copies, taken while the
boot screen is genuinely black. So the data flow is verified end to end: guest copy registers -> viewport-
scaled readback of a completed frame -> write into guest memory. What is left is purely the destination
encoding (the tiled/RGB565 details above), not the source.

**Ground truth for the encoding work.** The Dolphin reference texture dump is present and complete:
`%APPDATA%\Dolphin Emulator\Dump\Textures\SLSEXJ` holds **355 PNGs**. When the destination encoding of the
copy is finished, the check is not only "does the lake look right" but "do the sampled textures match those
dumps" - in particular the reflection target that receives the 160x112 copy, which is the one the water
surface samples. Compare against the matching `tex1_*` files rather than eyeballing the lake.

**Dumping the copy destinations works** (`TLS_EFB_DUMP=<first frame>`), which is the instrument for that
comparison: it writes `build/recomp/efb_tex_<n>_<addr>.ppm`, decoded with the tiled RGBA8 layout, for the
first copies after the given frame. First use at frame 1000: `efb_tex_0_9038D1C0.ppm` (640x448) decodes to
243 unique colours, 99% pure black with ~850 white pixels - i.e. the logo screen, which is what is on screen
at that point in the attract sequence, not the cave. The instrument needs a frame where the *cave* renders
(the water only samples these textures then), so pick the frame from a run that reaches it rather than a
fixed number.
`TLS_FB_RGBA8` off (the dump must then decode the XFB as RGB565, which is what its original YUV422 code
should be replaced with, not supplemented).

**What the rest of the work needs** (unchanged): on `0x52` read back the current EFB region from the D3D11 render target
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
| `TLS_SAVE_PROBE=1` | reports each `fn_800A472C` save-data status check (now runs the guest's own code) |
| `TLS_ALLOC_PROBE=1` | per-frame allocator (`fn_8022A054`) call counts; `=2` also walks all 32 free-list roots and reports a cycle |
| `TLS_PC_HIST=1` | counts every 32nd dispatched block and prints the top 8 PCs for any frame that burns its full budget |
| `TLS_PC_HIST_FROM=<n>` | gates that histogram to frames >= n (use the stalled window, e.g. 1900) |
| shutdown | `tls_dump_sleep_queues()` always prints occupied `OSThreadQueue`s with each waiter's stack |

**Build/run note:** `build/` is git-ignored, so the re-lift is not in git history —
run `python tools/recomp_harness.py lift` after checking out.

---

### 5c.12 The title hands off to the Game sequence: three fabricated answers removed, and the stall that follows

State at commit `559254a`. The two tasks the previous session left open were "make the menu choose NEW
GAME" and "the EFB copy destination encoding". The first one is now done, but not by the change the
handover expected: **the condition-register layout change was unnecessary** and the real defect was in
the host's input script loader. The EFB encoding item is still open, with the evidence below.

#### What was actually wrong: `TLS_INPUT_SCRIPT` loaded only its first entry

`tls_input_script_load()` in `recomp/replacements.c` split the spec with `strtok(buf, ",")` and then split
the button list with `strtok(buttons, "+")`. `strtok` keeps one global cursor, so the inner call destroyed
the outer iteration: `TLS_INPUT_SCRIPT="600-612:A,900-912:A,1200-1212:A"` logged exactly one loaded entry
(`frames 600-612 -> core=0x00000800`). Every press after the first never reached the pad. The parser now
splits by hand, and the parse log lists all entries.

That single bug explains the previous session's "nondeterministic, first-press-only gate": the fade gate at
`0x80534264..0x805342A4` (see §5c.10) needs **two** presses - the first stores `150.0` into
`*(*(task+0x48)+0x100)` (the `.L_805342A4` path), the second observes `f256 >= f160` and calls `SetMode(2)` -
and only one press was ever delivered.

The condition-register hypothesis is disproven by inspection of the same code:

| Address | Instruction | Generated code |
|---|---|---|
| `0x80534288` | `fcmpo cr0, f0, f9` | `ppc_fcmp(ctx, 0, ...)` |
| `0x8053428C` | `cror 2, 1, 2` | mask `0x20000000`, `value = a \| b` over bits 30 and 29 |
| `0x80534290` | `mfcr r0` | `ctx->gpr[0] = ctx->cr` (this line was missing from §5c.10's excerpt) |
| `0x80534294` | `extrwi. r0, r0, 1, 2` | `rotl32(gpr[0], 3u) & 1u` = source bit 29 = CR0[EQ] |
| `0x80534298` | `beq .L_805342D0` | `cr_ok = ((ctx->cr & 0x20000000) != 0) == true` |

Bit 29 is `0x20000000` = CR0[EQ] in the emitter's own layout (`cr_field_shift(0) = 28`, `EQ = 0x2 << 28`),
so `tools/DolRecomp` needs no change and was not touched.

#### Two more fabricated answers, in the save-data path

| Where | What it did | Now |
|---|---|---|
| `fn_800A472C` (save-data status) | returned `gpr[3]=1` plus a made-up length of 1348992 bytes | runs the guest's own four-instruction body (probe the NAND status, map the error with `fn_800A4494`, return 1 only on success). `TLS_SAVE_PROBE=1` |
| `IOS_Open` / `IOS_OpenAsync` on the save file | zero-filled a 1348992-byte `savedata.dat` whenever none existed, so **every** first boot looked like "the save data is corrupted" | `ios_open_savedata()` creates only when the guest passes the create flag and otherwise reports `IPC_RESULT_NOEXISTS` (-6). The guest then writes a real save itself |

Measured consequence (windowed, `--frames 2400`): mode 5 → 6 now shows the real dialog
`"The save data cannot be used because the data is corrupted. Recreate save data?"` with Yes/No, the cursor
starts on **No** (the selection is `*(ui+64)`, 0 = Yes), and **Up then A** takes the Yes path: mode
6 → 7 → 8 → 9 → 11, and mode 7/8 writes `SaveData/savedata.dat` for real.

#### The chain that now runs

```
frame 357  mode 1   (press any button)
601/900    press 1 arms the fade gate, press 2 -> SetMode(2) at lr=0x805342A8
962        mode 2 -> 3 -> 4 (menu build, one frame apart)
1200       press -> mode 5 (save check) -> mode 6 (save dialog)
1300 Up    move the dialog cursor to Yes
1350 A     mode 6 -> 7 -> 8 -> 9 (save written)
1434       mode 9 -> 11  <- the MENU screen, cursor on NEW GAME
1501 A     mode 11 -> 12
1531..1539 mode 12 -> 16 -> 17 -> 18 -> 19 -> 20 -> 22 -> 25
0x80535D04 SetNextSequence('Game'); CreateGameTask; GameTask::Init (81 calls, frame 1640..1882)
```

The MENU screen draws correctly (`MENU`, `CONTINUE`, `NEW GAME`, `MULTIPLAYER` with Japanese sublabels, the
selection mark on NEW GAME) - `docs/evidence/13-title-menu-newgame-frame1800.png`; **its background is a flat
cyan field** instead of the cave/lake, which is the §5c.11 EFB-copy item showing up on screen. The save dialog
that mode 6 draws is `docs/evidence/14-save-dialog-corrupt-frame1300.png`, and the black screen after the
handoff is `docs/evidence/15-post-handoff-black-frame1800.png`. ~300 `pack/filesystem.pk` reads stream in
during `GameTask::Init` (`data/material/*.material`, `data/model/pc_ga_m_a00.model`, ...).

#### The new stall: after the handoff the frame budget is consumed with no output

At frame 1882 `GameTask::Init` and `SequenceManager::Update` stop being dispatched, GX drops to 0 vertices,
no further DVD reads are issued, and the last streaming request (`data/material/pc_ga_m_a00.material`)
stays at status 1 (queued, never dispatched). Every frame still burns its **whole** block budget
(321000 blocks, ~14 ms), so the machine is not idle.

What it is *not*, measured this session:

- **not the allocator spinning.** The single per-frame PC sample (`0x8022A204`, inside the TLSF allocator
  `fn_8022A054`) suggested that, but `TLS_ALLOC_PROBE=1` shows the allocator is called only a handful of
  times per frame before the stall and **not at all** after it, and `TLS_ALLOC_PROBE=2` walks all 32
  free-list roots (through `+0x10`) and finds no cycle.
- **not a single hot loop.** `TLS_PC_HIST=1 TLS_PC_HIST_FROM=1900` counts every 32nd dispatched block: at
  frame 1900 the most frequent PC has 1.5% of the samples and the rest is spread across hundreds of
  addresses (`0x805F93C0`, `0x800761A8`, `0x8006D680`, `0x8067E23C`, `0x805ED2C0`, `0x80074EC8+0x524`, ...).
  That is a broad, expensive workload, not a trap.
- The two threads still waiting at shutdown sleep on queues `0x8087D610` (worker at `0x8071D984`, inside
  `fn_8071D950`) and `0x80879538` (from `0x805F27F8`); `TLS_LOSTWAKE_PROBE=1` reports no lost wakeup during
  the stall window (its only hits are frames 170/337).

So the next question is what the engine is *doing* for 300k blocks per frame with no DVD traffic and no
draws, and which subsystem owns the pending `status=1` request. The instruments for that are now in place
(`TLS_PC_HIST`, `TLS_PC_HIST_FROM`, `TLS_ALLOC_PROBE`, `TLS_SAVE_PROBE`, `TLS_TAIL_RING`,
`TLS_WAIT_PROBE`); the next step worth taking is to resolve the top histogram PCs to functions and tap the
`StreamManager::Update` path (`0x8046DD60`, already probed) to see whether the loader's dispatch loop ever
runs again after frame 1882.

#### Run recipe for this state

```powershell
python tools/recomp_harness.py build-runner
$env:TLS_INPUT_SCRIPT="600-612:A,900-912:A,1200-1212:A,1300-1312:UP,1350-1362:A,1500-1512:A"
build\recomp\tls_runner.exe --window --frames 2400 --fps 60 --no-audio
```

Notes: with a save file already present the mode chain differs (mode 5 → 6 loops 6→4 on each press until
the dialog is answered), so a clean first-boot measurement wants `SaveData/savedata.dat` removed first; the
dialog always starts on **No**, so the `UP` press is what reaches the Yes path; screenshots are written to
`build/recomp/d3d11_screenshot_<frame>.ppm` on every windowed run.

---

### 5c.13 EFB copies: both encodings verified correct, so the remaining defect is the destination *size*

§5c.11 left the impression that the copy destination encoding was wrong (the dumps looked sparse and
scrambled). Measured this round at a frame where the picture is actually bright (title attract, frame 2200,
`TLS_EFB_COPY_PROBE=1 TLS_EFB_DUMP=2200 TLS_FB_RGB565=1`), both classes decode to the real frame:

| Destination | Encoding written | Dump | Evidence |
|---|---|---|---|
| `0x900997E0` / `0x900037C0` (VI scanout, 614400 B) | 16-bit RGB565 rows | 640x480, 32 unique colours, "THE LAST STORY" + PUSH in the right place | `docs/evidence/16-efb-display-copy-vi-buffer.png` |
| `0x9038D1C0` / `0x90536FE0` (texture copies) | 4x4-tiled RGBA8 | 640x448, 47 unique colours, same picture, no doubling | `docs/evidence/17-efb-texture-copy-9038D1C0.png` |

So the earlier "black frame with faint blue outlines" was a *dark frame* being copied (the title's fade
screens are genuinely black apart from the logo), not a broken encoding. The buffer-overrun fix from §5c.11
(16 bpp rows for the VI buffers) is confirmed by the clean 640x480 decode.

**What is still wrong: the copy writer always uses the source rectangle's size.** `GXSetTexCopyDst` can
halve the destination (the copy command has a half-scale field), and the engine uses that to build mip
levels - `640x448 → 320x224`, `160x112 → 80x56`. The writer in `d3d11_efb_copy_to_guest()` ignores that and
writes `srcW × srcH` every time, i.e. **four times** the bytes the destination was allocated for on a
half-scale copy.

Evidence that some of these copies are half-scale:

- the same destination address is sampled at different sizes later (`0x9038D1C0` as an 80x56 RGBA8 texture
  in one batch and as a 160x112 I8 texture in another - the arena slot is reused, so the address alone
  cannot name the destination's size);
- `0x903917C0`, which the menu draws as its own 320x224 fullscreen texture, is exactly
  `0x9038D1C0 + 0x4600` - one 80x56 RGBA8 image past the copy destination, i.e. inside the range a 640x448
  write covers;
- the copy command register (`0x52`) differs by class in a way that tracks scale:
  display copies read `0x004C03`, texture copies `0x010A43 / 0x01003B / 0x010063 / 0x010263 / 0x010A63`.
  Bit 16 is clear only for the two VI copies (`copy_to_xfb`), so the scale/half-scale fields are in the low
  bits and are currently decoded as nothing at all.

**Visible consequence: the title MENU background is a flat `(119, 234, 255)` field** at frames 1450-1750
(stable over frames, uniform across ~100% of the screen), while the same frame *does* submit 40k vertices
of depth-tested 3D geometry (`b0..b11` are perspective CMPR batches) - so the scene is rendered and then
covered by one of the fullscreen composite quads the frame ends with:

```
b10 tex=0x9044CC20 320x224 fmt=4(RGB565)  blend=s4/d1 (additive)  col=0xFF444444
b11 tex=0x90429C00 320x224 fmt=4          blend=s4/d1 (additive)  col=0xFF2D2D2D
b12 tex=0x903917C0 320x224 fmt=6(RGBA8)   blend=0  (s1/d0: REPLACES)  col=0xFFFFFFFF   <- prime suspect
b13 tex=0x9038D1C0  80x56  fmt=6          blend=0                      <- a mip of the copy destination
b14 tex=0x903D77C0 160x112 fmt=6          blend=0
b15 tex=0x9038D1C0  80x56  fmt=6          blend=s4/d5 (alpha)
b16 tex=0x00000000 untextured             blend=s4/d5  col=0xF6000000  (fade overlay)
```

`b12` replaces the framebuffer with a texture whose memory our oversized copy has been writing through -
the most economical explanation for a uniform, static, wrong colour over a correctly rendered scene.

**Next step, in order.**
1. Decode the `0x52` copy-command fields by A/B: find one frame that contains both a full-scale and a
   half-scale copy (the 640x448-sourced set does both) and diff the two values. `0x004C03` (display) vs the
   texture-class values give the `copy_to_xfb` boundary; the scale bits are what is left.
2. Compute `dst_w = src_w >> half_scale`, `dst_h = src_h >> scale_vertical` in
   `d3d11_efb_copy_to_guest()` and tile for the destination size, not the source size.
3. Re-check the MENU background at frame 1450 (expect the cave/lake instead of flat cyan) and re-run the
   post-handoff stall (§5c.12) - a 1 MB overrun per half-scale copy into MEM2 is also a credible cause of the
   streaming request that never gets dispatched, so these two items may share a root cause.

> **SUPERSEDED BY §5c.14 — the half-scale theory above is wrong.** Frame-numbered copy logs
> (`TLS_EFB_COPY_PROBE=1 TLS_EFB_COPY_FROM=1440`) show every copy is 1:1: source `(0,0)-(79,55)` goes to
> `0x903917C0` which is sampled as 80x56, `(0,0)-(319,223)` to `0x90429C00` which is sampled as 320x224,
> `(0,0)-(639,447)` to `0x905C3000` which is sampled as 640x448. No destination is smaller than its source,
> so nothing overruns and no scale handling is needed. The cyan MENU background has a different cause.

---

### 5c.14 The cyan MENU background: the copies are faithful, the *composition* is a feedback loop

Read this instead of §5c.13's conclusion. Two measurements settle it.

**1. All EFB copies are 1:1 and their destinations decode to a real picture** (see §5c.13's table and
`docs/evidence/16…/17…`). The half-scale hypothesis is dead - see the block above.

**2. At the menu frames the copy destinations are a *uniform* colour, byte for byte.** Dumping the
destinations straight out of guest memory at the end of a menu run
(`TLS_TEX_PPM="0x903917C0,320,224;0x905C3000,640,448;0x9038D1C0,160,112"`, decoded as 4x4-tiled RGBA8):

| Guest texture | Size | Content |
|---|---|---|
| `0x903917C0` | 320x224 | **1 unique colour: `(119,234,255)`** in all 256 sampled texels |
| `0x9038D1C0` | 160x112 | **1 unique colour: `(119,234,255)`** |
| `0x905C3000` | 640x448 | 27 colours, dominant `(119,234,255)` |

So the copy is doing exactly what it was asked: the EFB it reads really is a flat sky-blue field. The
on-screen colour is `(119,234,255)` too, **perfectly static across frames 1450-1750**, and the same frame
submits 40k vertices of depth-tested 3D geometry (`b0..b11`, perspective CMPR batches) that never becomes
visible.

**3. The composition feeds the copy back into the framebuffer.** The tail of every one of these frames is:

```
b17 tex=0x903917C0 320x224 RGBA8  blend=0 (s1/d0 = REPLACES the framebuffer)  X,Y = [-1,1]
b11 tex=0x905C3000 640x448 RGBA8  blend=0 (s4/d1)
b12 tex=0x905C3000 640x448 RGBA8  blend=0 (s1/d0 = REPLACES again)
b13 tex=0x905C3000 640x448 RGBA8  blend=1 (s4/d0)
```

`0x905C3000` and `0x903917C0` are both *EFB copy destinations* (they receive a 640x448 and an 80x56 copy
every frame, per the `frame=1440` log). The frame therefore ends by replacing the framebuffer with last
frame's copy of itself. Combined with the fact that `d3d11_efb_copy_to_guest()` reads the **last completed
frame** (`efb_snapshot`, captured in `d3d11_present()`), that is a closed feedback loop: whatever colour the
loop starts in, it is a fixed point, and the 3D scene drawn at the start of every frame is thrown away.

**4. A second, independent defect in the same area:** `gx_pipeline_get_clear_color()` is defined and never
called. The pipeline records the guest's BP clear colour (`0x4F`/`0x50`) but `d3d11_present()` always
clears to hardcoded black, so the guest's own clear is invisible to rendering.

**Next steps.**
1. ~~Use the BP clear colour for the backend's clear~~ **DONE (commit `c676356`).** `d3d11_present()` clears
   with `gx_pipeline_get_clear_color()`; `TLS_EFB_CLEAR_BLACK=1` restores the old behaviour for A/B. The
   pipeline also stopped suppressing a legitimate clear-to-black (it used to skip publishing when all
   components were zero, which kept the previous colour alive). Measured: the boot clear is now the guest's
   `(0.25, 0.25, 0.25)` instead of a forced `(0,0,0)`, and a 1300-frame title run still completes with no
   exception. This does **not** change the MENU background - that frame's guest clear is not cyan.
2. Find the frame where the uniform colour *first* appears - it is the origin, everything after is the loop.
   `TLS_SHOT_FRAMES` frame-by-frame around the mode transition (mode 5/6 at 1201-1202) plus `TLS_BATCH_DUMP`
   on that frame; the earlier dump at 1205 already shows the same self-referential tail, so the origin is at
   or before frame 1202.
3. Make the copy see the frame *as drawn so far*, not the previous frame. The batches are currently rendered
   in one pass inside `d3d11_present()`, so a mid-frame copy has nothing of the current frame to read; the
   honest fix is to render batches incrementally (or snapshot at the copy's position in the batch stream) so
   `GXCopyTex` captures the scene pass of the same frame, as the hardware does. That also removes the
   feedback path entirely.
4. Re-test the post-handoff stall (§5c.12) afterwards - the stall's "one request stuck at status=1" is not
   explained by this, but both live in the same frame pipeline and the composition loop currently consumes the
   frame budget's worth of fullscreen work.

**New instruments added by §5c.13/§5c.14** (all inert unless set): `TLS_EFB_COPY_FROM=<frame>` adds the frame
to each `TLS_EFB_COPY_PROBE` line (and raises the cap to 40); `TLS_TEX_PPM="0xADDR,W,H;..."` dumps arbitrary
guest textures at shutdown decoded as 4x4-tiled RGBA8; `TLS_EFB_CLEAR_BLACK=1` restores the hardcoded clear.

---

### 5c.15 The copy really is one frame stale - and fixing that reveals that the *scene* is fine and the post chain is not

State at the start of this session: `510426d`, tree clean. **The 5c.14 conclusion is only half right.** The
copy does read the previous frame, and making it read the current frame is now implemented and measured - but
the flat MENU background is *not* a closed fixed-point loop. It is the game's own post-processing chain
(batches `b30..b49`) drawing ~20 fullscreen quads that sample EFB-copy destinations over the 3D scene. That is
the part that is broken, and it is still broken after the copy fix.

#### 1. The 3D scene is correct - nothing is wrong with the renderer

`TLS_BATCH_CUTOFF=<n>` (new) draws only the first `n` batches of each frame. At the MENU frame 1450,
`TLS_BATCH_CUTOFF=30` (i.e. only `b0..b29`) gives a **complete, correct cave-and-lake title vista**
(`docs/evidence/18-title-scene-post-chain-cutoff-frame1450.png`): ~40k vertices of depth-tested CMPR geometry,
no missing chunks, no colour corruption. So:

* the pipeline, the projection, the texture decode and the depth states for the 3D pass are all fine;
* everything that goes wrong at the MENU happens in the composite tail `b30..b49`;
* `TLS_BATCH_CUTOFF` is the fastest way to see "what would this frame look like without the post chain".

#### 2. Copies are now replayed in stream order (`TLS_DEFER_EFB_COPY=1`)

`gx_pipeline_process_bp` records every `GXCopyTex` (BP 0x52) in a queue (`GxPendingEfbCopy`) carrying the host
vertex index that was current at the command; a copy also becomes a batch barrier so no draw batch straddles it.
`d3d11_present()` replays the queue inside its batch loop (`d3d11_service_pending_copies`), unbinding the render
target around each read (D3D11 cannot read a resource that is bound as an output) and rebinding it afterwards.

Measured with `TLS_DEFER_EFB_COPY=1 TLS_EFB_SAMPLE_FRAME=1450`, which prints the average RGB each copy captures:

```
#0  src 640x448 dst=0x9038D1C0 pitch=80  vmark=0     avg (0,0,0)       <- the guest clear
#1  src 640x448 dst=0x90536FE0 pitch=160 vmark=0     avg (0,0,0)
#2  src 640x448 dst=0x9038D1C0 pitch=80  vmark=0     avg (0,0,0)
#3  src 320x224 dst=0x9036A1A0 pitch=80  vmark=14049 avg (0,0,0)
#4  src 640x448 dst=0x90536FE0 pitch=160 vmark=39900 avg (52,59,61)   <- the cave, after 27 batches
#5  src 160x112 dst=0x903DBDC0 pitch=80  vmark=39900 avg (37,43,44)
#6  src 640x448 dst=0x90395DC0 pitch=160 vmark=39900 avg (52,59,61)
...
#14 src 320x224 dst=0x9038D1C0 pitch=160 vmark=39966 avg (219,225,218)
#15 src 640x448 dst=0x905C3000 pitch=320 vmark=39972 avg (244,247,245)
#16 src 160x112 dst=0x903D77C0 pitch=80  vmark=40008 avg (255,255,255)
...
#22 src 640x448 dst=0x900997E0 pitch=40  vmark=40146 avg (255,255,255)  <- the VI scanout copy
```

Read that table carefully - it is the whole story:

* every copy of one frame now captures a **different** state of that frame, in the order the guest issued them
  (clear -> cave -> progressively brighter). Before the change every copy captured the same previous frame.
* the frame's own post chain therefore drives the EFB from `(52,59,61)` up to `(255,255,255)`: by the time the
  VI scanout copy runs, the framebuffer is **saturated white**, and the displayed frame is white.
* the tail of the batch list replaces the framebuffer with those destinations (`b30`, `b31`, `b35`, `b40`,
  `b46`, `b48` are `dst=0 src=1/ONE dst=0/ZERO` = replace), so the visible result is the post chain's output,
  not the scene. Cyan (before) and white (now) are both post-chain outputs.

`docs/evidence/21-deferred-copy-menu-white-frame1450.png` is that result.

**Why it is not the default yet.** With the deferred replay enabled the title attract screen also breaks
(black + gold logo -> flat white), so the composite tail has a *second*, still-unfound defect. The deferred
path therefore sits behind `TLS_DEFER_EFB_COPY=1` and the default is byte-for-byte the 510426d behaviour
(verified: attract 2200 = black/loga, MENU 1450 = `(119,234,255)`). Do not switch the default until the
post chain is understood.

#### 3. A 2-batch bisect of the tail, and what the failure looks like

`TLS_BATCH_CUTOFF` on frame 1450: `30` = perfect cave; `35/36/37` = near-black with a faint blurred glow;
`39` = **horizontal 4-pixel stripes** with the cave's colours smeared across them
(`docs/evidence/19-composite-tile-stripes-frame1450.png`); `42` = the same stripes blown out to white;
`44+` = flat white. Those stripes are the signature of sampling a 4x4-tiled RFU8 image with the wrong
**tiles-per-row**: exactly what happens when an EFB copy writes `W` pixels per row and the texture is declared
`W/2`.

#### 4. So some copies *are* downscales - and the destination geometry is in BP 0x4D, which we now decode

Matching every copy of frame 1450 against the batch that samples its destination:

| dst | copy src rect | declaration when sampled | verdict |
|---|---|---|---|
| `0x90536FE0` | 640x448 | 640x448 | 1:1 |
| `0x903DBDC0` | 160x112 | 160x112 | 1:1 |
| `0x903D77C0` | 160x112 | 160x112 | 1:1 |
| `0x905C3000` | 640x448 | 640x448 | 1:1 |
| `0x903D31C0` | 320x224 | 320x224 | 1:1 |
| `0x903917C0` | 80x56 (copy #8) | 80x56 (b33) | 1:1 |
| **`0x90395DC0`** | **640x448** | **320x224** (b30) | **half** |
| **`0x903917C0`** | **640x448** (copy #19) | **320x224** (b46) | **half** |

Both half-scale copies come from `lr=0x800AA0C4` (inside `fn_800A9E64`, `src/game_texture.c`) and both carry
raw exec `0x010263`. So the §5c.14 claim "no destination is smaller than its source" is **wrong for exactly
these two**.

`src/GXFrameBuf.c` decodes the register set for us (it is the real GX API, in asm):

* `fn_80614CC0` = `GXSetTexCopySrc(left,top,w,h)` -> BP 0x49 / 0x4A (left/top, right/bottom). Our decode is right.
* `fn_80614D30` = `GXSetTexCopyDst(w,h,fmt,mipmap)`. It writes **BP 0x4D** = `(out1*out3) & 0x3FF` where the
  outputs come from `fn_80615F30(fmt,w,h,...)`, and ORs fmt/mipmap/clamp into the BP **0x52** accumulator.
* `fn_80615560` = `GXCopyTex(dest,clear)` -> BP 0x49, 0x4A, 0x4D, then **BP 0x4B = dest>>5**, then BP 0x52.

So **the destination address really is BP 0x4B (our decode is correct) and the only destination-geometry
number the hardware ever sees is BP 0x4D**. That register was not decoded at all before; it now is
(`s_efb_copy_pitch`, printed as `pitch=` in the `TLS_EFB_COPY_PROBE` line).

Observed `(pitch, src_w)` pairs for frame 1450:

```
(80,640) (160,640) (80,320) (80,160) (160,640) (40,160) (40,80)
(320,640) (160,640) (160,320) (160,320) (80,320) (160,640) (40,160) (40,80)
```

The two confirmed half-scale copies are `(160,640)`, but `0x90536FE0` and `0x9038D1C0` are also `(160,640)`
and are 1:1. **So pitch alone does not decide the scale** - whatever distinguishes them must be read together
with the fmt/`exec` bits, and that mapping is the next thing to pin down. Candidate: the exec values that
carry a `320x224` destination are `0x010063`/`0x010843`, the two half-scale ones are `0x010263`, and
`0x010863`/`0x010A43`/`0x010A63`/`0x01003B` are 1:1 - i.e. **bit 9 (0x200) of BP 0x52 is present on the
half-scale copies but also on `0x010A43`/`0x010A63`**, whose destinations are never sampled at a conflicting
size, so those two are the A/B needed to settle it.

#### 5. Things that were tried and measured *not* to help

| change | result |
|---|---|
| make 2D batches honour the guest's own PE z-mode (the tail quads declare `ztest=1/zwrite=0`, the UI text `ztest=0`) | changes the attract screen to a flat cyan field and the MENU to a pale yellow background - reverted, because it alters the picture without any evidence it is closer to hardware |
| force the D3D11 clear to black (`TLS_EFB_CLEAR_BLACK=1`) while the deferred copy is on | MENU frame 1450 is still pure white, so the guest's BP clear (`0x4F=0x00FF00`, `0x50=0`) is not the source of the white |

#### 6. Instruments added this session (all inert unless set)

| variable | effect |
|---|---|
| `TLS_BATCH_CUTOFF=<n>` | draw only the first `n` batches of every frame. The fastest way to separate a scene problem from a composite problem. |
| `TLS_BATCH_PROBE=<frame>` | print the average framebuffer colour after **every** batch of that frame. One run maps the whole post chain; this is how `b33` was found. |
| `TLS_DRAW_ORDER=1` | one line per copy with the batch index it is serviced before, plus `vmark`, interleaved with the per-batch dump. This is what produced the draw/copy ordering above. |
| `TLS_EFB_SAMPLE_FRAME=<n>` | one `[EfbSampleCopy]` line per copy of guest frame `n`: destination, source rect, **and the average RGB the copy captured**. The single most useful new probe. |
| `TLS_DEFER_EFB_COPY=1` | replay copies in stream order (current-frame source) instead of inline (previous-frame source). |
| `TLS_EFB_PREV_FRAME=1` | force the previous-frame source even in deferred mode. |
| `TLS_EFB_COPY_PROBE` (extended) | the copy line now also prints `pitch=` (BP 0x4D), `vmark=` and `batches=` (how many draw batches already exist when the copy is issued). |
| `TLS_F900_PROBE` (extended) | every BP line now prints `pc=` and `lr=`, which is how the copy call sites were found (`lr=0x800B8EDC/0x800B8FD0/0x800B9028` -> `fn_800B8964`/`fn_800B8F40`, `0x800B6ABC` -> `fn_800B6A00`, `0x800C05F0` -> `fn_800C0590`, `0x800AA090/0x800AA0C4/0x800AA194` -> `fn_800A9E64`). `config/symbols.txt` resolves these; `build/resolve.py` (written this session) does it in one command. |

#### 7. Next step, in order

1. Decode the **half-scale discriminator**. Add BP 0x4D to the per-copy log together with the exec value and
   A/B the `(pitch, exec)` pairs across a frame that contains both a known half-scale and a known 1:1 copy of
   the same pitch (frame 1450 already does: `0x90395DC0` half vs `0x90536FE0` 1:1, both pitch 160).
2. Then `dst_w = tile_pitch_from_0x4D`, `dst_h = dst_w * src_h / src_w` and write the destination tiled with
   `tiles_x = dst_w / 4` (and downsample the source when they differ). The stripes in evidence 19 say the
   tiling width is the visible symptom.
3. Re-check `TLS_BATCH_CUTOFF` frame by frame at 30..49 with the deferred copy on: the target is
   "cut=39 looks like cut=30 with bloom on top", not stripes.
4. Only then consider making `TLS_DEFER_EFB_COPY` the default, and re-baseline the attract screen.

#### 7b. Half-scale implemented from BP 0x52 bit 9 - stripes gone, and the frame-by-frame map of the chain

Steps 1-2 above were carried out before this handover was finished, so read this before redoing them.

**The rule, now settled: `half_scale = (BP 0x52 & 0x200) != 0`.** Verified by cross-checking every copy of
MENU frame 1450 against the size the *sampling* batch declares for the same address:

| BP 0x52 | destination | written from | sampled as | |
|---|---|---|---|---|
| `0x010263` | `0x90395DC0` | 640x448 | 320x224 | half |
| `0x010A63` | `0x9038D1C0` | 160x112 | 80x56 | half |
| `0x010A43` | `0x9038D1C0` | 640x448 | 320x224 | half |
| `0x010063` / `0x010843` / `0x01003B` / `0x010863` / `0x004C03` | | | | 1:1 |

Bit 11 (`0x800`) is **not** part of the scale - `0x010A43`/`0x010A63` have it set and are half-scale. The
first version of this rule required bit 11 clear and therefore missed those two; the per-batch probe below
caught that within one run.

`d3d11_efb_copy_to_guest()` writes `dst_w = w/2`, `dst_h = h/2`, samples every second source pixel and tiles
with `tiles_x = dst_w/4`. **It is applied only in the deferred path** - applying it to the inline path changes
the default picture (`(119,234,255)` -> `(255,234,119)`) while the chain is still unfixed, so
`TLS_DEFER_EFB_COPY` unset keeps the 510426d behaviour exactly.

**`TLS_BATCH_PROBE=<frame>`** (new) prints the average framebuffer colour after *every* batch. It is the
instrument that maps the chain in one run. With `TLS_DEFER_EFB_COPY=1`, frame 1450:

```
b0..b30   the 3D scene builds up                        (7,8,8) -> (62,70,76)   <- the cave
b31 0x90395DC0  replace s=1 d=0                          (75,68,61)   the scene copy, half-scale
b32 0x9038D1C0  replace s=1 d=0                          (39,45,46)   darker than the scene
b33 0x9038D1C0  blend s=2 d=0  (SRCCLR / ZERO)           (0,1,1)      <-- DESTROYS THE FRAME
b34 0x903917C0  additive s=4 d=1                         (3,3,2)
b35 0x9038D1C0  additive s=4 d=1                         (7,8,7)
b36 0x903DBDC0  replace s=1 d=0                          (47,46,39)   the chain restarts from a small copy
b37 0x9038D1C0  blend  s=1 d=1                           (57,58,50)
b38 0x9038D1C0  additive                                 (106,115,106)
b39 0x903D31C0  additive                                 (204,215,204)
b40 0x905C3000  additive                                 (224,233,225)
b41 0x905C3000  additive                                 (252,253,252)
b42 0x903917C0  replace                                  (252,253,252)
b43 0x9038D1C0  additive                                 (255,255,255)  <- saturated
b44 0x903D77C0  replace                                  (251,253,251)
b45..  UI text / logos, all additive                      (199..251)     white-on-white, invisible
```

So: **`b33` is the pass that blackens the frame** (`s=2` = GX_BL_SRCCLR, `d=0` = GX_BL_ZERO gives
`dst = src*src`, i.e. squaring a 0.15 image to ~0), and **`b38..b43` then additively re-brighten whatever
`b36` put back** until the frame saturates to white. Two things are therefore still wrong and they are
independent:

1. `b33`'s blend reads as a self-multiply that discards the destination. That is what the CMODE0 field
   decode produces (`src=(val>>8)&7`, `dst=(val>>5)&7`, `subtract=(val>>11)&1`, which is correct for the
   ordinary alpha batches - `0x00F4B9` decodes to `SRCALPHA/INVSRCALPHA`), so either this batch legitimately
   is `SRCCLR/ZERO` and the *destination* it expects is different, or the `dst = dst*src` form the chain
   clearly wants means the two factor fields need re-deriving from `src/GXFrameBuf.c`
   (`fn_80615400`/`fn_80615420` write CMODE0). **Next concrete step: log the raw CMODE0 value alongside the
   decoded factors for `b31..b45` on one frame** - a one-line change to the existing batch dump.
2. `b36` restarts the chain from `0x903DBDC0` (a 160x112 copy) with `replace`, which throws away the scene
   (already at `(62,70,76)`); the chain only ever gets back to ~`(47,46,39)`. If `b36` is meant to composite
   over the scene, its blend/depth state is wrong.

Both are cheap to test now that `TLS_BATCH_PROBE` exists: change one thing, run one frame, read the trace.

#### 7c. Two run-to-run facts to know before trusting frame numbers

* **Frame numbers shift between runs.** The title sequence is wall-clock paced, so the same input script
  reaches the handoff at different frames: `GameTask::Init calls=81 first=1640 last=1882` on one run and
  `first=1490 last=1732` on the next, with the same binary and same script. Treat "frame 1450" as
  "somewhere in the MENU", and always re-measure a probe frame in the run that produced it.
* **There is a rare, pre-existing heap corruption.** One 2400-frame run died with exit `0xC0000374`
  (`STATUS_HEAP_CORRUPTION`) at about frame 840, before the second scripted press, with the title still in
  mode 1 and the pad edge seen only once. The immediately following run of the identical command completed
  2400 frames with `CPU Exception: 0x00000000`. It is not caused by anything in this session's changes
  (the same binary passes), but it is unexplained and it looks like the §5c.9 family of failures. Worth a
  `TLS_ALLOC_PROBE=1` + `TLS_TAIL_RING` run if it reproduces.

#### 8. Run recipes used this session

```powershell
python tools/recomp_harness.py build-runner
# clean first boot + walk the title to the MENU (measured: no exception, handoff at ~1539,
# and the post-handoff stall of 5c.12 unchanged: GameTask::Init 81 calls, last 1882)
Remove-Item SaveData\savedata.dat -ErrorAction SilentlyContinue
$env:TLS_INPUT_SCRIPT="600-612:A,900-912:A,1200-1212:A,1300-1312:UP,1350-1362:A,1500-1512:A"
$env:TLS_SHOT_FRAMES="1450"
build\recomp\tls_runner.exe --window --frames 1460 --fps 60 --no-audio

# the scene behind the post chain
$env:TLS_BATCH_CUTOFF="30"     # -> docs/evidence/18

# what each copy actually captures
$env:TLS_DEFER_EFB_COPY="1"; $env:TLS_EFB_SAMPLE_FRAME="1450"
```

The canonical 2400-frame run still completes with CPU exception `0x00000000`, still hands off
(`SetNextSequence('Game')` at `lr=0x80535D04`), still stalls exactly where §5c.12 describes, and the
attract-mode title screen is unchanged from `510426d`.





