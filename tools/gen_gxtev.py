import re

with open('temp_gxtev.txt') as f:
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
    'extern void __GXFlushTextureState(void);',
    'extern void fn_80614510(void);',
    'extern void fn_806148E0(void);',
    'extern void fn_80695D84(void);',
    '',
    '/* Jump tables */',
    'extern u32 jumptable_807B0E58[];',
    'extern u32 jumptable_807B0EB0[];',
    '',
    '/* External data */',
    'extern u8 lbl_807B0E10[];',
    'extern u8 lbl_807B0E38[];',
    '',
    '/* External SDA symbols */',
    'extern u32 __GXData;',
    'extern u32 __cpReg;',
    'extern f32 lbl_808887B8;',
    'extern f32 lbl_808887BC;',
    'extern f32 lbl_808887C0;',
    'extern f64 lbl_808887C8;',
    'extern f32 lbl_808887D0;',
    'extern f64 lbl_808887D8;',
    'extern f32 lbl_808887E0;',
    'extern f64 lbl_808887E8;',
    'extern f32 lbl_808887F0;',
    'extern f32 lbl_808887F4;',
    'extern f32 lbl_808887F8;',
    'extern f32 lbl_808887FC;',
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
            # Fix paired single registers qr0 -> 0 if any
            inst_str = re.sub(r'qr(\d+)', r'\1', inst_str)
            out_lines.append(f'    {inst_str}')

    out_lines.append('}\n')

with open('src/GXTev.c', 'w') as f:
    f.write('\n'.join(out_lines))

print(f'Generated src/GXTev.c with {len(funcs)} functions.')
