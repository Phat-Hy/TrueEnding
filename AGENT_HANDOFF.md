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
6. STRATEGIC DUAL-METHOD MATCHING MANDATE:
   - Method B (Batch Assembly-C Pipeline): Use for Hardware SDK boilerplate & low-level drivers (GX, AX/AXFX/DSP, ISFS, IPC, NAND, PAD, SC). Rapidly lock down complete subsystems to push overall project milestones with minimal token consumption.
   - Method A (Deep C Algorithmic Matching): Use for Core Game Logic (Sakaguchi/Feelplus gameplay scripts, battle calculation engines, AI state machines, character physics) where full semantic understanding is required to create native PC replacement hooks (Track B).
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
- **100.0% Matched Modules** (99 full modules linked directly into `main.dol`):
  1. **NAND Flash Subsystem** (6 modules, 90 funcs, 19,140 B): `nand.c`, `NANDOpenClose.c`, `NANDCheck.c`, `NANDCore.c`, `NANDLogging.c`, `nanderror.c`
  2. **System Configuration (SC)** (2 modules, 91 funcs, 20,244 B): `scsystem.c`, `scapi.c`
  3. **DVD Filesystem Subsystem** (6 modules, 124 funcs, 37,120 B): `DVDFS.c`, `dvd.c`, `dvdqueue.c`, `dvderror.c`, `dvdFatal.c`, `dvd_broadway.c`
  4. **Video Interface (VI)** (2 modules, 42 funcs, 18,276 B): `vi.c`, `vi3in1.c`
  5. **Graphics Accelerator (GX)** (10 modules, 173 funcs, 30,808 B): `GXInit`, `GXFifo`, `GXAttr`, `GXMisc`, `GXGeometry`, `GXFrameBuf`, `GXLight`, `GXTexture`, `GXBump`, `GXTev`
  6. **Audio Executive & DSP (AX / AXFX / DSP)** (19 modules, 123 funcs, 27,244 B): `ax`, `AXAlloc`, `AXAux`, `AXCL`, `AXOut`, `AXVPB`, `AXSPB`, `AXProf`, `AXFX*`, `dsp`, `dsp_task`
  7. **Inter-Process Comm & FS (IPC / ISFS)** (4 modules, 66 funcs, 14,620 B): `ipc`, `ipcclt`, `ipcprof`, `isfs`
  8. **OS Core & CPU Context** (12 modules, 137 funcs, 26,532 B): `OSArena`, `OSCache`, `OSContext`, `OSError`, `OSInterrupt`, `OSThread`, `OSTime`, `OSIpc`, `OSTitle`, `OSAlarm`, `OSReset`, `OSPlayTime`
  9. **Math & Controllers** (6 modules, 43 funcs, 5,592 B): `PSMTX`, `mtx`, `mtx44`, `vec`, `quat`, `pad`, `ai`
  10. **Broadcom Bluetooth Subsystem (BTE/BTA/BTM/HID/L2CAP/RFCOMM/SDP)** (14 modules, 630 funcs, 169,576 B): `hcis`, `bta_sys`, `bta_dm`, `bta_hh`, `btm_acl`, `btm_dev`, `btm_inq`, `btm_sco`, `btm_sec`, `gap`, `hid`, `l2cap`, `rfcomm`, `sdp`
  11. **Nintendo Graphics & USB Subsystems** (3 modules, 59 funcs, 31,396 B): `tpl`, `gx_draw`, `gx_anim`, `usb`
  12. **Wiimote Subsystem (KPAD & WPAD)** (4 modules, 210 funcs, 83,336 B): `kpad`, `wpad`, `wpad_mem`, `wpad_core`
  13. **Metrowerks Target Resident Kernel Debugger (TRK)** (1 module, 152 funcs, 25,128 B): `trk`
  14. **MSL C & C++ Standard Libraries** (2 modules, 329 funcs, 104,200 B): `msl_c`, `msl_cpp`
  15. **Runtime Support Helpers** (2 modules, 30 funcs [72 entry points], 4,524 B): `runtime`, `global_destructor_chain`
- **Total Progress**: **655,732 bytes** / 7,477,324 (**8.77%** code matched, **8.82%** linked), **2,477 functions** matched (13.67%).
- **DOL Integrity**: `orig/main.dol.sha1` check passes cleanly (`OK`, 0 byte differences across all linked units).

### Track B (Native PC Runner Bringup)
- **Executable**: `build/recomp/tls_runner.exe` (99.53 MB)
- **Milestone Reached**: Continuous 60 FPS Engine Game Loop!
  - `host_simulate_vblank()` advances graphics frame queue read index at `0x807C6FBA`.
  - `host_wakeup_thread()` awakens `DefaultThread` (`0x807CB658`) out of the scheduler idle loop `while (RunQueueBits == 0)`.
  - `nw4r::snd` sound engine initialized; 3 threads running stably.

---

## 4. Priority Tasks Queue for Agent

Work through these tasks in order:

### Task 1 (Track A): Complete the 7 remaining functions in `src/OSReset.c` — **DONE (2026-10-02)**
- **Status**: All 7 functions matched; the module is 16/16 byte-identical (see Session 3 in `docs/ODYSSEUS_WORKLOG.md`).
- **Functions matched**:
  1. `fn_805F6EB0` (4 insts, offset `0x03e0`): Clears `StmVdInUse` and returns 0.
  2. `fn_805F7040` (3 insts, offset `0x0570`): Calls `PlayRecordCallback(0, 0)`.
  3. `fn_805F6DF0` (16 insts, offset `0x0320`): Sets `*(u32*)lbl_807CC0A0 = arg0` and calls `fn_8061D080(0x6002)`.
  4. `fn_805F6BF0` (31 insts, offset `0x0120`): `__OSShutdownSystem` (sends `0x2003` to STM).
  5. `fn_805F6CF0` (62 insts, offset `0x0220`): Video mode / display event configuration.
  6. `__OSStateEventHandler` (85 insts, offset `0x0410`): Power/Reset interrupt handler.
  7. `PlayRecordCallback` (301 insts, offset `0x0580`): NAND play history callback.
- **Workflow for Each Function**:
  1. Inspect target assembly: `python tools/diff_helper.py <FuncName> -a`
  2. Write C code in `src/OSReset.c` (or use matching CodeWarrior inline assembly if needed).
  3. Compile: `.\tools\w64devkit\bin\ninja.exe build/SLSEXJ/src/OSReset.o`
  4. Check diff: `python tools/diff_helper.py <FuncName> -a`
  5. Once diff is 0 instructions, verify report: `.\tools\w64devkit\bin\ninja.exe build/SLSEXJ/report.json`
  6. Log to `docs/ODYSSEUS_WORKLOG.md` and commit to Git.

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
