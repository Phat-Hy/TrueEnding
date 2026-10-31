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

