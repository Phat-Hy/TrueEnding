import json

with open(r'C:\Users\hypha\.gemini\antigravity-cli\brain\25e9823a-593f-40e3-996c-5e81235e262f\.system_generated\logs\transcript.jsonl', 'r', encoding='utf-8') as f:
    inputs = []
    for line in f:
        d = json.loads(line)
        if d.get('type') == 'USER_INPUT':
            inputs.append((d.get('step_index'), d.get('content', '')))

for idx, content in inputs[-25:]:
    clean_content = content.encode('ascii', errors='replace').decode('ascii')
    print(f"[{idx}] {clean_content}\n")
