.include "macros.inc"
.file "auto_dtor_80691E68_text"

# 0x80007684..0x8000768C | size: 0x8
.section extab, "a"
.balign 4

# extab:0x0 | 0x80007684 | size: 0x8
.obj "@etb_80007684", local
.hidden "@etb_80007684"
/*
 * Flag values:
 * Has Elf Vector: No
 * Large Frame: Yes
 * Has Frame Pointer: No
 * Saved CR: No
 * Saved GPR range: r30-r31
 */
	.4byte 0x10080000
	.4byte 0x00000000
.endobj "@etb_80007684"

# 0x80007F9C..0x80007FA8 | size: 0xC
.section extabindex, "a"
.balign 4

# extabindex:0x0 | 0x80007F9C | size: 0xC
.obj "@eti_80007F9C", local
.hidden "@eti_80007F9C"
	.4byte dtor_80691E68
	.4byte 0x0000007C
	.4byte "@etb_80007684"
.endobj "@eti_80007F9C"

# 0x80691E68..0x80691EE4 | size: 0x7C
.text
.balign 4

# .text:0x0 | 0x80691E68 | size: 0x7C
.fn dtor_80691E68, global
/* 80691E68 0068C4C8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80691E6C 0068C4CC  7C 08 02 A6 */	mflr r0
/* 80691E70 0068C4D0  2C 03 00 00 */	cmpwi r3, 0x0
/* 80691E74 0068C4D4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80691E78 0068C4D8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80691E7C 0068C4DC  7C 9F 23 78 */	mr r31, r4
/* 80691E80 0068C4E0  93 C1 00 08 */	stw r30, 0x8(r1)
/* 80691E84 0068C4E4  7C 7E 1B 78 */	mr r30, r3
/* 80691E88 0068C4E8  41 82 00 40 */	beq .L_80691EC8
/* 80691E8C 0068C4EC  41 82 00 2C */	beq .L_80691EB8
/* 80691E90 0068C4F0  41 82 00 28 */	beq .L_80691EB8
/* 80691E94 0068C4F4  41 82 00 24 */	beq .L_80691EB8
/* 80691E98 0068C4F8  80 83 00 00 */	lwz r4, 0x0(r3)
/* 80691E9C 0068C4FC  2C 04 00 00 */	cmpwi r4, 0x0
/* 80691EA0 0068C500  41 82 00 18 */	beq .L_80691EB8
/* 80691EA4 0068C504  80 03 00 04 */	lwz r0, 0x4(r3)
/* 80691EA8 0068C508  7C 00 00 50 */	subf r0, r0, r0
/* 80691EAC 0068C50C  90 03 00 04 */	stw r0, 0x4(r3)
/* 80691EB0 0068C510  7C 83 23 78 */	mr r3, r4
/* 80691EB4 0068C514  4B 9F 27 D1 */	bl dtor_80084684
.L_80691EB8:
/* 80691EB8 0068C518  2C 1F 00 00 */	cmpwi r31, 0x0
/* 80691EBC 0068C51C  40 81 00 0C */	ble .L_80691EC8
/* 80691EC0 0068C520  7F C3 F3 78 */	mr r3, r30
/* 80691EC4 0068C524  4B 9F 27 C1 */	bl dtor_80084684
.L_80691EC8:
/* 80691EC8 0068C528  7F C3 F3 78 */	mr r3, r30
/* 80691ECC 0068C52C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80691ED0 0068C530  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 80691ED4 0068C534  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80691ED8 0068C538  7C 08 03 A6 */	mtlr r0
/* 80691EDC 0068C53C  38 21 00 10 */	addi r1, r1, 0x10
/* 80691EE0 0068C540  4E 80 00 20 */	blr
.endfn dtor_80691E68
