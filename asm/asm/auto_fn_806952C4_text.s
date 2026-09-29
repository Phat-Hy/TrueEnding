.include "macros.inc"
.file "auto_fn_806952C4_text"

# 0x80007B8C..0x80007B94 | size: 0x8
.section extab, "a"
.balign 4

# extab:0x0 | 0x80007B8C | size: 0x8
.obj "@etb_80007B8C", local
.hidden "@etb_80007B8C"
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
.endobj "@etb_80007B8C"

# 0x800080EC..0x800080F8 | size: 0xC
.section extabindex, "a"
.balign 4

# extabindex:0x0 | 0x800080EC | size: 0xC
.obj "@eti_800080EC", local
.hidden "@eti_800080EC"
	.4byte fn_806952C4
	.4byte 0x00000078
	.4byte "@etb_80007B8C"
.endobj "@eti_800080EC"

# 0x806952C4..0x8069533C | size: 0x78
.text
.balign 4

# .text:0x0 | 0x806952C4 | size: 0x78
.fn fn_806952C4, global
/* 806952C4 0068F924  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 806952C8 0068F928  7C 08 02 A6 */	mflr r0
/* 806952CC 0068F92C  90 01 00 14 */	stw r0, 0x14(r1)
/* 806952D0 0068F930  93 E1 00 0C */	stw r31, 0xc(r1)
/* 806952D4 0068F934  7C 7F 1B 78 */	mr r31, r3
/* 806952D8 0068F938  80 03 00 04 */	lwz r0, 0x4(r3)
/* 806952DC 0068F93C  34 00 FF FF */	subic. r0, r0, 0x1
/* 806952E0 0068F940  90 03 00 04 */	stw r0, 0x4(r3)
/* 806952E4 0068F944  40 82 00 44 */	bne .L_80695328
/* 806952E8 0068F948  81 83 00 00 */	lwz r12, 0x0(r3)
/* 806952EC 0068F94C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 806952F0 0068F950  7D 89 03 A6 */	mtctr r12
/* 806952F4 0068F954  4E 80 04 21 */	bctrl
/* 806952F8 0068F958  80 1F 00 08 */	lwz r0, 0x8(r31)
/* 806952FC 0068F95C  34 00 FF FF */	subic. r0, r0, 0x1
/* 80695300 0068F960  90 1F 00 08 */	stw r0, 0x8(r31)
/* 80695304 0068F964  40 82 00 24 */	bne .L_80695328
/* 80695308 0068F968  2C 1F 00 00 */	cmpwi r31, 0x0
/* 8069530C 0068F96C  41 82 00 1C */	beq .L_80695328
/* 80695310 0068F970  81 9F 00 00 */	lwz r12, 0x0(r31)
/* 80695314 0068F974  7F E3 FB 78 */	mr r3, r31
/* 80695318 0068F978  38 80 00 01 */	li r4, 0x1
/* 8069531C 0068F97C  81 8C 00 08 */	lwz r12, 0x8(r12)
/* 80695320 0068F980  7D 89 03 A6 */	mtctr r12
/* 80695324 0068F984  4E 80 04 21 */	bctrl
.L_80695328:
/* 80695328 0068F988  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8069532C 0068F98C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80695330 0068F990  7C 08 03 A6 */	mtlr r0
/* 80695334 0068F994  38 21 00 10 */	addi r1, r1, 0x10
/* 80695338 0068F998  4E 80 00 20 */	blr
.endfn fn_806952C4
