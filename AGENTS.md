# AGENTS.md - DeepSeek Harness & Multi-Agent Skill Catalog

This file provides system context, specialized role personas, and skill capabilities for autonomous coding harnesses (including **DeepSeek Harness**).

---

## 1. Project Directives
- **Strict Scope Constraint**: **0 changes to `src/`!** All decompiled C files in `src/` must remain completely untouched. All modifications belong in `recomp/`, `tools/`, and generated chunks.
- **Goal**: Full visual and functional parity with Dolphin reference emulation (`roms/TheLastStory.iso`), with clean particle transparency, working Title Menu ("New Game", "Load Game"), and smooth progression into Chapter 1 (Gurgan Cave).
- **Primary Handover Dossier**: Read [`DEEPSEEK_HARNESS_HANDOVER.md`](./DEEPSEEK_HARNESS_HANDOVER.md) for full architectural telemetry and ground truth findings from Dolphin texture dumps.

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
| **backend-development**| [backend-development.md](.agents/skills/backend-development.md) | Low-level C systems programming, D3D11 rendering backend, Win32 input, and memory arenas. |

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
   - In *The Last Story*, UI text elements (*"PRESS ANY BUTTON"*, *"NEW GAME"*) and particle glints are CMPR (DXT1) format with embedded alpha = 0.0 (`[248, 252, 248, 0]`).
   - The pixel shader must use luminance fallback for CMPR text:
     ```hlsl
     float luma = max(texColor.r, max(texColor.g, texColor.b));
     float texA = (texColor.a > 0.01f) ? texColor.a : luma;
     float alpha = texA * input.color.a;
     if (alpha <= 0.005f) discard;
     return float4(texColor.rgb * input.color.rgb, alpha);
     ```
2. **Dolphin Reference Run**:
   - 354 dumped textures are ready for comparison in: `%APPDATA%\Dolphin Emulator\Dump\Textures\SLSEXJ\`.
   - Full reference log: `%APPDATA%\Dolphin Emulator\Logs\dolphin.log`.
3. **Execution Commands**:
   - Shaders: `python tools/compile_shaders.py` -> `build/recomp/gx_shaders_d3d11.inl`
   - Runner: `python tools/recomp_harness.py build-runner` -> `build/recomp/tls_runner.exe`
   - Interactive Play: `Play_TheLastStory.bat`
