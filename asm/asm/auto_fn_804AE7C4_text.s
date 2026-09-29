.include "macros.inc"
.file "auto_fn_804AE7C4_text"

# 0x804AE7C4..0x804AE820 | size: 0x5C
.text
.balign 4

# .text:0x0 | 0x804AE7C4 | size: 0x5C
.fn fn_804AE7C4, global
/* 804AE7C4 004A8E24  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 804AE7C8 004A8E28  7C 08 02 A6 */	mflr r0
/* 804AE7CC 004A8E2C  38 6D 9E D0 */	li r3, lbl_8087F590@sda21
/* 804AE7D0 004A8E30  90 01 00 14 */	stw r0, 0x14(r1)
/* 804AE7D4 004A8E34  48 1D CF 9D */	bl fn_8068B770
/* 804AE7D8 004A8E38  3C 80 80 69 */	lis r4, fn_8068BC30@ha
/* 804AE7DC 004A8E3C  3C A0 80 7D */	lis r5, lbl_807C8AD0@ha
/* 804AE7E0 004A8E40  38 84 BC 30 */	addi r4, r4, fn_8068BC30@l
/* 804AE7E4 004A8E44  38 6D 9E D0 */	li r3, lbl_8087F590@sda21
/* 804AE7E8 004A8E48  38 A5 8A D0 */	addi r5, r5, lbl_807C8AD0@l
/* 804AE7EC 004A8E4C  48 1E 6C 35 */	bl __register_global_object
/* 804AE7F0 004A8E50  38 6D 9E D4 */	li r3, lbl_8087F594@sda21
/* 804AE7F4 004A8E54  48 1D D5 6D */	bl fn_8068BD60
/* 804AE7F8 004A8E58  3C 80 80 69 */	lis r4, fn_8068C240@ha
/* 804AE7FC 004A8E5C  3C A0 80 7D */	lis r5, lbl_807C8ADC@ha
/* 804AE800 004A8E60  38 84 C2 40 */	addi r4, r4, fn_8068C240@l
/* 804AE804 004A8E64  38 6D 9E D4 */	li r3, lbl_8087F594@sda21
/* 804AE808 004A8E68  38 A5 8A DC */	addi r5, r5, lbl_807C8ADC@l
/* 804AE80C 004A8E6C  48 1E 6C 15 */	bl __register_global_object
/* 804AE810 004A8E70  80 01 00 14 */	lwz r0, 0x14(r1)
/* 804AE814 004A8E74  7C 08 03 A6 */	mtlr r0
/* 804AE818 004A8E78  38 21 00 10 */	addi r1, r1, 0x10
/* 804AE81C 004A8E7C  4E 80 00 20 */	blr
.endfn fn_804AE7C4

# 0x8072D388..0x8072D38C | size: 0x4
.section .ctors, "a"
.balign 4
	.4byte fn_804AE7C4
