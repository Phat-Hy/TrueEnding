import re

offsets = []
for fname in ['chunk_0033_text1_800881C0.c', 'chunk_0034_text1_8008C1C0.c']:
    with open('build/recomp/generated/chunks/' + fname, 'r') as f:
        in_func = False
        for l in f:
            if 'label_8008BD10:' in l:
                in_func = True
            if 'label_8008C628:' in l:
                in_func = False
            if in_func:
                m = re.findall(r'(\d+)\(r1\)', l)
                for off in m:
                    offsets.append(int(off))

if offsets:
    print(f"Total stack accesses: {len(offsets)}")
    print(f"Min offset: {min(offsets)}, Max offset: {max(offsets)}")
    print("Highest 20 offsets:")
    print(sorted(set(offsets))[-20:])
