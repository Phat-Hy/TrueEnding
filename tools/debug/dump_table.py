import re

with open('asm/asm/auto_06_8072D480_rodata.s', 'r', encoding='utf-8') as f:
    text = f.read()

labels = {}
for m in re.finditer(r'\.obj (lbl_[0-9A-Fa-f]+).*?\n\s*\.string \"([^\"]*)\"', text):
    labels[m.group(1)] = m.group(2)

start = text.find('.obj lbl_8074CCD0')
end = text.find('.endobj lbl_8074CCD0')
table_body = text[start:end]
ptrs = re.findall(r'\.4byte (lbl_[0-9A-Fa-f]+)', table_body)
stride = 0x1f0 // 4
ep = ptrs[1*stride : 2*stride]
for i, p in enumerate(ep):
    s = labels.get(p, '')
    if s:
        print(f'{i:3d} ({p}): {s}')
