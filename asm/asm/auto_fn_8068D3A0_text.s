.include "macros.inc"
.file "auto_fn_8068D3A0_text"

# 0x80006FF4..0x80006FFC | size: 0x8
.section extab, "a"
.balign 4

# extab:0x0 | 0x80006FF4 | size: 0x8
.obj "@etb_80006FF4", local
.hidden "@etb_80006FF4"
/*
 * Flag values:
 * Has Elf Vector: No
 * Large Frame: Yes
 * Has Frame Pointer: No
 * Saved CR: No
 */
	.4byte 0x00080000
	.4byte 0x00000000
.endobj "@etb_80006FF4"

# 0x80007D74..0x80007D80 | size: 0xC
.section extabindex, "a"
.balign 4

# extabindex:0x0 | 0x80007D74 | size: 0xC
.obj "@eti_80007D74", local
.hidden "@eti_80007D74"
	.4byte fn_8068D3A0
	.4byte 0x0000006C
	.4byte "@etb_80006FF4"
.endobj "@eti_80007D74"

# 0x8068D3A0..0x8068D40C | size: 0x6C
.text
.balign 4

# .text:0x0 | 0x8068D3A0 | size: 0x6C
.fn fn_8068D3A0, global
/* 8068D3A0 00687A00  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8068D3A4 00687A04  7C 08 02 A6 */	mflr r0
/* 8068D3A8 00687A08  90 01 00 14 */	stw r0, 0x14(r1)
/* 8068D3AC 00687A0C  80 03 00 14 */	lwz r0, 0x14(r3)
/* 8068D3B0 00687A10  2C 00 00 00 */	cmpwi r0, 0x0
/* 8068D3B4 00687A14  41 82 00 24 */	beq .L_8068D3D8
/* 8068D3B8 00687A18  80 03 00 40 */	lwz r0, 0x40(r3)
/* 8068D3BC 00687A1C  54 00 0F FE */	srwi r0, r0, 31
/* 8068D3C0 00687A20  98 03 00 48 */	stb r0, 0x48(r3)
/* 8068D3C4 00687A24  48 00 00 51 */	bl fn_8068D414
/* 8068D3C8 00687A28  2C 03 00 00 */	cmpwi r3, 0x0
/* 8068D3CC 00687A2C  40 80 00 2C */	bge .L_8068D3F8
/* 8068D3D0 00687A30  38 60 FF FF */	li r3, -0x1
/* 8068D3D4 00687A34  48 00 00 28 */	b .L_8068D3FC
.L_8068D3D8:
/* 8068D3D8 00687A38  80 03 00 08 */	lwz r0, 0x8(r3)
/* 8068D3DC 00687A3C  2C 00 00 00 */	cmpwi r0, 0x0
/* 8068D3E0 00687A40  41 82 00 18 */	beq .L_8068D3F8
/* 8068D3E4 00687A44  48 00 03 D5 */	bl fn_8068D7B8
/* 8068D3E8 00687A48  2C 03 00 00 */	cmpwi r3, 0x0
/* 8068D3EC 00687A4C  40 80 00 0C */	bge .L_8068D3F8
/* 8068D3F0 00687A50  38 60 FF FF */	li r3, -0x1
/* 8068D3F4 00687A54  48 00 00 08 */	b .L_8068D3FC
.L_8068D3F8:
/* 8068D3F8 00687A58  38 60 00 00 */	li r3, 0x0
.L_8068D3FC:
/* 8068D3FC 00687A5C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8068D400 00687A60  7C 08 03 A6 */	mtlr r0
/* 8068D404 00687A64  38 21 00 10 */	addi r1, r1, 0x10
/* 8068D408 00687A68  4E 80 00 20 */	blr
.endfn fn_8068D3A0
