.include "macros.inc"
.file "auto_fn_800A291C_text"

# 0x800A291C..0x800A2978 | size: 0x5C
.text
.balign 4

# .text:0x0 | 0x800A291C | size: 0x5C
.fn fn_800A291C, global
/* 800A291C 0009CF7C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800A2920 0009CF80  7C 08 02 A6 */	mflr r0
/* 800A2924 0009CF84  38 6D 98 98 */	li r3, lbl_8087EF58@sda21
/* 800A2928 0009CF88  90 01 00 14 */	stw r0, 0x14(r1)
/* 800A292C 0009CF8C  48 5E 8E 45 */	bl fn_8068B770
/* 800A2930 0009CF90  3C 80 80 69 */	lis r4, fn_8068BC30@ha
/* 800A2934 0009CF94  3C A0 80 7C */	lis r5, lbl_807C73E8@ha
/* 800A2938 0009CF98  38 84 BC 30 */	addi r4, r4, fn_8068BC30@l
/* 800A293C 0009CF9C  38 6D 98 98 */	li r3, lbl_8087EF58@sda21
/* 800A2940 0009CFA0  38 A5 73 E8 */	addi r5, r5, lbl_807C73E8@l
/* 800A2944 0009CFA4  48 5F 2A DD */	bl __register_global_object
/* 800A2948 0009CFA8  38 6D 98 9C */	li r3, lbl_8087EF5C@sda21
/* 800A294C 0009CFAC  48 5E 94 15 */	bl fn_8068BD60
/* 800A2950 0009CFB0  3C 80 80 69 */	lis r4, fn_8068C240@ha
/* 800A2954 0009CFB4  3C A0 80 7C */	lis r5, lbl_807C73F4@ha
/* 800A2958 0009CFB8  38 84 C2 40 */	addi r4, r4, fn_8068C240@l
/* 800A295C 0009CFBC  38 6D 98 9C */	li r3, lbl_8087EF5C@sda21
/* 800A2960 0009CFC0  38 A5 73 F4 */	addi r5, r5, lbl_807C73F4@l
/* 800A2964 0009CFC4  48 5F 2A BD */	bl __register_global_object
/* 800A2968 0009CFC8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800A296C 0009CFCC  7C 08 03 A6 */	mtlr r0
/* 800A2970 0009CFD0  38 21 00 10 */	addi r1, r1, 0x10
/* 800A2974 0009CFD4  4E 80 00 20 */	blr
.endfn fn_800A291C

# 0x8072D2B8..0x8072D2BC | size: 0x4
.section .ctors, "a"
.balign 4
	.4byte fn_800A291C
