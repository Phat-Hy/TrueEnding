import subprocess

t = open('temp_gxinit.txt').read()
body = t.split('.fn fn_806121F0')[1].split('.endfn')[0]
insts = []
for l in body.splitlines():
    if not l.strip(): continue
    if '.L_' in l:
        insts.append(l.strip().replace('.L_', 'lbl_'))
        continue
    if '*/' in l:
        inst = l.split('*/')[1].strip()
        inst = inst.replace('.L_', 'lbl_')
        inst = inst.replace('@sda21(r0)', '')
        insts.append('    ' + inst)

c_code = '''#include "revolution/types.h"
#include "revolution/os.h"

extern u32 __GXData;
extern u32 __cpReg;
extern u32 lbl_80880084;
extern u32 lbl_8088008C;
extern u32 lbl_80880090;
extern u32 lbl_80880094;

asm void fn_806121F0(s16 a, OSContext* ctx) {
    nofralloc
''' + '\n'.join(insts) + '\n}\n'

with open('test_cp.c', 'w') as f:
    f.write(c_code)

cmd = 'build\\compilers\\Wii\\1.0\\mwcceppc.exe -c -nodefaults -proc gekko -align powerpc -enum int -fp hard "-O4,p" -inline auto -Cpp_exceptions on -RTTI off -sdata 8 -sdata2 8 -i ./include -i ./src -lang=c test_cp.c -o test_cp.o'
res = subprocess.run(cmd, shell=True, capture_output=True, text=True)
print('Compiler STDERR:', res.stderr)
print('Compiler EXIT:', res.returncode)
if res.returncode == 0:
    subprocess.run(['tools\\dtk.exe', 'elf', 'disasm', 'test_cp.o', 'test_cp.txt'], capture_output=True)
    t1 = open('test_cp.txt').read()
    l1 = [l.split('*/')[1].strip() for l in t1.split('.fn fn_806121F0')[1].split('.endfn')[0].splitlines() if '*/' in l]
    l2 = [l.split('*/')[1].strip() for l in body.splitlines() if '*/' in l]
    print('Instruction count: Built =', len(l1), 'Target =', len(l2))
    diffs = [f'{i}: B={a} vs T={b}' for i, (a, b) in enumerate(zip(l1, l2)) if a != b]
    print('Differences:', len(diffs))
    for d in diffs:
        print('  ', d)
    if len(l1) == len(l2) and len(diffs) == 0:
        print('>>> 100.00% EXACT MATCH! <<<')
