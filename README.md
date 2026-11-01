# Project The Maybe(Not) Last Story (`TrueEnding`)

<div align="center">

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](LICENSE)
[![Decomp Progress](https://img.shields.io/badge/Track%20A%20Code-99.30%25%20(7%2C425%2C512%20bytes)-brightgreen)](#current-progress-tracker)
[![Functions Matched](https://img.shields.io/badge/Functions%20Matched-18%2C054%20%2F%2018%2C155-blue)](#current-progress-tracker)
[![PC Runner](https://img.shields.io/badge/Track%20B%20PC%20Port-Chapter%201%20Interactive%20%2F%20Aurora%20P4%20(renderer)-green)](recomp/)
[![Target](https://img.shields.io/badge/Target-Wii%20USA%20(SLSEXJ)-red)](config/SLSEXJ/)

**A dual-track byte-matching decompilation and native 60 FPS PC port of *The Last Story* (Nintendo Wii, 2011).**

</div>

---

## Overview

Directed by **Hironobu Sakaguchi** (creator of *Final Fantasy*) with music by **Nobuo Uematsu**, ***The Last Story*** is a landmark action-JRPG developed by **Mistwalker** and **AQ Interactive (feelplus)**, published by Nintendo for the Wii in 2011 (North America 2012). The game pushed the Wii hardware to its absolute limits, featuring dynamic cover-based combat, real-time command tactics, cloth physics, and visual fidelity that frequently stressed the original console's hardware.

**Project TrueEnding** is dedicated to preserving and revitalizing this masterpiece through two complementary engineering tracks:

1. **Track A — Byte-Matching Decompilation**: Reconstructing the original C/C++ source code to achieve a **100.00% byte-for-byte binary match** against the retail Wii binary (`SLSEXJ`) using the official Metrowerks CodeWarrior 4.3 compiler (`Wii/1.0`).
2. **Track B — Native PC Port (Static Recompilation)**: Translating the game's PowerPC bytecode into native C/C++ running directly on modern x86-64 / ARM64 hardware with custom hardware runtime hooks, uncapped frame rates (60+ FPS), high-definition rendering, and modern controller/mouse-keyboard support—**without emulation overhead**.

> **Renderer direction (Track B): GX is Aurora-first, and the spike is decided by measurement.**
> [Aurora](https://github.com/encounter/aurora) (MIT, WebGPU/Dawn) — the GX implementation behind Nebula,
> Recharged and WiiCompiled (itself a static-recompilation port of a retail game, i.e. this project's exact
> analogue) — is the target renderer. All three spike criteria are cleared (it builds on this toolchain, it
> renders a captured frame, it services an EFB copy with the same bytes), and **aurora now runs inside the PC
> runner**: a C-ABI DLL built out of the spike, the runner's guest memory mapped at the guest's own addresses,
> and a live translated frame that agrees with the harness's replay of the *same* capture to **1.5 %**
> (`mean |d| 1.79`, ratio 0.985). What is left is wiring, not doubt, and it is scoped in
> [`DEEPSEEK_HARNESS_HANDOVER.md`](DEEPSEEK_HARNESS_HANDOVER.md) §5c.47: **P3** moves the five register-class
> adapters into the runner, **P4** re-records the gate references against aurora and keeps the layer behind
> `TLS_LAYER=1`. The hand-rolled D3D11 layer is frozen for *new* GX-semantics work and remains the **default
> renderer until P4**. Rationale and the alternatives excluded by measurement: [`AGENTS.md`](AGENTS.md) §1 and
> the dossier's §5c.46 **AP-AL / AP-AM / AP-AN** (spike) and **AP-AY / AP-AZ / AP-BA** (migration).

### Decompilation Methodology: Two-Tier Matching Architecture
To optimize execution velocity and preserve token budgets, Track A follows a targeted two-tier strategy:
- **Method B (Batch Assembly-C Pipeline)**: Applied to hardware SDK boilerplate & low-level drivers (Graphics `GX`, Audio `AX`/`AXFX`/`DSP`, Storage `ISFS`/`NAND`, Inter-Process `IPC`, Bluetooth `BTE`/`BTA`/`BTM`, Controller `WPAD`/`KPAD`, Debugger `TRK`, Runtime `MSL C/C++`). Rapidly locks down complete peripheral subsystems with 100.00% byte matches and zero regressions.
- **Method A (Deep C Algorithmic Matching)**: Applied to core game logic (Sakaguchi/Feelplus gameplay scripts, battle calculation engines, AI state machines, character physics) where semantic understanding is required to implement high-performance native PC hooks (Track B).

---

## Current Progress Tracker

> **Track A** recomputed from the objdiff report `build/SLSEXJ/report.json` (**2026-10-11**) with `python configure.py progress` — the report is newer than the last `src/` change, so these are the live numbers for the current tree.
> **Track B** status updated **2026-11-01** — see [Native Port Status](#native-port-status-track-b) for the gate references, the renderer migration phase and the measurements behind them.

### Track A — Byte-Matching Decompilation (from `build/SLSEXJ/report.json`)

| Metric | Target (`main.dol`) | Matched | Progress |
| :--- | :--- | :--- | :--- |
| **Code bytes** | 7,477,608 B | **7,425,512 B** | **99.30 % matched** (99.77 % fuzzy) |
| **Functions** | 18,155 | **18,054** | **99.44 %** |
| **Files linked** | 1,025 | **999** | **99.77 % linked** (report's own measure, over code) |
| **Data bytes** | 1,432,252 B | **800 B** | **0.06 %** — *this is the remaining gap* |

Reproduce with `python configure.py progress`. Note that [`docs/PROGRESS_LEDGER.json`](docs/PROGRESS_LEDGER.json)
still carries the **2026-10-09 milestone snapshot** (522 units / 9,123 functions / 3,789,580 B = 50.68 % code) it
was written for and has not been regenerated since: **the table above is current and the ledger is history.**

### Track B — Native PC Port

| Metric | Target | State |
| :--- | :--- | :--- |
| Sequence | `Boot → Stra → Titl → Game` | reached, deterministic |
| Chapter 1 | playable | interactive field; the game creates its own save (1 348 992 B + 29 344 B banner) |
| Gate | `pwsh tools/invariant.ps1` | **PASS attempt 1** (handover 1680; guest 2800 `54CB46BD…` 38.20 / 0.00 %; guest 3500 `A81F3E35…` 89.89 / 1.85 %) — on aurora, see `DEEPSEEK_HARNESS_HANDOVER.md` §5c.46 AP-BR |
| Renderer | Aurora | migration **P1-P4 closed**: aurora publishes every presented frame (3 086 / 3 086 blitted, 0 failures) and the gate's references are recorded on its picture; the hand-rolled layer stays as the per-frame fallback and `TLS_LAYER=1` |
| Recompiled DOL | 459 / 459 chunks | 100 % of the retail DOL's chunks run natively (472 objects linked); Track A's *decompilation* is 99.30 % of code bytes (data 0.06 %), which the port does not consume |
| Build | 472 objects | green |

*What is **not** measured:* how much of the game's content runs. The gate covers Boot → Title → Chapter 1
(the 3 520-frame scripted run), so a whole-game percentage would be invented, not measured — the honest
state is "Chapter 1 interactive, renderer migrated", plus the open items in §AP-BR §8 of the dossier.
The shipped binaries are verified: `logs_ap/gate_br5.log` **PASSes on attempt 1** (handover 1 680, both
references, exit 0), and the run before it (`gate_br4.log`) needed attempt 2 because its first attempt came
in at handover 1 380 on a freshly-freed machine with near-black pictures — that is what the retry loop
exists for, and only a 1 680 attempt counts. One known defect remains: a rare `std::terminate` inside the
DLL (~3 runs in 13) is instrumented but not yet fixed.

---

### Subsystem Status Breakdown

| Subsystem | Module | Functions | Code Bytes | Match Rate | Description |
| :--- | :--- | :---: | :---: | :---: | :--- |
| **NAND Flash Subsystem** | [`nand.c`](file:///src/nand.c) | 31 / 31 | 4,692 B | **100.00%** | File creation, deletion, read/write, permissions, directories |
| *(100% Complete — 6 Modules)* | [`NANDOpenClose.c`](file:///src/NANDOpenClose.c) | 10 / 10 | 1,988 B | **100.00%** | File handle allocation, sync/async open, close, and callbacks |
| | [`NANDCheck.c`](file:///src/NANDCheck.c) | 17 / 17 | 5,204 B | **100.00%** | Flash block verification, inode checks, allocation tables |
| | [`NANDCore.c`](file:///src/NANDCore.c) | 26 / 26 | 4,924 B | **100.00%** | Core NAND initialization (`NANDInit`), path conversion, status |
| | [`NANDLogging.c`](file:///src/NANDLogging.c) | 3 / 3 | 1,584 B | **100.00%** | Error log message queuing, async routine, shared descriptor |
| | [`nanderror.c`](file:///src/nanderror.c) | 3 / 3 | 748 B | **100.00%** | Automatic error messaging, screen notifications |
| **System Config (SC)** | [`scsystem.c`](file:///src/scsystem.c) | 25 / 25 | 6,684 B | **100.00%** | System configuration init (`SCInit`), reload conf, NVRAM |
| *(100% Complete — 2 Modules)* | [`scapi.c`](file:///src/scapi.c) | 66 / 66 | 13,560 B | **100.00%** | SC query API (`SCGetLanguage`, aspect ratio, sound mode, time) |
| **DVD Subsystem** | [`DVDFS.c`](file:///src/DVDFS.c) | 14 / 14 | 2,472 B | **100.00%** | File system initialization, directory and async read routines |
| *(100% Complete & Linked)* | [`dvd.c`](file:///src/dvd.c) | 50 / 50 | 19,156 B | **100.00%** | Core DVD command queuing, drive control, reset handling |
| | [`dvdqueue.c`](file:///src/dvdqueue.c) | 8 / 8 | 740 B | **100.00%** | Multi-priority circular doubly linked request queues |
| | [`dvderror.c`](file:///src/dvderror.c) | 13 / 13 | 2,628 B | **100.00%** | Error handling, NAND logging, disc ID verification |
| | [`dvdFatal.c`](file:///src/dvdFatal.c) | 5 / 5 | 356 B | **100.00%** | Fatal error reporting and multilingual screen presentation |
| | [`dvd_broadway.c`](file:///src/dvd_broadway.c) | 34 / 34 | 10,768 B | **100.00%** | Broadway low-level hardware interface (`DVDLow*`) |
| **Video Interface (VI)** | [`vi3in1.c`](file:///src/vi3in1.c) | 10 / 10 | 5,732 B | **100.00%** | Retrace interrupts, horizontal/vertical timing, DTV modes |
| *(100% Complete)* | [`vi.c`](file:///src/vi.c) | 32 / 32 | 12,544 B | **100.00%** | Video display filters, RGB imm modes, TV formats |
| **Audio Interface (AI)** | [`ai.c`](file:///src/ai.c) | 12 / 12 | 1,408 B | **100.00%** | Audio DMA timing, hardware interrupts, PLL sync |
| *(100% Complete)* | | | | | |
| **Audio Subsystem (AX)** | [`ax.c`](file:///src/ax.c) | 26 / 26 | 2,076 B | **100.00%** | Audio Executive initialization, mode control, auxiliary volumes |
| *(100% Complete — 8 Modules)* | [`AXAlloc.c`](file:///src/AXAlloc.c) | 4 / 4 | 1,280 B | **100.00%** | Voice allocation table, acquisition, and priority scheduling |
| | [`AXAux.c`](file:///src/AXAux.c) | 6 / 6 | 2,656 B | **100.00%** | Aux callbacks A/B, voice limits, and auxiliary loop processing |
| | [`AXCL.c`](file:///src/AXCL.c) | 18 / 18 | 1,424 B | **100.00%** | Command list buffer execution, DSP frame synchronization |
| | [`AXOut.c`](file:///src/AXOut.c) | 9 / 9 | 1,568 B | **100.00%** | Output sample buffer management, AI DMA audio callbacks |
| | [`AXVPB.c`](file:///src/AXVPB.c) | 5 / 5 | 2,608 B | **100.00%** | Voice Parameter Blocks, 3D volume attenuation, pitch curves |
| | [`AXSPB.c`](file:///src/AXSPB.c) | 7 / 7 | 1,304 B | **100.00%** | Sound Parameter Blocks, ADPCM decoding context, panning |
| | [`AXProf.c`](file:///src/AXProf.c) | 2 / 2 | 72 B | **100.00%** | Hardware audio DSP profiler and cycle measurement tracking |
| **Audio Effects (AXFX)** | [`AXFXReverbHi.c`](file:///src/AXFXReverbHi.c) | 3 / 3 | 140 B | **100.00%** | High-quality reverb initialization and parameter setup |
| *(100% Complete — 9 Modules)* | [`AXFXReverbHiExp.c`](file:///src/AXFXReverbHiExp.c) | 8 / 8 | 3,596 B | **100.00%** | Expanded high-quality reverb processing and early reflections |
| | [`AXFXReverbStdExp.c`](file:///src/AXFXReverbStdExp.c) | 10 / 10 | 3,772 B | **100.00%** | Standard expanded reverb effect processing |
| | [`AXFXDelay.c`](file:///src/AXFXDelay.c) | 2 / 2 | 680 B | **100.00%** | Multi-channel audio delay processing |
| | [`AXFXChorusExp.c`](file:///src/AXFXChorusExp.c) | 11 / 11 | 3,768 B | **100.00%** | Expanded stereo chorus and pitch modulation effect |
| | [`AXFXReverbHiExpDpl2.c`](file:///src/AXFXReverbHiExpDpl2.c) | 10 / 10 | 3,384 B | **100.00%** | Dolby Pro Logic II expanded high reverb processing |
| | [`AXFXReverbStd.c`](file:///src/AXFXReverbStd.c) | 7 / 7 | 2,816 B | **100.00%** | Standard reverb processing core routines |
| | [`AXFXReverbHiDpl2.c`](file:///src/AXFXReverbHiDpl2.c) | 7 / 7 | 2,896 B | **100.00%** | Dolby Pro Logic II high reverb processing core routines |
| | [`AXFXHooks.c`](file:///src/AXFXHooks.c) | 6 / 6 | 88 B | **100.00%** | Audio effects memory allocation hooks and coefficient access |
| **Digital Signal Processor (DSP)** | [`dsp.c`](file:///src/dsp.c) | 6 / 6 | 272 B | **100.00%** | Hardware DSP mailbox communications, interrupt control, init |
| *(100% Complete — 2 Modules)* | [`dsp_task.c`](file:///src/dsp_task.c) | 11 / 11 | 3,192 B | **100.00%** | DSP task scheduling queue, execution, context switching |
| **Graphics Accelerator (GX)** | [`GXInit.c`](file:///src/GXInit.c) | 4 / 4 | 4,180 B | **100.00%** | GX hardware initialization, revision check, FIFO setup |
| *(100% Complete — 10 Modules)* | [`GXFifo.c`](file:///src/GXFifo.c) | 14 / 14 | 2,808 B | **100.00%** | CPU and GP graphics command FIFO stream management |
| | [`GXAttr.c`](file:///src/GXAttr.c) | 12 / 12 | 3,364 B | **100.00%** | Vertex attribute descriptor and array formats |
| | [`GXMisc.c`](file:///src/GXMisc.c) | 21 / 21 | 2,184 B | **100.00%** | Miscellaneous GX state, tokens, draw sync, PE init |
| | [`GXGeometry.c`](file:///src/GXGeometry.c) | 10 / 10 | 1,836 B | **100.00%** | Primitive assembly, dirty state sync, vertex drawing |
| | [`GXFrameBuf.c`](file:///src/GXFrameBuf.c) | 14 / 14 | 2,608 B | **100.00%** | Framebuffer copying, disp copy, vertical scaling |
| | [`GXLight.c`](file:///src/GXLight.c) | 18 / 18 | 3,080 B | **100.00%** | Hardware lighting, color/pos/dir, spotlight, attenuation |
| | [`GXTexture.c`](file:///src/GXTexture.c) | 34 / 34 | 3,788 B | **100.00%** | Texture objects, TMEM tile cache, TLUT regions, LOD |
| | [`GXBump.c`](file:///src/GXBump.c) | 8 / 8 | 740 B | **100.00%** | Indirect texturing, bump mapping matrices and scales |
| | [`GXTev.c`](file:///src/GXTev.c) | 38 / 38 | 6,220 B | **100.00%** | Texture Environment, multi-stage color/alpha combiners |
| **Inter-Process Comm (IPC)** | [`ipc.c`](file:///src/ipc.c) | 10 / 10 | 1,136 B | **100.00%** | Hardware IPC registers, mailbox interrupts, Starlet comms |
| *(100% Complete — 3 Modules)* | [`ipcclt.c`](file:///src/ipcclt.c) | 23 / 23 | 6,844 B | **100.00%** | IOS client syscalls (`IOS_Open`, `IOS_Ioctl`, `IOS_Ioctlv`), heaps |
| | [`ipcprof.c`](file:///src/ipcprof.c) | 6 / 6 | 1,020 B | **100.00%** | IPC profiling, transaction queues, timing instrumentation |
| **Internal Storage FS (ISFS)** | [`isfs.c`](file:///src/isfs.c) | 27 / 27 | 5,620 B | **100.00%** | NAND Flash filesystem client API, async directory/file ops |
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
| **Remaining Track A work** | **data (not code)** | — | 800 B / 1,432,252 B | **0.06 %** | Code matching is at 99.30 % and every SDK module above is complete; what is left is the **data** section — 1.43 MB of tables, strings and assets that objdiff reports as 800 B matched |

---

## Native Port Status (Track B)

The port boots, reaches the title, hands over to `Game`, and **Chapter 1 (Gurgan Cave) is interactive**: the
game creates its own save (`savedata.dat` 1 348 992 B, `banner.bin` 29 344 B) and the field accepts input. The
renderer is mid-migration and that is the project's active axis.

> **Two tracks, sometimes two agents.** Track A (byte-matching decompilation) and Track B (this port) are
> code-disjoint but machine-, repo- and document-shared. The ownership table, the branches (`track-a` / `track-b`)
> and the rules that protect measurements — one runner, idle host, handover frame 1680 — are in
> [`CONTRIBUTING_TRACKS.md`](CONTRIBUTING_TRACKS.md); the Track A work order is
> [`docs/TRACK_A_HANDOFF.md`](docs/TRACK_A_HANDOFF.md) and its log is [`docs/TRACK_A_LOG.md`](docs/TRACK_A_LOG.md).
> Note the asymmetry, measured: Track A progress does **not** change this port's behaviour (the runner links no
> `src/` object) — it supplies **names** and, for a few functions, readable C.

| | state |
| :--- | :--- |
| Sequence | `Boot → Stra → Titl → Game`, deterministic |
| Default renderer | **Aurora** (P4 landed) — the hand-rolled D3D11 GX layer still draws every frame as the per-frame fallback, and `TLS_LAYER=1` forces it |
| Renderer target | **Aurora**, promoted: every presented frame is its 640×448 EFB readback (3 086 / 3 086 blitted, 0 failures) |
| Gate | `pwsh tools/invariant.ps1` — **PASS on attempt 1**: handover frame **1680**, guest 2800 `54CB46BD…` (38.20 / 0.00 %), guest 3500 `A81F3E35…` (89.89 / 1.85 %), save 1 348 992 / 29 344 |
| Build | green — 459 chunks / 472 objects, `python tools/recomp_harness.py build-runner` |

### What the layer work established, with numbers
Every item below is a measurement recorded in the dossier, not a plan.

- **The red rock is fixed** (§5c.46 AP-AT). The CMPR "glow" baseline compensation was rewriting the cave's
  256×256 rock atlas on upload — grey decode `(88.54, 85.39, 76.40)` uploaded as `(169.76, 80.21, 75.02)` with
  75.16 % red texels. Restricted to the ≤64×64 sprite class it was written for: guest 2800 red-dominant pixels
  **18.60 % → 0.00 %** against aurora's 0.00 %.
- **Per-stage TEV texcoord promoted** (AP-AU). A TEV stage now samples the coordinate `TEVORDER` names, which
  halved the remaining layer-vs-aurora difference at the content frame: `mean |d|` **11.20 → 4.83**.
- **The title plate is diagnosed, not fixed** (AP-AZ). The plate is the guest's own 64×64 **IA8 mask** drawn at
  full strength — `frame = 255 × mask.a` predicts **90.68** against a measured **90.43**, while Dolphin's own
  frame of the same screen is mean **203.98**. The mask decodes bit-exactly against Dolphin's texture dump, so
  what is wrong is the multi-stage TEV composite itself — the class the migration retires.
- **The "black cave" was a measurement artefact, not depth state** (AP-AZ). The runner presents a guest frame in
  two halves and the aurora tap is per present: every other half carries **0 draws and 3 copies**, so a range
  ending on one reads back black by construction. Ending on a draw-bearing half renders a real 640×448 frame —
  see [the live readback](docs/evidence/ba_aur_live_2799.png).

### Migration phases (dossier §5c.47)
| phase | state |
| :--- | :--- |
| **P1** — one frame through aurora inside the runner | **boundary built and measured**: DLL + C ABI + guest-memory mapping + live FIFO consumption (18 EFB copies, 255+ draws) + a 640×448 RGBA8 readback agreeing with the harness replay of the same capture to 1.5 %. The *equality* test is still open until both present halves are fed as one aurora frame. |
| **P2** — the copy model is safe | **closed.** Host audit: the five staging addresses appear only in comments. Guest audit (new `TLS_READ_WATCH`): **zero** guest readers across 3 274 015 059 watched reads, with a positive control that lists **64** arena readers. Aurora's GPU-side shadow-copy model is therefore usable as-is. |
| **P3** — the five register classes live in the runner | not started (next) |
| **P4** — promotion and gate re-record | not started (after P3) |

Known open items: aurora currently **hangs at exit** after `aurora_shutdown()` (end such runs with `Stop-Process`
and rebuild only afterwards); the aurora frame's residual content gap; the water's sampled content; the 128×128
glow residue.

### Reproducing a measurement
```bash
python tools/recomp_harness.py build-runner    # 471 objects, ~1 s incremental
pwsh tools/invariant.ps1                       # gate: PASS attempt 1, handover 1680
```
Rules that cost runs, so they are rules: every launch passes `--window --minimized` (never steal focus); one
runner at a time; delete `SaveData\title\00010000\534c5345\data\savedata.dat`, `banner.bin` and
`SaveData\tmp\savedata.dat` before any progression run; and **a loaded host is not evidence** — the handover
frame is the load fingerprint, so a gate run whose handover frame is not 1680 is void, not a regression.
Headless-safe instruments (all inert unless set) live in `recomp/` and are listed in the dossier.

---

## Repository Structure

```
├── config/                      # Decompilation maps, symbol lists, and splits
│   ├── splits.txt               # Module boundaries and section definitions
│   └── symbols.txt              # Mapped functions, vtables, and data labels
├── docs/                        # Progress ledgers, architecture plans, worklogs
│   ├── PROGRESS_LEDGER.json     # Machine-readable per-unit progress ledger
│   ├── ODYSSEUS_WORKLOG.md      # Detailed engineering trajectory and session log
│   ├── evidence/                # Reference frames and before/after pictures cited by the dossier
│   └── dolrecomp/               # cpu-core.patch: our delta against the vendored recompiler clone
├── include/                     # Public and SDK headers
│   └── revolution/              # Nintendo RVL-SDK reverse-engineered headers
├── recomp/                      # Track B: Native PC Static Recompilation Runtime
│   ├── host_runner.c            # Host loop, guest memory map, MMIO, memory watch hooks
│   ├── replacements.c           # High-performance host function overrides
│   ├── gx_pipeline.c            # GX command processor: the FIFO -> draw batches, EFB copies
│   ├── gfx_d3d11.c              # The hand-rolled D3D11 GX layer (frozen; default until P4)
│   ├── gfx_backend.c            # Backend seam
│   ├── aurora_live_host.c       # Aurora live path (TLS_AURORA): load the DLL, tap, read back
│   ├── gx_fifo_capture.c        # Byte-exact FIFO recorder the aurora replay consumes
│   └── tls_debug.c              # Guest-side probes and dumps
├── src/                         # Track A: Byte-matched C source code
├── tools/                       # Build scripts, analysis, and the aurora spike tree
│   ├── recomp_harness.py        # Recompilation harness orchestrator (build-runner)
│   ├── invariant.ps1            # The progression gate: the definition of "still works"
│   ├── aurora_spike/            # Aurora replay harness + the C-ABI DLL the runner loads
│   ├── DolRecomp/               # Vendored recompiler/CPU core (nested clone; see docs/dolrecomp)
│   └── diff_helper.py           # Interactive assembly diffing tool
├── AGENTS.md                    # Project directives (Aurora-first renderer strategy, rules)
├── DEEPSEEK_HARNESS_HANDOVER.md # The engineering dossier: every measurement, every falsification
├── configure.py                 # Project build generator (Ninja / MWCC)
└── README.md                    # Project documentation
```

---

## Building and Verification

### Prerequisites

- **Python 3.10+**
- **Ninja** build system (`tools/w64devkit/bin/ninja.exe` included on Windows)
- **Metrowerks CodeWarrior for Wii** (MWCC 4.3 build 145) placed in `build/compilers/Wii/1.0/`
- **MinGW GCC** for the Track B runner (`tools/w64devkit/`, used by `tools/recomp_harness.py`)
- **MSVC** (Build Tools) only if you want the aurora live DLL — it is built from the spike tree, not the runner

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

```bash
# Build the native PC runner (471 objects; incremental rebuilds are ~1 s)
python tools/recomp_harness.py build-runner

# Run it. --window --minimized is MANDATORY for every launch: the game window must never
# steal focus, and the screenshot the gate hashes is captured before Present, so a minimised
# window changes nothing about it.
./build/recomp/tls_runner.exe --window --minimized --frames 3520

# Verify the progression invariant (the definition of "still works")
pwsh tools/invariant.ps1
```

The gate expects **PASS on attempt 1** at handover frame **1680**, guest 2800 `B4646917…`, guest 3500
`22B1CE31…` and a save of 1 348 992 / 29 344 B. Delete the three save files named above before a progression
run, and check the handover frame before trusting any measurement: a different handover frame means the host is
loaded, not that the code regressed.

The aurora live path is opt-in and inert by default: `TLS_AURORA=1` (plus `TLS_AURORA_FROM`/`TLS_AURORA_TO`)
loads the DLL from the spike tree and renders the fed frames offscreen — see
[`docs/dolrecomp/README.md`](docs/dolrecomp/README.md) for the vendored-core patch rule and the dossier for the
instrument list.

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
