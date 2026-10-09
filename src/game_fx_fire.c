#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void fn_80092814(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800F8548(void);
extern void fn_800F8C6C(void);
extern void fn_800FAB80(void);
extern void fn_8016E970(void);
extern void fn_80239DAC(void);
extern void fn_802953C8(void);
extern void fn_80296B8C(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9940(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);
extern void fn_8068B100(void);

/* External data declarations */
extern u8 lbl_807457F0[];
extern u8 lbl_80745818[];

/* Small data declarations */
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_80883BE8;
extern u32 lbl_80883BF0;
extern u32 lbl_80883BF4;
extern u32 lbl_80883BF8;
extern u32 lbl_80883C00;
extern u32 lbl_80883C10;
extern u32 lbl_80883C1C;
extern u32 lbl_80883C20;
extern u32 lbl_80883C24;
extern u32 lbl_80883C28;
extern u32 lbl_80883C2C;
extern u32 lbl_80883C30;
extern u32 lbl_80883C40;
extern u32 lbl_80883C54;
extern u32 lbl_80883C58;
extern u32 lbl_80883C60;
extern u32 lbl_80883C7C;
extern u32 lbl_80883C90;
extern u32 lbl_80883C94;
extern u32 lbl_80883C98;
extern u32 lbl_80883C9C;
extern u32 lbl_80883CA0;
extern u32 lbl_80883CA4;
extern u32 lbl_80883CA8;
extern u32 lbl_80883CAC;
extern u32 lbl_80883CB0;
extern u32 lbl_80883CB4;
extern u32 lbl_80883CB8;
extern u32 lbl_80883CBC;
extern u32 lbl_80883CC0;
extern u32 lbl_80883CC4;
extern u32 lbl_80883CC8;
extern u32 lbl_80883CCC;
extern u32 lbl_80883CD0;

/* Function declarations */
void fn_80298580(void);
void fn_80298850(void);
void fn_80298B10(void);
void fn_80298E98(void);
void fn_80299134(void);
void fn_802992F8(void);
void fn_802995D4(void);
void fn_802997B8(void);
void fn_80299A7C(void);

asm void fn_80298580(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r4, r1, 0x34
    stfd f31, 0x50(r1)
    psq_st f31, 0x58(r1), 0, 0
    stw r31, 0x4c(r1)
    mr r31, r3
    stw r30, 0x48(r1)
    lwz r5, 0x14b0(r3)
    lfs f0, 0x530(r3)
    lfs f2, 0x530(r5)
    psq_l f1, 0x528(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    fsubs f6, f2, f0
    lfs f3, 0x528(r3)
    lfs f4, 0x34(r1)
    fmuls f0, f6, f6
    lfs f5, 0x38(r1)
    fsubs f4, f4, f3
    lfs f3, 0x52c(r3)
    stfs f2, 0x3c(r1)
    fsubs f3, f5, f3
    fmadds f1, f4, f4, f0
    stfs f4, 0x28(r1)
    stfs f3, 0x2c(r1)
    stfs f6, 0x30(r1)
    bl fn_8068B100
    lwz r0, 0x14b4(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80298580_000002B0
    lfs f31, 0x2e4(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_80298580_00000148
    li r30, 0x0
    li r0, 0xc
    stw r0, 0x58c(r31)
    stw r30, 0x14b4(r31)
    stw r30, 0x14b8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883BE8
    mr r4, r31
    stw r3, 0x590(r31)
    li r5, 0x7d0
    li r6, 0x1
    stfs f0, 0x152c(r31)
    stw r30, 0x15b8(r31)
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3e8
    li r6, 0x1
    bl fn_80239DAC
    mr r3, r31
    li r4, 0x6
    bl fn_8016E970
    li r0, 0x4
    stw r0, 0x560(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883BF0
    li r0, 0x1
    stw r3, 0x590(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80883BE8
    li r4, 0x0
    stw r0, 0x3fc(r31)
    li r5, 0x153
    lfs f2, lbl_80883BF8
    li r6, 0x1
    stfs f0, 0x2fc(r31)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    b lbl_fn_80298580_000002B0
lbl_fn_80298580_00000148:
    lwz r0, 0x14b8(r31)
    cmpwi r0, 0x2a
    bgt lbl_fn_80298580_000001A0
    lfs f7, lbl_80883C90
    lfs f4, 0x1538(r31)
    lfs f3, 0x1534(r31)
    fmuls f5, f4, f7
    lfs f0, 0x1530(r31)
    fmuls f6, f3, f7
    lfs f3, 0x52c(r31)
    fmuls f7, f0, f7
    lfs f4, 0x528(r31)
    lfs f0, 0x530(r31)
    fadds f3, f3, f6
    fadds f4, f4, f7
    stfs f7, 0x10(r1)
    fadds f0, f0, f5
    stfs f6, 0x14(r1)
    stfs f5, 0x18(r1)
    stfs f4, 0x528(r31)
    stfs f3, 0x52c(r31)
    stfs f0, 0x530(r31)
lbl_fn_80298580_000001A0:
    lwz r0, 0x14c8(r31)
    slwi r0, r0, 2
    add r3, r31, r0
    lwz r0, 0x14dc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80298580_000002B0
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_80883C94
    fcmpo cr0, f3, f0
    bge lbl_fn_80298580_00000210
    lfs f0, lbl_80883C60
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_80298580_00000210
    lwz r5, lbl_8087F430
    li r0, 0xa
    lfs f3, lbl_80883BF0
    lwz r3, 0x96c(r5)
    lfs f0, lbl_80883C54
    srwi r4, r3, 31
    clrlwi r3, r3, 31
    xor r3, r3, r4
    subf r3, r4, r3
    stw r3, 0x96c(r5)
    stw r0, 0x970(r5)
    stfs f3, 0x974(r5)
    stfs f0, 0x978(r5)
    b lbl_fn_80298580_000002B0
lbl_fn_80298580_00000210:
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_80883C98
    fcmpo cr0, f3, f0
    bge lbl_fn_80298580_000002B0
    lis r4, lbl_80745818@ha
    addi r3, r31, 0xb0
    addi r4, r4, lbl_80745818@l
    li r5, 0x0
    addi r4, r4, 0x309
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80298580_00000248
    li r3, 0x0
    b lbl_fn_80298580_00000254
lbl_fn_80298580_00000248:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r3, r3, r0
lbl_fn_80298580_00000254:
    lfs f0, 0x2c(r3)
    li r0, -0x1
    lfs f3, 0x1c(r3)
    mr r4, r31
    lfs f4, 0xc(r3)
    addi r7, r1, 0x1c
    stfs f4, 0x1c(r1)
    addi r8, r31, 0x534
    lfs f1, lbl_80883BE8
    li r9, 0x0
    stfs f3, 0x20(r1)
    li r10, 0x1e
    lfs f2, lbl_80883BF0
    stfs f0, 0x24(r1)
    stw r0, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r0, 0x14c8(r31)
    lwz r3, lbl_8087F048
    slwi r0, r0, 2
    lwz r6, 0x590(r31)
    add r5, r31, r0
    lwz r5, 0x14dc(r5)
    bl fn_800FAB80
lbl_fn_80298580_000002B0:
    lwz r0, 0x64(r1)
    psq_l f31, 0x58(r1), 0, 0
    lfd f31, 0x50(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80298850(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x84(r1)
    stfd f31, 0x70(r1)
    psq_st f31, 0x78(r1), 0, 0
    stw r31, 0x6c(r1)
    stw r30, 0x68(r1)
    mr r30, r3
    lfs f31, 0x2e4(r3)
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_80298850_000003BC
    li r31, 0x0
    li r0, 0xc
    stw r0, 0x58c(r30)
    stw r31, 0x14b4(r30)
    stw r31, 0x14b8(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883BE8
    mr r4, r30
    stw r3, 0x590(r30)
    li r5, 0x7d0
    li r6, 0x1
    stfs f0, 0x152c(r30)
    stw r31, 0x15b8(r30)
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3e8
    li r6, 0x1
    bl fn_80239DAC
    mr r3, r30
    li r4, 0x6
    bl fn_8016E970
    li r0, 0x4
    stw r0, 0x560(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883BF0
    li r0, 0x1
    stw r3, 0x590(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80883BE8
    li r4, 0x0
    stw r0, 0x3fc(r30)
    li r5, 0x153
    lfs f2, lbl_80883BF8
    li r6, 0x1
    stfs f0, 0x2fc(r30)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r30)
    bl fn_80097C08
    b lbl_fn_80298850_00000570
lbl_fn_80298850_000003BC:
    lfs f1, 0x2e4(r30)
    lfs f0, lbl_80883C10
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_80298850_0000042C
    lfs f1, 0x1548(r30)
    lis r3, lbl_807457F0@ha
    lfs f0, 0x1544(r30)
    lfd f2, lbl_807457F0@l(r3)
    fsubs f1, f1, f0
    bl fn_8068AEA8
    frsp f2, f1
    lfs f0, lbl_80883C28
    fcmpo cr0, f2, f0
    ble lbl_fn_80298850_00000400
    lfs f0, lbl_80883C2C
    fsubs f2, f2, f0
lbl_fn_80298850_00000400:
    lfs f0, lbl_80883C30
    fcmpo cr0, f2, f0
    bge lbl_fn_80298850_00000414
    lfs f0, lbl_80883C2C
    fadds f2, f2, f0
lbl_fn_80298850_00000414:
    lfs f1, lbl_80883C10
    lfs f0, 0x538(r30)
    fdivs f1, f2, f1
    fadds f0, f0, f1
    stfs f0, 0x538(r30)
    b lbl_fn_80298850_00000570
lbl_fn_80298850_0000042C:
    lfs f0, lbl_80883C9C
    fcmpo cr0, f1, f0
    ble lbl_fn_80298850_00000444
    lfs f0, lbl_80883C60
    fcmpo cr0, f1, f0
    blt lbl_fn_80298850_00000460
lbl_fn_80298850_00000444:
    lfs f1, 0x2e4(r30)
    lfs f0, lbl_80883CA0
    fcmpo cr0, f1, f0
    ble lbl_fn_80298850_00000564
    lfs f0, lbl_80883CA4
    fcmpo cr0, f1, f0
    bge lbl_fn_80298850_00000564
lbl_fn_80298850_00000460:
    lis r4, lbl_80745818@ha
    addi r3, r30, 0xb0
    addi r4, r4, lbl_80745818@l
    li r5, 0x0
    addi r4, r4, 0x2e4
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80298850_00000488
    li r5, 0x0
    b lbl_fn_80298850_00000494
lbl_fn_80298850_00000488:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r5, r3, r0
lbl_fn_80298850_00000494:
    lfs f2, 0x2c(r5)
    addi r3, r1, 0x30
    lfs f3, 0x1c(r5)
    li r4, 0x79
    lfs f4, 0xc(r5)
    lfs f1, lbl_80883BE8
    lfs f0, lbl_80883BF0
    stfs f1, 0x8(r1)
    stfs f1, 0xc(r1)
    stfs f0, 0x10(r1)
    lfs f1, 0x538(r30)
    stfs f4, 0x20(r1)
    stfs f3, 0x24(r1)
    stfs f2, 0x28(r1)
    bl fn_805F8E70
    addi r4, r1, 0x8
    addi r3, r1, 0x30
    mr r5, r4
    bl fn_805F93C0
    lfs f3, 0x10(r1)
    mr r6, r30
    lfs f2, lbl_80883C10
    li r4, 0x0
    lfs f1, 0xc(r1)
    li r5, 0x0
    lfs f0, 0x8(r1)
    fmuls f3, f3, f2
    fmuls f4, f1, f2
    lfs f1, 0x24(r1)
    fmuls f5, f0, f2
    lfs f2, 0x20(r1)
    lfs f0, 0x28(r1)
    lwz r0, 0x14c8(r30)
    fadds f2, f2, f5
    stfs f5, 0x14(r1)
    fadds f1, f1, f4
    slwi r0, r0, 2
    fadds f0, f0, f3
    add r7, r30, r0
    stfs f1, 0x24(r1)
    li r9, 0x1e
    lwz r3, lbl_8087F048
    li r10, -0x1
    stfs f4, 0x18(r1)
    lwz r7, 0x14e4(r7)
    stfs f3, 0x1c(r1)
    lwz r8, 0x590(r30)
    stfs f2, 0x20(r1)
    lfs f1, lbl_80883BE8
    stfs f0, 0x28(r1)
    bl fn_800F8C6C
    b lbl_fn_80298850_00000570
lbl_fn_80298850_00000564:
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
lbl_fn_80298850_00000570:
    lwz r0, 0x84(r1)
    psq_l f31, 0x78(r1), 0, 0
    lfd f31, 0x70(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_80298B10(void)
{
    nofralloc
    stwu r1, -0x140(r1)
    mflr r0
    stw r0, 0x144(r1)
    addi r4, r1, 0x80
    stfd f31, 0x130(r1)
    psq_st f31, 0x138(r1), 0, 0
    stfd f30, 0x120(r1)
    psq_st f30, 0x128(r1), 0, 0
    stfd f29, 0x110(r1)
    psq_st f29, 0x118(r1), 0, 0
    stw r31, 0x10c(r1)
    stw r30, 0x108(r1)
    mr r30, r3
    lwz r5, 0x14b0(r3)
    lfs f0, 0x530(r3)
    lfs f2, 0x530(r5)
    psq_l f1, 0x528(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    fsubs f5, f2, f0
    lfs f3, 0x528(r3)
    addi r3, r1, 0x74
    lfs f4, 0x80(r1)
    lfs f0, lbl_80883BE8
    fsubs f3, f4, f3
    stfs f2, 0x88(r1)
    stfs f3, 0x74(r1)
    stfs f5, 0x7c(r1)
    stfs f0, 0x78(r1)
    bl fn_805F9940
    fmr f30, f1
    addi r3, r1, 0x74
    mr r4, r3
    bl fn_805F98D0
    lfs f31, 0x2e4(r30)
    lfs f0, lbl_80883CA8
    fcmpo cr0, f31, f0
    ble lbl_fn_80298B10_00000710
    lfs f0, lbl_80883CAC
    fcmpo cr0, f31, f0
    cror eq, lt, eq
    bne lbl_fn_80298B10_00000710
    lfs f3, 0x1548(r30)
    lis r3, lbl_807457F0@ha
    lfs f0, 0x1544(r30)
    lfd f2, lbl_807457F0@l(r3)
    fsubs f1, f3, f0
    bl fn_8068AEA8
    frsp f4, f1
    lfs f0, lbl_80883C28
    fcmpo cr0, f4, f0
    ble lbl_fn_80298B10_00000664
    lfs f0, lbl_80883C2C
    fsubs f4, f4, f0
lbl_fn_80298B10_00000664:
    lfs f0, lbl_80883C30
    fcmpo cr0, f4, f0
    bge lbl_fn_80298B10_00000678
    lfs f0, lbl_80883C2C
    fadds f4, f4, f0
lbl_fn_80298B10_00000678:
    lfs f3, lbl_80883CB0
    lfs f0, lbl_80883C00
    fdivs f4, f4, f3
    lfs f3, 0x538(r30)
    fadds f3, f3, f4
    fcmpo cr0, f30, f0
    stfs f3, 0x538(r30)
    blt lbl_fn_80298B10_000006A4
    lfs f0, lbl_80883CB4
    fcmpo cr0, f0, f30
    bge lbl_fn_80298B10_000008C4
lbl_fn_80298B10_000006A4:
    lfs f5, 0x7c(r1)
    lfs f4, lbl_80883CB8
    lfs f0, 0x78(r1)
    lfs f3, 0x74(r1)
    fmuls f5, f5, f4
    fmuls f6, f0, f4
    lfs f0, lbl_80883BF4
    fmuls f7, f3, f4
    lfs f4, 0x528(r30)
    fmuls f8, f5, f0
    fmuls f9, f6, f0
    fmuls f10, f7, f0
    lfs f3, 0x52c(r30)
    lfs f0, 0x530(r30)
    fadds f3, f3, f9
    stfs f7, 0x5c(r1)
    fadds f4, f4, f10
    fadds f0, f0, f8
    stfs f6, 0x60(r1)
    stfs f5, 0x64(r1)
    stfs f10, 0x68(r1)
    stfs f9, 0x6c(r1)
    stfs f8, 0x70(r1)
    stfs f4, 0x528(r30)
    stfs f3, 0x52c(r30)
    stfs f0, 0x530(r30)
    b lbl_fn_80298B10_000008C4
lbl_fn_80298B10_00000710:
    lfs f2, 0x7c(r1)
    addi r3, r1, 0x74
    lfs f0, lbl_80883C1C
    addi r31, r1, 0x50
    fabs f3, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    frsp f3, f3
    stfs f2, 0x58(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_80298B10_00000760
    lfs f3, 0x50(r1)
    lfs f0, lbl_80883BE8
    fcmpo cr0, f3, f0
    ble lbl_fn_80298B10_00000754
    lfs f0, lbl_80883C20
    b lbl_fn_80298B10_00000758
lbl_fn_80298B10_00000754:
    lfs f0, lbl_80883C24
lbl_fn_80298B10_00000758:
    stfs f0, 0x48(r1)
    b lbl_fn_80298B10_00000774
lbl_fn_80298B10_00000760:
    frsp f2, f2
    lfs f1, 0x50(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_80298B10_00000774:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x90
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883BE8
    addi r4, r1, 0x38
    lfs f29, 0x98(r1)
    mr r5, r4
    lfs f30, 0x94(r1)
    addi r3, r1, 0xc0
    lfs f13, 0x90(r1)
    lfs f12, 0xa8(r1)
    lfs f11, 0xa4(r1)
    lfs f10, 0xa0(r1)
    lfs f9, 0xb8(r1)
    lfs f8, 0xb4(r1)
    lfs f7, 0xb0(r1)
    lfs f6, 0xbc(r1)
    lfs f5, 0xac(r1)
    lfs f4, 0x9c(r1)
    lfs f0, lbl_80883BF0
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x58(r1)
    stfs f3, 0xf0(r1)
    stfs f3, 0xf4(r1)
    stfs f3, 0xf8(r1)
    stfs f0, 0xfc(r1)
    stfs f13, 0x8(r1)
    stfs f30, 0xc(r1)
    stfs f29, 0x10(r1)
    stfs f13, 0xc0(r1)
    stfs f30, 0xc4(r1)
    stfs f29, 0xc8(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xd0(r1)
    stfs f11, 0xd4(r1)
    stfs f12, 0xd8(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0xe0(r1)
    stfs f8, 0xe4(r1)
    stfs f9, 0xe8(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0xcc(r1)
    stfs f5, 0xdc(r1)
    stfs f6, 0xec(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80883C1C
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80298B10_00000890
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80883BE8
    fcmpo cr0, f3, f0
    ble lbl_fn_80298B10_00000880
    lfs f0, lbl_80883C20
    b lbl_fn_80298B10_00000884
lbl_fn_80298B10_00000880:
    lfs f0, lbl_80883C24
lbl_fn_80298B10_00000884:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_80298B10_000008A4
lbl_fn_80298B10_00000890:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_80298B10_000008A4:
    addi r3, r1, 0x44
    lfs f2, lbl_80883BE8
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    lfs f0, 0x54(r1)
    stfs f2, 0x4c(r1)
    stfs f2, 0x58(r1)
    stfs f0, 0x1548(r30)
lbl_fn_80298B10_000008C4:
    addi r3, r30, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_80298B10_000008E8
    mr r3, r30
    li r4, 0x0
    bl fn_80296B8C
lbl_fn_80298B10_000008E8:
    lwz r0, 0x144(r1)
    psq_l f31, 0x138(r1), 0, 0
    lfd f31, 0x130(r1)
    psq_l f30, 0x128(r1), 0, 0
    lfd f30, 0x120(r1)
    psq_l f29, 0x118(r1), 0, 0
    lfd f29, 0x110(r1)
    lwz r31, 0x10c(r1)
    lwz r30, 0x108(r1)
    mtlr r0
    addi r1, r1, 0x140
    blr
}

asm void fn_80298E98(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    addi r4, r1, 0x38
    stfd f31, 0x80(r1)
    psq_st f31, 0x88(r1), 0, 0
    stw r31, 0x7c(r1)
    stw r30, 0x78(r1)
    mr r30, r3
    lwz r5, 0x14b0(r3)
    lfs f0, 0x530(r3)
    psq_l f1, 0x528(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lfs f2, 0x530(r5)
    lfs f3, 0x528(r3)
    addi r3, r1, 0x2c
    fsubs f5, f2, f0
    lfs f4, 0x38(r1)
    lfs f0, lbl_80883BE8
    mr r4, r3
    fsubs f3, f4, f3
    stfs f2, 0x40(r1)
    stfs f3, 0x2c(r1)
    stfs f5, 0x34(r1)
    stfs f0, 0x30(r1)
    bl fn_805F98D0
    lfs f31, 0x2e4(r30)
    addi r3, r30, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_80298E98_00000A4C
    li r31, 0x0
    li r0, 0xc
    stw r0, 0x58c(r30)
    stw r31, 0x14b4(r30)
    stw r31, 0x14b8(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883BE8
    mr r4, r30
    stw r3, 0x590(r30)
    li r5, 0x7d0
    li r6, 0x1
    stfs f0, 0x152c(r30)
    stw r31, 0x15b8(r30)
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3e8
    li r6, 0x1
    bl fn_80239DAC
    mr r3, r30
    li r4, 0x6
    bl fn_8016E970
    li r0, 0x4
    stw r0, 0x560(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883BF0
    li r0, 0x1
    stw r3, 0x590(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80883BE8
    li r4, 0x0
    stw r0, 0x3fc(r30)
    li r5, 0x153
    lfs f2, lbl_80883BF8
    li r6, 0x1
    stfs f0, 0x2fc(r30)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r30)
    bl fn_80097C08
    b lbl_fn_80298E98_00000B94
lbl_fn_80298E98_00000A4C:
    lfs f3, 0x2e4(r30)
    lfs f0, lbl_80883CBC
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_80298E98_00000A68
    mr r3, r30
    bl fn_802953C8
lbl_fn_80298E98_00000A68:
    lwz r0, 0x1584(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80298E98_00000B94
    lfs f3, 0x2e4(r30)
    lfs f0, lbl_80883CC0
    fcmpo cr0, f3, f0
    ble lbl_fn_80298E98_00000B94
    li r3, 0x1
    li r0, 0x21
    stw r3, 0x1584(r30)
    stw r0, 0x1580(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lis r4, lbl_80745818@ha
    stw r3, 0x1588(r30)
    addi r4, r4, lbl_80745818@l
    addi r3, r30, 0xb0
    addi r4, r4, 0x2ea
    li r5, 0x0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80298E98_00000AC8
    li r5, 0x0
    b lbl_fn_80298E98_00000AD4
lbl_fn_80298E98_00000AC8:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r5, r3, r0
lbl_fn_80298E98_00000AD4:
    lfs f4, 0x2c(r5)
    addi r3, r1, 0x48
    lfs f5, 0x1c(r5)
    li r4, 0x79
    lfs f6, 0xc(r5)
    lfs f3, lbl_80883BE8
    lfs f0, lbl_80883BF0
    stfs f3, 0x8(r1)
    stfs f3, 0xc(r1)
    stfs f0, 0x10(r1)
    lfs f1, 0x538(r30)
    stfs f6, 0x20(r1)
    stfs f5, 0x24(r1)
    stfs f4, 0x28(r1)
    bl fn_805F8E70
    addi r4, r1, 0x8
    addi r3, r1, 0x48
    mr r5, r4
    bl fn_805F93C0
    lfs f3, 0x10(r1)
    addi r4, r1, 0x20
    lfs f6, lbl_80883C10
    addi r3, r30, 0x158c
    lfs f0, 0x8(r1)
    addi r5, r30, 0x1598
    fmuls f7, f3, f6
    lfs f3, 0x28(r1)
    fmuls f8, f0, f6
    lfs f4, 0x20(r1)
    lfs f0, lbl_80883BE8
    fadds f3, f3, f7
    fadds f4, f4, f8
    lfs f5, 0xc(r1)
    stfs f0, 0x24(r1)
    fmr f2, f3
    stfs f4, 0x20(r1)
    fmuls f0, f5, f6
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x534(r30), 0, 0
    stfs f2, 0x1594(r30)
    lfs f2, 0x53c(r30)
    stfs f8, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f7, 0x1c(r1)
    stfs f3, 0x28(r1)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x15a0(r30)
lbl_fn_80298E98_00000B94:
    lwz r0, 0x94(r1)
    psq_l f31, 0x88(r1), 0, 0
    lfd f31, 0x80(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_80299134(void)
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
    mr r29, r3
    lwz r0, 0x14b4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80299134_00000C98
    lfs f31, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    ble lbl_fn_80299134_00000C3C
    lfs f0, lbl_80883BF0
    li r0, 0x1
    stw r0, 0x14b4(r29)
    addi r3, r29, 0xb0
    lfs f1, lbl_80883BE8
    li r4, 0x0
    stw r0, 0x3fc(r29)
    li r5, 0x13f
    lfs f2, lbl_80883BF8
    li r6, 0x0
    stfs f0, 0x2fc(r29)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r29)
    bl fn_80097C08
    b lbl_fn_80299134_00000D54
lbl_fn_80299134_00000C3C:
    lwz r0, 0x14b8(r29)
    cmpwi r0, 0x19
    ble lbl_fn_80299134_00000D54
    lfs f5, lbl_80883CC4
    lfs f2, 0x1538(r29)
    lfs f1, 0x1534(r29)
    fmuls f3, f2, f5
    lfs f0, 0x1530(r29)
    fmuls f4, f1, f5
    lfs f1, 0x52c(r29)
    fmuls f5, f0, f5
    lfs f2, 0x528(r29)
    lfs f0, 0x530(r29)
    fadds f1, f1, f4
    fadds f2, f2, f5
    stfs f5, 0x8(r1)
    fadds f0, f0, f3
    stfs f4, 0xc(r1)
    stfs f3, 0x10(r1)
    stfs f2, 0x528(r29)
    stfs f1, 0x52c(r29)
    stfs f0, 0x530(r29)
    b lbl_fn_80299134_00000D54
lbl_fn_80299134_00000C98:
    cmpwi r0, 0x1
    bne lbl_fn_80299134_00000D54
    lfs f31, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    ble lbl_fn_80299134_00000D54
    li r31, 0x0
    li r30, 0x1
    stw r30, 0x14c4(r29)
    stw r31, 0x14b4(r29)
    stw r31, 0x14b8(r29)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883BE8
    mr r4, r29
    stw r3, 0x590(r29)
    li r5, 0x7d0
    li r6, 0x1
    stfs f0, 0x152c(r29)
    stw r31, 0x15b8(r29)
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r29
    li r5, 0x3e8
    li r6, 0x1
    bl fn_80239DAC
    stw r31, 0x58c(r29)
    mr r3, r29
    li r4, 0x3
    bl fn_8016E970
    lfs f2, lbl_80883BF0
    addi r3, r29, 0xb0
    lfs f0, lbl_80883C58
    li r4, 0x0
    stfs f2, 0x2fc(r29)
    li r5, 0x2
    lfs f1, lbl_80883BE8
    li r6, 0x1
    stw r30, 0x3fc(r29)
    li r7, 0x0
    lfs f2, lbl_80883BF8
    li r8, 0x1
    stfs f0, 0x2e8(r29)
    bl fn_80097C08
lbl_fn_80299134_00000D54:
    lwz r0, 0x44(r1)
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_802992F8(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    lwz r0, 0x14b4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_802992F8_00000F6C
    lfs f3, 0x2e4(r3)
    lfs f0, lbl_80883CC8
    lwz r30, lbl_8087F430
    fcmpo cr0, f3, f0
    bge lbl_fn_802992F8_00000E78
    lis r4, lbl_80745818@ha
    li r5, 0x0
    addi r4, r4, lbl_80745818@l
    addi r3, r3, 0xb0
    addi r4, r4, 0x309
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802992F8_00000DE0
    li r3, 0x0
    b lbl_fn_802992F8_00000DEC
lbl_fn_802992F8_00000DE0:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r3, r3, r0
lbl_fn_802992F8_00000DEC:
    lwz r0, 0x1524(r31)
    lfs f2, 0x2c(r3)
    lfs f0, 0x1c(r3)
    cmpwi r0, 0x0
    lfs f3, 0xc(r3)
    stfs f3, 0x8(r1)
    stfs f0, 0xc(r1)
    stfs f2, 0x10(r1)
    bne lbl_fn_802992F8_00000E5C
    stw r31, 0x8a0(r30)
    addi r4, r1, 0x8
    li r0, 0x1
    addi r5, r30, 0x97c
    lbz r3, 0x97c(r30)
    stb r3, 0x97d(r30)
    psq_l f1, 0x0(r4), 0, 0
    stb r0, 0x97c(r30)
    lfs f0, lbl_80883BE8
    psq_st f1, 0xc(r5), 0, 0
    stfs f2, 0x990(r30)
    stfs f0, 0x9a0(r30)
    b lbl_fn_802992F8_00000E48
    b lbl_fn_802992F8_00000E4C
lbl_fn_802992F8_00000E48:
    li r0, 0x0
lbl_fn_802992F8_00000E4C:
    stw r0, 0x4(r5)
    li r0, 0x1
    stw r0, 0x1524(r31)
    b lbl_fn_802992F8_00000E94
lbl_fn_802992F8_00000E5C:
    addi r4, r1, 0x8
    stw r31, 0x8a0(r30)
    addi r3, r30, 0x988
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x990(r30)
    b lbl_fn_802992F8_00000E94
lbl_fn_802992F8_00000E78:
    lwz r0, 0x1524(r3)
    cmpwi r0, 0x0
    beq lbl_fn_802992F8_00000E94
    li r0, 0x0
    stw r0, 0x8a0(r30)
    stb r0, 0x97c(r30)
    stw r0, 0x1524(r3)
lbl_fn_802992F8_00000E94:
    lfs f31, 0x2e4(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_802992F8_00000EF4
    lfs f0, lbl_80883BF0
    li r30, 0x1
    stw r30, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80883BE8
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x1e2
    lfs f2, lbl_80883BF8
    li r6, 0x1
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    li r0, 0x0
    stw r0, 0x14b8(r31)
    stw r30, 0x14b4(r31)
lbl_fn_802992F8_00000EF4:
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_80883C9C
    fcmpo cr0, f3, f0
    bge lbl_fn_802992F8_00000F48
    lfs f0, lbl_80883CCC
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_802992F8_00000F48
    lwz r5, lbl_8087F430
    li r0, 0xa
    lfs f3, lbl_80883BF0
    lwz r3, 0x96c(r5)
    lfs f0, lbl_80883C54
    srwi r4, r3, 31
    clrlwi r3, r3, 31
    xor r3, r3, r4
    subf r3, r4, r3
    stw r3, 0x96c(r5)
    stw r0, 0x970(r5)
    stfs f3, 0x974(r5)
    stfs f0, 0x978(r5)
lbl_fn_802992F8_00000F48:
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    lfs f3, 0x1534(r31)
    lfs f0, 0x52c(r31)
    fdivs f3, f3, f1
    fadds f0, f0, f3
    stfs f0, 0x52c(r31)
    b lbl_fn_802992F8_00001034
lbl_fn_802992F8_00000F6C:
    cmpwi r0, 0x1
    bne lbl_fn_802992F8_00001034
    lwz r0, 0x167c(r3)
    lwz r4, 0x14b8(r3)
    mulli r0, r0, 0x1e
    cmpw r4, r0
    ble lbl_fn_802992F8_00001034
    li r30, 0x0
    li r0, 0xc
    stw r0, 0x58c(r3)
    stw r30, 0x14b4(r3)
    stw r30, 0x14b8(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883BE8
    mr r4, r31
    stw r3, 0x590(r31)
    li r5, 0x7d0
    li r6, 0x1
    stfs f0, 0x152c(r31)
    stw r30, 0x15b8(r31)
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3e8
    li r6, 0x1
    bl fn_80239DAC
    mr r3, r31
    li r4, 0x6
    bl fn_8016E970
    li r0, 0x4
    stw r0, 0x560(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883BF0
    li r0, 0x1
    stw r3, 0x590(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80883BE8
    li r4, 0x0
    stw r0, 0x3fc(r31)
    li r5, 0x153
    lfs f2, lbl_80883BF8
    li r6, 0x1
    stfs f0, 0x2fc(r31)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
lbl_fn_802992F8_00001034:
    lwz r0, 0x34(r1)
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_802995D4(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lfs f0, lbl_80883C10
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    lfs f3, 0x2e4(r3)
    lwz r30, lbl_8087F430
    fcmpo cr0, f3, f0
    bge lbl_fn_802995D4_00001148
    lis r4, lbl_80745818@ha
    li r5, 0x0
    addi r4, r4, lbl_80745818@l
    addi r3, r3, 0xb0
    addi r4, r4, 0x309
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802995D4_000010B0
    li r3, 0x0
    b lbl_fn_802995D4_000010BC
lbl_fn_802995D4_000010B0:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r3, r3, r0
lbl_fn_802995D4_000010BC:
    lwz r0, 0x1524(r31)
    lfs f2, 0x2c(r3)
    lfs f0, 0x1c(r3)
    cmpwi r0, 0x0
    lfs f3, 0xc(r3)
    stfs f3, 0x8(r1)
    stfs f0, 0xc(r1)
    stfs f2, 0x10(r1)
    bne lbl_fn_802995D4_0000112C
    stw r31, 0x8a0(r30)
    addi r4, r1, 0x8
    li r0, 0x1
    addi r5, r30, 0x97c
    lbz r3, 0x97c(r30)
    stb r3, 0x97d(r30)
    psq_l f1, 0x0(r4), 0, 0
    stb r0, 0x97c(r30)
    lfs f0, lbl_80883BE8
    psq_st f1, 0xc(r5), 0, 0
    stfs f2, 0x990(r30)
    stfs f0, 0x9a0(r30)
    b lbl_fn_802995D4_00001118
    b lbl_fn_802995D4_0000111C
lbl_fn_802995D4_00001118:
    li r0, 0x0
lbl_fn_802995D4_0000111C:
    stw r0, 0x4(r5)
    li r0, 0x1
    stw r0, 0x1524(r31)
    b lbl_fn_802995D4_00001164
lbl_fn_802995D4_0000112C:
    addi r4, r1, 0x8
    stw r31, 0x8a0(r30)
    addi r3, r30, 0x988
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x990(r30)
    b lbl_fn_802995D4_00001164
lbl_fn_802995D4_00001148:
    lwz r0, 0x1524(r3)
    cmpwi r0, 0x0
    beq lbl_fn_802995D4_00001164
    li r0, 0x0
    stw r0, 0x8a0(r30)
    stb r0, 0x97c(r30)
    stw r0, 0x1524(r3)
lbl_fn_802995D4_00001164:
    lfs f31, 0x2e4(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_802995D4_00001218
    li r30, 0x0
    stw r30, 0x14b4(r31)
    stw r30, 0x14b8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883BE8
    mr r4, r31
    stw r3, 0x590(r31)
    li r5, 0x7d0
    li r6, 0x1
    stfs f0, 0x152c(r31)
    stw r30, 0x15b8(r31)
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3e8
    li r6, 0x1
    bl fn_80239DAC
    stw r30, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lfs f3, lbl_80883BF0
    li r0, 0x1
    lfs f0, lbl_80883C58
    addi r3, r31, 0xb0
    stw r0, 0x3fc(r31)
    li r4, 0x0
    lfs f1, lbl_80883BE8
    li r5, 0x2
    stfs f3, 0x2fc(r31)
    li r6, 0x1
    lfs f2, lbl_80883BF8
    li r7, 0x0
    stfs f0, 0x2e8(r31)
    li r8, 0x1
    bl fn_80097C08
lbl_fn_802995D4_00001218:
    lwz r0, 0x34(r1)
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_802997B8(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    lfs f0, lbl_80883C7C
    stw r0, 0x54(r1)
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    stw r31, 0x3c(r1)
    mr r31, r3
    stw r30, 0x38(r1)
    lfs f3, 0x2e4(r3)
    lwz r30, lbl_8087F430
    fcmpo cr0, f3, f0
    bge lbl_fn_802997B8_0000132C
    lis r4, lbl_80745818@ha
    li r5, 0x0
    addi r4, r4, lbl_80745818@l
    addi r3, r3, 0xb0
    addi r4, r4, 0x309
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802997B8_00001294
    li r3, 0x0
    b lbl_fn_802997B8_000012A0
lbl_fn_802997B8_00001294:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r3, r3, r0
lbl_fn_802997B8_000012A0:
    lwz r0, 0x1524(r31)
    lfs f2, 0x2c(r3)
    lfs f0, 0x1c(r3)
    cmpwi r0, 0x0
    lfs f3, 0xc(r3)
    stfs f3, 0x20(r1)
    stfs f0, 0x24(r1)
    stfs f2, 0x28(r1)
    bne lbl_fn_802997B8_00001310
    stw r31, 0x8a0(r30)
    addi r4, r1, 0x20
    li r0, 0x1
    addi r5, r30, 0x97c
    lbz r3, 0x97c(r30)
    stb r3, 0x97d(r30)
    psq_l f1, 0x0(r4), 0, 0
    stb r0, 0x97c(r30)
    lfs f0, lbl_80883BE8
    psq_st f1, 0xc(r5), 0, 0
    stfs f2, 0x990(r30)
    stfs f0, 0x9a0(r30)
    b lbl_fn_802997B8_000012FC
    b lbl_fn_802997B8_00001300
lbl_fn_802997B8_000012FC:
    li r0, 0x0
lbl_fn_802997B8_00001300:
    stw r0, 0x4(r5)
    li r0, 0x1
    stw r0, 0x1524(r31)
    b lbl_fn_802997B8_00001348
lbl_fn_802997B8_00001310:
    addi r4, r1, 0x20
    stw r31, 0x8a0(r30)
    addi r3, r30, 0x988
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x990(r30)
    b lbl_fn_802997B8_00001348
lbl_fn_802997B8_0000132C:
    lwz r0, 0x1524(r3)
    cmpwi r0, 0x0
    beq lbl_fn_802997B8_00001348
    li r0, 0x0
    stw r0, 0x8a0(r30)
    stb r0, 0x97c(r30)
    stw r0, 0x1524(r3)
lbl_fn_802997B8_00001348:
    lfs f31, 0x2e4(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_802997B8_000013FC
    li r30, 0x0
    stw r30, 0x14b4(r31)
    stw r30, 0x14b8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883BE8
    mr r4, r31
    stw r3, 0x590(r31)
    li r5, 0x7d0
    li r6, 0x1
    stfs f0, 0x152c(r31)
    stw r30, 0x15b8(r31)
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3e8
    li r6, 0x1
    bl fn_80239DAC
    stw r30, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lfs f3, lbl_80883BF0
    li r0, 0x1
    lfs f0, lbl_80883C58
    addi r3, r31, 0xb0
    stw r0, 0x3fc(r31)
    li r4, 0x0
    lfs f1, lbl_80883BE8
    li r5, 0x2
    stfs f3, 0x2fc(r31)
    li r6, 0x1
    lfs f2, lbl_80883BF8
    li r7, 0x0
    stfs f0, 0x2e8(r31)
    li r8, 0x1
    bl fn_80097C08
lbl_fn_802997B8_000013FC:
    lfs f4, 0x2e4(r31)
    lfs f3, lbl_80883C10
    fcmpo cr0, f4, f3
    cror eq, lt, eq
    bne lbl_fn_802997B8_0000146C
    lfs f4, 0x2e8(r31)
    lfs f0, lbl_80883BF0
    fdivs f8, f3, f4
    lfs f7, 0x1538(r31)
    lfs f6, 0x1534(r31)
    lfs f5, 0x1530(r31)
    lfs f4, 0x528(r31)
    lfs f3, 0x52c(r31)
    fdivs f8, f0, f8
    lfs f0, 0x530(r31)
    fmuls f7, f7, f8
    fmuls f6, f6, f8
    fmuls f5, f5, f8
    stfs f7, 0x1c(r1)
    fadds f0, f0, f7
    fadds f3, f3, f6
    stfs f5, 0x14(r1)
    fadds f4, f4, f5
    stfs f6, 0x18(r1)
    stfs f4, 0x528(r31)
    stfs f3, 0x52c(r31)
    stfs f0, 0x530(r31)
    b lbl_fn_802997B8_000014DC
lbl_fn_802997B8_0000146C:
    fcmpo cr0, f3, f4
    bge lbl_fn_802997B8_000014DC
    lfs f0, lbl_80883C60
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_802997B8_000014DC
    lfs f4, 0x2e8(r31)
    lfs f0, lbl_80883BF0
    fdivs f8, f3, f4
    lfs f7, 0x1538(r31)
    lfs f6, 0x1534(r31)
    lfs f5, 0x1530(r31)
    lfs f4, 0x528(r31)
    lfs f3, 0x52c(r31)
    fdivs f8, f0, f8
    lfs f0, 0x530(r31)
    fmuls f7, f7, f8
    fmuls f6, f6, f8
    fmuls f5, f5, f8
    stfs f7, 0x10(r1)
    fsubs f0, f0, f7
    fsubs f3, f3, f6
    stfs f5, 0x8(r1)
    fsubs f4, f4, f5
    stfs f6, 0xc(r1)
    stfs f4, 0x528(r31)
    stfs f3, 0x52c(r31)
    stfs f0, 0x530(r31)
lbl_fn_802997B8_000014DC:
    lwz r0, 0x54(r1)
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80299A7C(void)
{
    nofralloc
    stwu r1, -0x140(r1)
    mflr r0
    addi r5, r3, 0x1558
    stw r0, 0x144(r1)
    addi r4, r1, 0x8c
    stfd f31, 0x130(r1)
    psq_st f31, 0x138(r1), 0, 0
    stfd f30, 0x120(r1)
    psq_st f30, 0x128(r1), 0, 0
    stfd f29, 0x110(r1)
    psq_st f29, 0x118(r1), 0, 0
    stw r31, 0x10c(r1)
    stw r30, 0x108(r1)
    mr r30, r3
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lfs f2, 0x1560(r3)
    lfs f0, 0x530(r3)
    lfs f3, 0x528(r3)
    addi r3, r1, 0x80
    fsubs f5, f2, f0
    lfs f4, 0x8c(r1)
    lfs f0, lbl_80883BE8
    fsubs f3, f4, f3
    stfs f2, 0x94(r1)
    stfs f3, 0x80(r1)
    stfs f5, 0x88(r1)
    stfs f0, 0x84(r1)
    bl fn_805F9940
    lfs f31, 0x2e4(r30)
    fmr f30, f1
    lfs f0, lbl_80883CA8
    fcmpo cr0, f31, f0
    ble lbl_fn_80299A7C_00001670
    lfs f0, lbl_80883CAC
    fcmpo cr0, f31, f0
    cror eq, lt, eq
    bne lbl_fn_80299A7C_00001670
    lfs f3, 0x1548(r30)
    lis r3, lbl_807457F0@ha
    lfs f0, 0x1544(r30)
    lfd f2, lbl_807457F0@l(r3)
    fsubs f1, f3, f0
    bl fn_8068AEA8
    frsp f4, f1
    lfs f0, lbl_80883C28
    fcmpo cr0, f4, f0
    ble lbl_fn_80299A7C_000015C4
    lfs f0, lbl_80883C2C
    fsubs f4, f4, f0
lbl_fn_80299A7C_000015C4:
    lfs f0, lbl_80883C30
    fcmpo cr0, f4, f0
    bge lbl_fn_80299A7C_000015D8
    lfs f0, lbl_80883C2C
    fadds f4, f4, f0
lbl_fn_80299A7C_000015D8:
    lfs f3, lbl_80883CB0
    lfs f0, lbl_80883C40
    fdivs f4, f4, f3
    lfs f3, 0x538(r30)
    fadds f3, f3, f4
    fcmpo cr0, f0, f30
    stfs f3, 0x538(r30)
    bge lbl_fn_80299A7C_00001878
    addi r3, r1, 0x80
    mr r4, r3
    bl fn_805F98D0
    lfs f5, 0x88(r1)
    lfs f4, lbl_80883CD0
    lfs f0, 0x84(r1)
    lfs f3, 0x80(r1)
    fmuls f5, f5, f4
    fmuls f6, f0, f4
    lfs f0, lbl_80883BF4
    fmuls f7, f3, f4
    lfs f4, 0x528(r30)
    fmuls f8, f5, f0
    fmuls f9, f6, f0
    fmuls f10, f7, f0
    lfs f3, 0x52c(r30)
    lfs f0, 0x530(r30)
    fadds f3, f3, f9
    stfs f7, 0x5c(r1)
    fadds f4, f4, f10
    fadds f0, f0, f8
    stfs f6, 0x60(r1)
    stfs f5, 0x64(r1)
    stfs f10, 0x68(r1)
    stfs f9, 0x6c(r1)
    stfs f8, 0x70(r1)
    stfs f4, 0x528(r30)
    stfs f3, 0x52c(r30)
    stfs f0, 0x530(r30)
    b lbl_fn_80299A7C_00001878
lbl_fn_80299A7C_00001670:
    lwz r3, 0x14b0(r30)
    li r0, 0x0
    lfs f0, lbl_80883BE8
    lfs f4, 0x528(r3)
    lfs f3, 0x528(r30)
    lfs f5, 0x530(r3)
    fsubs f4, f4, f3
    lfs f3, 0x530(r30)
    stfs f0, 0x78(r1)
    fsubs f3, f5, f3
    fcmpu cr0, f0, f4
    stfs f4, 0x74(r1)
    stfs f3, 0x7c(r1)
    bne lbl_fn_80299A7C_000016BC
    fcmpu cr0, f0, f0
    bne lbl_fn_80299A7C_000016BC
    fcmpu cr0, f0, f3
    bne lbl_fn_80299A7C_000016BC
    li r0, 0x1
lbl_fn_80299A7C_000016BC:
    cmpwi r0, 0x0
    bne lbl_fn_80299A7C_00001878
    lfs f2, 0x7c(r1)
    addi r3, r1, 0x74
    lfs f0, lbl_80883C1C
    addi r31, r1, 0x50
    fabs f3, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    frsp f3, f3
    stfs f2, 0x58(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_80299A7C_00001714
    lfs f3, 0x50(r1)
    lfs f0, lbl_80883BE8
    fcmpo cr0, f3, f0
    ble lbl_fn_80299A7C_00001708
    lfs f0, lbl_80883C20
    b lbl_fn_80299A7C_0000170C
lbl_fn_80299A7C_00001708:
    lfs f0, lbl_80883C24
lbl_fn_80299A7C_0000170C:
    stfs f0, 0x48(r1)
    b lbl_fn_80299A7C_00001728
lbl_fn_80299A7C_00001714:
    frsp f2, f2
    lfs f1, 0x50(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_80299A7C_00001728:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x98
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883BE8
    addi r4, r1, 0x38
    lfs f29, 0xa0(r1)
    mr r5, r4
    lfs f30, 0x9c(r1)
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
    lfs f0, lbl_80883BF0
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x58(r1)
    stfs f3, 0xf8(r1)
    stfs f3, 0xfc(r1)
    stfs f3, 0x100(r1)
    stfs f0, 0x104(r1)
    stfs f13, 0x8(r1)
    stfs f30, 0xc(r1)
    stfs f29, 0x10(r1)
    stfs f13, 0xc8(r1)
    stfs f30, 0xcc(r1)
    stfs f29, 0xd0(r1)
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
    lfs f0, lbl_80883C1C
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80299A7C_00001844
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80883BE8
    fcmpo cr0, f3, f0
    ble lbl_fn_80299A7C_00001834
    lfs f0, lbl_80883C20
    b lbl_fn_80299A7C_00001838
lbl_fn_80299A7C_00001834:
    lfs f0, lbl_80883C24
lbl_fn_80299A7C_00001838:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_80299A7C_00001858
lbl_fn_80299A7C_00001844:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_80299A7C_00001858:
    addi r3, r1, 0x44
    lfs f2, lbl_80883BE8
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    lfs f0, 0x54(r1)
    stfs f2, 0x4c(r1)
    stfs f2, 0x58(r1)
    stfs f0, 0x1548(r30)
lbl_fn_80299A7C_00001878:
    addi r3, r30, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_80299A7C_00001948
    li r31, 0x0
    li r0, 0xa
    stw r0, 0x58c(r30)
    stw r31, 0x14b4(r30)
    stw r31, 0x14b8(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883BE8
    mr r4, r30
    stw r3, 0x590(r30)
    li r5, 0x7d0
    li r6, 0x1
    stfs f0, 0x152c(r30)
    stw r31, 0x15b8(r30)
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3e8
    li r6, 0x1
    bl fn_80239DAC
    mr r3, r30
    li r4, 0x6
    bl fn_8016E970
    lfs f0, lbl_80883BF0
    li r3, 0x1d
    li r0, 0x1
    stw r3, 0x560(r30)
    lfs f1, lbl_80883BE8
    addi r3, r30, 0xb0
    stw r0, 0x3fc(r30)
    li r4, 0x0
    lfs f2, lbl_80883BF8
    li r5, 0x153
    stfs f0, 0x2fc(r30)
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r30)
    bl fn_80097C08
    lwz r0, 0x14c8(r30)
    slwi r0, r0, 2
    add r3, r30, r0
    lwz r0, 0x14fc(r3)
    stw r0, 0x15b4(r30)
    stw r0, 0x638(r30)
lbl_fn_80299A7C_00001948:
    lwz r0, 0x144(r1)
    psq_l f31, 0x138(r1), 0, 0
    lfd f31, 0x130(r1)
    psq_l f30, 0x128(r1), 0, 0
    lfd f30, 0x120(r1)
    psq_l f29, 0x118(r1), 0, 0
    lfd f29, 0x110(r1)
    lwz r31, 0x10c(r1)
    lwz r30, 0x108(r1)
    mtlr r0
    addi r1, r1, 0x140
    blr
}
