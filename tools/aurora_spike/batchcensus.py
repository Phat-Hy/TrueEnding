"""Aggregate the layer's TLS_BATCH_DUMP output per guest frame (AP-AO).

`recomp/gfx_d3d11.c` prints, for every batch of one present, `ndc=[clip x, clip y]`,
`z=[clip z]` and `wNDC=[x/w, y/w, z/w]`, plus `outside=<n>/<total>`. That is the layer's own
read of the same draw list `tools/aurora_spike/camera.py --ndc` reads from the capture, so the
two aggregates are comparable when they come from ONE RUN:

    python tools/aurora_spike/batchcensus.py logs_ap/ao_run_B.log
    python tools/aurora_spike/camera.py build/recomp/gxcap/ao3301/gxfifo.tlscap --frame 6 --ndc

The unit of comparison is deliberately the whole frame (union of the clip box, the union of
the w-divided box, the fraction of vertices outside the clip volume) and not batch-vs-draw:
the layer merges consecutive draws that share state, so batch indices and vertex counts do not
line up with draw indices by construction.

    python tools/aurora_spike/batchcensus.py <log> [--dump-index N]
"""
import argparse
import re

LINE = re.compile(
    r'^  b(?P<b>\d+) vtx=(?P<vtx>\d+) tex=(?P<tex>\d+) addr=0x(?P<addr>[0-9A-Fa-f]+) '
    r'(?P<w>\d+)x(?P<h>\d+) fmt=(?P<fmt>\d+) .*?'
    r'persp=(?P<persp>\d).*?'
    r'ndc=\[(?P<cl0>-?[\d.]+)\.\.(?P<ch0>-?[\d.]+), (?P<cl1>-?[\d.]+)\.\.(?P<ch1>-?[\d.]+)\] '
    r'z=\[(?P<zl>-?[\d.]+)\.\.(?P<zh>-?[\d.]+)\] '
    r'wNDC=\[x (?P<nl0>-?[\d.]+)\.\.(?P<nh0>-?[\d.]+) y (?P<nl1>-?[\d.]+)\.\.(?P<nh1>-?[\d.]+) '
    r'z (?P<nl2>-?[\d.]+)\.\.(?P<nh2>-?[\d.]+)\] '
    r'outside=(?P<out>\d+)/(?P<tot>\d+)')
HEAD = re.compile(r'^\[BatchDump\] frame=(?P<f>\d+) batches=(?P<b>\d+) vtx=(?P<v>\d+)')


def frames_from_log(path):
    """-> [ {frame, batches, vtx, rows:[...]} ] in log order (one entry per BatchDump block)."""
    out = []
    cur = None
    with open(path, 'r', errors='replace') as f:
        for line in f:
            m = HEAD.match(line)
            if m:
                cur = dict(frame=int(m.group('f')), batches=int(m.group('b')),
                           vtx=int(m.group('v')), rows=[])
                out.append(cur)
                continue
            m = LINE.match(line)
            if m and cur is not None:
                cur['rows'].append({k: (float(v) if '.' in v else int(v)) if k not in ('addr',)
                                   else int(v, 16) for k, v in m.groupdict().items()})
    return out


def report(fr):
    rows = fr['rows']
    if not rows:
        print(f"present {fr['frame']}: {fr['batches']} batches, {fr['vtx']} vtx, no batch lines")
        return
    nv = sum(r['vtx'] for r in rows)
    out = sum(r['out'] for r in rows)
    print(f"present {fr['frame']}: {fr['batches']} batches, {fr['vtx']} vtx, "
          f"{len(rows)} batch lines ({nv} vtx in them)")
    print('  union clip  x[%.2f..%.2f] y[%.2f..%.2f] z[%.2f..%.2f]'
          % (min(r['cl0'] for r in rows), max(r['ch0'] for r in rows),
             min(r['cl1'] for r in rows), max(r['ch1'] for r in rows),
             min(r['zl'] for r in rows), max(r['zh'] for r in rows)))
    print('  union wNDC  x[%.2f..%.2f] y[%.2f..%.2f] z[%.2f..%.2f]'
          % (min(r['nl0'] for r in rows), max(r['nh0'] for r in rows),
             min(r['nl1'] for r in rows), max(r['nh1'] for r in rows),
             min(r['nl2'] for r in rows), max(r['nh2'] for r in rows)))
    print('  vertices outside the clip volume %d/%d (%.1f %%), fully-outside batches %d, '
          'ortho batches %d, perspective batches %d'
          % (out, nv, 100.0 * out / max(1, nv),
             sum(1 for r in rows if r['out'] >= r['vtx']),
             sum(1 for r in rows if r['persp'] == 0),
             sum(1 for r in rows if r['persp'] == 1)))
    big = sorted(rows, key=lambda r: -r['vtx'])[:8]
    print("  top 8 batches by vertex count:")
    for r in big:
        print('    b%-3d vtx %5d tex=%d 0x%08X %dx%d %s clip x[%.2f..%.2f] y[%.2f..%.2f] '
              'wNDC x[%.2f..%.2f] y[%.2f..%.2f] outside %d/%d'
              % (r['b'], r['vtx'], r['tex'], r['addr'], r['w'], r['h'],
                 'ortho ' if r['persp'] == 0 else 'persp ',
                 r['cl0'], r['ch0'], r['cl1'], r['ch1'],
                 r['nl0'], r['nh0'], r['nl1'], r['nh1'], r['out'], r['tot']))


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('log')
    ap.add_argument('--dump-index', type=int, default=-1,
                    help='only the Nth BatchDump block (default: every one)')
    args = ap.parse_args()
    frames = frames_from_log(args.log)
    print(f'{len(frames)} BatchDump block(s) in {args.log}')
    for k, fr in enumerate(frames):
        if args.dump_index >= 0 and k != args.dump_index:
            continue
        report(fr)


if __name__ == '__main__':
    main()
