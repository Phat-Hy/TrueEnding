import re

with open('temp_ai.txt') as f:
    text = f.read()

sections = re.split(r'=== ([\w@]+) ===', text)
funcs = {}
for i in range(1, len(sections), 2):
    fn_name = sections[i]
    fn_body = sections[i+1].strip()
    funcs[fn_name] = fn_body

out_lines = [
    '#include "revolution/types.h"',
    '#include "revolution/os.h"',
    '',
    '/* External runtime functions */',
    'extern void _savegpr_27(void);',
    'extern void _restgpr_27(void);',
    'extern void OSRegisterVersion(const char*);',
    '',
    '/* Local/internal function declarations */',
    'void fn_80607A80(void);',
    'void fn_80607B30(void);',
    'void fn_80607BA0(void);',
    '',
    '/* External small data symbols */',
    'extern const char* lbl_8087E840;',
    'extern u32 lbl_8087FEB8;',
    'extern u32 lbl_8087FEBC;',
    'extern u32 lbl_8087FEC0;',
    'extern u32 lbl_8087FEC4;',
    'extern u32 lbl_8087FEC8;',
    'extern u32 lbl_8087FECC;',
    'extern u32 lbl_8087FED0;',
    'extern u32 lbl_8087FED4;',
    'extern u32 lbl_8087FED8;',
    'extern u32 lbl_8087FEDC;',
    'extern u32 lbl_8087FEE0;',
    'extern u32 lbl_8087FEE4;',
    'extern u32 lbl_8087FEE8;',
    'extern u32 lbl_8087FEEC;',
    'extern u32 lbl_8087FEF0;',
    '',
    '/* Function declarations */',
]

for fn_name in funcs.keys():
    out_lines.append(f'void {fn_name}(void);')

out_lines.append('')

rel_branch = {'b', 'beq', 'bne', 'ble', 'bge', 'blt', 'bgt', 'bdnz', 'bso', 'bns'}

for fn_name, fn_body in funcs.items():
    lines = fn_body.split('\n')
    out_lines.append(f'asm void {fn_name}(void)')
    out_lines.append('{')
    out_lines.append('    nofralloc')

    for line in lines:
        line = line.strip()
        if not line:
            continue
        if line.startswith('.fn ') or line.startswith('.endfn '):
            continue
        if line.startswith('.L_'):
            label_name = line.split(':')[0].strip()
            label_name = label_name.replace('.L_', f'lbl_{fn_name}_')
            out_lines.append(f'{label_name}:')
            continue
        if '*/' in line:
            inst_str = line.split('*/', 1)[1].strip()
            # Replace .L_ in branch instructions
            inst_str = re.sub(r'\.L_([0-9A-Fa-f]+)', f'lbl_{fn_name}_\\1', inst_str)
            # Convert li rX, sym@sda21 to la rX, sym
            inst_str = re.sub(r'li\s+(r\d+),\s*([\w@]+)@sda21', r'la \1, \2', inst_str)
            # Convert rX, sym@sda21(r0) to rX, sym
            inst_str = re.sub(r'@sda21\(r0\)', '', inst_str)
            # Remove any standalone @sda21
            inst_str = inst_str.replace('@sda21', '')
            # crclr cr1eq -> crclr 6
            inst_str = inst_str.replace('crclr cr1eq', 'crclr 6')
            out_lines.append(f'    {inst_str}')

    out_lines.append('}')
    out_lines.append('')

with open('src/ai.c', 'w') as f:
    f.write('\n'.join(out_lines))

print('Generated src/ai.c successfully')
