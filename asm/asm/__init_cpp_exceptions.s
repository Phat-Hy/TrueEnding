.include "macros.inc"
.file "__init_cpp_exceptions.cpp"

# 0x80696578..0x806965E8 | size: 0x70
.text
.balign 4

# .text:0x0 | 0x80696578 | size: 0x3C
.fn __init_cpp_exceptions, global
/* 80696578 00690BD8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8069657C 00690BDC  7C 08 02 A6 */	mflr r0
/* 80696580 00690BE0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80696584 00690BE4  80 0D 96 68 */	lwz r0, fragmentID_8087ED28@sda21(r0)
/* 80696588 00690BE8  2C 00 FF FE */	cmpwi r0, -0x2
/* 8069658C 00690BEC  40 82 00 18 */	bne .L_806965A4
/* 80696590 00690BF0  3C 60 80 01 */	lis r3, _eti_init_info@ha
/* 80696594 00690BF4  7C 44 13 78 */	mr r4, r2
/* 80696598 00690BF8  38 63 81 94 */	addi r3, r3, _eti_init_info@l
/* 8069659C 00690BFC  48 00 00 4D */	bl __register_fragment
/* 806965A0 00690C00  90 6D 96 68 */	stw r3, fragmentID_8087ED28@sda21(r0)
.L_806965A4:
/* 806965A4 00690C04  80 01 00 14 */	lwz r0, 0x14(r1)
/* 806965A8 00690C08  7C 08 03 A6 */	mtlr r0
/* 806965AC 00690C0C  38 21 00 10 */	addi r1, r1, 0x10
/* 806965B0 00690C10  4E 80 00 20 */	blr
.endfn __init_cpp_exceptions

# .text:0x3C | 0x806965B4 | size: 0x34
.fn __fini_cpp_exceptions, global
/* 806965B4 00690C14  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 806965B8 00690C18  7C 08 02 A6 */	mflr r0
/* 806965BC 00690C1C  90 01 00 14 */	stw r0, 0x14(r1)
/* 806965C0 00690C20  80 6D 96 68 */	lwz r3, fragmentID_8087ED28@sda21(r0)
/* 806965C4 00690C24  2C 03 FF FE */	cmpwi r3, -0x2
/* 806965C8 00690C28  41 82 00 10 */	beq .L_806965D8
/* 806965CC 00690C2C  48 00 00 69 */	bl __unregister_fragment
/* 806965D0 00690C30  38 00 FF FE */	li r0, -0x2
/* 806965D4 00690C34  90 0D 96 68 */	stw r0, fragmentID_8087ED28@sda21(r0)
.L_806965D8:
/* 806965D8 00690C38  80 01 00 14 */	lwz r0, 0x14(r1)
/* 806965DC 00690C3C  7C 08 03 A6 */	mtlr r0
/* 806965E0 00690C40  38 21 00 10 */	addi r1, r1, 0x10
/* 806965E4 00690C44  4E 80 00 20 */	blr
.endfn __fini_cpp_exceptions

# 0x8072D2A0..0x8072D2A4 | size: 0x4
.section .ctors, "a"
.balign 4

# .ctors:0x0 | 0x8072D2A0 | size: 0x4
.obj __init_cpp_exceptions_reference, global
	.4byte __init_cpp_exceptions
.endobj __init_cpp_exceptions_reference

# 0x8072D440..0x8072D448 | size: 0x8
.section .dtors, "a"
.balign 4

# .dtors:0x0 | 0x8072D440 | size: 0x4
.obj __destroy_global_chain_reference, global
	.4byte __destroy_global_chain
.endobj __destroy_global_chain_reference

# .dtors:0x4 | 0x8072D444 | size: 0x4
.obj __fini_cpp_exceptions_reference, global
	.4byte __fini_cpp_exceptions
.endobj __fini_cpp_exceptions_reference
