.include "macros.inc"
.file "auto_03_80690068_text"

# 0x80690068..0x80690094 | size: 0x2C
.text
.balign 4

# .text:0x0 | 0x80690068 | size: 0x10
.fn fn_80690068, global
/* 80690068 0068A6C8  90 A7 00 00 */	stw r5, 0x0(r7)
/* 8069006C 0068A6CC  38 60 00 03 */	li r3, 0x3
/* 80690070 0068A6D0  91 0A 00 00 */	stw r8, 0x0(r10)
/* 80690074 0068A6D4  4E 80 00 20 */	blr
.endfn fn_80690068

# .text:0x10 | 0x80690078 | size: 0x1C
.fn fn_80690078, global
/* 80690078 0068A6D8  80 83 00 08 */	lwz r4, 0x8(r3)
/* 8069007C 0068A6DC  80 03 00 0C */	lwz r0, 0xc(r3)
/* 80690080 0068A6E0  7C 64 00 50 */	subf r3, r4, r0
/* 80690084 0068A6E4  54 60 0F FE */	srwi r0, r3, 31
/* 80690088 0068A6E8  7C 00 1A 14 */	add r0, r0, r3
/* 8069008C 0068A6EC  7C 03 0E 70 */	srawi r3, r0, 1
/* 80690090 0068A6F0  4E 80 00 20 */	blr
.endfn fn_80690078
