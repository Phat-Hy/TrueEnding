.include "macros.inc"
.file "auto_03_8068D7AC_text"

# 0x8068D7AC..0x8068D7B8 | size: 0xC
.text
.balign 4

# .text:0x0 | 0x8068D7AC | size: 0xC
.fn fn_8068D7AC, global
/* 8068D7AC 00687E0C  90 A7 00 00 */	stw r5, 0x0(r7)
/* 8068D7B0 00687E10  38 60 00 03 */	li r3, 0x3
/* 8068D7B4 00687E14  4E 80 00 20 */	blr
.endfn fn_8068D7AC
