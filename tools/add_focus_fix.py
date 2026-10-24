with open("recomp/host_runner.c", "r", encoding="utf-8") as f:
    text = f.read()

target = """    if (!gfx_backend_init(s_hwnd, &s_gfx_config)) {
        printf("[Runner] Warning: Failed to initialize graphics backend, window output disabled.\\n");
        return false;
    }"""

replacement = """    if (!gfx_backend_init(s_hwnd, &s_gfx_config)) {
        printf("[Runner] Warning: Failed to initialize graphics backend, window output disabled.\\n");
        return false;
    }

    ShowWindow(s_hwnd, SW_SHOWNORMAL);
    UpdateWindow(s_hwnd);
    SetForegroundWindow(s_hwnd);
    SetFocus(s_hwnd);"""

if target in text:
    text = text.replace(target, replacement)
    with open("recomp/host_runner.c", "w", encoding="utf-8") as f:
        f.write(text)
    print("Added ShowWindow, SetForegroundWindow, and SetFocus to host_runner.c!")
else:
    print("Target not found in host_runner.c!")
