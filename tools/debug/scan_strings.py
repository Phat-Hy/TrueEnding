import struct

with open('orig/main.dol', 'rb') as f:
    header = f.read(0x100)
    offsets = struct.unpack('>7I', header[0x0:0x1C])
    addrs = struct.unpack('>7I', header[0x48:0x64])
    sizes = struct.unpack('>7I', header[0x90:0xAC])
    data_offsets = struct.unpack('>11I', header[0x1C:0x48])
    data_addrs = struct.unpack('>11I', header[0x64:0x90])
    data_sizes = struct.unpack('>11I', header[0xAC:0xD8])

def get_str(addr):
    for o, a, s in list(zip(offsets, addrs, sizes)) + list(zip(data_offsets, data_addrs, data_sizes)):
        if a <= addr < a + s:
            file_off = o + (addr - a)
            with open('orig/main.dol', 'rb') as f:
                f.seek(file_off)
                d = f.read(128)
            s_val = d.split(b'\x00')[0]
            if len(s_val) >= 3 and all(32 <= b <= 126 for b in s_val):
                return s_val.decode('ascii')
    return None

start_addr = 0x8060EDF0
end_addr = 0x8060F910

for o, a, s in zip(offsets, addrs, sizes):
    if a <= start_addr < a + s:
        fo = o + (start_addr - a)
        with open('orig/main.dol', 'rb') as f:
            f.seek(fo)
            code = f.read(end_addr - start_addr)
        break

reg_high = {}
for i in range(0, len(code), 4):
    w = struct.unpack('>I', code[i:i+4])[0]
    op = (w >> 26) & 0x3F
    if op == 15: # lis
        rd = (w >> 21) & 0x1F
        imm = w & 0xFFFF
        reg_high[rd] = (imm << 16, i)
    elif op == 14: # addi
        rd = (w >> 21) & 0x1F
        ra = (w >> 16) & 0x1F
        imm = w & 0xFFFF
        if imm >= 0x8000: imm -= 0x10000
        if ra in reg_high:
            base, lis_idx = reg_high[ra]
            if (i - lis_idx) <= 40:
                target = base + imm
                s = get_str(target)
                if s:
                    pc = start_addr + i
                    print(f'{hex(pc)}: string at {hex(target)}: "{s}"')
                else:
                    print(f'{hex(start_addr + i)}: target {hex(target)}')
