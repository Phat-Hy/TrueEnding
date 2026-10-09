#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_80092814(void);
extern void fn_80097C08(void);
extern void fn_80097CCC(void);
extern void fn_800F8548(void);
extern void fn_80148990(void);
extern void fn_80149A30(void);
extern void fn_8014FCC4(void);
extern void fn_80151448(void);
extern void fn_8016E970(void);
extern void fn_801799BC(void);
extern void fn_80232B7C(void);
extern void fn_80239DAC(void);
extern void fn_8023A8B4(void);
extern void fn_802D3C74(void);
extern void fn_802D404C(void);
extern void fn_802D5674(void);
extern void fn_802D57B8(void);
extern void fn_802D6004(void);
extern void fn_80370A78(void);
extern void fn_80370AE4(void);
extern void fn_80373148(void);
extern void fn_805A49E8(void);
extern void fn_805A4A20(void);
extern void fn_80680CF8(void);
extern void fn_80695720(void);

/* External data declarations */
extern u8 lbl_807470A4[];

/* Small data declarations */
extern u32 lbl_8087D9E0;
extern u32 lbl_8087D9E4;
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8088455C;
extern u32 lbl_80884564;
extern u32 lbl_80884568;
extern u32 lbl_80884588;
extern u32 lbl_8088458C;
extern u32 lbl_8088459C;
extern u32 lbl_808845C4;

/* Function declarations */
void fn_802D228C(void);
void fn_802D22A0(void);
void fn_802D2820(void);
void fn_802D2844(void);
void fn_802D30DC(void);
void fn_802D320C(void);
void fn_802D32C8(void);
void fn_802D3370(void);

asm void fn_802D228C(void)
{
    nofralloc
    lwz r0, 0x15c8(r3)
    cmpwi r0, 0x0
    bnelr
    b fn_80149A30
    blr
}

asm void fn_802D22A0(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    stw r31, 0x8c(r1)
    mr r31, r4
    stw r30, 0x88(r1)
    mr r30, r3
    stw r29, 0x84(r1)
    lwz r5, 0x8(r4)
    lwz r0, 0x4(r5)
    cmpwi r0, 0x2710
    bne lbl_fn_802D22A0_00000064
    bl fn_80151448
    lwz r12, 0x0(r30)
    mr r3, r30
    mr r4, r31
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    b lbl_fn_802D22A0_00000578
lbl_fn_802D22A0_00000064:
    lwz r0, 0x14e0(r3)
    cmpwi r0, 0x1
    bne lbl_fn_802D22A0_00000094
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x9
    beq lbl_fn_802D22A0_00000094
    cmpwi r0, 0x6
    beq lbl_fn_802D22A0_00000094
    cmpwi r0, 0x7
    beq lbl_fn_802D22A0_00000094
    cmpwi r0, 0xc
    bne lbl_fn_802D22A0_000000B4
lbl_fn_802D22A0_00000094:
    li r5, 0x0
    li r3, 0x1
    li r0, 0x2
    stw r5, 0x68(r4)
    stw r3, 0x90(r4)
    stw r0, 0x84(r4)
    stw r5, 0x8c(r4)
    b lbl_fn_802D22A0_00000578
lbl_fn_802D22A0_000000B4:
    lfs f0, 0x74(r5)
    lfs f3, lbl_80884564
    fcmpo cr0, f0, f3
    ble lbl_fn_802D22A0_000001C0
    lwz r0, 0x15e8(r3)
    cmpwi r0, 0x0
    bgt lbl_fn_802D22A0_000001B4
    li r0, 0x0
    stw r0, 0x15e4(r3)
    li r4, 0x1
    lwz r12, 0x0(r3)
    lwz r12, 0x9c(r12)
    mtctr r12
    bctrl
    lwz r3, lbl_8087F3C0
    addi r4, r30, 0x15f0
    li r5, 0x0
    li r6, 0x1
    bl fn_80239DAC
    addi r3, r30, 0x15f0
    li r4, 0x0
    bl fn_80232B7C
    lwz r3, 0x15e4(r30)
    li r11, -0x1
    lfs f0, lbl_80884564
    li r0, 0x1
    lfs f1, lbl_8088458C
    mulli r4, r3, 0xc
    stfs f0, 0x44(r1)
    addi r5, r30, 0xb0
    lwz r3, lbl_8087F3C0
    addi r7, r1, 0x38
    stfs f0, 0x48(r1)
    add r4, r30, r4
    addi r8, r1, 0x44
    stfs f0, 0x4c(r1)
    addi r4, r4, 0x15f0
    addi r9, r1, 0x50
    li r6, 0x0
    stfs f0, 0x38(r1)
    li r10, -0x1
    stfs f0, 0x3c(r1)
    stfs f0, 0x40(r1)
    stfs f1, 0x50(r1)
    stfs f1, 0x54(r1)
    stfs f1, 0x58(r1)
    stfs f1, 0x5c(r1)
    stw r11, 0x8(r1)
    stw r0, 0xc(r1)
    bl fn_8023A8B4
    lwz r0, 0x1680(r30)
    li r3, 0x12c
    stw r3, 0x15ec(r30)
    cmpwi r0, 0x0
    blt lbl_fn_802D22A0_000001B4
    mr r3, r30
    addi r4, r30, 0x1680
    bl fn_805A49E8
    cmpwi r3, 0x0
    bne lbl_fn_802D22A0_000001B4
    mr r3, r30
    addi r4, r30, 0x1680
    li r5, 0x1
    bl fn_805A4A20
lbl_fn_802D22A0_000001B4:
    li r0, 0x1c2
    stw r0, 0x15e8(r30)
    b lbl_fn_802D22A0_000002C0
lbl_fn_802D22A0_000001C0:
    lfs f0, 0x80(r5)
    fcmpo cr0, f0, f3
    ble lbl_fn_802D22A0_000002C0
    lwz r0, 0x15e8(r3)
    cmpwi r0, 0x0
    bgt lbl_fn_802D22A0_000002B8
    li r29, 0x1
    stw r29, 0x15e4(r3)
    li r4, 0x1
    lwz r12, 0x0(r3)
    lwz r12, 0x9c(r12)
    mtctr r12
    bctrl
    lwz r3, lbl_8087F3C0
    addi r4, r30, 0x15f0
    li r5, 0x0
    li r6, 0x1
    bl fn_80239DAC
    addi r3, r30, 0x15f0
    li r4, 0x0
    bl fn_80232B7C
    lwz r3, 0x15e4(r30)
    li r0, -0x1
    lfs f0, lbl_80884564
    addi r5, r30, 0xb0
    lfs f1, lbl_8088458C
    mulli r4, r3, 0xc
    stfs f0, 0x1c(r1)
    addi r7, r1, 0x10
    lwz r3, lbl_8087F3C0
    addi r8, r1, 0x1c
    stfs f0, 0x20(r1)
    add r4, r30, r4
    addi r9, r1, 0x28
    stfs f0, 0x24(r1)
    addi r4, r4, 0x15f0
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f1, 0x28(r1)
    stfs f1, 0x2c(r1)
    stfs f1, 0x30(r1)
    stfs f1, 0x34(r1)
    stw r0, 0x8(r1)
    stw r29, 0xc(r1)
    bl fn_8023A8B4
    lwz r0, 0x1680(r30)
    li r3, 0x12c
    stw r3, 0x15ec(r30)
    cmpwi r0, 0x0
    blt lbl_fn_802D22A0_000002B8
    mr r3, r30
    addi r4, r30, 0x1680
    bl fn_805A49E8
    cmpwi r3, 0x0
    bne lbl_fn_802D22A0_000002B8
    mr r3, r30
    addi r4, r30, 0x1680
    li r5, 0x1
    bl fn_805A4A20
lbl_fn_802D22A0_000002B8:
    li r0, 0x1c2
    stw r0, 0x15e8(r30)
lbl_fn_802D22A0_000002C0:
    lwz r0, 0x15e8(r30)
    li r29, 0x0
    cmpwi r0, 0x0
    ble lbl_fn_802D22A0_0000031C
    lwz r3, lbl_8087F430
    li r29, 0x1
    bl fn_80373148
    lwz r0, 0x4c(r3)
    cmpwi r0, 0x3
    bne lbl_fn_802D22A0_0000031C
    lwz r3, 0x8(r31)
    lbz r0, 0x1(r3)
    extsb. r0, r0
    bne lbl_fn_802D22A0_0000031C
    lwz r3, lbl_8087F430
    li r4, 0x6e
    bl fn_80370A78
    cmpwi r3, 0x0
    bne lbl_fn_802D22A0_0000031C
    lwz r3, lbl_8087F430
    li r4, 0x6e
    li r5, 0x1
    bl fn_80370AE4
lbl_fn_802D22A0_0000031C:
    cmpwi r29, 0x0
    bne lbl_fn_802D22A0_000003B4
    lwz r3, 0x8(r31)
    lfs f0, lbl_8088459C
    lfs f3, 0x74(r3)
    fcmpo cr0, f3, f0
    ble lbl_fn_802D22A0_00000340
    li r29, 0x1
    b lbl_fn_802D22A0_000003B4
lbl_fn_802D22A0_00000340:
    lfs f3, 0x78(r3)
    fcmpo cr0, f3, f0
    ble lbl_fn_802D22A0_00000354
    li r29, 0x1
    b lbl_fn_802D22A0_000003B4
lbl_fn_802D22A0_00000354:
    lfs f3, 0x7c(r3)
    fcmpo cr0, f3, f0
    ble lbl_fn_802D22A0_00000368
    li r29, 0x1
    b lbl_fn_802D22A0_000003B4
lbl_fn_802D22A0_00000368:
    lfs f3, 0x80(r3)
    fcmpo cr0, f3, f0
    ble lbl_fn_802D22A0_0000037C
    li r29, 0x1
    b lbl_fn_802D22A0_000003B4
lbl_fn_802D22A0_0000037C:
    lfs f3, 0x84(r3)
    fcmpo cr0, f3, f0
    ble lbl_fn_802D22A0_00000390
    li r29, 0x1
    b lbl_fn_802D22A0_000003B4
lbl_fn_802D22A0_00000390:
    lfs f3, 0x88(r3)
    fcmpo cr0, f3, f0
    ble lbl_fn_802D22A0_000003A4
    li r29, 0x1
    b lbl_fn_802D22A0_000003B4
lbl_fn_802D22A0_000003A4:
    lfs f3, 0x8c(r3)
    fcmpo cr0, f3, f0
    ble lbl_fn_802D22A0_000003B4
    li r29, 0x1
lbl_fn_802D22A0_000003B4:
    cmpwi r29, 0x0
    bne lbl_fn_802D22A0_00000420
    lwz r3, 0x0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802D22A0_00000420
    lwz r4, 0x8(r31)
    lbz r0, 0x1(r4)
    extsb. r0, r0
    bne lbl_fn_802D22A0_00000420
    bl fn_8014FCC4
    cmpwi r3, 0x0
    beq lbl_fn_802D22A0_00000420
    lwz r3, 0x0(r31)
    bl fn_801799BC
    rlwinm r0, r3, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_802D22A0_0000041C
    rlwinm r0, r3, 0, 25, 25
    cmplwi r0, 0x40
    beq lbl_fn_802D22A0_0000041C
    rlwinm r0, r3, 0, 22, 22
    cmplwi r0, 0x200
    beq lbl_fn_802D22A0_0000041C
    rlwinm r0, r3, 0, 21, 21
    cmplwi r0, 0x400
    bne lbl_fn_802D22A0_00000420
lbl_fn_802D22A0_0000041C:
    li r29, 0x1
lbl_fn_802D22A0_00000420:
    cmpwi r29, 0x0
    bne lbl_fn_802D22A0_00000478
    li r4, 0x0
    li r3, 0x1
    li r0, 0x2
    stw r4, 0x68(r31)
    stw r3, 0x90(r31)
    stw r0, 0x84(r31)
    stw r4, 0x8c(r31)
    lwz r0, 0x1688(r30)
    cmpwi r0, 0x0
    blt lbl_fn_802D22A0_00000578
    mr r3, r30
    addi r4, r30, 0x1688
    bl fn_805A49E8
    cmpwi r3, 0x0
    bne lbl_fn_802D22A0_00000578
    mr r3, r30
    addi r4, r30, 0x1688
    li r5, 0x1
    bl fn_805A4A20
    b lbl_fn_802D22A0_00000578
lbl_fn_802D22A0_00000478:
    lwz r0, 0x40(r31)
    addi r29, r1, 0x6c
    psq_l f1, 0x1c(r31), 0, 0
    mr r3, r30
    mulli r6, r0, 0x14
    lwz r5, 0x62c(r30)
    lfs f2, 0x24(r31)
    mr r4, r31
    lwz r0, 0x50(r31)
    add r5, r5, r6
    psq_st f1, 0x0(r29), 0, 0
    ori r0, r0, 0x10
    psq_l f1, 0x4(r5), 0, 0
    stfs f2, 0x74(r1)
    lfs f2, 0xc(r5)
    stfs f2, 0x24(r31)
    lfs f4, 0x30(r31)
    psq_st f1, 0x1c(r31), 0, 0
    lfs f5, 0x2c(r31)
    lwz r5, 0x62c(r30)
    lfs f3, 0x28(r31)
    add r5, r5, r6
    lfs f6, 0x1c(r31)
    lfs f7, 0x10(r5)
    lfs f0, 0x20(r31)
    fmuls f11, f3, f7
    lfs f3, 0x14(r31)
    fmuls f9, f4, f7
    lfs f4, 0x10(r31)
    fmuls f10, f5, f7
    lfs f5, lbl_80884564
    fadds f8, f6, f11
    stfs f11, 0x60(r1)
    fadds f7, f0, f10
    lfs f0, 0x18(r31)
    fadds f6, f2, f9
    stfs f8, 0x1c(r31)
    stfs f7, 0x20(r31)
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    stfs f6, 0x24(r31)
    fmuls f0, f0, f5
    lwz r5, 0x62c(r30)
    stfs f10, 0x64(r1)
    add r5, r5, r6
    lfs f5, 0x10(r5)
    stfs f9, 0x68(r1)
    fadds f5, f7, f5
    stw r0, 0x50(r31)
    stfs f5, 0x20(r31)
    stfs f4, 0x10(r31)
    stfs f3, 0x14(r31)
    stfs f0, 0x18(r31)
    bl fn_80151448
    lwz r12, 0x0(r30)
    mr r3, r30
    mr r4, r31
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x74(r1)
    psq_st f1, 0x1c(r31), 0, 0
    stfs f2, 0x24(r31)
lbl_fn_802D22A0_00000578:
    lwz r0, 0x94(r1)
    lwz r31, 0x8c(r1)
    lwz r30, 0x88(r1)
    lwz r29, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_802D2820(void)
{
    nofralloc
    lwz r0, 0x7e0(r3)
    lwz r4, 0x14ec(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    addi r0, r4, 0x1
    stw r0, 0x14ec(r3)
    bnelr
    b fn_802D57B8
    blr
}

asm void fn_802D2844(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    lfs f5, lbl_80884564
    li r4, 0x0
    stw r0, 0x64(r1)
    addi r5, r1, 0x8
    addi r6, r1, 0x3c
    addi r7, r1, 0x2c
    stw r31, 0x5c(r1)
    mr r31, r3
    stw r30, 0x58(r1)
    stw r29, 0x54(r1)
    lfs f3, 0x52c(r3)
    lfs f0, 0x5a8(r3)
    lfs f4, 0x5b0(r3)
    fadds f6, f3, f0
    lfs f3, 0x528(r3)
    lfs f0, 0x5a4(r3)
    stfs f5, 0x8(r1)
    fadds f0, f3, f0
    lfs f3, 0x530(r3)
    stfs f5, 0xc(r1)
    lwz r0, 0x62c(r3)
    stfs f0, 0x2c(r1)
    lfs f0, 0x5ac(r3)
    cmpwi r0, 0x0
    psq_l f1, 0x0(r5), 0, 0
    fadds f2, f3, f0
    stfs f6, 0x30(r1)
    lfs f3, lbl_80884588
    psq_st f1, 0x0(r6), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    lfs f0, 0x540(r3)
    psq_st f1, 0x0(r6), 0, 0
    fmadds f3, f3, f0, f4
    lfs f0, 0x40(r1)
    stw r4, 0x38(r1)
    fadds f0, f0, f3
    stfs f5, 0x10(r1)
    stfs f4, 0x48(r1)
    stfs f2, 0x34(r1)
    stfs f2, 0x44(r1)
    stfs f0, 0x40(r1)
    beq lbl_fn_802D2844_00000674
    lwz r0, 0x628(r3)
    cmpwi r0, 0x0
    bne lbl_fn_802D2844_00000814
lbl_fn_802D2844_00000674:
    lwz r0, 0x628(r3)
    li r30, 0x8
    cmplwi r0, 0x8
    bgt lbl_fn_802D2844_000009BC
    li r3, 0xb0
    li r4, 0x0
    la r5, lbl_8087D9E4
    la r6, lbl_8087D9E0
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_80148990@ha
    li r5, 0x0
    addi r4, r4, fn_80148990@l
    li r6, 0x14
    li r7, 0x8
    bl fn_80695720
    lwz r0, 0x62c(r31)
    mr r29, r3
    cmpwi r0, 0x0
    beq lbl_fn_802D2844_00000808
    lwz r0, 0x624(r31)
    li r5, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_802D2844_000006D8
    mr r5, r0
lbl_fn_802D2844_000006D8:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_802D2844_000007F4
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_802D2844_000007BC
lbl_fn_802D2844_000006F0:
    lwz r0, 0x62c(r31)
    add r6, r3, r4
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r31)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r31)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r31)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    bdnz lbl_fn_802D2844_000006F0
    andi. r5, r5, 0x3
    beq lbl_fn_802D2844_000007F4
lbl_fn_802D2844_000007BC:
    mtctr r5
lbl_fn_802D2844_000007C0:
    lwz r0, 0x62c(r31)
    add r6, r3, r4
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    bdnz lbl_fn_802D2844_000007C0
lbl_fn_802D2844_000007F4:
    lwz r3, 0x62c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802D2844_00000808
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_802D2844_00000808:
    stw r29, 0x62c(r31)
    stw r30, 0x628(r31)
    b lbl_fn_802D2844_000009BC
lbl_fn_802D2844_00000814:
    lwz r3, 0x624(r3)
    cmplw r3, r0
    blt lbl_fn_802D2844_000009BC
    slwi r30, r3, 1
    cmplw r0, r30
    bgt lbl_fn_802D2844_000009BC
    mulli r3, r30, 0x14
    li r4, 0x0
    la r5, lbl_8087D9E4
    la r6, lbl_8087D9E0
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_80148990@ha
    mr r7, r30
    addi r4, r4, fn_80148990@l
    li r5, 0x0
    li r6, 0x14
    bl fn_80695720
    lwz r0, 0x62c(r31)
    mr r29, r3
    cmpwi r0, 0x0
    beq lbl_fn_802D2844_000009B4
    lwz r0, 0x624(r31)
    mr r5, r30
    cmplw r30, r0
    ble lbl_fn_802D2844_00000884
    mr r5, r0
lbl_fn_802D2844_00000884:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_802D2844_000009A0
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_802D2844_00000968
lbl_fn_802D2844_0000089C:
    lwz r0, 0x62c(r31)
    add r6, r3, r4
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r31)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r31)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r31)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    bdnz lbl_fn_802D2844_0000089C
    andi. r5, r5, 0x3
    beq lbl_fn_802D2844_000009A0
lbl_fn_802D2844_00000968:
    mtctr r5
lbl_fn_802D2844_0000096C:
    lwz r0, 0x62c(r31)
    add r6, r3, r4
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    bdnz lbl_fn_802D2844_0000096C
lbl_fn_802D2844_000009A0:
    lwz r3, 0x62c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802D2844_000009B4
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_802D2844_000009B4:
    stw r29, 0x62c(r31)
    stw r30, 0x628(r31)
lbl_fn_802D2844_000009BC:
    lwz r0, 0x624(r31)
    addi r3, r1, 0x3c
    psq_l f1, 0x0(r3), 0, 0
    lis r4, lbl_807470A4@ha
    mulli r5, r0, 0x14
    lwz r6, 0x62c(r31)
    lwz r0, 0x38(r1)
    addi r4, r4, lbl_807470A4@l
    lfs f2, 0x44(r1)
    addi r3, r31, 0xb0
    stwux r0, r6, r5
    addi r4, r4, 0x2b2
    lfs f0, 0x48(r1)
    li r5, 0x0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    stfs f0, 0x10(r6)
    lwz r6, 0x624(r31)
    addi r0, r6, 0x1
    stw r0, 0x624(r31)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802D2844_00000A20
    li r5, 0x0
    b lbl_fn_802D2844_00000A2C
lbl_fn_802D2844_00000A20:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r5, r3, r0
lbl_fn_802D2844_00000A2C:
    lfs f5, 0x1c(r5)
    addi r4, r1, 0x20
    lfs f6, 0xc(r5)
    addi r3, r1, 0x3c
    lfs f3, 0x5a8(r31)
    lfs f0, 0x5a4(r31)
    fadds f3, f5, f3
    lfs f4, 0x2c(r5)
    fadds f7, f6, f0
    lfs f0, 0x5ac(r31)
    stfs f3, 0x24(r1)
    fadds f2, f4, f0
    stfs f7, 0x20(r1)
    lfs f0, lbl_808845C4
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lwz r0, 0x62c(r31)
    lfs f3, 0x40(r1)
    cmpwi r0, 0x0
    stfs f6, 0x14(r1)
    fadds f0, f3, f0
    stfs f5, 0x18(r1)
    stfs f4, 0x1c(r1)
    stfs f2, 0x28(r1)
    stfs f2, 0x44(r1)
    stfs f0, 0x40(r1)
    beq lbl_fn_802D2844_00000AA4
    lwz r0, 0x628(r31)
    cmpwi r0, 0x0
    bne lbl_fn_802D2844_00000C44
lbl_fn_802D2844_00000AA4:
    lwz r0, 0x628(r31)
    li r30, 0x8
    cmplwi r0, 0x8
    bgt lbl_fn_802D2844_00000DEC
    li r3, 0xb0
    li r4, 0x0
    la r5, lbl_8087D9E4
    la r6, lbl_8087D9E0
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_80148990@ha
    li r5, 0x0
    addi r4, r4, fn_80148990@l
    li r6, 0x14
    li r7, 0x8
    bl fn_80695720
    lwz r0, 0x62c(r31)
    mr r29, r3
    cmpwi r0, 0x0
    beq lbl_fn_802D2844_00000C38
    lwz r0, 0x624(r31)
    li r5, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_802D2844_00000B08
    mr r5, r0
lbl_fn_802D2844_00000B08:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_802D2844_00000C24
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_802D2844_00000BEC
lbl_fn_802D2844_00000B20:
    lwz r0, 0x62c(r31)
    add r6, r3, r4
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r31)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r31)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r31)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    bdnz lbl_fn_802D2844_00000B20
    andi. r5, r5, 0x3
    beq lbl_fn_802D2844_00000C24
lbl_fn_802D2844_00000BEC:
    mtctr r5
lbl_fn_802D2844_00000BF0:
    lwz r0, 0x62c(r31)
    add r6, r3, r4
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    bdnz lbl_fn_802D2844_00000BF0
lbl_fn_802D2844_00000C24:
    lwz r3, 0x62c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802D2844_00000C38
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_802D2844_00000C38:
    stw r29, 0x62c(r31)
    stw r30, 0x628(r31)
    b lbl_fn_802D2844_00000DEC
lbl_fn_802D2844_00000C44:
    lwz r3, 0x624(r31)
    cmplw r3, r0
    blt lbl_fn_802D2844_00000DEC
    slwi r30, r3, 1
    cmplw r0, r30
    bgt lbl_fn_802D2844_00000DEC
    mulli r3, r30, 0x14
    li r4, 0x0
    la r5, lbl_8087D9E4
    la r6, lbl_8087D9E0
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_80148990@ha
    mr r7, r30
    addi r4, r4, fn_80148990@l
    li r5, 0x0
    li r6, 0x14
    bl fn_80695720
    lwz r0, 0x62c(r31)
    mr r29, r3
    cmpwi r0, 0x0
    beq lbl_fn_802D2844_00000DE4
    lwz r0, 0x624(r31)
    mr r5, r30
    cmplw r30, r0
    ble lbl_fn_802D2844_00000CB4
    mr r5, r0
lbl_fn_802D2844_00000CB4:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_802D2844_00000DD0
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_802D2844_00000D98
lbl_fn_802D2844_00000CCC:
    lwz r0, 0x62c(r31)
    add r6, r3, r4
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r31)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r31)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r31)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    bdnz lbl_fn_802D2844_00000CCC
    andi. r5, r5, 0x3
    beq lbl_fn_802D2844_00000DD0
lbl_fn_802D2844_00000D98:
    mtctr r5
lbl_fn_802D2844_00000D9C:
    lwz r0, 0x62c(r31)
    add r6, r3, r4
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    bdnz lbl_fn_802D2844_00000D9C
lbl_fn_802D2844_00000DD0:
    lwz r3, 0x62c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802D2844_00000DE4
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_802D2844_00000DE4:
    stw r29, 0x62c(r31)
    stw r30, 0x628(r31)
lbl_fn_802D2844_00000DEC:
    lwz r0, 0x624(r31)
    addi r5, r1, 0x3c
    lwz r4, 0x62c(r31)
    mulli r3, r0, 0x14
    lwz r0, 0x38(r1)
    stwux r0, r3, r4
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x4(r3), 0, 0
    lfs f2, 0x44(r1)
    stfs f2, 0xc(r3)
    lfs f0, 0x48(r1)
    stfs f0, 0x10(r3)
    lwz r3, 0x624(r31)
    lwz r0, 0x12a8(r31)
    addi r3, r3, 0x1
    stw r3, 0x624(r31)
    rlwinm r0, r0, 0, 3, 1
    stw r0, 0x12a8(r31)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_802D30DC(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r3
    lwz r0, 0x624(r3)
    cmpwi r0, 0x0
    beq lbl_fn_802D30DC_00000F6C
    lfs f5, 0x52c(r3)
    lis r4, lbl_807470A4@ha
    lfs f4, 0x5a8(r3)
    addi r4, r4, lbl_807470A4@l
    lfs f3, 0x528(r3)
    addi r6, r1, 0x20
    fadds f5, f5, f4
    lfs f0, 0x5a4(r3)
    lfs f4, 0x530(r3)
    addi r4, r4, 0x2b2
    fadds f3, f3, f0
    stfs f5, 0x24(r1)
    stfs f3, 0x20(r1)
    li r5, 0x0
    lfs f0, 0x5ac(r3)
    lwz r7, 0x62c(r3)
    psq_l f1, 0x0(r6), 0, 0
    fadds f2, f4, f0
    psq_st f1, 0x4(r7), 0, 0
    lfs f5, lbl_80884588
    stfs f2, 0xc(r7)
    lwz r6, 0x62c(r3)
    lfs f4, 0x540(r3)
    addi r3, r3, 0xb0
    lfs f3, 0x10(r6)
    lfs f0, 0x8(r6)
    fmadds f3, f5, f4, f3
    stfs f2, 0x28(r1)
    fadds f0, f0, f3
    stfs f0, 0x8(r6)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802D30DC_00000EFC
    li r4, 0x0
    b lbl_fn_802D30DC_00000F08
lbl_fn_802D30DC_00000EFC:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r4, r3, r0
lbl_fn_802D30DC_00000F08:
    lfs f5, 0x1c(r4)
    addi r3, r1, 0x14
    lfs f6, 0xc(r4)
    lfs f3, 0x5a8(r31)
    lfs f0, 0x5a4(r31)
    fadds f3, f5, f3
    lfs f4, 0x2c(r4)
    fadds f7, f6, f0
    lfs f0, 0x5ac(r31)
    stfs f3, 0x18(r1)
    fadds f2, f4, f0
    stfs f7, 0x14(r1)
    lwz r4, 0x62c(r31)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x18(r4), 0, 0
    lfs f0, lbl_808845C4
    stfs f2, 0x20(r4)
    lwz r3, 0x62c(r31)
    stfs f6, 0x8(r1)
    lfs f3, 0x1c(r3)
    stfs f5, 0xc(r1)
    fadds f0, f3, f0
    stfs f4, 0x10(r1)
    stfs f2, 0x1c(r1)
    stfs f0, 0x1c(r3)
lbl_fn_802D30DC_00000F6C:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_802D320C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    lfs f5, 0x52c(r3)
    addi r4, r1, 0x8
    lfs f4, 0x5a8(r3)
    addi r6, r1, 0x14
    lfs f3, 0x528(r3)
    addi r5, r1, 0x20
    fadds f4, f5, f4
    lfs f0, 0x5a4(r3)
    lfs f5, 0x5b0(r3)
    fadds f0, f3, f0
    stfs f4, 0xc(r1)
    lfs f3, 0x530(r3)
    stfs f0, 0x8(r1)
    lfs f0, 0x5ac(r3)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x614(r3), 0, 0
    fadds f6, f3, f0
    lfs f3, lbl_80884568
    lfs f4, 0x618(r3)
    lfs f0, 0x5b4(r3)
    fmr f2, f6
    fadds f4, f4, f5
    stfs f5, 0x620(r3)
    fnmsubs f3, f3, f5, f0
    stfs f4, 0x618(r3)
    psq_l f1, 0x614(r3), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    lfs f0, 0x18(r1)
    stfs f2, 0x61c(r3)
    frsp f2, f2
    fadds f0, f0, f3
    stfs f2, 0x28(r1)
    stfs f2, 0x1c(r1)
    frsp f2, f2
    stfs f2, 0x5fc(r3)
    lfs f2, 0x1c(r1)
    stfs f0, 0x18(r1)
    psq_st f1, 0x0(r5), 0, 0
    psq_st f1, 0x5f4(r3), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f6, 0x10(r1)
    psq_st f1, 0x600(r3), 0, 0
    stfs f2, 0x608(r3)
    stfs f5, 0x60c(r3)
    addi r1, r1, 0x30
    blr
}

asm void fn_802D32C8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    psq_l f1, 0x528(r4), 0, 0
    lfs f2, 0x530(r4)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
    beq lbl_fn_802D32C8_000010CC
    lis r4, lbl_807470A4@ha
    addi r3, r31, 0xb0
    addi r4, r4, lbl_807470A4@l
    li r5, 0x0
    addi r4, r4, 0x2e3
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802D32C8_00001098
    li r4, 0x0
    b lbl_fn_802D32C8_000010A4
lbl_fn_802D32C8_00001098:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r4, r3, r0
lbl_fn_802D32C8_000010A4:
    lfs f0, 0x1c(r4)
    addi r3, r1, 0x8
    lfs f3, 0xc(r4)
    lfs f2, 0x2c(r4)
    stfs f3, 0x8(r1)
    stfs f0, 0xc(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x10(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x8(r30)
lbl_fn_802D32C8_000010CC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_802D3370(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    stw r31, 0xbc(r1)
    mr r31, r3
    stw r30, 0xb8(r1)
    stw r29, 0xb4(r1)
    lwz r0, 0x14dc(r3)
    cmpwi r0, 0x0
    bne lbl_fn_802D3370_00001328
    lwz r0, 0x14e0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_802D3370_00001134
    cmpwi r0, 0x1
    beq lbl_fn_802D3370_00001258
    cmpwi r0, 0x2
    beq lbl_fn_802D3370_00001268
    cmpwi r0, 0x3
    beq lbl_fn_802D3370_00001310
    b lbl_fn_802D3370_000019C0
lbl_fn_802D3370_00001134:
    lwz r0, 0x14e4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_802D3370_00001148
    lwz r4, 0x1628(r3)
    bl fn_802D5674
lbl_fn_802D3370_00001148:
    lwz r0, 0x14e4(r31)
    cmpwi r0, 0x1
    bne lbl_fn_802D3370_000019C0
    mr r3, r31
    bl fn_802D6004
    cmpwi r3, 0x0
    beq lbl_fn_802D3370_00001240
    mr r3, r31
    li r4, 0xd
    bl fn_80232B7C
    lfs f0, lbl_80884564
    li r0, -0x1
    lfs f1, lbl_8088458C
    li r29, 0x1
    stfs f0, 0x98(r1)
    addi r4, r31, 0x1588
    addi r5, r31, 0xb0
    addi r7, r1, 0xa4
    stfs f0, 0x9c(r1)
    addi r8, r1, 0x98
    addi r9, r1, 0x88
    li r6, 0x0
    stfs f0, 0xa0(r1)
    li r10, -0x1
    stfs f0, 0xa4(r1)
    stfs f0, 0xa8(r1)
    stfs f0, 0xac(r1)
    stfs f1, 0x88(r1)
    stfs f1, 0x8c(r1)
    stfs f1, 0x90(r1)
    stfs f1, 0x94(r1)
    stw r0, 0x8(r1)
    stw r29, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    li r0, 0x0
    stw r0, 0x14e8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0x9
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f0, lbl_8088458C
    addi r3, r31, 0xb0
    stw r29, 0x3fc(r31)
    li r4, 0x0
    lfs f1, lbl_80884564
    li r5, 0x33
    stfs f0, 0x2fc(r31)
    li r6, 0x1
    lfs f2, lbl_8088455C
    li r7, 0x0
    stfs f0, 0x2e8(r31)
    li r8, 0x1
    bl fn_80097C08
    lwz r3, lbl_8087F430
    li r4, 0x32
    li r5, 0x3
    bl fn_80370AE4
lbl_fn_802D3370_00001240:
    li r0, 0x0
    li r3, 0x1
    stw r3, 0x14e0(r31)
    stw r0, 0x14e4(r31)
    stw r0, 0x1500(r31)
    b lbl_fn_802D3370_000019CC
lbl_fn_802D3370_00001258:
    bl fn_802D3C74
    cmpwi r3, 0x0
    bne lbl_fn_802D3370_000019C0
    b lbl_fn_802D3370_000019CC
lbl_fn_802D3370_00001268:
    lwz r0, 0x14e4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_802D3370_000012F0
    li r29, 0x0
    stw r29, 0x1510(r3)
    stw r29, 0x14e8(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0xc
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f1, lbl_80884564
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097CCC
    lfs f0, lbl_8088458C
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80884564
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x14a
    lfs f2, lbl_8088455C
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    stw r29, 0x15e8(r31)
    stw r29, 0x15ec(r31)
lbl_fn_802D3370_000012F0:
    lwz r0, 0x14e4(r31)
    cmpwi r0, 0x1
    bne lbl_fn_802D3370_000019C0
    li r3, 0x3
    li r0, 0x0
    stw r3, 0x14e0(r31)
    stw r0, 0x14e4(r31)
    b lbl_fn_802D3370_000019CC
lbl_fn_802D3370_00001310:
    bl fn_802D404C
    cmpwi r3, 0x0
    bne lbl_fn_802D3370_000019C0
    li r0, 0x1
    stw r0, 0x14dc(r31)
    b lbl_fn_802D3370_000019CC
lbl_fn_802D3370_00001328:
    cmpwi r0, 0x1
    bne lbl_fn_802D3370_00001564
    lwz r0, 0x14e0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_802D3370_00001358
    cmpwi r0, 0x1
    beq lbl_fn_802D3370_00001490
    cmpwi r0, 0x2
    beq lbl_fn_802D3370_000014A0
    cmpwi r0, 0x3
    beq lbl_fn_802D3370_0000154C
    b lbl_fn_802D3370_000019C0
lbl_fn_802D3370_00001358:
    lwz r0, 0x14e4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_802D3370_00001380
    lwz r29, 0x1630(r3)
    bl fn_80680CF8
    divwu r0, r3, r29
    mullw r0, r0, r29
    subf r4, r0, r3
    mr r3, r31
    bl fn_802D5674
lbl_fn_802D3370_00001380:
    lwz r0, 0x14e4(r31)
    cmpwi r0, 0x1
    bne lbl_fn_802D3370_000019C0
    mr r3, r31
    bl fn_802D6004
    cmpwi r3, 0x0
    beq lbl_fn_802D3370_00001478
    mr r3, r31
    li r4, 0xd
    bl fn_80232B7C
    lfs f0, lbl_80884564
    li r0, -0x1
    lfs f1, lbl_8088458C
    li r29, 0x1
    stfs f0, 0x70(r1)
    addi r4, r31, 0x1588
    addi r5, r31, 0xb0
    addi r7, r1, 0x7c
    stfs f0, 0x74(r1)
    addi r8, r1, 0x70
    addi r9, r1, 0x60
    li r6, 0x0
    stfs f0, 0x78(r1)
    li r10, -0x1
    stfs f0, 0x7c(r1)
    stfs f0, 0x80(r1)
    stfs f0, 0x84(r1)
    stfs f1, 0x60(r1)
    stfs f1, 0x64(r1)
    stfs f1, 0x68(r1)
    stfs f1, 0x6c(r1)
    stw r0, 0x8(r1)
    stw r29, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    li r0, 0x0
    stw r0, 0x14e8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0x9
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f0, lbl_8088458C
    addi r3, r31, 0xb0
    stw r29, 0x3fc(r31)
    li r4, 0x0
    lfs f1, lbl_80884564
    li r5, 0x33
    stfs f0, 0x2fc(r31)
    li r6, 0x1
    lfs f2, lbl_8088455C
    li r7, 0x0
    stfs f0, 0x2e8(r31)
    li r8, 0x1
    bl fn_80097C08
    lwz r3, lbl_8087F430
    li r4, 0x32
    li r5, 0x3
    bl fn_80370AE4
lbl_fn_802D3370_00001478:
    li r0, 0x0
    li r3, 0x1
    stw r3, 0x14e0(r31)
    stw r0, 0x14e4(r31)
    stw r0, 0x1500(r31)
    b lbl_fn_802D3370_000019CC
lbl_fn_802D3370_00001490:
    bl fn_802D3C74
    cmpwi r3, 0x0
    bne lbl_fn_802D3370_000019C0
    b lbl_fn_802D3370_000019CC
lbl_fn_802D3370_000014A0:
    lwz r0, 0x14e4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_802D3370_0000152C
    li r0, 0x3
    li r29, 0x0
    stw r0, 0x1510(r3)
    stw r29, 0x14e8(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0xc
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f1, lbl_80884564
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097CCC
    lfs f0, lbl_8088458C
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80884564
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x14a
    lfs f2, lbl_8088455C
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    stw r29, 0x15e8(r31)
    stw r29, 0x15ec(r31)
lbl_fn_802D3370_0000152C:
    lwz r0, 0x14e4(r31)
    cmpwi r0, 0x1
    bne lbl_fn_802D3370_000019C0
    li r3, 0x3
    li r0, 0x0
    stw r3, 0x14e0(r31)
    stw r0, 0x14e4(r31)
    b lbl_fn_802D3370_000019CC
lbl_fn_802D3370_0000154C:
    bl fn_802D404C
    cmpwi r3, 0x0
    bne lbl_fn_802D3370_000019C0
    li r0, 0x2
    stw r0, 0x14dc(r31)
    b lbl_fn_802D3370_000019CC
lbl_fn_802D3370_00001564:
    cmpwi r0, 0x2
    bne lbl_fn_802D3370_00001788
    lwz r0, 0x14e0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_802D3370_00001594
    cmpwi r0, 0x1
    beq lbl_fn_802D3370_000016B8
    cmpwi r0, 0x2
    beq lbl_fn_802D3370_000016C8
    cmpwi r0, 0x3
    beq lbl_fn_802D3370_00001770
    b lbl_fn_802D3370_000019C0
lbl_fn_802D3370_00001594:
    lwz r0, 0x14e4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_802D3370_000015A8
    lwz r4, 0x1628(r3)
    bl fn_802D5674
lbl_fn_802D3370_000015A8:
    lwz r0, 0x14e4(r31)
    cmpwi r0, 0x1
    bne lbl_fn_802D3370_000019C0
    mr r3, r31
    bl fn_802D6004
    cmpwi r3, 0x0
    beq lbl_fn_802D3370_000016A0
    mr r3, r31
    li r4, 0xd
    bl fn_80232B7C
    lfs f0, lbl_80884564
    li r0, -0x1
    lfs f1, lbl_8088458C
    li r29, 0x1
    stfs f0, 0x48(r1)
    addi r4, r31, 0x1588
    addi r5, r31, 0xb0
    addi r7, r1, 0x54
    stfs f0, 0x4c(r1)
    addi r8, r1, 0x48
    addi r9, r1, 0x38
    li r6, 0x0
    stfs f0, 0x50(r1)
    li r10, -0x1
    stfs f0, 0x54(r1)
    stfs f0, 0x58(r1)
    stfs f0, 0x5c(r1)
    stfs f1, 0x38(r1)
    stfs f1, 0x3c(r1)
    stfs f1, 0x40(r1)
    stfs f1, 0x44(r1)
    stw r0, 0x8(r1)
    stw r29, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    li r0, 0x0
    stw r0, 0x14e8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0x9
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f0, lbl_8088458C
    addi r3, r31, 0xb0
    stw r29, 0x3fc(r31)
    li r4, 0x0
    lfs f1, lbl_80884564
    li r5, 0x33
    stfs f0, 0x2fc(r31)
    li r6, 0x1
    lfs f2, lbl_8088455C
    li r7, 0x0
    stfs f0, 0x2e8(r31)
    li r8, 0x1
    bl fn_80097C08
    lwz r3, lbl_8087F430
    li r4, 0x32
    li r5, 0x3
    bl fn_80370AE4
lbl_fn_802D3370_000016A0:
    li r0, 0x0
    li r3, 0x1
    stw r3, 0x14e0(r31)
    stw r0, 0x14e4(r31)
    stw r0, 0x1500(r31)
    b lbl_fn_802D3370_000019CC
lbl_fn_802D3370_000016B8:
    bl fn_802D3C74
    cmpwi r3, 0x0
    bne lbl_fn_802D3370_000019C0
    b lbl_fn_802D3370_000019CC
lbl_fn_802D3370_000016C8:
    lwz r0, 0x14e4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_802D3370_00001750
    li r30, 0x1
    li r29, 0x0
    stw r30, 0x1510(r3)
    stw r29, 0x14e8(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0xc
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f1, lbl_80884564
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097CCC
    lfs f0, lbl_8088458C
    addi r3, r31, 0xb0
    stw r30, 0x3fc(r31)
    li r4, 0x0
    lfs f1, lbl_80884564
    li r5, 0x14a
    stfs f0, 0x2fc(r31)
    li r6, 0x0
    lfs f2, lbl_8088455C
    li r7, 0x0
    stfs f0, 0x2e8(r31)
    li r8, 0x1
    bl fn_80097C08
    stw r29, 0x15e8(r31)
    stw r29, 0x15ec(r31)
lbl_fn_802D3370_00001750:
    lwz r0, 0x14e4(r31)
    cmpwi r0, 0x1
    bne lbl_fn_802D3370_000019C0
    li r3, 0x3
    li r0, 0x0
    stw r3, 0x14e0(r31)
    stw r0, 0x14e4(r31)
    b lbl_fn_802D3370_000019CC
lbl_fn_802D3370_00001770:
    bl fn_802D404C
    cmpwi r3, 0x0
    bne lbl_fn_802D3370_000019C0
    li r0, 0x3
    stw r0, 0x14dc(r31)
    b lbl_fn_802D3370_000019CC
lbl_fn_802D3370_00001788:
    cmpwi r0, 0x3
    bne lbl_fn_802D3370_000019C0
    lwz r0, 0x14e0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_802D3370_000017B8
    cmpwi r0, 0x1
    beq lbl_fn_802D3370_000018F0
    cmpwi r0, 0x2
    beq lbl_fn_802D3370_00001900
    cmpwi r0, 0x3
    beq lbl_fn_802D3370_000019A8
    b lbl_fn_802D3370_000019C0
lbl_fn_802D3370_000017B8:
    lwz r0, 0x14e4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_802D3370_000017E0
    lwz r29, 0x1630(r3)
    bl fn_80680CF8
    divwu r0, r3, r29
    mullw r0, r0, r29
    subf r4, r0, r3
    mr r3, r31
    bl fn_802D5674
lbl_fn_802D3370_000017E0:
    lwz r0, 0x14e4(r31)
    cmpwi r0, 0x1
    bne lbl_fn_802D3370_000019C0
    mr r3, r31
    bl fn_802D6004
    cmpwi r3, 0x0
    beq lbl_fn_802D3370_000018D8
    mr r3, r31
    li r4, 0xd
    bl fn_80232B7C
    lfs f0, lbl_80884564
    li r0, -0x1
    lfs f1, lbl_8088458C
    li r29, 0x1
    stfs f0, 0x20(r1)
    addi r4, r31, 0x1588
    addi r5, r31, 0xb0
    addi r7, r1, 0x2c
    stfs f0, 0x24(r1)
    addi r8, r1, 0x20
    addi r9, r1, 0x10
    li r6, 0x0
    stfs f0, 0x28(r1)
    li r10, -0x1
    stfs f0, 0x2c(r1)
    stfs f0, 0x30(r1)
    stfs f0, 0x34(r1)
    stfs f1, 0x10(r1)
    stfs f1, 0x14(r1)
    stfs f1, 0x18(r1)
    stfs f1, 0x1c(r1)
    stw r0, 0x8(r1)
    stw r29, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    li r0, 0x0
    stw r0, 0x14e8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0x9
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f0, lbl_8088458C
    addi r3, r31, 0xb0
    stw r29, 0x3fc(r31)
    li r4, 0x0
    lfs f1, lbl_80884564
    li r5, 0x33
    stfs f0, 0x2fc(r31)
    li r6, 0x1
    lfs f2, lbl_8088455C
    li r7, 0x0
    stfs f0, 0x2e8(r31)
    li r8, 0x1
    bl fn_80097C08
    lwz r3, lbl_8087F430
    li r4, 0x32
    li r5, 0x3
    bl fn_80370AE4
lbl_fn_802D3370_000018D8:
    li r0, 0x0
    li r3, 0x1
    stw r3, 0x14e0(r31)
    stw r0, 0x14e4(r31)
    stw r0, 0x1500(r31)
    b lbl_fn_802D3370_000019CC
lbl_fn_802D3370_000018F0:
    bl fn_802D3C74
    cmpwi r3, 0x0
    bne lbl_fn_802D3370_000019C0
    b lbl_fn_802D3370_000019CC
lbl_fn_802D3370_00001900:
    lwz r0, 0x14e4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_802D3370_00001988
    li r29, 0x1
    li r30, 0x0
    stw r29, 0x1510(r3)
    stw r30, 0x14e8(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0xc
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f1, lbl_80884564
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097CCC
    lfs f0, lbl_8088458C
    addi r3, r31, 0xb0
    stw r29, 0x3fc(r31)
    li r4, 0x0
    lfs f1, lbl_80884564
    li r5, 0x14a
    stfs f0, 0x2fc(r31)
    li r6, 0x0
    lfs f2, lbl_8088455C
    li r7, 0x0
    stfs f0, 0x2e8(r31)
    li r8, 0x1
    bl fn_80097C08
    stw r30, 0x15e8(r31)
    stw r30, 0x15ec(r31)
lbl_fn_802D3370_00001988:
    lwz r0, 0x14e4(r31)
    cmpwi r0, 0x1
    bne lbl_fn_802D3370_000019C0
    li r3, 0x3
    li r0, 0x0
    stw r3, 0x14e0(r31)
    stw r0, 0x14e4(r31)
    b lbl_fn_802D3370_000019CC
lbl_fn_802D3370_000019A8:
    bl fn_802D404C
    cmpwi r3, 0x0
    bne lbl_fn_802D3370_000019C0
    li r0, 0x2
    stw r0, 0x14dc(r31)
    b lbl_fn_802D3370_000019CC
lbl_fn_802D3370_000019C0:
    lwz r3, 0x14e4(r31)
    addi r0, r3, 0x1
    stw r0, 0x14e4(r31)
lbl_fn_802D3370_000019CC:
    lwz r0, 0xc4(r1)
    lwz r31, 0xbc(r1)
    lwz r30, 0xb8(r1)
    lwz r29, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}
