import re

with open('temp_vi3in1.txt') as f:
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
    '/* External functions (non-OS) */',
    'extern void OSRegisterVersion(const char*);',
    'extern void __VISetRGBModeImm(void);',
    'extern void _restgpr_24(void);',
    'extern void _restgpr_26(void);',
    'extern void _savegpr_24(void);',
    'extern void _savegpr_26(void);',
    'extern void fn_805EA980(void);',
    'extern void fn_805F6CF0(void);',
    'extern void fn_805FF4D0(void);',
    'extern void fn_805FF4E0(void);',
    'extern void fn_80605300(void);',
    'extern void fn_80605FF0(void);',
    'extern void fn_80606090(void);',
    'extern void fn_806060D0(void);',
    'extern void fn_80606130(void);',
    'extern void fn_806061A0(void);',
    'extern void fn_80606210(void);',
    'extern void fn_80607100(void);',
    'extern void fn_80607140(void);',
    'extern void fn_806071A0(void);',
    'extern void fn_80607290(void);',
    'extern void fn_80624890(void);',
    'extern void fn_80624A50(void);',
    'extern void fn_80696324(void);',
    '',
    '/* External data symbols (> 8 bytes) */',
    'extern void* jumptable_807ABCF8[];',
    'extern void* jumptable_807ABD1C[];',
    'extern void* jumptable_807ABDA8[];',
    'extern u8 lbl_807ABA58[];',
    'extern u8 lbl_807ABBFC[];',
    'extern u8 lbl_807ABCE8[];',
    'extern u8 lbl_807D0FD0[];',
    'extern u8 lbl_807D14A0[];',
    'extern u8 lbl_807D1518[];',
    'extern u8 lbl_807D1590[];',
    '',
    '/* External small data symbols (<= 8 bytes, SDA21) */',
    'extern u32 CurrTvMode_8087FE50;',
    'extern u32 lbl_8087E808;',
    'extern u32 lbl_8087E810;',
    'extern u32 lbl_8087E814;',
    'extern u32 lbl_8087E818;',
    'extern u32 lbl_8087E81C;',
    'extern u32 lbl_8087FDE0;',
    'extern u32 lbl_8087FDE4;',
    'extern u32 lbl_8087FDE8;',
    'extern u32 lbl_8087FDEC;',
    'extern u32 lbl_8087FDF0;',
    'extern u32 lbl_8087FDF4;',
    'extern u32 lbl_8087FDF8;',
    'extern u32 lbl_8087FDFC;',
    'extern u32 lbl_8087FE00;',
    'extern u32 lbl_8087FE04;',
    'extern u32 lbl_8087FE08;',
    'extern u16 lbl_8087FE0C;',
    'extern u16 lbl_8087FE0E;',
    'extern u8 lbl_8087FE10[8];',
    'extern u32 lbl_8087FE18;',
    'extern u32 lbl_8087FE1C;',
    'extern u8 lbl_8087FE20[8];',
    'extern u32 lbl_8087FE28;',
    'extern u32 lbl_8087FE2C;',
    'extern u32 lbl_8087FE34;',
    'extern u32 lbl_8087FE3C;',
    'extern u32 lbl_8087FE40;',
    'extern u32 lbl_8087FE48;',
    'extern u32 lbl_8087FE4C;',
    'extern u32 lbl_8087FE54;',
    'extern u32 lbl_8087FE58;',
    'extern u32 lbl_8087FE5C;',
    'extern u8 lbl_8087FE60[8];',
    'extern u8 lbl_8087FE68[8];',
    'extern u32 lbl_8087FE70;',
    'extern u32 lbl_8087FE74;',
    'extern u32 lbl_8087FE78;',
    'extern u32 lbl_8087FE7C;',
    'extern u32 lbl_8087FE80;',
    'extern u32 lbl_8087FE84;',
    'extern u32 lbl_8087FE88;',
    'extern u32 lbl_8087FE8C;',
    'extern u32 lbl_8087FE98;',
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
        
        # Convert li rX, sym@sda21 to la rX, sym
        inst_str = re.sub(r'li\s+(r\d+),\s*([\w@]+)@sda21', r'la \1, \2', inst_str)
        # Strip @sda21
        inst_str = inst_str.replace('@sda21', '')
        out_lines.append(f'    {inst_str}')
    
    out_lines.append('}')
    out_lines.append('')

with open('src/vi3in1.c', 'w') as f:
    f.write('\n'.join(out_lines))

print('Generated src/vi3in1.c successfully')
