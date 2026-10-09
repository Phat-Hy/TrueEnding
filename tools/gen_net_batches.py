import re

syms = []
with open('config/symbols.txt', 'r') as f:
    for line in f:
        m = re.match(r'^(\S+)\s*=\s*\.text:0x([0-9a-fA-F]+);\s*(?://.*size:0x([0-9a-fA-F]+))?', line)
        if m:
            name, addr_str, size_str = m.group(1), m.group(2), m.group(3)
            addr = int(addr_str, 16)
            size = int(size_str, 16) if size_str else 0
            if 0x8069A0D0 <= addr < 0x8072D204:
                syms.append((addr, size, name))

curr_start = syms[0][0]
target_size = 0x2000 # ~8KB
modules = []
mod_idx = 1
for a, s, n in syms:
    if (a + s) - curr_start >= target_size:
        modules.append((f'game_net_sdk_{mod_idx:03d}', f'0x{curr_start:08X}', f'0x{a+s:08X}', (a+s) - curr_start))
        curr_start = a + s
        mod_idx += 1

if curr_start < 0x8072D204:
    modules.append((f'game_net_sdk_{mod_idx:03d}', f'0x{curr_start:08X}', '0x8072D204', 0x8072D204 - curr_start))

print(f'Total generated modules: {len(modules)}')
with open('tools/net_sdk_modules.py', 'w') as out:
    out.write('NET_SDK_MODULES = [\n')
    for m in modules:
        out.write(f'    ("{m[0]}", "{m[1]}", "{m[2]}"), # {m[3]} bytes\n')
    out.write(']\n')
print('Wrote tools/net_sdk_modules.py')
