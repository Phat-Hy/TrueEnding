#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void fn_8004D388(void);
extern void fn_80063D3C(void);
extern void fn_80097C08(void);
extern void fn_80097CCC(void);
extern void fn_80097D7C(void);
extern void fn_800F8548(void);
extern void fn_800F8574(void);
extern void fn_800F8C6C(void);
extern void fn_80107A68(void);
extern void fn_80108C10(void);
extern void fn_8012DF7C(void);
extern void fn_80144710(void);
extern void fn_80148B0C(void);
extern void fn_8015B238(void);
extern void fn_8016E970(void);
extern void fn_80176548(void);
extern void fn_80219E6C(void);
extern void fn_80232B7C(void);
extern void fn_80239DAC(void);
extern void fn_8023A8B4(void);
extern void fn_80370AE4(void);
extern void fn_803EEE10(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9940(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);

/* External data declarations */
extern u8 lbl_80755090[];
extern u8 lbl_80755098[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087EEB0;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F4A0;
extern u32 lbl_80886D60;
extern u32 lbl_80886D70;
extern u32 lbl_80886D78;
extern u32 lbl_80886D7C;
extern u32 lbl_80886D80;
extern u32 lbl_80886D84;
extern u32 lbl_80886D88;
extern u32 lbl_80886D8C;
extern u32 lbl_80886D90;
extern u32 lbl_80886D9C;
extern u32 lbl_80886DA8;
extern u32 lbl_80886DB8;
extern u32 lbl_80886DBC;
extern u32 lbl_80886DC0;
extern u32 lbl_80886DDC;
extern u32 lbl_80886DEC;
extern u32 lbl_80886E20;
extern u32 lbl_80886E28;
extern u32 lbl_80886E3C;
extern u32 lbl_80886E40;
extern u32 lbl_80886E44;
extern u32 lbl_80886E48;
extern u32 lbl_80886E4C;
extern u32 lbl_80886E50;
extern u32 lbl_80886E54;
extern u32 lbl_80886E58;
extern u32 lbl_80886E5C;

/* Function declarations */
void fn_80464608(void);
void fn_80464CF0(void);
void fn_80465294(void);
void fn_804654F0(void);
void fn_804655AC(void);
void fn_80465B88(void);

asm void fn_80464608(void)
{
    nofralloc
    stwu r1, -0x140(r1)
    mflr r0
    stw r0, 0x144(r1)
    stfd f31, 0x130(r1)
    psq_st f31, 0x138(r1), 0, 0
    stfd f30, 0x120(r1)
    psq_st f30, 0x128(r1), 0, 0
    stw r31, 0x11c(r1)
    mr r31, r3
    stw r30, 0x118(r1)
    lwz r0, 0x14c0(r3)
    cmpwi r0, 0x21
    blt lbl_fn_80464608_00000098
    li r0, 0x0
    stw r0, 0x14bc(r3)
    stw r0, 0x14c0(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80464608_00000064
    li r4, 0x8c
    li r5, 0x0
    bl fn_80370AE4
lbl_fn_80464608_00000064:
    li r30, 0x0
    stw r30, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lwz r0, 0x1800(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80464608_000006C0
    lwz r3, lbl_8087F048
    addi r4, r31, 0xb0
    bl fn_80107A68
    stw r30, 0x1800(r31)
    b lbl_fn_80464608_000006C0
lbl_fn_80464608_00000098:
    xoris r4, r0, 0x8000
    lis r0, 0x4330
    lis r5, lbl_80755090@ha
    stw r4, 0x10c(r1)
    lfd f5, lbl_80755090@l(r5)
    addi r6, r1, 0x80
    stw r0, 0x108(r1)
    lfs f3, lbl_80886E3C
    lfd f4, 0x108(r1)
    lfs f0, lbl_80886D60
    fsubs f4, f4, f5
    fmuls f3, f3, f4
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_80464608_000000EC
    addi r4, r3, 0x150c
    lfs f2, 0x1514(r3)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x88(r1)
    b lbl_fn_80464608_00000278
lbl_fn_80464608_000000EC:
    lfs f0, lbl_80886D8C
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_80464608_00000114
    addi r4, r3, 0x1518
    lfs f2, 0x1520(r3)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x88(r1)
    b lbl_fn_80464608_00000278
lbl_fn_80464608_00000114:
    lwz r8, 0x1504(r3)
    li r7, 0x0
    lfs f0, 0x1508(r3)
    li r4, 0x0
    subic. r0, r8, 0x1
    fmuls f3, f0, f3
    mtctr r0
    ble lbl_fn_80464608_00000264
lbl_fn_80464608_00000134:
    lwz r5, 0x1548(r3)
    lfsx f0, r5, r4
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_80464608_00000254
    lfs f8, lbl_80886D60
    fcmpu cr0, f8, f3
    bne lbl_fn_80464608_00000158
    b lbl_fn_80464608_0000015C
lbl_fn_80464608_00000158:
    fdivs f8, f3, f0
lbl_fn_80464608_0000015C:
    cmpwi r7, 0x0
    bge lbl_fn_80464608_0000017C
    addi r4, r3, 0x150c
    lfs f2, 0x1514(r3)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x88(r1)
    b lbl_fn_80464608_00000278
lbl_fn_80464608_0000017C:
    subi r0, r8, 0x1
    cmpw r7, r0
    blt lbl_fn_80464608_000001A0
    addi r4, r3, 0x1518
    lfs f2, 0x1520(r3)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x88(r1)
    b lbl_fn_80464608_00000278
lbl_fn_80464608_000001A0:
    cmpwi r8, 0x2
    bge lbl_fn_80464608_000001C4
    lis r4, lbl_807C7030@ha
    addi r4, r4, lbl_807C7030@l
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x88(r1)
    b lbl_fn_80464608_00000278
lbl_fn_80464608_000001C4:
    lwz r0, 0x1524(r3)
    slwi r8, r7, 4
    lwz r4, 0x1530(r3)
    addi r5, r1, 0x5c
    add r7, r0, r8
    lwz r0, 0x153c(r3)
    add r4, r4, r8
    lfs f5, 0xc(r7)
    lfs f3, 0x8(r7)
    add r8, r0, r8
    lfs f4, 0xc(r4)
    fmadds f7, f5, f8, f3
    lfs f0, 0x8(r4)
    lfs f6, 0x4(r7)
    fmadds f5, f4, f8, f0
    lfs f4, 0x4(r4)
    fmadds f7, f8, f7, f6
    lfs f6, 0x0(r7)
    fmadds f5, f8, f5, f4
    lfs f4, 0x0(r4)
    fmadds f6, f8, f7, f6
    lfs f3, 0xc(r8)
    lfs f0, 0x8(r8)
    fmadds f4, f8, f5, f4
    fmadds f3, f3, f8, f0
    lfs f0, 0x4(r8)
    stfs f6, 0x5c(r1)
    fmadds f3, f8, f3, f0
    lfs f0, 0x0(r8)
    stfs f4, 0x60(r1)
    fmadds f2, f8, f3, f0
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x64(r1)
    stfs f2, 0x88(r1)
    b lbl_fn_80464608_00000278
lbl_fn_80464608_00000254:
    fsubs f3, f3, f0
    addi r7, r7, 0x1
    addi r4, r4, 0x4
    bdnz lbl_fn_80464608_00000134
lbl_fn_80464608_00000264:
    addi r4, r3, 0x150c
    lfs f2, 0x1514(r3)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x88(r1)
lbl_fn_80464608_00000278:
    lwz r4, 0x14c0(r3)
    lis r0, 0x4330
    lis r5, lbl_80755090@ha
    psq_l f1, 0x0(r6), 0, 0
    subi r4, r4, 0x1
    lfs f2, 0x8(r6)
    xoris r4, r4, 0x8000
    stw r4, 0x10c(r1)
    lfd f5, lbl_80755090@l(r5)
    addi r6, r1, 0x8c
    stw r0, 0x108(r1)
    lfs f3, lbl_80886E3C
    lfd f4, 0x108(r1)
    lfs f0, lbl_80886D60
    fsubs f4, f4, f5
    psq_st f1, 0x528(r3), 0, 0
    stfs f2, 0x530(r3)
    fmuls f3, f3, f4
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_80464608_000002E4
    addi r4, r3, 0x150c
    lfs f2, 0x1514(r3)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x94(r1)
    b lbl_fn_80464608_00000470
lbl_fn_80464608_000002E4:
    lfs f0, lbl_80886D8C
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_80464608_0000030C
    addi r4, r3, 0x1518
    lfs f2, 0x1520(r3)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x94(r1)
    b lbl_fn_80464608_00000470
lbl_fn_80464608_0000030C:
    lwz r8, 0x1504(r3)
    li r7, 0x0
    lfs f0, 0x1508(r3)
    li r4, 0x0
    subic. r0, r8, 0x1
    fmuls f3, f0, f3
    mtctr r0
    ble lbl_fn_80464608_0000045C
lbl_fn_80464608_0000032C:
    lwz r5, 0x1548(r3)
    lfsx f0, r5, r4
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_80464608_0000044C
    lfs f8, lbl_80886D60
    fcmpu cr0, f8, f3
    bne lbl_fn_80464608_00000350
    b lbl_fn_80464608_00000354
lbl_fn_80464608_00000350:
    fdivs f8, f3, f0
lbl_fn_80464608_00000354:
    cmpwi r7, 0x0
    bge lbl_fn_80464608_00000374
    addi r4, r3, 0x150c
    lfs f2, 0x1514(r3)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x94(r1)
    b lbl_fn_80464608_00000470
lbl_fn_80464608_00000374:
    subi r0, r8, 0x1
    cmpw r7, r0
    blt lbl_fn_80464608_00000398
    addi r4, r3, 0x1518
    lfs f2, 0x1520(r3)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x94(r1)
    b lbl_fn_80464608_00000470
lbl_fn_80464608_00000398:
    cmpwi r8, 0x2
    bge lbl_fn_80464608_000003BC
    lis r4, lbl_807C7030@ha
    addi r4, r4, lbl_807C7030@l
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x94(r1)
    b lbl_fn_80464608_00000470
lbl_fn_80464608_000003BC:
    lwz r0, 0x1524(r3)
    slwi r8, r7, 4
    lwz r4, 0x1530(r3)
    addi r5, r1, 0x50
    add r7, r0, r8
    lwz r0, 0x153c(r3)
    add r4, r4, r8
    lfs f5, 0xc(r7)
    lfs f3, 0x8(r7)
    add r8, r0, r8
    lfs f4, 0xc(r4)
    fmadds f7, f5, f8, f3
    lfs f0, 0x8(r4)
    lfs f6, 0x4(r7)
    fmadds f5, f4, f8, f0
    lfs f4, 0x4(r4)
    fmadds f7, f8, f7, f6
    lfs f6, 0x0(r7)
    fmadds f5, f8, f5, f4
    lfs f4, 0x0(r4)
    fmadds f6, f8, f7, f6
    lfs f3, 0xc(r8)
    lfs f0, 0x8(r8)
    fmadds f4, f8, f5, f4
    fmadds f3, f3, f8, f0
    lfs f0, 0x4(r8)
    stfs f6, 0x50(r1)
    fmadds f3, f8, f3, f0
    lfs f0, 0x0(r8)
    stfs f4, 0x54(r1)
    fmadds f2, f8, f3, f0
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x58(r1)
    stfs f2, 0x94(r1)
    b lbl_fn_80464608_00000470
lbl_fn_80464608_0000044C:
    fsubs f3, f3, f0
    addi r7, r7, 0x1
    addi r4, r4, 0x4
    bdnz lbl_fn_80464608_0000032C
lbl_fn_80464608_0000045C:
    addi r4, r3, 0x150c
    lfs f2, 0x1514(r3)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x94(r1)
lbl_fn_80464608_00000470:
    lfs f3, 0x530(r3)
    addi r4, r1, 0x68
    lfs f0, 0x94(r1)
    addi r30, r1, 0x74
    lfs f5, 0x52c(r3)
    fsubs f2, f3, f0
    lfs f4, 0x90(r1)
    lfs f3, 0x528(r3)
    fsubs f4, f5, f4
    lfs f0, 0x8c(r1)
    stfs f2, 0x70(r1)
    fsubs f3, f3, f0
    lfs f0, lbl_80886D80
    stfs f4, 0x6c(r1)
    frsp f4, f2
    stfs f3, 0x68(r1)
    fabs f3, f4
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0x7c(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_80464608_000004F0
    lfs f3, 0x74(r1)
    lfs f0, lbl_80886D60
    fcmpo cr0, f3, f0
    ble lbl_fn_80464608_000004E4
    lfs f0, lbl_80886D84
    b lbl_fn_80464608_000004E8
lbl_fn_80464608_000004E4:
    lfs f0, lbl_80886D88
lbl_fn_80464608_000004E8:
    stfs f0, 0x48(r1)
    b lbl_fn_80464608_00000504
lbl_fn_80464608_000004F0:
    fmr f2, f4
    lfs f1, 0x74(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_80464608_00000504:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x98
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80886D60
    addi r4, r1, 0x38
    lfs f30, 0xa0(r1)
    mr r5, r4
    lfs f31, 0x9c(r1)
    addi r3, r1, 0xc8
    lfs f13, 0x98(r1)
    lfs f12, 0xb0(r1)
    lfs f11, 0xac(r1)
    lfs f10, 0xa8(r1)
    lfs f9, 0xc0(r1)
    lfs f8, 0xbc(r1)
    lfs f7, 0xb8(r1)
    lfs f6, 0xc4(r1)
    lfs f5, 0xb4(r1)
    lfs f4, 0xa4(r1)
    lfs f0, lbl_80886D8C
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x7c(r1)
    stfs f3, 0xf8(r1)
    stfs f3, 0xfc(r1)
    stfs f3, 0x100(r1)
    stfs f0, 0x104(r1)
    stfs f13, 0x8(r1)
    stfs f31, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f13, 0xc8(r1)
    stfs f31, 0xcc(r1)
    stfs f30, 0xd0(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xd8(r1)
    stfs f11, 0xdc(r1)
    stfs f12, 0xe0(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0xe8(r1)
    stfs f8, 0xec(r1)
    stfs f9, 0xf0(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0xd4(r1)
    stfs f5, 0xe4(r1)
    stfs f6, 0xf4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80886D80
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80464608_00000620
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80886D60
    fcmpo cr0, f3, f0
    ble lbl_fn_80464608_00000610
    lfs f0, lbl_80886D84
    b lbl_fn_80464608_00000614
lbl_fn_80464608_00000610:
    lfs f0, lbl_80886D88
lbl_fn_80464608_00000614:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_80464608_00000634
lbl_fn_80464608_00000620:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_80464608_00000634:
    lfs f2, lbl_80886D60
    addi r3, r1, 0x44
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r31
    stfs f2, 0x4c(r1)
    stfs f2, 0x7c(r1)
    frsp f2, f2
    psq_st f1, 0x0(r30), 0, 0
    psq_st f1, 0x534(r31), 0, 0
    stfs f2, 0x53c(r31)
    bl fn_80144710
    li r3, 0x5b4
    bl fn_80219E6C
    mr r30, r3
    lwz r3, lbl_8087F048
    lwz r8, 0x590(r31)
    mr r6, r31
    lfs f1, lbl_80886D60
    mr r7, r30
    li r4, 0x0
    li r5, 0x0
    li r9, 0x1e
    li r10, -0x1
    bl fn_800F8C6C
    lwz r0, 0x18f4(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80464608_000006C0
    lfs f3, 0x8e4(r31)
    addi r4, r31, 0x528
    lfs f0, 0x40(r30)
    lis r5, 0xffff
    lwz r3, lbl_8087EEB0
    fadds f1, f3, f0
    lfs f2, lbl_80886D60
    bl fn_80063D3C
lbl_fn_80464608_000006C0:
    lwz r0, 0x144(r1)
    psq_l f31, 0x138(r1), 0, 0
    lfd f31, 0x130(r1)
    psq_l f30, 0x128(r1), 0, 0
    lfd f30, 0x120(r1)
    lwz r31, 0x11c(r1)
    lwz r30, 0x118(r1)
    mtlr r0
    addi r1, r1, 0x140
    blr
}

asm void fn_80464CF0(void)
{
    nofralloc
    stwu r1, -0x330(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x334(r1)
    stfd f31, 0x320(r1)
    psq_st f31, 0x328(r1), 0, 0
    stw r31, 0x31c(r1)
    mr r31, r3
    stw r30, 0x318(r1)
    lfs f31, 0x2e4(r3)
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_80464CF0_00000888
    lwz r0, 0x1574(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80464CF0_00000824
    li r0, 0x0
    stw r0, 0x14bc(r31)
    stw r0, 0x14c0(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80464CF0_00000760
    li r4, 0x8c
    li r5, 0x0
    bl fn_80370AE4
lbl_fn_80464CF0_00000760:
    li r0, 0xd
    stw r0, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lfs f0, lbl_80886D8C
    li r30, 0x1
    stw r30, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80886D60
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x146
    lfs f2, lbl_80886D90
    li r6, 0x1
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    li r0, 0x0
    stw r0, 0x15a8(r31)
    mr r3, r31
    li r4, 0x3e8
    bl fn_80232B7C
    lfs f0, lbl_80886D60
    li r0, -0x1
    lfs f1, lbl_80886D8C
    addi r4, r31, 0x179c
    stfs f0, 0x20(r1)
    addi r5, r31, 0xb0
    addi r7, r1, 0x2c
    addi r8, r1, 0x20
    stfs f0, 0x24(r1)
    addi r9, r1, 0x10
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x28(r1)
    stfs f0, 0x2c(r1)
    stfs f0, 0x30(r1)
    stfs f0, 0x34(r1)
    stfs f1, 0x10(r1)
    stfs f1, 0x14(r1)
    stfs f1, 0x18(r1)
    stfs f1, 0x1c(r1)
    stw r0, 0x8(r1)
    stw r30, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    b lbl_fn_80464CF0_00000C6C
lbl_fn_80464CF0_00000824:
    li r0, 0x0
    stw r0, 0x14bc(r31)
    stw r0, 0x14c0(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80464CF0_00000854
    li r4, 0x8c
    li r5, 0x0
    bl fn_80370AE4
lbl_fn_80464CF0_00000854:
    li r30, 0x0
    stw r30, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lwz r0, 0x1800(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80464CF0_00000C6C
    lwz r3, lbl_8087F048
    addi r4, r31, 0xb0
    bl fn_80107A68
    stw r30, 0x1800(r31)
    b lbl_fn_80464CF0_00000C6C
lbl_fn_80464CF0_00000888:
    lwz r0, 0x14c0(r31)
    cmpwi r0, 0x18
    bge lbl_fn_80464CF0_000009AC
    li r6, 0x0
    stw r6, 0x2ec(r1)
    addi r7, r31, 0x1568
    lis r0, 0x4330
    stw r6, 0x2f0(r1)
    lis r3, lbl_80755090@ha
    addi r30, r1, 0x68
    lfd f9, lbl_80755090@l(r3)
    stw r6, 0x2f4(r1)
    mr r4, r31
    lwz r8, lbl_8087F0A8
    addi r3, r1, 0x58
    stw r6, 0x2f8(r1)
    addi r5, r31, 0x528
    lfs f7, lbl_80886DEC
    psq_l f1, 0x0(r7), 0, 0
    lfs f2, 0x1570(r31)
    stfs f2, 0x70(r1)
    psq_st f1, 0x0(r30), 0, 0
    lwz r7, 0x30(r8)
    stw r0, 0x308(r1)
    mullw r0, r7, r7
    lfs f0, 0x6c(r1)
    stw r6, 0x29c(r1)
    stw r6, 0x2a0(r1)
    xoris r0, r0, 0x8000
    stw r0, 0x30c(r1)
    lfd f8, 0x308(r1)
    stw r6, 0x2a4(r1)
    fsubs f8, f8, f9
    stw r6, 0x2a8(r1)
    fdivs f7, f7, f8
    fadds f0, f0, f7
    stfs f0, 0x6c(r1)
    bl fn_80176548
    lfs f8, 0x64(r1)
    lis r7, 0x8000
    lfs f7, lbl_80886DB8
    mr r6, r30
    lfs f0, 0x5c(r1)
    addi r4, r1, 0x2b8
    fadds f1, f8, f7
    lwz r3, lbl_8087EE98
    fadds f0, f0, f7
    addi r5, r1, 0x58
    stfs f1, 0x64(r1)
    addi r7, r7, 0x80
    stfs f0, 0x5c(r1)
    addi r8, r31, 0x5b8
    li r9, 0x0
    bl fn_8004D388
    addi r3, r1, 0x2c8
    lfs f2, 0x2d0(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x528(r31), 0, 0
    lfs f0, 0x5ac(r31)
    lfs f10, 0x528(r31)
    lfs f9, 0x5a4(r31)
    fsubs f0, f2, f0
    lfs f8, 0x52c(r31)
    lfs f7, 0x5a8(r31)
    fsubs f9, f10, f9
    stfs f0, 0x530(r31)
    fsubs f7, f8, f7
    stfs f9, 0x528(r31)
    stfs f7, 0x52c(r31)
    lfs f0, 0x64(r1)
    fsubs f0, f7, f0
    stfs f0, 0x52c(r31)
    b lbl_fn_80464CF0_00000C6C
lbl_fn_80464CF0_000009AC:
    bne lbl_fn_80464CF0_00000A04
    mr r3, r31
    bl fn_80144710
    li r0, 0x0
    stw r0, 0x1574(r31)
    lfs f31, 0x538(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    mr r30, r3
    li r3, 0x5b5
    bl fn_80219E6C
    fmr f1, f31
    mr r7, r3
    lwz r3, lbl_8087F048
    mr r6, r31
    mr r8, r30
    li r4, 0x0
    li r5, 0x0
    li r9, 0x1e
    li r10, -0x1
    bl fn_800F8C6C
    b lbl_fn_80464CF0_00000C6C
lbl_fn_80464CF0_00000A04:
    li r4, 0x0
    stw r4, 0x24c(r1)
    lis r3, lbl_80755090@ha
    lwz r5, lbl_8087F0A8
    stw r4, 0x250(r1)
    lis r0, 0x4330
    lfd f10, lbl_80755090@l(r3)
    addi r30, r1, 0x198
    stw r4, 0x254(r1)
    lfs f8, lbl_80886DEC
    stw r4, 0x258(r1)
    lfs f7, lbl_80886D60
    lwz r3, 0x30(r5)
    stw r0, 0x308(r1)
    mullw r0, r3, r3
    lfs f0, lbl_80886D8C
    stfs f7, 0x48(r1)
    stfs f0, 0x50(r1)
    xoris r0, r0, 0x8000
    stw r0, 0x30c(r1)
    lfd f9, 0x308(r1)
    stfs f7, 0x1c4(r1)
    fsubs f9, f9, f10
    stfs f7, 0x1bc(r1)
    fdivs f8, f8, f9
    stfs f7, 0x1b8(r1)
    stfs f7, 0x1b4(r1)
    stfs f7, 0x1b0(r1)
    stfs f7, 0x1a8(r1)
    stfs f7, 0x1a4(r1)
    stfs f8, 0x4c(r1)
    stfs f7, 0x1a0(r1)
    stfs f7, 0x19c(r1)
    stfs f0, 0x1c0(r1)
    stfs f0, 0x1ac(r1)
    stfs f0, 0x198(r1)
    lfs f1, 0x53c(r31)
    fcmpu cr0, f7, f1
    beq lbl_fn_80464CF0_00000AF0
    addi r3, r1, 0xa8
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0xa8
    addi r5, r1, 0x78
    bl fn_805F89F0
    addi r3, r1, 0x78
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_80464CF0_00000AF0:
    lfs f0, lbl_80886D60
    lfs f1, 0x538(r31)
    fcmpu cr0, f0, f1
    beq lbl_fn_80464CF0_00000B50
    addi r3, r1, 0x108
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x108
    addi r5, r1, 0xd8
    bl fn_805F89F0
    addi r3, r1, 0xd8
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_80464CF0_00000B50:
    lfs f0, lbl_80886D60
    lfs f1, 0x534(r31)
    fcmpu cr0, f0, f1
    beq lbl_fn_80464CF0_00000BB0
    addi r3, r1, 0x168
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x168
    addi r5, r1, 0x138
    bl fn_805F89F0
    addi r3, r1, 0x138
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_80464CF0_00000BB0:
    addi r4, r1, 0x48
    addi r3, r1, 0x198
    mr r5, r4
    bl fn_805F93C0
    li r0, 0x0
    stw r0, 0x1fc(r1)
    mr r4, r31
    addi r3, r1, 0x38
    stw r0, 0x200(r1)
    addi r5, r31, 0x528
    stw r0, 0x204(r1)
    stw r0, 0x208(r1)
    bl fn_80176548
    lfs f8, 0x44(r1)
    lis r7, 0x8000
    lfs f7, lbl_80886DB8
    addi r4, r1, 0x218
    lfs f0, 0x3c(r1)
    addi r5, r1, 0x38
    fadds f1, f8, f7
    lwz r3, lbl_8087EE98
    fadds f0, f0, f7
    addi r6, r1, 0x48
    stfs f1, 0x44(r1)
    addi r7, r7, 0x80
    stfs f0, 0x3c(r1)
    addi r8, r31, 0x5b8
    li r9, 0x0
    bl fn_8004D388
    addi r3, r1, 0x228
    lfs f2, 0x230(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x528(r31), 0, 0
    lfs f0, 0x5ac(r31)
    lfs f10, 0x528(r31)
    lfs f9, 0x5a4(r31)
    fsubs f0, f2, f0
    lfs f8, 0x52c(r31)
    lfs f7, 0x5a8(r31)
    fsubs f9, f10, f9
    stfs f0, 0x530(r31)
    fsubs f7, f8, f7
    stfs f9, 0x528(r31)
    stfs f7, 0x52c(r31)
    lfs f0, 0x44(r1)
    fsubs f0, f7, f0
    stfs f0, 0x52c(r31)
lbl_fn_80464CF0_00000C6C:
    lwz r0, 0x334(r1)
    psq_l f31, 0x328(r1), 0, 0
    lfd f31, 0x320(r1)
    lwz r31, 0x31c(r1)
    lwz r30, 0x318(r1)
    mtlr r0
    addi r1, r1, 0x330
    blr
}

asm void fn_80465294(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stw r31, 0x6c(r1)
    mr r31, r3
    stw r30, 0x68(r1)
    lwz r6, 0x1574(r3)
    cmpwi r6, 0x0
    beq lbl_fn_80465294_00000CBC
    lwz r0, 0x560(r6)
    cmpwi r0, 0x6e
    beq lbl_fn_80465294_00000D68
lbl_fn_80465294_00000CBC:
    li r0, 0x0
    stw r0, 0x14bc(r3)
    stw r0, 0x14c0(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80465294_00000CEC
    li r4, 0x8c
    li r5, 0x0
    bl fn_80370AE4
lbl_fn_80465294_00000CEC:
    li r0, 0xe
    stw r0, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lfs f0, lbl_80886D8C
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80886D60
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x148
    lfs f2, lbl_80886D90
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r3, 0x1574(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80465294_00000D50
    bl fn_8015B238
    li r0, 0x0
    stw r0, 0x1574(r31)
lbl_fn_80465294_00000D50:
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3e8
    li r6, 0x0
    bl fn_80239DAC
    b lbl_fn_80465294_00000ED0
lbl_fn_80465294_00000D68:
    lis r4, 0x8889
    lwz r5, 0x14c0(r3)
    subi r0, r4, 0x7777
    mulhw r0, r0, r5
    add r0, r0, r5
    srawi r0, r0, 4
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r0, r0, 0x1e
    subf. r0, r0, r5
    bne lbl_fn_80465294_00000ED0
    lfs f0, lbl_80886DA8
    li r8, 0x0
    li r30, -0x1
    lwz r3, 0x54(r1)
    fctiwz f0, f0
    li r0, 0x1
    clrlwi r7, r3, 4
    addi r3, r6, 0x7d4
    stfd f0, 0x58(r1)
    li r5, 0x0
    lwz r4, 0x5c(r1)
    li r6, 0x0
    stw r8, 0x40(r1)
    stw r8, 0x44(r1)
    stw r8, 0x48(r1)
    stw r30, 0x4c(r1)
    stw r7, 0x54(r1)
    stw r30, 0x50(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x38(r1)
    bl fn_8012DF7C
    lwz r7, 0x1574(r31)
    mr r6, r31
    lfs f6, lbl_80886D60
    addi r4, r1, 0x38
    lfs f5, lbl_80886E40
    addi r5, r1, 0x20
    lfs f4, 0x530(r7)
    li r8, 0x0
    lfs f3, 0x52c(r7)
    li r9, 0x0
    lfs f0, 0x528(r7)
    fadds f4, f4, f6
    fadds f3, f3, f5
    stfs f6, 0x14(r1)
    fadds f0, f0, f6
    lwz r3, lbl_8087F048
    stfs f5, 0x18(r1)
    stfs f6, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f3, 0x24(r1)
    stfs f4, 0x28(r1)
    bl fn_80108C10
    lwz r0, 0x3c(r1)
    mr r3, r31
    li r4, 0x0
    divw r0, r0, r30
    stw r0, 0x3c(r1)
    bl fn_80148B0C
    lfs f2, 0xc(r3)
    addi r30, r1, 0x2c
    psq_l f1, 0x4(r3), 0, 0
    addi r3, r31, 0x7d4
    psq_st f1, 0x0(r30), 0, 0
    li r5, 0x0
    lfs f6, lbl_80886D60
    li r6, 0x0
    lfs f5, lbl_80886E40
    lfs f4, 0x2c(r1)
    fadds f0, f2, f6
    lfs f3, 0x30(r1)
    fadds f4, f4, f6
    stfs f6, 0x8(r1)
    fadds f3, f3, f5
    lwz r4, 0x3c(r1)
    stfs f5, 0xc(r1)
    stfs f6, 0x10(r1)
    stfs f4, 0x2c(r1)
    stfs f3, 0x30(r1)
    stfs f0, 0x34(r1)
    bl fn_8012DF7C
    lwz r3, lbl_8087F048
    mr r5, r30
    mr r6, r31
    mr r7, r31
    addi r4, r1, 0x38
    li r8, 0x0
    li r9, 0x0
    bl fn_80108C10
lbl_fn_80465294_00000ED0:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_804654F0(void)
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
    bne lbl_fn_804654F0_00000F84
    li r0, 0x0
    stw r0, 0x14bc(r30)
    stw r0, 0x14c0(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_804654F0_00000F54
    li r4, 0x8c
    li r5, 0x0
    bl fn_80370AE4
lbl_fn_804654F0_00000F54:
    li r31, 0x0
    stw r31, 0x58c(r30)
    mr r3, r30
    li r4, 0x3
    bl fn_8016E970
    lwz r0, 0x1800(r30)
    cmpwi r0, 0x0
    beq lbl_fn_804654F0_00000F84
    lwz r3, lbl_8087F048
    addi r4, r30, 0xb0
    bl fn_80107A68
    stw r31, 0x1800(r30)
lbl_fn_804654F0_00000F84:
    lwz r0, 0x24(r1)
    psq_l f31, 0x18(r1), 0, 0
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804655AC(void)
{
    nofralloc
    stwu r1, -0x1d0(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x1d4(r1)
    stfd f31, 0x1c0(r1)
    psq_st f31, 0x1c8(r1), 0, 0
    stfd f30, 0x1b0(r1)
    psq_st f30, 0x1b8(r1), 0, 0
    stw r31, 0x1ac(r1)
    mr r31, r3
    stw r30, 0x1a8(r1)
    lfs f30, 0x2e4(r3)
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f30, f1
    cror eq, gt, eq
    bne lbl_fn_804655AC_00001088
    li r0, 0x0
    stw r0, 0x14bc(r31)
    stw r0, 0x14c0(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_804655AC_00001018
    li r4, 0x8c
    li r5, 0x0
    bl fn_80370AE4
lbl_fn_804655AC_00001018:
    li r0, 0x10
    stw r0, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lfs f0, lbl_80886D8C
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80886D60
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x143
    lfs f2, lbl_80886D90
    li r6, 0x1
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_804655AC_0000107C
    lwz r5, 0x15ac(r31)
    li r4, 0x8c
    bl fn_80370AE4
lbl_fn_804655AC_0000107C:
    li r0, 0x0
    stw r0, 0x18e8(r31)
    b lbl_fn_804655AC_00001558
lbl_fn_804655AC_00001088:
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_80886DB8
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_804655AC_00001558
    lfs f0, lbl_80886D7C
    addi r4, r31, 0x15bc
    lfs f2, 0x15c4(r31)
    addi r3, r1, 0xbc
    fcmpo cr0, f3, f0
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0xc4(r1)
    cror eq, lt, eq
    mfcr r0
    extrwi. r0, r0, 1, 2
    bne lbl_fn_804655AC_000010D8
    lfs f0, lbl_80886D60
    stfs f0, 0xc4(r1)
    stfs f0, 0xbc(r1)
lbl_fn_804655AC_000010D8:
    lfs f4, 0x528(r31)
    lfs f3, 0xbc(r1)
    lfs f5, 0x52c(r31)
    fadds f6, f4, f3
    lfs f0, 0xc0(r1)
    lfs f4, 0x530(r31)
    fadds f5, f5, f0
    lfs f3, 0xc4(r1)
    lfs f7, 0x2e4(r31)
    lfs f0, lbl_80886E28
    fadds f3, f4, f3
    stfs f6, 0x528(r31)
    fcmpo cr0, f7, f0
    stfs f5, 0x52c(r31)
    stfs f3, 0x530(r31)
    ble lbl_fn_804655AC_000013A4
    lwz r3, lbl_8087F430
    li r4, 0x0
    li r6, 0x0
    lwz r5, 0x10d8(r3)
    lwz r0, 0x78(r5)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_804655AC_00001160
lbl_fn_804655AC_00001138:
    lwz r3, 0x7c(r5)
    lwzx r0, r3, r6
    cmpwi r0, 0x258
    bne lbl_fn_804655AC_00001154
    mulli r0, r4, 0x28
    add r3, r3, r0
    b lbl_fn_804655AC_00001164
lbl_fn_804655AC_00001154:
    addi r6, r6, 0x28
    addi r4, r4, 0x1
    bdnz lbl_fn_804655AC_00001138
lbl_fn_804655AC_00001160:
    li r3, 0x0
lbl_fn_804655AC_00001164:
    cmpwi r3, 0x0
    beq lbl_fn_804655AC_00001558
    lfs f3, 0xc(r3)
    addi r4, r1, 0xb0
    lfs f0, 0x530(r31)
    addi r30, r1, 0xa4
    lfs f5, 0x8(r3)
    fsubs f2, f3, f0
    lfs f4, 0x52c(r31)
    lfs f3, 0x4(r3)
    fsubs f4, f5, f4
    lfs f0, 0x528(r31)
    stfs f2, 0xb8(r1)
    fsubs f3, f3, f0
    lfs f0, lbl_80886D80
    stfs f4, 0xb4(r1)
    frsp f4, f2
    stfs f3, 0xb0(r1)
    fabs f3, f4
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0xac(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_804655AC_000011EC
    lfs f3, 0xa4(r1)
    lfs f0, lbl_80886D60
    fcmpo cr0, f3, f0
    ble lbl_fn_804655AC_000011E0
    lfs f0, lbl_80886D84
    b lbl_fn_804655AC_000011E4
lbl_fn_804655AC_000011E0:
    lfs f0, lbl_80886D88
lbl_fn_804655AC_000011E4:
    stfs f0, 0x90(r1)
    b lbl_fn_804655AC_00001200
lbl_fn_804655AC_000011EC:
    fmr f2, f4
    lfs f1, 0xa4(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x90(r1)
lbl_fn_804655AC_00001200:
    lfs f0, 0x90(r1)
    addi r3, r1, 0x138
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80886D60
    addi r4, r1, 0x80
    lfs f30, 0x140(r1)
    mr r5, r4
    lfs f31, 0x13c(r1)
    addi r3, r1, 0x168
    lfs f13, 0x138(r1)
    lfs f12, 0x150(r1)
    lfs f11, 0x14c(r1)
    lfs f10, 0x148(r1)
    lfs f9, 0x160(r1)
    lfs f8, 0x15c(r1)
    lfs f7, 0x158(r1)
    lfs f6, 0x164(r1)
    lfs f5, 0x154(r1)
    lfs f4, 0x144(r1)
    lfs f0, lbl_80886D8C
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0xac(r1)
    stfs f3, 0x198(r1)
    stfs f3, 0x19c(r1)
    stfs f3, 0x1a0(r1)
    stfs f0, 0x1a4(r1)
    stfs f13, 0x50(r1)
    stfs f31, 0x54(r1)
    stfs f30, 0x58(r1)
    stfs f13, 0x168(r1)
    stfs f31, 0x16c(r1)
    stfs f30, 0x170(r1)
    stfs f10, 0x5c(r1)
    stfs f11, 0x60(r1)
    stfs f12, 0x64(r1)
    stfs f10, 0x178(r1)
    stfs f11, 0x17c(r1)
    stfs f12, 0x180(r1)
    stfs f7, 0x68(r1)
    stfs f8, 0x6c(r1)
    stfs f9, 0x70(r1)
    stfs f7, 0x188(r1)
    stfs f8, 0x18c(r1)
    stfs f9, 0x190(r1)
    stfs f4, 0x74(r1)
    stfs f5, 0x78(r1)
    stfs f6, 0x7c(r1)
    stfs f4, 0x174(r1)
    stfs f5, 0x184(r1)
    stfs f6, 0x194(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x88(r1)
    bl fn_805F9750
    lfs f2, 0x88(r1)
    lfs f0, lbl_80886D80
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_804655AC_0000131C
    lfs f3, 0x84(r1)
    lfs f0, lbl_80886D60
    fcmpo cr0, f3, f0
    ble lbl_fn_804655AC_0000130C
    lfs f0, lbl_80886D84
    b lbl_fn_804655AC_00001310
lbl_fn_804655AC_0000130C:
    lfs f0, lbl_80886D88
lbl_fn_804655AC_00001310:
    fneg f0, f0
    stfs f0, 0x8c(r1)
    b lbl_fn_804655AC_00001330
lbl_fn_804655AC_0000131C:
    lfs f1, 0x84(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x8c(r1)
lbl_fn_804655AC_00001330:
    addi r3, r1, 0x8c
    lfs f4, lbl_80886D60
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_80755098@ha
    psq_st f1, 0x0(r30), 0, 0
    fmr f2, f4
    lfs f0, 0x538(r31)
    lfs f3, 0xa8(r1)
    stfs f2, 0xac(r1)
    fsubs f1, f3, f0
    lfd f2, lbl_80755098@l(r3)
    stfs f4, 0x94(r1)
    bl fn_8068AEA8
    frsp f4, f1
    lfs f0, lbl_80886D78
    fcmpo cr0, f4, f0
    ble lbl_fn_804655AC_0000137C
    lfs f0, lbl_80886DBC
    fsubs f4, f4, f0
lbl_fn_804655AC_0000137C:
    lfs f0, lbl_80886DC0
    fcmpo cr0, f4, f0
    bge lbl_fn_804655AC_00001390
    lfs f0, lbl_80886DBC
    fadds f4, f4, f0
lbl_fn_804655AC_00001390:
    lfs f3, lbl_80886D70
    lfs f0, 0x538(r31)
    fmadds f0, f3, f4, f0
    stfs f0, 0x538(r31)
    b lbl_fn_804655AC_00001558
lbl_fn_804655AC_000013A4:
    lfs f2, 0x15c4(r31)
    addi r3, r31, 0x15bc
    lfs f0, lbl_80886D80
    addi r30, r1, 0x98
    fabs f3, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0xa0(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_804655AC_000013F4
    lfs f3, 0x98(r1)
    lfs f0, lbl_80886D60
    fcmpo cr0, f3, f0
    ble lbl_fn_804655AC_000013E8
    lfs f0, lbl_80886D84
    b lbl_fn_804655AC_000013EC
lbl_fn_804655AC_000013E8:
    lfs f0, lbl_80886D88
lbl_fn_804655AC_000013EC:
    stfs f0, 0x48(r1)
    b lbl_fn_804655AC_00001408
lbl_fn_804655AC_000013F4:
    frsp f2, f2
    lfs f1, 0x98(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_804655AC_00001408:
    lfs f0, 0x48(r1)
    addi r3, r1, 0xc8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80886D60
    addi r4, r1, 0x38
    lfs f31, 0xd0(r1)
    mr r5, r4
    lfs f30, 0xcc(r1)
    addi r3, r1, 0xf8
    lfs f13, 0xc8(r1)
    lfs f12, 0xe0(r1)
    lfs f11, 0xdc(r1)
    lfs f10, 0xd8(r1)
    lfs f9, 0xf0(r1)
    lfs f8, 0xec(r1)
    lfs f7, 0xe8(r1)
    lfs f6, 0xf4(r1)
    lfs f5, 0xe4(r1)
    lfs f4, 0xd4(r1)
    lfs f0, lbl_80886D8C
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0xa0(r1)
    stfs f3, 0x128(r1)
    stfs f3, 0x12c(r1)
    stfs f3, 0x130(r1)
    stfs f0, 0x134(r1)
    stfs f13, 0x8(r1)
    stfs f30, 0xc(r1)
    stfs f31, 0x10(r1)
    stfs f13, 0xf8(r1)
    stfs f30, 0xfc(r1)
    stfs f31, 0x100(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0x108(r1)
    stfs f11, 0x10c(r1)
    stfs f12, 0x110(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0x118(r1)
    stfs f8, 0x11c(r1)
    stfs f9, 0x120(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0x104(r1)
    stfs f5, 0x114(r1)
    stfs f6, 0x124(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80886D80
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_804655AC_00001524
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80886D60
    fcmpo cr0, f3, f0
    ble lbl_fn_804655AC_00001514
    lfs f0, lbl_80886D84
    b lbl_fn_804655AC_00001518
lbl_fn_804655AC_00001514:
    lfs f0, lbl_80886D88
lbl_fn_804655AC_00001518:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_804655AC_00001538
lbl_fn_804655AC_00001524:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_804655AC_00001538:
    addi r3, r1, 0x44
    lfs f2, lbl_80886D60
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    lfs f0, 0x9c(r1)
    stfs f2, 0x4c(r1)
    stfs f2, 0xa0(r1)
    stfs f0, 0x538(r31)
lbl_fn_804655AC_00001558:
    lwz r0, 0x1d4(r1)
    psq_l f31, 0x1c8(r1), 0, 0
    lfd f31, 0x1c0(r1)
    psq_l f30, 0x1b8(r1), 0, 0
    lfd f30, 0x1b0(r1)
    lwz r31, 0x1ac(r1)
    lwz r30, 0x1a8(r1)
    mtlr r0
    addi r1, r1, 0x1d0
    blr
}

asm void fn_80465B88(void)
{
    nofralloc
    stwu r1, -0x240(r1)
    mflr r0
    li r4, 0x455
    stw r0, 0x244(r1)
    stfd f31, 0x230(r1)
    psq_st f31, 0x238(r1), 0, 0
    stfd f30, 0x220(r1)
    psq_st f30, 0x228(r1), 0, 0
    stw r31, 0x21c(r1)
    mr r31, r3
    stw r30, 0x218(r1)
    lwz r3, lbl_8087F4A0
    lwz r5, 0x15ac(r31)
    bl fn_803EEE10
    lwz r12, 0x0(r3)
    mr r30, r3
    lwz r12, 0x5c(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_80465B88_000015E0
    lwz r0, 0x18e8(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80465B88_00001924
lbl_fn_80465B88_000015E0:
    lwz r0, 0x18e8(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80465B88_0000164C
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x5c(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_80465B88_0000164C
    lfs f0, lbl_80886D60
    li r0, 0x0
    li r3, 0x4
    stw r3, 0xf8(r1)
    mr r3, r30
    addi r4, r1, 0xf8
    stw r0, 0xfc(r1)
    stw r0, 0x100(r1)
    stw r0, 0x104(r1)
    stw r0, 0x108(r1)
    stfs f0, 0x10c(r1)
    stfs f0, 0x110(r1)
    stfs f0, 0x114(r1)
    lwz r12, 0x0(r30)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
lbl_fn_80465B88_0000164C:
    lfs f1, lbl_80886D8C
    addi r3, r31, 0xb0
    li r4, 0x3
    bl fn_80097CCC
    li r0, 0x0
    stw r0, 0x14bc(r31)
    stw r0, 0x14c0(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80465B88_0000168C
    li r4, 0x8c
    li r5, 0x0
    bl fn_80370AE4
lbl_fn_80465B88_0000168C:
    li r0, 0x12
    stw r0, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lfs f0, lbl_80886D8C
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80886D60
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x141
    lfs f2, lbl_80886D90
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f4, lbl_80886D60
    addi r3, r1, 0x148
    lfs f3, lbl_80886E44
    li r4, 0x79
    lfs f0, lbl_80886E48
    stfs f4, 0x14(r1)
    stfs f3, 0x18(r1)
    stfs f0, 0x1c(r1)
    lfs f1, 0x538(r31)
    bl fn_805F8E70
    addi r4, r1, 0x14
    addi r3, r1, 0x148
    mr r5, r4
    bl fn_805F93C0
    lfs f4, lbl_80886E3C
    addi r3, r1, 0x14
    lfs f3, 0x1c(r1)
    addi r5, r1, 0x20
    lfs f0, 0x18(r1)
    addi r6, r31, 0x15bc
    fmuls f2, f3, f4
    lfs f3, 0x14(r1)
    fmuls f5, f0, f4
    lfs f0, lbl_80886D60
    fmuls f3, f3, f4
    stfs f2, 0x15c4(r31)
    stfs f3, 0x20(r1)
    mr r4, r3
    stfs f5, 0x24(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x28(r1)
    stfs f0, 0x18(r1)
    bl fn_805F98D0
    lfs f2, 0x1c(r1)
    addi r3, r1, 0x14
    lfs f0, lbl_80886D80
    addi r30, r1, 0x2c
    fabs f3, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0x34(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_80465B88_000017B0
    lfs f3, 0x2c(r1)
    lfs f0, lbl_80886D60
    fcmpo cr0, f3, f0
    ble lbl_fn_80465B88_000017A4
    lfs f0, lbl_80886D84
    b lbl_fn_80465B88_000017A8
lbl_fn_80465B88_000017A4:
    lfs f0, lbl_80886D88
lbl_fn_80465B88_000017A8:
    stfs f0, 0x3c(r1)
    b lbl_fn_80465B88_000017C4
lbl_fn_80465B88_000017B0:
    frsp f2, f2
    lfs f1, 0x2c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x3c(r1)
lbl_fn_80465B88_000017C4:
    lfs f0, 0x3c(r1)
    addi r3, r1, 0x1b8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80886D60
    addi r4, r1, 0x44
    lfs f4, 0x1c0(r1)
    mr r5, r4
    lfs f5, 0x1bc(r1)
    addi r3, r1, 0x178
    lfs f6, 0x1b8(r1)
    lfs f7, 0x1d0(r1)
    lfs f8, 0x1cc(r1)
    lfs f9, 0x1c8(r1)
    lfs f10, 0x1e0(r1)
    lfs f11, 0x1dc(r1)
    lfs f12, 0x1d8(r1)
    lfs f13, 0x1e4(r1)
    lfs f31, 0x1d4(r1)
    lfs f30, 0x1c4(r1)
    lfs f0, lbl_80886D8C
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x34(r1)
    stfs f3, 0x1a8(r1)
    stfs f3, 0x1ac(r1)
    stfs f3, 0x1b0(r1)
    stfs f0, 0x1b4(r1)
    stfs f6, 0x74(r1)
    stfs f5, 0x78(r1)
    stfs f4, 0x7c(r1)
    stfs f6, 0x178(r1)
    stfs f5, 0x17c(r1)
    stfs f4, 0x180(r1)
    stfs f9, 0x68(r1)
    stfs f8, 0x6c(r1)
    stfs f7, 0x70(r1)
    stfs f9, 0x188(r1)
    stfs f8, 0x18c(r1)
    stfs f7, 0x190(r1)
    stfs f12, 0x5c(r1)
    stfs f11, 0x60(r1)
    stfs f10, 0x64(r1)
    stfs f12, 0x198(r1)
    stfs f11, 0x19c(r1)
    stfs f10, 0x1a0(r1)
    stfs f30, 0x50(r1)
    stfs f31, 0x54(r1)
    stfs f13, 0x58(r1)
    stfs f30, 0x184(r1)
    stfs f31, 0x194(r1)
    stfs f13, 0x1a4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x4c(r1)
    bl fn_805F9750
    lfs f2, 0x4c(r1)
    lfs f0, lbl_80886D80
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80465B88_000018E0
    lfs f3, 0x48(r1)
    lfs f0, lbl_80886D60
    fcmpo cr0, f3, f0
    ble lbl_fn_80465B88_000018D0
    lfs f0, lbl_80886D84
    b lbl_fn_80465B88_000018D4
lbl_fn_80465B88_000018D0:
    lfs f0, lbl_80886D88
lbl_fn_80465B88_000018D4:
    fneg f0, f0
    stfs f0, 0x38(r1)
    b lbl_fn_80465B88_000018F4
lbl_fn_80465B88_000018E0:
    lfs f1, 0x48(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x38(r1)
lbl_fn_80465B88_000018F4:
    lfs f2, lbl_80886D60
    addi r3, r1, 0x38
    psq_l f1, 0x0(r3), 0, 0
    li r0, 0x0
    stfs f2, 0x40(r1)
    stfs f2, 0x34(r1)
    frsp f2, f2
    psq_st f1, 0x0(r30), 0, 0
    psq_st f1, 0x534(r31), 0, 0
    stfs f2, 0x53c(r31)
    stw r0, 0x1800(r31)
    b lbl_fn_80465B88_00001D40
lbl_fn_80465B88_00001924:
    lwz r0, 0x14bc(r31)
    cmpwi r0, 0x1
    bne lbl_fn_80465B88_00001ADC
    lfs f3, 0x374(r31)
    lfs f0, lbl_80886D9C
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_80465B88_0000194C
    lfs f0, lbl_80886D8C
    stfs f0, 0x378(r31)
lbl_fn_80465B88_0000194C:
    lfs f3, 0x374(r31)
    lfs f0, lbl_80886E4C
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_80465B88_00001C8C
    li r0, 0x2
    stw r0, 0x14bc(r31)
    lfs f3, lbl_80886D60
    addi r3, r1, 0x118
    lfs f0, lbl_80886D8C
    li r4, 0x79
    stfs f3, 0x80(r1)
    stfs f3, 0x84(r1)
    stfs f0, 0x88(r1)
    lfs f1, 0x538(r31)
    bl fn_805F8E70
    addi r4, r1, 0x80
    addi r3, r1, 0x118
    mr r5, r4
    bl fn_805F93C0
    lfs f4, 0x88(r1)
    addi r4, r1, 0xa4
    lfs f5, lbl_80886E28
    addi r3, r1, 0x98
    lfs f3, 0x84(r1)
    fmuls f6, f4, f5
    lfs f4, 0x530(r31)
    fmuls f7, f3, f5
    lfs f0, 0x80(r1)
    lfs f3, 0x52c(r31)
    fmuls f5, f0, f5
    lfs f0, 0x528(r31)
    fadds f8, f3, f7
    fadds f4, f4, f6
    lfs f3, lbl_80886D7C
    fadds f9, f0, f5
    stfs f4, 0xb8(r1)
    stfs f9, 0xb0(r1)
    stfs f8, 0xb4(r1)
    lwz r5, 0x14b8(r31)
    stfs f5, 0x8c(r1)
    lfs f2, 0x530(r5)
    psq_l f1, 0x528(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    fsubs f5, f2, f4
    lfs f4, 0xa8(r1)
    lfs f0, 0xa4(r1)
    fadds f3, f4, f3
    stfs f7, 0x90(r1)
    fsubs f4, f0, f9
    stfs f6, 0x94(r1)
    fsubs f0, f3, f8
    stfs f2, 0xac(r1)
    stfs f3, 0xa8(r1)
    stfs f4, 0x98(r1)
    stfs f0, 0x9c(r1)
    stfs f5, 0xa0(r1)
    bl fn_805F9940
    fmr f31, f1
    addi r3, r1, 0x98
    mr r4, r3
    bl fn_805F98D0
    li r3, 0x5ba
    bl fn_80219E6C
    lfs f1, lbl_80886D60
    li r11, 0x0
    lfs f7, lbl_80886E20
    li r0, -0x1
    lfs f6, lbl_80886D9C
    mr r5, r3
    lfs f5, lbl_80886E50
    mr r4, r31
    lfs f4, lbl_80886E54
    addi r6, r1, 0xb0
    lfs f3, lbl_80886D7C
    addi r7, r1, 0x98
    stw r11, 0x1e8(r1)
    addi r8, r1, 0x1e8
    lfs f0, lbl_80886E58
    li r9, 0x100
    stfs f1, 0x1ec(r1)
    li r10, 0x0
    lfs f2, lbl_80886D8C
    stfs f7, 0x1f0(r1)
    stfs f6, 0x1f4(r1)
    stfs f5, 0x1f8(r1)
    stfs f4, 0x1fc(r1)
    stfs f3, 0x200(r1)
    stw r11, 0x204(r1)
    stw r0, 0x208(r1)
    lwz r0, 0x14b8(r31)
    stw r0, 0x1e8(r1)
    stfs f0, 0x1f8(r1)
    stfs f1, 0x200(r1)
    lfs f0, 0x4c(r3)
    lwz r3, lbl_8087F048
    fdivs f0, f31, f0
    stfs f0, 0x1fc(r1)
    bl fn_800F8574
    b lbl_fn_80465B88_00001C8C
lbl_fn_80465B88_00001ADC:
    cmpwi r0, 0x2
    bne lbl_fn_80465B88_00001B1C
    lfs f30, 0x374(r31)
    addi r3, r31, 0xb0
    li r4, 0x3
    bl fn_80097D7C
    fcmpo cr0, f30, f1
    cror eq, gt, eq
    bne lbl_fn_80465B88_00001C8C
    li r0, 0x0
    stw r0, 0x14bc(r31)
    lfs f1, lbl_80886D8C
    addi r3, r31, 0xb0
    li r4, 0x3
    bl fn_80097CCC
    b lbl_fn_80465B88_00001C8C
lbl_fn_80465B88_00001B1C:
    lwz r4, 0x14c0(r31)
    cmpwi r4, 0x4b0
    ble lbl_fn_80465B88_00001C30
    li r0, 0x0
    stw r0, 0x14bc(r31)
    lwz r30, 0x14b8(r31)
    stw r0, 0x14c0(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80465B88_00001B5C
    li r4, 0x8c
    li r5, 0x0
    bl fn_80370AE4
lbl_fn_80465B88_00001B5C:
    li r0, 0x11
    stw r0, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lfs f0, lbl_80886D8C
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80886D60
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x144
    lfs f2, lbl_80886D90
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80465B88_00001BC0
    li r4, 0x8c
    li r5, 0x0
    bl fn_80370AE4
lbl_fn_80465B88_00001BC0:
    stw r30, 0x15c8(r31)
    addi r3, r1, 0x8
    lfs f0, 0x530(r31)
    addi r4, r31, 0x15bc
    lfs f3, 0x530(r30)
    lfs f5, 0x52c(r30)
    fsubs f2, f3, f0
    lfs f4, 0x52c(r31)
    lfs f3, 0x528(r30)
    fsubs f4, f5, f4
    lfs f0, 0x528(r31)
    lfs f5, lbl_80886E5C
    fsubs f0, f3, f0
    stfs f4, 0xc(r1)
    lfs f3, lbl_80886E44
    stfs f0, 0x8(r1)
    frsp f0, f2
    fmuls f3, f3, f5
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    fmuls f0, f0, f5
    lfs f4, 0x15bc(r31)
    stfs f2, 0x10(r1)
    fmuls f4, f4, f5
    stfs f3, 0x15c0(r31)
    stfs f4, 0x15bc(r31)
    stfs f0, 0x15c4(r31)
    b lbl_fn_80465B88_00001C8C
lbl_fn_80465B88_00001C30:
    lis r3, 0x8889
    subi r0, r3, 0x7777
    mulhw r0, r0, r4
    add r0, r0, r4
    srawi r0, r0, 6
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r0, r0, 0x78
    subf. r0, r0, r4
    bne lbl_fn_80465B88_00001C8C
    lfs f1, lbl_80886D60
    addi r3, r31, 0xb0
    lfs f2, lbl_80886D90
    li r4, 0x3
    li r5, 0x156
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80886DDC
    li r0, 0x1
    stfs f0, 0x378(r31)
    stw r0, 0x14bc(r31)
lbl_fn_80465B88_00001C8C:
    li r0, 0x20
    li r5, 0x0
    mtctr r0
lbl_fn_80465B88_00001C98:
    lwz r3, lbl_8087F048
    addis r0, r3, 0x1
    add r4, r0, r5
    lwz r0, -0x5eac(r4)
    rlwinm r3, r0, 0, 15, 15
    subis r0, r3, 0x1
    cmplwi r0, 0x0
    bne lbl_fn_80465B88_00001D38
    lwz r7, -0x5e48(r4)
    lfs f4, -0x5e54(r4)
    lwz r3, -0x5e50(r4)
    cmpwi r7, 0x0
    lwz r6, -0x5e4c(r4)
    lwz r8, -0x5e44(r4)
    lfs f3, -0x5e40(r4)
    lfs f0, -0x5e3c(r4)
    stfs f4, 0xd8(r1)
    stw r3, 0xdc(r1)
    stw r6, 0xe0(r1)
    stw r7, 0xe4(r1)
    stw r8, 0xe8(r1)
    stfs f3, 0xec(r1)
    stfs f0, 0xf0(r1)
    beq lbl_fn_80465B88_00001D38
    lwz r0, 0x4(r7)
    stfs f4, 0xbc(r1)
    cmpwi r0, 0x5ba
    stw r3, 0xc0(r1)
    stw r6, 0xc4(r1)
    stw r7, 0xc8(r1)
    stw r8, 0xcc(r1)
    stfs f3, 0xd0(r1)
    stfs f0, 0xd4(r1)
    bne lbl_fn_80465B88_00001D38
    lwz r0, -0x5e28(r4)
    cmplw r0, r31
    beq lbl_fn_80465B88_00001D38
    lwz r0, -0x5eac(r4)
    ori r0, r0, 0x800
    stw r0, -0x5eac(r4)
lbl_fn_80465B88_00001D38:
    addi r5, r5, 0xc8
    bdnz lbl_fn_80465B88_00001C98
lbl_fn_80465B88_00001D40:
    lwz r0, 0x244(r1)
    psq_l f31, 0x238(r1), 0, 0
    lfd f31, 0x230(r1)
    psq_l f30, 0x228(r1), 0, 0
    lfd f30, 0x220(r1)
    lwz r31, 0x21c(r1)
    lwz r30, 0x218(r1)
    mtlr r0
    addi r1, r1, 0x240
    blr
}
