.include "macros.inc"
.file "auto_fn_804CD94C_text"

# 0x804CD94C..0x804CD97C | size: 0x30
.text
.balign 4

# .text:0x0 | 0x804CD94C | size: 0x30
.fn fn_804CD94C, global
/* 804CD94C 004C7FAC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 804CD950 004C7FB0  7C 08 02 A6 */	mflr r0
/* 804CD954 004C7FB4  3C 60 80 76 */	lis r3, lbl_80759374@ha
/* 804CD958 004C7FB8  38 63 93 74 */	addi r3, r3, lbl_80759374@l
/* 804CD95C 004C7FBC  90 01 00 14 */	stw r0, 0x14(r1)
/* 804CD960 004C7FC0  38 63 02 5B */	addi r3, r3, 0x25b
/* 804CD964 004C7FC4  4B C0 ED 51 */	bl fn_800DC6B4
/* 804CD968 004C7FC8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 804CD96C 004C7FCC  90 6D 9F 28 */	stw r3, lbl_8087F5E8@sda21(r0)
/* 804CD970 004C7FD0  7C 08 03 A6 */	mtlr r0
/* 804CD974 004C7FD4  38 21 00 10 */	addi r1, r1, 0x10
/* 804CD978 004C7FD8  4E 80 00 20 */	blr
.endfn fn_804CD94C

# 0x8072D39C..0x8072D3A0 | size: 0x4
.section .ctors, "a"
.balign 4
	.4byte fn_804CD94C
