#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_14(void);
extern void _restgpr_24(void);
extern void _restgpr_26(void);
extern void _savegpr_14(void);
extern void _savegpr_24(void);
extern void _savegpr_26(void);
extern void fn_80092814(void);
extern void fn_80232B7C(void);
extern void fn_8023A680(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F9160(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9940(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);
extern void fn_8068B100(void);

/* External data declarations */
extern u8 lbl_807452F0[];
extern u8 lbl_80745314[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F8A0;
extern u32 lbl_80883A98;
extern u32 lbl_80883AA4;
extern u32 lbl_80883AA8;
extern u32 lbl_80883AB0;
extern u32 lbl_80883AB4;
extern u32 lbl_80883AB8;
extern u32 lbl_80883AC4;
extern u32 lbl_80883AC8;
extern u32 lbl_80883ACC;
extern u32 lbl_80883AD8;
extern u32 lbl_80883ADC;
extern u32 lbl_80883B54;
extern u32 lbl_80883BD4;

/* Function declarations */
void fn_802914F8(void);
void fn_802915F4(void);
void fn_8029207C(void);
void fn_802921F8(void);
void fn_80292C9C(void);
void fn_80292DB4(void);

asm void fn_802914F8(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    addi r11, r1, 0x90
    bl _savegpr_24
    li r25, 0x0
    lis r28, lbl_807C7030@ha
    mr r24, r3
    addi r26, r1, 0x8
    mr r30, r25
    addi r27, r1, 0x38
    addi r28, r28, lbl_807C7030@l
    li r31, 0x0
lbl_fn_802914F8_00000034:
    add r4, r24, r31
    addi r3, r1, 0x8
    addi r29, r4, 0x1674
    li r5, 0x30
    li r4, 0x0
    bl memset
    psq_l f2, 0x8(r26), 0, 0
    addi r3, r1, 0x38
    psq_l f3, 0x10(r26), 0, 0
    li r4, 0x0
    psq_l f4, 0x18(r26), 0, 0
    li r5, 0x30
    psq_l f5, 0x20(r26), 0, 0
    psq_l f6, 0x28(r26), 0, 0
    psq_l f1, 0x0(r26), 0, 0
    psq_st f1, 0xc(r29), 0, 0
    psq_st f2, 0x14(r29), 0, 0
    psq_st f3, 0x1c(r29), 0, 0
    psq_st f4, 0x24(r29), 0, 0
    psq_st f5, 0x2c(r29), 0, 0
    psq_st f6, 0x34(r29), 0, 0
    bl memset
    psq_l f2, 0x8(r27), 0, 0
    addi r25, r25, 0x1
    psq_l f3, 0x10(r27), 0, 0
    cmpwi r25, 0x6
    psq_l f4, 0x18(r27), 0, 0
    addi r31, r31, 0x74
    psq_l f5, 0x20(r27), 0, 0
    psq_l f6, 0x28(r27), 0, 0
    psq_l f1, 0x0(r27), 0, 0
    psq_st f1, 0x3c(r29), 0, 0
    psq_st f2, 0x44(r29), 0, 0
    psq_st f3, 0x4c(r29), 0, 0
    psq_st f4, 0x54(r29), 0, 0
    psq_st f5, 0x5c(r29), 0, 0
    psq_st f6, 0x64(r29), 0, 0
    stw r30, 0x70(r29)
    lfs f2, 0x8(r28)
    psq_l f1, 0x0(r28), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x8(r29)
    stw r30, 0x6c(r29)
    blt lbl_fn_802914F8_00000034
    addi r11, r1, 0x90
    bl _restgpr_24
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_802915F4(void)
{
    nofralloc
    stwu r1, -0x5c0(r1)
    mflr r0
    stw r0, 0x5c4(r1)
    addi r11, r1, 0x560
    stfd f31, 0x5b0(r1)
    psq_st f31, 0x5b8(r1), 0, 0
    stfd f30, 0x5a0(r1)
    psq_st f30, 0x5a8(r1), 0, 0
    stfd f29, 0x590(r1)
    psq_st f29, 0x598(r1), 0, 0
    stfd f28, 0x580(r1)
    psq_st f28, 0x588(r1), 0, 0
    stfd f27, 0x570(r1)
    psq_st f27, 0x578(r1), 0, 0
    stfd f26, 0x560(r1)
    psq_st f26, 0x568(r1), 0, 0
    bl _savegpr_26
    lis r7, lbl_80745314@ha
    mr r29, r3
    addi r7, r7, lbl_80745314@l
    mr r26, r4
    mr r30, r5
    mr r31, r6
    addi r4, r7, 0x301
    li r5, 0x0
    addi r3, r3, 0xb0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802915F4_00000178
    li r3, 0x0
    b lbl_fn_802915F4_00000184
lbl_fn_802915F4_00000178:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r29)
    add r3, r3, r0
lbl_fn_802915F4_00000184:
    lfs f0, 0x2c(r3)
    lis r4, lbl_80745314@ha
    lfs f7, 0x1c(r3)
    addi r4, r4, lbl_80745314@l
    lfs f8, 0xc(r3)
    addi r27, r26, 0xb0
    stfs f8, 0xf0(r1)
    mr r3, r27
    addi r4, r4, 0x31f
    li r5, 0x0
    stfs f7, 0xf4(r1)
    stfs f0, 0xf8(r1)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802915F4_000001C8
    li r3, 0x0
    b lbl_fn_802915F4_000001D4
lbl_fn_802915F4_000001C8:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r27)
    add r3, r3, r0
lbl_fn_802915F4_000001D4:
    lfs f9, 0x1c(r3)
    mulli r27, r30, 0x74
    lfs f10, 0xc(r3)
    addi r6, r1, 0xc0
    lfs f7, 0xf4(r1)
    lfs f0, 0xf0(r1)
    add r5, r29, r27
    lfs f8, 0x2c(r3)
    fsubs f7, f9, f7
    fsubs f11, f10, f0
    lfs f0, 0xf8(r1)
    addi r28, r5, 0x1674
    stfs f7, 0xc4(r1)
    fsubs f2, f8, f0
    stfs f11, 0xc0(r1)
    mr r3, r28
    mr r4, r28
    stw r26, 0x16e4(r5)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    stfs f10, 0xe4(r1)
    stfs f9, 0xe8(r1)
    stfs f8, 0xec(r1)
    stfs f2, 0xc8(r1)
    stfs f2, 0x167c(r5)
    bl fn_805F98D0
    lfs f0, 0x0(r28)
    add r3, r29, r27
    lfs f10, lbl_80883B54
    addi r27, r1, 0xb4
    lfs f8, lbl_80883A98
    fmuls f9, f0, f10
    lfs f7, lbl_80883AA8
    lfs f0, lbl_80883AB0
    stfs f9, 0x0(r28)
    lfs f9, 0x1678(r3)
    fmuls f9, f9, f10
    stfs f9, 0x1678(r3)
    lfs f9, 0x167c(r3)
    fmuls f9, f9, f10
    stfs f9, 0x167c(r3)
    stfs f8, 0x16ac(r3)
    stfs f8, 0x16a4(r3)
    stfs f8, 0x16a0(r3)
    stfs f8, 0x169c(r3)
    stfs f8, 0x1698(r3)
    stfs f8, 0x1690(r3)
    stfs f8, 0x168c(r3)
    stfs f8, 0x1688(r3)
    stfs f8, 0x1684(r3)
    stfs f7, 0x16a8(r3)
    stfs f7, 0x1694(r3)
    stfs f7, 0x1680(r3)
    lfs f2, 0x8(r28)
    psq_l f1, 0x0(r28), 0, 0
    fabs f7, f2
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0xbc(r1)
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_802915F4_000002E8
    lfs f0, 0xb4(r1)
    fcmpo cr0, f0, f8
    ble lbl_fn_802915F4_000002DC
    lfs f0, lbl_80883AB4
    b lbl_fn_802915F4_000002E0
lbl_fn_802915F4_000002DC:
    lfs f0, lbl_80883AB8
lbl_fn_802915F4_000002E0:
    stfs f0, 0xac(r1)
    b lbl_fn_802915F4_000002FC
lbl_fn_802915F4_000002E8:
    frsp f2, f2
    lfs f1, 0xb4(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0xac(r1)
lbl_fn_802915F4_000002FC:
    lfs f0, 0xac(r1)
    addi r3, r1, 0x4d0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f7, lbl_80883A98
    addi r4, r1, 0x9c
    lfs f26, 0x4d8(r1)
    mr r5, r4
    lfs f27, 0x4d4(r1)
    addi r3, r1, 0x500
    lfs f28, 0x4d0(r1)
    lfs f29, 0x4e8(r1)
    lfs f30, 0x4e4(r1)
    lfs f31, 0x4e0(r1)
    lfs f13, 0x4f8(r1)
    lfs f12, 0x4f4(r1)
    lfs f11, 0x4f0(r1)
    lfs f10, 0x4fc(r1)
    lfs f9, 0x4ec(r1)
    lfs f8, 0x4dc(r1)
    lfs f0, lbl_80883AA8
    psq_l f1, 0x0(r27), 0, 0
    lfs f2, 0xbc(r1)
    stfs f7, 0x530(r1)
    stfs f7, 0x534(r1)
    stfs f7, 0x538(r1)
    stfs f0, 0x53c(r1)
    stfs f28, 0x6c(r1)
    stfs f27, 0x70(r1)
    stfs f26, 0x74(r1)
    stfs f28, 0x500(r1)
    stfs f27, 0x504(r1)
    stfs f26, 0x508(r1)
    stfs f31, 0x78(r1)
    stfs f30, 0x7c(r1)
    stfs f29, 0x80(r1)
    stfs f31, 0x510(r1)
    stfs f30, 0x514(r1)
    stfs f29, 0x518(r1)
    stfs f11, 0x84(r1)
    stfs f12, 0x88(r1)
    stfs f13, 0x8c(r1)
    stfs f11, 0x520(r1)
    stfs f12, 0x524(r1)
    stfs f13, 0x528(r1)
    stfs f8, 0x90(r1)
    stfs f9, 0x94(r1)
    stfs f10, 0x98(r1)
    stfs f8, 0x50c(r1)
    stfs f9, 0x51c(r1)
    stfs f10, 0x52c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0xa4(r1)
    bl fn_805F9750
    lfs f2, 0xa4(r1)
    lfs f0, lbl_80883AB0
    fabs f7, f2
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_802915F4_00000418
    lfs f7, 0xa0(r1)
    lfs f0, lbl_80883A98
    fcmpo cr0, f7, f0
    ble lbl_fn_802915F4_00000408
    lfs f0, lbl_80883AB4
    b lbl_fn_802915F4_0000040C
lbl_fn_802915F4_00000408:
    lfs f0, lbl_80883AB8
lbl_fn_802915F4_0000040C:
    fneg f0, f0
    stfs f0, 0xa8(r1)
    b lbl_fn_802915F4_0000042C
lbl_fn_802915F4_00000418:
    lfs f1, 0xa0(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0xa8(r1)
lbl_fn_802915F4_0000042C:
    lfs f2, lbl_80883A98
    addi r3, r1, 0xa8
    lfs f7, lbl_80883AA8
    mulli r0, r30, 0x74
    frsp f0, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    addi r27, r1, 0x380
    add r3, r29, r0
    fcmpu cr0, f2, f0
    stfs f2, 0xb0(r1)
    addi r28, r3, 0x1680
    stfs f2, 0xbc(r1)
    stfs f2, 0x3ac(r1)
    stfs f2, 0x3a4(r1)
    stfs f2, 0x3a0(r1)
    stfs f2, 0x39c(r1)
    stfs f2, 0x398(r1)
    stfs f2, 0x390(r1)
    stfs f2, 0x38c(r1)
    stfs f2, 0x388(r1)
    stfs f2, 0x384(r1)
    stfs f7, 0x3a8(r1)
    stfs f7, 0x394(r1)
    stfs f7, 0x380(r1)
    beq lbl_fn_802915F4_000004E8
    fmr f1, f0
    addi r3, r1, 0x470
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r27
    addi r4, r1, 0x470
    addi r5, r1, 0x4a0
    bl fn_805F89F0
    addi r3, r1, 0x4a0
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    psq_st f2, 0x8(r27), 0, 0
    psq_st f3, 0x10(r27), 0, 0
    psq_st f4, 0x18(r27), 0, 0
    psq_st f5, 0x20(r27), 0, 0
    psq_st f6, 0x28(r27), 0, 0
lbl_fn_802915F4_000004E8:
    lfs f0, lbl_80883A98
    lfs f1, 0xb8(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_802915F4_00000548
    addi r3, r1, 0x410
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r27
    addi r4, r1, 0x410
    addi r5, r1, 0x440
    bl fn_805F89F0
    addi r3, r1, 0x440
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    psq_st f2, 0x8(r27), 0, 0
    psq_st f3, 0x10(r27), 0, 0
    psq_st f4, 0x18(r27), 0, 0
    psq_st f5, 0x20(r27), 0, 0
    psq_st f6, 0x28(r27), 0, 0
lbl_fn_802915F4_00000548:
    lfs f0, lbl_80883A98
    lfs f1, 0xb4(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_802915F4_000005A8
    addi r3, r1, 0x3b0
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r27
    addi r4, r1, 0x3b0
    addi r5, r1, 0x3e0
    bl fn_805F89F0
    addi r3, r1, 0x3e0
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    psq_st f2, 0x8(r27), 0, 0
    psq_st f3, 0x10(r27), 0, 0
    psq_st f4, 0x18(r27), 0, 0
    psq_st f5, 0x20(r27), 0, 0
    psq_st f6, 0x28(r27), 0, 0
lbl_fn_802915F4_000005A8:
    mr r3, r28
    mr r4, r27
    addi r5, r1, 0x350
    bl fn_805F89F0
    addi r4, r1, 0x350
    lfs f7, 0xec(r1)
    psq_l f2, 0x8(r4), 0, 0
    mulli r0, r30, 0x74
    psq_l f3, 0x10(r4), 0, 0
    addi r5, r1, 0xd8
    psq_l f4, 0x18(r4), 0, 0
    addi r27, r1, 0xcc
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    add r3, r29, r0
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    lfs f0, 0xf8(r1)
    psq_st f2, 0x8(r28), 0, 0
    fsubs f2, f7, f0
    lfs f9, 0xe4(r1)
    psq_st f3, 0x10(r28), 0, 0
    lfs f0, 0xf0(r1)
    psq_st f4, 0x18(r28), 0, 0
    frsp f11, f2
    fsubs f10, f9, f0
    lfs f8, 0xe8(r1)
    psq_st f5, 0x20(r28), 0, 0
    lfs f0, 0xf4(r1)
    fabs f12, f11
    psq_st f6, 0x28(r28), 0, 0
    stfs f9, 0x168c(r3)
    fsubs f9, f8, f0
    lfs f0, lbl_80883AB0
    stfs f8, 0x169c(r3)
    frsp f8, f12
    stfs f7, 0x16ac(r3)
    fcmpo cr0, f8, f0
    stfs f10, 0xd8(r1)
    stfs f9, 0xdc(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0xe0(r1)
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0xd4(r1)
    bge lbl_fn_802915F4_00000680
    lfs f7, 0xcc(r1)
    lfs f0, lbl_80883A98
    fcmpo cr0, f7, f0
    ble lbl_fn_802915F4_00000674
    lfs f0, lbl_80883AB4
    b lbl_fn_802915F4_00000678
lbl_fn_802915F4_00000674:
    lfs f0, lbl_80883AB8
lbl_fn_802915F4_00000678:
    stfs f0, 0x64(r1)
    b lbl_fn_802915F4_00000694
lbl_fn_802915F4_00000680:
    fmr f2, f11
    lfs f1, 0xcc(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x64(r1)
lbl_fn_802915F4_00000694:
    lfs f0, 0x64(r1)
    addi r3, r1, 0x2e0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f7, lbl_80883A98
    addi r4, r1, 0x54
    lfs f31, 0x2e8(r1)
    mr r5, r4
    lfs f30, 0x2e4(r1)
    addi r3, r1, 0x310
    lfs f29, 0x2e0(r1)
    lfs f28, 0x2f8(r1)
    lfs f27, 0x2f4(r1)
    lfs f26, 0x2f0(r1)
    lfs f13, 0x308(r1)
    lfs f12, 0x304(r1)
    lfs f11, 0x300(r1)
    lfs f10, 0x30c(r1)
    lfs f9, 0x2fc(r1)
    lfs f8, 0x2ec(r1)
    lfs f0, lbl_80883AA8
    psq_l f1, 0x0(r27), 0, 0
    lfs f2, 0xd4(r1)
    stfs f7, 0x340(r1)
    stfs f7, 0x344(r1)
    stfs f7, 0x348(r1)
    stfs f0, 0x34c(r1)
    stfs f29, 0x24(r1)
    stfs f30, 0x28(r1)
    stfs f31, 0x2c(r1)
    stfs f29, 0x310(r1)
    stfs f30, 0x314(r1)
    stfs f31, 0x318(r1)
    stfs f26, 0x30(r1)
    stfs f27, 0x34(r1)
    stfs f28, 0x38(r1)
    stfs f26, 0x320(r1)
    stfs f27, 0x324(r1)
    stfs f28, 0x328(r1)
    stfs f11, 0x3c(r1)
    stfs f12, 0x40(r1)
    stfs f13, 0x44(r1)
    stfs f11, 0x330(r1)
    stfs f12, 0x334(r1)
    stfs f13, 0x338(r1)
    stfs f8, 0x48(r1)
    stfs f9, 0x4c(r1)
    stfs f10, 0x50(r1)
    stfs f8, 0x31c(r1)
    stfs f9, 0x32c(r1)
    stfs f10, 0x33c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x5c(r1)
    bl fn_805F9750
    lfs f2, 0x5c(r1)
    lfs f0, lbl_80883AB0
    fabs f7, f2
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_802915F4_000007B0
    lfs f7, 0x58(r1)
    lfs f0, lbl_80883A98
    fcmpo cr0, f7, f0
    ble lbl_fn_802915F4_000007A0
    lfs f0, lbl_80883AB4
    b lbl_fn_802915F4_000007A4
lbl_fn_802915F4_000007A0:
    lfs f0, lbl_80883AB8
lbl_fn_802915F4_000007A4:
    fneg f0, f0
    stfs f0, 0x60(r1)
    b lbl_fn_802915F4_000007C4
lbl_fn_802915F4_000007B0:
    lfs f1, 0x58(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x60(r1)
lbl_fn_802915F4_000007C4:
    addi r3, r1, 0x60
    lfs f2, lbl_80883A98
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0xd8
    stfs f2, 0x68(r1)
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0xd4(r1)
    bl fn_805F9940
    mulli r0, r30, 0x74
    lfs f11, lbl_80883A98
    lfs f0, 0xd4(r1)
    fmr f31, f1
    lfs f10, lbl_80883AA8
    addi r27, r1, 0x190
    add r3, r29, r0
    lfs f9, 0xf0(r1)
    stfs f11, 0x16dc(r3)
    fcmpu cr0, f11, f0
    lfs f8, 0xf4(r1)
    addi r28, r3, 0x16b0
    stfs f11, 0x16d4(r3)
    lfs f7, 0xf8(r1)
    stfs f11, 0x16d0(r3)
    stfs f11, 0x16cc(r3)
    stfs f11, 0x16c8(r3)
    stfs f11, 0x16c0(r3)
    stfs f11, 0x16bc(r3)
    stfs f11, 0x16b8(r3)
    stfs f11, 0x16b4(r3)
    stfs f10, 0x16d8(r3)
    stfs f10, 0x16c4(r3)
    stfs f10, 0x16b0(r3)
    stfs f9, 0x16bc(r3)
    stfs f8, 0x16cc(r3)
    stfs f7, 0x16dc(r3)
    stfs f11, 0x1bc(r1)
    stfs f11, 0x1b4(r1)
    stfs f11, 0x1b0(r1)
    stfs f11, 0x1ac(r1)
    stfs f11, 0x1a8(r1)
    stfs f11, 0x1a0(r1)
    stfs f11, 0x19c(r1)
    stfs f11, 0x198(r1)
    stfs f11, 0x194(r1)
    stfs f10, 0x1b8(r1)
    stfs f10, 0x1a4(r1)
    stfs f10, 0x190(r1)
    beq lbl_fn_802915F4_000008D8
    fmr f1, f0
    addi r3, r1, 0x280
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r27
    addi r4, r1, 0x280
    addi r5, r1, 0x2b0
    bl fn_805F89F0
    addi r3, r1, 0x2b0
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    psq_st f2, 0x8(r27), 0, 0
    psq_st f3, 0x10(r27), 0, 0
    psq_st f4, 0x18(r27), 0, 0
    psq_st f5, 0x20(r27), 0, 0
    psq_st f6, 0x28(r27), 0, 0
lbl_fn_802915F4_000008D8:
    lfs f0, lbl_80883A98
    lfs f1, 0xd0(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_802915F4_00000938
    addi r3, r1, 0x220
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r27
    addi r4, r1, 0x220
    addi r5, r1, 0x250
    bl fn_805F89F0
    addi r3, r1, 0x250
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    psq_st f2, 0x8(r27), 0, 0
    psq_st f3, 0x10(r27), 0, 0
    psq_st f4, 0x18(r27), 0, 0
    psq_st f5, 0x20(r27), 0, 0
    psq_st f6, 0x28(r27), 0, 0
lbl_fn_802915F4_00000938:
    lfs f0, lbl_80883A98
    lfs f1, 0xcc(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_802915F4_00000998
    addi r3, r1, 0x1c0
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r27
    addi r4, r1, 0x1c0
    addi r5, r1, 0x1f0
    bl fn_805F89F0
    addi r3, r1, 0x1f0
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    psq_st f2, 0x8(r27), 0, 0
    psq_st f3, 0x10(r27), 0, 0
    psq_st f4, 0x18(r27), 0, 0
    psq_st f5, 0x20(r27), 0, 0
    psq_st f6, 0x28(r27), 0, 0
lbl_fn_802915F4_00000998:
    mr r3, r28
    mr r4, r27
    addi r5, r1, 0x160
    bl fn_805F89F0
    addi r5, r1, 0x160
    lfs f0, lbl_80883AA8
    psq_l f2, 0x8(r5), 0, 0
    mulli r0, r30, 0x74
    psq_l f3, 0x10(r5), 0, 0
    addi r3, r1, 0x100
    psq_l f4, 0x18(r5), 0, 0
    psq_l f5, 0x20(r5), 0, 0
    add r4, r29, r0
    psq_l f6, 0x28(r5), 0, 0
    addi r27, r4, 0x16b0
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    fmr f1, f0
    psq_st f2, 0x8(r28), 0, 0
    fmr f2, f1
    psq_st f3, 0x10(r28), 0, 0
    frsp f3, f31
    psq_st f4, 0x18(r28), 0, 0
    psq_st f5, 0x20(r28), 0, 0
    psq_st f6, 0x28(r28), 0, 0
    stfs f0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f31, 0x20(r1)
    bl fn_805F9160
    mr r3, r27
    addi r4, r1, 0x100
    addi r5, r1, 0x130
    bl fn_805F89F0
    addi r5, r1, 0x130
    addi r3, r29, 0x1674
    psq_l f2, 0x8(r5), 0, 0
    li r4, 0x0
    psq_l f3, 0x10(r5), 0, 0
    psq_l f4, 0x18(r5), 0, 0
    psq_l f5, 0x20(r5), 0, 0
    psq_l f6, 0x28(r5), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    psq_st f2, 0x8(r27), 0, 0
    psq_st f3, 0x10(r27), 0, 0
    psq_st f4, 0x18(r27), 0, 0
    psq_st f5, 0x20(r27), 0, 0
    psq_st f6, 0x28(r27), 0, 0
    bl fn_80232B7C
    cmpwi r31, 0x0
    beq lbl_fn_802915F4_00000AB0
    li r0, 0x0
    stw r0, 0x8(r1)
    li r3, -0x1
    lfs f1, lbl_80883AA8
    stw r3, 0xc(r1)
    mulli r27, r30, 0x74
    li r0, 0x1
    stw r0, 0x10(r1)
    addi r4, r29, 0x1950
    add r6, r29, r27
    li r5, -0x1
    lwz r3, lbl_8087F3C0
    addi r7, r6, 0x1680
    li r6, 0x5
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_8023A680
    b lbl_fn_802915F4_00000AF8
lbl_fn_802915F4_00000AB0:
    li r0, 0x0
    stw r0, 0x8(r1)
    li r3, -0x1
    lfs f1, lbl_80883AA8
    stw r3, 0xc(r1)
    mulli r27, r30, 0x74
    li r0, 0x1
    stw r0, 0x10(r1)
    addi r4, r29, 0x1938
    add r6, r29, r27
    li r5, -0x1
    lwz r3, lbl_8087F3C0
    addi r7, r6, 0x1680
    li r6, 0x5
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_8023A680
lbl_fn_802915F4_00000AF8:
    li r0, 0x0
    stw r0, 0x8(r1)
    li r0, -0x1
    add r3, r29, r27
    stw r0, 0xc(r1)
    li r0, 0x1
    lfs f1, lbl_80883AA8
    addi r7, r3, 0x16b0
    stw r0, 0x10(r1)
    addi r4, r29, 0x192c
    li r5, -0x1
    li r6, 0x5
    lwz r3, lbl_8087F3C0
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_8023A680
    addi r11, r1, 0x560
    psq_l f31, 0x5b8(r1), 0, 0
    lfd f31, 0x5b0(r1)
    psq_l f30, 0x5a8(r1), 0, 0
    lfd f30, 0x5a0(r1)
    psq_l f29, 0x598(r1), 0, 0
    lfd f29, 0x590(r1)
    psq_l f28, 0x588(r1), 0, 0
    lfd f28, 0x580(r1)
    psq_l f27, 0x578(r1), 0, 0
    lfd f27, 0x570(r1)
    psq_l f26, 0x568(r1), 0, 0
    lfd f26, 0x560(r1)
    bl _restgpr_26
    lwz r0, 0x5c4(r1)
    mtlr r0
    addi r1, r1, 0x5c0
    blr
}

asm void fn_8029207C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    lwz r0, 0x1640(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8029207C_00000BBC
    lwz r0, 0x14a8(r3)
    oris r0, r0, 0x400
    stw r0, 0x14a8(r3)
    b lbl_fn_8029207C_00000CE4
lbl_fn_8029207C_00000BBC:
    cmpwi r0, 0x1
    beq lbl_fn_8029207C_00000BCC
    cmpwi r0, 0x3
    bne lbl_fn_8029207C_00000BFC
lbl_fn_8029207C_00000BCC:
    lwz r4, 0x1640(r30)
    li r5, 0x0
    lwz r6, 0x14a8(r3)
    subi r0, r4, 0x3
    lwz r4, 0x14b0(r30)
    rlwinm r6, r6, 0, 6, 4
    stw r6, 0x14a8(r3)
    cntlzw r0, r0
    mr r3, r30
    srwi r6, r0, 5
    bl fn_802915F4
    b lbl_fn_8029207C_00000CE4
lbl_fn_8029207C_00000BFC:
    cmpwi r0, 0x2
    bne lbl_fn_8029207C_00000CE4
    lwz r0, 0x14a8(r3)
    li r31, 0x0
    rlwinm r0, r0, 0, 6, 4
    stw r0, 0x14a8(r3)
    lwz r3, lbl_8087F8A0
    lwz r29, 0x48(r3)
    b lbl_fn_8029207C_00000CDC
lbl_fn_8029207C_00000C20:
    lwz r6, 0x38(r29)
    li r4, 0x0
    li r3, 0x0
    li r5, 0x0
    rlwinm r0, r6, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_8029207C_00000C4C
    clrlwi r0, r6, 31
    cmplwi r0, 0x1
    beq lbl_fn_8029207C_00000C4C
    li r5, 0x1
lbl_fn_8029207C_00000C4C:
    cmpwi r5, 0x0
    beq lbl_fn_8029207C_00000C68
    lwz r0, 0x7e0(r29)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_8029207C_00000C68
    li r3, 0x1
lbl_fn_8029207C_00000C68:
    cmpwi r3, 0x0
    beq lbl_fn_8029207C_00000C9C
    lwz r0, 0x55c(r29)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_8029207C_00000C90
    lwz r0, 0x560(r29)
    cmpwi r0, 0x1c
    bne lbl_fn_8029207C_00000C90
    li r3, 0x1
lbl_fn_8029207C_00000C90:
    cmpwi r3, 0x0
    bne lbl_fn_8029207C_00000C9C
    li r4, 0x1
lbl_fn_8029207C_00000C9C:
    cmpwi r4, 0x0
    beq lbl_fn_8029207C_00000CD8
    lwz r0, 0x7e0(r29)
    rlwinm r0, r0, 0, 23, 23
    cmplwi r0, 0x100
    beq lbl_fn_8029207C_00000CD8
    lwz r0, 0x1630(r30)
    cmplw r29, r0
    beq lbl_fn_8029207C_00000CD8
    mr r3, r30
    mr r4, r29
    mr r5, r31
    li r6, 0x1
    bl fn_802915F4
    addi r31, r31, 0x1
lbl_fn_8029207C_00000CD8:
    lwz r29, 0x14ac(r29)
lbl_fn_8029207C_00000CDC:
    cmpwi r29, 0x0
    bne lbl_fn_8029207C_00000C20
lbl_fn_8029207C_00000CE4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_802921F8(void)
{
    nofralloc
    stwu r1, -0x640(r1)
    mflr r0
    stw r0, 0x644(r1)
    addi r11, r1, 0x5a0
    stfd f31, 0x630(r1)
    psq_st f31, 0x638(r1), 0, 0
    stfd f30, 0x620(r1)
    psq_st f30, 0x628(r1), 0, 0
    stfd f29, 0x610(r1)
    psq_st f29, 0x618(r1), 0, 0
    stfd f28, 0x600(r1)
    psq_st f28, 0x608(r1), 0, 0
    stfd f27, 0x5f0(r1)
    psq_st f27, 0x5f8(r1), 0, 0
    stfd f26, 0x5e0(r1)
    psq_st f26, 0x5e8(r1), 0, 0
    stfd f25, 0x5d0(r1)
    psq_st f25, 0x5d8(r1), 0, 0
    stfd f24, 0x5c0(r1)
    psq_st f24, 0x5c8(r1), 0, 0
    stfd f23, 0x5b0(r1)
    psq_st f23, 0x5b8(r1), 0, 0
    stfd f22, 0x5a0(r1)
    psq_st f22, 0x5a8(r1), 0, 0
    bl _savegpr_14
    li r29, 0x0
    lfs f30, lbl_80883A98
    lfs f28, lbl_80883AB0
    mr r28, r3
    lfs f29, lbl_80883AA8
    addi r14, r1, 0x54
    lfs f31, lbl_80883ADC
    addi r23, r1, 0x430
    lfs f27, lbl_80883AA4
    addi r20, r1, 0x310
    stw r29, 0x540(r1)
    addi r22, r1, 0x3d0
    addi r21, r1, 0x370
    addi r18, r1, 0x2b0
    stw r29, 0x544(r1)
    addi r24, r1, 0x2e0
    addi r15, r1, 0x190
    addi r17, r1, 0x250
    stw r29, 0x548(r1)
    addi r16, r1, 0x1f0
    addi r19, r1, 0x160
    addi r31, r1, 0x130
    stw r29, 0x54c(r1)
    li r27, 0x0
    li r26, 0x1
    stw r29, 0x550(r1)
lbl_fn_802921F8_00000DCC:
    add r25, r28, r27
    lwz r0, 0x16e4(r25)
    cmpwi r0, 0x0
    beq lbl_fn_802921F8_0000172C
    lis r3, lbl_80745314@ha
    li r5, 0x0
    addi r3, r3, lbl_80745314@l
    addi r4, r3, 0x301
    addi r3, r28, 0xb0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802921F8_00000E04
    li r7, 0x0
    b lbl_fn_802921F8_00000E10
lbl_fn_802921F8_00000E04:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r28)
    add r7, r3, r0
lbl_fn_802921F8_00000E10:
    lwz r6, 0x16e4(r25)
    lis r3, lbl_80745314@ha
    lfs f0, 0x2c(r7)
    addi r3, r3, lbl_80745314@l
    lfs f7, 0x1c(r7)
    addi r25, r6, 0xb0
    lfs f8, 0xc(r7)
    addi r4, r3, 0x31f
    stfs f8, 0xf0(r1)
    li r5, 0x0
    mr r3, r25
    stfs f7, 0xf4(r1)
    stfs f0, 0xf8(r1)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802921F8_00000E58
    li r5, 0x0
    b lbl_fn_802921F8_00000E64
lbl_fn_802921F8_00000E58:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r25)
    add r5, r3, r0
lbl_fn_802921F8_00000E64:
    lfs f8, 0x2c(r5)
    add r3, r28, r27
    lfs f0, 0xf8(r1)
    addi r4, r3, 0x1674
    lfs f9, 0x1c(r5)
    addi r3, r1, 0xc0
    fsubs f2, f8, f0
    lfs f10, 0xc(r5)
    lfs f7, 0xf4(r1)
    lfs f0, 0xf0(r1)
    fsubs f7, f9, f7
    stfs f9, 0xe8(r1)
    fsubs f0, f10, f0
    frsp f9, f2
    stfs f7, 0xc4(r1)
    stfs f0, 0xc0(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0xd8
    stfs f10, 0xe4(r1)
    fabs f10, f9
    psq_st f1, 0x0(r4), 0, 0
    frsp f10, f10
    stfs f2, 0x8(r4)
    stfs f0, 0xd8(r1)
    fcmpo cr0, f10, f28
    stfs f7, 0xdc(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0xcc
    stfs f8, 0xec(r1)
    stfs f2, 0xc8(r1)
    stfs f2, 0xe0(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0xd4(r1)
    bge lbl_fn_802921F8_00000F0C
    lfs f0, 0xcc(r1)
    fcmpo cr0, f0, f30
    ble lbl_fn_802921F8_00000F00
    lfs f0, lbl_80883AB4
    b lbl_fn_802921F8_00000F04
lbl_fn_802921F8_00000F00:
    lfs f0, lbl_80883AB8
lbl_fn_802921F8_00000F04:
    stfs f0, 0xac(r1)
    b lbl_fn_802921F8_00000F20
lbl_fn_802921F8_00000F0C:
    fmr f2, f9
    lfs f1, 0xcc(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0xac(r1)
lbl_fn_802921F8_00000F20:
    lfs f0, 0xac(r1)
    addi r3, r1, 0x4d0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    addi r4, r1, 0x9c
    addi r6, r1, 0xcc
    lfs f23, 0x4d8(r1)
    mr r5, r4
    lfs f24, 0x4d4(r1)
    addi r3, r1, 0x500
    lfs f25, 0x4d0(r1)
    lfs f26, 0x4e8(r1)
    lfs f13, 0x4e4(r1)
    lfs f12, 0x4e0(r1)
    lfs f11, 0x4f8(r1)
    lfs f10, 0x4f4(r1)
    lfs f9, 0x4f0(r1)
    lfs f8, 0x4fc(r1)
    lfs f7, 0x4ec(r1)
    lfs f0, 0x4dc(r1)
    psq_l f1, 0x0(r6), 0, 0
    mr r6, r4
    lfs f2, 0xd4(r1)
    stfs f30, 0x530(r1)
    stfs f30, 0x534(r1)
    stfs f30, 0x538(r1)
    stfs f29, 0x53c(r1)
    stfs f25, 0x6c(r1)
    stfs f24, 0x70(r1)
    stfs f23, 0x74(r1)
    stfs f25, 0x500(r1)
    stfs f24, 0x504(r1)
    stfs f23, 0x508(r1)
    stfs f12, 0x78(r1)
    stfs f13, 0x7c(r1)
    stfs f26, 0x80(r1)
    stfs f12, 0x510(r1)
    stfs f13, 0x514(r1)
    stfs f26, 0x518(r1)
    stfs f9, 0x84(r1)
    stfs f10, 0x88(r1)
    stfs f11, 0x8c(r1)
    stfs f9, 0x520(r1)
    stfs f10, 0x524(r1)
    stfs f11, 0x528(r1)
    stfs f0, 0x90(r1)
    stfs f7, 0x94(r1)
    stfs f8, 0x98(r1)
    stfs f0, 0x50c(r1)
    stfs f7, 0x51c(r1)
    stfs f8, 0x52c(r1)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0xa4(r1)
    bl fn_805F9750
    lfs f2, 0xa4(r1)
    fabs f0, f2
    frsp f0, f0
    fcmpo cr0, f0, f28
    bge lbl_fn_802921F8_00001034
    lfs f0, 0xa0(r1)
    fcmpo cr0, f0, f30
    ble lbl_fn_802921F8_00001024
    lfs f0, lbl_80883AB4
    b lbl_fn_802921F8_00001028
lbl_fn_802921F8_00001024:
    lfs f0, lbl_80883AB8
lbl_fn_802921F8_00001028:
    fneg f0, f0
    stfs f0, 0xa8(r1)
    b lbl_fn_802921F8_00001048
lbl_fn_802921F8_00001034:
    lfs f1, 0xa0(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0xa8(r1)
lbl_fn_802921F8_00001048:
    fmr f2, f30
    addi r3, r1, 0xa8
    psq_l f1, 0x0(r3), 0, 0
    addi r4, r1, 0xcc
    stfs f30, 0xb0(r1)
    addi r3, r1, 0xd8
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0xd4(r1)
    bl fn_805F9940
    add r4, r28, r27
    fdivs f26, f1, f31
    stfs f30, 0x16ac(r4)
    addi r3, r4, 0x1674
    stfs f30, 0x16a4(r4)
    stfs f30, 0x16a0(r4)
    stfs f30, 0x169c(r4)
    stfs f30, 0x1698(r4)
    stfs f30, 0x1690(r4)
    stfs f30, 0x168c(r4)
    stfs f30, 0x1688(r4)
    stfs f30, 0x1684(r4)
    stfs f29, 0x16a8(r4)
    stfs f29, 0x1694(r4)
    stfs f29, 0x1680(r4)
    lfs f2, 0x167c(r4)
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0xb4
    fabs f0, f2
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0xbc(r1)
    frsp f0, f0
    fcmpo cr0, f0, f28
    bge lbl_fn_802921F8_000010EC
    lfs f0, 0xb4(r1)
    fcmpo cr0, f0, f30
    ble lbl_fn_802921F8_000010E0
    lfs f0, lbl_80883AB4
    b lbl_fn_802921F8_000010E4
lbl_fn_802921F8_000010E0:
    lfs f0, lbl_80883AB8
lbl_fn_802921F8_000010E4:
    stfs f0, 0x64(r1)
    b lbl_fn_802921F8_00001100
lbl_fn_802921F8_000010EC:
    frsp f2, f2
    lfs f1, 0xb4(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x64(r1)
lbl_fn_802921F8_00001100:
    lfs f0, 0x64(r1)
    addi r3, r1, 0x460
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    addi r6, r1, 0xb4
    lfs f22, 0x468(r1)
    lfs f25, 0x464(r1)
    mr r4, r14
    lfs f24, 0x460(r1)
    mr r5, r14
    lfs f23, 0x478(r1)
    addi r3, r1, 0x490
    lfs f13, 0x474(r1)
    lfs f12, 0x470(r1)
    lfs f11, 0x488(r1)
    lfs f10, 0x484(r1)
    lfs f9, 0x480(r1)
    lfs f8, 0x48c(r1)
    lfs f7, 0x47c(r1)
    lfs f0, 0x46c(r1)
    psq_l f1, 0x0(r6), 0, 0
    lfs f2, 0xbc(r1)
    stfs f30, 0x4c0(r1)
    stfs f30, 0x4c4(r1)
    stfs f30, 0x4c8(r1)
    stfs f29, 0x4cc(r1)
    stfs f24, 0x24(r1)
    stfs f25, 0x28(r1)
    stfs f22, 0x2c(r1)
    stfs f24, 0x490(r1)
    stfs f25, 0x494(r1)
    stfs f22, 0x498(r1)
    stfs f12, 0x30(r1)
    stfs f13, 0x34(r1)
    stfs f23, 0x38(r1)
    stfs f12, 0x4a0(r1)
    stfs f13, 0x4a4(r1)
    stfs f23, 0x4a8(r1)
    stfs f9, 0x3c(r1)
    stfs f10, 0x40(r1)
    stfs f11, 0x44(r1)
    stfs f9, 0x4b0(r1)
    stfs f10, 0x4b4(r1)
    stfs f11, 0x4b8(r1)
    stfs f0, 0x48(r1)
    stfs f7, 0x4c(r1)
    stfs f8, 0x50(r1)
    stfs f0, 0x49c(r1)
    stfs f7, 0x4ac(r1)
    stfs f8, 0x4bc(r1)
    psq_st f1, 0x0(r14), 0, 0
    stfs f2, 0x5c(r1)
    bl fn_805F9750
    lfs f2, 0x5c(r1)
    fabs f0, f2
    frsp f0, f0
    fcmpo cr0, f0, f28
    bge lbl_fn_802921F8_00001210
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f30
    ble lbl_fn_802921F8_00001200
    lfs f0, lbl_80883AB4
    b lbl_fn_802921F8_00001204
lbl_fn_802921F8_00001200:
    lfs f0, lbl_80883AB8
lbl_fn_802921F8_00001204:
    fneg f0, f0
    stfs f0, 0x60(r1)
    b lbl_fn_802921F8_00001224
lbl_fn_802921F8_00001210:
    lfs f1, 0x58(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x60(r1)
lbl_fn_802921F8_00001224:
    fmr f2, f30
    addi r3, r1, 0x60
    psq_l f1, 0x0(r3), 0, 0
    add r3, r28, r27
    addi r25, r3, 0x1680
    stfs f30, 0x68(r1)
    frsp f0, f2
    addi r3, r1, 0xb4
    psq_st f1, 0x0(r3), 0, 0
    fcmpu cr0, f30, f0
    stfs f2, 0xbc(r1)
    stfs f30, 0x33c(r1)
    stfs f30, 0x334(r1)
    stfs f30, 0x330(r1)
    stfs f30, 0x32c(r1)
    stfs f30, 0x328(r1)
    stfs f30, 0x320(r1)
    stfs f30, 0x31c(r1)
    stfs f30, 0x318(r1)
    stfs f30, 0x314(r1)
    stfs f29, 0x338(r1)
    stfs f29, 0x324(r1)
    stfs f29, 0x310(r1)
    beq lbl_fn_802921F8_000012D4
    fmr f1, f0
    addi r3, r1, 0x400
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r20
    addi r4, r1, 0x400
    addi r5, r1, 0x430
    bl fn_805F89F0
    psq_l f1, 0x0(r23), 0, 0
    psq_l f2, 0x8(r23), 0, 0
    psq_l f3, 0x10(r23), 0, 0
    psq_l f4, 0x18(r23), 0, 0
    psq_l f5, 0x20(r23), 0, 0
    psq_l f6, 0x28(r23), 0, 0
    psq_st f1, 0x0(r20), 0, 0
    psq_st f2, 0x8(r20), 0, 0
    psq_st f3, 0x10(r20), 0, 0
    psq_st f4, 0x18(r20), 0, 0
    psq_st f5, 0x20(r20), 0, 0
    psq_st f6, 0x28(r20), 0, 0
lbl_fn_802921F8_000012D4:
    lfs f1, 0xb8(r1)
    fcmpu cr0, f30, f1
    beq lbl_fn_802921F8_0000132C
    addi r3, r1, 0x3a0
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r20
    addi r4, r1, 0x3a0
    addi r5, r1, 0x3d0
    bl fn_805F89F0
    psq_l f1, 0x0(r22), 0, 0
    psq_l f2, 0x8(r22), 0, 0
    psq_l f3, 0x10(r22), 0, 0
    psq_l f4, 0x18(r22), 0, 0
    psq_l f5, 0x20(r22), 0, 0
    psq_l f6, 0x28(r22), 0, 0
    psq_st f1, 0x0(r20), 0, 0
    psq_st f2, 0x8(r20), 0, 0
    psq_st f3, 0x10(r20), 0, 0
    psq_st f4, 0x18(r20), 0, 0
    psq_st f5, 0x20(r20), 0, 0
    psq_st f6, 0x28(r20), 0, 0
lbl_fn_802921F8_0000132C:
    lfs f1, 0xb4(r1)
    fcmpu cr0, f30, f1
    beq lbl_fn_802921F8_00001384
    addi r3, r1, 0x340
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r20
    addi r4, r1, 0x340
    addi r5, r1, 0x370
    bl fn_805F89F0
    psq_l f1, 0x0(r21), 0, 0
    psq_l f2, 0x8(r21), 0, 0
    psq_l f3, 0x10(r21), 0, 0
    psq_l f4, 0x18(r21), 0, 0
    psq_l f5, 0x20(r21), 0, 0
    psq_l f6, 0x28(r21), 0, 0
    psq_st f1, 0x0(r20), 0, 0
    psq_st f2, 0x8(r20), 0, 0
    psq_st f3, 0x10(r20), 0, 0
    psq_st f4, 0x18(r20), 0, 0
    psq_st f5, 0x20(r20), 0, 0
    psq_st f6, 0x28(r20), 0, 0
lbl_fn_802921F8_00001384:
    mr r3, r25
    mr r4, r20
    addi r5, r1, 0x2e0
    bl fn_805F89F0
    psq_l f2, 0x8(r24), 0, 0
    add r3, r28, r27
    psq_l f3, 0x10(r24), 0, 0
    addi r30, r3, 0x16b0
    psq_l f4, 0x18(r24), 0, 0
    psq_l f5, 0x20(r24), 0, 0
    psq_l f6, 0x28(r24), 0, 0
    psq_l f1, 0x0(r24), 0, 0
    psq_st f1, 0x0(r25), 0, 0
    lfs f1, 0xd4(r1)
    psq_st f2, 0x8(r25), 0, 0
    lfs f0, 0xe4(r1)
    fcmpu cr0, f30, f1
    psq_st f3, 0x10(r25), 0, 0
    lfs f10, 0xe8(r1)
    psq_st f4, 0x18(r25), 0, 0
    lfs f9, 0xec(r1)
    psq_st f5, 0x20(r25), 0, 0
    lfs f8, 0xf0(r1)
    psq_st f6, 0x28(r25), 0, 0
    lfs f7, 0xf4(r1)
    stfs f0, 0x168c(r3)
    lfs f0, 0xf8(r1)
    stfs f10, 0x169c(r3)
    stfs f9, 0x16ac(r3)
    stfs f30, 0x16dc(r3)
    stfs f30, 0x16d4(r3)
    stfs f30, 0x16d0(r3)
    stfs f30, 0x16cc(r3)
    stfs f30, 0x16c8(r3)
    stfs f30, 0x16c0(r3)
    stfs f30, 0x16bc(r3)
    stfs f30, 0x16b8(r3)
    stfs f30, 0x16b4(r3)
    stfs f29, 0x16d8(r3)
    stfs f29, 0x16c4(r3)
    stfs f29, 0x16b0(r3)
    stfs f8, 0x16bc(r3)
    stfs f7, 0x16cc(r3)
    stfs f0, 0x16dc(r3)
    stfs f30, 0x1bc(r1)
    stfs f30, 0x1b4(r1)
    stfs f30, 0x1b0(r1)
    stfs f30, 0x1ac(r1)
    stfs f30, 0x1a8(r1)
    stfs f30, 0x1a0(r1)
    stfs f30, 0x19c(r1)
    stfs f30, 0x198(r1)
    stfs f30, 0x194(r1)
    stfs f29, 0x1b8(r1)
    stfs f29, 0x1a4(r1)
    stfs f29, 0x190(r1)
    beq lbl_fn_802921F8_000014B4
    addi r3, r1, 0x280
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r15
    addi r4, r1, 0x280
    addi r5, r1, 0x2b0
    bl fn_805F89F0
    psq_l f1, 0x0(r18), 0, 0
    psq_l f2, 0x8(r18), 0, 0
    psq_l f3, 0x10(r18), 0, 0
    psq_l f4, 0x18(r18), 0, 0
    psq_l f5, 0x20(r18), 0, 0
    psq_l f6, 0x28(r18), 0, 0
    psq_st f1, 0x0(r15), 0, 0
    psq_st f2, 0x8(r15), 0, 0
    psq_st f3, 0x10(r15), 0, 0
    psq_st f4, 0x18(r15), 0, 0
    psq_st f5, 0x20(r15), 0, 0
    psq_st f6, 0x28(r15), 0, 0
lbl_fn_802921F8_000014B4:
    lfs f1, 0xd0(r1)
    fcmpu cr0, f30, f1
    beq lbl_fn_802921F8_0000150C
    addi r3, r1, 0x220
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r15
    addi r4, r1, 0x220
    addi r5, r1, 0x250
    bl fn_805F89F0
    psq_l f1, 0x0(r17), 0, 0
    psq_l f2, 0x8(r17), 0, 0
    psq_l f3, 0x10(r17), 0, 0
    psq_l f4, 0x18(r17), 0, 0
    psq_l f5, 0x20(r17), 0, 0
    psq_l f6, 0x28(r17), 0, 0
    psq_st f1, 0x0(r15), 0, 0
    psq_st f2, 0x8(r15), 0, 0
    psq_st f3, 0x10(r15), 0, 0
    psq_st f4, 0x18(r15), 0, 0
    psq_st f5, 0x20(r15), 0, 0
    psq_st f6, 0x28(r15), 0, 0
lbl_fn_802921F8_0000150C:
    lfs f1, 0xcc(r1)
    fcmpu cr0, f30, f1
    beq lbl_fn_802921F8_00001564
    addi r3, r1, 0x1c0
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r15
    addi r4, r1, 0x1c0
    addi r5, r1, 0x1f0
    bl fn_805F89F0
    psq_l f1, 0x0(r16), 0, 0
    psq_l f2, 0x8(r16), 0, 0
    psq_l f3, 0x10(r16), 0, 0
    psq_l f4, 0x18(r16), 0, 0
    psq_l f5, 0x20(r16), 0, 0
    psq_l f6, 0x28(r16), 0, 0
    psq_st f1, 0x0(r15), 0, 0
    psq_st f2, 0x8(r15), 0, 0
    psq_st f3, 0x10(r15), 0, 0
    psq_st f4, 0x18(r15), 0, 0
    psq_st f5, 0x20(r15), 0, 0
    psq_st f6, 0x28(r15), 0, 0
lbl_fn_802921F8_00001564:
    mr r3, r30
    mr r4, r15
    addi r5, r1, 0x160
    bl fn_805F89F0
    psq_l f2, 0x8(r19), 0, 0
    add r3, r28, r27
    psq_l f3, 0x10(r19), 0, 0
    addi r25, r3, 0x16b0
    psq_l f4, 0x18(r19), 0, 0
    addi r3, r1, 0x100
    psq_l f5, 0x20(r19), 0, 0
    psq_l f6, 0x28(r19), 0, 0
    psq_l f1, 0x0(r19), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    fmr f1, f27
    psq_st f2, 0x8(r30), 0, 0
    fmr f2, f1
    psq_st f3, 0x10(r30), 0, 0
    fmr f3, f26
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
    stfs f27, 0x18(r1)
    stfs f27, 0x1c(r1)
    stfs f26, 0x20(r1)
    bl fn_805F9160
    mr r3, r25
    addi r4, r1, 0x100
    addi r5, r1, 0x130
    bl fn_805F89F0
    psq_l f2, 0x8(r31), 0, 0
    mr r3, r28
    psq_l f3, 0x10(r31), 0, 0
    psq_l f4, 0x18(r31), 0, 0
    psq_l f5, 0x20(r31), 0, 0
    psq_l f6, 0x28(r31), 0, 0
    psq_l f1, 0x0(r31), 0, 0
    psq_st f1, 0x0(r25), 0, 0
    psq_st f2, 0x8(r25), 0, 0
    psq_st f3, 0x10(r25), 0, 0
    psq_st f4, 0x18(r25), 0, 0
    psq_st f5, 0x20(r25), 0, 0
    psq_st f6, 0x28(r25), 0, 0
    lwz r12, 0x0(r28)
    lwz r12, 0xe4(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_802921F8_00001720
    add r30, r28, r27
    lwz r0, 0x16e0(r30)
    cmpwi r0, 0x0
    bne lbl_fn_802921F8_00001718
    lwz r5, lbl_8087F3C0
    addi r3, r30, 0x1674
    li r4, 0x0
    stw r26, 0xd0(r5)
    bl fn_80232B7C
    lwz r0, 0x540(r1)
    mr r3, r30
    stw r0, 0x8(r1)
    li r0, -0x1
    addi r25, r3, 0x16b0
    lfs f1, lbl_80883AA8
    stw r0, 0xc(r1)
    mr r7, r25
    addi r4, r28, 0x195c
    li r5, -0x1
    stw r26, 0x10(r1)
    li r6, 0x5
    li r8, 0x0
    li r9, 0x0
    lwz r3, lbl_8087F3C0
    li r10, 0x0
    bl fn_8023A680
    lwz r0, 0x544(r1)
    mr r3, r30
    stw r0, 0x8(r1)
    li r0, -0x1
    lfs f1, lbl_80883AD8
    addi r7, r3, 0x1680
    stw r0, 0xc(r1)
    addi r4, r28, 0x1968
    li r5, -0x1
    li r6, 0x5
    stw r26, 0x10(r1)
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    lwz r3, lbl_8087F3C0
    bl fn_8023A680
    lwz r0, 0x548(r1)
    mr r7, r25
    stw r0, 0x8(r1)
    li r0, -0x1
    lfs f1, lbl_80883AA8
    addi r4, r28, 0x195c
    stw r0, 0xc(r1)
    li r5, -0x1
    li r6, 0x5
    li r8, 0x0
    stw r26, 0x10(r1)
    li r9, 0x0
    li r10, 0x0
    lwz r3, lbl_8087F3C0
    bl fn_8023A680
    lwz r3, lbl_8087F3C0
    lwz r0, 0x54c(r1)
    stw r0, 0xd0(r3)
lbl_fn_802921F8_00001718:
    stw r26, 0x16e0(r30)
    b lbl_fn_802921F8_0000172C
lbl_fn_802921F8_00001720:
    add r3, r28, r27
    lwz r0, 0x550(r1)
    stw r0, 0x16e0(r3)
lbl_fn_802921F8_0000172C:
    addi r29, r29, 0x1
    addi r27, r27, 0x74
    cmplwi r29, 0x6
    blt lbl_fn_802921F8_00000DCC
    addi r11, r1, 0x5a0
    psq_l f31, 0x638(r1), 0, 0
    lfd f31, 0x630(r1)
    psq_l f30, 0x628(r1), 0, 0
    lfd f30, 0x620(r1)
    psq_l f29, 0x618(r1), 0, 0
    lfd f29, 0x610(r1)
    psq_l f28, 0x608(r1), 0, 0
    lfd f28, 0x600(r1)
    psq_l f27, 0x5f8(r1), 0, 0
    lfd f27, 0x5f0(r1)
    psq_l f26, 0x5e8(r1), 0, 0
    lfd f26, 0x5e0(r1)
    psq_l f25, 0x5d8(r1), 0, 0
    lfd f25, 0x5d0(r1)
    psq_l f24, 0x5c8(r1), 0, 0
    lfd f24, 0x5c0(r1)
    psq_l f23, 0x5b8(r1), 0, 0
    lfd f23, 0x5b0(r1)
    psq_l f22, 0x5a8(r1), 0, 0
    lfd f22, 0x5a0(r1)
    bl _restgpr_14
    lwz r0, 0x644(r1)
    mtlr r0
    addi r1, r1, 0x640
    blr
}

asm void fn_80292C9C(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    stw r28, 0x20(r1)
    mr r28, r3
    lwz r0, 0x14f8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80292C9C_000017E0
    li r3, 0x0
    b lbl_fn_80292C9C_00001894
lbl_fn_80292C9C_000017E0:
    lfs f31, lbl_80883BD4
    li r30, -0x1
    li r29, 0x0
    li r31, 0x0
    b lbl_fn_80292C9C_00001854
lbl_fn_80292C9C_000017F4:
    lwz r3, 0x14f4(r28)
    lfs f2, 0x530(r28)
    lwzx r3, r3, r31
    lfs f0, 0x528(r28)
    lfs f3, 0xc(r3)
    lfs f1, 0x4(r3)
    fsubs f3, f3, f2
    lfs f2, 0x8(r3)
    fsubs f4, f1, f0
    lfs f1, 0x52c(r28)
    stfs f3, 0x10(r1)
    fmuls f0, f3, f3
    fsubs f2, f2, f1
    stfs f4, 0x8(r1)
    fmadds f1, f4, f4, f0
    stfs f2, 0xc(r1)
    bl fn_8068B100
    frsp f0, f1
    fcmpo cr0, f0, f31
    bge lbl_fn_80292C9C_0000184C
    fmr f31, f0
    mr r30, r29
lbl_fn_80292C9C_0000184C:
    addi r31, r31, 0x4
    addi r29, r29, 0x1
lbl_fn_80292C9C_00001854:
    lwz r3, 0x14f8(r28)
    cmplw r29, r3
    blt lbl_fn_80292C9C_000017F4
    addi r6, r30, 0x2
    cmplw r6, r3
    blt lbl_fn_80292C9C_00001874
    subi r0, r3, 0x1
    subf r6, r0, r6
lbl_fn_80292C9C_00001874:
    lwz r5, 0x14f4(r28)
    slwi r4, r30, 2
    slwi r0, r6, 2
    li r3, 0x1
    lwzx r4, r5, r4
    stw r4, 0x152c(r28)
    lwzx r0, r5, r0
    stw r0, 0x1530(r28)
lbl_fn_80292C9C_00001894:
    lwz r0, 0x44(r1)
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80292DB4(void)
{
    nofralloc
    stwu r1, -0x200(r1)
    mflr r0
    stw r0, 0x204(r1)
    stfd f31, 0x1f0(r1)
    psq_st f31, 0x1f8(r1), 0, 0
    stfd f30, 0x1e0(r1)
    psq_st f30, 0x1e8(r1), 0, 0
    stw r31, 0x1dc(r1)
    stw r30, 0x1d8(r1)
    mr r30, r3
    stw r29, 0x1d4(r1)
    stw r28, 0x1d0(r1)
    lwz r0, 0x14ec(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80292DB4_00001900
    li r3, 0x0
    b lbl_fn_80292DB4_00001E40
lbl_fn_80292DB4_00001900:
    lwz r5, lbl_8087F8A0
    lis r4, lbl_807C7030@ha
    addi r4, r4, lbl_807C7030@l
    addi r3, r1, 0xe0
    lwz r5, 0x48(r5)
    li r31, -0x1
    psq_l f1, 0x0(r4), 0, 0
    li r28, 0x0
    lfs f2, 0x8(r4)
    li r29, 0x0
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x528(r5), 0, 0
    stfs f2, 0xe8(r1)
    lfs f2, 0x530(r5)
    psq_st f1, 0x0(r3), 0, 0
    lfs f30, lbl_80883A98
    stfs f2, 0xe8(r1)
    b lbl_fn_80292DB4_000019A8
lbl_fn_80292DB4_00001948:
    lwz r3, 0x14e8(r30)
    lfs f4, 0x530(r30)
    lwzx r3, r3, r29
    lfs f0, 0x528(r30)
    lfs f5, 0xc(r3)
    lfs f3, 0x4(r3)
    fsubs f5, f5, f4
    lfs f4, 0x8(r3)
    fsubs f6, f3, f0
    lfs f3, 0x52c(r30)
    stfs f5, 0xdc(r1)
    fmuls f0, f5, f5
    fsubs f3, f4, f3
    stfs f6, 0xd4(r1)
    fmadds f1, f6, f6, f0
    stfs f3, 0xd8(r1)
    bl fn_8068B100
    frsp f0, f1
    fcmpo cr0, f0, f30
    ble lbl_fn_80292DB4_000019A0
    mr r31, r28
    fmr f30, f0
lbl_fn_80292DB4_000019A0:
    addi r29, r29, 0x4
    addi r28, r28, 0x1
lbl_fn_80292DB4_000019A8:
    lwz r0, 0x14ec(r30)
    cmplw r28, r0
    blt lbl_fn_80292DB4_00001948
    lwz r3, 0x14e8(r30)
    slwi r0, r31, 2
    lfs f4, 0x1980(r30)
    addi r4, r1, 0xbc
    lwzx r3, r3, r0
    addi r29, r1, 0xc8
    lfs f5, 0x197c(r30)
    lfs f3, 0xc(r3)
    lfs f0, 0x8(r3)
    fsubs f2, f4, f3
    lfs f4, 0x1978(r30)
    lfs f3, 0x4(r3)
    fsubs f5, f5, f0
    lfs f0, lbl_80883AB0
    fsubs f3, f4, f3
    frsp f4, f2
    stfs f5, 0xc0(r1)
    stfs f3, 0xbc(r1)
    fabs f3, f4
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0xc4(r1)
    frsp f3, f3
    psq_st f1, 0x0(r29), 0, 0
    fcmpo cr0, f3, f0
    stfs f2, 0xd0(r1)
    bge lbl_fn_80292DB4_00001A40
    lfs f3, 0xc8(r1)
    lfs f0, lbl_80883A98
    fcmpo cr0, f3, f0
    ble lbl_fn_80292DB4_00001A34
    lfs f0, lbl_80883AB4
    b lbl_fn_80292DB4_00001A38
lbl_fn_80292DB4_00001A34:
    lfs f0, lbl_80883AB8
lbl_fn_80292DB4_00001A38:
    stfs f0, 0x90(r1)
    b lbl_fn_80292DB4_00001A54
lbl_fn_80292DB4_00001A40:
    fmr f2, f4
    lfs f1, 0xc8(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x90(r1)
lbl_fn_80292DB4_00001A54:
    lfs f0, 0x90(r1)
    addi r3, r1, 0x160
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883A98
    addi r4, r1, 0x80
    lfs f30, 0x168(r1)
    mr r5, r4
    lfs f31, 0x164(r1)
    addi r3, r1, 0x190
    lfs f13, 0x160(r1)
    lfs f12, 0x178(r1)
    lfs f11, 0x174(r1)
    lfs f10, 0x170(r1)
    lfs f9, 0x188(r1)
    lfs f8, 0x184(r1)
    lfs f7, 0x180(r1)
    lfs f6, 0x18c(r1)
    lfs f5, 0x17c(r1)
    lfs f4, 0x16c(r1)
    lfs f0, lbl_80883AA8
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0xd0(r1)
    stfs f3, 0x1c0(r1)
    stfs f3, 0x1c4(r1)
    stfs f3, 0x1c8(r1)
    stfs f0, 0x1cc(r1)
    stfs f13, 0x50(r1)
    stfs f31, 0x54(r1)
    stfs f30, 0x58(r1)
    stfs f13, 0x190(r1)
    stfs f31, 0x194(r1)
    stfs f30, 0x198(r1)
    stfs f10, 0x5c(r1)
    stfs f11, 0x60(r1)
    stfs f12, 0x64(r1)
    stfs f10, 0x1a0(r1)
    stfs f11, 0x1a4(r1)
    stfs f12, 0x1a8(r1)
    stfs f7, 0x68(r1)
    stfs f8, 0x6c(r1)
    stfs f9, 0x70(r1)
    stfs f7, 0x1b0(r1)
    stfs f8, 0x1b4(r1)
    stfs f9, 0x1b8(r1)
    stfs f4, 0x74(r1)
    stfs f5, 0x78(r1)
    stfs f6, 0x7c(r1)
    stfs f4, 0x19c(r1)
    stfs f5, 0x1ac(r1)
    stfs f6, 0x1bc(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x88(r1)
    bl fn_805F9750
    lfs f2, 0x88(r1)
    lfs f0, lbl_80883AB0
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80292DB4_00001B70
    lfs f3, 0x84(r1)
    lfs f0, lbl_80883A98
    fcmpo cr0, f3, f0
    ble lbl_fn_80292DB4_00001B60
    lfs f0, lbl_80883AB4
    b lbl_fn_80292DB4_00001B64
lbl_fn_80292DB4_00001B60:
    lfs f0, lbl_80883AB8
lbl_fn_80292DB4_00001B64:
    fneg f0, f0
    stfs f0, 0x8c(r1)
    b lbl_fn_80292DB4_00001B84
lbl_fn_80292DB4_00001B70:
    lfs f1, 0x84(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x8c(r1)
lbl_fn_80292DB4_00001B84:
    lfs f0, lbl_80883A98
    addi r3, r1, 0x8c
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_807452F0@ha
    psq_st f1, 0x0(r29), 0, 0
    fmr f2, f0
    stfs f2, 0xd0(r1)
    lfs f1, 0xcc(r1)
    lfd f2, lbl_807452F0@l(r3)
    stfs f0, 0x94(r1)
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_80883AC4
    fcmpo cr0, f3, f0
    ble lbl_fn_80292DB4_00001BC8
    lfs f0, lbl_80883AC8
    fsubs f3, f3, f0
lbl_fn_80292DB4_00001BC8:
    lfs f0, lbl_80883ACC
    fcmpo cr0, f3, f0
    lfs f3, 0x1980(r30)
    addi r3, r1, 0xa4
    lfs f0, 0x530(r30)
    addi r29, r1, 0xb0
    lfs f5, 0x197c(r30)
    fsubs f2, f3, f0
    lfs f4, 0x52c(r30)
    lfs f3, 0x1978(r30)
    fsubs f4, f5, f4
    lfs f0, 0x528(r30)
    stfs f2, 0xac(r1)
    fsubs f3, f3, f0
    lfs f0, lbl_80883AB0
    stfs f4, 0xa8(r1)
    frsp f4, f2
    stfs f3, 0xa4(r1)
    fabs f3, f4
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    frsp f3, f3
    stfs f2, 0xb8(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_80292DB4_00001C50
    lfs f3, 0xb0(r1)
    lfs f0, lbl_80883A98
    fcmpo cr0, f3, f0
    ble lbl_fn_80292DB4_00001C44
    lfs f0, lbl_80883AB4
    b lbl_fn_80292DB4_00001C48
lbl_fn_80292DB4_00001C44:
    lfs f0, lbl_80883AB8
lbl_fn_80292DB4_00001C48:
    stfs f0, 0x48(r1)
    b lbl_fn_80292DB4_00001C64
lbl_fn_80292DB4_00001C50:
    fmr f2, f4
    lfs f1, 0xb0(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_80292DB4_00001C64:
    lfs f0, 0x48(r1)
    addi r3, r1, 0xf0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883A98
    addi r4, r1, 0x38
    lfs f31, 0xf8(r1)
    mr r5, r4
    lfs f30, 0xf4(r1)
    addi r3, r1, 0x120
    lfs f13, 0xf0(r1)
    lfs f12, 0x108(r1)
    lfs f11, 0x104(r1)
    lfs f10, 0x100(r1)
    lfs f9, 0x118(r1)
    lfs f8, 0x114(r1)
    lfs f7, 0x110(r1)
    lfs f6, 0x11c(r1)
    lfs f5, 0x10c(r1)
    lfs f4, 0xfc(r1)
    lfs f0, lbl_80883AA8
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0xb8(r1)
    stfs f3, 0x150(r1)
    stfs f3, 0x154(r1)
    stfs f3, 0x158(r1)
    stfs f0, 0x15c(r1)
    stfs f13, 0x8(r1)
    stfs f30, 0xc(r1)
    stfs f31, 0x10(r1)
    stfs f13, 0x120(r1)
    stfs f30, 0x124(r1)
    stfs f31, 0x128(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0x130(r1)
    stfs f11, 0x134(r1)
    stfs f12, 0x138(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0x140(r1)
    stfs f8, 0x144(r1)
    stfs f9, 0x148(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0x12c(r1)
    stfs f5, 0x13c(r1)
    stfs f6, 0x14c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80883AB0
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80292DB4_00001D80
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80883A98
    fcmpo cr0, f3, f0
    ble lbl_fn_80292DB4_00001D70
    lfs f0, lbl_80883AB4
    b lbl_fn_80292DB4_00001D74
lbl_fn_80292DB4_00001D70:
    lfs f0, lbl_80883AB8
lbl_fn_80292DB4_00001D74:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_80292DB4_00001D94
lbl_fn_80292DB4_00001D80:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_80292DB4_00001D94:
    lfs f0, lbl_80883A98
    addi r3, r1, 0x44
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_807452F0@ha
    psq_st f1, 0x0(r29), 0, 0
    fmr f2, f0
    stfs f2, 0xb8(r1)
    lfs f1, 0xb4(r1)
    lfd f2, lbl_807452F0@l(r3)
    stfs f0, 0x4c(r1)
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_80883AC4
    fcmpo cr0, f3, f0
    ble lbl_fn_80292DB4_00001DD8
    lfs f0, lbl_80883AC8
    fsubs f3, f3, f0
lbl_fn_80292DB4_00001DD8:
    lfs f0, lbl_80883ACC
    fcmpo cr0, f3, f0
    lwz r3, 0x14e8(r30)
    slwi r0, r31, 2
    lfs f4, 0x52c(r30)
    addi r6, r1, 0x98
    lwzx r4, r3, r0
    addi r5, r30, 0x151c
    stw r4, 0x1530(r30)
    li r3, 0x1
    lfs f0, 0x528(r30)
    lfs f5, 0x8(r4)
    lfs f3, 0x4(r4)
    fsubs f5, f5, f4
    lfs f4, 0xc(r4)
    fsubs f3, f3, f0
    lfs f0, 0x530(r30)
    stfs f5, 0x9c(r1)
    fsubs f2, f4, f0
    stfs f3, 0x98(r1)
    lfs f0, lbl_80883A98
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0xa0(r1)
    stfs f2, 0x1524(r30)
    stfs f0, 0x1520(r30)
lbl_fn_80292DB4_00001E40:
    lwz r0, 0x204(r1)
    psq_l f31, 0x1f8(r1), 0, 0
    lfd f31, 0x1f0(r1)
    psq_l f30, 0x1e8(r1), 0, 0
    lfd f30, 0x1e0(r1)
    lwz r31, 0x1dc(r1)
    lwz r30, 0x1d8(r1)
    lwz r29, 0x1d4(r1)
    lwz r28, 0x1d0(r1)
    mtlr r0
    addi r1, r1, 0x200
    blr
}
