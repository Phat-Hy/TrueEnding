# DeepSeek Harness Handover Dossier: Project The Maybe(Not) Last Story
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
