import re

with open('temp_vi.txt') as f:
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
    'extern void _restgpr_22(void);',
    'extern void _restgpr_25(void);',
    'extern void _restgpr_26(void);',
    'extern void _restgpr_27(void);',
    'extern void _savegpr_22(void);',
    'extern void _savegpr_25(void);',
    'extern void _savegpr_26(void);',
    'extern void _savegpr_27(void);',
    'extern void fn_80603780(void);',
    'extern void fn_80604050(void);',
    'extern void fn_80604300(void);',
    'extern void fn_806043E0(void);',
    'extern void fn_80624A50(void);',
    'extern void fn_80695FFC(void);',
    'extern void fn_80696324(void);',
    '',
    '/* External data symbols (> 8 bytes) */',
    'extern void* jumptable_807ABF44[];',
    'extern char lbl_807ABA10[];',
    'extern u8 lbl_807ABF20[];',
    'extern u8 lbl_807ABF68[];',
    'extern u8 lbl_807D14A0[];',
    'extern u8 lbl_807D1518[];',
    'extern u8 lbl_807D1590[];',
    'extern u8 lbl_807D15E8[];',
    'extern u8 lbl_807D1610[];',
    '',
    '/* External small data symbols (<= 8 bytes, SDA21) */',
    'extern u32 CurrTvMode_8087FE50;',
    'extern char lbl_8087E820[8];',
    'extern u8 lbl_8087E828[8];',
    'extern u32 lbl_8087E830;',
    'extern u8 lbl_8087E834;',
    'extern u8 lbl_8087E835;',
    'extern u8 lbl_8087E836;',
    'extern u8 lbl_8087E837;',
    'extern u8 lbl_8087E838;',
    'extern u8 lbl_8087E839;',
    'extern u8 lbl_8087E83A;',
    'extern u8 lbl_8087E83B;',
    'extern u8 lbl_8087E83C;',
    'extern u8 lbl_8087E83D;',
    'extern u8 lbl_8087E83E;',
    'extern u8 lbl_8087E83F;',
    'extern u32 lbl_8087FDF4;',
    'extern u16 lbl_8087FE0C;',
    'extern u16 lbl_8087FE0E;',
    'extern u8 lbl_8087FE10[8];',
    'extern u32 lbl_8087FE18;',
    'extern u32 lbl_8087FE1C;',
    'extern u8 lbl_8087FE20[8];',
    'extern u32 lbl_8087FE28;',
    'extern u32 lbl_8087FE2C;',
    'extern u32 lbl_8087FE30;',
    'extern u32 lbl_8087FE44;',
    'extern u32 lbl_8087FE4C;',
    'extern u32 lbl_8087FE54;',
    'extern u32 lbl_8087FE74;',
    'extern u32 lbl_8087FE78;',
    'extern u32 lbl_8087FE80;',
    'extern u32 lbl_8087FE84;',
    'extern u32 lbl_8087FE88;',
    'extern u32 lbl_8087FE8C;',
    'extern u8 lbl_8087FE90[8];',
    'extern u32 lbl_8087FE98;',
    'extern u32 lbl_8087FE9C;',
    'extern u32 lbl_8087FEA0;',
    'extern u32 lbl_8087FEA4;',
    'extern u32 lbl_8087FEA8;',
    'extern u32 lbl_8087FEAC;',
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
        # Replace crclr cr1eq with crclr 6
        inst_str = inst_str.replace('crclr cr1eq', 'crclr 6')
        # Strip @sda21
        inst_str = inst_str.replace('@sda21', '')
        out_lines.append(f'    {inst_str}')
    
    out_lines.append('}')
    out_lines.append('')

with open('src/vi.c', 'w') as f:
    f.write('\n'.join(out_lines))

print('Generated src/vi.c successfully')
