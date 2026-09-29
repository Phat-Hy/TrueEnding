.include "macros.inc"
.file "auto_fn_8003E688_text"

# 0x8003E688..0x8003E6B8 | size: 0x30
.text
.balign 4

# .text:0x0 | 0x8003E688 | size: 0x30
.fn fn_8003E688, global
/* 8003E688 00038CE8  3C 60 80 7C */	lis r3, lbl_807C6B84@ha
/* 8003E68C 00038CEC  3C 80 80 04 */	lis r4, fn_8003E6B8@ha
/* 8003E690 00038CF0  38 63 6B 84 */	addi r3, r3, lbl_807C6B84@l
/* 8003E694 00038CF4  38 C0 00 00 */	li r6, 0x0
/* 8003E698 00038CF8  38 03 00 04 */	addi r0, r3, 0x4
/* 8003E69C 00038CFC  3C A0 80 7C */	lis r5, lbl_807C6B78@ha
/* 8003E6A0 00038D00  90 C3 00 00 */	stw r6, 0x0(r3)
/* 8003E6A4 00038D04  38 84 E6 B8 */	addi r4, r4, fn_8003E6B8@l
/* 8003E6A8 00038D08  38 A5 6B 78 */	addi r5, r5, lbl_807C6B78@l
/* 8003E6AC 00038D0C  90 C3 00 04 */	stw r6, 0x4(r3)
/* 8003E6B0 00038D10  90 03 00 08 */	stw r0, 0x8(r3)
/* 8003E6B4 00038D14  48 65 6D 6C */	b __register_global_object
.endfn fn_8003E688

# 0x8072D2A8..0x8072D2AC | size: 0x4
.section .ctors, "a"
.balign 4
	.4byte fn_8003E688
