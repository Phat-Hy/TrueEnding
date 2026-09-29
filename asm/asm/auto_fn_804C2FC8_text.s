.include "macros.inc"
.file "auto_fn_804C2FC8_text"

# 0x804C2FC8..0x804C2FF8 | size: 0x30
.text
.balign 4

# .text:0x0 | 0x804C2FC8 | size: 0x30
.fn fn_804C2FC8, global
/* 804C2FC8 004BD628  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 804C2FCC 004BD62C  7C 08 02 A6 */	mflr r0
/* 804C2FD0 004BD630  3C 60 80 76 */	lis r3, lbl_807588DC@ha
/* 804C2FD4 004BD634  38 63 88 DC */	addi r3, r3, lbl_807588DC@l
/* 804C2FD8 004BD638  90 01 00 14 */	stw r0, 0x14(r1)
/* 804C2FDC 004BD63C  38 63 04 44 */	addi r3, r3, 0x444
/* 804C2FE0 004BD640  4B C1 96 D5 */	bl fn_800DC6B4
/* 804C2FE4 004BD644  80 01 00 14 */	lwz r0, 0x14(r1)
/* 804C2FE8 004BD648  90 6D 9F 00 */	stw r3, lbl_8087F5C0@sda21(r0)
/* 804C2FEC 004BD64C  7C 08 03 A6 */	mtlr r0
/* 804C2FF0 004BD650  38 21 00 10 */	addi r1, r1, 0x10
/* 804C2FF4 004BD654  4E 80 00 20 */	blr
.endfn fn_804C2FC8

# 0x8072D390..0x8072D394 | size: 0x4
.section .ctors, "a"
.balign 4
	.4byte fn_804C2FC8
