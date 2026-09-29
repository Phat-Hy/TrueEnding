.include "macros.inc"
.file "auto_dtor_8068BA80_text"

# 0x800068DC..0x800068E4 | size: 0x8
.section extab, "a"
.balign 4

# extab:0x0 | 0x800068DC | size: 0x8
.obj "@etb_800068DC", local
.hidden "@etb_800068DC"
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
.endobj "@etb_800068DC"

# 0x80007C9C..0x80007CA8 | size: 0xC
.section extabindex, "a"
.balign 4

# extabindex:0x0 | 0x80007C9C | size: 0xC
.obj "@eti_80007C9C", local
.hidden "@eti_80007C9C"
	.4byte dtor_8068BA80
	.4byte 0x00000040
	.4byte "@etb_800068DC"
.endobj "@eti_80007C9C"

# 0x8068BA80..0x8068BAC0 | size: 0x40
.text
.balign 4

# .text:0x0 | 0x8068BA80 | size: 0x40
.fn dtor_8068BA80, global
/* 8068BA80 006860E0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8068BA84 006860E4  7C 08 02 A6 */	mflr r0
/* 8068BA88 006860E8  2C 03 00 00 */	cmpwi r3, 0x0
/* 8068BA8C 006860EC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8068BA90 006860F0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8068BA94 006860F4  7C 7F 1B 78 */	mr r31, r3
/* 8068BA98 006860F8  41 82 00 10 */	beq .L_8068BAA8
/* 8068BA9C 006860FC  2C 04 00 00 */	cmpwi r4, 0x0
/* 8068BAA0 00686100  40 81 00 08 */	ble .L_8068BAA8
/* 8068BAA4 00686104  4B 9F 8B E1 */	bl dtor_80084684
.L_8068BAA8:
/* 8068BAA8 00686108  7F E3 FB 78 */	mr r3, r31
/* 8068BAAC 0068610C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8068BAB0 00686110  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8068BAB4 00686114  7C 08 03 A6 */	mtlr r0
/* 8068BAB8 00686118  38 21 00 10 */	addi r1, r1, 0x10
/* 8068BABC 0068611C  4E 80 00 20 */	blr
.endfn dtor_8068BA80
