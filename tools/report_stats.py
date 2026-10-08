import json

with open('build/SLSEXJ/report.json') as f:
    report = json.load(f)

m = report['measures']
print(f"Matched code: {m['matched_code']} / {m['total_code']} ({m['matched_code_percent']:.4f}%)")
print(f"Matched funcs: {m['matched_functions']} / {m['total_functions']} ({m['matched_functions_percent']:.4f}%)")
print(f"Complete units: {m['complete_units']} / {m['total_units']}")
