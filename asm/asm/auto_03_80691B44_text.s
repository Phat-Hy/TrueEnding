.include "macros.inc"
.file "auto_03_80691B44_text"

# 0x80691B44..0x80691B80 | size: 0x3C
.text
.balign 4

# .text:0x0 | 0x80691B44 | size: 0x4
.fn fn_80691B44, global
/* 80691B44 0068C1A4  4E 80 00 20 */	blr
.endfn fn_80691B44

# .text:0x4 | 0x80691B48 | size: 0x18
.fn fn_80691B48, global
/* 80691B48 0068C1A8  38 80 FF FF */	li r4, -0x1
/* 80691B4C 0068C1AC  38 00 00 00 */	li r0, 0x0
/* 80691B50 0068C1B0  90 83 00 04 */	stw r4, 0x4(r3)
/* 80691B54 0068C1B4  90 83 00 00 */	stw r4, 0x0(r3)
/* 80691B58 0068C1B8  90 03 00 08 */	stw r0, 0x8(r3)
/* 80691B5C 0068C1BC  4E 80 00 20 */	blr
.endfn fn_80691B48

# .text:0x1C | 0x80691B60 | size: 0x18
.fn fn_80691B60, global
/* 80691B60 0068C1C0  38 80 FF FF */	li r4, -0x1
/* 80691B64 0068C1C4  38 00 00 00 */	li r0, 0x0
/* 80691B68 0068C1C8  90 83 00 04 */	stw r4, 0x4(r3)
/* 80691B6C 0068C1CC  90 83 00 00 */	stw r4, 0x0(r3)
/* 80691B70 0068C1D0  90 03 00 08 */	stw r0, 0x8(r3)
/* 80691B74 0068C1D4  4E 80 00 20 */	blr
.endfn fn_80691B60

# .text:0x34 | 0x80691B78 | size: 0x8
.fn fn_80691B78, global
/* 80691B78 0068C1D8  38 60 00 00 */	li r3, 0x0
/* 80691B7C 0068C1DC  4E 80 00 20 */	blr
.endfn fn_80691B78
