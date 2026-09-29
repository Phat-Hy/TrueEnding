.include "macros.inc"
.file "auto_fn_8068DC84_text"

# 0x8000703C..0x80007044 | size: 0x8
.section extab, "a"
.balign 4

# extab:0x0 | 0x8000703C | size: 0x8
.obj "@etb_8000703C", local
.hidden "@etb_8000703C"
/*
 * Flag values:
 * Has Elf Vector: No
 * Large Frame: Yes
 * Has Frame Pointer: No
 * Saved CR: No
 */
	.4byte 0x00080000
	.4byte 0x00000000
.endobj "@etb_8000703C"

# 0x80007DB0..0x80007DBC | size: 0xC
.section extabindex, "a"
.balign 4

# extabindex:0x0 | 0x80007DB0 | size: 0xC
.obj "@eti_80007DB0", local
.hidden "@eti_80007DB0"
	.4byte fn_8068DC84
	.4byte 0x0000006C
	.4byte "@etb_8000703C"
.endobj "@eti_80007DB0"

# 0x8068DC84..0x8068DCF0 | size: 0x6C
.text
.balign 4

# .text:0x0 | 0x8068DC84 | size: 0x6C
.fn fn_8068DC84, global
/* 8068DC84 006882E4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8068DC88 006882E8  7C 08 02 A6 */	mflr r0
/* 8068DC8C 006882EC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8068DC90 006882F0  80 03 00 14 */	lwz r0, 0x14(r3)
/* 8068DC94 006882F4  2C 00 00 00 */	cmpwi r0, 0x0
/* 8068DC98 006882F8  41 82 00 24 */	beq .L_8068DCBC
/* 8068DC9C 006882FC  80 03 00 40 */	lwz r0, 0x40(r3)
/* 8068DCA0 00688300  54 00 0F FE */	srwi r0, r0, 31
/* 8068DCA4 00688304  98 03 00 48 */	stb r0, 0x48(r3)
/* 8068DCA8 00688308  48 00 00 51 */	bl fn_8068DCF8
/* 8068DCAC 0068830C  2C 03 00 00 */	cmpwi r3, 0x0
/* 8068DCB0 00688310  40 80 00 2C */	bge .L_8068DCDC
/* 8068DCB4 00688314  38 60 FF FF */	li r3, -0x1
/* 8068DCB8 00688318  48 00 00 28 */	b .L_8068DCE0
.L_8068DCBC:
/* 8068DCBC 0068831C  80 03 00 08 */	lwz r0, 0x8(r3)
/* 8068DCC0 00688320  2C 00 00 00 */	cmpwi r0, 0x0
/* 8068DCC4 00688324  41 82 00 18 */	beq .L_8068DCDC
/* 8068DCC8 00688328  48 00 03 D5 */	bl fn_8068E09C
/* 8068DCCC 0068832C  2C 03 00 00 */	cmpwi r3, 0x0
/* 8068DCD0 00688330  40 80 00 0C */	bge .L_8068DCDC
/* 8068DCD4 00688334  38 60 FF FF */	li r3, -0x1
/* 8068DCD8 00688338  48 00 00 08 */	b .L_8068DCE0
.L_8068DCDC:
/* 8068DCDC 0068833C  38 60 00 00 */	li r3, 0x0
.L_8068DCE0:
/* 8068DCE0 00688340  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8068DCE4 00688344  7C 08 03 A6 */	mtlr r0
/* 8068DCE8 00688348  38 21 00 10 */	addi r1, r1, 0x10
/* 8068DCEC 0068834C  4E 80 00 20 */	blr
.endfn fn_8068DC84
