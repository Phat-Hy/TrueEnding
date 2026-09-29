.include "macros.inc"
.file "auto_03_8068EBA8_text"

# 0x8068EBA8..0x8068EBF8 | size: 0x50
.text
.balign 4

# .text:0x0 | 0x8068EBA8 | size: 0x14
.fn fn_8068EBA8, global
/* 8068EBA8 00689208  7C 66 1B 78 */	mr r6, r3
/* 8068EBAC 0068920C  7C 83 23 78 */	mr r3, r4
/* 8068EBB0 00689210  80 C6 00 50 */	lwz r6, 0x50(r6)
/* 8068EBB4 00689214  38 80 00 01 */	li r4, 0x1
/* 8068EBB8 00689218  4B FE EA 08 */	b fn_8067D5C0
.endfn fn_8068EBA8

# .text:0x14 | 0x8068EBBC | size: 0x8
.fn fn_8068EBBC, global
/* 8068EBBC 0068921C  38 60 FF FF */	li r3, -0x1
/* 8068EBC0 00689220  4E 80 00 20 */	blr
.endfn fn_8068EBBC

# .text:0x1C | 0x8068EBC4 | size: 0xC
.fn fn_8068EBC4, global
/* 8068EBC4 00689224  38 80 FF FF */	li r4, -0x1
/* 8068EBC8 00689228  38 60 FF FF */	li r3, -0x1
/* 8068EBCC 0068922C  4E 80 00 20 */	blr
.endfn fn_8068EBC4

# .text:0x28 | 0x8068EBD0 | size: 0x28
.fn fn_8068EBD0, global
/* 8068EBD0 00689230  80 83 00 30 */	lwz r4, 0x30(r3)
/* 8068EBD4 00689234  88 A3 00 38 */	lbz r5, 0x38(r3)
/* 8068EBD8 00689238  2C 04 00 00 */	cmpwi r4, 0x0
/* 8068EBDC 0068923C  40 81 00 14 */	ble .L_8068EBF0
/* 8068EBE0 00689240  80 63 00 24 */	lwz r3, 0x24(r3)
/* 8068EBE4 00689244  80 03 00 28 */	lwz r0, 0x28(r3)
/* 8068EBE8 00689248  7C 00 23 D6 */	divw r0, r0, r4
/* 8068EBEC 0068924C  7C A5 02 14 */	add r5, r5, r0
.L_8068EBF0:
/* 8068EBF0 00689250  7C A3 2B 78 */	mr r3, r5
/* 8068EBF4 00689254  4E 80 00 20 */	blr
.endfn fn_8068EBD0
