---
name: decomp-matching
description: Guidance and procedures for achieving byte-for-byte binary matching for Metrowerks CodeWarrior PowerPC C/C++ code.
---

# Decompilation & Binary Matching Skill

## Purpose
Guide the transformation of raw PowerPC assembly slices into 100% matched C/C++ source code targeting the Nintendo Wii (Broadway 750CL).

## Core Principles
1. **Understand Compiler Peculiarities (MWCC)**:
   - Order of variable declarations in local scope directly impacts stack frame layout (`r1` offsets).
   - Inlining behavior is governed by `-inline deferred` or `-inline auto` and function order within the translation unit.
   - Float constants are loaded from `.sdata2` via `r2` or `.rodata` via `r13` depending on threshold flags.
   - Loops: Check if `do { ... } while(...)` vs `while(...)` matches branch layout (`bdnz`, `bc`, `bne`).
2. **Workflow with Tools**:
   - Disassemble slice using `dtk`.
   - Run `m2c` or Ghidra decompiler on the function to generate draft C.
   - Format types, structs, and function signatures.
   - Build with Ninja/MWCC and inspect diff with `objdiff-cli` or `objdiff` GUI.
   - Iterate on code structure until diff reaches 0 bytes difference (100% match).
3. **Dual-Track Porting**:
   - Once a subsystem or file is decompiled and matched, isolate platform dependencies (`RVL-SDK` calls) with abstraction headers so that the code can later be re-compiled natively for PC (Windows/Linux) using modern C++ compilers (MSVC/Clang).
