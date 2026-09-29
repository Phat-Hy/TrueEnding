.include "macros.inc"
.file "auto_fn_80041A50_text"

# 0x80041A50..0x80041A80 | size: 0x30
.text
.balign 4

# .text:0x0 | 0x80041A50 | size: 0x30
.fn fn_80041A50, global
/* 80041A50 0003C0B0  3C 80 80 7C */	lis r4, lbl_807C6B90@ha
/* 80041A54 0003C0B4  38 A0 00 01 */	li r5, 0x1
/* 80041A58 0003C0B8  38 64 6B 90 */	addi r3, r4, lbl_807C6B90@l
/* 80041A5C 0003C0BC  C0 02 82 28 */	lfs f0, lbl_808807C8@sda21(r0)
/* 80041A60 0003C0C0  38 00 00 00 */	li r0, 0x0
/* 80041A64 0003C0C4  90 A4 6B 90 */	stw r5, lbl_807C6B90@l(r4)
/* 80041A68 0003C0C8  D0 03 00 04 */	stfs f0, 0x4(r3)
/* 80041A6C 0003C0CC  D0 03 00 08 */	stfs f0, 0x8(r3)
/* 80041A70 0003C0D0  90 03 00 0C */	stw r0, 0xc(r3)
/* 80041A74 0003C0D4  D0 03 00 10 */	stfs f0, 0x10(r3)
/* 80041A78 0003C0D8  90 03 00 14 */	stw r0, 0x14(r3)
/* 80041A7C 0003C0DC  4E 80 00 20 */	blr
.endfn fn_80041A50

# 0x8072D2AC..0x8072D2B0 | size: 0x4
.section .ctors, "a"
.balign 4
	.4byte fn_80041A50
