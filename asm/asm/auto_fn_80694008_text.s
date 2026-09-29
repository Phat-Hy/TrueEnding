.include "macros.inc"
.file "auto_fn_80694008_text"

# 0x80007A14..0x80007A1C | size: 0x8
.section extab, "a"
.balign 4

# extab:0x0 | 0x80007A14 | size: 0x8
.obj "@etb_80007A14", local
.hidden "@etb_80007A14"
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
.endobj "@etb_80007A14"

# 0x8000805C..0x80008068 | size: 0xC
.section extabindex, "a"
.balign 4

# extabindex:0x0 | 0x8000805C | size: 0xC
.obj "@eti_8000805C", local
.hidden "@eti_8000805C"
	.4byte fn_80694008
	.4byte 0x00000040
	.4byte "@etb_80007A14"
.endobj "@eti_8000805C"

# 0x80694008..0x80694048 | size: 0x40
.text
.balign 4

# .text:0x0 | 0x80694008 | size: 0x40
.fn fn_80694008, global
/* 80694008 0068E668  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8069400C 0068E66C  7C 08 02 A6 */	mflr r0
/* 80694010 0068E670  2C 03 00 00 */	cmpwi r3, 0x0
/* 80694014 0068E674  90 01 00 14 */	stw r0, 0x14(r1)
/* 80694018 0068E678  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8069401C 0068E67C  7C 7F 1B 78 */	mr r31, r3
/* 80694020 0068E680  41 82 00 10 */	beq .L_80694030
/* 80694024 0068E684  2C 04 00 00 */	cmpwi r4, 0x0
/* 80694028 0068E688  40 81 00 08 */	ble .L_80694030
/* 8069402C 0068E68C  4B 9F 06 59 */	bl dtor_80084684
.L_80694030:
/* 80694030 0068E690  7F E3 FB 78 */	mr r3, r31
/* 80694034 0068E694  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80694038 0068E698  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8069403C 0068E69C  7C 08 03 A6 */	mtlr r0
/* 80694040 0068E6A0  38 21 00 10 */	addi r1, r1, 0x10
/* 80694044 0068E6A4  4E 80 00 20 */	blr
.endfn fn_80694008
