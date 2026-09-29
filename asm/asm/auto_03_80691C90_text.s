.include "macros.inc"
.file "auto_03_80691C90_text"

# 0x80691C90..0x80691C9C | size: 0xC
.text
.balign 4

# .text:0x0 | 0x80691C90 | size: 0xC
.fn fn_80691C90, global
/* 80691C90 0068C2F0  3C 60 00 01 */	lis r3, 0x1
/* 80691C94 0068C2F4  38 63 FF FF */	subi r3, r3, 0x1
/* 80691C98 0068C2F8  4E 80 00 20 */	blr
.endfn fn_80691C90
