.include "macros.inc"
.file "auto_fn_80693758_text"

# 0x800079D8..0x800079E0 | size: 0x8
.section extab, "a"
.balign 4

# extab:0x0 | 0x800079D8 | size: 0x8
.obj "@etb_800079D8", local
.hidden "@etb_800079D8"
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
.endobj "@etb_800079D8"

# 0x80008038..0x80008044 | size: 0xC
.section extabindex, "a"
.balign 4

# extabindex:0x0 | 0x80008038 | size: 0xC
.obj "@eti_80008038", local
.hidden "@eti_80008038"
	.4byte fn_80693758
	.4byte 0x00000040
	.4byte "@etb_800079D8"
.endobj "@eti_80008038"

# 0x80693758..0x80693798 | size: 0x40
.text
.balign 4

# .text:0x0 | 0x80693758 | size: 0x40
.fn fn_80693758, global
/* 80693758 0068DDB8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8069375C 0068DDBC  7C 08 02 A6 */	mflr r0
/* 80693760 0068DDC0  2C 03 00 00 */	cmpwi r3, 0x0
/* 80693764 0068DDC4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80693768 0068DDC8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8069376C 0068DDCC  7C 7F 1B 78 */	mr r31, r3
/* 80693770 0068DDD0  41 82 00 10 */	beq .L_80693780
/* 80693774 0068DDD4  2C 04 00 00 */	cmpwi r4, 0x0
/* 80693778 0068DDD8  40 81 00 08 */	ble .L_80693780
/* 8069377C 0068DDDC  4B 9F 0F 09 */	bl dtor_80084684
.L_80693780:
/* 80693780 0068DDE0  7F E3 FB 78 */	mr r3, r31
/* 80693784 0068DDE4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80693788 0068DDE8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8069378C 0068DDEC  7C 08 03 A6 */	mtlr r0
/* 80693790 0068DDF0  38 21 00 10 */	addi r1, r1, 0x10
/* 80693794 0068DDF4  4E 80 00 20 */	blr
.endfn fn_80693758
