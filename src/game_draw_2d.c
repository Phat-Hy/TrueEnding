#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_24(void);
extern void _restgpr_27(void);
extern void _savegpr_24(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_8004ECC0(void);
extern void fn_800500FC(void);
extern void fn_800502A8(void);
extern void fn_80071D68(void);
extern void fn_80071D74(void);
extern void fn_80071E04(void);
extern void fn_80075DEC(void);
extern void fn_80075F58(void);
extern void fn_800761A8(void);
extern void fn_800763FC(void);
extern void fn_80076760(void);
extern void fn_800848B4(void);
extern void fn_80084C24(void);
extern void fn_800874C8(void);
extern void fn_8008771C(void);
extern void fn_80087994(void);
extern void fn_80087E9C(void);
extern void fn_80088AF4(void);
extern void fn_8008937C(void);
extern void fn_800A96AC(void);
extern void fn_800A981C(void);
extern void fn_800B448C(void);
extern void fn_800B4694(void);
extern void fn_800B47AC(void);
extern void fn_800BFB70(void);
extern void fn_800C0508(void);
extern void fn_80476194(void);
extern void fn_804761B0(void);
extern void fn_805F95A0(void);
extern void fn_80613960(void);
extern void fn_80613BB0(void);
extern void fn_80614190(void);
extern void fn_80614CC0(void);
extern void fn_80614D30(void);
extern void fn_80615560(void);
extern void fn_80615D20(void);
extern void fn_80615D50(void);
extern void fn_80615FF0(void);
extern void fn_80616250(void);
extern void fn_80617200(void);
extern void fn_80617220(void);
extern void fn_80617340(void);
extern void fn_80617880(void);
extern void fn_806179E0(void);
extern void fn_80617D50(void);
extern void fn_80617DA0(void);
extern void fn_80680CF8(void);
extern void fn_8068A850(void);
extern void fn_8068AD58(void);

/* External data declarations */
extern u8 lbl_80732D28[];
extern u8 lbl_80732D3C[];
extern u8 lbl_80732DD0[];
extern u8 lbl_80732DD8[];
extern u8 lbl_80732E48[];
extern u8 lbl_80778F30[];
extern u8 lbl_807790B0[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087EEE0;
extern u32 lbl_8087EF8C;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087EFB0;
extern u32 lbl_8087EFB4;
extern u32 lbl_80880ECC;
extern u32 lbl_80880ED0;
extern u32 lbl_80880EE0;
extern u32 lbl_80880EF0;
extern u32 lbl_80880EF4;
extern u32 lbl_80880EFC;
extern u32 lbl_80880F00;
extern u32 lbl_80880F04;
extern u32 lbl_80880F08;
extern u32 lbl_80880F0C;
extern u32 lbl_80880F10;
extern u32 lbl_80880F14;
extern u32 lbl_80880F18;
extern u32 lbl_80880F1C;
extern u32 lbl_80880F20;
extern u32 lbl_80880F28;
extern u32 lbl_80880F30;
extern u32 lbl_80880F34;
extern u32 lbl_80880F38;
extern u32 lbl_80880F4C;

/* Function declarations */
void fn_800B23C4(void);
void fn_800B23C8(void);
void fn_800B257C(void);
void fn_800B28F8(void);
void fn_800B2D2C(void);
void fn_800B2E18(void);
void fn_800B2E28(void);
void fn_800B2E2C(void);
void fn_800B2E5C(void);
void fn_800B2E9C(void);
void fn_800B2EA0(void);
void fn_800B3208(void);
void fn_800B320C(void);
void fn_800B3228(void);
void fn_800B322C(void);
void fn_800B326C(void);
void fn_800B3328(void);
void fn_800B33A8(void);
void fn_800B3454(void);
void fn_800B3464(void);
void fn_800B34C0(void);
void fn_800B35F4(void);
void fn_800B35F8(void);
void fn_800B3654(void);
void fn_800B3658(void);
void fn_800B365C(void);
void fn_800B375C(void);
void fn_800B3770(void);
void fn_800B3870(void);
void fn_800B3874(void);
void fn_800B3878(void);
void fn_800B38B8(void);
void fn_800B38F8(void);
void fn_800B3938(void);
void fn_800B3978(void);
void fn_800B3A94(void);
void fn_800B3C3C(void);
void fn_800B3CC8(void);
void fn_800B3F40(void);

asm void fn_800B23C4(void)
{
    nofralloc
    blr
}

asm void fn_800B23C8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_80732D3C@ha
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    mr r3, r4
    addi r4, r31, lbl_80732D3C@l
    bl fn_8008937C
    addi r31, r31, lbl_80732D3C@l
    lwz r7, 0x48(r29)
    mr r30, r3
    addi r5, r29, 0x48
    addi r4, r31, 0xa
    li r6, 0x0
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_80880EFC
    mr r3, r30
    lfs f2, lbl_80880EF4
    addi r4, r31, 0x10
    lfs f3, lbl_80880F00
    addi r5, r29, 0x20
    li r6, 0x0
    li r7, 0x0
    bl fn_80088AF4
    lfs f1, lbl_80880ECC
    mr r3, r30
    lfs f2, lbl_80880EF0
    addi r4, r31, 0x16
    lfs f3, lbl_80880F00
    addi r5, r29, 0x14
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    lfs f1, lbl_80880ED0
    mr r3, r30
    lfs f2, lbl_80880F04
    addi r4, r31, 0x20
    lfs f3, lbl_80880F08
    addi r5, r29, 0x4c
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80880ED0
    mr r3, r30
    lfs f2, lbl_80880F04
    addi r4, r31, 0x28
    lfs f3, lbl_80880F08
    addi r5, r29, 0x50
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80880EF0
    mr r3, r30
    lfs f2, lbl_80880F0C
    addi r4, r31, 0x30
    lfs f3, lbl_80880F10
    addi r5, r29, 0x54
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80880ED0
    mr r3, r30
    lfs f2, lbl_80880F0C
    addi r4, r31, 0x35
    lfs f3, lbl_80880F10
    addi r5, r29, 0x58
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80880ED0
    mr r3, r30
    lfs f2, lbl_80880F0C
    addi r4, r31, 0x3c
    lfs f3, lbl_80880F10
    addi r5, r29, 0x5c
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80880F14
    mr r3, r30
    lfs f2, lbl_80880F18
    addi r4, r31, 0x47
    lfs f3, lbl_80880F00
    addi r5, r29, 0x30
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    lfs f1, lbl_80880F14
    mr r3, r30
    lfs f2, lbl_80880F18
    addi r4, r31, 0x50
    lfs f3, lbl_80880F00
    addi r5, r29, 0x3c
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800B257C(void)
{
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    stw r0, 0xd4(r1)
    addi r11, r1, 0x90
    stfd f31, 0xc0(r1)
    psq_st f31, 0xc8(r1), 0, 0
    stfd f30, 0xb0(r1)
    psq_st f30, 0xb8(r1), 0, 0
    stfd f29, 0xa0(r1)
    psq_st f29, 0xa8(r1), 0, 0
    stfd f28, 0x90(r1)
    psq_st f28, 0x98(r1), 0, 0
    bl _savegpr_27
    lis r0, 0x4330
    stw r0, 0x68(r1)
    lfs f29, 0x3c(r3)
    mr r29, r3
    stw r0, 0x70(r1)
    mr r30, r4
    lfs f30, 0x30(r3)
    mr r31, r5
    bl fn_80680CF8
    lis r28, 0x4178
    lis r27, lbl_80732D28@ha
    addi r0, r28, 0x749f
    fsubs f0, f29, f30
    mulhw r0, r0, r3
    lfd f5, lbl_80732D28@l(r27)
    lfs f3, lbl_80880F04
    lfs f29, 0x40(r29)
    lfs f28, 0x44(r29)
    lfs f31, 0x38(r29)
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x6c(r1)
    lfd f4, 0x68(r1)
    fsubs f4, f4, f5
    fdivs f3, f4, f3
    fmadds f30, f0, f3, f30
    bl fn_80680CF8
    addi r0, r28, 0x749f
    lfs f7, lbl_80880F04
    mulhw r0, r0, r3
    lfs f0, 0x14(r29)
    lfs f4, lbl_80880F1C
    fsubs f6, f28, f31
    lfs f3, 0x18(r29)
    fmuls f13, f0, f7
    srawi r0, r0, 8
    fmuls f10, f0, f4
    srwi r4, r0, 31
    lfs f5, 0x1c(r29)
    add r0, r0, r4
    fmuls f9, f3, f4
    mulli r0, r0, 0x3e9
    fmuls f12, f3, f7
    lfd f8, lbl_80732D28@l(r27)
    fmuls f3, f5, f4
    stfs f9, 0x30(r1)
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x74(r1)
    fmuls f11, f5, f7
    fsubs f4, f29, f9
    lwz r3, lbl_8087EE98
    lfd f0, 0x70(r1)
    fsubs f5, f30, f10
    stfs f4, 0x60(r1)
    fsubs f0, f0, f8
    fadds f8, f29, f12
    stfs f3, 0x34(r1)
    fadds f4, f30, f13
    addi r4, r1, 0x44
    fdivs f0, f0, f7
    stfs f10, 0x2c(r1)
    addi r5, r1, 0x5c
    addi r6, r1, 0x50
    stfs f30, 0x38(r1)
    lis r7, 0x8000
    fmadds f28, f6, f0, f31
    stfs f29, 0x3c(r1)
    li r8, 0x0
    li r9, 0x0
    stfs f5, 0x5c(r1)
    fsubs f0, f28, f3
    fadds f3, f28, f11
    stfs f28, 0x40(r1)
    stfs f13, 0x14(r1)
    stfs f0, 0x64(r1)
    stfs f12, 0x18(r1)
    stfs f11, 0x1c(r1)
    stfs f30, 0x20(r1)
    stfs f29, 0x24(r1)
    stfs f28, 0x28(r1)
    stfs f4, 0x50(r1)
    stfs f8, 0x54(r1)
    stfs f3, 0x58(r1)
    bl fn_8004ECC0
    cmpwi r3, 0x0
    bne lbl_fn_800B257C_00000364
    lfs f0, 0x34(r29)
    stfs f0, 0x10(r30)
    b lbl_fn_800B257C_00000384
lbl_fn_800B257C_00000364:
    lfs f0, 0x34(r29)
    lfs f3, 0x48(r1)
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_800B257C_0000037C
    b lbl_fn_800B257C_00000380
lbl_fn_800B257C_0000037C:
    fmr f3, f0
lbl_fn_800B257C_00000380:
    stfs f3, 0x10(r30)
lbl_fn_800B257C_00000384:
    stfs f30, 0x8(r1)
    fmr f2, f28
    addi r3, r1, 0x8
    stfs f29, 0xc(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x8(r30)
    stfs f28, 0x10(r1)
    lfs f29, 0x50(r29)
    lfs f28, 0x4c(r29)
    bl fn_80680CF8
    lis r27, 0x4178
    lis r28, lbl_80732D28@ha
    addi r0, r27, 0x749f
    lfd f7, lbl_80732D28@l(r28)
    mulhw r0, r0, r3
    lfs f5, lbl_80880F04
    fsubs f3, f29, f28
    lfs f4, lbl_80880EE0
    lfs f0, lbl_80880F20
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x6c(r1)
    lfd f6, 0x68(r1)
    fsubs f6, f6, f7
    fdivs f5, f6, f5
    fmadds f3, f3, f5, f28
    stfs f3, 0xc(r30)
    lfs f3, 0x5c(r29)
    fmuls f29, f4, f3
    fmuls f28, f0, f3
    bl fn_80680CF8
    addi r0, r27, 0x749f
    lfd f6, lbl_80732D28@l(r28)
    mulhw r0, r0, r3
    lfs f4, lbl_80880F04
    fsubs f3, f29, f28
    lfs f0, 0x58(r29)
    lfs f7, lbl_80880F0C
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x74(r1)
    lfd f5, 0x70(r1)
    fsubs f5, f5, f6
    fdivs f4, f5, f4
    fmadds f3, f3, f4, f28
    fadds f0, f0, f3
    fcmpo cr0, f7, f0
    cror eq, lt, eq
    bne lbl_fn_800B257C_00000470
    b lbl_fn_800B257C_00000474
lbl_fn_800B257C_00000470:
    fmr f7, f0
lbl_fn_800B257C_00000474:
    lfs f0, lbl_80880ED0
    fcmpo cr0, f0, f7
    cror eq, gt, eq
    bne lbl_fn_800B257C_00000488
    b lbl_fn_800B257C_0000048C
lbl_fn_800B257C_00000488:
    fmr f0, f7
lbl_fn_800B257C_0000048C:
    cmpwi r31, 0x0
    stfs f0, 0x14(r30)
    beq lbl_fn_800B257C_000004FC
    lfs f3, 0x4(r30)
    lfs f0, 0x10(r30)
    fsubs f28, f3, f0
    bl fn_80680CF8
    lis r5, 0x4178
    lis r4, lbl_80732D28@ha
    addi r0, r5, 0x749f
    lfd f6, lbl_80732D28@l(r4)
    mulhw r0, r0, r3
    lfs f4, lbl_80880F04
    lfs f3, 0x18(r29)
    lfs f0, 0x4(r30)
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x6c(r1)
    lfd f5, 0x68(r1)
    fsubs f5, f5, f6
    fdivs f4, f5, f4
    fmuls f4, f28, f4
    fmadds f0, f3, f4, f0
    stfs f0, 0x4(r30)
lbl_fn_800B257C_000004FC:
    addi r11, r1, 0x90
    psq_l f31, 0xc8(r1), 0, 0
    lfd f31, 0xc0(r1)
    psq_l f30, 0xb8(r1), 0, 0
    lfd f30, 0xb0(r1)
    psq_l f29, 0xa8(r1), 0, 0
    lfd f29, 0xa0(r1)
    psq_l f28, 0x98(r1), 0, 0
    lfd f28, 0x90(r1)
    bl _restgpr_27
    lwz r0, 0xd4(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}

asm void fn_800B28F8(void)
{
    nofralloc
    stwu r1, -0x220(r1)
    stfd f31, 0x210(r1)
    psq_st f31, 0x218(r1), 0, 0
    stfd f30, 0x200(r1)
    psq_st f30, 0x208(r1), 0, 0
    stfd f29, 0x1f0(r1)
    psq_st f29, 0x1f8(r1), 0, 0
    stfd f28, 0x1e0(r1)
    psq_st f28, 0x1e8(r1), 0, 0
    stfd f27, 0x1d0(r1)
    psq_st f27, 0x1d8(r1), 0, 0
    stfd f26, 0x1c0(r1)
    psq_st f26, 0x1c8(r1), 0, 0
    stfd f25, 0x1b0(r1)
    psq_st f25, 0x1b8(r1), 0, 0
    stfd f24, 0x1a0(r1)
    psq_st f24, 0x1a8(r1), 0, 0
    stfd f23, 0x190(r1)
    psq_st f23, 0x198(r1), 0, 0
    stfd f22, 0x180(r1)
    psq_st f22, 0x188(r1), 0, 0
    stfd f21, 0x170(r1)
    psq_st f21, 0x178(r1), 0, 0
    stfd f20, 0x160(r1)
    psq_st f20, 0x168(r1), 0, 0
    stfd f19, 0x150(r1)
    psq_st f19, 0x158(r1), 0, 0
    stfd f18, 0x140(r1)
    psq_st f18, 0x148(r1), 0, 0
    stfd f17, 0x130(r1)
    psq_st f17, 0x138(r1), 0, 0
    stfd f16, 0x120(r1)
    psq_st f16, 0x128(r1), 0, 0
    stfd f15, 0x110(r1)
    psq_st f15, 0x118(r1), 0, 0
    stfd f14, 0x100(r1)
    psq_st f14, 0x108(r1), 0, 0
    lwz r7, 0x48(r5)
    fmr f22, f1
    lwz r0, 0x48(r4)
    cmpw r0, r7
    lis r6, 0x4330
    xoris r7, r7, 0x8000
    stw r7, 0xac(r1)
    lis r8, lbl_80732D28@ha
    xoris r0, r0, 0x8000
    lfd f3, lbl_80732D28@l(r8)
    stw r6, 0xa8(r1)
    lwz r7, 0x8(r3)
    lfd f0, 0xa8(r1)
    stw r0, 0xb4(r1)
    fsubs f4, f0, f3
    stw r6, 0xb0(r1)
    lfd f0, 0xb0(r1)
    fsubs f3, f0, f3
    fsubs f0, f4, f3
    fmadds f0, f1, f0, f3
    fctiwz f0, f0
    stfd f0, 0xb8(r1)
    lwz r0, 0xbc(r1)
    stw r0, 0x48(r3)
    cmpw r0, r7
    bge lbl_fn_800B28F8_00000634
    b lbl_fn_800B28F8_00000638
lbl_fn_800B28F8_00000634:
    mr r0, r7
lbl_fn_800B28F8_00000638:
    lfs f0, 0x38(r5)
    addi r6, r1, 0x9c
    lfs f4, 0x38(r4)
    lfs f3, 0x34(r5)
    fsubs f13, f0, f4
    lfs f7, 0x34(r4)
    lfs f0, 0x30(r5)
    fsubs f12, f3, f7
    lfs f6, 0x30(r4)
    fmuls f10, f13, f1
    fsubs f11, f0, f6
    lfs f0, 0x44(r5)
    fmuls f9, f12, f1
    fadds f2, f10, f4
    lfs f5, 0x44(r4)
    fmuls f8, f11, f1
    fsubs f17, f0, f5
    lfs f4, 0x40(r5)
    lfs f3, 0x40(r4)
    fadds f7, f9, f7
    lfs f0, 0x3c(r5)
    fsubs f16, f4, f3
    lfs f4, 0x3c(r4)
    fadds f6, f8, f6
    stfs f7, 0xa0(r1)
    fmuls f7, f16, f22
    fsubs f15, f0, f4
    stfs f6, 0x9c(r1)
    fmuls f14, f17, f22
    fadds f3, f7, f3
    psq_l f1, 0x0(r6), 0, 0
    fmuls f6, f15, f22
    stfs f3, 0xc0(r1)
    fadds f0, f14, f5
    fadds f3, f6, f4
    stw r0, 0x48(r3)
    stfs f3, 0xc4(r1)
    stfs f11, 0x64(r1)
    stfs f12, 0x68(r1)
    stfs f13, 0x6c(r1)
    stfs f8, 0x58(r1)
    stfs f9, 0x5c(r1)
    stfs f10, 0x60(r1)
    stfs f2, 0xa4(r1)
    psq_st f1, 0x30(r3), 0, 0
    stfs f2, 0x38(r3)
    stfs f15, 0x4c(r1)
    stfs f16, 0x50(r1)
    stfs f17, 0x54(r1)
    stfs f6, 0x40(r1)
    stfs f7, 0x44(r1)
    stfs f14, 0x48(r1)
    lfs f30, 0x50(r5)
    fmr f2, f0
    lfs f17, 0x50(r4)
    addi r6, r1, 0x90
    lfs f18, 0x54(r5)
    addi r7, r1, 0x70
    stfd f18, 0xd8(r1)
    fsubs f30, f30, f17
    lfs f18, 0x54(r4)
    lfs f3, 0x1c(r5)
    stfd f30, 0xd0(r1)
    lfd f30, 0xd8(r1)
    lfs f29, 0x1c(r4)
    lfs f19, 0x58(r5)
    fsubs f30, f30, f18
    fsubs f23, f3, f29
    stfd f19, 0xe8(r1)
    lfs f4, 0x18(r5)
    lfs f21, 0x18(r4)
    stfd f30, 0xe0(r1)
    fmuls f26, f23, f22
    fsubs f24, f4, f21
    lfs f30, 0xc4(r1)
    stfs f30, 0x90(r1)
    lfs f3, 0x14(r5)
    fadds f29, f26, f29
    lfs f15, 0x14(r4)
    fmuls f27, f24, f22
    lfs f4, 0x2c(r5)
    fsubs f25, f3, f15
    lfs f6, 0x2c(r4)
    lfs f14, 0x4c(r5)
    fsubs f31, f4, f6
    fmuls f28, f25, f22
    lfs f16, 0x4c(r4)
    stfs f2, 0x44(r3)
    fmr f2, f29
    fmuls f10, f31, f22
    fsubs f14, f14, f16
    fadds f15, f28, f15
    lfs f4, 0x28(r5)
    fadds f6, f10, f6
    lfs f5, 0x28(r4)
    stfd f14, 0xc8(r1)
    fsubs f13, f4, f5
    stfs f15, 0x70(r1)
    lfd f15, 0xe0(r1)
    fmuls f9, f13, f22
    lfs f19, 0x58(r4)
    lfd f30, 0xe8(r1)
    fmadds f15, f22, f15, f18
    lfs f3, 0x24(r5)
    fadds f5, f9, f5
    lfs f4, 0x24(r4)
    fsubs f30, f30, f19
    lfs f14, 0x5c(r5)
    fsubs f12, f3, f4
    lfs f20, 0x5c(r4)
    stfd f30, 0xf0(r1)
    fadds f30, f27, f21
    lfd f21, 0xc8(r1)
    fsubs f14, f14, f20
    fmadds f16, f22, f21, f16
    stfd f14, 0xf8(r1)
    fmuls f8, f12, f22
    lfs f14, 0xc0(r1)
    stfs f14, 0x94(r1)
    lfd f21, 0xd0(r1)
    fadds f4, f8, f4
    psq_l f1, 0x0(r6), 0, 0
    fmadds f14, f22, f21, f17
    lfd f17, 0xf0(r1)
    lfs f7, 0x20(r5)
    fmadds f18, f22, f17, f19
    lfs f3, 0x20(r4)
    lfd f17, 0xf8(r1)
    fsubs f11, f7, f3
    stfs f30, 0x74(r1)
    fmadds f17, f22, f17, f20
    psq_st f1, 0x3c(r3), 0, 0
    fmuls f7, f11, f22
    psq_l f1, 0x0(r7), 0, 0
    stfs f0, 0x98(r1)
    fadds f3, f7, f3
    stfs f11, 0x30(r1)
    stfs f12, 0x34(r1)
    stfs f13, 0x38(r1)
    stfs f31, 0x3c(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f10, 0x2c(r1)
    stfs f3, 0x80(r1)
    stfs f4, 0x84(r1)
    stfs f5, 0x88(r1)
    stfs f6, 0x8c(r1)
    stfs f3, 0x20(r3)
    stfs f4, 0x24(r3)
    stfs f5, 0x28(r3)
    stfs f6, 0x2c(r3)
    stfs f16, 0x4c(r3)
    stfs f14, 0x50(r3)
    stfs f15, 0x54(r3)
    stfs f18, 0x58(r3)
    stfs f17, 0x5c(r3)
    stfs f25, 0x14(r1)
    stfs f24, 0x18(r1)
    stfs f23, 0x1c(r1)
    stfs f28, 0x8(r1)
    stfs f27, 0xc(r1)
    stfs f26, 0x10(r1)
    stfs f29, 0x78(r1)
    psq_st f1, 0x14(r3), 0, 0
    stfs f2, 0x1c(r3)
    psq_l f31, 0x218(r1), 0, 0
    lfd f31, 0x210(r1)
    psq_l f30, 0x208(r1), 0, 0
    lfd f30, 0x200(r1)
    psq_l f29, 0x1f8(r1), 0, 0
    lfd f29, 0x1f0(r1)
    psq_l f28, 0x1e8(r1), 0, 0
    lfd f28, 0x1e0(r1)
    psq_l f27, 0x1d8(r1), 0, 0
    lfd f27, 0x1d0(r1)
    psq_l f26, 0x1c8(r1), 0, 0
    lfd f26, 0x1c0(r1)
    psq_l f25, 0x1b8(r1), 0, 0
    lfd f25, 0x1b0(r1)
    psq_l f24, 0x1a8(r1), 0, 0
    lfd f24, 0x1a0(r1)
    psq_l f23, 0x198(r1), 0, 0
    lfd f23, 0x190(r1)
    psq_l f22, 0x188(r1), 0, 0
    lfd f22, 0x180(r1)
    psq_l f21, 0x178(r1), 0, 0
    lfd f21, 0x170(r1)
    psq_l f20, 0x168(r1), 0, 0
    lfd f20, 0x160(r1)
    psq_l f19, 0x158(r1), 0, 0
    lfd f19, 0x150(r1)
    psq_l f18, 0x148(r1), 0, 0
    lfd f18, 0x140(r1)
    psq_l f17, 0x138(r1), 0, 0
    lfd f17, 0x130(r1)
    psq_l f16, 0x128(r1), 0, 0
    lfd f16, 0x120(r1)
    psq_l f15, 0x118(r1), 0, 0
    lfd f15, 0x110(r1)
    psq_l f14, 0x108(r1), 0, 0
    lfd f14, 0x100(r1)
    addi r1, r1, 0x220
    blr
}

asm void fn_800B2D2C(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    lfs f31, lbl_80880F00
    stw r31, 0x2c(r1)
    li r31, 0x0
    stw r30, 0x28(r1)
    li r30, 0x0
    stw r29, 0x24(r1)
    mr r29, r3
    b lbl_fn_800B2D2C_00000A24
lbl_fn_800B2D2C_0000099C:
    lwz r0, 0x10(r29)
    lfs f0, 0x14(r29)
    add r4, r0, r31
    lfs f2, 0x1c(r29)
    lfs f3, 0xc(r4)
    lfs f1, 0x18(r29)
    fmuls f5, f0, f3
    lfsx f0, r31, r0
    fmuls f4, f1, f3
    fmuls f1, f2, f3
    stfs f5, 0x8(r1)
    fadds f0, f0, f5
    stfs f1, 0x10(r1)
    stfsx f0, r31, r0
    lfs f0, 0x4(r4)
    stfs f4, 0xc(r1)
    fadds f2, f0, f4
    stfs f2, 0x4(r4)
    lfs f0, 0x8(r4)
    fadds f0, f0, f1
    stfs f0, 0x8(r4)
    lfs f1, 0x10(r4)
    lfs f0, 0x14(r4)
    fsubs f1, f2, f1
    fcmpo cr0, f1, f0
    bge lbl_fn_800B2D2C_00000A1C
    fcmpo cr0, f1, f31
    stfs f1, 0x14(r4)
    bge lbl_fn_800B2D2C_00000A1C
    mr r3, r29
    li r5, 0x0
    bl fn_800B257C
lbl_fn_800B2D2C_00000A1C:
    addi r31, r31, 0x18
    addi r30, r30, 0x1
lbl_fn_800B2D2C_00000A24:
    lwz r0, 0x48(r29)
    cmpw r30, r0
    blt lbl_fn_800B2D2C_0000099C
    lwz r0, 0x44(r1)
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_800B2E18(void)
{
    nofralloc
    mr r4, r3
    mr r3, r6
    addi r4, r4, 0x30
    b fn_800502A8
}

asm void fn_800B2E28(void)
{
    nofralloc
    blr
}

asm void fn_800B2E2C(void)
{
    nofralloc
    lis r6, lbl_80732DD0@ha
    lis r4, lbl_80778F30@ha
    li r0, -0x1
    li r5, 0x1
    addi r6, r6, lbl_80732DD0@l
    addi r4, r4, lbl_80778F30@l
    stw r5, 0x4(r3)
    stw r6, 0x8(r3)
    stw r0, 0xc(r3)
    stw r0, 0x10(r3)
    stw r4, 0x0(r3)
    blr
}

asm void fn_800B2E5C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_800B2E5C_00000AC0
    cmpwi r4, 0x0
    ble lbl_fn_800B2E5C_00000AC0
    bl dtor_80084684
lbl_fn_800B2E5C_00000AC0:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800B2E9C(void)
{
    nofralloc
    b fn_800B34C0
}

asm void fn_800B2EA0(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    addi r11, r1, 0x60
    stfd f31, 0x70(r1)
    psq_st f31, 0x78(r1), 0, 0
    stfd f30, 0x60(r1)
    psq_st f30, 0x68(r1), 0, 0
    bl _savegpr_27
    lwz r4, lbl_8087EEE0
    mr r27, r3
    lwz r31, 0x3c(r4)
    lwz r30, 0x40(r4)
    bl fn_80614190
    lwz r3, lbl_8087EFB4
    li r4, 0x1
    bl fn_800C0508
    srawi r0, r31, 2
    lwz r3, lbl_8087EF8C
    addze r31, r0
    li r6, 0x6
    srawi r0, r30, 2
    addze r30, r0
    mr r4, r31
    mr r5, r30
    bl fn_800A96AC
    mr r29, r3
    addi r3, r1, 0x28
    mr r4, r29
    clrlwi r5, r31, 16
    clrlwi r6, r30, 16
    li r7, 0x6
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_80615FF0
    lfs f1, lbl_80880F28
    addi r3, r1, 0x28
    li r4, 0x1
    li r5, 0x1
    fmr f2, f1
    li r6, 0x0
    fmr f3, f1
    li r7, 0x0
    li r8, 0x0
    bl fn_80616250
    lwz r3, lbl_8087EF8C
    mr r4, r31
    mr r5, r30
    li r6, 0x6
    bl fn_800A96AC
    mr r28, r3
    addi r3, r1, 0x8
    mr r4, r28
    clrlwi r5, r31, 16
    clrlwi r6, r30, 16
    li r7, 0x6
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_80615FF0
    lfs f1, lbl_80880F28
    addi r3, r1, 0x8
    li r4, 0x1
    li r5, 0x1
    fmr f2, f1
    li r6, 0x0
    fmr f3, f1
    li r7, 0x0
    li r8, 0x0
    bl fn_80616250
    li r3, 0x1
    bl fn_80613BB0
    li r3, 0x0
    bl fn_80615D20
    li r3, 0x1
    bl fn_806179E0
    li r3, 0x0
    bl fn_80617200
    li r3, 0x0
    li r4, 0x3
    bl fn_80617340
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0xff
    bl fn_80617880
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    li r3, 0x0
    bl fn_80617220
    lwz r4, lbl_8087EFB4
    li r5, 0x0
    lwz r3, lbl_8087EEE0
    addi r4, r4, 0x74c
    bl fn_800763FC
    lwz r3, lbl_8087EEE0
    slwi r6, r31, 1
    slwi r7, r30, 1
    li r4, 0x0
    li r5, 0x0
    bl fn_80075F58
    lwz r3, lbl_8087EFB4
    bl fn_800BFB70
    clrlslwi r5, r31, 17, 1
    clrlslwi r6, r30, 17, 1
    li r3, 0x0
    li r4, 0x0
    bl fn_80614CC0
    clrlwi r3, r31, 16
    clrlwi r4, r30, 16
    li r5, 0x6
    li r6, 0x1
    bl fn_80614D30
    mr r3, r29
    li r4, 0x1
    bl fn_80615560
    bl fn_80614190
    lwz r3, lbl_8087EFA8
    lfs f1, 0x420(r3)
    bl fn_8068AD58
    lwz r3, lbl_8087EFA8
    frsp f31, f1
    lfs f1, 0x420(r3)
    lfs f30, 0x418(r3)
    bl fn_8068A850
    lwz r3, lbl_8087EFA8
    fneg f0, f31
    frsp f1, f1
    mr r4, r28
    lfs f3, 0x418(r3)
    mr r5, r31
    fmuls f2, f0, f30
    fmuls f1, f1, f3
    mr r6, r30
    addi r3, r1, 0x28
    li r7, 0x6
    li r8, 0x0
    li r9, 0x0
    bl fn_800A981C
    lwz r3, lbl_8087EFA8
    lfs f1, 0x420(r3)
    bl fn_8068A850
    lwz r3, lbl_8087EFA8
    frsp f30, f1
    lfs f1, 0x420(r3)
    lfs f31, 0x41c(r3)
    bl fn_8068AD58
    frsp f0, f1
    lwz r3, lbl_8087EFA8
    fmuls f2, f30, f31
    mr r4, r29
    lfs f1, 0x41c(r3)
    mr r5, r31
    fneg f0, f0
    mr r6, r30
    addi r3, r1, 0x8
    li r7, 0x6
    li r8, 0x0
    li r9, 0x0
    fmuls f1, f0, f1
    bl fn_800A981C
    li r3, 0x1
    bl fn_80613BB0
    li r3, 0x0
    bl fn_80615D20
    li r3, 0x1
    bl fn_806179E0
    li r3, 0x0
    bl fn_80617200
    lwz r3, lbl_8087EEE0
    addi r4, r1, 0x28
    li r5, 0x0
    bl fn_800763FC
    li r3, 0x0
    li r4, 0x3
    bl fn_80617340
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x4
    bl fn_80617880
    li r3, 0x4
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x2
    bl fn_80615D50
    li r3, 0x0
    bl fn_80617220
    li r3, 0x0
    li r4, 0x1
    li r5, 0x0
    li r6, 0x3
    bl fn_80617D50
    lwz r3, lbl_8087EEE0
    bl fn_80075DEC
    lwz r3, lbl_8087EFB4
    bl fn_800BFB70
    mr r3, r27
    bl fn_800B35F4
    addi r11, r1, 0x60
    psq_l f31, 0x78(r1), 0, 0
    lfd f31, 0x70(r1)
    psq_l f30, 0x68(r1), 0, 0
    lfd f30, 0x60(r1)
    bl _restgpr_27
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_800B3208(void)
{
    nofralloc
    blr
}

asm void fn_800B320C(void)
{
    nofralloc
    mr r5, r3
    mr r3, r4
    lwz r4, 0x8(r5)
    addi r5, r5, 0x4
    li r6, 0x0
    li r7, 0x0
    b fn_80087994
}

asm void fn_800B3228(void)
{
    nofralloc
    blr
}

asm void fn_800B322C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_800B322C_00000E90
    cmpwi r4, 0x0
    ble lbl_fn_800B322C_00000E90
    bl dtor_80084684
lbl_fn_800B322C_00000E90:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800B326C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    lfs f31, lbl_80880F30
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r31, lbl_8087EFB4
    b lbl_fn_800B326C_00000F38
lbl_fn_800B326C_00000EDC:
    lwz r3, 0x0(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800B326C_00000F34
    lfs f0, 0x4(r30)
    fcmpo cr0, f0, f31
    cror eq, lt, eq
    bne lbl_fn_800B326C_00000F20
    lwz r0, 0x18(r29)
    slwi r0, r0, 2
    add r0, r29, r0
    addic. r3, r0, 0x1c
    beq lbl_fn_800B326C_00000F10
    stw r30, 0x0(r3)
lbl_fn_800B326C_00000F10:
    lwz r3, 0x18(r29)
    addi r0, r3, 0x1
    stw r0, 0x18(r29)
    b lbl_fn_800B326C_00000F34
lbl_fn_800B326C_00000F20:
    lwz r12, 0x0(r3)
    mr r4, r31
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
lbl_fn_800B326C_00000F34:
    lwz r30, 0x8(r30)
lbl_fn_800B326C_00000F38:
    cmpwi r30, 0x0
    bne lbl_fn_800B326C_00000EDC
    lwz r0, 0x34(r1)
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_800B3328(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    li r29, 0x0
    stw r28, 0x10(r1)
    mr r28, r3
    mr r31, r28
    lwz r30, lbl_8087EFB4
    b lbl_fn_800B3328_00000FB8
lbl_fn_800B3328_00000F94:
    lwz r3, 0x1c(r31)
    mr r4, r30
    lwz r3, 0x0(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    addi r31, r31, 0x4
    addi r29, r29, 0x1
lbl_fn_800B3328_00000FB8:
    lwz r0, 0x18(r28)
    cmplw r29, r0
    blt lbl_fn_800B3328_00000F94
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800B33A8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r31, lbl_8087EEE0
    mr r3, r31
    bl fn_80071E04
    lwz r4, lbl_8087EFB4
    mr r3, r31
    addi r4, r4, 0x18c
    bl fn_80071D68
    mr r3, r31
    li r4, 0x6
    li r5, 0x0
    bl fn_80076760
    mr r3, r31
    li r4, 0x8
    li r5, 0x1
    bl fn_80076760
    mr r3, r31
    li r4, 0x9
    li r5, 0x2
    bl fn_80076760
    mr r3, r31
    li r4, 0xa
    li r5, 0x1
    bl fn_80076760
    mr r3, r31
    bl fn_800761A8
    lwz r4, 0x14(r30)
    li r0, 0x0
    lwz r3, lbl_8087EFB4
    clrlwi r4, r4, 31
    stw r4, 0x954(r3)
    stw r0, 0x18(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800B3454(void)
{
    nofralloc
    lwz r3, lbl_8087EFB4
    li r0, 0x0
    stw r0, 0x954(r3)
    blr
}

asm void fn_800B3464(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r4
    lwz r31, lbl_8087EFB4
    b lbl_fn_800B3464_000010DC
lbl_fn_800B3464_000010C0:
    lwz r3, 0x0(r30)
    mr r4, r31
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    lwz r30, 0x8(r30)
lbl_fn_800B3464_000010DC:
    cmpwi r30, 0x0
    bne lbl_fn_800B3464_000010C0
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800B34C0(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    stw r31, 0x9c(r1)
    lwz r31, lbl_8087EEE0
    mr r3, r31
    bl fn_80071E04
    lwz r0, 0x40(r31)
    lis r4, 0x4330
    lfs f1, lbl_80880F38
    lis r5, lbl_80732DD8@ha
    xoris r0, r0, 0x8000
    lwz r3, 0x3c(r31)
    stw r0, 0x8c(r1)
    fmr f3, f1
    xoris r0, r3, 0x8000
    lfd f9, lbl_80732DD8@l(r5)
    stw r4, 0x88(r1)
    fmr f5, f1
    lfs f6, lbl_80880F34
    lfd f0, 0x88(r1)
    addi r3, r1, 0x8
    stw r0, 0x94(r1)
    fsubs f2, f0, f9
    stw r4, 0x90(r1)
    lfd f0, 0x90(r1)
    fsubs f4, f0, f9
    bl fn_805F95A0
    addi r5, r1, 0x8
    addi r4, r1, 0x48
    psq_l f1, 0x0(r5), 0, 0
    mr r3, r31
    psq_l f2, 0x8(r5), 0, 0
    psq_l f3, 0x10(r5), 0, 0
    psq_l f4, 0x18(r5), 0, 0
    psq_l f5, 0x20(r5), 0, 0
    psq_l f6, 0x28(r5), 0, 0
    psq_l f7, 0x30(r5), 0, 0
    psq_l f8, 0x38(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    psq_st f2, 0x8(r4), 0, 0
    psq_st f3, 0x10(r4), 0, 0
    psq_st f4, 0x18(r4), 0, 0
    psq_st f5, 0x20(r4), 0, 0
    psq_st f6, 0x28(r4), 0, 0
    psq_st f7, 0x30(r4), 0, 0
    psq_st f8, 0x38(r4), 0, 0
    bl fn_80071D74
    mr r3, r31
    li r4, 0x6
    li r5, 0x0
    bl fn_80076760
    mr r3, r31
    li r4, 0x8
    li r5, 0x0
    bl fn_80076760
    mr r3, r31
    li r4, 0x9
    li r5, 0x7
    bl fn_80076760
    mr r3, r31
    li r4, 0xa
    li r5, 0x0
    bl fn_80076760
    mr r3, r31
    li r4, 0x4
    li r5, 0x4
    bl fn_80076760
    mr r3, r31
    li r4, 0x5
    li r5, 0x5
    bl fn_80076760
    lwz r0, 0xa4(r1)
    lwz r31, 0x9c(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_800B35F4(void)
{
    nofralloc
    blr
}

asm void fn_800B35F8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r4
    lwz r31, lbl_8087EFB4
    b lbl_fn_800B35F8_00001270
lbl_fn_800B35F8_00001254:
    lwz r3, 0x0(r30)
    mr r4, r31
    lwz r12, 0x0(r3)
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    lwz r30, 0x8(r30)
lbl_fn_800B35F8_00001270:
    cmpwi r30, 0x0
    bne lbl_fn_800B35F8_00001254
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800B3654(void)
{
    nofralloc
    blr
}

asm void fn_800B3658(void)
{
    nofralloc
    blr
}

asm void fn_800B365C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r31, lbl_8087EEE0
    mr r3, r31
    bl fn_80071E04
    lwz r4, lbl_8087EFB4
    mr r3, r31
    addi r4, r4, 0x18c
    bl fn_80071D68
    mr r3, r31
    li r4, 0x6
    li r5, 0x0
    bl fn_80076760
    mr r3, r31
    li r4, 0x8
    li r5, 0x1
    bl fn_80076760
    mr r3, r31
    li r4, 0x9
    li r5, 0x2
    bl fn_80076760
    mr r3, r31
    li r4, 0xa
    li r5, 0x1
    bl fn_80076760
    mr r3, r31
    bl fn_800761A8
    lwz r4, 0x14(r30)
    li r3, 0x0
    lwz r5, lbl_8087EFB4
    li r0, 0x1
    clrlwi r6, r4, 31
    li r4, 0xb
    stw r6, 0x954(r5)
    li r5, 0x0
    stw r3, 0x18(r30)
    lwz r31, lbl_8087EEE0
    stb r0, lbl_8087EFB0
    mr r3, r31
    bl fn_80076760
    mr r3, r31
    li r4, 0x8
    li r5, 0x1
    bl fn_80076760
    mr r3, r31
    li r4, 0x9
    li r5, 0x2
    bl fn_80076760
    mr r3, r31
    li r4, 0xa
    li r5, 0x1
    bl fn_80076760
    mr r3, r31
    bl fn_800761A8
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800B375C(void)
{
    nofralloc
    lwz r3, lbl_8087EFB4
    li r0, 0x0
    stb r0, lbl_8087EFB0
    stw r0, 0x954(r3)
    blr
}

asm void fn_800B3770(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    lwz r30, lbl_8087EEE0
    mr r3, r30
    bl fn_80071E04
    lwz r4, lbl_8087EFB4
    mr r3, r30
    addi r4, r4, 0x18c
    bl fn_80071D68
    mr r3, r30
    li r4, 0x6
    li r5, 0x0
    bl fn_80076760
    mr r3, r30
    li r4, 0x8
    li r5, 0x1
    bl fn_80076760
    mr r3, r30
    li r4, 0x9
    li r5, 0x2
    bl fn_80076760
    mr r3, r30
    li r4, 0xa
    li r5, 0x1
    bl fn_80076760
    mr r3, r30
    bl fn_800761A8
    lwz r5, 0x14(r31)
    li r0, 0x0
    lwz r4, lbl_8087EFB4
    li r3, 0x0
    clrlwi r5, r5, 31
    stw r5, 0x954(r4)
    stw r0, 0x18(r31)
    bl fn_80617DA0
    lwz r5, lbl_8087EEE0
    li r3, 0x0
    li r4, 0x0
    lwz r30, 0x40(r5)
    lwz r31, 0x3c(r5)
    clrlwi r6, r30, 16
    clrlwi r5, r31, 16
    bl fn_80614CC0
    clrlwi r3, r31, 16
    clrlwi r4, r30, 16
    li r5, 0x13
    li r6, 0x0
    bl fn_80614D30
    lwz r3, lbl_8087EFB4
    li r4, 0x1
    lwz r3, 0x79c(r3)
    bl fn_80615560
    li r3, 0x1
    bl fn_80617DA0
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800B3870(void)
{
    nofralloc
    blr
}

asm void fn_800B3874(void)
{
    nofralloc
    blr
}

asm void fn_800B3878(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_800B3878_000014DC
    cmpwi r4, 0x0
    ble lbl_fn_800B3878_000014DC
    bl dtor_80084684
lbl_fn_800B3878_000014DC:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800B38B8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_800B38B8_0000151C
    cmpwi r4, 0x0
    ble lbl_fn_800B38B8_0000151C
    bl dtor_80084684
lbl_fn_800B38B8_0000151C:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800B38F8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_800B38F8_0000155C
    cmpwi r4, 0x0
    ble lbl_fn_800B38F8_0000155C
    bl dtor_80084684
lbl_fn_800B38F8_0000155C:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800B3938(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_800B3938_0000159C
    cmpwi r4, 0x0
    ble lbl_fn_800B3938_0000159C
    bl dtor_80084684
lbl_fn_800B3938_0000159C:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800B3978(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    srwi r7, r5, 31
    srwi r0, r6, 31
    li r8, 0x0
    stw r31, 0x2c(r1)
    add r7, r7, r5
    srawi r12, r7, 1
    add r0, r0, r6
    stw r30, 0x28(r1)
    li r30, 0x0
    srawi r31, r0, 1
    li r9, 0x0
    stw r29, 0x24(r1)
    b lbl_fn_800B3978_000016B4
lbl_fn_800B3978_000015EC:
    slwi r0, r8, 2
    addi r10, r9, 0x1
    mullw r7, r5, r9
    li r6, 0x0
    add r29, r3, r0
    mullw r0, r5, r10
    slwi r7, r7, 2
    add r10, r4, r7
    slwi r0, r0, 2
    add r0, r4, r0
    mtctr r12
    cmpwi r12, 0x0
    ble lbl_fn_800B3978_000016A8
lbl_fn_800B3978_00001620:
    add r7, r10, r6
    lfsx f3, r10, r6
    lfs f2, 0x4(r7)
    add r11, r0, r6
    lfsx f0, r6, r0
    lfs f1, 0x4(r11)
    fcmpo cr0, f2, f3
    stfs f2, 0x14(r1)
    stfs f0, 0x10(r1)
    stfs f1, 0xc(r1)
    stfs f3, 0x8(r1)
    bge lbl_fn_800B3978_00001658
    addi r7, r1, 0x14
    b lbl_fn_800B3978_0000165C
lbl_fn_800B3978_00001658:
    addi r7, r1, 0x8
lbl_fn_800B3978_0000165C:
    lfs f2, 0x0(r7)
    stfs f2, 0x8(r1)
    fcmpo cr0, f0, f2
    bge lbl_fn_800B3978_00001674
    addi r7, r1, 0x10
    b lbl_fn_800B3978_00001678
lbl_fn_800B3978_00001674:
    addi r7, r1, 0x8
lbl_fn_800B3978_00001678:
    lfs f0, 0x0(r7)
    stfs f0, 0x8(r1)
    fcmpo cr0, f1, f0
    bge lbl_fn_800B3978_00001690
    addi r7, r1, 0xc
    b lbl_fn_800B3978_00001694
lbl_fn_800B3978_00001690:
    addi r7, r1, 0x8
lbl_fn_800B3978_00001694:
    lfs f0, 0x0(r7)
    addi r6, r6, 0x8
    stfs f0, 0x0(r29)
    addi r29, r29, 0x4
    bdnz lbl_fn_800B3978_00001620
lbl_fn_800B3978_000016A8:
    add r8, r8, r12
    addi r9, r9, 0x2
    addi r30, r30, 0x1
lbl_fn_800B3978_000016B4:
    cmpw r30, r31
    blt lbl_fn_800B3978_000015EC
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    addi r1, r1, 0x30
    blr
}

asm void fn_800B3A94(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x30
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    bl _savegpr_24
    lis r29, lbl_80732E48@ha
    lis r4, lbl_807790B0@ha
    li r5, -0x1
    li r6, 0x1
    addi r29, r29, lbl_80732E48@l
    addi r4, r4, lbl_807790B0@l
    li r0, 0x0
    stw r6, 0x4(r3)
    lfs f31, lbl_80880F4C
    mr r24, r3
    stw r29, 0x8(r3)
    li r26, 0x0
    li r28, 0x0
    li r30, 0x20
    stw r5, 0xc(r3)
    lis r31, 0x8000
    stw r5, 0x10(r3)
    stw r4, 0x0(r3)
    stw r0, 0x2c(r3)
lbl_fn_800B3A94_00001738:
    sraw r25, r30, r26
    addi r6, r29, 0xd
    mullw r25, r25, r25
    add r27, r24, r28
    mr r7, r6
    li r4, 0x20
    li r5, 0x6
    li r8, 0x0
    slwi r3, r25, 2
    bl fn_800848B4
    cmpwi cr1, r25, 0x0
    stw r3, 0x14(r27)
    li r3, 0x0
    ble cr1, lbl_fn_800B3A94_00001844
    cmpwi r25, 0x8
    subi r4, r25, 0x8
    ble lbl_fn_800B3A94_0000181C
    li r5, 0x0
    blt cr1, lbl_fn_800B3A94_00001794
    subi r0, r31, 0x2
    cmpw r25, r0
    bgt lbl_fn_800B3A94_00001794
    li r5, 0x1
lbl_fn_800B3A94_00001794:
    cmpwi r5, 0x0
    beq lbl_fn_800B3A94_0000181C
    addi r0, r4, 0x7
    li r5, 0x0
    srwi r0, r0, 3
    mtctr r0
    cmpwi r4, 0x0
    ble lbl_fn_800B3A94_0000181C
lbl_fn_800B3A94_000017B4:
    lwz r4, 0x14(r27)
    addi r3, r3, 0x8
    stfsx f31, r4, r5
    lwz r0, 0x14(r27)
    add r4, r0, r5
    stfs f31, 0x4(r4)
    lwz r0, 0x14(r27)
    add r4, r0, r5
    stfs f31, 0x8(r4)
    lwz r0, 0x14(r27)
    add r4, r0, r5
    stfs f31, 0xc(r4)
    lwz r0, 0x14(r27)
    add r4, r0, r5
    stfs f31, 0x10(r4)
    lwz r0, 0x14(r27)
    add r4, r0, r5
    stfs f31, 0x14(r4)
    lwz r0, 0x14(r27)
    add r4, r0, r5
    stfs f31, 0x18(r4)
    lwz r0, 0x14(r27)
    add r4, r0, r5
    addi r5, r5, 0x20
    stfs f31, 0x1c(r4)
    bdnz lbl_fn_800B3A94_000017B4
lbl_fn_800B3A94_0000181C:
    subf r0, r3, r25
    slwi r5, r3, 2
    mtctr r0
    cmpw r3, r25
    bge lbl_fn_800B3A94_00001844
lbl_fn_800B3A94_00001830:
    lwz r4, 0x14(r27)
    addi r3, r3, 0x1
    stfsx f31, r4, r5
    addi r5, r5, 0x4
    bdnz lbl_fn_800B3A94_00001830
lbl_fn_800B3A94_00001844:
    addi r26, r26, 0x1
    addi r28, r28, 0x4
    cmpwi r26, 0x5
    blt lbl_fn_800B3A94_00001738
    psq_l f31, 0x38(r1), 0, 0
    mr r3, r24
    lfd f31, 0x30(r1)
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_800B3C3C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    beq lbl_fn_800B3C3C_000018E0
    lis r4, lbl_807790B0@ha
    mr r31, r28
    addi r4, r4, lbl_807790B0@l
    stw r4, 0x0(r3)
    li r30, 0x0
lbl_fn_800B3C3C_000018B8:
    lwz r3, 0x14(r31)
    bl fn_80084C24
    addi r30, r30, 0x1
    addi r31, r31, 0x4
    cmpwi r30, 0x5
    blt lbl_fn_800B3C3C_000018B8
    cmpwi r29, 0x0
    ble lbl_fn_800B3C3C_000018E0
    mr r3, r28
    bl dtor_80084684
lbl_fn_800B3C3C_000018E0:
    lwz r31, 0x1c(r1)
    mr r3, r28
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800B3CC8(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r23, 0xc(r1)
    mr r25, r3
    mr r27, r4
    li r24, 0x1
    b lbl_fn_800B3CC8_00001B60
lbl_fn_800B3CC8_00001924:
    lwz r3, 0x0(r27)
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_800B3CC8_00001B5C
    lwz r28, 0x0(r27)
    addi r3, r28, 0x164
    bl fn_80476194
    mr r23, r3
    addi r3, r28, 0x164
    bl fn_804761B0
    cmpwi r23, 0x0
    mr r26, r3
    beq lbl_fn_800B3CC8_00001978
    mr r3, r25
    mr r4, r28
    mr r5, r23
    bl fn_800B4694
    b lbl_fn_800B3CC8_00001B58
lbl_fn_800B3CC8_00001978:
    cmpwi r3, 0x0
    beq lbl_fn_800B3CC8_00001B58
    lwz r4, lbl_8087EFB4
    lwz r29, 0x14(r3)
    addi r30, r4, 0x204
    mr r4, r29
    mr r3, r30
    bl fn_800500FC
    cmpwi r3, 0x2
    bne lbl_fn_800B3CC8_000019F0
    lhz r4, 0x20(r29)
    mr r3, r25
    lwz r7, 0x24(r26)
    li r6, 0x1
    slwi r0, r4, 2
    lhz r5, 0x22(r29)
    subf r4, r4, r0
    cmpwi r7, -0x1
    slwi r0, r5, 2
    lwz r8, 0x1c(r26)
    slwi r4, r4, 1
    add r4, r8, r4
    subf r5, r5, r0
    bne lbl_fn_800B3CC8_000019DC
    li r6, 0x4
lbl_fn_800B3CC8_000019DC:
    lwz r8, 0x28(r26)
    li r9, 0x0
    li r10, 0x0
    bl fn_800B47AC
    b lbl_fn_800B3CC8_00001B58
lbl_fn_800B3CC8_000019F0:
    cmpwi r3, 0x1
    bne lbl_fn_800B3CC8_00001B58
    lhz r4, 0x24(r29)
    mr r3, r25
    lwz r7, 0x24(r26)
    li r6, 0x1
    slwi r0, r4, 2
    lhz r5, 0x26(r29)
    subf r4, r4, r0
    cmpwi r7, -0x1
    slwi r0, r5, 2
    lwz r8, 0x1c(r26)
    slwi r4, r4, 1
    add r4, r8, r4
    subf r5, r5, r0
    bne lbl_fn_800B3CC8_00001A34
    li r6, 0x4
lbl_fn_800B3CC8_00001A34:
    lwz r8, 0x28(r26)
    li r9, 0x1
    li r10, 0x0
    bl fn_800B47AC
    li r31, 0x0
lbl_fn_800B3CC8_00001A48:
    lha r0, 0x18(r29)
    cmpwi r0, -0x1
    beq lbl_fn_800B3CC8_00001B48
    mulli r0, r0, 0x28
    lwz r4, 0x14(r26)
    mr r3, r30
    add r28, r4, r0
    mr r4, r28
    bl fn_800500FC
    cmpwi r3, 0x2
    bne lbl_fn_800B3CC8_00001AC4
    lhz r4, 0x20(r28)
    mr r3, r25
    lwz r7, 0x24(r26)
    li r6, 0x1
    slwi r0, r4, 2
    lhz r5, 0x22(r28)
    subf r4, r4, r0
    cmpwi r7, -0x1
    slwi r0, r5, 2
    lwz r8, 0x1c(r26)
    slwi r4, r4, 1
    add r4, r8, r4
    subf r5, r5, r0
    bne lbl_fn_800B3CC8_00001AB0
    li r6, 0x4
lbl_fn_800B3CC8_00001AB0:
    lwz r8, 0x28(r26)
    li r9, 0x0
    li r10, 0x0
    bl fn_800B47AC
    b lbl_fn_800B3CC8_00001B48
lbl_fn_800B3CC8_00001AC4:
    cmpwi r3, 0x1
    bne lbl_fn_800B3CC8_00001B48
    lhz r4, 0x24(r28)
    mr r3, r25
    lwz r7, 0x24(r26)
    li r6, 0x1
    slwi r0, r4, 2
    lhz r5, 0x26(r28)
    subf r4, r4, r0
    cmpwi r7, -0x1
    slwi r0, r5, 2
    lwz r8, 0x1c(r26)
    slwi r4, r4, 1
    add r4, r8, r4
    subf r5, r5, r0
    bne lbl_fn_800B3CC8_00001B08
    li r6, 0x4
lbl_fn_800B3CC8_00001B08:
    lwz r8, 0x28(r26)
    li r9, 0x1
    li r10, 0x0
    bl fn_800B47AC
    li r23, 0x0
lbl_fn_800B3CC8_00001B1C:
    lha r6, 0x18(r28)
    cmpwi r6, -0x1
    beq lbl_fn_800B3CC8_00001B38
    mr r3, r25
    mr r4, r26
    mr r5, r30
    bl fn_800B448C
lbl_fn_800B3CC8_00001B38:
    addi r23, r23, 0x1
    addi r28, r28, 0x2
    cmpwi r23, 0x4
    blt lbl_fn_800B3CC8_00001B1C
lbl_fn_800B3CC8_00001B48:
    addi r31, r31, 0x1
    addi r29, r29, 0x2
    cmpwi r31, 0x4
    blt lbl_fn_800B3CC8_00001A48
lbl_fn_800B3CC8_00001B58:
    stw r24, 0x2c(r25)
lbl_fn_800B3CC8_00001B5C:
    lwz r27, 0x8(r27)
lbl_fn_800B3CC8_00001B60:
    cmpwi r27, 0x0
    bne lbl_fn_800B3CC8_00001924
    lmw r23, 0xc(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_800B3F40(void)
{
    nofralloc
    cmpwi r4, 0x0
    bnelr
    lfs f0, lbl_80880F4C
    li r4, 0x0
    lis r8, 0x8000
    li r9, 0x20
lbl_fn_800B3F40_00001B94:
    sraw r5, r9, r4
    li r6, 0x0
    mullw r5, r5, r5
    cmpwi cr1, r5, 0x0
    ble cr1, lbl_fn_800B3F40_00001C7C
    cmpwi r5, 0x8
    subi r7, r5, 0x8
    ble lbl_fn_800B3F40_00001C54
    li r10, 0x0
    blt cr1, lbl_fn_800B3F40_00001BCC
    subi r0, r8, 0x2
    cmpw r5, r0
    bgt lbl_fn_800B3F40_00001BCC
    li r10, 0x1
lbl_fn_800B3F40_00001BCC:
    cmpwi r10, 0x0
    beq lbl_fn_800B3F40_00001C54
    addi r0, r7, 0x7
    li r10, 0x0
    srwi r0, r0, 3
    mtctr r0
    cmpwi r7, 0x0
    ble lbl_fn_800B3F40_00001C54
lbl_fn_800B3F40_00001BEC:
    lwz r7, 0x14(r3)
    addi r6, r6, 0x8
    stfsx f0, r7, r10
    lwz r0, 0x14(r3)
    add r7, r0, r10
    stfs f0, 0x4(r7)
    lwz r0, 0x14(r3)
    add r7, r0, r10
    stfs f0, 0x8(r7)
    lwz r0, 0x14(r3)
    add r7, r0, r10
    stfs f0, 0xc(r7)
    lwz r0, 0x14(r3)
    add r7, r0, r10
    stfs f0, 0x10(r7)
    lwz r0, 0x14(r3)
    add r7, r0, r10
    stfs f0, 0x14(r7)
    lwz r0, 0x14(r3)
    add r7, r0, r10
    stfs f0, 0x18(r7)
    lwz r0, 0x14(r3)
    add r7, r0, r10
    addi r10, r10, 0x20
    stfs f0, 0x1c(r7)
    bdnz lbl_fn_800B3F40_00001BEC
lbl_fn_800B3F40_00001C54:
    subf r0, r6, r5
    slwi r7, r6, 2
    mtctr r0
    cmpw r6, r5
    bge lbl_fn_800B3F40_00001C7C
lbl_fn_800B3F40_00001C68:
    lwz r5, 0x14(r3)
    addi r6, r6, 0x1
    stfsx f0, r5, r7
    addi r7, r7, 0x4
    bdnz lbl_fn_800B3F40_00001C68
lbl_fn_800B3F40_00001C7C:
    addi r4, r4, 0x1
    addi r3, r3, 0x4
    cmpwi r4, 0x5
    blt lbl_fn_800B3F40_00001B94
    blr
}
