#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_24(void);
extern void _savegpr_24(void);
extern void fn_80010374(void);
extern void fn_80010B68(void);
extern void fn_80012A1C(void);
extern void fn_800928B0(void);
extern void fn_801162A4(void);
extern void fn_8048B048(void);
extern void fn_8048BCA4(void);
extern void fn_80548570(void);
extern void fn_805BDCC0(void);
extern void fn_805BF414(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F98D0(void);
extern void fn_80680CF8(void);
extern void fn_8068AD58(void);

/* External data declarations */
extern u8 lbl_807366B0[];
extern u8 lbl_807366B8[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087EFA8;
extern u32 lbl_8087F540;
extern u32 lbl_808816A8;
extern u32 lbl_808816AC;
extern u32 lbl_808816B0;
extern u32 lbl_808816C4;
extern u32 lbl_808816C8;
extern u32 lbl_808816CC;
extern u32 lbl_808816D0;

/* Function declarations */
void fn_8011375C(void);
void fn_801139E4(void);
void fn_80113CCC(void);
void fn_80113CD4(void);
void fn_801140A0(void);
void fn_80114468(void);
void fn_8011447C(void);
void fn_801144A8(void);
void fn_8011462C(void);
void fn_801146A4(void);
void fn_80114AA0(void);
void fn_80114AB4(void);

asm void fn_8011375C(void)
{
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    lfs f0, lbl_808816B0
    cmpwi r5, 0x0
    stw r0, 0xd4(r1)
    li r6, 0x0
    stfd f31, 0xc0(r1)
    psq_st f31, 0xc8(r1), 0, 0
    fmr f31, f3
    stfd f30, 0xb0(r1)
    psq_st f30, 0xb8(r1), 0, 0
    fmr f30, f2
    stfd f29, 0xa0(r1)
    psq_st f29, 0xa8(r1), 0, 0
    fmr f29, f1
    stw r31, 0x9c(r1)
    mr r31, r3
    stw r30, 0x98(r1)
    stw r29, 0x94(r1)
    lha r8, 0x284(r3)
    lha r7, 0x286(r3)
    lwz r0, 0x1f8(r3)
    stfs f0, 0x288(r3)
    clrlwi r0, r0, 1
    sth r8, 0x280(r3)
    sth r7, 0x282(r3)
    sth r6, 0x284(r3)
    sth r6, 0x286(r3)
    stw r0, 0x1f8(r3)
    beq lbl_fn_8011375C_00000090
    lis r5, lbl_807C7030@ha
    addi r5, r5, lbl_807C7030@l
    psq_l f1, 0x0(r5), 0, 0
    lfs f2, 0x8(r5)
    stfs f2, 0x264(r3)
    psq_st f1, 0x25c(r3), 0, 0
lbl_fn_8011375C_00000090:
    lwz r0, 0x14(r4)
    li r7, 0x2
    lwz r6, 0x0(r4)
    addi r30, r1, 0x50
    lwz r5, 0x4(r4)
    cmpwi r0, 0x0
    psq_l f1, 0x8(r4), 0, 0
    lfs f2, 0x10(r4)
    stw r7, 0x1f4(r3)
    lfs f0, lbl_808816B0
    stw r6, 0x210(r3)
    stw r5, 0x214(r3)
    psq_st f1, 0x218(r3), 0, 0
    stfs f2, 0x220(r3)
    stw r0, 0x224(r3)
    beq lbl_fn_8011375C_000000E4
    fmr f1, f0
    mr r3, r30
    mr r4, r0
    bl fn_80548570
    b lbl_fn_8011375C_000001F4
lbl_fn_8011375C_000000E4:
    mr r3, r6
    bl fn_80012A1C
    cmpwi r3, 0x0
    mr r29, r3
    beq lbl_fn_8011375C_00000124
    lwz r4, 0x214(r31)
    li r5, 0x0
    bl fn_800928B0
    cmpwi r3, 0x0
    bge lbl_fn_8011375C_00000114
    li r5, 0x0
    b lbl_fn_8011375C_00000128
lbl_fn_8011375C_00000114:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r29)
    add r5, r3, r0
    b lbl_fn_8011375C_00000128
lbl_fn_8011375C_00000124:
    li r5, 0x0
lbl_fn_8011375C_00000128:
    cmpwi r5, 0x0
    beq lbl_fn_8011375C_00000160
    lfs f3, 0x1c(r5)
    addi r3, r1, 0x20
    lfs f0, 0xc(r5)
    addi r4, r1, 0x8
    stfs f0, 0x20(r1)
    lfs f2, 0x2c(r5)
    stfs f3, 0x24(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x28(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x10(r1)
    b lbl_fn_8011375C_00000184
lbl_fn_8011375C_00000160:
    lwz r4, 0x210(r31)
    addi r3, r1, 0x2c
    bl fn_80010374
    addi r4, r1, 0x2c
    lfs f2, 0x34(r1)
    addi r3, r1, 0x8
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x10(r1)
lbl_fn_8011375C_00000184:
    psq_l f1, 0x218(r31), 0, 0
    addi r29, r1, 0x14
    lfs f2, 0x220(r31)
    addi r3, r1, 0x38
    stfs f2, 0x1c(r1)
    psq_st f1, 0x0(r29), 0, 0
    lwz r4, 0x210(r31)
    bl fn_80010B68
    lfs f1, 0x3c(r1)
    addi r3, r1, 0x60
    li r4, 0x79
    bl fn_805F8E70
    mr r4, r29
    mr r5, r29
    addi r3, r1, 0x60
    bl fn_805F93C0
    lfs f3, 0x10(r1)
    lfs f0, 0x1c(r1)
    lfs f5, 0xc(r1)
    fadds f6, f3, f0
    lfs f4, 0x18(r1)
    lfs f3, 0x8(r1)
    lfs f0, 0x14(r1)
    fadds f4, f5, f4
    stfs f6, 0x58(r1)
    fadds f0, f3, f0
    stfs f4, 0x54(r1)
    stfs f0, 0x50(r1)
lbl_fn_8011375C_000001F4:
    lfs f0, lbl_808816C8
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x8(r30)
    fcmpo cr0, f29, f0
    stfs f2, 0x20c(r31)
    psq_st f1, 0x204(r31), 0, 0
    ble lbl_fn_8011375C_00000214
    fmr f29, f0
lbl_fn_8011375C_00000214:
    stfs f29, 0x44(r1)
    addi r3, r1, 0x44
    lfs f2, lbl_808816B0
    stfs f30, 0x48(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x268(r31), 0, 0
    stfs f2, 0x270(r31)
    stfs f31, 0x200(r31)
    lwz r3, lbl_8087F540
    stfs f2, 0x4c(r1)
    lwz r0, 0xc4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8011375C_00000254
    mr r3, r31
    li r4, 0x0
    bl fn_801162A4
lbl_fn_8011375C_00000254:
    lwz r0, 0xd4(r1)
    psq_l f31, 0xc8(r1), 0, 0
    lfd f31, 0xc0(r1)
    psq_l f30, 0xb8(r1), 0, 0
    lfd f30, 0xb0(r1)
    psq_l f29, 0xa8(r1), 0, 0
    lfd f29, 0xa0(r1)
    lwz r31, 0x9c(r1)
    lwz r30, 0x98(r1)
    lwz r29, 0x94(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}

asm void fn_801139E4(void)
{
    nofralloc
    stwu r1, -0xe0(r1)
    mflr r0
    lfs f0, lbl_808816B0
    cmpwi r5, 0x0
    stw r0, 0xe4(r1)
    li r6, 0x0
    stfd f31, 0xd0(r1)
    psq_st f31, 0xd8(r1), 0, 0
    fmr f31, f2
    stfd f30, 0xc0(r1)
    psq_st f30, 0xc8(r1), 0, 0
    fmr f30, f1
    stw r31, 0xbc(r1)
    mr r31, r3
    stw r30, 0xb8(r1)
    stw r29, 0xb4(r1)
    lha r8, 0x284(r3)
    lha r7, 0x286(r3)
    lwz r0, 0x1f8(r3)
    stfs f0, 0x288(r3)
    clrlwi r0, r0, 1
    sth r8, 0x280(r3)
    sth r7, 0x282(r3)
    sth r6, 0x284(r3)
    sth r6, 0x286(r3)
    stw r0, 0x1f8(r3)
    beq lbl_fn_801139E4_0000030C
    lis r5, lbl_807C7030@ha
    addi r5, r5, lbl_807C7030@l
    psq_l f1, 0x0(r5), 0, 0
    lfs f2, 0x8(r5)
    stfs f2, 0x264(r3)
    psq_st f1, 0x25c(r3), 0, 0
lbl_fn_801139E4_0000030C:
    lwz r0, 0x14(r4)
    li r7, 0x3
    lwz r6, 0x0(r4)
    addi r30, r1, 0x74
    lwz r5, 0x4(r4)
    cmpwi r0, 0x0
    psq_l f1, 0x8(r4), 0, 0
    lfs f2, 0x10(r4)
    stw r7, 0x1f4(r3)
    lfs f0, lbl_808816B0
    stw r6, 0x240(r3)
    stw r5, 0x244(r3)
    psq_st f1, 0x248(r3), 0, 0
    stfs f2, 0x250(r3)
    stw r0, 0x254(r3)
    beq lbl_fn_801139E4_00000360
    fmr f1, f0
    mr r3, r30
    mr r4, r0
    bl fn_80548570
    b lbl_fn_801139E4_00000470
lbl_fn_801139E4_00000360:
    mr r3, r6
    bl fn_80012A1C
    cmpwi r3, 0x0
    mr r29, r3
    beq lbl_fn_801139E4_000003A0
    lwz r4, 0x244(r31)
    li r5, 0x0
    bl fn_800928B0
    cmpwi r3, 0x0
    bge lbl_fn_801139E4_00000390
    li r5, 0x0
    b lbl_fn_801139E4_000003A4
lbl_fn_801139E4_00000390:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r29)
    add r5, r3, r0
    b lbl_fn_801139E4_000003A4
lbl_fn_801139E4_000003A0:
    li r5, 0x0
lbl_fn_801139E4_000003A4:
    cmpwi r5, 0x0
    beq lbl_fn_801139E4_000003DC
    lfs f3, 0x1c(r5)
    addi r3, r1, 0x20
    lfs f0, 0xc(r5)
    addi r4, r1, 0x8
    stfs f0, 0x20(r1)
    lfs f2, 0x2c(r5)
    stfs f3, 0x24(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x28(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x10(r1)
    b lbl_fn_801139E4_00000400
lbl_fn_801139E4_000003DC:
    lwz r4, 0x240(r31)
    addi r3, r1, 0x2c
    bl fn_80010374
    addi r4, r1, 0x2c
    lfs f2, 0x34(r1)
    addi r3, r1, 0x8
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x10(r1)
lbl_fn_801139E4_00000400:
    psq_l f1, 0x248(r31), 0, 0
    addi r29, r1, 0x14
    lfs f2, 0x250(r31)
    addi r3, r1, 0x38
    stfs f2, 0x1c(r1)
    psq_st f1, 0x0(r29), 0, 0
    lwz r4, 0x240(r31)
    bl fn_80010B68
    lfs f1, 0x3c(r1)
    addi r3, r1, 0x80
    li r4, 0x79
    bl fn_805F8E70
    mr r4, r29
    mr r5, r29
    addi r3, r1, 0x80
    bl fn_805F93C0
    lfs f3, 0x10(r1)
    lfs f0, 0x1c(r1)
    lfs f5, 0xc(r1)
    fadds f6, f3, f0
    lfs f4, 0x18(r1)
    lfs f3, 0x8(r1)
    lfs f0, 0x14(r1)
    fadds f4, f5, f4
    stfs f6, 0x7c(r1)
    fadds f0, f3, f0
    stfs f4, 0x78(r1)
    stfs f0, 0x74(r1)
lbl_fn_801139E4_00000470:
    lfs f2, 0x8(r30)
    addi r3, r1, 0x50
    psq_l f1, 0x0(r30), 0, 0
    addi r5, r1, 0x44
    psq_st f1, 0x228(r31), 0, 0
    mr r4, r3
    lfs f0, 0x10(r31)
    lfs f5, 0xc(r31)
    fsubs f6, f0, f2
    lfs f4, 0x22c(r31)
    lfs f3, 0x8(r31)
    lfs f0, 0x228(r31)
    fsubs f4, f5, f4
    stfs f2, 0x230(r31)
    fsubs f0, f3, f0
    fmr f2, f6
    stfs f4, 0x48(r1)
    stfs f0, 0x44(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f6, 0x4c(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x58(r1)
    bl fn_805F98D0
    lfs f4, 0x58(r1)
    addi r3, r1, 0x68
    lfs f0, 0x54(r1)
    lfs f3, 0x50(r1)
    fmuls f4, f4, f30
    fmuls f5, f0, f30
    lfs f0, 0x230(r31)
    fmuls f6, f3, f30
    lfs f3, 0x22c(r31)
    fadds f2, f0, f4
    lfs f0, 0x228(r31)
    fadds f3, f3, f5
    stfs f31, 0x258(r31)
    fadds f0, f0, f6
    stfs f3, 0x6c(r1)
    stfs f0, 0x68(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x204(r31), 0, 0
    stfs f2, 0x20c(r31)
    lwz r3, lbl_8087F540
    stfs f6, 0x5c(r1)
    lwz r0, 0xc4(r3)
    stfs f5, 0x60(r1)
    cmpwi r0, 0x0
    stfs f4, 0x64(r1)
    stfs f2, 0x70(r1)
    beq lbl_fn_801139E4_00000544
    mr r3, r31
    li r4, 0x0
    bl fn_801162A4
lbl_fn_801139E4_00000544:
    lwz r0, 0xe4(r1)
    psq_l f31, 0xd8(r1), 0, 0
    lfd f31, 0xd0(r1)
    psq_l f30, 0xc8(r1), 0, 0
    lfd f30, 0xc0(r1)
    lwz r31, 0xbc(r1)
    lwz r30, 0xb8(r1)
    lwz r29, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xe0
    blr
}

asm void fn_80113CCC(void)
{
    nofralloc
    addi r3, r3, 0x8
    blr
}

asm void fn_80113CD4(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    cmpwi r7, 0x0
    lfs f0, lbl_808816B0
    stw r0, 0x134(r1)
    li r8, 0x0
    stfd f31, 0x120(r1)
    psq_st f31, 0x128(r1), 0, 0
    fmr f31, f1
    stfd f30, 0x110(r1)
    psq_st f30, 0x118(r1), 0, 0
    stw r31, 0x10c(r1)
    mr r31, r5
    stw r30, 0x108(r1)
    mr r30, r3
    stw r29, 0x104(r1)
    stw r28, 0x100(r1)
    mr r28, r4
    lha r10, 0x284(r3)
    lha r9, 0x286(r3)
    lwz r0, 0x1f8(r3)
    stfs f0, 0x288(r3)
    clrlwi r0, r0, 1
    sth r10, 0x280(r3)
    sth r9, 0x282(r3)
    sth r8, 0x284(r3)
    sth r8, 0x286(r3)
    stw r0, 0x1f8(r3)
    beq lbl_fn_80113CD4_00000604
    lis r4, lbl_807C7030@ha
    addi r4, r4, lbl_807C7030@l
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    stfs f2, 0x264(r3)
    psq_st f1, 0x25c(r3), 0, 0
lbl_fn_80113CD4_00000604:
    lwz r3, lbl_8087F540
    mr r4, r6
    bl fn_8048B048
    lfs f1, lbl_808816B0
    li r0, 0x4
    stw r3, 0x290(r30)
    mr r4, r3
    stw r0, 0x1f4(r30)
    stfs f1, 0x294(r30)
    lwz r3, lbl_8087F540
    bl fn_8048BCA4
    lwz r4, 0x14(r28)
    fmr f30, f1
    lwz r3, 0x0(r28)
    addi r29, r1, 0x8c
    lwz r0, 0x4(r28)
    cmpwi r4, 0x0
    psq_l f1, 0x8(r28), 0, 0
    lfs f2, 0x10(r28)
    stw r3, 0x210(r30)
    stw r0, 0x214(r30)
    psq_st f1, 0x218(r30), 0, 0
    stfs f2, 0x220(r30)
    stw r4, 0x224(r30)
    beq lbl_fn_80113CD4_00000678
    fmr f1, f30
    mr r3, r29
    bl fn_80548570
    b lbl_fn_80113CD4_00000784
lbl_fn_80113CD4_00000678:
    bl fn_80012A1C
    cmpwi r3, 0x0
    mr r28, r3
    beq lbl_fn_80113CD4_000006B4
    lwz r4, 0x214(r30)
    li r5, 0x0
    bl fn_800928B0
    cmpwi r3, 0x0
    bge lbl_fn_80113CD4_000006A4
    li r5, 0x0
    b lbl_fn_80113CD4_000006B8
lbl_fn_80113CD4_000006A4:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r28)
    add r5, r3, r0
    b lbl_fn_80113CD4_000006B8
lbl_fn_80113CD4_000006B4:
    li r5, 0x0
lbl_fn_80113CD4_000006B8:
    cmpwi r5, 0x0
    beq lbl_fn_80113CD4_000006F0
    lfs f3, 0x1c(r5)
    addi r3, r1, 0x5c
    lfs f0, 0xc(r5)
    addi r4, r1, 0x44
    stfs f0, 0x5c(r1)
    lfs f2, 0x2c(r5)
    stfs f3, 0x60(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x64(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x4c(r1)
    b lbl_fn_80113CD4_00000714
lbl_fn_80113CD4_000006F0:
    lwz r4, 0x210(r30)
    addi r3, r1, 0x68
    bl fn_80010374
    addi r4, r1, 0x68
    lfs f2, 0x70(r1)
    addi r3, r1, 0x44
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x4c(r1)
lbl_fn_80113CD4_00000714:
    psq_l f1, 0x218(r30), 0, 0
    addi r28, r1, 0x50
    lfs f2, 0x220(r30)
    addi r3, r1, 0x74
    stfs f2, 0x58(r1)
    psq_st f1, 0x0(r28), 0, 0
    lwz r4, 0x210(r30)
    bl fn_80010B68
    lfs f1, 0x78(r1)
    addi r3, r1, 0xc8
    li r4, 0x79
    bl fn_805F8E70
    mr r4, r28
    mr r5, r28
    addi r3, r1, 0xc8
    bl fn_805F93C0
    lfs f3, 0x4c(r1)
    lfs f0, 0x58(r1)
    lfs f5, 0x48(r1)
    fadds f6, f3, f0
    lfs f4, 0x54(r1)
    lfs f3, 0x44(r1)
    lfs f0, 0x50(r1)
    fadds f4, f5, f4
    stfs f6, 0x94(r1)
    fadds f0, f3, f0
    stfs f4, 0x90(r1)
    stfs f0, 0x8c(r1)
lbl_fn_80113CD4_00000784:
    lwz r4, 0x14(r31)
    addi r28, r1, 0x80
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x8(r29)
    cmpwi r4, 0x0
    stfs f2, 0x20c(r30)
    lwz r3, 0x0(r31)
    psq_st f1, 0x204(r30), 0, 0
    lwz r0, 0x4(r31)
    psq_l f1, 0x8(r31), 0, 0
    lfs f2, 0x10(r31)
    stw r3, 0x240(r30)
    stw r0, 0x244(r30)
    psq_st f1, 0x248(r30), 0, 0
    stfs f2, 0x250(r30)
    stw r4, 0x254(r30)
    beq lbl_fn_80113CD4_000007D8
    fmr f1, f30
    mr r3, r28
    bl fn_80548570
    b lbl_fn_80113CD4_000008E4
lbl_fn_80113CD4_000007D8:
    bl fn_80012A1C
    cmpwi r3, 0x0
    mr r29, r3
    beq lbl_fn_80113CD4_00000814
    lwz r4, 0x244(r30)
    li r5, 0x0
    bl fn_800928B0
    cmpwi r3, 0x0
    bge lbl_fn_80113CD4_00000804
    li r5, 0x0
    b lbl_fn_80113CD4_00000818
lbl_fn_80113CD4_00000804:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r29)
    add r5, r3, r0
    b lbl_fn_80113CD4_00000818
lbl_fn_80113CD4_00000814:
    li r5, 0x0
lbl_fn_80113CD4_00000818:
    cmpwi r5, 0x0
    beq lbl_fn_80113CD4_00000850
    lfs f3, 0x1c(r5)
    addi r3, r1, 0x20
    lfs f0, 0xc(r5)
    addi r4, r1, 0x8
    stfs f0, 0x20(r1)
    lfs f2, 0x2c(r5)
    stfs f3, 0x24(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x28(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x10(r1)
    b lbl_fn_80113CD4_00000874
lbl_fn_80113CD4_00000850:
    lwz r4, 0x240(r30)
    addi r3, r1, 0x2c
    bl fn_80010374
    addi r4, r1, 0x2c
    lfs f2, 0x34(r1)
    addi r3, r1, 0x8
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x10(r1)
lbl_fn_80113CD4_00000874:
    psq_l f1, 0x248(r30), 0, 0
    addi r29, r1, 0x14
    lfs f2, 0x250(r30)
    addi r3, r1, 0x38
    stfs f2, 0x1c(r1)
    psq_st f1, 0x0(r29), 0, 0
    lwz r4, 0x240(r30)
    bl fn_80010B68
    lfs f1, 0x3c(r1)
    addi r3, r1, 0x98
    li r4, 0x79
    bl fn_805F8E70
    mr r4, r29
    mr r5, r29
    addi r3, r1, 0x98
    bl fn_805F93C0
    lfs f3, 0x10(r1)
    lfs f0, 0x1c(r1)
    lfs f5, 0xc(r1)
    fadds f6, f3, f0
    lfs f4, 0x18(r1)
    lfs f3, 0x8(r1)
    lfs f0, 0x14(r1)
    fadds f4, f5, f4
    stfs f6, 0x88(r1)
    fadds f0, f3, f0
    stfs f4, 0x84(r1)
    stfs f0, 0x80(r1)
lbl_fn_80113CD4_000008E4:
    psq_l f1, 0x0(r28), 0, 0
    lfs f2, 0x8(r28)
    stfs f2, 0x230(r30)
    psq_st f1, 0x228(r30), 0, 0
    stfs f31, 0x258(r30)
    lwz r3, lbl_8087F540
    lwz r0, 0xc4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80113CD4_00000914
    mr r3, r30
    li r4, 0x0
    bl fn_801162A4
lbl_fn_80113CD4_00000914:
    lwz r0, 0x134(r1)
    psq_l f31, 0x128(r1), 0, 0
    lfd f31, 0x120(r1)
    psq_l f30, 0x118(r1), 0, 0
    lfd f30, 0x110(r1)
    lwz r31, 0x10c(r1)
    lwz r30, 0x108(r1)
    lwz r29, 0x104(r1)
    lwz r28, 0x100(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

asm void fn_801140A0(void)
{
    nofralloc
    stwu r1, -0x140(r1)
    mflr r0
    lfs f0, lbl_808816B0
    cmpwi r7, 0x0
    stw r0, 0x144(r1)
    li r8, 0x0
    stfd f31, 0x130(r1)
    psq_st f31, 0x138(r1), 0, 0
    fmr f31, f3
    stfd f30, 0x120(r1)
    psq_st f30, 0x128(r1), 0, 0
    fmr f30, f2
    stfd f29, 0x110(r1)
    psq_st f29, 0x118(r1), 0, 0
    fmr f29, f1
    stw r31, 0x10c(r1)
    mr r31, r5
    stw r30, 0x108(r1)
    mr r30, r3
    stw r29, 0x104(r1)
    stw r28, 0x100(r1)
    mr r28, r4
    lha r10, 0x284(r3)
    lha r9, 0x286(r3)
    lwz r0, 0x1f8(r3)
    stfs f0, 0x288(r3)
    clrlwi r0, r0, 1
    sth r10, 0x280(r3)
    sth r9, 0x282(r3)
    sth r8, 0x284(r3)
    sth r8, 0x286(r3)
    stw r0, 0x1f8(r3)
    beq lbl_fn_801140A0_000009E0
    lis r4, lbl_807C7030@ha
    addi r4, r4, lbl_807C7030@l
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    stfs f2, 0x264(r3)
    psq_st f1, 0x25c(r3), 0, 0
lbl_fn_801140A0_000009E0:
    lwz r3, lbl_8087F540
    mr r4, r6
    bl fn_8048B048
    li r0, 0x5
    stw r3, 0x290(r30)
    frsp f1, f30
    mr r4, r3
    stw r0, 0x1f4(r30)
    stfs f29, 0x298(r30)
    stfs f30, 0x294(r30)
    lwz r3, lbl_8087F540
    bl fn_8048BCA4
    cmpwi r28, 0x0
    fmr f30, f1
    stw r28, 0x224(r30)
    addi r29, r1, 0x8c
    beq lbl_fn_801140A0_00000A34
    mr r3, r29
    mr r4, r28
    bl fn_80548570
    b lbl_fn_801140A0_00000B44
lbl_fn_801140A0_00000A34:
    lwz r3, 0x210(r30)
    bl fn_80012A1C
    cmpwi r3, 0x0
    mr r28, r3
    beq lbl_fn_801140A0_00000A74
    lwz r4, 0x214(r30)
    li r5, 0x0
    bl fn_800928B0
    cmpwi r3, 0x0
    bge lbl_fn_801140A0_00000A64
    li r5, 0x0
    b lbl_fn_801140A0_00000A78
lbl_fn_801140A0_00000A64:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r28)
    add r5, r3, r0
    b lbl_fn_801140A0_00000A78
lbl_fn_801140A0_00000A74:
    li r5, 0x0
lbl_fn_801140A0_00000A78:
    cmpwi r5, 0x0
    beq lbl_fn_801140A0_00000AB0
    lfs f3, 0x1c(r5)
    addi r3, r1, 0x5c
    lfs f0, 0xc(r5)
    addi r4, r1, 0x44
    stfs f0, 0x5c(r1)
    lfs f2, 0x2c(r5)
    stfs f3, 0x60(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x64(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x4c(r1)
    b lbl_fn_801140A0_00000AD4
lbl_fn_801140A0_00000AB0:
    lwz r4, 0x210(r30)
    addi r3, r1, 0x68
    bl fn_80010374
    addi r4, r1, 0x68
    lfs f2, 0x70(r1)
    addi r3, r1, 0x44
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x4c(r1)
lbl_fn_801140A0_00000AD4:
    psq_l f1, 0x218(r30), 0, 0
    addi r28, r1, 0x50
    lfs f2, 0x220(r30)
    addi r3, r1, 0x74
    stfs f2, 0x58(r1)
    psq_st f1, 0x0(r28), 0, 0
    lwz r4, 0x210(r30)
    bl fn_80010B68
    lfs f1, 0x78(r1)
    addi r3, r1, 0xc8
    li r4, 0x79
    bl fn_805F8E70
    mr r4, r28
    mr r5, r28
    addi r3, r1, 0xc8
    bl fn_805F93C0
    lfs f3, 0x4c(r1)
    lfs f0, 0x58(r1)
    lfs f5, 0x48(r1)
    fadds f6, f3, f0
    lfs f4, 0x54(r1)
    lfs f3, 0x44(r1)
    lfs f0, 0x50(r1)
    fadds f4, f5, f4
    stfs f6, 0x94(r1)
    fadds f0, f3, f0
    stfs f4, 0x90(r1)
    stfs f0, 0x8c(r1)
lbl_fn_801140A0_00000B44:
    lwz r4, 0x14(r31)
    addi r28, r1, 0x80
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x8(r29)
    cmpwi r4, 0x0
    stfs f2, 0x20c(r30)
    lwz r3, 0x0(r31)
    psq_st f1, 0x204(r30), 0, 0
    lwz r0, 0x4(r31)
    psq_l f1, 0x8(r31), 0, 0
    lfs f2, 0x10(r31)
    stw r3, 0x240(r30)
    stw r0, 0x244(r30)
    psq_st f1, 0x248(r30), 0, 0
    stfs f2, 0x250(r30)
    stw r4, 0x254(r30)
    beq lbl_fn_801140A0_00000B98
    fmr f1, f30
    mr r3, r28
    bl fn_80548570
    b lbl_fn_801140A0_00000CA4
lbl_fn_801140A0_00000B98:
    bl fn_80012A1C
    cmpwi r3, 0x0
    mr r29, r3
    beq lbl_fn_801140A0_00000BD4
    lwz r4, 0x244(r30)
    li r5, 0x0
    bl fn_800928B0
    cmpwi r3, 0x0
    bge lbl_fn_801140A0_00000BC4
    li r5, 0x0
    b lbl_fn_801140A0_00000BD8
lbl_fn_801140A0_00000BC4:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r29)
    add r5, r3, r0
    b lbl_fn_801140A0_00000BD8
lbl_fn_801140A0_00000BD4:
    li r5, 0x0
lbl_fn_801140A0_00000BD8:
    cmpwi r5, 0x0
    beq lbl_fn_801140A0_00000C10
    lfs f3, 0x1c(r5)
    addi r3, r1, 0x20
    lfs f0, 0xc(r5)
    addi r4, r1, 0x8
    stfs f0, 0x20(r1)
    lfs f2, 0x2c(r5)
    stfs f3, 0x24(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x28(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x10(r1)
    b lbl_fn_801140A0_00000C34
lbl_fn_801140A0_00000C10:
    lwz r4, 0x240(r30)
    addi r3, r1, 0x2c
    bl fn_80010374
    addi r4, r1, 0x2c
    lfs f2, 0x34(r1)
    addi r3, r1, 0x8
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x10(r1)
lbl_fn_801140A0_00000C34:
    psq_l f1, 0x248(r30), 0, 0
    addi r29, r1, 0x14
    lfs f2, 0x250(r30)
    addi r3, r1, 0x38
    stfs f2, 0x1c(r1)
    psq_st f1, 0x0(r29), 0, 0
    lwz r4, 0x240(r30)
    bl fn_80010B68
    lfs f1, 0x3c(r1)
    addi r3, r1, 0x98
    li r4, 0x79
    bl fn_805F8E70
    mr r4, r29
    mr r5, r29
    addi r3, r1, 0x98
    bl fn_805F93C0
    lfs f3, 0x10(r1)
    lfs f0, 0x1c(r1)
    lfs f5, 0xc(r1)
    fadds f6, f3, f0
    lfs f4, 0x18(r1)
    lfs f3, 0x8(r1)
    lfs f0, 0x14(r1)
    fadds f4, f5, f4
    stfs f6, 0x88(r1)
    fadds f0, f3, f0
    stfs f4, 0x84(r1)
    stfs f0, 0x80(r1)
lbl_fn_801140A0_00000CA4:
    psq_l f1, 0x0(r28), 0, 0
    lfs f2, 0x8(r28)
    stfs f2, 0x230(r30)
    psq_st f1, 0x228(r30), 0, 0
    stfs f31, 0x258(r30)
    lwz r3, lbl_8087F540
    lwz r0, 0xc4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801140A0_00000CD4
    mr r3, r30
    li r4, 0x0
    bl fn_801162A4
lbl_fn_801140A0_00000CD4:
    lwz r0, 0x144(r1)
    psq_l f31, 0x138(r1), 0, 0
    lfd f31, 0x130(r1)
    psq_l f30, 0x128(r1), 0, 0
    lfd f30, 0x120(r1)
    psq_l f29, 0x118(r1), 0, 0
    lfd f29, 0x110(r1)
    lwz r31, 0x10c(r1)
    lwz r30, 0x108(r1)
    lwz r29, 0x104(r1)
    lwz r28, 0x100(r1)
    mtlr r0
    addi r1, r1, 0x140
    blr
}

asm void fn_80114468(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x420(r3)
    lwz r3, lbl_8087EFA8
    stw r0, 0xd4(r3)
    blr
}

asm void fn_8011447C(void)
{
    nofralloc
    li r0, 0x1
    stw r0, 0x420(r3)
    stfs f1, 0x424(r3)
    stfs f2, 0x428(r3)
    stfs f3, 0x42c(r3)
    stfs f4, 0x430(r3)
    stfs f5, 0x434(r3)
    stfs f6, 0x438(r3)
    stw r4, 0x43c(r3)
    stw r5, 0x440(r3)
    blr
}

asm void fn_801144A8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    lwz r0, lbl_8087EFA8
    cmpwi r0, 0x0
    beq lbl_fn_801144A8_00000EC8
    lwz r0, 0x420(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801144A8_00000EC8
    lwz r6, 0x43c(r3)
    cmpwi r6, 0x0
    ble lbl_fn_801144A8_00000DA8
    xoris r4, r6, 0x8000
    lis r0, 0x4330
    stw r4, 0xc(r1)
    lis r5, lbl_807366B0@ha
    lfd f2, lbl_807366B0@l(r5)
    subi r4, r6, 0x1
    stw r0, 0x8(r1)
    lfs f0, lbl_808816A8
    lfd f1, 0x8(r1)
    stw r4, 0x43c(r3)
    fsubs f1, f1, f2
    fdivs f8, f0, f1
    b lbl_fn_801144A8_00000DAC
lbl_fn_801144A8_00000DA8:
    lfs f8, lbl_808816A8
lbl_fn_801144A8_00000DAC:
    lwz r4, lbl_8087EFA8
    lfs f0, 0x430(r3)
    lfs f6, 0xf0(r4)
    lfs f4, 0xe4(r4)
    fsubs f0, f0, f6
    lfs f2, 0x424(r3)
    lfs f5, 0xe8(r4)
    lfs f1, 0x428(r3)
    fsubs f3, f2, f4
    fmadds f7, f8, f0, f6
    fsubs f2, f1, f5
    lfs f6, 0xec(r4)
    lfs f0, 0x42c(r3)
    fmadds f4, f8, f3, f4
    lfs f10, 0xcc(r3)
    fsubs f1, f0, f6
    fmadds f5, f8, f2, f5
    lfs f2, 0x100(r4)
    lfs f0, 0x434(r3)
    fcmpo cr0, f10, f7
    fmadds f6, f8, f1, f6
    fsubs f1, f0, f2
    lfs f3, 0xfc(r4)
    lfs f0, 0x438(r3)
    fmadds f1, f8, f1, f2
    lfs f9, 0xc8(r3)
    fsubs f0, f0, f3
    fmadds f0, f8, f0, f3
    cror eq, lt, eq
    bne lbl_fn_801144A8_00000E28
    fmr f7, f10
lbl_fn_801144A8_00000E28:
    fcmpo cr0, f9, f7
    cror eq, gt, eq
    bne lbl_fn_801144A8_00000E38
    fmr f7, f9
lbl_fn_801144A8_00000E38:
    fcmpo cr0, f10, f6
    cror eq, lt, eq
    bne lbl_fn_801144A8_00000E48
    fmr f6, f10
lbl_fn_801144A8_00000E48:
    fcmpo cr0, f9, f6
    cror eq, gt, eq
    bne lbl_fn_801144A8_00000E58
    fmr f6, f9
lbl_fn_801144A8_00000E58:
    fcmpo cr0, f10, f4
    cror eq, lt, eq
    bne lbl_fn_801144A8_00000E68
    fmr f4, f10
lbl_fn_801144A8_00000E68:
    fcmpo cr0, f9, f4
    cror eq, gt, eq
    bne lbl_fn_801144A8_00000E78
    fmr f4, f9
lbl_fn_801144A8_00000E78:
    fcmpo cr0, f10, f5
    cror eq, lt, eq
    bne lbl_fn_801144A8_00000E88
    b lbl_fn_801144A8_00000E8C
lbl_fn_801144A8_00000E88:
    fmr f10, f5
lbl_fn_801144A8_00000E8C:
    fcmpo cr0, f9, f10
    cror eq, gt, eq
    bne lbl_fn_801144A8_00000E9C
    b lbl_fn_801144A8_00000EA0
lbl_fn_801144A8_00000E9C:
    fmr f9, f10
lbl_fn_801144A8_00000EA0:
    li r0, 0x1
    stw r0, 0xd4(r4)
    stfs f4, 0xe4(r4)
    stfs f9, 0xe8(r4)
    stfs f6, 0xec(r4)
    stfs f7, 0xf0(r4)
    stfs f1, 0x100(r4)
    stfs f0, 0xfc(r4)
    lwz r0, 0x440(r3)
    stw r0, 0xe0(r4)
lbl_fn_801144A8_00000EC8:
    addi r1, r1, 0x10
    blr
}

asm void fn_8011462C(void)
{
    nofralloc
    fmr f4, f1
    cmpwi r4, 0x0
    fmr f3, f2
    beq lbl_fn_8011462C_00000F3C
    lfs f0, lbl_808816B0
    lis r4, lbl_807C7030@ha
    stfs f0, 0x3fc(r3)
    addi r4, r4, lbl_807C7030@l
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    stfs f2, 0x3f8(r3)
    lfs f2, 0x8(r5)
    psq_st f1, 0x3f0(r3), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x3b8(r3), 0, 0
    psq_st f1, 0x3d8(r3), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x3c0(r3)
    stfs f2, 0x3e0(r3)
    lfs f2, 0x8(r6)
    stfs f4, 0x3d0(r3)
    psq_st f1, 0x3c4(r3), 0, 0
    stfs f2, 0x3cc(r3)
    psq_st f1, 0x3e4(r3), 0, 0
    stfs f2, 0x3ec(r3)
    stfs f3, 0x3d4(r3)
    blr
lbl_fn_8011462C_00000F3C:
    lfs f0, lbl_808816AC
    stfs f0, 0x3fc(r3)
    blr
}

asm void fn_801146A4(void)
{
    nofralloc
    stwu r1, -0x150(r1)
    mflr r0
    stw r0, 0x154(r1)
    addi r11, r1, 0x100
    stfd f31, 0x140(r1)
    psq_st f31, 0x148(r1), 0, 0
    stfd f30, 0x130(r1)
    psq_st f30, 0x138(r1), 0, 0
    stfd f29, 0x120(r1)
    psq_st f29, 0x128(r1), 0, 0
    stfd f28, 0x110(r1)
    psq_st f28, 0x118(r1), 0, 0
    stfd f27, 0x100(r1)
    psq_st f27, 0x108(r1), 0, 0
    bl _savegpr_24
    lfs f3, lbl_808816AC
    mr r31, r3
    lfs f0, 0x3fc(r3)
    fcmpu cr0, f3, f0
    beq lbl_fn_801146A4_00001304
    lfs f2, 0x10(r3)
    addi r5, r1, 0x8c
    psq_l f1, 0x8(r3), 0, 0
    lis r4, lbl_807366B0@ha
    psq_st f1, 0x0(r5), 0, 0
    addi r5, r1, 0x80
    psq_l f1, 0x14(r3), 0, 0
    addi r29, r3, 0x3b8
    stfs f2, 0x94(r1)
    addi r28, r3, 0x3d8
    lfs f2, 0x1c(r3)
    addi r27, r3, 0x3c4
    lfs f31, lbl_808816B0
    addi r26, r3, 0x3e4
    psq_st f1, 0x0(r5), 0, 0
    addi r25, r1, 0x98
    lfs f28, lbl_808816CC
    li r24, 0x0
    stfs f2, 0x88(r1)
    lis r30, 0x4330
    lfd f29, lbl_807366B0@l(r4)
    lfs f30, lbl_808816D0
lbl_fn_801146A4_00000FF0:
    lfs f3, 0x0(r29)
    lfs f0, 0x3d0(r31)
    fmuls f3, f28, f3
    fmuls f27, f0, f3
    bl fn_80680CF8
    xoris r0, r3, 0x8000
    stw r0, 0xcc(r1)
    fneg f4, f27
    lfs f0, 0x0(r28)
    stw r30, 0xc8(r1)
    lfd f5, 0xc8(r1)
    fsubs f3, f27, f4
    fsubs f5, f5, f29
    fdivs f5, f5, f30
    fmadds f3, f3, f5, f4
    fadds f0, f0, f3
    stfs f0, 0x0(r28)
    lfs f3, 0x0(r29)
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_801146A4_00001048
    b lbl_fn_801146A4_0000104C
lbl_fn_801146A4_00001048:
    fmr f3, f0
lbl_fn_801146A4_0000104C:
    fcmpo cr0, f31, f3
    cror eq, gt, eq
    bne lbl_fn_801146A4_0000105C
    fmr f3, f31
lbl_fn_801146A4_0000105C:
    stfs f3, 0x0(r28)
    lfs f3, 0x0(r27)
    lfs f0, 0x3d4(r31)
    fmuls f3, f28, f3
    fmuls f27, f0, f3
    bl fn_80680CF8
    xoris r0, r3, 0x8000
    stw r0, 0xd4(r1)
    fneg f4, f27
    lfs f0, 0x0(r26)
    stw r30, 0xd0(r1)
    lfd f5, 0xd0(r1)
    fsubs f3, f27, f4
    fsubs f5, f5, f29
    fdivs f5, f5, f30
    fmadds f3, f3, f5, f4
    fadds f0, f0, f3
    stfs f0, 0x0(r26)
    lfs f3, 0x0(r27)
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_801146A4_000010B8
    b lbl_fn_801146A4_000010BC
lbl_fn_801146A4_000010B8:
    fmr f3, f0
lbl_fn_801146A4_000010BC:
    fcmpo cr0, f31, f3
    cror eq, gt, eq
    bne lbl_fn_801146A4_000010CC
    fmr f3, f31
lbl_fn_801146A4_000010CC:
    stfs f3, 0x0(r26)
    frsp f3, f3
    lfs f0, 0x3fc(r31)
    lwz r3, lbl_8087F540
    fmuls f0, f0, f3
    lfs f27, 0x0(r28)
    lfs f3, 0xb4(r3)
    fmuls f1, f0, f3
    bl fn_8068AD58
    frsp f0, f1
    addi r24, r24, 0x1
    cmpwi r24, 0x3
    addi r29, r29, 0x4
    addi r28, r28, 0x4
    addi r27, r27, 0x4
    fmuls f0, f27, f0
    addi r26, r26, 0x4
    stfs f0, 0x0(r25)
    addi r25, r25, 0x4
    blt lbl_fn_801146A4_00000FF0
    lfs f0, 0x60(r31)
    addi r4, r1, 0x74
    lfs f5, 0x98(r1)
    addi r3, r1, 0xbc
    lfs f3, 0x5c(r31)
    addi r6, r1, 0x5c
    fmuls f6, f0, f5
    lfs f4, 0x58(r31)
    fmuls f7, f3, f5
    lfs f8, 0x70(r31)
    lfs f11, 0x9c(r1)
    fmuls f5, f4, f5
    lfs f9, 0x6c(r31)
    fmuls f12, f8, f11
    lfs f10, 0x68(r31)
    fmr f2, f6
    fmuls f13, f9, f11
    lfs f28, 0x80(r31)
    fmuls f11, f10, f11
    lfs f29, 0x7c(r31)
    addi r5, r1, 0xb0
    lfs f30, 0x78(r31)
    stfs f2, 0xc4(r1)
    fmr f2, f12
    lfs f31, 0xa0(r1)
    stfs f5, 0x74(r1)
    fmuls f5, f28, f31
    stfs f7, 0x78(r1)
    fmuls f7, f29, f31
    fmuls f31, f30, f31
    psq_l f1, 0x0(r4), 0, 0
    stfs f11, 0x5c(r1)
    stfs f13, 0x60(r1)
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f4, 0x68(r1)
    stfs f3, 0x6c(r1)
    stfs f0, 0x70(r1)
    stfs f6, 0x7c(r1)
    stfs f10, 0x50(r1)
    stfs f9, 0x54(r1)
    stfs f8, 0x58(r1)
    stfs f12, 0x64(r1)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0xb8(r1)
    stfs f30, 0x38(r1)
    stfs f29, 0x3c(r1)
    stfs f28, 0x40(r1)
    stfs f31, 0x44(r1)
    stfs f7, 0x48(r1)
    stfs f5, 0x4c(r1)
    fmr f2, f5
    addi r5, r1, 0x44
    lfs f3, 0xc4(r1)
    addi r4, r1, 0xa4
    lfs f0, 0xb8(r1)
    lis r3, lbl_807366B8@ha
    fadds f8, f3, f0
    psq_l f1, 0x0(r5), 0, 0
    frsp f0, f2
    psq_st f1, 0x0(r4), 0, 0
    lfs f5, 0xc0(r1)
    addi r5, r1, 0x2c
    fadds f11, f8, f0
    lfs f3, 0xb4(r1)
    lfs f4, 0xbc(r1)
    addi r4, r1, 0x98
    fadds f9, f5, f3
    lfs f0, 0xb0(r1)
    fadds f10, f4, f0
    lfs f3, 0xa8(r1)
    lfs f0, 0xa4(r1)
    addi r6, r1, 0x14
    fadds f5, f9, f3
    stfs f2, 0xac(r1)
    fadds f6, f10, f0
    stfs f5, 0x30(r1)
    fmr f2, f11
    lfs f4, 0x94(r1)
    stfs f6, 0x2c(r1)
    addi r7, r1, 0x8
    frsp f0, f2
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lfs f3, 0x90(r1)
    fadds f12, f4, f0
    stfs f2, 0xa0(r1)
    lfs f7, 0x9c(r1)
    lfs f0, 0x8c(r1)
    fadds f13, f3, f7
    lfs f6, 0x98(r1)
    fmr f2, f12
    lfs f5, 0x88(r1)
    fadds f28, f0, f6
    lfs f4, 0xa0(r1)
    lfs f0, 0x80(r1)
    fadds f4, f5, f4
    lfs f3, 0x84(r1)
    fadds f6, f0, f6
    stfs f2, 0x10(r31)
    fadds f5, f3, f7
    lfs f3, 0x3fc(r31)
    lfd f0, lbl_807366B8@l(r3)
    fmr f2, f4
    fadd f0, f3, f0
    stfs f28, 0x14(r1)
    stfs f13, 0x18(r1)
    frsp f0, f0
    psq_l f1, 0x0(r6), 0, 0
    stfs f6, 0x8(r1)
    stfs f5, 0xc(r1)
    psq_st f1, 0x8(r31), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    stfs f10, 0x20(r1)
    stfs f9, 0x24(r1)
    stfs f8, 0x28(r1)
    stfs f11, 0x34(r1)
    stfs f12, 0x1c(r1)
    stfs f4, 0x10(r1)
    psq_st f1, 0x14(r31), 0, 0
    stfs f2, 0x1c(r31)
    stfs f0, 0x3fc(r31)
lbl_fn_801146A4_00001304:
    addi r11, r1, 0x100
    psq_l f31, 0x148(r1), 0, 0
    lfd f31, 0x140(r1)
    psq_l f30, 0x138(r1), 0, 0
    lfd f30, 0x130(r1)
    psq_l f29, 0x128(r1), 0, 0
    lfd f29, 0x120(r1)
    psq_l f28, 0x118(r1), 0, 0
    lfd f28, 0x110(r1)
    psq_l f27, 0x108(r1), 0, 0
    lfd f27, 0x100(r1)
    bl _restgpr_24
    lwz r0, 0x154(r1)
    mtlr r0
    addi r1, r1, 0x150
    blr
}

asm void fn_80114AA0(void)
{
    nofralloc
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    psq_st f1, 0x8(r3), 0, 0
    stfs f2, 0x10(r3)
    blr
}

asm void fn_80114AB4(void)
{
    nofralloc
    stwu r1, -0x3a0(r1)
    mflr r0
    stw r0, 0x3a4(r1)
    stfd f31, 0x390(r1)
    psq_st f31, 0x398(r1), 0, 0
    stfd f30, 0x380(r1)
    psq_st f30, 0x388(r1), 0, 0
    stw r31, 0x37c(r1)
    mr r31, r3
    stw r30, 0x378(r1)
    stw r29, 0x374(r1)
    lwz r0, 0x400(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80114AB4_00001A1C
    lwz r4, lbl_8087F540
    lfs f0, lbl_808816B0
    lfs f7, 0xb4(r4)
    fcmpu cr0, f0, f7
    beq lbl_fn_80114AB4_00001A1C
    lfs f7, 0x414(r3)
    lfs f31, 0x40c(r3)
    fcmpo cr0, f7, f0
    lfs f30, 0x410(r3)
    ble lbl_fn_80114AB4_000013CC
    lfs f0, 0x418(r3)
    fdivs f0, f0, f7
    fmuls f31, f31, f0
    fmuls f30, f30, f0
    b lbl_fn_80114AB4_000013EC
lbl_fn_80114AB4_000013CC:
    bge lbl_fn_80114AB4_000013EC
    fneg f8, f7
    lfs f7, 0x418(r3)
    lfs f0, lbl_808816A8
    fdivs f7, f7, f8
    fsubs f0, f0, f7
    fmuls f31, f31, f0
    fmuls f30, f30, f0
lbl_fn_80114AB4_000013EC:
    lfs f0, 0x414(r3)
    lfs f8, 0xb4(r4)
    fabs f9, f0
    lfs f7, 0x404(r3)
    lfs f0, 0x418(r3)
    fmadds f0, f7, f8, f0
    frsp f7, f9
    stfs f0, 0x418(r3)
    fcmpo cr0, f0, f7
    ble lbl_fn_80114AB4_0000141C
    lfs f0, lbl_808816B0
    stfs f0, 0x414(r3)
lbl_fn_80114AB4_0000141C:
    lfs f2, 0x10(r3)
    addi r4, r1, 0xbc
    psq_l f1, 0x8(r3), 0, 0
    addi r5, r1, 0xb0
    psq_st f1, 0x0(r4), 0, 0
    li r4, 0x0
    psq_l f1, 0x14(r3), 0, 0
    stfs f2, 0xc4(r1)
    lfs f2, 0x1c(r3)
    psq_st f1, 0x0(r5), 0, 0
    lwz r3, 0x400(r3)
    stfs f2, 0xb8(r1)
    bl fn_805BDCC0
    lfs f7, 0x14(r3)
    mr r29, r3
    lfs f0, 0x408(r31)
    fcmpo cr0, f0, f7
    cror eq, gt, eq
    bne lbl_fn_80114AB4_00001470
    fsubs f0, f0, f7
    stfs f0, 0x408(r31)
lbl_fn_80114AB4_00001470:
    lwz r0, 0x41c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80114AB4_000016E8
    lfs f1, 0x408(r31)
    mr r3, r29
    addi r4, r1, 0xa4
    li r5, 0x4
    li r6, 0x5
    li r7, 0x6
    bl fn_805BF414
    lfs f0, lbl_808816C4
    addi r30, r1, 0x338
    lfs f7, 0xac(r1)
    lfs f9, 0xa4(r1)
    fmuls f10, f0, f7
    lfs f8, 0xa8(r1)
    fmuls f9, f0, f9
    lfs f7, lbl_808816B0
    fmuls f8, f0, f8
    lfs f0, lbl_808816A8
    fmuls f1, f10, f30
    stfs f7, 0x98(r1)
    fmuls f9, f9, f30
    fmuls f8, f8, f30
    stfs f1, 0xac(r1)
    fcmpu cr0, f7, f1
    stfs f9, 0xa4(r1)
    stfs f8, 0xa8(r1)
    stfs f7, 0x9c(r1)
    stfs f0, 0xa0(r1)
    stfs f9, 0x14(r1)
    stfs f8, 0x18(r1)
    stfs f1, 0x1c(r1)
    stfs f7, 0x364(r1)
    stfs f7, 0x35c(r1)
    stfs f7, 0x358(r1)
    stfs f7, 0x354(r1)
    stfs f7, 0x350(r1)
    stfs f7, 0x348(r1)
    stfs f7, 0x344(r1)
    stfs f7, 0x340(r1)
    stfs f7, 0x33c(r1)
    stfs f0, 0x360(r1)
    stfs f0, 0x34c(r1)
    stfs f0, 0x338(r1)
    beq lbl_fn_80114AB4_00001578
    addi r3, r1, 0x2a8
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x2a8
    addi r5, r1, 0x2d8
    bl fn_805F89F0
    addi r3, r1, 0x2d8
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
lbl_fn_80114AB4_00001578:
    lfs f0, lbl_808816B0
    lfs f1, 0x18(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_80114AB4_000015D8
    addi r3, r1, 0x248
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x248
    addi r5, r1, 0x278
    bl fn_805F89F0
    addi r3, r1, 0x278
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
lbl_fn_80114AB4_000015D8:
    lfs f0, lbl_808816B0
    lfs f1, 0x14(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_80114AB4_00001638
    addi r3, r1, 0x1e8
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x1e8
    addi r5, r1, 0x218
    bl fn_805F89F0
    addi r3, r1, 0x218
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
lbl_fn_80114AB4_00001638:
    addi r4, r1, 0x98
    addi r3, r1, 0x338
    mr r5, r4
    bl fn_805F93C0
    lfs f9, 0xc0(r1)
    addi r9, r1, 0x68
    lfs f8, 0x9c(r1)
    addi r8, r1, 0xb0
    lfs f7, 0xbc(r1)
    mr r3, r29
    fadds f10, f9, f8
    lfs f0, 0x98(r1)
    lfs f9, 0xc4(r1)
    addi r4, r1, 0x50
    fadds f0, f7, f0
    lfs f8, 0xa0(r1)
    fadds f2, f9, f8
    stfs f10, 0x6c(r1)
    lfs f7, 0x408(r31)
    li r5, 0x1
    stfs f0, 0x68(r1)
    li r6, 0x2
    psq_l f1, 0x0(r9), 0, 0
    li r7, 0x3
    psq_st f1, 0x0(r8), 0, 0
    fmr f1, f7
    stfs f2, 0x70(r1)
    stfs f2, 0xb8(r1)
    bl fn_805BF414
    lfs f0, 0x58(r1)
    addi r4, r1, 0x5c
    lfs f7, 0x54(r1)
    addi r3, r1, 0xbc
    fmuls f2, f0, f31
    lfs f0, 0x50(r1)
    fmuls f7, f7, f31
    fmuls f0, f0, f31
    stfs f2, 0x64(r1)
    stfs f0, 0x5c(r1)
    stfs f7, 0x60(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0xc4(r1)
    b lbl_fn_80114AB4_000019DC
lbl_fn_80114AB4_000016E8:
    lfs f1, 0x408(r31)
    mr r3, r29
    addi r4, r1, 0x8c
    li r5, 0x4
    li r6, 0x5
    li r7, 0x6
    bl fn_805BF414
    lfs f0, lbl_808816C4
    addi r30, r1, 0x308
    lfs f7, 0x94(r1)
    lfs f9, 0x8c(r1)
    fmuls f12, f0, f7
    lfs f8, 0x90(r1)
    fmuls f10, f0, f9
    lfs f9, 0xb8(r1)
    fmuls f11, f0, f8
    lfs f8, 0xc4(r1)
    lfs f7, lbl_808816B0
    fmuls f1, f12, f30
    fmuls f13, f10, f30
    lfs f0, lbl_808816A8
    fmuls f12, f11, f30
    lfs f11, 0xb4(r1)
    fsubs f30, f9, f8
    lfs f10, 0xc0(r1)
    lfs f9, 0xb0(r1)
    fcmpu cr0, f7, f1
    lfs f8, 0xbc(r1)
    fsubs f10, f11, f10
    stfs f13, 0x8c(r1)
    fsubs f8, f9, f8
    stfs f12, 0x90(r1)
    stfs f1, 0x94(r1)
    stfs f8, 0x80(r1)
    stfs f10, 0x84(r1)
    stfs f30, 0x88(r1)
    stfs f13, 0x8(r1)
    stfs f12, 0xc(r1)
    stfs f1, 0x10(r1)
    stfs f7, 0x334(r1)
    stfs f7, 0x32c(r1)
    stfs f7, 0x328(r1)
    stfs f7, 0x324(r1)
    stfs f7, 0x320(r1)
    stfs f7, 0x318(r1)
    stfs f7, 0x314(r1)
    stfs f7, 0x310(r1)
    stfs f7, 0x30c(r1)
    stfs f0, 0x330(r1)
    stfs f0, 0x31c(r1)
    stfs f0, 0x308(r1)
    beq lbl_fn_80114AB4_00001808
    addi r3, r1, 0x188
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x188
    addi r5, r1, 0x1b8
    bl fn_805F89F0
    addi r3, r1, 0x1b8
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
lbl_fn_80114AB4_00001808:
    lfs f0, lbl_808816B0
    lfs f1, 0xc(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_80114AB4_00001868
    addi r3, r1, 0x128
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x128
    addi r5, r1, 0x158
    bl fn_805F89F0
    addi r3, r1, 0x158
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
lbl_fn_80114AB4_00001868:
    lfs f0, lbl_808816B0
    lfs f1, 0x8(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_80114AB4_000018C8
    addi r3, r1, 0xc8
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0xc8
    addi r5, r1, 0xf8
    bl fn_805F89F0
    addi r3, r1, 0xf8
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
lbl_fn_80114AB4_000018C8:
    addi r4, r1, 0x80
    addi r3, r1, 0x308
    mr r5, r4
    bl fn_805F93C0
    lfs f7, 0xc4(r1)
    addi r4, r1, 0x44
    lfs f0, 0x88(r1)
    addi r3, r1, 0xb0
    lfs f9, 0xc0(r1)
    fadds f2, f7, f0
    lfs f8, 0x84(r1)
    lfs f7, 0xbc(r1)
    fadds f8, f9, f8
    lfs f0, 0x80(r1)
    stfs f2, 0x4c(r1)
    fadds f9, f7, f0
    lfs f7, 0x408(r31)
    lfs f0, lbl_808816A8
    stfs f9, 0x44(r1)
    fcmpo cr0, f7, f0
    stfs f8, 0x48(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0xb8(r1)
    cror eq, gt, eq
    bne lbl_fn_80114AB4_00001938
    fsubs f1, f7, f0
    b lbl_fn_80114AB4_0000193C
lbl_fn_80114AB4_00001938:
    lfs f1, lbl_808816B0
lbl_fn_80114AB4_0000193C:
    mr r3, r29
    addi r4, r1, 0x74
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl fn_805BF414
    lfs f1, 0x408(r31)
    mr r3, r29
    addi r4, r1, 0x20
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl fn_805BF414
    lfs f7, 0x28(r1)
    lfs f0, 0x7c(r1)
    lfs f8, 0x24(r1)
    fsubs f9, f7, f0
    lfs f0, 0x78(r1)
    lfs f7, 0x20(r1)
    fsubs f10, f8, f0
    lfs f0, 0x74(r1)
    fmuls f12, f9, f31
    fsubs f11, f7, f0
    lfs f0, 0xc4(r1)
    fmuls f13, f10, f31
    lfs f7, 0xc0(r1)
    fadds f0, f0, f12
    fmuls f30, f11, f31
    lfs f8, 0xbc(r1)
    fadds f7, f7, f13
    stfs f11, 0x2c(r1)
    fadds f8, f8, f30
    stfs f10, 0x30(r1)
    stfs f9, 0x34(r1)
    stfs f30, 0x38(r1)
    stfs f13, 0x3c(r1)
    stfs f12, 0x40(r1)
    stfs f8, 0xbc(r1)
    stfs f7, 0xc0(r1)
    stfs f0, 0xc4(r1)
lbl_fn_80114AB4_000019DC:
    addi r3, r1, 0xbc
    lfs f2, 0xc4(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0xb0
    psq_st f1, 0x8(r31), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x10(r31)
    lfs f2, 0xb8(r1)
    psq_st f1, 0x14(r31), 0, 0
    lfs f7, 0x404(r31)
    stfs f2, 0x1c(r31)
    lfs f0, 0x408(r31)
    lwz r3, lbl_8087F540
    lfs f8, 0xb4(r3)
    fmadds f0, f7, f8, f0
    stfs f0, 0x408(r31)
lbl_fn_80114AB4_00001A1C:
    lwz r0, 0x3a4(r1)
    psq_l f31, 0x398(r1), 0, 0
    lfd f31, 0x390(r1)
    psq_l f30, 0x388(r1), 0, 0
    lfd f30, 0x380(r1)
    lwz r31, 0x37c(r1)
    lwz r30, 0x378(r1)
    lwz r29, 0x374(r1)
    mtlr r0
    addi r1, r1, 0x3a0
    blr
}
