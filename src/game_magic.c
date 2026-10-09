#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_17(void);
extern void _restgpr_18(void);
extern void _restgpr_19(void);
extern void _restgpr_22(void);
extern void _restgpr_23(void);
extern void _restgpr_24(void);
extern void _restgpr_27(void);
extern void _savegpr_17(void);
extern void _savegpr_18(void);
extern void _savegpr_19(void);
extern void _savegpr_22(void);
extern void _savegpr_23(void);
extern void _savegpr_24(void);
extern void _savegpr_27(void);
extern void fn_8004B290(void);
extern void fn_8004B338(void);
extern void fn_8004B378(void);
extern void fn_8005E3E0(void);
extern void fn_800610A0(void);
extern void fn_800760E8(void);
extern void fn_800BDB58(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F9050(void);
extern void fn_805F90D0(void);
extern void fn_805F9160(void);
extern void fn_805F93C0(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_805F9990(void);
extern void fn_805F99B0(void);
extern void fn_8068A850(void);
extern void fn_8068AD58(void);
extern void fn_80695720(void);

/* External data declarations */
extern u8 lbl_80731150[];
extern u8 lbl_80731158[];
extern u8 lbl_80777818[];
extern u8 lbl_80777AB0[];

/* Small data declarations */
extern u32 lbl_8087EFB4;
extern u32 lbl_808809A0;
extern u32 lbl_808809A4;
extern u32 lbl_808809A8;
extern u32 lbl_808809B4;
extern u32 lbl_808809B8;
extern u32 lbl_808809C0;
extern u32 lbl_808809C4;
extern u32 lbl_808809C8;
extern u32 lbl_808809CC;
extern u32 lbl_808809D0;
extern u32 lbl_808809D4;
extern u32 lbl_808809D8;
extern u32 lbl_808809DC;

/* Function declarations */
void fn_80063200(void);
void fn_80063484(void);
void fn_80063764(void);
void fn_800638B0(void);
void fn_80063D3C(void);
void fn_800641CC(void);
void fn_8006471C(void);
void fn_80064AC4(void);
void fn_80064F00(void);

asm void fn_80063200(void)
{
    nofralloc
    stwu r1, -0x100(r1)
    mflr r0
    stw r0, 0x104(r1)
    addi r11, r1, 0x80
    stfd f31, 0xf0(r1)
    psq_st f31, 0xf8(r1), 0, 0
    stfd f30, 0xe0(r1)
    psq_st f30, 0xe8(r1), 0, 0
    stfd f29, 0xd0(r1)
    psq_st f29, 0xd8(r1), 0, 0
    stfd f28, 0xc0(r1)
    psq_st f28, 0xc8(r1), 0, 0
    stfd f27, 0xb0(r1)
    psq_st f27, 0xb8(r1), 0, 0
    stfd f26, 0xa0(r1)
    psq_st f26, 0xa8(r1), 0, 0
    stfd f25, 0x90(r1)
    psq_st f25, 0x98(r1), 0, 0
    stfd f24, 0x80(r1)
    psq_st f24, 0x88(r1), 0, 0
    bl _savegpr_23
    lwz r7, 0xc(r3)
    fmr f25, f1
    lwz r0, 0x8(r3)
    fmr f26, f2
    addi r6, r7, 0x20
    fmr f27, f3
    fmr f28, f4
    fmr f29, f5
    cmpw r6, r0
    mr r28, r3
    mr r29, r4
    mr r30, r5
    ble lbl_fn_80063200_00000090
    li r31, 0x0
    b lbl_fn_80063200_000000B4
lbl_fn_80063200_00000090:
    lwz r0, 0x4(r3)
    add. r31, r0, r7
    beq lbl_fn_80063200_000000A8
    lis r5, lbl_80777AB0@ha
    addi r5, r5, lbl_80777AB0@l
    stw r5, 0x0(r31)
lbl_fn_80063200_000000A8:
    lwz r5, 0xc(r3)
    addi r0, r5, 0x20
    stw r0, 0xc(r3)
lbl_fn_80063200_000000B4:
    cmpwi r31, 0x0
    beq lbl_fn_80063200_0000022C
    addi r7, r4, 0x1
    lwz r6, 0xc(r3)
    slwi r26, r7, 4
    lwz r0, 0x8(r3)
    addi r26, r26, 0x10
    slwi r4, r26, 30
    srwi r5, r26, 31
    subf r4, r5, r4
    rotlwi r4, r4, 2
    add r4, r4, r5
    subfic r4, r4, 0x4
    add r26, r26, r4
    add r4, r6, r26
    cmpw r4, r0
    ble lbl_fn_80063200_00000100
    li r25, 0x0
    b lbl_fn_80063200_0000012C
lbl_fn_80063200_00000100:
    lwz r0, 0x4(r3)
    lis r4, fn_800610A0@ha
    li r5, 0x0
    add r3, r0, r6
    addi r4, r4, fn_800610A0@l
    li r6, 0x10
    bl fn_80695720
    lwz r0, 0xc(r28)
    mr r25, r3
    add r0, r0, r26
    stw r0, 0xc(r28)
lbl_fn_80063200_0000012C:
    cmpwi r25, 0x0
    beq lbl_fn_80063200_0000022C
    lis r3, lbl_80731158@ha
    lfs f30, lbl_808809A0
    lfd f31, lbl_80731158@l(r3)
    addi r24, r1, 0x8
    lfs f24, lbl_808809B8
    addi r27, r29, 0x1
    li r23, 0x0
    li r28, 0x0
    lis r26, 0x4330
    b lbl_fn_80063200_000001EC
lbl_fn_80063200_0000015C:
    stw r29, 0x54(r1)
    addi r3, r1, 0x18
    li r4, 0x79
    stw r26, 0x50(r1)
    lfd f0, 0x50(r1)
    stw r23, 0x4c(r1)
    fsubs f0, f0, f31
    stw r26, 0x48(r1)
    fdivs f0, f24, f0
    lfd f3, 0x48(r1)
    stfs f29, 0x8(r1)
    stfs f30, 0xc(r1)
    stfs f30, 0x10(r1)
    fsubs f3, f3, f31
    fmuls f1, f3, f0
    bl fn_805F8E70
    addi r4, r1, 0x8
    addi r3, r1, 0x18
    mr r5, r4
    bl fn_805F93C0
    lfs f4, 0x8(r1)
    add r3, r25, r28
    lfs f3, 0xc(r1)
    addi r23, r23, 0x1
    lfs f0, 0x10(r1)
    fadds f4, f4, f25
    fadds f3, f3, f26
    addi r28, r28, 0x10
    fadds f2, f0, f27
    stfs f4, 0x8(r1)
    stfs f3, 0xc(r1)
    stfs f2, 0x10(r1)
    psq_l f1, 0x0(r24), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x8(r3)
    stw r30, 0xc(r3)
lbl_fn_80063200_000001EC:
    cmplw r23, r27
    blt lbl_fn_80063200_0000015C
    li r0, 0x0
    stw r0, 0x4(r31)
    li r3, 0xb0
    fmr f1, f28
    stw r3, 0xc(r31)
    li r0, 0x1
    mr r4, r31
    li r5, 0xd
    stw r29, 0x10(r31)
    stw r27, 0x14(r31)
    stw r25, 0x8(r31)
    stb r0, 0x18(r31)
    lwz r3, lbl_8087EFB4
    bl fn_800BDB58
lbl_fn_80063200_0000022C:
    addi r11, r1, 0x80
    psq_l f31, 0xf8(r1), 0, 0
    lfd f31, 0xf0(r1)
    psq_l f30, 0xe8(r1), 0, 0
    lfd f30, 0xe0(r1)
    psq_l f29, 0xd8(r1), 0, 0
    lfd f29, 0xd0(r1)
    psq_l f28, 0xc8(r1), 0, 0
    lfd f28, 0xc0(r1)
    psq_l f27, 0xb8(r1), 0, 0
    lfd f27, 0xb0(r1)
    psq_l f26, 0xa8(r1), 0, 0
    lfd f26, 0xa0(r1)
    psq_l f25, 0x98(r1), 0, 0
    lfd f25, 0x90(r1)
    psq_l f24, 0x88(r1), 0, 0
    lfd f24, 0x80(r1)
    bl _restgpr_23
    lwz r0, 0x104(r1)
    mtlr r0
    addi r1, r1, 0x100
    blr
}

asm void fn_80063484(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    addi r11, r1, 0xc0
    stfd f31, 0x120(r1)
    psq_st f31, 0x128(r1), 0, 0
    stfd f30, 0x110(r1)
    psq_st f30, 0x118(r1), 0, 0
    stfd f29, 0x100(r1)
    psq_st f29, 0x108(r1), 0, 0
    stfd f28, 0xf0(r1)
    psq_st f28, 0xf8(r1), 0, 0
    stfd f27, 0xe0(r1)
    psq_st f27, 0xe8(r1), 0, 0
    stfd f26, 0xd0(r1)
    psq_st f26, 0xd8(r1), 0, 0
    stfd f25, 0xc0(r1)
    psq_st f25, 0xc8(r1), 0, 0
    bl _savegpr_22
    lwz r7, 0xc(r3)
    fmr f25, f1
    lwz r0, 0x8(r3)
    fmr f31, f2
    addi r6, r7, 0x20
    fmr f30, f3
    fmr f29, f4
    fmr f26, f5
    cmpw r6, r0
    fmr f28, f6
    mr r28, r3
    fmr f27, f7
    mr r29, r4
    mr r30, r5
    ble lbl_fn_80063484_00000314
    li r31, 0x0
    b lbl_fn_80063484_00000338
lbl_fn_80063484_00000314:
    lwz r0, 0x4(r3)
    add. r31, r0, r7
    beq lbl_fn_80063484_0000032C
    lis r5, lbl_80777AB0@ha
    addi r5, r5, lbl_80777AB0@l
    stw r5, 0x0(r31)
lbl_fn_80063484_0000032C:
    lwz r5, 0xc(r3)
    addi r0, r5, 0x20
    stw r0, 0xc(r3)
lbl_fn_80063484_00000338:
    cmpwi r31, 0x0
    beq lbl_fn_80063484_00000514
    addi r7, r4, 0x2
    lwz r6, 0xc(r3)
    slwi r25, r7, 4
    lwz r0, 0x8(r3)
    addi r25, r25, 0x10
    slwi r4, r25, 30
    srwi r5, r25, 31
    subf r4, r5, r4
    rotlwi r4, r4, 2
    add r4, r4, r5
    subfic r4, r4, 0x4
    add r25, r25, r4
    add r4, r6, r25
    cmpw r4, r0
    ble lbl_fn_80063484_00000384
    li r24, 0x0
    b lbl_fn_80063484_000003B0
lbl_fn_80063484_00000384:
    lwz r0, 0x4(r3)
    lis r4, fn_800610A0@ha
    li r5, 0x0
    add r3, r0, r6
    addi r4, r4, fn_800610A0@l
    li r6, 0x10
    bl fn_80695720
    lwz r0, 0xc(r28)
    mr r24, r3
    add r0, r0, r25
    stw r0, 0xc(r28)
lbl_fn_80063484_000003B0:
    cmpwi r24, 0x0
    beq lbl_fn_80063484_00000514
    stfs f25, 0x20(r1)
    addi r5, r1, 0x20
    frsp f2, f30
    lfs f0, lbl_808809A8
    stfs f31, 0x24(r1)
    addi r3, r1, 0x60
    lfs f3, lbl_808809A0
    li r4, 0x79
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r24), 0, 0
    fnmsubs f1, f27, f0, f29
    stfs f2, 0x8(r24)
    stw r30, 0xc(r24)
    stfs f30, 0x28(r1)
    stfs f3, 0x14(r1)
    stfs f3, 0x18(r1)
    stfs f28, 0x1c(r1)
    bl fn_805F8E70
    addi r4, r1, 0x14
    addi r3, r1, 0x60
    mr r5, r4
    bl fn_805F93C0
    frsp f28, f30
    lis r3, lbl_80731158@ha
    frsp f29, f31
    lfd f31, lbl_80731158@l(r3)
    frsp f30, f25
    addi r23, r1, 0x8
    subi r25, r29, 0x1
    addi r27, r29, 0x1
    li r22, 0x1
    li r28, 0x10
    lis r26, 0x4330
    b lbl_fn_80063484_000004B0
lbl_fn_80063484_00000440:
    lfs f3, 0x18(r1)
    add r5, r24, r28
    lfs f0, 0x14(r1)
    addi r3, r1, 0x30
    fadds f4, f3, f29
    stw r25, 0x94(r1)
    fadds f5, f0, f30
    lfs f3, 0x1c(r1)
    stw r26, 0x90(r1)
    li r4, 0x79
    lfd f0, 0x90(r1)
    fadds f2, f3, f28
    stfs f5, 0x8(r1)
    fsubs f0, f0, f31
    stfs f4, 0xc(r1)
    psq_l f1, 0x0(r23), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    fdivs f1, f27, f0
    stfs f2, 0x8(r5)
    stfs f2, 0x10(r1)
    stw r30, 0xc(r5)
    bl fn_805F8E70
    addi r4, r1, 0x14
    addi r3, r1, 0x30
    mr r5, r4
    bl fn_805F93C0
    addi r22, r22, 0x1
    addi r28, r28, 0x10
lbl_fn_80063484_000004B0:
    cmplw r22, r27
    blt lbl_fn_80063484_00000440
    slwi r0, r27, 4
    addi r3, r1, 0x20
    add r4, r24, r0
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    li r7, 0x0
    lfs f2, 0x28(r1)
    li r6, 0xb0
    stfs f2, 0x8(r4)
    addi r3, r29, 0x2
    li r0, 0x1
    fmr f1, f26
    stw r30, 0xc(r4)
    mr r4, r31
    li r5, 0xd
    stw r7, 0x4(r31)
    stw r6, 0xc(r31)
    stw r27, 0x10(r31)
    stw r3, 0x14(r31)
    stw r24, 0x8(r31)
    stb r0, 0x18(r31)
    lwz r3, lbl_8087EFB4
    bl fn_800BDB58
lbl_fn_80063484_00000514:
    addi r11, r1, 0xc0
    psq_l f31, 0x128(r1), 0, 0
    lfd f31, 0x120(r1)
    psq_l f30, 0x118(r1), 0, 0
    lfd f30, 0x110(r1)
    psq_l f29, 0x108(r1), 0, 0
    lfd f29, 0x100(r1)
    psq_l f28, 0xf8(r1), 0, 0
    lfd f28, 0xf0(r1)
    psq_l f27, 0xe8(r1), 0, 0
    lfd f27, 0xe0(r1)
    psq_l f26, 0xd8(r1), 0, 0
    lfd f26, 0xd0(r1)
    psq_l f25, 0xc8(r1), 0, 0
    lfd f25, 0xc0(r1)
    bl _restgpr_22
    lwz r0, 0x134(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

asm void fn_80063764(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x20
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    bl _savegpr_27
    lwz r8, 0xc(r3)
    fmr f31, f1
    lwz r0, 0x8(r3)
    mr r27, r3
    addi r7, r8, 0x20
    mr r28, r4
    cmpw r7, r0
    mr r29, r5
    mr r30, r6
    ble lbl_fn_80063764_000005B0
    li r31, 0x0
    b lbl_fn_80063764_000005D4
lbl_fn_80063764_000005B0:
    lwz r0, 0x4(r3)
    add. r31, r0, r8
    beq lbl_fn_80063764_000005C8
    lis r4, lbl_80777AB0@ha
    addi r4, r4, lbl_80777AB0@l
    stw r4, 0x0(r31)
lbl_fn_80063764_000005C8:
    lwz r4, 0xc(r3)
    addi r0, r4, 0x20
    stw r0, 0xc(r3)
lbl_fn_80063764_000005D4:
    cmpwi r31, 0x0
    beq lbl_fn_80063764_00000690
    lwz r6, 0xc(r3)
    lwz r0, 0x8(r3)
    addi r4, r6, 0x34
    cmpw r4, r0
    ble lbl_fn_80063764_000005F8
    li r3, 0x0
    b lbl_fn_80063764_00000624
lbl_fn_80063764_000005F8:
    lwz r0, 0x4(r3)
    lis r4, fn_800610A0@ha
    addi r4, r4, fn_800610A0@l
    li r5, 0x0
    add r3, r0, r6
    li r6, 0x10
    li r7, 0x2
    bl fn_80695720
    lwz r4, 0xc(r27)
    addi r0, r4, 0x34
    stw r0, 0xc(r27)
lbl_fn_80063764_00000624:
    cmpwi r3, 0x0
    beq lbl_fn_80063764_00000690
    psq_l f1, 0x0(r28), 0, 0
    li r8, 0x0
    psq_st f1, 0x0(r3), 0, 0
    li r7, 0xb0
    lfs f2, 0x8(r28)
    li r6, 0x1
    stfs f2, 0x8(r3)
    li r0, 0x2
    psq_l f1, 0x0(r29), 0, 0
    mr r4, r31
    stw r30, 0xc(r3)
    li r5, 0xd
    lfs f2, 0x8(r29)
    psq_st f1, 0x10(r3), 0, 0
    fmr f1, f31
    stfs f2, 0x18(r3)
    stw r30, 0x1c(r3)
    stw r8, 0x4(r31)
    stw r7, 0xc(r31)
    stw r6, 0x10(r31)
    stw r0, 0x14(r31)
    stw r3, 0x8(r31)
    stb r6, 0x18(r31)
    lwz r3, lbl_8087EFB4
    bl fn_800BDB58
lbl_fn_80063764_00000690:
    addi r11, r1, 0x20
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_800638B0(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    addi r11, r1, 0xc0
    stfd f31, 0x120(r1)
    psq_st f31, 0x128(r1), 0, 0
    stfd f30, 0x110(r1)
    psq_st f30, 0x118(r1), 0, 0
    stfd f29, 0x100(r1)
    psq_st f29, 0x108(r1), 0, 0
    stfd f28, 0xf0(r1)
    psq_st f28, 0xf8(r1), 0, 0
    stfd f27, 0xe0(r1)
    psq_st f27, 0xe8(r1), 0, 0
    stfd f26, 0xd0(r1)
    psq_st f26, 0xd8(r1), 0, 0
    stfd f25, 0xc0(r1)
    psq_st f25, 0xc8(r1), 0, 0
    bl _savegpr_24
    lwz r8, 0xc(r3)
    fmr f30, f1
    lwz r0, 0x8(r3)
    fmr f31, f2
    addi r7, r8, 0x20
    mr r26, r3
    cmpw r7, r0
    mr r27, r4
    mr r28, r5
    mr r29, r6
    ble lbl_fn_800638B0_00000730
    li r30, 0x0
    b lbl_fn_800638B0_00000754
lbl_fn_800638B0_00000730:
    lwz r0, 0x4(r3)
    add. r30, r0, r8
    beq lbl_fn_800638B0_00000748
    lis r4, lbl_80777AB0@ha
    addi r4, r4, lbl_80777AB0@l
    stw r4, 0x0(r30)
lbl_fn_800638B0_00000748:
    lwz r4, 0xc(r3)
    addi r0, r4, 0x20
    stw r0, 0xc(r3)
lbl_fn_800638B0_00000754:
    cmpwi r30, 0x0
    beq lbl_fn_800638B0_00000AEC
    lwz r6, 0xc(r3)
    lwz r0, 0x8(r3)
    addi r4, r6, 0x34
    cmpw r4, r0
    ble lbl_fn_800638B0_00000778
    li r3, 0x0
    b lbl_fn_800638B0_000007A4
lbl_fn_800638B0_00000778:
    lwz r0, 0x4(r3)
    lis r4, fn_800610A0@ha
    addi r4, r4, fn_800610A0@l
    li r5, 0x0
    add r3, r0, r6
    li r6, 0x10
    li r7, 0x2
    bl fn_80695720
    lwz r4, 0xc(r26)
    addi r0, r4, 0x34
    stw r0, 0xc(r26)
lbl_fn_800638B0_000007A4:
    cmpwi r3, 0x0
    beq lbl_fn_800638B0_00000AEC
    psq_l f1, 0x0(r27), 0, 0
    li r8, 0x0
    psq_st f1, 0x0(r3), 0, 0
    li r7, 0xb0
    lfs f2, 0x8(r27)
    li r6, 0x1
    stfs f2, 0x8(r3)
    li r0, 0x2
    psq_l f1, 0x0(r28), 0, 0
    mr r4, r30
    stw r29, 0xc(r3)
    li r5, 0xd
    lfs f2, 0x8(r28)
    psq_st f1, 0x10(r3), 0, 0
    fmr f1, f30
    stfs f2, 0x18(r3)
    stw r29, 0x1c(r3)
    stw r8, 0x4(r30)
    stw r7, 0xc(r30)
    stw r6, 0x10(r30)
    stw r0, 0x14(r30)
    stw r3, 0x8(r30)
    lwz r3, lbl_8087EFB4
    bl fn_800BDB58
    lwz r4, 0xc(r26)
    lwz r0, 0x8(r26)
    addi r3, r4, 0x20
    cmpw r3, r0
    ble lbl_fn_800638B0_00000828
    li r30, 0x0
    b lbl_fn_800638B0_0000084C
lbl_fn_800638B0_00000828:
    lwz r0, 0x4(r26)
    add. r30, r0, r4
    beq lbl_fn_800638B0_00000840
    lis r3, lbl_80777AB0@ha
    addi r3, r3, lbl_80777AB0@l
    stw r3, 0x0(r30)
lbl_fn_800638B0_00000840:
    lwz r3, 0xc(r26)
    addi r0, r3, 0x20
    stw r0, 0xc(r26)
lbl_fn_800638B0_0000084C:
    cmpwi r30, 0x0
    beq lbl_fn_800638B0_00000AEC
    lwz r6, 0xc(r26)
    lwz r0, 0x8(r26)
    addi r3, r6, 0x74
    cmpw r3, r0
    ble lbl_fn_800638B0_00000870
    li r31, 0x0
    b lbl_fn_800638B0_000008A0
lbl_fn_800638B0_00000870:
    lwz r0, 0x4(r26)
    lis r4, fn_800610A0@ha
    addi r4, r4, fn_800610A0@l
    li r5, 0x0
    add r3, r0, r6
    li r6, 0x10
    li r7, 0x6
    bl fn_80695720
    lwz r4, 0xc(r26)
    mr r31, r3
    addi r0, r4, 0x74
    stw r0, 0xc(r26)
lbl_fn_800638B0_000008A0:
    cmpwi r31, 0x0
    beq lbl_fn_800638B0_00000AEC
    lfs f3, 0x8(r28)
    addi r3, r1, 0x50
    lfs f0, 0x8(r27)
    lfs f5, 0x4(r28)
    fsubs f6, f3, f0
    lfs f4, 0x4(r27)
    lfs f3, 0x0(r28)
    lfs f0, 0x0(r27)
    fsubs f4, f5, f4
    stfs f6, 0x58(r1)
    fsubs f0, f3, f0
    stfs f4, 0x54(r1)
    stfs f0, 0x50(r1)
    bl fn_805F9940
    fmr f25, f1
    addi r3, r1, 0x50
    mr r4, r3
    bl fn_805F98D0
    lfs f0, 0x54(r1)
    lfs f4, lbl_808809A0
    fabs f5, f0
    lfs f3, lbl_808809A4
    lfs f0, lbl_808809C0
    stfs f4, 0x44(r1)
    frsp f5, f5
    stfs f3, 0x48(r1)
    fcmpo cr0, f5, f0
    stfs f4, 0x4c(r1)
    ble lbl_fn_800638B0_00000928
    stfs f3, 0x44(r1)
    stfs f4, 0x48(r1)
    stfs f4, 0x4c(r1)
lbl_fn_800638B0_00000928:
    addi r3, r1, 0x50
    addi r4, r1, 0x44
    addi r5, r1, 0x38
    bl fn_805F99B0
    lfs f0, lbl_808809A0
    fcmpo cr0, f31, f0
    cror eq, lt, eq
    bne lbl_fn_800638B0_00000950
    lfs f0, lbl_808809C4
    fmuls f31, f0, f25
lbl_fn_800638B0_00000950:
    fdivs f0, f31, f25
    lfs f3, lbl_808809C4
    psq_l f1, 0x0(r28), 0, 0
    lis r3, lbl_80731150@ha
    lfs f4, 0x8(r27)
    addi r25, r1, 0x20
    lfs f6, 0x8(r28)
    fmuls f31, f3, f31
    lfs f3, 0x4(r27)
    li r24, 0x0
    fsubs f12, f4, f6
    lfs f5, 0x4(r28)
    lfs f4, 0x0(r27)
    fsubs f11, f3, f5
    lfs f3, 0x0(r28)
    fmuls f9, f12, f0
    fsubs f10, f4, f3
    psq_st f1, 0x0(r31), 0, 0
    fmuls f8, f11, f0
    fadds f6, f9, f6
    lfs f2, 0x8(r28)
    fmuls f7, f10, f0
    fadds f4, f8, f5
    stfs f2, 0x8(r31)
    frsp f29, f6
    fadds f0, f7, f3
    stfs f10, 0x14(r1)
    frsp f28, f4
    stfs f11, 0x18(r1)
    li r26, 0x0
    frsp f27, f0
    stfs f12, 0x1c(r1)
    lis r27, 0x4330
    lfd f25, lbl_80731150@l(r3)
    stfs f7, 0x8(r1)
    lfs f26, lbl_808809B4
    stfs f8, 0xc(r1)
    stfs f9, 0x10(r1)
    stfs f0, 0x2c(r1)
    stfs f4, 0x30(r1)
    stfs f6, 0x34(r1)
    stw r29, 0xc(r31)
lbl_fn_800638B0_000009F8:
    lfs f3, 0x3c(r1)
    xoris r0, r24, 0x8000
    lfs f0, 0x38(r1)
    addi r3, r24, 0x1
    fmuls f4, f3, f31
    stw r0, 0x94(r1)
    fmuls f5, f0, f31
    slwi r0, r3, 4
    stw r27, 0x90(r1)
    add r5, r31, r0
    lfd f0, 0x90(r1)
    addi r3, r1, 0x60
    lfs f3, 0x40(r1)
    addi r4, r1, 0x50
    stfs f5, 0x20(r1)
    fsubs f0, f0, f25
    fmuls f2, f3, f31
    stfs f4, 0x24(r1)
    psq_l f1, 0x0(r25), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    fmuls f1, f26, f0
    stfs f2, 0x28(r1)
    stfs f2, 0x8(r5)
    bl fn_805F9050
    addi r0, r24, 0x1
    addi r3, r1, 0x60
    slwi r0, r0, 4
    add r4, r31, r0
    mr r5, r4
    bl fn_805F93C0
    add r3, r31, r26
    addi r24, r24, 0x1
    stw r29, 0x1c(r3)
    cmpwi r24, 0x5
    addi r26, r26, 0x10
    lfs f0, 0x10(r3)
    fadds f0, f0, f27
    stfs f0, 0x10(r3)
    lfs f0, 0x14(r3)
    fadds f0, f0, f28
    stfs f0, 0x14(r3)
    lfs f0, 0x18(r3)
    fadds f0, f0, f29
    stfs f0, 0x18(r3)
    blt lbl_fn_800638B0_000009F8
    li r0, 0x0
    stw r0, 0x4(r30)
    li r0, 0xa0
    li r4, 0x4
    stw r0, 0xc(r30)
    li r3, 0x6
    li r0, 0x1
    fmr f1, f30
    stw r4, 0x10(r30)
    mr r4, r30
    li r5, 0xd
    stw r3, 0x14(r30)
    stw r31, 0x8(r30)
    stb r0, 0x18(r30)
    lwz r3, lbl_8087EFB4
    bl fn_800BDB58
lbl_fn_800638B0_00000AEC:
    addi r11, r1, 0xc0
    psq_l f31, 0x128(r1), 0, 0
    lfd f31, 0x120(r1)
    psq_l f30, 0x118(r1), 0, 0
    lfd f30, 0x110(r1)
    psq_l f29, 0x108(r1), 0, 0
    lfd f29, 0x100(r1)
    psq_l f28, 0xf8(r1), 0, 0
    lfd f28, 0xf0(r1)
    psq_l f27, 0xe8(r1), 0, 0
    lfd f27, 0xe0(r1)
    psq_l f26, 0xd8(r1), 0, 0
    lfd f26, 0xd0(r1)
    psq_l f25, 0xc8(r1), 0, 0
    lfd f25, 0xc0(r1)
    bl _restgpr_24
    lwz r0, 0x134(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

asm void fn_80063D3C(void)
{
    nofralloc
    stwu r1, -0x1c0(r1)
    mflr r0
    stw r0, 0x1c4(r1)
    addi r11, r1, 0x160
    stfd f31, 0x1b0(r1)
    psq_st f31, 0x1b8(r1), 0, 0
    stfd f30, 0x1a0(r1)
    psq_st f30, 0x1a8(r1), 0, 0
    stfd f29, 0x190(r1)
    psq_st f29, 0x198(r1), 0, 0
    stfd f28, 0x180(r1)
    psq_st f28, 0x188(r1), 0, 0
    stfd f27, 0x170(r1)
    psq_st f27, 0x178(r1), 0, 0
    stfd f26, 0x160(r1)
    psq_st f26, 0x168(r1), 0, 0
    bl _savegpr_22
    lwz r8, 0xc(r3)
    lis r7, 0x4330
    lwz r0, 0x8(r3)
    fmr f31, f1
    addi r6, r8, 0x20
    fmr f27, f2
    cmpw r6, r0
    stw r7, 0x128(r1)
    mr r25, r3
    stw r7, 0x130(r1)
    mr r26, r4
    mr r27, r5
    ble lbl_fn_80063D3C_00000BBC
    li r30, 0x0
    b lbl_fn_80063D3C_00000BE0
lbl_fn_80063D3C_00000BBC:
    lwz r0, 0x4(r3)
    add. r30, r0, r8
    beq lbl_fn_80063D3C_00000BD4
    lis r4, lbl_80777AB0@ha
    addi r4, r4, lbl_80777AB0@l
    stw r4, 0x0(r30)
lbl_fn_80063D3C_00000BD4:
    lwz r4, 0xc(r3)
    addi r0, r4, 0x20
    stw r0, 0xc(r3)
lbl_fn_80063D3C_00000BE0:
    cmpwi r30, 0x0
    beq lbl_fn_80063D3C_00000F84
    lwz r6, 0xc(r3)
    li r29, 0x8
    lwz r0, 0x8(r3)
    li r28, 0x43
    addi r4, r6, 0x444
    cmpw r4, r0
    ble lbl_fn_80063D3C_00000C0C
    li r31, 0x0
    b lbl_fn_80063D3C_00000C3C
lbl_fn_80063D3C_00000C0C:
    lwz r0, 0x4(r3)
    lis r4, fn_800610A0@ha
    addi r4, r4, fn_800610A0@l
    li r5, 0x0
    add r3, r0, r6
    li r6, 0x10
    li r7, 0x43
    bl fn_80695720
    lwz r4, 0xc(r25)
    mr r31, r3
    addi r0, r4, 0x444
    stw r0, 0xc(r25)
lbl_fn_80063D3C_00000C3C:
    cmpwi r31, 0x0
    beq lbl_fn_80063D3C_00000F84
    lfs f0, 0x4(r26)
    lis r3, lbl_80731158@ha
    lfs f2, 0x8(r26)
    addi r4, r1, 0x8
    fadds f3, f0, f31
    lfs f0, 0x0(r26)
    stfs f0, 0x8(r1)
    addi r24, r1, 0x2c
    lfs f29, lbl_808809A0
    li r23, 0x0
    stfs f3, 0xc(r1)
    lfd f28, lbl_80731158@l(r3)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    lfs f26, lbl_808809B8
    stfs f2, 0x8(r31)
    lfs f30, lbl_808809C8
    stfs f2, 0x10(r1)
    stw r27, 0xc(r31)
lbl_fn_80063D3C_00000C90:
    stw r23, 0x12c(r1)
    addi r3, r1, 0xf8
    li r4, 0x79
    lfd f0, 0x128(r1)
    fsubs f0, f0, f28
    fmuls f1, f30, f0
    bl fn_805F8E70
    mullw r25, r23, r29
    li r22, 0x0
lbl_fn_80063D3C_00000CB4:
    stw r29, 0x12c(r1)
    addi r0, r22, 0x1
    addi r3, r1, 0x98
    li r4, 0x7a
    lfd f0, 0x128(r1)
    stw r0, 0x134(r1)
    fsubs f0, f0, f28
    lfd f3, 0x130(r1)
    stfs f29, 0x2c(r1)
    fdivs f0, f26, f0
    stfs f31, 0x30(r1)
    stfs f29, 0x34(r1)
    fsubs f3, f3, f28
    fmuls f1, f3, f0
    bl fn_805F8E70
    addi r4, r1, 0x2c
    addi r3, r1, 0x98
    mr r5, r4
    bl fn_805F93C0
    addi r4, r1, 0x2c
    addi r3, r1, 0xf8
    mr r5, r4
    bl fn_805F93C0
    lfs f3, 0x2c(r1)
    add r3, r22, r25
    lfs f0, 0x0(r26)
    addi r0, r3, 0x1
    lfs f5, 0x30(r1)
    slwi r0, r0, 4
    fadds f6, f3, f0
    lfs f4, 0x4(r26)
    lfs f3, 0x34(r1)
    addi r22, r22, 0x1
    lfs f0, 0x8(r26)
    fadds f4, f5, f4
    fadds f2, f3, f0
    stfs f6, 0x2c(r1)
    add r3, r31, r0
    cmplw r22, r29
    stfs f4, 0x30(r1)
    stfs f2, 0x34(r1)
    psq_l f1, 0x0(r24), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x8(r3)
    stw r27, 0xc(r3)
    blt lbl_fn_80063D3C_00000CB4
    addi r23, r23, 0x1
    cmplwi r23, 0x4
    blt lbl_fn_80063D3C_00000C90
    lis r3, lbl_80731158@ha
    lfs f29, lbl_808809A0
    lfd f28, lbl_80731158@l(r3)
    addi r24, r1, 0x20
    lfs f26, lbl_808809B8
    li r22, 0x0
    li r25, 0x2
lbl_fn_80063D3C_00000D94:
    stw r29, 0x12c(r1)
    addi r0, r22, 0x1
    addi r3, r1, 0x68
    li r4, 0x7a
    lfd f0, 0x128(r1)
    stw r0, 0x134(r1)
    fsubs f0, f0, f28
    lfd f3, 0x130(r1)
    stfs f29, 0x20(r1)
    fdivs f0, f26, f0
    stfs f31, 0x24(r1)
    stfs f29, 0x28(r1)
    fsubs f3, f3, f28
    fmuls f1, f3, f0
    bl fn_805F8E70
    addi r4, r1, 0x20
    addi r3, r1, 0x68
    mr r5, r4
    bl fn_805F93C0
    lfs f3, 0x20(r1)
    addi r0, r22, 0x21
    lfs f0, 0x0(r26)
    slwi r0, r0, 4
    lfs f5, 0x24(r1)
    addi r22, r22, 0x1
    fadds f6, f3, f0
    lfs f4, 0x4(r26)
    lfs f3, 0x28(r1)
    add r3, r31, r0
    lfs f0, 0x8(r26)
    fadds f4, f5, f4
    fadds f2, f3, f0
    stfs f6, 0x20(r1)
    cmplw r22, r25
    stfs f4, 0x24(r1)
    stfs f2, 0x28(r1)
    psq_l f1, 0x0(r24), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x8(r3)
    stw r27, 0xc(r3)
    blt lbl_fn_80063D3C_00000D94
    lis r3, lbl_80731158@ha
    fneg f29, f31
    lfs f30, lbl_808809A0
    addi r24, r1, 0x14
    lfd f31, lbl_80731158@l(r3)
    li r22, 0x0
    lfs f26, lbl_808809B8
    lfs f28, lbl_808809C8
lbl_fn_80063D3C_00000E58:
    stw r22, 0x134(r1)
    addi r3, r1, 0xc8
    li r4, 0x78
    lfd f0, 0x130(r1)
    fsubs f0, f0, f31
    fmuls f1, f28, f0
    bl fn_805F8E70
    addi r0, r22, 0x4
    li r23, 0x0
    mullw r25, r0, r29
lbl_fn_80063D3C_00000E80:
    stw r29, 0x134(r1)
    addi r0, r23, 0x1
    addi r3, r1, 0x38
    li r4, 0x79
    lfd f0, 0x130(r1)
    stw r0, 0x12c(r1)
    fsubs f0, f0, f31
    lfd f3, 0x128(r1)
    stfs f29, 0x14(r1)
    fdivs f0, f26, f0
    stfs f30, 0x18(r1)
    stfs f30, 0x1c(r1)
    fsubs f3, f3, f31
    fmuls f1, f3, f0
    bl fn_805F8E70
    addi r4, r1, 0x14
    addi r3, r1, 0x38
    mr r5, r4
    bl fn_805F93C0
    addi r4, r1, 0x14
    addi r3, r1, 0xc8
    mr r5, r4
    bl fn_805F93C0
    lfs f3, 0x14(r1)
    addi r0, r23, 0x2
    lfs f0, 0x0(r26)
    add r3, r0, r25
    lfs f5, 0x18(r1)
    addi r0, r3, 0x1
    fadds f6, f3, f0
    lfs f4, 0x4(r26)
    lfs f3, 0x1c(r1)
    slwi r0, r0, 4
    lfs f0, 0x8(r26)
    fadds f4, f5, f4
    fadds f2, f3, f0
    stfs f6, 0x14(r1)
    add r3, r31, r0
    addi r23, r23, 0x1
    stfs f4, 0x18(r1)
    cmplw r23, r29
    stfs f2, 0x1c(r1)
    psq_l f1, 0x0(r24), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x8(r3)
    stw r27, 0xc(r3)
    blt lbl_fn_80063D3C_00000E80
    addi r22, r22, 0x1
    cmplwi r22, 0x4
    blt lbl_fn_80063D3C_00000E58
    li r0, 0x0
    stw r0, 0x4(r30)
    li r0, 0xb0
    li r3, 0x42
    stw r0, 0xc(r30)
    li r0, 0x1
    fmr f1, f27
    mr r4, r30
    stw r3, 0x10(r30)
    li r5, 0xd
    stw r28, 0x14(r30)
    stw r31, 0x8(r30)
    stb r0, 0x18(r30)
    lwz r3, lbl_8087EFB4
    bl fn_800BDB58
lbl_fn_80063D3C_00000F84:
    addi r11, r1, 0x160
    psq_l f31, 0x1b8(r1), 0, 0
    lfd f31, 0x1b0(r1)
    psq_l f30, 0x1a8(r1), 0, 0
    lfd f30, 0x1a0(r1)
    psq_l f29, 0x198(r1), 0, 0
    lfd f29, 0x190(r1)
    psq_l f28, 0x188(r1), 0, 0
    lfd f28, 0x180(r1)
    psq_l f27, 0x178(r1), 0, 0
    lfd f27, 0x170(r1)
    psq_l f26, 0x168(r1), 0, 0
    lfd f26, 0x160(r1)
    bl _restgpr_22
    lwz r0, 0x1c4(r1)
    mtlr r0
    addi r1, r1, 0x1c0
    blr
}

asm void fn_800641CC(void)
{
    nofralloc
    stwu r1, -0x400(r1)
    mflr r0
    stw r0, 0x404(r1)
    addi r11, r1, 0x370
    stfd f31, 0x3f0(r1)
    psq_st f31, 0x3f8(r1), 0, 0
    stfd f30, 0x3e0(r1)
    psq_st f30, 0x3e8(r1), 0, 0
    stfd f29, 0x3d0(r1)
    psq_st f29, 0x3d8(r1), 0, 0
    stfd f28, 0x3c0(r1)
    psq_st f28, 0x3c8(r1), 0, 0
    stfd f27, 0x3b0(r1)
    psq_st f27, 0x3b8(r1), 0, 0
    stfd f26, 0x3a0(r1)
    psq_st f26, 0x3a8(r1), 0, 0
    stfd f25, 0x390(r1)
    psq_st f25, 0x398(r1), 0, 0
    stfd f24, 0x380(r1)
    psq_st f24, 0x388(r1), 0, 0
    stfd f23, 0x370(r1)
    psq_st f23, 0x378(r1), 0, 0
    bl _savegpr_19
    lwz r8, 0xc(r3)
    fmr f26, f1
    lwz r0, 0x8(r3)
    fmr f28, f2
    addi r7, r8, 0x20
    fmr f27, f3
    cmpw r7, r0
    mr r27, r3
    mr r21, r4
    mr r23, r5
    mr r22, r6
    ble lbl_fn_800641CC_00001060
    li r26, 0x0
    b lbl_fn_800641CC_00001084
lbl_fn_800641CC_00001060:
    lwz r0, 0x4(r3)
    add. r26, r0, r8
    beq lbl_fn_800641CC_00001078
    lis r4, lbl_80777AB0@ha
    addi r4, r4, lbl_80777AB0@l
    stw r4, 0x0(r26)
lbl_fn_800641CC_00001078:
    lwz r4, 0xc(r3)
    addi r0, r4, 0x20
    stw r0, 0xc(r3)
lbl_fn_800641CC_00001084:
    cmpwi r26, 0x0
    beq lbl_fn_800641CC_000014BC
    lwz r6, 0xc(r3)
    li r25, 0xc
    lwz r0, 0x8(r3)
    li r24, 0x30
    addi r4, r6, 0x314
    cmpw r4, r0
    ble lbl_fn_800641CC_000010B0
    li r31, 0x0
    b lbl_fn_800641CC_000010E0
lbl_fn_800641CC_000010B0:
    lwz r0, 0x4(r3)
    lis r4, fn_800610A0@ha
    addi r4, r4, fn_800610A0@l
    li r5, 0x0
    add r3, r0, r6
    li r6, 0x10
    li r7, 0x30
    bl fn_80695720
    lwz r4, 0xc(r27)
    mr r31, r3
    addi r0, r4, 0x314
    stw r0, 0xc(r27)
lbl_fn_800641CC_000010E0:
    cmpwi r31, 0x0
    beq lbl_fn_800641CC_000014BC
    lfs f7, lbl_808809A0
    mr r3, r23
    lfs f0, lbl_808809A4
    addi r4, r1, 0x98
    stfs f7, 0x98(r1)
    stfs f0, 0x9c(r1)
    stfs f7, 0xa0(r1)
    bl fn_805F9990
    fabs f7, f1
    lfs f0, lbl_808809CC
    frsp f7, f7
    fcmpo cr0, f7, f0
    ble lbl_fn_800641CC_00001144
    lfs f0, lbl_808809A0
    addi r4, r1, 0x44
    stfs f0, 0x44(r1)
    addi r3, r1, 0x98
    lfs f2, lbl_808809D0
    stfs f0, 0x48(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0x4c(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0xa0(r1)
lbl_fn_800641CC_00001144:
    mr r3, r23
    addi r4, r1, 0x98
    addi r5, r1, 0x38
    bl fn_805F99B0
    addi r3, r1, 0x38
    addi r19, r1, 0x8c
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r19
    lfs f2, 0x40(r1)
    mr r4, r19
    psq_st f1, 0x0(r19), 0, 0
    stfs f2, 0x94(r1)
    bl fn_805F98D0
    mr r3, r19
    mr r4, r23
    addi r5, r1, 0x20
    bl fn_805F99B0
    addi r3, r1, 0x20
    addi r19, r1, 0x2c
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r19
    lfs f2, 0x28(r1)
    mr r4, r19
    psq_st f1, 0x0(r19), 0, 0
    stfs f2, 0x34(r1)
    bl fn_805F98D0
    lfs f2, 0x34(r1)
    addi r20, r1, 0x98
    psq_l f1, 0x0(r19), 0, 0
    addi r3, r1, 0x138
    psq_st f1, 0x0(r20), 0, 0
    li r4, 0x0
    li r5, 0x0
    stfs f2, 0xa0(r1)
    bl fn_8004B290
    lfs f2, lbl_808809A0
    addi r4, r1, 0x14
    stfs f2, 0x14(r1)
    addi r5, r1, 0x140
    addi r6, r1, 0x8
    addi r7, r1, 0x14c
    stfs f2, 0x18(r1)
    addi r8, r1, 0x158
    addi r3, r1, 0x138
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x148(r1)
    lfs f0, 0x8(r23)
    lfs f7, 0x4(r23)
    fneg f8, f0
    lfs f0, 0x0(r23)
    fneg f7, f7
    stfs f2, 0x1c(r1)
    fneg f0, f0
    frsp f2, f8
    stfs f0, 0x8(r1)
    stfs f7, 0xc(r1)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r7), 0, 0
    psq_l f1, 0x0(r20), 0, 0
    stfs f2, 0x154(r1)
    lfs f2, 0xa0(r1)
    stfs f8, 0x10(r1)
    psq_st f1, 0x0(r8), 0, 0
    stfs f2, 0x160(r1)
    bl fn_8004B378
    addi r4, r1, 0x190
    addi r19, r1, 0x108
    psq_l f1, 0x0(r4), 0, 0
    addi r3, r1, 0xd8
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_st f1, 0x0(r19), 0, 0
    lfs f1, 0x0(r21)
    psq_st f2, 0x8(r19), 0, 0
    lfs f2, 0x4(r21)
    psq_st f3, 0x10(r19), 0, 0
    lfs f3, 0x8(r21)
    psq_st f4, 0x18(r19), 0, 0
    psq_st f5, 0x20(r19), 0, 0
    psq_st f6, 0x28(r19), 0, 0
    bl fn_805F90D0
    mr r4, r19
    addi r3, r1, 0xd8
    addi r5, r1, 0xa8
    bl fn_805F89F0
    lfs f0, lbl_808809D4
    fmuls f1, f0, f28
    bl fn_8068AD58
    xoris r3, r25, 0x8000
    lis r0, 0x4330
    lis r4, lbl_80731150@ha
    stw r3, 0x334(r1)
    lfd f8, lbl_80731150@l(r4)
    frsp f9, f1
    stw r0, 0x330(r1)
    frsp f25, f26
    lfs f0, lbl_808809B8
    addi r30, r1, 0x5c
    lfd f7, 0x330(r1)
    fmuls f30, f26, f9
    lfs f29, lbl_808809A0
    fsubs f7, f7, f8
    lfs f31, lbl_808809A4
    addi r29, r1, 0x74
    addi r28, r1, 0x50
    fdivs f28, f0, f7
    addi r27, r1, 0x68
    li r23, 0x0
    li r20, 0x0
    li r19, 0x0
lbl_fn_800641CC_0000130C:
    fmr f1, f29
    stfs f30, 0x80(r1)
    stfs f30, 0x84(r1)
    stfs f31, 0x88(r1)
    bl fn_8068AD58
    frsp f0, f1
    fmr f1, f29
    fneg f24, f0
    bl fn_8068A850
    frsp f0, f1
    stfs f24, 0x78(r1)
    fadds f1, f29, f28
    stfs f0, 0x74(r1)
    bl fn_8068AD58
    frsp f0, f1
    fadds f1, f29, f28
    fneg f24, f0
    bl fn_8068A850
    frsp f8, f30
    lfs f10, 0x74(r1)
    frsp f12, f30
    lfs f11, 0x78(r1)
    frsp f9, f31
    mr r4, r30
    fmuls f13, f10, f8
    mr r5, r30
    frsp f23, f1
    addi r3, r1, 0xa8
    frsp f7, f24
    stfs f13, 0x74(r1)
    frsp f10, f26
    fmuls f11, f11, f12
    fmuls f0, f25, f9
    fmuls f2, f10, f9
    stfs f11, 0x78(r1)
    fmuls f8, f23, f8
    fmuls f7, f7, f12
    psq_l f1, 0x0(r29), 0, 0
    stfs f2, 0x7c(r1)
    stfs f8, 0x68(r1)
    stfs f7, 0x6c(r1)
    stfs f0, 0x70(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x64(r1)
    bl fn_805F93C0
    psq_l f1, 0x0(r27), 0, 0
    mr r4, r28
    lfs f2, 0x70(r1)
    mr r5, r28
    psq_st f1, 0x0(r28), 0, 0
    addi r3, r1, 0xa8
    stfs f2, 0x58(r1)
    bl fn_805F93C0
    lfs f2, 0x64(r1)
    add r5, r31, r20
    psq_l f1, 0x0(r30), 0, 0
    addi r0, r19, 0x1
    psq_st f1, 0x0(r5), 0, 0
    slwi r4, r0, 4
    addi r3, r19, 0x2
    addi r0, r19, 0x3
    stfs f2, 0x8(r5)
    slwi r3, r3, 4
    addi r23, r23, 0x1
    add r4, r31, r4
    stw r22, 0xc(r5)
    slwi r0, r0, 4
    add r3, r31, r3
    cmpw r23, r25
    lfs f2, 0x58(r1)
    add r5, r31, r0
    psq_l f1, 0x0(r28), 0, 0
    fadds f29, f29, f28
    psq_st f1, 0x0(r4), 0, 0
    addi r20, r20, 0x40
    psq_l f1, 0x0(r21), 0, 0
    addi r19, r19, 0x4
    stfs f2, 0x8(r4)
    lfs f2, 0x8(r21)
    stw r22, 0xc(r4)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x8(r3)
    stw r22, 0xc(r3)
    lfs f2, 0x64(r1)
    psq_l f1, 0x0(r30), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x8(r5)
    stw r22, 0xc(r5)
    blt lbl_fn_800641CC_0000130C
    li r0, 0x0
    stw r0, 0x4(r26)
    li r3, 0xa8
    fmr f1, f27
    li r0, 0x30
    stw r3, 0xc(r26)
    srawi r3, r0, 1
    mr r4, r26
    stw r3, 0x10(r26)
    li r0, 0x1
    li r5, 0xd
    stw r24, 0x14(r26)
    stw r31, 0x8(r26)
    stb r0, 0x18(r26)
    lwz r3, lbl_8087EFB4
    bl fn_800BDB58
    addi r3, r1, 0x138
    li r4, -0x1
    bl fn_8004B338
lbl_fn_800641CC_000014BC:
    addi r11, r1, 0x370
    psq_l f31, 0x3f8(r1), 0, 0
    lfd f31, 0x3f0(r1)
    psq_l f30, 0x3e8(r1), 0, 0
    lfd f30, 0x3e0(r1)
    psq_l f29, 0x3d8(r1), 0, 0
    lfd f29, 0x3d0(r1)
    psq_l f28, 0x3c8(r1), 0, 0
    lfd f28, 0x3c0(r1)
    psq_l f27, 0x3b8(r1), 0, 0
    lfd f27, 0x3b0(r1)
    psq_l f26, 0x3a8(r1), 0, 0
    lfd f26, 0x3a0(r1)
    psq_l f25, 0x398(r1), 0, 0
    lfd f25, 0x390(r1)
    psq_l f24, 0x388(r1), 0, 0
    lfd f24, 0x380(r1)
    psq_l f23, 0x378(r1), 0, 0
    lfd f23, 0x370(r1)
    bl _restgpr_19
    lwz r0, 0x404(r1)
    mtlr r0
    addi r1, r1, 0x400
    blr
}

asm void fn_8006471C(void)
{
    nofralloc
    stwu r1, -0x100(r1)
    mflr r0
    stw r0, 0x104(r1)
    addi r11, r1, 0xd0
    stfd f31, 0xf0(r1)
    psq_st f31, 0xf8(r1), 0, 0
    stfd f30, 0xe0(r1)
    psq_st f30, 0xe8(r1), 0, 0
    stfd f29, 0xd0(r1)
    psq_st f29, 0xd8(r1), 0, 0
    bl _savegpr_18
    fmr f31, f1
    mr r26, r6
    fmr f30, f2
    mr r25, r5
    mr r27, r3
    mr r24, r4
    mr r5, r26
    bl fn_80063D3C
    lfs f3, 0x0(r24)
    li r0, 0x0
    lfs f0, 0x0(r25)
    fcmpu cr0, f3, f0
    bne lbl_fn_8006471C_000015A0
    lfs f3, 0x4(r24)
    lfs f0, 0x4(r25)
    fcmpu cr0, f3, f0
    bne lbl_fn_8006471C_000015A0
    lfs f3, 0x8(r24)
    lfs f0, 0x8(r25)
    fcmpu cr0, f3, f0
    bne lbl_fn_8006471C_000015A0
    li r0, 0x1
lbl_fn_8006471C_000015A0:
    cmpwi r0, 0x0
    bne lbl_fn_8006471C_00001894
    fmr f1, f31
    mr r3, r27
    fmr f2, f30
    mr r4, r25
    mr r5, r26
    bl fn_80063D3C
    lwz r4, 0xc(r27)
    lwz r0, 0x8(r27)
    addi r3, r4, 0x20
    cmpw r3, r0
    ble lbl_fn_8006471C_000015DC
    li r29, 0x0
    b lbl_fn_8006471C_00001600
lbl_fn_8006471C_000015DC:
    lwz r0, 0x4(r27)
    add. r29, r0, r4
    beq lbl_fn_8006471C_000015F4
    lis r3, lbl_80777AB0@ha
    addi r3, r3, lbl_80777AB0@l
    stw r3, 0x0(r29)
lbl_fn_8006471C_000015F4:
    lwz r3, 0xc(r27)
    addi r0, r3, 0x20
    stw r0, 0xc(r27)
lbl_fn_8006471C_00001600:
    cmpwi r29, 0x0
    beq lbl_fn_8006471C_00001894
    lwz r6, 0xc(r27)
    li r28, 0x10
    lwz r0, 0x8(r27)
    addi r3, r6, 0x114
    cmpw r3, r0
    ble lbl_fn_8006471C_00001628
    li r31, 0x0
    b lbl_fn_8006471C_00001658
lbl_fn_8006471C_00001628:
    lwz r0, 0x4(r27)
    lis r4, fn_800610A0@ha
    addi r4, r4, fn_800610A0@l
    li r5, 0x0
    add r3, r0, r6
    li r6, 0x10
    li r7, 0x10
    bl fn_80695720
    lwz r4, 0xc(r27)
    mr r31, r3
    addi r0, r4, 0x114
    stw r0, 0xc(r27)
lbl_fn_8006471C_00001658:
    cmpwi r31, 0x0
    beq lbl_fn_8006471C_00001894
    lfs f3, 0x8(r25)
    addi r3, r1, 0x50
    lfs f0, 0x8(r24)
    lfs f5, 0x4(r25)
    fsubs f6, f3, f0
    lfs f4, 0x4(r24)
    lfs f3, 0x0(r25)
    lfs f0, 0x0(r24)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x54(r1)
    stfs f0, 0x50(r1)
    stfs f6, 0x58(r1)
    bl fn_805F9920
    lfs f0, lbl_808809D8
    fcmpo cr0, f1, f0
    blt lbl_fn_8006471C_00001894
    addi r3, r1, 0x50
    mr r4, r3
    bl fn_805F98D0
    lfs f3, 0x54(r1)
    lfs f0, lbl_808809CC
    fabs f3, f3
    frsp f3, f3
    fcmpo cr0, f3, f0
    ble lbl_fn_8006471C_000016DC
    lfs f0, lbl_808809A0
    stfs f0, 0x44(r1)
    stfs f0, 0x48(r1)
    stfs f31, 0x4c(r1)
    b lbl_fn_8006471C_00001744
lbl_fn_8006471C_000016DC:
    lfs f3, lbl_808809A0
    addi r3, r1, 0x50
    lfs f0, lbl_808809A4
    addi r4, r1, 0x20
    stfs f3, 0x20(r1)
    addi r5, r1, 0x2c
    stfs f0, 0x24(r1)
    stfs f3, 0x28(r1)
    bl fn_805F99B0
    addi r4, r1, 0x2c
    lfs f2, 0x34(r1)
    addi r3, r1, 0x44
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    mr r4, r3
    stfs f2, 0x4c(r1)
    bl fn_805F98D0
    lfs f4, 0x44(r1)
    lfs f3, 0x48(r1)
    lfs f0, 0x4c(r1)
    fmuls f4, f4, f31
    fmuls f3, f3, f31
    fmuls f0, f0, f31
    stfs f4, 0x44(r1)
    stfs f3, 0x48(r1)
    stfs f0, 0x4c(r1)
lbl_fn_8006471C_00001744:
    lis r3, lbl_80731158@ha
    lfs f29, lbl_808809C8
    lfd f31, lbl_80731158@l(r3)
    addi r19, r1, 0x44
    addi r20, r1, 0x38
    addi r18, r1, 0x14
    addi r30, r1, 0x8
    li r27, 0x0
    li r23, 0x0
    li r22, 0x0
    lis r21, 0x4330
lbl_fn_8006471C_00001770:
    stw r27, 0x94(r1)
    addi r3, r1, 0x60
    psq_l f1, 0x0(r19), 0, 0
    addi r4, r1, 0x50
    stw r21, 0x90(r1)
    lfs f2, 0x4c(r1)
    lfd f0, 0x90(r1)
    psq_st f1, 0x0(r20), 0, 0
    fsubs f0, f0, f31
    stfs f2, 0x40(r1)
    fmuls f1, f29, f0
    bl fn_805F9050
    mr r4, r20
    mr r5, r20
    addi r3, r1, 0x60
    bl fn_805F93C0
    lfs f5, 0x3c(r1)
    addi r0, r22, 0x1
    lfs f4, 0x4(r24)
    add r3, r31, r23
    lfs f3, 0x38(r1)
    slwi r0, r0, 4
    fadds f5, f5, f4
    lfs f0, 0x0(r24)
    lfs f4, 0x40(r1)
    addi r27, r27, 0x1
    fadds f3, f3, f0
    lfs f0, 0x8(r24)
    fadds f6, f4, f0
    stfs f5, 0x18(r1)
    add r4, r31, r0
    cmplwi r27, 0x8
    stfs f3, 0x14(r1)
    addi r23, r23, 0x20
    psq_l f1, 0x0(r18), 0, 0
    fmr f2, f6
    psq_st f1, 0x0(r3), 0, 0
    addi r22, r22, 0x2
    stfs f2, 0x8(r3)
    stw r26, 0xc(r3)
    lfs f5, 0x3c(r1)
    lfs f4, 0x4(r25)
    lfs f3, 0x38(r1)
    fadds f5, f5, f4
    lfs f0, 0x0(r25)
    lfs f4, 0x40(r1)
    fadds f3, f3, f0
    lfs f0, 0x8(r25)
    stfs f5, 0xc(r1)
    fadds f2, f4, f0
    stfs f3, 0x8(r1)
    psq_l f1, 0x0(r30), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x8(r4)
    stfs f6, 0x1c(r1)
    stfs f2, 0x10(r1)
    stw r26, 0xc(r4)
    blt lbl_fn_8006471C_00001770
    li r0, 0x0
    stw r0, 0x4(r29)
    li r0, 0xa8
    li r3, 0x8
    stw r0, 0xc(r29)
    li r0, 0x1
    fmr f1, f30
    mr r4, r29
    stw r3, 0x10(r29)
    li r5, 0xd
    stw r28, 0x14(r29)
    stw r31, 0x8(r29)
    stb r0, 0x18(r29)
    lwz r3, lbl_8087EFB4
    bl fn_800BDB58
lbl_fn_8006471C_00001894:
    addi r11, r1, 0xd0
    psq_l f31, 0xf8(r1), 0, 0
    lfd f31, 0xf0(r1)
    psq_l f30, 0xe8(r1), 0, 0
    lfd f30, 0xe0(r1)
    psq_l f29, 0xd8(r1), 0, 0
    lfd f29, 0xd0(r1)
    bl _restgpr_18
    lwz r0, 0x104(r1)
    mtlr r0
    addi r1, r1, 0x100
    blr
}

asm void fn_80064AC4(void)
{
    nofralloc
    stwu r1, -0x2b0(r1)
    mflr r0
    stw r0, 0x2b4(r1)
    addi r11, r1, 0x290
    stfd f31, 0x2a0(r1)
    psq_st f31, 0x2a8(r1), 0, 0
    stfd f30, 0x290(r1)
    psq_st f30, 0x298(r1), 0, 0
    bl _savegpr_17
    lwz r12, 0xc(r3)
    fmr f30, f1
    lwz r0, 0x8(r3)
    mr r20, r3
    addi r11, r12, 0x28
    lwz r25, 0x2b8(r1)
    cmpw r11, r0
    lwz r26, 0x2bc(r1)
    mr r30, r4
    mr r29, r5
    mr r27, r6
    mr r21, r7
    mr r22, r8
    mr r23, r9
    mr r24, r10
    ble lbl_fn_80064AC4_00001930
    li r28, 0x0
    b lbl_fn_80064AC4_00001954
lbl_fn_80064AC4_00001930:
    lwz r0, 0x4(r3)
    add. r28, r0, r12
    beq lbl_fn_80064AC4_00001948
    lis r4, lbl_80777818@ha
    addi r4, r4, lbl_80777818@l
    stw r4, 0x0(r28)
lbl_fn_80064AC4_00001948:
    lwz r4, 0xc(r3)
    addi r0, r4, 0x28
    stw r0, 0xc(r3)
lbl_fn_80064AC4_00001954:
    cmpwi r28, 0x0
    beq lbl_fn_80064AC4_00001CD8
    lwz r6, 0xc(r3)
    lwz r0, 0x8(r3)
    addi r4, r6, 0x74
    cmpw r4, r0
    ble lbl_fn_80064AC4_00001978
    li r31, 0x0
    b lbl_fn_80064AC4_000019A8
lbl_fn_80064AC4_00001978:
    lwz r0, 0x4(r3)
    lis r4, fn_8005E3E0@ha
    addi r4, r4, fn_8005E3E0@l
    li r5, 0x0
    add r3, r0, r6
    li r6, 0x18
    li r7, 0x4
    bl fn_80695720
    lwz r4, 0xc(r20)
    mr r31, r3
    addi r0, r4, 0x74
    stw r0, 0xc(r20)
lbl_fn_80064AC4_000019A8:
    cmpwi r31, 0x0
    beq lbl_fn_80064AC4_00001CD8
    lfs f1, 0x0(r30)
    addi r3, r1, 0x220
    lfs f2, 0x4(r30)
    lfs f3, 0x8(r30)
    bl fn_805F90D0
    lfs f7, lbl_808809A0
    addi r19, r1, 0x220
    lfs f1, 0x8(r29)
    addi r20, r1, 0xa0
    lfs f0, lbl_808809A4
    fcmpu cr0, f7, f1
    stfs f7, 0xcc(r1)
    stfs f7, 0xc4(r1)
    stfs f7, 0xc0(r1)
    stfs f7, 0xbc(r1)
    stfs f7, 0xb8(r1)
    stfs f7, 0xb0(r1)
    stfs f7, 0xac(r1)
    stfs f7, 0xa8(r1)
    stfs f7, 0xa4(r1)
    stfs f0, 0xc8(r1)
    stfs f0, 0xb4(r1)
    stfs f0, 0xa0(r1)
    beq lbl_fn_80064AC4_00001A60
    addi r3, r1, 0x190
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r20
    addi r4, r1, 0x190
    addi r5, r1, 0x1c0
    bl fn_805F89F0
    addi r3, r1, 0x1c0
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r20), 0, 0
    psq_st f2, 0x8(r20), 0, 0
    psq_st f3, 0x10(r20), 0, 0
    psq_st f4, 0x18(r20), 0, 0
    psq_st f5, 0x20(r20), 0, 0
    psq_st f6, 0x28(r20), 0, 0
lbl_fn_80064AC4_00001A60:
    lfs f0, lbl_808809A0
    lfs f1, 0x4(r29)
    fcmpu cr0, f0, f1
    beq lbl_fn_80064AC4_00001AC0
    addi r3, r1, 0x130
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r20
    addi r4, r1, 0x130
    addi r5, r1, 0x160
    bl fn_805F89F0
    addi r3, r1, 0x160
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r20), 0, 0
    psq_st f2, 0x8(r20), 0, 0
    psq_st f3, 0x10(r20), 0, 0
    psq_st f4, 0x18(r20), 0, 0
    psq_st f5, 0x20(r20), 0, 0
    psq_st f6, 0x28(r20), 0, 0
lbl_fn_80064AC4_00001AC0:
    lfs f0, lbl_808809A0
    lfs f1, 0x0(r29)
    fcmpu cr0, f0, f1
    beq lbl_fn_80064AC4_00001B20
    addi r3, r1, 0xd0
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r20
    addi r4, r1, 0xd0
    addi r5, r1, 0x100
    bl fn_805F89F0
    addi r3, r1, 0x100
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r20), 0, 0
    psq_st f2, 0x8(r20), 0, 0
    psq_st f3, 0x10(r20), 0, 0
    psq_st f4, 0x18(r20), 0, 0
    psq_st f5, 0x20(r20), 0, 0
    psq_st f6, 0x28(r20), 0, 0
lbl_fn_80064AC4_00001B20:
    mr r3, r19
    mr r4, r20
    addi r5, r1, 0x70
    bl fn_805F89F0
    addi r4, r1, 0x70
    addi r3, r1, 0x40
    psq_l f1, 0x0(r4), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_st f1, 0x0(r19), 0, 0
    lfs f1, 0x0(r27)
    psq_st f2, 0x8(r19), 0, 0
    lfs f2, 0x4(r27)
    psq_st f3, 0x10(r19), 0, 0
    lfs f3, 0x8(r27)
    psq_st f4, 0x18(r19), 0, 0
    psq_st f5, 0x20(r19), 0, 0
    psq_st f6, 0x28(r19), 0, 0
    bl fn_805F9160
    addi r3, r1, 0x220
    addi r4, r1, 0x40
    addi r5, r1, 0x10
    bl fn_805F89F0
    addi r3, r1, 0x10
    addi r4, r1, 0x220
    psq_l f1, 0x0(r3), 0, 0
    addi r30, r1, 0x8
    psq_l f2, 0x8(r3), 0, 0
    li r27, 0x0
    psq_l f3, 0x10(r3), 0, 0
    li r20, 0x0
    psq_l f4, 0x18(r3), 0, 0
    li r19, 0x0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lfs f31, lbl_808809A0
    psq_st f2, 0x8(r4), 0, 0
    psq_st f3, 0x10(r4), 0, 0
    psq_st f4, 0x18(r4), 0, 0
    psq_st f5, 0x20(r4), 0, 0
    psq_st f6, 0x28(r4), 0, 0
lbl_fn_80064AC4_00001BD4:
    srwi r3, r27, 31
    clrlwi r0, r27, 31
    xor r0, r0, r3
    subf. r17, r3, r0
    beq lbl_fn_80064AC4_00001BF0
    lfs f0, lbl_808809DC
    b lbl_fn_80064AC4_00001BF4
lbl_fn_80064AC4_00001BF0:
    lfs f0, lbl_808809A8
lbl_fn_80064AC4_00001BF4:
    srwi r0, r27, 31
    addi r29, r1, 0x1f0
    add r0, r0, r27
    stfsux f0, r29, r19
    srawi. r18, r0, 1
    beq lbl_fn_80064AC4_00001C14
    lfs f0, lbl_808809A8
    b lbl_fn_80064AC4_00001C18
lbl_fn_80064AC4_00001C14:
    lfs f0, lbl_808809DC
lbl_fn_80064AC4_00001C18:
    stfs f0, 0x4(r29)
    mr r4, r29
    mr r5, r29
    addi r3, r1, 0x220
    stfs f31, 0x8(r29)
    bl fn_805F93C0
    cmpwi r18, 0x0
    beq lbl_fn_80064AC4_00001C40
    lfs f0, 0x4(r21)
    b lbl_fn_80064AC4_00001C44
lbl_fn_80064AC4_00001C40:
    lfs f0, 0x4(r22)
lbl_fn_80064AC4_00001C44:
    cmpwi r17, 0x0
    beq lbl_fn_80064AC4_00001C54
    lfs f7, 0x0(r21)
    b lbl_fn_80064AC4_00001C58
lbl_fn_80064AC4_00001C54:
    lfs f7, 0x0(r22)
lbl_fn_80064AC4_00001C58:
    lfs f2, 0x8(r29)
    add r3, r31, r20
    psq_l f1, 0x0(r29), 0, 0
    addi r27, r27, 0x1
    psq_st f1, 0x0(r3), 0, 0
    cmpwi r27, 0x4
    addi r20, r20, 0x18
    addi r19, r19, 0xc
    stfs f2, 0x8(r3)
    stfs f7, 0x8(r1)
    stfs f0, 0xc(r1)
    stw r23, 0xc(r3)
    psq_l f1, 0x0(r30), 0, 0
    psq_st f1, 0x10(r3), 0, 0
    blt lbl_fn_80064AC4_00001BD4
    li r0, 0x0
    stw r0, 0x4(r28)
    li r0, 0x98
    li r3, 0x2
    stw r0, 0xc(r28)
    li r0, 0x4
    fmr f1, f30
    mr r4, r28
    stw r3, 0x10(r28)
    li r5, 0xd
    stw r0, 0x14(r28)
    stw r24, 0x18(r28)
    stw r25, 0x1c(r28)
    stw r31, 0x8(r28)
    stw r26, 0x20(r28)
    lwz r3, lbl_8087EFB4
    bl fn_800BDB58
lbl_fn_80064AC4_00001CD8:
    addi r11, r1, 0x290
    psq_l f31, 0x2a8(r1), 0, 0
    lfd f31, 0x2a0(r1)
    psq_l f30, 0x298(r1), 0, 0
    lfd f30, 0x290(r1)
    bl _restgpr_17
    lwz r0, 0x2b4(r1)
    mtlr r0
    addi r1, r1, 0x2b0
    blr
}

asm void fn_80064F00(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x38(r1)
    fmr f31, f1
    stmw r22, 0x10(r1)
    mr r23, r3
    mr r24, r4
    mr r25, r5
    mr r26, r6
    mr r27, r7
    mr r28, r8
    lwz r10, 0xc(r3)
    lwz r0, 0x8(r3)
    addi r9, r10, 0x28
    cmpw r9, r0
    ble lbl_fn_80064F00_00001D4C
    li r31, 0x0
    b lbl_fn_80064F00_00001D70
lbl_fn_80064F00_00001D4C:
    lwz r0, 0x4(r3)
    add. r31, r0, r10
    beq lbl_fn_80064F00_00001D64
    lis r4, lbl_80777818@ha
    addi r4, r4, lbl_80777818@l
    stw r4, 0x0(r31)
lbl_fn_80064F00_00001D64:
    lwz r4, 0xc(r3)
    addi r0, r4, 0x28
    stw r0, 0xc(r3)
lbl_fn_80064F00_00001D70:
    cmpwi r31, 0x0
    beq lbl_fn_80064F00_00001E48
    mulli r29, r5, 0x18
    lwz r6, 0xc(r3)
    lwz r0, 0x8(r3)
    addi r30, r29, 0x10
    slwi r4, r30, 30
    srwi r5, r30, 31
    subf r4, r5, r4
    rotlwi r4, r4, 2
    add r4, r4, r5
    subfic r4, r4, 0x4
    add r30, r30, r4
    add r4, r6, r30
    cmpw r4, r0
    ble lbl_fn_80064F00_00001DB8
    li r22, 0x0
    b lbl_fn_80064F00_00001DE8
lbl_fn_80064F00_00001DB8:
    lwz r0, 0x4(r3)
    lis r4, fn_8005E3E0@ha
    mr r7, r25
    li r5, 0x0
    add r3, r0, r6
    addi r4, r4, fn_8005E3E0@l
    li r6, 0x18
    bl fn_80695720
    lwz r0, 0xc(r23)
    mr r22, r3
    add r0, r0, r30
    stw r0, 0xc(r23)
lbl_fn_80064F00_00001DE8:
    cmpwi r22, 0x0
    beq lbl_fn_80064F00_00001E48
    mr r3, r22
    mr r4, r24
    mr r5, r29
    bl memcpy
    li r0, 0x0
    stw r0, 0x4(r31)
    mr r3, r25
    mr r4, r26
    stw r26, 0xc(r31)
    bl fn_800760E8
    stw r3, 0x10(r31)
    li r0, 0x1
    fmr f1, f31
    mr r4, r31
    stw r25, 0x14(r31)
    li r5, 0xd
    stw r27, 0x18(r31)
    stw r28, 0x1c(r31)
    stw r22, 0x8(r31)
    stw r0, 0x20(r31)
    lwz r3, lbl_8087EFB4
    bl fn_800BDB58
lbl_fn_80064F00_00001E48:
    lfd f31, 0x38(r1)
    lmw r22, 0x10(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}
