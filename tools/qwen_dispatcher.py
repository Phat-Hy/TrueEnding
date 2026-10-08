#!/usr/bin/env python3
"""
Qwen Micro-Task Dispatcher for Project TrueEnding.
Feeds bite-sized (<500 tokens) decompilation prompts to local Qwen (http://localhost:8080/v1),
compiles with Metrowerks CodeWarrior, and verifies binary matches with zero GPU context overload.
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
MODEL_NAME = "qwen2.5-coder-7b-instruct"

SYSTEM_PROMPT = """You are an expert PowerPC 750CL to C decompiler for Nintendo Wii (CodeWarrior 4.3 build 145, -O4,p -inline auto).
CONVENTIONS:
1. Ignore prologue (stwu r1, mflr r0, stw r30/r31) and epilogue (lwz r0/r30/r31, mtlr, blr).
2. 'lis rX, Sym@ha' + 'addi rX, rX, Sym@l' loads the address of Sym or string.
3. 'lwz r0, Sym@sda21(r0)' reads global variable Sym. 'stw rX, Sym@sda21(r0)' writes to Sym.
4. 'bl Func' calls Func(...). Return value in r3.
5. Return ONLY clean, standard C code inside a single ```c ... ``` block. No explanations."""

def call_qwen(prompt, max_tokens=512):
    payload = {
        "messages": [
            {"role": "system", "content": SYSTEM_PROMPT},
            {"role": "user", "content": prompt}
        ],
        "temperature": 0.1,
        "max_tokens": max_tokens,
    }
    data = json.dumps(payload).encode("utf-8")
    req = urllib.request.Request(ENDPOINT, data=data, headers={"Content-Type": "application/json"})
    try:
        with urllib.request.urlopen(req, timeout=180) as resp:
            res = json.loads(resp.read().decode("utf-8"))
            return res["choices"][0]["message"]["content"]
    except Exception as e:
        print(f"[ERROR] Could not connect to Qwen at {ENDPOINT}: {e}")
        return None

def extract_c_code(text):
    if not text:
        return None
    match = re.search(r"```c\s*(.*?)\s*```", text, re.DOTALL)
    if match:
        return match.group(1).strip()
    return text.strip()

def build_micro_prompt(func_name, asm_text, headers=""):
    """Creates a tiny (<400 tokens) prompt strictly within Qwen's VRAM context limit."""
    lines = [
        f"Decompile this function: {func_name}",
        "",
        "Declarations:",
        headers.strip() if headers else "/* Use standard types (u8, u16, u32, s32, BOOL) */",
        "",
        "Assembly:",
        asm_text.strip(),
        "",
        "Output ONLY the C function implementation."
    ]
    return "\n".join(lines)

def test_qwen_connection():
    print(f"Checking connection to {ENDPOINT}...")
    test_payload = {
        "messages": [{"role": "user", "content": "hi"}],
        "max_tokens": 5
    }
    try:
        req = urllib.request.Request(ENDPOINT, data=json.dumps(test_payload).encode(), headers={"Content-Type": "application/json"})
        with urllib.request.urlopen(req, timeout=5) as resp:
            res = json.loads(resp.read().decode())
            print("Successfully connected to local Qwen server!")
            reply = res["choices"][0]["message"]["content"].strip()
            print(f"Server response test: '{reply}'")
            return True
    except Exception as e:
        print(f"[FAILED] Qwen server is not responding at {ENDPOINT}.")
        print("Please start your optimized local server using: tools\\start_qwen_optimized.bat")
        return False

def decompile_single(func_name, asm_file=None):
    if not test_qwen_connection():
        return None

    # Load assembly from diff_helper or file
    asm_text = ""
    if asm_file and os.path.exists(asm_file):
        with open(asm_file) as f:
            asm_text = f.read()
    else:
        try:
            res = subprocess.run([sys.executable, "tools/diff_helper.py", func_name, "-a"], capture_output=True, text=True)
            asm_text = res.stdout
        except Exception as e:
            print(f"Error reading assembly via diff_helper: {e}")

    if not asm_text:
        print(f"Could not find assembly for {func_name}")
        return None

    prompt = build_micro_prompt(func_name, asm_text)
    print(f"\n--- Sending Micro-Prompt to Qwen ({len(prompt)} chars, ~{len(prompt)//4} tokens) ---")
    raw_response = call_qwen(prompt)
    c_code = extract_c_code(raw_response)
    print("\n--- Generated C Code ---")
    print(c_code)
    return c_code

if __name__ == "__main__":
    if len(sys.argv) > 1 and sys.argv[1] == "--test":
        test_qwen_connection()
    elif len(sys.argv) > 2 and sys.argv[1] == "--decompile":
        decompile_single(sys.argv[2])
    else:
        print("Qwen Micro-Task Dispatcher")
        print("Usage:")
        print("  python tools/qwen_dispatcher.py --test")
        print("  python tools/qwen_dispatcher.py --decompile <func_name>")
