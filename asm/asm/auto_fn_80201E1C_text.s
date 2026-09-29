.include "macros.inc"
.file "auto_fn_80201E1C_text"

# 0x80201E1C..0x80201E78 | size: 0x5C
.text
.balign 4

# .text:0x0 | 0x80201E1C | size: 0x5C
.fn fn_80201E1C, global
/* 80201E1C 001FC47C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80201E20 001FC480  7C 08 02 A6 */	mflr r0
/* 80201E24 001FC484  38 6D 9A 90 */	li r3, lbl_8087F150@sda21
/* 80201E28 001FC488  90 01 00 14 */	stw r0, 0x14(r1)
/* 80201E2C 001FC48C  48 48 99 45 */	bl fn_8068B770
/* 80201E30 001FC490  3C 80 80 69 */	lis r4, fn_8068BC30@ha
/* 80201E34 001FC494  3C A0 80 7C */	lis r5, lbl_807C7F80@ha
/* 80201E38 001FC498  38 84 BC 30 */	addi r4, r4, fn_8068BC30@l
/* 80201E3C 001FC49C  38 6D 9A 90 */	li r3, lbl_8087F150@sda21
/* 80201E40 001FC4A0  38 A5 7F 80 */	addi r5, r5, lbl_807C7F80@l
/* 80201E44 001FC4A4  48 49 35 DD */	bl __register_global_object
/* 80201E48 001FC4A8  38 6D 9A 94 */	li r3, lbl_8087F154@sda21
/* 80201E4C 001FC4AC  48 48 9F 15 */	bl fn_8068BD60
/* 80201E50 001FC4B0  3C 80 80 69 */	lis r4, fn_8068C240@ha
/* 80201E54 001FC4B4  3C A0 80 7C */	lis r5, lbl_807C7F8C@ha
/* 80201E58 001FC4B8  38 84 C2 40 */	addi r4, r4, fn_8068C240@l
/* 80201E5C 001FC4BC  38 6D 9A 94 */	li r3, lbl_8087F154@sda21
/* 80201E60 001FC4C0  38 A5 7F 8C */	addi r5, r5, lbl_807C7F8C@l
/* 80201E64 001FC4C4  48 49 35 BD */	bl __register_global_object
/* 80201E68 001FC4C8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80201E6C 001FC4CC  7C 08 03 A6 */	mtlr r0
/* 80201E70 001FC4D0  38 21 00 10 */	addi r1, r1, 0x10
/* 80201E74 001FC4D4  4E 80 00 20 */	blr
.endfn fn_80201E1C

# 0x8072D300..0x8072D304 | size: 0x4
.section .ctors, "a"
.balign 4
	.4byte fn_80201E1C
