.include "macros.inc"
.file "auto_fn_806950E0_text"

# 0x80007B4C..0x80007B54 | size: 0x8
.section extab, "a"
.balign 4

# extab:0x0 | 0x80007B4C | size: 0x8
.obj "@etb_80007B4C", local
.hidden "@etb_80007B4C"
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
.endobj "@etb_80007B4C"

# 0x800080BC..0x800080C8 | size: 0xC
.section extabindex, "a"
.balign 4

# extabindex:0x0 | 0x800080BC | size: 0xC
.obj "@eti_800080BC", local
.hidden "@eti_800080BC"
	.4byte fn_806950E0
	.4byte 0x0000004C
	.4byte "@etb_80007B4C"
.endobj "@eti_800080BC"

# 0x806950E0..0x8069512C | size: 0x4C
.text
.balign 4

# .text:0x0 | 0x806950E0 | size: 0x4C
.fn fn_806950E0, global
/* 806950E0 0068F740  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 806950E4 0068F744  7C 08 02 A6 */	mflr r0
/* 806950E8 0068F748  90 01 00 14 */	stw r0, 0x14(r1)
/* 806950EC 0068F74C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 806950F0 0068F750  7C 7F 1B 78 */	mr r31, r3
/* 806950F4 0068F754  80 64 00 00 */	lwz r3, 0x0(r4)
/* 806950F8 0068F758  80 8D 96 58 */	lwz r4, lbl_8087ED18@sda21(r0)
/* 806950FC 0068F75C  4B FE D3 2D */	bl fn_80682428
/* 80695100 0068F760  7C 60 00 34 */	cntlzw r0, r3
/* 80695104 0068F764  54 00 D9 7F */	srwi. r0, r0, 5
/* 80695108 0068F768  41 82 00 0C */	beq .L_80695114
/* 8069510C 0068F76C  38 7F 00 0C */	addi r3, r31, 0xc
/* 80695110 0068F770  48 00 00 08 */	b .L_80695118
.L_80695114:
/* 80695114 0068F774  38 60 00 00 */	li r3, 0x0
.L_80695118:
/* 80695118 0068F778  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8069511C 0068F77C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80695120 0068F780  7C 08 03 A6 */	mtlr r0
/* 80695124 0068F784  38 21 00 10 */	addi r1, r1, 0x10
/* 80695128 0068F788  4E 80 00 20 */	blr
.endfn fn_806950E0
