.include "macros.inc"
.file "auto_fn_8068EB20_text"

# 0x800072C0..0x800072C8 | size: 0x8
.section extab, "a"
.balign 4

# extab:0x0 | 0x800072C0 | size: 0x8
.obj "@etb_800072C0", local
.hidden "@etb_800072C0"
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
.endobj "@etb_800072C0"

# 0x80007E1C..0x80007E28 | size: 0xC
.section extabindex, "a"
.balign 4

# extabindex:0x0 | 0x80007E1C | size: 0xC
.obj "@eti_80007E1C", local
.hidden "@eti_80007E1C"
	.4byte fn_8068EB20
	.4byte 0x00000088
	.4byte "@etb_800072C0"
.endobj "@eti_80007E1C"

# 0x8068EB20..0x8068EBA8 | size: 0x88
.text
.balign 4

# .text:0x0 | 0x8068EB20 | size: 0x88
.fn fn_8068EB20, global
/* 8068EB20 00689180  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8068EB24 00689184  7C 08 02 A6 */	mflr r0
/* 8068EB28 00689188  90 01 00 14 */	stw r0, 0x14(r1)
/* 8068EB2C 0068918C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8068EB30 00689190  7C 7F 1B 78 */	mr r31, r3
/* 8068EB34 00689194  80 03 00 14 */	lwz r0, 0x14(r3)
/* 8068EB38 00689198  2C 00 00 00 */	cmpwi r0, 0x0
/* 8068EB3C 0068919C  41 82 00 24 */	beq .L_8068EB60
/* 8068EB40 006891A0  80 03 00 40 */	lwz r0, 0x40(r3)
/* 8068EB44 006891A4  54 00 0F FE */	srwi r0, r0, 31
/* 8068EB48 006891A8  98 03 00 48 */	stb r0, 0x48(r3)
/* 8068EB4C 006891AC  4B FF F1 AD */	bl fn_8068DCF8
/* 8068EB50 006891B0  2C 03 00 00 */	cmpwi r3, 0x0
/* 8068EB54 006891B4  40 80 00 2C */	bge .L_8068EB80
/* 8068EB58 006891B8  38 60 FF FF */	li r3, -0x1
/* 8068EB5C 006891BC  48 00 00 28 */	b .L_8068EB84
.L_8068EB60:
/* 8068EB60 006891C0  80 03 00 08 */	lwz r0, 0x8(r3)
/* 8068EB64 006891C4  2C 00 00 00 */	cmpwi r0, 0x0
/* 8068EB68 006891C8  41 82 00 18 */	beq .L_8068EB80
/* 8068EB6C 006891CC  4B FF F5 31 */	bl fn_8068E09C
/* 8068EB70 006891D0  2C 03 00 00 */	cmpwi r3, 0x0
/* 8068EB74 006891D4  40 80 00 0C */	bge .L_8068EB80
/* 8068EB78 006891D8  38 60 FF FF */	li r3, -0x1
/* 8068EB7C 006891DC  48 00 00 08 */	b .L_8068EB84
.L_8068EB80:
/* 8068EB80 006891E0  38 60 00 00 */	li r3, 0x0
.L_8068EB84:
/* 8068EB84 006891E4  2C 03 00 00 */	cmpwi r3, 0x0
/* 8068EB88 006891E8  41 80 00 0C */	blt .L_8068EB94
/* 8068EB8C 006891EC  80 7F 00 50 */	lwz r3, 0x50(r31)
/* 8068EB90 006891F0  4B FE ED F9 */	bl fn_8067D988
.L_8068EB94:
/* 8068EB94 006891F4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8068EB98 006891F8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8068EB9C 006891FC  7C 08 03 A6 */	mtlr r0
/* 8068EBA0 00689200  38 21 00 10 */	addi r1, r1, 0x10
/* 8068EBA4 00689204  4E 80 00 20 */	blr
.endfn fn_8068EB20
