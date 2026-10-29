# AGENTS.md - DeepSeek Harness & Multi-Agent Skill Catalog

This file provides system context, specialized role personas, and skill capabilities for autonomous coding harnesses (including **DeepSeek Harness**).

---

## 1. Project Directives
- **RENDERER STRATEGY — AURORA-FIRST (decided 2026-10-29, read this before touching `recomp/gfx_d3d11.c`).**
  Our GX layer is hand-written and the measurements say what it costs: `gfx_d3d11.c` 4 091 + `gx_pipeline.c`
  2 887 lines, **82 `TLS_*` switches** inside it, **69 "handover 5c." archaeology citations**, and three explicit
  compensation hacks (ink matte, baseline subtraction, white-texture fallback) whose own comments reconstruct
  hardware TEV behaviour from screenshots. Every defect still open on the board is a **GX-semantics** defect
  (multi-stage TEV / konst / indirect / raster channel, source-vs-destination blend enums, XF texgen 2..7, XF light
  decode, EFB copy/readback semantics, CMPR alpha) — none of it is game-specific. Every one of those is already
  solved in **[Aurora](https://github.com/encounter/aurora)** (MIT, WebGPU/Dawn, D3D12/Vulkan/Metal), which is what
  the community's shipped Wii ports use: [Nebula](https://github.com/keepvaibin/nebula) (decomp),
  [Recharged](https://github.com/previouslevelgames/recharged) (decomp), and
  [WiiCompiled](https://github.com/patchzyy/Wiicompiled) — **static recompilation of a retail DOL/REL, i.e. this
  project's exact analogue**. None of them writes a rasteriser.
  **The standing rule until the spike resolves:** no *new* GX-semantics feature work in the hand-rolled layer. A
  bug fix is allowed only when it is cheaper than the spike and verifiable in one run against a Dolphin reference.
  **The spike (next session's job), with its three exit criteria:** (1) build aurora + Dawn against this toolchain
  (MSVC DLL behind a C ABI is acceptable) and drive its FIFO command processor from our GX stream; (2) render **one**
  frame — the invariant frame 3500 — and compare it to the current capture; (3) service **one** EFB copy through
  `capture_copies`/`get` and verify the guest samples the same bytes. Clear all three → migrate. Stall on the
  toolchain → we have spent one session, not the project, and we say so with numbers.
  Full evidence and the alternatives that were excluded by measurement: `DEEPSEEK_HARNESS_HANDOVER.md` §5c.46
  **AP-AK** (copy ordering disproven) and **AP-AL** (the three-port study).
- **Strict Scope Constraint**: **0 changes to `src/`!** All decompiled C files in `src/` must remain completely untouched. All modifications belong in `recomp/`, `tools/`, and generated chunks.
- **MANDATORY — every game-window launch starts MINIMIZED.** All runner launches (manual, scripted, `tools/invariant.ps1`, any test harness) MUST pass `--minimized`:
  ```powershell
  build\recomp\tls_runner.exe --window --minimized --frames <N> --fps 60
  ```
  Rationale: an activating window steals focus, and focus-stealing has already cost this project a full
  session of Dolphin debugging. The windowed path is still required (batch/headless hides the window),
  so minimization — not hiding — is the rule. `--minimized` creates the window hidden, shows it with
  `SW_SHOWMINNOACTIVE`, and never calls `SetForegroundWindow`/`SetFocus`
  (`recomp/host_runner.c`); `WM_SIZE` ignores `SIZE_MINIMIZED`, so the swap chain keeps its size and the
  capture-before-Present screenshot is byte-identical (verified: the frame-3500 invariant hash is
  unchanged with the window minimized). Launching a runner window non-minimized is a defect, not a
  preference; automating keyboard/mouse against a foreground game window is likewise forbidden.
- **Goal**: Full visual and functional parity with Dolphin reference emulation (`roms/TheLastStory.iso`), with clean particle transparency, working Title Menu ("New Game", "Load Game"), and smooth progression into Chapter 1 (Gurgan Cave).
- **Primary Handover Dossier**: Read [`DEEPSEEK_HARNESS_HANDOVER.md`](./DEEPSEEK_HARNESS_HANDOVER.md) for full architectural telemetry and ground truth findings from Dolphin texture dumps. Start with its `NEXT SESSION — START HERE` block and then §5c.37 (current state); everything before §5c is history and several of its conclusions are disproven.

---

## 2. Available Specialized Skills (in `.agents/skills/`)

DeepSeek Harness has access to the following domain-specific skills located in `.agents/skills/`:

| Skill | Path | Description |
|---|---|---|
| **recomp-debugging** | [recomp-debugging.md](.agents/skills/recomp-debugging.md) | Full engine observability, rate-limited telemetry, diagnosing runtime stalls, task manager transitions, thread queues, and GX pipeline state without guesswork or fake progress. |
| **decomp-matching** | [decomp-matching.md](.agents/skills/decomp-matching.md) | PowerPC 750CL / Gekko assembly matching, register allocation, Metrowerks CodeWarrior 4.3 build 145 conventions. |
| **plan** | [plan.md](.agents/skills/plan.md) | Step-by-step decision-complete implementation planning and verification checklists. |
| **code-review** | [code-review.md](.agents/skills/code-review.md) | Rigorous adversarial code quality, memory safety, and sanity checks. |
| **build** | [build.md](.agents/skills/build.md) | Parallel compilation with `tools/recomp_harness.py build-runner` (MinGW GCC 16 in `tools/w64devkit/bin/gcc.exe`). |
| **backend-development**| [backend-development.md](.agents/skills/backend-development.md) | **NOT a renderer skill** — it ships generic REST/service backend material. For the GX layer use §1 (Renderer strategy) and [recomp-debugging.md](.agents/skills/recomp-debugging.md). |

---

## 3. Available Agent Personas (in `.agents/agents/`)

| Agent Persona | Path | Purpose |
|---|---|---|
| **recomp-systems-engineer** | [recomp-systems-engineer.md](.agents/agents/recomp-systems-engineer.md) | Systems engineer specializing in native PC recompilation, hardware emulation (CPU, GPU, IPC, Audio), and full-engine diagnostics across the complete game lifecycle. |
| **reverse-engineer** | [reverse-engineer.md](.agents/agents/reverse-engineer.md) | Binary analysis, PowerPC disassembly, and function matching specialist for Wii/GameCube. |
| **tester** | [tester.md](.agents/agents/tester.md) | Test validation specialist for headless and windowed frame telemetry. |
| **fullstack-developer** | [fullstack-developer.md](.agents/agents/fullstack-developer.md) | Scoped C implementation specialist for `recomp/` and `tools/`. |
| **planner** | [planner.md](.agents/agents/planner.md) | Implementation-planning specialist. |

---

## 4. Key Architectural Facts for The Last Story (USA / SLSEXJ)

1. **CMPR Alpha Mechanics**:
   - **CORRECTED — do not use a luminance fallback for alpha.** The guidance that used to live here
     (`texA = (texColor.a > 0.01f) ? texColor.a : luma`) was wrong and has been removed from
     `tools/compile_shaders.py`. It replaced every legitimately transparent texel with its brightness,
     which turned the title logo plate, the menu text and every particle sparkle into solid opaque
     rectangles. Verified against the Dolphin dumps: the title logo (`tex1_512x64_42cb…_14.png`) is a
     fully opaque cream plate with black lettering, and particle glows are opaque beige with a brighter
     core — the cut-out is produced by the GX TEV alpha stage, not by luminance in the texture.
   - Correct pixel-shader contract (`PSAlpha`):
     ```hlsl
     float va = (input.color.a > 0.001f) ? input.color.a : 1.0f; // GX: zero vertex alpha -> texture alpha only
     float alpha = texColor.a * va;
     if (alpha <= 0.005f) discard;
     return float4(texColor.rgb * input.color.rgb, alpha);
     ```
   - Artwork that is *dark ink on a light plate* (title logo, button prompts) is handled in
     `recomp/gfx_d3d11.c` by an "ink matte" reconstruction of that TEV stage (alpha from how far each
     texel falls below the plate luminance, white RGB so the batch vertex colour tints the glyphs).
     Particle glows use the complementary baseline-subtraction path. **Do not** apply baseline
     subtraction to ink artwork or to small (≤16×16) UI textures.
   - **These two paths are COMPENSATION, not correctness** (see §1 Renderer strategy). They exist because the
     hand-rolled TEV path cannot express the real stage; the honest fix is to evaluate the actual combiner. If the
     Aurora spike succeeds they should be deleted rather than ported, and the batch's real TEV state should decide
     the alpha. Keep them working for now — but do not extend them to a new texture class.
2. **Dolphin Reference Run**:
   - 354 dumped textures are ready for comparison in: `%APPDATA%\Dolphin Emulator\Dump\Textures\SLSEXJ\`.
   - Full reference log: `%APPDATA%\Dolphin Emulator\Logs\dolphin.log`.
3. **Execution Commands**:
   - Shaders: `python tools/compile_shaders.py` -> `build/recomp/gx_shaders_d3d11.inl`
   - Runner: `python tools/recomp_harness.py build-runner` -> `build/recomp/tls_runner.exe`
   - Interactive Play: `Play_TheLastStory.bat`
