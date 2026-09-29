.include "macros.inc"
.file "auto_03_8068BA50_text"

# 0x8068BA50..0x8068BA80 | size: 0x30
.text
.balign 4

# .text:0x0 | 0x8068BA50 | size: 0x8
.fn fn_8068BA50, global
/* 8068BA50 006860B0  7C 83 23 78 */	mr r3, r4
/* 8068BA54 006860B4  4E 80 00 20 */	blr
.endfn fn_8068BA50

# .text:0x8 | 0x8068BA58 | size: 0x4
.fn fn_8068BA58, global
/* 8068BA58 006860B8  4E 80 00 20 */	blr
.endfn fn_8068BA58

# .text:0xC | 0x8068BA5C | size: 0x14
.fn fn_8068BA5C, global
/* 8068BA5C 006860BC  7C 65 1B 78 */	mr r5, r3
/* 8068BA60 006860C0  A0 63 00 30 */	lhz r3, 0x30(r3)
/* 8068BA64 006860C4  7C 60 23 78 */	or r0, r3, r4
/* 8068BA68 006860C8  B0 05 00 30 */	sth r0, 0x30(r5)
/* 8068BA6C 006860CC  4E 80 00 20 */	blr
.endfn fn_8068BA5C

# .text:0x20 | 0x8068BA70 | size: 0x10
.fn fn_8068BA70, global
/* 8068BA70 006860D0  38 00 00 01 */	li r0, 0x1
/* 8068BA74 006860D4  90 83 00 00 */	stw r4, 0x0(r3)
/* 8068BA78 006860D8  98 03 00 04 */	stb r0, 0x4(r3)
/* 8068BA7C 006860DC  4E 80 00 20 */	blr
.endfn fn_8068BA70
