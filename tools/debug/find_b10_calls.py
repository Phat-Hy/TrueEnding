import re

calls = []
for fname in ['chunk_0033_text1_800881C0.c', 'chunk_0034_text1_8008C1C0.c']:
    with open('build/recomp/generated/chunks/' + fname, 'r') as f:
        in_func = False
        for l in f:
            if 'label_8008BD10:' in l:
                in_func = True
            if 'label_8008C628:' in l:
                in_func = False
            if in_func:
                m = re.findall(r'bl\s+(0x[0-9A-Fa-f]+)', l)
                for target in m:
                    calls.append(target)

print("Calls inside 0x8008BD10:")
for c in sorted(set(calls)):
    print(c)
