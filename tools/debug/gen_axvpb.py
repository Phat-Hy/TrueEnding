import re

with open('temp_axvpb.txt') as f:
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
    '#include "revolution/os.h"',
    '',
    '/* External functions */',
    'extern void _savegpr_25(void);',
    'extern void _restgpr_25(void);',
    'extern void fn_80607DE0(void);',
    'extern void fn_80607F80(void);',
    'extern void fn_80608B70(void);',
    '',
    '/* External large data symbols */',
    'extern u8 lbl_807AC608[];',
    'extern u8 lbl_807AC688[];',
    '',
    '/* External small data symbols (SDA21) */',
    'extern u32 lbl_8087FFB8;',
    'extern u32 lbl_8087FFBC;',
    'extern u32 lbl_8087FFC0;',
    'extern u32 lbl_8087FFC4;',
    'extern u32 lbl_8087FFC8;',
    'extern u32 lbl_8087FFCC;',
    'extern u32 lbl_8087FFD0;',
    'extern u32 lbl_8087FFD4;',
    'extern u32 lbl_8087FFD8;',
    'extern u32 lbl_8087FFDC;',
    'extern u32 lbl_8087FFE0;',
    'extern u32 lbl_8087FFE4;',
    'extern u32 lbl_8087FFE8;',
    'extern u32 lbl_8087FFEC;',
    'extern u32 lbl_8087FFF0;',
    'extern u32 lbl_8087FFF4;',
    'extern u32 lbl_8087FFF8;',
    'extern u32 lbl_8087FFFC;',
    'extern u32 lbl_80880000;',
    'extern u32 lbl_80880004;',
    'extern u32 lbl_80880008;',
    'extern u32 lbl_8088000C;',
    'extern u32 lbl_80880014;',
    'extern u32 lbl_80880018;',
    'extern u32 lbl_8088001C;',
    'extern u32 lbl_80880020;',
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
            # Convert rX, sym@sda21(r0) to rX, sym
            inst_str = re.sub(r'@sda21\(r0\)', '', inst_str)
            # Remove any standalone @sda21
            inst_str = inst_str.replace('@sda21', '')
            # crclr cr1eq -> crclr 6
            inst_str = inst_str.replace('crclr cr1eq', 'crclr 6')
            out_lines.append(f'    {inst_str}')

    out_lines.append('}')
    out_lines.append('')

with open('src/AXVPB.c', 'w') as f:
    f.write('\n'.join(out_lines))

print(f'Generated src/AXVPB.c with {len(funcs)} functions successfully')
