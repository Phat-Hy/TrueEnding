.include "macros.inc"
.file "auto_fn_804C8748_text"

# 0x804C8748..0x804C8778 | size: 0x30
.text
.balign 4

# .text:0x0 | 0x804C8748 | size: 0x30
.fn fn_804C8748, global
/* 804C8748 004C2DA8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 804C874C 004C2DAC  7C 08 02 A6 */	mflr r0
/* 804C8750 004C2DB0  3C 60 80 76 */	lis r3, lbl_80758E44@ha
/* 804C8754 004C2DB4  38 63 8E 44 */	addi r3, r3, lbl_80758E44@l
/* 804C8758 004C2DB8  90 01 00 14 */	stw r0, 0x14(r1)
/* 804C875C 004C2DBC  38 63 04 41 */	addi r3, r3, 0x441
/* 804C8760 004C2DC0  4B C1 3F 55 */	bl fn_800DC6B4
/* 804C8764 004C2DC4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 804C8768 004C2DC8  90 6D 9F 20 */	stw r3, lbl_8087F5E0@sda21(r0)
/* 804C876C 004C2DCC  7C 08 03 A6 */	mtlr r0
/* 804C8770 004C2DD0  38 21 00 10 */	addi r1, r1, 0x10
/* 804C8774 004C2DD4  4E 80 00 20 */	blr
.endfn fn_804C8748

# 0x8072D398..0x8072D39C | size: 0x4
.section .ctors, "a"
.balign 4
	.4byte fn_804C8748
