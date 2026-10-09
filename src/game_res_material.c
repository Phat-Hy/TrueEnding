#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_800844D8(void);
extern void fn_800E0A64(void);
extern void fn_800E14A4(void);
extern void fn_800E1A48(void);
extern void fn_800E1D5C(void);
extern void fn_80232ACC(void);
extern void fn_80232B7C(void);
extern void fn_80232FF4(void);
extern void fn_802346AC(void);
extern void fn_802347DC(void);
extern void fn_80234958(void);
extern void fn_80239DAC(void);
extern void fn_8023A680(void);
extern void fn_8024067C(void);
extern void fn_8024068C(void);
extern void fn_80242FF4(void);
extern void fn_80243514(void);
extern void fn_8068B39C(void);
extern void fn_806920C0(void);
extern void fn_8069293C(void);
extern void fn_806952C4(void);

/* External data declarations */
extern u8 lbl_80779AB8[];
extern u8 lbl_80783C20[];
extern u8 lbl_80783C60[];
extern u8 lbl_80783C98[];
extern u8 lbl_80783CA0[];

/* Small data declarations */
extern u32 lbl_8087F3C4;
extern u32 lbl_8087F3C8;
extern u32 lbl_80880390;
extern u32 lbl_808803C0;

/* Function declarations */
void fn_8023B71C(void);
void fn_8023B724(void);
void dtor_8023B9D0(void);
void fn_8023BA10(void);
void fn_8023C080(void);
void fn_8023C0C0(void);
void fn_8023C6F4(void);

asm void fn_8023B71C(void)
{
    nofralloc
    mr r3, r4
    b fn_802346AC
}

asm void fn_8023B724(void)
{
    nofralloc
    stwu r1, -0x160(r1)
    mflr r0
    stw r0, 0x164(r1)
    addi r11, r1, 0x160
    bl _savegpr_27
    lwz r0, 0x0(r4)
    mr r30, r3
    mr r27, r4
    li r31, 0x0
    cmpwi r0, 0x0
    beq lbl_fn_8023B724_00000040
    cmpwi r0, 0x1
    beq lbl_fn_8023B724_00000110
    b lbl_fn_8023B724_00000298
lbl_fn_8023B724_00000040:
    lwz r3, 0x4c(r4)
    lwz r4, 0x50(r4)
    bl fn_80232B7C
    lwz r3, 0x58(r27)
    bl fn_802346AC
    lwz r3, 0x40(r27)
    li r0, 0x1
    stw r3, 0x8(r1)
    mr r3, r30
    addi r8, r27, 0x14
    addi r9, r27, 0x20
    lwz r4, 0x44(r27)
    addi r10, r27, 0x30
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    lwz r4, 0x4(r27)
    lwz r5, 0x8(r27)
    lwz r6, 0xc(r27)
    lwz r7, 0x10(r27)
    lfs f1, 0x2c(r27)
    bl fn_8023A680
    lwz r6, 0x54(r27)
    mr r31, r3
    lwz r5, 0x50(r27)
    li r7, 0x0
    lwz r4, 0x4c(r27)
    li r3, 0x0
    b lbl_fn_8023B724_000000EC
lbl_fn_8023B724_000000B0:
    lwz r0, 0xe0(r30)
    add r8, r0, r3
    lwz r0, 0x8(r8)
    cmplw r0, r4
    bne lbl_fn_8023B724_000000E4
    lwz r0, 0xc(r8)
    cmpw r0, r5
    beq lbl_fn_8023B724_000000D8
    cmpwi r5, -0x2
    bne lbl_fn_8023B724_000000E4
lbl_fn_8023B724_000000D8:
    lwz r0, 0x10(r8)
    or r0, r0, r6
    stw r0, 0x10(r8)
lbl_fn_8023B724_000000E4:
    addi r7, r7, 0x1
    addi r3, r3, 0x64
lbl_fn_8023B724_000000EC:
    lwz r0, 0xd8(r30)
    cmplw r7, r0
    blt lbl_fn_8023B724_000000B0
    lwz r0, 0x58(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8023B724_00000298
    addi r3, r30, 0x4c
    bl fn_80232FF4
    b lbl_fn_8023B724_00000298
lbl_fn_8023B724_00000110:
    lwz r29, 0x4(r4)
    cmpwi r29, 0x0
    beq lbl_fn_8023B724_00000188
    mr r4, r29
    addi r3, r3, 0x4c
    bl fn_80232ACC
    lwz r3, 0xcc(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8023B724_00000298
    lwz r0, 0xd0(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8023B724_00000298
    li r0, 0x0
    li r4, 0x1
    stw r4, 0xe0(r1)
    addi r4, r1, 0xe0
    stw r29, 0xe4(r1)
    stw r0, 0x12c(r1)
    stw r0, 0x130(r1)
    stw r0, 0x134(r1)
    stw r0, 0x13c(r1)
    stw r0, 0x138(r1)
    stw r0, 0x128(r1)
    lwz r0, 0xb8(r30)
    stw r0, 0x140(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    b lbl_fn_8023B724_00000298
lbl_fn_8023B724_00000188:
    lwz r28, 0x58(r4)
    cmpwi r28, 0x0
    beq lbl_fn_8023B724_00000208
    lwz r29, 0x5c(r4)
    mr r4, r28
    addi r3, r3, 0x4c
    mr r5, r29
    bl fn_802347DC
    lwz r3, 0xcc(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8023B724_00000298
    lwz r0, 0xd0(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8023B724_00000298
    li r0, 0x0
    li r4, 0x1
    stw r4, 0x7c(r1)
    addi r4, r1, 0x7c
    stw r0, 0x80(r1)
    stw r0, 0xc8(r1)
    stw r0, 0xcc(r1)
    stw r0, 0xd0(r1)
    stw r29, 0xd8(r1)
    stw r28, 0xd4(r1)
    stw r0, 0xc4(r1)
    lwz r0, 0xb8(r30)
    stw r0, 0xdc(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    b lbl_fn_8023B724_00000298
lbl_fn_8023B724_00000208:
    lwz r28, 0x48(r4)
    cmpwi r28, 0x0
    beq lbl_fn_8023B724_00000288
    lwz r29, 0x5c(r4)
    mr r4, r28
    addi r3, r3, 0x4c
    mr r5, r29
    bl fn_80234958
    lwz r3, 0xcc(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8023B724_00000298
    lwz r0, 0xd0(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8023B724_00000298
    li r0, 0x0
    li r4, 0x1
    stw r4, 0x18(r1)
    addi r4, r1, 0x18
    stw r0, 0x1c(r1)
    stw r0, 0x64(r1)
    stw r0, 0x68(r1)
    stw r0, 0x6c(r1)
    stw r29, 0x74(r1)
    stw r0, 0x70(r1)
    stw r28, 0x60(r1)
    lwz r0, 0xb8(r30)
    stw r0, 0x78(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    b lbl_fn_8023B724_00000298
lbl_fn_8023B724_00000288:
    lwz r4, 0x4c(r4)
    lwz r5, 0x50(r27)
    lwz r6, 0x5c(r27)
    bl fn_80239DAC
lbl_fn_8023B724_00000298:
    addi r11, r1, 0x160
    mr r3, r31
    bl _restgpr_27
    lwz r0, 0x164(r1)
    mtlr r0
    addi r1, r1, 0x160
    blr
}

asm void dtor_8023B9D0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_dtor_8023B9D0_000002DC
    cmpwi r4, 0x0
    ble lbl_dtor_8023B9D0_000002DC
    bl dtor_80084684
lbl_dtor_8023B9D0_000002DC:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8023BA10(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    li r5, 0x0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    mr r31, r4
    stw r30, 0x58(r1)
    mr r30, r3
    stw r29, 0x54(r1)
    stw r28, 0x50(r1)
    lwz r6, 0x0(r3)
    stb r5, 0x40(r1)
    lbz r0, 0x32(r6)
    stb r5, 0x41(r1)
    cmpwi r0, 0x0
    stw r3, 0x44(r1)
    bne lbl_fn_8023BA10_0000042C
    lwz r28, 0x34(r6)
    cmpwi r28, 0x0
    beq lbl_fn_8023BA10_000003CC
    mr r4, r28
    addi r3, r1, 0x30
    bl fn_800E14A4
    li r0, 0x1
    stb r0, 0x31(r1)
    lwz r3, 0x0(r28)
    lwz r3, 0x24(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8023BA10_0000039C
    lwz r12, 0x0(r3)
    li r29, 0x0
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    cmpwi r3, -0x1
    bne lbl_fn_8023BA10_00000388
    li r29, 0x1
lbl_fn_8023BA10_00000388:
    cmpwi r29, 0x0
    beq lbl_fn_8023BA10_0000039C
    lwz r3, 0x0(r28)
    li r4, 0x1
    bl fn_800E0A64
lbl_fn_8023BA10_0000039C:
    lwz r3, 0x34(r1)
    lwz r4, 0x0(r3)
    lbz r0, 0x32(r4)
    andi. r0, r0, 0x5
    bne lbl_fn_8023BA10_000003CC
    lhz r0, 0x30(r4)
    rlwinm. r0, r0, 0, 18, 18
    beq lbl_fn_8023BA10_000003CC
    lbz r0, 0x31(r1)
    cmpwi r0, 0x0
    bne lbl_fn_8023BA10_000003CC
    bl fn_800E1A48
lbl_fn_8023BA10_000003CC:
    lwz r3, 0x44(r1)
    lwz r3, 0x0(r3)
    lbz r0, 0x32(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8023BA10_000003EC
    li r0, 0x1
    stb r0, 0x40(r1)
    b lbl_fn_8023BA10_0000046C
lbl_fn_8023BA10_000003EC:
    ori r0, r0, 0x4
    stb r0, 0x32(r3)
    lwz r0, 0x24(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8023BA10_0000040C
    lbz r0, 0x32(r3)
    ori r0, r0, 0x1
    stb r0, 0x32(r3)
lbl_fn_8023BA10_0000040C:
    lbz r0, 0x33(r3)
    lbz r4, 0x32(r3)
    and. r0, r4, r0
    beq lbl_fn_8023BA10_0000046C
    lis r4, lbl_80779AB8@ha
    addi r4, r4, lbl_80779AB8@l
    bl fn_8068B39C
    b lbl_fn_8023BA10_0000046C
lbl_fn_8023BA10_0000042C:
    ori r0, r0, 0x4
    stb r0, 0x32(r6)
    lwz r0, 0x24(r6)
    cmpwi r0, 0x0
    bne lbl_fn_8023BA10_0000044C
    lbz r0, 0x32(r6)
    ori r0, r0, 0x1
    stb r0, 0x32(r6)
lbl_fn_8023BA10_0000044C:
    lbz r0, 0x33(r6)
    lbz r3, 0x32(r6)
    and. r0, r3, r0
    beq lbl_fn_8023BA10_0000046C
    lis r4, lbl_80779AB8@ha
    mr r3, r6
    addi r4, r4, lbl_80779AB8@l
    bl fn_8068B39C
lbl_fn_8023BA10_0000046C:
    lbz r0, 0x40(r1)
    cmpwi r0, 0x0
    beq lbl_fn_8023BA10_00000610
    lwz r4, 0x0(r30)
    addi r3, r1, 0x38
    bl fn_800E1D5C
    lwz r29, lbl_8087F3C4
    cmpwi r29, 0x0
    bne lbl_fn_8023BA10_000004A0
    lwz r3, lbl_80880390
    addi r29, r3, 0x1
    stw r29, lbl_80880390
    stw r29, lbl_8087F3C4
lbl_fn_8023BA10_000004A0:
    lwz r3, 0x38(r1)
    lwz r0, 0x4(r3)
    cmplw r29, r0
    bge lbl_fn_8023BA10_000004C4
    lwz r3, 0x0(r3)
    slwi r0, r29, 2
    lwzx r28, r3, r0
    cmpwi r28, 0x0
    bne lbl_fn_8023BA10_00000524
lbl_fn_8023BA10_000004C4:
    lwz r28, 0x38(r1)
    li r3, 0x8
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_8023BA10_000004F0
    li r0, 0x0
    stw r0, 0x4(r3)
    lis r5, lbl_80783C20@ha
    addi r5, r5, lbl_80783C20@l
    stw r5, 0x0(r3)
lbl_fn_8023BA10_000004F0:
    lwz r5, lbl_8087F3C4
    cmpwi r5, 0x0
    bne lbl_fn_8023BA10_0000050C
    lwz r3, lbl_80880390
    addi r5, r3, 0x1
    stw r5, lbl_80880390
    stw r5, lbl_8087F3C4
lbl_fn_8023BA10_0000050C:
    mr r3, r28
    bl fn_806920C0
    lwz r3, 0x38(r1)
    slwi r0, r29, 2
    lwz r3, 0x0(r3)
    lwzx r28, r3, r0
lbl_fn_8023BA10_00000524:
    addic. r0, r1, 0x38
    beq lbl_fn_8023BA10_0000053C
    lwz r3, 0x3c(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8023BA10_0000053C
    bl fn_806952C4
lbl_fn_8023BA10_0000053C:
    lwz r5, 0x0(r30)
    lhz r0, 0x30(r5)
    andi. r0, r0, 0x4a
    cmplwi r0, 0x40
    beq lbl_fn_8023BA10_00000558
    cmplwi r0, 0x8
    bne lbl_fn_8023BA10_00000590
lbl_fn_8023BA10_00000558:
    lbz r4, 0x38(r5)
    mr r3, r28
    lwz r0, 0x24(r5)
    mr r7, r31
    stw r0, 0xc(r1)
    extsb r6, r4
    addi r4, r1, 0xc
    lwz r12, 0x0(r28)
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    cntlzw r0, r3
    srwi r0, r0, 5
    b lbl_fn_8023BA10_000005C4
lbl_fn_8023BA10_00000590:
    lbz r4, 0x38(r5)
    mr r3, r28
    lwz r0, 0x24(r5)
    mr r7, r31
    stw r0, 0x8(r1)
    extsb r6, r4
    addi r4, r1, 0x8
    lwz r12, 0x0(r28)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    cntlzw r0, r3
    srwi r0, r0, 5
lbl_fn_8023BA10_000005C4:
    cmpwi r0, 0x0
    beq lbl_fn_8023BA10_00000610
    lwz r3, 0x0(r30)
    lbz r0, 0x32(r3)
    ori r0, r0, 0x5
    stb r0, 0x32(r3)
    lwz r0, 0x24(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8023BA10_000005F4
    lbz r0, 0x32(r3)
    ori r0, r0, 0x1
    stb r0, 0x32(r3)
lbl_fn_8023BA10_000005F4:
    lbz r4, 0x33(r3)
    lbz r0, 0x32(r3)
    and. r0, r0, r4
    beq lbl_fn_8023BA10_00000610
    lis r4, lbl_80779AB8@ha
    addi r4, r4, lbl_80779AB8@l
    bl fn_8068B39C
lbl_fn_8023BA10_00000610:
    lwz r31, 0x44(r1)
    lwz r3, 0x0(r31)
    lbz r4, 0x32(r3)
    andi. r0, r4, 0x5
    bne lbl_fn_8023BA10_00000940
    lhz r0, 0x30(r3)
    rlwinm. r0, r0, 0, 18, 18
    beq lbl_fn_8023BA10_00000940
    lbz r0, 0x41(r1)
    cmpwi r0, 0x0
    bne lbl_fn_8023BA10_00000940
    cmpwi r4, 0x0
    li r0, 0x0
    stb r0, 0x28(r1)
    stb r0, 0x29(r1)
    stw r31, 0x2c(r1)
    bne lbl_fn_8023BA10_000007CC
    lwz r29, 0x34(r3)
    cmpwi r29, 0x0
    beq lbl_fn_8023BA10_0000076C
    mr r4, r29
    addi r3, r1, 0x20
    bl fn_800E14A4
    li r0, 0x1
    stb r0, 0x21(r1)
    lwz r3, 0x0(r29)
    lwz r3, 0x24(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8023BA10_000006B8
    lwz r12, 0x0(r3)
    li r28, 0x0
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    cmpwi r3, -0x1
    bne lbl_fn_8023BA10_000006A4
    li r28, 0x1
lbl_fn_8023BA10_000006A4:
    cmpwi r28, 0x0
    beq lbl_fn_8023BA10_000006B8
    lwz r3, 0x0(r29)
    li r4, 0x1
    bl fn_800E0A64
lbl_fn_8023BA10_000006B8:
    lwz r29, 0x24(r1)
    lwz r3, 0x0(r29)
    lbz r0, 0x32(r3)
    andi. r0, r0, 0x5
    bne lbl_fn_8023BA10_0000076C
    lhz r0, 0x30(r3)
    rlwinm. r0, r0, 0, 18, 18
    beq lbl_fn_8023BA10_0000076C
    lbz r0, 0x21(r1)
    cmpwi r0, 0x0
    bne lbl_fn_8023BA10_0000076C
    mr r4, r29
    addi r3, r1, 0x18
    bl fn_800E14A4
    li r0, 0x1
    stb r0, 0x19(r1)
    lwz r3, 0x0(r29)
    lwz r3, 0x24(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8023BA10_0000073C
    lwz r12, 0x0(r3)
    li r28, 0x0
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    cmpwi r3, -0x1
    bne lbl_fn_8023BA10_00000728
    li r28, 0x1
lbl_fn_8023BA10_00000728:
    cmpwi r28, 0x0
    beq lbl_fn_8023BA10_0000073C
    lwz r3, 0x0(r29)
    li r4, 0x1
    bl fn_800E0A64
lbl_fn_8023BA10_0000073C:
    lwz r3, 0x1c(r1)
    lwz r4, 0x0(r3)
    lbz r0, 0x32(r4)
    andi. r0, r0, 0x5
    bne lbl_fn_8023BA10_0000076C
    lhz r0, 0x30(r4)
    rlwinm. r0, r0, 0, 18, 18
    beq lbl_fn_8023BA10_0000076C
    lbz r0, 0x19(r1)
    cmpwi r0, 0x0
    bne lbl_fn_8023BA10_0000076C
    bl fn_800E1A48
lbl_fn_8023BA10_0000076C:
    lwz r3, 0x2c(r1)
    lwz r3, 0x0(r3)
    lbz r0, 0x32(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8023BA10_0000078C
    li r0, 0x1
    stb r0, 0x28(r1)
    b lbl_fn_8023BA10_00000808
lbl_fn_8023BA10_0000078C:
    ori r0, r0, 0x4
    stb r0, 0x32(r3)
    lwz r0, 0x24(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8023BA10_000007AC
    lbz r0, 0x32(r3)
    ori r0, r0, 0x1
    stb r0, 0x32(r3)
lbl_fn_8023BA10_000007AC:
    lbz r0, 0x33(r3)
    lbz r4, 0x32(r3)
    and. r0, r4, r0
    beq lbl_fn_8023BA10_00000808
    lis r4, lbl_80779AB8@ha
    addi r4, r4, lbl_80779AB8@l
    bl fn_8068B39C
    b lbl_fn_8023BA10_00000808
lbl_fn_8023BA10_000007CC:
    ori r0, r4, 0x4
    stb r0, 0x32(r3)
    lwz r0, 0x24(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8023BA10_000007EC
    lbz r0, 0x32(r3)
    ori r0, r0, 0x1
    stb r0, 0x32(r3)
lbl_fn_8023BA10_000007EC:
    lbz r0, 0x33(r3)
    lbz r4, 0x32(r3)
    and. r0, r4, r0
    beq lbl_fn_8023BA10_00000808
    lis r4, lbl_80779AB8@ha
    addi r4, r4, lbl_80779AB8@l
    bl fn_8068B39C
lbl_fn_8023BA10_00000808:
    lwz r3, 0x0(r31)
    li r0, 0x1
    stb r0, 0x29(r1)
    lwz r3, 0x24(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8023BA10_0000088C
    lwz r12, 0x0(r3)
    li r28, 0x0
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    cmpwi r3, -0x1
    bne lbl_fn_8023BA10_00000840
    li r28, 0x1
lbl_fn_8023BA10_00000840:
    cmpwi r28, 0x0
    beq lbl_fn_8023BA10_0000088C
    lwz r3, 0x0(r31)
    lbz r0, 0x32(r3)
    ori r0, r0, 0x1
    stb r0, 0x32(r3)
    lwz r0, 0x24(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8023BA10_00000870
    lbz r0, 0x32(r3)
    ori r0, r0, 0x1
    stb r0, 0x32(r3)
lbl_fn_8023BA10_00000870:
    lbz r4, 0x33(r3)
    lbz r0, 0x32(r3)
    and. r0, r0, r4
    beq lbl_fn_8023BA10_0000088C
    lis r4, lbl_80779AB8@ha
    addi r4, r4, lbl_80779AB8@l
    bl fn_8068B39C
lbl_fn_8023BA10_0000088C:
    lwz r29, 0x2c(r1)
    lwz r3, 0x0(r29)
    lbz r0, 0x32(r3)
    andi. r0, r0, 0x5
    bne lbl_fn_8023BA10_00000940
    lhz r0, 0x30(r3)
    rlwinm. r0, r0, 0, 18, 18
    beq lbl_fn_8023BA10_00000940
    lbz r0, 0x29(r1)
    cmpwi r0, 0x0
    bne lbl_fn_8023BA10_00000940
    mr r4, r29
    addi r3, r1, 0x10
    bl fn_800E14A4
    li r0, 0x1
    stb r0, 0x11(r1)
    lwz r3, 0x0(r29)
    lwz r3, 0x24(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8023BA10_00000910
    lwz r12, 0x0(r3)
    li r28, 0x0
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    cmpwi r3, -0x1
    bne lbl_fn_8023BA10_000008FC
    li r28, 0x1
lbl_fn_8023BA10_000008FC:
    cmpwi r28, 0x0
    beq lbl_fn_8023BA10_00000910
    lwz r3, 0x0(r29)
    li r4, 0x1
    bl fn_800E0A64
lbl_fn_8023BA10_00000910:
    lwz r3, 0x14(r1)
    lwz r4, 0x0(r3)
    lbz r0, 0x32(r4)
    andi. r0, r0, 0x5
    bne lbl_fn_8023BA10_00000940
    lhz r0, 0x30(r4)
    rlwinm. r0, r0, 0, 18, 18
    beq lbl_fn_8023BA10_00000940
    lbz r0, 0x11(r1)
    cmpwi r0, 0x0
    bne lbl_fn_8023BA10_00000940
    bl fn_800E1A48
lbl_fn_8023BA10_00000940:
    mr r3, r30
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    lwz r28, 0x50(r1)
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_8023C080(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_8023C080_0000098C
    cmpwi r4, 0x0
    ble lbl_fn_8023C080_0000098C
    bl dtor_80084684
lbl_fn_8023C080_0000098C:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8023C0C0(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    stmw r23, 0x7c(r1)
    mr r25, r4
    mr r26, r5
    mr r27, r6
    mr r28, r7
    lhz r0, 0x30(r5)
    clrlwi. r0, r0, 31
    beq lbl_fn_8023C0C0_00000FA4
    mr r4, r26
    addi r3, r1, 0x28
    bl fn_800E1D5C
    lwz r31, lbl_8087F3C8
    cmpwi r31, 0x0
    bne lbl_fn_8023C0C0_000009F8
    lwz r3, lbl_80880390
    addi r31, r3, 0x1
    stw r31, lbl_80880390
    stw r31, lbl_8087F3C8
lbl_fn_8023C0C0_000009F8:
    lwz r3, 0x28(r1)
    lwz r0, 0x4(r3)
    cmplw r31, r0
    bge lbl_fn_8023C0C0_00000A1C
    lwz r3, 0x0(r3)
    slwi r0, r31, 2
    lwzx r30, r3, r0
    cmpwi r30, 0x0
    bne lbl_fn_8023C0C0_00000C14
lbl_fn_8023C0C0_00000A1C:
    lwz r30, 0x28(r1)
    li r3, 0x30
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r29, r3
    beq lbl_fn_8023C0C0_00000BDC
    li r6, 0x0
    stw r6, 0x4(r3)
    lis r5, lbl_80783C60@ha
    lis r4, lbl_80783CA0@ha
    addi r5, r5, lbl_80783C60@l
    stw r5, 0x0(r3)
    li r5, 0x2e
    li r0, 0x2c
    stb r5, 0x8(r3)
    addi r4, r4, lbl_80783CA0@l
    li r5, 0x0
    stb r0, 0x9(r3)
    stw r6, 0xc(r3)
    stw r6, 0x10(r3)
    stw r6, 0x14(r3)
    stw r6, 0x18(r3)
    stw r6, 0x1c(r3)
    stw r6, 0x20(r3)
    stw r6, 0x24(r3)
    stw r6, 0x28(r3)
    stw r6, 0x2c(r3)
    addi r3, r1, 0x30
    bl fn_80243514
    lwz r0, 0x18(r29)
    srwi. r4, r0, 31
    bne lbl_fn_8023C0C0_00000AC0
    lwz r3, 0x30(r1)
    srwi. r0, r3, 31
    bne lbl_fn_8023C0C0_00000AC0
    lwz r0, 0x34(r1)
    stw r3, 0x18(r29)
    stw r0, 0x1c(r29)
    lwz r0, 0x38(r1)
    stw r0, 0x20(r29)
    b lbl_fn_8023C0C0_00000B18
lbl_fn_8023C0C0_00000AC0:
    cmpwi r4, 0x0
    beq lbl_fn_8023C0C0_00000AD0
    lwz r5, 0x1c(r29)
    b lbl_fn_8023C0C0_00000AD8
lbl_fn_8023C0C0_00000AD0:
    lbz r0, 0x18(r29)
    clrlwi r5, r0, 25
lbl_fn_8023C0C0_00000AD8:
    lwz r0, 0x30(r1)
    srwi. r0, r0, 31
    bne lbl_fn_8023C0C0_00000AF4
    lbz r0, 0x30(r1)
    addi r6, r1, 0x31
    clrlwi r4, r0, 25
    b lbl_fn_8023C0C0_00000AFC
lbl_fn_8023C0C0_00000AF4:
    lwz r6, 0x38(r1)
    lwz r4, 0x34(r1)
lbl_fn_8023C0C0_00000AFC:
    lbz r0, 0x14(r1)
    add r7, r6, r4
    stb r0, 0x10(r1)
    addi r3, r29, 0x18
    addi r8, r1, 0x10
    li r4, 0x0
    bl fn_80013F78
lbl_fn_8023C0C0_00000B18:
    lwz r0, 0x30(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8023C0C0_00000B2C
    lwz r3, 0x38(r1)
    bl dtor_80084684
lbl_fn_8023C0C0_00000B2C:
    lis r4, lbl_80783C98@ha
    addi r3, r1, 0x3c
    addi r4, r4, lbl_80783C98@l
    li r5, 0x0
    bl fn_80243514
    lwz r0, 0x24(r29)
    srwi. r4, r0, 31
    bne lbl_fn_8023C0C0_00000B70
    lwz r3, 0x3c(r1)
    srwi. r0, r3, 31
    bne lbl_fn_8023C0C0_00000B70
    lwz r0, 0x40(r1)
    stw r3, 0x24(r29)
    stw r0, 0x28(r29)
    lwz r0, 0x44(r1)
    stw r0, 0x2c(r29)
    b lbl_fn_8023C0C0_00000BC8
lbl_fn_8023C0C0_00000B70:
    cmpwi r4, 0x0
    beq lbl_fn_8023C0C0_00000B80
    lwz r5, 0x28(r29)
    b lbl_fn_8023C0C0_00000B88
lbl_fn_8023C0C0_00000B80:
    lbz r0, 0x24(r29)
    clrlwi r5, r0, 25
lbl_fn_8023C0C0_00000B88:
    lwz r0, 0x3c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_8023C0C0_00000BA4
    lbz r0, 0x3c(r1)
    addi r6, r1, 0x3d
    clrlwi r4, r0, 25
    b lbl_fn_8023C0C0_00000BAC
lbl_fn_8023C0C0_00000BA4:
    lwz r6, 0x44(r1)
    lwz r4, 0x40(r1)
lbl_fn_8023C0C0_00000BAC:
    lbz r0, 0x1c(r1)
    add r7, r6, r4
    stb r0, 0x18(r1)
    addi r3, r29, 0x24
    addi r8, r1, 0x18
    li r4, 0x0
    bl fn_80013F78
lbl_fn_8023C0C0_00000BC8:
    lwz r0, 0x3c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8023C0C0_00000BDC
    lwz r3, 0x44(r1)
    bl dtor_80084684
lbl_fn_8023C0C0_00000BDC:
    lwz r5, lbl_8087F3C8
    cmpwi r5, 0x0
    bne lbl_fn_8023C0C0_00000BF8
    lwz r3, lbl_80880390
    addi r5, r3, 0x1
    stw r5, lbl_80880390
    stw r5, lbl_8087F3C8
lbl_fn_8023C0C0_00000BF8:
    mr r3, r30
    mr r4, r29
    bl fn_806920C0
    lwz r3, 0x28(r1)
    slwi r0, r31, 2
    lwz r3, 0x0(r3)
    lwzx r30, r3, r0
lbl_fn_8023C0C0_00000C14:
    addic. r0, r1, 0x28
    beq lbl_fn_8023C0C0_00000C2C
    lwz r3, 0x2c(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8023C0C0_00000C2C
    bl fn_806952C4
lbl_fn_8023C0C0_00000C2C:
    cmpwi r28, 0x0
    li r28, 0x0
    li r29, 0x0
    beq lbl_fn_8023C0C0_00000C54
    mr r4, r30
    addi r3, r1, 0x54
    bl fn_8024067C
    addi r24, r1, 0x54
    li r28, 0x1
    b lbl_fn_8023C0C0_00000C68
lbl_fn_8023C0C0_00000C54:
    mr r4, r30
    addi r3, r1, 0x48
    bl fn_8024068C
    li r29, 0x1
    addi r24, r1, 0x48
lbl_fn_8023C0C0_00000C68:
    lwz r3, 0x0(r24)
    srwi. r0, r3, 31
    bne lbl_fn_8023C0C0_00000C8C
    lwz r0, 0x4(r24)
    stw r0, 0x64(r1)
    stw r3, 0x60(r1)
    lwz r0, 0x8(r24)
    stw r0, 0x68(r1)
    b lbl_fn_8023C0C0_00000CD4
lbl_fn_8023C0C0_00000C8C:
    li r0, 0x0
    stw r0, 0x60(r1)
    addi r30, r1, 0x60
    stw r0, 0x64(r1)
    mr r3, r30
    stw r0, 0x68(r1)
    lwz r4, 0x4(r24)
    bl fn_80013DC4
    lbz r0, 0xc(r1)
    mr r3, r30
    stb r0, 0x8(r1)
    addi r8, r1, 0x8
    li r4, 0x0
    li r5, 0x0
    lwz r6, 0x8(r24)
    lwz r0, 0x4(r24)
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_8023C0C0_00000CD4:
    cmpwi r29, 0x0
    beq lbl_fn_8023C0C0_00000CF0
    lwz r0, 0x48(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8023C0C0_00000CF0
    lwz r3, 0x50(r1)
    bl dtor_80084684
lbl_fn_8023C0C0_00000CF0:
    cmpwi r28, 0x0
    beq lbl_fn_8023C0C0_00000D0C
    lwz r0, 0x54(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8023C0C0_00000D0C
    lwz r3, 0x5c(r1)
    bl dtor_80084684
lbl_fn_8023C0C0_00000D0C:
    lwz r0, 0x60(r1)
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi. r3, r0, 5
    beq lbl_fn_8023C0C0_00000D2C
    lbz r0, 0x60(r1)
    clrlwi r29, r0, 25
    b lbl_fn_8023C0C0_00000D30
lbl_fn_8023C0C0_00000D2C:
    lwz r29, 0x64(r1)
lbl_fn_8023C0C0_00000D30:
    cmpwi r3, 0x0
    beq lbl_fn_8023C0C0_00000D40
    addi r28, r1, 0x61
    b lbl_fn_8023C0C0_00000D44
lbl_fn_8023C0C0_00000D40:
    lwz r28, 0x68(r1)
lbl_fn_8023C0C0_00000D44:
    lwz r0, 0x2c(r26)
    li r31, 0x0
    lwz r25, 0x0(r25)
    cmpw r0, r29
    ble lbl_fn_8023C0C0_00000D5C
    subf r31, r29, r0
lbl_fn_8023C0C0_00000D5C:
    lhz r0, 0x30(r26)
    andi. r30, r0, 0xb0
    cmplwi r30, 0x20
    beq lbl_fn_8023C0C0_00000DF0
    cmplwi r30, 0x10
    beq lbl_fn_8023C0C0_00000DF0
    cmpwi r31, 0x0
    li r24, 0x0
    ble lbl_fn_8023C0C0_00000DF0
    b lbl_fn_8023C0C0_00000DE8
lbl_fn_8023C0C0_00000D84:
    cmpwi r25, 0x0
    li r23, 0x0
    beq lbl_fn_8023C0C0_00000DD8
    lwz r3, 0x14(r25)
    lwz r0, 0x18(r25)
    cmplw r3, r0
    bge lbl_fn_8023C0C0_00000DB4
    stb r27, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x14(r25)
    lbz r3, 0x0(r3)
    b lbl_fn_8023C0C0_00000DCC
lbl_fn_8023C0C0_00000DB4:
    lwz r12, 0x0(r25)
    mr r3, r25
    clrlwi r4, r27, 24
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
lbl_fn_8023C0C0_00000DCC:
    cmpwi r3, -0x1
    bne lbl_fn_8023C0C0_00000DD8
    li r23, 0x1
lbl_fn_8023C0C0_00000DD8:
    cmpwi r23, 0x0
    beq lbl_fn_8023C0C0_00000DE4
    li r25, 0x0
lbl_fn_8023C0C0_00000DE4:
    addi r24, r24, 0x1
lbl_fn_8023C0C0_00000DE8:
    cmpw r24, r31
    blt lbl_fn_8023C0C0_00000D84
lbl_fn_8023C0C0_00000DF0:
    cmplwi r30, 0x10
    bne lbl_fn_8023C0C0_00000E74
    cmpwi r31, 0x0
    li r24, 0x0
    ble lbl_fn_8023C0C0_00000E74
    b lbl_fn_8023C0C0_00000E6C
lbl_fn_8023C0C0_00000E08:
    cmpwi r25, 0x0
    li r23, 0x0
    beq lbl_fn_8023C0C0_00000E5C
    lwz r3, 0x14(r25)
    lwz r0, 0x18(r25)
    cmplw r3, r0
    bge lbl_fn_8023C0C0_00000E38
    stb r27, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x14(r25)
    lbz r3, 0x0(r3)
    b lbl_fn_8023C0C0_00000E50
lbl_fn_8023C0C0_00000E38:
    lwz r12, 0x0(r25)
    mr r3, r25
    clrlwi r4, r27, 24
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
lbl_fn_8023C0C0_00000E50:
    cmpwi r3, -0x1
    bne lbl_fn_8023C0C0_00000E5C
    li r23, 0x1
lbl_fn_8023C0C0_00000E5C:
    cmpwi r23, 0x0
    beq lbl_fn_8023C0C0_00000E68
    li r25, 0x0
lbl_fn_8023C0C0_00000E68:
    addi r24, r24, 0x1
lbl_fn_8023C0C0_00000E6C:
    cmpw r24, r31
    blt lbl_fn_8023C0C0_00000E08
lbl_fn_8023C0C0_00000E74:
    cmpwi r29, 0x0
    li r24, 0x0
    ble lbl_fn_8023C0C0_00000EFC
    b lbl_fn_8023C0C0_00000EF4
lbl_fn_8023C0C0_00000E84:
    lbz r0, 0x0(r28)
    cmpwi r25, 0x0
    li r23, 0x0
    addi r28, r28, 0x1
    extsb r4, r0
    beq lbl_fn_8023C0C0_00000EE4
    lwz r3, 0x14(r25)
    lwz r0, 0x18(r25)
    cmplw r3, r0
    bge lbl_fn_8023C0C0_00000EC0
    stb r4, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x14(r25)
    lbz r3, 0x0(r3)
    b lbl_fn_8023C0C0_00000ED8
lbl_fn_8023C0C0_00000EC0:
    lwz r12, 0x0(r25)
    mr r3, r25
    clrlwi r4, r4, 24
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
lbl_fn_8023C0C0_00000ED8:
    cmpwi r3, -0x1
    bne lbl_fn_8023C0C0_00000EE4
    li r23, 0x1
lbl_fn_8023C0C0_00000EE4:
    cmpwi r23, 0x0
    beq lbl_fn_8023C0C0_00000EF0
    li r25, 0x0
lbl_fn_8023C0C0_00000EF0:
    addi r24, r24, 0x1
lbl_fn_8023C0C0_00000EF4:
    cmpw r24, r29
    blt lbl_fn_8023C0C0_00000E84
lbl_fn_8023C0C0_00000EFC:
    cmplwi r30, 0x20
    bne lbl_fn_8023C0C0_00000F80
    cmpwi r31, 0x0
    li r28, 0x0
    ble lbl_fn_8023C0C0_00000F80
    b lbl_fn_8023C0C0_00000F78
lbl_fn_8023C0C0_00000F14:
    cmpwi r25, 0x0
    li r23, 0x0
    beq lbl_fn_8023C0C0_00000F68
    lwz r3, 0x14(r25)
    lwz r0, 0x18(r25)
    cmplw r3, r0
    bge lbl_fn_8023C0C0_00000F44
    stb r27, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x14(r25)
    lbz r3, 0x0(r3)
    b lbl_fn_8023C0C0_00000F5C
lbl_fn_8023C0C0_00000F44:
    lwz r12, 0x0(r25)
    mr r3, r25
    clrlwi r4, r27, 24
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
lbl_fn_8023C0C0_00000F5C:
    cmpwi r3, -0x1
    bne lbl_fn_8023C0C0_00000F68
    li r23, 0x1
lbl_fn_8023C0C0_00000F68:
    cmpwi r23, 0x0
    beq lbl_fn_8023C0C0_00000F74
    li r25, 0x0
lbl_fn_8023C0C0_00000F74:
    addi r28, r28, 0x1
lbl_fn_8023C0C0_00000F78:
    cmpw r28, r31
    blt lbl_fn_8023C0C0_00000F14
lbl_fn_8023C0C0_00000F80:
    li r0, 0x0
    stw r0, 0x2c(r26)
    lwz r0, 0x60(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8023C0C0_00000F9C
    lwz r3, 0x68(r1)
    bl dtor_80084684
lbl_fn_8023C0C0_00000F9C:
    mr r3, r25
    b lbl_fn_8023C0C0_00000FC4
lbl_fn_8023C0C0_00000FA4:
    lwz r0, 0x0(r4)
    addi r4, r1, 0x20
    stw r0, 0x20(r1)
    extsb r6, r6
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
lbl_fn_8023C0C0_00000FC4:
    lmw r23, 0x7c(r1)
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_8023C6F4(void)
{
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    stw r0, 0xd4(r1)
    stmw r22, 0xa8(r1)
    mr r26, r5
    mr r27, r6
    mr r29, r7
    lhz r0, 0x30(r5)
    andi. r0, r0, 0x4a
    cmpwi r0, 0x40
    beq lbl_fn_8023C6F4_00001010
    cmpwi r0, 0x8
    beq lbl_fn_8023C6F4_00001384
    b lbl_fn_8023C6F4_000017B8
lbl_fn_8023C6F4_00001010:
    lwz r28, 0x0(r4)
    mr r4, r26
    addi r3, r1, 0x20
    bl fn_800E1D5C
    lwz r25, lbl_808803C0
    cmpwi r25, 0x0
    bne lbl_fn_8023C6F4_0000103C
    lwz r3, lbl_80880390
    addi r25, r3, 0x1
    stw r25, lbl_80880390
    stw r25, lbl_808803C0
lbl_fn_8023C6F4_0000103C:
    lwz r3, 0x20(r1)
    lwz r0, 0x4(r3)
    cmplw r25, r0
    bge lbl_fn_8023C6F4_00001060
    lwz r3, 0x0(r3)
    slwi r0, r25, 2
    lwzx r24, r3, r0
    cmpwi r24, 0x0
    bne lbl_fn_8023C6F4_000010BC
lbl_fn_8023C6F4_00001060:
    li r3, 0x18
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_8023C6F4_00001088
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8069293C
    mr r4, r3
lbl_fn_8023C6F4_00001088:
    lwz r5, lbl_808803C0
    lwz r3, 0x20(r1)
    cmpwi r5, 0x0
    bne lbl_fn_8023C6F4_000010A8
    lwz r5, lbl_80880390
    addi r5, r5, 0x1
    stw r5, lbl_80880390
    stw r5, lbl_808803C0
lbl_fn_8023C6F4_000010A8:
    bl fn_806920C0
    lwz r3, 0x20(r1)
    slwi r0, r25, 2
    lwz r3, 0x0(r3)
    lwzx r24, r3, r0
lbl_fn_8023C6F4_000010BC:
    addic. r0, r1, 0x20
    beq lbl_fn_8023C6F4_000010D4
    lwz r3, 0x24(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8023C6F4_000010D4
    bl fn_806952C4
lbl_fn_8023C6F4_000010D4:
    cmpwi r29, 0x0
    addi r25, r1, 0x70
    li r30, 0x0
    beq lbl_fn_8023C6F4_000010F0
    lhz r0, 0x30(r26)
    rlwinm. r0, r0, 0, 22, 22
    beq lbl_fn_8023C6F4_00001114
lbl_fn_8023C6F4_000010F0:
    lwz r12, 0x0(r24)
    mr r3, r24
    li r4, 0x30
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    stb r3, 0x70(r1)
    li r30, 0x1
    addi r25, r25, 0x1
lbl_fn_8023C6F4_00001114:
    cmpwi r29, 0x0
    beq lbl_fn_8023C6F4_00001138
    mr r3, r26
    mr r4, r29
    mr r5, r25
    mr r6, r24
    li r7, 0x0
    bl fn_80242FF4
    add r30, r30, r3
lbl_fn_8023C6F4_00001138:
    lwz r0, 0x2c(r26)
    li r31, 0x0
    cmpw r0, r30
    ble lbl_fn_8023C6F4_0000114C
    subf r31, r30, r0
lbl_fn_8023C6F4_0000114C:
    lhz r0, 0x30(r26)
    andi. r25, r0, 0xb0
    cmplwi r25, 0x20
    beq lbl_fn_8023C6F4_000011E0
    cmplwi r25, 0x10
    beq lbl_fn_8023C6F4_000011E0
    cmpwi r31, 0x0
    li r29, 0x0
    ble lbl_fn_8023C6F4_000011E0
    b lbl_fn_8023C6F4_000011D8
lbl_fn_8023C6F4_00001174:
    cmpwi r28, 0x0
    li r23, 0x0
    beq lbl_fn_8023C6F4_000011C8
    lwz r3, 0x14(r28)
    lwz r0, 0x18(r28)
    cmplw r3, r0
    bge lbl_fn_8023C6F4_000011A4
    stb r27, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x14(r28)
    lbz r3, 0x0(r3)
    b lbl_fn_8023C6F4_000011BC
lbl_fn_8023C6F4_000011A4:
    lwz r12, 0x0(r28)
    mr r3, r28
    clrlwi r4, r27, 24
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
lbl_fn_8023C6F4_000011BC:
    cmpwi r3, -0x1
    bne lbl_fn_8023C6F4_000011C8
    li r23, 0x1
lbl_fn_8023C6F4_000011C8:
    cmpwi r23, 0x0
    beq lbl_fn_8023C6F4_000011D4
    li r28, 0x0
lbl_fn_8023C6F4_000011D4:
    addi r29, r29, 0x1
lbl_fn_8023C6F4_000011D8:
    cmpw r29, r31
    blt lbl_fn_8023C6F4_00001174
lbl_fn_8023C6F4_000011E0:
    cmplwi r25, 0x10
    bne lbl_fn_8023C6F4_00001264
    cmpwi r31, 0x0
    li r29, 0x0
    ble lbl_fn_8023C6F4_00001264
    b lbl_fn_8023C6F4_0000125C
lbl_fn_8023C6F4_000011F8:
    cmpwi r28, 0x0
    li r23, 0x0
    beq lbl_fn_8023C6F4_0000124C
    lwz r3, 0x14(r28)
    lwz r0, 0x18(r28)
    cmplw r3, r0
    bge lbl_fn_8023C6F4_00001228
    stb r27, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x14(r28)
    lbz r3, 0x0(r3)
    b lbl_fn_8023C6F4_00001240
lbl_fn_8023C6F4_00001228:
    lwz r12, 0x0(r28)
    mr r3, r28
    clrlwi r4, r27, 24
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
lbl_fn_8023C6F4_00001240:
    cmpwi r3, -0x1
    bne lbl_fn_8023C6F4_0000124C
    li r23, 0x1
lbl_fn_8023C6F4_0000124C:
    cmpwi r23, 0x0
    beq lbl_fn_8023C6F4_00001258
    li r28, 0x0
lbl_fn_8023C6F4_00001258:
    addi r29, r29, 0x1
lbl_fn_8023C6F4_0000125C:
    cmpw r29, r31
    blt lbl_fn_8023C6F4_000011F8
lbl_fn_8023C6F4_00001264:
    cmpwi r30, 0x0
    addi r29, r1, 0x70
    li r24, 0x0
    ble lbl_fn_8023C6F4_000012F0
    b lbl_fn_8023C6F4_000012E8
lbl_fn_8023C6F4_00001278:
    lbz r0, 0x0(r29)
    cmpwi r28, 0x0
    li r23, 0x0
    addi r29, r29, 0x1
    extsb r4, r0
    beq lbl_fn_8023C6F4_000012D8
    lwz r3, 0x14(r28)
    lwz r0, 0x18(r28)
    cmplw r3, r0
    bge lbl_fn_8023C6F4_000012B4
    stb r4, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x14(r28)
    lbz r3, 0x0(r3)
    b lbl_fn_8023C6F4_000012CC
lbl_fn_8023C6F4_000012B4:
    lwz r12, 0x0(r28)
    mr r3, r28
    clrlwi r4, r4, 24
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
lbl_fn_8023C6F4_000012CC:
    cmpwi r3, -0x1
    bne lbl_fn_8023C6F4_000012D8
    li r23, 0x1
lbl_fn_8023C6F4_000012D8:
    cmpwi r23, 0x0
    beq lbl_fn_8023C6F4_000012E4
    li r28, 0x0
lbl_fn_8023C6F4_000012E4:
    addi r24, r24, 0x1
lbl_fn_8023C6F4_000012E8:
    cmpw r24, r30
    blt lbl_fn_8023C6F4_00001278
lbl_fn_8023C6F4_000012F0:
    cmplwi r25, 0x20
    bne lbl_fn_8023C6F4_00001374
    cmpwi r31, 0x0
    li r24, 0x0
    ble lbl_fn_8023C6F4_00001374
    b lbl_fn_8023C6F4_0000136C
lbl_fn_8023C6F4_00001308:
    cmpwi r28, 0x0
    li r23, 0x0
    beq lbl_fn_8023C6F4_0000135C
    lwz r3, 0x14(r28)
    lwz r0, 0x18(r28)
    cmplw r3, r0
    bge lbl_fn_8023C6F4_00001338
    stb r27, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x14(r28)
    lbz r3, 0x0(r3)
    b lbl_fn_8023C6F4_00001350
lbl_fn_8023C6F4_00001338:
    lwz r12, 0x0(r28)
    mr r3, r28
    clrlwi r4, r27, 24
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
lbl_fn_8023C6F4_00001350:
    cmpwi r3, -0x1
    bne lbl_fn_8023C6F4_0000135C
    li r23, 0x1
lbl_fn_8023C6F4_0000135C:
    cmpwi r23, 0x0
    beq lbl_fn_8023C6F4_00001368
    li r28, 0x0
lbl_fn_8023C6F4_00001368:
    addi r24, r24, 0x1
lbl_fn_8023C6F4_0000136C:
    cmpw r24, r31
    blt lbl_fn_8023C6F4_00001308
lbl_fn_8023C6F4_00001374:
    li r0, 0x0
    stw r0, 0x2c(r26)
    mr r3, r28
    b lbl_fn_8023C6F4_00001BD8
lbl_fn_8023C6F4_00001384:
    lwz r25, 0x0(r4)
    mr r4, r26
    addi r3, r1, 0x18
    li r28, 0x0
    bl fn_800E1D5C
    lwz r30, lbl_808803C0
    cmpwi r30, 0x0
    bne lbl_fn_8023C6F4_000013B4
    lwz r3, lbl_80880390
    addi r30, r3, 0x1
    stw r30, lbl_80880390
    stw r30, lbl_808803C0
lbl_fn_8023C6F4_000013B4:
    lwz r3, 0x18(r1)
    lwz r0, 0x4(r3)
    cmplw r30, r0
    bge lbl_fn_8023C6F4_000013D8
    lwz r3, 0x0(r3)
    slwi r0, r30, 2
    lwzx r23, r3, r0
    cmpwi r23, 0x0
    bne lbl_fn_8023C6F4_00001434
lbl_fn_8023C6F4_000013D8:
    li r3, 0x18
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_8023C6F4_00001400
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8069293C
    mr r4, r3
lbl_fn_8023C6F4_00001400:
    lwz r5, lbl_808803C0
    lwz r3, 0x18(r1)
    cmpwi r5, 0x0
    bne lbl_fn_8023C6F4_00001420
    lwz r5, lbl_80880390
    addi r5, r5, 0x1
    stw r5, lbl_80880390
    stw r5, lbl_808803C0
lbl_fn_8023C6F4_00001420:
    bl fn_806920C0
    lwz r3, 0x18(r1)
    slwi r0, r30, 2
    lwz r3, 0x0(r3)
    lwzx r23, r3, r0
lbl_fn_8023C6F4_00001434:
    addic. r0, r1, 0x18
    beq lbl_fn_8023C6F4_0000144C
    lwz r3, 0x1c(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8023C6F4_0000144C
    bl fn_806952C4
lbl_fn_8023C6F4_0000144C:
    lhz r0, 0x30(r26)
    rlwinm. r0, r0, 0, 22, 22
    beq lbl_fn_8023C6F4_000014C0
    lwz r12, 0x0(r23)
    mr r3, r23
    li r4, 0x30
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    lhz r0, 0x30(r26)
    stb r3, 0xc(r1)
    rlwinm. r0, r0, 0, 17, 17
    beq lbl_fn_8023C6F4_000014A0
    lwz r12, 0x0(r23)
    mr r3, r23
    li r4, 0x58
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    stb r3, 0xd(r1)
    b lbl_fn_8023C6F4_000014BC
lbl_fn_8023C6F4_000014A0:
    lwz r12, 0x0(r23)
    mr r3, r23
    li r4, 0x78
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    stb r3, 0xd(r1)
lbl_fn_8023C6F4_000014BC:
    li r28, 0x2
lbl_fn_8023C6F4_000014C0:
    mr r3, r26
    mr r4, r29
    mr r6, r23
    addi r5, r1, 0x28
    li r7, 0x0
    bl fn_80242FF4
    lwz r4, 0x2c(r26)
    add r0, r28, r3
    mr r31, r3
    li r30, 0x0
    cmpw r4, r0
    ble lbl_fn_8023C6F4_000014F4
    subf r30, r0, r4
lbl_fn_8023C6F4_000014F4:
    lhz r0, 0x30(r26)
    andi. r29, r0, 0xb0
    cmplwi r29, 0x20
    beq lbl_fn_8023C6F4_00001588
    cmplwi r29, 0x10
    beq lbl_fn_8023C6F4_00001588
    cmpwi r30, 0x0
    li r24, 0x0
    ble lbl_fn_8023C6F4_00001588
    b lbl_fn_8023C6F4_00001580
lbl_fn_8023C6F4_0000151C:
    cmpwi r25, 0x0
    li r23, 0x0
    beq lbl_fn_8023C6F4_00001570
    lwz r3, 0x14(r25)
    lwz r0, 0x18(r25)
    cmplw r3, r0
    bge lbl_fn_8023C6F4_0000154C
    stb r27, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x14(r25)
    lbz r3, 0x0(r3)
    b lbl_fn_8023C6F4_00001564
lbl_fn_8023C6F4_0000154C:
    lwz r12, 0x0(r25)
    mr r3, r25
    clrlwi r4, r27, 24
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
lbl_fn_8023C6F4_00001564:
    cmpwi r3, -0x1
    bne lbl_fn_8023C6F4_00001570
    li r23, 0x1
lbl_fn_8023C6F4_00001570:
    cmpwi r23, 0x0
    beq lbl_fn_8023C6F4_0000157C
    li r25, 0x0
lbl_fn_8023C6F4_0000157C:
    addi r24, r24, 0x1
lbl_fn_8023C6F4_00001580:
    cmpw r24, r30
    blt lbl_fn_8023C6F4_0000151C
lbl_fn_8023C6F4_00001588:
    cmpwi r28, 0x0
    addi r24, r1, 0xc
    li r23, 0x0
    ble lbl_fn_8023C6F4_00001614
    b lbl_fn_8023C6F4_0000160C
lbl_fn_8023C6F4_0000159C:
    lbz r0, 0x0(r24)
    cmpwi r25, 0x0
    li r22, 0x0
    addi r24, r24, 0x1
    extsb r4, r0
    beq lbl_fn_8023C6F4_000015FC
    lwz r3, 0x14(r25)
    lwz r0, 0x18(r25)
    cmplw r3, r0
    bge lbl_fn_8023C6F4_000015D8
    stb r4, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x14(r25)
    lbz r3, 0x0(r3)
    b lbl_fn_8023C6F4_000015F0
lbl_fn_8023C6F4_000015D8:
    lwz r12, 0x0(r25)
    mr r3, r25
    clrlwi r4, r4, 24
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
lbl_fn_8023C6F4_000015F0:
    cmpwi r3, -0x1
    bne lbl_fn_8023C6F4_000015FC
    li r22, 0x1
lbl_fn_8023C6F4_000015FC:
    cmpwi r22, 0x0
    beq lbl_fn_8023C6F4_00001608
    li r25, 0x0
lbl_fn_8023C6F4_00001608:
    addi r23, r23, 0x1
lbl_fn_8023C6F4_0000160C:
    cmpw r23, r28
    blt lbl_fn_8023C6F4_0000159C
lbl_fn_8023C6F4_00001614:
    cmplwi r29, 0x10
    bne lbl_fn_8023C6F4_00001698
    cmpwi r30, 0x0
    li r23, 0x0
    ble lbl_fn_8023C6F4_00001698
    b lbl_fn_8023C6F4_00001690
lbl_fn_8023C6F4_0000162C:
    cmpwi r25, 0x0
    li r22, 0x0
    beq lbl_fn_8023C6F4_00001680
    lwz r3, 0x14(r25)
    lwz r0, 0x18(r25)
    cmplw r3, r0
    bge lbl_fn_8023C6F4_0000165C
    stb r27, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x14(r25)
    lbz r3, 0x0(r3)
    b lbl_fn_8023C6F4_00001674
lbl_fn_8023C6F4_0000165C:
    lwz r12, 0x0(r25)
    mr r3, r25
    clrlwi r4, r27, 24
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
lbl_fn_8023C6F4_00001674:
    cmpwi r3, -0x1
    bne lbl_fn_8023C6F4_00001680
    li r22, 0x1
lbl_fn_8023C6F4_00001680:
    cmpwi r22, 0x0
    beq lbl_fn_8023C6F4_0000168C
    li r25, 0x0
lbl_fn_8023C6F4_0000168C:
    addi r23, r23, 0x1
lbl_fn_8023C6F4_00001690:
    cmpw r23, r30
    blt lbl_fn_8023C6F4_0000162C
lbl_fn_8023C6F4_00001698:
    cmpwi r31, 0x0
    addi r23, r1, 0x28
    li r24, 0x0
    ble lbl_fn_8023C6F4_00001724
    b lbl_fn_8023C6F4_0000171C
lbl_fn_8023C6F4_000016AC:
    lbz r0, 0x0(r23)
    cmpwi r25, 0x0
    li r22, 0x0
    addi r23, r23, 0x1
    extsb r4, r0
    beq lbl_fn_8023C6F4_0000170C
    lwz r3, 0x14(r25)
    lwz r0, 0x18(r25)
    cmplw r3, r0
    bge lbl_fn_8023C6F4_000016E8
    stb r4, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x14(r25)
    lbz r3, 0x0(r3)
    b lbl_fn_8023C6F4_00001700
lbl_fn_8023C6F4_000016E8:
    lwz r12, 0x0(r25)
    mr r3, r25
    clrlwi r4, r4, 24
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
lbl_fn_8023C6F4_00001700:
    cmpwi r3, -0x1
    bne lbl_fn_8023C6F4_0000170C
    li r22, 0x1
lbl_fn_8023C6F4_0000170C:
    cmpwi r22, 0x0
    beq lbl_fn_8023C6F4_00001718
    li r25, 0x0
lbl_fn_8023C6F4_00001718:
    addi r24, r24, 0x1
lbl_fn_8023C6F4_0000171C:
    cmpw r24, r31
    blt lbl_fn_8023C6F4_000016AC
lbl_fn_8023C6F4_00001724:
    cmplwi r29, 0x20
    bne lbl_fn_8023C6F4_000017A8
    cmpwi r30, 0x0
    li r23, 0x0
    ble lbl_fn_8023C6F4_000017A8
    b lbl_fn_8023C6F4_000017A0
lbl_fn_8023C6F4_0000173C:
    cmpwi r25, 0x0
    li r22, 0x0
    beq lbl_fn_8023C6F4_00001790
    lwz r3, 0x14(r25)
    lwz r0, 0x18(r25)
    cmplw r3, r0
    bge lbl_fn_8023C6F4_0000176C
    stb r27, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x14(r25)
    lbz r3, 0x0(r3)
    b lbl_fn_8023C6F4_00001784
lbl_fn_8023C6F4_0000176C:
    lwz r12, 0x0(r25)
    mr r3, r25
    clrlwi r4, r27, 24
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
lbl_fn_8023C6F4_00001784:
    cmpwi r3, -0x1
    bne lbl_fn_8023C6F4_00001790
    li r22, 0x1
lbl_fn_8023C6F4_00001790:
    cmpwi r22, 0x0
    beq lbl_fn_8023C6F4_0000179C
    li r25, 0x0
lbl_fn_8023C6F4_0000179C:
    addi r23, r23, 0x1
lbl_fn_8023C6F4_000017A0:
    cmpw r23, r30
    blt lbl_fn_8023C6F4_0000173C
lbl_fn_8023C6F4_000017A8:
    li r0, 0x0
    stw r0, 0x2c(r26)
    mr r3, r25
    b lbl_fn_8023C6F4_00001BD8
lbl_fn_8023C6F4_000017B8:
    lwz r25, 0x0(r4)
    mr r4, r26
    addi r3, r1, 0x10
    bl fn_800E1D5C
    lwz r28, lbl_808803C0
    cmpwi r28, 0x0
    bne lbl_fn_8023C6F4_000017E4
    lwz r3, lbl_80880390
    addi r28, r3, 0x1
    stw r28, lbl_80880390
    stw r28, lbl_808803C0
lbl_fn_8023C6F4_000017E4:
    lwz r3, 0x10(r1)
    lwz r0, 0x4(r3)
    cmplw r28, r0
    bge lbl_fn_8023C6F4_00001808
    lwz r3, 0x0(r3)
    slwi r0, r28, 2
    lwzx r23, r3, r0
    cmpwi r23, 0x0
    bne lbl_fn_8023C6F4_00001864
lbl_fn_8023C6F4_00001808:
    li r3, 0x18
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_8023C6F4_00001830
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8069293C
    mr r4, r3
lbl_fn_8023C6F4_00001830:
    lwz r5, lbl_808803C0
    lwz r3, 0x10(r1)
    cmpwi r5, 0x0
    bne lbl_fn_8023C6F4_00001850
    lwz r5, lbl_80880390
    addi r5, r5, 0x1
    stw r5, lbl_80880390
    stw r5, lbl_808803C0
lbl_fn_8023C6F4_00001850:
    bl fn_806920C0
    lwz r3, 0x10(r1)
    slwi r0, r28, 2
    lwz r3, 0x0(r3)
    lwzx r23, r3, r0
lbl_fn_8023C6F4_00001864:
    addic. r0, r1, 0x10
    beq lbl_fn_8023C6F4_0000187C
    lwz r3, 0x14(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8023C6F4_0000187C
    bl fn_806952C4
lbl_fn_8023C6F4_0000187C:
    cmpwi r29, 0x0
    li r30, 0x0
    blt lbl_fn_8023C6F4_000018B8
    lhz r0, 0x30(r26)
    rlwinm. r0, r0, 0, 20, 20
    beq lbl_fn_8023C6F4_000018B8
    lwz r12, 0x0(r23)
    mr r3, r23
    li r4, 0x2b
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    stb r3, 0x8(r1)
    li r30, 0x1
    b lbl_fn_8023C6F4_000018E4
lbl_fn_8023C6F4_000018B8:
    cmpwi r29, 0x0
    bge lbl_fn_8023C6F4_000018E4
    lwz r12, 0x0(r23)
    mr r3, r23
    li r30, 0x1
    li r4, 0x2d
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    stb r3, 0x8(r1)
    neg r29, r29
lbl_fn_8023C6F4_000018E4:
    mr r3, r26
    mr r4, r29
    mr r6, r23
    addi r5, r1, 0x48
    li r7, 0x0
    bl fn_80242FF4
    lwz r4, 0x2c(r26)
    add r0, r30, r3
    mr r31, r3
    li r28, 0x0
    cmpw r4, r0
    ble lbl_fn_8023C6F4_00001918
    subf r28, r0, r4
lbl_fn_8023C6F4_00001918:
    lhz r0, 0x30(r26)
    andi. r29, r0, 0xb0
    cmplwi r29, 0x20
    beq lbl_fn_8023C6F4_000019AC
    cmplwi r29, 0x10
    beq lbl_fn_8023C6F4_000019AC
    cmpwi r28, 0x0
    li r23, 0x0
    ble lbl_fn_8023C6F4_000019AC
    b lbl_fn_8023C6F4_000019A4
lbl_fn_8023C6F4_00001940:
    cmpwi r25, 0x0
    li r22, 0x0
    beq lbl_fn_8023C6F4_00001994
    lwz r3, 0x14(r25)
    lwz r0, 0x18(r25)
    cmplw r3, r0
    bge lbl_fn_8023C6F4_00001970
    stb r27, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x14(r25)
    lbz r3, 0x0(r3)
    b lbl_fn_8023C6F4_00001988
lbl_fn_8023C6F4_00001970:
    lwz r12, 0x0(r25)
    mr r3, r25
    clrlwi r4, r27, 24
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
lbl_fn_8023C6F4_00001988:
    cmpwi r3, -0x1
    bne lbl_fn_8023C6F4_00001994
    li r22, 0x1
lbl_fn_8023C6F4_00001994:
    cmpwi r22, 0x0
    beq lbl_fn_8023C6F4_000019A0
    li r25, 0x0
lbl_fn_8023C6F4_000019A0:
    addi r23, r23, 0x1
lbl_fn_8023C6F4_000019A4:
    cmpw r23, r28
    blt lbl_fn_8023C6F4_00001940
lbl_fn_8023C6F4_000019AC:
    cmpwi r30, 0x0
    addi r23, r1, 0x8
    li r24, 0x0
    ble lbl_fn_8023C6F4_00001A38
    b lbl_fn_8023C6F4_00001A30
lbl_fn_8023C6F4_000019C0:
    lbz r0, 0x0(r23)
    cmpwi r25, 0x0
    li r22, 0x0
    addi r23, r23, 0x1
    extsb r4, r0
    beq lbl_fn_8023C6F4_00001A20
    lwz r3, 0x14(r25)
    lwz r0, 0x18(r25)
    cmplw r3, r0
    bge lbl_fn_8023C6F4_000019FC
    stb r4, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x14(r25)
    lbz r3, 0x0(r3)
    b lbl_fn_8023C6F4_00001A14
lbl_fn_8023C6F4_000019FC:
    lwz r12, 0x0(r25)
    mr r3, r25
    clrlwi r4, r4, 24
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
lbl_fn_8023C6F4_00001A14:
    cmpwi r3, -0x1
    bne lbl_fn_8023C6F4_00001A20
    li r22, 0x1
lbl_fn_8023C6F4_00001A20:
    cmpwi r22, 0x0
    beq lbl_fn_8023C6F4_00001A2C
    li r25, 0x0
lbl_fn_8023C6F4_00001A2C:
    addi r24, r24, 0x1
lbl_fn_8023C6F4_00001A30:
    cmpw r24, r30
    blt lbl_fn_8023C6F4_000019C0
lbl_fn_8023C6F4_00001A38:
    cmplwi r29, 0x10
    bne lbl_fn_8023C6F4_00001ABC
    cmpwi r28, 0x0
    li r23, 0x0
    ble lbl_fn_8023C6F4_00001ABC
    b lbl_fn_8023C6F4_00001AB4
lbl_fn_8023C6F4_00001A50:
    cmpwi r25, 0x0
    li r22, 0x0
    beq lbl_fn_8023C6F4_00001AA4
    lwz r3, 0x14(r25)
    lwz r0, 0x18(r25)
    cmplw r3, r0
    bge lbl_fn_8023C6F4_00001A80
    stb r27, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x14(r25)
    lbz r3, 0x0(r3)
    b lbl_fn_8023C6F4_00001A98
lbl_fn_8023C6F4_00001A80:
    lwz r12, 0x0(r25)
    mr r3, r25
    clrlwi r4, r27, 24
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
lbl_fn_8023C6F4_00001A98:
    cmpwi r3, -0x1
    bne lbl_fn_8023C6F4_00001AA4
    li r22, 0x1
lbl_fn_8023C6F4_00001AA4:
    cmpwi r22, 0x0
    beq lbl_fn_8023C6F4_00001AB0
    li r25, 0x0
lbl_fn_8023C6F4_00001AB0:
    addi r23, r23, 0x1
lbl_fn_8023C6F4_00001AB4:
    cmpw r23, r28
    blt lbl_fn_8023C6F4_00001A50
lbl_fn_8023C6F4_00001ABC:
    cmpwi r31, 0x0
    addi r23, r1, 0x48
    li r24, 0x0
    ble lbl_fn_8023C6F4_00001B48
    b lbl_fn_8023C6F4_00001B40
lbl_fn_8023C6F4_00001AD0:
    lbz r0, 0x0(r23)
    cmpwi r25, 0x0
    li r22, 0x0
    addi r23, r23, 0x1
    extsb r4, r0
    beq lbl_fn_8023C6F4_00001B30
    lwz r3, 0x14(r25)
    lwz r0, 0x18(r25)
    cmplw r3, r0
    bge lbl_fn_8023C6F4_00001B0C
    stb r4, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x14(r25)
    lbz r3, 0x0(r3)
    b lbl_fn_8023C6F4_00001B24
lbl_fn_8023C6F4_00001B0C:
    lwz r12, 0x0(r25)
    mr r3, r25
    clrlwi r4, r4, 24
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
lbl_fn_8023C6F4_00001B24:
    cmpwi r3, -0x1
    bne lbl_fn_8023C6F4_00001B30
    li r22, 0x1
lbl_fn_8023C6F4_00001B30:
    cmpwi r22, 0x0
    beq lbl_fn_8023C6F4_00001B3C
    li r25, 0x0
lbl_fn_8023C6F4_00001B3C:
    addi r24, r24, 0x1
lbl_fn_8023C6F4_00001B40:
    cmpw r24, r31
    blt lbl_fn_8023C6F4_00001AD0
lbl_fn_8023C6F4_00001B48:
    cmplwi r29, 0x20
    bne lbl_fn_8023C6F4_00001BCC
    cmpwi r28, 0x0
    li r23, 0x0
    ble lbl_fn_8023C6F4_00001BCC
    b lbl_fn_8023C6F4_00001BC4
lbl_fn_8023C6F4_00001B60:
    cmpwi r25, 0x0
    li r22, 0x0
    beq lbl_fn_8023C6F4_00001BB4
    lwz r3, 0x14(r25)
    lwz r0, 0x18(r25)
    cmplw r3, r0
    bge lbl_fn_8023C6F4_00001B90
    stb r27, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x14(r25)
    lbz r3, 0x0(r3)
    b lbl_fn_8023C6F4_00001BA8
lbl_fn_8023C6F4_00001B90:
    lwz r12, 0x0(r25)
    mr r3, r25
    clrlwi r4, r27, 24
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
lbl_fn_8023C6F4_00001BA8:
    cmpwi r3, -0x1
    bne lbl_fn_8023C6F4_00001BB4
    li r22, 0x1
lbl_fn_8023C6F4_00001BB4:
    cmpwi r22, 0x0
    beq lbl_fn_8023C6F4_00001BC0
    li r25, 0x0
lbl_fn_8023C6F4_00001BC0:
    addi r23, r23, 0x1
lbl_fn_8023C6F4_00001BC4:
    cmpw r23, r28
    blt lbl_fn_8023C6F4_00001B60
lbl_fn_8023C6F4_00001BCC:
    li r0, 0x0
    stw r0, 0x2c(r26)
    mr r3, r25
lbl_fn_8023C6F4_00001BD8:
    lmw r22, 0xa8(r1)
    lwz r0, 0xd4(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}
