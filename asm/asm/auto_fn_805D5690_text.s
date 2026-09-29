.include "macros.inc"
.file "auto_fn_805D5690_text"

# 0x805D5690..0x805D56A4 | size: 0x14
.text
.balign 4

# .text:0x0 | 0x805D5690 | size: 0x14
.fn fn_805D5690, global
/* 805D5690 005CFCF0  3C 80 80 7D */	lis r4, lbl_807CA200@ha
/* 805D5694 005CFCF4  3C 60 80 7D */	lis r3, lbl_807CA210@ha
/* 805D5698 005CFCF8  38 84 A2 00 */	addi r4, r4, lbl_807CA200@l
/* 805D569C 005CFCFC  90 83 A2 10 */	stw r4, lbl_807CA210@l(r3)
/* 805D56A0 005CFD00  4E 80 00 20 */	blr
.endfn fn_805D5690

# 0x8072D3F4..0x8072D3F8 | size: 0x4
.section .ctors, "a"
.balign 4
	.4byte fn_805D5690
