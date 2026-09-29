.include "macros.inc"
.file "auto_fn_80721880_text"

# 0x80721880..0x8072188C | size: 0xC
.text
.balign 4

# .text:0x0 | 0x80721880 | size: 0xC
.fn fn_80721880, global
/* 80721880 0071BEE0  38 0D AD F0 */	li r0, lbl_808804B0@sda21
/* 80721884 0071BEE4  90 0D AE 58 */	stw r0, lbl_80880518@sda21(r0)
/* 80721888 0071BEE8  4E 80 00 20 */	blr
.endfn fn_80721880

# 0x8072D41C..0x8072D420 | size: 0x4
.section .ctors, "a"
.balign 4
	.4byte fn_80721880
