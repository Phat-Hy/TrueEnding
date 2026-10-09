#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_24(void);
extern void _restgpr_26(void);
extern void _savegpr_24(void);
extern void _savegpr_26(void);
extern void fn_8000D114(void);
extern void fn_8000D124(void);
extern void fn_800109E0(void);
extern void fn_80011034(void);
extern void fn_80011410(void);
extern void fn_80013338(void);
extern void fn_800133B0(void);
extern void fn_80013410(void);
extern void fn_800616C0(void);
extern void fn_80063764(void);
extern void fn_8007708C(void);
extern void fn_800874C8(void);
extern void fn_8008771C(void);
extern void fn_80087994(void);
extern void fn_8008937C(void);
extern void fn_80092814(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800D8814(void);
extern void fn_800EB7A0(void);
extern void fn_800EC204(void);
extern void fn_800F7250(void);
extern void fn_800F7FD8(void);
extern void fn_800F7FF0(void);
extern void fn_800F8348(void);
extern void fn_800F8524(void);
extern void fn_801162A0(void);
extern void fn_8011FC10(void);
extern void fn_80121F00(void);
extern void fn_8013322C(void);
extern void fn_8013655C(void);
extern void fn_8013C504(void);
extern void fn_80145334(void);
extern void fn_80149624(void);
extern void fn_80149A30(void);
extern void fn_801513D0(void);
extern void fn_80151448(void);
extern void fn_8016E970(void);
extern void fn_801765D8(void);
extern void fn_80232B7C(void);
extern void fn_80237874(void);
extern void fn_8023A8B4(void);
extern void fn_8028AC70(void);
extern void fn_802A7964(void);
extern void fn_8030C490(void);
extern void fn_8030CBC0(void);
extern void fn_8030CF84(void);
extern void fn_80370A78(void);
extern void fn_80370AE4(void);
extern void fn_803C17FC(void);
extern void fn_803CD958(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_8068AEA4(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 lbl_80748FD0[];
extern u8 lbl_80748FE8[];

/* Small data declarations */
extern u32 lbl_8087EEF0;
extern u32 lbl_8087EF10;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F408;
extern u32 lbl_8087F430;
extern u32 lbl_80884BA8;
extern u32 lbl_80884BAC;
extern u32 lbl_80884BB4;
extern u32 lbl_80884BB8;
extern u32 lbl_80884BBC;
extern u32 lbl_80884BC0;
extern u32 lbl_80884BC4;
extern u32 lbl_80884BC8;
extern u32 lbl_80884BCC;
extern u32 lbl_80884BD0;
extern u32 lbl_80884BD4;
extern u32 lbl_80884BD8;
extern u32 lbl_80884BDC;
extern u32 lbl_80884BE0;
extern u32 lbl_80884BE4;
extern u32 lbl_80884BE8;
extern u32 lbl_80884BEC;
extern u32 lbl_80884BF0;
extern u32 lbl_80884BF4;
extern u32 lbl_80884BF8;
extern u32 lbl_80884BFC;
extern u32 lbl_80884C00;
extern u32 lbl_80884C04;
extern u32 lbl_80884C08;
extern u32 lbl_80884C0C;
extern u32 lbl_80884C10;
extern u32 lbl_80884C14;
extern u32 lbl_80884C18;
extern u32 lbl_80884C20;
extern u32 lbl_80884C24;
extern u32 lbl_80884C28;
extern u32 lbl_80884C2C;

/* Function declarations */
void fn_8030A6A0(void);
void fn_8030A848(void);
void fn_8030AF10(void);
void fn_8030B408(void);
void fn_8030B41C(void);
void fn_8030B5B0(void);
void fn_8030B74C(void);
void fn_8030B92C(void);

asm void fn_8030A6A0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    bl fn_8013655C
    cmpwi r3, 0x0
    bne lbl_fn_8030A6A0_00000188
    addi r3, r29, 0x15d4
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_8030A6A0_00000188
    addi r3, r29, 0x15f4
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_8030A6A0_00000188
    mr r30, r29
    li r31, 0x0
lbl_fn_8030A6A0_00000050:
    lwz r3, lbl_8087F408
    lwz r4, 0x14f4(r30)
    bl fn_8011FC10
    addi r31, r31, 0x1
    stw r3, 0x1500(r30)
    cmpwi r31, 0x3
    addi r30, r30, 0x4
    blt lbl_fn_8030A6A0_00000050
    lwz r4, 0x7ec(r29)
    lis r3, lbl_80748FE8@ha
    lwz r0, 0x1600(r29)
    addi r3, r3, lbl_80748FE8@l
    ori r4, r4, 0x1c0
    oris r4, r4, 0x1
    cmpwi r0, 0x0
    ori r0, r4, 0xc21d
    oris r0, r0, 0x380
    stw r0, 0x7ec(r29)
    addi r4, r3, 0x33
    bne lbl_fn_8030A6A0_000000C0
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_8030A6A0_000000C0
    addi r3, r3, 0x10
    bl fn_8008937C
    stw r3, 0x1600(r29)
    mr r30, r3
    b lbl_fn_8030A6A0_000000C4
lbl_fn_8030A6A0_000000C0:
    li r30, 0x0
lbl_fn_8030A6A0_000000C4:
    lis r31, lbl_80748FE8@ha
    mr r3, r30
    addi r31, r31, lbl_80748FE8@l
    addi r5, r29, 0x1604
    addi r4, r31, 0x39
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r30
    addi r4, r31, 0x43
    addi r5, r29, 0x15e0
    li r6, 0x0
    li r7, 0x2
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_80884BB8
    mr r3, r30
    lfs f2, lbl_80884BBC
    addi r4, r31, 0x52
    lfs f3, lbl_80884BC0
    addi r5, r29, 0x1608
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80884BB8
    mr r3, r30
    lfs f2, lbl_80884BBC
    addi r4, r31, 0x5d
    lfs f3, lbl_80884BC0
    addi r5, r29, 0x160c
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lwz r5, 0x14a8(r29)
    li r3, 0x2
    lfs f0, lbl_80884BA8
    li r0, 0x6
    rlwinm r5, r5, 0, 6, 4
    stw r3, 0x10d0(r29)
    mr r3, r29
    li r4, 0x3
    stfs f0, 0x56c(r29)
    stw r5, 0x14a8(r29)
    stw r0, 0x58c(r29)
    bl fn_8016E970
    li r3, 0x1
    b lbl_fn_8030A6A0_0000018C
lbl_fn_8030A6A0_00000188:
    li r3, 0x0
lbl_fn_8030A6A0_0000018C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8030A848(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    stfd f31, 0x90(r1)
    psq_st f31, 0x98(r1), 0, 0
    stfd f30, 0x80(r1)
    psq_st f30, 0x88(r1), 0, 0
    stw r31, 0x7c(r1)
    stw r30, 0x78(r1)
    mr r30, r3
    stw r29, 0x74(r1)
    stw r28, 0x70(r1)
    lwz r3, lbl_8087F430
    lwz r4, 0x1514(r30)
    bl fn_80370A78
    cmpwi r3, 0x0
    bne lbl_fn_8030A848_000001F8
    li r0, 0x0
    stw r0, 0xd18(r30)
    b lbl_fn_8030A848_00000840
lbl_fn_8030A848_000001F8:
    lwz r3, 0x15e0(r30)
    subi r0, r3, 0x1
    cmplwi r0, 0x1
    ble lbl_fn_8030A848_00000228
    cmpwi r3, 0x0
    bne lbl_fn_8030A848_00000248
    lwz r0, 0x12a4(r30)
    lfs f0, lbl_80884BA8
    rlwinm r0, r0, 0, 10, 8
    stfs f0, 0x1458(r30)
    stw r0, 0x12a4(r30)
    b lbl_fn_8030A848_00000248
lbl_fn_8030A848_00000228:
    lwz r3, 0x12a4(r30)
    lwz r0, 0x958(r30)
    lfs f0, lbl_80884BC4
    oris r3, r3, 0x40
    ori r0, r0, 0x10
    stfs f0, 0x1458(r30)
    stw r3, 0x12a4(r30)
    stw r0, 0x958(r30)
lbl_fn_8030A848_00000248:
    lwz r5, 0x14b4(r30)
    addi r3, r30, 0x7d4
    lfs f0, lbl_80884BA8
    li r4, 0x20
    addi r0, r5, 0x1
    stfs f0, 0x500(r30)
    stfs f0, 0x504(r30)
    stfs f0, 0x508(r30)
    stw r0, 0x14b4(r30)
    bl fn_8013322C
    lbz r0, 0x150d(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8030A848_000002D0
    lwz r3, 0x1500(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8030A848_00000298
    li r0, 0x0
    stw r0, 0xd18(r3)
    lwz r3, 0x1500(r30)
    bl fn_801765D8
lbl_fn_8030A848_00000298:
    lwz r3, 0x1504(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8030A848_000002B4
    li r0, 0x0
    stw r0, 0xd18(r3)
    lwz r3, 0x1504(r30)
    bl fn_801765D8
lbl_fn_8030A848_000002B4:
    lwz r3, 0x1508(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8030A848_000002D0
    li r0, 0x0
    stw r0, 0xd18(r3)
    lwz r3, 0x1508(r30)
    bl fn_801765D8
lbl_fn_8030A848_000002D0:
    li r0, 0x1
    stw r0, 0xd18(r30)
    b lbl_fn_8030A848_000002E4
    bl fn_8016E970
    b lbl_fn_8030A848_00000320
lbl_fn_8030A848_000002E4:
    lwz r0, 0x58c(r30)
    cmpwi r0, 0x7
    beq lbl_fn_8030A848_000002FC
    cmpwi r0, 0x8
    beq lbl_fn_8030A848_00000308
    b lbl_fn_8030A848_00000314
lbl_fn_8030A848_000002FC:
    mr r3, r30
    bl fn_8030C490
    b lbl_fn_8030A848_00000320
lbl_fn_8030A848_00000308:
    mr r3, r30
    bl fn_8030CBC0
    b lbl_fn_8030A848_00000320
lbl_fn_8030A848_00000314:
    mr r3, r30
    li r4, 0x1
    bl fn_8030CF84
lbl_fn_8030A848_00000320:
    mr r3, r30
    bl fn_80145334
    lwz r3, lbl_8087F430
    lwz r4, 0x1518(r30)
    bl fn_80370A78
    cmpwi r3, 0x1
    bne lbl_fn_8030A848_00000478
    lbz r0, 0x150c(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8030A848_00000538
    lwz r3, 0x1504(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8030A848_00000538
    lwz r0, 0x1508(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8030A848_00000538
    li r31, 0x0
    stw r31, 0xd18(r3)
    lwz r3, 0x1504(r30)
    bl fn_801765D8
    lwz r3, 0x1508(r30)
    stw r31, 0xd18(r3)
    lwz r3, 0x1508(r30)
    bl fn_801765D8
    lis r4, lbl_80748FE8@ha
    addi r3, r30, 0xb0
    addi r4, r4, lbl_80748FE8@l
    li r5, 0x0
    addi r4, r4, 0x68
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8030A848_000003A8
    li r0, 0x0
    b lbl_fn_8030A848_000003B4
lbl_fn_8030A848_000003A8:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r0, r3, r0
lbl_fn_8030A848_000003B4:
    lwz r5, 0x1504(r30)
    lis r4, lbl_80748FE8@ha
    addi r4, r4, lbl_80748FE8@l
    addi r3, r30, 0xb0
    stw r0, 0xf1c(r5)
    addi r4, r4, 0x75
    li r5, 0x0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8030A848_000003E4
    li r0, 0x0
    b lbl_fn_8030A848_000003F0
lbl_fn_8030A848_000003E4:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r0, r3, r0
lbl_fn_8030A848_000003F0:
    lwz r3, 0x1508(r30)
    addi r29, r30, 0x4
    lfs f30, lbl_80884BAC
    li r28, 0x1
    stw r0, 0xf1c(r3)
    li r31, 0x1
    lfs f31, lbl_80884BA8
lbl_fn_8030A848_0000040C:
    lwz r3, 0x1500(r29)
    li r4, 0x0
    lfs f1, lbl_80884BAC
    li r5, 0x28
    lfs f2, lbl_80884BC8
    addi r3, r3, 0xb0
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r3, 0x1500(r29)
    stfs f30, 0x2e8(r3)
    lwz r3, 0x1500(r29)
    stw r31, 0x3fc(r3)
    lwz r3, 0x1500(r29)
    stfs f31, 0x2fc(r3)
    lwz r3, 0x1500(r29)
    lwz r0, 0x12a4(r3)
    ori r0, r0, 0x8
    stw r0, 0x12a4(r3)
    lwz r3, 0x1500(r29)
    bl fn_80145334
    addi r28, r28, 0x1
    addi r29, r29, 0x4
    cmpwi r28, 0x2
    ble lbl_fn_8030A848_0000040C
    b lbl_fn_8030A848_00000538
lbl_fn_8030A848_00000478:
    cmpwi r3, 0x2
    bne lbl_fn_8030A848_00000538
    lbz r0, 0x150c(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8030A848_00000538
    lwz r3, 0x1500(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8030A848_00000538
    li r0, 0x0
    stw r0, 0xd18(r3)
    lwz r3, 0x1500(r30)
    bl fn_801765D8
    lis r4, lbl_80748FE8@ha
    addi r3, r30, 0xb0
    addi r4, r4, lbl_80748FE8@l
    li r5, 0x0
    addi r4, r4, 0x75
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8030A848_000004D0
    li r0, 0x0
    b lbl_fn_8030A848_000004DC
lbl_fn_8030A848_000004D0:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r0, r3, r0
lbl_fn_8030A848_000004DC:
    lwz r3, 0x1500(r30)
    li r4, 0x0
    lfs f1, lbl_80884BAC
    li r5, 0x2
    stw r0, 0xf1c(r3)
    li r6, 0x1
    lfs f2, lbl_80884BC8
    li r7, 0x0
    lwz r3, 0x1500(r30)
    li r8, 0x1
    addi r3, r3, 0xb0
    bl fn_80097C08
    lwz r3, 0x1500(r30)
    li r0, 0x1
    lfs f0, lbl_80884BAC
    stfs f0, 0x2e8(r3)
    lfs f0, lbl_80884BA8
    lwz r3, 0x1500(r30)
    stw r0, 0x3fc(r3)
    lwz r3, 0x1500(r30)
    stfs f0, 0x2fc(r3)
    lwz r3, 0x1500(r30)
    bl fn_80145334
lbl_fn_8030A848_00000538:
    lwz r0, 0x1604(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8030A848_00000840
    lwz r3, lbl_8087EEF0
    li r31, 0x0
    lwz r0, 0xd90(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8030A848_00000570
    addi r4, r3, 0x34
    li r5, 0x4b
    bl fn_8007708C
    cmpwi r3, 0x0
    beq lbl_fn_8030A848_00000570
    li r31, 0x1
lbl_fn_8030A848_00000570:
    cmpwi r31, 0x0
    beq lbl_fn_8030A848_00000584
    mr r3, r30
    li r4, 0x1
    bl fn_8030CF84
lbl_fn_8030A848_00000584:
    lwz r3, lbl_8087EEF0
    li r31, 0x0
    lwz r0, 0xd90(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8030A848_000005B0
    addi r4, r3, 0x34
    li r5, 0x4c
    bl fn_8007708C
    cmpwi r3, 0x0
    beq lbl_fn_8030A848_000005B0
    li r31, 0x1
lbl_fn_8030A848_000005B0:
    cmpwi r31, 0x0
    beq lbl_fn_8030A848_000007FC
    li r0, 0x8
    stw r0, 0x58c(r30)
    mr r3, r30
    li r4, 0x3
    bl fn_8016E970
    lwz r3, lbl_8087F430
    addi r7, r30, 0x1594
    lwz r4, 0x158c(r30)
    addi r6, r30, 0x15a0
    lwz r31, 0x10d8(r3)
    addi r3, r1, 0x38
    subi r0, r4, 0x1
    lfs f3, lbl_80884BAC
    mulli r0, r0, 0x30
    lwz r5, 0x9c(r31)
    lfs f0, lbl_80884BA8
    li r4, 0x79
    add r5, r5, r0
    psq_l f1, 0x4(r5), 0, 0
    lfs f2, 0xc(r5)
    stfs f2, 0x159c(r30)
    lfs f2, 0x530(r30)
    psq_st f1, 0x0(r7), 0, 0
    psq_l f1, 0x528(r30), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x15a8(r30)
    stfs f3, 0x20(r1)
    stfs f3, 0x24(r1)
    stfs f0, 0x28(r1)
    lfs f1, 0x538(r30)
    bl fn_805F8E70
    addi r4, r1, 0x20
    addi r3, r1, 0x38
    mr r5, r4
    bl fn_805F93C0
    lfs f4, lbl_80884BCC
    addi r3, r1, 0x8
    lfs f3, 0x24(r1)
    addi r5, r30, 0x15ac
    lfs f0, 0x20(r1)
    li r4, 0x0
    fmuls f8, f3, f4
    lfs f3, 0x52c(r30)
    fmuls f7, f0, f4
    lfs f0, 0x528(r30)
    lfs f5, 0x28(r1)
    li r6, 0x0
    fadds f6, f3, f8
    lwz r0, 0x14e8(r30)
    fadds f3, f0, f7
    lfs f0, 0x530(r30)
    fmuls f4, f5, f4
    stfs f6, 0xc(r1)
    stfs f3, 0x8(r1)
    slwi r0, r0, 3
    fadds f2, f0, f4
    lfs f0, lbl_80884BD0
    psq_l f1, 0x0(r3), 0, 0
    add r3, r30, r0
    psq_st f1, 0x0(r5), 0, 0
    lfs f3, 0x15b0(r30)
    stfs f2, 0x15b4(r30)
    fadds f0, f3, f0
    stfs f7, 0x14(r1)
    stfs f0, 0x15b0(r30)
    lwz r0, 0x78(r31)
    stfs f8, 0x18(r1)
    lwz r5, 0x1538(r3)
    stfs f4, 0x1c(r1)
    stfs f2, 0x10(r1)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8030A848_00000704
lbl_fn_8030A848_000006DC:
    lwz r3, 0x7c(r31)
    lwzx r0, r3, r6
    cmpw r5, r0
    bne lbl_fn_8030A848_000006F8
    mulli r0, r4, 0x28
    add r4, r3, r0
    b lbl_fn_8030A848_00000708
lbl_fn_8030A848_000006F8:
    addi r6, r6, 0x28
    addi r4, r4, 0x1
    bdnz lbl_fn_8030A848_000006DC
lbl_fn_8030A848_00000704:
    li r4, 0x0
lbl_fn_8030A848_00000708:
    psq_l f1, 0x4(r4), 0, 0
    addi r3, r30, 0x15b8
    lfs f2, 0xc(r4)
    li r4, 0x0
    lwz r0, 0x14e8(r30)
    li r6, 0x0
    psq_st f1, 0x0(r3), 0, 0
    slwi r0, r0, 3
    stfs f2, 0x15c0(r30)
    add r3, r30, r0
    lwz r0, 0x78(r31)
    lwz r5, 0x153c(r3)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8030A848_0000076C
lbl_fn_8030A848_00000744:
    lwz r3, 0x7c(r31)
    lwzx r0, r3, r6
    cmpw r5, r0
    bne lbl_fn_8030A848_00000760
    mulli r0, r4, 0x28
    add r4, r3, r0
    b lbl_fn_8030A848_00000770
lbl_fn_8030A848_00000760:
    addi r6, r6, 0x28
    addi r4, r4, 0x1
    bdnz lbl_fn_8030A848_00000744
lbl_fn_8030A848_0000076C:
    li r4, 0x0
lbl_fn_8030A848_00000770:
    psq_l f1, 0x4(r4), 0, 0
    lis r3, lbl_80748FE8@ha
    lfs f2, 0xc(r4)
    addi r5, r30, 0x15c4
    lfs f0, lbl_80884BAC
    addi r3, r3, lbl_80748FE8@l
    li r0, 0x0
    psq_st f1, 0x0(r5), 0, 0
    addi r4, r3, 0x82
    addi r3, r30, 0xb0
    stfs f2, 0x15cc(r30)
    li r5, 0x0
    stfs f0, 0x1590(r30)
    stw r0, 0x14b0(r30)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8030A848_000007BC
    li r3, 0x0
    b lbl_fn_8030A848_000007C8
lbl_fn_8030A848_000007BC:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r3, r3, r0
lbl_fn_8030A848_000007C8:
    lfs f3, 0x1c(r3)
    addi r4, r1, 0x2c
    lfs f0, 0xc(r3)
    addi r5, r30, 0x15e4
    lfs f2, 0x2c(r3)
    mr r3, r30
    stfs f0, 0x2c(r1)
    stfs f3, 0x30(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0x34(r1)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x15ec(r30)
    bl fn_800EB7A0
lbl_fn_8030A848_000007FC:
    lwz r3, lbl_8087EEF0
    li r30, 0x0
    lwz r0, 0xd90(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8030A848_00000828
    addi r4, r3, 0x34
    li r5, 0x4d
    bl fn_8007708C
    cmpwi r3, 0x0
    beq lbl_fn_8030A848_00000828
    li r30, 0x1
lbl_fn_8030A848_00000828:
    cmpwi r30, 0x0
    beq lbl_fn_8030A848_00000840
    lwz r3, lbl_8087F430
    li r4, 0x66
    li r5, 0x4
    bl fn_80370AE4
lbl_fn_8030A848_00000840:
    lwz r0, 0xa4(r1)
    psq_l f31, 0x98(r1), 0, 0
    lfd f31, 0x90(r1)
    psq_l f30, 0x88(r1), 0, 0
    lfd f30, 0x80(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    lwz r29, 0x74(r1)
    lwz r28, 0x70(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_8030AF10(void)
{
    nofralloc
    stwu r1, -0x250(r1)
    mflr r0
    stw r0, 0x254(r1)
    addi r11, r1, 0x220
    stfd f31, 0x240(r1)
    psq_st f31, 0x248(r1), 0, 0
    stfd f30, 0x230(r1)
    psq_st f30, 0x238(r1), 0, 0
    stfd f29, 0x220(r1)
    psq_st f29, 0x228(r1), 0, 0
    bl _savegpr_24
    lis r0, 0x4330
    stw r0, 0x1f0(r1)
    mr r31, r3
    stw r0, 0x1f8(r1)
    bl fn_80121F00
    lwz r4, 0x1514(r31)
    bl fn_80370A78
    cmpwi r3, 0x0
    beq lbl_fn_8030AF10_00000D38
    mr r3, r31
    bl fn_80149A30
    bl fn_80121F00
    lwz r4, 0x1518(r31)
    bl fn_80370A78
    cmpwi r3, 0x1
    bne lbl_fn_8030AF10_00000910
    lbz r0, 0x150c(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8030AF10_00000934
    lwz r3, 0x1504(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8030AF10_00000934
    lwz r0, 0x1508(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8030AF10_00000934
    bl fn_80149A30
    lwz r3, 0x1508(r31)
    bl fn_80149A30
    b lbl_fn_8030AF10_00000934
lbl_fn_8030AF10_00000910:
    cmpwi r3, 0x2
    bne lbl_fn_8030AF10_00000934
    lbz r0, 0x150c(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8030AF10_00000934
    lwz r3, 0x1500(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8030AF10_00000934
    bl fn_80149A30
lbl_fn_8030AF10_00000934:
    lwz r0, 0x1604(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8030AF10_00000D38
    lis r3, lbl_80748FD0@ha
    lis r29, lbl_80748FE8@ha
    lfd f30, lbl_80748FD0@l(r3)
    addi r29, r29, lbl_80748FE8@l
    lfs f29, lbl_80884BD8
    li r26, 0x0
    li r25, 0x0
lbl_fn_8030AF10_0000095C:
    bl fn_80121F00
    addi r4, r26, 0xc9
    bl fn_80370A78
    mr r5, r3
    addi r3, r1, 0x8
    addi r4, r29, 0x87
    crclr 6
    bl sprintf
    lfs f1, lbl_80884BAC
    addi r3, r1, 0xb0
    lfs f2, lbl_80884BB4
    fmr f3, f1
    lfs f4, lbl_80884BA8
    bl fn_800D8814
    bl fn_800F8348
    mr r28, r3
    bl fn_800F7250
    xoris r0, r25, 0x8000
    stw r0, 0x1f4(r1)
    lfs f4, lbl_80884BE0
    mr r5, r28
    lfd f0, 0x1f0(r1)
    addi r4, r1, 0x8
    fmr f5, f4
    lfs f1, lbl_80884BD4
    fsubs f0, f0, f30
    lfs f3, lbl_80884BDC
    lfs f6, lbl_80884BAC
    li r6, 0x1
    fadds f2, f29, f0
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    addi r26, r26, 0x1
    addi r25, r25, 0xa
    cmpwi r26, 0x3
    blt lbl_fn_8030AF10_0000095C
    addi r3, r1, 0x1c0
    addi r4, r31, 0x534
    bl fn_800109E0
    addi r3, r1, 0x190
    addi r4, r31, 0x534
    bl fn_800109E0
    addi r3, r1, 0x160
    addi r4, r31, 0x534
    bl fn_800109E0
    lfs f1, lbl_80884BAC
    addi r3, r1, 0x100
    lfs f3, lbl_80884BE4
    fmr f2, f1
    bl fn_8000D114
    lfs f1, lbl_80884BAC
    addi r3, r1, 0xf4
    lfs f3, lbl_80884BE4
    fmr f2, f1
    bl fn_8000D114
    lfs f1, lbl_80884BAC
    addi r3, r1, 0xe8
    lfs f3, lbl_80884BE4
    fmr f2, f1
    bl fn_8000D114
    addi r3, r1, 0x100
    addi r4, r1, 0x1c0
    bl fn_80011410
    lfs f1, lbl_80884BA8
    addi r3, r1, 0x90
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_800D8814
    bl fn_800F8348
    mr r28, r3
    addi r3, r1, 0xa0
    addi r4, r31, 0x528
    addi r5, r1, 0x100
    bl fn_80013410
    bl fn_800F7250
    lfs f1, lbl_80884BD8
    mr r6, r28
    addi r4, r31, 0x528
    addi r5, r1, 0xa0
    bl fn_80063764
    lfs f1, lbl_80884BE8
    addi r3, r1, 0x190
    bl fn_80149624
    addi r3, r1, 0xf4
    addi r4, r1, 0x190
    bl fn_80011410
    lfs f1, lbl_80884BEC
    addi r3, r1, 0x160
    bl fn_80149624
    addi r3, r1, 0xe8
    addi r4, r1, 0x160
    bl fn_80011410
    lfs f1, lbl_80884BA8
    addi r3, r1, 0x70
    lfs f2, lbl_80884BAC
    fmr f4, f1
    fmr f3, f2
    bl fn_800D8814
    bl fn_800F8348
    mr r28, r3
    addi r3, r1, 0x80
    addi r4, r31, 0x528
    addi r5, r1, 0xf4
    bl fn_80013410
    bl fn_800F7250
    lfs f1, lbl_80884BD8
    mr r6, r28
    addi r4, r31, 0x528
    addi r5, r1, 0x80
    bl fn_80063764
    lfs f1, lbl_80884BA8
    addi r3, r1, 0x50
    lfs f2, lbl_80884BAC
    fmr f4, f1
    fmr f3, f2
    bl fn_800D8814
    bl fn_800F8348
    mr r28, r3
    addi r3, r1, 0x60
    addi r4, r31, 0x528
    addi r5, r1, 0xe8
    bl fn_80013410
    bl fn_800F7250
    lfs f1, lbl_80884BD8
    mr r6, r28
    addi r4, r31, 0x528
    addi r5, r1, 0x60
    bl fn_80063764
    lis r3, lbl_80748FD0@ha
    lis r29, lbl_80748FE8@ha
    lfd f29, lbl_80748FD0@l(r3)
    mr r26, r31
    lfs f30, lbl_80884BF0
    addi r27, r31, 0x1558
    lfs f31, lbl_80884BAC
    addi r29, r29, lbl_80748FE8@l
    li r24, 0x0
    li r25, 0x64
lbl_fn_8030AF10_00000B8C:
    bl fn_80121F00
    bl fn_8013C504
    lfs f1, lbl_80884BAC
    mr r30, r3
    addi r3, r1, 0xd8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_800D8814
    xoris r0, r24, 0x8000
    stw r0, 0x1fc(r1)
    lfs f4, lbl_80884BA8
    addi r3, r1, 0xd8
    lfd f0, 0x1f8(r1)
    stw r0, 0x1f4(r1)
    fsubs f1, f0, f29
    stw r0, 0x1fc(r1)
    lfd f2, 0x1f0(r1)
    lfd f0, 0x1f8(r1)
    fmuls f1, f30, f1
    fsubs f2, f2, f29
    fsubs f0, f0, f29
    fmuls f2, f30, f2
    fmuls f3, f30, f0
    bl fn_8030B408
    mr r4, r27
    addi r3, r1, 0x40
    bl fn_80011034
    addi r3, r1, 0xcc
    addi r4, r1, 0x40
    bl fn_800F7FD8
    stfs f31, 0xcc(r1)
    addi r3, r1, 0x130
    addi r4, r1, 0xcc
    stfs f31, 0xd4(r1)
    bl fn_800109E0
    lfs f1, lbl_80884BAC
    addi r3, r1, 0xc0
    lfs f3, lbl_80884BF4
    fmr f2, f1
    bl fn_8000D114
    addi r3, r1, 0xc0
    addi r4, r1, 0x130
    bl fn_80011410
    addi r3, r1, 0xd8
    bl fn_800F8348
    lwz r4, 0x1538(r26)
    mr r28, r3
    mr r3, r30
    bl fn_800EC204
    mr r4, r3
    addi r3, r1, 0x34
    addi r4, r4, 0x4
    addi r5, r1, 0xc0
    bl fn_80013410
    lwz r4, 0x1538(r26)
    mr r3, r30
    bl fn_800EC204
    mr r30, r3
    bl fn_800F7250
    lfs f1, lbl_80884BF4
    mr r6, r28
    addi r4, r30, 0x4
    addi r5, r1, 0x34
    bl fn_80063764
    mr r4, r27
    addi r3, r1, 0x10
    bl fn_80011034
    addi r3, r1, 0x1c
    addi r4, r1, 0x10
    addi r5, r31, 0x534
    bl fn_80013338
    addi r3, r1, 0x28
    addi r4, r1, 0x1c
    bl fn_800F7FD8
    lfs f1, 0x2c(r1)
    bl fn_802A7964
    mr r5, r24
    addi r3, r1, 0x110
    addi r4, r29, 0x90
    crset 6
    bl sprintf
    addi r3, r1, 0xd8
    bl fn_800F8348
    mr r30, r3
    bl fn_800F7250
    xoris r0, r25, 0x8000
    stw r0, 0x1f4(r1)
    lfs f1, lbl_80884BF8
    mr r5, r30
    lfd f0, 0x1f0(r1)
    addi r4, r1, 0x110
    lfs f3, lbl_80884BF4
    li r6, 0x1
    fsubs f2, f0, f29
    lfs f4, lbl_80884BD0
    lfs f5, lbl_80884BE0
    li r7, 0x1
    lfs f6, lbl_80884BAC
    li r8, 0x0
    bl fn_800616C0
    addi r24, r24, 0x1
    addi r26, r26, 0x8
    cmpwi r24, 0x4
    addi r25, r25, 0xa
    addi r27, r27, 0xc
    blt lbl_fn_8030AF10_00000B8C
lbl_fn_8030AF10_00000D38:
    addi r11, r1, 0x220
    psq_l f31, 0x248(r1), 0, 0
    lfd f31, 0x240(r1)
    psq_l f30, 0x238(r1), 0, 0
    lfd f30, 0x230(r1)
    psq_l f29, 0x228(r1), 0, 0
    lfd f29, 0x220(r1)
    bl _restgpr_24
    lwz r0, 0x254(r1)
    mtlr r0
    addi r1, r1, 0x250
    blr
}

asm void fn_8030B408(void)
{
    nofralloc
    stfs f1, 0x0(r3)
    stfs f2, 0x4(r3)
    stfs f3, 0x8(r3)
    stfs f4, 0xc(r3)
    blr
}

asm void fn_8030B41C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r30, 0x28(r1)
    mr r30, r4
    lwz r0, 0x15e0(r3)
    cmpwi r0, 0x1
    beq lbl_fn_8030B41C_00000DB8
    cmpwi r0, 0x2
    beq lbl_fn_8030B41C_00000DEC
    cmpwi r0, 0x0
    beq lbl_fn_8030B41C_00000DEC
    b lbl_fn_8030B41C_00000EF8
lbl_fn_8030B41C_00000DB8:
    lwz r3, 0x8(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8030B41C_00000DDC
    lwz r0, 0x4(r3)
    cmpwi r0, 0x13c
    bne lbl_fn_8030B41C_00000DDC
    lwz r0, 0xc(r4)
    ori r0, r0, 0x880
    stw r0, 0xc(r4)
lbl_fn_8030B41C_00000DDC:
    mr r3, r31
    mr r4, r30
    bl fn_801513D0
    b lbl_fn_8030B41C_00000EF8
lbl_fn_8030B41C_00000DEC:
    lwz r5, 0x8(r4)
    cmpwi r5, 0x0
    beq lbl_fn_8030B41C_00000E1C
    lwz r0, 0x4(r5)
    cmpwi r0, 0x13c
    beq lbl_fn_8030B41C_00000E0C
    cmpwi r0, 0x232c
    bne lbl_fn_8030B41C_00000E1C
lbl_fn_8030B41C_00000E0C:
    lwz r0, 0xc(r4)
    ori r0, r0, 0x800
    stw r0, 0xc(r4)
    b lbl_fn_8030B41C_00000E30
lbl_fn_8030B41C_00000E1C:
    li r3, 0x0
    li r0, 0x1
    stw r3, 0x68(r4)
    stw r0, 0x90(r4)
    b lbl_fn_8030B41C_00000EF8
lbl_fn_8030B41C_00000E30:
    lis r4, lbl_80748FE8@ha
    li r5, 0x0
    addi r4, r4, lbl_80748FE8@l
    addi r3, r3, 0xb0
    addi r4, r4, 0x9a
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8030B41C_00000E58
    li r4, 0x0
    b lbl_fn_8030B41C_00000E64
lbl_fn_8030B41C_00000E58:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r4, r3, r0
lbl_fn_8030B41C_00000E64:
    lfs f3, 0x2c(r4)
    addi r3, r1, 0x14
    lfs f4, 0x1c(r4)
    lfs f5, 0xc(r4)
    lfs f2, 0x24(r30)
    lfs f1, 0x20(r30)
    lfs f0, 0x1c(r30)
    fsubs f2, f2, f3
    fsubs f1, f1, f4
    stfs f5, 0x8(r1)
    fsubs f0, f0, f5
    stfs f4, 0xc(r1)
    stfs f3, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f1, 0x18(r1)
    stfs f2, 0x1c(r1)
    bl fn_805F9920
    lfs f0, lbl_80884C08
    fcmpo cr0, f1, f0
    bge lbl_fn_8030B41C_00000EC0
    lwz r0, 0xc(r30)
    oris r0, r0, 0x8000
    stw r0, 0xc(r30)
lbl_fn_8030B41C_00000EC0:
    mr r3, r31
    mr r4, r30
    bl fn_80151448
    lwz r12, 0x0(r31)
    mr r3, r31
    mr r4, r30
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r0, 0x15e0(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8030B41C_00000EF8
    lfs f0, lbl_80884BF4
    stfs f0, 0x8c4(r31)
lbl_fn_8030B41C_00000EF8:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8030B5B0(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    stw r30, 0x48(r1)
    mr r30, r3
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_8030B5B0_00001024
    lbz r0, 0x14f1(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8030B5B0_00001094
    li r31, 0x1
    stb r31, 0x14f1(r3)
    li r4, 0xcf
    li r5, 0x1
    lwz r3, lbl_8087F430
    bl fn_80370AE4
    lwz r3, lbl_8087F430
    li r4, 0x66
    bl fn_80370A78
    mr r4, r3
    lwz r3, lbl_8087F430
    addi r5, r4, 0x1
    li r4, 0x66
    bl fn_80370AE4
    lfs f1, lbl_80884BAC
    addi r3, r30, 0xb0
    lfs f2, lbl_80884BC8
    li r4, 0x0
    li r5, 0x33
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r3, lbl_8087F430
    li r4, 0x66
    bl fn_80370A78
    cmpwi r3, 0x3
    bgt lbl_fn_8030B5B0_00001094
    mr r3, r30
    li r4, 0x64
    bl fn_80232B7C
    lfs f0, lbl_80884BAC
    li r0, -0x1
    lfs f1, lbl_80884BA8
    addi r4, r30, 0x15d4
    stfs f0, 0x1c(r1)
    addi r5, r30, 0xb0
    addi r7, r1, 0x10
    addi r8, r1, 0x1c
    stfs f0, 0x20(r1)
    addi r9, r1, 0x28
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x24(r1)
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f1, 0x28(r1)
    stfs f1, 0x2c(r1)
    stfs f1, 0x30(r1)
    stfs f1, 0x34(r1)
    stw r0, 0x8(r1)
    stw r31, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    b lbl_fn_8030B5B0_00001094
lbl_fn_8030B5B0_00001024:
    lwz r0, 0x940(r3)
    lis r5, 0x4330
    lwz r6, 0x68(r4)
    lis r4, lbl_80748FD0@ha
    xoris r0, r0, 0x8000
    stw r0, 0x44(r1)
    xoris r0, r6, 0x8000
    lfd f3, lbl_80748FD0@l(r4)
    stw r5, 0x40(r1)
    lfs f0, lbl_80884C0C
    lfd f1, 0x40(r1)
    stw r0, 0x3c(r1)
    fsubs f1, f1, f3
    stw r5, 0x38(r1)
    lfd f2, 0x38(r1)
    fmuls f0, f0, f1
    fsubs f1, f2, f3
    fcmpo cr0, f1, f0
    ble lbl_fn_8030B5B0_00001094
    lfs f1, lbl_80884BAC
    li r4, 0x0
    lfs f2, lbl_80884BC8
    li r5, 0x33
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    addi r3, r3, 0xb0
    bl fn_80097C08
lbl_fn_8030B5B0_00001094:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8030B74C(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    lfs f0, lbl_80884BA8
    addi r5, r4, 0xc
    stw r0, 0xc4(r1)
    addi r6, r4, 0x18
    fcmpo cr0, f1, f0
    addi r7, r4, 0x24
    stfd f31, 0xb0(r1)
    psq_st f31, 0xb8(r1), 0, 0
    stfd f30, 0xa0(r1)
    psq_st f30, 0xa8(r1), 0, 0
    stfd f29, 0x90(r1)
    psq_st f29, 0x98(r1), 0, 0
    fmr f29, f1
    stw r31, 0x8c(r1)
    mr r31, r4
    stw r30, 0x88(r1)
    mr r30, r3
    addi r3, r1, 0x70
    bge lbl_fn_8030B74C_00001104
    b lbl_fn_8030B74C_00001108
lbl_fn_8030B74C_00001104:
    fmr f1, f0
lbl_fn_8030B74C_00001108:
    bl fn_8028AC70
    addi r3, r1, 0x64
    addi r4, r1, 0x70
    addi r5, r30, 0x528
    bl fn_80013338
    addi r3, r1, 0x64
    bl fn_800F7FF0
    addi r3, r1, 0x58
    addi r4, r1, 0x64
    bl fn_80011034
    addi r3, r30, 0x528
    addi r4, r1, 0x70
    bl fn_8000D124
    mr r5, r31
    addi r3, r1, 0x4c
    addi r4, r31, 0xc
    bl fn_80013338
    addi r3, r1, 0x40
    addi r4, r31, 0x18
    addi r5, r31, 0xc
    bl fn_80013338
    addi r3, r1, 0x34
    addi r4, r31, 0x24
    addi r5, r31, 0x18
    bl fn_80013338
    addi r3, r1, 0x4c
    bl fn_801162A0
    lfs f0, lbl_80884C10
    fcmpo cr0, f1, f0
    bge lbl_fn_8030B74C_0000118C
    addi r3, r1, 0x4c
    addi r4, r1, 0x40
    bl fn_8000D124
lbl_fn_8030B74C_0000118C:
    addi r3, r1, 0x34
    bl fn_801162A0
    lfs f0, lbl_80884C10
    fcmpo cr0, f1, f0
    bge lbl_fn_8030B74C_000011AC
    addi r3, r1, 0x34
    addi r4, r1, 0x40
    bl fn_8000D124
lbl_fn_8030B74C_000011AC:
    addi r3, r1, 0x4c
    bl fn_800F7FF0
    addi r3, r1, 0x40
    bl fn_800F7FF0
    addi r3, r1, 0x34
    bl fn_800F7FF0
    addi r3, r1, 0x28
    addi r4, r1, 0x4c
    bl fn_80011034
    lfs f31, 0x2c(r1)
    addi r3, r1, 0x1c
    addi r4, r1, 0x40
    bl fn_80011034
    lfs f30, 0x20(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0x34
    bl fn_80011034
    fsubs f1, f30, f31
    lfs f31, 0x14(r1)
    bl fn_800133B0
    stfs f1, 0xc(r1)
    fsubs f1, f31, f30
    bl fn_800133B0
    stfs f1, 0x8(r1)
    fmr f1, f29
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_800F8524
    fneg f4, f1
    lfs f1, lbl_80884C14
    lfs f3, 0x15d0(r30)
    lfs f2, 0x53c(r30)
    fmuls f4, f4, f1
    lfs f0, lbl_80884BC8
    fmuls f1, f3, f1
    fadds f4, f4, f3
    stfs f1, 0x15d0(r30)
    lfs f3, 0x58(r1)
    fsubs f1, f4, f2
    stfs f3, 0x534(r30)
    lfs f3, 0x5c(r1)
    fmadds f0, f0, f1, f2
    stfs f3, 0x538(r30)
    stfs f0, 0x53c(r30)
    psq_l f31, 0xb8(r1), 0, 0
    lfd f31, 0xb0(r1)
    psq_l f30, 0xa8(r1), 0, 0
    lfd f30, 0xa0(r1)
    psq_l f29, 0x98(r1), 0, 0
    lfd f29, 0x90(r1)
    lwz r31, 0x8c(r1)
    lwz r30, 0x88(r1)
    lwz r0, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

asm void fn_8030B92C(void)
{
    nofralloc
    stwu r1, -0x2e0(r1)
    mflr r0
    stw r0, 0x2e4(r1)
    addi r11, r1, 0x2c0
    stfd f31, 0x2d0(r1)
    psq_st f31, 0x2d8(r1), 0, 0
    stfd f30, 0x2c0(r1)
    psq_st f30, 0x2c8(r1), 0, 0
    bl _savegpr_26
    lfs f3, lbl_80884C18
    mr r31, r3
    lfs f4, 0x14c4(r3)
    lfs f0, lbl_80884C20
    fsubs f3, f3, f4
    lwz r4, 0x1524(r3)
    fmadds f0, f0, f3, f4
    stfs f0, 0x14c4(r3)
    lwz r3, lbl_8087F430
    lwz r3, 0x10d8(r3)
    bl fn_803C17FC
    lwz r5, lbl_8087F430
    mr r26, r3
    lwz r4, 0x1528(r31)
    lwz r3, 0x10d8(r5)
    bl fn_803C17FC
    lwz r5, lbl_8087F430
    mr r27, r3
    lwz r29, 0x1588(r31)
    subi r4, r27, 0x1
    lwz r3, 0x10d8(r5)
    subi r0, r29, 0x1
    lwz r28, 0x158c(r31)
    lwz r3, 0xa4(r3)
    slwi r0, r0, 3
    add r3, r3, r0
    bl fn_803CD958
    clrlwi. r30, r3, 16
    bne lbl_fn_8030B92C_00001328
    mr r30, r26
lbl_fn_8030B92C_00001328:
    lwz r3, lbl_8087F430
    subi r0, r30, 0x1
    slwi r0, r0, 3
    subi r4, r27, 0x1
    lwz r3, 0x10d8(r3)
    lwz r3, 0xa4(r3)
    add r3, r3, r0
    bl fn_803CD958
    clrlwi. r4, r3, 16
    bne lbl_fn_8030B92C_00001354
    mr r4, r26
lbl_fn_8030B92C_00001354:
    lwz r7, lbl_8087F430
    subi r5, r28, 0x1
    mulli r0, r5, 0x30
    addi r8, r1, 0x278
    lwz r6, 0x10d8(r7)
    subi r5, r29, 0x1
    addi r3, r1, 0x104
    lwz r6, 0x9c(r6)
    add r6, r6, r0
    lfs f2, 0xc(r6)
    mulli r0, r5, 0x30
    psq_l f1, 0x4(r6), 0, 0
    subi r5, r30, 0x1
    psq_st f1, 0x0(r8), 0, 0
    addi r8, r1, 0x284
    stfs f2, 0x280(r1)
    lwz r6, 0x10d8(r7)
    lwz r6, 0x9c(r6)
    add r6, r6, r0
    lfs f2, 0xc(r6)
    mulli r0, r5, 0x30
    psq_l f1, 0x4(r6), 0, 0
    subi r5, r4, 0x1
    psq_st f1, 0x0(r8), 0, 0
    addi r8, r1, 0x290
    stfs f2, 0x28c(r1)
    lwz r6, 0x10d8(r7)
    lwz r6, 0x9c(r6)
    add r6, r6, r0
    lfs f2, 0xc(r6)
    mulli r0, r5, 0x30
    psq_l f1, 0x4(r6), 0, 0
    psq_st f1, 0x0(r8), 0, 0
    addi r8, r1, 0x29c
    stfs f2, 0x298(r1)
    lwz r6, 0x10d8(r7)
    lwz r6, 0x9c(r6)
    add r6, r6, r0
    lfs f2, 0xc(r6)
    psq_l f1, 0x4(r6), 0, 0
    psq_st f1, 0x0(r8), 0, 0
    lfs f3, 0x298(r1)
    lfs f0, 0x28c(r1)
    lfs f5, 0x294(r1)
    fsubs f6, f3, f0
    lfs f4, 0x288(r1)
    lfs f3, 0x290(r1)
    lfs f0, 0x284(r1)
    fsubs f4, f5, f4
    stfs f2, 0x2a4(r1)
    fsubs f0, f3, f0
    stfs f4, 0x108(r1)
    stfs f0, 0x104(r1)
    stfs f6, 0x10c(r1)
    bl fn_805F9940
    lfs f3, 0x14c4(r31)
    mr r3, r31
    lfs f0, 0x1590(r31)
    addi r4, r1, 0x278
    fdivs f3, f3, f1
    fadds f1, f0, f3
    stfs f1, 0x1590(r31)
    bl fn_8030B74C
    lfs f3, 0x1590(r31)
    lfs f0, lbl_80884BA8
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_8030B92C_00001A6C
    lwz r3, 0x2dc(r31)
    lwz r0, 0x1588(r31)
    lfs f0, lbl_80884BAC
    cmpwi r3, 0x14
    stw r0, 0x158c(r31)
    stw r30, 0x1588(r31)
    stfs f0, 0x1590(r31)
    bne lbl_fn_8030B92C_00001AC8
    lfs f5, 0x298(r1)
    addi r3, r1, 0x11c
    lfs f3, 0x28c(r1)
    lfs f0, 0x2a4(r1)
    fsubs f6, f5, f3
    lfs f4, 0x294(r1)
    fsubs f7, f0, f5
    lfs f3, 0x288(r1)
    lfs f0, 0x2a0(r1)
    fsubs f5, f4, f3
    fsubs f8, f0, f4
    lfs f4, 0x290(r1)
    lfs f3, 0x284(r1)
    lfs f0, 0x29c(r1)
    fsubs f3, f4, f3
    stfs f5, 0x120(r1)
    fsubs f0, f0, f4
    stfs f3, 0x11c(r1)
    stfs f6, 0x124(r1)
    stfs f0, 0x110(r1)
    stfs f8, 0x114(r1)
    stfs f7, 0x118(r1)
    bl fn_805F9920
    lfs f0, lbl_80884C24
    fcmpo cr0, f1, f0
    ble lbl_fn_8030B92C_00001AC8
    addi r3, r1, 0x110
    bl fn_805F9920
    lfs f0, lbl_80884C24
    fcmpo cr0, f1, f0
    ble lbl_fn_8030B92C_00001AC8
    addi r3, r1, 0x11c
    mr r4, r3
    bl fn_805F98D0
    addi r3, r1, 0x110
    mr r4, r3
    bl fn_805F98D0
    lfs f2, 0x118(r1)
    addi r3, r1, 0x110
    lfs f0, lbl_80884BFC
    addi r26, r1, 0xf8
    fabs f3, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r26), 0, 0
    frsp f3, f3
    stfs f2, 0x100(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_8030B92C_00001568
    lfs f3, 0xf8(r1)
    lfs f0, lbl_80884BAC
    fcmpo cr0, f3, f0
    ble lbl_fn_8030B92C_0000155C
    lfs f0, lbl_80884C00
    b lbl_fn_8030B92C_00001560
lbl_fn_8030B92C_0000155C:
    lfs f0, lbl_80884C04
lbl_fn_8030B92C_00001560:
    stfs f0, 0xd8(r1)
    b lbl_fn_8030B92C_0000157C
lbl_fn_8030B92C_00001568:
    frsp f2, f2
    lfs f1, 0xf8(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0xd8(r1)
lbl_fn_8030B92C_0000157C:
    lfs f0, 0xd8(r1)
    addi r3, r1, 0x208
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80884BAC
    addi r4, r1, 0xc8
    lfs f30, 0x210(r1)
    mr r5, r4
    lfs f31, 0x20c(r1)
    addi r3, r1, 0x238
    lfs f13, 0x208(r1)
    lfs f12, 0x220(r1)
    lfs f11, 0x21c(r1)
    lfs f10, 0x218(r1)
    lfs f9, 0x230(r1)
    lfs f8, 0x22c(r1)
    lfs f7, 0x228(r1)
    lfs f6, 0x234(r1)
    lfs f5, 0x224(r1)
    lfs f4, 0x214(r1)
    lfs f0, lbl_80884BA8
    psq_l f1, 0x0(r26), 0, 0
    lfs f2, 0x100(r1)
    stfs f3, 0x268(r1)
    stfs f3, 0x26c(r1)
    stfs f3, 0x270(r1)
    stfs f0, 0x274(r1)
    stfs f13, 0x98(r1)
    stfs f31, 0x9c(r1)
    stfs f30, 0xa0(r1)
    stfs f13, 0x238(r1)
    stfs f31, 0x23c(r1)
    stfs f30, 0x240(r1)
    stfs f10, 0xa4(r1)
    stfs f11, 0xa8(r1)
    stfs f12, 0xac(r1)
    stfs f10, 0x248(r1)
    stfs f11, 0x24c(r1)
    stfs f12, 0x250(r1)
    stfs f7, 0xb0(r1)
    stfs f8, 0xb4(r1)
    stfs f9, 0xb8(r1)
    stfs f7, 0x258(r1)
    stfs f8, 0x25c(r1)
    stfs f9, 0x260(r1)
    stfs f4, 0xbc(r1)
    stfs f5, 0xc0(r1)
    stfs f6, 0xc4(r1)
    stfs f4, 0x244(r1)
    stfs f5, 0x254(r1)
    stfs f6, 0x264(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0xd0(r1)
    bl fn_805F9750
    lfs f2, 0xd0(r1)
    lfs f0, lbl_80884BFC
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8030B92C_00001698
    lfs f3, 0xcc(r1)
    lfs f0, lbl_80884BAC
    fcmpo cr0, f3, f0
    ble lbl_fn_8030B92C_00001688
    lfs f0, lbl_80884C00
    b lbl_fn_8030B92C_0000168C
lbl_fn_8030B92C_00001688:
    lfs f0, lbl_80884C04
lbl_fn_8030B92C_0000168C:
    fneg f0, f0
    stfs f0, 0xd4(r1)
    b lbl_fn_8030B92C_000016AC
lbl_fn_8030B92C_00001698:
    lfs f1, 0xcc(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0xd4(r1)
lbl_fn_8030B92C_000016AC:
    lfs f3, lbl_80884BAC
    addi r3, r1, 0xd4
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x11c
    fmr f2, f3
    psq_st f1, 0x0(r26), 0, 0
    lfs f0, lbl_80884BFC
    addi r26, r1, 0xec
    stfs f2, 0x100(r1)
    lfs f2, 0x124(r1)
    psq_l f1, 0x0(r3), 0, 0
    fabs f4, f2
    stfs f3, 0xdc(r1)
    psq_st f1, 0x0(r26), 0, 0
    frsp f4, f4
    stfs f2, 0xf4(r1)
    fcmpo cr0, f4, f0
    bge lbl_fn_8030B92C_00001714
    lfs f0, 0xec(r1)
    fcmpo cr0, f0, f3
    ble lbl_fn_8030B92C_00001708
    lfs f0, lbl_80884C00
    b lbl_fn_8030B92C_0000170C
lbl_fn_8030B92C_00001708:
    lfs f0, lbl_80884C04
lbl_fn_8030B92C_0000170C:
    stfs f0, 0x90(r1)
    b lbl_fn_8030B92C_00001728
lbl_fn_8030B92C_00001714:
    frsp f2, f2
    lfs f1, 0xec(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x90(r1)
lbl_fn_8030B92C_00001728:
    lfs f0, 0x90(r1)
    addi r3, r1, 0x198
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80884BAC
    addi r4, r1, 0x80
    lfs f31, 0x1a0(r1)
    mr r5, r4
    lfs f30, 0x19c(r1)
    addi r3, r1, 0x1c8
    lfs f13, 0x198(r1)
    lfs f12, 0x1b0(r1)
    lfs f11, 0x1ac(r1)
    lfs f10, 0x1a8(r1)
    lfs f9, 0x1c0(r1)
    lfs f8, 0x1bc(r1)
    lfs f7, 0x1b8(r1)
    lfs f6, 0x1c4(r1)
    lfs f5, 0x1b4(r1)
    lfs f4, 0x1a4(r1)
    lfs f0, lbl_80884BA8
    psq_l f1, 0x0(r26), 0, 0
    lfs f2, 0xf4(r1)
    stfs f3, 0x1f8(r1)
    stfs f3, 0x1fc(r1)
    stfs f3, 0x200(r1)
    stfs f0, 0x204(r1)
    stfs f13, 0x50(r1)
    stfs f30, 0x54(r1)
    stfs f31, 0x58(r1)
    stfs f13, 0x1c8(r1)
    stfs f30, 0x1cc(r1)
    stfs f31, 0x1d0(r1)
    stfs f10, 0x5c(r1)
    stfs f11, 0x60(r1)
    stfs f12, 0x64(r1)
    stfs f10, 0x1d8(r1)
    stfs f11, 0x1dc(r1)
    stfs f12, 0x1e0(r1)
    stfs f7, 0x68(r1)
    stfs f8, 0x6c(r1)
    stfs f9, 0x70(r1)
    stfs f7, 0x1e8(r1)
    stfs f8, 0x1ec(r1)
    stfs f9, 0x1f0(r1)
    stfs f4, 0x74(r1)
    stfs f5, 0x78(r1)
    stfs f6, 0x7c(r1)
    stfs f4, 0x1d4(r1)
    stfs f5, 0x1e4(r1)
    stfs f6, 0x1f4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x88(r1)
    bl fn_805F9750
    lfs f2, 0x88(r1)
    lfs f0, lbl_80884BFC
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8030B92C_00001844
    lfs f3, 0x84(r1)
    lfs f0, lbl_80884BAC
    fcmpo cr0, f3, f0
    ble lbl_fn_8030B92C_00001834
    lfs f0, lbl_80884C00
    b lbl_fn_8030B92C_00001838
lbl_fn_8030B92C_00001834:
    lfs f0, lbl_80884C04
lbl_fn_8030B92C_00001838:
    fneg f0, f0
    stfs f0, 0x8c(r1)
    b lbl_fn_8030B92C_00001858
lbl_fn_8030B92C_00001844:
    lfs f1, 0x84(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x8c(r1)
lbl_fn_8030B92C_00001858:
    addi r3, r1, 0x8c
    lfs f5, lbl_80884BAC
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r26), 0, 0
    fmr f2, f5
    lfs f4, 0xf8(r1)
    lfs f3, 0xec(r1)
    lfs f0, lbl_80884C28
    fsubs f3, f4, f3
    stfs f5, 0x94(r1)
    stfs f2, 0xf4(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_8030B92C_00001AC8
    lfs f2, 0x118(r1)
    addi r3, r1, 0x110
    lfs f0, lbl_80884BFC
    addi r26, r1, 0xe0
    fabs f3, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r26), 0, 0
    frsp f3, f3
    stfs f2, 0xe8(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_8030B92C_000018D8
    lfs f0, 0xe0(r1)
    fcmpo cr0, f0, f5
    ble lbl_fn_8030B92C_000018CC
    lfs f0, lbl_80884C00
    b lbl_fn_8030B92C_000018D0
lbl_fn_8030B92C_000018CC:
    lfs f0, lbl_80884C04
lbl_fn_8030B92C_000018D0:
    stfs f0, 0x48(r1)
    b lbl_fn_8030B92C_000018EC
lbl_fn_8030B92C_000018D8:
    frsp f2, f2
    lfs f1, 0xe0(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_8030B92C_000018EC:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x128
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80884BAC
    addi r4, r1, 0x38
    lfs f31, 0x130(r1)
    mr r5, r4
    lfs f30, 0x12c(r1)
    addi r3, r1, 0x158
    lfs f13, 0x128(r1)
    lfs f12, 0x140(r1)
    lfs f11, 0x13c(r1)
    lfs f10, 0x138(r1)
    lfs f9, 0x150(r1)
    lfs f8, 0x14c(r1)
    lfs f7, 0x148(r1)
    lfs f6, 0x154(r1)
    lfs f5, 0x144(r1)
    lfs f4, 0x134(r1)
    lfs f0, lbl_80884BA8
    psq_l f1, 0x0(r26), 0, 0
    lfs f2, 0xe8(r1)
    stfs f3, 0x188(r1)
    stfs f3, 0x18c(r1)
    stfs f3, 0x190(r1)
    stfs f0, 0x194(r1)
    stfs f13, 0x8(r1)
    stfs f30, 0xc(r1)
    stfs f31, 0x10(r1)
    stfs f13, 0x158(r1)
    stfs f30, 0x15c(r1)
    stfs f31, 0x160(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0x168(r1)
    stfs f11, 0x16c(r1)
    stfs f12, 0x170(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0x178(r1)
    stfs f8, 0x17c(r1)
    stfs f9, 0x180(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0x164(r1)
    stfs f5, 0x174(r1)
    stfs f6, 0x184(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80884BFC
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8030B92C_00001A08
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80884BAC
    fcmpo cr0, f3, f0
    ble lbl_fn_8030B92C_000019F8
    lfs f0, lbl_80884C00
    b lbl_fn_8030B92C_000019FC
lbl_fn_8030B92C_000019F8:
    lfs f0, lbl_80884C04
lbl_fn_8030B92C_000019FC:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_8030B92C_00001A1C
lbl_fn_8030B92C_00001A08:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_8030B92C_00001A1C:
    addi r3, r1, 0x44
    lfs f2, lbl_80884BAC
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r26), 0, 0
    lfs f0, lbl_80884C2C
    lfs f3, 0xe0(r1)
    stfs f2, 0x4c(r1)
    fcmpo cr0, f3, f0
    stfs f2, 0xe8(r1)
    bge lbl_fn_8030B92C_00001AC8
    fmr f1, f2
    lfs f2, lbl_80884BC8
    addi r3, r31, 0xb0
    li r4, 0x0
    li r5, 0x13f
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_8030B92C_00001AC8
lbl_fn_8030B92C_00001A6C:
    lwz r0, 0x2dc(r31)
    cmpwi r0, 0x14
    beq lbl_fn_8030B92C_00001AC8
    lfs f30, 0x2e4(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f30, f1
    cror eq, gt, eq
    bne lbl_fn_8030B92C_00001AC8
    lbz r0, 0x14f1(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    li r5, 0x14
    cmpwi r0, 0x0
    beq lbl_fn_8030B92C_00001AB0
    li r5, 0x2e
lbl_fn_8030B92C_00001AB0:
    lfs f1, lbl_80884BAC
    li r6, 0x1
    lfs f2, lbl_80884BC8
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
lbl_fn_8030B92C_00001AC8:
    addi r11, r1, 0x2c0
    psq_l f31, 0x2d8(r1), 0, 0
    lfd f31, 0x2d0(r1)
    psq_l f30, 0x2c8(r1), 0, 0
    lfd f30, 0x2c0(r1)
    bl _restgpr_26
    lwz r0, 0x2e4(r1)
    mtlr r0
    addi r1, r1, 0x2e0
    blr
}
