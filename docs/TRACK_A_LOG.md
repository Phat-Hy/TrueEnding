# Track A log

One entry per session. Track A = byte-matching decompilation of `main.dol`; see
[`CONTRIBUTING_TRACKS.md`](../CONTRIBUTING_TRACKS.md) for the rules and
[`TRACK_A_HANDOFF.md`](TRACK_A_HANDOFF.md) for the current work order.

Track B's dossier (`DEEPSEEK_HARNESS_HANDOVER.md`) is **not** edited from here: it is 13 000 lines of Track B
measurements and two narratives in one file conflict.

## Template

```
### <date> — <one-line summary>

Numbers:  progress before -> after  (e.g. 99.30 % -> 99.31 %, data 0.06 % -> 0.06 %)
Named:    fn_XXXXXXXX -> HumanName  (evidence: <string xref / vtable slot / call site>)
Decompiled: fn_XXXXXXXX (<bytes>) -> C in src/<file>.c  (match: 100 %)
Notes:    what it does, in plain English, and what Track B would use it for
Next:     the 3-5 functions worth naming or decompiling next
```

## Entries

<!-- newest first -->
