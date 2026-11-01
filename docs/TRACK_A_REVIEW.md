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

## Round 2 review — `af5f17b..f5cdb32` (4 commits, 463 files, 49 renames + 2 C decompilations)

Checked against the revision (`git grep … origin/track-a`), not the working tree.

| claim | verdict | evidence |
|---|---|---|
| "Batch 3 / Batch 4: 49 names" | **verified** | the `symbols.txt` diff has 49 rename pairs; **0 old-name lines remain in `src/`** (excluding block-local `lbl_*`), and **0 new names are missing** from `src/`. That is the consistency bar the earlier batch missed, met. |
| "Unit A2: `atn_TaskBase_isValid`, `atn_Task_initCookie` to C" | **verified, and they are real C** | `atn_TaskBase_isValid` is now `if (task && task->cookie == *(u64*)lbl_807C75D0) { if (task->taskId != 0) return 1; } return 0;` and `atn_Task_initCookie` is `*(u64*)lbl_807C75D0 = *(u64*)lbl_80734628;` — semantic C with the struct and the cookie seed named, not transliterated asm. |
| "progress 99.30 % -> 99.30 %" | **consistent** | renames cannot change bytes and neither C function changes its object, so an unchanged figure is the expected result, not a stale copy. |

**One hygiene ask, not a blocker.** The new prototype is `BOOL atn_TaskBase_isValid(atn_TaskBase* task);` in `src/game_depth.c`, but a caller still declares `extern void atn_TaskBase_isValid(void);` (`src/game_bloom.c:6`). C does not diagnose that across translation units, and the caller is an asm block that sets `r3` itself, so it links and matches — but the next person who converts that caller to C will call it with no argument. Worth a sweep: every remaining `extern` for a renamed/decompiled function should carry the real prototype.

**What the log's structure gets right, and one thing to keep.** Each entry carries `Numbers:` (before → after), `Named:` (with evidence) and `Decompiled:` (bytes, instructions, match). Keep quoting the instruction count (`9/9`, `20/20`) — that is the number Track B can check without rebuilding, and it is what made this round verifiable in minutes.

## Round 3 review — `f5cdb32..acd195c` (Batches 5-6, 22 files, 40 renames)

Isolation confirmed first: this checkout is `main`, clean except the untracked `logs_ap/`, and the Track A work lives in its own clone at `G:\Program\TrueEnding-TrackA`. So `git grep … origin/track-a` is now the only way to read it, which is the right way.

| claim | verdict |
|---|---|
| Batch 5 and Batch 6: **40 names** | **verified**: 40 rename pairs in `symbols.txt`; across `src/` there are **0 remaining old-name lines** (ignoring block-local `lbl_*`) and **0 new names without a definition or call site**. Same consistency bar as round 2, met twice in a row. |
| "name 20 atn::Load and atn::LH_ resource functions" / "name 20 atn::Loader, model/motion, and book/library functions" | **accurate as stated** - these are *naming* commits. |

**One correction to make before the log is read as progress: these are renames of asm functions, not asm-to-C conversions.** The diff removes 40 `asm void fn_…` bodies and adds 40 `asm void <newName>` bodies - same instruction streams, new labels (`task_Library_constructor` is still `asm void` at `src/game_boss_cocoon_death.c:1433`, and its internal labels were renamed with it). A first pass at this review read the 40 removed `asm void` lines as conversions; counting both sides (`-asm void` 40, `+asm void` 40, plain C definitions unchanged) settles it.

That distinction is the whole value question for Track B:

* a **rename** improves grep, the symbol map in probe output, and the mental model - real, and it is what `TLS_READ_WATCH`/`StoreWatch`/the frame line now consume;
* an **asm-to-C conversion** is what gives Track B a readable *specification* (unit A2's two functions are the model: `atn_TaskBase_isValid` and `atn_Task_initCookie` are now semantic C).

So Batches 5-6 buy naming (40 more named routines, which is 40 fewer `fn_XXXX` in a log) and buy Track B **no** new readable behaviour. Both are worth having; they are not the same thing, and the `progress 99.30 % -> 99.30 %` figure is the honest signal of that - a rename cannot move a byte.

**Ask for the next batch:** alternate one A2-style conversion in with each naming batch. Forty names is ~40 minutes of a session's value to Track B; one converted function is a permanent reference. If a naming batch is what the queue needs, say so - just do not let the log's vocabulary ("decompile", "name", "convert") blur the difference, because the next session will read it as a promise.

## Round 5 review — `acd195c..e961a00` (Batches 7-8, 86 files, 107 renames + 2 C conversions + one new build script)

Isolation re-checked: this checkout is `main` and clean; the Track A copy is `G:\Program\TrueEnding-TrackA`. Read against the revision with `git grep … origin/track-a`.

| claim | verdict |
|---|---|
| Batches 7-8: **107 names** | **verified**: 107 rename pairs; **0 old-name lines left in `src/`** (ignoring `lbl_*`), **0 new names unmatched**. Fourth consecutive batch at that bar. |
| "**decompile** `atn_LH_Texture` ctor/dtor (208 B) **to C**" | **verified, and it is a real conversion**: `-asm void atn_LH_Texture_constructor(void)` → `+atn_LH_Texture* atn_LH_Texture_constructor(atn_LH_Texture* this)`, same for the destructor (`atn_LoadHandle* atn_LH_Texture_destructor(atn_LoadHandle*, int)`). Net `asm void` count fell by exactly **2**, which is the self-check from round 4 and it agrees. |
| "name real `taskManager_initSystem` (2548 B)" | **verified as the function Track B asked for**: it is `fn_8047A4C8`, the only writer of the manager slot `0x8087EE94` (5c.46 AP-BE). Naming it is the first half of A2's new priority - **the conversion is still the half Track B needs**, because the 12-byte manager object's `+0`/`+4`/`+8` words are what the task-creation question turns on. |
| prototypes updated across translation units | **done** - every caller of the two converted functions now carries the typed declaration (`struct atn_LH_Texture; struct atn_LH_Texture* atn_LH_Texture_constructor(struct atn_LH_Texture* this);`). That was round 2's ask, and it did not have to be asked twice. |

### `tools/patch_ldscript.py` (finally reviewed, and it needs one change)

It injects 29 fixed-address symbol definitions into the **generated** `build/SLSEXJ/ldscript.lcf`, is invoked by
`tools/project.py`'s split rule and `tools/debug/batch_pipeline.py`, and is idempotent (it skips when its marker is
present). Committing it is defensible: without it a clean worktree cannot link.

What it must not be is a place where symbols *enter the build that the symbol map does not know about*. Checked each
injected name against `config/symbols.txt`:

* **real, at the injected address**: `__OSDBINTEND 0x805EBE04`, `__OSDBJUMPEND 0x805EBE14`, `lbl_80764848 0x80764848`, and the other `lbl_*/__OSDB*` entries of that family;
* **NOT in `config/symbols.txt`**: `lbl_LOCAL_SIInit__Fv_Initialized` (`0x8087FB84`), `lbl_LOCAL_SIGetType__Fl_cmdTypeAndStatus` (`0x8087FB88`), `lbl_807BB4A8` (`0x807BB4A8`).

Those three are probably real labels the split never declared - and the fact that the build still reports the same
99.30 % with them is evidence their addresses are consistent with the image, because a wrong address would move
relocated bytes and show as a diff. But the rule should be explicit:

1. **Every injected symbol must exist in `config/symbols.txt` at that address.** Move these three there - the map is
   the single source of truth, and a reader who greps the map for a symbol the linker knows should find it.
2. **The shim may define data and labels, never a function.** A function added by the linker would let a deleted
   `asm void` body link clean and match, which is exactly the failure mode the round-4 `asm void` count is meant to
   catch (this review used that count to confirm the A3 conversion was real rather than a deletion).
3. Keep the "generated file only" scope and the idempotence marker; both are right.

## Round 6 review — `e961a00..cc4497d` (12 commits, Batches 11-14 + 8 decompilations)

Read through `git grep`/`git show` on `origin/track-a` only (never from this working tree), at
`cc4497d`. Checked mechanically: **300 renames since `main`, 0 duplicate names among them**, and 3
duplicate names that pre-date this round (`@stringBase0`, `ShutdownFunctionInfo`, `BootInfo` — all
from the original split, not from these commits). The addresses renamed are `fn_*` -> `name` in
place: the map's line count is unchanged (39 934 entries), so this is a naming round, not an
insertion round.

**The one name Track B can verify from its own dossier is right.** `taskManager_initSystem` is
`fn_8047A4C8` (size `0x9F4`), which is exactly the function `5c.46 AP-BE` identified as the **only
writer** of the manager slot `0x8087EE94`, called only from `main`. `g_TaskManager` at
`.sbss:0x8087EE94` came with it, and that pair is the most useful thing in this round for Track B:
AP-BE's open question is the 12-byte manager object's `+0`/`+4`/`+8` words, and a named global plus a
named initialiser is what a runtime probe needs to speak about.

**The `tools/patch_ldscript.py` ask from round 5 is 2/3 actioned, with a naming mismatch that keeps
the point of the ask.** All three addresses are now in `config/symbols.txt`:
`0x8087FB84` and `0x8087FB88` as the DWARF labels `@LOCAL@SIInit__Fv@Initialized` and
`@LOCAL@SIGetType__Fl@cmdTypeAndStatus`, and `0x807BB4A8` as the local object `@2934`. But the shim
still injects its **own** names for them (`lbl_LOCAL_SIInit__Fv_Initialized`,
`lbl_LOCAL_SIGetType__Fl_cmdTypeAndStatus`, `lbl_807BB4A8`), so `grep`-ing the map for a symbol the
linker knows still fails — which was the whole reason for the rule. Either the shim should inject the
map's names, or the map should carry the shim's names as aliases at the same address. Rule 2 holds:
the shim defines **0** functions (checked: no `type:function` entry), only labels and data.

**The evidence bar is the thing that slipped this round.** Batch 14 (`573267f`) is a bare subject
with an empty body; Batches 11-13 likewise carry no per-rename justification, and the queue table is
the closest thing to evidence in the tree. Round 4's rule was that each rename names its reason in
the message. This is cheap to restore (one line per name: caller, import, or string it touches) and
it is what lets a reviewer check 13 names in a minute instead of a tracing session.

**What this round is worth to Track B, measured rather than claimed.** Applied to this session's own
run logs (7 files, 670 `fn_` probe mentions, 20 distinct addresses): **84 mentions (12.5 %) sit at
addresses this round named, and 17 of the 20 distinct addresses are now named.** The largest single
address left is **`fn_800EF3EC`** — the function `recomp/`'s `[TLS Camera]` probe prints 143 times in
every run (`cam_obj=0x81345BF0 lr=0x800EF68C`) — which is unnamed and is therefore the first thing a
Batch 15 should take. It is also the cleanest possible rename: the probe line already says what it
is, and its caller (`0x800EF68C`) is in the same unit.

**One methodological note, not a criticism of the work.** `docs/TRACK_A_QUEUE.md`'s hit counts are
cumulative over the 521 logs retained in `logs_ap/`, so a routine that appears once per frame in a log
that was re-run 200 times scores 200x. That is a defensible way to rank *how much of Track B's
recorded history* a name would touch, but it is not per-run frequency, and the file should say so in
one line - a reader will assume "hits" means "per run". The per-run measure is the one a Track B probe
is worth: 143 mentions per run for `fn_800EF3EC` against 15 137 cumulative for the queue's top entry.
