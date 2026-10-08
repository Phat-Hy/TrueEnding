# Resource Subsystem Decompilation and Recompilation

## Overview
This folder contains scaffolded source and headers for the missing resource subsystem function `fn_8046C3FC` and related key functions (`fn_8046FBB0`, `fn_80470264`) essential in The Last Story's game loader resource pipeline.

## Files

- `resource_subsystem.c`: Decompilation scaffold implementing pseudocode C for the resource functions derived from assembly analysis.
- `resource_subsystem.h`: Header declarations for the subsystem functions.
- `resource_wakeup_hooks.c`: Placeholder hooks for waking threads and servicing message queues related to resource loading, addressing the known stall.

## Next Steps

1. Refine decompilation by expanding function bodies as more assembly is mapped.
2. Implement and test wakeup/message queue hooks integration into the native runner.
3. Integrate these files into the build pipeline for recompilation.
4. Incrementally verify and log diffs for correctness.

## Recompilation Instructions

Use existing ninja and recomp harness tools as per project conventions:
- Compile modules with:
```sh
.\tools\w64devkit\bin\ninja.exe build/SLSEXJ/src/<Module>.o
```
- Compile runner with:
```sh
python tools/recomp_harness.py build-runner
```
- Use diff helper for analysis:
```sh
python tools/diff_helper.py <FuncName> -a
```

Refer to `docs/AGENT_HANDOFF.md` and `docs/ODYSSEUS_WORKLOG.md` for project protocols and logging details.
