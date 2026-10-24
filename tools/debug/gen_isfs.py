import re

with open('temp_isfs.txt') as f:
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
    'extern void IOS_IoctlAsync(void);',
    'extern void IOS_Ioctlv(void);',
    'extern void IOS_Open(void);',
    'extern void IOS_OpenAsync(void);',
    'extern void IPCGetBufferHi(void);',
    'extern void IPCGetBufferLo(void);',
    'extern void IPCSetBufferLo(void);',
    'extern void OSReport(const char*, ...);',
    'extern void fn_8061C7E0(void);',
    'extern void fn_8061C8A0(void);',
    'extern void fn_8061C950(void);',
    'extern void fn_8061CA50(void);',
    'extern void fn_8061CB60(void);',
    'extern void fn_8061CC60(void);',
    'extern void fn_8061CD70(void);',
    'extern void fn_8061CE50(void);',
    'extern void fn_8061D080(void);',
    'extern void fn_8061D2F0(void);',
    'extern void iosAllocAligned(void);',
    'extern void iosCreateHeap(void);',
    'extern void iosFree(void*, void*);',
    'extern char* strcpy(char*, const char*);',
    'extern u32 strnlen(const char*, u32);',
    'extern void _savegpr_21(void);',
    'extern void _savegpr_23(void);',
    'extern void _savegpr_25(void);',
    'extern void _savegpr_26(void);',
    'extern void _savegpr_27(void);',
    'extern void _restgpr_21(void);',
    'extern void _restgpr_23(void);',
    'extern void _restgpr_25(void);',
    'extern void _restgpr_26(void);',
    'extern void _restgpr_27(void);',
    '',
    'static const char lbl_807B0F40[] = "ISFS_OpenLib: not enough memory\\n";',
    'static const char lbl_8087E8C8[] = "/dev/fs";',
    '',
    '/* External SDA/SBSS symbols */',
    'extern u32 __fsFd_8087E8C0;',
    'extern u32 __fsInitialized_808800D0;',
    'extern u32 __devfs_808800D4;',
    'extern u32 lbl_808800D8;',
    'extern u32 hId_808800E4;',
    'static u32 lo;',
    'static u32 hi;',
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
            # Clean special symbols first
            inst_str = inst_str.replace('lo$688_808800DC', 'lo')
            inst_str = inst_str.replace('hi$689_808800E0', 'hi')
            inst_str = inst_str.replace('"@1687_807B0F40"', 'lbl_807B0F40')
            inst_str = inst_str.replace('"@1688_8087E8C8"', 'lbl_8087E8C8')
            inst_str = inst_str.replace('crclr cr1eq', 'crclr 6')
            # Convert li rX, sym@sda21 to la rX, sym
            inst_str = re.sub(r'li\s+(r\d+),\s*([\w@]+)@sda21', r'la \1, \2', inst_str)
            # Remove @sda21(r0)
            inst_str = re.sub(r'@sda21\(r0\)', '', inst_str)
            inst_str = inst_str.replace('@sda21', '')
            out_lines.append(f'    {inst_str}')

    out_lines.append('}\n')

with open('src/isfs.c', 'w') as f:
    f.write('\n'.join(out_lines))

print(f'Generated src/isfs.c with {len(funcs)} functions.')
