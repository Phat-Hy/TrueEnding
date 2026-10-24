import re

with open('temp_axspb.txt') as f:
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
    'extern void DCFlushRange(void *, u32);',
    'extern BOOL OSDisableInterrupts(void);',
    'extern BOOL OSRestoreInterrupts(BOOL);',
    'extern void fn_80607F60(void);',
    'extern void fn_8068A850(void);',
    'extern void fn_8068B100(void);',
    '',
    '/* External large data symbols */',
    'extern u8 lbl_807D5840[];',
    'extern u8 lbl_807DD040[];',
    'extern u8 lbl_807DE840[];',
    '',
    '/* External small data symbols (SDA21) */',
    'extern u32 lbl_80880008;',
    'extern u32 lbl_8088000C;',
    'extern u32 lbl_80880010;',
    'extern u32 lbl_80880014;',
    'extern u32 lbl_8088001C;',
    'extern u32 lbl_80880020;',
    '',
    '/* External float/double constants */',
    'extern f32 lbl_808885A0;',
    'extern f32 lbl_808885A4;',
    'extern f32 lbl_808885A8;',
    'extern f32 lbl_808885AC;',
    'extern f32 lbl_808885B0;',
    'extern f64 lbl_808885B8;',
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
            # qr0 -> 0, qr1 -> 1
            inst_str = re.sub(r'\bqr(\d+)\b', r'\1', inst_str)
            out_lines.append(f'    {inst_str}')

    out_lines.append('}')
    out_lines.append('')

with open('src/AXSPB.c', 'w') as f:
    f.write('\n'.join(out_lines))

print('Wrote src/AXSPB.c successfully')
