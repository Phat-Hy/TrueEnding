"""P1 equality matrix (handover 5c.47 P1, recorded in 5c.46 AP-BO).

    python tools/aurora_spike/p1_equality.py <live_ppm_dir> <probe.ppm> [<probe.ppm> ...]

Compares every `aurora_live_<guest>.ppm` the live path wrote against one or more harness probe-copy
PPMs. Both sides decode the same guest EFB copy (640x448 RGBA8) with `write_probe_ppm`, so a
per-pixel diff needs no resampling.

Two things the matrix measures rather than assumes:

1. **The one-frame rule.** The harness issues its probe copy at the end of the last replayed chunk
   and receives it with the next frame (the documented "next-frame capture" fallback), so
   `--stop-after N` returns the EFB of recorded frame N-1: harness stop(N) == live guest(2793+N).
   Printing the whole matrix makes the diagonal visible instead of needing the rule to be trusted.
2. **Exactness.** Two PPMs that are byte-identical print a SHA match, which is the strongest form of
   P1's "per-pixel diff of 0 in the EFB payload" (`--probe-copy` is the instrument, not
   `AuroraReadbackCaptureColor`: the colour readback stays black by design).
"""
import hashlib
import os
import sys

import numpy as np

sys.path.insert(0, 'tools/aurora_spike')
from align_matrix import load_ppm  # noqa: E402


def luma(x):
    f = x.astype(np.float64)
    return 0.299 * f[..., 0] + 0.587 * f[..., 1] + 0.114 * f[..., 2]


def sha(path):
    with open(path, 'rb') as fh:
        return hashlib.sha256(fh.read()).hexdigest()


if len(sys.argv) < 3:
    print(__doc__)
    raise SystemExit(2)

live_dir = sys.argv[1]
probe_paths = sys.argv[2:]

lives = sorted(p for p in os.listdir(live_dir) if p.startswith('aurora_live_') and p.endswith('.ppm'))
probes = [(os.path.basename(p), load_ppm(p), sha(p)) for p in probe_paths]

print(f'live readbacks: {len(lives)} in {live_dir}')
print(f'probes        : ' + ', '.join(f'{n} (luma {luma(im).mean():.2f}, sha {s[:8]})' for n, im, s in probes))
print()
print('live ppm            luma   | ' + ' | '.join(f'{n}: mean|d| / %px>8 / sha' for n, _, _ in probes))
for name in lives:
    path = os.path.join(live_dir, name)
    live = load_ppm(path)
    rooms = []
    for _, probe, psha in probes:
        d = np.abs(live.astype(np.int16) - probe.astype(np.int16))
        same = 'IDENTICAL' if sha(path) == psha else 'differs'
        rooms.append(f'{d.astype(np.float64).mean():8.2f} / {((d.max(axis=2)) > 8).mean() * 100:5.2f}% / {same}')
    print(f'{name:20s} {luma(live).mean():6.2f}   | ' + ' | '.join(rooms))
