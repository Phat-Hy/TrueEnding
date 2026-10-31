# Working on the two tracks in parallel

This repository runs two workstreams that are **code-disjoint but machine-, repo- and document-shared**.
Read this before starting an agent on either one, because the shared parts are what break.

| track | what it is | where it lives | verification |
| :--- | :--- | :--- | :--- |
| **A — byte-matching decompilation** | reproduce the retail `main.dol` byte-for-byte. **99.30 % of code matched** (7 425 512 / 7 477 608 B, 18 054 / 18 155 functions, 999 / 1 025 units linked); the remaining gap is **data** (800 B of 1 432 252 B = 0.06 %) | `src/`, `config/`, `configure.py`, `include/`, `build/SLSEXJ/` | `python configure.py progress`, `ninja build/SLSEXJ/report.json` |
| **B — native PC port** | run that DOL natively through a static-recompiled CPU + GX runtime; the renderer is migrating to Aurora | `recomp/`, `tools/` (except `tools/DolRecomp`), `build/recomp/`, `docs/evidence/` | `python tools/recomp_harness.py build-runner`, `pwsh tools/invariant.ps1` |

## The one thing to understand first

**Track A progress does not change Track B's runtime.** The runner links no `src/` object: `${build}` chunks are
recompiled from the retail DOL, so both tracks execute the same instructions. Track A *proves* them; Track B
*runs* them. Track A's remaining work (data) is not consumed by Track B at all, because Track B reads retail data
out of the DOL.

What Track A can hand Track B, in order of value:

1. **Names.** `config/symbols.txt` has extents for 18 103 functions but only 411 human names; the other 17 692 are
   `fn_XXXXXXXX`. Track B's probes (`TLS_READ_WATCH`, `TLS_WATCH_ADDR`, `TLS_DUMP_AT_PC`, `StoreWatch`) print raw
   hex, and `build/recomp/generated/generated_symbols.h` already emits 36 180 `DOLRECOMP_SYMBOL_*` defines that no
   probe uses yet. Naming is the cheapest, highest-yield thing Track A can do for Track B.
2. **Readable behaviour of specific functions** — actual C decompilation (not asm matching) of the handful Track B
   is stuck on. See `docs/TRACK_A_HANDOFF.md` §2 for the list.
3. **Nothing else.** Matching the data section, the 38 sub-100 % battle/quest functions, or further SDK asm does
   not move Track B.

## Machine rules (these cost runs, they are not preferences)

1. **One `tls_runner.exe` at a time, host idle.** The gate's fingerprint is the **handover frame: it must be 1680**.
   A loaded host moves it (a resident 3D game produced 660 / 780 / 900 / 960 / 1080), and every measurement taken
   then is **void, not a regression**.
2. **Track A must never run the game, and must not build while a Track B measurement is running.** A 12-worker
   compile of 459 chunks or a 998-unit MWCC build saturates the machine exactly like the 3D game did.
3. **Do not relink `tls_runner.exe` or the aurora DLL while a run is in flight** — Windows holds the image and the
   link fails with `Permission denied`.
4. **Every game launch passes `--window --minimized`** and deletes
   `SaveData\title\00010000\534c5345\data\savedata.dat`, `banner.bin` and `SaveData\tmp\savedata.dat` first.
5. Track A never runs `tools/invariant.ps1`; Track B never builds `src/`.

## Repository ownership — one owner per path

| Track A owns | Track B owns |
| :--- | :--- |
| `src/`, `config/`, `include/`, `configure.py`, `build/SLSEXJ/`, `docs/PROGRESS_LEDGER.json`, `docs/ODYSSEUS_WORKLOG.md`, `docs/TRACK_A_LOG.md`, the README **Track A** table | `recomp/`, `tools/` (except `tools/DolRecomp`), `build/recomp/`, `docs/evidence/`, `DEEPSEEK_HARNESS_HANDOVER.md`, `CONTRIBUTING_TRACKS.md`, the README **Track B**/Native Port Status tables |
| `tools/DolRecomp` is **shared but rarely touched**: after any edit, regenerate `docs/dolrecomp/cpu-core.patch` and state the measured effect (a `cpu.h` edit rebuilds all 459 chunks: 317 s) | |

Nobody edits the other side's paths. If a change seems to need it, say so in the commit that would have needed it
instead of making it.

**The dossier is Track B's.** `DEEPSEEK_HARNESS_HANDOVER.md` is 13 000 lines of Track B measurements; Track A
writes `docs/TRACK_A_LOG.md` instead. This is what stops two agents from clobbering one narrative.

**The README tracker has one owner per table.** Track A refreshes its own numbers with
`python configure.py progress` whenever it lands matching work, in the same commit. Track B does not touch them.
(The numbers were once stale by 2x because a milestone snapshot was mistaken for the current figure — do not
repeat it.)

## Branches and commits

* `main` = integration. Both sides merge into it; **neither agent commits to it directly.**
* `track-a` = the Track A branch (`origin/track-a`, created from `main` for this purpose).
* `track-b` = the Track B branch, same anchor.
* One commit = one area. Prefix the subject `track-a:` or `track-b:`. Put the **measured** numbers in the message
  (hashes, byte counts, percentages), because the message is the evidence that survives.
* Push your own branch; merge by PR or by the repository owner. Never force-push `main`.

## Separate checkouts, not separate folders in one tree

The collision that actually bites is the working copy: `.git/index.lock` contention, two builds writing `build/`,
and a half-written tree under the other agent's build. Give each track **its own checkout** of this repository,
on its own branch. One directory shared by two agents fails regardless of branch discipline.

## Verification per track

```powershell
# Track A (no game, no GPU)
python configure.py progress                       # prints the report.json measures
ninja build/SLSEXJ/report.json                     # regenerate the report after matching work

# Track B (game, exclusive, idle host)
python tools/recomp_harness.py build-runner        # 471 objects
pwsh tools/invariant.ps1                           # PASS attempt 1 at handover 1680
```
