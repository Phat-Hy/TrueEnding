#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void fn_80084320(void);
extern void fn_80097D40(void);
extern void fn_8013322C(void);
extern void fn_8016E970(void);
extern void fn_8018EEC4(void);
extern void fn_8018F970(void);
extern void fn_801B0710(void);
extern void fn_801B0854(void);
extern void fn_801BB8BC(void);
extern void fn_801BC288(void);
extern void fn_801BC410(void);
extern void fn_801C7918(void);
extern void fn_80695AD0(void);

/* External data declarations */
extern u8 lbl_80737A9C[];
extern u8 lbl_80766768[];
extern u8 lbl_8077A720[];
extern u8 lbl_8077BB78[];
extern u8 lbl_8077BB84[];

/* Small data declarations */

/* Function declarations */
void fn_80164F54(void);
void fn_80165284(void);
void fn_801656A4(void);
void fn_80165C5C(void);
void fn_80165F54(void);
void fn_8016624C(void);
void fn_80166544(void);
void fn_80166760(void);
void fn_8016676C(void);

asm void fn_80164F54(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    lis r31, lbl_8077A720@ha
    addi r31, r31, lbl_8077A720@l
    stw r30, 0x58(r1)
    stw r29, 0x54(r1)
    mr r29, r3
    stw r28, 0x50(r1)
    mr r28, r4
    lwz r0, 0x12a8(r3)
    extrwi. r0, r0, 1, 27
    bne lbl_fn_80164F54_00000310
    lwz r4, 0x55c(r3)
    cmpwi r4, 0x6
    bne lbl_fn_80164F54_00000050
    lwz r0, 0x560(r3)
    cmpwi r0, 0x2f
    beq lbl_fn_80164F54_00000058
lbl_fn_80164F54_00000050:
    cmpwi r4, 0x2
    bne lbl_fn_80164F54_00000310
lbl_fn_80164F54_00000058:
    lwz r0, 0x2dc(r3)
    cmpwi r0, 0x1ed
    beq lbl_fn_80164F54_00000310
    lis r5, lbl_80737A9C@ha
    li r3, 0xc
    addi r5, r5, lbl_80737A9C@l
    li r4, 0x0
    addi r5, r5, 0x24
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_80164F54_000000A0
    mr r4, r29
    mr r5, r28
    bl fn_801B0710
    mr r30, r3
lbl_fn_80164F54_000000A0:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80164F54_00000130
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80164F54_000000D8
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_80164F54_000000F4
lbl_fn_80164F54_000000D8:
    addi r3, r31, 0x135c
    lwz r5, 0x135c(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
lbl_fn_80164F54_000000F4:
    lwz r5, 0x2c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80164F54_00000130
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80164F54_00000130:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_80164F54_000002E4
    cmpwi r0, 0x8
    beq lbl_fn_80164F54_00000148
    stw r0, 0x564(r29)
lbl_fn_80164F54_00000148:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80164F54_000002E4
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80164F54_00000180
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x38(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
    b lbl_fn_80164F54_0000019C
lbl_fn_80164F54_00000180:
    addi r3, r31, 0x1368
    lwz r5, 0x1368(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
lbl_fn_80164F54_0000019C:
    lwz r5, 0x38(r1)
    addi r3, r1, 0x20
    lwz r4, 0x3c(r1)
    lwz r0, 0x40(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80164F54_000001D8
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80164F54_000001D8:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_80164F54_000002B4
    cmpwi r0, 0x8
    beq lbl_fn_80164F54_000001F0
    stw r0, 0x564(r29)
lbl_fn_80164F54_000001F0:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80164F54_000002B4
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80164F54_00000228
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x44(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    b lbl_fn_80164F54_00000244
lbl_fn_80164F54_00000228:
    addi r3, r31, 0x1374
    lwz r5, 0x1374(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
lbl_fn_80164F54_00000244:
    lwz r5, 0x44(r1)
    addi r3, r1, 0x14
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80164F54_00000280
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80164F54_00000280:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_80164F54_000002B4
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80164F54_000002B4:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_80164F54_000002E4
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80164F54_000002E4:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_80164F54_00000310
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80164F54_00000310:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    lwz r28, 0x50(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80165284(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stmw r27, 0x5c(r1)
    lis r31, lbl_8077A720@ha
    mr r29, r3
    mr r27, r4
    addi r31, r31, lbl_8077A720@l
    li r30, 0x0
    li r28, 0x0
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x2
    bne lbl_fn_80165284_0000036C
    li r30, 0x1
    b lbl_fn_80165284_000003F0
lbl_fn_80165284_0000036C:
    cmpwi r0, 0x6
    bne lbl_fn_80165284_000003F0
    lwz r0, 0x560(r3)
    cmpwi r0, 0x15
    beq lbl_fn_80165284_000003F0
    bge lbl_fn_80165284_000003B4
    cmpwi r0, 0x4
    beq lbl_fn_80165284_000003EC
    bge lbl_fn_80165284_0000039C
    cmpwi r0, 0x2
    beq lbl_fn_80165284_000003EC
    b lbl_fn_80165284_000003F0
lbl_fn_80165284_0000039C:
    cmpwi r0, 0xc
    beq lbl_fn_80165284_000003EC
    blt lbl_fn_80165284_000003F0
    cmpwi r0, 0x14
    bge lbl_fn_80165284_000003EC
    b lbl_fn_80165284_000003F0
lbl_fn_80165284_000003B4:
    cmpwi r0, 0x2f
    beq lbl_fn_80165284_000003EC
    bge lbl_fn_80165284_000003D8
    cmpwi r0, 0x1f
    beq lbl_fn_80165284_000003EC
    bge lbl_fn_80165284_000003F0
    cmpwi r0, 0x17
    bge lbl_fn_80165284_000003F0
    b lbl_fn_80165284_000003EC
lbl_fn_80165284_000003D8:
    cmpwi r0, 0x64
    bge lbl_fn_80165284_000003F0
    cmpwi r0, 0x61
    bge lbl_fn_80165284_000003EC
    b lbl_fn_80165284_000003F0
lbl_fn_80165284_000003EC:
    li r30, 0x1
lbl_fn_80165284_000003F0:
    lwz r6, 0x12a4(r3)
    extrwi r0, r6, 1, 9
    cmplwi r0, 0x1
    beq lbl_fn_80165284_0000041C
    lwz r0, 0x54c(r3)
    rlwinm r5, r0, 0, 6, 6
    subis r0, r5, 0x200
    cmplwi r0, 0x0
    beq lbl_fn_80165284_0000041C
    extrwi. r0, r6, 1, 28
    beq lbl_fn_80165284_00000420
lbl_fn_80165284_0000041C:
    li r30, 0x0
lbl_fn_80165284_00000420:
    lha r0, 0x138a(r3)
    cmpwi r0, 0x0
    ble lbl_fn_80165284_00000430
    li r30, 0x0
lbl_fn_80165284_00000430:
    cmpwi r30, 0x0
    beq lbl_fn_80165284_00000484
    cmpwi r4, 0x0
    beq lbl_fn_80165284_00000484
    lwz r0, 0x12a4(r4)
    li r4, 0x1ed
    addi r3, r3, 0xb0
    extrwi r28, r0, 1, 3
    bl fn_80097D40
    cmpwi r3, 0x0
    bne lbl_fn_80165284_00000460
    li r28, 0x0
lbl_fn_80165284_00000460:
    lwz r3, 0xd0c(r29)
    cmpwi r3, 0x0
    ble lbl_fn_80165284_00000484
    lwz r0, 0xd0c(r27)
    cmpwi r0, 0x0
    ble lbl_fn_80165284_00000484
    cmpw r3, r0
    beq lbl_fn_80165284_00000484
    li r28, 0x0
lbl_fn_80165284_00000484:
    cmpwi r30, 0x0
    beq lbl_fn_80165284_0000073C
    cmpwi r28, 0x0
    beq lbl_fn_80165284_0000073C
    lis r5, lbl_80737A9C@ha
    li r3, 0x8
    addi r5, r5, lbl_80737A9C@l
    li r4, 0x0
    addi r5, r5, 0x24
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_80165284_000004CC
    mr r4, r29
    bl fn_801B0854
    mr r30, r3
lbl_fn_80165284_000004CC:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80165284_0000055C
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80165284_00000504
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_80165284_00000520
lbl_fn_80165284_00000504:
    addi r3, r31, 0x1380
    lwz r5, 0x1380(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
lbl_fn_80165284_00000520:
    lwz r5, 0x2c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80165284_0000055C
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80165284_0000055C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_80165284_00000710
    cmpwi r0, 0x8
    beq lbl_fn_80165284_00000574
    stw r0, 0x564(r29)
lbl_fn_80165284_00000574:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80165284_00000710
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80165284_000005AC
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x38(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
    b lbl_fn_80165284_000005C8
lbl_fn_80165284_000005AC:
    addi r3, r31, 0x138c
    lwz r5, 0x138c(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
lbl_fn_80165284_000005C8:
    lwz r5, 0x38(r1)
    addi r3, r1, 0x20
    lwz r4, 0x3c(r1)
    lwz r0, 0x40(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80165284_00000604
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80165284_00000604:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_80165284_000006E0
    cmpwi r0, 0x8
    beq lbl_fn_80165284_0000061C
    stw r0, 0x564(r29)
lbl_fn_80165284_0000061C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80165284_000006E0
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80165284_00000654
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x44(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    b lbl_fn_80165284_00000670
lbl_fn_80165284_00000654:
    addi r3, r31, 0x1398
    lwz r5, 0x1398(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
lbl_fn_80165284_00000670:
    lwz r5, 0x44(r1)
    addi r3, r1, 0x14
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80165284_000006AC
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80165284_000006AC:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_80165284_000006E0
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80165284_000006E0:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_80165284_00000710
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80165284_00000710:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_80165284_0000073C
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80165284_0000073C:
    lmw r27, 0x5c(r1)
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_801656A4(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    stw r31, 0xac(r1)
    lis r31, lbl_8077A720@ha
    addi r31, r31, lbl_8077A720@l
    stw r30, 0xa8(r1)
    stw r29, 0xa4(r1)
    mr r29, r3
    stw r28, 0xa0(r1)
    mr r28, r4
    lwz r5, 0x60(r3)
    lwz r0, 0x24(r5)
    cmpwi r0, 0x18
    bne lbl_fn_801656A4_00000A3C
    lis r5, lbl_80737A9C@ha
    li r3, 0xc
    addi r5, r5, lbl_80737A9C@l
    li r4, 0x0
    addi r5, r5, 0x24
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_801656A4_000007C8
    mr r4, r29
    li r5, 0x5a
    bl fn_801BC410
    mr r30, r3
lbl_fn_801656A4_000007C8:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_801656A4_00000858
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_801656A4_00000800
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x50(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x54(r1)
    stw r0, 0x58(r1)
    b lbl_fn_801656A4_0000081C
lbl_fn_801656A4_00000800:
    addi r3, r31, 0x13a4
    lwz r5, 0x13a4(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x50(r1)
    stw r4, 0x54(r1)
    stw r0, 0x58(r1)
lbl_fn_801656A4_0000081C:
    lwz r5, 0x50(r1)
    addi r3, r1, 0x2c
    lwz r4, 0x54(r1)
    lwz r0, 0x58(r1)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801656A4_00000858
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801656A4_00000858:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_801656A4_00000A0C
    cmpwi r0, 0x8
    beq lbl_fn_801656A4_00000870
    stw r0, 0x564(r29)
lbl_fn_801656A4_00000870:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_801656A4_00000A0C
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_801656A4_000008A8
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x5c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x60(r1)
    stw r0, 0x64(r1)
    b lbl_fn_801656A4_000008C4
lbl_fn_801656A4_000008A8:
    addi r3, r31, 0x13b0
    lwz r5, 0x13b0(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x5c(r1)
    stw r4, 0x60(r1)
    stw r0, 0x64(r1)
lbl_fn_801656A4_000008C4:
    lwz r5, 0x5c(r1)
    addi r3, r1, 0x44
    lwz r4, 0x60(r1)
    lwz r0, 0x64(r1)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801656A4_00000900
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801656A4_00000900:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_801656A4_000009DC
    cmpwi r0, 0x8
    beq lbl_fn_801656A4_00000918
    stw r0, 0x564(r29)
lbl_fn_801656A4_00000918:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_801656A4_000009DC
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_801656A4_00000950
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x68(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x6c(r1)
    stw r0, 0x70(r1)
    b lbl_fn_801656A4_0000096C
lbl_fn_801656A4_00000950:
    addi r3, r31, 0x13bc
    lwz r5, 0x13bc(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x68(r1)
    stw r4, 0x6c(r1)
    stw r0, 0x70(r1)
lbl_fn_801656A4_0000096C:
    lwz r5, 0x68(r1)
    addi r3, r1, 0x38
    lwz r4, 0x6c(r1)
    lwz r0, 0x70(r1)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801656A4_000009A8
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801656A4_000009A8:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_801656A4_000009DC
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_801656A4_000009DC:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_801656A4_00000A0C
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_801656A4_00000A0C:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_801656A4_00000CE8
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    b lbl_fn_801656A4_00000CE8
lbl_fn_801656A4_00000A3C:
    lis r5, lbl_80737A9C@ha
    li r3, 0xc
    addi r5, r5, lbl_80737A9C@l
    li r4, 0x0
    addi r5, r5, 0x24
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_801656A4_00000A78
    mr r4, r29
    mr r5, r28
    bl fn_801BC288
    mr r30, r3
lbl_fn_801656A4_00000A78:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_801656A4_00000B08
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_801656A4_00000AB0
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x74(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x78(r1)
    stw r0, 0x7c(r1)
    b lbl_fn_801656A4_00000ACC
lbl_fn_801656A4_00000AB0:
    addi r3, r31, 0x13c8
    lwz r5, 0x13c8(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x74(r1)
    stw r4, 0x78(r1)
    stw r0, 0x7c(r1)
lbl_fn_801656A4_00000ACC:
    lwz r5, 0x74(r1)
    addi r3, r1, 0x8
    lwz r4, 0x78(r1)
    lwz r0, 0x7c(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801656A4_00000B08
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801656A4_00000B08:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_801656A4_00000CBC
    cmpwi r0, 0x8
    beq lbl_fn_801656A4_00000B20
    stw r0, 0x564(r29)
lbl_fn_801656A4_00000B20:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_801656A4_00000CBC
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_801656A4_00000B58
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x80(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x84(r1)
    stw r0, 0x88(r1)
    b lbl_fn_801656A4_00000B74
lbl_fn_801656A4_00000B58:
    addi r3, r31, 0x13d4
    lwz r5, 0x13d4(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x80(r1)
    stw r4, 0x84(r1)
    stw r0, 0x88(r1)
lbl_fn_801656A4_00000B74:
    lwz r5, 0x80(r1)
    addi r3, r1, 0x20
    lwz r4, 0x84(r1)
    lwz r0, 0x88(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801656A4_00000BB0
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801656A4_00000BB0:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_801656A4_00000C8C
    cmpwi r0, 0x8
    beq lbl_fn_801656A4_00000BC8
    stw r0, 0x564(r29)
lbl_fn_801656A4_00000BC8:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_801656A4_00000C8C
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_801656A4_00000C00
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x8c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x90(r1)
    stw r0, 0x94(r1)
    b lbl_fn_801656A4_00000C1C
lbl_fn_801656A4_00000C00:
    addi r3, r31, 0x13e0
    lwz r5, 0x13e0(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x8c(r1)
    stw r4, 0x90(r1)
    stw r0, 0x94(r1)
lbl_fn_801656A4_00000C1C:
    lwz r5, 0x8c(r1)
    addi r3, r1, 0x14
    lwz r4, 0x90(r1)
    lwz r0, 0x94(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801656A4_00000C58
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801656A4_00000C58:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_801656A4_00000C8C
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_801656A4_00000C8C:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_801656A4_00000CBC
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_801656A4_00000CBC:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_801656A4_00000CE8
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_801656A4_00000CE8:
    lwz r0, 0xb4(r1)
    lwz r31, 0xac(r1)
    lwz r30, 0xa8(r1)
    lwz r29, 0xa4(r1)
    lwz r28, 0xa0(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_80165C5C(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x74(r1)
    stmw r26, 0x58(r1)
    lis r31, lbl_8077A720@ha
    mr r29, r3
    mr r26, r4
    mr r27, r5
    mr r28, r6
    addi r31, r31, lbl_8077A720@l
    blt lbl_fn_80165C5C_00000FEC
    lis r5, lbl_80737A9C@ha
    li r3, 0x2c
    addi r5, r5, lbl_80737A9C@l
    li r4, 0x0
    addi r5, r5, 0x24
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_80165C5C_00000D7C
    mr r4, r29
    mr r5, r26
    mr r6, r27
    mr r7, r28
    bl fn_801C7918
    mr r30, r3
lbl_fn_80165C5C_00000D7C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80165C5C_00000E0C
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80165C5C_00000DB4
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_80165C5C_00000DD0
lbl_fn_80165C5C_00000DB4:
    addi r3, r31, 0x13ec
    lwz r5, 0x13ec(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
lbl_fn_80165C5C_00000DD0:
    lwz r5, 0x2c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80165C5C_00000E0C
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80165C5C_00000E0C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_80165C5C_00000FC0
    cmpwi r0, 0x8
    beq lbl_fn_80165C5C_00000E24
    stw r0, 0x564(r29)
lbl_fn_80165C5C_00000E24:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80165C5C_00000FC0
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80165C5C_00000E5C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x38(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
    b lbl_fn_80165C5C_00000E78
lbl_fn_80165C5C_00000E5C:
    addi r3, r31, 0x13f8
    lwz r5, 0x13f8(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
lbl_fn_80165C5C_00000E78:
    lwz r5, 0x38(r1)
    addi r3, r1, 0x20
    lwz r4, 0x3c(r1)
    lwz r0, 0x40(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80165C5C_00000EB4
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80165C5C_00000EB4:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_80165C5C_00000F90
    cmpwi r0, 0x8
    beq lbl_fn_80165C5C_00000ECC
    stw r0, 0x564(r29)
lbl_fn_80165C5C_00000ECC:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80165C5C_00000F90
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80165C5C_00000F04
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x44(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    b lbl_fn_80165C5C_00000F20
lbl_fn_80165C5C_00000F04:
    addi r3, r31, 0x1404
    lwz r5, 0x1404(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
lbl_fn_80165C5C_00000F20:
    lwz r5, 0x44(r1)
    addi r3, r1, 0x14
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80165C5C_00000F5C
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80165C5C_00000F5C:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_80165C5C_00000F90
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80165C5C_00000F90:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_80165C5C_00000FC0
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80165C5C_00000FC0:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_80165C5C_00000FEC
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80165C5C_00000FEC:
    lmw r26, 0x58(r1)
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_80165F54(void)
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
    li r3, 0x24
    stw r28, 0x50(r1)
    mr r28, r4
    li r4, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_80165F54_00001068
    mr r4, r29
    mr r5, r28
    bl fn_801BB8BC
    mr r30, r3
lbl_fn_80165F54_00001068:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80165F54_000010F8
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80165F54_000010A0
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_80165F54_000010BC
lbl_fn_80165F54_000010A0:
    addi r3, r31, 0x1410
    lwz r5, 0x1410(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
lbl_fn_80165F54_000010BC:
    lwz r5, 0x2c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80165F54_000010F8
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80165F54_000010F8:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_80165F54_000012AC
    cmpwi r0, 0x8
    beq lbl_fn_80165F54_00001110
    stw r0, 0x564(r29)
lbl_fn_80165F54_00001110:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80165F54_000012AC
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80165F54_00001148
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x38(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
    b lbl_fn_80165F54_00001164
lbl_fn_80165F54_00001148:
    addi r3, r31, 0x141c
    lwz r5, 0x141c(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
lbl_fn_80165F54_00001164:
    lwz r5, 0x38(r1)
    addi r3, r1, 0x20
    lwz r4, 0x3c(r1)
    lwz r0, 0x40(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80165F54_000011A0
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80165F54_000011A0:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_80165F54_0000127C
    cmpwi r0, 0x8
    beq lbl_fn_80165F54_000011B8
    stw r0, 0x564(r29)
lbl_fn_80165F54_000011B8:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80165F54_0000127C
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80165F54_000011F0
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x44(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    b lbl_fn_80165F54_0000120C
lbl_fn_80165F54_000011F0:
    addi r3, r31, 0x1428
    lwz r5, 0x1428(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
lbl_fn_80165F54_0000120C:
    lwz r5, 0x44(r1)
    addi r3, r1, 0x14
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80165F54_00001248
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80165F54_00001248:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_80165F54_0000127C
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80165F54_0000127C:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_80165F54_000012AC
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80165F54_000012AC:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_80165F54_000012D8
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80165F54_000012D8:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    lwz r28, 0x50(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_8016624C(void)
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
    li r3, 0x28
    stw r28, 0x50(r1)
    mr r28, r4
    li r4, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_8016624C_00001360
    mr r4, r29
    mr r5, r28
    bl fn_8018EEC4
    mr r30, r3
lbl_fn_8016624C_00001360:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8016624C_000013F0
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8016624C_00001398
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_8016624C_000013B4
lbl_fn_8016624C_00001398:
    addi r3, r31, 0x1434
    lwz r5, 0x1434(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
lbl_fn_8016624C_000013B4:
    lwz r5, 0x2c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8016624C_000013F0
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8016624C_000013F0:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_8016624C_000015A4
    cmpwi r0, 0x8
    beq lbl_fn_8016624C_00001408
    stw r0, 0x564(r29)
lbl_fn_8016624C_00001408:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8016624C_000015A4
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8016624C_00001440
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x38(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
    b lbl_fn_8016624C_0000145C
lbl_fn_8016624C_00001440:
    addi r3, r31, 0x1440
    lwz r5, 0x1440(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
lbl_fn_8016624C_0000145C:
    lwz r5, 0x38(r1)
    addi r3, r1, 0x20
    lwz r4, 0x3c(r1)
    lwz r0, 0x40(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8016624C_00001498
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8016624C_00001498:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_8016624C_00001574
    cmpwi r0, 0x8
    beq lbl_fn_8016624C_000014B0
    stw r0, 0x564(r29)
lbl_fn_8016624C_000014B0:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8016624C_00001574
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8016624C_000014E8
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x44(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    b lbl_fn_8016624C_00001504
lbl_fn_8016624C_000014E8:
    addi r3, r31, 0x144c
    lwz r5, 0x144c(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
lbl_fn_8016624C_00001504:
    lwz r5, 0x44(r1)
    addi r3, r1, 0x14
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8016624C_00001540
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8016624C_00001540:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_8016624C_00001574
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8016624C_00001574:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_8016624C_000015A4
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8016624C_000015A4:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_8016624C_000015D0
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8016624C_000015D0:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    lwz r28, 0x50(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80166544(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r3
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x3
    bne lbl_fn_80166544_000017E0
    lwz r31, 0x564(r3)
    li r0, 0x0
    lwz r4, 0x55c(r3)
    stw r0, 0x58c(r3)
    cmpw r4, r31
    beq lbl_fn_80166544_000017DC
    cmpwi r4, 0x6
    beq lbl_fn_80166544_00001640
    cmpwi r4, 0x8
    beq lbl_fn_80166544_00001640
    stw r4, 0x564(r3)
lbl_fn_80166544_00001640:
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_80166544_000017DC
    lwz r0, 0xf80(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80166544_00001678
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x20(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x24(r1)
    stw r0, 0x28(r1)
    b lbl_fn_80166544_00001694
lbl_fn_80166544_00001678:
    lis r5, lbl_8077BB78@ha
    lwzu r4, lbl_8077BB78@l(r5)
    stw r4, 0x20(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x24(r1)
    stw r0, 0x28(r1)
lbl_fn_80166544_00001694:
    lwz r5, 0x20(r1)
    addi r3, r1, 0x8
    lwz r4, 0x24(r1)
    lwz r0, 0x28(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80166544_000016D0
    lwz r3, 0xf80(r30)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80166544_000016D0:
    lwz r0, 0x55c(r30)
    cmpwi r0, 0x6
    beq lbl_fn_80166544_000017AC
    cmpwi r0, 0x8
    beq lbl_fn_80166544_000016E8
    stw r0, 0x564(r30)
lbl_fn_80166544_000016E8:
    lwz r0, 0x55c(r30)
    cmpwi r0, 0x6
    bne lbl_fn_80166544_000017AC
    lwz r0, 0xf80(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80166544_00001720
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_80166544_0000173C
lbl_fn_80166544_00001720:
    lis r5, lbl_8077BB84@ha
    lwzu r4, lbl_8077BB84@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
lbl_fn_80166544_0000173C:
    lwz r5, 0x2c(r1)
    addi r3, r1, 0x14
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80166544_00001778
    lwz r3, 0xf80(r30)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80166544_00001778:
    mr r3, r30
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r30)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r30)
    beq lbl_fn_80166544_000017AC
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80166544_000017AC:
    lwz r3, 0xf80(r30)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r30)
    cmpwi r3, 0x0
    stw r0, 0xf80(r30)
    beq lbl_fn_80166544_000017DC
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80166544_000017DC:
    stw r31, 0x55c(r30)
lbl_fn_80166544_000017E0:
    addi r3, r30, 0x7d4
    li r4, 0x40
    bl fn_8013322C
    li r0, -0x1
    stw r0, 0xf94(r30)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80166760(void)
{
    nofralloc
    lwz r0, 0xf98(r3)
    stw r0, 0xf94(r3)
    blr
}

asm void fn_8016676C(void)
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
    beq lbl_fn_8016676C_00001874
    mr r4, r29
    bl fn_8018F970
    mr r30, r3
lbl_fn_8016676C_00001874:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8016676C_00001904
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8016676C_000018AC
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_8016676C_000018C8
lbl_fn_8016676C_000018AC:
    addi r3, r31, 0x1470
    lwz r5, 0x1470(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
lbl_fn_8016676C_000018C8:
    lwz r5, 0x2c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8016676C_00001904
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8016676C_00001904:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_8016676C_00001AB8
    cmpwi r0, 0x8
    beq lbl_fn_8016676C_0000191C
    stw r0, 0x564(r29)
lbl_fn_8016676C_0000191C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8016676C_00001AB8
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8016676C_00001954
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x38(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
    b lbl_fn_8016676C_00001970
lbl_fn_8016676C_00001954:
    addi r3, r31, 0x147c
    lwz r5, 0x147c(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
lbl_fn_8016676C_00001970:
    lwz r5, 0x38(r1)
    addi r3, r1, 0x20
    lwz r4, 0x3c(r1)
    lwz r0, 0x40(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8016676C_000019AC
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8016676C_000019AC:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_8016676C_00001A88
    cmpwi r0, 0x8
    beq lbl_fn_8016676C_000019C4
    stw r0, 0x564(r29)
lbl_fn_8016676C_000019C4:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8016676C_00001A88
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8016676C_000019FC
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x44(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    b lbl_fn_8016676C_00001A18
lbl_fn_8016676C_000019FC:
    addi r3, r31, 0x1488
    lwz r5, 0x1488(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
lbl_fn_8016676C_00001A18:
    lwz r5, 0x44(r1)
    addi r3, r1, 0x14
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8016676C_00001A54
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8016676C_00001A54:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_8016676C_00001A88
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8016676C_00001A88:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_8016676C_00001AB8
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8016676C_00001AB8:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_8016676C_00001AE4
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8016676C_00001AE4:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}
