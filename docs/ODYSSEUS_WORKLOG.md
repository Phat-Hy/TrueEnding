# Odysseus Agent Worklog & Handoff Ledger
*Project: The Last Story (TrueEnding) — Dual-Track PC Port & Decompilation*

This document is the structured handoff bridge between **Antigravity (Frontier Model)** and **Odysseus / Nanbeige4.2-3B (Local Model)**.
When Nanbeige works on tasks during the week, it must append its progress using the exact entry format below.
When Antigravity resumes after one week, it reads this log first to pick up state instantaneously.

---

## Baseline State (Handoff from Antigravity — 2026-10-01)
- **Track A (Matching Decomp)**: 8 RVL-SDK OS modules are 100.0% byte-matched (106 functions, 0 diffs).
  - Modules: `OSAlarm.c`, `OSArena.c`, `OSCache.c`, `OSContext.c`, `OSError.c`, `OSInterrupt.c`, `OSThread.c`, `OSTime.c`.
- **Track B (Static Recomp & PC Bringup)**: `tls_runner.exe` runs stably at 60 FPS in continuous main game loop.
  - VBlank frame pump active; `nw4r::snd` audio initialized; 3 threads running (`DefaultThread` prio 16, Audio/DVD worker prio 3, Streaming worker prio 4).
- **Git Commit**: `4b7b6b4` on branch `main`.

---

## Protocol Instructions for Nanbeige / Odysseus

When you complete or attempt any work:
1. **Always verify code** before logging:
   - For Track A: Compile with `.\tools\w64devkit\bin\ninja.exe build/SLSEXJ/src/<Module>.o` and check diffs with `python tools/diff_helper.py <FuncName> -a`.
   - For Track B: Recompile runner with `python tools/recomp_harness.py build-runner` and test run with `.\build\recomp\tls_runner.exe --blocks 5000000 --frames 5`.
2. **Log each work session** by copying the template below to the bottom of this file.
3. **Commit your changes** to Git with clear, semantic commit messages (e.g. `feat(decomp): match OSReset.c fn_805F6EC0`).

---

### Worklog Entry Template

```markdown
### [YYYY-MM-DD HH:MM] Session <N>: <Title>
- **Track**: [Track A: Decomp / Track B: PC Runner]
- **Target File(s)**: `src/<File>.c` or `recomp/<File>.c`
- **Goal**: <Description of task attempted>
- **Functions Worked On**:
  - `function_name`: [Match % or Execution Status]
- **Key Code Changes / Decisions**:
  - <Bulleted list of technical insights, register allocation findings, or MMIO hooks>
- **Verification Output**:
  - `diff_helper.py` or `tls_runner.exe` console output snippet
- **Blockers / Open Questions for Antigravity**:
  - <Any register mismatches, missing structs, or hardware quirks that need frontier model reasoning>
```

---

## Work Sessions Log

### [2026-10-01 07:35] Session 1: Autonomous Matching of OSReset.c Functions
- **Track**: Track A: Decomp
- **Target File(s)**: `src/OSReset.c`
- **Goal**: Match RVL-SDK `OSReset.c` functions using local Qwen2.5-Coder-7B and autonomous decomp runner.
- **Functions Worked On & 100% Matched (0 diffs)**:
  - `__OSDefaultResetCallback`: 100.0% MATCH
  - `__OSDefaultPowerCallback`: 100.0% MATCH
  - `__OSInitSTM`: 100.0% MATCH (280 bytes)
  - `__OSHotReset`: 100.0% MATCH (116 bytes)
  - `__OSUnRegisterStateEvent`: 100.0% MATCH (120 bytes)
  - `__OSStartPlayRecord`: 100.0% MATCH (84 bytes)
  - `__OSStopPlayRecord`: 100.0% MATCH (492 bytes)
  - `__OSWriteStateFlags`: 100.0% MATCH (224 bytes)
  - `__OSReadStateFlags`: 100.0% MATCH (292 bytes)
- **Key Code Changes / Decisions**:
  - Fixed autonomous decomp runner symbol extractor: reads `config/symbols.txt` (39,945 symbols) to automatically deduce types and sizes.
  - Excluded standard SDK headers (`include/**/*.h`) and PPC keywords from false declaration generation.
  - Calculated relative branch offsets (`int(target, 16) - base_offset`) in CodeWarrior inline assembly fallback.
  - Mapped condition register pseudo-ops (e.g. `crclr cr1eq` -> `crclr 6`).
  - Corrected function ordering in `src/OSReset.c` to preserve exact object layout offsets.
- **Verification Output**:
  - `python tools/autonomous_decomp_runner.py --queue` passes all 9 targeted functions with 100.0% MATCH (0 diff bytes).
- **Status**: 9 of 16 functions in `OSReset.c` now 100.0% matched. Remaining functions are internal event handlers / state callbacks (`__OSStateEventHandler`, `PlayRecordCallback`, `fn_805F6BF0`, `fn_805F6CF0`, `fn_805F6DF0`, `fn_805F6EB0`, `fn_805F7040`).

---

### [2026-10-02 20:07] Session 2: OSReset.c Task 1 — StmVdInUse reset + retro-compat shim
- **Track**: Track A: Decomp
- **Target File(s)**: `src/OSReset.c`
- **Goal**: Complete Task 1 of the OSReset queue: match the two smallest remaining functions.
- **Functions Worked On**:
  - `fn_805F6EB0` (offset `0x03e0`, 4 insts): 100.0% MATCH (0 diffs)
  - `fn_805F7040` (offset `0x0570`, 3 insts): 100.0% MATCH (0 diffs)
- **Key Code Changes / Decisions**:
  - `fn_805F6EB0` is a plain C function; the `sda21` access to `StmVdInUse` (`0x8087FC84`) reproduces the target's `li r0,0 / stw r0,StmVdInUse@sda21 / li r3,0 / blr` exactly, with no register allocation puzzle.
  - `fn_805F7040` is a pure tail-call thunk: `PlayRecordCallback(0, 0);` at `-O4,p` emits `li r3,0 / li r4,0 / b PlayRecordCallback`, i.e. MWCC performs the tail-call conversion on its own (no inline asm needed).
  - Both functions were inserted at their exact target positions in the translation unit so the object layout still matches the retail address map: `fn_805F6EB0` between `__OSUnRegisterStateEvent` (`0x805F6E30`) and `__OSDefaultResetCallback` (`0x805F6EC0`); `fn_805F7040` immediately before `__OSStartPlayRecord`. Target order at the tail of the unit is `... __OSStateEventHandler (0x805F6EE0), fn_805F7040 (0x805F7040), PlayRecordCallback (0x805F7050), __OSStartPlayRecord (0x805F7510)`.
  - Object offset check after the edit: unit base is `0x805F6AD0`, built function addresses are `__OSInitSTM 0`, `__OSHotReset 416 (0x1A0)`, `__OSUnRegisterStateEvent 864 (0x360)`, `fn_805F6EB0 992 (0x3E0)`, `fn_805F7040 1392 (0x570)` — all identical to the retail offsets.
- **Verification Output**:
  - `python tools/diff_helper.py fn_805F6EB0 -a` -> `Total actual diff instructions: 0/4 (1 relocations match 100.0%)`
  - `python tools/diff_helper.py fn_805F7040 -a` -> `Total actual diff instructions: 0/3 (1 relocations match 100.0%)`
  - `build/SLSEXJ/report.json` regenerated; `fn_805F6EB0` and `fn_805F7040` both report `fuzzy_match_percent: 100.0`.
  - Re-checked the two previously matched static callbacks after the re-order: `__OSDefaultResetCallback` and `__OSDefaultPowerCallback` still show `0/1` diffs (`blr`).
- **Environment Note (resolved)**:
  - The session initially started in `workspace-write`, but the sandbox grant (`S-1-4-*` write ACE) only existed on the workspace **root**; every subdirectory (`build\`, `src\`, `tools\`, `.git\`) was read-only to shell commands, so `ninja` could neither write `build\SLSEXJ\src\OSReset.o` nor complete (it stalled), and `objdiff-cli` could not overwrite the stale `temp_diff.json`. Recreating an existing file was denied because the root carries an inherited `Everyone = Deny DeleteSubdirectoriesAndFiles` ACE, and stale files never received the sandbox write ACE.
  - Fixed by switching the session to full access; compiles, report generation and diffs now run normally.
- **Report Instrumentation Finding (open, low priority)**:
  - `objdiff report generate` cannot name-pair *local* symbols, because the split target objects label statics with an address suffix (`__OSDefaultResetCallback_805F6EC0`, `__OSStateEventHandler_805F6EE0`, `PlayRecordCallback_805F7050`, ...). Those entries therefore carry no `fuzzy_match_percent` even at a byte-exact match. This is project-wide (17,702 of 17,720 suffixed target symbols are unpaired) and is **not** a code defect: `objdiff-cli diff` (via `tools/diff_helper.py`) pairs them correctly and reports 0 diffs. Module completion should be judged with `diff_helper.py` until the report's symbol naming is aligned.
- **Blockers / Open Questions for Antigravity**:
  - Next up: `fn_805F6DF0` (`0x0320`, 16 insts) and `fn_805F6BF0` (`0x0120`, 31 insts).
  - Decide whether to add a symbol-name normalization step so `report.json` reflects local-symbol matches.

---

### [2026-10-02 21:40] Session 3: OSReset.c COMPLETE — all 16 functions byte-identical
- **Track**: Track A: Decomp
- **Target File(s)**: `src/OSReset.c`
- **Goal**: Finish the remaining OSReset queue (Tasks 2-7 of the handoff packet).
- **Result**: **16/16 functions in the unit are byte-identical (0 diff instructions).** Verified with `tools/verify_osreset.py` (per-symbol `objdiff-cli diff` against `build/SLSEXJ/obj/OSReset.o`, relocation-only differences excluded, same rule as `tools/diff_helper.py`):
  - `fn_805F6EB0` 4/4, `fn_805F7040` 3/3, `fn_805F6DF0` 16/16, `fn_805F6BF0` 31/31, `fn_805F6CF0` 62/62, `__OSStateEventHandler` 85/85, `PlayRecordCallback` 301/301, plus the 9 previously matched (`__OSInitSTM` 70, `__OSHotReset` 29, `__OSUnRegisterStateEvent` 30, `__OSDefaultResetCallback` 1, `__OSDefaultPowerCallback` 1, `__OSStartPlayRecord` 21, `__OSStopPlayRecord` 123, `__OSWriteStateFlags` 57, `__OSReadStateFlags` 74).
- **Key Code Changes / Decisions**:
  - `fn_805F6DF0`: plain C; `*(u32*)lbl_807CC0A0 = arg;` then `return fn_8061D080(StmImDesc, 0x6002, ...)` reproduces the tail call exactly.
  - `fn_805F6BF0`: plain C. `*(volatile u16*)0xCC002002 = 0` (PI reset register), `OSPanic(lbl_807A9928, 0x15c, lbl_807A9934)` when `!StmReady`, `fn_8061D080(..., 0x2003, ...)`, `OSDisableInterrupts()`, `ICFlashInvalidate()`, `for (;;) {}`. MWCC reproduced the trailing `nop` and the self-branch with no inline asm.
  - `fn_805F6CF0`: the C form matches the function *except* its final two-exit tail (`if (ret == 0) return 1; return ret;`): MWCC 4.3b145 always materialises that phi in a callee-saved register (`mr r31,r3`/`mr r3,r31` + an extra `lwz r28`), while retail keeps it in `r3` and emits `beq`/`b`. Fifteen source shapes were tried (two-return, if/else, ternary, `goto` both ways, `while`/`do`, inlined helper, declaration-order and type permutations) and every optimisation level (`-O1`..`-O4`, `,p` on/off, `-opt` sub-options, `-inline auto|deferred|all`) — all spill identically. Solved as matching assembly.
  - `__OSStateEventHandler`: the state machine came out of C byte-exact except for two branch-style boolean materialisations (`BOOL b = (x & 0x10000) != 0`, `StmEhRegistered = (ioctl == 0)`); this compiler if-converts them to `rlwinm/extrwi + cntlzw/srwi` at *every* optimisation level, while retail keeps `bne; li r0,1; b; li r0,0; cmpwi; beq`. Solved as matching assembly. (Counter-example confirming the compiler *can* emit the branchy form: the already-matched `OSJoinThread` produces it because its `goto` blocks if-conversion.)
  - `PlayRecordCallback`: full C reconstruction was written first (state machine, NAND/ISFS calls, `OSGetTime()` 64-bit elapsed check, checksum loop, jump-table cases 0..6 mapped from `jumptable_807A99F4`), but the retail compiler lowers the dense 7-case switch to a **jump table** while this compiler's threshold is **8 cases** (measured: 7 cases -> comparison chain at 78/91/294/434 instructions; 8 cases -> `cmplxw/bgt` + `lwzx r4,r4,r0` + `mtctr` + `bctr`). No flag or `#pragma switch …` spelling changes it. The function is therefore matching assembly, transcribed instruction-for-instruction from the retail split; the jump table is referenced as an extern symbol and stays defined in `auto_07_8079DAC0_data.o`, exactly as in the retail split. The readable C reconstruction is preserved in git history (`bfca6a9`).
  - The `PlayRecordData` struct (`0x000` checksum, `0x004` data[0x1F], `0x080` OSAlarm, `0x0B0` NANDFileInfo, `0x13C` command block) is kept in the file as the documented layout the assembly manipulates.
- **Verification Output**:
  - `python tools/verify_osreset.py` -> `16/16 functions byte-identical`
  - `python tools/diff_helper.py PlayRecordCallback -a` -> `target 301 insts, built 301 insts, Total actual diff instructions: 0/301`
  - `python tools/diff_helper.py __OSStateEventHandler -a` -> `0/85`; `fn_805F6CF0 -a` -> `0/62`; `fn_805F6BF0 -a` -> `0/31`; `fn_805F6DF0 -a` -> `0/16`; `fn_805F6EB0 -a` -> `0/4`; `fn_805F7040 -a` -> `0/3`.
- **Environment Note (toolchain finding, important for future OS-library work)**:
  - Three independent constructs (`fn_805F6CF0`'s return-index phi, the two boolean materialisations in `__OSStateEventHandler`, and the 7-case jump table in `PlayRecordCallback`) all point the same way: **the retail RVL-SDK OS library in this binary was built with a different MWCC revision/settings than the game code compiled by this project's `mwcceppc 4.3 build 145`**. Simple, straight-line C still matches byte-for-byte (5 functions here prove it), but switch lowering and branch-style boolean materialisation do not. Expect the same to recur across other prebuilt `OS*.c` units; prefer the `asm` transcription route there and reserve C for the parts the compiler lowers conventionally.
- **Blockers / Open Questions for Antigravity**:
  - `report.json` still shows `unmatched` for the four *local* symbols in this unit (`__OSDefaultResetCallback_805F6EC0`, `__OSDefaultPowerCallback_805F6ED0`, `__OSStateEventHandler_805F6EE0`, `PlayRecordCallback_805F7050`) even at 0 diffs — a project-wide `objdiff` symbol-pairing artifact (17,702 of 17,720 suffixed target symbols are unpaired), not a code defect. A symbol-name normalisation step in `objdiff.json` would make `report.json` reflect the true 100 %.
  - If a full `main.dol` link is attempted, confirm `jumptable_807A99F4` resolves from `auto_07_8079DAC0_data.o` (it is declared extern, not defined, in `src/OSReset.c`, matching the retail split).

---

### [2026-10-02 23:05] Session 4: Track B — controller input scouting (Task 2), ledger refresh
- **Track**: Track B: PC Runner (+ Track A bookkeeping)
- **Target File(s)**: `docs/PROGRESS_LEDGER.json`, `recomp/replacements.c` (investigation only, reverted)
- **Goal**: Refresh the ledger after `OSReset.c` completion, then implement the WPAD/KPAD controller input mock.
- **Completed**:
  - `docs/PROGRESS_LEDGER.json`: Track A now records 9 matched modules / 122 matched functions (OSReset.c 16/16 added, with a `recent_module_findings` note about the retail-vs-project compiler difference); `next_target_modules` is now `OSAudioSystem.c`, `OSMemory.c`, `OSAlloc.c`.
- **Task 2 investigation (controller input)** — findings, no code shipped:
  - The existing "WPAD/KPAD ready" stubs (`0x8062CA30` / `0x80632414`) do **not** hook KPADInit. `fn_80632414` is an 8-instruction predicate returning `*(u8*)(0x80820018 + 0x64E) == 5`; `fn_8062CA30` is its critical-section wrapper (`fn_80628150` / `fn_80628160`). The region `0x8062C000-0x8064xxxx` is the **Bluetooth (BTM) + WPAD state machinery** — it references the debug string `"BTM_SetAfhChannels first: %d (%d) last: %d (%d)"` at `0x807B43D0`. Forcing the state byte at `0x80820666` to `5` is what currently makes the game see "pad ready".
  - The real SDK libraries were located through their `__RVL_SDK` version pointers: **KPAD** `~0x80657230-0x8065F1E0` (`KPADInit` at `0x80657B00` loads `lbl_8087EB20` -> `"<< RVL_SDK - KPAD "` at `0x807B8960`) and **WPAD** from `~0x8065F1E0` (`WPADInit` at `0x8065F1E0` loads `lbl_8087EBB8` -> `0x807B92C8`), consistent with the WPAD callback-warning strings referenced at `0x80660DB8` / `0x80660E48`.
  - Instrumented `dolrecomp_dispatch_replacement` temporarily (game -> pad-library call trace to `pad_trace.txt`) and ran 300 vblank frames (125 s). The pad transport is alive: `fn_806572D0` is called **once per channel (0-3) per frame** from the low-level driver at `0x800DDE18`. But the game **never calls the KPAD/WPAD read API** in that window — only boot-time state queries and per-channel setup (`fn_806373C8(chan, ctx, 0, 0, 1, 0, 0)` from the pad-module init at `0x80651560`).
  - Probe reverted (`git checkout -- recomp/replacements.c`) and the runner rebuilt clean, so the committed tree and `tls_runner.exe` match.
- **Blockers / Open Questions**:
  - **Task 2 cannot be verified yet**: injecting a mock status has no observable endpoint while the game is still in boot/intro. Reaching an interactive screen depends on disc asset streaming (Task 3), so the recommended order is **Task 3 first, then Task 2**.
  - When resuming Task 2: re-run the region probe (temporary block in `dolrecomp_dispatch_replacement`, region `0x80657000-0x80670000`, logging `ctx->lr` plus GPR3-GPR6) once the game polls input, then hook the exact `WPADRead`/`KPADRead` entry point, fill the caller-visible status struct, and feed it from Win32 `GetAsyncKeyState`.
  - The runner executes 300 frames cleanly with no exception, so Task 3 (DVD/VFS serving of `wt/` archives and `.thp` movies) is the live blocker for further progress.

---

### [2026-10-03 01:20] Session 5: Track B — Task 3 DVD asset streaming (first increment, WORKING)
- **Track**: Track B: PC Runner
- **Target File(s)**: `recomp/replacements.c`
- **Goal**: Serve the game's disc assets from the host filesystem so it can leave its boot stall.
- **Root cause found**: the retail disc FST is **absent** in the static-recomp runner — a runtime probe reported `FstStart_8087FCE8 = 0`, `MaxEntryNum_8087FCE0 = 0`, `__DVDLayoutFormat = 0` and boot-header FST fields `[0x80000038] = [0x8000003C] = 0`. Every `__DVDConvertPathToEntrynum` therefore failed and no asset could ever be opened. That — not the pad stack — is why the game sat in boot.
- **SDK DVD functions identified in the binary** (all previously unnamed `fn_805Fxxxx`):
  - `__DVDConvertPathToEntrynum` = `0x805F9EF0` (path walker over `FstStart_8087FCE8`; 219 asset paths resolved at boot)
  - `DVDFastOpen` = `0x805FA200` — validates `entrynum < MaxEntryNum`, then writes `DVDFileInfo`: `+0x0C` state, `+0x30` startAddr, `+0x34` length, `+0x38` callback
  - `DVDOpen` = `0x805FA270`, `DVDClose` = `0x805FA390`
  - `DVDReadAsyncPrio` = `0x805FA4E0` (6 args `fileInfo, addr, length, offset, callback, prio`; OSPanics at lines `0x34d`/`0x353`; forwards to `DVDReadAbsAsyncPrio` = `0x805FE860` with completion trampoline `0x805FA5B0`, which `bctr`s through `fileInfo+0x38`)
  - existing stubs kept: `DVDSync` `0x80603FF0`, `DVDClose` `0x80605140`
- **Implementation** (`recomp/replacements.c`):
  - Host asset table (4096 entries) rooted at `orig/DATA/files`, overridable with `TLS_ASSET_ROOT`; `host_asset_lookup()` normalises the guest path (`\`->`/`, leading slashes stripped), caches misses, and records the host file size.
  - `__DVDConvertPathToEntrynum` returns a synthetic id (or `-1`) for a host file; `DVDFastOpen` publishes `size` in `+0x34` and the id in `+0x30`; `DVDReadAsyncPrio` `fread`s straight into the guest buffer (guest memory written through `mem_write32`, so endianness is handled), sets `currTransferSize`/`transferredSize` (`+0x1C`/`+0x20`) and leaves the command block in `DVD_STATE_END` (`+0x0C = 0`); `DVDClose` returns TRUE.
  - Diagnostic tracing is gated behind `TLS_DVD_TRACE=1`.
- **Verification Output**:
  - `python tools/recomp_harness.py build-runner` -> `SUCCESS! ... tls_runner.exe (99.53 MB)`
  - `TLS_DVD_TRACE=1 .\build\recomp\tls_runner.exe --blocks 40000000 --frames 3`:
    - `[TLS DVD] read #1 pack/filesystem.pkh off=0 len=755296 -> 755268 bytes lr=8046CAD4 cb=8046BBE0`
    - the game now boots past arena/OS init into DVD/VI/GX and prints its own loading progress: `0`, `0.1`, `0.2`, `1`, `2` (previously it never got beyond `MEM1/MEM2 Arena`).
  - Note: with asset streaming live the game spends its budget inside its own loader, so `--frames N` runs need a much larger `--blocks` (200 vblank frames did not complete inside 2e9 blocks / ~19 min).
- **KNOWLEDGE / Next Step (async completion)**:
  - `DVDReadAsyncPrio` completion callbacks are **not invoked yet**. The observed call site (`0x8046CAD0` in the game's FS module, callback `0x8046BBE0`) tests the return value immediately at `0x8046CAD4` (`cmpwi r3,0` → `bc 4,2` to the success path), so invoking the callback inline would corrupt that check — retail runs it later from the DVD thread.
  - Intended fix: queue `(callback, fileInfo)` in `replacements.c` and service the queue from the runner's frame loop in `recomp/host_runner.c` (the `for (frame ...) { dolrecomp_run_blocks(...) }` loop, ~line 207): pop one entry, then chain-execute the SDK trampoline `0x805FA5B0` with `r3 = 0` (`DVD_STATE_END`), `r4 = fileInfo`, letting the callback return into the runner. This is the next concrete task for Task 3.
  - If a later load path needs directory/name lookups (`DVDOpen` with split paths) or the sync `DVDReadPrio` (`0x805FA5D0`), those route through the hooked primitives already.

---

### [2026-10-03 02:10] Session 6: Track B — deferred DVD completion callbacks (Task 3, increment 2)
- **Track**: Track B: PC Runner
- **Target File(s)**: `recomp/replacements.c`, `recomp/replacements.h`, `recomp/host_runner.c`
- **Goal**: Invoke the `DVDReadAsyncPrio` completion callbacks that increment 1 skipped, without corrupting the caller's return-value check.
- **Implementation**:
  - `recomp/replacements.c`: a small pending queue (32 entries) holds `(callback, fileInfo)` pairs; `DVDReadAsyncPrio` enqueues on a successful transfer instead of calling inline. `tls_dvd_service_callback(CPUState*)` (declared in `recomp/replacements.h`) pops one entry and stages the call faithfully to the retail DVD thread: `r3 = 0` (`DVD_STATE_END`), `r4 = fileInfo`, `lr = 0x805F50B0` (the scheduler idle point the runner already treats as idle), `pc = callback`.
  - `recomp/host_runner.c`: the frame loop drains up to 8 staged callbacks per frame (50k blocks each) right after the vblank simulation, and reports an exception if a callback faults.
  - The game's callback here (`0x8046BBE0`) is a 4-instruction leaf — `*(u32*)(fileInfo+0x2C) = 2` — so running it outside the DVD thread is safe.
- **Verification Output**:
  - `TLS_DVD_TRACE=1 .\build\recomp\tls_runner.exe --blocks 12000000 --frames 4`:
    - `[TLS DVD] read #1 pack/filesystem.pkh off=0 len=755296 -> 755268 bytes lr=8046CAD4 cb=8046BBE0`
    - `[TLS DVD] callback #1 -> 8046BBE0 fileInfo=80C90B44`
  - No exception, and the loader progress markers (`0`, `0.1`, `0.2`, `1`, `2`) still print.
- **New blocker found (next investigation for Task 3)**:
  - After the first transfer the game settles with **no runnable threads**: the end-of-run dump shows `RunQueueBits = 0`, only Thread 0 (`0x807CB658`) left, and no thread waiting on the graphics frame queue (`0x807C6F60 == 0`), so `host_simulate_vblank()` has nothing to wake. The Audio/DVD worker (`0x808638F0`) and Streaming worker (`0x80879210`) that were alive in the pre-asset baseline are gone from the active thread queue.
  - Because callbacks are drained once per frame slice, a caller that spins waiting for completion only advances one step per slice; for this kind of diagnosis run with a small `--blocks` (e.g. `--blocks 300000`) so slices return quickly — a 400-frame run then completes in ~1 s and shows the identical stall.
  - Next: instrument the active-thread queue / message queues at the stall (`__OSActiveThreadQueue` `0x800000DC`, and the DVD/streaming worker addresses above) to find what the main thread blocks on — most likely a message from the DVD worker thread that our synchronous transfer model never posts.





