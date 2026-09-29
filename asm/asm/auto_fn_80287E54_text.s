.include "macros.inc"
.file "auto_fn_80287E54_text"

# 0x80287E54..0x80287E7C | size: 0x28
.text
.balign 4

# .text:0x0 | 0x80287E54 | size: 0x28
.fn fn_80287E54, global
/* 80287E54 002824B4  3C 80 80 7D */	lis r4, lbl_807C8398@ha
/* 80287E58 002824B8  C0 42 B4 EC */	lfs f2, lbl_80883A8C@sda21(r0)
/* 80287E5C 002824BC  38 64 83 98 */	addi r3, r4, lbl_807C8398@l
/* 80287E60 002824C0  C0 22 B4 F0 */	lfs f1, lbl_80883A90@sda21(r0)
/* 80287E64 002824C4  C0 02 B4 5C */	lfs f0, lbl_808839FC@sda21(r0)
/* 80287E68 002824C8  D0 44 83 98 */	stfs f2, lbl_807C8398@l(r4)
/* 80287E6C 002824CC  D0 23 00 04 */	stfs f1, 0x4(r3)
/* 80287E70 002824D0  D0 23 00 08 */	stfs f1, 0x8(r3)
/* 80287E74 002824D4  D0 03 00 0C */	stfs f0, 0xc(r3)
/* 80287E78 002824D8  4E 80 00 20 */	blr
.endfn fn_80287E54

# 0x8072D330..0x8072D334 | size: 0x4
.section .ctors, "a"
.balign 4
	.4byte fn_80287E54
