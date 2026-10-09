#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_14(void);
extern void _restgpr_23(void);
extern void _restgpr_24(void);
extern void _restgpr_27(void);
extern void _savegpr_14(void);
extern void _savegpr_23(void);
extern void _savegpr_24(void);
extern void _savegpr_27(void);
extern void fn_8004FF58(void);
extern void fn_80070B60(void);
extern void fn_80070C98(void);
extern void fn_80076760(void);
extern void fn_800902C0(void);
extern void fn_80091684(void);
extern void fn_80091A90(void);
extern void fn_8009B93C(void);
extern void fn_8009E1E4(void);
extern void fn_804761CC(void);
extern void fn_804761E8(void);
extern void fn_805F89F0(void);
extern void fn_805F93C0(void);
extern void fn_805F9420(void);
extern void fn_805F9940(void);

/* External data declarations */

/* Small data declarations */
extern u32 lbl_8087D798;
extern u32 lbl_8087D79C;
extern u32 lbl_8087D7A0;
extern u32 lbl_8087D7A4;
extern u32 lbl_8087EEE0;
extern u32 lbl_8087EF20;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087EFB4;
extern u32 lbl_80880BF8;
extern u32 lbl_80880C00;
extern u32 lbl_80880C08;
extern u32 lbl_80880C10;
extern u32 lbl_80880C14;
extern u32 lbl_80880C18;
extern u32 lbl_80880C1C;
extern u32 lbl_80880C20;

/* Function declarations */
void fn_8008E2D4(void);
void fn_8008E2DC(void);
void fn_8008E2E0(void);
void fn_8008E304(void);
void fn_8008E818(void);
void fn_8008EECC(void);
void fn_8008EED4(void);
void fn_8008EEDC(void);
void fn_8008F5F8(void);
void fn_8008FA24(void);

asm void fn_8008E2D4(void)
{
    nofralloc
    lwz r3, 0x2f8(r3)
    blr
}

asm void fn_8008E2DC(void)
{
    nofralloc
    blr
}

asm void fn_8008E2E0(void)
{
    nofralloc
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0xc(r4), 0, 0
    stfs f2, 0x8(r3)
    lfs f2, 0x14(r4)
    psq_st f1, 0xc(r3), 0, 0
    stfs f2, 0x14(r3)
    blr
}

asm void fn_8008E304(void)
{
    nofralloc
    stwu r1, -0x220(r1)
    mflr r0
    stw r0, 0x224(r1)
    addi r11, r1, 0x140
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
    bl _savegpr_27
    lwz r5, 0x20c(r3)
    mr r29, r3
    mr r30, r4
    srawi r0, r5, 24
    cmpwi r0, 0x8
    bne lbl_fn_8008E304_000004BC
    extlwi r0, r5, 2, 25
    srawi. r0, r0, 31
    beq lbl_fn_8008E304_000004BC
    lwz r31, 0x50(r3)
    addi r5, r1, 0xf8
    psq_l f1, 0x8(r3), 0, 0
    addi r27, r1, 0x8
    psq_l f2, 0x10(r3), 0, 0
    psq_l f3, 0x18(r3), 0, 0
    psq_l f4, 0x20(r3), 0, 0
    psq_l f5, 0x28(r3), 0, 0
    psq_l f6, 0x30(r3), 0, 0
    psq_st f6, 0x28(r5), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    psq_st f2, 0x8(r5), 0, 0
    psq_st f3, 0x10(r5), 0, 0
    psq_st f4, 0x18(r5), 0, 0
    psq_st f5, 0x20(r5), 0, 0
    lwz r8, 0xb0(r3)
    cmpwi r8, 0x0
    blt lbl_fn_8008E304_000002D8
    lwz r0, 0xb4(r3)
    cmpwi r0, 0x0
    blt lbl_fn_8008E304_0000029C
    mulli r0, r0, 0x30
    lwz r7, 0x3c(r3)
    lfs f27, lbl_80880C08
    addi r4, r1, 0xc8
    add r6, r7, r0
    mulli r0, r8, 0x30
    lfs f0, 0x2c(r6)
    lfs f7, 0x28(r6)
    lfs f8, 0x24(r6)
    add r7, r7, r0
    lfs f9, 0x20(r6)
    lfs f11, 0x2c(r7)
    lfs f10, 0x28(r7)
    fadds f0, f11, f0
    lfs f11, 0x24(r7)
    fadds f7, f10, f7
    lfs f10, 0x20(r7)
    fadds f8, f11, f8
    lfs f11, 0x1c(r7)
    fadds f9, f10, f9
    lfs f10, 0x1c(r6)
    lfs f12, 0x18(r7)
    fmuls f31, f0, f27
    fadds f10, f11, f10
    lfs f11, 0x18(r6)
    fadds f11, f12, f11
    lfs f13, 0x14(r7)
    lfs f12, 0x14(r6)
    fmuls f30, f7, f27
    lfs f24, 0x10(r7)
    fmuls f29, f8, f27
    fadds f12, f13, f12
    lfs f13, 0x10(r6)
    lfs f25, 0xc(r7)
    fmuls f20, f11, f27
    fadds f13, f24, f13
    lfs f24, 0xc(r6)
    fadds f23, f25, f24
    lfs f26, 0x8(r7)
    lfs f25, 0x8(r6)
    fmuls f19, f12, f27
    lfs f24, 0x4(r7)
    fmuls f28, f9, f27
    fadds f22, f26, f25
    lfs f26, 0x4(r6)
    stfs f19, 0xdc(r1)
    fmuls f19, f13, f27
    fadds f24, f24, f26
    lfs f25, 0x0(r7)
    lfs f26, 0x0(r6)
    fmuls f21, f10, f27
    stfs f20, 0xe0(r1)
    fmuls f20, f22, f27
    fadds f25, f25, f26
    stfs f19, 0xd8(r1)
    fmuls f26, f23, f27
    fmuls f18, f24, f27
    fmuls f19, f25, f27
    stfs f21, 0xe4(r1)
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    stfs f19, 0xc8(r1)
    stfs f18, 0xcc(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f20, 0xd0(r1)
    stfs f26, 0xd4(r1)
    psq_l f2, 0x8(r4), 0, 0
    stfs f28, 0xe8(r1)
    stfs f29, 0xec(r1)
    psq_l f5, 0x20(r4), 0, 0
    stfs f30, 0xf0(r1)
    stfs f31, 0xf4(r1)
    psq_l f6, 0x28(r4), 0, 0
    stfs f25, 0x98(r1)
    stfs f24, 0x9c(r1)
    stfs f22, 0xa0(r1)
    stfs f23, 0xa4(r1)
    stfs f13, 0xa8(r1)
    stfs f12, 0xac(r1)
    stfs f11, 0xb0(r1)
    stfs f10, 0xb4(r1)
    stfs f9, 0xb8(r1)
    stfs f8, 0xbc(r1)
    stfs f7, 0xc0(r1)
    stfs f0, 0xc4(r1)
    psq_st f1, 0x0(r5), 0, 0
    psq_st f2, 0x8(r5), 0, 0
    psq_st f3, 0x10(r5), 0, 0
    psq_st f4, 0x18(r5), 0, 0
    psq_st f5, 0x20(r5), 0, 0
    psq_st f6, 0x28(r5), 0, 0
    b lbl_fn_8008E304_000002D8
lbl_fn_8008E304_0000029C:
    mulli r0, r8, 0x30
    lwz r4, 0x3c(r3)
    add r4, r4, r0
    psq_l f1, 0x0(r4), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_st f6, 0x28(r5), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    psq_st f2, 0x8(r5), 0, 0
    psq_st f3, 0x10(r5), 0, 0
    psq_st f4, 0x18(r5), 0, 0
    psq_st f5, 0x20(r5), 0, 0
lbl_fn_8008E304_000002D8:
    lfs f7, 0x54(r3)
    addi r28, r1, 0x18
    lfs f0, 0xac(r3)
    mr r4, r28
    psq_l f1, 0x9c(r29), 0, 0
    mr r5, r28
    lfs f2, 0xa4(r29)
    fmuls f24, f7, f0
    stfs f2, 0x20(r1)
    addi r3, r1, 0xf8
    psq_st f1, 0x0(r28), 0, 0
    bl fn_805F93C0
    lfs f0, 0xa8(r29)
    lwz r0, 0x2f8(r30)
    fmuls f0, f0, f24
    psq_l f1, 0x0(r28), 0, 0
    lfs f2, 0x20(r1)
    cmpwi r0, 0x3
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0x10(r1)
    stfs f0, 0x14(r1)
    beq lbl_fn_8008E304_00000338
    cmpwi r0, 0x4
    bne lbl_fn_8008E304_00000368
lbl_fn_8008E304_00000338:
    lwz r3, lbl_8087EFA8
    lwz r0, 0x20c(r29)
    lwz r4, 0x178(r3)
    extlwi r0, r0, 9, 8
    lwz r3, 0x50(r29)
    srawi r5, r0, 24
    add r0, r3, r4
    stw r0, 0x50(r29)
    cmpw r0, r5
    blt lbl_fn_8008E304_00000368
    subi r0, r5, 0x1
    stw r0, 0x50(r29)
lbl_fn_8008E304_00000368:
    psq_l f1, 0x15c(r30), 0, 0
    addi r3, r1, 0x38
    psq_l f2, 0x164(r30), 0, 0
    psq_l f3, 0x16c(r30), 0, 0
    psq_l f4, 0x174(r30), 0, 0
    psq_l f5, 0x17c(r30), 0, 0
    psq_l f6, 0x184(r30), 0, 0
    psq_st f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f4, 0x18(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    lwz r0, 0x4(r29)
    rlwinm r0, r0, 0, 21, 21
    cmplwi r0, 0x400
    bne lbl_fn_8008E304_00000414
    lwz r0, 0x2f8(r30)
    cmpwi r0, 0x4
    bne lbl_fn_8008E304_00000414
    lwz r3, 0x1dc(r29)
    cmpwi r3, 0x0
    bne lbl_fn_8008E304_000003CC
    lwz r3, lbl_8087EFB4
    lwz r3, 0x2fc(r3)
lbl_fn_8008E304_000003CC:
    addi r4, r3, 0x124
    addi r3, r1, 0x38
    addi r5, r1, 0x68
    bl fn_805F89F0
    addi r3, r1, 0x68
    addi r4, r1, 0x38
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    psq_st f2, 0x8(r4), 0, 0
    psq_st f3, 0x10(r4), 0, 0
    psq_st f4, 0x18(r4), 0, 0
    psq_st f5, 0x20(r4), 0, 0
    psq_st f6, 0x28(r4), 0, 0
lbl_fn_8008E304_00000414:
    lwz r0, 0x2f8(r30)
    cmpwi r0, 0xa
    beq lbl_fn_8008E304_0000042C
    mr r3, r29
    addi r4, r1, 0x38
    bl fn_80091A90
lbl_fn_8008E304_0000042C:
    mr r3, r29
    mr r4, r30
    bl fn_8008E818
    lwz r3, 0x50(r29)
    lwz r0, 0x2f8(r30)
    mulli r3, r3, 0x18
    cmpwi r0, 0xa
    add r3, r29, r3
    lwz r27, 0x178(r3)
    bne lbl_fn_8008E304_000004B8
    li r0, 0x0
    stw r0, 0x24(r1)
    mr r3, r29
    addi r5, r1, 0x24
    li r4, 0x0
    bl fn_800902C0
    addic. r3, r1, 0x24
    beq lbl_fn_8008E304_000004A8
    lwz r4, 0x24(r1)
    cmpwi r4, 0x0
    beq lbl_fn_8008E304_000004A8
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_8008E304_000004A0
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8008E304_000004A0:
    li r0, 0x0
    stw r0, 0x24(r1)
lbl_fn_8008E304_000004A8:
    mr r3, r29
    mr r5, r27
    addi r4, r30, 0x15c
    bl fn_80091684
lbl_fn_8008E304_000004B8:
    stw r31, 0x50(r29)
lbl_fn_8008E304_000004BC:
    addi r11, r1, 0x140
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
    bl _restgpr_27
    lwz r0, 0x224(r1)
    mtlr r0
    addi r1, r1, 0x220
    blr
}

asm void fn_8008E818(void)
{
    nofralloc
    stwu r1, -0x2c0(r1)
    mflr r0
    stw r0, 0x2c4(r1)
    addi r11, r1, 0x1d0
    stfd f31, 0x2b0(r1)
    psq_st f31, 0x2b8(r1), 0, 0
    stfd f30, 0x2a0(r1)
    psq_st f30, 0x2a8(r1), 0, 0
    stfd f29, 0x290(r1)
    psq_st f29, 0x298(r1), 0, 0
    stfd f28, 0x280(r1)
    psq_st f28, 0x288(r1), 0, 0
    stfd f27, 0x270(r1)
    psq_st f27, 0x278(r1), 0, 0
    stfd f26, 0x260(r1)
    psq_st f26, 0x268(r1), 0, 0
    stfd f25, 0x250(r1)
    psq_st f25, 0x258(r1), 0, 0
    stfd f24, 0x240(r1)
    psq_st f24, 0x248(r1), 0, 0
    stfd f23, 0x230(r1)
    psq_st f23, 0x238(r1), 0, 0
    stfd f22, 0x220(r1)
    psq_st f22, 0x228(r1), 0, 0
    stfd f21, 0x210(r1)
    psq_st f21, 0x218(r1), 0, 0
    stfd f20, 0x200(r1)
    psq_st f20, 0x208(r1), 0, 0
    stfd f19, 0x1f0(r1)
    psq_st f19, 0x1f8(r1), 0, 0
    stfd f18, 0x1e0(r1)
    psq_st f18, 0x1e8(r1), 0, 0
    stfd f17, 0x1d0(r1)
    psq_st f17, 0x1d8(r1), 0, 0
    bl _savegpr_24
    lwz r6, 0x50(r3)
    addi r30, r3, 0x8
    lwz r5, 0x20c(r3)
    mr r26, r3
    mulli r6, r6, 0x18
    extlwi r0, r5, 2, 26
    add r6, r3, r6
    srawi. r0, r0, 31
    addi r29, r6, 0x164
    beq lbl_fn_8008E818_00000618
    extlwi r0, r5, 2, 27
    srawi. r0, r0, 31
    beq lbl_fn_8008E818_00000618
    lwz r5, lbl_8087EFB4
    lwz r0, 0x2f8(r5)
    cmpwi r0, 0x3
    bne lbl_fn_8008E818_00000618
    addi r29, r3, 0x1c4
lbl_fn_8008E818_00000618:
    lwz r0, 0x2f8(r4)
    lwz r31, 0x14(r29)
    cmpwi r0, 0xa
    bne lbl_fn_8008E818_00000720
    lfs f9, lbl_8087D798
    lfs f8, lbl_8087D79C
    lfs f7, lbl_8087EF20
    lfs f0, lbl_80880C00
    fmadds f8, f9, f8, f7
    fcmpo cr0, f8, f0
    bgt lbl_fn_8008E818_00000650
    lfs f0, lbl_80880BF8
    fcmpo cr0, f8, f0
    bge lbl_fn_8008E818_00000660
lbl_fn_8008E818_00000650:
    lfs f7, lbl_8087D79C
    lfs f0, lbl_80880C10
    fmuls f0, f7, f0
    stfs f0, lbl_8087D79C
lbl_fn_8008E818_00000660:
    lfs f11, lbl_8087D7A0
    fcmpo cr0, f8, f11
    bge lbl_fn_8008E818_00000670
    b lbl_fn_8008E818_00000684
lbl_fn_8008E818_00000670:
    lfs f11, lbl_8087D7A4
    fcmpo cr0, f8, f11
    ble lbl_fn_8008E818_00000680
    b lbl_fn_8008E818_00000684
lbl_fn_8008E818_00000680:
    fmr f11, f8
lbl_fn_8008E818_00000684:
    lfs f10, lbl_80880C14
    lfs f0, 0x14c(r3)
    lfs f8, 0x150(r3)
    fmuls f9, f10, f0
    lfs f7, 0x154(r3)
    lfs f0, 0x158(r3)
    fmuls f8, f10, f8
    fmuls f7, f10, f7
    lwz r5, 0x15c(r3)
    fmuls f0, f10, f0
    lwz r8, 0x4(r5)
    fctiwz f9, f9
    stfs f11, lbl_8087EF20
    fctiwz f8, f8
    fctiwz f7, f7
    fctiwz f0, f0
    stfd f9, 0x188(r1)
    stfd f8, 0x190(r1)
    lwz r7, 0x18c(r1)
    stfd f7, 0x198(r1)
    lwz r6, 0x194(r1)
    stfd f0, 0x1a0(r1)
    lwz r5, 0x19c(r1)
    lwz r0, 0x1a4(r1)
    stb r7, 0x20(r1)
    lwz r7, 0x0(r8)
    stb r6, 0x21(r1)
    stb r5, 0x22(r1)
    stb r0, 0x23(r1)
    lwz r0, 0x20(r1)
    stw r0, 0x24(r1)
    lbz r0, 0x24(r1)
    stb r0, 0x18(r7)
    lbz r0, 0x25(r1)
    stb r0, 0x19(r7)
    lbz r0, 0x26(r1)
    stb r0, 0x1a(r7)
    lbz r0, 0x27(r1)
    stb r0, 0x1b(r7)
lbl_fn_8008E818_00000720:
    lwz r0, 0x48(r30)
    addi r28, r3, 0x104
    lwz r6, 0x138(r3)
    slwi r0, r0, 3
    add r5, r3, r0
    cmpwi r6, 0x0
    addi r27, r5, 0x10c
    beq lbl_fn_8008E818_0000074C
    add r5, r6, r0
    mr r28, r6
    addi r27, r5, 0x8
lbl_fn_8008E818_0000074C:
    lwz r4, 0x2f8(r4)
    cmpwi r4, 0x5
    bne lbl_fn_8008E818_00000768
    lwz r28, 0x160(r3)
    add r4, r28, r0
    addi r27, r4, 0x8
    b lbl_fn_8008E818_0000077C
lbl_fn_8008E818_00000768:
    cmpwi r4, 0xa
    bne lbl_fn_8008E818_0000077C
    lwz r28, 0x15c(r3)
    add r4, r28, r0
    addi r27, r4, 0x8
lbl_fn_8008E818_0000077C:
    psq_l f1, 0x8(r3), 0, 0
    addi r5, r1, 0x58
    psq_l f2, 0x10(r3), 0, 0
    addi r25, r1, 0x48
    psq_l f3, 0x18(r3), 0, 0
    psq_l f4, 0x20(r3), 0, 0
    psq_l f5, 0x28(r3), 0, 0
    psq_l f6, 0x30(r3), 0, 0
    psq_st f6, 0x28(r5), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    psq_st f2, 0x8(r5), 0, 0
    psq_st f3, 0x10(r5), 0, 0
    psq_st f4, 0x18(r5), 0, 0
    psq_st f5, 0x20(r5), 0, 0
    lwz r8, 0xb0(r3)
    cmpwi r8, 0x0
    blt lbl_fn_8008E818_00000978
    lwz r0, 0xb4(r3)
    cmpwi r0, 0x0
    blt lbl_fn_8008E818_0000093C
    mulli r0, r0, 0x30
    lwz r7, 0x3c(r3)
    lfs f21, lbl_80880C08
    addi r4, r1, 0x88
    add r6, r7, r0
    mulli r0, r8, 0x30
    lfs f9, 0x2c(r6)
    lfs f7, 0x28(r6)
    lfs f8, 0x24(r6)
    add r7, r7, r0
    lfs f0, 0x20(r6)
    lfs f11, 0x2c(r7)
    lfs f10, 0x28(r7)
    fadds f22, f11, f9
    lfs f9, 0x24(r7)
    fadds f23, f10, f7
    lfs f7, 0x20(r7)
    fadds f24, f9, f8
    lfs f8, 0x1c(r7)
    fadds f25, f7, f0
    lfs f0, 0x1c(r6)
    lfs f7, 0x18(r7)
    fmuls f11, f22, f21
    fadds f26, f8, f0
    lfs f0, 0x18(r6)
    fadds f27, f7, f0
    lfs f7, 0x14(r7)
    lfs f0, 0x14(r6)
    fmuls f10, f23, f21
    lfs f12, 0x10(r7)
    fmuls f9, f24, f21
    fadds f28, f7, f0
    lfs f0, 0x10(r6)
    lfs f20, 0x8(r7)
    fmuls f8, f25, f21
    fadds f29, f12, f0
    lfs f12, 0x8(r6)
    fadds f31, f20, f12
    lfs f13, 0x4(r7)
    lfs f12, 0x4(r6)
    fmuls f17, f28, f21
    lfs f7, 0xc(r7)
    fadds f13, f13, f12
    lfs f0, 0xc(r6)
    fmuls f19, f31, f21
    stfs f17, 0x9c(r1)
    fmuls f17, f29, f21
    fadds f30, f7, f0
    fmuls f0, f27, f21
    stfs f17, 0x98(r1)
    fmuls f7, f26, f21
    lfs f20, 0x0(r7)
    lfs f12, 0x0(r6)
    fmuls f18, f30, f21
    fadds f12, f20, f12
    stfs f0, 0xa0(r1)
    fmuls f20, f13, f21
    psq_l f3, 0x10(r4), 0, 0
    stfs f7, 0xa4(r1)
    fmuls f0, f12, f21
    psq_l f4, 0x18(r4), 0, 0
    stfs f0, 0x88(r1)
    stfs f20, 0x8c(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f19, 0x90(r1)
    stfs f18, 0x94(r1)
    psq_l f2, 0x8(r4), 0, 0
    stfs f8, 0xa8(r1)
    stfs f9, 0xac(r1)
    psq_l f5, 0x20(r4), 0, 0
    stfs f10, 0xb0(r1)
    stfs f11, 0xb4(r1)
    psq_l f6, 0x28(r4), 0, 0
    stfs f12, 0xb8(r1)
    stfs f13, 0xbc(r1)
    stfs f31, 0xc0(r1)
    stfs f30, 0xc4(r1)
    stfs f29, 0xc8(r1)
    stfs f28, 0xcc(r1)
    stfs f27, 0xd0(r1)
    stfs f26, 0xd4(r1)
    stfs f25, 0xd8(r1)
    stfs f24, 0xdc(r1)
    stfs f23, 0xe0(r1)
    stfs f22, 0xe4(r1)
    psq_st f1, 0x0(r5), 0, 0
    psq_st f2, 0x8(r5), 0, 0
    psq_st f3, 0x10(r5), 0, 0
    psq_st f4, 0x18(r5), 0, 0
    psq_st f5, 0x20(r5), 0, 0
    psq_st f6, 0x28(r5), 0, 0
    b lbl_fn_8008E818_00000978
lbl_fn_8008E818_0000093C:
    mulli r0, r8, 0x30
    lwz r4, 0x3c(r3)
    add r4, r4, r0
    psq_l f1, 0x0(r4), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_st f6, 0x28(r5), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    psq_st f2, 0x8(r5), 0, 0
    psq_st f3, 0x10(r5), 0, 0
    psq_st f4, 0x18(r5), 0, 0
    psq_st f5, 0x20(r5), 0, 0
lbl_fn_8008E818_00000978:
    lfs f7, 0x54(r3)
    addi r24, r1, 0x28
    lfs f0, 0xac(r3)
    mr r4, r24
    psq_l f1, 0x9c(r26), 0, 0
    mr r5, r24
    lfs f2, 0xa4(r26)
    fmuls f17, f7, f0
    stfs f2, 0x30(r1)
    addi r3, r1, 0x58
    psq_st f1, 0x0(r24), 0, 0
    bl fn_805F93C0
    psq_l f1, 0x0(r24), 0, 0
    addi r6, r1, 0x38
    lfs f2, 0x30(r1)
    psq_st f1, 0x0(r25), 0, 0
    stfs f2, 0x50(r1)
    lfs f0, 0xa8(r26)
    fmuls f0, f0, f17
    stfs f0, 0x54(r1)
    lwz r3, 0x1f0(r26)
    lwz r0, 0x1f4(r26)
    stw r0, 0x3c(r1)
    stw r3, 0x38(r1)
    lwz r3, 0x1f8(r26)
    lwz r0, 0x1fc(r26)
    stw r0, 0x44(r1)
    stw r3, 0x40(r1)
    lwz r3, 0x1dc(r26)
    lwz r7, 0x208(r26)
    cmpwi r3, 0x0
    stw r25, 0x8(r1)
    stw r31, 0xc(r1)
    lwz r0, 0x4(r26)
    stw r0, 0x10(r1)
    bne lbl_fn_8008E818_00000A10
    lwz r3, lbl_8087EFB4
    lwz r3, 0x2fc(r3)
lbl_fn_8008E818_00000A10:
    stw r3, 0x14(r1)
    mr r4, r29
    mr r5, r30
    mr r9, r28
    stw r7, 0x18(r1)
    mr r10, r27
    addi r3, r1, 0xe8
    addi r8, r30, 0x38
    stw r6, 0x1c(r1)
    lwz r6, 0x58(r26)
    lwz r7, 0x34(r30)
    bl fn_8009E1E4
    lwz r5, 0x20c(r26)
    lwz r3, 0xf0(r26)
    extlwi r4, r5, 2, 24
    extlwi r0, r5, 2, 26
    srawi r4, r4, 31
    stw r3, 0x12c(r1)
    srawi. r0, r0, 31
    stw r4, 0x130(r1)
    beq lbl_fn_8008E818_00000A8C
    extlwi r0, r5, 2, 27
    srawi. r0, r0, 31
    beq lbl_fn_8008E818_00000A8C
    lwz r3, lbl_8087EFB4
    lwz r0, 0x2f8(r3)
    cmpwi r0, 0x3
    bne lbl_fn_8008E818_00000A8C
    li r0, 0x0
    stw r0, 0x134(r1)
    b lbl_fn_8008E818_00000A94
lbl_fn_8008E818_00000A8C:
    lwz r0, 0xf8(r26)
    stw r0, 0x134(r1)
lbl_fn_8008E818_00000A94:
    mr r3, r29
    bl fn_804761E8
    mr r27, r3
    mr r3, r29
    bl fn_804761CC
    addi r0, r26, 0x1c4
    stw r3, 0x138(r1)
    cmplw r29, r0
    stw r27, 0x13c(r1)
    bne lbl_fn_8008E818_00000AC4
    li r0, 0x1
    stw r0, 0x140(r1)
lbl_fn_8008E818_00000AC4:
    lwz r0, 0x1e0(r26)
    stw r0, 0x144(r1)
    lwz r3, lbl_8087EFB4
    lwz r0, 0x2f8(r3)
    cmpwi r0, 0x8
    bne lbl_fn_8008E818_00000AE8
    li r0, 0x2
    stw r0, 0xe8(r1)
    b lbl_fn_8008E818_00000B60
lbl_fn_8008E818_00000AE8:
    cmpwi r0, 0xa
    bne lbl_fn_8008E818_00000AFC
    li r0, 0x1
    stw r0, 0xe8(r1)
    b lbl_fn_8008E818_00000B60
lbl_fn_8008E818_00000AFC:
    cmpwi r0, 0x6
    bne lbl_fn_8008E818_00000B10
    li r0, 0x1
    stw r0, 0xe8(r1)
    b lbl_fn_8008E818_00000B60
lbl_fn_8008E818_00000B10:
    cmpwi r0, 0x9
    bne lbl_fn_8008E818_00000B24
    li r0, 0x4
    stw r0, 0xe8(r1)
    b lbl_fn_8008E818_00000B60
lbl_fn_8008E818_00000B24:
    cmpwi r0, 0x0
    bne lbl_fn_8008E818_00000B60
    lwz r0, 0x4(r26)
    rlwinm r0, r0, 0, 24, 24
    cmplwi r0, 0x80
    bne lbl_fn_8008E818_00000B50
    lwz r3, lbl_8087EEE0
    li r4, 0x6
    li r5, 0x2
    bl fn_80076760
    b lbl_fn_8008E818_00000B60
lbl_fn_8008E818_00000B50:
    lwz r3, lbl_8087EEE0
    li r4, 0x6
    li r5, 0x1
    bl fn_80076760
lbl_fn_8008E818_00000B60:
    addi r3, r1, 0xe8
    bl fn_8009B93C
    addi r11, r1, 0x1d0
    psq_l f31, 0x2b8(r1), 0, 0
    lfd f31, 0x2b0(r1)
    psq_l f30, 0x2a8(r1), 0, 0
    lfd f30, 0x2a0(r1)
    psq_l f29, 0x298(r1), 0, 0
    lfd f29, 0x290(r1)
    psq_l f28, 0x288(r1), 0, 0
    lfd f28, 0x280(r1)
    psq_l f27, 0x278(r1), 0, 0
    lfd f27, 0x270(r1)
    psq_l f26, 0x268(r1), 0, 0
    lfd f26, 0x260(r1)
    psq_l f25, 0x258(r1), 0, 0
    lfd f25, 0x250(r1)
    psq_l f24, 0x248(r1), 0, 0
    lfd f24, 0x240(r1)
    psq_l f23, 0x238(r1), 0, 0
    lfd f23, 0x230(r1)
    psq_l f22, 0x228(r1), 0, 0
    lfd f22, 0x220(r1)
    psq_l f21, 0x218(r1), 0, 0
    lfd f21, 0x210(r1)
    psq_l f20, 0x208(r1), 0, 0
    lfd f20, 0x200(r1)
    psq_l f19, 0x1f8(r1), 0, 0
    lfd f19, 0x1f0(r1)
    psq_l f18, 0x1e8(r1), 0, 0
    lfd f18, 0x1e0(r1)
    psq_l f17, 0x1d8(r1), 0, 0
    lfd f17, 0x1d0(r1)
    bl _restgpr_24
    lwz r0, 0x2c4(r1)
    mtlr r0
    addi r1, r1, 0x2c0
    blr
}

asm void fn_8008EECC(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    blr
}

asm void fn_8008EED4(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    blr
}

asm void fn_8008EEDC(void)
{
    nofralloc
    stwu r1, -0x260(r1)
    mflr r0
    stw r0, 0x264(r1)
    addi r11, r1, 0x210
    stfd f31, 0x250(r1)
    psq_st f31, 0x258(r1), 0, 0
    stfd f30, 0x240(r1)
    psq_st f30, 0x248(r1), 0, 0
    stfd f29, 0x230(r1)
    psq_st f29, 0x238(r1), 0, 0
    stfd f28, 0x220(r1)
    psq_st f28, 0x228(r1), 0, 0
    stfd f27, 0x210(r1)
    psq_st f27, 0x218(r1), 0, 0
    bl _savegpr_14
    lwz r0, 0x50(r3)
    mr r15, r3
    lfs f31, lbl_80880C08
    mr r16, r4
    mulli r0, r0, 0x18
    mr r17, r5
    mr r18, r6
    mr r19, r7
    add r31, r3, r0
    addi r30, r1, 0xf0
    addi r29, r1, 0x148
    addi r28, r1, 0x118
    addi r21, r1, 0x160
    addi r22, r1, 0x16c
    addi r23, r1, 0x178
    addi r24, r1, 0x184
    addi r25, r1, 0x190
    addi r14, r1, 0x19c
    addi r26, r1, 0x8
    addi r27, r1, 0x14
    addi r20, r1, 0x100
    b lbl_fn_8008EEDC_000012DC
lbl_fn_8008EEDC_00000C9C:
    lwz r4, 0x2c(r16)
    lwz r0, 0x70(r16)
    neg r3, r4
    cmpwi r0, 0x0
    or r3, r3, r4
    srwi r0, r3, 31
    bne lbl_fn_8008EEDC_00000CBC
    li r0, 0x0
lbl_fn_8008EEDC_00000CBC:
    cmpwi r0, 0x0
    beq lbl_fn_8008EEDC_00001288
    lfs f2, 0x60(r16)
    addi r4, r1, 0xc8
    stfs f2, 0xd0(r1)
    addi r3, r1, 0xb0
    psq_l f1, 0x58(r16), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    addi r4, r1, 0xbc
    psq_l f1, 0x64(r16), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    addi r4, r1, 0xe0
    lfs f2, 0x6c(r16)
    lfs f10, 0xd0(r1)
    lfs f12, 0xcc(r1)
    fadds f30, f10, f2
    lfs f10, 0xc0(r1)
    lfs f11, 0xc8(r1)
    fadds f29, f12, f10
    lfs f10, 0xbc(r1)
    fmuls f28, f30, f31
    fadds f10, f11, f10
    stfs f2, 0xc4(r1)
    fmuls f11, f29, f31
    stfs f10, 0xd4(r1)
    fmr f2, f28
    fmuls f10, f10, f31
    stfs f11, 0xe4(r1)
    stfs f10, 0xe0(r1)
    psq_l f1, 0x0(r4), 0, 0
    addi r4, r1, 0xa4
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0xf8(r1)
    lfs f2, 0x60(r16)
    stfs f2, 0xac(r1)
    psq_l f1, 0x58(r16), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    addi r4, r1, 0x98
    psq_l f1, 0x64(r16), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lfs f2, 0x6c(r16)
    lfs f10, 0xac(r1)
    lfs f13, 0xa8(r1)
    fsubs f27, f10, f2
    lfs f12, 0x9c(r1)
    lfs f11, 0xa4(r1)
    lfs f10, 0x98(r1)
    fsubs f12, f13, f12
    stfs f29, 0xd8(r1)
    fsubs f10, f11, f10
    stfs f30, 0xdc(r1)
    stfs f28, 0xe8(r1)
    stfs f2, 0xa0(r1)
    stfs f10, 0xb0(r1)
    stfs f12, 0xb4(r1)
    stfs f27, 0xb8(r1)
    bl fn_805F9940
    fmuls f11, f31, f1
    mr r4, r30
    mr r5, r30
    stfs f11, 0xfc(r1)
    lfs f10, 0xac(r15)
    fmuls f10, f11, f10
    stfs f10, 0xfc(r1)
    lwz r0, 0x18(r16)
    lwz r3, 0x3c(r15)
    mulli r0, r0, 0x30
    add r3, r3, r0
    bl fn_805F93C0
    mr r3, r18
    mr r4, r30
    bl fn_8004FF58
    cmpwi r3, 0x0
    beq lbl_fn_8008EEDC_00001288
    lfs f2, 0x60(r16)
    addi r5, r1, 0x8c
    psq_l f1, 0x58(r16), 0, 0
    mr r4, r29
    psq_st f1, 0x0(r29), 0, 0
    addi r3, r1, 0x130
    psq_st f1, 0x0(r5), 0, 0
    addi r5, r1, 0x154
    stfs f2, 0x150(r1)
    stfs f2, 0x94(r1)
    lfs f2, 0x6c(r16)
    psq_l f1, 0x64(r16), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    addi r5, r1, 0x80
    stfs f2, 0x15c(r1)
    psq_st f1, 0x0(r5), 0, 0
    lfs f1, 0xac(r15)
    stfs f2, 0x88(r1)
    bl fn_80070B60
    addi r3, r1, 0x130
    lfs f2, 0x138(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r7, r1, 0x20
    psq_st f1, 0x0(r29), 0, 0
    mr r4, r21
    psq_l f1, 0xc(r3), 0, 0
    mr r5, r21
    psq_st f1, 0xc(r29), 0, 0
    li r6, 0x8
    lfs f12, 0x148(r1)
    lfs f28, 0x158(r1)
    lfs f27, 0x154(r1)
    lfs f11, 0x14c(r1)
    stfs f2, 0x150(r1)
    lfs f2, 0x144(r1)
    stfs f2, 0x15c(r1)
    frsp f13, f2
    lfs f10, 0x150(r1)
    lwz r0, 0x18(r16)
    lwz r3, 0x3c(r15)
    mulli r0, r0, 0x30
    stfs f27, 0x20(r1)
    stfs f28, 0x24(r1)
    add r3, r3, r0
    psq_l f1, 0x0(r7), 0, 0
    addi r7, r1, 0x2c
    stfs f12, 0x2c(r1)
    stfs f28, 0x30(r1)
    psq_st f1, 0x0(r21), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    addi r7, r1, 0x38
    stfs f27, 0x38(r1)
    stfs f11, 0x3c(r1)
    psq_st f1, 0x0(r22), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    addi r7, r1, 0x44
    stfs f12, 0x44(r1)
    stfs f11, 0x48(r1)
    psq_st f1, 0x0(r23), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    addi r7, r1, 0x50
    stfs f27, 0x50(r1)
    stfs f28, 0x54(r1)
    psq_st f1, 0x0(r24), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    addi r7, r1, 0x5c
    stfs f12, 0x5c(r1)
    stfs f28, 0x60(r1)
    psq_st f1, 0x0(r25), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    addi r7, r1, 0x68
    stfs f27, 0x68(r1)
    stfs f11, 0x6c(r1)
    psq_st f1, 0x0(r14), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    addi r7, r1, 0x1a8
    psq_st f1, 0x0(r7), 0, 0
    addi r7, r1, 0x74
    stfs f2, 0x28(r1)
    stfs f2, 0x168(r1)
    fmr f2, f13
    stfs f12, 0x74(r1)
    stfs f11, 0x78(r1)
    psq_l f1, 0x0(r7), 0, 0
    addi r7, r1, 0x1b4
    stfs f2, 0x174(r1)
    stfs f2, 0x180(r1)
    stfs f2, 0x18c(r1)
    fmr f2, f10
    stfs f13, 0x34(r1)
    stfs f13, 0x40(r1)
    stfs f13, 0x4c(r1)
    stfs f10, 0x58(r1)
    stfs f2, 0x198(r1)
    stfs f10, 0x64(r1)
    stfs f2, 0x1a4(r1)
    stfs f10, 0x70(r1)
    stfs f2, 0x1b0(r1)
    stfs f10, 0x7c(r1)
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0x1bc(r1)
    bl fn_805F9420
    psq_l f1, 0x0(r21), 0, 0
    mr r5, r22
    lfs f2, 0x168(r1)
    mr r3, r26
    psq_st f1, 0x0(r26), 0, 0
    mr r4, r27
    psq_lu f0, 0x0(r5), 0, 0
    mr r6, r26
    stfs f2, 0x10(r1)
    mr r7, r27
    psq_lu f4, 0x0(r3), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    ps_sub f8, f0, f4
    lfs f1, 0x8(r5)
    stfs f2, 0x1c(r1)
    lfs f5, 0x8(r3)
    psq_lu f2, 0x0(r4), 0, 0
    ps_sel f8, f8, f0, f4
    fsub f9, f1, f5
    ps_sub f6, f0, f2
    lfs f3, 0x8(r4)
    fsub f7, f1, f3
    ps_sel f6, f6, f2, f0
    fsel f9, f9, f1, f5
    fsel f7, f7, f3, f1
    psq_stu f6, 0x0(r7), 0, 0
    stfs f7, 0x8(r7)
    psq_stu f8, 0x0(r6), 0, 0
    mr r3, r26
    mr r4, r27
    mr r5, r23
    stfs f9, 0x8(r6)
    mr r6, r26
    psq_lu f2, 0x0(r4), 0, 0
    mr r7, r27
    psq_lu f0, 0x0(r5), 0, 0
    psq_lu f4, 0x0(r3), 0, 0
    ps_sub f6, f0, f2
    lfs f1, 0x8(r5)
    lfs f3, 0x8(r4)
    ps_sub f8, f0, f4
    lfs f5, 0x8(r3)
    fsub f7, f1, f3
    fsub f9, f1, f5
    ps_sel f6, f6, f2, f0
    fsel f7, f7, f3, f1
    ps_sel f8, f8, f0, f4
    fsel f9, f9, f1, f5
    psq_stu f6, 0x0(r7), 0, 0
    stfs f7, 0x8(r7)
    psq_stu f8, 0x0(r6), 0, 0
    mr r3, r26
    mr r4, r27
    mr r5, r24
    stfs f9, 0x8(r6)
    mr r6, r26
    psq_lu f2, 0x0(r4), 0, 0
    mr r7, r27
    psq_lu f0, 0x0(r5), 0, 0
    psq_lu f4, 0x0(r3), 0, 0
    ps_sub f6, f0, f2
    lfs f1, 0x8(r5)
    lfs f3, 0x8(r4)
    ps_sub f8, f0, f4
    lfs f5, 0x8(r3)
    fsub f7, f1, f3
    fsub f9, f1, f5
    ps_sel f6, f6, f2, f0
    fsel f7, f7, f3, f1
    ps_sel f8, f8, f0, f4
    fsel f9, f9, f1, f5
    psq_stu f6, 0x0(r7), 0, 0
    stfs f7, 0x8(r7)
    psq_stu f8, 0x0(r6), 0, 0
    mr r3, r26
    mr r4, r27
    mr r5, r25
    stfs f9, 0x8(r6)
    mr r6, r26
    psq_lu f2, 0x0(r4), 0, 0
    mr r7, r27
    psq_lu f0, 0x0(r5), 0, 0
    psq_lu f4, 0x0(r3), 0, 0
    ps_sub f6, f0, f2
    lfs f1, 0x8(r5)
    lfs f3, 0x8(r4)
    ps_sub f8, f0, f4
    lfs f5, 0x8(r3)
    fsub f7, f1, f3
    fsub f9, f1, f5
    ps_sel f6, f6, f2, f0
    fsel f7, f7, f3, f1
    ps_sel f8, f8, f0, f4
    fsel f9, f9, f1, f5
    psq_stu f6, 0x0(r7), 0, 0
    stfs f7, 0x8(r7)
    psq_stu f8, 0x0(r6), 0, 0
    stfs f9, 0x8(r6)
    mr r3, r26
    mr r4, r27
    mr r5, r14
    psq_lu f0, 0x0(r5), 0, 0
    psq_lu f2, 0x0(r4), 0, 0
    mr r6, r26
    psq_lu f4, 0x0(r3), 0, 0
    mr r7, r27
    ps_sub f6, f0, f2
    lfs f1, 0x8(r5)
    lfs f3, 0x8(r4)
    ps_sub f8, f0, f4
    lfs f5, 0x8(r3)
    fsub f7, f1, f3
    fsub f9, f1, f5
    ps_sel f6, f6, f2, f0
    fsel f7, f7, f3, f1
    ps_sel f8, f8, f0, f4
    fsel f9, f9, f1, f5
    psq_stu f6, 0x0(r7), 0, 0
    stfs f7, 0x8(r7)
    psq_stu f8, 0x0(r6), 0, 0
    mr r3, r26
    mr r4, r27
    addi r5, r1, 0x1a8
    stfs f9, 0x8(r6)
    mr r6, r26
    psq_lu f2, 0x0(r4), 0, 0
    mr r7, r27
    psq_lu f0, 0x0(r5), 0, 0
    psq_lu f4, 0x0(r3), 0, 0
    ps_sub f6, f0, f2
    lfs f1, 0x8(r5)
    lfs f3, 0x8(r4)
    ps_sub f8, f0, f4
    lfs f5, 0x8(r3)
    fsub f7, f1, f3
    fsub f9, f1, f5
    ps_sel f6, f6, f2, f0
    fsel f7, f7, f3, f1
    ps_sel f8, f8, f0, f4
    fsel f9, f9, f1, f5
    psq_stu f6, 0x0(r7), 0, 0
    stfs f7, 0x8(r7)
    psq_stu f8, 0x0(r6), 0, 0
    mr r3, r26
    mr r4, r27
    addi r5, r1, 0x1b4
    stfs f9, 0x8(r6)
    mr r6, r26
    psq_lu f2, 0x0(r4), 0, 0
    mr r7, r27
    psq_lu f0, 0x0(r5), 0, 0
    psq_lu f4, 0x0(r3), 0, 0
    ps_sub f6, f0, f2
    lfs f1, 0x8(r5)
    lfs f3, 0x8(r4)
    ps_sub f8, f0, f4
    lfs f5, 0x8(r3)
    fsub f7, f1, f3
    fsub f9, f1, f5
    ps_sel f6, f6, f2, f0
    fsel f7, f7, f3, f1
    ps_sel f8, f8, f0, f4
    fsel f9, f9, f1, f5
    psq_stu f6, 0x0(r7), 0, 0
    stfs f7, 0x8(r7)
    psq_stu f8, 0x0(r6), 0, 0
    mr r4, r19
    psq_l f1, 0x0(r27), 0, 0
    mr r5, r29
    lfs f2, 0x1c(r1)
    addi r3, r1, 0x100
    psq_st f1, 0x0(r28), 0, 0
    psq_l f1, 0x0(r26), 0, 0
    stfs f2, 0x120(r1)
    lfs f2, 0x10(r1)
    psq_st f1, 0xc(r28), 0, 0
    psq_l f1, 0x0(r28), 0, 0
    stfs f9, 0x8(r6)
    stfs f2, 0x12c(r1)
    lfs f2, 0x120(r1)
    psq_st f1, 0x0(r29), 0, 0
    psq_l f1, 0xc(r28), 0, 0
    stfs f2, 0x150(r1)
    lfs f2, 0x12c(r1)
    psq_st f1, 0xc(r29), 0, 0
    stfs f2, 0x15c(r1)
    bl fn_80070C98
    psq_l f1, 0x0(r20), 0, 0
    lfs f2, 0x108(r1)
    stfs f2, 0x8(r19)
    psq_st f1, 0x0(r19), 0, 0
    psq_l f1, 0xc(r20), 0, 0
    lfs f2, 0x114(r1)
    stfs f2, 0x14(r19)
    psq_st f1, 0xc(r19), 0, 0
lbl_fn_8008EEDC_00001288:
    lwz r0, 0x20(r16)
    cmpwi r0, -0x1
    beq lbl_fn_8008EEDC_000012B8
    lwz r4, 0x16c(r31)
    slwi r0, r0, 2
    mr r3, r15
    mr r5, r17
    lwz r4, 0x48(r4)
    mr r6, r18
    mr r7, r19
    lwzx r4, r4, r0
    bl fn_8008EEDC
lbl_fn_8008EEDC_000012B8:
    lwz r0, 0x24(r16)
    cmpwi r0, -0x1
    beq lbl_fn_8008EEDC_000012D8
    lwz r3, 0x16c(r31)
    slwi r0, r0, 2
    lwz r3, 0x48(r3)
    lwzx r16, r3, r0
    b lbl_fn_8008EEDC_000012DC
lbl_fn_8008EEDC_000012D8:
    li r16, 0x0
lbl_fn_8008EEDC_000012DC:
    cmpwi r16, 0x0
    bne lbl_fn_8008EEDC_00000C9C
    addi r11, r1, 0x210
    psq_l f31, 0x258(r1), 0, 0
    lfd f31, 0x250(r1)
    psq_l f30, 0x248(r1), 0, 0
    lfd f30, 0x240(r1)
    psq_l f29, 0x238(r1), 0, 0
    lfd f29, 0x230(r1)
    psq_l f28, 0x228(r1), 0, 0
    lfd f28, 0x220(r1)
    psq_l f27, 0x218(r1), 0, 0
    lfd f27, 0x210(r1)
    bl _restgpr_14
    lwz r0, 0x264(r1)
    mtlr r0
    addi r1, r1, 0x260
    blr
}

asm void fn_8008F5F8(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    addi r11, r1, 0x110
    stfd f31, 0x120(r1)
    psq_st f31, 0x128(r1), 0, 0
    stfd f30, 0x110(r1)
    psq_st f30, 0x118(r1), 0, 0
    bl _savegpr_23
    lfs f11, 0x10(r4)
    mr r24, r3
    lfs f12, 0xc(r4)
    addi r6, r1, 0x5c
    lfs f13, 0x0(r4)
    addi r23, r1, 0x80
    lfs f31, 0x4(r4)
    addi r7, r1, 0x50
    stfs f12, 0x5c(r1)
    addi r31, r1, 0x8c
    lfs f10, 0x14(r4)
    addi r8, r1, 0x44
    stfs f11, 0x60(r1)
    addi r30, r1, 0x98
    lfs f30, 0x8(r4)
    fmr f2, f10
    psq_l f1, 0x0(r6), 0, 0
    addi r9, r1, 0x38
    stfs f13, 0x50(r1)
    addi r29, r1, 0xa4
    addi r10, r1, 0x2c
    stfs f11, 0x54(r1)
    addi r28, r1, 0xb0
    mr r3, r5
    addi r11, r1, 0x20
    psq_st f1, 0x0(r23), 0, 0
    addi r27, r1, 0xbc
    psq_l f1, 0x0(r7), 0, 0
    addi r7, r1, 0x14
    stfs f12, 0x44(r1)
    addi r26, r1, 0xc8
    addi r12, r1, 0x8
    addi r25, r1, 0xd4
    stfs f31, 0x48(r1)
    mr r4, r23
    mr r5, r23
    li r6, 0x8
    psq_st f1, 0x0(r31), 0, 0
    psq_l f1, 0x0(r8), 0, 0
    stfs f13, 0x38(r1)
    stfs f31, 0x3c(r1)
    psq_st f1, 0x0(r30), 0, 0
    psq_l f1, 0x0(r9), 0, 0
    stfs f12, 0x2c(r1)
    stfs f11, 0x30(r1)
    psq_st f1, 0x0(r29), 0, 0
    psq_l f1, 0x0(r10), 0, 0
    stfs f13, 0x20(r1)
    stfs f11, 0x24(r1)
    psq_st f1, 0x0(r28), 0, 0
    psq_l f1, 0x0(r11), 0, 0
    stfs f12, 0x14(r1)
    stfs f31, 0x18(r1)
    psq_st f1, 0x0(r27), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    stfs f13, 0x8(r1)
    stfs f31, 0xc(r1)
    psq_st f1, 0x0(r26), 0, 0
    psq_l f1, 0x0(r12), 0, 0
    stfs f2, 0x88(r1)
    stfs f2, 0x94(r1)
    stfs f2, 0xa0(r1)
    stfs f2, 0xac(r1)
    fmr f2, f30
    stfs f10, 0x64(r1)
    stfs f10, 0x58(r1)
    stfs f10, 0x4c(r1)
    stfs f10, 0x40(r1)
    stfs f30, 0x34(r1)
    stfs f2, 0xb8(r1)
    stfs f30, 0x28(r1)
    stfs f2, 0xc4(r1)
    stfs f30, 0x1c(r1)
    stfs f2, 0xd0(r1)
    stfs f30, 0x10(r1)
    psq_st f1, 0x0(r25), 0, 0
    stfs f2, 0xdc(r1)
    bl fn_805F9420
    addi r3, r1, 0x74
    addi r4, r1, 0x68
    psq_l f1, 0x0(r23), 0, 0
    mr r8, r3
    lfs f2, 0x88(r1)
    mr r7, r4
    psq_st f1, 0x0(r3), 0, 0
    mr r6, r3
    psq_lu f0, 0x0(r31), 0, 0
    mr r5, r4
    stfs f2, 0x7c(r1)
    psq_lu f4, 0x0(r8), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    ps_sub f8, f0, f4
    lfs f1, 0x8(r31)
    stfs f2, 0x70(r1)
    lfs f5, 0x8(r8)
    psq_lu f2, 0x0(r7), 0, 0
    ps_sel f8, f8, f0, f4
    fsub f9, f1, f5
    ps_sub f6, f0, f2
    lfs f3, 0x8(r7)
    fsub f7, f1, f3
    ps_sel f6, f6, f2, f0
    fsel f9, f9, f1, f5
    fsel f7, f7, f3, f1
    psq_stu f6, 0x0(r5), 0, 0
    stfs f7, 0x8(r5)
    psq_stu f8, 0x0(r6), 0, 0
    mr r8, r3
    mr r7, r4
    psq_lu f2, 0x0(r7), 0, 0
    stfs f9, 0x8(r6)
    mr r6, r3
    psq_lu f4, 0x0(r8), 0, 0
    mr r5, r4
    psq_lu f0, 0x0(r30), 0, 0
    lfs f3, 0x8(r7)
    ps_sub f6, f0, f2
    lfs f1, 0x8(r30)
    lfs f5, 0x8(r8)
    ps_sub f8, f0, f4
    fsub f7, f1, f3
    fsub f9, f1, f5
    ps_sel f6, f6, f2, f0
    fsel f7, f7, f3, f1
    ps_sel f8, f8, f0, f4
    fsel f9, f9, f1, f5
    psq_stu f6, 0x0(r5), 0, 0
    stfs f7, 0x8(r5)
    psq_stu f8, 0x0(r6), 0, 0
    mr r8, r3
    mr r7, r4
    psq_lu f2, 0x0(r7), 0, 0
    stfs f9, 0x8(r6)
    mr r6, r3
    psq_lu f4, 0x0(r8), 0, 0
    mr r5, r4
    psq_lu f0, 0x0(r29), 0, 0
    lfs f3, 0x8(r7)
    ps_sub f6, f0, f2
    lfs f1, 0x8(r29)
    lfs f5, 0x8(r8)
    ps_sub f8, f0, f4
    fsub f7, f1, f3
    fsub f9, f1, f5
    ps_sel f6, f6, f2, f0
    fsel f7, f7, f3, f1
    ps_sel f8, f8, f0, f4
    fsel f9, f9, f1, f5
    psq_stu f6, 0x0(r5), 0, 0
    stfs f7, 0x8(r5)
    psq_stu f8, 0x0(r6), 0, 0
    mr r8, r3
    mr r7, r4
    psq_lu f2, 0x0(r7), 0, 0
    stfs f9, 0x8(r6)
    mr r6, r3
    psq_lu f4, 0x0(r8), 0, 0
    mr r5, r4
    psq_lu f0, 0x0(r28), 0, 0
    lfs f3, 0x8(r7)
    ps_sub f6, f0, f2
    lfs f1, 0x8(r28)
    lfs f5, 0x8(r8)
    ps_sub f8, f0, f4
    fsub f7, f1, f3
    fsub f9, f1, f5
    ps_sel f6, f6, f2, f0
    fsel f7, f7, f3, f1
    ps_sel f8, f8, f0, f4
    fsel f9, f9, f1, f5
    psq_stu f6, 0x0(r5), 0, 0
    stfs f7, 0x8(r5)
    psq_stu f8, 0x0(r6), 0, 0
    stfs f9, 0x8(r6)
    mr r8, r3
    mr r7, r4
    psq_lu f0, 0x0(r27), 0, 0
    mr r6, r3
    psq_lu f2, 0x0(r7), 0, 0
    mr r5, r4
    psq_lu f4, 0x0(r8), 0, 0
    ps_sub f6, f0, f2
    lfs f1, 0x8(r27)
    lfs f3, 0x8(r7)
    ps_sub f8, f0, f4
    lfs f5, 0x8(r8)
    fsub f7, f1, f3
    fsub f9, f1, f5
    ps_sel f6, f6, f2, f0
    fsel f7, f7, f3, f1
    ps_sel f8, f8, f0, f4
    fsel f9, f9, f1, f5
    psq_stu f6, 0x0(r5), 0, 0
    stfs f7, 0x8(r5)
    psq_stu f8, 0x0(r6), 0, 0
    mr r8, r3
    mr r7, r4
    psq_lu f2, 0x0(r7), 0, 0
    stfs f9, 0x8(r6)
    mr r6, r3
    psq_lu f4, 0x0(r8), 0, 0
    mr r5, r4
    psq_lu f0, 0x0(r26), 0, 0
    lfs f3, 0x8(r7)
    ps_sub f6, f0, f2
    lfs f1, 0x8(r26)
    lfs f5, 0x8(r8)
    ps_sub f8, f0, f4
    fsub f7, f1, f3
    fsub f9, f1, f5
    ps_sel f6, f6, f2, f0
    fsel f7, f7, f3, f1
    ps_sel f8, f8, f0, f4
    fsel f9, f9, f1, f5
    psq_stu f6, 0x0(r5), 0, 0
    stfs f7, 0x8(r5)
    psq_stu f8, 0x0(r6), 0, 0
    mr r8, r3
    mr r7, r4
    psq_lu f2, 0x0(r7), 0, 0
    stfs f9, 0x8(r6)
    mr r6, r3
    psq_lu f4, 0x0(r8), 0, 0
    mr r5, r4
    psq_lu f0, 0x0(r25), 0, 0
    lfs f3, 0x8(r7)
    ps_sub f6, f0, f2
    lfs f1, 0x8(r25)
    lfs f5, 0x8(r8)
    ps_sub f8, f0, f4
    fsub f7, f1, f3
    fsub f9, f1, f5
    ps_sel f6, f6, f2, f0
    fsel f7, f7, f3, f1
    ps_sel f8, f8, f0, f4
    fsel f9, f9, f1, f5
    psq_stu f6, 0x0(r5), 0, 0
    stfs f7, 0x8(r5)
    psq_stu f8, 0x0(r6), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    stfs f9, 0x8(r6)
    lfs f2, 0x70(r1)
    psq_st f1, 0x0(r24), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x8(r24)
    lfs f2, 0x7c(r1)
    psq_st f1, 0xc(r24), 0, 0
    stfs f2, 0x14(r24)
    psq_l f31, 0x128(r1), 0, 0
    lfd f31, 0x120(r1)
    psq_l f30, 0x118(r1), 0, 0
    lfd f30, 0x110(r1)
    addi r11, r1, 0x110
    bl _restgpr_23
    lwz r0, 0x134(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

asm void fn_8008FA24(void)
{
    nofralloc
    stwu r1, -0x340(r1)
    mflr r0
    stw r0, 0x344(r1)
    addi r11, r1, 0x250
    stfd f31, 0x330(r1)
    psq_st f31, 0x338(r1), 0, 0
    stfd f30, 0x320(r1)
    psq_st f30, 0x328(r1), 0, 0
    stfd f29, 0x310(r1)
    psq_st f29, 0x318(r1), 0, 0
    stfd f28, 0x300(r1)
    psq_st f28, 0x308(r1), 0, 0
    stfd f27, 0x2f0(r1)
    psq_st f27, 0x2f8(r1), 0, 0
    stfd f26, 0x2e0(r1)
    psq_st f26, 0x2e8(r1), 0, 0
    stfd f25, 0x2d0(r1)
    psq_st f25, 0x2d8(r1), 0, 0
    stfd f24, 0x2c0(r1)
    psq_st f24, 0x2c8(r1), 0, 0
    stfd f23, 0x2b0(r1)
    psq_st f23, 0x2b8(r1), 0, 0
    stfd f22, 0x2a0(r1)
    psq_st f22, 0x2a8(r1), 0, 0
    stfd f21, 0x290(r1)
    psq_st f21, 0x298(r1), 0, 0
    stfd f20, 0x280(r1)
    psq_st f20, 0x288(r1), 0, 0
    stfd f19, 0x270(r1)
    psq_st f19, 0x278(r1), 0, 0
    stfd f18, 0x260(r1)
    psq_st f18, 0x268(r1), 0, 0
    stfd f17, 0x250(r1)
    psq_st f17, 0x258(r1), 0, 0
    bl _savegpr_24
    lwz r8, 0x20c(r3)
    mr r27, r4
    lwz r9, 0x50(r3)
    mr r26, r3
    extlwi r0, r8, 2, 26
    mr r28, r5
    mulli r4, r9, 0x18
    mr r29, r6
    srawi. r0, r0, 31
    mr r30, r7
    add r31, r3, r4
    beq lbl_fn_8008FA24_00001B60
    extlwi r0, r8, 2, 27
    srawi. r0, r0, 31
    beq lbl_fn_8008FA24_00001B60
    lwz r4, lbl_8087EFB4
    lwz r0, 0x2f8(r4)
    cmpwi r0, 0x3
    bne lbl_fn_8008FA24_00001B60
    lwz r8, 0x1cc(r3)
    addi r3, r1, 0x38
    addi r7, r1, 0x44
    lfs f0, lbl_80880C08
    lfs f2, 0x24(r8)
    addi r6, r1, 0x20
    stfs f2, 0x40(r1)
    addi r25, r1, 0xd8
    psq_l f1, 0x1c(r8), 0, 0
    addi r5, r1, 0x5c
    psq_st f1, 0x0(r3), 0, 0
    addi r4, r1, 0x68
    psq_l f1, 0x10(r8), 0, 0
    addi r3, r1, 0x50
    lfs f2, 0x18(r8)
    lfs f7, 0x40(r1)
    psq_st f1, 0x0(r7), 0, 0
    fadds f13, f7, f2
    lfs f9, 0x3c(r1)
    lfs f7, 0x48(r1)
    lfs f8, 0x38(r1)
    fadds f12, f9, f7
    lfs f7, 0x44(r1)
    fmuls f11, f13, f0
    stfs f2, 0x4c(r1)
    fadds f7, f8, f7
    fmuls f8, f12, f0
    fmr f2, f11
    stfs f7, 0x2c(r1)
    fmuls f0, f7, f0
    stfs f2, 0xe0(r1)
    lfs f2, 0x24(r8)
    stfs f2, 0x64(r1)
    lfs f2, 0x18(r8)
    stfs f0, 0x20(r1)
    frsp f0, f2
    lfs f7, 0x64(r1)
    stfs f8, 0x24(r1)
    psq_l f1, 0x0(r6), 0, 0
    fsubs f10, f7, f0
    psq_st f1, 0x0(r25), 0, 0
    psq_l f1, 0x1c(r8), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    psq_l f1, 0x10(r8), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lfs f9, 0x60(r1)
    lfs f8, 0x6c(r1)
    lfs f7, 0x5c(r1)
    lfs f0, 0x68(r1)
    fsubs f8, f9, f8
    stfs f12, 0x30(r1)
    fsubs f0, f7, f0
    stfs f13, 0x34(r1)
    stfs f11, 0x28(r1)
    stfs f2, 0x70(r1)
    stfs f0, 0x50(r1)
    stfs f8, 0x54(r1)
    stfs f10, 0x58(r1)
    bl fn_805F9940
    lfs f0, lbl_80880C08
    addi r4, r1, 0x1a0
    psq_l f2, 0x10(r26), 0, 0
    fmuls f7, f0, f1
    psq_l f1, 0x8(r26), 0, 0
    psq_l f3, 0x18(r26), 0, 0
    psq_l f4, 0x20(r26), 0, 0
    psq_l f5, 0x28(r26), 0, 0
    psq_l f6, 0x30(r26), 0, 0
    psq_st f6, 0x28(r4), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    psq_st f2, 0x8(r4), 0, 0
    psq_st f3, 0x10(r4), 0, 0
    psq_st f4, 0x18(r4), 0, 0
    psq_st f5, 0x20(r4), 0, 0
    lwz r7, 0xb0(r26)
    stfs f7, 0xe4(r1)
    cmpwi r7, 0x0
    blt lbl_fn_8008FA24_00001B14
    lwz r0, 0xb4(r26)
    cmpwi r0, 0x0
    blt lbl_fn_8008FA24_00001AD8
    mulli r0, r0, 0x30
    lwz r6, 0x3c(r26)
    addi r3, r1, 0x1d0
    add r5, r6, r0
    mulli r0, r7, 0x30
    lfs f10, 0x2c(r5)
    lfs f8, 0x28(r5)
    lfs f9, 0x24(r5)
    add r6, r6, r0
    lfs f7, 0x20(r5)
    lfs f12, 0x2c(r6)
    lfs f11, 0x28(r6)
    fadds f21, f12, f10
    lfs f10, 0x24(r6)
    fadds f22, f11, f8
    lfs f8, 0x20(r6)
    fadds f23, f10, f9
    lfs f9, 0x1c(r6)
    fadds f24, f8, f7
    lfs f7, 0x1c(r5)
    lfs f8, 0x18(r6)
    fmuls f12, f21, f0
    fadds f25, f9, f7
    lfs f7, 0x18(r5)
    fadds f26, f8, f7
    lfs f8, 0x14(r6)
    lfs f7, 0x14(r5)
    fmuls f11, f22, f0
    lfs f13, 0x10(r6)
    fmuls f10, f23, f0
    fadds f27, f8, f7
    lfs f7, 0x10(r5)
    lfs f20, 0x8(r6)
    fmuls f9, f24, f0
    fadds f28, f13, f7
    lfs f13, 0x8(r5)
    fadds f30, f20, f13
    lfs f31, 0x4(r6)
    lfs f13, 0x4(r5)
    fmuls f18, f27, f0
    lfs f8, 0xc(r6)
    fadds f31, f31, f13
    lfs f7, 0xc(r5)
    stfs f18, 0x1e4(r1)
    fmuls f18, f28, f0
    fadds f29, f8, f7
    lfs f20, 0x0(r6)
    lfs f13, 0x0(r5)
    fmuls f7, f26, f0
    fmuls f8, f25, f0
    fadds f13, f20, f13
    fmuls f19, f29, f0
    stfs f7, 0x1e8(r1)
    fmuls f20, f30, f0
    fmuls f7, f31, f0
    stfs f18, 0x1e0(r1)
    fmuls f0, f13, f0
    stfs f8, 0x1ec(r1)
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    stfs f0, 0x1d0(r1)
    stfs f7, 0x1d4(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f20, 0x1d8(r1)
    stfs f19, 0x1dc(r1)
    psq_l f2, 0x8(r3), 0, 0
    stfs f9, 0x1f0(r1)
    stfs f10, 0x1f4(r1)
    psq_l f5, 0x20(r3), 0, 0
    stfs f11, 0x1f8(r1)
    stfs f12, 0x1fc(r1)
    psq_l f6, 0x28(r3), 0, 0
    stfs f13, 0x200(r1)
    stfs f31, 0x204(r1)
    stfs f30, 0x208(r1)
    stfs f29, 0x20c(r1)
    stfs f28, 0x210(r1)
    stfs f27, 0x214(r1)
    stfs f26, 0x218(r1)
    stfs f25, 0x21c(r1)
    stfs f24, 0x220(r1)
    stfs f23, 0x224(r1)
    stfs f22, 0x228(r1)
    stfs f21, 0x22c(r1)
    psq_st f1, 0x0(r4), 0, 0
    psq_st f2, 0x8(r4), 0, 0
    psq_st f3, 0x10(r4), 0, 0
    psq_st f4, 0x18(r4), 0, 0
    psq_st f5, 0x20(r4), 0, 0
    psq_st f6, 0x28(r4), 0, 0
    b lbl_fn_8008FA24_00001B14
lbl_fn_8008FA24_00001AD8:
    mulli r0, r7, 0x30
    lwz r3, 0x3c(r26)
    add r3, r3, r0
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f6, 0x28(r4), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    psq_st f2, 0x8(r4), 0, 0
    psq_st f3, 0x10(r4), 0, 0
    psq_st f4, 0x18(r4), 0, 0
    psq_st f5, 0x20(r4), 0, 0
lbl_fn_8008FA24_00001B14:
    addi r24, r1, 0x74
    psq_l f1, 0x0(r25), 0, 0
    lfs f2, 0xe0(r1)
    mr r4, r24
    psq_st f1, 0x0(r24), 0, 0
    mr r5, r24
    addi r3, r1, 0x1a0
    stfs f2, 0x7c(r1)
    bl fn_805F93C0
    lfs f2, 0x7c(r1)
    addi r3, r1, 0xe8
    psq_l f1, 0x0(r24), 0, 0
    lfs f0, 0xe4(r1)
    psq_st f1, 0x0(r25), 0, 0
    stfs f2, 0xe0(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0xf0(r1)
    stfs f0, 0xf4(r1)
    b lbl_fn_8008FA24_00001DB8
lbl_fn_8008FA24_00001B60:
    psq_l f1, 0x8(r3), 0, 0
    addi r5, r1, 0x110
    psq_l f2, 0x10(r3), 0, 0
    addi r24, r1, 0xc8
    psq_l f3, 0x18(r3), 0, 0
    psq_l f4, 0x20(r3), 0, 0
    psq_l f5, 0x28(r3), 0, 0
    psq_l f6, 0x30(r3), 0, 0
    psq_st f6, 0x28(r5), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    psq_st f2, 0x8(r5), 0, 0
    psq_st f3, 0x10(r5), 0, 0
    psq_st f4, 0x18(r5), 0, 0
    psq_st f5, 0x20(r5), 0, 0
    lwz r8, 0xb0(r3)
    cmpwi r8, 0x0
    blt lbl_fn_8008FA24_00001D5C
    lwz r0, 0xb4(r3)
    cmpwi r0, 0x0
    blt lbl_fn_8008FA24_00001D20
    mulli r0, r0, 0x30
    lwz r7, 0x3c(r3)
    lfs f31, lbl_80880C08
    addi r4, r1, 0x140
    add r6, r7, r0
    mulli r0, r8, 0x30
    lfs f9, 0x2c(r6)
    lfs f7, 0x28(r6)
    lfs f8, 0x24(r6)
    add r7, r7, r0
    lfs f0, 0x20(r6)
    lfs f11, 0x2c(r7)
    lfs f10, 0x28(r7)
    fadds f30, f11, f9
    lfs f9, 0x24(r7)
    fadds f29, f10, f7
    lfs f7, 0x20(r7)
    fadds f28, f9, f8
    lfs f8, 0x1c(r7)
    fadds f27, f7, f0
    lfs f0, 0x1c(r6)
    lfs f7, 0x18(r7)
    fmuls f11, f30, f31
    fadds f26, f8, f0
    lfs f0, 0x18(r6)
    fadds f25, f7, f0
    lfs f7, 0x14(r7)
    lfs f0, 0x14(r6)
    fmuls f10, f29, f31
    lfs f12, 0x10(r7)
    fmuls f9, f28, f31
    fadds f24, f7, f0
    lfs f0, 0x10(r6)
    lfs f20, 0x8(r7)
    fmuls f8, f27, f31
    fadds f23, f12, f0
    lfs f12, 0x8(r6)
    fadds f21, f20, f12
    lfs f13, 0x4(r7)
    lfs f12, 0x4(r6)
    fmuls f17, f24, f31
    lfs f7, 0xc(r7)
    fadds f13, f13, f12
    lfs f0, 0xc(r6)
    fmuls f19, f21, f31
    stfs f17, 0x154(r1)
    fmuls f17, f23, f31
    fadds f22, f7, f0
    fmuls f0, f25, f31
    stfs f17, 0x150(r1)
    fmuls f7, f26, f31
    lfs f20, 0x0(r7)
    lfs f12, 0x0(r6)
    fmuls f18, f13, f31
    fadds f12, f20, f12
    stfs f0, 0x158(r1)
    fmuls f20, f22, f31
    psq_l f3, 0x10(r4), 0, 0
    stfs f7, 0x15c(r1)
    fmuls f0, f12, f31
    psq_l f4, 0x18(r4), 0, 0
    stfs f0, 0x140(r1)
    stfs f18, 0x144(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f19, 0x148(r1)
    stfs f20, 0x14c(r1)
    psq_l f2, 0x8(r4), 0, 0
    stfs f8, 0x160(r1)
    stfs f9, 0x164(r1)
    psq_l f5, 0x20(r4), 0, 0
    stfs f10, 0x168(r1)
    stfs f11, 0x16c(r1)
    psq_l f6, 0x28(r4), 0, 0
    stfs f12, 0x170(r1)
    stfs f13, 0x174(r1)
    stfs f21, 0x178(r1)
    stfs f22, 0x17c(r1)
    stfs f23, 0x180(r1)
    stfs f24, 0x184(r1)
    stfs f25, 0x188(r1)
    stfs f26, 0x18c(r1)
    stfs f27, 0x190(r1)
    stfs f28, 0x194(r1)
    stfs f29, 0x198(r1)
    stfs f30, 0x19c(r1)
    psq_st f1, 0x0(r5), 0, 0
    psq_st f2, 0x8(r5), 0, 0
    psq_st f3, 0x10(r5), 0, 0
    psq_st f4, 0x18(r5), 0, 0
    psq_st f5, 0x20(r5), 0, 0
    psq_st f6, 0x28(r5), 0, 0
    b lbl_fn_8008FA24_00001D5C
lbl_fn_8008FA24_00001D20:
    mulli r0, r8, 0x30
    lwz r4, 0x3c(r3)
    add r4, r4, r0
    psq_l f1, 0x0(r4), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_st f6, 0x28(r5), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    psq_st f2, 0x8(r5), 0, 0
    psq_st f3, 0x10(r5), 0, 0
    psq_st f4, 0x18(r5), 0, 0
    psq_st f5, 0x20(r5), 0, 0
lbl_fn_8008FA24_00001D5C:
    lfs f7, 0x54(r3)
    addi r25, r1, 0x14
    lfs f0, 0xac(r3)
    mr r4, r25
    psq_l f1, 0x9c(r26), 0, 0
    mr r5, r25
    lfs f2, 0xa4(r26)
    fmuls f17, f7, f0
    stfs f2, 0x1c(r1)
    addi r3, r1, 0x110
    psq_st f1, 0x0(r25), 0, 0
    bl fn_805F93C0
    lfs f0, 0xa8(r26)
    addi r3, r1, 0xe8
    psq_l f1, 0x0(r25), 0, 0
    fmuls f0, f0, f17
    lfs f2, 0x1c(r1)
    psq_st f1, 0x0(r24), 0, 0
    stfs f2, 0xd0(r1)
    stfs f0, 0xd4(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0xf0(r1)
    stfs f0, 0xf4(r1)
lbl_fn_8008FA24_00001DB8:
    mr r3, r29
    addi r4, r1, 0xe8
    bl fn_8004FF58
    cmpwi r3, 0x0
    bne lbl_fn_8008FA24_00001DD4
    li r3, 0x0
    b lbl_fn_8008FA24_00001F58
lbl_fn_8008FA24_00001DD4:
    lfs f7, 0x8(r28)
    addi r3, r1, 0x8
    lfs f0, 0xf0(r1)
    lfs f9, 0x4(r28)
    fsubs f10, f7, f0
    lfs f8, 0xec(r1)
    lfs f7, 0x0(r28)
    lfs f0, 0xe8(r1)
    fsubs f8, f9, f8
    stfs f10, 0x10(r1)
    fsubs f0, f7, f0
    stfs f8, 0xc(r1)
    stfs f0, 0x8(r1)
    bl fn_805F9940
    lwz r3, lbl_8087EFA8
    lfs f0, 0x10c(r3)
    fcmpo cr0, f1, f0
    ble lbl_fn_8008FA24_00001E24
    li r3, 0x0
    b lbl_fn_8008FA24_00001F58
lbl_fn_8008FA24_00001E24:
    cmpwi r30, 0x0
    beq lbl_fn_8008FA24_00001F54
    lfs f7, lbl_80880C18
    lfs f0, 0xac(r26)
    lfs f9, 0xf4(r1)
    fmuls f0, f7, f0
    fcmpo cr0, f9, f0
    bge lbl_fn_8008FA24_00001EEC
    lfs f8, 0xf0(r1)
    addi r4, r1, 0xbc
    lfs f7, 0xec(r1)
    addi r3, r1, 0xf8
    fsubs f10, f8, f9
    lfs f0, 0xe8(r1)
    fsubs f11, f7, f9
    addi r6, r1, 0xa4
    fsubs f12, f0, f9
    addi r5, r1, 0x104
    fadds f8, f8, f9
    stfs f12, 0xbc(r1)
    fadds f7, f7, f9
    fadds f0, f0, f9
    stfs f11, 0xc0(r1)
    fmr f2, f10
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0x100(r1)
    fmr f2, f8
    stfs f2, 0x10c(r1)
    lfs f2, 0x100(r1)
    stfs f2, 0x8(r30)
    lfs f2, 0x10c(r1)
    stfs f0, 0xa4(r1)
    stfs f7, 0xa8(r1)
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_l f1, 0xc(r3), 0, 0
    stfs f9, 0xb0(r1)
    stfs f9, 0xb4(r1)
    stfs f9, 0xb8(r1)
    stfs f10, 0xc4(r1)
    stfs f9, 0x98(r1)
    stfs f9, 0x9c(r1)
    stfs f9, 0xa0(r1)
    stfs f8, 0xac(r1)
    psq_st f1, 0xc(r30), 0, 0
    stfs f2, 0x14(r30)
    b lbl_fn_8008FA24_00001F54
lbl_fn_8008FA24_00001EEC:
    lwz r3, 0x16c(r31)
    addi r8, r1, 0x8c
    lfs f7, lbl_80880C1C
    addi r9, r1, 0x80
    lwz r4, 0x48(r3)
    mr r3, r26
    lfs f0, lbl_80880C20
    fmr f2, f7
    lwz r4, 0x0(r4)
    mr r5, r27
    stfs f7, 0x8c(r1)
    mr r6, r29
    mr r7, r30
    stfs f7, 0x90(r1)
    stfs f2, 0x8(r30)
    fmr f2, f0
    psq_l f1, 0x0(r8), 0, 0
    stfs f0, 0x80(r1)
    stfs f0, 0x84(r1)
    psq_st f1, 0x0(r30), 0, 0
    psq_l f1, 0x0(r9), 0, 0
    stfs f7, 0x94(r1)
    stfs f0, 0x88(r1)
    psq_st f1, 0xc(r30), 0, 0
    stfs f2, 0x14(r30)
    bl fn_8008EEDC
lbl_fn_8008FA24_00001F54:
    li r3, 0x1
lbl_fn_8008FA24_00001F58:
    addi r11, r1, 0x250
    psq_l f31, 0x338(r1), 0, 0
    lfd f31, 0x330(r1)
    psq_l f30, 0x328(r1), 0, 0
    lfd f30, 0x320(r1)
    psq_l f29, 0x318(r1), 0, 0
    lfd f29, 0x310(r1)
    psq_l f28, 0x308(r1), 0, 0
    lfd f28, 0x300(r1)
    psq_l f27, 0x2f8(r1), 0, 0
    lfd f27, 0x2f0(r1)
    psq_l f26, 0x2e8(r1), 0, 0
    lfd f26, 0x2e0(r1)
    psq_l f25, 0x2d8(r1), 0, 0
    lfd f25, 0x2d0(r1)
    psq_l f24, 0x2c8(r1), 0, 0
    lfd f24, 0x2c0(r1)
    psq_l f23, 0x2b8(r1), 0, 0
    lfd f23, 0x2b0(r1)
    psq_l f22, 0x2a8(r1), 0, 0
    lfd f22, 0x2a0(r1)
    psq_l f21, 0x298(r1), 0, 0
    lfd f21, 0x290(r1)
    psq_l f20, 0x288(r1), 0, 0
    lfd f20, 0x280(r1)
    psq_l f19, 0x278(r1), 0, 0
    lfd f19, 0x270(r1)
    psq_l f18, 0x268(r1), 0, 0
    lfd f18, 0x260(r1)
    psq_l f17, 0x258(r1), 0, 0
    lfd f17, 0x250(r1)
    bl _restgpr_24
    lwz r0, 0x344(r1)
    mtlr r0
    addi r1, r1, 0x340
    blr
}
