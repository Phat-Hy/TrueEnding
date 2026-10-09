#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_22(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_22(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_80063D3C(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_800874C8(void);
extern void fn_8008771C(void);
extern void fn_80087994(void);
extern void fn_8008937C(void);
extern void fn_8008BBD8(void);
extern void fn_80092814(void);
extern void fn_80097C08(void);
extern void fn_80097CCC(void);
extern void fn_800C31F4(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_800CF45C(void);
extern void fn_800F8548(void);
extern void fn_800FAB80(void);
extern void fn_80103F60(void);
extern void fn_80108378(void);
extern void fn_8016E970(void);
extern void fn_80194E2C(void);
extern void fn_80232B7C(void);
extern void fn_80239DAC(void);
extern void fn_8023A8B4(void);
extern void fn_80351AB8(void);
extern void fn_80353C9C(void);
extern void fn_80353CCC(void);
extern void fn_80370320(void);
extern void fn_80370A78(void);
extern void fn_80370AE4(void);
extern void fn_803EBAC8(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9990(void);
extern void fn_80680770(void);
extern void fn_80682428(void);
extern void fn_80686EA4(void);
extern void fn_8068AE9C(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);
extern void fn_8068B100(void);
extern void fn_80695B00(void);

/* External data declarations */
extern u8 lbl_8074A8D8[];
extern u8 lbl_8074A8E0[];
extern u8 lbl_8074AA58[];
extern u8 lbl_80789528[];
extern u8 lbl_80789534[];
extern u8 lbl_80789548[];
extern u8 lbl_80789680[];
extern u8 lbl_8078969C[];
extern u8 lbl_807C7030[];
extern u8 lbl_807C8448[];
extern u8 lbl_807C8450[];

/* Small data declarations */
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EF10;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087EFE8;
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F410;
extern u32 lbl_8087F411;
extern u32 lbl_8087F430;
extern u32 lbl_8087F498;
extern u32 lbl_8087F4A0;
extern u32 lbl_8087F8A0;
extern u32 lbl_80885378;
extern u32 lbl_80885394;
extern u32 lbl_80885398;
extern u32 lbl_8088539C;
extern u32 lbl_808853B0;
extern u32 lbl_808853B8;
extern u32 lbl_808853C0;
extern u32 lbl_808853C4;
extern u32 lbl_808853C8;
extern u32 lbl_808853D8;
extern u32 lbl_808853DC;
extern u32 lbl_808853E0;
extern u32 lbl_808853E4;
extern u32 lbl_808853E8;
extern u32 lbl_808853EC;
extern u32 lbl_808853F0;
extern u32 lbl_80885438;
extern u32 lbl_8088543C;
extern u32 lbl_80885454;
extern u32 lbl_80885490;
extern u32 lbl_808854B8;
extern u32 lbl_808854BC;
extern u32 lbl_808854C0;

/* Function declarations */
void fn_803520D8(void);
void fn_8035223C(void);
void fn_803524AC(void);
void fn_803524E4(void);
void fn_803526A8(void);
void fn_80352938(void);
void fn_80352C3C(void);
void fn_80352EA4(void);
void fn_80352EC8(void);
void fn_80352F88(void);
void fn_80353224(void);
void fn_80353254(void);
void fn_80353370(void);
void fn_8035359C(void);

asm void fn_803520D8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    li r0, 0x0
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    stw r0, 0x14b4(r3)
    stw r0, 0x14b8(r3)
    stw r0, 0x14c0(r3)
    stw r0, 0x17e8(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    mr r4, r30
    li r5, 0x3ea
    li r6, 0x1
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3e8
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3ed
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3ef
    li r6, 0x1
    bl fn_80239DAC
    mr r3, r30
    li r4, 0x3
    bl fn_8016E970
    lfs f3, lbl_80885398
    li r0, 0x10
    lfs f0, lbl_808853C0
    li r31, 0x1
    stw r0, 0x58c(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80885378
    li r4, 0x0
    stw r31, 0x3fc(r30)
    li r5, 0x38
    lfs f2, lbl_808853C4
    li r6, 0x0
    stfs f3, 0x2fc(r30)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r30)
    bl fn_80097C08
    stw r31, 0x14bc(r30)
    li r4, 0xc9
    lwz r3, lbl_8087F430
    bl fn_80370A78
    cmpwi r3, 0x0
    bne lbl_fn_803520D8_00000100
    lwz r3, lbl_8087F430
    li r4, 0xc9
    li r5, 0x1
    bl fn_80370AE4
lbl_fn_803520D8_00000100:
    lwz r3, lbl_8087F430
    li r4, 0x389
    li r5, 0x1
    li r6, 0x0
    bl fn_80370320
    lwz r0, 0x14a8(r30)
    lis r4, lbl_8074AA58@ha
    addi r4, r4, lbl_8074AA58@l
    lfs f1, lbl_80885398
    rlwinm r0, r0, 0, 6, 4
    stw r0, 0x14a8(r30)
    addi r3, r1, 0x8
    addi r4, r4, 0x39d
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8035223C(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    addi r11, r1, 0x90
    stfd f31, 0x100(r1)
    psq_st f31, 0x108(r1), 0, 0
    stfd f30, 0xf0(r1)
    psq_st f30, 0xf8(r1), 0, 0
    stfd f29, 0xe0(r1)
    psq_st f29, 0xe8(r1), 0, 0
    stfd f28, 0xd0(r1)
    psq_st f28, 0xd8(r1), 0, 0
    stfd f27, 0xc0(r1)
    psq_st f27, 0xc8(r1), 0, 0
    stfd f26, 0xb0(r1)
    psq_st f26, 0xb8(r1), 0, 0
    stfd f25, 0xa0(r1)
    psq_st f25, 0xa8(r1), 0, 0
    stfd f24, 0x90(r1)
    psq_st f24, 0x98(r1), 0, 0
    bl _savegpr_27
    lfs f0, 0x16dc(r3)
    lis r4, lbl_8074A8D8@ha
    lfs f25, lbl_80885378
    mr r27, r3
    stfs f25, 0x34(r1)
    li r28, 0x0
    lfd f26, lbl_8074A8D8@l(r4)
    lis r29, 0x4330
    stfs f25, 0x38(r1)
    lis r30, lbl_8074A8E0@ha
    lfs f27, lbl_80885438
    li r31, -0x1
    stfs f0, 0x3c(r1)
    lfs f28, lbl_808853F0
    lfs f24, 0x538(r3)
    lfs f30, lbl_808853B8
    lfs f29, lbl_808853E4
    lfs f31, lbl_808853E8
lbl_fn_8035223C_00000200:
    xoris r0, r28, 0x8000
    stw r0, 0x74(r1)
    lfd f2, lbl_8074A8E0@l(r30)
    stw r29, 0x70(r1)
    lfd f0, 0x70(r1)
    fsubs f0, f0, f26
    fmuls f0, f27, f0
    fmuls f0, f28, f0
    fadds f24, f24, f0
    fmr f1, f24
    bl fn_8068AEA8
    frsp f24, f1
    fcmpo cr0, f24, f29
    ble lbl_fn_8035223C_0000023C
    fsubs f24, f24, f30
lbl_fn_8035223C_0000023C:
    fcmpo cr0, f24, f31
    bge lbl_fn_8035223C_00000248
    fadds f24, f24, f30
lbl_fn_8035223C_00000248:
    fmr f1, f24
    addi r3, r1, 0x40
    li r4, 0x79
    bl fn_805F8E70
    addi r4, r1, 0x34
    addi r3, r1, 0x40
    mr r5, r4
    bl fn_805F93C0
    stfs f25, 0x1c(r1)
    mr r4, r27
    lfs f4, 0x3c(r1)
    addi r7, r1, 0x28
    stfs f24, 0x20(r1)
    addi r8, r1, 0x1c
    lfs f1, 0x38(r1)
    li r9, 0x0
    stfs f25, 0x24(r1)
    li r10, 0x1e
    lfs f0, 0x34(r1)
    lfs f5, 0x16e8(r27)
    lfs f3, 0x16e4(r27)
    lfs f2, 0x16e0(r27)
    fadds f4, f5, f4
    fadds f3, f3, f1
    lfs f1, lbl_8088543C
    fadds f0, f2, f0
    stfs f4, 0x30(r1)
    lfs f2, lbl_80885398
    stfs f0, 0x28(r1)
    stfs f3, 0x2c(r1)
    stw r31, 0x8(r1)
    stw r31, 0xc(r1)
    lwz r3, lbl_8087F048
    lwz r5, 0x153c(r27)
    lwz r6, 0x16ec(r27)
    bl fn_800FAB80
    lwz r0, 0x1cc4(r27)
    cmpwi r0, 0x0
    beq lbl_fn_8035223C_00000330
    lfs f1, 0x16e8(r27)
    addi r4, r1, 0x10
    lfs f0, 0x3c(r1)
    lis r5, 0xff00
    lfs f3, 0x16e4(r27)
    fadds f4, f1, f0
    lfs f2, 0x38(r1)
    lfs f1, 0x16e0(r27)
    lfs f0, 0x34(r1)
    fadds f2, f3, f2
    stfs f4, 0x18(r1)
    fadds f0, f1, f0
    lwz r3, lbl_8087EEB0
    stfs f2, 0x14(r1)
    lfs f2, lbl_80885490
    stfs f0, 0x10(r1)
    lwz r6, 0x153c(r27)
    lfs f1, 0x58(r6)
    bl fn_80063D3C
lbl_fn_8035223C_00000330:
    addi r28, r28, 0x1
    cmpwi r28, 0xb4
    blt lbl_fn_8035223C_00000200
    lfs f1, 0x16dc(r27)
    lfs f0, 0x1ccc(r27)
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_8035223C_0000036C
    lwz r3, lbl_8087F3C0
    mr r4, r27
    li r5, 0x3e9
    li r6, 0x0
    bl fn_80239DAC
    li r0, 0x0
    stb r0, 0x16d8(r27)
lbl_fn_8035223C_0000036C:
    lfs f1, 0x16dc(r27)
    lfs f0, 0x1cc8(r27)
    fadds f0, f1, f0
    stfs f0, 0x16dc(r27)
    psq_l f31, 0x108(r1), 0, 0
    lfd f31, 0x100(r1)
    psq_l f30, 0xf8(r1), 0, 0
    lfd f30, 0xf0(r1)
    psq_l f29, 0xe8(r1), 0, 0
    lfd f29, 0xe0(r1)
    psq_l f28, 0xd8(r1), 0, 0
    lfd f28, 0xd0(r1)
    psq_l f27, 0xc8(r1), 0, 0
    lfd f27, 0xc0(r1)
    psq_l f26, 0xb8(r1), 0, 0
    lfd f26, 0xb0(r1)
    psq_l f25, 0xa8(r1), 0, 0
    lfd f25, 0xa0(r1)
    psq_l f24, 0x98(r1), 0, 0
    lfd f24, 0x90(r1)
    addi r11, r1, 0x90
    bl _restgpr_27
    lwz r0, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_803524AC(void)
{
    nofralloc
    lfs f0, lbl_80885398
    li r0, 0x1
    stfs f1, 0x2e8(r3)
    mr r6, r5
    mr r5, r4
    lfs f1, lbl_80885378
    stw r0, 0x3fc(r3)
    li r4, 0x0
    lfs f2, lbl_808853C4
    li r7, 0x0
    stfs f0, 0x2fc(r3)
    li r8, 0x1
    addi r3, r3, 0xb0
    b fn_80097C08
}

asm void fn_803524E4(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x30
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    stfd f30, 0x30(r1)
    psq_st f30, 0x38(r1), 0, 0
    bl _savegpr_26
    lis r30, lbl_8074AA58@ha
    lfs f30, lbl_80885378
    lfs f31, lbl_80885398
    mr r26, r3
    addi r27, r3, 0x1820
    addi r30, r30, lbl_8074AA58@l
    li r28, -0x1
    lis r29, lbl_807C7030@ha
    li r31, 0x3
    b lbl_fn_803524E4_00000590
lbl_fn_803524E4_00000458:
    lfs f0, 0x0(r27)
    fcmpo cr0, f0, f30
    ble lbl_fn_803524E4_00000530
    lwz r3, lbl_8087EFA8
    lfs f3, 0x3a4(r3)
    fsubs f0, f0, f3
    stfs f0, 0x0(r27)
    fcmpo cr0, f0, f30
    cror eq, lt, eq
    bne lbl_fn_803524E4_00000528
    stw r28, 0x8(r1)
    fmr f1, f30
    lfs f2, lbl_80885398
    mr r4, r26
    stw r28, 0xc(r1)
    addi r7, r27, 0x4
    addi r8, r29, lbl_807C7030@l
    lwz r3, lbl_8087F048
    li r9, 0x0
    lwz r5, 0x1530(r26)
    li r10, 0x1e
    lwz r6, 0x1a20(r26)
    bl fn_800FAB80
    lwz r3, 0x1a24(r26)
    addi r3, r3, 0x1
    stw r3, 0x1a24(r26)
    slwi r0, r3, 30
    srwi r3, r3, 31
    subf r0, r3, r0
    rotlwi r0, r0, 2
    add. r0, r0, r3
    bne lbl_fn_803524E4_00000528
    lfs f1, lbl_80885398
    addi r3, r1, 0x10
    addi r4, r30, 0x418
    addi r5, r27, 0x4
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    lwz r4, lbl_8087F430
    lwz r0, 0x96c(r4)
    srwi r3, r0, 31
    clrlwi r0, r0, 31
    xor r0, r0, r3
    subf r0, r3, r0
    stw r0, 0x96c(r4)
    stw r31, 0x970(r4)
    stfs f30, 0x974(r4)
    stfs f31, 0x978(r4)
lbl_fn_803524E4_00000528:
    addi r27, r27, 0x10
    b lbl_fn_803524E4_00000590
lbl_fn_803524E4_00000530:
    addi r6, r26, 0x181c
    addi r0, r6, 0x4
    subf r0, r0, r27
    srawi r0, r0, 4
    addze r7, r0
    slwi r3, r7, 4
    b lbl_fn_803524E4_0000057C
lbl_fn_803524E4_0000054C:
    addi r0, r7, 0x1
    add r4, r6, r3
    slwi r0, r0, 4
    addi r7, r7, 0x1
    add r5, r6, r0
    addi r3, r3, 0x10
    lfs f0, 0x4(r5)
    stfs f0, 0x4(r4)
    lfs f2, 0x10(r5)
    psq_l f1, 0x8(r5), 0, 0
    psq_st f1, 0x8(r4), 0, 0
    stfs f2, 0x10(r4)
lbl_fn_803524E4_0000057C:
    lwz r4, 0x0(r6)
    subi r0, r4, 0x1
    cmplw r7, r0
    blt lbl_fn_803524E4_0000054C
    stw r0, 0x0(r6)
lbl_fn_803524E4_00000590:
    lwz r0, 0x181c(r26)
    slwi r0, r0, 4
    add r3, r26, r0
    addi r0, r3, 0x1820
    cmplw r27, r0
    bne lbl_fn_803524E4_00000458
    addi r11, r1, 0x30
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    psq_l f30, 0x38(r1), 0, 0
    lfd f30, 0x30(r1)
    bl _restgpr_26
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_803526A8(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    addi r11, r1, 0x50
    stfd f31, 0x70(r1)
    psq_st f31, 0x78(r1), 0, 0
    stfd f30, 0x60(r1)
    psq_st f30, 0x68(r1), 0, 0
    stfd f29, 0x50(r1)
    psq_st f29, 0x58(r1), 0, 0
    bl _savegpr_22
    lis r29, lbl_8074AA58@ha
    lfs f30, lbl_80885398
    lfs f29, lbl_808853B0
    mr r23, r3
    lfs f31, lbl_80885378
    addi r24, r3, 0x1a2c
    addi r29, r29, lbl_8074AA58@l
    li r25, 0x1
    li r26, -0x1
    lis r27, lbl_807C7030@ha
    li r30, 0x3
    lis r28, 0x5555
    lis r31, 0x6666
    b lbl_fn_803526A8_00000818
lbl_fn_803526A8_00000634:
    lfs f0, 0xc(r24)
    fcmpo cr0, f0, f31
    ble lbl_fn_803526A8_0000079C
    lwz r3, lbl_8087EFA8
    lfs f3, 0x3a4(r3)
    fsubs f0, f0, f3
    stfs f0, 0xc(r24)
    fcmpo cr0, f0, f29
    cror eq, lt, eq
    bne lbl_fn_803526A8_000006B8
    lbz r0, 0x10(r24)
    cmpwi r0, 0x0
    bne lbl_fn_803526A8_000006B8
    stb r25, 0x10(r24)
    addi r3, r23, 0x1cac
    lbz r4, 0x11(r24)
    bl fn_80232B7C
    stfs f30, 0x18(r1)
    fmr f1, f30
    mr r7, r24
    addi r4, r23, 0x1cac
    stfs f30, 0x1c(r1)
    addi r8, r27, lbl_807C7030@l
    addi r9, r1, 0x18
    stfs f30, 0x20(r1)
    li r5, 0x0
    li r6, 0x0
    li r10, -0x1
    stfs f30, 0x24(r1)
    stw r26, 0x8(r1)
    stw r25, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
lbl_fn_803526A8_000006B8:
    lfs f0, 0xc(r24)
    fcmpo cr0, f0, f31
    cror eq, lt, eq
    bne lbl_fn_803526A8_00000794
    lwz r3, lbl_8087F3C0
    addi r4, r23, 0x1cac
    lbz r5, 0x11(r24)
    li r6, 0x1
    bl fn_80239DAC
    lwz r22, lbl_8087F048
    mr r3, r22
    bl fn_800F8548
    stw r26, 0x8(r1)
    mr r6, r3
    lfs f1, lbl_80885378
    mr r3, r22
    stw r26, 0xc(r1)
    mr r4, r23
    lfs f2, lbl_80885398
    mr r7, r24
    lwz r5, 0x155c(r23)
    addi r8, r27, lbl_807C7030@l
    li r9, 0x0
    li r10, 0x1e
    bl fn_800FAB80
    lwz r3, 0x1cb8(r23)
    addi r0, r28, 0x5556
    addi r4, r3, 0x1
    stw r4, 0x1cb8(r23)
    mulhw r3, r0, r4
    srwi r0, r3, 31
    add r0, r3, r0
    mulli r0, r0, 0x3
    subf. r0, r0, r4
    bne lbl_fn_803526A8_00000794
    lfs f1, lbl_80885398
    mr r5, r24
    addi r3, r1, 0x10
    addi r4, r29, 0x425
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    lwz r4, lbl_8087F430
    lwz r0, 0x96c(r4)
    srwi r3, r0, 31
    clrlwi r0, r0, 31
    xor r0, r0, r3
    subf r0, r3, r0
    stw r0, 0x96c(r4)
    stw r30, 0x970(r4)
    stfs f31, 0x974(r4)
    stfs f30, 0x978(r4)
lbl_fn_803526A8_00000794:
    addi r24, r24, 0x14
    b lbl_fn_803526A8_00000818
lbl_fn_803526A8_0000079C:
    addi r6, r23, 0x1a28
    addi r3, r31, 0x6667
    addi r0, r6, 0x4
    subf r0, r0, r24
    mulhw r0, r3, r0
    srawi r0, r0, 3
    srwi r3, r0, 31
    add r7, r0, r3
    mulli r3, r7, 0x14
    b lbl_fn_803526A8_00000804
lbl_fn_803526A8_000007C4:
    addi r0, r7, 0x1
    add r4, r6, r3
    mulli r0, r0, 0x14
    addi r7, r7, 0x1
    addi r3, r3, 0x14
    add r5, r6, r0
    lfs f2, 0xc(r5)
    psq_l f1, 0x4(r5), 0, 0
    psq_st f1, 0x4(r4), 0, 0
    stfs f2, 0xc(r4)
    lfs f0, 0x10(r5)
    stfs f0, 0x10(r4)
    lbz r0, 0x14(r5)
    stb r0, 0x14(r4)
    lbz r0, 0x15(r5)
    stb r0, 0x15(r4)
lbl_fn_803526A8_00000804:
    lwz r4, 0x0(r6)
    subi r0, r4, 0x1
    cmplw r7, r0
    blt lbl_fn_803526A8_000007C4
    stw r0, 0x0(r6)
lbl_fn_803526A8_00000818:
    lwz r0, 0x1a28(r23)
    mulli r0, r0, 0x14
    add r3, r23, r0
    addi r0, r3, 0x1a2c
    cmplw r24, r0
    bne lbl_fn_803526A8_00000634
    addi r11, r1, 0x50
    psq_l f31, 0x78(r1), 0, 0
    lfd f31, 0x70(r1)
    psq_l f30, 0x68(r1), 0, 0
    lfd f30, 0x60(r1)
    psq_l f29, 0x58(r1), 0, 0
    lfd f29, 0x50(r1)
    bl _restgpr_22
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_80352938(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    addi r4, r1, 0x50
    stfd f31, 0x100(r1)
    psq_st f31, 0x108(r1), 0, 0
    fmr f31, f1
    stfd f30, 0xf0(r1)
    psq_st f30, 0xf8(r1), 0, 0
    stfd f29, 0xe0(r1)
    psq_st f29, 0xe8(r1), 0, 0
    stw r31, 0xdc(r1)
    addi r31, r1, 0x5c
    stw r30, 0xd8(r1)
    mr r30, r3
    lwz r5, 0x14b0(r3)
    lfs f0, 0x530(r3)
    lfs f3, 0x530(r5)
    lfs f4, 0x528(r5)
    fsubs f2, f3, f0
    lfs f3, 0x528(r3)
    lfs f5, 0x52c(r5)
    fsubs f3, f4, f3
    lfs f0, 0x52c(r3)
    frsp f4, f2
    stfs f3, 0x50(r1)
    fsubs f5, f5, f0
    lfs f0, lbl_808853D8
    fabs f3, f4
    stfs f5, 0x54(r1)
    psq_l f1, 0x0(r4), 0, 0
    frsp f3, f3
    stfs f2, 0x58(r1)
    psq_st f1, 0x0(r31), 0, 0
    fcmpo cr0, f3, f0
    stfs f2, 0x64(r1)
    bge lbl_fn_80352938_00000918
    lfs f3, 0x5c(r1)
    lfs f0, lbl_80885378
    fcmpo cr0, f3, f0
    ble lbl_fn_80352938_0000090C
    lfs f0, lbl_808853DC
    b lbl_fn_80352938_00000910
lbl_fn_80352938_0000090C:
    lfs f0, lbl_808853E0
lbl_fn_80352938_00000910:
    stfs f0, 0x48(r1)
    b lbl_fn_80352938_0000092C
lbl_fn_80352938_00000918:
    fmr f2, f4
    lfs f1, 0x5c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_80352938_0000092C:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x68
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80885378
    addi r4, r1, 0x38
    lfs f29, 0x70(r1)
    mr r5, r4
    lfs f30, 0x6c(r1)
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
    lfs f0, lbl_80885398
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x64(r1)
    stfs f3, 0xc8(r1)
    stfs f3, 0xcc(r1)
    stfs f3, 0xd0(r1)
    stfs f0, 0xd4(r1)
    stfs f13, 0x8(r1)
    stfs f30, 0xc(r1)
    stfs f29, 0x10(r1)
    stfs f13, 0x98(r1)
    stfs f30, 0x9c(r1)
    stfs f29, 0xa0(r1)
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
    lfs f0, lbl_808853D8
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80352938_00000A48
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80885378
    fcmpo cr0, f3, f0
    ble lbl_fn_80352938_00000A38
    lfs f0, lbl_808853DC
    b lbl_fn_80352938_00000A3C
lbl_fn_80352938_00000A38:
    lfs f0, lbl_808853E0
lbl_fn_80352938_00000A3C:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_80352938_00000A5C
lbl_fn_80352938_00000A48:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_80352938_00000A5C:
    addi r3, r1, 0x44
    lfs f3, lbl_80885378
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_8074A8E0@ha
    psq_st f1, 0x0(r31), 0, 0
    fmr f2, f3
    lfs f0, 0x538(r30)
    lfs f29, 0x60(r1)
    stfs f2, 0x64(r1)
    fsubs f1, f29, f0
    lfd f2, lbl_8074A8E0@l(r3)
    stfs f3, 0x4c(r1)
    bl fn_8068AEA8
    frsp f5, f1
    lfs f0, lbl_808853E4
    fcmpo cr0, f5, f0
    ble lbl_fn_80352938_00000AA8
    lfs f0, lbl_808853B8
    fsubs f5, f5, f0
lbl_fn_80352938_00000AA8:
    lfs f0, lbl_808853E8
    fcmpo cr0, f5, f0
    bge lbl_fn_80352938_00000ABC
    lfs f0, lbl_808853B8
    fadds f5, f5, f0
lbl_fn_80352938_00000ABC:
    lfs f3, lbl_808853EC
    lfs f0, lbl_80885378
    fmuls f4, f3, f31
    fcmpo cr0, f5, f0
    bge lbl_fn_80352938_00000AD8
    fneg f3, f5
    b lbl_fn_80352938_00000ADC
lbl_fn_80352938_00000AD8:
    fmr f3, f5
lbl_fn_80352938_00000ADC:
    lfs f0, lbl_808853F0
    fmuls f4, f0, f4
    fcmpo cr0, f3, f4
    cror eq, lt, eq
    bne lbl_fn_80352938_00000B08
    lfs f1, lbl_80885378
    addi r3, r30, 0xb0
    li r4, 0x1
    bl fn_80097CCC
    stfs f29, 0x538(r30)
    b lbl_fn_80352938_00000B34
lbl_fn_80352938_00000B08:
    lfs f0, lbl_80885378
    fcmpo cr0, f5, f0
    cror eq, lt, eq
    bne lbl_fn_80352938_00000B28
    lfs f0, 0x538(r30)
    fsubs f0, f0, f4
    stfs f0, 0x538(r30)
    b lbl_fn_80352938_00000B34
lbl_fn_80352938_00000B28:
    lfs f0, 0x538(r30)
    fadds f0, f0, f4
    stfs f0, 0x538(r30)
lbl_fn_80352938_00000B34:
    lwz r0, 0x114(r1)
    psq_l f31, 0x108(r1), 0, 0
    lfd f31, 0x100(r1)
    psq_l f30, 0xf8(r1), 0, 0
    lfd f30, 0xf0(r1)
    psq_l f29, 0xe8(r1), 0, 0
    lfd f29, 0xe0(r1)
    lwz r31, 0xdc(r1)
    lwz r30, 0xd8(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_80352C3C(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    addi r11, r1, 0xb0
    stfd f31, 0x110(r1)
    psq_st f31, 0x118(r1), 0, 0
    stfd f30, 0x100(r1)
    psq_st f30, 0x108(r1), 0, 0
    stfd f29, 0xf0(r1)
    psq_st f29, 0xf8(r1), 0, 0
    stfd f28, 0xe0(r1)
    psq_st f28, 0xe8(r1), 0, 0
    stfd f27, 0xd0(r1)
    psq_st f27, 0xd8(r1), 0, 0
    stfd f26, 0xc0(r1)
    psq_st f26, 0xc8(r1), 0, 0
    stfd f25, 0xb0(r1)
    psq_st f25, 0xb8(r1), 0, 0
    bl _savegpr_27
    lwz r6, lbl_8087F4A0
    lis r31, lbl_8074AA58@ha
    fmr f30, f1
    lfs f26, lbl_80885378
    fmr f31, f2
    lwz r30, 0x48(r6)
    lfs f27, lbl_80885398
    mr r27, r3
    lfs f28, lbl_8088539C
    mr r28, r4
    lfs f29, lbl_80885438
    mr r29, r5
    addi r31, r31, lbl_8074AA58@l
    b lbl_fn_80352C3C_00000D74
lbl_fn_80352C3C_00000BE8:
    lwz r3, 0x48(r30)
    addis r0, r3, 0x0
    cmplwi r0, 0xbb84
    beq lbl_fn_80352C3C_00000C00
    cmplwi r0, 0xbb81
    bne lbl_fn_80352C3C_00000D70
lbl_fn_80352C3C_00000C00:
    lwz r12, 0x0(r30)
    mr r4, r30
    addi r3, r1, 0x2c
    lwz r12, 0x54(r12)
    mtctr r12
    bctrl
    addi r4, r31, 0x3af
    addi r3, r27, 0xb0
    li r5, 0x0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80352C3C_00000C38
    li r3, 0x0
    b lbl_fn_80352C3C_00000C44
lbl_fn_80352C3C_00000C38:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r27)
    add r3, r3, r0
lbl_fn_80352C3C_00000C44:
    lfs f2, 0x2c(r3)
    lfs f0, 0x34(r1)
    lfs f3, 0xc(r3)
    fsubs f4, f0, f2
    lfs f0, 0x2c(r1)
    lfs f1, 0x1c(r3)
    fsubs f5, f0, f3
    stfs f1, 0xc(r1)
    fmuls f0, f4, f4
    stfs f3, 0x8(r1)
    fmadds f1, f5, f5, f0
    stfs f2, 0x10(r1)
    stfs f5, 0x20(r1)
    stfs f4, 0x28(r1)
    stfs f26, 0x24(r1)
    bl fn_8068B100
    lwz r12, 0x0(r30)
    frsp f25, f1
    mr r3, r30
    lwz r12, 0x50(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_80352C3C_00000CAC
    lfs f0, 0x48(r3)
    fsubs f25, f25, f0
lbl_fn_80352C3C_00000CAC:
    fcmpo cr0, f25, f30
    cror eq, lt, eq
    bne lbl_fn_80352C3C_00000D50
    addi r3, r1, 0x20
    mr r4, r3
    bl fn_805F98D0
    stfs f26, 0x14(r1)
    addi r3, r1, 0x38
    li r4, 0x79
    stfs f26, 0x18(r1)
    stfs f27, 0x1c(r1)
    lfs f1, 0x538(r27)
    bl fn_805F8E70
    addi r4, r1, 0x14
    addi r3, r1, 0x38
    mr r5, r4
    bl fn_805F93C0
    stfs f26, 0x18(r1)
    addi r3, r1, 0x20
    addi r4, r1, 0x14
    bl fn_805F9990
    bl fn_8068AE9C
    frsp f1, f1
    fmuls f0, f28, f31
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_80352C3C_00000D50
    cmpwi r29, 0x0
    beq lbl_fn_80352C3C_00000D50
    addi r3, r1, 0x68
    li r4, 0x0
    li r5, 0x30
    bl memset
    stw r28, 0x68(r1)
    mr r3, r30
    addi r4, r1, 0x68
    stw r27, 0x90(r1)
    lwz r12, 0x0(r30)
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
lbl_fn_80352C3C_00000D50:
    fmuls f0, f29, f30
    fcmpo cr0, f25, f0
    cror eq, lt, eq
    bne lbl_fn_80352C3C_00000D70
    lwz r0, 0x54(r30)
    cmpwi r0, 0x3
    bne lbl_fn_80352C3C_00000D70
    stfs f26, 0x920(r30)
lbl_fn_80352C3C_00000D70:
    lwz r30, 0x5c(r30)
lbl_fn_80352C3C_00000D74:
    cmpwi r30, 0x0
    bne lbl_fn_80352C3C_00000BE8
    addi r11, r1, 0xb0
    psq_l f31, 0x118(r1), 0, 0
    lfd f31, 0x110(r1)
    psq_l f30, 0x108(r1), 0, 0
    lfd f30, 0x100(r1)
    psq_l f29, 0xf8(r1), 0, 0
    lfd f29, 0xf0(r1)
    psq_l f28, 0xe8(r1), 0, 0
    lfd f28, 0xe0(r1)
    psq_l f27, 0xd8(r1), 0, 0
    lfd f27, 0xd0(r1)
    psq_l f26, 0xc8(r1), 0, 0
    lfd f26, 0xc0(r1)
    psq_l f25, 0xb8(r1), 0, 0
    lfd f25, 0xb0(r1)
    bl _restgpr_27
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_80352EA4(void)
{
    nofralloc
    lwz r4, 0x17f4(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r3, 0x17f8(r3)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    blr
}

asm void fn_80352EC8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    lwz r0, 0x14bc(r3)
    cmpwi r0, 0x1
    bne lbl_fn_80352EC8_00000E94
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x10
    bne lbl_fn_80352EC8_00000E94
    lwz r0, 0x14b4(r3)
    cmpwi r0, 0x2
    blt lbl_fn_80352EC8_00000E94
    lis r4, lbl_8074AA58@ha
    li r5, 0x0
    addi r4, r4, lbl_8074AA58@l
    addi r3, r3, 0xb0
    addi r4, r4, 0x3af
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80352EC8_00000E58
    li r5, 0x0
    b lbl_fn_80352EC8_00000E64
lbl_fn_80352EC8_00000E58:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r5, r3, r0
lbl_fn_80352EC8_00000E64:
    lfs f0, 0x1c(r5)
    addi r4, r1, 0x8
    lfs f3, 0xc(r5)
    li r3, 0x1
    lfs f2, 0x2c(r5)
    stfs f3, 0x8(r1)
    stfs f0, 0xc(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0x10(r1)
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x8(r31)
    b lbl_fn_80352EC8_00000E98
lbl_fn_80352EC8_00000E94:
    li r3, 0x0
lbl_fn_80352EC8_00000E98:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80352F88(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stw r31, 0x7c(r1)
    mr r31, r3
    stw r30, 0x78(r1)
    stw r29, 0x74(r1)
    mr r29, r5
    stw r28, 0x70(r1)
    mr r28, r4
    lwz r0, 0x14bc(r4)
    cmpwi r0, 0x1
    bne lbl_fn_80352F88_00001124
    lwz r3, lbl_8087F430
    li r4, 0x6f
    li r5, 0x1
    bl fn_80370AE4
    mr r3, r28
    mr r4, r29
    li r5, 0x2
    bl fn_80351AB8
    lwz r3, 0x1550(r28)
    lwz r0, 0x638(r29)
    stw r0, 0x63c(r29)
    stw r3, 0x638(r29)
    lwz r3, lbl_8087EFE8
    cmpwi r3, 0x0
    beq lbl_fn_80352F88_00000F2C
    li r4, 0x5a
    li r5, 0x0
    bl fn_800CF45C
lbl_fn_80352F88_00000F2C:
    lwz r3, lbl_8087F498
    cmpwi r3, 0x0
    beq lbl_fn_80352F88_00000F44
    li r4, 0xf
    li r5, 0x0
    bl fn_803EBAC8
lbl_fn_80352F88_00000F44:
    lis r30, lbl_8074AA58@ha
    lfs f1, lbl_80885398
    addi r30, r30, lbl_8074AA58@l
    addi r3, r1, 0x8
    addi r4, r30, 0x3fc
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    addi r5, r30, 0x3fb
    li r0, 0x0
    stw r0, 0xd18(r28)
    mr r6, r5
    li r3, 0x38
    li r4, 0x0
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_80352F88_00000FA8
    mr r4, r29
    mr r5, r28
    li r6, 0x2
    bl fn_80194E2C
lbl_fn_80352F88_00000FA8:
    lis r4, lbl_80789528@ha
    lwzu r6, lbl_80789528@l(r4)
    li r0, 0x0
    stw r29, 0x10(r1)
    lwz r5, 0x4(r4)
    lwz r4, 0x8(r4)
    stw r3, 0x14(r1)
    stw r0, 0x0(r31)
    lbz r0, lbl_8087F410
    stw r6, 0x24(r1)
    extsb. r0, r0
    stw r5, 0x28(r1)
    stw r4, 0x2c(r1)
    stw r6, 0x18(r1)
    stw r5, 0x1c(r1)
    stw r4, 0x20(r1)
    stw r6, 0x58(r1)
    stw r5, 0x5c(r1)
    stw r4, 0x60(r1)
    stw r29, 0x64(r1)
    stw r3, 0x68(r1)
    bne lbl_fn_80352F88_00001028
    lis r6, lbl_807C8448@ha
    lis r4, fn_80353224@ha
    lis r3, fn_80353254@ha
    li r0, 0x1
    addi r3, r3, fn_80353254@l
    addi r5, r6, lbl_807C8448@l
    addi r4, r4, fn_80353224@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C8448@l(r6)
    stb r0, lbl_8087F410
lbl_fn_80352F88_00001028:
    lwz r7, 0x58(r1)
    addi r3, r1, 0x44
    lwz r6, 0x5c(r1)
    lwz r5, 0x60(r1)
    lwz r4, 0x64(r1)
    lwz r0, 0x68(r1)
    stw r7, 0x44(r1)
    stw r6, 0x48(r1)
    stw r5, 0x4c(r1)
    stw r4, 0x50(r1)
    stw r0, 0x54(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_80352F88_000010FC
    lwz r7, 0x44(r1)
    li r3, 0x14
    lwz r6, 0x48(r1)
    lwz r5, 0x4c(r1)
    lwz r4, 0x50(r1)
    lwz r0, 0x54(r1)
    stw r7, 0x30(r1)
    stw r6, 0x34(r1)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_80352F88_000010C0
    lis r3, __files@ha
    lis r4, lbl_8078969C@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8078969C@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80352F88_000010C0:
    cmpwi r30, 0x0
    beq lbl_fn_80352F88_000010F0
    lwz r0, 0x30(r1)
    stw r0, 0x0(r30)
    lwz r0, 0x34(r1)
    stw r0, 0x4(r30)
    lwz r0, 0x38(r1)
    stw r0, 0x8(r30)
    lwz r0, 0x3c(r1)
    stw r0, 0xc(r30)
    lwz r0, 0x40(r1)
    stw r0, 0x10(r30)
lbl_fn_80352F88_000010F0:
    stw r30, 0x4(r31)
    li r0, 0x1
    b lbl_fn_80352F88_00001100
lbl_fn_80352F88_000010FC:
    li r0, 0x0
lbl_fn_80352F88_00001100:
    cmpwi r0, 0x0
    beq lbl_fn_80352F88_00001118
    lis r3, lbl_807C8448@ha
    addi r3, r3, lbl_807C8448@l
    stw r3, 0x0(r31)
    b lbl_fn_80352F88_0000112C
lbl_fn_80352F88_00001118:
    li r0, 0x0
    stw r0, 0x0(r31)
    b lbl_fn_80352F88_0000112C
lbl_fn_80352F88_00001124:
    li r0, 0x0
    stw r0, 0x0(r3)
lbl_fn_80352F88_0000112C:
    lwz r0, 0x84(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    lwz r29, 0x74(r1)
    lwz r28, 0x70(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_80353224(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r12, 0x0(r3)
    lwz r3, 0xc(r12)
    lwz r4, 0x10(r12)
    bl fn_80695B00
    nop
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80353254(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r5, 0x3
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    mr r29, r4
    bne lbl_fn_80353254_000011B4
    lis r3, lbl_80789548@ha
    addi r3, r3, lbl_80789548@l
    stw r3, 0x0(r4)
    b lbl_fn_80353254_0000127C
lbl_fn_80353254_000011B4:
    cmpwi r5, 0x0
    bne lbl_fn_80353254_0000122C
    lwz r31, 0x0(r3)
    li r3, 0x14
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_80353254_000011F4
    lis r3, __files@ha
    lis r4, lbl_8078969C@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8078969C@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80353254_000011F4:
    cmpwi r30, 0x0
    beq lbl_fn_80353254_00001224
    lwz r0, 0x4(r31)
    lwz r3, 0x0(r31)
    stw r3, 0x0(r30)
    stw r0, 0x4(r30)
    lwz r0, 0x8(r31)
    stw r0, 0x8(r30)
    lwz r0, 0xc(r31)
    stw r0, 0xc(r30)
    lwz r0, 0x10(r31)
    stw r0, 0x10(r30)
lbl_fn_80353254_00001224:
    stw r30, 0x0(r29)
    b lbl_fn_80353254_0000127C
lbl_fn_80353254_0000122C:
    cmpwi r5, 0x1
    bne lbl_fn_80353254_00001248
    lwz r3, 0x0(r4)
    bl dtor_80084684
    li r0, 0x0
    stw r0, 0x0(r29)
    b lbl_fn_80353254_0000127C
lbl_fn_80353254_00001248:
    lwz r5, 0x0(r4)
    lis r3, lbl_80789548@ha
    lwz r4, lbl_80789548@l(r3)
    lwz r3, 0x0(r5)
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_80353254_00001274
    lwz r0, 0x0(r30)
    stw r0, 0x0(r29)
    b lbl_fn_80353254_0000127C
lbl_fn_80353254_00001274:
    li r0, 0x0
    stw r0, 0x0(r29)
lbl_fn_80353254_0000127C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80353370(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_8074AA58@ha
    stw r0, 0x24(r1)
    addi r4, r4, lbl_8074AA58@l
    addi r4, r4, 0x432
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r0, 0x1cc0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80353370_000012F0
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_80353370_000012F0
    addi r3, r3, 0x10
    bl fn_8008937C
    stw r3, 0x1cc0(r28)
    mr r29, r3
    b lbl_fn_80353370_000012F4
lbl_fn_80353370_000012F0:
    li r29, 0x0
lbl_fn_80353370_000012F4:
    lis r30, lbl_8074AA58@ha
    mr r3, r29
    addi r30, r30, lbl_8074AA58@l
    addi r5, r28, 0x1cc4
    addi r4, r30, 0x438
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    lis r31, 0xf
    mr r3, r29
    addi r4, r30, 0x1b8
    addi r5, r28, 0x1cd0
    addi r7, r31, 0x423f
    li r6, 0x1
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r29
    addi r4, r30, 0x1c7
    addi r5, r28, 0x1818
    addi r7, r31, 0x423f
    li r6, 0x1
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r29
    addi r4, r30, 0x1db
    addi r5, r28, 0x17fc
    addi r7, r31, 0x423f
    li r6, 0x1
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r29
    addi r4, r30, 0x1e5
    addi r5, r28, 0x1800
    addi r7, r31, 0x423f
    li r6, 0x1
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r29
    addi r4, r30, 0x442
    addi r5, r28, 0x1cd4
    li r6, 0x1
    li r7, 0x3e7
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_80885378
    mr r3, r29
    lfs f2, lbl_808854B8
    addi r4, r30, 0x22d
    lfs f3, lbl_80885394
    addi r5, r28, 0x1ce0
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80885378
    mr r3, r29
    lfs f2, lbl_808854B8
    addi r4, r30, 0x238
    lfs f3, lbl_80885394
    addi r5, r28, 0x1ce4
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80885378
    mr r3, r29
    lfs f2, lbl_808854B8
    addi r4, r30, 0x244
    lfs f3, lbl_80885394
    addi r5, r28, 0x1ce8
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80885378
    mr r3, r29
    lfs f2, lbl_80885490
    addi r4, r30, 0x20b
    lfs f3, lbl_80885394
    addi r5, r28, 0x1cd8
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    mr r3, r29
    addi r4, r30, 0x21e
    addi r5, r28, 0x1cdc
    addi r7, r31, 0x423f
    li r6, 0x0
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_80885378
    mr r3, r29
    lfs f2, lbl_808854BC
    addi r4, r30, 0x451
    lfs f3, lbl_80885394
    addi r5, r28, 0x1cc8
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8035359C(void)
{
    nofralloc
    stwu r1, -0x100(r1)
    mflr r0
    stw r0, 0x104(r1)
    stfd f31, 0xf0(r1)
    psq_st f31, 0xf8(r1), 0, 0
    stfd f30, 0xe0(r1)
    psq_st f30, 0xe8(r1), 0, 0
    stfd f29, 0xd0(r1)
    psq_st f29, 0xd8(r1), 0, 0
    stw r31, 0xcc(r1)
    mr r31, r3
    stw r30, 0xc8(r1)
    stw r29, 0xc4(r1)
    lwz r7, 0x17e4(r3)
    cmpwi r7, 0x0
    bne lbl_fn_8035359C_00001A3C
    lwz r0, 0x14bc(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8035359C_000016A0
    lwz r3, 0x14b0(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8035359C_000016A0
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 3
    bne lbl_fn_8035359C_000016A0
    lwz r3, lbl_8087F8A0
    lfs f31, lbl_808854C0
    lwz r30, 0x48(r3)
    lfs f30, lbl_80885454
    lfs f29, lbl_808853C8
    b lbl_fn_8035359C_00001698
lbl_fn_8035359C_00001540:
    lwz r7, 0x560(r30)
    cmpwi r7, 0x17
    bne lbl_fn_8035359C_00001694
    lwz r6, 0x38(r30)
    li r4, 0x0
    li r3, 0x0
    li r5, 0x0
    rlwinm r0, r6, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_8035359C_00001578
    clrlwi r0, r6, 31
    cmplwi r0, 0x1
    beq lbl_fn_8035359C_00001578
    li r5, 0x1
lbl_fn_8035359C_00001578:
    cmpwi r5, 0x0
    beq lbl_fn_8035359C_00001594
    lwz r0, 0x7e0(r30)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_8035359C_00001594
    li r3, 0x1
lbl_fn_8035359C_00001594:
    cmpwi r3, 0x0
    beq lbl_fn_8035359C_000015C4
    lwz r0, 0x55c(r30)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_8035359C_000015B8
    cmpwi r7, 0x1c
    bne lbl_fn_8035359C_000015B8
    li r3, 0x1
lbl_fn_8035359C_000015B8:
    cmpwi r3, 0x0
    bne lbl_fn_8035359C_000015C4
    li r4, 0x1
lbl_fn_8035359C_000015C4:
    cmpwi r4, 0x0
    beq lbl_fn_8035359C_00001694
    lfs f2, 0x530(r30)
    lfs f0, 0x1614(r31)
    lfs f1, 0x528(r30)
    fsubs f4, f2, f0
    lfs f0, 0x160c(r31)
    lfs f2, 0x52c(r30)
    fsubs f3, f1, f0
    lfs f1, 0x1610(r31)
    fmuls f0, f4, f4
    fsubs f2, f2, f1
    stfs f3, 0x28(r1)
    fmadds f1, f3, f3, f0
    stfs f2, 0x2c(r1)
    stfs f4, 0x30(r1)
    bl fn_8068B100
    frsp f0, f1
    fcmpo cr0, f0, f29
    cror eq, gt, eq
    beq lbl_fn_8035359C_00001694
    lwz r0, 0x14b0(r31)
    cmplw r0, r30
    bne lbl_fn_8035359C_0000162C
    stw r30, 0x17e4(r31)
    b lbl_fn_8035359C_000016A0
lbl_fn_8035359C_0000162C:
    lfs f3, 0x52c(r30)
    lfs f0, 0x52c(r31)
    fsubs f0, f3, f0
    fabs f0, f0
    frsp f0, f0
    fcmpo cr0, f0, f30
    bge lbl_fn_8035359C_00001694
    lfs f1, 0x530(r30)
    lfs f0, 0x530(r31)
    lfs f2, 0x52c(r31)
    fsubs f4, f1, f0
    lfs f1, 0x528(r30)
    lfs f0, 0x528(r31)
    fsubs f2, f3, f2
    stfs f4, 0x3c(r1)
    fsubs f1, f1, f0
    fmuls f0, f4, f4
    stfs f2, 0x38(r1)
    stfs f1, 0x34(r1)
    fmadds f1, f1, f1, f0
    bl fn_8068B100
    frsp f0, f1
    fcmpo cr0, f0, f31
    bge lbl_fn_8035359C_00001694
    fmr f31, f0
    stw r30, 0x17e4(r31)
lbl_fn_8035359C_00001694:
    lwz r30, 0x14ac(r30)
lbl_fn_8035359C_00001698:
    cmpwi r30, 0x0
    bne lbl_fn_8035359C_00001540
lbl_fn_8035359C_000016A0:
    lwz r7, 0x17e4(r31)
    cmpwi r7, 0x0
    beq lbl_fn_8035359C_00001AE8
    lwz r0, 0xf80(r7)
    cmpwi r0, 0x0
    beq lbl_fn_8035359C_00001AE8
    lbz r0, lbl_8087F411
    lis r6, lbl_80789534@ha
    lwzu r5, lbl_80789534@l(r6)
    li r3, 0x0
    extsb. r0, r0
    stw r7, 0x8(r1)
    lwz r4, 0x4(r6)
    lwz r0, 0x8(r6)
    stw r31, 0xc(r1)
    stw r5, 0x1c(r1)
    stw r4, 0x20(r1)
    stw r0, 0x24(r1)
    stw r5, 0x10(r1)
    stw r4, 0x14(r1)
    stw r0, 0x18(r1)
    stw r5, 0xa4(r1)
    stw r4, 0xa8(r1)
    stw r0, 0xac(r1)
    stw r7, 0xb0(r1)
    stw r31, 0xb4(r1)
    stw r3, 0x90(r1)
    bne lbl_fn_8035359C_00001738
    lis r6, lbl_807C8450@ha
    lis r4, fn_80353C9C@ha
    lis r3, fn_80353CCC@ha
    li r0, 0x1
    addi r3, r3, fn_80353CCC@l
    addi r5, r6, lbl_807C8450@l
    addi r4, r4, fn_80353C9C@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C8450@l(r6)
    stb r0, lbl_8087F411
lbl_fn_8035359C_00001738:
    lwz r7, 0xa4(r1)
    addi r3, r1, 0x7c
    lwz r6, 0xa8(r1)
    lwz r5, 0xac(r1)
    lwz r4, 0xb0(r1)
    lwz r0, 0xb4(r1)
    stw r7, 0x7c(r1)
    stw r6, 0x80(r1)
    stw r5, 0x84(r1)
    stw r4, 0x88(r1)
    stw r0, 0x8c(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_8035359C_0000180C
    lwz r7, 0x7c(r1)
    li r3, 0x14
    lwz r6, 0x80(r1)
    lwz r5, 0x84(r1)
    lwz r4, 0x88(r1)
    lwz r0, 0x8c(r1)
    stw r7, 0x68(r1)
    stw r6, 0x6c(r1)
    stw r5, 0x70(r1)
    stw r4, 0x74(r1)
    stw r0, 0x78(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_8035359C_000017D0
    lis r3, __files@ha
    lis r4, lbl_80789680@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80789680@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8035359C_000017D0:
    cmpwi r30, 0x0
    beq lbl_fn_8035359C_00001800
    lwz r0, 0x68(r1)
    stw r0, 0x0(r30)
    lwz r0, 0x6c(r1)
    stw r0, 0x4(r30)
    lwz r0, 0x70(r1)
    stw r0, 0x8(r30)
    lwz r0, 0x74(r1)
    stw r0, 0xc(r30)
    lwz r0, 0x78(r1)
    stw r0, 0x10(r30)
lbl_fn_8035359C_00001800:
    stw r30, 0x94(r1)
    li r0, 0x1
    b lbl_fn_8035359C_00001810
lbl_fn_8035359C_0000180C:
    li r0, 0x0
lbl_fn_8035359C_00001810:
    cmpwi r0, 0x0
    beq lbl_fn_8035359C_00001828
    lis r3, lbl_807C8450@ha
    addi r3, r3, lbl_807C8450@l
    stw r3, 0x90(r1)
    b lbl_fn_8035359C_00001830
lbl_fn_8035359C_00001828:
    li r0, 0x0
    stw r0, 0x90(r1)
lbl_fn_8035359C_00001830:
    lwz r3, 0x17e4(r31)
    li r0, 0x0
    lwz r6, 0x90(r1)
    lwz r30, 0xf80(r3)
    cmpwi r6, 0x0
    stw r0, 0x54(r1)
    beq lbl_fn_8035359C_00001868
    stw r6, 0x54(r1)
    addi r3, r1, 0x94
    addi r4, r1, 0x58
    li r5, 0x0
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_8035359C_00001868:
    addi r3, r30, 0x24
    addi r0, r1, 0x54
    cmplw r3, r0
    beq lbl_fn_8035359C_000019C0
    lwz r3, 0x54(r1)
    li r0, 0x0
    stw r0, 0x40(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8035359C_000018AC
    lwz r6, 0x54(r1)
    addi r3, r1, 0x58
    stw r6, 0x40(r1)
    addi r4, r1, 0x44
    li r5, 0x0
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_8035359C_000018AC:
    addi r3, r30, 0x24
    addi r0, r1, 0x54
    cmplw r3, r0
    beq lbl_fn_8035359C_0000191C
    lwz r3, 0x54(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8035359C_000018F0
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_8035359C_000018E8
    addi r3, r1, 0x58
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8035359C_000018E8:
    li r0, 0x0
    stw r0, 0x54(r1)
lbl_fn_8035359C_000018F0:
    lwz r0, 0x24(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8035359C_0000191C
    stw r0, 0x54(r1)
    addi r3, r30, 0x28
    addi r4, r1, 0x58
    li r5, 0x0
    lwz r6, 0x24(r30)
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_8035359C_0000191C:
    addi r3, r1, 0x40
    addi r0, r30, 0x24
    cmplw r3, r0
    beq lbl_fn_8035359C_0000198C
    lwz r3, 0x24(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8035359C_00001960
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_8035359C_00001958
    addi r3, r30, 0x28
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8035359C_00001958:
    li r0, 0x0
    stw r0, 0x24(r30)
lbl_fn_8035359C_00001960:
    lwz r0, 0x40(r1)
    cmpwi r0, 0x0
    beq lbl_fn_8035359C_0000198C
    stw r0, 0x24(r30)
    addi r3, r1, 0x44
    addi r4, r30, 0x28
    li r5, 0x0
    lwz r6, 0x40(r1)
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_8035359C_0000198C:
    lwz r3, 0x40(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8035359C_000019C0
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_8035359C_000019B8
    addi r3, r1, 0x44
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8035359C_000019B8:
    li r0, 0x0
    stw r0, 0x40(r1)
lbl_fn_8035359C_000019C0:
    addic. r3, r1, 0x54
    beq lbl_fn_8035359C_000019FC
    lwz r4, 0x54(r1)
    cmpwi r4, 0x0
    beq lbl_fn_8035359C_000019FC
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_8035359C_000019F4
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8035359C_000019F4:
    li r0, 0x0
    stw r0, 0x54(r1)
lbl_fn_8035359C_000019FC:
    addic. r3, r1, 0x90
    beq lbl_fn_8035359C_00001AE8
    lwz r4, 0x90(r1)
    cmpwi r4, 0x0
    beq lbl_fn_8035359C_00001AE8
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_8035359C_00001A30
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8035359C_00001A30:
    li r0, 0x0
    stw r0, 0x90(r1)
    b lbl_fn_8035359C_00001AE8
lbl_fn_8035359C_00001A3C:
    lwz r8, 0x38(r7)
    li r5, 0x0
    li r4, 0x0
    li r6, 0x0
    rlwinm r0, r8, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_8035359C_00001A68
    clrlwi r0, r8, 31
    cmplwi r0, 0x1
    beq lbl_fn_8035359C_00001A68
    li r6, 0x1
lbl_fn_8035359C_00001A68:
    cmpwi r6, 0x0
    beq lbl_fn_8035359C_00001A84
    lwz r0, 0x7e0(r7)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_8035359C_00001A84
    li r4, 0x1
lbl_fn_8035359C_00001A84:
    cmpwi r4, 0x0
    beq lbl_fn_8035359C_00001AB8
    lwz r0, 0x55c(r7)
    li r4, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_8035359C_00001AAC
    lwz r0, 0x560(r7)
    cmpwi r0, 0x1c
    bne lbl_fn_8035359C_00001AAC
    li r4, 0x1
lbl_fn_8035359C_00001AAC:
    cmpwi r4, 0x0
    bne lbl_fn_8035359C_00001AB8
    li r5, 0x1
lbl_fn_8035359C_00001AB8:
    cmpwi r5, 0x0
    beq lbl_fn_8035359C_00001AE0
    lwz r0, 0x55c(r7)
    cmpwi r0, 0x6
    bne lbl_fn_8035359C_00001AE0
    lwz r0, 0x560(r7)
    cmpwi r0, 0x53
    beq lbl_fn_8035359C_00001AE8
    cmpwi r0, 0x17
    beq lbl_fn_8035359C_00001AE8
lbl_fn_8035359C_00001AE0:
    li r0, 0x0
    stw r0, 0x17e4(r3)
lbl_fn_8035359C_00001AE8:
    lwz r3, lbl_8087F048
    mr r4, r31
    bl fn_80103F60
    lwz r0, 0x17e4(r31)
    mr r30, r3
    cmpwi r0, 0x0
    beq lbl_fn_8035359C_00001B5C
    lwz r3, lbl_8087F8A0
    lfs f31, lbl_80885378
    lwz r29, 0x48(r3)
    lfs f30, lbl_808854BC
    b lbl_fn_8035359C_00001B50
lbl_fn_8035359C_00001B18:
    mr r3, r30
    mr r4, r29
    bl fn_80108378
    lwz r0, 0x17e4(r31)
    cmplw r29, r0
    bne lbl_fn_8035359C_00001B40
    slwi r0, r3, 2
    add r3, r30, r0
    stfs f30, 0x128(r3)
    b lbl_fn_8035359C_00001B4C
lbl_fn_8035359C_00001B40:
    slwi r0, r3, 2
    add r3, r30, r0
    stfs f31, 0x128(r3)
lbl_fn_8035359C_00001B4C:
    lwz r29, 0x14ac(r29)
lbl_fn_8035359C_00001B50:
    cmpwi r29, 0x0
    bne lbl_fn_8035359C_00001B18
    b lbl_fn_8035359C_00001B90
lbl_fn_8035359C_00001B5C:
    lwz r3, lbl_8087F8A0
    lfs f31, lbl_80885398
    lwz r29, 0x48(r3)
    b lbl_fn_8035359C_00001B88
lbl_fn_8035359C_00001B6C:
    mr r3, r30
    mr r4, r29
    bl fn_80108378
    slwi r0, r3, 2
    add r3, r30, r0
    stfs f31, 0x128(r3)
    lwz r29, 0x14ac(r29)
lbl_fn_8035359C_00001B88:
    cmpwi r29, 0x0
    bne lbl_fn_8035359C_00001B6C
lbl_fn_8035359C_00001B90:
    lwz r0, 0x104(r1)
    psq_l f31, 0xf8(r1), 0, 0
    lfd f31, 0xf0(r1)
    psq_l f30, 0xe8(r1), 0, 0
    lfd f30, 0xe0(r1)
    psq_l f29, 0xd8(r1), 0, 0
    lfd f29, 0xd0(r1)
    lwz r31, 0xcc(r1)
    lwz r30, 0xc8(r1)
    lwz r29, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0x100
    blr
}
