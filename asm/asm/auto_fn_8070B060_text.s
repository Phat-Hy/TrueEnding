.include "macros.inc"
.file "auto_fn_8070B060_text"

# 0x8070B060..0x8070B06C | size: 0xC
.text
.balign 4

# .text:0x0 | 0x8070B060 | size: 0xC
.fn fn_8070B060, global
/* 8070B060 007056C0  38 00 00 00 */	li r0, 0x0
/* 8070B064 007056C4  90 0D AD F0 */	stw r0, lbl_808804B0@sda21(r0)
/* 8070B068 007056C8  4E 80 00 20 */	blr
.endfn fn_8070B060

# 0x8072D408..0x8072D40C | size: 0x4
.section .ctors, "a"
.balign 4
	.4byte fn_8070B060
