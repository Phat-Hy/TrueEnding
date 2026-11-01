# Track A handoff — what to do, and what Track B actually needs from it

You are the **Track A** agent on *Project The Maybe(Not) Last Story* (`TrueEnding`): a byte-matching
decompilation (Track A) of *The Last Story* (Wii, `SLSEXJ`) and a native PC port (Track B) of the same game. Track B
is a different agent on a different branch, in a different checkout. Read `CONTRIBUTING_TRACKS.md` first — it owns
the rules. This file is the work order.


> [!NOTE]
> **Track A Status as of Batch 50 / Commit b89b55**:
> - Completed all 222 pure lr stubs to 100.0% matching C.
> - Decompiled **131 accessors, getters, setters, math helpers (ec3_scale, mtx_multVec, ec3_initValues), and SDK hooks** to 100.0% matching C.
> - Batches 1 through 50 completed and pushed (500+ high-yield symbols named across all major engine systems).
> - Byte-for-byte bit-identical match maintained on all commits (orig/main.dol: OK).

## 0. Where things stand (measured, do not re-derive)

```
python configure.py progress
  All:  99.77% fuzzy, 99.30% matched, 99.77% linked (999 / 1025 files)
  Code: 7,425,512 / 7,477,608 bytes (18,054 / 18,155 functions)
  Data: 800 / 1,432,252 bytes (0.06%)
```

`src/` is **inline assembly**, not C: 998 files, 17,968 `asm` function bodies, **0 C bodies**. Matching is
byte-for-byte, so **names never change the bytes** — renaming is safe for the match and does not require
re-deriving anything.

Track B runs the **same instructions** (its runner recompiles the retail DOL and links no `src/` object). So Track A
cannot change Track B's behaviour. What it can give Track B is **names** and, for a few functions, **readable C**.

## 1. Constraints (violating these costs the other track real runs)

* Work in **your own checkout** of this repository, on branch **`track-a`**. Never commit to `main`.
* **Never run the game** (`build/recomp/tls_runner.exe`, `Play_TheLastStory.bat`, `tools/invariant.ps1`). Those are
  Track B's instruments and only one runner may exist at a time.
* **Never touch**: `recomp/`, `tools/` (except `tools/DolRecomp`, and only surgically), `build/recomp/`,
  `DEEPSEEK_HARNESS_HANDOVER.md`, `docs/evidence/`, `CONTRIBUTING_TRACKS.md`.
* **You own**: `src/`, `config/`, `include/`, `configure.py`, `build/SLSEXJ/`, `docs/PROGRESS_LEDGER.json`,
  `docs/TRACK_A_LOG.md`, and the **Track A** table in `README.md`.
* Commit subject starts with `track-a:`. Put measured numbers in the message. One commit = one area.
* If you touch `tools/DolRecomp`, regenerate `docs/dolrecomp/cpu-core.patch`
  (`git -C tools/DolRecomp diff > docs/dolrecomp/cpu-core.patch`) in the same commit. A `cpu.h` edit rebuilds all
  459 chunks (317 s) — batch header edits.

## 2. The work, in priority order

### A1 — Name functions (highest value to Track B, lowest risk)

`config/symbols.txt` has extents for 18,103 functions but only **411** carry human names; the other **17,692** are
`fn_XXXXXXXX`. Track B's diagnostics print raw hex addresses and there is no name lookup wired into them yet.

**Start with these 12**, which are the routines behind one Track B probe (64 raw PCs, 12 routines, measured
2026-11-01). Naming them by hand turns that audit into named code:

| address | size | address | size |
| --- | --- | --- | --- |
| `fn_800A0610` | 708 B | `fn_8009B93C` | 172 B |
| `fn_800A05FC` | 20 B | `fn_8009D58C` | 1876 B |
| `fn_800A08D4` | 12 B | `fn_8009E448` | 344 B |
| `fn_8008FA24` | 2200 B | `fn_80471FD0` | 92 B |
| `fn_8008CCC0` | 20 B | `fn_8047202C` | 788 B |
| `fn_8008CCD4` | 20 B | `fn_80091684` | 1036 B |

Then the task/state chain Track B is stuck on (see A2), then subsystem by subsystem in batches of 10–40.

**Recipe per function:** find the evidence first (a string xref, a vtable slot, a call-site context, a known SDK
API), then rename consistently in `config/symbols.txt` *and* every declaration/caller in `src/`. A name that
disagrees with `src/` breaks the link, so rename in one commit per batch.

**Exit criteria:** `ninja build/SLSEXJ/report.json` clean, `python configure.py progress` unchanged or better (no
unit may drop), the DOL SHA unchanged, and `docs/TRACK_A_LOG.md` listing each name with its one-line evidence.

### A2 — Real C for the functions Track B cannot explain

This is not asm matching; it is **readable C that still matches byte-for-byte** (the actual "Method A"). Do **one**
function, not ten. Recommended order — smallest with the highest payoff first:

| function | size | why Track B needs it |
| --- | --- | --- |
| **`fn_8047A4C8`** | 2548 B | **the real task-manager constructor.** The whole image writes the manager slot `0x8087EE94` exactly once, at `0x8047A604` inside this function (`addi r3,r0,12` → `bl 0x80084320` → three words cleared → `stw r3,-26668(r13)`), and its only caller is `main`. Track B's Chapter-1 task-creation search now hangs on this function and the 12-byte object's `+0`/`+4`/`+8` words |
| `fn_8036F268` | 2276 B | the **only** writer of the field state `+0x5538 = 1` (writes it at `+0x360`); the whole Chapter-1 field stall hinges on it |
| `fn_800D7278` | 1252 B | the character-texture bake: issues an EFB copy, calls `GXDrawDone`, then reads it back |
| ~~`fn_802189EC`~~ | ~~456 B~~ | **struck from this list (2026-11-01).** It is the player weapon/protector **priority CSV loader** (`0x6AC` = 7 x `0xF4` bytes, `/boot/player_param.csv`, accessors `fn_80218BB4`/`fn_80218BC4`), not the task manager. The dossier's "task-manager constructor" reading came from `r13 = 0x808852A0`; `__init_registers` sets `r13 = 0x808856C0`, an exact `0x420` error. Track A's own report of this was right and is what corrected the dossier (5c.46 AP-BE) |

**`fn_80207F80` is done** (Track A converted it, 220 B, 48 sub-system inits in sequence) - that closes the entry
that used to be here.

**Exit criteria:** the unit still reports 100 % in `report.json` for that function, the function now exists as C in
`src/`, `docs/TRACK_A_LOG.md` describes in plain English *what it does and what it reads/writes* (which fields, in
what order, under which condition), and a reviewer can follow it without reading asm.

That plain-English description is the deliverable Track B actually consumes — not the C file itself.

### A3 — Track A's own backlog: the data section (0.06 %)

800 B of 1,432,252 B matched. This is Track A's own completeness work; **it does not help Track B at all**, because
Track B reads the retail data out of the DOL. Do it only after A1/A2, or when the owner asks.

## 3. Verification

```powershell
python configure.py progress                 # the numbers above; must not regress
ninja build/SLSEXJ/report.json               # regenerate after any matching change
# optional, per unit:
python tools/diff_helper.py <function> -a
```

No game, no GPU, no `tls_runner.exe`. If you need to check that a rename is consistent, the build does it.

## 4. Hand back

1. `docs/TRACK_A_LOG.md`: one entry per session — what you named (with evidence), what you decompiled (plain
   English), and the `configure.py progress` before/after.
2. The `track-a` branch pushed, one area per commit, numbers in the messages.
3. A short list of the **next** functions you would name or decompile, so the owner can rank them.

## 5. Anti-goals

* Do not asm-match more functions that are already matched, and do not rewrite matched asm for style.
* Do not attempt the 17,692 renames in one commit — batch, verify, log.
* Do not touch Track B's paths, its dossier, or its README tables, and do not run its instruments.
* Do not cite `docs/PROGRESS_LEDGER.json` as current: it is the 2026-10-09 milestone snapshot. The live figure is
  `python configure.py progress`.

## 6. If you are running autonomously (no human in the loop between steps)

You may keep working until you are blocked or out of budget, **but only under these rules** — they exist because
this repository is shared with a Track B agent whose measurements a busy machine silently invalidates.

**Loop over the queue in §2 in order. Never invent a new workstream.**

**One unit of work = the largest batch that leaves the tree green.** A rename batch of 10–40 functions, or one C
decompilation. After **every** unit, in this exact order:

1. `ninja build/SLSEXJ/report.json` — clean.
2. `python configure.py progress` — **no unit may drop** and the total may not go backwards. Record before/after.
3. Append the unit to `docs/TRACK_A_LOG.md` **before** committing (so token exhaustion leaves an accurate log).
4. Commit on `track-a`: `track-a: <what> (<n> names|1 fn) progress <before> -> <after>`.
5. Only then start the next unit.

**If a unit fails verification twice: `git restore .`, record the failure and the reason in the log, and move to
the next unit.** Never leave a rename half-applied — `config/symbols.txt` and `src/` disagreeing is a broken link,
which is worse than the unrenamed function.

**Hard stops — stop immediately and write the handoff note instead of continuing:**

* a unit that needs to touch a Track B path (`recomp/`, `build/recomp/`, the dossier, `docs/evidence/`);
* a change that would move any unit's match below its current value;
* a request from the human to pause, or a declared Track B measurement window (no builds, then);
* your budget is nearly spent — prefer stopping cleanly at a committed unit over starting a large one.

**Compaction safety:** at the start of each unit, re-read `CONTRIBUTING_TRACKS.md` and this file. Do not rely on a
summary of them. If you are unsure whether a path is yours, it is not — ask or skip it.

**When you stop** (budget, blocking condition, or the queue is done), leave the branch pushed and the log current,
and end with: what landed, the progress numbers, and the next 3–5 candidates ranked by Track B payoff.


## 7. Round-4 updates (2026-11-01) — four rounds of your output changed this order

Everything below comes from reviewing your batches 1-6, not from theory. The work has been good; these close the
gaps the reviews found.

### 7.1 Keep the vocabulary exact: a NAME is not a CONVERSION

The log has used "decompile", "name" and "convert" loosely, and a reader cannot tell them apart from the commit
subject. They have very different value to Track B:

* **name** = same instruction stream, new symbol. Improves grep, the symbol map in probe output, the model.
  Track B now consumes names directly (`recomp/tls_sym.c` turns every probe PC into `name+0xOFFSET`), so a name
  batch is real value - but it **cannot move the progress digits**, and `99.30 % -> 99.30 %` is the tell.
* **convert** = the `asm void` body replaced by readable C that still matches. That is the only thing that gives
  Track B a *specification*.

Self-check before committing: count both sides of `git diff -- src/` for `asm void`. A rename batch has the same
number on each side (`-asm void fn_X` → `+asm void newName`). A conversion has fewer `+` than `-`. If you claim a
conversion, that number must be in the log ("40 names, 0 conversions" or "1 conversion, 55/55 instructions").

### 7.2 The rename checklist (each item has cost a review round)

1. `config/symbols.txt` entry renamed in place, no duplicate left behind.
2. **Every** reference in `src/`: the definition, every prototype, every `bl`/`b` in asm blocks, every `extern`.
3. **The function's own labels too** — `lbl_fn_XXXXXXXX_*` inside its body → `lbl_<newName>_*`. You did this in
   `af5f17b` and it is now a requirement, because a later `grep fn_XXXXXXXX` otherwise finds a "leftover" and the
   reviewer (this one did) concludes the rename was incomplete.
4. **Prototypes in other translation units**: `src/game_bloom.c:6` still declares
   `extern void atn_TaskBase_isValid(void);` while the new prototype takes `atn_TaskBase*`. C does not diagnose
   that across units and the caller is asm that sets `r3` itself, so it links - but the next person who converts
   that caller to C will call it with no argument. Sweep the externs of anything you renamed or converted.
5. Verification: `ninja build/SLSEXJ/report.json` clean, and `python configure.py progress` **identical** (a rename
   cannot change bytes, so any movement is a mistake, not progress).

### 7.3 The evidence bar for a name (your `fn_802189EC` entry is the model)

That entry earned its keep: instruction bytes, the resolved address, the string xref chain through `_SDA2_BASE_`,
the allocation size (`0x6AC` = 7 x `0xF4`), and the adjacent accessors - and it **contradicted the dossier**, which
turned out to be wrong by an exact `0x420` in `r13`. So:

* cite the **instruction and its address**, not just the conclusion;
* resolve SDA-relative operands from the real bases (`_SDA_BASE_ = 0x808856C0`, `_SDA2_BASE_ = 0x808885A0`, both
  set by `__init_registers` at `0x80004210`) - never from a probe's `r13`;
* if a name contradicts `DEEPSEEK_HARNESS_HANDOVER.md`, **say so explicitly** in the log with the conflicting
  citation. That is the case where Track A's work is worth the most to Track B, and it happened once already.

### 7.4 Alternate one conversion per naming batch

Six batches have produced ~120 names and 3 conversions (`fn_80207F80`, `atn_TaskBase_isValid`,
`atn_Task_initCookie`). Track B's queue is now **`fn_8047A4C8` first** (see A2 - it is the task manager's real
constructor, and the Chapter-1 task-creation question hangs on it), then `fn_8036F268`, then `fn_800D7278`. One
conversion per session beats ten names for the port; both are welcome, and the log should say which it did.

### 7.5 Where the next naming batch should come from: `docs/TRACK_A_QUEUE.md`

Not from a subsystem sweep. Track B's probe logs contain **137 distinct routines**; 36 now carry human names and
**101 are still `fn_`/`lbl_`**. `docs/TRACK_A_QUEUE.md` ranks the unnamed ones by how often Track B's instruments
actually hit them (resolved against your `config/symbols.txt`, so it is regenerable and always current).

Evidence that this is the highest-yield target: batch 1 was aimed at the 12 routines behind one 64-PC audit and took
them from **0/12 named to 12/12**, which is why every probe now prints `name+0xOFFSET`. Batches 5-8 named ~186
functions and moved that number by **zero on the routines Track B touches** — good for Track A's own coverage, no
leverage on the port. The queue's top five alone cover 2 785 logged hits.

Take the top 10-15 of that list first, then alternate one A2-style conversion per batch.
