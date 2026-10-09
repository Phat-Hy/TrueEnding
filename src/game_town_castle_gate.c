#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_26(void);
extern void _savegpr_26(void);
extern void dtor_80084684(void);
extern void fn_8006F72C(void);
extern void fn_800844D8(void);
extern void fn_800DBF68(void);
extern void fn_800DC6B4(void);
extern void fn_80134250(void);
extern void fn_80134270(void);
extern void fn_801F0544(void);
extern void fn_801F6C2C(void);
extern void fn_801FEB9C(void);
extern void fn_801FECE0(void);
extern void fn_801FED24(void);
extern void fn_801FEE08(void);
extern void fn_80239DAC(void);
extern void fn_8023A680(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F90D0(void);
extern void fn_805F9160(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9940(void);
extern void fn_80680770(void);
extern void fn_80686EA4(void);
extern void fn_8068AD58(void);
extern void fn_8068AEA4(void);

/* External data declarations */
extern u8 lbl_807506A0[];
extern u8 lbl_807799A0[];

/* Small data declarations */
extern u32 lbl_8087EEC8;
extern u32 lbl_8087EEE0;
extern u32 lbl_8087F1E4;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F9F8;
extern u32 lbl_808813D0;
extern u32 lbl_80885D58;
extern u32 lbl_80885D60;
extern u32 lbl_80885DEC;
extern u32 lbl_80885DFC;
extern u32 lbl_80885E5C;
extern u32 lbl_80885E70;
extern u32 lbl_80885E80;
extern u32 lbl_80885E84;
extern u32 lbl_80885E8C;

/* Function declarations */
void fn_803D6DE4(void);
void fn_803D6DF4(void);
void fn_803D6E1C(void);
void fn_803D6E24(void);
void fn_803D6E2C(void);
void fn_803D6E3C(void);
void fn_803D6E70(void);
void fn_803D6E7C(void);
void fn_803D6EA0(void);
void fn_803D6EAC(void);
void fn_803D6EB8(void);
void fn_803D6EC0(void);
void fn_803D6ED4(void);
void fn_803D6EDC(void);
void fn_803D6EEC(void);
void fn_803D6EF0(void);
void fn_803D6EF8(void);
void fn_803D6F44(void);
void fn_803D6F60(void);
void fn_803D6F68(void);
void fn_803D6F70(void);
void fn_803D6F78(void);
void fn_803D6FD4(void);
void fn_803D6FDC(void);
void fn_803D6FE4(void);
void fn_803D6FEC(void);
void fn_803D7000(void);
void fn_803D7014(void);
void fn_803D7028(void);
void fn_803D703C(void);
void fn_803D7044(void);
void fn_803D7058(void);
void fn_803D7060(void);
void fn_803D7074(void);
void fn_803D707C(void);
void fn_803D7084(void);
void fn_803D70A0(void);
void fn_803D70A8(void);
void fn_803D70B4(void);
void fn_803D7100(void);
void fn_803D7108(void);
void fn_803D7110(void);
void fn_803D7124(void);
void fn_803D7158(void);
void fn_803D716C(void);
void fn_803D7174(void);
void fn_803D717C(void);
void fn_803D7184(void);
void fn_803D718C(void);
void fn_803D7194(void);
void fn_803D719C(void);
void fn_803D71A8(void);
void fn_803D71BC(void);
void fn_803D71C4(void);
void fn_803D71CC(void);
void fn_803D71D4(void);
void fn_803D71DC(void);
void fn_803D71F4(void);
void fn_803D7204(void);
void fn_803D7224(void);
void fn_803D7234(void);
void fn_803D7260(void);
void fn_803D7270(void);
void fn_803D7280(void);
void fn_803D72C0(void);
void fn_803D72FC(void);
void fn_803D731C(void);
void fn_803D732C(void);
void fn_803D733C(void);
void fn_803D737C(void);
void fn_803D7384(void);
void fn_803D738C(void);
void fn_803D739C(void);
void fn_803D73A4(void);
void fn_803D73B4(void);
void fn_803D73C8(void);
void fn_803D7828(void);
void fn_803D7830(void);
void fn_803D7840(void);
void fn_803D7850(void);
void fn_803D8344(void);

asm void fn_803D6DE4(void)
{
    nofralloc
    lwz r0, 0x2638(r3)
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

asm void fn_803D6DF4(void)
{
    nofralloc
    lwz r0, 0x4fc(r3)
    li r4, 0x0
    cmpwi r0, 0x1e
    bne lbl_fn_803D6DF4_00000030
    lwz r0, 0x50c(r3)
    cmpwi r0, 0x5
    bge lbl_fn_803D6DF4_00000030
    li r4, 0x1
lbl_fn_803D6DF4_00000030:
    mr r3, r4
    blr
}

asm void fn_803D6E1C(void)
{
    nofralloc
    lwz r3, 0x50c(r3)
    blr
}

asm void fn_803D6E24(void)
{
    nofralloc
    lwz r3, 0x54e4(r3)
    blr
}

asm void fn_803D6E2C(void)
{
    nofralloc
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    blr
}

asm void fn_803D6E3C(void)
{
    nofralloc
    lfs f1, lbl_80885D60
    li r0, 0x0
    lfs f0, lbl_80885D58
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stfs f1, 0x8(r3)
    stfs f1, 0xc(r3)
    stfs f1, 0x10(r3)
    stfs f1, 0x14(r3)
    stfs f0, 0x18(r3)
    stfs f0, 0x1c(r3)
    stfs f0, 0x20(r3)
    blr
}

asm void fn_803D6E70(void)
{
    nofralloc
    lwz r0, 0x38(r3)
    clrlwi r3, r0, 31
    blr
}

asm void fn_803D6E7C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_8068AD58
    lwz r0, 0x14(r1)
    frsp f1, f1
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803D6EA0(void)
{
    nofralloc
    lwz r0, 0x54c(r3)
    extrwi r3, r0, 1, 18
    blr
}

asm void fn_803D6EAC(void)
{
    nofralloc
    lwz r0, 0x12a4(r3)
    extrwi r3, r0, 1, 5
    blr
}

asm void fn_803D6EB8(void)
{
    nofralloc
    addi r3, r3, 0x624
    blr
}

asm void fn_803D6EC0(void)
{
    nofralloc
    lfs f1, 0x8(r3)
    lfs f0, 0x0(r3)
    fmuls f1, f1, f1
    fmadds f1, f0, f0, f1
    blr
}

asm void fn_803D6ED4(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    blr
}

asm void fn_803D6EDC(void)
{
    nofralloc
    lwz r0, 0x0(r3)
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

asm void fn_803D6EEC(void)
{
    nofralloc
    blr
}

asm void fn_803D6EF0(void)
{
    nofralloc
    addi r3, r3, 0x58
    b fn_801FEB9C
}

asm void fn_803D6EF8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x18(r1)
    fmr f31, f1
    stw r31, 0x14(r1)
    mr r31, r3
    mr r3, r4
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    addi r3, r31, 0x58
    bl fn_801FECE0
    lwz r0, 0x24(r1)
    lfd f31, 0x18(r1)
    lwz r31, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803D6F44(void)
{
    nofralloc
    lfs f1, 0xa0(r3)
    lfs f0, 0x100(r3)
    fcmpo cr0, f0, f1
    cror eq, gt, eq
    mfcr r3
    extrwi r3, r3, 1, 2
    blr
}

asm void fn_803D6F60(void)
{
    nofralloc
    addi r3, r3, 0x470
    blr
}

asm void fn_803D6F68(void)
{
    nofralloc
    stfs f1, 0x100(r3)
    blr
}

asm void fn_803D6F70(void)
{
    nofralloc
    lwz r3, 0x7fc(r3)
    blr
}

asm void fn_803D6F78(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x18(r1)
    fmr f31, f1
    stw r31, 0x14(r1)
    mr r31, r5
    stw r30, 0x10(r1)
    mr r30, r3
    mr r3, r4
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r5, r31
    addi r3, r30, 0x58
    bl fn_801FED24
    lwz r0, 0x24(r1)
    lfd f31, 0x18(r1)
    lwz r31, 0x14(r1)
    lwz r30, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803D6FD4(void)
{
    nofralloc
    stw r4, 0x50(r3)
    blr
}

asm void fn_803D6FDC(void)
{
    nofralloc
    addi r3, r3, 0xf60
    blr
}

asm void fn_803D6FE4(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    blr
}

asm void fn_803D6FEC(void)
{
    nofralloc
    stfs f1, 0x0(r3)
    stfs f2, 0x4(r3)
    stfs f3, 0x8(r3)
    stfs f4, 0xc(r3)
    blr
}

asm void fn_803D7000(void)
{
    nofralloc
    psq_l f1, 0x0(r4), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    blr
}

asm void fn_803D7014(void)
{
    nofralloc
    psq_l f1, 0x0(r4), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    blr
}

asm void fn_803D7028(void)
{
    nofralloc
    lwz r3, 0x648(r3)
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    blr
}

asm void fn_803D703C(void)
{
    nofralloc
    lwz r3, 0xc(r3)
    blr
}

asm void fn_803D7044(void)
{
    nofralloc
    lwz r3, 0x2c(r3)
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    blr
}

asm void fn_803D7058(void)
{
    nofralloc
    addi r3, r3, 0x550c
    blr
}

asm void fn_803D7060(void)
{
    nofralloc
    lwz r3, 0x4fc(r3)
    subi r0, r3, 0x1e
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

asm void fn_803D7074(void)
{
    nofralloc
    lfs f1, 0xfbc(r3)
    blr
}

asm void fn_803D707C(void)
{
    nofralloc
    lfs f1, 0xfb8(r3)
    blr
}

asm void fn_803D7084(void)
{
    nofralloc
    slwi r0, r4, 3
    add r3, r3, r0
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    bnelr
    la r3, lbl_808813D0
    blr
}

asm void fn_803D70A0(void)
{
    nofralloc
    lwz r3, lbl_8087F1E4
    blr
}

asm void fn_803D70A8(void)
{
    nofralloc
    lwz r0, 0x12a4(r3)
    extrwi r3, r0, 1, 9
    blr
}

asm void fn_803D70B4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r5
    stw r30, 0x8(r1)
    mr r30, r3
    mr r3, r4
    bl fn_800DC6B4
    mr r4, r3
    mr r5, r31
    addi r3, r30, 0x58
    bl fn_801FEE08
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803D7100(void)
{
    nofralloc
    lwz r3, 0x60(r3)
    blr
}

asm void fn_803D7108(void)
{
    nofralloc
    addi r3, r3, 0xc8
    blr
}

asm void fn_803D7110(void)
{
    nofralloc
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    psq_st f1, 0xbc(r3), 0, 0
    stfs f2, 0xc4(r3)
    blr
}

asm void fn_803D7124(void)
{
    nofralloc
    psq_l f1, 0x0(r4), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_st f1, 0xc8(r3), 0, 0
    psq_st f2, 0xd0(r3), 0, 0
    psq_st f3, 0xd8(r3), 0, 0
    psq_st f4, 0xe0(r3), 0, 0
    psq_st f5, 0xe8(r3), 0, 0
    psq_st f6, 0xf0(r3), 0, 0
    blr
}

asm void fn_803D7158(void)
{
    nofralloc
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    psq_st f1, 0xf8(r3), 0, 0
    stfs f2, 0x100(r3)
    blr
}

asm void fn_803D716C(void)
{
    nofralloc
    lwz r3, lbl_8087EEC8
    blr
}

asm void fn_803D7174(void)
{
    nofralloc
    addi r3, r3, 0x58
    blr
}

asm void fn_803D717C(void)
{
    nofralloc
    lfs f1, 0x1458(r3)
    blr
}

asm void fn_803D7184(void)
{
    nofralloc
    lwz r3, lbl_8087F9F8
    blr
}

asm void fn_803D718C(void)
{
    nofralloc
    lwz r3, 0xa70(r3)
    blr
}

asm void fn_803D7194(void)
{
    nofralloc
    addi r3, r3, 0x15d8
    blr
}

asm void fn_803D719C(void)
{
    nofralloc
    lwz r0, 0x1374(r3)
    extrwi r3, r0, 1, 24
    blr
}

asm void fn_803D71A8(void)
{
    nofralloc
    lwz r3, 0xd8c(r3)
    subi r0, r3, 0x1
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

asm void fn_803D71BC(void)
{
    nofralloc
    lwz r3, 0x3c(r3)
    blr
}

asm void fn_803D71C4(void)
{
    nofralloc
    lwz r3, lbl_8087EEE0
    blr
}

asm void fn_803D71CC(void)
{
    nofralloc
    lwz r3, 0x40(r3)
    blr
}

asm void fn_803D71D4(void)
{
    nofralloc
    lwz r3, 0x648(r3)
    blr
}

asm void fn_803D71DC(void)
{
    nofralloc
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
    stw r5, 0xc(r3)
    blr
}

asm void fn_803D71F4(void)
{
    nofralloc
    mulli r0, r4, 0x24
    add r3, r3, r0
    addi r3, r3, 0x4
    blr
}

asm void fn_803D7204(void)
{
    nofralloc
    lwz r4, 0x0(r3)
    li r3, 0x4
    subi r0, r4, 0x4
    orc r3, r4, r3
    srwi r0, r0, 1
    subf r0, r0, r3
    srwi r3, r0, 31
    blr
}

asm void fn_803D7224(void)
{
    nofralloc
    mulli r0, r4, 0x14
    lwz r3, 0x8(r3)
    add r3, r3, r0
    blr
}

asm void fn_803D7234(void)
{
    nofralloc
    lwz r0, 0x0(r3)
    slwi r0, r0, 2
    add r0, r3, r0
    addic. r5, r0, 0x4
    beq lbl_fn_803D7234_0000046C
    lwz r0, 0x0(r4)
    stw r0, 0x0(r5)
lbl_fn_803D7234_0000046C:
    lwz r4, 0x0(r3)
    addi r0, r4, 0x1
    stw r0, 0x0(r3)
    blr
}

asm void fn_803D7260(void)
{
    nofralloc
    slwi r0, r4, 2
    add r3, r3, r0
    addi r3, r3, 0x4
    blr
}

asm void fn_803D7270(void)
{
    nofralloc
    slwi r0, r5, 3
    add r3, r3, r0
    addi r3, r3, 0x4
    b fn_801F0544
}

asm void fn_803D7280(void)
{
    nofralloc
    addi r6, r3, 0x14
    addi r4, r3, 0x54
    cmplw r6, r4
    li r5, 0x0
    stw r5, 0x0(r3)
    stw r5, 0x10(r3)
    bgelr
    addi r0, r4, 0xf
    subf r0, r6, r0
    srwi r0, r0, 4
    mtctr r0
    bgelr
lbl_fn_803D7280_000004CC:
    stw r5, 0xc(r6)
    addi r6, r6, 0x10
    bdnz lbl_fn_803D7280_000004CC
    blr
}

asm void fn_803D72C0(void)
{
    nofralloc
    lwz r0, 0x0(r3)
    slwi r0, r0, 4
    add r0, r3, r0
    addic. r5, r0, 0x4
    beq lbl_fn_803D72C0_00000508
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    lfs f2, 0x8(r4)
    stfs f2, 0x8(r5)
    lwz r0, 0xc(r4)
    stw r0, 0xc(r5)
lbl_fn_803D72C0_00000508:
    lwz r4, 0x0(r3)
    addi r0, r4, 0x1
    stw r0, 0x0(r3)
    blr
}

asm void fn_803D72FC(void)
{
    nofralloc
    lwz r4, 0x0(r3)
    li r3, 0x5
    subi r0, r4, 0x5
    orc r3, r4, r3
    srwi r0, r0, 1
    subf r0, r0, r3
    srwi r3, r0, 31
    blr
}

asm void fn_803D731C(void)
{
    nofralloc
    slwi r0, r4, 4
    add r3, r3, r0
    addi r3, r3, 0x4
    blr
}

asm void fn_803D732C(void)
{
    nofralloc
    slwi r0, r4, 2
    add r3, r3, r0
    addi r3, r3, 0x4
    blr
}

asm void fn_803D733C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_801F6C2C
    lfs f0, 0x50(r31)
    fcmpo cr0, f0, f1
    cror eq, gt, eq
    mfcr r3
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    extrwi r3, r3, 1, 2
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803D737C(void)
{
    nofralloc
    lfs f1, 0x50(r3)
    blr
}

asm void fn_803D7384(void)
{
    nofralloc
    stfs f1, 0x50(r3)
    blr
}

asm void fn_803D738C(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    slwi r0, r4, 3
    add r3, r3, r0
    blr
}

asm void fn_803D739C(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    blr
}

asm void fn_803D73A4(void)
{
    nofralloc
    slwi r0, r4, 5
    add r3, r3, r0
    addi r3, r3, 0x4
    blr
}

asm void fn_803D73B4(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    blr
}

asm void fn_803D73C8(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    stw r30, 0x48(r1)
    mr r30, r4
    stw r29, 0x44(r1)
    mr r29, r3
    stw r28, 0x40(r1)
    lwz r0, 0x4(r3)
    lwz r5, 0x8(r3)
    cmplw r0, r5
    bge lbl_fn_803D73C8_000006A4
    mulli r0, r0, 0xc
    lwz r3, 0x0(r3)
    add. r31, r3, r0
    beq lbl_fn_803D73C8_00000694
    lwz r3, 0x0(r4)
    srwi. r0, r3, 31
    bne lbl_fn_803D73C8_0000064C
    stw r3, 0x0(r31)
    lwz r0, 0x4(r4)
    stw r0, 0x4(r31)
    lwz r0, 0x8(r4)
    stw r0, 0x8(r31)
    b lbl_fn_803D73C8_00000694
lbl_fn_803D73C8_0000064C:
    li r0, 0x0
    stw r0, 0x0(r31)
    lwz r4, 0x4(r4)
    mr r3, r31
    stw r0, 0x4(r31)
    stw r0, 0x8(r31)
    bl fn_800DBF68
    lwz r0, 0x4(r30)
    mr r3, r31
    lbz r4, 0x10(r1)
    addi r8, r1, 0x14
    stb r4, 0x14(r1)
    slwi r0, r0, 1
    lwz r6, 0x8(r30)
    li r4, 0x0
    li r5, 0x0
    add r7, r6, r0
    bl fn_8006F72C
lbl_fn_803D73C8_00000694:
    lwz r3, 0x4(r29)
    addi r0, r3, 0x1
    stw r0, 0x4(r29)
    b lbl_fn_803D73C8_00000A24
lbl_fn_803D73C8_000006A4:
    lis r3, 0x1555
    addi r0, r3, 0x5555
    subf r0, r5, r0
    cmplwi r0, 0x1
    bge lbl_fn_803D73C8_000006DC
    lis r4, lbl_807506A0@ha
    lis r3, __files@ha
    addi r4, r4, lbl_807506A0@l
    addi r3, r3, __files@l
    addi r4, r4, 0x11d2
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_803D73C8_000006DC:
    li r5, 0x0
    addi r4, r29, 0x8
    lis r3, 0x1555
    stw r5, 0x24(r1)
    addi r0, r3, 0x5555
    stw r5, 0x28(r1)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r5, 0x34(r1)
    lwz r3, 0x4(r29)
    lwz r31, 0x8(r29)
    addi r3, r3, 0x1
    subf r3, r31, r3
    subf r0, r31, r0
    cmplw r3, r0
    stw r3, 0x18(r1)
    ble lbl_fn_803D73C8_00000744
    lis r4, lbl_807506A0@ha
    lis r3, __files@ha
    addi r4, r4, lbl_807506A0@l
    addi r3, r3, __files@l
    addi r4, r4, 0x11d2
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_803D73C8_00000744:
    lis r3, 0x71c
    addi r0, r3, 0x71c7
    cmplw r31, r0
    bge lbl_fn_803D73C8_00000794
    addi r5, r31, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x18(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r4, r3, r4
    addi r3, r1, 0x20
    srwi r4, r4, 2
    stw r4, 0x20(r1)
    cmplw r4, r0
    bge lbl_fn_803D73C8_00000788
    addi r3, r1, 0x18
lbl_fn_803D73C8_00000788:
    lwz r0, 0x0(r3)
    add r28, r31, r0
    b lbl_fn_803D73C8_000007D8
lbl_fn_803D73C8_00000794:
    lis r3, 0xe39
    subi r0, r3, 0x1c72
    cmplw r31, r0
    bge lbl_fn_803D73C8_000007D0
    addi r3, r31, 0x1
    lwz r0, 0x18(r1)
    srwi r3, r3, 1
    stw r3, 0x1c(r1)
    cmplw r3, r0
    addi r3, r1, 0x1c
    bge lbl_fn_803D73C8_000007C4
    addi r3, r1, 0x18
lbl_fn_803D73C8_000007C4:
    lwz r0, 0x0(r3)
    add r28, r31, r0
    b lbl_fn_803D73C8_000007D8
lbl_fn_803D73C8_000007D0:
    lis r3, 0x1555
    addi r28, r3, 0x5555
lbl_fn_803D73C8_000007D8:
    lis r3, 0x1555
    addi r0, r3, 0x5555
    cmplw r28, r0
    ble lbl_fn_803D73C8_0000080C
    lis r4, lbl_807506A0@ha
    lis r3, __files@ha
    addi r4, r4, lbl_807506A0@l
    addi r3, r3, __files@l
    addi r4, r4, 0x11d2
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_803D73C8_0000080C:
    mulli r3, r28, 0xc
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_803D73C8_00000840
    lis r3, __files@ha
    lis r4, lbl_807799A0@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_807799A0@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_803D73C8_00000840:
    lwz r3, 0x28(r1)
    li r0, 0x0
    stw r31, 0x24(r1)
    mulli r4, r3, 0xc
    stw r28, 0x2c(r1)
    lwz r3, 0x4(r29)
    stw r3, 0x34(r1)
    mulli r3, r3, 0xc
    add r3, r31, r3
    add. r31, r4, r3
    beq lbl_fn_803D73C8_000008D4
    lwz r4, 0x0(r30)
    srwi. r3, r4, 31
    bne lbl_fn_803D73C8_00000890
    stw r4, 0x0(r31)
    lwz r0, 0x4(r30)
    stw r0, 0x4(r31)
    lwz r0, 0x8(r30)
    stw r0, 0x8(r31)
    b lbl_fn_803D73C8_000008D4
lbl_fn_803D73C8_00000890:
    stw r0, 0x0(r31)
    mr r3, r31
    lwz r4, 0x4(r30)
    stw r0, 0x4(r31)
    stw r0, 0x8(r31)
    bl fn_800DBF68
    lwz r0, 0x4(r30)
    mr r3, r31
    lbz r4, 0xc(r1)
    addi r8, r1, 0x8
    stb r4, 0x8(r1)
    slwi r0, r0, 1
    lwz r6, 0x8(r30)
    li r4, 0x0
    li r5, 0x0
    add r7, r6, r0
    bl fn_8006F72C
lbl_fn_803D73C8_000008D4:
    lwz r4, 0x28(r1)
    lis r3, 0x2aab
    subi r6, r3, 0x5555
    lwz r0, 0x34(r1)
    addi r3, r4, 0x1
    stw r3, 0x28(r1)
    lwz r3, 0x24(r1)
    lwz r4, 0x4(r29)
    lwz r28, 0x0(r29)
    mulli r5, r4, 0xc
    mr r4, r28
    add r5, r28, r5
    subf r5, r28, r5
    mulhw r5, r6, r5
    srawi r5, r5, 1
    srwi r6, r5, 31
    add r30, r5, r6
    subf r0, r30, r0
    stw r0, 0x34(r1)
    mulli r31, r30, 0xc
    mulli r0, r0, 0xc
    mr r5, r31
    add r3, r3, r0
    bl memcpy
    mr r3, r28
    mr r5, r31
    li r4, 0x0
    bl memset
    lwz r3, 0x28(r1)
    addi r31, r1, 0x24
    lwz r0, 0x2c(r1)
    add r3, r3, r30
    stw r3, 0x28(r1)
    lwz r3, 0x8(r29)
    stw r0, 0x8(r29)
    stw r3, 0x2c(r1)
    lwz r0, 0x24(r1)
    lwz r3, 0x0(r29)
    stw r0, 0x0(r29)
    stw r3, 0x24(r1)
    lwz r0, 0x28(r1)
    lwz r5, 0x4(r29)
    stw r0, 0x4(r29)
    mulli r0, r5, 0xc
    lwz r3, 0x34(r1)
    lwz r4, 0x24(r1)
    mulli r3, r3, 0xc
    stw r5, 0x28(r1)
    add r29, r4, r3
    add r30, r29, r0
    b lbl_fn_803D73C8_000009BC
lbl_fn_803D73C8_000009A0:
    subic. r30, r30, 0xc
    beq lbl_fn_803D73C8_000009BC
    lwz r0, 0x0(r30)
    srwi. r0, r0, 31
    beq lbl_fn_803D73C8_000009BC
    lwz r3, 0x8(r30)
    bl dtor_80084684
lbl_fn_803D73C8_000009BC:
    cmplw r30, r29
    bgt lbl_fn_803D73C8_000009A0
    cmpwi r31, 0x0
    li r0, 0x0
    stw r0, 0x28(r1)
    beq lbl_fn_803D73C8_00000A24
    lwz r3, 0x24(r1)
    cmpwi r3, 0x0
    beq lbl_fn_803D73C8_00000A24
    mulli r0, r0, 0xc
    li r30, 0x0
    stw r30, 0x28(r1)
    add r29, r3, r0
    b lbl_fn_803D73C8_00000A14
lbl_fn_803D73C8_000009F4:
    subic. r29, r29, 0xc
    beq lbl_fn_803D73C8_00000A10
    lwz r0, 0x0(r29)
    srwi. r0, r0, 31
    beq lbl_fn_803D73C8_00000A10
    lwz r3, 0x8(r29)
    bl dtor_80084684
lbl_fn_803D73C8_00000A10:
    subi r30, r30, 0x1
lbl_fn_803D73C8_00000A14:
    cmpwi r30, 0x0
    bne lbl_fn_803D73C8_000009F4
    lwz r3, 0x24(r1)
    bl dtor_80084684
lbl_fn_803D73C8_00000A24:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    lwz r28, 0x40(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_803D7828(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    blr
}

asm void fn_803D7830(void)
{
    nofralloc
    mulli r0, r4, 0xc
    lwz r3, 0x0(r3)
    add r3, r3, r0
    blr
}

asm void fn_803D7840(void)
{
    nofralloc
    mulli r0, r4, 0xc
    add r3, r3, r0
    addi r3, r3, 0x4
    blr
}

asm void fn_803D7850(void)
{
    nofralloc
    stwu r1, -0x5e0(r1)
    mflr r0
    stw r0, 0x5e4(r1)
    addi r11, r1, 0x570
    stfd f31, 0x5d0(r1)
    psq_st f31, 0x5d8(r1), 0, 0
    stfd f30, 0x5c0(r1)
    psq_st f30, 0x5c8(r1), 0, 0
    stfd f29, 0x5b0(r1)
    psq_st f29, 0x5b8(r1), 0, 0
    stfd f28, 0x5a0(r1)
    psq_st f28, 0x5a8(r1), 0, 0
    stfd f27, 0x590(r1)
    psq_st f27, 0x598(r1), 0, 0
    stfd f26, 0x580(r1)
    psq_st f26, 0x588(r1), 0, 0
    stfd f25, 0x570(r1)
    psq_st f25, 0x578(r1), 0, 0
    bl _savegpr_26
    lwz r0, 0x14a8(r4)
    mr r27, r3
    mr r28, r4
    mr r29, r5
    srwi. r0, r0, 31
    mr r26, r6
    mr r30, r7
    beq lbl_fn_803D7850_00000AE0
    addi r4, r4, 0x148c
    b lbl_fn_803D7850_00000AE4
lbl_fn_803D7850_00000AE0:
    addi r4, r4, 0x600
lbl_fn_803D7850_00000AE4:
    lwz r0, 0x14a8(r5)
    addi r3, r1, 0x114
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    srwi. r0, r0, 31
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x11c(r1)
    beq lbl_fn_803D7850_00000B0C
    addi r4, r5, 0x148c
    b lbl_fn_803D7850_00000B10
lbl_fn_803D7850_00000B0C:
    addi r4, r5, 0x600
lbl_fn_803D7850_00000B10:
    addi r3, r1, 0x108
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    addi r3, r1, 0xfc
    lfs f2, 0x8(r4)
    lfs f0, 0x11c(r1)
    lfs f8, 0x108(r1)
    fsubs f9, f2, f0
    lfs f7, 0x114(r1)
    lfs f0, lbl_80885D58
    fsubs f7, f8, f7
    stfs f2, 0x110(r1)
    stfs f7, 0xfc(r1)
    stfs f9, 0x104(r1)
    stfs f0, 0x100(r1)
    bl fn_805F9940
    lwz r0, 0x14a8(r29)
    srwi. r0, r0, 31
    beq lbl_fn_803D7850_00000B64
    lfs f7, 0x1498(r29)
    b lbl_fn_803D7850_00000B68
lbl_fn_803D7850_00000B64:
    lfs f7, 0x5b0(r29)
lbl_fn_803D7850_00000B68:
    lwz r0, 0x14a8(r28)
    srwi. r0, r0, 31
    beq lbl_fn_803D7850_00000B7C
    lfs f9, 0x1498(r28)
    b lbl_fn_803D7850_00000B80
lbl_fn_803D7850_00000B7C:
    lfs f9, 0x5b0(r28)
lbl_fn_803D7850_00000B80:
    lfs f8, lbl_80885E8C
    lfs f0, lbl_80885D60
    fmuls f7, f8, f7
    fmadds f7, f8, f9, f7
    fsubs f7, f1, f7
    fcmpo cr0, f7, f0
    ble lbl_fn_803D7850_00001510
    mulli r0, r26, 0x7c
    addi r3, r1, 0xfc
    mr r4, r3
    add r5, r27, r0
    addi r31, r5, 0x15bc
    bl fn_805F98D0
    lwz r0, 0x14a8(r28)
    srwi. r0, r0, 31
    beq lbl_fn_803D7850_00000BC8
    lfs f11, 0x1498(r28)
    b lbl_fn_803D7850_00000BCC
lbl_fn_803D7850_00000BC8:
    lfs f11, 0x5b0(r28)
lbl_fn_803D7850_00000BCC:
    lfs f8, 0x104(r1)
    lfs f0, 0x100(r1)
    fmuls f9, f8, f11
    lfs f7, 0xfc(r1)
    fmuls f10, f0, f11
    lfs f0, lbl_80885E8C
    fmuls f11, f7, f11
    lwz r0, 0x14a8(r29)
    fmuls f12, f9, f0
    lfs f8, 0x114(r1)
    fmuls f31, f11, f0
    lfs f7, 0x118(r1)
    fmuls f13, f10, f0
    lfs f0, 0x11c(r1)
    fadds f8, f8, f31
    srwi. r0, r0, 31
    fadds f7, f7, f13
    stfs f11, 0xcc(r1)
    fadds f0, f0, f12
    stfs f10, 0xd0(r1)
    stfs f9, 0xd4(r1)
    stfs f31, 0xd8(r1)
    stfs f13, 0xdc(r1)
    stfs f12, 0xe0(r1)
    stfs f8, 0x114(r1)
    stfs f7, 0x118(r1)
    stfs f0, 0x11c(r1)
    beq lbl_fn_803D7850_00000C44
    lfs f11, 0x1498(r29)
    b lbl_fn_803D7850_00000C48
lbl_fn_803D7850_00000C44:
    lfs f11, 0x5b0(r29)
lbl_fn_803D7850_00000C48:
    lfs f8, 0x104(r1)
    lfs f0, 0x100(r1)
    fmuls f9, f8, f11
    lfs f7, 0xfc(r1)
    fmuls f10, f0, f11
    lfs f0, lbl_80885E8C
    fmuls f11, f7, f11
    lwz r0, 0x15b8(r27)
    fmuls f12, f9, f0
    lfs f8, 0x108(r1)
    fmuls f31, f11, f0
    lfs f7, 0x10c(r1)
    fmuls f13, f10, f0
    lfs f0, 0x110(r1)
    fsubs f8, f8, f31
    cmpwi r0, 0x0
    fsubs f7, f7, f13
    stfs f11, 0xb4(r1)
    fsubs f2, f0, f12
    stfs f10, 0xb8(r1)
    stfs f9, 0xbc(r1)
    stfs f31, 0xc0(r1)
    stfs f13, 0xc4(r1)
    stfs f12, 0xc8(r1)
    stfs f8, 0x108(r1)
    stfs f7, 0x10c(r1)
    stfs f2, 0x110(r1)
    bne lbl_fn_803D7850_00000CD4
    addi r3, r1, 0x108
    lfs f0, lbl_80885D58
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x60(r31), 0, 0
    stfs f2, 0x68(r31)
    stfs f0, 0x78(r31)
    b lbl_fn_803D7850_00000CF0
lbl_fn_803D7850_00000CD4:
    cmpwi r30, 0x0
    beq lbl_fn_803D7850_00000CF0
    lfs f0, lbl_80885D60
    stfs f0, 0x78(r31)
    lwz r0, 0x2660(r27)
    ori r0, r0, 0x2000
    stw r0, 0x2660(r27)
lbl_fn_803D7850_00000CF0:
    lfs f10, 0x78(r31)
    lfs f0, lbl_80885D58
    lfs f31, lbl_80885DFC
    fcmpo cr0, f10, f0
    ble lbl_fn_803D7850_00000D88
    lfs f0, 0x68(r31)
    addi r4, r1, 0xa8
    lfs f9, 0x110(r1)
    addi r3, r1, 0x108
    lfs f7, 0x64(r31)
    fsubs f29, f0, f9
    lfs f8, 0x10c(r1)
    lfs f0, 0x60(r31)
    fsubs f30, f7, f8
    lfs f7, 0x108(r1)
    fmuls f12, f29, f10
    fsubs f13, f0, f7
    lfs f0, lbl_80885DEC
    fmuls f11, f30, f10
    fadds f2, f12, f9
    stfs f13, 0x78(r1)
    fmuls f9, f13, f10
    fadds f8, f11, f8
    stfs f30, 0x7c(r1)
    fsubs f0, f10, f0
    fadds f7, f9, f7
    stfs f8, 0xac(r1)
    stfs f7, 0xa8(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f29, 0x80(r1)
    stfs f9, 0x6c(r1)
    stfs f11, 0x70(r1)
    stfs f12, 0x74(r1)
    stfs f2, 0xb0(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x110(r1)
    stfs f0, 0x78(r31)
    b lbl_fn_803D7850_00000D9C
lbl_fn_803D7850_00000D88:
    addi r3, r1, 0x108
    lfs f2, 0x110(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x60(r31), 0, 0
    stfs f2, 0x68(r31)
lbl_fn_803D7850_00000D9C:
    lwz r0, 0x14a8(r29)
    srwi. r0, r0, 31
    beq lbl_fn_803D7850_00000DB0
    lfs f9, 0x1498(r29)
    b lbl_fn_803D7850_00000DB4
lbl_fn_803D7850_00000DB0:
    lfs f9, 0x5b0(r29)
lbl_fn_803D7850_00000DB4:
    lfs f0, 0x104(r1)
    addi r4, r1, 0x90
    lfs f8, 0xfc(r1)
    addi r3, r1, 0xfc
    fmuls f10, f0, f9
    lfs f0, 0x110(r1)
    fmuls f12, f8, f9
    lfs f7, 0x100(r1)
    lfs f8, 0x118(r1)
    addi r29, r1, 0xe4
    fsubs f13, f0, f10
    lfs f0, 0x11c(r1)
    fmuls f11, f7, f9
    lfs f9, 0x108(r1)
    lfs f7, 0x10c(r1)
    fsubs f30, f13, f0
    fsubs f29, f7, f11
    lfs f7, 0x114(r1)
    fsubs f9, f9, f12
    lfs f0, lbl_80885E80
    fmr f2, f30
    fsubs f8, f29, f8
    stfs f2, 0x104(r1)
    fsubs f7, f9, f7
    frsp f2, f2
    stfs f7, 0x90(r1)
    fabs f7, f2
    stfs f8, 0x94(r1)
    psq_l f1, 0x0(r4), 0, 0
    frsp f7, f7
    stfs f12, 0x9c(r1)
    stfs f11, 0xa0(r1)
    fcmpo cr0, f7, f0
    stfs f10, 0xa4(r1)
    stfs f9, 0xf0(r1)
    stfs f29, 0xf4(r1)
    stfs f13, 0xf8(r1)
    stfs f30, 0x98(r1)
    psq_st f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0xec(r1)
    bge lbl_fn_803D7850_00000E80
    lfs f7, 0xe4(r1)
    lfs f0, lbl_80885D58
    fcmpo cr0, f7, f0
    ble lbl_fn_803D7850_00000E74
    lfs f0, lbl_80885E5C
    b lbl_fn_803D7850_00000E78
lbl_fn_803D7850_00000E74:
    lfs f0, lbl_80885E84
lbl_fn_803D7850_00000E78:
    stfs f0, 0x64(r1)
    b lbl_fn_803D7850_00000E94
lbl_fn_803D7850_00000E80:
    frsp f2, f2
    lfs f1, 0xe4(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x64(r1)
lbl_fn_803D7850_00000E94:
    lfs f0, 0x64(r1)
    addi r3, r1, 0x480
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f7, lbl_80885D58
    addi r4, r1, 0x54
    lfs f25, 0x488(r1)
    mr r5, r4
    lfs f26, 0x484(r1)
    addi r3, r1, 0x4b0
    lfs f27, 0x480(r1)
    lfs f28, 0x498(r1)
    lfs f30, 0x494(r1)
    lfs f29, 0x490(r1)
    lfs f13, 0x4a8(r1)
    lfs f12, 0x4a4(r1)
    lfs f11, 0x4a0(r1)
    lfs f10, 0x4ac(r1)
    lfs f9, 0x49c(r1)
    lfs f8, 0x48c(r1)
    lfs f0, lbl_80885D60
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0xec(r1)
    stfs f7, 0x4e0(r1)
    stfs f7, 0x4e4(r1)
    stfs f7, 0x4e8(r1)
    stfs f0, 0x4ec(r1)
    stfs f27, 0x24(r1)
    stfs f26, 0x28(r1)
    stfs f25, 0x2c(r1)
    stfs f27, 0x4b0(r1)
    stfs f26, 0x4b4(r1)
    stfs f25, 0x4b8(r1)
    stfs f29, 0x30(r1)
    stfs f30, 0x34(r1)
    stfs f28, 0x38(r1)
    stfs f29, 0x4c0(r1)
    stfs f30, 0x4c4(r1)
    stfs f28, 0x4c8(r1)
    stfs f11, 0x3c(r1)
    stfs f12, 0x40(r1)
    stfs f13, 0x44(r1)
    stfs f11, 0x4d0(r1)
    stfs f12, 0x4d4(r1)
    stfs f13, 0x4d8(r1)
    stfs f8, 0x48(r1)
    stfs f9, 0x4c(r1)
    stfs f10, 0x50(r1)
    stfs f8, 0x4bc(r1)
    stfs f9, 0x4cc(r1)
    stfs f10, 0x4dc(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x5c(r1)
    bl fn_805F9750
    lfs f2, 0x5c(r1)
    lfs f0, lbl_80885E80
    fabs f7, f2
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_803D7850_00000FB0
    lfs f7, 0x58(r1)
    lfs f0, lbl_80885D58
    fcmpo cr0, f7, f0
    ble lbl_fn_803D7850_00000FA0
    lfs f0, lbl_80885E5C
    b lbl_fn_803D7850_00000FA4
lbl_fn_803D7850_00000FA0:
    lfs f0, lbl_80885E84
lbl_fn_803D7850_00000FA4:
    fneg f0, f0
    stfs f0, 0x60(r1)
    b lbl_fn_803D7850_00000FC4
lbl_fn_803D7850_00000FB0:
    lfs f1, 0x58(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x60(r1)
lbl_fn_803D7850_00000FC4:
    addi r3, r1, 0x60
    lfs f2, lbl_80885D58
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0xfc
    stfs f2, 0x68(r1)
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0xec(r1)
    bl fn_805F9940
    lfs f0, lbl_80885E70
    addi r3, r1, 0x520
    lfs f2, 0x118(r1)
    fdivs f25, f1, f0
    lfs f1, 0x114(r1)
    lfs f3, 0x11c(r1)
    bl fn_805F90D0
    addi r3, r1, 0x520
    lfs f7, lbl_80885D58
    psq_l f2, 0x8(r3), 0, 0
    addi r29, r1, 0x330
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    lfs f1, 0xec(r1)
    psq_st f2, 0x8(r31), 0, 0
    fcmpu cr0, f7, f1
    lfs f0, lbl_80885D60
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
    stfs f7, 0x35c(r1)
    stfs f7, 0x354(r1)
    stfs f7, 0x350(r1)
    stfs f7, 0x34c(r1)
    stfs f7, 0x348(r1)
    stfs f7, 0x340(r1)
    stfs f7, 0x33c(r1)
    stfs f7, 0x338(r1)
    stfs f7, 0x334(r1)
    stfs f0, 0x358(r1)
    stfs f0, 0x344(r1)
    stfs f0, 0x330(r1)
    beq lbl_fn_803D7850_000010CC
    addi r3, r1, 0x420
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0x420
    addi r5, r1, 0x450
    bl fn_805F89F0
    addi r3, r1, 0x450
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f6, 0x28(r29), 0, 0
lbl_fn_803D7850_000010CC:
    lfs f0, lbl_80885D58
    lfs f1, 0xe8(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_803D7850_0000112C
    addi r3, r1, 0x3c0
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0x3c0
    addi r5, r1, 0x3f0
    bl fn_805F89F0
    addi r3, r1, 0x3f0
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f6, 0x28(r29), 0, 0
lbl_fn_803D7850_0000112C:
    lfs f0, lbl_80885D58
    lfs f1, 0xe4(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_803D7850_0000118C
    addi r3, r1, 0x360
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0x360
    addi r5, r1, 0x390
    bl fn_805F89F0
    addi r3, r1, 0x390
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f6, 0x28(r29), 0, 0
lbl_fn_803D7850_0000118C:
    mr r3, r31
    mr r4, r29
    addi r5, r1, 0x300
    bl fn_805F89F0
    addi r4, r1, 0x300
    stfs f31, 0x18(r1)
    psq_l f2, 0x8(r4), 0, 0
    addi r3, r1, 0x2a0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    fmr f1, f31
    psq_st f2, 0x8(r31), 0, 0
    fmr f2, f1
    psq_st f3, 0x10(r31), 0, 0
    fmr f3, f25
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
    stfs f31, 0x1c(r1)
    stfs f25, 0x20(r1)
    bl fn_805F9160
    mr r3, r31
    addi r4, r1, 0x2a0
    addi r5, r1, 0x2d0
    bl fn_805F89F0
    addi r4, r1, 0x2d0
    lfs f10, 0x11c(r1)
    psq_l f2, 0x8(r4), 0, 0
    addi r3, r1, 0x4f0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    lfs f9, 0x118(r1)
    psq_st f2, 0x8(r31), 0, 0
    lfs f7, 0x114(r1)
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
    lfs f0, 0x104(r1)
    lfs f8, 0x100(r1)
    fadds f3, f10, f0
    lfs f0, 0xfc(r1)
    fadds f2, f9, f8
    fadds f1, f7, f0
    stfs f3, 0x8c(r1)
    stfs f1, 0x84(r1)
    stfs f2, 0x88(r1)
    bl fn_805F90D0
    addi r3, r1, 0x4f0
    addi r29, r31, 0x30
    psq_l f2, 0x8(r3), 0, 0
    addi r30, r1, 0x150
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    lfs f7, lbl_80885D58
    psq_st f2, 0x8(r29), 0, 0
    lfs f1, 0xec(r1)
    psq_st f3, 0x10(r29), 0, 0
    fcmpu cr0, f7, f1
    lfs f0, lbl_80885D60
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f6, 0x28(r29), 0, 0
    stfs f7, 0x17c(r1)
    stfs f7, 0x174(r1)
    stfs f7, 0x170(r1)
    stfs f7, 0x16c(r1)
    stfs f7, 0x168(r1)
    stfs f7, 0x160(r1)
    stfs f7, 0x15c(r1)
    stfs f7, 0x158(r1)
    stfs f7, 0x154(r1)
    stfs f0, 0x178(r1)
    stfs f0, 0x164(r1)
    stfs f0, 0x150(r1)
    beq lbl_fn_803D7850_0000133C
    addi r3, r1, 0x240
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x240
    addi r5, r1, 0x270
    bl fn_805F89F0
    addi r3, r1, 0x270
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
lbl_fn_803D7850_0000133C:
    lfs f0, lbl_80885D58
    lfs f1, 0xe8(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_803D7850_0000139C
    addi r3, r1, 0x1e0
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x1e0
    addi r5, r1, 0x210
    bl fn_805F89F0
    addi r3, r1, 0x210
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
lbl_fn_803D7850_0000139C:
    lfs f0, lbl_80885D58
    lfs f1, 0xe4(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_803D7850_000013FC
    addi r3, r1, 0x180
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x180
    addi r5, r1, 0x1b0
    bl fn_805F89F0
    addi r3, r1, 0x1b0
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
lbl_fn_803D7850_000013FC:
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x120
    bl fn_805F89F0
    addi r3, r1, 0x120
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f6, 0x28(r29), 0, 0
    lwz r0, 0x15b8(r27)
    cmpwi r0, 0x0
    bne lbl_fn_803D7850_00001510
    lwz r0, 0x48(r28)
    li r26, 0x3
    cmpwi r0, 0x2
    beq lbl_fn_803D7850_00001464
    li r26, 0x0
    b lbl_fn_803D7850_00001490
lbl_fn_803D7850_00001464:
    addi r3, r28, 0x7d4
    bl fn_80134250
    cmpwi r3, 0x0
    beq lbl_fn_803D7850_0000147C
    li r26, 0x2
    b lbl_fn_803D7850_00001490
lbl_fn_803D7850_0000147C:
    addi r3, r28, 0x7d4
    bl fn_80134270
    cmpwi r3, 0x0
    beq lbl_fn_803D7850_00001490
    li r26, 0x1
lbl_fn_803D7850_00001490:
    li r30, 0x0
    stw r30, 0x8(r1)
    li r29, -0x1
    li r28, 0x1
    stw r29, 0xc(r1)
    mulli r26, r26, 0xc
    lfs f1, lbl_80885D60
    mr r7, r31
    stw r28, 0x10(r1)
    li r5, -0x1
    add r4, r27, r26
    lwz r3, lbl_8087F3C0
    addi r4, r4, 0x1554
    li r6, 0x5
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_8023A680
    stw r30, 0x8(r1)
    add r3, r27, r26
    lfs f1, lbl_80885D60
    addi r4, r3, 0x1584
    stw r29, 0xc(r1)
    addi r7, r31, 0x30
    li r5, -0x1
    li r6, 0x5
    stw r28, 0x10(r1)
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    lwz r3, lbl_8087F3C0
    bl fn_8023A680
lbl_fn_803D7850_00001510:
    addi r11, r1, 0x570
    psq_l f31, 0x5d8(r1), 0, 0
    lfd f31, 0x5d0(r1)
    psq_l f30, 0x5c8(r1), 0, 0
    lfd f30, 0x5c0(r1)
    psq_l f29, 0x5b8(r1), 0, 0
    lfd f29, 0x5b0(r1)
    psq_l f28, 0x5a8(r1), 0, 0
    lfd f28, 0x5a0(r1)
    psq_l f27, 0x598(r1), 0, 0
    lfd f27, 0x590(r1)
    psq_l f26, 0x588(r1), 0, 0
    lfd f26, 0x580(r1)
    psq_l f25, 0x578(r1), 0, 0
    lfd f25, 0x570(r1)
    bl _restgpr_26
    lwz r0, 0x5e4(r1)
    mtlr r0
    addi r1, r1, 0x5e0
    blr
}

asm void fn_803D8344(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x15b8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803D8344_000015B0
    lwz r3, lbl_8087F3C0
    li r0, 0x5
    addi r4, r31, 0x1554
    li r5, 0x0
    stw r0, 0xb8(r3)
    li r6, 0x0
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    li r0, 0x0
    stw r0, 0xb8(r3)
    stw r0, 0x15b8(r31)
lbl_fn_803D8344_000015B0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
