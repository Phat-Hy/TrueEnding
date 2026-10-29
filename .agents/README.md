# `.agents/` — skills, personas and rules for agents working on this repo

This folder is the agent-facing kit for **Project The Maybe(Not) Last Story**. Canonical project directives live in
[`AGENTS.md`](../AGENTS.md) — read that first, in particular **§1: Renderer strategy (Aurora-first)**.

## What is actually here

| path | contents |
|---|---|
| [`skills/`](skills/) | task procedures: `recomp-debugging`, `decomp-matching`, `plan`, `code-review`, `build`, plus generic ones (`backend-development`, `frontend-development`, `devops`, `brainstorm`, `ship`) that are **not** project-specific |
| [`agents/`](agents/) | personas: `recomp-systems-engineer`, `reverse-engineer`, `tester`, `fullstack-developer`, `planner`, `researcher`, `code-reviewer` |
| [`rules/`](rules/) | [`kit-overview.md`](rules/kit-overview.md) — how the kit is wired (hook status, working rules) |

## Which skill to load for what

- **Renderer / GX / D3D11 / EFB copies / TEV** → `AGENTS.md` §1 (Aurora-first) + [`skills/recomp-debugging.md`](skills/recomp-debugging.md).
  Do **not** load `skills/backend-development.md` for this: despite a stale catalog description, it is generic REST /
  microservice material, and it now carries a banner saying so.
- **Runtime stalls, task/sequence hangs, thread queues** → [`skills/recomp-debugging.md`](skills/recomp-debugging.md).
- **PowerPC / Gekko matching** → [`skills/decomp-matching.md`](skills/decomp-matching.md).
- **Building the runner** → [`skills/build.md`](skills/build.md) (`python tools/recomp_harness.py build-runner`).

## Working rules (summary)

1. **0 changes to `src/`.** All work lands in `recomp/`, `tools/`, and generated chunks.
2. **Every game-window launch is `--window --minimized`, one run at a time**, after checking load and free RAM.
3. **Measure, don't guess**: prefer a switch that tests a hypothesis in one run over a code change that assumes it.
4. **No new GX-semantics features** in the hand-rolled D3D11 layer while the Aurora spike is open (see
   `AGENTS.md` §1 and `DEEPSEEK_HARNESS_HANDOVER.md` §5c.46 AP-AL).
5. Never re-record `tools/invariant.ps1`'s expected hash without stating that you did and why.
