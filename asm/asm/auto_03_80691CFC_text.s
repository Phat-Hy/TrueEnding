.include "macros.inc"
.file "auto_03_80691CFC_text"

# 0x80691CFC..0x80691D08 | size: 0xC
.text
.balign 4

# .text:0x0 | 0x80691CFC | size: 0xC
.fn fn_80691CFC, global
/* 80691CFC 0068C35C  3C 60 00 01 */	lis r3, 0x1
/* 80691D00 0068C360  38 63 FF FF */	subi r3, r3, 0x1
/* 80691D04 0068C364  4E 80 00 20 */	blr
.endfn fn_80691CFC
