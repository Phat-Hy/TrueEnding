#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void SCGetLanguage(void);
extern void __register_global_object(void);
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_8003EFB0(void);
extern void fn_80051B70(void);
extern void fn_80084320(void);
extern void fn_8008771C(void);
extern void fn_80087E9C(void);
extern void fn_80088724(void);
extern void fn_80097C08(void);
extern void fn_800BFAC8(void);
extern void fn_800C31F4(void);
extern void fn_800CB3A0(void);
extern void fn_800D1D3C(void);
extern void fn_800D1E9C(void);
extern void fn_800D5738(void);
extern void fn_800D5808(void);
extern void fn_800D5908(void);
extern void fn_8017CB9C(void);
extern void fn_801805A4(void);
extern void fn_801CC0AC(void);
extern void fn_8020924C(void);
extern void fn_80244228(void);
extern void fn_802476D0(void);
extern void fn_80248E88(void);
extern void fn_8024A004(void);
extern void fn_8024A650(void);
extern void fn_80250A24(void);
extern void fn_8025457C(void);
extern void fn_802558B0(void);
extern void fn_8025A060(void);
extern void fn_8025C998(void);
extern void fn_8025FE60(void);
extern void fn_80262938(void);
extern void fn_80264DB4(void);
extern void fn_8026FC0C(void);
extern void fn_8027278C(void);
extern void fn_80279860(void);
extern void fn_8027C990(void);
extern void fn_80282AE8(void);
extern void fn_80287E7C(void);
extern void fn_80293738(void);
extern void fn_8029CB00(void);
extern void fn_802A4BBC(void);
extern void fn_802AC364(void);
extern void fn_802B23E8(void);
extern void fn_802B77AC(void);
extern void fn_802BA92C(void);
extern void fn_802C0C38(void);
extern void fn_802C7BE4(void);
extern void fn_802CCB20(void);
extern void fn_802CCFD8(void);
extern void fn_802D0038(void);
extern void fn_802D7480(void);
extern void fn_802DDDB8(void);
extern void fn_802E211C(void);
extern void fn_802E59E0(void);
extern void fn_802E8580(void);
extern void fn_802EC670(void);
extern void fn_802EE604(void);
extern void fn_802F1524(void);
extern void fn_802F6E64(void);
extern void fn_802FC850(void);
extern void fn_80305C74(void);
extern void fn_8030A144(void);
extern void fn_8030DA20(void);
extern void fn_80310330(void);
extern void fn_80313544(void);
extern void fn_803161F8(void);
extern void fn_8031B0A8(void);
extern void fn_8031EB3C(void);
extern void fn_80322C68(void);
extern void fn_8032C52C(void);
extern void fn_8032DEA0(void);
extern void fn_803335C4(void);
extern void fn_80334CD8(void);
extern void fn_803388A4(void);
extern void fn_80345384(void);
extern void fn_803545E0(void);
extern void fn_803559F8(void);
extern void fn_8035BEA4(void);
extern void fn_80370174(void);
extern void fn_80370320(void);
extern void fn_80370A78(void);
extern void fn_80370AE4(void);
extern void fn_803ABE54(void);
extern void fn_803E3050(void);
extern void fn_803E6ADC(void);
extern void fn_80452710(void);
extern void fn_80452F14(void);
extern void fn_80458270(void);
extern void fn_8045FAB0(void);
extern void fn_80546004(void);
extern void fn_80566424(void);
extern void fn_805F93C0(void);
extern void fn_805F98D0(void);
extern void fn_805F9940(void);
extern void fn_805F9990(void);
extern void fn_80682428(void);
extern void fn_8068AE9C(void);
extern void fn_806958E0(void);
extern void fn_806959D8(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 jumptable_80797488[];
extern u8 lbl_807632A0[];
extern u8 lbl_807636B8[];
extern u8 lbl_807637DC[];
extern u8 lbl_807637FC[];
extern u8 lbl_807975B0[];
extern u8 lbl_807C6BB8[];
extern u8 lbl_807C95A0[];

/* Small data declarations */
extern u32 lbl_8087EE74;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F018;
extern u32 lbl_8087F430;
extern u32 lbl_8087F490;
extern u32 lbl_8087F4A0;
extern u32 lbl_8087F4E8;
extern u32 lbl_80888248;
extern u32 lbl_8088824C;
extern u32 lbl_80888250;
extern u32 lbl_8088826C;
extern u32 lbl_80888270;
extern u32 lbl_80888274;
extern u32 lbl_80888278;
extern u32 lbl_8088827C;
extern u32 lbl_80888280;
extern u32 lbl_80888284;
extern u32 lbl_80888288;
extern u32 lbl_8088828C;
extern u32 lbl_80888290;
extern u32 lbl_80888294;

/* Function declarations */
void fn_805A49E8(void);
void fn_805A4A20(void);
void fn_805A4A58(void);
void fn_805A4F20(void);
void fn_805A4F5C(void);
void fn_805A4F70(void);
void fn_805A4F84(void);
void fn_805A507C(void);
void fn_805A5224(void);
void fn_805A52F8(void);
void fn_805A5378(void);
void fn_805A620C(void);
void fn_805A6270(void);
void fn_805A6370(void);

asm void fn_805A49E8(void)
{
    nofralloc
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_805A49E8_00000030
    lwz r0, 0x0(r4)
    cmpwi r0, 0x0
    bne lbl_fn_805A49E8_00000020
    lwz r4, 0x4(r4)
    b fn_80370A78
lbl_fn_805A49E8_00000020:
    cmpwi r0, 0x1
    bne lbl_fn_805A49E8_00000030
    lwz r4, 0x4(r4)
    b fn_80370174
lbl_fn_805A49E8_00000030:
    li r3, -0x1
    blr
}

asm void fn_805A4A20(void)
{
    nofralloc
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beqlr
    lwz r0, 0x0(r4)
    cmpwi r0, 0x0
    bne lbl_fn_805A4A20_00000058
    lwz r4, 0x4(r4)
    b fn_80370AE4
lbl_fn_805A4A20_00000058:
    cmpwi r0, 0x1
    bnelr
    lwz r4, 0x4(r4)
    li r6, 0x0
    b fn_80370320
    blr
}

asm void fn_805A4A58(void)
{
    nofralloc
    stwu r1, -0x160(r1)
    mflr r0
    stw r0, 0x164(r1)
    lwz r0, 0x0(r4)
    stfd f31, 0x150(r1)
    cmpwi r0, 0x0
    psq_st f31, 0x158(r1), 0, 0
    stfd f30, 0x140(r1)
    psq_st f30, 0x148(r1), 0, 0
    stw r31, 0x13c(r1)
    stw r30, 0x138(r1)
    stw r29, 0x134(r1)
    mr r29, r4
    stw r28, 0x130(r1)
    beq lbl_fn_805A4A58_000000CC
    lfs f7, 0x10(r4)
    lfs f0, lbl_8088824C
    fcmpo cr0, f7, f0
    cror eq, lt, eq
    beq lbl_fn_805A4A58_000000CC
    lbz r0, 0x1c(r4)
    cmpwi r0, 0x0
    bne lbl_fn_805A4A58_000000D4
lbl_fn_805A4A58_000000CC:
    li r3, 0x0
    b lbl_fn_805A4A58_00000508
lbl_fn_805A4A58_000000D4:
    lwz r28, lbl_8087F430
    lwz r0, 0x868(r28)
    cmpwi r0, 0x3
    beq lbl_fn_805A4A58_000000F4
    cmpwi r0, 0x1
    beq lbl_fn_805A4A58_000000F4
    cmpwi r0, 0x4
    bne lbl_fn_805A4A58_00000504
lbl_fn_805A4A58_000000F4:
    lfs f2, 0x7c(r28)
    addi r3, r1, 0xf4
    psq_l f1, 0x74(r28), 0, 0
    addi r31, r1, 0xe8
    psq_st f1, 0x0(r31), 0, 0
    frsp f0, f2
    mr r4, r3
    stfs f2, 0xf0(r1)
    lfs f9, 0xe8(r1)
    lfs f2, 0x88(r28)
    psq_l f1, 0x80(r28), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    fsubs f0, f2, f0
    lfs f7, 0xec(r1)
    lfs f10, 0xf4(r1)
    lfs f8, 0xf8(r1)
    fsubs f9, f10, f9
    stfs f0, 0xfc(r1)
    fsubs f0, f8, f7
    stfs f9, 0xf4(r1)
    stfs f0, 0xf8(r1)
    bl fn_805F98D0
    lfs f8, 0xf4(r1)
    addi r6, r1, 0x80
    lfs f10, lbl_8088826C
    addi r30, r1, 0xc8
    lfs f7, 0xf8(r1)
    addi r5, r1, 0xd8
    fmuls f9, f8, f10
    lfs f8, 0xe8(r1)
    fmuls f11, f7, f10
    lfs f0, 0xfc(r1)
    lfs f7, 0xec(r1)
    addi r3, r1, 0x20
    fadds f9, f9, f8
    lwz r4, 0x0(r29)
    fadds f8, f11, f7
    lfs f11, 0x10(r29)
    fmuls f10, f0, f10
    lfs f0, 0xf0(r1)
    stfs f9, 0xf4(r1)
    fadds f7, f10, f0
    lfs f0, 0xc(r29)
    stfs f8, 0xf8(r1)
    stfs f7, 0xfc(r1)
    lfs f7, 0x8(r29)
    lfs f12, 0x2c(r4)
    lfs f13, 0x1c(r4)
    fadds f30, f12, f0
    lfs f31, 0xc(r4)
    lfs f0, 0x4(r29)
    fadds f7, f13, f7
    stfs f11, 0xd4(r1)
    fmr f2, f30
    fadds f0, f31, f0
    stfs f7, 0x84(r1)
    stfs f0, 0x80(r1)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0xe0(r1)
    frsp f2, f2
    lfs f9, 0xcc(r1)
    stfs f2, 0xd0(r1)
    lfs f7, 0xc8(r1)
    lfs f10, 0x7c(r28)
    lfs f8, 0x78(r28)
    lfs f0, 0x74(r28)
    fsubs f10, f2, f10
    fsubs f8, f9, f8
    stfs f31, 0x74(r1)
    fsubs f0, f7, f0
    stfs f13, 0x78(r1)
    stfs f12, 0x7c(r1)
    stfs f30, 0x88(r1)
    psq_st f1, 0x0(r5), 0, 0
    stfs f11, 0xe4(r1)
    stfs f0, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f10, 0x28(r1)
    bl fn_805F9940
    lfs f7, 0xe4(r1)
    addi r29, r1, 0x100
    lfs f0, lbl_8088824C
    addi r4, r1, 0xbc
    fneg f8, f7
    stfs f0, 0xc4(r1)
    fmr f31, f1
    mr r3, r29
    stfs f8, 0xbc(r1)
    mr r5, r4
    stfs f8, 0xc0(r1)
    stfs f7, 0xb0(r1)
    stfs f7, 0xb4(r1)
    stfs f0, 0xb8(r1)
    psq_l f1, 0x13c(r28), 0, 0
    psq_l f2, 0x144(r28), 0, 0
    psq_l f3, 0x14c(r28), 0, 0
    psq_l f4, 0x154(r28), 0, 0
    psq_l f5, 0x15c(r28), 0, 0
    psq_l f6, 0x164(r28), 0, 0
    psq_st f6, 0x28(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    stfs f0, 0x10c(r1)
    stfs f0, 0x11c(r1)
    stfs f0, 0x12c(r1)
    bl fn_805F93C0
    addi r4, r1, 0xb0
    mr r3, r29
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
    mr r3, r31
    lfs f10, 0xa8(r1)
    mr r4, r30
    lfs f7, 0x9c(r1)
    lfs f8, 0xa4(r1)
    fsubs f12, f10, f7
    lfs f0, 0x98(r1)
    fadds f10, f10, f7
    lfs f9, lbl_80888270
    fsubs f11, f8, f0
    lfs f7, lbl_80888274
    fabs f12, f12
    stfs f2, 0xa0(r1)
    fabs f13, f11
    fadds f0, f8, f0
    frsp f11, f12
    fmuls f8, f9, f10
    frsp f12, f13
    stfs f8, 0x1c(r1)
    fmuls f8, f9, f0
    fmuls f10, f9, f11
    fmuls f9, f9, f12
    stfs f8, 0x18(r1)
    fadds f0, f10, f7
    fadds f7, f9, f7
    stfs f0, 0x14(r1)
    stfs f7, 0x10(r1)
    bl fn_80051B70
    cmpwi r3, 0x0
    beq lbl_fn_805A4A58_00000488
    lfs f1, 0xd4(r1)
    mr r3, r31
    mr r4, r30
    bl fn_803ABE54
    cmpwi r3, 0x0
    beq lbl_fn_805A4A58_00000488
    lfs f9, 0xe0(r1)
    addi r4, r1, 0x50
    lfs f7, 0xb8(r1)
    addi r5, r1, 0x44
    lfs f0, 0xc4(r1)
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
    lwz r4, lbl_80888248
    addi r3, r1, 0x8
    lfs f1, lbl_80888250
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    li r3, 0x1
    b lbl_fn_805A4A58_00000508
lbl_fn_805A4A58_00000488:
    lfs f0, lbl_8088826C
    fcmpo cr0, f31, f0
    bge lbl_fn_805A4A58_00000504
    lfs f1, 0xd4(r1)
    addi r3, r1, 0xe8
    addi r4, r1, 0xc8
    bl fn_803ABE54
    cmpwi r3, 0x0
    beq lbl_fn_805A4A58_00000504
    lfs f7, 0x1c(r1)
    addi r3, r1, 0xd8
    lfs f0, 0x18(r1)
    addi r4, r1, 0x38
    psq_l f1, 0x0(r3), 0, 0
    addi r7, r1, 0x8c
    lfs f8, 0xac(r1)
    addi r5, r1, 0x2c
    lfs f2, 0xe0(r1)
    addi r6, r1, 0x10
    stfs f2, 0x40(r1)
    fmr f2, f8
    lwz r3, lbl_8087F490
    stfs f0, 0x8c(r1)
    stfs f7, 0x90(r1)
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    fmr f1, f31
    stfs f8, 0x94(r1)
    stfs f2, 0x34(r1)
    bl fn_803E3050
lbl_fn_805A4A58_00000504:
    li r3, 0x0
lbl_fn_805A4A58_00000508:
    lwz r0, 0x164(r1)
    psq_l f31, 0x158(r1), 0, 0
    lfd f31, 0x150(r1)
    psq_l f30, 0x148(r1), 0, 0
    lfd f30, 0x140(r1)
    lwz r31, 0x13c(r1)
    lwz r30, 0x138(r1)
    lwz r29, 0x134(r1)
    lwz r28, 0x130(r1)
    mtlr r0
    addi r1, r1, 0x160
    blr
}

asm void fn_805A4F20(void)
{
    nofralloc
    stfs f1, 0x2e8(r3)
    fmr f1, f2
    lfs f0, lbl_80888250
    mr r8, r5
    li r0, 0x1
    mr r7, r6
    mr r5, r4
    mr r6, r8
    stw r0, 0x3fc(r3)
    lfs f2, lbl_80888278
    li r4, 0x0
    stfs f0, 0x2fc(r3)
    li r8, 0x1
    addi r3, r3, 0xb0
    b fn_80097C08
}

asm void fn_805A4F5C(void)
{
    nofralloc
    lwz r0, 0x58c(r3)
    stw r0, 0x0(r4)
    lwz r0, 0x14bc(r3)
    stw r0, 0x4(r4)
    blr
}

asm void fn_805A4F70(void)
{
    nofralloc
    lwz r5, 0x0(r4)
    lwz r0, 0x4(r4)
    stw r5, 0x58c(r3)
    stw r0, 0x14bc(r3)
    blr
}

asm void fn_805A4F84(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r27, r3
    mr r28, r4
    lbz r0, lbl_8087EE74
    extsb. r0, r0
    bne lbl_fn_805A4F84_000005F4
    lis r3, lbl_807C6BB8@ha
    li r0, 0x0
    stwu r0, lbl_807C6BB8@l(r3)
    lis r4, fn_8003EFB0@ha
    li r31, 0x1
    lis r5, lbl_807C95A0@ha
    stw r0, 0x4(r3)
    addi r4, r4, fn_8003EFB0@l
    addi r5, r5, lbl_807C95A0@l
    stw r0, 0x8(r3)
    stw r31, 0xc(r3)
    bl __register_global_object
    stb r31, lbl_8087EE74
lbl_fn_805A4F84_000005F4:
    lis r30, lbl_807C6BB8@ha
    addi r30, r30, lbl_807C6BB8@l
    lwz r0, 0xc(r30)
    cmpwi r0, 0x0
    beq lbl_fn_805A4F84_0000065C
    li r29, 0x0
    li r31, 0x0
    b lbl_fn_805A4F84_00000650
lbl_fn_805A4F84_00000614:
    lwz r0, 0x0(r30)
    add r3, r0, r31
    lwzx r0, r31, r0
    cmpwi r0, -0x1
    beq lbl_fn_805A4F84_00000630
    cmpwi r0, 0x8
    bne lbl_fn_805A4F84_00000648
lbl_fn_805A4F84_00000630:
    lwz r12, 0x4(r3)
    mr r4, r27
    mr r5, r28
    li r3, 0x8
    mtctr r12
    bctrl
lbl_fn_805A4F84_00000648:
    addi r29, r29, 0x1
    addi r31, r31, 0x8
lbl_fn_805A4F84_00000650:
    lwz r0, 0x4(r30)
    cmpw r29, r0
    blt lbl_fn_805A4F84_00000614
lbl_fn_805A4F84_0000065C:
    lwz r0, 0x7e0(r27)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_805A4F84_00000680
    lwz r12, 0x0(r27)
    mr r3, r27
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
lbl_fn_805A4F84_00000680:
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805A507C(void)
{
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    stw r0, 0xd4(r1)
    addi r11, r1, 0x80
    stfd f31, 0xc0(r1)
    psq_st f31, 0xc8(r1), 0, 0
    stfd f30, 0xb0(r1)
    psq_st f30, 0xb8(r1), 0, 0
    stfd f29, 0xa0(r1)
    psq_st f29, 0xa8(r1), 0, 0
    stfd f28, 0x90(r1)
    psq_st f28, 0x98(r1), 0, 0
    stfd f27, 0x80(r1)
    psq_st f27, 0x88(r1), 0, 0
    bl _savegpr_27
    lwz r6, lbl_8087F4A0
    fmr f27, f1
    fmr f28, f2
    lfs f30, lbl_8088824C
    lwz r30, 0x48(r6)
    mr r27, r3
    lfs f31, lbl_80888270
    mr r28, r4
    mr r29, r5
    addi r31, r1, 0x8
    b lbl_fn_805A507C_000007F4
lbl_fn_805A507C_000006FC:
    lwz r0, 0x50(r30)
    cmpwi r0, 0x1
    bne lbl_fn_805A507C_000007F0
    lwz r12, 0x0(r30)
    mr r4, r30
    addi r3, r1, 0x20
    lwz r12, 0x54(r12)
    mtctr r12
    bctrl
    lfs f5, 0x28(r1)
    addi r3, r1, 0x14
    lfs f4, 0x8(r27)
    lfs f0, 0x0(r27)
    lfs f3, 0x20(r1)
    fsubs f4, f5, f4
    stfs f30, 0x18(r1)
    fsubs f0, f3, f0
    stfs f4, 0x1c(r1)
    stfs f0, 0x14(r1)
    bl fn_805F9940
    lwz r12, 0x0(r30)
    fmr f29, f1
    mr r3, r30
    lwz r12, 0x50(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_805A507C_00000774
    lfs f0, 0x48(r3)
    fsubs f29, f29, f0
lbl_fn_805A507C_00000774:
    fcmpo cr0, f29, f27
    cror eq, lt, eq
    bne lbl_fn_805A507C_000007F0
    addi r3, r1, 0x14
    mr r4, r3
    bl fn_805F98D0
    lfs f2, 0x8(r28)
    mr r4, r31
    psq_l f1, 0x0(r28), 0, 0
    addi r3, r1, 0x14
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x10(r1)
    stfs f30, 0xc(r1)
    bl fn_805F9990
    bl fn_8068AE9C
    frsp f3, f1
    fmuls f0, f31, f28
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_805A507C_000007F0
    addi r3, r1, 0x30
    li r4, 0x0
    li r5, 0x30
    bl memset
    stw r29, 0x30(r1)
    mr r3, r30
    addi r4, r1, 0x30
    lwz r12, 0x0(r30)
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
lbl_fn_805A507C_000007F0:
    lwz r30, 0x5c(r30)
lbl_fn_805A507C_000007F4:
    cmpwi r30, 0x0
    bne lbl_fn_805A507C_000006FC
    addi r11, r1, 0x80
    psq_l f31, 0xc8(r1), 0, 0
    lfd f31, 0xc0(r1)
    psq_l f30, 0xb8(r1), 0, 0
    lfd f30, 0xb0(r1)
    psq_l f29, 0xa8(r1), 0, 0
    lfd f29, 0xa0(r1)
    psq_l f28, 0x98(r1), 0, 0
    lfd f28, 0x90(r1)
    psq_l f27, 0x88(r1), 0, 0
    lfd f27, 0x80(r1)
    bl _restgpr_27
    lwz r0, 0xd4(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}

asm void fn_805A5224(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lfs f1, lbl_8088827C
    li r6, 0x0
    stw r0, 0x24(r1)
    li r7, 0x0
    lfs f2, lbl_80888280
    stw r31, 0x1c(r1)
    lis r31, lbl_807632A0@ha
    addi r31, r31, lbl_807632A0@l
    lfs f3, lbl_80888250
    stw r30, 0x18(r1)
    mr r30, r4
    addi r4, r31, 0x2d
    stw r29, 0x14(r1)
    mr r29, r3
    mr r3, r30
    addi r5, r29, 0x528
    bl fn_80087E9C
    lfs f1, lbl_80888284
    mr r3, r30
    lfs f2, lbl_80888288
    addi r4, r31, 0x36
    lfs f3, lbl_8088828C
    addi r5, r29, 0x534
    li r6, 0x0
    li r7, 0x0
    bl fn_80088724
    lfs f1, lbl_8088827C
    mr r3, r30
    lfs f2, lbl_80888280
    addi r4, r31, 0x3f
    lfs f3, lbl_80888290
    addi r5, r29, 0x540
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    lfs f1, lbl_8088824C
    mr r3, r30
    lfs f2, lbl_80888280
    addi r4, r31, 0x45
    lfs f3, lbl_80888294
    addi r5, r29, 0x568
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805A52F8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_807636B8@ha
    addi r31, r31, lbl_807636B8@l
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    li r29, 0x0
    stw r28, 0x10(r1)
    mr r28, r3
lbl_fn_805A52F8_00000940:
    lwz r4, 0x0(r31)
    mr r3, r28
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_805A52F8_0000095C
    mr r30, r29
    b lbl_fn_805A52F8_0000096C
lbl_fn_805A52F8_0000095C:
    addi r29, r29, 0x1
    addi r31, r31, 0x4
    cmpwi r29, 0x49
    blt lbl_fn_805A52F8_00000940
lbl_fn_805A52F8_0000096C:
    mr r3, r30
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805A5378(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r31, 0x20(r4)
    mr r3, r31
    bl fn_8020924C
    cmpwi r3, 0x0
    beq lbl_fn_805A5378_00001800
    lwz r30, 0x24(r3)
    li r3, 0x0
    cmplwi r30, 0x48
    bgt lbl_fn_805A5378_000017F0
    lis r4, jumptable_80797488@ha
    slwi r0, r30, 2
    addi r4, r4, jumptable_80797488@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    lis r5, lbl_807637DC@ha
    li r3, 0x15c8
    addi r5, r5, lbl_807637DC@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_805A5378_000017F0
    mr r4, r28
    mr r5, r29
    bl fn_80244228
    b lbl_fn_805A5378_000017F0
    lis r5, lbl_807637DC@ha
    li r3, 0x1568
    addi r5, r5, lbl_807637DC@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_805A5378_000017F0
    mr r4, r28
    mr r5, r31
    bl fn_80566424
    b lbl_fn_805A5378_000017F0
    lis r5, lbl_807637DC@ha
    li r3, 0x1568
    addi r5, r5, lbl_807637DC@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_805A5378_000017F0
    mr r4, r28
    mr r5, r29
    bl fn_802EE604
    b lbl_fn_805A5378_000017F0
    lis r5, lbl_807637DC@ha
    li r3, 0x15b0
    addi r5, r5, lbl_807637DC@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_805A5378_000017F0
    mr r4, r28
    mr r5, r29
    bl fn_8027C990
    b lbl_fn_805A5378_000017F0
    lis r5, lbl_807637DC@ha
    li r3, 0x15e0
    addi r5, r5, lbl_807637DC@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_805A5378_000017F0
    mr r4, r28
    mr r5, r29
    bl fn_80282AE8
    b lbl_fn_805A5378_000017F0
    lis r5, lbl_807637DC@ha
    li r3, 0x16b0
    addi r5, r5, lbl_807637DC@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_805A5378_000017F0
    mr r4, r28
    mr r5, r29
    bl fn_802D0038
    b lbl_fn_805A5378_000017F0
    lis r5, lbl_807637DC@ha
    li r3, 0x1860
    addi r5, r5, lbl_807637DC@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_805A5378_000017F0
    mr r4, r28
    mr r5, r29
    bl fn_802A4BBC
    b lbl_fn_805A5378_000017F0
    lis r5, lbl_807637DC@ha
    li r3, 0x1ad0
    addi r5, r5, lbl_807637DC@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_805A5378_000017F0
    mr r4, r28
    mr r5, r29
    bl fn_802AC364
    b lbl_fn_805A5378_000017F0
    lis r5, lbl_807637DC@ha
    li r3, 0x1860
    addi r5, r5, lbl_807637DC@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_805A5378_000017F0
    mr r4, r28
    mr r5, r29
    bl fn_802B23E8
    b lbl_fn_805A5378_000017F0
    lis r5, lbl_807637DC@ha
    li r3, 0x1608
    addi r5, r5, lbl_807637DC@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_805A5378_000017F0
    mr r4, r28
    mr r5, r29
    bl fn_802E8580
    b lbl_fn_805A5378_000017F0
    lis r5, lbl_807637DC@ha
    li r3, 0x1540
    addi r5, r5, lbl_807637DC@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_805A5378_000017F0
    mr r4, r28
    mr r5, r31
    bl fn_8026FC0C
    b lbl_fn_805A5378_000017F0
    lis r5, lbl_807637DC@ha
    li r3, 0x1710
    addi r5, r5, lbl_807637DC@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_805A5378_000017F0
    mr r4, r28
    mr r5, r29
    bl fn_80262938
    b lbl_fn_805A5378_000017F0
    lis r5, lbl_807637DC@ha
    li r3, 0x1718
    addi r5, r5, lbl_807637DC@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_805A5378_000017F0
    mr r4, r28
    mr r5, r31
    bl fn_802C0C38
    b lbl_fn_805A5378_000017F0
    lis r5, lbl_807637DC@ha
    li r3, 0x14d8
    addi r5, r5, lbl_807637DC@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_805A5378_000017F0
    mr r4, r28
    mr r5, r31
    bl fn_8024A004
    b lbl_fn_805A5378_000017F0
    lis r5, lbl_807637DC@ha
    li r3, 0x14e0
    addi r5, r5, lbl_807637DC@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_805A5378_000017F0
    mr r4, r28
    mr r5, r31
    bl fn_802476D0
    b lbl_fn_805A5378_000017F0
    lis r5, lbl_807637DC@ha
    li r3, 0x1700
    addi r5, r5, lbl_807637DC@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_805A5378_000017F0
    mr r4, r28
    mr r5, r29
    bl fn_802FC850
    b lbl_fn_805A5378_000017F0
    lis r5, lbl_807637DC@ha
    li r3, 0x1658
    addi r5, r5, lbl_807637DC@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_805A5378_000017F0
    mr r4, r28
    mr r5, r29
    bl fn_80305C74
    b lbl_fn_805A5378_000017F0
    lis r5, lbl_807637DC@ha
    li r3, 0x1610
    addi r5, r5, lbl_807637DC@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_805A5378_000017F0
    mr r4, r28
    mr r5, r29
    bl fn_8030A144
    b lbl_fn_805A5378_000017F0
    lis r5, lbl_807637DC@ha
    li r3, 0x15a8
    addi r5, r5, lbl_807637DC@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_805A5378_000017F0
    mr r4, r28
    mr r5, r29
    bl fn_8031EB3C
    b lbl_fn_805A5378_000017F0
    lis r5, lbl_807637DC@ha
    li r3, 0x1610
    addi r5, r5, lbl_807637DC@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_805A5378_000017F0
    mr r4, r28
    mr r5, r31
    bl fn_80322C68
    b lbl_fn_805A5378_000017F0
    lis r5, lbl_807637DC@ha
    li r3, 0x1518
    addi r5, r5, lbl_807637DC@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_805A5378_000017F0
    mr r4, r28
    mr r5, r29
    bl fn_802B77AC
    b lbl_fn_805A5378_000017F0
    lis r5, lbl_807637DC@ha
    li r3, 0x1558
    addi r5, r5, lbl_807637DC@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_805A5378_000017F0
    mr r4, r28
    mr r5, r31
    bl fn_802C7BE4
    b lbl_fn_805A5378_000017F0
    lis r5, lbl_807637DC@ha
    li r3, 0x1500
    addi r5, r5, lbl_807637DC@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_805A5378_000017F0
    mr r4, r28
    mr r5, r29
    bl fn_80546004
    b lbl_fn_805A5378_000017F0
    lis r5, lbl_807637DC@ha
    li r3, 0x15c0
    addi r5, r5, lbl_807637DC@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_805A5378_000017F0
    mr r4, r28
    mr r5, r29
    bl fn_80310330
    b lbl_fn_805A5378_000017F0
    lis r5, lbl_807637DC@ha
    li r3, 0x1620
    addi r5, r5, lbl_807637DC@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_805A5378_000017F0
    mr r4, r28
    mr r5, r29
    bl fn_802F6E64
    b lbl_fn_805A5378_000017F0
    lis r5, lbl_807637DC@ha
    li r3, 0x15d8
    addi r5, r5, lbl_807637DC@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_805A5378_000017F0
    mr r4, r28
    mr r5, r29
    bl fn_802F1524
    b lbl_fn_805A5378_000017F0
    lis r5, lbl_807637DC@ha
    li r3, 0x1968
    addi r5, r5, lbl_807637DC@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_805A5378_000017F0
    mr r4, r28
    mr r5, r29
    bl fn_8027278C
    b lbl_fn_805A5378_000017F0
    lis r5, lbl_807637DC@ha
    li r3, 0x16f0
    addi r5, r5, lbl_807637DC@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_805A5378_000017F0
    mr r4, r28
    mr r5, r29
    bl fn_8024A650
    b lbl_fn_805A5378_000017F0
    lis r5, lbl_807637DC@ha
    li r3, 0x19d0
    addi r5, r5, lbl_807637DC@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_805A5378_000017F0
    mr r4, r28
    mr r5, r29
    bl fn_80287E7C
    b lbl_fn_805A5378_000017F0
    lis r5, lbl_807637DC@ha
    li r3, 0x16d0
    addi r5, r5, lbl_807637DC@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_805A5378_000017F0
    mr r4, r28
    mr r5, r29
    bl fn_80293738
    b lbl_fn_805A5378_000017F0
    lis r5, lbl_807637DC@ha
    li r3, 0x16d0
    addi r5, r5, lbl_807637DC@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_805A5378_000017F0
    mr r4, r28
    mr r5, r29
    bl fn_8029CB00
    b lbl_fn_805A5378_000017F0
    lis r5, lbl_807637DC@ha
    li r3, 0x1558
    addi r5, r5, lbl_807637DC@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_805A5378_000017F0
    mr r4, r28
    mr r5, r29
    bl fn_80250A24
    b lbl_fn_805A5378_000017F0
    lis r5, lbl_807637DC@ha
    li r3, 0x16b8
    addi r5, r5, lbl_807637DC@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_805A5378_000017F0
    mr r4, r28
    mr r5, r29
    bl fn_802D7480
    b lbl_fn_805A5378_000017F0
    lis r5, lbl_807637DC@ha
    li r3, 0x1510
    addi r5, r5, lbl_807637DC@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_805A5378_000017F0
    mr r4, r28
    mr r5, r29
    bl fn_802E211C
    b lbl_fn_805A5378_000017F0
    lis r5, lbl_807637DC@ha
    li r3, 0x1660
    addi r5, r5, lbl_807637DC@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_805A5378_000017F0
    mr r4, r28
    mr r5, r29
    bl fn_802DDDB8
    b lbl_fn_805A5378_000017F0
    lis r5, lbl_807637DC@ha
    li r3, 0x1528
    addi r5, r5, lbl_807637DC@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_805A5378_000017F0
    mr r4, r28
    mr r5, r29
    bl fn_802E59E0
    b lbl_fn_805A5378_000017F0
    lis r5, lbl_807637DC@ha
    li r3, 0x14e0
    addi r5, r5, lbl_807637DC@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_805A5378_000017F0
    mr r4, r28
    mr r5, r29
    bl fn_801CC0AC
    b lbl_fn_805A5378_000017F0
    lis r5, lbl_807637DC@ha
    li r3, 0x1660
    addi r5, r5, lbl_807637DC@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_805A5378_000017F0
    mr r4, r28
    mr r5, r29
    bl fn_80313544
    b lbl_fn_805A5378_000017F0
    lis r5, lbl_807637DC@ha
    li r3, 0x1518
    addi r5, r5, lbl_807637DC@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_805A5378_000017F0
    mr r4, r28
    mr r5, r29
    bl fn_8025457C
    b lbl_fn_805A5378_000017F0
    lis r5, lbl_807637DC@ha
    li r3, 0x1598
    addi r5, r5, lbl_807637DC@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_805A5378_000017F0
    mr r4, r28
    mr r5, r29
    bl fn_8030DA20
    b lbl_fn_805A5378_000017F0
    lis r5, lbl_807637DC@ha
    li r3, 0x1520
    addi r5, r5, lbl_807637DC@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_805A5378_000017F0
    mr r4, r28
    mr r5, r29
    bl fn_8017CB9C
    b lbl_fn_805A5378_000017F0
    lis r5, lbl_807637DC@ha
    li r3, 0x1508
    addi r5, r5, lbl_807637DC@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_805A5378_000017F0
    mr r4, r28
    mr r5, r29
    bl fn_801805A4
    b lbl_fn_805A5378_000017F0
    lis r5, lbl_807637DC@ha
    li r3, 0x15b8
    addi r5, r5, lbl_807637DC@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_805A5378_000017F0
    mr r4, r28
    mr r5, r29
    bl fn_8035BEA4
    b lbl_fn_805A5378_000017F0
    lis r5, lbl_807637DC@ha
    li r3, 0x1ca0
    addi r5, r5, lbl_807637DC@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_805A5378_000017F0
    mr r4, r28
    mr r5, r29
    bl fn_803161F8
    b lbl_fn_805A5378_000017F0
    lis r5, lbl_807637DC@ha
    li r3, 0x2a50
    addi r5, r5, lbl_807637DC@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_805A5378_000017F0
    mr r4, r28
    mr r5, r29
    bl fn_80452F14
    b lbl_fn_805A5378_000017F0
    lis r5, lbl_807637DC@ha
    li r3, 0x14e8
    addi r5, r5, lbl_807637DC@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_805A5378_000017F0
    mr r4, r28
    mr r5, r29
    bl fn_80452710
    b lbl_fn_805A5378_000017F0
    lis r5, lbl_807637DC@ha
    li r3, 0x18f8
    addi r5, r5, lbl_807637DC@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_805A5378_000017F0
    mr r4, r28
    mr r5, r29
    bl fn_8045FAB0
    b lbl_fn_805A5378_000017F0
    lis r5, lbl_807637DC@ha
    li r3, 0x1990
    addi r5, r5, lbl_807637DC@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_805A5378_000017F0
    mr r4, r28
    mr r5, r29
    bl fn_80458270
    b lbl_fn_805A5378_000017F0
    lis r5, lbl_807637DC@ha
    li r3, 0x1710
    addi r5, r5, lbl_807637DC@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_805A5378_000017F0
    mr r4, r28
    mr r5, r29
    bl fn_802558B0
    b lbl_fn_805A5378_000017F0
    lis r5, lbl_807637DC@ha
    li r3, 0x15d0
    addi r5, r5, lbl_807637DC@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_805A5378_000017F0
    mr r4, r28
    mr r5, r29
    bl fn_8025C998
    b lbl_fn_805A5378_000017F0
    lis r5, lbl_807637DC@ha
    li r3, 0x17c8
    addi r5, r5, lbl_807637DC@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_805A5378_000017F0
    mr r4, r28
    mr r5, r29
    bl fn_8032DEA0
    b lbl_fn_805A5378_000017F0
    lis r5, lbl_807637DC@ha
    li r3, 0x1ca0
    addi r5, r5, lbl_807637DC@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_805A5378_000017F0
    mr r4, r28
    mr r5, r29
    bl fn_803161F8
    b lbl_fn_805A5378_000017F0
    lis r5, lbl_807637DC@ha
    li r3, 0x15d0
    addi r5, r5, lbl_807637DC@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_805A5378_000017F0
    mr r4, r28
    mr r5, r29
    bl fn_8031B0A8
    b lbl_fn_805A5378_000017F0
    lis r5, lbl_807637DC@ha
    li r3, 0x1558
    addi r5, r5, lbl_807637DC@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_805A5378_000017F0
    mr r4, r28
    mr r5, r29
    bl fn_802CCFD8
    b lbl_fn_805A5378_000017F0
    lis r5, lbl_807637DC@ha
    li r3, 0x1558
    addi r5, r5, lbl_807637DC@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_805A5378_000017F0
    mr r4, r28
    mr r5, r29
    bl fn_802CCB20
    b lbl_fn_805A5378_000017F0
    lis r5, lbl_807637DC@ha
    li r3, 0x1cf0
    addi r5, r5, lbl_807637DC@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_805A5378_000017F0
    mr r4, r28
    mr r5, r29
    bl fn_80345384
    b lbl_fn_805A5378_000017F0
    lis r5, lbl_807637DC@ha
    li r3, 0x1588
    addi r5, r5, lbl_807637DC@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_805A5378_000017F0
    mr r4, r28
    mr r5, r29
    bl fn_80334CD8
    b lbl_fn_805A5378_000017F0
    lis r5, lbl_807637DC@ha
    li r3, 0x1788
    addi r5, r5, lbl_807637DC@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_805A5378_000017F0
    mr r4, r28
    mr r5, r29
    bl fn_803388A4
    b lbl_fn_805A5378_000017F0
    lis r5, lbl_807637DC@ha
    li r3, 0x16c8
    addi r5, r5, lbl_807637DC@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_805A5378_000017F0
    mr r4, r28
    mr r5, r29
    bl fn_803559F8
    b lbl_fn_805A5378_000017F0
    lis r5, lbl_807637DC@ha
    li r3, 0x15e8
    addi r5, r5, lbl_807637DC@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_805A5378_000017F0
    mr r4, r28
    mr r5, r29
    bl fn_8025A060
    b lbl_fn_805A5378_000017F0
    lis r5, lbl_807637DC@ha
    li r3, 0x1558
    addi r5, r5, lbl_807637DC@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_805A5378_000017F0
    mr r4, r28
    mr r5, r29
    bl fn_8025FE60
    b lbl_fn_805A5378_000017F0
    lis r5, lbl_807637DC@ha
    li r3, 0x1698
    addi r5, r5, lbl_807637DC@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_805A5378_000017F0
    mr r4, r28
    mr r5, r29
    bl fn_80264DB4
    b lbl_fn_805A5378_000017F0
    lis r5, lbl_807637DC@ha
    li r3, 0x1938
    addi r5, r5, lbl_807637DC@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_805A5378_000017F0
    mr r4, r28
    mr r5, r29
    bl fn_802BA92C
    b lbl_fn_805A5378_000017F0
    lis r5, lbl_807637DC@ha
    li r3, 0x1668
    addi r5, r5, lbl_807637DC@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_805A5378_000017F0
    mr r4, r28
    mr r5, r29
    bl fn_8032C52C
    b lbl_fn_805A5378_000017F0
    lis r5, lbl_807637DC@ha
    li r3, 0x1508
    addi r5, r5, lbl_807637DC@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_805A5378_000017F0
    mr r4, r28
    mr r5, r29
    bl fn_80248E88
    b lbl_fn_805A5378_000017F0
    lis r5, lbl_807637DC@ha
    li r3, 0x14f8
    addi r5, r5, lbl_807637DC@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_805A5378_000017F0
    mr r4, r28
    mr r5, r29
    bl fn_803545E0
    b lbl_fn_805A5378_000017F0
    lis r5, lbl_807637DC@ha
    li r3, 0x19c8
    addi r5, r5, lbl_807637DC@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_805A5378_000017F0
    mr r4, r28
    mr r5, r29
    bl fn_80279860
    b lbl_fn_805A5378_000017F0
    lis r5, lbl_807637DC@ha
    li r3, 0x1630
    addi r5, r5, lbl_807637DC@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_805A5378_000017F0
    mr r4, r28
    mr r5, r29
    bl fn_802EC670
    b lbl_fn_805A5378_000017F0
    lis r5, lbl_807637DC@ha
    li r3, 0x14f8
    addi r5, r5, lbl_807637DC@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_805A5378_000017F0
    mr r4, r28
    mr r5, r29
    bl fn_803335C4
lbl_fn_805A5378_000017F0:
    cmpwi r3, 0x0
    beq lbl_fn_805A5378_00001800
    stw r30, 0x146c(r3)
    b lbl_fn_805A5378_00001804
lbl_fn_805A5378_00001800:
    li r3, 0x0
lbl_fn_805A5378_00001804:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805A620C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_805A620C_00001870
    lis r5, lbl_807637FC@ha
    li r3, 0xb8
    addi r5, r5, lbl_807637FC@l
    li r4, 0x1
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_805A620C_00001874
    mr r4, r31
    bl fn_805A6270
    b lbl_fn_805A620C_00001874
lbl_fn_805A620C_00001870:
    li r3, 0x0
lbl_fn_805A620C_00001874:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805A6270(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    stmw r27, 0x10c(r1)
    mr r27, r3
    bl fn_800D1D3C
    lis r3, lbl_807975B0@ha
    li r0, 0x0
    addi r3, r3, lbl_807975B0@l
    li r6, 0x1
    lis r4, fn_800D5738@ha
    lis r5, fn_800D5808@ha
    stw r3, 0x0(r27)
    addi r3, r27, 0x54
    addi r4, r4, fn_800D5738@l
    addi r5, r5, fn_800D5808@l
    stw r6, 0x48(r27)
    li r6, 0x30
    li r7, 0x2
    stw r0, 0x4c(r27)
    stw r0, 0x50(r27)
    bl fn_806958E0
    bl SCGetLanguage
    lis r4, lbl_807637FC@ha
    clrlwi r30, r3, 24
    li r28, 0x0
    li r29, 0x0
    addi r31, r4, lbl_807637FC@l
lbl_fn_805A6270_000018F8:
    cmplwi r30, 0x6
    bne lbl_fn_805A6270_00001918
    addi r3, r1, 0x8
    addi r4, r31, 0x1
    addi r5, r28, 0x41
    crclr 6
    bl sprintf
    b lbl_fn_805A6270_0000192C
lbl_fn_805A6270_00001918:
    addi r3, r1, 0x8
    addi r4, r31, 0x1b
    addi r5, r28, 0x41
    crclr 6
    bl sprintf
lbl_fn_805A6270_0000192C:
    add r3, r27, r29
    addi r4, r1, 0x8
    addi r3, r3, 0x54
    bl fn_800D5908
    addi r28, r28, 0x1
    addi r29, r29, 0x30
    cmpwi r28, 0x2
    blt lbl_fn_805A6270_000018F8
    lwz r3, lbl_8087F4E8
    li r0, 0x0
    stw r0, 0x88(r3)
    lwz r3, lbl_8087F4E8
    stw r0, 0x90(r3)
    lwz r3, lbl_8087F018
    cmpwi r3, 0x0
    beq lbl_fn_805A6270_00001970
    stw r0, 0x40e0(r3)
lbl_fn_805A6270_00001970:
    mr r3, r27
    lmw r27, 0x10c(r1)
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_805A6370(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_fn_805A6370_00001A00
    lis r4, lbl_807975B0@ha
    addi r4, r4, lbl_807975B0@l
    stw r4, 0x0(r3)
    lwz r4, lbl_8087F018
    cmpwi r4, 0x0
    beq lbl_fn_805A6370_000019CC
    li r0, 0x1
    stw r0, 0x40e0(r4)
lbl_fn_805A6370_000019CC:
    lis r4, fn_800D5808@ha
    li r5, 0x30
    addi r4, r4, fn_800D5808@l
    li r6, 0x2
    addi r3, r3, 0x54
    bl fn_806959D8
    mr r3, r30
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r31, 0x0
    ble lbl_fn_805A6370_00001A00
    mr r3, r30
    bl dtor_80084684
lbl_fn_805A6370_00001A00:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
