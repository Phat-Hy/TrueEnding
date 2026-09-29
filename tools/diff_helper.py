import sys
import json
import subprocess

def diff_func(func_name, unit="main/OSThread"):
    cmd = ["tools\\objdiff-cli.exe", "diff", "-p", ".", "-u", unit, "-o", "temp_diff.json", func_name]
    res = subprocess.run(cmd, capture_output=True, text=True)
    if res.returncode != 0:
        print("objdiff error:", res.stderr)
        return
    with open("temp_diff.json", "r") as f:
        data = json.load(f)
    left_syms = {s["name"]: s for s in data.get("left", {}).get("symbols", [])}
    right_syms = {s["name"]: s for s in data.get("right", {}).get("symbols", [])}
    
    sym = func_name
    if sym not in left_syms or sym not in right_syms:
        print(f"Symbol {sym} not found in left or right")
        return
    
    l_insts = left_syms[sym].get("instructions", [])
    r_insts = right_syms[sym].get("instructions", [])
    
    print(f"=== {sym}: target (left) {len(l_insts)} insts, built (right) {len(r_insts)} insts ===")
    
    max_len = max(len(l_insts), len(r_insts))
    diff_count = 0
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
            if 'relocation' in l_item and 'relocation' in r_item and l_mnem == r_mnem:
                # Compare non-reloc arguments
                l_args = [p.get('arg', {}).get('opaque') for p in l_inst.get('parts', []) if 'opaque' in p.get('arg', {})]
                r_args = [p.get('arg', {}).get('opaque') for p in r_inst.get('parts', []) if 'opaque' in p.get('arg', {})]
                if l_args == r_args:
                    is_reloc_only = True
            
            if diff_kind:
                diff_count += 1
                flag = "~" if is_reloc_only else "*"
            else:
                flag = " "
            print(f"{flag} {i:3d} | {l_addr}: {l_str:<40} | {r_addr}: {r_str}")
            
    print(f"Total actual diff instructions: {diff_count}/{max_len}")

def list_funcs():
    with open('build/SLSEXJ/report.json') as f:
        d = json.load(f)
    for u in d.get('units', []):
        if 'OSThread' in u.get('name', ''):
            for fn in u.get('functions', []):
                print(f"{fn.get('name'):28} {fn.get('fuzzy_match_percent', 0):6.2f}% {fn.get('total_code', 0)} bytes")

if __name__ == "__main__":
    args = [a for a in sys.argv[1:] if not a.startswith("-")]
    if "--list" in sys.argv:
        list_funcs()
    elif len(args) > 0:
        diff_func(args[0], args[1] if len(args) > 1 else "main/OSThread")
    else:
        print("Usage: python tools/diff_helper.py <func_name> [-a] or --list")
