.include "macros.inc"
.file "auto_fn_8055A444_text"

# 0x8055A444..0x8055A4A0 | size: 0x5C
.text
.balign 4

# .text:0x0 | 0x8055A444 | size: 0x5C
.fn fn_8055A444, global
/* 8055A444 00554AA4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8055A448 00554AA8  7C 08 02 A6 */	mflr r0
/* 8055A44C 00554AAC  38 6D A2 B8 */	li r3, lbl_8087F978@sda21
/* 8055A450 00554AB0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8055A454 00554AB4  48 13 13 1D */	bl fn_8068B770
/* 8055A458 00554AB8  3C 80 80 69 */	lis r4, fn_8068BC30@ha
/* 8055A45C 00554ABC  3C A0 80 7D */	lis r5, lbl_807C9220@ha
/* 8055A460 00554AC0  38 84 BC 30 */	addi r4, r4, fn_8068BC30@l
/* 8055A464 00554AC4  38 6D A2 B8 */	li r3, lbl_8087F978@sda21
/* 8055A468 00554AC8  38 A5 92 20 */	addi r5, r5, lbl_807C9220@l
/* 8055A46C 00554ACC  48 13 AF B5 */	bl __register_global_object
/* 8055A470 00554AD0  38 6D A2 BC */	li r3, lbl_8087F97C@sda21
/* 8055A474 00554AD4  48 13 18 ED */	bl fn_8068BD60
/* 8055A478 00554AD8  3C 80 80 69 */	lis r4, fn_8068C240@ha
/* 8055A47C 00554ADC  3C A0 80 7D */	lis r5, lbl_807C922C@ha
/* 8055A480 00554AE0  38 84 C2 40 */	addi r4, r4, fn_8068C240@l
/* 8055A484 00554AE4  38 6D A2 BC */	li r3, lbl_8087F97C@sda21
/* 8055A488 00554AE8  38 A5 92 2C */	addi r5, r5, lbl_807C922C@l
/* 8055A48C 00554AEC  48 13 AF 95 */	bl __register_global_object
/* 8055A490 00554AF0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8055A494 00554AF4  7C 08 03 A6 */	mtlr r0
/* 8055A498 00554AF8  38 21 00 10 */	addi r1, r1, 0x10
/* 8055A49C 00554AFC  4E 80 00 20 */	blr
.endfn fn_8055A444

# 0x8072D3D8..0x8072D3DC | size: 0x4
.section .ctors, "a"
.balign 4
	.4byte fn_8055A444
