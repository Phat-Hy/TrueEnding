#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void fn_80044E0C(void);
extern void fn_8004ED34(void);
extern void fn_80084320(void);
extern void fn_80097D40(void);
extern void fn_801059F8(void);
extern void fn_80105B3C(void);
extern void fn_8011BEB8(void);
extern void fn_8014C228(void);
extern void fn_8014DEE4(void);
extern void fn_8016E970(void);
extern void fn_801B19E4(void);
extern void fn_801B409C(void);
extern void fn_801B4238(void);
extern void fn_801B4394(void);
extern void fn_801B46E8(void);
extern void fn_801B4D34(void);
extern void fn_801C3DCC(void);
extern void fn_80370174(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9990(void);
extern void fn_80695AD0(void);

/* External data declarations */
extern u8 lbl_80737A9C[];
extern u8 lbl_80766768[];
extern u8 lbl_8077A720[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F430;
extern u32 lbl_8087F610;
extern u32 lbl_80881964;
extern u32 lbl_80881968;
extern u32 lbl_8088196C;
extern u32 lbl_80881974;
extern u32 lbl_80881978;
extern u32 lbl_808819A8;
extern u32 lbl_808819F8;

/* Function declarations */
void fn_80169F04(void);
void fn_8016A20C(void);
void fn_8016A504(void);
void fn_8016A7EC(void);
void fn_8016A814(void);
void fn_8016AB0C(void);
void fn_8016ADF4(void);
void fn_8016AFE8(void);

asm void fn_80169F04(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    lis r5, lbl_80737A9C@ha
    li r7, 0x0
    stw r0, 0x74(r1)
    addi r5, r5, lbl_80737A9C@l
    addi r5, r5, 0x24
    stfd f31, 0x68(r1)
    fmr f31, f1
    mr r6, r5
    stw r31, 0x64(r1)
    lis r31, lbl_8077A720@ha
    addi r31, r31, lbl_8077A720@l
    stw r30, 0x60(r1)
    stw r29, 0x5c(r1)
    mr r29, r3
    li r3, 0xc
    stw r28, 0x58(r1)
    mr r28, r4
    li r4, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_80169F04_00000074
    fmr f1, f31
    mr r4, r29
    mr r5, r28
    bl fn_801B409C
    mr r30, r3
lbl_fn_80169F04_00000074:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80169F04_00000104
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80169F04_000000AC
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_80169F04_000000C8
lbl_fn_80169F04_000000AC:
    addi r3, r31, 0x1680
    lwz r5, 0x1680(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
lbl_fn_80169F04_000000C8:
    lwz r5, 0x2c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80169F04_00000104
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80169F04_00000104:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_80169F04_000002B8
    cmpwi r0, 0x8
    beq lbl_fn_80169F04_0000011C
    stw r0, 0x564(r29)
lbl_fn_80169F04_0000011C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80169F04_000002B8
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80169F04_00000154
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x38(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
    b lbl_fn_80169F04_00000170
lbl_fn_80169F04_00000154:
    addi r3, r31, 0x168c
    lwz r5, 0x168c(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
lbl_fn_80169F04_00000170:
    lwz r5, 0x38(r1)
    addi r3, r1, 0x20
    lwz r4, 0x3c(r1)
    lwz r0, 0x40(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80169F04_000001AC
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80169F04_000001AC:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_80169F04_00000288
    cmpwi r0, 0x8
    beq lbl_fn_80169F04_000001C4
    stw r0, 0x564(r29)
lbl_fn_80169F04_000001C4:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80169F04_00000288
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80169F04_000001FC
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x44(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    b lbl_fn_80169F04_00000218
lbl_fn_80169F04_000001FC:
    addi r3, r31, 0x1698
    lwz r5, 0x1698(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
lbl_fn_80169F04_00000218:
    lwz r5, 0x44(r1)
    addi r3, r1, 0x14
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80169F04_00000254
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80169F04_00000254:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_80169F04_00000288
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80169F04_00000288:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_80169F04_000002B8
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80169F04_000002B8:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_80169F04_000002E4
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80169F04_000002E4:
    lwz r0, 0x74(r1)
    lfd f31, 0x68(r1)
    lwz r31, 0x64(r1)
    lwz r30, 0x60(r1)
    lwz r29, 0x5c(r1)
    lwz r28, 0x58(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_8016A20C(void)
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
    li r3, 0x8
    li r4, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_8016A20C_00000378
    fmr f1, f31
    mr r4, r29
    mr r5, r27
    mr r6, r28
    bl fn_801B4238
    mr r30, r3
lbl_fn_8016A20C_00000378:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8016A20C_00000408
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8016A20C_000003B0
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_8016A20C_000003CC
lbl_fn_8016A20C_000003B0:
    addi r3, r31, 0x16a4
    lwz r5, 0x16a4(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
lbl_fn_8016A20C_000003CC:
    lwz r5, 0x2c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8016A20C_00000408
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8016A20C_00000408:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_8016A20C_000005BC
    cmpwi r0, 0x8
    beq lbl_fn_8016A20C_00000420
    stw r0, 0x564(r29)
lbl_fn_8016A20C_00000420:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8016A20C_000005BC
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8016A20C_00000458
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x38(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
    b lbl_fn_8016A20C_00000474
lbl_fn_8016A20C_00000458:
    addi r3, r31, 0x16b0
    lwz r5, 0x16b0(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
lbl_fn_8016A20C_00000474:
    lwz r5, 0x38(r1)
    addi r3, r1, 0x20
    lwz r4, 0x3c(r1)
    lwz r0, 0x40(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8016A20C_000004B0
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8016A20C_000004B0:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_8016A20C_0000058C
    cmpwi r0, 0x8
    beq lbl_fn_8016A20C_000004C8
    stw r0, 0x564(r29)
lbl_fn_8016A20C_000004C8:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8016A20C_0000058C
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8016A20C_00000500
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x44(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    b lbl_fn_8016A20C_0000051C
lbl_fn_8016A20C_00000500:
    addi r3, r31, 0x16bc
    lwz r5, 0x16bc(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
lbl_fn_8016A20C_0000051C:
    lwz r5, 0x44(r1)
    addi r3, r1, 0x14
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8016A20C_00000558
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8016A20C_00000558:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_8016A20C_0000058C
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8016A20C_0000058C:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_8016A20C_000005BC
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8016A20C_000005BC:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_8016A20C_000005E8
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8016A20C_000005E8:
    lfd f31, 0x68(r1)
    lmw r27, 0x54(r1)
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_8016A504(void)
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
    beq lbl_fn_8016A504_00000664
    mr r4, r29
    mr r5, r27
    mr r6, r28
    bl fn_801B4394
    mr r30, r3
lbl_fn_8016A504_00000664:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8016A504_000006F4
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8016A504_0000069C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_8016A504_000006B8
lbl_fn_8016A504_0000069C:
    addi r3, r31, 0x16c8
    lwz r5, 0x16c8(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
lbl_fn_8016A504_000006B8:
    lwz r5, 0x2c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8016A504_000006F4
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8016A504_000006F4:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_8016A504_000008A8
    cmpwi r0, 0x8
    beq lbl_fn_8016A504_0000070C
    stw r0, 0x564(r29)
lbl_fn_8016A504_0000070C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8016A504_000008A8
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8016A504_00000744
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x38(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
    b lbl_fn_8016A504_00000760
lbl_fn_8016A504_00000744:
    addi r3, r31, 0x16d4
    lwz r5, 0x16d4(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
lbl_fn_8016A504_00000760:
    lwz r5, 0x38(r1)
    addi r3, r1, 0x20
    lwz r4, 0x3c(r1)
    lwz r0, 0x40(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8016A504_0000079C
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8016A504_0000079C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_8016A504_00000878
    cmpwi r0, 0x8
    beq lbl_fn_8016A504_000007B4
    stw r0, 0x564(r29)
lbl_fn_8016A504_000007B4:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8016A504_00000878
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8016A504_000007EC
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x44(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    b lbl_fn_8016A504_00000808
lbl_fn_8016A504_000007EC:
    addi r3, r31, 0x16e0
    lwz r5, 0x16e0(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
lbl_fn_8016A504_00000808:
    lwz r5, 0x44(r1)
    addi r3, r1, 0x14
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8016A504_00000844
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8016A504_00000844:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_8016A504_00000878
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8016A504_00000878:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_8016A504_000008A8
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8016A504_000008A8:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_8016A504_000008D4
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8016A504_000008D4:
    lmw r27, 0x5c(r1)
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_8016A7EC(void)
{
    nofralloc
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_8016A7EC_00000908
    lwz r0, 0x560(r3)
    cmpwi r0, 0x5d
    bne lbl_fn_8016A7EC_00000908
    li r3, 0x0
    blr
lbl_fn_8016A7EC_00000908:
    li r3, 0x1
    blr
}

asm void fn_8016A814(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    lis r4, lbl_80737A9C@ha
    li r7, 0x0
    stw r0, 0x74(r1)
    addi r4, r4, lbl_80737A9C@l
    addi r5, r4, 0x24
    stfd f31, 0x68(r1)
    fmr f31, f1
    mr r6, r5
    li r4, 0x0
    stw r31, 0x64(r1)
    lis r31, lbl_8077A720@ha
    addi r31, r31, lbl_8077A720@l
    stw r30, 0x60(r1)
    stw r29, 0x5c(r1)
    mr r29, r3
    li r3, 0xc
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_8016A814_00000978
    fmr f1, f31
    mr r4, r29
    bl fn_801B46E8
    mr r30, r3
lbl_fn_8016A814_00000978:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8016A814_00000A08
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8016A814_000009B0
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_8016A814_000009CC
lbl_fn_8016A814_000009B0:
    addi r3, r31, 0x16ec
    lwz r5, 0x16ec(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
lbl_fn_8016A814_000009CC:
    lwz r5, 0x2c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8016A814_00000A08
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8016A814_00000A08:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_8016A814_00000BBC
    cmpwi r0, 0x8
    beq lbl_fn_8016A814_00000A20
    stw r0, 0x564(r29)
lbl_fn_8016A814_00000A20:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8016A814_00000BBC
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8016A814_00000A58
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x38(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
    b lbl_fn_8016A814_00000A74
lbl_fn_8016A814_00000A58:
    addi r3, r31, 0x16f8
    lwz r5, 0x16f8(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
lbl_fn_8016A814_00000A74:
    lwz r5, 0x38(r1)
    addi r3, r1, 0x20
    lwz r4, 0x3c(r1)
    lwz r0, 0x40(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8016A814_00000AB0
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8016A814_00000AB0:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_8016A814_00000B8C
    cmpwi r0, 0x8
    beq lbl_fn_8016A814_00000AC8
    stw r0, 0x564(r29)
lbl_fn_8016A814_00000AC8:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8016A814_00000B8C
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8016A814_00000B00
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x44(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    b lbl_fn_8016A814_00000B1C
lbl_fn_8016A814_00000B00:
    addi r3, r31, 0x1704
    lwz r5, 0x1704(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
lbl_fn_8016A814_00000B1C:
    lwz r5, 0x44(r1)
    addi r3, r1, 0x14
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8016A814_00000B58
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8016A814_00000B58:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_8016A814_00000B8C
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8016A814_00000B8C:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_8016A814_00000BBC
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8016A814_00000BBC:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_8016A814_00000BE8
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8016A814_00000BE8:
    lwz r0, 0x74(r1)
    lfd f31, 0x68(r1)
    lwz r31, 0x64(r1)
    lwz r30, 0x60(r1)
    lwz r29, 0x5c(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_8016AB0C(void)
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
    beq lbl_fn_8016AB0C_00000C6C
    mr r4, r29
    mr r5, r27
    mr r6, r28
    bl fn_801B4D34
    mr r30, r3
lbl_fn_8016AB0C_00000C6C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8016AB0C_00000CFC
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8016AB0C_00000CA4
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_8016AB0C_00000CC0
lbl_fn_8016AB0C_00000CA4:
    addi r3, r31, 0x1710
    lwz r5, 0x1710(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
lbl_fn_8016AB0C_00000CC0:
    lwz r5, 0x2c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8016AB0C_00000CFC
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8016AB0C_00000CFC:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_8016AB0C_00000EB0
    cmpwi r0, 0x8
    beq lbl_fn_8016AB0C_00000D14
    stw r0, 0x564(r29)
lbl_fn_8016AB0C_00000D14:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8016AB0C_00000EB0
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8016AB0C_00000D4C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x38(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
    b lbl_fn_8016AB0C_00000D68
lbl_fn_8016AB0C_00000D4C:
    addi r3, r31, 0x171c
    lwz r5, 0x171c(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
lbl_fn_8016AB0C_00000D68:
    lwz r5, 0x38(r1)
    addi r3, r1, 0x20
    lwz r4, 0x3c(r1)
    lwz r0, 0x40(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8016AB0C_00000DA4
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8016AB0C_00000DA4:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_8016AB0C_00000E80
    cmpwi r0, 0x8
    beq lbl_fn_8016AB0C_00000DBC
    stw r0, 0x564(r29)
lbl_fn_8016AB0C_00000DBC:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8016AB0C_00000E80
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8016AB0C_00000DF4
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x44(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    b lbl_fn_8016AB0C_00000E10
lbl_fn_8016AB0C_00000DF4:
    addi r3, r31, 0x1728
    lwz r5, 0x1728(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
lbl_fn_8016AB0C_00000E10:
    lwz r5, 0x44(r1)
    addi r3, r1, 0x14
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8016AB0C_00000E4C
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8016AB0C_00000E4C:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_8016AB0C_00000E80
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8016AB0C_00000E80:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_8016AB0C_00000EB0
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8016AB0C_00000EB0:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_8016AB0C_00000EDC
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8016AB0C_00000EDC:
    lmw r27, 0x5c(r1)
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_8016ADF4(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    li r0, 0x1
    stw r31, 0x5c(r1)
    mr r31, r4
    stw r30, 0x58(r1)
    mr r30, r3
    lwz r5, 0x48(r3)
    cmpwi r5, 0x1
    beq lbl_fn_8016ADF4_00000F28
    cmpwi r5, 0x4
    beq lbl_fn_8016ADF4_00000F28
    li r0, 0x0
lbl_fn_8016ADF4_00000F28:
    cmpwi r0, 0x0
    bne lbl_fn_8016ADF4_00000F6C
    lwz r4, 0x48(r4)
    li r0, 0x0
    cmpw r5, r4
    beq lbl_fn_8016ADF4_00000F60
    cmpwi r5, 0x0
    bne lbl_fn_8016ADF4_00000F50
    cmpwi r4, 0x3
    beq lbl_fn_8016ADF4_00000F60
lbl_fn_8016ADF4_00000F50:
    cmpwi r5, 0x3
    bne lbl_fn_8016ADF4_00000F64
    cmpwi r4, 0x0
    bne lbl_fn_8016ADF4_00000F64
lbl_fn_8016ADF4_00000F60:
    li r0, 0x1
lbl_fn_8016ADF4_00000F64:
    cmpwi r0, 0x0
    beq lbl_fn_8016ADF4_00000F74
lbl_fn_8016ADF4_00000F6C:
    li r3, 0x0
    b lbl_fn_8016ADF4_000010CC
lbl_fn_8016ADF4_00000F74:
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    beq lbl_fn_8016ADF4_00000F88
    li r3, 0x0
    b lbl_fn_8016ADF4_000010CC
lbl_fn_8016ADF4_00000F88:
    li r4, 0x46
    addi r3, r3, 0xb0
    bl fn_80097D40
    cmpwi r3, 0x0
    bne lbl_fn_8016ADF4_00000FA4
    li r3, 0x0
    b lbl_fn_8016ADF4_000010CC
lbl_fn_8016ADF4_00000FA4:
    lwz r3, 0x12a4(r30)
    srwi. r0, r3, 31
    beq lbl_fn_8016ADF4_00000FB8
    li r3, 0x0
    b lbl_fn_8016ADF4_000010CC
lbl_fn_8016ADF4_00000FB8:
    lwz r0, 0x7e0(r30)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_8016ADF4_00000FD0
    li r3, 0x0
    b lbl_fn_8016ADF4_000010CC
lbl_fn_8016ADF4_00000FD0:
    lwz r0, 0x958(r30)
    rlwinm r0, r0, 0, 24, 24
    cmplwi r0, 0x80
    bne lbl_fn_8016ADF4_00000FE8
    li r3, 0x0
    b lbl_fn_8016ADF4_000010CC
lbl_fn_8016ADF4_00000FE8:
    extrwi r0, r3, 1, 9
    cmplwi r0, 0x1
    bne lbl_fn_8016ADF4_00000FFC
    li r3, 0x0
    b lbl_fn_8016ADF4_000010CC
lbl_fn_8016ADF4_00000FFC:
    lwz r0, 0x55c(r30)
    cmpwi r0, 0x6
    bne lbl_fn_8016ADF4_00001028
    lwz r3, 0x560(r30)
    subi r0, r3, 0x14
    cmplwi r0, 0x2
    ble lbl_fn_8016ADF4_00001028
    cmpwi r3, 0x4
    beq lbl_fn_8016ADF4_00001028
    li r3, 0x0
    b lbl_fn_8016ADF4_000010CC
lbl_fn_8016ADF4_00001028:
    lfs f1, 0x52c(r31)
    lfs f0, 0x52c(r30)
    lfs f3, 0x530(r31)
    fsubs f4, f1, f0
    lfs f2, 0x530(r30)
    lfs f1, 0x528(r31)
    fsubs f2, f3, f2
    lfs f0, 0x528(r30)
    fabs f3, f4
    fsubs f1, f1, f0
    lfs f0, lbl_80881978
    stfs f4, 0x18(r1)
    frsp f3, f3
    stfs f1, 0x14(r1)
    fcmpo cr0, f3, f0
    stfs f2, 0x1c(r1)
    ble lbl_fn_8016ADF4_00001074
    li r3, 0x0
    b lbl_fn_8016ADF4_000010CC
lbl_fn_8016ADF4_00001074:
    lfs f1, lbl_8088196C
    addi r3, r1, 0x20
    lfs f0, lbl_80881964
    li r4, 0x79
    stfs f1, 0x8(r1)
    stfs f1, 0xc(r1)
    stfs f0, 0x10(r1)
    lfs f1, 0x538(r30)
    bl fn_805F8E70
    addi r4, r1, 0x8
    addi r3, r1, 0x20
    mr r5, r4
    bl fn_805F93C0
    addi r3, r1, 0x14
    addi r4, r1, 0x8
    bl fn_805F9990
    lfs f0, lbl_808819A8
    fcmpo cr0, f1, f0
    mfcr r0
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi r3, r0, 5
lbl_fn_8016ADF4_000010CC:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_8016AFE8(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    addi r11, r1, 0x130
    bl _savegpr_27
    li r0, 0x0
    stw r0, 0xac(r1)
    mr r27, r3
    lis r31, lbl_8077A720@ha
    stw r0, 0xb0(r1)
    addi r5, r1, 0x50
    lfs f0, lbl_808819F8
    mr r28, r4
    stw r0, 0xb4(r1)
    addi r31, r31, lbl_8077A720@l
    lfs f5, lbl_80881974
    addi r6, r1, 0x5c
    stw r0, 0xb8(r1)
    addi r8, r27, 0x5b8
    li r7, 0x20
    li r9, 0x0
    lfs f2, 0x530(r3)
    psq_l f1, 0x528(r3), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    lwz r3, lbl_8087EE98
    lfs f3, 0x54(r1)
    stfs f2, 0x58(r1)
    fadds f7, f3, f0
    lfs f0, 0x50(r1)
    stfs f7, 0x54(r1)
    lfs f6, 0x8(r4)
    lfs f4, 0x4(r4)
    fmuls f8, f6, f5
    lfs f3, 0x0(r4)
    fmuls f6, f4, f5
    addi r4, r1, 0x78
    fmuls f5, f3, f5
    stfs f8, 0x70(r1)
    fadds f4, f2, f8
    stfs f5, 0x68(r1)
    fadds f3, f7, f6
    fadds f0, f0, f5
    stfs f6, 0x6c(r1)
    stfs f0, 0x5c(r1)
    stfs f3, 0x60(r1)
    stfs f4, 0x64(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_8016AFE8_000011E0
    lwz r3, 0xb0(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8016AFE8_000011E0
    lwz r0, 0x8(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_8016AFE8_000011E0
    lwz r30, 0xc(r3)
    mr r4, r27
    mr r3, r30
    bl fn_8016ADF4
    cmpwi r3, 0x0
    beq lbl_fn_8016AFE8_000011E0
    b lbl_fn_8016AFE8_000011E4
lbl_fn_8016AFE8_000011E0:
    li r30, 0x0
lbl_fn_8016AFE8_000011E4:
    cmpwi r30, 0x0
    bne lbl_fn_8016AFE8_000011F4
    li r3, 0x0
    b lbl_fn_8016AFE8_000019B8
lbl_fn_8016AFE8_000011F4:
    lis r5, lbl_80737A9C@ha
    li r3, 0x18
    addi r5, r5, lbl_80737A9C@l
    li r4, 0x0
    addi r5, r5, 0x24
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    mr r29, r3
    beq lbl_fn_8016AFE8_00001240
    lfs f1, lbl_80881968
    mr r4, r30
    li r5, 0x46
    li r6, 0x0
    fmr f2, f1
    li r7, 0x0
    bl fn_801C3DCC
    mr r29, r3
lbl_fn_8016AFE8_00001240:
    lwz r0, 0x55c(r30)
    cmpwi r0, 0x6
    bne lbl_fn_8016AFE8_000012D0
    lwz r0, 0xf80(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8016AFE8_00001278
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0xc8(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0xcc(r1)
    stw r0, 0xd0(r1)
    b lbl_fn_8016AFE8_00001294
lbl_fn_8016AFE8_00001278:
    addi r3, r31, 0x1734
    lwz r5, 0x1734(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0xc8(r1)
    stw r4, 0xcc(r1)
    stw r0, 0xd0(r1)
lbl_fn_8016AFE8_00001294:
    lwz r5, 0xc8(r1)
    addi r3, r1, 0x2c
    lwz r4, 0xcc(r1)
    lwz r0, 0xd0(r1)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8016AFE8_000012D0
    lwz r3, 0xf80(r30)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8016AFE8_000012D0:
    lwz r0, 0x55c(r30)
    cmpwi r0, 0x6
    beq lbl_fn_8016AFE8_00001484
    cmpwi r0, 0x8
    beq lbl_fn_8016AFE8_000012E8
    stw r0, 0x564(r30)
lbl_fn_8016AFE8_000012E8:
    lwz r0, 0x55c(r30)
    cmpwi r0, 0x6
    bne lbl_fn_8016AFE8_00001484
    lwz r0, 0xf80(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8016AFE8_00001320
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0xd4(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0xd8(r1)
    stw r0, 0xdc(r1)
    b lbl_fn_8016AFE8_0000133C
lbl_fn_8016AFE8_00001320:
    addi r3, r31, 0x1740
    lwz r5, 0x1740(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0xd4(r1)
    stw r4, 0xd8(r1)
    stw r0, 0xdc(r1)
lbl_fn_8016AFE8_0000133C:
    lwz r5, 0xd4(r1)
    addi r3, r1, 0x44
    lwz r4, 0xd8(r1)
    lwz r0, 0xdc(r1)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8016AFE8_00001378
    lwz r3, 0xf80(r30)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8016AFE8_00001378:
    lwz r0, 0x55c(r30)
    cmpwi r0, 0x6
    beq lbl_fn_8016AFE8_00001454
    cmpwi r0, 0x8
    beq lbl_fn_8016AFE8_00001390
    stw r0, 0x564(r30)
lbl_fn_8016AFE8_00001390:
    lwz r0, 0x55c(r30)
    cmpwi r0, 0x6
    bne lbl_fn_8016AFE8_00001454
    lwz r0, 0xf80(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8016AFE8_000013C8
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0xe0(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0xe4(r1)
    stw r0, 0xe8(r1)
    b lbl_fn_8016AFE8_000013E4
lbl_fn_8016AFE8_000013C8:
    addi r3, r31, 0x174c
    lwz r5, 0x174c(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0xe0(r1)
    stw r4, 0xe4(r1)
    stw r0, 0xe8(r1)
lbl_fn_8016AFE8_000013E4:
    lwz r5, 0xe0(r1)
    addi r3, r1, 0x38
    lwz r4, 0xe4(r1)
    lwz r0, 0xe8(r1)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8016AFE8_00001420
    lwz r3, 0xf80(r30)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8016AFE8_00001420:
    mr r3, r30
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r30)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r30)
    beq lbl_fn_8016AFE8_00001454
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8016AFE8_00001454:
    li r0, 0x6
    stw r0, 0x55c(r30)
    li r0, 0x0
    lwz r3, 0xf80(r30)
    cmpwi r3, 0x0
    stw r0, 0xf80(r30)
    beq lbl_fn_8016AFE8_00001484
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8016AFE8_00001484:
    li r0, 0x6
    stw r0, 0x55c(r30)
    lwz r3, 0xf80(r30)
    cmpwi r3, 0x0
    stw r29, 0xf80(r30)
    beq lbl_fn_8016AFE8_000014B0
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8016AFE8_000014B0:
    addi r3, r30, 0xc58
    li r4, 0x0
    bl fn_8011BEB8
    lwz r0, 0x12a4(r30)
    srwi. r0, r0, 31
    beq lbl_fn_8016AFE8_00001604
    lwz r0, 0x12a4(r30)
    clrlwi r0, r0, 2
    stw r0, 0x12a4(r30)
    lwz r3, lbl_8087F430
    lwz r4, 0x10d8(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8016AFE8_0000152C
    lwz r3, 0xc38(r30)
    cmpwi r3, 0x0
    ble lbl_fn_8016AFE8_0000152C
    lwz r0, 0xc3c(r30)
    cmpwi r0, 0x0
    ble lbl_fn_8016AFE8_0000152C
    subi r0, r3, 0x1
    lwz r3, 0xb0(r4)
    slwi r0, r0, 6
    li r5, 0x0
    add r3, r3, r0
    stw r5, 0x3c(r3)
    lwz r3, 0xc3c(r30)
    lwz r4, 0xb0(r4)
    subi r0, r3, 0x1
    slwi r0, r0, 6
    add r3, r4, r0
    stw r5, 0x3c(r3)
lbl_fn_8016AFE8_0000152C:
    lwz r4, 0x48(r30)
    cmpwi r4, 0x0
    bne lbl_fn_8016AFE8_00001560
    lwz r3, lbl_8087F0A8
    lwz r0, 0x278(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8016AFE8_00001560
    lwz r3, 0x5c(r30)
    lwz r0, 0x11c(r3)
    cmpwi r0, 0x1
    bne lbl_fn_8016AFE8_00001560
    li r0, 0x1
    b lbl_fn_8016AFE8_00001580
lbl_fn_8016AFE8_00001560:
    cmpwi r4, 0x0
    bne lbl_fn_8016AFE8_0000157C
    lwz r0, 0x12a8(r30)
    extrwi. r0, r0, 1, 14
    beq lbl_fn_8016AFE8_0000157C
    li r0, 0x1
    b lbl_fn_8016AFE8_00001580
lbl_fn_8016AFE8_0000157C:
    li r0, 0x0
lbl_fn_8016AFE8_00001580:
    cmpwi r0, 0x0
    beq lbl_fn_8016AFE8_00001604
    lwz r3, lbl_8087F430
    li r4, 0x25
    bl fn_80370174
    cmpwi r3, 0x1
    blt lbl_fn_8016AFE8_000015E4
    lwz r3, 0x648(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8016AFE8_000015B0
    li r4, 0x1
    bl fn_80044E0C
lbl_fn_8016AFE8_000015B0:
    lwz r3, 0x64c(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8016AFE8_000015C4
    li r4, 0x1
    bl fn_80044E0C
lbl_fn_8016AFE8_000015C4:
    li r0, -0x1
    stw r0, 0x674(r30)
    li r0, 0x0
    mr r3, r30
    stw r0, 0x648(r30)
    stw r0, 0x64c(r30)
    bl fn_8014C228
    b lbl_fn_8016AFE8_00001604
lbl_fn_8016AFE8_000015E4:
    lwz r0, 0x674(r30)
    cmpwi r0, 0x0
    blt lbl_fn_8016AFE8_00001604
    mr r3, r30
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8014DEE4
lbl_fn_8016AFE8_00001604:
    lwz r0, 0x12a4(r30)
    extrwi. r0, r0, 1, 26
    beq lbl_fn_8016AFE8_0000161C
    lwz r0, 0x12a4(r30)
    rlwinm r0, r0, 0, 27, 25
    stw r0, 0x12a4(r30)
lbl_fn_8016AFE8_0000161C:
    lwz r7, 0xd1c(r30)
    cmpwi r7, 0x0
    beq lbl_fn_8016AFE8_000016C4
    lwz r0, 0x12a8(r7)
    mr r5, r7
    lwz r6, 0x1028(r7)
    li r4, 0x0
    extrwi r0, r0, 1, 15
    cntlzw r0, r0
    srwi r3, r0, 5
    b lbl_fn_8016AFE8_00001664
lbl_fn_8016AFE8_00001648:
    lwz r0, 0xfe8(r5)
    cmplw r0, r30
    bne lbl_fn_8016AFE8_0000165C
    li r0, 0x1
    b lbl_fn_8016AFE8_00001680
lbl_fn_8016AFE8_0000165C:
    addi r5, r5, 0x4
    addi r4, r4, 0x1
lbl_fn_8016AFE8_00001664:
    cmpwi r3, 0x0
    mr r0, r6
    bne lbl_fn_8016AFE8_00001674
    slwi r0, r6, 1
lbl_fn_8016AFE8_00001674:
    cmpw r4, r0
    blt lbl_fn_8016AFE8_00001648
    li r0, 0x0
lbl_fn_8016AFE8_00001680:
    cmpwi r0, 0x0
    beq lbl_fn_8016AFE8_000016C4
    li r0, 0x10
    mr r4, r7
    li r3, 0x0
    mtctr r0
lbl_fn_8016AFE8_00001698:
    lwz r0, 0xfe8(r4)
    cmplw r0, r30
    bne lbl_fn_8016AFE8_000016B8
    slwi r0, r3, 2
    li r4, 0x0
    add r3, r7, r0
    stw r4, 0xfe8(r3)
    b lbl_fn_8016AFE8_000016C4
lbl_fn_8016AFE8_000016B8:
    addi r4, r4, 0x4
    addi r3, r3, 0x1
    bdnz lbl_fn_8016AFE8_00001698
lbl_fn_8016AFE8_000016C4:
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_8016AFE8_000016E4
    mr r4, r30
    bl fn_801059F8
    lwz r3, lbl_8087F048
    mr r4, r30
    bl fn_80105B3C
lbl_fn_8016AFE8_000016E4:
    lwz r0, 0x12a8(r30)
    lis r3, lbl_80737A9C@ha
    addi r3, r3, lbl_80737A9C@l
    lfs f0, lbl_8088196C
    rlwinm r0, r0, 0, 24, 22
    stw r0, 0x12a8(r30)
    addi r5, r3, 0x24
    li r3, 0x18
    stfs f0, 0xfb8(r30)
    li r0, 0x0
    mr r6, r5
    li r4, 0x0
    stfs f0, 0xfbc(r30)
    li r7, 0x0
    stw r0, 0x58c(r30)
    stw r30, 0xfc0(r27)
    bl fn_80084320
    cmpwi r3, 0x0
    mr r29, r3
    beq lbl_fn_8016AFE8_00001744
    mr r4, r27
    mr r5, r28
    bl fn_801B19E4
    mr r29, r3
lbl_fn_8016AFE8_00001744:
    lwz r0, 0x55c(r27)
    cmpwi r0, 0x6
    bne lbl_fn_8016AFE8_000017D4
    lwz r0, 0xf80(r27)
    cmpwi r0, 0x0
    bne lbl_fn_8016AFE8_0000177C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0xec(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0xf0(r1)
    stw r0, 0xf4(r1)
    b lbl_fn_8016AFE8_00001798
lbl_fn_8016AFE8_0000177C:
    addi r3, r31, 0x1758
    lwz r5, 0x1758(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0xec(r1)
    stw r4, 0xf0(r1)
    stw r0, 0xf4(r1)
lbl_fn_8016AFE8_00001798:
    lwz r5, 0xec(r1)
    addi r3, r1, 0x8
    lwz r4, 0xf0(r1)
    lwz r0, 0xf4(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8016AFE8_000017D4
    lwz r3, 0xf80(r27)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8016AFE8_000017D4:
    lwz r0, 0x55c(r27)
    cmpwi r0, 0x6
    beq lbl_fn_8016AFE8_00001988
    cmpwi r0, 0x8
    beq lbl_fn_8016AFE8_000017EC
    stw r0, 0x564(r27)
lbl_fn_8016AFE8_000017EC:
    lwz r0, 0x55c(r27)
    cmpwi r0, 0x6
    bne lbl_fn_8016AFE8_00001988
    lwz r0, 0xf80(r27)
    cmpwi r0, 0x0
    bne lbl_fn_8016AFE8_00001824
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0xf8(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0xfc(r1)
    stw r0, 0x100(r1)
    b lbl_fn_8016AFE8_00001840
lbl_fn_8016AFE8_00001824:
    addi r3, r31, 0x1764
    lwz r5, 0x1764(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0xf8(r1)
    stw r4, 0xfc(r1)
    stw r0, 0x100(r1)
lbl_fn_8016AFE8_00001840:
    lwz r5, 0xf8(r1)
    addi r3, r1, 0x20
    lwz r4, 0xfc(r1)
    lwz r0, 0x100(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8016AFE8_0000187C
    lwz r3, 0xf80(r27)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8016AFE8_0000187C:
    lwz r0, 0x55c(r27)
    cmpwi r0, 0x6
    beq lbl_fn_8016AFE8_00001958
    cmpwi r0, 0x8
    beq lbl_fn_8016AFE8_00001894
    stw r0, 0x564(r27)
lbl_fn_8016AFE8_00001894:
    lwz r0, 0x55c(r27)
    cmpwi r0, 0x6
    bne lbl_fn_8016AFE8_00001958
    lwz r0, 0xf80(r27)
    cmpwi r0, 0x0
    bne lbl_fn_8016AFE8_000018CC
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x104(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x108(r1)
    stw r0, 0x10c(r1)
    b lbl_fn_8016AFE8_000018E8
lbl_fn_8016AFE8_000018CC:
    addi r3, r31, 0x1770
    lwz r5, 0x1770(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x104(r1)
    stw r4, 0x108(r1)
    stw r0, 0x10c(r1)
lbl_fn_8016AFE8_000018E8:
    lwz r5, 0x104(r1)
    addi r3, r1, 0x14
    lwz r4, 0x108(r1)
    lwz r0, 0x10c(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8016AFE8_00001924
    lwz r3, 0xf80(r27)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8016AFE8_00001924:
    mr r3, r27
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r27)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r27)
    beq lbl_fn_8016AFE8_00001958
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8016AFE8_00001958:
    lwz r3, 0xf80(r27)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r27)
    cmpwi r3, 0x0
    stw r0, 0xf80(r27)
    beq lbl_fn_8016AFE8_00001988
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8016AFE8_00001988:
    lwz r3, 0xf80(r27)
    li r0, 0x6
    stw r0, 0x55c(r27)
    cmpwi r3, 0x0
    stw r29, 0xf80(r27)
    beq lbl_fn_8016AFE8_000019B4
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8016AFE8_000019B4:
    li r3, 0x1
lbl_fn_8016AFE8_000019B8:
    addi r11, r1, 0x130
    bl _restgpr_27
    lwz r0, 0x134(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}
