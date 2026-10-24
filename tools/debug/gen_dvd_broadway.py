import re

with open('temp_dvd_broadway.txt') as f:
    text = f.read()

sections = re.split(r'=== ([\w@]+) .*?===', text)
funcs = {}
for i in range(1, len(sections), 2):
    fn_name = sections[i]
    fn_body = sections[i+1].strip()
    funcs[fn_name] = fn_body

rel_branch = {'b', 'beq', 'bne', 'ble', 'bge', 'blt', 'bgt', 'bdnz', 'bso', 'bns'}

out_lines = [
    '#include "revolution/types.h"',
    '#include "revolution/os.h"',
    '',
    '/* External functions */',
    'extern void IOS_IoctlAsync(void);',
    'extern void IOS_Open(void);',
    'extern void IPCCltInit(void);',
    'extern void IPCGetBufferHi(void);',
    'extern void IPCGetBufferLo(void);',
    'extern void IPCSetBufferLo(void);',
    'extern void OSFatal(void*, void*, void*);',
    'extern u32 OSGetPhysicalMem2Size(void);',
    'extern void OSSetFontEncode(u32);',
    'extern u32 SCGetLanguage(void);',
    'extern void __DVDShowFatalMessage(void);',
    'extern void __OSGetIOSRev(void*);',
    'extern void _restgpr_24(void);',
    'extern void _restgpr_27(void);',
    'extern void _savegpr_24(void);',
    'extern void _savegpr_27(void);',
    'extern void fn_806070F0(void);',
    'extern void fn_80607230(void);',
    'extern void fn_8061C8A0(void);',
    'extern void fn_8061D2F0(void);',
    'extern void fn_8068236C(void);',
    'extern void fn_80696324(void);',
    'extern void lowCallback_806003F0(u32);',
    '',
    '/* External data symbols (> 8 bytes) */',
    'extern u8 CheckBuffer_807D12C0[];',
    'extern u8 __DVDDeviceErrorMessage[];',
    'extern char lbl_807AAB08[];',
    'extern char lbl_807AAB68[];',
    'extern u8 lbl_807D12E0[];',
    'extern u8 lbl_807D1360[];',
    'extern u8 lbl_807D1380[];',
    'extern u8 lbl_807D13A0[];',
    'extern u8 lbl_807D1460[];',
    'extern u8 lbl_807D1480[];',
    'extern u8 lbl_807D14A0[];',
    '',
    '/* External small data symbols (<= 8 bytes, SDA21) */',
    'extern u32 lbl_80888598;',
    'extern u8 lbl_8087E7F8[8];',
    'extern u8 lbl_8087E800[8];',
    'extern u32 lbl_8087E80C;',
    'extern u8 lbl_8087FDB8;',
    'extern u8 lbl_8087FDB9;',
    'extern u32 lbl_8087FDBC;',
    'extern u32 lbl_8087FDC0;',
    'extern u8 lbl_8087FDC4;',
    'extern u8 lbl_8087FDC5;',
    'extern u32 lbl_8087FDC8;',
    'extern u32 lbl_8087FDCC;',
    'extern u32 lbl_8087FDD0;',
    'extern u32 lbl_8087FDD4;',
    'extern u8 lbl_8087FDD8;',
    'extern u32 lbl_8087FE10;',
    'extern u32 lbl_8087FE18;',
    'extern u32 lbl_8087FE1C;',
    'extern u32 lbl_8087FE20;',
    'extern u32 lbl_8087FE28;',
    'extern u32 lbl_8087FE2C;',
    'extern u32 lbl_8087FE38;',
    'extern u32 lbl_8087FE4C;',
    'extern u32 lbl_8087FE84;',
    'extern u32 lbl_8087FE88;',
    'extern u32 lbl_8087FE8C;',
    'extern u32 lowDone_8087E7F0;',
    'extern u32 lowIntType_8087FDB0;',
    '',
    '/* Function declarations */',
]

for fn_name in funcs.keys():
    out_lines.append(f'void {fn_name}(void);')

out_lines.append('')

for fn_name, fn_body in funcs.items():
    lines = fn_body.split('\n')
    insts = []
    current_addr = 0
    for line in lines:
        line = line.strip()
        if not line or '|' not in line:
            continue
        parts = line.split('|', 1)[1].strip()
        if ':' in parts:
            addr_str, inst_str = parts.split(':', 1)
            addr_str = addr_str.strip()
            inst_str = inst_str.strip()
            if addr_str:
                addr = int(addr_str, 16)
            else:
                addr = current_addr
        else:
            addr = current_addr
            inst_str = parts.strip()
        insts.append((addr, inst_str))
        current_addr = addr + 4
    
    # Identify branch targets
    targets = set()
    for addr, inst_str in insts:
        tokens = inst_str.split(None, 1)
        if len(tokens) == 2:
            mnem, op = tokens[0], tokens[1]
            if mnem in rel_branch:
                target = op.split(',')[-1].strip()
                if target.startswith('0x'):
                    targets.add(int(target, 16))

    out_lines.append(f'asm void {fn_name}(void)')
    out_lines.append('{')
    out_lines.append('    nofralloc')
    
    for addr, inst_str in insts:
        if addr in targets:
            out_lines.append(f'lbl_{fn_name}_{addr:x}:')
        
        # Replace branch targets
        tokens = inst_str.split(None, 1)
        if len(tokens) == 2:
            mnem, op = tokens[0], tokens[1]
            if mnem in rel_branch:
                parts = op.rsplit(',', 1)
                if len(parts) == 2:
                    prefix, target = parts[0], parts[1].strip()
                    if target.startswith('0x'):
                        target_addr = int(target, 16)
                        inst_str = f'{mnem} {prefix}, lbl_{fn_name}_{target_addr:x}'
                else:
                    target = parts[0].strip()
                    if target.startswith('0x'):
                        target_addr = int(target, 16)
                        inst_str = f'{mnem} lbl_{fn_name}_{target_addr:x}'
        
        # Replace @850_80888598 with lbl_80888598
        inst_str = inst_str.replace('@850_80888598', 'lbl_80888598')
        # Convert li rX, sym@sda21 to la rX, sym
        inst_str = re.sub(r'li\s+(r\d+),\s*([\w@]+)@sda21', r'la \1, \2', inst_str)
        # Replace crclr cr1eq with crclr 6 (bit 6 is cr1eq)
        inst_str = inst_str.replace('crclr cr1eq', 'crclr 6')
        # Strip @sda21
        inst_str = inst_str.replace('@sda21', '')
        out_lines.append(f'    {inst_str}')
    
    out_lines.append('}')
    out_lines.append('')

with open('src/dvd_broadway.c', 'w') as f:
    f.write('\n'.join(out_lines))

print('Generated src/dvd_broadway.c successfully')
