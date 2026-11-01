# The Track A queue that actually pays Track B

Generated from Track B's own probe logs — not from a subsystem sweep. Method: every `reader_pc` / `cia` /
frame `PC` / `block pc` value in `logs_ap/**/*.log` is resolved against `origin/track-a`'s `config/symbols.txt`,
and the distinct routines are ranked by how often they appear.

## Why this file exists

Measured 2026-11-01: **137 distinct routines appear in Track B's probe logs. 36 carried human names, 101 were still
`fn_`/`lbl_`.** The first naming batch was aimed at the 12 routines behind a single 64-PC audit, and it took those
from **0 of 12 named to 12 of 12** — which is why `TLS_READ_WATCH`, `StoreWatch` and the per-frame status line now
read `atn_Model_updateMatrices+0x…` instead of hex.

A bulk rename over a subsystem Track B never instruments buys nothing for the port; a rename over this list buys
readable logs immediately. So: **prefer this queue over an alphabetical or subsystem sweep**, and alternate one
A2-style C conversion per batch (current conversion priority: `taskManager_initSystem` — formerly `fn_8047A4C8` —
then `fn_8036F268`, then `fn_800D7278`).

Progress against that goal, as of Batches 11-13 (Track A's own count):
- Batch 11 named 29 routines (~3 582 logged hits).
- Batch 12 named 27 routines (over **950 000 logged hits**).
- Batch 13 named 19 routines (over **265 000 logged hits**).
- Total coverage of the named routines: **> 1 215 000 probe hits**, and every routine with **>= 16 000** hits in the
  probe logs is now fully named.

The names are not cosmetic. `recomp/tls_sym.c` parses this map and every probe prints `name+0xOFFSET`; a name that
appears in this table is a name the port's diagnostics will use on its next run.

## Regenerate it

~40 lines of Python: parse `symbols.txt` for `type:function` extents, scan the logs for the five PC patterns,
bisect each address into its function, count. Re-run after every batch — a name that leaves this table is the
visible measure of that batch's value to Track B.

## The queue — remaining unnamed routines, by how often Track B's instruments hit them

Track A's snapshot (after Batch 13):

| function | address | size | hits in Track B's logs | source file |
|---|---|---|---|---|
| `fn_800BDBC8` | `0x800BDBC8` | 4 392 B | 15 137 | `src/game_menu_layout.c` |
| `fn_8006D7B0` | `0x8006D7B0` | 6 040 B | 14 920 | `src/game_boss.c` |
| `fn_80149A30` | `0x80149A30` | 9 088 B | 14 848 | `src/game_actor_ai.c` |
| `fn_80711530` | `0x80711530` | 248 B | 14 210 | `src/game_net_sdk_054.c` |
| `fn_800C41D0` | `0x800C41D0` | 604 B | 10 341 | `src/game_joint.c` |
| `fn_800D2494` | `0x800D2494` | 528 B | 8 939 | `src/game_event_cutscene_actor.c` |
| `fn_8022B114` | `0x8022B114` | 1 844 B | 7 575 | `src/game_save_header.c` |
| `fn_8050FE48` | `0x8050FE48` | 568 B | 6 842 | `src/game_coliseum_ui.c` |
| `fn_801F9FB0` | `0x801F9FB0` | 13 696 B | 6 686 | `src/game_save_load.c` |
| `fn_800F26D4` | `0x800F26D4` | 764 B | 6 240 | `src/game_cam_action.c` |
| `fn_80534074` | `0x80534074` | 9 092 B | 4 782 | `src/game_sys_event_state.c` |
| `fn_80613FF0` | `0x80613FF0` | 180 B | 4 704 | `src/GXMisc.c` |
| `fn_800B3464` | `0x800B3464` | 92 B | 3 704 | `src/game_character.c` |
| `fn_8005B710` | `0x8005B710` | 488 B | 3 459 | `src/game_item_drop.c` |
| `fn_80148B38` | `0x80148B38` | 396 B | 3 252 | `src/game_actor_movement.c` |
| `fn_800A2978` | `0x800A2978` | 60 B | 3 120 | `src/game_layout.c` |
| `fn_801ED928` | `0x801ED928` | 844 B | 2 254 | `src/game_item.c` |
| `fn_801F4E8C` | `0x801F4E8C` | 124 B | 2 224 | `src/game_save_slot.c` |
| `fn_80532ABC` | `0x80532ABC` | 3 952 B | 2 216 | `src/game_sys_event_state.c` |
| `fn_80622310` | `0x80622310` | 564 B | 1 874 | `src/OSNet.c` |

**How to read it.** `fn_800BDBC8` is the routine Track B's logs mention most; `0x806xxxxx` is SDK-level, so a name
there is cheap and immediately visible in every log. The `0x8009xxxx` / `0x8008xxxx` cluster is the field/HUD path,
and `0x8046xxxx` / `0x8047xxxx` are the task/book/library units Track A has been working through.

**Merge note.** This file was created independently on both branches (Track B wrote the method and the first queue,
Track A regenerated the queue after its batches), so the merge of `origin/track-a` into `main` keeps Track B's
method/regenerate sections and Track A's post-Batch-13 queue. Regenerate from the current `logs_ap/**/*.log` before
the next batch, since the counts above predate Batches 14-29.
