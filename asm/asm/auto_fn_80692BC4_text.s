.include "macros.inc"
.file "auto_fn_80692BC4_text"

# 0x80007968..0x80007970 | size: 0x8
.section extab, "a"
.balign 4

# extab:0x0 | 0x80007968 | size: 0x8
.obj "@etb_80007968", local
.hidden "@etb_80007968"
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
.endobj "@etb_80007968"

# 0x80007FE4..0x80007FF0 | size: 0xC
.section extabindex, "a"
.balign 4

# extabindex:0x0 | 0x80007FE4 | size: 0xC
.obj "@eti_80007FE4", local
.hidden "@eti_80007FE4"
	.4byte fn_80692BC4
	.4byte 0x00000038
	.4byte "@etb_80007968"
.endobj "@eti_80007FE4"

# 0x80692BC4..0x80692BFC | size: 0x38
.text
.balign 4

# .text:0x0 | 0x80692BC4 | size: 0x38
.fn fn_80692BC4, global
/* 80692BC4 0068D224  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80692BC8 0068D228  7C 08 02 A6 */	mflr r0
/* 80692BCC 0068D22C  7C C3 33 78 */	mr r3, r6
/* 80692BD0 0068D230  90 01 00 14 */	stw r0, 0x14(r1)
/* 80692BD4 0068D234  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80692BD8 0068D238  7C BF 2B 78 */	mr r31, r5
/* 80692BDC 0068D23C  7C A4 28 50 */	subf r5, r4, r5
/* 80692BE0 0068D240  4B 97 37 19 */	bl memcpy
/* 80692BE4 0068D244  7F E3 FB 78 */	mr r3, r31
/* 80692BE8 0068D248  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80692BEC 0068D24C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80692BF0 0068D250  7C 08 03 A6 */	mtlr r0
/* 80692BF4 0068D254  38 21 00 10 */	addi r1, r1, 0x10
/* 80692BF8 0068D258  4E 80 00 20 */	blr
.endfn fn_80692BC4
