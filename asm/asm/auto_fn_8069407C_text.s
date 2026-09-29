.include "macros.inc"
.file "auto_fn_8069407C_text"

# 0x80007A24..0x80007A2C | size: 0x8
.section extab, "a"
.balign 4

# extab:0x0 | 0x80007A24 | size: 0x8
.obj "@etb_80007A24", local
.hidden "@etb_80007A24"
/*
 * Flag values:
 * Has Elf Vector: No
 * Large Frame: Yes
 * Has Frame Pointer: No
 * Saved CR: No
 */
	.4byte 0x00080000
	.4byte 0x00000000
.endobj "@etb_80007A24"

# 0x80008074..0x80008080 | size: 0xC
.section extabindex, "a"
.balign 4

# extabindex:0x0 | 0x80008074 | size: 0xC
.obj "@eti_80008074", local
.hidden "@eti_80008074"
	.4byte fn_8069407C
	.4byte 0x0000002C
	.4byte "@etb_80007A24"
.endobj "@eti_80008074"

# 0x8069407C..0x806940A8 | size: 0x2C
.text
.balign 4

# .text:0x0 | 0x8069407C | size: 0x2C
.fn fn_8069407C, global
/* 8069407C 0068E6DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80694080 0068E6E0  7C 05 30 50 */	subf r0, r5, r6
/* 80694084 0068E6E4  7C 07 00 00 */	cmpw r7, r0
/* 80694088 0068E6E8  90 E1 00 08 */	stw r7, 0x8(r1)
/* 8069408C 0068E6EC  38 61 00 0C */	addi r3, r1, 0xc
/* 80694090 0068E6F0  90 01 00 0C */	stw r0, 0xc(r1)
/* 80694094 0068E6F4  40 80 00 08 */	bge .L_8069409C
/* 80694098 0068E6F8  38 61 00 08 */	addi r3, r1, 0x8
.L_8069409C:
/* 8069409C 0068E6FC  80 63 00 00 */	lwz r3, 0x0(r3)
/* 806940A0 0068E700  38 21 00 10 */	addi r1, r1, 0x10
/* 806940A4 0068E704  4E 80 00 20 */	blr
.endfn fn_8069407C
