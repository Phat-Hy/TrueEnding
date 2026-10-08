import re

with open('temp_gxlight.txt') as f:
    text = f.read()

sections = re.split(r'\.fn\s+([\w@]+)', text)
funcs = {}
for i in range(1, len(sections), 2):
    fn_name = sections[i]
    if fn_name.startswith('gap_'):
        continue
    fn_body = sections[i+1].split('.endfn')[0].strip()
    funcs[fn_name] = fn_body

out_lines = [
    '#include "revolution/types.h"',
    '',
    '/* External functions referenced */',
    'extern void fn_80615FF0(void);',
    'extern void fn_8068A850(void);',
    'extern void fn_8068B100(void);',
    'extern void _savegpr_24(void);',
    'extern void _restgpr_24(void);',
    '',
    '/* Jump tables */',
    'extern u32 jumptable_807B0B98[];',
    'extern u32 jumptable_807B0C8C[];',
    'extern u32 jumptable_807B0D80[];',
    '',
    '/* External SDA symbols */',
    'extern u32 __GXData;',
    'extern u8 lbl_8087E8B8[8];',
    'extern f32 lbl_80888750;',
    'extern f32 lbl_80888754;',
    'extern f32 lbl_80888758;',
    'extern f32 lbl_8088875C;',
    'extern f32 lbl_80888760;',
    'extern f32 lbl_80888764;',
    'extern f32 lbl_80888768;',
    'extern f32 lbl_8088876C;',
    'extern f32 lbl_80888770;',
    'extern f32 lbl_80888774;',
    'extern f32 lbl_80888778;',
    'extern f32 lbl_8088877C;',
    'extern f64 lbl_80888780;',
    'extern f32 lbl_80888788;',
    'extern f64 lbl_80888790;',
    'extern f32 lbl_80888798;',
    'extern f32 lbl_8088879C;',
    'extern f32 lbl_808887A0;',
    'extern f32 lbl_808887A4;',
    'extern f32 lbl_808887A8;',
    'extern f32 lbl_808887AC;',
    '',
    '/* Function declarations */',
]

for fn_name in funcs.keys():
    out_lines.append(f'void {fn_name}(void);')

out_lines.append('')

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
            # Remove @sda21(r0)
            inst_str = re.sub(r'@sda21\(r0\)', '', inst_str)
            inst_str = inst_str.replace('@sda21', '')
            # Fix paired single registers qr0 -> 0
            inst_str = re.sub(r'qr(\d+)', r'\1', inst_str)
            out_lines.append(f'    {inst_str}')

    out_lines.append('}\n')

with open('src/GXLight.c', 'w') as f:
    f.write('\n'.join(out_lines))

print(f'Generated src/GXLight.c with {len(funcs)} functions.')
