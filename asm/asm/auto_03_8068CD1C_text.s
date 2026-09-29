.include "macros.inc"
.file "auto_03_8068CD1C_text"

# 0x8068CD1C..0x8068CD2C | size: 0x10
.text
.balign 4

# .text:0x0 | 0x8068CD1C | size: 0x8
.fn fn_8068CD1C, global
/* 8068CD1C 0068737C  38 60 00 01 */	li r3, 0x1
/* 8068CD20 00687380  4E 80 00 20 */	blr
.endfn fn_8068CD1C

# .text:0x8 | 0x8068CD24 | size: 0x8
.fn fn_8068CD24, global
/* 8068CD24 00687384  38 60 00 02 */	li r3, 0x2
/* 8068CD28 00687388  4E 80 00 20 */	blr
.endfn fn_8068CD24
