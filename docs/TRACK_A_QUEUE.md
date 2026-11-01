# The Track A queue that actually pays Track B

Generated from Track B's own probe logs — not from a subsystem sweep. Method: every `reader_pc` / `cia` /
frame `PC` / `block pc` value in `logs_ap/**/*.log` is resolved against `origin/track-a`'s `config/symbols.txt`,
and the distinct routines are ranked by how often they appear.

## Why this file exists

Measured 2026-11-01: **137 distinct routines appear in Track B's probe logs. 36 carry human names, 101 are still
`fn_`/`lbl_`.**

Batch 11 named 29 top queue routines (~3,582 logged hits).
Batch 12 named 27 critical routines covering over **950,000 logged hits**, resolving 21 of the original top 30 routines plus top archive loaders and GX/OS primitives (`atn_Arc_loadEntry` 790,554 hits, `atn_Arc_decompressEntry` 110,445 hits, `OSUnlockMutex` 22,924 hits, `GXFlush` 7,588 hits, `__GXSetDirtyState` 4,303 hits, `GXSetArray` 2,686 hits).

A bulk rename over a subsystem Track B never instruments buys nothing for the port; a rename over this list buys
readable logs immediately. So: **prefer this queue over an alphabetical or subsystem sweep**, and alternate one
A2-style C conversion per batch (current conversion priority: `taskManager_initSystem` — formerly `fn_8047A4C8` —
then `fn_8036F268`, then `fn_800D7278`).

The names are not cosmetic. `recomp/tls_sym.c` parses this map and every probe prints `name+0xOFFSET`; a name that
appears in this table is a name the port's diagnostics will use on its next run.

## Top 20 remaining unnamed routines in Track B probe logs

| function | address | size | hits in Track B's logs | source file |
|---|---|---|---|---|
| `fn_80071AFC` | `0x80071AFC` | 612 B | 101,909 | `src/game_script.c` |
| `fn_801F42A8` | `0x801F42A8` | 320 B | 88,678 | `src/game_save_slot.c` |
| `fn_800EF588` | `0x800EF588` | 308 B | 44,322 | `src/game_cam_mode.c` |
| `fn_800BDBC8` | `0x800BDBC8` | 4,392 B | 15,038 | `src/game_menu_layout.c` |
| `fn_8006D7B0` | `0x8006D7B0` | 6,040 B | 14,800 | `src/game_boss.c` |
| `fn_80149A30` | `0x80149A30` | 9,088 B | 14,772 | `src/game_actor_ai.c` |
| `fn_80711530` | `0x80711530` | 248 B | 14,112 | `src/game_net_sdk_054.c` |
| `fn_80473FCC` | `0x80473FCC` | 500 B | 13,018 | `src/game_boss_cocoon_laser_aim.c` |
| `fn_800C41D0` | `0x800C41D0` | 604 B | 10,260 | `src/game_joint.c` |
| `fn_800D2494` | `0x800D2494` | 528 B | 8,883 | `src/game_event_cutscene_actor.c` |
| `fn_80074EC8` | `0x80074EC8` | 3,876 B | 8,702 | `src/game_sequence.c` |
| `fn_8022B114` | `0x8022B114` | 1,844 B | 7,535 | `src/game_save_header.c` |
| `fn_8050FE48` | `0x8050FE48` | 568 B | 6,798 | `src/game_coliseum_ui.c` |
| `fn_801F9FB0` | `0x801F9FB0` | 13,696 B | 6,632 | `src/game_save_load.c` |
| `fn_800F26D4` | `0x800F26D4` | 764 B | 6,200 | `src/game_cam_action.c` |
| `fn_80534074` | `0x80534074` | 9,092 B | 4,752 | `src/game_sys_event_state.c` |
| `fn_800B3464` | `0x800B3464` | 92 B | 3,674 | `src/game_character.c` |
| `fn_8005B710` | `0x8005B710` | 488 B | 3,459 | `src/game_item_drop.c` |
| `fn_8061B3A0` | `0x8061B3A0` | 292 B | 3,399 | `src/isfs.c` |
| `fn_8009DE60` | `0x8009DE60` | 900 B | 3,282 | `src/game_reticle.c` |
