#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_14(void);
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_14(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void fn_80050A1C(void);
extern void fn_80050E18(void);
extern void fn_80051684(void);
extern void fn_80052760(void);
extern void fn_805F8CA0(void);
extern void fn_805F93C0(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9990(void);
extern void fn_805F99B0(void);
extern void fn_8068B100(void);

/* External data declarations */
extern u8 lbl_80731048[];

/* Small data declarations */
extern u32 lbl_80880940;
extern u32 lbl_80880944;
extern u32 lbl_80880948;
extern u32 lbl_8088094C;
extern u32 lbl_80880950;
extern u32 lbl_8088095C;

/* Function declarations */
void fn_8005361C(void);
void fn_80053BD0(void);
void fn_80054038(void);
void fn_8005454C(void);
void fn_800551BC(void);
void fn_80055810(void);
void fn_80055C40(void);

asm void fn_8005361C(void)
{
    nofralloc
    stwu r1, -0x160(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x164(r1)
    stfd f31, 0x150(r1)
    psq_st f31, 0x158(r1), 0, 0
    stfd f30, 0x140(r1)
    psq_st f30, 0x148(r1), 0, 0
    stw r31, 0x13c(r1)
    mr r31, r5
    stw r30, 0x138(r1)
    mr r30, r3
    stw r29, 0x134(r1)
    stw r28, 0x130(r1)
    mr r28, r4
    beq lbl_fn_8005361C_00000048
    li r0, 0x0
    stw r0, 0x0(r3)
lbl_fn_8005361C_00000048:
    lfs f3, 0x8(r5)
    addi r3, r1, 0xbc
    lfs f0, 0x8(r4)
    lfs f5, 0x4(r5)
    fsubs f6, f3, f0
    lfs f4, 0x4(r4)
    lfs f3, 0x0(r5)
    lfs f0, 0x0(r4)
    fsubs f4, f5, f4
    stfs f6, 0xc4(r1)
    fsubs f0, f3, f0
    lfs f31, 0xc(r5)
    stfs f4, 0xc0(r1)
    stfs f0, 0xbc(r1)
    bl fn_805F9920
    fmuls f0, f31, f31
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_8005361C_00000220
    cmpwi r30, 0x0
    beq lbl_fn_8005361C_00000218
    lfs f3, 0x0(r28)
    li r3, 0x1
    lfs f0, 0x0(r31)
    addi r4, r1, 0x11c
    psq_l f1, 0x0(r28), 0, 0
    li r0, 0x0
    lfs f2, 0x8(r28)
    fcmpu cr0, f3, f0
    stw r3, 0x0(r30)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x124(r1)
    bne lbl_fn_8005361C_000000F0
    lfs f3, 0x4(r28)
    lfs f0, 0x4(r31)
    fcmpu cr0, f3, f0
    bne lbl_fn_8005361C_000000F0
    lfs f3, 0x8(r28)
    lfs f0, 0x8(r31)
    fcmpu cr0, f3, f0
    bne lbl_fn_8005361C_000000F0
    mr r0, r3
lbl_fn_8005361C_000000F0:
    cmpwi r0, 0x0
    beq lbl_fn_8005361C_00000154
    lfs f5, 0x8(r28)
    addi r4, r1, 0xb0
    lfs f0, 0x14(r28)
    addi r3, r1, 0x11c
    lfs f4, 0x4(r28)
    fsubs f6, f5, f0
    lfs f0, 0x10(r28)
    lfs f3, 0x0(r28)
    fsubs f7, f4, f0
    lfs f0, 0xc(r28)
    fadds f2, f5, f6
    fsubs f0, f3, f0
    stfs f7, 0xa8(r1)
    fadds f4, f4, f7
    stfs f0, 0xa4(r1)
    fadds f0, f3, f0
    stfs f4, 0xb4(r1)
    stfs f0, 0xb0(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f6, 0xac(r1)
    stfs f2, 0xb8(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x124(r1)
lbl_fn_8005361C_00000154:
    lfs f3, 0x124(r1)
    addi r29, r1, 0x98
    lfs f0, 0x8(r31)
    addi r5, r1, 0x8c
    lfs f5, 0x120(r1)
    mr r3, r29
    fsubs f2, f3, f0
    lfs f4, 0x4(r31)
    lfs f3, 0x11c(r1)
    mr r4, r29
    lfs f0, 0x0(r31)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x90(r1)
    stfs f0, 0x8c(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0x94(r1)
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0xa0(r1)
    bl fn_805F98D0
    lfs f2, 0xa0(r1)
    addi r3, r1, 0x80
    psq_l f1, 0x0(r29), 0, 0
    psq_st f1, 0x1c(r30), 0, 0
    fmuls f5, f2, f31
    lfs f0, 0x8(r31)
    lfs f3, 0x20(r30)
    lfs f4, 0x1c(r30)
    fadds f7, f0, f5
    fmuls f6, f3, f31
    lfs f3, 0x4(r31)
    fmuls f4, f4, f31
    lfs f0, 0x0(r31)
    stfs f2, 0x24(r30)
    fmr f2, f7
    fadds f3, f3, f6
    stfs f4, 0x74(r1)
    fadds f0, f0, f4
    stfs f2, 0xc(r30)
    frsp f2, f2
    stfs f0, 0x80(r1)
    stfs f3, 0x84(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f6, 0x78(r1)
    stfs f5, 0x7c(r1)
    stfs f7, 0x88(r1)
    psq_st f1, 0x4(r30), 0, 0
    psq_st f1, 0x10(r30), 0, 0
    stfs f2, 0x18(r30)
lbl_fn_8005361C_00000218:
    li r3, 0x1
    b lbl_fn_8005361C_00000584
lbl_fn_8005361C_00000220:
    lfs f3, 0x14(r28)
    addi r3, r1, 0x110
    lfs f5, 0x8(r28)
    addi r4, r1, 0x104
    lfs f0, 0x8(r31)
    fsubs f6, f3, f5
    lfs f4, 0x10(r28)
    fsubs f7, f0, f5
    lfs f3, 0x4(r28)
    lfs f0, 0x4(r31)
    fsubs f5, f4, f3
    fsubs f8, f0, f3
    lfs f4, 0xc(r28)
    lfs f3, 0x0(r28)
    lfs f0, 0x0(r31)
    fsubs f4, f4, f3
    stfs f5, 0x114(r1)
    fsubs f0, f0, f3
    stfs f4, 0x110(r1)
    stfs f6, 0x118(r1)
    stfs f0, 0x104(r1)
    stfs f8, 0x108(r1)
    stfs f7, 0x10c(r1)
    bl fn_805F9990
    lfs f0, lbl_80880940
    fcmpo cr0, f1, f0
    bge lbl_fn_8005361C_00000294
    li r3, 0x0
    b lbl_fn_8005361C_00000584
lbl_fn_8005361C_00000294:
    lfs f3, 0x8(r28)
    addi r29, r1, 0xf8
    lfs f0, 0x14(r28)
    addi r5, r1, 0x68
    lfs f5, 0x4(r28)
    mr r3, r29
    fsubs f2, f3, f0
    lfs f4, 0x10(r28)
    lfs f3, 0x0(r28)
    mr r4, r29
    lfs f0, 0xc(r28)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x6c(r1)
    stfs f0, 0x68(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0x70(r1)
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x100(r1)
    bl fn_805F98D0
    lfs f3, 0x8(r31)
    mr r3, r29
    lfs f0, 0x14(r28)
    addi r4, r1, 0xec
    lfs f5, 0x4(r31)
    fsubs f6, f3, f0
    lfs f4, 0x10(r28)
    lfs f3, 0x0(r31)
    lfs f0, 0xc(r28)
    fsubs f4, f5, f4
    stfs f6, 0xf4(r1)
    fsubs f0, f3, f0
    stfs f4, 0xf0(r1)
    stfs f0, 0xec(r1)
    bl fn_805F9990
    lfs f0, lbl_80880940
    fmr f30, f1
    fcmpo cr0, f1, f0
    bge lbl_fn_8005361C_000003B0
    addi r3, r1, 0xec
    bl fn_805F9920
    fmuls f0, f31, f31
    fcmpo cr0, f1, f0
    ble lbl_fn_8005361C_0000034C
    li r3, 0x0
    b lbl_fn_8005361C_00000584
lbl_fn_8005361C_0000034C:
    lfs f4, 0x100(r1)
    addi r4, r1, 0x5c
    lfs f0, 0xfc(r1)
    addi r3, r1, 0xe0
    lfs f3, 0xf8(r1)
    fmuls f4, f4, f30
    fmuls f5, f0, f30
    lfs f0, 0xf4(r1)
    fmuls f6, f3, f30
    lfs f3, 0xf0(r1)
    fsubs f2, f0, f4
    lfs f0, 0xec(r1)
    fsubs f3, f3, f5
    stfs f6, 0x50(r1)
    fsubs f0, f0, f6
    stfs f3, 0x60(r1)
    stfs f0, 0x5c(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f5, 0x54(r1)
    stfs f4, 0x58(r1)
    stfs f2, 0x64(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0xe8(r1)
    bl fn_805F9920
    b lbl_fn_8005361C_00000424
lbl_fn_8005361C_000003B0:
    lfs f4, 0x100(r1)
    addi r4, r1, 0x44
    lfs f0, 0xfc(r1)
    addi r3, r1, 0xe0
    lfs f3, 0xf8(r1)
    fmuls f4, f4, f1
    fmuls f5, f0, f1
    lfs f0, 0xf4(r1)
    fmuls f6, f3, f1
    lfs f3, 0xf0(r1)
    fsubs f2, f0, f4
    lfs f0, 0xec(r1)
    fsubs f3, f3, f5
    stfs f6, 0x38(r1)
    fsubs f0, f0, f6
    stfs f3, 0x48(r1)
    stfs f0, 0x44(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f5, 0x3c(r1)
    stfs f4, 0x40(r1)
    stfs f2, 0x4c(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0xe8(r1)
    bl fn_805F9920
    fmuls f0, f31, f31
    fcmpo cr0, f1, f0
    ble lbl_fn_8005361C_00000424
    li r3, 0x0
    b lbl_fn_8005361C_00000584
lbl_fn_8005361C_00000424:
    cmpwi r30, 0x0
    beq lbl_fn_8005361C_00000580
    li r0, 0x1
    stw r0, 0x0(r30)
    lfs f5, 0x8(r31)
    addi r28, r1, 0xd4
    lfs f0, 0xe8(r1)
    addi r29, r1, 0xc8
    lfs f4, 0x4(r31)
    addi r3, r1, 0x8
    fsubs f6, f5, f0
    lfs f0, 0xe4(r1)
    lfs f3, 0x0(r31)
    fsubs f7, f4, f0
    lfs f0, 0xe0(r1)
    fsubs f5, f6, f5
    fsubs f0, f3, f0
    stfs f7, 0xd8(r1)
    fsubs f4, f7, f4
    stfs f0, 0xd4(r1)
    fsubs f0, f0, f3
    stfs f6, 0xdc(r1)
    stfs f0, 0x8(r1)
    stfs f4, 0xc(r1)
    stfs f5, 0x10(r1)
    bl fn_805F9920
    fmsubs f1, f31, f31, f1
    lfs f0, lbl_80880940
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_8005361C_000004B4
    psq_l f1, 0x0(r28), 0, 0
    lfs f2, 0xdc(r1)
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0xd0(r1)
    b lbl_fn_8005361C_00000504
lbl_fn_8005361C_000004B4:
    bl fn_8068B100
    frsp f5, f1
    lfs f4, 0x100(r1)
    lfs f3, 0xfc(r1)
    lfs f0, 0xf8(r1)
    fmuls f7, f4, f5
    lfs f4, 0xdc(r1)
    fmuls f6, f3, f5
    lfs f3, 0xd8(r1)
    fmuls f5, f0, f5
    lfs f0, 0xd4(r1)
    fadds f4, f4, f7
    stfs f5, 0x14(r1)
    fadds f3, f3, f6
    fadds f0, f0, f5
    stfs f6, 0x18(r1)
    stfs f7, 0x1c(r1)
    stfs f0, 0xc8(r1)
    stfs f3, 0xcc(r1)
    stfs f4, 0xd0(r1)
lbl_fn_8005361C_00000504:
    lfs f3, 0xd0(r1)
    addi r28, r1, 0x2c
    lfs f0, 0x8(r31)
    addi r5, r1, 0x20
    lfs f5, 0xcc(r1)
    mr r3, r28
    fsubs f2, f3, f0
    lfs f4, 0x4(r31)
    lfs f3, 0xc8(r1)
    mr r4, r28
    lfs f0, 0x0(r31)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x24(r1)
    stfs f0, 0x20(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0x28(r1)
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x34(r1)
    bl fn_805F98D0
    psq_l f1, 0x0(r28), 0, 0
    addi r3, r1, 0xc8
    lfs f2, 0x34(r1)
    stfs f2, 0x24(r30)
    lfs f2, 0xd0(r1)
    psq_st f1, 0x1c(r30), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x4(r30), 0, 0
    stfs f2, 0xc(r30)
    psq_st f1, 0x10(r30), 0, 0
    stfs f2, 0x18(r30)
lbl_fn_8005361C_00000580:
    li r3, 0x1
lbl_fn_8005361C_00000584:
    lwz r0, 0x164(r1)
    psq_l f31, 0x158(r1), 0, 0
    lfd f31, 0x150(r1)
    psq_l f30, 0x148(r1), 0, 0
    lfd f30, 0x140(r1)
    lwz r31, 0x13c(r1)
    lwz r30, 0x138(r1)
    lwz r29, 0x134(r1)
    lwz r28, 0x130(r1)
    mtlr r0
    addi r1, r1, 0x160
    blr
}

asm void fn_80053BD0(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    addi r11, r1, 0x110
    stfd f31, 0x110(r1)
    psq_st f31, 0x118(r1), 0, 0
    bl _savegpr_26
    lfs f3, 0x0(r5)
    mr r31, r3
    lfs f0, 0xc(r5)
    mr r26, r4
    lfs f4, 0x8(r5)
    mr r27, r5
    fsubs f6, f3, f0
    lfs f3, 0x14(r5)
    lfs f0, lbl_80880940
    li r0, 0x0
    fsubs f5, f4, f3
    lfs f4, 0x4(r5)
    lfs f3, 0x10(r5)
    fcmpu cr0, f0, f6
    stfs f6, 0x68(r1)
    fsubs f3, f4, f3
    stfs f5, 0x70(r1)
    stfs f3, 0x6c(r1)
    bne lbl_fn_80053BD0_00000630
    fcmpu cr0, f0, f3
    bne lbl_fn_80053BD0_00000630
    fcmpu cr0, f0, f5
    bne lbl_fn_80053BD0_00000630
    li r0, 0x1
lbl_fn_80053BD0_00000630:
    cmpwi r0, 0x0
    beq lbl_fn_80053BD0_0000064C
    mr r3, r31
    mr r4, r26
    addi r5, r5, 0xc
    bl fn_8005361C
    b lbl_fn_80053BD0_000009FC
lbl_fn_80053BD0_0000064C:
    cmpwi r3, 0x0
    beq lbl_fn_80053BD0_0000065C
    li r0, 0x0
    stw r0, 0x0(r3)
lbl_fn_80053BD0_0000065C:
    lfs f31, 0x18(r5)
    mr r3, r26
    mr r4, r27
    addi r5, r1, 0x88
    bl fn_80050A1C
    fmuls f0, f31, f31
    fcmpo cr0, f1, f0
    bge lbl_fn_80053BD0_00000730
    cmpwi r31, 0x0
    beq lbl_fn_80053BD0_00000728
    lfs f0, lbl_8088095C
    li r0, 0x1
    stw r0, 0x0(r31)
    fcmpo cr0, f1, f0
    bge lbl_fn_80053BD0_000006B0
    lfs f3, lbl_80880940
    lfs f0, lbl_80880944
    stfs f3, 0x1c(r31)
    stfs f3, 0x20(r31)
    stfs f0, 0x24(r31)
    b lbl_fn_80053BD0_00000710
lbl_fn_80053BD0_000006B0:
    lfs f3, 0x8(r26)
    addi r30, r1, 0x5c
    lfs f0, 0x90(r1)
    addi r5, r1, 0x50
    lfs f5, 0x4(r26)
    mr r3, r30
    fsubs f2, f3, f0
    lfs f4, 0x8c(r1)
    lfs f3, 0x0(r26)
    mr r4, r30
    lfs f0, 0x88(r1)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x54(r1)
    stfs f0, 0x50(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0x58(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x64(r1)
    bl fn_805F98D0
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x64(r1)
    stfs f2, 0x24(r31)
    psq_st f1, 0x1c(r31), 0, 0
lbl_fn_80053BD0_00000710:
    psq_l f1, 0x0(r26), 0, 0
    lfs f2, 0x8(r26)
    stfs f2, 0xc(r31)
    psq_st f1, 0x4(r31), 0, 0
    psq_st f1, 0x10(r31), 0, 0
    stfs f2, 0x18(r31)
lbl_fn_80053BD0_00000728:
    li r3, 0x1
    b lbl_fn_80053BD0_000009FC
lbl_fn_80053BD0_00000730:
    mr r3, r26
    mr r4, r27
    addi r5, r1, 0xc8
    addi r6, r1, 0xe0
    bl fn_80050E18
    fmuls f0, f31, f31
    fcmpo cr0, f1, f0
    ble lbl_fn_80053BD0_00000758
    li r3, 0x0
    b lbl_fn_80053BD0_000009FC
lbl_fn_80053BD0_00000758:
    cmpwi r31, 0x0
    beq lbl_fn_80053BD0_000009F8
    li r0, 0x1
    stw r0, 0x0(r31)
    addi r30, r1, 0x44
    addi r5, r1, 0x38
    lfs f3, 0x14(r26)
    mr r3, r30
    lfs f0, 0x8(r26)
    mr r4, r30
    lfs f5, 0x10(r26)
    fsubs f2, f3, f0
    lfs f4, 0x4(r26)
    lfs f3, 0xc(r26)
    lfs f0, 0x0(r26)
    fsubs f4, f5, f4
    stfs f2, 0x40(r1)
    fsubs f0, f3, f0
    stfs f4, 0x3c(r1)
    stfs f0, 0x38(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x4c(r1)
    bl fn_805F98D0
    lfs f2, 0x4c(r1)
    addi r29, r1, 0xbc
    psq_l f1, 0x0(r30), 0, 0
    addi r30, r1, 0x2c
    psq_st f1, 0x0(r29), 0, 0
    addi r5, r1, 0x20
    mr r3, r30
    mr r4, r30
    stfs f2, 0xc4(r1)
    lfs f3, 0x14(r27)
    lfs f0, 0x8(r27)
    lfs f5, 0x10(r27)
    fsubs f2, f3, f0
    lfs f4, 0x4(r27)
    lfs f3, 0xc(r27)
    lfs f0, 0x0(r27)
    fsubs f4, f5, f4
    stfs f2, 0x28(r1)
    fsubs f0, f3, f0
    stfs f4, 0x24(r1)
    stfs f0, 0x20(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x34(r1)
    bl fn_805F98D0
    lfs f2, 0x34(r1)
    addi r28, r1, 0xa4
    psq_l f1, 0x0(r30), 0, 0
    addi r5, r1, 0xb0
    psq_st f1, 0x0(r28), 0, 0
    addi r7, r1, 0x98
    mr r4, r26
    mr r6, r27
    stfs f2, 0xac(r1)
    addi r3, r1, 0xc8
    psq_l f1, 0x0(r26), 0, 0
    lfs f2, 0x8(r26)
    stfs f2, 0xb8(r1)
    psq_st f1, 0x0(r5), 0, 0
    lfs f2, 0x8(r27)
    psq_l f1, 0x0(r27), 0, 0
    psq_st f1, 0x0(r7), 0, 0
    fmr f1, f31
    stfs f2, 0xa0(r1)
    bl fn_80051684
    cmpwi r3, -0x1
    beq lbl_fn_80053BD0_00000900
    addi r5, r1, 0xc8
    addi r28, r1, 0x14
    psq_l f1, 0x0(r5), 0, 0
    addi r6, r1, 0x8
    lfs f2, 0xd0(r1)
    mr r3, r28
    stfs f2, 0xc(r31)
    mr r4, r28
    psq_st f1, 0x4(r31), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    lfs f2, 0xd0(r1)
    stfs f2, 0x18(r31)
    psq_st f1, 0x10(r31), 0, 0
    lfs f3, 0xd0(r1)
    lfs f0, 0xdc(r1)
    lfs f5, 0xcc(r1)
    fsubs f2, f3, f0
    lfs f4, 0xd8(r1)
    lfs f3, 0xc8(r1)
    lfs f0, 0xd4(r1)
    fsubs f4, f5, f4
    stfs f2, 0x10(r1)
    fsubs f0, f3, f0
    stfs f4, 0xc(r1)
    stfs f0, 0x8(r1)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x1c(r1)
    bl fn_805F98D0
    psq_l f1, 0x0(r28), 0, 0
    li r3, 0x1
    lfs f2, 0x1c(r1)
    stfs f2, 0x24(r31)
    psq_st f1, 0x1c(r31), 0, 0
    b lbl_fn_80053BD0_000009FC
lbl_fn_80053BD0_00000900:
    mr r3, r29
    mr r4, r28
    bl fn_805F9990
    lfs f0, lbl_80880940
    fcmpo cr0, f1, f0
    ble lbl_fn_80053BD0_00000984
    lfs f0, 0x18(r27)
    addi r28, r1, 0x78
    stfs f0, 0x84(r1)
    mr r3, r31
    mr r4, r26
    mr r5, r28
    psq_l f1, 0x0(r27), 0, 0
    lfs f2, 0x8(r27)
    stfs f2, 0x80(r1)
    psq_st f1, 0x0(r28), 0, 0
    bl fn_8005361C
    cmpwi r3, 0x0
    beq lbl_fn_80053BD0_00000954
    li r3, 0x1
    b lbl_fn_80053BD0_000009FC
lbl_fn_80053BD0_00000954:
    psq_l f1, 0xc(r27), 0, 0
    mr r3, r31
    lfs f2, 0x14(r27)
    mr r4, r26
    stfs f2, 0x80(r1)
    mr r5, r28
    psq_st f1, 0x0(r28), 0, 0
    bl fn_8005361C
    cmpwi r3, 0x0
    beq lbl_fn_80053BD0_000009F0
    li r3, 0x1
    b lbl_fn_80053BD0_000009FC
lbl_fn_80053BD0_00000984:
    lfs f0, 0x18(r27)
    addi r28, r1, 0x78
    stfs f0, 0x84(r1)
    mr r3, r31
    mr r4, r26
    mr r5, r28
    psq_l f1, 0xc(r27), 0, 0
    lfs f2, 0x14(r27)
    stfs f2, 0x80(r1)
    psq_st f1, 0x0(r28), 0, 0
    bl fn_8005361C
    cmpwi r3, 0x0
    beq lbl_fn_80053BD0_000009C0
    li r3, 0x1
    b lbl_fn_80053BD0_000009FC
lbl_fn_80053BD0_000009C0:
    psq_l f1, 0x0(r27), 0, 0
    mr r3, r31
    lfs f2, 0x8(r27)
    mr r4, r26
    stfs f2, 0x80(r1)
    mr r5, r28
    psq_st f1, 0x0(r28), 0, 0
    bl fn_8005361C
    cmpwi r3, 0x0
    beq lbl_fn_80053BD0_000009F0
    li r3, 0x1
    b lbl_fn_80053BD0_000009FC
lbl_fn_80053BD0_000009F0:
    li r3, 0x0
    b lbl_fn_80053BD0_000009FC
lbl_fn_80053BD0_000009F8:
    li r3, 0x1
lbl_fn_80053BD0_000009FC:
    addi r11, r1, 0x110
    psq_l f31, 0x118(r1), 0, 0
    lfd f31, 0x110(r1)
    bl _restgpr_26
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_80054038(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    addi r11, r1, 0x120
    stfd f31, 0x120(r1)
    psq_st f31, 0x128(r1), 0, 0
    bl _savegpr_25
    cmpwi r3, 0x0
    mr r29, r3
    mr r25, r4
    mr r30, r5
    beq lbl_fn_80054038_00000A54
    li r0, 0x0
    stw r0, 0x0(r3)
lbl_fn_80054038_00000A54:
    lfs f3, 0x8(r4)
    addi r31, r5, 0x24
    lfs f0, 0x38(r5)
    mr r3, r31
    lfs f5, 0x4(r4)
    addi r26, r4, 0xc
    fsubs f6, f3, f0
    lfs f4, 0x34(r5)
    lfs f3, 0x0(r4)
    addi r4, r1, 0x54
    lfs f0, 0x30(r5)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x58(r1)
    stfs f0, 0x54(r1)
    stfs f6, 0x5c(r1)
    bl fn_805F9990
    lfs f6, 0x8(r26)
    fmr f31, f1
    lfs f0, 0x38(r30)
    mr r3, r31
    lfs f5, 0x4(r26)
    addi r4, r1, 0x48
    lfs f4, 0x34(r30)
    fsubs f6, f6, f0
    lfs f3, 0x0(r26)
    lfs f0, 0x30(r30)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x4c(r1)
    stfs f0, 0x48(r1)
    stfs f6, 0x50(r1)
    bl fn_805F9990
    fmuls f3, f31, f1
    lfs f0, lbl_80880940
    fcmpo cr0, f3, f0
    ble lbl_fn_80054038_00000AF0
    li r3, 0x0
    b lbl_fn_80054038_00000F10
lbl_fn_80054038_00000AF0:
    lfs f3, 0x8(r26)
    addi r28, r1, 0xe0
    lfs f0, 0x8(r25)
    addi r27, r1, 0xec
    lfs f5, 0x4(r26)
    mr r3, r28
    fsubs f2, f3, f0
    lfs f4, 0x4(r25)
    lfs f3, 0x0(r26)
    mr r4, r28
    lfs f0, 0x0(r25)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0xf0(r1)
    stfs f0, 0xec(r1)
    psq_l f1, 0x0(r27), 0, 0
    stfs f2, 0xf4(r1)
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0xe8(r1)
    bl fn_805F98D0
    lfs f3, 0x38(r30)
    mr r3, r28
    lfs f0, 0x8(r25)
    addi r4, r1, 0xd4
    lfs f5, 0x34(r30)
    fsubs f6, f3, f0
    lfs f4, 0x4(r25)
    lfs f3, 0x30(r30)
    lfs f0, 0x0(r25)
    fsubs f4, f5, f4
    lfs f31, 0x3c(r30)
    fsubs f0, f3, f0
    stfs f4, 0xd8(r1)
    stfs f0, 0xd4(r1)
    stfs f6, 0xdc(r1)
    bl fn_805F9990
    lfs f4, 0xe8(r1)
    addi r3, r1, 0xc8
    lfs f3, 0xe4(r1)
    fmuls f5, f4, f1
    lfs f0, 0xe0(r1)
    fmuls f6, f3, f1
    lfs f4, 0xdc(r1)
    fmuls f7, f0, f1
    lfs f3, 0xd8(r1)
    lfs f0, 0xd4(r1)
    fsubs f4, f4, f5
    fsubs f3, f3, f6
    stfs f7, 0x3c(r1)
    fsubs f0, f0, f7
    stfs f6, 0x40(r1)
    stfs f5, 0x44(r1)
    stfs f0, 0xc8(r1)
    stfs f3, 0xcc(r1)
    stfs f4, 0xd0(r1)
    bl fn_805F9920
    fmuls f0, f31, f31
    fcmpo cr0, f1, f0
    ble lbl_fn_80054038_00000BE4
    li r3, 0x0
    b lbl_fn_80054038_00000F10
lbl_fn_80054038_00000BE4:
    mr r3, r27
    mr r4, r31
    bl fn_805F9990
    lfs f0, lbl_80880940
    fcmpo cr0, f1, f0
    ble lbl_fn_80054038_00000C04
    li r3, 0x0
    b lbl_fn_80054038_00000F10
lbl_fn_80054038_00000C04:
    lfs f7, 0x4(r31)
    mr r4, r25
    lfs f0, 0x34(r30)
    addi r3, r1, 0x18
    lfs f5, 0x0(r31)
    fmuls f6, f0, f7
    lfs f4, 0x30(r30)
    lfs f0, 0x8(r31)
    lfs f3, 0x38(r30)
    fmadds f4, f4, f5, f6
    stfs f5, 0xb8(r1)
    stfs f7, 0xbc(r1)
    fnmadds f3, f3, f0, f4
    stfs f0, 0xc0(r1)
    stfs f3, 0xc4(r1)
    stfs f5, 0x18(r1)
    stfs f7, 0x1c(r1)
    stfs f0, 0x20(r1)
    bl fn_805F9990
    fmr f31, f1
    mr r4, r26
    addi r3, r1, 0x18
    bl fn_805F9990
    fsubs f3, f31, f1
    lfs f0, lbl_80880950
    fabs f4, f3
    frsp f4, f4
    fcmpo cr0, f4, f0
    bge lbl_fn_80054038_00000C94
    lis r0, 0x7f80
    stw r0, 0x14(r1)
    lfs f0, 0x14(r1)
    stfs f0, 0xa8(r1)
    stfs f0, 0xac(r1)
    stfs f0, 0xb0(r1)
    b lbl_fn_80054038_00000D20
lbl_fn_80054038_00000C94:
    lfs f0, lbl_80880944
    lfs f4, 0xbc(r1)
    fdivs f12, f0, f3
    lfs f9, 0x4(r25)
    lfs f3, 0x4(r26)
    lfs f6, 0xb8(r1)
    lfs f7, 0x0(r25)
    lfs f0, 0x0(r26)
    fmuls f8, f4, f9
    lfs f5, 0xc0(r1)
    fsubs f11, f3, f9
    lfs f4, 0x8(r25)
    fsubs f10, f0, f7
    lfs f3, 0x8(r26)
    fmadds f6, f6, f7, f8
    lfs f0, 0xc4(r1)
    fsubs f8, f3, f4
    stfs f10, 0x24(r1)
    fmadds f3, f5, f4, f6
    stfs f11, 0x28(r1)
    stfs f8, 0x2c(r1)
    fadds f0, f0, f3
    fmuls f0, f0, f12
    fmuls f3, f8, f0
    fmuls f5, f11, f0
    fmuls f0, f10, f0
    stfs f3, 0x38(r1)
    fadds f4, f3, f4
    fadds f3, f5, f9
    stfs f0, 0x30(r1)
    fadds f0, f0, f7
    stfs f5, 0x34(r1)
    stfs f0, 0xa8(r1)
    stfs f3, 0xac(r1)
    stfs f4, 0xb0(r1)
lbl_fn_80054038_00000D20:
    lfs f0, 0xa8(r1)
    lis r3, 0x7f80
    stfs f0, 0x8(r1)
    li r4, 0x1
    li r5, 0x1
    lwz r0, 0x8(r1)
    rlwinm r0, r0, 0, 1, 8
    subf r0, r3, r0
    cntlzw r0, r0
    srwi. r0, r0, 5
    bne lbl_fn_80054038_00000D70
    lfs f0, 0xac(r1)
    stfs f0, 0xc(r1)
    lwz r0, 0xc(r1)
    rlwinm r0, r0, 0, 1, 8
    subf r0, r3, r0
    cntlzw r0, r0
    srwi. r0, r0, 5
    bne lbl_fn_80054038_00000D70
    li r5, 0x0
lbl_fn_80054038_00000D70:
    cmpwi r5, 0x0
    bne lbl_fn_80054038_00000DA0
    lfs f0, 0xb0(r1)
    lis r0, 0x7f80
    stfs f0, 0x10(r1)
    lwz r3, 0x10(r1)
    rlwinm r3, r3, 0, 1, 8
    subf r0, r0, r3
    cntlzw r0, r0
    srwi. r0, r0, 5
    bne lbl_fn_80054038_00000DA0
    li r4, 0x0
lbl_fn_80054038_00000DA0:
    cmpwi r4, 0x0
    beq lbl_fn_80054038_00000DB0
    li r3, 0x0
    b lbl_fn_80054038_00000F10
lbl_fn_80054038_00000DB0:
    lfs f7, 0xb0(r1)
    addi r3, r1, 0x9c
    lfs f0, 0x8(r30)
    addi r4, r1, 0x90
    lfs f6, 0xac(r1)
    addi r5, r1, 0x78
    lfs f3, 0x4(r30)
    fsubs f4, f7, f0
    lfs f0, 0x0(r30)
    li r26, -0x1
    lfs f5, 0xa8(r1)
    fsubs f3, f6, f3
    stfs f4, 0xa4(r1)
    fsubs f0, f5, f0
    stfs f3, 0xa0(r1)
    stfs f0, 0x9c(r1)
    lfs f4, 0x14(r30)
    lfs f3, 0x10(r30)
    lfs f0, 0xc(r30)
    fsubs f4, f7, f4
    fsubs f3, f6, f3
    fsubs f0, f5, f0
    stfs f4, 0x98(r1)
    stfs f0, 0x90(r1)
    stfs f3, 0x94(r1)
    lfs f4, 0x20(r30)
    lfs f3, 0x1c(r30)
    lfs f0, 0x18(r30)
    fsubs f4, f7, f4
    fsubs f3, f6, f3
    fsubs f0, f5, f0
    stfs f4, 0x8c(r1)
    stfs f0, 0x84(r1)
    stfs f3, 0x88(r1)
    bl fn_805F99B0
    addi r3, r1, 0x90
    addi r4, r1, 0x84
    addi r5, r1, 0x6c
    bl fn_805F99B0
    addi r3, r1, 0x84
    addi r4, r1, 0x9c
    addi r5, r1, 0x60
    bl fn_805F99B0
    mr r3, r31
    addi r4, r1, 0x78
    bl fn_805F9990
    lfs f0, lbl_80880940
    fcmpo cr0, f1, f0
    bge lbl_fn_80054038_00000E78
    li r26, 0x0
lbl_fn_80054038_00000E78:
    mr r3, r31
    addi r4, r1, 0x6c
    bl fn_805F9990
    lfs f0, lbl_80880940
    fcmpo cr0, f1, f0
    bge lbl_fn_80054038_00000E94
    li r26, 0x1
lbl_fn_80054038_00000E94:
    mr r3, r31
    addi r4, r1, 0x60
    bl fn_805F9990
    lfs f0, lbl_80880940
    fcmpo cr0, f1, f0
    bge lbl_fn_80054038_00000EB0
    li r26, 0x2
lbl_fn_80054038_00000EB0:
    cmpwi r26, 0x0
    blt lbl_fn_80054038_00000EC0
    li r3, 0x0
    b lbl_fn_80054038_00000F10
lbl_fn_80054038_00000EC0:
    cmpwi r29, 0x0
    beq lbl_fn_80054038_00000F0C
    addi r3, r1, 0xa8
    lfs f2, 0xb0(r1)
    psq_l f1, 0x0(r3), 0, 0
    li r0, 0x1
    stw r0, 0x0(r29)
    psq_st f1, 0x4(r29), 0, 0
    stfs f2, 0xc(r29)
    psq_st f1, 0x10(r29), 0, 0
    stfs f2, 0x18(r29)
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x8(r31)
    stfs f2, 0x24(r29)
    psq_st f1, 0x1c(r29), 0, 0
    psq_l f1, 0x24(r30), 0, 0
    lfs f2, 0x2c(r30)
    stfs f2, 0x30(r29)
    psq_st f1, 0x28(r29), 0, 0
lbl_fn_80054038_00000F0C:
    li r3, 0x1
lbl_fn_80054038_00000F10:
    addi r11, r1, 0x120
    psq_l f31, 0x128(r1), 0, 0
    lfd f31, 0x120(r1)
    bl _restgpr_25
    lwz r0, 0x134(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

asm void fn_8005454C(void)
{
    nofralloc
    stwu r1, -0x250(r1)
    mflr r0
    stw r0, 0x254(r1)
    addi r11, r1, 0x240
    stfd f31, 0x240(r1)
    psq_st f31, 0x248(r1), 0, 0
    bl _savegpr_26
    cmpwi r3, 0x0
    mr r30, r3
    mr r26, r4
    mr r31, r5
    beq lbl_fn_8005454C_00000F68
    li r0, 0x0
    stw r0, 0x0(r3)
lbl_fn_8005454C_00000F68:
    psq_l f1, 0xc(r5), 0, 0
    addi r29, r1, 0x1f8
    psq_l f2, 0x14(r5), 0, 0
    mr r3, r29
    psq_l f3, 0x1c(r5), 0, 0
    mr r4, r29
    psq_l f4, 0x24(r5), 0, 0
    psq_l f5, 0x2c(r5), 0, 0
    psq_l f6, 0x34(r5), 0, 0
    psq_st f6, 0x28(r29), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    bl fn_805F8CA0
    addi r28, r1, 0x140
    psq_l f1, 0x0(r26), 0, 0
    lfs f2, 0x8(r26)
    mr r3, r29
    psq_st f1, 0x0(r28), 0, 0
    mr r4, r28
    mr r5, r28
    stfs f2, 0x148(r1)
    bl fn_805F93C0
    lfs f2, 0x148(r1)
    addi r3, r1, 0x1e0
    addi r27, r1, 0x134
    psq_l f1, 0x0(r28), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    mr r3, r29
    psq_l f1, 0xc(r26), 0, 0
    mr r4, r27
    stfs f2, 0x1e8(r1)
    mr r5, r27
    lfs f2, 0x14(r26)
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0x13c(r1)
    bl fn_805F93C0
    lfs f7, 0x4(r31)
    addi r3, r1, 0x1ec
    lfs f0, 0x0(r31)
    addi r5, r1, 0x128
    fneg f8, f7
    psq_l f1, 0x0(r27), 0, 0
    fneg f0, f0
    lfs f2, 0x13c(r1)
    lfs f7, 0x8(r31)
    addi r4, r1, 0x1c8
    stfs f8, 0x12c(r1)
    fneg f8, f7
    addi r6, r1, 0x1d4
    stfs f0, 0x128(r1)
    lfs f0, 0x1e0(r1)
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x0(r31), 0, 0
    stfs f2, 0x1f4(r1)
    frsp f2, f8
    lfs f7, 0x1c8(r1)
    stfs f2, 0x1d0(r1)
    lfs f2, 0x8(r31)
    fcmpo cr0, f7, f0
    stfs f8, 0x130(r1)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x1dc(r1)
    ble lbl_fn_8005454C_0000108C
    lfs f0, 0x1ec(r1)
    fcmpo cr0, f7, f0
    ble lbl_fn_8005454C_0000108C
    li r0, 0x0
    b lbl_fn_8005454C_00001144
lbl_fn_8005454C_0000108C:
    lfs f7, 0x1cc(r1)
    lfs f0, 0x1e4(r1)
    fcmpo cr0, f7, f0
    ble lbl_fn_8005454C_000010B0
    lfs f0, 0x1f0(r1)
    fcmpo cr0, f7, f0
    ble lbl_fn_8005454C_000010B0
    li r0, 0x0
    b lbl_fn_8005454C_00001144
lbl_fn_8005454C_000010B0:
    lfs f7, 0x1d0(r1)
    lfs f0, 0x1e8(r1)
    fcmpo cr0, f7, f0
    ble lbl_fn_8005454C_000010D4
    lfs f0, 0x1f4(r1)
    fcmpo cr0, f7, f0
    ble lbl_fn_8005454C_000010D4
    li r0, 0x0
    b lbl_fn_8005454C_00001144
lbl_fn_8005454C_000010D4:
    lfs f7, 0x1d4(r1)
    lfs f0, 0x1e0(r1)
    fcmpo cr0, f7, f0
    bge lbl_fn_8005454C_000010F8
    lfs f0, 0x1ec(r1)
    fcmpo cr0, f7, f0
    bge lbl_fn_8005454C_000010F8
    li r0, 0x0
    b lbl_fn_8005454C_00001144
lbl_fn_8005454C_000010F8:
    lfs f7, 0x1d8(r1)
    lfs f0, 0x1e4(r1)
    fcmpo cr0, f7, f0
    bge lbl_fn_8005454C_0000111C
    lfs f0, 0x1f0(r1)
    fcmpo cr0, f7, f0
    bge lbl_fn_8005454C_0000111C
    li r0, 0x0
    b lbl_fn_8005454C_00001144
lbl_fn_8005454C_0000111C:
    lfs f7, 0x1dc(r1)
    lfs f0, 0x1e8(r1)
    fcmpo cr0, f7, f0
    bge lbl_fn_8005454C_00001140
    lfs f0, 0x1f4(r1)
    fcmpo cr0, f7, f0
    bge lbl_fn_8005454C_00001140
    li r0, 0x0
    b lbl_fn_8005454C_00001144
lbl_fn_8005454C_00001140:
    li r0, 0x1
lbl_fn_8005454C_00001144:
    cmpwi r0, 0x0
    bne lbl_fn_8005454C_00001154
    li r3, 0x0
    b lbl_fn_8005454C_00001B80
lbl_fn_8005454C_00001154:
    lfs f7, 0x1f4(r1)
    addi r3, r1, 0x1a0
    lfs f0, 0x1e8(r1)
    mr r4, r3
    lfs f9, 0x1f0(r1)
    fsubs f10, f7, f0
    lfs f8, 0x1e4(r1)
    lfs f7, 0x1ec(r1)
    lfs f0, 0x1e0(r1)
    fsubs f8, f9, f8
    stfs f10, 0x1a8(r1)
    fsubs f0, f7, f0
    stfs f8, 0x1a4(r1)
    stfs f0, 0x1a0(r1)
    bl fn_805F98D0
    addi r4, r1, 0x1e0
    lfs f0, 0x1a0(r1)
    lfs f7, lbl_80880940
    addi r3, r1, 0x1b0
    psq_l f1, 0x0(r4), 0, 0
    addi r4, r1, 0x1a0
    psq_st f1, 0x0(r3), 0, 0
    fcmpo cr0, f0, f7
    lfs f2, 0x1e8(r1)
    addi r3, r1, 0x1bc
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0x1b8(r1)
    lfs f2, 0x1a8(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x1c4(r1)
    ble lbl_fn_8005454C_0000135C
    lfs f0, 0x1e0(r1)
    lfs f31, 0x1c8(r1)
    fcmpo cr0, f0, f31
    bge lbl_fn_8005454C_0000135C
    lfs f0, 0x1ec(r1)
    fcmpo cr0, f0, f31
    ble lbl_fn_8005454C_0000135C
    lfs f0, lbl_80880948
    addi r27, r1, 0x194
    stfs f0, 0xbc(r1)
    addi r4, r1, 0xbc
    stfs f7, 0xc0(r1)
    stfs f7, 0xc4(r1)
    bl fn_805F9990
    fneg f7, f1
    lfs f0, lbl_80880940
    fcmpo cr0, f7, f0
    cror eq, lt, eq
    bne lbl_fn_8005454C_00001220
    b lbl_fn_8005454C_00001290
lbl_fn_8005454C_00001220:
    lfs f11, 0x1b0(r1)
    cmpwi r27, 0x0
    fsubs f0, f11, f31
    fabs f0, f0
    frsp f0, f0
    beq lbl_fn_8005454C_00001290
    fdivs f10, f0, f7
    lfs f0, 0x1c4(r1)
    lfs f9, 0x1c0(r1)
    addi r3, r1, 0xc8
    lfs f8, 0x1bc(r1)
    lfs f7, 0x1b8(r1)
    fmuls f12, f0, f10
    lfs f0, 0x1b4(r1)
    fmuls f9, f9, f10
    fmuls f8, f8, f10
    stfs f12, 0xdc(r1)
    fadds f2, f12, f7
    fadds f7, f9, f0
    stfs f8, 0xd4(r1)
    fadds f0, f8, f11
    stfs f7, 0xcc(r1)
    stfs f0, 0xc8(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f9, 0xd8(r1)
    stfs f2, 0xd0(r1)
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0x19c(r1)
lbl_fn_8005454C_00001290:
    lfs f7, 0x198(r1)
    lfs f0, 0x1cc(r1)
    fcmpo cr0, f7, f0
    ble lbl_fn_8005454C_0000135C
    lfs f0, 0x1d8(r1)
    fcmpo cr0, f7, f0
    bge lbl_fn_8005454C_0000135C
    lfs f7, 0x19c(r1)
    lfs f0, 0x1d0(r1)
    fcmpo cr0, f7, f0
    ble lbl_fn_8005454C_0000135C
    lfs f0, 0x1dc(r1)
    fcmpo cr0, f7, f0
    bge lbl_fn_8005454C_0000135C
    cmpwi r30, 0x0
    beq lbl_fn_8005454C_00001354
    addi r4, r1, 0x194
    addi r3, r31, 0xc
    mr r5, r4
    bl fn_805F93C0
    lfs f2, lbl_80880940
    addi r27, r1, 0x188
    lfs f0, lbl_80880948
    addi r6, r1, 0x11c
    stfs f0, 0x11c(r1)
    mr r4, r27
    mr r5, r27
    addi r3, r31, 0xc
    stfs f2, 0x120(r1)
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x124(r1)
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0x190(r1)
    bl fn_805F93C0
    li r0, 0x1
    stw r0, 0x0(r30)
    addi r3, r1, 0x194
    psq_l f1, 0x0(r27), 0, 0
    lfs f2, 0x190(r1)
    stfs f2, 0x24(r30)
    psq_st f1, 0x1c(r30), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x19c(r1)
    stfs f2, 0xc(r30)
    psq_st f1, 0x4(r30), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x19c(r1)
    stfs f2, 0x18(r30)
    psq_st f1, 0x10(r30), 0, 0
lbl_fn_8005454C_00001354:
    li r3, 0x1
    b lbl_fn_8005454C_00001B80
lbl_fn_8005454C_0000135C:
    lfs f0, 0x1a0(r1)
    lfs f7, lbl_80880940
    fcmpo cr0, f0, f7
    bge lbl_fn_8005454C_000014FC
    lfs f0, 0x1e0(r1)
    lfs f31, 0x1d4(r1)
    fcmpo cr0, f0, f31
    ble lbl_fn_8005454C_000014FC
    lfs f0, 0x1ec(r1)
    fcmpo cr0, f0, f31
    bge lbl_fn_8005454C_000014FC
    lfs f0, lbl_80880944
    addi r27, r1, 0x194
    stfs f0, 0x98(r1)
    addi r3, r1, 0x1bc
    addi r4, r1, 0x98
    stfs f7, 0x9c(r1)
    stfs f7, 0xa0(r1)
    bl fn_805F9990
    fneg f7, f1
    lfs f0, lbl_80880940
    fcmpo cr0, f7, f0
    cror eq, lt, eq
    bne lbl_fn_8005454C_000013C0
    b lbl_fn_8005454C_00001430
lbl_fn_8005454C_000013C0:
    lfs f11, 0x1b0(r1)
    cmpwi r27, 0x0
    fsubs f0, f11, f31
    fabs f0, f0
    frsp f0, f0
    beq lbl_fn_8005454C_00001430
    fdivs f10, f0, f7
    lfs f0, 0x1c4(r1)
    lfs f9, 0x1c0(r1)
    addi r3, r1, 0xa4
    lfs f8, 0x1bc(r1)
    lfs f7, 0x1b8(r1)
    fmuls f12, f0, f10
    lfs f0, 0x1b4(r1)
    fmuls f9, f9, f10
    fmuls f8, f8, f10
    stfs f12, 0xb8(r1)
    fadds f2, f12, f7
    fadds f7, f9, f0
    stfs f8, 0xb0(r1)
    fadds f0, f8, f11
    stfs f7, 0xa8(r1)
    stfs f0, 0xa4(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f9, 0xb4(r1)
    stfs f2, 0xac(r1)
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0x19c(r1)
lbl_fn_8005454C_00001430:
    lfs f7, 0x198(r1)
    lfs f0, 0x1cc(r1)
    fcmpo cr0, f7, f0
    ble lbl_fn_8005454C_000014FC
    lfs f0, 0x1d8(r1)
    fcmpo cr0, f7, f0
    bge lbl_fn_8005454C_000014FC
    lfs f7, 0x19c(r1)
    lfs f0, 0x1d0(r1)
    fcmpo cr0, f7, f0
    ble lbl_fn_8005454C_000014FC
    lfs f0, 0x1dc(r1)
    fcmpo cr0, f7, f0
    bge lbl_fn_8005454C_000014FC
    cmpwi r30, 0x0
    beq lbl_fn_8005454C_000014F4
    addi r4, r1, 0x194
    addi r3, r31, 0xc
    mr r5, r4
    bl fn_805F93C0
    lfs f2, lbl_80880940
    addi r27, r1, 0x17c
    lfs f0, lbl_80880944
    addi r6, r1, 0x110
    stfs f0, 0x110(r1)
    mr r4, r27
    mr r5, r27
    addi r3, r31, 0xc
    stfs f2, 0x114(r1)
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x118(r1)
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0x184(r1)
    bl fn_805F93C0
    li r0, 0x1
    stw r0, 0x0(r30)
    addi r3, r1, 0x194
    psq_l f1, 0x0(r27), 0, 0
    lfs f2, 0x184(r1)
    stfs f2, 0x24(r30)
    psq_st f1, 0x1c(r30), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x19c(r1)
    stfs f2, 0xc(r30)
    psq_st f1, 0x4(r30), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x19c(r1)
    stfs f2, 0x18(r30)
    psq_st f1, 0x10(r30), 0, 0
lbl_fn_8005454C_000014F4:
    li r3, 0x1
    b lbl_fn_8005454C_00001B80
lbl_fn_8005454C_000014FC:
    lfs f0, 0x1a4(r1)
    lfs f7, lbl_80880940
    fcmpo cr0, f0, f7
    ble lbl_fn_8005454C_0000169C
    lfs f0, 0x1e4(r1)
    lfs f31, 0x1cc(r1)
    fcmpo cr0, f0, f31
    bge lbl_fn_8005454C_0000169C
    lfs f0, 0x1f0(r1)
    fcmpo cr0, f0, f31
    ble lbl_fn_8005454C_0000169C
    lfs f0, lbl_80880948
    addi r27, r1, 0x194
    stfs f7, 0x74(r1)
    addi r3, r1, 0x1bc
    addi r4, r1, 0x74
    stfs f0, 0x78(r1)
    stfs f7, 0x7c(r1)
    bl fn_805F9990
    fneg f7, f1
    lfs f0, lbl_80880940
    fcmpo cr0, f7, f0
    cror eq, lt, eq
    bne lbl_fn_8005454C_00001560
    b lbl_fn_8005454C_000015D0
lbl_fn_8005454C_00001560:
    lfs f11, 0x1b4(r1)
    cmpwi r27, 0x0
    fsubs f0, f11, f31
    fabs f0, f0
    frsp f0, f0
    beq lbl_fn_8005454C_000015D0
    fdivs f10, f0, f7
    lfs f0, 0x1c4(r1)
    lfs f9, 0x1c0(r1)
    addi r3, r1, 0x80
    lfs f8, 0x1bc(r1)
    lfs f7, 0x1b8(r1)
    fmuls f12, f0, f10
    lfs f0, 0x1b0(r1)
    fmuls f8, f8, f10
    fmuls f9, f9, f10
    stfs f12, 0x94(r1)
    fadds f2, f12, f7
    fadds f0, f8, f0
    stfs f8, 0x8c(r1)
    fadds f7, f9, f11
    stfs f0, 0x80(r1)
    stfs f7, 0x84(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f9, 0x90(r1)
    stfs f2, 0x88(r1)
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0x19c(r1)
lbl_fn_8005454C_000015D0:
    lfs f7, 0x194(r1)
    lfs f0, 0x1c8(r1)
    fcmpo cr0, f7, f0
    ble lbl_fn_8005454C_0000169C
    lfs f0, 0x1d4(r1)
    fcmpo cr0, f7, f0
    bge lbl_fn_8005454C_0000169C
    lfs f7, 0x19c(r1)
    lfs f0, 0x1d0(r1)
    fcmpo cr0, f7, f0
    ble lbl_fn_8005454C_0000169C
    lfs f0, 0x1dc(r1)
    fcmpo cr0, f7, f0
    bge lbl_fn_8005454C_0000169C
    cmpwi r30, 0x0
    beq lbl_fn_8005454C_00001694
    addi r4, r1, 0x194
    addi r3, r31, 0xc
    mr r5, r4
    bl fn_805F93C0
    lfs f2, lbl_80880940
    addi r27, r1, 0x170
    lfs f0, lbl_80880948
    addi r6, r1, 0x104
    stfs f2, 0x104(r1)
    mr r4, r27
    mr r5, r27
    addi r3, r31, 0xc
    stfs f0, 0x108(r1)
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x10c(r1)
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0x178(r1)
    bl fn_805F93C0
    li r0, 0x1
    stw r0, 0x0(r30)
    addi r3, r1, 0x194
    psq_l f1, 0x0(r27), 0, 0
    lfs f2, 0x178(r1)
    stfs f2, 0x24(r30)
    psq_st f1, 0x1c(r30), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x19c(r1)
    stfs f2, 0xc(r30)
    psq_st f1, 0x4(r30), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x19c(r1)
    stfs f2, 0x18(r30)
    psq_st f1, 0x10(r30), 0, 0
lbl_fn_8005454C_00001694:
    li r3, 0x1
    b lbl_fn_8005454C_00001B80
lbl_fn_8005454C_0000169C:
    lfs f0, 0x1a4(r1)
    lfs f7, lbl_80880940
    fcmpo cr0, f0, f7
    bge lbl_fn_8005454C_0000183C
    lfs f0, 0x1e4(r1)
    lfs f31, 0x1d8(r1)
    fcmpo cr0, f0, f31
    ble lbl_fn_8005454C_0000183C
    lfs f0, 0x1f0(r1)
    fcmpo cr0, f0, f31
    bge lbl_fn_8005454C_0000183C
    lfs f0, lbl_80880944
    addi r27, r1, 0x194
    stfs f7, 0x50(r1)
    addi r3, r1, 0x1bc
    addi r4, r1, 0x50
    stfs f0, 0x54(r1)
    stfs f7, 0x58(r1)
    bl fn_805F9990
    fneg f7, f1
    lfs f0, lbl_80880940
    fcmpo cr0, f7, f0
    cror eq, lt, eq
    bne lbl_fn_8005454C_00001700
    b lbl_fn_8005454C_00001770
lbl_fn_8005454C_00001700:
    lfs f11, 0x1b4(r1)
    cmpwi r27, 0x0
    fsubs f0, f11, f31
    fabs f0, f0
    frsp f0, f0
    beq lbl_fn_8005454C_00001770
    fdivs f10, f0, f7
    lfs f0, 0x1c4(r1)
    lfs f9, 0x1c0(r1)
    addi r3, r1, 0x5c
    lfs f8, 0x1bc(r1)
    lfs f7, 0x1b8(r1)
    fmuls f12, f0, f10
    lfs f0, 0x1b0(r1)
    fmuls f8, f8, f10
    fmuls f9, f9, f10
    stfs f12, 0x70(r1)
    fadds f2, f12, f7
    fadds f0, f8, f0
    stfs f8, 0x68(r1)
    fadds f7, f9, f11
    stfs f0, 0x5c(r1)
    stfs f7, 0x60(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f9, 0x6c(r1)
    stfs f2, 0x64(r1)
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0x19c(r1)
lbl_fn_8005454C_00001770:
    lfs f7, 0x194(r1)
    lfs f0, 0x1c8(r1)
    fcmpo cr0, f7, f0
    ble lbl_fn_8005454C_0000183C
    lfs f0, 0x1d4(r1)
    fcmpo cr0, f7, f0
    bge lbl_fn_8005454C_0000183C
    lfs f7, 0x19c(r1)
    lfs f0, 0x1d0(r1)
    fcmpo cr0, f7, f0
    ble lbl_fn_8005454C_0000183C
    lfs f0, 0x1dc(r1)
    fcmpo cr0, f7, f0
    bge lbl_fn_8005454C_0000183C
    cmpwi r30, 0x0
    beq lbl_fn_8005454C_00001834
    addi r4, r1, 0x194
    addi r3, r31, 0xc
    mr r5, r4
    bl fn_805F93C0
    lfs f2, lbl_80880940
    addi r27, r1, 0x164
    lfs f0, lbl_80880944
    addi r6, r1, 0xf8
    stfs f2, 0xf8(r1)
    mr r4, r27
    mr r5, r27
    addi r3, r31, 0xc
    stfs f0, 0xfc(r1)
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x100(r1)
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0x16c(r1)
    bl fn_805F93C0
    li r0, 0x1
    stw r0, 0x0(r30)
    addi r3, r1, 0x194
    psq_l f1, 0x0(r27), 0, 0
    lfs f2, 0x16c(r1)
    stfs f2, 0x24(r30)
    psq_st f1, 0x1c(r30), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x19c(r1)
    stfs f2, 0xc(r30)
    psq_st f1, 0x4(r30), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x19c(r1)
    stfs f2, 0x18(r30)
    psq_st f1, 0x10(r30), 0, 0
lbl_fn_8005454C_00001834:
    li r3, 0x1
    b lbl_fn_8005454C_00001B80
lbl_fn_8005454C_0000183C:
    lfs f0, 0x1a8(r1)
    lfs f7, lbl_80880940
    fcmpo cr0, f0, f7
    ble lbl_fn_8005454C_000019DC
    lfs f0, 0x1e8(r1)
    lfs f31, 0x1d0(r1)
    fcmpo cr0, f0, f31
    bge lbl_fn_8005454C_000019DC
    lfs f0, 0x1f4(r1)
    fcmpo cr0, f0, f31
    ble lbl_fn_8005454C_000019DC
    lfs f0, lbl_80880948
    addi r27, r1, 0x194
    stfs f7, 0x2c(r1)
    addi r3, r1, 0x1bc
    addi r4, r1, 0x2c
    stfs f7, 0x30(r1)
    stfs f0, 0x34(r1)
    bl fn_805F9990
    fneg f7, f1
    lfs f0, lbl_80880940
    fcmpo cr0, f7, f0
    cror eq, lt, eq
    bne lbl_fn_8005454C_000018A0
    b lbl_fn_8005454C_00001910
lbl_fn_8005454C_000018A0:
    lfs f11, 0x1b8(r1)
    cmpwi r27, 0x0
    fsubs f0, f11, f31
    fabs f0, f0
    frsp f0, f0
    beq lbl_fn_8005454C_00001910
    fdivs f10, f0, f7
    lfs f9, 0x1c0(r1)
    lfs f8, 0x1bc(r1)
    addi r3, r1, 0x38
    lfs f0, 0x1c4(r1)
    lfs f7, 0x1b4(r1)
    fmuls f12, f0, f10
    lfs f0, 0x1b0(r1)
    fmuls f9, f9, f10
    fmuls f8, f8, f10
    stfs f12, 0x4c(r1)
    fadds f2, f12, f11
    fadds f7, f9, f7
    stfs f8, 0x44(r1)
    fadds f0, f8, f0
    stfs f7, 0x3c(r1)
    stfs f0, 0x38(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f9, 0x48(r1)
    stfs f2, 0x40(r1)
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0x19c(r1)
lbl_fn_8005454C_00001910:
    lfs f7, 0x198(r1)
    lfs f0, 0x1cc(r1)
    fcmpo cr0, f7, f0
    ble lbl_fn_8005454C_000019DC
    lfs f0, 0x1d8(r1)
    fcmpo cr0, f7, f0
    bge lbl_fn_8005454C_000019DC
    lfs f7, 0x194(r1)
    lfs f0, 0x1c8(r1)
    fcmpo cr0, f7, f0
    ble lbl_fn_8005454C_000019DC
    lfs f0, 0x1d4(r1)
    fcmpo cr0, f7, f0
    bge lbl_fn_8005454C_000019DC
    cmpwi r30, 0x0
    beq lbl_fn_8005454C_000019D4
    addi r4, r1, 0x194
    addi r3, r31, 0xc
    mr r5, r4
    bl fn_805F93C0
    lfs f0, lbl_80880940
    addi r27, r1, 0x158
    stfs f0, 0xec(r1)
    addi r6, r1, 0xec
    lfs f2, lbl_80880948
    mr r4, r27
    stfs f0, 0xf0(r1)
    mr r5, r27
    addi r3, r31, 0xc
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0xf4(r1)
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0x160(r1)
    bl fn_805F93C0
    li r0, 0x1
    stw r0, 0x0(r30)
    addi r3, r1, 0x194
    psq_l f1, 0x0(r27), 0, 0
    lfs f2, 0x160(r1)
    stfs f2, 0x24(r30)
    psq_st f1, 0x1c(r30), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x19c(r1)
    stfs f2, 0xc(r30)
    psq_st f1, 0x4(r30), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x19c(r1)
    stfs f2, 0x18(r30)
    psq_st f1, 0x10(r30), 0, 0
lbl_fn_8005454C_000019D4:
    li r3, 0x1
    b lbl_fn_8005454C_00001B80
lbl_fn_8005454C_000019DC:
    lfs f0, 0x1a8(r1)
    lfs f7, lbl_80880940
    fcmpo cr0, f0, f7
    bge lbl_fn_8005454C_00001B7C
    lfs f0, 0x1e8(r1)
    lfs f31, 0x1dc(r1)
    fcmpo cr0, f0, f31
    ble lbl_fn_8005454C_00001B7C
    lfs f0, 0x1f4(r1)
    fcmpo cr0, f0, f31
    bge lbl_fn_8005454C_00001B7C
    lfs f0, lbl_80880944
    addi r27, r1, 0x194
    stfs f7, 0x8(r1)
    addi r3, r1, 0x1bc
    addi r4, r1, 0x8
    stfs f7, 0xc(r1)
    stfs f0, 0x10(r1)
    bl fn_805F9990
    fneg f7, f1
    lfs f0, lbl_80880940
    fcmpo cr0, f7, f0
    cror eq, lt, eq
    bne lbl_fn_8005454C_00001A40
    b lbl_fn_8005454C_00001AB0
lbl_fn_8005454C_00001A40:
    lfs f11, 0x1b8(r1)
    cmpwi r27, 0x0
    fsubs f0, f11, f31
    fabs f0, f0
    frsp f0, f0
    beq lbl_fn_8005454C_00001AB0
    fdivs f10, f0, f7
    lfs f9, 0x1c0(r1)
    lfs f8, 0x1bc(r1)
    addi r3, r1, 0x14
    lfs f0, 0x1c4(r1)
    lfs f7, 0x1b4(r1)
    fmuls f12, f0, f10
    lfs f0, 0x1b0(r1)
    fmuls f9, f9, f10
    fmuls f8, f8, f10
    stfs f12, 0x28(r1)
    fadds f2, f12, f11
    fadds f7, f9, f7
    stfs f8, 0x20(r1)
    fadds f0, f8, f0
    stfs f7, 0x18(r1)
    stfs f0, 0x14(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f9, 0x24(r1)
    stfs f2, 0x1c(r1)
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0x19c(r1)
lbl_fn_8005454C_00001AB0:
    lfs f7, 0x198(r1)
    lfs f0, 0x1cc(r1)
    fcmpo cr0, f7, f0
    ble lbl_fn_8005454C_00001B7C
    lfs f0, 0x1d8(r1)
    fcmpo cr0, f7, f0
    bge lbl_fn_8005454C_00001B7C
    lfs f7, 0x194(r1)
    lfs f0, 0x1c8(r1)
    fcmpo cr0, f7, f0
    ble lbl_fn_8005454C_00001B7C
    lfs f0, 0x1d4(r1)
    fcmpo cr0, f7, f0
    bge lbl_fn_8005454C_00001B7C
    cmpwi r30, 0x0
    beq lbl_fn_8005454C_00001B74
    addi r4, r1, 0x194
    addi r3, r31, 0xc
    mr r5, r4
    bl fn_805F93C0
    lfs f0, lbl_80880940
    addi r27, r1, 0x14c
    stfs f0, 0xe0(r1)
    addi r6, r1, 0xe0
    lfs f2, lbl_80880944
    mr r4, r27
    stfs f0, 0xe4(r1)
    mr r5, r27
    addi r3, r31, 0xc
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0xe8(r1)
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0x154(r1)
    bl fn_805F93C0
    li r0, 0x1
    stw r0, 0x0(r30)
    addi r3, r1, 0x194
    psq_l f1, 0x0(r27), 0, 0
    lfs f2, 0x154(r1)
    stfs f2, 0x24(r30)
    psq_st f1, 0x1c(r30), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x19c(r1)
    stfs f2, 0xc(r30)
    psq_st f1, 0x4(r30), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x19c(r1)
    stfs f2, 0x18(r30)
    psq_st f1, 0x10(r30), 0, 0
lbl_fn_8005454C_00001B74:
    li r3, 0x1
    b lbl_fn_8005454C_00001B80
lbl_fn_8005454C_00001B7C:
    li r3, 0x0
lbl_fn_8005454C_00001B80:
    addi r11, r1, 0x240
    psq_l f31, 0x248(r1), 0, 0
    lfd f31, 0x240(r1)
    bl _restgpr_26
    lwz r0, 0x254(r1)
    mtlr r0
    addi r1, r1, 0x250
    blr
}

asm void fn_800551BC(void)
{
    nofralloc
    stwu r1, -0x190(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x194(r1)
    stfd f31, 0x180(r1)
    psq_st f31, 0x188(r1), 0, 0
    stfd f30, 0x170(r1)
    psq_st f30, 0x178(r1), 0, 0
    stfd f29, 0x160(r1)
    psq_st f29, 0x168(r1), 0, 0
    stw r31, 0x15c(r1)
    mr r31, r5
    stw r30, 0x158(r1)
    mr r30, r3
    stw r29, 0x154(r1)
    stw r28, 0x150(r1)
    mr r28, r4
    beq lbl_fn_800551BC_00001BF0
    li r0, 0x0
    stw r0, 0x0(r3)
lbl_fn_800551BC_00001BF0:
    addi r3, r1, 0x140
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    addi r3, r1, 0xc8
    lfs f2, 0x8(r4)
    lfs f0, 0x8(r5)
    lfs f5, 0x4(r5)
    fsubs f6, f0, f2
    lfs f4, 0x144(r1)
    lfs f3, 0x0(r5)
    lfs f0, 0x140(r1)
    fsubs f4, f5, f4
    lfs f31, 0xc(r5)
    lfs f30, 0x18(r4)
    fsubs f0, f3, f0
    stfs f2, 0x148(r1)
    fadds f29, f31, f30
    stfs f0, 0xc8(r1)
    stfs f4, 0xcc(r1)
    stfs f6, 0xd0(r1)
    bl fn_805F9920
    fmuls f0, f29, f29
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_800551BC_00001E00
    cmpwi r30, 0x0
    beq lbl_fn_800551BC_00001DF8
    lfs f3, 0x140(r1)
    li r3, 0x1
    lfs f0, 0x0(r31)
    li r0, 0x0
    stw r3, 0x0(r30)
    fcmpu cr0, f3, f0
    bne lbl_fn_800551BC_00001C9C
    lfs f3, 0x144(r1)
    lfs f0, 0x4(r31)
    fcmpu cr0, f3, f0
    bne lbl_fn_800551BC_00001C9C
    lfs f3, 0x148(r1)
    lfs f0, 0x8(r31)
    fcmpu cr0, f3, f0
    bne lbl_fn_800551BC_00001C9C
    mr r0, r3
lbl_fn_800551BC_00001C9C:
    cmpwi r0, 0x0
    beq lbl_fn_800551BC_00001CF8
    lfs f5, 0x148(r1)
    lfs f0, 0x14(r28)
    lfs f4, 0x144(r1)
    fsubs f6, f5, f0
    lfs f3, 0x10(r28)
    lfs f5, 0x140(r1)
    fsubs f7, f4, f3
    lfs f4, 0xc(r28)
    lfs f0, 0x148(r1)
    fsubs f5, f5, f4
    lfs f3, 0x144(r1)
    lfs f4, 0x140(r1)
    fadds f0, f0, f6
    stfs f7, 0xc0(r1)
    fadds f3, f3, f7
    fadds f4, f4, f5
    stfs f5, 0xbc(r1)
    stfs f6, 0xc4(r1)
    stfs f4, 0x140(r1)
    stfs f3, 0x144(r1)
    stfs f0, 0x148(r1)
lbl_fn_800551BC_00001CF8:
    lfs f3, 0x148(r1)
    addi r29, r1, 0xb0
    lfs f0, 0x8(r31)
    addi r5, r1, 0xa4
    lfs f5, 0x144(r1)
    mr r3, r29
    fsubs f2, f3, f0
    lfs f4, 0x4(r31)
    lfs f3, 0x140(r1)
    mr r4, r29
    lfs f0, 0x0(r31)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0xa8(r1)
    stfs f0, 0xa4(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0xac(r1)
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0xb8(r1)
    bl fn_805F98D0
    lfs f2, 0xb8(r1)
    addi r3, r1, 0x98
    psq_l f1, 0x0(r29), 0, 0
    addi r4, r1, 0x80
    psq_st f1, 0x1c(r30), 0, 0
    fmuls f6, f2, f31
    lfs f5, 0x8(r31)
    lfs f0, 0x20(r30)
    lfs f3, 0x1c(r30)
    fadds f9, f5, f6
    fmuls f7, f0, f31
    lfs f4, 0x4(r31)
    fmuls f11, f0, f29
    stfs f2, 0x24(r30)
    frsp f0, f2
    fmuls f8, f3, f31
    fmuls f12, f3, f29
    lfs f3, 0x0(r31)
    fmuls f10, f0, f29
    stfs f8, 0x8c(r1)
    fadds f0, f4, f7
    fadds f8, f3, f8
    fadds f5, f5, f10
    stfs f0, 0x9c(r1)
    fadds f4, f4, f11
    fadds f3, f3, f12
    stfs f8, 0x98(r1)
    fmr f2, f9
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0xc(r30)
    fmr f2, f5
    stfs f3, 0x80(r1)
    stfs f4, 0x84(r1)
    psq_st f1, 0x4(r30), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    stfs f7, 0x90(r1)
    stfs f6, 0x94(r1)
    stfs f9, 0xa0(r1)
    stfs f12, 0x74(r1)
    stfs f11, 0x78(r1)
    stfs f10, 0x7c(r1)
    stfs f5, 0x88(r1)
    psq_st f1, 0x10(r30), 0, 0
    stfs f2, 0x18(r30)
lbl_fn_800551BC_00001DF8:
    li r3, 0x1
    b lbl_fn_800551BC_000021BC
lbl_fn_800551BC_00001E00:
    lfs f3, 0x14(r28)
    addi r3, r1, 0x134
    lfs f5, 0x148(r1)
    addi r4, r1, 0x128
    lfs f0, 0x8(r31)
    fsubs f6, f3, f5
    lfs f4, 0x10(r28)
    fsubs f7, f0, f5
    lfs f3, 0x144(r1)
    lfs f0, 0x4(r31)
    fsubs f5, f4, f3
    fsubs f8, f0, f3
    lfs f4, 0xc(r28)
    lfs f3, 0x140(r1)
    lfs f0, 0x0(r31)
    fsubs f4, f4, f3
    stfs f5, 0x138(r1)
    fsubs f0, f0, f3
    stfs f4, 0x134(r1)
    stfs f6, 0x13c(r1)
    stfs f0, 0x128(r1)
    stfs f8, 0x12c(r1)
    stfs f7, 0x130(r1)
    bl fn_805F9990
    lfs f0, lbl_80880940
    fcmpo cr0, f1, f0
    bge lbl_fn_800551BC_00001E74
    li r3, 0x0
    b lbl_fn_800551BC_000021BC
lbl_fn_800551BC_00001E74:
    lfs f3, 0x148(r1)
    addi r29, r1, 0x11c
    lfs f0, 0x14(r28)
    addi r5, r1, 0x68
    lfs f5, 0x144(r1)
    mr r3, r29
    fsubs f2, f3, f0
    lfs f4, 0x10(r28)
    lfs f3, 0x140(r1)
    mr r4, r29
    lfs f0, 0xc(r28)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x6c(r1)
    stfs f0, 0x68(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0x70(r1)
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x124(r1)
    bl fn_805F98D0
    lfs f3, 0x8(r31)
    mr r3, r29
    lfs f0, 0x14(r28)
    addi r4, r1, 0x110
    lfs f5, 0x4(r31)
    fsubs f6, f3, f0
    lfs f4, 0x10(r28)
    lfs f3, 0x0(r31)
    lfs f0, 0xc(r28)
    fsubs f4, f5, f4
    stfs f6, 0x118(r1)
    fsubs f0, f3, f0
    stfs f4, 0x114(r1)
    stfs f0, 0x110(r1)
    bl fn_805F9990
    lfs f0, lbl_80880940
    fmr f31, f1
    fcmpo cr0, f1, f0
    bge lbl_fn_800551BC_00001F90
    addi r3, r1, 0x110
    bl fn_805F9920
    fmuls f0, f29, f29
    fcmpo cr0, f1, f0
    ble lbl_fn_800551BC_00001F2C
    li r3, 0x0
    b lbl_fn_800551BC_000021BC
lbl_fn_800551BC_00001F2C:
    lfs f4, 0x124(r1)
    addi r4, r1, 0x5c
    lfs f0, 0x120(r1)
    addi r3, r1, 0x104
    lfs f3, 0x11c(r1)
    fmuls f4, f4, f31
    fmuls f5, f0, f31
    lfs f0, 0x118(r1)
    fmuls f6, f3, f31
    lfs f3, 0x114(r1)
    fsubs f2, f0, f4
    lfs f0, 0x110(r1)
    fsubs f3, f3, f5
    stfs f6, 0x50(r1)
    fsubs f0, f0, f6
    stfs f3, 0x60(r1)
    stfs f0, 0x5c(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f5, 0x54(r1)
    stfs f4, 0x58(r1)
    stfs f2, 0x64(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x10c(r1)
    bl fn_805F9920
    b lbl_fn_800551BC_00002004
lbl_fn_800551BC_00001F90:
    lfs f4, 0x124(r1)
    addi r4, r1, 0x44
    lfs f0, 0x120(r1)
    addi r3, r1, 0x104
    lfs f3, 0x11c(r1)
    fmuls f4, f4, f1
    fmuls f5, f0, f1
    lfs f0, 0x118(r1)
    fmuls f6, f3, f1
    lfs f3, 0x114(r1)
    fsubs f2, f0, f4
    lfs f0, 0x110(r1)
    fsubs f3, f3, f5
    stfs f6, 0x38(r1)
    fsubs f0, f0, f6
    stfs f3, 0x48(r1)
    stfs f0, 0x44(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f5, 0x3c(r1)
    stfs f4, 0x40(r1)
    stfs f2, 0x4c(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x10c(r1)
    bl fn_805F9920
    fmuls f0, f29, f29
    fcmpo cr0, f1, f0
    ble lbl_fn_800551BC_00002004
    li r3, 0x0
    b lbl_fn_800551BC_000021BC
lbl_fn_800551BC_00002004:
    cmpwi r30, 0x0
    beq lbl_fn_800551BC_000021B8
    li r0, 0x1
    stw r0, 0x0(r30)
    lfs f5, 0x8(r31)
    addi r28, r1, 0xf8
    lfs f0, 0x10c(r1)
    addi r29, r1, 0xec
    lfs f4, 0x4(r31)
    addi r3, r1, 0x8
    fsubs f6, f5, f0
    lfs f0, 0x108(r1)
    lfs f3, 0x0(r31)
    fsubs f7, f4, f0
    lfs f0, 0x104(r1)
    fsubs f5, f6, f5
    fsubs f0, f3, f0
    stfs f7, 0xfc(r1)
    fsubs f4, f7, f4
    stfs f0, 0xf8(r1)
    fsubs f0, f0, f3
    stfs f6, 0x100(r1)
    stfs f0, 0x8(r1)
    stfs f4, 0xc(r1)
    stfs f5, 0x10(r1)
    bl fn_805F9920
    fmsubs f1, f29, f29, f1
    lfs f0, lbl_80880940
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_800551BC_00002094
    psq_l f1, 0x0(r28), 0, 0
    lfs f2, 0x100(r1)
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0xf4(r1)
    b lbl_fn_800551BC_000020E4
lbl_fn_800551BC_00002094:
    bl fn_8068B100
    frsp f5, f1
    lfs f4, 0x124(r1)
    lfs f3, 0x120(r1)
    lfs f0, 0x11c(r1)
    fmuls f7, f4, f5
    lfs f4, 0x100(r1)
    fmuls f6, f3, f5
    lfs f3, 0xfc(r1)
    fmuls f5, f0, f5
    lfs f0, 0xf8(r1)
    fadds f4, f4, f7
    stfs f5, 0x14(r1)
    fadds f3, f3, f6
    fadds f0, f0, f5
    stfs f6, 0x18(r1)
    stfs f7, 0x1c(r1)
    stfs f0, 0xec(r1)
    stfs f3, 0xf0(r1)
    stfs f4, 0xf4(r1)
lbl_fn_800551BC_000020E4:
    lfs f3, 0xf4(r1)
    addi r28, r1, 0xe0
    lfs f0, 0x8(r31)
    addi r5, r1, 0x2c
    lfs f5, 0xf0(r1)
    mr r3, r28
    fsubs f2, f3, f0
    lfs f4, 0x4(r31)
    lfs f3, 0xec(r1)
    mr r4, r28
    lfs f0, 0x0(r31)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x30(r1)
    stfs f0, 0x2c(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0x34(r1)
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0xe8(r1)
    bl fn_805F98D0
    fneg f5, f30
    lfs f4, 0xe8(r1)
    lfs f3, 0xe4(r1)
    addi r3, r1, 0xd4
    lfs f0, 0xe0(r1)
    addi r4, r1, 0xec
    fmuls f6, f4, f5
    lfs f4, 0xf4(r1)
    fmuls f7, f3, f5
    lfs f3, 0xf0(r1)
    fmuls f5, f0, f5
    lfs f0, 0xec(r1)
    fsubs f4, f4, f6
    stfs f5, 0x20(r1)
    fsubs f3, f3, f7
    fsubs f0, f0, f5
    stfs f7, 0x24(r1)
    fmr f2, f4
    stfs f0, 0xd4(r1)
    stfs f3, 0xd8(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x4(r30), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0xc(r30)
    lfs f2, 0xf4(r1)
    psq_st f1, 0x10(r30), 0, 0
    stfs f2, 0x18(r30)
    psq_l f1, 0x0(r28), 0, 0
    lfs f2, 0xe8(r1)
    stfs f6, 0x28(r1)
    stfs f4, 0xdc(r1)
    psq_st f1, 0x1c(r30), 0, 0
    stfs f2, 0x24(r30)
lbl_fn_800551BC_000021B8:
    li r3, 0x1
lbl_fn_800551BC_000021BC:
    lwz r0, 0x194(r1)
    psq_l f31, 0x188(r1), 0, 0
    lfd f31, 0x180(r1)
    psq_l f30, 0x178(r1), 0, 0
    lfd f30, 0x170(r1)
    psq_l f29, 0x168(r1), 0, 0
    lfd f29, 0x160(r1)
    lwz r31, 0x15c(r1)
    lwz r30, 0x158(r1)
    lwz r29, 0x154(r1)
    lwz r28, 0x150(r1)
    mtlr r0
    addi r1, r1, 0x190
    blr
}

asm void fn_80055810(void)
{
    nofralloc
    stwu r1, -0x160(r1)
    mflr r0
    stw r0, 0x164(r1)
    addi r11, r1, 0x150
    stfd f31, 0x150(r1)
    psq_st f31, 0x158(r1), 0, 0
    bl _savegpr_27
    cmpwi r3, 0x0
    mr r30, r3
    mr r27, r4
    mr r31, r5
    beq lbl_fn_80055810_0000222C
    li r0, 0x0
    stw r0, 0x0(r3)
lbl_fn_80055810_0000222C:
    lfs f3, 0x18(r4)
    mr r3, r27
    lfs f0, 0x18(r5)
    mr r4, r31
    addi r6, r1, 0x118
    li r5, 0x0
    fadds f31, f3, f0
    bl fn_80050E18
    fmuls f0, f31, f31
    fcmpo cr0, f1, f0
    ble lbl_fn_80055810_00002260
    li r3, 0x0
    b lbl_fn_80055810_00002604
lbl_fn_80055810_00002260:
    cmpwi r30, 0x0
    beq lbl_fn_80055810_00002600
    li r29, 0x1
    stw r29, 0x0(r30)
    mr r3, r27
    mr r4, r31
    addi r5, r1, 0xc0
    bl fn_80050A1C
    fmuls f0, f31, f31
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_80055810_000023A8
    stw r29, 0x0(r30)
    addi r29, r1, 0xa4
    addi r5, r1, 0x98
    lfs f3, 0x8(r27)
    mr r3, r29
    lfs f0, 0xc8(r1)
    mr r4, r29
    lfs f5, 0x4(r27)
    fsubs f2, f3, f0
    lfs f4, 0xc4(r1)
    lfs f3, 0x0(r27)
    lfs f0, 0xc0(r1)
    fsubs f4, f5, f4
    stfs f2, 0xa0(r1)
    fsubs f0, f3, f0
    stfs f4, 0x9c(r1)
    stfs f0, 0x98(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0xac(r1)
    bl fn_805F98D0
    lfs f2, 0xac(r1)
    addi r4, r1, 0x8c
    psq_l f1, 0x0(r29), 0, 0
    addi r5, r1, 0x74
    psq_st f1, 0x1c(r30), 0, 0
    frsp f0, f2
    li r3, 0x1
    stfs f2, 0x24(r30)
    fmuls f10, f0, f31
    lfs f5, 0x20(r30)
    lfs f3, 0x18(r31)
    lfs f4, 0x1c(r30)
    fmuls f7, f5, f3
    lfs f0, 0xc8(r1)
    fmuls f6, f2, f3
    stfs f10, 0x70(r1)
    fmuls f8, f4, f3
    lfs f3, 0xc4(r1)
    fadds f9, f0, f6
    lfs f0, 0xc0(r1)
    fadds f3, f3, f7
    stfs f8, 0x80(r1)
    fadds f0, f0, f8
    fmr f2, f9
    stfs f3, 0x90(r1)
    fmuls f5, f5, f31
    fmuls f4, f4, f31
    stfs f0, 0x8c(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x4(r30), 0, 0
    stfs f2, 0xc(r30)
    lfs f0, 0xc8(r1)
    lfs f3, 0xc4(r1)
    fadds f2, f0, f10
    lfs f0, 0xc0(r1)
    fadds f3, f3, f5
    stfs f7, 0x84(r1)
    fadds f0, f0, f4
    stfs f3, 0x78(r1)
    stfs f0, 0x74(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f6, 0x88(r1)
    stfs f9, 0x94(r1)
    stfs f4, 0x68(r1)
    stfs f5, 0x6c(r1)
    stfs f2, 0x7c(r1)
    psq_st f1, 0x10(r30), 0, 0
    stfs f2, 0x18(r30)
    b lbl_fn_80055810_00002604
lbl_fn_80055810_000023A8:
    lfs f3, 0x8(r27)
    addi r28, r1, 0x5c
    lfs f0, 0x14(r27)
    addi r5, r1, 0x50
    lfs f5, 0x4(r27)
    mr r3, r28
    fsubs f2, f3, f0
    lfs f4, 0x10(r27)
    lfs f3, 0x0(r27)
    mr r4, r28
    lfs f0, 0xc(r27)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x54(r1)
    stfs f0, 0x50(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0x58(r1)
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x64(r1)
    bl fn_805F98D0
    lfs f2, 0x64(r1)
    addi r3, r1, 0x10c
    psq_l f1, 0x0(r28), 0, 0
    addi r28, r1, 0x44
    psq_st f1, 0x0(r3), 0, 0
    addi r5, r1, 0x38
    mr r3, r28
    mr r4, r28
    stfs f2, 0x114(r1)
    lfs f3, 0x8(r31)
    lfs f0, 0x14(r31)
    lfs f5, 0x4(r31)
    fsubs f2, f3, f0
    lfs f4, 0x10(r31)
    lfs f3, 0x0(r31)
    lfs f0, 0xc(r31)
    fsubs f4, f5, f4
    stfs f2, 0x40(r1)
    fsubs f0, f3, f0
    stfs f4, 0x3c(r1)
    stfs f0, 0x38(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x4c(r1)
    bl fn_805F98D0
    addi r3, r1, 0xf4
    psq_l f1, 0x0(r28), 0, 0
    lfs f2, 0x4c(r1)
    addi r4, r1, 0x118
    psq_st f1, 0x0(r3), 0, 0
    addi r5, r1, 0x100
    psq_l f1, 0x0(r4), 0, 0
    addi r3, r1, 0x124
    stfs f2, 0xfc(r1)
    addi r7, r1, 0xe8
    lfs f2, 0x120(r1)
    mr r4, r27
    psq_st f1, 0x0(r5), 0, 0
    mr r6, r31
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0xd0
    stfs f2, 0x108(r1)
    lfs f2, 0x12c(r1)
    psq_st f1, 0x0(r7), 0, 0
    fmr f1, f31
    stfs f2, 0xf0(r1)
    bl fn_80051684
    cmpwi r3, -0x1
    beq lbl_fn_80055810_00002594
    stw r29, 0x0(r30)
    addi r3, r1, 0xd0
    addi r28, r1, 0x2c
    addi r5, r1, 0x20
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r28
    lfs f2, 0xd8(r1)
    mr r4, r28
    stfs f2, 0x18(r30)
    psq_st f1, 0x10(r30), 0, 0
    lfs f3, 0xd8(r1)
    lfs f0, 0xe4(r1)
    lfs f5, 0xd4(r1)
    fsubs f2, f3, f0
    lfs f4, 0xe0(r1)
    lfs f3, 0xd0(r1)
    lfs f0, 0xdc(r1)
    fsubs f4, f5, f4
    stfs f2, 0x28(r1)
    fsubs f0, f3, f0
    stfs f4, 0x24(r1)
    stfs f0, 0x20(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x34(r1)
    bl fn_805F98D0
    psq_l f1, 0x0(r28), 0, 0
    addi r4, r1, 0x14
    lfs f2, 0x34(r1)
    li r3, 0x1
    stfs f2, 0x24(r30)
    psq_st f1, 0x1c(r30), 0, 0
    lfs f4, 0x18(r31)
    lfs f0, 0x20(r30)
    fmuls f5, f2, f4
    lfs f3, 0x1c(r30)
    fmuls f6, f0, f4
    lfs f0, 0xe4(r1)
    fmuls f4, f3, f4
    lfs f3, 0xe0(r1)
    fadds f2, f0, f5
    lfs f0, 0xdc(r1)
    fadds f3, f3, f6
    stfs f4, 0x8(r1)
    fadds f0, f0, f4
    stfs f3, 0x18(r1)
    stfs f0, 0x14(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f6, 0xc(r1)
    stfs f5, 0x10(r1)
    stfs f2, 0x1c(r1)
    psq_st f1, 0x4(r30), 0, 0
    stfs f2, 0xc(r30)
    b lbl_fn_80055810_00002604
lbl_fn_80055810_00002594:
    lfs f0, 0x18(r31)
    addi r28, r1, 0xb0
    stfs f0, 0xbc(r1)
    mr r3, r30
    mr r4, r27
    mr r5, r28
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x8(r31)
    stfs f2, 0xb8(r1)
    psq_st f1, 0x0(r28), 0, 0
    bl fn_800551BC
    cmpwi r3, 0x0
    beq lbl_fn_80055810_000025D0
    li r3, 0x1
    b lbl_fn_80055810_00002604
lbl_fn_80055810_000025D0:
    psq_l f1, 0xc(r31), 0, 0
    mr r3, r30
    lfs f2, 0x14(r31)
    mr r4, r27
    stfs f2, 0xb8(r1)
    mr r5, r28
    psq_st f1, 0x0(r28), 0, 0
    bl fn_800551BC
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    b lbl_fn_80055810_00002604
lbl_fn_80055810_00002600:
    li r3, 0x1
lbl_fn_80055810_00002604:
    addi r11, r1, 0x150
    psq_l f31, 0x158(r1), 0, 0
    lfd f31, 0x150(r1)
    bl _restgpr_27
    lwz r0, 0x164(r1)
    mtlr r0
    addi r1, r1, 0x160
    blr
}

asm void fn_80055C40(void)
{
    nofralloc
    stwu r1, -0x3c0(r1)
    mflr r0
    stw r0, 0x3c4(r1)
    addi r11, r1, 0x3a0
    stfd f31, 0x3b0(r1)
    psq_st f31, 0x3b8(r1), 0, 0
    stfd f30, 0x3a0(r1)
    psq_st f30, 0x3a8(r1), 0, 0
    bl _savegpr_14
    lwz r22, 0x3cc(r1)
    fmr f31, f1
    lfs f3, 0x8(r4)
    mr r15, r3
    lfs f0, 0x8(r22)
    mr r16, r4
    lwz r14, 0x3c8(r1)
    fsubs f6, f3, f0
    lfs f5, 0x4(r4)
    lfs f4, 0x4(r22)
    mr r17, r5
    lfs f3, 0x0(r4)
    mr r18, r7
    lfs f0, 0x0(r22)
    fsubs f4, f5, f4
    mr r19, r8
    mr r20, r9
    fsubs f0, f3, f0
    stfs f4, 0xe8(r1)
    mr r21, r10
    stfs f0, 0xe4(r1)
    mr r3, r14
    addi r4, r1, 0xe4
    stfs f6, 0xec(r1)
    bl fn_805F9990
    fmuls f3, f1, f1
    fmuls f0, f31, f31
    fmr f2, f1
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_80055C40_000026F4
    fmr f1, f31
    mr r3, r15
    mr r4, r16
    mr r5, r19
    mr r6, r20
    mr r7, r21
    mr r8, r14
    bl fn_80052760
    cmpwi r3, 0x0
    beq lbl_fn_80055C40_000026F4
    li r3, 0x1
    b lbl_fn_80055C40_000032D8
lbl_fn_80055C40_000026F4:
    lfs f3, 0x8(r16)
    mr r3, r14
    lfs f0, 0x8(r22)
    addi r4, r1, 0xd8
    lfs f5, 0x4(r16)
    fsubs f6, f3, f0
    lfs f4, 0x4(r22)
    lfs f3, 0x0(r16)
    lfs f0, 0x0(r22)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0xdc(r1)
    stfs f0, 0xd8(r1)
    stfs f6, 0xe0(r1)
    bl fn_805F9990
    lfs f6, 0x8(r17)
    fmr f30, f1
    lfs f0, 0x8(r22)
    mr r3, r14
    lfs f5, 0x4(r17)
    addi r4, r1, 0xcc
    lfs f4, 0x4(r22)
    fsubs f6, f6, f0
    lfs f3, 0x0(r17)
    lfs f0, 0x0(r22)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0xd0(r1)
    stfs f0, 0xcc(r1)
    stfs f6, 0xd4(r1)
    bl fn_805F9990
    fmuls f3, f30, f1
    lfs f0, lbl_80880940
    fcmpo cr0, f3, f0
    ble lbl_fn_80055C40_000027B4
    fcmpo cr0, f30, f31
    ble lbl_fn_80055C40_00002798
    fcmpo cr0, f1, f31
    ble lbl_fn_80055C40_00002798
    li r3, 0x0
    b lbl_fn_80055C40_000032D8
lbl_fn_80055C40_00002798:
    fneg f0, f31
    fcmpo cr0, f30, f0
    bge lbl_fn_80055C40_000027B4
    fcmpo cr0, f1, f0
    bge lbl_fn_80055C40_000027B4
    li r3, 0x0
    b lbl_fn_80055C40_000032D8
lbl_fn_80055C40_000027B4:
    fcmpu cr0, f30, f1
    beq lbl_fn_80055C40_00002BFC
    lfs f7, 0x4(r14)
    mr r4, r16
    lfs f0, 0x4(r22)
    addi r3, r1, 0x30
    lfs f5, 0x0(r14)
    fmuls f6, f0, f7
    lfs f4, 0x0(r22)
    lfs f0, 0x8(r14)
    lfs f3, 0x8(r22)
    fmadds f4, f4, f5, f6
    stfs f5, 0x1d8(r1)
    stfs f7, 0x1dc(r1)
    fnmadds f3, f3, f0, f4
    stfs f0, 0x1e0(r1)
    stfs f3, 0x1e4(r1)
    stfs f5, 0x30(r1)
    stfs f7, 0x34(r1)
    stfs f0, 0x38(r1)
    bl fn_805F9990
    fmr f30, f1
    mr r4, r17
    addi r3, r1, 0x30
    bl fn_805F9990
    fsubs f3, f30, f1
    lfs f0, lbl_80880950
    fabs f4, f3
    frsp f4, f4
    fcmpo cr0, f4, f0
    bge lbl_fn_80055C40_0000284C
    lis r0, 0x7f80
    stw r0, 0x14(r1)
    lfs f0, 0x14(r1)
    stfs f0, 0x1c8(r1)
    stfs f0, 0x1cc(r1)
    stfs f0, 0x1d0(r1)
    b lbl_fn_80055C40_000028D8
lbl_fn_80055C40_0000284C:
    lfs f0, lbl_80880944
    lfs f4, 0x1dc(r1)
    fdivs f12, f0, f3
    lfs f9, 0x4(r16)
    lfs f3, 0x4(r17)
    lfs f6, 0x1d8(r1)
    lfs f7, 0x0(r16)
    lfs f0, 0x0(r17)
    fmuls f8, f4, f9
    lfs f5, 0x1e0(r1)
    fsubs f11, f3, f9
    lfs f4, 0x8(r16)
    fsubs f10, f0, f7
    lfs f3, 0x8(r17)
    fmadds f6, f6, f7, f8
    lfs f0, 0x1e4(r1)
    fsubs f8, f3, f4
    stfs f10, 0x3c(r1)
    fmadds f3, f5, f4, f6
    stfs f11, 0x40(r1)
    stfs f8, 0x44(r1)
    fadds f0, f0, f3
    fmuls f0, f0, f12
    fmuls f3, f8, f0
    fmuls f5, f11, f0
    fmuls f0, f10, f0
    stfs f3, 0x50(r1)
    fadds f4, f3, f4
    fadds f3, f5, f9
    stfs f0, 0x48(r1)
    fadds f0, f0, f7
    stfs f5, 0x4c(r1)
    stfs f0, 0x1c8(r1)
    stfs f3, 0x1cc(r1)
    stfs f4, 0x1d0(r1)
lbl_fn_80055C40_000028D8:
    lfs f0, 0x1c8(r1)
    lis r3, 0x7f80
    stfs f0, 0x8(r1)
    li r4, 0x1
    li r5, 0x1
    lwz r0, 0x8(r1)
    rlwinm r0, r0, 0, 1, 8
    subf r0, r3, r0
    cntlzw r0, r0
    srwi. r0, r0, 5
    bne lbl_fn_80055C40_00002928
    lfs f0, 0x1cc(r1)
    stfs f0, 0xc(r1)
    lwz r0, 0xc(r1)
    rlwinm r0, r0, 0, 1, 8
    subf r0, r3, r0
    cntlzw r0, r0
    srwi. r0, r0, 5
    bne lbl_fn_80055C40_00002928
    li r5, 0x0
lbl_fn_80055C40_00002928:
    cmpwi r5, 0x0
    bne lbl_fn_80055C40_00002958
    lfs f0, 0x1d0(r1)
    lis r0, 0x7f80
    stfs f0, 0x10(r1)
    lwz r3, 0x10(r1)
    rlwinm r3, r3, 0, 1, 8
    subf r0, r0, r3
    cntlzw r0, r0
    srwi. r0, r0, 5
    bne lbl_fn_80055C40_00002958
    li r4, 0x0
lbl_fn_80055C40_00002958:
    cmpwi r4, 0x0
    bne lbl_fn_80055C40_00002BFC
    mr r3, r14
    mr r4, r18
    bl fn_805F9990
    fdivs f5, f31, f1
    lfs f4, 0x8(r18)
    lfs f3, 0x4(r18)
    addi r3, r1, 0x1b0
    lfs f0, 0x0(r18)
    addi r4, r1, 0x1a4
    fmuls f6, f4, f5
    lfs f4, 0x1d0(r1)
    fmuls f7, f3, f5
    lfs f3, 0x1cc(r1)
    fmuls f5, f0, f5
    lfs f0, 0x1c8(r1)
    fadds f8, f4, f6
    lfs f4, 0x8(r16)
    fadds f9, f3, f7
    lfs f3, 0x4(r16)
    fadds f10, f0, f5
    lfs f0, 0x0(r16)
    fsubs f4, f8, f4
    stfs f5, 0xc0(r1)
    fsubs f3, f9, f3
    fsubs f0, f10, f0
    stfs f4, 0x1b8(r1)
    stfs f0, 0x1b0(r1)
    stfs f3, 0x1b4(r1)
    lfs f4, 0x8(r17)
    lfs f3, 0x4(r17)
    lfs f0, 0x0(r17)
    fsubs f4, f8, f4
    fsubs f3, f9, f3
    stfs f7, 0xc4(r1)
    fsubs f0, f10, f0
    stfs f6, 0xc8(r1)
    stfs f10, 0x1bc(r1)
    stfs f9, 0x1c0(r1)
    stfs f8, 0x1c4(r1)
    stfs f0, 0x1a4(r1)
    stfs f3, 0x1a8(r1)
    stfs f4, 0x1ac(r1)
    bl fn_805F9990
    lfs f0, lbl_80880940
    fcmpo cr0, f1, f0
    ble lbl_fn_80055C40_00002A20
    li r3, 0x0
    b lbl_fn_80055C40_000032D8
lbl_fn_80055C40_00002A20:
    lfs f4, 0x8(r14)
    addi r3, r1, 0x18c
    lfs f3, 0x4(r14)
    addi r4, r1, 0x180
    fmuls f5, f4, f31
    lfs f0, 0x0(r14)
    fmuls f6, f3, f31
    lfs f4, 0x1c4(r1)
    fmuls f7, f0, f31
    lfs f3, 0x1c0(r1)
    fsubs f8, f4, f5
    lfs f0, 0x1bc(r1)
    fsubs f9, f3, f6
    lfs f4, 0x8(r19)
    fsubs f10, f0, f7
    lfs f3, 0x4(r19)
    lfs f0, 0x0(r19)
    fsubs f4, f8, f4
    fsubs f3, f9, f3
    stfs f7, 0xb4(r1)
    fsubs f0, f10, f0
    addi r5, r1, 0x168
    stfs f3, 0x190(r1)
    li r22, -0x1
    stfs f0, 0x18c(r1)
    stfs f4, 0x194(r1)
    lfs f4, 0x8(r20)
    lfs f3, 0x4(r20)
    lfs f0, 0x0(r20)
    fsubs f4, f8, f4
    fsubs f3, f9, f3
    stfs f6, 0xb8(r1)
    fsubs f0, f10, f0
    stfs f3, 0x184(r1)
    stfs f0, 0x180(r1)
    stfs f4, 0x188(r1)
    lfs f4, 0x8(r21)
    lfs f3, 0x4(r21)
    lfs f0, 0x0(r21)
    fsubs f4, f8, f4
    fsubs f3, f9, f3
    stfs f5, 0xbc(r1)
    fsubs f0, f10, f0
    stfs f10, 0x198(r1)
    stfs f9, 0x19c(r1)
    stfs f8, 0x1a0(r1)
    stfs f0, 0x174(r1)
    stfs f3, 0x178(r1)
    stfs f4, 0x17c(r1)
    bl fn_805F99B0
    addi r3, r1, 0x180
    addi r4, r1, 0x174
    addi r5, r1, 0x15c
    bl fn_805F99B0
    addi r3, r1, 0x174
    addi r4, r1, 0x18c
    addi r5, r1, 0x150
    bl fn_805F99B0
    mr r3, r14
    addi r4, r1, 0x168
    bl fn_805F9990
    lfs f0, lbl_80880940
    fcmpo cr0, f1, f0
    bge lbl_fn_80055C40_00002B24
    li r22, 0x0
lbl_fn_80055C40_00002B24:
    mr r3, r14
    addi r4, r1, 0x15c
    bl fn_805F9990
    lfs f0, lbl_80880940
    fcmpo cr0, f1, f0
    bge lbl_fn_80055C40_00002B40
    li r22, 0x1
lbl_fn_80055C40_00002B40:
    mr r3, r14
    addi r4, r1, 0x150
    bl fn_805F9990
    lfs f0, lbl_80880940
    fcmpo cr0, f1, f0
    bge lbl_fn_80055C40_00002B5C
    li r22, 0x2
lbl_fn_80055C40_00002B5C:
    cmpwi r22, 0x0
    bge lbl_fn_80055C40_00002BFC
    cmpwi r15, 0x0
    beq lbl_fn_80055C40_00002BF4
    li r0, 0x1
    stw r0, 0x0(r15)
    lfs f4, 0x1c4(r1)
    addi r3, r1, 0xa8
    lfs f0, 0x8(r14)
    addi r4, r1, 0x1bc
    lfs f3, 0x4(r14)
    fmuls f5, f0, f31
    lfs f0, 0x0(r14)
    fmuls f6, f3, f31
    lfs f3, 0x1c0(r1)
    fmuls f7, f0, f31
    lfs f0, 0x1bc(r1)
    fsubs f4, f4, f5
    stfs f7, 0x9c(r1)
    fsubs f3, f3, f6
    fsubs f0, f0, f7
    stfs f6, 0xa0(r1)
    fmr f2, f4
    stfs f0, 0xa8(r1)
    stfs f3, 0xac(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x4(r15), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0xc(r15)
    lfs f2, 0x1c4(r1)
    psq_st f1, 0x10(r15), 0, 0
    stfs f2, 0x18(r15)
    psq_l f1, 0x0(r14), 0, 0
    lfs f2, 0x8(r14)
    stfs f5, 0xa4(r1)
    stfs f4, 0xb0(r1)
    psq_st f1, 0x1c(r15), 0, 0
    stfs f2, 0x24(r15)
lbl_fn_80055C40_00002BF4:
    li r3, 0x1
    b lbl_fn_80055C40_000032D8
lbl_fn_80055C40_00002BFC:
    psq_l f1, 0x0(r19), 0, 0
    lis r6, lbl_80731048@ha
    lfs f2, 0x8(r19)
    addi r3, r1, 0x2c0
    stfs f2, 0x2c8(r1)
    addi r9, r1, 0x2cc
    lwzu r8, lbl_80731048@l(r6)
    addi r10, r1, 0x2d8
    psq_st f1, 0x0(r3), 0, 0
    addi r11, r1, 0x2e4
    lwz r7, 0x4(r6)
    addi r3, r1, 0x2f0
    psq_l f1, 0x0(r20), 0, 0
    addi r4, r1, 0x2fc
    lfs f2, 0x8(r20)
    addi r5, r1, 0x260
    stfs f2, 0x2d4(r1)
    addi r29, r1, 0x108
    lwz r0, 0x8(r6)
    addi r6, r1, 0x26c
    psq_st f1, 0x0(r9), 0, 0
    addi r28, r1, 0x230
    lfs f4, lbl_80880948
    addi r27, r1, 0x218
    psq_st f1, 0x0(r10), 0, 0
    addi r26, r1, 0x114
    addi r14, r1, 0x23c
    addi r25, r1, 0x90
    stfs f2, 0x2e0(r1)
    addi r24, r1, 0x224
    li r23, 0x0
    li r22, 0x0
    psq_l f1, 0x0(r21), 0, 0
    li r31, 0x0
    lfs f2, 0x8(r21)
    li r30, 0x0
    stfs f2, 0x2ec(r1)
    psq_st f1, 0x0(r11), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x2f8(r1)
    psq_l f1, 0x0(r19), 0, 0
    lfs f2, 0x8(r19)
    stfs f2, 0x304(r1)
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x0(r16), 0, 0
    lfs f2, 0x8(r16)
    stfs f2, 0x268(r1)
    psq_st f1, 0x0(r5), 0, 0
    psq_l f1, 0x0(r17), 0, 0
    lfs f2, 0x8(r17)
    stfs f2, 0x274(r1)
    psq_st f1, 0x0(r6), 0, 0
    lfs f3, 0x4(r18)
    lfs f0, 0x0(r18)
    fmuls f13, f3, f4
    lfs f5, 0x8(r18)
    fmuls f30, f0, f4
    lfs f3, 0x8(r20)
    fmuls f12, f5, f4
    lfs f6, 0x8(r19)
    lfs f0, 0x8(r21)
    fsubs f7, f3, f6
    lfs f5, 0x4(r19)
    fsubs f8, f0, f3
    lfs f3, 0x4(r20)
    fsubs f10, f6, f0
    lfs f0, 0x4(r21)
    fsubs f6, f3, f5
    lfs f4, 0x0(r20)
    fsubs f9, f0, f3
    lfs f3, 0x0(r19)
    fsubs f11, f5, f0
    lfs f0, 0x0(r21)
    fsubs f5, f4, f3
    stw r8, 0x144(r1)
    fsubs f4, f0, f4
    stw r7, 0x148(r1)
    fsubs f0, f3, f0
    stw r0, 0x14c(r1)
    stfs f5, 0x138(r1)
    stfs f6, 0x13c(r1)
    stfs f7, 0x140(r1)
    stfs f4, 0x12c(r1)
    stfs f9, 0x130(r1)
    stfs f8, 0x134(r1)
    stfs f0, 0x120(r1)
    stfs f11, 0x124(r1)
    stfs f10, 0x128(r1)
    stfs f30, 0x114(r1)
    stfs f13, 0x118(r1)
    stfs f12, 0x11c(r1)
lbl_fn_80055C40_00002D68:
    cmpwi r22, 0x0
    beq lbl_fn_80055C40_00002D84
    cmpwi r22, 0x1
    beq lbl_fn_80055C40_00002D9C
    cmpwi r22, 0x2
    beq lbl_fn_80055C40_00002DB4
    b lbl_fn_80055C40_00002DC8
lbl_fn_80055C40_00002D84:
    addi r3, r1, 0x138
    lfs f2, 0x140(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x110(r1)
    b lbl_fn_80055C40_00002DC8
lbl_fn_80055C40_00002D9C:
    addi r3, r1, 0x12c
    lfs f2, 0x134(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x110(r1)
    b lbl_fn_80055C40_00002DC8
lbl_fn_80055C40_00002DB4:
    addi r3, r1, 0x120
    lfs f2, 0x128(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x110(r1)
lbl_fn_80055C40_00002DC8:
    addi r4, r1, 0x2c0
    addi r3, r1, 0x260
    add r4, r4, r31
    addi r6, r1, 0x248
    li r5, 0x0
    bl fn_80050E18
    fcmpo cr0, f1, f31
    cror eq, lt, eq
    bne lbl_fn_80055C40_00002E80
    addi r3, r1, 0x248
    lfs f2, 0x250(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r5, r1, 0x254
    psq_st f1, 0x0(r28), 0, 0
    mr r3, r25
    psq_l f1, 0x0(r5), 0, 0
    mr r4, r25
    stfs f2, 0x238(r1)
    li r23, 0x1
    lfs f2, 0x25c(r1)
    psq_st f1, 0x0(r27), 0, 0
    psq_l f1, 0x0(r26), 0, 0
    stfs f2, 0x220(r1)
    lfs f2, 0x11c(r1)
    psq_st f1, 0x0(r14), 0, 0
    psq_l f1, 0x0(r29), 0, 0
    stfs f2, 0x244(r1)
    lfs f2, 0x110(r1)
    psq_st f1, 0x0(r25), 0, 0
    stfs f2, 0x98(r1)
    bl fn_805F98D0
    psq_l f1, 0x0(r25), 0, 0
    addi r3, r1, 0x308
    psq_st f1, 0x0(r24), 0, 0
    fmr f1, f31
    lfs f2, 0x98(r1)
    addi r6, r1, 0x2c0
    stfs f2, 0x22c(r1)
    mr r5, r28
    mr r7, r27
    add r3, r3, r31
    addi r4, r1, 0x260
    add r6, r6, r31
    bl fn_80051684
    addi r4, r1, 0x144
    stwx r3, r4, r30
lbl_fn_80055C40_00002E80:
    addi r22, r22, 0x1
    addi r30, r30, 0x4
    cmpwi r22, 0x3
    addi r31, r31, 0x18
    blt lbl_fn_80055C40_00002D68
    cmpwi r23, 0x0
    bne lbl_fn_80055C40_00002EA4
    li r3, 0x0
    b lbl_fn_80055C40_000032D8
lbl_fn_80055C40_00002EA4:
    lfs f30, lbl_8088094C
    addi r22, r1, 0x200
    addi r18, r1, 0x144
    li r24, -0x1
    li r25, 0x0
    li r14, 0x0
    li r17, 0x0
lbl_fn_80055C40_00002EC0:
    lwzx r0, r18, r17
    cmpwi r0, 0x0
    bne lbl_fn_80055C40_00002F40
    addi r23, r1, 0x308
    lfs f0, 0x8(r16)
    add r23, r23, r14
    lfs f4, 0x4(r16)
    lfs f6, 0x8(r23)
    addi r3, r1, 0x84
    lfs f5, 0x4(r23)
    fsubs f6, f6, f0
    lfs f0, 0x0(r16)
    lfs f3, 0x0(r23)
    fsubs f4, f5, f4
    stfs f6, 0x8c(r1)
    fsubs f0, f3, f0
    stfs f4, 0x88(r1)
    stfs f0, 0x84(r1)
    bl fn_805F9920
    fcmpo cr0, f30, f1
    fmr f0, f1
    ble lbl_fn_80055C40_00002F40
    psq_l f1, 0x0(r23), 0, 0
    fmr f30, f0
    lfs f2, 0x8(r23)
    mr r24, r25
    psq_st f1, 0x0(r22), 0, 0
    psq_l f1, 0xc(r23), 0, 0
    stfs f2, 0x208(r1)
    lfs f2, 0x14(r23)
    psq_st f1, 0xc(r22), 0, 0
    stfs f2, 0x214(r1)
lbl_fn_80055C40_00002F40:
    addi r25, r25, 0x1
    addi r17, r17, 0x4
    cmpwi r25, 0x3
    addi r14, r14, 0x18
    blt lbl_fn_80055C40_00002EC0
    cmpwi r24, 0x0
    blt lbl_fn_80055C40_00002FFC
    cmpwi r15, 0x0
    beq lbl_fn_80055C40_00002FF4
    addi r3, r1, 0x200
    lfs f2, 0x208(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r4, r1, 0x20c
    psq_st f1, 0x10(r15), 0, 0
    li r0, 0x2
    psq_l f1, 0x0(r4), 0, 0
    addi r14, r1, 0x78
    psq_st f1, 0x4(r15), 0, 0
    addi r5, r1, 0x6c
    lfs f3, 0x14(r15)
    mr r3, r14
    stfs f2, 0x18(r15)
    mr r4, r14
    lfs f0, 0x8(r15)
    lfs f2, 0x214(r1)
    fsubs f5, f3, f0
    lfs f4, 0x18(r15)
    lfs f3, 0x10(r15)
    lfs f0, 0x4(r15)
    fsubs f4, f4, f2
    stfs f2, 0xc(r15)
    fsubs f0, f3, f0
    stfs f5, 0x70(r1)
    fmr f2, f4
    stfs f0, 0x6c(r1)
    stw r0, 0x0(r15)
    psq_l f1, 0x0(r5), 0, 0
    stfs f4, 0x74(r1)
    psq_st f1, 0x0(r14), 0, 0
    stfs f2, 0x80(r1)
    bl fn_805F98D0
    psq_l f1, 0x0(r14), 0, 0
    lfs f2, 0x80(r1)
    stfs f2, 0x24(r15)
    psq_st f1, 0x1c(r15), 0, 0
lbl_fn_80055C40_00002FF4:
    li r3, 0x1
    b lbl_fn_80055C40_000032D8
lbl_fn_80055C40_00002FFC:
    addi r14, r1, 0x278
    addi r16, r1, 0x2c0
    addi r17, r1, 0x1e8
    li r18, 0x0
lbl_fn_80055C40_0000300C:
    mr r3, r16
    mr r5, r14
    addi r4, r1, 0x260
    bl fn_80050A1C
    stfs f1, 0x0(r17)
    addi r3, r16, 0xc
    addi r4, r1, 0x260
    addi r5, r14, 0xc
    bl fn_80050A1C
    addi r18, r18, 0x1
    stfs f1, 0x4(r17)
    cmpwi r18, 0x3
    addi r14, r14, 0x18
    addi r16, r16, 0x18
    addi r17, r17, 0x8
    blt lbl_fn_80055C40_0000300C
    lfs f3, lbl_8088094C
    li r5, -0x1
    lfs f0, 0x1e8(r1)
    li r6, -0x1
    fcmpo cr0, f3, f0
    ble lbl_fn_80055C40_00003070
    fmr f3, f0
    li r5, 0x0
    li r6, 0x0
lbl_fn_80055C40_00003070:
    lfs f0, 0x1ec(r1)
    fcmpo cr0, f3, f0
    ble lbl_fn_80055C40_00003088
    fmr f3, f0
    li r5, 0x0
    li r6, 0x1
lbl_fn_80055C40_00003088:
    lfs f0, 0x1f0(r1)
    fcmpo cr0, f3, f0
    ble lbl_fn_80055C40_000030A0
    fmr f3, f0
    li r5, 0x1
    li r6, 0x0
lbl_fn_80055C40_000030A0:
    lfs f0, 0x1f4(r1)
    fcmpo cr0, f3, f0
    ble lbl_fn_80055C40_000030B8
    fmr f3, f0
    li r5, 0x1
    li r6, 0x1
lbl_fn_80055C40_000030B8:
    lfs f0, 0x1f8(r1)
    fcmpo cr0, f3, f0
    ble lbl_fn_80055C40_000030D0
    fmr f3, f0
    li r5, 0x2
    li r6, 0x0
lbl_fn_80055C40_000030D0:
    lfs f0, 0x1fc(r1)
    fcmpo cr0, f3, f0
    ble lbl_fn_80055C40_000030E8
    fmr f3, f0
    li r5, 0x2
    li r6, 0x1
lbl_fn_80055C40_000030E8:
    fcmpo cr0, f3, f31
    bge lbl_fn_80055C40_000032D4
    lis r3, 0x5555
    add r4, r5, r6
    addi r0, r3, 0x5556
    mulhw r3, r0, r4
    srwi r0, r3, 31
    add r0, r3, r0
    mulli r0, r0, 0x3
    subf. r0, r0, r4
    beq lbl_fn_80055C40_00003128
    cmpwi r0, 0x1
    beq lbl_fn_80055C40_00003140
    cmpwi r0, 0x2
    beq lbl_fn_80055C40_00003158
    b lbl_fn_80055C40_0000316C
lbl_fn_80055C40_00003128:
    lfs f2, 0x8(r19)
    addi r3, r1, 0xfc
    psq_l f1, 0x0(r19), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x104(r1)
    b lbl_fn_80055C40_0000316C
lbl_fn_80055C40_00003140:
    lfs f2, 0x8(r20)
    addi r3, r1, 0xfc
    psq_l f1, 0x0(r20), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x104(r1)
    b lbl_fn_80055C40_0000316C
lbl_fn_80055C40_00003158:
    lfs f2, 0x8(r21)
    addi r3, r1, 0xfc
    psq_l f1, 0x0(r21), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x104(r1)
lbl_fn_80055C40_0000316C:
    cmpwi r15, 0x0
    beq lbl_fn_80055C40_000032CC
    mulli r3, r5, 0x18
    li r4, 0x3
    stw r4, 0x0(r15)
    addi r0, r1, 0x278
    lfs f6, 0x104(r1)
    addi r14, r1, 0xf0
    add r0, r0, r3
    lfs f4, 0x100(r1)
    mulli r4, r6, 0xc
    lfs f0, 0xfc(r1)
    addi r3, r1, 0x18
    add r16, r4, r0
    lfsx f3, r4, r0
    lfs f7, 0x8(r16)
    lfs f5, 0x4(r16)
    fsubs f0, f3, f0
    fsubs f6, f7, f6
    fsubs f4, f5, f4
    stfs f0, 0x18(r1)
    stfs f6, 0x20(r1)
    stfs f4, 0x1c(r1)
    bl fn_805F9920
    fmsubs f1, f31, f31, f1
    lfs f0, lbl_80880940
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_80055C40_000031F4
    psq_l f1, 0x0(r16), 0, 0
    lfs f2, 0x8(r16)
    psq_st f1, 0x0(r14), 0, 0
    stfs f2, 0xf8(r1)
    b lbl_fn_80055C40_00003244
lbl_fn_80055C40_000031F4:
    bl fn_8068B100
    frsp f5, f1
    lfs f4, 0x11c(r1)
    lfs f3, 0x118(r1)
    lfs f0, 0x114(r1)
    fmuls f7, f4, f5
    lfs f4, 0x8(r16)
    fmuls f6, f3, f5
    lfs f3, 0x4(r16)
    fmuls f5, f0, f5
    lfs f0, 0x0(r16)
    fadds f4, f4, f7
    stfs f5, 0x24(r1)
    fadds f3, f3, f6
    fadds f0, f0, f5
    stfs f6, 0x28(r1)
    stfs f7, 0x2c(r1)
    stfs f0, 0xf0(r1)
    stfs f3, 0xf4(r1)
    stfs f4, 0xf8(r1)
lbl_fn_80055C40_00003244:
    lfs f3, 0xf8(r1)
    addi r14, r1, 0x60
    lfs f0, 0x104(r1)
    addi r5, r1, 0x54
    lfs f5, 0xf4(r1)
    mr r3, r14
    fsubs f2, f3, f0
    lfs f4, 0x100(r1)
    lfs f3, 0xf0(r1)
    mr r4, r14
    lfs f0, 0xfc(r1)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x58(r1)
    stfs f0, 0x54(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0x5c(r1)
    psq_st f1, 0x0(r14), 0, 0
    stfs f2, 0x68(r1)
    bl fn_805F98D0
    psq_l f1, 0x0(r14), 0, 0
    addi r3, r1, 0xfc
    lfs f2, 0x68(r1)
    addi r4, r1, 0xf0
    stfs f2, 0x24(r15)
    lfs f2, 0x104(r1)
    psq_st f1, 0x1c(r15), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x4(r15), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0xc(r15)
    lfs f2, 0xf8(r1)
    psq_st f1, 0x10(r15), 0, 0
    stfs f2, 0x18(r15)
lbl_fn_80055C40_000032CC:
    li r3, 0x1
    b lbl_fn_80055C40_000032D8
lbl_fn_80055C40_000032D4:
    li r3, 0x0
lbl_fn_80055C40_000032D8:
    addi r11, r1, 0x3a0
    psq_l f31, 0x3b8(r1), 0, 0
    lfd f31, 0x3b0(r1)
    psq_l f30, 0x3a8(r1), 0, 0
    lfd f30, 0x3a0(r1)
    bl _restgpr_14
    lwz r0, 0x3c4(r1)
    mtlr r0
    addi r1, r1, 0x3c0
    blr
}
