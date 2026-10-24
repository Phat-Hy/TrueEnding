import re

with open('temp_axaux.txt') as f:
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
    '/* External functions from ax.c */',
    'extern void fn_806083F0(void);',
    'extern void fn_80608430(void);',
    'extern void fn_80608450(void);',
    'extern void fn_80608470(void);',
    'extern void fn_80608490(void);',
    'extern void fn_806084B0(void);',
    'extern void fn_806084D0(void);',
    'extern void fn_80608510(void);',
    'extern void fn_80608530(void);',
    'extern void fn_80608550(void);',
    'extern void fn_80608570(void);',
    'extern void fn_80608590(void);',
    'extern void fn_806085B0(void);',
    'extern void fn_806085F0(void);',
    'extern void fn_80609EB0(void);',
    'extern void fn_8060AB50(void);',
    '',
    '/* External large data symbols */',
    'extern u8 lbl_807D48C0[];',
    '',
    '/* External small data symbols (SDA21) */',
    'extern u32 lbl_8087FF2C;',
    'extern u32 lbl_8087FF30;',
    'extern u32 lbl_8087FF34;',
    'extern u32 lbl_8087FF38;',
    'extern u32 lbl_8087FF3C;',
    'extern u32 lbl_8087FF40;',
    'extern u16 lbl_8087FF50;',
    'extern u16 lbl_8087FF52;',
    'extern u16 lbl_8087FF54;',
    'extern u16 lbl_8087FF56;',
    'extern u16 lbl_8087FF58;',
    'extern u32 lbl_8087FF5C;',
    'extern u32 lbl_8087FF60;',
    'extern u32 lbl_8087FF64;',
    'extern u32 lbl_8087FF68;',
    'extern u32 lbl_8087FF6C;',
    'extern u32 lbl_8087FF70;',
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

with open('src/AXAux.c', 'w') as f:
    f.write('\n'.join(out_lines))

print(f'Generated src/AXAux.c with {len(funcs)} functions successfully')
