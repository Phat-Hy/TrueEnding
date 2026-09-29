.include "macros.inc"
.file "auto_fn_802378E0_text"

# 0x802378E0..0x8023793C | size: 0x5C
.text
.balign 4

# .text:0x0 | 0x802378E0 | size: 0x5C
.fn fn_802378E0, global
/* 802378E0 00231F40  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802378E4 00231F44  7C 08 02 A6 */	mflr r0
/* 802378E8 00231F48  38 6D 9C F8 */	li r3, lbl_8087F3B8@sda21
/* 802378EC 00231F4C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802378F0 00231F50  48 45 3E 81 */	bl fn_8068B770
/* 802378F4 00231F54  3C 80 80 69 */	lis r4, fn_8068BC30@ha
/* 802378F8 00231F58  3C A0 80 7D */	lis r5, lbl_807C82D0@ha
/* 802378FC 00231F5C  38 84 BC 30 */	addi r4, r4, fn_8068BC30@l
/* 80237900 00231F60  38 6D 9C F8 */	li r3, lbl_8087F3B8@sda21
/* 80237904 00231F64  38 A5 82 D0 */	addi r5, r5, lbl_807C82D0@l
/* 80237908 00231F68  48 45 DB 19 */	bl __register_global_object
/* 8023790C 00231F6C  38 6D 9C FC */	li r3, lbl_8087F3BC@sda21
/* 80237910 00231F70  48 45 44 51 */	bl fn_8068BD60
/* 80237914 00231F74  3C 80 80 69 */	lis r4, fn_8068C240@ha
/* 80237918 00231F78  3C A0 80 7D */	lis r5, lbl_807C82DC@ha
/* 8023791C 00231F7C  38 84 C2 40 */	addi r4, r4, fn_8068C240@l
/* 80237920 00231F80  38 6D 9C FC */	li r3, lbl_8087F3BC@sda21
/* 80237924 00231F84  38 A5 82 DC */	addi r5, r5, lbl_807C82DC@l
/* 80237928 00231F88  48 45 DA F9 */	bl __register_global_object
/* 8023792C 00231F8C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80237930 00231F90  7C 08 03 A6 */	mtlr r0
/* 80237934 00231F94  38 21 00 10 */	addi r1, r1, 0x10
/* 80237938 00231F98  4E 80 00 20 */	blr
.endfn fn_802378E0

# 0x8072D318..0x8072D31C | size: 0x4
.section .ctors, "a"
.balign 4
	.4byte fn_802378E0
