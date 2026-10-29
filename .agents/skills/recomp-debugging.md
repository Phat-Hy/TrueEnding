---
name: recomp-debugging
description: Rigorous, systematic procedures for debugging and profiling native PC recompilation of Wii RVL-SDK games without console I/O throttling, fake progress, or guesswork.
---

# Recomp Debugging & Diagnostics Skill (Full Engine Observability)

## Purpose
Provide a disciplined, systematic methodology to diagnose, debug, and resolve runtime stalls, thread queue corruptions, graphics glitches, input non-responsiveness, and sequence hangs in recompiled Wii binaries (DolRecomp + Modern HAL) across the entire game lifecycle—from Boot to Strap Screen, Title Screen, Save Selection, Gameplay (Gurgan Cave / Lazulis City / Battles), and End-Credits.

---

## Core Rules & Principles

### 0. Before Debugging Any GX Defect, Check Whether It Is Already Solved
* The renderer is **slated for replacement** — see `AGENTS.md` §1 (Renderer strategy: Aurora-first) and the dossier's
  §5c.46 **AP-AL**. Until that spike resolves, do not add a new GX-semantics feature to `recomp/gfx_d3d11.c` or
  `recomp/gx_pipeline.c`.
* Before spending a run on TEV stages, blend factors, XF texgen, EFB copy/readback or texture decode, read what
  [Aurora](https://github.com/encounter/aurora) and Dolphin do at that exact point. Those are *hardware semantics*,
  and reconstructing them from screenshots is how this layer accumulated **82 `TLS_*` switches** and **69
  archaeology citations** — plus three compensation hacks (ink matte, baseline subtraction, white-texture fallback)
  that exist only because the real TEV stage is not evaluated.
* Measured in one session, each hypothesis killed by a switch rather than by a rewrite: copy ordering was already
  correct (`s_batch_barrier` sets a batch boundary at every queued copy — see AP-AK), forcing every batch through
  `PSTev` (`TLS_TEV_FORCE_STAGES=1`) left the frame byte-identical, and the source/destination blend-factor table
  mismatch (`TLS_BLEND_SLOT_FIX=1`; Dolphin has **two** enums) left the gate frames byte-identical. **Prefer a
  switch that tests a hypothesis in one run over a code change that assumes it.**

### 1. Zero "Fake Progress" and Strict Rejection of Speculative Band-Aids
* **Never mutate game state variables artificially to simulate progress**:
  - **VIOLATION**: Overwriting task state words (`mem_write32(ctx, task + 0x48, 2)` or `ctx->gpr[4] = 2`) to "force" a screen transition. This causes desynchronization between child tasks, resource loaders, and the engine event loop, resulting in a frozen or black screen for the user.
  - **CORRECT PRACTICE**: Trace the natural progression requirement of the task (e.g. `StrapTask` checking a frame timer, waiting for `item_param_text_en.u16` decompression to finish, or checking `PadManager` trigger flags for 'A' button). Satisfy the underlying engine contract cleanly so the game transitions organically.

### 2. Differentiate Root Causes from Downstream Symptoms
* **Never suppress symptom locations**:
  - Example: If `OSSleepThread(queue)` encounters `queue->head == 0x00000002`:
    - **WRONG**: Resetting `queue->head = 0` in the `OSSleepThread` hook every time it happens. This masks who corrupted the queue and causes race conditions or dropped wakeups.
    - **RIGHT**: Set a memory watchpoint on `queue_addr` (`0x807C6F60`), identify the exact instruction/callback writing `0x00000002`, understand the data structure aliasing or callback confusion, and fix the source.
  - Example: If the game stays on the controller strap screen:
    - **WRONG**: Speculatively hacking task flags or jumping the sequence counter ahead.
    - **RIGHT**: Trace the active sequence (`SequenceManager`), inspect its sub-tasks (`StrapTask`), read its transition condition (timer, input, or async DVD preload completion), and satisfy the engine contract cleanly.

### 3. High-Performance, Rate-Limited Observability (Zero I/O Frame Drops)
* **Never dump un-throttled synchronous `printf` / `puts` inside high-frequency guest functions**:
  - Loops (e.g. `fn_80219F84 row #...`), vertex processing, per-frame updates, or thread scheduling hooks MUST NEVER dump linear synchronous console prints. Synchronous Windows console I/O drops framerates from 60 FPS down to 1–4 FPS and distorts thread timing.
  - Every diagnostic hook MUST be gated by:
    1. **State transitions** (only log when the state/mode/sequence actually changes).
    2. **Strict count caps** (e.g. first 5 calls).
    3. **Rate throttling** (e.g. once every 60 or 300 frames):
    ```c
    static u32 s_last_val = 0xFFFFFFFF;
    if (new_val != s_last_val) {
        printf("[ENGINE] State transition: %u -> %u\n", s_last_val, new_val);
        fflush(stdout);
        s_last_val = new_val;
    }
    ```

### 4. Macro-Telemetry: Full Game State Observability Matrix
Always inspect and report the complete engine state across all 6 layers simultaneously:

1. **Sequence & Task Layer**:
   - `SequenceManager` (0x8087EE90): Current sequence ID, pending sequence, transition fade timer.
   - `TaskManager` (0x8087EE94): Complete list of registered tasks, task IDs, priority, internal state (`mState`, `mMode`), child task pointers, and readiness bits (bit 30).
   - **Title Task State Machine Pipeline (`NewTitleTask` / `0x80534074`)**:
     - **Mode 0**: Initial task initialization and resource loading.
     - **Mode 1**: Title Screen presentation ("Push Any Button" prompt, 3D cave background). `NewTitleTask::Draw` checks `0xbb0(task)` before rendering 2D title overlay. `0xbb0(task)` is set to 1 after 30 frames (`0xbac >= 0x1E`) of idle controller state. User button press advances to Mode 2.
     - **Mode 2**: Title Menu Setup (New Game, Load Game, Options). Transitions to Mode 3.
     - **Mode 3**: Interactive Menu. Controller navigates options. User confirms New Game -> transitions to Mode 4.
     - **Mode 4**: Screen fade out -> transitions to Mode 5.
     - **Mode 5**: NAND Save Data Status Check (`fn_800A472C`).
       > [!IMPORTANT]
       > In Nintendo RVL-SDK NAND specifications, `0` is `NAND_RESULT_OK` (Success). Non-zero return values represent error codes! Returning `1` causes Mode 5 to branch to Mode 9 (Save Warning/Error). Never force Mode 9 back to Mode 2 via `SetMode(9) -> 2`, as that traps the user in an infinite title loop.
     - **Mode 6**: Save file confirmation / prompt. User input advances to Mode 7.
     - **Mode 7**: Save / load file execution. Transitions to Mode 8.
     - **Mode 8 / Mode 0xB**: Sequence handoff to `SequenceManager` -> transitions into Chapter 1 (Gurgan Cave gameplay).

2. **Input & Controller Layer**:
   - Host input acquisition: Raw Win32 keyboard keys and XInput controller state.
   - Guest translation: Values written into guest WPAD/KPAD structures (`s_ctrl_state`, `0x8088...`).
   - Edge-Trigger Persistence Contract:
     - Game engines and KPAD poll handlers often run at sub-frame or asynchronous rates.
     - Single-tap inputs (`trig` / button edge down) MUST be latched across multiple guest sub-frame reads until the full frame transition occurs. If cleared prematurely on intermediate polling, the game engine will only register button presses when held down continuously.
     - Button release events must similarly update hold masks without dropping pending triggers.
     - Never inject artificial button triggers (`sim_press = (s_act4_count >= 10 && ...)`) based on call counters. Synthetic input triggers fire prematurely during the strap screen or resource loading, desynchronizing the task state machine and leaving interactive user runs unresponsive.

3. **Async I/O & Resource Streaming Layer**:
   - DVD file requests: Pending queue, active request ID, source file (`pack/filesystem.pk`, `preload/title00.pk`), target buffer, and completion callback.
   - Decompression status: `CXDecompressFast` / `LZO` queue, input/output buffer validity, decompressed size.
   - NAND / Save data: File open/read/write status, save buffer integrity.

4. **Graphics & Presentation Layer (Direct3D 11 / GX Emulation)**:
   - Framebuffer addresses: Front buffer (`fb0` at `0x807C6F70`), back buffer (`fb1` at `0x807C6F80`), and `g_last_vi_framebuffer`.
   - Render mode: Are GX display lists active (`gx_vtx_count > 0`), or is the pipeline presenting an XFB fallback quad?
   - **TEV Stage Tracking & The Square Particle Root Cause**:
     - `BPMEM_GENMODE` (BP reg `0x00`): Bits 10..13 determine the active number of TEV stages (`s_num_tev_stages = ((val >> 10) & 0x0F) + 1`).
     - TEV order recomputation MUST strictly iterate only `i < s_num_tev_stages`.
     - When particle quads render using `GX_TEV_PASSCLR` on Stage 0 with texture disabled, if the pipeline does not clamp the scan to `s_num_tev_stages`, it loops across all 16 stages and finds stale texture enables from previous 3D geometry (e.g. cave CMPR rock texture `0x907FCBA0`), binding that opaque texture onto untextured quads. This renders billboard particles as solid chunks of rock.
   - **CP Matrix Index Register Contract**:
     - `CP_REG_MATINDEX_A` (CP reg `0x30`): Bits 0..5 specify `PosNormalMtxIdx` (`val & 0x3F`).
     - When a vertex format does not include a per-vertex matrix (`s_vtx_desc[0].type == GX_ATTR_NONE`), the pipeline MUST transform vertices using `s_default_pnm_idx = (val & 0x3F) / 3`. If reg `0x30` is ignored, geometry transforms with stale matrix 0 and gets clipped out of the frustum.
   - **Strict Alpha & Transparency Rules**:
      1. **Dynamic Baseline Subtraction for CMPR Glows & Particles**: Never hardcode memory addresses. In Wii GX, particle textures with golden-beige baseline backgrounds (RGB ~194, 180, 128) rely on TEV subtraction. Detect this dynamically by checking if all 4 corners of a CMPR texture match a non-black baseline color, then subtract the baseline across the image and apply a smooth Hermite curve to alpha.
         > [!CAUTION]
         > STRICTLY restrict baseline subtraction to particle textures (tu->width > 16 && tu->height > 16). NEVER apply baseline subtraction to small 4x4 or 8x8 UI textures (such as 0x904E5EE0, the core 4x4 CMPR UI border/frame texture), as that zeroes out UI dialogs, boxes, and borders across the entire game.
      2. **Zero-Alpha Vertex TEV Handling**: In Wii GX, 2D UI batches frequently specify vertex color with Alpha = 0 (col0 = 0x00FFFFFF or 0x80000000) because the hardware TEV Alpha stage is set to GX_CC_TEXA (texture alpha only). In HLSL/D3D11, the pixel shader MUST NOT unconditionally multiply texColor.a * input.color.a and discard; if input.color.a < 0.001f, the alpha must be driven solely by texColor.a.
      3. **Opaque Shader Punch-Through**: When blend_enable == false, the pixel shader MUST still discard fragments where finalColor.a <= 0.05f. In Wii GX, Alpha Compare (0xF3) discards zero-alpha fragments even when framebuffer blending is disabled. Without this discard, punch-through textures (foliage, particles, 2D icons) draw as solid opaque square boxes.
      4. **Universal 2D UI Alpha Blending**: In 2D orthographic UI (!batch->is_perspective), ALL textured batches (regardless of format: I4, I8, IA4, IA8, RGB5A3, RGBA8, CI4, CI8, CMPR) MUST enable hardware alpha blending (src=GX_BL_SRCA, dst=GX_BL_INVSRCA). If blending is disabled, anti-aliased font edges and icon borders overwrite the framebuffer as opaque black/grey boxes.
      5. **Additive Blending Depth Mask**: Additive particles (dst_factor == 1 / GX_BL_ONE) MUST NEVER write to depth (depth_write_enable = FALSE). If additive quads write depth, subsequent geometry behind them is occluded by the transparent quad boundary.
      6. **CMPR (DXT1) Standard Compliance**:
         - c0 > c1: 4 opaque colors, all with alpha = 255.
         - c0 <= c1: colors 0, 1, 2 have alpha = 255, and color 3 has alpha = 0.
         - NEVER treat c0 == 0 as transparent, and NEVER clamp near-black RGB to transparent black.
      7. **Fullscreen Quad Skipping Integrity**: NEVER skip fullscreen quads solely based on RAM address ranges (0x90380000..0x90600000). Only skip if the texture is verified all-zero (tex_zero == true). Valid non-zero textures are rendered background passes!

   - **Animation Track Binding (fn_801FFA04) — DISPROVEN GUIDANCE**:
     - Earlier revisions of this skill told you to clamp the "track counts" at `316(r29)` / `300(r26)`. **Do not do that.** Those instructions load *pointers* (`lwz r4,304(r26)`, `lwz r0,312(r29)`), not counts, so the clamps rewrote memory the loop never reads. One of them zeroed `gpr[24]` before `fn_801FFA04` sized a staging buffer, so the engine `memcpy`'d animation data to address 0 and destroyed the OS low page including `__OSCurrentThread` (`0x800000E4`), wedging the run. See `DEEPSEEK_HARNESS_HANDOVER.md` §5c.1.
     - If that code region ever looks slow or loop-bound again, measure it (`TLS_WAIT_PROBE`, `TLS_TRACE_FROM`, `TLS_TAIL_RING`) and name the caller instead of clamping guest registers or words.
   - **Memory map / heap vs stack (the frame-830 stall, §5c.9)**:
     - The MEM1 arena low is decided by `OSInit` (`0x805EB7E8`) from the BI2 field at `0x8000310C`; the engine then carves its heaps from `OSGetMEM1ArenaLo()`/`OSGetMEM1ArenaHi()`. The arena must start **above** the application stacks: `_stack_end` = end of `.bss`, then 64 KB main-thread stack, then 8 KB debugger stack (`asm/ldscript.lcf`). A host guess that puts the arena low inside that window makes a 1 MB engine heap grow through live stack, and the first symptom is a function returning to a clobbered address.
     - When a guest function returns somewhere impossible, check `OSThread.stackBase/stackEnd` (`+0x304`/`+0x308`, printed at shutdown) and whether any allocation or buffer intersects that window before blaming the engine.

5. **Threading & Synchronization Layer**:
   - Active threads: `OSThread` list, states (`1=READY`, `2=RUNNING`, `4=WAITING`), priority, and `RunQueueBits`.
   - Sleep queues: What queue is a thread sleeping on (`0x807C6F60 VI_RetraceQueue`, mutex, or message queue)?
   - Alarm queue: `AlarmQueue` head/tail, fire tick, period, and handler.

6. **Audio & Sound Layer**:
   - BRSTM stream state: Track path, playback position, volume, buffer underrun status.
   - DSP sound cues and sound effects playback.

---

## Verification Standard: Interactive 60 FPS End-to-End with Persistent Observability
* Finite headless runs (`--frames 120`) only verify low-level initialization.
* Complete verification requires:
  1. **Persistent Interactive File Logging**: `tls_runner.exe` MUST write all runtime prints, state machine transitions, input queries, and graphics telemetry to `interactive_debug.log` on disk automatically at launch. Developer diagnosis must never depend on whether stdout was redirected by the user.
  2. **Boot via standard launcher** (`Play_TheLastStory.bat` / `--window --fps 60`).
  3. **Natural progression** from Boot -> Strap Screen -> Title Screen -> Menu -> New Game / Save Load -> Gurgan Cave gameplay.
  4. **Responsive controls**: Enter/Space/Gamepad 'A' immediately responds on menus and dialogues without requiring holding down buttons or synthetic frame hacks.
  5. **Visual clarity**: Billboard particles are soft and translucent (never solid rock squares); 2D icons and fonts have transparent borders (never solid rectangular boxes); backgrounds render completely.
  6. **Sustained 60.0 FPS** without console spam or thread queue corruption.
