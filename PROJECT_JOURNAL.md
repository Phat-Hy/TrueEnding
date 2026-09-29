# The Last Story — Project Journal & Progress Tracker

> **Project**: Project The Maybe(Not) Last Story (Wii Decompilation & Native PC Recompilation)  
> **Workflow**: Harness Skills (`hs:brainstorm` ➔ `hs:plan` ➔ `hs:build` ➔ `hs:code-review` ➔ `hs:ship`)  
> **Architecture Foundation**: Nintendo Wii PowerPC 750CL / RVL-SDK Decompilation (`dtk`, `objdiff`, CodeWarrior) + Modern PC Port / Recomp Layer (ModernGekko / SDL2 / Vulkan / DirectX)

---

## Progress Log

| Step ID | Timestamp (Local) | Phase | Summary / Milestones | Status | Git Checkpoint / Tag |
| :--- | :--- | :--- | :--- | :--- | :--- |
| **STEP-001** | `2026-09-29T20:51:00+07:00` | Setup | Harness Skills (`hs`) & agent workspace installed into `.agents/` and `.hs.json` | **Completed** | `setup-harness` |
| **STEP-002** | `2026-09-29T20:52:00+07:00` | Brainstorm | Analyzed Wii decomp/recomp ecosystem; evaluated Decomp vs DolRecomp pathways | **Completed** | `brainstorm-done` |
| **STEP-003** | `2026-09-29T20:52:30+07:00` | Setup | Added `reverse-engineer` agent and `decomp-matching` skill into `.agents/` | **Completed** | `agent-tools-ready` |
| **STEP-004** | `2026-09-29T20:53:00+07:00` | Plan | Formulated `plans/001-tls-decomp-and-recomp-pipeline.md` & Journal tracking system | **Completed** | `plan-init` |
| **STEP-005** | `2026-09-29T20:55:00+07:00` | Build | Configured `.gitignore` and initialized local git repository with tracking tags | **Completed** | `repo-init` |
| **STEP-006** | *Awaiting Ingestion* | Ingest | Dump/Extract `main.dol` from game image, analyze header, detect compiler & SDK version | **Pending** | `awaiting-rom` |

---

## How to Backtrack (Rollback Guide)

Each milestone is associated with a Git commit and tag. If you ever need to roll back to a specific state or inspect prior code:

1. **View checkpoint history**:
   ```powershell
   git log --oneline --decorate --graph
   ```
2. **Backtrack to a specific Step**:
   ```powershell
   # Temporarily view or test a past step:
   git checkout <tag-name>    # e.g., git checkout plan-init

   # Or revert to a past step while keeping later work in a new branch:
   git switch -c rollback-step <tag-name>
   ```

---

## Architectural Decisions Record (ADR)

* **ADR-001 (Decompilation Standard)**: Adopted `dtk` (decomp-toolkit) and `objdiff` as primary decompilation and diffing infrastructure, adhering to modern GameCube/Wii decomp practices.
* **ADR-002 (Dual-Track Strategy)**: Pursue matching C/C++ source decompilation for engine reconstruction and modding, while maintaining a parallel static recompilation track (`DolRecomp` + `ModernGekko`) for accelerated native PC bringup.
* **ADR-003 (Clean Room & Copyright Hygiene)**: Disc images, raw ROM dumps, proprietary asset packs, and proprietary Metrowerks CodeWarrior binaries are strictly excluded from git tracking via `.gitignore`.
* **ADR-004 (Platform Abstraction Layer)**: Decouple all RVL-SDK calls (`GX` graphics, `AX` audio, `WPAD` input, `DVD` disk IO) behind modular HAL interfaces to allow drop-in replacement with modern PC backends (SDL2, DirectX 11/12, Vulkan).
