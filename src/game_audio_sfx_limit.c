#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void dtor_80013D60(void);
extern void fn_8000D114(void);
extern void fn_8000D3A8(void);
extern void fn_8000DD14(void);
extern void fn_8000DD98(void);
extern void fn_8003E4A4(void);
extern void fn_8004212C(void);
extern void fn_80057A64(void);
extern void fn_8005B3CC(void);
extern void fn_8005B5F8(void);
extern void fn_8005B6E8(void);
extern void fn_8006AFF8(void);
extern void fn_8006CA80(void);
extern void fn_800874C8(void);
extern void fn_8008771C(void);
extern void fn_80087994(void);
extern void fn_80087E9C(void);
extern void fn_8008937C(void);
extern void fn_8008A4E0(void);
extern void fn_8008A76C(void);
extern void fn_8008AD4C(void);
extern void fn_8008B140(void);
extern void fn_800902C0(void);
extern void fn_80092814(void);
extern void fn_80092954(void);
extern void fn_80094D88(void);
extern void fn_800DC12C(void);
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
extern void fn_8011F91C(void);
extern void fn_8013655C(void);
extern void fn_80145334(void);
extern void fn_8014C540(void);
extern void fn_8016E970(void);
extern void fn_8020A780(void);
extern void fn_80219E6C(void);
extern void fn_80232B7C(void);
extern void fn_80237518(void);
extern void fn_80237654(void);
extern void fn_802376D0(void);
extern void fn_802377B8(void);
extern void fn_8023780C(void);
extern void fn_80237874(void);
extern void fn_80239D58(void);
extern void fn_80239DAC(void);
extern void fn_8023A680(void);
extern void fn_8023A8B4(void);
extern void fn_80266154(void);
extern void fn_802BABC0(void);
extern void fn_80316FC0(void);
extern void fn_80317034(void);
extern void fn_803176D0(void);
extern void fn_80317EA0(void);
extern void fn_80317EF8(void);
extern void fn_80318594(void);
extern void fn_80318720(void);
extern void fn_80318A30(void);
extern void fn_80318F98(void);
extern void fn_80318F9C(void);
extern void fn_803191FC(void);
extern void fn_80319384(void);
extern void fn_80319578(void);
extern void fn_8031958C(void);
extern void fn_803199A4(void);
extern void fn_8035B694(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473F50(void);
extern void fn_805A5224(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F90D0(void);
extern void fn_805F9160(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9940(void);
extern void fn_80682428(void);
extern void fn_80682544(void);
extern void fn_80684600(void);
extern void fn_8068AEA4(void);
extern void fn_806958E0(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 jumptable_80788728[];
extern u8 lbl_80749390[];
extern u8 lbl_80749578[];
extern u8 lbl_8074959C[];
extern u8 lbl_807772B0[];
extern u8 lbl_807772D0[];
extern u8 lbl_80788760[];

/* Small data declarations */
extern u32 lbl_8087D708;
extern u32 lbl_8087DC48;
extern u32 lbl_8087DC4C;
extern u32 lbl_8087EF10;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F3F4;
extern u32 lbl_8087F8A0;
extern u32 lbl_80884CF0;
extern u32 lbl_80884CF4;
extern u32 lbl_80884D14;
extern u32 lbl_80884D1C;
extern u32 lbl_80884D2C;
extern u32 lbl_80884D50;
extern u32 lbl_80884D54;
extern u32 lbl_80884D58;
extern u32 lbl_80884D60;
extern u32 lbl_80884D64;
extern u32 lbl_80884D68;
extern u32 lbl_80884D6C;
extern u32 lbl_80884D70;
extern u32 lbl_80884D74;
extern u32 lbl_80884D78;
extern u32 lbl_80884D7C;
extern u32 lbl_80884D80;
extern u32 lbl_80884D84;

/* Function declarations */
void fn_80315644(void);
void fn_8031564C(void);
void fn_80315654(void);
void fn_80315964(void);
void fn_80315FE0(void);
void fn_80316034(void);
void fn_803161F0(void);
void fn_803161F8(void);
void fn_803165E0(void);
void fn_803165E4(void);
void fn_803165EC(void);
void fn_80316A68(void);
void fn_80316E38(void);
void fn_80316F74(void);
void fn_80316F9C(void);

asm void fn_80315644(void)
{
    nofralloc
    addi r3, r3, 0x3c
    blr
}

asm void fn_8031564C(void)
{
    nofralloc
    stw r4, 0xc4(r3)
    blr
}

asm void fn_80315654(void)
{
    nofralloc
    stwu r1, -0x1a0(r1)
    mflr r0
    lis r4, lbl_80749390@ha
    stw r0, 0x1a4(r1)
    addi r4, r4, lbl_80749390@l
    addi r5, r1, 0x14
    stw r31, 0x19c(r1)
    addi r4, r4, 0x9f
    stw r30, 0x198(r1)
    mr r30, r3
    lfs f9, 0x52c(r3)
    lfs f8, 0x5a8(r3)
    lfs f7, 0x528(r3)
    fadds f9, f9, f8
    lfs f0, 0x5a4(r3)
    lfs f8, 0x5b0(r3)
    fadds f0, f7, f0
    stfs f9, 0x18(r1)
    lfs f10, 0x530(r3)
    stfs f0, 0x14(r1)
    lfs f7, 0x530(r3)
    psq_l f1, 0x0(r5), 0, 0
    li r5, 0x0
    lfs f0, 0x5ac(r3)
    psq_st f1, 0x614(r3), 0, 0
    fadds f2, f7, f0
    lfs f0, 0x52c(r3)
    lfs f7, 0x618(r3)
    fadds f0, f0, f8
    lfs f9, 0x528(r3)
    fadds f7, f7, f8
    stfs f8, 0x620(r3)
    stfs f2, 0x1c(r1)
    stfs f2, 0x61c(r3)
    stfs f7, 0x618(r3)
    addi r3, r3, 0xb0
    stfs f9, 0x38(r1)
    stfs f0, 0x3c(r1)
    stfs f10, 0x40(r1)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80315654_000000C0
    li r5, 0x0
    b lbl_fn_80315654_000000CC
lbl_fn_80315654_000000C0:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r5, r3, r0
lbl_fn_80315654_000000CC:
    cmpwi r5, 0x0
    beq lbl_fn_80315654_00000100
    lfs f0, 0x1c(r5)
    addi r4, r1, 0x8
    lfs f7, 0xc(r5)
    addi r3, r1, 0x38
    stfs f7, 0x8(r1)
    lfs f2, 0x2c(r5)
    stfs f0, 0xc(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0x10(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x40(r1)
lbl_fn_80315654_00000100:
    lfs f10, lbl_80884D14
    addi r4, r1, 0x38
    lfs f9, 0x620(r30)
    addi r3, r1, 0x2c
    lfs f8, 0x5b4(r30)
    addi r31, r1, 0x168
    lfs f7, lbl_80884CF0
    lfs f0, lbl_80884CF4
    fnmsubs f8, f10, f9, f8
    stfs f7, 0x20(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f8, 0x24(r1)
    lfs f2, 0x40(r1)
    stfs f7, 0x28(r1)
    stfs f7, 0x194(r1)
    stfs f7, 0x18c(r1)
    stfs f7, 0x188(r1)
    stfs f7, 0x184(r1)
    stfs f7, 0x180(r1)
    stfs f7, 0x178(r1)
    stfs f7, 0x174(r1)
    stfs f7, 0x170(r1)
    stfs f7, 0x16c(r1)
    stfs f0, 0x190(r1)
    stfs f0, 0x17c(r1)
    stfs f0, 0x168(r1)
    lfs f0, 0x53c(r30)
    psq_st f1, 0x0(r3), 0, 0
    fcmpu cr0, f7, f0
    stfs f2, 0x34(r1)
    beq lbl_fn_80315654_000001D0
    fmr f1, f0
    addi r3, r1, 0x78
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0x78
    addi r5, r1, 0x48
    bl fn_805F89F0
    addi r3, r1, 0x48
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
lbl_fn_80315654_000001D0:
    lfs f0, lbl_80884CF0
    lfs f1, 0x538(r30)
    fcmpu cr0, f0, f1
    beq lbl_fn_80315654_00000230
    addi r3, r1, 0xd8
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0xd8
    addi r5, r1, 0xa8
    bl fn_805F89F0
    addi r3, r1, 0xa8
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
lbl_fn_80315654_00000230:
    lfs f0, lbl_80884CF0
    lfs f1, 0x534(r30)
    fcmpu cr0, f0, f1
    beq lbl_fn_80315654_00000290
    addi r3, r1, 0x138
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0x138
    addi r5, r1, 0x108
    bl fn_805F89F0
    addi r3, r1, 0x108
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
lbl_fn_80315654_00000290:
    addi r4, r1, 0x20
    addi r3, r1, 0x168
    mr r5, r4
    bl fn_805F93C0
    lfs f7, 0x2c(r1)
    addi r4, r1, 0x38
    lfs f0, 0x20(r1)
    addi r3, r1, 0x2c
    lfs f9, 0x30(r1)
    li r0, 0x80
    fadds f10, f7, f0
    lfs f8, 0x24(r1)
    lfs f0, 0x28(r1)
    lfs f7, 0x34(r1)
    fadds f8, f9, f8
    lfs f2, 0x40(r1)
    fadds f0, f7, f0
    stfs f2, 0x5fc(r30)
    psq_l f1, 0x0(r4), 0, 0
    lfs f7, 0x620(r30)
    fmr f2, f0
    stfs f10, 0x2c(r1)
    stfs f8, 0x30(r1)
    psq_st f1, 0x5f4(r30), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x600(r30), 0, 0
    stfs f2, 0x608(r30)
    stfs f7, 0x60c(r30)
    stw r0, 0x5d8(r30)
    lwz r31, 0x19c(r1)
    lwz r30, 0x198(r1)
    lwz r0, 0x1a4(r1)
    stfs f0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x1a0
    blr
}

asm void fn_80315964(void)
{
    nofralloc
    stwu r1, -0x3f0(r1)
    mflr r0
    li r5, 0x0
    stw r0, 0x3f4(r1)
    stfd f31, 0x3e0(r1)
    psq_st f31, 0x3e8(r1), 0, 0
    stfd f30, 0x3d0(r1)
    psq_st f30, 0x3d8(r1), 0, 0
    stfd f29, 0x3c0(r1)
    psq_st f29, 0x3c8(r1), 0, 0
    stfd f28, 0x3b0(r1)
    psq_st f28, 0x3b8(r1), 0, 0
    stfd f27, 0x3a0(r1)
    psq_st f27, 0x3a8(r1), 0, 0
    stfd f26, 0x390(r1)
    psq_st f26, 0x398(r1), 0, 0
    stfd f25, 0x380(r1)
    psq_st f25, 0x388(r1), 0, 0
    stw r31, 0x37c(r1)
    mr r31, r3
    mr r4, r31
    stw r30, 0x378(r1)
    stw r29, 0x374(r1)
    stw r28, 0x370(r1)
    lwz r3, lbl_8087F3C0
    bl fn_80239D58
    cmpwi r3, 0x0
    beq lbl_fn_80315964_000003A4
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x0
    li r6, 0x1
    bl fn_80239DAC
lbl_fn_80315964_000003A4:
    lfs f2, 0x608(r31)
    addi r3, r1, 0xe4
    psq_l f1, 0x600(r31), 0, 0
    addi r4, r1, 0xd8
    psq_st f1, 0x0(r3), 0, 0
    addi r3, r1, 0xcc
    lwz r5, 0xd1c(r31)
    stfs f2, 0xec(r1)
    psq_l f1, 0x600(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lfs f2, 0x608(r5)
    lfs f0, 0xec(r1)
    lfs f9, 0xdc(r1)
    fsubs f10, f2, f0
    lfs f8, 0xe8(r1)
    lfs f7, 0xd8(r1)
    lfs f0, 0xe4(r1)
    fsubs f8, f9, f8
    stfs f2, 0xe0(r1)
    fsubs f0, f7, f0
    stfs f8, 0xd0(r1)
    stfs f0, 0xcc(r1)
    stfs f10, 0xd4(r1)
    bl fn_805F9940
    fabs f7, f1
    lfs f0, lbl_80884D50
    fmr f31, f1
    frsp f7, f7
    fcmpo cr0, f7, f0
    blt lbl_fn_80315964_00000428
    addi r3, r1, 0xcc
    mr r4, r3
    bl fn_805F98D0
lbl_fn_80315964_00000428:
    mr r3, r31
    li r4, 0x0
    bl fn_80232B7C
    lfs f0, lbl_80884CF0
    li r29, -0x1
    lfs f1, lbl_80884CF4
    li r30, 0x1
    stfs f0, 0xa4(r1)
    addi r4, r31, 0x1564
    lwz r3, lbl_8087F3C0
    addi r5, r31, 0xb0
    stfs f0, 0xa8(r1)
    addi r7, r1, 0x98
    addi r8, r1, 0xa4
    addi r9, r1, 0xb0
    stfs f0, 0xac(r1)
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x98(r1)
    stfs f0, 0x9c(r1)
    stfs f0, 0xa0(r1)
    stfs f1, 0xb0(r1)
    stfs f1, 0xb4(r1)
    stfs f1, 0xb8(r1)
    stfs f1, 0xbc(r1)
    stw r29, 0x8(r1)
    stw r30, 0xc(r1)
    bl fn_8023A8B4
    lwz r3, 0xd1c(r31)
    addi r4, r31, 0x157c
    lfs f0, lbl_80884CF0
    addi r7, r1, 0x6c
    lfs f1, lbl_80884CF4
    addi r5, r3, 0xb0
    stfs f0, 0x78(r1)
    addi r8, r1, 0x78
    lwz r3, lbl_8087F3C0
    addi r9, r1, 0x88
    stfs f0, 0x7c(r1)
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x80(r1)
    stfs f0, 0x6c(r1)
    stfs f0, 0x70(r1)
    stfs f0, 0x74(r1)
    stfs f1, 0x88(r1)
    stfs f1, 0x8c(r1)
    stfs f1, 0x90(r1)
    stfs f1, 0x94(r1)
    stw r29, 0x8(r1)
    stw r30, 0xc(r1)
    bl fn_8023A8B4
    lfs f1, 0xe4(r1)
    addi r3, r1, 0x340
    lfs f2, 0xe8(r1)
    lfs f3, 0xec(r1)
    bl fn_805F90D0
    addi r4, r1, 0x340
    addi r3, r31, 0x1588
    psq_l f1, 0x0(r4), 0, 0
    addi r5, r1, 0xcc
    psq_l f2, 0x8(r4), 0, 0
    addi r29, r1, 0xc0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_st f6, 0x28(r3), 0, 0
    lfs f0, lbl_80884D50
    psq_st f1, 0x0(r3), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f4, 0x18(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    lfs f2, 0xd4(r1)
    psq_l f1, 0x0(r5), 0, 0
    fabs f7, f2
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0xc8(r1)
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_80315964_00000594
    lfs f7, 0xc0(r1)
    lfs f0, lbl_80884CF0
    fcmpo cr0, f7, f0
    ble lbl_fn_80315964_00000588
    lfs f0, lbl_80884D2C
    b lbl_fn_80315964_0000058C
lbl_fn_80315964_00000588:
    lfs f0, lbl_80884D54
lbl_fn_80315964_0000058C:
    stfs f0, 0x64(r1)
    b lbl_fn_80315964_000005A8
lbl_fn_80315964_00000594:
    frsp f2, f2
    lfs f1, 0xc0(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x64(r1)
lbl_fn_80315964_000005A8:
    lfs f0, 0x64(r1)
    addi r3, r1, 0x2d0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f7, lbl_80884CF0
    addi r4, r1, 0x54
    lfs f25, 0x2d8(r1)
    mr r5, r4
    lfs f26, 0x2d4(r1)
    addi r3, r1, 0x300
    lfs f27, 0x2d0(r1)
    lfs f28, 0x2e8(r1)
    lfs f29, 0x2e4(r1)
    lfs f30, 0x2e0(r1)
    lfs f13, 0x2f8(r1)
    lfs f12, 0x2f4(r1)
    lfs f11, 0x2f0(r1)
    lfs f10, 0x2fc(r1)
    lfs f9, 0x2ec(r1)
    lfs f8, 0x2dc(r1)
    lfs f0, lbl_80884CF4
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0xc8(r1)
    stfs f7, 0x330(r1)
    stfs f7, 0x334(r1)
    stfs f7, 0x338(r1)
    stfs f0, 0x33c(r1)
    stfs f27, 0x24(r1)
    stfs f26, 0x28(r1)
    stfs f25, 0x2c(r1)
    stfs f27, 0x300(r1)
    stfs f26, 0x304(r1)
    stfs f25, 0x308(r1)
    stfs f30, 0x30(r1)
    stfs f29, 0x34(r1)
    stfs f28, 0x38(r1)
    stfs f30, 0x310(r1)
    stfs f29, 0x314(r1)
    stfs f28, 0x318(r1)
    stfs f11, 0x3c(r1)
    stfs f12, 0x40(r1)
    stfs f13, 0x44(r1)
    stfs f11, 0x320(r1)
    stfs f12, 0x324(r1)
    stfs f13, 0x328(r1)
    stfs f8, 0x48(r1)
    stfs f9, 0x4c(r1)
    stfs f10, 0x50(r1)
    stfs f8, 0x30c(r1)
    stfs f9, 0x31c(r1)
    stfs f10, 0x32c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x5c(r1)
    bl fn_805F9750
    lfs f2, 0x5c(r1)
    lfs f0, lbl_80884D50
    fabs f7, f2
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_80315964_000006C4
    lfs f7, 0x58(r1)
    lfs f0, lbl_80884CF0
    fcmpo cr0, f7, f0
    ble lbl_fn_80315964_000006B4
    lfs f0, lbl_80884D2C
    b lbl_fn_80315964_000006B8
lbl_fn_80315964_000006B4:
    lfs f0, lbl_80884D54
lbl_fn_80315964_000006B8:
    fneg f0, f0
    stfs f0, 0x60(r1)
    b lbl_fn_80315964_000006D8
lbl_fn_80315964_000006C4:
    lfs f1, 0x58(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x60(r1)
lbl_fn_80315964_000006D8:
    lfs f2, lbl_80884CF0
    addi r3, r1, 0x60
    lfs f7, lbl_80884CF4
    addi r30, r31, 0x1588
    frsp f0, f2
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x68(r1)
    addi r28, r1, 0x180
    fcmpu cr0, f2, f0
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0xc8(r1)
    stfs f2, 0x1ac(r1)
    stfs f2, 0x1a4(r1)
    stfs f2, 0x1a0(r1)
    stfs f2, 0x19c(r1)
    stfs f2, 0x198(r1)
    stfs f2, 0x190(r1)
    stfs f2, 0x18c(r1)
    stfs f2, 0x188(r1)
    stfs f2, 0x184(r1)
    stfs f7, 0x1a8(r1)
    stfs f7, 0x194(r1)
    stfs f7, 0x180(r1)
    beq lbl_fn_80315964_0000078C
    fmr f1, f0
    addi r3, r1, 0x270
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r28
    addi r4, r1, 0x270
    addi r5, r1, 0x2a0
    bl fn_805F89F0
    addi r3, r1, 0x2a0
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
lbl_fn_80315964_0000078C:
    lfs f0, lbl_80884CF0
    lfs f1, 0xc4(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_80315964_000007EC
    addi r3, r1, 0x210
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r28
    addi r4, r1, 0x210
    addi r5, r1, 0x240
    bl fn_805F89F0
    addi r3, r1, 0x240
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
lbl_fn_80315964_000007EC:
    lfs f0, lbl_80884CF0
    lfs f1, 0xc0(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_80315964_0000084C
    addi r3, r1, 0x1b0
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r28
    addi r4, r1, 0x1b0
    addi r5, r1, 0x1e0
    bl fn_805F89F0
    addi r3, r1, 0x1e0
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
lbl_fn_80315964_0000084C:
    mr r3, r30
    mr r4, r28
    addi r5, r1, 0x150
    bl fn_805F89F0
    lfs f0, lbl_80884D1C
    addi r4, r1, 0x150
    lfs f7, lbl_80884CF4
    addi r28, r31, 0x1588
    fdivs f0, f31, f0
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    addi r3, r1, 0xf0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    fmr f1, f7
    psq_st f2, 0x8(r30), 0, 0
    fmr f2, f1
    psq_st f3, 0x10(r30), 0, 0
    fmr f3, f0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
    stfs f7, 0x18(r1)
    stfs f7, 0x1c(r1)
    stfs f0, 0x20(r1)
    bl fn_805F9160
    mr r3, r28
    addi r4, r1, 0xf0
    addi r5, r1, 0x120
    bl fn_805F89F0
    addi r6, r1, 0x120
    li r11, 0x0
    psq_l f1, 0x0(r6), 0, 0
    li r3, -0x1
    psq_l f2, 0x8(r6), 0, 0
    li r0, 0x1
    psq_l f3, 0x10(r6), 0, 0
    addi r4, r31, 0x1570
    psq_l f4, 0x18(r6), 0, 0
    mr r7, r28
    psq_l f5, 0x20(r6), 0, 0
    li r5, -0x1
    psq_l f6, 0x28(r6), 0, 0
    li r6, 0x5
    psq_st f6, 0x28(r28), 0, 0
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    psq_st f1, 0x0(r28), 0, 0
    lfs f1, lbl_80884CF4
    psq_st f2, 0x8(r28), 0, 0
    psq_st f3, 0x10(r28), 0, 0
    psq_st f4, 0x18(r28), 0, 0
    psq_st f5, 0x20(r28), 0, 0
    stw r11, 0x8(r1)
    stw r3, 0xc(r1)
    stw r0, 0x10(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A680
    lwz r0, 0x3f4(r1)
    psq_l f31, 0x3e8(r1), 0, 0
    lfd f31, 0x3e0(r1)
    psq_l f30, 0x3d8(r1), 0, 0
    lfd f30, 0x3d0(r1)
    psq_l f29, 0x3c8(r1), 0, 0
    lfd f29, 0x3c0(r1)
    psq_l f28, 0x3b8(r1), 0, 0
    lfd f28, 0x3b0(r1)
    psq_l f27, 0x3a8(r1), 0, 0
    lfd f27, 0x3a0(r1)
    psq_l f26, 0x398(r1), 0, 0
    lfd f26, 0x390(r1)
    psq_l f25, 0x388(r1), 0, 0
    lfd f25, 0x380(r1)
    lwz r31, 0x37c(r1)
    lwz r30, 0x378(r1)
    lwz r29, 0x374(r1)
    lwz r28, 0x370(r1)
    mtlr r0
    addi r1, r1, 0x3f0
    blr
}

asm void fn_80315FE0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    mr r4, r31
    lwz r3, lbl_8087F3C0
    bl fn_80239D58
    cmpwi r3, 0x0
    beq lbl_fn_80315FE0_000009DC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x0
    li r6, 0x1
    bl fn_80239DAC
lbl_fn_80315FE0_000009DC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80316034(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    lis r6, lbl_80749390@ha
    stw r0, 0x124(r1)
    addi r6, r6, lbl_80749390@l
    stmw r27, 0x10c(r1)
    mr r28, r4
    mr r27, r3
    addi r4, r6, 0x15e
    lwz r5, 0x58(r3)
    addi r3, r1, 0x8
    crclr 6
    bl sprintf
    lwz r0, 0x165c(r27)
    cmpwi r0, 0x0
    bne lbl_fn_80316034_00000A5C
    cmpwi r28, 0x0
    beq lbl_fn_80316034_00000A5C
    lwz r0, lbl_8087EF10
    cmpwi r0, 0x0
    beq lbl_fn_80316034_00000A5C
    mr r3, r28
    addi r4, r1, 0x8
    bl fn_8008937C
    stw r3, 0x165c(r27)
    mr r29, r3
    b lbl_fn_80316034_00000A60
lbl_fn_80316034_00000A5C:
    li r29, 0x0
lbl_fn_80316034_00000A60:
    mr r3, r27
    mr r4, r29
    bl fn_805A5224
    lis r30, lbl_80749390@ha
    mr r3, r29
    addi r30, r30, lbl_80749390@l
    addi r4, r30, 0x170
    bl fn_8008937C
    lis r31, 0x2
    mr r28, r3
    addi r4, r30, 0x17c
    addi r5, r27, 0x15c8
    subi r7, r31, 0x7961
    li r6, 0x0
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r28
    addi r4, r30, 0x184
    addi r5, r27, 0x15d0
    subi r7, r31, 0x7961
    li r6, 0x0
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r29
    addi r4, r30, 0x18d
    bl fn_8008937C
    mr r28, r3
    addi r4, r30, 0x17c
    addi r5, r27, 0x15d8
    subi r7, r31, 0x7961
    li r6, 0x0
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r28
    addi r4, r30, 0x184
    addi r5, r27, 0x15e0
    subi r7, r31, 0x7961
    li r6, 0x0
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r29
    addi r4, r30, 0x198
    bl fn_8008937C
    mr r28, r3
    addi r4, r30, 0x17c
    addi r5, r27, 0x15e8
    subi r7, r31, 0x7961
    li r6, 0x0
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r28
    addi r4, r30, 0x184
    addi r5, r27, 0x15f0
    subi r7, r31, 0x7961
    li r6, 0x0
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r28
    addi r4, r30, 0x1a2
    addi r5, r27, 0x15b8
    subi r7, r31, 0x7961
    li r6, 0x0
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lmw r27, 0x10c(r1)
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_803161F0(void)
{
    nofralloc
    lfs f1, lbl_80884D58
    blr
}

asm void fn_803161F8(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    stw r31, 0x10c(r1)
    mr r31, r3
    stw r30, 0x108(r1)
    stw r29, 0x104(r1)
    stw r28, 0x100(r1)
    mr r28, r5
    lwz r5, 0x20(r5)
    bl fn_8035B694
    lis r4, lbl_80788760@ha
    addi r3, r31, 0x14b0
    addi r4, r4, lbl_80788760@l
    stw r4, 0x0(r31)
    bl fn_8006CA80
    lfs f1, lbl_80884D60
    li r30, 0x0
    li r4, 0x1
    li r0, -0x1
    fmr f2, f1
    stw r30, 0x14b8(r31)
    fmr f3, f1
    addi r3, r31, 0x14d8
    stw r30, 0x14bc(r31)
    stw r30, 0x14c0(r31)
    stw r30, 0x14c4(r31)
    stw r30, 0x14c8(r31)
    stw r4, 0x14cc(r31)
    stw r0, 0x14d0(r31)
    stw r30, 0x14d4(r31)
    bl fn_8000D114
    lfs f1, lbl_80884D60
    addi r3, r31, 0x14e4
    fmr f2, f1
    fmr f3, f1
    bl fn_8000D114
    lfs f1, lbl_80884D60
    addi r3, r31, 0x14f4
    lfs f0, lbl_80884D64
    fmr f2, f1
    stfs f0, 0x14f0(r31)
    fmr f3, f1
    bl fn_8000D114
    lfs f0, lbl_80884D68
    addi r3, r31, 0x1504
    stfs f0, 0x1500(r31)
    bl fn_80057A64
    addi r3, r31, 0x1510
    bl fn_80057A64
    stw r30, 0x1520(r31)
    addi r3, r31, 0x1528
    stw r30, 0x1524(r31)
    bl fn_80057A64
    lfs f1, lbl_80884D60
    addi r3, r31, 0x1540
    stw r30, 0x153c(r31)
    fmr f2, f1
    fmr f3, f1
    bl fn_8000D114
    addi r3, r31, 0x1550
    bl fn_802377B8
    lfs f1, lbl_80884D60
    addi r3, r31, 0x155c
    fmr f2, f1
    fmr f3, f1
    bl fn_8000D114
    lfs f1, lbl_80884D60
    addi r3, r31, 0x1568
    fmr f2, f1
    fmr f3, f1
    bl fn_8000D114
    li r29, 0x3c
    stw r29, 0x1574(r31)
    addi r3, r31, 0x1584
    stw r30, 0x1578(r31)
    bl fn_80237518
    addi r3, r31, 0x1590
    bl fn_802377B8
    addi r3, r31, 0x159c
    bl fn_80237518
    addi r3, r31, 0x15a8
    bl fn_80237518
    stw r30, 0x15b4(r31)
    addi r3, r31, 0x15b8
    bl fn_803165E0
    addi r3, r31, 0x15e8
    bl fn_803165E0
    addi r3, r31, 0x1618
    bl fn_803165E0
    lis r4, fn_803165E4@ha
    lis r5, fn_8008A76C@ha
    addi r3, r31, 0x1648
    li r6, 0x214
    addi r4, r4, fn_803165E4@l
    addi r5, r5, fn_8008A76C@l
    li r7, 0x3
    bl fn_806958E0
    li r0, 0xf
    stw r29, 0x1c84(r31)
    addi r3, r31, 0x1c8c
    stw r0, 0x1c88(r31)
    bl fn_802BABC0
    li r5, 0x4
    li r0, 0x8
    lis r29, lbl_8074959C@ha
    stw r30, 0x1c90(r31)
    addi r3, r1, 0x2c
    stw r30, 0x1c94(r31)
    addi r4, r29, lbl_8074959C@l
    stw r5, 0x1c98(r31)
    stw r0, 0x1c9c(r31)
    bl fn_8003E4A4
    addi r29, r29, lbl_8074959C@l
    addi r3, r1, 0x20
    addi r4, r29, 0x18
    bl fn_8003E4A4
    addi r3, r1, 0x14
    addi r4, r28, 0x2c
    bl fn_8003E4A4
    addi r3, r1, 0x74
    addi r4, r29, 0x2b
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
    b lbl_fn_803161F8_00000E54
lbl_fn_803161F8_00000DD4:
    addi r3, r1, 0x98
    bl fn_800ED4D8
    bl fn_8004212C
    addi r4, r29, 0x2d
    li r5, 0x8
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_803161F8_00000E14
    addi r3, r1, 0x98
    bl fn_800ED4D8
    bl fn_8004212C
    mr r4, r3
    addi r3, r1, 0x20
    addi r4, r4, 0x8
    bl fn_8020A780
    b lbl_fn_803161F8_00000E4C
lbl_fn_803161F8_00000E14:
    addi r3, r1, 0x98
    bl fn_800ED4D8
    bl fn_8004212C
    addi r4, r29, 0x36
    li r5, 0x7
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_803161F8_00000E4C
    addi r3, r1, 0x98
    bl fn_800ED4D8
    bl fn_8004212C
    addi r3, r3, 0x7
    bl fn_800DC12C
    stw r3, 0x14d0(r31)
lbl_fn_803161F8_00000E4C:
    addi r3, r1, 0x98
    bl fn_800ED4E0
lbl_fn_803161F8_00000E54:
    addi r3, r1, 0x38
    addi r4, r1, 0xd4
    bl fn_800EDFE8
    addi r3, r1, 0x98
    addi r4, r1, 0x38
    bl fn_800EC254
    mr r30, r3
    addi r3, r1, 0x38
    li r4, -0x1
    bl fn_800ED42C
    cmpwi r30, 0x0
    bne lbl_fn_803161F8_00000DD4
    addi r3, r1, 0x98
    li r4, -0x1
    bl fn_800ED42C
    addi r3, r1, 0x8
    addi r4, r1, 0x2c
    addi r5, r1, 0x20
    bl fn_8006AFF8
    addi r3, r1, 0x8
    bl fn_8004212C
    lwz r12, 0x14b0(r31)
    mr r4, r3
    addi r3, r31, 0x14b0
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lis r4, lbl_8074959C@ha
    addi r3, r31, 0x1550
    addi r30, r4, lbl_8074959C@l
    addi r4, r30, 0x3e
    bl fn_8023780C
    addi r3, r31, 0x1584
    addi r4, r30, 0x4b
    bl fn_80237654
    addi r3, r31, 0x1590
    addi r4, r30, 0x5c
    bl fn_8023780C
    addi r3, r31, 0x159c
    addi r4, r30, 0x6a
    bl fn_80237654
    addi r3, r31, 0x15a8
    addi r4, r30, 0x7b
    bl fn_80237654
    li r28, 0x0
    li r29, 0x0
lbl_fn_803161F8_00000F0C:
    add r3, r31, r29
    addi r4, r30, 0x8c
    addi r3, r3, 0x1648
    li r5, 0x0
    bl fn_8008AD4C
    addi r28, r28, 0x1
    addi r29, r29, 0x214
    cmpwi r28, 0x3
    blt lbl_fn_803161F8_00000F0C
    lwz r0, 0x12a4(r31)
    addi r3, r1, 0x8
    li r4, -0x1
    oris r0, r0, 0x20
    stw r0, 0x12a4(r31)
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
    mr r3, r31
    lwz r31, 0x10c(r1)
    lwz r30, 0x108(r1)
    lwz r29, 0x104(r1)
    lwz r28, 0x100(r1)
    lwz r0, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_803165E0(void)
{
    nofralloc
    blr
}

asm void fn_803165E4(void)
{
    nofralloc
    li r4, 0x9
    b fn_8008A4E0
}

asm void fn_803165EC(void)
{
    nofralloc
    stwu r1, -0x6a0(r1)
    mflr r0
    stw r0, 0x6a4(r1)
    addi r11, r1, 0x670
    stfd f31, 0x690(r1)
    psq_st f31, 0x698(r1), 0, 0
    stfd f30, 0x680(r1)
    psq_st f30, 0x688(r1), 0, 0
    stfd f29, 0x670(r1)
    psq_st f29, 0x678(r1), 0, 0
    bl _savegpr_27
    addi r31, r3, 0x1648
    mr r30, r3
    mr r27, r31
    li r28, 0x0
lbl_fn_803165EC_00000FE4:
    mr r3, r27
    bl fn_8008B140
    cmpwi r3, 0x0
    beq lbl_fn_803165EC_00000FFC
    li r3, 0x0
    b lbl_fn_803165EC_000013F4
lbl_fn_803165EC_00000FFC:
    addi r28, r28, 0x1
    addi r27, r27, 0x214
    cmpwi r28, 0x3
    blt lbl_fn_803165EC_00000FE4
    mr r3, r30
    bl fn_8013655C
    cmpwi r3, 0x0
    bne lbl_fn_803165EC_000013F0
    addi r3, r30, 0x14b0
    bl fn_80473F50
    cmpwi r3, 0x0
    bne lbl_fn_803165EC_000013F0
    addi r3, r30, 0x1550
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_803165EC_000013F0
    addi r3, r30, 0x1584
    bl fn_802376D0
    cmpwi r3, 0x0
    bne lbl_fn_803165EC_000013F0
    addi r3, r30, 0x1590
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_803165EC_000013F0
    addi r3, r30, 0x159c
    bl fn_802376D0
    cmpwi r3, 0x0
    bne lbl_fn_803165EC_000013F0
    addi r3, r30, 0x15a8
    bl fn_802376D0
    cmpwi r3, 0x0
    bne lbl_fn_803165EC_000013F0
    lwz r0, 0x1c8c(r30)
    lis r3, lbl_8074959C@ha
    addi r3, r3, lbl_8074959C@l
    cmpwi r0, 0x0
    addi r4, r3, 0xa0
    bne lbl_fn_803165EC_000010B4
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_803165EC_000010B4
    addi r3, r3, 0x10
    bl fn_8008937C
    stw r3, 0x1c8c(r30)
    mr r28, r3
    b lbl_fn_803165EC_000010B8
lbl_fn_803165EC_000010B4:
    li r28, 0x0
lbl_fn_803165EC_000010B8:
    lis r4, lbl_8074959C@ha
    mr r3, r28
    addi r29, r4, lbl_8074959C@l
    addi r5, r30, 0x1c90
    addi r4, r29, 0xa4
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r28
    addi r4, r29, 0xae
    addi r5, r30, 0x1c84
    li r6, 0x1
    li r7, 0x2710
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r28
    addi r4, r29, 0xb8
    addi r5, r30, 0x1c88
    li r6, 0x1
    li r7, 0x2710
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r28
    addi r4, r29, 0xc1
    addi r5, r30, 0x1c94
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    lfs f1, lbl_80884D6C
    mr r3, r28
    lfs f2, lbl_80884D70
    addi r4, r29, 0xca
    lfs f3, lbl_80884D74
    addi r5, r30, 0x14f0
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    mr r3, r28
    addi r4, r29, 0xd9
    addi r5, r30, 0x58c
    li r6, 0x1
    li r7, 0x64
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_80884D78
    mr r3, r28
    lfs f2, lbl_80884D7C
    addi r4, r29, 0xe4
    fmr f3, f1
    addi r5, r30, 0x528
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    addi r3, r30, 0x14b0
    bl fn_80470580
    cmpwi r3, 0x0
    beq lbl_fn_803165EC_000012FC
    addi r3, r30, 0x14b0
    bl fn_8047059C
    mr r27, r3
    addi r3, r30, 0x14b0
    bl fn_80470580
    lis r4, lbl_807772D0@ha
    li r0, 0x0
    addi r4, r4, lbl_807772D0@l
    stw r4, 0x18(r1)
    mr r28, r3
    addi r3, r1, 0x28
    stw r0, 0x1c(r1)
    li r4, 0x0
    li r5, 0x400
    stw r0, 0x20(r1)
    stw r0, 0x24(r1)
    stw r0, 0x648(r1)
    bl memset
    addi r3, r1, 0x628
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x18(r1)
    mr r4, r28
    mr r5, r27
    addi r3, r1, 0x18
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0x18
    addi r4, r4, lbl_807772B0@l
    stw r4, 0x18(r1)
    la r4, lbl_8087D708
    bl fn_8005B6E8
lbl_fn_803165EC_00001240:
    addi r3, r1, 0x18
    bl fn_8005B3CC
    mr r27, r3
    addi r4, r29, 0xe8
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803165EC_00001274
    addi r3, r1, 0x18
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x157c(r30)
    b lbl_fn_803165EC_000012EC
lbl_fn_803165EC_00001274:
    mr r3, r27
    addi r4, r29, 0xf0
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803165EC_000012A0
    addi r3, r1, 0x18
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x1580(r30)
    b lbl_fn_803165EC_000012EC
lbl_fn_803165EC_000012A0:
    mr r3, r27
    addi r4, r29, 0xb8
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803165EC_000012C8
    addi r3, r1, 0x18
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x1c88(r30)
    b lbl_fn_803165EC_000012EC
lbl_fn_803165EC_000012C8:
    mr r3, r27
    addi r4, r29, 0xae
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803165EC_000012EC
    addi r3, r1, 0x18
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x1c84(r30)
lbl_fn_803165EC_000012EC:
    addi r3, r1, 0x18
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_803165EC_00001240
lbl_fn_803165EC_000012FC:
    lwz r0, 0x7ec(r30)
    lwz r4, 0x14d0(r30)
    ori r0, r0, 0x1c0
    oris r0, r0, 0x1
    cmpwi r4, 0x0
    ori r0, r0, 0xc21d
    oris r0, r0, 0x288
    stw r0, 0x7ec(r30)
    bgt lbl_fn_803165EC_00001330
    lwz r3, lbl_8087F8A0
    lwz r0, 0x48(r3)
    stw r0, 0x14d4(r30)
    b lbl_fn_803165EC_0000133C
lbl_fn_803165EC_00001330:
    lwz r3, lbl_8087F8A0
    bl fn_8011F91C
    stw r3, 0x14d4(r30)
lbl_fn_803165EC_0000133C:
    lwz r0, 0x54c(r30)
    lis r3, lbl_80749578@ha
    lfd f29, lbl_80749578@l(r3)
    li r27, 0x0
    ori r0, r0, 0x200
    stw r0, 0x54c(r30)
    lfs f30, lbl_80884D64
    lis r29, 0x4330
    lfs f31, lbl_80884D78
lbl_fn_803165EC_00001360:
    mr r3, r31
    li r4, 0x3
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    bl fn_80094D88
    addi r0, r27, 0x1
    addi r27, r27, 0x1
    xoris r0, r0, 0x8000
    stw r0, 0x654(r1)
    lfs f0, lbl_8087DC4C
    cmpwi r27, 0x3
    stw r29, 0x650(r1)
    lfs f1, lbl_8087DC48
    lfd f2, 0x650(r1)
    stfs f31, 0x40(r31)
    fsubs f0, f0, f1
    fsubs f2, f2, f29
    stfs f31, 0x44(r31)
    fmuls f2, f2, f30
    stfs f31, 0x48(r31)
    stfs f31, 0x8(r1)
    fmadds f0, f2, f0, f1
    stfs f31, 0xc(r1)
    stfs f0, 0x4c(r31)
    addi r31, r31, 0x214
    lwz r0, 0x164c(r30)
    stfs f31, 0x10(r1)
    ori r0, r0, 0x10
    stw r0, 0x164c(r30)
    addi r30, r30, 0x214
    stfs f0, 0x14(r1)
    blt lbl_fn_803165EC_00001360
    li r3, 0x1
    b lbl_fn_803165EC_000013F4
lbl_fn_803165EC_000013F0:
    li r3, 0x0
lbl_fn_803165EC_000013F4:
    addi r11, r1, 0x670
    psq_l f31, 0x698(r1), 0, 0
    lfd f31, 0x690(r1)
    psq_l f30, 0x688(r1), 0, 0
    lfd f30, 0x680(r1)
    psq_l f29, 0x678(r1), 0, 0
    lfd f29, 0x670(r1)
    bl _restgpr_27
    lwz r0, 0x6a4(r1)
    mtlr r0
    addi r1, r1, 0x6a0
    blr
}

asm void fn_80316A68(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r11, r1, 0x70
    bl _savegpr_27
    addi r31, r3, 0x1a70
    mr r30, r3
    mr r29, r31
    li r28, 0x2
lbl_fn_80316A68_00001448:
    cmpwi r28, 0x0
    bne lbl_fn_80316A68_0000145C
    addi r3, r30, 0xb0
    bl fn_80266154
    b lbl_fn_80316A68_00001470
lbl_fn_80316A68_0000145C:
    subi r0, r28, 0x1
    mulli r0, r0, 0x214
    add r3, r30, r0
    addi r3, r3, 0x1648
    bl fn_80266154
lbl_fn_80316A68_00001470:
    mr r4, r3
    mr r3, r29
    bl fn_80316E38
    addi r3, r1, 0x40
    li r4, 0x0
    bl fn_80317034
    mr r3, r29
    addi r5, r1, 0x40
    li r4, 0x0
    bl fn_800902C0
    addi r3, r1, 0x40
    li r4, -0x1
    bl fn_8000D3A8
    subic. r28, r28, 0x1
    subi r29, r29, 0x214
    bge lbl_fn_80316A68_00001448
    mr r3, r30
    bl fn_80317EA0
    lwz r0, 0xd18(r30)
    lwz r4, 0x1574(r30)
    lwz r5, 0x14c0(r30)
    cmpwi r0, 0x0
    subi r4, r4, 0x1
    lwz r3, 0x1520(r30)
    addi r0, r5, 0x1
    stw r0, 0x14c0(r30)
    addi r0, r3, 0x1
    stw r4, 0x1574(r30)
    stw r0, 0x1520(r30)
    beq lbl_fn_80316A68_000014F4
    lwz r0, 0x14b8(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80316A68_00001504
lbl_fn_80316A68_000014F4:
    mr r3, r30
    li r4, 0x3
    bl fn_8016E970
    b lbl_fn_80316A68_000017BC
lbl_fn_80316A68_00001504:
    beq lbl_fn_80316A68_0000159C
    lwz r0, 0x58c(r30)
    cmplwi r0, 0xc
    bgt lbl_fn_80316A68_0000158C
    lis r3, jumptable_80788728@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_80788728@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    mr r3, r30
    bl fn_80319384
    b lbl_fn_80316A68_0000159C
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0xec(r12)
    mtctr r12
    bctrl
    b lbl_fn_80316A68_0000159C
    mr r3, r30
    bl fn_803191FC
    b lbl_fn_80316A68_0000159C
    mr r3, r30
    bl fn_803199A4
    b lbl_fn_80316A68_0000159C
    mr r3, r30
    bl fn_80319578
    b lbl_fn_80316A68_0000159C
    mr r3, r30
    bl fn_8031958C
    b lbl_fn_80316A68_0000159C
    mr r3, r30
    bl fn_80318F9C
    b lbl_fn_80316A68_0000159C
lbl_fn_80316A68_0000158C:
    mr r3, r30
    bl fn_80318F98
    mr r3, r30
    bl fn_80317EF8
lbl_fn_80316A68_0000159C:
    lwz r0, 0x58c(r30)
    cmpwi r0, 0x2
    beq lbl_fn_80316A68_000015C0
    cmpwi r0, 0xb
    beq lbl_fn_80316A68_000015C0
    cmpwi r0, 0xc
    beq lbl_fn_80316A68_000015C0
    mr r3, r30
    bl fn_80318A30
lbl_fn_80316A68_000015C0:
    lwz r0, lbl_8087F3F4
    cmpwi r0, 0x0
    bne lbl_fn_80316A68_000015DC
    mr r3, r30
    bl fn_803176D0
    li r0, 0x1
    stw r0, lbl_8087F3F4
lbl_fn_80316A68_000015DC:
    addi r3, r30, 0x7d4
    bl fn_80316F74
    cmpwi r3, 0x0
    bne lbl_fn_80316A68_00001610
    lwz r4, 0x7e0(r30)
    rlwinm r3, r4, 0, 8, 8
    subis r0, r3, 0x80
    cmplwi r0, 0x0
    beq lbl_fn_80316A68_00001610
    rlwinm r3, r4, 0, 7, 7
    subis r0, r3, 0x100
    cmplwi r0, 0x0
    bne lbl_fn_80316A68_000016C4
lbl_fn_80316A68_00001610:
    lis r4, lbl_8074959C@ha
    addi r3, r30, 0xb0
    addi r4, r4, lbl_8074959C@l
    addi r4, r4, 0xf9
    bl fn_80092954
    mr r28, r3
    bl fn_8000DD98
    stw r3, 0x18(r1)
    addi r3, r1, 0x30
    addi r4, r1, 0x18
    bl fn_8000DD14
    lfs f1, 0x30(r1)
    lfs f0, lbl_80884D74
    lfs f2, lbl_80884D80
    fsubs f0, f1, f0
    fcmpo cr0, f2, f0
    ble lbl_fn_80316A68_00001658
    b lbl_fn_80316A68_0000165C
lbl_fn_80316A68_00001658:
    fmr f2, f0
lbl_fn_80316A68_0000165C:
    lfs f1, 0x34(r1)
    lfs f0, lbl_80884D74
    lfs f3, lbl_80884D80
    fsubs f0, f1, f0
    stfs f2, 0x30(r1)
    fcmpo cr0, f3, f0
    ble lbl_fn_80316A68_0000167C
    b lbl_fn_80316A68_00001680
lbl_fn_80316A68_0000167C:
    fmr f3, f0
lbl_fn_80316A68_00001680:
    lfs f1, 0x38(r1)
    lfs f0, lbl_80884D74
    lfs f2, lbl_80884D80
    fsubs f0, f1, f0
    stfs f3, 0x34(r1)
    fcmpo cr0, f2, f0
    ble lbl_fn_80316A68_000016A0
    b lbl_fn_80316A68_000016A4
lbl_fn_80316A68_000016A0:
    fmr f2, f0
lbl_fn_80316A68_000016A4:
    stfs f2, 0x38(r1)
    addi r3, r1, 0x30
    bl fn_80316FC0
    stw r3, 0x14(r1)
    mr r3, r28
    addi r4, r1, 0x14
    bl fn_80316F9C
    b lbl_fn_80316A68_00001774
lbl_fn_80316A68_000016C4:
    lis r4, lbl_8074959C@ha
    addi r3, r30, 0xb0
    addi r4, r4, lbl_8074959C@l
    addi r4, r4, 0xf9
    bl fn_80092954
    mr r28, r3
    bl fn_8000DD98
    stw r3, 0x10(r1)
    addi r3, r1, 0x20
    addi r4, r1, 0x10
    bl fn_8000DD14
    lfs f1, lbl_80884D74
    lfs f0, 0x20(r1)
    lfs f2, lbl_80884D84
    fadds f0, f1, f0
    fcmpo cr0, f2, f0
    bge lbl_fn_80316A68_0000170C
    b lbl_fn_80316A68_00001710
lbl_fn_80316A68_0000170C:
    fmr f2, f0
lbl_fn_80316A68_00001710:
    lfs f1, lbl_80884D74
    lfs f0, 0x24(r1)
    lfs f3, lbl_80884D84
    fadds f0, f1, f0
    stfs f2, 0x20(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_80316A68_00001730
    b lbl_fn_80316A68_00001734
lbl_fn_80316A68_00001730:
    fmr f3, f0
lbl_fn_80316A68_00001734:
    lfs f1, lbl_80884D74
    lfs f0, 0x28(r1)
    lfs f2, lbl_80884D84
    fadds f0, f1, f0
    stfs f3, 0x24(r1)
    fcmpo cr0, f2, f0
    bge lbl_fn_80316A68_00001754
    b lbl_fn_80316A68_00001758
lbl_fn_80316A68_00001754:
    fmr f2, f0
lbl_fn_80316A68_00001758:
    stfs f2, 0x28(r1)
    addi r3, r1, 0x20
    bl fn_80316FC0
    stw r3, 0xc(r1)
    mr r3, r28
    addi r4, r1, 0xc
    bl fn_80316F9C
lbl_fn_80316A68_00001774:
    lis r29, lbl_8074959C@ha
    li r28, 0x2
    addi r29, r29, lbl_8074959C@l
lbl_fn_80316A68_00001780:
    mr r3, r31
    addi r4, r29, 0xf9
    bl fn_80092954
    mr r27, r3
    addi r3, r30, 0xb0
    addi r4, r29, 0xf9
    bl fn_80092954
    bl fn_8000DD98
    stw r3, 0x8(r1)
    mr r3, r27
    addi r4, r1, 0x8
    bl fn_80316F9C
    subic. r28, r28, 0x1
    subi r31, r31, 0x214
    bge lbl_fn_80316A68_00001780
lbl_fn_80316A68_000017BC:
    mr r3, r30
    bl fn_80318720
    mr r3, r30
    bl fn_8014C540
    mr r3, r30
    bl fn_80145334
    mr r3, r30
    bl fn_80318594
    addi r11, r1, 0x70
    bl _restgpr_27
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_80316E38(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    psq_l f1, 0x0(r4), 0, 0
    stw r0, 0x64(r1)
    psq_l f2, 0x8(r4), 0, 0
    stfd f31, 0x50(r1)
    psq_l f3, 0x10(r4), 0, 0
    psq_st f31, 0x58(r1), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    stfd f30, 0x40(r1)
    psq_l f5, 0x20(r4), 0, 0
    psq_st f30, 0x48(r1), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    stw r31, 0x3c(r1)
    mr r31, r4
    lfs f0, 0x28(r4)
    stw r30, 0x38(r1)
    mr r30, r3
    lfs f7, 0x18(r4)
    psq_st f1, 0x8(r3), 0, 0
    lfs f8, 0x8(r4)
    psq_st f2, 0x10(r3), 0, 0
    psq_st f3, 0x18(r3), 0, 0
    psq_st f4, 0x20(r3), 0, 0
    psq_st f5, 0x28(r3), 0, 0
    psq_st f6, 0x30(r3), 0, 0
    addi r3, r1, 0x20
    stfs f8, 0x20(r1)
    stfs f7, 0x24(r1)
    stfs f0, 0x28(r1)
    bl fn_805F9940
    lfs f0, 0x24(r31)
    fmr f30, f1
    lfs f7, 0x14(r31)
    addi r3, r1, 0x14
    lfs f8, 0x4(r31)
    stfs f8, 0x14(r1)
    stfs f7, 0x18(r1)
    stfs f0, 0x1c(r1)
    bl fn_805F9940
    lfs f0, 0x20(r31)
    fmr f31, f1
    lfs f7, 0x10(r31)
    addi r3, r1, 0x8
    lfs f8, 0x0(r31)
    stfs f8, 0x8(r1)
    stfs f7, 0xc(r1)
    stfs f0, 0x10(r1)
    bl fn_805F9940
    frsp f7, f31
    stfs f1, 0x2c(r1)
    frsp f0, f30
    stfs f31, 0x30(r1)
    fcmpo cr0, f7, f0
    stfs f30, 0x34(r1)
    ble lbl_fn_80316E38_000018D8
    b lbl_fn_80316E38_000018DC
lbl_fn_80316E38_000018D8:
    fmr f7, f0
lbl_fn_80316E38_000018DC:
    lfs f8, 0x2c(r1)
    fcmpo cr0, f8, f7
    ble lbl_fn_80316E38_000018EC
    b lbl_fn_80316E38_00001904
lbl_fn_80316E38_000018EC:
    lfs f8, 0x30(r1)
    lfs f0, 0x34(r1)
    fcmpo cr0, f8, f0
    ble lbl_fn_80316E38_00001900
    b lbl_fn_80316E38_00001904
lbl_fn_80316E38_00001900:
    fmr f8, f0
lbl_fn_80316E38_00001904:
    stfs f8, 0x54(r30)
    psq_l f31, 0x58(r1), 0, 0
    lfd f31, 0x50(r1)
    psq_l f30, 0x48(r1), 0, 0
    lfd f30, 0x40(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80316F74(void)
{
    nofralloc
    lwz r4, 0xc(r3)
    li r3, 0x1
    rlwinm r0, r4, 0, 28, 28
    cmplwi r0, 0x8
    beqlr
    rlwinm r0, r4, 0, 22, 22
    cmplwi r0, 0x200
    beqlr
    li r3, 0x0
    blr
}

asm void fn_80316F9C(void)
{
    nofralloc
    lbz r7, 0x0(r4)
    lbz r6, 0x1(r4)
    lbz r5, 0x2(r4)
    lbz r0, 0x3(r4)
    stb r7, 0x18(r3)
    stb r6, 0x19(r3)
    stb r5, 0x1a(r3)
    stb r0, 0x1b(r3)
    blr
}
