#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void fn_80084320(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_800F8548(void);
extern void fn_800FD658(void);
extern void fn_8010337C(void);
extern void fn_80105F3C(void);
extern void fn_80105F4C(void);
extern void fn_8010607C(void);
extern void fn_8010608C(void);
extern void fn_8010652C(void);
extern void fn_8016E970(void);
extern void fn_8016EB48(void);
extern void fn_8019BFF0(void);
extern void fn_801B529C(void);
extern void fn_801B73F0(void);
extern void fn_801B8DFC(void);
extern void fn_801B9128(void);
extern void fn_801BBC48(void);
extern void fn_801C706C(void);
extern void fn_80210220(void);
extern void fn_80219558(void);
extern void fn_80219E6C(void);
extern void fn_80370174(void);
extern void fn_80370320(void);
extern void fn_80375184(void);
extern void fn_80695AD0(void);

/* External data declarations */
extern u8 lbl_80737490[];
extern u8 lbl_80737A9C[];
extern u8 lbl_80766768[];
extern u8 lbl_8077A720[];

/* Small data declarations */
extern u32 lbl_8087EFA8;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F430;
extern u32 lbl_8087F8A0;
extern u32 lbl_80881964;
extern u32 lbl_8088196C;

/* Function declarations */
void fn_801635B8(void);
void fn_801638A0(void);
void fn_80163B88(void);
void fn_80163E70(void);
void fn_80164168(void);
void fn_80164454(void);
void fn_801644D4(void);
void fn_801647BC(void);
void fn_80164B00(void);
void fn_80164D24(void);
void fn_80164DCC(void);
void fn_80164EF4(void);

asm void fn_801635B8(void)
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
    beq lbl_fn_801635B8_00000064
    mr r4, r29
    mr r5, r27
    mr r6, r28
    bl fn_801B8DFC
    mr r30, r3
lbl_fn_801635B8_00000064:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_801635B8_000000F4
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_801635B8_0000009C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_801635B8_000000B8
lbl_fn_801635B8_0000009C:
    addi r3, r31, 0x1260
    lwz r5, 0x1260(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
lbl_fn_801635B8_000000B8:
    lwz r5, 0x2c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801635B8_000000F4
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801635B8_000000F4:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_801635B8_000002A8
    cmpwi r0, 0x8
    beq lbl_fn_801635B8_0000010C
    stw r0, 0x564(r29)
lbl_fn_801635B8_0000010C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_801635B8_000002A8
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_801635B8_00000144
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x38(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
    b lbl_fn_801635B8_00000160
lbl_fn_801635B8_00000144:
    addi r3, r31, 0x126c
    lwz r5, 0x126c(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
lbl_fn_801635B8_00000160:
    lwz r5, 0x38(r1)
    addi r3, r1, 0x20
    lwz r4, 0x3c(r1)
    lwz r0, 0x40(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801635B8_0000019C
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801635B8_0000019C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_801635B8_00000278
    cmpwi r0, 0x8
    beq lbl_fn_801635B8_000001B4
    stw r0, 0x564(r29)
lbl_fn_801635B8_000001B4:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_801635B8_00000278
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_801635B8_000001EC
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x44(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    b lbl_fn_801635B8_00000208
lbl_fn_801635B8_000001EC:
    addi r3, r31, 0x1278
    lwz r5, 0x1278(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
lbl_fn_801635B8_00000208:
    lwz r5, 0x44(r1)
    addi r3, r1, 0x14
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801635B8_00000244
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801635B8_00000244:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_801635B8_00000278
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_801635B8_00000278:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_801635B8_000002A8
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_801635B8_000002A8:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_801635B8_000002D4
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_801635B8_000002D4:
    lmw r27, 0x5c(r1)
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_801638A0(void)
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
    li r3, 0x34
    li r4, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_801638A0_0000034C
    mr r4, r29
    mr r5, r27
    mr r6, r28
    bl fn_801BBC48
    mr r30, r3
lbl_fn_801638A0_0000034C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_801638A0_000003DC
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_801638A0_00000384
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_801638A0_000003A0
lbl_fn_801638A0_00000384:
    addi r3, r31, 0x1284
    lwz r5, 0x1284(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
lbl_fn_801638A0_000003A0:
    lwz r5, 0x2c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801638A0_000003DC
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801638A0_000003DC:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_801638A0_00000590
    cmpwi r0, 0x8
    beq lbl_fn_801638A0_000003F4
    stw r0, 0x564(r29)
lbl_fn_801638A0_000003F4:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_801638A0_00000590
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_801638A0_0000042C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x38(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
    b lbl_fn_801638A0_00000448
lbl_fn_801638A0_0000042C:
    addi r3, r31, 0x1290
    lwz r5, 0x1290(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
lbl_fn_801638A0_00000448:
    lwz r5, 0x38(r1)
    addi r3, r1, 0x20
    lwz r4, 0x3c(r1)
    lwz r0, 0x40(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801638A0_00000484
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801638A0_00000484:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_801638A0_00000560
    cmpwi r0, 0x8
    beq lbl_fn_801638A0_0000049C
    stw r0, 0x564(r29)
lbl_fn_801638A0_0000049C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_801638A0_00000560
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_801638A0_000004D4
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x44(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    b lbl_fn_801638A0_000004F0
lbl_fn_801638A0_000004D4:
    addi r3, r31, 0x129c
    lwz r5, 0x129c(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
lbl_fn_801638A0_000004F0:
    lwz r5, 0x44(r1)
    addi r3, r1, 0x14
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801638A0_0000052C
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801638A0_0000052C:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_801638A0_00000560
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_801638A0_00000560:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_801638A0_00000590
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_801638A0_00000590:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_801638A0_000005BC
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_801638A0_000005BC:
    lmw r27, 0x5c(r1)
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_80163B88(void)
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
    beq lbl_fn_80163B88_00000634
    mr r4, r29
    mr r5, r27
    mr r6, r28
    bl fn_801B9128
    mr r30, r3
lbl_fn_80163B88_00000634:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80163B88_000006C4
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80163B88_0000066C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_80163B88_00000688
lbl_fn_80163B88_0000066C:
    addi r3, r31, 0x12a8
    lwz r5, 0x12a8(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
lbl_fn_80163B88_00000688:
    lwz r5, 0x2c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80163B88_000006C4
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80163B88_000006C4:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_80163B88_00000878
    cmpwi r0, 0x8
    beq lbl_fn_80163B88_000006DC
    stw r0, 0x564(r29)
lbl_fn_80163B88_000006DC:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80163B88_00000878
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80163B88_00000714
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x38(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
    b lbl_fn_80163B88_00000730
lbl_fn_80163B88_00000714:
    addi r3, r31, 0x12b4
    lwz r5, 0x12b4(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
lbl_fn_80163B88_00000730:
    lwz r5, 0x38(r1)
    addi r3, r1, 0x20
    lwz r4, 0x3c(r1)
    lwz r0, 0x40(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80163B88_0000076C
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80163B88_0000076C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_80163B88_00000848
    cmpwi r0, 0x8
    beq lbl_fn_80163B88_00000784
    stw r0, 0x564(r29)
lbl_fn_80163B88_00000784:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80163B88_00000848
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80163B88_000007BC
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x44(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    b lbl_fn_80163B88_000007D8
lbl_fn_80163B88_000007BC:
    addi r3, r31, 0x12c0
    lwz r5, 0x12c0(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
lbl_fn_80163B88_000007D8:
    lwz r5, 0x44(r1)
    addi r3, r1, 0x14
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80163B88_00000814
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80163B88_00000814:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_80163B88_00000848
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80163B88_00000848:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_80163B88_00000878
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80163B88_00000878:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_80163B88_000008A4
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80163B88_000008A4:
    lmw r27, 0x5c(r1)
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_80163E70(void)
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
    beq lbl_fn_80163E70_00000920
    mr r4, r29
    mr r5, r28
    bl fn_801C706C
    mr r30, r3
lbl_fn_80163E70_00000920:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80163E70_000009B0
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80163E70_00000958
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_80163E70_00000974
lbl_fn_80163E70_00000958:
    addi r3, r31, 0x12cc
    lwz r5, 0x12cc(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
lbl_fn_80163E70_00000974:
    lwz r5, 0x2c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80163E70_000009B0
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80163E70_000009B0:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_80163E70_00000B64
    cmpwi r0, 0x8
    beq lbl_fn_80163E70_000009C8
    stw r0, 0x564(r29)
lbl_fn_80163E70_000009C8:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80163E70_00000B64
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80163E70_00000A00
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x38(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
    b lbl_fn_80163E70_00000A1C
lbl_fn_80163E70_00000A00:
    addi r3, r31, 0x12d8
    lwz r5, 0x12d8(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
lbl_fn_80163E70_00000A1C:
    lwz r5, 0x38(r1)
    addi r3, r1, 0x20
    lwz r4, 0x3c(r1)
    lwz r0, 0x40(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80163E70_00000A58
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80163E70_00000A58:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_80163E70_00000B34
    cmpwi r0, 0x8
    beq lbl_fn_80163E70_00000A70
    stw r0, 0x564(r29)
lbl_fn_80163E70_00000A70:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80163E70_00000B34
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80163E70_00000AA8
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x44(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    b lbl_fn_80163E70_00000AC4
lbl_fn_80163E70_00000AA8:
    addi r3, r31, 0x12e4
    lwz r5, 0x12e4(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
lbl_fn_80163E70_00000AC4:
    lwz r5, 0x44(r1)
    addi r3, r1, 0x14
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80163E70_00000B00
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80163E70_00000B00:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_80163E70_00000B34
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80163E70_00000B34:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_80163E70_00000B64
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80163E70_00000B64:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_80163E70_00000B90
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80163E70_00000B90:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    lwz r28, 0x50(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80164168(void)
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
    li r3, 0x1c
    li r4, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_80164168_00000C18
    mr r4, r29
    mr r5, r27
    mr r6, r28
    li r7, 0xf
    bl fn_8019BFF0
    mr r30, r3
lbl_fn_80164168_00000C18:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80164168_00000CA8
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80164168_00000C50
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_80164168_00000C6C
lbl_fn_80164168_00000C50:
    addi r3, r31, 0x12f0
    lwz r5, 0x12f0(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
lbl_fn_80164168_00000C6C:
    lwz r5, 0x2c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80164168_00000CA8
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80164168_00000CA8:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_80164168_00000E5C
    cmpwi r0, 0x8
    beq lbl_fn_80164168_00000CC0
    stw r0, 0x564(r29)
lbl_fn_80164168_00000CC0:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80164168_00000E5C
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80164168_00000CF8
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x38(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
    b lbl_fn_80164168_00000D14
lbl_fn_80164168_00000CF8:
    addi r3, r31, 0x12fc
    lwz r5, 0x12fc(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
lbl_fn_80164168_00000D14:
    lwz r5, 0x38(r1)
    addi r3, r1, 0x20
    lwz r4, 0x3c(r1)
    lwz r0, 0x40(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80164168_00000D50
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80164168_00000D50:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_80164168_00000E2C
    cmpwi r0, 0x8
    beq lbl_fn_80164168_00000D68
    stw r0, 0x564(r29)
lbl_fn_80164168_00000D68:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80164168_00000E2C
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80164168_00000DA0
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x44(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    b lbl_fn_80164168_00000DBC
lbl_fn_80164168_00000DA0:
    addi r3, r31, 0x1308
    lwz r5, 0x1308(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
lbl_fn_80164168_00000DBC:
    lwz r5, 0x44(r1)
    addi r3, r1, 0x14
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80164168_00000DF8
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80164168_00000DF8:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_80164168_00000E2C
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80164168_00000E2C:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_80164168_00000E5C
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80164168_00000E5C:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_80164168_00000E88
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80164168_00000E88:
    lmw r27, 0x5c(r1)
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_80164454(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r27, r5
    mr r28, r6
    lwz r29, lbl_8087F048
    cmpwi r29, 0x0
    beq lbl_fn_80164454_00000F08
    cmpwi r4, 0x0
    ble lbl_fn_80164454_00000ED8
    mr r3, r4
    bl fn_80219E6C
    mr r31, r3
    b lbl_fn_80164454_00000EDC
lbl_fn_80164454_00000ED8:
    li r31, 0x0
lbl_fn_80164454_00000EDC:
    lwz r30, lbl_8087F048
    mr r3, r29
    bl fn_800F8548
    mr r7, r3
    mr r3, r30
    mr r4, r27
    mr r5, r28
    mr r6, r31
    li r8, 0x0
    li r9, 0x1e
    bl fn_800FD658
lbl_fn_80164454_00000F08:
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801644D4(void)
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
    beq lbl_fn_801644D4_00000F80
    mr r4, r29
    mr r5, r27
    mr r6, r28
    bl fn_801B529C
    mr r30, r3
lbl_fn_801644D4_00000F80:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_801644D4_00001010
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_801644D4_00000FB8
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_801644D4_00000FD4
lbl_fn_801644D4_00000FB8:
    addi r3, r31, 0x1314
    lwz r5, 0x1314(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
lbl_fn_801644D4_00000FD4:
    lwz r5, 0x2c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801644D4_00001010
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801644D4_00001010:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_801644D4_000011C4
    cmpwi r0, 0x8
    beq lbl_fn_801644D4_00001028
    stw r0, 0x564(r29)
lbl_fn_801644D4_00001028:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_801644D4_000011C4
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_801644D4_00001060
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x38(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
    b lbl_fn_801644D4_0000107C
lbl_fn_801644D4_00001060:
    addi r3, r31, 0x1320
    lwz r5, 0x1320(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
lbl_fn_801644D4_0000107C:
    lwz r5, 0x38(r1)
    addi r3, r1, 0x20
    lwz r4, 0x3c(r1)
    lwz r0, 0x40(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801644D4_000010B8
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801644D4_000010B8:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_801644D4_00001194
    cmpwi r0, 0x8
    beq lbl_fn_801644D4_000010D0
    stw r0, 0x564(r29)
lbl_fn_801644D4_000010D0:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_801644D4_00001194
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_801644D4_00001108
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x44(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    b lbl_fn_801644D4_00001124
lbl_fn_801644D4_00001108:
    addi r3, r31, 0x132c
    lwz r5, 0x132c(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
lbl_fn_801644D4_00001124:
    lwz r5, 0x44(r1)
    addi r3, r1, 0x14
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801644D4_00001160
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801644D4_00001160:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_801644D4_00001194
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_801644D4_00001194:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_801644D4_000011C4
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_801644D4_000011C4:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_801644D4_000011F0
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_801644D4_000011F0:
    lmw r27, 0x5c(r1)
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_801647BC(void)
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
    beq lbl_fn_801647BC_00001260
    mr r4, r29
    bl fn_801B73F0
    mr r30, r3
lbl_fn_801647BC_00001260:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_801647BC_000012F0
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_801647BC_00001298
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_801647BC_000012B4
lbl_fn_801647BC_00001298:
    addi r3, r31, 0x1338
    lwz r5, 0x1338(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
lbl_fn_801647BC_000012B4:
    lwz r5, 0x2c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801647BC_000012F0
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801647BC_000012F0:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_801647BC_000014A4
    cmpwi r0, 0x8
    beq lbl_fn_801647BC_00001308
    stw r0, 0x564(r29)
lbl_fn_801647BC_00001308:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_801647BC_000014A4
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_801647BC_00001340
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x38(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
    b lbl_fn_801647BC_0000135C
lbl_fn_801647BC_00001340:
    addi r3, r31, 0x1344
    lwz r5, 0x1344(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
lbl_fn_801647BC_0000135C:
    lwz r5, 0x38(r1)
    addi r3, r1, 0x20
    lwz r4, 0x3c(r1)
    lwz r0, 0x40(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801647BC_00001398
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801647BC_00001398:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_801647BC_00001474
    cmpwi r0, 0x8
    beq lbl_fn_801647BC_000013B0
    stw r0, 0x564(r29)
lbl_fn_801647BC_000013B0:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_801647BC_00001474
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_801647BC_000013E8
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x44(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    b lbl_fn_801647BC_00001404
lbl_fn_801647BC_000013E8:
    addi r3, r31, 0x1350
    lwz r5, 0x1350(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
lbl_fn_801647BC_00001404:
    lwz r5, 0x44(r1)
    addi r3, r1, 0x14
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801647BC_00001440
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801647BC_00001440:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_801647BC_00001474
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_801647BC_00001474:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_801647BC_000014A4
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_801647BC_000014A4:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_801647BC_000014D0
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_801647BC_000014D0:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_801647BC_0000152C
    li r4, 0x135
    bl fn_80370174
    cmpwi r3, 0x0
    bne lbl_fn_801647BC_00001504
    lwz r3, lbl_8087F430
    li r4, 0x135
    li r5, 0x1
    li r6, 0x0
    bl fn_80370320
    b lbl_fn_801647BC_0000152C
lbl_fn_801647BC_00001504:
    lwz r3, lbl_8087F430
    li r4, 0x136
    bl fn_80370174
    cmpwi r3, 0x0
    bne lbl_fn_801647BC_0000152C
    lwz r3, lbl_8087F430
    li r4, 0x136
    li r5, 0x1
    li r6, 0x0
    bl fn_80370320
lbl_fn_801647BC_0000152C:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80164B00(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x40
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    bl _savegpr_27
    lfs f5, 0x0(r4)
    mr r27, r3
    lfs f4, 0x4(r4)
    lfs f3, 0x8(r4)
    lfs f0, 0xc(r4)
    lwz r0, 0x10(r4)
    stfs f5, 0xfc8(r3)
    stfs f4, 0xfcc(r3)
    stfs f3, 0xfd0(r3)
    stfs f0, 0xfd4(r3)
    stw r0, 0xfd8(r3)
    lwz r4, lbl_8087F430
    cmpwi r4, 0x0
    beq lbl_fn_80164B00_000015A4
    lwz r5, 0x5744(r4)
    b lbl_fn_80164B00_000015A8
lbl_fn_80164B00_000015A4:
    li r5, 0x0
lbl_fn_80164B00_000015A8:
    lwz r0, 0x12a4(r3)
    mr r4, r27
    stw r5, 0xfd8(r3)
    addi r5, r27, 0xb0
    oris r0, r0, 0x1000
    rlwinm r0, r0, 0, 5, 3
    stw r0, 0x12a4(r3)
    lwz r3, lbl_8087F048
    bl fn_80105F4C
    lfs f0, 0xfc8(r27)
    stfs f0, 0x7f4(r27)
    stfs f0, 0x7f8(r27)
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_80164B00_000015F0
    mr r5, r27
    li r4, 0x0
    bl fn_8010337C
lbl_fn_80164B00_000015F0:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80164B00_0000174C
    bl fn_80375184
    cmpwi r3, 0x0
    bne lbl_fn_80164B00_0000174C
    lwz r3, lbl_8087F430
    li r4, 0xd6
    bl fn_80370174
    cmpwi r3, 0x1
    bne lbl_fn_80164B00_0000174C
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_80164B00_00001630
    lwz r31, 0x48(r3)
    b lbl_fn_80164B00_00001634
lbl_fn_80164B00_00001630:
    li r31, 0x0
lbl_fn_80164B00_00001634:
    lfs f31, lbl_8088196C
    addi r27, r1, 0x14
    li r28, 0x9
    li r29, 0x0
    li r30, 0x5a
    b lbl_fn_80164B00_00001744
lbl_fn_80164B00_0000164C:
    lwz r6, 0x38(r31)
    li r4, 0x0
    li r3, 0x0
    li r5, 0x0
    rlwinm r0, r6, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80164B00_00001678
    clrlwi r0, r6, 31
    cmplwi r0, 0x1
    beq lbl_fn_80164B00_00001678
    li r5, 0x1
lbl_fn_80164B00_00001678:
    cmpwi r5, 0x0
    beq lbl_fn_80164B00_00001694
    lwz r0, 0x7e0(r31)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_80164B00_00001694
    li r3, 0x1
lbl_fn_80164B00_00001694:
    cmpwi r3, 0x0
    beq lbl_fn_80164B00_000016C8
    lwz r0, 0x55c(r31)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_80164B00_000016BC
    lwz r0, 0x560(r31)
    cmpwi r0, 0x1c
    bne lbl_fn_80164B00_000016BC
    li r3, 0x1
lbl_fn_80164B00_000016BC:
    cmpwi r3, 0x0
    bne lbl_fn_80164B00_000016C8
    li r4, 0x1
lbl_fn_80164B00_000016C8:
    cmpwi r4, 0x0
    beq lbl_fn_80164B00_00001740
    lwz r0, 0x54c(r31)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    beq lbl_fn_80164B00_00001740
    lwz r3, 0x50(r31)
    bl fn_80219558
    cmpwi r3, 0xb
    beq lbl_fn_80164B00_000016F8
    cmpwi r3, 0xe
    bne lbl_fn_80164B00_00001740
lbl_fn_80164B00_000016F8:
    sth r28, 0x1470(r31)
    addi r3, r31, 0x147c
    fmr f2, f31
    sth r29, 0x1472(r31)
    stw r29, 0x1474(r31)
    stfs f31, 0x14(r1)
    stfs f31, 0x18(r1)
    stw r30, 0x1478(r31)
    psq_l f1, 0x0(r27), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x1484(r31)
    sth r28, 0x8(r1)
    sth r29, 0xa(r1)
    stw r29, 0xc(r1)
    stfs f31, 0x1c(r1)
    stw r29, 0x20(r1)
    stw r30, 0x10(r1)
    stw r29, 0x1488(r31)
lbl_fn_80164B00_00001740:
    lwz r31, 0x14ac(r31)
lbl_fn_80164B00_00001744:
    cmpwi r31, 0x0
    bne lbl_fn_80164B00_0000164C
lbl_fn_80164B00_0000174C:
    addi r11, r1, 0x40
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    bl _restgpr_27
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80164D24(void)
{
    nofralloc
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 3
    beqlr
    lfs f0, 0xfd4(r3)
    lfs f1, lbl_8088196C
    lwz r4, lbl_8087EFA8
    fcmpo cr0, f0, f1
    lfs f2, 0x3a4(r4)
    ble lbl_fn_80164D24_000017B0
    fsubs f0, f0, f2
    stfs f0, 0xfd4(r3)
    fcmpo cr0, f0, f1
    cror eq, lt, eq
    bne lbl_fn_80164D24_000017B0
    lwz r4, lbl_8087F0A8
    lwz r0, 0x250(r4)
    stw r0, 0x1028(r3)
lbl_fn_80164D24_000017B0:
    lfs f0, 0xfcc(r3)
    lfs f1, lbl_8088196C
    fcmpo cr0, f0, f1
    ble lbl_fn_80164D24_000017CC
    fsubs f0, f0, f2
    stfs f0, 0xfcc(r3)
    blr
lbl_fn_80164D24_000017CC:
    lfs f0, 0xfd0(r3)
    fcmpo cr0, f0, f1
    ble lbl_fn_80164D24_000017E0
    fsubs f0, f0, f2
    stfs f0, 0xfd0(r3)
lbl_fn_80164D24_000017E0:
    lfs f1, 0xfd0(r3)
    lfs f0, lbl_8088196C
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bnelr
    lwz r4, lbl_8087F0A8
    lwz r0, 0x3d0(r4)
    cmpwi r0, 0x0
    beqlr
    stfs f0, 0x7f4(r3)
    li r4, 0x1
    b fn_80164DCC
    blr
}

asm void fn_80164DCC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 3
    bne lbl_fn_80164DCC_00001858
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_80164DCC_00001924
    lwz r0, 0x560(r3)
    cmpwi r0, 0x2e
    beq lbl_fn_80164DCC_00001858
    b lbl_fn_80164DCC_00001924
lbl_fn_80164DCC_00001858:
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_80164DCC_00001884
    lwz r0, 0x560(r3)
    cmpwi r0, 0x2e
    bne lbl_fn_80164DCC_00001884
    mr r3, r30
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8016EB48
lbl_fn_80164DCC_00001884:
    lwz r3, 0x12a4(r30)
    li r0, 0x1
    lfs f0, lbl_8088196C
    mr r4, r30
    rlwinm r3, r3, 0, 5, 2
    stw r3, 0x12a4(r30)
    stfs f0, 0x7f4(r30)
    stfs f0, 0x7f8(r30)
    stfs f0, 0xc00(r30)
    stfs f0, 0xfc8(r30)
    stfs f0, 0xfcc(r30)
    stfs f0, 0xfd0(r30)
    stfs f0, 0xfd4(r30)
    stw r0, 0x1028(r30)
    lwz r3, lbl_8087F048
    bl fn_8010607C
    lwz r3, lbl_8087F048
    mr r4, r30
    bl fn_80105F3C
    cmpwi r31, 0x0
    beq lbl_fn_80164DCC_00001918
    lwz r3, lbl_8087F048
    mr r4, r30
    addi r5, r30, 0xb0
    bl fn_8010608C
    lis r4, lbl_80737490@ha
    lfs f1, lbl_80881964
    addi r4, r4, lbl_80737490@l
    addi r3, r1, 0x8
    lwz r4, 0x8(r4)
    addi r5, r30, 0x528
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_80164DCC_00001918:
    lwz r3, lbl_8087F048
    mr r4, r30
    bl fn_8010652C
lbl_fn_80164DCC_00001924:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80164EF4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 3
    beq lbl_fn_80164EF4_00001984
    lwz r3, lbl_8087F0A8
    lwz r3, 0x3cc(r3)
    bl fn_80210220
    lfs f0, 0xfd0(r31)
    lwz r0, 0x4c(r3)
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r3, 0xc(r1)
    subf r3, r3, r0
    b lbl_fn_80164EF4_00001988
lbl_fn_80164EF4_00001984:
    li r3, 0x0
lbl_fn_80164EF4_00001988:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
