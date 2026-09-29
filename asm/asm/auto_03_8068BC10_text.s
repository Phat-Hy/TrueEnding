.include "macros.inc"
.file "auto_03_8068BC10_text"

# 0x8068BC10..0x8068BC30 | size: 0x20
.text
.balign 4

# .text:0x0 | 0x8068BC10 | size: 0x10
.fn fn_8068BC10, global
/* 8068BC10 00686270  7C 65 1B 78 */	mr r5, r3
/* 8068BC14 00686274  80 63 00 34 */	lwz r3, 0x34(r3)
/* 8068BC18 00686278  90 85 00 34 */	stw r4, 0x34(r5)
/* 8068BC1C 0068627C  4E 80 00 20 */	blr
.endfn fn_8068BC10

# .text:0x10 | 0x8068BC20 | size: 0x10
.fn fn_8068BC20, global
/* 8068BC20 00686280  81 83 00 00 */	lwz r12, 0x0(r3)
/* 8068BC24 00686284  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8068BC28 00686288  7D 89 03 A6 */	mtctr r12
/* 8068BC2C 0068628C  4E 80 04 20 */	bctr
.endfn fn_8068BC20
