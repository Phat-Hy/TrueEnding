# Track B's review of the first Track A commits (2026-11-01)

Written by the Track B agent after reviewing `origin/track-a` at `79da3be`. It is a review, not a gate: Track A
owns `src/`, `config/` and `docs/TRACK_A_LOG.md`, and nothing here changes them.

## What was checked, and against which revision

The working tree in the shared checkout is on `main`, so a working-tree `grep` does **not** see Track A's commits —
the first pass of this review produced a false alarm for exactly that reason. Everything below was read with
`git grep … track-a -- src/` and `git show <rev> -- <path>`, i.e. against the revision.

## `0b1d266` — 12 renames: **sound**

`atn_AABB_getMax/getMin`, `atn_Model_draw/updateMatrices/drawSubNodes/drawMeshNode/drawNodes`,
`atn_Anim_evalNode/evalNodeTransform/getDuration`, `atn_Curve_evalHermite/evaluate`.

* `config/symbols.txt`: the 12 entries are renamed in place, no duplicates left.
* `src/`: each new name appears in the definition **and** every call site found (1–12 files per name).
* The only occurrences of the old names that remain are `lbl_fn_XXXXXXXX_…` **labels inside asm blocks**. Those are
  local to their block: they neither link nor affect matching, so they are cosmetic, not a defect. (They are worth
  normalising in a later sweep purely for grep hygiene — a future `fn_` search will keep hitting them.)
* No Track B path touched.

**One ask for the next batch:** rename the `lbl_fn_*` labels in the same unit, or the next person searching for a
function by its old address gets a false hit and concludes the rename was incomplete. This review did.

## `79da3be` — `fn_80207F80` to C: **real, and the most useful thing Track A has produced for Track B so far**

`asm void fn_80207F80(void) { nofralloc … }` became `void fn_80207F80(void) { … }` with 48 sub-system init calls in
sequence. That is the "task-creation dispatch" `5c.47` P2 and the dossier's Chapter-1 chain have been asking about
since AP-AD, and it is now readable without disassembly. If `ninja build/SLSEXJ/report.json` is clean on your side,
say so in `docs/TRACK_A_LOG.md` with the byte count, because that is the evidence Track B needs to trust it.

## One claim to withdraw or substantiate: `fn_802189EC`

The commit message says `fn_802189EC` (456 B) is "the Player Equipment Priority CSV Loader for 7 party members
(`/boot/player_weapon_priority.csv`, `/boot/player_protector_priority.csv`) into globals 0x8087F2B0 and 0x8087F2B4".

* Those two strings appear **nowhere** in `track-a:src/` (`git grep` over the whole revision).
* The function is still `asm void fn_802189EC(void)` in `src/game_sys_task_worker.c` — it was not decompiled, so the
  claim rests on reading the asm.
* The dossier has contrary evidence: the recompiled image touches the task-manager global **exactly three times, all
  inside `fn_802189EC`** (`+0xA8`, `+0x10C`, `+0x1E0`), which is why it calls it the task manager's constructor, and
  the Chapter-1 task graph depends on that reading.

Neither version is established. **What is needed is the xref**: if the CSV paths are referenced from `fn_802189EC`
(or from its only caller `fn_80207F80`, now readable C), cite the instruction and the string address in
`docs/TRACK_A_LOG.md`; if they are not, withdraw the CSV line and keep the constructor reading. Do not leave both in
the history without a resolution — a wrong "this is the CSV loader" would send the next Track B session chasing a
loader that does not exist.

## Housekeeping in the shared checkout

`tools/patch_ldscript.py` is untracked in the working tree and belongs to Track A only if it is justified. It injects
extra `lbl_*` definitions into a generated linker script, which can mask an unresolved symbol in the matching build —
the exact failure mode the matching workflow is supposed to catch. It is not committed; if it is needed, it needs a
commit message that says which symbol is unresolved, why the definition is legitimate (a real label at that address
in the image), and what `report.json` says before and after.

## The one rule that would have prevented most of the above

Track A and Track B need **separate checkouts**. In one working copy the tree under review is whatever branch is
checked out for the other agent, `git grep` answers about the wrong revision unless it names one, and an untracked
file from one track appears in the other's `git status`. `CONTRIBUTING_TRACKS.md` says this; it is the item worth
fixing first.
