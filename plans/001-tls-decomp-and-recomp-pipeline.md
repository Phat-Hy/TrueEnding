# Plan 001: The Last Story — Decompilation & Native PC Recomp Pipeline

> **Tracking ID**: `STEP-004`  
> **Timestamp**: `2026-09-29T20:53:00+07:00`  
> **Skill Phase**: `hs:plan`  
> **Status**: Ready for Execution  

---

## 1. Overview & Vision

This project establishes the reverse engineering, decompilation, and native PC recompilation infrastructure for **The Last Story** (Nintendo Wii, Mistwalker / AQ Interactive / feelplus).

### Key Goals:
1. **1:1 Matching Decompilation (Source Code)**:
   - Reconstruct the human-readable C/C++ source code matching the original `main.dol` (and any `.rel` modules) byte-for-byte using the Nintendo Wii Metrowerks CodeWarrior compiler.
2. **Native PC Portability (Recomp & HAL)**:
   - Provide the platform abstraction layer (HAL) replacing Wii RVL-SDK calls (`GX` graphics, `AX` audio, `WPAD`/`PAD` controls, `DVD` filesystem) with modern desktop APIs (DirectX 11/12 or Vulkan, SDL2, Cubeb/OpenAL).
   - Explore automated static recompilation via `DolRecomp` + `ModernGekko` runtime for rapid early PC gameplay testing while full matching decompilation progresses.

---

## 2. Technical Architecture & Pipeline

```
                     ┌────────────────────────┐
                     │   The Last Story ROM   │
                     │      (.rvz / .iso)     │
                     └───────────┬────────────┘
                                 │
                         [Extraction Tool]
                                 ▼
                     ┌────────────────────────┐
                     │      Disc Assets       │
                     │  • sys/main.dol        │
                     │  • files/*.rel (if any)│
                     │  • files/data/         │
                     └─────┬────────────┬─────┘
                           │            │
            [Decompilation Track]  [Static Recomp Track]
                           │            │
                           ▼            ▼
             ┌────────────────┐      ┌─────────────────┐
             │ dtk / Ghidra   │      │   DolRecomp     │
             │ Symbol Mapping │      │ PowerPC Lift to │
             │ Assembly Split │      │ C / LLVM IR     │
             └────────┬───────┘      └────────┬────────┘
                      │                       │
                      ▼                       │
             ┌────────────────┐               │
             │ CodeWarrior    │               │
             │ C/C++ Source   │               │
             │ objdiff match  │               │
             └────────┬───────┘               │
                      │                       │
                      └───────────┬───────────┘
                                  │
                                  ▼
                     ┌────────────────────────┐
                     │   Modern PC HAL Layer  │
                     │  • GX ➔ Vulkan / DX12  │
                     │  • AX ➔ SDL2 / Cubeb   │
                     │  • WPAD ➔ XInput / Pad │
                     │  • DVD ➔ Native FS     │
                     └───────────┬────────────┘
                                 │
                                 ▼
                     ┌────────────────────────┐
                     │ Native PC Executable   │
                     │ (Windows / Linux x64)  │
                     │ 60+ FPS, 4K, Ultrawide │
                     └────────────────────────┘
```

---

## 3. Concrete Milestones & Execution Phases

### Phase 1: Ingestion & Binary Discovery
* [x] Initialize project harness, agent system, and tracking journal (`PROJECT_JOURNAL.md`).
* [ ] Ingest `main.dol` and disc filesystem from dumped game image.
* [ ] Analyze executable header (text/data memory sections, entry points, memory map).
* [ ] Scan binary for compiler signatures (`MetroTRK`, CodeWarrior version strings, SDK build timestamp).
* [ ] Identify presence and structure of relocatable dynamic modules (`.rel` files).

### Phase 2: Decompilation Workspace Toolchain Setup
* [ ] Set up `dtk` (decomp-toolkit) for section splitting and disassembly.
* [ ] Configure build system (`configure.py`, `ninja`) and compiler environment (`mwcceppc.exe` under `wibo`/Wine).
* [ ] Map foundational Nintendo RVL-SDK symbols (`OS`, `VI`, `GX`, `AX`, `DVD`, `WPAD`) using cross-game databases.
* [ ] Establish automated binary diffing with `objdiff-cli`.

### Phase 3: Function Decompilation & Reverse Engineering
* [ ] Disassemble entry point (`__start`, `__init_hardware`) and core engine runtime.
* [ ] Analyze AQ Interactive / feelplus proprietary engine architecture (task scheduler, memory managers).
* [ ] Decompile and match foundational math, string, and utility modules.
* [ ] Incrementally replace assembly `.s` slices with matching `.c`/`.cpp` implementations.

### Phase 4: Native PC Runtime & Recomp Evaluation
* [ ] Configure `DolRecomp` config file with memory maps and known jump tables.
* [ ] Set up `ModernGekko` / PC runtime wrapper with SDL2 windowing and input handling.
* [ ] Develop or integrate GX-to-modern-graphics translation pipeline.

---

## 4. Verification & Quality Gates

* **Zero-Diff Matching**: Every decompiled function must be verified against original slices via `objdiff` prior to replacing `.s` sources.
* **Hermetic Builds**: Build process must be fully reproducible via `ninja`.
* **Copyright Hygiene**: No proprietary Nintendo SDK headers, proprietary game assets, or disc images may be checked into git.
