.include "macros.inc"
.file "auto_fn_80695230_text"

# 0x80007B84..0x80007B8C | size: 0x8
.section extab, "a"
.balign 4

# extab:0x0 | 0x80007B84 | size: 0x8
.obj "@etb_80007B84", local
.hidden "@etb_80007B84"
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
.endobj "@etb_80007B84"

# 0x800080E0..0x800080EC | size: 0xC
.section extabindex, "a"
.balign 4

# extabindex:0x0 | 0x800080E0 | size: 0xC
.obj "@eti_800080E0", local
.hidden "@eti_800080E0"
	.4byte fn_80695230
	.4byte 0x00000040
	.4byte "@etb_80007B84"
.endobj "@eti_800080E0"

# 0x80695230..0x80695270 | size: 0x40
.text
.balign 4

# .text:0x0 | 0x80695230 | size: 0x40
.fn fn_80695230, global
/* 80695230 0068F890  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80695234 0068F894  7C 08 02 A6 */	mflr r0
/* 80695238 0068F898  2C 03 00 00 */	cmpwi r3, 0x0
/* 8069523C 0068F89C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80695240 0068F8A0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80695244 0068F8A4  7C 7F 1B 78 */	mr r31, r3
/* 80695248 0068F8A8  41 82 00 10 */	beq .L_80695258
/* 8069524C 0068F8AC  2C 04 00 00 */	cmpwi r4, 0x0
/* 80695250 0068F8B0  40 81 00 08 */	ble .L_80695258
/* 80695254 0068F8B4  4B 9E F4 31 */	bl dtor_80084684
.L_80695258:
/* 80695258 0068F8B8  7F E3 FB 78 */	mr r3, r31
/* 8069525C 0068F8BC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80695260 0068F8C0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80695264 0068F8C4  7C 08 03 A6 */	mtlr r0
/* 80695268 0068F8C8  38 21 00 10 */	addi r1, r1, 0x10
/* 8069526C 0068F8CC  4E 80 00 20 */	blr
.endfn fn_80695230
