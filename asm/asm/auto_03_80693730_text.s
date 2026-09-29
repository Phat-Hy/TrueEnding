.include "macros.inc"
.file "auto_03_80693730_text"

# 0x80693730..0x80693758 | size: 0x28
.text
.balign 4

# .text:0x0 | 0x80693730 | size: 0x14
.fn fn_80693730, global
/* 80693730 0068DD90  28 04 00 FF */	cmplwi r4, 0xff
/* 80693734 0068DD94  7C 83 07 74 */	extsb r3, r4
/* 80693738 0068DD98  4C 81 00 20 */	blelr
/* 8069373C 0068DD9C  7C A3 2B 78 */	mr r3, r5
/* 80693740 0068DDA0  4E 80 00 20 */	blr
.endfn fn_80693730

# .text:0x14 | 0x80693744 | size: 0x14
.fn fn_80693744, global
/* 80693744 0068DDA4  3C A0 80 7C */	lis r5, lbl_807BBE40@ha
/* 80693748 0068DDA8  90 83 00 04 */	stw r4, 0x4(r3)
/* 8069374C 0068DDAC  38 A5 BE 40 */	addi r5, r5, lbl_807BBE40@l
/* 80693750 0068DDB0  90 A3 00 00 */	stw r5, 0x0(r3)
/* 80693754 0068DDB4  4E 80 00 20 */	blr
.endfn fn_80693744
