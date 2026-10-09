#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_19(void);
extern void _savegpr_19(void);
extern void fn_8003EA3C(void);
extern void fn_8004D388(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_800F8548(void);
extern void fn_800F8574(void);
extern void fn_800F8C6C(void);
extern void fn_800FAB80(void);
extern void fn_80108C10(void);
extern void fn_80144710(void);
extern void fn_80148B0C(void);
extern void fn_80155D70(void);
extern void fn_8015CF98(void);
extern void fn_8015D2A0(void);
extern void fn_8015D5B0(void);
extern void fn_8016E970(void);
extern void fn_8016F3D0(void);
extern void fn_80176548(void);
extern void fn_801781B0(void);
extern void fn_8017A450(void);
extern void fn_80219E6C(void);
extern void fn_80232B7C(void);
extern void fn_80239DAC(void);
extern void fn_8023A8B4(void);
extern void fn_80267134(void);
extern void fn_8026AF78(void);
extern void fn_8026B008(void);
extern void fn_8026B118(void);
extern void fn_8026B430(void);
extern void fn_8026B748(void);
extern void fn_8026B9F0(void);
extern void fn_8026BB08(void);
extern void fn_8026BE2C(void);
extern void fn_8026C150(void);
extern void fn_8026C2C0(void);
extern void fn_8026CC28(void);
extern void fn_8026CDB4(void);
extern void fn_8026D058(void);
extern void fn_8026D0F8(void);
extern void fn_8026F9BC(void);
extern void fn_80370AE4(void);
extern void fn_8059C330(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F9920(void);
extern void fn_805F9990(void);
extern void fn_8068A850(void);
extern void fn_8068AEA4(void);

/* External data declarations */
extern u8 jumptable_80784D8C[];
extern u8 lbl_807445D8[];
extern u8 lbl_807445E0[];
extern u8 lbl_80744608[];
extern u8 lbl_807C6B90[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F8A0;
extern u32 lbl_8087F9E8;
extern u32 lbl_80883670;
extern u32 lbl_80883674;
extern u32 lbl_80883684;
extern u32 lbl_8088368C;
extern u32 lbl_80883690;
extern u32 lbl_80883694;
extern u32 lbl_80883698;
extern u32 lbl_808836AC;
extern u32 lbl_808836C0;
extern u32 lbl_808836C8;
extern u32 lbl_808836D0;
extern u32 lbl_808836E4;
extern u32 lbl_808836EC;
extern u32 lbl_808836F4;
extern u32 lbl_808836F8;
extern u32 lbl_808836FC;
extern u32 lbl_80883700;
extern u32 lbl_80883704;
extern u32 lbl_80883708;
extern u32 lbl_8088370C;
extern u32 lbl_80883710;
extern u32 lbl_80883714;
extern u32 lbl_80883718;
extern u32 lbl_8088371C;
extern u32 lbl_80883720;
extern u32 lbl_80883724;
extern u32 lbl_80883728;
extern u32 lbl_8088372C;
extern u32 lbl_80883730;
extern u32 lbl_80883734;
extern u32 lbl_80883738;
extern u32 lbl_8088373C;
extern u32 lbl_80883740;
extern u32 lbl_80883744;
extern u32 lbl_80883748;

/* Function declarations */
void fn_80269168(void);
void fn_802692B4(void);
void fn_802696F8(void);
void fn_80269CBC(void);
void fn_8026A010(void);
void fn_8026A34C(void);
void fn_8026A4FC(void);
void fn_8026A5BC(void);
void fn_8026A628(void);
void fn_8026A774(void);
void fn_8026A7AC(void);
void fn_8026A828(void);
void fn_8026A8E4(void);
void fn_8026A9A0(void);

asm void fn_80269168(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    psq_st f31, 0x18(r1), 0, 0
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lfs f31, 0x2e4(r3)
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_80269168_000000A0
    li r31, 0x0
    stw r31, 0x14bc(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r5, 0x12a4(r30)
    li r0, 0x6
    stw r3, 0x590(r30)
    mr r3, r30
    rlwinm r5, r5, 0, 27, 25
    li r4, 0x3
    stw r31, 0x14c4(r30)
    stw r5, 0x12a4(r30)
    stw r0, 0x58c(r30)
    bl fn_8016E970
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x64
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x65
    li r6, 0x1
    bl fn_80239DAC
    b lbl_fn_80269168_0000012C
lbl_fn_80269168_000000A0:
    lfs f1, 0x2e4(r30)
    lfs f0, lbl_808836F4
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_80269168_0000012C
    lfs f0, lbl_808836F8
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_80269168_0000012C
    lwz r0, 0x14ec(r30)
    cmpwi r0, 0x0
    ble lbl_fn_80269168_000000F0
    lwz r0, 0x14bc(r30)
    cmpwi r0, 0xf
    bne lbl_fn_80269168_000000F0
    lis r4, lbl_80744608@ha
    mr r3, r30
    addi r4, r4, lbl_80744608@l
    addi r4, r4, 0x1f1
    bl fn_8026F9BC
lbl_fn_80269168_000000F0:
    li r3, 0x613
    bl fn_80219E6C
    mr r31, r3
    mr r3, r30
    bl fn_80144710
    lwz r3, lbl_8087F048
    mr r6, r30
    lwz r8, 0x590(r30)
    mr r7, r31
    lfs f1, lbl_80883674
    li r4, 0x0
    li r5, 0x0
    li r9, 0x1e
    li r10, -0x1
    bl fn_800F8C6C
lbl_fn_80269168_0000012C:
    lwz r0, 0x24(r1)
    psq_l f31, 0x18(r1), 0, 0
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_802692B4(void)
{
    nofralloc
    stwu r1, -0x220(r1)
    mflr r0
    stw r0, 0x224(r1)
    addi r11, r1, 0x190
    stfd f31, 0x210(r1)
    psq_st f31, 0x218(r1), 0, 0
    stfd f30, 0x200(r1)
    psq_st f30, 0x208(r1), 0, 0
    stfd f29, 0x1f0(r1)
    psq_st f29, 0x1f8(r1), 0, 0
    stfd f28, 0x1e0(r1)
    psq_st f28, 0x1e8(r1), 0, 0
    stfd f27, 0x1d0(r1)
    psq_st f27, 0x1d8(r1), 0, 0
    stfd f26, 0x1c0(r1)
    psq_st f26, 0x1c8(r1), 0, 0
    stfd f25, 0x1b0(r1)
    psq_st f25, 0x1b8(r1), 0, 0
    stfd f24, 0x1a0(r1)
    psq_st f24, 0x1a8(r1), 0, 0
    stfd f23, 0x190(r1)
    psq_st f23, 0x198(r1), 0, 0
    bl _savegpr_19
    lfs f23, 0x2e4(r3)
    mr r20, r3
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f23, f1
    cror eq, gt, eq
    bne lbl_fn_802692B4_0000022C
    li r19, 0x0
    stw r19, 0x14bc(r20)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r5, 0x12a4(r20)
    li r0, 0x6
    stw r3, 0x590(r20)
    mr r3, r20
    rlwinm r5, r5, 0, 27, 25
    li r4, 0x3
    stw r19, 0x14c4(r20)
    stw r5, 0x12a4(r20)
    stw r0, 0x58c(r20)
    bl fn_8016E970
    lwz r3, lbl_8087F3C0
    mr r4, r20
    li r5, 0x64
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r20
    li r5, 0x65
    li r6, 0x1
    bl fn_80239DAC
    b lbl_fn_802692B4_00000530
lbl_fn_802692B4_0000022C:
    lwz r3, 0x14c4(r20)
    cmpwi r3, 0x0
    bne lbl_fn_802692B4_00000530
    lfs f3, 0x2e4(r20)
    lfs f0, lbl_808836FC
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_802692B4_00000530
    addi r0, r3, 0x1
    stw r0, 0x14c4(r20)
    li r3, 0x61d
    bl fn_80219E6C
    lwz r19, lbl_8087F048
    mr r22, r3
    mr r3, r19
    bl fn_800F8548
    li r0, -0x1
    stw r0, 0x8(r1)
    lfs f1, lbl_80883674
    mr r6, r3
    stw r0, 0xc(r1)
    mr r3, r19
    lfs f2, lbl_80883670
    mr r4, r20
    mr r5, r22
    addi r7, r20, 0x528
    addi r8, r20, 0x534
    li r9, 0x0
    li r10, 0x1e
    bl fn_800FAB80
    li r0, 0x0
    stw r0, 0xbc(r1)
    lwz r3, lbl_8087F8A0
    lwz r21, 0x48(r3)
    b lbl_fn_802692B4_00000394
lbl_fn_802692B4_000002B8:
    lwz r3, 0x38(r21)
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    rlwinm r0, r3, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_802692B4_000002E4
    clrlwi r0, r3, 31
    cmplwi r0, 0x1
    beq lbl_fn_802692B4_000002E4
    li r7, 0x1
lbl_fn_802692B4_000002E4:
    cmpwi r7, 0x0
    beq lbl_fn_802692B4_00000300
    lwz r0, 0x7e0(r21)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_802692B4_00000300
    li r6, 0x1
lbl_fn_802692B4_00000300:
    cmpwi r6, 0x0
    beq lbl_fn_802692B4_00000334
    lwz r0, 0x55c(r21)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_802692B4_00000328
    lwz r0, 0x560(r21)
    cmpwi r0, 0x1c
    bne lbl_fn_802692B4_00000328
    li r3, 0x1
lbl_fn_802692B4_00000328:
    cmpwi r3, 0x0
    bne lbl_fn_802692B4_00000334
    li r5, 0x1
lbl_fn_802692B4_00000334:
    cmpwi r5, 0x0
    beq lbl_fn_802692B4_00000390
    lwz r0, 0x54c(r21)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    beq lbl_fn_802692B4_00000390
    mr r3, r20
    li r5, 0x1
    bl fn_8016F3D0
    cmpwi r3, 0x0
    bne lbl_fn_802692B4_00000390
    lwz r0, 0xd18(r21)
    cmpwi r0, 0x0
    beq lbl_fn_802692B4_00000390
    lwz r0, 0xbc(r1)
    addi r3, r1, 0xc0
    slwi r0, r0, 2
    add. r3, r3, r0
    beq lbl_fn_802692B4_00000384
    stw r21, 0x0(r3)
lbl_fn_802692B4_00000384:
    lwz r3, 0xbc(r1)
    addi r0, r3, 0x1
    stw r0, 0xbc(r1)
lbl_fn_802692B4_00000390:
    lwz r21, 0x14ac(r21)
lbl_fn_802692B4_00000394:
    cmpwi r21, 0x0
    mr r4, r21
    bne lbl_fn_802692B4_000002B8
    lwz r23, 0xbc(r1)
    cmplwi r23, 0x7
    bge lbl_fn_802692B4_000003B0
    li r23, 0x7
lbl_fn_802692B4_000003B0:
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lis r4, lbl_807445D8@ha
    lfs f24, lbl_80883700
    lfd f23, lbl_807445D8@l(r4)
    mr r28, r3
    lfs f25, lbl_80883674
    xoris r30, r23, 0x8000
    lfs f26, lbl_80883670
    addi r26, r1, 0x68
    lfs f28, lbl_808836AC
    addi r27, r1, 0x28
    lfs f29, lbl_808836C8
    addi r25, r1, 0x1c
    lfs f30, lbl_808836D0
    addi r19, r1, 0xc0
    lfs f31, lbl_80883708
    li r21, 0x0
    lfs f27, lbl_80883704
    lis r29, 0x4330
    li r31, 0x0
    b lbl_fn_802692B4_00000528
lbl_fn_802692B4_00000408:
    stw r30, 0x14c(r1)
    xoris r0, r21, 0x8000
    addi r3, r1, 0x68
    li r4, 0x79
    stw r29, 0x148(r1)
    lfd f0, 0x148(r1)
    stw r0, 0x144(r1)
    fsubs f0, f0, f23
    stw r29, 0x140(r1)
    fdivs f0, f24, f0
    lfd f3, 0x140(r1)
    fsubs f3, f3, f23
    fmuls f1, f3, f0
    bl fn_805F8E70
    stfs f25, 0x1c(r1)
    addi r3, r1, 0x38
    li r4, 0x79
    stfs f25, 0x20(r1)
    stfs f26, 0x24(r1)
    lfs f1, 0x538(r20)
    bl fn_805F8E70
    addi r4, r1, 0x1c
    addi r3, r1, 0x38
    mr r5, r4
    bl fn_805F93C0
    psq_l f1, 0x0(r25), 0, 0
    mr r3, r26
    lfs f2, 0x24(r1)
    mr r4, r27
    psq_st f1, 0x0(r27), 0, 0
    mr r5, r27
    stfs f2, 0x30(r1)
    bl fn_805F93C0
    lfs f0, 0x2c(r1)
    lwz r0, 0xbc(r1)
    fadds f0, f0, f27
    lwz r5, 0xbc(r1)
    cmpwi r0, 0x0
    stfs f0, 0x2c(r1)
    beq lbl_fn_802692B4_00000524
    divwu r0, r21, r5
    stfs f25, 0x9c(r1)
    lwz r24, lbl_8087F048
    mr r4, r20
    stfs f28, 0xa0(r1)
    addi r3, r1, 0x10
    mullw r0, r0, r5
    stfs f29, 0xa4(r1)
    stfs f30, 0xac(r1)
    stw r31, 0xb4(r1)
    subf r0, r0, r21
    slwi r0, r0, 2
    stfs f31, 0xa8(r1)
    lwzx r0, r19, r0
    stw r0, 0x98(r1)
    stfs f25, 0xb0(r1)
    stw r28, 0xb8(r1)
    bl fn_801781B0
    lwz r3, 0x6c(r22)
    bl fn_80219E6C
    lfs f1, lbl_80883674
    mr r5, r3
    lfs f2, lbl_80883670
    mr r3, r24
    mr r4, r20
    mr r7, r27
    addi r6, r1, 0x10
    addi r8, r1, 0x98
    li r9, 0x2006
    li r10, 0x0
    bl fn_800F8574
lbl_fn_802692B4_00000524:
    addi r21, r21, 0x1
lbl_fn_802692B4_00000528:
    cmpw r21, r23
    blt lbl_fn_802692B4_00000408
lbl_fn_802692B4_00000530:
    addi r11, r1, 0x190
    psq_l f31, 0x218(r1), 0, 0
    lfd f31, 0x210(r1)
    psq_l f30, 0x208(r1), 0, 0
    lfd f30, 0x200(r1)
    psq_l f29, 0x1f8(r1), 0, 0
    lfd f29, 0x1f0(r1)
    psq_l f28, 0x1e8(r1), 0, 0
    lfd f28, 0x1e0(r1)
    psq_l f27, 0x1d8(r1), 0, 0
    lfd f27, 0x1d0(r1)
    psq_l f26, 0x1c8(r1), 0, 0
    lfd f26, 0x1c0(r1)
    psq_l f25, 0x1b8(r1), 0, 0
    lfd f25, 0x1b0(r1)
    psq_l f24, 0x1a8(r1), 0, 0
    lfd f24, 0x1a0(r1)
    psq_l f23, 0x198(r1), 0, 0
    lfd f23, 0x190(r1)
    bl _restgpr_19
    lwz r0, 0x224(r1)
    mtlr r0
    addi r1, r1, 0x220
    blr
}

asm void fn_802696F8(void)
{
    nofralloc
    stwu r1, -0x1a0(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x1a4(r1)
    stfd f31, 0x190(r1)
    psq_st f31, 0x198(r1), 0, 0
    stfd f30, 0x180(r1)
    psq_st f30, 0x188(r1), 0, 0
    stfd f29, 0x170(r1)
    psq_st f29, 0x178(r1), 0, 0
    stfd f28, 0x160(r1)
    psq_st f28, 0x168(r1), 0, 0
    stfd f27, 0x150(r1)
    psq_st f27, 0x158(r1), 0, 0
    stw r31, 0x14c(r1)
    mr r31, r3
    stw r30, 0x148(r1)
    stw r29, 0x144(r1)
    lfs f28, 0x2e4(r3)
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f28, f1
    cror eq, gt, eq
    bne lbl_fn_802696F8_00000654
    li r30, 0x0
    stw r30, 0x14bc(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r5, 0x12a4(r31)
    li r0, 0x6
    stw r3, 0x590(r31)
    mr r3, r31
    rlwinm r5, r5, 0, 27, 25
    li r4, 0x3
    stw r30, 0x14c4(r31)
    stw r5, 0x12a4(r31)
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x64
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x65
    li r6, 0x1
    bl fn_80239DAC
    b lbl_fn_802696F8_000009E0
lbl_fn_802696F8_00000654:
    lfs f4, 0x2e4(r31)
    lfs f3, lbl_8088370C
    lfs f0, lbl_8088368C
    fsubs f3, f4, f3
    fabs f3, f3
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802696F8_00000920
    li r0, 0x0
    stw r0, 0x150c(r31)
    lfs f27, lbl_80883710
    lis r30, lbl_807445E0@ha
    lwz r3, lbl_8087F8A0
    lfs f28, lbl_80883674
    lwz r29, 0x48(r3)
    lfs f29, lbl_80883670
    lfs f31, lbl_80883684
    b lbl_fn_802696F8_000007EC
lbl_fn_802696F8_0000069C:
    lwz r6, 0x38(r29)
    li r4, 0x0
    li r3, 0x0
    li r5, 0x0
    rlwinm r0, r6, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_802696F8_000006C8
    clrlwi r0, r6, 31
    cmplwi r0, 0x1
    beq lbl_fn_802696F8_000006C8
    li r5, 0x1
lbl_fn_802696F8_000006C8:
    cmpwi r5, 0x0
    beq lbl_fn_802696F8_000006E4
    lwz r0, 0x7e0(r29)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_802696F8_000006E4
    li r3, 0x1
lbl_fn_802696F8_000006E4:
    cmpwi r3, 0x0
    beq lbl_fn_802696F8_00000718
    lwz r0, 0x55c(r29)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_802696F8_0000070C
    lwz r0, 0x560(r29)
    cmpwi r0, 0x1c
    bne lbl_fn_802696F8_0000070C
    li r3, 0x1
lbl_fn_802696F8_0000070C:
    cmpwi r3, 0x0
    bne lbl_fn_802696F8_00000718
    li r4, 0x1
lbl_fn_802696F8_00000718:
    cmpwi r4, 0x0
    beq lbl_fn_802696F8_000007E8
    mr r3, r29
    bl fn_80155D70
    cmpwi r3, 0x0
    bne lbl_fn_802696F8_000007E8
    lfs f3, 0x530(r29)
    addi r3, r1, 0x110
    lfs f0, 0x530(r31)
    li r4, 0x79
    lfs f5, 0x52c(r29)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r31)
    lfs f3, 0x528(r29)
    lfs f0, 0x528(r31)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x84(r1)
    stfs f0, 0x80(r1)
    stfs f6, 0x88(r1)
    stfs f28, 0x50(r1)
    stfs f28, 0x54(r1)
    stfs f29, 0x58(r1)
    lfs f1, 0x538(r31)
    bl fn_805F8E70
    addi r4, r1, 0x50
    addi r3, r1, 0x110
    mr r5, r4
    bl fn_805F93C0
    addi r3, r1, 0x80
    addi r4, r1, 0x50
    bl fn_805F9990
    fmr f30, f1
    lfd f1, lbl_807445E0@l(r30)
    bl fn_8068A850
    frsp f0, f1
    fcmpo cr0, f30, f0
    cror eq, gt, eq
    bne lbl_fn_802696F8_000007E8
    addi r3, r1, 0x80
    bl fn_805F9920
    fcmpo cr0, f1, f31
    bge lbl_fn_802696F8_000007E8
    lwz r0, 0x14b8(r31)
    cmplw r29, r0
    bne lbl_fn_802696F8_000007D8
    stw r29, 0x150c(r31)
    b lbl_fn_802696F8_000007F4
lbl_fn_802696F8_000007D8:
    fcmpo cr0, f1, f27
    bge lbl_fn_802696F8_000007E8
    stw r29, 0x150c(r31)
    fmr f27, f1
lbl_fn_802696F8_000007E8:
    lwz r29, 0x14ac(r29)
lbl_fn_802696F8_000007EC:
    cmpwi r29, 0x0
    bne lbl_fn_802696F8_0000069C
lbl_fn_802696F8_000007F4:
    lwz r0, 0x150c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_802696F8_00000914
    lfs f3, lbl_80883674
    addi r3, r1, 0xe0
    lfs f0, lbl_80883670
    li r4, 0x79
    stfs f3, 0x38(r1)
    stfs f3, 0x3c(r1)
    stfs f0, 0x40(r1)
    lfs f1, 0x538(r31)
    bl fn_805F8E70
    addi r4, r1, 0x38
    addi r3, r1, 0xe0
    mr r5, r4
    bl fn_805F93C0
    lfs f0, 0x40(r1)
    addi r3, r1, 0xb0
    lfs f6, lbl_808836C0
    li r4, 0x79
    lfs f4, 0x3c(r1)
    fmuls f7, f0, f6
    lfs f0, 0x530(r31)
    fmuls f8, f4, f6
    lfs f3, 0x38(r1)
    lfs f5, 0x52c(r31)
    fmuls f6, f3, f6
    fadds f9, f0, f7
    lfs f4, 0x528(r31)
    lfs f3, lbl_80883674
    fadds f5, f5, f8
    lfs f0, lbl_80883670
    fadds f4, f4, f6
    stfs f3, 0x2c(r1)
    stfs f3, 0x30(r1)
    stfs f0, 0x34(r1)
    lfs f1, 0x538(r31)
    stfs f6, 0x44(r1)
    stfs f8, 0x48(r1)
    stfs f7, 0x4c(r1)
    stfs f4, 0x74(r1)
    stfs f5, 0x78(r1)
    stfs f9, 0x7c(r1)
    bl fn_805F8E70
    addi r4, r1, 0x2c
    addi r3, r1, 0xb0
    mr r5, r4
    bl fn_805F93C0
    lfs f4, 0x34(r1)
    addi r3, r1, 0x74
    lfs f3, 0x30(r1)
    addi r4, r1, 0x20
    lfs f0, 0x2c(r1)
    fneg f4, f4
    fneg f3, f3
    psq_l f1, 0x0(r3), 0, 0
    fneg f0, f0
    lfs f2, 0x7c(r1)
    stfs f2, 0x28(r1)
    frsp f2, f4
    stfs f0, 0x68(r1)
    addi r3, r1, 0x68
    addi r5, r1, 0x14
    stfs f3, 0x6c(r1)
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x1c(r1)
    stfs f4, 0x70(r1)
    lwz r3, 0x150c(r31)
    bl fn_8015D2A0
    b lbl_fn_802696F8_000009E0
lbl_fn_802696F8_00000914:
    li r0, 0x0
    stw r0, 0x1508(r31)
    b lbl_fn_802696F8_000009E0
lbl_fn_802696F8_00000920:
    lfs f0, lbl_80883714
    fcmpo cr0, f4, f0
    cror eq, gt, eq
    bne lbl_fn_802696F8_000009B0
    lfs f0, lbl_80883718
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_802696F8_000009B0
    lwz r0, 0x1508(r31)
    cmpwi r0, 0x0
    bne lbl_fn_802696F8_000009E0
    li r30, 0x0
    stw r30, 0x14bc(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r5, 0x12a4(r31)
    li r0, 0x6
    stw r3, 0x590(r31)
    mr r3, r31
    rlwinm r5, r5, 0, 27, 25
    li r4, 0x3
    stw r30, 0x14c4(r31)
    stw r5, 0x12a4(r31)
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x64
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x65
    li r6, 0x1
    bl fn_80239DAC
    b lbl_fn_802696F8_000009E0
lbl_fn_802696F8_000009B0:
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_808836E4
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_802696F8_000009E0
    lfs f0, lbl_8088371C
    fcmpo cr0, f3, f0
    bge lbl_fn_802696F8_000009E0
    lfs f3, 0x538(r31)
    lfs f0, lbl_80883720
    fadds f0, f3, f0
    stfs f0, 0x538(r31)
lbl_fn_802696F8_000009E0:
    lfs f4, 0x2e4(r31)
    lfs f3, lbl_80883724
    lfs f0, lbl_8088368C
    fsubs f3, f4, f3
    fabs f3, f3
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802696F8_00000B10
    lwz r0, 0x14ec(r31)
    cmpwi r0, 0x0
    ble lbl_fn_802696F8_00000A20
    lis r4, lbl_80744608@ha
    mr r3, r31
    addi r4, r4, lbl_80744608@l
    addi r4, r4, 0x1f1
    bl fn_8026F9BC
lbl_fn_802696F8_00000A20:
    lwz r0, 0xac(r1)
    li r5, 0x0
    li r4, -0x1
    stw r5, 0x90(r1)
    clrlwi r0, r0, 4
    li r3, 0x61e
    stw r5, 0x94(r1)
    stw r5, 0x98(r1)
    stw r5, 0x9c(r1)
    stw r5, 0xa0(r1)
    stw r4, 0xa4(r1)
    stw r0, 0xac(r1)
    stw r4, 0xa8(r1)
    bl fn_80219E6C
    lis r8, lbl_807C6B90@ha
    lwz r6, 0x150c(r31)
    mr r4, r3
    mr r5, r31
    addi r3, r1, 0x90
    addi r8, r8, lbl_807C6B90@l
    li r7, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_8003EA3C
    lwz r3, 0x150c(r31)
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_802696F8_00000AA4
    lwz r12, 0x0(r3)
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
lbl_fn_802696F8_00000AA4:
    lwz r3, 0x150c(r31)
    li r4, 0x0
    bl fn_80148B0C
    lfs f2, 0xc(r3)
    addi r5, r1, 0x5c
    psq_l f1, 0x4(r3), 0, 0
    mr r6, r31
    lfs f6, lbl_80883674
    addi r4, r1, 0x90
    psq_st f1, 0x0(r5), 0, 0
    li r8, 0x0
    lfs f5, lbl_80883728
    fadds f0, f2, f6
    lfs f4, 0x5c(r1)
    li r9, 0x0
    lfs f3, 0x60(r1)
    fadds f4, f4, f6
    stfs f0, 0x64(r1)
    fadds f0, f3, f5
    lwz r3, lbl_8087F048
    stfs f4, 0x5c(r1)
    stfs f0, 0x60(r1)
    stfs f6, 0x8(r1)
    lwz r7, 0x150c(r31)
    stfs f5, 0xc(r1)
    stfs f6, 0x10(r1)
    bl fn_80108C10
lbl_fn_802696F8_00000B10:
    lwz r0, 0x1a4(r1)
    psq_l f31, 0x198(r1), 0, 0
    lfd f31, 0x190(r1)
    psq_l f30, 0x188(r1), 0, 0
    lfd f30, 0x180(r1)
    psq_l f29, 0x178(r1), 0, 0
    lfd f29, 0x170(r1)
    psq_l f28, 0x168(r1), 0, 0
    lfd f28, 0x160(r1)
    psq_l f27, 0x158(r1), 0, 0
    lfd f27, 0x150(r1)
    lwz r31, 0x14c(r1)
    lwz r30, 0x148(r1)
    lwz r29, 0x144(r1)
    mtlr r0
    addi r1, r1, 0x1a0
    blr
}

asm void fn_80269CBC(void)
{
    nofralloc
    stwu r1, -0xe0(r1)
    mflr r0
    lfs f3, lbl_808836E4
    stw r0, 0xe4(r1)
    lfs f0, lbl_8088368C
    stfd f31, 0xd0(r1)
    psq_st f31, 0xd8(r1), 0, 0
    stw r31, 0xcc(r1)
    stw r30, 0xc8(r1)
    mr r30, r3
    lfs f4, 0x2e4(r3)
    fsubs f3, f4, f3
    fabs f3, f3
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80269CBC_00000BD4
    lfs f1, lbl_80883670
    li r0, 0x1
    stw r0, 0x3fc(r3)
    li r4, 0x0
    lfs f2, lbl_80883698
    li r5, 0x145
    stfs f1, 0x2fc(r3)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    addi r3, r3, 0xb0
    bl fn_80097C08
    lfs f3, lbl_80883670
    lfs f0, lbl_808836E4
    stfs f3, 0x2e8(r30)
    stfs f0, 0x2e4(r30)
lbl_fn_80269CBC_00000BD4:
    lfs f31, 0x2e4(r30)
    addi r3, r30, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_80269CBC_00000C54
    li r31, 0x0
    stw r31, 0x14bc(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r5, 0x12a4(r30)
    li r0, 0x6
    stw r3, 0x590(r30)
    mr r3, r30
    rlwinm r5, r5, 0, 27, 25
    li r4, 0x3
    stw r31, 0x14c4(r30)
    stw r5, 0x12a4(r30)
    stw r0, 0x58c(r30)
    bl fn_8016E970
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x64
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x65
    li r6, 0x1
    bl fn_80239DAC
    b lbl_fn_80269CBC_00000E54
lbl_fn_80269CBC_00000C54:
    lfs f4, 0x2e4(r30)
    lfs f3, lbl_8088370C
    lfs f0, lbl_8088368C
    fsubs f3, f4, f3
    fabs f3, f3
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80269CBC_00000DC8
    lwz r3, lbl_8087F8A0
    lwz r31, 0x48(r3)
    mr r3, r31
    bl fn_8017A450
    cmpwi r3, 0x5
    bge lbl_fn_80269CBC_00000DA0
    lfs f3, lbl_80883674
    addi r3, r1, 0x98
    lfs f0, lbl_80883670
    li r4, 0x79
    stfs f3, 0x38(r1)
    stfs f3, 0x3c(r1)
    stfs f0, 0x40(r1)
    lfs f1, 0x538(r30)
    bl fn_805F8E70
    addi r4, r1, 0x38
    addi r3, r1, 0x98
    mr r5, r4
    bl fn_805F93C0
    lfs f0, 0x40(r1)
    addi r3, r1, 0x68
    lfs f6, lbl_808836C0
    li r4, 0x79
    lfs f4, 0x3c(r1)
    fmuls f7, f0, f6
    lfs f0, 0x530(r30)
    fmuls f8, f4, f6
    lfs f3, 0x38(r1)
    lfs f5, 0x52c(r30)
    fmuls f6, f3, f6
    fadds f9, f0, f7
    lfs f4, 0x528(r30)
    lfs f3, lbl_80883674
    fadds f5, f5, f8
    lfs f0, lbl_80883670
    fadds f4, f4, f6
    stfs f3, 0x2c(r1)
    stfs f3, 0x30(r1)
    stfs f0, 0x34(r1)
    lfs f1, 0x538(r30)
    stfs f6, 0x44(r1)
    stfs f8, 0x48(r1)
    stfs f7, 0x4c(r1)
    stfs f4, 0x5c(r1)
    stfs f5, 0x60(r1)
    stfs f9, 0x64(r1)
    bl fn_805F8E70
    addi r4, r1, 0x2c
    addi r3, r1, 0x68
    mr r5, r4
    bl fn_805F93C0
    lfs f4, 0x34(r1)
    addi r3, r1, 0x5c
    lfs f3, 0x30(r1)
    addi r4, r1, 0x20
    lfs f0, 0x2c(r1)
    fneg f4, f4
    fneg f3, f3
    psq_l f1, 0x0(r3), 0, 0
    fneg f0, f0
    lfs f2, 0x64(r1)
    stfs f2, 0x28(r1)
    frsp f2, f4
    stfs f0, 0x50(r1)
    addi r6, r1, 0x50
    addi r5, r1, 0x14
    mr r3, r31
    stfs f3, 0x54(r1)
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f4, 0x58(r1)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x1c(r1)
    bl fn_8015D5B0
    b lbl_fn_80269CBC_00000E54
lbl_fn_80269CBC_00000DA0:
    psq_l f1, 0x528(r30), 0, 0
    addi r4, r1, 0x8
    lfs f2, 0x530(r30)
    mr r3, r31
    stfs f2, 0x10(r1)
    psq_st f1, 0x0(r4), 0, 0
    bl fn_8015CF98
    li r0, 0x0
    stw r0, 0x1508(r30)
    b lbl_fn_80269CBC_00000E54
lbl_fn_80269CBC_00000DC8:
    lfs f0, lbl_80883714
    fcmpo cr0, f4, f0
    cror eq, gt, eq
    bne lbl_fn_80269CBC_00000E54
    lfs f0, lbl_80883718
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_80269CBC_00000E54
    lwz r0, 0x1508(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80269CBC_00000E54
    li r31, 0x0
    stw r31, 0x14bc(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r5, 0x12a4(r30)
    li r0, 0x6
    stw r3, 0x590(r30)
    mr r3, r30
    rlwinm r5, r5, 0, 27, 25
    li r4, 0x3
    stw r31, 0x14c4(r30)
    stw r5, 0x12a4(r30)
    stw r0, 0x58c(r30)
    bl fn_8016E970
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x64
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x65
    li r6, 0x1
    bl fn_80239DAC
lbl_fn_80269CBC_00000E54:
    lfs f3, 0x2e4(r30)
    lfs f0, lbl_808836E4
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_80269CBC_00000E88
    lfs f0, lbl_8088371C
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_80269CBC_00000E88
    lfs f3, 0x538(r30)
    lfs f0, lbl_80883720
    fadds f0, f3, f0
    stfs f0, 0x538(r30)
lbl_fn_80269CBC_00000E88:
    lwz r0, 0xe4(r1)
    psq_l f31, 0xd8(r1), 0, 0
    lfd f31, 0xd0(r1)
    lwz r31, 0xcc(r1)
    lwz r30, 0xc8(r1)
    mtlr r0
    addi r1, r1, 0xe0
    blr
}

asm void fn_8026A010(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    stfd f31, 0xb0(r1)
    psq_st f31, 0xb8(r1), 0, 0
    stfd f30, 0xa0(r1)
    psq_st f30, 0xa8(r1), 0, 0
    lfs f30, lbl_80883674
    stw r31, 0x9c(r1)
    mr r31, r3
    stw r30, 0x98(r1)
    lwz r0, 0x14c4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8026A010_00000F3C
    lfs f31, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_8026A010_000010C0
    lfs f0, lbl_80883670
    li r0, 0x1
    stw r0, 0x14c4(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80883674
    li r4, 0x0
    stw r0, 0x3fc(r31)
    li r5, 0x14b
    lfs f2, lbl_80883698
    li r6, 0x0
    stfs f0, 0x2fc(r31)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    b lbl_fn_8026A010_000010C0
lbl_fn_8026A010_00000F3C:
    cmpwi r0, 0x1
    bne lbl_fn_8026A010_00000FE4
    lfs f31, 0x2e4(r3)
    li r4, 0x0
    lfs f30, lbl_8088372C
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_8026A010_00000FA4
    lfs f0, lbl_80883670
    li r3, 0x2
    li r0, 0x1
    stw r3, 0x14c4(r31)
    lfs f1, lbl_80883674
    addi r3, r31, 0xb0
    stw r0, 0x3fc(r31)
    li r4, 0x0
    lfs f2, lbl_80883698
    li r5, 0x14c
    stfs f0, 0x2fc(r31)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
lbl_fn_8026A010_00000FA4:
    li r3, 0x615
    bl fn_80219E6C
    mr r30, r3
    mr r3, r31
    bl fn_80144710
    lwz r8, 0x590(r31)
    mr r6, r31
    lwz r3, lbl_8087F048
    mr r7, r30
    lfs f1, lbl_80883674
    li r4, 0x0
    li r5, 0x0
    li r9, 0x1e
    li r10, -0x1
    bl fn_800F8C6C
    b lbl_fn_8026A010_000010C0
lbl_fn_8026A010_00000FE4:
    cmpwi r0, 0x2
    bne lbl_fn_8026A010_000010C0
    lfs f31, 0x2e4(r3)
    li r4, 0x0
    lfs f30, lbl_80883730
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_8026A010_00001070
    li r30, 0x0
    stw r30, 0x14bc(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r5, 0x12a4(r31)
    li r0, 0x6
    stw r3, 0x590(r31)
    mr r3, r31
    rlwinm r5, r5, 0, 27, 25
    li r4, 0x3
    stw r30, 0x14c4(r31)
    stw r5, 0x12a4(r31)
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x64
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x65
    li r6, 0x1
    bl fn_80239DAC
    b lbl_fn_8026A010_000010C0
lbl_fn_8026A010_00001070:
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_80883728
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_8026A010_000010C0
    li r3, 0x615
    bl fn_80219E6C
    mr r30, r3
    mr r3, r31
    bl fn_80144710
    lwz r8, 0x590(r31)
    mr r6, r31
    lwz r3, lbl_8087F048
    mr r7, r30
    lfs f1, lbl_80883674
    li r4, 0x0
    li r5, 0x0
    li r9, 0x1e
    li r10, -0x1
    bl fn_800F8C6C
lbl_fn_8026A010_000010C0:
    lfs f4, 0x1538(r31)
    lis r6, 0x4330
    lfs f3, 0x1534(r31)
    lis r3, lbl_807445D8@ha
    lfs f0, 0x1530(r31)
    fmuls f4, f4, f30
    fmuls f5, f3, f30
    lwz r7, lbl_8087F0A8
    fmuls f0, f0, f30
    stfs f4, 0x30(r1)
    lfd f4, lbl_807445D8@l(r3)
    stfs f0, 0x28(r1)
    lfs f0, lbl_808836EC
    li r0, 0x0
    stfs f5, 0x2c(r1)
    mr r4, r31
    addi r3, r1, 0x18
    addi r5, r31, 0x528
    lwz r7, 0x30(r7)
    stw r6, 0x88(r1)
    mullw r6, r7, r7
    stw r0, 0x6c(r1)
    stw r0, 0x70(r1)
    xoris r6, r6, 0x8000
    stw r6, 0x8c(r1)
    lfd f3, 0x88(r1)
    stw r0, 0x74(r1)
    fsubs f3, f3, f4
    stw r0, 0x78(r1)
    fdivs f0, f0, f3
    fadds f0, f5, f0
    stfs f0, 0x2c(r1)
    bl fn_80176548
    lwz r3, lbl_8087EE98
    addi r4, r1, 0x38
    lfs f1, 0x24(r1)
    addi r5, r1, 0x18
    addi r6, r1, 0x28
    addi r8, r31, 0x5b8
    lis r7, 0x8000
    li r9, 0x0
    bl fn_8004D388
    addi r4, r1, 0x48
    addi r3, r1, 0x8
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lfs f0, 0x5a8(r31)
    lfs f3, 0xc(r1)
    lfs f2, 0x50(r1)
    fsubs f4, f3, f0
    lfs f3, 0x5ac(r31)
    lfs f0, 0x24(r1)
    fsubs f2, f2, f3
    lfs f5, 0x8(r1)
    lfs f3, 0x5a4(r31)
    fsubs f0, f4, f0
    stfs f2, 0x530(r31)
    fsubs f3, f5, f3
    stfs f0, 0xc(r1)
    stfs f3, 0x8(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x528(r31), 0, 0
    psq_l f31, 0xb8(r1), 0, 0
    lfd f31, 0xb0(r1)
    psq_l f30, 0xa8(r1), 0, 0
    lfd f30, 0xa0(r1)
    lwz r31, 0x9c(r1)
    lwz r30, 0x98(r1)
    lwz r0, 0xc4(r1)
    stfs f2, 0x10(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

asm void fn_8026A34C(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x54(r1)
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r3
    lfs f31, 0x2e4(r3)
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_8026A34C_0000128C
    li r31, 0x0
    stw r31, 0x14bc(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r5, 0x12a4(r30)
    li r0, 0x6
    stw r3, 0x590(r30)
    mr r3, r30
    rlwinm r5, r5, 0, 27, 25
    li r4, 0x3
    stw r31, 0x14c4(r30)
    stw r5, 0x12a4(r30)
    stw r0, 0x58c(r30)
    bl fn_8016E970
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x64
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x65
    li r6, 0x1
    bl fn_80239DAC
    li r0, 0x384
    stw r0, 0x14ec(r30)
    b lbl_fn_8026A34C_00001374
lbl_fn_8026A34C_0000128C:
    lfs f2, 0x2e4(r30)
    lfs f0, lbl_80883734
    lfs f1, lbl_8088368C
    fsubs f0, f2, f0
    fabs f0, f0
    frsp f0, f0
    fcmpo cr0, f0, f1
    bge lbl_fn_8026A34C_00001320
    addi r3, r30, 0x15ac
    li r4, 0x0
    bl fn_80232B7C
    lfs f0, lbl_80883674
    li r3, -0x1
    lfs f1, lbl_80883670
    li r0, 0x1
    stfs f0, 0x1c(r1)
    addi r4, r30, 0x15ac
    addi r5, r30, 0xb0
    addi r7, r1, 0x10
    stfs f0, 0x20(r1)
    addi r8, r1, 0x1c
    addi r9, r1, 0x28
    li r6, 0x0
    stfs f0, 0x24(r1)
    li r10, -0x1
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f1, 0x28(r1)
    stfs f1, 0x2c(r1)
    stfs f1, 0x30(r1)
    stfs f1, 0x34(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    b lbl_fn_8026A34C_00001374
lbl_fn_8026A34C_00001320:
    lfs f0, lbl_80883738
    fsubs f0, f2, f0
    fabs f0, f0
    frsp f0, f0
    fcmpo cr0, f0, f1
    bge lbl_fn_8026A34C_00001374
    lwz r6, lbl_8087F430
    li r0, 0x23
    lfs f0, lbl_8088373C
    li r4, 0x0
    lwz r3, 0x96c(r6)
    srwi r5, r3, 31
    clrlwi r3, r3, 31
    xor r3, r3, r5
    subf r3, r5, r3
    stw r3, 0x96c(r6)
    stw r0, 0x970(r6)
    stfs f0, 0x974(r6)
    stfs f0, 0x978(r6)
    lwz r3, lbl_8087F9E8
    bl fn_8059C330
lbl_fn_8026A34C_00001374:
    lwz r0, 0x54(r1)
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8026A4FC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    lwz r0, 0x14bc(r3)
    cmpwi r0, 0xa
    ble lbl_fn_8026A4FC_0000143C
    li r31, 0x0
    stw r31, 0x14bc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r5, 0x12a4(r30)
    li r0, 0x12
    stw r3, 0x590(r30)
    mr r3, r30
    rlwinm r5, r5, 0, 27, 25
    li r4, 0x3
    stw r31, 0x14c4(r30)
    stw r5, 0x12a4(r30)
    stw r0, 0x58c(r30)
    bl fn_8016E970
    addi r3, r30, 0x151c
    lis r4, lbl_80744608@ha
    psq_l f1, 0x0(r3), 0, 0
    addi r5, r30, 0x528
    lfs f2, 0x1524(r30)
    addi r4, r4, lbl_80744608@l
    lfs f0, 0x1528(r30)
    addi r3, r1, 0x8
    psq_st f1, 0x0(r5), 0, 0
    addi r4, r4, 0x21c
    lfs f1, lbl_80883670
    li r6, 0x0
    stfs f2, 0x530(r30)
    li r7, -0x1
    stfs f0, 0x538(r30)
    bl fn_800C344C
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_8026A4FC_0000143C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8026A5BC(void)
{
    nofralloc
    lwz r0, 0x14bc(r3)
    cmpwi r0, 0xa
    blelr
    lwz r4, 0x152c(r3)
    subi r0, r4, 0x8
    cmplwi r0, 0x11
    bgt lbl_fn_8026A5BC_000014B8
    lis r4, jumptable_80784D8C@ha
    slwi r0, r0, 2
    addi r4, r4, jumptable_80784D8C@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    b fn_8026B008
    b fn_8026B118
    b fn_8026B430
    b fn_8026B748
    b fn_8026B9F0
    b fn_8026BB08
    b fn_8026BE2C
    b fn_8026C150
    b fn_8026C2C0
    b fn_8026CC28
    b fn_8026CDB4
    b fn_8026D058
lbl_fn_8026A5BC_000014B8:
    b fn_8026AF78
    blr
}

asm void fn_8026A628(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    psq_st f31, 0x18(r1), 0, 0
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lfs f31, 0x2e4(r3)
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_8026A628_00001560
    li r31, 0x0
    stw r31, 0x14bc(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r5, 0x12a4(r30)
    li r0, 0x6
    stw r3, 0x590(r30)
    mr r3, r30
    rlwinm r5, r5, 0, 27, 25
    li r4, 0x3
    stw r31, 0x14c4(r30)
    stw r5, 0x12a4(r30)
    stw r0, 0x58c(r30)
    bl fn_8016E970
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x64
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x65
    li r6, 0x1
    bl fn_80239DAC
    b lbl_fn_8026A628_000015EC
lbl_fn_8026A628_00001560:
    lfs f1, 0x2e4(r30)
    lfs f0, lbl_80883740
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_8026A628_000015EC
    lfs f0, lbl_80883744
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_8026A628_000015EC
    lwz r0, 0x14ec(r30)
    cmpwi r0, 0x0
    ble lbl_fn_8026A628_000015B0
    lwz r0, 0x14bc(r30)
    cmpwi r0, 0x14
    bne lbl_fn_8026A628_000015B0
    lis r4, lbl_80744608@ha
    mr r3, r30
    addi r4, r4, lbl_80744608@l
    addi r4, r4, 0x1e4
    bl fn_8026F9BC
lbl_fn_8026A628_000015B0:
    li r3, 0x61c
    bl fn_80219E6C
    mr r31, r3
    mr r3, r30
    bl fn_80144710
    lwz r3, lbl_8087F048
    mr r6, r30
    lwz r8, 0x590(r30)
    mr r7, r31
    lfs f1, lbl_80883674
    li r4, 0x0
    li r5, 0x0
    li r9, 0x1e
    li r10, -0x1
    bl fn_800F8C6C
lbl_fn_8026A628_000015EC:
    lwz r0, 0x24(r1)
    psq_l f31, 0x18(r1), 0, 0
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8026A774(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x9
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_8016E970
    mr r3, r31
    bl fn_80267134
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8026A7AC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    psq_st f31, 0x18(r1), 0, 0
    stw r31, 0xc(r1)
    mr r31, r3
    lfs f31, 0x2e4(r3)
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_8026A7AC_000016A4
    lwz r3, 0x12a4(r31)
    li r4, 0xe6
    lwz r0, 0x5c0(r31)
    li r5, 0x1
    oris r3, r3, 0x200
    stw r3, 0x12a4(r31)
    clrrwi r0, r0, 1
    stw r0, 0x5c0(r31)
    lwz r3, lbl_8087F430
    bl fn_80370AE4
lbl_fn_8026A7AC_000016A4:
    lwz r0, 0x24(r1)
    psq_l f31, 0x18(r1), 0, 0
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8026A828(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    psq_st f31, 0x18(r1), 0, 0
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lfs f31, 0x2e4(r3)
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_8026A828_0000175C
    li r31, 0x0
    stw r31, 0x14bc(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r5, 0x12a4(r30)
    li r0, 0x6
    stw r3, 0x590(r30)
    mr r3, r30
    rlwinm r5, r5, 0, 27, 25
    li r4, 0x3
    stw r31, 0x14c4(r30)
    stw r5, 0x12a4(r30)
    stw r0, 0x58c(r30)
    bl fn_8016E970
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x64
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x65
    li r6, 0x1
    bl fn_80239DAC
lbl_fn_8026A828_0000175C:
    lwz r0, 0x24(r1)
    psq_l f31, 0x18(r1), 0, 0
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8026A8E4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    psq_st f31, 0x18(r1), 0, 0
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lfs f31, 0x2e4(r3)
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_8026A8E4_00001818
    li r31, 0x0
    stw r31, 0x14bc(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r5, 0x12a4(r30)
    li r0, 0x6
    stw r3, 0x590(r30)
    mr r3, r30
    rlwinm r5, r5, 0, 27, 25
    li r4, 0x3
    stw r31, 0x14c4(r30)
    stw r5, 0x12a4(r30)
    stw r0, 0x58c(r30)
    bl fn_8016E970
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x64
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x65
    li r6, 0x1
    bl fn_80239DAC
lbl_fn_8026A8E4_00001818:
    lwz r0, 0x24(r1)
    psq_l f31, 0x18(r1), 0, 0
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8026A9A0(void)
{
    nofralloc
    stwu r1, -0x100(r1)
    mflr r0
    stw r0, 0x104(r1)
    stfd f31, 0xf0(r1)
    psq_st f31, 0xf8(r1), 0, 0
    stfd f30, 0xe0(r1)
    psq_st f30, 0xe8(r1), 0, 0
    stw r31, 0xdc(r1)
    stw r30, 0xd8(r1)
    mr r30, r3
    lwz r0, 0x1630(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8026A9A0_00001A70
    lwz r5, 0x14b8(r3)
    addi r4, r1, 0x50
    lfs f0, 0x530(r3)
    addi r31, r1, 0x5c
    lfs f3, 0x530(r5)
    lfs f5, 0x52c(r5)
    fsubs f2, f3, f0
    lfs f4, 0x52c(r3)
    lfs f3, 0x528(r5)
    fsubs f4, f5, f4
    lfs f0, 0x528(r3)
    stfs f2, 0x58(r1)
    fsubs f3, f3, f0
    lfs f0, lbl_8088368C
    stfs f4, 0x54(r1)
    frsp f4, f2
    stfs f3, 0x50(r1)
    fabs f3, f4
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    frsp f3, f3
    stfs f2, 0x64(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_8026A9A0_000018F0
    lfs f3, 0x5c(r1)
    lfs f0, lbl_80883674
    fcmpo cr0, f3, f0
    ble lbl_fn_8026A9A0_000018E4
    lfs f0, lbl_80883690
    b lbl_fn_8026A9A0_000018E8
lbl_fn_8026A9A0_000018E4:
    lfs f0, lbl_80883694
lbl_fn_8026A9A0_000018E8:
    stfs f0, 0x48(r1)
    b lbl_fn_8026A9A0_00001904
lbl_fn_8026A9A0_000018F0:
    fmr f2, f4
    lfs f1, 0x5c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_8026A9A0_00001904:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x68
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883674
    addi r4, r1, 0x38
    lfs f30, 0x70(r1)
    mr r5, r4
    lfs f31, 0x6c(r1)
    addi r3, r1, 0x98
    lfs f13, 0x68(r1)
    lfs f12, 0x80(r1)
    lfs f11, 0x7c(r1)
    lfs f10, 0x78(r1)
    lfs f9, 0x90(r1)
    lfs f8, 0x8c(r1)
    lfs f7, 0x88(r1)
    lfs f6, 0x94(r1)
    lfs f5, 0x84(r1)
    lfs f4, 0x74(r1)
    lfs f0, lbl_80883670
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x64(r1)
    stfs f3, 0xc8(r1)
    stfs f3, 0xcc(r1)
    stfs f3, 0xd0(r1)
    stfs f0, 0xd4(r1)
    stfs f13, 0x8(r1)
    stfs f31, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f13, 0x98(r1)
    stfs f31, 0x9c(r1)
    stfs f30, 0xa0(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xa8(r1)
    stfs f11, 0xac(r1)
    stfs f12, 0xb0(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0xb8(r1)
    stfs f8, 0xbc(r1)
    stfs f9, 0xc0(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0xa4(r1)
    stfs f5, 0xb4(r1)
    stfs f6, 0xc4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_8088368C
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8026A9A0_00001A20
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80883674
    fcmpo cr0, f3, f0
    ble lbl_fn_8026A9A0_00001A10
    lfs f0, lbl_80883690
    b lbl_fn_8026A9A0_00001A14
lbl_fn_8026A9A0_00001A10:
    lfs f0, lbl_80883694
lbl_fn_8026A9A0_00001A14:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_8026A9A0_00001A34
lbl_fn_8026A9A0_00001A20:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_8026A9A0_00001A34:
    addi r3, r1, 0x44
    lfs f2, lbl_80883674
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    lfs f4, 0x2e4(r30)
    lfs f0, lbl_80883748
    lfs f3, 0x60(r1)
    fcmpo cr0, f4, f0
    stfs f2, 0x4c(r1)
    stfs f2, 0x64(r1)
    stfs f3, 0x538(r30)
    ble lbl_fn_8026A9A0_00001A70
    mr r3, r30
    li r4, 0x0
    bl fn_8026D0F8
lbl_fn_8026A9A0_00001A70:
    lfs f30, 0x2e4(r30)
    addi r3, r30, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f30, f1
    cror eq, gt, eq
    bne lbl_fn_8026A9A0_00001AFC
    lwz r0, 0x1648(r30)
    li r31, 0x0
    stw r31, 0x14bc(r30)
    cntlzw r0, r0
    srwi r0, r0, 5
    stw r0, 0x1648(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r5, 0x12a4(r30)
    li r0, 0x6
    stw r3, 0x590(r30)
    mr r3, r30
    rlwinm r5, r5, 0, 27, 25
    li r4, 0x3
    stw r31, 0x14c4(r30)
    stw r5, 0x12a4(r30)
    stw r0, 0x58c(r30)
    bl fn_8016E970
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x64
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x65
    li r6, 0x1
    bl fn_80239DAC
lbl_fn_8026A9A0_00001AFC:
    lwz r0, 0x104(r1)
    psq_l f31, 0xf8(r1), 0, 0
    lfd f31, 0xf0(r1)
    psq_l f30, 0xe8(r1), 0, 0
    lfd f30, 0xe0(r1)
    lwz r31, 0xdc(r1)
    lwz r30, 0xd8(r1)
    mtlr r0
    addi r1, r1, 0x100
    blr
}
