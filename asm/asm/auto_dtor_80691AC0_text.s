.include "macros.inc"
.file "auto_dtor_80691AC0_text"

# 0x80007664..0x8000766C | size: 0x8
.section extab, "a"
.balign 4

# extab:0x0 | 0x80007664 | size: 0x8
.obj "@etb_80007664", local
.hidden "@etb_80007664"
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
.endobj "@etb_80007664"

# 0x80007F6C..0x80007F78 | size: 0xC
.section extabindex, "a"
.balign 4

# extabindex:0x0 | 0x80007F6C | size: 0xC
.obj "@eti_80007F6C", local
.hidden "@eti_80007F6C"
	.4byte dtor_80691AC0
	.4byte 0x00000084
	.4byte "@etb_80007664"
.endobj "@eti_80007F6C"

# 0x80691AC0..0x80691B44 | size: 0x84
.text
.balign 4

# .text:0x0 | 0x80691AC0 | size: 0x84
.fn dtor_80691AC0, global
/* 80691AC0 0068C120  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80691AC4 0068C124  7C 08 02 A6 */	mflr r0
/* 80691AC8 0068C128  2C 03 00 00 */	cmpwi r3, 0x0
/* 80691ACC 0068C12C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80691AD0 0068C130  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80691AD4 0068C134  7C 9F 23 78 */	mr r31, r4
/* 80691AD8 0068C138  93 C1 00 08 */	stw r30, 0x8(r1)
/* 80691ADC 0068C13C  7C 7E 1B 78 */	mr r30, r3
/* 80691AE0 0068C140  41 82 00 48 */	beq .L_80691B28
/* 80691AE4 0068C144  80 83 00 04 */	lwz r4, 0x4(r3)
/* 80691AE8 0068C148  80 A4 00 00 */	lwz r5, 0x0(r4)
/* 80691AEC 0068C14C  88 05 00 32 */	lbz r0, 0x32(r5)
/* 80691AF0 0068C150  70 00 00 05 */	andi. r0, r0, 0x5
/* 80691AF4 0068C154  40 82 00 24 */	bne .L_80691B18
/* 80691AF8 0068C158  A0 05 00 30 */	lhz r0, 0x30(r5)
/* 80691AFC 0068C15C  54 00 04 A5 */	rlwinm. r0, r0, 0, 18, 18
/* 80691B00 0068C160  41 82 00 18 */	beq .L_80691B18
/* 80691B04 0068C164  88 03 00 01 */	lbz r0, 0x1(r3)
/* 80691B08 0068C168  2C 00 00 00 */	cmpwi r0, 0x0
/* 80691B0C 0068C16C  40 82 00 0C */	bne .L_80691B18
/* 80691B10 0068C170  7C 83 23 78 */	mr r3, r4
/* 80691B14 0068C174  4B FF C8 E9 */	bl fn_8068E3FC
.L_80691B18:
/* 80691B18 0068C178  2C 1F 00 00 */	cmpwi r31, 0x0
/* 80691B1C 0068C17C  40 81 00 0C */	ble .L_80691B28
/* 80691B20 0068C180  7F C3 F3 78 */	mr r3, r30
/* 80691B24 0068C184  4B 9F 2B 61 */	bl dtor_80084684
.L_80691B28:
/* 80691B28 0068C188  7F C3 F3 78 */	mr r3, r30
/* 80691B2C 0068C18C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80691B30 0068C190  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 80691B34 0068C194  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80691B38 0068C198  7C 08 03 A6 */	mtlr r0
/* 80691B3C 0068C19C  38 21 00 10 */	addi r1, r1, 0x10
/* 80691B40 0068C1A0  4E 80 00 20 */	blr
.endfn dtor_80691AC0
