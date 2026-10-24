#!/usr/bin/env python3
"""
Live Progress Monitor for Autonomous Decompilation Agent
Project The Maybe(Not) Last Story
"""
import os
import sys
import time
import subprocess

LOG_FILE = "logs/autonomous_agent.log"
WORKLOG_FILE = "docs/ODYSSEUS_WORKLOG.md"

def clear_screen():
    os.system("cls" if os.name == "nt" else "clear")

def get_git_recent_commits(n=3):
    try:
        p = subprocess.run("git log -n 3 --oneline", shell=True, stdout=subprocess.PIPE, text=True)
        return p.stdout.strip()
    except Exception:
        return "N/A"

def tail_file(filepath, lines=15):
    if not os.path.exists(filepath):
        return ["Waiting for agent to start..."]
    try:
        with open(filepath, "r", encoding="utf-8", errors="replace") as f:
            all_lines = f.readlines()
            return [l.rstrip() for l in all_lines[-lines:]]
    except Exception as e:
        return [f"Error reading {filepath}: {e}"]

def main():
    print("Initializing Autonomous Agent Monitor...")
    while True:
        clear_screen()
        recent_log = tail_file(LOG_FILE, 18)
        commits = get_git_recent_commits(3)

        print("================================================================================")
        print("   THE LAST STORY: AUTONOMOUS AGENT LIVE MONITOR (RTX 4060 GPU)                ")
        print(f"   Time: {time.strftime('%Y-%m-%d %H:%M:%S')} | Target: Qwen2.5-Coder-7B      ")
        print("================================================================================")
        print("\n[Recent Automated Git Commits]:")
        for line in commits.split("\n"):
            print(f"  * {line}")

        print("\n--------------------------------------------------------------------------------")
        print(f" [Live Log Stream: {LOG_FILE}] (Press Ctrl+C to exit monitor)")
        print("--------------------------------------------------------------------------------")
        for line in recent_log:
            if "100.0% MATCH" in line or "MATCH ACHIEVED" in line:
                print(f"  \033[92m{line}\033[0m")
            elif "Compile Error" in line or "Warning" in line:
                print(f"  \033[93m{line}\033[0m")
            elif "Targeting:" in line:
                print(f"  \033[96m{line}\033[0m")
            else:
                print(f"  {line}")

        print("================================================================================")
        time.sleep(2)

if __name__ == "__main__":
    try:
        main()
    except KeyboardInterrupt:
        print("\nMonitor stopped.")
