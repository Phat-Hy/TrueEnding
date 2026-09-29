.include "macros.inc"
.file "auto_dtor_80691EE4_text"

# 0x8000768C..0x80007694 | size: 0x8
.section extab, "a"
.balign 4

# extab:0x0 | 0x8000768C | size: 0x8
.obj "@etb_8000768C", local
.hidden "@etb_8000768C"
/*
 * Flag values:
 * Has Elf Vector: No
 * Large Frame: Yes
 * Has Frame Pointer: No
 * Saved CR: No
 * Saved GPR range: r31
 */
	.4byte 0x08080000
	.4byte 0x00000000
.endobj "@etb_8000768C"

# 0x80007FA8..0x80007FB4 | size: 0xC
.section extabindex, "a"
.balign 4

# extabindex:0x0 | 0x80007FA8 | size: 0xC
.obj "@eti_80007FA8", local
.hidden "@eti_80007FA8"
	.4byte dtor_80691EE4
	.4byte 0x00000040
	.4byte "@etb_8000768C"
.endobj "@eti_80007FA8"

# 0x80691EE4..0x80691F24 | size: 0x40
.text
.balign 4

# .text:0x0 | 0x80691EE4 | size: 0x40
.fn dtor_80691EE4, global
/* 80691EE4 0068C544  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80691EE8 0068C548  7C 08 02 A6 */	mflr r0
/* 80691EEC 0068C54C  2C 03 00 00 */	cmpwi r3, 0x0
/* 80691EF0 0068C550  90 01 00 14 */	stw r0, 0x14(r1)
/* 80691EF4 0068C554  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80691EF8 0068C558  7C 7F 1B 78 */	mr r31, r3
/* 80691EFC 0068C55C  41 82 00 10 */	beq .L_80691F0C
/* 80691F00 0068C560  2C 04 00 00 */	cmpwi r4, 0x0
/* 80691F04 0068C564  40 81 00 08 */	ble .L_80691F0C
/* 80691F08 0068C568  4B 9F 27 7D */	bl dtor_80084684
.L_80691F0C:
/* 80691F0C 0068C56C  7F E3 FB 78 */	mr r3, r31
/* 80691F10 0068C570  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80691F14 0068C574  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80691F18 0068C578  7C 08 03 A6 */	mtlr r0
/* 80691F1C 0068C57C  38 21 00 10 */	addi r1, r1, 0x10
/* 80691F20 0068C580  4E 80 00 20 */	blr
.endfn dtor_80691EE4
