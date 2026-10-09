#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_18(void);
extern void _restgpr_19(void);
extern void _restgpr_20(void);
extern void _restgpr_21(void);
extern void _restgpr_22(void);
extern void _restgpr_23(void);
extern void _savegpr_18(void);
extern void _savegpr_19(void);
extern void _savegpr_20(void);
extern void _savegpr_21(void);
extern void _savegpr_22(void);
extern void _savegpr_23(void);
extern void dtor_80084684(void);
extern void fn_800610A0(void);
extern void fn_800BDB58(void);
extern void fn_800D59B8(void);
extern void fn_80473EFC(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_80695720(void);

/* External data declarations */
extern u8 lbl_80731150[];
extern u8 lbl_80777960[];
extern u8 lbl_807779A8[];
extern u8 lbl_807779F0[];
extern u8 lbl_80777A30[];
extern u8 lbl_80777A70[];
extern u8 lbl_80777AB0[];

/* Small data declarations */
extern u32 lbl_8087EEE0;
extern u32 lbl_8087EFB4;
extern u32 lbl_808809A0;
extern u32 lbl_808809A4;
extern u32 lbl_808809A8;

/* Function declarations */
void fn_8005E000(void);
void fn_8005E3E0(void);
void fn_8005E3E4(void);
void fn_8005E40C(void);
void fn_8005E7F4(void);
void fn_8005E838(void);
void fn_8005ED68(void);
void fn_8005ED6C(void);
void fn_8005EDF0(void);
void fn_8005EE38(void);
void fn_8005EEA0(void);
void fn_8005EEE0(void);
void fn_8005F36C(void);
void fn_8005F90C(void);
void fn_8005FD40(void);
void fn_8005FD80(void);
void fn_800602A8(void);
void fn_800602E8(void);
void fn_800607C0(void);
void fn_80060D58(void);

asm void fn_8005E000(void)
{
    nofralloc
    stwu r1, -0x180(r1)
    mflr r0
    stw r0, 0x184(r1)
    addi r11, r1, 0xf0
    stfd f31, 0x170(r1)
    psq_st f31, 0x178(r1), 0, 0
    stfd f30, 0x160(r1)
    psq_st f30, 0x168(r1), 0, 0
    stfd f29, 0x150(r1)
    psq_st f29, 0x158(r1), 0, 0
    stfd f28, 0x140(r1)
    psq_st f28, 0x148(r1), 0, 0
    stfd f27, 0x130(r1)
    psq_st f27, 0x138(r1), 0, 0
    stfd f26, 0x120(r1)
    psq_st f26, 0x128(r1), 0, 0
    stfd f25, 0x110(r1)
    psq_st f25, 0x118(r1), 0, 0
    stfd f24, 0x100(r1)
    psq_st f24, 0x108(r1), 0, 0
    stfd f23, 0xf0(r1)
    psq_st f23, 0xf8(r1), 0, 0
    bl _savegpr_20
    lwz r9, 0xc(r3)
    fmr f23, f1
    lwz r0, 0x8(r3)
    fmr f24, f2
    addi r8, r9, 0x18
    fmr f25, f3
    fmr f26, f4
    fmr f27, f5
    cmpw r8, r0
    fmr f28, f6
    lfs f31, 0x188(r1)
    fmr f29, f7
    fmr f30, f8
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    ble lbl_fn_8005E000_000000B0
    li r31, 0x0
    b lbl_fn_8005E000_000000D4
lbl_fn_8005E000_000000B0:
    lwz r0, 0x4(r3)
    add. r31, r0, r9
    beq lbl_fn_8005E000_000000C8
    lis r4, lbl_80777A70@ha
    addi r4, r4, lbl_80777A70@l
    stw r4, 0x0(r31)
lbl_fn_8005E000_000000C8:
    lwz r4, 0xc(r3)
    addi r0, r4, 0x18
    stw r0, 0xc(r3)
lbl_fn_8005E000_000000D4:
    cmpwi r31, 0x0
    beq lbl_fn_8005E000_00000380
    lwz r6, 0xc(r3)
    lwz r0, 0x8(r3)
    addi r4, r6, 0x74
    cmpw r4, r0
    ble lbl_fn_8005E000_000000F8
    li r25, 0x0
    b lbl_fn_8005E000_00000128
lbl_fn_8005E000_000000F8:
    lwz r0, 0x4(r3)
    lis r4, fn_8005E3E0@ha
    addi r4, r4, fn_8005E3E0@l
    li r5, 0x0
    add r3, r0, r6
    li r6, 0x18
    li r7, 0x4
    bl fn_80695720
    lwz r4, 0xc(r26)
    mr r25, r3
    addi r0, r4, 0x74
    stw r0, 0xc(r26)
lbl_fn_8005E000_00000128:
    cmpwi r25, 0x0
    beq lbl_fn_8005E000_00000380
    stfs f23, 0x70(r1)
    addi r24, r1, 0x7c
    addi r6, r1, 0x70
    lfs f2, lbl_808809A0
    stfs f24, 0x74(r1)
    mr r4, r24
    mr r5, r24
    addi r3, r26, 0xa4
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x78(r1)
    psq_st f1, 0x0(r24), 0, 0
    stfs f2, 0x84(r1)
    bl fn_805F93C0
    fadds f3, f23, f26
    addi r22, r1, 0x64
    lfs f0, lbl_808809A0
    addi r23, r1, 0x88
    lfs f2, 0x84(r1)
    addi r6, r1, 0x58
    stfs f2, 0x90(r1)
    fmr f2, f0
    psq_l f1, 0x0(r24), 0, 0
    mr r4, r22
    stfs f3, 0x58(r1)
    mr r5, r22
    addi r3, r26, 0xa4
    stfs f24, 0x5c(r1)
    psq_st f1, 0x0(r23), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f0, 0x60(r1)
    psq_st f1, 0x0(r22), 0, 0
    stfs f2, 0x6c(r1)
    bl fn_805F93C0
    fadds f4, f23, f26
    addi r21, r1, 0x4c
    fadds f3, f24, f27
    lfs f0, lbl_808809A0
    lfs f2, 0x6c(r1)
    addi r24, r1, 0x94
    stfs f2, 0x9c(r1)
    fmr f2, f0
    psq_l f1, 0x0(r22), 0, 0
    addi r6, r1, 0x40
    stfs f4, 0x40(r1)
    mr r4, r21
    mr r5, r21
    stfs f3, 0x44(r1)
    addi r3, r26, 0xa4
    psq_st f1, 0x0(r24), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f0, 0x48(r1)
    psq_st f1, 0x0(r21), 0, 0
    stfs f2, 0x54(r1)
    bl fn_805F93C0
    fadds f3, f24, f27
    addi r20, r1, 0x34
    lfs f0, lbl_808809A0
    addi r22, r1, 0xa0
    lfs f2, 0x54(r1)
    addi r6, r1, 0x28
    stfs f2, 0xa8(r1)
    fmr f2, f0
    psq_l f1, 0x0(r21), 0, 0
    mr r4, r20
    stfs f23, 0x28(r1)
    mr r5, r20
    addi r3, r26, 0xa4
    stfs f3, 0x2c(r1)
    psq_st f1, 0x0(r22), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f0, 0x30(r1)
    psq_st f1, 0x0(r20), 0, 0
    stfs f2, 0x3c(r1)
    bl fn_805F93C0
    lfs f2, 0x3c(r1)
    addi r3, r1, 0xac
    psq_l f1, 0x0(r20), 0, 0
    addi r4, r1, 0x20
    psq_st f1, 0x0(r3), 0, 0
    addi r5, r1, 0x18
    psq_l f1, 0x0(r23), 0, 0
    addi r6, r1, 0x10
    stfs f2, 0xb4(r1)
    addi r7, r1, 0x8
    lfs f2, 0x90(r1)
    psq_st f1, 0x0(r25), 0, 0
    stfs f2, 0x8(r25)
    lfs f2, 0x9c(r1)
    stfs f28, 0x20(r1)
    stfs f29, 0x24(r1)
    stw r27, 0xc(r25)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x10(r25), 0, 0
    psq_l f1, 0x0(r24), 0, 0
    psq_st f1, 0x18(r25), 0, 0
    stfs f2, 0x20(r25)
    lfs f2, 0xa8(r1)
    stfs f30, 0x18(r1)
    stfs f29, 0x1c(r1)
    stw r27, 0x24(r25)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x28(r25), 0, 0
    psq_l f1, 0x0(r22), 0, 0
    psq_st f1, 0x30(r25), 0, 0
    stfs f2, 0x38(r25)
    lfs f2, 0xb4(r1)
    stfs f30, 0x10(r1)
    stfs f31, 0x14(r1)
    stw r27, 0x3c(r25)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x40(r25), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x48(r25), 0, 0
    stfs f2, 0x50(r25)
    stfs f28, 0x8(r1)
    stfs f31, 0xc(r1)
    stw r27, 0x54(r25)
    psq_l f1, 0x0(r7), 0, 0
    psq_st f1, 0x58(r25), 0, 0
    lwz r0, 0xa0(r26)
    cmpwi r0, 0x6
    beq lbl_fn_8005E000_00000328
    cmpwi r0, 0x8
    beq lbl_fn_8005E000_00000328
    cmpwi r0, 0xd
    bne lbl_fn_8005E000_0000032C
lbl_fn_8005E000_00000328:
    li r29, 0x0
lbl_fn_8005E000_0000032C:
    stw r29, 0x4(r31)
    cmpwi r29, 0x1
    stw r28, 0xc(r31)
    stw r25, 0x8(r31)
    stb r30, 0x10(r31)
    beq lbl_fn_8005E000_00000358
    lwz r0, 0xa0(r26)
    cmpwi r0, 0x8
    beq lbl_fn_8005E000_00000358
    cmpwi r0, 0xd
    bne lbl_fn_8005E000_00000364
lbl_fn_8005E000_00000358:
    li r0, 0x0
    stb r0, 0x11(r31)
    b lbl_fn_8005E000_0000036C
lbl_fn_8005E000_00000364:
    li r0, 0x1
    stb r0, 0x11(r31)
lbl_fn_8005E000_0000036C:
    fmr f1, f25
    lwz r3, lbl_8087EFB4
    lwz r5, 0xa0(r26)
    mr r4, r31
    bl fn_800BDB58
lbl_fn_8005E000_00000380:
    addi r11, r1, 0xf0
    psq_l f31, 0x178(r1), 0, 0
    lfd f31, 0x170(r1)
    psq_l f30, 0x168(r1), 0, 0
    lfd f30, 0x160(r1)
    psq_l f29, 0x158(r1), 0, 0
    lfd f29, 0x150(r1)
    psq_l f28, 0x148(r1), 0, 0
    lfd f28, 0x140(r1)
    psq_l f27, 0x138(r1), 0, 0
    lfd f27, 0x130(r1)
    psq_l f26, 0x128(r1), 0, 0
    lfd f26, 0x120(r1)
    psq_l f25, 0x118(r1), 0, 0
    lfd f25, 0x110(r1)
    psq_l f24, 0x108(r1), 0, 0
    lfd f24, 0x100(r1)
    psq_l f23, 0xf8(r1), 0, 0
    lfd f23, 0xf0(r1)
    bl _restgpr_20
    lwz r0, 0x184(r1)
    mtlr r0
    addi r1, r1, 0x180
    blr
}

asm void fn_8005E3E0(void)
{
    nofralloc
    blr
}

asm void fn_8005E3E4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lfs f0, 0x18(r1)
    stfs f0, 0x8(r1)
    bl fn_8005E40C
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8005E40C(void)
{
    nofralloc
    stwu r1, -0x180(r1)
    mflr r0
    stw r0, 0x184(r1)
    addi r11, r1, 0xf0
    stfd f31, 0x170(r1)
    psq_st f31, 0x178(r1), 0, 0
    stfd f30, 0x160(r1)
    psq_st f30, 0x168(r1), 0, 0
    stfd f29, 0x150(r1)
    psq_st f29, 0x158(r1), 0, 0
    stfd f28, 0x140(r1)
    psq_st f28, 0x148(r1), 0, 0
    stfd f27, 0x130(r1)
    psq_st f27, 0x138(r1), 0, 0
    stfd f26, 0x120(r1)
    psq_st f26, 0x128(r1), 0, 0
    stfd f25, 0x110(r1)
    psq_st f25, 0x118(r1), 0, 0
    stfd f24, 0x100(r1)
    psq_st f24, 0x108(r1), 0, 0
    stfd f23, 0xf0(r1)
    psq_st f23, 0xf8(r1), 0, 0
    bl _savegpr_20
    lwz r9, 0xc(r3)
    fmr f23, f1
    lwz r0, 0x8(r3)
    fmr f24, f2
    addi r8, r9, 0x1c
    fmr f25, f3
    fmr f26, f4
    fmr f27, f5
    cmpw r8, r0
    fmr f28, f6
    lfs f31, 0x188(r1)
    fmr f29, f7
    fmr f30, f8
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    ble lbl_fn_8005E40C_000004BC
    li r31, 0x0
    b lbl_fn_8005E40C_000004E0
lbl_fn_8005E40C_000004BC:
    lwz r0, 0x4(r3)
    add. r31, r0, r9
    beq lbl_fn_8005E40C_000004D4
    lis r4, lbl_80777A30@ha
    addi r4, r4, lbl_80777A30@l
    stw r4, 0x0(r31)
lbl_fn_8005E40C_000004D4:
    lwz r4, 0xc(r3)
    addi r0, r4, 0x1c
    stw r0, 0xc(r3)
lbl_fn_8005E40C_000004E0:
    cmpwi r31, 0x0
    beq lbl_fn_8005E40C_00000794
    lwz r6, 0xc(r3)
    lwz r0, 0x8(r3)
    addi r4, r6, 0x74
    cmpw r4, r0
    ble lbl_fn_8005E40C_00000504
    li r25, 0x0
    b lbl_fn_8005E40C_00000534
lbl_fn_8005E40C_00000504:
    lwz r0, 0x4(r3)
    lis r4, fn_8005E3E0@ha
    addi r4, r4, fn_8005E3E0@l
    li r5, 0x0
    add r3, r0, r6
    li r6, 0x18
    li r7, 0x4
    bl fn_80695720
    lwz r4, 0xc(r26)
    mr r25, r3
    addi r0, r4, 0x74
    stw r0, 0xc(r26)
lbl_fn_8005E40C_00000534:
    cmpwi r25, 0x0
    beq lbl_fn_8005E40C_00000794
    stfs f23, 0x70(r1)
    addi r24, r1, 0x7c
    addi r6, r1, 0x70
    lfs f2, lbl_808809A0
    stfs f24, 0x74(r1)
    mr r4, r24
    mr r5, r24
    addi r3, r26, 0xa4
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x78(r1)
    psq_st f1, 0x0(r24), 0, 0
    stfs f2, 0x84(r1)
    bl fn_805F93C0
    fadds f3, f23, f26
    addi r22, r1, 0x64
    lfs f0, lbl_808809A0
    addi r23, r1, 0x88
    lfs f2, 0x84(r1)
    addi r6, r1, 0x58
    stfs f2, 0x90(r1)
    fmr f2, f0
    psq_l f1, 0x0(r24), 0, 0
    mr r4, r22
    stfs f3, 0x58(r1)
    mr r5, r22
    addi r3, r26, 0xa4
    stfs f24, 0x5c(r1)
    psq_st f1, 0x0(r23), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f0, 0x60(r1)
    psq_st f1, 0x0(r22), 0, 0
    stfs f2, 0x6c(r1)
    bl fn_805F93C0
    fadds f4, f23, f26
    addi r21, r1, 0x4c
    fadds f3, f24, f27
    lfs f0, lbl_808809A0
    lfs f2, 0x6c(r1)
    addi r24, r1, 0x94
    stfs f2, 0x9c(r1)
    fmr f2, f0
    psq_l f1, 0x0(r22), 0, 0
    addi r6, r1, 0x40
    stfs f4, 0x40(r1)
    mr r4, r21
    mr r5, r21
    stfs f3, 0x44(r1)
    addi r3, r26, 0xa4
    psq_st f1, 0x0(r24), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f0, 0x48(r1)
    psq_st f1, 0x0(r21), 0, 0
    stfs f2, 0x54(r1)
    bl fn_805F93C0
    fadds f3, f24, f27
    addi r20, r1, 0x34
    lfs f0, lbl_808809A0
    addi r22, r1, 0xa0
    lfs f2, 0x54(r1)
    addi r6, r1, 0x28
    stfs f2, 0xa8(r1)
    fmr f2, f0
    psq_l f1, 0x0(r21), 0, 0
    mr r4, r20
    stfs f23, 0x28(r1)
    mr r5, r20
    addi r3, r26, 0xa4
    stfs f3, 0x2c(r1)
    psq_st f1, 0x0(r22), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f0, 0x30(r1)
    psq_st f1, 0x0(r20), 0, 0
    stfs f2, 0x3c(r1)
    bl fn_805F93C0
    lfs f2, 0x3c(r1)
    addi r3, r1, 0xac
    psq_l f1, 0x0(r20), 0, 0
    addi r4, r1, 0x20
    psq_st f1, 0x0(r3), 0, 0
    addi r5, r1, 0x18
    psq_l f1, 0x0(r23), 0, 0
    addi r6, r1, 0x10
    stfs f2, 0xb4(r1)
    addi r7, r1, 0x8
    lfs f2, 0x90(r1)
    li r8, 0x1
    psq_st f1, 0x0(r25), 0, 0
    stfs f2, 0x8(r25)
    lfs f2, 0x9c(r1)
    stfs f28, 0x20(r1)
    stfs f29, 0x24(r1)
    stw r27, 0xc(r25)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x10(r25), 0, 0
    psq_l f1, 0x0(r24), 0, 0
    psq_st f1, 0x18(r25), 0, 0
    stfs f2, 0x20(r25)
    lfs f2, 0xa8(r1)
    stfs f30, 0x18(r1)
    stfs f29, 0x1c(r1)
    stw r27, 0x24(r25)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x28(r25), 0, 0
    psq_l f1, 0x0(r22), 0, 0
    psq_st f1, 0x30(r25), 0, 0
    stfs f2, 0x38(r25)
    lfs f2, 0xb4(r1)
    stfs f30, 0x10(r1)
    stfs f31, 0x14(r1)
    stw r27, 0x3c(r25)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x40(r25), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x48(r25), 0, 0
    stfs f2, 0x50(r25)
    stfs f28, 0x8(r1)
    stfs f31, 0xc(r1)
    stw r27, 0x54(r25)
    psq_l f1, 0x0(r7), 0, 0
    psq_st f1, 0x58(r25), 0, 0
    lwz r0, 0xa0(r26)
    cmpwi r0, 0x6
    beq lbl_fn_8005E40C_00000738
    cmpwi r0, 0x8
    beq lbl_fn_8005E40C_00000738
    cmpwi r0, 0xd
    bne lbl_fn_8005E40C_0000073C
lbl_fn_8005E40C_00000738:
    li r8, 0x0
lbl_fn_8005E40C_0000073C:
    stw r8, 0x4(r31)
    cmpwi r8, 0x1
    stw r28, 0xc(r31)
    stw r25, 0x8(r31)
    stb r30, 0x10(r31)
    beq lbl_fn_8005E40C_00000768
    lwz r0, 0xa0(r26)
    cmpwi r0, 0x8
    beq lbl_fn_8005E40C_00000768
    cmpwi r0, 0xd
    bne lbl_fn_8005E40C_00000774
lbl_fn_8005E40C_00000768:
    li r0, 0x0
    stb r0, 0x11(r31)
    b lbl_fn_8005E40C_0000077C
lbl_fn_8005E40C_00000774:
    li r0, 0x1
    stb r0, 0x11(r31)
lbl_fn_8005E40C_0000077C:
    stw r29, 0x14(r31)
    fmr f1, f25
    mr r4, r31
    lwz r3, lbl_8087EFB4
    lwz r5, 0xa0(r26)
    bl fn_800BDB58
lbl_fn_8005E40C_00000794:
    addi r11, r1, 0xf0
    psq_l f31, 0x178(r1), 0, 0
    lfd f31, 0x170(r1)
    psq_l f30, 0x168(r1), 0, 0
    lfd f30, 0x160(r1)
    psq_l f29, 0x158(r1), 0, 0
    lfd f29, 0x150(r1)
    psq_l f28, 0x148(r1), 0, 0
    lfd f28, 0x140(r1)
    psq_l f27, 0x138(r1), 0, 0
    lfd f27, 0x130(r1)
    psq_l f26, 0x128(r1), 0, 0
    lfd f26, 0x120(r1)
    psq_l f25, 0x118(r1), 0, 0
    lfd f25, 0x110(r1)
    psq_l f24, 0x108(r1), 0, 0
    lfd f24, 0x100(r1)
    psq_l f23, 0xf8(r1), 0, 0
    lfd f23, 0xf0(r1)
    bl _restgpr_20
    lwz r0, 0x184(r1)
    mtlr r0
    addi r1, r1, 0x180
    blr
}

asm void fn_8005E7F4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lfs f9, lbl_808809A0
    li r7, 0x0
    stw r0, 0x24(r1)
    lfs f0, 0x28(r1)
    stfs f0, 0x8(r1)
    lfs f0, lbl_808809A4
    stfs f9, 0xc(r1)
    stfs f9, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    bl fn_8005E838
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8005E838(void)
{
    nofralloc
    stwu r1, -0x1e0(r1)
    mflr r0
    stw r0, 0x1e4(r1)
    addi r11, r1, 0x110
    stfd f31, 0x1d0(r1)
    psq_st f31, 0x1d8(r1), 0, 0
    stfd f30, 0x1c0(r1)
    psq_st f30, 0x1c8(r1), 0, 0
    stfd f29, 0x1b0(r1)
    psq_st f29, 0x1b8(r1), 0, 0
    stfd f28, 0x1a0(r1)
    psq_st f28, 0x1a8(r1), 0, 0
    stfd f27, 0x190(r1)
    psq_st f27, 0x198(r1), 0, 0
    stfd f26, 0x180(r1)
    psq_st f26, 0x188(r1), 0, 0
    stfd f25, 0x170(r1)
    psq_st f25, 0x178(r1), 0, 0
    stfd f24, 0x160(r1)
    psq_st f24, 0x168(r1), 0, 0
    stfd f23, 0x150(r1)
    psq_st f23, 0x158(r1), 0, 0
    stfd f22, 0x140(r1)
    psq_st f22, 0x148(r1), 0, 0
    stfd f21, 0x130(r1)
    psq_st f21, 0x138(r1), 0, 0
    stfd f20, 0x120(r1)
    psq_st f20, 0x128(r1), 0, 0
    stfd f19, 0x110(r1)
    psq_st f19, 0x118(r1), 0, 0
    bl _savegpr_20
    lwz r9, 0xc(r3)
    fmr f20, f1
    lwz r0, 0x8(r3)
    fmr f21, f2
    addi r8, r9, 0x20
    fmr f22, f3
    fmr f19, f4
    fmr f23, f5
    cmpw r8, r0
    fmr f24, f6
    lfs f27, 0x1e8(r1)
    fmr f25, f7
    fmr f26, f8
    lfs f28, 0x1ec(r1)
    mr r25, r3
    lfs f29, 0x1f0(r1)
    mr r26, r4
    lfs f30, 0x1f4(r1)
    lfs f31, 0x1f8(r1)
    mr r27, r5
    mr r28, r6
    mr r29, r7
    ble lbl_fn_8005E838_00000918
    li r31, 0x0
    b lbl_fn_8005E838_0000093C
lbl_fn_8005E838_00000918:
    lwz r0, 0x4(r3)
    add. r31, r0, r9
    beq lbl_fn_8005E838_00000930
    lis r4, lbl_807779F0@ha
    addi r4, r4, lbl_807779F0@l
    stw r4, 0x0(r31)
lbl_fn_8005E838_00000930:
    lwz r4, 0xc(r3)
    addi r0, r4, 0x20
    stw r0, 0xc(r3)
lbl_fn_8005E838_0000093C:
    cmpwi r31, 0x0
    beq lbl_fn_8005E838_00000CE8
    lwz r6, 0xc(r3)
    lwz r0, 0x8(r3)
    addi r4, r6, 0x94
    cmpw r4, r0
    ble lbl_fn_8005E838_00000960
    li r23, 0x0
    b lbl_fn_8005E838_00000990
lbl_fn_8005E838_00000960:
    lwz r0, 0x4(r3)
    lis r4, fn_8005ED68@ha
    addi r4, r4, fn_8005ED68@l
    li r5, 0x0
    add r3, r0, r6
    li r6, 0x20
    li r7, 0x4
    bl fn_80695720
    lwz r4, 0xc(r25)
    mr r23, r3
    addi r0, r4, 0x94
    stw r0, 0xc(r25)
lbl_fn_8005E838_00000990:
    cmpwi r23, 0x0
    beq lbl_fn_8005E838_00000CE8
    stfs f20, 0x90(r1)
    addi r24, r1, 0x9c
    addi r6, r1, 0x90
    lfs f2, lbl_808809A0
    stfs f21, 0x94(r1)
    mr r4, r24
    mr r5, r24
    addi r3, r25, 0xa4
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x98(r1)
    psq_st f1, 0x0(r24), 0, 0
    stfs f2, 0xa4(r1)
    bl fn_805F93C0
    fadds f3, f20, f19
    addi r22, r1, 0x84
    lfs f0, lbl_808809A0
    addi r30, r1, 0xa8
    lfs f2, 0xa4(r1)
    addi r6, r1, 0x78
    stfs f2, 0xb0(r1)
    fmr f2, f0
    psq_l f1, 0x0(r24), 0, 0
    mr r4, r22
    stfs f3, 0x78(r1)
    mr r5, r22
    addi r3, r25, 0xa4
    stfs f21, 0x7c(r1)
    psq_st f1, 0x0(r30), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f0, 0x80(r1)
    psq_st f1, 0x0(r22), 0, 0
    stfs f2, 0x8c(r1)
    bl fn_805F93C0
    fadds f4, f20, f19
    addi r21, r1, 0x6c
    fadds f3, f21, f23
    lfs f0, lbl_808809A0
    lfs f2, 0x8c(r1)
    addi r24, r1, 0xb4
    stfs f2, 0xbc(r1)
    fmr f2, f0
    psq_l f1, 0x0(r22), 0, 0
    addi r6, r1, 0x60
    stfs f4, 0x60(r1)
    mr r4, r21
    mr r5, r21
    stfs f3, 0x64(r1)
    addi r3, r25, 0xa4
    psq_st f1, 0x0(r24), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f0, 0x68(r1)
    psq_st f1, 0x0(r21), 0, 0
    stfs f2, 0x74(r1)
    bl fn_805F93C0
    fadds f3, f21, f23
    addi r20, r1, 0x54
    lfs f0, lbl_808809A0
    addi r22, r1, 0xc0
    lfs f2, 0x74(r1)
    addi r6, r1, 0x48
    stfs f2, 0xc8(r1)
    fmr f2, f0
    psq_l f1, 0x0(r21), 0, 0
    mr r4, r20
    stfs f20, 0x48(r1)
    mr r5, r20
    addi r3, r25, 0xa4
    stfs f3, 0x4c(r1)
    psq_st f1, 0x0(r22), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f0, 0x50(r1)
    psq_st f1, 0x0(r20), 0, 0
    stfs f2, 0x5c(r1)
    bl fn_805F93C0
    lfs f2, 0x5c(r1)
    addi r3, r1, 0xcc
    psq_l f1, 0x0(r20), 0, 0
    addi r4, r1, 0x38
    psq_st f1, 0x0(r3), 0, 0
    addi r5, r1, 0x28
    psq_l f1, 0x0(r30), 0, 0
    addi r6, r1, 0x18
    stfs f2, 0xd4(r1)
    addi r7, r1, 0x8
    lfs f2, 0xb0(r1)
    li r30, 0x1
    psq_st f1, 0x0(r23), 0, 0
    stfs f2, 0x8(r23)
    stfs f24, 0x38(r1)
    stfs f25, 0x3c(r1)
    stw r26, 0xc(r23)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x10(r23), 0, 0
    psq_l f1, 0x0(r24), 0, 0
    stfs f28, 0x40(r1)
    stfs f29, 0x44(r1)
    psq_l f2, 0x8(r4), 0, 0
    psq_st f2, 0x18(r23), 0, 0
    lfs f2, 0xbc(r1)
    psq_st f1, 0x20(r23), 0, 0
    stfs f2, 0x28(r23)
    stfs f26, 0x28(r1)
    stfs f25, 0x2c(r1)
    stw r26, 0x2c(r23)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x30(r23), 0, 0
    psq_l f1, 0x0(r22), 0, 0
    stfs f30, 0x30(r1)
    stfs f29, 0x34(r1)
    psq_l f2, 0x8(r5), 0, 0
    psq_st f2, 0x38(r23), 0, 0
    lfs f2, 0xc8(r1)
    psq_st f1, 0x40(r23), 0, 0
    stfs f2, 0x48(r23)
    stfs f26, 0x18(r1)
    stfs f27, 0x1c(r1)
    stw r26, 0x4c(r23)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x50(r23), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    stfs f30, 0x20(r1)
    stfs f31, 0x24(r1)
    psq_l f2, 0x8(r6), 0, 0
    psq_st f2, 0x58(r23), 0, 0
    lfs f2, 0xd4(r1)
    psq_st f1, 0x60(r23), 0, 0
    stfs f2, 0x68(r23)
    stfs f24, 0x8(r1)
    stfs f27, 0xc(r1)
    stw r26, 0x6c(r23)
    psq_l f1, 0x0(r7), 0, 0
    stfs f28, 0x10(r1)
    stfs f31, 0x14(r1)
    psq_st f1, 0x70(r23), 0, 0
    psq_l f2, 0x8(r7), 0, 0
    psq_st f2, 0x78(r23), 0, 0
    lwz r0, 0xa0(r25)
    cmpwi r0, 0x6
    beq lbl_fn_8005E838_00000BD4
    cmpwi r0, 0x8
    beq lbl_fn_8005E838_00000BD4
    cmpwi r0, 0xd
    bne lbl_fn_8005E838_00000BD8
lbl_fn_8005E838_00000BD4:
    li r30, 0x0
lbl_fn_8005E838_00000BD8:
    cmpwi r27, 0x0
    stw r30, 0x4(r31)
    li r24, 0x0
    beq lbl_fn_8005E838_00000C28
    lwz r0, 0x28(r27)
    mr r26, r24
    cmpwi r0, 0x0
    bne lbl_fn_8005E838_00000C18
    mr r3, r27
    bl fn_800D59B8
    cmpwi r3, 0x0
    bne lbl_fn_8005E838_00000C1C
    addi r3, r27, 0x20
    bl fn_80473EFC
    cmpwi r3, 0x3
    bne lbl_fn_8005E838_00000C1C
lbl_fn_8005E838_00000C18:
    li r26, 0x1
lbl_fn_8005E838_00000C1C:
    cmpwi r26, 0x0
    beq lbl_fn_8005E838_00000C28
    li r24, 0x1
lbl_fn_8005E838_00000C28:
    cmpwi r24, 0x0
    beq lbl_fn_8005E838_00000C34
    b lbl_fn_8005E838_00000C38
lbl_fn_8005E838_00000C34:
    li r27, 0x0
lbl_fn_8005E838_00000C38:
    cmpwi r28, 0x0
    stw r27, 0xc(r31)
    li r27, 0x0
    beq lbl_fn_8005E838_00000C88
    lwz r0, 0x28(r28)
    mr r26, r27
    cmpwi r0, 0x0
    bne lbl_fn_8005E838_00000C78
    mr r3, r28
    bl fn_800D59B8
    cmpwi r3, 0x0
    bne lbl_fn_8005E838_00000C7C
    addi r3, r28, 0x20
    bl fn_80473EFC
    cmpwi r3, 0x3
    bne lbl_fn_8005E838_00000C7C
lbl_fn_8005E838_00000C78:
    li r26, 0x1
lbl_fn_8005E838_00000C7C:
    cmpwi r26, 0x0
    beq lbl_fn_8005E838_00000C88
    li r27, 0x1
lbl_fn_8005E838_00000C88:
    cmpwi r27, 0x0
    beq lbl_fn_8005E838_00000C94
    b lbl_fn_8005E838_00000C98
lbl_fn_8005E838_00000C94:
    li r28, 0x0
lbl_fn_8005E838_00000C98:
    stw r28, 0x10(r31)
    cmpwi r30, 0x1
    stw r23, 0x8(r31)
    beq lbl_fn_8005E838_00000CBC
    lwz r0, 0xa0(r25)
    cmpwi r0, 0x8
    beq lbl_fn_8005E838_00000CBC
    cmpwi r0, 0xd
    bne lbl_fn_8005E838_00000CC8
lbl_fn_8005E838_00000CBC:
    li r0, 0x0
    stb r0, 0x14(r31)
    b lbl_fn_8005E838_00000CD0
lbl_fn_8005E838_00000CC8:
    li r0, 0x1
    stb r0, 0x14(r31)
lbl_fn_8005E838_00000CD0:
    stw r29, 0x18(r31)
    fmr f1, f22
    mr r4, r31
    lwz r3, lbl_8087EFB4
    lwz r5, 0xa0(r25)
    bl fn_800BDB58
lbl_fn_8005E838_00000CE8:
    addi r11, r1, 0x110
    psq_l f31, 0x1d8(r1), 0, 0
    lfd f31, 0x1d0(r1)
    psq_l f30, 0x1c8(r1), 0, 0
    lfd f30, 0x1c0(r1)
    psq_l f29, 0x1b8(r1), 0, 0
    lfd f29, 0x1b0(r1)
    psq_l f28, 0x1a8(r1), 0, 0
    lfd f28, 0x1a0(r1)
    psq_l f27, 0x198(r1), 0, 0
    lfd f27, 0x190(r1)
    psq_l f26, 0x188(r1), 0, 0
    lfd f26, 0x180(r1)
    psq_l f25, 0x178(r1), 0, 0
    lfd f25, 0x170(r1)
    psq_l f24, 0x168(r1), 0, 0
    lfd f24, 0x160(r1)
    psq_l f23, 0x158(r1), 0, 0
    lfd f23, 0x150(r1)
    psq_l f22, 0x148(r1), 0, 0
    lfd f22, 0x140(r1)
    psq_l f21, 0x138(r1), 0, 0
    lfd f21, 0x130(r1)
    psq_l f20, 0x128(r1), 0, 0
    lfd f20, 0x120(r1)
    psq_l f19, 0x118(r1), 0, 0
    lfd f19, 0x110(r1)
    bl _restgpr_20
    lwz r0, 0x1e4(r1)
    mtlr r0
    addi r1, r1, 0x1e0
    blr
}

asm void fn_8005ED68(void)
{
    nofralloc
    blr
}

asm void fn_8005ED6C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r8, 0x4330
    lis r7, lbl_80731150@ha
    stw r0, 0x24(r1)
    fmr f3, f1
    lfs f1, lbl_808809A0
    lwz r9, lbl_8087EEE0
    lfd f4, lbl_80731150@l(r7)
    fmr f2, f1
    lwz r6, 0x40(r9)
    fmr f6, f1
    lwz r0, 0x3c(r9)
    fmr f7, f1
    xoris r6, r6, 0x8000
    stw r6, 0x14(r1)
    xoris r0, r0, 0x8000
    lfs f8, lbl_808809A4
    li r6, 0x1
    stw r8, 0x10(r1)
    li r7, 0x1
    lfd f0, 0x10(r1)
    stw r0, 0x1c(r1)
    fsubs f5, f0, f4
    stw r8, 0x18(r1)
    lfd f0, 0x18(r1)
    stfs f8, 0x8(r1)
    fsubs f4, f0, f4
    bl fn_8005E000
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8005EDF0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    fmr f9, f6
    lfs f6, lbl_808809A0
    stw r0, 0x24(r1)
    lfs f0, 0x28(r1)
    stfs f7, 0x8(r1)
    fmr f7, f6
    stfs f8, 0xc(r1)
    fmr f8, f9
    stfs f0, 0x10(r1)
    lfs f0, 0x2c(r1)
    stfs f0, 0x14(r1)
    bl fn_8005EEE0
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8005EE38(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    fmr f9, f6
    lfs f6, lbl_808809A0
    stw r0, 0x34(r1)
    lfs f0, 0x38(r1)
    stfs f7, 0x8(r1)
    fmr f7, f6
    stfs f8, 0xc(r1)
    fmr f8, f9
    stfs f0, 0x10(r1)
    lfs f0, 0x3c(r1)
    stfs f0, 0x14(r1)
    lfs f0, 0x40(r1)
    stfs f0, 0x18(r1)
    lfs f0, 0x44(r1)
    stfs f0, 0x1c(r1)
    lfs f0, 0x48(r1)
    stfs f0, 0x20(r1)
    lfs f0, 0x4c(r1)
    stfs f0, 0x24(r1)
    bl fn_8005F36C
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8005EEA0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    lfs f0, 0x28(r1)
    stfs f0, 0x8(r1)
    lfs f0, 0x2c(r1)
    stfs f0, 0xc(r1)
    lfs f0, 0x30(r1)
    stfs f0, 0x10(r1)
    lfs f0, 0x34(r1)
    stfs f0, 0x14(r1)
    bl fn_8005EEE0
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8005EEE0(void)
{
    nofralloc
    stwu r1, -0x1d0(r1)
    mflr r0
    stw r0, 0x1d4(r1)
    addi r11, r1, 0xe0
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
    stfd f23, 0x140(r1)
    psq_st f23, 0x148(r1), 0, 0
    stfd f22, 0x130(r1)
    psq_st f22, 0x138(r1), 0, 0
    stfd f21, 0x120(r1)
    psq_st f21, 0x128(r1), 0, 0
    stfd f20, 0x110(r1)
    psq_st f20, 0x118(r1), 0, 0
    stfd f19, 0x100(r1)
    psq_st f19, 0x108(r1), 0, 0
    stfd f18, 0xf0(r1)
    psq_st f18, 0xf8(r1), 0, 0
    stfd f17, 0xe0(r1)
    psq_st f17, 0xe8(r1), 0, 0
    bl _savegpr_18
    lwz r9, 0xc(r3)
    fmr f17, f1
    lwz r0, 0x8(r3)
    fmr f18, f2
    addi r8, r9, 0x1c
    fmr f19, f3
    fmr f20, f4
    fmr f21, f5
    cmpw r8, r0
    fmr f28, f6
    lfs f22, 0x1d8(r1)
    fmr f27, f7
    fmr f26, f8
    lfs f23, 0x1dc(r1)
    mr r21, r3
    lfs f24, 0x1e0(r1)
    mr r22, r4
    lfs f25, 0x1e4(r1)
    mr r23, r5
    mr r24, r6
    mr r25, r7
    ble lbl_fn_8005EEE0_00000FCC
    li r27, 0x0
    b lbl_fn_8005EEE0_00000FF0
lbl_fn_8005EEE0_00000FCC:
    lwz r0, 0x4(r3)
    add. r27, r0, r9
    beq lbl_fn_8005EEE0_00000FE4
    lis r4, lbl_80777A30@ha
    addi r4, r4, lbl_80777A30@l
    stw r4, 0x0(r27)
lbl_fn_8005EEE0_00000FE4:
    lwz r4, 0xc(r3)
    addi r0, r4, 0x1c
    stw r0, 0xc(r3)
lbl_fn_8005EEE0_00000FF0:
    cmpwi r27, 0x0
    beq lbl_fn_8005EEE0_000012DC
    lwz r6, 0xc(r3)
    lwz r0, 0x8(r3)
    addi r4, r6, 0x74
    cmpw r4, r0
    ble lbl_fn_8005EEE0_00001014
    li r31, 0x0
    b lbl_fn_8005EEE0_00001044
lbl_fn_8005EEE0_00001014:
    lwz r0, 0x4(r3)
    lis r4, fn_8005E3E0@ha
    addi r4, r4, fn_8005E3E0@l
    li r5, 0x0
    add r3, r0, r6
    li r6, 0x18
    li r7, 0x4
    bl fn_80695720
    lwz r4, 0xc(r21)
    mr r31, r3
    addi r0, r4, 0x74
    stw r0, 0xc(r21)
lbl_fn_8005EEE0_00001044:
    cmpwi r31, 0x0
    beq lbl_fn_8005EEE0_000012DC
    fmr f1, f26
    addi r3, r1, 0x70
    li r4, 0x7a
    bl fn_805F8E70
    fadds f4, f17, f28
    lfs f26, lbl_808809A0
    fadds f3, f18, f27
    lfs f0, lbl_808809A8
    frsp f27, f17
    stfs f4, 0x34(r1)
    fmuls f20, f20, f0
    stfs f3, 0x38(r1)
    fmuls f21, f21, f0
    addi r30, r1, 0x1c
    frsp f28, f18
    stfs f26, 0x3c(r1)
    frsp f29, f26
    addi r29, r1, 0x10
    frsp f30, f3
    addi r28, r1, 0x8
    frsp f31, f4
    li r26, 0x0
    li r20, 0x0
    li r19, 0x0
lbl_fn_8005EEE0_000010AC:
    cmpwi r26, 0x0
    li r0, 0x0
    beq lbl_fn_8005EEE0_000010C0
    cmpwi r26, 0x3
    bne lbl_fn_8005EEE0_000010C4
lbl_fn_8005EEE0_000010C0:
    li r0, 0x1
lbl_fn_8005EEE0_000010C4:
    cmpwi r0, 0x0
    beq lbl_fn_8005EEE0_000010D4
    fneg f0, f20
    b lbl_fn_8005EEE0_000010D8
lbl_fn_8005EEE0_000010D4:
    fmr f0, f20
lbl_fn_8005EEE0_000010D8:
    srwi r0, r26, 31
    addi r6, r1, 0x40
    add r0, r0, r26
    stfsux f0, r6, r19
    srawi. r0, r0, 1
    beq lbl_fn_8005EEE0_000010F8
    fneg f0, f21
    b lbl_fn_8005EEE0_000010FC
lbl_fn_8005EEE0_000010F8:
    fmr f0, f21
lbl_fn_8005EEE0_000010FC:
    stfs f0, 0x4(r6)
    addi r18, r1, 0x40
    add r18, r18, r19
    addi r3, r1, 0x70
    stfs f26, 0x8(r6)
    mr r4, r18
    mr r5, r18
    lfs f0, 0x0(r6)
    stfs f17, 0x28(r1)
    fadds f0, f0, f27
    stfs f18, 0x2c(r1)
    stfs f0, 0x0(r6)
    frsp f0, f0
    lfs f3, 0x4(r6)
    fsubs f4, f0, f31
    stfs f26, 0x30(r1)
    fadds f0, f3, f28
    stfs f4, 0x1c(r1)
    stfs f0, 0x4(r6)
    frsp f0, f0
    lfs f3, 0x8(r6)
    fsubs f4, f0, f30
    fadds f0, f3, f26
    stfs f4, 0x20(r1)
    fsubs f2, f0, f29
    stfs f0, 0x8(r6)
    psq_l f1, 0x0(r30), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x24(r1)
    stfs f2, 0x8(r6)
    bl fn_805F93C0
    lfs f0, 0x0(r18)
    mr r4, r29
    mr r5, r29
    addi r3, r21, 0xa4
    fadds f0, f0, f31
    stfs f0, 0x0(r18)
    lfs f0, 0x4(r18)
    fadds f0, f0, f30
    stfs f0, 0x4(r18)
    lfs f0, 0x8(r18)
    fadds f0, f0, f29
    stfs f0, 0x8(r18)
    frsp f2, f0
    psq_l f1, 0x0(r18), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x18(r1)
    bl fn_805F93C0
    addi r3, r1, 0x40
    psq_l f1, 0x0(r29), 0, 0
    add r3, r3, r19
    cmpwi r26, 0x0
    psq_st f1, 0x0(r3), 0, 0
    li r0, 0x0
    lfs f2, 0x18(r1)
    stfs f2, 0x8(r3)
    beq lbl_fn_8005EEE0_000011E8
    cmpwi r26, 0x3
    bne lbl_fn_8005EEE0_000011EC
lbl_fn_8005EEE0_000011E8:
    li r0, 0x1
lbl_fn_8005EEE0_000011EC:
    cmpwi r0, 0x0
    beq lbl_fn_8005EEE0_000011FC
    fmr f0, f22
    b lbl_fn_8005EEE0_00001200
lbl_fn_8005EEE0_000011FC:
    fmr f0, f24
lbl_fn_8005EEE0_00001200:
    srwi r0, r26, 31
    stfs f0, 0x8(r1)
    add r0, r0, r26
    srawi. r0, r0, 1
    beq lbl_fn_8005EEE0_0000121C
    fmr f0, f23
    b lbl_fn_8005EEE0_00001220
lbl_fn_8005EEE0_0000121C:
    fmr f0, f25
lbl_fn_8005EEE0_00001220:
    addi r4, r1, 0x40
    add r3, r31, r20
    add r4, r4, r19
    addi r26, r26, 0x1
    lfs f2, 0x8(r4)
    cmpwi r26, 0x4
    psq_l f1, 0x0(r4), 0, 0
    addi r20, r20, 0x18
    psq_st f1, 0x0(r3), 0, 0
    addi r19, r19, 0xc
    stfs f2, 0x8(r3)
    stfs f0, 0xc(r1)
    stw r22, 0xc(r3)
    psq_l f1, 0x0(r28), 0, 0
    psq_st f1, 0x10(r3), 0, 0
    blt lbl_fn_8005EEE0_000010AC
    lwz r0, 0xa0(r21)
    li r3, 0x1
    cmpwi r0, 0x6
    beq lbl_fn_8005EEE0_00001280
    cmpwi r0, 0x8
    beq lbl_fn_8005EEE0_00001280
    cmpwi r0, 0xd
    bne lbl_fn_8005EEE0_00001284
lbl_fn_8005EEE0_00001280:
    li r3, 0x0
lbl_fn_8005EEE0_00001284:
    stw r3, 0x4(r27)
    cmpwi r3, 0x1
    stw r23, 0xc(r27)
    stw r31, 0x8(r27)
    stb r25, 0x10(r27)
    beq lbl_fn_8005EEE0_000012B0
    lwz r0, 0xa0(r21)
    cmpwi r0, 0x8
    beq lbl_fn_8005EEE0_000012B0
    cmpwi r0, 0xd
    bne lbl_fn_8005EEE0_000012BC
lbl_fn_8005EEE0_000012B0:
    li r0, 0x0
    stb r0, 0x11(r27)
    b lbl_fn_8005EEE0_000012C4
lbl_fn_8005EEE0_000012BC:
    li r0, 0x1
    stb r0, 0x11(r27)
lbl_fn_8005EEE0_000012C4:
    stw r24, 0x14(r27)
    fmr f1, f19
    mr r4, r27
    lwz r3, lbl_8087EFB4
    lwz r5, 0xa0(r21)
    bl fn_800BDB58
lbl_fn_8005EEE0_000012DC:
    addi r11, r1, 0xe0
    psq_l f31, 0x1c8(r1), 0, 0
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
    psq_l f23, 0x148(r1), 0, 0
    lfd f23, 0x140(r1)
    psq_l f22, 0x138(r1), 0, 0
    lfd f22, 0x130(r1)
    psq_l f21, 0x128(r1), 0, 0
    lfd f21, 0x120(r1)
    psq_l f20, 0x118(r1), 0, 0
    lfd f20, 0x110(r1)
    psq_l f19, 0x108(r1), 0, 0
    lfd f19, 0x100(r1)
    psq_l f18, 0xf8(r1), 0, 0
    lfd f18, 0xf0(r1)
    psq_l f17, 0xe8(r1), 0, 0
    lfd f17, 0xe0(r1)
    bl _restgpr_18
    lwz r0, 0x1d4(r1)
    mtlr r0
    addi r1, r1, 0x1d0
    blr
}

asm void fn_8005F36C(void)
{
    nofralloc
    stwu r1, -0x200(r1)
    mflr r0
    stw r0, 0x204(r1)
    addi r11, r1, 0xe0
    stfd f31, 0x1f0(r1)
    psq_st f31, 0x1f8(r1), 0, 0
    stfd f30, 0x1e0(r1)
    psq_st f30, 0x1e8(r1), 0, 0
    stfd f29, 0x1d0(r1)
    psq_st f29, 0x1d8(r1), 0, 0
    stfd f28, 0x1c0(r1)
    psq_st f28, 0x1c8(r1), 0, 0
    stfd f27, 0x1b0(r1)
    psq_st f27, 0x1b8(r1), 0, 0
    stfd f26, 0x1a0(r1)
    psq_st f26, 0x1a8(r1), 0, 0
    stfd f25, 0x190(r1)
    psq_st f25, 0x198(r1), 0, 0
    stfd f24, 0x180(r1)
    psq_st f24, 0x188(r1), 0, 0
    stfd f23, 0x170(r1)
    psq_st f23, 0x178(r1), 0, 0
    stfd f22, 0x160(r1)
    psq_st f22, 0x168(r1), 0, 0
    stfd f21, 0x150(r1)
    psq_st f21, 0x158(r1), 0, 0
    stfd f20, 0x140(r1)
    psq_st f20, 0x148(r1), 0, 0
    stfd f19, 0x130(r1)
    psq_st f19, 0x138(r1), 0, 0
    stfd f18, 0x120(r1)
    psq_st f18, 0x128(r1), 0, 0
    stfd f17, 0x110(r1)
    psq_st f17, 0x118(r1), 0, 0
    stfd f16, 0x100(r1)
    psq_st f16, 0x108(r1), 0, 0
    stfd f15, 0xf0(r1)
    psq_st f15, 0xf8(r1), 0, 0
    stfd f14, 0xe0(r1)
    psq_st f14, 0xe8(r1), 0, 0
    bl _savegpr_19
    lwz r9, 0xc(r3)
    fmr f16, f1
    lwz r0, 0x8(r3)
    fmr f17, f2
    addi r8, r9, 0x20
    fmr f18, f4
    fmr f19, f5
    cmpw r8, r0
    fmr f28, f6
    fmr f15, f7
    stfs f3, 0x8(r1)
    fmr f14, f8
    lfs f20, 0x208(r1)
    mr r21, r3
    lfs f21, 0x20c(r1)
    lfs f22, 0x210(r1)
    mr r22, r4
    lfs f23, 0x214(r1)
    mr r23, r5
    lfs f24, 0x218(r1)
    mr r24, r6
    lfs f25, 0x21c(r1)
    mr r25, r7
    lfs f26, 0x220(r1)
    lfs f27, 0x224(r1)
    ble lbl_fn_8005F36C_00001480
    li r27, 0x0
    b lbl_fn_8005F36C_000014A4
lbl_fn_8005F36C_00001480:
    lwz r0, 0x4(r3)
    add. r27, r0, r9
    beq lbl_fn_8005F36C_00001498
    lis r4, lbl_807779F0@ha
    addi r4, r4, lbl_807779F0@l
    stw r4, 0x0(r27)
lbl_fn_8005F36C_00001498:
    lwz r4, 0xc(r3)
    addi r0, r4, 0x20
    stw r0, 0xc(r3)
lbl_fn_8005F36C_000014A4:
    cmpwi r27, 0x0
    beq lbl_fn_8005F36C_00001864
    lwz r6, 0xc(r3)
    lwz r0, 0x8(r3)
    addi r4, r6, 0x94
    cmpw r4, r0
    ble lbl_fn_8005F36C_000014C8
    li r31, 0x0
    b lbl_fn_8005F36C_000014F8
lbl_fn_8005F36C_000014C8:
    lwz r0, 0x4(r3)
    lis r4, fn_8005ED68@ha
    addi r4, r4, fn_8005ED68@l
    li r5, 0x0
    add r3, r0, r6
    li r6, 0x20
    li r7, 0x4
    bl fn_80695720
    lwz r4, 0xc(r21)
    mr r31, r3
    addi r0, r4, 0x94
    stw r0, 0xc(r21)
lbl_fn_8005F36C_000014F8:
    cmpwi r31, 0x0
    beq lbl_fn_8005F36C_00001864
    fmr f1, f14
    addi r3, r1, 0x78
    li r4, 0x7a
    bl fn_805F8E70
    fadds f4, f16, f28
    lfs f28, lbl_808809A0
    fadds f3, f17, f15
    lfs f0, lbl_808809A8
    frsp f15, f16
    stfs f4, 0x38(r1)
    fmuls f18, f18, f0
    stfs f3, 0x3c(r1)
    fmuls f19, f19, f0
    addi r30, r1, 0x20
    frsp f14, f17
    stfs f28, 0x40(r1)
    frsp f29, f28
    addi r29, r1, 0x10
    frsp f30, f3
    li r26, 0x0
    frsp f31, f4
    li r20, 0x0
    li r19, 0x0
lbl_fn_8005F36C_0000155C:
    cmpwi r26, 0x0
    li r0, 0x0
    beq lbl_fn_8005F36C_00001570
    cmpwi r26, 0x3
    bne lbl_fn_8005F36C_00001574
lbl_fn_8005F36C_00001570:
    li r0, 0x1
lbl_fn_8005F36C_00001574:
    cmpwi r0, 0x0
    beq lbl_fn_8005F36C_00001584
    fneg f0, f18
    b lbl_fn_8005F36C_00001588
lbl_fn_8005F36C_00001584:
    fmr f0, f18
lbl_fn_8005F36C_00001588:
    srwi r0, r26, 31
    addi r6, r1, 0x48
    add r0, r0, r26
    stfsux f0, r6, r19
    srawi. r0, r0, 1
    beq lbl_fn_8005F36C_000015A8
    fneg f0, f19
    b lbl_fn_8005F36C_000015AC
lbl_fn_8005F36C_000015A8:
    fmr f0, f19
lbl_fn_8005F36C_000015AC:
    stfs f0, 0x4(r6)
    addi r28, r1, 0x48
    add r28, r28, r19
    addi r3, r1, 0x78
    stfs f28, 0x8(r6)
    mr r4, r28
    mr r5, r28
    lfs f0, 0x0(r6)
    stfs f16, 0x2c(r1)
    fadds f0, f0, f15
    stfs f17, 0x30(r1)
    stfs f0, 0x0(r6)
    frsp f0, f0
    lfs f3, 0x4(r6)
    fsubs f4, f0, f31
    stfs f28, 0x34(r1)
    fadds f0, f3, f14
    stfs f4, 0x20(r1)
    stfs f0, 0x4(r6)
    frsp f0, f0
    lfs f3, 0x8(r6)
    fsubs f4, f0, f30
    fadds f0, f3, f28
    stfs f4, 0x24(r1)
    fsubs f2, f0, f29
    stfs f0, 0x8(r6)
    psq_l f1, 0x0(r30), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x28(r1)
    stfs f2, 0x8(r6)
    bl fn_805F93C0
    lfs f0, 0x0(r28)
    mr r4, r28
    mr r5, r28
    addi r3, r21, 0xa4
    fadds f0, f0, f31
    stfs f0, 0x0(r28)
    lfs f0, 0x4(r28)
    fadds f0, f0, f30
    stfs f0, 0x4(r28)
    lfs f0, 0x8(r28)
    fadds f0, f0, f29
    stfs f0, 0x8(r28)
    bl fn_805F93C0
    cmpwi r26, 0x0
    li r0, 0x0
    beq lbl_fn_8005F36C_00001670
    cmpwi r26, 0x3
    bne lbl_fn_8005F36C_00001674
lbl_fn_8005F36C_00001670:
    li r0, 0x1
lbl_fn_8005F36C_00001674:
    cmpwi r0, 0x0
    beq lbl_fn_8005F36C_00001684
    fmr f0, f20
    b lbl_fn_8005F36C_00001688
lbl_fn_8005F36C_00001684:
    fmr f0, f22
lbl_fn_8005F36C_00001688:
    srwi r0, r26, 31
    stfs f0, 0x10(r1)
    add r0, r0, r26
    srawi. r3, r0, 1
    beq lbl_fn_8005F36C_000016A4
    fmr f0, f21
    b lbl_fn_8005F36C_000016A8
lbl_fn_8005F36C_000016A4:
    fmr f0, f23
lbl_fn_8005F36C_000016A8:
    cmpwi r26, 0x0
    stfs f0, 0x14(r1)
    li r0, 0x0
    beq lbl_fn_8005F36C_000016C0
    cmpwi r26, 0x3
    bne lbl_fn_8005F36C_000016C4
lbl_fn_8005F36C_000016C0:
    li r0, 0x1
lbl_fn_8005F36C_000016C4:
    cmpwi r0, 0x0
    beq lbl_fn_8005F36C_000016D4
    fmr f0, f24
    b lbl_fn_8005F36C_000016D8
lbl_fn_8005F36C_000016D4:
    fmr f0, f26
lbl_fn_8005F36C_000016D8:
    cmpwi r3, 0x0
    stfs f0, 0x18(r1)
    beq lbl_fn_8005F36C_000016EC
    fmr f0, f25
    b lbl_fn_8005F36C_000016F0
lbl_fn_8005F36C_000016EC:
    fmr f0, f27
lbl_fn_8005F36C_000016F0:
    lfs f2, 0x8(r28)
    add r3, r31, r20
    psq_l f1, 0x0(r28), 0, 0
    addi r26, r26, 0x1
    psq_st f1, 0x0(r3), 0, 0
    cmpwi r26, 0x4
    psq_l f1, 0x0(r29), 0, 0
    addi r20, r20, 0x20
    stfs f2, 0x8(r3)
    addi r19, r19, 0xc
    stw r22, 0xc(r3)
    stfs f0, 0x1c(r1)
    psq_st f1, 0x10(r3), 0, 0
    psq_l f2, 0x8(r29), 0, 0
    psq_st f2, 0x18(r3), 0, 0
    blt lbl_fn_8005F36C_0000155C
    lwz r0, 0xa0(r21)
    li r22, 0x1
    cmpwi r0, 0x6
    beq lbl_fn_8005F36C_00001750
    cmpwi r0, 0x8
    beq lbl_fn_8005F36C_00001750
    cmpwi r0, 0xd
    bne lbl_fn_8005F36C_00001754
lbl_fn_8005F36C_00001750:
    li r22, 0x0
lbl_fn_8005F36C_00001754:
    cmpwi r23, 0x0
    stw r22, 0x4(r27)
    li r20, 0x0
    beq lbl_fn_8005F36C_000017A4
    lwz r0, 0x28(r23)
    mr r19, r20
    cmpwi r0, 0x0
    bne lbl_fn_8005F36C_00001794
    mr r3, r23
    bl fn_800D59B8
    cmpwi r3, 0x0
    bne lbl_fn_8005F36C_00001798
    addi r3, r23, 0x20
    bl fn_80473EFC
    cmpwi r3, 0x3
    bne lbl_fn_8005F36C_00001798
lbl_fn_8005F36C_00001794:
    li r19, 0x1
lbl_fn_8005F36C_00001798:
    cmpwi r19, 0x0
    beq lbl_fn_8005F36C_000017A4
    li r20, 0x1
lbl_fn_8005F36C_000017A4:
    cmpwi r20, 0x0
    beq lbl_fn_8005F36C_000017B0
    b lbl_fn_8005F36C_000017B4
lbl_fn_8005F36C_000017B0:
    li r23, 0x0
lbl_fn_8005F36C_000017B4:
    cmpwi r24, 0x0
    stw r23, 0xc(r27)
    li r20, 0x0
    beq lbl_fn_8005F36C_00001804
    lwz r0, 0x28(r24)
    mr r19, r20
    cmpwi r0, 0x0
    bne lbl_fn_8005F36C_000017F4
    mr r3, r24
    bl fn_800D59B8
    cmpwi r3, 0x0
    bne lbl_fn_8005F36C_000017F8
    addi r3, r24, 0x20
    bl fn_80473EFC
    cmpwi r3, 0x3
    bne lbl_fn_8005F36C_000017F8
lbl_fn_8005F36C_000017F4:
    li r19, 0x1
lbl_fn_8005F36C_000017F8:
    cmpwi r19, 0x0
    beq lbl_fn_8005F36C_00001804
    li r20, 0x1
lbl_fn_8005F36C_00001804:
    cmpwi r20, 0x0
    beq lbl_fn_8005F36C_00001810
    b lbl_fn_8005F36C_00001814
lbl_fn_8005F36C_00001810:
    li r24, 0x0
lbl_fn_8005F36C_00001814:
    stw r24, 0x10(r27)
    cmpwi r22, 0x1
    stw r31, 0x8(r27)
    beq lbl_fn_8005F36C_00001838
    lwz r0, 0xa0(r21)
    cmpwi r0, 0x8
    beq lbl_fn_8005F36C_00001838
    cmpwi r0, 0xd
    bne lbl_fn_8005F36C_00001844
lbl_fn_8005F36C_00001838:
    li r0, 0x0
    stb r0, 0x14(r27)
    b lbl_fn_8005F36C_0000184C
lbl_fn_8005F36C_00001844:
    li r0, 0x1
    stb r0, 0x14(r27)
lbl_fn_8005F36C_0000184C:
    stw r25, 0x18(r27)
    mr r4, r27
    lfs f1, 0x8(r1)
    lwz r3, lbl_8087EFB4
    lwz r5, 0xa0(r21)
    bl fn_800BDB58
lbl_fn_8005F36C_00001864:
    addi r11, r1, 0xe0
    psq_l f31, 0x1f8(r1), 0, 0
    lfd f31, 0x1f0(r1)
    psq_l f30, 0x1e8(r1), 0, 0
    lfd f30, 0x1e0(r1)
    psq_l f29, 0x1d8(r1), 0, 0
    lfd f29, 0x1d0(r1)
    psq_l f28, 0x1c8(r1), 0, 0
    lfd f28, 0x1c0(r1)
    psq_l f27, 0x1b8(r1), 0, 0
    lfd f27, 0x1b0(r1)
    psq_l f26, 0x1a8(r1), 0, 0
    lfd f26, 0x1a0(r1)
    psq_l f25, 0x198(r1), 0, 0
    lfd f25, 0x190(r1)
    psq_l f24, 0x188(r1), 0, 0
    lfd f24, 0x180(r1)
    psq_l f23, 0x178(r1), 0, 0
    lfd f23, 0x170(r1)
    psq_l f22, 0x168(r1), 0, 0
    lfd f22, 0x160(r1)
    psq_l f21, 0x158(r1), 0, 0
    lfd f21, 0x150(r1)
    psq_l f20, 0x148(r1), 0, 0
    lfd f20, 0x140(r1)
    psq_l f19, 0x138(r1), 0, 0
    lfd f19, 0x130(r1)
    psq_l f18, 0x128(r1), 0, 0
    lfd f18, 0x120(r1)
    psq_l f17, 0x118(r1), 0, 0
    lfd f17, 0x110(r1)
    psq_l f16, 0x108(r1), 0, 0
    lfd f16, 0x100(r1)
    psq_l f15, 0xf8(r1), 0, 0
    lfd f15, 0xf0(r1)
    psq_l f14, 0xe8(r1), 0, 0
    lfd f14, 0xe0(r1)
    bl _restgpr_19
    lwz r0, 0x204(r1)
    mtlr r0
    addi r1, r1, 0x200
    blr
}

asm void fn_8005F90C(void)
{
    nofralloc
    stwu r1, -0x170(r1)
    mflr r0
    stw r0, 0x174(r1)
    addi r11, r1, 0xe0
    stfd f31, 0x160(r1)
    psq_st f31, 0x168(r1), 0, 0
    stfd f30, 0x150(r1)
    psq_st f30, 0x158(r1), 0, 0
    stfd f29, 0x140(r1)
    psq_st f29, 0x148(r1), 0, 0
    stfd f28, 0x130(r1)
    psq_st f28, 0x138(r1), 0, 0
    stfd f27, 0x120(r1)
    psq_st f27, 0x128(r1), 0, 0
    stfd f26, 0x110(r1)
    psq_st f26, 0x118(r1), 0, 0
    stfd f25, 0x100(r1)
    psq_st f25, 0x108(r1), 0, 0
    stfd f24, 0xf0(r1)
    psq_st f24, 0xf8(r1), 0, 0
    stfd f23, 0xe0(r1)
    psq_st f23, 0xe8(r1), 0, 0
    bl _savegpr_22
    lwz r7, 0xc(r3)
    fmr f23, f1
    lwz r0, 0x8(r3)
    fmr f24, f2
    addi r6, r7, 0x18
    fmr f25, f3
    fmr f26, f4
    fmr f27, f5
    cmpw r6, r0
    fmr f28, f6
    lfs f31, 0x178(r1)
    fmr f29, f7
    fmr f30, f8
    mr r28, r3
    mr r29, r4
    mr r30, r5
    ble lbl_fn_8005F90C_000019B4
    li r31, 0x0
    b lbl_fn_8005F90C_000019D8
lbl_fn_8005F90C_000019B4:
    lwz r0, 0x4(r3)
    add. r31, r0, r7
    beq lbl_fn_8005F90C_000019CC
    lis r4, lbl_807779A8@ha
    addi r4, r4, lbl_807779A8@l
    stw r4, 0x0(r31)
lbl_fn_8005F90C_000019CC:
    lwz r4, 0xc(r3)
    addi r0, r4, 0x18
    stw r0, 0xc(r3)
lbl_fn_8005F90C_000019D8:
    cmpwi r31, 0x0
    beq lbl_fn_8005F90C_00001CE0
    lwz r6, 0xc(r3)
    lwz r0, 0x8(r3)
    addi r4, r6, 0x74
    cmpw r4, r0
    ble lbl_fn_8005F90C_000019FC
    li r26, 0x0
    b lbl_fn_8005F90C_00001A2C
lbl_fn_8005F90C_000019FC:
    lwz r0, 0x4(r3)
    lis r4, fn_8005E3E0@ha
    addi r4, r4, fn_8005E3E0@l
    li r5, 0x0
    add r3, r0, r6
    li r6, 0x18
    li r7, 0x4
    bl fn_80695720
    lwz r4, 0xc(r28)
    mr r26, r3
    addi r0, r4, 0x74
    stw r0, 0xc(r28)
lbl_fn_8005F90C_00001A2C:
    cmpwi r26, 0x0
    beq lbl_fn_8005F90C_00001CE0
    stfs f23, 0x70(r1)
    addi r27, r1, 0x7c
    addi r6, r1, 0x70
    lfs f2, lbl_808809A0
    stfs f24, 0x74(r1)
    mr r4, r27
    mr r5, r27
    addi r3, r28, 0xa4
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x78(r1)
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0x84(r1)
    bl fn_805F93C0
    fadds f3, f23, f26
    addi r24, r1, 0x64
    lfs f0, lbl_808809A0
    addi r25, r1, 0x88
    lfs f2, 0x84(r1)
    addi r6, r1, 0x58
    stfs f2, 0x90(r1)
    fmr f2, f0
    psq_l f1, 0x0(r27), 0, 0
    mr r4, r24
    stfs f3, 0x58(r1)
    mr r5, r24
    addi r3, r28, 0xa4
    stfs f24, 0x5c(r1)
    psq_st f1, 0x0(r25), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f0, 0x60(r1)
    psq_st f1, 0x0(r24), 0, 0
    stfs f2, 0x6c(r1)
    bl fn_805F93C0
    fadds f4, f23, f26
    addi r23, r1, 0x4c
    fadds f3, f24, f27
    lfs f0, lbl_808809A0
    lfs f2, 0x6c(r1)
    addi r27, r1, 0x94
    stfs f2, 0x9c(r1)
    fmr f2, f0
    psq_l f1, 0x0(r24), 0, 0
    addi r6, r1, 0x40
    stfs f4, 0x40(r1)
    mr r4, r23
    mr r5, r23
    stfs f3, 0x44(r1)
    addi r3, r28, 0xa4
    psq_st f1, 0x0(r27), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f0, 0x48(r1)
    psq_st f1, 0x0(r23), 0, 0
    stfs f2, 0x54(r1)
    bl fn_805F93C0
    fadds f3, f24, f27
    addi r22, r1, 0x34
    lfs f0, lbl_808809A0
    addi r24, r1, 0xa0
    lfs f2, 0x54(r1)
    addi r6, r1, 0x28
    stfs f2, 0xa8(r1)
    fmr f2, f0
    psq_l f1, 0x0(r23), 0, 0
    mr r4, r22
    stfs f23, 0x28(r1)
    mr r5, r22
    addi r3, r28, 0xa4
    stfs f3, 0x2c(r1)
    psq_st f1, 0x0(r24), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f0, 0x30(r1)
    psq_st f1, 0x0(r22), 0, 0
    stfs f2, 0x3c(r1)
    bl fn_805F93C0
    lfs f2, 0x3c(r1)
    addi r3, r1, 0xac
    psq_l f1, 0x0(r22), 0, 0
    addi r4, r1, 0x20
    psq_st f1, 0x0(r3), 0, 0
    addi r5, r1, 0x18
    psq_l f1, 0x0(r25), 0, 0
    addi r6, r1, 0x10
    stfs f2, 0xb4(r1)
    addi r7, r1, 0x8
    lfs f2, 0x90(r1)
    li r22, 0x1
    psq_st f1, 0x0(r26), 0, 0
    stfs f2, 0x8(r26)
    lfs f2, 0x9c(r1)
    stfs f28, 0x20(r1)
    stfs f29, 0x24(r1)
    stw r29, 0xc(r26)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x10(r26), 0, 0
    psq_l f1, 0x0(r27), 0, 0
    psq_st f1, 0x18(r26), 0, 0
    stfs f2, 0x20(r26)
    lfs f2, 0xa8(r1)
    stfs f30, 0x18(r1)
    stfs f29, 0x1c(r1)
    stw r29, 0x24(r26)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x28(r26), 0, 0
    psq_l f1, 0x0(r24), 0, 0
    psq_st f1, 0x30(r26), 0, 0
    stfs f2, 0x38(r26)
    lfs f2, 0xb4(r1)
    stfs f30, 0x10(r1)
    stfs f31, 0x14(r1)
    stw r29, 0x3c(r26)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x40(r26), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x48(r26), 0, 0
    stfs f2, 0x50(r26)
    stfs f28, 0x8(r1)
    stfs f31, 0xc(r1)
    stw r29, 0x54(r26)
    psq_l f1, 0x0(r7), 0, 0
    psq_st f1, 0x58(r26), 0, 0
    lwz r0, 0xa0(r28)
    cmpwi r0, 0x6
    beq lbl_fn_8005F90C_00001C30
    cmpwi r0, 0x8
    beq lbl_fn_8005F90C_00001C30
    cmpwi r0, 0xd
    bne lbl_fn_8005F90C_00001C34
lbl_fn_8005F90C_00001C30:
    li r22, 0x0
lbl_fn_8005F90C_00001C34:
    cmpwi r30, 0x0
    stw r22, 0x4(r31)
    li r27, 0x0
    beq lbl_fn_8005F90C_00001C84
    lwz r0, 0x28(r30)
    mr r29, r27
    cmpwi r0, 0x0
    bne lbl_fn_8005F90C_00001C74
    mr r3, r30
    bl fn_800D59B8
    cmpwi r3, 0x0
    bne lbl_fn_8005F90C_00001C78
    addi r3, r30, 0x20
    bl fn_80473EFC
    cmpwi r3, 0x3
    bne lbl_fn_8005F90C_00001C78
lbl_fn_8005F90C_00001C74:
    li r29, 0x1
lbl_fn_8005F90C_00001C78:
    cmpwi r29, 0x0
    beq lbl_fn_8005F90C_00001C84
    li r27, 0x1
lbl_fn_8005F90C_00001C84:
    cmpwi r27, 0x0
    beq lbl_fn_8005F90C_00001C90
    b lbl_fn_8005F90C_00001C94
lbl_fn_8005F90C_00001C90:
    li r30, 0x0
lbl_fn_8005F90C_00001C94:
    stw r30, 0xc(r31)
    cmpwi r22, 0x1
    stw r26, 0x8(r31)
    beq lbl_fn_8005F90C_00001CB8
    lwz r0, 0xa0(r28)
    cmpwi r0, 0x8
    beq lbl_fn_8005F90C_00001CB8
    cmpwi r0, 0xd
    bne lbl_fn_8005F90C_00001CC4
lbl_fn_8005F90C_00001CB8:
    li r0, 0x0
    stb r0, 0x11(r31)
    b lbl_fn_8005F90C_00001CCC
lbl_fn_8005F90C_00001CC4:
    li r0, 0x1
    stb r0, 0x11(r31)
lbl_fn_8005F90C_00001CCC:
    fmr f1, f25
    lwz r3, lbl_8087EFB4
    lwz r5, 0xa0(r28)
    mr r4, r31
    bl fn_800BDB58
lbl_fn_8005F90C_00001CE0:
    addi r11, r1, 0xe0
    psq_l f31, 0x168(r1), 0, 0
    lfd f31, 0x160(r1)
    psq_l f30, 0x158(r1), 0, 0
    lfd f30, 0x150(r1)
    psq_l f29, 0x148(r1), 0, 0
    lfd f29, 0x140(r1)
    psq_l f28, 0x138(r1), 0, 0
    lfd f28, 0x130(r1)
    psq_l f27, 0x128(r1), 0, 0
    lfd f27, 0x120(r1)
    psq_l f26, 0x118(r1), 0, 0
    lfd f26, 0x110(r1)
    psq_l f25, 0x108(r1), 0, 0
    lfd f25, 0x100(r1)
    psq_l f24, 0xf8(r1), 0, 0
    lfd f24, 0xf0(r1)
    psq_l f23, 0xe8(r1), 0, 0
    lfd f23, 0xe0(r1)
    bl _restgpr_22
    lwz r0, 0x174(r1)
    mtlr r0
    addi r1, r1, 0x170
    blr
}

asm void fn_8005FD40(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_8005FD40_00001D68
    cmpwi r4, 0x0
    ble lbl_fn_8005FD40_00001D68
    bl dtor_80084684
lbl_fn_8005FD40_00001D68:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8005FD80(void)
{
    nofralloc
    stwu r1, -0x1e0(r1)
    mflr r0
    stw r0, 0x1e4(r1)
    addi r11, r1, 0x110
    stfd f31, 0x1d0(r1)
    psq_st f31, 0x1d8(r1), 0, 0
    stfd f30, 0x1c0(r1)
    psq_st f30, 0x1c8(r1), 0, 0
    stfd f29, 0x1b0(r1)
    psq_st f29, 0x1b8(r1), 0, 0
    stfd f28, 0x1a0(r1)
    psq_st f28, 0x1a8(r1), 0, 0
    stfd f27, 0x190(r1)
    psq_st f27, 0x198(r1), 0, 0
    stfd f26, 0x180(r1)
    psq_st f26, 0x188(r1), 0, 0
    stfd f25, 0x170(r1)
    psq_st f25, 0x178(r1), 0, 0
    stfd f24, 0x160(r1)
    psq_st f24, 0x168(r1), 0, 0
    stfd f23, 0x150(r1)
    psq_st f23, 0x158(r1), 0, 0
    stfd f22, 0x140(r1)
    psq_st f22, 0x148(r1), 0, 0
    stfd f21, 0x130(r1)
    psq_st f21, 0x138(r1), 0, 0
    stfd f20, 0x120(r1)
    psq_st f20, 0x128(r1), 0, 0
    stfd f19, 0x110(r1)
    psq_st f19, 0x118(r1), 0, 0
    bl _savegpr_21
    lwz r8, 0xc(r3)
    fmr f20, f1
    lwz r0, 0x8(r3)
    fmr f21, f2
    addi r7, r8, 0x20
    fmr f22, f3
    fmr f19, f4
    fmr f23, f5
    cmpw r7, r0
    fmr f24, f6
    lfs f27, 0x1e8(r1)
    fmr f25, f7
    fmr f26, f8
    lfs f28, 0x1ec(r1)
    mr r26, r3
    lfs f29, 0x1f0(r1)
    mr r27, r4
    lfs f30, 0x1f4(r1)
    lfs f31, 0x1f8(r1)
    mr r28, r5
    mr r29, r6
    ble lbl_fn_8005FD80_00001E5C
    li r31, 0x0
    b lbl_fn_8005FD80_00001E80
lbl_fn_8005FD80_00001E5C:
    lwz r0, 0x4(r3)
    add. r31, r0, r8
    beq lbl_fn_8005FD80_00001E74
    lis r4, lbl_80777960@ha
    addi r4, r4, lbl_80777960@l
    stw r4, 0x0(r31)
lbl_fn_8005FD80_00001E74:
    lwz r4, 0xc(r3)
    addi r0, r4, 0x20
    stw r0, 0xc(r3)
lbl_fn_8005FD80_00001E80:
    cmpwi r31, 0x0
    beq lbl_fn_8005FD80_00002228
    lwz r6, 0xc(r3)
    lwz r0, 0x8(r3)
    addi r4, r6, 0x94
    cmpw r4, r0
    ble lbl_fn_8005FD80_00001EA4
    li r24, 0x0
    b lbl_fn_8005FD80_00001ED4
lbl_fn_8005FD80_00001EA4:
    lwz r0, 0x4(r3)
    lis r4, fn_8005ED68@ha
    addi r4, r4, fn_8005ED68@l
    li r5, 0x0
    add r3, r0, r6
    li r6, 0x20
    li r7, 0x4
    bl fn_80695720
    lwz r4, 0xc(r26)
    mr r24, r3
    addi r0, r4, 0x94
    stw r0, 0xc(r26)
lbl_fn_8005FD80_00001ED4:
    cmpwi r24, 0x0
    beq lbl_fn_8005FD80_00002228
    stfs f20, 0x90(r1)
    addi r25, r1, 0x9c
    addi r6, r1, 0x90
    lfs f2, lbl_808809A0
    stfs f21, 0x94(r1)
    mr r4, r25
    mr r5, r25
    addi r3, r26, 0xa4
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x98(r1)
    psq_st f1, 0x0(r25), 0, 0
    stfs f2, 0xa4(r1)
    bl fn_805F93C0
    fadds f3, f20, f19
    addi r23, r1, 0x84
    lfs f0, lbl_808809A0
    addi r30, r1, 0xa8
    lfs f2, 0xa4(r1)
    addi r6, r1, 0x78
    stfs f2, 0xb0(r1)
    fmr f2, f0
    psq_l f1, 0x0(r25), 0, 0
    mr r4, r23
    stfs f3, 0x78(r1)
    mr r5, r23
    addi r3, r26, 0xa4
    stfs f21, 0x7c(r1)
    psq_st f1, 0x0(r30), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f0, 0x80(r1)
    psq_st f1, 0x0(r23), 0, 0
    stfs f2, 0x8c(r1)
    bl fn_805F93C0
    fadds f4, f20, f19
    addi r22, r1, 0x6c
    fadds f3, f21, f23
    lfs f0, lbl_808809A0
    lfs f2, 0x8c(r1)
    addi r25, r1, 0xb4
    stfs f2, 0xbc(r1)
    fmr f2, f0
    psq_l f1, 0x0(r23), 0, 0
    addi r6, r1, 0x60
    stfs f4, 0x60(r1)
    mr r4, r22
    mr r5, r22
    stfs f3, 0x64(r1)
    addi r3, r26, 0xa4
    psq_st f1, 0x0(r25), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f0, 0x68(r1)
    psq_st f1, 0x0(r22), 0, 0
    stfs f2, 0x74(r1)
    bl fn_805F93C0
    fadds f3, f21, f23
    addi r21, r1, 0x54
    lfs f0, lbl_808809A0
    addi r23, r1, 0xc0
    lfs f2, 0x74(r1)
    addi r6, r1, 0x48
    stfs f2, 0xc8(r1)
    fmr f2, f0
    psq_l f1, 0x0(r22), 0, 0
    mr r4, r21
    stfs f20, 0x48(r1)
    mr r5, r21
    addi r3, r26, 0xa4
    stfs f3, 0x4c(r1)
    psq_st f1, 0x0(r23), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f0, 0x50(r1)
    psq_st f1, 0x0(r21), 0, 0
    stfs f2, 0x5c(r1)
    bl fn_805F93C0
    lfs f2, 0x5c(r1)
    addi r3, r1, 0xcc
    psq_l f1, 0x0(r21), 0, 0
    addi r4, r1, 0x38
    psq_st f1, 0x0(r3), 0, 0
    addi r5, r1, 0x28
    psq_l f1, 0x0(r30), 0, 0
    addi r6, r1, 0x18
    stfs f2, 0xd4(r1)
    addi r7, r1, 0x8
    lfs f2, 0xb0(r1)
    li r30, 0x1
    psq_st f1, 0x0(r24), 0, 0
    stfs f2, 0x8(r24)
    stfs f24, 0x38(r1)
    stfs f25, 0x3c(r1)
    stw r27, 0xc(r24)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x10(r24), 0, 0
    psq_l f1, 0x0(r25), 0, 0
    stfs f28, 0x40(r1)
    stfs f29, 0x44(r1)
    psq_l f2, 0x8(r4), 0, 0
    psq_st f2, 0x18(r24), 0, 0
    lfs f2, 0xbc(r1)
    psq_st f1, 0x20(r24), 0, 0
    stfs f2, 0x28(r24)
    stfs f26, 0x28(r1)
    stfs f25, 0x2c(r1)
    stw r27, 0x2c(r24)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x30(r24), 0, 0
    psq_l f1, 0x0(r23), 0, 0
    stfs f30, 0x30(r1)
    stfs f29, 0x34(r1)
    psq_l f2, 0x8(r5), 0, 0
    psq_st f2, 0x38(r24), 0, 0
    lfs f2, 0xc8(r1)
    psq_st f1, 0x40(r24), 0, 0
    stfs f2, 0x48(r24)
    stfs f26, 0x18(r1)
    stfs f27, 0x1c(r1)
    stw r27, 0x4c(r24)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x50(r24), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    stfs f30, 0x20(r1)
    stfs f31, 0x24(r1)
    psq_l f2, 0x8(r6), 0, 0
    psq_st f2, 0x58(r24), 0, 0
    lfs f2, 0xd4(r1)
    psq_st f1, 0x60(r24), 0, 0
    stfs f2, 0x68(r24)
    stfs f24, 0x8(r1)
    stfs f27, 0xc(r1)
    stw r27, 0x6c(r24)
    psq_l f1, 0x0(r7), 0, 0
    stfs f28, 0x10(r1)
    stfs f31, 0x14(r1)
    psq_st f1, 0x70(r24), 0, 0
    psq_l f2, 0x8(r7), 0, 0
    psq_st f2, 0x78(r24), 0, 0
    lwz r0, 0xa0(r26)
    cmpwi r0, 0x6
    beq lbl_fn_8005FD80_00002118
    cmpwi r0, 0x8
    beq lbl_fn_8005FD80_00002118
    cmpwi r0, 0xd
    bne lbl_fn_8005FD80_0000211C
lbl_fn_8005FD80_00002118:
    li r30, 0x0
lbl_fn_8005FD80_0000211C:
    cmpwi r28, 0x0
    stw r30, 0x4(r31)
    li r25, 0x0
    beq lbl_fn_8005FD80_0000216C
    lwz r0, 0x28(r28)
    mr r27, r25
    cmpwi r0, 0x0
    bne lbl_fn_8005FD80_0000215C
    mr r3, r28
    bl fn_800D59B8
    cmpwi r3, 0x0
    bne lbl_fn_8005FD80_00002160
    addi r3, r28, 0x20
    bl fn_80473EFC
    cmpwi r3, 0x3
    bne lbl_fn_8005FD80_00002160
lbl_fn_8005FD80_0000215C:
    li r27, 0x1
lbl_fn_8005FD80_00002160:
    cmpwi r27, 0x0
    beq lbl_fn_8005FD80_0000216C
    li r25, 0x1
lbl_fn_8005FD80_0000216C:
    cmpwi r25, 0x0
    beq lbl_fn_8005FD80_00002178
    b lbl_fn_8005FD80_0000217C
lbl_fn_8005FD80_00002178:
    li r28, 0x0
lbl_fn_8005FD80_0000217C:
    cmpwi r29, 0x0
    stw r28, 0xc(r31)
    li r28, 0x0
    beq lbl_fn_8005FD80_000021CC
    lwz r0, 0x28(r29)
    mr r27, r28
    cmpwi r0, 0x0
    bne lbl_fn_8005FD80_000021BC
    mr r3, r29
    bl fn_800D59B8
    cmpwi r3, 0x0
    bne lbl_fn_8005FD80_000021C0
    addi r3, r29, 0x20
    bl fn_80473EFC
    cmpwi r3, 0x3
    bne lbl_fn_8005FD80_000021C0
lbl_fn_8005FD80_000021BC:
    li r27, 0x1
lbl_fn_8005FD80_000021C0:
    cmpwi r27, 0x0
    beq lbl_fn_8005FD80_000021CC
    li r28, 0x1
lbl_fn_8005FD80_000021CC:
    cmpwi r28, 0x0
    beq lbl_fn_8005FD80_000021D8
    b lbl_fn_8005FD80_000021DC
lbl_fn_8005FD80_000021D8:
    li r29, 0x0
lbl_fn_8005FD80_000021DC:
    stw r29, 0x10(r31)
    cmpwi r30, 0x1
    stw r24, 0x8(r31)
    beq lbl_fn_8005FD80_00002200
    lwz r0, 0xa0(r26)
    cmpwi r0, 0x8
    beq lbl_fn_8005FD80_00002200
    cmpwi r0, 0xd
    bne lbl_fn_8005FD80_0000220C
lbl_fn_8005FD80_00002200:
    li r0, 0x0
    stb r0, 0x14(r31)
    b lbl_fn_8005FD80_00002214
lbl_fn_8005FD80_0000220C:
    li r0, 0x1
    stb r0, 0x14(r31)
lbl_fn_8005FD80_00002214:
    fmr f1, f22
    lwz r3, lbl_8087EFB4
    lwz r5, 0xa0(r26)
    mr r4, r31
    bl fn_800BDB58
lbl_fn_8005FD80_00002228:
    addi r11, r1, 0x110
    psq_l f31, 0x1d8(r1), 0, 0
    lfd f31, 0x1d0(r1)
    psq_l f30, 0x1c8(r1), 0, 0
    lfd f30, 0x1c0(r1)
    psq_l f29, 0x1b8(r1), 0, 0
    lfd f29, 0x1b0(r1)
    psq_l f28, 0x1a8(r1), 0, 0
    lfd f28, 0x1a0(r1)
    psq_l f27, 0x198(r1), 0, 0
    lfd f27, 0x190(r1)
    psq_l f26, 0x188(r1), 0, 0
    lfd f26, 0x180(r1)
    psq_l f25, 0x178(r1), 0, 0
    lfd f25, 0x170(r1)
    psq_l f24, 0x168(r1), 0, 0
    lfd f24, 0x160(r1)
    psq_l f23, 0x158(r1), 0, 0
    lfd f23, 0x150(r1)
    psq_l f22, 0x148(r1), 0, 0
    lfd f22, 0x140(r1)
    psq_l f21, 0x138(r1), 0, 0
    lfd f21, 0x130(r1)
    psq_l f20, 0x128(r1), 0, 0
    lfd f20, 0x120(r1)
    psq_l f19, 0x118(r1), 0, 0
    lfd f19, 0x110(r1)
    bl _restgpr_21
    lwz r0, 0x1e4(r1)
    mtlr r0
    addi r1, r1, 0x1e0
    blr
}

asm void fn_800602A8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_800602A8_000022D0
    cmpwi r4, 0x0
    ble lbl_fn_800602A8_000022D0
    bl dtor_80084684
lbl_fn_800602A8_000022D0:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800602E8(void)
{
    nofralloc
    stwu r1, -0x1c0(r1)
    mflr r0
    stw r0, 0x1c4(r1)
    addi r11, r1, 0xd0
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
    stfd f25, 0x150(r1)
    psq_st f25, 0x158(r1), 0, 0
    stfd f24, 0x140(r1)
    psq_st f24, 0x148(r1), 0, 0
    stfd f23, 0x130(r1)
    psq_st f23, 0x138(r1), 0, 0
    stfd f22, 0x120(r1)
    psq_st f22, 0x128(r1), 0, 0
    stfd f21, 0x110(r1)
    psq_st f21, 0x118(r1), 0, 0
    stfd f20, 0x100(r1)
    psq_st f20, 0x108(r1), 0, 0
    stfd f19, 0xf0(r1)
    psq_st f19, 0xf8(r1), 0, 0
    stfd f18, 0xe0(r1)
    psq_st f18, 0xe8(r1), 0, 0
    stfd f17, 0xd0(r1)
    psq_st f17, 0xd8(r1), 0, 0
    bl _savegpr_20
    lwz r7, 0xc(r3)
    fmr f17, f1
    lwz r0, 0x8(r3)
    fmr f18, f2
    addi r6, r7, 0x18
    fmr f19, f3
    fmr f20, f4
    fmr f21, f5
    cmpw r6, r0
    fmr f28, f6
    lfs f22, 0x1c8(r1)
    fmr f27, f7
    fmr f26, f8
    lfs f23, 0x1cc(r1)
    mr r23, r3
    lfs f24, 0x1d0(r1)
    mr r24, r4
    lfs f25, 0x1d4(r1)
    mr r25, r5
    ble lbl_fn_800602E8_000023CC
    li r27, 0x0
    b lbl_fn_800602E8_000023F0
lbl_fn_800602E8_000023CC:
    lwz r0, 0x4(r3)
    add. r27, r0, r7
    beq lbl_fn_800602E8_000023E4
    lis r4, lbl_807779A8@ha
    addi r4, r4, lbl_807779A8@l
    stw r4, 0x0(r27)
lbl_fn_800602E8_000023E4:
    lwz r4, 0xc(r3)
    addi r0, r4, 0x18
    stw r0, 0xc(r3)
lbl_fn_800602E8_000023F0:
    cmpwi r27, 0x0
    beq lbl_fn_800602E8_00002730
    lwz r6, 0xc(r3)
    lwz r0, 0x8(r3)
    addi r4, r6, 0x74
    cmpw r4, r0
    ble lbl_fn_800602E8_00002414
    li r31, 0x0
    b lbl_fn_800602E8_00002444
lbl_fn_800602E8_00002414:
    lwz r0, 0x4(r3)
    lis r4, fn_8005E3E0@ha
    addi r4, r4, fn_8005E3E0@l
    li r5, 0x0
    add r3, r0, r6
    li r6, 0x18
    li r7, 0x4
    bl fn_80695720
    lwz r4, 0xc(r23)
    mr r31, r3
    addi r0, r4, 0x74
    stw r0, 0xc(r23)
lbl_fn_800602E8_00002444:
    cmpwi r31, 0x0
    beq lbl_fn_800602E8_00002730
    fmr f1, f26
    addi r3, r1, 0x70
    li r4, 0x7a
    bl fn_805F8E70
    fadds f4, f17, f28
    lfs f26, lbl_808809A0
    fadds f3, f18, f27
    lfs f0, lbl_808809A8
    frsp f27, f17
    stfs f4, 0x34(r1)
    fmuls f20, f20, f0
    stfs f3, 0x38(r1)
    fmuls f21, f21, f0
    addi r30, r1, 0x1c
    frsp f28, f18
    stfs f26, 0x3c(r1)
    frsp f29, f26
    addi r29, r1, 0x10
    frsp f30, f3
    addi r28, r1, 0x8
    frsp f31, f4
    li r26, 0x0
    li r22, 0x0
    li r21, 0x0
lbl_fn_800602E8_000024AC:
    cmpwi r26, 0x0
    li r0, 0x0
    beq lbl_fn_800602E8_000024C0
    cmpwi r26, 0x3
    bne lbl_fn_800602E8_000024C4
lbl_fn_800602E8_000024C0:
    li r0, 0x1
lbl_fn_800602E8_000024C4:
    cmpwi r0, 0x0
    beq lbl_fn_800602E8_000024D4
    fneg f0, f20
    b lbl_fn_800602E8_000024D8
lbl_fn_800602E8_000024D4:
    fmr f0, f20
lbl_fn_800602E8_000024D8:
    srwi r0, r26, 31
    addi r6, r1, 0x40
    add r0, r0, r26
    stfsux f0, r6, r21
    srawi. r0, r0, 1
    beq lbl_fn_800602E8_000024F8
    fneg f0, f21
    b lbl_fn_800602E8_000024FC
lbl_fn_800602E8_000024F8:
    fmr f0, f21
lbl_fn_800602E8_000024FC:
    stfs f0, 0x4(r6)
    addi r20, r1, 0x40
    add r20, r20, r21
    addi r3, r1, 0x70
    stfs f26, 0x8(r6)
    mr r4, r20
    mr r5, r20
    lfs f0, 0x0(r6)
    stfs f17, 0x28(r1)
    fadds f0, f0, f27
    stfs f18, 0x2c(r1)
    stfs f0, 0x0(r6)
    frsp f0, f0
    lfs f3, 0x4(r6)
    fsubs f4, f0, f31
    stfs f26, 0x30(r1)
    fadds f0, f3, f28
    stfs f4, 0x1c(r1)
    stfs f0, 0x4(r6)
    frsp f0, f0
    lfs f3, 0x8(r6)
    fsubs f4, f0, f30
    fadds f0, f3, f26
    stfs f4, 0x20(r1)
    fsubs f2, f0, f29
    stfs f0, 0x8(r6)
    psq_l f1, 0x0(r30), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x24(r1)
    stfs f2, 0x8(r6)
    bl fn_805F93C0
    lfs f0, 0x0(r20)
    mr r4, r29
    mr r5, r29
    addi r3, r23, 0xa4
    fadds f0, f0, f31
    stfs f0, 0x0(r20)
    lfs f0, 0x4(r20)
    fadds f0, f0, f30
    stfs f0, 0x4(r20)
    lfs f0, 0x8(r20)
    fadds f0, f0, f29
    stfs f0, 0x8(r20)
    frsp f2, f0
    psq_l f1, 0x0(r20), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x18(r1)
    bl fn_805F93C0
    addi r3, r1, 0x40
    psq_l f1, 0x0(r29), 0, 0
    add r3, r3, r21
    cmpwi r26, 0x0
    psq_st f1, 0x0(r3), 0, 0
    li r0, 0x0
    lfs f2, 0x18(r1)
    stfs f2, 0x8(r3)
    beq lbl_fn_800602E8_000025E8
    cmpwi r26, 0x3
    bne lbl_fn_800602E8_000025EC
lbl_fn_800602E8_000025E8:
    li r0, 0x1
lbl_fn_800602E8_000025EC:
    cmpwi r0, 0x0
    beq lbl_fn_800602E8_000025FC
    fmr f0, f22
    b lbl_fn_800602E8_00002600
lbl_fn_800602E8_000025FC:
    fmr f0, f24
lbl_fn_800602E8_00002600:
    srwi r0, r26, 31
    stfs f0, 0x8(r1)
    add r0, r0, r26
    srawi. r0, r0, 1
    beq lbl_fn_800602E8_0000261C
    fmr f0, f23
    b lbl_fn_800602E8_00002620
lbl_fn_800602E8_0000261C:
    fmr f0, f25
lbl_fn_800602E8_00002620:
    addi r4, r1, 0x40
    add r3, r31, r22
    add r4, r4, r21
    addi r26, r26, 0x1
    lfs f2, 0x8(r4)
    cmpwi r26, 0x4
    psq_l f1, 0x0(r4), 0, 0
    addi r22, r22, 0x18
    psq_st f1, 0x0(r3), 0, 0
    addi r21, r21, 0xc
    stfs f2, 0x8(r3)
    stfs f0, 0xc(r1)
    stw r24, 0xc(r3)
    psq_l f1, 0x0(r28), 0, 0
    psq_st f1, 0x10(r3), 0, 0
    blt lbl_fn_800602E8_000024AC
    lwz r0, 0xa0(r23)
    li r20, 0x1
    cmpwi r0, 0x6
    beq lbl_fn_800602E8_00002680
    cmpwi r0, 0x8
    beq lbl_fn_800602E8_00002680
    cmpwi r0, 0xd
    bne lbl_fn_800602E8_00002684
lbl_fn_800602E8_00002680:
    li r20, 0x0
lbl_fn_800602E8_00002684:
    cmpwi r25, 0x0
    stw r20, 0x4(r27)
    li r22, 0x0
    beq lbl_fn_800602E8_000026D4
    lwz r0, 0x28(r25)
    mr r21, r22
    cmpwi r0, 0x0
    bne lbl_fn_800602E8_000026C4
    mr r3, r25
    bl fn_800D59B8
    cmpwi r3, 0x0
    bne lbl_fn_800602E8_000026C8
    addi r3, r25, 0x20
    bl fn_80473EFC
    cmpwi r3, 0x3
    bne lbl_fn_800602E8_000026C8
lbl_fn_800602E8_000026C4:
    li r21, 0x1
lbl_fn_800602E8_000026C8:
    cmpwi r21, 0x0
    beq lbl_fn_800602E8_000026D4
    li r22, 0x1
lbl_fn_800602E8_000026D4:
    cmpwi r22, 0x0
    beq lbl_fn_800602E8_000026E0
    b lbl_fn_800602E8_000026E4
lbl_fn_800602E8_000026E0:
    li r25, 0x0
lbl_fn_800602E8_000026E4:
    stw r25, 0xc(r27)
    cmpwi r20, 0x1
    stw r31, 0x8(r27)
    beq lbl_fn_800602E8_00002708
    lwz r0, 0xa0(r23)
    cmpwi r0, 0x8
    beq lbl_fn_800602E8_00002708
    cmpwi r0, 0xd
    bne lbl_fn_800602E8_00002714
lbl_fn_800602E8_00002708:
    li r0, 0x0
    stb r0, 0x11(r27)
    b lbl_fn_800602E8_0000271C
lbl_fn_800602E8_00002714:
    li r0, 0x1
    stb r0, 0x11(r27)
lbl_fn_800602E8_0000271C:
    fmr f1, f19
    lwz r3, lbl_8087EFB4
    lwz r5, 0xa0(r23)
    mr r4, r27
    bl fn_800BDB58
lbl_fn_800602E8_00002730:
    addi r11, r1, 0xd0
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
    psq_l f25, 0x158(r1), 0, 0
    lfd f25, 0x150(r1)
    psq_l f24, 0x148(r1), 0, 0
    lfd f24, 0x140(r1)
    psq_l f23, 0x138(r1), 0, 0
    lfd f23, 0x130(r1)
    psq_l f22, 0x128(r1), 0, 0
    lfd f22, 0x120(r1)
    psq_l f21, 0x118(r1), 0, 0
    lfd f21, 0x110(r1)
    psq_l f20, 0x108(r1), 0, 0
    lfd f20, 0x100(r1)
    psq_l f19, 0xf8(r1), 0, 0
    lfd f19, 0xf0(r1)
    psq_l f18, 0xe8(r1), 0, 0
    lfd f18, 0xe0(r1)
    psq_l f17, 0xd8(r1), 0, 0
    lfd f17, 0xd0(r1)
    bl _restgpr_20
    lwz r0, 0x1c4(r1)
    mtlr r0
    addi r1, r1, 0x1c0
    blr
}

asm void fn_800607C0(void)
{
    nofralloc
    stwu r1, -0x200(r1)
    mflr r0
    stw r0, 0x204(r1)
    addi r11, r1, 0xe0
    stfd f31, 0x1f0(r1)
    psq_st f31, 0x1f8(r1), 0, 0
    stfd f30, 0x1e0(r1)
    psq_st f30, 0x1e8(r1), 0, 0
    stfd f29, 0x1d0(r1)
    psq_st f29, 0x1d8(r1), 0, 0
    stfd f28, 0x1c0(r1)
    psq_st f28, 0x1c8(r1), 0, 0
    stfd f27, 0x1b0(r1)
    psq_st f27, 0x1b8(r1), 0, 0
    stfd f26, 0x1a0(r1)
    psq_st f26, 0x1a8(r1), 0, 0
    stfd f25, 0x190(r1)
    psq_st f25, 0x198(r1), 0, 0
    stfd f24, 0x180(r1)
    psq_st f24, 0x188(r1), 0, 0
    stfd f23, 0x170(r1)
    psq_st f23, 0x178(r1), 0, 0
    stfd f22, 0x160(r1)
    psq_st f22, 0x168(r1), 0, 0
    stfd f21, 0x150(r1)
    psq_st f21, 0x158(r1), 0, 0
    stfd f20, 0x140(r1)
    psq_st f20, 0x148(r1), 0, 0
    stfd f19, 0x130(r1)
    psq_st f19, 0x138(r1), 0, 0
    stfd f18, 0x120(r1)
    psq_st f18, 0x128(r1), 0, 0
    stfd f17, 0x110(r1)
    psq_st f17, 0x118(r1), 0, 0
    stfd f16, 0x100(r1)
    psq_st f16, 0x108(r1), 0, 0
    stfd f15, 0xf0(r1)
    psq_st f15, 0xf8(r1), 0, 0
    stfd f14, 0xe0(r1)
    psq_st f14, 0xe8(r1), 0, 0
    bl _savegpr_20
    lwz r8, 0xc(r3)
    fmr f16, f1
    lwz r0, 0x8(r3)
    fmr f17, f2
    addi r7, r8, 0x20
    fmr f18, f4
    fmr f19, f5
    cmpw r7, r0
    fmr f28, f6
    fmr f15, f7
    stfs f3, 0x8(r1)
    fmr f14, f8
    lfs f20, 0x208(r1)
    mr r23, r3
    lfs f21, 0x20c(r1)
    lfs f22, 0x210(r1)
    mr r24, r4
    lfs f23, 0x214(r1)
    mr r25, r5
    lfs f24, 0x218(r1)
    mr r26, r6
    lfs f25, 0x21c(r1)
    lfs f26, 0x220(r1)
    lfs f27, 0x224(r1)
    ble lbl_fn_800607C0_000028D0
    li r28, 0x0
    b lbl_fn_800607C0_000028F4
lbl_fn_800607C0_000028D0:
    lwz r0, 0x4(r3)
    add. r28, r0, r8
    beq lbl_fn_800607C0_000028E8
    lis r4, lbl_80777960@ha
    addi r4, r4, lbl_80777960@l
    stw r4, 0x0(r28)
lbl_fn_800607C0_000028E8:
    lwz r4, 0xc(r3)
    addi r0, r4, 0x20
    stw r0, 0xc(r3)
lbl_fn_800607C0_000028F4:
    cmpwi r28, 0x0
    beq lbl_fn_800607C0_00002CB0
    lwz r6, 0xc(r3)
    lwz r0, 0x8(r3)
    addi r4, r6, 0x94
    cmpw r4, r0
    ble lbl_fn_800607C0_00002918
    li r31, 0x0
    b lbl_fn_800607C0_00002948
lbl_fn_800607C0_00002918:
    lwz r0, 0x4(r3)
    lis r4, fn_8005ED68@ha
    addi r4, r4, fn_8005ED68@l
    li r5, 0x0
    add r3, r0, r6
    li r6, 0x20
    li r7, 0x4
    bl fn_80695720
    lwz r4, 0xc(r23)
    mr r31, r3
    addi r0, r4, 0x94
    stw r0, 0xc(r23)
lbl_fn_800607C0_00002948:
    cmpwi r31, 0x0
    beq lbl_fn_800607C0_00002CB0
    fmr f1, f14
    addi r3, r1, 0x78
    li r4, 0x7a
    bl fn_805F8E70
    fadds f4, f16, f28
    lfs f28, lbl_808809A0
    fadds f3, f17, f15
    lfs f0, lbl_808809A8
    frsp f15, f16
    stfs f4, 0x38(r1)
    fmuls f18, f18, f0
    stfs f3, 0x3c(r1)
    fmuls f19, f19, f0
    addi r30, r1, 0x20
    frsp f14, f17
    stfs f28, 0x40(r1)
    frsp f29, f28
    addi r29, r1, 0x10
    frsp f30, f3
    li r27, 0x0
    frsp f31, f4
    li r22, 0x0
    li r21, 0x0
lbl_fn_800607C0_000029AC:
    cmpwi r27, 0x0
    li r0, 0x0
    beq lbl_fn_800607C0_000029C0
    cmpwi r27, 0x3
    bne lbl_fn_800607C0_000029C4
lbl_fn_800607C0_000029C0:
    li r0, 0x1
lbl_fn_800607C0_000029C4:
    cmpwi r0, 0x0
    beq lbl_fn_800607C0_000029D4
    fneg f0, f18
    b lbl_fn_800607C0_000029D8
lbl_fn_800607C0_000029D4:
    fmr f0, f18
lbl_fn_800607C0_000029D8:
    srwi r0, r27, 31
    addi r6, r1, 0x48
    add r0, r0, r27
    stfsux f0, r6, r21
    srawi. r0, r0, 1
    beq lbl_fn_800607C0_000029F8
    fneg f0, f19
    b lbl_fn_800607C0_000029FC
lbl_fn_800607C0_000029F8:
    fmr f0, f19
lbl_fn_800607C0_000029FC:
    stfs f0, 0x4(r6)
    addi r20, r1, 0x48
    add r20, r20, r21
    addi r3, r1, 0x78
    stfs f28, 0x8(r6)
    mr r4, r20
    mr r5, r20
    lfs f0, 0x0(r6)
    stfs f16, 0x2c(r1)
    fadds f0, f0, f15
    stfs f17, 0x30(r1)
    stfs f0, 0x0(r6)
    frsp f0, f0
    lfs f3, 0x4(r6)
    fsubs f4, f0, f31
    stfs f28, 0x34(r1)
    fadds f0, f3, f14
    stfs f4, 0x20(r1)
    stfs f0, 0x4(r6)
    frsp f0, f0
    lfs f3, 0x8(r6)
    fsubs f4, f0, f30
    fadds f0, f3, f28
    stfs f4, 0x24(r1)
    fsubs f2, f0, f29
    stfs f0, 0x8(r6)
    psq_l f1, 0x0(r30), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x28(r1)
    stfs f2, 0x8(r6)
    bl fn_805F93C0
    lfs f0, 0x0(r20)
    mr r4, r20
    mr r5, r20
    addi r3, r23, 0xa4
    fadds f0, f0, f31
    stfs f0, 0x0(r20)
    lfs f0, 0x4(r20)
    fadds f0, f0, f30
    stfs f0, 0x4(r20)
    lfs f0, 0x8(r20)
    fadds f0, f0, f29
    stfs f0, 0x8(r20)
    bl fn_805F93C0
    cmpwi r27, 0x0
    li r0, 0x0
    beq lbl_fn_800607C0_00002AC0
    cmpwi r27, 0x3
    bne lbl_fn_800607C0_00002AC4
lbl_fn_800607C0_00002AC0:
    li r0, 0x1
lbl_fn_800607C0_00002AC4:
    cmpwi r0, 0x0
    beq lbl_fn_800607C0_00002AD4
    fmr f0, f20
    b lbl_fn_800607C0_00002AD8
lbl_fn_800607C0_00002AD4:
    fmr f0, f22
lbl_fn_800607C0_00002AD8:
    srwi r0, r27, 31
    stfs f0, 0x10(r1)
    add r0, r0, r27
    srawi. r3, r0, 1
    beq lbl_fn_800607C0_00002AF4
    fmr f0, f21
    b lbl_fn_800607C0_00002AF8
lbl_fn_800607C0_00002AF4:
    fmr f0, f23
lbl_fn_800607C0_00002AF8:
    cmpwi r27, 0x0
    stfs f0, 0x14(r1)
    li r0, 0x0
    beq lbl_fn_800607C0_00002B10
    cmpwi r27, 0x3
    bne lbl_fn_800607C0_00002B14
lbl_fn_800607C0_00002B10:
    li r0, 0x1
lbl_fn_800607C0_00002B14:
    cmpwi r0, 0x0
    beq lbl_fn_800607C0_00002B24
    fmr f0, f24
    b lbl_fn_800607C0_00002B28
lbl_fn_800607C0_00002B24:
    fmr f0, f26
lbl_fn_800607C0_00002B28:
    cmpwi r3, 0x0
    stfs f0, 0x18(r1)
    beq lbl_fn_800607C0_00002B3C
    fmr f0, f25
    b lbl_fn_800607C0_00002B40
lbl_fn_800607C0_00002B3C:
    fmr f0, f27
lbl_fn_800607C0_00002B40:
    lfs f2, 0x8(r20)
    add r3, r31, r22
    psq_l f1, 0x0(r20), 0, 0
    addi r27, r27, 0x1
    psq_st f1, 0x0(r3), 0, 0
    cmpwi r27, 0x4
    psq_l f1, 0x0(r29), 0, 0
    addi r22, r22, 0x20
    stfs f2, 0x8(r3)
    addi r21, r21, 0xc
    stw r24, 0xc(r3)
    stfs f0, 0x1c(r1)
    psq_st f1, 0x10(r3), 0, 0
    psq_l f2, 0x8(r29), 0, 0
    psq_st f2, 0x18(r3), 0, 0
    blt lbl_fn_800607C0_000029AC
    lwz r0, 0xa0(r23)
    li r20, 0x1
    cmpwi r0, 0x6
    beq lbl_fn_800607C0_00002BA0
    cmpwi r0, 0x8
    beq lbl_fn_800607C0_00002BA0
    cmpwi r0, 0xd
    bne lbl_fn_800607C0_00002BA4
lbl_fn_800607C0_00002BA0:
    li r20, 0x0
lbl_fn_800607C0_00002BA4:
    cmpwi r25, 0x0
    stw r20, 0x4(r28)
    li r22, 0x0
    beq lbl_fn_800607C0_00002BF4
    lwz r0, 0x28(r25)
    mr r21, r22
    cmpwi r0, 0x0
    bne lbl_fn_800607C0_00002BE4
    mr r3, r25
    bl fn_800D59B8
    cmpwi r3, 0x0
    bne lbl_fn_800607C0_00002BE8
    addi r3, r25, 0x20
    bl fn_80473EFC
    cmpwi r3, 0x3
    bne lbl_fn_800607C0_00002BE8
lbl_fn_800607C0_00002BE4:
    li r21, 0x1
lbl_fn_800607C0_00002BE8:
    cmpwi r21, 0x0
    beq lbl_fn_800607C0_00002BF4
    li r22, 0x1
lbl_fn_800607C0_00002BF4:
    cmpwi r22, 0x0
    beq lbl_fn_800607C0_00002C00
    b lbl_fn_800607C0_00002C04
lbl_fn_800607C0_00002C00:
    li r25, 0x0
lbl_fn_800607C0_00002C04:
    cmpwi r26, 0x0
    stw r25, 0xc(r28)
    li r22, 0x0
    beq lbl_fn_800607C0_00002C54
    lwz r0, 0x28(r26)
    mr r21, r22
    cmpwi r0, 0x0
    bne lbl_fn_800607C0_00002C44
    mr r3, r26
    bl fn_800D59B8
    cmpwi r3, 0x0
    bne lbl_fn_800607C0_00002C48
    addi r3, r26, 0x20
    bl fn_80473EFC
    cmpwi r3, 0x3
    bne lbl_fn_800607C0_00002C48
lbl_fn_800607C0_00002C44:
    li r21, 0x1
lbl_fn_800607C0_00002C48:
    cmpwi r21, 0x0
    beq lbl_fn_800607C0_00002C54
    li r22, 0x1
lbl_fn_800607C0_00002C54:
    cmpwi r22, 0x0
    beq lbl_fn_800607C0_00002C60
    b lbl_fn_800607C0_00002C64
lbl_fn_800607C0_00002C60:
    li r26, 0x0
lbl_fn_800607C0_00002C64:
    stw r26, 0x10(r28)
    cmpwi r20, 0x1
    stw r31, 0x8(r28)
    beq lbl_fn_800607C0_00002C88
    lwz r0, 0xa0(r23)
    cmpwi r0, 0x8
    beq lbl_fn_800607C0_00002C88
    cmpwi r0, 0xd
    bne lbl_fn_800607C0_00002C94
lbl_fn_800607C0_00002C88:
    li r0, 0x0
    stb r0, 0x14(r28)
    b lbl_fn_800607C0_00002C9C
lbl_fn_800607C0_00002C94:
    li r0, 0x1
    stb r0, 0x14(r28)
lbl_fn_800607C0_00002C9C:
    lfs f1, 0x8(r1)
    mr r4, r28
    lwz r3, lbl_8087EFB4
    lwz r5, 0xa0(r23)
    bl fn_800BDB58
lbl_fn_800607C0_00002CB0:
    addi r11, r1, 0xe0
    psq_l f31, 0x1f8(r1), 0, 0
    lfd f31, 0x1f0(r1)
    psq_l f30, 0x1e8(r1), 0, 0
    lfd f30, 0x1e0(r1)
    psq_l f29, 0x1d8(r1), 0, 0
    lfd f29, 0x1d0(r1)
    psq_l f28, 0x1c8(r1), 0, 0
    lfd f28, 0x1c0(r1)
    psq_l f27, 0x1b8(r1), 0, 0
    lfd f27, 0x1b0(r1)
    psq_l f26, 0x1a8(r1), 0, 0
    lfd f26, 0x1a0(r1)
    psq_l f25, 0x198(r1), 0, 0
    lfd f25, 0x190(r1)
    psq_l f24, 0x188(r1), 0, 0
    lfd f24, 0x180(r1)
    psq_l f23, 0x178(r1), 0, 0
    lfd f23, 0x170(r1)
    psq_l f22, 0x168(r1), 0, 0
    lfd f22, 0x160(r1)
    psq_l f21, 0x158(r1), 0, 0
    lfd f21, 0x150(r1)
    psq_l f20, 0x148(r1), 0, 0
    lfd f20, 0x140(r1)
    psq_l f19, 0x138(r1), 0, 0
    lfd f19, 0x130(r1)
    psq_l f18, 0x128(r1), 0, 0
    lfd f18, 0x120(r1)
    psq_l f17, 0x118(r1), 0, 0
    lfd f17, 0x110(r1)
    psq_l f16, 0x108(r1), 0, 0
    lfd f16, 0x100(r1)
    psq_l f15, 0xf8(r1), 0, 0
    lfd f15, 0xf0(r1)
    psq_l f14, 0xe8(r1), 0, 0
    lfd f14, 0xe0(r1)
    bl _restgpr_20
    lwz r0, 0x204(r1)
    mtlr r0
    addi r1, r1, 0x200
    blr
}

asm void fn_80060D58(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    addi r11, r1, 0xc0
    stfd f31, 0x100(r1)
    psq_st f31, 0x108(r1), 0, 0
    stfd f30, 0xf0(r1)
    psq_st f30, 0xf8(r1), 0, 0
    stfd f29, 0xe0(r1)
    psq_st f29, 0xe8(r1), 0, 0
    stfd f28, 0xd0(r1)
    psq_st f28, 0xd8(r1), 0, 0
    stfd f27, 0xc0(r1)
    psq_st f27, 0xc8(r1), 0, 0
    bl _savegpr_23
    lwz r6, 0xc(r3)
    fmr f27, f1
    lwz r0, 0x8(r3)
    fmr f28, f2
    addi r5, r6, 0x20
    fmr f29, f3
    fmr f30, f4
    fmr f31, f5
    cmpw r5, r0
    mr r29, r3
    mr r30, r4
    ble lbl_fn_80060D58_00002DCC
    li r31, 0x0
    b lbl_fn_80060D58_00002DF0
lbl_fn_80060D58_00002DCC:
    lwz r0, 0x4(r3)
    add. r31, r0, r6
    beq lbl_fn_80060D58_00002DE4
    lis r4, lbl_80777AB0@ha
    addi r4, r4, lbl_80777AB0@l
    stw r4, 0x0(r31)
lbl_fn_80060D58_00002DE4:
    lwz r4, 0xc(r3)
    addi r0, r4, 0x20
    stw r0, 0xc(r3)
lbl_fn_80060D58_00002DF0:
    cmpwi r31, 0x0
    beq lbl_fn_80060D58_00003060
    lwz r6, 0xc(r3)
    lwz r0, 0x8(r3)
    addi r4, r6, 0x54
    cmpw r4, r0
    ble lbl_fn_80060D58_00002E14
    li r28, 0x0
    b lbl_fn_80060D58_00002E44
lbl_fn_80060D58_00002E14:
    lwz r0, 0x4(r3)
    lis r4, fn_800610A0@ha
    addi r4, r4, fn_800610A0@l
    li r5, 0x0
    add r3, r0, r6
    li r6, 0x10
    li r7, 0x4
    bl fn_80695720
    lwz r4, 0xc(r29)
    mr r28, r3
    addi r0, r4, 0x54
    stw r0, 0xc(r29)
lbl_fn_80060D58_00002E44:
    cmpwi r28, 0x0
    beq lbl_fn_80060D58_00003060
    stfs f27, 0x50(r1)
    addi r27, r1, 0x5c
    addi r6, r1, 0x50
    lfs f2, lbl_808809A0
    stfs f28, 0x54(r1)
    mr r4, r27
    mr r5, r27
    addi r3, r29, 0xa4
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x58(r1)
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0x64(r1)
    bl fn_805F93C0
    fadds f3, f27, f30
    addi r25, r1, 0x44
    lfs f0, lbl_808809A0
    addi r26, r1, 0x68
    lfs f2, 0x64(r1)
    addi r6, r1, 0x38
    stfs f2, 0x70(r1)
    fmr f2, f0
    psq_l f1, 0x0(r27), 0, 0
    mr r4, r25
    stfs f3, 0x38(r1)
    mr r5, r25
    addi r3, r29, 0xa4
    stfs f28, 0x3c(r1)
    psq_st f1, 0x0(r26), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f0, 0x40(r1)
    psq_st f1, 0x0(r25), 0, 0
    stfs f2, 0x4c(r1)
    bl fn_805F93C0
    fadds f4, f27, f30
    addi r24, r1, 0x2c
    fadds f3, f28, f31
    lfs f0, lbl_808809A0
    lfs f2, 0x4c(r1)
    addi r27, r1, 0x74
    stfs f2, 0x7c(r1)
    fmr f2, f0
    psq_l f1, 0x0(r25), 0, 0
    addi r6, r1, 0x20
    stfs f4, 0x20(r1)
    mr r4, r24
    mr r5, r24
    stfs f3, 0x24(r1)
    addi r3, r29, 0xa4
    psq_st f1, 0x0(r27), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f0, 0x28(r1)
    psq_st f1, 0x0(r24), 0, 0
    stfs f2, 0x34(r1)
    bl fn_805F93C0
    fadds f3, f28, f31
    addi r23, r1, 0x14
    lfs f0, lbl_808809A0
    addi r25, r1, 0x80
    lfs f2, 0x34(r1)
    addi r6, r1, 0x8
    stfs f2, 0x88(r1)
    fmr f2, f0
    psq_l f1, 0x0(r24), 0, 0
    mr r4, r23
    stfs f27, 0x8(r1)
    mr r5, r23
    addi r3, r29, 0xa4
    stfs f3, 0xc(r1)
    psq_st f1, 0x0(r25), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f0, 0x10(r1)
    psq_st f1, 0x0(r23), 0, 0
    stfs f2, 0x1c(r1)
    bl fn_805F93C0
    lfs f2, 0x1c(r1)
    addi r3, r1, 0x8c
    psq_l f1, 0x0(r23), 0, 0
    li r5, 0x1
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x0(r26), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    psq_l f1, 0x0(r27), 0, 0
    stfs f2, 0x94(r1)
    lfs f2, 0x70(r1)
    stfs f2, 0x8(r28)
    lfs f2, 0x7c(r1)
    stw r30, 0xc(r28)
    psq_st f1, 0x10(r28), 0, 0
    psq_l f1, 0x0(r25), 0, 0
    stfs f2, 0x18(r28)
    lfs f2, 0x88(r1)
    stw r30, 0x1c(r28)
    psq_st f1, 0x20(r28), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x28(r28)
    lfs f2, 0x94(r1)
    stw r30, 0x2c(r28)
    psq_st f1, 0x30(r28), 0, 0
    stfs f2, 0x38(r28)
    stw r30, 0x3c(r28)
    lwz r0, 0xa0(r29)
    cmpwi r0, 0x6
    beq lbl_fn_80060D58_00002FF8
    cmpwi r0, 0x8
    beq lbl_fn_80060D58_00002FF8
    cmpwi r0, 0xd
    bne lbl_fn_80060D58_00002FFC
lbl_fn_80060D58_00002FF8:
    li r5, 0x0
lbl_fn_80060D58_00002FFC:
    stw r5, 0x4(r31)
    li r4, 0x80
    li r3, 0x2
    li r0, 0x4
    stw r4, 0xc(r31)
    cmpwi r5, 0x1
    stw r3, 0x10(r31)
    stw r0, 0x14(r31)
    stw r28, 0x8(r31)
    beq lbl_fn_80060D58_00003038
    lwz r0, 0xa0(r29)
    cmpwi r0, 0x8
    beq lbl_fn_80060D58_00003038
    cmpwi r0, 0xd
    bne lbl_fn_80060D58_00003044
lbl_fn_80060D58_00003038:
    li r0, 0x0
    stb r0, 0x18(r31)
    b lbl_fn_80060D58_0000304C
lbl_fn_80060D58_00003044:
    li r0, 0x1
    stb r0, 0x18(r31)
lbl_fn_80060D58_0000304C:
    fmr f1, f29
    lwz r3, lbl_8087EFB4
    lwz r5, 0xa0(r29)
    mr r4, r31
    bl fn_800BDB58
lbl_fn_80060D58_00003060:
    addi r11, r1, 0xc0
    psq_l f31, 0x108(r1), 0, 0
    lfd f31, 0x100(r1)
    psq_l f30, 0xf8(r1), 0, 0
    lfd f30, 0xf0(r1)
    psq_l f29, 0xe8(r1), 0, 0
    lfd f29, 0xe0(r1)
    psq_l f28, 0xd8(r1), 0, 0
    lfd f28, 0xd0(r1)
    psq_l f27, 0xc8(r1), 0, 0
    lfd f27, 0xc0(r1)
    bl _restgpr_23
    lwz r0, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}
