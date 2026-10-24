with open("recomp/replacements.c", "r", encoding="utf-8") as f:
    text = f.read()

old_code = """                bool pressed = sim_press ||
                               ((s_ctrl_state.cl_trig & (WPAD_CL_BUTTON_A | WPAD_CL_BUTTON_PLUS | WPAD_CL_BUTTON_B | WPAD_CL_BUTTON_X | WPAD_CL_BUTTON_Y)) != 0) ||
                               ((s_ctrl_state.core_trig & (WPAD_BUTTON_A | WPAD_BUTTON_PLUS | WPAD_BUTTON_2 | WPAD_BUTTON_1 | WPAD_BUTTON_B)) != 0);"""

new_code = """                bool pressed = sim_press ||
                               ((s_ctrl_state.cl_trig & (WPAD_CL_BUTTON_A | WPAD_CL_BUTTON_PLUS | WPAD_CL_BUTTON_B | WPAD_CL_BUTTON_X | WPAD_CL_BUTTON_Y)) != 0) ||
                               ((s_ctrl_state.core_trig & (WPAD_BUTTON_A | WPAD_BUTTON_PLUS | WPAD_BUTTON_2 | WPAD_BUTTON_1 | WPAD_BUTTON_B)) != 0) ||
                               ((s_ctrl_state.cl_hold & (WPAD_CL_BUTTON_A | WPAD_CL_BUTTON_PLUS)) != 0) ||
                               ((s_ctrl_state.core_hold & (WPAD_BUTTON_A | WPAD_BUTTON_PLUS | WPAD_BUTTON_2)) != 0);"""

if old_code in text:
    text = text.replace(old_code, new_code)
    with open("recomp/replacements.c", "w", encoding="utf-8") as f:
        f.write(text)
    print("Updated button trigger/hold check in recomp/replacements.c!")
else:
    print("Target not found!")
