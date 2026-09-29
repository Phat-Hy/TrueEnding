# Project The Maybe(Not) Last Story (`TrueEnding`)

[![Repository](https://img.shields.io/badge/GitHub-Phat--Hy%2FTrueEnding-blue)](https://github.com/Phat-Hy/TrueEnding)

> **A reverse engineering, decompilation, and native PC recompilation effort for *The Last Story* (Nintendo Wii).**

Developed by Mistwalker and AQ Interactive (feelplus), *The Last Story* is an iconic JRPG originally released for the Nintendo Wii in 2011. This project aims to reconstruct the game's source code and bring it to modern PC platforms with uncapped framerates, high-resolution rendering, and modern controller/mouse-keyboard support.

---

## Workspace Structure

```
├── .agents/                 # Harness Kit: Specialized agents, rules, hooks, and skills
│   ├── agents/              # Subagents (reverse-engineer, planner, tester, code-reviewer)
│   ├── rules/               # Project-wide engineering guidelines
│   ├── skills/              # Procedures for decompilation, planning, building
│   └── kit-hooks/           # PreToolUse guardrails and context reminders
├── plans/                   # Architectural RFCs and execution plans
│   └── 001-tls-decomp-and-recomp-pipeline.md
├── .gitignore               # Strict exclusion of ROMs, binaries, and large dumps
├── .hs.json                 # Harness Kit configuration
├── PROJECT_JOURNAL.md       # Step-by-step progress tracker, milestones, and ADRs
└── README.md                # Project overview
```

---

## Quick Reference & Getting Started

1. **Track Progress**: Refer to [`PROJECT_JOURNAL.md`](file:///G:/Program/Project%20The%20Maybe%28Not%29%20Last%20Story/PROJECT_JOURNAL.md) for current steps, status, and git checkpoint tags.
2. **Review Architecture**: Check [`plans/001-tls-decomp-and-recomp-pipeline.md`](file:///G:/Program/Project%20The%20Maybe%28Not%29%20Last%20Story/plans/001-tls-decomp-and-recomp-pipeline.md) for the technical roadmap.
3. **ROM / Executable Ingestion**: Once your `.rvz`, `.iso`, or extracted `sys/main.dol` is ready, place it into the project folder to begin Phase 1 binary inspection.
