import sys, glob, re, hashlib
import numpy as np
sys.path.insert(0, 'tools')
from cmp_ref import load

rows = []
for f in glob.glob('build/recomp/d3d11_screenshot_*.ppm'):
    n = int(re.search(r'(\d+)\.ppm$', f).group(1))
    img = load(f)
    lum = img.mean(axis=2)
    avg = img.reshape(-1, 3).mean(axis=0)
    h = hashlib.md5(open(f, 'rb').read()).hexdigest()[:8]
    rows.append((n, avg, float(np.percentile(lum, 50)), h))
print('files', len(rows))
for n, avg, p50, h in sorted(rows):
    print('%6d mean=(%5.1f,%5.1f,%5.1f) p50=%5.1f %s' % (n, avg[0], avg[1], avg[2], p50, h))
