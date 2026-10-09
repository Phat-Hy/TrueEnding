#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void fn_8004B378(void);
extern void fn_80092814(void);
extern void fn_80116BD4(void);
extern void fn_80178088(void);
extern void fn_8037EF48(void);
extern void fn_8037F9AC(void);
extern void fn_80382A1C(void);
extern void fn_8038E23C(void);
extern void fn_803918EC(void);
extern void fn_803920C8(void);
extern void fn_80392510(void);
extern void fn_803928C0(void);
extern void fn_80392A04(void);
extern void fn_80392FE8(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_805F9990(void);
extern void fn_805F99B0(void);
extern void fn_8068A850(void);
extern void fn_8068AD58(void);
extern void fn_8068AEA4(void);

/* External data declarations */
extern u8 lbl_8074E008[];
extern u8 lbl_8074E210[];

/* Small data declarations */
extern u32 lbl_8087DCFC;
extern u32 lbl_8087DD00;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F0A8;
extern u32 lbl_808858E8;
extern u32 lbl_808858EC;
extern u32 lbl_808858F8;
extern u32 lbl_80885904;
extern u32 lbl_80885910;
extern u32 lbl_80885914;
extern u32 lbl_80885930;
extern u32 lbl_80885934;
extern u32 lbl_8088593C;
extern u32 lbl_80885944;
extern u32 lbl_80885988;
extern u32 lbl_808859C8;
extern u32 lbl_808859CC;
extern u32 lbl_808859D0;
extern u32 lbl_808859E0;
extern u32 lbl_808859E4;
extern u32 lbl_80885A70;
extern u32 lbl_80885A74;
extern u32 lbl_80885A78;
extern u32 lbl_80885A7C;
extern u32 lbl_80885A80;
extern u32 lbl_80885A84;

/* Function declarations */
void fn_80389060(void);
void fn_80389210(void);
void fn_803893A0(void);
void fn_8038952C(void);
void fn_80389678(void);
void fn_803897EC(void);
void fn_80389838(void);
void fn_80389884(void);
void fn_80389A00(void);
void fn_8038A1B8(void);
void fn_8038A1D8(void);
void fn_8038A200(void);
void fn_8038A5F0(void);

asm void fn_80389060(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    lfs f3, lbl_808858E8
    stw r0, 0xb4(r1)
    lfs f0, lbl_80885914
    stw r31, 0xac(r1)
    addi r31, r1, 0x2c
    stw r30, 0xa8(r1)
    stw r29, 0xa4(r1)
    mr r29, r4
    stw r28, 0xa0(r1)
    mr r28, r3
    addi r3, r1, 0x68
    lfs f2, 0x530(r4)
    psq_l f1, 0x528(r4), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    stfs f3, 0x20(r1)
    stfs f3, 0x24(r1)
    stfs f0, 0x28(r1)
    lfs f0, 0x538(r4)
    li r4, 0x79
    stfs f2, 0x34(r1)
    fmr f1, f0
    bl fn_805F8E70
    addi r4, r1, 0x20
    addi r3, r1, 0x68
    mr r5, r4
    bl fn_805F93C0
    lfs f2, 0x530(r29)
    addi r30, r1, 0x14
    psq_l f1, 0x528(r29), 0, 0
    addi r3, r1, 0x38
    lfs f4, lbl_808858E8
    li r4, 0x79
    stfs f4, 0x8(r1)
    lfs f3, lbl_80885A70
    lfs f0, lbl_80885A74
    stfs f3, 0xc(r1)
    lfs f5, 0x2c(r1)
    lfs f4, 0x20(r1)
    stfs f0, 0x10(r1)
    fadds f6, f5, f4
    lfs f5, 0x30(r1)
    lfs f4, 0x24(r1)
    lfs f3, 0x34(r1)
    fadds f4, f5, f4
    lfs f0, 0x28(r1)
    lfs f5, 0x538(r29)
    fadds f0, f3, f0
    psq_st f1, 0x0(r30), 0, 0
    fmr f1, f5
    stfs f6, 0x2c(r1)
    stfs f4, 0x30(r1)
    stfs f0, 0x34(r1)
    stfs f2, 0x1c(r1)
    bl fn_805F8E70
    addi r4, r1, 0x8
    addi r3, r1, 0x38
    mr r5, r4
    bl fn_805F93C0
    lfs f3, 0x14(r1)
    mr r3, r28
    lfs f0, 0x8(r1)
    lfs f5, 0x18(r1)
    fadds f6, f3, f0
    lfs f4, 0xc(r1)
    lfs f3, 0x1c(r1)
    lfs f0, 0x10(r1)
    fadds f4, f5, f4
    stfs f6, 0x14(r1)
    fadds f0, f3, f0
    stfs f4, 0x18(r1)
    fmr f2, f0
    psq_l f1, 0x0(r30), 0, 0
    psq_st f1, 0x8(r28), 0, 0
    psq_l f1, 0x0(r31), 0, 0
    stfs f2, 0x10(r28)
    lfs f2, 0x34(r1)
    stfs f0, 0x1c(r1)
    psq_st f1, 0x14(r28), 0, 0
    stfs f2, 0x1c(r28)
    bl fn_8004B378
    mr r4, r28
    addi r3, r28, 0x1f4
    bl fn_80392A04
    mr r3, r28
    bl fn_80392510
    mr r3, r28
    bl fn_80392FE8
    mr r3, r28
    bl fn_803918EC
    mr r3, r28
    bl fn_803920C8
    mr r3, r28
    bl fn_803928C0
    addi r3, r28, 0x1f4
    bl fn_8004B378
    lwz r3, lbl_8087EFB4
    addi r4, r28, 0x1f4
    bl fn_80116BD4
    lwz r0, 0xb4(r1)
    lwz r31, 0xac(r1)
    lwz r30, 0xa8(r1)
    lwz r29, 0xa4(r1)
    lwz r28, 0xa0(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_80389210(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    lfs f3, lbl_808858E8
    stw r0, 0x74(r1)
    lfs f0, lbl_80885A78
    stw r31, 0x6c(r1)
    addi r31, r1, 0x5c
    stw r30, 0x68(r1)
    mr r30, r3
    addi r3, r1, 0x2c
    psq_l f1, 0x528(r4), 0, 0
    lfs f2, 0x530(r4)
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x64(r1)
    stfs f3, 0x20(r1)
    stfs f0, 0x24(r1)
    stfs f3, 0x28(r1)
    bl fn_80178088
    lfs f5, 0x34(r1)
    addi r3, r1, 0x8
    lfs f3, 0x28(r1)
    addi r5, r1, 0x50
    lfs f4, 0x30(r1)
    mr r4, r3
    fadds f5, f5, f3
    lfs f0, 0x24(r1)
    lfs f3, 0x64(r1)
    fadds f6, f4, f0
    lfs f4, 0x2c(r1)
    fsubs f2, f3, f5
    lfs f3, 0x20(r1)
    lfs f0, 0x60(r1)
    fadds f3, f4, f3
    stfs f6, 0x3c(r1)
    fsubs f7, f0, f6
    lfs f0, 0x5c(r1)
    stfs f3, 0x38(r1)
    fsubs f0, f0, f3
    stfs f7, 0x54(r1)
    stfs f0, 0x50(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f5, 0x40(r1)
    stfs f2, 0x58(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x10(r1)
    bl fn_805F98D0
    lfs f5, 0x10(r1)
    addi r4, r1, 0x44
    lfs f4, lbl_80885988
    mr r3, r30
    lfs f0, 0xc(r1)
    fmuls f5, f5, f4
    lfs f3, 0x8(r1)
    fmuls f6, f0, f4
    lfs f0, 0x64(r1)
    fmuls f4, f3, f4
    lfs f3, 0x60(r1)
    fadds f7, f0, f5
    lfs f0, 0x5c(r1)
    fadds f3, f3, f6
    stfs f4, 0x14(r1)
    fadds f0, f0, f4
    fmr f2, f7
    stfs f3, 0x48(r1)
    stfs f0, 0x44(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x8(r30), 0, 0
    psq_l f1, 0x0(r31), 0, 0
    stfs f2, 0x10(r30)
    lfs f2, 0x64(r1)
    stfs f6, 0x18(r1)
    stfs f5, 0x1c(r1)
    stfs f7, 0x4c(r1)
    psq_st f1, 0x14(r30), 0, 0
    stfs f2, 0x1c(r30)
    bl fn_8004B378
    mr r4, r30
    addi r3, r30, 0x1f4
    bl fn_80392A04
    mr r3, r30
    bl fn_80392510
    mr r3, r30
    bl fn_80392FE8
    mr r3, r30
    bl fn_803918EC
    mr r3, r30
    bl fn_803920C8
    mr r3, r30
    bl fn_803928C0
    addi r3, r30, 0x1f4
    bl fn_8004B378
    lwz r3, lbl_8087EFB4
    addi r4, r30, 0x1f4
    bl fn_80116BD4
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_803893A0(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    lfs f4, lbl_80885934
    stw r0, 0x94(r1)
    addi r5, r1, 0x8
    lfs f3, lbl_808859E0
    stw r31, 0x8c(r1)
    addi r31, r1, 0x38
    lfs f0, lbl_808858F8
    stw r30, 0x88(r1)
    addi r30, r1, 0x14
    lfs f5, lbl_80885A7C
    stw r29, 0x84(r1)
    mr r29, r4
    stw r28, 0x80(r1)
    mr r28, r3
    mr r3, r30
    psq_l f1, 0x528(r4), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    lfs f2, 0x530(r4)
    mr r4, r30
    lfs f6, 0x3c(r1)
    stfs f4, 0x8(r1)
    fadds f4, f6, f5
    stfs f3, 0xc(r1)
    stfs f2, 0x40(r1)
    fmr f2, f0
    psq_l f1, 0x0(r5), 0, 0
    stfs f4, 0x3c(r1)
    stfs f0, 0x10(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x1c(r1)
    bl fn_805F98D0
    lfs f1, 0x538(r29)
    addi r3, r1, 0x48
    li r4, 0x79
    bl fn_805F8E70
    addi r4, r1, 0x2c
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x1c(r1)
    mr r5, r4
    psq_st f1, 0x0(r4), 0, 0
    addi r3, r1, 0x48
    stfs f2, 0x34(r1)
    bl fn_805F93C0
    lfs f5, 0x2c(r1)
    addi r4, r1, 0x20
    lfs f4, lbl_80885910
    mr r3, r28
    lfs f3, 0x30(r1)
    fmuls f7, f5, f4
    lfs f0, 0x34(r1)
    fmuls f6, f3, f4
    lfs f3, 0x3c(r1)
    fmuls f5, f0, f4
    lfs f0, 0x38(r1)
    fsubs f8, f3, f6
    lfs f4, 0x40(r1)
    fsubs f0, f0, f7
    stfs f7, 0x2c(r1)
    fsubs f3, f4, f5
    stfs f8, 0x24(r1)
    stfs f0, 0x20(r1)
    fmr f2, f3
    stfs f6, 0x30(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f5, 0x34(r1)
    psq_st f1, 0x8(r28), 0, 0
    psq_l f1, 0x0(r31), 0, 0
    stfs f2, 0x10(r28)
    lfs f2, 0x40(r1)
    stfs f3, 0x28(r1)
    psq_st f1, 0x14(r28), 0, 0
    stfs f2, 0x1c(r28)
    bl fn_8004B378
    mr r4, r28
    addi r3, r28, 0x1f4
    bl fn_80392A04
    mr r3, r28
    bl fn_80392510
    mr r3, r28
    bl fn_803918EC
    mr r3, r28
    bl fn_803920C8
    mr r3, r28
    bl fn_803928C0
    addi r3, r28, 0x1f4
    bl fn_8004B378
    lwz r3, lbl_8087EFB4
    addi r4, r28, 0x1f4
    bl fn_80116BD4
    lwz r0, 0x94(r1)
    lwz r31, 0x8c(r1)
    lwz r30, 0x88(r1)
    lwz r29, 0x84(r1)
    lwz r28, 0x80(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_8038952C(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    li r5, 0x0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    stw r30, 0x48(r1)
    mr r30, r4
    lis r4, lbl_8074E210@ha
    stw r29, 0x44(r1)
    addi r4, r4, lbl_8074E210@l
    addi r31, r30, 0xb0
    mr r29, r3
    mr r3, r31
    addi r4, r4, 0x1eb
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8038952C_00000518
    li r5, 0x0
    b lbl_fn_8038952C_00000524
lbl_fn_8038952C_00000518:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r31)
    add r5, r3, r0
lbl_fn_8038952C_00000524:
    lfs f3, lbl_808858E8
    mr r4, r30
    lfs f4, 0x2c(r5)
    addi r3, r1, 0x14
    lfs f5, 0x1c(r5)
    lfs f6, 0xc(r5)
    lfs f0, lbl_80885944
    stfs f6, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f4, 0x34(r1)
    stfs f3, 0x8(r1)
    stfs f0, 0xc(r1)
    stfs f3, 0x10(r1)
    bl fn_80178088
    lfs f3, 0x1c(r1)
    addi r4, r1, 0x20
    lfs f0, 0x10(r1)
    addi r5, r1, 0x2c
    lfs f5, 0x18(r1)
    mr r3, r29
    fadds f6, f3, f0
    lfs f4, 0xc(r1)
    lfs f3, 0x14(r1)
    lfs f0, 0x8(r1)
    fadds f4, f5, f4
    fmr f2, f6
    fadds f0, f3, f0
    stfs f4, 0x24(r1)
    stfs f0, 0x20(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x8(r29), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0x10(r29)
    lfs f2, 0x34(r1)
    stfs f6, 0x28(r1)
    psq_st f1, 0x14(r29), 0, 0
    stfs f2, 0x1c(r29)
    bl fn_8004B378
    mr r4, r29
    addi r3, r29, 0x1f4
    bl fn_80392A04
    mr r3, r29
    bl fn_80392510
    mr r3, r29
    bl fn_803918EC
    mr r3, r29
    bl fn_803920C8
    mr r3, r29
    bl fn_803928C0
    addi r3, r29, 0x1f4
    bl fn_8004B378
    lwz r3, lbl_8087EFB4
    addi r4, r29, 0x1f4
    bl fn_80116BD4
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80389678(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    addi r31, r1, 0x14
    stw r30, 0x58(r1)
    addi r30, r1, 0x8
    stw r29, 0x54(r1)
    mr r29, r4
    stw r28, 0x50(r1)
    mr r28, r3
    psq_l f1, 0x4fc(r3), 0, 0
    lfs f2, 0x504(r3)
    stfs f2, 0x1c(r1)
    psq_st f1, 0x0(r31), 0, 0
    psq_l f1, 0x508(r3), 0, 0
    lfs f2, 0x510(r3)
    stfs f2, 0x10(r1)
    psq_st f1, 0x0(r30), 0, 0
    lwz r0, 0x518(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80389678_000006F4
    lfs f1, 0x538(r4)
    addi r3, r1, 0x20
    li r4, 0x79
    bl fn_805F8E70
    mr r4, r31
    mr r5, r31
    addi r3, r1, 0x20
    bl fn_805F93C0
    mr r4, r30
    mr r5, r30
    addi r3, r1, 0x20
    bl fn_805F93C0
    lfs f3, 0x14(r1)
    lfs f4, 0x528(r29)
    lfs f6, 0x18(r1)
    fadds f3, f3, f4
    lfs f0, 0x8(r1)
    lfs f5, 0x1c(r1)
    stfs f3, 0x14(r1)
    fadds f4, f0, f4
    lfs f3, 0xc(r1)
    lfs f7, 0x52c(r29)
    lfs f0, 0x10(r1)
    fadds f6, f6, f7
    fadds f3, f3, f7
    stfs f6, 0x18(r1)
    lfs f6, 0x530(r29)
    fadds f5, f5, f6
    stfs f4, 0x8(r1)
    fadds f0, f0, f6
    stfs f5, 0x1c(r1)
    stfs f3, 0xc(r1)
    stfs f0, 0x10(r1)
lbl_fn_80389678_000006F4:
    addi r3, r1, 0x14
    lfs f2, 0x1c(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r4, r1, 0x8
    psq_st f1, 0x8(r28), 0, 0
    mr r3, r28
    lfs f0, 0x514(r28)
    stfs f2, 0x10(r28)
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x10(r1)
    stfs f2, 0x1c(r28)
    psq_st f1, 0x14(r28), 0, 0
    stfs f0, 0x50(r28)
    bl fn_8004B378
    mr r4, r28
    addi r3, r28, 0x1f4
    bl fn_80392A04
    mr r3, r28
    bl fn_80392510
    mr r3, r28
    bl fn_803918EC
    mr r3, r28
    bl fn_803920C8
    mr r3, r28
    bl fn_803928C0
    addi r3, r28, 0x1f4
    bl fn_8004B378
    lwz r3, lbl_8087EFB4
    addi r4, r28, 0x1f4
    bl fn_80116BD4
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    lwz r28, 0x50(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_803897EC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lfs f0, lbl_80885A80
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lfs f1, 0x2e4(r4)
    fcmpo cr0, f1, f0
    mfcr r0
    srwi r0, r0, 31
    stw r0, 0x8f0(r3)
    bl fn_8037F9AC
    li r0, 0x0
    stw r0, 0x8f0(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80389838(void)
{
    nofralloc
    lwz r0, 0x7fc(r3)
    cmpw r0, r4
    beqlr
    lfs f0, lbl_808858E8
    li r5, 0x0
    stw r0, 0x800(r3)
    li r0, 0x3
    stw r4, 0x7fc(r3)
    stw r5, 0x808(r3)
    stw r5, 0x838(r3)
    stw r5, 0x880(r3)
    stfs f0, 0xa0c(r3)
    stfs f0, 0xa10(r3)
    stfs f0, 0xa14(r3)
    stfs f0, 0xa18(r3)
    stfs f0, 0xa1c(r3)
    lwz r3, lbl_8087F0A8
    stw r0, 0x49c(r3)
    blr
}

asm void fn_80389884(void)
{
    nofralloc
    lwz r5, 0xc20(r3)
    cmpwi r5, 0x0
    beq lbl_fn_80389884_00000920
    lwz r0, 0x34(r5)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_80389884_00000920
    lwz r0, 0xc84(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80389884_00000998
    lwz r7, lbl_8087EFA8
    li r0, 0x1
    lwz r5, 0xc54(r3)
    lwz r6, 0xd4(r7)
    stw r6, 0xc24(r3)
    lwz r6, 0xd8(r7)
    stw r6, 0xc28(r3)
    lwz r6, 0xdc(r7)
    stw r6, 0xc2c(r3)
    lwz r6, 0xe0(r7)
    stw r6, 0xc30(r3)
    lfs f0, 0xe4(r7)
    stfs f0, 0xc34(r3)
    lfs f0, 0xe8(r7)
    stfs f0, 0xc38(r3)
    lfs f0, 0xec(r7)
    stfs f0, 0xc3c(r3)
    lfs f0, 0xf0(r7)
    stfs f0, 0xc40(r3)
    lwz r6, 0xf4(r7)
    stw r6, 0xc44(r3)
    lwz r6, 0xf8(r7)
    stw r6, 0xc48(r3)
    lfs f0, 0xfc(r7)
    stfs f0, 0xc4c(r3)
    lfs f0, 0x100(r7)
    stfs f0, 0xc50(r3)
    lwz r6, lbl_8087EFA8
    stw r5, 0xd4(r6)
    lwz r5, 0xc58(r3)
    stw r5, 0xd8(r6)
    lwz r5, 0xc5c(r3)
    stw r5, 0xdc(r6)
    lwz r5, 0xc60(r3)
    stw r5, 0xe0(r6)
    lfs f0, 0xc64(r3)
    stfs f0, 0xe4(r6)
    lfs f0, 0xc68(r3)
    stfs f0, 0xe8(r6)
    lfs f0, 0xc6c(r3)
    stfs f0, 0xec(r6)
    lfs f0, 0xc70(r3)
    stfs f0, 0xf0(r6)
    lwz r5, 0xc74(r3)
    stw r5, 0xf4(r6)
    lwz r5, 0xc78(r3)
    stw r5, 0xf8(r6)
    lfs f0, 0xc7c(r3)
    stfs f0, 0xfc(r6)
    lfs f0, 0xc80(r3)
    stfs f0, 0x100(r6)
    stw r0, 0xc84(r3)
    b lbl_fn_80389884_00000998
lbl_fn_80389884_00000920:
    lwz r0, 0xc84(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80389884_00000998
    lwz r6, lbl_8087EFA8
    li r0, 0x0
    lwz r5, 0xc24(r3)
    stw r5, 0xd4(r6)
    lwz r5, 0xc28(r3)
    stw r5, 0xd8(r6)
    lwz r5, 0xc2c(r3)
    stw r5, 0xdc(r6)
    lwz r5, 0xc30(r3)
    stw r5, 0xe0(r6)
    lfs f0, 0xc34(r3)
    stfs f0, 0xe4(r6)
    lfs f0, 0xc38(r3)
    stfs f0, 0xe8(r6)
    lfs f0, 0xc3c(r3)
    stfs f0, 0xec(r6)
    lfs f0, 0xc40(r3)
    stfs f0, 0xf0(r6)
    lwz r5, 0xc44(r3)
    stw r5, 0xf4(r6)
    lwz r5, 0xc48(r3)
    stw r5, 0xf8(r6)
    lfs f0, 0xc4c(r3)
    stfs f0, 0xfc(r6)
    lfs f0, 0xc50(r3)
    stfs f0, 0x100(r6)
    stw r0, 0xc84(r3)
lbl_fn_80389884_00000998:
    stw r4, 0x804(r3)
    blr
}

asm void fn_80389A00(void)
{
    nofralloc
    stwu r1, -0x170(r1)
    mflr r0
    stw r0, 0x174(r1)
    stfd f31, 0x160(r1)
    psq_st f31, 0x168(r1), 0, 0
    stfd f30, 0x150(r1)
    psq_st f30, 0x158(r1), 0, 0
    stfd f29, 0x140(r1)
    psq_st f29, 0x148(r1), 0, 0
    stfd f28, 0x130(r1)
    psq_st f28, 0x138(r1), 0, 0
    stfd f27, 0x120(r1)
    psq_st f27, 0x128(r1), 0, 0
    stfd f26, 0x110(r1)
    psq_st f26, 0x118(r1), 0, 0
    stfd f25, 0x100(r1)
    psq_st f25, 0x108(r1), 0, 0
    stfd f24, 0xf0(r1)
    psq_st f24, 0xf8(r1), 0, 0
    stfd f23, 0xe0(r1)
    psq_st f23, 0xe8(r1), 0, 0
    stfd f22, 0xd0(r1)
    psq_st f22, 0xd8(r1), 0, 0
    stfd f21, 0xc0(r1)
    psq_st f21, 0xc8(r1), 0, 0
    stfd f20, 0xb0(r1)
    psq_st f20, 0xb8(r1), 0, 0
    stfd f19, 0xa0(r1)
    psq_st f19, 0xa8(r1), 0, 0
    stfd f18, 0x90(r1)
    psq_st f18, 0x98(r1), 0, 0
    stfd f17, 0x80(r1)
    psq_st f17, 0x88(r1), 0, 0
    stfd f16, 0x70(r1)
    psq_st f16, 0x78(r1), 0, 0
    stw r31, 0x6c(r1)
    mr r31, r4
    stw r30, 0x68(r1)
    mr r30, r3
    lwz r5, 0x800(r3)
    cmpwi r5, 0x4
    bne lbl_fn_80389A00_00000D4C
    lwz r0, 0x648(r4)
    cmpwi r0, 0x0
    bne lbl_fn_80389A00_00000D4C
    lbz r0, 0x910(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80389A00_00000D4C
    lfs f2, 0x10(r3)
    addi r4, r3, 0xa28
    psq_l f1, 0x8(r3), 0, 0
    addi r5, r3, 0xa34
    psq_st f1, 0x0(r4), 0, 0
    addi r6, r3, 0xa40
    psq_l f1, 0x14(r3), 0, 0
    addi r7, r3, 0xa4c
    stfs f2, 0xa30(r3)
    addi r8, r3, 0xa78
    lfs f2, 0x1c(r3)
    addi r9, r3, 0xaa8
    psq_st f1, 0x0(r5), 0, 0
    psq_l f1, 0x20(r3), 0, 0
    stfs f2, 0xa3c(r3)
    lfs f2, 0x28(r3)
    psq_st f1, 0x0(r6), 0, 0
    psq_l f1, 0x2c(r3), 0, 0
    stfs f2, 0xa48(r3)
    lfs f2, 0x34(r3)
    psq_st f1, 0x0(r7), 0, 0
    psq_l f1, 0x58(r3), 0, 0
    stfs f2, 0xa54(r3)
    psq_l f2, 0x60(r3), 0, 0
    psq_l f3, 0x68(r3), 0, 0
    psq_l f4, 0x70(r3), 0, 0
    psq_l f5, 0x78(r3), 0, 0
    psq_l f6, 0x80(r3), 0, 0
    psq_st f1, 0x0(r8), 0, 0
    lwz r4, 0x0(r3)
    psq_st f2, 0x8(r8), 0, 0
    lwz r0, 0x4(r3)
    psq_st f3, 0x10(r8), 0, 0
    lfs f22, 0x38(r3)
    psq_st f4, 0x18(r8), 0, 0
    lfs f21, 0x3c(r3)
    psq_st f5, 0x20(r8), 0, 0
    lfs f20, 0x40(r3)
    psq_st f6, 0x28(r8), 0, 0
    lfs f19, 0x44(r3)
    lfs f13, 0x48(r3)
    lfs f12, 0x4c(r3)
    lfs f11, 0x50(r3)
    lfs f10, 0x54(r3)
    psq_l f1, 0x88(r3), 0, 0
    psq_l f2, 0x90(r3), 0, 0
    psq_l f3, 0x98(r3), 0, 0
    psq_l f4, 0xa0(r3), 0, 0
    psq_l f5, 0xa8(r3), 0, 0
    psq_l f6, 0xb0(r3), 0, 0
    psq_l f7, 0xb8(r3), 0, 0
    psq_l f8, 0xc0(r3), 0, 0
    lfs f9, 0xc8(r3)
    stw r4, 0xa20(r3)
    lfs f0, lbl_8088593C
    stw r0, 0xa24(r3)
    stfs f22, 0xa58(r3)
    stfs f21, 0xa5c(r3)
    stfs f20, 0xa60(r3)
    stfs f19, 0xa64(r3)
    stfs f13, 0xa68(r3)
    stfs f12, 0xa6c(r3)
    stfs f11, 0xa70(r3)
    stfs f10, 0xa74(r3)
    psq_st f1, 0x0(r9), 0, 0
    psq_st f2, 0x8(r9), 0, 0
    psq_st f3, 0x10(r9), 0, 0
    psq_st f4, 0x18(r9), 0, 0
    psq_st f5, 0x20(r9), 0, 0
    psq_st f6, 0x28(r9), 0, 0
    psq_st f7, 0x30(r9), 0, 0
    psq_st f8, 0x38(r9), 0, 0
    stfs f9, 0xae8(r3)
    addi r4, r3, 0xaf0
    psq_l f1, 0xd0(r3), 0, 0
    addi r5, r3, 0xb20
    psq_l f2, 0xd8(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    addi r6, r3, 0x17c
    psq_l f1, 0x100(r3), 0, 0
    addi r8, r5, 0x94
    psq_st f2, 0x8(r4), 0, 0
    addi r7, r3, 0x194
    psq_l f2, 0x108(r3), 0, 0
    addi r0, r5, 0xf4
    psq_st f1, 0x0(r5), 0, 0
    psq_l f1, 0x13c(r3), 0, 0
    psq_st f2, 0x8(r5), 0, 0
    lfs f2, 0x144(r3)
    psq_st f1, 0x3c(r5), 0, 0
    psq_l f1, 0x14c(r3), 0, 0
    stfs f2, 0xb64(r3)
    lfs f2, 0x154(r3)
    psq_st f1, 0x4c(r5), 0, 0
    psq_l f1, 0x15c(r3), 0, 0
    stfs f2, 0xb74(r3)
    lfs f2, 0x164(r3)
    psq_st f1, 0x5c(r5), 0, 0
    psq_l f1, 0x16c(r3), 0, 0
    stfs f2, 0xb84(r3)
    lfs f2, 0x174(r3)
    psq_st f1, 0x6c(r5), 0, 0
    psq_l f3, 0xe0(r3), 0, 0
    stfs f2, 0xb94(r3)
    psq_l f4, 0xe8(r3), 0, 0
    psq_l f5, 0xf0(r3), 0, 0
    psq_l f6, 0xf8(r3), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    lfs f2, 0x184(r3)
    psq_st f3, 0x10(r4), 0, 0
    lfs f20, 0xcc(r3)
    psq_st f4, 0x18(r4), 0, 0
    psq_l f3, 0x110(r3), 0, 0
    psq_st f5, 0x20(r4), 0, 0
    psq_l f4, 0x118(r3), 0, 0
    psq_st f6, 0x28(r4), 0, 0
    psq_l f5, 0x120(r3), 0, 0
    psq_st f1, 0x7c(r5), 0, 0
    psq_l f6, 0x128(r3), 0, 0
    stfs f2, 0xba4(r3)
    lwz r4, 0x130(r3)
    lfs f19, 0x134(r3)
    lfs f13, 0x138(r3)
    lfs f12, 0x148(r3)
    lfs f11, 0x158(r3)
    lfs f10, 0x168(r3)
    lfs f9, 0x178(r3)
    psq_l f1, 0xc(r6), 0, 0
    lfs f2, 0x190(r3)
    stfs f20, 0xaec(r3)
    psq_st f3, 0x10(r5), 0, 0
    psq_st f4, 0x18(r5), 0, 0
    psq_st f5, 0x20(r5), 0, 0
    psq_st f6, 0x28(r5), 0, 0
    stw r4, 0xb50(r3)
    stfs f19, 0xb54(r3)
    stfs f13, 0xb58(r3)
    stfs f12, 0xb68(r3)
    stfs f11, 0xb78(r3)
    stfs f10, 0xb88(r3)
    stfs f9, 0xb98(r3)
    psq_st f1, 0x88(r5), 0, 0
    stfs f2, 0xbb0(r3)
lbl_fn_80389A00_00000C9C:
    lfs f2, 0x8(r7)
    psq_l f1, 0x0(r7), 0, 0
    psq_st f1, 0x0(r8), 0, 0
    stfs f2, 0x8(r8)
    lfs f9, 0xc(r7)
    addi r7, r7, 0x10
    stfs f9, 0xc(r8)
    addi r8, r8, 0x10
    cmplw r8, r0
    blt lbl_fn_80389A00_00000C9C
    lfs f9, lbl_808858F8
    mr r4, r31
    lwz r0, 0x7fc(r3)
    li r5, 0x1
    stfs f9, 0xc14(r3)
    li r6, 0x1
    lfs f1, lbl_80885904
    stfs f0, 0xc18(r3)
    stw r0, 0x800(r3)
    mr r3, r30
    bl fn_8037EF48
    lwz r0, 0x918(r30)
    li r3, 0x0
    stw r3, 0x834(r30)
    mr r4, r30
    addi r3, r30, 0x1f4
    stw r0, 0x914(r30)
    bl fn_80392A04
    mr r3, r30
    bl fn_80392510
    mr r3, r30
    bl fn_80392FE8
    mr r3, r30
    bl fn_803918EC
    mr r3, r30
    bl fn_803920C8
    mr r3, r30
    bl fn_803928C0
    addi r3, r30, 0x1f4
    bl fn_8004B378
    lwz r3, lbl_8087EFB4
    addi r4, r30, 0x1f4
    bl fn_80116BD4
    b lbl_fn_80389A00_0000105C
lbl_fn_80389A00_00000D4C:
    cmpwi r5, 0xa
    bne lbl_fn_80389A00_00000D60
    lwz r0, 0x424(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80389A00_00000DC4
lbl_fn_80389A00_00000D60:
    subi r0, r5, 0xd
    cmplwi r0, 0x2
    ble lbl_fn_80389A00_00000DA4
    subi r0, r5, 0xa
    cmplwi r0, 0x1
    ble lbl_fn_80389A00_00000DA4
    cmpwi r5, 0x2
    beq lbl_fn_80389A00_00000DA4
    lfs f1, lbl_80885904
    mr r3, r30
    mr r4, r31
    li r5, 0x1
    li r6, 0x1
    bl fn_8037EF48
    lwz r0, 0x7fc(r30)
    stw r0, 0x800(r30)
    b lbl_fn_80389A00_00000DAC
lbl_fn_80389A00_00000DA4:
    lwz r0, 0x7fc(r3)
    stw r0, 0x800(r3)
lbl_fn_80389A00_00000DAC:
    li r0, 0x0
    stw r0, 0x834(r30)
    mr r3, r30
    mr r4, r31
    bl fn_8037F9AC
    b lbl_fn_80389A00_0000105C
lbl_fn_80389A00_00000DC4:
    lwz r0, 0x808(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80389A00_00000E00
    lfs f2, 0x10(r3)
    addi r4, r3, 0x80c
    psq_l f1, 0x8(r3), 0, 0
    addi r5, r3, 0x818
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x14(r3), 0, 0
    stfs f2, 0x814(r3)
    lfs f2, 0x1c(r3)
    lfs f0, 0x50(r3)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x820(r3)
    stfs f0, 0x830(r3)
lbl_fn_80389A00_00000E00:
    li r0, 0x0
    stw r0, 0x834(r3)
    mr r3, r30
    mr r4, r31
    bl fn_8037F9AC
    lfs f9, 0x428(r30)
    lfs f0, 0x42c(r30)
    lfs f11, lbl_808858E8
    fsubs f0, f9, f0
    stfs f0, 0x428(r30)
    fcmpo cr0, f11, f0
    ble lbl_fn_80389A00_00000E34
    b lbl_fn_80389A00_00000E38
lbl_fn_80389A00_00000E34:
    fmr f11, f0
lbl_fn_80389A00_00000E38:
    frsp f9, f11
    lfs f10, lbl_808858F8
    lfs f0, 0x42c(r30)
    stfs f11, 0x428(r30)
    fcmpo cr0, f9, f0
    fsubs f31, f10, f9
    bge lbl_fn_80389A00_00000E5C
    li r0, 0x0
    stw r0, 0x424(r30)
lbl_fn_80389A00_00000E5C:
    lfs f11, 0x10(r30)
    addi r3, r1, 0x5c
    lfs f0, 0x1c(r30)
    lfs f10, 0x8(r30)
    lfs f9, 0x14(r30)
    fsubs f11, f11, f0
    lfs f0, lbl_808858E8
    fsubs f9, f10, f9
    stfs f11, 0x64(r1)
    stfs f9, 0x5c(r1)
    stfs f0, 0x60(r1)
    bl fn_805F9920
    lfs f0, lbl_808858E8
    fcmpo cr0, f1, f0
    ble lbl_fn_80389A00_00000EA4
    addi r3, r1, 0x5c
    mr r4, r3
    bl fn_805F98D0
lbl_fn_80389A00_00000EA4:
    lfs f11, 0x814(r30)
    addi r3, r1, 0x50
    lfs f0, 0x820(r30)
    lfs f10, 0x80c(r30)
    lfs f9, 0x818(r30)
    fsubs f11, f11, f0
    lfs f0, lbl_808858E8
    fsubs f9, f10, f9
    stfs f11, 0x58(r1)
    stfs f9, 0x50(r1)
    stfs f0, 0x54(r1)
    bl fn_805F9920
    lfs f0, lbl_808858E8
    fcmpo cr0, f1, f0
    ble lbl_fn_80389A00_00000EEC
    addi r3, r1, 0x50
    mr r4, r3
    bl fn_805F98D0
lbl_fn_80389A00_00000EEC:
    addi r3, r1, 0x5c
    addi r4, r1, 0x50
    bl fn_805F9990
    lfs f0, lbl_80885A84
    fcmpo cr0, f1, f0
    bge lbl_fn_80389A00_00000F10
    li r0, 0x0
    stw r0, 0x424(r30)
    lfs f31, lbl_808858F8
lbl_fn_80389A00_00000F10:
    lfs f0, 0x10(r30)
    addi r4, r1, 0x44
    lfs f10, 0x814(r30)
    addi r5, r1, 0x38
    lfs f9, 0xc(r30)
    mr r3, r30
    fsubs f29, f0, f10
    lfs f20, 0x810(r30)
    lfs f0, 0x8(r30)
    fsubs f30, f9, f20
    lfs f24, 0x80c(r30)
    fmuls f12, f29, f31
    fsubs f13, f0, f24
    lfs f0, 0x1c(r30)
    fmuls f11, f30, f31
    fadds f9, f12, f10
    lfs f27, 0x820(r30)
    fmuls f10, f13, f31
    fsubs f22, f0, f27
    lfs f19, 0x18(r30)
    fadds f0, f11, f20
    lfs f21, 0x81c(r30)
    fadds f18, f10, f24
    fmuls f25, f22, f31
    fsubs f23, f19, f21
    lfs f20, 0x14(r30)
    lfs f19, 0x818(r30)
    fmr f2, f9
    fadds f28, f25, f27
    fsubs f24, f20, f19
    fmuls f26, f23, f31
    lfs f16, 0x50(r30)
    stfs f2, 0x10(r30)
    fmr f2, f28
    fmuls f27, f24, f31
    fadds f17, f26, f21
    lfs f20, 0x830(r30)
    stfs f18, 0x44(r1)
    fadds f18, f27, f19
    fsubs f21, f16, f20
    stfs f0, 0x48(r1)
    fmadds f0, f31, f21, f20
    psq_l f1, 0x0(r4), 0, 0
    stfs f18, 0x38(r1)
    stfs f17, 0x3c(r1)
    psq_st f1, 0x8(r30), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    stfs f13, 0x2c(r1)
    stfs f30, 0x30(r1)
    stfs f29, 0x34(r1)
    stfs f10, 0x20(r1)
    stfs f11, 0x24(r1)
    stfs f12, 0x28(r1)
    stfs f9, 0x4c(r1)
    stfs f24, 0x14(r1)
    stfs f23, 0x18(r1)
    stfs f22, 0x1c(r1)
    stfs f27, 0x8(r1)
    stfs f26, 0xc(r1)
    stfs f25, 0x10(r1)
    stfs f28, 0x40(r1)
    psq_st f1, 0x14(r30), 0, 0
    stfs f2, 0x1c(r30)
    stfs f0, 0x50(r30)
    bl fn_8004B378
    mr r4, r30
    addi r3, r30, 0x1f4
    bl fn_80392A04
    mr r3, r30
    bl fn_80392510
    mr r3, r30
    bl fn_80392FE8
    mr r3, r30
    bl fn_803918EC
    mr r3, r30
    bl fn_803920C8
    mr r3, r30
    bl fn_803928C0
    addi r3, r30, 0x1f4
    bl fn_8004B378
    lwz r3, lbl_8087EFB4
    addi r4, r30, 0x1f4
    bl fn_80116BD4
lbl_fn_80389A00_0000105C:
    lfs f0, lbl_808858E8
    stfs f0, 0x994(r30)
    stfs f0, 0x990(r30)
    stfs f0, 0x98c(r30)
    stfs f0, 0x9a0(r30)
    stfs f0, 0x99c(r30)
    stfs f0, 0x998(r30)
    stfs f0, 0x9ac(r30)
    stfs f0, 0x9a8(r30)
    stfs f0, 0x9a4(r30)
    stfs f0, 0x9b8(r30)
    stfs f0, 0x9b4(r30)
    stfs f0, 0x9b0(r30)
    stfs f0, 0x9c4(r30)
    stfs f0, 0x9c0(r30)
    stfs f0, 0x9bc(r30)
    stfs f0, 0x9d0(r30)
    stfs f0, 0x9cc(r30)
    stfs f0, 0x9c8(r30)
    stfs f0, 0x9dc(r30)
    stfs f0, 0x9d8(r30)
    stfs f0, 0x9d4(r30)
    stfs f0, 0x9e8(r30)
    stfs f0, 0x9e4(r30)
    stfs f0, 0x9e0(r30)
    psq_l f31, 0x168(r1), 0, 0
    lfd f31, 0x160(r1)
    psq_l f30, 0x158(r1), 0, 0
    lfd f30, 0x150(r1)
    psq_l f29, 0x148(r1), 0, 0
    lfd f29, 0x140(r1)
    psq_l f28, 0x138(r1), 0, 0
    lfd f28, 0x130(r1)
    psq_l f27, 0x128(r1), 0, 0
    lfd f27, 0x120(r1)
    psq_l f26, 0x118(r1), 0, 0
    lfd f26, 0x110(r1)
    psq_l f25, 0x108(r1), 0, 0
    lfd f25, 0x100(r1)
    psq_l f24, 0xf8(r1), 0, 0
    lfd f24, 0xf0(r1)
    psq_l f23, 0xe8(r1), 0, 0
    lfd f23, 0xe0(r1)
    psq_l f22, 0xd8(r1), 0, 0
    lfd f22, 0xd0(r1)
    psq_l f21, 0xc8(r1), 0, 0
    lfd f21, 0xc0(r1)
    psq_l f20, 0xb8(r1), 0, 0
    lfd f20, 0xb0(r1)
    psq_l f19, 0xa8(r1), 0, 0
    lfd f19, 0xa0(r1)
    psq_l f18, 0x98(r1), 0, 0
    lfd f18, 0x90(r1)
    psq_l f17, 0x88(r1), 0, 0
    lfd f17, 0x80(r1)
    psq_l f16, 0x78(r1), 0, 0
    lfd f16, 0x70(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    lwz r0, 0x174(r1)
    mtlr r0
    addi r1, r1, 0x170
    blr
}

asm void fn_8038A1B8(void)
{
    nofralloc
    lwz r5, 0x7fc(r3)
    li r0, 0x0
    li r6, 0x1
    stw r6, 0x8ec(r3)
    stw r5, 0x800(r3)
    stw r0, 0x834(r3)
    stw r0, 0x7f4(r3)
    b fn_80382A1C
}

asm void fn_8038A1D8(void)
{
    nofralloc
    lwz r0, 0x800(r3)
    cmpwi r0, 0x9
    bne lbl_fn_8038A1D8_0000118C
    li r0, 0x1
    stw r0, 0x8ec(r3)
lbl_fn_8038A1D8_0000118C:
    lwz r4, 0x7fc(r3)
    li r0, 0x0
    stw r4, 0x800(r3)
    stw r0, 0x834(r3)
    blr
}

asm void fn_8038A200(void)
{
    nofralloc
    stwu r1, -0x180(r1)
    mflr r0
    stw r0, 0x184(r1)
    addi r5, r1, 0x80
    addi r6, r1, 0x74
    stfd f31, 0x170(r1)
    psq_st f31, 0x178(r1), 0, 0
    stfd f30, 0x160(r1)
    psq_st f30, 0x168(r1), 0, 0
    stfd f29, 0x150(r1)
    psq_st f29, 0x158(r1), 0, 0
    stfd f28, 0x140(r1)
    psq_st f28, 0x148(r1), 0, 0
    stfd f27, 0x130(r1)
    psq_st f27, 0x138(r1), 0, 0
    stfd f26, 0x120(r1)
    psq_st f26, 0x128(r1), 0, 0
    stfd f25, 0x110(r1)
    psq_st f25, 0x118(r1), 0, 0
    stfd f24, 0x100(r1)
    psq_st f24, 0x108(r1), 0, 0
    stfd f23, 0xf0(r1)
    psq_st f23, 0xf8(r1), 0, 0
    stw r31, 0xec(r1)
    mr r31, r3
    stw r30, 0xe8(r1)
    stw r29, 0xe4(r1)
    lwz r0, 0x808(r3)
    psq_l f1, 0x8(r3), 0, 0
    lfs f2, 0x10(r3)
    cmpwi r0, 0x0
    psq_st f1, 0x0(r5), 0, 0
    psq_l f1, 0x14(r3), 0, 0
    stfs f2, 0x88(r1)
    lfs f2, 0x1c(r3)
    psq_st f1, 0x0(r6), 0, 0
    lfs f0, 0x50(r3)
    stfs f2, 0x7c(r1)
    bne lbl_fn_8038A200_00001268
    psq_l f1, 0x0(r5), 0, 0
    addi r7, r3, 0x80c
    lfs f2, 0x88(r1)
    addi r5, r3, 0x818
    psq_st f1, 0x0(r7), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x814(r3)
    lfs f2, 0x7c(r1)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x820(r3)
    stfs f0, 0x830(r3)
lbl_fn_8038A200_00001268:
    lfs f2, 0x530(r4)
    addi r5, r1, 0x68
    psq_l f1, 0x528(r4), 0, 0
    lfs f3, 0x568(r3)
    addi r3, r1, 0x90
    lfs f0, lbl_808858E8
    stfs f0, 0x5c(r1)
    stfs f3, 0x60(r1)
    stfs f0, 0x64(r1)
    lfs f0, 0x538(r4)
    li r4, 0x79
    psq_st f1, 0x0(r5), 0, 0
    fmr f1, f0
    stfs f2, 0x70(r1)
    bl fn_805F8E70
    addi r4, r1, 0x5c
    addi r3, r1, 0x90
    mr r5, r4
    bl fn_805F93C0
    lfs f3, 0x68(r1)
    addi r4, r1, 0x5c
    lfs f0, 0x5c(r1)
    mr r5, r4
    lfs f5, 0x6c(r1)
    addi r3, r1, 0x90
    fadds f6, f3, f0
    lfs f4, 0x60(r1)
    lfs f3, 0x70(r1)
    fadds f4, f5, f4
    lfs f0, 0x64(r1)
    lfs f7, 0x558(r31)
    lfs f5, 0x568(r31)
    fadds f3, f3, f0
    lfs f0, lbl_808858E8
    stfs f6, 0x68(r1)
    stfs f4, 0x6c(r1)
    stfs f3, 0x70(r1)
    stfs f0, 0x5c(r1)
    stfs f5, 0x60(r1)
    stfs f7, 0x64(r1)
    bl fn_805F93C0
    lwz r3, 0x808(r31)
    lis r0, 0x4330
    lis r4, lbl_8074E008@ha
    stw r0, 0xc0(r1)
    xoris r3, r3, 0x8000
    lfd f10, lbl_8074E008@l(r4)
    stw r3, 0xc4(r1)
    addi r4, r1, 0x44
    lfs f9, lbl_80885930
    addi r30, r1, 0x80
    lfd f0, 0xc0(r1)
    stw r3, 0xcc(r1)
    fsubs f0, f0, f10
    lfs f11, 0x68(r1)
    lfs f6, 0x80c(r31)
    stw r0, 0xc8(r1)
    fdivs f28, f0, f9
    lfs f12, 0x5c(r1)
    lfd f0, 0xc8(r1)
    lfs f30, 0x70(r1)
    lfs f8, 0x814(r31)
    lfs f13, 0x6c(r1)
    fsubs f25, f11, f6
    lfs f7, 0x810(r31)
    fsubs f23, f30, f8
    lfs f29, 0x64(r1)
    fsubs f24, f13, f7
    lfs f31, 0x60(r1)
    fmuls f26, f23, f28
    lfs f4, 0x820(r31)
    fmuls f27, f24, f28
    lfs f3, 0x81c(r31)
    fmuls f28, f25, f28
    lfs f5, 0x818(r31)
    fadds f2, f26, f8
    stfs f25, 0x2c(r1)
    fadds f8, f29, f30
    fadds f11, f12, f11
    stfs f23, 0x34(r1)
    fsubs f0, f0, f10
    fadds f7, f27, f7
    stfs f24, 0x30(r1)
    fadds f13, f31, f13
    fadds f6, f28, f6
    stfs f7, 0x48(r1)
    fdivs f12, f0, f9
    stfs f6, 0x44(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f8, 0x58(r1)
    stfs f11, 0x50(r1)
    stfs f13, 0x54(r1)
    fsubs f25, f8, f4
    stfs f28, 0x20(r1)
    fsubs f24, f13, f3
    fsubs f23, f11, f5
    stfs f27, 0x24(r1)
    stfs f26, 0x28(r1)
    stfs f2, 0x4c(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x88(r1)
    fmuls f13, f25, f12
    stw r3, 0xd4(r1)
    fmuls f11, f24, f12
    lfs f0, 0x55c(r31)
    stw r0, 0xd0(r1)
    fmuls f8, f23, f12
    fadds f7, f13, f4
    lfd f4, 0xd0(r1)
    fadds f6, f11, f3
    lfs f3, 0x830(r31)
    fsubs f4, f4, f10
    addi r3, r1, 0x38
    fadds f5, f8, f5
    stfs f6, 0x3c(r1)
    fdivs f4, f4, f9
    addi r29, r1, 0x74
    stfs f5, 0x38(r1)
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r31
    psq_st f1, 0x0(r29), 0, 0
    fmr f2, f7
    psq_l f1, 0x0(r30), 0, 0
    fsubs f0, f0, f3
    psq_st f1, 0x8(r31), 0, 0
    psq_l f1, 0x0(r29), 0, 0
    stfs f2, 0x7c(r1)
    lfs f2, 0x88(r1)
    fmadds f0, f4, f0, f3
    stfs f2, 0x10(r31)
    lfs f2, 0x7c(r1)
    stfs f23, 0x14(r1)
    stfs f24, 0x18(r1)
    stfs f25, 0x1c(r1)
    stfs f8, 0x8(r1)
    stfs f11, 0xc(r1)
    stfs f13, 0x10(r1)
    stfs f7, 0x40(r1)
    psq_st f1, 0x14(r31), 0, 0
    stfs f2, 0x1c(r31)
    stfs f0, 0x50(r31)
    bl fn_8004B378
    mr r4, r31
    addi r3, r31, 0x1f4
    bl fn_80392A04
    mr r3, r31
    bl fn_803918EC
    mr r3, r31
    bl fn_803920C8
    mr r3, r31
    bl fn_803928C0
    addi r3, r31, 0x1f4
    bl fn_8004B378
    lwz r3, lbl_8087EFB4
    addi r4, r31, 0x1f4
    bl fn_80116BD4
    lwz r3, 0x808(r31)
    addi r0, r3, 0x1
    stw r0, 0x808(r31)
    cmpwi r0, 0x5
    ble lbl_fn_8038A200_00001524
    lfs f2, 0x88(r1)
    addi r3, r31, 0x80c
    psq_l f1, 0x0(r30), 0, 0
    addi r4, r31, 0x818
    psq_st f1, 0x0(r3), 0, 0
    li r0, 0x0
    psq_l f1, 0x0(r29), 0, 0
    stfs f2, 0x814(r31)
    lfs f2, 0x7c(r1)
    lwz r3, 0x7fc(r31)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x820(r31)
    stw r3, 0x800(r31)
    stw r0, 0x808(r31)
lbl_fn_8038A200_00001524:
    li r0, 0x0
    stw r0, 0x834(r31)
    psq_l f31, 0x178(r1), 0, 0
    lfd f31, 0x170(r1)
    psq_l f30, 0x168(r1), 0, 0
    lfd f30, 0x160(r1)
    psq_l f29, 0x158(r1), 0, 0
    lfd f29, 0x150(r1)
    psq_l f28, 0x148(r1), 0, 0
    lfd f28, 0x140(r1)
    psq_l f27, 0x138(r1), 0, 0
    lfd f27, 0x130(r1)
    psq_l f26, 0x128(r1), 0, 0
    lfd f26, 0x120(r1)
    psq_l f25, 0x118(r1), 0, 0
    lfd f25, 0x110(r1)
    psq_l f24, 0x108(r1), 0, 0
    lfd f24, 0x100(r1)
    psq_l f23, 0xf8(r1), 0, 0
    lfd f23, 0xf0(r1)
    lwz r31, 0xec(r1)
    lwz r30, 0xe8(r1)
    lwz r29, 0xe4(r1)
    lwz r0, 0x184(r1)
    mtlr r0
    addi r1, r1, 0x180
    blr
}

asm void fn_8038A5F0(void)
{
    nofralloc
    stwu r1, -0x370(r1)
    mflr r0
    stw r0, 0x374(r1)
    addi r11, r1, 0x2e0
    stfd f31, 0x360(r1)
    psq_st f31, 0x368(r1), 0, 0
    stfd f30, 0x350(r1)
    psq_st f30, 0x358(r1), 0, 0
    stfd f29, 0x340(r1)
    psq_st f29, 0x348(r1), 0, 0
    stfd f28, 0x330(r1)
    psq_st f28, 0x338(r1), 0, 0
    stfd f27, 0x320(r1)
    psq_st f27, 0x328(r1), 0, 0
    stfd f26, 0x310(r1)
    psq_st f26, 0x318(r1), 0, 0
    stfd f25, 0x300(r1)
    psq_st f25, 0x308(r1), 0, 0
    stfd f24, 0x2f0(r1)
    psq_st f24, 0x2f8(r1), 0, 0
    stfd f23, 0x2e0(r1)
    psq_st f23, 0x2e8(r1), 0, 0
    bl _savegpr_27
    lwz r5, 0x800(r3)
    mr r29, r3
    mr r30, r4
    li r31, 0xf
    cmpwi r5, 0x3
    bne lbl_fn_8038A5F0_00001608
    li r31, 0x5
lbl_fn_8038A5F0_00001608:
    lwz r0, 0x808(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8038A5F0_00001688
    cmpwi r5, 0x3
    bne lbl_fn_8038A5F0_00001644
    lfs f2, 0x10(r3)
    addi r5, r3, 0x884
    psq_l f1, 0x8(r3), 0, 0
    addi r6, r3, 0x890
    psq_st f1, 0x0(r5), 0, 0
    psq_l f1, 0x14(r3), 0, 0
    stfs f2, 0x88c(r3)
    lfs f2, 0x1c(r3)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x898(r3)
lbl_fn_8038A5F0_00001644:
    lfs f2, 0x10(r3)
    addi r5, r3, 0x80c
    lfs f0, lbl_808858E8
    addi r6, r3, 0x818
    psq_l f1, 0x8(r3), 0, 0
    li r0, 0x0
    psq_st f1, 0x0(r5), 0, 0
    psq_l f1, 0x14(r3), 0, 0
    stfs f2, 0x814(r3)
    lfs f2, 0x1c(r3)
    lfs f7, 0x50(r3)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x820(r3)
    stfs f7, 0x830(r3)
    stfs f0, 0x96c(r3)
    stfs f0, 0x970(r3)
    stw r0, 0x7f4(r3)
lbl_fn_8038A5F0_00001688:
    lwz r5, lbl_8087F0A8
    lwz r0, 0x290(r5)
    cmpwi r0, 0x0
    beq lbl_fn_8038A5F0_000016B0
    lwz r4, 0x7fc(r3)
    li r0, 0x0
    stw r4, 0x800(r3)
    stw r0, 0x808(r3)
    stw r0, 0x834(r3)
    b lbl_fn_8038A5F0_00001E30
lbl_fn_8038A5F0_000016B0:
    lfs f7, lbl_808858E8
    addi r3, r4, 0xc14
    lfs f0, lbl_808858F8
    addi r4, r1, 0xbc
    stfs f7, 0xbc(r1)
    addi r5, r1, 0xec
    stfs f0, 0xc0(r1)
    stfs f7, 0xc4(r1)
    bl fn_805F99B0
    addi r3, r1, 0xec
    mr r4, r3
    bl fn_805F98D0
    lfs f2, 0xf4(r1)
    addi r3, r1, 0xec
    lfs f0, lbl_808859C8
    addi r28, r1, 0xe0
    fabs f7, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    frsp f7, f7
    stfs f2, 0xe8(r1)
    fcmpo cr0, f7, f0
    bge lbl_fn_8038A5F0_00001730
    lfs f7, 0xe0(r1)
    lfs f0, lbl_808858E8
    fcmpo cr0, f7, f0
    ble lbl_fn_8038A5F0_00001724
    lfs f0, lbl_808859CC
    b lbl_fn_8038A5F0_00001728
lbl_fn_8038A5F0_00001724:
    lfs f0, lbl_808859D0
lbl_fn_8038A5F0_00001728:
    stfs f0, 0x78(r1)
    b lbl_fn_8038A5F0_00001744
lbl_fn_8038A5F0_00001730:
    frsp f2, f2
    lfs f1, 0xe0(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x78(r1)
lbl_fn_8038A5F0_00001744:
    lfs f0, 0x78(r1)
    addi r3, r1, 0x218
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f7, lbl_808858E8
    addi r4, r1, 0x68
    lfs f26, 0x220(r1)
    mr r5, r4
    lfs f27, 0x21c(r1)
    addi r3, r1, 0x248
    lfs f28, 0x218(r1)
    lfs f31, 0x230(r1)
    lfs f30, 0x22c(r1)
    lfs f29, 0x228(r1)
    lfs f13, 0x240(r1)
    lfs f12, 0x23c(r1)
    lfs f11, 0x238(r1)
    lfs f10, 0x244(r1)
    lfs f9, 0x234(r1)
    lfs f8, 0x224(r1)
    lfs f0, lbl_808858F8
    psq_l f1, 0x0(r28), 0, 0
    lfs f2, 0xe8(r1)
    stfs f7, 0x278(r1)
    stfs f7, 0x27c(r1)
    stfs f7, 0x280(r1)
    stfs f0, 0x284(r1)
    stfs f28, 0x38(r1)
    stfs f27, 0x3c(r1)
    stfs f26, 0x40(r1)
    stfs f28, 0x248(r1)
    stfs f27, 0x24c(r1)
    stfs f26, 0x250(r1)
    stfs f29, 0x44(r1)
    stfs f30, 0x48(r1)
    stfs f31, 0x4c(r1)
    stfs f29, 0x258(r1)
    stfs f30, 0x25c(r1)
    stfs f31, 0x260(r1)
    stfs f11, 0x50(r1)
    stfs f12, 0x54(r1)
    stfs f13, 0x58(r1)
    stfs f11, 0x268(r1)
    stfs f12, 0x26c(r1)
    stfs f13, 0x270(r1)
    stfs f8, 0x5c(r1)
    stfs f9, 0x60(r1)
    stfs f10, 0x64(r1)
    stfs f8, 0x254(r1)
    stfs f9, 0x264(r1)
    stfs f10, 0x274(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x70(r1)
    bl fn_805F9750
    lfs f2, 0x70(r1)
    lfs f0, lbl_808859C8
    fabs f7, f2
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_8038A5F0_00001860
    lfs f7, 0x6c(r1)
    lfs f0, lbl_808858E8
    fcmpo cr0, f7, f0
    ble lbl_fn_8038A5F0_00001850
    lfs f0, lbl_808859CC
    b lbl_fn_8038A5F0_00001854
lbl_fn_8038A5F0_00001850:
    lfs f0, lbl_808859D0
lbl_fn_8038A5F0_00001854:
    fneg f0, f0
    stfs f0, 0x74(r1)
    b lbl_fn_8038A5F0_00001874
lbl_fn_8038A5F0_00001860:
    lfs f1, 0x6c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x74(r1)
lbl_fn_8038A5F0_00001874:
    addi r3, r1, 0x74
    lfs f2, lbl_808858E8
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0xb0
    psq_st f1, 0x0(r28), 0, 0
    fmr f30, f2
    lfs f8, 0x59c(r29)
    lfs f9, 0xe0(r1)
    lfs f7, 0xc28(r30)
    fadds f10, f9, f8
    lfs f0, 0xc34(r30)
    lfs f9, 0xc24(r30)
    fsubs f11, f7, f0
    lfs f8, 0xc30(r30)
    lfs f7, 0xc20(r30)
    lfs f0, 0xc2c(r30)
    fsubs f8, f9, f8
    lwz r27, 0xc44(r30)
    fsubs f0, f7, f0
    stfs f2, 0x7c(r1)
    stfs f2, 0xe8(r1)
    stfs f10, 0xe0(r1)
    stfs f0, 0xb0(r1)
    stfs f8, 0xb4(r1)
    stfs f11, 0xb8(r1)
    bl fn_805F9940
    lfs f7, 0x530(r30)
    fmr f31, f1
    lfs f0, 0xc28(r30)
    addi r3, r1, 0xa4
    lfs f9, 0x52c(r30)
    fsubs f10, f7, f0
    lfs f8, 0xc24(r30)
    lfs f7, 0x528(r30)
    lfs f0, 0xc20(r30)
    fsubs f8, f9, f8
    fsubs f0, f7, f0
    stfs f8, 0xa8(r1)
    stfs f0, 0xa4(r1)
    stfs f10, 0xac(r1)
    bl fn_805F9940
    lfs f7, 0x530(r30)
    fmr f29, f1
    lfs f0, 0xc34(r30)
    addi r3, r1, 0x98
    lfs f9, 0x52c(r30)
    fsubs f10, f7, f0
    lfs f8, 0xc30(r30)
    lfs f7, 0x528(r30)
    lfs f0, 0xc2c(r30)
    fsubs f8, f9, f8
    fsubs f0, f7, f0
    stfs f8, 0x9c(r1)
    stfs f0, 0x98(r1)
    stfs f10, 0xa0(r1)
    bl fn_805F9940
    fdivs f0, f29, f31
    lfs f8, lbl_808858F8
    fcmpo cr0, f8, f0
    bge lbl_fn_8038A5F0_00001968
    b lbl_fn_8038A5F0_0000196C
lbl_fn_8038A5F0_00001968:
    fmr f8, f0
lbl_fn_8038A5F0_0000196C:
    clrlwi r0, r27, 31
    cmplwi r0, 0x1
    bne lbl_fn_8038A5F0_000019B4
    rlwinm r0, r27, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_8038A5F0_0000199C
    lfs f7, 0x5a0(r29)
    lfs f0, 0x5a0(r29)
    fneg f7, f7
    fsubs f0, f0, f7
    fmadds f30, f8, f0, f7
    b lbl_fn_8038A5F0_000019D0
lbl_fn_8038A5F0_0000199C:
    lfs f7, 0x5a0(r29)
    lfs f0, lbl_8087DCFC
    fneg f7, f7
    fsubs f0, f0, f7
    fmadds f30, f8, f0, f7
    b lbl_fn_8038A5F0_000019D0
lbl_fn_8038A5F0_000019B4:
    rlwinm r0, r27, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_8038A5F0_000019D0
    lfs f0, 0x5a0(r29)
    lfs f7, lbl_8087DD00
    fsubs f0, f0, f7
    fmadds f30, f8, f0, f7
lbl_fn_8038A5F0_000019D0:
    lwz r0, 0x12a4(r30)
    lfs f7, 0x5a4(r29)
    extrwi. r0, r0, 1, 1
    beq lbl_fn_8038A5F0_000019E8
    lfs f0, 0x5ac(r29)
    fsubs f7, f7, f0
lbl_fn_8038A5F0_000019E8:
    lfs f2, 0x530(r30)
    addi r3, r1, 0xd4
    psq_l f1, 0x528(r30), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lfs f1, 0xe4(r1)
    lfs f0, 0xd8(r1)
    stfs f2, 0xdc(r1)
    fadds f0, f0, f7
    stfs f0, 0xd8(r1)
    bl fn_8068A850
    frsp f7, f1
    lfs f0, 0xd4(r1)
    lfs f1, 0xe4(r1)
    fmadds f0, f30, f7, f0
    stfs f0, 0xd4(r1)
    bl fn_8068AD58
    frsp f10, f1
    lfs f7, lbl_808858E8
    fneg f9, f30
    lfs f8, 0xdc(r1)
    lfs f1, 0xe8(r1)
    addi r28, r1, 0x288
    lfs f0, lbl_808858F8
    fmadds f8, f9, f10, f8
    fcmpu cr0, f7, f1
    stfs f7, 0xc8(r1)
    stfs f8, 0xdc(r1)
    stfs f7, 0xcc(r1)
    stfs f0, 0xd0(r1)
    stfs f7, 0x2b4(r1)
    stfs f7, 0x2ac(r1)
    stfs f7, 0x2a8(r1)
    stfs f7, 0x2a4(r1)
    stfs f7, 0x2a0(r1)
    stfs f7, 0x298(r1)
    stfs f7, 0x294(r1)
    stfs f7, 0x290(r1)
    stfs f7, 0x28c(r1)
    stfs f0, 0x2b0(r1)
    stfs f0, 0x29c(r1)
    stfs f0, 0x288(r1)
    beq lbl_fn_8038A5F0_00001AE0
    addi r3, r1, 0x128
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r28
    addi r4, r1, 0x128
    addi r5, r1, 0xf8
    bl fn_805F89F0
    addi r3, r1, 0xf8
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
lbl_fn_8038A5F0_00001AE0:
    lfs f0, lbl_808858E8
    lfs f1, 0xe4(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_8038A5F0_00001B40
    addi r3, r1, 0x188
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r28
    addi r4, r1, 0x188
    addi r5, r1, 0x158
    bl fn_805F89F0
    addi r3, r1, 0x158
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
lbl_fn_8038A5F0_00001B40:
    lfs f0, lbl_808858E8
    lfs f1, 0xe0(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_8038A5F0_00001BA0
    addi r3, r1, 0x1e8
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r28
    addi r4, r1, 0x1e8
    addi r5, r1, 0x1b8
    bl fn_805F89F0
    addi r3, r1, 0x1b8
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
lbl_fn_8038A5F0_00001BA0:
    addi r4, r1, 0xc8
    addi r3, r1, 0x288
    mr r5, r4
    bl fn_805F93C0
    lfs f0, 0x594(r29)
    lis r3, 0x4330
    xoris r0, r31, 0x8000
    lfs f8, 0xc8(r1)
    fneg f9, f0
    lfs f7, 0xcc(r1)
    lfs f0, 0xd0(r1)
    lis r4, lbl_8074E008@ha
    stw r3, 0x2b8(r1)
    fmuls f11, f8, f9
    fmuls f10, f7, f9
    lfs f8, 0xd4(r1)
    fmuls f9, f0, f9
    lfs f7, 0xd8(r1)
    lfs f0, 0xdc(r1)
    fadds f7, f10, f7
    fadds f8, f11, f8
    lfd f10, lbl_8074E008@l(r4)
    fadds f0, f9, f0
    stfs f7, 0xcc(r1)
    lfs f7, lbl_808858EC
    stfs f0, 0xd0(r1)
    lfs f0, lbl_808859CC
    stfs f8, 0xc8(r1)
    lwz r4, 0x808(r29)
    stw r0, 0x2c4(r1)
    xoris r0, r4, 0x8000
    lfs f30, 0x598(r29)
    stw r0, 0x2bc(r1)
    stw r3, 0x2c0(r1)
    lfd f9, 0x2b8(r1)
    lfd f8, 0x2c0(r1)
    fsubs f9, f9, f10
    fsubs f8, f8, f10
    fdivs f8, f9, f8
    fmsubs f1, f7, f8, f0
    bl fn_8068AD58
    frsp f7, f1
    lfs f0, lbl_808858F8
    addi r28, r1, 0xc8
    addi r27, r1, 0xd4
    lfs f8, lbl_808859E4
    addi r8, r1, 0x8c
    fadds f9, f0, f7
    lfs f0, 0xd0(r1)
    lfs f12, 0x814(r29)
    addi r9, r1, 0x80
    lfs f7, 0xcc(r1)
    mr r3, r29
    fsubs f31, f0, f12
    lfs f11, 0x810(r29)
    fmuls f0, f8, f9
    lfs f8, 0xc8(r1)
    fsubs f29, f7, f11
    lfs f9, 0x80c(r29)
    fsubs f28, f8, f9
    lfs f7, 0xdc(r1)
    fmuls f27, f31, f0
    lfs f10, 0xd8(r1)
    fmuls f26, f29, f0
    lfs f8, 0xd4(r1)
    fmuls f13, f28, f0
    stfs f28, 0x2c(r1)
    fadds f12, f27, f12
    mr r4, r30
    fadds f11, f26, f11
    stfs f29, 0x30(r1)
    fadds f9, f13, f9
    stfs f11, 0x90(r1)
    fmr f2, f12
    mr r6, r28
    stfs f9, 0x8c(r1)
    mr r7, r27
    psq_l f1, 0x0(r8), 0, 0
    addi r5, r29, 0x594
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0xd0(r1)
    lfs f11, 0x820(r29)
    lfs f9, 0x81c(r29)
    fsubs f23, f7, f11
    lfs f7, 0x818(r29)
    fsubs f24, f10, f9
    stfs f26, 0x24(r1)
    fsubs f25, f8, f7
    fmuls f29, f23, f0
    fmuls f28, f24, f0
    stfs f31, 0x34(r1)
    fmuls f10, f25, f0
    fadds f2, f29, f11
    stfs f13, 0x20(r1)
    fadds f8, f28, f9
    fadds f7, f10, f7
    stfs f2, 0xdc(r1)
    stfs f7, 0x80(r1)
    stfs f8, 0x84(r1)
    psq_l f1, 0x0(r9), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    lfs f8, 0x830(r29)
    stfs f27, 0x28(r1)
    fsubs f7, f30, f8
    stfs f12, 0x94(r1)
    fmadds f26, f0, f7, f8
    stfs f25, 0x14(r1)
    stfs f24, 0x18(r1)
    stfs f23, 0x1c(r1)
    stfs f10, 0x8(r1)
    stfs f28, 0xc(r1)
    stfs f29, 0x10(r1)
    stfs f2, 0x88(r1)
    bl fn_8038E23C
    psq_l f1, 0x0(r28), 0, 0
    mr r3, r29
    lfs f2, 0xd0(r1)
    stfs f2, 0x10(r29)
    psq_st f1, 0x8(r29), 0, 0
    psq_l f1, 0x0(r27), 0, 0
    lfs f2, 0xdc(r1)
    stfs f2, 0x1c(r29)
    psq_st f1, 0x14(r29), 0, 0
    stfs f26, 0x50(r29)
    bl fn_8004B378
    mr r4, r29
    addi r3, r29, 0x1f4
    bl fn_80392A04
    mr r3, r29
    bl fn_80392510
    mr r3, r29
    bl fn_80392FE8
    mr r3, r29
    bl fn_803918EC
    mr r3, r29
    bl fn_803920C8
    mr r3, r29
    bl fn_803928C0
    addi r3, r29, 0x1f4
    bl fn_8004B378
    lwz r3, lbl_8087EFB4
    addi r4, r29, 0x1f4
    bl fn_80116BD4
    lwz r3, 0x808(r29)
    addi r0, r3, 0x1
    stw r0, 0x808(r29)
    cmpw r0, r31
    ble lbl_fn_8038A5F0_00001E28
    psq_l f1, 0x0(r28), 0, 0
    addi r4, r29, 0x80c
    lfs f2, 0xd0(r1)
    addi r5, r29, 0x818
    stfs f2, 0x814(r29)
    li r0, 0x0
    lwz r3, 0x7fc(r29)
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x0(r27), 0, 0
    lfs f2, 0xdc(r1)
    stfs f2, 0x820(r29)
    psq_st f1, 0x0(r5), 0, 0
    stw r3, 0x800(r29)
    stw r0, 0x808(r29)
lbl_fn_8038A5F0_00001E28:
    li r0, 0x0
    stw r0, 0x834(r29)
lbl_fn_8038A5F0_00001E30:
    addi r11, r1, 0x2e0
    psq_l f31, 0x368(r1), 0, 0
    lfd f31, 0x360(r1)
    psq_l f30, 0x358(r1), 0, 0
    lfd f30, 0x350(r1)
    psq_l f29, 0x348(r1), 0, 0
    lfd f29, 0x340(r1)
    psq_l f28, 0x338(r1), 0, 0
    lfd f28, 0x330(r1)
    psq_l f27, 0x328(r1), 0, 0
    lfd f27, 0x320(r1)
    psq_l f26, 0x318(r1), 0, 0
    lfd f26, 0x310(r1)
    psq_l f25, 0x308(r1), 0, 0
    lfd f25, 0x300(r1)
    psq_l f24, 0x2f8(r1), 0, 0
    lfd f24, 0x2f0(r1)
    psq_l f23, 0x2e8(r1), 0, 0
    lfd f23, 0x2e0(r1)
    bl _restgpr_27
    lwz r0, 0x374(r1)
    mtlr r0
    addi r1, r1, 0x370
    blr
}
