#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_20(void);
extern void _restgpr_25(void);
extern void _restgpr_27(void);
extern void _savegpr_20(void);
extern void _savegpr_25(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_8004ED34(void);
extern void fn_8005B3CC(void);
extern void fn_8005B5F8(void);
extern void fn_8005B6E8(void);
extern void fn_8006AFF8(void);
extern void fn_80084320(void);
extern void fn_80087994(void);
extern void fn_8008937C(void);
extern void fn_80092814(void);
extern void fn_800D246C(void);
extern void fn_800DD3FC(void);
extern void fn_800F8574(void);
extern void fn_80109828(void);
extern void fn_8013322C(void);
extern void fn_80134674(void);
extern void fn_8013655C(void);
extern void fn_80139560(void);
extern void fn_80151448(void);
extern void fn_8015E4B0(void);
extern void fn_8016D74C(void);
extern void fn_8016E970(void);
extern void fn_80178208(void);
extern void fn_801B2480(void);
extern void fn_80219E6C(void);
extern void fn_802377B8(void);
extern void fn_8023780C(void);
extern void fn_80237874(void);
extern void fn_80239DAC(void);
extern void fn_8035B694(void);
extern void fn_80370A78(void);
extern void fn_80370AE4(void);
extern void fn_803C1560(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473E74(void);
extern void fn_80473F50(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9940(void);
extern void fn_80682428(void);
extern void fn_80682544(void);
extern void fn_80684600(void);
extern void fn_8068AEA4(void);
extern void fn_8068B100(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_807440D8[];
extern u8 lbl_807440F4[];
extern u8 lbl_80744298[];
extern u8 lbl_807772B0[];
extern u8 lbl_807772D0[];
extern u8 lbl_80784AC8[];
extern u8 lbl_8078FBB0[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087D708;
extern u32 lbl_8087EE98;
extern u32 lbl_8087EF10;
extern u32 lbl_8087F048;
extern u32 lbl_8087F1E4;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F8A0;
extern u32 lbl_808813D0;
extern u32 lbl_808834F0;
extern u32 lbl_80883500;
extern u32 lbl_80883508;
extern u32 lbl_8088350C;
extern u32 lbl_80883510;
extern u32 lbl_80883514;
extern u32 lbl_80883518;
extern u32 lbl_8088351C;
extern u32 lbl_8088352C;
extern u32 lbl_80883530;
extern u32 lbl_80883534;
extern u32 lbl_80883538;
extern u32 lbl_8088353C;
extern u32 lbl_80883540;
extern u32 lbl_80883544;
extern u32 lbl_80883548;
extern u32 lbl_8088354C;
extern u32 lbl_80883550;
extern u32 lbl_80883554;
extern u32 lbl_80883558;
extern u32 lbl_8088355C;
extern u32 lbl_80883560;
extern u32 lbl_80883564;
extern u32 lbl_80883568;
extern u32 lbl_8088356C;
extern u32 lbl_80883570;
extern u32 lbl_80883578;

/* Function declarations */
void fn_8025E9E4(void);
void fn_8025EAE4(void);
void fn_8025F07C(void);
void fn_8025F35C(void);
void fn_8025F45C(void);
void fn_8025F754(void);
void fn_8025F7D0(void);
void fn_8025F8C8(void);
void fn_8025FE30(void);
void fn_8025FE60(void);
void fn_80260218(void);
void fn_80260324(void);

asm void fn_8025E9E4(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r3
    lwz r0, 0x14f4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8025E9E4_00000098
    lfs f1, 0x2e4(r3)
    lfs f0, lbl_8088352C
    fcmpo cr0, f1, f0
    ble lbl_fn_8025E9E4_000000EC
    lfs f0, lbl_80883500
    lis r4, lbl_807440F4@ha
    stfs f0, 0x12cc(r3)
    addi r4, r4, lbl_807440F4@l
    addi r4, r4, 0x119
    li r5, 0x0
    addi r3, r3, 0xb0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8025E9E4_00000060
    li r4, 0x0
    b lbl_fn_8025E9E4_0000006C
lbl_fn_8025E9E4_00000060:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r4, r3, r0
lbl_fn_8025E9E4_0000006C:
    lfs f0, 0x2c(r4)
    mr r3, r31
    lfs f1, 0x1c(r4)
    lfs f2, 0xc(r4)
    stfs f2, 0x20(r1)
    stfs f1, 0xc(r1)
    stfs f0, 0x1c(r1)
    bl fn_8025EAE4
    li r0, 0x1
    stw r0, 0x14f4(r31)
    b lbl_fn_8025E9E4_000000EC
lbl_fn_8025E9E4_00000098:
    lfs f1, 0x2e4(r3)
    lfs f0, lbl_80883530
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_8025E9E4_000000EC
    li r0, 0x0
    stw r0, 0x14d0(r3)
    li r4, 0x3
    stw r0, 0x14f4(r3)
    stw r0, 0x58c(r3)
    bl fn_8016E970
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x1f4
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x66
    li r6, 0x1
    bl fn_80239DAC
lbl_fn_8025E9E4_000000EC:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8025EAE4(void)
{
    nofralloc
    stwu r1, -0x350(r1)
    mflr r0
    stw r0, 0x354(r1)
    addi r11, r1, 0x250
    stfd f31, 0x340(r1)
    psq_st f31, 0x348(r1), 0, 0
    stfd f30, 0x330(r1)
    psq_st f30, 0x338(r1), 0, 0
    stfd f29, 0x320(r1)
    psq_st f29, 0x328(r1), 0, 0
    stfd f28, 0x310(r1)
    psq_st f28, 0x318(r1), 0, 0
    stfd f27, 0x300(r1)
    psq_st f27, 0x308(r1), 0, 0
    stfd f26, 0x2f0(r1)
    psq_st f26, 0x2f8(r1), 0, 0
    stfd f25, 0x2e0(r1)
    psq_st f25, 0x2e8(r1), 0, 0
    stfd f24, 0x2d0(r1)
    psq_st f24, 0x2d8(r1), 0, 0
    stfd f23, 0x2c0(r1)
    psq_st f23, 0x2c8(r1), 0, 0
    stfd f22, 0x2b0(r1)
    psq_st f22, 0x2b8(r1), 0, 0
    stfd f21, 0x2a0(r1)
    psq_st f21, 0x2a8(r1), 0, 0
    stfd f20, 0x290(r1)
    psq_st f20, 0x298(r1), 0, 0
    stfd f19, 0x280(r1)
    psq_st f19, 0x288(r1), 0, 0
    stfd f18, 0x270(r1)
    psq_st f18, 0x278(r1), 0, 0
    stfd f17, 0x260(r1)
    psq_st f17, 0x268(r1), 0, 0
    stfd f16, 0x250(r1)
    psq_st f16, 0x258(r1), 0, 0
    bl _savegpr_20
    lwz r0, 0x1524(r3)
    lis r4, 0x4330
    stw r4, 0x208(r1)
    mr r20, r3
    cmpwi r0, 0x0
    stw r4, 0x210(r1)
    beq lbl_fn_8025EAE4_00000600
    lwz r6, lbl_8087F8A0
    lis r4, lbl_807440D8@ha
    lis r5, lbl_807440F4@ha
    lfs f20, lbl_808834F0
    lwz r21, 0x48(r6)
    addi r23, r3, 0xb0
    lfs f21, lbl_80883538
    addi r29, r5, lbl_807440F4@l
    lfd f22, lbl_807440D8@l(r4)
    addi r28, r1, 0x1b0
    lfs f23, lbl_8088353C
    addi r24, r1, 0x30
    lfs f24, lbl_80883540
    addi r27, r1, 0x150
    lfs f25, lbl_80883544
    addi r25, r1, 0x90
    lfs f26, lbl_80883548
    addi r26, r1, 0xf0
    lfs f27, lbl_80883500
    li r22, 0x0
    lfs f28, lbl_80883514
    li r30, 0x0
    lfs f29, lbl_8088354C
    li r31, -0x1
    lfs f30, lbl_80883550
    lfs f31, lbl_80883554
    lfs f19, lbl_80883558
    lfs f18, lbl_8088355C
    lfs f17, lbl_80883560
    lfs f16, lbl_80883564
    b lbl_fn_8025EAE4_000005F8
lbl_fn_8025EAE4_0000022C:
    mr r3, r23
    addi r4, r29, 0x11e
    li r5, 0x0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8025EAE4_0000024C
    li r5, 0x0
    b lbl_fn_8025EAE4_00000258
lbl_fn_8025EAE4_0000024C:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r23)
    add r5, r3, r0
lbl_fn_8025EAE4_00000258:
    lfs f0, 0x2c(r5)
    mr r3, r23
    lfs f7, 0x1c(r5)
    addi r4, r29, 0x11e
    lfs f8, 0xc(r5)
    li r5, 0x0
    stfs f8, 0x20(r1)
    stfs f7, 0x24(r1)
    stfs f0, 0x28(r1)
    stfs f20, 0x14(r1)
    stfs f20, 0x18(r1)
    stfs f21, 0x1c(r1)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8025EAE4_0000029C
    li r6, 0x0
    b lbl_fn_8025EAE4_000002A8
lbl_fn_8025EAE4_0000029C:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r23)
    add r6, r3, r0
lbl_fn_8025EAE4_000002A8:
    psq_l f1, 0x0(r6), 0, 0
    addi r4, r1, 0x14
    psq_l f2, 0x8(r6), 0, 0
    mr r3, r28
    psq_l f3, 0x10(r6), 0, 0
    mr r5, r4
    psq_l f4, 0x18(r6), 0, 0
    psq_l f5, 0x20(r6), 0, 0
    psq_l f6, 0x28(r6), 0, 0
    psq_st f6, 0x28(r28), 0, 0
    psq_st f2, 0x8(r28), 0, 0
    psq_st f4, 0x18(r28), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    psq_st f3, 0x10(r28), 0, 0
    psq_st f5, 0x20(r28), 0, 0
    stfs f20, 0x1bc(r1)
    stfs f20, 0x1cc(r1)
    stfs f20, 0x1dc(r1)
    bl fn_805F93C0
    lfs f7, 0x20(r1)
    xoris r0, r22, 0x8000
    lfs f0, 0x14(r1)
    addi r3, r1, 0x180
    lfs f9, 0x24(r1)
    li r4, 0x7a
    fadds f10, f7, f0
    lfs f8, 0x18(r1)
    lfs f7, 0x28(r1)
    lfs f0, 0x1c(r1)
    fadds f8, f9, f8
    stfs f10, 0x20(r1)
    fadds f0, f7, f0
    lwz r5, lbl_8087F8A0
    stfs f8, 0x24(r1)
    stfs f0, 0x28(r1)
    lwz r5, 0x4c(r5)
    stw r0, 0x20c(r1)
    xoris r0, r5, 0x8000
    stw r0, 0x214(r1)
    lfd f0, 0x208(r1)
    lfd f7, 0x210(r1)
    fsubs f0, f0, f22
    stfs f24, 0x8(r1)
    fsubs f7, f7, f22
    stfs f20, 0xc(r1)
    fdivs f7, f23, f7
    stfs f25, 0x10(r1)
    fmuls f0, f7, f0
    fmuls f1, f26, f0
    bl fn_805F8E70
    addi r4, r1, 0x8
    addi r3, r1, 0x180
    mr r5, r4
    bl fn_805F93C0
    stfs f20, 0x17c(r1)
    stfs f20, 0x174(r1)
    stfs f20, 0x170(r1)
    stfs f20, 0x16c(r1)
    stfs f20, 0x168(r1)
    stfs f20, 0x160(r1)
    stfs f20, 0x15c(r1)
    stfs f20, 0x158(r1)
    stfs f20, 0x154(r1)
    stfs f27, 0x178(r1)
    stfs f27, 0x164(r1)
    stfs f27, 0x150(r1)
    lfs f1, 0x53c(r20)
    fcmpu cr0, f20, f1
    beq lbl_fn_8025EAE4_00000408
    addi r3, r1, 0x60
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r27
    addi r4, r1, 0x60
    addi r5, r1, 0x30
    bl fn_805F89F0
    psq_l f1, 0x0(r24), 0, 0
    psq_l f2, 0x8(r24), 0, 0
    psq_l f3, 0x10(r24), 0, 0
    psq_l f4, 0x18(r24), 0, 0
    psq_l f5, 0x20(r24), 0, 0
    psq_l f6, 0x28(r24), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    psq_st f2, 0x8(r27), 0, 0
    psq_st f3, 0x10(r27), 0, 0
    psq_st f4, 0x18(r27), 0, 0
    psq_st f5, 0x20(r27), 0, 0
    psq_st f6, 0x28(r27), 0, 0
lbl_fn_8025EAE4_00000408:
    lfs f1, 0x538(r20)
    fcmpu cr0, f20, f1
    beq lbl_fn_8025EAE4_00000460
    addi r3, r1, 0xc0
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r27
    addi r4, r1, 0xc0
    addi r5, r1, 0x90
    bl fn_805F89F0
    psq_l f1, 0x0(r25), 0, 0
    psq_l f2, 0x8(r25), 0, 0
    psq_l f3, 0x10(r25), 0, 0
    psq_l f4, 0x18(r25), 0, 0
    psq_l f5, 0x20(r25), 0, 0
    psq_l f6, 0x28(r25), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    psq_st f2, 0x8(r27), 0, 0
    psq_st f3, 0x10(r27), 0, 0
    psq_st f4, 0x18(r27), 0, 0
    psq_st f5, 0x20(r27), 0, 0
    psq_st f6, 0x28(r27), 0, 0
lbl_fn_8025EAE4_00000460:
    lfs f1, 0x534(r20)
    fcmpu cr0, f20, f1
    beq lbl_fn_8025EAE4_000004B8
    addi r3, r1, 0x120
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r27
    addi r4, r1, 0x120
    addi r5, r1, 0xf0
    bl fn_805F89F0
    psq_l f1, 0x0(r26), 0, 0
    psq_l f2, 0x8(r26), 0, 0
    psq_l f3, 0x10(r26), 0, 0
    psq_l f4, 0x18(r26), 0, 0
    psq_l f5, 0x20(r26), 0, 0
    psq_l f6, 0x28(r26), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    psq_st f2, 0x8(r27), 0, 0
    psq_st f3, 0x10(r27), 0, 0
    psq_st f4, 0x18(r27), 0, 0
    psq_st f5, 0x20(r27), 0, 0
    psq_st f6, 0x28(r27), 0, 0
lbl_fn_8025EAE4_000004B8:
    addi r4, r1, 0x8
    addi r3, r1, 0x150
    mr r5, r4
    bl fn_805F93C0
    stw r30, 0x1e0(r1)
    lwz r3, lbl_8087F8A0
    stfs f20, 0x1e4(r1)
    stfs f28, 0x1e8(r1)
    stfs f29, 0x1ec(r1)
    stfs f30, 0x1f0(r1)
    stfs f31, 0x1f4(r1)
    stfs f19, 0x1f8(r1)
    stw r30, 0x1fc(r1)
    stw r31, 0x200(r1)
    lwz r6, 0x48(r3)
    lwz r0, 0x12a4(r6)
    extrwi. r0, r0, 1, 3
    beq lbl_fn_8025EAE4_00000510
    cmplw r21, r6
    bne lbl_fn_8025EAE4_000005F4
    stw r6, 0x1e0(r1)
    b lbl_fn_8025EAE4_0000059C
lbl_fn_8025EAE4_00000510:
    lwz r7, 0x38(r21)
    li r4, 0x0
    li r3, 0x0
    li r5, 0x0
    rlwinm r0, r7, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_8025EAE4_0000053C
    clrlwi r0, r7, 31
    cmplwi r0, 0x1
    beq lbl_fn_8025EAE4_0000053C
    li r5, 0x1
lbl_fn_8025EAE4_0000053C:
    cmpwi r5, 0x0
    beq lbl_fn_8025EAE4_00000558
    lwz r0, 0x7e0(r21)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_8025EAE4_00000558
    li r3, 0x1
lbl_fn_8025EAE4_00000558:
    cmpwi r3, 0x0
    beq lbl_fn_8025EAE4_0000058C
    lwz r0, 0x55c(r21)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_8025EAE4_00000580
    lwz r0, 0x560(r21)
    cmpwi r0, 0x1c
    bne lbl_fn_8025EAE4_00000580
    li r3, 0x1
lbl_fn_8025EAE4_00000580:
    cmpwi r3, 0x0
    bne lbl_fn_8025EAE4_0000058C
    li r4, 0x1
lbl_fn_8025EAE4_0000058C:
    cmpwi r4, 0x0
    beq lbl_fn_8025EAE4_00000598
    mr r6, r21
lbl_fn_8025EAE4_00000598:
    stw r6, 0x1e0(r1)
lbl_fn_8025EAE4_0000059C:
    stfs f29, 0x1f8(r1)
    mr r4, r20
    lwz r3, lbl_8087F048
    addi r6, r1, 0x20
    stfs f18, 0x1e4(r1)
    addi r7, r1, 0x8
    lfs f1, lbl_808834F0
    addi r8, r1, 0x1e0
    stfs f17, 0x1ec(r1)
    li r9, 0x24
    lfs f2, lbl_80883500
    li r10, 0x1e
    lwz r5, 0x1524(r20)
    lwz r0, 0x5c(r5)
    xoris r0, r0, 0x8000
    stw r0, 0x214(r1)
    lfd f0, 0x210(r1)
    stfs f16, 0x1f0(r1)
    fsubs f0, f0, f22
    stfs f0, 0x1f4(r1)
    bl fn_800F8574
    addi r22, r22, 0x1
lbl_fn_8025EAE4_000005F4:
    lwz r21, 0x14ac(r21)
lbl_fn_8025EAE4_000005F8:
    cmpwi r21, 0x0
    bne lbl_fn_8025EAE4_0000022C
lbl_fn_8025EAE4_00000600:
    addi r11, r1, 0x250
    psq_l f31, 0x348(r1), 0, 0
    lfd f31, 0x340(r1)
    psq_l f30, 0x338(r1), 0, 0
    lfd f30, 0x330(r1)
    psq_l f29, 0x328(r1), 0, 0
    lfd f29, 0x320(r1)
    psq_l f28, 0x318(r1), 0, 0
    lfd f28, 0x310(r1)
    psq_l f27, 0x308(r1), 0, 0
    lfd f27, 0x300(r1)
    psq_l f26, 0x2f8(r1), 0, 0
    lfd f26, 0x2f0(r1)
    psq_l f25, 0x2e8(r1), 0, 0
    lfd f25, 0x2e0(r1)
    psq_l f24, 0x2d8(r1), 0, 0
    lfd f24, 0x2d0(r1)
    psq_l f23, 0x2c8(r1), 0, 0
    lfd f23, 0x2c0(r1)
    psq_l f22, 0x2b8(r1), 0, 0
    lfd f22, 0x2b0(r1)
    psq_l f21, 0x2a8(r1), 0, 0
    lfd f21, 0x2a0(r1)
    psq_l f20, 0x298(r1), 0, 0
    lfd f20, 0x290(r1)
    psq_l f19, 0x288(r1), 0, 0
    lfd f19, 0x280(r1)
    psq_l f18, 0x278(r1), 0, 0
    lfd f18, 0x270(r1)
    psq_l f17, 0x268(r1), 0, 0
    lfd f17, 0x260(r1)
    psq_l f16, 0x258(r1), 0, 0
    lfd f16, 0x250(r1)
    bl _restgpr_20
    lwz r0, 0x354(r1)
    mtlr r0
    addi r1, r1, 0x350
    blr
}

asm void fn_8025F07C(void)
{
    nofralloc
    stwu r1, -0x310(r1)
    mflr r0
    li r4, 0x8
    li r5, 0x200
    stw r0, 0x314(r1)
    li r0, 0x0
    stfd f31, 0x300(r1)
    psq_st f31, 0x308(r1), 0, 0
    stfd f30, 0x2f0(r1)
    psq_st f30, 0x2f8(r1), 0, 0
    stw r31, 0x2ec(r1)
    stw r30, 0x2e8(r1)
    mr r30, r3
    stw r4, 0x58c(r3)
    li r4, 0x0
    stw r0, 0x14d0(r3)
    stw r0, 0x14f4(r3)
    addi r3, r1, 0xe8
    bl memset
    lwz r3, lbl_8087F1E4
    lwz r4, 0x2a4(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8025F07C_000006F8
    b lbl_fn_8025F07C_000006FC
lbl_fn_8025F07C_000006F8:
    la r4, lbl_808813D0
lbl_fn_8025F07C_000006FC:
    lwz r5, 0x60(r30)
    addi r3, r1, 0xe8
    lwz r5, 0x4(r5)
    crclr 6
    bl fn_800DD3FC
    lwz r3, lbl_8087F048
    addi r4, r1, 0xe8
    bl fn_80109828
    lfs f3, 0x530(r30)
    addi r3, r1, 0x50
    lfs f0, 0x1598(r30)
    addi r31, r1, 0x5c
    lfs f5, 0x52c(r30)
    fsubs f2, f3, f0
    lfs f4, 0x1594(r30)
    lfs f3, 0x528(r30)
    fsubs f4, f5, f4
    lfs f0, 0x1590(r30)
    stfs f2, 0x58(r1)
    fsubs f3, f3, f0
    lfs f0, lbl_80883508
    stfs f4, 0x54(r1)
    frsp f4, f2
    stfs f3, 0x50(r1)
    fabs f3, f4
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    frsp f3, f3
    stfs f2, 0x64(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_8025F07C_0000079C
    lfs f3, 0x5c(r1)
    lfs f0, lbl_808834F0
    fcmpo cr0, f3, f0
    ble lbl_fn_8025F07C_00000790
    lfs f0, lbl_8088350C
    b lbl_fn_8025F07C_00000794
lbl_fn_8025F07C_00000790:
    lfs f0, lbl_80883510
lbl_fn_8025F07C_00000794:
    stfs f0, 0x48(r1)
    b lbl_fn_8025F07C_000007B0
lbl_fn_8025F07C_0000079C:
    fmr f2, f4
    lfs f1, 0x5c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_8025F07C_000007B0:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x78
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808834F0
    addi r4, r1, 0x38
    lfs f30, 0x80(r1)
    mr r5, r4
    lfs f31, 0x7c(r1)
    addi r3, r1, 0xa8
    lfs f13, 0x78(r1)
    lfs f12, 0x90(r1)
    lfs f11, 0x8c(r1)
    lfs f10, 0x88(r1)
    lfs f9, 0xa0(r1)
    lfs f8, 0x9c(r1)
    lfs f7, 0x98(r1)
    lfs f6, 0xa4(r1)
    lfs f5, 0x94(r1)
    lfs f4, 0x84(r1)
    lfs f0, lbl_80883500
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x64(r1)
    stfs f3, 0xd8(r1)
    stfs f3, 0xdc(r1)
    stfs f3, 0xe0(r1)
    stfs f0, 0xe4(r1)
    stfs f13, 0x8(r1)
    stfs f31, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f13, 0xa8(r1)
    stfs f31, 0xac(r1)
    stfs f30, 0xb0(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xb8(r1)
    stfs f11, 0xbc(r1)
    stfs f12, 0xc0(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0xc8(r1)
    stfs f8, 0xcc(r1)
    stfs f9, 0xd0(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0xb4(r1)
    stfs f5, 0xc4(r1)
    stfs f6, 0xd4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80883508
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8025F07C_000008CC
    lfs f3, 0x3c(r1)
    lfs f0, lbl_808834F0
    fcmpo cr0, f3, f0
    ble lbl_fn_8025F07C_000008BC
    lfs f0, lbl_8088350C
    b lbl_fn_8025F07C_000008C0
lbl_fn_8025F07C_000008BC:
    lfs f0, lbl_80883510
lbl_fn_8025F07C_000008C0:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_8025F07C_000008E0
lbl_fn_8025F07C_000008CC:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_8025F07C_000008E0:
    addi r3, r1, 0x44
    lfs f2, lbl_808834F0
    psq_l f1, 0x0(r3), 0, 0
    lis r4, lbl_807440F4@ha
    psq_st f1, 0x0(r31), 0, 0
    addi r4, r4, lbl_807440F4@l
    addi r5, r4, 0x2b
    li r3, 0x24
    lfs f0, 0x60(r1)
    mr r6, r5
    stfs f2, 0x4c(r1)
    li r4, 0x1
    li r7, 0x0
    stfs f2, 0x64(r1)
    stfs f2, 0x68(r1)
    stfs f0, 0x6c(r1)
    stfs f2, 0x70(r1)
    bl fn_80084320
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_8025F07C_00000948
    mr r4, r30
    addi r5, r30, 0x1590
    addi r6, r1, 0x68
    bl fn_801B2480
    mr r4, r3
lbl_fn_8025F07C_00000948:
    mr r3, r30
    bl fn_80178208
    lwz r0, 0x314(r1)
    psq_l f31, 0x308(r1), 0, 0
    lfd f31, 0x300(r1)
    psq_l f30, 0x2f8(r1), 0, 0
    lfd f30, 0x2f0(r1)
    lwz r31, 0x2ec(r1)
    lwz r30, 0x2e8(r1)
    mtlr r0
    addi r1, r1, 0x310
    blr
}

asm void fn_8025F35C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    beq lbl_fn_8025F35C_000009A4
    cmpwi r0, 0x7
    beq lbl_fn_8025F35C_00000A5C
    b lbl_fn_8025F35C_00000A08
lbl_fn_8025F35C_000009A4:
    lwz r0, 0x560(r3)
    cmpwi r0, 0x2
    beq lbl_fn_8025F35C_00000A5C
    li r0, 0x0
    stw r0, 0x14d0(r3)
    li r4, 0x3
    stw r0, 0x14f4(r3)
    stw r0, 0x58c(r3)
    bl fn_8016E970
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x1f4
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x66
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, 0x15c0(r31)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    stw r0, 0x14d0(r31)
    b lbl_fn_8025F35C_00000A5C
lbl_fn_8025F35C_00000A08:
    li r0, 0x0
    stw r0, 0x14d0(r3)
    li r4, 0x3
    stw r0, 0x14f4(r3)
    stw r0, 0x58c(r3)
    bl fn_8016E970
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x1f4
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x66
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, 0x15c0(r31)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    stw r0, 0x14d0(r31)
lbl_fn_8025F35C_00000A5C:
    mr r3, r31
    bl fn_80139560
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8025F45C(void)
{
    nofralloc
    stwu r1, -0x290(r1)
    mflr r0
    li r4, 0xa
    li r5, 0x200
    stw r0, 0x294(r1)
    li r0, 0x0
    stfd f31, 0x280(r1)
    psq_st f31, 0x288(r1), 0, 0
    stfd f30, 0x270(r1)
    psq_st f30, 0x278(r1), 0, 0
    stfd f29, 0x260(r1)
    psq_st f29, 0x268(r1), 0, 0
    stfd f28, 0x250(r1)
    psq_st f28, 0x258(r1), 0, 0
    stw r31, 0x24c(r1)
    mr r31, r3
    stw r30, 0x248(r1)
    stw r29, 0x244(r1)
    stw r28, 0x240(r1)
    stw r4, 0x58c(r3)
    li r4, 0x0
    stw r0, 0x14d0(r3)
    stw r0, 0x14f4(r3)
    addi r3, r1, 0x30
    bl memset
    lwz r3, lbl_8087F1E4
    lwz r4, 0x2ac(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8025F45C_00000AF0
    b lbl_fn_8025F45C_00000AF4
lbl_fn_8025F45C_00000AF0:
    la r4, lbl_808813D0
lbl_fn_8025F45C_00000AF4:
    lwz r5, 0x60(r31)
    addi r3, r1, 0x30
    lwz r5, 0x4(r5)
    crclr 6
    bl fn_800DD3FC
    lwz r3, lbl_8087F048
    addi r4, r1, 0x30
    bl fn_80109828
    lwz r0, 0x15bc(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8025F45C_00000BC4
    lfs f28, lbl_80883568
    li r28, -0x1
    li r29, 0x0
    li r30, 0x0
    b lbl_fn_8025F45C_00000B94
lbl_fn_8025F45C_00000B34:
    lwz r0, 0x14cc(r31)
    lfs f5, 0x15b8(r31)
    add r3, r0, r30
    lfs f3, 0x15b0(r31)
    lfs f4, 0x8(r3)
    lfsx f0, r30, r0
    fsubs f5, f5, f4
    lfs f4, 0x15b4(r31)
    fsubs f6, f3, f0
    lfs f3, 0x4(r3)
    stfs f5, 0x1c(r1)
    fmuls f0, f5, f5
    fsubs f3, f4, f3
    stfs f6, 0x14(r1)
    fmadds f1, f6, f6, f0
    stfs f3, 0x18(r1)
    bl fn_8068B100
    frsp f0, f1
    fcmpo cr0, f28, f0
    ble lbl_fn_8025F45C_00000B8C
    fmr f28, f0
    mr r28, r29
lbl_fn_8025F45C_00000B8C:
    addi r29, r29, 0x1
    addi r30, r30, 0xc
lbl_fn_8025F45C_00000B94:
    lwz r0, 0x14c4(r31)
    cmplw r29, r0
    blt lbl_fn_8025F45C_00000B34
    mulli r0, r28, 0xc
    lwz r3, 0x14cc(r31)
    addi r4, r31, 0x1590
    add r3, r3, r0
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x8(r3)
    stfs f2, 0x1598(r31)
    psq_st f1, 0x0(r4), 0, 0
    b lbl_fn_8025F45C_00000D1C
lbl_fn_8025F45C_00000BC4:
    lis r3, lbl_807C7030@ha
    lwz r5, lbl_8087F8A0
    addi r3, r3, lbl_807C7030@l
    addi r4, r1, 0x8
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x8(r3)
    psq_st f1, 0x0(r4), 0, 0
    lwz r3, 0x48(r5)
    stfs f2, 0x10(r1)
    b lbl_fn_8025F45C_00000C20
lbl_fn_8025F45C_00000BEC:
    lfs f3, 0x8(r1)
    lfs f0, 0x528(r3)
    lfs f5, 0xc(r1)
    fadds f6, f3, f0
    lfs f4, 0x52c(r3)
    lfs f0, 0x530(r3)
    lfs f3, 0x10(r1)
    fadds f4, f5, f4
    stfs f6, 0x8(r1)
    fadds f0, f3, f0
    lwz r3, 0x14ac(r3)
    stfs f4, 0xc(r1)
    stfs f0, 0x10(r1)
lbl_fn_8025F45C_00000C20:
    cmpwi r3, 0x0
    bne lbl_fn_8025F45C_00000BEC
    lwz r4, lbl_8087F8A0
    lis r0, 0x4330
    stw r0, 0x230(r1)
    lis r3, lbl_807440D8@ha
    lwz r0, 0x4c(r4)
    li r29, -0x1
    lfd f3, lbl_807440D8@l(r3)
    li r28, 0x0
    xoris r0, r0, 0x8000
    stw r0, 0x234(r1)
    lfs f5, lbl_80883500
    li r30, 0x0
    lfd f0, 0x230(r1)
    lfs f4, 0x8(r1)
    fsubs f6, f0, f3
    lfs f3, 0xc(r1)
    lfs f0, 0x10(r1)
    lfs f28, lbl_80883568
    fdivs f5, f5, f6
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    fmuls f0, f0, f5
    stfs f4, 0x8(r1)
    frsp f31, f4
    frsp f30, f3
    stfs f3, 0xc(r1)
    frsp f29, f0
    stfs f0, 0x10(r1)
    b lbl_fn_8025F45C_00000CF0
lbl_fn_8025F45C_00000C9C:
    lwz r0, 0x14cc(r31)
    add r3, r0, r30
    lfsx f0, r30, r0
    lfs f3, 0x8(r3)
    fsubs f5, f31, f0
    fsubs f4, f29, f3
    lfs f3, 0x4(r3)
    stfs f5, 0x20(r1)
    fsubs f3, f30, f3
    fmuls f0, f4, f4
    stfs f4, 0x28(r1)
    stfs f3, 0x24(r1)
    fmadds f1, f5, f5, f0
    bl fn_8068B100
    frsp f0, f1
    fcmpo cr0, f28, f0
    ble lbl_fn_8025F45C_00000CE8
    fmr f28, f0
    mr r29, r28
lbl_fn_8025F45C_00000CE8:
    addi r28, r28, 0x1
    addi r30, r30, 0xc
lbl_fn_8025F45C_00000CF0:
    lwz r0, 0x14c4(r31)
    cmplw r28, r0
    blt lbl_fn_8025F45C_00000C9C
    mulli r0, r29, 0xc
    lwz r3, 0x14cc(r31)
    addi r4, r31, 0x1590
    add r3, r3, r0
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x8(r3)
    stfs f2, 0x1598(r31)
    psq_st f1, 0x0(r4), 0, 0
lbl_fn_8025F45C_00000D1C:
    lwz r4, 0x1520(r31)
    mr r3, r31
    addi r6, r31, 0x1590
    li r5, 0x0
    bl fn_8016D74C
    lwz r0, 0x294(r1)
    psq_l f31, 0x288(r1), 0, 0
    lfd f31, 0x280(r1)
    psq_l f30, 0x278(r1), 0, 0
    lfd f30, 0x270(r1)
    psq_l f29, 0x268(r1), 0, 0
    lfd f29, 0x260(r1)
    psq_l f28, 0x258(r1), 0, 0
    lfd f28, 0x250(r1)
    lwz r31, 0x24c(r1)
    lwz r30, 0x248(r1)
    lwz r29, 0x244(r1)
    lwz r28, 0x240(r1)
    mtlr r0
    addi r1, r1, 0x290
    blr
}

asm void fn_8025F754(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    beq lbl_fn_8025F754_00000DD0
    li r0, 0x0
    stw r0, 0x14d0(r3)
    li r4, 0x3
    stw r0, 0x14f4(r3)
    stw r0, 0x58c(r3)
    bl fn_8016E970
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x1f4
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x66
    li r6, 0x1
    bl fn_80239DAC
lbl_fn_8025F754_00000DD0:
    mr r3, r31
    bl fn_80139560
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8025F7D0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r5, 0x58c(r3)
    subi r0, r5, 0xb
    cmplwi r0, 0x2
    ble lbl_fn_8025F7D0_00000E74
    cmpwi r5, 0xa
    bne lbl_fn_8025F7D0_00000E9C
    lfs f2, 0x10(r4)
    li r3, 0x3
    lfs f3, lbl_808834F0
    li r5, 0x0
    lfs f1, 0x14(r4)
    li r0, 0x2
    lfs f0, 0x18(r4)
    fmuls f2, f2, f3
    fmuls f1, f1, f3
    stw r3, 0x64(r4)
    fmuls f0, f0, f3
    lwz r3, 0x8(r4)
    stfs f2, 0x10(r4)
    stfs f1, 0x14(r4)
    stfs f0, 0x18(r4)
    stw r5, 0x90(r4)
    stw r0, 0x84(r4)
    lwz r0, 0xc4(r3)
    stw r0, 0x88(r4)
    stw r5, 0x68(r4)
    b lbl_fn_8025F7D0_00000ECC
lbl_fn_8025F7D0_00000E74:
    lfs f2, 0x10(r4)
    lfs f3, lbl_808834F0
    lfs f1, 0x14(r4)
    lfs f0, 0x18(r4)
    fmuls f2, f2, f3
    fmuls f1, f1, f3
    fmuls f0, f0, f3
    stfs f2, 0x10(r4)
    stfs f1, 0x14(r4)
    stfs f0, 0x18(r4)
lbl_fn_8025F7D0_00000E9C:
    mr r3, r30
    mr r4, r31
    bl fn_80151448
    lwz r12, 0x0(r30)
    mr r3, r30
    mr r4, r31
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r3, 0x14d0(r30)
    addi r0, r3, 0x1e
    stw r0, 0x14d0(r30)
lbl_fn_8025F7D0_00000ECC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8025F8C8(void)
{
    nofralloc
    stwu r1, -0x1e0(r1)
    mflr r0
    stw r0, 0x1e4(r1)
    addi r11, r1, 0x1b0
    stfd f31, 0x1d0(r1)
    psq_st f31, 0x1d8(r1), 0, 0
    stfd f30, 0x1c0(r1)
    psq_st f30, 0x1c8(r1), 0, 0
    stfd f29, 0x1b0(r1)
    psq_st f29, 0x1b8(r1), 0, 0
    bl _savegpr_27
    lwz r0, 0x55c(r3)
    mr r30, r3
    mr r31, r4
    cmpwi r0, 0x6
    bne lbl_fn_8025F8C8_00000F60
    lwz r0, 0x560(r3)
    cmpwi r0, 0x16
    beq lbl_fn_8025F8C8_00000F50
    cmpwi r0, 0x17
    beq lbl_fn_8025F8C8_00000F44
    cmpwi r0, 0x14
    beq lbl_fn_8025F8C8_00000F50
    b lbl_fn_8025F8C8_00000F60
lbl_fn_8025F8C8_00000F44:
    addi r4, r3, 0x6b8
    li r5, -0x1
    bl fn_8015E4B0
lbl_fn_8025F8C8_00000F50:
    li r0, 0x0
    stw r0, 0x58c(r30)
    stw r0, 0x14d0(r30)
    stw r0, 0x14f4(r30)
lbl_fn_8025F8C8_00000F60:
    lwz r4, 0x940(r30)
    lis r0, 0x4330
    stw r0, 0x190(r1)
    lis r3, lbl_807440D8@ha
    xoris r0, r4, 0x8000
    lfd f5, lbl_807440D8@l(r3)
    stw r0, 0x194(r1)
    lfs f3, 0x7d8(r30)
    lfd f4, 0x190(r1)
    lfs f0, lbl_80883534
    fsubs f4, f4, f5
    fdivs f31, f3, f4
    fcmpo cr0, f31, f0
    bge lbl_fn_8025F8C8_00001390
    lwz r3, 0x0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8025F8C8_00000FD4
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8025F8C8_00000FD4
    lwz r3, lbl_8087F430
    li r4, 0x6b
    bl fn_80370A78
    cmpwi r3, 0x0
    bne lbl_fn_8025F8C8_00000FD4
    lwz r3, lbl_8087F430
    li r4, 0x6b
    li r5, 0x1
    bl fn_80370AE4
lbl_fn_8025F8C8_00000FD4:
    lwz r0, 0x15bc(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8025F8C8_00001390
    li r0, 0x2
    stw r0, 0xbc(r1)
    addi r28, r1, 0xc4
    lwz r29, 0x1530(r30)
    cmpwi r29, 0x0
    beq lbl_fn_8025F8C8_00001358
    lwz r3, lbl_8087F430
    addi r4, r29, 0x528
    lfs f1, lbl_80883514
    li r5, 0x0
    lwz r3, 0x10d8(r3)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_803C1560
    lwz r4, lbl_8087F430
    subi r0, r3, 0x1
    mulli r0, r0, 0x30
    lfs f0, lbl_80883508
    lwz r3, 0x10d8(r4)
    addi r4, r1, 0x2c
    addi r27, r1, 0x20
    lwz r3, 0x9c(r3)
    add r3, r3, r0
    psq_l f1, 0x4(r3), 0, 0
    lfs f2, 0xc(r3)
    stfs f2, 0xcc(r1)
    psq_st f1, 0x0(r28), 0, 0
    lfs f3, 0x530(r29)
    lfs f4, 0x528(r29)
    fsubs f2, f3, f2
    lfs f3, 0xc4(r1)
    lfs f6, 0x52c(r29)
    fsubs f4, f4, f3
    lfs f5, 0xc8(r1)
    frsp f3, f2
    stfs f4, 0x2c(r1)
    fsubs f5, f6, f5
    fabs f4, f3
    stfs f5, 0x30(r1)
    psq_l f1, 0x0(r4), 0, 0
    frsp f4, f4
    stfs f2, 0x34(r1)
    psq_st f1, 0x0(r27), 0, 0
    fcmpo cr0, f4, f0
    stfs f2, 0x28(r1)
    bge lbl_fn_8025F8C8_000010C0
    lfs f3, 0x20(r1)
    lfs f0, lbl_808834F0
    fcmpo cr0, f3, f0
    ble lbl_fn_8025F8C8_000010B4
    lfs f0, lbl_8088350C
    b lbl_fn_8025F8C8_000010B8
lbl_fn_8025F8C8_000010B4:
    lfs f0, lbl_80883510
lbl_fn_8025F8C8_000010B8:
    stfs f0, 0x6c(r1)
    b lbl_fn_8025F8C8_000010D4
lbl_fn_8025F8C8_000010C0:
    fmr f2, f3
    lfs f1, 0x20(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x6c(r1)
lbl_fn_8025F8C8_000010D4:
    lfs f0, 0x6c(r1)
    addi r3, r1, 0x110
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808834F0
    addi r4, r1, 0x74
    lfs f4, 0x118(r1)
    mr r5, r4
    lfs f5, 0x114(r1)
    addi r3, r1, 0xd0
    lfs f6, 0x110(r1)
    lfs f7, 0x128(r1)
    lfs f8, 0x124(r1)
    lfs f9, 0x120(r1)
    lfs f10, 0x138(r1)
    lfs f11, 0x134(r1)
    lfs f12, 0x130(r1)
    lfs f13, 0x13c(r1)
    lfs f30, 0x12c(r1)
    lfs f29, 0x11c(r1)
    lfs f0, lbl_80883500
    psq_l f1, 0x0(r27), 0, 0
    lfs f2, 0x28(r1)
    stfs f3, 0x100(r1)
    stfs f3, 0x104(r1)
    stfs f3, 0x108(r1)
    stfs f0, 0x10c(r1)
    stfs f6, 0xa4(r1)
    stfs f5, 0xa8(r1)
    stfs f4, 0xac(r1)
    stfs f6, 0xd0(r1)
    stfs f5, 0xd4(r1)
    stfs f4, 0xd8(r1)
    stfs f9, 0x98(r1)
    stfs f8, 0x9c(r1)
    stfs f7, 0xa0(r1)
    stfs f9, 0xe0(r1)
    stfs f8, 0xe4(r1)
    stfs f7, 0xe8(r1)
    stfs f12, 0x8c(r1)
    stfs f11, 0x90(r1)
    stfs f10, 0x94(r1)
    stfs f12, 0xf0(r1)
    stfs f11, 0xf4(r1)
    stfs f10, 0xf8(r1)
    stfs f29, 0x80(r1)
    stfs f30, 0x84(r1)
    stfs f13, 0x88(r1)
    stfs f29, 0xdc(r1)
    stfs f30, 0xec(r1)
    stfs f13, 0xfc(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x7c(r1)
    bl fn_805F9750
    lfs f2, 0x7c(r1)
    lfs f0, lbl_80883508
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8025F8C8_000011F0
    lfs f3, 0x78(r1)
    lfs f0, lbl_808834F0
    fcmpo cr0, f3, f0
    ble lbl_fn_8025F8C8_000011E0
    lfs f0, lbl_8088350C
    b lbl_fn_8025F8C8_000011E4
lbl_fn_8025F8C8_000011E0:
    lfs f0, lbl_80883510
lbl_fn_8025F8C8_000011E4:
    fneg f0, f0
    stfs f0, 0x68(r1)
    b lbl_fn_8025F8C8_00001204
lbl_fn_8025F8C8_000011F0:
    lfs f1, 0x78(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x68(r1)
lbl_fn_8025F8C8_00001204:
    lfs f5, 0xcc(r1)
    addi r4, r1, 0x68
    lfs f4, 0x530(r29)
    addi r3, r1, 0x8
    lfs f0, 0x528(r29)
    lfs f2, lbl_808834F0
    fsubs f4, f5, f4
    lfs f3, 0xc4(r1)
    psq_l f1, 0x0(r4), 0, 0
    fsubs f0, f3, f0
    stfs f2, 0x70(r1)
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0x28(r1)
    stfs f0, 0x8(r1)
    stfs f4, 0x10(r1)
    stfs f2, 0xc(r1)
    bl fn_805F9940
    lfs f0, lbl_80883518
    fcmpo cr0, f1, f0
    ble lbl_fn_8025F8C8_00001358
    addi r4, r1, 0x8
    lfs f2, 0x10(r1)
    addi r3, r1, 0x50
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    mr r4, r3
    stfs f2, 0x58(r1)
    bl fn_805F98D0
    lfs f5, lbl_80883518
    addi r7, r1, 0x38
    lfs f3, 0x54(r1)
    li r0, 0x0
    lfs f0, 0x50(r1)
    mr r5, r28
    fmuls f8, f3, f5
    lfs f4, 0x58(r1)
    fmuls f7, f0, f5
    lfs f3, 0x52c(r29)
    fmuls f9, f4, f5
    lfs f0, 0x528(r29)
    lfs f4, 0x530(r29)
    fadds f3, f3, f8
    fadds f0, f0, f7
    lfs f5, lbl_808834F0
    fadds f2, f4, f9
    stfs f3, 0x3c(r1)
    lfs f4, lbl_8088351C
    stfs f0, 0x38(r1)
    frsp f0, f2
    lwz r3, lbl_8087EE98
    psq_l f1, 0x0(r7), 0, 0
    addi r4, r1, 0x140
    psq_st f1, 0x0(r28), 0, 0
    addi r6, r1, 0x14
    fadds f6, f5, f0
    lfs f3, 0xc8(r1)
    lfs f0, 0xc4(r1)
    addi r8, r30, 0x5b8
    fadds f3, f4, f3
    stfs f7, 0x44(r1)
    fadds f0, f5, f0
    stfs f8, 0x48(r1)
    lis r7, 0x8000
    li r9, 0x0
    stfs f9, 0x4c(r1)
    stfs f2, 0x40(r1)
    stfs f2, 0xcc(r1)
    stw r0, 0x174(r1)
    stw r0, 0x178(r1)
    stw r0, 0x17c(r1)
    stw r0, 0x180(r1)
    stfs f5, 0x5c(r1)
    stfs f4, 0x60(r1)
    stfs f5, 0x64(r1)
    stfs f0, 0x14(r1)
    stfs f3, 0x18(r1)
    stfs f6, 0x1c(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_8025F8C8_00001358
    addi r3, r1, 0x150
    lfs f2, 0x158(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0xcc(r1)
lbl_fn_8025F8C8_00001358:
    li r0, 0x14
    stw r0, 0xc0(r1)
    li r0, 0x1
    addi r4, r1, 0xc4
    stw r0, 0x15bc(r30)
    addi r3, r30, 0x15b0
    lwz r0, 0xbc(r1)
    stw r0, 0x15a8(r30)
    lwz r0, 0xc0(r1)
    stw r0, 0x15ac(r30)
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0xcc(r1)
    stfs f2, 0x15b8(r30)
    psq_st f1, 0x0(r3), 0, 0
lbl_fn_8025F8C8_00001390:
    lfs f4, lbl_8088356C
    fcmpo cr0, f31, f4
    bge lbl_fn_8025F8C8_000013C8
    lwz r4, 0x940(r30)
    lis r0, 0x4330
    stw r0, 0x190(r1)
    lis r3, lbl_807440D8@ha
    xoris r0, r4, 0x8000
    lfd f3, lbl_807440D8@l(r3)
    stw r0, 0x194(r1)
    lfd f0, 0x190(r1)
    fsubs f0, f0, f3
    fmuls f0, f4, f0
    stfs f0, 0x7d8(r30)
lbl_fn_8025F8C8_000013C8:
    lwz r0, 0x7e0(r30)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_8025F8C8_0000141C
    addi r3, r30, 0x7d4
    li r4, 0x20
    bl fn_8013322C
    lfs f5, 0x30(r31)
    mr r3, r30
    lfs f4, lbl_80883570
    addi r4, r1, 0xb0
    lfs f3, 0x2c(r31)
    li r5, -0x1
    lfs f0, 0x28(r31)
    fmuls f5, f5, f4
    fmuls f3, f3, f4
    fmuls f0, f0, f4
    stfs f5, 0xb8(r1)
    stfs f0, 0xb0(r1)
    stfs f3, 0xb4(r1)
    bl fn_8015E4B0
lbl_fn_8025F8C8_0000141C:
    addi r11, r1, 0x1b0
    psq_l f31, 0x1d8(r1), 0, 0
    lfd f31, 0x1d0(r1)
    psq_l f30, 0x1c8(r1), 0, 0
    lfd f30, 0x1c0(r1)
    psq_l f29, 0x1b8(r1), 0, 0
    lfd f29, 0x1b0(r1)
    bl _restgpr_27
    lwz r0, 0x1e4(r1)
    mtlr r0
    addi r1, r1, 0x1e0
    blr
}

asm void fn_8025FE30(void)
{
    nofralloc
    lwz r5, 0x0(r4)
    addi r7, r3, 0x15b0
    lwz r0, 0x4(r4)
    li r6, 0x1
    psq_l f1, 0x8(r4), 0, 0
    lfs f2, 0x10(r4)
    stw r6, 0x15bc(r3)
    stw r5, 0x15a8(r3)
    stw r0, 0x15ac(r3)
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0x15b8(r3)
    blr
}

asm void fn_8025FE60(void)
{
    nofralloc
    stwu r1, -0x6a0(r1)
    mflr r0
    stw r0, 0x6a4(r1)
    addi r11, r1, 0x6a0
    bl _savegpr_25
    mr r31, r5
    lwz r5, 0x20(r5)
    mr r30, r3
    bl fn_8035B694
    lis r3, lbl_80784AC8@ha
    addi r28, r30, 0x14b0
    addi r3, r3, lbl_80784AC8@l
    stw r3, 0x0(r30)
    mr r3, r28
    bl fn_80473E74
    lfs f0, lbl_80883578
    lis r3, lbl_8078FBB0@ha
    li r29, 0x0
    li r5, 0x2
    addi r3, r3, lbl_8078FBB0@l
    li r4, 0x14
    li r0, 0x5a
    stw r3, 0x0(r28)
    addi r3, r30, 0x1520
    stw r29, 0x14bc(r30)
    stw r29, 0x14c0(r30)
    stw r29, 0x14c4(r30)
    stw r29, 0x14c8(r30)
    stw r29, 0x14cc(r30)
    stw r5, 0x14d0(r30)
    stw r4, 0x14d4(r30)
    stw r0, 0x14d8(r30)
    stw r29, 0x14e8(r30)
    stfs f0, 0x14ec(r30)
    stfs f0, 0x14f0(r30)
    stfs f0, 0x14f4(r30)
    stfs f0, 0x14f8(r30)
    stfs f0, 0x14fc(r30)
    stfs f0, 0x1500(r30)
    stfs f0, 0x1504(r30)
    stfs f0, 0x1508(r30)
    stfs f0, 0x150c(r30)
    stfs f0, 0x1510(r30)
    stfs f0, 0x1514(r30)
    stfs f0, 0x1518(r30)
    stfs f0, 0x151c(r30)
    bl fn_802377B8
    addi r3, r30, 0x152c
    bl fn_802377B8
    addi r3, r30, 0x1538
    bl fn_802377B8
    lwz r0, 0x12a4(r30)
    lis r3, lbl_80744298@ha
    addi r28, r3, lbl_80744298@l
    stw r29, 0x1548(r30)
    oris r0, r0, 0x40
    addi r27, r1, 0x38
    stw r0, 0x12a4(r30)
    mr r3, r28
    stw r29, 0x154c(r30)
    stw r29, 0x1550(r30)
    stw r29, 0x1554(r30)
    stw r29, 0x38(r1)
    stw r29, 0x3c(r1)
    stw r29, 0x40(r1)
    bl strlen
    mr r26, r3
    mr r3, r27
    mr r4, r26
    bl fn_80013DC4
    lbz r0, 0x1c(r1)
    mr r3, r27
    stb r0, 0x18(r1)
    mr r6, r28
    add r7, r28, r26
    addi r8, r1, 0x18
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    addi r27, r28, 0x18
    stw r29, 0x2c(r1)
    addi r26, r1, 0x2c
    stw r29, 0x30(r1)
    mr r3, r27
    stw r29, 0x34(r1)
    bl strlen
    mr r25, r3
    mr r3, r26
    mr r4, r25
    bl fn_80013DC4
    lbz r0, 0x14(r1)
    mr r3, r26
    stb r0, 0x10(r1)
    mr r6, r27
    add r7, r27, r25
    addi r8, r1, 0x10
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    addi r3, r31, 0x2c
    bl strlen
    lis r4, lbl_807772D0@ha
    mr r26, r3
    addi r4, r4, lbl_807772D0@l
    stw r4, 0x44(r1)
    addi r3, r1, 0x54
    li r5, 0x400
    stw r29, 0x48(r1)
    li r4, 0x0
    stw r29, 0x4c(r1)
    stw r29, 0x50(r1)
    stw r29, 0x674(r1)
    bl memset
    addi r3, r1, 0x654
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x44(r1)
    mr r5, r26
    addi r3, r1, 0x44
    addi r4, r31, 0x2c
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0x44
    addi r4, r4, lbl_807772B0@l
    stw r4, 0x44(r1)
    la r4, lbl_8087D708
    bl fn_8005B6E8
lbl_fn_8025FE60_00001684:
    addi r3, r1, 0x44
    bl fn_8005B3CC
    cmpwi r3, 0x0
    mr r26, r3
    beq lbl_fn_8025FE60_0000171C
    addi r4, r28, 0x2b
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_8025FE60_0000171C
    mr r3, r26
    addi r4, r28, 0x2c
    li r5, 0x8
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_8025FE60_0000170C
    lwz r0, 0x2c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_8025FE60_000016D8
    lbz r0, 0x2c(r1)
    clrlwi r25, r0, 25
    b lbl_fn_8025FE60_000016DC
lbl_fn_8025FE60_000016D8:
    lwz r25, 0x30(r1)
lbl_fn_8025FE60_000016DC:
    lbz r0, 0xc(r1)
    addi r3, r26, 0x8
    stb r0, 0x8(r1)
    bl strlen
    add r4, r26, r3
    mr r5, r25
    addi r7, r4, 0x8
    addi r3, r1, 0x2c
    addi r6, r26, 0x8
    addi r8, r1, 0x8
    li r4, 0x0
    bl fn_80013F78
lbl_fn_8025FE60_0000170C:
    addi r3, r1, 0x44
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_8025FE60_00001684
lbl_fn_8025FE60_0000171C:
    addi r3, r1, 0x20
    addi r4, r1, 0x38
    addi r5, r1, 0x2c
    bl fn_8006AFF8
    lwz r0, 0x20(r1)
    addi r3, r30, 0x14b0
    srwi. r0, r0, 31
    bne lbl_fn_8025FE60_00001744
    addi r4, r1, 0x21
    b lbl_fn_8025FE60_00001748
lbl_fn_8025FE60_00001744:
    lwz r4, 0x28(r1)
lbl_fn_8025FE60_00001748:
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lwz r0, 0x1550(r30)
    lis r3, lbl_80744298@ha
    addi r3, r3, lbl_80744298@l
    cmpwi r0, 0x0
    addi r4, r3, 0x35
    bne lbl_fn_8025FE60_0000178C
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_8025FE60_0000178C
    addi r3, r3, 0x10
    bl fn_8008937C
    stw r3, 0x1550(r30)
    b lbl_fn_8025FE60_00001790
lbl_fn_8025FE60_0000178C:
    li r3, 0x0
lbl_fn_8025FE60_00001790:
    lis r31, lbl_80744298@ha
    addi r5, r30, 0x1554
    addi r31, r31, lbl_80744298@l
    li r6, 0x0
    addi r4, r31, 0x47
    li r7, 0x0
    bl fn_80087994
    addi r3, r30, 0x1520
    addi r4, r31, 0x51
    bl fn_8023780C
    addi r3, r30, 0x152c
    addi r4, r31, 0x5f
    bl fn_8023780C
    addi r3, r30, 0x1538
    addi r4, r31, 0x6d
    bl fn_8023780C
    lwz r0, 0x12a8(r30)
    ori r0, r0, 0x820
    stw r0, 0x12a8(r30)
    lwz r0, 0x20(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8025FE60_000017F0
    lwz r3, 0x28(r1)
    bl dtor_80084684
lbl_fn_8025FE60_000017F0:
    lwz r0, 0x2c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8025FE60_00001804
    lwz r3, 0x34(r1)
    bl dtor_80084684
lbl_fn_8025FE60_00001804:
    lwz r0, 0x38(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8025FE60_00001818
    lwz r3, 0x40(r1)
    bl dtor_80084684
lbl_fn_8025FE60_00001818:
    addi r11, r1, 0x6a0
    mr r3, r30
    bl _restgpr_25
    lwz r0, 0x6a4(r1)
    mtlr r0
    addi r1, r1, 0x6a0
    blr
}

asm void fn_80260218(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_8013655C
    cmpwi r3, 0x0
    bne lbl_fn_80260218_00001928
    lwz r3, 0x1438(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80260218_00001870
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_80260218_00001928
lbl_fn_80260218_00001870:
    addi r3, r31, 0x1520
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_80260218_00001928
    addi r3, r31, 0x152c
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_80260218_00001928
    addi r3, r31, 0x1538
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_80260218_00001928
    addi r3, r31, 0x14b0
    bl fn_80473F50
    cmpwi r3, 0x0
    bne lbl_fn_80260218_00001928
    li r0, 0x0
    stw r0, 0x58c(r31)
    mr r3, r31
    li r4, 0x2
    bl fn_8016E970
    mr r3, r31
    bl fn_80260324
    lwz r3, 0x1438(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80260218_000018F0
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x1438(r31)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_80260218_000018F0:
    lwz r0, 0x7ec(r31)
    addi r3, r31, 0x7d4
    li r4, 0x2
    ori r0, r0, 0x1c0
    oris r0, r0, 0x1
    ori r0, r0, 0xc21d
    oris r0, r0, 0x380
    stw r0, 0x7ec(r31)
    bl fn_80134674
    addi r3, r31, 0x7d4
    li r4, 0x3
    bl fn_80134674
    li r3, 0x1
    b lbl_fn_80260218_0000192C
lbl_fn_80260218_00001928:
    li r3, 0x0
lbl_fn_80260218_0000192C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80260324(void)
{
    nofralloc
    stwu r1, -0x650(r1)
    mflr r0
    stw r0, 0x654(r1)
    stw r31, 0x64c(r1)
    mr r31, r3
    addi r3, r3, 0x14b0
    stw r30, 0x648(r1)
    stw r29, 0x644(r1)
    bl fn_8047059C
    mr r29, r3
    addi r3, r31, 0x14b0
    bl fn_80470580
    lis r4, lbl_807772D0@ha
    li r0, 0x0
    addi r4, r4, lbl_807772D0@l
    stw r4, 0x8(r1)
    mr r30, r3
    addi r3, r1, 0x18
    stw r0, 0xc(r1)
    li r4, 0x0
    li r5, 0x400
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x638(r1)
    bl memset
    addi r3, r1, 0x618
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x8(r1)
    mr r4, r30
    mr r5, r29
    addi r3, r1, 0x8
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0x8
    addi r4, r4, lbl_807772B0@l
    stw r4, 0x8(r1)
    la r4, lbl_8087D708
    bl fn_8005B6E8
    lis r30, lbl_80744298@ha
    addi r30, r30, lbl_80744298@l
lbl_fn_80260324_000019F0:
    addi r3, r1, 0x8
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    mr r29, r3
    extsb r0, r0
    cmpwi r0, 0x3b
    beq lbl_fn_80260324_00001AD0
    cmpwi r0, 0x0
    beq lbl_fn_80260324_00001AD0
    addi r4, r30, 0x7c
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80260324_00001A3C
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x14c8(r31)
    b lbl_fn_80260324_00001AD0
lbl_fn_80260324_00001A3C:
    mr r3, r29
    addi r4, r30, 0x8b
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80260324_00001AD0
    lwz r0, lbl_8087F430
    cmpwi r0, 0x0
    beq lbl_fn_80260324_00001AD0
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    lwz r4, lbl_8087F430
    li r5, 0x0
    li r6, 0x0
    lwz r4, 0x10d8(r4)
    lwz r0, 0x78(r4)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80260324_00001AB0
lbl_fn_80260324_00001A88:
    lwz r7, 0x7c(r4)
    lwzx r0, r7, r6
    cmpw r3, r0
    bne lbl_fn_80260324_00001AA4
    mulli r0, r5, 0x28
    add r3, r7, r0
    b lbl_fn_80260324_00001AB4
lbl_fn_80260324_00001AA4:
    addi r6, r6, 0x28
    addi r5, r5, 0x1
    bdnz lbl_fn_80260324_00001A88
lbl_fn_80260324_00001AB0:
    li r3, 0x0
lbl_fn_80260324_00001AB4:
    cmpwi r3, 0x0
    beq lbl_fn_80260324_00001AD0
    psq_l f1, 0x4(r3), 0, 0
    addi r4, r31, 0x14fc
    lfs f2, 0xc(r3)
    stfs f2, 0x1504(r31)
    psq_st f1, 0x0(r4), 0, 0
lbl_fn_80260324_00001AD0:
    addi r3, r1, 0x8
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_80260324_000019F0
    lwz r0, 0x654(r1)
    lwz r31, 0x64c(r1)
    lwz r30, 0x648(r1)
    lwz r29, 0x644(r1)
    mtlr r0
    addi r1, r1, 0x650
    blr
}
