.include "macros.inc"
.file "auto_fn_8068C164_text"

# 0x80006A84..0x80006AAC | size: 0x28
.section extab, "a"
.balign 4

# extab:0x0 | 0x80006A84 | size: 0x28
.obj "@etb_80006A84", local
.hidden "@etb_80006A84"
/*
 * Flag values:
 * Has Elf Vector: No
 * Large Frame: Yes
 * Has Frame Pointer: Yes
 * Saved CR: No
 * Saved GPR range: r29-r31
 * 
 * PC actions:
 * PC=00000074, Action: 000018
 * PC=00000080, Action: 000024
 * 
 * Exception actions:
 * 000018:
 * Type: SPECIFICATION
 * Local: 0x8(FP)
 * PC: 00000078
 * Types: 0
 * Has end bit
 * 000024:
 * Type: ACTIVECATCHBLOCK
 * Local: 0x8(FP)
 * Has end bit
 */
	.4byte 0x18180000
	.4byte 0x00000074
	.4byte 0x00000018
	.4byte 0x00000080
	.4byte 0x00000024
	.4byte 0x00000000
	.4byte 0x8F000000
	.4byte 0x00000078
	.4byte 0x00000008
	.4byte 0x8D000008
.endobj "@etb_80006A84"

# 0x80007CF0..0x80007CFC | size: 0xC
.section extabindex, "a"
.balign 4

# extabindex:0x0 | 0x80007CF0 | size: 0xC
.obj "@eti_80007CF0", local
.hidden "@eti_80007CF0"
	.4byte fn_8068C164
	.4byte 0x000000BC
	.4byte "@etb_80006A84"
.endobj "@eti_80007CF0"

# 0x8068C164..0x8068C220 | size: 0xBC
.text
.balign 4

# .text:0x0 | 0x8068C164 | size: 0xBC
.fn fn_8068C164, global
/* 8068C164 006867C4  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8068C168 006867C8  7C 08 02 A6 */	mflr r0
/* 8068C16C 006867CC  2C 03 00 00 */	cmpwi r3, 0x0
/* 8068C170 006867D0  90 01 00 34 */	stw r0, 0x34(r1)
/* 8068C174 006867D4  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8068C178 006867D8  7C 3F 0B 78 */	mr r31, r1
/* 8068C17C 006867DC  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8068C180 006867E0  7C 9E 23 78 */	mr r30, r4
/* 8068C184 006867E4  93 A1 00 24 */	stw r29, 0x24(r1)
/* 8068C188 006867E8  7C 7D 1B 78 */	mr r29, r3
/* 8068C18C 006867EC  41 82 00 6C */	beq .L_8068C1F8
/* 8068C190 006867F0  41 82 00 58 */	beq .L_8068C1E8
/* 8068C194 006867F4  88 03 00 4B */	lbz r0, 0x4b(r3)
/* 8068C198 006867F8  3C 80 80 7C */	lis r4, lbl_807BBB90@ha
/* 8068C19C 006867FC  38 84 BB 90 */	addi r4, r4, lbl_807BBB90@l
/* 8068C1A0 00686800  90 83 00 00 */	stw r4, 0x0(r3)
/* 8068C1A4 00686804  2C 00 00 00 */	cmpwi r0, 0x0
/* 8068C1A8 00686808  41 82 00 0C */	beq .L_8068C1B4
/* 8068C1AC 0068680C  80 63 00 28 */	lwz r3, 0x28(r3)
/* 8068C1B0 00686810  4B 9F 8A 75 */	bl fn_80084C24
.L_8068C1B4:
/* 8068C1B4 00686814  2C 1D 00 00 */	cmpwi r29, 0x0
/* 8068C1B8 00686818  41 82 00 30 */	beq .L_8068C1E8
/* 8068C1BC 0068681C  34 7D 00 1C */	addic. r3, r29, 0x1c
/* 8068C1C0 00686820  41 82 00 28 */	beq .L_8068C1E8
/* 8068C1C4 00686824  41 82 00 24 */	beq .L_8068C1E8
/* 8068C1C8 00686828  80 63 00 04 */	lwz r3, 0x4(r3)
/* 8068C1CC 0068682C  2C 03 00 00 */	cmpwi r3, 0x0
/* 8068C1D0 00686830  41 82 00 18 */	beq .L_8068C1E8
/* 8068C1D4 00686834  48 00 90 F1 */	bl fn_806952C4
/* 8068C1D8 00686838  48 00 00 10 */	b .L_8068C1E8
/* 8068C1DC 0068683C  38 7F 00 08 */	addi r3, r31, 0x8
/* 8068C1E0 00686840  48 00 B2 D5 */	bl fn_806974B4
.L_8068C1E4:
/* 8068C1E4 00686844  48 00 00 00 */	b .L_8068C1E4
.L_8068C1E8:
/* 8068C1E8 00686848  7F C0 07 35 */	extsh. r0, r30
/* 8068C1EC 0068684C  40 81 00 0C */	ble .L_8068C1F8
/* 8068C1F0 00686850  7F A3 EB 78 */	mr r3, r29
/* 8068C1F4 00686854  4B 9F 84 91 */	bl dtor_80084684
.L_8068C1F8:
/* 8068C1F8 00686858  7F EA FB 78 */	mr r10, r31
/* 8068C1FC 0068685C  83 FF 00 2C */	lwz r31, 0x2c(r31)
/* 8068C200 00686860  7F A3 EB 78 */	mr r3, r29
/* 8068C204 00686864  83 CA 00 28 */	lwz r30, 0x28(r10)
/* 8068C208 00686868  83 AA 00 24 */	lwz r29, 0x24(r10)
/* 8068C20C 0068686C  81 41 00 00 */	lwz r10, 0x0(r1)
/* 8068C210 00686870  80 0A 00 04 */	lwz r0, 0x4(r10)
/* 8068C214 00686874  7D 41 53 78 */	mr r1, r10
/* 8068C218 00686878  7C 08 03 A6 */	mtlr r0
/* 8068C21C 0068687C  4E 80 00 20 */	blr
.endfn fn_8068C164
