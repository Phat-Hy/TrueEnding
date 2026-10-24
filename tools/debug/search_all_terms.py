import os, glob

search_terms = [b'wi-fi', b'wi-fi', b'nintendo wi-fi', b'wrist strap', b'strap', b'wii remote']
results = []

for root, dirs, files in os.walk('orig/DATA/files'):
    for f in files:
        path = os.path.join(root, f)
        try:
            data = open(path, 'rb').read()
            data_lower = data.lower()
            for term in [b'wi-fi', b'wifi', b'wrist strap', b'strapa']:
                pos = 0
                while True:
                    idx = data_lower.find(term, pos)
                    if idx == -1: break
                    ctx_start = max(0, idx - 40)
                    ctx_end = min(len(data), idx + 80)
                    results.append((path, term, data[ctx_start:ctx_end]))
                    pos = idx + len(term) + 1
                    if len(results) > 50: break
        except Exception as e:
            pass

print(f"Total occurrences found: {len(results)}")
for r in results[:30]:
    print(r[0], r[1], repr(r[2]))
