.include "macros.inc"
.file "auto_fn_80694048_text"

# 0x80007A1C..0x80007A24 | size: 0x8
.section extab, "a"
.balign 4

# extab:0x0 | 0x80007A1C | size: 0x8
.obj "@etb_80007A1C", local
.hidden "@etb_80007A1C"
/*
 * Flag values:
 * Has Elf Vector: No
 * Large Frame: Yes
 * Has Frame Pointer: No
 * Saved CR: No
 */
	.4byte 0x00080000
	.4byte 0x00000000
.endobj "@etb_80007A1C"

# 0x80008068..0x80008074 | size: 0xC
.section extabindex, "a"
.balign 4

# extabindex:0x0 | 0x80008068 | size: 0xC
.obj "@eti_80008068", local
.hidden "@eti_80008068"
	.4byte fn_80694048
	.4byte 0x00000034
	.4byte "@etb_80007A1C"
.endobj "@eti_80008068"

# 0x80694048..0x8069407C | size: 0x34
.text
.balign 4

# .text:0x0 | 0x80694048 | size: 0x34
.fn fn_80694048, global
/* 80694048 0068E6A8  7C 05 30 50 */	subf r0, r5, r6
/* 8069404C 0068E6AC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80694050 0068E6B0  54 00 F8 7E */	srwi r0, r0, 1
/* 80694054 0068E6B4  7C 07 00 00 */	cmpw r7, r0
/* 80694058 0068E6B8  90 E1 00 08 */	stw r7, 0x8(r1)
/* 8069405C 0068E6BC  38 61 00 0C */	addi r3, r1, 0xc
/* 80694060 0068E6C0  90 01 00 0C */	stw r0, 0xc(r1)
/* 80694064 0068E6C4  40 80 00 08 */	bge .L_8069406C
/* 80694068 0068E6C8  38 61 00 08 */	addi r3, r1, 0x8
.L_8069406C:
/* 8069406C 0068E6CC  80 03 00 00 */	lwz r0, 0x0(r3)
/* 80694070 0068E6D0  54 03 08 3C */	slwi r3, r0, 1
/* 80694074 0068E6D4  38 21 00 10 */	addi r1, r1, 0x10
/* 80694078 0068E6D8  4E 80 00 20 */	blr
.endfn fn_80694048
