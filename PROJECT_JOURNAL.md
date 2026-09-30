# The Last Story — Project Journal & Progress Tracker

> **Repository**: [Phat-Hy/TrueEnding](https://github.com/Phat-Hy/TrueEnding)  
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
| **STEP-006** | `2026-09-29T21:25:00+07:00` | Ingest | Extracted 8.18MB `main.dol` (monolithic, 0 `.rel`s); identified CodeWarrior v4.3 b145 & RVL_SDK 3.2+ | **Completed** | `ingest-dol` |
| **STEP-007** | `2026-09-29T21:27:00+07:00` | Setup | Installed `dtk` v1.8.4; successfully analyzed 8.18MB `main.dol`, discovered 18,103 functions, and split 361 object slices | **Completed** | `dtk-split` |
| **STEP-008** | `2026-09-29T21:45:00+07:00` | Build | Configured build system (`configure.py` + `ninja`), CodeWarrior v4.3 b145 toolchain, and `objdiff.json` | **Completed** | `build-env` |
| **STEP-009** | `2026-09-29T21:47:00+07:00` | Match | Decompiled `src/__init_cpp_exceptions.cpp` and achieved first **100.0% byte-for-byte binary match**! | **Completed** | `match-first-fn` |
| **STEP-010** | `2026-09-29T22:20:00+07:00` | Match | Decompiled `global_destructor_chain.c`, `__init_hardware.c`, `memcpy.c`, `memset.c` (5 units, 9 functions, 1,192 bytes — **100.0% matched**!) | **Completed** | `decomp-startup-done` |
| **STEP-011** | `2026-09-30T01:00:00+07:00` | Match | Decompiled core RVL-SDK subsystem `src/OSTime.c` (6 functions, 1,704 bytes code, 96 bytes data tables — **100.0% byte-for-byte binary match**!) | **Completed** | `decomp-os-time` |
| **STEP-012** | `2026-09-30T02:10:00+07:00` | Match | Decompiled core RVL-SDK threading subsystem `src/OSThread.c` (24 functions, 5,744 bytes code — **100.0% byte-for-byte binary match**!) | **Completed** | `decomp-os-thread` |
| **STEP-013** | `2026-09-30T02:45:00+07:00` | Match | Decompiled core RVL-SDK alarm subsystem `src/OSAlarm.c` (13 functions, 2,196 bytes code, 16 bytes data, 8 bytes sbss — **100.0% byte-for-byte binary match**!) | **Completed** | `decomp-os-alarm` |
| **STEP-014** | `2026-09-30T14:35:00+07:00` | Recomp | Configured DolRecomp static recompiler harness & portable GCC toolchain; successfully lifted `main.dol` (1,875,456 instructions across 459 C chunks, 0 unknown opcodes, 18,189 symbols mapped); verified host x64 compilation | **Completed** | `dolrecomp-harness-ready` |
| **STEP-015** | `2026-09-30T19:50:00+07:00` | Match | Decompiled core RVL-SDK context subsystem `src/OSContext.c` (15 functions, 2,256 bytes code, 440 bytes data, 4 bytes sdata — **100.0% byte-for-byte binary match**!) | **Completed** | `decomp-os-context` |
| **STEP-016** | *Up Next* | Match / Runtime | Decompile next core OS subsystem (`OSAlloc.c` / `OSArena.c` / `OSInterrupt.c` / `OSError.c`) and advance native PC recompilation runner | **In Progress** | `decomp-next-subsystem` |

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
* **ADR-005 (CodeWarrior 4.3 b145 Optimization & Variable Allocation Heuristics)**:
  - Non-volatile register allocation in CodeWarrior PPC is heavily sensitive to declaration order and common subexpression elimination (CSE).
  - Division and modulo operations across 64-bit `OSTime` produce optimal temporary spills (`r26`, `r28`) when evaluated as common subexpressions rather than mutating the input l-value.
  - In `OSTime.c`, leap-year calculation relies on the static inline helper `__OSGetLeapDays(year)` which is shared between `OSTicksToCalendarTime` and `OSCalendarTimeToTicks`.
* **ADR-006 (Thread Subsystem Register Pairing & Inlining Heuristics)**:
  - In `src/OSThread.c`, priority queue bit manipulation requires `RunQueueBits |= 1 << (31 - priority)` compound assignment to yield `slw r0, r3, r0` rather than `slw r3, r4, r3`.
  - Priority comparison before context switching in `SelectThread` splits into distinct statements (`if (!yield) { priority = __cntlzw(RunQueueBits); if (currentThread->priority <= priority) return NULL; }`).
  - In Metrowerks CodeWarrior 4.3 b145, local variable declaration order (`head; mutex; priority;` vs `priority; mutex; head;`) controls volatile register pairing in inlined traversal loops. Utilizing an internal static inline `GetEffectivePriority` for mutex owner priority propagation ensures clean 100.0% matching across `OSCancelThread`, `OSResumeThread`, and `OSSuspendThread` while keeping standalone `__OSGetEffectivePriority` byte-matched.
* **ADR-007 (Alarm Subsystem Layout & Decrementer Comparison Codegen)**:
  - The `OSAlarm` struct layout in RVL-SDK defines `prev` before `next` (`OSAlarm* prev; OSAlarm* next;`), contrary to superficial conventions.
  - In `SetTimer`, testing remaining time with `if (delta < 0) { PPCMtdec(0); } else if (delta < 0x80000000LL) { ... }` generates the exact target `neg.` and `beq` sequence across all inlined call sites (`InsertAlarm`, `OSCancelAlarm`, `DecrementerExceptionCallback`).
  - Safe queue traversal loops in `fn_805EC7E0` and `__OSCancelThreadAlarms` require the pattern `next = alarm ? alarm->next : NULL; while (alarm) { ... alarm = next; next = next ? next->next : NULL; }`.
  - In `__OSCancelThreadAlarms`, declaring `BOOL enabled;` before `alarm` and `next` guarantees identical volatile/non-volatile register allocation (`r31` for `enabled`, `r30` for `next`).
* **ADR-008 (Static Recompilation & Decompilation Replacement Bridge — DolRecomp + ModernGekko)**:
  - Installed portable GCC 16.2 (`w64devkit`) and built `dolrecomp.exe` locally via Ninja + CMake.
  - Lifted entire 8.18 MB monolithic Wii DOL (`orig/main.dol`) into 459 portable C chunks comprising 1,875,456 PowerPC instructions with zero unknown opcodes and 18,189 mapped symbol signatures.
  - Successfully validated host x64 compilation of lifted chunks with GCC (`chunk_0000.o` produced in 0.62s).
  - Adopted dual-track replacement architecture via `DOLRECOMP_ENABLE_REPLACEMENTS` and `ModernGekko` `RECOMP_PATCH`: 100% byte-matched decompiled C functions (such as `OSTime.c`, `OSThread.c`, `OSAlarm.c`) directly override recompiled PowerPC code at runtime without modifying the generated chunks, ensuring seamless migration towards full source decompilation.

