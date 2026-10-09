#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void fn_80084320(void);
extern void fn_80092814(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800C31F4(void);
extern void fn_800CB3A0(void);
extern void fn_800CF45C(void);
extern void fn_800F8548(void);
extern void fn_800FAB80(void);
extern void fn_801231D0(void);
extern void fn_8015ECC4(void);
extern void fn_8016DDB0(void);
extern void fn_8016E970(void);
extern void fn_80178208(void);
extern void fn_80194E2C(void);
extern void fn_80219E6C(void);
extern void fn_80232B7C(void);
extern void fn_80239DAC(void);
extern void fn_8023A8B4(void);
extern void fn_80351AB8(void);
extern void fn_80370AE4(void);
extern void fn_803E3384(void);
extern void fn_803EA77C(void);
extern void fn_803EAF60(void);
extern void fn_803EBAC8(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9940(void);
extern void fn_805F9990(void);
extern void fn_80680CF8(void);
extern void fn_8068AEA4(void);
extern void fn_8068B100(void);

/* External data declarations */
extern u8 lbl_8074A8D8[];
extern u8 lbl_8074AA58[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087EFE8;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F490;
extern u32 lbl_8087F498;
extern u32 lbl_8087F8A0;
extern u32 lbl_80885378;
extern u32 lbl_8088537C;
extern u32 lbl_80885398;
extern u32 lbl_8088539C;
extern u32 lbl_808853A8;
extern u32 lbl_808853BC;
extern u32 lbl_808853C4;
extern u32 lbl_808853D8;
extern u32 lbl_808853DC;
extern u32 lbl_808853E0;
extern u32 lbl_8088542C;
extern u32 lbl_8088546C;
extern u32 lbl_80885478;
extern u32 lbl_808854A0;
extern u32 lbl_808854A4;
extern u32 lbl_808854A8;
extern u32 lbl_808854AC;

/* Function declarations */
void fn_8034EA50(void);
void fn_8034ECE8(void);
void fn_8034F384(void);
void fn_8034F41C(void);
void fn_8034F53C(void);
void fn_8034F788(void);
void fn_8034FB50(void);
void fn_80350070(void);

asm void fn_8034EA50(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r4, lbl_8074A8D8@ha
    lfs f3, lbl_808854A0
    stw r0, 0x34(r1)
    lis r0, 0x4330
    lfd f5, lbl_8074A8D8@l(r4)
    stfd f31, 0x20(r1)
    lfs f0, lbl_80885378
    psq_st f31, 0x28(r1), 0, 0
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    lwz r5, lbl_8087F0A8
    stw r0, 0x8(r1)
    lwz r0, 0x30(r5)
    lfs f2, 0x578(r3)
    mullw r0, r0, r0
    lfs f1, 0x52c(r3)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f4, 0x8(r1)
    fsubs f4, f4, f5
    fdivs f3, f3, f4
    fadds f2, f2, f3
    stfs f2, 0x578(r3)
    fadds f1, f1, f2
    stfs f1, 0x52c(r3)
    fcmpo cr0, f1, f0
    bge lbl_fn_8034EA50_00000080
    stfs f0, 0x52c(r3)
    stfs f0, 0x578(r3)
lbl_fn_8034EA50_00000080:
    lwz r0, 0x14b4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8034EA50_000000FC
    lfs f31, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_8034EA50_00000278
    lfs f0, lbl_80885398
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80885378
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x3e
    lfs f2, lbl_808853C4
    li r6, 0x1
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r3, 0x14b4(r31)
    li r0, 0x0
    stw r0, 0x14b8(r31)
    addi r3, r3, 0x1
    stw r3, 0x14b4(r31)
    stw r0, 0x1804(r31)
    b lbl_fn_8034EA50_00000278
lbl_fn_8034EA50_000000FC:
    cmpwi r0, 0x1
    bne lbl_fn_8034EA50_0000016C
    lwz r4, 0x14b8(r3)
    lwz r0, 0x17fc(r3)
    cmpw r4, r0
    bge lbl_fn_8034EA50_00000124
    lwz r4, 0x1804(r3)
    lwz r0, 0x1800(r3)
    cmpw r4, r0
    ble lbl_fn_8034EA50_00000278
lbl_fn_8034EA50_00000124:
    lfs f0, lbl_80885398
    li r0, 0x1
    stw r0, 0x3fc(r3)
    li r4, 0x0
    lfs f1, lbl_80885378
    li r5, 0x3f
    stfs f0, 0x2fc(r3)
    li r6, 0x0
    lfs f2, lbl_808853C4
    li r7, 0x0
    stfs f0, 0x2e8(r3)
    li r8, 0x1
    addi r3, r3, 0xb0
    bl fn_80097C08
    lwz r3, 0x14b4(r31)
    addi r0, r3, 0x1
    stw r0, 0x14b4(r31)
    b lbl_fn_8034EA50_00000278
lbl_fn_8034EA50_0000016C:
    lfs f31, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_8034EA50_00000278
    li r30, 0x0
    stw r30, 0x14b4(r31)
    stw r30, 0x14b8(r31)
    stw r30, 0x14c0(r31)
    stw r30, 0x17e8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r4, r31
    li r5, 0x3ea
    li r6, 0x1
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3e8
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3ed
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3ef
    li r6, 0x1
    bl fn_80239DAC
    bl fn_80680CF8
    lis r4, 0x8889
    lwz r0, 0x14c0(r31)
    subi r5, r4, 0x7777
    mulhw r5, r5, r3
    li r4, 0x3
    add r5, r5, r3
    srawi r5, r5, 5
    srwi r6, r5, 31
    add r5, r5, r6
    mulli r5, r5, 0x3c
    subf r5, r5, r3
    mr r3, r31
    subfic r5, r5, 0x1e
    add r0, r0, r5
    stw r0, 0x14c0(r31)
    bl fn_8016E970
    lfs f0, lbl_80885398
    li r0, 0x1
    stw r30, 0x58c(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80885378
    li r4, 0x0
    stw r0, 0x3fc(r31)
    li r5, 0x2
    lfs f2, lbl_808853C4
    li r6, 0x1
    stfs f0, 0x2fc(r31)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
lbl_fn_8034EA50_00000278:
    lwz r0, 0x34(r1)
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8034ECE8(void)
{
    nofralloc
    stwu r1, -0x150(r1)
    mflr r0
    stw r0, 0x154(r1)
    addi r11, r1, 0x120
    stfd f31, 0x140(r1)
    psq_st f31, 0x148(r1), 0, 0
    stfd f30, 0x130(r1)
    psq_st f30, 0x138(r1), 0, 0
    stfd f29, 0x120(r1)
    psq_st f29, 0x128(r1), 0, 0
    bl _savegpr_27
    lwz r5, lbl_8087F0A8
    lis r0, 0x4330
    stw r0, 0x100(r1)
    lis r4, lbl_8074A8D8@ha
    lwz r0, 0x30(r5)
    mr r30, r3
    lfd f7, lbl_8074A8D8@l(r4)
    mullw r0, r0, r0
    lfs f5, lbl_808854A0
    lfs f4, 0x578(r3)
    lfs f3, 0x52c(r3)
    lfs f0, lbl_80885378
    xoris r0, r0, 0x8000
    stw r0, 0x104(r1)
    lfd f6, 0x100(r1)
    fsubs f6, f6, f7
    fdivs f5, f5, f6
    fadds f4, f4, f5
    stfs f4, 0x578(r3)
    fadds f3, f3, f4
    stfs f3, 0x52c(r3)
    fcmpo cr0, f3, f0
    bge lbl_fn_8034ECE8_00000328
    stfs f0, 0x52c(r3)
    stfs f0, 0x578(r3)
lbl_fn_8034ECE8_00000328:
    lwz r4, 0x14b4(r3)
    lwz r31, lbl_8087F430
    cmpwi r4, 0x0
    bne lbl_fn_8034ECE8_00000438
    lfs f3, 0x2e4(r3)
    lfs f0, lbl_808853BC
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_8034ECE8_00000904
    lfs f0, lbl_80885478
    addi r4, r4, 0x1
    li r0, 0x0
    stw r4, 0x14b4(r3)
    li r4, 0x3ee
    stw r0, 0x14b8(r3)
    stfs f0, 0x2e8(r3)
    mr r3, r30
    bl fn_80232B7C
    lfs f0, lbl_80885378
    li r29, -0x1
    lfs f1, lbl_80885398
    li r0, 0x1
    stfs f0, 0x20(r1)
    addi r4, r30, 0x1690
    addi r5, r30, 0xb0
    addi r7, r1, 0x14
    stfs f0, 0x24(r1)
    addi r8, r1, 0x20
    addi r9, r1, 0x30
    li r6, 0x0
    stfs f0, 0x28(r1)
    li r10, -0x1
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f1, 0x30(r1)
    stfs f1, 0x34(r1)
    stfs f1, 0x38(r1)
    stfs f1, 0x3c(r1)
    stw r29, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r3, lbl_8087F8A0
    lwz r27, lbl_8087F048
    lwz r28, 0x48(r3)
    mr r3, r27
    bl fn_800F8548
    mr r31, r3
    li r3, 0x780
    bl fn_80219E6C
    stw r29, 0x8(r1)
    mr r5, r3
    lfs f1, lbl_80885378
    mr r3, r27
    stw r29, 0xc(r1)
    mr r4, r28
    lfs f2, lbl_80885398
    mr r6, r31
    addi r7, r30, 0x528
    addi r8, r30, 0x534
    li r9, 0x0
    li r10, 0x1e
    bl fn_800FAB80
    lwz r3, 0x14c4(r30)
    lfs f0, lbl_80885398
    stfs f0, 0xad0(r3)
    b lbl_fn_8034ECE8_00000904
lbl_fn_8034ECE8_00000438:
    cmpwi r4, 0x1
    bne lbl_fn_8034ECE8_0000069C
    lwz r0, 0x8a0(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8034ECE8_000005C0
    lfs f29, 0x594(r31)
    addi r5, r31, 0x4d8
    lfs f30, 0x59c(r31)
    lfs f31, 0x5a0(r31)
    lfs f13, 0x5a4(r31)
    lfs f12, 0x5a8(r31)
    lfs f11, 0x5ac(r31)
    lfs f10, 0x5b0(r31)
    lfs f9, 0x5b4(r31)
    lfs f8, 0x5b8(r31)
    lfs f7, 0x5bc(r31)
    lwz r4, 0x5c0(r31)
    lfs f6, lbl_808854A4
    stw r3, 0x8a0(r31)
    lfs f5, lbl_808854A8
    lwz r0, 0x4d8(r31)
    lfs f0, lbl_8088542C
    lfs f4, lbl_8088537C
    cmpwi r0, 0x4
    stfs f29, 0xcc(r1)
    stfs f30, 0xd4(r1)
    stfs f31, 0xd8(r1)
    stfs f13, 0xdc(r1)
    stfs f12, 0xe0(r1)
    stfs f11, 0xe4(r1)
    stfs f10, 0xe8(r1)
    stfs f9, 0xec(r1)
    stfs f8, 0xf0(r1)
    stfs f7, 0xf4(r1)
    stw r4, 0xf8(r1)
    stfs f6, 0xc8(r1)
    stfs f5, 0xc4(r1)
    stfs f0, 0xc0(r1)
    stfs f4, 0xd0(r1)
    beq lbl_fn_8034ECE8_0000052C
    li r0, 0x4
    stw r0, 0x0(r5)
    lfs f3, lbl_8088546C
    stfs f0, 0xc(r5)
    lfs f0, lbl_80885398
    stfs f5, 0x10(r5)
    stfs f6, 0x14(r5)
    stfs f29, 0x18(r5)
    stfs f4, 0x1c(r5)
    stfs f30, 0x20(r5)
    stfs f31, 0x24(r5)
    stfs f13, 0x28(r5)
    stfs f12, 0x2c(r5)
    stfs f11, 0x30(r5)
    stfs f10, 0x34(r5)
    stfs f9, 0x38(r5)
    stfs f8, 0x3c(r5)
    stfs f7, 0x40(r5)
    stw r4, 0x44(r5)
    stfs f3, 0x8(r5)
    stfs f0, 0x4(r5)
lbl_fn_8034ECE8_0000052C:
    lis r4, lbl_8074AA58@ha
    li r5, 0x0
    addi r4, r4, lbl_8074AA58@l
    addi r3, r3, 0xb0
    addi r4, r4, 0x3b5
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8034ECE8_00000554
    li r3, 0x0
    b lbl_fn_8034ECE8_00000560
lbl_fn_8034ECE8_00000554:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r3, r3, r0
lbl_fn_8034ECE8_00000560:
    lfs f2, 0x2c(r3)
    addi r4, r1, 0x64
    lfs f0, 0x1c(r3)
    li r0, 0x1
    lfs f3, 0xc(r3)
    addi r5, r31, 0x97c
    lbz r3, 0x97c(r31)
    stb r3, 0x97d(r31)
    lfs f4, lbl_80885378
    stfs f3, 0x64(r1)
    stfs f0, 0x68(r1)
    stb r0, 0x97c(r31)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0xc(r5), 0, 0
    stfs f2, 0x990(r31)
    stfs f2, 0x6c(r1)
    stfs f4, 0x9a0(r31)
    b lbl_fn_8034ECE8_000005AC
    b lbl_fn_8034ECE8_000005B0
lbl_fn_8034ECE8_000005AC:
    li r0, 0x0
lbl_fn_8034ECE8_000005B0:
    stw r0, 0x4(r5)
    li r0, 0x1
    stb r0, 0x180b(r30)
    b lbl_fn_8034ECE8_0000062C
lbl_fn_8034ECE8_000005C0:
    lis r4, lbl_8074AA58@ha
    stw r3, 0x8a0(r31)
    addi r4, r4, lbl_8074AA58@l
    li r5, 0x0
    addi r4, r4, 0x3b5
    addi r3, r3, 0xb0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8034ECE8_000005EC
    li r5, 0x0
    b lbl_fn_8034ECE8_000005F8
lbl_fn_8034ECE8_000005EC:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r5, r3, r0
lbl_fn_8034ECE8_000005F8:
    lfs f0, 0x1c(r5)
    addi r4, r1, 0x4c
    lfs f3, 0xc(r5)
    addi r3, r31, 0x988
    lfs f2, 0x2c(r5)
    li r0, 0x1
    stfs f3, 0x4c(r1)
    stfs f0, 0x50(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x990(r31)
    stfs f2, 0x54(r1)
    stb r0, 0x180b(r30)
lbl_fn_8034ECE8_0000062C:
    lfs f29, 0x2e4(r30)
    addi r3, r30, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f29, f1
    cror eq, gt, eq
    bne lbl_fn_8034ECE8_00000904
    lfs f3, lbl_80885398
    li r0, 0x1
    lfs f0, lbl_8088539C
    addi r3, r30, 0xb0
    stw r0, 0x3fc(r30)
    li r4, 0x0
    lfs f1, lbl_80885378
    li r5, 0x3b
    stfs f3, 0x2fc(r30)
    li r6, 0x1
    lfs f2, lbl_808853C4
    li r7, 0x0
    stfs f0, 0x2e8(r30)
    li r8, 0x1
    bl fn_80097C08
    lwz r3, 0x14b4(r30)
    li r0, 0x0
    stw r0, 0x14b8(r30)
    addi r0, r3, 0x1
    stw r0, 0x14b4(r30)
    b lbl_fn_8034ECE8_00000904
lbl_fn_8034ECE8_0000069C:
    lbz r0, 0x180b(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8034ECE8_000006BC
    li r0, 0x0
    stw r0, 0x8a0(r31)
    stw r0, 0x4d8(r31)
    stb r0, 0x97c(r31)
    stb r0, 0x180b(r3)
lbl_fn_8034ECE8_000006BC:
    lwz r4, lbl_8087F8A0
    lfs f0, 0x530(r3)
    lwz r27, 0x48(r4)
    lfs f3, 0x528(r3)
    addi r3, r1, 0x58
    lfs f5, 0x530(r27)
    lfs f4, 0x528(r27)
    fsubs f5, f5, f0
    lfs f0, lbl_80885378
    fsubs f3, f4, f3
    stfs f0, 0x5c(r1)
    stfs f3, 0x58(r1)
    stfs f5, 0x60(r1)
    bl fn_805F9940
    lwz r0, 0x14b8(r30)
    cmpwi r0, 0x708
    blt lbl_fn_8034ECE8_00000904
    lfs f0, lbl_808854AC
    fcmpo cr0, f1, f0
    bge lbl_fn_8034ECE8_00000904
    mr r3, r27
    li r4, 0x0
    bl fn_8016DDB0
    lwz r0, 0x55c(r27)
    mr r28, r3
    cmpwi r0, 0x6
    bne lbl_fn_8034ECE8_00000738
    lwz r0, 0x560(r27)
    cmpwi r0, 0x4
    bne lbl_fn_8034ECE8_00000738
    li r28, 0x1
lbl_fn_8034ECE8_00000738:
    addi r3, r1, 0x58
    mr r4, r3
    bl fn_805F98D0
    lfs f3, lbl_80885378
    addi r3, r1, 0x90
    lfs f0, lbl_80885398
    li r4, 0x79
    stfs f3, 0x40(r1)
    stfs f3, 0x44(r1)
    stfs f0, 0x48(r1)
    lfs f1, 0x538(r30)
    bl fn_805F8E70
    addi r4, r1, 0x40
    addi r3, r1, 0x90
    mr r5, r4
    bl fn_805F93C0
    addi r3, r1, 0x58
    addi r4, r1, 0x40
    bl fn_805F9990
    lfs f0, lbl_80885378
    fcmpo cr0, f1, f0
    bge lbl_fn_8034ECE8_00000794
    li r28, 0x0
lbl_fn_8034ECE8_00000794:
    cmpwi r28, 0x0
    beq lbl_fn_8034ECE8_00000904
    lwz r7, lbl_8087F490
    cmpwi r7, 0x0
    beq lbl_fn_8034ECE8_000007F4
    li r4, 0x6
    stw r4, 0x764(r7)
    li r5, 0x0
    li r3, 0x11
    stw r3, 0x768(r7)
    li r6, -0x1
    li r0, 0x1
    stw r6, 0x76c(r7)
    stw r5, 0x770(r7)
    stw r5, 0x774(r7)
    stw r5, 0x778(r7)
    stw r6, 0x78(r1)
    stw r5, 0x7c(r1)
    stw r5, 0x80(r1)
    stw r5, 0x84(r1)
    stw r4, 0x70(r1)
    stw r3, 0x74(r1)
    stw r0, 0x88(r1)
    stw r0, 0x77c(r7)
lbl_fn_8034ECE8_000007F4:
    lwz r3, lbl_8087F0A8
    li r4, 0x0
    addi r3, r3, 0x48c
    bl fn_801231D0
    cmpwi r3, 0x0
    beq lbl_fn_8034ECE8_00000904
    lwz r4, 0x1550(r30)
    lis r3, lbl_8074AA58@ha
    lwz r0, 0x638(r27)
    addi r3, r3, lbl_8074AA58@l
    stw r0, 0x63c(r27)
    addi r5, r3, 0x3fb
    mr r6, r5
    li r3, 0x38
    stw r4, 0x638(r27)
    li r4, 0x3
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_8034ECE8_0000085C
    mr r4, r27
    mr r5, r30
    li r6, 0x2
    bl fn_80194E2C
    mr r4, r3
lbl_fn_8034ECE8_0000085C:
    mr r3, r27
    bl fn_80178208
    lwz r3, lbl_8087F430
    li r4, 0x6f
    li r5, 0x1
    bl fn_80370AE4
    mr r3, r30
    mr r4, r27
    li r5, 0x2
    bl fn_80351AB8
    lwz r3, lbl_8087F490
    cmpwi r3, 0x0
    beq lbl_fn_8034ECE8_00000894
    bl fn_803E3384
lbl_fn_8034ECE8_00000894:
    lwz r3, lbl_8087EFE8
    cmpwi r3, 0x0
    beq lbl_fn_8034ECE8_000008AC
    li r4, 0x5a
    li r5, 0x0
    bl fn_800CF45C
lbl_fn_8034ECE8_000008AC:
    lwz r3, lbl_8087F498
    cmpwi r3, 0x0
    beq lbl_fn_8034ECE8_000008D0
    li r4, 0xf
    li r5, 0x0
    bl fn_803EBAC8
    lwz r3, lbl_8087F498
    li r4, 0x0
    bl fn_803EAF60
lbl_fn_8034ECE8_000008D0:
    lis r4, lbl_8074AA58@ha
    lfs f1, lbl_80885398
    addi r4, r4, lbl_8074AA58@l
    addi r3, r1, 0x10
    addi r4, r4, 0x3fc
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    li r0, 0x0
    stw r0, 0xd18(r30)
lbl_fn_8034ECE8_00000904:
    addi r11, r1, 0x120
    psq_l f31, 0x148(r1), 0, 0
    lfd f31, 0x140(r1)
    psq_l f30, 0x138(r1), 0, 0
    lfd f30, 0x130(r1)
    psq_l f29, 0x128(r1), 0, 0
    lfd f29, 0x120(r1)
    bl _restgpr_27
    lwz r0, 0x154(r1)
    mtlr r0
    addi r1, r1, 0x150
    blr
}

asm void fn_8034F384(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r31, 0xc(r1)
    mr r31, r3
    stw r0, 0x14b4(r3)
    stw r0, 0x14b8(r3)
    stw r0, 0x14c0(r3)
    stw r0, 0x17e8(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r4, r31
    li r5, 0x3ea
    li r6, 0x1
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3e8
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3ed
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3ef
    li r6, 0x1
    bl fn_80239DAC
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8034F41C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    stw r31, 0x14b4(r3)
    stw r31, 0x14b8(r3)
    stw r31, 0x14c0(r3)
    stw r31, 0x17e8(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    mr r4, r30
    li r5, 0x3ea
    li r6, 0x1
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3e8
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3ed
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3ef
    li r6, 0x1
    bl fn_80239DAC
    bl fn_80680CF8
    lis r4, 0x8889
    lwz r0, 0x14c0(r30)
    subi r5, r4, 0x7777
    mulhw r5, r5, r3
    li r4, 0x3
    add r5, r5, r3
    srawi r5, r5, 5
    srwi r6, r5, 31
    add r5, r5, r6
    mulli r5, r5, 0x3c
    subf r5, r5, r3
    mr r3, r30
    subfic r5, r5, 0x1e
    add r0, r0, r5
    stw r0, 0x14c0(r30)
    bl fn_8016E970
    lfs f0, lbl_80885398
    li r0, 0x1
    stw r31, 0x58c(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80885378
    li r4, 0x0
    stw r0, 0x3fc(r30)
    li r5, 0x2
    lfs f2, lbl_808853C4
    li r6, 0x1
    stfs f0, 0x2fc(r30)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r30)
    bl fn_80097C08
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8034F53C(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    li r0, 0x0
    stw r31, 0x5c(r1)
    stw r30, 0x58(r1)
    mr r30, r3
    stw r0, 0x14b4(r3)
    stw r0, 0x14b8(r3)
    stw r0, 0x14c0(r3)
    stw r0, 0x17e8(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    mr r4, r30
    li r5, 0x3ea
    li r6, 0x1
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3e8
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3ed
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3ef
    li r6, 0x1
    bl fn_80239DAC
    mr r3, r30
    li r4, 0x3
    bl fn_8016E970
    li r0, 0x6
    stw r0, 0x58c(r30)
    mr r3, r30
    li r4, 0x3e8
    bl fn_80232B7C
    lfs f0, lbl_80885398
    li r31, 0x1
    stw r31, 0x3fc(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80885378
    li r4, 0x0
    stfs f0, 0x2fc(r30)
    li r5, 0x147
    lfs f2, lbl_808853C4
    li r6, 0x0
    stfs f0, 0x2e8(r30)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f1, lbl_80885398
    lis r7, lbl_807C7030@ha
    stfs f1, 0x18(r1)
    addi r7, r7, lbl_807C7030@l
    lwz r3, lbl_8087F3C0
    li r0, -0x1
    stfs f1, 0x1c(r1)
    mr r8, r7
    addi r4, r30, 0x1630
    addi r5, r30, 0xb0
    stfs f1, 0x20(r1)
    addi r9, r1, 0x18
    li r6, 0x0
    li r10, -0x1
    stfs f1, 0x24(r1)
    stw r0, 0x8(r1)
    stw r31, 0xc(r1)
    bl fn_8023A8B4
    lwz r3, 0x14b0(r30)
    lis r4, lbl_8074AA58@ha
    addi r4, r4, lbl_8074AA58@l
    li r5, 0x0
    addi r31, r3, 0xb0
    mr r3, r31
    addi r4, r4, 0x3af
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8034F53C_00000C44
    li r4, 0x0
    b lbl_fn_8034F53C_00000C50
lbl_fn_8034F53C_00000C44:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r31)
    add r4, r3, r0
lbl_fn_8034F53C_00000C50:
    lfs f0, 0x2c(r4)
    lis r3, lbl_8074AA58@ha
    lfs f3, 0x1c(r4)
    addi r3, r3, lbl_8074AA58@l
    lfs f4, 0xc(r4)
    addi r4, r3, 0x3aa
    stfs f4, 0x40(r1)
    addi r3, r30, 0xb0
    li r5, 0x0
    stfs f3, 0x44(r1)
    stfs f0, 0x48(r1)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8034F53C_00000C90
    li r4, 0x0
    b lbl_fn_8034F53C_00000C9C
lbl_fn_8034F53C_00000C90:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r4, r3, r0
lbl_fn_8034F53C_00000C9C:
    lfs f4, 0x2c(r4)
    addi r5, r1, 0x28
    lfs f0, 0x48(r1)
    addi r3, r30, 0x1654
    lfs f5, 0x1c(r4)
    lfs f6, 0xc(r4)
    fsubs f2, f0, f4
    lfs f3, 0x44(r1)
    mr r4, r3
    lfs f0, 0x40(r1)
    fsubs f3, f3, f5
    stfs f6, 0x34(r1)
    fsubs f0, f0, f6
    stfs f3, 0x2c(r1)
    stfs f0, 0x28(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f5, 0x38(r1)
    stfs f4, 0x3c(r1)
    stfs f2, 0x30(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x165c(r30)
    bl fn_805F98D0
    lis r4, lbl_8074AA58@ha
    lfs f1, lbl_80885398
    addi r4, r4, lbl_8074AA58@l
    addi r3, r1, 0x10
    addi r4, r4, 0x409
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_8034F788(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    stfd f31, 0x120(r1)
    psq_st f31, 0x128(r1), 0, 0
    stfd f30, 0x110(r1)
    psq_st f30, 0x118(r1), 0, 0
    stw r31, 0x10c(r1)
    li r31, 0x0
    stw r30, 0x108(r1)
    mr r30, r3
    stw r31, 0x14b4(r3)
    stw r31, 0x14b8(r3)
    stw r31, 0x14c0(r3)
    stw r31, 0x17e8(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    mr r4, r30
    li r5, 0x3ea
    li r6, 0x1
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3e8
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3ed
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3ef
    li r6, 0x1
    bl fn_80239DAC
    mr r3, r30
    li r4, 0x3
    bl fn_8016E970
    lwz r3, 0x17e4(r30)
    li r0, 0x7
    lfs f0, lbl_80885378
    cmpwi r3, 0x0
    stw r0, 0x58c(r30)
    stfs f0, 0x16dc(r30)
    stb r31, 0x16d8(r30)
    beq lbl_fn_8034F788_00000E04
    bl fn_8015ECC4
    stw r31, 0x17e4(r30)
lbl_fn_8034F788_00000E04:
    lfs f0, lbl_80885398
    li r0, 0x1
    stw r0, 0x3fc(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80885378
    li r4, 0x0
    stfs f0, 0x2fc(r30)
    li r5, 0x13f
    lfs f2, lbl_808853C4
    li r6, 0x0
    stfs f0, 0x2e8(r30)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f2, 0x1614(r30)
    addi r3, r30, 0x160c
    psq_l f1, 0x0(r3), 0, 0
    addi r4, r1, 0x74
    frsp f3, f2
    psq_st f1, 0x0(r4), 0, 0
    lfs f0, 0x530(r30)
    addi r6, r30, 0x15dc
    addi r3, r1, 0x80
    stfs f2, 0x7c(r1)
    fsubs f7, f3, f0
    stfs f2, 0x88(r1)
    frsp f2, f2
    lfs f0, 0x52c(r30)
    lfs f5, 0x78(r1)
    addi r5, r1, 0x14
    stfs f2, 0x15e4(r30)
    fmr f2, f7
    fsubs f6, f5, f0
    lfs f4, 0x74(r1)
    lfs f3, 0x528(r30)
    addi r31, r1, 0x8
    frsp f5, f2
    stfs f6, 0x18(r1)
    fsubs f4, f4, f3
    lfs f0, lbl_808853D8
    fabs f6, f5
    psq_st f1, 0x0(r6), 0, 0
    lfs f3, lbl_80885378
    stfs f4, 0x14(r1)
    frsp f4, f6
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    fcmpo cr0, f4, f0
    stfs f3, 0x15e0(r30)
    stfs f7, 0x1c(r1)
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x10(r1)
    bge lbl_fn_8034F788_00000EF8
    lfs f0, 0x8(r1)
    fcmpo cr0, f0, f3
    ble lbl_fn_8034F788_00000EEC
    lfs f0, lbl_808853DC
    b lbl_fn_8034F788_00000EF0
lbl_fn_8034F788_00000EEC:
    lfs f0, lbl_808853E0
lbl_fn_8034F788_00000EF0:
    stfs f0, 0x30(r1)
    b lbl_fn_8034F788_00000F0C
lbl_fn_8034F788_00000EF8:
    fmr f2, f5
    lfs f1, 0x8(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x30(r1)
lbl_fn_8034F788_00000F0C:
    lfs f0, 0x30(r1)
    addi r3, r1, 0xd0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80885378
    addi r4, r1, 0x38
    lfs f4, 0xd8(r1)
    mr r5, r4
    lfs f5, 0xd4(r1)
    addi r3, r1, 0x90
    lfs f6, 0xd0(r1)
    lfs f7, 0xe8(r1)
    lfs f8, 0xe4(r1)
    lfs f9, 0xe0(r1)
    lfs f10, 0xf8(r1)
    lfs f11, 0xf4(r1)
    lfs f12, 0xf0(r1)
    lfs f13, 0xfc(r1)
    lfs f31, 0xec(r1)
    lfs f30, 0xdc(r1)
    lfs f0, lbl_80885398
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x10(r1)
    stfs f3, 0xc0(r1)
    stfs f3, 0xc4(r1)
    stfs f3, 0xc8(r1)
    stfs f0, 0xcc(r1)
    stfs f6, 0x68(r1)
    stfs f5, 0x6c(r1)
    stfs f4, 0x70(r1)
    stfs f6, 0x90(r1)
    stfs f5, 0x94(r1)
    stfs f4, 0x98(r1)
    stfs f9, 0x5c(r1)
    stfs f8, 0x60(r1)
    stfs f7, 0x64(r1)
    stfs f9, 0xa0(r1)
    stfs f8, 0xa4(r1)
    stfs f7, 0xa8(r1)
    stfs f12, 0x50(r1)
    stfs f11, 0x54(r1)
    stfs f10, 0x58(r1)
    stfs f12, 0xb0(r1)
    stfs f11, 0xb4(r1)
    stfs f10, 0xb8(r1)
    stfs f30, 0x44(r1)
    stfs f31, 0x48(r1)
    stfs f13, 0x4c(r1)
    stfs f30, 0x9c(r1)
    stfs f31, 0xac(r1)
    stfs f13, 0xbc(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_808853D8
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8034F788_00001028
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80885378
    fcmpo cr0, f3, f0
    ble lbl_fn_8034F788_00001018
    lfs f0, lbl_808853DC
    b lbl_fn_8034F788_0000101C
lbl_fn_8034F788_00001018:
    lfs f0, lbl_808853E0
lbl_fn_8034F788_0000101C:
    fneg f0, f0
    stfs f0, 0x2c(r1)
    b lbl_fn_8034F788_0000103C
lbl_fn_8034F788_00001028:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x2c(r1)
lbl_fn_8034F788_0000103C:
    lfs f6, lbl_80885378
    addi r4, r1, 0x2c
    lfs f5, 0x78(r1)
    addi r6, r30, 0x15e8
    lfs f4, 0x52c(r30)
    fmr f2, f6
    lfs f3, 0x74(r1)
    addi r5, r1, 0x20
    fsubs f5, f5, f4
    lfs f0, 0x528(r30)
    psq_l f1, 0x0(r4), 0, 0
    fsubs f4, f3, f0
    stfs f2, 0x10(r1)
    frsp f2, f2
    addi r3, r30, 0x15f4
    lfs f3, 0x7c(r1)
    lfs f0, 0x530(r30)
    stfs f4, 0x20(r1)
    mr r4, r3
    fsubs f0, f3, f0
    stfs f2, 0x15f0(r30)
    fmr f2, f0
    stfs f5, 0x24(r1)
    psq_st f1, 0x0(r31), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f6, 0x34(r1)
    stfs f0, 0x28(r1)
    stfs f2, 0x15fc(r30)
    stfs f6, 0x15f8(r30)
    bl fn_805F98D0
    lfs f0, lbl_80885378
    addi r3, r30, 0x1600
    psq_l f1, 0x528(r30), 0, 0
    lfs f2, 0x530(r30)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x1608(r30)
    stfs f0, 0x570(r30)
    psq_l f31, 0x128(r1), 0, 0
    lfd f31, 0x120(r1)
    psq_l f30, 0x118(r1), 0, 0
    lfd f30, 0x110(r1)
    lwz r31, 0x10c(r1)
    lwz r30, 0x108(r1)
    lwz r0, 0x134(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

asm void fn_8034FB50(void)
{
    nofralloc
    stwu r1, -0x170(r1)
    mflr r0
    stw r0, 0x174(r1)
    li r0, 0x0
    stfd f31, 0x160(r1)
    psq_st f31, 0x168(r1), 0, 0
    stfd f30, 0x150(r1)
    psq_st f30, 0x158(r1), 0, 0
    stw r31, 0x14c(r1)
    mr r31, r3
    stw r30, 0x148(r1)
    stw r29, 0x144(r1)
    stw r28, 0x140(r1)
    stw r0, 0x14b4(r3)
    stw r0, 0x14b8(r3)
    stw r0, 0x14c0(r3)
    stw r0, 0x17e8(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r4, r31
    li r5, 0x3ea
    li r6, 0x1
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3e8
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3ed
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3ef
    li r6, 0x1
    bl fn_80239DAC
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    li r0, 0x8
    stw r0, 0x58c(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f3, lbl_80885398
    li r0, 0x1
    lfs f0, lbl_808853A8
    li r4, 0x0
    stw r3, 0x590(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80885378
    li r5, 0x14d
    stw r0, 0x3fc(r31)
    li r6, 0x0
    lfs f2, lbl_808853C4
    li r7, 0x0
    stfs f3, 0x2fc(r31)
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    lwz r3, lbl_8087F430
    addi r30, r1, 0xbc
    li r4, 0x0
    li r5, 0x0
    lwz r7, 0x10d8(r3)
    lwz r8, 0x78(r7)
    mtctr r8
    cmplwi r8, 0x0
    ble lbl_fn_8034FB50_00001248
lbl_fn_8034FB50_00001220:
    lwz r3, 0x7c(r7)
    lwzx r0, r3, r5
    cmpwi r0, 0x3
    bne lbl_fn_8034FB50_0000123C
    mulli r0, r4, 0x28
    add r5, r3, r0
    b lbl_fn_8034FB50_0000124C
lbl_fn_8034FB50_0000123C:
    addi r5, r5, 0x28
    addi r4, r4, 0x1
    bdnz lbl_fn_8034FB50_00001220
lbl_fn_8034FB50_00001248:
    li r5, 0x0
lbl_fn_8034FB50_0000124C:
    li r4, 0x0
    li r6, 0x0
    mtctr r8
    cmplwi r8, 0x0
    ble lbl_fn_8034FB50_00001288
lbl_fn_8034FB50_00001260:
    lwz r3, 0x7c(r7)
    lwzx r0, r3, r6
    cmpwi r0, 0x4
    bne lbl_fn_8034FB50_0000127C
    mulli r0, r4, 0x28
    add r4, r3, r0
    b lbl_fn_8034FB50_0000128C
lbl_fn_8034FB50_0000127C:
    addi r6, r6, 0x28
    addi r4, r4, 0x1
    bdnz lbl_fn_8034FB50_00001260
lbl_fn_8034FB50_00001288:
    li r4, 0x0
lbl_fn_8034FB50_0000128C:
    lfs f2, 0xc(r5)
    addi r29, r1, 0x74
    psq_l f1, 0x4(r5), 0, 0
    addi r28, r1, 0x80
    psq_st f1, 0x0(r29), 0, 0
    frsp f0, f2
    lwz r5, lbl_8087F8A0
    addi r3, r1, 0x8c
    stfs f2, 0x7c(r1)
    lfs f4, 0x74(r1)
    psq_l f1, 0x4(r4), 0, 0
    lfs f2, 0xc(r4)
    stfs f2, 0x88(r1)
    lfs f6, 0x78(r1)
    psq_st f1, 0x0(r28), 0, 0
    lwz r4, 0x48(r5)
    lfs f2, 0x530(r4)
    psq_l f1, 0x528(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    fsubs f7, f0, f2
    lfs f3, 0x8c(r1)
    lfs f5, 0x90(r1)
    fmuls f0, f7, f7
    fsubs f3, f4, f3
    stfs f2, 0x94(r1)
    fsubs f4, f6, f5
    stfs f3, 0x98(r1)
    fmadds f1, f3, f3, f0
    stfs f4, 0x9c(r1)
    stfs f7, 0xa0(r1)
    bl fn_8068B100
    lfs f4, 0x88(r1)
    frsp f30, f1
    lfs f0, 0x94(r1)
    lfs f3, 0x80(r1)
    fsubs f6, f4, f0
    lfs f0, 0x8c(r1)
    lfs f4, 0x84(r1)
    fsubs f5, f3, f0
    lfs f3, 0x90(r1)
    fmuls f0, f6, f6
    fsubs f3, f4, f3
    stfs f5, 0xa4(r1)
    fmadds f1, f5, f5, f0
    stfs f3, 0xa8(r1)
    stfs f6, 0xac(r1)
    bl fn_8068B100
    frsp f0, f1
    fcmpo cr0, f30, f0
    bge lbl_fn_8034FB50_00001358
    b lbl_fn_8034FB50_0000135C
lbl_fn_8034FB50_00001358:
    mr r28, r29
lbl_fn_8034FB50_0000135C:
    lfs f2, 0x8(r28)
    addi r3, r1, 0xb0
    psq_l f1, 0x0(r28), 0, 0
    addi r5, r31, 0x15dc
    frsp f3, f2
    psq_st f1, 0x0(r3), 0, 0
    lfs f0, 0x530(r31)
    addi r4, r1, 0x14
    stfs f2, 0xb8(r1)
    addi r29, r1, 0x8
    fsubs f7, f3, f0
    stfs f2, 0xc4(r1)
    frsp f2, f2
    lfs f0, 0x52c(r31)
    lfs f5, 0xb4(r1)
    stfs f2, 0x15e4(r31)
    fmr f2, f7
    lfs f4, 0xb0(r1)
    fsubs f6, f5, f0
    lfs f3, 0x528(r31)
    lfs f0, lbl_808853D8
    frsp f5, f2
    stfs f6, 0x18(r1)
    fsubs f4, f4, f3
    lfs f3, lbl_80885378
    fabs f6, f5
    stfs f4, 0x14(r1)
    psq_st f1, 0x0(r5), 0, 0
    frsp f4, f6
    psq_st f1, 0x0(r30), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    fcmpo cr0, f4, f0
    stfs f3, 0x15e0(r31)
    stfs f7, 0x1c(r1)
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x10(r1)
    bge lbl_fn_8034FB50_00001410
    lfs f0, 0x8(r1)
    fcmpo cr0, f0, f3
    ble lbl_fn_8034FB50_00001404
    lfs f0, lbl_808853DC
    b lbl_fn_8034FB50_00001408
lbl_fn_8034FB50_00001404:
    lfs f0, lbl_808853E0
lbl_fn_8034FB50_00001408:
    stfs f0, 0x30(r1)
    b lbl_fn_8034FB50_00001424
lbl_fn_8034FB50_00001410:
    fmr f2, f5
    lfs f1, 0x8(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x30(r1)
lbl_fn_8034FB50_00001424:
    lfs f0, 0x30(r1)
    addi r3, r1, 0x108
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80885378
    addi r4, r1, 0x38
    lfs f4, 0x110(r1)
    mr r5, r4
    lfs f5, 0x10c(r1)
    addi r3, r1, 0xc8
    lfs f6, 0x108(r1)
    lfs f7, 0x120(r1)
    lfs f8, 0x11c(r1)
    lfs f9, 0x118(r1)
    lfs f10, 0x130(r1)
    lfs f11, 0x12c(r1)
    lfs f12, 0x128(r1)
    lfs f13, 0x134(r1)
    lfs f31, 0x124(r1)
    lfs f30, 0x114(r1)
    lfs f0, lbl_80885398
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x10(r1)
    stfs f3, 0xf8(r1)
    stfs f3, 0xfc(r1)
    stfs f3, 0x100(r1)
    stfs f0, 0x104(r1)
    stfs f6, 0x68(r1)
    stfs f5, 0x6c(r1)
    stfs f4, 0x70(r1)
    stfs f6, 0xc8(r1)
    stfs f5, 0xcc(r1)
    stfs f4, 0xd0(r1)
    stfs f9, 0x5c(r1)
    stfs f8, 0x60(r1)
    stfs f7, 0x64(r1)
    stfs f9, 0xd8(r1)
    stfs f8, 0xdc(r1)
    stfs f7, 0xe0(r1)
    stfs f12, 0x50(r1)
    stfs f11, 0x54(r1)
    stfs f10, 0x58(r1)
    stfs f12, 0xe8(r1)
    stfs f11, 0xec(r1)
    stfs f10, 0xf0(r1)
    stfs f30, 0x44(r1)
    stfs f31, 0x48(r1)
    stfs f13, 0x4c(r1)
    stfs f30, 0xd4(r1)
    stfs f31, 0xe4(r1)
    stfs f13, 0xf4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_808853D8
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8034FB50_00001540
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80885378
    fcmpo cr0, f3, f0
    ble lbl_fn_8034FB50_00001530
    lfs f0, lbl_808853DC
    b lbl_fn_8034FB50_00001534
lbl_fn_8034FB50_00001530:
    lfs f0, lbl_808853E0
lbl_fn_8034FB50_00001534:
    fneg f0, f0
    stfs f0, 0x2c(r1)
    b lbl_fn_8034FB50_00001554
lbl_fn_8034FB50_00001540:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x2c(r1)
lbl_fn_8034FB50_00001554:
    lfs f6, lbl_80885378
    addi r4, r1, 0x2c
    lfs f5, 0xb4(r1)
    addi r6, r31, 0x15e8
    lfs f4, 0x52c(r31)
    fmr f2, f6
    lfs f3, 0xb0(r1)
    addi r5, r1, 0x20
    fsubs f5, f5, f4
    lfs f0, 0x528(r31)
    psq_l f1, 0x0(r4), 0, 0
    fsubs f4, f3, f0
    stfs f2, 0x10(r1)
    frsp f2, f2
    addi r3, r31, 0x15f4
    lfs f3, 0xb8(r1)
    lfs f0, 0x530(r31)
    stfs f4, 0x20(r1)
    mr r4, r3
    fsubs f0, f3, f0
    stfs f2, 0x15f0(r31)
    fmr f2, f0
    stfs f5, 0x24(r1)
    psq_st f1, 0x0(r29), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f6, 0x34(r1)
    stfs f0, 0x28(r1)
    stfs f2, 0x15fc(r31)
    stfs f6, 0x15f8(r31)
    bl fn_805F98D0
    lfs f0, lbl_80885378
    addi r3, r31, 0x1600
    psq_l f1, 0x528(r31), 0, 0
    lfs f2, 0x530(r31)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x1608(r31)
    stfs f0, 0x570(r31)
    psq_l f31, 0x168(r1), 0, 0
    lfd f31, 0x160(r1)
    psq_l f30, 0x158(r1), 0, 0
    lfd f30, 0x150(r1)
    lwz r31, 0x14c(r1)
    lwz r30, 0x148(r1)
    lwz r29, 0x144(r1)
    lwz r28, 0x140(r1)
    lwz r0, 0x174(r1)
    mtlr r0
    addi r1, r1, 0x170
    blr
}

asm void fn_80350070(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    li r0, 0x0
    stfd f31, 0x120(r1)
    psq_st f31, 0x128(r1), 0, 0
    stfd f30, 0x110(r1)
    psq_st f30, 0x118(r1), 0, 0
    stw r31, 0x10c(r1)
    mr r31, r3
    stw r30, 0x108(r1)
    stw r0, 0x14b4(r3)
    stw r0, 0x14b8(r3)
    stw r0, 0x14c0(r3)
    stw r0, 0x17e8(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r4, r31
    li r5, 0x3ea
    li r6, 0x1
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3e8
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3ed
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3ef
    li r6, 0x1
    bl fn_80239DAC
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    li r0, 0x9
    stw r0, 0x58c(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80885398
    li r0, 0x1
    stw r3, 0x590(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80885378
    li r4, 0x0
    stw r0, 0x3fc(r31)
    li r5, 0x15c
    lfs f2, lbl_808853C4
    li r6, 0x0
    stfs f0, 0x2fc(r31)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    lwz r7, 0x14b0(r31)
    addi r4, r1, 0x74
    lfs f0, 0x530(r31)
    addi r6, r31, 0x15dc
    lfs f2, 0x530(r7)
    addi r3, r1, 0x80
    psq_l f1, 0x528(r7), 0, 0
    addi r5, r1, 0x14
    frsp f3, f2
    psq_st f1, 0x0(r4), 0, 0
    addi r30, r1, 0x8
    stfs f2, 0x7c(r1)
    fsubs f7, f3, f0
    lfs f0, 0x52c(r31)
    stfs f2, 0x88(r1)
    frsp f2, f2
    lfs f5, 0x78(r1)
    stfs f2, 0x15e4(r31)
    fmr f2, f7
    lfs f4, 0x74(r1)
    fsubs f6, f5, f0
    lfs f3, 0x528(r31)
    lfs f0, lbl_808853D8
    frsp f5, f2
    fsubs f4, f4, f3
    stfs f6, 0x18(r1)
    lfs f3, lbl_80885378
    fabs f6, f5
    stfs f4, 0x14(r1)
    psq_st f1, 0x0(r6), 0, 0
    frsp f4, f6
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    fcmpo cr0, f4, f0
    stfs f3, 0x15e0(r31)
    stfs f7, 0x1c(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x10(r1)
    bge lbl_fn_80350070_000017CC
    lfs f0, 0x8(r1)
    fcmpo cr0, f0, f3
    ble lbl_fn_80350070_000017C0
    lfs f0, lbl_808853DC
    b lbl_fn_80350070_000017C4
lbl_fn_80350070_000017C0:
    lfs f0, lbl_808853E0
lbl_fn_80350070_000017C4:
    stfs f0, 0x30(r1)
    b lbl_fn_80350070_000017E0
lbl_fn_80350070_000017CC:
    fmr f2, f5
    lfs f1, 0x8(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x30(r1)
lbl_fn_80350070_000017E0:
    lfs f0, 0x30(r1)
    addi r3, r1, 0xd0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80885378
    addi r4, r1, 0x38
    lfs f4, 0xd8(r1)
    mr r5, r4
    lfs f5, 0xd4(r1)
    addi r3, r1, 0x90
    lfs f6, 0xd0(r1)
    lfs f7, 0xe8(r1)
    lfs f8, 0xe4(r1)
    lfs f9, 0xe0(r1)
    lfs f10, 0xf8(r1)
    lfs f11, 0xf4(r1)
    lfs f12, 0xf0(r1)
    lfs f13, 0xfc(r1)
    lfs f31, 0xec(r1)
    lfs f30, 0xdc(r1)
    lfs f0, lbl_80885398
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x10(r1)
    stfs f3, 0xc0(r1)
    stfs f3, 0xc4(r1)
    stfs f3, 0xc8(r1)
    stfs f0, 0xcc(r1)
    stfs f6, 0x68(r1)
    stfs f5, 0x6c(r1)
    stfs f4, 0x70(r1)
    stfs f6, 0x90(r1)
    stfs f5, 0x94(r1)
    stfs f4, 0x98(r1)
    stfs f9, 0x5c(r1)
    stfs f8, 0x60(r1)
    stfs f7, 0x64(r1)
    stfs f9, 0xa0(r1)
    stfs f8, 0xa4(r1)
    stfs f7, 0xa8(r1)
    stfs f12, 0x50(r1)
    stfs f11, 0x54(r1)
    stfs f10, 0x58(r1)
    stfs f12, 0xb0(r1)
    stfs f11, 0xb4(r1)
    stfs f10, 0xb8(r1)
    stfs f30, 0x44(r1)
    stfs f31, 0x48(r1)
    stfs f13, 0x4c(r1)
    stfs f30, 0x9c(r1)
    stfs f31, 0xac(r1)
    stfs f13, 0xbc(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_808853D8
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80350070_000018FC
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80885378
    fcmpo cr0, f3, f0
    ble lbl_fn_80350070_000018EC
    lfs f0, lbl_808853DC
    b lbl_fn_80350070_000018F0
lbl_fn_80350070_000018EC:
    lfs f0, lbl_808853E0
lbl_fn_80350070_000018F0:
    fneg f0, f0
    stfs f0, 0x2c(r1)
    b lbl_fn_80350070_00001910
lbl_fn_80350070_000018FC:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x2c(r1)
lbl_fn_80350070_00001910:
    lfs f6, lbl_80885378
    addi r4, r1, 0x2c
    lfs f5, 0x78(r1)
    addi r6, r31, 0x15e8
    lfs f4, 0x52c(r31)
    fmr f2, f6
    lfs f3, 0x74(r1)
    addi r5, r1, 0x20
    fsubs f5, f5, f4
    lfs f0, 0x528(r31)
    psq_l f1, 0x0(r4), 0, 0
    fsubs f4, f3, f0
    stfs f2, 0x10(r1)
    frsp f2, f2
    addi r3, r31, 0x15f4
    lfs f3, 0x7c(r1)
    lfs f0, 0x530(r31)
    stfs f4, 0x20(r1)
    mr r4, r3
    fsubs f0, f3, f0
    stfs f2, 0x15f0(r31)
    fmr f2, f0
    stfs f5, 0x24(r1)
    psq_st f1, 0x0(r30), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f6, 0x34(r1)
    stfs f0, 0x28(r1)
    stfs f2, 0x15fc(r31)
    stfs f6, 0x15f8(r31)
    bl fn_805F98D0
    lfs f0, lbl_80885378
    addi r3, r31, 0x1600
    psq_l f1, 0x528(r31), 0, 0
    lfs f2, 0x530(r31)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x1608(r31)
    stfs f0, 0x570(r31)
    lwz r0, lbl_8087F498
    cmpwi r0, 0x0
    beq lbl_fn_80350070_000019EC
    bl fn_80680CF8
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    subf. r0, r4, r0
    bne lbl_fn_80350070_000019EC
    lwz r3, lbl_8087F498
    mr r4, r31
    lfs f1, lbl_80885398
    li r5, 0x0
    lfs f2, lbl_808853BC
    li r6, 0x0
    bl fn_803EA77C
lbl_fn_80350070_000019EC:
    lwz r0, 0x134(r1)
    psq_l f31, 0x128(r1), 0, 0
    lfd f31, 0x120(r1)
    psq_l f30, 0x118(r1), 0, 0
    lfd f30, 0x110(r1)
    lwz r31, 0x10c(r1)
    lwz r30, 0x108(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}
