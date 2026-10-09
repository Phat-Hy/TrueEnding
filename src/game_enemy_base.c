#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_26(void);
extern void _savegpr_26(void);
extern void fn_80128090(void);
extern void fn_80128CF8(void);
extern void fn_80129144(void);
extern void fn_80129670(void);
extern void fn_80153698(void);
extern void fn_801539E0(void);
extern void fn_80155DAC(void);
extern void fn_8016EB48(void);
extern void fn_80179D44(void);
extern void fn_8036DAF4(void);
extern void fn_803C11A4(void);
extern void fn_803C1338(void);
extern void fn_803C1560(void);
extern void fn_803CD958(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F99B0(void);
extern void fn_8068AEA8(void);

/* External data declarations */
extern u8 jumptable_8077A678[];
extern u8 lbl_807371F8[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087F430;
extern u32 lbl_8087F540;
extern u32 lbl_80881858;
extern u32 lbl_8088185C;
extern u32 lbl_80881860;
extern u32 lbl_80881864;
extern u32 lbl_80881868;
extern u32 lbl_8088186C;
extern u32 lbl_80881870;
extern u32 lbl_80881874;
extern u32 lbl_80881878;
extern u32 lbl_8088187C;
extern u32 lbl_80881880;
extern u32 lbl_80881884;
extern u32 lbl_80881888;
extern u32 lbl_8088188C;
extern u32 lbl_80881890;
extern u32 lbl_80881894;

/* Function declarations */
void fn_80125320(void);
void fn_8012539C(void);
void fn_80125474(void);
void fn_801255C8(void);
void fn_80126214(void);

asm void fn_80125320(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lfs f1, lbl_80881858
    stw r0, 0x14(r1)
    li r0, 0x0
    lfs f0, lbl_8088185C
    stw r31, 0xc(r1)
    li r31, 0x1
    stw r30, 0x8(r1)
    mr r30, r3
    stw r0, 0xc(r3)
    stw r31, 0x2c(r3)
    stw r0, 0xa0(r3)
    stw r0, 0xa4(r3)
    stfs f1, 0x70(r3)
    stfs f1, 0x74(r3)
    stfs f1, 0x78(r3)
    stfs f1, 0x7c(r3)
    stfs f1, 0x80(r3)
    stfs f0, 0x84(r3)
    stfs f1, 0x88(r3)
    stfs f1, 0x8c(r3)
    bl fn_8012539C
    stw r31, 0x2c(r30)
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8012539C(void)
{
    nofralloc
    lwz r0, 0x2c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8012539C_000000E0
    lwz r4, lbl_8087F430
    cmpwi r4, 0x0
    beq lbl_fn_8012539C_0000009C
    lwz r4, 0x10d8(r4)
    b lbl_fn_8012539C_000000B4
lbl_fn_8012539C_0000009C:
    lwz r4, lbl_8087F540
    cmpwi r4, 0x0
    beq lbl_fn_8012539C_000000B0
    lwz r4, 0x1a6c(r4)
    b lbl_fn_8012539C_000000B4
lbl_fn_8012539C_000000B0:
    li r4, 0x0
lbl_fn_8012539C_000000B4:
    cmpwi r4, 0x0
    beq lbl_fn_8012539C_000000E0
    lwz r5, 0xc(r3)
    cmpwi r5, 0x0
    ble lbl_fn_8012539C_000000E0
    subi r0, r5, 0x1
    lwz r5, 0xb0(r4)
    slwi r4, r0, 6
    add r4, r5, r4
    li r0, 0x0
    stw r0, 0x3c(r4)
lbl_fn_8012539C_000000E0:
    li r4, 0x0
    li r0, -0x1
    lis r5, lbl_807C7030@ha
    stw r0, 0x40(r3)
    addi r5, r5, lbl_807C7030@l
    li r0, 0x1
    stw r4, 0x48(r3)
    lfs f0, lbl_80881858
    stw r4, 0x90(r3)
    psq_l f1, 0x0(r5), 0, 0
    lfs f2, 0x8(r5)
    stfs f2, 0x6c(r3)
    psq_st f1, 0x64(r3), 0, 0
    stw r4, 0x98(r3)
    stw r0, 0x94(r3)
    stw r4, 0xc(r3)
    stw r4, 0x8(r3)
    stw r4, 0x4(r3)
    stw r4, 0x0(r3)
    psq_l f1, 0x0(r5), 0, 0
    lfs f2, 0x8(r5)
    stfs f2, 0x18(r3)
    psq_st f1, 0x10(r3), 0, 0
    stw r4, 0x1c(r3)
    stw r4, 0x20(r3)
    stw r4, 0x24(r3)
    stfs f0, 0x28(r3)
    stw r4, 0x2c(r3)
    blr
}

asm void fn_80125474(void)
{
    nofralloc
    lwz r4, lbl_8087F430
    cmpwi r4, 0x0
    beq lbl_fn_80125474_00000168
    lwz r5, 0x10d8(r4)
    b lbl_fn_80125474_00000180
lbl_fn_80125474_00000168:
    lwz r4, lbl_8087F540
    cmpwi r4, 0x0
    beq lbl_fn_80125474_0000017C
    lwz r5, 0x1a6c(r4)
    b lbl_fn_80125474_00000180
lbl_fn_80125474_0000017C:
    li r5, 0x0
lbl_fn_80125474_00000180:
    cmpwi r5, 0x0
    bne lbl_fn_80125474_00000190
    li r3, 0x0
    blr
lbl_fn_80125474_00000190:
    lwz r6, 0x4(r3)
    cmpwi r6, 0x0
    ble lbl_fn_80125474_000001C4
    lwz r0, 0x74(r5)
    cmpw r6, r0
    bgt lbl_fn_80125474_000001C4
    subi r0, r6, 0x1
    lwz r4, 0x9c(r5)
    mulli r0, r0, 0x30
    add r4, r4, r0
    lwz r0, 0x2c(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80125474_0000022C
lbl_fn_80125474_000001C4:
    lwz r7, 0x8(r3)
    cmpwi r7, 0x0
    ble lbl_fn_80125474_000001F8
    lwz r0, 0x74(r5)
    cmpw r7, r0
    bgt lbl_fn_80125474_000001F8
    subi r0, r7, 0x1
    lwz r4, 0x9c(r5)
    mulli r0, r0, 0x30
    add r4, r4, r0
    lwz r0, 0x2c(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80125474_0000022C
lbl_fn_80125474_000001F8:
    lwz r8, 0xc(r3)
    cmpwi r8, 0x0
    ble lbl_fn_80125474_00000234
    lwz r0, 0xa8(r5)
    cmpw r8, r0
    bgt lbl_fn_80125474_00000234
    subi r0, r8, 0x1
    lwz r4, 0xb0(r5)
    slwi r0, r0, 6
    add r4, r4, r0
    lwz r0, 0x38(r4)
    cmpwi r0, 0x0
    bne lbl_fn_80125474_00000234
lbl_fn_80125474_0000022C:
    li r3, 0x0
    blr
lbl_fn_80125474_00000234:
    cmpwi r7, 0x0
    bgt lbl_fn_80125474_00000244
    li r3, 0x0
    blr
lbl_fn_80125474_00000244:
    lwz r4, 0x40(r3)
    cmpwi r4, 0x0
    bne lbl_fn_80125474_00000260
    cmpwi r6, 0x0
    bgt lbl_fn_80125474_00000260
    li r3, 0x0
    blr
lbl_fn_80125474_00000260:
    cmpwi r4, 0x1
    bne lbl_fn_80125474_00000278
    cmpwi r8, 0x0
    bgt lbl_fn_80125474_00000278
    li r3, 0x0
    blr
lbl_fn_80125474_00000278:
    cmpwi r4, 0x4
    beq lbl_fn_80125474_0000028C
    subi r0, r4, 0x6
    cmplwi r0, 0x1
    bgt lbl_fn_80125474_000002A0
lbl_fn_80125474_0000028C:
    lwz r0, 0x24(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80125474_000002A0
    li r3, 0x0
    blr
lbl_fn_80125474_000002A0:
    li r3, 0x1
    blr
}

asm void fn_801255C8(void)
{
    nofralloc
    stwu r1, -0x220(r1)
    mflr r0
    stw r0, 0x224(r1)
    addi r11, r1, 0x220
    bl _savegpr_26
    lwz r4, 0xa4(r3)
    mr r31, r3
    lwz r0, 0x54c(r4)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_801255C8_000002E0
    lwz r0, 0x48(r3)
    ori r0, r0, 0x10
    stw r0, 0x48(r3)
lbl_fn_801255C8_000002E0:
    mr r3, r31
    bl fn_80125474
    cmpwi r3, 0x0
    beq lbl_fn_801255C8_00000ED0
    lwz r3, 0xa4(r31)
    lwz r0, 0x12a4(r3)
    srwi. r0, r0, 31
    beq lbl_fn_801255C8_00000304
    bl fn_801539E0
lbl_fn_801255C8_00000304:
    lwz r3, 0xa4(r31)
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 25
    beq lbl_fn_801255C8_0000031C
    li r4, 0x0
    bl fn_80155DAC
lbl_fn_801255C8_0000031C:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_801255C8_00000330
    lwz r30, 0x10d8(r3)
    b lbl_fn_801255C8_00000348
lbl_fn_801255C8_00000330:
    lwz r3, lbl_8087F540
    cmpwi r3, 0x0
    beq lbl_fn_801255C8_00000344
    lwz r30, 0x1a6c(r3)
    b lbl_fn_801255C8_00000348
lbl_fn_801255C8_00000344:
    li r30, 0x0
lbl_fn_801255C8_00000348:
    lwz r3, 0x48(r31)
    lwz r0, 0x40(r31)
    rlwinm r3, r3, 0, 25, 25
    stw r0, 0x44(r31)
    cmplwi r3, 0x40
    beq lbl_fn_801255C8_0000037C
    mr r3, r31
    bl fn_80128CF8
    cmpwi r3, 0x0
    beq lbl_fn_801255C8_0000037C
    mr r3, r31
    bl fn_80129144
    b lbl_fn_801255C8_00000E80
lbl_fn_801255C8_0000037C:
    lwz r0, 0x40(r31)
    cmpwi r0, 0x0
    beq lbl_fn_801255C8_000003BC
    cmpwi r0, 0x1
    beq lbl_fn_801255C8_000004F4
    cmpwi r0, 0x3
    beq lbl_fn_801255C8_00000658
    cmpwi r0, 0x4
    beq lbl_fn_801255C8_00000804
    cmpwi r0, 0x6
    beq lbl_fn_801255C8_0000096C
    cmpwi r0, 0x5
    beq lbl_fn_801255C8_00000AD4
    cmpwi r0, 0x7
    beq lbl_fn_801255C8_00000C38
    b lbl_fn_801255C8_00000E3C
lbl_fn_801255C8_000003BC:
    lwz r3, lbl_8087F430
    addi r30, r1, 0x164
    lwz r29, 0x4(r31)
    cmpwi r3, 0x0
    beq lbl_fn_801255C8_000003D8
    lwz r26, 0x10d8(r3)
    b lbl_fn_801255C8_000003F0
lbl_fn_801255C8_000003D8:
    lwz r3, lbl_8087F540
    cmpwi r3, 0x0
    beq lbl_fn_801255C8_000003EC
    lwz r26, 0x1a6c(r3)
    b lbl_fn_801255C8_000003F0
lbl_fn_801255C8_000003EC:
    li r26, 0x0
lbl_fn_801255C8_000003F0:
    lwz r3, 0x48(r31)
    rlwinm r0, r3, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_801255C8_00000424
    subi r0, r29, 0x1
    lwz r3, 0x9c(r26)
    mulli r0, r0, 0x30
    add r3, r3, r0
    psq_l f1, 0x4(r3), 0, 0
    lfs f2, 0xc(r3)
    stfs f2, 0x16c(r1)
    psq_st f1, 0x0(r30), 0, 0
    b lbl_fn_801255C8_000004E0
lbl_fn_801255C8_00000424:
    rlwinm r0, r3, 0, 27, 27
    cmplwi r0, 0x10
    bne lbl_fn_801255C8_000004D0
    lfs f3, lbl_80881858
    addi r3, r31, 0x58
    lfs f0, lbl_8088185C
    addi r4, r1, 0xe0
    stfs f3, 0xe0(r1)
    addi r5, r1, 0xec
    stfs f0, 0xe4(r1)
    stfs f3, 0xe8(r1)
    bl fn_805F99B0
    addi r3, r1, 0xec
    bl fn_805F9920
    lfs f0, lbl_80881858
    fcmpu cr0, f0, f1
    bne lbl_fn_801255C8_00000484
    addi r3, r1, 0xe0
    lfs f2, 0xe8(r1)
    addi r4, r1, 0xec
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0xf4(r1)
    b lbl_fn_801255C8_000004B8
lbl_fn_801255C8_00000484:
    addi r28, r1, 0xec
    addi r27, r1, 0xf8
    psq_l f1, 0x0(r28), 0, 0
    mr r3, r27
    lfs f2, 0xf4(r1)
    mr r4, r27
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0x100(r1)
    bl fn_805F98D0
    psq_l f1, 0x0(r27), 0, 0
    lfs f2, 0x100(r1)
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0xf4(r1)
lbl_fn_801255C8_000004B8:
    mr r3, r30
    mr r4, r26
    mr r5, r29
    addi r6, r1, 0xec
    bl fn_803C1338
    b lbl_fn_801255C8_000004E0
lbl_fn_801255C8_000004D0:
    mr r3, r30
    mr r4, r26
    mr r5, r29
    bl fn_803C11A4
lbl_fn_801255C8_000004E0:
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x8(r30)
    stfs f2, 0x54(r31)
    psq_st f1, 0x4c(r31), 0, 0
    b lbl_fn_801255C8_00000E3C
lbl_fn_801255C8_000004F4:
    lwz r27, 0x4(r31)
    cmpwi r27, 0x0
    ble lbl_fn_801255C8_0000063C
    li r0, 0x0
    stw r0, 0x40(r31)
    addi r26, r1, 0x158
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_801255C8_00000520
    lwz r30, 0x10d8(r3)
    b lbl_fn_801255C8_00000538
lbl_fn_801255C8_00000520:
    lwz r3, lbl_8087F540
    cmpwi r3, 0x0
    beq lbl_fn_801255C8_00000534
    lwz r30, 0x1a6c(r3)
    b lbl_fn_801255C8_00000538
lbl_fn_801255C8_00000534:
    li r30, 0x0
lbl_fn_801255C8_00000538:
    lwz r3, 0x48(r31)
    rlwinm r0, r3, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_801255C8_0000056C
    subi r0, r27, 0x1
    lwz r3, 0x9c(r30)
    mulli r0, r0, 0x30
    add r3, r3, r0
    psq_l f1, 0x4(r3), 0, 0
    lfs f2, 0xc(r3)
    stfs f2, 0x160(r1)
    psq_st f1, 0x0(r26), 0, 0
    b lbl_fn_801255C8_00000628
lbl_fn_801255C8_0000056C:
    rlwinm r0, r3, 0, 27, 27
    cmplwi r0, 0x10
    bne lbl_fn_801255C8_00000618
    lfs f3, lbl_80881858
    addi r3, r31, 0x58
    lfs f0, lbl_8088185C
    addi r4, r1, 0xbc
    stfs f3, 0xbc(r1)
    addi r5, r1, 0xc8
    stfs f0, 0xc0(r1)
    stfs f3, 0xc4(r1)
    bl fn_805F99B0
    addi r3, r1, 0xc8
    bl fn_805F9920
    lfs f0, lbl_80881858
    fcmpu cr0, f0, f1
    bne lbl_fn_801255C8_000005CC
    addi r3, r1, 0xbc
    lfs f2, 0xc4(r1)
    addi r4, r1, 0xc8
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0xd0(r1)
    b lbl_fn_801255C8_00000600
lbl_fn_801255C8_000005CC:
    addi r28, r1, 0xc8
    addi r29, r1, 0xd4
    psq_l f1, 0x0(r28), 0, 0
    mr r3, r29
    lfs f2, 0xd0(r1)
    mr r4, r29
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0xdc(r1)
    bl fn_805F98D0
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0xdc(r1)
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0xd0(r1)
lbl_fn_801255C8_00000600:
    mr r3, r26
    mr r4, r30
    mr r5, r27
    addi r6, r1, 0xc8
    bl fn_803C1338
    b lbl_fn_801255C8_00000628
lbl_fn_801255C8_00000618:
    mr r3, r26
    mr r4, r30
    mr r5, r27
    bl fn_803C11A4
lbl_fn_801255C8_00000628:
    psq_l f1, 0x0(r26), 0, 0
    lfs f2, 0x8(r26)
    stfs f2, 0x54(r31)
    psq_st f1, 0x4c(r31), 0, 0
    b lbl_fn_801255C8_00000E3C
lbl_fn_801255C8_0000063C:
    psq_l f1, 0x10(r31), 0, 0
    li r0, 0x0
    lfs f2, 0x18(r31)
    psq_st f1, 0x4c(r31), 0, 0
    stfs f2, 0x54(r31)
    stw r0, 0x94(r31)
    b lbl_fn_801255C8_00000E3C
lbl_fn_801255C8_00000658:
    lwz r27, 0x4(r31)
    cmpwi r27, 0x0
    ble lbl_fn_801255C8_000007A0
    li r0, 0x0
    stw r0, 0x40(r31)
    addi r26, r1, 0x14c
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_801255C8_00000684
    lwz r30, 0x10d8(r3)
    b lbl_fn_801255C8_0000069C
lbl_fn_801255C8_00000684:
    lwz r3, lbl_8087F540
    cmpwi r3, 0x0
    beq lbl_fn_801255C8_00000698
    lwz r30, 0x1a6c(r3)
    b lbl_fn_801255C8_0000069C
lbl_fn_801255C8_00000698:
    li r30, 0x0
lbl_fn_801255C8_0000069C:
    lwz r3, 0x48(r31)
    rlwinm r0, r3, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_801255C8_000006D0
    subi r0, r27, 0x1
    lwz r3, 0x9c(r30)
    mulli r0, r0, 0x30
    add r3, r3, r0
    psq_l f1, 0x4(r3), 0, 0
    lfs f2, 0xc(r3)
    stfs f2, 0x154(r1)
    psq_st f1, 0x0(r26), 0, 0
    b lbl_fn_801255C8_0000078C
lbl_fn_801255C8_000006D0:
    rlwinm r0, r3, 0, 27, 27
    cmplwi r0, 0x10
    bne lbl_fn_801255C8_0000077C
    lfs f3, lbl_80881858
    addi r3, r31, 0x58
    lfs f0, lbl_8088185C
    addi r4, r1, 0x98
    stfs f3, 0x98(r1)
    addi r5, r1, 0xa4
    stfs f0, 0x9c(r1)
    stfs f3, 0xa0(r1)
    bl fn_805F99B0
    addi r3, r1, 0xa4
    bl fn_805F9920
    lfs f0, lbl_80881858
    fcmpu cr0, f0, f1
    bne lbl_fn_801255C8_00000730
    addi r3, r1, 0x98
    lfs f2, 0xa0(r1)
    addi r4, r1, 0xa4
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0xac(r1)
    b lbl_fn_801255C8_00000764
lbl_fn_801255C8_00000730:
    addi r28, r1, 0xa4
    addi r29, r1, 0xb0
    psq_l f1, 0x0(r28), 0, 0
    mr r3, r29
    lfs f2, 0xac(r1)
    mr r4, r29
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0xb8(r1)
    bl fn_805F98D0
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0xb8(r1)
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0xac(r1)
lbl_fn_801255C8_00000764:
    mr r3, r26
    mr r4, r30
    mr r5, r27
    addi r6, r1, 0xa4
    bl fn_803C1338
    b lbl_fn_801255C8_0000078C
lbl_fn_801255C8_0000077C:
    mr r3, r26
    mr r4, r30
    mr r5, r27
    bl fn_803C11A4
lbl_fn_801255C8_0000078C:
    psq_l f1, 0x0(r26), 0, 0
    lfs f2, 0x8(r26)
    stfs f2, 0x54(r31)
    psq_st f1, 0x4c(r31), 0, 0
    b lbl_fn_801255C8_00000E3C
lbl_fn_801255C8_000007A0:
    lwz r0, 0x78(r30)
    li r5, 0x0
    lwz r4, 0x20(r31)
    li r6, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_801255C8_000007E4
lbl_fn_801255C8_000007BC:
    lwz r3, 0x7c(r30)
    lwzx r0, r3, r6
    cmpw r4, r0
    bne lbl_fn_801255C8_000007D8
    mulli r0, r5, 0x28
    add r3, r3, r0
    b lbl_fn_801255C8_000007E8
lbl_fn_801255C8_000007D8:
    addi r6, r6, 0x28
    addi r5, r5, 0x1
    bdnz lbl_fn_801255C8_000007BC
lbl_fn_801255C8_000007E4:
    li r3, 0x0
lbl_fn_801255C8_000007E8:
    psq_l f1, 0x4(r3), 0, 0
    li r0, 0x0
    lfs f2, 0xc(r3)
    stfs f2, 0x54(r31)
    psq_st f1, 0x4c(r31), 0, 0
    stw r0, 0x94(r31)
    b lbl_fn_801255C8_00000E3C
lbl_fn_801255C8_00000804:
    lwz r27, 0x4(r31)
    cmpwi r27, 0x0
    ble lbl_fn_801255C8_0000094C
    li r0, 0x0
    stw r0, 0x40(r31)
    addi r26, r1, 0x140
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_801255C8_00000830
    lwz r30, 0x10d8(r3)
    b lbl_fn_801255C8_00000848
lbl_fn_801255C8_00000830:
    lwz r3, lbl_8087F540
    cmpwi r3, 0x0
    beq lbl_fn_801255C8_00000844
    lwz r30, 0x1a6c(r3)
    b lbl_fn_801255C8_00000848
lbl_fn_801255C8_00000844:
    li r30, 0x0
lbl_fn_801255C8_00000848:
    lwz r3, 0x48(r31)
    rlwinm r0, r3, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_801255C8_0000087C
    subi r0, r27, 0x1
    lwz r3, 0x9c(r30)
    mulli r0, r0, 0x30
    add r3, r3, r0
    psq_l f1, 0x4(r3), 0, 0
    lfs f2, 0xc(r3)
    stfs f2, 0x148(r1)
    psq_st f1, 0x0(r26), 0, 0
    b lbl_fn_801255C8_00000938
lbl_fn_801255C8_0000087C:
    rlwinm r0, r3, 0, 27, 27
    cmplwi r0, 0x10
    bne lbl_fn_801255C8_00000928
    lfs f3, lbl_80881858
    addi r3, r31, 0x58
    lfs f0, lbl_8088185C
    addi r4, r1, 0x74
    stfs f3, 0x74(r1)
    addi r5, r1, 0x80
    stfs f0, 0x78(r1)
    stfs f3, 0x7c(r1)
    bl fn_805F99B0
    addi r3, r1, 0x80
    bl fn_805F9920
    lfs f0, lbl_80881858
    fcmpu cr0, f0, f1
    bne lbl_fn_801255C8_000008DC
    addi r3, r1, 0x74
    lfs f2, 0x7c(r1)
    addi r4, r1, 0x80
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x88(r1)
    b lbl_fn_801255C8_00000910
lbl_fn_801255C8_000008DC:
    addi r28, r1, 0x80
    addi r29, r1, 0x8c
    psq_l f1, 0x0(r28), 0, 0
    mr r3, r29
    lfs f2, 0x88(r1)
    mr r4, r29
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x94(r1)
    bl fn_805F98D0
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x94(r1)
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x88(r1)
lbl_fn_801255C8_00000910:
    mr r3, r26
    mr r4, r30
    mr r5, r27
    addi r6, r1, 0x80
    bl fn_803C1338
    b lbl_fn_801255C8_00000938
lbl_fn_801255C8_00000928:
    mr r3, r26
    mr r4, r30
    mr r5, r27
    bl fn_803C11A4
lbl_fn_801255C8_00000938:
    psq_l f1, 0x0(r26), 0, 0
    lfs f2, 0x8(r26)
    stfs f2, 0x54(r31)
    psq_st f1, 0x4c(r31), 0, 0
    b lbl_fn_801255C8_00000E3C
lbl_fn_801255C8_0000094C:
    lwz r3, 0x24(r31)
    li r0, 0x0
    psq_l f1, 0x528(r3), 0, 0
    lfs f2, 0x530(r3)
    stfs f2, 0x54(r31)
    psq_st f1, 0x4c(r31), 0, 0
    stw r0, 0x94(r31)
    b lbl_fn_801255C8_00000E3C
lbl_fn_801255C8_0000096C:
    lwz r27, 0x4(r31)
    cmpwi r27, 0x0
    ble lbl_fn_801255C8_00000AB4
    li r0, 0x0
    stw r0, 0x40(r31)
    addi r26, r1, 0x134
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_801255C8_00000998
    lwz r30, 0x10d8(r3)
    b lbl_fn_801255C8_000009B0
lbl_fn_801255C8_00000998:
    lwz r3, lbl_8087F540
    cmpwi r3, 0x0
    beq lbl_fn_801255C8_000009AC
    lwz r30, 0x1a6c(r3)
    b lbl_fn_801255C8_000009B0
lbl_fn_801255C8_000009AC:
    li r30, 0x0
lbl_fn_801255C8_000009B0:
    lwz r3, 0x48(r31)
    rlwinm r0, r3, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_801255C8_000009E4
    subi r0, r27, 0x1
    lwz r3, 0x9c(r30)
    mulli r0, r0, 0x30
    add r3, r3, r0
    psq_l f1, 0x4(r3), 0, 0
    lfs f2, 0xc(r3)
    stfs f2, 0x13c(r1)
    psq_st f1, 0x0(r26), 0, 0
    b lbl_fn_801255C8_00000AA0
lbl_fn_801255C8_000009E4:
    rlwinm r0, r3, 0, 27, 27
    cmplwi r0, 0x10
    bne lbl_fn_801255C8_00000A90
    lfs f3, lbl_80881858
    addi r3, r31, 0x58
    lfs f0, lbl_8088185C
    addi r4, r1, 0x50
    stfs f3, 0x50(r1)
    addi r5, r1, 0x5c
    stfs f0, 0x54(r1)
    stfs f3, 0x58(r1)
    bl fn_805F99B0
    addi r3, r1, 0x5c
    bl fn_805F9920
    lfs f0, lbl_80881858
    fcmpu cr0, f0, f1
    bne lbl_fn_801255C8_00000A44
    addi r3, r1, 0x50
    lfs f2, 0x58(r1)
    addi r4, r1, 0x5c
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x64(r1)
    b lbl_fn_801255C8_00000A78
lbl_fn_801255C8_00000A44:
    addi r28, r1, 0x5c
    addi r29, r1, 0x68
    psq_l f1, 0x0(r28), 0, 0
    mr r3, r29
    lfs f2, 0x64(r1)
    mr r4, r29
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x70(r1)
    bl fn_805F98D0
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x70(r1)
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x64(r1)
lbl_fn_801255C8_00000A78:
    mr r3, r26
    mr r4, r30
    mr r5, r27
    addi r6, r1, 0x5c
    bl fn_803C1338
    b lbl_fn_801255C8_00000AA0
lbl_fn_801255C8_00000A90:
    mr r3, r26
    mr r4, r30
    mr r5, r27
    bl fn_803C11A4
lbl_fn_801255C8_00000AA0:
    psq_l f1, 0x0(r26), 0, 0
    lfs f2, 0x8(r26)
    stfs f2, 0x54(r31)
    psq_st f1, 0x4c(r31), 0, 0
    b lbl_fn_801255C8_00000E3C
lbl_fn_801255C8_00000AB4:
    lwz r3, 0xa4(r31)
    li r0, 0x0
    psq_l f1, 0x528(r3), 0, 0
    lfs f2, 0x530(r3)
    stfs f2, 0x54(r31)
    psq_st f1, 0x4c(r31), 0, 0
    stw r0, 0x94(r31)
    b lbl_fn_801255C8_00000E3C
lbl_fn_801255C8_00000AD4:
    lwz r27, 0x4(r31)
    cmpwi r27, 0x0
    ble lbl_fn_801255C8_00000C1C
    li r0, 0x0
    stw r0, 0x40(r31)
    addi r26, r1, 0x128
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_801255C8_00000B00
    lwz r30, 0x10d8(r3)
    b lbl_fn_801255C8_00000B18
lbl_fn_801255C8_00000B00:
    lwz r3, lbl_8087F540
    cmpwi r3, 0x0
    beq lbl_fn_801255C8_00000B14
    lwz r30, 0x1a6c(r3)
    b lbl_fn_801255C8_00000B18
lbl_fn_801255C8_00000B14:
    li r30, 0x0
lbl_fn_801255C8_00000B18:
    lwz r3, 0x48(r31)
    rlwinm r0, r3, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_801255C8_00000B4C
    subi r0, r27, 0x1
    lwz r3, 0x9c(r30)
    mulli r0, r0, 0x30
    add r3, r3, r0
    psq_l f1, 0x4(r3), 0, 0
    lfs f2, 0xc(r3)
    stfs f2, 0x130(r1)
    psq_st f1, 0x0(r26), 0, 0
    b lbl_fn_801255C8_00000C08
lbl_fn_801255C8_00000B4C:
    rlwinm r0, r3, 0, 27, 27
    cmplwi r0, 0x10
    bne lbl_fn_801255C8_00000BF8
    lfs f3, lbl_80881858
    addi r3, r31, 0x58
    lfs f0, lbl_8088185C
    addi r4, r1, 0x2c
    stfs f3, 0x2c(r1)
    addi r5, r1, 0x38
    stfs f0, 0x30(r1)
    stfs f3, 0x34(r1)
    bl fn_805F99B0
    addi r3, r1, 0x38
    bl fn_805F9920
    lfs f0, lbl_80881858
    fcmpu cr0, f0, f1
    bne lbl_fn_801255C8_00000BAC
    addi r3, r1, 0x2c
    lfs f2, 0x34(r1)
    addi r4, r1, 0x38
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    b lbl_fn_801255C8_00000BE0
lbl_fn_801255C8_00000BAC:
    addi r28, r1, 0x38
    addi r29, r1, 0x44
    psq_l f1, 0x0(r28), 0, 0
    mr r3, r29
    lfs f2, 0x40(r1)
    mr r4, r29
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x4c(r1)
    bl fn_805F98D0
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x4c(r1)
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x40(r1)
lbl_fn_801255C8_00000BE0:
    mr r3, r26
    mr r4, r30
    mr r5, r27
    addi r6, r1, 0x38
    bl fn_803C1338
    b lbl_fn_801255C8_00000C08
lbl_fn_801255C8_00000BF8:
    mr r3, r26
    mr r4, r30
    mr r5, r27
    bl fn_803C11A4
lbl_fn_801255C8_00000C08:
    psq_l f1, 0x0(r26), 0, 0
    lfs f2, 0x8(r26)
    stfs f2, 0x54(r31)
    psq_st f1, 0x4c(r31), 0, 0
    b lbl_fn_801255C8_00000E3C
lbl_fn_801255C8_00000C1C:
    psq_l f1, 0x30(r31), 0, 0
    li r0, 0x0
    lfs f2, 0x38(r31)
    psq_st f1, 0x4c(r31), 0, 0
    stfs f2, 0x54(r31)
    stw r0, 0x94(r31)
    b lbl_fn_801255C8_00000E3C
lbl_fn_801255C8_00000C38:
    lwz r27, 0x4(r31)
    cmpwi r27, 0x0
    ble lbl_fn_801255C8_00000D80
    li r0, 0x0
    stw r0, 0x40(r31)
    addi r26, r1, 0x11c
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_801255C8_00000C64
    lwz r30, 0x10d8(r3)
    b lbl_fn_801255C8_00000C7C
lbl_fn_801255C8_00000C64:
    lwz r3, lbl_8087F540
    cmpwi r3, 0x0
    beq lbl_fn_801255C8_00000C78
    lwz r30, 0x1a6c(r3)
    b lbl_fn_801255C8_00000C7C
lbl_fn_801255C8_00000C78:
    li r30, 0x0
lbl_fn_801255C8_00000C7C:
    lwz r3, 0x48(r31)
    rlwinm r0, r3, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_801255C8_00000CB0
    subi r0, r27, 0x1
    lwz r3, 0x9c(r30)
    mulli r0, r0, 0x30
    add r3, r3, r0
    psq_l f1, 0x4(r3), 0, 0
    lfs f2, 0xc(r3)
    stfs f2, 0x124(r1)
    psq_st f1, 0x0(r26), 0, 0
    b lbl_fn_801255C8_00000D6C
lbl_fn_801255C8_00000CB0:
    rlwinm r0, r3, 0, 27, 27
    cmplwi r0, 0x10
    bne lbl_fn_801255C8_00000D5C
    lfs f3, lbl_80881858
    addi r3, r31, 0x58
    lfs f0, lbl_8088185C
    addi r4, r1, 0x8
    stfs f3, 0x8(r1)
    addi r5, r1, 0x14
    stfs f0, 0xc(r1)
    stfs f3, 0x10(r1)
    bl fn_805F99B0
    addi r3, r1, 0x14
    bl fn_805F9920
    lfs f0, lbl_80881858
    fcmpu cr0, f0, f1
    bne lbl_fn_801255C8_00000D10
    addi r3, r1, 0x8
    lfs f2, 0x10(r1)
    addi r4, r1, 0x14
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x1c(r1)
    b lbl_fn_801255C8_00000D44
lbl_fn_801255C8_00000D10:
    addi r28, r1, 0x14
    addi r29, r1, 0x20
    psq_l f1, 0x0(r28), 0, 0
    mr r3, r29
    lfs f2, 0x1c(r1)
    mr r4, r29
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x28(r1)
    bl fn_805F98D0
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x28(r1)
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x1c(r1)
lbl_fn_801255C8_00000D44:
    mr r3, r26
    mr r4, r30
    mr r5, r27
    addi r6, r1, 0x14
    bl fn_803C1338
    b lbl_fn_801255C8_00000D6C
lbl_fn_801255C8_00000D5C:
    mr r3, r26
    mr r4, r30
    mr r5, r27
    bl fn_803C11A4
lbl_fn_801255C8_00000D6C:
    psq_l f1, 0x0(r26), 0, 0
    lfs f2, 0x8(r26)
    stfs f2, 0x54(r31)
    psq_st f1, 0x4c(r31), 0, 0
    b lbl_fn_801255C8_00000E3C
lbl_fn_801255C8_00000D80:
    lwz r5, 0x24(r31)
    addi r3, r1, 0x1a0
    lfs f3, lbl_80881858
    li r4, 0x79
    psq_l f1, 0x528(r5), 0, 0
    lfs f2, 0x530(r5)
    stfs f2, 0x54(r31)
    lfs f0, lbl_8088185C
    psq_st f1, 0x4c(r31), 0, 0
    stfs f3, 0x170(r1)
    stfs f3, 0x174(r1)
    stfs f0, 0x178(r1)
    lfs f1, 0x538(r5)
    bl fn_805F8E70
    addi r4, r1, 0x170
    addi r3, r1, 0x1a0
    mr r5, r4
    bl fn_805F93C0
    lfs f1, 0x9c(r31)
    addi r3, r1, 0x1d0
    li r4, 0x79
    bl fn_805F8E70
    addi r4, r1, 0x170
    addi r3, r1, 0x1d0
    mr r5, r4
    bl fn_805F93C0
    lfs f5, 0x178(r1)
    li r0, 0x0
    lfs f4, lbl_80881860
    lfs f3, 0x174(r1)
    lfs f0, 0x170(r1)
    fmuls f5, f5, f4
    fmuls f6, f3, f4
    lfs f3, 0x50(r31)
    fmuls f7, f0, f4
    lfs f4, 0x4c(r31)
    lfs f0, 0x54(r31)
    fadds f3, f3, f6
    fadds f4, f4, f7
    stfs f7, 0x110(r1)
    fadds f0, f0, f5
    stfs f6, 0x114(r1)
    stfs f5, 0x118(r1)
    stfs f4, 0x4c(r31)
    stfs f3, 0x50(r31)
    stfs f0, 0x54(r31)
    stw r0, 0x94(r31)
lbl_fn_801255C8_00000E3C:
    lwz r4, 0xa4(r31)
    addi r3, r1, 0x104
    lfs f3, 0x54(r31)
    lfs f0, 0x530(r4)
    lfs f5, 0x50(r31)
    fsubs f2, f3, f0
    lfs f4, 0x52c(r4)
    lfs f0, 0x528(r4)
    lfs f3, 0x4c(r31)
    fsubs f4, f5, f4
    stfs f2, 0x10c(r1)
    fsubs f0, f3, f0
    stfs f4, 0x108(r1)
    stfs f0, 0x104(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x58(r31), 0, 0
    stfs f2, 0x60(r31)
lbl_fn_801255C8_00000E80:
    lwz r5, 0x0(r31)
    mr r4, r31
    lwz r6, 0x4(r31)
    addi r3, r1, 0x180
    bl fn_80129670
    addi r4, r1, 0x180
    lfs f2, 0x188(r1)
    psq_l f1, 0x0(r4), 0, 0
    li r3, 0x1
    psq_st f1, 0x70(r31), 0, 0
    stfs f2, 0x78(r31)
    psq_l f1, 0xc(r4), 0, 0
    lfs f2, 0x194(r1)
    stfs f2, 0x84(r31)
    psq_st f1, 0x7c(r31), 0, 0
    lfs f0, 0x198(r1)
    stfs f0, 0x88(r31)
    lfs f0, 0x19c(r1)
    stfs f0, 0x8c(r31)
    b lbl_fn_801255C8_00000EDC
lbl_fn_801255C8_00000ED0:
    li r0, 0x1
    stw r0, 0x2c(r31)
    li r3, 0x0
lbl_fn_801255C8_00000EDC:
    addi r11, r1, 0x220
    bl _restgpr_26
    lwz r0, 0x224(r1)
    mtlr r0
    addi r1, r1, 0x220
    blr
}

asm void fn_80126214(void)
{
    nofralloc
    stwu r1, -0x2d0(r1)
    mflr r0
    stw r0, 0x2d4(r1)
    addi r11, r1, 0x2c0
    stfd f31, 0x2c0(r1)
    psq_st f31, 0x2c8(r1), 0, 0
    bl _savegpr_26
    mr r31, r3
    bl fn_80125474
    cmpwi r3, 0x0
    bne lbl_fn_80126214_0000106C
    lwz r3, 0xa4(r31)
    lis r4, lbl_807C7030@ha
    addi r4, r4, lbl_807C7030@l
    li r5, 0x0
    psq_l f1, 0x528(r3), 0, 0
    li r6, 0x0
    lfs f2, 0x530(r3)
    li r7, 0x0
    stfs f2, 0x54(r31)
    psq_st f1, 0x4c(r31), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    stfs f2, 0x60(r31)
    psq_st f1, 0x58(r31), 0, 0
    lwz r4, 0x38(r3)
    rlwinm r0, r4, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80126214_00000F78
    clrlwi r0, r4, 31
    cmplwi r0, 0x1
    beq lbl_fn_80126214_00000F78
    li r7, 0x1
lbl_fn_80126214_00000F78:
    cmpwi r7, 0x0
    beq lbl_fn_80126214_00000F94
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_80126214_00000F94
    li r6, 0x1
lbl_fn_80126214_00000F94:
    cmpwi r6, 0x0
    beq lbl_fn_80126214_00000FC8
    lwz r0, 0x55c(r3)
    li r4, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_80126214_00000FBC
    lwz r0, 0x560(r3)
    cmpwi r0, 0x1c
    bne lbl_fn_80126214_00000FBC
    li r4, 0x1
lbl_fn_80126214_00000FBC:
    cmpwi r4, 0x0
    bne lbl_fn_80126214_00000FC8
    li r5, 0x1
lbl_fn_80126214_00000FC8:
    cmpwi r5, 0x0
    beq lbl_fn_80126214_00000FE0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8016EB48
lbl_fn_80126214_00000FE0:
    li r0, 0x1
    stw r0, 0x2c(r31)
    lwz r3, 0xa4(r31)
    lwz r0, 0x12a4(r3)
    srwi. r0, r0, 31
    bne lbl_fn_80126214_000026A8
    lwz r0, 0x44(r31)
    cmpwi r0, 0x1
    bne lbl_fn_80126214_000026A8
    lwz r4, 0xc(r31)
    cmpwi r4, 0x0
    ble lbl_fn_80126214_000026A8
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80126214_00001024
    lwz r3, 0x10d8(r3)
    b lbl_fn_80126214_0000103C
lbl_fn_80126214_00001024:
    lwz r3, lbl_8087F540
    cmpwi r3, 0x0
    beq lbl_fn_80126214_00001038
    lwz r3, 0x1a6c(r3)
    b lbl_fn_80126214_0000103C
lbl_fn_80126214_00001038:
    li r3, 0x0
lbl_fn_80126214_0000103C:
    cmpwi r3, 0x0
    beq lbl_fn_80126214_000026A8
    subi r0, r4, 0x1
    lwz r3, 0xb0(r3)
    slwi r0, r0, 6
    add r3, r3, r0
    lwz r0, 0x3c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80126214_000026A8
    li r0, 0x0
    stw r0, 0x3c(r3)
    b lbl_fn_80126214_000026A8
lbl_fn_80126214_0000106C:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80126214_00001080
    lwz r30, 0x10d8(r3)
    b lbl_fn_80126214_00001098
lbl_fn_80126214_00001080:
    lwz r3, lbl_8087F540
    cmpwi r3, 0x0
    beq lbl_fn_80126214_00001094
    lwz r30, 0x1a6c(r3)
    b lbl_fn_80126214_00001098
lbl_fn_80126214_00001094:
    li r30, 0x0
lbl_fn_80126214_00001098:
    lwz r6, 0xa4(r31)
    addi r3, r1, 0xd4
    lwz r0, 0x40(r31)
    addi r5, r31, 0x58
    lfs f3, 0x54(r31)
    lfs f0, 0x530(r6)
    cmplwi r0, 0x7
    lfs f5, 0x50(r31)
    fsubs f2, f3, f0
    lfs f4, 0x52c(r6)
    lfs f0, 0x528(r6)
    lfs f3, 0x4c(r31)
    fsubs f4, f5, f4
    stfs f2, 0xdc(r1)
    fsubs f0, f3, f0
    stfs f4, 0xd8(r1)
    stfs f0, 0xd4(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x60(r31)
    bgt lbl_fn_80126214_000025B8
    lis r3, jumptable_8077A678@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_8077A678@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lwz r0, 0x44(r31)
    cmpwi r0, 0x4
    bne lbl_fn_80126214_00001148
    lwz r4, 0x24(r31)
    mr r3, r6
    addi r26, r4, 0x528
    bl fn_80179D44
    lwz r7, 0xa0(r31)
    mr r5, r3
    lfs f1, lbl_80881864
    mr r3, r30
    mr r4, r26
    li r6, 0x0
    li r8, 0x1
    bl fn_803C1560
    stw r3, 0x8(r31)
    b lbl_fn_80126214_0000126C
lbl_fn_80126214_00001148:
    cmpwi r0, 0x5
    bne lbl_fn_80126214_00001180
    mr r3, r6
    bl fn_80179D44
    lwz r7, 0xa0(r31)
    mr r5, r3
    lfs f1, lbl_80881864
    mr r3, r30
    addi r4, r31, 0x30
    li r6, 0x0
    li r8, 0x1
    bl fn_803C1560
    stw r3, 0x8(r31)
    b lbl_fn_80126214_0000126C
lbl_fn_80126214_00001180:
    cmpwi r0, 0x7
    bne lbl_fn_80126214_0000126C
    lwz r5, 0x24(r31)
    addi r29, r1, 0x11c
    lfs f3, lbl_80881858
    addi r3, r1, 0x178
    psq_l f1, 0x528(r5), 0, 0
    li r4, 0x79
    lfs f2, 0x530(r5)
    lfs f0, lbl_8088185C
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x124(r1)
    stfs f3, 0x110(r1)
    stfs f3, 0x114(r1)
    stfs f0, 0x118(r1)
    lfs f1, 0x538(r5)
    bl fn_805F8E70
    addi r4, r1, 0x110
    addi r3, r1, 0x178
    mr r5, r4
    bl fn_805F93C0
    lfs f1, 0x9c(r31)
    addi r3, r1, 0x238
    li r4, 0x79
    bl fn_805F8E70
    addi r4, r1, 0x110
    addi r3, r1, 0x238
    mr r5, r4
    bl fn_805F93C0
    lfs f5, 0x118(r1)
    lfs f4, lbl_80881860
    lfs f3, 0x114(r1)
    lfs f0, 0x110(r1)
    fmuls f5, f5, f4
    fmuls f6, f3, f4
    lfs f3, 0x120(r1)
    fmuls f7, f0, f4
    lfs f4, 0x11c(r1)
    lfs f0, 0x124(r1)
    fadds f3, f3, f6
    fadds f4, f4, f7
    stfs f7, 0xc8(r1)
    fadds f0, f0, f5
    stfs f4, 0x11c(r1)
    stfs f3, 0x120(r1)
    stfs f0, 0x124(r1)
    stfs f6, 0xcc(r1)
    lwz r3, 0xa4(r31)
    stfs f5, 0xd0(r1)
    bl fn_80179D44
    lwz r7, 0xa0(r31)
    mr r5, r3
    lfs f1, lbl_80881864
    mr r3, r30
    mr r4, r29
    li r6, 0x0
    li r8, 0x1
    bl fn_803C1560
    stw r3, 0x8(r31)
lbl_fn_80126214_0000126C:
    addi r3, r31, 0x58
    bl fn_805F9920
    lfs f0, lbl_80881868
    fcmpo cr0, f1, f0
    bge lbl_fn_80126214_00001474
    lwz r3, 0x4(r31)
    li r4, 0x0
    lwz r0, 0x8(r31)
    stw r4, 0x90(r31)
    cmpw r3, r0
    beq lbl_fn_80126214_000012A8
    mr r3, r31
    bl fn_80128CF8
    cmpwi r3, 0x0
    beq lbl_fn_80126214_000012B4
lbl_fn_80126214_000012A8:
    mr r3, r31
    bl fn_80129144
    b lbl_fn_80126214_000025B8
lbl_fn_80126214_000012B4:
    lwz r3, 0x4(r31)
    stw r3, 0x0(r31)
    subi r0, r3, 0x1
    lwz r3, 0x8(r31)
    lwz r5, 0xa4(r30)
    slwi r0, r0, 3
    subi r4, r3, 0x1
    add r3, r5, r0
    bl fn_803CD958
    clrlwi. r5, r3, 16
    stw r5, 0x4(r31)
    ble lbl_fn_80126214_00001418
    lwz r3, lbl_8087F430
    mr r30, r5
    addi r29, r1, 0xbc
    cmpwi r3, 0x0
    beq lbl_fn_80126214_00001300
    lwz r26, 0x10d8(r3)
    b lbl_fn_80126214_00001318
lbl_fn_80126214_00001300:
    lwz r3, lbl_8087F540
    cmpwi r3, 0x0
    beq lbl_fn_80126214_00001314
    lwz r26, 0x1a6c(r3)
    b lbl_fn_80126214_00001318
lbl_fn_80126214_00001314:
    li r26, 0x0
lbl_fn_80126214_00001318:
    lwz r3, 0x48(r31)
    rlwinm r0, r3, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_80126214_0000134C
    subi r0, r5, 0x1
    lwz r3, 0x9c(r26)
    mulli r0, r0, 0x30
    add r3, r3, r0
    psq_l f1, 0x4(r3), 0, 0
    lfs f2, 0xc(r3)
    stfs f2, 0xc4(r1)
    psq_st f1, 0x0(r29), 0, 0
    b lbl_fn_80126214_00001404
lbl_fn_80126214_0000134C:
    rlwinm r0, r3, 0, 27, 27
    cmplwi r0, 0x10
    bne lbl_fn_80126214_000013F8
    lfs f3, lbl_80881858
    addi r3, r31, 0x58
    lfs f0, lbl_8088185C
    addi r4, r1, 0x8
    stfs f3, 0x8(r1)
    addi r5, r1, 0x14
    stfs f0, 0xc(r1)
    stfs f3, 0x10(r1)
    bl fn_805F99B0
    addi r3, r1, 0x14
    bl fn_805F9920
    lfs f0, lbl_80881858
    fcmpu cr0, f0, f1
    bne lbl_fn_80126214_000013AC
    addi r3, r1, 0x8
    lfs f2, 0x10(r1)
    addi r4, r1, 0x14
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x1c(r1)
    b lbl_fn_80126214_000013E0
lbl_fn_80126214_000013AC:
    addi r28, r1, 0x14
    addi r27, r1, 0x20
    psq_l f1, 0x0(r28), 0, 0
    mr r3, r27
    lfs f2, 0x1c(r1)
    mr r4, r27
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0x28(r1)
    bl fn_805F98D0
    psq_l f1, 0x0(r27), 0, 0
    lfs f2, 0x28(r1)
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x1c(r1)
lbl_fn_80126214_000013E0:
    mr r3, r29
    mr r4, r26
    mr r5, r30
    addi r6, r1, 0x14
    bl fn_803C1338
    b lbl_fn_80126214_00001404
lbl_fn_80126214_000013F8:
    mr r3, r29
    mr r4, r26
    bl fn_803C11A4
lbl_fn_80126214_00001404:
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x8(r29)
    stfs f2, 0x54(r31)
    psq_st f1, 0x4c(r31), 0, 0
    b lbl_fn_80126214_0000142C
lbl_fn_80126214_00001418:
    lwz r3, 0xa4(r31)
    psq_l f1, 0x528(r3), 0, 0
    lfs f2, 0x530(r3)
    stfs f2, 0x54(r31)
    psq_st f1, 0x4c(r31), 0, 0
lbl_fn_80126214_0000142C:
    lwz r4, 0xa4(r31)
    addi r3, r1, 0xb0
    lfs f3, 0x54(r31)
    lfs f0, 0x530(r4)
    lfs f5, 0x50(r31)
    fsubs f2, f3, f0
    lfs f4, 0x52c(r4)
    lfs f0, 0x528(r4)
    lfs f3, 0x4c(r31)
    fsubs f4, f5, f4
    stfs f2, 0xb8(r1)
    fsubs f0, f3, f0
    stfs f4, 0xb4(r1)
    stfs f0, 0xb0(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x58(r31), 0, 0
    stfs f2, 0x60(r31)
    b lbl_fn_80126214_000025B8
lbl_fn_80126214_00001474:
    lwz r0, 0x44(r31)
    cmpwi r0, 0x4
    bne lbl_fn_80126214_00001638
    lwz r3, 0xa4(r31)
    lwz r4, 0x24(r31)
    lfs f0, 0x52c(r3)
    lfs f3, 0x52c(r4)
    lfs f5, 0x530(r4)
    fsubs f6, f3, f0
    lfs f4, 0x530(r3)
    lfs f3, 0x528(r4)
    fsubs f4, f5, f4
    lfs f0, 0x528(r3)
    fabs f5, f6
    fsubs f3, f3, f0
    lfs f0, lbl_8088186C
    stfs f6, 0x108(r1)
    frsp f5, f5
    stfs f3, 0x104(r1)
    fcmpo cr0, f5, f0
    stfs f4, 0x10c(r1)
    ble lbl_fn_80126214_000014D4
    lfs f0, lbl_80881858
    stfs f0, 0x108(r1)
lbl_fn_80126214_000014D4:
    addi r3, r1, 0x104
    bl fn_805F9920
    lfs f0, 0x28(r31)
    fmuls f0, f0, f0
    fcmpo cr0, f1, f0
    bge lbl_fn_80126214_000025B8
    lwz r3, 0xa4(r31)
    lis r4, lbl_807C7030@ha
    addi r4, r4, lbl_807C7030@l
    li r5, 0x0
    psq_l f1, 0x528(r3), 0, 0
    li r0, 0x0
    lfs f2, 0x530(r3)
    li r6, 0x0
    stfs f2, 0x54(r31)
    psq_st f1, 0x4c(r31), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    stfs f2, 0x60(r31)
    psq_st f1, 0x58(r31), 0, 0
    lwz r7, 0x38(r3)
    rlwinm r4, r7, 0, 29, 29
    cmplwi r4, 0x4
    beq lbl_fn_80126214_00001544
    clrlwi r4, r7, 31
    cmplwi r4, 0x1
    beq lbl_fn_80126214_00001544
    li r6, 0x1
lbl_fn_80126214_00001544:
    cmpwi r6, 0x0
    beq lbl_fn_80126214_00001560
    lwz r4, 0x7e0(r3)
    rlwinm r4, r4, 0, 26, 26
    cmplwi r4, 0x20
    beq lbl_fn_80126214_00001560
    li r0, 0x1
lbl_fn_80126214_00001560:
    cmpwi r0, 0x0
    beq lbl_fn_80126214_00001594
    lwz r0, 0x55c(r3)
    li r4, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_80126214_00001588
    lwz r0, 0x560(r3)
    cmpwi r0, 0x1c
    bne lbl_fn_80126214_00001588
    li r4, 0x1
lbl_fn_80126214_00001588:
    cmpwi r4, 0x0
    bne lbl_fn_80126214_00001594
    li r5, 0x1
lbl_fn_80126214_00001594:
    cmpwi r5, 0x0
    beq lbl_fn_80126214_000015AC
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8016EB48
lbl_fn_80126214_000015AC:
    li r0, 0x1
    stw r0, 0x2c(r31)
    lwz r3, 0xa4(r31)
    lwz r0, 0x12a4(r3)
    srwi. r0, r0, 31
    bne lbl_fn_80126214_000025B8
    lwz r0, 0x44(r31)
    cmpwi r0, 0x1
    bne lbl_fn_80126214_000025B8
    lwz r4, 0xc(r31)
    cmpwi r4, 0x0
    ble lbl_fn_80126214_000025B8
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80126214_000015F0
    lwz r3, 0x10d8(r3)
    b lbl_fn_80126214_00001608
lbl_fn_80126214_000015F0:
    lwz r3, lbl_8087F540
    cmpwi r3, 0x0
    beq lbl_fn_80126214_00001604
    lwz r3, 0x1a6c(r3)
    b lbl_fn_80126214_00001608
lbl_fn_80126214_00001604:
    li r3, 0x0
lbl_fn_80126214_00001608:
    cmpwi r3, 0x0
    beq lbl_fn_80126214_000025B8
    subi r0, r4, 0x1
    lwz r3, 0xb0(r3)
    slwi r0, r0, 6
    add r3, r3, r0
    lwz r0, 0x3c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80126214_000025B8
    li r0, 0x0
    stw r0, 0x3c(r3)
    b lbl_fn_80126214_000025B8
lbl_fn_80126214_00001638:
    cmpwi r0, 0x5
    bne lbl_fn_80126214_00001698
    lwz r4, 0xa4(r31)
    addi r3, r1, 0xa4
    lfs f0, 0x38(r31)
    lfs f3, 0x530(r4)
    lfs f5, 0x52c(r4)
    fsubs f6, f3, f0
    lfs f4, 0x34(r31)
    lfs f3, 0x528(r4)
    lfs f0, 0x30(r31)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0xa8(r1)
    stfs f0, 0xa4(r1)
    stfs f6, 0xac(r1)
    bl fn_805F9920
    lfs f0, 0x28(r31)
    fmuls f0, f0, f0
    fcmpo cr0, f1, f0
    bge lbl_fn_80126214_000025B8
    mr r3, r31
    bl fn_80129144
    b lbl_fn_80126214_000025B8
lbl_fn_80126214_00001698:
    cmpwi r0, 0x6
    bne lbl_fn_80126214_000025B8
    lwz r4, 0x24(r31)
    addi r3, r1, 0x98
    lwz r5, 0xa4(r31)
    lfs f0, 0x530(r4)
    lfs f3, 0x530(r5)
    lfs f5, 0x52c(r5)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r4)
    lfs f3, 0x528(r5)
    lfs f0, 0x528(r4)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x9c(r1)
    stfs f0, 0x98(r1)
    stfs f6, 0xa0(r1)
    bl fn_805F9920
    lfs f0, 0x28(r31)
    fmuls f0, f0, f0
    fcmpo cr0, f1, f0
    bge lbl_fn_80126214_000025B8
    mr r3, r31
    bl fn_80129144
    b lbl_fn_80126214_000025B8
    lfs f31, 0x5b0(r6)
    mr r3, r5
    bl fn_805F9920
    lfs f3, lbl_80881870
    fmuls f0, f3, f31
    fmuls f0, f0, f31
    fmuls f0, f3, f0
    fcmpo cr0, f1, f0
    blt lbl_fn_80126214_00001768
    lfs f3, 0x5c(r31)
    lfs f0, lbl_80881874
    fabs f3, f3
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80126214_000025B8
    lwz r3, 0xa4(r31)
    lfs f0, 0x60(r31)
    lfs f6, 0x5b0(r3)
    lfs f3, lbl_80881878
    fmuls f5, f0, f0
    lfs f4, 0x58(r31)
    fmuls f0, f3, f6
    fmadds f4, f4, f4, f5
    fmuls f0, f0, f6
    fmuls f0, f3, f0
    fcmpo cr0, f4, f0
    bge lbl_fn_80126214_000025B8
lbl_fn_80126214_00001768:
    lwz r3, lbl_8087F430
    addi r4, r1, 0x268
    lwz r5, 0xa4(r31)
    li r6, 0x0
    lwz r7, 0xc(r31)
    bl fn_8036DAF4
    cmpwi r3, 0x0
    beq lbl_fn_80126214_000025B8
    lwz r3, 0xa4(r31)
    addi r4, r1, 0x268
    li r5, 0x0
    bl fn_80153698
    lwz r0, 0x1c(r31)
    cmpwi r0, 0x3
    bne lbl_fn_80126214_000018F0
    lwz r3, 0xa4(r31)
    lis r4, lbl_807C7030@ha
    addi r4, r4, lbl_807C7030@l
    li r5, 0x0
    psq_l f1, 0x528(r3), 0, 0
    li r0, 0x0
    lfs f2, 0x530(r3)
    li r6, 0x0
    stfs f2, 0x54(r31)
    psq_st f1, 0x4c(r31), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    stfs f2, 0x60(r31)
    psq_st f1, 0x58(r31), 0, 0
    lwz r7, 0x38(r3)
    rlwinm r4, r7, 0, 29, 29
    cmplwi r4, 0x4
    beq lbl_fn_80126214_000017FC
    clrlwi r4, r7, 31
    cmplwi r4, 0x1
    beq lbl_fn_80126214_000017FC
    li r6, 0x1
lbl_fn_80126214_000017FC:
    cmpwi r6, 0x0
    beq lbl_fn_80126214_00001818
    lwz r4, 0x7e0(r3)
    rlwinm r4, r4, 0, 26, 26
    cmplwi r4, 0x20
    beq lbl_fn_80126214_00001818
    li r0, 0x1
lbl_fn_80126214_00001818:
    cmpwi r0, 0x0
    beq lbl_fn_80126214_0000184C
    lwz r0, 0x55c(r3)
    li r4, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_80126214_00001840
    lwz r0, 0x560(r3)
    cmpwi r0, 0x1c
    bne lbl_fn_80126214_00001840
    li r4, 0x1
lbl_fn_80126214_00001840:
    cmpwi r4, 0x0
    bne lbl_fn_80126214_0000184C
    li r5, 0x1
lbl_fn_80126214_0000184C:
    cmpwi r5, 0x0
    beq lbl_fn_80126214_00001864
    li r4, 0x1
    li r5, 0x0
    li r6, 0x0
    bl fn_8016EB48
lbl_fn_80126214_00001864:
    li r0, 0x1
    stw r0, 0x2c(r31)
    lwz r3, 0xa4(r31)
    lwz r0, 0x12a4(r3)
    srwi. r0, r0, 31
    bne lbl_fn_80126214_000025B8
    lwz r0, 0x44(r31)
    cmpwi r0, 0x1
    bne lbl_fn_80126214_000025B8
    lwz r4, 0xc(r31)
    cmpwi r4, 0x0
    ble lbl_fn_80126214_000025B8
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80126214_000018A8
    lwz r3, 0x10d8(r3)
    b lbl_fn_80126214_000018C0
lbl_fn_80126214_000018A8:
    lwz r3, lbl_8087F540
    cmpwi r3, 0x0
    beq lbl_fn_80126214_000018BC
    lwz r3, 0x1a6c(r3)
    b lbl_fn_80126214_000018C0
lbl_fn_80126214_000018BC:
    li r3, 0x0
lbl_fn_80126214_000018C0:
    cmpwi r3, 0x0
    beq lbl_fn_80126214_000025B8
    subi r0, r4, 0x1
    lwz r3, 0xb0(r3)
    slwi r0, r0, 6
    add r3, r3, r0
    lwz r0, 0x3c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80126214_000025B8
    li r0, 0x0
    stw r0, 0x3c(r3)
    b lbl_fn_80126214_000025B8
lbl_fn_80126214_000018F0:
    cmpwi r0, 0x1
    bne lbl_fn_80126214_0000190C
    lwz r3, 0xa4(r31)
    lwz r0, 0x12a4(r3)
    oris r0, r0, 0x2000
    stw r0, 0x12a4(r3)
    b lbl_fn_80126214_0000191C
lbl_fn_80126214_0000190C:
    lwz r3, 0xa4(r31)
    lwz r0, 0x12a4(r3)
    rlwinm r0, r0, 0, 3, 1
    stw r0, 0x12a4(r3)
lbl_fn_80126214_0000191C:
    lwz r3, 0xc(r31)
    lwz r0, 0x1c(r31)
    subi r3, r3, 0x1
    lwz r4, 0xb0(r30)
    slwi r3, r3, 6
    cmpwi r0, 0x1
    add r3, r4, r3
    psq_l f1, 0x4(r3), 0, 0
    lfs f2, 0xc(r3)
    stfs f2, 0x54(r31)
    psq_st f1, 0x4c(r31), 0, 0
    bne lbl_fn_80126214_00001954
    addi r3, r1, 0x268
    b lbl_fn_80126214_0000197C
lbl_fn_80126214_00001954:
    lfs f4, 0x270(r1)
    addi r3, r1, 0x8c
    lfs f3, 0x26c(r1)
    lfs f0, 0x268(r1)
    fneg f4, f4
    fneg f3, f3
    fneg f0, f0
    stfs f4, 0x94(r1)
    stfs f0, 0x8c(r1)
    stfs f3, 0x90(r1)
lbl_fn_80126214_0000197C:
    psq_l f1, 0x0(r3), 0, 0
    li r0, 0x2
    lfs f2, 0x8(r3)
    stfs f2, 0x60(r31)
    psq_st f1, 0x58(r31), 0, 0
    stw r0, 0x40(r31)
    b lbl_fn_80126214_000025B8
    lwz r4, 0x90(r31)
    mr r3, r5
    addi r0, r4, 0x1
    stw r0, 0x90(r31)
    bl fn_805F9920
    lfs f0, lbl_80881870
    fcmpo cr0, f1, f0
    bge lbl_fn_80126214_000019C4
    lwz r0, 0x90(r31)
    cmpwi r0, 0x1
    bgt lbl_fn_80126214_000019D0
lbl_fn_80126214_000019C4:
    lwz r0, 0x90(r31)
    cmpwi r0, 0x5a
    ble lbl_fn_80126214_000025B8
lbl_fn_80126214_000019D0:
    lwz r3, 0xa4(r31)
    lis r4, lbl_807C7030@ha
    addi r4, r4, lbl_807C7030@l
    li r5, 0x0
    psq_l f1, 0x528(r3), 0, 0
    li r0, 0x0
    lfs f2, 0x530(r3)
    li r6, 0x0
    stfs f2, 0x54(r31)
    psq_st f1, 0x4c(r31), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    stfs f2, 0x60(r31)
    psq_st f1, 0x58(r31), 0, 0
    lwz r7, 0x38(r3)
    rlwinm r4, r7, 0, 29, 29
    cmplwi r4, 0x4
    beq lbl_fn_80126214_00001A28
    clrlwi r4, r7, 31
    cmplwi r4, 0x1
    beq lbl_fn_80126214_00001A28
    li r6, 0x1
lbl_fn_80126214_00001A28:
    cmpwi r6, 0x0
    beq lbl_fn_80126214_00001A44
    lwz r4, 0x7e0(r3)
    rlwinm r4, r4, 0, 26, 26
    cmplwi r4, 0x20
    beq lbl_fn_80126214_00001A44
    li r0, 0x1
lbl_fn_80126214_00001A44:
    cmpwi r0, 0x0
    beq lbl_fn_80126214_00001A78
    lwz r0, 0x55c(r3)
    li r4, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_80126214_00001A6C
    lwz r0, 0x560(r3)
    cmpwi r0, 0x1c
    bne lbl_fn_80126214_00001A6C
    li r4, 0x1
lbl_fn_80126214_00001A6C:
    cmpwi r4, 0x0
    bne lbl_fn_80126214_00001A78
    li r5, 0x1
lbl_fn_80126214_00001A78:
    cmpwi r5, 0x0
    beq lbl_fn_80126214_00001A90
    li r4, 0x1
    li r5, 0x0
    li r6, 0x0
    bl fn_8016EB48
lbl_fn_80126214_00001A90:
    li r0, 0x1
    stw r0, 0x2c(r31)
    lwz r3, 0xa4(r31)
    lwz r0, 0x12a4(r3)
    srwi. r0, r0, 31
    bne lbl_fn_80126214_000025B8
    lwz r0, 0x44(r31)
    cmpwi r0, 0x1
    bne lbl_fn_80126214_000025B8
    lwz r4, 0xc(r31)
    cmpwi r4, 0x0
    ble lbl_fn_80126214_000025B8
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80126214_00001AD4
    lwz r3, 0x10d8(r3)
    b lbl_fn_80126214_00001AEC
lbl_fn_80126214_00001AD4:
    lwz r3, lbl_8087F540
    cmpwi r3, 0x0
    beq lbl_fn_80126214_00001AE8
    lwz r3, 0x1a6c(r3)
    b lbl_fn_80126214_00001AEC
lbl_fn_80126214_00001AE8:
    li r3, 0x0
lbl_fn_80126214_00001AEC:
    cmpwi r3, 0x0
    beq lbl_fn_80126214_000025B8
    subi r0, r4, 0x1
    lwz r3, 0xb0(r3)
    slwi r0, r0, 6
    add r3, r3, r0
    lwz r0, 0x3c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80126214_000025B8
    li r0, 0x0
    stw r0, 0x3c(r3)
    b lbl_fn_80126214_000025B8
    mr r3, r5
    bl fn_805F9920
    lfs f0, 0x28(r31)
    fmuls f0, f0, f0
    fcmpo cr0, f1, f0
    bge lbl_fn_80126214_000025B8
    lwz r0, 0x78(r30)
    li r5, 0x0
    lwz r4, 0x20(r31)
    li r6, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80126214_00001B78
lbl_fn_80126214_00001B50:
    lwz r3, 0x7c(r30)
    lwzx r0, r3, r6
    cmpw r4, r0
    bne lbl_fn_80126214_00001B6C
    mulli r0, r5, 0x28
    add r26, r3, r0
    b lbl_fn_80126214_00001B7C
lbl_fn_80126214_00001B6C:
    addi r6, r6, 0x28
    addi r5, r5, 0x1
    bdnz lbl_fn_80126214_00001B50
lbl_fn_80126214_00001B78:
    li r26, 0x0
lbl_fn_80126214_00001B7C:
    lwz r4, 0xa4(r31)
    lis r3, lbl_807371F8@ha
    lfs f3, 0x14(r26)
    lfs f0, 0x538(r4)
    lfd f2, lbl_807371F8@l(r3)
    fsubs f1, f3, f0
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_8088187C
    fcmpo cr0, f3, f0
    ble lbl_fn_80126214_00001BB0
    lfs f0, lbl_80881880
    fsubs f3, f3, f0
lbl_fn_80126214_00001BB0:
    lfs f0, lbl_80881884
    fcmpo cr0, f3, f0
    bge lbl_fn_80126214_00001BC4
    lfs f0, lbl_80881880
    fadds f3, f3, f0
lbl_fn_80126214_00001BC4:
    lwz r0, 0x48(r31)
    rlwinm r0, r0, 0, 28, 28
    cmplwi r0, 0x8
    beq lbl_fn_80126214_00001BE8
    fabs f3, f3
    lfs f0, lbl_80881888
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80126214_00001D34
lbl_fn_80126214_00001BE8:
    lwz r3, 0xa4(r31)
    lis r4, lbl_807C7030@ha
    addi r4, r4, lbl_807C7030@l
    li r5, 0x0
    psq_l f1, 0x528(r3), 0, 0
    li r0, 0x0
    lfs f2, 0x530(r3)
    li r6, 0x0
    stfs f2, 0x54(r31)
    psq_st f1, 0x4c(r31), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    stfs f2, 0x60(r31)
    psq_st f1, 0x58(r31), 0, 0
    lwz r7, 0x38(r3)
    rlwinm r4, r7, 0, 29, 29
    cmplwi r4, 0x4
    beq lbl_fn_80126214_00001C40
    clrlwi r4, r7, 31
    cmplwi r4, 0x1
    beq lbl_fn_80126214_00001C40
    li r6, 0x1
lbl_fn_80126214_00001C40:
    cmpwi r6, 0x0
    beq lbl_fn_80126214_00001C5C
    lwz r4, 0x7e0(r3)
    rlwinm r4, r4, 0, 26, 26
    cmplwi r4, 0x20
    beq lbl_fn_80126214_00001C5C
    li r0, 0x1
lbl_fn_80126214_00001C5C:
    cmpwi r0, 0x0
    beq lbl_fn_80126214_00001C90
    lwz r0, 0x55c(r3)
    li r4, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_80126214_00001C84
    lwz r0, 0x560(r3)
    cmpwi r0, 0x1c
    bne lbl_fn_80126214_00001C84
    li r4, 0x1
lbl_fn_80126214_00001C84:
    cmpwi r4, 0x0
    bne lbl_fn_80126214_00001C90
    li r5, 0x1
lbl_fn_80126214_00001C90:
    cmpwi r5, 0x0
    beq lbl_fn_80126214_00001CA8
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8016EB48
lbl_fn_80126214_00001CA8:
    li r0, 0x1
    stw r0, 0x2c(r31)
    lwz r3, 0xa4(r31)
    lwz r0, 0x12a4(r3)
    srwi. r0, r0, 31
    bne lbl_fn_80126214_000025B8
    lwz r0, 0x44(r31)
    cmpwi r0, 0x1
    bne lbl_fn_80126214_000025B8
    lwz r4, 0xc(r31)
    cmpwi r4, 0x0
    ble lbl_fn_80126214_000025B8
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80126214_00001CEC
    lwz r3, 0x10d8(r3)
    b lbl_fn_80126214_00001D04
lbl_fn_80126214_00001CEC:
    lwz r3, lbl_8087F540
    cmpwi r3, 0x0
    beq lbl_fn_80126214_00001D00
    lwz r3, 0x1a6c(r3)
    b lbl_fn_80126214_00001D04
lbl_fn_80126214_00001D00:
    li r3, 0x0
lbl_fn_80126214_00001D04:
    cmpwi r3, 0x0
    beq lbl_fn_80126214_000025B8
    subi r0, r4, 0x1
    lwz r3, 0xb0(r3)
    slwi r0, r0, 6
    add r3, r3, r0
    lwz r0, 0x3c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80126214_000025B8
    li r0, 0x0
    stw r0, 0x3c(r3)
    b lbl_fn_80126214_000025B8
lbl_fn_80126214_00001D34:
    lwz r5, 0xa4(r31)
    addi r3, r1, 0x208
    lfs f3, lbl_80881858
    li r4, 0x79
    psq_l f1, 0x528(r5), 0, 0
    lfs f2, 0x530(r5)
    stfs f2, 0x54(r31)
    lfs f0, lbl_8088188C
    psq_st f1, 0x4c(r31), 0, 0
    stfs f3, 0xf8(r1)
    stfs f3, 0xfc(r1)
    stfs f0, 0x100(r1)
    lfs f1, 0x14(r26)
    bl fn_805F8E70
    addi r4, r1, 0xf8
    addi r3, r1, 0x208
    mr r5, r4
    bl fn_805F93C0
    lfs f3, 0x4c(r31)
    addi r3, r1, 0x80
    lfs f0, 0xf8(r1)
    lfs f4, 0x50(r31)
    fadds f6, f3, f0
    lfs f3, 0x54(r31)
    lwz r4, 0xa4(r31)
    stfs f6, 0x4c(r31)
    lfs f0, 0xfc(r1)
    fadds f5, f4, f0
    stfs f5, 0x50(r31)
    lfs f0, 0x100(r1)
    fadds f4, f3, f0
    stfs f4, 0x54(r31)
    lfs f0, 0x530(r4)
    lfs f3, 0x52c(r4)
    fsubs f2, f4, f0
    lfs f0, 0x528(r4)
    fsubs f3, f5, f3
    fsubs f0, f6, f0
    stfs f2, 0x88(r1)
    stfs f0, 0x80(r1)
    stfs f3, 0x84(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x58(r31), 0, 0
    stfs f2, 0x60(r31)
    b lbl_fn_80126214_000025B8
    mr r3, r5
    bl fn_805F9920
    lfs f0, 0x28(r31)
    fmuls f4, f0, f0
    fcmpo cr0, f1, f4
    blt lbl_fn_80126214_00001E30
    lfs f3, 0x5c(r31)
    lfs f0, lbl_8088186C
    fabs f3, f3
    frsp f3, f3
    fcmpo cr0, f3, f0
    ble lbl_fn_80126214_00001F7C
    lfs f3, 0x60(r31)
    lfs f0, 0x58(r31)
    fmuls f3, f3, f3
    fmadds f0, f0, f0, f3
    fcmpo cr0, f0, f4
    bge lbl_fn_80126214_00001F7C
lbl_fn_80126214_00001E30:
    lwz r3, 0xa4(r31)
    lis r4, lbl_807C7030@ha
    addi r4, r4, lbl_807C7030@l
    li r5, 0x0
    psq_l f1, 0x528(r3), 0, 0
    li r0, 0x0
    lfs f2, 0x530(r3)
    li r6, 0x0
    stfs f2, 0x54(r31)
    psq_st f1, 0x4c(r31), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    stfs f2, 0x60(r31)
    psq_st f1, 0x58(r31), 0, 0
    lwz r7, 0x38(r3)
    rlwinm r4, r7, 0, 29, 29
    cmplwi r4, 0x4
    beq lbl_fn_80126214_00001E88
    clrlwi r4, r7, 31
    cmplwi r4, 0x1
    beq lbl_fn_80126214_00001E88
    li r6, 0x1
lbl_fn_80126214_00001E88:
    cmpwi r6, 0x0
    beq lbl_fn_80126214_00001EA4
    lwz r4, 0x7e0(r3)
    rlwinm r4, r4, 0, 26, 26
    cmplwi r4, 0x20
    beq lbl_fn_80126214_00001EA4
    li r0, 0x1
lbl_fn_80126214_00001EA4:
    cmpwi r0, 0x0
    beq lbl_fn_80126214_00001ED8
    lwz r0, 0x55c(r3)
    li r4, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_80126214_00001ECC
    lwz r0, 0x560(r3)
    cmpwi r0, 0x1c
    bne lbl_fn_80126214_00001ECC
    li r4, 0x1
lbl_fn_80126214_00001ECC:
    cmpwi r4, 0x0
    bne lbl_fn_80126214_00001ED8
    li r5, 0x1
lbl_fn_80126214_00001ED8:
    cmpwi r5, 0x0
    beq lbl_fn_80126214_00001EF0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8016EB48
lbl_fn_80126214_00001EF0:
    li r0, 0x1
    stw r0, 0x2c(r31)
    lwz r3, 0xa4(r31)
    lwz r0, 0x12a4(r3)
    srwi. r0, r0, 31
    bne lbl_fn_80126214_000025B8
    lwz r0, 0x44(r31)
    cmpwi r0, 0x1
    bne lbl_fn_80126214_000025B8
    lwz r4, 0xc(r31)
    cmpwi r4, 0x0
    ble lbl_fn_80126214_000025B8
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80126214_00001F34
    lwz r3, 0x10d8(r3)
    b lbl_fn_80126214_00001F4C
lbl_fn_80126214_00001F34:
    lwz r3, lbl_8087F540
    cmpwi r3, 0x0
    beq lbl_fn_80126214_00001F48
    lwz r3, 0x1a6c(r3)
    b lbl_fn_80126214_00001F4C
lbl_fn_80126214_00001F48:
    li r3, 0x0
lbl_fn_80126214_00001F4C:
    cmpwi r3, 0x0
    beq lbl_fn_80126214_000025B8
    subi r0, r4, 0x1
    lwz r3, 0xb0(r3)
    slwi r0, r0, 6
    add r3, r3, r0
    lwz r0, 0x3c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80126214_000025B8
    li r0, 0x0
    stw r0, 0x3c(r3)
    b lbl_fn_80126214_000025B8
lbl_fn_80126214_00001F7C:
    lwz r4, 0x24(r31)
    addi r3, r1, 0x74
    lwz r5, 0xa4(r31)
    psq_l f1, 0x528(r4), 0, 0
    lfs f2, 0x530(r4)
    stfs f2, 0x54(r31)
    psq_st f1, 0x4c(r31), 0, 0
    lfs f0, 0x530(r5)
    lfs f5, 0x50(r31)
    fsubs f2, f2, f0
    lfs f4, 0x52c(r5)
    lfs f0, 0x528(r5)
    lfs f3, 0x4c(r31)
    fsubs f4, f5, f4
    stfs f2, 0x7c(r1)
    fsubs f0, f3, f0
    stfs f4, 0x78(r1)
    stfs f0, 0x74(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x58(r31), 0, 0
    stfs f2, 0x60(r31)
    b lbl_fn_80126214_000025B8
    mr r3, r5
    bl fn_805F9920
    lfs f0, 0x28(r31)
    fmuls f0, f0, f0
    fcmpo cr0, f1, f0
    bge lbl_fn_80126214_00002258
    lwz r4, 0xa4(r31)
    lis r3, lbl_807371F8@ha
    lfs f3, 0x3c(r31)
    lfs f0, 0x538(r4)
    lfd f2, lbl_807371F8@l(r3)
    fsubs f1, f3, f0
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_8088187C
    fcmpo cr0, f3, f0
    ble lbl_fn_80126214_00002020
    lfs f0, lbl_80881880
    fsubs f3, f3, f0
lbl_fn_80126214_00002020:
    lfs f0, lbl_80881884
    fcmpo cr0, f3, f0
    bge lbl_fn_80126214_00002034
    lfs f0, lbl_80881880
    fadds f3, f3, f0
lbl_fn_80126214_00002034:
    lwz r0, 0x48(r31)
    rlwinm r0, r0, 0, 28, 28
    cmplwi r0, 0x8
    beq lbl_fn_80126214_00002058
    fabs f3, f3
    lfs f0, lbl_80881888
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80126214_000021A4
lbl_fn_80126214_00002058:
    lwz r3, 0xa4(r31)
    lis r4, lbl_807C7030@ha
    addi r4, r4, lbl_807C7030@l
    li r5, 0x0
    psq_l f1, 0x528(r3), 0, 0
    li r0, 0x0
    lfs f2, 0x530(r3)
    li r6, 0x0
    stfs f2, 0x54(r31)
    psq_st f1, 0x4c(r31), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    stfs f2, 0x60(r31)
    psq_st f1, 0x58(r31), 0, 0
    lwz r7, 0x38(r3)
    rlwinm r4, r7, 0, 29, 29
    cmplwi r4, 0x4
    beq lbl_fn_80126214_000020B0
    clrlwi r4, r7, 31
    cmplwi r4, 0x1
    beq lbl_fn_80126214_000020B0
    li r6, 0x1
lbl_fn_80126214_000020B0:
    cmpwi r6, 0x0
    beq lbl_fn_80126214_000020CC
    lwz r4, 0x7e0(r3)
    rlwinm r4, r4, 0, 26, 26
    cmplwi r4, 0x20
    beq lbl_fn_80126214_000020CC
    li r0, 0x1
lbl_fn_80126214_000020CC:
    cmpwi r0, 0x0
    beq lbl_fn_80126214_00002100
    lwz r0, 0x55c(r3)
    li r4, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_80126214_000020F4
    lwz r0, 0x560(r3)
    cmpwi r0, 0x1c
    bne lbl_fn_80126214_000020F4
    li r4, 0x1
lbl_fn_80126214_000020F4:
    cmpwi r4, 0x0
    bne lbl_fn_80126214_00002100
    li r5, 0x1
lbl_fn_80126214_00002100:
    cmpwi r5, 0x0
    beq lbl_fn_80126214_00002118
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8016EB48
lbl_fn_80126214_00002118:
    li r0, 0x1
    stw r0, 0x2c(r31)
    lwz r3, 0xa4(r31)
    lwz r0, 0x12a4(r3)
    srwi. r0, r0, 31
    bne lbl_fn_80126214_000025B8
    lwz r0, 0x44(r31)
    cmpwi r0, 0x1
    bne lbl_fn_80126214_000025B8
    lwz r4, 0xc(r31)
    cmpwi r4, 0x0
    ble lbl_fn_80126214_000025B8
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80126214_0000215C
    lwz r3, 0x10d8(r3)
    b lbl_fn_80126214_00002174
lbl_fn_80126214_0000215C:
    lwz r3, lbl_8087F540
    cmpwi r3, 0x0
    beq lbl_fn_80126214_00002170
    lwz r3, 0x1a6c(r3)
    b lbl_fn_80126214_00002174
lbl_fn_80126214_00002170:
    li r3, 0x0
lbl_fn_80126214_00002174:
    cmpwi r3, 0x0
    beq lbl_fn_80126214_000025B8
    subi r0, r4, 0x1
    lwz r3, 0xb0(r3)
    slwi r0, r0, 6
    add r3, r3, r0
    lwz r0, 0x3c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80126214_000025B8
    li r0, 0x0
    stw r0, 0x3c(r3)
    b lbl_fn_80126214_000025B8
lbl_fn_80126214_000021A4:
    lwz r5, 0xa4(r31)
    addi r3, r1, 0x1d8
    lfs f3, lbl_80881858
    li r4, 0x79
    psq_l f1, 0x528(r5), 0, 0
    lfs f2, 0x530(r5)
    stfs f2, 0x54(r31)
    lfs f0, lbl_8088188C
    psq_st f1, 0x4c(r31), 0, 0
    stfs f3, 0xec(r1)
    stfs f3, 0xf0(r1)
    stfs f0, 0xf4(r1)
    lfs f1, 0x3c(r31)
    bl fn_805F8E70
    addi r4, r1, 0xec
    addi r3, r1, 0x1d8
    mr r5, r4
    bl fn_805F93C0
    lfs f3, 0x4c(r31)
    addi r3, r1, 0x68
    lfs f0, 0xec(r1)
    lfs f4, 0x50(r31)
    fadds f6, f3, f0
    lfs f3, 0x54(r31)
    lwz r4, 0xa4(r31)
    stfs f6, 0x4c(r31)
    lfs f0, 0xf0(r1)
    fadds f5, f4, f0
    stfs f5, 0x50(r31)
    lfs f0, 0xf4(r1)
    fadds f4, f3, f0
    stfs f4, 0x54(r31)
    lfs f0, 0x530(r4)
    lfs f3, 0x52c(r4)
    fsubs f2, f4, f0
    lfs f0, 0x528(r4)
    fsubs f3, f5, f3
    fsubs f0, f6, f0
    stfs f2, 0x70(r1)
    stfs f0, 0x68(r1)
    stfs f3, 0x6c(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x58(r31), 0, 0
    stfs f2, 0x60(r31)
    b lbl_fn_80126214_000025B8
lbl_fn_80126214_00002258:
    psq_l f1, 0x30(r31), 0, 0
    addi r3, r1, 0x5c
    psq_st f1, 0x4c(r31), 0, 0
    lfs f2, 0x38(r31)
    stfs f2, 0x54(r31)
    lwz r4, 0xa4(r31)
    lfs f5, 0x50(r31)
    lfs f0, 0x530(r4)
    lfs f4, 0x52c(r4)
    fsubs f2, f2, f0
    lfs f0, 0x528(r4)
    lfs f3, 0x4c(r31)
    fsubs f4, f5, f4
    stfs f2, 0x64(r1)
    fsubs f0, f3, f0
    stfs f4, 0x60(r1)
    stfs f0, 0x5c(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x58(r31), 0, 0
    stfs f2, 0x60(r31)
    b lbl_fn_80126214_000025B8
    lis r4, lbl_807C7030@ha
    lwz r7, 0x24(r31)
    addi r4, r4, lbl_807C7030@l
    addi r3, r1, 0x50
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    stfs f2, 0x8(r5)
    psq_st f1, 0x0(r5), 0, 0
    lfs f3, 0x530(r6)
    lfs f0, 0x530(r7)
    lfs f5, 0x52c(r6)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r7)
    lfs f3, 0x528(r6)
    lfs f0, 0x528(r7)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x54(r1)
    stfs f0, 0x50(r1)
    stfs f6, 0x58(r1)
    bl fn_805F9920
    lfs f0, 0x28(r31)
    lfs f3, lbl_80881890
    fmuls f0, f0, f0
    fmuls f0, f3, f0
    fmuls f0, f3, f0
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_80126214_000025B8
    lwz r4, 0x24(r31)
    lwz r3, 0xa4(r31)
    addi r26, r4, 0x528
    bl fn_80179D44
    lwz r7, 0xa0(r31)
    mr r5, r3
    lfs f1, lbl_80881864
    mr r3, r30
    mr r4, r26
    li r6, 0x0
    li r8, 0x1
    bl fn_803C1560
    lwz r0, 0x8(r31)
    cmpw r3, r0
    beq lbl_fn_80126214_000025B8
    mr r3, r31
    bl fn_80128090
    b lbl_fn_80126214_000025B8
    mr r3, r5
    bl fn_805F9920
    lfs f0, 0x28(r31)
    fmuls f0, f0, f0
    fcmpo cr0, f1, f0
    bge lbl_fn_80126214_000024CC
    lwz r3, 0xa4(r31)
    lis r4, lbl_807C7030@ha
    addi r4, r4, lbl_807C7030@l
    li r5, 0x0
    psq_l f1, 0x528(r3), 0, 0
    li r0, 0x0
    lfs f2, 0x530(r3)
    li r6, 0x0
    stfs f2, 0x54(r31)
    psq_st f1, 0x4c(r31), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    stfs f2, 0x60(r31)
    psq_st f1, 0x58(r31), 0, 0
    lwz r7, 0x38(r3)
    rlwinm r4, r7, 0, 29, 29
    cmplwi r4, 0x4
    beq lbl_fn_80126214_000023D8
    clrlwi r4, r7, 31
    cmplwi r4, 0x1
    beq lbl_fn_80126214_000023D8
    li r6, 0x1
lbl_fn_80126214_000023D8:
    cmpwi r6, 0x0
    beq lbl_fn_80126214_000023F4
    lwz r4, 0x7e0(r3)
    rlwinm r4, r4, 0, 26, 26
    cmplwi r4, 0x20
    beq lbl_fn_80126214_000023F4
    li r0, 0x1
lbl_fn_80126214_000023F4:
    cmpwi r0, 0x0
    beq lbl_fn_80126214_00002428
    lwz r0, 0x55c(r3)
    li r4, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_80126214_0000241C
    lwz r0, 0x560(r3)
    cmpwi r0, 0x1c
    bne lbl_fn_80126214_0000241C
    li r4, 0x1
lbl_fn_80126214_0000241C:
    cmpwi r4, 0x0
    bne lbl_fn_80126214_00002428
    li r5, 0x1
lbl_fn_80126214_00002428:
    cmpwi r5, 0x0
    beq lbl_fn_80126214_00002440
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8016EB48
lbl_fn_80126214_00002440:
    li r0, 0x1
    stw r0, 0x2c(r31)
    lwz r3, 0xa4(r31)
    lwz r0, 0x12a4(r3)
    srwi. r0, r0, 31
    bne lbl_fn_80126214_000025B8
    lwz r0, 0x44(r31)
    cmpwi r0, 0x1
    bne lbl_fn_80126214_000025B8
    lwz r4, 0xc(r31)
    cmpwi r4, 0x0
    ble lbl_fn_80126214_000025B8
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80126214_00002484
    lwz r3, 0x10d8(r3)
    b lbl_fn_80126214_0000249C
lbl_fn_80126214_00002484:
    lwz r3, lbl_8087F540
    cmpwi r3, 0x0
    beq lbl_fn_80126214_00002498
    lwz r3, 0x1a6c(r3)
    b lbl_fn_80126214_0000249C
lbl_fn_80126214_00002498:
    li r3, 0x0
lbl_fn_80126214_0000249C:
    cmpwi r3, 0x0
    beq lbl_fn_80126214_000025B8
    subi r0, r4, 0x1
    lwz r3, 0xb0(r3)
    slwi r0, r0, 6
    add r3, r3, r0
    lwz r0, 0x3c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80126214_000025B8
    li r0, 0x0
    stw r0, 0x3c(r3)
    b lbl_fn_80126214_000025B8
lbl_fn_80126214_000024CC:
    lwz r5, 0x24(r31)
    addi r3, r1, 0x148
    lfs f3, lbl_80881858
    li r4, 0x79
    psq_l f1, 0x528(r5), 0, 0
    lfs f2, 0x530(r5)
    stfs f2, 0x54(r31)
    lfs f0, lbl_8088185C
    psq_st f1, 0x4c(r31), 0, 0
    stfs f3, 0xe0(r1)
    stfs f3, 0xe4(r1)
    stfs f0, 0xe8(r1)
    lfs f1, 0x538(r5)
    bl fn_805F8E70
    addi r4, r1, 0xe0
    addi r3, r1, 0x148
    mr r5, r4
    bl fn_805F93C0
    lfs f1, 0x9c(r31)
    addi r3, r1, 0x1a8
    li r4, 0x79
    bl fn_805F8E70
    addi r4, r1, 0xe0
    addi r3, r1, 0x1a8
    mr r5, r4
    bl fn_805F93C0
    lfs f5, 0xe8(r1)
    addi r3, r1, 0x38
    lfs f4, lbl_80881860
    lfs f3, 0xe4(r1)
    lfs f0, 0xe0(r1)
    fmuls f7, f5, f4
    fmuls f8, f3, f4
    lfs f3, 0x50(r31)
    fmuls f9, f0, f4
    lfs f4, 0x4c(r31)
    lfs f0, 0x54(r31)
    fadds f5, f3, f8
    fadds f6, f4, f9
    lwz r4, 0xa4(r31)
    fadds f4, f0, f7
    stfs f5, 0x50(r31)
    stfs f6, 0x4c(r31)
    stfs f4, 0x54(r31)
    lfs f0, 0x530(r4)
    lfs f3, 0x52c(r4)
    fsubs f2, f4, f0
    lfs f0, 0x528(r4)
    fsubs f3, f5, f3
    stfs f9, 0x44(r1)
    fsubs f0, f6, f0
    stfs f3, 0x3c(r1)
    stfs f0, 0x38(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f8, 0x48(r1)
    stfs f7, 0x4c(r1)
    stfs f2, 0x40(r1)
    psq_st f1, 0x58(r31), 0, 0
    stfs f2, 0x60(r31)
lbl_fn_80126214_000025B8:
    lwz r5, 0x0(r31)
    mr r4, r31
    lwz r6, 0x4(r31)
    addi r3, r1, 0x128
    bl fn_80129670
    addi r3, r1, 0x128
    lwz r0, 0x48(r31)
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x130(r1)
    rlwinm r0, r0, 0, 26, 26
    stfs f2, 0x78(r31)
    cmplwi r0, 0x20
    psq_st f1, 0x70(r31), 0, 0
    psq_l f1, 0xc(r3), 0, 0
    lfs f2, 0x13c(r1)
    stfs f2, 0x84(r31)
    psq_st f1, 0x7c(r31), 0, 0
    lfs f0, 0x140(r1)
    stfs f0, 0x88(r31)
    lfs f0, 0x144(r1)
    stfs f0, 0x8c(r31)
    beq lbl_fn_80126214_00002694
    lwz r4, 0xa4(r31)
    addi r3, r1, 0x2c
    lfs f3, 0x6c(r31)
    lfs f0, 0x530(r4)
    lfs f5, 0x68(r31)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r4)
    lfs f3, 0x64(r31)
    lfs f0, 0x528(r4)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x30(r1)
    stfs f0, 0x2c(r1)
    stfs f6, 0x34(r1)
    bl fn_805F9920
    lwz r3, 0xa4(r31)
    fmr f31, f1
    addi r3, r3, 0x574
    bl fn_805F9920
    lfs f0, lbl_80881894
    fmuls f0, f0, f1
    fcmpo cr0, f31, f0
    bge lbl_fn_80126214_0000268C
    lwz r3, 0x98(r31)
    addi r0, r3, 0x1
    stw r0, 0x98(r31)
    cmpwi r0, 0x1e
    ble lbl_fn_80126214_00002694
    mr r3, r31
    bl fn_80128090
    b lbl_fn_80126214_00002694
lbl_fn_80126214_0000268C:
    li r0, 0x0
    stw r0, 0x98(r31)
lbl_fn_80126214_00002694:
    lwz r3, 0xa4(r31)
    psq_l f1, 0x528(r3), 0, 0
    lfs f2, 0x530(r3)
    stfs f2, 0x6c(r31)
    psq_st f1, 0x64(r31), 0, 0
lbl_fn_80126214_000026A8:
    addi r11, r1, 0x2c0
    psq_l f31, 0x2c8(r1), 0, 0
    lfd f31, 0x2c0(r1)
    bl _restgpr_26
    lwz r0, 0x2d4(r1)
    mtlr r0
    addi r1, r1, 0x2d0
    blr
}
