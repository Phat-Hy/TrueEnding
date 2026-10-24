import re

with open('temp_ax.txt') as f:
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
    '/* External runtime functions */',
    'extern void _savegpr_27(void);',
    'extern void _restgpr_27(void);',
    'extern void OSRegisterVersion(const char*);',
    '',
    '/* External AX/DSP functions */',
    'extern void fn_80609570(void);',
    'extern void fn_80609B00(u32);',
    'extern void fn_8060A120(void);',
    'extern void fn_8060AB60(void);',
    'extern void fn_8060ABA0(void);',
    '',
    '/* External large data symbols */',
    'extern u8 lbl_807D1630[];',
    'extern u8 lbl_807D16B0[];',
    'extern u8 lbl_807D1740[];',
    'extern u8 lbl_807D2940[];',
    'extern u8 lbl_807D3B40[];',
    '',
    '/* External small data symbols (SDA21) */',
    'extern const char* lbl_8087E848;',
    'extern u32 lbl_8087FEF8;',
    'extern u32 lbl_8087FF00;',
    'extern u32 lbl_8087FF08;',
    'extern u32 lbl_8087FF0C;',
    'extern u32 lbl_8087FF10;',
    'extern u32 lbl_8087FF2C;',
    'extern u32 lbl_8087FF30;',
    'extern u32 lbl_8087FF34;',
    'extern u32 lbl_8087FF38;',
    'extern u32 lbl_8087FF3C;',
    'extern u32 lbl_8087FF40;',
    'extern u32 lbl_8087FF44;',
    'extern u32 lbl_8087FF48;',
    'extern u32 lbl_8087FF4C;',
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

with open('src/ax.c', 'w') as f:
    f.write('\n'.join(out_lines))

print(f'Generated src/ax.c with {len(funcs)} functions successfully')
