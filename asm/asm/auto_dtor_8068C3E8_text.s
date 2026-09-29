.include "macros.inc"
.file "auto_dtor_8068C3E8_text"

# 0x80006AE0..0x80006AE8 | size: 0x8
.section extab, "a"
.balign 4

# extab:0x0 | 0x80006AE0 | size: 0x8
.obj "@etb_80006AE0", local
.hidden "@etb_80006AE0"
/*
 * Flag values:
 * Has Elf Vector: No
 * Large Frame: Yes
 * Has Frame Pointer: No
 * Saved CR: No
 * Saved GPR range: r30-r31
 */
	.4byte 0x10080000
	.4byte 0x00000000
.endobj "@etb_80006AE0"

# 0x80007D14..0x80007D20 | size: 0xC
.section extabindex, "a"
.balign 4

# extabindex:0x0 | 0x80007D14 | size: 0xC
.obj "@eti_80007D14", local
.hidden "@eti_80007D14"
	.4byte dtor_8068C3E8
	.4byte 0x00000058
	.4byte "@etb_80006AE0"
.endobj "@eti_80007D14"

# 0x8068C3E8..0x8068C440 | size: 0x58
.text
.balign 4

# .text:0x0 | 0x8068C3E8 | size: 0x58
.fn dtor_8068C3E8, global
/* 8068C3E8 00686A48  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8068C3EC 00686A4C  7C 08 02 A6 */	mflr r0
/* 8068C3F0 00686A50  2C 03 00 00 */	cmpwi r3, 0x0
/* 8068C3F4 00686A54  90 01 00 14 */	stw r0, 0x14(r1)
/* 8068C3F8 00686A58  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8068C3FC 00686A5C  7C 9F 23 78 */	mr r31, r4
/* 8068C400 00686A60  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8068C404 00686A64  7C 7E 1B 78 */	mr r30, r3
/* 8068C408 00686A68  41 82 00 1C */	beq .L_8068C424
/* 8068C40C 00686A6C  38 80 00 00 */	li r4, 0x0
/* 8068C410 00686A70  4B FF F0 FD */	bl fn_8068B50C
/* 8068C414 00686A74  2C 1F 00 00 */	cmpwi r31, 0x0
/* 8068C418 00686A78  40 81 00 0C */	ble .L_8068C424
/* 8068C41C 00686A7C  7F C3 F3 78 */	mr r3, r30
/* 8068C420 00686A80  4B 9F 82 65 */	bl dtor_80084684
.L_8068C424:
/* 8068C424 00686A84  7F C3 F3 78 */	mr r3, r30
/* 8068C428 00686A88  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8068C42C 00686A8C  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8068C430 00686A90  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8068C434 00686A94  7C 08 03 A6 */	mtlr r0
/* 8068C438 00686A98  38 21 00 10 */	addi r1, r1, 0x10
/* 8068C43C 00686A9C  4E 80 00 20 */	blr
.endfn dtor_8068C3E8
