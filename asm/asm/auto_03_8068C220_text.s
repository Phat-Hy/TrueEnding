.include "macros.inc"
.file "auto_03_8068C220_text"

# 0x8068C220..0x8068C240 | size: 0x20
.text
.balign 4

# .text:0x0 | 0x8068C220 | size: 0x10
.fn fn_8068C220, global
/* 8068C220 00686880  7C 65 1B 78 */	mr r5, r3
/* 8068C224 00686884  80 63 00 34 */	lwz r3, 0x34(r3)
/* 8068C228 00686888  90 85 00 34 */	stw r4, 0x34(r5)
/* 8068C22C 0068688C  4E 80 00 20 */	blr
.endfn fn_8068C220

# .text:0x10 | 0x8068C230 | size: 0x10
.fn fn_8068C230, global
/* 8068C230 00686890  81 83 00 00 */	lwz r12, 0x0(r3)
/* 8068C234 00686894  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8068C238 00686898  7D 89 03 A6 */	mtctr r12
/* 8068C23C 0068689C  4E 80 04 20 */	bctr
.endfn fn_8068C230
