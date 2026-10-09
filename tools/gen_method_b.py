import sys
import os
import re
import subprocess

KNOWN_DECLS = {
    'memset': None, # In types.h
    'memcpy': None, # In types.h
    'strcpy': 'extern char* strcpy(char* dest, const char* src);',
    'strlen': 'extern u32 strlen(const char* str);',
    'sprintf': 'extern int sprintf(char* str, const char* format, ...);',
    'OSReport': 'extern void OSReport(const char* msg, ...);',
    'OSPanic': 'extern void OSPanic(const char* file, int line, const char* msg, ...);',
}

def generate_module(mod_name):
    print(f"=== Processing {mod_name} ===")
    obj_path = f"build/SLSEXJ/obj/{mod_name}.o"
    if not os.path.exists(obj_path):
        print(f"Error: {obj_path} does not exist!")
        return False

    temp_s = f"temp_{mod_name}.txt"
    # Step 1: Disassemble original object
    cmd = ["tools/dtk.exe", "elf", "disasm", obj_path, temp_s]
    subprocess.run(cmd, check=True)

    with open(temp_s, "r") as f:
        text = f.read()

    # Sanitize quoted symbols before any parsing
    text = re.sub(r'"@\w*_?([0-9A-Fa-f]{8})"', r'lbl_\1', text)
    text = re.sub(r'"@([^"]+)"', lambda m: 'lbl_' + re.sub(r'[^0-9A-Za-z_]', '_', m.group(1)), text)
    text = re.sub(r'"([^"]+)"', lambda m: re.sub(r'[^0-9A-Za-z_]', '_', m.group(1)), text)

    # Step 2: Parse functions
    sections = re.split(r'\.fn\s+([\w@]+)', text)
    funcs = {}
    for i in range(1, len(sections), 2):
        fn_name = sections[i]
        if fn_name.startswith('gap_'):
            continue
        fn_body = sections[i+1].split('.endfn')[0].strip()
        funcs[fn_name] = fn_body

    # Step 3: Collect symbols
    bl_syms = set(re.findall(r'\bbl\s+([\w@]+)', text))
    b_syms = set(re.findall(r'\bb\s+([\w@]+)', text))
    ha_syms = set(re.findall(r'([\w@]+)@ha', text))
    l_syms = set(re.findall(r'([\w@]+)@l', text))
    sda_syms = set(re.findall(r'([\w@]+?)(?:\+[0-9A-Fa-fx]+)?@sda21', text))

    fn_set = set(funcs.keys())
    
    # Filter external function symbols
    all_calls = set()
    for s in (bl_syms | b_syms):
        if s not in fn_set and not s.startswith('.L_') and not re.match(r'^r\d+$', s) and not re.match(r'^cr\d', s):
            all_calls.add(s)

    # Any function pointer taken via @ha/@l
    for s in (ha_syms | l_syms):
        if (s.startswith('fn_') or s.startswith('OS') or s.startswith('__') or s.startswith('NAND') or s.startswith('SC') or s.startswith('async')) and s not in fn_set:
            all_calls.add(s)

    # Step 4: Emit C source
    out_lines = [
        '#include "revolution/types.h"',
        '#pragma function_align 4',
        '',
        '/* External function declarations */'
    ]

    for s in sorted(all_calls):
        if s not in fn_set:
            if s in KNOWN_DECLS:
                decl = KNOWN_DECLS[s]
                if decl:
                    out_lines.append(decl)
            else:
                out_lines.append(f'extern void {s}(void);')

    out_lines.append('')
    out_lines.append('/* External data declarations */')
    for s in sorted(ha_syms | l_syms):
        if s not in all_calls and s not in fn_set:
            out_lines.append(f'extern u8 {s}[];')

    out_lines.append('')
    out_lines.append('/* Small data declarations */')
    for s in sorted(sda_syms):
        if re.match(r'^[a-zA-Z_]', s):
            out_lines.append(f'extern u32 {s};')

    out_lines.append('')
    out_lines.append('/* Function declarations */')
    for fn_name in funcs.keys():
        out_lines.append(f'void {fn_name}(void);')

    sym_entries = sorted(set(re.findall(r'\.sym\s+([\w@]+),\s*global', text)))
    for sym_name in sym_entries:
        if sym_name not in funcs:
            out_lines.append(f'void {sym_name}(void);')

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
            if line.startswith('.sym '):
                m_sym = re.match(r'\.sym\s+([\w@]+),\s*global', line)
                if m_sym:
                    out_lines.append(f'entry {m_sym.group(1)}')
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
                # Fix condition registers
                inst_str = inst_str.replace('crclr cr1eq', 'crclr 6')
                inst_str = inst_str.replace('crclr cr0eq', 'crclr 2')
                # Convert li rX, sym@sda21 to la rX, sym
                inst_str = re.sub(r'li\s+(r\d+),\s*([\w@]+)@sda21', r'la \1, \2', inst_str)
                # Remove @sda21(r0)
                inst_str = re.sub(r'@sda21\(r0\)', '', inst_str)
                inst_str = inst_str.replace('@sda21', '')
                # Fix paired singles quantizer registers qr0..qr7 -> 0..7
                inst_str = re.sub(r'\bqr(\d)\b', r'\1', inst_str)
                # Fix trap word unsigned immediate twui -> twi 31
                inst_str = re.sub(r'\btwui\s+(\w+),\s*0x0\b', r'twi 31, \1, 0', inst_str)
                inst_str = re.sub(r'\btwui\s+(\w+),\s*(\w+)\b', r'twi 31, \1, \2', inst_str)
                # Handle addic. with symbol @l
                m_addic = re.match(r'addic\.\s+(r\d+),\s*(r\d+),\s*lbl_([0-9A-Fa-f]{8})@l', inst_str)
                if m_addic:
                    lo_val = int(m_addic.group(3), 16) & 0xffff
                    if lo_val & 0x8000:
                        lo_val -= 0x10000
                # Convert .4byte to opword
                inst_str = re.sub(r'^\.4byte\s+(0x[0-9A-Fa-f]+).*', r'opword \1', inst_str)
                out_lines.append(f'    {inst_str}')

        out_lines.append('}\n')

    src_file = f"src/{mod_name}.c"
    with open(src_file, "w") as f:
        f.write('\n'.join(out_lines))

    print(f"Generated {src_file} with {len(funcs)} functions.")
    return True

if __name__ == '__main__':
    if len(sys.argv) < 2:
        print("Usage: python tools/gen_method_b.py <module_name>")
        sys.exit(1)
    generate_module(sys.argv[1])
