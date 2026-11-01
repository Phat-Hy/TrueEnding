# Track A log

One entry per session. Track A = byte-matching decompilation of `main.dol`; see
[`CONTRIBUTING_TRACKS.md`](../CONTRIBUTING_TRACKS.md) for the rules and
[`TRACK_A_HANDOFF.md`](TRACK_A_HANDOFF.md) for the current work order.

Track B's dossier (`DEEPSEEK_HARNESS_HANDOVER.md`) is **not** edited from here: it is 13 000 lines of Track B
measurements and two narratives in one file conflict.

## Template

```
### <date> — <one-line summary>

Numbers:  progress before -> after  (e.g. 99.30 % -> 99.31 %, data 0.06 % -> 0.06 %)
Named:    fn_XXXXXXXX -> HumanName  (evidence: <string xref / vtable slot / call site>)
Decompiled: fn_XXXXXXXX (<bytes>) -> C in src/<file>.c  (match: 100 %)
Notes:    what it does, in plain English, and what Track B would use it for
Next:     the 3-5 functions worth naming or decompiling next
```

## Entries

<!-- newest first -->

### 2026-11-01 — Batch 2: atn::Task & atn::LH_ Resource Subsystem Renames (17 functions)

Numbers:  progress before -> after: 99.30 % -> 99.30 % (7,425,512 / 7,477,608 bytes, 18,054 / 18,155 functions)
Named:
- fn_800D1D3C -> atn_Task_constructor (evidence: calls atn_TaskBase_constructor, assigns vtable lbl_807796D0 [atn::Task], calls atn_Task_linkParent)
- fn_800D1E9C -> atn_Task_destructor (evidence: slot 0 in vtable lbl_807796D0 [atn::Task], unlinks subtasks, calls atn_TaskBase_destructor)
- fn_800D2860 -> atn_Task_execute (evidence: slot 1 in vtable lbl_807796D0 [atn::Task], default virtual execute callback returning 1)
- fn_800D1D94 -> atn_Task_linkParent (evidence: links task to parent task tree at 0x20/0x18/0x1c and increments parent child counter at 0x3c)
- fn_800D2338 -> atn_Task_unlink (evidence: unlinks task from parent and sibling chain and resets tree pointers)
- fn_800D2398 -> atn_Task_destroy (evidence: unlinks task from tree and dispatches recursive child destruction)
- fn_800D246C -> atn_Task_setActive (evidence: sets/clears bit 0 active flag in task flags at 0x38 based on r4 boolean)
- fn_800D2868 -> atn_Task_executeChildren (evidence: iterates linked child tasks at 0x18, checks 0xdead magic, and invokes task execution callbacks)
- fn_800D2AD8 -> atn_Task_pause (evidence: sets pause bit in task flags at 0x38 for task and child hierarchy)
- fn_800D2C50 -> atn_Task_resume (evidence: clears pause bit in task flags at 0x38 for task and child hierarchy)
- fn_800D3B74 -> atn_Task_deleteLater (evidence: marks task with deferred deletion flag in flags at 0x38)
- fn_800D5618 -> atn_TaskBase_constructor (evidence: assigns vtable lbl_807796F0 [atn::TaskBase] and allocates 64-bit instance cookie)
- fn_800D5670 -> atn_TaskBase_destructor (evidence: slot 0 in vtable lbl_807796F0 [atn::TaskBase], zeroes cookie and invokes operator delete)
- fn_800D56C4 -> atn_TaskBase_isValid (evidence: validates task pointer against global cookie lbl_807C75D0 and checks non-zero task ID)
- fn_800D5714 -> atn_Task_initCookie (evidence: seeds 64-bit global task cookie lbl_807C75D0 from rodata seed lbl_80734628)
- fn_800D5738 -> atn_LH_Texture_constructor (evidence: assigns vtable lbl_8078FFB0 [atn::LH_Texture] and zeroes texture layout chunk)
- fn_800D57B0 -> atn_LH_Texture_destructor (evidence: slot 0 in vtable lbl_8078FFB0 [atn::LH_Texture], invokes operator delete)
Decompiled: none in this unit
Notes:
- Resolves the core task management architecture behind the entire game engine. Track B's Chapter-1 investigation hinges on how tasks are spawned and executed (`GameTask`, `PopupTask`, `TutorialTask`). Naming these 17 functions reveals the exact tree structure: parent pointer (`+0x20`), child head (`+0x18`), sibling next (`+0x1c`), root pointer (`+0x24`), flags (`+0x38`), child count (`+0x3c`), and validity cookies (`+0x8..0x14`).
- All local `lbl_fn_*` assembly labels inside asm blocks were simultaneously normalized to `lbl_atn_*` in the same unit across all 254 caller files.
Next:
1. `fn_8036F268` (2276 B): only writer of field state `+0x5538 = 1` at `+0x360` (Chapter-1 field stall).
2. `fn_800D7278` (1252 B): character texture bake (EFB copy + `GXDrawDone` + readback).
3. Batch 3 renames in `atn::LH_` layout and resource loaders.


### 2026-11-01 — Unit A2: C Decompilation & Telemetry Analysis of fn_80207F80 and fn_802189EC

Numbers:  progress before -> after: 99.30 % -> 99.30 % (7,425,512 / 7,477,608 bytes, 18,054 / 18,155 functions)
Named:    none in this unit (label cleanup lbl_fn_* -> lbl_atn_* across 6 files)
Decompiled: fn_80207F80 (220 B) -> C in src/game_system_assert.c (match: 100 %, 55/55 instructions)
Notes:
- **fn_80207F80 (220 B, 55 instructions)**:
  - Deliverable: converted from inline assembly to readable C in `src/game_system_assert.c`, compiling to exact 100% byte match (55/55 instructions). `ninja build/SLSEXJ/report.json` passes cleanly with zero mismatches.
  - Plain-English description: Master game system initialization dispatcher. It allocates 0x10 bytes of stack, preserves LR, and executes 48 sub-system initialization routines in fixed sequential order without branching or arguments before returning. Calls include player parameter priority init (`fn_802189EC`), task manager init (`fn_80217E18`, `fn_802196D0`), event/cutscene systems (`fn_80208BE0`, `fn_80204E54`), and memory/assert systems.
  - Track B payoff: Explains why Track B observed `cia=0x80207F80` with "no data-plane pointer at all": it is a pure code dispatcher calling parameterless global init routines.

- **fn_802189EC (456 B, 114 instructions) — XRef Substantiation & Dossier §5c.19 Resolution**:
  - Deliverable: Plain-English architecture analysis, binary xref proof, and C decompilation model.
  - Resolution of Track B review §3 / Dossier §5c.19:
    - Dossier §5c.19 hypothesized `fn_802189EC` is the task-manager constructor by reading recompiled code `stw r3, -25612(r13)` at +0x10C (`0x80218A94`) and assuming `r13 = 0x808852A0`, which computed `0x8087EE94` ("task manager global").
    - **Binary Ground Truth**: In the DOL image, `_SDA_BASE_` (r13) is `0x808856C0`.
      - Instruction `0x80218A78` (`90 6D 9B F0` = `stw r3, -25616(r13)`): writes to `0x808856C0 - 0x6410 = 0x8087F2B0` (`lbl_8087F2B0` in `.sbss`).
      - Instruction `0x80218A94` (`90 6D 9B F4` = `stw r3, -25612(r13)`): writes to `0x808856C0 - 0x640C = 0x8087F2B4` (`lbl_8087F2B4` in `.sbss`).
      - Neither instruction touches `0x8087EE94`. The "task manager constructor" reading was an off-by-0x420 r13 artifact.
    - **Exact String XRefs**:
      - Instruction `0x80218ABC` (`lwz r4, lbl_80882F4C@sda21(r0)`): loads pointer at `.sdata2:0x80882F4C`, which contains `.4byte lbl_80742394`. Label `lbl_80742394` (.rodata: `0x80742394`) is string `"/boot/player_weapon_priority.csv"`. Passed to `fn_8046DC5C` (DVD file read).
      - Instruction `0x80218B30` (`lwz r4, lbl_80882F48@sda21(r0)`): loads pointer at `.sdata2:0x80882F48`, which contains `.4byte lbl_80742370`. Label `lbl_80742370` (.rodata: `0x80742370`) is string `"/boot/player_protector_priority.csv"`. Passed to `fn_8046DC5C` (DVD file read).
      - Instruction `0x80218A68` (`addi r5, r31, 0x16` where `r31 = lbl_807423B8`): references `.rodata:0x807423CE` = string `"/boot/player_param.csv"`, passed as memory tag to allocator `fn_800846FC`.
    - **Runtime Table Structure**:
      - Allocates two 0x6AC-byte blocks: 7 party members * 244 bytes (`0xF4`) = `0x6AC` (1708 bytes).
      - Parses CSV rows using `atn::CsvTab` on stack into `lbl_8087F2B4 + offset` (weapon priorities) and `lbl_8087F2B0 + offset` (protector priorities).
      - Directly adjacent accessors confirm the layout:
        - `fn_80218BB4(char_id)`: computes `char_id * 0xF4 + lbl_8087F2B0` and returns character protector priority table.
        - `fn_80218BC4(char_id)`: computes `char_id * 0xF4 + lbl_8087F2B4` and returns character weapon priority table.
  - Compiler status: C implementation drafted; MWCC C-mode (`-lang=c`) virtual call register scheduling (`r5` intermediate vs direct `r12` in C++) leaves 15 register diffs, so matching asm is preserved in `src/game_sys_task_worker.c` per handoff rule §6 while readable C logic and string evidence are fully documented.
- **Label Hygiene Sweep**:
  - Renamed all residual `lbl_fn_*` asm labels for Batch 1 routines to `lbl_atn_*` across `src/game_boss_cocoon_rush.c`, `src/game_compass.c`, `src/game_gauge.c`, `src/game_hud.c`, `src/game_marker.c`, `src/game_reticle.c`. Verified clean match and zero link regressions.

Next:
1. `fn_8036F268` (2276 B): only writer of field state `+0x5538 = 1` at `+0x360` (Chapter-1 field stall).
2. `fn_800D7278` (1252 B): character texture bake (EFB copy + `GXDrawDone` + readback).
3. Batch 2 function renames in `atn::` subsystem (tasks, scene, display lists).


### 2026-11-01 — Batch 1 function renames (12 routines behind Track B probe)

Numbers:  progress before -> after: 99.30 % -> 99.30 % (7,425,512 / 7,477,608 bytes, 18,054 / 18,155 functions)
Named:
- fn_800A0610 -> atn_Anim_evalNodeTransform (evidence: evaluates animation curve channels for translation Vec3, Euler->Quaternion rotation, and scale; calls atn_Curve_evaluate 8x)
- fn_800A05FC -> atn_Anim_evalNode (evidence: looks up node animation track in r3->0x8->0x18[r5] and tails into atn_Anim_evalNodeTransform)
- fn_800A08D4 -> atn_Anim_getDuration (evidence: returns float at r3->0x8->0x10 representing animation frame count/duration; tested against 0.0f across 9 files)
- fn_8008FA24 -> atn_Model_draw (evidence: atn::Model vtable slot 3 at 0x807788e4; evaluates model bone/mesh transform nodes and draws display lists)
- fn_8008CCC0 -> atn_AABB_getMax (evidence: loads Vec3 max at r4+0x1c; paired with getMin in game_lockon.c:345 to project bounding box)
- fn_8008CCD4 -> atn_AABB_getMin (evidence: loads Vec3 min at r4+0x10; used in game_lockon.c:337 to project bounding box)
- fn_8009B93C -> atn_Model_drawSubNodes (evidence: loads 3x4 view matrix from 0x8087EFB4+0x15c and dispatches atn_Model_drawNodes)
- fn_8009D58C -> atn_Model_drawMeshNode (evidence: called by atn_Model_drawNodes per mesh part at 0x74(r28)+idx*12; validates node matrix and renders mesh node)
- fn_8009E448 -> atn_Model_drawNodes (evidence: traverses node hierarchy 0x50(r27), filters optical "op_" prefix, dispatches atn_Model_drawMeshNode)
- fn_80471FD0 -> atn_Curve_evalHermite (evidence: paired-single cubic Hermite basis polynomial evaluation using float matrix at 0x8078FBF0: [2, 1, -3, -2, -2, 1, 3, -1])
- fn_8047202C -> atn_Curve_evaluate (evidence: atn::Curve evaluation across curve types 0, 3, 4 with binary search and Hermite interpolation via atn_Curve_evalHermite)
- fn_80091684 -> atn_Model_updateMatrices (evidence: updates atn::Model bone matrix palette, zeroes bone cache with DCZeroRange, computes joint world transforms)
Decompiled: none in this unit
Notes:    Names the 12 routines responsible for the 64 raw reader PCs detected during Track B MEM2 heap probe. Turns anonymous guest heap readers into identifiable model, curve, animation, and bounding box operations.
Next:     A2 decompilation of fn_802189EC (task-manager constructor, 456 B)

