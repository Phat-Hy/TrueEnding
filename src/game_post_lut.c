#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void fn_8004ED34(void);
extern void fn_80051B70(void);
extern void fn_80063764(void);
extern void fn_80092814(void);
extern void fn_800BFAC8(void);
extern void fn_800C31F4(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_800D246C(void);
extern void fn_800FAB80(void);
extern void fn_800FDB20(void);
extern void fn_80101434(void);
extern void fn_8011FC10(void);
extern void fn_8012D8B8(void);
extern void fn_80145334(void);
extern void fn_8015495C(void);
extern void fn_8015E4B0(void);
extern void fn_80176ACC(void);
extern void fn_80219E6C(void);
extern void fn_80239DAC(void);
extern void fn_80370A78(void);
extern void fn_80370AE4(void);
extern void fn_8037F6D8(void);
extern void fn_8037F724(void);
extern void fn_803ABE54(void);
extern void fn_803E3050(void);
extern void fn_803E6ADC(void);
extern void fn_805B40F8(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F9160(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9940(void);
extern void fn_8068AEA4(void);
extern void fn_80695D84(void);

/* External data declarations */
extern u8 lbl_80746C38[];
extern u8 lbl_80746C90[];
extern u8 lbl_807C7030[];
extern u8 lbl_807C83A8[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F408;
extern u32 lbl_8087F430;
extern u32 lbl_8087F490;
extern u32 lbl_8087FA00;
extern u32 lbl_808842A8;
extern u32 lbl_808842AC;
extern u32 lbl_80884300;
extern u32 lbl_80884304;
extern u32 lbl_80884308;
extern u32 lbl_80884320;
extern u32 lbl_80884324;
extern u32 lbl_80884344;
extern u32 lbl_8088438C;
extern u32 lbl_808843B0;
extern u32 lbl_808843C0;
extern u32 lbl_808843C4;
extern u32 lbl_808843C8;
extern u32 lbl_808843CC;
extern u32 lbl_808843D0;
extern u32 lbl_808843D4;
extern u32 lbl_808843D8;
extern u32 lbl_808843DC;

/* Function declarations */
void fn_802C5D4C(void);
void fn_802C5F5C(void);
void fn_802C64DC(void);
void fn_802C653C(void);
void fn_802C6878(void);
void fn_802C69BC(void);
void fn_802C6DF4(void);

asm void fn_802C5D4C(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    stw r31, 0x8c(r1)
    mr r31, r3
    lwz r0, 0x624(r3)
    cmpwi r0, 0x0
    beq lbl_fn_802C5D4C_000001FC
    lfs f5, 0x52c(r3)
    lis r4, lbl_80746C90@ha
    lfs f4, 0x5a8(r3)
    addi r4, r4, lbl_80746C90@l
    lfs f3, 0x528(r3)
    addi r6, r1, 0x38
    fadds f5, f5, f4
    lfs f0, 0x5a4(r3)
    lfs f4, 0x530(r3)
    addi r4, r4, 0xe5
    fadds f3, f3, f0
    lfs f0, 0x5ac(r3)
    fadds f2, f4, f0
    stfs f5, 0x3c(r1)
    lwz r7, 0x62c(r3)
    li r5, 0x0
    stfs f3, 0x38(r1)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x4(r7), 0, 0
    stfs f2, 0xc(r7)
    lwz r6, 0x62c(r3)
    addi r3, r3, 0xb0
    stfs f2, 0x40(r1)
    lfs f3, 0x8(r6)
    lfs f0, 0x10(r6)
    fadds f0, f3, f0
    stfs f0, 0x8(r6)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802C5D4C_000000A0
    li r6, 0x0
    b lbl_fn_802C5D4C_000000AC
lbl_fn_802C5D4C_000000A0:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r6, r3, r0
lbl_fn_802C5D4C_000000AC:
    lfs f7, 0x1c(r6)
    addi r5, r1, 0x2c
    lfs f8, 0xc(r6)
    addi r3, r1, 0x50
    lfs f3, 0x5a8(r31)
    li r4, 0x79
    lfs f0, 0x5a4(r31)
    fadds f3, f7, f3
    lfs f6, 0x2c(r6)
    fadds f4, f8, f0
    lfs f0, 0x5ac(r31)
    stfs f3, 0x30(r1)
    fadds f2, f6, f0
    stfs f4, 0x2c(r1)
    lwz r6, 0x62c(r31)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x18(r6), 0, 0
    lfs f4, lbl_8088438C
    stfs f2, 0x20(r6)
    lfs f3, lbl_808842A8
    lwz r5, 0x62c(r31)
    lfs f0, lbl_808843C0
    lfs f5, 0x1c(r5)
    stfs f8, 0x20(r1)
    fsubs f4, f5, f4
    stfs f7, 0x24(r1)
    stfs f4, 0x1c(r5)
    stfs f3, 0x44(r1)
    stfs f3, 0x48(r1)
    stfs f0, 0x4c(r1)
    lfs f1, 0x538(r31)
    stfs f6, 0x28(r1)
    stfs f2, 0x34(r1)
    bl fn_805F8E70
    addi r4, r1, 0x44
    addi r3, r1, 0x50
    mr r5, r4
    bl fn_805F93C0
    lis r4, lbl_80746C90@ha
    addi r3, r31, 0xb0
    addi r4, r4, lbl_80746C90@l
    li r5, 0x0
    addi r4, r4, 0xea
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802C5D4C_0000016C
    li r4, 0x0
    b lbl_fn_802C5D4C_00000178
lbl_fn_802C5D4C_0000016C:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r4, r3, r0
lbl_fn_802C5D4C_00000178:
    lfs f5, 0x1c(r4)
    addi r3, r1, 0x14
    lfs f6, 0xc(r4)
    lfs f3, 0x5a8(r31)
    lfs f0, 0x5a4(r31)
    fadds f3, f5, f3
    lfs f4, 0x2c(r4)
    fadds f7, f6, f0
    lfs f0, 0x5ac(r31)
    stfs f3, 0x18(r1)
    fadds f2, f4, f0
    stfs f7, 0x14(r1)
    lwz r4, 0x62c(r31)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x2c(r4), 0, 0
    stfs f2, 0x34(r4)
    lwz r3, 0x62c(r31)
    lfs f0, 0x44(r1)
    lfs f3, 0x2c(r3)
    stfs f6, 0x8(r1)
    fadds f0, f3, f0
    stfs f5, 0xc(r1)
    stfs f0, 0x2c(r3)
    lfs f3, 0x30(r3)
    lfs f0, 0x48(r1)
    stfs f4, 0x10(r1)
    fadds f0, f3, f0
    stfs f2, 0x1c(r1)
    stfs f0, 0x30(r3)
    lfs f3, 0x34(r3)
    lfs f0, 0x4c(r1)
    fadds f0, f3, f0
    stfs f0, 0x34(r3)
lbl_fn_802C5D4C_000001FC:
    lwz r0, 0x94(r1)
    lwz r31, 0x8c(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_802C5F5C(void)
{
    nofralloc
    stwu r1, -0x220(r1)
    mflr r0
    stw r0, 0x224(r1)
    addi r11, r1, 0x210
    stfd f31, 0x210(r1)
    psq_st f31, 0x218(r1), 0, 0
    bl _savegpr_27
    mr r31, r3
    lwz r3, lbl_8087F430
    li r4, 0xff
    bl fn_80370A78
    cmpwi r3, 0x0
    bne lbl_fn_802C5F5C_000006E8
    lwz r0, 0x15b0(r31)
    cmpwi r0, 0x0
    bne lbl_fn_802C5F5C_000006E8
    lwz r27, lbl_8087F430
    li r0, 0x0
    lwz r6, 0x62c(r31)
    li r3, -0x1
    lwz r5, 0x86c(r27)
    addi r4, r1, 0xd8
    lwz r7, 0x868(r27)
    psq_l f1, 0x18(r6), 0, 0
    lfs f2, 0x20(r6)
    cmpw r7, r5
    lfs f0, 0x24(r6)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0xe0(r1)
    stfs f0, 0xe4(r1)
    stw r3, 0x1a8(r1)
    stw r3, 0xec(r1)
    stw r3, 0x10c(r1)
    stw r0, 0x12c(r1)
    stw r0, 0x14c(r1)
    stw r0, 0x16c(r1)
    stw r0, 0x18c(r1)
    bne lbl_fn_802C5F5C_000006E8
    cmpwi r7, 0x3
    beq lbl_fn_802C5F5C_000002C0
    cmpwi r7, 0x1
    beq lbl_fn_802C5F5C_000002C0
    cmpwi r7, 0x4
    bne lbl_fn_802C5F5C_000006E8
lbl_fn_802C5F5C_000002C0:
    lfs f2, 0x7c(r27)
    addi r3, r1, 0x19c
    psq_l f1, 0x74(r27), 0, 0
    addi r30, r1, 0x190
    psq_st f1, 0x0(r30), 0, 0
    frsp f0, f2
    mr r4, r3
    stfs f2, 0x198(r1)
    lfs f9, 0x190(r1)
    lfs f2, 0x88(r27)
    psq_l f1, 0x80(r27), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    fsubs f0, f2, f0
    lfs f7, 0x194(r1)
    lfs f10, 0x19c(r1)
    lfs f8, 0x1a0(r1)
    fsubs f9, f10, f9
    stfs f0, 0x1a4(r1)
    fsubs f0, f8, f7
    stfs f9, 0x19c(r1)
    stfs f0, 0x1a0(r1)
    bl fn_805F98D0
    lfs f8, 0x19c(r1)
    addi r4, r1, 0xd8
    lfs f11, lbl_808843C4
    addi r29, r1, 0xc8
    lfs f7, 0x1a0(r1)
    addi r3, r1, 0x20
    fmuls f9, f8, f11
    lfs f8, 0x190(r1)
    fmuls f10, f7, f11
    lfs f0, 0x1a4(r1)
    lfs f7, 0x194(r1)
    fmuls f11, f0, f11
    fadds f10, f10, f7
    lfs f0, 0x198(r1)
    fadds f9, f9, f8
    psq_l f1, 0x0(r4), 0, 0
    fadds f8, f11, f0
    lfs f2, 0xe0(r1)
    lfs f7, 0xe4(r1)
    lfs f0, lbl_808843C8
    psq_st f1, 0x0(r29), 0, 0
    fmuls f0, f7, f0
    stfs f9, 0x19c(r1)
    lfs f9, 0xcc(r1)
    stfs f10, 0x1a0(r1)
    lfs f7, 0xc8(r1)
    stfs f8, 0x1a4(r1)
    stfs f2, 0xd0(r1)
    stfs f0, 0xd4(r1)
    lfs f10, 0x7c(r27)
    lfs f8, 0x78(r27)
    lfs f0, 0x74(r27)
    fsubs f10, f2, f10
    fsubs f8, f9, f8
    fsubs f0, f7, f0
    stfs f10, 0x28(r1)
    stfs f0, 0x20(r1)
    stfs f8, 0x24(r1)
    bl fn_805F9940
    lfs f7, 0xe4(r1)
    addi r28, r1, 0x1c8
    lfs f0, lbl_808842A8
    addi r4, r1, 0xbc
    fneg f8, f7
    stfs f0, 0xc4(r1)
    fmr f31, f1
    mr r3, r28
    stfs f8, 0xbc(r1)
    mr r5, r4
    stfs f8, 0xc0(r1)
    stfs f7, 0xb0(r1)
    stfs f7, 0xb4(r1)
    stfs f0, 0xb8(r1)
    psq_l f1, 0x13c(r27), 0, 0
    psq_l f2, 0x144(r27), 0, 0
    psq_l f3, 0x14c(r27), 0, 0
    psq_l f4, 0x154(r27), 0, 0
    psq_l f5, 0x15c(r27), 0, 0
    psq_l f6, 0x164(r27), 0, 0
    psq_st f6, 0x28(r28), 0, 0
    psq_st f2, 0x8(r28), 0, 0
    psq_st f4, 0x18(r28), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    psq_st f3, 0x10(r28), 0, 0
    psq_st f5, 0x20(r28), 0, 0
    stfs f0, 0x1d4(r1)
    stfs f0, 0x1e4(r1)
    stfs f0, 0x1f4(r1)
    bl fn_805F93C0
    addi r4, r1, 0xb0
    mr r3, r28
    mr r5, r4
    bl fn_805F93C0
    lfs f7, 0xe0(r1)
    addi r3, r1, 0x68
    lfs f0, 0xc4(r1)
    addi r5, r1, 0xa4
    lfs f9, 0xdc(r1)
    fadds f10, f7, f0
    lfs f8, 0xc0(r1)
    lfs f7, 0xd8(r1)
    lfs f0, 0xbc(r1)
    fadds f8, f9, f8
    stfs f10, 0xac(r1)
    fadds f0, f7, f0
    lwz r4, lbl_8087EFB4
    stfs f8, 0xa8(r1)
    stfs f0, 0xa4(r1)
    bl fn_800BFAC8
    lfs f9, 0xe0(r1)
    addi r4, r1, 0x68
    lfs f8, 0xb8(r1)
    addi r6, r1, 0xa4
    lfs f7, 0xdc(r1)
    addi r3, r1, 0x5c
    fadds f8, f9, f8
    lfs f0, 0xb4(r1)
    psq_l f1, 0x0(r4), 0, 0
    addi r5, r1, 0x98
    fadds f9, f7, f0
    lfs f2, 0x70(r1)
    lfs f7, 0xd8(r1)
    lfs f0, 0xb0(r1)
    psq_st f1, 0x0(r6), 0, 0
    fadds f0, f7, f0
    lwz r4, lbl_8087EFB4
    stfs f2, 0xac(r1)
    stfs f0, 0x98(r1)
    stfs f9, 0x9c(r1)
    stfs f8, 0xa0(r1)
    bl fn_800BFAC8
    addi r3, r1, 0x5c
    lfs f2, 0x64(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r4, r1, 0x98
    psq_st f1, 0x0(r4), 0, 0
    mr r3, r30
    lfs f9, 0xa8(r1)
    mr r4, r29
    lfs f8, 0x9c(r1)
    li r27, 0x0
    lfs f7, 0xa4(r1)
    fsubs f11, f9, f8
    lfs f0, 0x98(r1)
    fadds f9, f9, f8
    lfs f8, lbl_80884344
    fsubs f10, f7, f0
    stfs f2, 0xa0(r1)
    fabs f11, f11
    fabs f12, f10
    fadds f0, f7, f0
    frsp f10, f11
    fmuls f7, f8, f9
    fmuls f0, f8, f0
    fmuls f9, f8, f10
    stfs f7, 0x1c(r1)
    frsp f11, f12
    stfs f0, 0x18(r1)
    fmuls f7, f8, f11
    stfs f9, 0x14(r1)
    stfs f7, 0x10(r1)
    bl fn_80051B70
    cmpwi r3, 0x0
    beq lbl_fn_802C5F5C_0000067C
    lfs f1, 0xd4(r1)
    mr r3, r30
    mr r4, r29
    bl fn_803ABE54
    cmpwi r3, 0x0
    beq lbl_fn_802C5F5C_0000067C
    lfs f9, 0xe0(r1)
    addi r4, r1, 0x50
    lfs f7, 0xb8(r1)
    addi r5, r1, 0x44
    lfs f0, 0xc4(r1)
    li r27, 0x1
    fadds f11, f9, f7
    lfs f8, 0xdc(r1)
    fadds f9, f9, f0
    lfs f7, 0xb4(r1)
    lfs f0, 0xc0(r1)
    fadds f12, f8, f7
    fadds f10, f8, f0
    lfs f8, 0xd8(r1)
    lfs f7, 0xb0(r1)
    lfs f0, 0xbc(r1)
    fadds f7, f8, f7
    stfs f12, 0x48(r1)
    fadds f0, f8, f0
    lwz r3, lbl_8087F490
    stfs f7, 0x44(r1)
    stfs f11, 0x4c(r1)
    stfs f0, 0x50(r1)
    stfs f10, 0x54(r1)
    stfs f9, 0x58(r1)
    bl fn_803E6ADC
    lwz r3, lbl_8087F430
    li r4, 0xff
    li r5, 0x1
    bl fn_80370AE4
    li r0, 0x2d
    stw r0, 0x15cc(r31)
    lis r4, lbl_80746C90@ha
    addi r3, r31, 0xb0
    lwz r6, lbl_8087F430
    addi r4, r4, lbl_80746C90@l
    addi r4, r4, 0xc3
    li r5, 0x0
    addi r28, r6, 0x6c
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802C5F5C_00000620
    li r5, 0x0
    b lbl_fn_802C5F5C_0000062C
lbl_fn_802C5F5C_00000620:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r5, r3, r0
lbl_fn_802C5F5C_0000062C:
    lfs f0, 0x2c(r5)
    mr r3, r28
    lfs f7, 0x1c(r5)
    addi r4, r1, 0x8c
    lfs f8, 0xc(r5)
    stfs f8, 0x8c(r1)
    stfs f7, 0x90(r1)
    stfs f0, 0x94(r1)
    bl fn_8037F6D8
    lis r4, lbl_80746C90@ha
    lfs f1, lbl_808842AC
    addi r4, r4, lbl_80746C90@l
    addi r3, r1, 0x8
    addi r4, r4, 0xf1
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_802C5F5C_0000067C:
    cmpwi r27, 0x0
    bne lbl_fn_802C5F5C_000006E8
    lfs f0, lbl_808843C4
    fcmpo cr0, f31, f0
    bge lbl_fn_802C5F5C_000006E8
    lfs f7, 0x1c(r1)
    addi r3, r1, 0xd8
    lfs f0, 0x18(r1)
    addi r4, r1, 0x38
    psq_l f1, 0x0(r3), 0, 0
    addi r7, r1, 0x80
    lfs f8, 0xac(r1)
    addi r5, r1, 0x2c
    lfs f2, 0xe0(r1)
    addi r6, r1, 0x10
    stfs f2, 0x40(r1)
    fmr f2, f8
    lwz r3, lbl_8087F490
    stfs f0, 0x80(r1)
    stfs f7, 0x84(r1)
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    fmr f1, f31
    stfs f8, 0x88(r1)
    stfs f2, 0x34(r1)
    bl fn_803E3050
lbl_fn_802C5F5C_000006E8:
    lwz r3, 0x15cc(r31)
    cmpwi r3, 0x0
    blt lbl_fn_802C5F5C_00000770
    subic. r0, r3, 0x1
    stw r0, 0x15cc(r31)
    lwz r3, lbl_8087F430
    addi r28, r3, 0x6c
    bge lbl_fn_802C5F5C_00000718
    li r0, 0x0
    stw r0, 0x858(r28)
    stw r0, 0x838(r28)
    b lbl_fn_802C5F5C_00000770
lbl_fn_802C5F5C_00000718:
    lis r4, lbl_80746C90@ha
    addi r3, r31, 0xb0
    addi r4, r4, lbl_80746C90@l
    li r5, 0x0
    addi r4, r4, 0xc3
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802C5F5C_00000740
    li r5, 0x0
    b lbl_fn_802C5F5C_0000074C
lbl_fn_802C5F5C_00000740:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r5, r3, r0
lbl_fn_802C5F5C_0000074C:
    lfs f0, 0x2c(r5)
    mr r3, r28
    lfs f7, 0x1c(r5)
    addi r4, r1, 0x74
    lfs f8, 0xc(r5)
    stfs f8, 0x74(r1)
    stfs f7, 0x78(r1)
    stfs f0, 0x7c(r1)
    bl fn_8037F724
lbl_fn_802C5F5C_00000770:
    addi r11, r1, 0x210
    psq_l f31, 0x218(r1), 0, 0
    lfd f31, 0x210(r1)
    bl _restgpr_27
    lwz r0, 0x224(r1)
    mtlr r0
    addi r1, r1, 0x220
    blr
}

asm void fn_802C64DC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, lbl_8087F430
    cmpwi r0, 0x0
    beq lbl_fn_802C64DC_000007D8
    mr r3, r0
    li r4, 0xff
    bl fn_80370A78
    cmpwi r3, 0x0
    bne lbl_fn_802C64DC_000007D8
    lwz r0, 0x15b0(r31)
    cmpwi r0, 0x0
    bne lbl_fn_802C64DC_000007D8
    li r3, 0x1
    b lbl_fn_802C64DC_000007DC
lbl_fn_802C64DC_000007D8:
    li r3, 0x0
lbl_fn_802C64DC_000007DC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802C653C(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stw r31, 0x6c(r1)
    mr r31, r3
    stw r30, 0x68(r1)
    lwz r0, 0x15c8(r3)
    cmpwi r0, 0x3
    bge lbl_fn_802C653C_00000B14
    lwz r4, lbl_8087F430
    lis r3, lbl_80746C38@ha
    lfs f3, lbl_808842A8
    addi r3, r3, lbl_80746C38@l
    lwz r6, 0x10d8(r4)
    slwi r0, r0, 4
    add r3, r3, r0
    lfs f0, lbl_808843CC
    lwz r0, 0x78(r6)
    li r5, 0x0
    stfs f3, 0x2c(r1)
    li r7, 0x0
    lwz r4, 0x4(r3)
    stfs f0, 0x30(r1)
    stfs f3, 0x34(r1)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_802C653C_00000884
lbl_fn_802C653C_0000085C:
    lwz r3, 0x7c(r6)
    lwzx r0, r3, r7
    cmpw r4, r0
    bne lbl_fn_802C653C_00000878
    mulli r0, r5, 0x28
    add r3, r3, r0
    b lbl_fn_802C653C_00000888
lbl_fn_802C653C_00000878:
    addi r7, r7, 0x28
    addi r5, r5, 0x1
    bdnz lbl_fn_802C653C_0000085C
lbl_fn_802C653C_00000884:
    li r3, 0x0
lbl_fn_802C653C_00000888:
    cmpwi r3, 0x0
    beq lbl_fn_802C653C_00000904
    lfs f3, 0xc(r3)
    lis r4, lbl_80746C38@ha
    lfs f0, 0x34(r1)
    addi r5, r1, 0x20
    lfs f5, 0x8(r3)
    addi r30, r1, 0x38
    fadds f2, f3, f0
    lfs f3, 0x4(r3)
    lfs f4, 0x30(r1)
    addi r4, r4, lbl_80746C38@l
    lfs f0, 0x2c(r1)
    fadds f4, f5, f4
    fadds f0, f3, f0
    stfs f2, 0x40(r1)
    lwz r3, lbl_8087F408
    stfs f4, 0x24(r1)
    stfs f0, 0x20(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    lwz r0, 0x15c8(r31)
    stfs f2, 0x28(r1)
    slwi r0, r0, 4
    add r4, r4, r0
    lwz r4, 0x4(r4)
    bl fn_8011FC10
    mr r4, r3
    mr r3, r31
    mr r5, r30
    bl fn_802C6878
lbl_fn_802C653C_00000904:
    lwz r4, lbl_8087F430
    lis r3, lbl_80746C38@ha
    lwz r0, 0x15c8(r31)
    addi r3, r3, lbl_80746C38@l
    lwz r6, 0x10d8(r4)
    li r5, 0x0
    slwi r0, r0, 4
    li r7, 0x0
    lwz r8, 0x78(r6)
    add r3, r3, r0
    lwz r4, 0x8(r3)
    mtctr r8
    cmplwi r8, 0x0
    ble lbl_fn_802C653C_00000964
lbl_fn_802C653C_0000093C:
    lwz r3, 0x7c(r6)
    lwzx r0, r3, r7
    cmpw r4, r0
    bne lbl_fn_802C653C_00000958
    mulli r0, r5, 0x28
    add r3, r3, r0
    b lbl_fn_802C653C_00000968
lbl_fn_802C653C_00000958:
    addi r7, r7, 0x28
    addi r5, r5, 0x1
    bdnz lbl_fn_802C653C_0000093C
lbl_fn_802C653C_00000964:
    li r3, 0x0
lbl_fn_802C653C_00000968:
    cmpwi r3, 0x0
    beq lbl_fn_802C653C_000009E4
    lfs f3, 0xc(r3)
    lis r4, lbl_80746C38@ha
    lfs f0, 0x34(r1)
    addi r5, r1, 0x14
    lfs f5, 0x8(r3)
    addi r30, r1, 0x38
    fadds f2, f3, f0
    lfs f3, 0x4(r3)
    lfs f4, 0x30(r1)
    addi r4, r4, lbl_80746C38@l
    lfs f0, 0x2c(r1)
    fadds f4, f5, f4
    fadds f0, f3, f0
    stfs f2, 0x40(r1)
    lwz r3, lbl_8087F408
    stfs f4, 0x18(r1)
    stfs f0, 0x14(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    lwz r0, 0x15c8(r31)
    stfs f2, 0x1c(r1)
    slwi r0, r0, 4
    add r4, r4, r0
    lwz r4, 0x8(r4)
    bl fn_8011FC10
    mr r4, r3
    mr r3, r31
    mr r5, r30
    bl fn_802C6878
lbl_fn_802C653C_000009E4:
    lwz r4, lbl_8087F430
    lis r3, lbl_80746C38@ha
    lwz r0, 0x15c8(r31)
    addi r3, r3, lbl_80746C38@l
    lwz r6, 0x10d8(r4)
    li r5, 0x0
    slwi r0, r0, 4
    li r7, 0x0
    lwz r8, 0x78(r6)
    add r3, r3, r0
    lwz r4, 0xc(r3)
    mtctr r8
    cmplwi r8, 0x0
    ble lbl_fn_802C653C_00000A44
lbl_fn_802C653C_00000A1C:
    lwz r3, 0x7c(r6)
    lwzx r0, r3, r7
    cmpw r4, r0
    bne lbl_fn_802C653C_00000A38
    mulli r0, r5, 0x28
    add r3, r3, r0
    b lbl_fn_802C653C_00000A48
lbl_fn_802C653C_00000A38:
    addi r7, r7, 0x28
    addi r5, r5, 0x1
    bdnz lbl_fn_802C653C_00000A1C
lbl_fn_802C653C_00000A44:
    li r3, 0x0
lbl_fn_802C653C_00000A48:
    cmpwi r3, 0x0
    beq lbl_fn_802C653C_00000AC4
    lfs f3, 0xc(r3)
    lis r4, lbl_80746C38@ha
    lfs f0, 0x34(r1)
    addi r5, r1, 0x8
    lfs f5, 0x8(r3)
    addi r30, r1, 0x38
    fadds f2, f3, f0
    lfs f3, 0x4(r3)
    lfs f4, 0x30(r1)
    addi r4, r4, lbl_80746C38@l
    lfs f0, 0x2c(r1)
    fadds f4, f5, f4
    fadds f0, f3, f0
    stfs f2, 0x40(r1)
    lwz r3, lbl_8087F408
    stfs f4, 0xc(r1)
    stfs f0, 0x8(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    lwz r0, 0x15c8(r31)
    stfs f2, 0x10(r1)
    slwi r0, r0, 4
    add r4, r4, r0
    lwz r4, 0xc(r4)
    bl fn_8011FC10
    mr r4, r3
    mr r3, r31
    mr r5, r30
    bl fn_802C6878
lbl_fn_802C653C_00000AC4:
    li r0, 0x2
    stw r0, 0x4c(r1)
    lis r4, lbl_80746C38@ha
    lwz r3, lbl_8087FA00
    lwz r7, 0x15c8(r31)
    li r6, 0x4
    li r5, 0x1
    li r0, 0x0
    slwi r7, r7, 4
    addi r4, r4, lbl_80746C38@l
    lwzx r7, r4, r7
    addi r4, r1, 0x44
    stw r7, 0x50(r1)
    stw r6, 0x54(r1)
    stw r5, 0x5c(r1)
    stw r0, 0x58(r1)
    bl fn_805B40F8
    lwz r3, 0x15c8(r31)
    addi r0, r3, 0x1
    stw r0, 0x15c8(r31)
lbl_fn_802C653C_00000B14:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_802C6878(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r5
    stw r30, 0x28(r1)
    mr r30, r4
    beq lbl_fn_802C6878_00000C58
    lwz r0, 0x7e0(r4)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_802C6878_00000B6C
    lwz r0, 0xd18(r4)
    cmpwi r0, 0x0
    bne lbl_fn_802C6878_00000C58
lbl_fn_802C6878_00000B6C:
    lwz r5, 0x12a4(r4)
    mr r3, r30
    lwz r0, 0x38(r4)
    rlwinm r5, r5, 0, 17, 15
    stw r5, 0x12a4(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    bl fn_80176ACC
    mr r3, r30
    li r4, 0x0
    bl fn_800D246C
    lwz r0, 0x12a4(r30)
    extrwi. r0, r0, 1, 6
    beq lbl_fn_802C6878_00000BB0
    lwz r0, 0x12a4(r30)
    rlwinm r0, r0, 0, 7, 5
    stw r0, 0x12a4(r30)
lbl_fn_802C6878_00000BB0:
    addi r3, r30, 0x7d4
    bl fn_8012D8B8
    li r0, 0x0
    stw r0, 0x58c(r30)
    mr r3, r30
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    bl fn_8015495C
    lfs f3, lbl_808842A8
    addi r4, r1, 0x14
    lfs f0, lbl_808843D0
    addi r5, r1, 0x8
    stfs f3, 0x14(r1)
    mr r3, r30
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x8(r31)
    stfs f2, 0x530(r30)
    fmr f2, f3
    stfs f3, 0x18(r1)
    psq_st f1, 0x528(r30), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    stfs f3, 0x8(r1)
    stfs f0, 0xc(r1)
    psq_st f1, 0x534(r30), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    stfs f3, 0x1c(r1)
    stfs f2, 0x53c(r30)
    stfs f3, 0x10(r1)
    psq_st f1, 0x574(r30), 0, 0
    stfs f2, 0x57c(r30)
    bl fn_80145334
    li r0, 0x1
    stw r0, 0xd18(r30)
    lis r4, lbl_807C7030@ha
    mr r3, r30
    lwz r12, 0x0(r30)
    addi r4, r4, lbl_807C7030@l
    lwz r12, 0x8c(r12)
    mtctr r12
    bctrl
lbl_fn_802C6878_00000C58:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_802C69BC(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    stw r31, 0xac(r1)
    mr r31, r3
    stw r30, 0xa8(r1)
    stw r29, 0xa4(r1)
    stw r28, 0xa0(r1)
    lwz r0, 0x1710(r3)
    cmpwi r0, 0x0
    beq lbl_fn_802C69BC_00000F98
    lfs f1, 0x15d4(r3)
    lfs f0, 0x15d0(r3)
    lfs f2, lbl_808843D8
    lfs f3, lbl_808843D4
    stfs f0, 0x70(r1)
    lfs f0, lbl_808842AC
    stfs f1, 0x78(r1)
    fcmpo cr0, f2, f0
    lfs f1, lbl_808842A8
    stfs f3, 0x74(r1)
    lfs f4, 0x15dc(r3)
    lfs f0, 0x15d8(r3)
    stfs f0, 0x7c(r1)
    stfs f3, 0x80(r1)
    stfs f4, 0x84(r1)
    lfs f4, 0x15e4(r3)
    lfs f0, 0x15e0(r3)
    stfs f0, 0x88(r1)
    stfs f3, 0x8c(r1)
    stfs f4, 0x90(r1)
    lfs f4, 0x15ec(r3)
    lfs f0, 0x15e8(r3)
    stfs f0, 0x94(r1)
    stfs f3, 0x98(r1)
    stfs f4, 0x9c(r1)
    stfs f2, 0x60(r1)
    stfs f2, 0x64(r1)
    stfs f1, 0x68(r1)
    stfs f2, 0x6c(r1)
    cror eq, gt, eq
    bne lbl_fn_802C69BC_00000D20
    li r30, 0xff
    b lbl_fn_802C69BC_00000D44
lbl_fn_802C69BC_00000D20:
    fcmpo cr0, f2, f1
    cror eq, lt, eq
    bne lbl_fn_802C69BC_00000D34
    li r3, 0x0
    b lbl_fn_802C69BC_00000D40
lbl_fn_802C69BC_00000D34:
    lfs f0, lbl_80884344
    fmadds f1, f2, f2, f0
    bl fn_80695D84
lbl_fn_802C69BC_00000D40:
    mr r30, r3
lbl_fn_802C69BC_00000D44:
    lfs f2, 0x64(r1)
    lfs f0, lbl_808842AC
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_802C69BC_00000D60
    li r29, 0xff
    b lbl_fn_802C69BC_00000D8C
lbl_fn_802C69BC_00000D60:
    lfs f0, lbl_808842A8
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_802C69BC_00000D78
    li r3, 0x0
    b lbl_fn_802C69BC_00000D88
lbl_fn_802C69BC_00000D78:
    lfs f1, lbl_808843D8
    lfs f0, lbl_80884344
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_802C69BC_00000D88:
    mr r29, r3
lbl_fn_802C69BC_00000D8C:
    lfs f2, 0x68(r1)
    lfs f0, lbl_808842AC
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_802C69BC_00000DA8
    li r28, 0xff
    b lbl_fn_802C69BC_00000DD4
lbl_fn_802C69BC_00000DA8:
    lfs f0, lbl_808842A8
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_802C69BC_00000DC0
    li r3, 0x0
    b lbl_fn_802C69BC_00000DD0
lbl_fn_802C69BC_00000DC0:
    lfs f1, lbl_808843D8
    lfs f0, lbl_80884344
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_802C69BC_00000DD0:
    mr r28, r3
lbl_fn_802C69BC_00000DD4:
    lfs f2, 0x6c(r1)
    lfs f0, lbl_808842AC
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_802C69BC_00000DF0
    li r3, 0xff
    b lbl_fn_802C69BC_00000E18
lbl_fn_802C69BC_00000DF0:
    lfs f0, lbl_808842A8
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_802C69BC_00000E08
    li r3, 0x0
    b lbl_fn_802C69BC_00000E18
lbl_fn_802C69BC_00000E08:
    lfs f1, lbl_808843D8
    lfs f0, lbl_80884344
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_802C69BC_00000E18:
    slwi r5, r29, 8
    slwi r4, r3, 24
    slwi r0, r30, 16
    lwz r3, lbl_8087EEB0
    or r6, r28, r5
    lfs f1, lbl_808843DC
    or r0, r4, r0
    addi r4, r1, 0x70
    addi r5, r1, 0x7c
    or r6, r6, r0
    bl fn_80063764
    lfs f2, lbl_808843D8
    lfs f0, lbl_808842AC
    lfs f1, lbl_808842A8
    fcmpo cr0, f2, f0
    stfs f2, 0x50(r1)
    stfs f1, 0x54(r1)
    stfs f2, 0x58(r1)
    stfs f2, 0x5c(r1)
    cror eq, gt, eq
    bne lbl_fn_802C69BC_00000E74
    li r28, 0xff
    b lbl_fn_802C69BC_00000E98
lbl_fn_802C69BC_00000E74:
    fcmpo cr0, f2, f1
    cror eq, lt, eq
    bne lbl_fn_802C69BC_00000E88
    li r3, 0x0
    b lbl_fn_802C69BC_00000E94
lbl_fn_802C69BC_00000E88:
    lfs f0, lbl_80884344
    fmadds f1, f2, f2, f0
    bl fn_80695D84
lbl_fn_802C69BC_00000E94:
    mr r28, r3
lbl_fn_802C69BC_00000E98:
    lfs f2, 0x54(r1)
    lfs f0, lbl_808842AC
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_802C69BC_00000EB4
    li r29, 0xff
    b lbl_fn_802C69BC_00000EE0
lbl_fn_802C69BC_00000EB4:
    lfs f0, lbl_808842A8
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_802C69BC_00000ECC
    li r3, 0x0
    b lbl_fn_802C69BC_00000EDC
lbl_fn_802C69BC_00000ECC:
    lfs f1, lbl_808843D8
    lfs f0, lbl_80884344
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_802C69BC_00000EDC:
    mr r29, r3
lbl_fn_802C69BC_00000EE0:
    lfs f2, 0x58(r1)
    lfs f0, lbl_808842AC
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_802C69BC_00000EFC
    li r30, 0xff
    b lbl_fn_802C69BC_00000F28
lbl_fn_802C69BC_00000EFC:
    lfs f0, lbl_808842A8
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_802C69BC_00000F14
    li r3, 0x0
    b lbl_fn_802C69BC_00000F24
lbl_fn_802C69BC_00000F14:
    lfs f1, lbl_808843D8
    lfs f0, lbl_80884344
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_802C69BC_00000F24:
    mr r30, r3
lbl_fn_802C69BC_00000F28:
    lfs f2, 0x5c(r1)
    lfs f0, lbl_808842AC
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_802C69BC_00000F44
    li r3, 0xff
    b lbl_fn_802C69BC_00000F6C
lbl_fn_802C69BC_00000F44:
    lfs f0, lbl_808842A8
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_802C69BC_00000F5C
    li r3, 0x0
    b lbl_fn_802C69BC_00000F6C
lbl_fn_802C69BC_00000F5C:
    lfs f1, lbl_808843D8
    lfs f0, lbl_80884344
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_802C69BC_00000F6C:
    slwi r5, r29, 8
    slwi r4, r3, 24
    slwi r0, r28, 16
    lwz r3, lbl_8087EEB0
    or r6, r30, r5
    lfs f1, lbl_808843DC
    or r0, r4, r0
    addi r4, r1, 0x88
    addi r5, r1, 0x94
    or r6, r6, r0
    bl fn_80063764
lbl_fn_802C69BC_00000F98:
    lfs f7, 0x528(r31)
    lfs f1, 0x15d0(r31)
    lfs f5, 0x14bc(r31)
    fsubs f3, f7, f1
    lfs f8, 0x530(r31)
    fsubs f12, f5, f1
    lfs f2, 0x15d4(r31)
    lfs f0, 0x15dc(r31)
    lfs f6, 0x14c0(r31)
    fsubs f9, f0, f2
    lfs f0, 0x15d8(r31)
    fsubs f11, f6, f2
    lfs f4, lbl_808842A8
    fsubs f10, f0, f1
    stfs f7, 0x48(r1)
    fmuls f1, f9, f12
    stfs f8, 0x4c(r1)
    fsubs f2, f8, f2
    fmuls f0, f9, f3
    stfs f12, 0x28(r1)
    fmsubs f1, f10, f11, f1
    stfs f11, 0x2c(r1)
    fmsubs f0, f10, f2, f0
    stfs f10, 0x30(r1)
    fmuls f0, f0, f1
    stfs f9, 0x34(r1)
    stfs f3, 0x38(r1)
    fcmpo cr0, f0, f4
    stfs f2, 0x3c(r1)
    stfs f10, 0x40(r1)
    stfs f9, 0x44(r1)
    bge lbl_fn_802C69BC_00001084
    lfs f3, 0x15e4(r31)
    lfs f2, 0x15e0(r31)
    fsubs f9, f6, f3
    lfs f1, 0x15ec(r31)
    fsubs f10, f5, f2
    lfs f0, 0x15e8(r31)
    fsubs f6, f1, f3
    stfs f9, 0xc(r1)
    fsubs f5, f7, f2
    stfs f10, 0x8(r1)
    fsubs f7, f0, f2
    fmuls f1, f6, f10
    stfs f6, 0x14(r1)
    fsubs f2, f8, f3
    fmuls f0, f6, f5
    stfs f7, 0x10(r1)
    fmsubs f1, f7, f9, f1
    stfs f5, 0x18(r1)
    fmsubs f0, f7, f2, f0
    stfs f2, 0x1c(r1)
    fmuls f0, f0, f1
    stfs f7, 0x20(r1)
    stfs f6, 0x24(r1)
    fcmpo cr0, f0, f4
    ble lbl_fn_802C69BC_00001084
    li r3, 0x1
    b lbl_fn_802C69BC_00001088
lbl_fn_802C69BC_00001084:
    li r3, 0x0
lbl_fn_802C69BC_00001088:
    lwz r0, 0xb4(r1)
    lwz r31, 0xac(r1)
    lwz r30, 0xa8(r1)
    lwz r29, 0xa4(r1)
    lwz r28, 0xa0(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_802C6DF4(void)
{
    nofralloc
    stwu r1, -0x600(r1)
    mflr r0
    stw r0, 0x604(r1)
    stfd f31, 0x5f0(r1)
    psq_st f31, 0x5f8(r1), 0, 0
    stfd f30, 0x5e0(r1)
    psq_st f30, 0x5e8(r1), 0, 0
    stfd f29, 0x5d0(r1)
    psq_st f29, 0x5d8(r1), 0, 0
    stfd f28, 0x5c0(r1)
    psq_st f28, 0x5c8(r1), 0, 0
    stfd f27, 0x5b0(r1)
    psq_st f27, 0x5b8(r1), 0, 0
    stfd f26, 0x5a0(r1)
    psq_st f26, 0x5a8(r1), 0, 0
    stw r31, 0x59c(r1)
    mr r31, r3
    stw r30, 0x598(r1)
    stw r29, 0x594(r1)
    stw r28, 0x590(r1)
    lwz r0, 0x14d0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_802C6DF4_00001CC4
    lwz r4, 0x14d8(r3)
    subic. r0, r4, 0x1
    stw r0, 0x14d8(r3)
    bge lbl_fn_802C6DF4_0000128C
    lfs f0, 0x1520(r3)
    lfs f7, 0x1510(r3)
    lfs f8, 0x1500(r3)
    stfs f8, 0x120(r1)
    stfs f7, 0x124(r1)
    stfs f0, 0x128(r1)
    lwz r6, 0x1524(r3)
    cmpwi r6, 0x0
    beq lbl_fn_802C6DF4_000011B0
    psq_l f1, 0x528(r6), 0, 0
    addi r5, r1, 0x120
    lfs f2, 0x530(r6)
    addi r3, r1, 0x4b0
    lfs f7, lbl_808842A8
    li r4, 0x79
    lfs f0, lbl_808842AC
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x128(r1)
    stfs f7, 0x114(r1)
    stfs f7, 0x118(r1)
    stfs f0, 0x11c(r1)
    lfs f1, 0x538(r6)
    bl fn_805F8E70
    addi r4, r1, 0x114
    addi r3, r1, 0x4b0
    mr r5, r4
    bl fn_805F93C0
    lfs f7, 0x120(r1)
    lfs f0, 0x114(r1)
    lfs f9, 0x124(r1)
    fadds f10, f7, f0
    lfs f8, 0x118(r1)
    lfs f7, 0x128(r1)
    lfs f0, 0x11c(r1)
    fadds f8, f9, f8
    stfs f10, 0x120(r1)
    fadds f0, f7, f0
    stfs f8, 0x124(r1)
    stfs f0, 0x128(r1)
lbl_fn_802C6DF4_000011B0:
    lwz r0, 0x1700(r31)
    cmpwi r0, 0x0
    beq lbl_fn_802C6DF4_000011C8
    li r3, 0x583
    bl fn_80219E6C
    b lbl_fn_802C6DF4_000011D0
lbl_fn_802C6DF4_000011C8:
    li r3, 0x579
    bl fn_80219E6C
lbl_fn_802C6DF4_000011D0:
    li r0, -0x1
    stw r0, 0x8(r1)
    lis r8, lbl_807C7030@ha
    lfs f1, lbl_808842A8
    stw r0, 0xc(r1)
    mr r5, r3
    lfs f2, lbl_808842AC
    mr r4, r31
    lwz r3, lbl_8087F048
    addi r7, r1, 0x120
    addi r8, r8, lbl_807C7030@l
    li r6, 0x7d0
    li r9, 0x0
    li r10, 0x1e
    bl fn_800FAB80
    lis r4, lbl_80746C90@ha
    lfs f1, lbl_808842AC
    addi r4, r4, lbl_80746C90@l
    addi r3, r1, 0x14
    addi r4, r4, 0xfe
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x14
    li r4, -0x1
    bl fn_800CB3A0
    lwz r8, lbl_8087F430
    li r0, 0xa
    lfs f0, lbl_80884324
    li r30, 0x0
    lwz r3, 0x96c(r8)
    mr r4, r31
    li r5, 0x65
    li r6, 0x1
    srwi r7, r3, 31
    clrlwi r3, r3, 31
    xor r3, r3, r7
    subf r3, r7, r3
    stw r3, 0x96c(r8)
    stw r0, 0x970(r8)
    stfs f0, 0x974(r8)
    stfs f0, 0x978(r8)
    stw r30, 0x14d0(r31)
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    stw r30, 0x14d4(r31)
    b lbl_fn_802C6DF4_00001CC4
lbl_fn_802C6DF4_0000128C:
    lwz r0, 0x14d4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_802C6DF4_0000189C
    lwz r0, 0x1524(r3)
    cmpwi r0, 0x0
    beq lbl_fn_802C6DF4_00001438
    lfs f7, lbl_808842A8
    addi r30, r3, 0x14f4
    lfs f0, lbl_808842AC
    li r4, 0x79
    lfs f1, lbl_80884320
    stfs f7, 0x1520(r3)
    stfs f7, 0x1518(r3)
    stfs f7, 0x1514(r3)
    stfs f7, 0x1510(r3)
    stfs f7, 0x150c(r3)
    stfs f7, 0x1504(r3)
    stfs f7, 0x1500(r3)
    stfs f7, 0x14fc(r3)
    stfs f7, 0x14f8(r3)
    stfs f0, 0x151c(r3)
    stfs f0, 0x1508(r3)
    stfs f0, 0x14f4(r3)
    addi r3, r1, 0x480
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x480
    addi r5, r1, 0x450
    bl fn_805F89F0
    addi r6, r1, 0x450
    lis r5, lbl_807C83A8@ha
    psq_l f1, 0x0(r6), 0, 0
    addi r4, r5, lbl_807C83A8@l
    psq_l f2, 0x8(r6), 0, 0
    mr r29, r30
    psq_l f3, 0x10(r6), 0, 0
    addi r3, r1, 0x420
    psq_l f4, 0x18(r6), 0, 0
    psq_l f5, 0x20(r6), 0, 0
    psq_l f6, 0x28(r6), 0, 0
    psq_st f6, 0x28(r30), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    lfs f1, lbl_807C83A8@l(r5)
    lfs f2, 0x4(r4)
    lfs f3, 0x8(r4)
    bl fn_805F9160
    mr r3, r29
    addi r4, r1, 0x420
    addi r5, r1, 0x3f0
    bl fn_805F89F0
    addi r6, r1, 0x3f0
    lfs f0, lbl_808842A8
    psq_l f1, 0x0(r6), 0, 0
    lis r3, lbl_80746C90@ha
    psq_l f2, 0x8(r6), 0, 0
    addi r3, r3, lbl_80746C90@l
    lwz r7, 0x1524(r31)
    addi r4, r3, 0x10b
    lfs f7, lbl_8088438C
    li r5, 0x0
    addi r28, r7, 0xb0
    psq_l f3, 0x10(r6), 0, 0
    psq_l f4, 0x18(r6), 0, 0
    mr r3, r28
    psq_l f5, 0x20(r6), 0, 0
    psq_l f6, 0x28(r6), 0, 0
    psq_st f6, 0x28(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    stfs f7, 0xcc(r1)
    stfs f0, 0xd0(r1)
    stfs f0, 0xd4(r1)
    stfs f7, 0x1500(r31)
    stfs f0, 0x1510(r31)
    stfs f0, 0x1520(r31)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802C6DF4_000013E8
    li r6, 0x0
    b lbl_fn_802C6DF4_000013F4
lbl_fn_802C6DF4_000013E8:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r28)
    add r6, r3, r0
lbl_fn_802C6DF4_000013F4:
    psq_l f1, 0x0(r6), 0, 0
    addi r4, r31, 0x14f4
    psq_l f2, 0x8(r6), 0, 0
    addi r3, r1, 0x510
    psq_l f3, 0x10(r6), 0, 0
    mr r5, r4
    psq_l f4, 0x18(r6), 0, 0
    psq_l f5, 0x20(r6), 0, 0
    psq_l f6, 0x28(r6), 0, 0
    psq_st f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f4, 0x18(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    bl fn_805F89F0
    b lbl_fn_802C6DF4_00001CC4
lbl_fn_802C6DF4_00001438:
    addi r3, r3, 0x14dc
    lfs f0, lbl_80884300
    lfs f2, 0x8(r3)
    addi r29, r1, 0x108
    psq_l f1, 0x0(r3), 0, 0
    fabs f7, f2
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x110(r1)
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_802C6DF4_00001488
    lfs f7, 0x108(r1)
    lfs f0, lbl_808842A8
    fcmpo cr0, f7, f0
    ble lbl_fn_802C6DF4_0000147C
    lfs f0, lbl_80884304
    b lbl_fn_802C6DF4_00001480
lbl_fn_802C6DF4_0000147C:
    lfs f0, lbl_80884308
lbl_fn_802C6DF4_00001480:
    stfs f0, 0xa0(r1)
    b lbl_fn_802C6DF4_0000149C
lbl_fn_802C6DF4_00001488:
    frsp f2, f2
    lfs f1, 0x108(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0xa0(r1)
lbl_fn_802C6DF4_0000149C:
    lfs f0, 0xa0(r1)
    addi r3, r1, 0x380
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f7, lbl_808842A8
    addi r4, r1, 0x90
    lfs f26, 0x388(r1)
    mr r5, r4
    lfs f27, 0x384(r1)
    addi r3, r1, 0x3b0
    lfs f28, 0x380(r1)
    lfs f29, 0x398(r1)
    lfs f30, 0x394(r1)
    lfs f31, 0x390(r1)
    lfs f13, 0x3a8(r1)
    lfs f12, 0x3a4(r1)
    lfs f11, 0x3a0(r1)
    lfs f10, 0x3ac(r1)
    lfs f9, 0x39c(r1)
    lfs f8, 0x38c(r1)
    lfs f0, lbl_808842AC
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x110(r1)
    stfs f7, 0x3e0(r1)
    stfs f7, 0x3e4(r1)
    stfs f7, 0x3e8(r1)
    stfs f0, 0x3ec(r1)
    stfs f28, 0x60(r1)
    stfs f27, 0x64(r1)
    stfs f26, 0x68(r1)
    stfs f28, 0x3b0(r1)
    stfs f27, 0x3b4(r1)
    stfs f26, 0x3b8(r1)
    stfs f31, 0x6c(r1)
    stfs f30, 0x70(r1)
    stfs f29, 0x74(r1)
    stfs f31, 0x3c0(r1)
    stfs f30, 0x3c4(r1)
    stfs f29, 0x3c8(r1)
    stfs f11, 0x78(r1)
    stfs f12, 0x7c(r1)
    stfs f13, 0x80(r1)
    stfs f11, 0x3d0(r1)
    stfs f12, 0x3d4(r1)
    stfs f13, 0x3d8(r1)
    stfs f8, 0x84(r1)
    stfs f9, 0x88(r1)
    stfs f10, 0x8c(r1)
    stfs f8, 0x3bc(r1)
    stfs f9, 0x3cc(r1)
    stfs f10, 0x3dc(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x98(r1)
    bl fn_805F9750
    lfs f2, 0x98(r1)
    lfs f0, lbl_80884300
    fabs f7, f2
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_802C6DF4_000015B8
    lfs f7, 0x94(r1)
    lfs f0, lbl_808842A8
    fcmpo cr0, f7, f0
    ble lbl_fn_802C6DF4_000015A8
    lfs f0, lbl_80884304
    b lbl_fn_802C6DF4_000015AC
lbl_fn_802C6DF4_000015A8:
    lfs f0, lbl_80884308
lbl_fn_802C6DF4_000015AC:
    fneg f0, f0
    stfs f0, 0x9c(r1)
    b lbl_fn_802C6DF4_000015CC
lbl_fn_802C6DF4_000015B8:
    lfs f1, 0x94(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x9c(r1)
lbl_fn_802C6DF4_000015CC:
    lfs f7, lbl_808842A8
    addi r3, r1, 0x9c
    lfs f0, lbl_808842AC
    lis r5, lbl_807C83A8@ha
    fmr f2, f7
    stfs f7, 0x1520(r31)
    psq_l f1, 0x0(r3), 0, 0
    addi r4, r5, lbl_807C83A8@l
    stfs f7, 0x1518(r31)
    addi r30, r31, 0x14f4
    stfs f7, 0x1514(r31)
    addi r3, r1, 0x350
    stfs f7, 0x1510(r31)
    stfs f7, 0x150c(r31)
    stfs f7, 0x1504(r31)
    stfs f7, 0x1500(r31)
    stfs f7, 0x14fc(r31)
    stfs f7, 0x14f8(r31)
    stfs f0, 0x151c(r31)
    stfs f0, 0x1508(r31)
    stfs f0, 0x14f4(r31)
    psq_st f1, 0x0(r29), 0, 0
    lfs f1, lbl_807C83A8@l(r5)
    stfs f2, 0x110(r1)
    lfs f2, 0x4(r4)
    stfs f7, 0xa4(r1)
    lfs f3, 0x8(r4)
    bl fn_805F9160
    mr r3, r30
    addi r4, r1, 0x350
    addi r5, r1, 0x320
    bl fn_805F89F0
    addi r3, r1, 0x320
    lfs f8, lbl_808842A8
    psq_l f1, 0x0(r3), 0, 0
    addi r29, r1, 0x4e0
    psq_l f2, 0x8(r3), 0, 0
    addi r28, r1, 0x1d0
    psq_l f3, 0x10(r3), 0, 0
    lfs f9, lbl_8088438C
    lfs f0, 0x110(r1)
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    fcmpu cr0, f8, f0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f6, 0x28(r30), 0, 0
    lfs f7, lbl_808842AC
    psq_st f2, 0x8(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    stfs f9, 0x1500(r31)
    stfs f8, 0x1510(r31)
    stfs f8, 0x1520(r31)
    stfs f9, 0xc0(r1)
    stfs f8, 0xc4(r1)
    stfs f8, 0xc8(r1)
    stfs f8, 0x50c(r1)
    stfs f8, 0x504(r1)
    stfs f8, 0x500(r1)
    stfs f8, 0x4fc(r1)
    stfs f8, 0x4f8(r1)
    stfs f8, 0x4f0(r1)
    stfs f8, 0x4ec(r1)
    stfs f8, 0x4e8(r1)
    stfs f8, 0x4e4(r1)
    stfs f7, 0x508(r1)
    stfs f7, 0x4f4(r1)
    stfs f7, 0x4e0(r1)
    stfs f8, 0x1fc(r1)
    stfs f8, 0x1f4(r1)
    stfs f8, 0x1f0(r1)
    stfs f8, 0x1ec(r1)
    stfs f8, 0x1e8(r1)
    stfs f8, 0x1e0(r1)
    stfs f8, 0x1dc(r1)
    stfs f8, 0x1d8(r1)
    stfs f8, 0x1d4(r1)
    stfs f7, 0x1f8(r1)
    stfs f7, 0x1e4(r1)
    stfs f7, 0x1d0(r1)
    beq lbl_fn_802C6DF4_0000176C
    fmr f1, f0
    addi r3, r1, 0x2c0
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r28
    addi r4, r1, 0x2c0
    addi r5, r1, 0x2f0
    bl fn_805F89F0
    addi r3, r1, 0x2f0
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    psq_st f2, 0x8(r28), 0, 0
    psq_st f3, 0x10(r28), 0, 0
    psq_st f4, 0x18(r28), 0, 0
    psq_st f5, 0x20(r28), 0, 0
    psq_st f6, 0x28(r28), 0, 0
lbl_fn_802C6DF4_0000176C:
    lfs f0, lbl_808842A8
    lfs f1, 0x10c(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_802C6DF4_000017CC
    addi r3, r1, 0x260
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r28
    addi r4, r1, 0x260
    addi r5, r1, 0x290
    bl fn_805F89F0
    addi r3, r1, 0x290
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    psq_st f2, 0x8(r28), 0, 0
    psq_st f3, 0x10(r28), 0, 0
    psq_st f4, 0x18(r28), 0, 0
    psq_st f5, 0x20(r28), 0, 0
    psq_st f6, 0x28(r28), 0, 0
lbl_fn_802C6DF4_000017CC:
    lfs f0, lbl_808842A8
    lfs f1, 0x108(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_802C6DF4_0000182C
    addi r3, r1, 0x200
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r28
    addi r4, r1, 0x200
    addi r5, r1, 0x230
    bl fn_805F89F0
    addi r3, r1, 0x230
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    psq_st f2, 0x8(r28), 0, 0
    psq_st f3, 0x10(r28), 0, 0
    psq_st f4, 0x18(r28), 0, 0
    psq_st f5, 0x20(r28), 0, 0
    psq_st f6, 0x28(r28), 0, 0
lbl_fn_802C6DF4_0000182C:
    mr r3, r29
    mr r4, r28
    addi r5, r1, 0x1a0
    bl fn_805F89F0
    addi r6, r1, 0x1a0
    addi r4, r31, 0x14f4
    psq_l f1, 0x0(r6), 0, 0
    mr r5, r4
    psq_l f2, 0x8(r6), 0, 0
    addi r3, r1, 0x4e0
    psq_l f3, 0x10(r6), 0, 0
    psq_l f4, 0x18(r6), 0, 0
    psq_l f5, 0x20(r6), 0, 0
    psq_l f6, 0x28(r6), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f6, 0x28(r29), 0, 0
    lfs f0, 0x14e8(r31)
    stfs f0, 0x4ec(r1)
    lfs f0, 0x14ec(r31)
    stfs f0, 0x4fc(r1)
    lfs f0, 0x14f0(r31)
    stfs f0, 0x50c(r1)
    bl fn_805F89F0
    b lbl_fn_802C6DF4_00001CC4
lbl_fn_802C6DF4_0000189C:
    lfs f9, 0x1520(r3)
    li r0, 0x0
    lfs f10, 0x1510(r3)
    addi r4, r1, 0x540
    lfs f11, 0x1500(r3)
    addi r5, r1, 0xfc
    stfs f11, 0xfc(r1)
    addi r6, r1, 0xf0
    addi r8, r31, 0x5b8
    li r7, 0x6
    stfs f10, 0x100(r1)
    li r9, 0x0
    stfs f9, 0x104(r1)
    lfs f8, 0x14e4(r3)
    lfs f7, 0x14e0(r3)
    lfs f0, 0x14dc(r3)
    fadds f8, f9, f8
    fadds f7, f10, f7
    lwz r3, lbl_8087EE98
    fadds f0, f11, f0
    stfs f8, 0xf8(r1)
    stfs f0, 0xf0(r1)
    stfs f7, 0xf4(r1)
    stw r0, 0x574(r1)
    stw r0, 0x578(r1)
    stw r0, 0x57c(r1)
    stw r0, 0x580(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_802C6DF4_00001CAC
    lwz r3, 0x578(r1)
    li r28, 0x0
    cmpwi r3, 0x0
    beq lbl_fn_802C6DF4_00001938
    lwz r0, 0x8(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_802C6DF4_00001938
    lwz r28, 0xc(r3)
lbl_fn_802C6DF4_00001938:
    cmplw r28, r31
    bne lbl_fn_802C6DF4_0000195C
    lfs f0, 0xf0(r1)
    stfs f0, 0x1500(r31)
    lfs f0, 0xf4(r1)
    stfs f0, 0x1510(r31)
    lfs f0, 0xf8(r1)
    stfs f0, 0x1520(r31)
    b lbl_fn_802C6DF4_00001CC4
lbl_fn_802C6DF4_0000195C:
    cmpwi r28, 0x0
    beq lbl_fn_802C6DF4_00001A90
    addi r4, r31, 0x14dc
    lfs f2, 0x14e4(r31)
    psq_l f1, 0x0(r4), 0, 0
    addi r3, r1, 0xe4
    psq_st f1, 0x0(r3), 0, 0
    mr r4, r3
    stfs f2, 0xec(r1)
    bl fn_805F98D0
    lfs f8, 0xe4(r1)
    lis r4, lbl_80746C90@ha
    lfs f9, lbl_808843B0
    addi r4, r4, lbl_80746C90@l
    lfs f7, 0xe8(r1)
    li r8, 0x1
    lfs f0, 0xec(r1)
    fmuls f8, f8, f9
    fmuls f7, f7, f9
    li r0, 0x3c
    fmuls f0, f0, f9
    stfs f8, 0xe4(r1)
    lfs f1, lbl_808842AC
    stfs f7, 0xe8(r1)
    addi r3, r1, 0x10
    addi r4, r4, 0x111
    stfs f0, 0xec(r1)
    addi r5, r1, 0x550
    li r6, 0x0
    li r7, -0x1
    stw r8, 0x14d4(r31)
    stw r0, 0x14d8(r31)
    lwz r8, 0x578(r1)
    lwz r0, 0xc(r8)
    stw r0, 0x1524(r31)
    bl fn_800C344C
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    lwz r0, 0x55c(r28)
    cmpwi r0, 0x5
    beq lbl_fn_802C6DF4_00001CC4
    lwz r0, 0x1700(r31)
    cmpwi r0, 0x0
    beq lbl_fn_802C6DF4_00001A1C
    li r3, 0x583
    bl fn_80219E6C
    b lbl_fn_802C6DF4_00001A24
lbl_fn_802C6DF4_00001A1C:
    li r3, 0x579
    bl fn_80219E6C
lbl_fn_802C6DF4_00001A24:
    lfs f0, 0x1520(r31)
    li r0, 0x1e
    lfs f7, 0x1510(r31)
    mr r7, r3
    lfs f8, 0x1500(r31)
    mr r4, r31
    stfs f8, 0xb4(r1)
    addi r9, r1, 0xb4
    lfs f1, lbl_808842A8
    addi r10, r31, 0x14dc
    stfs f7, 0xb8(r1)
    li r6, 0x0
    li r8, 0x2710
    stfs f0, 0xbc(r1)
    stw r0, 0x8(r1)
    lwz r3, lbl_8087F048
    lwz r5, 0x1524(r31)
    bl fn_800FDB20
    lwz r3, 0x1524(r31)
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_802C6DF4_00001CC4
    addi r4, r1, 0xe4
    li r5, 0x33
    bl fn_8015E4B0
    b lbl_fn_802C6DF4_00001CC4
lbl_fn_802C6DF4_00001A90:
    lfs f0, 0x14e4(r31)
    li r4, 0x1
    li r3, 0xa
    li r0, 0x0
    fneg f7, f0
    stw r4, 0x14d4(r31)
    addi r4, r1, 0x550
    lfs f0, 0x14e0(r31)
    stw r3, 0x14d8(r31)
    addi r3, r31, 0x14e8
    stw r0, 0x1524(r31)
    fneg f8, f0
    lfs f0, 0x14dc(r31)
    addi r5, r1, 0xa8
    psq_l f1, 0x0(r4), 0, 0
    addi r28, r1, 0xd8
    lfs f2, 0x558(r1)
    fneg f9, f0
    stfs f2, 0x14f0(r31)
    frsp f2, f7
    lfs f0, lbl_80884300
    stfs f8, 0xac(r1)
    fabs f8, f2
    psq_st f1, 0x0(r3), 0, 0
    stfs f9, 0xa8(r1)
    frsp f8, f8
    psq_l f1, 0x0(r5), 0, 0
    stfs f7, 0xb0(r1)
    fcmpo cr0, f8, f0
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0xe0(r1)
    bge lbl_fn_802C6DF4_00001B34
    lfs f7, 0xd8(r1)
    lfs f0, lbl_808842A8
    fcmpo cr0, f7, f0
    ble lbl_fn_802C6DF4_00001B28
    lfs f0, lbl_80884304
    b lbl_fn_802C6DF4_00001B2C
lbl_fn_802C6DF4_00001B28:
    lfs f0, lbl_80884308
lbl_fn_802C6DF4_00001B2C:
    stfs f0, 0x58(r1)
    b lbl_fn_802C6DF4_00001B48
lbl_fn_802C6DF4_00001B34:
    frsp f2, f2
    lfs f1, 0xd8(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x58(r1)
lbl_fn_802C6DF4_00001B48:
    lfs f0, 0x58(r1)
    addi r3, r1, 0x130
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f7, lbl_808842A8
    addi r4, r1, 0x48
    lfs f31, 0x138(r1)
    mr r5, r4
    lfs f30, 0x134(r1)
    addi r3, r1, 0x160
    lfs f29, 0x130(r1)
    lfs f28, 0x148(r1)
    lfs f27, 0x144(r1)
    lfs f26, 0x140(r1)
    lfs f13, 0x158(r1)
    lfs f12, 0x154(r1)
    lfs f11, 0x150(r1)
    lfs f10, 0x15c(r1)
    lfs f9, 0x14c(r1)
    lfs f8, 0x13c(r1)
    lfs f0, lbl_808842AC
    psq_l f1, 0x0(r28), 0, 0
    lfs f2, 0xe0(r1)
    stfs f7, 0x190(r1)
    stfs f7, 0x194(r1)
    stfs f7, 0x198(r1)
    stfs f0, 0x19c(r1)
    stfs f29, 0x18(r1)
    stfs f30, 0x1c(r1)
    stfs f31, 0x20(r1)
    stfs f29, 0x160(r1)
    stfs f30, 0x164(r1)
    stfs f31, 0x168(r1)
    stfs f26, 0x24(r1)
    stfs f27, 0x28(r1)
    stfs f28, 0x2c(r1)
    stfs f26, 0x170(r1)
    stfs f27, 0x174(r1)
    stfs f28, 0x178(r1)
    stfs f11, 0x30(r1)
    stfs f12, 0x34(r1)
    stfs f13, 0x38(r1)
    stfs f11, 0x180(r1)
    stfs f12, 0x184(r1)
    stfs f13, 0x188(r1)
    stfs f8, 0x3c(r1)
    stfs f9, 0x40(r1)
    stfs f10, 0x44(r1)
    stfs f8, 0x16c(r1)
    stfs f9, 0x17c(r1)
    stfs f10, 0x18c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x50(r1)
    bl fn_805F9750
    lfs f2, 0x50(r1)
    lfs f0, lbl_80884300
    fabs f7, f2
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_802C6DF4_00001C64
    lfs f7, 0x4c(r1)
    lfs f0, lbl_808842A8
    fcmpo cr0, f7, f0
    ble lbl_fn_802C6DF4_00001C54
    lfs f0, lbl_80884304
    b lbl_fn_802C6DF4_00001C58
lbl_fn_802C6DF4_00001C54:
    lfs f0, lbl_80884308
lbl_fn_802C6DF4_00001C58:
    fneg f0, f0
    stfs f0, 0x54(r1)
    b lbl_fn_802C6DF4_00001C78
lbl_fn_802C6DF4_00001C64:
    lfs f1, 0x4c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x54(r1)
lbl_fn_802C6DF4_00001C78:
    addi r3, r1, 0x54
    lfs f2, lbl_808842A8
    psq_l f1, 0x0(r3), 0, 0
    addi r4, r1, 0x550
    stfs f2, 0x5c(r1)
    addi r5, r1, 0xd8
    lwz r3, lbl_8087F048
    li r6, 0x1
    psq_st f1, 0x0(r28), 0, 0
    li r7, 0x2
    stfs f2, 0xe0(r1)
    bl fn_80101434
    b lbl_fn_802C6DF4_00001CC4
lbl_fn_802C6DF4_00001CAC:
    lfs f0, 0xf0(r1)
    stfs f0, 0x1500(r31)
    lfs f0, 0xf4(r1)
    stfs f0, 0x1510(r31)
    lfs f0, 0xf8(r1)
    stfs f0, 0x1520(r31)
lbl_fn_802C6DF4_00001CC4:
    lwz r0, 0x604(r1)
    psq_l f31, 0x5f8(r1), 0, 0
    lfd f31, 0x5f0(r1)
    psq_l f30, 0x5e8(r1), 0, 0
    lfd f30, 0x5e0(r1)
    psq_l f29, 0x5d8(r1), 0, 0
    lfd f29, 0x5d0(r1)
    psq_l f28, 0x5c8(r1), 0, 0
    lfd f28, 0x5c0(r1)
    psq_l f27, 0x5b8(r1), 0, 0
    lfd f27, 0x5b0(r1)
    psq_l f26, 0x5a8(r1), 0, 0
    lfd f26, 0x5a0(r1)
    lwz r31, 0x59c(r1)
    lwz r30, 0x598(r1)
    lwz r29, 0x594(r1)
    lwz r28, 0x590(r1)
    mtlr r0
    addi r1, r1, 0x600
    blr
}
