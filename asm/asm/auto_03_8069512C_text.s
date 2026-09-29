.include "macros.inc"
.file "auto_03_8069512C_text"

# 0x8069512C..0x80695138 | size: 0xC
.text
.balign 4

# .text:0x0 | 0x8069512C | size: 0xC
.fn fn_8069512C, global
/* 8069512C 0068F78C  80 63 00 0C */	lwz r3, 0xc(r3)
/* 80695130 0068F790  38 80 00 01 */	li r4, 0x1
/* 80695134 0068F794  4B FF CD F0 */	b fn_80691F24
.endfn fn_8069512C
