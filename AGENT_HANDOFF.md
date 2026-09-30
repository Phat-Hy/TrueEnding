# Agent Handoff Packet: Project The Maybe(Not) Last Story (TrueEnding)

**From**: Antigravity (Advanced Agentic AI)  
**To**: Odysseus / Nanbeige4.2-3B (Local Offline AI Agent)  
**Date**: October 1, 2026  
**Objective**: Transfer dual-track decompilation and native PC porting execution to local offline model `Nanbeige4.2-3B`, preserving complete technical context and ensuring structured documentation so Antigravity can pick up execution seamlessly in one week.

---

## 1. System Prompt for Nanbeige4.2-3B

```text
You are the Reverse Engineering & Native PC Porting Specialist for Project The Maybe(Not) Last Story (TrueEnding).
You are working on a clean-room decompilation and native PC port of the retail Wii game "The Last Story" (USA SLSEXJ, Title ID 00010000534c5345).

PROJECT OPERATIONAL RULES:
1. DUAL-TRACK ARCHITECTURE:
   - Track A (Matching Decompilation): C source code in `src/` must match retail Metrowerks CodeWarrior 4.3 build 145 100.0% byte-for-byte.
   - Track B (Static Recomp & PC Bringup): Native x86_64 C code in `recomp/` drives the recompiled binary (`build/recomp/tls_runner.exe`).
2. CLEAN-ROOM HYGIENE:
   - Never commit copyrighted Nintendo SDK code, game ISO dumps, or ROM assets into Git.
3. CODEWARRIOR PPC 750CL COMPILER CONVENTIONS:
   - Variable declaration order controls non-volatile register allocation (r31 -> r14).
   - Low memory OS pointers:
     * `0x800000DC` = `*(OSThreadQueue*)0x800000DC` (__OSActiveThreadQueue)
     * `0x800000E4` = `*(OSThread**)0x800000E4` (__OSCurrentThread)
     * `0x800000D8` = `*(OSContext**)0x800000D8` (__OSFPUContext)
     * `0x800000D4` = `*(OSContext**)0x800000D4` (__OSCurrentContext)
   - Naked inline assembly functions require `nofralloc`.
   - Inlined PowerPC sync instructions in C code require `asm { sync }`.
4. VERIFICATION MANDATE:
   - Do not claim a function matches without running `ninja` and `diff_helper.py`.
   - If diff is 0 bytes, record 100.0% in `docs/ODYSSEUS_WORKLOG.md` and `docs/PROGRESS_LEDGER.json`.
5. STEP-BY-STEP WORKFLOW:
   - Tackle ONE function or feature at a time.
   - Document any register mismatch, loop unrolling difference, or MMIO finding in `docs/ODYSSEUS_WORKLOG.md`.
```

---

## 2. Quick Command Reference

All commands run from root: `G:\Program\Project The Maybe(Not) Last Story`

| Task | Command |
| :--- | :--- |
| **Compile Decomp Module** | `.\tools\w64devkit\bin\ninja.exe build/SLSEXJ/src/<Module>.o` |
| **Generate Match Report** | `.\tools\objdiff-cli.exe report generate -o report.json; copy report.json build\SLSEXJ\report.json` |
| **Inspect Function Diffs** | `python tools/diff_helper.py <FunctionName> -a` |
| **List Module Status** | `python tools/diff_helper.py --list <ModuleName>` |
| **Compile Native Runner** | `python tools/recomp_harness.py build-runner` |
| **Run Native PC Game** | `.\build\recomp\tls_runner.exe --blocks 5000000 --frames 10` |
| **Check Git Status** | `git status` |

---

## 3. Current Project State

### Track A (Decompilation Matching)
- **100.0% Matched Modules** (8 total, 106 functions, 0 diffs):
  1. `src/OSAlarm.c` (13 functions)
  2. `src/OSArena.c` (13 functions)
  3. `src/OSCache.c` (19 functions)
  4. `src/OSContext.c` (15 functions)
  5. `src/OSError.c` (5 functions)
  6. `src/OSInterrupt.c` (11 functions)
  7. `src/OSThread.c` (24 functions)
  8. `src/OSTime.c` (6 functions)

### Track B (Native PC Runner Bringup)
- **Executable**: `build/recomp/tls_runner.exe` (99.53 MB)
- **Milestone Reached**: Continuous 60 FPS Engine Game Loop!
  - `host_simulate_vblank()` advances graphics frame queue read index at `0x807C6FBA`.
  - `host_wakeup_thread()` awakens `DefaultThread` (`0x807CB658`) out of the scheduler idle loop `while (RunQueueBits == 0)`.
  - `nw4r::snd` Nintendo Wear 4 Revolution sound engine initialized.
  - Three active threads managed:
    * `Thread 0`: Main Game Thread (Prio 16, Active)
    * `Thread 1`: Audio / DVD Worker (Prio 3, Waiting on queue `0x8087D610`)
    * `Thread 2`: Streaming Worker (Prio 4, Waiting on queue `0x80879538`)

---

## 4. Priority Tasks Queue for Nanbeige / Odysseus

Work through these tasks in order during the week:

### Task 1 (Track A): Decompile `src/OSReset.c`
- **Address Range**: `0x805F6AD0` to `0x805F7980` in `.text`.
- **Functions to match**:
  - `__OSDefaultResetCallback`: `0x805F6EC0` (size 0x4) -> `blr`
  - `__OSDefaultPowerCallback`: `0x805F6ED0` (size 0x4) -> `blr`
  - `fn_805F6EB0`: `0x805F6EB0` (size 0x10)
  - `__OSUnRegisterStateEvent`: `0x805F6E30` (size 0x78)
  - `__OSHotReset`: `0x805F6C70` (size 0x74)
  - `__OSInitSTM`: `0x805F6AD0` (size 0x118)
- **Procedure**:
  1. Add slice to `config/splits.txt` under `OSReset.c:`.
  2. Disassemble slice with `.\tools\dtk.exe elf disasm build/SLSEXJ/obj/OSReset.o build/SLSEXJ/obj/OSReset.s`.
  3. Write `src/OSReset.c` and `include/revolution/os/OSReset.h`.
  4. Compile with `.\tools\w64devkit\bin\ninja.exe build/SLSEXJ/src/OSReset.o`.
  5. Check diffs with `python tools/diff_helper.py <FuncName> -a`.
  6. Log results in `docs/ODYSSEUS_WORKLOG.md`.

### Task 2 (Track B): Controller Input Mock (WPAD / KPAD)
- **Target**: `recomp/replacements.c`.
- **Context**: In `recomp/replacements.c`, `WPADInit` and `KPADInit` report status `5` (ready).
- **Goal**: When `WPADRead` or `KPADRead` is called, populate the controller status struct with mock inputs (or check Win32 `GetAsyncKeyState` for Arrow keys / Enter / Space) so button presses are fed into the game.

### Task 3 (Track B): DVD Asset Streaming Hook
- **Target**: `recomp/replacements.c`.
- **Goal**: In `DVDReadAsync` / `DVDOpen`, detect asset paths requested by `Thread 1` (e.g. opening `wt/` sound archives, `.thp` opening cinematic videos) and serve them from disk.

---

## 5. Handoff-Back to Antigravity Checklist

When Antigravity resumes in one week:
1. Antigravity will read:
   - `docs/ODYSSEUS_WORKLOG.md`
   - `docs/PROGRESS_LEDGER.json`
   - `PROJECT_JOURNAL.md`
   - `git log -n 5`
2. Antigravity will inspect any open blockers listed under `Blockers / Open Questions for Antigravity` in `docs/ODYSSEUS_WORKLOG.md`.
3. Antigravity will resolve difficult register allocation puzzles, link/split boundaries, or complex graphics/audio subsystems and push the project to the next major milestone.
