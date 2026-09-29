.include "macros.inc"
.file "auto_fn_8030DA1C_text"

# 0x8030DA1C..0x8030DA20 | size: 0x4
.text
.balign 4

# .text:0x0 | 0x8030DA1C | size: 0x4
.fn fn_8030DA1C, global
/* 8030DA1C 0030807C  4E 80 00 20 */	blr
.endfn fn_8030DA1C

# 0x8072D34C..0x8072D350 | size: 0x4
.section .ctors, "a"
.balign 4
	.4byte fn_8030DA1C
