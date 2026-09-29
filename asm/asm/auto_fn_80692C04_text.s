.include "macros.inc"
.file "auto_fn_80692C04_text"

# 0x80007970..0x80007978 | size: 0x8
.section extab, "a"
.balign 4

# extab:0x0 | 0x80007970 | size: 0x8
.obj "@etb_80007970", local
.hidden "@etb_80007970"
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
.endobj "@etb_80007970"

# 0x80007FF0..0x80007FFC | size: 0xC
.section extabindex, "a"
.balign 4

# extabindex:0x0 | 0x80007FF0 | size: 0xC
.obj "@eti_80007FF0", local
.hidden "@eti_80007FF0"
	.4byte fn_80692C04
	.4byte 0x00000038
	.4byte "@etb_80007970"
.endobj "@eti_80007FF0"

# 0x80692C04..0x80692C3C | size: 0x38
.text
.balign 4

# .text:0x0 | 0x80692C04 | size: 0x38
.fn fn_80692C04, global
/* 80692C04 0068D264  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80692C08 0068D268  7C 08 02 A6 */	mflr r0
/* 80692C0C 0068D26C  7C E3 3B 78 */	mr r3, r7
/* 80692C10 0068D270  90 01 00 14 */	stw r0, 0x14(r1)
/* 80692C14 0068D274  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80692C18 0068D278  7C BF 2B 78 */	mr r31, r5
/* 80692C1C 0068D27C  7C A4 28 50 */	subf r5, r4, r5
/* 80692C20 0068D280  4B 97 36 D9 */	bl memcpy
/* 80692C24 0068D284  7F E3 FB 78 */	mr r3, r31
/* 80692C28 0068D288  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80692C2C 0068D28C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80692C30 0068D290  7C 08 03 A6 */	mtlr r0
/* 80692C34 0068D294  38 21 00 10 */	addi r1, r1, 0x10
/* 80692C38 0068D298  4E 80 00 20 */	blr
.endfn fn_80692C04
