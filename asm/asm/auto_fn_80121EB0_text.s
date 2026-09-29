.include "macros.inc"
.file "auto_fn_80121EB0_text"

# 0x80121EB0..0x80121F00 | size: 0x50
.text
.balign 4

# .text:0x0 | 0x80121EB0 | size: 0x50
.fn fn_80121EB0, global
/* 80121EB0 0011C510  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80121EB4 0011C514  7C 08 02 A6 */	mflr r0
/* 80121EB8 0011C518  90 01 00 14 */	stw r0, 0x14(r1)
/* 80121EBC 0011C51C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80121EC0 0011C520  3F E0 80 73 */	lis r31, lbl_80737138@ha
/* 80121EC4 0011C524  3B FF 71 38 */	addi r31, r31, lbl_80737138@l
/* 80121EC8 0011C528  38 7F 00 A1 */	addi r3, r31, 0xa1
/* 80121ECC 0011C52C  4B FB A7 E9 */	bl fn_800DC6B4
/* 80121ED0 0011C530  90 6D 99 B8 */	stw r3, lbl_8087F078@sda21(r0)
/* 80121ED4 0011C534  38 7F 00 AA */	addi r3, r31, 0xaa
/* 80121ED8 0011C538  4B FB A7 DD */	bl fn_800DC6B4
/* 80121EDC 0011C53C  90 6D 99 BC */	stw r3, lbl_8087F07C@sda21(r0)
/* 80121EE0 0011C540  38 7F 00 B4 */	addi r3, r31, 0xb4
/* 80121EE4 0011C544  4B FB A7 D1 */	bl fn_800DC6B4
/* 80121EE8 0011C548  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80121EEC 0011C54C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80121EF0 0011C550  90 6D 99 C0 */	stw r3, lbl_8087F080@sda21(r0)
/* 80121EF4 0011C554  7C 08 03 A6 */	mtlr r0
/* 80121EF8 0011C558  38 21 00 10 */	addi r1, r1, 0x10
/* 80121EFC 0011C55C  4E 80 00 20 */	blr
.endfn fn_80121EB0

# 0x8072D2D4..0x8072D2D8 | size: 0x4
.section .ctors, "a"
.balign 4
	.4byte fn_80121EB0
