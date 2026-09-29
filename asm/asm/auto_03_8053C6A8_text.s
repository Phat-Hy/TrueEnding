.include "macros.inc"
.file "auto_03_8053C6A8_text"

# 0x8053C6A8..0x8053C6CC | size: 0x24
.text
.balign 4

# .text:0x0 | 0x8053C6A8 | size: 0x24
.fn fn_8053C6A8, global
/* 8053C6A8 00536D08  3C C0 80 79 */	lis r6, lbl_80793E38@ha
/* 8053C6AC 00536D0C  38 00 00 00 */	li r0, 0x0
/* 8053C6B0 00536D10  38 C6 3E 38 */	addi r6, r6, lbl_80793E38@l
/* 8053C6B4 00536D14  90 03 00 04 */	stw r0, 0x4(r3)
/* 8053C6B8 00536D18  90 C3 00 00 */	stw r6, 0x0(r3)
/* 8053C6BC 00536D1C  90 83 00 08 */	stw r4, 0x8(r3)
/* 8053C6C0 00536D20  90 03 00 10 */	stw r0, 0x10(r3)
/* 8053C6C4 00536D24  90 A3 00 0C */	stw r5, 0xc(r3)
/* 8053C6C8 00536D28  4E 80 00 20 */	blr
.endfn fn_8053C6A8
