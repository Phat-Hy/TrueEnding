.include "macros.inc"
.file "auto_fn_804B4C20_text"

# 0x804B4C20..0x804B4C50 | size: 0x30
.text
.balign 4

# .text:0x0 | 0x804B4C20 | size: 0x30
.fn fn_804B4C20, global
/* 804B4C20 004AF280  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 804B4C24 004AF284  7C 08 02 A6 */	mflr r0
/* 804B4C28 004AF288  3C 60 80 75 */	lis r3, lbl_80757B7C@ha
/* 804B4C2C 004AF28C  38 63 7B 7C */	addi r3, r3, lbl_80757B7C@l
/* 804B4C30 004AF290  90 01 00 14 */	stw r0, 0x14(r1)
/* 804B4C34 004AF294  38 63 05 86 */	addi r3, r3, 0x586
/* 804B4C38 004AF298  4B C2 7A 7D */	bl fn_800DC6B4
/* 804B4C3C 004AF29C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 804B4C40 004AF2A0  90 6D 9E D8 */	stw r3, lbl_8087F598@sda21(r0)
/* 804B4C44 004AF2A4  7C 08 03 A6 */	mtlr r0
/* 804B4C48 004AF2A8  38 21 00 10 */	addi r1, r1, 0x10
/* 804B4C4C 004AF2AC  4E 80 00 20 */	blr
.endfn fn_804B4C20

# 0x8072D38C..0x8072D390 | size: 0x4
.section .ctors, "a"
.balign 4
	.4byte fn_804B4C20
