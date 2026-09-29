.include "macros.inc"
.file "auto_fn_805D7CC0_text"

# 0x805D7CC0..0x805D7CD4 | size: 0x14
.text
.balign 4

# .text:0x0 | 0x805D7CC0 | size: 0x14
.fn fn_805D7CC0, global
/* 805D7CC0 005D2320  3C 80 80 7D */	lis r4, lbl_807CA200@ha
/* 805D7CC4 005D2324  3C 60 80 7D */	lis r3, lbl_807CA218@ha
/* 805D7CC8 005D2328  38 84 A2 00 */	addi r4, r4, lbl_807CA200@l
/* 805D7CCC 005D232C  90 83 A2 18 */	stw r4, lbl_807CA218@l(r3)
/* 805D7CD0 005D2330  4E 80 00 20 */	blr
.endfn fn_805D7CC0

# 0x8072D3F8..0x8072D3FC | size: 0x4
.section .ctors, "a"
.balign 4
	.4byte fn_805D7CC0
