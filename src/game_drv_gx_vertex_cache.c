#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void OSDisableInterrupts(void);
extern void OSRestoreInterrupts(void);
extern void __register_global_object(void);
extern void _restgpr_25(void);
extern void _restgpr_27(void);
extern void _savegpr_25(void);
extern void _savegpr_27(void);
extern void fn_805D84C0(void);
extern void fn_805D8510(void);
extern void fn_805D91A0(void);
extern void fn_805D9360(void);
extern void fn_805D93F0(void);
extern void fn_805D9530(void);
extern void fn_805D9540(void);
extern void fn_805D9550(void);
extern void fn_805D9560(void);
extern void fn_805D9570(void);
extern void fn_805D9580(void);
extern void fn_805D9590(void);
extern void fn_805DA7B0(void);
extern void fn_805DA7C0(void);
extern void fn_805DAD10(void);
extern void fn_805DAD20(void);
extern void fn_805DF630(void);
extern void fn_80607DD0(void);
extern void fn_80695B00(void);

/* External data declarations */
extern u8 lbl_80764630[];
extern u8 lbl_80764638[];
extern u8 lbl_80764640[];
extern u8 lbl_8079A738[];
extern u8 lbl_807CA238[];
extern u8 lbl_807CA244[];
extern u8 lbl_807CA254[];
extern u8 lbl_807CA25C[];
extern u8 lbl_807CA260[];
extern u8 lbl_807CA261[];
extern u8 lbl_807CA268[];
extern u8 lbl_807CA278[];
extern u8 lbl_807CA2D8[];
extern u8 lbl_807CA2DC[];
extern u8 lbl_807CA920[];

/* Small data declarations */

/* Function declarations */
void fn_805DFA30(void);
void fn_805DFB50(void);
void fn_805E0120(void);
void fn_805E0610(void);
void fn_805E0630(void);
void fn_805E06E0(void);
void fn_805E0780(void);
void fn_805E0980(void);
void fn_805E09A0(void);
void fn_805E09B0(void);
void fn_805E1300(void);
void fn_805E1330(void);
void fn_805E1370(void);
void fn_805E13B0(void);

asm void fn_805DFA30(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x30
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    bl _savegpr_27
    lis r31, lbl_80764630@ha
    mr r27, r3
    lfs f1, lbl_80764630@l(r31)
    mr r28, r4
    stfs f1, 0x0(r4)
    mr r29, r5
    fmr f2, f1
    mr r30, r6
    stfs f1, 0x8(r4)
    stfs f1, 0x4(r4)
    stfs f1, 0xc(r4)
    bl fn_805D9530
    lfs f31, lbl_80764630@l(r31)
lbl_fn_805DFA30_00000050:
    stfs f31, 0x8(r1)
    mr r3, r27
    mr r5, r29
    mr r6, r30
    stfs f31, 0xc(r1)
    addi r4, r1, 0x8
    stfs f31, 0x10(r1)
    stfs f31, 0x14(r1)
    bl fn_805DF630
    lfs f1, 0x8(r1)
    slwi r0, r3, 1
    lfs f0, 0x0(r28)
    add r29, r29, r0
    subf r30, r3, r30
    fcmpo cr0, f0, f1
    ble lbl_fn_805DFA30_00000094
    b lbl_fn_805DFA30_00000098
lbl_fn_805DFA30_00000094:
    fmr f1, f0
lbl_fn_805DFA30_00000098:
    stfs f1, 0x0(r28)
    lfs f0, 0x4(r28)
    lfs f1, 0xc(r1)
    fcmpo cr0, f0, f1
    ble lbl_fn_805DFA30_000000B0
    b lbl_fn_805DFA30_000000B4
lbl_fn_805DFA30_000000B0:
    fmr f1, f0
lbl_fn_805DFA30_000000B4:
    stfs f1, 0x4(r28)
    lfs f0, 0x8(r28)
    lfs f1, 0x10(r1)
    fcmpo cr0, f0, f1
    bge lbl_fn_805DFA30_000000CC
    b lbl_fn_805DFA30_000000D0
lbl_fn_805DFA30_000000CC:
    fmr f1, f0
lbl_fn_805DFA30_000000D0:
    stfs f1, 0x8(r28)
    lfs f0, 0xc(r28)
    lfs f1, 0x14(r1)
    fcmpo cr0, f0, f1
    bge lbl_fn_805DFA30_000000E8
    b lbl_fn_805DFA30_000000EC
lbl_fn_805DFA30_000000E8:
    fmr f1, f0
lbl_fn_805DFA30_000000EC:
    cmpwi r30, 0x0
    stfs f1, 0xc(r28)
    bgt lbl_fn_805DFA30_00000050
    addi r11, r1, 0x30
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    bl _restgpr_27
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_805DFB50(void)
{
    nofralloc
    stwu r1, -0x1d0(r1)
    mflr r0
    stw r0, 0x1d4(r1)
    addi r11, r1, 0x150
    stfd f31, 0x1c0(r1)
    psq_st f31, 0x1c8(r1), 0, 0
    stfd f30, 0x1b0(r1)
    psq_st f30, 0x1b8(r1), 0, 0
    stfd f29, 0x1a0(r1)
    psq_st f29, 0x1a8(r1), 0, 0
    stfd f28, 0x190(r1)
    psq_st f28, 0x198(r1), 0, 0
    stfd f27, 0x180(r1)
    psq_st f27, 0x188(r1), 0, 0
    stfd f26, 0x170(r1)
    psq_st f26, 0x178(r1), 0, 0
    stfd f25, 0x160(r1)
    psq_st f25, 0x168(r1), 0, 0
    stfd f24, 0x150(r1)
    psq_st f24, 0x158(r1), 0, 0
    bl _savegpr_25
    mr r28, r3
    mr r29, r4
    mr r30, r5
    bl fn_805D9580
    stfs f1, 0xc(r1)
    mr r3, r28
    bl fn_805D9590
    frsp f28, f1
    stfs f1, 0x8(r1)
    mr r3, r28
    mr r6, r29
    mr r7, r30
    addi r4, r1, 0xc
    addi r5, r1, 0x8
    li r31, 0x0
    bl fn_805E0120
    fmr f29, f1
    mr r3, r28
    bl fn_805D9580
    mr r3, r28
    bl fn_805D9590
    li r0, 0x0
    stw r0, 0x58(r1)
    lfs f2, 0xc(r1)
    fsubs f30, f28, f1
    stw r0, 0x5c(r1)
    mr r3, r28
    lfs f0, 0x8(r1)
    stw r0, 0x60(r1)
    stw r28, 0x50(r1)
    stw r29, 0x54(r1)
    stfs f2, 0x58(r1)
    stfs f0, 0x5c(r1)
    bl fn_805D8510
    lwz r5, 0x4(r3)
    addi r12, r1, 0x44
    lwz r4, 0x8(r3)
    lwz r0, 0xc(r3)
    addi r3, r1, 0x40
    stw r5, 0x30(r1)
    stw r4, 0x34(r1)
    stw r0, 0x38(r1)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
    stw r29, 0x40(r1)
    bl fn_80695B00
    nop
    lis r4, lbl_80764630@ha
    lis r5, lbl_80764640@ha
    lfs f31, lbl_80764630@l(r4)
    lis r4, lbl_80764638@ha
    lfs f25, lbl_80764640@l(r5)
    mr r26, r3
    lfd f27, lbl_80764638@l(r4)
    lis r27, 0x4330
    b lbl_fn_805DFB50_00000644
lbl_fn_805DFB50_00000258:
    clrlwi r4, r26, 16
    cmpwi r4, 0x20
    bge lbl_fn_805DFB50_000005A4
    cntlzw r0, r31
    stw r5, 0x54(r1)
    srwi r0, r0, 5
    addi r5, r1, 0x50
    stw r0, 0x60(r1)
    lwz r3, 0x5c(r28)
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x3
    bne lbl_fn_805DFB50_00000570
    lwz r0, 0x58(r28)
    clrlwi r3, r0, 30
    cmplwi r3, 0x1
    bne lbl_fn_805DFB50_000003EC
    stfs f31, 0x20(r1)
    fmr f1, f31
    fmr f2, f31
    lwz r31, 0x54(r1)
    stfs f31, 0x24(r1)
    addi r3, r1, 0xc8
    stfs f31, 0x28(r1)
    stfs f31, 0x2c(r1)
    lwz r4, 0x0(r28)
    stw r4, 0xc8(r1)
    lwz r4, 0x4(r28)
    stw r4, 0xcc(r1)
    lwz r4, 0x8(r28)
    stw r4, 0xd0(r1)
    lwz r4, 0xc(r28)
    stw r4, 0xd4(r1)
    lwz r4, 0x10(r28)
    stw r4, 0xd8(r1)
    lwz r4, 0x14(r28)
    stw r4, 0xdc(r1)
    lwz r4, 0x18(r28)
    stw r4, 0xe0(r1)
    lwz r4, 0x1c(r28)
    stw r4, 0xe4(r1)
    lwz r4, 0x20(r28)
    stw r4, 0xe8(r1)
    lwz r5, 0x24(r28)
    lwz r4, 0x28(r28)
    stw r4, 0xf0(r1)
    stw r5, 0xec(r1)
    lwz r5, 0x2c(r28)
    lwz r4, 0x30(r28)
    stw r4, 0xf8(r1)
    stw r5, 0xf4(r1)
    lwz r4, 0x34(r28)
    stw r4, 0xfc(r1)
    lwz r5, 0x38(r28)
    lwz r4, 0x3c(r28)
    stw r4, 0x104(r1)
    stw r5, 0x100(r1)
    lhz r4, 0x40(r28)
    sth r4, 0x108(r1)
    lbz r4, 0x42(r28)
    stb r4, 0x10a(r1)
    lbz r4, 0x43(r28)
    stb r4, 0x10b(r1)
    lfs f0, 0x44(r28)
    stfs f0, 0x10c(r1)
    lwz r4, 0x48(r28)
    stw r4, 0x110(r1)
    lfs f0, 0x4c(r28)
    stfs f0, 0x114(r1)
    lfs f0, 0x50(r28)
    stfs f0, 0x118(r1)
    lwz r4, 0x54(r28)
    stw r4, 0x11c(r1)
    stw r0, 0x120(r1)
    lwz r0, 0x5c(r28)
    stw r0, 0x124(r1)
    bl fn_805D9530
    subf r4, r29, r31
    mr r5, r31
    srwi r0, r4, 31
    addi r3, r1, 0xc8
    add r0, r0, r4
    addi r4, r1, 0x20
    srawi r0, r0, 1
    subf r6, r0, r30
    bl fn_805DF630
    lfs f1, 0x28(r1)
    addi r3, r1, 0xc8
    lfs f0, 0x20(r1)
    li r4, 0x0
    fsubs f26, f1, f0
    bl fn_805D84C0
    fsubs f1, f29, f26
    lfs f0, 0x58(r1)
    mr r3, r28
    fmuls f1, f1, f25
    fadds f1, f0, f1
    bl fn_805D9540
    b lbl_fn_805DFB50_00000568
lbl_fn_805DFB50_000003EC:
    cmplwi r3, 0x2
    bne lbl_fn_805DFB50_00000538
    stfs f31, 0x10(r1)
    fmr f1, f31
    fmr f2, f31
    lwz r31, 0x54(r1)
    stfs f31, 0x14(r1)
    addi r3, r1, 0x68
    stfs f31, 0x18(r1)
    stfs f31, 0x1c(r1)
    lwz r4, 0x0(r28)
    stw r4, 0x68(r1)
    lwz r4, 0x4(r28)
    stw r4, 0x6c(r1)
    lwz r4, 0x8(r28)
    stw r4, 0x70(r1)
    lwz r4, 0xc(r28)
    stw r4, 0x74(r1)
    lwz r4, 0x10(r28)
    stw r4, 0x78(r1)
    lwz r4, 0x14(r28)
    stw r4, 0x7c(r1)
    lwz r4, 0x18(r28)
    stw r4, 0x80(r1)
    lwz r4, 0x1c(r28)
    stw r4, 0x84(r1)
    lwz r4, 0x20(r28)
    stw r4, 0x88(r1)
    lwz r5, 0x24(r28)
    lwz r4, 0x28(r28)
    stw r4, 0x90(r1)
    stw r5, 0x8c(r1)
    lwz r5, 0x2c(r28)
    lwz r4, 0x30(r28)
    stw r4, 0x98(r1)
    stw r5, 0x94(r1)
    lwz r4, 0x34(r28)
    stw r4, 0x9c(r1)
    lwz r5, 0x38(r28)
    lwz r4, 0x3c(r28)
    stw r4, 0xa4(r1)
    stw r5, 0xa0(r1)
    lhz r4, 0x40(r28)
    sth r4, 0xa8(r1)
    lbz r4, 0x42(r28)
    stb r4, 0xaa(r1)
    lbz r4, 0x43(r28)
    stb r4, 0xab(r1)
    lfs f0, 0x44(r28)
    stfs f0, 0xac(r1)
    lwz r4, 0x48(r28)
    stw r4, 0xb0(r1)
    lfs f0, 0x4c(r28)
    stfs f0, 0xb4(r1)
    lfs f0, 0x50(r28)
    stfs f0, 0xb8(r1)
    lwz r4, 0x54(r28)
    stw r4, 0xbc(r1)
    stw r0, 0xc0(r1)
    lwz r0, 0x5c(r28)
    stw r0, 0xc4(r1)
    bl fn_805D9530
    subf r4, r29, r31
    mr r5, r31
    srwi r0, r4, 31
    addi r3, r1, 0x68
    add r0, r0, r4
    addi r4, r1, 0x10
    srawi r0, r0, 1
    subf r6, r0, r30
    bl fn_805DF630
    lfs f1, 0x18(r1)
    addi r3, r1, 0x68
    lfs f0, 0x10(r1)
    li r4, 0x0
    fsubs f26, f1, f0
    bl fn_805D84C0
    fsubs f1, f29, f26
    lfs f0, 0x58(r1)
    mr r3, r28
    fadds f1, f0, f1
    bl fn_805D9540
    b lbl_fn_805DFB50_00000568
lbl_fn_805DFB50_00000538:
    mr r3, r28
    bl fn_805D9580
    lfs f0, 0x58(r1)
    fsubs f0, f1, f0
    fcmpo cr0, f29, f0
    bge lbl_fn_805DFB50_00000554
    b lbl_fn_805DFB50_00000558
lbl_fn_805DFB50_00000554:
    fmr f0, f29
lbl_fn_805DFB50_00000558:
    fmr f29, f0
    lfs f1, 0x58(r1)
    mr r3, r28
    bl fn_805D9540
lbl_fn_805DFB50_00000568:
    li r31, 0x0
    b lbl_fn_805DFB50_00000598
lbl_fn_805DFB50_00000570:
    cmpwi r3, 0x1
    bne lbl_fn_805DFB50_00000580
    li r31, 0x0
    b lbl_fn_805DFB50_00000598
lbl_fn_805DFB50_00000580:
    cmpwi r3, 0x2
    bne lbl_fn_805DFB50_00000590
    li r31, 0x1
    b lbl_fn_805DFB50_00000598
lbl_fn_805DFB50_00000590:
    cmpwi r3, 0x4
    beq lbl_fn_805DFB50_00000660
lbl_fn_805DFB50_00000598:
    lwz r0, 0x54(r1)
    stw r0, 0x40(r1)
    b lbl_fn_805DFB50_00000630
lbl_fn_805DFB50_000005A4:
    mr r3, r28
    bl fn_805D9590
    cmpwi r31, 0x0
    fmr f24, f1
    beq lbl_fn_805DFB50_000005C4
    lfs f1, 0x4c(r28)
    mr r3, r28
    bl fn_805D9560
lbl_fn_805DFB50_000005C4:
    mr r3, r28
    li r31, 0x1
    bl fn_805D8510
    mr r25, r3
    mr r3, r28
    bl fn_805D91A0
    lwz r12, 0x0(r25)
    fmr f26, f1
    mr r3, r25
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    neg r0, r3
    stw r27, 0x128(r1)
    xoris r0, r0, 0x8000
    mr r3, r28
    stw r0, 0x12c(r1)
    lfd f0, 0x128(r1)
    fsubs f0, f0, f27
    fmuls f1, f0, f26
    bl fn_805D9570
    mr r3, r28
    clrlwi r4, r26, 16
    bl fn_805D93F0
    fmr f1, f24
    mr r3, r28
    bl fn_805D9550
lbl_fn_805DFB50_00000630:
    addi r3, r1, 0x40
    addi r12, r1, 0x44
    bl fn_80695B00
    nop
    mr r26, r3
lbl_fn_805DFB50_00000644:
    lwz r5, 0x40(r1)
    subf r3, r29, r5
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    cmpw r0, r30
    ble lbl_fn_805DFB50_00000258
lbl_fn_805DFB50_00000660:
    lwz r0, 0x58(r28)
    rlwinm r0, r0, 0, 22, 23
    cmplwi r0, 0x100
    beq lbl_fn_805DFB50_00000678
    cmplwi r0, 0x200
    bne lbl_fn_805DFB50_00000688
lbl_fn_805DFB50_00000678:
    fmr f1, f28
    mr r3, r28
    bl fn_805D9550
    b lbl_fn_805DFB50_00000694
lbl_fn_805DFB50_00000688:
    fmr f1, f30
    mr r3, r28
    bl fn_805D9570
lbl_fn_805DFB50_00000694:
    psq_l f31, 0x1c8(r1), 0, 0
    fmr f1, f29
    lfd f31, 0x1c0(r1)
    psq_l f30, 0x1b8(r1), 0, 0
    lfd f30, 0x1b0(r1)
    psq_l f29, 0x1a8(r1), 0, 0
    lfd f29, 0x1a0(r1)
    psq_l f28, 0x198(r1), 0, 0
    lfd f28, 0x190(r1)
    psq_l f27, 0x188(r1), 0, 0
    lfd f27, 0x180(r1)
    psq_l f26, 0x178(r1), 0, 0
    lfd f26, 0x170(r1)
    psq_l f25, 0x168(r1), 0, 0
    lfd f25, 0x160(r1)
    psq_l f24, 0x158(r1), 0, 0
    lfd f24, 0x150(r1)
    addi r11, r1, 0x150
    bl _restgpr_25
    lwz r0, 0x1d4(r1)
    mtlr r0
    addi r1, r1, 0x1d0
    blr
}

asm void fn_805E0120(void)
{
    nofralloc
    stwu r1, -0x190(r1)
    mflr r0
    stw r0, 0x194(r1)
    addi r11, r1, 0x170
    stfd f31, 0x180(r1)
    psq_st f31, 0x188(r1), 0, 0
    stfd f30, 0x170(r1)
    psq_st f30, 0x178(r1), 0, 0
    bl _savegpr_27
    lwz r0, 0x58(r3)
    lis r8, lbl_80764630@ha
    lfs f31, lbl_80764630@l(r8)
    mr r27, r3
    andi. r8, r0, 0x333
    mr r28, r4
    fmr f2, f31
    mr r29, r5
    mr r30, r6
    mr r31, r7
    cmplwi r8, 0x300
    beq lbl_fn_805E0120_00000860
    cmpwi r8, 0x0
    beq lbl_fn_805E0120_00000860
    stfs f31, 0x28(r1)
    mr r5, r30
    mr r6, r31
    addi r4, r1, 0x28
    stfs f31, 0x2c(r1)
    stfs f31, 0x30(r1)
    stfs f31, 0x34(r1)
    lwz r7, 0x0(r3)
    stw r7, 0xf8(r1)
    lwz r7, 0x4(r3)
    stw r7, 0xfc(r1)
    lwz r7, 0x8(r3)
    stw r7, 0x100(r1)
    lwz r7, 0xc(r3)
    stw r7, 0x104(r1)
    lwz r7, 0x10(r3)
    stw r7, 0x108(r1)
    lwz r7, 0x14(r3)
    stw r7, 0x10c(r1)
    lwz r7, 0x18(r3)
    stw r7, 0x110(r1)
    lwz r7, 0x1c(r3)
    stw r7, 0x114(r1)
    lwz r7, 0x20(r3)
    stw r7, 0x118(r1)
    lwz r8, 0x24(r3)
    lwz r7, 0x28(r3)
    stw r7, 0x120(r1)
    stw r8, 0x11c(r1)
    lwz r8, 0x2c(r3)
    lwz r7, 0x30(r3)
    stw r7, 0x128(r1)
    stw r8, 0x124(r1)
    lwz r7, 0x34(r3)
    stw r7, 0x12c(r1)
    lwz r8, 0x38(r3)
    lwz r7, 0x3c(r3)
    stw r7, 0x134(r1)
    stw r8, 0x130(r1)
    lhz r7, 0x40(r3)
    sth r7, 0x138(r1)
    lbz r7, 0x42(r3)
    stb r7, 0x13a(r1)
    lbz r7, 0x43(r3)
    stb r7, 0x13b(r1)
    lfs f0, 0x44(r3)
    stfs f0, 0x13c(r1)
    lwz r7, 0x48(r3)
    stw r7, 0x140(r1)
    lfs f0, 0x4c(r3)
    stfs f0, 0x144(r1)
    lfs f0, 0x50(r3)
    stfs f0, 0x148(r1)
    lwz r7, 0x54(r3)
    stw r7, 0x14c(r1)
    stw r0, 0x150(r1)
    lwz r0, 0x5c(r3)
    addi r3, r1, 0xf8
    stw r0, 0x154(r1)
    bl fn_805DFA30
    addi r3, r1, 0xf8
    li r4, 0x0
    bl fn_805D84C0
    lfs f3, 0x28(r1)
    lfs f2, 0x30(r1)
    lfs f1, 0x2c(r1)
    lfs f0, 0x34(r1)
    fadds f31, f3, f2
    fadds f2, f1, f0
lbl_fn_805E0120_00000860:
    lwz r0, 0x58(r27)
    rlwinm r0, r0, 0, 26, 27
    cmplwi r0, 0x10
    bne lbl_fn_805E0120_0000088C
    lis r3, lbl_80764640@ha
    lfs f0, 0x0(r28)
    lfs f1, lbl_80764640@l(r3)
    fmuls f1, f31, f1
    fsubs f0, f0, f1
    stfs f0, 0x0(r28)
    b lbl_fn_805E0120_000008A0
lbl_fn_805E0120_0000088C:
    cmplwi r0, 0x20
    bne lbl_fn_805E0120_000008A0
    lfs f0, 0x0(r28)
    fsubs f0, f0, f31
    stfs f0, 0x0(r28)
lbl_fn_805E0120_000008A0:
    lwz r0, 0x58(r27)
    rlwinm r0, r0, 0, 22, 23
    cmplwi r0, 0x100
    bne lbl_fn_805E0120_000008CC
    lis r3, lbl_80764640@ha
    lfs f0, 0x0(r29)
    lfs f1, lbl_80764640@l(r3)
    fmuls f1, f2, f1
    fsubs f0, f0, f1
    stfs f0, 0x0(r29)
    b lbl_fn_805E0120_000008E0
lbl_fn_805E0120_000008CC:
    cmplwi r0, 0x200
    bne lbl_fn_805E0120_000008E0
    lfs f0, 0x0(r29)
    fsubs f0, f0, f2
    stfs f0, 0x0(r29)
lbl_fn_805E0120_000008E0:
    lwz r0, 0x58(r27)
    clrlwi r3, r0, 30
    cmplwi r3, 0x1
    bne lbl_fn_805E0120_00000A30
    lis r4, lbl_80764630@ha
    addi r3, r1, 0x98
    lfs f1, lbl_80764630@l(r4)
    stfs f1, 0x18(r1)
    fmr f2, f1
    stfs f1, 0x1c(r1)
    stfs f1, 0x20(r1)
    stfs f1, 0x24(r1)
    lwz r4, 0x0(r27)
    stw r4, 0x98(r1)
    lwz r4, 0x4(r27)
    stw r4, 0x9c(r1)
    lwz r4, 0x8(r27)
    stw r4, 0xa0(r1)
    lwz r4, 0xc(r27)
    stw r4, 0xa4(r1)
    lwz r4, 0x10(r27)
    stw r4, 0xa8(r1)
    lwz r4, 0x14(r27)
    stw r4, 0xac(r1)
    lwz r4, 0x18(r27)
    stw r4, 0xb0(r1)
    lwz r4, 0x1c(r27)
    stw r4, 0xb4(r1)
    lwz r4, 0x20(r27)
    stw r4, 0xb8(r1)
    lwz r5, 0x24(r27)
    lwz r4, 0x28(r27)
    stw r4, 0xc0(r1)
    stw r5, 0xbc(r1)
    lwz r5, 0x2c(r27)
    lwz r4, 0x30(r27)
    stw r4, 0xc8(r1)
    stw r5, 0xc4(r1)
    lwz r4, 0x34(r27)
    stw r4, 0xcc(r1)
    lwz r5, 0x38(r27)
    lwz r4, 0x3c(r27)
    stw r4, 0xd4(r1)
    stw r5, 0xd0(r1)
    lhz r4, 0x40(r27)
    sth r4, 0xd8(r1)
    lbz r4, 0x42(r27)
    stb r4, 0xda(r1)
    lbz r4, 0x43(r27)
    stb r4, 0xdb(r1)
    lfs f0, 0x44(r27)
    stfs f0, 0xdc(r1)
    lwz r4, 0x48(r27)
    stw r4, 0xe0(r1)
    lfs f0, 0x4c(r27)
    stfs f0, 0xe4(r1)
    lfs f0, 0x50(r27)
    stfs f0, 0xe8(r1)
    lwz r4, 0x54(r27)
    stw r4, 0xec(r1)
    stw r0, 0xf0(r1)
    lwz r0, 0x5c(r27)
    stw r0, 0xf4(r1)
    bl fn_805D9530
    mr r5, r30
    mr r6, r31
    addi r3, r1, 0x98
    addi r4, r1, 0x18
    bl fn_805DF630
    lfs f1, 0x20(r1)
    addi r3, r1, 0x98
    lfs f0, 0x18(r1)
    li r4, 0x0
    fsubs f30, f1, f0
    bl fn_805D84C0
    lis r3, lbl_80764640@ha
    fsubs f2, f31, f30
    lfs f1, lbl_80764640@l(r3)
    mr r3, r27
    lfs f0, 0x0(r28)
    fmuls f1, f2, f1
    fadds f1, f0, f1
    bl fn_805D9540
    b lbl_fn_805E0120_00000B78
lbl_fn_805E0120_00000A30:
    cmplwi r3, 0x2
    bne lbl_fn_805E0120_00000B6C
    lis r4, lbl_80764630@ha
    addi r3, r1, 0x38
    lfs f1, lbl_80764630@l(r4)
    stfs f1, 0x8(r1)
    fmr f2, f1
    stfs f1, 0xc(r1)
    stfs f1, 0x10(r1)
    stfs f1, 0x14(r1)
    lwz r4, 0x0(r27)
    stw r4, 0x38(r1)
    lwz r4, 0x4(r27)
    stw r4, 0x3c(r1)
    lwz r4, 0x8(r27)
    stw r4, 0x40(r1)
    lwz r4, 0xc(r27)
    stw r4, 0x44(r1)
    lwz r4, 0x10(r27)
    stw r4, 0x48(r1)
    lwz r4, 0x14(r27)
    stw r4, 0x4c(r1)
    lwz r4, 0x18(r27)
    stw r4, 0x50(r1)
    lwz r4, 0x1c(r27)
    stw r4, 0x54(r1)
    lwz r4, 0x20(r27)
    stw r4, 0x58(r1)
    lwz r5, 0x24(r27)
    lwz r4, 0x28(r27)
    stw r4, 0x60(r1)
    stw r5, 0x5c(r1)
    lwz r5, 0x2c(r27)
    lwz r4, 0x30(r27)
    stw r4, 0x68(r1)
    stw r5, 0x64(r1)
    lwz r4, 0x34(r27)
    stw r4, 0x6c(r1)
    lwz r5, 0x38(r27)
    lwz r4, 0x3c(r27)
    stw r4, 0x74(r1)
    stw r5, 0x70(r1)
    lhz r4, 0x40(r27)
    sth r4, 0x78(r1)
    lbz r4, 0x42(r27)
    stb r4, 0x7a(r1)
    lbz r4, 0x43(r27)
    stb r4, 0x7b(r1)
    lfs f0, 0x44(r27)
    stfs f0, 0x7c(r1)
    lwz r4, 0x48(r27)
    stw r4, 0x80(r1)
    lfs f0, 0x4c(r27)
    stfs f0, 0x84(r1)
    lfs f0, 0x50(r27)
    stfs f0, 0x88(r1)
    lwz r4, 0x54(r27)
    stw r4, 0x8c(r1)
    stw r0, 0x90(r1)
    lwz r0, 0x5c(r27)
    stw r0, 0x94(r1)
    bl fn_805D9530
    mr r5, r30
    mr r6, r31
    addi r3, r1, 0x38
    addi r4, r1, 0x8
    bl fn_805DF630
    lfs f1, 0x10(r1)
    addi r3, r1, 0x38
    lfs f0, 0x8(r1)
    li r4, 0x0
    fsubs f30, f1, f0
    bl fn_805D84C0
    fsubs f1, f31, f30
    lfs f0, 0x0(r28)
    mr r3, r27
    fadds f1, f0, f1
    bl fn_805D9540
    b lbl_fn_805E0120_00000B78
lbl_fn_805E0120_00000B6C:
    lfs f1, 0x0(r28)
    mr r3, r27
    bl fn_805D9540
lbl_fn_805E0120_00000B78:
    lwz r0, 0x58(r27)
    rlwinm r0, r0, 0, 22, 23
    cmplwi r0, 0x300
    bne lbl_fn_805E0120_00000B98
    lfs f1, 0x0(r29)
    mr r3, r27
    bl fn_805D9550
    b lbl_fn_805E0120_00000BB0
lbl_fn_805E0120_00000B98:
    mr r3, r27
    bl fn_805D9360
    lfs f0, 0x0(r29)
    mr r3, r27
    fadds f1, f0, f1
    bl fn_805D9550
lbl_fn_805E0120_00000BB0:
    fmr f1, f31
    psq_l f31, 0x188(r1), 0, 0
    lfd f31, 0x180(r1)
    psq_l f30, 0x178(r1), 0, 0
    lfd f30, 0x170(r1)
    addi r11, r1, 0x170
    bl _restgpr_27
    lwz r0, 0x194(r1)
    mtlr r0
    addi r1, r1, 0x190
    blr
}

asm void fn_805E0610(void)
{
    nofralloc
    lwz r0, 0x58(r3)
    and r0, r0, r4
    subf r0, r5, r0
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

asm void fn_805E0630(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_807CA260@ha
    stw r30, 0x8(r1)
    lbz r0, lbl_807CA260@l(r31)
    extsb. r0, r0
    bne lbl_fn_805E0630_00000C50
    lis r30, lbl_807CA254@ha
    addi r3, r30, lbl_807CA254@l
    bl fn_805DA7B0
    lis r4, fn_805DA7C0@ha
    lis r5, lbl_807CA238@ha
    addi r3, r30, lbl_807CA254@l
    addi r4, r4, fn_805DA7C0@l
    addi r5, r5, lbl_807CA238@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_807CA260@l(r31)
lbl_fn_805E0630_00000C50:
    lis r30, lbl_807CA261@ha
    lbz r0, lbl_807CA261@l(r30)
    extsb. r0, r0
    bne lbl_fn_805E0630_00000C8C
    lis r31, lbl_807CA25C@ha
    addi r3, r31, lbl_807CA25C@l
    bl fn_805DAD10
    lis r4, fn_805DAD20@ha
    lis r5, lbl_807CA244@ha
    addi r3, r31, lbl_807CA25C@l
    addi r4, r4, fn_805DAD20@l
    addi r5, r5, lbl_807CA244@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_807CA261@l(r30)
lbl_fn_805E0630_00000C8C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805E06E0(void)
{
    nofralloc
    lis r4, lbl_807CA2D8@ha
    lis r6, lbl_8079A738@ha
    lwz r0, lbl_807CA2D8@l(r4)
    addi r6, r6, lbl_8079A738@l
    lwz r5, 0x10(r3)
    cmplwi r0, 0x2
    subfic r4, r5, 0x7f
    bne lbl_fn_805E06E0_00000D14
    slwi r8, r5, 1
    addi r5, r6, 0x990
    lhax r0, r5, r8
    slwi r7, r4, 1
    stw r0, 0x18(r3)
    addi r4, r6, 0xa90
    lhax r0, r5, r7
    stw r0, 0x1c(r3)
    lha r0, 0x990(r6)
    stw r0, 0x20(r3)
    lha r0, 0xfe(r5)
    stw r0, 0x24(r3)
    lhax r0, r4, r7
    stw r0, 0x28(r3)
    lhax r0, r4, r8
    stw r0, 0x2c(r3)
    blr
lbl_fn_805E06E0_00000D14:
    slwi r0, r5, 2
    addi r5, r6, 0x790
    lwzx r0, r5, r0
    slwi r4, r4, 2
    stw r0, 0x18(r3)
    li r0, 0x0
    lwzx r4, r5, r4
    stw r4, 0x1c(r3)
    lwz r4, 0x790(r6)
    stw r4, 0x20(r3)
    lwz r4, 0x1fc(r5)
    stw r4, 0x24(r3)
    stw r0, 0x28(r3)
    stw r0, 0x2c(r3)
    blr
}

asm void fn_805E0780(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    lis r27, lbl_807CA268@ha
    addi r27, r27, lbl_807CA268@l
    bl fn_80607DD0
    cmpwi r3, 0x0
    beq lbl_fn_805E0780_00000F38
    lwz r0, 0x6b8(r27)
    cmpwi r0, 0x0
    bne lbl_fn_805E0780_00000F38
    addi r5, r27, 0x0
    li r3, -0x1
    stb r3, 0x0(r5)
    li r0, 0x2
    addi r4, r27, 0x10
    stb r3, 0x1(r5)
    stb r3, 0x2(r5)
    stb r3, 0x3(r5)
    stb r3, 0x4(r5)
    stb r3, 0x5(r5)
    stb r3, 0x6(r5)
    stb r3, 0x7(r5)
    stb r3, 0x8(r5)
    stb r3, 0x9(r5)
    stb r3, 0xa(r5)
    stb r3, 0xb(r5)
    stb r3, 0xc(r5)
    stb r3, 0xd(r5)
    stb r3, 0xe(r5)
    stb r3, 0xf(r5)
    mtctr r0
lbl_fn_805E0780_00000DD8:
    stb r3, 0x0(r4)
    stb r3, 0x1(r4)
    stb r3, 0x2(r4)
    stb r3, 0x3(r4)
    stb r3, 0x4(r4)
    stb r3, 0x5(r4)
    stb r3, 0x6(r4)
    stb r3, 0x7(r4)
    stb r3, 0x8(r4)
    stb r3, 0x9(r4)
    stb r3, 0xa(r4)
    stb r3, 0xb(r4)
    stb r3, 0xc(r4)
    stb r3, 0xd(r4)
    stb r3, 0xe(r4)
    stb r3, 0xf(r4)
    stb r3, 0x10(r4)
    stb r3, 0x11(r4)
    stb r3, 0x12(r4)
    stb r3, 0x13(r4)
    stb r3, 0x14(r4)
    stb r3, 0x15(r4)
    stb r3, 0x16(r4)
    stb r3, 0x17(r4)
    stb r3, 0x18(r4)
    stb r3, 0x19(r4)
    stb r3, 0x1a(r4)
    stb r3, 0x1b(r4)
    stb r3, 0x1c(r4)
    stb r3, 0x1d(r4)
    stb r3, 0x1e(r4)
    stb r3, 0x1f(r4)
    stb r3, 0x20(r4)
    stb r3, 0x21(r4)
    stb r3, 0x22(r4)
    stb r3, 0x23(r4)
    stb r3, 0x24(r4)
    stb r3, 0x25(r4)
    stb r3, 0x26(r4)
    stb r3, 0x27(r4)
    stb r3, 0x28(r4)
    stb r3, 0x29(r4)
    stb r3, 0x2a(r4)
    stb r3, 0x2b(r4)
    stb r3, 0x2c(r4)
    stb r3, 0x2d(r4)
    stb r3, 0x2e(r4)
    stb r3, 0x2f(r4)
    addi r4, r4, 0x30
    bdnz lbl_fn_805E0780_00000DD8
    addi r0, r27, 0x78
    stw r0, 0x74(r27)
    li r25, 0x0
    li r26, 0x0
    li r28, 0x0
    lis r29, 0x5000
    li r30, -0x3c0
    li r31, 0x40
lbl_fn_805E0780_00000EC0:
    lwz r3, 0x74(r27)
    stwx r28, r3, r26
    lwz r0, 0x74(r27)
    add r3, r0, r26
    stw r29, 0x4(r3)
    stw r28, 0x8(r3)
    stw r30, 0xc(r3)
    stw r28, 0x14(r3)
    stw r31, 0x10(r3)
    sth r28, 0x60(r3)
    sth r28, 0x5c(r3)
    sth r28, 0x58(r3)
    sth r28, 0x54(r3)
    sth r28, 0x50(r3)
    sth r28, 0x4c(r3)
    sth r28, 0x48(r3)
    sth r28, 0x44(r3)
    sth r28, 0x40(r3)
    sth r28, 0x3c(r3)
    sth r28, 0x38(r3)
    sth r28, 0x34(r3)
    sth r28, 0x30(r3)
    bl fn_805E06E0
    addi r25, r25, 0x1
    addi r26, r26, 0x64
    cmpwi r25, 0x10
    blt lbl_fn_805E0780_00000EC0
    li r0, 0x1
    stw r0, 0x70(r27)
    stw r0, 0x6b8(r27)
lbl_fn_805E0780_00000F38:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_805E0980(void)
{
    nofralloc
    lis r4, lbl_807CA2DC@ha
    lis r3, lbl_807CA920@ha
    li r0, 0x0
    stw r0, lbl_807CA2DC@l(r4)
    stw r0, lbl_807CA920@l(r3)
    blr
}

asm void fn_805E09A0(void)
{
    nofralloc
    lis r4, lbl_807CA2D8@ha
    stw r3, lbl_807CA2D8@l(r4)
    blr
}

asm void fn_805E09B0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    li r0, 0x0
    stw r31, 0x1c(r1)
    lis r31, lbl_807CA268@ha
    addi r31, r31, lbl_807CA268@l
    stw r30, 0x18(r1)
    addi r8, r31, 0x10
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r9, 0x18(r3)
    lwz r10, 0x74(r31)
    lbzx r8, r8, r9
    extsb r8, r8
    mulli r8, r8, 0x64
    stwx r3, r10, r8
    add r30, r10, r8
    mr r3, r30
    stw r0, 0x4(r30)
    stw r4, 0x8(r30)
    stw r5, 0xc(r30)
    stw r6, 0x10(r30)
    stw r7, 0x14(r30)
    bl fn_805E06E0
    cmpwi r29, -0x388
    bgt lbl_fn_805E09B0_00000FFC
    li r0, 0x0
    b lbl_fn_805E09B0_00001024
lbl_fn_805E09B0_00000FFC:
    cmpwi r29, 0x3c
    blt lbl_fn_805E09B0_00001010
    lis r3, 0x1
    subi r0, r3, 0x9c
    b lbl_fn_805E09B0_00001024
lbl_fn_805E09B0_00001010:
    addi r0, r29, 0x388
    lis r3, lbl_8079A738@ha
    slwi r0, r0, 1
    addi r3, r3, lbl_8079A738@l
    lhzx r0, r3, r0
lbl_fn_805E09B0_00001024:
    sth r0, 0x30(r30)
    li r29, 0x0
    lwz r0, 0x70(r31)
    cmpwi r0, 0x0
    beq lbl_fn_805E09B0_0000104C
    cmplwi r0, 0x1
    beq lbl_fn_805E09B0_0000123C
    cmplwi r0, 0x2
    beq lbl_fn_805E09B0_0000144C
    b lbl_fn_805E09B0_00001704
lbl_fn_805E09B0_0000104C:
    lwz r3, 0x14(r30)
    lwz r0, 0x20(r30)
    add r3, r3, r0
    cmpwi r3, -0x388
    bgt lbl_fn_805E09B0_00001068
    li r0, 0x0
    b lbl_fn_805E09B0_00001090
lbl_fn_805E09B0_00001068:
    cmpwi r3, 0x3c
    blt lbl_fn_805E09B0_0000107C
    lis r3, 0x1
    subi r0, r3, 0x9c
    b lbl_fn_805E09B0_00001090
lbl_fn_805E09B0_0000107C:
    addi r0, r3, 0x388
    lis r3, lbl_8079A738@ha
    slwi r0, r0, 1
    addi r3, r3, lbl_8079A738@l
    lhzx r0, r3, r0
lbl_fn_805E09B0_00001090:
    sth r0, 0x34(r30)
    lwz r3, 0x14(r30)
    lwz r0, 0x20(r30)
    add r3, r3, r0
    cmpwi r3, -0x388
    bgt lbl_fn_805E09B0_000010B0
    li r0, 0x0
    b lbl_fn_805E09B0_000010D8
lbl_fn_805E09B0_000010B0:
    cmpwi r3, 0x3c
    blt lbl_fn_805E09B0_000010C4
    lis r3, 0x1
    subi r0, r3, 0x9c
    b lbl_fn_805E09B0_000010D8
lbl_fn_805E09B0_000010C4:
    addi r0, r3, 0x388
    lis r3, lbl_8079A738@ha
    slwi r0, r0, 1
    addi r3, r3, lbl_8079A738@l
    lhzx r0, r3, r0
lbl_fn_805E09B0_000010D8:
    sth r0, 0x38(r30)
    lwz r3, 0x14(r30)
    lwz r0, 0x24(r30)
    add r3, r3, r0
    subi r3, r3, 0x1e
    cmpwi r3, -0x388
    bgt lbl_fn_805E09B0_000010FC
    li r0, 0x0
    b lbl_fn_805E09B0_00001124
lbl_fn_805E09B0_000010FC:
    cmpwi r3, 0x3c
    blt lbl_fn_805E09B0_00001110
    lis r3, 0x1
    subi r0, r3, 0x9c
    b lbl_fn_805E09B0_00001124
lbl_fn_805E09B0_00001110:
    addi r0, r3, 0x388
    lis r3, lbl_8079A738@ha
    slwi r0, r0, 1
    addi r3, r3, lbl_8079A738@l
    lhzx r0, r3, r0
lbl_fn_805E09B0_00001124:
    sth r0, 0x3c(r30)
    lwz r4, 0x20(r30)
    lwz r0, 0x14(r30)
    lwz r3, 0xc(r30)
    add r0, r4, r0
    add r3, r3, r0
    cmpwi r3, -0x388
    bgt lbl_fn_805E09B0_0000114C
    li r0, 0x0
    b lbl_fn_805E09B0_00001174
lbl_fn_805E09B0_0000114C:
    cmpwi r3, 0x3c
    blt lbl_fn_805E09B0_00001160
    lis r3, 0x1
    subi r0, r3, 0x9c
    b lbl_fn_805E09B0_00001174
lbl_fn_805E09B0_00001160:
    addi r0, r3, 0x388
    lis r3, lbl_8079A738@ha
    slwi r0, r0, 1
    addi r3, r3, lbl_8079A738@l
    lhzx r0, r3, r0
lbl_fn_805E09B0_00001174:
    sth r0, 0x40(r30)
    lwz r4, 0x20(r30)
    lwz r0, 0x14(r30)
    lwz r3, 0xc(r30)
    add r0, r4, r0
    add r3, r3, r0
    cmpwi r3, -0x388
    bgt lbl_fn_805E09B0_0000119C
    li r0, 0x0
    b lbl_fn_805E09B0_000011C4
lbl_fn_805E09B0_0000119C:
    cmpwi r3, 0x3c
    blt lbl_fn_805E09B0_000011B0
    lis r3, 0x1
    subi r0, r3, 0x9c
    b lbl_fn_805E09B0_000011C4
lbl_fn_805E09B0_000011B0:
    addi r0, r3, 0x388
    lis r3, lbl_8079A738@ha
    slwi r0, r0, 1
    addi r3, r3, lbl_8079A738@l
    lhzx r0, r3, r0
lbl_fn_805E09B0_000011C4:
    sth r0, 0x44(r30)
    lwz r4, 0x14(r30)
    lwz r0, 0xc(r30)
    lwz r3, 0x24(r30)
    add r0, r4, r0
    add r3, r0, r3
    subi r3, r3, 0x1e
    cmpwi r3, -0x388
    bgt lbl_fn_805E09B0_000011F0
    li r0, 0x0
    b lbl_fn_805E09B0_00001218
lbl_fn_805E09B0_000011F0:
    cmpwi r3, 0x3c
    blt lbl_fn_805E09B0_00001204
    lis r3, 0x1
    subi r0, r3, 0x9c
    b lbl_fn_805E09B0_00001218
lbl_fn_805E09B0_00001204:
    addi r0, r3, 0x388
    lis r3, lbl_8079A738@ha
    slwi r0, r0, 1
    addi r3, r3, lbl_8079A738@l
    lhzx r0, r3, r0
lbl_fn_805E09B0_00001218:
    sth r0, 0x48(r30)
    li r0, 0x0
    sth r0, 0x4c(r30)
    sth r0, 0x50(r30)
    sth r0, 0x54(r30)
    sth r0, 0x58(r30)
    sth r0, 0x5c(r30)
    sth r0, 0x60(r30)
    b lbl_fn_805E09B0_00001704
lbl_fn_805E09B0_0000123C:
    lwz r4, 0x20(r30)
    lwz r0, 0x14(r30)
    lwz r3, 0x18(r30)
    add r0, r4, r0
    add r3, r3, r0
    cmpwi r3, -0x388
    bgt lbl_fn_805E09B0_00001260
    li r0, 0x0
    b lbl_fn_805E09B0_00001288
lbl_fn_805E09B0_00001260:
    cmpwi r3, 0x3c
    blt lbl_fn_805E09B0_00001274
    lis r3, 0x1
    subi r0, r3, 0x9c
    b lbl_fn_805E09B0_00001288
lbl_fn_805E09B0_00001274:
    addi r0, r3, 0x388
    lis r3, lbl_8079A738@ha
    slwi r0, r0, 1
    addi r3, r3, lbl_8079A738@l
    lhzx r0, r3, r0
lbl_fn_805E09B0_00001288:
    sth r0, 0x34(r30)
    lwz r4, 0x20(r30)
    lwz r0, 0x14(r30)
    lwz r3, 0x1c(r30)
    add r0, r4, r0
    add r3, r3, r0
    cmpwi r3, -0x388
    bgt lbl_fn_805E09B0_000012B0
    li r0, 0x0
    b lbl_fn_805E09B0_000012D8
lbl_fn_805E09B0_000012B0:
    cmpwi r3, 0x3c
    blt lbl_fn_805E09B0_000012C4
    lis r3, 0x1
    subi r0, r3, 0x9c
    b lbl_fn_805E09B0_000012D8
lbl_fn_805E09B0_000012C4:
    addi r0, r3, 0x388
    lis r3, lbl_8079A738@ha
    slwi r0, r0, 1
    addi r3, r3, lbl_8079A738@l
    lhzx r0, r3, r0
lbl_fn_805E09B0_000012D8:
    sth r0, 0x38(r30)
    lwz r3, 0x14(r30)
    lwz r0, 0x24(r30)
    add r3, r3, r0
    subi r3, r3, 0x1e
    cmpwi r3, -0x388
    bgt lbl_fn_805E09B0_000012FC
    li r0, 0x0
    b lbl_fn_805E09B0_00001324
lbl_fn_805E09B0_000012FC:
    cmpwi r3, 0x3c
    blt lbl_fn_805E09B0_00001310
    lis r3, 0x1
    subi r0, r3, 0x9c
    b lbl_fn_805E09B0_00001324
lbl_fn_805E09B0_00001310:
    addi r0, r3, 0x388
    lis r3, lbl_8079A738@ha
    slwi r0, r0, 1
    addi r3, r3, lbl_8079A738@l
    lhzx r0, r3, r0
lbl_fn_805E09B0_00001324:
    sth r0, 0x3c(r30)
    lwz r5, 0x20(r30)
    lwz r3, 0x18(r30)
    lwz r4, 0x14(r30)
    lwz r0, 0xc(r30)
    add r3, r5, r3
    add r0, r4, r0
    add r3, r3, r0
    cmpwi r3, -0x388
    bgt lbl_fn_805E09B0_00001354
    li r0, 0x0
    b lbl_fn_805E09B0_0000137C
lbl_fn_805E09B0_00001354:
    cmpwi r3, 0x3c
    blt lbl_fn_805E09B0_00001368
    lis r3, 0x1
    subi r0, r3, 0x9c
    b lbl_fn_805E09B0_0000137C
lbl_fn_805E09B0_00001368:
    addi r0, r3, 0x388
    lis r3, lbl_8079A738@ha
    slwi r0, r0, 1
    addi r3, r3, lbl_8079A738@l
    lhzx r0, r3, r0
lbl_fn_805E09B0_0000137C:
    sth r0, 0x40(r30)
    lwz r5, 0x20(r30)
    lwz r3, 0x1c(r30)
    lwz r4, 0x14(r30)
    lwz r0, 0xc(r30)
    add r3, r5, r3
    add r0, r4, r0
    add r3, r3, r0
    cmpwi r3, -0x388
    bgt lbl_fn_805E09B0_000013AC
    li r0, 0x0
    b lbl_fn_805E09B0_000013D4
lbl_fn_805E09B0_000013AC:
    cmpwi r3, 0x3c
    blt lbl_fn_805E09B0_000013C0
    lis r3, 0x1
    subi r0, r3, 0x9c
    b lbl_fn_805E09B0_000013D4
lbl_fn_805E09B0_000013C0:
    addi r0, r3, 0x388
    lis r3, lbl_8079A738@ha
    slwi r0, r0, 1
    addi r3, r3, lbl_8079A738@l
    lhzx r0, r3, r0
lbl_fn_805E09B0_000013D4:
    sth r0, 0x44(r30)
    lwz r4, 0x14(r30)
    lwz r0, 0xc(r30)
    lwz r3, 0x24(r30)
    add r0, r4, r0
    add r3, r0, r3
    subi r3, r3, 0x1e
    cmpwi r3, -0x388
    bgt lbl_fn_805E09B0_00001400
    li r0, 0x0
    b lbl_fn_805E09B0_00001428
lbl_fn_805E09B0_00001400:
    cmpwi r3, 0x3c
    blt lbl_fn_805E09B0_00001414
    lis r3, 0x1
    subi r0, r3, 0x9c
    b lbl_fn_805E09B0_00001428
lbl_fn_805E09B0_00001414:
    addi r0, r3, 0x388
    lis r3, lbl_8079A738@ha
    slwi r0, r0, 1
    addi r3, r3, lbl_8079A738@l
    lhzx r0, r3, r0
lbl_fn_805E09B0_00001428:
    sth r0, 0x48(r30)
    li r0, 0x0
    sth r0, 0x4c(r30)
    sth r0, 0x50(r30)
    sth r0, 0x54(r30)
    sth r0, 0x58(r30)
    sth r0, 0x5c(r30)
    sth r0, 0x60(r30)
    b lbl_fn_805E09B0_00001704
lbl_fn_805E09B0_0000144C:
    lwz r4, 0x20(r30)
    lwz r0, 0x14(r30)
    lwz r3, 0x18(r30)
    add r0, r4, r0
    add r3, r3, r0
    cmpwi r3, -0x388
    bgt lbl_fn_805E09B0_00001470
    li r0, 0x0
    b lbl_fn_805E09B0_00001498
lbl_fn_805E09B0_00001470:
    cmpwi r3, 0x3c
    blt lbl_fn_805E09B0_00001484
    lis r3, 0x1
    subi r0, r3, 0x9c
    b lbl_fn_805E09B0_00001498
lbl_fn_805E09B0_00001484:
    addi r0, r3, 0x388
    lis r3, lbl_8079A738@ha
    slwi r0, r0, 1
    addi r3, r3, lbl_8079A738@l
    lhzx r0, r3, r0
lbl_fn_805E09B0_00001498:
    sth r0, 0x34(r30)
    lwz r4, 0x20(r30)
    lwz r0, 0x14(r30)
    lwz r3, 0x1c(r30)
    add r0, r4, r0
    add r3, r3, r0
    cmpwi r3, -0x388
    bgt lbl_fn_805E09B0_000014C0
    li r0, 0x0
    b lbl_fn_805E09B0_000014E8
lbl_fn_805E09B0_000014C0:
    cmpwi r3, 0x3c
    blt lbl_fn_805E09B0_000014D4
    lis r3, 0x1
    subi r0, r3, 0x9c
    b lbl_fn_805E09B0_000014E8
lbl_fn_805E09B0_000014D4:
    addi r0, r3, 0x388
    lis r3, lbl_8079A738@ha
    slwi r0, r0, 1
    addi r3, r3, lbl_8079A738@l
    lhzx r0, r3, r0
lbl_fn_805E09B0_000014E8:
    sth r0, 0x38(r30)
    lwz r4, 0x24(r30)
    lwz r0, 0x14(r30)
    lwz r3, 0x28(r30)
    add r0, r4, r0
    add r3, r3, r0
    cmpwi r3, -0x388
    bgt lbl_fn_805E09B0_00001510
    li r0, 0x0
    b lbl_fn_805E09B0_00001538
lbl_fn_805E09B0_00001510:
    cmpwi r3, 0x3c
    blt lbl_fn_805E09B0_00001524
    lis r3, 0x1
    subi r0, r3, 0x9c
    b lbl_fn_805E09B0_00001538
lbl_fn_805E09B0_00001524:
    addi r0, r3, 0x388
    lis r3, lbl_8079A738@ha
    slwi r0, r0, 1
    addi r3, r3, lbl_8079A738@l
    lhzx r0, r3, r0
lbl_fn_805E09B0_00001538:
    sth r0, 0x3c(r30)
    lwz r4, 0x24(r30)
    lwz r0, 0x14(r30)
    lwz r3, 0x2c(r30)
    add r0, r4, r0
    add r3, r3, r0
    cmpwi r3, -0x388
    bgt lbl_fn_805E09B0_00001560
    li r0, 0x0
    b lbl_fn_805E09B0_00001588
lbl_fn_805E09B0_00001560:
    cmpwi r3, 0x3c
    blt lbl_fn_805E09B0_00001574
    lis r3, 0x1
    subi r0, r3, 0x9c
    b lbl_fn_805E09B0_00001588
lbl_fn_805E09B0_00001574:
    addi r0, r3, 0x388
    lis r3, lbl_8079A738@ha
    slwi r0, r0, 1
    addi r3, r3, lbl_8079A738@l
    lhzx r0, r3, r0
lbl_fn_805E09B0_00001588:
    sth r0, 0x58(r30)
    lwz r5, 0x20(r30)
    lwz r3, 0x18(r30)
    lwz r4, 0x14(r30)
    lwz r0, 0xc(r30)
    add r3, r5, r3
    add r0, r4, r0
    add r3, r3, r0
    cmpwi r3, -0x388
    bgt lbl_fn_805E09B0_000015B8
    li r0, 0x0
    b lbl_fn_805E09B0_000015E0
lbl_fn_805E09B0_000015B8:
    cmpwi r3, 0x3c
    blt lbl_fn_805E09B0_000015CC
    lis r3, 0x1
    subi r0, r3, 0x9c
    b lbl_fn_805E09B0_000015E0
lbl_fn_805E09B0_000015CC:
    addi r0, r3, 0x388
    lis r3, lbl_8079A738@ha
    slwi r0, r0, 1
    addi r3, r3, lbl_8079A738@l
    lhzx r0, r3, r0
lbl_fn_805E09B0_000015E0:
    sth r0, 0x40(r30)
    lwz r5, 0x20(r30)
    lwz r3, 0x1c(r30)
    lwz r4, 0x14(r30)
    lwz r0, 0xc(r30)
    add r3, r5, r3
    add r0, r4, r0
    add r3, r3, r0
    cmpwi r3, -0x388
    bgt lbl_fn_805E09B0_00001610
    li r0, 0x0
    b lbl_fn_805E09B0_00001638
lbl_fn_805E09B0_00001610:
    cmpwi r3, 0x3c
    blt lbl_fn_805E09B0_00001624
    lis r3, 0x1
    subi r0, r3, 0x9c
    b lbl_fn_805E09B0_00001638
lbl_fn_805E09B0_00001624:
    addi r0, r3, 0x388
    lis r3, lbl_8079A738@ha
    slwi r0, r0, 1
    addi r3, r3, lbl_8079A738@l
    lhzx r0, r3, r0
lbl_fn_805E09B0_00001638:
    sth r0, 0x44(r30)
    lwz r5, 0x24(r30)
    lwz r3, 0x28(r30)
    lwz r4, 0x14(r30)
    lwz r0, 0xc(r30)
    add r3, r5, r3
    add r0, r4, r0
    add r3, r3, r0
    cmpwi r3, -0x388
    bgt lbl_fn_805E09B0_00001668
    li r0, 0x0
    b lbl_fn_805E09B0_00001690
lbl_fn_805E09B0_00001668:
    cmpwi r3, 0x3c
    blt lbl_fn_805E09B0_0000167C
    lis r3, 0x1
    subi r0, r3, 0x9c
    b lbl_fn_805E09B0_00001690
lbl_fn_805E09B0_0000167C:
    addi r0, r3, 0x388
    lis r3, lbl_8079A738@ha
    slwi r0, r0, 1
    addi r3, r3, lbl_8079A738@l
    lhzx r0, r3, r0
lbl_fn_805E09B0_00001690:
    sth r0, 0x48(r30)
    lwz r5, 0x24(r30)
    lwz r3, 0x2c(r30)
    lwz r4, 0x14(r30)
    lwz r0, 0xc(r30)
    add r3, r5, r3
    add r0, r4, r0
    add r3, r3, r0
    cmpwi r3, -0x388
    bgt lbl_fn_805E09B0_000016C0
    li r0, 0x0
    b lbl_fn_805E09B0_000016E8
lbl_fn_805E09B0_000016C0:
    cmpwi r3, 0x3c
    blt lbl_fn_805E09B0_000016D4
    lis r3, 0x1
    subi r0, r3, 0x9c
    b lbl_fn_805E09B0_000016E8
lbl_fn_805E09B0_000016D4:
    addi r0, r3, 0x388
    lis r3, lbl_8079A738@ha
    slwi r0, r0, 1
    addi r3, r3, lbl_8079A738@l
    lhzx r0, r3, r0
lbl_fn_805E09B0_000016E8:
    sth r0, 0x5c(r30)
    li r0, 0x0
    oris r29, r29, 0x8000
    sth r0, 0x4c(r30)
    sth r0, 0x50(r30)
    sth r0, 0x54(r30)
    sth r0, 0x60(r30)
lbl_fn_805E09B0_00001704:
    bl OSDisableInterrupts
    lhz r4, 0x30(r30)
    li r0, 0x0
    mr r31, r3
    sth r4, 0x92(r28)
    addi r3, r28, 0x3e
    sth r0, 0x94(r28)
    lhz r0, 0x34(r30)
    sth r0, 0x3c(r28)
    cmpwi r0, 0x0
    beq lbl_fn_805E09B0_00001734
    ori r29, r29, 0x1
lbl_fn_805E09B0_00001734:
    li r0, 0x0
    sth r0, 0x0(r3)
    lhz r0, 0x38(r30)
    sth r0, 0x2(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805E09B0_00001750
    ori r29, r29, 0x2
lbl_fn_805E09B0_00001750:
    li r0, 0x0
    sth r0, 0x4(r3)
    lhz r0, 0x40(r30)
    sth r0, 0x6(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805E09B0_0000176C
    oris r29, r29, 0x1
lbl_fn_805E09B0_0000176C:
    li r0, 0x0
    sth r0, 0x8(r3)
    lhz r0, 0x44(r30)
    sth r0, 0xa(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805E09B0_00001788
    oris r29, r29, 0x2
lbl_fn_805E09B0_00001788:
    li r0, 0x0
    sth r0, 0xc(r3)
    lhz r0, 0x4c(r30)
    sth r0, 0xe(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805E09B0_000017A4
    oris r29, r29, 0x20
lbl_fn_805E09B0_000017A4:
    li r0, 0x0
    sth r0, 0x10(r3)
    lhz r0, 0x50(r30)
    sth r0, 0x12(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805E09B0_000017C0
    oris r29, r29, 0x40
lbl_fn_805E09B0_000017C0:
    li r0, 0x0
    sth r0, 0x14(r3)
    lhz r0, 0x58(r30)
    sth r0, 0x16(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805E09B0_000017DC
    oris r29, r29, 0x400
lbl_fn_805E09B0_000017DC:
    li r0, 0x0
    sth r0, 0x18(r3)
    lhz r0, 0x5c(r30)
    sth r0, 0x1a(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805E09B0_000017F8
    oris r29, r29, 0x800
lbl_fn_805E09B0_000017F8:
    li r0, 0x0
    sth r0, 0x1c(r3)
    lhz r0, 0x3c(r30)
    sth r0, 0x1e(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805E09B0_00001814
    ori r29, r29, 0x8
lbl_fn_805E09B0_00001814:
    li r0, 0x0
    sth r0, 0x20(r3)
    lhz r0, 0x48(r30)
    sth r0, 0x22(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805E09B0_00001830
    oris r29, r29, 0x8
lbl_fn_805E09B0_00001830:
    li r0, 0x0
    sth r0, 0x24(r3)
    lhz r0, 0x54(r30)
    sth r0, 0x26(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805E09B0_0000184C
    oris r29, r29, 0x100
lbl_fn_805E09B0_0000184C:
    li r0, 0x0
    sth r0, 0x28(r3)
    lhz r0, 0x60(r30)
    sth r0, 0x2a(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805E09B0_00001868
    oris r29, r29, 0x2000
lbl_fn_805E09B0_00001868:
    lwz r0, 0x1c(r28)
    li r30, 0x0
    sth r30, 0x2c(r3)
    addi r3, r28, 0x102
    ori r0, r0, 0x112
    li r4, 0x0
    stw r29, 0x34(r28)
    li r5, 0x20
    stw r0, 0x1c(r28)
    bl memset
    lwz r0, 0x1c(r28)
    mr r3, r31
    sth r30, 0x100(r28)
    oris r0, r0, 0x300
    stw r0, 0x1c(r28)
    bl OSRestoreInterrupts
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805E1300(void)
{
    nofralloc
    lis r4, lbl_807CA278@ha
    lwz r0, 0x18(r3)
    addi r4, r4, lbl_807CA278@l
    lis r3, lbl_807CA2DC@ha
    lbzx r0, r4, r0
    li r4, 0x0
    lwz r3, lbl_807CA2DC@l(r3)
    extsb r0, r0
    mulli r0, r0, 0x64
    stwx r4, r3, r0
    blr
}

asm void fn_805E1330(void)
{
    nofralloc
    lis r5, lbl_807CA278@ha
    lwz r0, 0x18(r3)
    addi r5, r5, lbl_807CA278@l
    lis r3, lbl_807CA2DC@ha
    lbzx r0, r5, r0
    lwz r3, lbl_807CA2DC@l(r3)
    extsb r0, r0
    mulli r0, r0, 0x64
    add r3, r3, r0
    stw r4, 0x8(r3)
    lwz r0, 0x4(r3)
    oris r0, r0, 0x1000
    stw r0, 0x4(r3)
    blr
}

asm void fn_805E1370(void)
{
    nofralloc
    lis r5, lbl_807CA278@ha
    lwz r0, 0x18(r3)
    addi r5, r5, lbl_807CA278@l
    lis r3, lbl_807CA2DC@ha
    lbzx r0, r5, r0
    lwz r3, lbl_807CA2DC@l(r3)
    extsb r0, r0
    mulli r0, r0, 0x64
    add r3, r3, r0
    stw r4, 0xc(r3)
    lwz r0, 0x4(r3)
    oris r0, r0, 0x4000
    stw r0, 0x4(r3)
    blr
}

asm void fn_805E13B0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_807CA278@ha
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    addi r5, r5, lbl_807CA278@l
    stw r31, 0xc(r1)
    lwz r0, 0x18(r3)
    lis r3, lbl_807CA2DC@ha
    lwz r3, lbl_807CA2DC@l(r3)
    lbzx r0, r5, r0
    extsb r0, r0
    mulli r0, r0, 0x64
    add r31, r3, r0
    bge lbl_fn_805E13B0_000019C4
    li r0, 0x0
    b lbl_fn_805E13B0_000019D4
lbl_fn_805E13B0_000019C4:
    cmpwi r4, 0x7f
    li r0, 0x7f
    bgt lbl_fn_805E13B0_000019D4
    mr r0, r4
lbl_fn_805E13B0_000019D4:
    stw r0, 0x10(r31)
    mr r3, r31
    bl fn_805E06E0
    lwz r0, 0x4(r31)
    oris r0, r0, 0x4000
    stw r0, 0x4(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
