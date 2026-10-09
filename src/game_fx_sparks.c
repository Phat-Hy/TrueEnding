#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void dtor_80084684(void);
extern void fn_8004ED34(void);
extern void fn_800844D8(void);
extern void fn_80092814(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_800F8548(void);
extern void fn_800FAB80(void);
extern void fn_8016E970(void);
extern void fn_80239DAC(void);
extern void fn_80370320(void);
extern void fn_80370AE4(void);
extern void fn_80370B78(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_80680770(void);
extern void fn_80686EA4(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);

/* External data declarations */
extern u8 lbl_807457F0[];
extern u8 lbl_807457F8[];
extern u8 lbl_80745818[];
extern u8 lbl_80785AA8[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_80883BE8;
extern u32 lbl_80883BF0;
extern u32 lbl_80883BF4;
extern u32 lbl_80883BF8;
extern u32 lbl_80883C18;
extern u32 lbl_80883C1C;
extern u32 lbl_80883C20;
extern u32 lbl_80883C24;
extern u32 lbl_80883C28;
extern u32 lbl_80883C2C;
extern u32 lbl_80883C30;
extern u32 lbl_80883C3C;
extern u32 lbl_80883C40;
extern u32 lbl_80883C58;
extern u32 lbl_80883C7C;
extern u32 lbl_80883CA8;
extern u32 lbl_80883CD4;
extern u32 lbl_80883CD8;
extern u32 lbl_80883CDC;
extern u32 lbl_80883CE0;
extern u32 lbl_80883CE4;
extern u32 lbl_80883CE8;
extern u32 lbl_80883CEC;
extern u32 lbl_80883CF0;
extern u32 lbl_80883CF4;
extern u32 lbl_80883CF8;

/* Function declarations */
void fn_80299EF8(void);
void fn_8029A0A8(void);
void fn_8029A564(void);
void fn_8029A580(void);
void fn_8029A674(void);
void fn_8029A788(void);
void fn_8029A928(void);
void fn_8029AC1C(void);
void fn_8029AF6C(void);
void fn_8029B24C(void);
void fn_8029B59C(void);
void fn_8029B704(void);

asm void fn_80299EF8(void)
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
    bne lbl_fn_80299EF8_000000E4
    li r31, 0x0
    li r0, 0x16
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
    li r4, 0x3
    bl fn_8016E970
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80883BF0
    li r0, 0x1
    stw r3, 0x590(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80883BE8
    li r4, 0x0
    stw r0, 0x3fc(r30)
    li r5, 0x1e2
    lfs f2, lbl_80883BF8
    li r6, 0x1
    stfs f0, 0x2fc(r30)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r30)
    bl fn_80097C08
    b lbl_fn_80299EF8_00000190
lbl_fn_80299EF8_000000E4:
    lfs f31, 0x2e4(r30)
    addi r3, r30, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    lfs f0, lbl_80883C40
    fsubs f0, f1, f0
    fcmpo cr0, f31, f0
    bge lbl_fn_80299EF8_00000190
    lfs f31, 0x2e4(r30)
    addi r3, r30, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    lfs f3, lbl_80883C40
    addi r3, r1, 0x20
    lfs f0, 0x1650(r30)
    fsubs f3, f1, f3
    lfs f6, 0x1644(r30)
    lfs f5, 0x164c(r30)
    fsubs f7, f0, f6
    lfs f4, 0x1640(r30)
    fdivs f9, f31, f3
    lfs f3, 0x1648(r30)
    lfs f0, 0x163c(r30)
    stfs f7, 0x1c(r1)
    fmuls f8, f7, f9
    fsubs f5, f5, f4
    fsubs f3, f3, f0
    stfs f8, 0x10(r1)
    fadds f2, f8, f6
    fmuls f7, f5, f9
    stfs f5, 0x18(r1)
    fmuls f5, f3, f9
    stfs f3, 0x14(r1)
    fadds f3, f7, f4
    fadds f0, f5, f0
    stfs f5, 0x8(r1)
    stfs f3, 0x24(r1)
    stfs f0, 0x20(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f7, 0xc(r1)
    stfs f2, 0x28(r1)
    psq_st f1, 0x528(r30), 0, 0
    stfs f2, 0x530(r30)
lbl_fn_80299EF8_00000190:
    lwz r0, 0x54(r1)
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8029A0A8(void)
{
    nofralloc
    stwu r1, -0xf0(r1)
    mflr r0
    stw r0, 0xf4(r1)
    stfd f31, 0xe0(r1)
    psq_st f31, 0xe8(r1), 0, 0
    stfd f30, 0xd0(r1)
    psq_st f30, 0xd8(r1), 0, 0
    stw r31, 0xcc(r1)
    mr r31, r3
    stw r30, 0xc8(r1)
    lwz r0, 0x14b4(r3)
    cmpwi r0, 0x2
    bge lbl_fn_8029A0A8_00000644
    lwz r8, lbl_8087EFA8
    li r4, 0x1
    stw r4, 0x98(r1)
    lwz r0, 0x244(r8)
    lwz r7, 0x248(r8)
    lfs f5, 0x24c(r8)
    lfs f4, 0x250(r8)
    lwz r6, 0x254(r8)
    lwz r5, 0x258(r8)
    lfs f3, 0x25c(r8)
    lfs f0, 0x260(r8)
    stw r0, 0x9c(r1)
    lfs f30, lbl_80883BF0
    stw r4, 0x240(r8)
    stw r0, 0x244(r8)
    stw r7, 0x248(r8)
    stfs f5, 0x24c(r8)
    stfs f4, 0x250(r8)
    stw r6, 0x254(r8)
    stw r5, 0x258(r8)
    stfs f3, 0x25c(r8)
    stfs f0, 0x260(r8)
    lwz r0, 0x14b4(r3)
    stw r7, 0xa0(r1)
    cmpwi r0, 0x0
    stfs f5, 0xa4(r1)
    stfs f4, 0xa8(r1)
    stw r6, 0xac(r1)
    stw r5, 0xb0(r1)
    stfs f3, 0xb4(r1)
    stfs f0, 0xb8(r1)
    bne lbl_fn_8029A0A8_00000350
    lwz r0, 0x14b8(r3)
    cmpwi r0, 0x37
    blt lbl_fn_8029A0A8_00000340
    lfs f0, lbl_80883C18
    li r5, 0x1e1
    stw r4, 0x3fc(r3)
    li r4, 0x0
    lfs f1, lbl_80883BE8
    li r6, 0x0
    stfs f30, 0x2fc(r3)
    li r7, 0x0
    lfs f2, lbl_80883CD4
    li r8, 0x1
    stfs f0, 0x2e8(r3)
    addi r3, r3, 0xb0
    bl fn_80097C08
    lis r4, lbl_80745818@ha
    lwz r30, lbl_8087F430
    addi r4, r4, lbl_80745818@l
    addi r3, r31, 0xb0
    addi r4, r4, 0x309
    li r5, 0x0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8029A0A8_000002D0
    li r3, 0x0
    b lbl_fn_8029A0A8_000002DC
lbl_fn_8029A0A8_000002D0:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r3, r3, r0
lbl_fn_8029A0A8_000002DC:
    lfs f2, 0x2c(r3)
    addi r4, r1, 0x5c
    lfs f0, 0x1c(r3)
    li r0, 0x1
    lfs f3, 0xc(r3)
    addi r5, r30, 0x97c
    stfs f3, 0x5c(r1)
    lfs f3, lbl_80883BE8
    stw r31, 0x8a0(r30)
    lbz r3, 0x97c(r30)
    stb r3, 0x97d(r30)
    stfs f0, 0x60(r1)
    stb r0, 0x97c(r30)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0xc(r5), 0, 0
    stfs f2, 0x990(r30)
    stfs f2, 0x64(r1)
    stfs f3, 0x9a0(r30)
    b lbl_fn_8029A0A8_0000032C
    b lbl_fn_8029A0A8_00000330
lbl_fn_8029A0A8_0000032C:
    li r0, 0x0
lbl_fn_8029A0A8_00000330:
    stw r0, 0x4(r5)
    li r0, 0x1
    stw r0, 0x14b4(r31)
    b lbl_fn_8029A0A8_00000628
lbl_fn_8029A0A8_00000340:
    cmpwi r0, 0x28
    bge lbl_fn_8029A0A8_00000628
    lfs f30, lbl_80883BF8
    b lbl_fn_8029A0A8_00000628
lbl_fn_8029A0A8_00000350:
    lis r4, lbl_80745818@ha
    lwz r30, lbl_8087F430
    addi r4, r4, lbl_80745818@l
    li r5, 0x0
    addi r4, r4, 0x309
    addi r3, r3, 0xb0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8029A0A8_0000037C
    li r5, 0x0
    b lbl_fn_8029A0A8_00000388
lbl_fn_8029A0A8_0000037C:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r5, r3, r0
lbl_fn_8029A0A8_00000388:
    lfs f2, 0x2c(r5)
    addi r4, r1, 0x50
    lfs f3, 0x1c(r5)
    addi r3, r30, 0x988
    lfs f0, 0xc(r5)
    stfs f0, 0x50(r1)
    lfs f0, lbl_80883C7C
    stfs f3, 0x54(r1)
    stw r31, 0x8a0(r30)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x990(r30)
    lfs f31, 0x2e4(r31)
    stfs f2, 0x58(r1)
    fcmpo cr0, f31, f0
    ble lbl_fn_8029A0A8_0000046C
    li r9, 0x0
    stw r9, 0x8a0(r30)
    lfs f0, lbl_80883BF0
    li r4, 0x15
    stb r9, 0x97c(r30)
    li r5, 0x1
    lwz r8, lbl_8087EFA8
    stw r9, 0x98(r1)
    lwz r3, 0x244(r8)
    lwz r7, 0x248(r8)
    lfs f6, 0x24c(r8)
    lfs f5, 0x250(r8)
    lwz r6, 0x254(r8)
    lwz r0, 0x258(r8)
    lfs f4, 0x25c(r8)
    lfs f3, 0x260(r8)
    stw r3, 0x9c(r1)
    stw r9, 0x240(r8)
    stw r3, 0x244(r8)
    stw r7, 0x248(r8)
    stfs f6, 0x24c(r8)
    stfs f5, 0x250(r8)
    stw r6, 0x254(r8)
    stw r0, 0x258(r8)
    stfs f4, 0x25c(r8)
    stfs f3, 0x260(r8)
    lwz r3, lbl_8087EFA8
    stw r7, 0xa0(r1)
    stfs f0, 0x3a4(r3)
    stfs f6, 0xa4(r1)
    lwz r3, lbl_8087F430
    stfs f5, 0xa8(r1)
    stw r6, 0xac(r1)
    stw r0, 0xb0(r1)
    stfs f4, 0xb4(r1)
    stfs f3, 0xb8(r1)
    bl fn_80370AE4
    lwz r3, 0x14b4(r31)
    addi r0, r3, 0x1
    stw r0, 0x14b4(r31)
    b lbl_fn_8029A0A8_00000628
lbl_fn_8029A0A8_0000046C:
    lfs f0, lbl_80883CA8
    fcmpo cr0, f0, f31
    cror eq, lt, eq
    bne lbl_fn_8029A0A8_000004AC
    lfs f0, lbl_80883CD8
    fcmpo cr0, f31, f0
    cror eq, lt, eq
    bne lbl_fn_8029A0A8_000004AC
    lwz r3, lbl_8087F430
    li r4, -0x1
    lfs f1, lbl_80883CDC
    li r5, 0xa
    li r6, 0x0
    bl fn_80370B78
    lfs f30, lbl_80883CE0
    b lbl_fn_8029A0A8_00000628
lbl_fn_8029A0A8_000004AC:
    lfs f0, lbl_80883CE4
    fcmpo cr0, f31, f0
    bge lbl_fn_8029A0A8_0000060C
    lwz r5, 0x1638(r31)
    addi r3, r1, 0x44
    lfs f0, 0x530(r31)
    mr r4, r3
    lfs f5, 0x530(r5)
    lfs f4, 0x528(r5)
    lfs f3, 0x528(r31)
    fsubs f5, f5, f0
    lfs f0, lbl_80883BE8
    fsubs f3, f4, f3
    stfs f5, 0x4c(r1)
    stfs f3, 0x44(r1)
    stfs f0, 0x48(r1)
    bl fn_805F98D0
    lfs f4, lbl_80883C18
    addi r3, r1, 0x68
    lfs f0, 0x48(r1)
    li r4, 0x79
    lfs f5, 0x4c(r1)
    fmuls f8, f0, f4
    lfs f3, 0x44(r1)
    lfs f0, 0x52c(r31)
    fmuls f7, f5, f4
    fmuls f9, f3, f4
    lfs f5, 0x528(r31)
    fsubs f4, f0, f8
    lfs f0, lbl_80883CE8
    fsubs f6, f5, f9
    lfs f3, 0x530(r31)
    stfs f9, 0x2c(r1)
    fsubs f5, f3, f7
    fadds f4, f4, f0
    stfs f6, 0x528(r31)
    lfs f3, lbl_80883BE8
    stfs f5, 0x530(r31)
    lfs f0, lbl_80883BF0
    stfs f4, 0x52c(r31)
    stfs f3, 0x38(r1)
    stfs f3, 0x3c(r1)
    stfs f0, 0x40(r1)
    lfs f1, 0x538(r31)
    stfs f8, 0x30(r1)
    stfs f7, 0x34(r1)
    bl fn_805F8E70
    addi r4, r1, 0x38
    addi r3, r1, 0x68
    mr r5, r4
    bl fn_805F93C0
    lfs f3, 0x4c(r1)
    addi r4, r1, 0x20
    lfs f7, 0x40(r1)
    addi r3, r1, 0x44
    lfs f0, 0x48(r1)
    fsubs f11, f3, f7
    lfs f6, 0x3c(r1)
    lfs f3, lbl_80883CEC
    fsubs f10, f0, f6
    lfs f5, 0x44(r1)
    fmuls f9, f11, f3
    lfs f4, 0x38(r1)
    fmuls f8, f10, f3
    lfs f0, lbl_80883C40
    fadds f2, f9, f7
    stfs f10, 0x18(r1)
    fsubs f5, f5, f4
    fcmpo cr0, f31, f0
    stfs f5, 0x14(r1)
    fmuls f7, f5, f3
    fadds f5, f8, f6
    stfs f11, 0x1c(r1)
    fadds f3, f7, f4
    stfs f5, 0x24(r1)
    stfs f3, 0x20(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f7, 0x8(r1)
    stfs f8, 0xc(r1)
    stfs f9, 0x10(r1)
    stfs f2, 0x28(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x4c(r1)
    ble lbl_fn_8029A0A8_00000628
    lfs f0, lbl_80883CF0
    stfs f0, 0x2e8(r31)
    lfs f30, lbl_80883CE0
    b lbl_fn_8029A0A8_00000628
lbl_fn_8029A0A8_0000060C:
    lfs f4, 0x52c(r31)
    lfs f3, lbl_80883CE8
    lfs f0, lbl_80883CF0
    fadds f3, f4, f3
    stfs f0, 0x2e8(r31)
    lfs f30, lbl_80883CE0
    stfs f3, 0x52c(r31)
lbl_fn_8029A0A8_00000628:
    lwz r3, lbl_8087EFA8
    li r4, 0x38d
    li r5, 0x0
    li r6, 0x0
    stfs f30, 0x3a4(r3)
    lwz r3, lbl_8087F430
    bl fn_80370320
lbl_fn_8029A0A8_00000644:
    lwz r0, 0xf4(r1)
    psq_l f31, 0xe8(r1), 0, 0
    lfd f31, 0xe0(r1)
    psq_l f30, 0xd8(r1), 0, 0
    lfd f30, 0xd0(r1)
    lwz r31, 0xcc(r1)
    lwz r30, 0xc8(r1)
    mtlr r0
    addi r1, r1, 0xf0
    blr
}

asm void fn_8029A564(void)
{
    nofralloc
    lwz r4, 0x58c(r3)
    subi r3, r4, 0x16
    subfic r0, r4, 0x16
    nor r0, r3, r0
    srawi r0, r0, 31
    andi. r3, r0, 0x9
    blr
}

asm void fn_8029A580(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r4
    stw r30, 0x28(r1)
    mr r30, r5
    stw r29, 0x24(r1)
    mr r29, r3
    lfs f3, 0x530(r3)
    lfs f0, 0x530(r5)
    lfs f2, 0x528(r3)
    addi r3, r1, 0x8
    lfs f1, 0x528(r5)
    fsubs f3, f3, f0
    lfs f0, lbl_80883BE8
    mr r4, r3
    fsubs f1, f2, f1
    stfs f3, 0x10(r1)
    stfs f1, 0x8(r1)
    stfs f0, 0xc(r1)
    bl fn_805F98D0
    cmpwi r31, 0x9
    bne lbl_fn_8029A580_00000760
    li r31, 0x0
    li r0, 0x17
    stw r30, 0x1638(r29)
    stw r0, 0x58c(r29)
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
    mr r3, r29
    li r4, 0x3
    bl fn_8016E970
    lwz r3, lbl_8087F430
    li r4, 0x38d
    li r5, 0x0
    li r6, 0x0
    bl fn_80370320
lbl_fn_8029A580_00000760:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8029A674(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bne lbl_fn_8029A674_000007B0
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x58c(r3)
    stw r0, 0x14c0(r3)
    b lbl_fn_8029A674_000007C8
lbl_fn_8029A674_000007B0:
    cmpwi r4, 0x1
    bne lbl_fn_8029A674_000007C8
    li r4, 0x7
    li r0, 0x1
    stw r4, 0x58c(r3)
    stw r0, 0x14c0(r3)
lbl_fn_8029A674_000007C8:
    li r31, 0x0
    stw r31, 0x14b4(r3)
    stw r31, 0x14b8(r3)
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
    lfs f3, lbl_80883BF0
    li r3, 0x4
    lfs f0, lbl_80883C58
    li r0, 0x1
    stw r3, 0x560(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80883BE8
    li r4, 0x0
    stw r0, 0x3fc(r30)
    li r5, 0x2
    lfs f2, lbl_80883BF8
    li r6, 0x1
    stfs f3, 0x2fc(r30)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r30)
    bl fn_80097C08
    lfs f2, 0x530(r30)
    addi r3, r30, 0x154c
    psq_l f1, 0x528(r30), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x1554(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8029A788(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    li r0, 0xb
    stw r31, 0x3c(r1)
    li r31, 0x0
    stw r30, 0x38(r1)
    mr r30, r3
    stw r0, 0x58c(r3)
    stw r31, 0x14b4(r3)
    stw r31, 0x14b8(r3)
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
    stw r31, 0x15fc(r30)
    mr r3, r30
    li r4, 0x6
    bl fn_8016E970
    lfs f0, lbl_80883BF0
    li r3, 0x4
    li r0, 0x1
    stw r3, 0x560(r30)
    lfs f1, lbl_80883BE8
    addi r3, r30, 0xb0
    stw r0, 0x3fc(r30)
    li r4, 0x0
    lfs f2, lbl_80883BF8
    li r5, 0x15e
    stfs f0, 0x2fc(r30)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r30)
    bl fn_80097C08
    lwz r7, 0x14b0(r30)
    addi r4, r1, 0x2c
    lfs f5, lbl_80883BE8
    addi r6, r1, 0x14
    psq_l f1, 0x528(r7), 0, 0
    addi r5, r30, 0x1530
    psq_st f1, 0x0(r4), 0, 0
    addi r3, r1, 0x20
    lfs f4, 0x52c(r30)
    mr r4, r3
    lfs f3, 0x2c(r1)
    fsubs f6, f5, f4
    lfs f0, 0x528(r30)
    lfs f2, 0x530(r7)
    fsubs f3, f3, f0
    lfs f4, 0x530(r30)
    stfs f6, 0x18(r1)
    fsubs f0, f2, f4
    stfs f3, 0x14(r1)
    stfs f2, 0x34(r1)
    fmr f2, f0
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    frsp f4, f2
    stfs f2, 0x1538(r30)
    lfs f3, 0x1530(r30)
    stfs f5, 0x30(r1)
    stfs f0, 0x1c(r1)
    stfs f3, 0x20(r1)
    stfs f5, 0x24(r1)
    stfs f4, 0x28(r1)
    bl fn_805F98D0
    lfs f5, 0x28(r1)
    lfs f4, lbl_80883CF4
    lfs f3, 0x24(r1)
    lfs f0, 0x20(r1)
    fmuls f5, f5, f4
    fmuls f6, f3, f4
    lfs f3, 0x1534(r30)
    fmuls f7, f0, f4
    lfs f4, 0x1530(r30)
    lfs f0, 0x1538(r30)
    fsubs f3, f3, f6
    fsubs f4, f4, f7
    stfs f7, 0x8(r1)
    fsubs f0, f0, f5
    stfs f4, 0x1530(r30)
    stfs f3, 0x1534(r30)
    stfs f0, 0x1538(r30)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r0, 0x44(r1)
    stfs f6, 0xc(r1)
    stfs f5, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8029A928(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    li r0, 0xe
    stfd f31, 0x100(r1)
    psq_st f31, 0x108(r1), 0, 0
    stfd f30, 0xf0(r1)
    psq_st f30, 0xf8(r1), 0, 0
    stw r31, 0xec(r1)
    li r31, 0x0
    stw r30, 0xe8(r1)
    mr r30, r3
    stw r0, 0x58c(r3)
    stw r31, 0x14b4(r3)
    stw r31, 0x14b8(r3)
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
    li r3, 0x4
    li r0, 0x1
    stw r3, 0x560(r30)
    lfs f1, lbl_80883BE8
    addi r3, r30, 0xb0
    stw r0, 0x3fc(r30)
    li r4, 0x0
    lfs f2, lbl_80883BF8
    li r5, 0x15f
    stfs f0, 0x2fc(r30)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r30)
    bl fn_80097C08
    lfs f0, 0x538(r30)
    addi r3, r1, 0x14
    stfs f0, 0x1544(r30)
    addi r5, r1, 0x8
    lwz r6, 0x14b0(r30)
    mr r4, r3
    lfs f0, 0x530(r30)
    psq_l f1, 0x528(r6), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    lfs f2, 0x530(r6)
    lfs f4, 0x8(r1)
    lfs f3, 0x528(r30)
    fsubs f5, f2, f0
    lfs f0, lbl_80883BE8
    fsubs f3, f4, f3
    stfs f2, 0x10(r1)
    stfs f3, 0x14(r1)
    stfs f5, 0x1c(r1)
    stfs f0, 0x18(r1)
    bl fn_805F98D0
    lfs f2, 0x1c(r1)
    addi r3, r1, 0x14
    lfs f0, lbl_80883C1C
    addi r31, r1, 0x20
    fabs f3, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    frsp f3, f3
    stfs f2, 0x28(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_8029A928_00000B98
    lfs f3, 0x20(r1)
    lfs f0, lbl_80883BE8
    fcmpo cr0, f3, f0
    ble lbl_fn_8029A928_00000B8C
    lfs f0, lbl_80883C20
    b lbl_fn_8029A928_00000B90
lbl_fn_8029A928_00000B8C:
    lfs f0, lbl_80883C24
lbl_fn_8029A928_00000B90:
    stfs f0, 0x30(r1)
    b lbl_fn_8029A928_00000BAC
lbl_fn_8029A928_00000B98:
    frsp f2, f2
    lfs f1, 0x20(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x30(r1)
lbl_fn_8029A928_00000BAC:
    lfs f0, 0x30(r1)
    addi r3, r1, 0xb8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883BE8
    addi r4, r1, 0x38
    lfs f4, 0xc0(r1)
    mr r5, r4
    lfs f5, 0xbc(r1)
    addi r3, r1, 0x78
    lfs f6, 0xb8(r1)
    lfs f7, 0xd0(r1)
    lfs f8, 0xcc(r1)
    lfs f9, 0xc8(r1)
    lfs f10, 0xe0(r1)
    lfs f11, 0xdc(r1)
    lfs f12, 0xd8(r1)
    lfs f13, 0xe4(r1)
    lfs f31, 0xd4(r1)
    lfs f30, 0xc4(r1)
    lfs f0, lbl_80883BF0
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x28(r1)
    stfs f3, 0xa8(r1)
    stfs f3, 0xac(r1)
    stfs f3, 0xb0(r1)
    stfs f0, 0xb4(r1)
    stfs f6, 0x68(r1)
    stfs f5, 0x6c(r1)
    stfs f4, 0x70(r1)
    stfs f6, 0x78(r1)
    stfs f5, 0x7c(r1)
    stfs f4, 0x80(r1)
    stfs f9, 0x5c(r1)
    stfs f8, 0x60(r1)
    stfs f7, 0x64(r1)
    stfs f9, 0x88(r1)
    stfs f8, 0x8c(r1)
    stfs f7, 0x90(r1)
    stfs f12, 0x50(r1)
    stfs f11, 0x54(r1)
    stfs f10, 0x58(r1)
    stfs f12, 0x98(r1)
    stfs f11, 0x9c(r1)
    stfs f10, 0xa0(r1)
    stfs f30, 0x44(r1)
    stfs f31, 0x48(r1)
    stfs f13, 0x4c(r1)
    stfs f30, 0x84(r1)
    stfs f31, 0x94(r1)
    stfs f13, 0xa4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80883C1C
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8029A928_00000CC8
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80883BE8
    fcmpo cr0, f3, f0
    ble lbl_fn_8029A928_00000CB8
    lfs f0, lbl_80883C20
    b lbl_fn_8029A928_00000CBC
lbl_fn_8029A928_00000CB8:
    lfs f0, lbl_80883C24
lbl_fn_8029A928_00000CBC:
    fneg f0, f0
    stfs f0, 0x2c(r1)
    b lbl_fn_8029A928_00000CDC
lbl_fn_8029A928_00000CC8:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x2c(r1)
lbl_fn_8029A928_00000CDC:
    addi r3, r1, 0x2c
    lfs f2, lbl_80883BE8
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    lfs f0, 0x24(r1)
    stfs f0, 0x1548(r30)
    psq_l f31, 0x108(r1), 0, 0
    lfd f31, 0x100(r1)
    psq_l f30, 0xf8(r1), 0, 0
    lfd f30, 0xf0(r1)
    lwz r31, 0xec(r1)
    lwz r30, 0xe8(r1)
    lwz r0, 0x114(r1)
    stfs f2, 0x34(r1)
    stfs f2, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_8029AC1C(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    li r0, 0xf
    stfd f31, 0x100(r1)
    psq_st f31, 0x108(r1), 0, 0
    stfd f30, 0xf0(r1)
    psq_st f30, 0xf8(r1), 0, 0
    stw r31, 0xec(r1)
    li r31, 0x0
    stw r30, 0xe8(r1)
    mr r30, r3
    stw r0, 0x58c(r3)
    stw r31, 0x14b4(r3)
    stw r31, 0x14b8(r3)
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
    lfs f3, lbl_80883BF0
    li r0, 0x1
    lfs f0, 0x538(r30)
    addi r3, r1, 0x14
    stfs f0, 0x1544(r30)
    addi r5, r1, 0x8
    lwz r6, 0x14b0(r30)
    mr r4, r3
    stw r0, 0x3fc(r30)
    lfs f4, 0x530(r30)
    stfs f3, 0x2fc(r30)
    lfs f0, lbl_80883BE8
    stfs f3, 0x2e8(r30)
    lfs f3, 0x528(r30)
    lfs f2, 0x530(r6)
    psq_l f1, 0x528(r6), 0, 0
    fsubs f5, f2, f4
    psq_st f1, 0x0(r5), 0, 0
    lfs f4, 0x8(r1)
    stfs f2, 0x10(r1)
    fsubs f3, f4, f3
    stfs f5, 0x1c(r1)
    stfs f3, 0x14(r1)
    stfs f0, 0x18(r1)
    bl fn_805F98D0
    lfs f2, 0x1c(r1)
    addi r3, r1, 0x14
    lfs f0, lbl_80883C1C
    addi r31, r1, 0x20
    fabs f3, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    frsp f3, f3
    stfs f2, 0x28(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_8029AC1C_00000E54
    lfs f3, 0x20(r1)
    lfs f0, lbl_80883BE8
    fcmpo cr0, f3, f0
    ble lbl_fn_8029AC1C_00000E48
    lfs f0, lbl_80883C20
    b lbl_fn_8029AC1C_00000E4C
lbl_fn_8029AC1C_00000E48:
    lfs f0, lbl_80883C24
lbl_fn_8029AC1C_00000E4C:
    stfs f0, 0x30(r1)
    b lbl_fn_8029AC1C_00000E68
lbl_fn_8029AC1C_00000E54:
    frsp f2, f2
    lfs f1, 0x20(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x30(r1)
lbl_fn_8029AC1C_00000E68:
    lfs f0, 0x30(r1)
    addi r3, r1, 0xb8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883BE8
    addi r4, r1, 0x38
    lfs f4, 0xc0(r1)
    mr r5, r4
    lfs f5, 0xbc(r1)
    addi r3, r1, 0x78
    lfs f6, 0xb8(r1)
    lfs f7, 0xd0(r1)
    lfs f8, 0xcc(r1)
    lfs f9, 0xc8(r1)
    lfs f10, 0xe0(r1)
    lfs f11, 0xdc(r1)
    lfs f12, 0xd8(r1)
    lfs f13, 0xe4(r1)
    lfs f31, 0xd4(r1)
    lfs f30, 0xc4(r1)
    lfs f0, lbl_80883BF0
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x28(r1)
    stfs f3, 0xa8(r1)
    stfs f3, 0xac(r1)
    stfs f3, 0xb0(r1)
    stfs f0, 0xb4(r1)
    stfs f6, 0x68(r1)
    stfs f5, 0x6c(r1)
    stfs f4, 0x70(r1)
    stfs f6, 0x78(r1)
    stfs f5, 0x7c(r1)
    stfs f4, 0x80(r1)
    stfs f9, 0x5c(r1)
    stfs f8, 0x60(r1)
    stfs f7, 0x64(r1)
    stfs f9, 0x88(r1)
    stfs f8, 0x8c(r1)
    stfs f7, 0x90(r1)
    stfs f12, 0x50(r1)
    stfs f11, 0x54(r1)
    stfs f10, 0x58(r1)
    stfs f12, 0x98(r1)
    stfs f11, 0x9c(r1)
    stfs f10, 0xa0(r1)
    stfs f30, 0x44(r1)
    stfs f31, 0x48(r1)
    stfs f13, 0x4c(r1)
    stfs f30, 0x84(r1)
    stfs f31, 0x94(r1)
    stfs f13, 0xa4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80883C1C
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8029AC1C_00000F84
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80883BE8
    fcmpo cr0, f3, f0
    ble lbl_fn_8029AC1C_00000F74
    lfs f0, lbl_80883C20
    b lbl_fn_8029AC1C_00000F78
lbl_fn_8029AC1C_00000F74:
    lfs f0, lbl_80883C24
lbl_fn_8029AC1C_00000F78:
    fneg f0, f0
    stfs f0, 0x2c(r1)
    b lbl_fn_8029AC1C_00000F98
lbl_fn_8029AC1C_00000F84:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x2c(r1)
lbl_fn_8029AC1C_00000F98:
    addi r3, r1, 0x2c
    lfs f3, lbl_80883BE8
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_807457F0@ha
    psq_st f1, 0x0(r31), 0, 0
    fmr f2, f3
    lfs f0, 0x1544(r30)
    lfs f4, 0x24(r1)
    stfs f2, 0x28(r1)
    fsubs f1, f4, f0
    lfd f2, lbl_807457F0@l(r3)
    stfs f3, 0x34(r1)
    stfs f4, 0x1548(r30)
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_80883C28
    fcmpo cr0, f3, f0
    ble lbl_fn_8029AC1C_00000FE8
    lfs f0, lbl_80883C2C
    fsubs f3, f3, f0
lbl_fn_8029AC1C_00000FE8:
    lfs f0, lbl_80883C30
    fcmpo cr0, f3, f0
    bge lbl_fn_8029AC1C_00000FFC
    lfs f0, lbl_80883C2C
    fadds f3, f3, f0
lbl_fn_8029AC1C_00000FFC:
    lfs f1, lbl_80883BE8
    fcmpo cr0, f3, f1
    bge lbl_fn_8029AC1C_0000102C
    lfs f2, lbl_80883BF8
    addi r3, r30, 0xb0
    li r4, 0x0
    li r5, 0x158
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_8029AC1C_0000104C
lbl_fn_8029AC1C_0000102C:
    lfs f2, lbl_80883BF8
    addi r3, r30, 0xb0
    li r4, 0x0
    li r5, 0x159
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
lbl_fn_8029AC1C_0000104C:
    lwz r0, 0x114(r1)
    psq_l f31, 0x108(r1), 0, 0
    lfd f31, 0x100(r1)
    psq_l f30, 0xf8(r1), 0, 0
    lfd f30, 0xf0(r1)
    lwz r31, 0xec(r1)
    lwz r30, 0xe8(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_8029AF6C(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    li r0, 0x10
    stfd f31, 0x100(r1)
    psq_st f31, 0x108(r1), 0, 0
    stfd f30, 0xf0(r1)
    psq_st f30, 0xf8(r1), 0, 0
    stw r31, 0xec(r1)
    li r31, 0x0
    stw r30, 0xe8(r1)
    mr r30, r3
    stw r0, 0x58c(r3)
    stw r31, 0x14b4(r3)
    stw r31, 0x14b8(r3)
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
    lfs f0, lbl_80883BF0
    li r0, 0x1
    stw r0, 0x3fc(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80883BE8
    li r4, 0x0
    stfs f0, 0x2fc(r30)
    li r5, 0x160
    lfs f2, lbl_80883BF8
    li r6, 0x0
    stfs f0, 0x2e8(r30)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, 0x538(r30)
    addi r3, r1, 0x14
    stfs f0, 0x1544(r30)
    addi r5, r1, 0x8
    lwz r6, 0x14b0(r30)
    mr r4, r3
    lfs f0, 0x530(r30)
    psq_l f1, 0x528(r6), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    lfs f2, 0x530(r6)
    lfs f4, 0x8(r1)
    lfs f3, 0x528(r30)
    fsubs f5, f2, f0
    lfs f0, lbl_80883BE8
    fsubs f3, f4, f3
    stfs f2, 0x10(r1)
    stfs f3, 0x14(r1)
    stfs f5, 0x1c(r1)
    stfs f0, 0x18(r1)
    bl fn_805F98D0
    lfs f2, 0x1c(r1)
    addi r3, r1, 0x14
    lfs f0, lbl_80883C1C
    addi r31, r1, 0x20
    fabs f3, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    frsp f3, f3
    stfs f2, 0x28(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_8029AF6C_000011C8
    lfs f3, 0x20(r1)
    lfs f0, lbl_80883BE8
    fcmpo cr0, f3, f0
    ble lbl_fn_8029AF6C_000011BC
    lfs f0, lbl_80883C20
    b lbl_fn_8029AF6C_000011C0
lbl_fn_8029AF6C_000011BC:
    lfs f0, lbl_80883C24
lbl_fn_8029AF6C_000011C0:
    stfs f0, 0x30(r1)
    b lbl_fn_8029AF6C_000011DC
lbl_fn_8029AF6C_000011C8:
    frsp f2, f2
    lfs f1, 0x20(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x30(r1)
lbl_fn_8029AF6C_000011DC:
    lfs f0, 0x30(r1)
    addi r3, r1, 0xb8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883BE8
    addi r4, r1, 0x38
    lfs f4, 0xc0(r1)
    mr r5, r4
    lfs f5, 0xbc(r1)
    addi r3, r1, 0x78
    lfs f6, 0xb8(r1)
    lfs f7, 0xd0(r1)
    lfs f8, 0xcc(r1)
    lfs f9, 0xc8(r1)
    lfs f10, 0xe0(r1)
    lfs f11, 0xdc(r1)
    lfs f12, 0xd8(r1)
    lfs f13, 0xe4(r1)
    lfs f31, 0xd4(r1)
    lfs f30, 0xc4(r1)
    lfs f0, lbl_80883BF0
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x28(r1)
    stfs f3, 0xa8(r1)
    stfs f3, 0xac(r1)
    stfs f3, 0xb0(r1)
    stfs f0, 0xb4(r1)
    stfs f6, 0x68(r1)
    stfs f5, 0x6c(r1)
    stfs f4, 0x70(r1)
    stfs f6, 0x78(r1)
    stfs f5, 0x7c(r1)
    stfs f4, 0x80(r1)
    stfs f9, 0x5c(r1)
    stfs f8, 0x60(r1)
    stfs f7, 0x64(r1)
    stfs f9, 0x88(r1)
    stfs f8, 0x8c(r1)
    stfs f7, 0x90(r1)
    stfs f12, 0x50(r1)
    stfs f11, 0x54(r1)
    stfs f10, 0x58(r1)
    stfs f12, 0x98(r1)
    stfs f11, 0x9c(r1)
    stfs f10, 0xa0(r1)
    stfs f30, 0x44(r1)
    stfs f31, 0x48(r1)
    stfs f13, 0x4c(r1)
    stfs f30, 0x84(r1)
    stfs f31, 0x94(r1)
    stfs f13, 0xa4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80883C1C
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8029AF6C_000012F8
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80883BE8
    fcmpo cr0, f3, f0
    ble lbl_fn_8029AF6C_000012E8
    lfs f0, lbl_80883C20
    b lbl_fn_8029AF6C_000012EC
lbl_fn_8029AF6C_000012E8:
    lfs f0, lbl_80883C24
lbl_fn_8029AF6C_000012EC:
    fneg f0, f0
    stfs f0, 0x2c(r1)
    b lbl_fn_8029AF6C_0000130C
lbl_fn_8029AF6C_000012F8:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x2c(r1)
lbl_fn_8029AF6C_0000130C:
    addi r3, r1, 0x2c
    lfs f2, lbl_80883BE8
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    lfs f0, 0x24(r1)
    stfs f0, 0x1548(r30)
    psq_l f31, 0x108(r1), 0, 0
    lfd f31, 0x100(r1)
    psq_l f30, 0xf8(r1), 0, 0
    lfd f30, 0xf0(r1)
    lwz r31, 0xec(r1)
    lwz r30, 0xe8(r1)
    lwz r0, 0x114(r1)
    stfs f2, 0x34(r1)
    stfs f2, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_8029B24C(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    stfd f31, 0x100(r1)
    psq_st f31, 0x108(r1), 0, 0
    stfd f30, 0xf0(r1)
    psq_st f30, 0xf8(r1), 0, 0
    stw r31, 0xec(r1)
    li r31, 0x0
    stw r30, 0xe8(r1)
    mr r30, r3
    stw r31, 0x14b4(r3)
    stw r31, 0x14b8(r3)
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
    lfs f0, lbl_80883BF0
    li r3, 0x15
    lfs f5, 0x538(r30)
    li r0, 0x1
    stw r3, 0x58c(r30)
    addi r3, r1, 0x14
    lwz r6, 0x14b0(r30)
    addi r5, r1, 0x8
    stw r0, 0x3fc(r30)
    mr r4, r3
    lfs f4, 0x530(r30)
    stfs f0, 0x2fc(r30)
    lfs f3, 0x528(r30)
    stfs f0, 0x2e8(r30)
    lfs f0, lbl_80883BE8
    stfs f5, 0x1544(r30)
    lfs f2, 0x530(r6)
    psq_l f1, 0x528(r6), 0, 0
    fsubs f5, f2, f4
    psq_st f1, 0x0(r5), 0, 0
    lfs f4, 0x8(r1)
    stfs f2, 0x10(r1)
    fsubs f3, f4, f3
    stfs f5, 0x1c(r1)
    stfs f3, 0x14(r1)
    stfs f0, 0x18(r1)
    bl fn_805F98D0
    lfs f2, 0x1c(r1)
    addi r3, r1, 0x14
    lfs f0, lbl_80883C1C
    addi r31, r1, 0x20
    fabs f3, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    frsp f3, f3
    stfs f2, 0x28(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_8029B24C_00001484
    lfs f3, 0x20(r1)
    lfs f0, lbl_80883BE8
    fcmpo cr0, f3, f0
    ble lbl_fn_8029B24C_00001478
    lfs f0, lbl_80883C20
    b lbl_fn_8029B24C_0000147C
lbl_fn_8029B24C_00001478:
    lfs f0, lbl_80883C24
lbl_fn_8029B24C_0000147C:
    stfs f0, 0x30(r1)
    b lbl_fn_8029B24C_00001498
lbl_fn_8029B24C_00001484:
    frsp f2, f2
    lfs f1, 0x20(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x30(r1)
lbl_fn_8029B24C_00001498:
    lfs f0, 0x30(r1)
    addi r3, r1, 0xb8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883BE8
    addi r4, r1, 0x38
    lfs f4, 0xc0(r1)
    mr r5, r4
    lfs f5, 0xbc(r1)
    addi r3, r1, 0x78
    lfs f6, 0xb8(r1)
    lfs f7, 0xd0(r1)
    lfs f8, 0xcc(r1)
    lfs f9, 0xc8(r1)
    lfs f10, 0xe0(r1)
    lfs f11, 0xdc(r1)
    lfs f12, 0xd8(r1)
    lfs f13, 0xe4(r1)
    lfs f31, 0xd4(r1)
    lfs f30, 0xc4(r1)
    lfs f0, lbl_80883BF0
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x28(r1)
    stfs f3, 0xa8(r1)
    stfs f3, 0xac(r1)
    stfs f3, 0xb0(r1)
    stfs f0, 0xb4(r1)
    stfs f6, 0x68(r1)
    stfs f5, 0x6c(r1)
    stfs f4, 0x70(r1)
    stfs f6, 0x78(r1)
    stfs f5, 0x7c(r1)
    stfs f4, 0x80(r1)
    stfs f9, 0x5c(r1)
    stfs f8, 0x60(r1)
    stfs f7, 0x64(r1)
    stfs f9, 0x88(r1)
    stfs f8, 0x8c(r1)
    stfs f7, 0x90(r1)
    stfs f12, 0x50(r1)
    stfs f11, 0x54(r1)
    stfs f10, 0x58(r1)
    stfs f12, 0x98(r1)
    stfs f11, 0x9c(r1)
    stfs f10, 0xa0(r1)
    stfs f30, 0x44(r1)
    stfs f31, 0x48(r1)
    stfs f13, 0x4c(r1)
    stfs f30, 0x84(r1)
    stfs f31, 0x94(r1)
    stfs f13, 0xa4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80883C1C
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8029B24C_000015B4
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80883BE8
    fcmpo cr0, f3, f0
    ble lbl_fn_8029B24C_000015A4
    lfs f0, lbl_80883C20
    b lbl_fn_8029B24C_000015A8
lbl_fn_8029B24C_000015A4:
    lfs f0, lbl_80883C24
lbl_fn_8029B24C_000015A8:
    fneg f0, f0
    stfs f0, 0x2c(r1)
    b lbl_fn_8029B24C_000015C8
lbl_fn_8029B24C_000015B4:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x2c(r1)
lbl_fn_8029B24C_000015C8:
    addi r3, r1, 0x2c
    lfs f3, lbl_80883BE8
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_807457F0@ha
    psq_st f1, 0x0(r31), 0, 0
    fmr f2, f3
    lfs f0, 0x1544(r30)
    lfs f4, 0x24(r1)
    stfs f2, 0x28(r1)
    fsubs f1, f4, f0
    lfd f2, lbl_807457F0@l(r3)
    stfs f3, 0x34(r1)
    stfs f4, 0x1548(r30)
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_80883C28
    fcmpo cr0, f3, f0
    ble lbl_fn_8029B24C_00001618
    lfs f0, lbl_80883C2C
    fsubs f3, f3, f0
lbl_fn_8029B24C_00001618:
    lfs f0, lbl_80883C30
    fcmpo cr0, f3, f0
    bge lbl_fn_8029B24C_0000162C
    lfs f0, lbl_80883C2C
    fadds f3, f3, f0
lbl_fn_8029B24C_0000162C:
    lfs f1, lbl_80883BE8
    fcmpo cr0, f3, f1
    bge lbl_fn_8029B24C_0000165C
    lfs f2, lbl_80883BF8
    addi r3, r30, 0xb0
    li r4, 0x0
    li r5, 0x158
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_8029B24C_0000167C
lbl_fn_8029B24C_0000165C:
    lfs f2, lbl_80883BF8
    addi r3, r30, 0xb0
    li r4, 0x0
    li r5, 0x159
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
lbl_fn_8029B24C_0000167C:
    lwz r0, 0x114(r1)
    psq_l f31, 0x108(r1), 0, 0
    lfd f31, 0x100(r1)
    psq_l f30, 0xf8(r1), 0, 0
    lfd f30, 0xf0(r1)
    lwz r31, 0xec(r1)
    lwz r30, 0xe8(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_8029B59C(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    li r0, 0x2
    stw r31, 0x7c(r1)
    li r31, 0x0
    stw r30, 0x78(r1)
    mr r30, r3
    stw r0, 0x58c(r3)
    stw r31, 0x14b4(r3)
    stw r31, 0x14b8(r3)
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
    li r4, 0x3
    bl fn_8016E970
    lfs f0, lbl_80883BF0
    li r0, 0x1
    stw r0, 0x3fc(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80883BE8
    li r4, 0x0
    stfs f0, 0x2fc(r30)
    li r5, 0x1e1
    lfs f2, lbl_80883BF8
    li r6, 0x0
    stfs f0, 0x2e8(r30)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f2, 0x530(r30)
    addi r3, r30, 0x163c
    psq_l f1, 0x528(r30), 0, 0
    addi r10, r30, 0x1648
    stfs f2, 0x1644(r30)
    addi r5, r1, 0x14
    addi r6, r1, 0x8
    lfs f4, lbl_80883C3C
    stfs f2, 0x1650(r30)
    addi r4, r1, 0x20
    lfs f0, lbl_80883CF8
    lis r7, 0x2000
    psq_st f1, 0x0(r3), 0, 0
    li r8, 0x0
    li r9, 0x0
    psq_st f1, 0x0(r10), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    lwz r3, lbl_8087EE98
    psq_st f1, 0x0(r6), 0, 0
    lfs f5, 0x18(r1)
    lfs f3, 0xc(r1)
    fadds f4, f5, f4
    stw r31, 0x54(r1)
    fsubs f0, f3, f0
    stw r31, 0x58(r1)
    stw r31, 0x5c(r1)
    stw r31, 0x60(r1)
    stfs f2, 0x1c(r1)
    stfs f2, 0x10(r1)
    stfs f4, 0x18(r1)
    stfs f0, 0xc(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_8029B59C_000017F4
    addi r3, r1, 0x30
    lfs f2, 0x38(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r30, 0x1648
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x1650(r30)
lbl_fn_8029B59C_000017F4:
    lwz r0, 0x84(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_8029B704(void)
{
    nofralloc
    stwu r1, -0x1e0(r1)
    mflr r0
    stw r0, 0x1e4(r1)
    stw r31, 0x1dc(r1)
    stw r30, 0x1d8(r1)
    mr r30, r3
    stw r29, 0x1d4(r1)
    lwz r0, 0x14c8(r3)
    slwi r0, r0, 2
    add r4, r3, r0
    lwz r0, 0x14ec(r4)
    cmpwi r0, 0x0
    bne lbl_fn_8029B704_00001848
    li r3, 0x1
    b lbl_fn_8029B704_00001EB4
lbl_fn_8029B704_00001848:
    lwz r0, 0x1580(r3)
    cmpwi r0, 0x78
    blt lbl_fn_8029B704_0000185C
    li r3, 0x1
    b lbl_fn_8029B704_00001EB4
lbl_fn_8029B704_0000185C:
    cmpwi r0, 0x21
    blt lbl_fn_8029B704_00001E3C
    lfs f8, lbl_80883BE8
    addi r31, r1, 0x198
    lfs f0, lbl_80883BF0
    lfs f7, lbl_80883C7C
    stfs f8, 0x54(r1)
    stfs f8, 0x58(r1)
    stfs f7, 0x5c(r1)
    stfs f8, 0x1c4(r1)
    stfs f8, 0x1bc(r1)
    stfs f8, 0x1b8(r1)
    stfs f8, 0x1b4(r1)
    stfs f8, 0x1b0(r1)
    stfs f8, 0x1a8(r1)
    stfs f8, 0x1a4(r1)
    stfs f8, 0x1a0(r1)
    stfs f8, 0x19c(r1)
    stfs f0, 0x1c0(r1)
    stfs f0, 0x1ac(r1)
    stfs f0, 0x198(r1)
    lfs f1, 0x15a0(r3)
    fcmpu cr0, f8, f1
    beq lbl_fn_8029B704_0000190C
    addi r3, r1, 0xa8
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r31
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
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_8029B704_0000190C:
    lfs f0, lbl_80883BE8
    lfs f1, 0x159c(r30)
    fcmpu cr0, f0, f1
    beq lbl_fn_8029B704_0000196C
    addi r3, r1, 0x108
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r31
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
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_8029B704_0000196C:
    lfs f0, lbl_80883BE8
    lfs f1, 0x1598(r30)
    fcmpu cr0, f0, f1
    beq lbl_fn_8029B704_000019CC
    addi r3, r1, 0x168
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r31
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
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_8029B704_000019CC:
    addi r4, r1, 0x54
    addi r3, r1, 0x198
    mr r5, r4
    bl fn_805F93C0
    lwz r4, 0x1580(r30)
    lis r0, 0x4330
    stw r0, 0x1c8(r1)
    lis r3, lbl_807457F8@ha
    subi r0, r4, 0x21
    lfd f8, lbl_807457F8@l(r3)
    xoris r0, r0, 0x8000
    stw r0, 0x1cc(r1)
    lfs f0, 0x5c(r1)
    li r0, -0x1
    lfd f7, 0x1c8(r1)
    mr r4, r30
    lfs f10, 0x58(r1)
    addi r7, r1, 0x48
    fsubs f11, f7, f8
    lfs f9, 0x54(r1)
    lfs f8, 0x1594(r30)
    addi r8, r30, 0x534
    lfs f7, 0x1590(r30)
    li r9, 0x0
    fmuls f12, f0, f11
    lfs f0, 0x158c(r30)
    fmuls f10, f10, f11
    lwz r3, lbl_8087F048
    fmuls f9, f9, f11
    stfs f12, 0x34(r1)
    fadds f8, f8, f12
    stfs f9, 0x2c(r1)
    fadds f7, f7, f10
    lfs f1, lbl_80883BE8
    fadds f0, f0, f9
    stfs f8, 0x50(r1)
    stfs f0, 0x48(r1)
    li r10, 0x1e
    lfs f2, lbl_80883BF0
    stfs f7, 0x4c(r1)
    stw r0, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r0, 0x14c8(r30)
    stfs f10, 0x30(r1)
    slwi r0, r0, 2
    lwz r6, 0x1588(r30)
    add r5, r30, r0
    lwz r5, 0x14ec(r5)
    bl fn_800FAB80
    lwz r0, 0x15ac(r30)
    addi r4, r1, 0x48
    lwz r31, 0x15b0(r30)
    addi r5, r1, 0x3c
    psq_l f1, 0x0(r4), 0, 0
    lwz r3, 0x1580(r30)
    cmplw r0, r31
    lfs f2, 0x50(r1)
    addi r4, r3, 0x1
    stw r4, 0x38(r1)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x44(r1)
    bge lbl_fn_8029B704_00001AF4
    lwz r3, 0x15a8(r30)
    slwi r0, r0, 4
    add. r3, r3, r0
    beq lbl_fn_8029B704_00001AE4
    stw r4, 0x0(r3)
    frsp f2, f2
    psq_st f1, 0x4(r3), 0, 0
    stfs f2, 0xc(r3)
lbl_fn_8029B704_00001AE4:
    lwz r3, 0x15ac(r30)
    addi r0, r3, 0x1
    stw r0, 0x15ac(r30)
    b lbl_fn_8029B704_00001DF0
lbl_fn_8029B704_00001AF4:
    lis r3, 0x1000
    li r4, 0x1
    subi r0, r3, 0x1
    stw r4, 0x10(r1)
    subf r0, r31, r0
    cmplwi r0, 0x1
    bge lbl_fn_8029B704_00001B34
    lis r4, lbl_80745818@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80745818@l
    addi r3, r3, __files@l
    addi r4, r4, 0x261
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8029B704_00001B34:
    lis r3, 0x555
    addi r0, r3, 0x5555
    cmplw r31, r0
    bge lbl_fn_8029B704_00001B6C
    addi r4, r31, 0x1
    lis r3, 0xcccd
    slwi r0, r4, 2
    subf r0, r4, r0
    subi r3, r3, 0x3333
    mulhwu r0, r3, r0
    srwi r0, r0, 2
    stw r0, 0x18(r1)
    cmplwi r0, 0x1
    b lbl_fn_8029B704_00001B8C
lbl_fn_8029B704_00001B6C:
    lis r3, 0xaab
    subi r0, r3, 0x5556
    cmplw r31, r0
    bge lbl_fn_8029B704_00001B8C
    addi r0, r31, 0x1
    srwi r0, r0, 1
    stw r0, 0x14(r1)
    cmplwi r0, 0x1
lbl_fn_8029B704_00001B8C:
    lwz r4, 0x15ac(r30)
    li r5, 0x0
    lis r3, 0x1000
    lwz r31, 0x15b0(r30)
    subi r0, r3, 0x1
    addi r4, r4, 0x1
    subf r3, r31, r4
    addi r6, r30, 0x15b0
    subf r0, r31, r0
    stw r5, 0x60(r1)
    cmplw r3, r0
    stw r5, 0x64(r1)
    stw r5, 0x68(r1)
    stw r6, 0x6c(r1)
    stw r5, 0x70(r1)
    stw r3, 0x24(r1)
    ble lbl_fn_8029B704_00001BF4
    lis r4, lbl_80745818@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80745818@l
    addi r3, r3, __files@l
    addi r4, r4, 0x261
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8029B704_00001BF4:
    lis r3, 0x555
    addi r0, r3, 0x5555
    cmplw r31, r0
    bge lbl_fn_8029B704_00001C44
    addi r5, r31, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x24(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r4, r3, r4
    addi r3, r1, 0x1c
    srwi r4, r4, 2
    stw r4, 0x1c(r1)
    cmplw r4, r0
    bge lbl_fn_8029B704_00001C38
    addi r3, r1, 0x24
lbl_fn_8029B704_00001C38:
    lwz r0, 0x0(r3)
    add r31, r31, r0
    b lbl_fn_8029B704_00001C88
lbl_fn_8029B704_00001C44:
    lis r3, 0xaab
    subi r0, r3, 0x5556
    cmplw r31, r0
    bge lbl_fn_8029B704_00001C80
    addi r3, r31, 0x1
    lwz r0, 0x24(r1)
    srwi r3, r3, 1
    stw r3, 0x20(r1)
    cmplw r3, r0
    addi r3, r1, 0x20
    bge lbl_fn_8029B704_00001C74
    addi r3, r1, 0x24
lbl_fn_8029B704_00001C74:
    lwz r0, 0x0(r3)
    add r31, r31, r0
    b lbl_fn_8029B704_00001C88
lbl_fn_8029B704_00001C80:
    lis r3, 0x1000
    subi r31, r3, 0x1
lbl_fn_8029B704_00001C88:
    lis r3, 0x1000
    subi r0, r3, 0x1
    cmplw r31, r0
    ble lbl_fn_8029B704_00001CBC
    lis r4, lbl_80745818@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80745818@l
    addi r3, r3, __files@l
    addi r4, r4, 0x261
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8029B704_00001CBC:
    slwi r3, r31, 4
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_fn_8029B704_00001CF0
    lis r3, __files@ha
    lis r4, lbl_80785AA8@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80785AA8@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8029B704_00001CF0:
    lwz r5, 0x15ac(r30)
    addi r6, r1, 0x3c
    lwz r0, 0x64(r1)
    slwi r3, r5, 4
    stw r29, 0x60(r1)
    slwi r4, r0, 4
    lwz r0, 0x38(r1)
    add r3, r29, r3
    stw r31, 0x68(r1)
    add. r3, r4, r3
    stw r5, 0x70(r1)
    beq lbl_fn_8029B704_00001D34
    stw r0, 0x0(r3)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x4(r3), 0, 0
    lfs f2, 0x44(r1)
    stfs f2, 0xc(r3)
lbl_fn_8029B704_00001D34:
    lwz r4, 0x64(r1)
    lwz r0, 0x70(r1)
    addi r5, r4, 0x1
    lwz r3, 0x15ac(r30)
    lwz r7, 0x15a8(r30)
    slwi r0, r0, 4
    slwi r4, r3, 4
    lwz r3, 0x60(r1)
    stw r5, 0x64(r1)
    add r6, r7, r4
    add r5, r3, r0
    b lbl_fn_8029B704_00001DA0
lbl_fn_8029B704_00001D64:
    subic. r5, r5, 0x10
    subi r6, r6, 0x10
    beq lbl_fn_8029B704_00001D88
    lwz r0, 0x0(r6)
    stw r0, 0x0(r5)
    lfs f2, 0xc(r6)
    psq_l f1, 0x4(r6), 0, 0
    psq_st f1, 0x4(r5), 0, 0
    stfs f2, 0xc(r5)
lbl_fn_8029B704_00001D88:
    lwz r4, 0x70(r1)
    lwz r3, 0x64(r1)
    subi r0, r4, 0x1
    stw r0, 0x70(r1)
    addi r0, r3, 0x1
    stw r0, 0x64(r1)
lbl_fn_8029B704_00001DA0:
    cmplw r7, r6
    blt lbl_fn_8029B704_00001D64
    addic. r0, r1, 0x60
    lwz r0, 0x64(r1)
    lwz r7, 0x15b0(r30)
    li r6, 0x0
    lwz r5, 0x68(r1)
    lwz r3, 0x15a8(r30)
    lwz r4, 0x60(r1)
    stw r5, 0x15b0(r30)
    stw r7, 0x68(r1)
    stw r4, 0x15a8(r30)
    stw r3, 0x60(r1)
    stw r0, 0x15ac(r30)
    stw r6, 0x64(r1)
    beq lbl_fn_8029B704_00001DF0
    cmpwi r3, 0x0
    beq lbl_fn_8029B704_00001DF0
    stw r6, 0x64(r1)
    bl dtor_80084684
lbl_fn_8029B704_00001DF0:
    lwz r3, 0x1580(r30)
    slwi r0, r3, 30
    srwi r3, r3, 31
    subf r0, r3, r0
    rotlwi r0, r0, 2
    add. r0, r0, r3
    bne lbl_fn_8029B704_00001E3C
    lis r4, lbl_80745818@ha
    lfs f1, lbl_80883BF0
    addi r4, r4, lbl_80745818@l
    addi r3, r1, 0x28
    addi r4, r4, 0x30e
    addi r5, r1, 0x48
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x28
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_8029B704_00001E3C:
    lfs f7, lbl_80883BF4
    li r7, 0x0
    lfs f0, lbl_80883BF8
    li r6, 0x0
    li r3, 0x1
    b lbl_fn_8029B704_00001E98
lbl_fn_8029B704_00001E54:
    lwz r4, 0x15a8(r30)
    lwz r5, 0x1580(r30)
    lwzx r0, r4, r6
    cmpw r5, r0
    bne lbl_fn_8029B704_00001E90
    lwz r5, lbl_8087F430
    lwz r0, 0x96c(r5)
    srwi r4, r0, 31
    clrlwi r0, r0, 31
    xor r0, r0, r4
    subf r0, r4, r0
    stw r0, 0x96c(r5)
    stw r3, 0x970(r5)
    stfs f7, 0x974(r5)
    stfs f0, 0x978(r5)
lbl_fn_8029B704_00001E90:
    addi r6, r6, 0x10
    addi r7, r7, 0x1
lbl_fn_8029B704_00001E98:
    lwz r0, 0x15ac(r30)
    cmplw r7, r0
    blt lbl_fn_8029B704_00001E54
    lwz r4, 0x1580(r30)
    li r3, 0x0
    addi r0, r4, 0x1
    stw r0, 0x1580(r30)
lbl_fn_8029B704_00001EB4:
    lwz r0, 0x1e4(r1)
    lwz r31, 0x1dc(r1)
    lwz r30, 0x1d8(r1)
    lwz r29, 0x1d4(r1)
    mtlr r0
    addi r1, r1, 0x1e0
    blr
}
