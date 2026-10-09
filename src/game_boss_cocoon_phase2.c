#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void dtor_80013D60(void);
extern void dtor_80084684(void);
extern void fn_8000D0F8(void);
extern void fn_8000D114(void);
extern void fn_8000D124(void);
extern void fn_8000DD0C(void);
extern void fn_8001047C(void);
extern void fn_80011034(void);
extern void fn_80011220(void);
extern void fn_80012C88(void);
extern void fn_800132EC(void);
extern void fn_80013338(void);
extern void fn_8003E4A4(void);
extern void fn_8004212C(void);
extern void fn_8004ECC0(void);
extern void fn_80051B14(void);
extern void fn_80051B70(void);
extern void fn_80056E40(void);
extern void fn_80057A64(void);
extern void fn_80059468(void);
extern void fn_8005B3CC(void);
extern void fn_8005B5F8(void);
extern void fn_8005B6E8(void);
extern void fn_8006AFF8(void);
extern void fn_8006CA80(void);
extern void fn_80087994(void);
extern void fn_8008937C(void);
extern void fn_800897D8(void);
extern void fn_8008BBD8(void);
extern void fn_8008CD1C(void);
extern void fn_80091CFC(void);
extern void fn_80092814(void);
extern void fn_80097C08(void);
extern void fn_800BFAC8(void);
extern void fn_800EC254(void);
extern void fn_800EC2C4(void);
extern void fn_800EC440(void);
extern void fn_800EC534(void);
extern void fn_800EC5BC(void);
extern void fn_800EC654(void);
extern void fn_800ED42C(void);
extern void fn_800ED4D8(void);
extern void fn_800ED4E0(void);
extern void fn_800EDFE8(void);
extern void fn_800F29D0(void);
extern void fn_800F8548(void);
extern void fn_8010F668(void);
extern void fn_80121F00(void);
extern void fn_80122550(void);
extern void fn_801240B4(void);
extern void fn_80129978(void);
extern void fn_80129A48(void);
extern void fn_8013655C(void);
extern void fn_80139F2C(void);
extern void fn_8013A13C(void);
extern void fn_80145334(void);
extern void fn_801479E4(void);
extern void fn_801495E8(void);
extern void fn_8014C540(void);
extern void fn_8015495C(void);
extern void fn_8016DA4C(void);
extern void fn_8016E970(void);
extern void fn_80178A6C(void);
extern void fn_8020A780(void);
extern void fn_80237518(void);
extern void fn_80237654(void);
extern void fn_802376D0(void);
extern void fn_802377B8(void);
extern void fn_8023780C(void);
extern void fn_8023781C(void);
extern void fn_80237874(void);
extern void fn_8026610C(void);
extern void fn_80266154(void);
extern void fn_80266164(void);
extern void fn_8026616C(void);
extern void fn_802AC550(void);
extern void fn_802BABC0(void);
extern void fn_803165E0(void);
extern void fn_80339F7C(void);
extern void fn_80339F84(void);
extern void fn_8035B694(void);
extern void fn_8035B78C(void);
extern void fn_80370AE4(void);
extern void fn_80373148(void);
extern void fn_803E3050(void);
extern void fn_804617A4(void);
extern void fn_80463174(void);
extern void fn_804635B4(void);
extern void fn_80463610(void);
extern void fn_804638A4(void);
extern void fn_80463C58(void);
extern void fn_80463DCC(void);
extern void fn_80463F20(void);
extern void fn_80464608(void);
extern void fn_80464CF0(void);
extern void fn_80465294(void);
extern void fn_804654F0(void);
extern void fn_804655AC(void);
extern void fn_80465B88(void);
extern void fn_80466370(void);
extern void fn_804666D8(void);
extern void fn_80466868(void);
extern void fn_80466B8C(void);
extern void fn_80468038(void);
extern void fn_804687B0(void);
extern void fn_80468A08(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473E8C(void);
extern void fn_80473F50(void);
extern void fn_804A04AC(void);
extern void fn_805F93C0(void);
extern void fn_805F98D0(void);
extern void fn_805F9940(void);
extern void fn_80680CF8(void);
extern void fn_80682428(void);
extern void fn_80682544(void);
extern void fn_806958E0(void);
extern void fn_806959D8(void);
extern void fn_80695B00(void);

/* External data declarations */
extern u8 jumptable_8078F934[];
extern u8 lbl_80754C24[];
extern u8 lbl_80754DE0[];
extern u8 lbl_80755188[];
extern u8 lbl_807772B0[];
extern u8 lbl_807772D0[];
extern u8 lbl_8078F920[];
extern u8 lbl_8078F928[];
extern u8 lbl_8078F978[];
extern u8 lbl_8078F980[];
extern u8 lbl_807C7030[];
extern u8 lbl_807C8A58[];

/* Small data declarations */
extern u32 lbl_8087D708;
extern u32 lbl_8087EE98;
extern u32 lbl_8087EF10;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F430;
extern u32 lbl_8087F490;
extern u32 lbl_8087F4A0;
extern u32 lbl_8087F500;
extern u32 lbl_8087F504;
extern u32 lbl_80886C30;
extern u32 lbl_80886C34;
extern u32 lbl_80886C50;
extern u32 lbl_80886C64;
extern u32 lbl_80886C6C;
extern u32 lbl_80886C78;
extern u32 lbl_80886C7C;
extern u32 lbl_80886D1C;
extern u32 lbl_80886D30;
extern u32 lbl_80886D4C;
extern u32 lbl_80886D50;
extern u32 lbl_80886D54;
extern u32 lbl_80886D58;
extern u32 lbl_80886D60;
extern u32 lbl_80886D64;
extern u32 lbl_80886D68;
extern u32 lbl_80886D6C;
extern u32 lbl_80886D70;
extern u32 lbl_80886D74;
extern u32 lbl_80886D78;
extern u32 lbl_80886D7C;

/* Function declarations */
void fn_8045ECC4(void);
void fn_8045EDEC(void);
void fn_8045F4CC(void);
void fn_8045F6A0(void);
void fn_8045F6E0(void);
void fn_8045F884(void);
void fn_8045F90C(void);
void fn_8045F914(void);
void fn_8045F990(void);
void fn_8045F998(void);
void fn_8045F9A0(void);
void fn_8045FAB0(void);
void fn_8045FE2C(void);
void fn_8045FE70(void);
void fn_80460374(void);
void fn_804603A0(void);
void fn_80460458(void);

asm void fn_8045ECC4(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    li r31, 0x0
    stw r30, 0x28(r1)
    mr r30, r3
    stw r31, 0x14bc(r3)
    stw r31, 0x14c0(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    mr r3, r30
    lwz r12, 0x0(r30)
    lwz r12, 0x48(r12)
    mtctr r12
    bctrl
    mr r3, r30
    bl fn_80178A6C
    mr r3, r30
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    bl fn_8015495C
    mr r3, r30
    bl fn_8016DA4C
    li r0, 0xc
    stw r0, 0x58c(r30)
    mr r3, r30
    li r4, 0x3
    bl fn_8016E970
    lfs f0, lbl_80886C30
    li r0, 0x1
    stw r0, 0x3fc(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80886C34
    li r4, 0x0
    stfs f0, 0x2fc(r30)
    li r5, 0x31
    lfs f2, lbl_80886C50
    li r6, 0x0
    stfs f0, 0x2e8(r30)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lis r3, lbl_807C7030@ha
    lfs f0, lbl_80886C34
    addi r3, r3, lbl_807C7030@l
    li r0, 0x5
    psq_l f1, 0x0(r3), 0, 0
    addi r4, r1, 0x8
    lfs f2, 0x8(r3)
    stfs f2, 0x57c(r30)
    psq_st f1, 0x574(r30), 0, 0
    stw r31, 0xc(r1)
    stw r31, 0x10(r1)
    stw r31, 0x14(r1)
    stw r31, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    stw r0, 0x8(r1)
    lwz r3, 0x18f8(r30)
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8045EDEC(void)
{
    nofralloc
    stwu r1, -0x280(r1)
    mflr r0
    stw r0, 0x284(r1)
    addi r11, r1, 0x250
    stfd f31, 0x270(r1)
    psq_st f31, 0x278(r1), 0, 0
    stfd f30, 0x260(r1)
    psq_st f30, 0x268(r1), 0, 0
    stfd f29, 0x250(r1)
    psq_st f29, 0x258(r1), 0, 0
    bl _savegpr_26
    lwz r26, lbl_8087F430
    mulli r6, r4, 0x14
    lwz r7, 0x62c(r3)
    li r0, 0x0
    lwz r8, 0x868(r26)
    li r5, -0x1
    add r7, r7, r6
    lfs f2, 0xc(r7)
    cmpwi r8, 0x3
    lfs f0, 0x10(r7)
    addi r6, r1, 0xe0
    psq_l f1, 0x4(r7), 0, 0
    mr r30, r3
    psq_st f1, 0x0(r6), 0, 0
    mr r31, r4
    stfs f2, 0xe8(r1)
    stfs f0, 0xec(r1)
    stw r5, 0x1e0(r1)
    stw r5, 0xf4(r1)
    stw r5, 0x114(r1)
    stw r0, 0x134(r1)
    stw r0, 0x154(r1)
    stw r0, 0x174(r1)
    stw r0, 0x194(r1)
    beq lbl_fn_8045EDEC_000001C8
    cmpwi r8, 0x1
    beq lbl_fn_8045EDEC_000001C8
    cmpwi r8, 0x4
    bne lbl_fn_8045EDEC_000007D8
lbl_fn_8045EDEC_000001C8:
    lfs f2, 0x7c(r26)
    addi r3, r1, 0x1d4
    psq_l f1, 0x74(r26), 0, 0
    addi r29, r1, 0x1c8
    psq_st f1, 0x0(r29), 0, 0
    frsp f0, f2
    mr r4, r3
    stfs f2, 0x1d0(r1)
    lfs f9, 0x1c8(r1)
    lfs f2, 0x88(r26)
    psq_l f1, 0x80(r26), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    fsubs f0, f2, f0
    lfs f7, 0x1cc(r1)
    lfs f10, 0x1d4(r1)
    lfs f8, 0x1d8(r1)
    fsubs f9, f10, f9
    stfs f0, 0x1dc(r1)
    fsubs f0, f8, f7
    stfs f9, 0x1d4(r1)
    stfs f0, 0x1d8(r1)
    bl fn_805F98D0
    lfs f8, 0x1d4(r1)
    addi r4, r1, 0xe0
    lfs f11, lbl_80886D4C
    addi r28, r1, 0xd0
    lfs f7, 0x1d8(r1)
    addi r3, r1, 0x30
    fmuls f9, f8, f11
    lfs f8, 0x1c8(r1)
    fmuls f10, f7, f11
    lfs f0, 0x1dc(r1)
    lfs f7, 0x1cc(r1)
    fmuls f11, f0, f11
    fadds f10, f10, f7
    lfs f0, 0x1d0(r1)
    fadds f9, f9, f8
    psq_l f1, 0x0(r4), 0, 0
    fadds f8, f11, f0
    lfs f2, 0xe8(r1)
    lfs f7, 0xec(r1)
    lfs f0, lbl_80886D50
    psq_st f1, 0x0(r28), 0, 0
    fmuls f0, f7, f0
    stfs f9, 0x1d4(r1)
    lfs f9, 0xd4(r1)
    stfs f10, 0x1d8(r1)
    lfs f7, 0xd0(r1)
    stfs f8, 0x1dc(r1)
    stfs f2, 0xd8(r1)
    stfs f0, 0xdc(r1)
    lfs f10, 0x7c(r26)
    lfs f8, 0x78(r26)
    lfs f0, 0x74(r26)
    fsubs f10, f2, f10
    fsubs f8, f9, f8
    fsubs f0, f7, f0
    stfs f10, 0x38(r1)
    stfs f0, 0x30(r1)
    stfs f8, 0x34(r1)
    bl fn_805F9940
    lfs f7, 0xec(r1)
    addi r27, r1, 0x200
    lfs f0, lbl_80886C34
    addi r4, r1, 0xc0
    fneg f8, f7
    stfs f0, 0xc8(r1)
    fmr f29, f1
    mr r3, r27
    stfs f8, 0xc0(r1)
    mr r5, r4
    stfs f8, 0xc4(r1)
    stfs f7, 0xb4(r1)
    stfs f7, 0xb8(r1)
    stfs f0, 0xbc(r1)
    psq_l f1, 0x13c(r26), 0, 0
    psq_l f2, 0x144(r26), 0, 0
    psq_l f3, 0x14c(r26), 0, 0
    psq_l f4, 0x154(r26), 0, 0
    psq_l f5, 0x15c(r26), 0, 0
    psq_l f6, 0x164(r26), 0, 0
    psq_st f6, 0x28(r27), 0, 0
    psq_st f2, 0x8(r27), 0, 0
    psq_st f4, 0x18(r27), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    psq_st f3, 0x10(r27), 0, 0
    psq_st f5, 0x20(r27), 0, 0
    stfs f0, 0x20c(r1)
    stfs f0, 0x21c(r1)
    stfs f0, 0x22c(r1)
    bl fn_805F93C0
    addi r4, r1, 0xb4
    mr r3, r27
    mr r5, r4
    bl fn_805F93C0
    lfs f7, 0xe8(r1)
    addi r3, r1, 0x78
    lfs f0, 0xc8(r1)
    addi r5, r1, 0xa8
    lfs f9, 0xe4(r1)
    fadds f10, f7, f0
    lfs f8, 0xc4(r1)
    lfs f7, 0xe0(r1)
    lfs f0, 0xc0(r1)
    fadds f8, f9, f8
    stfs f10, 0xb0(r1)
    fadds f0, f7, f0
    lwz r4, lbl_8087EFB4
    stfs f8, 0xac(r1)
    stfs f0, 0xa8(r1)
    bl fn_800BFAC8
    lfs f9, 0xe8(r1)
    addi r4, r1, 0x78
    lfs f8, 0xbc(r1)
    addi r6, r1, 0xa8
    lfs f7, 0xe4(r1)
    addi r3, r1, 0x6c
    fadds f8, f9, f8
    lfs f0, 0xb8(r1)
    psq_l f1, 0x0(r4), 0, 0
    addi r5, r1, 0x9c
    fadds f9, f7, f0
    lfs f2, 0x80(r1)
    lfs f7, 0xe0(r1)
    lfs f0, 0xb4(r1)
    psq_st f1, 0x0(r6), 0, 0
    fadds f0, f7, f0
    lwz r4, lbl_8087EFB4
    stfs f2, 0xb0(r1)
    stfs f0, 0x9c(r1)
    stfs f9, 0xa0(r1)
    stfs f8, 0xa4(r1)
    bl fn_800BFAC8
    addi r3, r1, 0x6c
    lfs f2, 0x74(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r4, r1, 0x9c
    psq_st f1, 0x0(r4), 0, 0
    mr r3, r29
    lfs f9, 0xac(r1)
    mr r4, r28
    lfs f8, 0xa0(r1)
    li r26, 0x0
    lfs f7, 0xa8(r1)
    fsubs f11, f9, f8
    lfs f0, 0x9c(r1)
    fadds f9, f9, f8
    lfs f8, lbl_80886C64
    fsubs f10, f7, f0
    stfs f2, 0xa4(r1)
    fabs f11, f11
    fabs f12, f10
    fadds f0, f7, f0
    frsp f10, f11
    fmuls f7, f8, f9
    fmuls f0, f8, f0
    fmuls f9, f8, f10
    stfs f7, 0x14(r1)
    frsp f11, f12
    stfs f0, 0x10(r1)
    fmuls f7, f8, f11
    stfs f9, 0xc(r1)
    stfs f7, 0x8(r1)
    bl fn_80051B70
    cmpwi r3, 0x0
    beq lbl_fn_8045EDEC_00000644
    lfs f2, 0x1d0(r1)
    addi r3, r1, 0x1b0
    stfs f2, 0x1b8(r1)
    addi r27, r1, 0x1bc
    psq_l f1, 0x0(r29), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    addi r3, r1, 0x24
    psq_l f1, 0x0(r28), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    lfs f2, 0xd8(r1)
    lfs f0, 0x1b8(r1)
    lfs f9, 0x1c0(r1)
    fsubs f10, f2, f0
    lfs f8, 0x1b4(r1)
    lfs f7, 0x1bc(r1)
    lfs f0, 0x1b0(r1)
    fsubs f8, f9, f8
    stfs f2, 0x1c4(r1)
    fsubs f0, f7, f0
    lfs f30, 0xdc(r1)
    stfs f8, 0x28(r1)
    stfs f0, 0x24(r1)
    stfs f10, 0x2c(r1)
    bl fn_805F9940
    fabs f7, f1
    lfs f0, lbl_80886C6C
    fmr f31, f1
    frsp f7, f7
    fcmpo cr0, f7, f0
    blt lbl_fn_8045EDEC_00000554
    lfs f7, 0x1bc(r1)
    mr r3, r27
    lfs f0, 0x1b0(r1)
    mr r4, r27
    lfs f9, 0x1c0(r1)
    fsubs f10, f7, f0
    lfs f8, 0x1b4(r1)
    lfs f7, 0x1c4(r1)
    lfs f0, 0x1b8(r1)
    fsubs f8, f9, f8
    stfs f10, 0x1bc(r1)
    fsubs f0, f7, f0
    stfs f8, 0x1c0(r1)
    stfs f0, 0x1c4(r1)
    bl fn_805F98D0
    fsubs f9, f31, f30
    lfs f8, 0x1bc(r1)
    lfs f7, 0x1c0(r1)
    lfs f0, 0x1c4(r1)
    fmuls f11, f8, f9
    lfs f8, 0x1b0(r1)
    fmuls f10, f7, f9
    lfs f7, 0x1b4(r1)
    fmuls f9, f0, f9
    lfs f0, 0x1b8(r1)
    fadds f8, f11, f8
    fadds f7, f10, f7
    fadds f0, f9, f0
    stfs f8, 0x1bc(r1)
    stfs f7, 0x1c0(r1)
    stfs f0, 0x1c4(r1)
lbl_fn_8045EDEC_00000554:
    lwz r3, lbl_8087EE98
    addi r5, r1, 0x1b0
    addi r6, r1, 0x1bc
    li r4, 0x0
    lis r7, 0x8000
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ECC0
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_8045EDEC_00000644
    lfs f7, 0x14(r1)
    addi r3, r1, 0xe0
    lfs f0, 0x10(r1)
    addi r4, r1, 0x60
    psq_l f1, 0x0(r3), 0, 0
    addi r7, r1, 0x90
    lfs f8, 0xb0(r1)
    addi r5, r1, 0x54
    lfs f2, 0xe8(r1)
    addi r6, r1, 0x8
    stfs f2, 0x68(r1)
    fmr f2, f8
    lwz r3, lbl_8087F490
    li r26, 0x1
    stfs f0, 0x90(r1)
    stfs f7, 0x94(r1)
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    fmr f1, f29
    stfs f8, 0x98(r1)
    stfs f2, 0x5c(r1)
    bl fn_803E3050
    lwz r3, lbl_8087F0A8
    lwz r0, 0xb0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8045EDEC_000005FC
    addi r3, r3, 0x48c
    li r4, 0x24
    bl fn_801240B4
    b lbl_fn_8045EDEC_00000600
lbl_fn_8045EDEC_000005FC:
    li r3, 0x1
lbl_fn_8045EDEC_00000600:
    cmpwi r3, 0x0
    beq lbl_fn_8045EDEC_00000644
    lwz r0, 0x18d0(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8045EDEC_00000644
    cmpwi r31, 0x3
    bge lbl_fn_8045EDEC_00000644
    mulli r0, r31, 0x1c
    lis r4, lbl_80754C24@ha
    lwz r3, lbl_8087F430
    li r5, 0x1
    addi r4, r4, lbl_80754C24@l
    add r4, r4, r0
    lwz r4, 0x10(r4)
    bl fn_80370AE4
    li r0, 0x1
    stw r0, 0x18d0(r30)
lbl_fn_8045EDEC_00000644:
    cmpwi r26, 0x0
    bne lbl_fn_8045EDEC_000007D8
    lfs f0, lbl_80886D4C
    fcmpo cr0, f29, f0
    bge lbl_fn_8045EDEC_000007D8
    addi r3, r1, 0x1c8
    lfs f2, 0x1d0(r1)
    stfs f2, 0x1a0(r1)
    addi r4, r1, 0xd0
    psq_l f1, 0x0(r3), 0, 0
    addi r5, r1, 0x198
    psq_st f1, 0x0(r5), 0, 0
    addi r27, r1, 0x1a4
    psq_l f1, 0x0(r4), 0, 0
    addi r3, r1, 0x18
    psq_st f1, 0x0(r27), 0, 0
    lfs f2, 0xd8(r1)
    lfs f0, 0x1a0(r1)
    lfs f9, 0x1a8(r1)
    fsubs f10, f2, f0
    lfs f8, 0x19c(r1)
    lfs f7, 0x1a4(r1)
    lfs f0, 0x198(r1)
    fsubs f8, f9, f8
    stfs f2, 0x1ac(r1)
    fsubs f0, f7, f0
    lfs f30, 0xdc(r1)
    stfs f8, 0x1c(r1)
    stfs f0, 0x18(r1)
    stfs f10, 0x20(r1)
    bl fn_805F9940
    fabs f7, f1
    lfs f0, lbl_80886C6C
    fmr f31, f1
    frsp f7, f7
    fcmpo cr0, f7, f0
    blt lbl_fn_8045EDEC_00000754
    lfs f7, 0x1a4(r1)
    mr r3, r27
    lfs f0, 0x198(r1)
    mr r4, r27
    lfs f9, 0x1a8(r1)
    fsubs f10, f7, f0
    lfs f8, 0x19c(r1)
    lfs f7, 0x1ac(r1)
    lfs f0, 0x1a0(r1)
    fsubs f8, f9, f8
    stfs f10, 0x1a4(r1)
    fsubs f0, f7, f0
    stfs f8, 0x1a8(r1)
    stfs f0, 0x1ac(r1)
    bl fn_805F98D0
    fsubs f9, f31, f30
    lfs f8, 0x1a4(r1)
    lfs f7, 0x1a8(r1)
    lfs f0, 0x1ac(r1)
    fmuls f11, f8, f9
    lfs f8, 0x198(r1)
    fmuls f10, f7, f9
    lfs f7, 0x19c(r1)
    fmuls f9, f0, f9
    lfs f0, 0x1a0(r1)
    fadds f8, f11, f8
    fadds f7, f10, f7
    fadds f0, f9, f0
    stfs f8, 0x1a4(r1)
    stfs f7, 0x1a8(r1)
    stfs f0, 0x1ac(r1)
lbl_fn_8045EDEC_00000754:
    lwz r3, lbl_8087EE98
    addi r5, r1, 0x198
    addi r6, r1, 0x1a4
    li r4, 0x0
    lis r7, 0x8000
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ECC0
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_8045EDEC_000007D8
    lfs f7, 0x14(r1)
    addi r3, r1, 0xe0
    lfs f0, 0x10(r1)
    addi r4, r1, 0x48
    psq_l f1, 0x0(r3), 0, 0
    addi r7, r1, 0x84
    lfs f8, 0xb0(r1)
    addi r5, r1, 0x3c
    lfs f2, 0xe8(r1)
    addi r6, r1, 0x8
    stfs f2, 0x50(r1)
    fmr f2, f8
    lwz r3, lbl_8087F490
    stfs f0, 0x84(r1)
    stfs f7, 0x88(r1)
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    fmr f1, f29
    stfs f8, 0x8c(r1)
    stfs f2, 0x44(r1)
    bl fn_803E3050
lbl_fn_8045EDEC_000007D8:
    addi r11, r1, 0x250
    psq_l f31, 0x278(r1), 0, 0
    lfd f31, 0x270(r1)
    psq_l f30, 0x268(r1), 0, 0
    lfd f30, 0x260(r1)
    psq_l f29, 0x258(r1), 0, 0
    lfd f29, 0x250(r1)
    bl _restgpr_26
    lwz r0, 0x284(r1)
    mtlr r0
    addi r1, r1, 0x280
    blr
}

asm void fn_8045F4CC(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    addi r11, r1, 0x80
    stfd f31, 0x80(r1)
    psq_st f31, 0x88(r1), 0, 0
    bl _savegpr_25
    lwz r4, lbl_8087F4A0
    addi r28, r1, 0x38
    lfs f31, lbl_80886C34
    mr r25, r3
    lwz r27, 0x48(r4)
    addi r29, r1, 0x8
    li r30, 0x0
    li r31, 0x4
    b lbl_fn_8045F4CC_000009B4
lbl_fn_8045F4CC_00000848:
    lwz r0, 0x50(r27)
    cmpwi r0, 0x1
    bne lbl_fn_8045F4CC_000009B0
    lwz r12, 0x0(r27)
    mr r3, r27
    lwz r12, 0x5c(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8045F4CC_000009B0
    lwz r12, 0x0(r27)
    mr r3, r27
    lwz r12, 0x50(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8045F4CC_000009B0
    psq_l f1, 0x3c(r3), 0, 0
    mr r4, r28
    lfs f2, 0x44(r3)
    li r26, 0x0
    stfs f2, 0x10(r1)
    psq_st f1, 0x0(r29), 0, 0
    lfs f0, 0x48(r3)
    mr r3, r29
    stfs f0, 0x14(r1)
    psq_l f1, 0x5f4(r25), 0, 0
    lfs f2, 0x5fc(r25)
    stfs f2, 0x40(r1)
    psq_st f1, 0x0(r28), 0, 0
    psq_l f1, 0x600(r25), 0, 0
    lfs f2, 0x608(r25)
    stfs f2, 0x4c(r1)
    psq_st f1, 0xc(r28), 0, 0
    lfs f0, 0x60c(r25)
    stfs f0, 0x50(r1)
    bl fn_80051B14
    cmpwi r3, 0x0
    beq lbl_fn_8045F4CC_000008E8
    li r26, 0x1
lbl_fn_8045F4CC_000008E8:
    addi r5, r25, 0x174c
    lfs f2, 0x1754(r25)
    psq_l f1, 0x0(r5), 0, 0
    mr r4, r28
    psq_st f1, 0x0(r28), 0, 0
    addi r3, r1, 0x8
    stfs f2, 0x40(r1)
    psq_l f1, 0xc(r5), 0, 0
    lfs f2, 0x1760(r25)
    stfs f2, 0x4c(r1)
    psq_st f1, 0xc(r28), 0, 0
    lfs f0, 0x1764(r25)
    stfs f0, 0x50(r1)
    bl fn_80051B14
    cmpwi r3, 0x0
    beq lbl_fn_8045F4CC_0000092C
    li r26, 0x1
lbl_fn_8045F4CC_0000092C:
    addi r5, r25, 0x17fc
    lfs f2, 0x1804(r25)
    psq_l f1, 0x0(r5), 0, 0
    mr r4, r28
    psq_st f1, 0x0(r28), 0, 0
    addi r3, r1, 0x8
    stfs f2, 0x40(r1)
    psq_l f1, 0xc(r5), 0, 0
    lfs f2, 0x1810(r25)
    stfs f2, 0x4c(r1)
    psq_st f1, 0xc(r28), 0, 0
    lfs f0, 0x1814(r25)
    stfs f0, 0x50(r1)
    bl fn_80051B14
    cmpwi r3, 0x0
    beq lbl_fn_8045F4CC_00000970
    li r26, 0x1
lbl_fn_8045F4CC_00000970:
    cmpwi r26, 0x0
    beq lbl_fn_8045F4CC_000009B0
    stw r30, 0x1c(r1)
    mr r3, r27
    addi r4, r1, 0x18
    stw r30, 0x20(r1)
    stw r30, 0x24(r1)
    stw r30, 0x28(r1)
    stfs f31, 0x2c(r1)
    stfs f31, 0x30(r1)
    stfs f31, 0x34(r1)
    stw r31, 0x18(r1)
    lwz r12, 0x0(r27)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
lbl_fn_8045F4CC_000009B0:
    lwz r27, 0x5c(r27)
lbl_fn_8045F4CC_000009B4:
    cmpwi r27, 0x0
    bne lbl_fn_8045F4CC_00000848
    addi r11, r1, 0x80
    psq_l f31, 0x88(r1), 0, 0
    lfd f31, 0x80(r1)
    bl _restgpr_25
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_8045F6A0(void)
{
    nofralloc
    lwz r0, 0x58c(r3)
    cmpwi r0, 0xb
    bne lbl_fn_8045F6A0_00000A14
    lfs f1, 0x2e4(r3)
    lfs f0, lbl_80886D30
    fcmpo cr0, f0, f1
    cror eq, lt, eq
    bne lbl_fn_8045F6A0_00000A14
    lfs f0, lbl_80886D54
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_8045F6A0_00000A14
    li r3, 0x1
    blr
lbl_fn_8045F6A0_00000A14:
    li r3, 0x0
    blr
}

asm void fn_8045F6E0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    lis r5, lbl_80754DE0@ha
    stw r0, 0x44(r1)
    addi r5, r5, lbl_80754DE0@l
    stw r31, 0x3c(r1)
    mr r31, r4
    addi r4, r5, 0xe3
    li r5, 0x0
    stw r30, 0x38(r1)
    mr r30, r3
    addi r3, r3, 0xb0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8045F6E0_00000A60
    li r4, 0x0
    b lbl_fn_8045F6E0_00000A6C
lbl_fn_8045F6E0_00000A60:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r4, r3, r0
lbl_fn_8045F6E0_00000A6C:
    lfs f0, 0x1c(r4)
    lis r3, lbl_80754DE0@ha
    lfs f3, 0xc(r4)
    addi r6, r1, 0x2c
    lfs f2, 0x2c(r4)
    addi r3, r3, lbl_80754DE0@l
    stfs f3, 0x2c(r1)
    addi r4, r3, 0xf1
    addi r3, r30, 0xb0
    li r5, 0x0
    stfs f0, 0x30(r1)
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x34(r1)
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x8(r31)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8045F6E0_00000ABC
    li r4, 0x0
    b lbl_fn_8045F6E0_00000AC8
lbl_fn_8045F6E0_00000ABC:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r4, r3, r0
lbl_fn_8045F6E0_00000AC8:
    lfs f0, 0x1c(r4)
    lis r3, lbl_80754DE0@ha
    lfs f3, 0xc(r4)
    addi r6, r1, 0x20
    lfs f2, 0x2c(r4)
    addi r3, r3, lbl_80754DE0@l
    stfs f3, 0x20(r1)
    addi r4, r3, 0xf8
    addi r3, r30, 0xb0
    li r5, 0x0
    stfs f0, 0x24(r1)
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x28(r1)
    psq_st f1, 0xc(r31), 0, 0
    stfs f2, 0x14(r31)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8045F6E0_00000B18
    li r4, 0x0
    b lbl_fn_8045F6E0_00000B24
lbl_fn_8045F6E0_00000B18:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r4, r3, r0
lbl_fn_8045F6E0_00000B24:
    lfs f0, 0x1c(r4)
    lis r3, lbl_80754DE0@ha
    lfs f3, 0xc(r4)
    addi r6, r1, 0x14
    lfs f2, 0x2c(r4)
    addi r3, r3, lbl_80754DE0@l
    stfs f3, 0x14(r1)
    addi r4, r3, 0x97
    addi r3, r30, 0xb0
    li r5, 0x0
    stfs f0, 0x18(r1)
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x1c(r1)
    psq_st f1, 0x18(r31), 0, 0
    stfs f2, 0x20(r31)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8045F6E0_00000B74
    li r4, 0x0
    b lbl_fn_8045F6E0_00000B80
lbl_fn_8045F6E0_00000B74:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r4, r3, r0
lbl_fn_8045F6E0_00000B80:
    lfs f0, 0x1c(r4)
    addi r3, r1, 0x8
    lfs f3, 0xc(r4)
    lfs f2, 0x2c(r4)
    stfs f3, 0x8(r1)
    stfs f0, 0xc(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x24(r31), 0, 0
    stfs f2, 0x2c(r31)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r0, 0x44(r1)
    stfs f2, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8045F884(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_80754DE0@ha
    stw r0, 0x14(r1)
    addi r5, r5, lbl_80754DE0@l
    stw r31, 0xc(r1)
    mr r31, r4
    addi r4, r5, 0x9c
    li r5, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    addi r3, r31, 0xb0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8045F884_00000C04
    li r3, 0x0
    b lbl_fn_8045F884_00000C10
lbl_fn_8045F884_00000C04:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r3, r3, r0
lbl_fn_8045F884_00000C10:
    lfs f2, 0x1c(r3)
    lfs f0, lbl_80886D1C
    lfs f1, 0x2c(r3)
    lfs f3, 0xc(r3)
    fadds f0, f2, f0
    stfs f3, 0x0(r30)
    stfs f1, 0x8(r30)
    stfs f0, 0x4(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8045F90C(void)
{
    nofralloc
    lfs f1, lbl_80886C7C
    blr
}

asm void fn_8045F914(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_8078F920@ha
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    addi r3, r4, 0xb0
    addi r4, r5, lbl_8078F920@l
    li r5, 0x0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8045F914_00000C90
    li r3, 0x0
    b lbl_fn_8045F914_00000C9C
lbl_fn_8045F914_00000C90:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r3, r3, r0
lbl_fn_8045F914_00000C9C:
    lfs f0, 0x2c(r3)
    lfs f1, 0x1c(r3)
    lfs f2, 0xc(r3)
    stfs f2, 0x0(r30)
    stfs f1, 0x4(r30)
    stfs f0, 0x8(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8045F990(void)
{
    nofralloc
    lfs f1, lbl_80886D58
    blr
}

asm void fn_8045F998(void)
{
    nofralloc
    lfs f1, lbl_80886C78
    blr
}

asm void fn_8045F9A0(void)
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
    beq lbl_fn_8045F9A0_00000DCC
    addic. r0, r3, 0x1980
    beq lbl_fn_8045F9A0_00000D28
    lwz r4, 0x1980(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8045F9A0_00000D28
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_8045F9A0_00000D28
    bl fn_800897D8
lbl_fn_8045F9A0_00000D28:
    addic. r31, r29, 0x196c
    beq lbl_fn_8045F9A0_00000D48
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_8045F9A0_00000D48
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8045F9A0_00000D48:
    addic. r3, r29, 0x1964
    beq lbl_fn_8045F9A0_00000D58
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8045F9A0_00000D58:
    addic. r3, r29, 0x18fc
    beq lbl_fn_8045F9A0_00000D68
    li r4, 0x0
    bl fn_80056E40
lbl_fn_8045F9A0_00000D68:
    lis r4, fn_80059468@ha
    addi r3, r29, 0x1500
    addi r4, r4, fn_80059468@l
    li r5, 0x58
    li r6, 0xb
    bl fn_806959D8
    addic. r31, r29, 0x14f0
    beq lbl_fn_8045F9A0_00000DA0
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_8045F9A0_00000DA0
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8045F9A0_00000DA0:
    addic. r3, r29, 0x14b0
    beq lbl_fn_8045F9A0_00000DB0
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8045F9A0_00000DB0:
    mr r3, r29
    li r4, 0x0
    bl fn_8035B78C
    cmpwi r30, 0x0
    ble lbl_fn_8045F9A0_00000DCC
    mr r3, r29
    bl dtor_80084684
lbl_fn_8045F9A0_00000DCC:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8045FAB0(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    stw r31, 0x10c(r1)
    stw r30, 0x108(r1)
    stw r29, 0x104(r1)
    mr r29, r5
    stw r28, 0x100(r1)
    mr r28, r3
    lwz r5, 0x20(r5)
    bl fn_8035B694
    lis r4, lbl_8078F980@ha
    addi r3, r28, 0x14b0
    addi r4, r4, lbl_8078F980@l
    stw r4, 0x0(r28)
    bl fn_8006CA80
    lfs f1, lbl_80886D60
    li r31, 0x0
    stw r31, 0x14b8(r28)
    addi r3, r28, 0x14d4
    fmr f2, f1
    fmr f3, f1
    stw r31, 0x14bc(r28)
    stw r31, 0x14c0(r28)
    stw r31, 0x14c4(r28)
    stw r31, 0x14c8(r28)
    stw r31, 0x14cc(r28)
    bl fn_8000D114
    lfs f1, lbl_80886D60
    addi r3, r28, 0x14e0
    fmr f2, f1
    fmr f3, f1
    bl fn_8000D114
    stw r31, 0x14ec(r28)
    addi r3, r28, 0x14f8
    bl fn_80057A64
    addi r3, r28, 0x1504
    bl fn_8045FE2C
    li r0, 0x1
    stw r31, 0x1554(r28)
    addi r3, r28, 0x155c
    stw r0, 0x1558(r28)
    bl fn_80057A64
    addi r3, r28, 0x1568
    bl fn_80057A64
    stw r31, 0x1574(r28)
    addi r3, r28, 0x1578
    bl fn_803165E0
    lfs f1, lbl_80886D60
    addi r3, r28, 0x15b0
    stw r31, 0x15a8(r28)
    fmr f2, f1
    fmr f3, f1
    bl fn_8000D114
    lfs f1, lbl_80886D60
    addi r3, r28, 0x15bc
    fmr f2, f1
    fmr f3, f1
    bl fn_8000D114
    lfs f1, lbl_80886D60
    addi r3, r28, 0x15cc
    stw r31, 0x15c8(r28)
    fmr f2, f1
    fmr f3, f1
    bl fn_8000D114
    lis r4, fn_802AC550@ha
    lis r5, fn_80059468@ha
    addi r3, r28, 0x15d8
    li r6, 0x58
    addi r4, r4, fn_802AC550@l
    addi r5, r5, fn_80059468@l
    li r7, 0x5
    bl fn_806958E0
    addi r3, r28, 0x1790
    bl fn_802377B8
    addi r3, r28, 0x179c
    bl fn_802377B8
    addi r3, r28, 0x17a8
    bl fn_802AC550
    stw r31, 0x1800(r28)
    addi r3, r28, 0x1804
    bl fn_80057A64
    addi r3, r28, 0x1810
    bl fn_80057A64
    addi r3, r28, 0x1824
    bl fn_80237518
    addi r3, r28, 0x1830
    bl fn_802377B8
    addi r3, r28, 0x183c
    bl fn_80237518
    addi r3, r28, 0x1848
    bl fn_80237518
    addi r3, r28, 0x1858
    bl fn_803165E0
    addi r3, r28, 0x1888
    bl fn_803165E0
    addi r3, r28, 0x18b8
    bl fn_803165E0
    stw r31, 0x18ec(r28)
    addi r3, r28, 0x18f0
    bl fn_802BABC0
    lwz r0, 0x12a4(r28)
    lis r30, lbl_80755188@ha
    stw r31, 0x18f4(r28)
    addi r3, r1, 0x2c
    oris r0, r0, 0x40
    addi r4, r30, lbl_80755188@l
    stw r0, 0x12a4(r28)
    bl fn_8003E4A4
    addi r30, r30, lbl_80755188@l
    addi r3, r1, 0x20
    addi r4, r30, 0x18
    bl fn_8003E4A4
    addi r3, r1, 0x14
    addi r4, r29, 0x2c
    bl fn_8003E4A4
    addi r3, r1, 0x74
    addi r4, r30, 0x2b
    li r5, 0x0
    li r6, 0x0
    bl fn_800EC440
    addi r3, r1, 0xd4
    addi r4, r1, 0x14
    addi r5, r1, 0x74
    bl fn_800EC2C4
    addi r3, r1, 0x74
    li r4, -0x1
    bl fn_800EC534
    addi r3, r1, 0x98
    addi r4, r1, 0xd4
    bl fn_800EC654
    b lbl_fn_8045FAB0_00001040
lbl_fn_8045FAB0_00000FFC:
    addi r3, r1, 0x98
    bl fn_800ED4D8
    bl fn_8004212C
    addi r4, r30, 0x2d
    li r5, 0x8
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_8045FAB0_00001038
    addi r3, r1, 0x98
    bl fn_800ED4D8
    bl fn_8004212C
    mr r4, r3
    addi r3, r1, 0x20
    addi r4, r4, 0x8
    bl fn_8020A780
lbl_fn_8045FAB0_00001038:
    addi r3, r1, 0x98
    bl fn_800ED4E0
lbl_fn_8045FAB0_00001040:
    addi r3, r1, 0x38
    addi r4, r1, 0xd4
    bl fn_800EDFE8
    addi r3, r1, 0x98
    addi r4, r1, 0x38
    bl fn_800EC254
    mr r31, r3
    addi r3, r1, 0x38
    li r4, -0x1
    bl fn_800ED42C
    cmpwi r31, 0x0
    bne lbl_fn_8045FAB0_00000FFC
    addi r3, r1, 0x98
    li r4, -0x1
    bl fn_800ED42C
    addi r3, r1, 0x8
    addi r4, r1, 0x2c
    addi r5, r1, 0x20
    bl fn_8006AFF8
    addi r3, r1, 0x8
    bl fn_8004212C
    lwz r12, 0x14b0(r28)
    mr r4, r3
    addi r3, r28, 0x14b0
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lis r31, lbl_80755188@ha
    addi r3, r28, 0x1790
    addi r31, r31, lbl_80755188@l
    addi r4, r31, 0x36
    bl fn_8023780C
    addi r3, r28, 0x179c
    addi r4, r31, 0x44
    bl fn_8023780C
    addi r3, r28, 0x1824
    addi r4, r31, 0x52
    bl fn_80237654
    addi r3, r28, 0x1830
    addi r4, r31, 0x63
    bl fn_8023780C
    addi r3, r28, 0x183c
    addi r4, r31, 0x71
    bl fn_80237654
    addi r3, r28, 0x1848
    addi r4, r31, 0x82
    bl fn_80237654
    lwz r0, 0x14a8(r28)
    addi r3, r1, 0x8
    li r4, -0x1
    oris r0, r0, 0x8000
    stw r0, 0x14a8(r28)
    bl dtor_80013D60
    addi r3, r1, 0xd4
    li r4, -0x1
    bl fn_800EC5BC
    addi r3, r1, 0x14
    li r4, -0x1
    bl dtor_80013D60
    addi r3, r1, 0x20
    li r4, -0x1
    bl dtor_80013D60
    addi r3, r1, 0x2c
    li r4, -0x1
    bl dtor_80013D60
    lwz r31, 0x10c(r1)
    mr r3, r28
    lwz r30, 0x108(r1)
    lwz r29, 0x104(r1)
    lwz r28, 0x100(r1)
    lwz r0, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_8045FE2C(void)
{
    nofralloc
    lfs f0, lbl_80886D60
    li r0, 0x0
    stw r0, 0x0(r3)
    stfs f0, 0x4(r3)
    stw r0, 0x20(r3)
    stw r0, 0x24(r3)
    stw r0, 0x28(r3)
    stw r0, 0x2c(r3)
    stw r0, 0x30(r3)
    stw r0, 0x34(r3)
    stw r0, 0x38(r3)
    stw r0, 0x3c(r3)
    stw r0, 0x40(r3)
    stw r0, 0x44(r3)
    stw r0, 0x48(r3)
    stw r0, 0x4c(r3)
    blr
}

asm void fn_8045FE70(void)
{
    nofralloc
    stwu r1, -0x780(r1)
    mflr r0
    stw r0, 0x784(r1)
    stw r31, 0x77c(r1)
    mr r31, r3
    stw r30, 0x778(r1)
    stw r29, 0x774(r1)
    bl fn_8013655C
    cmpwi r3, 0x0
    bne lbl_fn_8045FE70_00001690
    addi r3, r31, 0x14b0
    bl fn_80473F50
    cmpwi r3, 0x0
    bne lbl_fn_8045FE70_00001690
    addi r3, r31, 0x1790
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_8045FE70_00001690
    addi r3, r31, 0x179c
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_8045FE70_00001690
    addi r3, r31, 0x1824
    bl fn_802376D0
    cmpwi r3, 0x0
    bne lbl_fn_8045FE70_00001690
    addi r3, r31, 0x1830
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_8045FE70_00001690
    addi r3, r31, 0x183c
    bl fn_802376D0
    cmpwi r3, 0x0
    bne lbl_fn_8045FE70_00001690
    addi r3, r31, 0x1848
    bl fn_802376D0
    cmpwi r3, 0x0
    bne lbl_fn_8045FE70_00001690
    lwz r4, 0x7ec(r31)
    lis r3, lbl_80755188@ha
    lwz r0, 0x18f0(r31)
    addi r3, r3, lbl_80755188@l
    ori r4, r4, 0x1c0
    oris r4, r4, 0x1
    cmpwi r0, 0x0
    ori r0, r4, 0xc219
    oris r0, r0, 0x380
    stw r0, 0x7ec(r31)
    addi r4, r3, 0x93
    bne lbl_fn_8045FE70_00001290
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_8045FE70_00001290
    addi r3, r3, 0x10
    bl fn_8008937C
    stw r3, 0x18f0(r31)
    b lbl_fn_8045FE70_00001294
lbl_fn_8045FE70_00001290:
    li r3, 0x0
lbl_fn_8045FE70_00001294:
    lis r4, lbl_80755188@ha
    addi r5, r31, 0x18f4
    addi r4, r4, lbl_80755188@l
    li r6, 0x0
    addi r4, r4, 0xa7
    li r7, 0x0
    bl fn_80087994
    addi r3, r31, 0x14b0
    bl fn_80470580
    cmpwi r3, 0x0
    beq lbl_fn_8045FE70_0000137C
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_8045FE70_0000137C
    lwz r0, 0x10d8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8045FE70_0000137C
    addi r3, r31, 0x14b0
    bl fn_8047059C
    mr r29, r3
    addi r3, r31, 0x14b0
    bl fn_80470580
    lis r4, lbl_807772D0@ha
    li r0, 0x0
    addi r4, r4, lbl_807772D0@l
    stw r4, 0x138(r1)
    mr r30, r3
    addi r3, r1, 0x148
    stw r0, 0x13c(r1)
    li r4, 0x0
    li r5, 0x400
    stw r0, 0x140(r1)
    stw r0, 0x144(r1)
    stw r0, 0x768(r1)
    bl memset
    addi r3, r1, 0x748
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x138(r1)
    mr r4, r30
    mr r5, r29
    addi r3, r1, 0x138
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0x138
    addi r4, r4, lbl_807772B0@l
    stw r4, 0x138(r1)
    la r4, lbl_8087D708
    bl fn_8005B6E8
lbl_fn_8045FE70_00001364:
    addi r3, r1, 0x138
    bl fn_8005B3CC
    addi r3, r1, 0x138
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_8045FE70_00001364
lbl_fn_8045FE70_0000137C:
    lwz r6, 0x15e0(r31)
    li r5, 0x98
    lwz r3, 0x1638(r31)
    lis r4, lbl_8078F928@ha
    lwz r0, 0x1690(r31)
    ori r10, r6, 0x3
    lwz r6, 0x16e8(r31)
    ori r9, r3, 0x3
    ori r8, r0, 0x3
    lwz r0, 0x17b0(r31)
    lwz r11, 0x5c0(r31)
    ori r7, r6, 0x3
    lwz r3, 0x1740(r31)
    clrrwi r0, r0, 1
    clrlwi r12, r11, 1
    clrlwi r11, r10, 1
    clrlwi r10, r9, 1
    clrlwi r9, r8, 1
    ori r6, r3, 0x3
    clrlwi r8, r7, 1
    lfs f0, lbl_80886D64
    clrlwi r7, r6, 1
    lwz r3, 0x54c(r31)
    ori r0, r0, 0x2
    stfs f0, 0x56c(r31)
    ori r6, r3, 0x200
    li r3, 0x0
    stw r12, 0x5c0(r31)
    stw r31, 0x15e4(r31)
    stw r11, 0x15e0(r31)
    stw r31, 0x163c(r31)
    stw r10, 0x1638(r31)
    stw r31, 0x1694(r31)
    stw r9, 0x1690(r31)
    stw r31, 0x16ec(r31)
    stw r8, 0x16e8(r31)
    stw r31, 0x1744(r31)
    stw r7, 0x1740(r31)
    stw r6, 0x54c(r31)
    stw r5, 0x17c8(r31)
    stw r0, 0x17b0(r31)
    stw r31, 0x17b4(r31)
    lwzu r9, lbl_8078F928@l(r4)
    lbz r0, lbl_8087F504
    lwz r8, 0x4(r4)
    lwz r7, 0x8(r4)
    extsb. r0, r0
    stw r9, 0xec(r1)
    stw r8, 0xf0(r1)
    stw r7, 0xf4(r1)
    stw r9, 0x38(r1)
    stw r8, 0x3c(r1)
    stw r7, 0x40(r1)
    stw r9, 0x18(r1)
    stw r8, 0x1c(r1)
    stw r7, 0x20(r1)
    stw r9, 0xe0(r1)
    stw r8, 0xe4(r1)
    stw r7, 0xe8(r1)
    stw r9, 0xd4(r1)
    stw r8, 0xd8(r1)
    stw r7, 0xdc(r1)
    stw r9, 0xc8(r1)
    stw r8, 0xcc(r1)
    stw r7, 0xd0(r1)
    stw r9, 0xf8(r1)
    stw r8, 0xfc(r1)
    stw r7, 0x100(r1)
    stw r31, 0x104(r1)
    stw r9, 0x8(r1)
    stw r8, 0xc(r1)
    stw r7, 0x10(r1)
    stw r31, 0x14(r1)
    stw r9, 0x108(r1)
    stw r8, 0x10c(r1)
    stw r7, 0x110(r1)
    stw r31, 0x114(r1)
    stw r9, 0x28(r1)
    stw r8, 0x2c(r1)
    stw r7, 0x30(r1)
    stw r31, 0x34(r1)
    stw r9, 0x48(r1)
    stw r8, 0x4c(r1)
    stw r7, 0x50(r1)
    stw r31, 0x54(r1)
    stw r3, 0x124(r1)
    stw r9, 0xb8(r1)
    stw r8, 0xbc(r1)
    stw r7, 0xc0(r1)
    stw r31, 0xc4(r1)
    bne lbl_fn_8045FE70_00001540
    lis r6, lbl_807C8A58@ha
    lis r4, fn_80460374@ha
    lis r3, fn_804603A0@ha
    li r0, 0x1
    addi r3, r3, fn_804603A0@l
    addi r5, r6, lbl_807C8A58@l
    addi r4, r4, fn_80460374@l
    stw r9, 0x58(r1)
    stw r8, 0x5c(r1)
    stw r7, 0x60(r1)
    stw r31, 0x64(r1)
    stw r9, 0x88(r1)
    stw r8, 0x8c(r1)
    stw r7, 0x90(r1)
    stw r31, 0x94(r1)
    stw r9, 0x78(r1)
    stw r8, 0x7c(r1)
    stw r7, 0x80(r1)
    stw r31, 0x84(r1)
    stw r4, 0x4(r5)
    stw r3, lbl_807C8A58@l(r6)
    stb r0, lbl_8087F504
lbl_fn_8045FE70_00001540:
    lwz r6, 0x28(r1)
    addi r3, r1, 0xa8
    lwz r5, 0x2c(r1)
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r6, 0x68(r1)
    stw r5, 0x6c(r1)
    stw r4, 0x70(r1)
    stw r0, 0x74(r1)
    stw r6, 0xa8(r1)
    stw r5, 0xac(r1)
    stw r4, 0xb0(r1)
    stw r0, 0xb4(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_8045FE70_000015C4
    addic. r0, r1, 0x128
    lwz r5, 0xa8(r1)
    lwz r4, 0xac(r1)
    lwz r3, 0xb0(r1)
    lwz r0, 0xb4(r1)
    stw r5, 0x98(r1)
    stw r4, 0x9c(r1)
    stw r3, 0xa0(r1)
    stw r0, 0xa4(r1)
    beq lbl_fn_8045FE70_000015BC
    stw r5, 0x128(r1)
    stw r4, 0x12c(r1)
    stw r3, 0x130(r1)
    stw r0, 0x134(r1)
lbl_fn_8045FE70_000015BC:
    li r0, 0x1
    b lbl_fn_8045FE70_000015C8
lbl_fn_8045FE70_000015C4:
    li r0, 0x0
lbl_fn_8045FE70_000015C8:
    cmpwi r0, 0x0
    beq lbl_fn_8045FE70_000015E0
    lis r3, lbl_807C8A58@ha
    addi r3, r3, lbl_807C8A58@l
    stw r3, 0x124(r1)
    b lbl_fn_8045FE70_000015E8
lbl_fn_8045FE70_000015E0:
    li r0, 0x0
    stw r0, 0x124(r1)
lbl_fn_8045FE70_000015E8:
    addi r3, r31, 0xb0
    addi r4, r1, 0x124
    bl fn_800F29D0
    addic. r3, r1, 0x124
    beq lbl_fn_8045FE70_00001630
    lwz r4, 0x124(r1)
    cmpwi r4, 0x0
    beq lbl_fn_8045FE70_00001630
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_8045FE70_00001628
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8045FE70_00001628:
    li r0, 0x0
    stw r0, 0x124(r1)
lbl_fn_8045FE70_00001630:
    lis r30, lbl_80755188@ha
    addi r3, r31, 0xb0
    addi r30, r30, lbl_80755188@l
    addi r4, r30, 0xb1
    bl fn_80091CFC
    addi r3, r31, 0xb0
    addi r4, r30, 0xb6
    bl fn_80091CFC
    addi r3, r31, 0xb0
    addi r4, r30, 0xbc
    bl fn_80091CFC
    lfs f3, lbl_80886D68
    addi r4, r1, 0x118
    lfs f0, lbl_80886D6C
    addi r5, r31, 0x10fc
    stfs f3, 0x118(r1)
    li r3, 0x1
    lfs f2, lbl_80886D60
    stfs f0, 0x11c(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0x120(r1)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x1104(r31)
    b lbl_fn_8045FE70_00001694
lbl_fn_8045FE70_00001690:
    li r3, 0x0
lbl_fn_8045FE70_00001694:
    lwz r0, 0x784(r1)
    lwz r31, 0x77c(r1)
    lwz r30, 0x778(r1)
    lwz r29, 0x774(r1)
    mtlr r0
    addi r1, r1, 0x780
    blr
}

asm void fn_80460374(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    mr r12, r3
    stw r0, 0x14(r1)
    lwz r3, 0xc(r3)
    bl fn_80695B00
    nop
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804603A0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r5, 0x3
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bne lbl_fn_804603A0_00001710
    lis r3, lbl_8078F978@ha
    addi r3, r3, lbl_8078F978@l
    stw r3, 0x0(r4)
    b lbl_fn_804603A0_0000177C
lbl_fn_804603A0_00001710:
    cmpwi r5, 0x0
    bne lbl_fn_804603A0_00001744
    cmpwi r4, 0x0
    beq lbl_fn_804603A0_0000177C
    lwz r5, 0x0(r3)
    lwz r0, 0x4(r3)
    stw r0, 0x4(r4)
    stw r5, 0x0(r4)
    lwz r0, 0x8(r3)
    stw r0, 0x8(r4)
    lwz r0, 0xc(r3)
    stw r0, 0xc(r4)
    b lbl_fn_804603A0_0000177C
lbl_fn_804603A0_00001744:
    cmpwi r5, 0x1
    beq lbl_fn_804603A0_0000177C
    lwz r5, 0x0(r4)
    lis r3, lbl_8078F978@ha
    lwz r4, lbl_8078F978@l(r3)
    lwz r3, 0x0(r5)
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_804603A0_00001774
    stw r30, 0x0(r31)
    b lbl_fn_804603A0_0000177C
lbl_fn_804603A0_00001774:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_804603A0_0000177C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80460458(void)
{
    nofralloc
    stwu r1, -0xf0(r1)
    mflr r0
    stw r0, 0xf4(r1)
    stfd f31, 0xe0(r1)
    psq_st f31, 0xe8(r1), 0, 0
    stw r31, 0xdc(r1)
    mr r31, r3
    stw r30, 0xd8(r1)
    stw r29, 0xd4(r1)
    bl fn_804617A4
    addi r3, r1, 0x88
    addi r4, r31, 0x528
    bl fn_8001047C
    addi r3, r1, 0x7c
    addi r4, r31, 0x534
    bl fn_8001047C
    lwz r0, 0xd18(r31)
    lwz r3, 0x14c0(r31)
    cmpwi r0, 0x0
    addi r0, r3, 0x1
    stw r0, 0x14c0(r31)
    beq lbl_fn_80460458_000017F8
    lwz r0, 0x14b8(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80460458_00001808
lbl_fn_80460458_000017F8:
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    b lbl_fn_80460458_00001CAC
lbl_fn_80460458_00001808:
    lwz r0, 0x14c4(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80460458_00001930
    lwz r0, 0x58c(r31)
    cmpwi r0, 0x6
    beq lbl_fn_80460458_00001930
    cmpwi r0, 0x8
    beq lbl_fn_80460458_00001930
    li r30, 0x0
    stw r30, 0xc(r1)
    addi r3, r1, 0x70
    bl fn_80057A64
    mr r3, r31
    addi r4, r1, 0xc
    addi r5, r1, 0x70
    addi r6, r1, 0x8
    bl fn_80468038
    cmpwi r3, 0x0
    beq lbl_fn_80460458_00001930
    lwz r3, 0x14c8(r31)
    addi r0, r3, 0x1
    stw r0, 0x14c8(r31)
    cmpwi r0, 0x5
    ble lbl_fn_80460458_00001908
    mr r4, r31
    addi r3, r1, 0x40
    addi r5, r31, 0x14f4
    li r6, 0x0
    li r7, 0x1
    bl fn_804687B0
    addi r3, r31, 0x14d4
    addi r4, r1, 0x40
    bl fn_8000D124
    lwz r5, 0x14f4(r31)
    mr r4, r31
    addi r3, r1, 0x64
    li r6, 0x0
    bl fn_80468A08
    addi r3, r1, 0x28
    addi r4, r1, 0x64
    addi r5, r31, 0x14d4
    bl fn_80013338
    addi r3, r1, 0x34
    addi r4, r1, 0x28
    bl fn_80011034
    addi r3, r31, 0x14e0
    addi r4, r1, 0x34
    bl fn_8000D124
    li r0, 0x1
    stw r0, 0x14c4(r31)
    stw r30, 0x14ec(r31)
    bl fn_80680CF8
    lis r4, 0x5555
    stw r30, 0x14c8(r31)
    addi r0, r4, 0x5556
    mulhw r4, r0, r3
    srwi r0, r4, 31
    add r0, r4, r0
    mulli r0, r0, 0x3
    subf r0, r0, r3
    slwi r3, r0, 1
    addi r0, r3, 0x4
    stw r0, 0x14f0(r31)
    b lbl_fn_80460458_00001928
lbl_fn_80460458_00001908:
    addi r3, r31, 0x14d4
    addi r4, r1, 0x70
    bl fn_8000D124
    addi r3, r31, 0x14e0
    addi r4, r31, 0x534
    bl fn_8000D124
    lfs f0, 0x8(r1)
    stfs f0, 0x14e4(r31)
lbl_fn_80460458_00001928:
    mr r3, r31
    bl fn_80466B8C
lbl_fn_80460458_00001930:
    lwz r0, 0x14b8(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80460458_00001CAC
    lwz r3, 0x58c(r31)
    li r30, 0x0
    subi r0, r3, 0x6
    cmplwi r0, 0xd
    bgt lbl_fn_80460458_00001A18
    lis r3, jumptable_8078F934@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_8078F934@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    mr r3, r31
    bl fn_80463610
    li r30, 0x1
    b lbl_fn_80460458_00001A40
    mr r3, r31
    bl fn_804638A4
    b lbl_fn_80460458_00001A40
    mr r3, r31
    bl fn_80463C58
    b lbl_fn_80460458_00001A40
    mr r3, r31
    bl fn_80463DCC
    b lbl_fn_80460458_00001A40
    mr r3, r31
    bl fn_80463F20
    b lbl_fn_80460458_00001A40
    mr r3, r31
    bl fn_80464608
    b lbl_fn_80460458_00001A40
    mr r3, r31
    bl fn_80464CF0
    b lbl_fn_80460458_00001A40
    mr r3, r31
    bl fn_80465294
    b lbl_fn_80460458_00001A40
    mr r3, r31
    bl fn_804654F0
    b lbl_fn_80460458_00001A40
    mr r3, r31
    bl fn_804655AC
    b lbl_fn_80460458_00001A40
    mr r3, r31
    bl fn_80465B88
    b lbl_fn_80460458_00001A40
    mr r3, r31
    bl fn_80466370
    b lbl_fn_80460458_00001A40
    mr r3, r31
    bl fn_804666D8
    li r30, 0x1
    b lbl_fn_80460458_00001A40
    mr r3, r31
    bl fn_80466868
    b lbl_fn_80460458_00001A40
lbl_fn_80460458_00001A18:
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x6
    beq lbl_fn_80460458_00001A2C
    mr r3, r31
    bl fn_80463174
lbl_fn_80460458_00001A2C:
    lwz r0, 0x58c(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80460458_00001A40
    mr r3, r31
    bl fn_804635B4
lbl_fn_80460458_00001A40:
    lwz r0, 0x12a4(r31)
    cmpwi r30, 0x0
    rlwinm r0, r0, 0, 8, 6
    stw r0, 0x12a4(r31)
    beq lbl_fn_80460458_00001A64
    lfs f1, lbl_80886D70
    addi r3, r31, 0x10d8
    bl fn_80129A48
    b lbl_fn_80460458_00001A90
lbl_fn_80460458_00001A64:
    lwz r3, 0x14b8(r31)
    bl fn_8000DD0C
    lis r5, lbl_80755188@ha
    lis r6, lbl_807C7030@ha
    addi r5, r5, lbl_80755188@l
    lfs f1, lbl_80886D70
    mr r4, r3
    addi r3, r31, 0x10d8
    addi r5, r5, 0xb1
    addi r6, r6, lbl_807C7030@l
    bl fn_80129978
lbl_fn_80460458_00001A90:
    bl fn_80121F00
    bl fn_80373148
    mr r30, r3
    bl fn_80121F00
    bl fn_80122550
    lwz r4, 0x58c(r31)
    mr r29, r3
    subi r0, r4, 0xf
    cmplwi r0, 0x1
    ble lbl_fn_80460458_00001BD0
    cmpwi r4, 0x6
    beq lbl_fn_80460458_00001AD4
    cmpwi r4, 0x11
    beq lbl_fn_80460458_00001C08
    cmpwi r4, 0x12
    beq lbl_fn_80460458_00001C40
    b lbl_fn_80460458_00001C78
lbl_fn_80460458_00001AD4:
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80139F2C
    cmpwi r3, 0x14a
    bne lbl_fn_80460458_00001B20
    mr r3, r30
    bl fn_80339F7C
    cmpwi r3, 0x0
    beq lbl_fn_80460458_00001CAC
    mr r3, r30
    li r4, 0x0
    li r5, 0xf
    li r6, -0x1
    li r7, 0x0
    bl fn_804A04AC
    mr r3, r30
    li r4, 0x0
    bl fn_80339F84
    b lbl_fn_80460458_00001CAC
lbl_fn_80460458_00001B20:
    lis r4, lbl_80755188@ha
    addi r3, r31, 0xb0
    addi r4, r4, lbl_80755188@l
    addi r4, r4, 0xc2
    bl fn_800132EC
    mr r4, r3
    addi r3, r1, 0x58
    bl fn_8000D0F8
    lwz r0, 0x18ec(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80460458_00001B78
    mr r3, r29
    mr r4, r31
    bl fn_8026616C
    lfs f1, lbl_80886D60
    mr r3, r29
    addi r4, r1, 0x58
    li r5, 0x0
    bl fn_8026610C
    li r0, 0x1
    stw r0, 0x18ec(r31)
    b lbl_fn_80460458_00001B98
lbl_fn_80460458_00001B78:
    mr r3, r29
    mr r4, r31
    bl fn_8026616C
    mr r3, r29
    bl fn_80266164
    addi r3, r3, 0xc
    addi r4, r1, 0x58
    bl fn_8000D124
lbl_fn_80460458_00001B98:
    mr r3, r30
    bl fn_80339F7C
    cmpwi r3, 0x2
    beq lbl_fn_80460458_00001CAC
    mr r3, r30
    li r4, 0x2
    li r5, 0x96
    li r6, -0x1
    li r7, 0x0
    bl fn_804A04AC
    mr r3, r30
    li r4, 0x2
    bl fn_80339F84
    b lbl_fn_80460458_00001CAC
lbl_fn_80460458_00001BD0:
    mr r3, r30
    bl fn_80339F7C
    cmpwi r3, 0x2
    beq lbl_fn_80460458_00001CAC
    mr r3, r30
    li r4, 0x2
    li r5, 0x1e
    li r6, -0x1
    li r7, 0x0
    bl fn_804A04AC
    mr r3, r30
    li r4, 0x2
    bl fn_80339F84
    b lbl_fn_80460458_00001CAC
lbl_fn_80460458_00001C08:
    mr r3, r30
    bl fn_80339F7C
    cmpwi r3, 0x0
    beq lbl_fn_80460458_00001CAC
    mr r3, r30
    li r4, 0x0
    li r5, 0x1e
    li r6, -0x1
    li r7, 0x0
    bl fn_804A04AC
    mr r3, r30
    li r4, 0x0
    bl fn_80339F84
    b lbl_fn_80460458_00001CAC
lbl_fn_80460458_00001C40:
    mr r3, r30
    bl fn_80339F7C
    cmpwi r3, 0x0
    beq lbl_fn_80460458_00001CAC
    mr r3, r30
    li r4, 0x0
    li r5, 0x3c
    li r6, -0x1
    li r7, 0x0
    bl fn_804A04AC
    mr r3, r30
    li r4, 0x0
    bl fn_80339F84
    b lbl_fn_80460458_00001CAC
lbl_fn_80460458_00001C78:
    mr r3, r30
    bl fn_80339F7C
    cmpwi r3, 0x0
    beq lbl_fn_80460458_00001CAC
    mr r3, r30
    li r4, 0x0
    li r5, 0xf
    li r6, -0x1
    li r7, 0x0
    bl fn_804A04AC
    mr r3, r30
    li r4, 0x0
    bl fn_80339F84
lbl_fn_80460458_00001CAC:
    lfs f2, 0x15d0(r31)
    lfs f1, lbl_80886D74
    lfs f0, 0x538(r31)
    fmuls f2, f2, f1
    stfs f2, 0x15d0(r31)
    lfs f1, 0x80(r1)
    fadds f1, f1, f2
    fsubs f31, f1, f0
    fmr f1, f31
    bl fn_80011220
    lfs f0, lbl_8087F500
    fcmpo cr0, f1, f0
    ble lbl_fn_80460458_00001CF4
    fmr f1, f31
    bl fn_80011220
    fdivs f1, f31, f1
    lfs f0, lbl_8087F500
    fmuls f31, f0, f1
lbl_fn_80460458_00001CF4:
    stfs f31, 0x15d0(r31)
    mr r3, r31
    bl fn_8014C540
    mr r3, r31
    bl fn_80145334
    lfs f1, lbl_80886D60
    addi r3, r1, 0x4c
    fmr f2, f1
    fmr f3, f1
    bl fn_8000D114
    addi r3, r31, 0xb0
    bl fn_80266154
    mr r4, r3
    addi r3, r31, 0x1578
    bl fn_8008CD1C
    addi r3, r1, 0x1c
    addi r4, r31, 0x1578
    bl fn_8000D0F8
    addi r3, r1, 0x4c
    addi r4, r1, 0x1c
    bl fn_80012C88
    addi r3, r31, 0x1578
    bl fn_8010F668
    lfs f1, lbl_80886D78
    addi r3, r1, 0x98
    bl fn_8013A13C
    addi r3, r31, 0x1578
    addi r4, r1, 0x98
    bl fn_801495E8
    addi r3, r31, 0x1578
    addi r4, r1, 0x4c
    bl fn_801479E4
    lis r4, lbl_80755188@ha
    addi r3, r31, 0xb0
    addi r4, r4, lbl_80755188@l
    addi r4, r4, 0xb1
    bl fn_800132EC
    mr r4, r3
    addi r3, r1, 0x10
    bl fn_8000D0F8
    addi r3, r31, 0x148c
    addi r4, r1, 0x10
    bl fn_8000D124
    lfs f0, lbl_80886D7C
    stfs f0, 0x1498(r31)
    psq_l f31, 0xe8(r1), 0, 0
    lfd f31, 0xe0(r1)
    lwz r31, 0xdc(r1)
    lwz r30, 0xd8(r1)
    lwz r29, 0xd4(r1)
    lwz r0, 0xf4(r1)
    mtlr r0
    addi r1, r1, 0xf0
    blr
}
