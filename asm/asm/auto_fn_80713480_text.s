.include "macros.inc"
.file "auto_fn_80713480_text"

# 0x80713480..0x8071348C | size: 0xC
.text
.balign 4

# .text:0x0 | 0x80713480 | size: 0xC
.fn fn_80713480, global
/* 80713480 0070DAE0  38 0D AD F0 */	li r0, lbl_808804B0@sda21
/* 80713484 0070DAE4  90 0D AE 18 */	stw r0, lbl_808804D8@sda21(r0)
/* 80713488 0070DAE8  4E 80 00 20 */	blr
.endfn fn_80713480

# 0x8072D40C..0x8072D410 | size: 0x4
.section .ctors, "a"
.balign 4
	.4byte fn_80713480
