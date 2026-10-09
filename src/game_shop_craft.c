#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void fn_80084320(void);
extern void fn_8016E970(void);
extern void fn_801978C0(void);
extern void fn_801980B4(void);
extern void fn_80198528(void);
extern void fn_80198C08(void);
extern void fn_80199348(void);
extern void fn_80199788(void);
extern void fn_8019B29C(void);
extern void fn_8019BD48(void);
extern void fn_8019BE9C(void);
extern void fn_80695AD0(void);

/* External data declarations */
extern u8 lbl_80737A9C[];
extern u8 lbl_80766768[];
extern u8 lbl_8077A720[];

/* Small data declarations */

/* Function declarations */
void fn_8015AF40(void);
void fn_8015B238(void);
void fn_8015B520(void);
void fn_8015B808(void);
void fn_8015BAF0(void);
void fn_8015BDD8(void);
void fn_8015C0C0(void);
void fn_8015C3A8(void);
void fn_8015C6A0(void);

asm void fn_8015AF40(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    lis r5, lbl_80737A9C@ha
    li r7, 0x0
    stw r0, 0x64(r1)
    addi r5, r5, lbl_80737A9C@l
    addi r5, r5, 0x24
    stw r31, 0x5c(r1)
    lis r31, lbl_8077A720@ha
    mr r6, r5
    stw r30, 0x58(r1)
    addi r31, r31, lbl_8077A720@l
    stw r29, 0x54(r1)
    mr r29, r3
    li r3, 0x10
    stw r28, 0x50(r1)
    mr r28, r4
    li r4, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_8015AF40_00000068
    mr r4, r29
    mr r5, r28
    bl fn_801978C0
    mr r30, r3
lbl_fn_8015AF40_00000068:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8015AF40_000000F8
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8015AF40_000000A0
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_8015AF40_000000BC
lbl_fn_8015AF40_000000A0:
    addi r3, r31, 0xc78
    lwz r5, 0xc78(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
lbl_fn_8015AF40_000000BC:
    lwz r5, 0x2c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8015AF40_000000F8
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8015AF40_000000F8:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_8015AF40_000002AC
    cmpwi r0, 0x8
    beq lbl_fn_8015AF40_00000110
    stw r0, 0x564(r29)
lbl_fn_8015AF40_00000110:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8015AF40_000002AC
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8015AF40_00000148
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x38(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
    b lbl_fn_8015AF40_00000164
lbl_fn_8015AF40_00000148:
    addi r3, r31, 0xc84
    lwz r5, 0xc84(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
lbl_fn_8015AF40_00000164:
    lwz r5, 0x38(r1)
    addi r3, r1, 0x20
    lwz r4, 0x3c(r1)
    lwz r0, 0x40(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8015AF40_000001A0
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8015AF40_000001A0:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_8015AF40_0000027C
    cmpwi r0, 0x8
    beq lbl_fn_8015AF40_000001B8
    stw r0, 0x564(r29)
lbl_fn_8015AF40_000001B8:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8015AF40_0000027C
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8015AF40_000001F0
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x44(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    b lbl_fn_8015AF40_0000020C
lbl_fn_8015AF40_000001F0:
    addi r3, r31, 0xc90
    lwz r5, 0xc90(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
lbl_fn_8015AF40_0000020C:
    lwz r5, 0x44(r1)
    addi r3, r1, 0x14
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8015AF40_00000248
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8015AF40_00000248:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_8015AF40_0000027C
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8015AF40_0000027C:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_8015AF40_000002AC
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8015AF40_000002AC:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_8015AF40_000002D8
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8015AF40_000002D8:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    lwz r28, 0x50(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_8015B238(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    lis r4, lbl_80737A9C@ha
    li r7, 0x0
    stw r0, 0x64(r1)
    addi r4, r4, lbl_80737A9C@l
    addi r5, r4, 0x24
    stw r31, 0x5c(r1)
    lis r31, lbl_8077A720@ha
    addi r31, r31, lbl_8077A720@l
    mr r6, r5
    stw r30, 0x58(r1)
    li r4, 0x0
    stw r29, 0x54(r1)
    mr r29, r3
    li r3, 0x8
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_8015B238_00000354
    mr r4, r29
    bl fn_801980B4
    mr r30, r3
lbl_fn_8015B238_00000354:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8015B238_000003E4
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8015B238_0000038C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_8015B238_000003A8
lbl_fn_8015B238_0000038C:
    addi r3, r31, 0xc9c
    lwz r5, 0xc9c(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
lbl_fn_8015B238_000003A8:
    lwz r5, 0x2c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8015B238_000003E4
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8015B238_000003E4:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_8015B238_00000598
    cmpwi r0, 0x8
    beq lbl_fn_8015B238_000003FC
    stw r0, 0x564(r29)
lbl_fn_8015B238_000003FC:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8015B238_00000598
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8015B238_00000434
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x38(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
    b lbl_fn_8015B238_00000450
lbl_fn_8015B238_00000434:
    addi r3, r31, 0xca8
    lwz r5, 0xca8(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
lbl_fn_8015B238_00000450:
    lwz r5, 0x38(r1)
    addi r3, r1, 0x20
    lwz r4, 0x3c(r1)
    lwz r0, 0x40(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8015B238_0000048C
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8015B238_0000048C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_8015B238_00000568
    cmpwi r0, 0x8
    beq lbl_fn_8015B238_000004A4
    stw r0, 0x564(r29)
lbl_fn_8015B238_000004A4:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8015B238_00000568
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8015B238_000004DC
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x44(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    b lbl_fn_8015B238_000004F8
lbl_fn_8015B238_000004DC:
    addi r3, r31, 0xcb4
    lwz r5, 0xcb4(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
lbl_fn_8015B238_000004F8:
    lwz r5, 0x44(r1)
    addi r3, r1, 0x14
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8015B238_00000534
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8015B238_00000534:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_8015B238_00000568
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8015B238_00000568:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_8015B238_00000598
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8015B238_00000598:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_8015B238_000005C4
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8015B238_000005C4:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_8015B520(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    lis r4, lbl_80737A9C@ha
    li r7, 0x0
    stw r0, 0x64(r1)
    addi r4, r4, lbl_80737A9C@l
    addi r5, r4, 0x24
    stw r31, 0x5c(r1)
    lis r31, lbl_8077A720@ha
    addi r31, r31, lbl_8077A720@l
    mr r6, r5
    stw r30, 0x58(r1)
    li r4, 0x0
    stw r29, 0x54(r1)
    mr r29, r3
    li r3, 0x8
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_8015B520_0000063C
    mr r4, r29
    bl fn_80198528
    mr r30, r3
lbl_fn_8015B520_0000063C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8015B520_000006CC
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8015B520_00000674
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_8015B520_00000690
lbl_fn_8015B520_00000674:
    addi r3, r31, 0xcc0
    lwz r5, 0xcc0(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
lbl_fn_8015B520_00000690:
    lwz r5, 0x2c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8015B520_000006CC
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8015B520_000006CC:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_8015B520_00000880
    cmpwi r0, 0x8
    beq lbl_fn_8015B520_000006E4
    stw r0, 0x564(r29)
lbl_fn_8015B520_000006E4:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8015B520_00000880
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8015B520_0000071C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x38(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
    b lbl_fn_8015B520_00000738
lbl_fn_8015B520_0000071C:
    addi r3, r31, 0xccc
    lwz r5, 0xccc(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
lbl_fn_8015B520_00000738:
    lwz r5, 0x38(r1)
    addi r3, r1, 0x20
    lwz r4, 0x3c(r1)
    lwz r0, 0x40(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8015B520_00000774
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8015B520_00000774:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_8015B520_00000850
    cmpwi r0, 0x8
    beq lbl_fn_8015B520_0000078C
    stw r0, 0x564(r29)
lbl_fn_8015B520_0000078C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8015B520_00000850
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8015B520_000007C4
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x44(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    b lbl_fn_8015B520_000007E0
lbl_fn_8015B520_000007C4:
    addi r3, r31, 0xcd8
    lwz r5, 0xcd8(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
lbl_fn_8015B520_000007E0:
    lwz r5, 0x44(r1)
    addi r3, r1, 0x14
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8015B520_0000081C
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8015B520_0000081C:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_8015B520_00000850
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8015B520_00000850:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_8015B520_00000880
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8015B520_00000880:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_8015B520_000008AC
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8015B520_000008AC:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_8015B808(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    lis r6, lbl_80737A9C@ha
    li r7, 0x0
    stw r0, 0x74(r1)
    addi r6, r6, lbl_80737A9C@l
    stmw r27, 0x5c(r1)
    lis r31, lbl_8077A720@ha
    mr r28, r5
    addi r5, r6, 0x24
    mr r29, r3
    mr r27, r4
    addi r31, r31, lbl_8077A720@l
    mr r6, r5
    li r3, 0x30
    li r4, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_8015B808_0000092C
    mr r4, r29
    mr r5, r27
    mr r6, r28
    bl fn_80198C08
    mr r30, r3
lbl_fn_8015B808_0000092C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8015B808_000009BC
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8015B808_00000964
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_8015B808_00000980
lbl_fn_8015B808_00000964:
    addi r3, r31, 0xce4
    lwz r5, 0xce4(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
lbl_fn_8015B808_00000980:
    lwz r5, 0x2c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8015B808_000009BC
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8015B808_000009BC:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_8015B808_00000B70
    cmpwi r0, 0x8
    beq lbl_fn_8015B808_000009D4
    stw r0, 0x564(r29)
lbl_fn_8015B808_000009D4:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8015B808_00000B70
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8015B808_00000A0C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x38(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
    b lbl_fn_8015B808_00000A28
lbl_fn_8015B808_00000A0C:
    addi r3, r31, 0xcf0
    lwz r5, 0xcf0(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
lbl_fn_8015B808_00000A28:
    lwz r5, 0x38(r1)
    addi r3, r1, 0x20
    lwz r4, 0x3c(r1)
    lwz r0, 0x40(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8015B808_00000A64
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8015B808_00000A64:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_8015B808_00000B40
    cmpwi r0, 0x8
    beq lbl_fn_8015B808_00000A7C
    stw r0, 0x564(r29)
lbl_fn_8015B808_00000A7C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8015B808_00000B40
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8015B808_00000AB4
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x44(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    b lbl_fn_8015B808_00000AD0
lbl_fn_8015B808_00000AB4:
    addi r3, r31, 0xcfc
    lwz r5, 0xcfc(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
lbl_fn_8015B808_00000AD0:
    lwz r5, 0x44(r1)
    addi r3, r1, 0x14
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8015B808_00000B0C
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8015B808_00000B0C:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_8015B808_00000B40
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8015B808_00000B40:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_8015B808_00000B70
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8015B808_00000B70:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_8015B808_00000B9C
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8015B808_00000B9C:
    lmw r27, 0x5c(r1)
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_8015BAF0(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    lis r6, lbl_80737A9C@ha
    li r7, 0x0
    stw r0, 0x74(r1)
    addi r6, r6, lbl_80737A9C@l
    stmw r27, 0x5c(r1)
    lis r31, lbl_8077A720@ha
    mr r28, r5
    addi r5, r6, 0x24
    mr r29, r3
    mr r27, r4
    addi r31, r31, lbl_8077A720@l
    mr r6, r5
    li r3, 0x10
    li r4, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_8015BAF0_00000C14
    mr r4, r29
    mr r5, r27
    mr r6, r28
    bl fn_80199348
    mr r30, r3
lbl_fn_8015BAF0_00000C14:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8015BAF0_00000CA4
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8015BAF0_00000C4C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_8015BAF0_00000C68
lbl_fn_8015BAF0_00000C4C:
    addi r3, r31, 0xd08
    lwz r5, 0xd08(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
lbl_fn_8015BAF0_00000C68:
    lwz r5, 0x2c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8015BAF0_00000CA4
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8015BAF0_00000CA4:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_8015BAF0_00000E58
    cmpwi r0, 0x8
    beq lbl_fn_8015BAF0_00000CBC
    stw r0, 0x564(r29)
lbl_fn_8015BAF0_00000CBC:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8015BAF0_00000E58
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8015BAF0_00000CF4
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x38(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
    b lbl_fn_8015BAF0_00000D10
lbl_fn_8015BAF0_00000CF4:
    addi r3, r31, 0xd14
    lwz r5, 0xd14(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
lbl_fn_8015BAF0_00000D10:
    lwz r5, 0x38(r1)
    addi r3, r1, 0x20
    lwz r4, 0x3c(r1)
    lwz r0, 0x40(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8015BAF0_00000D4C
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8015BAF0_00000D4C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_8015BAF0_00000E28
    cmpwi r0, 0x8
    beq lbl_fn_8015BAF0_00000D64
    stw r0, 0x564(r29)
lbl_fn_8015BAF0_00000D64:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8015BAF0_00000E28
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8015BAF0_00000D9C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x44(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    b lbl_fn_8015BAF0_00000DB8
lbl_fn_8015BAF0_00000D9C:
    addi r3, r31, 0xd20
    lwz r5, 0xd20(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
lbl_fn_8015BAF0_00000DB8:
    lwz r5, 0x44(r1)
    addi r3, r1, 0x14
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8015BAF0_00000DF4
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8015BAF0_00000DF4:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_8015BAF0_00000E28
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8015BAF0_00000E28:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_8015BAF0_00000E58
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8015BAF0_00000E58:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_8015BAF0_00000E84
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8015BAF0_00000E84:
    lmw r27, 0x5c(r1)
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_8015BDD8(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    lis r6, lbl_80737A9C@ha
    li r7, 0x0
    stw r0, 0x74(r1)
    addi r6, r6, lbl_80737A9C@l
    stmw r27, 0x5c(r1)
    lis r31, lbl_8077A720@ha
    mr r28, r5
    addi r5, r6, 0x24
    mr r29, r3
    mr r27, r4
    addi r31, r31, lbl_8077A720@l
    mr r6, r5
    li r3, 0x18
    li r4, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_8015BDD8_00000EFC
    mr r4, r29
    mr r5, r27
    mr r6, r28
    bl fn_80199788
    mr r30, r3
lbl_fn_8015BDD8_00000EFC:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8015BDD8_00000F8C
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8015BDD8_00000F34
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_8015BDD8_00000F50
lbl_fn_8015BDD8_00000F34:
    addi r3, r31, 0xd2c
    lwz r5, 0xd2c(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
lbl_fn_8015BDD8_00000F50:
    lwz r5, 0x2c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8015BDD8_00000F8C
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8015BDD8_00000F8C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_8015BDD8_00001140
    cmpwi r0, 0x8
    beq lbl_fn_8015BDD8_00000FA4
    stw r0, 0x564(r29)
lbl_fn_8015BDD8_00000FA4:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8015BDD8_00001140
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8015BDD8_00000FDC
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x38(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
    b lbl_fn_8015BDD8_00000FF8
lbl_fn_8015BDD8_00000FDC:
    addi r3, r31, 0xd38
    lwz r5, 0xd38(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
lbl_fn_8015BDD8_00000FF8:
    lwz r5, 0x38(r1)
    addi r3, r1, 0x20
    lwz r4, 0x3c(r1)
    lwz r0, 0x40(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8015BDD8_00001034
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8015BDD8_00001034:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_8015BDD8_00001110
    cmpwi r0, 0x8
    beq lbl_fn_8015BDD8_0000104C
    stw r0, 0x564(r29)
lbl_fn_8015BDD8_0000104C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8015BDD8_00001110
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8015BDD8_00001084
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x44(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    b lbl_fn_8015BDD8_000010A0
lbl_fn_8015BDD8_00001084:
    addi r3, r31, 0xd44
    lwz r5, 0xd44(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
lbl_fn_8015BDD8_000010A0:
    lwz r5, 0x44(r1)
    addi r3, r1, 0x14
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8015BDD8_000010DC
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8015BDD8_000010DC:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_8015BDD8_00001110
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8015BDD8_00001110:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_8015BDD8_00001140
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8015BDD8_00001140:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_8015BDD8_0000116C
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8015BDD8_0000116C:
    lmw r27, 0x5c(r1)
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_8015C0C0(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    lis r6, lbl_80737A9C@ha
    li r7, 0x0
    stw r0, 0x74(r1)
    addi r6, r6, lbl_80737A9C@l
    stmw r27, 0x5c(r1)
    lis r31, lbl_8077A720@ha
    mr r28, r5
    addi r5, r6, 0x24
    mr r29, r3
    mr r27, r4
    addi r31, r31, lbl_8077A720@l
    mr r6, r5
    li r3, 0x28
    li r4, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_8015C0C0_000011E4
    mr r4, r29
    mr r5, r27
    mr r6, r28
    bl fn_8019B29C
    mr r30, r3
lbl_fn_8015C0C0_000011E4:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8015C0C0_00001274
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8015C0C0_0000121C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_8015C0C0_00001238
lbl_fn_8015C0C0_0000121C:
    addi r3, r31, 0xd50
    lwz r5, 0xd50(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
lbl_fn_8015C0C0_00001238:
    lwz r5, 0x2c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8015C0C0_00001274
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8015C0C0_00001274:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_8015C0C0_00001428
    cmpwi r0, 0x8
    beq lbl_fn_8015C0C0_0000128C
    stw r0, 0x564(r29)
lbl_fn_8015C0C0_0000128C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8015C0C0_00001428
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8015C0C0_000012C4
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x38(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
    b lbl_fn_8015C0C0_000012E0
lbl_fn_8015C0C0_000012C4:
    addi r3, r31, 0xd5c
    lwz r5, 0xd5c(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
lbl_fn_8015C0C0_000012E0:
    lwz r5, 0x38(r1)
    addi r3, r1, 0x20
    lwz r4, 0x3c(r1)
    lwz r0, 0x40(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8015C0C0_0000131C
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8015C0C0_0000131C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_8015C0C0_000013F8
    cmpwi r0, 0x8
    beq lbl_fn_8015C0C0_00001334
    stw r0, 0x564(r29)
lbl_fn_8015C0C0_00001334:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8015C0C0_000013F8
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8015C0C0_0000136C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x44(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    b lbl_fn_8015C0C0_00001388
lbl_fn_8015C0C0_0000136C:
    addi r3, r31, 0xd68
    lwz r5, 0xd68(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
lbl_fn_8015C0C0_00001388:
    lwz r5, 0x44(r1)
    addi r3, r1, 0x14
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8015C0C0_000013C4
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8015C0C0_000013C4:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_8015C0C0_000013F8
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8015C0C0_000013F8:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_8015C0C0_00001428
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8015C0C0_00001428:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_8015C0C0_00001454
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8015C0C0_00001454:
    lmw r27, 0x5c(r1)
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_8015C3A8(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    lis r5, lbl_80737A9C@ha
    li r7, 0x0
    stw r0, 0x64(r1)
    addi r5, r5, lbl_80737A9C@l
    addi r5, r5, 0x24
    stw r31, 0x5c(r1)
    lis r31, lbl_8077A720@ha
    mr r6, r5
    stw r30, 0x58(r1)
    addi r31, r31, lbl_8077A720@l
    stw r29, 0x54(r1)
    mr r29, r3
    li r3, 0xc
    stw r28, 0x50(r1)
    mr r28, r4
    li r4, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_8015C3A8_000014D0
    mr r4, r29
    mr r5, r28
    bl fn_8019BD48
    mr r30, r3
lbl_fn_8015C3A8_000014D0:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8015C3A8_00001560
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8015C3A8_00001508
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_8015C3A8_00001524
lbl_fn_8015C3A8_00001508:
    addi r3, r31, 0xd74
    lwz r5, 0xd74(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
lbl_fn_8015C3A8_00001524:
    lwz r5, 0x2c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8015C3A8_00001560
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8015C3A8_00001560:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_8015C3A8_00001714
    cmpwi r0, 0x8
    beq lbl_fn_8015C3A8_00001578
    stw r0, 0x564(r29)
lbl_fn_8015C3A8_00001578:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8015C3A8_00001714
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8015C3A8_000015B0
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x38(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
    b lbl_fn_8015C3A8_000015CC
lbl_fn_8015C3A8_000015B0:
    addi r3, r31, 0xd80
    lwz r5, 0xd80(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
lbl_fn_8015C3A8_000015CC:
    lwz r5, 0x38(r1)
    addi r3, r1, 0x20
    lwz r4, 0x3c(r1)
    lwz r0, 0x40(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8015C3A8_00001608
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8015C3A8_00001608:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_8015C3A8_000016E4
    cmpwi r0, 0x8
    beq lbl_fn_8015C3A8_00001620
    stw r0, 0x564(r29)
lbl_fn_8015C3A8_00001620:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8015C3A8_000016E4
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8015C3A8_00001658
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x44(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    b lbl_fn_8015C3A8_00001674
lbl_fn_8015C3A8_00001658:
    addi r3, r31, 0xd8c
    lwz r5, 0xd8c(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
lbl_fn_8015C3A8_00001674:
    lwz r5, 0x44(r1)
    addi r3, r1, 0x14
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8015C3A8_000016B0
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8015C3A8_000016B0:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_8015C3A8_000016E4
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8015C3A8_000016E4:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_8015C3A8_00001714
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8015C3A8_00001714:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_8015C3A8_00001740
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8015C3A8_00001740:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    lwz r28, 0x50(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_8015C6A0(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    lis r4, lbl_80737A9C@ha
    li r7, 0x0
    stw r0, 0x64(r1)
    addi r4, r4, lbl_80737A9C@l
    addi r5, r4, 0x24
    stw r31, 0x5c(r1)
    lis r31, lbl_8077A720@ha
    addi r31, r31, lbl_8077A720@l
    mr r6, r5
    stw r30, 0x58(r1)
    li r4, 0x0
    stw r29, 0x54(r1)
    mr r29, r3
    li r3, 0xc
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_8015C6A0_000017BC
    mr r4, r29
    bl fn_8019BE9C
    mr r30, r3
lbl_fn_8015C6A0_000017BC:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8015C6A0_0000184C
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8015C6A0_000017F4
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_8015C6A0_00001810
lbl_fn_8015C6A0_000017F4:
    addi r3, r31, 0xd98
    lwz r5, 0xd98(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
lbl_fn_8015C6A0_00001810:
    lwz r5, 0x2c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8015C6A0_0000184C
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8015C6A0_0000184C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_8015C6A0_00001A00
    cmpwi r0, 0x8
    beq lbl_fn_8015C6A0_00001864
    stw r0, 0x564(r29)
lbl_fn_8015C6A0_00001864:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8015C6A0_00001A00
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8015C6A0_0000189C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x38(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
    b lbl_fn_8015C6A0_000018B8
lbl_fn_8015C6A0_0000189C:
    addi r3, r31, 0xda4
    lwz r5, 0xda4(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
lbl_fn_8015C6A0_000018B8:
    lwz r5, 0x38(r1)
    addi r3, r1, 0x20
    lwz r4, 0x3c(r1)
    lwz r0, 0x40(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8015C6A0_000018F4
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8015C6A0_000018F4:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_8015C6A0_000019D0
    cmpwi r0, 0x8
    beq lbl_fn_8015C6A0_0000190C
    stw r0, 0x564(r29)
lbl_fn_8015C6A0_0000190C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8015C6A0_000019D0
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8015C6A0_00001944
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x44(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    b lbl_fn_8015C6A0_00001960
lbl_fn_8015C6A0_00001944:
    addi r3, r31, 0xdb0
    lwz r5, 0xdb0(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
lbl_fn_8015C6A0_00001960:
    lwz r5, 0x44(r1)
    addi r3, r1, 0x14
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8015C6A0_0000199C
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8015C6A0_0000199C:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_8015C6A0_000019D0
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8015C6A0_000019D0:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_8015C6A0_00001A00
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8015C6A0_00001A00:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_8015C6A0_00001A2C
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8015C6A0_00001A2C:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}
