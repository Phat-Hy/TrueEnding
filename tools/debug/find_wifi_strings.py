with open('orig/DATA/files/pack/filesystem.pk', 'rb') as f:
    data = f.read()

print('Searching filesystem.pk (size =', len(data), ')...')
import re
# Look for UTF-16BE: 'W\x00i\x00-\x00F\x00i\x00' or UTF-16LE: 'W\x00i\x00-\x00F\x00i\x00'
for enc, pat in [('UTF-16BE', b'\x00W\x00i\x00-\x00F\x00i'), ('UTF-16LE', b'W\x00i\x00-\x00F\x00i\x00')]:
    for m in re.finditer(pat, data):
        start = max(0, m.start() - 100)
        end = min(len(data), m.end() + 200)
        sub = data[start:end]
        text = sub.decode(enc.lower(), errors='ignore').replace('\r', ' ').replace('\n', ' ')
        print(f'[{enc} at {hex(m.start())}]: {text}')
