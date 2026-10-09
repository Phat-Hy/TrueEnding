#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void DCZeroRange(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_80089ACC(void);
extern void fn_8008B964(void);
extern void fn_8008CD1C(void);
extern void fn_8008CD50(void);
extern void fn_8008D784(void);
extern void fn_8008E2D4(void);
extern void fn_8008EECC(void);
extern void fn_80090834(void);
extern void fn_800908FC(void);
extern void fn_800909B0(void);
extern void fn_80090C58(void);
extern void fn_8009A0F8(void);
extern void fn_8009A2C0(void);
extern void fn_8009A490(void);
extern void fn_8009A504(void);
extern void fn_800DC6B4(void);
extern void fn_80476130(void);
extern void fn_805F89F0(void);
extern void fn_805F8AC0(void);
extern void fn_805F8CA0(void);
extern void fn_805F93C0(void);
extern void fn_805F9940(void);
extern void fn_8067E23C(void);
extern void fn_8068AE24(void);

/* External data declarations */
extern u8 lbl_80732250[];

/* Small data declarations */
extern u32 lbl_8087D7A8;
extern u32 lbl_8087D7DC;
extern u32 lbl_8087D7E0;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087EFB4;
extern u32 lbl_80880BF8;
extern u32 lbl_80880BFC;
extern u32 lbl_80880C00;
extern u32 lbl_80880C08;
extern u32 lbl_80880C14;

/* Function declarations */
void fn_800910D4(void);
void fn_80091684(void);
void fn_80091A90(void);
void fn_80091C00(void);
void fn_80091C10(void);
void fn_80091CFC(void);
void fn_800920B8(void);
void fn_8009246C(void);
void fn_80092768(void);
void fn_80092814(void);
void fn_800928B0(void);
void fn_8009290C(void);
void fn_80092954(void);
void fn_800929C0(void);
void fn_80092A00(void);
void fn_80092A4C(void);

asm void fn_800910D4(void)
{
    nofralloc
    stwu r1, -0x1e0(r1)
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
    stfd f18, 0x100(r1)
    psq_st f18, 0x108(r1), 0, 0
    stfd f17, 0xf0(r1)
    psq_st f17, 0xf8(r1), 0, 0
    stfd f16, 0xe0(r1)
    psq_st f16, 0xe8(r1), 0, 0
    stfd f15, 0xd0(r1)
    psq_st f15, 0xd8(r1), 0, 0
    addi r8, r1, 0x98
    mtctr r6
    cmpwi r6, 0x0
    ble lbl_fn_800910D4_00000520
lbl_fn_800910D4_0000009C:
    lwz r6, 0x4(r5)
    lwz r0, 0xc(r5)
    mulli r6, r6, 0x30
    lfs f8, 0x8(r5)
    lwz r7, 0x0(r3)
    lfs f28, 0x10(r5)
    add r6, r4, r6
    lfs f7, 0x4(r6)
    mulli r0, r0, 0x30
    lfs f0, 0x0(r6)
    fmuls f15, f7, f8
    lfs f7, 0xc(r6)
    fmuls f16, f0, f8
    lfs f0, 0x8(r6)
    fmuls f24, f7, f8
    lfs f7, 0x14(r6)
    fmuls f25, f0, f8
    lfs f0, 0x10(r6)
    fmuls f22, f7, f8
    lfs f7, 0x1c(r6)
    fmuls f23, f0, f8
    lfs f0, 0x18(r6)
    fmuls f20, f7, f8
    lfs f7, 0x24(r6)
    add r9, r4, r0
    fmuls f21, f0, f8
    fmuls f18, f7, f8
    lfs f0, 0x20(r6)
    fmuls f19, f0, f8
    lfs f7, 0x2c(r6)
    lfs f0, 0x28(r6)
    fmuls f7, f7, f8
    lfs f9, 0x20(r9)
    fmuls f0, f0, f8
    fmuls f29, f9, f28
    lfs f8, 0x1c(r9)
    lfs f10, 0x18(r9)
    fmuls f30, f8, f28
    lfs f9, 0x14(r9)
    fmuls f31, f10, f28
    fmuls f13, f9, f28
    lfs f8, 0x10(r9)
    lfs f11, 0xc(r9)
    fmuls f12, f8, f28
    lfs f10, 0x8(r9)
    lfs f9, 0x4(r9)
    lfsx f8, r4, r0
    fmuls f11, f11, f28
    lfs f26, 0x2c(r9)
    lfs f27, 0x28(r9)
    fmuls f10, f10, f28
    fmuls f9, f9, f28
    stfs f16, 0x98(r1)
    fmuls f8, f8, f28
    lfs f17, 0x24(r9)
    stfs f15, 0x9c(r1)
    fmuls f26, f26, f28
    psq_l f1, 0x0(r8), 0, 0
    fmuls f27, f27, f28
    stfs f25, 0xa0(r1)
    fmuls f28, f17, f28
    stfs f24, 0xa4(r1)
    psq_st f1, 0x0(r7), 0, 0
    psq_l f2, 0x8(r8), 0, 0
    stfs f23, 0xa8(r1)
    stfs f22, 0xac(r1)
    psq_st f2, 0x8(r7), 0, 0
    psq_l f3, 0x10(r8), 0, 0
    stfs f21, 0xb0(r1)
    stfs f20, 0xb4(r1)
    psq_st f3, 0x10(r7), 0, 0
    psq_l f4, 0x18(r8), 0, 0
    stfs f19, 0xb8(r1)
    stfs f18, 0xbc(r1)
    psq_st f4, 0x18(r7), 0, 0
    psq_l f5, 0x20(r8), 0, 0
    stfs f0, 0xc0(r1)
    stfs f7, 0xc4(r1)
    psq_st f5, 0x20(r7), 0, 0
    psq_l f6, 0x28(r8), 0, 0
    psq_st f6, 0x28(r7), 0, 0
    stfs f8, 0x68(r1)
    stfs f9, 0x6c(r1)
    stfs f10, 0x70(r1)
    stfs f11, 0x74(r1)
    stfs f12, 0x78(r1)
    stfs f13, 0x7c(r1)
    stfs f31, 0x80(r1)
    stfs f30, 0x84(r1)
    stfs f29, 0x88(r1)
    lwz r6, 0x0(r3)
    lwz r0, 0x14(r5)
    lfs f7, 0x0(r6)
    mulli r0, r0, 0x30
    lfs f0, 0x18(r5)
    fadds f7, f7, f8
    stfs f28, 0x8c(r1)
    stfs f7, 0x0(r6)
    add r7, r4, r0
    lfsx f7, r4, r0
    lfs f15, 0x4(r6)
    fmuls f7, f7, f0
    lfs f8, 0x4(r7)
    fadds f16, f15, f9
    lfs f9, 0x2c(r7)
    lfs f15, 0x28(r7)
    fmuls f8, f8, f0
    stfs f16, 0x4(r6)
    fmuls f20, f9, f0
    fmuls f19, f15, f0
    lfs f9, 0x24(r7)
    lfs f16, 0x8(r6)
    fmuls f18, f9, f0
    lfs f15, 0x20(r7)
    fadds f16, f16, f10
    fmuls f17, f15, f0
    lfs f9, 0x18(r7)
    stfs f16, 0x8(r6)
    fmuls f15, f9, f0
    lfs f10, 0x1c(r7)
    lfs f21, 0xc(r6)
    fmuls f16, f10, f0
    lfs f10, 0x10(r7)
    fadds f11, f21, f11
    lfs f22, 0x14(r7)
    fmuls f10, f10, f0
    stfs f11, 0xc(r6)
    fmuls f11, f22, f0
    lfs f9, 0xc(r7)
    lfs f22, 0x10(r6)
    fmuls f9, f9, f0
    lfs f21, 0x8(r7)
    fadds f12, f22, f12
    fmuls f0, f21, f0
    stfs f7, 0x38(r1)
    stfs f12, 0x10(r6)
    lfs f12, 0x14(r6)
    stfs f27, 0x90(r1)
    fadds f12, f12, f13
    stfs f26, 0x94(r1)
    stfs f12, 0x14(r6)
    lfs f12, 0x18(r6)
    stfs f8, 0x3c(r1)
    fadds f12, f12, f31
    stfs f0, 0x40(r1)
    stfs f12, 0x18(r6)
    lfs f12, 0x1c(r6)
    stfs f9, 0x44(r1)
    fadds f12, f12, f30
    stfs f10, 0x48(r1)
    stfs f12, 0x1c(r6)
    lfs f12, 0x20(r6)
    stfs f11, 0x4c(r1)
    fadds f12, f12, f29
    stfs f15, 0x50(r1)
    stfs f12, 0x20(r6)
    lfs f12, 0x24(r6)
    stfs f16, 0x54(r1)
    fadds f12, f12, f28
    stfs f17, 0x58(r1)
    stfs f12, 0x24(r6)
    lfs f12, 0x28(r6)
    stfs f18, 0x5c(r1)
    fadds f12, f12, f27
    stfs f19, 0x60(r1)
    stfs f12, 0x28(r6)
    lfs f12, 0x2c(r6)
    stfs f20, 0x64(r1)
    fadds f12, f12, f26
    stfs f12, 0x2c(r6)
    lwz r6, 0x0(r3)
    lfs f12, 0x0(r6)
    fadds f7, f12, f7
    stfs f7, 0x0(r6)
    lfs f7, 0x4(r6)
    fadds f7, f7, f8
    stfs f7, 0x4(r6)
    lfs f7, 0x8(r6)
    lwz r0, 0x1c(r5)
    fadds f7, f7, f0
    lfs f0, 0x20(r5)
    mulli r0, r0, 0x30
    stfs f7, 0x8(r6)
    lfs f8, 0xc(r6)
    add r7, r4, r0
    lfs f21, 0x2c(r7)
    fadds f12, f8, f9
    lfsx f7, r4, r0
    fmuls f24, f21, f0
    lfs f21, 0x28(r7)
    stfs f12, 0xc(r6)
    fmuls f7, f7, f0
    lfs f13, 0x10(r6)
    fmuls f23, f21, f0
    lfs f8, 0x4(r7)
    fadds f22, f13, f10
    lfs f12, 0xc(r7)
    lfs f9, 0x8(r7)
    fmuls f8, f8, f0
    lfs f13, 0x10(r7)
    fmuls f10, f12, f0
    fmuls f12, f13, f0
    stfs f22, 0x10(r6)
    fmuls f9, f9, f0
    lfs f13, 0x14(r6)
    stfs f7, 0x8(r1)
    fadds f22, f13, f11
    lfs f11, 0x20(r7)
    lfs f13, 0x24(r7)
    stfs f22, 0x14(r6)
    fmuls f21, f11, f0
    fmuls f22, f13, f0
    lfs f25, 0x18(r6)
    lfs f13, 0x1c(r7)
    fadds f25, f25, f15
    lfs f11, 0x18(r7)
    fmuls f13, f13, f0
    lfs f15, 0x14(r7)
    stfs f25, 0x18(r6)
    fmuls f11, f11, f0
    fmuls f0, f15, f0
    lfs f25, 0x1c(r6)
    stfs f8, 0xc(r1)
    fadds f15, f25, f16
    stfs f9, 0x10(r1)
    stfs f15, 0x1c(r6)
    lfs f15, 0x20(r6)
    stfs f10, 0x14(r1)
    fadds f15, f15, f17
    stfs f12, 0x18(r1)
    stfs f15, 0x20(r6)
    lfs f15, 0x24(r6)
    stfs f0, 0x1c(r1)
    fadds f15, f15, f18
    stfs f11, 0x20(r1)
    stfs f15, 0x24(r6)
    lfs f15, 0x28(r6)
    stfs f13, 0x24(r1)
    fadds f15, f15, f19
    stfs f21, 0x28(r1)
    stfs f15, 0x28(r6)
    lfs f15, 0x2c(r6)
    stfs f22, 0x2c(r1)
    fadds f15, f15, f20
    stfs f23, 0x30(r1)
    stfs f15, 0x2c(r6)
    lwz r6, 0x0(r3)
    stfs f24, 0x34(r1)
    lfs f15, 0x0(r6)
    fadds f7, f15, f7
    stfs f7, 0x0(r6)
    lfs f7, 0x4(r6)
    fadds f7, f7, f8
    stfs f7, 0x4(r6)
    lfs f7, 0x8(r6)
    fadds f7, f7, f9
    stfs f7, 0x8(r6)
    lfs f7, 0xc(r6)
    fadds f7, f7, f10
    stfs f7, 0xc(r6)
    lfs f7, 0x10(r6)
    fadds f7, f7, f12
    stfs f7, 0x10(r6)
    lfs f7, 0x14(r6)
    addi r5, r5, 0x24
    fadds f0, f7, f0
    stfs f0, 0x14(r6)
    lfs f0, 0x18(r6)
    fadds f0, f0, f11
    stfs f0, 0x18(r6)
    lfs f0, 0x1c(r6)
    fadds f0, f0, f13
    stfs f0, 0x1c(r6)
    lfs f0, 0x20(r6)
    fadds f0, f0, f21
    stfs f0, 0x20(r6)
    lfs f0, 0x24(r6)
    fadds f0, f0, f22
    stfs f0, 0x24(r6)
    lfs f0, 0x28(r6)
    fadds f0, f0, f23
    stfs f0, 0x28(r6)
    lfs f0, 0x2c(r6)
    fadds f0, f0, f24
    stfs f0, 0x2c(r6)
    lwz r6, 0x0(r3)
    addi r0, r6, 0x30
    stw r0, 0x0(r3)
    bdnz lbl_fn_800910D4_0000009C
lbl_fn_800910D4_00000520:
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
    psq_l f18, 0x108(r1), 0, 0
    lfd f18, 0x100(r1)
    psq_l f17, 0xf8(r1), 0, 0
    lfd f17, 0xf0(r1)
    psq_l f16, 0xe8(r1), 0, 0
    lfd f16, 0xe0(r1)
    psq_l f15, 0xd8(r1), 0, 0
    lfd f15, 0xd0(r1)
    addi r1, r1, 0x1e0
    blr
}

asm void fn_80091684(void)
{
    nofralloc
    stwu r1, -0xf0(r1)
    mflr r0
    stw r0, 0xf4(r1)
    stmw r24, 0xd0(r1)
    mr r26, r3
    mr r24, r4
    mr r27, r5
    bl fn_8008D784
    mr r31, r3
    mr r4, r24
    addi r3, r26, 0x60
    bl fn_8008CD1C
    lwz r0, 0x48(r31)
    stw r0, 0x5c(r26)
    lwz r3, 0x20c(r26)
    lwz r4, 0x48(r31)
    extlwi r0, r3, 2, 27
    mulli r4, r4, 0x18
    srawi. r0, r0, 31
    add r4, r26, r4
    addi r30, r4, 0x164
    beq lbl_fn_80091684_00000630
    extlwi r0, r3, 2, 26
    srawi. r0, r0, 31
    beq lbl_fn_80091684_00000630
    bl fn_8008B964
    bl fn_8008E2D4
    cmpwi r3, 0x3
    bne lbl_fn_80091684_00000630
    li r0, -0x1
    stw r0, 0x5c(r26)
    addi r30, r26, 0x1c4
lbl_fn_80091684_00000630:
    addi r3, r31, 0x30
    bl fn_80089ACC
    mulli r5, r3, 0x30
    lwz r3, 0x8(r30)
    li r4, 0x1800
    lwz r29, 0x38(r3)
    addi r3, r31, 0x30
    subfic r0, r5, 0x1800
    orc r4, r4, r5
    srwi r0, r0, 1
    subf r0, r0, r4
    srwi r25, r0, 31
    bl fn_8008EECC
    mr r28, r3
    mr r3, r30
    bl fn_80476130
    lwz r0, 0x58(r26)
    mr r24, r3
    stw r0, 0x8(r1)
    mr r3, r0
    lwz r0, 0x10(r29)
    mulli r4, r0, 0x30
    bl DCZeroRange
    cmpwi r25, 0x0
    beq lbl_fn_80091684_00000820
    cmpwi r27, 0x0
    beq lbl_fn_80091684_00000720
    lwz r3, 0x8(r30)
    mr r4, r24
    mr r5, r28
    mr r6, r27
    lwz r7, 0x44(r3)
    addi r8, r26, 0x60
    lis r3, 0xe000
    bl fn_8009A504
    li r24, 0x0
    li r30, 0x0
    b lbl_fn_80091684_00000710
lbl_fn_80091684_000006C8:
    lwz r0, 0x18(r29)
    addi r3, r1, 0xa0
    addi r5, r26, 0x60
    add r4, r0, r30
    lwz r0, 0x4(r4)
    slwi r0, r0, 2
    lwzx r0, r27, r0
    mulli r0, r0, 0x30
    add r4, r28, r0
    bl fn_8008CD50
    lwz r3, 0x8(r1)
    addi r4, r1, 0xa0
    bl fn_8008CD1C
    lwz r3, 0x8(r1)
    addi r30, r30, 0x8
    addi r24, r24, 0x1
    addi r0, r3, 0x30
    stw r0, 0x8(r1)
lbl_fn_80091684_00000710:
    lwz r0, 0x14(r29)
    cmpw r24, r0
    blt lbl_fn_80091684_000006C8
    b lbl_fn_80091684_00000798
lbl_fn_80091684_00000720:
    addi r3, r31, 0x30
    bl fn_80089ACC
    mr r6, r3
    mr r4, r24
    mr r5, r28
    addi r7, r26, 0x60
    lis r3, 0xe000
    bl fn_8009A490
    li r24, 0x0
    li r27, 0x0
    b lbl_fn_80091684_0000078C
lbl_fn_80091684_0000074C:
    lwz r0, 0x18(r29)
    addi r3, r1, 0x70
    addi r5, r26, 0x60
    add r4, r0, r27
    lwz r0, 0x4(r4)
    mulli r0, r0, 0x30
    add r4, r28, r0
    bl fn_8008CD50
    lwz r3, 0x8(r1)
    addi r4, r1, 0x70
    bl fn_8008CD1C
    lwz r3, 0x8(r1)
    addi r27, r27, 0x8
    addi r24, r24, 0x1
    addi r0, r3, 0x30
    stw r0, 0x8(r1)
lbl_fn_80091684_0000078C:
    lwz r0, 0x14(r29)
    cmpw r24, r0
    blt lbl_fn_80091684_0000074C
lbl_fn_80091684_00000798:
    lwz r6, 0x1c(r29)
    cmpwi r6, 0x0
    bne lbl_fn_80091684_000007BC
    lwz r0, 0x24(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80091684_000007BC
    lwz r0, 0x2c(r29)
    cmpwi r0, 0x0
    beq lbl_fn_80091684_000009A8
lbl_fn_80091684_000007BC:
    lwz r3, 0x8(r1)
    lis r4, 0xe000
    lwz r5, 0x20(r29)
    bl fn_8009A0F8
    lwz r0, 0x1c(r29)
    addi r3, r1, 0x8
    lwz r5, 0x8(r1)
    lis r4, 0xe000
    mulli r0, r0, 0x30
    add r0, r5, r0
    stw r0, 0x8(r1)
    lwz r5, 0x28(r29)
    lwz r6, 0x24(r29)
    bl fn_8009A2C0
    lwz r0, 0x24(r29)
    addi r3, r1, 0x8
    lwz r5, 0x8(r1)
    lis r4, 0xe000
    mulli r0, r0, 0x30
    add r0, r5, r0
    stw r0, 0x8(r1)
    lwz r5, 0x30(r29)
    lwz r6, 0x2c(r29)
    bl fn_800910D4
    b lbl_fn_80091684_000009A8
lbl_fn_80091684_00000820:
    cmpwi r27, 0x0
    beq lbl_fn_80091684_000008AC
    lwz r3, 0x8(r30)
    mr r4, r24
    mr r5, r28
    mr r6, r27
    lwz r7, 0x44(r3)
    addi r8, r26, 0x60
    lis r3, 0xe000
    bl fn_80090834
    li r24, 0x0
    li r30, 0x0
    b lbl_fn_80091684_0000089C
lbl_fn_80091684_00000854:
    lwz r0, 0x18(r29)
    addi r3, r1, 0x40
    addi r5, r26, 0x60
    add r4, r0, r30
    lwz r0, 0x4(r4)
    slwi r0, r0, 2
    lwzx r0, r27, r0
    mulli r0, r0, 0x30
    add r4, r28, r0
    bl fn_8008CD50
    lwz r3, 0x8(r1)
    addi r4, r1, 0x40
    bl fn_8008CD1C
    lwz r3, 0x8(r1)
    addi r30, r30, 0x8
    addi r24, r24, 0x1
    addi r0, r3, 0x30
    stw r0, 0x8(r1)
lbl_fn_80091684_0000089C:
    lwz r0, 0x14(r29)
    cmpw r24, r0
    blt lbl_fn_80091684_00000854
    b lbl_fn_80091684_00000924
lbl_fn_80091684_000008AC:
    addi r3, r31, 0x30
    bl fn_80089ACC
    mr r6, r3
    mr r4, r24
    mr r5, r28
    addi r7, r26, 0x60
    lis r3, 0xe000
    bl fn_800908FC
    li r24, 0x0
    li r27, 0x0
    b lbl_fn_80091684_00000918
lbl_fn_80091684_000008D8:
    lwz r0, 0x18(r29)
    addi r3, r1, 0x10
    addi r5, r26, 0x60
    add r4, r0, r27
    lwz r0, 0x4(r4)
    mulli r0, r0, 0x30
    add r4, r28, r0
    bl fn_8008CD50
    lwz r3, 0x8(r1)
    addi r4, r1, 0x10
    bl fn_8008CD1C
    lwz r3, 0x8(r1)
    addi r27, r27, 0x8
    addi r24, r24, 0x1
    addi r0, r3, 0x30
    stw r0, 0x8(r1)
lbl_fn_80091684_00000918:
    lwz r0, 0x14(r29)
    cmpw r24, r0
    blt lbl_fn_80091684_000008D8
lbl_fn_80091684_00000924:
    lwz r6, 0x1c(r29)
    cmpwi r6, 0x0
    bne lbl_fn_80091684_00000948
    lwz r0, 0x24(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80091684_00000948
    lwz r0, 0x2c(r29)
    cmpwi r0, 0x0
    beq lbl_fn_80091684_000009A8
lbl_fn_80091684_00000948:
    lwz r3, 0x8(r1)
    lis r4, 0xe000
    lwz r5, 0x20(r29)
    bl fn_800909B0
    lwz r0, 0x1c(r29)
    addi r3, r1, 0x8
    lwz r5, 0x8(r1)
    lis r4, 0xe000
    mulli r0, r0, 0x30
    add r0, r5, r0
    stw r0, 0x8(r1)
    lwz r5, 0x28(r29)
    lwz r6, 0x24(r29)
    bl fn_80090C58
    lwz r0, 0x24(r29)
    addi r3, r1, 0x8
    lwz r5, 0x8(r1)
    lis r4, 0xe000
    mulli r0, r0, 0x30
    add r0, r5, r0
    stw r0, 0x8(r1)
    lwz r5, 0x30(r29)
    lwz r6, 0x2c(r29)
    bl fn_800910D4
lbl_fn_80091684_000009A8:
    lmw r24, 0xd0(r1)
    lwz r0, 0xf4(r1)
    mtlr r0
    addi r1, r1, 0xf0
    blr
}

asm void fn_80091A90(void)
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
    lwz r5, 0x20c(r3)
    extlwi r0, r5, 2, 27
    srawi. r0, r0, 31
    beq lbl_fn_80091A90_00000A14
    extlwi r0, r5, 2, 26
    srawi. r0, r0, 31
    beq lbl_fn_80091A90_00000A14
    lwz r5, lbl_8087EFB4
    lwz r0, 0x2f8(r5)
    cmpwi r0, 0x3
    bne lbl_fn_80091A90_00000A14
    lwz r5, 0x1d8(r3)
    bl fn_80091684
    b lbl_fn_80091A90_00000B10
lbl_fn_80091A90_00000A14:
    lwz r4, 0x50(r3)
    lwz r0, 0x5c(r3)
    cmpw r0, r4
    beq lbl_fn_80091A90_00000A40
    mulli r0, r4, 0x18
    mr r3, r29
    mr r4, r30
    add r5, r29, r0
    lwz r5, 0x178(r5)
    bl fn_80091684
    b lbl_fn_80091A90_00000B10
lbl_fn_80091A90_00000A40:
    mr r4, r30
    li r5, 0x30
    addi r3, r3, 0x60
    bl fn_8067E23C
    cntlzw r0, r3
    srwi. r0, r0, 5
    bne lbl_fn_80091A90_00000B10
    psq_l f1, 0x60(r29), 0, 0
    addi r31, r1, 0x8
    psq_l f2, 0x68(r29), 0, 0
    mr r3, r31
    psq_l f3, 0x70(r29), 0, 0
    mr r4, r31
    psq_l f4, 0x78(r29), 0, 0
    psq_l f5, 0x80(r29), 0, 0
    psq_l f6, 0x88(r29), 0, 0
    psq_st f6, 0x28(r31), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    bl fn_805F8CA0
    mr r3, r30
    mr r4, r31
    mr r5, r31
    bl fn_805F89F0
    psq_l f1, 0x0(r30), 0, 0
    psq_l f2, 0x8(r30), 0, 0
    psq_l f3, 0x10(r30), 0, 0
    psq_l f4, 0x18(r30), 0, 0
    psq_l f5, 0x20(r30), 0, 0
    psq_l f6, 0x28(r30), 0, 0
    psq_st f6, 0x88(r29), 0, 0
    lwz r3, 0x16c(r29)
    psq_st f1, 0x60(r29), 0, 0
    lwz r4, 0x58(r29)
    psq_st f2, 0x68(r29), 0, 0
    psq_st f3, 0x70(r29), 0, 0
    psq_st f4, 0x78(r29), 0, 0
    psq_st f5, 0x80(r29), 0, 0
    lwz r3, 0x38(r3)
    lwz r6, 0x10(r3)
    cmpwi r6, 0x1
    ble lbl_fn_80091A90_00000B04
    mr r3, r31
    mr r5, r4
    bl fn_805F8AC0
    b lbl_fn_80091A90_00000B10
lbl_fn_80091A90_00000B04:
    mr r3, r31
    mr r5, r4
    bl fn_805F89F0
lbl_fn_80091A90_00000B10:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80091C00(void)
{
    nofralloc
    mulli r0, r4, 0x30
    lwz r3, 0x4(r3)
    add r3, r3, r0
    blr
}

asm void fn_80091C10(void)
{
    nofralloc
    lwz r10, 0x16c(r3)
    li r11, 0x0
    lfs f7, lbl_80880BF8
    li r7, 0x0
    lfs f0, lbl_80880C00
    b lbl_fn_80091C10_00000C18
lbl_fn_80091C10_00000B54:
    lwzx r0, r5, r7
    lwz r8, 0x48(r10)
    cmpwi r0, -0x1
    lwzx r12, r8, r7
    bne lbl_fn_80091C10_00000BB4
    cmpwi r6, 0x0
    beq lbl_fn_80091C10_00000C10
    lwz r0, 0x18(r12)
    lwz r8, 0x3c(r3)
    mulli r0, r0, 0x30
    add r8, r8, r0
    stfs f7, 0x2c(r8)
    stfs f7, 0x24(r8)
    stfs f7, 0x20(r8)
    stfs f7, 0x1c(r8)
    stfs f7, 0x18(r8)
    stfs f7, 0x10(r8)
    stfs f7, 0xc(r8)
    stfs f7, 0x8(r8)
    stfs f7, 0x4(r8)
    stfs f0, 0x28(r8)
    stfs f0, 0x14(r8)
    stfs f0, 0x0(r8)
    b lbl_fn_80091C10_00000C10
lbl_fn_80091C10_00000BB4:
    cmpwi r0, 0x0
    bge lbl_fn_80091C10_00000BC4
    li r9, 0x0
    b lbl_fn_80091C10_00000BD0
lbl_fn_80091C10_00000BC4:
    mulli r0, r0, 0x30
    lwz r8, 0x3c(r4)
    add r9, r8, r0
lbl_fn_80091C10_00000BD0:
    lwz r0, 0x18(r12)
    lwz r8, 0x3c(r3)
    mulli r0, r0, 0x30
    psq_l f2, 0x8(r9), 0, 0
    psq_l f3, 0x10(r9), 0, 0
    psq_l f4, 0x18(r9), 0, 0
    psq_l f5, 0x20(r9), 0, 0
    add r8, r8, r0
    psq_l f6, 0x28(r9), 0, 0
    psq_l f1, 0x0(r9), 0, 0
    psq_st f1, 0x0(r8), 0, 0
    psq_st f2, 0x8(r8), 0, 0
    psq_st f3, 0x10(r8), 0, 0
    psq_st f4, 0x18(r8), 0, 0
    psq_st f5, 0x20(r8), 0, 0
    psq_st f6, 0x28(r8), 0, 0
lbl_fn_80091C10_00000C10:
    addi r11, r11, 0x1
    addi r7, r7, 0x4
lbl_fn_80091C10_00000C18:
    lwz r0, 0x44(r10)
    cmpw r11, r0
    blt lbl_fn_80091C10_00000B54
    blr
}

asm void fn_80091CFC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    mr r3, r4
    bl fn_800DC6B4
    lwz r5, 0x16c(r28)
    cmpwi r5, 0x0
    bne lbl_fn_80091CFC_00000C64
    li r29, -0x1
    b lbl_fn_80091CFC_00000CA4
lbl_fn_80091CFC_00000C64:
    lwz r0, 0x44(r5)
    li r29, 0x0
    li r6, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80091CFC_00000CA0
lbl_fn_80091CFC_00000C7C:
    lwz r4, 0x48(r5)
    lwzx r4, r4, r6
    lwz r0, 0x14(r4)
    cmplw r3, r0
    bne lbl_fn_80091CFC_00000C94
    b lbl_fn_80091CFC_00000CA4
lbl_fn_80091CFC_00000C94:
    addi r6, r6, 0x4
    addi r29, r29, 0x1
    bdnz lbl_fn_80091CFC_00000C7C
lbl_fn_80091CFC_00000CA0:
    li r29, -0x1
lbl_fn_80091CFC_00000CA4:
    cmpwi r29, 0x0
    blt lbl_fn_80091CFC_00000FC4
    lwz r0, 0xcc(r28)
    li r3, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80091CFC_00000CD8
lbl_fn_80091CFC_00000CC0:
    lwz r4, 0xd4(r28)
    lwzx r0, r4, r3
    cmplw r29, r0
    beq lbl_fn_80091CFC_00000FC4
    addi r3, r3, 0x4
    bdnz lbl_fn_80091CFC_00000CC0
lbl_fn_80091CFC_00000CD8:
    lwz r0, 0xd4(r28)
    cmpwi r0, 0x0
    beq lbl_fn_80091CFC_00000CF0
    lwz r0, 0xd0(r28)
    cmpwi r0, 0x0
    bne lbl_fn_80091CFC_00000E40
lbl_fn_80091CFC_00000CF0:
    lwz r0, 0xd0(r28)
    cmplwi r0, 0x8
    bgt lbl_fn_80091CFC_00000F94
    li r3, 0x20
    li r4, 0x0
    la r5, lbl_8087D7E0
    la r6, lbl_8087D7DC
    li r7, 0x0
    bl fn_800846FC
    lwz r0, 0xd4(r28)
    mr r31, r3
    cmpwi r0, 0x0
    beq lbl_fn_80091CFC_00000E30
    lwz r0, 0xcc(r28)
    li r4, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_80091CFC_00000D38
    mr r4, r0
lbl_fn_80091CFC_00000D38:
    cmpwi r4, 0x0
    li r5, 0x0
    beq lbl_fn_80091CFC_00000E28
    cmplwi r4, 0x8
    subi r8, r4, 0x8
    ble lbl_fn_80091CFC_00000DF8
    addi r0, r8, 0x7
    mr r7, r31
    srwi r0, r0, 3
    li r6, 0x0
    mtctr r0
    cmplwi r8, 0x0
    ble lbl_fn_80091CFC_00000DF8
lbl_fn_80091CFC_00000D6C:
    lwz r8, 0xd4(r28)
    addi r5, r5, 0x8
    lwzx r0, r8, r6
    stw r0, 0x0(r7)
    lwz r0, 0xd4(r28)
    add r8, r0, r6
    lwz r0, 0x4(r8)
    stw r0, 0x4(r7)
    lwz r0, 0xd4(r28)
    add r8, r0, r6
    lwz r0, 0x8(r8)
    stw r0, 0x8(r7)
    lwz r0, 0xd4(r28)
    add r8, r0, r6
    lwz r0, 0xc(r8)
    stw r0, 0xc(r7)
    lwz r0, 0xd4(r28)
    add r8, r0, r6
    lwz r0, 0x10(r8)
    stw r0, 0x10(r7)
    lwz r0, 0xd4(r28)
    add r8, r0, r6
    lwz r0, 0x14(r8)
    stw r0, 0x14(r7)
    lwz r0, 0xd4(r28)
    add r8, r0, r6
    lwz r0, 0x18(r8)
    stw r0, 0x18(r7)
    lwz r0, 0xd4(r28)
    add r8, r0, r6
    addi r6, r6, 0x20
    lwz r0, 0x1c(r8)
    stw r0, 0x1c(r7)
    addi r7, r7, 0x20
    bdnz lbl_fn_80091CFC_00000D6C
lbl_fn_80091CFC_00000DF8:
    slwi r7, r5, 2
    subf r0, r5, r4
    add r6, r3, r7
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_80091CFC_00000E28
lbl_fn_80091CFC_00000E10:
    lwz r3, 0xd4(r28)
    lwzx r0, r3, r7
    addi r7, r7, 0x4
    stw r0, 0x0(r6)
    addi r6, r6, 0x4
    bdnz lbl_fn_80091CFC_00000E10
lbl_fn_80091CFC_00000E28:
    lwz r3, 0xd4(r28)
    bl fn_80084C24
lbl_fn_80091CFC_00000E30:
    li r0, 0x8
    stw r31, 0xd4(r28)
    stw r0, 0xd0(r28)
    b lbl_fn_80091CFC_00000F94
lbl_fn_80091CFC_00000E40:
    lwz r3, 0xcc(r28)
    cmplw r3, r0
    blt lbl_fn_80091CFC_00000F94
    slwi r31, r3, 1
    cmplw r0, r31
    bgt lbl_fn_80091CFC_00000F94
    slwi r3, r31, 2
    li r4, 0x0
    la r5, lbl_8087D7E0
    la r6, lbl_8087D7DC
    li r7, 0x0
    bl fn_800846FC
    lwz r0, 0xd4(r28)
    mr r30, r3
    cmpwi r0, 0x0
    beq lbl_fn_80091CFC_00000F8C
    lwz r0, 0xcc(r28)
    mr r4, r31
    cmplw r31, r0
    ble lbl_fn_80091CFC_00000E94
    mr r4, r0
lbl_fn_80091CFC_00000E94:
    cmpwi r4, 0x0
    li r5, 0x0
    beq lbl_fn_80091CFC_00000F84
    cmplwi r4, 0x8
    subi r8, r4, 0x8
    ble lbl_fn_80091CFC_00000F54
    addi r0, r8, 0x7
    mr r7, r30
    srwi r0, r0, 3
    li r6, 0x0
    mtctr r0
    cmplwi r8, 0x0
    ble lbl_fn_80091CFC_00000F54
lbl_fn_80091CFC_00000EC8:
    lwz r8, 0xd4(r28)
    addi r5, r5, 0x8
    lwzx r0, r8, r6
    stw r0, 0x0(r7)
    lwz r0, 0xd4(r28)
    add r8, r0, r6
    lwz r0, 0x4(r8)
    stw r0, 0x4(r7)
    lwz r0, 0xd4(r28)
    add r8, r0, r6
    lwz r0, 0x8(r8)
    stw r0, 0x8(r7)
    lwz r0, 0xd4(r28)
    add r8, r0, r6
    lwz r0, 0xc(r8)
    stw r0, 0xc(r7)
    lwz r0, 0xd4(r28)
    add r8, r0, r6
    lwz r0, 0x10(r8)
    stw r0, 0x10(r7)
    lwz r0, 0xd4(r28)
    add r8, r0, r6
    lwz r0, 0x14(r8)
    stw r0, 0x14(r7)
    lwz r0, 0xd4(r28)
    add r8, r0, r6
    lwz r0, 0x18(r8)
    stw r0, 0x18(r7)
    lwz r0, 0xd4(r28)
    add r8, r0, r6
    addi r6, r6, 0x20
    lwz r0, 0x1c(r8)
    stw r0, 0x1c(r7)
    addi r7, r7, 0x20
    bdnz lbl_fn_80091CFC_00000EC8
lbl_fn_80091CFC_00000F54:
    slwi r7, r5, 2
    subf r0, r5, r4
    add r6, r3, r7
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_80091CFC_00000F84
lbl_fn_80091CFC_00000F6C:
    lwz r3, 0xd4(r28)
    lwzx r0, r3, r7
    addi r7, r7, 0x4
    stw r0, 0x0(r6)
    addi r6, r6, 0x4
    bdnz lbl_fn_80091CFC_00000F6C
lbl_fn_80091CFC_00000F84:
    lwz r3, 0xd4(r28)
    bl fn_80084C24
lbl_fn_80091CFC_00000F8C:
    stw r30, 0xd4(r28)
    stw r31, 0xd0(r28)
lbl_fn_80091CFC_00000F94:
    lwz r0, 0xcc(r28)
    addi r5, r1, 0x8
    lwz r3, 0xd4(r28)
    slwi r0, r0, 2
    stwx r29, r3, r0
    lwz r4, 0xcc(r28)
    lwz r3, 0xd4(r28)
    addi r0, r4, 0x1
    stw r0, 0xcc(r28)
    slwi r0, r0, 2
    add r4, r3, r0
    bl fn_8009246C
lbl_fn_80091CFC_00000FC4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800920B8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r6, 0x16c(r3)
    cmpwi r6, 0x0
    bne lbl_fn_800920B8_00001018
    li r31, -0x1
    b lbl_fn_800920B8_00001058
lbl_fn_800920B8_00001018:
    lwz r0, 0x44(r6)
    li r31, 0x0
    li r7, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_800920B8_00001054
lbl_fn_800920B8_00001030:
    lwz r5, 0x48(r6)
    lwzx r5, r5, r7
    lwz r0, 0x14(r5)
    cmplw r4, r0
    bne lbl_fn_800920B8_00001048
    b lbl_fn_800920B8_00001058
lbl_fn_800920B8_00001048:
    addi r7, r7, 0x4
    addi r31, r31, 0x1
    bdnz lbl_fn_800920B8_00001030
lbl_fn_800920B8_00001054:
    li r31, -0x1
lbl_fn_800920B8_00001058:
    cmpwi r31, 0x0
    blt lbl_fn_800920B8_00001378
    lwz r0, 0xcc(r3)
    li r4, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_800920B8_0000108C
lbl_fn_800920B8_00001074:
    lwz r5, 0xd4(r3)
    lwzx r0, r5, r4
    cmplw r31, r0
    beq lbl_fn_800920B8_00001378
    addi r4, r4, 0x4
    bdnz lbl_fn_800920B8_00001074
lbl_fn_800920B8_0000108C:
    lwz r0, 0xd4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800920B8_000010A4
    lwz r0, 0xd0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_800920B8_000011F4
lbl_fn_800920B8_000010A4:
    lwz r0, 0xd0(r3)
    cmplwi r0, 0x8
    bgt lbl_fn_800920B8_00001348
    li r3, 0x20
    li r4, 0x0
    la r5, lbl_8087D7E0
    la r6, lbl_8087D7DC
    li r7, 0x0
    bl fn_800846FC
    lwz r0, 0xd4(r28)
    mr r29, r3
    cmpwi r0, 0x0
    beq lbl_fn_800920B8_000011E4
    lwz r0, 0xcc(r28)
    li r4, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_800920B8_000010EC
    mr r4, r0
lbl_fn_800920B8_000010EC:
    cmpwi r4, 0x0
    li r5, 0x0
    beq lbl_fn_800920B8_000011DC
    cmplwi r4, 0x8
    subi r8, r4, 0x8
    ble lbl_fn_800920B8_000011AC
    addi r0, r8, 0x7
    mr r7, r29
    srwi r0, r0, 3
    li r6, 0x0
    mtctr r0
    cmplwi r8, 0x0
    ble lbl_fn_800920B8_000011AC
lbl_fn_800920B8_00001120:
    lwz r8, 0xd4(r28)
    addi r5, r5, 0x8
    lwzx r0, r8, r6
    stw r0, 0x0(r7)
    lwz r0, 0xd4(r28)
    add r8, r0, r6
    lwz r0, 0x4(r8)
    stw r0, 0x4(r7)
    lwz r0, 0xd4(r28)
    add r8, r0, r6
    lwz r0, 0x8(r8)
    stw r0, 0x8(r7)
    lwz r0, 0xd4(r28)
    add r8, r0, r6
    lwz r0, 0xc(r8)
    stw r0, 0xc(r7)
    lwz r0, 0xd4(r28)
    add r8, r0, r6
    lwz r0, 0x10(r8)
    stw r0, 0x10(r7)
    lwz r0, 0xd4(r28)
    add r8, r0, r6
    lwz r0, 0x14(r8)
    stw r0, 0x14(r7)
    lwz r0, 0xd4(r28)
    add r8, r0, r6
    lwz r0, 0x18(r8)
    stw r0, 0x18(r7)
    lwz r0, 0xd4(r28)
    add r8, r0, r6
    addi r6, r6, 0x20
    lwz r0, 0x1c(r8)
    stw r0, 0x1c(r7)
    addi r7, r7, 0x20
    bdnz lbl_fn_800920B8_00001120
lbl_fn_800920B8_000011AC:
    slwi r7, r5, 2
    subf r0, r5, r4
    add r6, r3, r7
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_800920B8_000011DC
lbl_fn_800920B8_000011C4:
    lwz r3, 0xd4(r28)
    lwzx r0, r3, r7
    addi r7, r7, 0x4
    stw r0, 0x0(r6)
    addi r6, r6, 0x4
    bdnz lbl_fn_800920B8_000011C4
lbl_fn_800920B8_000011DC:
    lwz r3, 0xd4(r28)
    bl fn_80084C24
lbl_fn_800920B8_000011E4:
    li r0, 0x8
    stw r29, 0xd4(r28)
    stw r0, 0xd0(r28)
    b lbl_fn_800920B8_00001348
lbl_fn_800920B8_000011F4:
    lwz r3, 0xcc(r3)
    cmplw r3, r0
    blt lbl_fn_800920B8_00001348
    slwi r29, r3, 1
    cmplw r0, r29
    bgt lbl_fn_800920B8_00001348
    slwi r3, r29, 2
    li r4, 0x0
    la r5, lbl_8087D7E0
    la r6, lbl_8087D7DC
    li r7, 0x0
    bl fn_800846FC
    lwz r0, 0xd4(r28)
    mr r30, r3
    cmpwi r0, 0x0
    beq lbl_fn_800920B8_00001340
    lwz r0, 0xcc(r28)
    mr r4, r29
    cmplw r29, r0
    ble lbl_fn_800920B8_00001248
    mr r4, r0
lbl_fn_800920B8_00001248:
    cmpwi r4, 0x0
    li r5, 0x0
    beq lbl_fn_800920B8_00001338
    cmplwi r4, 0x8
    subi r8, r4, 0x8
    ble lbl_fn_800920B8_00001308
    addi r0, r8, 0x7
    mr r7, r30
    srwi r0, r0, 3
    li r6, 0x0
    mtctr r0
    cmplwi r8, 0x0
    ble lbl_fn_800920B8_00001308
lbl_fn_800920B8_0000127C:
    lwz r8, 0xd4(r28)
    addi r5, r5, 0x8
    lwzx r0, r8, r6
    stw r0, 0x0(r7)
    lwz r0, 0xd4(r28)
    add r8, r0, r6
    lwz r0, 0x4(r8)
    stw r0, 0x4(r7)
    lwz r0, 0xd4(r28)
    add r8, r0, r6
    lwz r0, 0x8(r8)
    stw r0, 0x8(r7)
    lwz r0, 0xd4(r28)
    add r8, r0, r6
    lwz r0, 0xc(r8)
    stw r0, 0xc(r7)
    lwz r0, 0xd4(r28)
    add r8, r0, r6
    lwz r0, 0x10(r8)
    stw r0, 0x10(r7)
    lwz r0, 0xd4(r28)
    add r8, r0, r6
    lwz r0, 0x14(r8)
    stw r0, 0x14(r7)
    lwz r0, 0xd4(r28)
    add r8, r0, r6
    lwz r0, 0x18(r8)
    stw r0, 0x18(r7)
    lwz r0, 0xd4(r28)
    add r8, r0, r6
    addi r6, r6, 0x20
    lwz r0, 0x1c(r8)
    stw r0, 0x1c(r7)
    addi r7, r7, 0x20
    bdnz lbl_fn_800920B8_0000127C
lbl_fn_800920B8_00001308:
    slwi r7, r5, 2
    subf r0, r5, r4
    add r6, r3, r7
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_800920B8_00001338
lbl_fn_800920B8_00001320:
    lwz r3, 0xd4(r28)
    lwzx r0, r3, r7
    addi r7, r7, 0x4
    stw r0, 0x0(r6)
    addi r6, r6, 0x4
    bdnz lbl_fn_800920B8_00001320
lbl_fn_800920B8_00001338:
    lwz r3, 0xd4(r28)
    bl fn_80084C24
lbl_fn_800920B8_00001340:
    stw r30, 0xd4(r28)
    stw r29, 0xd0(r28)
lbl_fn_800920B8_00001348:
    lwz r0, 0xcc(r28)
    addi r5, r1, 0x8
    lwz r3, 0xd4(r28)
    slwi r0, r0, 2
    stwx r31, r3, r0
    lwz r4, 0xcc(r28)
    lwz r3, 0xd4(r28)
    addi r0, r4, 0x1
    stw r0, 0xcc(r28)
    slwi r0, r0, 2
    add r4, r3, r0
    bl fn_8009246C
lbl_fn_800920B8_00001378:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8009246C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r6, 0x6666
    stw r0, 0x24(r1)
    stmw r26, 0x8(r1)
    mr r26, r3
    mr r27, r4
    mr r28, r5
    addi r31, r6, 0x6667
lbl_fn_8009246C_000013BC:
    subf r0, r26, r27
    srawi r0, r0, 2
    addze r7, r0
    cmpwi r7, 0x1
    ble lbl_fn_8009246C_00001680
    cmpwi r7, 0x14
    bgt lbl_fn_8009246C_00001444
    cmplw r26, r27
    beq lbl_fn_8009246C_00001680
    subi r0, r27, 0x4
    b lbl_fn_8009246C_00001438
lbl_fn_8009246C_000013E8:
    cmplw r26, r27
    mr r5, r26
    beq lbl_fn_8009246C_0000141C
    addi r6, r26, 0x4
    b lbl_fn_8009246C_00001414
lbl_fn_8009246C_000013FC:
    lwz r4, 0x0(r6)
    lwz r3, 0x0(r5)
    cmplw r4, r3
    bge lbl_fn_8009246C_00001410
    mr r5, r6
lbl_fn_8009246C_00001410:
    addi r6, r6, 0x4
lbl_fn_8009246C_00001414:
    cmplw r6, r27
    bne lbl_fn_8009246C_000013FC
lbl_fn_8009246C_0000141C:
    cmplw r5, r26
    beq lbl_fn_8009246C_00001434
    lwz r4, 0x0(r5)
    lwz r3, 0x0(r26)
    stw r3, 0x0(r5)
    stw r4, 0x0(r26)
lbl_fn_8009246C_00001434:
    addi r26, r26, 0x4
lbl_fn_8009246C_00001438:
    cmplw r26, r0
    bne lbl_fn_8009246C_000013E8
    b lbl_fn_8009246C_00001680
lbl_fn_8009246C_00001444:
    lwz r4, lbl_8087D7A8
    srawi r0, r7, 2
    addze r5, r0
    mulhw r0, r31, r4
    addi r6, r4, 0x1
    cmpwi r6, 0x5
    srawi r0, r0, 1
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r0, r0, 0x5
    subf r0, r0, r4
    add r0, r5, r0
    slwi r0, r0, 2
    add r3, r26, r0
    blt lbl_fn_8009246C_00001484
    li r6, -0x4
lbl_fn_8009246C_00001484:
    mulhw r4, r31, r6
    addi r0, r6, 0x1
    slwi r5, r7, 2
    stw r0, lbl_8087D7A8
    cmpwi r0, 0x5
    subf r0, r7, r5
    srawi r0, r0, 2
    addze r5, r0
    srawi r0, r4, 1
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x5
    subf r0, r0, r6
    add r0, r5, r0
    slwi r0, r0, 2
    add r4, r26, r0
    blt lbl_fn_8009246C_000014D0
    li r6, -0x4
    stw r6, lbl_8087D7A8
lbl_fn_8009246C_000014D0:
    subi r29, r27, 0x4
    mr r6, r28
    mr r5, r29
    bl fn_80092768
    lwz r3, 0x0(r29)
    mr r30, r26
    mr r4, r29
    b lbl_fn_8009246C_000014F4
lbl_fn_8009246C_000014F0:
    addi r30, r30, 0x4
lbl_fn_8009246C_000014F4:
    lwz r0, 0x0(r30)
    cmplw r0, r3
    blt lbl_fn_8009246C_000014F0
lbl_fn_8009246C_00001500:
    subi r4, r4, 0x4
    cmplw r30, r4
    beq lbl_fn_8009246C_00001518
    lwz r0, 0x0(r4)
    cmplw r0, r3
    bge lbl_fn_8009246C_00001500
lbl_fn_8009246C_00001518:
    cmplw r30, r4
    bge lbl_fn_8009246C_00001578
    lwz r3, 0x0(r30)
    lwz r0, 0x0(r4)
    stw r0, 0x0(r30)
    addi r30, r30, 0x4
    stw r3, 0x0(r4)
    b lbl_fn_8009246C_0000153C
lbl_fn_8009246C_00001538:
    addi r30, r30, 0x4
lbl_fn_8009246C_0000153C:
    lwz r3, 0x0(r29)
    lwz r0, 0x0(r30)
    cmplw r0, r3
    blt lbl_fn_8009246C_00001538
lbl_fn_8009246C_0000154C:
    lwzu r0, -0x4(r4)
    cmplw r0, r3
    bge lbl_fn_8009246C_0000154C
    cmplw r30, r4
    bge lbl_fn_8009246C_00001578
    lwz r3, 0x0(r30)
    lwz r0, 0x0(r4)
    stw r0, 0x0(r30)
    addi r30, r30, 0x4
    stw r3, 0x0(r4)
    b lbl_fn_8009246C_0000153C
lbl_fn_8009246C_00001578:
    cmplw r30, r26
    bne lbl_fn_8009246C_00001630
    lwz r3, 0x0(r30)
    subi r4, r27, 0x4
    lwz r0, 0x0(r29)
    stw r0, 0x0(r30)
    addi r30, r30, 0x4
    stw r3, 0x0(r29)
    lwz r3, 0x0(r26)
    lwz r0, -0x4(r27)
    cmplw r3, r0
    blt lbl_fn_8009246C_000015DC
    b lbl_fn_8009246C_000015B0
lbl_fn_8009246C_000015AC:
    addi r30, r30, 0x4
lbl_fn_8009246C_000015B0:
    cmplw r30, r27
    beq lbl_fn_8009246C_000015C4
    lwz r0, 0x0(r30)
    cmplw r3, r0
    bge lbl_fn_8009246C_000015AC
lbl_fn_8009246C_000015C4:
    cmplw r30, r4
    bge lbl_fn_8009246C_000015DC
    lwz r3, 0x0(r30)
    lwz r0, 0x0(r4)
    stw r0, 0x0(r30)
    stw r3, 0x0(r4)
lbl_fn_8009246C_000015DC:
    cmplw r30, r4
    bge lbl_fn_8009246C_00001628
    b lbl_fn_8009246C_000015EC
lbl_fn_8009246C_000015E8:
    addi r30, r30, 0x4
lbl_fn_8009246C_000015EC:
    lwz r3, 0x0(r26)
    lwz r0, 0x0(r30)
    cmplw r3, r0
    bge lbl_fn_8009246C_000015E8
lbl_fn_8009246C_000015FC:
    lwzu r0, -0x4(r4)
    cmplw r3, r0
    blt lbl_fn_8009246C_000015FC
    cmplw r30, r4
    bge lbl_fn_8009246C_00001628
    lwz r3, 0x0(r30)
    lwz r0, 0x0(r4)
    stw r0, 0x0(r30)
    addi r30, r30, 0x4
    stw r3, 0x0(r4)
    b lbl_fn_8009246C_000015EC
lbl_fn_8009246C_00001628:
    mr r26, r30
    b lbl_fn_8009246C_000013BC
lbl_fn_8009246C_00001630:
    subf r3, r26, r30
    subf r0, r30, r27
    srawi r3, r3, 2
    addze r3, r3
    srawi r0, r0, 2
    addze r0, r0
    cmpw r3, r0
    bge lbl_fn_8009246C_00001668
    mr r3, r26
    mr r4, r30
    mr r5, r28
    bl fn_8009246C
    mr r26, r30
    b lbl_fn_8009246C_000013BC
lbl_fn_8009246C_00001668:
    mr r3, r30
    mr r4, r27
    mr r5, r28
    bl fn_8009246C
    mr r27, r30
    b lbl_fn_8009246C_000013BC
lbl_fn_8009246C_00001680:
    lmw r26, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80092768(void)
{
    nofralloc
    lwz r9, 0x0(r3)
    lwz r8, 0x0(r5)
    lwz r10, 0x0(r4)
    subf r0, r9, r8
    orc r7, r8, r9
    srwi r6, r0, 1
    subf r7, r6, r7
    subf r0, r8, r10
    orc r6, r10, r8
    srwi r0, r0, 1
    srwi. r7, r7, 31
    subf r0, r0, r6
    srwi r0, r0, 31
    beq lbl_fn_80092768_000016D4
    cmpwi r0, 0x0
    bnelr
lbl_fn_80092768_000016D4:
    cmpwi r7, 0x0
    bne lbl_fn_80092768_000016F8
    cmpwi r0, 0x0
    bne lbl_fn_80092768_000016F8
    lwz r5, 0x0(r3)
    lwz r0, 0x0(r4)
    stw r0, 0x0(r3)
    stw r5, 0x0(r4)
    blr
lbl_fn_80092768_000016F8:
    cmplw r10, r9
    bge lbl_fn_80092768_00001710
    lwz r6, 0x0(r3)
    lwz r0, 0x0(r4)
    stw r0, 0x0(r3)
    stw r6, 0x0(r4)
lbl_fn_80092768_00001710:
    cmpwi r7, 0x0
    beq lbl_fn_80092768_0000172C
    lwz r3, 0x0(r4)
    lwz r0, 0x0(r5)
    stw r0, 0x0(r4)
    stw r3, 0x0(r5)
    blr
lbl_fn_80092768_0000172C:
    lwz r4, 0x0(r3)
    lwz r0, 0x0(r5)
    stw r0, 0x0(r3)
    stw r4, 0x0(r5)
    blr
}

asm void fn_80092814(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r5
    stw r30, 0x8(r1)
    mr r30, r3
    mr r3, r4
    bl fn_800DC6B4
    mulli r0, r31, 0x18
    add r4, r30, r0
    lwz r5, 0x16c(r4)
    cmpwi r5, 0x0
    bne lbl_fn_80092814_00001780
    li r6, -0x1
    b lbl_fn_80092814_000017C0
lbl_fn_80092814_00001780:
    lwz r0, 0x44(r5)
    li r6, 0x0
    li r7, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80092814_000017BC
lbl_fn_80092814_00001798:
    lwz r4, 0x48(r5)
    lwzx r4, r4, r7
    lwz r0, 0x14(r4)
    cmplw r3, r0
    bne lbl_fn_80092814_000017B0
    b lbl_fn_80092814_000017C0
lbl_fn_80092814_000017B0:
    addi r7, r7, 0x4
    addi r6, r6, 0x1
    bdnz lbl_fn_80092814_00001798
lbl_fn_80092814_000017BC:
    li r6, -0x1
lbl_fn_80092814_000017C0:
    lwz r31, 0xc(r1)
    mr r3, r6
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800928B0(void)
{
    nofralloc
    mulli r0, r5, 0x18
    add r3, r3, r0
    lwz r6, 0x16c(r3)
    cmpwi r6, 0x0
    bne lbl_fn_800928B0_000017F8
    li r3, -0x1
    blr
lbl_fn_800928B0_000017F8:
    lwz r0, 0x44(r6)
    li r3, 0x0
    li r7, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_800928B0_00001830
lbl_fn_800928B0_00001810:
    lwz r5, 0x48(r6)
    lwzx r5, r5, r7
    lwz r0, 0x14(r5)
    cmplw r4, r0
    beqlr
    addi r7, r7, 0x4
    addi r3, r3, 0x1
    bdnz lbl_fn_800928B0_00001810
lbl_fn_800928B0_00001830:
    li r3, -0x1
    blr
}

asm void fn_8009290C(void)
{
    nofralloc
    lwz r0, 0x104(r3)
    li r7, 0x0
    li r6, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8009290C_00001878
lbl_fn_8009290C_00001850:
    lwz r5, 0x108(r3)
    lwzx r5, r5, r6
    lwz r0, 0x0(r5)
    cmplw r4, r0
    bne lbl_fn_8009290C_0000186C
    mr r3, r7
    blr
lbl_fn_8009290C_0000186C:
    addi r6, r6, 0x4
    addi r7, r7, 0x1
    bdnz lbl_fn_8009290C_00001850
lbl_fn_8009290C_00001878:
    li r3, -0x1
    blr
}

asm void fn_80092954(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    mr r3, r4
    bl fn_800DC6B4
    lwz r0, 0x104(r31)
    li r5, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80092954_000018D0
lbl_fn_80092954_000018B0:
    lwz r4, 0x108(r31)
    lwzx r4, r4, r5
    lwz r0, 0x0(r4)
    cmplw r3, r0
    bne lbl_fn_80092954_000018C8
    b lbl_fn_80092954_000018D4
lbl_fn_80092954_000018C8:
    addi r5, r5, 0x4
    bdnz lbl_fn_80092954_000018B0
lbl_fn_80092954_000018D0:
    li r4, 0x0
lbl_fn_80092954_000018D4:
    lwz r31, 0xc(r1)
    mr r3, r4
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800929C0(void)
{
    nofralloc
    lwz r0, 0x104(r3)
    li r6, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_800929C0_00001924
lbl_fn_800929C0_00001900:
    lwz r5, 0x108(r3)
    lwzx r5, r5, r6
    lwz r0, 0x0(r5)
    cmplw r4, r0
    bne lbl_fn_800929C0_0000191C
    mr r3, r5
    blr
lbl_fn_800929C0_0000191C:
    addi r6, r6, 0x4
    bdnz lbl_fn_800929C0_00001900
lbl_fn_800929C0_00001924:
    li r3, 0x0
    blr
}

asm void fn_80092A00(void)
{
    nofralloc
    lfs f0, lbl_80880C14
    li r6, 0x0
    stwu r1, -0x10(r1)
    li r5, 0x0
    fmuls f0, f0, f1
    fctiwz f0, f0
    b lbl_fn_80092A00_00001964
lbl_fn_80092A00_00001948:
    lwz r4, 0x108(r3)
    addi r6, r6, 0x1
    stfd f0, 0x8(r1)
    lwzx r4, r4, r5
    addi r5, r5, 0x4
    lwz r0, 0xc(r1)
    stw r0, 0x3c(r4)
lbl_fn_80092A00_00001964:
    lwz r0, 0x104(r3)
    cmplw r6, r0
    blt lbl_fn_80092A00_00001948
    addi r1, r1, 0x10
    blr
}

asm void fn_80092A4C(void)
{
    nofralloc
    stwu r1, -0x1c0(r1)
    mflr r0
    stw r0, 0x1c4(r1)
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
    stw r31, 0xcc(r1)
    mr r31, r3
    stw r30, 0xc8(r1)
    stw r29, 0xc4(r1)
    lwz r0, 0x20c(r3)
    extlwi r0, r0, 9, 8
    srawi r0, r0, 24
    cmpwi r0, 0x1
    ble lbl_fn_80092A4C_00001D60
    psq_l f1, 0x8(r3), 0, 0
    addi r5, r1, 0x30
    psq_l f2, 0x10(r3), 0, 0
    addi r29, r1, 0x20
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
    blt lbl_fn_80092A4C_00001C1C
    lwz r0, 0xb4(r3)
    cmpwi r0, 0x0
    blt lbl_fn_80092A4C_00001BE0
    mulli r0, r0, 0x30
    lwz r7, 0x3c(r3)
    lfs f21, lbl_80880C08
    addi r4, r1, 0x60
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
    stfs f17, 0x74(r1)
    fmuls f17, f29, f21
    fadds f30, f7, f0
    fmuls f0, f27, f21
    stfs f17, 0x70(r1)
    fmuls f7, f26, f21
    lfs f20, 0x0(r7)
    lfs f12, 0x0(r6)
    fmuls f18, f30, f21
    fadds f12, f20, f12
    stfs f0, 0x78(r1)
    fmuls f20, f13, f21
    psq_l f3, 0x10(r4), 0, 0
    stfs f7, 0x7c(r1)
    fmuls f0, f12, f21
    psq_l f4, 0x18(r4), 0, 0
    stfs f0, 0x60(r1)
    stfs f20, 0x64(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f19, 0x68(r1)
    stfs f18, 0x6c(r1)
    psq_l f2, 0x8(r4), 0, 0
    stfs f8, 0x80(r1)
    stfs f9, 0x84(r1)
    psq_l f5, 0x20(r4), 0, 0
    stfs f10, 0x88(r1)
    stfs f11, 0x8c(r1)
    psq_l f6, 0x28(r4), 0, 0
    stfs f12, 0x90(r1)
    stfs f13, 0x94(r1)
    stfs f31, 0x98(r1)
    stfs f30, 0x9c(r1)
    stfs f29, 0xa0(r1)
    stfs f28, 0xa4(r1)
    stfs f27, 0xa8(r1)
    stfs f26, 0xac(r1)
    stfs f25, 0xb0(r1)
    stfs f24, 0xb4(r1)
    stfs f23, 0xb8(r1)
    stfs f22, 0xbc(r1)
    psq_st f1, 0x0(r5), 0, 0
    psq_st f2, 0x8(r5), 0, 0
    psq_st f3, 0x10(r5), 0, 0
    psq_st f4, 0x18(r5), 0, 0
    psq_st f5, 0x20(r5), 0, 0
    psq_st f6, 0x28(r5), 0, 0
    b lbl_fn_80092A4C_00001C1C
lbl_fn_80092A4C_00001BE0:
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
lbl_fn_80092A4C_00001C1C:
    lfs f7, 0x54(r3)
    addi r30, r1, 0x8
    lfs f0, 0xac(r3)
    mr r4, r30
    psq_l f1, 0x9c(r31), 0, 0
    mr r5, r30
    lfs f2, 0xa4(r31)
    fmuls f17, f7, f0
    stfs f2, 0x10(r1)
    addi r3, r1, 0x30
    psq_st f1, 0x0(r30), 0, 0
    bl fn_805F93C0
    psq_l f1, 0x0(r30), 0, 0
    addi r3, r1, 0x14
    lwz r30, lbl_8087EFB4
    psq_st f1, 0x0(r29), 0, 0
    lfs f2, 0x10(r1)
    lfs f7, 0xa8(r31)
    lfs f0, 0x114(r30)
    fmuls f10, f7, f17
    lfs f9, 0x24(r1)
    lfs f8, 0x110(r30)
    fsubs f11, f2, f0
    lfs f0, 0x10c(r30)
    lfs f7, 0x20(r1)
    fsubs f8, f9, f8
    stfs f2, 0x28(r1)
    fsubs f0, f7, f0
    stfs f10, 0x2c(r1)
    stfs f0, 0x14(r1)
    stfs f8, 0x18(r1)
    stfs f11, 0x1c(r1)
    bl fn_805F9940
    lfs f0, 0x2c(r1)
    lfs f17, lbl_80880BF8
    fsubs f0, f1, f0
    lwz r3, 0x50(r31)
    lwz r0, 0x20c(r31)
    rlwimi r0, r3, 8, 16, 23
    stw r0, 0x20c(r31)
    fcmpo cr0, f17, f0
    ble lbl_fn_80092A4C_00001CC8
    b lbl_fn_80092A4C_00001CCC
lbl_fn_80092A4C_00001CC8:
    fmr f17, f0
lbl_fn_80092A4C_00001CCC:
    lis r3, lbl_80732250@ha
    lfd f1, lbl_80732250@l(r3)
    bl fn_8068AE24
    lfs f0, 0x154(r30)
    frsp f18, f1
    fmr f1, f0
    bl fn_8068AE24
    frsp f7, f1
    lwz r0, 0x20c(r31)
    lfs f0, lbl_80880BFC
    extlwi r0, r0, 9, 8
    fdivs f7, f7, f18
    srawi r3, r0, 24
    subi r0, r3, 0x1
    stw r0, 0x50(r31)
    fmuls f8, f17, f7
    b lbl_fn_80092A4C_00001D54
lbl_fn_80092A4C_00001D10:
    mulli r0, r4, 0x18
    add r3, r31, r0
    lfs f9, 0x170(r3)
    fabs f7, f9
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_80092A4C_00001D3C
    lwz r3, lbl_8087EFA8
    slwi r0, r4, 2
    add r3, r3, r0
    lfs f9, 0x208(r3)
lbl_fn_80092A4C_00001D3C:
    fcmpo cr0, f9, f8
    cror eq, lt, eq
    beq lbl_fn_80092A4C_00001D60
    lwz r3, 0x50(r31)
    subi r0, r3, 0x1
    stw r0, 0x50(r31)
lbl_fn_80092A4C_00001D54:
    lwz r4, 0x50(r31)
    cmpwi r4, 0x0
    bne lbl_fn_80092A4C_00001D10
lbl_fn_80092A4C_00001D60:
    lwz r0, 0x1c4(r1)
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
    lwz r31, 0xcc(r1)
    lwz r30, 0xc8(r1)
    lwz r29, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0x1c0
    blr
}
