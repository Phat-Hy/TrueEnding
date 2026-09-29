.include "macros.inc"
.file "auto_03_8068EA10_text"

# 0x8068EA10..0x8068EA70 | size: 0x60
.text
.balign 4

# .text:0x0 | 0x8068EA10 | size: 0x28
.fn fn_8068EA10, global
/* 8068EA10 00689070  80 A4 00 20 */	lwz r5, 0x20(r4)
/* 8068EA14 00689074  80 04 00 1C */	lwz r0, 0x1c(r4)
/* 8068EA18 00689078  2C 05 00 00 */	cmpwi r5, 0x0
/* 8068EA1C 0068907C  90 03 00 00 */	stw r0, 0x0(r3)
/* 8068EA20 00689080  90 A3 00 04 */	stw r5, 0x4(r3)
/* 8068EA24 00689084  4D 82 00 20 */	beqlr
/* 8068EA28 00689088  80 65 00 04 */	lwz r3, 0x4(r5)
/* 8068EA2C 0068908C  38 03 00 01 */	addi r0, r3, 0x1
/* 8068EA30 00689090  90 05 00 04 */	stw r0, 0x4(r5)
/* 8068EA34 00689094  4E 80 00 20 */	blr
.endfn fn_8068EA10

# .text:0x28 | 0x8068EA38 | size: 0x8
.fn fn_8068EA38, global
/* 8068EA38 00689098  38 60 00 00 */	li r3, 0x0
/* 8068EA3C 0068909C  4E 80 00 20 */	blr
.endfn fn_8068EA38

# .text:0x30 | 0x8068EA40 | size: 0x28
.fn fn_8068EA40, global
/* 8068EA40 006890A0  80 A4 00 20 */	lwz r5, 0x20(r4)
/* 8068EA44 006890A4  80 04 00 1C */	lwz r0, 0x1c(r4)
/* 8068EA48 006890A8  2C 05 00 00 */	cmpwi r5, 0x0
/* 8068EA4C 006890AC  90 03 00 00 */	stw r0, 0x0(r3)
/* 8068EA50 006890B0  90 A3 00 04 */	stw r5, 0x4(r3)
/* 8068EA54 006890B4  4D 82 00 20 */	beqlr
/* 8068EA58 006890B8  80 65 00 04 */	lwz r3, 0x4(r5)
/* 8068EA5C 006890BC  38 03 00 01 */	addi r0, r3, 0x1
/* 8068EA60 006890C0  90 05 00 04 */	stw r0, 0x4(r5)
/* 8068EA64 006890C4  4E 80 00 20 */	blr
.endfn fn_8068EA40

# .text:0x58 | 0x8068EA68 | size: 0x8
.fn fn_8068EA68, global
/* 8068EA68 006890C8  7C 83 07 74 */	extsb r3, r4
/* 8068EA6C 006890CC  4E 80 00 20 */	blr
.endfn fn_8068EA68
