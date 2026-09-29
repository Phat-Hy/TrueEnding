.include "macros.inc"
.file "auto_fn_8068EF6C_text"

# 0x800072E0..0x800072E8 | size: 0x8
.section extab, "a"
.balign 4

# extab:0x0 | 0x800072E0 | size: 0x8
.obj "@etb_800072E0", local
.hidden "@etb_800072E0"
/*
 * Flag values:
 * Has Elf Vector: No
 * Large Frame: Yes
 * Has Frame Pointer: No
 * Saved CR: No
 * Saved GPR range: r29-r31
 */
	.4byte 0x18080000
	.4byte 0x00000000
.endobj "@etb_800072E0"

# 0x80007E4C..0x80007E58 | size: 0xC
.section extabindex, "a"
.balign 4

# extabindex:0x0 | 0x80007E4C | size: 0xC
.obj "@eti_80007E4C", local
.hidden "@eti_80007E4C"
	.4byte fn_8068EF6C
	.4byte 0x00000090
	.4byte "@etb_800072E0"
.endobj "@eti_80007E4C"

# 0x8068EF6C..0x8068EFFC | size: 0x90
.text
.balign 4

# .text:0x0 | 0x8068EF6C | size: 0x90
.fn fn_8068EF6C, global
/* 8068EF6C 006895CC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8068EF70 006895D0  7C 08 02 A6 */	mflr r0
/* 8068EF74 006895D4  90 01 00 24 */	stw r0, 0x24(r1)
/* 8068EF78 006895D8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8068EF7C 006895DC  7C BF 2B 78 */	mr r31, r5
/* 8068EF80 006895E0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8068EF84 006895E4  7C 9E 23 78 */	mr r30, r4
/* 8068EF88 006895E8  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8068EF8C 006895EC  7C 7D 1B 78 */	mr r29, r3
/* 8068EF90 006895F0  81 83 00 00 */	lwz r12, 0x0(r3)
/* 8068EF94 006895F4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8068EF98 006895F8  7D 89 03 A6 */	mtctr r12
/* 8068EF9C 006895FC  4E 80 04 21 */	bctrl
/* 8068EFA0 00689600  2C 03 00 00 */	cmpwi r3, 0x0
/* 8068EFA4 00689604  40 80 00 0C */	bge .L_8068EFB0
/* 8068EFA8 00689608  38 60 00 00 */	li r3, 0x0
/* 8068EFAC 0068960C  48 00 00 34 */	b .L_8068EFE0
.L_8068EFB0:
/* 8068EFB0 00689610  2C 1E 00 00 */	cmpwi r30, 0x0
/* 8068EFB4 00689614  38 00 00 00 */	li r0, 0x0
/* 8068EFB8 00689618  40 82 00 0C */	bne .L_8068EFC4
/* 8068EFBC 0068961C  2C 1F 00 00 */	cmpwi r31, 0x0
/* 8068EFC0 00689620  41 82 00 08 */	beq .L_8068EFC8
.L_8068EFC4:
/* 8068EFC4 00689624  38 00 00 01 */	li r0, 0x1
.L_8068EFC8:
/* 8068EFC8 00689628  2C 00 00 00 */	cmpwi r0, 0x0
/* 8068EFCC 0068962C  98 1D 00 37 */	stb r0, 0x37(r29)
/* 8068EFD0 00689630  40 82 00 0C */	bne .L_8068EFDC
/* 8068EFD4 00689634  38 00 00 00 */	li r0, 0x0
/* 8068EFD8 00689638  98 1D 00 39 */	stb r0, 0x39(r29)
.L_8068EFDC:
/* 8068EFDC 0068963C  7F A3 EB 78 */	mr r3, r29
.L_8068EFE0:
/* 8068EFE0 00689640  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8068EFE4 00689644  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8068EFE8 00689648  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8068EFEC 0068964C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8068EFF0 00689650  7C 08 03 A6 */	mtlr r0
/* 8068EFF4 00689654  38 21 00 20 */	addi r1, r1, 0x20
/* 8068EFF8 00689658  4E 80 00 20 */	blr
.endfn fn_8068EF6C
