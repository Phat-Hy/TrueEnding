import re

with open('temp_ipc.txt') as f:
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
    'extern void DCInvalidateRange(void*, u32);',
    'extern void OSClearContext(void*);',
    'extern void OSSetCurrentContext(void*);',
    'extern void OSWakeupThread(void*);',
    'extern void fn_805F68B0(void);',
    'extern void fn_805F68C0(void);',
    'extern void fn_8061DE90(void);',
    'extern void fn_8061DEA0(void);',
    'extern void iosFree(void*, void*);',
    '',
    '/* External data */',
    'extern u8 __responses_807E7640[];',
    '',
    '/* External SDA/SBSS symbols */',
    'extern u32 __mailboxAck_8087E8D0;',
    'extern u32 hid_8087E8D4;',
    'extern u8 lbl_808800E8;',
    'extern u32 lbl_808800EC;',
    'extern u32 lbl_808800F0;',
    'extern u32 lbl_808800F4;',
    'extern u8 lbl_808800F8[8];',
    'extern u32 lbl_80880100;',
    'extern u32 lbl_80880104;',
    'extern u32 lbl_80880108;',
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
            out_lines.append(f'    {inst_str}')

    out_lines.append('}\n')

with open('src/ipc.c', 'w') as f:
    f.write('\n'.join(out_lines))

print(f'Generated src/ipc.c with {len(funcs)} functions.')
