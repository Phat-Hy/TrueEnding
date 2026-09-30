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
| **STEP-016** | `2026-09-30T19:58:00+07:00` | Match | Decompiled core RVL-SDK memory arena subsystem `src/OSArena.c` (13 functions, 256 bytes code, 8 bytes sdata, 8 bytes sbss — **100.0% byte-for-byte binary match**!) | **Completed** | `decomp-os-arena` |
| **STEP-017** | `2026-09-30T20:08:00+07:00` | Runtime / Recomp | Built native PC recompilation runner `tls_runner.exe` linking all 459 lifted C chunks + replacement bridge; verified execution from entry point `0x80004050` through CRT initialization into `__OSThreadInit` (`LR: 0x805F49E4`, 290k+ instructions executed) | **Completed** | `recomp-runner-bringup` |
| **STEP-018** | `2026-09-30T20:23:00+07:00` | Match | Decompiled core RVL-SDK interrupt subsystem `src/OSInterrupt.c` (11 functions, 1,928 bytes code, 48 bytes data, 24 bytes sbss — **100.0% byte-for-byte binary match**!) | **Completed** | `decomp-os-interrupt` |
| **STEP-019** | `2026-09-30T20:24:00+07:00` | Runtime / Recomp | Implemented Hollywood/Broadway MMIO intercept architecture (`mmio_external_read`/`mmio_external_write`), advancing PC runner execution past `__OSThreadInit` into EXI/SI subsystem (`Final PC: 0x805E7FF0`, 670,000+ native instructions executed) | **Completed** | `recomp-mmio-runner` |
| **STEP-020** | `2026-09-30T21:03:00+07:00` | Match | Decompiled core RVL-SDK error handling subsystem `src/OSError.c` (5 functions, 1,848 bytes code, 736 bytes data, 68 bytes bss — **100.0% byte-for-byte binary match across all 5 functions**!) | **Completed** | `decomp-os-error` |
| **STEP-021** | `2026-09-30T21:04:00+07:00` | Runtime / Recomp | Resolved DOL BSS loading ordering, configured Wii low-memory OS BI2/arena tables (`0x80003110`–`0x80003138`), and implemented Starlet/IOS IPC subsystem; runner advanced past EXI, SI, OS kernel, SC, NAND, DVD, VI, GX into *The Last Story* engine stages `0`–`7` | **Completed** | `recomp-ipc-bringup` |
| **STEP-022** | `2026-09-30T21:08:00+07:00` | Runtime / Recomp | Implemented Bluetooth HCI device handshake (`/dev/usb/oh1/57e/305`), advancing past WPAD & KPAD controller stacks; added graceful U8 archive header fallback for `ARCInitHandle` | **Completed** | `recomp-wpad-hbm` |
| **STEP-023** | `2026-09-30T21:23:00+07:00` | Runtime / Recomp | Emulated AI sample counter (`0xCD006C08`), DSP hardware mailboxes (`0xCC005000`–`0xCC005006`), and `AXReady` flag (`0x8087FFA0`); completed AI, AX audio mixer, and DSP init; PC Runner executed **over 267M cycles** without exceptions, entering *The Last Story* `main()` and OS thread scheduler idle loop | **Completed** | `recomp-game-mainloop` |
| **STEP-024** | *Up Next* | Match / Runtime | Decompile next RVL-SDK subsystem (`OSAlloc.c` / `OSMemory.c`) and implement alarm decrementer timer ticks to drive game thread dispatch in PC runner | **In Progress** | `decomp-os-alloc` |

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
* **ADR-009 (Error Subsystem & Exception Register Matching Codegen)**:
  - In `OSError.c`, `__OSActiveThreadQueue` is accessed via the low-memory address `*(OSThreadQueue*)0x800000DC` (`lis r5, 0x8000; lwz r9, 0xdc(r5)`).
  - Unrolled 32-element floating-point register zeroing in `OSSetErrorHandler` evaluates `*((u32*)&thread->context.fpr[i] + 1) = (u32)-1; *(u32*)&thread->context.fpr[i] = (u32)-1;` storing the +4 word offset before the 0 word offset to generate the exact loop with count 2 (`mtctr r0; bdnz`).
  - Floating-point status register masking uses `0x6005F8FF` (`lis r, 0x6006; subi r, r, 0x701`).
  - In `__OSUnhandledException`, checking `(context->srr1 & 2) == 0` for non-recoverable exceptions branches directly to `OSReport` without executing any error handlers.
* **ADR-010 (Wii Low-Memory & Starlet IPC Layout for Native Host Bringup)**:
  - In `host_runner.c`, zeroing the total DOL BSS span must strictly precede copying data sections into memory, preventing `.sdata` and `.sdata2` initialization vectors (such as `SwitchThreadCallback`) from being overwritten with zeroes.
  - Wii low memory requires BI2 / BootInfo tables at `0x80003110`–`0x80003138` (MEM1 Arena `0x8088A000`–`0x817F0000`, MEM2 Arena `0x90002000`–`0x93FE0000`, IPC buffer `0x93FE0000`–`0x94000000`).
  - Standard Starlet / IOS IPC endpoints (`/dev/stm`, `/dev/fs`, `/dev/es`, `/dev/di`, `/dev/net/kd/request`) return valid mock descriptors and immediate 0 (success) acknowledgments.
* **ADR-011 (Audio Interface & DSP Hardware Handshake Emulation)**:
  - AI sample counter register (`0xCD006C08` / `0xCC006C08`) must return an advancing sample counter on consecutive reads to satisfy hardware timer polling in `AIInit`.
  - DSP mailbox register `0xCC005004` (DSP-to-CPU) bit 15 (`0x8000`) indicates ready DSP mail; `0xCC005000` (CPU-to-DSP) bit 15 indicates consumed mail. Emulating this handshake allows `DSPInit` to complete synchronously without external DSP microcode interrupts.
  - Setting `AXReady` flag (`0x8087FFA0`) allows `AXInit` to advance past its DSP callback barrier into high-level audio system setup.
* **ADR-012 (Cache Subsystem & DMA Error Handling Codegen — `OSCache.c`)**:
  - `OSCache.c` comprises 19 core functions covering L1 instruction/data cache management (`DCEnable`, `DCInvalidateRange`, `DCFlushRange`, `DCStoreRange`/`fn_805ED1C0`, `DCFlushRangeNoSync`, `DCZeroRange`, `ICInvalidateRange`, `ICFlashInvalidate`, `ICEnable`), locked cache (`__LCEnable`/`fn_805ED2C0`, `LCEnable`/`fn_805ED390`, `LCDisable`, `LCStoreBlocks`/`fn_805ED400`, `LCStoreData`/`fn_805ED430`, chunked DMA `fn_805ED460`/`fn_805ED500`, queue wait `fn_805ED5A0`), DMA error exception dispatch (`DMAErrorHandler`), and cache bootstrap (`__OSCacheInit`).
  - Cache operations are written in compact naked inline PowerPC assembly (`nofralloc`), utilizing `dcbi`, `dcbf`, `dcbst`, `dcbz`, `icbi`, `dcbz_l`, and special-purpose register accesses (`HID0`, `HID2`, `DMA_U`, `DMA_L`, `DBATL3`, `DBATU3`).
  - `__OSCacheInit` checks whether L2 cache is disabled (`if (!(PPCMfl2cr() & 0x80000000))`) before performing L2CR reconfiguration and global cache invalidation; using inline `asm { sync }` prevents function call overhead and produces an exact 100.0% binary match with zero diffs.
* **ADR-013 (Video Interface VBlank / Retrace & Graphics Frame Queue Synchronization for Native PC Bringup)**:
  - In *The Last Story*, the graphics device subsystem (`atn_graphics_device.cpp`) implements a 5-entry circular frame queue at `0x807C6F68` paired with an `OSThreadQueue` at `0x807C6F60`.
  - When the primary game thread (`DefaultThread`, priority 16) completes frame drawing, it invokes `GXSetDrawDone()` and enters `OSSleepThread(&lbl_807C6F60)` waiting for vertical retrace / DrawDone interrupts.
  - In hardware, vertical blanking triggers `RetraceCallback` (`0x80072E08`) and `DrawDoneCallback` (`0x80072BDC`), which update queue indices (`0x807C6FB8` write index vs `0x807C6FBA` read index) and call `OSWakeupThread(&lbl_807C6F60)`.
  - In the native PC runner (`tls_runner.exe`), simulating vertical blank events upon reaching the scheduler idle loop (`while (RunQueueBits == 0)`) advances the graphics queue read pointer and restores `DefaultThread` to `RunQueue[16]`.
  - This breakthrough enables smooth, continuous 60 FPS frame iteration, advancing execution into Nintendo Wear 4 Revolution sound system (`nw4r::snd`) bootstrap and spawning background audio/DVD worker threads (`Thread 1` at priority 3 and `Thread 2` at priority 4).

