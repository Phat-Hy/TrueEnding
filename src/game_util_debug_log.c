#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_21(void);
extern void _restgpr_22(void);
extern void _restgpr_26(void);
extern void _savegpr_21(void);
extern void _savegpr_22(void);
extern void _savegpr_26(void);
extern void dtor_80084684(void);
extern void fn_8004ED34(void);
extern void fn_80084320(void);
extern void fn_800D1D3C(void);
extern void fn_800D1E9C(void);
extern void fn_800D3FA4(void);
extern void fn_800EFC64(void);
extern void fn_800F8548(void);
extern void fn_800FB1BC(void);
extern void fn_800FB4B0(void);
extern void fn_800FBA30(void);
extern void fn_801070C8(void);
extern void fn_80107208(void);
extern void fn_80151210(void);
extern void fn_8016F3D0(void);
extern void fn_80178864(void);
extern void fn_80219E6C(void);
extern void fn_8021A8D0(void);
extern void fn_8021A918(void);
extern void fn_8021A960(void);
extern void fn_8021A984(void);
extern void fn_8021A9CC(void);
extern void fn_80232B7C(void);
extern void fn_80237518(void);
extern void fn_802375C4(void);
extern void fn_80237654(void);
extern void fn_802376D0(void);
extern void fn_8023772C(void);
extern void fn_802377B8(void);
extern void fn_8023780C(void);
extern void fn_8023781C(void);
extern void fn_80237874(void);
extern void fn_80239D58(void);
extern void fn_80239DAC(void);
extern void fn_8023A680(void);
extern void fn_8023A8B4(void);
extern void fn_80370320(void);
extern void fn_80373148(void);
extern void fn_803E6890(void);
extern void fn_80473E8C(void);
extern void fn_80491DF8(void);
extern void fn_80598878(void);
extern void fn_80598904(void);
extern void fn_805989A8(void);
extern void fn_805991E4(void);
extern void fn_80599458(void);
extern void fn_80599C70(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F9920(void);
extern void fn_805F9990(void);
extern void fn_8068A850(void);
extern void fn_8068AEA4(void);
extern void fn_806958E0(void);
extern void fn_806959D8(void);

/* External data declarations */
extern u8 lbl_80762118[];
extern u8 lbl_80762120[];
extern u8 lbl_80762258[];
extern u8 lbl_80762274[];
extern u8 lbl_80796B28[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F408;
extern u32 lbl_8087F430;
extern u32 lbl_8087F490;
extern u32 lbl_8087F558;
extern u32 lbl_8087F610;
extern u32 lbl_8087F8A0;
extern u32 lbl_8087F9E8;
extern u32 lbl_80888178;
extern u32 lbl_8088817C;
extern u32 lbl_80888180;
extern u32 lbl_80888184;
extern u32 lbl_80888190;
extern u32 lbl_80888194;
extern u32 lbl_80888198;
extern u32 lbl_8088819C;
extern u32 lbl_808881A0;
extern u32 lbl_808881A4;
extern u32 lbl_808881A8;
extern u32 lbl_808881AC;
extern u32 lbl_808881B0;
extern u32 lbl_808881B4;
extern u32 lbl_808881B8;
extern u32 lbl_808881C0;
extern u32 lbl_808881C4;
extern u32 lbl_808881C8;
extern u32 lbl_808881CC;
extern u32 lbl_808881D0;
extern u32 lbl_808881D4;
extern u32 lbl_808881D8;
extern u32 lbl_808881DC;
extern u32 lbl_808881E0;
extern u32 lbl_808881E4;
extern u32 lbl_808881E8;
extern u32 lbl_808881EC;
extern u32 lbl_808881F0;
extern u32 lbl_808881F4;
extern u32 lbl_808881F8;

/* Function declarations */
void fn_80599FB8(void);
void fn_8059A000(void);
void fn_8059A0B8(void);
void fn_8059A200(void);
void fn_8059A268(void);
void fn_8059A29C(void);
void fn_8059AB98(void);
void fn_8059AB9C(void);
void fn_8059AC0C(void);
void fn_8059AD10(void);
void fn_8059AF70(void);
void fn_8059AFDC(void);
void fn_8059B0F4(void);
void fn_8059B1B8(void);
void fn_8059B32C(void);
void fn_8059B5FC(void);
void fn_8059B670(void);
void fn_8059B8AC(void);

asm void fn_80599FB8(void)
{
    nofralloc
    cmpwi r4, 0x0
    lfs f1, lbl_8088817C
    beq lbl_fn_80599FB8_00000030
    lfs f0, lbl_80888180
    lfs f2, 0x5c(r3)
    fcmpo cr0, f0, f2
    cror eq, lt, eq
    bne lbl_fn_80599FB8_0000003C
    lfs f0, lbl_80888184
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_80599FB8_0000003C
lbl_fn_80599FB8_00000030:
    lfs f1, 0x5c(r3)
    lfs f0, lbl_80888180
    fdivs f1, f1, f0
lbl_fn_80599FB8_0000003C:
    lfs f0, 0x28(r3)
    fmuls f1, f1, f0
    blr
}

asm void fn_8059A000(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    mr r30, r4
    stw r29, 0x24(r1)
    mr r29, r3
    lwz r5, 0x4(r3)
    cmpwi r5, 0x0
    beq lbl_fn_8059A000_000000E4
    lwz r3, 0xb0(r5)
    bl fn_800EFC64
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_8059A000_000000E4
    lwz r4, 0x4(r29)
    mr r3, r29
    lwz r4, 0x4(r4)
    bl fn_80232B7C
    lfs f1, lbl_8088817C
    lis r8, lbl_807C7030@ha
    stfs f1, 0x10(r1)
    li r3, -0x1
    li r0, 0x1
    mr r4, r31
    stfs f1, 0x14(r1)
    mr r7, r30
    addi r8, r8, lbl_807C7030@l
    addi r9, r1, 0x10
    stfs f1, 0x18(r1)
    li r5, 0x0
    li r6, 0x0
    li r10, -0x1
    stfs f1, 0x1c(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
lbl_fn_8059A000_000000E4:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8059A0B8(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stw r31, 0x6c(r1)
    stw r30, 0x68(r1)
    mr r30, r4
    stw r29, 0x64(r1)
    mr r29, r3
    lwz r0, 0x7c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8059A0B8_0000022C
    lwz r3, lbl_8087F3C0
    li r31, 0x1
    li r0, 0x5
    addi r4, r29, 0x2c
    stw r31, 0xd0(r3)
    li r5, 0x1
    lwz r3, lbl_8087F3C0
    stw r0, 0xb8(r3)
    lwz r3, lbl_8087F3C0
    bl fn_80239D58
    cmpwi r3, 0x0
    bne lbl_fn_8059A0B8_00000210
    lfs f4, lbl_80888178
    addi r6, r1, 0x18
    lfs f3, lbl_80888190
    addi r5, r1, 0x38
    stfs f4, 0x48(r1)
    addi r3, r1, 0x28
    lfs f0, lbl_80888194
    stfs f3, 0x4c(r1)
    lwz r4, lbl_8087F558
    stfs f4, 0x50(r1)
    lfs f3, 0x48(r29)
    lfs f4, 0x38(r29)
    lfs f2, 0x58(r29)
    stfs f4, 0x18(r1)
    stfs f3, 0x1c(r1)
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x20(r1)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x40(r1)
    stfs f0, 0x44(r1)
    bl fn_80491DF8
    addi r3, r29, 0x2c
    li r4, 0x1
    bl fn_80232B7C
    li r0, 0x0
    stw r0, 0x8(r1)
    li r0, -0x1
    lfs f5, lbl_8088817C
    stw r0, 0xc(r1)
    mr r4, r30
    lfs f3, lbl_80888180
    addi r7, r29, 0x2c
    stw r31, 0x10(r1)
    addi r8, r1, 0x48
    addi r10, r1, 0x28
    li r5, -0x1
    lfs f4, 0x5c(r29)
    li r6, 0x5
    lfs f0, 0x28(r29)
    li r9, 0x0
    fadds f4, f5, f4
    lwz r3, lbl_8087F3C0
    fdivs f3, f4, f3
    fmuls f1, f3, f0
    bl fn_8023A680
lbl_fn_8059A0B8_00000210:
    lwz r3, lbl_8087F3C0
    li r4, 0x0
    li r0, 0x1
    stw r4, 0xb8(r3)
    lwz r3, lbl_8087F3C0
    stw r4, 0xd0(r3)
    stw r0, 0x7c(r29)
lbl_fn_8059A0B8_0000022C:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    lwz r29, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_8059A200(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x7c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8059A200_0000029C
    lwz r3, lbl_8087F3C0
    cntlzw r0, r4
    li r5, 0x1
    addi r4, r31, 0x2c
    stw r5, 0xd0(r3)
    srwi r6, r0, 5
    li r5, 0x1
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    li r0, 0x0
    stw r0, 0xd0(r3)
    stw r0, 0x7c(r31)
lbl_fn_8059A200_0000029C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8059A268(void)
{
    nofralloc
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8059A268_000002DC
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8059A268_000002DC
    lwz r0, 0x13c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8059A268_000002DC
    li r3, 0x1
    blr
lbl_fn_8059A268_000002DC:
    li r3, 0x0
    blr
}

asm void fn_8059A29C(void)
{
    nofralloc
    stwu r1, -0x440(r1)
    mflr r0
    stw r0, 0x444(r1)
    addi r11, r1, 0x3e0
    stfd f31, 0x430(r1)
    psq_st f31, 0x438(r1), 0, 0
    stfd f30, 0x420(r1)
    psq_st f30, 0x428(r1), 0, 0
    stfd f29, 0x410(r1)
    psq_st f29, 0x418(r1), 0, 0
    stfd f28, 0x400(r1)
    psq_st f28, 0x408(r1), 0, 0
    stfd f27, 0x3f0(r1)
    psq_st f27, 0x3f8(r1), 0, 0
    stfd f26, 0x3e0(r1)
    psq_st f26, 0x3e8(r1), 0, 0
    bl _savegpr_21
    lfs f7, lbl_80888178
    mr r27, r3
    lfs f0, lbl_8088817C
    mr r28, r4
    stfs f7, 0x35c(r1)
    mr r21, r5
    addi r26, r1, 0x330
    li r31, 0x0
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
    lfs f1, 0x8(r4)
    fcmpu cr0, f7, f1
    beq lbl_fn_8059A29C_000003D0
    addi r3, r1, 0x210
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r26
    addi r4, r1, 0x210
    addi r5, r1, 0x1e0
    bl fn_805F89F0
    addi r3, r1, 0x1e0
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r26), 0, 0
    psq_st f2, 0x8(r26), 0, 0
    psq_st f3, 0x10(r26), 0, 0
    psq_st f4, 0x18(r26), 0, 0
    psq_st f5, 0x20(r26), 0, 0
    psq_st f6, 0x28(r26), 0, 0
lbl_fn_8059A29C_000003D0:
    lfs f0, lbl_80888178
    lfs f1, 0x4(r28)
    fcmpu cr0, f0, f1
    beq lbl_fn_8059A29C_00000430
    addi r3, r1, 0x270
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r26
    addi r4, r1, 0x270
    addi r5, r1, 0x240
    bl fn_805F89F0
    addi r3, r1, 0x240
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r26), 0, 0
    psq_st f2, 0x8(r26), 0, 0
    psq_st f3, 0x10(r26), 0, 0
    psq_st f4, 0x18(r26), 0, 0
    psq_st f5, 0x20(r26), 0, 0
    psq_st f6, 0x28(r26), 0, 0
lbl_fn_8059A29C_00000430:
    lfs f0, lbl_80888178
    lfs f1, 0x0(r28)
    fcmpu cr0, f0, f1
    beq lbl_fn_8059A29C_00000490
    addi r3, r1, 0x2d0
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r26
    addi r4, r1, 0x2d0
    addi r5, r1, 0x2a0
    bl fn_805F89F0
    addi r3, r1, 0x2a0
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r26), 0, 0
    psq_st f2, 0x8(r26), 0, 0
    psq_st f3, 0x10(r26), 0, 0
    psq_st f4, 0x18(r26), 0, 0
    psq_st f5, 0x20(r26), 0, 0
    psq_st f6, 0x28(r26), 0, 0
lbl_fn_8059A29C_00000490:
    lfs f0, lbl_80888178
    addi r4, r1, 0x164
    stfs f0, 0xf8(r1)
    addi r6, r1, 0xf8
    lfs f2, lbl_8088817C
    mr r3, r26
    stfs f0, 0xfc(r1)
    mr r5, r4
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x100(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x16c(r1)
    bl fn_805F93C0
    lfs f2, 0x8(r27)
    addi r5, r1, 0x14c
    psq_l f1, 0x0(r27), 0, 0
    li r0, 0x0
    psq_st f1, 0x0(r5), 0, 0
    addi r6, r1, 0x140
    lfs f8, lbl_80888198
    addi r3, r1, 0x158
    lfs f0, 0x168(r1)
    addi r4, r1, 0x360
    lfs f9, 0x16c(r1)
    lis r30, 0x8008
    fmuls f13, f0, f8
    lfs f7, 0x164(r1)
    fmuls f12, f9, f8
    lfs f0, 0x150(r1)
    fmuls f27, f7, f8
    psq_st f1, 0x0(r6), 0, 0
    lfs f7, 0x144(r1)
    fadds f9, f0, f13
    fadds f10, f2, f12
    lfs f0, lbl_8088819C
    lfs f11, 0x14c(r1)
    fadds f7, f7, f13
    fadds f9, f9, f0
    lfs f8, 0x140(r1)
    lfs f0, lbl_808881A0
    fadds f11, f11, f27
    fadds f8, f8, f27
    psq_st f1, 0x0(r3), 0, 0
    fsubs f0, f7, f0
    lwz r3, lbl_8087EE98
    stfs f2, 0x160(r1)
    lis r7, 0x8008
    stfs f27, 0xec(r1)
    li r8, 0x0
    li r9, 0x0
    stfs f13, 0xf0(r1)
    stfs f12, 0xf4(r1)
    stfs f11, 0x14c(r1)
    stfs f10, 0x154(r1)
    stfs f9, 0x150(r1)
    stfs f27, 0xe0(r1)
    stfs f13, 0xe4(r1)
    stfs f12, 0xe8(r1)
    stfs f8, 0x140(r1)
    stfs f10, 0x148(r1)
    stfs f0, 0x144(r1)
    stw r0, 0x394(r1)
    stw r0, 0x398(r1)
    stw r0, 0x39c(r1)
    stw r0, 0x3a0(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_8059A29C_00000B8C
    cmpwi r21, 0x0
    beq lbl_fn_8059A29C_000005DC
    lfs f7, lbl_80888178
    addi r3, r1, 0x388
    lfs f0, lbl_8088817C
    addi r4, r1, 0xd4
    stfs f7, 0xd4(r1)
    stfs f0, 0xd8(r1)
    stfs f7, 0xdc(r1)
    bl fn_805F9990
    lfs f0, lbl_808881A4
    fcmpo cr0, f1, f0
    bge lbl_fn_8059A29C_000005DC
    li r31, 0x1
    b lbl_fn_8059A29C_00000B90
lbl_fn_8059A29C_000005DC:
    cmpwi r21, 0x0
    bne lbl_fn_8059A29C_00000654
    lis r3, lbl_80762118@ha
    lfd f1, lbl_80762118@l(r3)
    bl fn_8068A850
    lfs f7, lbl_80888178
    frsp f26, f1
    lfs f0, lbl_8088817C
    addi r3, r1, 0x388
    stfs f7, 0xc8(r1)
    addi r4, r1, 0xc8
    stfs f0, 0xcc(r1)
    stfs f7, 0xd0(r1)
    bl fn_805F9990
    fcmpo cr0, f1, f26
    bge lbl_fn_8059A29C_00000654
    lfs f2, lbl_80888178
    addi r4, r1, 0xbc
    lfs f8, lbl_8088817C
    addi r3, r1, 0x388
    lfs f7, 0x374(r1)
    lfs f0, lbl_80888194
    stfs f2, 0xbc(r1)
    fadds f0, f7, f0
    stfs f8, 0xc0(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0xc4(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x390(r1)
    stfs f0, 0x374(r1)
lbl_fn_8059A29C_00000654:
    lwz r3, 0x394(r1)
    li r29, 0x0
    cmpwi r3, 0x0
    beq lbl_fn_8059A29C_00000674
    lwz r0, 0x0(r3)
    cmplwi r0, 0x14
    bne lbl_fn_8059A29C_00000674
    li r29, 0x1
lbl_fn_8059A29C_00000674:
    addi r3, r1, 0x370
    lfs f2, 0x378(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x388
    psq_st f1, 0x0(r27), 0, 0
    addi r25, r1, 0xb0
    lfs f0, lbl_808881A8
    stfs f2, 0x8(r27)
    lfs f2, 0x390(r1)
    psq_l f1, 0x0(r3), 0, 0
    fabs f7, f2
    psq_st f1, 0x0(r25), 0, 0
    stfs f2, 0xb8(r1)
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_8059A29C_000006D8
    lfs f7, 0xb0(r1)
    lfs f0, lbl_80888178
    fcmpo cr0, f7, f0
    ble lbl_fn_8059A29C_000006CC
    lfs f0, lbl_808881AC
    b lbl_fn_8059A29C_000006D0
lbl_fn_8059A29C_000006CC:
    lfs f0, lbl_808881B0
lbl_fn_8059A29C_000006D0:
    stfs f0, 0x48(r1)
    b lbl_fn_8059A29C_000006EC
lbl_fn_8059A29C_000006D8:
    frsp f2, f2
    lfs f1, 0xb0(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_8059A29C_000006EC:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x170
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f7, lbl_80888178
    addi r4, r1, 0x38
    lfs f26, 0x178(r1)
    mr r5, r4
    lfs f31, 0x174(r1)
    addi r3, r1, 0x1a0
    lfs f30, 0x170(r1)
    lfs f29, 0x188(r1)
    lfs f28, 0x184(r1)
    lfs f27, 0x180(r1)
    lfs f13, 0x198(r1)
    lfs f12, 0x194(r1)
    lfs f11, 0x190(r1)
    lfs f10, 0x19c(r1)
    lfs f9, 0x18c(r1)
    lfs f8, 0x17c(r1)
    lfs f0, lbl_8088817C
    psq_l f1, 0x0(r25), 0, 0
    lfs f2, 0xb8(r1)
    stfs f7, 0x1d0(r1)
    stfs f7, 0x1d4(r1)
    stfs f7, 0x1d8(r1)
    stfs f0, 0x1dc(r1)
    stfs f30, 0x8(r1)
    stfs f31, 0xc(r1)
    stfs f26, 0x10(r1)
    stfs f30, 0x1a0(r1)
    stfs f31, 0x1a4(r1)
    stfs f26, 0x1a8(r1)
    stfs f27, 0x14(r1)
    stfs f28, 0x18(r1)
    stfs f29, 0x1c(r1)
    stfs f27, 0x1b0(r1)
    stfs f28, 0x1b4(r1)
    stfs f29, 0x1b8(r1)
    stfs f11, 0x20(r1)
    stfs f12, 0x24(r1)
    stfs f13, 0x28(r1)
    stfs f11, 0x1c0(r1)
    stfs f12, 0x1c4(r1)
    stfs f13, 0x1c8(r1)
    stfs f8, 0x2c(r1)
    stfs f9, 0x30(r1)
    stfs f10, 0x34(r1)
    stfs f8, 0x1ac(r1)
    stfs f9, 0x1bc(r1)
    stfs f10, 0x1cc(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_808881A8
    fabs f7, f2
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_8059A29C_00000808
    lfs f7, 0x3c(r1)
    lfs f0, lbl_80888178
    fcmpo cr0, f7, f0
    ble lbl_fn_8059A29C_000007F8
    lfs f0, lbl_808881AC
    b lbl_fn_8059A29C_000007FC
lbl_fn_8059A29C_000007F8:
    lfs f0, lbl_808881B0
lbl_fn_8059A29C_000007FC:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_8059A29C_0000081C
lbl_fn_8059A29C_00000808:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_8059A29C_0000081C:
    addi r3, r1, 0x44
    lfs f8, lbl_80888178
    psq_l f1, 0x0(r3), 0, 0
    lis r26, lbl_80762120@ha
    psq_st f1, 0x0(r28), 0, 0
    fmr f2, f8
    lfs f0, lbl_808881AC
    lfs f7, 0x0(r28)
    stfs f2, 0xb8(r1)
    frsp f2, f2
    fadds f0, f7, f0
    psq_st f1, 0x0(r25), 0, 0
    lfd f1, lbl_80762120@l(r26)
    stfs f8, 0x4c(r1)
    stfs f2, 0x8(r28)
    stfs f0, 0x0(r28)
    bl fn_8068A850
    lfs f7, lbl_80888178
    frsp f26, f1
    lfs f0, lbl_8088817C
    addi r3, r1, 0x388
    stfs f7, 0xa4(r1)
    addi r4, r1, 0xa4
    stfs f0, 0xa8(r1)
    stfs f7, 0xac(r1)
    bl fn_805F9990
    fcmpo cr0, f1, f26
    cror eq, gt, eq
    bne lbl_fn_8059A29C_00000AE0
    lfs f29, lbl_80888178
    addi r28, r1, 0x370
    lfs f0, lbl_80888180
    addi r25, r1, 0x104
    stfs f29, 0x11c(r1)
    addi r24, r1, 0x134
    lfs f28, lbl_808881B4
    addi r22, r1, 0x68
    stfs f29, 0x120(r1)
    addi r23, r1, 0x128
    lfs f30, lbl_8088817C
    li r21, 0x0
    stfs f0, 0x124(r1)
    lfs f31, lbl_80888194
    lfs f27, lbl_808881B8
lbl_fn_8059A29C_000008CC:
    lfs f9, 0x4(r27)
    mr r7, r30
    lfs f0, 0x120(r1)
    addi r4, r1, 0x360
    lfs f10, 0x8(r27)
    fadds f12, f9, f30
    lfs f8, 0x0(r27)
    fadds f9, f9, f0
    lfs f7, 0x124(r1)
    fadds f11, f10, f29
    lfs f0, 0x11c(r1)
    fadds f7, f10, f7
    stfs f29, 0x98(r1)
    fadds f0, f8, f0
    lwz r3, lbl_8087EE98
    fadds f13, f8, f29
    stfs f30, 0x9c(r1)
    fadds f8, f7, f29
    stfs f29, 0xa0(r1)
    fadds f10, f9, f30
    addi r5, r1, 0x110
    fadds f26, f0, f29
    stfs f13, 0x110(r1)
    stfs f12, 0x114(r1)
    addi r6, r1, 0x104
    li r8, 0x0
    li r9, 0x0
    stfs f11, 0x118(r1)
    stfs f29, 0x80(r1)
    stfs f30, 0x84(r1)
    stfs f29, 0x88(r1)
    stfs f0, 0x8c(r1)
    stfs f9, 0x90(r1)
    stfs f7, 0x94(r1)
    stfs f26, 0x104(r1)
    stfs f10, 0x108(r1)
    stfs f8, 0x10c(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_8059A29C_000009BC
    psq_l f1, 0x0(r28), 0, 0
    lfs f8, 0x390(r1)
    lfs f7, 0x38c(r1)
    lfs f0, 0x388(r1)
    fmuls f9, f8, f31
    psq_st f1, 0x0(r25), 0, 0
    fmuls f10, f7, f31
    fmuls f11, f0, f31
    lfs f2, 0x378(r1)
    lfs f8, 0x104(r1)
    lfs f7, 0x108(r1)
    fadds f0, f2, f9
    fadds f8, f8, f11
    fadds f7, f7, f10
    stfs f11, 0x74(r1)
    stfs f10, 0x78(r1)
    stfs f9, 0x7c(r1)
    stfs f8, 0x104(r1)
    stfs f7, 0x108(r1)
    stfs f0, 0x10c(r1)
lbl_fn_8059A29C_000009BC:
    lfs f8, 0x10c(r1)
    mr r5, r24
    lfs f7, 0x108(r1)
    mr r6, r23
    lfs f0, 0x104(r1)
    fadds f8, f8, f29
    fadds f7, f7, f27
    lfs f2, 0x10c(r1)
    fadds f0, f0, f29
    stfs f2, 0x13c(r1)
    fmr f2, f8
    psq_l f1, 0x0(r25), 0, 0
    stfs f0, 0x68(r1)
    mr r7, r30
    lwz r3, lbl_8087EE98
    addi r4, r1, 0x360
    stfs f7, 0x6c(r1)
    li r8, 0x0
    li r9, 0x0
    psq_st f1, 0x0(r24), 0, 0
    psq_l f1, 0x0(r22), 0, 0
    stfs f29, 0x5c(r1)
    stfs f27, 0x60(r1)
    stfs f29, 0x64(r1)
    stfs f8, 0x70(r1)
    psq_st f1, 0x0(r23), 0, 0
    stfs f2, 0x130(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_8059A29C_00000AA0
    lfd f1, lbl_80762120@l(r26)
    bl fn_8068A850
    frsp f26, f1
    stfs f29, 0x50(r1)
    addi r3, r1, 0x388
    addi r4, r1, 0x50
    stfs f30, 0x54(r1)
    stfs f29, 0x58(r1)
    bl fn_805F9990
    fcmpo cr0, f1, f26
    cror eq, gt, eq
    bne lbl_fn_8059A29C_00000AA0
    lfs f7, 0x374(r1)
    fcmpo cr0, f7, f28
    bge lbl_fn_8059A29C_00000AA0
    lfs f0, 0x4(r27)
    fmr f28, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_8059A29C_00000AA0
    lwz r3, 0x394(r1)
    li r29, 0x0
    cmpwi r3, 0x0
    beq lbl_fn_8059A29C_00000AA0
    lwz r0, 0x0(r3)
    cmplwi r0, 0x14
    bne lbl_fn_8059A29C_00000AA0
    li r29, 0x1
lbl_fn_8059A29C_00000AA0:
    lfs f1, lbl_808881AC
    addi r3, r1, 0x300
    li r4, 0x79
    bl fn_805F8E70
    addi r4, r1, 0x11c
    addi r3, r1, 0x300
    mr r5, r4
    bl fn_805F93C0
    addi r21, r21, 0x1
    cmpwi r21, 0x4
    blt lbl_fn_8059A29C_000008CC
    lfs f0, 0x4(r27)
    fcmpo cr0, f28, f0
    bge lbl_fn_8059A29C_00000AF0
    stfs f28, 0x4(r27)
    b lbl_fn_8059A29C_00000AF0
lbl_fn_8059A29C_00000AE0:
    lfs f7, 0x4(r27)
    lfs f0, lbl_80888194
    fadds f0, f7, f0
    stfs f0, 0x4(r27)
lbl_fn_8059A29C_00000AF0:
    cmpwi r29, 0x0
    beq lbl_fn_8059A29C_00000B90
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_8059A29C_00000B0C
    bl fn_80373148
    b lbl_fn_8059A29C_00000B10
lbl_fn_8059A29C_00000B0C:
    li r3, 0x0
lbl_fn_8059A29C_00000B10:
    cmpwi r3, 0x0
    beq lbl_fn_8059A29C_00000B90
    lwz r0, 0x48(r3)
    cmpwi r0, 0x2
    bne lbl_fn_8059A29C_00000B90
    lwz r4, 0x4c(r3)
    cmpwi r4, 0x5
    bne lbl_fn_8059A29C_00000B3C
    lwz r0, 0x50(r3)
    cmpwi r0, 0x3
    beq lbl_fn_8059A29C_00000B78
lbl_fn_8059A29C_00000B3C:
    cmpwi r4, 0xe
    bne lbl_fn_8059A29C_00000B50
    lwz r0, 0x50(r3)
    cmpwi r0, 0x3
    beq lbl_fn_8059A29C_00000B78
lbl_fn_8059A29C_00000B50:
    cmpwi r4, 0x18
    bne lbl_fn_8059A29C_00000B64
    lwz r0, 0x50(r3)
    cmpwi r0, 0x3
    beq lbl_fn_8059A29C_00000B78
lbl_fn_8059A29C_00000B64:
    cmpwi r4, 0x23
    bne lbl_fn_8059A29C_00000B90
    lwz r0, 0x50(r3)
    cmpwi r0, 0x3
    bne lbl_fn_8059A29C_00000B90
lbl_fn_8059A29C_00000B78:
    lfs f7, 0x4(r27)
    lfs f0, lbl_80888194
    fadds f0, f7, f0
    stfs f0, 0x4(r27)
    b lbl_fn_8059A29C_00000B90
lbl_fn_8059A29C_00000B8C:
    li r31, 0x1
lbl_fn_8059A29C_00000B90:
    cntlzw r0, r31
    psq_l f31, 0x438(r1), 0, 0
    lfd f31, 0x430(r1)
    srwi r3, r0, 5
    psq_l f30, 0x428(r1), 0, 0
    lfd f30, 0x420(r1)
    psq_l f29, 0x418(r1), 0, 0
    lfd f29, 0x410(r1)
    psq_l f28, 0x408(r1), 0, 0
    lfd f28, 0x400(r1)
    psq_l f27, 0x3f8(r1), 0, 0
    lfd f27, 0x3f0(r1)
    psq_l f26, 0x3e8(r1), 0, 0
    lfd f26, 0x3e0(r1)
    addi r11, r1, 0x3e0
    bl _restgpr_21
    lwz r0, 0x444(r1)
    mtlr r0
    addi r1, r1, 0x440
    blr
}

asm void fn_8059AB98(void)
{
    nofralloc
    blr
}

asm void fn_8059AB9C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_8059AB9C_00000C3C
    lwz r0, lbl_8087F9E8
    cmpwi r0, 0x0
    bne lbl_fn_8059AB9C_00000C3C
    lis r5, lbl_80762274@ha
    li r3, 0x2930
    addi r5, r5, lbl_80762274@l
    li r4, 0x1
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8059AB9C_00000C38
    mr r4, r31
    bl fn_8059AC0C
lbl_fn_8059AB9C_00000C38:
    stw r3, lbl_8087F9E8
lbl_fn_8059AB9C_00000C3C:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    lwz r3, lbl_8087F9E8
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8059AC0C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_800D1D3C
    lis r3, lbl_80796B28@ha
    lis r4, fn_80598878@ha
    addi r3, r3, lbl_80796B28@l
    lis r5, fn_80598904@ha
    stw r3, 0x0(r30)
    addi r3, r30, 0x48
    addi r4, r4, fn_80598878@l
    addi r5, r5, fn_80598904@l
    li r6, 0x140
    li r7, 0x20
    bl fn_806958E0
    li r31, 0x0
    stw r31, 0x2848(r30)
    addi r3, r30, 0x284c
    bl fn_802377B8
    addi r3, r30, 0x2858
    bl fn_802377B8
    addi r3, r30, 0x2864
    bl fn_802377B8
    addi r3, r30, 0x2870
    bl fn_802377B8
    addi r3, r30, 0x287c
    bl fn_802377B8
    addi r3, r30, 0x2888
    bl fn_802377B8
    addi r3, r30, 0x2894
    bl fn_802377B8
    addi r3, r30, 0x28a0
    bl fn_80237518
    addi r3, r30, 0x28ac
    bl fn_802377B8
    addi r3, r30, 0x28b8
    bl fn_802377B8
    addi r3, r30, 0x28c4
    bl fn_80237518
    addi r3, r30, 0x28d0
    bl fn_80237518
    addi r3, r30, 0x28dc
    bl fn_80237518
    addi r3, r30, 0x28e8
    bl fn_80237518
    addi r3, r30, 0x28f4
    bl fn_802377B8
    addi r3, r30, 0x2900
    bl fn_802377B8
    addi r3, r30, 0x290c
    bl fn_802377B8
    addi r3, r30, 0x2918
    bl fn_802377B8
    stw r31, 0x2924(r30)
    mr r3, r30
    stw r31, 0x2928(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8059AD10(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_fn_8059AD10_00000F98
    addic. r31, r3, 0x2918
    li r0, 0x0
    stw r0, lbl_8087F9E8
    beq lbl_fn_8059AD10_00000DA8
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_8059AD10_00000DA8
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8059AD10_00000DA8:
    addic. r31, r29, 0x290c
    beq lbl_fn_8059AD10_00000DC8
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_8059AD10_00000DC8
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8059AD10_00000DC8:
    addic. r31, r29, 0x2900
    beq lbl_fn_8059AD10_00000DE8
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_8059AD10_00000DE8
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8059AD10_00000DE8:
    addic. r31, r29, 0x28f4
    beq lbl_fn_8059AD10_00000E08
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_8059AD10_00000E08
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8059AD10_00000E08:
    addi r3, r29, 0x28e8
    li r4, -0x1
    bl fn_802375C4
    addi r3, r29, 0x28dc
    li r4, -0x1
    bl fn_802375C4
    addi r3, r29, 0x28d0
    li r4, -0x1
    bl fn_802375C4
    addi r3, r29, 0x28c4
    li r4, -0x1
    bl fn_802375C4
    addic. r31, r29, 0x28b8
    beq lbl_fn_8059AD10_00000E58
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_8059AD10_00000E58
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8059AD10_00000E58:
    addic. r31, r29, 0x28ac
    beq lbl_fn_8059AD10_00000E78
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_8059AD10_00000E78
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8059AD10_00000E78:
    addi r3, r29, 0x28a0
    li r4, -0x1
    bl fn_802375C4
    addic. r31, r29, 0x2894
    beq lbl_fn_8059AD10_00000EA4
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_8059AD10_00000EA4
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8059AD10_00000EA4:
    addic. r31, r29, 0x2888
    beq lbl_fn_8059AD10_00000EC4
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_8059AD10_00000EC4
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8059AD10_00000EC4:
    addic. r31, r29, 0x287c
    beq lbl_fn_8059AD10_00000EE4
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_8059AD10_00000EE4
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8059AD10_00000EE4:
    addic. r31, r29, 0x2870
    beq lbl_fn_8059AD10_00000F04
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_8059AD10_00000F04
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8059AD10_00000F04:
    addic. r31, r29, 0x2864
    beq lbl_fn_8059AD10_00000F24
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_8059AD10_00000F24
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8059AD10_00000F24:
    addic. r31, r29, 0x2858
    beq lbl_fn_8059AD10_00000F44
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_8059AD10_00000F44
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8059AD10_00000F44:
    addic. r31, r29, 0x284c
    beq lbl_fn_8059AD10_00000F64
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_8059AD10_00000F64
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8059AD10_00000F64:
    lis r4, fn_80598904@ha
    addi r3, r29, 0x48
    addi r4, r4, fn_80598904@l
    li r5, 0x140
    li r6, 0x20
    bl fn_806959D8
    mr r3, r29
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r30, 0x0
    ble lbl_fn_8059AD10_00000F98
    mr r3, r29
    bl dtor_80084684
lbl_fn_8059AD10_00000F98:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8059AF70(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x1
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_8059B1B8
    cmpwi r3, 0x0
    beq lbl_fn_8059AF70_00000FE4
    li r31, 0x0
lbl_fn_8059AF70_00000FE4:
    mr r3, r30
    bl fn_800D3FA4
    cmpwi r3, 0x0
    bne lbl_fn_8059AF70_00000FF8
    li r31, 0x0
lbl_fn_8059AF70_00000FF8:
    cmpwi r31, 0x0
    beq lbl_fn_8059AF70_00001008
    li r3, 0x1
    b lbl_fn_8059AF70_0000100C
lbl_fn_8059AF70_00001008:
    li r3, 0x0
lbl_fn_8059AF70_0000100C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8059AFDC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x2848(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8059AFDC_00001124
    li r0, 0x1
    stw r0, 0x2848(r3)
    lwz r4, lbl_808881C0
    addi r3, r3, 0x284c
    bl fn_8023780C
    lwz r4, lbl_808881C4
    addi r3, r30, 0x2858
    bl fn_8023780C
    lwz r4, lbl_808881C8
    addi r3, r30, 0x2864
    bl fn_8023780C
    lwz r4, lbl_808881CC
    addi r3, r30, 0x2870
    bl fn_8023780C
    lwz r4, lbl_808881D0
    addi r3, r30, 0x287c
    bl fn_8023780C
    lwz r4, lbl_808881D4
    addi r3, r30, 0x2888
    bl fn_8023780C
    lwz r4, lbl_808881D8
    addi r3, r30, 0x2894
    bl fn_8023780C
    lwz r4, lbl_808881DC
    addi r3, r30, 0x28a0
    bl fn_80237654
    lwz r4, lbl_808881E0
    addi r3, r30, 0x28ac
    bl fn_8023780C
    lis r31, lbl_80762274@ha
    addi r3, r30, 0x28c4
    addi r31, r31, lbl_80762274@l
    addi r4, r31, 0x1
    bl fn_80237654
    addi r3, r30, 0x28d0
    addi r4, r31, 0x1a
    bl fn_80237654
    addi r3, r30, 0x28dc
    addi r4, r31, 0x33
    bl fn_80237654
    addi r3, r30, 0x28e8
    addi r4, r31, 0x4c
    bl fn_80237654
    lwz r4, lbl_808881E4
    addi r3, r30, 0x28f4
    bl fn_8023780C
    lwz r4, lbl_808881E8
    addi r3, r30, 0x2900
    bl fn_8023780C
    lwz r4, lbl_808881EC
    addi r3, r30, 0x290c
    bl fn_8023780C
    lwz r4, lbl_808881F0
    addi r3, r30, 0x2918
    bl fn_8023780C
lbl_fn_8059AFDC_00001124:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8059B0F4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x2848(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8059B0F4_000011EC
    li r0, 0x0
    stw r0, 0x2848(r3)
    addi r3, r3, 0x284c
    bl fn_8023781C
    addi r3, r31, 0x2858
    bl fn_8023781C
    addi r3, r31, 0x2864
    bl fn_8023781C
    addi r3, r31, 0x2870
    bl fn_8023781C
    addi r3, r31, 0x287c
    bl fn_8023781C
    addi r3, r31, 0x2888
    bl fn_8023781C
    addi r3, r31, 0x2894
    bl fn_8023781C
    addi r3, r31, 0x28a0
    bl fn_8023772C
    addi r3, r31, 0x28ac
    bl fn_8023781C
    addi r3, r31, 0x28b8
    bl fn_8023781C
    addi r3, r31, 0x28c4
    bl fn_8023772C
    addi r3, r31, 0x28d0
    bl fn_8023772C
    addi r3, r31, 0x28dc
    bl fn_8023772C
    addi r3, r31, 0x28e8
    bl fn_8023772C
    addi r3, r31, 0x28f4
    bl fn_8023781C
    addi r3, r31, 0x2900
    bl fn_8023781C
    addi r3, r31, 0x290c
    bl fn_8023781C
lbl_fn_8059B0F4_000011EC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8059B1B8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x2848(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8059B1B8_0000122C
    li r3, 0x0
    b lbl_fn_8059B1B8_0000135C
lbl_fn_8059B1B8_0000122C:
    li r31, 0x0
    addi r3, r3, 0x284c
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_8059B1B8_00001320
    addi r3, r30, 0x2858
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_8059B1B8_00001320
    addi r3, r30, 0x2864
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_8059B1B8_00001320
    addi r3, r30, 0x2870
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_8059B1B8_00001320
    addi r3, r30, 0x287c
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_8059B1B8_00001320
    addi r3, r30, 0x2888
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_8059B1B8_00001320
    addi r3, r30, 0x2894
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_8059B1B8_00001320
    addi r3, r30, 0x28c4
    bl fn_802376D0
    cmpwi r3, 0x0
    bne lbl_fn_8059B1B8_00001320
    addi r3, r30, 0x28d0
    bl fn_802376D0
    cmpwi r3, 0x0
    bne lbl_fn_8059B1B8_00001320
    addi r3, r30, 0x28dc
    bl fn_802376D0
    cmpwi r3, 0x0
    bne lbl_fn_8059B1B8_00001320
    addi r3, r30, 0x28e8
    bl fn_802376D0
    cmpwi r3, 0x0
    bne lbl_fn_8059B1B8_00001320
    addi r3, r30, 0x28f4
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_8059B1B8_00001320
    addi r3, r30, 0x2900
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_8059B1B8_00001320
    addi r3, r30, 0x290c
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_8059B1B8_00001320
    addi r3, r30, 0x2918
    bl fn_80237874
    cmpwi r3, 0x0
    beq lbl_fn_8059B1B8_00001324
lbl_fn_8059B1B8_00001320:
    li r31, 0x1
lbl_fn_8059B1B8_00001324:
    addi r3, r30, 0x28a0
    bl fn_802376D0
    cmpwi r3, 0x0
    bne lbl_fn_8059B1B8_00001354
    addi r3, r30, 0x28ac
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_8059B1B8_00001354
    addi r3, r30, 0x28b8
    bl fn_80237874
    cmpwi r3, 0x0
    beq lbl_fn_8059B1B8_00001358
lbl_fn_8059B1B8_00001354:
    li r31, 0x1
lbl_fn_8059B1B8_00001358:
    mr r3, r31
lbl_fn_8059B1B8_0000135C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8059B32C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    addi r28, r3, 0x48
    mr r30, r3
    mr r27, r28
    li r26, 0x0
lbl_fn_8059B32C_00001398:
    lwz r4, 0x2928(r30)
    mr r3, r27
    bl fn_80599458
    addi r26, r26, 0x1
    addi r27, r27, 0x140
    cmpwi r26, 0x20
    blt lbl_fn_8059B32C_00001398
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_8059B32C_000013C8
    lwz r31, 0x48(r3)
    b lbl_fn_8059B32C_000013CC
lbl_fn_8059B32C_000013C8:
    li r31, 0x0
lbl_fn_8059B32C_000013CC:
    cmpwi r31, 0x0
    beq lbl_fn_8059B32C_000014C0
    lwz r4, 0x940(r31)
    lis r0, 0x4330
    stw r0, 0x8(r1)
    lis r3, lbl_80762258@ha
    xoris r0, r4, 0x8000
    lfd f2, lbl_80762258@l(r3)
    stw r0, 0xc(r1)
    lfs f0, lbl_808881F4
    lfd f1, 0x8(r1)
    lfs f3, 0x7d8(r31)
    fsubs f1, f1, f2
    fmuls f0, f0, f1
    fcmpo cr0, f3, f0
    bge lbl_fn_8059B32C_000014C0
    li r28, 0x0
    li r27, 0x0
lbl_fn_8059B32C_00001414:
    cmplwi r28, 0x20
    lwz r0, lbl_8087F9E8
    blt lbl_fn_8059B32C_00001428
    li r29, 0x0
    b lbl_fn_8059B32C_00001430
lbl_fn_8059B32C_00001428:
    add r3, r0, r27
    addi r29, r3, 0x48
lbl_fn_8059B32C_00001430:
    cmpwi r29, 0x0
    beq lbl_fn_8059B32C_000014AC
    lwz r0, 0x4(r29)
    li r3, 0x0
    cmpwi r0, 0x0
    beq lbl_fn_8059B32C_00001458
    lwz r0, 0x0(r29)
    cmpwi r0, 0x3
    beq lbl_fn_8059B32C_00001458
    li r3, 0x1
lbl_fn_8059B32C_00001458:
    cmpwi r3, 0x0
    beq lbl_fn_8059B32C_000014AC
    lwz r3, 0x8(r29)
    lwz r0, 0x48(r3)
    cmpwi r0, 0x3
    beq lbl_fn_8059B32C_00001478
    cmpwi r0, 0x0
    bne lbl_fn_8059B32C_000014AC
lbl_fn_8059B32C_00001478:
    mr r3, r29
    bl fn_8059A268
    cmpwi r3, 0x0
    bne lbl_fn_8059B32C_00001490
    lwz r3, 0x4(r29)
    b lbl_fn_8059B32C_00001494
lbl_fn_8059B32C_00001490:
    addi r3, r29, 0x80
lbl_fn_8059B32C_00001494:
    bl fn_8021A984
    cmpwi r3, 0x0
    beq lbl_fn_8059B32C_000014AC
    mr r3, r29
    addi r4, r30, 0x28a0
    bl fn_8059A0B8
lbl_fn_8059B32C_000014AC:
    addi r28, r28, 0x1
    addi r27, r27, 0x140
    cmplwi r28, 0x20
    blt lbl_fn_8059B32C_00001414
    b lbl_fn_8059B32C_00001590
lbl_fn_8059B32C_000014C0:
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    beq lbl_fn_8059B32C_00001524
    li r26, 0x0
lbl_fn_8059B32C_000014D0:
    lwz r0, 0x4(r28)
    li r3, 0x0
    cmpwi r0, 0x0
    beq lbl_fn_8059B32C_000014F0
    lwz r0, 0x0(r28)
    cmpwi r0, 0x3
    beq lbl_fn_8059B32C_000014F0
    li r3, 0x1
lbl_fn_8059B32C_000014F0:
    cmpwi r3, 0x0
    beq lbl_fn_8059B32C_00001510
    lwz r0, 0x60(r28)
    cmpwi r0, 0x5a
    ble lbl_fn_8059B32C_00001510
    mr r3, r28
    li r4, 0x0
    bl fn_8059A200
lbl_fn_8059B32C_00001510:
    addi r26, r26, 0x1
    addi r28, r28, 0x140
    cmpwi r26, 0x20
    blt lbl_fn_8059B32C_000014D0
    b lbl_fn_8059B32C_00001590
lbl_fn_8059B32C_00001524:
    li r28, 0x0
    li r27, 0x0
lbl_fn_8059B32C_0000152C:
    cmplwi r28, 0x20
    lwz r0, lbl_8087F9E8
    blt lbl_fn_8059B32C_00001540
    li r3, 0x0
    b lbl_fn_8059B32C_00001548
lbl_fn_8059B32C_00001540:
    add r3, r0, r27
    addi r3, r3, 0x48
lbl_fn_8059B32C_00001548:
    cmpwi r3, 0x0
    beq lbl_fn_8059B32C_00001580
    lwz r0, 0x4(r3)
    li r4, 0x0
    cmpwi r0, 0x0
    beq lbl_fn_8059B32C_00001570
    lwz r0, 0x0(r3)
    cmpwi r0, 0x3
    beq lbl_fn_8059B32C_00001570
    li r4, 0x1
lbl_fn_8059B32C_00001570:
    cmpwi r4, 0x0
    beq lbl_fn_8059B32C_00001580
    li r4, 0x0
    bl fn_8059A200
lbl_fn_8059B32C_00001580:
    addi r28, r28, 0x1
    addi r27, r27, 0x140
    cmplwi r28, 0x20
    blt lbl_fn_8059B32C_0000152C
lbl_fn_8059B32C_00001590:
    lwz r0, lbl_8087F430
    cmpwi r0, 0x0
    beq lbl_fn_8059B32C_0000162C
    cmpwi r31, 0x0
    beq lbl_fn_8059B32C_0000162C
    addi r27, r30, 0x48
    li r29, 0x0
    li r28, 0x0
lbl_fn_8059B32C_000015B0:
    lwz r3, 0x50(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8059B32C_00001604
    mr r4, r31
    li r5, 0x1
    bl fn_8016F3D0
    cmpwi r3, 0x0
    beq lbl_fn_8059B32C_00001604
    lwz r26, 0x4c(r30)
    cmpwi r26, 0x0
    beq lbl_fn_8059B32C_00001604
    mr r3, r27
    bl fn_8059A268
    cmpwi r3, 0x0
    beq lbl_fn_8059B32C_000015F0
    addi r26, r27, 0x80
lbl_fn_8059B32C_000015F0:
    mr r3, r26
    bl fn_8021A960
    cmpwi r3, 0x0
    beq lbl_fn_8059B32C_00001604
    addi r29, r29, 0x1
lbl_fn_8059B32C_00001604:
    addi r28, r28, 0x1
    addi r27, r27, 0x140
    cmpwi r28, 0x20
    addi r30, r30, 0x140
    blt lbl_fn_8059B32C_000015B0
    lwz r3, lbl_8087F430
    mr r5, r29
    li r4, 0xc7
    li r6, 0x0
    bl fn_80370320
lbl_fn_8059B32C_0000162C:
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8059B5FC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    addi r31, r3, 0x48
    stw r30, 0x8(r1)
    li r30, 0x0
lbl_fn_8059B5FC_00001660:
    lwz r0, 0x4(r31)
    li r3, 0x0
    cmpwi r0, 0x0
    beq lbl_fn_8059B5FC_00001680
    lwz r0, 0x0(r31)
    cmpwi r0, 0x3
    beq lbl_fn_8059B5FC_00001680
    li r3, 0x1
lbl_fn_8059B5FC_00001680:
    cmpwi r3, 0x0
    beq lbl_fn_8059B5FC_00001690
    mr r3, r31
    bl fn_80599C70
lbl_fn_8059B5FC_00001690:
    addi r30, r30, 0x1
    addi r31, r31, 0x140
    cmpwi r30, 0x20
    blt lbl_fn_8059B5FC_00001660
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8059B670(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stfd f31, 0x48(r1)
    fmr f31, f1
    stmw r25, 0x2c(r1)
    mr r29, r3
    mr r30, r4
    mr r31, r5
    mr r25, r6
    mr r26, r7
    mr r27, r8
    lbz r0, 0x2(r4)
    cmpwi r0, 0x7
    bne lbl_fn_8059B670_00001704
    mr r6, r26
    mr r7, r27
    bl fn_8059B8AC
    b lbl_fn_8059B670_000018D8
lbl_fn_8059B670_00001704:
    li r0, 0x8
    addi r6, r3, 0x48
    li r5, 0x0
    mtctr r0
lbl_fn_8059B670_00001714:
    lwz r0, 0x4(r6)
    li r4, 0x0
    cmpwi r0, 0x0
    beq lbl_fn_8059B670_00001734
    lwz r0, 0x0(r6)
    cmpwi r0, 0x3
    beq lbl_fn_8059B670_00001734
    li r4, 0x1
lbl_fn_8059B670_00001734:
    cmpwi r4, 0x0
    bne lbl_fn_8059B670_0000174C
    mulli r0, r5, 0x140
    add r3, r3, r0
    addi r28, r3, 0x48
    b lbl_fn_8059B670_00001810
lbl_fn_8059B670_0000174C:
    lwz r0, 0x144(r6)
    li r4, 0x0
    addi r5, r5, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_8059B670_00001770
    lwz r0, 0x140(r6)
    cmpwi r0, 0x3
    beq lbl_fn_8059B670_00001770
    li r4, 0x1
lbl_fn_8059B670_00001770:
    cmpwi r4, 0x0
    bne lbl_fn_8059B670_00001788
    mulli r0, r5, 0x140
    add r3, r3, r0
    addi r28, r3, 0x48
    b lbl_fn_8059B670_00001810
lbl_fn_8059B670_00001788:
    lwz r0, 0x284(r6)
    li r4, 0x0
    addi r5, r5, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_8059B670_000017AC
    lwz r0, 0x280(r6)
    cmpwi r0, 0x3
    beq lbl_fn_8059B670_000017AC
    li r4, 0x1
lbl_fn_8059B670_000017AC:
    cmpwi r4, 0x0
    bne lbl_fn_8059B670_000017C4
    mulli r0, r5, 0x140
    add r3, r3, r0
    addi r28, r3, 0x48
    b lbl_fn_8059B670_00001810
lbl_fn_8059B670_000017C4:
    lwz r0, 0x3c4(r6)
    li r4, 0x0
    addi r5, r5, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_8059B670_000017E8
    lwz r0, 0x3c0(r6)
    cmpwi r0, 0x3
    beq lbl_fn_8059B670_000017E8
    li r4, 0x1
lbl_fn_8059B670_000017E8:
    cmpwi r4, 0x0
    bne lbl_fn_8059B670_00001800
    mulli r0, r5, 0x140
    add r3, r3, r0
    addi r28, r3, 0x48
    b lbl_fn_8059B670_00001810
lbl_fn_8059B670_00001800:
    addi r6, r6, 0x500
    addi r5, r5, 0x1
    bdnz lbl_fn_8059B670_00001714
    li r28, 0x0
lbl_fn_8059B670_00001810:
    cmpwi r28, 0x0
    beq lbl_fn_8059B670_000018D0
    li r0, 0x0
    stw r0, 0x8(r1)
    lwz r6, 0x0(r9)
    cmpwi r6, 0x0
    beq lbl_fn_8059B670_00001848
    stw r6, 0x8(r1)
    addi r3, r9, 0x4
    addi r4, r1, 0xc
    li r5, 0x0
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_8059B670_00001848:
    fmr f1, f31
    mr r3, r28
    mr r4, r30
    mr r5, r31
    mr r6, r25
    mr r7, r26
    mr r8, r27
    addi r9, r1, 0x8
    bl fn_805989A8
    addic. r3, r1, 0x8
    beq lbl_fn_8059B670_000018A8
    lwz r4, 0x8(r1)
    cmpwi r4, 0x0
    beq lbl_fn_8059B670_000018A8
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_8059B670_000018A0
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8059B670_000018A0:
    li r0, 0x0
    stw r0, 0x8(r1)
lbl_fn_8059B670_000018A8:
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    beq lbl_fn_8059B670_000018D0
    mr r3, r30
    bl fn_8021A984
    cmpwi r3, 0x0
    beq lbl_fn_8059B670_000018D0
    mr r3, r28
    addi r4, r29, 0x28a0
    bl fn_8059A0B8
lbl_fn_8059B670_000018D0:
    mr r3, r28
    b lbl_fn_8059B670_000018DC
lbl_fn_8059B670_000018D8:
    li r3, 0x0
lbl_fn_8059B670_000018DC:
    lfd f31, 0x48(r1)
    lmw r25, 0x2c(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8059B8AC(void)
{
    nofralloc
    stwu r1, -0x3b0(r1)
    mflr r0
    stw r0, 0x3b4(r1)
    addi r11, r1, 0x390
    stfd f31, 0x3a0(r1)
    psq_st f31, 0x3a8(r1), 0, 0
    stfd f30, 0x390(r1)
    psq_st f30, 0x398(r1), 0, 0
    bl _savegpr_22
    addi r7, r1, 0x270
    addi r0, r1, 0x368
    cmplw r7, r0
    mr r23, r4
    li r0, 0x0
    stw r0, 0x264(r1)
    mr r24, r5
    mr r25, r6
    stw r0, 0x268(r1)
    stw r0, 0x26c(r1)
    bge lbl_fn_8059B8AC_00001A00
    addi r4, r1, 0x328
    li r0, 0x0
    li r3, 0x0
    bgt lbl_fn_8059B8AC_00001958
    li r3, 0x1
lbl_fn_8059B8AC_00001958:
    cmpwi r3, 0x0
    beq lbl_fn_8059B8AC_00001964
    li r0, 0x1
lbl_fn_8059B8AC_00001964:
    cmpwi r0, 0x0
    beq lbl_fn_8059B8AC_000019D0
    addi r0, r4, 0x3f
    li r3, 0x0
    subf r0, r7, r0
    srwi r0, r0, 6
    mtctr r0
    cmplw r7, r4
    bge lbl_fn_8059B8AC_000019D0
lbl_fn_8059B8AC_00001988:
    stw r3, 0x0(r7)
    stw r3, 0x4(r7)
    stw r3, 0x8(r7)
    stw r3, 0xc(r7)
    stw r3, 0x10(r7)
    stw r3, 0x14(r7)
    stw r3, 0x18(r7)
    stw r3, 0x1c(r7)
    stw r3, 0x20(r7)
    stw r3, 0x24(r7)
    stw r3, 0x28(r7)
    stw r3, 0x2c(r7)
    stw r3, 0x30(r7)
    stw r3, 0x34(r7)
    stw r3, 0x38(r7)
    stw r3, 0x3c(r7)
    addi r7, r7, 0x40
    bdnz lbl_fn_8059B8AC_00001988
lbl_fn_8059B8AC_000019D0:
    addi r3, r1, 0x368
    li r4, 0x0
    addi r0, r3, 0x7
    subf r0, r7, r0
    srwi r0, r0, 3
    mtctr r0
    cmplw r7, r3
    bge lbl_fn_8059B8AC_00001A00
lbl_fn_8059B8AC_000019F0:
    stw r4, 0x0(r7)
    stw r4, 0x4(r7)
    addi r7, r7, 0x8
    bdnz lbl_fn_8059B8AC_000019F0
lbl_fn_8059B8AC_00001A00:
    addi r5, r1, 0x16c
    addi r0, r1, 0x264
    cmplw r5, r0
    li r0, 0x0
    stw r0, 0x160(r1)
    stw r0, 0x164(r1)
    stw r0, 0x168(r1)
    bge lbl_fn_8059B8AC_00001ADC
    addi r4, r1, 0x224
    li r0, 0x0
    li r3, 0x0
    bgt lbl_fn_8059B8AC_00001A34
    li r3, 0x1
lbl_fn_8059B8AC_00001A34:
    cmpwi r3, 0x0
    beq lbl_fn_8059B8AC_00001A40
    li r0, 0x1
lbl_fn_8059B8AC_00001A40:
    cmpwi r0, 0x0
    beq lbl_fn_8059B8AC_00001AAC
    addi r0, r4, 0x3f
    li r3, 0x0
    subf r0, r5, r0
    srwi r0, r0, 6
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_8059B8AC_00001AAC
lbl_fn_8059B8AC_00001A64:
    stw r3, 0x0(r5)
    stw r3, 0x4(r5)
    stw r3, 0x8(r5)
    stw r3, 0xc(r5)
    stw r3, 0x10(r5)
    stw r3, 0x14(r5)
    stw r3, 0x18(r5)
    stw r3, 0x1c(r5)
    stw r3, 0x20(r5)
    stw r3, 0x24(r5)
    stw r3, 0x28(r5)
    stw r3, 0x2c(r5)
    stw r3, 0x30(r5)
    stw r3, 0x34(r5)
    stw r3, 0x38(r5)
    stw r3, 0x3c(r5)
    addi r5, r5, 0x40
    bdnz lbl_fn_8059B8AC_00001A64
lbl_fn_8059B8AC_00001AAC:
    addi r3, r1, 0x264
    li r4, 0x0
    addi r0, r3, 0x7
    subf r0, r5, r0
    srwi r0, r0, 3
    mtctr r0
    cmplw r5, r3
    bge lbl_fn_8059B8AC_00001ADC
lbl_fn_8059B8AC_00001ACC:
    stw r4, 0x0(r5)
    stw r4, 0x4(r5)
    addi r5, r5, 0x8
    bdnz lbl_fn_8059B8AC_00001ACC
lbl_fn_8059B8AC_00001ADC:
    addi r5, r1, 0x68
    addi r0, r1, 0x160
    cmplw r5, r0
    li r0, 0x0
    stw r0, 0x5c(r1)
    stw r0, 0x60(r1)
    stw r0, 0x64(r1)
    bge lbl_fn_8059B8AC_00001BB8
    addi r4, r1, 0x120
    li r0, 0x0
    li r3, 0x0
    bgt lbl_fn_8059B8AC_00001B10
    li r3, 0x1
lbl_fn_8059B8AC_00001B10:
    cmpwi r3, 0x0
    beq lbl_fn_8059B8AC_00001B1C
    li r0, 0x1
lbl_fn_8059B8AC_00001B1C:
    cmpwi r0, 0x0
    beq lbl_fn_8059B8AC_00001B88
    addi r0, r4, 0x3f
    li r3, 0x0
    subf r0, r5, r0
    srwi r0, r0, 6
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_8059B8AC_00001B88
lbl_fn_8059B8AC_00001B40:
    stw r3, 0x0(r5)
    stw r3, 0x4(r5)
    stw r3, 0x8(r5)
    stw r3, 0xc(r5)
    stw r3, 0x10(r5)
    stw r3, 0x14(r5)
    stw r3, 0x18(r5)
    stw r3, 0x1c(r5)
    stw r3, 0x20(r5)
    stw r3, 0x24(r5)
    stw r3, 0x28(r5)
    stw r3, 0x2c(r5)
    stw r3, 0x30(r5)
    stw r3, 0x34(r5)
    stw r3, 0x38(r5)
    stw r3, 0x3c(r5)
    addi r5, r5, 0x40
    bdnz lbl_fn_8059B8AC_00001B40
lbl_fn_8059B8AC_00001B88:
    addi r3, r1, 0x160
    li r4, 0x0
    addi r0, r3, 0x7
    subf r0, r5, r0
    srwi r0, r0, 3
    mtctr r0
    cmplw r5, r3
    bge lbl_fn_8059B8AC_00001BB8
lbl_fn_8059B8AC_00001BA8:
    stw r4, 0x0(r5)
    stw r4, 0x4(r5)
    addi r5, r5, 0x8
    bdnz lbl_fn_8059B8AC_00001BA8
lbl_fn_8059B8AC_00001BB8:
    lfs f31, lbl_808881F4
    li r29, 0x0
    li r30, 0x0
lbl_fn_8059B8AC_00001BC4:
    cmplwi r29, 0x20
    lwz r0, lbl_8087F9E8
    blt lbl_fn_8059B8AC_00001BD8
    li r31, 0x0
    b lbl_fn_8059B8AC_00001BE0
lbl_fn_8059B8AC_00001BD8:
    add r3, r0, r30
    addi r31, r3, 0x48
lbl_fn_8059B8AC_00001BE0:
    cmpwi r31, 0x0
    li r28, 0x0
    beq lbl_fn_8059B8AC_00001C04
    lwz r28, 0x4(r31)
    mr r3, r31
    bl fn_8059A268
    cmpwi r3, 0x0
    beq lbl_fn_8059B8AC_00001C04
    addi r28, r31, 0x80
lbl_fn_8059B8AC_00001C04:
    cmpwi r31, 0x0
    beq lbl_fn_8059B8AC_00001EB0
    lwz r0, 0x4(r31)
    li r3, 0x0
    cmpwi r0, 0x0
    beq lbl_fn_8059B8AC_00001C2C
    lwz r0, 0x0(r31)
    cmpwi r0, 0x3
    beq lbl_fn_8059B8AC_00001C2C
    li r3, 0x1
lbl_fn_8059B8AC_00001C2C:
    cmpwi r3, 0x0
    beq lbl_fn_8059B8AC_00001EB0
    lwz r0, 0xac(r28)
    rlwinm r0, r0, 0, 25, 25
    cmpwi r0, 0x40
    beq lbl_fn_8059B8AC_00001EB0
    lfs f2, 0x18(r31)
    addi r3, r1, 0x50
    lfs f1, 0x8(r25)
    lfs f3, 0x14(r31)
    fsubs f4, f2, f1
    lfs f0, 0x4(r25)
    lfs f2, 0x10(r31)
    lfs f1, 0x0(r25)
    fsubs f3, f3, f0
    lfs f0, 0x58(r23)
    fsubs f1, f2, f1
    stfs f3, 0x54(r1)
    stfs f1, 0x50(r1)
    stfs f4, 0x58(r1)
    lfs f2, 0x5c(r31)
    lfs f1, 0x28(r31)
    fmuls f1, f2, f1
    fmadds f30, f31, f0, f1
    bl fn_805F9920
    fmuls f0, f30, f30
    fcmpo cr0, f1, f0
    bge lbl_fn_8059B8AC_00001EB0
    lwz r3, 0x8(r31)
    mr r4, r24
    li r27, 0x1
    li r5, 0x1
    bl fn_8016F3D0
    cmpwi r3, 0x0
    beq lbl_fn_8059B8AC_00001DD8
    lwz r3, 0x70(r28)
    li r27, 0x0
    cmpwi r3, 0x0
    ble lbl_fn_8059B8AC_00001CD0
    bl fn_80219E6C
    b lbl_fn_8059B8AC_00001CD4
lbl_fn_8059B8AC_00001CD0:
    li r3, 0x0
lbl_fn_8059B8AC_00001CD4:
    cmpwi r3, 0x0
    mr r26, r3
    beq lbl_fn_8059B8AC_00001DC8
    lwz r0, 0xac(r23)
    rlwinm r0, r0, 0, 26, 26
    cmpwi r0, 0x20
    beq lbl_fn_8059B8AC_00001D04
    lwz r3, 0xc8(r3)
    cmpwi r3, 0x0
    ble lbl_fn_8059B8AC_00001D04
    bl fn_80219E6C
    mr r26, r3
lbl_fn_8059B8AC_00001D04:
    mr r3, r26
    bl fn_8021A8D0
    cmpwi r3, 0x0
    bne lbl_fn_8059B8AC_00001D24
    mr r3, r26
    bl fn_8021A918
    cmpwi r3, 0x0
    beq lbl_fn_8059B8AC_00001D78
lbl_fn_8059B8AC_00001D24:
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    bne lbl_fn_8059B8AC_00001D38
    lwz r4, 0x8(r31)
    b lbl_fn_8059B8AC_00001D3C
lbl_fn_8059B8AC_00001D38:
    mr r4, r24
lbl_fn_8059B8AC_00001D3C:
    lwz r0, 0x160(r1)
    addi r3, r1, 0x164
    stw r26, 0x20(r1)
    slwi r0, r0, 3
    add. r3, r3, r0
    stw r4, 0x24(r1)
    stw r26, 0x38(r1)
    stw r4, 0x3c(r1)
    beq lbl_fn_8059B8AC_00001D68
    stw r26, 0x0(r3)
    stw r4, 0x4(r3)
lbl_fn_8059B8AC_00001D68:
    lwz r3, 0x160(r1)
    addi r0, r3, 0x1
    stw r0, 0x160(r1)
    b lbl_fn_8059B8AC_00001DC8
lbl_fn_8059B8AC_00001D78:
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    bne lbl_fn_8059B8AC_00001D8C
    lwz r4, 0x8(r31)
    b lbl_fn_8059B8AC_00001D90
lbl_fn_8059B8AC_00001D8C:
    mr r4, r24
lbl_fn_8059B8AC_00001D90:
    lwz r0, 0x264(r1)
    addi r3, r1, 0x268
    stw r26, 0x18(r1)
    slwi r0, r0, 3
    add. r3, r3, r0
    stw r4, 0x1c(r1)
    stw r26, 0x30(r1)
    stw r4, 0x34(r1)
    beq lbl_fn_8059B8AC_00001DBC
    stw r26, 0x0(r3)
    stw r4, 0x4(r3)
lbl_fn_8059B8AC_00001DBC:
    lwz r3, 0x264(r1)
    addi r0, r3, 0x1
    stw r0, 0x264(r1)
lbl_fn_8059B8AC_00001DC8:
    lwz r0, 0x12a4(r24)
    extrwi. r0, r0, 1, 29
    beq lbl_fn_8059B8AC_00001DD8
    li r27, 0x1
lbl_fn_8059B8AC_00001DD8:
    cmpwi r27, 0x0
    beq lbl_fn_8059B8AC_00001EA8
    lwz r3, 0x6c(r28)
    bl fn_80219E6C
    lwz r4, lbl_8087F8A0
    mr r22, r3
    lwz r26, 0x8(r31)
    cmpwi r4, 0x0
    beq lbl_fn_8059B8AC_00001E20
    lwz r27, 0x48(r4)
    b lbl_fn_8059B8AC_00001E18
lbl_fn_8059B8AC_00001E04:
    mr r3, r27
    mr r4, r22
    mr r5, r26
    bl fn_80178864
    lwz r27, 0x14ac(r27)
lbl_fn_8059B8AC_00001E18:
    cmpwi r27, 0x0
    bne lbl_fn_8059B8AC_00001E04
lbl_fn_8059B8AC_00001E20:
    lwz r3, lbl_8087F408
    cmpwi r3, 0x0
    beq lbl_fn_8059B8AC_00001E50
    lwz r27, 0x48(r3)
    b lbl_fn_8059B8AC_00001E48
lbl_fn_8059B8AC_00001E34:
    mr r3, r27
    mr r4, r22
    mr r5, r26
    bl fn_80178864
    lwz r27, 0x14ac(r27)
lbl_fn_8059B8AC_00001E48:
    cmpwi r27, 0x0
    bne lbl_fn_8059B8AC_00001E34
lbl_fn_8059B8AC_00001E50:
    lwz r3, 0x70(r28)
    cmpwi r3, 0x0
    ble lbl_fn_8059B8AC_00001E64
    bl fn_80219E6C
    b lbl_fn_8059B8AC_00001E68
lbl_fn_8059B8AC_00001E64:
    li r3, 0x0
lbl_fn_8059B8AC_00001E68:
    cmpwi r3, 0x0
    beq lbl_fn_8059B8AC_00001EA8
    lwz r0, 0x5c(r1)
    addi r4, r1, 0x60
    stw r31, 0x10(r1)
    slwi r0, r0, 3
    add. r4, r4, r0
    stw r3, 0x14(r1)
    stw r31, 0x28(r1)
    stw r3, 0x2c(r1)
    beq lbl_fn_8059B8AC_00001E9C
    stw r31, 0x0(r4)
    stw r3, 0x4(r4)
lbl_fn_8059B8AC_00001E9C:
    lwz r3, 0x5c(r1)
    addi r0, r3, 0x1
    stw r0, 0x5c(r1)
lbl_fn_8059B8AC_00001EA8:
    mr r3, r31
    bl fn_805991E4
lbl_fn_8059B8AC_00001EB0:
    addi r29, r29, 0x1
    addi r30, r30, 0x140
    cmplwi r29, 0x20
    blt lbl_fn_8059B8AC_00001BC4
    lfs f31, lbl_808881F8
    addi r26, r1, 0x160
    li r22, 0x0
    li r23, 0x0
    b lbl_fn_8059B8AC_00001FAC
lbl_fn_8059B8AC_00001ED4:
    lwz r0, 0x12a4(r24)
    extrwi. r0, r0, 1, 29
    beq lbl_fn_8059B8AC_00001EF0
    lwz r3, 0x4(r26)
    bl fn_8021A9CC
    cmpwi r3, 0x0
    beq lbl_fn_8059B8AC_00001F88
lbl_fn_8059B8AC_00001EF0:
    lwz r27, lbl_8087F048
    mr r3, r27
    bl fn_800F8548
    stw r23, 0x8(r1)
    mr r6, r3
    mr r3, r27
    mr r7, r25
    lwz r4, 0x8(r26)
    li r8, 0x1
    lwz r5, 0x4(r26)
    li r9, 0x1e
    li r10, -0x1
    bl fn_800FB4B0
    lwz r4, 0x4(r26)
    cmpwi r4, 0x0
    beq lbl_fn_8059B8AC_00001F88
    cmpwi r24, 0x0
    beq lbl_fn_8059B8AC_00001F88
    stfs f31, 0x40(r1)
    fmr f1, f31
    lwz r3, lbl_8087F048
    addi r8, r24, 0x528
    stfs f31, 0x44(r1)
    addi r9, r24, 0x534
    addi r10, r1, 0x40
    stfs f31, 0x48(r1)
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    stfs f31, 0x4c(r1)
    lwz r4, 0xb0(r4)
    bl fn_801070C8
    lwz r4, 0x4(r26)
    addi r5, r24, 0x528
    lwz r3, lbl_8087F048
    lwz r4, 0xb0(r4)
    lfs f1, lbl_808881F8
    bl fn_80107208
lbl_fn_8059B8AC_00001F88:
    lwz r0, lbl_8087F490
    cmpwi r0, 0x0
    beq lbl_fn_8059B8AC_00001FA4
    bl fn_80151210
    lwz r4, 0x8(r26)
    lwz r5, 0x4(r26)
    bl fn_803E6890
lbl_fn_8059B8AC_00001FA4:
    addi r26, r26, 0x8
    addi r22, r22, 0x1
lbl_fn_8059B8AC_00001FAC:
    lwz r0, 0x160(r1)
    cmplw r22, r0
    blt lbl_fn_8059B8AC_00001ED4
    addi r23, r1, 0x264
    li r22, 0x0
    b lbl_fn_8059B8AC_00002020
lbl_fn_8059B8AC_00001FC4:
    lwz r0, 0x12a4(r24)
    extrwi. r0, r0, 1, 29
    bne lbl_fn_8059B8AC_00001FFC
    lwz r26, lbl_8087F048
    mr r3, r26
    bl fn_800F8548
    lwz r4, 0x8(r23)
    mr r7, r3
    lwz r6, 0x4(r23)
    mr r3, r26
    mr r5, r24
    mr r8, r25
    addi r9, r24, 0x534
    bl fn_800FBA30
lbl_fn_8059B8AC_00001FFC:
    lwz r0, lbl_8087F490
    cmpwi r0, 0x0
    beq lbl_fn_8059B8AC_00002018
    bl fn_80151210
    lwz r4, 0x8(r23)
    lwz r5, 0x4(r23)
    bl fn_803E6890
lbl_fn_8059B8AC_00002018:
    addi r23, r23, 0x8
    addi r22, r22, 0x1
lbl_fn_8059B8AC_00002020:
    lwz r0, 0x264(r1)
    cmplw r22, r0
    blt lbl_fn_8059B8AC_00001FC4
    addi r23, r1, 0x5c
    li r22, 0x0
    b lbl_fn_8059B8AC_0000209C
lbl_fn_8059B8AC_00002038:
    lwz r0, 0x12a4(r24)
    extrwi. r0, r0, 1, 29
    bne lbl_fn_8059B8AC_00002074
    lwz r3, 0x4(r23)
    li r4, 0x1
    bl fn_80599FB8
    lwz r7, 0x4(r23)
    li r8, 0x0
    lwz r3, lbl_8087F048
    li r9, 0x0
    lwz r4, 0x8(r7)
    addi r6, r7, 0x10
    lwz r5, 0x8(r23)
    addi r7, r7, 0x1c
    bl fn_800FB1BC
lbl_fn_8059B8AC_00002074:
    lwz r0, lbl_8087F490
    cmpwi r0, 0x0
    beq lbl_fn_8059B8AC_00002094
    bl fn_80151210
    lwz r4, 0x4(r23)
    lwz r5, 0x8(r23)
    lwz r4, 0x8(r4)
    bl fn_803E6890
lbl_fn_8059B8AC_00002094:
    addi r23, r23, 0x8
    addi r22, r22, 0x1
lbl_fn_8059B8AC_0000209C:
    lwz r0, 0x5c(r1)
    cmplw r22, r0
    blt lbl_fn_8059B8AC_00002038
    addi r11, r1, 0x390
    psq_l f31, 0x3a8(r1), 0, 0
    lfd f31, 0x3a0(r1)
    psq_l f30, 0x398(r1), 0, 0
    lfd f30, 0x390(r1)
    bl _restgpr_22
    lwz r0, 0x3b4(r1)
    mtlr r0
    addi r1, r1, 0x3b0
    blr
}
