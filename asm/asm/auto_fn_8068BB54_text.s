.include "macros.inc"
.file "auto_fn_8068BB54_text"

# 0x8000690C..0x80006934 | size: 0x28
.section extab, "a"
.balign 4

# extab:0x0 | 0x8000690C | size: 0x28
.obj "@etb_8000690C", local
.hidden "@etb_8000690C"
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
.endobj "@etb_8000690C"

# 0x80007CB4..0x80007CC0 | size: 0xC
.section extabindex, "a"
.balign 4

# extabindex:0x0 | 0x80007CB4 | size: 0xC
.obj "@eti_80007CB4", local
.hidden "@eti_80007CB4"
	.4byte fn_8068BB54
	.4byte 0x000000BC
	.4byte "@etb_8000690C"
.endobj "@eti_80007CB4"

# 0x8068BB54..0x8068BC10 | size: 0xBC
.text
.balign 4

# .text:0x0 | 0x8068BB54 | size: 0xBC
.fn fn_8068BB54, global
/* 8068BB54 006861B4  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8068BB58 006861B8  7C 08 02 A6 */	mflr r0
/* 8068BB5C 006861BC  2C 03 00 00 */	cmpwi r3, 0x0
/* 8068BB60 006861C0  90 01 00 34 */	stw r0, 0x34(r1)
/* 8068BB64 006861C4  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8068BB68 006861C8  7C 3F 0B 78 */	mr r31, r1
/* 8068BB6C 006861CC  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8068BB70 006861D0  7C 9E 23 78 */	mr r30, r4
/* 8068BB74 006861D4  93 A1 00 24 */	stw r29, 0x24(r1)
/* 8068BB78 006861D8  7C 7D 1B 78 */	mr r29, r3
/* 8068BB7C 006861DC  41 82 00 6C */	beq .L_8068BBE8
/* 8068BB80 006861E0  41 82 00 58 */	beq .L_8068BBD8
/* 8068BB84 006861E4  88 03 00 4B */	lbz r0, 0x4b(r3)
/* 8068BB88 006861E8  3C 80 80 7C */	lis r4, lbl_807BBCC8@ha
/* 8068BB8C 006861EC  38 84 BC C8 */	addi r4, r4, lbl_807BBCC8@l
/* 8068BB90 006861F0  90 83 00 00 */	stw r4, 0x0(r3)
/* 8068BB94 006861F4  2C 00 00 00 */	cmpwi r0, 0x0
/* 8068BB98 006861F8  41 82 00 0C */	beq .L_8068BBA4
/* 8068BB9C 006861FC  80 63 00 28 */	lwz r3, 0x28(r3)
/* 8068BBA0 00686200  4B 9F 90 85 */	bl fn_80084C24
.L_8068BBA4:
/* 8068BBA4 00686204  2C 1D 00 00 */	cmpwi r29, 0x0
/* 8068BBA8 00686208  41 82 00 30 */	beq .L_8068BBD8
/* 8068BBAC 0068620C  34 7D 00 1C */	addic. r3, r29, 0x1c
/* 8068BBB0 00686210  41 82 00 28 */	beq .L_8068BBD8
/* 8068BBB4 00686214  41 82 00 24 */	beq .L_8068BBD8
/* 8068BBB8 00686218  80 63 00 04 */	lwz r3, 0x4(r3)
/* 8068BBBC 0068621C  2C 03 00 00 */	cmpwi r3, 0x0
/* 8068BBC0 00686220  41 82 00 18 */	beq .L_8068BBD8
/* 8068BBC4 00686224  48 00 97 01 */	bl fn_806952C4
/* 8068BBC8 00686228  48 00 00 10 */	b .L_8068BBD8
/* 8068BBCC 0068622C  38 7F 00 08 */	addi r3, r31, 0x8
/* 8068BBD0 00686230  48 00 B8 E5 */	bl fn_806974B4
.L_8068BBD4:
/* 8068BBD4 00686234  48 00 00 00 */	b .L_8068BBD4
.L_8068BBD8:
/* 8068BBD8 00686238  7F C0 07 35 */	extsh. r0, r30
/* 8068BBDC 0068623C  40 81 00 0C */	ble .L_8068BBE8
/* 8068BBE0 00686240  7F A3 EB 78 */	mr r3, r29
/* 8068BBE4 00686244  4B 9F 8A A1 */	bl dtor_80084684
.L_8068BBE8:
/* 8068BBE8 00686248  7F EA FB 78 */	mr r10, r31
/* 8068BBEC 0068624C  83 FF 00 2C */	lwz r31, 0x2c(r31)
/* 8068BBF0 00686250  7F A3 EB 78 */	mr r3, r29
/* 8068BBF4 00686254  83 CA 00 28 */	lwz r30, 0x28(r10)
/* 8068BBF8 00686258  83 AA 00 24 */	lwz r29, 0x24(r10)
/* 8068BBFC 0068625C  81 41 00 00 */	lwz r10, 0x0(r1)
/* 8068BC00 00686260  80 0A 00 04 */	lwz r0, 0x4(r10)
/* 8068BC04 00686264  7D 41 53 78 */	mr r1, r10
/* 8068BC08 00686268  7C 08 03 A6 */	mtlr r0
/* 8068BC0C 0068626C  4E 80 00 20 */	blr
.endfn fn_8068BB54
