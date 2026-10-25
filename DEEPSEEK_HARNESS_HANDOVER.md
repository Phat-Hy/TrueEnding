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
> * **§5c.16 (current)**: the GX **TEV stage is implemented** (`TLS_TEV=1`, opt-in). BP `0xC0..0xDF` /
>   `0xE0..0xE7` / `0xF6..0xFD` / `0xF3` are decoded and evaluated per pixel; probe with
>   `TLS_TEV_PROBE=<frame>`. Measured: the 3D batches really run **3..9 TEV stages over up to 6 texmaps**,
>   so the old `tex*vertexColour` shader was wrong everywhere. With `TLS_TEV=1 TLS_DEFER_EFB_COPY=1` the
>   MENU now draws its gold text over a bloom (`docs/evidence/22-...`) instead of a flat cyan field - but
>   the bloom is ~10x too bright, so the composite chain is still open (5c.16 item 4).
> * **§5c.18 THE VERDICT on the b37/b38 gate: hardware does NOT reach 1.0.**
>   `docs/evidence/27-dolphin-menu-frame1440.png` is Dolphin at the same MENU moment (same input
>   script): a dark cave scene, gold `MENU`/`NEW GAME`, one small lamp glow, frame average
>   `(23,25,18)`. **No white ellipse anywhere.** And `§5c.19 §7` settles *why*: on a bright static
>   frame (base 204) every copy in the frame reads 220, so hardware's EFB copies **do not
>   accumulate** - a frame's copies all read one snapshot, and `TLS_DEFER_EFB_COPY=1` (which replays
>   them in stream order) is the defect, not the fix. What remains is that the host's *scene* is ~3x
>   too bright (`(76,70,62)` vs `(23,25,18)`), and the additive passes multiply that excess.
>   `TLS_EFB_COPY_GEOM=1` (destination size from the BP 0x4D pitch) is correct but does not fix the
>   bloom; TEV compare stages are now evaluated instead of skipped (`bc02c21`). The default path
>   still measures `(124,235,255)` at MENU 1448, unchanged.
>
> * **§5c.15**: see below for the copy-ordering work and the batch bisect instruments.
>> **First commands.**
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

#### 7d. The tail quads have a WHITE vertex colour, so the additive passes add at full strength

`TLS_BATCH_PROBE` now prints `col0` (the first vertex colour) as well. Frame 1450, deferred mode:

```
b33 0x90395DC0 replace s=1 d=0 col=0xFFFFFFFF     (62,59,53)
b34 0x9038D1C0 replace s=1 d=0 col=0xFFFFFFFF     (36,41,42)
b35 0x9038D1C0 blend  s=2 d=0 col=0xFFFFFFFF      (0,1,1)       <-- squaring, blackens
b36 0x903917C0 add    s=4 d=1 col=0xFFFFFFFF      (0,1,1)
b37 0x9038D1C0 add    s=4 d=1 col=0xFFFFFFFF      (0,1,1)
b38 0x903DBDC0 replace s=1 d=0 col=0xFFFFFFFF     (44,43,37)
b40 0x9038D1C0 add    s=4 d=1 col=0xFFFFFFFF      (80,84,80)    +36
b41 0x903D31C0 add    s=4 d=1 col=0xFFFFFFFF      (132,140,132) +52
b42 0x905C3000 add    s=4 d=1 col=0xFFFFFFFF      (160,170,164) +28
b48 0x905C3000 add    s=4 d=1 col=0xFFFFFFFF      (230,235,230) +69
b50 0x9038D1C0 add    s=4 d=1 col=0xFFFFFFFF      (254,254,254)
b52 0x9038D1C0 blend  s=4 d=5 col=0xFFFFFFFF      (255,255,255) saturated
```

Every composite quad except the last few logos carries `col0 = 0xFFFFFFFF`, so
`texColor.rgb * input.color.rgb` is no modulation at all and `src=SRCALPHA/dst=ONE` adds the
**full** texture. The additions (+36, +52, +28, +69) are therefore exactly the source textures'
average brightness, which is why five additive passes drive 0.17 -> 1.0.

`b35`'s `s=2 d=0` (`SRCCLR/ZERO`, i.e. `dst = src*src`) is very likely a legitimate cheap GX
bright-pass - squaring crushes the darks and keeps the brights - so it is probably *not* the bug.
What makes the chain saturate is that the additions run at full strength.

**Conclusion: what is missing is the TEV alpha/colour stage.** `gx_ps_alpha` computes
`alpha = texColor.a * va`; both `va` and the EFB alpha are ~1 for the 3D pass, so every additive
composite quad contributes 100%. Real GX runs those quads through a TEV stage that scales RGB and
alpha before the blend, which is exactly the machinery AGENTS.md already notes as absent (the "ink
matte" workaround for the logo plate is a local patch over the same gap). Implementing the TEV
colour/alpha combiners is therefore the next real milestone for the MENU background, not another
EFB-copy tweak.

Note also that the original (inline, previous-frame) copy source produced a *cyan* field, and cyan
appears nowhere in the squaring/additive arithmetic above - so it comes from a texture, not from the
chain maths. That is a second, separate reason the two modes differ.

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







### 5c.16 The TEV stage is now implemented: the MENU renders its own text over a bloom

State at the start of this session: `0d4699f`, tree clean. Session-setup note first, because it cost
time: **under `workspace-write` this workspace is unwritable**. The shell token is Low integrity, the
workspace root is labelled Low, but every directory created before ~Oct 2 still carries the Mid
integrity label it inherited from `G:\Program`, so `Set-Content build\recomp\_t.txt` fails with
"Access is denied" even though the DACL grants `PHATS\hypha:(F)`. Proven by `icacls build
/setintegritylevel` failing from inside the sandbox and a freshly created directory under the root
being writable. One unconfined `icacls "<root>" /setintegritylevel "(OI)(CI)low" /T /C` fixed the
whole tree (34872 files; 818 under `tools/w64devkit` stayed denied, which is harmless).

#### 1. The TEV register file is captured (gx_pipeline)

`gx_pipeline_process_bp` now decodes, with Dolphin's field layout
(`VideoCommon/BPMemory.h`, vendored to `build/ref/BPMemory.h`):

| BP | meaning |
|---|---|
| `0xC0+2i` | stage i colour combiner: `d:0-3 c:4-7 b:8-11 a:12-15 bias:16-17 op:18 clamp:19 scale:20-21 dest:22-23` |
| `0xC1+2i` | stage i alpha combiner: `d:4-6 c:7-9 b:10-12 a:13-15`, same tail |
| `0xE0+2i` / `0xE1+2i` | colour register i, RA half (red 0-10, alpha 12-22) / BG half (blue 0-10, green 12-22), 11-bit signed, `255 == 1.0` |
| `0xF6+j` | konst selectors: `swap_rb:0-1 swap_ga:2-3 kcsel_even:4-8 kasel_even:9-13 kcsel_odd:14-18 kasel_odd:19-23` |
| `0xF3` | alpha test: `ref0:0-7 ref1:8-15 comp0:16-18 comp1:19-21 logic:22-23` |

The combination is deduplicated into a per-frame snapshot table (`GX_MAX_TEV_STATES`, reset in
`gx_pipeline_begin_frame`), and each `GxDrawBatch` pins the snapshot index - so a batch can only merge
with another batch of the *same* TEV state. `GxDrawBatch` also carries `tev_texmap_mask` plus eight
`GxTextureUnit`s, because the **stage** picks the texture (texmap n = the object bound to
`GX_TEXMAPn` = `s_tex_units[n]`), not the batch.

`TLS_TEV_PROBE=<frame>` (with `TLS_TEV_PROBE_FROM=<batch>` to cut the noise) prints the decode:
stage count, alpha test, K0..K3 and every stage's rgb/alpha equation.

#### 2. What the game actually uses (MENU frame 1450, measured)

The 3D batches run **3, 4, 5, 7 and 9 TEV stages**, and several name **six distinct texmaps**
(st2 map=2, st3 map=1, st4 map=3, st5 map=4, st6 map=5). The old single-texture
`tex * vertexColour` shader was therefore wrong for essentially all 3D geometry, not just for the
composite tail - it just happened to look plausible.

The composite tail is simpler and is what the previous handover called the blocker:

```
b32 0x90395DC0 1 stage   rgb: ZERO ZERO ZERO tex.rgb      -> tex
b33 0x9038D1C0 1 stage   same                            -> tex
b34 0x9038D1C0 1 stage   rgb: ZERO tex.rgb konst.rgb      K0=(1,1,1,1) -> tex
b35/b36 0x903917C0 5 stages  (ZERO tex.rgb konst.rgb prev.rgb) x5
                            kc = K0.r, K0.g, K0.b, K0.a, K1.r   <- 5-tap blur, weights sum to ~1
b39/b40 0x9038D1C0 5 stages  same shape, K0 = (0.2,0.2,0.2,0.2, K1.r=0.2)
b41 0x905C3000 3 stages   prev=tex(map0), c0=tex(map3), prev=lerp(prev, tex(map2), c0)
b47 0x905C3000 4 stages   tex * (K0 + K1 + 2*K2) then -0.5 bias  <- real colour tint
b51 0x9038D1C0 1 stage    rgb = tex(map1).rgb * K0,  K0 = (0,1,0,0)
```

So the "5 additive passes add at full strength" diagnosis in 5c.15 item 7d was **half right**: the
TEV stages of `b39..b47` do scale, but they scale by ~1.0 (a normalised 5-tap blur), not by something
that would stop the chain saturating. TEV alone does not close the MENU background.

#### 3. The shader (`PSTev`, ps_5_0) and the result

`tools/compile_shaders.py` now emits `s_gx_ps_tev_bytecode` evaluated from a `cbuffer GxTev`
(4 K registers + 4 previous + 16 combiners + 16 konst selectors + 16 orders + 4 scalars, mirrored by
`GxTevConstants` in `recomp/gfx_d3d11.c`). It implements the regular stage
`(d (op) lerp(a,b,c) + bias) * scale`, both combiners, all 32 KonstSel values with Dolphin's exact
8-bit constants (255/223/191/159/128/96/64/32 over 255), the K channel replication
(`konst = K0.rrr`), the independent alpha destination, and the BP 0xF3 alpha test.
Compare-mode stages (`bias == 3`) are **not** evaluated - they pass `prev` through and are counted
(`compareStages` in the probe; 14 writes carry `bias=3` in a MENU frame, so this is a real gap).

Two HLSL constraints worth remembering: an array of `Texture2D` indexed dynamically inside the stage
loop makes D3DCompile fail with *X3511 forced to unroll*, and marking the loop `[loop]` then makes it
fail with *X3531 can't unroll loops marked with loop attribute*. Both go away with eight separate
`Texture2D tev_tex0..7` and an if-chain sampler helper (`SampleTevTex`).

`TLS_TEV=1` selects it; unset, `PSAlpha`/`PSOpaque` are used and the picture is the 0d4699f one
(measured default MENU frame 1448 average `(124,235,255)`, i.e. still the flat cyan field).

With `TLS_TEV=1 TLS_DEFER_EFB_COPY=1` the frame now reads, per batch (`TLS_BATCH_PROBE=1448`):

```
b0..b31   3D scene, ends (43,42,42)
b32 (42,43,44)  b33 (32,36,37)  b34 (0,0,0)   <- the SRCCLR/ZERO squaring pass, unchanged
b37 (38,37,33)  b38 (38,37,33)  b39 (71,74,71)  b40 (121,127,121)  b41 (202,208,202)
b42 (201,207,201) b44..b46 (~192..198)  b47 (254,254,254)  b49 (255,255,255)
b51 (90,90,90)   <- the SRCALPHA/INVSRCALPHA pass that drags it back
b52.. UI text/logo, additive, (91,91,91)
```

`docs/evidence/22-tev-menu-frame1448.png`: the MENU / CONTINUE / NEW GAME / MULTIPLAYER layout with
its Japanese sublabels now renders **gold and readable** over a large white radial glow. Before this it
was a flat cyan field and the text was invisible.

#### 4. What is still wrong, precisely

The bloom is ~10x too bright: `b39..b41` add +33/+50/+81 and saturate the centre of the screen, where
the real screen is a dark cave with a modest glow. Two candidate causes, both cheap to measure:

1. **The blur levels add instead of averaging.** `b39/b40` are 5-stage accumulations whose konstant
   weights sum to 1.0, but they are drawn with `s=4 d=1` (SRCALPHA/ONE) — *additive* - so each level
   is added on top of the previous one. If the GX alpha of those stages were < 1 the sum would be
   tamed; the TEV alpha half of `b39/b40` is `ZERO ZERO ZERO tex / prev` = `tex.a`, so it is 1.0
   wherever the blur texture is opaque. Worth checking against hardware whether the *destination*
   these passes expect is the 160x112 copy rather than the full scene.
2. **The copies those passes sample are too bright.** `b40` samples `0x903D31C0` (320x224) and `b41`
   samples `0x905C3000` (640x448); both addresses are written more than once per frame (5c.15 item 2:
   copy #15 captures `(244,247,245)`). If the copy the batch samples is one issued *after* earlier
   passes raised the EFB, the blur input is already blown out. `TLS_EFB_SAMPLE_FRAME` +
   `TLS_DRAW_ORDER=1` answer this in one run: match each b39..b41 to the *last* copy of its address
   before its vertex mark.

#### 5. Next steps, in order

1. Resolve the composite brightness (item 4.2 first: it is a pure ordering/measurement question).
2. Implement TEV compare stages (`bias == 3`) - `b14` and friends depend on them.
3. Supply real texcoords for texmap > 1. The 3D batches name texcoords up to 5 but the host decodes
   only `TEX0` into a single `uv`, so every stage currently samples with `uv0`. That is the largest
   remaining source of 3D inaccuracy: `GxVertex` needs `u1,v1` (and the input layout / `VSMain` /
   `PSTev` need the matching `texcoord` select).
4. Only then think about making `TLS_TEV` the default. It is measurably closer to hardware (the MENU
   text exists at all) but the default must not change until the bloom is right.

#### 6. New instruments

| variable | effect |
|---|---|
| `TLS_TEV=1` | evaluate the captured TEV stages instead of `PSAlpha`/`PSOpaque` |
| `TLS_TEV_PROBE=<frame>` | print the decoded TEV state of every batch of that frame |
| `TLS_TEV_PROBE_FROM=<n>` | only batches `>= n` (the composite tail is far less noisy) |

#### 7. Follow-up measurements (same session)

**The copy -> batch mapping, and what each blur pass actually samples.** With
`TLS_TEV_PROBE=1448 TLS_TEV_PROBE_FROM=30 TLS_EFB_SAMPLE_FRAME=1448 TLS_TEV=1
TLS_DEFER_EFB_COPY=1` in one run, the probe now also decodes the average of every texmap a
batch samples (`[tex] map<n> = addr WxH fmt avg=`). Read together with the per-copy averages
that is the whole composite chain:

| batch | blend | textures (map: addr, avg) | EFB after |
|---|---|---|---|
| b39 | add | 0: `0x9038D1C0` 320x224 **38** | 71 |
| b40 | add | 0: `0x903D31C0` 320x224 **51** | 121 |
| b41 | add | 0: `0x905C3000` **38**, 2: `0x9038D1C0` 320x224 **103**, 3: `0x90419BE0` 256x256 I8 **238** | 202 |
| b44..b46 | add | 0: `0x9046FC40`/`0x9044CC20`/`0x90429C00`, all 320x224 fmt=4 avg **226,212,171** | ~198 |
| b47 | add | 0: `0x905C3000` **198** | 254 |
| b51 | blend s4 d5 | 0: `0x9051E1A0` 64x64 IA8 **90**, 1: `0x9038D1C0` 80x56 **255** | 90 |

Copies of frame 1448 in replay order (deferred mode) show where the brightness enters:
clear `(0,0,0)` x4 -> scene `(42,41,41)` -> `160x112 (33,37,38)` -> `80x56 (0,0,0)` x3 ->
`640x448 (38,37,33)` -> `320x224 (50,53,50)` -> `320x224 (103,109,103)` -> `640x448
(201,208,202)` -> `320x224 (181,188,181)` -> `640x448 (198,207,202)` -> `160x112 (253,...)`
-> `640x448 (254,...)` -> VI scanout `(98,99,99)`.

So the chain is internally consistent: the passes that add ~2x the scene's brightness really do
sample copies taken *after* the earlier passes brightened the EFB. `b41`'s lerp mask is a nearly
white 256x256 I8 texture, so it blends most of the 103-level blur into the frame.

**Cross-frame accumulation is ruled out.** Brightness does not grow with frame number: with
`TLS_TEV=1 TLS_DEFER_EFB_COPY=1` and no input, screenshots at frames 300/500/700/900/1100
average `(1,1,1)/(0,0,0)/(2,2,2)/(2,2,2)/(1,1,1)`. An earlier run's frame-1000 measurement of
`(90,90,90)` was a *different attract phase* - the same run-to-run drift warning as 5c.15 item
7c, now confirmed to change the attract sequence's own content, not just the frame index.

**TEV alone does not change the picture.** Attract frame 1000: default `(1,1,1)`, `TLS_TEV=1`
`(1,1,1)` - identical, because without deferred copies the chain reads the previous frame.
So `TLS_TEV` is a pure superset: it only changes frames where the copies are replayed.

**The attract screen is the honest reference for the bloom.** Frame 1000, default:
`docs/evidence/24-attract-1000-a.png` - black field with the white `THE LAST STORY` logo, which
is correct. The same frame with `TLS_TEV=1 TLS_DEFER_EFB_COPY=1`:
`docs/evidence/24-attract-1000-c.png` - a large white radial glow swamping the logo. Two
readings, and they need one more measurement to separate:

* either the chain genuinely blooms the logo that hard and the *composite* is right while the
  bloom's spatial extent is wrong (the blur copies are single-source, so a 640x448 blur of a
  600-pixel-wide logo should stay a thin band, not a full-screen ellipse - the ellipse suggests
  the 160x112/320x224 copies were sampled with the wrong UVs, i.e. a *texcoord* problem, not a
  blend problem), or
* the passes are being applied where the guest intended a masked/thresholded region.

Given item 5.3 (the host has exactly one UV, so every TEV stage samples with `uv0`), a
blur pass whose texcoord is not `uv0` would smear across the whole quad - which is exactly the
shape of the artefact. **Supplying real per-texcoord UVs is therefore the next concrete step,
ahead of any blend-factor work.**

#### 8. The "one UV" hypothesis is disproved: no batch supplies TEX1..TEX7 at all

Item 5.3 / §7 above guessed that the blur passes smear across the quad because every TEV stage
samples `uv0` instead of its own texcoord. `GxDrawBatch::texcoord_mask` (new, printed by
`TLS_TEV_PROBE`) settles it: **every batch of MENU frame 1448 reports `texcoord_mask=0x01`** -
`b0..b66`, including the 3D batches that name texcoords up to 5 and the 5-stage blur quads that
name texcoords 0..4. The vertex decoder already walks `TEX1..TEX7` (`s_vtx_desc[13+t]`), but the
guest never marks those attributes present, so there is nothing to widen: a 96-byte `GxVertex`
carrying eight UV sets would feed seven copies of nothing.

Two consequences, both useful:

* The 5-stage composite passes (`b35/b36/b39/b40`, konstant weights 0.4/0.2/0.098/0.2/0.098 for
  `b35`, 0.2 x5 for `b39`) are **all sampling the same texel** and summing to ~1.0, so the host's
  output for them is already right (`tex * 1.0`). Their contribution to the bloom is not a bug.
* A GX stage naming texcoord `n` when the vertex has no `TEXn` gets the **texcoord generator's**
  output for `n` - the position transformed through the XF texture matrix for that coordinate
  (BP `0x30..0x3F` texcoord info plus the XF matrix). The host implements no texcoord generator
  at all, so the real gap is *texcoord generation*, and it only matters for stages whose texcoord
  differs from 0 **and** whose source data would differ - i.e. it is not the bloom's cause either.

That leaves the bloom's brightness, and one measurement is still outstanding: the **EFB alpha**
the additive passes multiply by. All of `b39..b47` are `s=4 d=1` (SRCALPHA/ONE), so their strength
is `src.rgb * src.a`; `src.a` comes from the TEV alpha chain, which for those batches is
`tex.a * ras.a`. If the blur textures' alpha channel is 1.0 everywhere, every add is full
strength. `probe_texture_avg()` currently reports RGB only - **next step: report alpha too**, and
if the EFB copies' alpha is saturated, check `get_or_create_blend_state`'s separate
`SrcBlendAlpha`/`DestBlendAlpha` (the EFB alpha is accumulated through the same blend state as the
colour, and a wrong alpha factor there would pin it at 255).

#### 9. Correction to §7's conclusion

§7 ended with "supplying real per-texcoord UVs is therefore the next concrete step, ahead of any
blend-factor work". **That is wrong** (§8). The correct order is: (a) report the alpha of every
sampled texture and of the EFB copies, (b) check the blend state's alpha factors, (c) only then
look at texcoord generation.

#### 10. EFB alpha, GX alpha blending, texcoord aliasing and quad geometry: all eliminated

Four more hypotheses measured and killed. The chain's escalation is now fully accounted for by three
specific passes, and what is left is a *reference* question, not a host bug that can be found from
inside the pipeline.

**(a) Every texture the tail samples is alpha = 255.** `probe_texture_avg()` now reports alpha:
`[tex] map0 = 0x9038D1C0 320x224 fmt=6 avg=(106,107,102) a=255`, and likewise for every EFB-copy
destination, the 256x256 I8 mask (`a=238`) and the UI atlases. So the additive passes
(`s=4 d=1` = SRCALPHA/ONE, strength `src.rgb * src.a`) run at full strength because `src.a` really
is 1.0 - not because the host loses the alpha.

**(b) The hardcoded alpha blend is wrong but is not the cause.** `get_or_create_blend_state` set
`SrcBlendAlpha = ONE, DestBlendAlpha = INV_SRC_ALPHA` for every state, while GX applies the *same*
CMODE0 factors to alpha as to RGB. New `TLS_GX_ALPHA_BLEND=1` makes alpha follow the guest's
factors. Measured on MENU 1448: `(93,93,93)` with it, `(90,90,90)` without - no difference, because
the alpha saturates at 255 under both. The flag stays (it is the more correct behaviour and costs
nothing), but it is **not** the bloom.

**(c) No batch supplies `TEX1..TEX7`** - see §8. Texcoord aliasing is therefore a no-op for these
passes (all five taps of a 5-stage blur read the same texel and their konstant weights sum to 1.0).

**(d) The tail quads are genuinely fullscreen.** `TLS_TEV_PROBE` now prints each batch's NDC extent:
`b32..b51 all ndc=(-1.00,-1.00)-(1.00,1.00) persp=0`. So the ellipse is not a small quad blown up.

**So here is the whole escalation, with the passes that cause it named:**

| batch | GX blend | what it does | frame after |
|---|---|---|---|
| b32/b33 | replace | put the scene copy back | 42 |
| b34 | `SRCCLR/ZERO` -> `dst = src*src` | the bright pass: squares the frame, darks -> 0 | **0** |
| b35/b36 | `SRCALPHA/ONE` add | add the squared (black) frame's blur | 0 |
| b37 | **replace** | **throw the squared frame away** and put back a *160x112 copy taken before b34* (avg 34) | 34 |
| b38 | `ONE/ONE` -> `dst = src + dst` | **exactly doubles the frame** | 68 |
| b39 | add 320x224 (avg 106) | | 106+ |
| b40 | add 320x224 (avg 178) | | 178+ |
| b41 | add lerp(640x448, 320x224, 256x256 white mask) | the mask is `a=238`/rgb 238, so ~93% of the 320x224 level is blended in | 202 |
| b47 | add 640x448 (255) | | 254 |
| b51 | `SRCALPHA/INVSRCALPHA` | drags the whole screen back to a flat level | ~90 |

`b37` restoring an un-squared copy and `b38` doubling it is what puts the chain back into the bright
regime that `b34` had just crushed; every additive pass after that is adding a copy of a frame that
is already at 1.0.

**Why this cannot be settled from inside the pipeline.** If the guest really issues b37's `replace`
and b38's `ONE/ONE` at those vertex marks, then GX hardware reaches the same 1.0 and the displayed
frame really is this white ellipse - which would mean the host is faithful and the *attract phase*
we are comparing against is simply a bright flash. If it does not, the copy/draw interleaving is
still wrong in a way that the vertex-mark replay cannot express (e.g. GX services an EFB copy at the
*end* of the current display list, not at the command). Those two readings differ only in what
hardware does with these exact commands, so the next step is a **Dolphin reference frame** for the
same moment - `Run_TheLastStory_In_Dolphin.bat` exists, and `%APPDATA%\Dolphin Emulator\Logs\
dolphin.log` already holds a reference run. Compare the same attract/MENU moment before changing any
default; everything else here has now been measured.

#### 11. The reference capture is one run away

`Run_TheLastStory_In_Dolphin.bat` launches `G:\Program\Dolphin-x64\Dolphin.exe -e roms\TheLastStory.iso`
(that directory exists). No reference frames exist yet: `%APPDATA%\Dolphin Emulator\ScreenShots`,
`Dump\Frames` and `StateSaves` are all empty, `Logs\dolphin.log` is the only artefact from the
earlier reference run. Capturing the attract/MENU moment there - Dolphin's *Dump -> Frames* and
*Save Screenshot* both land in `ScreenShots\` - is what §10 needs before any default is changed.

---

### 5c.17 The Dolphin reference: mechanical findings (session-in-progress)

Session start: `80c52b7`, tree clean. The DSH sandbox was **danger-full-access** for this session, so
the Low-integrity problem of 5c.16 §0 did not apply - `Set-Content build\recomp\_t.txt` succeeded on
the first try and `tools/recomp_harness.py build-runner` linked in 1 s (459/459 chunks cached).
Everything below is measured; nothing under `src/` was touched.

#### 1. Launching Dolphin from a script has one trap, and it looks like a Dolphin bug

`Start-Process -ArgumentList @('-e', 'G:\...\Project The Maybe(Not) Last Story\roms\...iso')` does
**not** quote the path, so Dolphin receives `-e G:\Program\Project` and shows a modal *Warning*
("The specified file "G:/Progr…") with a fully booted but stalled emulator behind it (CPU 0.3 s,
window title `Warning`). The modal is a Qt window with **no child Win32 windows**, so the text is not
readable with `EnumChildWindows`; capture it with `PrintWindow(hwnd, hdc, 2)` (the
`CopyFromScreen` route returned a black bitmap because the dialog was positioned at x=2610, i.e.
off the visible desktop). Quote the argument:
`Start-Process $exe -ArgumentList "-b -e `"$iso`""`.

#### 2. Frame dumping is configured in *Dolphin.ini*, not GFX.ini

`VideoCommon/FrameDumper.cpp` reads

| key | file | meaning |
|---|---|---|
| `DumpFrames` | `Dolphin.ini` **`[Movie]`** | `MAIN_MOVIE_DUMP_FRAMES` - the on/off switch |
| `DumpFramesSilent` | `Dolphin.ini` **`[Movie]`** | skip the overwrite prompt |
| `DumpFramesAsImages` | `GFX.ini` `[Settings]` | `GFX_DUMP_FRAMES_AS_IMAGES` - PNG per frame instead of FFmpeg |
| `DumpTextures` | `GFX.ini` `[Settings]` | unrelated (game textures) |

Setting `DumpFrames` in `GFX.ini` is silently inert - that mistake cost several 40-90 s runs. Frames
land in `%APPDATA%\Dolphin Emulator\Dump\Frames\framedump_<n>.png` (`fmt::format("{}framedump_{}.png")`,
counter starting at 1, so `framedump_1.png` …).

`tools/dolphin_capture.py` is the new driver: launches the emulator, finds its Qt window, posts
`SendInput` key events (the Wiimote1 mapping is `DInput/0/Keyboard Mouse`, so the device polls the
global key state - `PostMessage` is *not* enough) or Win32 messages, and kills the process after a
plan of `wait:KEY` steps. `--input send` is the working mode for gamepad input; screenshots via the
F9 hotkey need window focus and did not work headless, which is why frame dumping is the right
channel.

#### 3. Real-hardware copy order for one frame, straight out of the existing dumps

The earlier reference run left **1312 EFB-copy dumps** in `%APPDATA%\Dolphin Emulator\Dump\Textures\`
(not in `SLSEXJ\`), named `efb1_n<counter>_<W>x<H>_<fmt>.png`. They are written in **execution
order**, so they are a per-frame fingerprint of the guest's copy stream. For every frame of the
safety-screen phase the set and order are identical:

```
 1. 640x479_15   <- the *display* copy (present); it opens the next group, i.e. it is last in its frame
 2. 320x224_4
 3. 640x448_3
 4. 320x224_4
 5. 640x448_3
 6. 160x112_6
 7. 320x224_6
 8. 80x56_6
 9. 80x56_6
10. 80x56_6
11. 80x56_6
12. 640x448_6
13. 320x224_6
14. 320x224_6
15. 320x224_6
```

i.e. **15 copies per frame**, of which one is the display copy. The `_15` files are the only ones
with real image content (97 kB vs ~800 B for the rest); `efb1_n000649_640x479_15.png` is the *Wii
Remote safety screen* rendered by Dolphin, so these are genuine reference frames for the boot phase,
one per frame, already on disk.

Two consequences worth stating before the next experiment:

* the host currently only implements copy format 0 (RGBA8) and logs `[EfbCopy] format N not
  implemented` for the rest; the reference stream uses **four** formats (`_3`, `_4`, `_6`, `_15`), so
  most of the guest's copies are still dropped on the host side;
* "16 copies per frame" in 5c.15/§7 was a MENU-frame count under the host's own bookkeeping and does
  not line up with this 15-copy hardware stream - the copy *sequence* is a much sharper parity
  instrument than the frame average, and it can be produced from a still frame.

#### 4. What is still open

The b37/b38 verdict (§10) needs a Dolphin frame in the same attract/MENU phase. The remaining
blocker is *time*: this machine boots the title to `NW4R SND` in ~33 s of wall clock and runs the
early attract at ~7 fps with texture dumping on, so a MENU-phase reference needs roughly 4-10
minutes of wall clock plus scripted input. `%APPDATA%\Dolphin Emulator\Logs\dolphin.log` timestamps
(`mm:ss:ms` since emulation start) are the cheapest progress meter.

---

### 5c.18 THE VERDICT: hardware does NOT reach 1.0 - the composite chain is a host defect

The reference run succeeded. `docs/evidence/27-dolphin-menu-frame1440.png` is Dolphin's frame 1440
with the same input script the host uses (`A@600`, `A@900`, `A@1200`, `UP@1300`, `A@1350`,
`A@1500`), captured by `tools/dolphin_capture.py --frame-plan` at 828x480 (Dolphin's present size):

* a **dark cave-and-lake scene** (frame average `(23,25,18)`),
* `MENU` in gold at the left, `NEW GAME` highlighted in gold in the centre,
* a **small warm glow** around the one lamp in the middle of the cave (~20 px across) and a
  handful of bokeh particles,
* **no full-screen white ellipse anywhere in the frame.**

So the answer to the §10 gate is **no**: hardware does not saturate. `b34` squaring the frame to 0,
`b37` restoring an un-squared copy and `b38` doubling it into ~90, then the additive passes reaching
255, is **not** what the guest's command stream produces on hardware. Per §10 that makes the
**EFB-copy servicing model** the suspect, and the deferred mode (`TLS_DEFER_EFB_COPY=1`) is
measurably *not* the hardware behaviour even though it services copies in stream order.

Two independent facts sharpen it:

* **The default (inline) path is not the answer either.** MENU frame 1448 default is
  `(124,235,255)` - a flat cyan field - and `TLS_TEV=1` alone does not change it (5c.16 §7).
  So the host has no mode that reproduces `(23,25,18)` + gold text + cave.
* **The bare scene is right.** With `TLS_TEV=1 TLS_DEFER_EFB_COPY=1 TLS_BATCH_CUTOFF=30` the host
  draws the complete cave vista over the logo plate (`docs/evidence/22-cave-batch-cutoff30-frame1450.png`).
  What destroys it is the ~20-quad composite tail, exactly as 5c.15 said.

#### 1. Destination geometry from the pitch register (new, `TLS_EFB_COPY_GEOM=1`)

The writer used `dst_w = source_w/2 if bit 9 of BP 0x52`, i.e. it could only ever produce a 2:1
shrink. The guest asks for 4:1 and 8:1 as well. The hardware encodes the destination size in two
places and the pitch is the one that carries the width:

| register | meaning | derivation |
|---|---|---|
| BP 0x4D `copyDestStride` | `pitch` | bytes per tile row (`pitch*32`) |
| BP 0x52 bit 14 `copy_to_xfb` | copy goes to the 16bpp **linear** scanout buffer | `dst_w = pitch*32/2 = pitch*16`, `dst_h = src_h` |
| otherwise | 4x4-tiled texture: tile row = `(w/4)*64 = w*16` bytes | `dst_w = pitch*2`, `dst_h = src_h * dst_w / src_w` |

Verified copy by copy on MENU frame 1448 (`TLS_EFB_COPY_PROBE=1 TLS_EFB_COPY_FROM=1448`): the probe
now prints `dstw` (from the pitch) next to `geodst` (the old source/half rule) and they disagree on
most copies - e.g. `#22834 src 640x448 pitch=80 dstw=160 geodst=320`, `#22835 src 640x448 pitch=160
dstw=320 geodst=640`, `#22838 src 640x448 pitch=160 dstw=320 geodst=640`. Dolphin's own copy dumps
contain `160x112` and `80x56` destinations, so the guest really does ask for 4:1 and 8:1.

**Measured effect: small.** MENU 1448 with `TLS_TEV=1 TLS_DEFER_EFB_COPY=1 TLS_EFB_COPY_GEOM=1`
still shows the white ellipse (`docs/evidence/28-host-menu-1448-geom.png`, average `(93,93,92)` vs
`(93,93,93)` before). It sharpens the UI texture behind the glow - `CONTINUE` becomes legible and
small colour speckles appear - so the geometry fix is *correct* and stays, but it is **not** the
bloom. The flag stays opt-in until the composite chain is right.

The BP 0x52 decode is now complete in `GxPendingEfbCopy`: `real_format = tpf/2 + (tpf&1)*8` from
bits 3..6, `copy_to_xfb` (bit 14), `intensity_fmt` (bit 15). Note the writer still assumes RGBA8
tiled for every texture copy - the `format` field it uses comes from BP **0x4B**, which is only the
destination address, so it is always 0. That is a separate, still-open gap.

#### 2. Where to look next

The reference run also produced `framedump_2000` … `framedump_6000` at frame average `(29,33,26)` -
a dark olive cave, i.e. **the attract loop or Chapter 1** - so the same archive now has material for
Task 2/3 as well. For the composite chain the next measurement is batch-by-batch: `TLS_BATCH_PROBE`
against the reference's `(23,25,18)`, looking for the first pass whose output leaves the reference's
range, rather than arguing about the last one.

---

### 5c.19 The chain feeds itself on hardware too - the host's *base* is 3x too bright

`TLS_BATCH_PROBE=1448` with `TLS_TEV=1 TLS_DEFER_EFB_COPY=1` (measured this session):

| pass | GX blend | host frame after | what it samples |
|---|---|---|---|
| b31 | last 3D batch | `(43,42,42)` | the cave scene |
| b32/b33 | replace | `(42,43,44)` -> `(32,36,37)` | 640x448 and 160x112 copies taken at vmark 39942 |
| b34 | `s=2 d=0` | **`(0,0,0)`** | the 320x224 copy - the bright pass |
| b35/b36 | add, no blend state | `(0,0,0)` | blur of the black frame |
| b37 | replace | **`(38,37,33)`** | `0x903DBDC0`, a 160x112 copy written at vmark 39942, i.e. **before b34** |
| b38 | `s=1 d=1` | `(38,37,33)` | no change at this frame (it did double in 5c.16's run) |
| b39 | add | `(71,74,71)` | `0x9038D1C0` written at vmark **39948** - right after b33, so the *pre-square* frame |
| b40 | add | `(121,127,121)` | `0x903D31C0` written at vmark **40002**, i.e. when b40 itself draws |
| b41 | add | `(202,208,202)` | `0x905C3000` written at vmark **40014**, i.e. inside b41 |
| b47 | add | `(254,254,254)` | `0x905C3000` written at vmark 40044 |
| b51 | `s=4 d=5` | `(90,90,90)` | drags the whole screen back down |

So the copy -> pass mapping is exactly the "the chain reads copies of the frame it is currently
building" model, and the additive passes really do consume their own output one pass later.

**Does hardware do the same? Yes - but starting from a much darker frame.**
`tools/analyze_dolphin_copies.py` reconstructs per-frame copy sequences from Dolphin's
`efb1_n<counter>_<W>x<H>_<fmt>.png` dumps (1288 frames of the boot/attract phase, one frame = the
run of copies between two `640x479` display copies) and prints each copy's average in execution
order. Measured:

```
frame 750: 640x479=0 320x224f4=0 640x448f3=255 320x224f4=0 320x224f4=5 640x448f6=15
           640x448f3=247 160x112f6=13 320x224f6=15 80x56f6=15 80x56f6=0 ... 640x448f6=15
           320x224f4=15 640x448f6=15 160x112f6=24 320x224f6=31 80x56f6=30 80x56f6=30
frame 1000: (every copy 0..-15, one 640x448f3=255)
frame 1250: ... 160x112f6=7 320x224f6=14 80x56f6=14 ... 640x448f4=24
```

Hardware's copies rise inside a frame too (`15 -> 24 -> 31`), so the in-frame feedback is real and
the host's *ordering* is not the defect. What differs is the scale: hardware's copies sit at 0-31
while the host's sit at 32-38 and are added three times per frame. And behind that:

| measurement | host | Dolphin reference |
|---|---|---|
| frame average at the MENU | `(93,93,93)` (deferred) / `(124,235,255)` (default) | `(23,25,18)` |
| scene before the composite tail (`TLS_BATCH_CUTOFF=30`) | `(76,70,62)` | `(23,25,18)` at the same phase |
| the copies the additive passes consume | 32-38 | 0-15 |

**So the chain is not primarily an ordering problem: the host's rendered scene is ~3x brighter than
hardware's, and every additive pass multiplies that excess.** Fixing 3D brightness is therefore the
path to fixing the bloom, exactly as the escalation table implies (the bloom is `base * ~5`).

#### 3. TEV compare stages are now evaluated (`bc02c21`)

`bias == 3` used to be a pass-through. It is now Dolphin's exact semantics
(`VideoCommon/PixelShaderGen.cpp:1473-1536`): `out = clamp(d + cmp)` with `GT: (a>b)?c:0` and
`EQ: (a==b)?c:0`, compared in 8-bit fixed point in mode `bits 20..21` = R8 / GR16 (`r+g*256`) /
BGR24 (`r+g*256+b*65536`) / RGB8-A8 (per channel `max(sign(a-b),0)*c`). There is no scale multiply in
a compare stage. `TevCompare3` / `TevCompare1` / `TevAlphaArg4` in `tools/compile_shaders.py`.
MENU frame 1448 is unchanged by it (`(93,93,92)`), so the compare stages are not the brightness
control - they are simply correct now instead of skipped.

#### 4. The reference run also reached Chapter 1 (Task 2/Task 3 material)

The 800 s frame-indexed run walked the title, the save dialog, `NEW GAME` and into gameplay:
`docs/evidence/30-dolphin-scene-3000.png` is **Chapter 1 - Gurgan Cave** with the hero, the sword,
water, the cave walls and the HUD (`DAGRAN LV 5`, `SYRENNE LV 4`), and
`docs/evidence/29-dolphin-after-menu-2000.png` is the first playable scene. `build/recomp/dolphin-ref/`
now holds 8297 reference frames from that run plus the boot-phase copy dumps, so both Task 2 (does
the host's stall happen inside code the guest runs normally? obviously not - the same input script
gets hardware through it) and Task 3 (Chapter 1 parity) have reference material.

#### 5. Instruments added this session

| file | what it does |
|---|---|
| `tools/dolphin_capture.py` | launches Dolphin, kills stray instances, dismisses modal dialogs, sends `SendInput` keys on a **frame-indexed** plan (`--frame-plan "600-612:A,1300-1312:UP"`, same syntax as `TLS_INPUT_SCRIPT`, indexed by dumped frames), reports progress |
| `tools/analyze_dolphin_copies.py` | rebuilds per-frame EFB-copy sequences from the Dolphin dumps and prints each copy's average in execution order |
| `TLS_EFB_COPY_GEOM=1` | destination size from BP 0x4D pitch / BP 0x52 bit 14 instead of source/2 |

Two Dolphin traps worth remembering: `Start-Process -ArgumentList @('-e', $path)` does not quote a
path with spaces (the emulator then shows a modal "The specified file" warning over a stalled
emulator), and a *second* Dolphin instance cannot open `Wii/title/00000001/00000002/data/play_rec.dat`
and shows a modal "File could not be opened" - both look exactly like "the game hangs after
`NW4R SND`".

#### 7. The servicing model is settled: hardware's copies do **not** accumulate

The decisive case is a **bright static screen**, because any in-frame feedback would clip there and
be obvious. Dolphin's copy dumps for the MENU-adjacent static phase (frames 1530-1620, all
identical) read, in execution order:

```
640x479f15=204   320x224f4=220   640x448f3=255   320x224f4=0   640x448f3=255
160x112f6=220    320x224f6=220   80x56f6=220     80x56f6=220   ...
```

Base frame **204**, and **every** copy in the frame - including the last, smallest ones that the
additive passes consume - sits at **220**, i.e. at the base level. If each additive pass saw the
previous pass's output (the host's deferred model) the later copies would be 400+ and clip at 255.
They do not. The same corpus at a dark phase (frame 750) shows `15 -> 24 -> 31`, a 2x rise that the
bright case proves is scene content, not accumulation.

**So the hardware behaviour is the opposite of `TLS_DEFER_EFB_COPY=1`:** a frame's copies all read
one consistent EFB snapshot (the frame as of the last flush / the previous frame), and draws issued
after a copy are *not* visible to later copies in the same frame. That is exactly the shape of the
default inline path (`efb_snapshot`), which is why the default's picture was closer to the reference
than the "more correct" deferred one - the deferred replay is the defect, not the fix.

Consequences for the next session, in order:

1. `TLS_DEFER_EFB_COPY=1` should not be promoted; the honest model is "copies read the frame as of
   the guest's last flush", which the *inline* path already approximates one frame late. Making it
   exact means tracking the guest's flush points (`GXFlush`, `GXDrawDone`, `GXSetDrawSync`) and
   snapshotting the EFB there.
2. The remaining brightness error is in the *scene*, not the chain (`(76,70,62)` vs `(23,25,18)` at
   the same phase), so 3D materials - texcoord generation (BP 0x30..0x3F + XF texture matrices) and
   the K0..K3 constants - are the next engineering target.
3. Re-test the ink-matte / baseline-subtraction hacks (AGENTS.md §4.1) only after (2): they are
   compensating for a too-bright scene, which is now measured rather than suspected.

#### 9. Concrete plan for the next session (scene brightness)

Everything below follows from §7: the chain is a *stable* loop on hardware (dark cave + gold text)
and a stable loop on the host too (flat level ~90) - only the fixed point differs, and it differs
because every copy the chain consumes is ~3x too bright. Start from the scene, not the chain.

1. **Get a scene-only reference.** Capture Dolphin frames at the MENU with the composite tail not
   yet drawn - the reference run already gives the *composited* frame (`(23,25,18)`), and the cave
   looks essentially unbloomed there, so `(23,25,18)` is a good proxy. Compare against
   `TLS_TEV=1 TLS_BATCH_CUTOFF=30` (`(76,70,62)`): **factor ~3.3**.
2. **Test the one candidate that explains a factor of exactly 3.3: a gamma difference.** The host's
   swap chain is `DXGI_FORMAT_R8G8B8A8_UNORM` (checked), so it is not an sRGB surface - but the
   *ratio* fits `v_host = v_ref^(1/2.2)` (`23/255 = 0.09 -> 0.09^(1/2.2) = 0.34`, host `0.30`).
   One run with a `TLS_GAMMA_TEST` output transform decides it in seconds; if the host is writing
   gamma-encoded values into a surface the reference treats as linear, every 3D material will look
   washed out exactly like this.
3. **If it is not gamma, texcoord generation is the next-biggest 3D gap** (5c.16 §5.3): BP
   `0x30..0x3F` texcoord info + the XF texture matrices, needed because no batch supplies
   `TEX1..TEX7` (5c.16 §8) so stages naming texcoord > 0 get the generator's output. `GxVertex`
   needs to carry the generator's result, not extra UVs.
4. Only then re-measure the composite chain, and only then consider any `TLS_*` flag becoming the
   default. `TLS_DEFER_EFB_COPY` should **not** become the default at all (§7), and
   `TLS_EFB_COPY_GEOM` should be re-measured once the scene is right, since the destination-size
   error it fixes is real but was being masked by the brightness error.

Where the reference data lives (nothing here needs re-capturing):

| path (`build/`, git-ignored) | contents |
|---|---|
| `build/recomp/dolphin-ref/boot` | 1281 frames, boot + safety screen |
| `build/recomp/dolphin-ref/run2` | 10 frames exported as evidence (MENU 1420/1440, Chapter 1 2000/3000) |
| `build/recomp/dolphin-ref/run3` | 8297 frames from the full title -> save dialog -> NEW GAME -> Chapter 1 run |
| `build/recomp/dolphin-ref/run4` | 2435 frames **plus 26656 `efb1_*` per-copy dumps**, essentially one static bright screen (base 204) reached after the MENU - this is the corpus behind §7 and the reason that verdict is trustworthy. Re-analyse with `TLS_COPY_DUMP_DIR=build/recomp/dolphin-ref/run4 python tools/analyze_dolphin_copies.py <step>` |

Caveat on §7's corpus: run4 spends ~2400 frames on one static screen rather than the animated
MENU, so it proves "no accumulation on a bright frame" but does not exercise the MENU's own
animation. A corpus of the *animated* MENU would need the run to stop before the save dialog; the
input plan currently walks straight through it.

#### 8. Default path verified unchanged

After every change in this session, MENU frame 1448 with **no** `TLS_*` flags set still measures
`(124,235,255)` - byte-identical to the 0d4699f behaviour recorded in 5c.16. The new code is inert
unless `TLS_TEV`, `TLS_DEFER_EFB_COPY` or `TLS_EFB_COPY_GEOM` is set.

Dolphin's frame dumping also needs `DumpEFBTarget = True` in `GFX.ini [Settings]` to write the
`efb1_*` per-copy dumps; `DumpTextures` alone only dumps the game's own textures.

---

### 5c.21 The post-handoff stall: one PC, and it does **not** always happen

Measured this session on the state at `1ad412a`/`4c2f8a6` (input plan
`600-612:A,900-912:A,1200-1212:A,1300-1312:UP,1350-1362:A,1500-1512:A`):

* **Where it burns the budget.** `TLS_PC_HIST=1 TLS_PC_HIST_FROM=1900` reports, for frames
  1900/1901/1902, **100.0 % of all 10 031 samples at `0x8022A204`** - one address, every block.
  The tap summary is the known one: `GameTask::Init` 81 calls (last 1882),
  `SequenceManager::Update` 1504 calls (last 1882), streaming queue
  `active="data/material/pc_ga_m_a00.material" status=1`.
* **What that address is.** `0x8022A204 = fn_8022A054+0x1B0`. The generated chunk
  (`build/recomp/generated/chunks/chunk_0137_text1_8022C...c`, label `label_8022A204`) shows the
  loop, reading the recompiled code directly - no disassembler needed:

  ```
  r0 = mem_read32(r7 + 4)
  r0 &= ~3
  r0 -= r4
  cmp(r0, r30)  ; loop while r0 < r30
  ```

  i.e. a spin on the word at `[r7+4]`, which never advances. Register state when wedged:
  `LR=0x8022B048` (`fn_8022ADD4+0x274`, the caller), `r3=0x90002008` (a MEM2 pointer),
  `r12=0x80084F30`. Naming `fn_8022A054` / `fn_8022ADD4` is the next cheap step: they are
  unnamed in `config/symbols.txt`, so match them against the decomp in `src/` by their call
  sites (`GameLoadTask` at `0x80570CFC` is one of the two task callbacks registered by
  `TaskManager 0x809ADCF0`).
* **It is not deterministic - and that is the most important finding.** The *identical* input
  plan, run twice in a row, behaved differently:

  | run | flags | result |
  |---|---|---|
  | A, B | `TLS_DRAW_TRACE=1` (+ `TLS_SHOT_FRAMES`) | stalled: `Update` last=1882, 100 % at `0x8022A204`, 18 ms/frame |
  | C | `TLS_PC_HIST=1` only | **did not stall**: `SequenceManager::Update` 1754 calls, last=1959, `TLS Frame 1920` reports **50 247 vtx / 54 batches**, PC at the idle loop `0x805F50B0`, 134-158 ms/frame |
  | D | `TLS_SHOT_FRAMES` only (default path) | stalled: `Update` last=1882, frame 1920 measures `(0,0,0)` |

  The one flag that separates them is the one that *slows the run down*: `TLS_PC_HIST` samples
  every 32nd dispatch, and run C is the only run that got through. That is the signature of a
  **host-side race**, not a guest-state deadlock: whatever the streaming handshake needs is lost
  when the host runs at full speed and recovered when it is slowed. So a stall report is only
  meaningful over several runs (the run-to-run variance §5c.15 §7c documented), and any fix must
  be A/B'd on 3+ runs with and without the instrumentation.
* **What was ruled out this session.** The stream-completion path drops a `0x8046BBE0` callback
  silently when its target is `0x807C6F60`, `0x800000E4` or does not resolve
  (`tls_dvd_service_callback`); that path is now instrumented and prints
  `[TLS DVD] stream completion DROPPED ...`. It **did not fire** in either kind of run, so dropped
  completions are not the cause here.

Next steps for Task 2, in order: (1) find the race - candidates are the DVD callback delivery
gated on "guest PC is at an idle address" (`tls_dvd_service_callback`), the alarm/interrupt
delivery in the frame loop, and any host-side queue drained once per frame; (2) name
`fn_8022A054` / `fn_8022ADD4` (call sites: `GameLoadTask` `0x80570CFC`, the two `vt=0` task
entries `0x80363DBC` / `0x803646C4`) and find what writes the word at `[r7+4]` the loop spins on
(`r3=0x90002008` is a MEM2 pointer, so it looks like a worker flag the host never advances);
(3) validate over 3+ runs both with and without instrumentation.


---

### 5c.20 Gamma is refuted, the XF stage is implemented, and the chain *erases the scene*

Three measurements, one implementation. The first one kills the plan §5c.19 §9 opened with.

#### 1. The gamma hypothesis is REFUTED, by a content-matched measurement

§5c.19 §9 proposed `TLS_GAMMA_TEST` first because `v_host = v_ref^(1/2.2)` explains the *ratio* of
two **frame averages**. Frame averages of two different framings are weak evidence, but there is a
content-matched comparison that needs no run at all: the **gold MENU text** is the same artwork in
both pictures, drawn by the same UI passes, so a global transfer-function difference has to show up
there. Measured with `tools/img_stats.py` + a percentile scan (`numpy`):

| image | top 0.3 % brightest pixels | p99 luminance | p50 luminance |
|---|---|---|---|
| host, `TLS_TEV=1`, frame 1448 | `(255,255,220)` | 155 | **0** |
| Dolphin, `27-dolphin-menu-frame1440.png` | `(247,242,200)` | 142 | **15** |

The brightest content matches within 5 % and p99 within 9 %. A 2.2-power transform would move
those by 4-8x, not 5 %. **The host's transfer function is already the reference's.** What differs is
`p50`: the host's *background* is pure black where the reference has the dark cave. So the defect is
not "the scene is 3x too bright" - it is "the scene is not on screen at all". No `TLS_GAMMA_TEST`
was added; do not add one.

#### 2. `TLS_TEV=1` already draws the MENU the way the reference does - minus the background

The same run (`TLS_TEV=1`, **no** `TLS_DEFER_EFB_COPY`) produces
`build/recomp/d3d11_screenshot_1448.ppm` = a dark frame with the gold `MENU` plate and
`CONTINUE / NEW GAME / MULTIPLAYER` with their Japanese sublabels, frame average `(7,6,4)`.
That is structurally the reference frame; the cave behind it is missing. The old note that
"`TLS_TEV=1` alone does not change `(124,235,255)`" (5c.16 §7) does **not** reproduce in this tree -
the cyan field is the *no-TEV* shader's output. Re-measure that claim before trusting it again.

#### 3. Per-pass map of the chain: b32 erases the scene with a copy that guest memory says is black

`TLS_TEV=1 TLS_BATCH_PROBE=1448 TLS_TEV_PROBE=1448 TLS_TEV_PROBE_FROM=28`, batch averages measured
through `probe_backbuffer_avg()` (`build/recomp/run_tev_1448.log`):

| batch | what it draws | blend | frame after |
|---|---|---|---|
| b0..b16 | the 3D scene (40 060 of the frame's 40 188 vertices) | replace | `(7,8,8)` -> `(38,35,34)` |
| b17..b31 | UI/particles over the scene | alpha/add | `(35,33,32)` |
| **b32** | `0x90395DC0` 320x224 copy of the frame, s=1 d=0 | replace | **`(0,0,0)`** |
| b33..b39 | 160x112 / 320x224 / 80x56 copies, add | replace/add | `(0,0,0)` |
| b40 | `0x903D31C0` 320x224 (texture avg `(1,2,2)`) | s=4 d=1 | `(6,6,6)` |
| b41 | `0x905C3000` 640x448 (texture avg `(3,6,7)`) | s=4 d=1 | `(11,12,12)` |
| b42..b66 | UI text/logo passes | | the menu picture above |

So the whole frame is *rebuilt* from EFB copies, and every copy the chain consumes reads
`(0,0,0)`..`(3,6,7)` in guest memory. `probe_texture_avg()` decodes the guest texture, not the host
render, so this is the destination *content*, not a sampling artefact. Two candidate causes, and
they are separable:

* the **inline copy model** reads `efb_snapshot`, i.e. the *previous* frame's finished picture - and
  the previous frame's finished picture is this same text-over-black frame, so the loop has a black
  fixed point. `[EfbCopySrc] reading previous-frame snapshot` is printed per copy for exactly this
  reason.
* the **destination geometry** (`TLS_EFB_COPY_GEOM`) makes an 80x56/160x112 destination receive a
  640x448-sized write, so even a correct source could be decoded back as black.

The 3D scene itself is `(38,35,34)` at the end of b16 against the reference's composited
`(23,25,18)` - a factor of **1.6**, not the 3.3 that §5c.19 §9 derived from a scene-only frame
compared against a *composited* reference. The scene is close; the chain is what destroys it.

#### 4. The XF stage: lighting is off at the MENU, but the texture matrices are a real gap

New probe `TLS_XF_PROBE=<frame>` dumps the whole XF file (channels, materials, lights, normal
matrices, tex matrices, viewport) and a per-batch table. Measured at frame 1448:

* `numChan=1`; channel 0 colour control `0x705` on the 3D batches = **lighting disabled**,
  `matsource=vertex`, `ambsource=vertex`; only 2 of 67 batches / 216 of 40 188 vertices are lit at
  all. So an unlit-vertex-colour bug is **not** the MENU's problem (it may well matter in Chapter 1).
* `numTexGens` really varies per batch (1, 2, 3, 4, 5, 6) while the vertex descriptor supplies only
  `TEX0`/`TEX1` (`texcoord_mask=0x03`). Every texgen is **regular** (`TexMtxInfo=0x280+0x80*i`,
  source row `Tex(i)`), `dualTexTrans` is on and `PostMtxInfo=0x3D`. The host implements **none** of
  that: it samples every stage with the single raw `uv0`, where hardware transforms `(u,v,1,1)` by
  the tex matrix, then by the post matrix, and gives texcoords `>= numTexGens` the constant value
  `vec3(0,0,0)` (Dolphin `VertexShaderGen.cpp`). This is a genuine, measured 3D gap and the next
  thing to implement after the chain (it is what 5c.16 §8 was really seeing).

**Implemented this session** (`recomp/gx_pipeline.c`, opt-in): the full XF register file plus the
lighting equation of Dolphin's `LightingShaderGen.cpp` in 8-bit fixed point - `TLS_XF_LIGHTING=1`
enables it, `TLS_XF_NO_LIGHTING=1` forces it off, and **the default path is unchanged** (no flag was
promoted; the MENU does not need lighting, so there is nothing to gain from promoting it yet).
`GxDrawBatch` now also records `xf_ctrl0` and `xf_num_texgens` so a per-batch lighting/texgen
decision is possible without re-reading globals.

#### 5. The per-stage texcoord gap is real, implemented, measured - and *not* the brightness bug

The TEV pixel shader sampled **every** stage with the batch's single `uv0`:
`texel = SampleTevTex(map, input.uv)` in `tools/compile_shaders.py`. Hardware lets each stage
name its texcoord, and starts a coord at `(0,0)` unless the batch supplies that attribute
(Dolphin `VertexShaderGen.cpp`), so for the MENU's 3D batches - which supply `TEX0`/`TEX1` only
while their stages name texcoords 0..3 - stages 2 and 3 must read the corner texel, not `uv0`.

Implemented end to end, opt-in via **`TLS_TEV_TEXCOORD=1`**: `GxVertex` carries `u1/v1`
(`TEXCOORD1`, offset 40, appended so no existing offset moved), the TEV constant buffer's
`tev_order[].w` carries the renderer's per-stage choice (0 = uv0, 1 = uv1, 2 = constant), and
`TevSelectUv()` picks it. **Measured: the scene at b16 goes `(38,35,34)` -> `(49,43,44)`**, i.e.
*brighter* and further from the reference's `(23,25,18)`. So the corner-texel rule is not the
brightness defect and it stays off by default. The default path was re-verified after the
struct/layout/shader changes: MENU frame 1448 with no `TLS_*` flags still measures
`(124,235,255)`, byte-identical.

#### 6. Hardware's MENU copy sequence (new corpus this session)

A MENU-phase corpus with `DumpEFBTarget=True` was captured this session (2007 framedumps +
30 623 `efb1_*` per-copy dumps, 250 s of wall clock, plan `600-612:A,900-912:A,1200-1212:A`).
Dolphin's copy of the title cave is a **320x224 RGBA8 image of the current scene**
(`efb1_n013500_320x224_6.png`, average `(15,16,16)`), and the within-frame copy sequence reads

```
0    5    12   15   15   0 0 0   16   15 15   16   16   17/20   21/24   21/24
```

i.e. the copies carry the **current** frame's scene at 15-16 and the chain lifts it to 21-24
(+40 %). The host's equivalent copy destination (`0x90395DC0`, 320x224) holds `(0,0,0)` and the
host's chain lifts 32-38 to 254. Two independent errors, both now quantified:

| quantity | host | hardware |
|---|---|---|
| scene level entering the chain | `(38,35,34)` | `(15,16,16)` |
| what the chain's copies contain | `(0,0,0)` (stale inline snapshot) | the current scene |
| chain lift over the scene | x6.7 | x1.4 |

So the inline copy model is **provably** wrong (a copy must contain the scene that was drawn
before it), and the additive passes are ~4x too strong. Fix the copy model first; the pass
strength is then measurable one pass at a time against the `21/24` target.

Eliminated by measurement for the 2.5x scene brightness, so far: gamma (bright content matches
the reference within 5 %), XF lighting (disabled on these batches - 2 of 67), tex/post matrices
(identity), per-stage texcoord selection (above), and "the scene is drawn wrong" (it is drawn
correctly before b32 - the chain erases it). Remaining suspects, in order: (a) the chain's
additive pass strength, (b) TEV `RASA`/alpha in the stages that write `dest=c2`,
(c) the RGB565 EFB quantisation the reference goes through and the host does not.

#### 7. Next step for the chain (ordered)
1. Capture a **MENU-phase** Dolphin corpus with `DumpEFBTarget=True` (this session started exactly
   that run: `--frame-plan "600-612:A,900-912:A,1200-1212:A"`, i.e. stop before the save dialog, so
   the animated MENU is dumped) and compare **per copy**, host destination vs Dolphin's dump of the
   same `WxH` - same size, same content, no framing mismatch.
2. Decide inline-vs-deferred with that data, not with a static-frame average: the host's inline
   model is provably stale (`[EfbCopySrc] previous-frame snapshot`), and the deferred model has
   never been checked against a *MENU* copy.
3. Re-check `TLS_EFB_COPY_GEOM` on the copies the chain actually consumes (b32..b41), whose
   destinations are 320x224 / 160x112 / 80x56 while the source rect is 640x448.

---

### 5c.22 The whole host picture is one defect: the bloom chain is *quadratic* in the scene level

**State at the end of this session:** `ad69293`, tree clean, build green, default with no `TLS_*`
flags re-measured at MENU frame 1448 = `(124,235,255)` (unchanged). New flags this session:
`TLS_EFB_CHAIN=<present>` (+ `TLS_EFB_CHAIN_DUMP=1`), `TLS_EFB_COPY_FMT=1`,
`TLS_COMPOSITE_ZTEST=1` (refuted, no-op), `TLS_TEX_DUMP=0xADDR[,0xADDR]`, and `TLS_BATCH_PROBE`
now also prints `max=`, `red=`, `bright=`. A run to frame 1452 takes ~140 s with
`--frames 1452 --window --novsync` and exits by itself, so no taskkill is needed.

#### 0. Session setup: the workspace was not writable, and it was not the DACL

Every *existing* file under the workspace refused `open-for-write` with `Access is denied` while
creating new files worked, and the DACL looked perfect (`Users: ReadAndExecute`,
`Authenticated Users: Modify`). The cause is **mandatory integrity level**, not permissions: the
harness token runs at **Low** integrity (`whoami /groups` -> `Mandatory Label Low Mandatory Level`)
and the files had been created by an earlier, higher-integrity process, so Windows' no-write-up rule
denied the open. Two files with byte-identical DACLs behaved differently, which is the tell.
Fix (once, from a full-access session): `icacls <workspace> /setintegritylevel (OI)(CI)L /T /C /Q`
- 73 800 files relabelled, 825 refused (`tools/w64devkit/src/*` submodule working copies, which are
not needed for the build). Do not spend time on ACL repair for this symptom.

#### 1. The Dolphin corpus lives in `Dump\Textures`, not `Dump\Textures\SLSEXJ`

`%APPDATA%\Dolphin Emulator\Dump\Textures\` holds 30 623 `efb1_*` dumps + 2 015 frame presents
(2 015 emulated frames, of which **589 are MENU-phase**); the `SLSEXJ` subdirectory only has the 405
`tex1_*` texture dumps. `tools/copy_chain.py` (new) parses either - set
`TLS_COPY_DUMP_DIR` - and prints one frame's copies **in execution order** with size, format,
average and peak. The present frame is the `640x479` copy, so **its average *is* the frame average**
and can be compared with the host's screenshot without any framing argument:

```
frame 1101 (21 copies, in order):
  320x224 f4 =0      640x448 f3 =255   320x224 f4 =0      320x224 f4 =5
  640x448 f3 =251    160x112 f6 =12    320x224 f6 =15     80x56 f6 =15/16/16 pk381
  80x56   f6 =0 pk47 80x56   f6 =0 pk29 80x56  f6 =0 pk18
  640x448 f6 =16     320x224 f6 =15     320x224 f6 =15    320x224 f6 =15
  640x448 f6 =16     160x112 f6 =25/30/22   320x224 f6 =32/36/28
  80x56   f6 =31/36/28   80x56 f6 =31/36/28
  -> present 640x479 fmt15 = (31,34,28)
```

Three things this settles: (a) the four trailing copies carry the **composited** frame (25-36), the
rest carry the **scene** (12-16); (b) the bloom's source peak is only 338-381 of 765, i.e. the glow
is a *localised* highlight, not a full-screen field; (c) hardware's composite lift is
`15/16 -> 31/34`, about **x2**.

#### 2. The host's deferred chain lifts by the same x2 - with a full-screen white blob

`TLS_TEV=1 TLS_DEFER_EFB_COPY=1` at frame 1448 (measured this session, `d3d11_screenshot_1448.ppm`,
mean `(86,89,86)`): the menu text is right and there **is** scene content, but a saturating white
ellipse covers the middle of the frame. Luminance percentiles:

| image | p10 | p50 | p75 | p90 | p99 | max |
|---|---|---|---|---|---|---|
| host, deferred, 1448 | 0 | 45 | 172 | 243 | 255 | 255 |
| reference `27-dolphin-menu-frame1440.png` | 4 | 15 | 26 | 42 | 142 | 255 |

Grid means (4x6) show the shape: host `0.9 25 71 75 29 1.5 / 26 142 236 242 168 30 / ...`,
reference `5.5 11 12 15 16 4.8 / 22 29 47 36 28 8.8 / ...`. The host's centre is 235-242 where the
reference is 47-51. **The composite chain's amplification is comparable (x2.3 vs x2.0); what is
wrong is the level it starts from and therefore the quadratic passes**: a squaring pass maps
`v -> (v/255)^2`, so the host's scene level of 38 gives 5.6 where hardware's 15 gives 0.9, a 6x
difference in the bloom source, and the additive passes then saturate the middle of the screen.

So the ordering in §5c.19/§5c.20 ("fix the copy model first, then the pass strength") is still
right, but the *prize* is the base scene level: **everything else in the chain is downstream of a
scene that is 2.4x too bright**, and the quadratic passes turn 2.4x into saturation.

#### 3. The copy model is now proven correct, in order, batch by batch

New probe `TLS_EFB_CHAIN=<present>` prints **every copy of one present in stream order** with the
batch it is attached to, the source rectangle, the average of the pixels it just read, and the
average of the destination decoded back out of guest memory. Frame 1448, `TLS_TEV=1
TLS_DEFER_EFB_COPY=1` (present counter, guest frame 1447):

```
copy=0  batch=-1  320x224 <-640x448 srcavg=(0,0,0)        # before the clear+draws
copy=4  batch=32  640x448 srcavg=(35,32,31)               # the scene, as drawn
copy=6  batch=32  320x224 srcavg=(35,32,31)
copy=7  batch=33  80x56   srcavg=(21,22,21)               # downsample of the scene
copy=8  batch=35  80x56   srcavg=(0,0,0)                  # blur chain collapses to 0
copy=9  batch=36  80x56   srcavg=(0,0,0)
copy=10 batch=37  80x56   srcavg=(0,0,0)
copy=11 batch=39  640x448 srcavg=(21,23,22)
copy=12 batch=39  320x224 srcavg=(21,23,22)
copy=13 batch=40  320x224 srcavg=(29,32,29)
copy=14 batch=41  320x224 srcavg=(60,64,60)
copy=15 batch=42  640x448 srcavg=(131,139,131)
copy=16 batch=43  320x224 srcavg=(112,121,113)
copy=17 batch=47  640x448 srcavg=(129,141,134)
copy=18 batch=48  160x112 srcavg=(221,235,223)
copy=19 batch=48  320x224 srcavg=(241,248,242)
copy=20 batch=49  80x56   srcavg=(222,234,219)
copy=21 batch=50  80x56   srcavg=(255,255,255)
copy=22 batch=-1  640x448 xfb srcavg=(91,95,92)           # the present copy
```

`dstavg == srcavg` on every copy, so the write, the tile layout and the decode are all consistent;
the deferred model really does service each copy at the right point of the draw stream, and the
first copies of a frame are black (the clear) exactly like hardware. **The copy-servicing question
is answered: `TLS_DEFER_EFB_COPY=1` is the model, and the two things left are (a) the level of the
scene and (b) the levels of the composite passes, both visible above.**

The host's copy *sizes* also line up with Dolphin's when the two are aligned by size, so the
destination geometry (half-scale bit + pitch) is right where it matters:

| copy | host size | host avg | Dolphin (frame 1101) | Dolphin avg |
|---|---|---|---|---|
| 5 | 160x112 | 22 | 160x112 | 12 |
| 6 | 320x224 | 35 | 320x224 | 15 |
| 7 | 80x56 | 21 | 80x56 | 15 |
| 8-10 | 80x56 | 0 | 80x56 | 0 (peak 47/29/18) |
| 11 | 640x448 | 21 | 640x448 | 16 |
| 13 | 320x224 | 29 | 320x224 | 15 |
| 14 | 320x224 | 60 | 320x224 | 25 |
| 15 | 640x448 | 131 | 640x448 | 32 |
| 18 | 160x112 | 221 | 160x112 | 25 |

#### 4. The composite passes: hardware asks for a 4-tap blur and gets *one* tap

`TLS_TEV_PROBE` at the additive passes (b39, texture `0x9038D1C0`) shows **five TEV stages, one
texmap, and texcoords 0/1/2/3 with the K registers all 0.2**:

```
st0 rgb: ZERO tex.rgb konst.rgb ZERO  kc=K0.r (0.2)   texcoord=0
st1 rgb: ZERO tex.rgb konst.rgb prev  kc=K0.g (0.2)   texcoord=1
st2 rgb: ZERO tex.rgb konst.rgb prev  kc=K0.b (0.2)   texcoord=2
st3 rgb: ZERO tex.rgb konst.rgb prev  kc=K0.a (0.2)   texcoord=3
    alpha: ZERO tex ras ZERO  (alpha = tex.a * ras.a)
```

so the pass is a 4-tap box blur of the *same* texture with weights 0.2 - but the batch supplies
`texcoord_mask=0x01`, i.e. **TEX0 only**. Dolphin's `VertexShaderGen.cpp` initialises every
ungenerated coord to `vec4(0,0,0,0)` and only overwrites it from an attribute that exists
(`if (texGenInfo[texnum].texcoord_elem_count != 0) coord = vec4(rawtex.x, rawtex.y, 1, 1)`), so on
hardware taps 1..3 sample the **corner texel**, not a second/third/fourth UV. That is why hardware's
additive passes are weak (the measured +4 per pass) while the host's add the full texture:
`b39 21->43 (+22 on a 21-valued texture)`, `b40 43->73`, `b41 73->131`, i.e. ~100 % per pass.

The fix is therefore not a fudge factor: `TLS_TEV_TEXCOORD=1` (already implemented in 5c.20, opt-in)
is the hardware rule, and it was measured *worse* only because it was measured on the 3D scene at
b16 where the batch **does** supply TEX1 (`texcoord_mask=0x03`) - a different question from the
composite, where the mask is 0x01 and three of four taps must collapse to the corner texel.
Measured with it on: the additive passes drop from ~100-143 % of the sampled copy to 41-81 % of it
(b39 `44->62`, b40 `62->99`, b41 `99->166`), i.e. the per-pass *structure* gets much closer to
hardware (56 %/44 %), while the frame average stays high only because the scene entering the chain
is already 2.4x too bright.

#### 5. What the host's own 320x224 scene copy looks like against hardware's

`TLS_EFB_CHAIN_DUMP=1` writes each copy destination, so the scene copy can be compared with
Dolphin's `efb1_n014594_320x224_6.png` pixel for pixel - same size, same view, no framing excuse:

| | host copy 6 | Dolphin copy |
|---|---|---|
| average | `(35.3, 32.3, 31.4)` | `(15.3, 16.0, 16.3)` |
| ratio | R 2.31, G 2.02, B 1.93 | |
| abs diff mean | 26.6 | |

Two *local* defects are visible in the pictures that the average cannot express, and per-batch
statistics (new: `TLS_BATCH_PROBE` now prints `max=`, `red=<samples>/<n>`, `bright=`) attribute
them to exact batches at frame 1448:

* **the foreground stone renders saturated red with dark stripes** in the host and blue-grey in the
  reference. `red` jumps `32 -> 49` at **b10** (`tex 0x90CDCBE0` 256x256 CMPR), then `49 -> 332` at
  **b13** (`0x912E8340` 512x256) and stays at 263 through b16. So it is the 3D terrain batches, and
  the host's scene is red-dominant `(35,32,31)` where hardware's is blue-dominant `(15,16,16)`.
* **the saturated white blob in the middle of the screen** is added by **b30** (`0x90D175E0` 128x128
  CMPR, 18 vtx, `s=4 d=1` additive): `max` jumps `556 -> 765` and `bright` `0 -> 12` there, and
  b31 (`0x907FCBA0` 64x64, 228 vtx) takes it to 14. Everything before b30 has `max<=556`. So the
  blob is a *particle/glow* batch, not the composite and not the EFB copy.

Both are additive/blend-level defects in the 3D pass, which is why "the scene is 2.4x too bright"
could not be explained by the copy model, gamma, lighting or texcoords: those were all correct.

#### 6. FOUND AND FIXED (opt-in): the copy destination *format* was ignored - that was the red rock

`probe_texture_avg` at b13 showed the culprit: TEV stage 3 of the terrain batch *adds*
`map2 = 0x9038D1C0 320x224 fmt=4 avg=(127,112,0)` - a yellow-red layer. `fmt=4` is **GX_TF_RGB565**,
i.e. the guest samples that EFB copy destination as 2 bytes per pixel in 32-byte 4x4 tiles, while
the host wrote every destination as a 4-byte RGBA8 64-byte tile. Dolphin's own per-copy dumps name
the same destinations `..._320x224_4.png` / `..._320x224_6.png`, i.e. hardware really does copy into
both RGB565 and RGBA8 destinations in one frame. Every RGB565 destination therefore held a
mis-laid-out image, and the 3D passes sampled it and added it - which is exactly the saturated red.

The decoded *source* texture is fine: `TLS_TEX_DUMP=0x912E8340` writes the decoded atlas and it is
grey rock (`mean (63,63,56)`), so this was never a texture decode problem.

`TLS_EFB_COPY_FMT=1` (implemented in `recomp/gfx_d3d11.c`, passed through from
`recomp/gx_pipeline.c`) writes the destination in the format's real layout - RGBA8 (4 B/px, 64 B
tile), RGB565 (2 B/px, 32 B tile of big-endian u16), RGB5A3, IA8 - and derives the destination width
from the pitch *and* the format: a 4x4-tiled tile row is `dst_w*4*bpp` bytes and equals `pitch*32`,
so `dst_w = pitch*8/bpp`. That reproduces the guest's own pitch/dstw pairs (`pitch=80 -> 320` for
RGB565, `pitch=160 -> 320` for RGBA8 - the old rule said 160 for both) and it is the principled
version of `TLS_EFB_COPY_GEOM`. Formats that are not implemented keep the old RGBA8 write instead of
dropping the copy, and `copy_to_xfb` bypasses the check (its 16bpp linear scanout write is separate).

Measured at frame 1448 (`TLS_TEV=1 TLS_DEFER_EFB_COPY=1 TLS_EFB_COPY_FMT=1`), the new
`red=<samples>/3600` statistic goes **263 -> 0** through the whole 3D pass (b10 49, b13 332,
b14..b16 263 before), the scene's hue moves from red-dominant `(38,35,34)` to the reference's
blue-dominant `(38,40,40)` direction, and the frame average goes `(86,89,86) -> (82,87,82)`.
The flag stays opt-in only because it shifts the whole chain; **it is the most clearly correct change
of the session and should be promoted once the composite chain below is fixed.**

#### 7. Refuted by measurement: honest z-testing is not the composite's problem

`TLS_COMPOSITE_ZTEST=1` makes non-perspective batches honour the guest's z-mode (the composite quads
declare `ztest=1`, `zwrite=0`). Measured: **frame (86,89,86) - byte-identical, no effect**, and the
reason is now printed: every composite quad has `z=[0.0000..0.0000]`, i.e. exactly the near plane, so
`LESS_EQUAL` passes them everywhere. Hardware does the same, so this hypothesis is dead - the flag
stays as a documented no-op and `TLS_BATCH_DUMP` now prints `z=[..]` per batch.

#### 8. The one remaining defect: the additive composite chain, quantified

Copy levels after the square pass, same present, four runs:

| | square | +add1 | +add2 | +add3 | ... | present |
|---|---|---|---|---|---|---|
| hardware (Dolphin frame 1101) | ~1 | 16 | 25 | 32 | 31 | (31,34,28) |
| host default flags | 0 | 22 | 29 | 60 | 131 -> 255 | (86,89,86) |
| host `TLS_TEV_TEXCOORD=1` | 0 | 44 | 46 | 83 | 166 -> 255 | (93,93,93) |
| host all four flags | 0 | ~44 | ~46 | ~83 | ~166 -> 255 | (93,93,93) |

Per-pass gain over the sampled copy: host 100-143 % (texcoord off) or 41-81 % (texcoord on);
hardware 44-56 %. So the per-pass structure is *closer* with the texcoord rule on, yet the frame
still saturates because the frame entering the chain is 2.4x too bright and the passes compound.
Neither the copy model, the format fix, the texcoord rule nor honest z-testing removes the white
ellipse; everything else in the chain has been measured as faithful.

The next measurement that will settle it needs Dolphin, not the host: the four additive passes are
`SRC_ALPHA, ONE`, and their source alpha comes from the **alpha channel of an EFB copy**, which the
host always writes as 255 (`[tex] ... a=255`). A hardware capture of the EFB copy *with alpha*
(`DumpEFBTarget` writes RGB PNGs, so this needs a dolphin.log/`TextureDump` run with
`DumpTextures` + EFB copy alpha, or a `-d` framebuffer readback) would show whether hardware's copied
alpha is ~0.5, which is the only remaining term that can halve every pass. Everything else - ordering,
sizes, formats, destination content, the TEV stage table, the K registers - has been measured and
matches.




---

### 5c.23 The EFB alpha is pinned at 1.0 - the composite tail has been running every additive pass at full strength

**State at the start of this session:** `6e65998`, tree clear, build green.

#### 0. The write denials were the *sandbox package SID*, not the integrity label

`recomp/`, `tools/` and `config/` refused every write - existing files *and* new
files - while `build/` and the workspace root were writable. The tell is the DACL, not
the integrity label that 5c.22 §0 fixed:

```
.                         S-1-4-272833741-438872707:(OI)(CI)(W,D,DC)   <- present
build\recomp              S-1-4-272833741-438872707:(OI)(CI)(W,D,DC)   <- present
recomp                    (no S-1-4-* entry at all)                    <- denied
```

The DSH sandbox runs this session in an AppContainer whose package SID is
`S-1-4-272833741-438872707`; access to a path needs that SID or the signed-in user's
SID in the DACL, and `recomp/` inherited neither. Fix, once, from a full-access
session: `icacls`-free - run the bundled ACL skill script unconfined with
`-AllowRoot <workspace>` and it adds a full-control ACE for the signed-in user
(`tools/dsh` skill `diagnose-windows-sandbox-acl`, report in `.acl-repair-4/`). Note
that a *confined* run of that script cannot help (it reports the sandbox's own
restriction as a missing right).

#### 1. The EFB alpha is 1.0 after every single batch - measured, not argued

New instrument: `TLS_BATCH_PROBE` now also prints `a=` (the framebuffer alpha average,
sampled on the same 16px grid as `avg=`). MENU present 1448, `TLS_TEV=1
TLS_DEFER_EFB_COPY=1 TLS_EFB_COPY_FMT=1`:

```
after b0  col0=0xFF808080 avg=(9,10,11)   a=255
after b13 col0=0x00FFFFFF avg=(30,30,28) a=255      <- vertex alpha 0!
after b19 col0=0xFFFFFFFF avg=(43,46,48) a=255
after b35 col0=0xFFFFFFFF avg=(47,45,43) a=255      <- the scene copy, replace
after b37 (s=2 d=0, squares the frame)   a=255
present                                   a=255
```

Three separate reasons, all of them the host's and none of them GX's:

1. `d3d11_present` cleared the EFB with **alpha = 1.0** (`clear_color[3] = 1.0f; // the
   guest clear alpha is not used`), so the frame starts opaque.
2. every blended batch used `SrcBlendAlpha=ONE, DestBlendAlpha=INV_SRC_ALPHA` - the
   "over" operator - whatever the guest's CMODE0 said, so alpha can only ever climb.
3. the host *forces* colour blending on for batches whose guest blend is disabled
   (`dst_factor == 1/5/7`), so even the opaque 3D terrain went through a blend instead
   of GX's replace.

Consequence: every EFB copy the composite tail samples carries `a=255` (`[EfbChain]
dstalpha=255` on all 21 copies), and the four additive passes are `SRCALPHA/ONE`, whose
strength is `src.rgb * src.a`. Hardware's own per-pass gain is 44-56 % of the sampled
copy; the host's is 100-143 %. **This is the last unexplained term in the chain, and it
is a host defect, not a property of the game.**

#### 2. `TLS_EFB_ALPHA=1`: the faithful version, in one flag

* clear alpha from BP 0x4F (the guest's `GXSetCopyClear` alpha) instead of 1.0;
* alpha *replace* (`ONE/ZERO`) whenever the guest had blending disabled - GX's
  `dst.a = src.a`, expressed in D3D11 terms;
* alpha follows the guest's CMODE0 factors when it had blending enabled
  (`TLS_GX_ALPHA_BLEND`'s behaviour, now implied).

`get_or_create_blend_state` takes the *guest's* blend-enable separately from the
host's (possibly forced) one, and both are in the state cache key.

#### 3. The stall loop is a structure walk, not a flag spin

`0x8022A204` is inside `fn_8022A054` (`src/game_res_texture.c`, size 0x5C4 - the game's
resource allocator), and the generated code shows what it really is:

```
8022A204: r0 = [r7+4] & ~3 ; r0 -= r4 ; if (r0 >= r30) { r30 = r0; r31 = r7; }
          r7 = [r7+16] ? [r7+16] : [r7+20]        ; child/next pointers
8022A238: if (r7) goto 8022A204                   ; walk the whole structure
```

i.e. a traversal that keeps the **maximum** of `([node+4] & ~3) - r4`, entered at
`[r5+300]`. It is called from `fn_8022ADD4+0x270` and **retried while it returns 0**
(`8022B040..8022B04C`), with `r4 = r30`. 100 % of every sample at one address therefore
means the walk never terminates - a **cycle (or a self-referential reuse) in the
allocator's tree**, not a flag the host fails to advance. Naming: `fn_8022A054` =
resource-block finder, `fn_8022ADD4` = the caller that retries it forever.

#### 4. What the frame at present 1448 actually *is* - and the reference to use

Every previous session compared "MENU frame 1448" against the reference. It is not the
MENU on this input plan. Rendered to PNG it is:

```
The save data cannot be used because the data is corrupted.  Recreate save data?
                                     Yes / No
```

over a **dark screen with a huge white radial glow and black corners**, plus two solid
grey/blue button rectangles. So:

* the host reaches the *save-data check* by present 1448 with the plan
  `600-612:A,900-912:A,1200-1212:A` (three A presses: title -> MENU -> NEW GAME ->
  save check), and the dialog covers whatever is behind it;
* `docs/evidence/27-dolphin-menu-frame1440.png` **is** `dolphin-ref/run2/framedump_1440.png`
  (mean `(23,25,18)`, p50 15, p90 42, p99 142, 4x6 grid `5 9 14 5 / 13 21 24 11 / 29 49 41 12 / ...`),
  i.e. run2 is the frame-aligned reference corpus for this input plan;
* `dolphin-ref/run3/framedump_1448.png` is a *different* screen (the flat light title
  plate, mean 204, uniform) - run3's input timing differs, so run3 must not be used for
  frame-indexed comparison. Use `run2/` for the MENU and the `efb1_*` corpora only for
  per-copy content.

**The fabricated zero save file did not cause it.** `host_runner.c` used to write a
zero-filled 1 348 992-byte `savedata/savedata.dat` at startup, while the NAND stand-in in
`replacements.c` deliberately answers "no such file" for a fresh console so the guest can
tell "no save data yet" from "corrupt". The startup pre-creation defeated that; it is now
behind `TLS_SAVE_PRECREATE=1` and **off by default**, and the file was deleted. Measured
after the change: the picture at 1448 is *byte-identical* (mean `(60,61,63)`, same
sha256) - so the guest's "corrupt" verdict is not decided by that file's contents at
all. It comes from what the NAND/ISFS/NANDCheck answers say, or from a check that fails
before any file is read. That is the next thread for whoever picks this up; it is what
keeps the MENU (and everything after it) off the screen.

#### 5. Every EFB copy destination format is now written in its real layout (promoted)

`TLS_EFB_COPY_FMT` only knew RGBA8/RGB565/RGB5A3/IA8; everything else fell back to an
RGBA8 write *at the wrong width*, because the width is derived from the pitch and the
format's bytes per pixel (`dst_w = pitch*8/bpp`). The title screen's bloom chain uses two
of the missing ones:

```
before: [EfbChain] copy=5 dst=0x9038D1C0 40x28  fmt=8  src=(0,0)-(319,223)   <- R8 chain
after : [EfbChain] copy=5 dst=0x9038D1C0 160x112 fmt=8  src=(0,0)-(319,223)
before: copy=1 dst=0x90536FE0 320x224 fmt=11                                 <- RGB5A3
after : copy=1 dst=0x90536FE0 640x448 fmt=11
```

Implemented (UPE `tp_realFormat` -> bytes/pixel in its 4x4 tile): `1 R8` (32B of red),
`7 A8` (32B of alpha), `8 R8`, `9 RA8` (= `3`), `10 RGB565` (= `4`), `11 RGB5A3` (= `5`),
`12 RGBA8` (= `6`). R4/RA4 and the Z formats still fall back to an RGBA8 write - never
drop a copy, per the earlier session's rule. The destination sizes now reproduce exactly
the size/format pairs Dolphin's own per-copy dumps use, counted over the whole corpus in
`%APPDATA%\Dolphin Emulator\Dump\Textures`: `80x56_6` x7898, `320x224_6` x6314,
`320x224_4` x4661, `640x448_3` x3401, `640x448_6` x2795, `160x112_6` x2351, `640x479_15`
x2015, **`160x112_1` x714**, `640x448_4` x276, plus a few `64x64_0/1/6`. `dstavg ==
srcavg` on every copy after the change, i.e. write and decode agree.

**Promoted to the default** in the same commit (`TLS_EFB_COPY_FMT=0` restores the old
write); `TLS_DEFER_EFB_COPY`, `TLS_EFB_ALPHA` and `TLS_TEV` stay opt-in.

#### 6. The title screen: the vignette *is* implemented, its strength is the question

The title screen (input plan `600-612:A` only, so the game sits on it) is the cleanest
test case in the whole project: it is static, it is the same every run, and the reference
is `dolphin-ref/run2/framedump_900.png` (mean 205, corners 174-176, centre 218-220).

Host, `TLS_TEV=1 TLS_DEFER_EFB_COPY=1 TLS_EFB_ALPHA=1` (copy formats now default): mean
90, corners **1**, centre 241. Rendered it is a white radial glow with black corners.

Batch trace (`TLS_BATCH_PROBE=1448`) says the plate is drawn correctly and early - `b0`
covers the whole screen at `avg=(219,219,219)`, `bright=3597/3600` - and the *final*
composite pass, **b18** (6 vertices, fullscreen, `s=4 d=5` = SRCALPHA/INVSRCALPHA), is
what turns it into the glow. `TLS_TEV_PROBE` at b18:

```
map0 = 0x9051E1A0  64x64 fmt=3 avg=(90,90,90) a=90      <- the radial mask
map1 = 0x9038D1C0  80x56 fmt=6 avg=(255,255,255) a=0     <- the frame copy
st0 rgb  : ZERO tex.rgb konst.rgb ZERO      kc=K0  (K0 = opaque BLACK, see below)
st0 alpha: ZERO tex ras ZERO
st1 rgb  : ZERO ZERO ZERO prev.rgb
st1 alpha: konst ZERO tex ZERO
```

So b18 draws **black** with `alpha = K0.a * (1 - mask.a)`: `dst = dst * (1 - alpha)`.
The host's corners go to 0 because the mask's alpha is 0 there (1-0 = 1). The host is
implementing the printed stages; what differs from hardware is the *value* of that
alpha, i.e. either the mask's alpha channel or `konst`.

**Correction that costs a run to find:** the TEV probe printed the K registers in
`(r, a, b, g)` order and labelled them r,g,b,a, so `K0 = (0.0000 1.0000 0.0000 0.0000)`
reads as "green" when it is **r=0 g=0 b=0 a=1** - opaque black. Fixed in this commit;
the print is now r,g,b,a.

Next tests for this screen, in order: (a) `TLS_TEX_DUMP=0x9051E1A0` and check whether the
mask is an IA8 radial image (alpha tracking the intensity) or an **I8** image that the
host is decoding as IA8 - the host's `fmt=3` comes from the guest, but an I8 read as IA8
puts the intensity in the alpha byte and would make exactly this mistake; (b)
`TLS_TEV_TEXCOORD=1`, because b18 supplies `texcoord_mask=0x01` while its two stages name
texcoords 1 and 0, so on hardware stage 0 samples the *corner texel* of map1, not uv0.

#### 7. The mask is decoded correctly - so the vignette's *texcoord* is the gap

The host's decoded mask at b18 (`0x9051E1A0`, 64x64, `fmt=3`) has `avg 90, alpha 90,
alpha 0 at the corners, 255 in the centre`. Dolphin's own dump of a 64x64 IA8 texture
from this game, `%APPDATA%\Dolphin Emulator\Dump\Textures\SLSEXJ\tex1_64x64_e6053facb03e8a53_3.png`,
measures **exactly the same**: `alpha mean 91, min 0, max 255, corner 0, centre 255, rgb
mean 91`. So the texture decode is not the problem, and neither is the stage table: with
`alpha = K0.a * (1 - mask.a)` the pass *should* blacken the corners **if the quad samples
the whole mask**, which is what the host does.

Hardware's frame is a nearly uniform plate (corners 175, centre 220), which is what you
get when the same pass samples only the *middle* of the mask. The quad is fullscreen on
both (`ndc = (-1,-1)-(1,1)`), so what differs is how the vertex UV becomes a texture
coordinate - i.e. **GX texcoord generation**, which the host does not implement at all:
BP `0x30..0x3F` (`TCInfo`: `scale_minus_1`, `range_bias`, `cylindric_wrap`) plus the XF
texture matrix. Every texgen in this game is *regular* with `dualTexTrans` on and
`PostMtxInfo=0x3D` (5c.20 §4), and the host feeds the raw `uv0` straight to the sampler.
That is now the single highest-value gap: it explains a fullscreen quads' worth of wrong
texture coordinates over exactly the passes that build the final picture, and it is the
same mechanism for `range_bias` (the `uv*0.5+0.5` remap) that a 2D screen quad would need.

Implementation order for it: XF tex matrices -> `TCInfo.scale_minus_1` (a power-of-two
scale, `uv * 2^scale_minus_1` before the matrix) -> `range_bias` -> post matrix. Compare
against Dolphin's `VertexShaderGen.cpp` (`WriteTexCoord` / `TCInfo` handling), which is
the same reference the earlier sessions used for the corner-texel rule.

#### 8. Where the session left the tree

* `TLS_EFB_COPY_FMT` is now the **default** (all destination formats' real layouts,
  size derived from pitch and bytes-per-pixel).
* New default baseline, MENU present 1448 with **no** `TLS_*` flags: mean
  `(102,188,205)` (was `(124,235,255)`).
* `TLS_EFB_ALPHA=1` (opt-in): guest clear alpha, alpha *replace* when the guest's blend
  is off, guest CMODE0 factors for alpha when it is on. Measured effect on the two
  screens available: the framebuffer alpha stops being pinned at 255 (231/209/195...)
  but the final picture is unchanged, so it is not promoted.
* `TLS_BATCH_PROBE` now prints `a=` (framebuffer alpha average); `TLS_EFB_CHAIN` prints
  `srca=`/`dstalpha=` and decodes destinations with the writer's own layout.
* Tools: `tools/cmp_ref.py <host.ppm|png> <ref.png ...>` prints mean, p10/50/75/90/99
  and a 4x6 grid of block means - the same shape the handover quotes - so a host frame
  and a reference frame can be compared without a framing argument. Use the bundled
  Python (`C:\Users\hypha\.dsh\dsh-runtimes\dsh-primary-runtime\dependencies\python\python.exe`),
  the system one has no Pillow.

#### 7b. REFUTED within the same session: the vignette is *not* the texcoord scale

I added `gx_pipeline_get_tc_info()` (BP 0x30..0x3F, `TCInfo`) and printed it per batch. Every
batch of the title screen reports `tc0 = 0x0001003F`, `tc1 = 0x0001007F`, i.e.
`scale_minus_1 = 63/127` with **`range_bias` set** - which looked like exactly the UV
remap needed to sample only the middle of a mask.

It is not. Dolphin's `VideoCommon/VertexShaderGen.cpp` (fetched, not guessed) applies, per
texgen: the raw attribute -> `coord.z = 1` for AB11 -> optional per-vertex tex-matrix
index -> the **XF tex matrix** -> **`normalize`** if requested -> the **post-transform
matrix** (`POSTTRANSFORMMATRICES[postmtx_index..+2]`) -> a `q == 0` special case. There is
**no `TCInfo` term anywhere in it**, and Dolphin still reproduces the reference frame - so
ignoring BP 0x30..0x3F is correct and cannot explain the vignette. The probe stays (it is
cheap and the register values are now on record), but the conclusion is "not this".

What Dolphin *does* apply and the host does **not** is the second half of that list:
`dualTexTrans` is ON for these batches with `PostMtxInfo = 0x3D`, and the host feeds the
raw uv straight to the sampler. That - the post-transform matrix at index 0x3D, and the
tex matrix - is the remaining texcoord candidate, and it applies to *every* 3D and 2D
batch, not just this one.

So the title screen's vignette question is still open, with these facts pinned down:
mask texture decoded correctly (matches Dolphin's own 64x64 IA8 dump exactly), stage
table read correctly (K0 = opaque black), and the pass is a fullscreen `SRCALPHA/
INVSRCALPHA` quad whose alpha is `K0.a * (1 - mask.a)`. Next: apply the XF tex + post
matrix to the sampler UV and see whether the mask lands over a smaller part of the
screen; if it does not, dump `POSTTRANSFORMMATRICES[0x3D..0x3F]` and check whether it is
identity for this batch (`TLS_XF_PROBE` already prints the whole XF file).

#### 9. Mission items measured this session that did not need a run

* **The white blob is a particle pass and its *size* is about right** - what is wrong is
  that it is fully saturated. `TLS_BATCH_PROBE` on the dialog screen: the batch with
  `tex=0x90D175E0` (18 vertices, `s=4 d=1`) is the only one that takes `max` from 665 to
  **765** (pure white) and adds 4-6 "bright" samples of the 3600-grid, i.e. ~0.2 % of the
  frame - the same order as the reference's lamp flare (~0.1-0.3 %). It is not the
  composite chain and it is not oversized; it saturates because it is an additive pass
  whose source alpha is 1.0 (see §1), which is the same defect as the chain.
* **The stall loop is a structure walk, not a flag spin** (§3): `0x8022A204` is the body
  of a max-tracking traversal of a linked structure inside `fn_8022A054`
  (`src/game_res_texture.c`, 0x5C4 bytes - the game's resource allocator), retried while
  it returns 0 from `fn_8022ADD4+0x270`. 100 % of samples at one address therefore means
  the walk does not terminate. The next instrument to add is a *visited-node* ring in the
  generated chunk loop (the only place that can see the node addresses), not another
  sample histogram.
* **The host's save-data dialog is what blocks Chapter 1**, not the renderer: removing
  the fabricated save file changes nothing (byte-identical frame), so the guest's
  "corrupt" verdict comes from the NAND/ISFS layer's answers, not the file.

#### 10. End-of-session state (reproducible)

```
git: 4 commits this session, tree clean, `python tools/recomp_harness.py build-runner`
     links in ~0.9 s.
default (no TLS_* flags), input 600-612:A,900-912:A,1200-1212:A, present 1448:
     mean (102,188,205), p10 69, p50 203, p90 203  -- measured on three separate runs,
     byte-identical. This is the *re-baselined* default after promoting TLS_EFB_COPY_FMT;
     it replaces the (124,235,255) that 5c.22 recorded.
new/changed flags: TLS_EFB_COPY_FMT (now default-on; =0 restores), TLS_EFB_ALPHA (opt-in),
     TLS_SAVE_PRECREATE (opt-in, restores the fabricated save file).
new tool: tools/cmp_ref.py <image> [more images] - mean, p10/50/75/90/99/99.7 and a 4x6
     grid of block means for a host PPM or a reference PNG.
```

Two traps worth restating, because they cost runs this session:

1. **The frame at a given present index is not your frame.** The host's picture at 1448 on
   the three-A input plan is the save-data dialog; run3's `framedump_1448` is the title
   plate; run2's `framedump_1440` is the dark cave MENU. Check *which screen* is being
   compared (render it) before comparing numbers, and remember run-to-run the MENU's
   particle/animation phase differs (batch counts 60..67 across runs), so per-batch
   indices are only meaningful within one run.
2. **Read the probes' field order from the code, not from the label.** The K-register
   line printed `(r, a, b, g)` and an opaque black K0 read as "green"; that single
   misreading sent me looking for the wrong thing for a whole run.

### 5c.24 The save-data verdict, traced end to end - and the two things it is *not*

**State at the start of this session:** `423f2cc` (one doc commit after it), tree clean,
build green. Default path at present 1448 re-verified first thing: mean `(102,188,205)`,
p10 69, p50 203 - identical to the number 5c.23 left, so the baseline is intact.

#### 0. The write denial this time was a *missing integrity label*, not the DACL

`python tools/recomp_harness.py build-runner` died on

```
PermissionError: [Errno 13] Permission denied: 'build\recomp\objects.rsp'
```

while *editing* `recomp/replacements.c` worked and *creating* new files in the same
directory worked. The tell is the integrity label, not the ACL:

```
build\recomp\objects.rsp        (no "Mandatory Label" line at all)   -> Medium
build\recomp\_wtest.txt         Mandatory Label\Low Mandatory Level  -> Low
build\recomp                    Mandatory Label\Low ...(OI)(CI)(NW)  -> children inherit Low
```

The session token is Low; an object with no label is Medium, so a Low process cannot
write it however the DACL reads. Exactly two pre-existing files in `build/` were
unlabelled (`objects.rsp`, `gx_shaders_d3d11.inl`); every other artifact was created by a
Low session and carries the Low label. `icacls <file> /setintegritylevel L` from the
confined token fails with `Access is denied` (it needs WRITE_OWNER, which the inherited
`Authenticated Users:(M)` ACE does not include) - so this is the one repair that has to
come from outside the sandbox, or from a session whose file policy is full access. With
the policy at full access both files were writable again and the build relinked in 0.9 s.

#### 1. The whole save-data check, from the disassembly

The title's mode 5 handler is `0x80534C28..0x80534D04` (inside `NewTitleTask::Update`,
`0x80534074`). Decoded:

```
NewTitleTask mode 5:
  if (fn_800A4228(g_mgr, &state) != 0) return;              // 0x800A4228: 8-instruction
                                                            //   "read two words, one out" fn
  if (state != 0) goto D04 -> (state==5||state==14) ? SetMode(6) : SetMode(9);
  ok = fn_800A472C(g_mgr, &len, &err);                      // == NANDGetLength
  if (ok) {
      fn_803B854C(&hdr, &expect);                           // expected length
      if (len == expect) SetMode(9);                        // 0x80534CF4
      else               SetMode(6);                        // 0x80534CD0  <- the dialog
  } else {
      SetMode(6);                                           // 0x80534C84
  }
```

and the pieces:

* `fn_800A472C` = `*out_err=0; if (NANDGetLength(mgr+0x234, out_len)==0) return 1;
  *out_err = nandErrorToMsg(err); return 0;`  (`mgr+0x234` is the `NANDFileInfo`).
* `fn_8061EF90` = `NANDGetLength(info, u32* len)`: `err = fn_8061B860(*(u32*)info, stats8)`,
  `*len = stats8[0]`, then `nandConvertErrorCode(err)`.  **It reads the *fd* out of the
  info struct**, so a file that was never opened is queried as fd 0.
* `fn_8061B860` = ISFS get-file-stats: `IOS_Ioctl(fd, cmd=11, NULL, 0, out, 8)`.
* `fn_803B854C` = "what length do we expect": when no save image is loaded it falls through
  to `*out = 0x00159580`  = **1 414 528 bytes**.  (The `1 348 992` that the old fabricated
  save file used is a number a *fabricated stub* produced - it could never match.)

So the dialog appears because the guest asked the HLE how long the save file is, the HLE
answered "0", and 0 != 1 414 528.

#### 2. Two fabricated stubs removed (they were answering for the guest)

`replacements.c` had replaced the NAND open and the NAND status with invented successes:

```
case 0x80620220 / 0x80620250:   *(u32*)gpr[6] = 0; enqueue(gpr[8], result 0); return 0;
case 0x80620BD0:                *(u32*)gpr[4] = 1346432; *(u32*)(gpr[4]+4) = 0; success;
```

`0x80620220`/`0x80620250` is **NANDPrivateOpen** (10 args; its body resolves the path and
calls `ISFS_OpenAsync` -> our `IOS_OpenAsync`, i.e. it is SDK code the HLE already answers
honestly one layer down - it was telling the save loader "opened successfully" when nothing
had been opened). `0x80620BD0` is **NANDGetStatus**, which builds a command block and
issues an ISFS ioctl. Both now run the guest's own code (`return 0` in the dispatcher).

Measured after the change: **the frame at 1448 is byte-identical** (mean `(102,188,205)`,
same p10/p50/p90) to before. So neither stub is what produces the dialog. They stay
removed because they were fabricating state, not because they changed the picture.

#### 3. The reference frame this has been compared against is a *different state*

`run2/framedump_1440` (== `docs/evidence/27-dolphin-menu-frame1440.png`) is the MENU with
the **NEW GAME** item highlighted, i.e. the third A press *selected* an item and nothing
more. The host, on the same three presses, is one step further: its menu became interactive
at frame 962 (`1 -> 2` at 901, `2 -> 3` at 961, `3 -> 4` at 962 - modes 2 and 3 take one
frame each), so the press at 1200 *executed* NEW GAME and the save check ran at 1201.

Host mode timeline on `600-612:A,900-912:A,1200-1212:A`:

```
1 -> 2  frame 901      4 -> 5  frame 1201   (NEW GAME confirmed)
2 -> 3  frame 961      5 -> 6  frame 1202   (save check -> dialog)
3 -> 4  frame 962
```

So a frame-indexed comparison at 1440/1448 is comparing "menu" against "save prompt".
The dialog itself is an ordinary confirm: default selection is **No**, and pressing A at
1460 takes mode `6 -> 4` (`SetMode(4)`, lr=0x80534E10) and creates nothing.

#### 4. What the XF texcoord pipeline actually is for the title - measured, and it is identity

`TLS_XF_PROBE=900` on the title-only plan (`600-612:A`):

```
numChan=1 numTexGens=2 dualTex=1
texgen0 info=0x00000280   -> texgentype=0 (Regular), sourcerow=5 (Tex0), inputform=0 (AB11),
                             projection=0 (ST)
texgen1 info=0x00000300   -> Regular / Tex1 / AB11 / ST
texmtx[0]  = identity              (CP Tex0MtxIdx = 60 -> XF pos matrix for that index)
postmtx[61] (normalize=0) = identity
```

So for the title frame, Dolphin's pipeline has nothing to do: regular Tex0 texgen with an
identity tex matrix and an identity post matrix means the sampler coordinate **is** the raw
uv. Implementing `TEXMATRICES`/`POSTTRANSFORMMATRICES` would not move a single texel of the
title screen. (It may still matter for scene geometry; that is a separate measurement.)

#### 5. Then why are the corners black? The vignette pass, measured

Batch 18 of the title frame is the fullscreen vignette pass (`6` vertices, NDC
`(-1,-1)..(1,1)`, `blend=1 s=4 d=5` = SRCALPHA/INVSRCALPHA):

```
map0 = 0x9051E1A0  64x64 IA8 (fmt 3)  avg 90, alpha 90   <- the mask
map1 = 0x9038D1C0  80x56               avg white
stage1 alpha: konst K0.a * (1 - tex.a)          (K0.a = 1.0; raw ra=0x8FF000 -> a field 0xFF)
stage1 rgb  : prev.rgb * K0.rgb  = black
```

Dolphin's own dump of that mask
(`Dump\Textures\SLSEXJ\tex1_64x64_e6053facb03e8a53_3.png`) measures alpha **255 at the
centre, 0 at the corners** (row 32, every 4th texel: `2 26 80 152 215 246 254 255 255 255
253 242 205 136 66 18`). With the coordinate equal to the raw uv, `1 - mask.a` is 1 at the
screen corners, so the pass paints the corners black - which is exactly what the host does
(corner 0, centre 255, mean 90). The reference is mean 205 with corners 174-176 and centre
218-220, i.e. an effective alpha of ~0.3 at the corners and ~0.15 at the centre: a *weak*
vignette, not a full black-out.

Since the coordinate is provably the raw uv (identity matrices), the remaining candidates
are (a) `K0.a` for this stage, (b) the pass writing EFB alpha that a later composite uses
(5c.23 §1), or (c) this batch not being what produces hardware's plate at all. The texcoord
is now *excluded by measurement*, which is the useful part.

#### 6. Reference corpus: `dolphin-ref/` is gone, and `Dump\Frames` is a different run

* `dolphin-ref/run2`, `run3` **do not exist in the workspace** any more. The only run2
  frames left are the ones in `docs/evidence/` (27/27b/29/30/31).
* `%APPDATA%\Dolphin Emulator\Dump\Frames` has 2007 frames, but they are **not** run2:
  frame 900/1000 there are the bright title plate (mean 209/208) like run2, while frame 1440
  is `LOADING...` on black, not the MENU. Do not frame-index against that directory.
* The host's title plate is the *right* picture, 100x too dark: measured on the title-only
  plan, host mean 90 / corner 0 / centre 255 vs reference mean 205 / corner 175 / centre 219.

#### 7. New tool: `tools/dol_xref.py`

`dis <addr> [count]` - plain PPC listing (enough to read control flow and constants) for any
guest address; `strings <substr>` / `addr <0x...>` - find the data address of a string and
the code sites that materialise it via `lis`+`addi`/`ori`/`lwz`. This is what turned
`"The save data cannot be used..."` into `0x8074BC68` and then into a message table, and it
is why the mode-5 chain above is quoted from the binary rather than guessed.

#### 8. New instruments/flags this session

* `TLS_NAND_PROBE=1` - one line per NAND/ISFS/IOS-file request and answer (open path + fd,
  `IOS_Ioctl` fd+cmd+lengths+first out word, read fd+len+actual, `NANDPrivateOpen` args,
  `NANDGetLength` info+fd, `NANDGetStatus` args). Count-capped at 200 lines, inert by
  default.
* `IOS_Read`/`IOS_ReadAsync` now return the bytes **actually read** instead of always `len`.
  Claiming `len` fabricated data past EOF; no picture change measured, but it was lying.
* `IOS_Ioctl`/`IOS_IoctlAsync` now answer ISFS command 11 (file stats) with
  `{length, offset}` of the backing file instead of success-with-the-buffer-untouched.
* `TLS_SAVE_PRECREATE=1` now fabricates a **1 414 528**-byte file (the guest's own expected
  size, `0x159580`), not 1 348 992.

#### 9. The dialog is not a wall: answering it advances the game (measured)

The dialog's default selection is **No**. `TLS_INPUT_SCRIPT` = `600-612:A,900-912:A,
1200-1212:A,1440-1452:UP,1500-1512:A` (move to Yes, press A) drives

```
6 -> 7 -> 8 -> 9 -> 11 -> 12 -> 16 -> 17 -> 18 -> 19 -> 20 -> 22 -> 25
frames 1501, 1501, .., 1632, 1635, 1636, 1637, 1638, 1639
```

i.e. the save-data *creation* path runs to completion as far as the title is concerned,
and then the title task sits in mode 25 forever (frame 3204 telemetry: `GameLoadTask`
still active, `Sequence: 'UnknownSeq'`, streaming queue idle - no handover).

What the frame shows during that stretch (TLS_TEV=1 TLS_DEFER_EFB_COPY=1):

* 1550: the **MENU plate renders** - the gold "MENU" letters on the left - but a huge white
  radial bloom washes out everything right of them (the known additive-chain defect, 5c.23
  §1/§8: the passes run at `src.a = 1`).
* 1700/2000: black.
* 2400/2800: the **cave geometry** (the title's 3D backdrop) with heavy striping.
* 3200: white.

So "there is no MENU" is not accurate: the menu mode and its plate are reached, and the
bloom is what hides them. The title *does* need the save data created to move on, and it
tries to create it through the ISFS host-file calls this HLE still swallows.

#### 10. The ISFS command map, measured from the guest wrappers

The save path's file operations go through the *path*-based ISFS calls, which are ioctl/
ioctlv on `/dev/fs` (`__fsFd`, opened at boot as fd 3). Extracted from the guest's own
wrappers (`0x8061A880..0x8061B5D0`) plus the `TLS_NAND_PROBE` trace of a real run:

| cmd | call | in | out | operation |
|----|------|----|-----|-----------|
| 4  | `IOS_Ioctlv` / `IoctlvAsync` | vec0 = 64-byte path buffer | vec1 = 4 bytes | **CreateFile** (wrapper 0x8061AA80; result copied to the caller) |
| 6  | `IOS_Ioctl` / `IoctlAsync` | 64-byte path | 76 bytes: `[0]`=u32 ownerID, `[4]`=u16 groupID, `[70..73]`=4 byte fields (attr/…, read by 0x8061AD30) | **GetAttr** |
| 8  | `IOS_Ioctl` / `IoctlAsync` | 64-byte path | 128 bytes | **Delete** (wrapper 0x8061B180) |
| 11 | `IOS_Ioctl` on an open fd | none | 8 bytes `{u32 length; u32 offset}` | **get-file-stats** (what NANDGetLength reads) |
| 12 | `IOS_IoctlvAsync` | 64-byte path | 2 out vectors | unknown op, wrapper 0x8061B3A0, called from the NAND layer (0x80622260) and retried ~10x while mode 25 waits |

The vector convention: each `IOSIoVector` is `{void* data; u32 size;}` at `vecs + 8*i`, the
first `num_in` are inputs, the rest are outputs; the guest copies the `num_in`-th vector's
first word back as the operation's result (`*out = *(u32*)vecs[num_in].data`).

**Next session's clean target:** implement commands 4, 6, 8 and 12 against the host file
that `IOS_Open`'s HLE already tracks (`s_ios_files[]`, path-keyed), then re-run the
`UP`+`A` plan above and watch for a mode-25 exit / a `SequenceManager` handover instead of
untouched buffers. Do not fabricate the answers: the game compares `GetAttr`'s size and the
written file's own header, so a wrong length loops back into the same dialog (measured:
pre-creating a correctly-sized 1 414 528-byte zero file still gives mode 6, because the
length is compared against the length the save image *declares*, not a constant).

#### 11. Correction to 5c.24 §4/§5

§4's conclusion stands (the title's texgen is Tex0/AB11 with identity tex and post
matrices, so the XF texcoord pipeline cannot change the title frame). §5's suspicion that
the effective `K0.a` is what makes the corners black is still open - but note the batch's
stage decode is `st0` sampling **map1** and `st1` sampling **map0** (the mask), and the
`[tex] mapN` probe lines are indexed by BP texmap while the batch header line's `tex=`/
`tex1=` fields come from `batch->tex`/`tex1`, which are in the opposite order. Read the
code, not the labels (again).

#### 12. `TLS_ISFS_SERVICE=1` (opt-in, default OFF): a partial /dev/fs model, and both measurements

Added `tls_isfs_ioctlv_service()` in `replacements.c`: for an `IOSIoctlv`/
`IOSIoctlvAsync` on `/dev/fs` it writes the operation's result word into the first
output vector (the SDK wrapper *always* reads it back from there - leaving it
untouched hands the guest `iosAllocAligned` scratch content), honours
`cmd 4` CreateFile by creating a real host file under `savedata/`, `cmd 8`
Delete by removing it, and `cmd 6` by zeroing its 76-byte reply. Unmodelled
commands (12) only get the result word.

Measured effect on the `UP`+`A` plan, everything else equal:

| result word | mode trace |
|---|---|
| untouched (previous behaviour) | `6->7->8->9->11->12->16->17->18->19->20->22->25` (frames 1501..1639), then stalls in 25 |
| `0` = ISFS_OK (`TLS_ISFS_SERVICE=1`) | `6->7->8->9->11` (frames 1501..1584), then stalls in 11 |

So the earlier "progress" was the guest consuming garbage as its ISFS result, and it
happens to walk further. **Neither is correct**: commands 4/6/8/12 need real models
(path -> host file, 76-byte GetAttr layout, and whatever 12 is - the NAND layer at
0x80622260 retries it ~10x). The service stays opt-in so the default path is
bit-identical to the baseline: re-measured after all of this session's changes,
default (no TLS_* flags) 3-A plan at present 1448 is mean `(102,188,205)`, p10 69,
p50 203, p90 203 - unchanged.

Both traces are reproducible:
```
# A: dialog -> Yes, unmodelled result word
TLS_INPUT_SCRIPT='600-612:A,900-912:A,1200-1212:A,1440-1452:UP,1500-1512:A' \
TLS_TEV=1 TLS_DEFER_EFB_COPY=1 TLS_NAND_PROBE=1  tls_runner.exe --frames 2804
# B: same with TLS_ISFS_SERVICE=1
```

#### 13. Where the save-create flow actually stops (measured, three runs)

* **Mode 11 is input-gated.** With `UP`+`A` at 1440/1500 only, the trace stops at
  `9 -> 11` (frame 1584) and stays. Adding A presses at 1600/1700/1800 advances
  `11 -> 12 -> 16 -> 17 -> 18 -> 19 -> 20 -> 22 -> 25` (frames 1601..1639). So mode 11 is a
  prompt waiting for a button, not a hang.
* **Mode 25 is not input-gated and not blocked on a thread.** With A presses every 100
  frames through frame 2400 the trace is identical (mode 25 from 1639, still 25 at 3004).
  `TLS_SLEEP_TAIL=1` shows the only sleeps after that point are the ordinary VI-retrace
  waits (`thread=0x807CB658 queue=0x807C6F60 lr=0x80071D08`, one per frame 2372..2400+).
  So the title task is looping normally, drawing the cave backdrop, with its load/game
  handoff never signalled - a logic dead end in the title's own state machine, not a
  missing wakeup and not an ISFS answer.
* `TLS_ISFS_SERVICE=1` does not change this (section 12): both settings reach the same
  place, one via mode 11 directly sampled and one via 25.

Consequence for the next session: the "save-data verdict" thread is *finished* as a
diagnosis - the dialog is the game's ordinary first-boot confirm, answering Yes runs the
whole create path, and the remaining stop is the title's post-create handoff (mode 25).
Instrument **mode 25's handler** (find who reads `task+0x2AC == 25` and what it waits for)
rather than the NAND layer.

---

### 5c.25 Mode 25 is not a dead end: it hands over to `'Game'`, the title ends, and the run reaches Chapter 1

**State at the start of this session:** `80a10a8`, tree clean, build green. The work order
was item 1, "instrument the mode-25 handler". That was done, and the handler turns out to
*complete*: the title leaves mode 25, the sequence manager is asked for `'Game'`, the title
task is unregistered, `GameLoadTask` runs, and the game plays its Chapter 1 opening. The
"logic dead end" in 5c.24 §13 is **not reproducible** - see §7 for the three runs.

#### 0. Two corrections to the reproduction recipe (these cost the session its first hour)

* **A headless run renders nothing and can never produce a screenshot.** `--headless` clears
  `enable_window`, and `init_display_window()` is the only caller of `gfx_backend_init()`
  (`host_runner.c:1163`), so in headless mode there is no device, `d3d11_present()` is never
  called, and `TLS_SHOT_FRAMES` / `TLS_DUMP_EVERY` silently do nothing. Every frame number in
  this handover was measured from a **`--window`** run.
* **The invariant frame is the 3-A plan, not an idle boot.** `mean (102,188,205) p10 69 p50
  203 p90 203 p99 206` at present 1448 is the *save-data dialog* (p50 203 is its flat plate).
  Reproduced byte-for-byte this session with

```
TLS_INPUT_SCRIPT='600-612:A,900-912:A,1200-1212:A' TLS_SHOT_FRAMES=1448 \
  tls_runner.exe --window --frames 1452
```

  An idle boot at the same frame is `mean (2,2,2)` (the cave backdrop before the logo pass),
  so "I measured 1448 and it did not match" does not mean the tree regressed - it means the
  input plan was missing.

#### 1. The handler, from the jump table

`NewTitleTask::Update` dispatches on `task+0x2AC` through the table at `0x807939B8`. The
entries are

```
0 -> 80535D34 (tail)   5 -> 80534C28 (save check, 5c.24 §1)   11 -> 805351F0
1 -> 80534264          6 -> 80534D48                          12 -> 8053538C
2 -> 805343E0          7 -> 80534E9C                          13 -> 80535D34 (tail)
3 -> 80534A8C          8 -> 80534F20                          14 -> 80535494
4 -> 80534AEC          9 -> 80534FCC                          16..22 -> 805355C4..805358F4
                       10 -> 805350E0                         23 -> 80535990, 24 -> 80535A30
                                                              25 -> 80535B14   <- last mode
```

`cmpwi r0, 25` before the dispatch means 25 is the highest valid mode. Mode 25
(`0x80535B14..0x80535D34`) decoded:

```
0x80535B14  if (g[r13-23840]) g->[36] = 0;              // same global the modes 20/22/23 clear
0x80535B34  obj = *(u32*)(task + 0x2C8);                // object made by fn_8006A250 (0x805324C0)
0x80535B38  ctr = *(u32*)(obj + 76);
0x80535B3C  if (ctr < 60) return;                       // GATE A: 60 frames after entering 25
0x80535B44  if (fn_800CB538(task + 0x284) != 0) return;  // GATE B: preload handle must be idle
0x80535B54  fn_800CB480(task + 0x270); fn_800CB480(task + 0x284);   // release both handles
0x80535B64  fn_800D2338(task);
0x80535B6C  switch (*(u32*)(task + 0x2B4)) {
              case 0:  build a request block on the stack, publish it at 0x807D8458,
                       fn_80572B70(mgr, "Game");        // 0x80535D00, lr = 0x80535D04
              case 1:  fn_80572B70(mgr, "Game");
              case 2:  fn_80572B70(mgr, "Multiplayer"); // "Game"/"Multiplayer" are adjacent
              default: return;                          //   strings at 0x8075D7CA / 0x8075D7CF
            }
0x80535D34  tail: re-arm the two task handles and return
```

`fn_80572B70` is `SequenceManager::SetNextSequence`: it ignores its first argument, loads
`g[r13-26368]`, and stores `fn_800C37FC(g->[76], name)` - a name -> sequence-id lookup - into
`g->[80]`. `fn_800CB538(&slot)` is the handle predicate: `slot[0] ? ratio(slot[0][4]) : 0`,
reduced to a boolean.

#### 2. Measured: both gates open, and the handover fires at frame 1728

`TLS_MODE25_PROBE=1` (new, see §8) on the `UP`+`A` plan, one line per change:

```
frame 1639  MODE TRANSITION 22 -> 25   ctr76 = 1
frame 1698  ctr76 = 60                 <- GATE A opens; fn_800CB538 is called for the 1st time
                                       slot=0x80E9EED0 tgt=0x80E9EED0 inner=0x907C5114  -> gate B closed
frame 1728  inner = 0x00000000         <- GATE B opens
frame 1728  SetNextSequence('Game')  lr=0x80535D04   <- the mode-25 case-0 call site
```

So mode 25 needs **90 frames** in total: 60 for its own counter, then another 30 for the
preload handle at `task+0x284` to be released. Gate B's operand was non-zero for that whole
window (`inner = 0x907C5114`, and its own +108/+112 fields were 0/0) and became 0 exactly when
the pointer was cleared - i.e. the practical rule is *gate B blocks while
`*(*(slot)+4) != 0`*.

Reproduced in three runs (`--frames 2000`, `--frames 6000`, and a windowed 6000-frame run):
`SetNextSequence('Game')` at 1728, every time.

#### 3. What follows the request

```
[TLS Sequence] SetNextSequence('Game') mgr=0x809EDDA0 (lr=0x80535D04)
[TLS SequenceManager] UnregisterTask mgr=0x80BB5CC0 task=0x810FB4C0 (lr=0x800D240C)
[TLS NewTitleTask] Init! task=0x810FB4C0
[TLS CreateGameTask] Called! factory=0x80BB5CC0 mgr=0x8089925C (lr=0x80574EC4)
[TLS DVD] convert: "preload/game_start_dg.pk" -> id=31
[TLS DVD] read #168 preload/game_start_dg.pk off=0 len=6466528 -> 6466516 bytes
[TLS MSL __construct_new_array] elem_sz=440 count=1152 ; elem_sz=20 count=18432
[TLS CXDecompressFast] ENTER ... (30+ calls)
```

The title task is gone; `GameLoadTask` (`task=0x80AEDCF0 up=0x80570CFC`) takes over and
streams `database/cosedit/*.csv` afterwards. At frame 6000 the streaming queue is idle and
the task is still updating normally.

#### 4. Chapter 1 is reached - screenshots, not inference

Windowed run, `TLS_DUMP_EVERY_G=250`, same input plan (`docs/evidence/handover_*.png`):

| frame | picture | mean |
|---|---|---|
| 1700-1800 | black (handover + load) | (0,0,0) |
| 2251 | **"Chapter 1 / Reptids' Cave"** card over the cave plate | (178,187,187) |
| 2501 / 2751 | cave + title card fading | (156,165,166) / (135,139,141) |
| 3001 | dark cave interior | (15,14,13) |
| 3251 | cave fly-through, sky, birds, floating rock | (50,53,51) |
| 4001-5751 | cave interior, pool, sword on the rock, red effect | (52,49,44) |

Every captured frame from 4001 to 5751 hashes differently, so the cinematic is *advancing*;
the near-identical frame means are a static camera, not a frozen guest. The untouched
rendering defects are the same ones already on the list (the additive bloom washing out the
plate at 2251, and the 2D overlay band at 3251), not a new failure.

#### 4a. But it never becomes gameplay: the intro settles into a 10-second loop

Past frame ~3500 the picture stops advancing through the scene and settles into an
**animation loop with a period of 600 frames (10 s)**. Measured by sampling at 500- and
600-frame strides windowed with no further input:

```
4001 ea706980   4501 c1bf3388   5001 46265b45   5501 cdb6484f   6001 f90e93d2
6201 46265b45 (= 5001)          6501 4a8683d6   7001 ea706980 (= 4001)
5401 f90e93d2 (= 6001)          6601 f90e93d2 (= 6001)
```

600 apart always matches, 1000 apart does not, so the period is 600 and not 3000. It still
looped at frame 12000 (14+ cycles), so waiting does not end it. The task list stays at
**one game task** for all of it:

```
Active Tasks (3 registered in TaskManager 0x809ADCF0):
  [0] GameLoadTask  task=0x80AEDCF0 up=0x80570CFC +1c=(frames*0.85) +34=1
  [1] vt=0x00000000 task=0x80B8DD10 up=0x80363DBC
  [2] vt=0x00000000 task=0x80B8DD10 up=0x803646C4
Sequence: 'UnknownSeq'   Streaming Queue: idle
```

There is no player task, no scene task, no battle task - `GameLoadTask` never hands off. So
the next thread is **`GameLoadTask`'s update at `0x80570CFC`**, exactly like mode 25 was this
session's thread: find the condition it is testing and whether it ever becomes true. The
`+0x1C` counter (2580 at 3 s, 4232 at 6 s, 10232 at 12 s: ~0.85 per frame) is the only thing
visibly moving.

Neutral inputs do not break it: A every 100 frames from 1900 to 6900 and START/PLUS at
5000/6000 both leave the 600-frame loop untouched (identical hashes at 5401/6001/6601), and
**holding UP for 1000 frames (4000..5000) changes nothing either** - frames 4501/5001 come back
byte-identical to the no-input run (`c1bf3388`, `46265b45`). So this is not "gameplay waiting
for the player": no direction, no A, no START reaches a handler.

`TLS_TRACE_FROM=4000` shows what *is* running each frame: the sequence manager
(`0x80BB5CC0`), one task object `0x81127AE0` (vt `0x8078A3D0`) calling `0x80368280` - a large
scene state machine that advances a counter at `+0x5744` and dispatches on a state word at
`+0x5538` through the table at `0x8079A268` (states 0..9). So the scene loop is a *scene state
machine* sitting in one state, not a load wait: the next instrument belongs on `+0x5538` and on
what that state's handler is waiting for, the same way this session's instrument belonged on
`task+0x2AC`.

#### 4b. One of every two presented frames is a stale framebuffer (measured)

Dumping *consecutive* frames exposes a parity defect that the 500-frame stride hides. No
input past 1812, windowed, frames 4001..4103:

```
4001 (51.8,48.5,44.3) ea706980    4002 (40.0,43.9,49.3) 28089bce
4003 (51.8,48.5,44.3) a9628239    4004 (40.0,43.9,49.3) 28089bce
4051 (51.8,48.5,44.2) 2539003d    4052 (40.0,43.9,49.3) 28089bce
4101 (51.8,48.5,44.3) 4a8683d6    4102 (40.0,43.9,49.3) 28089bce
```

Odd frames animate; **every even frame is byte-identical** (`28089bce`) for thousands of
frames. Its content is a *different, older scene* (the purple crystal + creature, saved as
`docs/evidence/parity_nopress_4002.png`), i.e. whatever was last written into that buffer
before the Chapter-1 transition. With input pressed the parity swaps (odd frozen, even live)
but the frozen content is the same picture.

So the present path alternates between a live buffer and a stale one; on real hardware both
would be refreshed. `VISetNextFrameBuffer` (`g_last_vi_framebuffer`) is **never called** in
these runs (zero `[TLS VI]` lines), so the YUYV fallback always decodes the same fixed
address `0x900997E0`, while the GX path draws into the swap chain - the stale image is a
guest-memory frame whose copy stopped. `TLS_PRESENT_PROBE=1` prints the present count, guest
frame and `gx_vtx` count per present, which is the instrument to start from.

#### 4c. `[EfbCopy] destination format 0 / 1 not implemented` in the Chapter-1 chain

The Chapter-1 composite chain hits the unimplemented fallback, which writes RGBA8 at the
*wrong size* (`dst_w = pitch*8/bpp` with `bpp = 4` instead of 1):

```
[EfbCopy] destination format 1 not implemented, writing RGBA8 (dst=0x91FF73A0)
[EfbCopy] destination format 1 not implemented, writing RGBA8 (dst=0x91FFF3A0)
[EfbCopy] destination format 0 not implemented, writing RGBA8 (dst=0x92001BC0)
... (8 lines are printed, then the message is capped)
```

Per the format table in `d3d11_efb_copy_to_guest`, `1` is **R8** (the same format that is
implemented as `8`) and `0` is **R4**; the writer's dispatch only names `8` (and `4/10`,
`5/11`, `3/9`, `7`). So format 1 copies get four times the destination width they should.
Not fixed this session - there is no Chapter-1 reference frame to validate against, and the
change would move the title frame - but it is a one-line-class fix behind the existing
`TLS_EFB_COPY_FMT` flag with `efb_dst_decode_texel` already able to decode the result.

#### 4d. The title input flow has a timing race (1 run in 8)

Eight windowed runs of the same input plan produced `6 -> 7` (Yes, create) at frame 1501
seven times and `6 -> 4` (No, cancel) at frame 1282 once - with no press in the script at
1282. When it happens, every later A press cancels the re-raised dialog (`6 -> 4`), the game
never creates the save and never reaches Chapter 1, and the frames from 1300 on differ
(a full white bloom instead of the flat plate). That is the input-injection/frame-accounting
race the debugging skill warns about (the guest polls the pad several times per frame while
the script is indexed by host frame): any future "the flow changed" observation must first
rule it out by repeating the run.

#### 5. Why 5c.24 §13 concluded "dead end" - and what to distrust about it

The handler is input-independent and thread-independent, exactly as §13 says; what it is
*not* is fast. It needs 90 frames after entering mode 25, and mode 25 is only entered at 1639
because mode 11 is input-gated. A run whose last button press is at 1812 and which samples
mode 25 at frame 2400 is inside the window where the gates are *about to* open. Also, once
the handover fires the title task is unregistered, so `task+0x2AC` keeps its last value (25)
forever - reading that field after the handover looks like "still 25" even though the title
is gone. Any future statement of the form "it is still in mode N" should be paired with the
frame number and with whether the task is still registered.

#### 6. What this does *not* change

* The invariant is intact: 3-A plan at present 1448 is still
  `mean (102,188,205) p10 69 p50 203 p90 203 p99 206` after this session's changes
  (the changes are probes and capture plumbing only).
* `TLS_ISFS_SERVICE=1` still stops at mode 11 (5c.24 §12). The unmodelled ISFS commands are
  still unmodelled; the difference is that the *default* path no longer needs them to reach
  the game.
* The mode-5 dialog is still the ordinary first-boot confirm.

#### 7. Reproduce the whole chain

```
TLS_INPUT_SCRIPT='600-612:A,900-912:A,1200-1212:A,1440-1452:UP,1500-1512:A,1600-1612:A,1700-1712:A,1800-1812:A' \
TLS_MODE25_PROBE=1 TLS_DUMP_EVERY_G=500 \
  tls_runner.exe --window --frames 12000
```

(`--window` is mandatory for captures. `TLS_MODE25_PROBE` is inert without it.)

#### 8. New instruments this session

* `TLS_MODE25_PROBE=1` - mode-25 gate dump: `task+0x2C8`, `*(+76)`, the `+0x284` handle chain
  and the `+0x2B4` state word, printed on change plus every 120th update; also logs every
  `fn_800CB538` call for that handle.
* `TLS_PRESENT_PROBE=1` - present counter, guest frame, `gx_vtx` count and the `take_shot`
  decision every 100 presents (this is what proved headless never presents).
* `TLS_DUMP_EVERY_G=<n>` - capture cadence in **guest frames** (the old `TLS_DUMP_EVERY` is
  in presents; the two diverge once the game sequence starts).
* `TLS_SHOT_FRAMES` now matches a value against the present count **or** the guest frame,
  so "dump frame 1728 of the input script" means the frame the input script is indexed by.

#### 9. Work order, revised

1. **`GameLoadTask` handoff (0x80570CFC, task 0x80AEDCF0)** - the live thread. The Game
   sequence loads, shows the Chapter-1 card, plays a 600-frame looping intro and never creates
   a player/scene task. Find the condition the load task tests and whether the guest can ever
   satisfy it (it is the same shape of question that mode 25 turned out to be).
2. **The alternate-frame stale buffer** (§4b) - every second presented frame is an old guest
   framebuffer image. This is a *presentation* defect and it makes any single-frame comparison
   a coin flip; it is worth fixing before more visual work, because it corrupts measurements.
3. **EFB copy formats 0/1** (§4c) - R8/R4 destinations in the Chapter-1 composite chain.
4. **The input timing race** (§4d) - before trusting any "the flow is different now" claim.
5. **The allocator cycle** (5c.22 §3) - still untouched, still needs a visited-node ring inside
   `label_8022A204`.
6. The save/ISFS models (commands 4/6/8/12) are now *optional*, not blocking.

---

### 5c.26 The Chapter-1 scene machine is state 0 / phase 0, and exactly one predicate is closed

**State at the start of this session:** `c2788bd`, tree clean, build green, `src/` untouched. The
work order was item 1, "put the instrument on `+0x5538`", with the table decoded from the DOL
first. That was done, and it produced a single closed operand rather than a new mystery. Two
things 5c.25 asserted turn out to be wrong and are corrected here (§1 and §5).

#### 0. Two operational traps, both of which cost runs

* **The build failure is the *token*, not the DACL.** `build-runner` died with
  `PermissionError: objects.rsp` and 5c.24 §0's repair (`icacls /setintegritylevel L`) failed
  with `Access is denied` *even with the DSH file policy at full access*, because the session
  token itself was `Mandatory Label\Low Mandatory Level` and relabelling needs WRITE_OWNER the
  Low token does not have. Raising the policy re-launched the shell at **Medium** and both files
  became writable with no relabel at all. So the check is `whoami /groups | findstr "Mandatory
  Label"`, and the fix is the token the session runs under - not the file's ACL. The two
  unlabelled artifacts (`objects.rsp`, `gx_shaders_d3d11.inl`) are still unlabelled; they are
  harmless at Medium and still a trap for any future Low-token session.
* **Every Chapter-1 run must be validated before its probe output means anything.** The title
  input race (5c.25 §4d) makes roughly one run in eight die at the save dialog, and the failure
  signature is *indistinguishable* from "the new probe never fired": no `[TLS SceneSM]` lines at
  all, because the game never leaves the title. Two runs were discarded this way before the log
  was checked for `SetNextSequence('Game')`. **`tools/chain_run.ps1` exists for this**: it runs
  the chain and loops until that line appears, then hands back the log. Use it for every
  Chapter-1 measurement.
  The same race makes the **1448 invariant check itself** flaky: one run in roughly four returns
  `mean (120,234,255)` - the full white bloom of §4d - instead of `(102,188,205)`. Re-run before
  believing a mismatch.

#### 1. The outer jump table in 5c.25 is at the wrong address

5c.25 records it as `0x8079A268`. The words there are float data (`0x3CADB61C`, `0x3C4A7935`,
...) and disassemble as `lis r5, 0xB61C` nonsense. The DOL actually builds the table as

```
0x80368314  lis  r4, 0x8079
0x8036831C  addi r4, r4, -23960      -> 0x8078A268
0x80368320  lwzx r4, r4, r0
0x80368324  mtlr r4
```

Decoded entries (`cmplwi r0, 9` at `0x8036830C` means states 0..9, anything else to `0x8036B420`):

| state | target | | state | target |
|---|---|---|---|---|
| 0 | `0x8036A10C` (= `b 0x8036B420`) | | 5 | `0x80368DB8` |
| 1 | `0x8036832C` | | 6 | `0x803690EC` |
| 2 | `0x8036881C` | | 7 | `0x8036919C` |
| 3 | `0x80368864` | | 8 | `0x803691EC` |
| 4 | `0x80368B94` | | 9 | `0x80369454` |

**State 0 never goes through the table.** `0x803682F0 cmpwi r5, 0` / `0x80368304 beq 0x8036A110`
takes it directly, so its real body starts at `0x8036A110` and `table[0]` is a dead stub. That
matters because it is why "instrumenting the handler entries" alone sees nothing while the game
sits in state 0.

#### 2. There is a *second* jump table, and it is the one that drives the Chapter-1 intro

State 0's own common tail dispatches on `+0x54E4`, not `+0x5538`:

```
0x8036A444  lwz r0, 21732(r28)              ; +0x54E4
0x8036A448  cmplwi r0, 0x000E               ; 0..14
0x8036A450  lis r3, 0x8079
0x8036A458  addi r3, r3, -24020             -> 0x8078A22C
0x8036A45C  lwzx; mtlr; blr
```

| phase | target | | phase | target |
|---|---|---|---|---|
| 0 | `0x8036A554` | | 7 | `0x8036A940` |
| 1 | `0x8036A468` | | 8 | `0x8036AAB8` |
| 2,3,4 | `0x8036B198` (tail) | | 9 | `0x8036B01C` |
| 5 | `0x8036A484` | | 10,11 | `0x8036B058` |
| 6 | `0x8036A8E8` | | 12 | `0x8036B110` |
| | | | 13 | `0x8036B134` |
| | | | 14 | `0x8036AA44` |

Phase 1 (`0x8036A468`) is the bridge out: it clears `+0x54F0`, and **`GameTask::Init`
(`0x8036F5D8`) sets the outer state to `*(task+0x54F0) + 1`**. So "outer state 0 -> playable" is
reached through *phase 1 re-initialising the task*, not by a direct store to `+0x5538`. A
whole-DOL scan for `stw ..., 21816(rX)` finds ten writers, all inside states 1..9, plus Init -
none inside state 0. That is consistent, and it means looking for a missing `+0x5538` store is
looking in the wrong place.

#### 3. Measured on a validated 4200-frame run

```
f=2115  GameTask::Update first entered, obj=0x81127AE0, outer state=0, phase=0, +0x54F0=2
f=2118  PHASE 0 -> 8                          <- the Chapter-1 intro starts
f=3369  g2+0xD8C (g2 = *(r13-25136) = 0x81103720) flips 0 -> 1
f=3369  PHASE 8 -> 0                          <- the intro ends and hands back to phase 0
f=3369+ the gate is evaluated on every GameTask::Update (every 2nd frame) and
        the predicate is 0x00000000 every single time (41 samples, 3369..3607)
```

The outer state stays **0** for the whole run; at frame 5964 the counter is 1919 and the state is
still 0. `GameTask::Update` runs once per *two* frames in this stretch, which is also why the
counter advances 0.5 per frame.

#### 4. The gate, and which operand is closed

```
0x8036A554  g2 = *(r13 - 25136)
0x8036A558  if (g2->[3468] != 1)              goto 0x8036A5C8   ; skips the whole success path
0x8036A564  if (fn_801231D0(*(r13-26136) + 0x48C, 0) == 0) goto 0x8036A5C8
0x8036A5BC  fn_803E4478(g2);  -> tail
```

* `g2->[3468]` **is 1** from frame 3369 onwards. This half of the gate is satisfied.
* `fn_801231D0(singleton+0x48C, 0)` **returns 0 forever**. This is the one closed operand.
* `fn_803E4478` is **never called** in any run - the success path is never entered.
* **`addi r4, r0, 0` at `0x8036A568` is `li r4, 0`, not a register copy.** The command argument
  is **0**, not 1. Reading it as 1 sends the next reader to the wrong arm of the dispatcher below
  (and did, this session, until the call was instrumented).
* `fn_801231D0` is a 44-command dispatcher: `addi r0, r30, -4; cmplwi r0, 0x2B` with the table
  at `0x8078A300`, so args 4..47 dispatch and everything else (including 0) falls to
  `0x801237A0`, which is `fn_80121F08(fn_80122C70(obj, 0), 1)`.
* The queried sub-object `*(r13-26136) + 0x48C` = **`0x80C9720C`** is almost entirely zero:
  words 0..2 = 0, word 3 = `0xBFE17944`, word 4 = `0xFFFFFFFF`, the rest 0. It is not a table,
  so `fn_80122C70` is not doing a lookup that could fail - it is deriving something from a
  near-empty struct.
* **The predicate is a bit test on the pad trigger word, and the index is `4`.**
  **(5c.27 §1 corrects the "event flag" reading: `code 4` maps through `tableB[4] = 11`, and bit 11
  of the trigger word is **A** - the gate is "A was pressed this frame", not an event flag.)**
  Followed to the leaf:
  `fn_801231D0(obj, 0)` -> `fn_80122C70(obj, 0)` (reads the byte at `obj+20+cmd`; it is 0, so it
  falls through to the 54-entry table at `0x8078A228`) -> `fn_80121F08(code, 1)`, whose tail
  (0x80121FA4..0x80121FBC) is `return fn_800A555C(*(r13-26448), 0, code) & 1`. Measured at
  `0x80121FB4` on a validated run: **`code = 4`, `set? = 0`**, on every sample from frame 3380 on.
  So the Chapter-1 blocker in one sentence: *the scene is waiting for event flag 4, and nothing
  sets it.* (The earlier branches of `fn_80121F08` also test `gC->[0x54E4]`, `gD->[2672]` and
  `gB->[72]` - the same phase word of another object - but on this run they do not short-circuit;
  the answer comes from the flag query.)
* The two singletons for the next session: `*(r13-26136)` is a **0x1144-byte** object created
  lazily by the getter at `0x80185AD4` (ctor `0x80185B2C`, allocation `0x80185B08`, only caller
  `0x8047AA24` inside an engine startup chain, and the filename pool next to the allocation tag
  at `0x807482A8` reads `07.efp`); `*(r13-25136)` is a **0x28B0-byte** object (getter
  `0x803CE930`, allocation `0x803CE950`, ctor `0x803CE980`). Neither has a vtable - both are
  plain data.
* Not a timeout: state 0 also tests `ctr >= 0x5460` (21600 entries), which at 0.5 entries per
  frame is ~43200 frames. That is a safety net, not the intended path.
* **Instrumentation caveat learned the hard way**: `dolrecomp_dispatch_replacement` is only
  reached at *call* boundaries (a `bl`/`blr` return or a cross-chunk pc). A mid-function label
  reached by a direct branch or fall-through is **never** dispatched, so adding a `case` for it
  silently does nothing. That is why `0x801237AC` and `0x80121FA4` never printed while
  `0x801237B4` and `0x80121FB4` did (both are `bl` return points). Put probes on return
  addresses, on jump-table targets (reached by `blr`), or on function entries.

**So the next question is a single, specific one**: what is supposed to set **event flag 4**, and
why does it never get set? The counterpart of `fn_800A555C(*(r13-26448), 0, id)` is where to look
(same table, a "set" operation), and the intro script - phase 8, `0x8036AAB8` - is the obvious
producer. Do not satisfy the gate by writing the predicate or the flag.

#### 5. The alternate-frame staleness is **not** the YUYV fallback (correction to 5c.25 §4b)

5c.25 §4b attributes the stale even frames to "`VISetNextFrameBuffer` is never called, so the
YUYV fallback always decodes `0x900997E0`". The second half is refuted:

```
TLS_PRESENT_PROBE=1 TLS_PRESENT_WINDOW=4000,16 on a validated chain run
count=4000 gx_vtx=44313    count=4001 gx_vtx=276471
count=4002 gx_vtx=44319    count=4003 gx_vtx=275922
count=4004 gx_vtx=44868    count=4005 gx_vtx=276471   ... (even ~44.3k, odd ~276k)
```

`gx_vtx` is **never 0**, and `d3d11_present` only decodes the guest XFB in the
`gx_vtx_count == 0` branch, so that branch is never taken in the Chapter-1 loop. The stale image
is produced **by the GX path**, not by the software fallback. `VISetNextFrameBuffer` still being
absent is a separate (real) gap, but it is not what puts an old picture on screen.

What is now known, and what is not: the parity correlates with the vertex count (even ~44.3k,
odd ~276k, and the odd count is nearly constant while the even one varies), and there is exactly
one `gfx_backend_present` call per runner frame (`host_runner.c:1297`, one per loop iteration).
The next instrument is a consecutive-present dump of the drawn batch list plus which back buffer
is flipped - not the VI framebuffer.

#### 6. EFB copy destination format 1 is fixed (5c.25 §4c)

Format 1 **is R8** - the same 32-byte 4x4 tile that was already implemented as format 8. Three
sites now name it: the `bpp` switch (`case 1: bpp = 1`), the tile writer
(`format == 8 || format == 1`), and `efb_dst_decode_texel` (the chain probe decodes the
destination back, so it has to agree or the probe lies). Measured: the eight
`[EfbCopy] destination format 1 not implemented, writing RGBA8` lines in the Chapter-1 chain are
gone.

Format **0** (R4) is deliberately left on the documented fallback. R4 uses 8x8 tiles, there is
still no Chapter-1 reference to validate a nibble order against, and a wrong-but-plausible
packing is exactly the silent error this file keeps warning about. Implement it only together
with a `TLS_EFB_CHAIN` check that decodes the destination back and compares it with the copy's
own source rectangle.

#### 7. Invariant

3-A plan (`600-612:A,900-912:A,1200-1212:A`) at present 1448 is
`mean (102,188,205) p10 69 p50 203 p90 203 p99 206`, verified three times this session,
including as the last action after the EFB change. All the changes are probes or EFB-format
writes; nothing touches the title path.

#### 8. New instruments this session

* `TLS_SCENE_SM_PROBE=1` - the Chapter-1 scene machine: `+0x5538` on change (outer state),
  `+0x54E4` on change (phase), `+0x5744`/`+0x5748`/`+0x4424`, the per-handler hit counters, the
  two gate operands, and the `fn_801231D0` call/return points. One line per change plus a
  heartbeat; inert unless set.
* `TLS_PRESENT_WINDOW=<start>,<count>` - print **every** present in a window. The existing
  100-present cadence cannot show a parity defect; this can.
* `tools/chain_run.ps1` - run the chain, retry until `SetNextSequence('Game')` appears, report
  the dialog outcome. Use it instead of trusting a single run.

#### 9. What this does *not* change

* The chain still runs end to end (title -> save dialog -> Yes -> create -> mode 25 -> `'Game'`
  -> `GameLoadTask` -> Chapter-1 card -> the intro loop).
* The intro still loops with period 600 frames and still never creates a player/scene task. What
  is new is *where* it stops: outer state 0, phase 0, one closed predicate - not "some state
  machine with an unidentified condition".
* Mode 25, the save dialog, and the HLE stubs remain settled; nothing here revisits them.

#### 10. Work order, revised

1. **Press A after the gate arms** - see 5c.27. The 5c.26 reading ("waiting for event flag 4") is
   superseded: the operand is an **A-button edge**, an A press at frame 3400 opens the gate and
   moves the machine to phase 13, two steps beyond anything recorded before. 5c.27 §7 is the
   current work order.
2. **The alternate-frame parity** - now known *not* to be the YUYV fallback; it correlates with
   the vertex count and needs the batch-list/back-buffer dump of §5.
3. **EFB copy format 0 (R4)** - only with the chain-probe validation described in §6.
4. **The title input race** - still the reason one run in eight is wasted, and still capable of
   making the invariant check itself report the wrong picture.
5. The allocator cycle (5c.22 §3), and the optional save/ISFS models - both unchanged.

---

### 5c.27 Correction to 5c.26: the gate is an **A-button edge**, input DOES advance the machine, and phase 13 is where it lands

**State at the start of this session:** `9defcdc`, tree clean, build green. 5c.26 ended with "the one
closed operand is `fn_801231D0(*(r13-26136)+0x48C, 0)`, and the flag is 4". Two things in that
sentence are now corrected, and the Chapter-1 machine turns out to be two presses further along than
any previous session got - it is **not** input-proof.

#### 1. It is not an event flag. It is a bit in the pad trigger word.

`fn_801231D0(obj, cmd)` does **not** return a constant. `fn_80122C70(obj, cmd)` is a 54-entry
handler dispatcher (`cmplwi r4, 0x35`, table at **`0x8077A228`** - not `0x8078A228`, which is the
`+0x54E4` phase table, four bytes of arithmetic apart and easy to confuse). The handler's return is
a `code`, and the leaf finally resolves it as:

```
fn_80121F08(code, 1)  ->  return fn_800A555C(*(r13-26448), 0, code) & 1;
fn_800A555C(mgr, op, code):        /* note: it IGNORES its first argument */
    mgr = *(r13 - 26280)                       /* 0x800A5574 reloads r3 */
    return (*(mgr + op*4 + 0x3C28) >> bit) & 1     /* bit = tableB[code] */
tableB @ 0x807328A8 = 3,2,0,1,11,10,14,4,12,13,16,17,...
```

`mgr + 0x3C28` = `mgr + 15400` is the **pad trigger word** - the same word the title gate probe has
been reading as `realbit11(A)`. For the phase-0 gate `code = 4`, so `bit = tableB[4] = 11`, and
**bit 11 is A**. So:

> the phase-0 gate is `if (A was pressed this frame)`, not "if event flag 4 is set".

That also explains why 5c.26's 41 samples were all zero: after the intro ends at frame ~3380 the
scripted A presses had already stopped (the plan ended at 1812), so no frame in the sampled window
had an A edge.

#### 2. 5c.25 §4a is REFUTED: one A press moves the machine two steps

`5c.25 §4a` concluded "no input reaches a handler - holding UP for 1000 frames changes nothing, A
every 100 frames changes nothing". The A half is wrong. With the gate armed (`g2+0xD8C` flips at
3369/3380) and A pressed at frame 3400:

```
f=3380  PHASE 8 -> 0      (+0x54F0 = 2)
f=3400  GATE0 predicate=0x00000001 (OPEN)
f=3400  fn_803E4478(obj=0x81103720) called        (the success path, first and only time)
f=3402  PHASE 0 -> 13     and +0x54F0 goes 2 -> 0
```

and `+0x54F0 + 1` is exactly the outer state `GameTask::Init` (`0x8036F5D8`) installs - so the A
press sets up the re-initialisation into outer state 1. What §4a actually measured is that the
*picture* does not change, which is true: phase 13 then has no successor (§3). The picture is not
evidence about the state machine.

**Reproduce the furthest-yet chain** (needs A presses *after* the gate arms, not before):

```
TLS_INPUT_SCRIPT='600-612:A,900-912:A,1200-1212:A,1440-1452:UP,1500-1512:A,1600-1612:A,1700-1712:A,1800-1812:A,
                   3400-3412:A,3500-3512:A,...,5700-5712:A'
TLS_SCENE_SM_PROBE=1 tls_runner.exe --frames 5000
```

#### 3. Phase 13 (`0x8036B134`) cannot leave through the shared tail - measured

Phase 13's body reads `obj = *(task+0x56EC)` and does one of two things, otherwise nothing:

```
if ((obj->[0x38] & 2) == 2 && obj->[0x88] == 0)  fn_805BA358(*(r13-25232) + 608);
else if (obj->[0x88] == 4)                        fn_80376568(task);
```

and then falls into the **shared tail** at `0x8036B198` (the same tail phases 2, 3 and 4 use):

```
0x8036B198  if (fn_801231D0(sub, 16))  {
0x8036B1B4      if (fn_8036E170(task)) { obj[120]=18; fn_8006A900(obj);
                                         task[0x5684]=1; task[0x5688]=0; task[0x568C]=0; }
            }
```

`fn_8036E170` (`0x8036E170`) opens with a switch on the phase:

```
r0 = *(task + 0x54E4);
if (r0 == 0)  goto body;
if (r0 == 14) goto body;
if (r0 == 3)  goto body;
return 0;                       /* 0x8036E1A4 */
```

**With phase == 13 it returns 0 unconditionally**, so phase 13's tail is structurally dead. Measured
on the two frames where the cmd-16 edge actually opened:

```
f=3860  PHASE13 cmd16=1 (OPEN)
f=3860  PHASE13 fn_8036E170=0x00000000 (false)
f=4100  PHASE13 cmd16=1 (OPEN)
f=4100  PHASE13 fn_8036E170=0x00000000 (false)
```

So the only exits from phase 13 are inside its own body, through `*(task+0x56EC)`.

#### 4. cmd 16 is an edge, and it can be produced - but only once per press

The input script supports raw masks (`0xHEX`, both devices). Sweeping single bits 0..22 after the A
press that opens the phase-0 gate, exactly two masks open cmd 16, and each for exactly **one
update** although the mask is held for 12 frames:

```
raw bit 6  (window 3860..3872) -> cmd16 = 1 at f=3860, back to 0 at f=3862
raw bit 10 (window 4100..4112) -> cmd16 = 1 at f=4100, back to 0 at f=4102
```

An edge that lasts one update means a held button cannot retry: every attempt needs a fresh press.
That is a real constraint on any future input plan (and a candidate explanation for other
"pressing X does nothing" observations in this file).

#### 5. New / changed instruments

* `TLS_SCENE_SM_PROBE=1` now also prints, on change, `PHASE13 cmd16=` (the return at `0x8036B1A8`)
  and `PHASE13 fn_8036E170=` (the return at `0x8036B1B8`), and it always prints a **non-zero**
  `GATE0 predicate` so a one-frame opening cannot be missed.
* A `BTNQ cmd= code= bit=` probe exists at `0x80121FB4`, but it is **noisy**: `fn_80121F08` has many
  callers, so `last-cmd` is often stale (everything came back as the unrelated `cmd=39`). Prefer
  targeted return-point probes over "remember the last argument".
* Reminder that generalises the above: `dolrecomp_dispatch_replacement` only runs at **call
  boundaries**, so a probe on a `bl`-return address works and a probe on a mid-function branch target
  silently never fires.

#### 6. Invariant

3-A plan at present 1448 = `mean (102,188,205) p10 69 p50 203 p90 203 p99 206`, re-verified as the
last action of this session. Nothing here touches the title path.

#### 8. Where phase 13 comes from, and the three writers of `task+0x56EC`

A whole-DOL scan for `stw ..., 22252(rX)` finds exactly three writers, and one of them *is* the
phase-13 transition:

```
0x80376508  li  r0, 13
0x8037650C  stw r0, 21732(r30)      ; task+0x54E4 = 13      <- this is the 0 -> 13 transition
0x80376510  mr  r3, r30
0x80376518  lwz r5, -24096(r13); lwz r5, 72(r5)     ; the gB object's +0x48
0x80376520  bl  0x805B9F54          ; -> creates the phase-13 object
0x80376524  cmpwi r31, 167          ; an id, compared after the call
0x80376528  stw r3, 22252(r30)      ; task+0x56EC = the new object
```

The other two are the teardown at `0x80376634` (`phase = 0`, `fn_800D2338(old object)`,
`task+0x56EC = 0`) and `GameTask::Init` at `0x80365C10` (`task+0x56EC = 0`).

So phase 13 is a **scripted wait created by an engine call** (`fn_805B9F54`), not a stall in the
state machine's own logic - the machine got where it was told to go and is waiting for that object
to report completion through `+0x88`. The nearby `li r4, 319` (`0x80376540`) and the `cmpwi r31,
167` are script/message ids, which is the vocabulary to chase next (`fn_805B9F54`, `fn_805BA358`)
rather than more state-machine archaeology.

Still measured, still true: `0x81858DE0 + 0x88 == 1` at frames 3564, 3804, 4044 - it never becomes
0 or 4 in a 4200-frame run, so the wait never completes.

#### 8b. The waiter is NOT orphaned - it is ticked every frame, and it is a 4-slot resource list

This closes 5c.27's open question ("is the object ever ticked at all?"). It is:

```
case 0x805BAC18 (= vtable function-table[2]) and 0x805BB5A0 both run with this=0x81858DE0
from frame 3414 onward, every frame.
```

and its `+0x88` lifecycle is real, not frozen - measured on change:

```
f=3414  o88=0  o5b0=0
f=3416  o88=1  o5b0=0
f=3602  o88=3  o5b0=0      (0x805BB42C: `li r0,3` after fn_80244CAC)
f=3604  o88=1  o5b0=1      <- and it never changes again
```

The 1 -> 2 / 4 step at `0x805BBE70..0x805BBEC0` walks a **4-entry record array at
`this+0x474+i*76`**: it advances `this+0x5B0` while `rec[i].w0 == 0`, then

```
if (counter >= 4)             +0x88 = 4;                      /* done */
else if (rec[counter].w10 != 0) +0x88 = 2;                     /* in progress */
/* else: stay at 1 */
```

Measured values: `rec[i] = (w0,w10)` = `(1, 2455016464) (1, 0) (0,0) (0,0)`, counter stuck at 1.
So slot 1 is **occupied but its `w10` resource never arrives**, which is why `+0x88` can never
become 4 and phase 13 can never finish. The object is a resource/preload list of four slots and the
chapter-1 intro is waiting on slot 1.

**Headline for a future session: `dolrecomp_dispatch_replacement` runs at call boundaries only, so
a probe on `bl`-return addresses and on function entries works; the object here was resolvable
purely because its virtual entries are ordinary function entries.**

#### 9. Work order, revised

1. **FIXED: the "stale alternate frame" was a texture-cache hash that covered only 1/8 of a
   texture.** The renderer keeps decoded textures in `s_d3d11.tex_cache` and re-decodes only when a
   content hash changes. That hash was computed over

   ```
   approx_words = (width * height) / 8        /* 0.5 bytes per pixel, whatever the format */
   step        = approx_words / 64            /* ~64 sampled words */
   ```

   so for an **RGBA8** destination it hashed only the first **1/8** of the texture (4 bytes/texel,
   but the size estimate assumed 0.5). An EFB copy that rewrote anything past that window left the
   hash unchanged, the host kept serving the stale decoded texture, and the frame came out
   byte-identical for thousands of frames - exactly the reported symptom. The Chapter-1 composite
   half is a 320x224 RGBA8 destination, which is why it was the half that froze.

   **Fix** (`gfx_d3d11.c`, `TLS_TEX_HASH_FULL`, now ON by default; set it to `0` for the old
   behaviour): size the hash from the format's real bytes per texel (I4/CI4 0.5, I8/IA4/CI8/CMPR 1,
   IA8/RGB565/RGB5A3 2, RGBA8 4) and sample 256 words instead of 64.

   **Measured:**
   * Chapter-1 presents 4002/4004/4006 were byte-identical (`688b6a83`); they are now
     `0b19a9ef` / `d34f5bb9` / `ae02a4d9`, i.e. they advance. Odd frames still advance
     (`ff5095be` / `88d43fee` / `725a1f03`). **The staleness is gone.**
   * The 1448 invariant is **unchanged**: `mean (102,188,205) p10 69 p50 203 p90 203 p99 206`,
     verified twice with the new default. The title is unaffected because its textures are redrawn
     or genuinely static.
   * `docs/evidence/parity_even_4002_before_hashfix.png` vs `..._after_hashfix.png`: the even half
     used to be a frozen composite with a creature head; it is now the current cave frame.
2. **What the fix does NOT do: the two halves still differ.** The host still presents both halves,
   so the screen still alternates between the opaque geometry pass and the composite pass (now both
   advancing). `TLS_PRESENT_ON_XFB=1` exists for that: it flips the window only on frames where the
   guest did an XFB copy. Measured rates - **Chapter-1 `xfbs=1` on the even frames only** (4002/4004/
   4006), **title `xfbs=1` on every frame** (1444..1448) - so the flag is safe for the title and would
   drop only Chapter-1's geometry half. **It is now default ON** (5c.29): the boot was measured and
   frames 2..~300 render `batches=0` (black) with `xfbs=0`, while every content-bearing screen has
   `xfbs=1` - so nothing with content stops being shown. The 1448 invariant is a *back-buffer* capture
   and is unchanged with the gate on, so it still cannot validate the gate; the boot run and the
   per-frame profile are the evidence instead.
   Note this also **corrects 5c.27 §9 item 1**, which claimed the guest displays on odd frames: the
   authoritative per-frame counter says the **even/composite** frame is the displayed one. The old
   reading came from `chain4001.log`, whose `present=` label does not pin which frame a copy belongs
   to.

   *Supporting measurements for the two-half structure (all taken before the hash fix; the split
   itself is unchanged by it):*

   * the guest's display frame is the EVEN one, not the odd one - corrected this session with
     the per-frame probe. The authoritative counts are `xfbs=1` on 4002/4004/4006 and `xfbs=0` on
     4001/4003/4005. Round 4 read an XFB copy out of `chain4001.log` and concluded the guest displays
     on odd frames; that reading was wrong - the chain dump's `present=` label does not pin the frame
     the copy belongs to, and the per-frame counter does. So the **even (composite) frame is the one
     the guest considers finished and displays**, which is also the half the 1448-style captures and
     the frozen purple image come from;
   * the title does an XFB copy on **every** frame (`xfbs=1` at 1444..1448), so a gate on XFB copies
     leaves the title completely unaffected;
   * `d3d11_present` runs once per *emulated* frame (`host_runner.c:1297`) and
     `gx_pipeline_begin_frame` once (`:1183`), so the host manufactures a display frame for each
     half. Hardware only ever displays the finished XFB.
   Rendered both parities: `docs/evidence/parity_odd_4001.png` (cave, pool, sword, red effect) and
   `docs/evidence/parity_even_4002_frozen.png` (same cave, blue/purple, creature head in the pool).
   **Per-frame profile** (extended `TLS_PRESENT_PROBE`, new this session):

   ```
   count=4001 gx_vtx=276471 batches=76 blended=1  clears=1 clear=(0,0,0)
   count=4002 gx_vtx=44319  batches=76 blended=49 clears=1 clear=(0,0,0)
   count=4003 gx_vtx=275922 batches=76 blended=1  clears=1 clear=(0,0,0)
   count=4004 gx_vtx=44868  batches=76 blended=49 clears=1 clear=(0,0,0)
   ```

   **Both halves clear the EFB to black every frame**, so neither survives into the other - they are
   two independent renders, not an accumulate-then-composite pair. Odd = opaque geometry. Even = a
   heavily blended pass drawn over a freshly cleared black target, which is exactly why it looks
   blue/purple and why the red-lit geometry is missing from it. The guest is running a legitimate
   render-to-texture then composite cycle; hardware would display only the finished one. So the fix
   must make the host display the finished frame and skip the intermediate one - there is no way to
   "draw both halves into one buffer" without suppressing a clear the guest genuinely issues.
   **The title alternates as well, and the 1448 invariant is only one of the two halves.** Direct
   measurement of consecutive title presents (one run, `TLS_SHOT_FRAMES=1444..1448`):

   ```
   1444 (102.3,188.1,204.9) cebaa0ca      1446 (102.3,188.0,204.9) df0d0508
   1445 (201.9,188.1,105.4) 4d4a8edd      1447 (201.9,188.0,105.4) 173b5c6d
   1448 (102.3,188.0,204.9) 4a8e66f1      <- the invariant's (102,188,205)
   ```

   Blue-ish and yellow-ish images alternate, and each parity still animates (three different hashes
   within the blue parity). So the two-half defect is **not Chapter-1-specific** - the title has it
   too, and a single still would never show it. Two consequences:
   * the documented invariant `mean (102,188,205) p10 69 p50 203 p90 203 p99 206` is **one half of
     the title screen**, not the title screen. It is a regression guard, not a correctness target;
   * any present-gating fix changes *which* half lands on present 1448, so the invariant must be
     re-derived (record BOTH halves) when that change lands, not compared.
   The title's per-frame profile also explains why a *global* present gate is unsafe: the title is
   single-pass (frames 300+ show `batches` 14..23 with `blended` 6..14 in the SAME frame) while
   Chapter-1 is two-pass, so a gate must be conditional on the guest using the two-pass protocol.
   **The gate now exists**: `TLS_PRESENT_ON_XFB=1` flips the window only when
   `s_xfbs_this_frame > 0`, i.e. only on frames the guest finished. Default **OFF** - a screen with a
   long XFB-free stretch would freeze the window and the boot/strap screens are unmeasured. It also
   cannot be validated by the 1448 invariant, because that is a *back-buffer* capture and the gate
   only skips `IDXGISwapChain_Present`; the back buffer is drawn every frame either way. It has to be
   judged on the window (or by capturing the *front* buffer, which nothing does yet).
   Already **eliminated**: R8 tiling (`TLS_R8_TILE_8X4=1` - evens still identical), copy source
   (`TLS_EFB_SRC_CURRENT=1` - identical to default), snapshot placement (captured at
   `gfx_d3d11.c:2897`, *before* `Present` at 2898), vertex truncation (`1<<20` capacity), and
   EFB format 0/R4 (implemented; presents 4001-4003 hash byte-identically before and after).
   **Blocker for the fix**: gating `Present` on XFB copies would freeze the title, which emits very
   few `GXCopyDisp` events (36 in a 2400-frame run) and reaches the screen another way. Establish
   what displays the title before touching the present gate; the 1448 invariant is measured on the
   present counter and will move.

2. **EFB destination formats 0 and 1 are both implemented now.**
   * 1 = R8 (5c.26 s6): three sites - `bpp`, the tile writer, `efb_dst_decode_texel`.
   * 0 = **R4** (this session), taken as the exact inverse of this file's own `decode_gx_texture`
     `case 0` - 8x8 tiles, 32 bytes, row-major 4 bytes per row of 8 texels, **high nibble = even
     texel**:
     `tiles_x8 = (dst_w+7)/8; tile8 = (gy/8)*tiles_x8 + gx/8; byte_i = (gy%8)*4 + (gx%8)/2`.
     `bpp = 1` is correct for R4 in the existing `dst_w = pitch*8/bpp` derivation, because an
     8-wide tile makes a tile row `dst_w*4` bytes = `pitch*32`, i.e. `dst_w = pitch*8` regardless
     of bpp.
     **Measured**: `[EfbCopy] destination format 0 not implemented` is gone (0 occurrences in a
     Chapter-1 chain run) and the 1448 invariant is unchanged - the title never used format 0, so
     this cannot move it. What is validated is that the writer is the exact inverse of the decoder
     the guest samples with, and that the 4x-too-wide RGBA8 write is gone.
     **And it changes nothing in the Chapter-1 loop**: presents 4001/4002/4003 hash *byte-identically*
     before and after (`ea706980` / `688b6a83` / `a9628239`). So the R4 destinations are not on the
     loop's composite path - the eight warnings seen in earlier runs must come from the load/early
     intro, not the steady state. **Do not expect R4 to fix the parity**; recorded so the next
     session does not spend a round re-deriving it. There is still no Chapter-1 reference for what
     these destinations should *look* like.

3. **The R8 write path is tiled 4x4 but R8 is an 8x4 format.** `decode_gx_texture` has
   `case 1: // GX_TF_I8 (8x4 tiles, 32 bytes)` while `case 8` there is **CI4 (8x8)** - the texture
   numbering and the EFB-copy numbering are different spaces, and on the EFB-copy side 8/1 is R8,
   i.e. **8 texels wide x 4 tall**. Correct writer: `tile = (gy/4)*(dst_w/8) + gx/8`,
   `within = (gy%4)*8 + (gx%8)`; the current 4x4 rule touches only the low 16 bytes of each
   32-byte tile. Implemented as `TLS_R8_TILE_8X4`, default **off**, in both the writer and
   `efb_dst_decode_texel`. It stays off: no reference for a correct R8 destination, and the title's
   bloom chain uses R8, so promoting it moves the 1448 invariant.

4. **Fill `0x81858DE0` record slot 1** - still the state-machine-side blocker, and now much
   narrower. Dumped both 76-byte records in full (19 words each) at frame 3604, where the counter is
   stuck at 1:

   ```
   REC0 0x81859254: 00000001 8186DF60 8078FE50 815A8880 92549410 41800000 C194A3D7 ...
   REC1 0x818592A0: 00000001 81863F60 8078FE50 00000000 00000000 00000000 C194A3D7 ...
   ```

   Both slots have `w0 = 1` and a payload object (`w1`), and both payloads share type pointer
   `w2 = 0x8078FE50`. What slot 1 lacks is `w3`, `w4` (the resource pointer) and `w5` (`0x41800000`
   = 16.0f). So **the slot's payload object exists** - the request was issued - and it is the payload
   that never delivers a resource.
   **And the payloads are `LayoutTask`s, one of which never runs.** `0x8186DF60` (slot 0) appears in
   `[TLS LayoutTask::Draw] obj=0x8186DF60` four times; `0x81863F60` (slot 1) appears **zero times** in
   the whole log. So slot 1's LayoutTask is allocated but never drawn/updated - the same failure
   shape as "no player/scene task is ever created": an object that exists and is never registered.
   **Correction**: round 9 described `0x80476664` as "the payload's virtual". It is not - it belongs
   to the class described by the record's `w2 = 0x8078FE50` (a type descriptor), while the payload
   object's own vtable is `0x80782C08`. The per-`this` counter added on `0x80476664` therefore does
   not measure the LayoutTask and that instrument is not the one to trust here; the LayoutTask's own
   functions are `0x801F4230`, `0x801F42A8`, `0x801F43E8` and `0x801F4514` (Draw, already
   instrumented and already logging `obj`).
   Next: find how a `LayoutTask` gets registered for drawing (compare an object that works with one
   that does not - both are already identified by address) and why 0x81863F60 misses it.
   **The two payloads diffed** (20 words each, same frame):

   ```
   PAY0 0x8186DF60: 80782C08 8186DF58 58544153 4B544147 00000000 00000A93 00000000 81863F60
                    81858DE0 80B8DCC0 00000000 3E828284 00000000 00000000 00000026 ... 80782A80 00000008
   PAY1 0x81863F60: 80782C08 00000002 58544153 4B544147 00000000 00000A94 00000000 81858540
                    81858DE0 80B8DCC0 00000000 00000001 00000000 00000000 00000006 ... 80782A80 00000008
   ```

   Same vtable (`0x80782C08`), same type words `w2/w3`, and both point back at the waiter
   (`w8 = 0x81858DE0`) and at `0x80B8DCC0` (`w9`). The differences are the candidates:
   * `w1`: PAY0 = `0x8186DF58` (**a self-pointer, PAY0-8**) vs PAY1 = **`2`** - the classic
     "intrusive list node linked vs unlinked/never-initialised" shape, and the most likely reason one
     is drawn and the other is not;
   * `w5`: sequential ids `0x0A93` vs `0x0A94`;
   * `w7`: PAY0 -> `0x81863F60` (the *other* payload) vs PAY1 -> `0x81858540`;
   * `w11`: `0x3E828284` (0.2549f) vs `1`;
   * `w14`: `0x26` (38) vs `6`.
   Next: find who writes `LayoutTask+4` (the list node) and why it stays `2` for slot 1's payload.
   **Scan result: neither payload is held by any global or manager list.** One-shot memory scan at
   frame 3604 over `0x80B00000..0x80E00000` (globals) and `0x81000000..0x81A00000` (the heap these
   objects live in):

   ```
   SCAN 0x8186DF60 (slot 0) refs: 0x81858DF8 0x81859258            total=2
   SCAN 0x81863F60 (slot 1) refs: 0x818592A4 0x8186DF7C            total=2
   ```

   `0x81859258` / `0x818592A4` are the records' own `w1` fields, `0x81858DF8` is waiter`+0x18`, and
   `0x8186DF7C` is slot 0's payload `w7` - i.e. slot 0 points at slot 1. **Nothing else references
   either payload.** So the round-10 phrase "an external manager that received it and failed to link
   it" is wrong as stated: no list anywhere holds these pointers. The `+4` field is an **intrusive
   ring node** (linked = pointer to self-minus-8, unlinked = `2`), and the draw path must reach the
   payload through the record chain from the waiter, not through a global list. Search accordingly -
   do not go looking for a manager that stores `0x81863F60`.
   Class addresses for the next session: vtable `0x80782C08`; functions `0x801F4230`, `0x801F42A8`,
   `0x801F43E8`, `0x801F4514` (Draw, already instrumented).
   Scanning for a `lis 0x8078` + `addi +0x2C08` pair that materialises `0x80782C08` finds **nothing** -
   so the vtable is copied out of a data table rather than built inline, and that search route is a
   dead end.
   **The (a)/(b) caveat is now resolved in favour of (a) - by data already on hand.** The earlier
   worry was that the guest might be deliberately parking slot 1's layout, making the LayoutTask a red
   herring. But **slot 0's payload *is* linked and *is* drawn** (`+4 = 0x8186DF58`, i.e. a valid
   parent/base pointer, and `LayoutTask::Draw` runs on it every sampled frame). That proves the linking
   mechanism works normally for objects created by the same code, in the same frame, from the same
   sequential id range. So slot 1's `+4 = 2` is an **asymmetry**, not a policy - one of a matched pair
   was linked and the other was not. That is a host-side or state-machine-side bug, not the guest
   parking it.
   **Refined reading of the field**: `+4` is not a ring node pointing at itself - slot 0's value is
   `PAY0 - 8`, which reads as a **parent/owner pointer to a base at `this-8`**, not a list node.
   Slot 1's `2` is then "parent never set". That is the field to chase: find who assigns
   `LayoutTask+4` a parent and why slot 1's is unset. It will not be found by an
   `addi rX, rA, -8` + `stw rX, 4(rA)` pattern (scanned: no hits) and it is not a global list
   (scanned: no external references), so look for `stw rX, 4(rY)` where `rX` came from a call result
   or a register holding another object.
   **That "-8 is a parent pointer" reading is NOT supported** - checked what is actually at
   `payload-8`:

   ```
   PAY0 0x8186DF60  [pay-16..pay-4]: 3F7AE148 3F800000 80D7CA50 0000011B
   PAY1 0x81863F60  [pay-16..pay-4]: 8186DE28 817D1448 00000010 0000011A
   ```

   The two preceding regions are not the same kind of data (floats + a pointer + 0x11B vs two
   pointers + 0x10 + 0x11A), so `payload-8` is not a symmetric "owner subobject" for both. `w1` is
   therefore *not* a simple parent pointer and this interpretation should be dropped rather than
   built on. **Five rounds have now gone into this one object with two of my readings corrected**;
   the more productive next move is to stop analysing the object and instead find the code that
   *creates* the payloads (they carry sequential ids `0x0A93`/`0x0A94`, so one factory makes both)
   and read the parenting step there, rather than inferring it from object memory.
   **The factory is found.** Logging every allocation in the window where the payloads appear
   (`TLS_ALLOC_WINDOW`, default 3380..3430) gives:

   ```
   f=3400 ALLOC size=1480 lr=0x805B9F94   <- the waiter itself (0x5C8)
   f=3402 ALLOC size=272  lr=0x801F4040   <- the LayoutTask payloads, three in that frame
   ```

   `0x801F4040` is the return point inside the payload factory (`0x801F3FF8`): it calls the engine
   allocator `0x80084320` with **size 272, align 8**, then `bl 0x801F407C` - the constructor - with
   three arguments. **The constructor never writes `+4`.** It stores the vtable `0x80782C08` at `+0`
   (`0x801F40AC`) and initialises `+0x48`, `+0xF0`, `+0xF8 = 1`, `+0xFC` (bit 0 = the sign of arg3,
   via `rlwimi`), `+0x100/+0x104` (floats) and `+0x108 = 18`. So the field that differs between the
   two payloads is set by a **later activation/parenting step, not by construction** - consistent with
   one payload being activated and the other not.
   **Methodological correction, and it invalidates two earlier conclusions.** Both scans that "found
   nothing" required the two instructions of a pattern to be *adjacent*. They are not always: the
   vtable materialisation is `lis r4, 0x8078` / `addi r3, r31, 72` / `addi r4, r4, 0x2C08` - split by
   an unrelated instruction. Re-running with a 4-instruction window finds exactly one site,
   `0x801F40A0`. So 5c.27's "the vtable is copied from a data table, that search route is a dead end"
   is **wrong**, and so is the "no `addi rX, rA, -8` + `stw rX, 4(rA)` pair exists" result. Re-run any
   pattern scan in this project with a relaxed window before believing a negative.
   **Next**: find the activation step - the one that writes `payload+4` - and compare its behaviour
   for `0x8186DF60` against `0x81863F60`. That should name the missing call.
   **The window is now a dozen frames wide.** Sampling `payload+4` on every change of the machine:

   ```
   f=3414  p0=0x8186DF60 (pay0.p4=0x8186DF58)   p1=0x81863F60 (pay1.p4=0x00000002)
   f=3416  same                                  same
   f=3602  same                                  same
   f=3604  same                                  same
   ```

   The split is **already present at the first sample**, and it never changes afterwards. The
   allocator log puts the two allocations at **frame 3402**, so whatever sets `+4` runs between frame
   3402 and frame 3414 - a 12-frame window, in the same call chain as the factory at `0x801F3FF8`.
   So this is not a late, conditional activation: the two payloads are constructed differently, or
   linked differently, immediately. Instrument that window (not frame 3604) next.
   Also note `+4` is *not* written by the constructor, so if it is not a leftover from the previous
   owner of that memory then it is written by the caller of the factory right after it returns -
   which is one frame's worth of dispatch to search.
   **Verified unchanged after the texture-hash fix**: phase 13 still reaches `o88=3` at 3602, falls
   back to `o88=1` with the counter at 1 at 3604, and stays there through 4524. The rendering fix and
   the intro stall are independent.
   **DVD ruled out**: the last `[TLS DVD] read` in a 4200-frame run is around request #500, well
   before frame 2363, so slot 1's resource is not a disc load.
   **Fabricated HLE ruled out as the cause** (both are now bypassable). Two overrides in
   `replacements.c` invent their answers and both sit on this path:
   * `case 0x800A6BDC` walks a heuristic bytecode validator and, if it decides the stream is
     invalid, **returns to the caller without running the guest's script executor at all** - a wrong
     opcode table there is indistinguishable from "the intro stopped";
   * `case 0x80360A2C` is a hardcoded `return 0` for the fade coordinator, with the source comment
     admitting it exists "so GameTask::Init advances to State 2".
   New `TLS_NO_SCRIPT_FILTER=1` and `TLS_NO_FAKE_FADE=1` make both run the guest's own code.
   **Measured with both bypassed**: `PHASE 8 -> 0` moves 34 frames earlier (3380 -> 3346) and phase 13
   is entered at 3401 rather than 3402 - so they do perturb timing - **but phase 13 still stalls at
   `o88 = 1`** (through frame 4506, on a differently allocated waiter, `0x81862540`). So the stall is
   not an artefact of these stubs and survives with the guest's own logic running.
   **But they are LOAD-BEARING - do not remove them naively.** With both bypassed the 1448 invariant
   moves from `mean (102,188,205) p50 203` to `mean (77,151,205) p50 174`: the save dialog's plate
   darkens. So whatever the guest's own code does there is not yet equivalent, and flipping the
   defaults would regress the title. They stay default-ON; the flags exist to A/B them, not to retire
   them, until the underlying gap they paper over is found.

5. **`fn_803E4478`** makes the phase-0 gate one-shot: it zeroes `g2+0xD8C` itself. Whatever re-arms
   it is a later phase, not a retry.

6. Input plans must respect the **one-update edge**: press, release, press again.

7. Unchanged: the title input race (and its effect on the invariant check), the allocator cycle
   (5c.22 s3).


---

### 5c.28 Chapter-1 thread: consolidated status after rounds 1-13

Written because this thread now spans many sessions and the useful facts are scattered through
5c.25-5c.27. Read this first, then the section it cites.

**FIXED and verified**
* **EFB copy destination format 1 (R8)** - 5c.26 §6. The eight
  `destination format 1 not implemented` lines are gone.
* **EFB copy destination format 0 (R4)** - 5c.27 §9 item 2. Written as the exact inverse of this
  file's own `decode_gx_texture` `case 0`. Format warnings are now zero in the Chapter-1 chain.
  Measured to change nothing visually in the loop (the R4 destinations are not on its path).
* **The stale/byte-identical alternate frame** - 5c.27 §9 item 1. Root cause was a texture-cache
  content hash sized as `width*height/8` *words* (0.5 bytes/texel for every format), so an RGBA8
  destination had only its first 1/8 hashed and EFB rewrites past that were invisible. Fixed in
  `gfx_d3d11.c` (`TLS_TEX_HASH_FULL`, default on). Presents 4002/4004/4006 now all differ.
* **The 3-A present-1448 invariant**: `mean (102,188,205) p10 69 p50 203 p90 203 p99 206`,
  re-verified after every change. Caveat from 5c.27 §9: the title *also* alternates between two
  halves, and 1448 lands on one of them - so this is a regression guard, not a correctness target.

**OPEN**
1. **The intro still never leaves phase 13** (the objective's headline question, 5c.27 §8b/§9.4).
   Chain of facts, all measured: outer state 0 -> an A press at frame 3400 opens the phase-0 gate ->
   `PHASE 0 -> 13` at 3402 with `+0x54F0` cleared (the value `GameTask::Init` turns into outer state
   1) -> phase 13 waits for `waiter+0x88 == 4` -> `+0x88` needs the 4-slot list at `waiter+0x474` to
   advance -> the counter sticks at 1 because slot 1's `w10` never arrives -> slot 1's payload is a
   **LayoutTask that is allocated and never linked** (`+4 == 2` instead of a parent pointer).
   Slot 0's payload, created in the same frame from a sequential id, links and draws normally, so
   this is an asymmetry, not guest policy. **Next: find who assigns `LayoutTask+4` and why slot 1's
   is unset.**
2. **The two halves are still presented separately.** The host presents once per emulated frame;
   Chapter-1 is two-pass (odd = opaque geometry, even = blended composite, both clearing to black,
   `xfbs=1` only on the even/composite frame). `TLS_PRESENT_ON_XFB=1` implements the faithful gate
   and is safe for the title (which has `xfbs=1` on every frame). **Now default ON** (5c.29): the boot
   was measured - it renders nothing until ~frame 300 - and the 1448 invariant is unchanged with the
   gate on. `TLS_PRESENT_ON_XFB=0` restores one present per emulated frame.
3. **R8 tiling is still 4x4 while R8 is an 8x4 format** (5c.27 §9.3), behind `TLS_R8_TILE_8X4`,
   default off. Unvalidated: no reference, and the title's bloom chain uses R8.
4. **Two fabricated HLE overrides still ship, default-on** (5c.27 §9.4): `0x800A6BDC` can skip the
   guest's script executor on a heuristic, and `0x80360A2C` hardcodes "fade complete". Measured:
   bypassing both with `TLS_NO_SCRIPT_FILTER=1 TLS_NO_FAKE_FADE=1` shifts intro timing by ~34 frames
   but does **not** unblock phase 13. They are not the blocker, but they fabricate state and should
   be retired deliberately rather than left as the default.

**Instruments that exist now** (all TLS-gated, inert by default)
`TLS_SCENE_SM_PROBE` (scene machine, phases, gates, waiter records + payload dumps + one-shot
reference scan), `TLS_PRESENT_PROBE` + `TLS_PRESENT_WINDOW` (per-frame batches/blended/clears/xfbs),
`TLS_PRESENT_ON_XFB`, `TLS_TEX_HASH_FULL`, `TLS_R8_TILE_8X4`, `TLS_EFB_SRC_CURRENT`,
`TLS_EFB_CHAIN`, `TLS_BATCH_DUMP`, `TLS_MODE25_PROBE`, and `tools/chain_run.ps1` (retries the chain
until `SetNextSequence('Game')` appears - **use it for every Chapter-1 measurement**, because a run
that died on the title input race prints no probe output at all and looks like a broken probe).


### 5c.29 The two-half present gate is now default ON

The host used to put **every emulated frame** on screen, so a two-pass guest saw the opaque geometry
half and the composite half as two alternating pictures. `TLS_PRESENT_ON_XFB` (added in 5c.27 §9)
flips the window only on frames where the guest performed an XFB copy - i.e. only on frames the guest
itself finished. It was left OFF then because the boot screens were unmeasured; they are now measured:

```
frames 2..~300   batches=0  xfbs=0    <- the boot renders nothing (black)
frame 1          xfbs=1
frame 300+       xfbs=1 on every sampled frame (title, save dialog, Chapter-1 composite)
```

So nothing that has content stops being shown, and in the Chapter-1 loop the gate drops the
geometry-only half (`xfbs=1` only on 4002/4004/4006).

Verified: the 1448 invariant is **unchanged** with the gate on (`mean (102,188,205) p10 69 p50 203`,
two consecutive runs - expected, it is a back-buffer capture and the gate only skips
`IDXGISwapChain_Present`), and a 620-frame boot run exits 0, reaches title mode 1 at frame 357 and
completes normally. `TLS_PRESENT_ON_XFB=0` restores the old behaviour.

**Note for anyone tempted to "validate" this with the invariant**: you cannot. The invariant reads the
back buffer, which is drawn identically either way; the evidence for the gate is the per-frame
`xfbs` profile plus the boot run, not a pixel comparison.
