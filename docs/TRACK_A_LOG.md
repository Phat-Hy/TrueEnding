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

### 2026-11-01 � Unit A2: C Decompilation of atn_LH_Texture Lifecycle Methods (256 B)

Numbers:  progress before -> after: 99.30 % -> 99.30 % (7,425,512 / 7,477,608 bytes, 18,054 / 18,155 functions)
Self-check (asm void): git diff -U0 -- src/ shows -2 / +0 (net conversion: 2 functions converted from asm void to readable C)
Decompiled (100.0 % byte match):
- fn_800D58A4 -> atn_LH_Texture_release (100 B, 25 insts) -> readable C in src/game_depth.c (match: 100.0 %, 0 diffs)
  - Deliverable: Texture buffer cleanup and handle release. Calls fn_80473F88(&this->handle) to unbind handle, zeroes loaded status byte at +0x2C, and if texture buffer pointer at +0x28 is non-NULL, retrieves memory heap via fn_800827E0(), frees texture buffer via fn_80083AD4(heap, buffer), and sets +0x28 = NULL.
- fn_800D5808 -> atn_LH_Texture_destructAndFree (156 B, 39 insts) -> readable C in src/game_depth.c (match: 100.0 %, 0 diffs)
  - Deliverable: Complete destructor for texture handle. Inlines buffer release logic, invokes atn_LoadHandle_destructor(&this->handle, 0), and when scalar deletion flag > 0, deallocates object instance memory via dtor_80084684(this).
Named:
- fn_800D58A4 -> atn_LH_Texture_release (evidence: called across 6 files to release texture buffer and detach load handle)
- fn_800D5808 -> atn_LH_Texture_destructAndFree (evidence: passed as deletion callback across 40 files in resource and actor managers)
Notes:
- Completes C conversion of the entire atn_LH_Texture lifecycle quartet (constructor: 120 B, destructor: 88 B, release: 100 B, destructAndFree: 156 B = 464 bytes total), achieving 100.0% exact byte match across all four routines.
- Updated prototypes across all 46 caller translation units.
Next:
1. Decompile task registration helper fn_8047AEBC called by taskManager_initSystem.
2. Batch 11 renames: Event::Puppeteer<atn::Model> and Event::Puppeteer<CharaTask> (lbl_8072F8A8, lbl_8072F8C8) and AI::Script::CharaAi family.


### 2026-11-01 � Unit A2: C Decompilation of atn_LH_Texture and Task Manager Bootstrap Resolution

Numbers:  progress before -> after: 99.30 % -> 99.30 % (7,425,512 / 7,477,608 bytes, 18,054 / 18,155 functions)
Self-check (asm void): git diff -U0 -- src/ shows -4 / +2 (net conversion: 2 functions converted from asm void to readable C)
Decompiled (100.0 % byte match):
- atn_LH_Texture_constructor (120 B, 30 insts) -> readable C in src/game_depth.c (match: 100.0 %, 0 diffs)
  - Deliverable: Initializes 0x30-byte atn_LH_Texture object. Constructs embedded atn::LoadHandle at +0x20 via atn_LoadHandle_constructor, assigns vtable lbl_8078FFB0 (atn::LH_Texture), zeroes handle refcount/status fields at +0x28..+0x2B, and fills the initial 0x20 bytes with debug sentinel 0xBAD0F00D (lis r4, 0xbad1; subi r4, r4, 0xff3; bl memset).
- atn_LH_Texture_destructor (88 B, 22 insts) -> readable C in src/game_depth.c (match: 100.0 %, 0 diffs)
  - Deliverable: Scalar deleting destructor for atn_LH_Texture. Calls atn_LoadHandle_destructor(&this->handle, 0), and if scalar delete flag > 0, frees object heap memory via dtor_80084684.
- Prototype hygiene: updated forward declarations from void f(void) to proper typed struct signatures across 33 caller translation units.
Named:
- fn_8047A4C8 -> taskManager_initSystem (evidence: the real task-manager constructor and main system bootstrapper, 2548 B; called directly from main() at line 470 of src/game_event_cutscene_actor.c. Sets up paired-single GQR2..GQR5, DVDInit, NWC24, SCGetLanguage, logs step strings '0\\n'..'7\\n', and at 0x8047A604 allocates the 12-byte task manager global struct lbl_8087EE94 via addi r3,0,12 -> bl fn_80084320 -> zeroes 3 words -> stw r3,-26668(r13). It is the ONLY writer of lbl_8087EE94 in the DOL)
- lbl_8087EE94 -> g_TaskManager (evidence: 12-byte task manager queue header in .sbss; r13 - 0x682C = 0x808856C0 - 0x682C = 0x8087EE94. Read by game_event_cutscene_actor.c, game_boss_cocoon_shockwave.c, and game_sound.c)
- fn_800D7278 -> tex_bakeCharacterTexture (evidence: character texture bake routine, 1252 B in src/game_occ.c; queries texture dimensions via GXGetTexObjWidth/Height/Fmt from atn_LH_Texture at +0xC, executes EFB copy + GXDrawDone + readback to CPU memory)
Notes on Priority List & Dossier Corrections:
- fn_802189EC: struck from task manager constructor claim. AP-BE proved __init_registers sets r13 = 0x808856C0, not 0x808852A0 (an exact 0x420 error). It is the player equipment priority CSV loader (/boot/player_weapon_priority.csv, /boot/player_protector_priority.csv, /boot/player_param.csv).
- fn_80207F80: marked done (220 B, 55/55 instructions, 100% byte match decompiled to C in src/game_system_assert.c).
- fn_8036F268: marked named as world_updateMapTransition (2276 B, only writer of +0x5538 = 1 at lbl_8087F430 + 0x360).
- Local label hygiene: all local asm labels for taskManager_initSystem and tex_bakeCharacterTexture normalized to lbl_<new>_* across src/game_event_cutscene_actor.c and src/game_occ.c.
Next:
1. Decompile taskManager_initSystem / sub-routines (e.g. fn_8047AEBC task registration helper).
2. Decompile tex_bakeCharacterTexture helper routines.
3. Batch 11 renames in Event::Puppeteer<atn::Model> and Event::Puppeteer<CharaTask> (lbl_8072F8A8, lbl_8072F8C8).


### 2026-11-01 � Batch 10: atn::Fade*, atn::LensFlare, ArenaTask, AreaEffConfig, and Arms Renames (25 functions)

Numbers:  progress before -> after: 99.30 % -> 99.30 % (7,425,512 / 7,477,608 bytes, 18,054 / 18,155 functions)
Named:
- fn_8006A6BC -> atn_FadeCapture_destructor (evidence: virtual destructor slot 0 in vtable lbl_80777B08 [RTTI atn::FadeCapture at 0x80777B40])
- fn_8006A72C -> atn_FadeCapture_execute (evidence: virtual execute slot 1 in vtable lbl_80777B08 [RTTI atn::FadeCapture])
- fn_8006A940 -> atn_Fade_slot2 (evidence: virtual slot 2 in vtable lbl_80777B08, lbl_80777B48, lbl_80777B88 [shared across atn::Fade*])
- fn_8006A734 -> atn_FadeCapture_draw (evidence: virtual draw slot 3 in vtable lbl_80777B08 [RTTI atn::FadeCapture])
- fn_8006A318 -> atn_FadeColor_destructor (evidence: virtual destructor slot 0 in vtable lbl_80777B48 [RTTI atn::FadeColor at 0x80777B80])
- fn_8006A944 -> atn_Fade_slot1 (evidence: virtual slot 1 in vtable lbl_80777B48 and lbl_80777B88)
- fn_8006A374 -> atn_FadeColor_draw (evidence: virtual draw slot 3 in vtable lbl_80777B48 [RTTI atn::FadeColor])
- fn_8006A09C -> atn_FadeCommon_destructor (evidence: virtual destructor slot 0 in vtable lbl_80777B88 [RTTI atn::FadeCommon at 0x80777BB8])
- fn_8006A94C -> atn_FadeCommon_draw (evidence: virtual draw slot 3 in vtable lbl_80777B88 [RTTI atn::FadeCommon])
- fn_8006BC64 -> atn_FileList_destructor (evidence: virtual destructor slot 0 in vtable lbl_80777BC0 [RTTI atn::FileList at 0x80777BD0])
- fn_8007741C -> atn_LensFlare_destructor (evidence: virtual destructor slot 0 in vtable lbl_80777D08 [RTTI atn::LensFlare at 0x80777D38])
- fn_80077548 -> atn_LensFlare_draw (evidence: virtual draw slot 1 in vtable lbl_80777D08 [RTTI atn::LensFlare])
- fn_80079038 -> atn_LensFlare_slot3 (evidence: virtual slot 2 in vtable lbl_80777D08 [RTTI atn::LensFlare])
- fn_80079040 -> atn_LensFlare_slot4 (evidence: virtual slot 3 in vtable lbl_80777D08 [RTTI atn::LensFlare])
- fn_80043214 -> ArenaTask_constructor (evidence: initializes ArenaTask, calls atn_Task_constructor, assigns vtable lbl_80777358 [RTTI ArenaTask at 0x80777388])
- fn_800434A8 -> ArenaTask_destructor (evidence: virtual destructor slot 0 in vtable lbl_80777358 [RTTI ArenaTask]; calls atn_Task_destructor and deallocates memory)
- fn_80043508 -> ArenaTask_slot1 (evidence: virtual slot 1 in vtable lbl_80777358 [RTTI ArenaTask]; branches to fn_800D3FA4 thunk)
- fn_8004350C -> ArenaTask_execute (evidence: virtual execute slot 2 in vtable lbl_80777358 [RTTI ArenaTask])
- fn_800437A4 -> ArenaTask_draw (evidence: virtual draw slot 3 in vtable lbl_80777358 [RTTI ArenaTask])
- fn_80041C4C -> AreaEffConfig_destructor (evidence: virtual destructor slot 0 in vtable lbl_807772E8 [RTTI AreaEffConfig at 0x80777318]; destroys nested atn::LH_Efp and atn::Task)
- fn_80041CE4 -> AreaEffConfig_execute (evidence: virtual execute slot 1 in vtable lbl_807772E8 [RTTI AreaEffConfig]; checks effect handle readiness and updates task status flags)
- fn_80044134 -> Arms_destructor (evidence: virtual destructor slot 0 in vtable lbl_80777494 [RTTI Arms at 0x807774B0]; cleans up weapon collision and model components)
- fn_8004424C -> Arms_execute (evidence: virtual execute slot 1 in vtable lbl_80777494 [RTTI Arms])
- fn_80044BB0 -> Arms_slot3 (evidence: virtual slot 2 in vtable lbl_80777494 [RTTI Arms])
- fn_800457A0 -> Arms_slot4 (evidence: virtual slot 3 in vtable lbl_80777494 [RTTI Arms]; returns immediately blr)
Decompiled: none in this unit
Notes:
- Resolves Track B review on tools/patch_ldscript.py:
  - tools/project.py split rule invokes tools/patch_ldscript.py to inject essential linker symbols into build/SLSEXJ/ldscript.lcf.
  - Committing tools/patch_ldscript.py ensures reproducible splits across clean worktrees without linker script failures.
  - Verified report.json before/after: exactly 7,425,512 / 7,477,608 bytes (18,054 / 18,155 functions, 99.30% matched).
- Full local label hygiene: all 269 local lbl_fn_* assembly labels inside caller asm blocks were simultaneously normalized to lbl_<new>_* across 8 source files.
Next:
1. atn_LH_Texture_constructor (fn_800D5738, 120 B) and atn_LH_Texture_destructor (fn_800D57B0, 88 B) -> decompile to C in src/game_depth.c.
2. fn_800D7278 (1252 B): character texture bake (EFB copy + GXDrawDone + readback).
3. Batch 11 renames: Event::Puppeteer<atn::Model> and Event::Puppeteer<CharaTask> (lbl_8072F8A8, lbl_8072F8C8) and AI::Script::CharaAi family.


### 2026-11-01 — Batch 9: atn::DrawHelper Immediate-Mode 2D/3D Rendering Commands Renames (25 functions)

Numbers:  progress before -> after: 99.30 % -> 99.30 % (7,425,512 / 7,477,608 bytes, 18,054 / 18,155 functions)
Named:
- fn_8005DE30 -> atn_DrawHelper_destructor (evidence: virtual destructor slot 0 in vtable lbl_807777C0 [atn::DrawHelper])
- fn_80068D70 -> atn_ComDrawWindow_destructor (evidence: virtual destructor slot 0 in vtable lbl_807777D8 [atn::DrawHelper::ComDrawWindow])
- fn_800685E4 -> atn_ComDrawWindow_execute (evidence: virtual execute slot 2 in vtable lbl_807777D8 [atn::DrawHelper::ComDrawWindow])
- fn_80068D30 -> atn_ComDrawD3TextureMask_destructor (evidence: virtual destructor slot 0 in vtable lbl_80777818 [atn::DrawHelper::ComDrawD3TextureMask])
- fn_80068164 -> atn_ComDrawD3TextureMask_execute (evidence: virtual execute slot 2 in vtable lbl_80777818 [atn::DrawHelper::ComDrawD3TextureMask])
- fn_80068CF0 -> atn_ComDrawColliTree_destructor (evidence: virtual destructor slot 0 in vtable lbl_80777858 [atn::DrawHelper::ComDrawColliTree])
- fn_80067FFC -> atn_ComDrawColliTree_execute (evidence: virtual execute slot 2 in vtable lbl_80777858 [atn::DrawHelper::ComDrawColliTree])
- fn_80068CB0 -> atn_ComDrawColliObject_destructor (evidence: virtual destructor slot 0 in vtable lbl_80777898 [atn::DrawHelper::ComDrawColliObject])
- fn_80067EB8 -> atn_ComDrawColliObject_execute (evidence: virtual execute slot 2 in vtable lbl_80777898 [atn::DrawHelper::ComDrawColliObject])
- fn_80068C70 -> atn_ComDrawFontSideFade_destructor (evidence: virtual destructor slot 0 in vtable lbl_807778D8 [atn::DrawHelper::ComDrawFontSideFade])
- fn_800678BC -> atn_ComDrawFontSideFade_execute (evidence: virtual execute slot 2 in vtable lbl_807778D8 [atn::DrawHelper::ComDrawFontSideFade])
- fn_80061DEC -> atn_ComDrawFont_destructor (evidence: virtual destructor slot 0 in vtable lbl_80777920 [atn::DrawHelper::ComDrawFont])
- fn_80067480 -> atn_ComDrawFont_execute (evidence: virtual execute slot 2 in vtable lbl_80777920 [atn::DrawHelper::ComDrawFont])
- fn_80068C30 -> atn_ComDrawTextureMaskMono_destructor (evidence: virtual destructor slot 0 in vtable lbl_80777960 [atn::DrawHelper::ComDrawTextureMaskMono])
- fn_80066A74 -> atn_ComDrawTextureMaskMono_execute (evidence: virtual execute slot 2 in vtable lbl_80777960 [atn::DrawHelper::ComDrawTextureMaskMono])
- fn_80068BF0 -> atn_ComDrawTextureMono_destructor (evidence: virtual destructor slot 0 in vtable lbl_807779A8 [atn::DrawHelper::ComDrawTextureMono])
- fn_80066098 -> atn_ComDrawTextureMono_execute (evidence: virtual execute slot 2 in vtable lbl_807779A8 [atn::DrawHelper::ComDrawTextureMono])
- fn_800602A8 -> atn_ComDrawTextureMask_destructor (evidence: virtual destructor slot 0 in vtable lbl_807779F0 [atn::DrawHelper::ComDrawTextureMask])
- fn_80065B34 -> atn_ComDrawTextureMask_execute (evidence: virtual execute slot 2 in vtable lbl_807779F0 [atn::DrawHelper::ComDrawTextureMask])
- fn_80068BB0 -> atn_ComDrawTextureAdd_destructor (evidence: virtual destructor slot 0 in vtable lbl_80777A30 [atn::DrawHelper::ComDrawTextureAdd])
- fn_800656C8 -> atn_ComDrawTextureAdd_execute (evidence: virtual execute slot 2 in vtable lbl_80777A30 [atn::DrawHelper::ComDrawTextureAdd])
- fn_8005FD40 -> atn_ComDrawTexture_destructor (evidence: virtual destructor slot 0 in vtable lbl_80777A70 [atn::DrawHelper::ComDrawTexture])
- fn_8006533C -> atn_ComDrawTexture_execute (evidence: virtual execute slot 2 in vtable lbl_80777A70 [atn::DrawHelper::ComDrawTexture])
- fn_80068B70 -> atn_ComDrawLine_destructor (evidence: virtual destructor slot 0 in vtable lbl_80777AB0 [atn::DrawHelper::ComDrawLine])
- fn_80065060 -> atn_ComDrawLine_execute (evidence: virtual execute slot 2 in vtable lbl_80777AB0 [atn::DrawHelper::ComDrawLine])
Decompiled: none in this unit
Notes:
- Decodes the `atn::DrawHelper` immediate-mode command drawing engine:
  - Subclasses implementing `atn::IRender` queue 2D/3D primitive rendering commands: line rendering (`ComDrawLine`), textured quads with blending (`ComDrawTexture`, `ComDrawTextureAdd`, `ComDrawTextureMask`, `ComDrawTextureMono`), debug collision wireframes (`ComDrawColliObject`, `ComDrawColliTree`), text fonts with edge fading (`ComDrawFont`, `ComDrawFontSideFade`), and GUI windows (`ComDrawWindow`).
  - All 23 local `lbl_fn_*` assembly labels inside caller asm blocks were simultaneously normalized to `lbl_atn_*` across 4 source files (`src/game_enemy.c`, `src/game_equip.c`, `src/game_party.c`, `src/game_skill.c`).
Next:
1. `atn_LH_Texture_constructor` (`fn_800D5738`, 120 B) and `atn_LH_Texture_destructor` (`fn_800D57B0`, 88 B) -> decompile to C in `src/game_depth.c`.
2. `fn_800D7278` (1252 B): character texture bake (EFB copy + `GXDrawDone` + readback).
3. Batch 10 renames in `atn::Fade*`, `atn::LensFlare`, and `ArenaTask`.


### 2026-11-01 — Batch 8: atn::ColliObject, atn::ColliTree, and atn::*Curve Animation Family Renames (31 functions)

Numbers:  progress before -> after: 99.30 % -> 99.30 % (7,425,512 / 7,477,608 bytes, 18,054 / 18,155 functions)
Named:
- fn_80059550 -> atn_ColliObject_destructor (evidence: virtual destructor slot 0 in vtable lbl_807775C0 [atn::ColliObject])
- fn_80058120 -> atn_ColliObject_testRay (evidence: virtual ray intersection test slot 1 in vtable lbl_807775C0 [atn::ColliObject])
- fn_8005823C -> atn_ColliObject_testSphere (evidence: virtual sphere intersection test slot 2 in vtable lbl_807775C0 [atn::ColliObject])
- fn_80058358 -> atn_ColliObject_testCapsule (evidence: virtual capsule intersection test slot 3 in vtable lbl_807775C0 [atn::ColliObject])
- fn_80058474 -> atn_ColliObject_testBox (evidence: virtual box intersection test slot 4 in vtable lbl_807775C0 [atn::ColliObject])
- fn_8005886C -> atn_ColliObject_getAABB (evidence: virtual AABB calculation slot 5 in vtable lbl_807775C0 [atn::ColliObject])
- fn_800595D8 -> atn_ColliTree_destructor (evidence: virtual destructor slot 0 in vtable lbl_80777588 [atn::ColliTree])
- fn_80058C20 -> atn_ColliTree_testRay (evidence: virtual ray intersection test slot 1 in vtable lbl_80777588 [atn::ColliTree])
- fn_80058D0C -> atn_ColliTree_testSphere (evidence: virtual sphere intersection test slot 2 in vtable lbl_80777588 [atn::ColliTree])
- fn_80058DF8 -> atn_ColliTree_testCapsule (evidence: virtual capsule intersection test slot 3 in vtable lbl_80777588 [atn::ColliTree])
- fn_800591D4 -> atn_ColliTree_testBox (evidence: virtual box intersection test slot 4 in vtable lbl_80777588 [atn::ColliTree])
- fn_8005C248 -> atn_SinusCurve_destructor (evidence: virtual destructor slot 0 in vtable lbl_80777788 [atn::SinusCurve])
- fn_8005CAA4 -> atn_SinusCurve_evaluate (evidence: virtual evaluation slot 1 in vtable lbl_80777788 [atn::SinusCurve])
- fn_8005DD1C -> atn_SinusCurve_getDuration (evidence: virtual duration query slot 2 in vtable lbl_80777788 [atn::SinusCurve])
- fn_8005DD0C -> atn_SinusCurve_getDerivative (evidence: virtual derivative query slot 3 in vtable lbl_80777788 [atn::SinusCurve])
- fn_8005CC98 -> atn_CosinusCurve_destructor (evidence: virtual destructor slot 0 in vtable lbl_80777758 [atn::CosinusCurve])
- fn_8005CE94 -> atn_CosinusCurve_evaluate (evidence: virtual evaluation slot 1 in vtable lbl_80777758 [atn::CosinusCurve])
- fn_8005DCC8 -> atn_CosinusCurve_getDuration (evidence: virtual duration query slot 2 in vtable lbl_80777758 [atn::CosinusCurve])
- fn_8005DCB8 -> atn_CosinusCurve_getDerivative (evidence: virtual derivative query slot 3 in vtable lbl_80777758 [atn::CosinusCurve])
- fn_8005D08C -> atn_ConstantCurve_destructor (evidence: virtual destructor slot 0 in vtable lbl_80777728 [atn::ConstantCurve])
- fn_8005D27C -> atn_ConstantCurve_evaluate (evidence: virtual evaluation slot 1 in vtable lbl_80777728 [atn::ConstantCurve])
- fn_8005DCB0 -> atn_ConstantCurve_getDuration (evidence: virtual duration query slot 2 in vtable lbl_80777728 [atn::ConstantCurve])
- fn_8005DCA0 -> atn_ConstantCurve_getDerivative (evidence: virtual derivative query slot 3 in vtable lbl_80777728 [atn::ConstantCurve])
- fn_8005D464 -> atn_Polynomial1Curve_destructor (evidence: virtual destructor slot 0 in vtable lbl_807776F8 [atn::Polynomial1Curve])
- fn_8005D664 -> atn_Polynomial1Curve_evaluate (evidence: virtual evaluation slot 1 in vtable lbl_807776F8 [atn::Polynomial1Curve])
- fn_8005DC90 -> atn_Polynomial1Curve_getDuration (evidence: virtual duration query slot 2 in vtable lbl_807776F8 [atn::Polynomial1Curve])
- fn_8005DC74 -> atn_Polynomial1Curve_getDerivative (evidence: virtual derivative query slot 3 in vtable lbl_807776F8 [atn::Polynomial1Curve])
- fn_8005D84C -> atn_Polynomial2Curve_destructor (evidence: virtual destructor slot 0 in vtable lbl_807776C8 [atn::Polynomial2Curve])
- fn_8005DA34 -> atn_Polynomial2Curve_evaluate (evidence: virtual evaluation slot 1 in vtable lbl_807776C8 [atn::Polynomial2Curve])
- fn_8005DC54 -> atn_Polynomial2Curve_getDuration (evidence: virtual duration query slot 2 in vtable lbl_807776C8 [atn::Polynomial2Curve])
- fn_8005DC2C -> atn_Polynomial2Curve_getDerivative (evidence: virtual derivative query slot 3 in vtable lbl_807776C8 [atn::Polynomial2Curve])
Decompiled: none in this unit
Notes:
- Resolves composite collision trees (`atn::ColliTree`), composite collision objects (`atn::ColliObject`), and the entire family of procedural mathematical animation curves (`atn::*Curve`):
  - `atn::ColliObject` and `atn::ColliTree` aggregate primitive collision tests across meshes and hierarchy nodes.
  - The `atn::*Curve` hierarchy implements 4 virtual operations: scalar deleting destructor (slot 0), position/value evaluation at float time $t$ (slot 1), time duration query (slot 2), and first derivative / slope computation (slot 3).
  - All 19 local `lbl_fn_*` assembly labels inside caller asm blocks were simultaneously normalized to `lbl_atn_*` across 3 source files (`src/game_mission.c`, `src/game_party.c`, `src/game_talk.c`).
Next:
1. `atn_LH_Texture_constructor` (`fn_800D5738`, 120 B) and `atn_LH_Texture_destructor` (`fn_800D57B0`, 88 B) -> decompile to C in `src/game_depth.c`.
2. `fn_800D7278` (1252 B): character texture bake (EFB copy + `GXDrawDone` + readback).
3. Batch 9 renames in `atn::DrawHelper` and `Event::Puppeteer`.


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


### 2026-11-01 - Batch 11: Top High-Frequency Queue Routines (29 routines, 3,582 logged hits)

Numbers:  progress before -> after: 99.30 % -> 99.30 % (7,425,512 / 7,477,608 bytes, 18,054 / 18,155 functions)
Self-check: git diff -U0 -- src/ for `asm void`: -29 / +29 (net 0 conversions, 29 renames)
Named:
- fn_806255E0 -> CXUncompressLZ (Queue #1, 970 hits: Nintendo SDK LZ77 decompressor in src/scapi.c)
- fn_806254D0 -> CXUncompressAny (Queue #1 dispatch: checks compression header 0x10/0x20/0x30/0x80 and routes to LZ/Huffman/RL/Diff)
- fn_80625730 -> CXUncompressHuffman (Nintendo SDK Huffman decompressor in src/scapi.c)
- fn_80625890 -> CXUnfilterDiff (Nintendo SDK differential 8-bit filter in src/scapi.c)
- fn_80615560 -> GXCopyTex (Queue #2, 609 hits: EFB copy to texture in src/GXFrameBuf.c)
- fn_80615420 -> GXCopyDisp (Queue #12, display copy to XFB in src/GXFrameBuf.c)
- fn_80614C80 -> GXSetDispCopySrc (src/GXFrameBuf.c)
- fn_80614CC0 -> GXSetTexCopySrc (src/GXFrameBuf.c)
- fn_80614D00 -> GXSetDispCopyDst (src/GXFrameBuf.c)
- fn_80614D30 -> GXSetTexCopyDst (src/GXFrameBuf.c)
- fn_806179E0 -> GXSetNumTevStages (Queue #11, 240 hits: sets TEV stage count and dirtyState |= 0x4 in src/GXTev.c)
- fn_80617650 -> GXSetTevKColorSel (Queue #15, 233 hits: sets TEV konst color selection in src/GXTev.c)
- fn_806176A0 -> GXSetTevKAlphaSel (sets TEV konst alpha selection in src/GXTev.c)
- fn_806176F0 -> GXSetTevSwapMode (sets TEV swap mode table in src/GXTev.c)
- fn_80618350 -> GXLoadPosMtxImm (Queue #16, 230 hits: loads 3x4 position matrix into XF register in src/GXTev.c)
- fn_806183A0 -> GXLoadNrmMtxImm3x3 (Queue #24, 9 hits: loads 3x3 normal matrix into XF register in src/GXTev.c)
- fn_80618400 -> GXSetCurrentMtx (sets current matrix index in __GXData in src/GXTev.c)
- fn_80618420 -> GXLoadTexMtxImm (Queue #26, 7 hits: loads texture matrix into XF register in src/GXTev.c)
- fn_8008CD1C -> atn_Matrix_copy (Queue #14, 234 hits: 48-byte paired-single matrix copy in src/game_minimap.c)
- fn_8008CCE8 -> atn_Matrix_copy_2 (inlined matrix copy helper in src/game_minimap.c)
- fn_8008CD50 -> atn_Matrix_concat (swaps operands and tails into PSMTXConcat in src/game_minimap.c)
- fn_80206F44 -> weaponEffect_loadCSV (Queue #5, 375 hits: loads /boot/weapon_effect.csv in src/game_system_assert.c)
- fn_800954DC -> atn_Lockon_updateTargetTextures (Queue #3, 440 hits: lockon target texture handle manager calling atn_LH_Texture_destructAndFree)
- fn_800D59B8 -> atn_LH_Texture_update (Queue #13, 235 hits: checks atn_LoadHandle_isLoading and status == 3 in src/game_depth.c)
- fn_80473EFC -> atn_LoadHandle_getStatus (returns status byte at m_entry + 0x4 in src/game_boss_cocoon_shockwave.c)
- fn_80473F18 -> atn_LoadHandle_getName (returns name string at m_entry + 0x6 in src/game_boss_cocoon_shockwave.c)
- fn_80473F34 -> atn_LoadHandle_getData (returns resource data pointer at m_entry + 0x48 in src/game_boss_cocoon_shockwave.c)
- fn_80473F50 -> atn_LoadHandle_isLoading (returns 1 if status == 1 or status == 2 in src/game_boss_cocoon_shockwave.c)
- fn_80083614 -> atn_SmallAllocator_allocate (Queue #4, 391 hits: SmallAllocator<6> virtual allocate method at 0x80778590[1])
Decompiled: none in this unit (renames only)
Notes:    All 29 symbols directly selected from Track B's probe log hit ranking in docs/TRACK_A_QUEUE.md. Covers 3,582 logged probe hits. Normalized local labels in 18 files. Zero build errors or byte differences across all 1,025 compilation units.
Next:     Conversion of A2 targets or high-frequency SDK helpers to matching C.

### 2026-11-01 - Unit A2: Decompiled 5 Task/Event functions (44 B) to 100.0% matching C

Numbers:  progress before -> after: 99.30 % -> 99.30 % (7,425,512 / 7,477,608 bytes, 18,054 / 18,155 functions)
Self-check: git diff -U0 -- src/ for `asm void`: -5 / +0 (net 5 C conversions)
Decompiled:
- `atn_TaskEntry_zeroInit` (`fn_8047B594`, 12 B, 100.0% match in `src/game_event_cutscene_voice.c`):
  ```c
  void atn_TaskEntry_zeroInit(void* obj) {
      *(u32*)obj = 0;
  }
  ```
  Default constructor / element zero-init for `TaskEntry` slots within `atn::Vector<TaskEntry>` array allocated by `taskManager_addTask` (`fn_8047AEBC`).
- `fn_8047C770` (8 B, 100.0% match in `src/game_event_cutscene_voice.c`):
  ```c
  void* fn_8047C770(void* obj) {
      return (char*)obj + 0x3c;
  }
  ```
- `fn_8047C778` (8 B, 100.0% match in `src/game_event_cutscene_voice.c`):
  ```c
  void* fn_8047C778(void* obj) {
      return (char*)obj + 0x2c;
  }
  ```
- `fn_8047C780` (8 B, 100.0% match in `src/game_event_cutscene_voice.c`):
  ```c
  void* fn_8047C780(void* obj) {
      return (char*)obj + 0x198;
  }
  ```
- `fn_8047C7D4` (8 B, 100.0% match in `src/game_event_cutscene_voice.c`):
  ```c
  void* fn_8047C7D4(void* obj) {
      return (char*)obj + 0x238;
  }
  ```
Architecture Telemetry for Track B:
- Fully deciphered `taskManager_initSystem` (`0x8047A4C8`, 2548 B) and `g_TaskManager` (`0x8087EE94`):
  1. `g_TaskManager` is a standard 12-byte dynamic array/vector (`+0x0` data pointer, `+0x4` size, `+0x8` capacity), allocated as 12 bytes via `fn_80084320` and initialized to 3 zero words.
  2. Boot sequence executes stages marked by string table `lbl_8075626C`:
     - Stage 0: `OSInit()`, sets GQR2..GQR5 quantization registers, initializes DVD and language.
     - Stage 0.1: Allocates task manager instance and initial task at `lbl_8087F530`.
     - Stage 0.2: Reads `/config.ini`.
     - Registers Task 1 (descriptor `lbl_807C8AA8`) via `taskManager_addTask` (`fn_8047AEBC`), which allocates capacity for 8 entries (176 bytes = 0xB0) initialized with `atn_TaskEntry_zeroInit`.
     - Registers Task 2 (descriptor `lbl_807C8AA0`).
     - Preloads `/preload/boot.pk`.
     - Configures fonts.
     - Calls `fn_80207F80` (the 48 subsystem initializers in sequence, already decompiled to C).
Prototypes swept: Updated extern declarations in `src/game_coliseum_reward.c` and `src/game_event_cutscene_actor.c`.
Next:     Decompile next subroutines of `taskManager_initSystem` or field transition `fn_8036F268`.

## Session 2026-11-01 - Batch 12: High-yield queue naming (950k+ probe hits)
Subject:  track-a: Batch 12 - name 27 high-yield queue routines (covers 950k+ probe hits) progress 99.30% -> 99.30%
Scope:    Rename 27 top-ranking routines hit by Track B instruments across 62 files.
Checklist:
  1. symbols.txt: Renamed 27 functions in place.
  2. All src/ references updated across 62 files.
  3. Local labels lbl_fn_* -> lbl_<newName>_* normalized.
  4. External prototypes swept across all translation units.
  5. report.json clean, ninja passed (orig/main.dol: OK).
Self-check: git diff -U0 -- src/ for 'asm void': -27 / +27 (balanced).
Names applied:
  - atn_Arc_loadEntry (fn_8046C2D4, 296 B, 790,554 probe hits)
  - atn_Arc_decompressEntry (fn_8046BBF0, 756 B, 110,445 probe hits)
  - atn_Arc_getFileEntry (fn_8046FD1C, 16 B)
  - atn_Arc_findFile (fn_8046FBB0, 364 B, 291 probe hits)
  - atn_Model_loadNodeMatrices (fn_8009B9E8, 436 B, 259 probe hits)
  - atn_Model_loadTexMatrices (fn_8009BB9C, 928 B, 237 probe hits)
  - atn_Model_setupMeshMaterial (fn_8009BF3C, 1484 B, 248 probe hits)
  - gx_applyRenderState (fn_800761A8, 536 B, 248 probe hits)
  - atn_HUD_projectWorldPoints (fn_8009F4AC, 476 B, 246 probe hits)
  - cmpr_encodeBlock (fn_80069060, 552 B, 163 probe hits)
  - cmpr_encodeTexture (fn_80069288, 468 B, 156 probe hits)
  - GXDrawDone (fn_806167B0, 72 B, 9 probe hits)
  - GXFlush (fn_80613C60, 92 B, 7,588 probe hits)
  -__GXSetDirtyState (fn_80614510, 640 B, 4,303 probe hits)
  - GXSetArray (fn_80613910, 64 B, 2,686 probe hits)
  - OSInitMutex (fn_805F30F0, 56 B)
  - OSLockMutex (fn_805F3130, 220 B)
  - OSUnlockMutex (fn_805F3210, 200 B, 22,924 probe hits)
  - GXSetZCompLoc (fn_80617DA0, 44 B)
  - GXSetDither (fn_80617DD0, 44 B)
  - GXSetZMode (fn_80617E00, 52 B)
  - GXSetColorUpdate (fn_80617E40, 48 B)
  - GXSetBlendMode (fn_80617E70, 240 B)
  - GXSetAlphaUpdate (fn_80617F20, 48 B)
  - GXSetDstAlpha (fn_80617F50, 48 B)
  - GXGetFifoStatus (fn_80612A60, 144 B)
  - GXGetFifoCount (fn_80612AF0, 20 B)
Progress: 99.30% matched (7,425,512 / 7,477,608 bytes), 18,054 / 18,155 functions matched.

## Session 2026-11-01 - Conversion: world_isTransitionFinished to 100.0% matching C
Subject:  track-a: decompile world_isTransitionFinished (64 B) to 100.0% matching C progress 99.30% -> 99.30%
Scope:    Decompile world_isTransitionFinished (0x80370C2C, 64 B) in src/game_system_kpad_calib.c.
Checklist:
  1. src/game_system_kpad_calib.c: world_isTransitionFinished converted from inline asm to C.
  2. Prototype swept in caller unit src/game_dungeon_torch_light.c.
  3. report.json clean, ninja passed (orig/main.dol: OK).
Self-check: git diff -U0 -- src/ for 'asm void': -1 / +0 (net 1 C conversion).
Decompiled C logic:
`c
int world_isTransitionFinished(void* world)
{
    u32* sub = *(u32**)((char*)world + 0x5620);
    if (sub[0x48 / 4] != 0) {
        return (s32)(sub[0x58 / 4] + sub[0x54 / 4]) < (s32)sub[0x4c / 4];
    }
    return 1;
}
`
Analysis for Track B:
- Reads world subsystem pointer at +0x5620 (WorldTransitionManager).
- If field_48 (transition active flag) == 0, returns 1 (transition complete / no transition in progress).
- If field_48 != 0, evaluates whether elapsed frames (field_58 + field_54) < total duration (field_4c).
- Returns 0 when still transitioning, 1 when finished.
Progress: 99.30% matched (7,425,512 / 7,477,608 bytes), 18,054 / 18,155 functions matched.

## Session 2026-11-01 - Batch 13: High-yield queue naming (265k+ probe hits)
Subject:  track-a: Batch 13 - name 19 high-yield queue routines (covers 265k+ probe hits) progress 99.30% -> 99.30%
Scope:    Rename 19 top-ranking routines hit by Track B instruments across 49 files in src/.
Checklist:
  1. symbols.txt: Renamed 19 functions in place.
  2. All src/ references updated across 49 files.
  3. Local labels lbl_fn_* -> lbl_<newName>_* normalized.
  4. External prototypes swept across all translation units.
  5. report.json clean, ninja passed (orig/main.dol: OK).
Self-check: git diff -U0 -- src/ for 'asm void': -19 / +19 (balanced).
Names applied:
  - gx_syncFrameFifo (fn_80071AFC, 612 B, 101,909 probe hits)
  - saveSlot_updateLoadState (fn_801F42A8, 320 B, 88,678 probe hits)
  - camera_setMode (fn_800EF588, 308 B, 44,322 probe hits)
  - taskManager_updateTasks (fn_80473FCC, 500 B, 13,018 probe hits)
  - gx_beginQuadBatch (fn_80074EC8, 3876 B, 8,702 probe hits)
  - ISFS_GetUsageAsync (fn_8061B3A0, 292 B, 3,399 probe hits)
  - atn_Reticle_updateDraw (fn_8009DE60, 900 B, 3,282 probe hits)
  - gx_drawScreenQuad (fn_80071E04, 2832 B, 1,891 probe hits)
  - layout_drawPane (fn_800A981C, 1592 B, 10 probe hits)
  - gx_setRenderStateParam (fn_80076760, 712 B, 7 probe hits)
  - msg_drawText (fn_80236938, 588 B, 13 probe hits)
  - font_renderString (fn_80234CD8, 3216 B, 12 probe hits)
  - atn_normalizePath (fn_8006A950, 84 B, 5 probe hits)
  - ISFS_Rename (fn_8061B180, 144 B)
  - ISFS_RenameAsync (fn_8061B290, 148 B)
  - ISFS_CreateFile (fn_8061B4D0, 256 B)
  - ISFS_CreateFileAsync (fn_8061B5D0, 260 B)
  - GXInvalidateVtxCache (fn_80613950, 16 B)
  - __GXSetVtxDesc (fn_80613960, 580 B, 5 probe hits)
Progress: 99.30% matched (7,425,512 / 7,477,608 bytes), 18,054 / 18,155 functions matched.

## Session 2026-11-01 - Conversion: atn_normalizePath to 100.0% matching C
Subject:  track-a: decompile atn_normalizePath (84 B) to 100.0% matching C progress 99.30% -> 99.30%
Scope:    Decompile atn_normalizePath (fn_8006A950, 0x8006A950, 84 B) in src/game_boss.c.
Checklist:
  1. src/game_boss.c: atn_normalizePath converted from inline asm to C.
  2. Prototypes swept across 5 caller units (game_boss_cocoon_rush.c, game_boss_cocoon_shockwave.c, game_boss_cocoon_spin.c, game_event_cutscene_cam.c, game_event_cutscene_mgr.c).
  3. report.json clean, ninja passed (orig/main.dol: OK).
Self-check: git diff -U0 -- src/ for 'asm void': -1 / +0 (net 1 C conversion).
Decompiled C logic:
`c
void atn_normalizePath(char* str)
{
    u32 len = strlen(str);
    u32 i;
    for (i = 0; i < len; i++) {
        if (str[i] == '\\') {
            str[i] = '/';
        }
    }
}
`
Analysis for Track B:
- Essential engine path normalizer called across file archive loading and cutscene loaders.
- Replaces all backslash separators '\\' with forward slashes '/' in place.
Progress: 99.30% matched (7,425,512 / 7,477,608 bytes), 18,054 / 18,155 functions matched.

## Session 2026-11-01 - Batch 14: High-yield queue naming (69k+ probe hits)
Subject:  track-a: Batch 14 - name 13 high-yield queue routines (covers 69k+ probe hits) progress 99.30% -> 99.30%
Scope:    Rename 13 top-ranking routines hit by Track B instruments across 95 files in src/.
Checklist:
  1. symbols.txt: Renamed 13 functions in place.
  2. All src/ references updated across 95 files.
  3. Local labels lbl_fn_* -> lbl_<newName>_* normalized.
  4. External prototypes swept across all translation units.
  5. report.json clean, ninja passed (orig/main.dol: OK).
Self-check: git diff -U0 -- src/ for 'asm void': -13 / +13 (balanced).
Names applied:
  - net_resetAllSockets (fn_80711530, 248 B, 14,210 probe hits)
  - atn_Skin_init (fn_800C41D0, 604 B, 10,341 probe hits)
  - atn_Fog_apply (fn_800D2494, 528 B, 8,939 probe hits)
  - texCache_freeBlock (fn_8022B114, 1844 B, 7,575 probe hits)
  - camera_isObjectVisible (fn_800F26D4, 764 B, 6,240 probe hits)
  - GXSetDrawSync (fn_80613FF0, 180 B, 4,704 probe hits)
  - atn_HUD_drawNodeList (fn_800B3464, 92 B, 3,704 probe hits)
  - talk_parseDialogue (fn_8005B710, 488 B, 3,459 probe hits)
  - quest_checkCondition (fn_80148B38, 396 B, 3,252 probe hits)
  - font_drawTextCenter (fn_800A2978, 60 B, 3,120 probe hits)
  - font_drawTextLeft (fn_800A29B4, 60 B)
  - font_drawTextRight (fn_800A29F0, 60 B, 1,580 probe hits)
  - saveSlot_readSummary (fn_801F4E8C, 124 B, 2,224 probe hits)
Progress: 99.30% matched (7,425,512 / 7,477,608 bytes), 18,054 / 18,155 functions matched.

## Session 2026-11-01 - Conversion: 7 font_drawText functions (420 B) to 100.0% matching C
Subject:  track-a: decompile 7 font_drawText functions (420 B) to 100.0% matching C progress 99.30% -> 99.30%
Scope:    Decompile font_drawTextCenter, font_drawTextLeft, font_drawTextRight, fn_800A2A2C, fn_800A2A68, fn_800A2AA4, fn_800A2AE0 (60 B each, 420 B total) in src/game_font.c.
Checklist:
  1. src/game_font.c: 7 font text rendering functions converted from inline asm to C.
  2. All declarations and caller contexts verified self-contained within game_font.c.
  3. report.json clean, ninja passed (orig/main.dol: OK).
Self-check: git diff -U0 -- src/ for 'asm void': -7 / +0 (net 7 C conversions).
Decompiled C logic:
`c
void font_drawTextCenter(void* font, const char* str)
{
    fn_800A500C(fn_8061F470(str), font, 3);
}

void font_drawTextLeft(void* font, const char* str)
{
    fn_800A500C(fn_8061F470(str), font, 5);
}

void font_drawTextRight(void* font, const char* str)
{
    fn_800A500C(fn_8061F470(str), font, 7);
}

void fn_800A2A2C(void* font, const char* str)
{
    fn_800A500C(fn_8061F470(str), font, 9);
}

void fn_800A2A68(void* font, const char* str)
{
    fn_800A500C(fn_8061F470(str), font, 0xd);
}

void fn_800A2AA4(void* font, const char* str)
{
    fn_800A500C(fn_8061F470(str), font, 0xf);
}

void fn_800A2AE0(void* font, const char* str)
{
    fn_800A500C(fn_8061F470(str), font, 0x11);
}
`
Analysis for Track B:
- UI font drawing pipeline dispatches strings with specific text alignment modes:
  - 3: Center alignment
  - 5: Left alignment
  - 7: Right alignment
  - 9, 13, 15, 17: Extended UI text formatting flags
Progress: 99.30% matched (7,425,512 / 7,477,608 bytes), 18,054 / 18,155 functions matched.

## Session 2026-11-01 - Batch 15: High-yield queue naming (61k+ probe hits)
Subject:  track-a: Batch 15 - name 13 high-yield queue routines (covers 61k+ probe hits) progress 99.30% -> 99.30%
Scope:    Rename 13 top-ranking routines hit by Track B instruments across 89 files in src/.
Checklist:
  1. symbols.txt: Renamed 13 functions in place.
  2. All src/ references updated across 89 files.
  3. Local labels lbl_fn_* -> lbl_<newName>_* normalized.
  4. External prototypes swept across all translation units.
  5. report.json clean, ninja passed (orig/main.dol: OK).
Self-check: git diff -U0 -- src/ for 'asm void': -13 / +13 (balanced).
Names applied:
  - atn_Model_updateAnimation (fn_800BDBC8, 4,392 B, 15,137 probe hits)
  - gimmick_updateAll (fn_8006D7B0, 6,040 B, 14,920 probe hits)
  - dialog_renderWindow (fn_80149A30, 9,088 B, 14,848 probe hits)
  - p2p_sendDataPacket (fn_8050FE48, 568 B, 6,842 probe hits)
  - NANDAsyncCallback (fn_80622310, 564 B, 1,874 probe hits)
  - OSReceiveMessage (fn_805F27A0, 168 B, 1,503 probe hits)
  - atn_Model_getBoneMatrix (fn_800132EC, 76 B, 1,372 probe hits)
  - weapon_getDamageParam (fn_8044D3A0, 412 B, 1,252 probe hits)
  - __GXSetIndTexMtx (fn_80618670, 48 B, 770 probe hits)
  - GXSetIndTexCoordScale (fn_806186A0, 48 B, 770 probe hits)
  - net_waitForEvent (fn_8071D950, 436 B, 1,503 probe hits)
  - net_pollEvent (fn_8071DBE0, 156 B, 748 probe hits)
  - net_workerThreadMain (fn_80718C40, 2,164 B, 748 probe hits)
Progress: 99.30% matched (7,425,512 / 7,477,608 bytes), 18,054 / 18,155 functions matched.

## Session 2026-11-01 - Conversion: atn_Model_getBoneMatrix to 100.0% matching C
Subject:  track-a: decompile atn_Model_getBoneMatrix (76 B) to 100.0% matching C progress 99.30% -> 99.30%
Function: atn_Model_getBoneMatrix (fn_800132EC, 76 B, in src/game_manager.c)
Checklist:
  1. Converted asm void atn_Model_getBoneMatrix to matching C implementation.
  2. Prototype swept across 19 referencing translation units:
     void* atn_Model_getBoneMatrix(void* model, u32 bone_id);
  3. report.json clean, ninja passed (orig/main.dol: OK).
Self-check: git diff -U0 -- src/ for 'asm void': -1 / +0 (conversion).
Source:
`c
void* atn_Model_getBoneMatrix(void* model, u32 bone_id)
{
    s32 idx = fn_80092814(model, bone_id, 0);
    if (idx < 0) {
        return NULL;
    } else {
        return (char*)*(void**)((char*)model + 0x3c) + idx * 0x30;
    }
}
`
Analysis for Track B:
- Retrieves the 3x4 transform matrix (48 bytes, 0x30) for a given bone ID in a model instance.
- Calls n_80092814(model, bone_id, 0) (in src/game_compass.c) to resolve the bone index.
- If found (idx >= 0), indexes into the matrix array pointer at model + 0x3c (*(void**)(model + 0x3c) + idx * 48).
- Returns NULL (0) if the bone was not found (idx < 0).
Progress: 99.30% matched (7,425,512 / 7,477,608 bytes), 18,054 / 18,155 functions matched.

## Session 2026-11-01 - Batch 16: High-yield queue naming (575k+ probe hits)
Subject:  track-a: Batch 16 - name 16 high-yield queue routines (covers 575k+ probe hits) progress 99.30% -> 99.30%
Scope:    Rename 16 top-ranking routines hit by Track B instruments across 15 files in src/.
Checklist:
  1. symbols.txt: Renamed 16 functions in place.
  2. All src/ references updated across 15 files.
  3. Local labels lbl_fn_* -> lbl_<newName>_* normalized.
  4. External prototypes swept across all translation units.
  5. report.json clean, ninja passed (orig/main.dol: OK).
Self-check: git diff -U0 -- src/ for 'asm void': -16 / +16 (balanced).
Names applied:
  - player_updateEquipment (fn_801F9FB0, 13,696 B, 108,082 probe hits)
  - player_dummyCallback (fn_801F9E6C, 4 B, 101,848 probe hits)
  - net_playerDummyCallback (fn_801ED90C, 4 B, 74,007 probe hits)
  - save_dummyCallback (fn_801F2A88, 4 B, 65,200 probe hits)
  - save_updateHeader (fn_801F2A8C, 2,332 B, 64,710 probe hits)
  - save_dummyCallback2 (fn_801F3FF4, 4 B, 52,225 probe hits)
  - world_dummyEventCallback (fn_80013CAC, 4 B, 30,069 probe hits)
  - skin_updateWeights (fn_800C3720, 184 B, 13,488 probe hits)
  - perf_recordElapsedTime (fn_804799CC, 76 B, 12,350 probe hits)
  - skin_initLink (fn_800C442C, 24 B, 10,395 probe hits)
  - world_Manager_update (fn_80366E54, 3,052 B, 9,728 probe hits)
  - world_Manager_draw (fn_80368280, 12,728 B, 8,822 probe hits)
  - world_Manager_destructor (fn_80366454, 2,284 B, 8,791 probe hits)
  - world_Manager_postUpdate (fn_8036B7F4, 4,716 B, 8,791 probe hits)
  - __AXGetBufferSamples (fn_80609D50, 44 B, 6,958 probe hits)
  - __GXGetOverflowCount (fn_80612E70, 16 B, 3,691 probe hits)
Key Architectural Findings:
  - WorldManager vtable (lbl_8078A3D0) fully resolved:
    [2]=world_Manager_destructor, [3]=world_Manager_update, [4]=world_Manager_draw,
    [5]=world_Manager_postUpdate, [6]=world_dummyEventCallback.
Progress: 99.30% matched (7,425,512 / 7,477,608 bytes), 18,054 / 18,155 functions matched.

## Session 2026-11-01 - Conversion: 7 routines (__GXGetOverflowCount, skin_initLink, 5 stubs) to 100.0% matching C
Subject:  track-a: decompile 7 routines (60 B) to 100.0% matching C progress 99.30% -> 99.30%
Functions:
  - __GXGetOverflowCount (fn_80612E70, 16 B, src/GXFifo.c)
  - skin_initLink (fn_800C442C, 24 B, src/game_skin.c)
  - world_dummyEventCallback (fn_80013CAC, 4 B, src/game_manager.c)
  - player_dummyCallback (fn_801F9E6C, 4 B, src/game_system_heap.c)
  - net_playerDummyCallback (fn_801ED90C, 4 B, src/game_net_player.c)
  - save_dummyCallback (fn_801F2A88, 4 B, src/game_save_header.c)
  - save_dummyCallback2 (fn_801F3FF4, 4 B, src/game_save_header.c)
Checklist:
  1. Converted 7 asm void functions to 100.0% matching C implementations.
  2. Prototypes swept across translation units.
  3. report.json clean, ninja passed (orig/main.dol: OK).
Self-check: git diff -U0 -- src/ for 'asm void': -7 / +0 (conversion).
Sources:
`c
// GXFifo.c
u32 __GXGetOverflowCount(void)
{
    u32 count = lbl_80880084;
    lbl_80880084 = 0;
    return count;
}

// game_skin.c
void skin_initLink(s32* link)
{
    link[0] = -1;
    link[1] = -1;
    link[2] = 0;
}

// game_manager.c, game_system_heap.c, game_net_player.c, game_save_header.c
void <stubName>(void) {}
`
Progress: 99.30% matched (7,425,512 / 7,477,608 bytes), 18,054 / 18,155 functions matched.

## Session 2026-11-01 - Batch 17: High-yield queue naming (120k+ probe hits)
Subject:  track-a: Batch 17 - name 16 high-yield queue routines (covers 120k+ probe hits) progress 99.30% -> 99.30%
Scope:    Rename 16 top-ranking routines hit by Track B instruments across 10 files in src/.
Checklist:
  1. symbols.txt: Renamed 16 functions in place.
  2. All src/ references updated across 10 files.
  3. Local labels lbl_fn_* -> lbl_<newName>_* normalized.
  4. External prototypes swept across all translation units.
  5. report.json clean, ninja passed (orig/main.dol: OK).
Self-check: git diff -U0 -- src/ for 'asm void': -16 / +16 (balanced).
Names applied:
  - spectateCamera_update (fn_80534074, 9,092 B, 30,934 probe hits)
  - spectateManager_update (fn_80532ABC, 3,952 B, 19,359 probe hits)
  - spectateManager_init (fn_805327B4, 776 B, 17,131 probe hits)
  - spectateView_update (fn_805363F8, 2,228 B, 17,131 probe hits)
  - player_syncPositionAndMotion (fn_801EFBE8, 1,916 B, 10,626 probe hits)
  - player_syncTimersAndClock (fn_801FF28C, 1,204 B, 10,612 probe hits)
  - dvd_renderFatalErrorScreen (fn_80363DBC, 2,312 B, 3,497 probe hits)
  - homeMenu_returnToWiiMenu (fn_80570CFC, 2,020 B, 3,489 probe hits)
  - dvd_initFatalErrorScreen (fn_803646C4, 1,316 B, 3,489 probe hits)
  - arms_updateWeaponState (fn_805A646C, 424 B, 3,386 probe hits)
  - arms_destructorBase (fn_805A6370, 148 B, 3,010 probe hits)
  - arms_attachWeapon (fn_805A6404, 104 B, 3,010 probe hits)
  - vec4_zero (fn_801FF740, 28 B)
  - timer_initField (fn_801FF75C, 20 B)
  - player_getClockFieldA0 (fn_801FF770, 8 B)
  - clock_dummyCallback (fn_801FF8EC, 4 B)
Progress: 99.30% matched (7,425,512 / 7,477,608 bytes), 18,054 / 18,155 functions matched.

## Session 2026-11-01 - Conversion: 4 clock routines (vec4_zero, timer_initField, player_getClockFieldA0, clock_dummyCallback) to 100.0% matching C
Subject:  track-a: decompile 4 routines (60 B) to 100.0% matching C progress 99.30% -> 99.30%
Functions:
  - vec4_zero (fn_801FF740, 28 B, src/game_system_clock.c)
  - timer_initField (fn_801FF75C, 20 B, src/game_system_clock.c)
  - player_getClockFieldA0 (fn_801FF770, 8 B, src/game_system_clock.c)
  - clock_dummyCallback (fn_801FF8EC, 4 B, src/game_system_clock.c)
Checklist:
  1. Converted 4 asm void functions to 100.0% matching C implementations.
  2. Used pooled SDA2 float constant lbl_80882CBC to ensure bit-identical code generation.
  3. report.json clean, ninja passed (orig/main.dol: OK).
Self-check: git diff -U0 -- src/ for 'asm void': -4 / +0 (conversion).
Sources:
`c
void vec4_zero(f32* v)
{
    v[0] = lbl_80882CBC;
    v[1] = lbl_80882CBC;
    v[2] = lbl_80882CBC;
    v[3] = lbl_80882CBC;
    v[4] = lbl_80882CBC;
}

void timer_initField(void* ptr)
{
    *(f32*)ptr = lbl_80882CBC;
    *((u32*)ptr + 1) = 0;
}

u32 player_getClockFieldA0(void* ptr)
{
    return *(u32*)((char*)ptr + 0xa0);
}

void clock_dummyCallback(void)
{
}
`
Progress: 99.30% matched (7,425,512 / 7,477,608 bytes), 18,054 / 18,155 functions matched.
