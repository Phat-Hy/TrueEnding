.include "macros.inc"
.file "auto_03_8068F630_text"

# 0x8068F630..0x8068F658 | size: 0x28
.text
.balign 4

# .text:0x0 | 0x8068F630 | size: 0x28
.fn fn_8068F630, global
/* 8068F630 00689C90  80 83 00 30 */	lwz r4, 0x30(r3)
/* 8068F634 00689C94  88 A3 00 37 */	lbz r5, 0x37(r3)
/* 8068F638 00689C98  2C 04 00 00 */	cmpwi r4, 0x0
/* 8068F63C 00689C9C  40 81 00 14 */	ble .L_8068F650
/* 8068F640 00689CA0  80 63 00 24 */	lwz r3, 0x24(r3)
/* 8068F644 00689CA4  80 03 00 28 */	lwz r0, 0x28(r3)
/* 8068F648 00689CA8  7C 00 23 D6 */	divw r0, r0, r4
/* 8068F64C 00689CAC  7C A5 02 14 */	add r5, r5, r0
.L_8068F650:
/* 8068F650 00689CB0  7C A3 2B 78 */	mr r3, r5
/* 8068F654 00689CB4  4E 80 00 20 */	blr
.endfn fn_8068F630
