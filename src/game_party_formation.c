#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void fn_80084320(void);
extern void fn_8016E970(void);
extern void fn_801B7EB4(void);
extern void fn_801B805C(void);
extern void fn_801B8244(void);
extern void fn_801B8360(void);
extern void fn_801B86CC(void);
extern void fn_801B8AD0(void);
extern void fn_801B9A54(void);
extern void fn_801BB1C8(void);
extern void fn_801C43F0(void);
extern void fn_80695AD0(void);

/* External data declarations */
extern u8 lbl_80737A9C[];
extern u8 lbl_80766768[];
extern u8 lbl_8077A720[];

/* Small data declarations */

/* Function declarations */
void fn_80161B70(void);
void fn_80161E58(void);
void fn_80162140(void);
void fn_80162428(void);
void fn_80162720(void);
void fn_80162A08(void);
void fn_80162CF0(void);
void fn_80162FE8(void);
void fn_801632D0(void);

asm void fn_80161B70(void)
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
    li r3, 0x20
    li r4, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_80161B70_00000064
    mr r4, r29
    mr r5, r27
    mr r6, r28
    bl fn_801C43F0
    mr r30, r3
lbl_fn_80161B70_00000064:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80161B70_000000F4
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80161B70_0000009C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_80161B70_000000B8
lbl_fn_80161B70_0000009C:
    addi r3, r31, 0x111c
    lwz r5, 0x111c(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
lbl_fn_80161B70_000000B8:
    lwz r5, 0x2c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80161B70_000000F4
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80161B70_000000F4:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_80161B70_000002A8
    cmpwi r0, 0x8
    beq lbl_fn_80161B70_0000010C
    stw r0, 0x564(r29)
lbl_fn_80161B70_0000010C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80161B70_000002A8
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80161B70_00000144
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x38(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
    b lbl_fn_80161B70_00000160
lbl_fn_80161B70_00000144:
    addi r3, r31, 0x1128
    lwz r5, 0x1128(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
lbl_fn_80161B70_00000160:
    lwz r5, 0x38(r1)
    addi r3, r1, 0x20
    lwz r4, 0x3c(r1)
    lwz r0, 0x40(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80161B70_0000019C
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80161B70_0000019C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_80161B70_00000278
    cmpwi r0, 0x8
    beq lbl_fn_80161B70_000001B4
    stw r0, 0x564(r29)
lbl_fn_80161B70_000001B4:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80161B70_00000278
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80161B70_000001EC
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x44(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    b lbl_fn_80161B70_00000208
lbl_fn_80161B70_000001EC:
    addi r3, r31, 0x1134
    lwz r5, 0x1134(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
lbl_fn_80161B70_00000208:
    lwz r5, 0x44(r1)
    addi r3, r1, 0x14
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80161B70_00000244
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80161B70_00000244:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_80161B70_00000278
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80161B70_00000278:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_80161B70_000002A8
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80161B70_000002A8:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_80161B70_000002D4
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80161B70_000002D4:
    lmw r27, 0x5c(r1)
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_80161E58(void)
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
    li r3, 0x40
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_80161E58_00000344
    mr r4, r29
    bl fn_801B7EB4
    mr r30, r3
lbl_fn_80161E58_00000344:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80161E58_000003D4
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80161E58_0000037C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_80161E58_00000398
lbl_fn_80161E58_0000037C:
    addi r3, r31, 0x1140
    lwz r5, 0x1140(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
lbl_fn_80161E58_00000398:
    lwz r5, 0x2c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80161E58_000003D4
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80161E58_000003D4:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_80161E58_00000588
    cmpwi r0, 0x8
    beq lbl_fn_80161E58_000003EC
    stw r0, 0x564(r29)
lbl_fn_80161E58_000003EC:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80161E58_00000588
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80161E58_00000424
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x38(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
    b lbl_fn_80161E58_00000440
lbl_fn_80161E58_00000424:
    addi r3, r31, 0x114c
    lwz r5, 0x114c(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
lbl_fn_80161E58_00000440:
    lwz r5, 0x38(r1)
    addi r3, r1, 0x20
    lwz r4, 0x3c(r1)
    lwz r0, 0x40(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80161E58_0000047C
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80161E58_0000047C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_80161E58_00000558
    cmpwi r0, 0x8
    beq lbl_fn_80161E58_00000494
    stw r0, 0x564(r29)
lbl_fn_80161E58_00000494:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80161E58_00000558
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80161E58_000004CC
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x44(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    b lbl_fn_80161E58_000004E8
lbl_fn_80161E58_000004CC:
    addi r3, r31, 0x1158
    lwz r5, 0x1158(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
lbl_fn_80161E58_000004E8:
    lwz r5, 0x44(r1)
    addi r3, r1, 0x14
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80161E58_00000524
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80161E58_00000524:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_80161E58_00000558
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80161E58_00000558:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_80161E58_00000588
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80161E58_00000588:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_80161E58_000005B4
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80161E58_000005B4:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80162140(void)
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
    li r3, 0x40
    li r4, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_80162140_00000634
    mr r4, r29
    mr r5, r27
    mr r6, r28
    bl fn_801B805C
    mr r30, r3
lbl_fn_80162140_00000634:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80162140_000006C4
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80162140_0000066C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_80162140_00000688
lbl_fn_80162140_0000066C:
    addi r3, r31, 0x1164
    lwz r5, 0x1164(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
lbl_fn_80162140_00000688:
    lwz r5, 0x2c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80162140_000006C4
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80162140_000006C4:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_80162140_00000878
    cmpwi r0, 0x8
    beq lbl_fn_80162140_000006DC
    stw r0, 0x564(r29)
lbl_fn_80162140_000006DC:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80162140_00000878
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80162140_00000714
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x38(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
    b lbl_fn_80162140_00000730
lbl_fn_80162140_00000714:
    addi r3, r31, 0x1170
    lwz r5, 0x1170(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
lbl_fn_80162140_00000730:
    lwz r5, 0x38(r1)
    addi r3, r1, 0x20
    lwz r4, 0x3c(r1)
    lwz r0, 0x40(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80162140_0000076C
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80162140_0000076C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_80162140_00000848
    cmpwi r0, 0x8
    beq lbl_fn_80162140_00000784
    stw r0, 0x564(r29)
lbl_fn_80162140_00000784:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80162140_00000848
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80162140_000007BC
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x44(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    b lbl_fn_80162140_000007D8
lbl_fn_80162140_000007BC:
    addi r3, r31, 0x117c
    lwz r5, 0x117c(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
lbl_fn_80162140_000007D8:
    lwz r5, 0x44(r1)
    addi r3, r1, 0x14
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80162140_00000814
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80162140_00000814:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_80162140_00000848
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80162140_00000848:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_80162140_00000878
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80162140_00000878:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_80162140_000008A4
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80162140_000008A4:
    lmw r27, 0x5c(r1)
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_80162428(void)
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
    li r3, 0x40
    stw r28, 0x50(r1)
    mr r28, r4
    li r4, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_80162428_00000920
    mr r4, r29
    mr r5, r28
    bl fn_801B8244
    mr r30, r3
lbl_fn_80162428_00000920:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80162428_000009B0
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80162428_00000958
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_80162428_00000974
lbl_fn_80162428_00000958:
    addi r3, r31, 0x1188
    lwz r5, 0x1188(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
lbl_fn_80162428_00000974:
    lwz r5, 0x2c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80162428_000009B0
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80162428_000009B0:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_80162428_00000B64
    cmpwi r0, 0x8
    beq lbl_fn_80162428_000009C8
    stw r0, 0x564(r29)
lbl_fn_80162428_000009C8:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80162428_00000B64
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80162428_00000A00
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x38(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
    b lbl_fn_80162428_00000A1C
lbl_fn_80162428_00000A00:
    addi r3, r31, 0x1194
    lwz r5, 0x1194(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
lbl_fn_80162428_00000A1C:
    lwz r5, 0x38(r1)
    addi r3, r1, 0x20
    lwz r4, 0x3c(r1)
    lwz r0, 0x40(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80162428_00000A58
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80162428_00000A58:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_80162428_00000B34
    cmpwi r0, 0x8
    beq lbl_fn_80162428_00000A70
    stw r0, 0x564(r29)
lbl_fn_80162428_00000A70:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80162428_00000B34
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80162428_00000AA8
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x44(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    b lbl_fn_80162428_00000AC4
lbl_fn_80162428_00000AA8:
    addi r3, r31, 0x11a0
    lwz r5, 0x11a0(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
lbl_fn_80162428_00000AC4:
    lwz r5, 0x44(r1)
    addi r3, r1, 0x14
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80162428_00000B00
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80162428_00000B00:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_80162428_00000B34
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80162428_00000B34:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_80162428_00000B64
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80162428_00000B64:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_80162428_00000B90
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80162428_00000B90:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    lwz r28, 0x50(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80162720(void)
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
    beq lbl_fn_80162720_00000C14
    mr r4, r29
    mr r5, r27
    mr r6, r28
    bl fn_801BB1C8
    mr r30, r3
lbl_fn_80162720_00000C14:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80162720_00000CA4
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80162720_00000C4C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_80162720_00000C68
lbl_fn_80162720_00000C4C:
    addi r3, r31, 0x11ac
    lwz r5, 0x11ac(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
lbl_fn_80162720_00000C68:
    lwz r5, 0x2c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80162720_00000CA4
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80162720_00000CA4:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_80162720_00000E58
    cmpwi r0, 0x8
    beq lbl_fn_80162720_00000CBC
    stw r0, 0x564(r29)
lbl_fn_80162720_00000CBC:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80162720_00000E58
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80162720_00000CF4
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x38(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
    b lbl_fn_80162720_00000D10
lbl_fn_80162720_00000CF4:
    addi r3, r31, 0x11b8
    lwz r5, 0x11b8(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
lbl_fn_80162720_00000D10:
    lwz r5, 0x38(r1)
    addi r3, r1, 0x20
    lwz r4, 0x3c(r1)
    lwz r0, 0x40(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80162720_00000D4C
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80162720_00000D4C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_80162720_00000E28
    cmpwi r0, 0x8
    beq lbl_fn_80162720_00000D64
    stw r0, 0x564(r29)
lbl_fn_80162720_00000D64:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80162720_00000E28
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80162720_00000D9C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x44(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    b lbl_fn_80162720_00000DB8
lbl_fn_80162720_00000D9C:
    addi r3, r31, 0x11c4
    lwz r5, 0x11c4(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
lbl_fn_80162720_00000DB8:
    lwz r5, 0x44(r1)
    addi r3, r1, 0x14
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80162720_00000DF4
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80162720_00000DF4:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_80162720_00000E28
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80162720_00000E28:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_80162720_00000E58
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80162720_00000E58:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_80162720_00000E84
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80162720_00000E84:
    lmw r27, 0x5c(r1)
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_80162A08(void)
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
    li r3, 0x50
    li r4, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_80162A08_00000EFC
    mr r4, r29
    mr r5, r27
    mr r6, r28
    bl fn_801B9A54
    mr r30, r3
lbl_fn_80162A08_00000EFC:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80162A08_00000F8C
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80162A08_00000F34
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_80162A08_00000F50
lbl_fn_80162A08_00000F34:
    addi r3, r31, 0x11d0
    lwz r5, 0x11d0(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
lbl_fn_80162A08_00000F50:
    lwz r5, 0x2c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80162A08_00000F8C
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80162A08_00000F8C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_80162A08_00001140
    cmpwi r0, 0x8
    beq lbl_fn_80162A08_00000FA4
    stw r0, 0x564(r29)
lbl_fn_80162A08_00000FA4:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80162A08_00001140
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80162A08_00000FDC
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x38(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
    b lbl_fn_80162A08_00000FF8
lbl_fn_80162A08_00000FDC:
    addi r3, r31, 0x11dc
    lwz r5, 0x11dc(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
lbl_fn_80162A08_00000FF8:
    lwz r5, 0x38(r1)
    addi r3, r1, 0x20
    lwz r4, 0x3c(r1)
    lwz r0, 0x40(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80162A08_00001034
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80162A08_00001034:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_80162A08_00001110
    cmpwi r0, 0x8
    beq lbl_fn_80162A08_0000104C
    stw r0, 0x564(r29)
lbl_fn_80162A08_0000104C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80162A08_00001110
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80162A08_00001084
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x44(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    b lbl_fn_80162A08_000010A0
lbl_fn_80162A08_00001084:
    addi r3, r31, 0x11e8
    lwz r5, 0x11e8(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
lbl_fn_80162A08_000010A0:
    lwz r5, 0x44(r1)
    addi r3, r1, 0x14
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80162A08_000010DC
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80162A08_000010DC:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_80162A08_00001110
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80162A08_00001110:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_80162A08_00001140
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80162A08_00001140:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_80162A08_0000116C
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80162A08_0000116C:
    lmw r27, 0x5c(r1)
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_80162CF0(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    lis r6, lbl_80737A9C@ha
    li r7, 0x0
    stw r0, 0x74(r1)
    addi r6, r6, lbl_80737A9C@l
    stfd f31, 0x68(r1)
    fmr f31, f1
    stmw r27, 0x54(r1)
    lis r31, lbl_8077A720@ha
    mr r28, r5
    addi r5, r6, 0x24
    mr r29, r3
    mr r27, r4
    mr r6, r5
    addi r31, r31, lbl_8077A720@l
    li r3, 0x40
    li r4, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_80162CF0_000011F0
    fmr f1, f31
    mr r4, r29
    mr r5, r27
    mr r6, r28
    bl fn_801B8360
    mr r30, r3
lbl_fn_80162CF0_000011F0:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80162CF0_00001280
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80162CF0_00001228
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_80162CF0_00001244
lbl_fn_80162CF0_00001228:
    addi r3, r31, 0x11f4
    lwz r5, 0x11f4(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
lbl_fn_80162CF0_00001244:
    lwz r5, 0x2c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80162CF0_00001280
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80162CF0_00001280:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_80162CF0_00001434
    cmpwi r0, 0x8
    beq lbl_fn_80162CF0_00001298
    stw r0, 0x564(r29)
lbl_fn_80162CF0_00001298:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80162CF0_00001434
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80162CF0_000012D0
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x38(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
    b lbl_fn_80162CF0_000012EC
lbl_fn_80162CF0_000012D0:
    addi r3, r31, 0x1200
    lwz r5, 0x1200(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
lbl_fn_80162CF0_000012EC:
    lwz r5, 0x38(r1)
    addi r3, r1, 0x20
    lwz r4, 0x3c(r1)
    lwz r0, 0x40(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80162CF0_00001328
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80162CF0_00001328:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_80162CF0_00001404
    cmpwi r0, 0x8
    beq lbl_fn_80162CF0_00001340
    stw r0, 0x564(r29)
lbl_fn_80162CF0_00001340:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80162CF0_00001404
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80162CF0_00001378
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x44(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    b lbl_fn_80162CF0_00001394
lbl_fn_80162CF0_00001378:
    addi r3, r31, 0x120c
    lwz r5, 0x120c(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
lbl_fn_80162CF0_00001394:
    lwz r5, 0x44(r1)
    addi r3, r1, 0x14
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80162CF0_000013D0
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80162CF0_000013D0:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_80162CF0_00001404
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80162CF0_00001404:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_80162CF0_00001434
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80162CF0_00001434:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_80162CF0_00001460
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80162CF0_00001460:
    lfd f31, 0x68(r1)
    lmw r27, 0x54(r1)
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_80162FE8(void)
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
    li r3, 0x40
    li r4, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_80162FE8_000014DC
    mr r4, r29
    mr r5, r27
    mr r6, r28
    bl fn_801B86CC
    mr r30, r3
lbl_fn_80162FE8_000014DC:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80162FE8_0000156C
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80162FE8_00001514
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_80162FE8_00001530
lbl_fn_80162FE8_00001514:
    addi r3, r31, 0x1218
    lwz r5, 0x1218(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
lbl_fn_80162FE8_00001530:
    lwz r5, 0x2c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80162FE8_0000156C
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80162FE8_0000156C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_80162FE8_00001720
    cmpwi r0, 0x8
    beq lbl_fn_80162FE8_00001584
    stw r0, 0x564(r29)
lbl_fn_80162FE8_00001584:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80162FE8_00001720
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80162FE8_000015BC
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x38(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
    b lbl_fn_80162FE8_000015D8
lbl_fn_80162FE8_000015BC:
    addi r3, r31, 0x1224
    lwz r5, 0x1224(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
lbl_fn_80162FE8_000015D8:
    lwz r5, 0x38(r1)
    addi r3, r1, 0x20
    lwz r4, 0x3c(r1)
    lwz r0, 0x40(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80162FE8_00001614
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80162FE8_00001614:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_80162FE8_000016F0
    cmpwi r0, 0x8
    beq lbl_fn_80162FE8_0000162C
    stw r0, 0x564(r29)
lbl_fn_80162FE8_0000162C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80162FE8_000016F0
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80162FE8_00001664
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x44(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    b lbl_fn_80162FE8_00001680
lbl_fn_80162FE8_00001664:
    addi r3, r31, 0x1230
    lwz r5, 0x1230(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
lbl_fn_80162FE8_00001680:
    lwz r5, 0x44(r1)
    addi r3, r1, 0x14
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80162FE8_000016BC
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80162FE8_000016BC:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_80162FE8_000016F0
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80162FE8_000016F0:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_80162FE8_00001720
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80162FE8_00001720:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_80162FE8_0000174C
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80162FE8_0000174C:
    lmw r27, 0x5c(r1)
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_801632D0(void)
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
    li r3, 0x40
    li r4, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_801632D0_000017C4
    mr r4, r29
    mr r5, r27
    mr r6, r28
    bl fn_801B8AD0
    mr r30, r3
lbl_fn_801632D0_000017C4:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_801632D0_00001854
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_801632D0_000017FC
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_801632D0_00001818
lbl_fn_801632D0_000017FC:
    addi r3, r31, 0x123c
    lwz r5, 0x123c(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
lbl_fn_801632D0_00001818:
    lwz r5, 0x2c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801632D0_00001854
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801632D0_00001854:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_801632D0_00001A08
    cmpwi r0, 0x8
    beq lbl_fn_801632D0_0000186C
    stw r0, 0x564(r29)
lbl_fn_801632D0_0000186C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_801632D0_00001A08
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_801632D0_000018A4
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x38(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
    b lbl_fn_801632D0_000018C0
lbl_fn_801632D0_000018A4:
    addi r3, r31, 0x1248
    lwz r5, 0x1248(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
lbl_fn_801632D0_000018C0:
    lwz r5, 0x38(r1)
    addi r3, r1, 0x20
    lwz r4, 0x3c(r1)
    lwz r0, 0x40(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801632D0_000018FC
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801632D0_000018FC:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_801632D0_000019D8
    cmpwi r0, 0x8
    beq lbl_fn_801632D0_00001914
    stw r0, 0x564(r29)
lbl_fn_801632D0_00001914:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_801632D0_000019D8
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_801632D0_0000194C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x44(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    b lbl_fn_801632D0_00001968
lbl_fn_801632D0_0000194C:
    addi r3, r31, 0x1254
    lwz r5, 0x1254(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
lbl_fn_801632D0_00001968:
    lwz r5, 0x44(r1)
    addi r3, r1, 0x14
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801632D0_000019A4
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801632D0_000019A4:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_801632D0_000019D8
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_801632D0_000019D8:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_801632D0_00001A08
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_801632D0_00001A08:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_801632D0_00001A34
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_801632D0_00001A34:
    lmw r27, 0x5c(r1)
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}
