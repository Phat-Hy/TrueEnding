.include "macros.inc"
.file "auto_fn_80691C9C_text"

# 0x80007674..0x8000767C | size: 0x8
.section extab, "a"
.balign 4

# extab:0x0 | 0x80007674 | size: 0x8
.obj "@etb_80007674", local
.hidden "@etb_80007674"
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
.endobj "@etb_80007674"

# 0x80007F84..0x80007F90 | size: 0xC
.section extabindex, "a"
.balign 4

# extabindex:0x0 | 0x80007F84 | size: 0xC
.obj "@eti_80007F84", local
.hidden "@eti_80007F84"
	.4byte fn_80691C9C
	.4byte 0x00000060
	.4byte "@etb_80007674"
.endobj "@eti_80007F84"

# 0x80691C9C..0x80691CFC | size: 0x60
.text
.balign 4

# .text:0x0 | 0x80691C9C | size: 0x60
.fn fn_80691C9C, global
/* 80691C9C 0068C2FC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80691CA0 0068C300  7C 08 02 A6 */	mflr r0
/* 80691CA4 0068C304  90 01 00 14 */	stw r0, 0x14(r1)
/* 80691CA8 0068C308  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80691CAC 0068C30C  7C 7F 1B 78 */	mr r31, r3
/* 80691CB0 0068C310  81 83 00 00 */	lwz r12, 0x0(r3)
/* 80691CB4 0068C314  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 80691CB8 0068C318  7D 89 03 A6 */	mtctr r12
/* 80691CBC 0068C31C  4E 80 04 21 */	bctrl
/* 80691CC0 0068C320  54 60 04 3E */	clrlwi r0, r3, 16
/* 80691CC4 0068C324  28 00 FF FF */	cmplwi r0, 0xffff
/* 80691CC8 0068C328  40 82 00 10 */	bne .L_80691CD8
/* 80691CCC 0068C32C  3C 60 00 01 */	lis r3, 0x1
/* 80691CD0 0068C330  38 63 FF FF */	subi r3, r3, 0x1
/* 80691CD4 0068C334  48 00 00 14 */	b .L_80691CE8
.L_80691CD8:
/* 80691CD8 0068C338  80 7F 00 08 */	lwz r3, 0x8(r31)
/* 80691CDC 0068C33C  38 03 00 02 */	addi r0, r3, 0x2
/* 80691CE0 0068C340  90 1F 00 08 */	stw r0, 0x8(r31)
/* 80691CE4 0068C344  A0 63 00 00 */	lhz r3, 0x0(r3)
.L_80691CE8:
/* 80691CE8 0068C348  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80691CEC 0068C34C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80691CF0 0068C350  7C 08 03 A6 */	mtlr r0
/* 80691CF4 0068C354  38 21 00 10 */	addi r1, r1, 0x10
/* 80691CF8 0068C358  4E 80 00 20 */	blr
.endfn fn_80691C9C
