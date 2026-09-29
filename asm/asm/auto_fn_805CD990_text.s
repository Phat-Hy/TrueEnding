.include "macros.inc"
.file "auto_fn_805CD990_text"

# 0x805CD990..0x805CD9A4 | size: 0x14
.text
.balign 4

# .text:0x0 | 0x805CD990 | size: 0x14
.fn fn_805CD990, global
/* 805CD990 005C7FF0  3C 80 80 7D */	lis r4, lbl_807CA200@ha
/* 805CD994 005C7FF4  3C 60 80 7D */	lis r3, lbl_807CA1C8@ha
/* 805CD998 005C7FF8  38 84 A2 00 */	addi r4, r4, lbl_807CA200@l
/* 805CD99C 005C7FFC  90 83 A1 C8 */	stw r4, lbl_807CA1C8@l(r3)
/* 805CD9A0 005C8000  4E 80 00 20 */	blr
.endfn fn_805CD990

# 0x8072D3E8..0x8072D3EC | size: 0x4
.section .ctors, "a"
.balign 4
	.4byte fn_805CD990
