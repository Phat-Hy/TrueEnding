import sys
import json
import subprocess

def diff_func(func_name, unit=None):
    if unit is None:
        with open("build/SLSEXJ/report.json") as f:
            d = json.load(f)
        for u in d.get("units", []):
            for fn in u.get("functions", []):
                fn_name = fn.get("name", "")
                if fn_name == func_name or fn_name.startswith(f"{func_name}_"):
                    unit = u.get("name").replace("src/", "main/").replace(".c", "")
                    break
            if unit:
                break
    if not unit:
        unit = "main/OSAlarm"
    cmd = ["tools\\objdiff-cli.exe", "diff", "-p", ".", "-u", unit, "-o", "temp_diff.json", func_name]
    res = subprocess.run(cmd, capture_output=True, text=True)
    if res.returncode != 0:
        print("objdiff error:", res.stderr)
        return
    with open("temp_diff.json", "r") as f:
        data = json.load(f)
    left_syms = {s["name"]: s for s in data.get("left", {}).get("symbols", [])}
    right_syms = {s["name"]: s for s in data.get("right", {}).get("symbols", [])}
    
    def find_sym(syms, name):
        if name in syms:
            return syms[name]
        for k, v in syms.items():
            if k == name or k.startswith(f"{name}_"):
                return v
        return None

    l_sym = find_sym(left_syms, func_name)
    if not l_sym:
        print(f"Symbol {func_name} not found in target binary")
        return
    r_sym = find_sym(right_syms, func_name)
    if not r_sym:
        l_insts = l_sym.get("instructions", [])
        print(f"=== {func_name} ({unit}): TARGET ASSEMBLY ({len(l_insts)} instructions) [Not yet defined in C] ===")
        for i, item in enumerate(l_insts):
            inst = item.get("instruction", {})
            addr = f"{int(inst.get('address', '0')):04x}" if 'address' in inst else "    "
            print(f"    {i:2d} | {addr}: {inst.get('formatted', '')}")
        return
    
    l_insts = l_sym.get("instructions", [])
    r_insts = r_sym.get("instructions", [])
    
    print(f"=== {func_name} ({unit}): target (left) {len(l_insts)} insts, built (right) {len(r_insts)} insts ===")
    
    max_len = max(len(l_insts), len(r_insts))
    diff_count = 0
    reloc_count = 0
    all_mode = "-a" in sys.argv or "--all" in sys.argv
    for i in range(max_len):
        l_item = l_insts[i] if i < len(l_insts) else {}
        r_item = r_insts[i] if i < len(r_insts) else {}
        l_inst = l_item.get("instruction", {})
        r_inst = r_item.get("instruction", {})
        
        l_str = l_inst.get("formatted", "")
        r_str = r_inst.get("formatted", "")
        l_addr = f"{int(l_inst.get('address', '0')):04x}" if 'address' in l_inst else "    "
        r_addr = f"{int(r_inst.get('address', '0')):04x}" if 'address' in r_inst else "    "
        
        diff_kind = l_item.get("diff_kind") or r_item.get("diff_kind")
        if diff_kind or all_mode:
            # Check if it's only a relocation symbol name difference
            l_parts = [p.get('arg', {}).get('opaque') or p.get('opcode', {}).get('mnemonic') for p in l_inst.get('parts', [])]
            r_parts = [p.get('arg', {}).get('opaque') or p.get('opcode', {}).get('mnemonic') for p in r_inst.get('parts', [])]
            l_mnem = l_inst.get('parts', [{}])[0].get('opcode', {}).get('mnemonic')
            r_mnem = r_inst.get('parts', [{}])[0].get('opcode', {}).get('mnemonic')
            
            is_reloc_only = False
            if 'relocation' in l_inst and 'relocation' in r_inst and l_mnem == r_mnem:
                # Compare non-reloc arguments
                l_args = [p.get('arg', {}).get('opaque') for p in l_inst.get('parts', []) if 'opaque' in p.get('arg', {})]
                r_args = [p.get('arg', {}).get('opaque') for p in r_inst.get('parts', []) if 'opaque' in p.get('arg', {})]
                if l_args == r_args:
                    is_reloc_only = True
            
            if diff_kind:
                if not is_reloc_only:
                    diff_count += 1
                else:
                    reloc_count += 1
                flag = "~" if is_reloc_only else "*"
            else:
                flag = " "
            print(f"{flag} {i:3d} | {l_addr}: {l_str:<40} | {r_addr}: {r_str}")
            
    if reloc_count > 0 and diff_count == 0:
        print(f"Total actual diff instructions: 0/{max_len} ({reloc_count} relocations match 100.0%)")
    else:
        print(f"Total actual diff instructions: {diff_count}/{max_len}")

def list_funcs(filter_str="OSAlarm"):
    with open('build/SLSEXJ/report.json') as f:
        d = json.load(f)
    for u in d.get('units', []):
        if filter_str in u.get('name', ''):
            print(f"--- {u.get('name')} ---")
            for fn in u.get('functions', []):
                print(f"{fn.get('name'):28} {fn.get('fuzzy_match_percent', 0):6.2f}% {fn.get('total_code', 0)} bytes")

if __name__ == "__main__":
    args = [a for a in sys.argv[1:] if not a.startswith("-")]
    if "--list" in sys.argv:
        target = args[0] if len(args) > 0 else "OSAlarm"
        list_funcs(target)
    elif len(args) > 0:
        diff_func(args[0], args[1] if len(args) > 1 else None)
    else:
        print("Usage: python tools/diff_helper.py <func_name> [-a] or --list [filter]")
