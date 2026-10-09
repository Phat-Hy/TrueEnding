#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_22(void);
extern void _restgpr_24(void);
extern void _savegpr_22(void);
extern void _savegpr_24(void);
extern void fn_8000D844(void);
extern void fn_8005B9CC(void);
extern void fn_8005BBF8(void);
extern void fn_8005BCE8(void);
extern void fn_800629F0(void);
extern void fn_80063764(void);
extern void fn_80063D3C(void);
extern void fn_800C31F4(void);
extern void fn_800CB3A0(void);
extern void fn_800CB518(void);
extern void fn_800CB688(void);
extern void fn_800DC288(void);
extern void fn_80232B7C(void);
extern void fn_80237654(void);
extern void fn_802376D0(void);
extern void fn_8023780C(void);
extern void fn_80237874(void);
extern void fn_80239D58(void);
extern void fn_80239DAC(void);
extern void fn_8023A680(void);
extern void fn_8023A8B4(void);
extern void fn_8032B314(void);
extern void fn_8032B6F8(void);
extern void fn_8032B7F0(void);
extern void fn_8032BE88(void);
extern void fn_8032C1EC(void);
extern void fn_803EEE10(void);
extern void fn_8044E1BC(void);
extern void fn_8044EEC0(void);
extern void fn_8044F434(void);
extern void fn_80450778(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9920(void);
extern void fn_805F9990(void);
extern void fn_80680CF8(void);
extern void fn_80682428(void);
extern void fn_80684600(void);

/* External data declarations */
extern u8 lbl_80754260[];
extern u8 lbl_80754270[];
extern u8 lbl_80754288[];
extern u8 lbl_807774B8[];
extern u8 lbl_807774D8[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087D710;
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F4A0;
extern u32 lbl_8087F8A0;
extern u32 lbl_80886900;
extern u32 lbl_80886908;
extern u32 lbl_8088690C;
extern u32 lbl_80886910;
extern u32 lbl_80886920;
extern u32 lbl_8088692C;
extern u32 lbl_80886930;
extern u32 lbl_80886934;
extern u32 lbl_80886938;
extern u32 lbl_8088693C;
extern u32 lbl_80886940;
extern u32 lbl_80886944;
extern u32 lbl_80886948;
extern u32 lbl_8088694C;
extern u32 lbl_80886950;

/* Function declarations */
void fn_80438814(void);
void fn_80438E6C(void);
void fn_80438EF8(void);
void fn_80439248(void);
void fn_80439268(void);
void fn_804392C0(void);
void fn_80439574(void);
void fn_8043A08C(void);

asm void fn_80438814(void)
{
    nofralloc
    stwu r1, -0x1b0(r1)
    mflr r0
    stw r0, 0x1b4(r1)
    addi r11, r1, 0x140
    stfd f31, 0x1a0(r1)
    psq_st f31, 0x1a8(r1), 0, 0
    stfd f30, 0x190(r1)
    psq_st f30, 0x198(r1), 0, 0
    stfd f29, 0x180(r1)
    psq_st f29, 0x188(r1), 0, 0
    stfd f28, 0x170(r1)
    psq_st f28, 0x178(r1), 0, 0
    stfd f27, 0x160(r1)
    psq_st f27, 0x168(r1), 0, 0
    stfd f26, 0x150(r1)
    psq_st f26, 0x158(r1), 0, 0
    stfd f25, 0x140(r1)
    psq_st f25, 0x148(r1), 0, 0
    bl _savegpr_22
    lwz r0, 0xf08(r3)
    mr r24, r3
    cmpwi r0, 0x0
    beq lbl_fn_80438814_00000608
    lfs f30, lbl_80886900
    addi r25, r1, 0xe0
    lfs f29, lbl_80886908
    li r27, 0x0
    lfs f28, lbl_8088690C
    li r23, 0x0
    b lbl_fn_80438814_000001F4
lbl_fn_80438814_00000078:
    add r22, r24, r23
    addi r3, r1, 0x80
    stfs f30, 0x108(r22)
    li r4, 0x79
    stfs f30, 0x10c(r22)
    stfs f29, 0x110(r22)
    lfs f1, 0x104(r22)
    bl fn_805F8E70
    addi r4, r22, 0x108
    addi r3, r1, 0x80
    mr r5, r4
    bl fn_805F93C0
    lfs f0, 0x114(r22)
    addi r26, r22, 0x12c
    lfs f7, 0x118(r22)
    addi r3, r1, 0xb0
    lfs f8, 0x11c(r22)
    fmuls f9, f0, f28
    fmuls f7, f7, f28
    li r4, 0x79
    stfs f9, 0x120(r22)
    fmuls f0, f8, f28
    stfs f7, 0x124(r22)
    stfs f0, 0x128(r22)
    stfs f30, 0x158(r22)
    stfs f30, 0x150(r22)
    stfs f30, 0x14c(r22)
    stfs f30, 0x148(r22)
    stfs f30, 0x144(r22)
    stfs f30, 0x13c(r22)
    stfs f30, 0x138(r22)
    stfs f30, 0x134(r22)
    stfs f30, 0x130(r22)
    stfs f29, 0x154(r22)
    stfs f29, 0x140(r22)
    stfs f29, 0x12c(r22)
    lfs f1, 0x104(r22)
    bl fn_805F8E70
    mr r3, r26
    addi r4, r1, 0xb0
    addi r5, r1, 0xe0
    bl fn_805F89F0
    psq_l f2, 0x8(r25), 0, 0
    addi r27, r27, 0x1
    psq_l f3, 0x10(r25), 0, 0
    addi r23, r23, 0x64
    psq_l f4, 0x18(r25), 0, 0
    psq_l f5, 0x20(r25), 0, 0
    psq_l f6, 0x28(r25), 0, 0
    psq_l f1, 0x0(r25), 0, 0
    psq_st f1, 0x0(r26), 0, 0
    psq_st f2, 0x8(r26), 0, 0
    psq_st f3, 0x10(r26), 0, 0
    psq_st f4, 0x18(r26), 0, 0
    psq_st f5, 0x20(r26), 0, 0
    psq_st f6, 0x28(r26), 0, 0
    lfs f8, 0x11c(r22)
    lfs f0, 0x108(r22)
    lfs f7, 0x10c(r22)
    fmuls f11, f0, f8
    lfs f0, 0x110(r22)
    fmuls f26, f7, f8
    lfs f9, 0x118(r22)
    fmuls f25, f0, f8
    lfs f0, 0xf8(r22)
    fmuls f13, f11, f28
    lfs f7, 0xfc(r22)
    fmuls f31, f26, f28
    stfs f11, 0x44(r1)
    fmuls f27, f25, f28
    lfs f8, 0x100(r22)
    fadds f10, f0, f13
    stfs f30, 0x50(r1)
    fadds f12, f8, f27
    fmuls f9, f9, f28
    stfs f30, 0x58(r1)
    fadds f11, f7, f31
    fadds f0, f10, f30
    stfs f9, 0x54(r1)
    fadds f8, f12, f30
    fadds f7, f11, f9
    stfs f0, 0x138(r22)
    stfs f7, 0x148(r22)
    stfs f26, 0x48(r1)
    stfs f25, 0x4c(r1)
    stfs f13, 0x38(r1)
    stfs f31, 0x3c(r1)
    stfs f27, 0x40(r1)
    stfs f10, 0x2c(r1)
    stfs f11, 0x30(r1)
    stfs f12, 0x34(r1)
    stfs f0, 0x20(r1)
    stfs f7, 0x24(r1)
    stfs f8, 0x28(r1)
    stfs f8, 0x158(r22)
lbl_fn_80438814_000001F4:
    lwz r0, 0xf4(r24)
    cmplw r27, r0
    blt lbl_fn_80438814_00000078
    lis r3, lbl_807C7030@ha
    lfs f30, lbl_80886900
    lfs f29, lbl_80886908
    addi r30, r1, 0x74
    lfs f31, lbl_8088692C
    addi r28, r1, 0x14
    addi r29, r3, lbl_807C7030@l
    addi r27, r1, 0x68
    addi r26, r1, 0x8
    li r25, 0x0
    li r23, 0x0
    lis r22, 0x5501
lbl_fn_80438814_00000230:
    add r31, r24, r23
    lwz r0, 0x288(r31)
    cmpwi r0, 0x2
    bne lbl_fn_80438814_000005B8
    lfs f0, 0x2b8(r31)
    addi r4, r1, 0x5c
    lfs f7, 0x2a8(r31)
    li r5, -0x7800
    lfs f8, 0x298(r31)
    stfs f8, 0x5c(r1)
    lwz r3, lbl_8087EEB0
    stfs f7, 0x60(r1)
    lfs f1, lbl_80886908
    stfs f0, 0x64(r1)
    lfs f2, lbl_80886900
    bl fn_80063D3C
    lfs f28, lbl_80886900
    b lbl_fn_80438814_000005B0
lbl_fn_80438814_00000278:
    fcmpo cr0, f28, f30
    cror eq, lt, eq
    bne lbl_fn_80438814_00000298
    psq_l f1, 0x2c4(r31), 0, 0
    lfs f2, 0x2cc(r31)
    stfs f2, 0x7c(r1)
    psq_st f1, 0x0(r30), 0, 0
    b lbl_fn_80438814_00000404
lbl_fn_80438814_00000298:
    fcmpo cr0, f28, f29
    cror eq, gt, eq
    bne lbl_fn_80438814_000002B8
    psq_l f1, 0x2d0(r31), 0, 0
    lfs f2, 0x2d8(r31)
    stfs f2, 0x7c(r1)
    psq_st f1, 0x0(r30), 0, 0
    b lbl_fn_80438814_00000404
lbl_fn_80438814_000002B8:
    lwz r5, 0x2bc(r31)
    li r4, 0x0
    lfs f0, 0x2c0(r31)
    li r3, 0x0
    subic. r0, r5, 0x1
    fmuls f7, f0, f28
    mtctr r0
    ble lbl_fn_80438814_000003F4
lbl_fn_80438814_000002D8:
    lwz r6, 0x300(r31)
    lfsx f0, r6, r3
    fcmpo cr0, f7, f0
    cror eq, lt, eq
    bne lbl_fn_80438814_000003E4
    fcmpu cr0, f30, f7
    bne lbl_fn_80438814_000002FC
    fmr f12, f30
    b lbl_fn_80438814_00000300
lbl_fn_80438814_000002FC:
    fdivs f12, f7, f0
lbl_fn_80438814_00000300:
    cmpwi r4, 0x0
    bge lbl_fn_80438814_0000031C
    psq_l f1, 0x2c4(r31), 0, 0
    lfs f2, 0x2cc(r31)
    stfs f2, 0x7c(r1)
    psq_st f1, 0x0(r30), 0, 0
    b lbl_fn_80438814_00000404
lbl_fn_80438814_0000031C:
    subi r0, r5, 0x1
    cmpw r4, r0
    blt lbl_fn_80438814_0000033C
    psq_l f1, 0x2d0(r31), 0, 0
    lfs f2, 0x2d8(r31)
    stfs f2, 0x7c(r1)
    psq_st f1, 0x0(r30), 0, 0
    b lbl_fn_80438814_00000404
lbl_fn_80438814_0000033C:
    cmpwi r5, 0x2
    bge lbl_fn_80438814_00000358
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x8(r29)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x7c(r1)
    b lbl_fn_80438814_00000404
lbl_fn_80438814_00000358:
    lwz r0, 0x2dc(r31)
    slwi r5, r4, 4
    lwz r3, 0x2e8(r31)
    add r4, r0, r5
    lwz r0, 0x2f4(r31)
    add r3, r3, r5
    lfs f9, 0xc(r4)
    lfs f7, 0x8(r4)
    add r5, r0, r5
    lfs f8, 0xc(r3)
    fmadds f11, f9, f12, f7
    lfs f0, 0x8(r3)
    lfs f10, 0x4(r4)
    fmadds f9, f8, f12, f0
    lfs f8, 0x4(r3)
    fmadds f11, f12, f11, f10
    lfs f10, 0x0(r4)
    fmadds f9, f12, f9, f8
    lfs f8, 0x0(r3)
    fmadds f10, f12, f11, f10
    lfs f7, 0xc(r5)
    lfs f0, 0x8(r5)
    fmadds f8, f12, f9, f8
    fmadds f7, f7, f12, f0
    lfs f0, 0x4(r5)
    stfs f10, 0x14(r1)
    fmadds f7, f12, f7, f0
    lfs f0, 0x0(r5)
    stfs f8, 0x18(r1)
    fmadds f2, f12, f7, f0
    psq_l f1, 0x0(r28), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x1c(r1)
    stfs f2, 0x7c(r1)
    b lbl_fn_80438814_00000404
lbl_fn_80438814_000003E4:
    fsubs f7, f7, f0
    addi r4, r4, 0x1
    addi r3, r3, 0x4
    bdnz lbl_fn_80438814_000002D8
lbl_fn_80438814_000003F4:
    psq_l f1, 0x2c4(r31), 0, 0
    lfs f2, 0x2cc(r31)
    stfs f2, 0x7c(r1)
    psq_st f1, 0x0(r30), 0, 0
lbl_fn_80438814_00000404:
    fadds f7, f31, f28
    fcmpo cr0, f7, f30
    cror eq, lt, eq
    bne lbl_fn_80438814_00000428
    psq_l f1, 0x2c4(r31), 0, 0
    lfs f2, 0x2cc(r31)
    stfs f2, 0x70(r1)
    psq_st f1, 0x0(r27), 0, 0
    b lbl_fn_80438814_00000594
lbl_fn_80438814_00000428:
    fcmpo cr0, f7, f29
    cror eq, gt, eq
    bne lbl_fn_80438814_00000448
    psq_l f1, 0x2d0(r31), 0, 0
    lfs f2, 0x2d8(r31)
    stfs f2, 0x70(r1)
    psq_st f1, 0x0(r27), 0, 0
    b lbl_fn_80438814_00000594
lbl_fn_80438814_00000448:
    lwz r5, 0x2bc(r31)
    li r4, 0x0
    lfs f0, 0x2c0(r31)
    li r3, 0x0
    subic. r0, r5, 0x1
    fmuls f7, f0, f7
    mtctr r0
    ble lbl_fn_80438814_00000584
lbl_fn_80438814_00000468:
    lwz r6, 0x300(r31)
    lfsx f0, r6, r3
    fcmpo cr0, f7, f0
    cror eq, lt, eq
    bne lbl_fn_80438814_00000574
    fcmpu cr0, f30, f7
    bne lbl_fn_80438814_0000048C
    fmr f12, f30
    b lbl_fn_80438814_00000490
lbl_fn_80438814_0000048C:
    fdivs f12, f7, f0
lbl_fn_80438814_00000490:
    cmpwi r4, 0x0
    bge lbl_fn_80438814_000004AC
    psq_l f1, 0x2c4(r31), 0, 0
    lfs f2, 0x2cc(r31)
    stfs f2, 0x70(r1)
    psq_st f1, 0x0(r27), 0, 0
    b lbl_fn_80438814_00000594
lbl_fn_80438814_000004AC:
    subi r0, r5, 0x1
    cmpw r4, r0
    blt lbl_fn_80438814_000004CC
    psq_l f1, 0x2d0(r31), 0, 0
    lfs f2, 0x2d8(r31)
    stfs f2, 0x70(r1)
    psq_st f1, 0x0(r27), 0, 0
    b lbl_fn_80438814_00000594
lbl_fn_80438814_000004CC:
    cmpwi r5, 0x2
    bge lbl_fn_80438814_000004E8
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x8(r29)
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0x70(r1)
    b lbl_fn_80438814_00000594
lbl_fn_80438814_000004E8:
    lwz r0, 0x2dc(r31)
    slwi r5, r4, 4
    lwz r3, 0x2e8(r31)
    add r4, r0, r5
    lwz r0, 0x2f4(r31)
    add r3, r3, r5
    lfs f9, 0xc(r4)
    lfs f7, 0x8(r4)
    add r5, r0, r5
    lfs f8, 0xc(r3)
    fmadds f11, f9, f12, f7
    lfs f0, 0x8(r3)
    lfs f10, 0x4(r4)
    fmadds f9, f8, f12, f0
    lfs f8, 0x4(r3)
    fmadds f11, f12, f11, f10
    lfs f10, 0x0(r4)
    fmadds f9, f12, f9, f8
    lfs f8, 0x0(r3)
    fmadds f10, f12, f11, f10
    lfs f7, 0xc(r5)
    lfs f0, 0x8(r5)
    fmadds f8, f12, f9, f8
    fmadds f7, f7, f12, f0
    lfs f0, 0x4(r5)
    stfs f10, 0x8(r1)
    fmadds f7, f12, f7, f0
    lfs f0, 0x0(r5)
    stfs f8, 0xc(r1)
    fmadds f2, f12, f7, f0
    psq_l f1, 0x0(r26), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0x10(r1)
    stfs f2, 0x70(r1)
    b lbl_fn_80438814_00000594
lbl_fn_80438814_00000574:
    fsubs f7, f7, f0
    addi r4, r4, 0x1
    addi r3, r3, 0x4
    bdnz lbl_fn_80438814_00000468
lbl_fn_80438814_00000584:
    psq_l f1, 0x2c4(r31), 0, 0
    lfs f2, 0x2cc(r31)
    stfs f2, 0x70(r1)
    psq_st f1, 0x0(r27), 0, 0
lbl_fn_80438814_00000594:
    lwz r3, lbl_8087EEB0
    addi r4, r1, 0x74
    lfs f1, lbl_80886900
    addi r5, r1, 0x68
    subi r6, r22, 0x1
    bl fn_80063764
    fadds f28, f28, f31
lbl_fn_80438814_000005B0:
    fcmpo cr0, f28, f29
    blt lbl_fn_80438814_00000278
lbl_fn_80438814_000005B8:
    addi r25, r25, 0x1
    addi r23, r23, 0x188
    cmplwi r25, 0x8
    blt lbl_fn_80438814_00000230
    addi r22, r24, 0xf8
    li r25, 0x0
    lis r23, lbl_807C7030@ha
    b lbl_fn_80438814_000005FC
lbl_fn_80438814_000005D8:
    lwz r3, lbl_8087EEB0
    addi r4, r23, lbl_807C7030@l
    lfs f1, lbl_80886900
    addi r5, r22, 0x28
    addi r7, r22, 0x34
    li r6, -0x100
    bl fn_800629F0
    addi r22, r22, 0x64
    addi r25, r25, 0x1
lbl_fn_80438814_000005FC:
    lwz r0, 0xf4(r24)
    cmplw r25, r0
    blt lbl_fn_80438814_000005D8
lbl_fn_80438814_00000608:
    addi r11, r1, 0x140
    psq_l f31, 0x1a8(r1), 0, 0
    lfd f31, 0x1a0(r1)
    psq_l f30, 0x198(r1), 0, 0
    lfd f30, 0x190(r1)
    psq_l f29, 0x188(r1), 0, 0
    lfd f29, 0x180(r1)
    psq_l f28, 0x178(r1), 0, 0
    lfd f28, 0x170(r1)
    psq_l f27, 0x168(r1), 0, 0
    lfd f27, 0x160(r1)
    psq_l f26, 0x158(r1), 0, 0
    lfd f26, 0x150(r1)
    psq_l f25, 0x148(r1), 0, 0
    lfd f25, 0x140(r1)
    bl _restgpr_22
    lwz r0, 0x1b4(r1)
    mtlr r0
    addi r1, r1, 0x1b0
    blr
}

asm void fn_80438E6C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    addi r3, r3, 0xf0c
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_80438E6C_00000690
    addi r3, r30, 0xf18
    bl fn_802376D0
    cmpwi r3, 0x0
    beq lbl_fn_80438E6C_00000698
lbl_fn_80438E6C_00000690:
    li r3, 0x1
    b lbl_fn_80438E6C_000006CC
lbl_fn_80438E6C_00000698:
    addi r31, r30, 0x288
    li r30, 0x0
lbl_fn_80438E6C_000006A0:
    addi r3, r31, 0x90
    bl fn_8044E1BC
    cmpwi r3, 0x0
    beq lbl_fn_80438E6C_000006B8
    li r3, 0x1
    b lbl_fn_80438E6C_000006CC
lbl_fn_80438E6C_000006B8:
    addi r30, r30, 0x1
    addi r31, r31, 0x188
    cmpwi r30, 0x8
    blt lbl_fn_80438E6C_000006A0
    li r3, 0x0
lbl_fn_80438E6C_000006CC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80438EF8(void)
{
    nofralloc
    stwu r1, -0x6d0(r1)
    mflr r0
    stw r0, 0x6d4(r1)
    stfd f31, 0x6c0(r1)
    psq_st f31, 0x6c8(r1), 0, 0
    stfd f30, 0x6b0(r1)
    psq_st f30, 0x6b8(r1), 0, 0
    stw r31, 0x6ac(r1)
    mr r31, r3
    addi r3, r3, 0x60
    stw r30, 0x6a8(r1)
    stw r29, 0x6a4(r1)
    stw r28, 0x6a0(r1)
    bl fn_8047059C
    mr r29, r3
    addi r3, r31, 0x60
    bl fn_80470580
    lis r4, lbl_807774D8@ha
    li r0, 0x0
    addi r4, r4, lbl_807774D8@l
    stw r4, 0x6c(r1)
    mr r30, r3
    addi r3, r1, 0x7c
    stw r0, 0x70(r1)
    li r4, 0x0
    li r5, 0x400
    stw r0, 0x74(r1)
    stw r0, 0x78(r1)
    stw r0, 0x69c(r1)
    bl memset
    addi r3, r1, 0x67c
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x6c(r1)
    mr r4, r30
    mr r5, r29
    addi r3, r1, 0x6c
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807774B8@ha
    addi r3, r1, 0x6c
    addi r4, r4, lbl_807774B8@l
    stw r4, 0x6c(r1)
    la r4, lbl_8087D710
    bl fn_8005BCE8
    lis r30, lbl_80754288@ha
    lfs f30, lbl_80886900
    lfs f31, lbl_80886930
    addi r29, r1, 0x8
    addi r30, r30, lbl_80754288@l
lbl_fn_80438EF8_000007B4:
    addi r3, r1, 0x6c
    bl fn_8005B9CC
    lbz r0, 0x0(r3)
    mr r28, r3
    cmpwi r0, 0x3b
    beq lbl_fn_80438EF8_000009F4
    addi r4, r30, 0x1
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80438EF8_00000908
    stfs f30, 0x18(r1)
    addi r3, r1, 0x6c
    stfs f30, 0x1c(r1)
    stfs f30, 0x20(r1)
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x8(r1)
    addi r3, r1, 0x6c
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0xc(r1)
    addi r3, r1, 0x6c
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x10(r1)
    addi r3, r1, 0x6c
    bl fn_8005B9CC
    bl fn_800DC288
    fmuls f0, f31, f1
    addi r3, r1, 0x6c
    stfs f0, 0x14(r1)
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x24(r1)
    addi r3, r1, 0x6c
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x28(r1)
    addi r3, r1, 0x6c
    bl fn_8005B9CC
    bl fn_800DC288
    lwz r0, 0xf4(r31)
    addi r4, r31, 0xf4
    fmr f0, f1
    stfs f1, 0x2c(r1)
    mulli r0, r0, 0x64
    add r0, r4, r0
    addic. r3, r0, 0x4
    beq lbl_fn_80438EF8_000008F8
    psq_l f1, 0x0(r29), 0, 0
    frsp f0, f0
    psq_st f1, 0x0(r3), 0, 0
    lfs f2, 0x10(r1)
    stfs f2, 0x8(r3)
    frsp f2, f30
    lfs f7, 0x14(r1)
    stfs f7, 0xc(r3)
    psq_l f1, 0x10(r29), 0, 0
    psq_st f1, 0x10(r3), 0, 0
    lfs f7, 0x24(r1)
    stfs f2, 0x18(r3)
    psq_l f1, 0x28(r29), 0, 0
    stfs f7, 0x1c(r3)
    lfs f7, 0x28(r1)
    stfs f7, 0x20(r3)
    lfs f2, 0x38(r1)
    stfs f0, 0x24(r3)
    psq_l f3, 0x44(r29), 0, 0
    psq_st f1, 0x28(r3), 0, 0
    psq_l f1, 0x34(r29), 0, 0
    stfs f2, 0x30(r3)
    psq_l f2, 0x3c(r29), 0, 0
    psq_st f1, 0x34(r3), 0, 0
    psq_l f4, 0x4c(r29), 0, 0
    psq_st f2, 0x3c(r3), 0, 0
    psq_l f5, 0x54(r29), 0, 0
    psq_st f3, 0x44(r3), 0, 0
    psq_l f6, 0x5c(r29), 0, 0
    psq_st f4, 0x4c(r3), 0, 0
    psq_st f5, 0x54(r3), 0, 0
    psq_st f6, 0x5c(r3), 0, 0
lbl_fn_80438EF8_000008F8:
    lwz r3, 0x0(r4)
    addi r0, r3, 0x1
    stw r0, 0x0(r4)
    b lbl_fn_80438EF8_000009F4
lbl_fn_80438EF8_00000908:
    mr r3, r28
    addi r4, r30, 0x5
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80438EF8_000009A0
    addi r3, r1, 0x6c
    bl fn_8005B9CC
    bl fn_80684600
    stw r3, 0xecc(r31)
    addi r3, r1, 0x6c
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0xef4(r31)
    addi r3, r1, 0x6c
    bl fn_8005B9CC
    bl fn_80684600
    stw r3, 0xf00(r31)
    addi r3, r1, 0x6c
    bl fn_8005B9CC
    bl fn_80684600
    stw r3, 0xf04(r31)
    addi r3, r1, 0x6c
    bl fn_8005B9CC
    bl fn_80684600
    stw r3, 0xedc(r31)
    addi r3, r1, 0x6c
    bl fn_8005B9CC
    bl fn_80684600
    stw r3, 0xee0(r31)
    addi r3, r1, 0x6c
    bl fn_8005B9CC
    bl fn_80684600
    stw r3, 0xef0(r31)
    addi r3, r1, 0x6c
    bl fn_8005B9CC
    bl fn_80684600
    stw r3, 0xee8(r31)
    b lbl_fn_80438EF8_000009F4
lbl_fn_80438EF8_000009A0:
    mr r3, r28
    addi r4, r30, 0xb
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80438EF8_000009CC
    addi r3, r1, 0x6c
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r31, 0xf0c
    bl fn_8023780C
    b lbl_fn_80438EF8_000009F4
lbl_fn_80438EF8_000009CC:
    mr r3, r28
    addi r4, r30, 0xf
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80438EF8_000009F4
    addi r3, r1, 0x6c
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r31, 0xf18
    bl fn_80237654
lbl_fn_80438EF8_000009F4:
    addi r3, r1, 0x6c
    bl fn_8005BBF8
    cmpwi r3, 0x0
    bne lbl_fn_80438EF8_000007B4
    lwz r0, 0x6d4(r1)
    psq_l f31, 0x6c8(r1), 0, 0
    lfd f31, 0x6c0(r1)
    psq_l f30, 0x6b8(r1), 0, 0
    lfd f30, 0x6b0(r1)
    lwz r31, 0x6ac(r1)
    lwz r30, 0x6a8(r1)
    lwz r29, 0x6a4(r1)
    lwz r28, 0x6a0(r1)
    mtlr r0
    addi r1, r1, 0x6d0
    blr
}

asm void fn_80439248(void)
{
    nofralloc
    cmpwi r4, 0x0
    bne lbl_fn_80439248_00000A44
    li r3, 0x0
    blr
lbl_fn_80439248_00000A44:
    lwz r0, 0x0(r4)
    stw r0, 0x54(r3)
    mr r3, r0
    blr
}

asm void fn_80439268(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lfs f0, lbl_80886900
    stw r0, 0x34(r1)
    li r0, 0x0
    stw r4, 0x8(r1)
    addi r4, r1, 0x8
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_804392C0(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    stfd f31, 0x90(r1)
    psq_st f31, 0x98(r1), 0, 0
    stfd f30, 0x80(r1)
    psq_st f30, 0x88(r1), 0, 0
    stfd f29, 0x70(r1)
    psq_st f29, 0x78(r1), 0, 0
    stw r31, 0x6c(r1)
    mr r31, r3
    stw r30, 0x68(r1)
    stw r29, 0x64(r1)
    stw r28, 0x60(r1)
    lwz r0, 0xef8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804392C0_00000D28
    lwz r4, 0xee0(r3)
    lwz r0, 0xee4(r3)
    lwz r5, 0xedc(r3)
    mullw r0, r4, r0
    add r0, r5, r0
    stw r0, 0xed8(r3)
    lwz r0, lbl_8087F3C0
    cmpwi r0, 0x0
    beq lbl_fn_804392C0_00000C18
    lwz r4, lbl_8087F8A0
    addi r5, r1, 0x40
    cmpwi r4, 0x0
    beq lbl_fn_804392C0_00000B2C
    lwz r4, 0x48(r4)
    b lbl_fn_804392C0_00000B30
lbl_fn_804392C0_00000B2C:
    li r4, 0x0
lbl_fn_804392C0_00000B30:
    cmpwi r4, 0x0
    beq lbl_fn_804392C0_00000B54
    psq_l f1, 0x614(r4), 0, 0
    lfs f2, 0x61c(r4)
    lfs f0, 0x620(r4)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x48(r1)
    stfs f0, 0x4c(r1)
    b lbl_fn_804392C0_00000B70
lbl_fn_804392C0_00000B54:
    lwz r4, lbl_8087EFB4
    lfs f0, lbl_80886910
    psq_l f1, 0x10c(r4), 0, 0
    lfs f2, 0x114(r4)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x48(r1)
    stfs f0, 0x4c(r1)
lbl_fn_804392C0_00000B70:
    addi r4, r1, 0x40
    lfs f2, 0x48(r1)
    psq_l f1, 0x0(r4), 0, 0
    addi r30, r1, 0x34
    psq_st f1, 0x0(r30), 0, 0
    mr r4, r31
    lfs f4, lbl_80886934
    li r5, 0x0
    stfs f2, 0x3c(r1)
    li r6, 0x1
    lfs f0, lbl_80886900
    lwz r7, 0xef8(r3)
    lwz r3, lbl_8087F3C0
    lfs f3, 0x4(r7)
    stfs f3, 0x38(r1)
    lfs f3, 0xc(r7)
    fadds f3, f4, f3
    stfs f0, 0x28(r1)
    stfs f3, 0x2c(r1)
    stfs f0, 0x30(r1)
    bl fn_80239DAC
    mr r3, r31
    li r4, 0x0
    bl fn_80232B7C
    lfs f1, lbl_80886908
    li r3, -0x1
    stfs f1, 0x18(r1)
    li r0, 0x1
    mr r7, r30
    addi r4, r31, 0xf0c
    stfs f1, 0x1c(r1)
    addi r8, r1, 0x28
    addi r9, r1, 0x18
    li r5, 0x0
    stfs f1, 0x20(r1)
    li r6, 0x0
    li r10, -0x1
    stfs f1, 0x24(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
lbl_fn_804392C0_00000C18:
    lis r3, lbl_80754270@ha
    lfs f30, lbl_80886938
    lfd f29, lbl_80754270@l(r3)
    li r29, 0x1
    lfs f31, lbl_8088693C
    lis r30, 0x4330
lbl_fn_804392C0_00000C30:
    lwz r3, lbl_8087F4A0
    cmpwi r3, 0x0
    beq lbl_fn_804392C0_00000C4C
    mr r5, r29
    li r4, 0x2af9
    bl fn_803EEE10
    b lbl_fn_804392C0_00000C50
lbl_fn_804392C0_00000C4C:
    li r3, 0x0
lbl_fn_804392C0_00000C50:
    cmpwi r3, 0x0
    beq lbl_fn_804392C0_00000C88
    lwz r0, 0xed8(r31)
    stw r30, 0x50(r1)
    xoris r0, r0, 0x8000
    stw r0, 0x54(r1)
    lfd f0, 0x50(r1)
    stfs f31, 0x124(r3)
    fsubs f0, f0, f29
    fmuls f0, f30, f0
    fctiwz f0, f0
    stfd f0, 0x58(r1)
    lwz r0, 0x5c(r1)
    stw r0, 0x128(r3)
lbl_fn_804392C0_00000C88:
    addi r29, r29, 0x1
    cmpwi r29, 0x10
    ble lbl_fn_804392C0_00000C30
    lis r4, lbl_80754260@ha
    lfs f1, lbl_80886908
    addi r4, r4, lbl_80754260@l
    addi r3, r1, 0x10
    lwz r4, 0x8(r4)
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x10
    li r4, 0x1e
    bl fn_800CB518
    lwz r3, 0xec8(r31)
    li r29, 0x1
    lwz r0, 0xecc(r31)
    lwz r4, 0xee4(r31)
    subf r0, r3, r0
    subf r0, r4, r0
    cmpwi r0, 0x1
    ble lbl_fn_804392C0_00000CE4
    mr r29, r0
lbl_fn_804392C0_00000CE4:
    addi r30, r31, 0x288
    li r28, 0x0
lbl_fn_804392C0_00000CEC:
    lwz r0, 0x0(r30)
    cmpwi r0, 0x0
    bne lbl_fn_804392C0_00000D0C
    mr r3, r31
    mr r4, r30
    bl fn_80439574
    subic. r29, r29, 0x1
    ble lbl_fn_804392C0_00000D1C
lbl_fn_804392C0_00000D0C:
    addi r28, r28, 0x1
    addi r30, r30, 0x188
    cmpwi r28, 0x8
    blt lbl_fn_804392C0_00000CEC
lbl_fn_804392C0_00000D1C:
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_804392C0_00000D28:
    lwz r0, 0xa4(r1)
    psq_l f31, 0x98(r1), 0, 0
    lfd f31, 0x90(r1)
    psq_l f30, 0x88(r1), 0, 0
    lfd f30, 0x80(r1)
    psq_l f29, 0x78(r1), 0, 0
    lfd f29, 0x70(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    lwz r29, 0x64(r1)
    lwz r28, 0x60(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_80439574(void)
{
    nofralloc
    stwu r1, -0x2a0(r1)
    mflr r0
    stw r0, 0x2a4(r1)
    addi r11, r1, 0x1f0
    stfd f31, 0x290(r1)
    psq_st f31, 0x298(r1), 0, 0
    stfd f30, 0x280(r1)
    psq_st f30, 0x288(r1), 0, 0
    stfd f29, 0x270(r1)
    psq_st f29, 0x278(r1), 0, 0
    stfd f28, 0x260(r1)
    psq_st f28, 0x268(r1), 0, 0
    stfd f27, 0x250(r1)
    psq_st f27, 0x258(r1), 0, 0
    stfd f26, 0x240(r1)
    psq_st f26, 0x248(r1), 0, 0
    stfd f25, 0x230(r1)
    psq_st f25, 0x238(r1), 0, 0
    stfd f24, 0x220(r1)
    psq_st f24, 0x228(r1), 0, 0
    stfd f23, 0x210(r1)
    psq_st f23, 0x218(r1), 0, 0
    stfd f22, 0x200(r1)
    psq_st f22, 0x208(r1), 0, 0
    stfd f21, 0x1f0(r1)
    psq_st f21, 0x1f8(r1), 0, 0
    bl _savegpr_24
    lwz r0, 0x0(r4)
    lis r5, 0x4330
    stw r5, 0x1b8(r1)
    mr r25, r3
    cmpwi r0, 0x0
    mr r26, r4
    stw r5, 0x1c0(r1)
    bne lbl_fn_80439574_00001808
    lwz r5, 0xef8(r3)
    addi r3, r1, 0xf8
    li r4, 0x79
    lfs f1, 0xc(r5)
    lfs f23, 0x1c(r5)
    lfs f22, 0x20(r5)
    lfs f21, 0x24(r5)
    bl fn_805F8E70
    li r0, 0x1
    stw r0, 0x0(r26)
    lwz r0, 0xef8(r25)
    stw r0, 0x184(r26)
    bl fn_80680CF8
    lis r4, 0x6666
    addi r0, r4, 0x6667
    mulhw r0, r0, r3
    srawi r0, r0, 1
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x5
    subf r0, r0, r3
    mulli r3, r0, 0x1e
    subi r0, r3, 0x4b
    stw r0, 0x8c(r26)
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_80439574_00000E60
    lwz r4, 0x48(r3)
    b lbl_fn_80439574_00000E64
lbl_fn_80439574_00000E60:
    li r4, 0x0
lbl_fn_80439574_00000E64:
    cmpwi r4, 0x0
    beq lbl_fn_80439574_00000E84
    lfs f2, 0x530(r4)
    addi r3, r1, 0xd4
    psq_l f1, 0x528(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0xdc(r1)
    b lbl_fn_80439574_00000E9C
lbl_fn_80439574_00000E84:
    lwz r3, lbl_8087EFB4
    addi r4, r1, 0xd4
    psq_l f1, 0x10c(r3), 0, 0
    lfs f2, 0x114(r3)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0xdc(r1)
lbl_fn_80439574_00000E9C:
    lwz r6, 0xef8(r25)
    addi r24, r1, 0xe0
    addi r5, r1, 0xa4
    addi r4, r1, 0xec
    lfs f4, 0x18(r6)
    addi r27, r1, 0xc8
    psq_l f1, 0x0(r6), 0, 0
    addi r3, r1, 0x38
    lfs f3, 0x14(r6)
    fmuls f6, f4, f21
    psq_st f1, 0x0(r24), 0, 0
    lfs f2, 0x8(r6)
    fmuls f7, f3, f21
    lfs f0, 0x10(r6)
    lfs f5, 0xe4(r1)
    fadds f9, f2, f6
    fmuls f8, f0, f21
    lfs f4, 0xe0(r1)
    fadds f3, f5, f7
    stfs f2, 0xe8(r1)
    frsp f0, f2
    fadds f10, f4, f8
    fmr f2, f9
    stfs f3, 0xa8(r1)
    stfs f10, 0xa4(r1)
    frsp f3, f2
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    fsubs f10, f3, f0
    lfs f3, 0xf0(r1)
    lfs f0, 0xec(r1)
    fsubs f3, f3, f5
    stfs f8, 0x98(r1)
    fsubs f0, f0, f4
    stfs f7, 0x9c(r1)
    stfs f6, 0xa0(r1)
    stfs f9, 0xac(r1)
    stfs f2, 0xf4(r1)
    stfs f0, 0x38(r1)
    stfs f3, 0x3c(r1)
    stfs f10, 0x40(r1)
    bl fn_805F9920
    fabs f3, f1
    lfs f0, lbl_80886920
    fmr f24, f1
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80439574_00000F70
    psq_l f1, 0x0(r24), 0, 0
    lfs f2, 0xe8(r1)
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0xd0(r1)
    b lbl_fn_80439574_00001034
lbl_fn_80439574_00000F70:
    lfs f3, 0xe8(r1)
    addi r3, r1, 0x38
    lfs f0, 0xdc(r1)
    addi r4, r1, 0x44
    lfs f5, 0xe4(r1)
    fsubs f6, f3, f0
    lfs f4, 0xd8(r1)
    lfs f3, 0xe0(r1)
    lfs f0, 0xd4(r1)
    fsubs f4, f5, f4
    stfs f6, 0x4c(r1)
    fsubs f0, f3, f0
    stfs f4, 0x48(r1)
    stfs f0, 0x44(r1)
    bl fn_805F9990
    fneg f0, f1
    lfs f3, lbl_80886900
    fdivs f5, f0, f24
    fcmpo cr0, f5, f3
    ble lbl_fn_80439574_00000FC4
    fmr f3, f5
lbl_fn_80439574_00000FC4:
    lfs f0, lbl_80886908
    fcmpo cr0, f3, f0
    bge lbl_fn_80439574_00000FE8
    lfs f0, lbl_80886900
    fcmpo cr0, f5, f0
    ble lbl_fn_80439574_00000FE0
    b lbl_fn_80439574_00000FEC
lbl_fn_80439574_00000FE0:
    fmr f5, f0
    b lbl_fn_80439574_00000FEC
lbl_fn_80439574_00000FE8:
    fmr f5, f0
lbl_fn_80439574_00000FEC:
    lfs f4, 0x40(r1)
    lfs f3, 0x3c(r1)
    fmuls f7, f4, f5
    lfs f0, 0x38(r1)
    fmuls f6, f3, f5
    lfs f4, 0xe8(r1)
    fmuls f5, f0, f5
    lfs f3, 0xe4(r1)
    lfs f0, 0xe0(r1)
    fadds f4, f4, f7
    fadds f3, f3, f6
    stfs f5, 0x50(r1)
    fadds f0, f0, f5
    stfs f6, 0x54(r1)
    stfs f7, 0x58(r1)
    stfs f0, 0xc8(r1)
    stfs f3, 0xcc(r1)
    stfs f4, 0xd0(r1)
lbl_fn_80439574_00001034:
    lwz r3, 0xef8(r25)
    lfs f5, lbl_80886940
    lfs f4, 0x18(r3)
    lfs f3, 0x14(r3)
    fmuls f6, f4, f5
    lfs f0, 0x10(r3)
    fmuls f7, f3, f5
    lfs f4, 0xd0(r1)
    fmuls f5, f0, f5
    lfs f3, 0xcc(r1)
    lfs f0, 0xc8(r1)
    fsubs f4, f4, f6
    fsubs f3, f3, f7
    stfs f5, 0x8c(r1)
    fsubs f0, f0, f5
    stfs f7, 0x90(r1)
    stfs f6, 0x94(r1)
    stfs f0, 0xbc(r1)
    stfs f3, 0xc0(r1)
    stfs f4, 0xc4(r1)
    bl fn_80680CF8
    lis r5, 0x2aab
    lfs f0, lbl_8088690C
    subi r0, r5, 0x5555
    lis r4, 0x4178
    mulhw r6, r0, r3
    lis r5, lbl_80754270@ha
    fmuls f30, f0, f23
    lfd f24, lbl_80754270@l(r5)
    lfs f25, lbl_80886944
    addi r29, r1, 0x80
    srwi r0, r6, 31
    lfs f26, 0xc4(r1)
    add r0, r6, r0
    lfs f27, 0xc0(r1)
    mulli r0, r0, 0x6
    lfs f28, 0xbc(r1)
    lfs f29, lbl_80886910
    addi r31, r4, 0x749f
    lfs f31, lbl_80886900
    li r27, 0x0
    subf r3, r0, r3
    li r24, 0x0
    addi r28, r3, 0x6
    xoris r30, r28, 0x8000
    b lbl_fn_80439574_00001270
lbl_fn_80439574_000010EC:
    stw r30, 0x1bc(r1)
    addi r4, r1, 0x128
    lwz r3, 0xef8(r25)
    xoris r0, r27, 0x8000
    lfd f0, 0x1b8(r1)
    add r4, r4, r24
    stw r30, 0x1c4(r1)
    fsubs f4, f0, f24
    lfs f7, 0x14(r3)
    stw r30, 0x1bc(r1)
    lfd f3, 0x1c0(r1)
    lfd f0, 0x1b8(r1)
    fdivs f10, f25, f4
    stw r0, 0x1c4(r1)
    lfs f9, 0x18(r3)
    lfd f4, 0x1c0(r1)
    stw r0, 0x1bc(r1)
    lfs f5, 0x10(r3)
    fsubs f8, f3, f24
    stw r0, 0x1c4(r1)
    fsubs f6, f0, f24
    lfd f3, 0x1b8(r1)
    lfd f0, 0x1c0(r1)
    fmuls f9, f9, f10
    fdivs f8, f25, f8
    stfs f9, 0x70(r1)
    fdivs f6, f25, f6
    fmuls f7, f7, f8
    fmuls f5, f5, f6
    fsubs f3, f3, f24
    stfs f7, 0x6c(r1)
    fsubs f0, f0, f24
    stfs f5, 0x68(r1)
    fsubs f4, f4, f24
    fmuls f3, f7, f3
    fmuls f5, f5, f0
    fmuls f0, f9, f4
    stfs f3, 0x78(r1)
    fadds f3, f27, f3
    fadds f4, f28, f5
    stfs f5, 0x74(r1)
    fadds f2, f26, f0
    stfs f4, 0x80(r1)
    stfs f3, 0x84(r1)
    psq_l f1, 0x0(r29), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f0, 0x7c(r1)
    stfs f2, 0x88(r1)
    stfs f2, 0x8(r4)
    bl fn_80680CF8
    mulhw r0, r31, r3
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x1bc(r1)
    lfd f0, 0x1b8(r1)
    fsubs f0, f0, f24
    fdivs f0, f0, f25
    fmadds f21, f22, f0, f29
    bl fn_80680CF8
    mulhw r0, r31, r3
    addi r4, r1, 0xb0
    stfs f21, 0xb4(r1)
    mr r5, r4
    stfs f31, 0xb8(r1)
    srawi r0, r0, 8
    srwi r6, r0, 31
    add r0, r0, r6
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    addi r3, r1, 0xf8
    xoris r0, r0, 0x8000
    stw r0, 0x1c4(r1)
    lfd f0, 0x1c0(r1)
    fsubs f0, f0, f24
    fdivs f0, f0, f25
    fmsubs f0, f23, f0, f30
    stfs f0, 0xb0(r1)
    bl fn_805F93C0
    addi r3, r1, 0x128
    lfsux f5, r3, r24
    lfs f4, 0xb0(r1)
    addi r27, r27, 0x1
    lfs f3, 0xb4(r1)
    addi r24, r24, 0xc
    fadds f4, f5, f4
    lfs f0, 0xb8(r1)
    stfs f4, 0x0(r3)
    lfs f4, 0x4(r3)
    fadds f3, f4, f3
    stfs f3, 0x4(r3)
    lfs f3, 0x8(r3)
    fadds f0, f3, f0
    stfs f0, 0x8(r3)
lbl_fn_80439574_00001270:
    cmpw r27, r28
    blt lbl_fn_80439574_000010EC
    stw r28, 0x34(r26)
    addi r3, r26, 0x54
    subi r4, r28, 0x1
    bl fn_8032B314
    addi r3, r26, 0x60
    subi r4, r28, 0x1
    bl fn_8032B314
    addi r3, r26, 0x6c
    subi r4, r28, 0x1
    bl fn_8032B314
    mr r4, r28
    addi r3, r1, 0x14
    bl fn_8032B6F8
    mr r4, r28
    addi r3, r1, 0x20
    bl fn_8032B6F8
    mr r4, r28
    addi r3, r1, 0x2c
    bl fn_8032B6F8
    cmpwi cr1, r28, 0x0
    li r3, 0x0
    li r5, 0x0
    ble cr1, lbl_fn_80439574_000014F0
    cmpwi r28, 0x8
    subi r6, r28, 0x8
    ble lbl_fn_80439574_000014A0
    li r7, 0x0
    blt cr1, lbl_fn_80439574_000012FC
    lis r4, 0x8000
    subi r0, r4, 0x2
    cmpw r28, r0
    bgt lbl_fn_80439574_000012FC
    li r7, 0x1
lbl_fn_80439574_000012FC:
    cmpwi r7, 0x0
    beq lbl_fn_80439574_000014A0
    addi r0, r6, 0x7
    addi r4, r1, 0x128
    srwi r0, r0, 3
    mtctr r0
    cmpwi r6, 0x0
    ble lbl_fn_80439574_000014A0
lbl_fn_80439574_0000131C:
    lwz r6, 0x14(r1)
    addi r3, r3, 0x8
    lfs f0, 0x0(r4)
    stfsx f0, r6, r5
    lwz r6, 0x20(r1)
    lfs f0, 0x4(r4)
    stfsx f0, r6, r5
    lwz r6, 0x2c(r1)
    lfs f0, 0x8(r4)
    stfsx f0, r6, r5
    lwz r0, 0x14(r1)
    lfs f0, 0xc(r4)
    add r6, r0, r5
    stfs f0, 0x4(r6)
    lwz r0, 0x20(r1)
    lfs f0, 0x10(r4)
    add r6, r0, r5
    stfs f0, 0x4(r6)
    lwz r0, 0x2c(r1)
    lfs f0, 0x14(r4)
    add r6, r0, r5
    stfs f0, 0x4(r6)
    lwz r0, 0x14(r1)
    lfs f0, 0x18(r4)
    add r6, r0, r5
    stfs f0, 0x8(r6)
    lwz r0, 0x20(r1)
    lfs f0, 0x1c(r4)
    add r6, r0, r5
    stfs f0, 0x8(r6)
    lwz r0, 0x2c(r1)
    lfs f0, 0x20(r4)
    add r6, r0, r5
    stfs f0, 0x8(r6)
    lwz r0, 0x14(r1)
    lfs f0, 0x24(r4)
    add r6, r0, r5
    stfs f0, 0xc(r6)
    lwz r0, 0x20(r1)
    lfs f0, 0x28(r4)
    add r6, r0, r5
    stfs f0, 0xc(r6)
    lwz r0, 0x2c(r1)
    lfs f0, 0x2c(r4)
    add r6, r0, r5
    stfs f0, 0xc(r6)
    lwz r0, 0x14(r1)
    lfs f0, 0x30(r4)
    add r6, r0, r5
    stfs f0, 0x10(r6)
    lwz r0, 0x20(r1)
    lfs f0, 0x34(r4)
    add r6, r0, r5
    stfs f0, 0x10(r6)
    lwz r0, 0x2c(r1)
    lfs f0, 0x38(r4)
    add r6, r0, r5
    stfs f0, 0x10(r6)
    lwz r0, 0x14(r1)
    lfs f0, 0x3c(r4)
    add r6, r0, r5
    stfs f0, 0x14(r6)
    lwz r0, 0x20(r1)
    lfs f0, 0x40(r4)
    add r6, r0, r5
    stfs f0, 0x14(r6)
    lwz r0, 0x2c(r1)
    lfs f0, 0x44(r4)
    add r6, r0, r5
    stfs f0, 0x14(r6)
    lwz r0, 0x14(r1)
    lfs f0, 0x48(r4)
    add r6, r0, r5
    stfs f0, 0x18(r6)
    lwz r0, 0x20(r1)
    lfs f0, 0x4c(r4)
    add r6, r0, r5
    stfs f0, 0x18(r6)
    lwz r0, 0x2c(r1)
    lfs f0, 0x50(r4)
    add r6, r0, r5
    stfs f0, 0x18(r6)
    lwz r0, 0x14(r1)
    lfs f0, 0x54(r4)
    add r6, r0, r5
    stfs f0, 0x1c(r6)
    lwz r0, 0x20(r1)
    lfs f0, 0x58(r4)
    add r6, r0, r5
    stfs f0, 0x1c(r6)
    lwz r0, 0x2c(r1)
    lfs f0, 0x5c(r4)
    addi r4, r4, 0x60
    add r6, r0, r5
    addi r5, r5, 0x20
    stfs f0, 0x1c(r6)
    bdnz lbl_fn_80439574_0000131C
lbl_fn_80439574_000014A0:
    mulli r5, r3, 0xc
    addi r6, r1, 0x128
    subf r0, r3, r28
    slwi r4, r3, 2
    add r6, r6, r5
    mtctr r0
    cmpw r3, r28
    bge lbl_fn_80439574_000014F0
lbl_fn_80439574_000014C0:
    lwz r3, 0x14(r1)
    lfs f0, 0x0(r6)
    stfsx f0, r3, r4
    lwz r3, 0x20(r1)
    lfs f0, 0x4(r6)
    stfsx f0, r3, r4
    lwz r3, 0x2c(r1)
    lfs f0, 0x8(r6)
    addi r6, r6, 0xc
    stfsx f0, r3, r4
    addi r4, r4, 0x4
    bdnz lbl_fn_80439574_000014C0
lbl_fn_80439574_000014F0:
    lwz r5, 0x54(r26)
    addi r3, r26, 0x34
    lwz r4, 0x14(r1)
    bl fn_8032B7F0
    lwz r5, 0x60(r26)
    addi r3, r26, 0x34
    lwz r4, 0x20(r1)
    bl fn_8032B7F0
    lwz r5, 0x6c(r26)
    addi r3, r26, 0x34
    lwz r4, 0x2c(r1)
    bl fn_8032B7F0
    subi r4, r28, 0x1
    addi r5, r1, 0x128
    mulli r0, r4, 0xc
    psq_l f1, 0x0(r5), 0, 0
    lfs f2, 0x130(r1)
    addi r3, r26, 0x78
    stfs f2, 0x44(r26)
    add r5, r5, r0
    psq_st f1, 0x3c(r26), 0, 0
    lfs f0, lbl_80886900
    psq_l f1, 0x0(r5), 0, 0
    lfs f2, 0x8(r5)
    stfs f2, 0x50(r26)
    psq_st f1, 0x48(r26), 0, 0
    stfs f0, 0x38(r26)
    bl fn_8032BE88
    subi r24, r28, 0x1
    li r29, 0x0
    li r27, 0x0
    b lbl_fn_80439574_000015A0
lbl_fn_80439574_00001570:
    lwz r28, 0x78(r26)
    mr r4, r29
    addi r3, r26, 0x34
    bl fn_8032C1EC
    stfsx f1, r28, r27
    addi r29, r29, 0x1
    lwz r3, 0x78(r26)
    lfs f3, 0x38(r26)
    lfsx f0, r3, r27
    addi r27, r27, 0x4
    fadds f0, f3, f0
    stfs f0, 0x38(r26)
lbl_fn_80439574_000015A0:
    cmpw r29, r24
    blt lbl_fn_80439574_00001570
    addi r3, r1, 0x2c
    li r4, -0x1
    bl fn_8000D844
    addi r3, r1, 0x20
    li r4, -0x1
    bl fn_8000D844
    addi r3, r1, 0x14
    li r4, -0x1
    bl fn_8000D844
    lfs f3, lbl_80886900
    addi r4, r1, 0x5c
    lfs f0, lbl_80886908
    fcmpo cr0, f3, f3
    stfs f3, 0x30(r26)
    stfs f3, 0x28(r26)
    stfs f3, 0x24(r26)
    stfs f3, 0x20(r26)
    stfs f3, 0x1c(r26)
    stfs f3, 0x14(r26)
    stfs f3, 0x10(r26)
    stfs f3, 0xc(r26)
    stfs f3, 0x8(r26)
    stfs f0, 0x2c(r26)
    stfs f0, 0x18(r26)
    stfs f0, 0x4(r26)
    cror eq, lt, eq
    bne lbl_fn_80439574_00001628
    psq_l f1, 0x3c(r26), 0, 0
    lfs f2, 0x44(r26)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x64(r1)
    b lbl_fn_80439574_000017A0
lbl_fn_80439574_00001628:
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_80439574_00001648
    psq_l f1, 0x48(r26), 0, 0
    lfs f2, 0x50(r26)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x64(r1)
    b lbl_fn_80439574_000017A0
lbl_fn_80439574_00001648:
    lwz r6, 0x34(r26)
    li r5, 0x0
    lfs f0, 0x38(r26)
    li r3, 0x0
    subic. r0, r6, 0x1
    fmuls f3, f0, f3
    mtctr r0
    ble lbl_fn_80439574_00001790
lbl_fn_80439574_00001668:
    lwz r7, 0x78(r26)
    lfsx f0, r7, r3
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_80439574_00001780
    lfs f8, lbl_80886900
    fcmpu cr0, f8, f3
    bne lbl_fn_80439574_0000168C
    b lbl_fn_80439574_00001690
lbl_fn_80439574_0000168C:
    fdivs f8, f3, f0
lbl_fn_80439574_00001690:
    cmpwi r5, 0x0
    bge lbl_fn_80439574_000016AC
    psq_l f1, 0x3c(r26), 0, 0
    lfs f2, 0x44(r26)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x64(r1)
    b lbl_fn_80439574_000017A0
lbl_fn_80439574_000016AC:
    subi r0, r6, 0x1
    cmpw r5, r0
    blt lbl_fn_80439574_000016CC
    psq_l f1, 0x48(r26), 0, 0
    lfs f2, 0x50(r26)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x64(r1)
    b lbl_fn_80439574_000017A0
lbl_fn_80439574_000016CC:
    cmpwi r6, 0x2
    bge lbl_fn_80439574_000016F0
    lis r3, lbl_807C7030@ha
    addi r3, r3, lbl_807C7030@l
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x8(r3)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x64(r1)
    b lbl_fn_80439574_000017A0
lbl_fn_80439574_000016F0:
    lwz r0, 0x54(r26)
    slwi r7, r5, 4
    lwz r3, 0x60(r26)
    addi r5, r1, 0x8
    add r6, r0, r7
    lwz r0, 0x6c(r26)
    add r3, r3, r7
    lfs f5, 0xc(r6)
    lfs f3, 0x8(r6)
    add r7, r0, r7
    lfs f4, 0xc(r3)
    fmadds f7, f5, f8, f3
    lfs f0, 0x8(r3)
    lfs f6, 0x4(r6)
    fmadds f5, f4, f8, f0
    lfs f4, 0x4(r3)
    fmadds f7, f8, f7, f6
    lfs f6, 0x0(r6)
    fmadds f5, f8, f5, f4
    lfs f4, 0x0(r3)
    fmadds f6, f8, f7, f6
    lfs f3, 0xc(r7)
    lfs f0, 0x8(r7)
    fmadds f4, f8, f5, f4
    fmadds f3, f3, f8, f0
    lfs f0, 0x4(r7)
    stfs f6, 0x8(r1)
    fmadds f3, f8, f3, f0
    lfs f0, 0x0(r7)
    stfs f4, 0xc(r1)
    fmadds f2, f8, f3, f0
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x10(r1)
    stfs f2, 0x64(r1)
    b lbl_fn_80439574_000017A0
lbl_fn_80439574_00001780:
    fsubs f3, f3, f0
    addi r5, r5, 0x1
    addi r3, r3, 0x4
    bdnz lbl_fn_80439574_00001668
lbl_fn_80439574_00001790:
    psq_l f1, 0x3c(r26), 0, 0
    lfs f2, 0x44(r26)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x64(r1)
lbl_fn_80439574_000017A0:
    lwz r0, 0x8c(r26)
    lfs f5, 0x5c(r1)
    lfs f3, 0x60(r1)
    cmpwi r0, 0x0
    lfs f0, 0x64(r1)
    lfs f4, lbl_80886948
    stfs f5, 0x10(r26)
    stfs f3, 0x20(r26)
    stfs f0, 0x30(r26)
    stfs f4, 0x88(r26)
    blt lbl_fn_80439574_000017D8
    lfs f0, lbl_80886900
    stfs f0, 0x84(r26)
    b lbl_fn_80439574_000017FC
lbl_fn_80439574_000017D8:
    neg r0, r0
    lis r3, lbl_80754270@ha
    xoris r0, r0, 0x8000
    stw r0, 0x1bc(r1)
    lfd f3, lbl_80754270@l(r3)
    lfd f0, 0x1b8(r1)
    fsubs f0, f0, f3
    fmuls f0, f4, f0
    stfs f0, 0x84(r26)
lbl_fn_80439574_000017FC:
    lwz r3, 0xec8(r25)
    addi r0, r3, 0x1
    stw r0, 0xec8(r25)
lbl_fn_80439574_00001808:
    addi r11, r1, 0x1f0
    psq_l f31, 0x298(r1), 0, 0
    lfd f31, 0x290(r1)
    psq_l f30, 0x288(r1), 0, 0
    lfd f30, 0x280(r1)
    psq_l f29, 0x278(r1), 0, 0
    lfd f29, 0x270(r1)
    psq_l f28, 0x268(r1), 0, 0
    lfd f28, 0x260(r1)
    psq_l f27, 0x258(r1), 0, 0
    lfd f27, 0x250(r1)
    psq_l f26, 0x248(r1), 0, 0
    lfd f26, 0x240(r1)
    psq_l f25, 0x238(r1), 0, 0
    lfd f25, 0x230(r1)
    psq_l f24, 0x228(r1), 0, 0
    lfd f24, 0x220(r1)
    psq_l f23, 0x218(r1), 0, 0
    lfd f23, 0x210(r1)
    psq_l f22, 0x208(r1), 0, 0
    lfd f22, 0x200(r1)
    psq_l f21, 0x1f8(r1), 0, 0
    lfd f21, 0x1f0(r1)
    bl _restgpr_24
    lwz r0, 0x2a4(r1)
    mtlr r0
    addi r1, r1, 0x2a0
    blr
}

asm void fn_8043A08C(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    mr r31, r4
    stw r30, 0x48(r1)
    mr r30, r3
    stw r29, 0x44(r1)
    lwz r0, 0x0(r4)
    cmpwi r0, 0x1
    beq lbl_fn_8043A08C_000018C0
    cmpwi r0, 0x2
    beq lbl_fn_8043A08C_00001948
    cmpwi r0, 0x3
    beq lbl_fn_8043A08C_00001B68
    cmpwi r0, 0x4
    beq lbl_fn_8043A08C_00001C94
    b lbl_fn_8043A08C_00001D00
lbl_fn_8043A08C_000018C0:
    lwz r3, 0x8c(r4)
    cmpwi r3, 0x0
    ble lbl_fn_8043A08C_000018D4
    subi r0, r3, 0x1
    stw r0, 0x8c(r4)
lbl_fn_8043A08C_000018D4:
    lwz r0, 0x8c(r4)
    cmpwi r0, 0x0
    bgt lbl_fn_8043A08C_00001D00
    li r0, 0x2
    li r29, 0x0
    stw r0, 0x0(r4)
    stw r29, 0x8c(r4)
    lwz r0, lbl_8087F3C0
    cmpwi r0, 0x0
    beq lbl_fn_8043A08C_00001D00
    mr r3, r31
    li r4, 0x0
    bl fn_80232B7C
    stw r29, 0x8(r1)
    li r3, -0x1
    li r0, 0x1
    lfs f1, lbl_80886908
    stw r3, 0xc(r1)
    addi r4, r30, 0xf18
    addi r7, r31, 0x4
    li r5, -0x1
    stw r0, 0x10(r1)
    li r6, 0x5
    li r8, 0x0
    li r9, 0x0
    lwz r3, lbl_8087F3C0
    li r10, 0x0
    bl fn_8023A680
    b lbl_fn_8043A08C_00001D00
lbl_fn_8043A08C_00001948:
    lwz r0, 0x184(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8043A08C_00001B5C
    lfs f5, 0x84(r4)
    lfs f4, lbl_80886908
    fcmpo cr0, f5, f4
    bge lbl_fn_8043A08C_00001B5C
    lfs f3, 0x88(r4)
    addi r5, r1, 0x28
    lfs f0, lbl_80886900
    fadds f3, f5, f3
    stfs f0, 0x30(r4)
    stfs f3, 0x84(r4)
    fcmpo cr0, f3, f0
    stfs f0, 0x28(r4)
    stfs f0, 0x24(r4)
    stfs f0, 0x20(r4)
    stfs f0, 0x1c(r4)
    stfs f0, 0x14(r4)
    stfs f0, 0x10(r4)
    stfs f0, 0xc(r4)
    stfs f0, 0x8(r4)
    stfs f4, 0x2c(r4)
    stfs f4, 0x18(r4)
    stfs f4, 0x4(r4)
    cror eq, lt, eq
    bne lbl_fn_8043A08C_000019C8
    psq_l f1, 0x3c(r4), 0, 0
    lfs f2, 0x44(r4)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x30(r1)
    b lbl_fn_8043A08C_00001B40
lbl_fn_8043A08C_000019C8:
    fcmpo cr0, f3, f4
    cror eq, gt, eq
    bne lbl_fn_8043A08C_000019E8
    psq_l f1, 0x48(r4), 0, 0
    lfs f2, 0x50(r4)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x30(r1)
    b lbl_fn_8043A08C_00001B40
lbl_fn_8043A08C_000019E8:
    lwz r7, 0x34(r4)
    li r6, 0x0
    lfs f0, 0x38(r4)
    li r3, 0x0
    subic. r0, r7, 0x1
    fmuls f3, f0, f3
    mtctr r0
    ble lbl_fn_8043A08C_00001B30
lbl_fn_8043A08C_00001A08:
    lwz r8, 0x78(r4)
    lfsx f0, r8, r3
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_8043A08C_00001B20
    lfs f8, lbl_80886900
    fcmpu cr0, f8, f3
    bne lbl_fn_8043A08C_00001A2C
    b lbl_fn_8043A08C_00001A30
lbl_fn_8043A08C_00001A2C:
    fdivs f8, f3, f0
lbl_fn_8043A08C_00001A30:
    cmpwi r6, 0x0
    bge lbl_fn_8043A08C_00001A4C
    psq_l f1, 0x3c(r4), 0, 0
    lfs f2, 0x44(r4)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x30(r1)
    b lbl_fn_8043A08C_00001B40
lbl_fn_8043A08C_00001A4C:
    subi r0, r7, 0x1
    cmpw r6, r0
    blt lbl_fn_8043A08C_00001A6C
    psq_l f1, 0x48(r4), 0, 0
    lfs f2, 0x50(r4)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x30(r1)
    b lbl_fn_8043A08C_00001B40
lbl_fn_8043A08C_00001A6C:
    cmpwi r7, 0x2
    bge lbl_fn_8043A08C_00001A90
    lis r3, lbl_807C7030@ha
    addi r3, r3, lbl_807C7030@l
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x8(r3)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x30(r1)
    b lbl_fn_8043A08C_00001B40
lbl_fn_8043A08C_00001A90:
    lwz r0, 0x54(r4)
    slwi r8, r6, 4
    lwz r3, 0x60(r4)
    addi r6, r1, 0x1c
    add r7, r0, r8
    lwz r0, 0x6c(r4)
    add r3, r3, r8
    lfs f5, 0xc(r7)
    lfs f3, 0x8(r7)
    add r8, r0, r8
    lfs f4, 0xc(r3)
    fmadds f7, f5, f8, f3
    lfs f0, 0x8(r3)
    lfs f6, 0x4(r7)
    fmadds f5, f4, f8, f0
    lfs f4, 0x4(r3)
    fmadds f7, f8, f7, f6
    lfs f6, 0x0(r7)
    fmadds f5, f8, f5, f4
    lfs f4, 0x0(r3)
    fmadds f6, f8, f7, f6
    lfs f3, 0xc(r8)
    lfs f0, 0x8(r8)
    fmadds f4, f8, f5, f4
    fmadds f3, f3, f8, f0
    lfs f0, 0x4(r8)
    stfs f6, 0x1c(r1)
    fmadds f3, f8, f3, f0
    lfs f0, 0x0(r8)
    stfs f4, 0x20(r1)
    fmadds f2, f8, f3, f0
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x24(r1)
    stfs f2, 0x30(r1)
    b lbl_fn_8043A08C_00001B40
lbl_fn_8043A08C_00001B20:
    fsubs f3, f3, f0
    addi r6, r6, 0x1
    addi r3, r3, 0x4
    bdnz lbl_fn_8043A08C_00001A08
lbl_fn_8043A08C_00001B30:
    psq_l f1, 0x3c(r4), 0, 0
    lfs f2, 0x44(r4)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x30(r1)
lbl_fn_8043A08C_00001B40:
    lfs f4, 0x28(r1)
    lfs f3, 0x2c(r1)
    lfs f0, 0x30(r1)
    stfs f4, 0x10(r4)
    stfs f3, 0x20(r4)
    stfs f0, 0x30(r4)
    b lbl_fn_8043A08C_00001D00
lbl_fn_8043A08C_00001B5C:
    li r0, 0x4
    stw r0, 0x0(r4)
    b lbl_fn_8043A08C_00001D00
lbl_fn_8043A08C_00001B68:
    addi r3, r4, 0x90
    bl fn_8044F434
    lwz r4, 0x94(r31)
    li r0, 0x1
    li r3, 0x0
    cmpwi r4, 0x3
    blt lbl_fn_8043A08C_00001B90
    cmpwi r4, 0x5
    bge lbl_fn_8043A08C_00001B90
    li r3, 0x1
lbl_fn_8043A08C_00001B90:
    cmpwi r3, 0x0
    bne lbl_fn_8043A08C_00001BA4
    cmpwi r4, 0x7
    beq lbl_fn_8043A08C_00001BA4
    li r0, 0x0
lbl_fn_8043A08C_00001BA4:
    cmpwi r0, 0x0
    bne lbl_fn_8043A08C_00001D00
    lis r4, lbl_80754260@ha
    lfs f1, lbl_80886908
    addi r4, r4, lbl_80754260@l
    addi r3, r1, 0x18
    lwz r4, 0x4(r4)
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    lwz r3, 0xee4(r30)
    lfs f1, lbl_80886908
    subic. r3, r3, 0x1
    ble lbl_fn_8043A08C_00001C54
    cmpwi r3, 0x8
    ble lbl_fn_8043A08C_00001C3C
    cmpwi r3, -0x1
    li r0, 0x0
    ble lbl_fn_8043A08C_00001BF4
    li r0, 0x1
lbl_fn_8043A08C_00001BF4:
    cmpwi r0, 0x0
    beq lbl_fn_8043A08C_00001C3C
    subi r0, r3, 0x1
    lfs f0, lbl_80886950
    srwi r0, r0, 3
    mtctr r0
    cmpwi r3, 0x8
    ble lbl_fn_8043A08C_00001C3C
lbl_fn_8043A08C_00001C14:
    fmuls f1, f1, f0
    subi r3, r3, 0x8
    fmuls f1, f1, f0
    fmuls f1, f1, f0
    fmuls f1, f1, f0
    fmuls f1, f1, f0
    fmuls f1, f1, f0
    fmuls f1, f1, f0
    fmuls f1, f1, f0
    bdnz lbl_fn_8043A08C_00001C14
lbl_fn_8043A08C_00001C3C:
    lfs f0, lbl_80886950
    mtctr r3
    cmpwi r3, 0x0
    ble lbl_fn_8043A08C_00001C54
lbl_fn_8043A08C_00001C4C:
    fmuls f1, f1, f0
    bdnz lbl_fn_8043A08C_00001C4C
lbl_fn_8043A08C_00001C54:
    lfs f0, lbl_8088694C
    addi r3, r1, 0x18
    fcmpo cr0, f1, f0
    bge lbl_fn_8043A08C_00001C68
    b lbl_fn_8043A08C_00001C6C
lbl_fn_8043A08C_00001C68:
    fmr f1, f0
lbl_fn_8043A08C_00001C6C:
    li r4, 0x0
    bl fn_800CB688
    addi r3, r31, 0x90
    bl fn_80450778
    li r0, 0x4
    stw r0, 0x0(r31)
    addi r3, r1, 0x18
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_8043A08C_00001D00
lbl_fn_8043A08C_00001C94:
    addi r3, r4, 0x90
    bl fn_8044F434
    addi r3, r31, 0x90
    bl fn_8044EEC0
    cmpwi r3, 0x0
    beq lbl_fn_8043A08C_00001D00
    lwz r0, 0x0(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8043A08C_00001D00
    li r0, 0x0
    stw r0, 0x0(r31)
    lwz r3, lbl_8087F3C0
    cmpwi r3, 0x0
    beq lbl_fn_8043A08C_00001CF4
    mr r4, r31
    li r5, 0x0
    bl fn_80239D58
    cmpwi r3, 0x0
    beq lbl_fn_8043A08C_00001CF4
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x0
    li r6, 0x0
    bl fn_80239DAC
lbl_fn_8043A08C_00001CF4:
    lwz r3, 0xec8(r30)
    subi r0, r3, 0x1
    stw r0, 0xec8(r30)
lbl_fn_8043A08C_00001D00:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}
