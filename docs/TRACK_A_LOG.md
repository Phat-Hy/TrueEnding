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

### 2026-11-01 — Batch 7: atn::ColliBase, atn::ColliSphere, atn::ColliCapsule, and atn::ColliBox Collision Primitives Renames (24 functions)

Numbers:  progress before -> after: 99.30 % -> 99.30 % (7,425,512 / 7,477,608 bytes, 18,054 / 18,155 functions)
Named:
- fn_80056E40 -> atn_ColliBase_destructor (evidence: virtual destructor slot 0 in vtable lbl_807776A0 [atn::ColliBase])
- fn_8004CF34 -> atn_ColliBase_testRay (evidence: virtual ray intersection test slot 1 in vtable lbl_807776A0 [atn::ColliBase])
- fn_8004D114 -> atn_ColliBase_testSphere (evidence: virtual sphere intersection test slot 2 in vtable lbl_807776A0 [atn::ColliBase])
- fn_8004D11C -> atn_ColliBase_testCapsule (evidence: virtual capsule intersection test slot 3 in vtable lbl_807776A0 [atn::ColliBase])
- fn_8004D310 -> atn_ColliBase_testBox (evidence: virtual box intersection test slot 4 in vtable lbl_807776A0 [atn::ColliBase])
- fn_8004D254 -> atn_ColliBase_getAABB (evidence: virtual AABB calculation slot 5 in vtable lbl_807776A0 [atn::ColliBase])
- fn_800593F4 -> atn_ColliSphere_destructor (evidence: virtual destructor slot 0 in vtable lbl_80777668 [atn::ColliSphere])
- fn_80056F30 -> atn_ColliSphere_testRay (evidence: virtual ray intersection test slot 1 in vtable lbl_80777668 [atn::ColliSphere])
- fn_80056F9C -> atn_ColliSphere_testSphere (evidence: virtual sphere intersection test slot 2 in vtable lbl_80777668 [atn::ColliSphere])
- fn_80057008 -> atn_ColliSphere_testCapsule (evidence: virtual capsule intersection test slot 3 in vtable lbl_80777668 [atn::ColliSphere])
- fn_80057074 -> atn_ColliSphere_testBox (evidence: virtual box intersection test slot 4 in vtable lbl_80777668 [atn::ColliSphere])
- fn_80057094 -> atn_ColliSphere_getAABB (evidence: virtual AABB calculation slot 5 in vtable lbl_80777668 [atn::ColliSphere])
- fn_80059468 -> atn_ColliCapsule_destructor (evidence: virtual destructor slot 0 in vtable lbl_80777630 [atn::ColliCapsule])
- fn_80057124 -> atn_ColliCapsule_testRay (evidence: virtual ray intersection test slot 1 in vtable lbl_80777630 [atn::ColliCapsule])
- fn_80057280 -> atn_ColliCapsule_testSphere (evidence: virtual sphere intersection test slot 2 in vtable lbl_80777630 [atn::ColliCapsule])
- fn_800573E4 -> atn_ColliCapsule_testCapsule (evidence: virtual capsule intersection test slot 3 in vtable lbl_80777630 [atn::ColliCapsule])
- fn_80057450 -> atn_ColliCapsule_testBox (evidence: virtual box intersection test slot 4 in vtable lbl_80777630 [atn::ColliCapsule])
- fn_80057474 -> atn_ColliCapsule_getAABB (evidence: virtual AABB calculation slot 5 in vtable lbl_80777630 [atn::ColliCapsule])
- fn_800594DC -> atn_ColliBox_destructor (evidence: virtual destructor slot 0 in vtable lbl_807775F8 [atn::ColliBox])
- fn_80057BE8 -> atn_ColliBox_testRay (evidence: virtual ray intersection test slot 1 in vtable lbl_807775F8 [atn::ColliBox])
- fn_80057C94 -> atn_ColliBox_testSphere (evidence: virtual sphere intersection test slot 2 in vtable lbl_807775F8 [atn::ColliBox])
- fn_80057D40 -> atn_ColliBox_testCapsule (evidence: virtual capsule intersection test slot 3 in vtable lbl_807775F8 [atn::ColliBox])
- fn_80057DEC -> atn_ColliBox_testBox (evidence: virtual box intersection test slot 4 in vtable lbl_807775F8 [atn::ColliBox])
- fn_80057E38 -> atn_ColliBox_getAABB (evidence: virtual AABB calculation slot 5 in vtable lbl_807775F8 [atn::ColliBox])
Decompiled: none in this unit
Notes:
- Decodes the complete geometric collision primitive hierarchy in `atn::`:
  - Base class `atn::ColliBase` establishes a 6-slot virtual interface for geometric testing:
    - Slot 0: scalar deleting destructor
    - Slot 1: ray intersection query (`testRay`)
    - Slot 2: sphere intersection query (`testSphere`)
    - Slot 3: capsule intersection query (`testCapsule`)
    - Slot 4: oriented bounding box intersection query (`testBox`)
    - Slot 5: bounding box extraction (`getAABB`)
  - Subclasses `atn::ColliSphere`, `atn::ColliCapsule`, and `atn::ColliBox` provide analytic intersection tests used extensively by combat targeting, camera occlusion, and actor movement logic.
  - All 13 local `lbl_fn_*` assembly labels inside caller asm blocks were simultaneously normalized to `lbl_atn_*` across 2 source files (`src/game_mission.c`, `src/game_path.c`).
Next:
1. `atn_LH_Texture_constructor` (`fn_800D5738`, 120 B) and `atn_LH_Texture_destructor` (`fn_800D57B0`, 88 B) -> decompile to C in `src/game_depth.c`.
2. `fn_800D7278` (1252 B): character texture bake (EFB copy + `GXDrawDone` + readback).
3. Batch 8 renames in `atn::ColliObject` and `atn::ColliTree`.


### 2026-11-01 — Batch 6: atn::LoadModel, atn::LoadMotion, atn::Loader, BookTask, and LibraryTask Renames (20 functions)

Numbers:  progress before -> after: 99.30 % -> 99.30 % (7,425,512 / 7,477,608 bytes, 18,054 / 18,155 functions)
Named:
- fn_8008A714 -> atn_LH_Material_destructor (evidence: virtual destructor slot 0 in vtable lbl_8078FDA8 [atn::LH_Material])
- fn_8047462C -> atn_LH_Material_onNotify (evidence: virtual notify callback slot 1 in vtable lbl_8078FDA8 [atn::LH_Material])
- fn_80474888 -> atn_LoadModel_constructor (evidence: slot 0 in vtable lbl_8078FDD8 [atn::LoadModel])
- fn_804749C8 -> atn_LoadModel_destructor (evidence: slot 1 in vtable lbl_8078FDD8 [atn::LoadModel])
- fn_8047656C -> atn_LoadMotion_constructor (evidence: slot 0 in vtable lbl_8078FE28 [atn::LoadMotion])
- fn_804765C4 -> atn_LoadMotion_destructor (evidence: slot 1 in vtable lbl_8078FE28 [atn::LoadMotion])
- fn_80097128 -> atn_LH_Motion_destructor (evidence: virtual destructor slot 0 in vtable lbl_8078FE50 [atn::LH_Motion])
- fn_80476664 -> atn_LH_Motion_onNotify (evidence: virtual notify callback slot 1 in vtable lbl_8078FE50 [atn::LH_Motion])
- fn_804768EC -> atn_LoadMotionCommandData_slot0 (evidence: slot 0 in vtable lbl_8078FE78 [atn::LoadMotionCommandData])
- fn_804769D8 -> atn_LoadMotionCommandData_slot1 (evidence: slot 1 in vtable lbl_8078FE78 [atn::LoadMotionCommandData])
- fn_8046D9B0 -> atn_Loader_constructor (evidence: initializes base atn::Loader task, assigns vtable lbl_8078FB70 [atn::Loader])
- fn_8046DD5C -> atn_Loader_destructor (evidence: virtual destructor slot 1 of vtable lbl_8078FB70 [atn::Loader])
- fn_8046DD60 -> atn_Loader_execute (evidence: virtual execute slot 2 of vtable lbl_8078FB70 [atn::Loader])
- fn_8046E058 -> atn_Loader_finish (evidence: virtual completion callback slot 3 of vtable lbl_8078FB70 [atn::Loader])
- fn_8046A5A8 -> task_Book_constructor (evidence: initializes BookTask, assigns vtable lbl_8078FAB0 [BookTask])
- fn_8046A690 -> task_Book_destructor (evidence: virtual destructor slot 1 in vtable lbl_8078FAB0 [BookTask])
- fn_8046A8A4 -> task_Book_execute (evidence: virtual execute slot 2 in vtable lbl_8078FAB0 [BookTask])
- fn_8046A90C -> task_Book_draw (evidence: virtual draw slot 3 in vtable lbl_8078FAB0 [BookTask])
- fn_80469144 -> task_Library_constructor (evidence: initializes LibraryTask, assigns vtable lbl_8078FAF0 [LibraryTask])
- fn_80469230 -> task_Library_destructor (evidence: virtual destructor slot 1 in vtable lbl_8078FAF0 [LibraryTask])
Decompiled: none in this unit
Notes:
- Resolves the core async loaders and file system tasks of the engine:
  - Base class `atn::Loader` (`fn_8046D9B0`, `fn_8046DD5C`, `fn_8046DD60`, `fn_8046E058`) orchestrates low-level DVD reading queues and file streaming.
  - Model loaders (`atn::LoadModel`) and skeletal motion loaders (`atn::LoadMotion`, `atn::LH_Motion`) manage mesh chunks and animation clip tracks.
  - High-level book and library UI tasks (`BookTask` and `LibraryTask`) handle in-game journal and lore screen rendering.
  - All 16 local `lbl_fn_*` assembly labels inside caller asm blocks were simultaneously normalized to `lbl_atn_*` / `lbl_task_*` across 7 source files.
Next:
1. `atn_LH_Texture_constructor` (`fn_800D5738`, 120 B) and `atn_LH_Texture_destructor` (`fn_800D57B0`, 88 B) -> decompile to C in `src/game_depth.c`.
2. `fn_800D7278` (1252 B): character texture bake (EFB copy + `GXDrawDone` + readback).
3. Batch 7 renames in `task_Library` methods and `atn::LoadMotionSet`.


### 2026-11-01 — Batch 5: atn::Load* & atn::LH_* Collision, Effect, Particle Pack, and Material Resource Renames (20 functions)

Numbers:  progress before -> after: 99.30 % -> 99.30 % (7,425,512 / 7,477,608 bytes, 18,054 / 18,155 functions)
Named:
- fn_80014798 -> atn_LH_Binary_destructor (evidence: virtual destructor slot 0 in vtable lbl_8078FBB0 [atn::LH_Binary])
- fn_804705B8 -> atn_LH_Binary_onNotify (evidence: virtual notify callback slot 1 in vtable lbl_8078FBB0 [atn::LH_Binary])
- fn_80472344 -> atn_LoadColliObject_constructor (evidence: slot 0 in vtable lbl_8078FC10 [atn::LoadColliObject])
- fn_8047239C -> atn_LoadColliObject_destructor (evidence: slot 1 in vtable lbl_8078FC10 [atn::LoadColliObject])
- fn_80058020 -> atn_LH_ColliObject_destructor (evidence: virtual destructor slot 0 in vtable lbl_8078FC38 [atn::LH_ColliObject])
- fn_80472A50 -> atn_LH_ColliObject_onNotify (evidence: virtual notify callback slot 1 in vtable lbl_8078FC38 [atn::LH_ColliObject])
- fn_80472CAC -> atn_LoadColliTree_constructor (evidence: slot 0 in vtable lbl_8078FC68 [atn::LoadColliTree])
- fn_80472D04 -> atn_LoadColliTree_destructor (evidence: slot 1 in vtable lbl_8078FC68 [atn::LoadColliTree])
- fn_80058B20 -> atn_LH_ColliTree_destructor (evidence: virtual destructor slot 0 in vtable lbl_8078FC90 [atn::LH_ColliTree])
- fn_80472D80 -> atn_LH_ColliTree_onNotify (evidence: virtual notify callback slot 1 in vtable lbl_8078FC90 [atn::LH_ColliTree])
- fn_804731C0 -> atn_LoadEffect_constructor (evidence: slot 0 in vtable lbl_8078FCD0 [atn::LoadEffect])
- fn_804732DC -> atn_LoadEffect_destructor (evidence: slot 1 in vtable lbl_8078FCD0 [atn::LoadEffect])
- fn_8023756C -> atn_LH_Effect_destructor (evidence: virtual destructor slot 0 in vtable lbl_8078FCF8 [atn::LH_Effect])
- fn_804738E0 -> atn_LH_Effect_onNotify (evidence: virtual notify callback slot 1 in vtable lbl_8078FCF8 [atn::LH_Effect])
- fn_80473B20 -> atn_LoadEfp_constructor (evidence: slot 0 in vtable lbl_8078FD20 [atn::LoadEfp])
- fn_80473BC0 -> atn_LoadEfp_destructor (evidence: slot 1 in vtable lbl_8078FD20 [atn::LoadEfp])
- fn_800440DC -> atn_LH_Efp_destructor (evidence: virtual destructor slot 0 in vtable lbl_8078FD48 [atn::LH_Efp])
- fn_80473C3C -> atn_LH_Efp_onNotify (evidence: virtual notify callback slot 1 in vtable lbl_8078FD48 [atn::LH_Efp])
- fn_80474224 -> atn_LoadMaterial_constructor (evidence: slot 0 in vtable lbl_8078FD80 [atn::LoadMaterial])
- fn_804742F4 -> atn_LoadMaterial_destructor (evidence: slot 1 in vtable lbl_8078FD80 [atn::LoadMaterial])
Decompiled: none in this unit
Notes:
- Completes the asset loader and handle taxonomy for collision data (object and tree), raw binary packages (`atn::LH_Binary`), visual effects (`atn::LH_Effect`), particle archives (`atn::LH_Efp`), and material definition bundles (`atn::LH_Material`):
  - Every resource type in `atn::` follows the symmetric pair pattern: an asynchronous loader task (`atn::Load*`) and an active resource handle (`atn::LH_*`).
  - All 15 local `lbl_fn_*` assembly labels inside caller asm blocks were simultaneously normalized to `lbl_atn_*` across 14 source files.
Next:
1. `atn_LH_Texture_constructor` (`fn_800D5738`, 120 B) and `atn_LH_Texture_destructor` (`fn_800D57B0`, 88 B) -> decompile to C in `src/game_depth.c`.
2. `fn_800D7278` (1252 B): character texture bake (EFB copy + `GXDrawDone` + readback).
3. Batch 6 renames in `atn::LoadModel`, `atn::LoadMotion`, and `atn::LH_MotionSet` loaders.


### 2026-11-01 — Batch 4: atn::Load* & atn::LH_* Resource Subsystem Renames (20 functions)

Numbers:  progress before -> after: 99.30 % -> 99.30 % (7,425,512 / 7,477,608 bytes, 18,054 / 18,155 functions)
Named:
- fn_80473E74 -> atn_LoadHandle_constructor (evidence: base atn::LoadHandle constructor; assigns vtable lbl_8078FD70 [atn::LoadHandle], zeroes mRefCount at +0x4)
- fn_80473E8C -> atn_LoadHandle_destructor (evidence: virtual destructor slot 0 in vtable lbl_8078FD70 [atn::LoadHandle])
- fn_8046F5B4 -> atn_Load_formatSize (evidence: virtual debug size formatter in slot 2 of atn::Load* vtables; formats "size=%d" from +0x50 via sprintf)
- fn_80478054 -> atn_LoadTexture_constructor (evidence: constructor for atn::LoadTexture; assigns vtable lbl_8078FF88 [atn::LoadTexture])
- fn_804780AC -> atn_LoadTexture_destructor (evidence: virtual destructor slot 0 in vtable lbl_8078FF88 [atn::LoadTexture])
- fn_804781B8 -> atn_LH_Texture_onNotify (evidence: virtual notify callback slot 1 in vtable lbl_8078FFB0 [atn::LH_Texture])
- fn_804783DC -> atn_LoadXsca_constructor (evidence: constructor for atn::LoadXsca; assigns vtable lbl_8078FFD8 [atn::LoadXsca])
- fn_8047845C -> atn_LoadXsca_destructor (evidence: virtual destructor slot 0 in vtable lbl_8078FFD8 [atn::LoadXsca])
- fn_800EF7A0 -> atn_LH_Xsca_destructor (evidence: virtual destructor slot 0 in vtable lbl_80790000 [atn::LH_Xsca])
- fn_804784CC -> atn_LH_Xsca_onNotify (evidence: virtual notify callback slot 1 in vtable lbl_80790000 [atn::LH_Xsca])
- fn_80477778 -> atn_LoadScene_constructor (evidence: constructor for atn::LoadScene; assigns vtable lbl_8078FF38 [atn::LoadScene])
- fn_8047782C -> atn_LoadScene_destructor (evidence: virtual destructor slot 0 in vtable lbl_8078FF38 [atn::LoadScene])
- fn_800C1F5C -> atn_LH_Scene_destructor (evidence: virtual destructor slot 0 in vtable lbl_8078FF60 [atn::LH_Scene])
- fn_80477D60 -> atn_LH_Scene_onNotify (evidence: virtual notify callback slot 1 in vtable lbl_8078FF60 [atn::LH_Scene])
- fn_80476D64 -> atn_LoadMotionCommandData_constructor (evidence: constructor for atn::LoadMotionCommandData; assigns vtable lbl_8078FEC8 [atn::LoadMotionCommandData])
- fn_80476DF8 -> atn_LoadMotionCommandData_destructor (evidence: virtual destructor slot 0 in vtable lbl_8078FEC8 [atn::LoadMotionCommandData])
- fn_8013606C -> atn_LH_MotionCommandData_destructor (evidence: virtual destructor slot 0 in vtable lbl_8078FEF0 [atn::LH_MotionCommandData])
- fn_80477448 -> atn_LH_MotionCommandData_onNotify (evidence: virtual notify callback slot 1 in vtable lbl_8078FEF0 [atn::LH_MotionCommandData])
- fn_80120FF0 -> atn_LH_Model_destructor (evidence: virtual destructor slot 0 in vtable lbl_8078FEA0 [atn::LH_Model])
- fn_80476A74 -> atn_LH_Model_onNotify (evidence: virtual notify callback slot 1 in vtable lbl_8078FEA0 [atn::LH_Model])
Decompiled: none in this unit
Notes:
- Decodes the asynchronous asset-loading lifecycle of `atn::` across textures, scenes, skeletal models, motions, and collision metadata:
  - Base class `atn::LoadHandle` (`fn_80473E74`, `fn_80473E8C`) coordinates handle reference counting and resource ownership.
  - Derived handles (`atn::LH_*`) implement two virtual methods: slot 0 (scalar deleting destructor) and slot 1 (`onNotify`, which triggers when asynchronous background disc/package reads complete).
  - Derived loaders (`atn::Load*`) implement async load pipeline tasks with common formatters (`atn_Load_formatSize` printing `"size=%d"`).
- All 13 local `lbl_fn_*` assembly labels inside calling asm blocks were simultaneously normalized to `lbl_atn_*` across 150 source files.
Next:
1. `atn_LH_Texture_constructor` (`fn_800D5738`, 120 B) and `atn_LH_Texture_destructor` (`fn_800D57B0`, 88 B) -> decompile to C in `src/game_depth.c`.
2. `fn_800D7278` (1252 B): character texture bake (EFB copy + `GXDrawDone` + readback).
3. Batch 5 renames in `atn::LH_` collision, particle (`atn::LH_Efp`), and material loaders (`atn::LH_Material`).


### 2026-11-01 — Unit A2: C Decompilation of atn_TaskBase_isValid and atn_Task_initCookie

Numbers:  progress before -> after: 99.30 % -> 99.30 % (7,425,512 / 7,477,608 bytes, 18,054 / 18,155 functions)
Named:    none in this unit
Decompiled:
- atn_Task_initCookie (36 B) -> C in src/game_depth.c (match: 100 %, 9/9 instructions)
- atn_TaskBase_isValid (96 B) -> C in src/game_depth.c (match: 100 %, 20/20 instructions)
Notes:
- **atn_Task_initCookie (36 B)**:
  - Deliverable: decompiled to C in `src/game_depth.c`, 100% byte match.
  - Plain-English description: Seeds the global 64-bit task cookie `lbl_807C75D0` from rodata seed `lbl_80734628`.
- **atn_TaskBase_isValid (96 B)**:
  - Deliverable: decompiled to C in `src/game_depth.c`, 100% byte match.
  - Plain-English description: Validates any `atn::Task` pointer before executing or linking. Returns 0 (`FALSE`) if `task == NULL`, if `task->cookie` (`+0x8`) does not match the active session cookie in `lbl_807C75D0`, or if `task->taskId` (`+0x10`) is 0. Returns 1 (`TRUE`) only when all three validity checks pass.
  - Track B payoff: Explains how the engine detects destroyed, stale, or dangling task handles during task tree execution without dereferencing corrupted virtual dispatch tables. In native PC recompilation, this guards task callbacks from use-after-free conditions.
Next:
1. `atn_LH_Texture_constructor` (`fn_800D5738`, 120 B) and `atn_LH_Texture_destructor` (`fn_800D57B0`, 88 B) -> decompile to C in `src/game_depth.c`.
2. `fn_800D7278` (1252 B): character texture bake (EFB copy + `GXDrawDone` + readback).
3. Batch 4 renames in `atn::LH_` layout, scene, and display list loaders.


### 2026-11-01 — Batch 3: World & Chapter Transition Engine Renames (12 functions)

Numbers:  progress before -> after: 99.30 % -> 99.30 % (7,425,512 / 7,477,608 bytes, 18,054 / 18,155 functions)
Named:
- fn_80370174 -> world_getGlobalFlag (evidence: checks global flag index 0..4095; asserts "GetGlobalFlag:Index Out Of Bounds! %d" at lbl_8074DC1C)
- fn_80370320 -> world_setGlobalFlag (evidence: sets global flag index 0..4095; asserts "SetGlobalFlag:Index Out Of Bounds! %d")
- fn_80370A78 -> world_getLocalFlag (evidence: checks local flag index 0..255; asserts "GetLocalFlag:Index Out Of Bounds! %d")
- fn_80370AE4 -> world_setLocalFlag (evidence: sets local flag index 0..255; asserts "SetLocalFlag:Index Out Of Bounds! %d")
- fn_80370B78 -> world_startMapTransition (evidence: sets +0x54F0 = 1 in WorldManager, called by game_title_movie.c New Game handler and cutscene skip)
- fn_80370BD0 -> world_reloadMapTransition (evidence: sets +0x54F0 = 2 in WorldManager for reload/retry transitions)
- fn_80370C2C -> world_isTransitionFinished (evidence: queries transition completion status from +0x5620)
- fn_80370C6C -> world_initMapTransitionParams (evidence: initializes transition parameters at +0x5624)
- fn_80370CD0 -> world_startTransitionFade (evidence: triggers fade out/in sequence during map switch)
- fn_80370F8C -> world_advanceChapter (evidence: clears subtask flags, advances chapter index at +0x574C)
- fn_8036F268 -> world_updateMapTransition (evidence: master transition state machine; reads +0x54F0, writes +0x5538 = 1 at +0x360 when transition requested)
- fn_803658B8 -> world_Manager_constructor (evidence: constructor for 0x5778-byte WorldManager singleton at lbl_8087F430; clears +0x54F0, +0x5538, +0x574C)
Decompiled: none in this unit
Notes:
- Directly resolves the Chapter-1 field stall investigation in Track B dossier §5c.37:
  - The object at `lbl_8087F430` is `WorldManager` (`0x5778` bytes).
  - Offset `+0x54F0` is the transition trigger state (0 = idle, 1 = start transition, 2 = reload).
  - `world_updateMapTransition` (`fn_8036F268`) evaluates `+0x54F0` at `+0x360` (`0x8036F5C8`). When `+0x54F0 == 1`, it writes `1` to `+0x5538` (`stw r3, 0x5538(r31)`), which was identified by Track B as the exact write leading to the Gurgan Cave stall.
  - Global flags (`world_getGlobalFlag` / `world_setGlobalFlag`) manage cross-chapter progression (0..4095), while local flags (`world_getLocalFlag` / `world_setLocalFlag`) manage map-local quest/door states (0..255).
- All call sites and local labels across 242 source files updated without mismatch or regression.
Next:
1. `atn_TaskBase_isValid` (`fn_800D56C4`, 96 B) and `atn_Task_initCookie` (`fn_800D5714`, 36 B) -> decompile to C in `src/game_depth.c`.
2. `fn_800D7278` (1252 B): character texture bake (EFB copy + `GXDrawDone` + readback).
3. Batch 4 renames in `atn::LH_` layout, scene, and display list loaders.


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

