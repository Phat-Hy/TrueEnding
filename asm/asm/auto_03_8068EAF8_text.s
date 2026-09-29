.include "macros.inc"
.file "auto_03_8068EAF8_text"

# 0x8068EAF8..0x8068EB20 | size: 0x28
.text
.balign 4

# .text:0x0 | 0x8068EAF8 | size: 0x14
.fn fn_8068EAF8, global
/* 8068EAF8 00689158  7C 66 1B 78 */	mr r6, r3
/* 8068EAFC 0068915C  7C 83 23 78 */	mr r3, r4
/* 8068EB00 00689160  80 C6 00 50 */	lwz r6, 0x50(r6)
/* 8068EB04 00689164  38 80 00 01 */	li r4, 0x1
/* 8068EB08 00689168  4B FE EA B8 */	b fn_8067D5C0
.endfn fn_8068EAF8

# .text:0x14 | 0x8068EB0C | size: 0x8
.fn fn_8068EB0C, global
/* 8068EB0C 0068916C  38 60 FF FF */	li r3, -0x1
/* 8068EB10 00689170  4E 80 00 20 */	blr
.endfn fn_8068EB0C

# .text:0x1C | 0x8068EB14 | size: 0xC
.fn fn_8068EB14, global
/* 8068EB14 00689174  38 80 FF FF */	li r4, -0x1
/* 8068EB18 00689178  38 60 FF FF */	li r3, -0x1
/* 8068EB1C 0068917C  4E 80 00 20 */	blr
.endfn fn_8068EB14
