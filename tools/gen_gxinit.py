import re

with open('temp_gxinit.txt') as f:
    text = f.read()

sections = re.split(r'\.fn\s+([\w@]+)', text)
funcs = {}
for i in range(1, len(sections), 2):
    fn_name = sections[i]
    if fn_name.startswith('gap_'):
        continue
    fn_body = sections[i+1].split('.endfn')[0].strip()
    funcs[fn_name] = fn_body

all_calls = set(re.findall(r'bl\s+([\w@]+)', text))
internal_funcs = set(funcs.keys())
extern_calls = sorted(list(all_calls - internal_funcs))

# System calls already in revolution/os.h
os_header_calls = {
    'OSClearContext',
    'OSRegisterShutdownFunction',
    'OSResumeThread',
    'OSSetCurrentContext',
    'OSSuspendThread',
}

out_lines = [
    '#include "revolution/types.h"',
    '#include "revolution/os.h"',
    '',
    '/* External PPC and system functions */',
    'extern u32 PPCMfhid2(void);',
    'extern void PPCMthid2(u32);',
    'extern void PPCMtwpar(u32);',
    'extern u32 VIGetTvFormat(void);',
    'extern void _savegpr_26(void);',
    'extern void _savegpr_27(void);',
    'extern void _restgpr_26(void);',
    'extern void _restgpr_27(void);',
    '',
    '/* External GX and runtime functions */',
]

for call in extern_calls:
    if call not in os_header_calls and not call.startswith('PPC') and not call.startswith('_savegpr') and not call.startswith('_restgpr') and call != 'VIGetTvFormat':
        out_lines.append(f'extern void {call}(void);')

out_lines.extend([
    'extern void fn_80611060(void);',
    'extern void fn_80611150(void);',
    '',
    '/* External data symbols */',
    'extern u8 FifoObj_807E6F40[];',
    'extern u8 GXShutdownFuncInfo_807B0710[];',
    'extern u8 GXTexRegionAddrTable_807B0650[];',
    'extern u8 lbl_807B04E0[];',
    'extern u8 lbl_807B0900[];',
    'extern u8 lbl_807B09B4[];',
    'extern u8 lbl_807B0A68[];',
    'extern u8 lbl_807B0AE0[];',
    '',
    '/* External SDA symbols */',
    'extern u32 __GXData;',
    'extern u32 __GXVersion;',
    'extern u32 __cpReg;',
    'extern u32 __memReg;',
    'extern u32 __peReg;',
    'extern u32 __piReg;',
    'static BOOL lbl_8088007C;',
    'extern u32 lbl_80880084;',
    'extern u32 lbl_8088008C;',
    'extern u32 lbl_80880090;',
    'extern u32 lbl_80880094;',
    'static const f32 lbl_8088871C = 16777216.0f;',
    'static const f32 lbl_80888720 = 0.0f;',
    'extern u32 lbl_80888724;',
    'extern u32 lbl_80888728;',
    'extern f32 lbl_8088872C;',
    'extern f32 lbl_80888730;',
    'extern f64 lbl_80888738;',
    '',
    '/* Function declarations */',
])

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
            # Replace quoted symbols
            inst_str = inst_str.replace('"@LOCAL@GXInit__FPvUl@shutdownFuncRegistered"', 'lbl_8088007C')
            inst_str = inst_str.replace('"@2712_8088871C"', 'lbl_8088871C')
            inst_str = inst_str.replace('"@2713_80888720"', 'lbl_80888720')
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

with open('src/GXInit.c', 'w') as f:
    f.write('\n'.join(out_lines))

print('Wrote src/GXInit.c successfully')
