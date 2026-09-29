.include "macros.inc"
.file "auto_fn_80694328_text"

# 0x80007A2C..0x80007A54 | size: 0x28
.section extab, "a"
.balign 4

# extab:0x0 | 0x80007A2C | size: 0x28
.obj "@etb_80007A2C", local
.hidden "@etb_80007A2C"
/*
 * Flag values:
 * Has Elf Vector: No
 * Large Frame: Yes
 * Has Frame Pointer: Yes
 * Saved CR: No
 * Saved GPR range: r29-r31
 * 
 * PC actions:
 * PC=00000048, Action: 000018
 * PC=00000054, Action: 000024
 * 
 * Exception actions:
 * 000018:
 * Type: SPECIFICATION
 * Local: 0x8(FP)
 * PC: 0000004C
 * Types: 0
 * Has end bit
 * 000024:
 * Type: ACTIVECATCHBLOCK
 * Local: 0x8(FP)
 * Has end bit
 */
	.4byte 0x18180000
	.4byte 0x00000048
	.4byte 0x00000018
	.4byte 0x00000054
	.4byte 0x00000024
	.4byte 0x00000000
	.4byte 0x8F000000
	.4byte 0x0000004C
	.4byte 0x00000008
	.4byte 0x8D000008
.endobj "@etb_80007A2C"

# 0x80008080..0x8000808C | size: 0xC
.section extabindex, "a"
.balign 4

# extabindex:0x0 | 0x80008080 | size: 0xC
.obj "@eti_80008080", local
.hidden "@eti_80008080"
	.4byte fn_80694328
	.4byte 0x00000090
	.4byte "@etb_80007A2C"
.endobj "@eti_80008080"

# 0x80694328..0x806943B8 | size: 0x90
.text
.balign 4

# .text:0x0 | 0x80694328 | size: 0x90
.fn fn_80694328, global
/* 80694328 0068E988  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8069432C 0068E98C  7C 08 02 A6 */	mflr r0
/* 80694330 0068E990  2C 03 00 00 */	cmpwi r3, 0x0
/* 80694334 0068E994  90 01 00 34 */	stw r0, 0x34(r1)
/* 80694338 0068E998  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8069433C 0068E99C  7C 3F 0B 78 */	mr r31, r1
/* 80694340 0068E9A0  93 C1 00 28 */	stw r30, 0x28(r1)
/* 80694344 0068E9A4  7C 9E 23 78 */	mr r30, r4
/* 80694348 0068E9A8  93 A1 00 24 */	stw r29, 0x24(r1)
/* 8069434C 0068E9AC  7C 7D 1B 78 */	mr r29, r3
/* 80694350 0068E9B0  41 82 00 40 */	beq .L_80694390
/* 80694354 0068E9B4  34 63 00 04 */	addic. r3, r3, 0x4
/* 80694358 0068E9B8  41 82 00 28 */	beq .L_80694380
/* 8069435C 0068E9BC  41 82 00 24 */	beq .L_80694380
/* 80694360 0068E9C0  80 63 00 04 */	lwz r3, 0x4(r3)
/* 80694364 0068E9C4  2C 03 00 00 */	cmpwi r3, 0x0
/* 80694368 0068E9C8  41 82 00 18 */	beq .L_80694380
/* 8069436C 0068E9CC  48 00 0F 59 */	bl fn_806952C4
/* 80694370 0068E9D0  48 00 00 10 */	b .L_80694380
/* 80694374 0068E9D4  38 7F 00 08 */	addi r3, r31, 0x8
/* 80694378 0068E9D8  48 00 31 3D */	bl fn_806974B4
.L_8069437C:
/* 8069437C 0068E9DC  48 00 00 00 */	b .L_8069437C
.L_80694380:
/* 80694380 0068E9E0  7F C0 07 35 */	extsh. r0, r30
/* 80694384 0068E9E4  40 81 00 0C */	ble .L_80694390
/* 80694388 0068E9E8  7F A3 EB 78 */	mr r3, r29
/* 8069438C 0068E9EC  4B 9F 02 F9 */	bl dtor_80084684
.L_80694390:
/* 80694390 0068E9F0  7F EA FB 78 */	mr r10, r31
/* 80694394 0068E9F4  83 FF 00 2C */	lwz r31, 0x2c(r31)
/* 80694398 0068E9F8  7F A3 EB 78 */	mr r3, r29
/* 8069439C 0068E9FC  83 CA 00 28 */	lwz r30, 0x28(r10)
/* 806943A0 0068EA00  83 AA 00 24 */	lwz r29, 0x24(r10)
/* 806943A4 0068EA04  81 41 00 00 */	lwz r10, 0x0(r1)
/* 806943A8 0068EA08  80 0A 00 04 */	lwz r0, 0x4(r10)
/* 806943AC 0068EA0C  7D 41 53 78 */	mr r1, r10
/* 806943B0 0068EA10  7C 08 03 A6 */	mtlr r0
/* 806943B4 0068EA14  4E 80 00 20 */	blr
.endfn fn_80694328
