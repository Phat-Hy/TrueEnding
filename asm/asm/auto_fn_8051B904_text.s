.include "macros.inc"
.file "auto_fn_8051B904_text"

# 0x8051B904..0x8051B924 | size: 0x20
.text
.balign 4

# .text:0x0 | 0x8051B904 | size: 0x20
.fn fn_8051B904, global
/* 8051B904 00515F64  3C 80 80 7D */	lis r4, lbl_807C90F0@ha
/* 8051B908 00515F68  C0 22 F3 18 */	lfs f1, lbl_808878B8@sda21(r0)
/* 8051B90C 00515F6C  38 64 90 F0 */	addi r3, r4, lbl_807C90F0@l
/* 8051B910 00515F70  C0 02 F3 40 */	lfs f0, lbl_808878E0@sda21(r0)
/* 8051B914 00515F74  D0 24 90 F0 */	stfs f1, lbl_807C90F0@l(r4)
/* 8051B918 00515F78  D0 03 00 04 */	stfs f0, 0x4(r3)
/* 8051B91C 00515F7C  D0 23 00 08 */	stfs f1, 0x8(r3)
/* 8051B920 00515F80  4E 80 00 20 */	blr
.endfn fn_8051B904

# 0x8072D3B0..0x8072D3B4 | size: 0x4
.section .ctors, "a"
.balign 4
	.4byte fn_8051B904
