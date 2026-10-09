#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_23(void);
extern void _savegpr_23(void);
extern void fn_8004ECC0(void);
extern void fn_8004ED34(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800EE360(void);
extern void fn_800F8548(void);
extern void fn_800F8C6C(void);
extern void fn_800FAB80(void);
extern void fn_800FBA9C(void);
extern void fn_800FBE70(void);
extern void fn_80107A68(void);
extern void fn_80144710(void);
extern void fn_80158E1C(void);
extern void fn_8015AF40(void);
extern void fn_8015B238(void);
extern void fn_8015B520(void);
extern void fn_8016E970(void);
extern void fn_80219E6C(void);
extern void fn_80239DAC(void);
extern void fn_8032A3D4(void);
extern void fn_80370A78(void);
extern void fn_80370AE4(void);
extern void fn_805F8E70(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9940(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);

/* External data declarations */
extern u8 lbl_80749B78[];
extern u8 lbl_80749B80[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F8A0;
extern u32 lbl_80884F10;
extern u32 lbl_80884F1C;
extern u32 lbl_80884F2C;
extern u32 lbl_80884F30;
extern u32 lbl_80884F34;
extern u32 lbl_80884F38;
extern u32 lbl_80884F3C;
extern u32 lbl_80884F40;
extern u32 lbl_80884F50;
extern u32 lbl_80884F60;
extern u32 lbl_80884F6C;
extern u32 lbl_80884F70;
extern u32 lbl_80884F90;
extern u32 lbl_80884F94;
extern u32 lbl_80884F9C;
extern u32 lbl_80884FC4;
extern u32 lbl_80884FD4;
extern u32 lbl_80884FEC;
extern u32 lbl_80884FF0;
extern u32 lbl_80885004;
extern u32 lbl_80885018;
extern u32 lbl_8088501C;
extern u32 lbl_80885020;
extern u32 lbl_80885024;
extern u32 lbl_80885028;
extern u32 lbl_8088502C;
extern u32 lbl_80885030;

/* Function declarations */
void fn_803288C4(void);
void fn_803289EC(void);
void fn_80328B74(void);
void fn_80328C6C(void);
void fn_8032932C(void);
void fn_8032943C(void);
void fn_80329744(void);
void fn_80329A20(void);
void fn_80329C7C(void);
void fn_80329CFC(void);
void fn_80329D7C(void);
void fn_80329E34(void);
void fn_80329ED8(void);

asm void fn_803288C4(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    stw r31, 0x1c(r1)
    mr r31, r3
    lwz r0, 0x14c4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_803288C4_000000BC
    lfs f1, 0x2e4(r3)
    lfs f0, lbl_80884F60
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_803288C4_0000010C
    li r0, 0x1
    stw r0, 0x14c4(r3)
    li r3, 0x675
    bl fn_80219E6C
    li r0, -0x1
    stw r0, 0x8(r1)
    mr r5, r3
    lfs f1, lbl_80884F10
    stw r0, 0xc(r1)
    mr r4, r31
    lfs f2, lbl_80884F1C
    addi r7, r31, 0x528
    lwz r3, lbl_8087F048
    addi r8, r31, 0x534
    lwz r6, 0x590(r31)
    li r9, 0x0
    li r10, 0x1e
    bl fn_800FAB80
    lwz r5, lbl_8087F430
    li r0, 0xa
    lfs f1, lbl_80885018
    lwz r3, 0x96c(r5)
    lfs f0, lbl_80884F30
    srwi r4, r3, 31
    clrlwi r3, r3, 31
    xor r3, r3, r4
    subf r3, r4, r3
    stw r3, 0x96c(r5)
    stw r0, 0x970(r5)
    stfs f1, 0x974(r5)
    stfs f0, 0x978(r5)
    b lbl_fn_803288C4_0000010C
lbl_fn_803288C4_000000BC:
    cmpwi r0, 0x1
    bne lbl_fn_803288C4_0000010C
    lfs f31, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_803288C4_0000010C
    li r0, 0x0
    stw r0, 0x14c4(r31)
    stw r0, 0x14c8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0x6
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
lbl_fn_803288C4_0000010C:
    lwz r0, 0x34(r1)
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_803289EC(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    lfs f0, lbl_80885004
    stw r0, 0x84(r1)
    stw r31, 0x7c(r1)
    stw r30, 0x78(r1)
    mr r30, r3
    lfs f3, 0x2e4(r3)
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_803289EC_00000298
    lwz r0, 0x15e0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_803289EC_00000178
    li r0, 0x1
    stw r0, 0x15e0(r3)
    li r4, 0x5a
    li r5, 0x1
    lwz r3, lbl_8087F430
    bl fn_80370AE4
lbl_fn_803289EC_00000178:
    li r31, 0x0
    stw r31, 0x14c4(r30)
    stw r31, 0x14c8(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    li r0, 0xc
    mr r3, r30
    li r4, 0x3
    stw r0, 0x58c(r30)
    bl fn_8016E970
    lfs f1, lbl_80884F1C
    li r0, 0x1
    stw r0, 0x3fc(r30)
    addi r3, r30, 0xb0
    lfs f2, lbl_80884F50
    li r4, 0x0
    stfs f1, 0x2fc(r30)
    li r5, 0x140
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80884F9C
    addi r5, r30, 0x14dc
    stfs f0, 0x2e8(r30)
    addi r4, r1, 0x20
    lfs f6, lbl_80884F10
    addi r6, r1, 0x8
    stw r31, 0x54(r1)
    addi r8, r30, 0x5b8
    lfs f5, lbl_80884FEC
    lis r7, 0x8000
    stw r31, 0x58(r1)
    li r9, 0x0
    stw r31, 0x5c(r1)
    stw r31, 0x60(r1)
    lfs f4, 0x14e4(r30)
    lfs f3, 0x14e0(r30)
    lfs f0, 0x14dc(r30)
    fadds f4, f6, f4
    psq_l f1, 0x0(r5), 0, 0
    fadds f3, f5, f3
    lfs f2, 0x14e4(r30)
    fadds f0, f6, f0
    psq_st f1, 0x528(r30), 0, 0
    stfs f2, 0x530(r30)
    stfs f6, 0x14(r1)
    lwz r3, lbl_8087EE98
    stfs f5, 0x18(r1)
    stfs f6, 0x1c(r1)
    stfs f0, 0x8(r1)
    stfs f3, 0xc(r1)
    stfs f4, 0x10(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_803289EC_00000270
    addi r3, r1, 0x30
    lfs f2, 0x38(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x528(r30), 0, 0
    stfs f2, 0x530(r30)
lbl_fn_803289EC_00000270:
    addi r3, r30, 0x14e8
    lfs f2, 0x14f0(r30)
    psq_l f1, 0x0(r3), 0, 0
    mr r4, r30
    psq_st f1, 0x534(r30), 0, 0
    li r5, 0x65
    li r6, 0x1
    stfs f2, 0x53c(r30)
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
lbl_fn_803289EC_00000298:
    lwz r0, 0x84(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_80328B74(void)
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
    bne lbl_fn_80328B74_0000038C
    lwz r0, 0x14cc(r31)
    cmpwi r0, 0x1
    bne lbl_fn_80328B74_00000324
    li r0, 0x0
    stw r0, 0x14c4(r31)
    stw r0, 0x14c8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0x6
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    b lbl_fn_80328B74_0000038C
lbl_fn_80328B74_00000324:
    li r0, 0x0
    stw r0, 0x14c4(r31)
    stw r0, 0x14c8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0x8
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f0, lbl_80884F1C
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80884F10
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x156
    lfs f2, lbl_80884F50
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80884F9C
    stfs f0, 0x2e8(r31)
lbl_fn_80328B74_0000038C:
    lwz r0, 0x24(r1)
    psq_l f31, 0x18(r1), 0, 0
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80328C6C(void)
{
    nofralloc
    stwu r1, -0x140(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x144(r1)
    stfd f31, 0x130(r1)
    psq_st f31, 0x138(r1), 0, 0
    stfd f30, 0x120(r1)
    psq_st f30, 0x128(r1), 0, 0
    stw r31, 0x11c(r1)
    mr r31, r3
    stw r30, 0x118(r1)
    lfs f30, 0x2e4(r3)
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f30, f1
    cror eq, gt, eq
    bne lbl_fn_80328C6C_0000041C
    li r0, 0x0
    stw r0, 0x14c4(r31)
    stw r0, 0x14c8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0x6
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    b lbl_fn_80328C6C_00000A40
lbl_fn_80328C6C_0000041C:
    lwz r4, 0x14c8(r31)
    lis r0, 0x4330
    stw r0, 0x108(r1)
    lis r3, lbl_80749B80@ha
    xoris r0, r4, 0x8000
    lfd f5, lbl_80749B80@l(r3)
    stw r0, 0x10c(r1)
    addi r5, r1, 0x80
    lfs f3, lbl_80884FF0
    lfd f4, 0x108(r1)
    lfs f0, lbl_80884F10
    fsubs f4, f4, f5
    fmuls f3, f3, f4
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_80328C6C_00000474
    addi r3, r31, 0x152c
    lfs f2, 0x1534(r31)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x88(r1)
    b lbl_fn_80328C6C_00000600
lbl_fn_80328C6C_00000474:
    lfs f0, lbl_80884F1C
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_80328C6C_0000049C
    addi r3, r31, 0x1538
    lfs f2, 0x1540(r31)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x88(r1)
    b lbl_fn_80328C6C_00000600
lbl_fn_80328C6C_0000049C:
    lwz r7, 0x1524(r31)
    li r6, 0x0
    lfs f0, 0x1528(r31)
    li r3, 0x0
    subic. r0, r7, 0x1
    fmuls f3, f0, f3
    mtctr r0
    ble lbl_fn_80328C6C_000005EC
lbl_fn_80328C6C_000004BC:
    lwz r4, 0x1568(r31)
    lfsx f0, r4, r3
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_80328C6C_000005DC
    lfs f8, lbl_80884F10
    fcmpu cr0, f8, f3
    bne lbl_fn_80328C6C_000004E0
    b lbl_fn_80328C6C_000004E4
lbl_fn_80328C6C_000004E0:
    fdivs f8, f3, f0
lbl_fn_80328C6C_000004E4:
    cmpwi r6, 0x0
    bge lbl_fn_80328C6C_00000504
    addi r3, r31, 0x152c
    lfs f2, 0x1534(r31)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x88(r1)
    b lbl_fn_80328C6C_00000600
lbl_fn_80328C6C_00000504:
    subi r0, r7, 0x1
    cmpw r6, r0
    blt lbl_fn_80328C6C_00000528
    addi r3, r31, 0x1538
    lfs f2, 0x1540(r31)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x88(r1)
    b lbl_fn_80328C6C_00000600
lbl_fn_80328C6C_00000528:
    cmpwi r7, 0x2
    bge lbl_fn_80328C6C_0000054C
    lis r3, lbl_807C7030@ha
    addi r3, r3, lbl_807C7030@l
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x8(r3)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x88(r1)
    b lbl_fn_80328C6C_00000600
lbl_fn_80328C6C_0000054C:
    lwz r0, 0x1544(r31)
    slwi r7, r6, 4
    lwz r3, 0x1550(r31)
    addi r4, r1, 0x5c
    add r6, r0, r7
    lwz r0, 0x155c(r31)
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
    stfs f6, 0x5c(r1)
    fmadds f3, f8, f3, f0
    lfs f0, 0x0(r7)
    stfs f4, 0x60(r1)
    fmadds f2, f8, f3, f0
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x64(r1)
    stfs f2, 0x88(r1)
    b lbl_fn_80328C6C_00000600
lbl_fn_80328C6C_000005DC:
    fsubs f3, f3, f0
    addi r6, r6, 0x1
    addi r3, r3, 0x4
    bdnz lbl_fn_80328C6C_000004BC
lbl_fn_80328C6C_000005EC:
    addi r3, r31, 0x152c
    lfs f2, 0x1534(r31)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x88(r1)
lbl_fn_80328C6C_00000600:
    lwz r3, 0x14c8(r31)
    lis r0, 0x4330
    lis r4, lbl_80749B80@ha
    psq_l f1, 0x0(r5), 0, 0
    subi r3, r3, 0x1
    lfs f2, 0x8(r5)
    xoris r3, r3, 0x8000
    stw r3, 0x10c(r1)
    lfd f5, lbl_80749B80@l(r4)
    addi r5, r1, 0x8c
    stw r0, 0x108(r1)
    lfs f3, lbl_80884FF0
    lfd f4, 0x108(r1)
    lfs f0, lbl_80884F10
    fsubs f4, f4, f5
    psq_st f1, 0x528(r31), 0, 0
    stfs f2, 0x530(r31)
    fmuls f3, f3, f4
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_80328C6C_0000066C
    addi r3, r31, 0x152c
    lfs f2, 0x1534(r31)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x94(r1)
    b lbl_fn_80328C6C_000007F8
lbl_fn_80328C6C_0000066C:
    lfs f0, lbl_80884F1C
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_80328C6C_00000694
    addi r3, r31, 0x1538
    lfs f2, 0x1540(r31)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x94(r1)
    b lbl_fn_80328C6C_000007F8
lbl_fn_80328C6C_00000694:
    lwz r7, 0x1524(r31)
    li r6, 0x0
    lfs f0, 0x1528(r31)
    li r3, 0x0
    subic. r0, r7, 0x1
    fmuls f3, f0, f3
    mtctr r0
    ble lbl_fn_80328C6C_000007E4
lbl_fn_80328C6C_000006B4:
    lwz r4, 0x1568(r31)
    lfsx f0, r4, r3
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_80328C6C_000007D4
    lfs f8, lbl_80884F10
    fcmpu cr0, f8, f3
    bne lbl_fn_80328C6C_000006D8
    b lbl_fn_80328C6C_000006DC
lbl_fn_80328C6C_000006D8:
    fdivs f8, f3, f0
lbl_fn_80328C6C_000006DC:
    cmpwi r6, 0x0
    bge lbl_fn_80328C6C_000006FC
    addi r3, r31, 0x152c
    lfs f2, 0x1534(r31)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x94(r1)
    b lbl_fn_80328C6C_000007F8
lbl_fn_80328C6C_000006FC:
    subi r0, r7, 0x1
    cmpw r6, r0
    blt lbl_fn_80328C6C_00000720
    addi r3, r31, 0x1538
    lfs f2, 0x1540(r31)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x94(r1)
    b lbl_fn_80328C6C_000007F8
lbl_fn_80328C6C_00000720:
    cmpwi r7, 0x2
    bge lbl_fn_80328C6C_00000744
    lis r3, lbl_807C7030@ha
    addi r3, r3, lbl_807C7030@l
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x8(r3)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x94(r1)
    b lbl_fn_80328C6C_000007F8
lbl_fn_80328C6C_00000744:
    lwz r0, 0x1544(r31)
    slwi r7, r6, 4
    lwz r3, 0x1550(r31)
    addi r4, r1, 0x50
    add r6, r0, r7
    lwz r0, 0x155c(r31)
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
    stfs f6, 0x50(r1)
    fmadds f3, f8, f3, f0
    lfs f0, 0x0(r7)
    stfs f4, 0x54(r1)
    fmadds f2, f8, f3, f0
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x58(r1)
    stfs f2, 0x94(r1)
    b lbl_fn_80328C6C_000007F8
lbl_fn_80328C6C_000007D4:
    fsubs f3, f3, f0
    addi r6, r6, 0x1
    addi r3, r3, 0x4
    bdnz lbl_fn_80328C6C_000006B4
lbl_fn_80328C6C_000007E4:
    addi r3, r31, 0x152c
    lfs f2, 0x1534(r31)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x94(r1)
lbl_fn_80328C6C_000007F8:
    lfs f3, 0x530(r31)
    addi r3, r1, 0x68
    lfs f0, 0x94(r1)
    addi r30, r1, 0x74
    lfs f5, 0x52c(r31)
    fsubs f2, f3, f0
    lfs f4, 0x90(r1)
    lfs f3, 0x528(r31)
    fsubs f4, f5, f4
    lfs f0, 0x8c(r1)
    stfs f2, 0x70(r1)
    fsubs f3, f3, f0
    lfs f0, lbl_80884F38
    stfs f4, 0x6c(r1)
    frsp f4, f2
    stfs f3, 0x68(r1)
    fabs f3, f4
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0x7c(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_80328C6C_00000878
    lfs f3, 0x74(r1)
    lfs f0, lbl_80884F10
    fcmpo cr0, f3, f0
    ble lbl_fn_80328C6C_0000086C
    lfs f0, lbl_80884F3C
    b lbl_fn_80328C6C_00000870
lbl_fn_80328C6C_0000086C:
    lfs f0, lbl_80884F40
lbl_fn_80328C6C_00000870:
    stfs f0, 0x48(r1)
    b lbl_fn_80328C6C_0000088C
lbl_fn_80328C6C_00000878:
    fmr f2, f4
    lfs f1, 0x74(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_80328C6C_0000088C:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x98
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80884F10
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
    lfs f0, lbl_80884F1C
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
    lfs f0, lbl_80884F38
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80328C6C_000009A8
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80884F10
    fcmpo cr0, f3, f0
    ble lbl_fn_80328C6C_00000998
    lfs f0, lbl_80884F3C
    b lbl_fn_80328C6C_0000099C
lbl_fn_80328C6C_00000998:
    lfs f0, lbl_80884F40
lbl_fn_80328C6C_0000099C:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_80328C6C_000009BC
lbl_fn_80328C6C_000009A8:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_80328C6C_000009BC:
    lfs f3, lbl_80884F10
    addi r3, r1, 0x44
    psq_l f1, 0x0(r3), 0, 0
    fmr f2, f3
    lfs f4, 0x2e4(r31)
    lfs f0, lbl_80884FC4
    stfs f2, 0x7c(r1)
    frsp f2, f2
    fcmpo cr0, f4, f0
    stfs f3, 0x4c(r1)
    psq_st f1, 0x0(r30), 0, 0
    psq_st f1, 0x534(r31), 0, 0
    stfs f2, 0x53c(r31)
    cror eq, gt, eq
    bne lbl_fn_80328C6C_00000A40
    lfs f0, lbl_8088501C
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_80328C6C_00000A40
    mr r3, r31
    bl fn_80144710
    li r3, 0x674
    bl fn_80219E6C
    mr r7, r3
    lwz r3, lbl_8087F048
    lwz r8, 0x15f8(r31)
    mr r6, r31
    lfs f1, lbl_80884F10
    li r4, 0x0
    li r5, 0x0
    li r9, 0x1e
    li r10, -0x1
    bl fn_800F8C6C
lbl_fn_80328C6C_00000A40:
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

asm void fn_8032932C(void)
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
    bne lbl_fn_8032932C_00000AD0
    li r0, 0x0
    stw r0, 0x14c4(r31)
    stw r0, 0x14c8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0x6
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    b lbl_fn_8032932C_00000B5C
lbl_fn_8032932C_00000AD0:
    lfs f2, 0x528(r31)
    lfs f1, 0x150c(r31)
    lfs f3, 0x52c(r31)
    fadds f4, f2, f1
    lfs f0, 0x1510(r31)
    lfs f2, 0x530(r31)
    fadds f3, f3, f0
    lfs f1, 0x1514(r31)
    lfs f5, 0x2e4(r31)
    lfs f0, lbl_80884FC4
    fadds f1, f2, f1
    stfs f4, 0x528(r31)
    fcmpo cr0, f5, f0
    stfs f3, 0x52c(r31)
    stfs f1, 0x530(r31)
    cror eq, gt, eq
    bne lbl_fn_8032932C_00000B5C
    lfs f0, lbl_8088501C
    fcmpo cr0, f5, f0
    cror eq, lt, eq
    bne lbl_fn_8032932C_00000B5C
    mr r3, r31
    bl fn_80144710
    li r3, 0x674
    bl fn_80219E6C
    mr r7, r3
    lwz r3, lbl_8087F048
    lwz r8, 0x590(r31)
    mr r6, r31
    lfs f1, lbl_80884F10
    li r4, 0x0
    li r5, 0x0
    li r9, 0x1e
    li r10, -0x1
    bl fn_800F8C6C
lbl_fn_8032932C_00000B5C:
    lwz r0, 0x24(r1)
    psq_l f31, 0x18(r1), 0, 0
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8032943C(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stw r31, 0x6c(r1)
    stw r30, 0x68(r1)
    mr r30, r3
    lwz r0, 0x14c4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8032943C_00000D28
    lfs f3, 0x2e4(r3)
    lfs f0, lbl_80884FD4
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_8032943C_00000CCC
    lfs f3, lbl_80884F1C
    li r31, 0x1
    lfs f0, lbl_80884F90
    li r4, 0x0
    stw r31, 0x3fc(r3)
    li r5, 0x20
    lfs f1, lbl_80884F10
    li r6, 0x1
    stfs f3, 0x2fc(r3)
    li r7, 0x1
    lfs f2, lbl_80884F50
    li r8, 0x1
    stfs f0, 0x2e8(r3)
    addi r3, r3, 0xb0
    bl fn_80097C08
    lfs f5, 0x1508(r30)
    addi r4, r30, 0x1518
    lfs f4, 0x530(r30)
    addi r5, r1, 0x14
    lfs f3, 0x1504(r30)
    addi r3, r1, 0x20
    fsubs f4, f5, f4
    lfs f0, 0x52c(r30)
    psq_l f1, 0x0(r4), 0, 0
    mr r4, r3
    fsubs f5, f3, f0
    lfs f3, 0x1500(r30)
    lfs f0, 0x528(r30)
    lfs f2, 0x1520(r30)
    fsubs f0, f3, f0
    stfs f2, 0x53c(r30)
    fmr f2, f4
    psq_st f1, 0x534(r30), 0, 0
    stfs f5, 0x18(r1)
    stfs f0, 0x14(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f4, 0x1c(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x28(r1)
    bl fn_805F98D0
    lfs f0, 0x28(r1)
    addi r6, r1, 0x2c
    lfs f4, lbl_80885020
    addi r5, r30, 0x150c
    lfs f3, 0x24(r1)
    addi r3, r30, 0xb0
    fmuls f2, f0, f4
    lfs f0, 0x20(r1)
    fmuls f3, f3, f4
    li r4, 0x0
    fmuls f0, f0, f4
    stfs f2, 0x34(r1)
    stfs f0, 0x2c(r1)
    stfs f3, 0x30(r1)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x1514(r30)
    bl fn_80097D7C
    lfs f0, lbl_80884F1C
    lfs f4, 0x150c(r30)
    fdivs f5, f0, f1
    lfs f3, 0x1510(r30)
    lfs f0, 0x1514(r30)
    stw r31, 0x14c4(r30)
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    fmuls f0, f0, f5
    stfs f4, 0x150c(r30)
    stfs f3, 0x1510(r30)
    stfs f0, 0x1514(r30)
    b lbl_fn_8032943C_00000E68
lbl_fn_8032943C_00000CCC:
    lfs f3, 0x151c(r3)
    lis r4, lbl_80749B78@ha
    lfs f0, 0x538(r3)
    lfd f2, lbl_80749B78@l(r4)
    fsubs f1, f3, f0
    bl fn_8068AEA8
    frsp f4, f1
    lfs f0, lbl_80884F34
    fcmpo cr0, f4, f0
    ble lbl_fn_8032943C_00000CFC
    lfs f0, lbl_80884F6C
    fsubs f4, f4, f0
lbl_fn_8032943C_00000CFC:
    lfs f0, lbl_80884F70
    fcmpo cr0, f4, f0
    bge lbl_fn_8032943C_00000D10
    lfs f0, lbl_80884F6C
    fadds f4, f4, f0
lbl_fn_8032943C_00000D10:
    lfs f3, lbl_80884F50
    lfs f0, 0x538(r30)
    fmuls f3, f4, f3
    fadds f0, f0, f3
    stfs f0, 0x538(r30)
    b lbl_fn_8032943C_00000E68
lbl_fn_8032943C_00000D28:
    lfs f3, 0x530(r3)
    lfs f0, 0x1508(r3)
    lfs f5, 0x52c(r3)
    fsubs f6, f3, f0
    lfs f4, 0x1504(r3)
    lfs f3, 0x528(r3)
    lfs f0, 0x1500(r3)
    fsubs f4, f5, f4
    addi r3, r1, 0x8
    fsubs f0, f3, f0
    stfs f4, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f6, 0x10(r1)
    bl fn_805F9940
    lfs f0, lbl_80884F30
    fcmpo cr0, f1, f0
    bge lbl_fn_8032943C_00000D9C
    li r0, 0x0
    stw r0, 0x14c4(r30)
    stw r0, 0x14c8(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    li r0, 0x6
    mr r3, r30
    li r4, 0x3
    stw r0, 0x58c(r30)
    bl fn_8016E970
    b lbl_fn_8032943C_00000E68
lbl_fn_8032943C_00000D9C:
    lfs f3, 0x528(r30)
    mr r3, r30
    lfs f0, 0x150c(r30)
    lfs f5, 0x52c(r30)
    fadds f6, f3, f0
    lfs f4, 0x1510(r30)
    lfs f3, 0x530(r30)
    lfs f0, 0x1514(r30)
    fadds f4, f5, f4
    stfs f6, 0x528(r30)
    fadds f0, f3, f0
    stfs f4, 0x52c(r30)
    stfs f0, 0x530(r30)
    bl fn_80144710
    li r3, 0x674
    bl fn_80219E6C
    mr r7, r3
    lwz r8, 0x590(r30)
    lwz r3, lbl_8087F048
    mr r6, r30
    lfs f1, lbl_80884F10
    li r4, 0x0
    li r5, 0x0
    li r9, 0x1e
    li r10, -0x1
    bl fn_800F8C6C
    lfs f2, 0x530(r30)
    addi r5, r1, 0x44
    psq_l f1, 0x528(r30), 0, 0
    addi r6, r1, 0x38
    psq_st f1, 0x0(r5), 0, 0
    addi r4, r1, 0x50
    lfs f4, lbl_80885024
    lis r7, 0x8000
    psq_st f1, 0x0(r6), 0, 0
    li r8, 0x0
    lfs f3, 0x48(r1)
    li r9, 0x0
    lfs f0, 0x3c(r1)
    fadds f3, f3, f4
    stfs f2, 0x4c(r1)
    fsubs f0, f0, f4
    lwz r3, lbl_8087EE98
    stfs f3, 0x48(r1)
    stfs f2, 0x40(r1)
    stfs f0, 0x3c(r1)
    bl fn_8004ECC0
    cmpwi r3, 0x0
    beq lbl_fn_8032943C_00000E68
    lfs f0, 0x54(r1)
    stfs f0, 0x52c(r30)
lbl_fn_8032943C_00000E68:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_80329744(void)
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
    bne lbl_fn_80329744_00000F78
    lwz r3, 0x1598(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80329744_00000F48
    addi r4, r30, 0x159c
    bl fn_8015AF40
    li r31, 0x0
    stw r31, 0x14c4(r30)
    stw r31, 0x14c8(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    li r0, 0x11
    mr r3, r30
    li r4, 0x3
    stw r0, 0x58c(r30)
    bl fn_8016E970
    lfs f0, lbl_80884F1C
    li r0, 0x1
    stw r0, 0x3fc(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80884F10
    li r4, 0x0
    stfs f0, 0x2fc(r30)
    li r5, 0x146
    lfs f2, lbl_80884F50
    li r6, 0x1
    stfs f0, 0x2e8(r30)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r3, 0x1598(r30)
    addi r4, r30, 0x159c
    bl fn_8015AF40
    stw r31, 0x15cc(r30)
    b lbl_fn_80329744_0000113C
lbl_fn_80329744_00000F48:
    li r0, 0x0
    stw r0, 0x14c4(r30)
    stw r0, 0x14c8(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    li r0, 0x6
    mr r3, r30
    li r4, 0x3
    stw r0, 0x58c(r30)
    bl fn_8016E970
    b lbl_fn_80329744_0000113C
lbl_fn_80329744_00000F78:
    addi r3, r30, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    lfs f0, lbl_80885004
    lfs f3, 0x2e4(r30)
    fsubs f5, f1, f0
    fcmpo cr0, f3, f5
    cror eq, lt, eq
    bne lbl_fn_80329744_0000106C
    lfs f0, lbl_80885028
    lfs f4, lbl_80884F1C
    fsubs f3, f3, f0
    fsubs f0, f5, f0
    fdivs f0, f3, f0
    fcmpo cr0, f4, f0
    bge lbl_fn_80329744_00000FBC
    b lbl_fn_80329744_00000FC0
lbl_fn_80329744_00000FBC:
    fmr f4, f0
lbl_fn_80329744_00000FC0:
    lfs f9, lbl_80884F10
    fcmpo cr0, f9, f4
    ble lbl_fn_80329744_00000FD0
    b lbl_fn_80329744_00000FF8
lbl_fn_80329744_00000FD0:
    lfs f3, lbl_80885028
    lfs f4, 0x2e4(r30)
    fsubs f0, f5, f3
    lfs f9, lbl_80884F1C
    fsubs f3, f4, f3
    fdivs f0, f3, f0
    fcmpo cr0, f9, f0
    bge lbl_fn_80329744_00000FF4
    b lbl_fn_80329744_00000FF8
lbl_fn_80329744_00000FF4:
    fmr f9, f0
lbl_fn_80329744_00000FF8:
    lfs f3, 0x1588(r30)
    addi r3, r1, 0x20
    lfs f5, 0x157c(r30)
    lfs f0, 0x1584(r30)
    fsubs f8, f3, f5
    lfs f4, 0x1578(r30)
    lfs f3, 0x1580(r30)
    fsubs f6, f0, f4
    lfs f0, 0x1574(r30)
    fmuls f7, f8, f9
    fsubs f3, f3, f0
    stfs f6, 0x18(r1)
    fmuls f6, f6, f9
    fadds f2, f7, f5
    stfs f3, 0x14(r1)
    fmuls f5, f3, f9
    fadds f3, f6, f4
    stfs f8, 0x1c(r1)
    fadds f0, f5, f0
    stfs f3, 0x24(r1)
    stfs f0, 0x20(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f5, 0x8(r1)
    stfs f6, 0xc(r1)
    stfs f7, 0x10(r1)
    stfs f2, 0x28(r1)
    psq_st f1, 0x528(r30), 0, 0
    stfs f2, 0x530(r30)
    b lbl_fn_80329744_0000113C
lbl_fn_80329744_0000106C:
    lwz r0, 0x14c4(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80329744_00001084
    li r0, 0x1
    stw r0, 0x14c4(r30)
    b lbl_fn_80329744_0000113C
lbl_fn_80329744_00001084:
    lwz r3, 0x1598(r30)
    lfs f0, lbl_80884F1C
    cmpwi r3, 0x0
    stfs f0, 0x2e8(r30)
    beq lbl_fn_80329744_0000113C
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_80329744_0000113C
    lwz r0, 0x560(r3)
    cmpwi r0, 0x6d
    bne lbl_fn_80329744_000010C8
    lfs f0, lbl_80884F2C
    fcmpo cr0, f3, f0
    bge lbl_fn_80329744_0000113C
    lfs f0, lbl_8088502C
    stfs f0, 0x2e8(r30)
    b lbl_fn_80329744_0000113C
lbl_fn_80329744_000010C8:
    cmpwi r0, 0xa
    bne lbl_fn_80329744_0000113C
    li r31, 0x0
    stw r31, 0x14c4(r30)
    stw r31, 0x14c8(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    li r0, 0x12
    mr r3, r30
    li r4, 0x3
    stw r0, 0x58c(r30)
    bl fn_8016E970
    lfs f0, lbl_80884F1C
    li r0, 0x1
    stw r0, 0x3fc(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80884F10
    li r4, 0x0
    stfs f0, 0x2fc(r30)
    li r5, 0x148
    lfs f2, lbl_80884F50
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80884F94
    stfs f0, 0x2e8(r30)
    stw r31, 0x1598(r30)
lbl_fn_80329744_0000113C:
    lwz r0, 0x54(r1)
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80329A20(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    lwz r4, 0x1598(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80329A20_00001198
    lwz r0, 0x55c(r4)
    cmpwi r0, 0x6
    bne lbl_fn_80329A20_00001198
    lwz r0, 0x560(r4)
    cmpwi r0, 0x6e
    beq lbl_fn_80329A20_000012D0
lbl_fn_80329A20_00001198:
    lwz r0, 0x55c(r4)
    li r30, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_80329A20_000011B8
    lwz r0, 0x560(r4)
    cmpwi r0, 0xa
    bne lbl_fn_80329A20_000011B8
    li r30, 0x1
lbl_fn_80329A20_000011B8:
    li r0, 0x0
    stw r0, 0x14c4(r3)
    stw r0, 0x14c8(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0x12
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f0, lbl_80884F1C
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80884F10
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x148
    lfs f2, lbl_80884F50
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    cmpwi r30, 0x0
    beq lbl_fn_80329A20_00001228
    lfs f0, lbl_80884F94
    b lbl_fn_80329A20_0000122C
lbl_fn_80329A20_00001228:
    lfs f0, lbl_80884F1C
lbl_fn_80329A20_0000122C:
    stfs f0, 0x2e8(r31)
    li r5, 0x0
    lwz r3, 0x1598(r31)
    li r4, 0x0
    li r6, 0x0
    lwz r7, 0x38(r3)
    rlwinm r0, r7, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80329A20_00001260
    clrlwi r0, r7, 31
    cmplwi r0, 0x1
    beq lbl_fn_80329A20_00001260
    li r6, 0x1
lbl_fn_80329A20_00001260:
    cmpwi r6, 0x0
    beq lbl_fn_80329A20_0000127C
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_80329A20_0000127C
    li r4, 0x1
lbl_fn_80329A20_0000127C:
    cmpwi r4, 0x0
    beq lbl_fn_80329A20_000012B0
    lwz r0, 0x55c(r3)
    li r4, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_80329A20_000012A4
    lwz r0, 0x560(r3)
    cmpwi r0, 0x1c
    bne lbl_fn_80329A20_000012A4
    li r4, 0x1
lbl_fn_80329A20_000012A4:
    cmpwi r4, 0x0
    bne lbl_fn_80329A20_000012B0
    li r5, 0x1
lbl_fn_80329A20_000012B0:
    cmpwi r5, 0x0
    beq lbl_fn_80329A20_000012C4
    cmpwi r30, 0x0
    bne lbl_fn_80329A20_000012C4
    bl fn_8015B238
lbl_fn_80329A20_000012C4:
    li r0, 0x0
    stw r0, 0x1598(r31)
    b lbl_fn_80329A20_000013A0
lbl_fn_80329A20_000012D0:
    lwz r0, 0x2dc(r4)
    cmpwi r0, 0x21d
    bne lbl_fn_80329A20_0000135C
    lwz r0, 0x14c8(r3)
    cmpwi r0, 0x5a
    ble lbl_fn_80329A20_0000135C
    li r30, 0x0
    stw r30, 0x14c4(r3)
    stw r30, 0x14c8(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0x13
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f0, lbl_80884F1C
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80884F10
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x147
    lfs f2, lbl_80884F50
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r3, 0x1598(r31)
    bl fn_8015B520
    stw r30, 0x1598(r31)
    b lbl_fn_80329A20_000013A0
lbl_fn_80329A20_0000135C:
    lwz r0, 0x15e8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80329A20_000013A0
    lwz r0, 0x14c8(r3)
    cmpwi r0, 0xa
    bne lbl_fn_80329A20_000013A0
    lwz r3, lbl_8087F430
    li r4, 0x5b
    bl fn_80370A78
    cmpwi r3, 0x1
    bge lbl_fn_80329A20_00001398
    lwz r3, lbl_8087F430
    li r4, 0x5b
    li r5, 0x1
    bl fn_80370AE4
lbl_fn_80329A20_00001398:
    li r0, 0x1
    stw r0, 0x15e8(r31)
lbl_fn_80329A20_000013A0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80329C7C(void)
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
    bne lbl_fn_80329C7C_0000141C
    li r0, 0x0
    stw r0, 0x14c4(r31)
    stw r0, 0x14c8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0x6
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
lbl_fn_80329C7C_0000141C:
    lwz r0, 0x24(r1)
    psq_l f31, 0x18(r1), 0, 0
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80329CFC(void)
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
    bne lbl_fn_80329CFC_0000149C
    li r0, 0x0
    stw r0, 0x14c4(r31)
    stw r0, 0x14c8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0x6
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
lbl_fn_80329CFC_0000149C:
    lwz r0, 0x24(r1)
    psq_l f31, 0x18(r1), 0, 0
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80329D7C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    psq_st f31, 0x18(r1), 0, 0
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x15f4(r3)
    cmpwi r0, 0x5
    bgt lbl_fn_80329D7C_00001500
    lfs f31, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_80329D7C_00001550
lbl_fn_80329D7C_00001500:
    li r31, 0x0
    li r3, 0x1c2
    li r0, 0x1
    stw r3, 0x15ec(r30)
    addi r4, r30, 0xb0
    stw r31, 0x14cc(r30)
    stw r0, 0x15dc(r30)
    stw r31, 0x15f0(r30)
    lwz r3, lbl_8087F048
    bl fn_80107A68
    stw r31, 0x14c4(r30)
    stw r31, 0x14c8(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    li r0, 0x6
    mr r3, r30
    li r4, 0x3
    stw r0, 0x58c(r30)
    bl fn_8016E970
lbl_fn_80329D7C_00001550:
    lwz r0, 0x24(r1)
    psq_l f31, 0x18(r1), 0, 0
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80329E34(void)
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
    bne lbl_fn_80329E34_000015F0
    lwz r5, 0x12a4(r31)
    mr r3, r31
    lwz r0, 0x5c0(r31)
    li r4, 0x1
    oris r5, r5, 0x200
    stw r5, 0x12a4(r31)
    clrrwi r0, r0, 1
    stw r0, 0x5c0(r31)
    lwz r12, 0x0(r31)
    lwz r12, 0x9c(r12)
    mtctr r12
    bctrl
    lwz r0, 0x12a4(r31)
    mr r3, r31
    ori r0, r0, 0x8000
    stw r0, 0x12a4(r31)
    bl fn_800EE360
    b lbl_fn_80329E34_000015F8
lbl_fn_80329E34_000015F0:
    li r0, 0x0
    stw r0, 0x1434(r31)
lbl_fn_80329E34_000015F8:
    lwz r0, 0x24(r1)
    psq_l f31, 0x18(r1), 0, 0
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80329ED8(void)
{
    nofralloc
    stwu r1, -0x1e0(r1)
    mflr r0
    stw r0, 0x1e4(r1)
    addi r11, r1, 0x1a0
    stfd f31, 0x1d0(r1)
    psq_st f31, 0x1d8(r1), 0, 0
    stfd f30, 0x1c0(r1)
    psq_st f30, 0x1c8(r1), 0, 0
    stfd f29, 0x1b0(r1)
    psq_st f29, 0x1b8(r1), 0, 0
    stfd f28, 0x1a0(r1)
    psq_st f28, 0x1a8(r1), 0, 0
    bl _savegpr_23
    lwz r7, 0x0(r4)
    mr r27, r3
    mr r28, r5
    mr r29, r6
    addi r0, r7, 0x1
    stw r0, 0x0(r4)
    cmpwi r0, 0x5
    ble lbl_fn_80329ED8_00001670
    li r3, 0x1
    b lbl_fn_80329ED8_00001AD8
lbl_fn_80329ED8_00001670:
    lfs f29, lbl_80884F10
    addi r24, r1, 0x68
    stfs f29, 0xa4(r1)
    addi r25, r1, 0x98
    lwz r3, lbl_8087F8A0
    addi r23, r1, 0x8c
    stfs f29, 0xa8(r1)
    li r31, 0x0
    lfs f28, lbl_80884F60
    li r26, 0x0
    stfs f29, 0xac(r1)
    lfs f30, lbl_80884FD4
    lwz r30, 0x48(r3)
    lfs f31, lbl_80885030
    b lbl_fn_80329ED8_00001AA0
lbl_fn_80329ED8_000016AC:
    lwz r4, 0x38(r30)
    li r3, 0x0
    rlwinm r0, r4, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80329ED8_000016D0
    clrlwi r0, r4, 31
    cmplwi r0, 0x1
    beq lbl_fn_80329ED8_000016D0
    li r3, 0x1
lbl_fn_80329ED8_000016D0:
    cmpwi r3, 0x0
    beq lbl_fn_80329ED8_00001A9C
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x78(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_80329ED8_00001A9C
    lwz r0, 0x560(r30)
    cmpwi r0, 0x4
    beq lbl_fn_80329ED8_00001708
    cmpwi r0, 0x5
    bne lbl_fn_80329ED8_00001750
lbl_fn_80329ED8_00001708:
    lwz r3, lbl_8087F048
    mr r4, r30
    lwz r6, 0x638(r30)
    mr r5, r27
    lfs f1, lbl_80884F10
    li r7, -0x1
    bl fn_800FBA9C
    cmpwi r3, 0x0
    blt lbl_fn_80329ED8_00001A9C
    psq_l f1, 0x528(r30), 0, 0
    addi r3, r1, 0xa4
    lfs f2, 0x530(r30)
    li r31, 0x1
    stfs f2, 0xac(r1)
    lfs f28, lbl_80885024
    psq_st f1, 0x0(r3), 0, 0
    lfs f29, 0x538(r30)
    b lbl_fn_80329ED8_00001AA8
lbl_fn_80329ED8_00001750:
    cmpwi r0, 0x1e
    bne lbl_fn_80329ED8_00001A18
    lwz r3, 0x638(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80329ED8_00001A9C
    lbz r0, 0x1(r3)
    cmpwi r0, 0x1
    bne lbl_fn_80329ED8_00001A9C
    mr r4, r30
    addi r3, r1, 0x68
    bl fn_80158E1C
    psq_l f1, 0x0(r24), 0, 0
    mr r3, r25
    lfs f2, 0x70(r1)
    mr r4, r25
    psq_st f1, 0x0(r25), 0, 0
    stfs f2, 0xa0(r1)
    bl fn_805F98D0
    lfs f2, 0x530(r30)
    mr r5, r23
    psq_l f1, 0x528(r30), 0, 0
    addi r4, r1, 0x120
    psq_st f1, 0x0(r23), 0, 0
    addi r6, r1, 0x80
    lfs f3, 0xa0(r1)
    addi r8, r30, 0x5b8
    lfs f4, 0x90(r1)
    li r7, 0x0
    fmuls f5, f3, f31
    lfs f0, 0x9c(r1)
    lfs f3, 0x98(r1)
    fadds f4, f4, f30
    fmuls f6, f0, f31
    lfs f0, 0x8c(r1)
    fmuls f3, f3, f31
    stfs f2, 0x94(r1)
    fadds f7, f2, f5
    lwz r3, lbl_8087EE98
    fadds f8, f4, f6
    stfs f4, 0x90(r1)
    fadds f0, f0, f3
    stfs f3, 0x5c(r1)
    li r9, 0x0
    stfs f6, 0x60(r1)
    stfs f5, 0x64(r1)
    stfs f0, 0x80(r1)
    stfs f8, 0x84(r1)
    stfs f7, 0x88(r1)
    stw r26, 0x154(r1)
    stw r26, 0x158(r1)
    stw r26, 0x15c(r1)
    stw r26, 0x160(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_80329ED8_00001A9C
    lwz r3, 0x158(r1)
    lwz r0, 0x8(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_80329ED8_00001A9C
    lwz r0, 0xc(r3)
    cmplw r0, r27
    bne lbl_fn_80329ED8_00001A9C
    psq_l f1, 0x528(r27), 0, 0
    addi r3, r1, 0xa4
    lfs f2, 0x530(r27)
    addi r23, r1, 0x50
    stfs f2, 0xac(r1)
    lfs f2, 0xa0(r1)
    psq_st f1, 0x0(r3), 0, 0
    fabs f3, f2
    psq_l f1, 0x0(r25), 0, 0
    lfs f0, lbl_80884F38
    psq_st f1, 0x0(r23), 0, 0
    frsp f3, f3
    stfs f2, 0x58(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_80329ED8_000018AC
    lfs f3, 0x50(r1)
    lfs f0, lbl_80884F10
    fcmpo cr0, f3, f0
    ble lbl_fn_80329ED8_000018A0
    lfs f0, lbl_80884F3C
    b lbl_fn_80329ED8_000018A4
lbl_fn_80329ED8_000018A0:
    lfs f0, lbl_80884F40
lbl_fn_80329ED8_000018A4:
    stfs f0, 0x48(r1)
    b lbl_fn_80329ED8_000018C0
lbl_fn_80329ED8_000018AC:
    frsp f2, f2
    lfs f1, 0x50(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_80329ED8_000018C0:
    lfs f0, 0x48(r1)
    addi r3, r1, 0xb0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80884F10
    addi r4, r1, 0x38
    lfs f31, 0xb8(r1)
    mr r5, r4
    lfs f30, 0xb4(r1)
    addi r3, r1, 0xe0
    lfs f13, 0xb0(r1)
    lfs f12, 0xc8(r1)
    lfs f11, 0xc4(r1)
    lfs f10, 0xc0(r1)
    lfs f9, 0xd8(r1)
    lfs f8, 0xd4(r1)
    lfs f7, 0xd0(r1)
    lfs f6, 0xdc(r1)
    lfs f5, 0xcc(r1)
    lfs f4, 0xbc(r1)
    lfs f0, lbl_80884F1C
    psq_l f1, 0x0(r23), 0, 0
    lfs f2, 0x58(r1)
    stfs f3, 0x110(r1)
    stfs f3, 0x114(r1)
    stfs f3, 0x118(r1)
    stfs f0, 0x11c(r1)
    stfs f13, 0x8(r1)
    stfs f30, 0xc(r1)
    stfs f31, 0x10(r1)
    stfs f13, 0xe0(r1)
    stfs f30, 0xe4(r1)
    stfs f31, 0xe8(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xf0(r1)
    stfs f11, 0xf4(r1)
    stfs f12, 0xf8(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0x100(r1)
    stfs f8, 0x104(r1)
    stfs f9, 0x108(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0xec(r1)
    stfs f5, 0xfc(r1)
    stfs f6, 0x10c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80884F38
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80329ED8_000019DC
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80884F10
    fcmpo cr0, f3, f0
    ble lbl_fn_80329ED8_000019CC
    lfs f0, lbl_80884F3C
    b lbl_fn_80329ED8_000019D0
lbl_fn_80329ED8_000019CC:
    lfs f0, lbl_80884F40
lbl_fn_80329ED8_000019D0:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_80329ED8_000019F0
lbl_fn_80329ED8_000019DC:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_80329ED8_000019F0:
    addi r3, r1, 0x44
    lfs f2, lbl_80884F10
    psq_l f1, 0x0(r3), 0, 0
    li r31, 0x1
    psq_st f1, 0x0(r23), 0, 0
    lfs f28, lbl_80884F60
    stfs f2, 0x4c(r1)
    lfs f29, 0x54(r1)
    stfs f2, 0x58(r1)
    b lbl_fn_80329ED8_00001AA8
lbl_fn_80329ED8_00001A18:
    cmpwi r0, 0xe
    bne lbl_fn_80329ED8_00001A7C
    mr r4, r30
    addi r3, r1, 0x74
    bl fn_80158E1C
    lwz r3, lbl_8087F048
    mr r4, r30
    lwz r6, 0x638(r30)
    mr r5, r27
    addi r8, r1, 0x74
    li r7, -0x1
    li r9, 0x1
    li r10, -0x1
    bl fn_800FBE70
    cmpwi r3, 0x0
    blt lbl_fn_80329ED8_00001A9C
    addi r4, r1, 0x74
    lfs f2, 0x7c(r1)
    addi r3, r1, 0xa4
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    li r31, 0x1
    stfs f2, 0xac(r1)
    lfs f29, 0x538(r30)
    b lbl_fn_80329ED8_00001AA8
lbl_fn_80329ED8_00001A7C:
    psq_l f1, 0x528(r30), 0, 0
    addi r3, r1, 0xa4
    lfs f2, 0x530(r30)
    li r31, 0x1
    stfs f2, 0xac(r1)
    psq_st f1, 0x0(r3), 0, 0
    lfs f29, 0x538(r30)
    b lbl_fn_80329ED8_00001AA8
lbl_fn_80329ED8_00001A9C:
    lwz r30, 0x14ac(r30)
lbl_fn_80329ED8_00001AA0:
    cmpwi r30, 0x0
    bne lbl_fn_80329ED8_000016AC
lbl_fn_80329ED8_00001AA8:
    cmpwi r31, 0x0
    beq lbl_fn_80329ED8_00001AD4
    fmr f1, f29
    mr r3, r27
    fmr f2, f28
    mr r4, r28
    mr r5, r29
    addi r6, r1, 0xa4
    bl fn_8032A3D4
    li r3, 0x1
    b lbl_fn_80329ED8_00001AD8
lbl_fn_80329ED8_00001AD4:
    li r3, 0x0
lbl_fn_80329ED8_00001AD8:
    addi r11, r1, 0x1a0
    psq_l f31, 0x1d8(r1), 0, 0
    lfd f31, 0x1d0(r1)
    psq_l f30, 0x1c8(r1), 0, 0
    lfd f30, 0x1c0(r1)
    psq_l f29, 0x1b8(r1), 0, 0
    lfd f29, 0x1b0(r1)
    psq_l f28, 0x1a8(r1), 0, 0
    lfd f28, 0x1a0(r1)
    bl _restgpr_23
    lwz r0, 0x1e4(r1)
    mtlr r0
    addi r1, r1, 0x1e0
    blr
}
