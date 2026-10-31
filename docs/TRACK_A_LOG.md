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

### 2026-11-01 — Unit A2: C Decompilation & Telemetry Analysis of fn_80207F80 and fn_802189EC

Numbers:  progress before -> after: 99.30 % -> 99.30 % (7,425,512 / 7,477,608 bytes, 18,054 / 18,155 functions)
Named:    none in this unit
Decompiled: fn_80207F80 (220 B) -> C in src/game_system_assert.c (match: 100 %)
Notes:
- **fn_80207F80 (220 B, 55 instructions)**:
  - Deliverable: converted from inline assembly to readable C in `src/game_system_assert.c`, compiling to exact 100% byte match.
  - Plain-English description: Master game system initialization dispatcher. It allocates 0x10 bytes of stack, preserves LR, and executes 48 sub-system initialization routines in fixed sequential order without branching or arguments before returning. Calls include player parameter priority init (`fn_802189EC`), task manager init (`fn_80217E18`, `fn_802196D0`), event/cutscene systems (`fn_80208BE0`, `fn_80204E54`), and memory/assert systems.
  - Track B payoff: Explains why Track B observed `cia=0x80207F80` with "no data-plane pointer at all": it is a pure code dispatcher calling parameterless global init routines.

- **fn_802189EC (456 B, 114 instructions)**:
  - Deliverable: Plain-English architecture analysis and C decompilation model.
  - Plain-English description: Despite being grouped in `game_sys_task_worker.c`, this function is NOT a task manager constructor; it is the **Player Equipment Priority Table Loader** for the 7 playable party members.
  - Globals read/written:
    1. Allocates two 0x6AC-byte blocks (7 party members * 0xF4 bytes = 0x6AC bytes = 1708 bytes) via `fn_800846FC(0x6ac, 1, str, str, 0)` with tag string `lbl_807423CE` (`"/boot/player_param.csv"`).
    2. Writes pointer 1 to `lbl_8087F2B0` (`g_PlayerProtectorPriority`) and pointer 2 to `lbl_8087F2B4` (`g_PlayerWeaponPriority`). Both are zero-initialized with `memset(ptr, 0, 0x6AC)`.
    3. Reads `/boot/player_weapon_priority.csv` (pointer at `lbl_80882F4C`) using filesystem manager `lbl_8087F518` via `fn_8046DC5C`.
    4. Constructs an `atn::CsvTab` parser on stack (`0xc` to `0x640`), initializes it with delimiter table `lbl_8087D720` via `fn_8005B6E8`, and invokes `parser->vtable->parse(fileData, fileSize)`.
    5. Iterates rows via `fn_8005B5F8(&parser)`: fetches each cell with `fn_8005B3CC` and parses into `lbl_8087F2B4 + offset` via `fn_802188B4` (advancing by `0xF4` per character). Closes file with `fn_8046DD20`.
    6. Repeats the exact same sequence for `/boot/player_protector_priority.csv` (pointer at `lbl_80882F48`), parsing into `lbl_8087F2B0 + offset`.
    7. Globals `lbl_8087F2B0` and `lbl_8087F2B4` are accessed at runtime by `fn_80218BB4(player_id)` and `fn_80218BC4(player_id)`, which compute `&table[player_id * 0xF4]`.
  - Compiler status: C implementation drafted and verified against target; MWCC C-mode (`-lang=c`) virtual call register scheduling (`r5` intermediate vs direct `r12` in C++) leaves 15 register diffs, so matching asm is preserved in `src/game_sys_task_worker.c` per handoff rule §6 while readable C logic is documented.

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

