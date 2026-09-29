.include "macros.inc"
.file "auto_fn_802E20FC_text"

# 0x802E20FC..0x802E211C | size: 0x20
.text
.balign 4

# .text:0x0 | 0x802E20FC | size: 0x20
.fn fn_802E20FC, global
/* 802E20FC 002DC75C  3C 80 80 7D */	lis r4, lbl_807C8410@ha
/* 802E2100 002DC760  C0 22 C0 DC */	lfs f1, lbl_8088467C@sda21(r0)
/* 802E2104 002DC764  38 64 84 10 */	addi r3, r4, lbl_807C8410@l
/* 802E2108 002DC768  C0 02 C1 40 */	lfs f0, lbl_808846E0@sda21(r0)
/* 802E210C 002DC76C  D0 24 84 10 */	stfs f1, lbl_807C8410@l(r4)
/* 802E2110 002DC770  D0 03 00 04 */	stfs f0, 0x4(r3)
/* 802E2114 002DC774  D0 23 00 08 */	stfs f1, 0x8(r3)
/* 802E2118 002DC778  4E 80 00 20 */	blr
.endfn fn_802E20FC

# 0x8072D348..0x8072D34C | size: 0x4
.section .ctors, "a"
.balign 4
	.4byte fn_802E20FC
