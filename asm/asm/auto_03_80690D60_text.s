.include "macros.inc"
.file "auto_03_80690D60_text"

# 0x80690D60..0x80690D70 | size: 0x10
.text
.balign 4

# .text:0x0 | 0x80690D60 | size: 0x10
.fn fn_80690D60, global
/* 80690D60 0068B3C0  80 83 00 08 */	lwz r4, 0x8(r3)
/* 80690D64 0068B3C4  80 03 00 0C */	lwz r0, 0xc(r3)
/* 80690D68 0068B3C8  7C 64 00 50 */	subf r3, r4, r0
/* 80690D6C 0068B3CC  4E 80 00 20 */	blr
.endfn fn_80690D60
