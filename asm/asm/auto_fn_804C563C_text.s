.include "macros.inc"
.file "auto_fn_804C563C_text"

# 0x804C563C..0x804C566C | size: 0x30
.text
.balign 4

# .text:0x0 | 0x804C563C | size: 0x30
.fn fn_804C563C, global
/* 804C563C 004BFC9C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 804C5640 004BFCA0  7C 08 02 A6 */	mflr r0
/* 804C5644 004BFCA4  3C 60 80 76 */	lis r3, lbl_80758D4C@ha
/* 804C5648 004BFCA8  38 63 8D 4C */	addi r3, r3, lbl_80758D4C@l
/* 804C564C 004BFCAC  90 01 00 14 */	stw r0, 0x14(r1)
/* 804C5650 004BFCB0  38 63 00 CA */	addi r3, r3, 0xca
/* 804C5654 004BFCB4  4B C1 70 61 */	bl fn_800DC6B4
/* 804C5658 004BFCB8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 804C565C 004BFCBC  90 6D 9F 10 */	stw r3, lbl_8087F5D0@sda21(r0)
/* 804C5660 004BFCC0  7C 08 03 A6 */	mtlr r0
/* 804C5664 004BFCC4  38 21 00 10 */	addi r1, r1, 0x10
/* 804C5668 004BFCC8  4E 80 00 20 */	blr
.endfn fn_804C563C

# 0x8072D394..0x8072D398 | size: 0x4
.section .ctors, "a"
.balign 4
	.4byte fn_804C563C
