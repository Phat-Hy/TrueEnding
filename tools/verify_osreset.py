import json
import subprocess

TARGET = r"build\SLSEXJ\obj\OSReset.o"
BASE = r"build\SLSEXJ\src\OSReset.o"
FUNCS = [
    "__OSInitSTM", "fn_805F6BF0", "__OSHotReset", "fn_805F6CF0", "fn_805F6DF0",
    "__OSUnRegisterStateEvent", "fn_805F6EB0", "__OSDefaultResetCallback", "__OSDefaultPowerCallback",
    "__OSStateEventHandler", "fn_805F7040", "PlayRecordCallback", "__OSStartPlayRecord",
    "__OSStopPlayRecord", "__OSWriteStateFlags", "__OSReadStateFlags",
]


def pick(syms, name):
    if name in syms:
        return syms[name]
    for k, v in syms.items():
        if k.startswith(name + "_"):
            return v
    return None


def is_reloc_only(li, ri):
    lp = li.get("parts", [])
    rp = ri.get("parts", [])
    if not lp or not rp:
        return False
    if lp[0].get("opcode", {}).get("mnemonic") != rp[0].get("opcode", {}).get("mnemonic"):
        return False
    if "relocation" not in li or "relocation" not in ri:
        return False
    la = [p.get("arg", {}).get("opaque") for p in lp if "opaque" in p.get("arg", {})]
    ra = [p.get("arg", {}).get("opaque") for p in rp if "opaque" in p.get("arg", {})]
    return la == ra


total_ok = 0
for fn in FUNCS:
    subprocess.run([r"tools\objdiff-cli.exe", "diff", "-1", TARGET, "-2", BASE,
                    "-o", r"build\tmp_verify.json", fn], capture_output=True, text=True)
    d = json.load(open(r"build\tmp_verify.json"))
    L = pick({s["name"]: s for s in d.get("left", {}).get("symbols", [])}, fn)
    R = pick({s["name"]: s for s in d.get("right", {}).get("symbols", [])}, fn)
    if L is None or R is None:
        print(f"{fn:32} MISSING")
        continue
    l_insts = L.get("instructions", [])
    r_insts = R.get("instructions", [])
    bad = 0
    for i in range(max(len(l_insts), len(r_insts))):
        a = l_insts[i] if i < len(l_insts) else {}
        b = r_insts[i] if i < len(r_insts) else {}
        if not (a.get("diff_kind") or b.get("diff_kind")):
            continue
        if is_reloc_only(a.get("instruction", {}), b.get("instruction", {})):
            continue
        bad += 1
    lr = sum(1 for i in l_insts if i.get("instruction", {}).get("formatted"))
    rr = sum(1 for i in r_insts if i.get("instruction", {}).get("formatted"))
    status = "MATCH" if bad == 0 and lr == rr else f"DIFF {bad}"
    if status == "MATCH":
        total_ok += 1
    print(f"{fn:32} target={lr:4d} built={rr:4d}  {status}")

print(f"\n{total_ok}/{len(FUNCS)} functions byte-identical")
