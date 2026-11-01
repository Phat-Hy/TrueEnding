# The Track A queue that actually pays Track B

Generated from Track B's own probe logs — not from a subsystem sweep. Method: every `reader_pc` / `cia` /
frame `PC` / `block pc` value in `logs_ap/**/*.log` is resolved against `origin/track-a`'s `config/symbols.txt`,
and the distinct routines are ranked by how often they appear.

## Why this file exists

Measured 2026-11-01: **137 distinct routines appear in Track B's probe logs. 36 carry human names, 101 are still
`fn_`/`lbl_`.** The first naming batch was aimed at the 12 routines behind a single 64-PC audit, and it took those
from **0 of 12 named to 12 of 12** — which is why `TLS_READ_WATCH`, `StoreWatch` and the per-frame status line now
read `atn_Model_updateMatrices+0x…` instead of hex.

A bulk rename over a subsystem Track B never instruments buys nothing for the port; a rename over this list buys
readable logs immediately. So: **prefer this queue over an alphabetical or subsystem sweep**, and alternate one
A2-style C conversion per batch (current conversion priority: `taskManager_initSystem` — formerly `fn_8047A4C8` —
then `fn_8036F268`, then `fn_800D7278`).

The names are not cosmetic. `recomp/tls_sym.c` parses this map and every probe prints `name+0xOFFSET`; a name that
appears in this table is a name the port's diagnostics will use on its next run.

## Regenerate it

~40 lines of Python: parse `symbols.txt` for `type:function` extents, scan the logs for the five PC patterns,
bisect each address into its function, count. Re-run after every batch — a name that leaves this table is the
visible measure of that batch's value to Track B.

## The queue — top 30 unnamed routines by how often Track B's instruments hit them

| function | address | size | hits in Track B's logs |
|---|---|---|---|
| `fn_806255E0` | `0x806255E0` | 332 B | 970 |
| `fn_80615560` | `0x80615560` | 344 B | 609 |
| `fn_800954DC` | `0x800954DC` | 628 B | 440 |
| `fn_80083614` | `0x80083614` | 332 B | 391 |
| `fn_80206F44` | `0x80206F44` | 780 B | 375 |
| `fn_8046FBB0` | `0x8046FBB0` | 364 B | 291 |
| `fn_8009B9E8` | `0x8009B9E8` | 436 B | 259 |
| `fn_8009BF3C` | `0x8009BF3C` | 1484 B | 248 |
| `fn_800761A8` | `0x800761A8` | 536 B | 248 |
| `fn_8009F4AC` | `0x8009F4AC` | 476 B | 246 |
| `fn_806179E0` | `0x806179E0` | 36 B | 240 |
| `fn_8009BB9C` | `0x8009BB9C` | 928 B | 237 |
| `fn_800D59B8` | `0x800D59B8` | 132 B | 235 |
| `fn_8008CD1C` | `0x8008CD1C` | 52 B | 234 |
| `fn_80617650` | `0x80617650` | 80 B | 233 |
| `fn_80618350` | `0x80618350` | 80 B | 230 |
| `fn_80069060` | `0x80069060` | 552 B | 163 |
| `fn_80069288` | `0x80069288` | 468 B | 156 |
| `fn_80074EC8` | `0x80074EC8` | 3876 B | 22 |
| `fn_8009DE60` | `0x8009DE60` | 900 B | 21 |
| `fn_80236938` | `0x80236938` | 588 B | 13 |
| `fn_80234CD8` | `0x80234CD8` | 3216 B | 12 |
| `fn_800A981C` | `0x800A981C` | 1592 B | 10 |
| `fn_806183A0` | `0x806183A0` | 88 B | 9 |
| `fn_806167B0` | `0x806167B0` | 72 B | 9 |
| `fn_80618420` | `0x80618420` | 180 B | 7 |
| `fn_80076760` | `0x80076760` | 712 B | 7 |
| `fn_80071E04` | `0x80071E04` | 2832 B | 6 |
| `fn_8006A950` | `0x8006A950` | 84 B | 5 |
| `fn_80613960` | `0x80613960` | 580 B | 5 |

**How to read it.** `fn_806255E0` (970 hits) is the routine Track B's logs mention most; `0x806xxxxx` is SDK-level,
so a name there is cheap and immediately visible in every log. The `0x8009xxxx` / `0x8008xxxx` cluster is the
field/HUD path, and `0x8046xxxx` / `0x8047xxxx` are the task/book/library units Track A has been working through.
The first five names alone would cover **2 785** of the logged hits.
