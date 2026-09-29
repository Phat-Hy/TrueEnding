.include "macros.inc"
.file "auto_fn_805D41E0_text"

# 0x805D41E0..0x805D41F4 | size: 0x14
.text
.balign 4

# .text:0x0 | 0x805D41E0 | size: 0x14
.fn fn_805D41E0, global
/* 805D41E0 005CE840  3C 80 80 7D */	lis r4, lbl_807CA200@ha
/* 805D41E4 005CE844  3C 60 80 7D */	lis r3, lbl_807CA208@ha
/* 805D41E8 005CE848  38 84 A2 00 */	addi r4, r4, lbl_807CA200@l
/* 805D41EC 005CE84C  90 83 A2 08 */	stw r4, lbl_807CA208@l(r3)
/* 805D41F0 005CE850  4E 80 00 20 */	blr
.endfn fn_805D41E0

# 0x8072D3F0..0x8072D3F4 | size: 0x4
.section .ctors, "a"
.balign 4
	.4byte fn_805D41E0
