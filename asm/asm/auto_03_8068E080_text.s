.include "macros.inc"
.file "auto_03_8068E080_text"

# 0x8068E080..0x8068E09C | size: 0x1C
.text
.balign 4

# .text:0x0 | 0x8068E080 | size: 0x10
.fn fn_8068E080, global
/* 8068E080 006886E0  90 A7 00 00 */	stw r5, 0x0(r7)
/* 8068E084 006886E4  38 60 00 03 */	li r3, 0x3
/* 8068E088 006886E8  91 0A 00 00 */	stw r8, 0x0(r10)
/* 8068E08C 006886EC  4E 80 00 20 */	blr
.endfn fn_8068E080

# .text:0x10 | 0x8068E090 | size: 0xC
.fn fn_8068E090, global
/* 8068E090 006886F0  90 A7 00 00 */	stw r5, 0x0(r7)
/* 8068E094 006886F4  38 60 00 03 */	li r3, 0x3
/* 8068E098 006886F8  4E 80 00 20 */	blr
.endfn fn_8068E090
