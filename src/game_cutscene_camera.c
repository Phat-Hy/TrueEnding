#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_22(void);
extern void _restgpr_23(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_22(void);
extern void _savegpr_23(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_8000D124(void);
extern void fn_8000D844(void);
extern void fn_8001047C(void);
extern void fn_8004D388(void);
extern void fn_800844D8(void);
extern void fn_800EC204(void);
extern void fn_80121F00(void);
extern void fn_8013C504(void);
extern void fn_8032BE88(void);
extern void fn_8032C1EC(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9920(void);
extern void fn_80680770(void);
extern void fn_80686EA4(void);
extern void fn_8068AEA8(void);

/* External data declarations */
extern u8 lbl_80749B00[];
extern u8 lbl_80749B78[];
extern u8 lbl_80749B80[];
extern u8 lbl_80749D10[];
extern u8 lbl_80775A88[];
extern u8 lbl_80779F68[];
extern u8 lbl_80788D00[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087F430;
extern u32 lbl_8087F8A0;
extern u32 lbl_80884F10;
extern u32 lbl_80884F1C;
extern u32 lbl_80884F34;
extern u32 lbl_80884F3C;
extern u32 lbl_80884F44;
extern u32 lbl_80884F6C;
extern u32 lbl_80884F70;
extern u32 lbl_80884F8C;
extern u32 lbl_80884F9C;
extern u32 lbl_80885018;

/* Function declarations */
void fn_8032A3D4(void);
void fn_8032A650(void);
void fn_8032A894(void);
void fn_8032A9F4(void);
void fn_8032AB90(void);
void fn_8032ABA4(void);
void fn_8032AC1C(void);
void fn_8032AF90(void);
void fn_8032B314(void);
void fn_8032B6F8(void);
void fn_8032B7F0(void);

asm void fn_8032A3D4(void)
{
    nofralloc
    stwu r1, -0x1a0(r1)
    mflr r0
    stw r0, 0x1a4(r1)
    addi r11, r1, 0x100
    stfd f31, 0x190(r1)
    psq_st f31, 0x198(r1), 0, 0
    stfd f30, 0x180(r1)
    psq_st f30, 0x188(r1), 0, 0
    stfd f29, 0x170(r1)
    psq_st f29, 0x178(r1), 0, 0
    stfd f28, 0x160(r1)
    psq_st f28, 0x168(r1), 0, 0
    stfd f27, 0x150(r1)
    psq_st f27, 0x158(r1), 0, 0
    stfd f26, 0x140(r1)
    psq_st f26, 0x148(r1), 0, 0
    stfd f25, 0x130(r1)
    psq_st f25, 0x138(r1), 0, 0
    stfd f24, 0x120(r1)
    psq_st f24, 0x128(r1), 0, 0
    stfd f23, 0x110(r1)
    psq_st f23, 0x118(r1), 0, 0
    stfd f22, 0x100(r1)
    psq_st f22, 0x108(r1), 0, 0
    bl _savegpr_22
    fmr f27, f1
    stfs f2, 0x40(r1)
    li r0, 0x0
    lfs f2, 0x8(r6)
    psq_l f1, 0x0(r6), 0, 0
    addi r7, r1, 0x2c
    psq_st f1, 0x0(r7), 0, 0
    lis r6, lbl_80749B80@ha
    lfs f30, lbl_80884F10
    mr r22, r3
    stw r0, 0xac(r1)
    mr r23, r4
    lfs f3, 0x30(r1)
    mr r24, r5
    stw r0, 0xb0(r1)
    addi r29, r1, 0x14
    lfd f31, lbl_80749B80@l(r6)
    addi r28, r1, 0x38
    stw r0, 0xb4(r1)
    addi r27, r1, 0x88
    lfs f23, lbl_80884F34
    addi r26, r1, 0x20
    stw r0, 0xb8(r1)
    li r25, 0x0
    lfs f24, lbl_80884F3C
    lis r30, 0x4330
    stfs f2, 0x34(r1)
    lis r31, lbl_80749B78@ha
    lfs f25, lbl_80884F6C
    lfs f0, 0x620(r3)
    stfs f30, 0x38(r1)
    fadds f0, f3, f0
    lfs f26, lbl_80884F70
    stfs f30, 0x3c(r1)
    stfs f0, 0x30(r1)
    lfs f29, 0x538(r3)
lbl_fn_8032A3D4_000000F4:
    xoris r0, r25, 0x8000
    stw r0, 0xcc(r1)
    addi r3, r1, 0x48
    li r4, 0x79
    stw r30, 0xc8(r1)
    lfd f0, 0xc8(r1)
    fsubs f0, f0, f31
    fmadds f0, f23, f0, f27
    fsubs f28, f0, f24
    fmr f1, f28
    bl fn_805F8E70
    psq_l f1, 0x0(r28), 0, 0
    mr r4, r29
    lfs f2, 0x40(r1)
    mr r5, r29
    psq_st f1, 0x0(r29), 0, 0
    addi r3, r1, 0x48
    stfs f2, 0x1c(r1)
    bl fn_805F93C0
    lwz r3, lbl_8087EE98
    mr r6, r29
    lfs f1, 0x620(r22)
    addi r4, r1, 0x78
    addi r5, r1, 0x2c
    addi r8, r22, 0x5b8
    lis r7, 0x8000
    li r9, 0x0
    bl fn_8004D388
    psq_l f1, 0x0(r27), 0, 0
    addi r3, r1, 0x8
    psq_st f1, 0x0(r29), 0, 0
    lfs f2, 0x90(r1)
    lfs f0, 0x34(r1)
    lfs f5, 0x18(r1)
    fsubs f6, f2, f0
    lfs f4, 0x30(r1)
    lfs f3, 0x14(r1)
    lfs f0, 0x2c(r1)
    fsubs f4, f5, f4
    stfs f2, 0x1c(r1)
    fsubs f0, f3, f0
    stfs f4, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f6, 0x10(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f30
    fmr f22, f1
    ble lbl_fn_8032A3D4_000001F0
    fadds f1, f23, f28
    lfd f2, lbl_80749B78@l(r31)
    bl fn_8068AEA8
    frsp f29, f1
    fcmpo cr0, f29, f23
    ble lbl_fn_8032A3D4_000001D0
    fsubs f29, f29, f25
lbl_fn_8032A3D4_000001D0:
    fcmpo cr0, f29, f26
    bge lbl_fn_8032A3D4_000001DC
    fadds f29, f29, f25
lbl_fn_8032A3D4_000001DC:
    psq_l f1, 0x0(r29), 0, 0
    fmr f30, f22
    lfs f2, 0x1c(r1)
    psq_st f1, 0x0(r26), 0, 0
    stfs f2, 0x28(r1)
lbl_fn_8032A3D4_000001F0:
    addi r25, r25, 0x1
    cmpwi r25, 0x2
    blt lbl_fn_8032A3D4_000000F4
    addi r3, r1, 0x20
    lfs f2, 0x28(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r23), 0, 0
    stfs f2, 0x8(r23)
    stfs f29, 0x0(r24)
    psq_l f31, 0x198(r1), 0, 0
    lfd f31, 0x190(r1)
    psq_l f30, 0x188(r1), 0, 0
    lfd f30, 0x180(r1)
    psq_l f29, 0x178(r1), 0, 0
    lfd f29, 0x170(r1)
    psq_l f28, 0x168(r1), 0, 0
    lfd f28, 0x160(r1)
    psq_l f27, 0x158(r1), 0, 0
    lfd f27, 0x150(r1)
    psq_l f26, 0x148(r1), 0, 0
    lfd f26, 0x140(r1)
    psq_l f25, 0x138(r1), 0, 0
    lfd f25, 0x130(r1)
    psq_l f24, 0x128(r1), 0, 0
    lfd f24, 0x120(r1)
    psq_l f23, 0x118(r1), 0, 0
    lfd f23, 0x110(r1)
    psq_l f22, 0x108(r1), 0, 0
    lfd f22, 0x100(r1)
    addi r11, r1, 0x100
    bl _restgpr_22
    lwz r0, 0x1a4(r1)
    mtlr r0
    addi r1, r1, 0x1a0
    blr
}

asm void fn_8032A650(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x50
    stfd f31, 0x50(r1)
    psq_st f31, 0x58(r1), 0, 0
    bl _savegpr_23
    lis r4, lbl_807C7030@ha
    mr r27, r5
    addi r4, r4, lbl_807C7030@l
    mr r26, r3
    psq_l f1, 0x0(r4), 0, 0
    addi r8, r1, 0x14
    lfs f2, 0x8(r4)
    mr r28, r6
    stfs f2, 0x8(r3)
    mr r29, r7
    li r5, 0x1
    psq_st f1, 0x0(r3), 0, 0
    lwz r3, lbl_8087F8A0
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    psq_st f1, 0x0(r8), 0, 0
    lwz r6, 0x48(r3)
    stfs f2, 0x1c(r1)
    b lbl_fn_8032A650_00000348
lbl_fn_8032A650_000002E4:
    lwz r4, 0x38(r6)
    li r3, 0x0
    rlwinm r0, r4, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_8032A650_00000308
    clrlwi r0, r4, 31
    cmplwi r0, 0x1
    beq lbl_fn_8032A650_00000308
    li r3, 0x1
lbl_fn_8032A650_00000308:
    cmpwi r3, 0x0
    beq lbl_fn_8032A650_00000344
    lfs f3, 0x14(r1)
    addi r5, r5, 0x1
    lfs f0, 0x528(r6)
    lfs f5, 0x18(r1)
    fadds f6, f3, f0
    lfs f4, 0x52c(r6)
    lfs f3, 0x1c(r1)
    lfs f0, 0x530(r6)
    fadds f4, f5, f4
    stfs f6, 0x14(r1)
    fadds f0, f3, f0
    stfs f4, 0x18(r1)
    stfs f0, 0x1c(r1)
lbl_fn_8032A650_00000344:
    lwz r6, 0x14ac(r6)
lbl_fn_8032A650_00000348:
    cmpwi r6, 0x0
    bne lbl_fn_8032A650_000002E4
    xoris r3, r5, 0x8000
    lis r0, 0x4330
    lis r4, lbl_80749B80@ha
    stw r3, 0x24(r1)
    lfd f3, lbl_80749B80@l(r4)
    lis r24, lbl_80749B00@ha
    stw r0, 0x20(r1)
    addi r24, r24, lbl_80749B00@l
    lfs f5, lbl_80884F1C
    li r31, 0x0
    lfd f0, 0x20(r1)
    li r30, 0x0
    lfs f4, 0x14(r1)
    li r25, 0x0
    fsubs f6, f0, f3
    lfs f3, 0x18(r1)
    lfs f0, 0x1c(r1)
    lfs f31, lbl_80884F10
    fdivs f5, f5, f6
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    fmuls f0, f0, f5
    stfs f4, 0x14(r1)
    stfs f3, 0x18(r1)
    stfs f0, 0x1c(r1)
lbl_fn_8032A650_000003B4:
    add r4, r24, r25
    lwz r0, 0x8(r4)
    cmpw r0, r28
    bne lbl_fn_8032A650_00000484
    lwz r0, 0x4(r4)
    cmpw r0, r29
    bne lbl_fn_8032A650_00000484
    lwz r3, lbl_8087F430
    li r5, 0x0
    lwz r4, 0x0(r4)
    li r7, 0x0
    lwz r6, 0x10d8(r3)
    lwz r0, 0x78(r6)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8032A650_0000041C
lbl_fn_8032A650_000003F4:
    lwz r3, 0x7c(r6)
    lwzx r0, r3, r7
    cmpw r4, r0
    bne lbl_fn_8032A650_00000410
    mulli r0, r5, 0x28
    add r23, r3, r0
    b lbl_fn_8032A650_00000420
lbl_fn_8032A650_00000410:
    addi r7, r7, 0x28
    addi r5, r5, 0x1
    bdnz lbl_fn_8032A650_000003F4
lbl_fn_8032A650_0000041C:
    li r23, 0x0
lbl_fn_8032A650_00000420:
    cmpwi r23, 0x0
    beq lbl_fn_8032A650_00000484
    lfs f3, 0xc(r23)
    addi r3, r1, 0x8
    lfs f0, 0x1c(r1)
    lfs f5, 0x8(r23)
    fsubs f6, f3, f0
    lfs f4, 0x18(r1)
    lfs f3, 0x4(r23)
    lfs f0, 0x14(r1)
    fsubs f4, f5, f4
    stfs f6, 0x10(r1)
    fsubs f0, f3, f0
    stfs f4, 0xc(r1)
    stfs f0, 0x8(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f31
    fmr f0, f1
    ble lbl_fn_8032A650_00000484
    psq_l f1, 0x4(r23), 0, 0
    fmr f31, f0
    lfs f2, 0xc(r23)
    stfs f2, 0x8(r26)
    psq_st f1, 0x0(r26), 0, 0
    lwz r31, 0x0(r23)
lbl_fn_8032A650_00000484:
    addi r30, r30, 0x1
    addi r25, r25, 0xc
    cmpwi r30, 0xa
    blt lbl_fn_8032A650_000003B4
    cmpwi r27, 0x0
    beq lbl_fn_8032A650_000004A0
    stw r31, 0x0(r27)
lbl_fn_8032A650_000004A0:
    addi r11, r1, 0x50
    psq_l f31, 0x58(r1), 0, 0
    lfd f31, 0x50(r1)
    bl _restgpr_23
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_8032A894(void)
{
    nofralloc
    lis r4, lbl_807C7030@ha
    lis r7, lbl_80749B00@ha
    addi r4, r4, lbl_807C7030@l
    li r0, 0x2
    psq_l f1, 0x0(r4), 0, 0
    addi r7, r7, lbl_80749B00@l
    lfs f2, 0x8(r4)
    li r9, 0x0
    stfs f2, 0x8(r3)
    li r4, 0x0
    psq_st f1, 0x0(r3), 0, 0
    mtctr r0
lbl_fn_8032A894_000004F0:
    lwz r0, 0x0(r7)
    cmpw r5, r0
    bne lbl_fn_8032A894_00000510
    cmpwi r4, 0x9
    bne lbl_fn_8032A894_0000050C
    li r9, 0x258
    b lbl_fn_8032A894_00000510
lbl_fn_8032A894_0000050C:
    lwz r9, 0xc(r7)
lbl_fn_8032A894_00000510:
    lwz r0, 0xc(r7)
    addi r4, r4, 0x1
    cmpw r5, r0
    bne lbl_fn_8032A894_00000534
    cmpwi r4, 0x9
    bne lbl_fn_8032A894_00000530
    li r9, 0x258
    b lbl_fn_8032A894_00000534
lbl_fn_8032A894_00000530:
    lwz r9, 0x18(r7)
lbl_fn_8032A894_00000534:
    lwz r0, 0x18(r7)
    addi r4, r4, 0x1
    cmpw r5, r0
    bne lbl_fn_8032A894_00000558
    cmpwi r4, 0x9
    bne lbl_fn_8032A894_00000554
    li r9, 0x258
    b lbl_fn_8032A894_00000558
lbl_fn_8032A894_00000554:
    lwz r9, 0x24(r7)
lbl_fn_8032A894_00000558:
    lwz r0, 0x24(r7)
    addi r4, r4, 0x1
    cmpw r5, r0
    bne lbl_fn_8032A894_0000057C
    cmpwi r4, 0x9
    bne lbl_fn_8032A894_00000578
    li r9, 0x258
    b lbl_fn_8032A894_0000057C
lbl_fn_8032A894_00000578:
    lwz r9, 0x30(r7)
lbl_fn_8032A894_0000057C:
    lwz r0, 0x30(r7)
    addi r4, r4, 0x1
    cmpw r5, r0
    bne lbl_fn_8032A894_000005A0
    cmpwi r4, 0x9
    bne lbl_fn_8032A894_0000059C
    li r9, 0x258
    b lbl_fn_8032A894_000005A0
lbl_fn_8032A894_0000059C:
    lwz r9, 0x3c(r7)
lbl_fn_8032A894_000005A0:
    addi r7, r7, 0x3c
    addi r4, r4, 0x1
    bdnz lbl_fn_8032A894_000004F0
    lwz r4, lbl_8087F430
    li r5, 0x0
    li r8, 0x0
    lwz r7, 0x10d8(r4)
    lwz r0, 0x78(r7)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8032A894_000005F4
lbl_fn_8032A894_000005CC:
    lwz r4, 0x7c(r7)
    lwzx r0, r4, r8
    cmpw r9, r0
    bne lbl_fn_8032A894_000005E8
    mulli r0, r5, 0x28
    add r4, r4, r0
    b lbl_fn_8032A894_000005F8
lbl_fn_8032A894_000005E8:
    addi r8, r8, 0x28
    addi r5, r5, 0x1
    bdnz lbl_fn_8032A894_000005CC
lbl_fn_8032A894_000005F4:
    li r4, 0x0
lbl_fn_8032A894_000005F8:
    cmpwi r4, 0x0
    beq lbl_fn_8032A894_00000610
    psq_l f1, 0x4(r4), 0, 0
    lfs f2, 0xc(r4)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
lbl_fn_8032A894_00000610:
    cmpwi r6, 0x0
    beqlr
    stw r9, 0x0(r6)
    blr
}

asm void fn_8032A9F4(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r3, r1, 0x2c
    stmw r26, 0x38(r1)
    lis r29, lbl_807C7030@ha
    mr r30, r4
    mr r26, r5
    mr r31, r6
    addi r4, r29, lbl_807C7030@l
    li r28, 0x0
    li r27, 0x0
    bl fn_8001047C
    addi r3, r1, 0x20
    addi r4, r29, lbl_807C7030@l
    bl fn_8001047C
    addi r3, r1, 0x14
    addi r4, r29, lbl_807C7030@l
    bl fn_8001047C
    lis r3, lbl_80749B00@ha
    li r0, 0xa
    addi r3, r3, lbl_80749B00@l
    li r4, 0x0
    mtctr r0
lbl_fn_8032A9F4_00000680:
    lwz r0, 0x0(r3)
    cmpw r26, r0
    bne lbl_fn_8032A9F4_000006D0
    addi r3, r4, 0x1
    cmpwi r3, 0xa
    bne lbl_fn_8032A9F4_0000069C
    li r3, 0x0
lbl_fn_8032A9F4_0000069C:
    mulli r0, r3, 0xc
    addi r4, r3, 0x1
    lis r3, lbl_80749B00@ha
    cmpwi r4, 0xa
    addi r3, r3, lbl_80749B00@l
    lwzx r27, r3, r0
    bne lbl_fn_8032A9F4_000006BC
    li r4, 0x0
lbl_fn_8032A9F4_000006BC:
    mulli r0, r4, 0xc
    lis r3, lbl_80749B00@ha
    addi r3, r3, lbl_80749B00@l
    lwzx r28, r3, r0
    b lbl_fn_8032A9F4_000006DC
lbl_fn_8032A9F4_000006D0:
    addi r3, r3, 0xc
    addi r4, r4, 0x1
    bdnz lbl_fn_8032A9F4_00000680
lbl_fn_8032A9F4_000006DC:
    bl fn_80121F00
    bl fn_8013C504
    mr r4, r26
    bl fn_800EC204
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_8032A9F4_00000704
    addi r3, r1, 0x14
    addi r4, r4, 0x4
    bl fn_8000D124
lbl_fn_8032A9F4_00000704:
    bl fn_80121F00
    bl fn_8013C504
    mr r4, r27
    bl fn_800EC204
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_8032A9F4_0000072C
    addi r3, r1, 0x2c
    addi r4, r4, 0x4
    bl fn_8000D124
lbl_fn_8032A9F4_0000072C:
    bl fn_80121F00
    bl fn_8013C504
    mr r4, r28
    bl fn_800EC204
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_8032A9F4_00000754
    addi r3, r1, 0x20
    addi r4, r4, 0x4
    bl fn_8000D124
lbl_fn_8032A9F4_00000754:
    addi r3, r1, 0x8
    bl fn_8032AB90
    addi r3, r1, 0x8
    addi r4, r1, 0x14
    bl fn_8032AC1C
    addi r3, r1, 0x8
    addi r4, r1, 0x2c
    bl fn_8032AC1C
    addi r3, r1, 0x8
    addi r4, r1, 0x20
    bl fn_8032AC1C
    mr r3, r30
    addi r4, r1, 0x8
    bl fn_8032AF90
    cmpwi r31, 0x0
    beq lbl_fn_8032A9F4_00000798
    stw r28, 0x0(r31)
lbl_fn_8032A9F4_00000798:
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_8032ABA4
    lmw r26, 0x38(r1)
    li r3, 0x1
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8032AB90(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    blr
}

asm void fn_8032ABA4(void)
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
    beq lbl_fn_8032ABA4_0000082C
    beq lbl_fn_8032ABA4_0000081C
    beq lbl_fn_8032ABA4_0000081C
    lwz r4, 0x0(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8032ABA4_0000081C
    lwz r0, 0x4(r3)
    subf r0, r0, r0
    stw r0, 0x4(r3)
    mr r3, r4
    bl dtor_80084684
lbl_fn_8032ABA4_0000081C:
    cmpwi r31, 0x0
    ble lbl_fn_8032ABA4_0000082C
    mr r3, r30
    bl dtor_80084684
lbl_fn_8032ABA4_0000082C:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8032AC1C(void)
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
    lwz r31, 0x8(r3)
    cmplw r0, r31
    bge lbl_fn_8032AC1C_000008AC
    mulli r0, r0, 0xc
    lwz r5, 0x0(r3)
    add. r5, r5, r0
    beq lbl_fn_8032AC1C_0000089C
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    lfs f2, 0x8(r4)
    stfs f2, 0x8(r5)
lbl_fn_8032AC1C_0000089C:
    lwz r4, 0x4(r3)
    addi r0, r4, 0x1
    stw r0, 0x4(r3)
    b lbl_fn_8032AC1C_00000B9C
lbl_fn_8032AC1C_000008AC:
    lis r3, 0x1555
    li r4, 0x1
    addi r0, r3, 0x5555
    stw r4, 0x1c(r1)
    subf r0, r31, r0
    cmplwi r0, 0x1
    bge lbl_fn_8032AC1C_000008EC
    lis r4, lbl_80749D10@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80749D10@l
    addi r3, r3, __files@l
    addi r4, r4, 0x46
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8032AC1C_000008EC:
    lis r3, 0x71c
    addi r0, r3, 0x71c7
    cmplw r31, r0
    bge lbl_fn_8032AC1C_00000924
    addi r4, r31, 0x1
    lis r3, 0xcccd
    slwi r0, r4, 2
    subf r0, r4, r0
    subi r3, r3, 0x3333
    mulhwu r0, r3, r0
    srwi r0, r0, 2
    stw r0, 0x14(r1)
    cmplwi r0, 0x1
    b lbl_fn_8032AC1C_00000944
lbl_fn_8032AC1C_00000924:
    lis r3, 0xe39
    subi r0, r3, 0x1c72
    cmplw r31, r0
    bge lbl_fn_8032AC1C_00000944
    addi r0, r31, 0x1
    srwi r0, r0, 1
    stw r0, 0x18(r1)
    cmplwi r0, 0x1
lbl_fn_8032AC1C_00000944:
    li r4, 0x0
    addi r5, r29, 0x8
    lis r3, 0x1555
    stw r4, 0x20(r1)
    addi r0, r3, 0x5555
    stw r4, 0x24(r1)
    stw r4, 0x28(r1)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    lwz r3, 0x4(r29)
    lwz r31, 0x8(r29)
    addi r3, r3, 0x1
    subf r3, r31, r3
    subf r0, r31, r0
    cmplw r3, r0
    stw r3, 0x8(r1)
    ble lbl_fn_8032AC1C_000009AC
    lis r4, lbl_80749D10@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80749D10@l
    addi r3, r3, __files@l
    addi r4, r4, 0x46
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8032AC1C_000009AC:
    lis r3, 0x71c
    addi r0, r3, 0x71c7
    cmplw r31, r0
    bge lbl_fn_8032AC1C_000009FC
    addi r5, r31, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x8(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r4, r3, r4
    addi r3, r1, 0x10
    srwi r4, r4, 2
    stw r4, 0x10(r1)
    cmplw r4, r0
    bge lbl_fn_8032AC1C_000009F0
    addi r3, r1, 0x8
lbl_fn_8032AC1C_000009F0:
    lwz r0, 0x0(r3)
    add r28, r31, r0
    b lbl_fn_8032AC1C_00000A40
lbl_fn_8032AC1C_000009FC:
    lis r3, 0xe39
    subi r0, r3, 0x1c72
    cmplw r31, r0
    bge lbl_fn_8032AC1C_00000A38
    addi r3, r31, 0x1
    lwz r0, 0x8(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_8032AC1C_00000A2C
    addi r3, r1, 0x8
lbl_fn_8032AC1C_00000A2C:
    lwz r0, 0x0(r3)
    add r28, r31, r0
    b lbl_fn_8032AC1C_00000A40
lbl_fn_8032AC1C_00000A38:
    lis r3, 0x1555
    addi r28, r3, 0x5555
lbl_fn_8032AC1C_00000A40:
    lis r3, 0x1555
    addi r0, r3, 0x5555
    cmplw r28, r0
    ble lbl_fn_8032AC1C_00000A74
    lis r4, lbl_80749D10@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80749D10@l
    addi r3, r3, __files@l
    addi r4, r4, 0x46
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8032AC1C_00000A74:
    mulli r3, r28, 0xc
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_8032AC1C_00000AA8
    lis r3, __files@ha
    lis r4, lbl_80788D00@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80788D00@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8032AC1C_00000AA8:
    lwz r0, 0x24(r1)
    stw r31, 0x20(r1)
    mulli r3, r0, 0xc
    stw r28, 0x28(r1)
    lwz r0, 0x4(r29)
    stw r0, 0x30(r1)
    mulli r0, r0, 0xc
    add r0, r31, r0
    add. r3, r3, r0
    beq lbl_fn_8032AC1C_00000AE0
    psq_l f1, 0x0(r30), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lfs f2, 0x8(r30)
    stfs f2, 0x8(r3)
lbl_fn_8032AC1C_00000AE0:
    lwz r3, 0x24(r1)
    lwz r0, 0x30(r1)
    addi r3, r3, 0x1
    stw r3, 0x24(r1)
    mulli r0, r0, 0xc
    lwz r3, 0x20(r1)
    lwz r4, 0x4(r29)
    lwz r7, 0x0(r29)
    mulli r4, r4, 0xc
    add r6, r3, r0
    add r5, r7, r4
    b lbl_fn_8032AC1C_00000B44
lbl_fn_8032AC1C_00000B10:
    subic. r6, r6, 0xc
    subi r5, r5, 0xc
    beq lbl_fn_8032AC1C_00000B2C
    lfs f2, 0x8(r5)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x8(r6)
lbl_fn_8032AC1C_00000B2C:
    lwz r4, 0x30(r1)
    lwz r3, 0x24(r1)
    subi r0, r4, 0x1
    stw r0, 0x30(r1)
    addi r0, r3, 0x1
    stw r0, 0x24(r1)
lbl_fn_8032AC1C_00000B44:
    cmplw r7, r5
    blt lbl_fn_8032AC1C_00000B10
    li r4, 0x0
    stw r4, 0x4(r29)
    addic. r0, r1, 0x20
    lwz r3, 0x8(r29)
    lwz r0, 0x28(r1)
    stw r0, 0x8(r29)
    stw r3, 0x28(r1)
    lwz r0, 0x20(r1)
    lwz r3, 0x0(r29)
    stw r0, 0x0(r29)
    stw r3, 0x20(r1)
    lwz r0, 0x24(r1)
    stw r0, 0x4(r29)
    stw r4, 0x24(r1)
    beq lbl_fn_8032AC1C_00000B9C
    lwz r3, 0x20(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8032AC1C_00000B9C
    stw r4, 0x24(r1)
    bl dtor_80084684
lbl_fn_8032AC1C_00000B9C:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    lwz r28, 0x40(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8032AF90(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_27
    lwz r31, 0x4(r4)
    mr r29, r3
    stw r31, 0x0(r3)
    addi r3, r3, 0x20
    lwz r30, 0x0(r4)
    subi r4, r31, 0x1
    bl fn_8032B314
    addi r3, r29, 0x2c
    subi r4, r31, 0x1
    bl fn_8032B314
    addi r3, r29, 0x38
    subi r4, r31, 0x1
    bl fn_8032B314
    mr r4, r31
    addi r3, r1, 0x8
    bl fn_8032B6F8
    mr r4, r31
    addi r3, r1, 0x14
    bl fn_8032B6F8
    mr r4, r31
    addi r3, r1, 0x20
    bl fn_8032B6F8
    cmpwi cr1, r31, 0x0
    li r3, 0x0
    li r5, 0x0
    ble cr1, lbl_fn_8032AF90_00000E50
    cmpwi r31, 0x8
    subi r6, r31, 0x8
    ble lbl_fn_8032AF90_00000E04
    li r7, 0x0
    blt cr1, lbl_fn_8032AF90_00000C60
    lis r4, 0x8000
    subi r0, r4, 0x2
    cmpw r31, r0
    bgt lbl_fn_8032AF90_00000C60
    li r7, 0x1
lbl_fn_8032AF90_00000C60:
    cmpwi r7, 0x0
    beq lbl_fn_8032AF90_00000E04
    addi r0, r6, 0x7
    mr r4, r30
    srwi r0, r0, 3
    mtctr r0
    cmpwi r6, 0x0
    ble lbl_fn_8032AF90_00000E04
lbl_fn_8032AF90_00000C80:
    lwz r6, 0x8(r1)
    addi r3, r3, 0x8
    lfs f0, 0x0(r4)
    stfsx f0, r6, r5
    lwz r6, 0x14(r1)
    lfs f0, 0x4(r4)
    stfsx f0, r6, r5
    lwz r6, 0x20(r1)
    lfs f0, 0x8(r4)
    stfsx f0, r6, r5
    lwz r0, 0x8(r1)
    lfs f0, 0xc(r4)
    add r6, r0, r5
    stfs f0, 0x4(r6)
    lwz r0, 0x14(r1)
    lfs f0, 0x10(r4)
    add r6, r0, r5
    stfs f0, 0x4(r6)
    lwz r0, 0x20(r1)
    lfs f0, 0x14(r4)
    add r6, r0, r5
    stfs f0, 0x4(r6)
    lwz r0, 0x8(r1)
    lfs f0, 0x18(r4)
    add r6, r0, r5
    stfs f0, 0x8(r6)
    lwz r0, 0x14(r1)
    lfs f0, 0x1c(r4)
    add r6, r0, r5
    stfs f0, 0x8(r6)
    lwz r0, 0x20(r1)
    lfs f0, 0x20(r4)
    add r6, r0, r5
    stfs f0, 0x8(r6)
    lwz r0, 0x8(r1)
    lfs f0, 0x24(r4)
    add r6, r0, r5
    stfs f0, 0xc(r6)
    lwz r0, 0x14(r1)
    lfs f0, 0x28(r4)
    add r6, r0, r5
    stfs f0, 0xc(r6)
    lwz r0, 0x20(r1)
    lfs f0, 0x2c(r4)
    add r6, r0, r5
    stfs f0, 0xc(r6)
    lwz r0, 0x8(r1)
    lfs f0, 0x30(r4)
    add r6, r0, r5
    stfs f0, 0x10(r6)
    lwz r0, 0x14(r1)
    lfs f0, 0x34(r4)
    add r6, r0, r5
    stfs f0, 0x10(r6)
    lwz r0, 0x20(r1)
    lfs f0, 0x38(r4)
    add r6, r0, r5
    stfs f0, 0x10(r6)
    lwz r0, 0x8(r1)
    lfs f0, 0x3c(r4)
    add r6, r0, r5
    stfs f0, 0x14(r6)
    lwz r0, 0x14(r1)
    lfs f0, 0x40(r4)
    add r6, r0, r5
    stfs f0, 0x14(r6)
    lwz r0, 0x20(r1)
    lfs f0, 0x44(r4)
    add r6, r0, r5
    stfs f0, 0x14(r6)
    lwz r0, 0x8(r1)
    lfs f0, 0x48(r4)
    add r6, r0, r5
    stfs f0, 0x18(r6)
    lwz r0, 0x14(r1)
    lfs f0, 0x4c(r4)
    add r6, r0, r5
    stfs f0, 0x18(r6)
    lwz r0, 0x20(r1)
    lfs f0, 0x50(r4)
    add r6, r0, r5
    stfs f0, 0x18(r6)
    lwz r0, 0x8(r1)
    lfs f0, 0x54(r4)
    add r6, r0, r5
    stfs f0, 0x1c(r6)
    lwz r0, 0x14(r1)
    lfs f0, 0x58(r4)
    add r6, r0, r5
    stfs f0, 0x1c(r6)
    lwz r0, 0x20(r1)
    lfs f0, 0x5c(r4)
    addi r4, r4, 0x60
    add r6, r0, r5
    addi r5, r5, 0x20
    stfs f0, 0x1c(r6)
    bdnz lbl_fn_8032AF90_00000C80
lbl_fn_8032AF90_00000E04:
    mulli r5, r3, 0xc
    subf r0, r3, r31
    slwi r4, r3, 2
    add r5, r30, r5
    mtctr r0
    cmpw r3, r31
    bge lbl_fn_8032AF90_00000E50
lbl_fn_8032AF90_00000E20:
    lwz r3, 0x8(r1)
    lfs f0, 0x0(r5)
    stfsx f0, r3, r4
    lwz r3, 0x14(r1)
    lfs f0, 0x4(r5)
    stfsx f0, r3, r4
    lwz r3, 0x20(r1)
    lfs f0, 0x8(r5)
    addi r5, r5, 0xc
    stfsx f0, r3, r4
    addi r4, r4, 0x4
    bdnz lbl_fn_8032AF90_00000E20
lbl_fn_8032AF90_00000E50:
    lwz r5, 0x20(r29)
    mr r3, r29
    lwz r4, 0x8(r1)
    bl fn_8032B7F0
    lwz r5, 0x2c(r29)
    mr r3, r29
    lwz r4, 0x14(r1)
    bl fn_8032B7F0
    lwz r5, 0x38(r29)
    mr r3, r29
    lwz r4, 0x20(r1)
    bl fn_8032B7F0
    subi r4, r31, 0x1
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x8(r30)
    mulli r0, r4, 0xc
    stfs f2, 0x10(r29)
    addi r3, r29, 0x44
    lfs f0, lbl_80884F10
    psq_st f1, 0x8(r29), 0, 0
    add r5, r30, r0
    psq_l f1, 0x0(r5), 0, 0
    lfs f2, 0x8(r5)
    stfs f2, 0x1c(r29)
    psq_st f1, 0x14(r29), 0, 0
    stfs f0, 0x4(r29)
    bl fn_8032BE88
    subi r31, r31, 0x1
    li r27, 0x0
    li r30, 0x0
    b lbl_fn_8032AF90_00000EFC
lbl_fn_8032AF90_00000ECC:
    lwz r28, 0x44(r29)
    mr r3, r29
    mr r4, r27
    bl fn_8032C1EC
    stfsx f1, r28, r30
    addi r27, r27, 0x1
    lwz r3, 0x44(r29)
    lfs f3, 0x4(r29)
    lfsx f0, r3, r30
    addi r30, r30, 0x4
    fadds f0, f3, f0
    stfs f0, 0x4(r29)
lbl_fn_8032AF90_00000EFC:
    cmpw r27, r31
    blt lbl_fn_8032AF90_00000ECC
    addi r3, r1, 0x20
    li r4, -0x1
    bl fn_8000D844
    addi r3, r1, 0x14
    li r4, -0x1
    bl fn_8000D844
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_8000D844
    addi r11, r1, 0x50
    bl _restgpr_27
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8032B314(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    stw r30, 0x58(r1)
    stw r29, 0x54(r1)
    mr r29, r3
    stw r28, 0x50(r1)
    lwz r5, 0x4(r3)
    cmplw r4, r5
    ble lbl_fn_8032B314_000012F4
    lwz r6, 0x8(r3)
    subf r30, r5, r4
    cmplw r30, r6
    bgt lbl_fn_8032B314_00000F88
    subf r0, r30, r6
    cmplw r5, r0
    ble lbl_fn_8032B314_00000FF8
lbl_fn_8032B314_00000F88:
    lwz r5, 0x4(r3)
    lis r4, 0x1000
    lwz r28, 0x8(r3)
    subi r0, r4, 0x1
    add r3, r5, r30
    subf r3, r6, r3
    subf r0, r28, r0
    cmplw r3, r0
    ble lbl_fn_8032B314_00000FD0
    lis r4, lbl_80749D10@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80749D10@l
    addi r3, r3, __files@l
    addi r4, r4, 0x46
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8032B314_00000FD0:
    lis r3, 0x555
    addi r0, r3, 0x5555
    cmplw r28, r0
    bge lbl_fn_8032B314_00000FE4
    b lbl_fn_8032B314_00001050
lbl_fn_8032B314_00000FE4:
    lis r3, 0xaab
    subi r0, r3, 0x5556
    cmplw r28, r0
    bge lbl_fn_8032B314_00001050
    b lbl_fn_8032B314_00001050
lbl_fn_8032B314_00000FF8:
    lwz r4, 0x0(r3)
    slwi r0, r5, 4
    lfs f3, 0x18(r1)
    add r5, r4, r0
    lfs f2, 0x1c(r1)
    lfs f1, 0x20(r1)
    lfs f0, 0x24(r1)
    mtctr r30
    cmpwi r30, 0x0
    beq lbl_fn_8032B314_00001304
lbl_fn_8032B314_00001020:
    cmpwi r5, 0x0
    beq lbl_fn_8032B314_00001038
    stfs f3, 0x0(r5)
    stfs f2, 0x4(r5)
    stfs f1, 0x8(r5)
    stfs f0, 0xc(r5)
lbl_fn_8032B314_00001038:
    lwz r4, 0x4(r3)
    addi r5, r5, 0x10
    addi r0, r4, 0x1
    stw r0, 0x4(r3)
    bdnz lbl_fn_8032B314_00001020
    b lbl_fn_8032B314_00001304
lbl_fn_8032B314_00001050:
    li r5, 0x0
    addi r4, r29, 0x8
    lis r3, 0x1000
    stw r5, 0x38(r1)
    subi r0, r3, 0x1
    stw r5, 0x3c(r1)
    stw r5, 0x40(r1)
    stw r4, 0x44(r1)
    stw r5, 0x48(r1)
    lwz r3, 0x4(r29)
    lwz r31, 0x8(r29)
    add r3, r3, r30
    subf r3, r31, r3
    subf r0, r31, r0
    cmplw r3, r0
    stw r3, 0x10(r1)
    ble lbl_fn_8032B314_000010B8
    lis r4, lbl_80749D10@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80749D10@l
    addi r3, r3, __files@l
    addi r4, r4, 0x46
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8032B314_000010B8:
    lis r3, 0x555
    addi r0, r3, 0x5555
    cmplw r31, r0
    bge lbl_fn_8032B314_00001108
    addi r5, r31, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x10(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r4, r3, r4
    addi r3, r1, 0x8
    srwi r4, r4, 2
    stw r4, 0x8(r1)
    cmplw r4, r0
    bge lbl_fn_8032B314_000010FC
    addi r3, r1, 0x10
lbl_fn_8032B314_000010FC:
    lwz r0, 0x0(r3)
    add r31, r31, r0
    b lbl_fn_8032B314_0000114C
lbl_fn_8032B314_00001108:
    lis r3, 0xaab
    subi r0, r3, 0x5556
    cmplw r31, r0
    bge lbl_fn_8032B314_00001144
    addi r3, r31, 0x1
    lwz r0, 0x10(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_8032B314_00001138
    addi r3, r1, 0x10
lbl_fn_8032B314_00001138:
    lwz r0, 0x0(r3)
    add r31, r31, r0
    b lbl_fn_8032B314_0000114C
lbl_fn_8032B314_00001144:
    lis r3, 0x1000
    subi r31, r3, 0x1
lbl_fn_8032B314_0000114C:
    lis r3, 0x1000
    subi r0, r3, 0x1
    cmplw r31, r0
    ble lbl_fn_8032B314_00001180
    lis r4, lbl_80749D10@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80749D10@l
    addi r3, r3, __files@l
    addi r4, r4, 0x46
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8032B314_00001180:
    slwi r3, r31, 4
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r28, r3
    bne lbl_fn_8032B314_000011B4
    lis r3, __files@ha
    lis r4, lbl_80779F68@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80779F68@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8032B314_000011B4:
    lwz r0, 0x3c(r1)
    stw r28, 0x38(r1)
    slwi r3, r0, 4
    lfs f3, 0x28(r1)
    stw r31, 0x40(r1)
    lfs f2, 0x2c(r1)
    lwz r0, 0x4(r29)
    stw r0, 0x48(r1)
    slwi r0, r0, 4
    lfs f1, 0x30(r1)
    add r0, r28, r0
    lfs f0, 0x34(r1)
    add r4, r3, r0
    mtctr r30
    cmpwi r30, 0x0
    beq lbl_fn_8032B314_00001220
lbl_fn_8032B314_000011F4:
    cmpwi r4, 0x0
    beq lbl_fn_8032B314_0000120C
    stfs f3, 0x0(r4)
    stfs f2, 0x4(r4)
    stfs f1, 0x8(r4)
    stfs f0, 0xc(r4)
lbl_fn_8032B314_0000120C:
    lwz r3, 0x3c(r1)
    addi r4, r4, 0x10
    addi r0, r3, 0x1
    stw r0, 0x3c(r1)
    bdnz lbl_fn_8032B314_000011F4
lbl_fn_8032B314_00001220:
    lwz r0, 0x4(r29)
    lwz r7, 0x0(r29)
    slwi r0, r0, 4
    lwz r3, 0x48(r1)
    add r6, r7, r0
    lwz r4, 0x38(r1)
    addi r0, r6, 0xf
    slwi r3, r3, 4
    subf r0, r7, r0
    srwi r0, r0, 4
    add r5, r4, r3
    mtctr r0
    cmplw r6, r7
    ble lbl_fn_8032B314_000012A0
lbl_fn_8032B314_00001258:
    subic. r5, r5, 0x10
    subi r6, r6, 0x10
    beq lbl_fn_8032B314_00001284
    lfs f0, 0x0(r6)
    stfs f0, 0x0(r5)
    lfs f0, 0x4(r6)
    stfs f0, 0x4(r5)
    lfs f0, 0x8(r6)
    stfs f0, 0x8(r5)
    lfs f0, 0xc(r6)
    stfs f0, 0xc(r5)
lbl_fn_8032B314_00001284:
    lwz r4, 0x48(r1)
    lwz r3, 0x3c(r1)
    subi r0, r4, 0x1
    stw r0, 0x48(r1)
    addi r0, r3, 0x1
    stw r0, 0x3c(r1)
    bdnz lbl_fn_8032B314_00001258
lbl_fn_8032B314_000012A0:
    li r4, 0x0
    stw r4, 0x4(r29)
    addic. r0, r1, 0x38
    lwz r3, 0x8(r29)
    lwz r0, 0x40(r1)
    stw r0, 0x8(r29)
    stw r3, 0x40(r1)
    lwz r0, 0x38(r1)
    lwz r3, 0x0(r29)
    stw r0, 0x0(r29)
    stw r3, 0x38(r1)
    lwz r0, 0x3c(r1)
    stw r0, 0x4(r29)
    stw r4, 0x3c(r1)
    beq lbl_fn_8032B314_00001304
    lwz r3, 0x38(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8032B314_00001304
    stw r4, 0x3c(r1)
    bl dtor_80084684
    b lbl_fn_8032B314_00001304
lbl_fn_8032B314_000012F4:
    bge lbl_fn_8032B314_00001304
    subf r0, r4, r5
    subf r0, r0, r5
    stw r0, 0x4(r3)
lbl_fn_8032B314_00001304:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    lwz r28, 0x50(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_8032B6F8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    li r0, 0x0
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    beq lbl_fn_8032B6F8_000013F8
    lis r3, 0x4000
    subi r0, r3, 0x1
    cmplw r4, r0
    ble lbl_fn_8032B6F8_00001394
    lis r4, lbl_80749D10@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80749D10@l
    addi r3, r3, __files@l
    addi r4, r4, 0x46
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8032B6F8_00001394:
    slwi r30, r29, 2
    mr r3, r30
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_8032B6F8_000013CC
    lis r3, __files@ha
    lis r4, lbl_80775A88@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8032B6F8_000013CC:
    lwz r0, 0x4(r28)
    mr r5, r30
    stw r31, 0x0(r28)
    li r4, 0x0
    slwi r0, r0, 2
    stw r29, 0x8(r28)
    add r3, r31, r0
    bl memset
    lwz r0, 0x4(r28)
    add r0, r0, r29
    stw r0, 0x4(r28)
lbl_fn_8032B6F8_000013F8:
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

asm void fn_8032B7F0(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_26
    lwz r28, 0x0(r3)
    li r0, 0x0
    stw r0, 0x20(r1)
    mr r29, r3
    cmpwi r28, 0x0
    mr r30, r4
    stw r0, 0x24(r1)
    mr r31, r5
    stw r0, 0x28(r1)
    beq lbl_fn_8032B7F0_000014F0
    lis r3, 0x4000
    subi r0, r3, 0x1
    cmplw r28, r0
    ble lbl_fn_8032B7F0_0000148C
    lis r4, lbl_80749D10@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80749D10@l
    addi r3, r3, __files@l
    addi r4, r4, 0x46
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8032B7F0_0000148C:
    slwi r26, r28, 2
    mr r3, r26
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_fn_8032B7F0_000014C4
    lis r3, __files@ha
    lis r4, lbl_80775A88@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8032B7F0_000014C4:
    lwz r0, 0x24(r1)
    mr r5, r26
    stw r27, 0x20(r1)
    li r4, 0x0
    slwi r0, r0, 2
    stw r28, 0x28(r1)
    add r3, r27, r0
    bl memset
    lwz r0, 0x24(r1)
    add r0, r0, r28
    stw r0, 0x24(r1)
lbl_fn_8032B7F0_000014F0:
    lwz r28, 0x0(r29)
    li r0, 0x0
    stw r0, 0x14(r1)
    cmpwi r28, 0x0
    stw r0, 0x18(r1)
    stw r0, 0x1c(r1)
    beq lbl_fn_8032B7F0_000015A4
    lis r3, 0x4000
    subi r0, r3, 0x1
    cmplw r28, r0
    ble lbl_fn_8032B7F0_00001540
    lis r4, lbl_80749D10@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80749D10@l
    addi r3, r3, __files@l
    addi r4, r4, 0x46
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8032B7F0_00001540:
    slwi r26, r28, 2
    mr r3, r26
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_fn_8032B7F0_00001578
    lis r3, __files@ha
    lis r4, lbl_80775A88@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8032B7F0_00001578:
    lwz r0, 0x18(r1)
    mr r5, r26
    stw r27, 0x14(r1)
    li r4, 0x0
    slwi r0, r0, 2
    stw r28, 0x1c(r1)
    add r3, r27, r0
    bl memset
    lwz r0, 0x18(r1)
    add r0, r0, r28
    stw r0, 0x18(r1)
lbl_fn_8032B7F0_000015A4:
    lwz r28, 0x0(r29)
    li r0, 0x0
    cmpwi r28, 0x0
    stw r0, 0x8(r1)
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    beq lbl_fn_8032B7F0_00001658
    lis r3, 0x4000
    subi r0, r3, 0x1
    cmplw r28, r0
    ble lbl_fn_8032B7F0_000015F4
    lis r4, lbl_80749D10@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80749D10@l
    addi r3, r3, __files@l
    addi r4, r4, 0x46
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8032B7F0_000015F4:
    slwi r26, r28, 2
    mr r3, r26
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_fn_8032B7F0_0000162C
    lis r3, __files@ha
    lis r4, lbl_80775A88@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8032B7F0_0000162C:
    lwz r0, 0xc(r1)
    mr r5, r26
    stw r27, 0x8(r1)
    li r4, 0x0
    slwi r0, r0, 2
    stw r28, 0x10(r1)
    add r3, r27, r0
    bl memset
    lwz r0, 0xc(r1)
    add r0, r0, r28
    stw r0, 0xc(r1)
lbl_fn_8032B7F0_00001658:
    lwz r4, 0x20(r1)
    li r7, 0x1
    lfs f0, lbl_80884F8C
    li r3, 0x4
    stfs f0, 0x0(r4)
    lfs f2, lbl_80885018
    lfs f1, lbl_80884F1C
    b lbl_fn_8032B7F0_00001698
lbl_fn_8032B7F0_00001678:
    subi r0, r7, 0x1
    addi r7, r7, 0x1
    slwi r0, r0, 2
    lfsx f0, r4, r0
    fsubs f0, f2, f0
    fdivs f0, f1, f0
    stfsx f0, r4, r3
    addi r3, r3, 0x4
lbl_fn_8032B7F0_00001698:
    lwz r6, 0x0(r29)
    subi r5, r6, 0x1
    cmpw r7, r5
    blt lbl_fn_8032B7F0_00001678
    subi r0, r6, 0x2
    lwz r6, 0x20(r1)
    slwi r0, r0, 2
    lfs f1, lbl_80884F9C
    lfsx f0, r6, r0
    slwi r0, r5, 2
    lfs f2, lbl_80884F1C
    addi r5, r30, 0x4
    fsubs f4, f1, f0
    lfs f1, 0x4(r30)
    lfs f0, 0x0(r30)
    li r8, 0x1
    lfs f3, lbl_80884F44
    li r3, 0x4
    fdivs f2, f2, f4
    lwz r4, 0x14(r1)
    stfsx f2, r6, r0
    fsubs f1, f1, f0
    lfs f0, 0x0(r6)
    fmuls f1, f3, f1
    fmuls f0, f1, f0
    stfs f0, 0x0(r4)
    b lbl_fn_8032B7F0_00001738
lbl_fn_8032B7F0_00001704:
    lfs f2, 0x4(r5)
    subi r0, r8, 0x1
    lfs f0, -0x4(r5)
    slwi r0, r0, 2
    lfsx f1, r4, r0
    addi r5, r5, 0x4
    fsubs f2, f2, f0
    lfsx f0, r6, r3
    addi r8, r8, 0x1
    fmsubs f1, f3, f2, f1
    fmuls f0, f1, f0
    stfsx f0, r4, r3
    addi r3, r3, 0x4
lbl_fn_8032B7F0_00001738:
    lwz r7, 0x0(r29)
    subi r0, r7, 0x1
    cmpw r8, r0
    blt lbl_fn_8032B7F0_00001704
    subi r3, r7, 0x2
    slwi r4, r0, 2
    slwi r0, r3, 2
    lfsx f1, r30, r4
    lfsx f0, r30, r0
    lwz r5, 0x14(r1)
    fsubs f3, f1, f0
    lwz r3, 0x20(r1)
    lfs f2, lbl_80884F44
    lfsx f1, r5, r0
    lfsx f0, r3, r4
    fmsubs f1, f2, f3, f1
    fmuls f0, f1, f0
    stfsx f0, r5, r4
    lwz r4, 0x0(r29)
    lwz r3, 0x8(r1)
    subi r0, r4, 0x1
    slwi r0, r0, 2
    lfsx f0, r5, r0
    stfsx f0, r3, r0
    lwz r3, 0x0(r29)
    subi r5, r3, 0x2
    cmpwi cr1, r5, 0x0
    blt cr1, lbl_fn_8032B7F0_000019A0
    subi r0, r3, 0x1
    cmpwi r0, 0x8
    ble lbl_fn_8032B7F0_00001958
    li r4, 0x0
    li r6, 0x0
    blt cr1, lbl_fn_8032B7F0_000017D4
    lis r3, 0x8000
    addi r0, r3, 0x1
    cmpw r5, r0
    blt lbl_fn_8032B7F0_000017D4
    li r6, 0x1
lbl_fn_8032B7F0_000017D4:
    cmpwi r6, 0x0
    beq lbl_fn_8032B7F0_0000180C
    lwz r6, 0x0(r29)
    li r3, 0x1
    subi r0, r6, 0x2
    clrrwi. r0, r0, 31
    bne lbl_fn_8032B7F0_00001800
    subi r0, r6, 0x1
    clrrwi. r0, r0, 31
    beq lbl_fn_8032B7F0_00001800
    li r3, 0x0
lbl_fn_8032B7F0_00001800:
    cmpwi r3, 0x0
    beq lbl_fn_8032B7F0_0000180C
    li r4, 0x1
lbl_fn_8032B7F0_0000180C:
    cmpwi r4, 0x0
    beq lbl_fn_8032B7F0_00001958
    srwi r0, r5, 3
    slwi r6, r5, 2
    lwz r4, 0x20(r1)
    lwz r3, 0x14(r1)
    mtctr r0
    cmpwi r5, 0x8
    blt lbl_fn_8032B7F0_00001958
lbl_fn_8032B7F0_00001830:
    addi r0, r5, 0x1
    lwz r12, 0x8(r1)
    slwi r0, r0, 2
    subi r11, r5, 0x1
    lfsx f1, r12, r0
    subi r10, r5, 0x2
    lfsx f2, r4, r6
    subi r9, r5, 0x3
    lfsx f0, r3, r6
    subi r8, r5, 0x4
    subi r7, r5, 0x5
    subi r0, r5, 0x6
    fnmsubs f0, f2, f1, f0
    add r27, r4, r6
    add r28, r3, r6
    slwi r11, r11, 2
    stfsx f0, r12, r6
    slwi r10, r10, 2
    lwz r12, 0x8(r1)
    slwi r9, r9, 2
    lfs f2, -0x4(r27)
    slwi r8, r8, 2
    lfsx f1, r12, r6
    add r12, r12, r6
    lfs f0, -0x4(r28)
    slwi r7, r7, 2
    slwi r0, r0, 2
    subi r5, r5, 0x8
    fnmsubs f0, f2, f1, f0
    stfs f0, -0x4(r12)
    lwz r12, 0x8(r1)
    lfs f2, -0x8(r27)
    lfsx f1, r12, r11
    add r11, r12, r6
    lfs f0, -0x8(r28)
    fnmsubs f0, f2, f1, f0
    stfs f0, -0x8(r11)
    lwz r11, 0x8(r1)
    lfs f2, -0xc(r27)
    lfsx f1, r11, r10
    add r10, r11, r6
    lfs f0, -0xc(r28)
    fnmsubs f0, f2, f1, f0
    stfs f0, -0xc(r10)
    lwz r10, 0x8(r1)
    lfs f2, -0x10(r27)
    lfsx f1, r10, r9
    add r9, r10, r6
    lfs f0, -0x10(r28)
    fnmsubs f0, f2, f1, f0
    stfs f0, -0x10(r9)
    lwz r9, 0x8(r1)
    lfs f2, -0x14(r27)
    lfsx f1, r9, r8
    add r8, r9, r6
    lfs f0, -0x14(r28)
    fnmsubs f0, f2, f1, f0
    stfs f0, -0x14(r8)
    lwz r8, 0x8(r1)
    lfs f2, -0x18(r27)
    lfsx f1, r8, r7
    add r7, r8, r6
    lfs f0, -0x18(r28)
    fnmsubs f0, f2, f1, f0
    stfs f0, -0x18(r7)
    lwz r8, 0x8(r1)
    lfs f2, -0x1c(r27)
    add r7, r8, r6
    lfsx f1, r8, r0
    lfs f0, -0x1c(r28)
    subi r6, r6, 0x20
    fnmsubs f0, f2, f1, f0
    stfs f0, -0x1c(r7)
    bdnz lbl_fn_8032B7F0_00001830
lbl_fn_8032B7F0_00001958:
    addi r0, r5, 0x1
    slwi r3, r5, 2
    lwz r6, 0x20(r1)
    lwz r4, 0x14(r1)
    mtctr r0
    cmpwi r5, 0x0
    blt lbl_fn_8032B7F0_000019A0
lbl_fn_8032B7F0_00001974:
    addi r0, r5, 0x1
    lwz r7, 0x8(r1)
    slwi r0, r0, 2
    lfsx f2, r6, r3
    lfsx f1, r7, r0
    subi r5, r5, 0x1
    lfsx f0, r4, r3
    fnmsubs f0, f2, f1, f0
    stfsx f0, r7, r3
    subi r3, r3, 0x4
    bdnz lbl_fn_8032B7F0_00001974
lbl_fn_8032B7F0_000019A0:
    lfs f5, lbl_80884F9C
    li r5, 0x0
    lfs f1, lbl_80884F44
    li r3, 0x0
    b lbl_fn_8032B7F0_00001A08
lbl_fn_8032B7F0_000019B4:
    lwz r4, 0x8(r1)
    addi r0, r5, 0x1
    lfs f7, 0x0(r30)
    slwi r0, r0, 2
    lfsx f4, r4, r3
    addi r5, r5, 0x1
    lfsu f6, 0x4(r30)
    addi r3, r3, 0x4
    fmuls f0, f5, f4
    lfsx f3, r4, r0
    fsubs f2, f6, f7
    fsubs f6, f7, f6
    stfs f7, 0x0(r31)
    fmsubs f0, f1, f2, f0
    stfs f4, 0x4(r31)
    fmadds f2, f5, f6, f4
    fsubs f0, f0, f3
    fadds f2, f2, f3
    stfs f0, 0x8(r31)
    stfs f2, 0xc(r31)
    addi r31, r31, 0x10
lbl_fn_8032B7F0_00001A08:
    lwz r4, 0x0(r29)
    subi r0, r4, 0x1
    cmpw r5, r0
    blt lbl_fn_8032B7F0_000019B4
    addic. r0, r1, 0x8
    beq lbl_fn_8032B7F0_00001A44
    beq lbl_fn_8032B7F0_00001A44
    beq lbl_fn_8032B7F0_00001A44
    lwz r3, 0x8(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8032B7F0_00001A44
    lwz r0, 0xc(r1)
    subf r0, r0, r0
    stw r0, 0xc(r1)
    bl dtor_80084684
lbl_fn_8032B7F0_00001A44:
    addic. r0, r1, 0x14
    beq lbl_fn_8032B7F0_00001A70
    beq lbl_fn_8032B7F0_00001A70
    beq lbl_fn_8032B7F0_00001A70
    lwz r3, 0x14(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8032B7F0_00001A70
    lwz r0, 0x18(r1)
    subf r0, r0, r0
    stw r0, 0x18(r1)
    bl dtor_80084684
lbl_fn_8032B7F0_00001A70:
    addic. r0, r1, 0x20
    beq lbl_fn_8032B7F0_00001A9C
    beq lbl_fn_8032B7F0_00001A9C
    beq lbl_fn_8032B7F0_00001A9C
    lwz r3, 0x20(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8032B7F0_00001A9C
    lwz r0, 0x24(r1)
    subf r0, r0, r0
    stw r0, 0x24(r1)
    bl dtor_80084684
lbl_fn_8032B7F0_00001A9C:
    addi r11, r1, 0x50
    bl _restgpr_26
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}
