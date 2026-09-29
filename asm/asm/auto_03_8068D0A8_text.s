.include "macros.inc"
.file "auto_03_8068D0A8_text"

# 0x8068D0A8..0x8068D0B8 | size: 0x10
.text
.balign 4

# .text:0x0 | 0x8068D0A8 | size: 0x8
.fn fn_8068D0A8, global
/* 8068D0A8 00687708  38 60 00 01 */	li r3, 0x1
/* 8068D0AC 0068770C  4E 80 00 20 */	blr
.endfn fn_8068D0A8

# .text:0x8 | 0x8068D0B0 | size: 0x8
.fn fn_8068D0B0, global
/* 8068D0B0 00687710  38 60 00 01 */	li r3, 0x1
/* 8068D0B4 00687714  4E 80 00 20 */	blr
.endfn fn_8068D0B0
