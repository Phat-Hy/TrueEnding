# Project The Maybe(Not) Last Story (`TrueEnding`)

<div align="center">

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](LICENSE)
[![Decomp Progress](https://img.shields.io/badge/Track%20A%20Decomp-1.18%25%20(88%2C212%20bytes)-brightgreen)](docs/PROGRESS_LEDGER.json)
[![Functions Matched](https://img.shields.io/badge/Functions%20Matched-369%20%2F%2018%2C120-blue)](docs/PROGRESS_LEDGER.json)
[![PC Runner](https://img.shields.io/badge/Track%20B%20PC%20Port-Bootable%20%2F%2060%20FPS-green)](recomp/)
[![Target](https://img.shields.io/badge/Target-Wii%20USA%20(SLSEXJ)-red)](config/SLSEXJ/)

**A dual-track byte-matching decompilation and native 60 FPS PC port of *The Last Story* (Nintendo Wii, 2011).**

</div>

---

## Overview

Directed by **Hironobu Sakaguchi** (creator of *Final Fantasy*) with music by **Nobuo Uematsu**, ***The Last Story*** is a landmark action-JRPG developed by **Mistwalker** and **AQ Interactive (feelplus)**, published by Nintendo for the Wii in 2011 (North America 2012). The game pushed the Wii hardware to its absolute limits, featuring dynamic cover-based combat, real-time command tactics, cloth physics, and visual fidelity that frequently stressed the original console's hardware.

**Project TrueEnding** is dedicated to preserving and revitalizing this masterpiece through two complementary engineering tracks:

1. **Track A — Byte-Matching Decompilation**: Reconstructing the original C/C++ source code to achieve a **100.00% byte-for-byte binary match** against the retail Wii binary (`SLSEXJ`) using the official Metrowerks CodeWarrior 4.3 compiler (`Wii/1.0`).
2. **Track B — Native PC Port (Static Recompilation)**: Translating the game's PowerPC bytecode into native C/C++ running directly on modern x86-64 / ARM64 hardware with custom hardware runtime hooks, uncapped frame rates (60+ FPS), high-definition rendering, and modern controller/mouse-keyboard support—**without emulation overhead**.

---

## Current Progress Tracker

> Updated as of **October 2026** — Milestone **>1.00% Overall Code Match** Surpassed!

### Overall Metrics

| Metric | Target (`main.dol`) | Matched | Progress |
| :--- | :--- | :--- | :--- |
| **Total Code Bytes** | 7,477,324 bytes | **88,212 bytes** | **1.18%** |
| **Total Functions** | 18,120 functions | **369 functions** | **2.04%** |
| **Fully Matched Modules** | ~410 modules | **33 modules** | **8.05%** |
| **Overall Module Match Rate** | — | **100.00%** | (Zero byte mismatches across matched modules) |
| **PC Runner Status** | Boot & Loop | **60 FPS Continuous Loop** | Boot, Subsystems Init, Resource Loader, 0 Exceptions |

---

### Subsystem Status Breakdown

| Subsystem | Module | Functions | Code Bytes | Match Rate | Description |
| :--- | :--- | :---: | :---: | :---: | :--- |
| **DVD Subsystem** | [`DVDFS.c`](file:///src/DVDFS.c) | 14 / 14 | 2,472 B | **100.00%** | File system initialization, directory and async read routines |
| *(100% Complete)* | [`dvd.c`](file:///src/dvd.c) | 50 / 50 | 19,156 B | **100.00%** | Core DVD command queuing, drive control, reset handling |
| | [`dvdqueue.c`](file:///src/dvdqueue.c) | 8 / 8 | 740 B | **100.00%** | Multi-priority circular doubly linked request queues |
| | [`dvderror.c`](file:///src/dvderror.c) | 13 / 13 | 2,628 B | **100.00%** | Error handling, NAND logging, disc ID verification |
| | [`dvdFatal.c`](file:///src/dvdFatal.c) | 5 / 5 | 356 B | **100.00%** | Fatal error reporting and multilingual screen presentation |
| | [`dvd_broadway.c`](file:///src/dvd_broadway.c) | 34 / 34 | 10,768 B | **100.00%** | Broadway low-level hardware interface (`DVDLow*`) |
| **Video Interface (VI)** | [`vi3in1.c`](file:///src/vi3in1.c) | 10 / 10 | 5,732 B | **100.00%** | Retrace interrupts, horizontal/vertical timing, DTV modes |
| *(100% Complete)* | [`vi.c`](file:///src/vi.c) | 32 / 32 | 12,544 B | **100.00%** | Video display filters, RGB imm modes, TV formats |
| **Audio Interface (AI)** | [`ai.c`](file:///src/ai.c) | 12 / 12 | 1,408 B | **100.00%** | Audio DMA timing, hardware interrupts, PLL sync |
| *(100% Complete)* | | | | | |
| **Controller (PAD)** | [`pad.c`](file:///src/pad.c) | 1 / 1 | 92 B | **100.00%** | Calibration flag control (`__PADDisableRecalibration`) |
| *(100% Complete)* | | | | | |
| **Math & Matrix** | [`PSMTX.c`](file:///src/PSMTX.c) | 7 / 7 | 1,280 B | **100.00%** | Paired-single hardware accelerated matrix operations |
| *(100% Complete)* | [`mtx.c`](file:///src/mtx.c) | 13 / 13 | 1,984 B | **100.00%** | Standard 3x4 transform matrices, rotations, projections |
| | [`mtx44.c`](file:///src/mtx44.c) | 3 / 3 | 648 B | **100.00%** | 4x4 perspective and projection matrix multiplication |
| | [`vec.c`](file:///src/vec.c) | 5 / 5 | 288 B | **100.00%** | 3D vector operations (normalization, dot/cross products) |
| | [`quat.c`](file:///src/quat.c) | 5 / 5 | 1,220 B | **100.00%** | Quaternion arithmetic, SLERP interpolation, rotations |
| **OS Core Runtime** | [`OSAlarm.c`](file:///src/OSAlarm.c) | 13 / 13 | 3,112 B | **100.00%** | Software timer alarms and periodic handlers |
| | [`OSArena.c`](file:///src/OSArena.c) | 13 / 13 | 1,180 B | **100.00%** | MEM1/MEM2 arena memory bounds management |
| | [`OSCache.c`](file:///src/OSCache.c) | 19 / 19 | 2,752 B | **100.00%** | L1 instruction/data cache and locked L2 cache management |
| | [`OSContext.c`](file:///src/OSContext.c) | 15 / 15 | 2,840 B | **100.00%** | Hardware CPU register context save, restore, and dumping |
| | [`OSError.c`](file:///src/OSError.c) | 5 / 5 | 3,096 B | **100.00%** | Fatal panic handlers, exception printing, assertion system |
| | [`OSInterrupt.c`](file:///src/OSInterrupt.c) | 11 / 11 | 2,348 B | **100.00%** | Hardware interrupt masking, arbitration, dispatch |
| | [`OSThread.c`](file:///src/OSThread.c) | 24 / 24 | 6,364 B | **100.00%** | Preemptive multithreading scheduler, priority queues, mutex |
| | [`OSTime.c`](file:///src/OSTime.c) | 6 / 6 | 1,828 B | **100.00%** | Timebase ticks, calendar conversion, leap year computation |
| | [`OSPlayTime.c`](file:///src/OSPlayTime.c) | 13 / 13 | 2,120 B | **100.00%** | System parental control play time limits and tracking |
| | [`OSTitle.c`](file:///src/OSTitle.c) | 1 / 1 | 96 B | **100.00%** | Title boot identification |
| | [`OSReset.c`](file:///src/OSReset.c) | 15 / 15 | 6,244 B | **100.00%** | Cold/warm reset, state flags, shutdown notifications |
| | [`OSIpc.c`](file:///src/OSIpc.c) | 5 / 5 | 1,848 B | **100.00%** | Inter-process communication with Starlet / IOS coprocessor |
| **C Runtime (MSL)** | [`memcpy.c`](file:///src/memcpy.c) | 1 / 1 | 668 B | **100.00%** | Optimized block memory copy |
| | [`memset.c`](file:///src/memset.c) | 2 / 2 | 228 B | **100.00%** | Optimized block memory fill |
| | [`global_destructor_chain.c`](file:///src/global_destructor_chain.c) | 2 / 2 | 96 B | **100.00%** | C++ global object teardown |
| | [`__init_hardware.c`](file:///src/__init_hardware.c) | 2 / 2 | 100 B | **100.00%** | Early hardware initialization vector |
| | [`init_user.c`](file:///src/init_user.c) | 1 / 1 | 28 B | **100.00%** | CRT user initialization stub |
| **Audio Subsystem (AX)** | `ax.c` | In Progress | ~16 KB | Planning | Audio Executive mixing and DSP command processing |
| **Graphics Subsystem (GX)**| `gx.c` | Next | ~45 KB | Planning | Flipper/Hollywood GPU command lists, textures, lighting |

---

## Repository Structure

```
├── config/                      # Decompilation maps, symbol lists, and splits
│   ├── splits.txt               # Module boundaries and section definitions
│   └── symbols.txt              # Mapped functions, vtables, and data labels
├── docs/                        # Progress ledgers, architecture plans, worklogs
│   ├── PROGRESS_LEDGER.json     # Machine-readable per-unit progress ledger
│   └── ODYSSEUS_WORKLOG.md      # Detailed engineering trajectory and session log
├── include/                     # Public and SDK headers
│   └── revolution/              # Nintendo RVL-SDK reverse-engineered headers
├── recomp/                      # Track B: Native PC Static Recompilation Runtime
│   ├── host_runner.c            # Native 60 FPS host loop, memory map, MMIO
│   ├── guest_context.h          # PowerPC 750CL state register structures
│   ├── replacements.c           # High-performance host function overrides
│   └── replacements.h           # Dispatch definitions
├── src/                         # Track A: Byte-matched C source code
├── tools/                       # Build scripts, binary analysis, diff helpers
│   ├── diff_helper.py           # Interactive assembly diffing tool
│   ├── recomp_harness.py        # Recompilation harness orchestrator
│   └── objdiff-cli.exe          # Binary matching assessment utility
├── configure.py                 # Project build generator (Ninja / MWCC)
└── README.md                    # Project documentation
```

---

## Building and Verification

### Prerequisites

- **Python 3.10+**
- **Ninja** build system (`tools/w64devkit/bin/ninja.exe` included on Windows)
- **Metrowerks CodeWarrior for Wii** (MWCC 4.3 build 145) placed in `build/compilers/Wii/1.0/`
- **A modern C/C++ compiler** (Clang, GCC, or MSVC) for the Track B native PC runner

### 1. Track A — Decompilation Matching

To generate build files and check progress:
```bash
# Configure the build system
python configure.py

# Build all matching objects and generate the objdiff report
ninja build/SLSEXJ/report.json

# View overall progress report
python configure.py progress
```

To compare a specific function against the original binary:
```bash
python tools/diff_helper.py <function_name> -a
```

### 2. Track B — Native PC Recompilation Runner

To build and run the native PC port:
```bash
# Build the native PC runner
python tools/recomp_harness.py build-runner

# Execute the runner (runs continuous 60 FPS loop)
./build/recomp/tls_runner.exe
```

---

## Bring Your Own Assets (BYOA) Policy

> [!IMPORTANT]
> **This repository contains NO copyrighted game assets, proprietary ROMs, or compiled Nintendo binaries.**
> 
> To build and run either track, you must legally own a physical or digital copy of *The Last Story* and dump your own original game disc (`SLSEXJ` for USA, or `SLSP01` for Europe).
> Extract `sys/main.dol` and place it in the `orig/` directory to begin.

---

## Acknowledgements & Community References

- **Mistwalker & AQ Interactive (feelplus)**: For creating one of the finest and most ambitious JRPGs of the seventh console generation.
- **Dolphin Emulator Team**: For indispensable documentation of the GameCube and Wii hardware architecture.
- **Decompilation Community Toolkit ([dtk](https://github.com/encounter/dtk) & [objdiff](https://github.com/encounter/objdiff))**: Powerful open-source tools driving modern byte-matching decompilation.
- **[`vs-sr-dev`](https://github.com/vs-sr-dev)**: For pioneering reverse-engineering research on *The Last Story*'s internal **LastWorld** engine in [`wii-thelaststory-re`](https://github.com/vs-sr-dev/wii-thelaststory-re) and the European static recompilation study [`pc-thelaststory`](https://github.com/vs-sr-dev/pc-thelaststory).

---

## License

This project is licensed under the **[MIT License](LICENSE)**. See the `LICENSE` file for details.
