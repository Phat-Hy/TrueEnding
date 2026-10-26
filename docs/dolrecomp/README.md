# Our changes to `tools/DolRecomp/` (the recompiler and CPU core)

`tools/DolRecomp/` is a **nested git clone** (its own `.git`, upstream HEAD `d3cac9d` "fix cross-platform
LLVM CI"), and the outer project's `.gitignore` ignores the directory. So the outer repository has no way to
see or restore our edits to the CPU core — which cost a round in §5c.44 H, where a bad edit deleted two
functions that had to be reconstructed from a compiled object.

`cpu-core.patch` is a snapshot of **our delta against that upstream HEAD** — `git -C tools/DolRecomp diff`.
It is the only recoverable record of those changes, so it must be regenerated whenever the CPU core is
touched:

```powershell
git -C tools/DolRecomp diff > docs/dolrecomp/cpu-core.patch
```

Restoring, on a checkout where `tools/DolRecomp` is a clean upstream clone:

```powershell
git -C tools/DolRecomp apply (Resolve-Path docs/dolrecomp/cpu-core.patch)
```

Contents at the time of writing (2026-10-27): `src/cpu/cpu.c` and `src/cpu/cpu.h` only, 65 insertions /
19 deletions — the `TLS_PSQ_GQR_STANDARD` flag (§5c.44 G) and the two functions reconstructed in §5c.44 H
(`ppc_fp_available`, `ppc_fallback_instruction`). The reconstruction was verified behaviourally: the
`tools/invariant.ps1` hash came back byte-identical.

**Rule:** edit only `src/cpu/cpu.c` / `src/cpu/cpu.h` surgically, regenerate this patch immediately after,
and re-run `pwsh tools/invariant.ps1` — that hash is what proves the core still behaves.
