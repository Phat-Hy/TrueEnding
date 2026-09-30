#!/usr/bin/env python3
"""
Autonomous Decompilation Matching Runner for Project The Maybe(Not) Last Story
Connects to local Qwen2.5-Coder (http://localhost:8080/v1) and runs an autonomous
code-compile-diff-fix loop until target functions achieve 100.0% byte match.
"""
import os
import re
import sys
import json
import time
import subprocess
import urllib.request
import urllib.error

ENDPOINT = "http://localhost:8080/v1/chat/completions"
MODEL_ID = "G:\\Program\\Odysseus\\model\\hub/models--unsloth--Qwen2.5-Coder-7B-Instruct-GGUF/snapshots/0ecf11859560b2bf42e703207f9371186d02245f/Qwen2.5-Coder-7B-Instruct-Q4_K_M.gguf"

SYSTEM_PROMPT = """You are the Reverse Engineering & Native PC Porting Specialist for Project The Maybe(Not) Last Story.
You are matching Metrowerks CodeWarrior 4.3 build 145 PPC 750CL disassembly 100.0% byte-for-byte (-O4,p -inline auto).

RULES:
1. Header: Always use `#include "revolution/os.h"`. Never include `<ultra64.h>` (this is Nintendo Wii RVL-SDK, not N64).
2. Low memory pointers:
   * 0x800000DC = *(OSThreadQueue*)0x800000DC (__OSActiveThreadQueue)
   * 0x800000E4 = *(OSThread**)0x800000E4 (__OSCurrentThread)
   * 0x800000D8 = *(OSContext**)0x800000D8 (__OSFPUContext)
   * 0x800000D4 = *(OSContext**)0x800000D4 (__OSCurrentContext)
3. Variable declaration order controls non-volatile register assignment (r31 -> r14).
4. CodeWarrior compiler NEVER supports GCC `asm volatile ("...")` syntax! Always write clean C code. If inline assembly is strictly required, use CodeWarrior syntax `asm { ... }`.
5. Retain all existing functions in the file so they remain 100% matched.
6. Output ONLY valid C code inside a ```c ... ``` code block. No fluff, no preamble.
"""

LOG_FILE = "logs/autonomous_agent.log"
os.makedirs("logs", exist_ok=True)

def log_print(msg):
    timestamp = time.strftime("[%Y-%m-%d %H:%M:%S]")
    line = f"{timestamp} {msg}"
    print(msg)
    try:
        with open(LOG_FILE, "a", encoding="utf-8") as f:
            f.write(line + "\n")
    except Exception:
        pass

def query_llm(messages, max_tokens=2048, temperature=0.15):
    payload = {
        "model": MODEL_ID,
        "messages": messages,
        "temperature": temperature,
        "max_tokens": max_tokens,
        "stream": False
    }
    data = json.dumps(payload).encode("utf-8")
    req = urllib.request.Request(ENDPOINT, data=data, headers={"Content-Type": "application/json"})
    try:
        with urllib.request.urlopen(req, timeout=120) as resp:
            res = json.loads(resp.read().decode("utf-8"))
            return res["choices"][0]["message"]["content"]
    except Exception as e:
        print(f"[Error querying LLM]: {e}")
        return None

def extract_c_code(text):
    if not text:
        return None
    matches = re.findall(r"```(?:c|cpp)?\s*(.*?)\s*```", text, re.DOTALL)
    if matches:
        return matches[-1].strip()
    return text.strip()

def run_command(cmd):
    p = subprocess.run(cmd, shell=True, stdout=subprocess.PIPE, stderr=subprocess.PIPE, text=True)
    return p.returncode, p.stdout + p.stderr

def run_diff(func_name):
    code, out = run_command(f"python tools/diff_helper.py {func_name} -a")
    return out

def log_worklog(entry):
    log_path = "docs/ODYSSEUS_WORKLOG.md"
    try:
        with open(log_path, "a", encoding="utf-8") as f:
            f.write("\n" + entry.strip() + "\n")
    except Exception as e:
        print(f"Warning: could not write to {log_path}: {e}")

def ensure_module_configured(module_name):
    """Auto-provision module build target if missing so the agent never stalls on unknown targets."""
    c_file = f"src/{module_name}.c"
    obj_target = f"build\\SLSEXJ\\src\\{module_name}.o"
    
    # 1. Ensure C stub exists
    if not os.path.exists(c_file):
        with open(c_file, "w", encoding="utf-8") as f:
            f.write('#include "revolution/os.h"\n\n')
        log_print(f"[Auto-Provision] Created initial stub {c_file}")

    # 2. Check build.ninja
    needs_reconfigure = False
    if os.path.exists("build.ninja"):
        with open("build.ninja", "r", encoding="utf-8", errors="replace") as f:
            ninja_content = f.read()
        if obj_target not in ninja_content:
            needs_reconfigure = True
    else:
        needs_reconfigure = True

    if needs_reconfigure:
        log_print(f"[Auto-Provision] Module {module_name} not in build.ninja. Running configure.py...")
        run_command("python configure.py")
        run_command(f".\\tools\\w64devkit\\bin\\ninja.exe build/SLSEXJ/src/{module_name}.o")
        run_command(".\\tools\\objdiff-cli.exe report generate -o report.json")
        run_command("copy report.json build\\SLSEXJ\\report.json")
        log_print(f"[Auto-Provision] Successfully registered and initialized build target for {module_name}!")

def autonomous_match_function(module_name, func_name, max_attempts=8):
    ensure_module_configured(module_name)
    c_file = f"src/{module_name}.c"
    obj_file = f"build/SLSEXJ/src/{module_name}.o"
    log_print(f"\n=======================================================")
    log_print(f"  [Autonomous Agent] Targeting: {func_name} ({module_name})")
    log_print(f"=======================================================")

    # Get initial diff or disassembly
    initial_diff = run_diff(func_name)
    log_print(f"[Diff Helper Output]:\n{initial_diff[:400]}...")

    if "Total actual diff instructions: 0/" in initial_diff:
        log_print(f"[SUCCESS] {func_name} is ALREADY 100.0% MATCH!")
        return True

    current_c = ""
    if os.path.exists(c_file):
        with open(c_file, "r", encoding="utf-8") as f:
            current_c = f.read()

    messages = [
        {"role": "system", "content": SYSTEM_PROMPT},
        {"role": "user", "content": f"""We are matching function `{func_name}` in `{c_file}` for Wii USA SLSEXJ.
Current C file contents:
```c
{current_c}
```

Current Assembly Diff:
```text
{initial_diff}
```

Please update `{c_file}` to fix all register mismatches, stack layout differences, and achieve a 100.0% byte-for-byte binary match with CodeWarrior 4.3 build 145 (-O4,p -inline auto).
Output the COMPLETE updated contents of `{c_file}` inside a ```c ... ``` code block."""}
    ]

    for attempt in range(1, max_attempts + 1):
        temp = round(0.2 + (attempt - 1) * 0.08, 2)
        log_print(f"\n--- [Attempt {attempt}/{max_attempts}] Requesting solution from local Qwen2.5-Coder (temp={temp})... ---")
        reply = query_llm(messages, temperature=temp)
        if not reply:
            log_print("[Warning] No reply from local model. Retrying in 3s...")
            time.sleep(3)
            continue

        c_code = extract_c_code(reply)
        if not c_code or len(c_code) < 30:
            log_print("[Warning] Failed to parse C code from model response.")
            continue

        # Check if model output dropped existing matched functions
        final_code_to_write = c_code
        if current_c and func_name in c_code:
            # Check for existing functions defined in current_c
            existing_fn_matches = re.findall(r'(\b[a-zA-Z0-9_]+\s*\([^)]*\)\s*\{)', current_c)
            dropped = False
            for fn_sig in existing_fn_matches:
                fn_name = fn_sig.split('(')[0].split()[-1]
                if fn_name != func_name and fn_name not in c_code:
                    dropped = True
                    break
            if dropped:
                log_print("[Safety] Model response omitted existing functions; merging function update safely...")
                # If func_name is already in current_c, replace it, else append
                pattern = rf'([a-zA-Z0-9_]+\s+{re.escape(func_name)}\s*\([^)]*\)\s*\{{.*?\n\}})'
                if re.search(pattern, current_c, re.DOTALL):
                    # Replace only this function
                    new_func_match = re.search(rf'([a-zA-Z0-9_]+\s+{re.escape(func_name)}\s*\([^)]*\)\s*\{{.*?\n\}})', c_code, re.DOTALL)
                    if new_func_match:
                        final_code_to_write = re.sub(pattern, new_func_match.group(1), current_c, flags=re.DOTALL)
                    else:
                        final_code_to_write = current_c + "\n\n" + c_code
                else:
                    # Append new code
                    final_code_to_write = current_c.rstrip() + "\n\n" + c_code

        # Write to file
        with open(c_file, "w", encoding="utf-8") as f:
            f.write(final_code_to_write)
        log_print(f"[Disk] Wrote {len(final_code_to_write)} bytes to {c_file}")

        # Compile
        compile_cmd = f".\\tools\\w64devkit\\bin\\ninja.exe {obj_file}"
        code, compile_out = run_command(compile_cmd)
        if code != 0:
            log_print(f"[Compile Error]:\n{compile_out[:300]}...")
            messages.append({"role": "assistant", "content": f"```c\n{c_code}\n```"})
            messages.append({"role": "user", "content": f"The compilation failed with this error:\n```text\n{compile_out}\n```\nPlease fix the compilation error and return the full updated C file in ```c ... ```."})
            continue

        # Run diff
        diff_out = run_diff(func_name)
        log_print(f"[Diff]:\n{diff_out[:300]}...")

        if "Total actual diff instructions: 0/" in diff_out:
            log_print(f"\n🎉 [100.0% MATCH ACHIEVED] Function `{func_name}` matched completely with 0 diffs!")
            worklog_entry = f"### Session - {time.strftime('%Y-%m-%d %H:%M:%S')}\n- **Module**: `{module_name}`\n- **Function**: `{func_name}`\n- **Status**: 100.0% MATCH (0 diff bytes)\n- **Attempts**: {attempt}\n"
            log_worklog(worklog_entry)
            
            # Git commit
            run_command(f'git add {c_file} docs/ODYSSEUS_WORKLOG.md')
            run_command(f'git commit -m "decomp({module_name}): 100% match {func_name} (autonomous local agent)"')
            return True

        # Keep a clean sliding window (system prompt + latest state) to prevent context explosion
        messages = [
            {"role": "system", "content": SYSTEM_PROMPT},
            {"role": "user", "content": f"""We are matching function `{func_name}` in `{c_file}` for Wii USA SLSEXJ.
Current C file:
```c
{final_code_to_write}
```

Current Assembly Diff:
```text
{diff_out}
```

Analyze the instruction and register differences (left is target, right is built).
Adjust variable order, control flow, or expressions to match the target assembly and return the updated C file in ```c ... ```."""}
        ]

    log_print(f"\n[Notice] Function `{func_name}` did not reach 100% after {max_attempts} attempts. Moving to next task.")
    return False

if __name__ == "__main__":
    print("=================================================================")
    print("   The Last Story: Autonomous Decompilation Agent Runner         ")
    print("   Target Model: Local Qwen2.5-Coder-7B (http://localhost:8080)  ")
    print("=================================================================")
    
    # Check if local endpoint is responsive
    test_reply = query_llm([{"role": "user", "content": "ping"}], max_tokens=10)
    if not test_reply:
        print("ERROR: Cannot reach local model at http://localhost:8080/v1/chat/completions.")
        print("Please ensure the model is launched in Odysseus Cookbook before running.")
        sys.exit(1)
    print("SUCCESS: Connected to local Qwen2.5-Coder on RTX 4060 GPU!\n")

    QUEUE = [
        ("OSReset", "__OSDefaultResetCallback"),
        ("OSReset", "__OSDefaultPowerCallback"),
        ("OSReset", "__OSWriteStateFlags"),
        ("OSReset", "__OSReadStateFlags"),
        ("OSReset", "__OSInitSTM"),
        ("OSReset", "__OSHotReset"),
    ]

    # If args passed, run specific function, else run default queue
    if len(sys.argv) > 2:
        autonomous_match_function(sys.argv[1], sys.argv[2])
    elif len(sys.argv) == 2 and sys.argv[1] in ("--all", "--queue", "-q"):
        print(f"Starting autonomous queue execution ({len(QUEUE)} functions)...")
        for mod, fn in QUEUE:
            autonomous_match_function(mod, fn)
    else:
        print("Usage:")
        print("  1. Run specific function:")
        print("     python tools/autonomous_decomp_runner.py <ModuleName> <FunctionName>")
        print("     Example: python tools/autonomous_decomp_runner.py OSReset __OSDefaultResetCallback\n")
        print("  2. Run autonomous queue (unattended loop):")
        print("     python tools/autonomous_decomp_runner.py --queue\n")
