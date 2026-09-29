.include "macros.inc"
.file "auto_fn_8068EA70_text"

# 0x800072B8..0x800072C0 | size: 0x8
.section extab, "a"
.balign 4

# extab:0x0 | 0x800072B8 | size: 0x8
.obj "@etb_800072B8", local
.hidden "@etb_800072B8"
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
.endobj "@etb_800072B8"

# 0x80007E10..0x80007E1C | size: 0xC
.section extabindex, "a"
.balign 4

# extabindex:0x0 | 0x80007E10 | size: 0xC
.obj "@eti_80007E10", local
.hidden "@eti_80007E10"
	.4byte fn_8068EA70
	.4byte 0x00000088
	.4byte "@etb_800072B8"
.endobj "@eti_80007E10"

# 0x8068EA70..0x8068EAF8 | size: 0x88
.text
.balign 4

# .text:0x0 | 0x8068EA70 | size: 0x88
.fn fn_8068EA70, global
/* 8068EA70 006890D0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8068EA74 006890D4  7C 08 02 A6 */	mflr r0
/* 8068EA78 006890D8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8068EA7C 006890DC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8068EA80 006890E0  7C 7F 1B 78 */	mr r31, r3
/* 8068EA84 006890E4  80 03 00 14 */	lwz r0, 0x14(r3)
/* 8068EA88 006890E8  2C 00 00 00 */	cmpwi r0, 0x0
/* 8068EA8C 006890EC  41 82 00 24 */	beq .L_8068EAB0
/* 8068EA90 006890F0  80 03 00 40 */	lwz r0, 0x40(r3)
/* 8068EA94 006890F4  54 00 0F FE */	srwi r0, r0, 31
/* 8068EA98 006890F8  98 03 00 48 */	stb r0, 0x48(r3)
/* 8068EA9C 006890FC  4B FF E9 79 */	bl fn_8068D414
/* 8068EAA0 00689100  2C 03 00 00 */	cmpwi r3, 0x0
/* 8068EAA4 00689104  40 80 00 2C */	bge .L_8068EAD0
/* 8068EAA8 00689108  38 60 FF FF */	li r3, -0x1
/* 8068EAAC 0068910C  48 00 00 28 */	b .L_8068EAD4
.L_8068EAB0:
/* 8068EAB0 00689110  80 03 00 08 */	lwz r0, 0x8(r3)
/* 8068EAB4 00689114  2C 00 00 00 */	cmpwi r0, 0x0
/* 8068EAB8 00689118  41 82 00 18 */	beq .L_8068EAD0
/* 8068EABC 0068911C  4B FF EC FD */	bl fn_8068D7B8
/* 8068EAC0 00689120  2C 03 00 00 */	cmpwi r3, 0x0
/* 8068EAC4 00689124  40 80 00 0C */	bge .L_8068EAD0
/* 8068EAC8 00689128  38 60 FF FF */	li r3, -0x1
/* 8068EACC 0068912C  48 00 00 08 */	b .L_8068EAD4
.L_8068EAD0:
/* 8068EAD0 00689130  38 60 00 00 */	li r3, 0x0
.L_8068EAD4:
/* 8068EAD4 00689134  2C 03 00 00 */	cmpwi r3, 0x0
/* 8068EAD8 00689138  41 80 00 0C */	blt .L_8068EAE4
/* 8068EADC 0068913C  80 7F 00 50 */	lwz r3, 0x50(r31)
/* 8068EAE0 00689140  4B FE EE A9 */	bl fn_8067D988
.L_8068EAE4:
/* 8068EAE4 00689144  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8068EAE8 00689148  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8068EAEC 0068914C  7C 08 03 A6 */	mtlr r0
/* 8068EAF0 00689150  38 21 00 10 */	addi r1, r1, 0x10
/* 8068EAF4 00689154  4E 80 00 20 */	blr
.endfn fn_8068EA70
