.include "macros.inc"
.file "auto_fn_80530FB4_text"

# 0x80530FB4..0x80531018 | size: 0x64
.text
.balign 4

# .text:0x0 | 0x80530FB4 | size: 0x64
.fn fn_80530FB4, global
/* 80530FB4 0052B614  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80530FB8 0052B618  7C 08 02 A6 */	mflr r0
/* 80530FBC 0052B61C  3C 80 80 53 */	lis r4, fn_80531018@ha
/* 80530FC0 0052B620  90 01 00 14 */	stw r0, 0x14(r1)
/* 80530FC4 0052B624  38 84 10 18 */	addi r4, r4, fn_80531018@l
/* 80530FC8 0052B628  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80530FCC 0052B62C  3B E0 00 00 */	li r31, 0x0
/* 80530FD0 0052B630  93 C1 00 08 */	stw r30, 0x8(r1)
/* 80530FD4 0052B634  3F C0 80 7D */	lis r30, lbl_807C9120@ha
/* 80530FD8 0052B638  3B DE 91 20 */	addi r30, r30, lbl_807C9120@l
/* 80530FDC 0052B63C  38 7E 00 0C */	addi r3, r30, 0xc
/* 80530FE0 0052B640  93 FE 00 0C */	stw r31, 0xc(r30)
/* 80530FE4 0052B644  38 BE 00 00 */	addi r5, r30, 0x0
/* 80530FE8 0052B648  93 E3 00 04 */	stw r31, 0x4(r3)
/* 80530FEC 0052B64C  93 E3 00 08 */	stw r31, 0x8(r3)
/* 80530FF0 0052B650  48 16 44 31 */	bl __register_global_object
/* 80530FF4 0052B654  38 7E 00 18 */	addi r3, r30, 0x18
/* 80530FF8 0052B658  93 FE 00 18 */	stw r31, 0x18(r30)
/* 80530FFC 0052B65C  93 E3 00 04 */	stw r31, 0x4(r3)
/* 80531000 0052B660  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80531004 0052B664  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 80531008 0052B668  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8053100C 0052B66C  7C 08 03 A6 */	mtlr r0
/* 80531010 0052B670  38 21 00 10 */	addi r1, r1, 0x10
/* 80531014 0052B674  4E 80 00 20 */	blr
.endfn fn_80530FB4

# 0x8072D3BC..0x8072D3C0 | size: 0x4
.section .ctors, "a"
.balign 4
	.4byte fn_80530FB4
