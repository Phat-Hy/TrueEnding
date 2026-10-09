#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void fn_80041A28(void);
extern void fn_8004ED34(void);
extern void fn_80097D7C(void);
extern void fn_800F8548(void);
extern void fn_800F8C6C(void);
extern void fn_801562A0(void);
extern void fn_8015783C(void);
extern void fn_8015802C(void);
extern void fn_8015C988(void);
extern void fn_80161570(void);
extern void fn_8016ADF4(void);
extern void fn_8016D74C(void);
extern void fn_80170A20(void);
extern void fn_80179D44(void);
extern void fn_80232B7C(void);
extern void fn_80239DAC(void);
extern void fn_8023A8B4(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_80680CF8(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);

/* External data declarations */
extern u8 lbl_80749F68[];
extern u8 lbl_80749F70[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F8A0;
extern u32 lbl_80885078;
extern u32 lbl_8088507C;
extern u32 lbl_80885090;
extern u32 lbl_80885094;
extern u32 lbl_8088509C;
extern u32 lbl_808850A0;
extern u32 lbl_808850A4;
extern u32 lbl_808850B8;
extern u32 lbl_808850BC;
extern u32 lbl_808850C0;
extern u32 lbl_808850C4;
extern u32 lbl_808850C8;
extern u32 lbl_808850E4;
extern u32 lbl_808850E8;
extern u32 lbl_808850EC;
extern u32 lbl_808850F8;
extern u32 lbl_808850FC;
extern u32 lbl_80885100;
extern u32 lbl_80885104;
extern u32 lbl_80885108;
extern u32 lbl_8088510C;
extern u32 lbl_80885110;
extern u32 lbl_80885114;
extern u32 lbl_80885118;
extern u32 lbl_8088511C;
extern u32 lbl_80885120;
extern u32 lbl_80885124;
extern u32 lbl_80885128;

/* Function declarations */
void fn_80331094(void);
void fn_8033135C(void);
void fn_803317F4(void);
void fn_80331898(void);
void fn_80331DAC(void);
void fn_803323A0(void);
void fn_8033250C(void);
void fn_80332628(void);
void fn_803326C0(void);

asm void fn_80331094(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_27
    lwz r0, 0x55c(r3)
    mr r31, r3
    cmpwi r0, 0x6
    beq lbl_fn_80331094_00000030
    cmpwi r0, 0x7
    beq lbl_fn_80331094_000002B0
    b lbl_fn_80331094_000000BC
lbl_fn_80331094_00000030:
    lwz r0, 0x560(r3)
    cmpwi r0, 0x2
    beq lbl_fn_80331094_000002B0
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x6
    beq lbl_fn_80331094_00000058
    cmpwi r0, 0x7
    beq lbl_fn_80331094_00000058
    li r0, 0x0
    stw r0, 0x15a0(r3)
lbl_fn_80331094_00000058:
    li r30, 0x0
    stw r30, 0x14b8(r3)
    stw r30, 0x14bc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r4, 0x58c(r31)
    li r0, 0x1
    stw r3, 0x590(r31)
    cmpwi r4, 0x6
    stw r0, 0x594(r31)
    stw r30, 0x598(r31)
    beq lbl_fn_80331094_0000009C
    cmpwi r4, 0x7
    beq lbl_fn_80331094_0000009C
    cmpwi r4, 0xe
    beq lbl_fn_80331094_0000009C
    stw r4, 0x15a8(r31)
lbl_fn_80331094_0000009C:
    lwz r3, 0x157c(r31)
    li r0, 0x6
    stw r0, 0x58c(r31)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    stw r0, 0x14bc(r31)
    b lbl_fn_80331094_000002B0
lbl_fn_80331094_000000BC:
    bl fn_80680CF8
    lis r4, 0x5555
    addi r0, r4, 0x5556
    mulhw r4, r0, r3
    srwi r0, r4, 31
    add r0, r4, r0
    mulli r0, r0, 0x3
    subf. r0, r0, r3
    ble lbl_fn_80331094_00000234
    lwz r4, 0xd1c(r31)
    cmpwi r4, 0x0
    bne lbl_fn_80331094_000000F4
    li r28, 0x0
    b lbl_fn_80331094_000001BC
lbl_fn_80331094_000000F4:
    lfs f3, 0x530(r4)
    addi r3, r1, 0x8
    lfs f0, 0x530(r31)
    li r28, 0x0
    lfs f5, 0x52c(r4)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r31)
    lfs f3, 0x528(r4)
    lfs f0, 0x528(r31)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f6, 0x10(r1)
    bl fn_805F9940
    lfs f0, lbl_8088509C
    fcmpo cr0, f1, f0
    ble lbl_fn_80331094_000001BC
    psq_l f1, 0x528(r31), 0, 0
    addi r29, r1, 0x14
    lfs f2, 0x530(r31)
    addi r30, r1, 0x20
    stfs f2, 0x1c(r1)
    mr r3, r31
    lfs f4, lbl_80885090
    psq_st f1, 0x0(r29), 0, 0
    lwz r27, lbl_8087EE98
    lwz r4, 0xd1c(r31)
    lfs f0, 0x18(r1)
    lfs f2, 0x530(r4)
    psq_l f1, 0x528(r4), 0, 0
    fadds f3, f0, f4
    psq_st f1, 0x0(r30), 0, 0
    lfs f0, 0x24(r1)
    stfs f2, 0x28(r1)
    fadds f0, f0, f4
    stfs f3, 0x18(r1)
    stfs f0, 0x24(r1)
    bl fn_80179D44
    oris r7, r3, 0x8000
    mr r3, r27
    mr r5, r29
    mr r6, r30
    li r4, 0x0
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ED34
    cmpwi r3, 0x0
    bne lbl_fn_80331094_000001BC
    li r28, 0x1
lbl_fn_80331094_000001BC:
    cmpwi r28, 0x0
    beq lbl_fn_80331094_00000234
    li r30, 0x0
    stw r30, 0x14b8(r31)
    stw r30, 0x14bc(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r4, 0x58c(r31)
    li r0, 0x1
    stw r3, 0x590(r31)
    cmpwi r4, 0x6
    stw r0, 0x594(r31)
    stw r30, 0x598(r31)
    beq lbl_fn_80331094_00000208
    cmpwi r4, 0x7
    beq lbl_fn_80331094_00000208
    cmpwi r4, 0xe
    beq lbl_fn_80331094_00000208
    stw r4, 0x15a8(r31)
lbl_fn_80331094_00000208:
    lwz r0, 0x12a4(r31)
    li r3, 0x9
    stw r3, 0x58c(r31)
    mr r3, r31
    rlwinm r0, r0, 0, 27, 25
    lwz r4, 0x14d8(r31)
    stw r0, 0x12a4(r31)
    li r5, 0x0
    li r6, 0x0
    bl fn_8016D74C
    b lbl_fn_80331094_000002B0
lbl_fn_80331094_00000234:
    lwz r0, 0x58c(r31)
    cmpwi r0, 0x6
    beq lbl_fn_80331094_00000250
    cmpwi r0, 0x7
    beq lbl_fn_80331094_00000250
    li r0, 0x0
    stw r0, 0x15a0(r31)
lbl_fn_80331094_00000250:
    li r30, 0x0
    stw r30, 0x14b8(r31)
    stw r30, 0x14bc(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r4, 0x58c(r31)
    li r0, 0x1
    stw r3, 0x590(r31)
    cmpwi r4, 0x6
    stw r0, 0x594(r31)
    stw r30, 0x598(r31)
    beq lbl_fn_80331094_00000294
    cmpwi r4, 0x7
    beq lbl_fn_80331094_00000294
    cmpwi r4, 0xe
    beq lbl_fn_80331094_00000294
    stw r4, 0x15a8(r31)
lbl_fn_80331094_00000294:
    lwz r3, 0x157c(r31)
    li r0, 0x6
    stw r0, 0x58c(r31)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    stw r0, 0x14bc(r31)
lbl_fn_80331094_000002B0:
    addi r11, r1, 0x50
    bl _restgpr_27
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8033135C(void)
{
    nofralloc
    stwu r1, -0x180(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x184(r1)
    stfd f31, 0x170(r1)
    psq_st f31, 0x178(r1), 0, 0
    stw r31, 0x16c(r1)
    mr r31, r3
    addi r3, r3, 0xb0
    stw r30, 0x168(r1)
    bl fn_80097D7C
    lfs f0, lbl_808850F8
    addi r30, r1, 0x138
    lfs f7, lbl_80885078
    fdivs f8, f0, f1
    lfs f0, lbl_8088507C
    stfs f7, 0x8(r1)
    stfs f7, 0xc(r1)
    stfs f7, 0x164(r1)
    stfs f7, 0x15c(r1)
    stfs f8, 0x10(r1)
    stfs f7, 0x158(r1)
    stfs f7, 0x154(r1)
    stfs f7, 0x150(r1)
    stfs f7, 0x148(r1)
    stfs f7, 0x144(r1)
    stfs f7, 0x140(r1)
    stfs f7, 0x13c(r1)
    stfs f0, 0x160(r1)
    stfs f0, 0x14c(r1)
    stfs f0, 0x138(r1)
    lfs f1, 0x53c(r31)
    fcmpu cr0, f7, f1
    beq lbl_fn_8033135C_000003A0
    addi r3, r1, 0x48
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x48
    addi r5, r1, 0x18
    bl fn_805F89F0
    addi r3, r1, 0x18
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_8033135C_000003A0:
    lfs f0, lbl_80885078
    lfs f1, 0x538(r31)
    fcmpu cr0, f0, f1
    beq lbl_fn_8033135C_00000400
    addi r3, r1, 0xa8
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0xa8
    addi r5, r1, 0x78
    bl fn_805F89F0
    addi r3, r1, 0x78
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_8033135C_00000400:
    lfs f0, lbl_80885078
    lfs f1, 0x534(r31)
    fcmpu cr0, f0, f1
    beq lbl_fn_8033135C_00000460
    addi r3, r1, 0x108
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x108
    addi r5, r1, 0xd8
    bl fn_805F89F0
    addi r3, r1, 0xd8
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_8033135C_00000460:
    addi r4, r1, 0x8
    addi r3, r1, 0x138
    mr r5, r4
    bl fn_805F93C0
    lfs f7, 0x528(r31)
    lfs f0, 0x8(r1)
    lwz r0, 0x55c(r31)
    fadds f0, f7, f0
    lfs f8, 0x52c(r31)
    lfs f7, 0x530(r31)
    cmpwi r0, 0x6
    stfs f0, 0x528(r31)
    lfs f0, 0xc(r1)
    fadds f0, f8, f0
    stfs f0, 0x52c(r31)
    lfs f0, 0x10(r1)
    fadds f0, f7, f0
    stfs f0, 0x530(r31)
    bne lbl_fn_8033135C_000006D8
    lwz r0, 0x560(r31)
    cmpwi r0, 0x16
    bne lbl_fn_8033135C_00000524
    lwz r0, 0x58c(r31)
    cmpwi r0, 0x6
    beq lbl_fn_8033135C_000004D4
    cmpwi r0, 0x7
    beq lbl_fn_8033135C_000004D4
    li r0, 0x0
    stw r0, 0x15a0(r31)
lbl_fn_8033135C_000004D4:
    li r30, 0x0
    stw r30, 0x14b8(r31)
    stw r30, 0x14bc(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r4, 0x58c(r31)
    li r0, 0x1
    stw r3, 0x590(r31)
    cmpwi r4, 0x6
    stw r0, 0x594(r31)
    stw r30, 0x598(r31)
    beq lbl_fn_8033135C_00000518
    cmpwi r4, 0x7
    beq lbl_fn_8033135C_00000518
    cmpwi r4, 0xe
    beq lbl_fn_8033135C_00000518
    stw r4, 0x15a8(r31)
lbl_fn_8033135C_00000518:
    li r0, 0x6
    stw r0, 0x58c(r31)
    b lbl_fn_8033135C_00000740
lbl_fn_8033135C_00000524:
    lfs f7, 0x2e4(r31)
    lfs f0, lbl_808850EC
    fcmpo cr0, f7, f0
    cror eq, gt, eq
    bne lbl_fn_8033135C_00000574
    lfs f0, lbl_808850FC
    fcmpo cr0, f7, f0
    cror eq, lt, eq
    bne lbl_fn_8033135C_00000574
    lwz r3, lbl_8087F048
    mr r6, r31
    lwz r7, 0x14e0(r31)
    li r4, 0x0
    lwz r8, 0x590(r31)
    li r5, 0x0
    lfs f1, lbl_80885078
    li r9, 0xa
    lwz r10, 0x594(r31)
    bl fn_800F8C6C
    b lbl_fn_8033135C_00000650
lbl_fn_8033135C_00000574:
    lfs f7, 0x2e4(r31)
    lfs f0, lbl_80885100
    fcmpo cr0, f7, f0
    cror eq, gt, eq
    bne lbl_fn_8033135C_000005C4
    lfs f0, lbl_80885104
    fcmpo cr0, f7, f0
    cror eq, lt, eq
    bne lbl_fn_8033135C_000005C4
    lwz r3, lbl_8087F048
    mr r6, r31
    lwz r7, 0x14e0(r31)
    li r4, 0x0
    lwz r8, 0x590(r31)
    li r5, 0x0
    lfs f1, lbl_80885078
    li r9, 0xa
    lwz r10, 0x594(r31)
    bl fn_800F8C6C
    b lbl_fn_8033135C_00000650
lbl_fn_8033135C_000005C4:
    lfs f7, 0x2e4(r31)
    lfs f0, lbl_80885108
    fcmpo cr0, f7, f0
    cror eq, gt, eq
    bne lbl_fn_8033135C_00000650
    lfs f0, lbl_8088510C
    fcmpo cr0, f7, f0
    cror eq, lt, eq
    bne lbl_fn_8033135C_00000650
    lwz r3, lbl_8087F048
    mr r6, r31
    lwz r7, 0x14d0(r31)
    li r4, 0x0
    lwz r8, 0x590(r31)
    li r5, 0x0
    lfs f1, lbl_80885078
    li r9, 0xa
    lwz r10, 0x594(r31)
    bl fn_800F8C6C
    cmpwi r3, 0x0
    beq lbl_fn_8033135C_00000650
    lwz r3, lbl_8087F8A0
    lwz r3, 0x48(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8033135C_00000648
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 26
    beq lbl_fn_8033135C_00000648
    li r3, 0x1
    li r0, 0x1e
    stw r3, 0x1590(r31)
    stw r0, 0x1594(r31)
    b lbl_fn_8033135C_00000650
lbl_fn_8033135C_00000648:
    li r0, 0x0
    stw r0, 0x1590(r31)
lbl_fn_8033135C_00000650:
    lfs f31, 0x2e4(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_8033135C_00000740
    lwz r0, 0x58c(r31)
    cmpwi r0, 0x6
    beq lbl_fn_8033135C_00000688
    cmpwi r0, 0x7
    beq lbl_fn_8033135C_00000688
    li r0, 0x0
    stw r0, 0x15a0(r31)
lbl_fn_8033135C_00000688:
    li r30, 0x0
    stw r30, 0x14b8(r31)
    stw r30, 0x14bc(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r4, 0x58c(r31)
    li r0, 0x1
    stw r3, 0x590(r31)
    cmpwi r4, 0x6
    stw r0, 0x594(r31)
    stw r30, 0x598(r31)
    beq lbl_fn_8033135C_000006CC
    cmpwi r4, 0x7
    beq lbl_fn_8033135C_000006CC
    cmpwi r4, 0xe
    beq lbl_fn_8033135C_000006CC
    stw r4, 0x15a8(r31)
lbl_fn_8033135C_000006CC:
    li r0, 0x6
    stw r0, 0x58c(r31)
    b lbl_fn_8033135C_00000740
lbl_fn_8033135C_000006D8:
    lwz r0, 0x58c(r31)
    cmpwi r0, 0x6
    beq lbl_fn_8033135C_000006F4
    cmpwi r0, 0x7
    beq lbl_fn_8033135C_000006F4
    li r0, 0x0
    stw r0, 0x15a0(r31)
lbl_fn_8033135C_000006F4:
    li r30, 0x0
    stw r30, 0x14b8(r31)
    stw r30, 0x14bc(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r4, 0x58c(r31)
    li r0, 0x1
    stw r3, 0x590(r31)
    cmpwi r4, 0x6
    stw r0, 0x594(r31)
    stw r30, 0x598(r31)
    beq lbl_fn_8033135C_00000738
    cmpwi r4, 0x7
    beq lbl_fn_8033135C_00000738
    cmpwi r4, 0xe
    beq lbl_fn_8033135C_00000738
    stw r4, 0x15a8(r31)
lbl_fn_8033135C_00000738:
    li r0, 0x6
    stw r0, 0x58c(r31)
lbl_fn_8033135C_00000740:
    lwz r0, 0x184(r1)
    psq_l f31, 0x178(r1), 0, 0
    lfd f31, 0x170(r1)
    lwz r31, 0x16c(r1)
    lwz r30, 0x168(r1)
    mtlr r0
    addi r1, r1, 0x180
    blr
}

asm void fn_803317F4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    beq lbl_fn_803317F4_000007EC
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x6
    beq lbl_fn_803317F4_000007A0
    cmpwi r0, 0x7
    beq lbl_fn_803317F4_000007A0
    li r0, 0x0
    stw r0, 0x15a0(r3)
lbl_fn_803317F4_000007A0:
    li r31, 0x0
    stw r31, 0x14b8(r3)
    stw r31, 0x14bc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r4, 0x58c(r30)
    li r0, 0x1
    stw r3, 0x590(r30)
    cmpwi r4, 0x6
    stw r0, 0x594(r30)
    stw r31, 0x598(r30)
    beq lbl_fn_803317F4_000007E4
    cmpwi r4, 0x7
    beq lbl_fn_803317F4_000007E4
    cmpwi r4, 0xe
    beq lbl_fn_803317F4_000007E4
    stw r4, 0x15a8(r30)
lbl_fn_803317F4_000007E4:
    li r0, 0x6
    stw r0, 0x58c(r30)
lbl_fn_803317F4_000007EC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80331898(void)
{
    nofralloc
    stwu r1, -0x240(r1)
    mflr r0
    stw r0, 0x244(r1)
    addi r11, r1, 0x130
    stfd f31, 0x230(r1)
    psq_st f31, 0x238(r1), 0, 0
    stfd f30, 0x220(r1)
    psq_st f30, 0x228(r1), 0, 0
    stfd f29, 0x210(r1)
    psq_st f29, 0x218(r1), 0, 0
    stfd f28, 0x200(r1)
    psq_st f28, 0x208(r1), 0, 0
    stfd f27, 0x1f0(r1)
    psq_st f27, 0x1f8(r1), 0, 0
    stfd f26, 0x1e0(r1)
    psq_st f26, 0x1e8(r1), 0, 0
    stfd f25, 0x1d0(r1)
    psq_st f25, 0x1d8(r1), 0, 0
    stfd f24, 0x1c0(r1)
    psq_st f24, 0x1c8(r1), 0, 0
    stfd f23, 0x1b0(r1)
    psq_st f23, 0x1b8(r1), 0, 0
    stfd f22, 0x1a0(r1)
    psq_st f22, 0x1a8(r1), 0, 0
    stfd f21, 0x190(r1)
    psq_st f21, 0x198(r1), 0, 0
    stfd f20, 0x180(r1)
    psq_st f20, 0x188(r1), 0, 0
    stfd f19, 0x170(r1)
    psq_st f19, 0x178(r1), 0, 0
    stfd f18, 0x160(r1)
    psq_st f18, 0x168(r1), 0, 0
    stfd f17, 0x150(r1)
    psq_st f17, 0x158(r1), 0, 0
    stfd f16, 0x140(r1)
    psq_st f16, 0x148(r1), 0, 0
    stfd f15, 0x130(r1)
    psq_st f15, 0x138(r1), 0, 0
    bl _savegpr_27
    lwz r0, 0x55c(r3)
    mr r27, r3
    cmpwi r0, 0x6
    bne lbl_fn_80331898_00000BFC
    lfs f3, 0x2e4(r3)
    lfs f0, lbl_80885090
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_80331898_00000C78
    lwz r27, lbl_8087EFA8
    addi r31, r1, 0xcc
    lwz r0, 0x1574(r3)
    addi r11, r1, 0xdc
    addi r12, r27, 0x328
    lwz r5, 0x324(r27)
    mulli r0, r0, 0x50
    psq_l f2, 0x8(r12), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    addi r10, r27, 0x338
    psq_l f1, 0x0(r12), 0, 0
    addi r8, r27, 0x348
    add r3, r3, r0
    lfs f7, 0xd8(r1)
    psq_st f1, 0x0(r31), 0, 0
    addi r9, r1, 0xec
    lfs f0, 0x1670(r3)
    addi r6, r27, 0x358
    lfs f4, 0xd4(r1)
    addi r7, r1, 0xfc
    fsubs f16, f0, f7
    lfs f0, 0x166c(r3)
    lfs f3, 0x1668(r3)
    fsubs f15, f0, f4
    lfs f5, lbl_80885110
    lfs f9, 0xd0(r1)
    psq_l f1, 0x0(r10), 0, 0
    fmuls f13, f16, f5
    fsubs f3, f3, f9
    psq_l f2, 0x8(r10), 0, 0
    fmuls f12, f15, f5
    psq_st f1, 0x0(r11), 0, 0
    psq_l f1, 0x0(r8), 0, 0
    fmuls f11, f3, f5
    psq_st f2, 0x8(r11), 0, 0
    psq_l f2, 0x8(r8), 0, 0
    psq_st f1, 0x0(r9), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    psq_st f2, 0x8(r9), 0, 0
    psq_l f2, 0x8(r6), 0, 0
    lwz r4, 0x368(r27)
    lwz r0, 0x36c(r27)
    lfs f6, 0x370(r27)
    lfs f0, 0x1664(r3)
    lfs f8, 0xcc(r1)
    stw r5, 0xc8(r1)
    fsubs f0, f0, f8
    psq_st f1, 0x0(r7), 0, 0
    fmuls f10, f0, f5
    psq_st f2, 0x8(r7), 0, 0
    stw r4, 0x10c(r1)
    stw r0, 0x110(r1)
    stfs f6, 0x114(r1)
    stfs f0, 0x78(r1)
    stfs f3, 0x7c(r1)
    stfs f15, 0x80(r1)
    stfs f16, 0x84(r1)
    stfs f10, 0x68(r1)
    stfs f11, 0x6c(r1)
    stfs f12, 0x70(r1)
    stfs f13, 0x74(r1)
    fadds f17, f13, f7
    lfs f3, 0x1680(r3)
    lfs f7, 0xe8(r1)
    fadds f21, f10, f8
    lfs f0, 0x167c(r3)
    fadds f4, f12, f4
    fsubs f30, f3, f7
    lfs f15, 0xe4(r1)
    lfs f3, 0x1678(r3)
    fadds f27, f11, f9
    fsubs f31, f0, f15
    lfs f8, 0xe0(r1)
    fsubs f13, f3, f8
    lfs f0, 0x1674(r3)
    lfs f23, 0xdc(r1)
    fmuls f10, f31, f5
    lfs f3, 0x1690(r3)
    fmuls f11, f30, f5
    fsubs f12, f0, f23
    lfs f24, 0xf8(r1)
    fmuls f9, f13, f5
    lfs f25, 0xf4(r1)
    fsubs f18, f3, f24
    lfs f3, 0x168c(r3)
    fadds f0, f10, f15
    lfs f20, 0x1688(r3)
    fadds f15, f9, f8
    lfs f16, 0xf0(r1)
    fmuls f22, f18, f5
    lfs f28, 0x1684(r3)
    fmuls f8, f12, f5
    stfs f4, 0xc0(r1)
    fsubs f19, f3, f25
    lfs f29, 0xec(r1)
    fsubs f20, f20, f16
    stfs f21, 0xb8(r1)
    fadds f3, f8, f23
    stfs f15, 0xac(r1)
    fadds f26, f22, f24
    lfs f15, 0x169c(r3)
    fmuls f23, f19, f5
    stfs f27, 0xbc(r1)
    fsubs f21, f28, f29
    stfs f3, 0xa8(r1)
    fmuls f24, f20, f5
    addi r30, r1, 0xb8
    fadds f27, f23, f25
    stfs f17, 0xc4(r1)
    fmuls f25, f21, f5
    lfs f3, 0x104(r1)
    fadds f28, f24, f16
    stfs f0, 0xb0(r1)
    fadds f7, f11, f7
    psq_l f1, 0x0(r30), 0, 0
    fadds f29, f25, f29
    psq_l f2, 0x8(r30), 0, 0
    fsubs f17, f15, f3
    stfs f7, 0xb4(r1)
    addi r29, r1, 0xa8
    lfs f16, 0x16a0(r3)
    lfs f4, 0x108(r1)
    addi r28, r1, 0x98
    psq_st f1, 0x0(r31), 0, 0
    psq_l f1, 0x0(r29), 0, 0
    fsubs f16, f16, f4
    psq_st f2, 0x8(r31), 0, 0
    psq_l f2, 0x8(r29), 0, 0
    lfs f15, 0x1698(r3)
    lfs f0, 0x100(r1)
    stfs f29, 0x98(r1)
    fsubs f7, f15, f0
    stfs f28, 0x9c(r1)
    psq_st f1, 0x0(r11), 0, 0
    psq_l f1, 0x0(r28), 0, 0
    stfs f27, 0xa0(r1)
    stfs f26, 0xa4(r1)
    psq_st f2, 0x8(r11), 0, 0
    psq_l f2, 0x8(r28), 0, 0
    stfs f12, 0x58(r1)
    stfs f13, 0x5c(r1)
    stfs f31, 0x60(r1)
    stfs f30, 0x64(r1)
    stfs f8, 0x48(r1)
    stfs f9, 0x4c(r1)
    stfs f10, 0x50(r1)
    stfs f11, 0x54(r1)
    stfs f21, 0x38(r1)
    stfs f20, 0x3c(r1)
    stfs f19, 0x40(r1)
    stfs f18, 0x44(r1)
    stfs f25, 0x28(r1)
    stfs f24, 0x2c(r1)
    stfs f23, 0x30(r1)
    stfs f22, 0x34(r1)
    psq_st f1, 0x0(r9), 0, 0
    psq_st f2, 0x8(r9), 0, 0
    lfs f9, 0x1694(r3)
    fmuls f10, f7, f5
    lfs f8, 0xfc(r1)
    fmuls f12, f16, f5
    fmuls f11, f17, f5
    addi r3, r1, 0x88
    fsubs f9, f9, f8
    fadds f0, f10, f0
    stw r5, 0x324(r27)
    fadds f4, f12, f4
    fmuls f5, f9, f5
    stfs f0, 0x8c(r1)
    fadds f3, f11, f3
    stfs f4, 0x94(r1)
    fadds f0, f5, f8
    stfs f3, 0x90(r1)
    stfs f0, 0x88(r1)
    psq_l f2, 0x8(r3), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r7), 0, 0
    psq_l f1, 0x0(r31), 0, 0
    psq_st f1, 0x0(r12), 0, 0
    psq_l f1, 0x0(r11), 0, 0
    psq_st f2, 0x8(r7), 0, 0
    psq_l f2, 0x8(r31), 0, 0
    psq_st f2, 0x8(r12), 0, 0
    psq_l f2, 0x8(r11), 0, 0
    psq_st f1, 0x0(r10), 0, 0
    psq_l f1, 0x0(r9), 0, 0
    psq_st f2, 0x8(r10), 0, 0
    psq_l f2, 0x8(r9), 0, 0
    psq_st f1, 0x0(r8), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    psq_st f2, 0x8(r8), 0, 0
    psq_l f2, 0x8(r7), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    psq_st f2, 0x8(r6), 0, 0
    stw r4, 0x368(r27)
    stw r0, 0x36c(r27)
    stfs f9, 0x18(r1)
    stfs f7, 0x1c(r1)
    stfs f17, 0x20(r1)
    stfs f16, 0x24(r1)
    stfs f5, 0x8(r1)
    stfs f10, 0xc(r1)
    stfs f11, 0x10(r1)
    stfs f12, 0x14(r1)
    stfs f6, 0x370(r27)
    b lbl_fn_80331898_00000C78
lbl_fn_80331898_00000BFC:
    lwz r3, lbl_8087F3C0
    mr r4, r27
    li r5, 0x3e8
    li r6, 0x1
    bl fn_80239DAC
    lwz r0, 0x58c(r27)
    cmpwi r0, 0x6
    beq lbl_fn_80331898_00000C2C
    cmpwi r0, 0x7
    beq lbl_fn_80331898_00000C2C
    li r0, 0x0
    stw r0, 0x15a0(r27)
lbl_fn_80331898_00000C2C:
    li r31, 0x0
    stw r31, 0x14b8(r27)
    stw r31, 0x14bc(r27)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r4, 0x58c(r27)
    li r0, 0x1
    stw r3, 0x590(r27)
    cmpwi r4, 0x6
    stw r0, 0x594(r27)
    stw r31, 0x598(r27)
    beq lbl_fn_80331898_00000C70
    cmpwi r4, 0x7
    beq lbl_fn_80331898_00000C70
    cmpwi r4, 0xe
    beq lbl_fn_80331898_00000C70
    stw r4, 0x15a8(r27)
lbl_fn_80331898_00000C70:
    li r0, 0x6
    stw r0, 0x58c(r27)
lbl_fn_80331898_00000C78:
    addi r11, r1, 0x130
    psq_l f31, 0x238(r1), 0, 0
    lfd f31, 0x230(r1)
    psq_l f30, 0x228(r1), 0, 0
    lfd f30, 0x220(r1)
    psq_l f29, 0x218(r1), 0, 0
    lfd f29, 0x210(r1)
    psq_l f28, 0x208(r1), 0, 0
    lfd f28, 0x200(r1)
    psq_l f27, 0x1f8(r1), 0, 0
    lfd f27, 0x1f0(r1)
    psq_l f26, 0x1e8(r1), 0, 0
    lfd f26, 0x1e0(r1)
    psq_l f25, 0x1d8(r1), 0, 0
    lfd f25, 0x1d0(r1)
    psq_l f24, 0x1c8(r1), 0, 0
    lfd f24, 0x1c0(r1)
    psq_l f23, 0x1b8(r1), 0, 0
    lfd f23, 0x1b0(r1)
    psq_l f22, 0x1a8(r1), 0, 0
    lfd f22, 0x1a0(r1)
    psq_l f21, 0x198(r1), 0, 0
    lfd f21, 0x190(r1)
    psq_l f20, 0x188(r1), 0, 0
    lfd f20, 0x180(r1)
    psq_l f19, 0x178(r1), 0, 0
    lfd f19, 0x170(r1)
    psq_l f18, 0x168(r1), 0, 0
    lfd f18, 0x160(r1)
    psq_l f17, 0x158(r1), 0, 0
    lfd f17, 0x150(r1)
    psq_l f16, 0x148(r1), 0, 0
    lfd f16, 0x140(r1)
    psq_l f15, 0x138(r1), 0, 0
    lfd f15, 0x130(r1)
    bl _restgpr_27
    lwz r0, 0x244(r1)
    mtlr r0
    addi r1, r1, 0x240
    blr
}

asm void fn_80331DAC(void)
{
    nofralloc
    stwu r1, -0x170(r1)
    mflr r0
    stw r0, 0x174(r1)
    stfd f31, 0x160(r1)
    psq_st f31, 0x168(r1), 0, 0
    stfd f30, 0x150(r1)
    psq_st f30, 0x158(r1), 0, 0
    stw r31, 0x14c(r1)
    mr r31, r3
    stw r30, 0x148(r1)
    stw r29, 0x144(r1)
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_80331DAC_00001174
    lwz r0, 0x560(r3)
    cmpwi r0, 0x27
    beq lbl_fn_80331DAC_00000ECC
    lwz r4, 0xd1c(r3)
    lwz r0, 0x55c(r4)
    cmpwi r0, 0x6
    bne lbl_fn_80331DAC_00000D78
    lwz r0, 0x560(r4)
    cmpwi r0, 0x82
    beq lbl_fn_80331DAC_00000DE4
lbl_fn_80331DAC_00000D78:
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x6
    beq lbl_fn_80331DAC_00000D94
    cmpwi r0, 0x7
    beq lbl_fn_80331DAC_00000D94
    li r0, 0x0
    stw r0, 0x15a0(r3)
lbl_fn_80331DAC_00000D94:
    li r30, 0x0
    stw r30, 0x14b8(r3)
    stw r30, 0x14bc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r4, 0x58c(r31)
    li r0, 0x1
    stw r3, 0x590(r31)
    cmpwi r4, 0x6
    stw r0, 0x594(r31)
    stw r30, 0x598(r31)
    beq lbl_fn_80331DAC_00000DD8
    cmpwi r4, 0x7
    beq lbl_fn_80331DAC_00000DD8
    cmpwi r4, 0xe
    beq lbl_fn_80331DAC_00000DD8
    stw r4, 0x15a8(r31)
lbl_fn_80331DAC_00000DD8:
    li r0, 0x6
    stw r0, 0x58c(r31)
    b lbl_fn_80331DAC_000012E0
lbl_fn_80331DAC_00000DE4:
    li r30, 0x0
    stw r30, 0x14b8(r3)
    stw r30, 0x14bc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r4, 0x58c(r31)
    li r0, 0x1
    stw r3, 0x590(r31)
    cmpwi r4, 0x6
    stw r0, 0x594(r31)
    stw r30, 0x598(r31)
    beq lbl_fn_80331DAC_00000E28
    cmpwi r4, 0x7
    beq lbl_fn_80331DAC_00000E28
    cmpwi r4, 0xe
    beq lbl_fn_80331DAC_00000E28
    stw r4, 0x15a8(r31)
lbl_fn_80331DAC_00000E28:
    lfs f1, lbl_80885114
    li r4, 0x10
    lwz r0, 0x12a4(r31)
    mr r3, r31
    fmr f2, f1
    stw r4, 0x58c(r31)
    rlwinm r0, r0, 0, 27, 25
    li r4, 0x143
    stw r0, 0x12a4(r31)
    li r5, 0x1
    li r6, 0x0
    bl fn_80161570
    mr r3, r31
    li r4, 0x3e8
    bl fn_80232B7C
    lfs f0, lbl_80885078
    li r3, -0x1
    lfs f1, lbl_8088507C
    li r0, 0x1
    stfs f0, 0x90(r1)
    addi r4, r31, 0x17a4
    addi r5, r31, 0xb0
    addi r7, r1, 0x9c
    stfs f0, 0x94(r1)
    addi r8, r1, 0x90
    addi r9, r1, 0x80
    li r6, 0x0
    stfs f0, 0x98(r1)
    li r10, -0x1
    stfs f0, 0x9c(r1)
    stfs f0, 0xa0(r1)
    stfs f0, 0xa4(r1)
    stfs f1, 0x80(r1)
    stfs f1, 0x84(r1)
    stfs f1, 0x88(r1)
    stfs f1, 0x8c(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    b lbl_fn_80331DAC_000012E0
lbl_fn_80331DAC_00000ECC:
    lfs f4, 0x2e4(r3)
    lfs f3, lbl_808850FC
    lfs f0, lbl_808850BC
    fsubs f3, f4, f3
    fabs f3, f3
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80331DAC_000012E0
    lwz r6, 0xd1c(r3)
    addi r30, r1, 0xa8
    lfs f0, 0x530(r3)
    addi r5, r1, 0xc0
    lfs f3, 0x530(r6)
    mr r4, r30
    lfs f5, 0x52c(r6)
    fsubs f2, f3, f0
    lfs f4, 0x52c(r3)
    lfs f0, 0x528(r3)
    mr r3, r30
    lfs f3, 0x528(r6)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0xc4(r1)
    stfs f0, 0xc0(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0xc8(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0xb0(r1)
    bl fn_805F98D0
    lfs f2, 0xb0(r1)
    addi r29, r1, 0xb4
    psq_l f1, 0x0(r30), 0, 0
    fabs f3, f2
    lfs f0, lbl_808850BC
    psq_st f1, 0x0(r29), 0, 0
    frsp f3, f3
    stfs f2, 0xbc(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_80331DAC_00000F8C
    lfs f3, 0xb4(r1)
    lfs f0, lbl_80885078
    fcmpo cr0, f3, f0
    ble lbl_fn_80331DAC_00000F80
    lfs f0, lbl_808850C0
    b lbl_fn_80331DAC_00000F84
lbl_fn_80331DAC_00000F80:
    lfs f0, lbl_808850C4
lbl_fn_80331DAC_00000F84:
    stfs f0, 0x78(r1)
    b lbl_fn_80331DAC_00000FA0
lbl_fn_80331DAC_00000F8C:
    frsp f2, f2
    lfs f1, 0xb4(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x78(r1)
lbl_fn_80331DAC_00000FA0:
    lfs f0, 0x78(r1)
    addi r3, r1, 0xd0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80885078
    addi r4, r1, 0x68
    lfs f30, 0xd8(r1)
    mr r5, r4
    lfs f31, 0xd4(r1)
    addi r3, r1, 0x100
    lfs f13, 0xd0(r1)
    lfs f12, 0xe8(r1)
    lfs f11, 0xe4(r1)
    lfs f10, 0xe0(r1)
    lfs f9, 0xf8(r1)
    lfs f8, 0xf4(r1)
    lfs f7, 0xf0(r1)
    lfs f6, 0xfc(r1)
    lfs f5, 0xec(r1)
    lfs f4, 0xdc(r1)
    lfs f0, lbl_8088507C
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0xbc(r1)
    stfs f3, 0x130(r1)
    stfs f3, 0x134(r1)
    stfs f3, 0x138(r1)
    stfs f0, 0x13c(r1)
    stfs f13, 0x38(r1)
    stfs f31, 0x3c(r1)
    stfs f30, 0x40(r1)
    stfs f13, 0x100(r1)
    stfs f31, 0x104(r1)
    stfs f30, 0x108(r1)
    stfs f10, 0x44(r1)
    stfs f11, 0x48(r1)
    stfs f12, 0x4c(r1)
    stfs f10, 0x110(r1)
    stfs f11, 0x114(r1)
    stfs f12, 0x118(r1)
    stfs f7, 0x50(r1)
    stfs f8, 0x54(r1)
    stfs f9, 0x58(r1)
    stfs f7, 0x120(r1)
    stfs f8, 0x124(r1)
    stfs f9, 0x128(r1)
    stfs f4, 0x5c(r1)
    stfs f5, 0x60(r1)
    stfs f6, 0x64(r1)
    stfs f4, 0x10c(r1)
    stfs f5, 0x11c(r1)
    stfs f6, 0x12c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x70(r1)
    bl fn_805F9750
    lfs f2, 0x70(r1)
    lfs f0, lbl_808850BC
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80331DAC_000010BC
    lfs f3, 0x6c(r1)
    lfs f0, lbl_80885078
    fcmpo cr0, f3, f0
    ble lbl_fn_80331DAC_000010AC
    lfs f0, lbl_808850C0
    b lbl_fn_80331DAC_000010B0
lbl_fn_80331DAC_000010AC:
    lfs f0, lbl_808850C4
lbl_fn_80331DAC_000010B0:
    fneg f0, f0
    stfs f0, 0x74(r1)
    b lbl_fn_80331DAC_000010D0
lbl_fn_80331DAC_000010BC:
    lfs f1, 0x6c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x74(r1)
lbl_fn_80331DAC_000010D0:
    addi r3, r1, 0x74
    lfs f2, lbl_80885078
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_80749F70@ha
    psq_st f1, 0x0(r29), 0, 0
    lfs f0, 0x538(r31)
    lfs f3, 0xb8(r1)
    stfs f2, 0xbc(r1)
    fsubs f3, f3, f0
    lfs f0, lbl_808850C8
    stfs f2, 0x7c(r1)
    lfd f2, lbl_80749F70@l(r3)
    fmuls f1, f0, f3
    bl fn_8068AEA8
    frsp f30, f1
    lfs f0, lbl_80885118
    fcmpo cr0, f30, f0
    ble lbl_fn_80331DAC_00001120
    lfs f0, lbl_8088511C
    fsubs f30, f30, f0
lbl_fn_80331DAC_00001120:
    lfs f0, lbl_80885120
    fcmpo cr0, f30, f0
    bge lbl_fn_80331DAC_00001134
    lfs f0, lbl_8088511C
    fadds f30, f30, f0
lbl_fn_80331DAC_00001134:
    addi r3, r1, 0xc0
    bl fn_805F9940
    lfs f0, lbl_80885124
    fcmpo cr0, f0, f30
    bge lbl_fn_80331DAC_000012E0
    lfs f0, lbl_808850E8
    fcmpo cr0, f30, f0
    bge lbl_fn_80331DAC_000012E0
    lfs f0, lbl_80885128
    fcmpo cr0, f1, f0
    bge lbl_fn_80331DAC_000012E0
    lwz r3, 0xd1c(r31)
    mr r4, r31
    lwz r5, 0x14e4(r31)
    bl fn_8015C988
    b lbl_fn_80331DAC_000012E0
lbl_fn_80331DAC_00001174:
    lwz r4, 0xd1c(r3)
    lwz r0, 0x55c(r4)
    cmpwi r0, 0x6
    bne lbl_fn_80331DAC_00001190
    lwz r0, 0x560(r4)
    cmpwi r0, 0x82
    beq lbl_fn_80331DAC_000011FC
lbl_fn_80331DAC_00001190:
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x6
    beq lbl_fn_80331DAC_000011AC
    cmpwi r0, 0x7
    beq lbl_fn_80331DAC_000011AC
    li r0, 0x0
    stw r0, 0x15a0(r3)
lbl_fn_80331DAC_000011AC:
    li r30, 0x0
    stw r30, 0x14b8(r3)
    stw r30, 0x14bc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r4, 0x58c(r31)
    li r0, 0x1
    stw r3, 0x590(r31)
    cmpwi r4, 0x6
    stw r0, 0x594(r31)
    stw r30, 0x598(r31)
    beq lbl_fn_80331DAC_000011F0
    cmpwi r4, 0x7
    beq lbl_fn_80331DAC_000011F0
    cmpwi r4, 0xe
    beq lbl_fn_80331DAC_000011F0
    stw r4, 0x15a8(r31)
lbl_fn_80331DAC_000011F0:
    li r0, 0x6
    stw r0, 0x58c(r31)
    b lbl_fn_80331DAC_000012E0
lbl_fn_80331DAC_000011FC:
    li r30, 0x0
    stw r30, 0x14b8(r3)
    stw r30, 0x14bc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r4, 0x58c(r31)
    li r0, 0x1
    stw r3, 0x590(r31)
    cmpwi r4, 0x6
    stw r0, 0x594(r31)
    stw r30, 0x598(r31)
    beq lbl_fn_80331DAC_00001240
    cmpwi r4, 0x7
    beq lbl_fn_80331DAC_00001240
    cmpwi r4, 0xe
    beq lbl_fn_80331DAC_00001240
    stw r4, 0x15a8(r31)
lbl_fn_80331DAC_00001240:
    lfs f1, lbl_80885114
    li r4, 0x10
    lwz r0, 0x12a4(r31)
    mr r3, r31
    fmr f2, f1
    stw r4, 0x58c(r31)
    rlwinm r0, r0, 0, 27, 25
    li r4, 0x143
    stw r0, 0x12a4(r31)
    li r5, 0x1
    li r6, 0x0
    bl fn_80161570
    mr r3, r31
    li r4, 0x3e8
    bl fn_80232B7C
    lfs f0, lbl_80885078
    li r3, -0x1
    lfs f1, lbl_8088507C
    li r0, 0x1
    stfs f0, 0x20(r1)
    addi r4, r31, 0x17a4
    addi r5, r31, 0xb0
    addi r7, r1, 0x2c
    stfs f0, 0x24(r1)
    addi r8, r1, 0x20
    addi r9, r1, 0x10
    li r6, 0x0
    stfs f0, 0x28(r1)
    li r10, -0x1
    stfs f0, 0x2c(r1)
    stfs f0, 0x30(r1)
    stfs f0, 0x34(r1)
    stfs f1, 0x10(r1)
    stfs f1, 0x14(r1)
    stfs f1, 0x18(r1)
    stfs f1, 0x1c(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
lbl_fn_80331DAC_000012E0:
    lwz r0, 0x174(r1)
    psq_l f31, 0x168(r1), 0, 0
    lfd f31, 0x160(r1)
    psq_l f30, 0x158(r1), 0, 0
    lfd f30, 0x150(r1)
    lwz r31, 0x14c(r1)
    lwz r30, 0x148(r1)
    lwz r29, 0x144(r1)
    mtlr r0
    addi r1, r1, 0x170
    blr
}

asm void fn_803323A0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_803323A0_000013D8
    lwz r4, 0xd1c(r3)
    lwz r0, 0x55c(r4)
    cmpwi r0, 0x6
    bne lbl_fn_803323A0_0000134C
    lwz r0, 0x560(r4)
    cmpwi r0, 0x82
    beq lbl_fn_803323A0_00001460
lbl_fn_803323A0_0000134C:
    li r31, 0x0
    stw r31, 0x14b8(r3)
    stw r31, 0x14bc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r4, 0x58c(r30)
    li r0, 0x1
    stw r3, 0x590(r30)
    cmpwi r4, 0x6
    stw r0, 0x594(r30)
    stw r31, 0x598(r30)
    beq lbl_fn_803323A0_00001390
    cmpwi r4, 0x7
    beq lbl_fn_803323A0_00001390
    cmpwi r4, 0xe
    beq lbl_fn_803323A0_00001390
    stw r4, 0x15a8(r30)
lbl_fn_803323A0_00001390:
    lfs f1, lbl_80885114
    li r4, 0x11
    lwz r0, 0x12a4(r30)
    mr r3, r30
    fmr f2, f1
    stw r4, 0x58c(r30)
    rlwinm r0, r0, 0, 27, 25
    li r4, 0x144
    stw r0, 0x12a4(r30)
    li r5, 0x0
    li r6, 0x0
    bl fn_80161570
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3e8
    li r6, 0x1
    bl fn_80239DAC
    b lbl_fn_803323A0_00001460
lbl_fn_803323A0_000013D8:
    li r31, 0x0
    stw r31, 0x14b8(r3)
    stw r31, 0x14bc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r4, 0x58c(r30)
    li r0, 0x1
    stw r3, 0x590(r30)
    cmpwi r4, 0x6
    stw r0, 0x594(r30)
    stw r31, 0x598(r30)
    beq lbl_fn_803323A0_0000141C
    cmpwi r4, 0x7
    beq lbl_fn_803323A0_0000141C
    cmpwi r4, 0xe
    beq lbl_fn_803323A0_0000141C
    stw r4, 0x15a8(r30)
lbl_fn_803323A0_0000141C:
    lfs f1, lbl_80885114
    li r4, 0x11
    lwz r0, 0x12a4(r30)
    mr r3, r30
    fmr f2, f1
    stw r4, 0x58c(r30)
    rlwinm r0, r0, 0, 27, 25
    li r4, 0x144
    stw r0, 0x12a4(r30)
    li r5, 0x0
    li r6, 0x0
    bl fn_80161570
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3e8
    li r6, 0x1
    bl fn_80239DAC
lbl_fn_803323A0_00001460:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8033250C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_8033250C_00001514
    lwz r0, 0x560(r3)
    cmpwi r0, 0x27
    beq lbl_fn_8033250C_0000157C
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x6
    beq lbl_fn_8033250C_000014C4
    cmpwi r0, 0x7
    beq lbl_fn_8033250C_000014C4
    li r0, 0x0
    stw r0, 0x15a0(r3)
lbl_fn_8033250C_000014C4:
    li r31, 0x0
    stw r31, 0x14b8(r3)
    stw r31, 0x14bc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r4, 0x58c(r30)
    li r0, 0x1
    stw r3, 0x590(r30)
    cmpwi r4, 0x6
    stw r0, 0x594(r30)
    stw r31, 0x598(r30)
    beq lbl_fn_8033250C_00001508
    cmpwi r4, 0x7
    beq lbl_fn_8033250C_00001508
    cmpwi r4, 0xe
    beq lbl_fn_8033250C_00001508
    stw r4, 0x15a8(r30)
lbl_fn_8033250C_00001508:
    li r0, 0x6
    stw r0, 0x58c(r30)
    b lbl_fn_8033250C_0000157C
lbl_fn_8033250C_00001514:
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x6
    beq lbl_fn_8033250C_00001530
    cmpwi r0, 0x7
    beq lbl_fn_8033250C_00001530
    li r0, 0x0
    stw r0, 0x15a0(r3)
lbl_fn_8033250C_00001530:
    li r31, 0x0
    stw r31, 0x14b8(r3)
    stw r31, 0x14bc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r4, 0x58c(r30)
    li r0, 0x1
    stw r3, 0x590(r30)
    cmpwi r4, 0x6
    stw r0, 0x594(r30)
    stw r31, 0x598(r30)
    beq lbl_fn_8033250C_00001574
    cmpwi r4, 0x7
    beq lbl_fn_8033250C_00001574
    cmpwi r4, 0xe
    beq lbl_fn_8033250C_00001574
    stw r4, 0x15a8(r30)
lbl_fn_8033250C_00001574:
    li r0, 0x6
    stw r0, 0x58c(r30)
lbl_fn_8033250C_0000157C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80332628(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x6
    beq lbl_fn_80332628_000015C8
    cmpwi r0, 0x7
    beq lbl_fn_80332628_000015C8
    li r0, 0x0
    stw r0, 0x15a0(r3)
lbl_fn_80332628_000015C8:
    li r31, 0x0
    stw r31, 0x14b8(r3)
    stw r31, 0x14bc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r4, 0x58c(r30)
    li r0, 0x1
    stw r3, 0x590(r30)
    cmpwi r4, 0x6
    stw r0, 0x594(r30)
    stw r31, 0x598(r30)
    beq lbl_fn_80332628_0000160C
    cmpwi r4, 0x7
    beq lbl_fn_80332628_0000160C
    cmpwi r4, 0xe
    beq lbl_fn_80332628_0000160C
    stw r4, 0x15a8(r30)
lbl_fn_80332628_0000160C:
    li r0, 0x6
    stw r0, 0x58c(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803326C0(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    stfd f31, 0x110(r1)
    psq_st f31, 0x118(r1), 0, 0
    stfd f30, 0x100(r1)
    psq_st f30, 0x108(r1), 0, 0
    stfd f29, 0xf0(r1)
    psq_st f29, 0xf8(r1), 0, 0
    stw r31, 0xec(r1)
    mr r31, r3
    stw r30, 0xe8(r1)
    li r30, 0x0
    stw r30, 0x14b8(r3)
    stw r30, 0x14bc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r4, 0x58c(r31)
    li r0, 0x1
    stw r3, 0x590(r31)
    cmpwi r4, 0x6
    stw r0, 0x594(r31)
    stw r30, 0x598(r31)
    beq lbl_fn_803326C0_000016A0
    cmpwi r4, 0x7
    beq lbl_fn_803326C0_000016A0
    cmpwi r4, 0xe
    beq lbl_fn_803326C0_000016A0
    stw r4, 0x15a8(r31)
lbl_fn_803326C0_000016A0:
    li r0, 0x8
    stw r0, 0x58c(r31)
    lwz r4, 0xd1c(r31)
    addi r3, r1, 0x68
    lfs f0, 0x530(r31)
    lfs f3, 0x530(r4)
    lfs f5, 0x52c(r4)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r31)
    lfs f3, 0x528(r4)
    lfs f0, 0x528(r31)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x6c(r1)
    stfs f0, 0x68(r1)
    stfs f6, 0x70(r1)
    bl fn_805F9940
    lfs f0, lbl_808850E8
    fcmpo cr0, f1, f0
    bge lbl_fn_803326C0_00001A6C
    lwz r4, 0xd1c(r31)
    lwz r0, 0x12a4(r31)
    cmpwi r4, 0x0
    lfs f31, lbl_8088507C
    rlwinm r0, r0, 0, 27, 25
    stw r0, 0x12a4(r31)
    beq lbl_fn_803326C0_000019C0
    lfs f3, 0x530(r4)
    addi r3, r1, 0x5c
    lfs f0, 0x530(r31)
    lfs f5, 0x52c(r4)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r31)
    lfs f3, 0x528(r4)
    lfs f0, 0x528(r31)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x60(r1)
    stfs f0, 0x5c(r1)
    stfs f6, 0x64(r1)
    bl fn_805F9920
    fabs f3, f1
    lfs f0, lbl_808850BC
    frsp f3, f3
    fcmpo cr0, f3, f0
    blt lbl_fn_803326C0_00001764
    addi r3, r1, 0x5c
    mr r4, r3
    bl fn_805F98D0
lbl_fn_803326C0_00001764:
    lfs f2, 0x64(r1)
    addi r3, r1, 0x5c
    lfs f0, lbl_808850BC
    addi r30, r1, 0x50
    fabs f3, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0x58(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_803326C0_000017B4
    lfs f3, 0x50(r1)
    lfs f0, lbl_80885078
    fcmpo cr0, f3, f0
    ble lbl_fn_803326C0_000017A8
    lfs f0, lbl_808850C0
    b lbl_fn_803326C0_000017AC
lbl_fn_803326C0_000017A8:
    lfs f0, lbl_808850C4
lbl_fn_803326C0_000017AC:
    stfs f0, 0x48(r1)
    b lbl_fn_803326C0_000017C8
lbl_fn_803326C0_000017B4:
    frsp f2, f2
    lfs f1, 0x50(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_803326C0_000017C8:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x78
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80885078
    addi r4, r1, 0x38
    lfs f29, 0x80(r1)
    mr r5, r4
    lfs f30, 0x7c(r1)
    addi r3, r1, 0xa8
    lfs f13, 0x78(r1)
    lfs f12, 0x90(r1)
    lfs f11, 0x8c(r1)
    lfs f10, 0x88(r1)
    lfs f9, 0xa0(r1)
    lfs f8, 0x9c(r1)
    lfs f7, 0x98(r1)
    lfs f6, 0xa4(r1)
    lfs f5, 0x94(r1)
    lfs f4, 0x84(r1)
    lfs f0, lbl_8088507C
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x58(r1)
    stfs f3, 0xd8(r1)
    stfs f3, 0xdc(r1)
    stfs f3, 0xe0(r1)
    stfs f0, 0xe4(r1)
    stfs f13, 0x8(r1)
    stfs f30, 0xc(r1)
    stfs f29, 0x10(r1)
    stfs f13, 0xa8(r1)
    stfs f30, 0xac(r1)
    stfs f29, 0xb0(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xb8(r1)
    stfs f11, 0xbc(r1)
    stfs f12, 0xc0(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0xc8(r1)
    stfs f8, 0xcc(r1)
    stfs f9, 0xd0(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0xb4(r1)
    stfs f5, 0xc4(r1)
    stfs f6, 0xd4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_808850BC
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_803326C0_000018E4
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80885078
    fcmpo cr0, f3, f0
    ble lbl_fn_803326C0_000018D4
    lfs f0, lbl_808850C0
    b lbl_fn_803326C0_000018D8
lbl_fn_803326C0_000018D4:
    lfs f0, lbl_808850C4
lbl_fn_803326C0_000018D8:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_803326C0_000018F8
lbl_fn_803326C0_000018E4:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_803326C0_000018F8:
    addi r3, r1, 0x44
    lfs f2, lbl_80885078
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    lfs f4, 0x538(r31)
    lfs f3, 0x54(r1)
    lfs f0, lbl_808850B8
    fsubs f3, f3, f4
    stfs f2, 0x4c(r1)
    stfs f2, 0x58(r1)
    fcmpo cr0, f3, f0
    ble lbl_fn_803326C0_00001938
    lfs f0, lbl_808850A4
    fsubs f0, f3, f0
    fmadds f29, f31, f0, f4
    b lbl_fn_803326C0_00001958
lbl_fn_803326C0_00001938:
    lfs f0, lbl_808850A0
    fcmpo cr0, f3, f0
    bge lbl_fn_803326C0_00001954
    lfs f0, lbl_808850A4
    fadds f0, f0, f3
    fmadds f29, f31, f0, f4
    b lbl_fn_803326C0_00001958
lbl_fn_803326C0_00001954:
    fmadds f29, f31, f3, f4
lbl_fn_803326C0_00001958:
    lfs f0, 0x538(r31)
    lis r3, lbl_80749F68@ha
    lfd f2, lbl_80749F68@l(r3)
    fsubs f1, f29, f0
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_808850B8
    fcmpo cr0, f3, f0
    ble lbl_fn_803326C0_00001984
    lfs f0, lbl_808850A4
    fsubs f3, f3, f0
lbl_fn_803326C0_00001984:
    lfs f0, lbl_808850A0
    fcmpo cr0, f3, f0
    lis r3, lbl_80749F68@ha
    frsp f1, f29
    stfs f29, 0x538(r31)
    lfd f2, lbl_80749F68@l(r3)
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_808850B8
    fcmpo cr0, f3, f0
    ble lbl_fn_803326C0_000019B8
    lfs f0, lbl_808850A4
    fsubs f3, f3, f0
lbl_fn_803326C0_000019B8:
    lfs f0, lbl_808850A0
    fcmpo cr0, f3, f0
lbl_fn_803326C0_000019C0:
    lwz r5, 0xd1c(r31)
    mr r4, r31
    li r3, 0x0
    bl fn_80041A28
    lwz r0, 0x17c0(r31)
    mr r30, r3
    cmpwi r0, 0x0
    beq lbl_fn_803326C0_000019F8
    lwz r3, 0xd1c(r31)
    mr r4, r31
    bl fn_8016ADF4
    cmpwi r3, 0x0
    beq lbl_fn_803326C0_000019F8
    li r30, 0x5
lbl_fn_803326C0_000019F8:
    cmpwi r30, 0x2
    li r0, 0x0
    stw r0, 0x17c0(r31)
    bne lbl_fn_803326C0_00001A24
    lwz r5, 0xd1c(r31)
    mr r3, r31
    lwz r4, 0x14d0(r31)
    lfs f1, lbl_808850E4
    addi r5, r5, 0x528
    bl fn_8015783C
    b lbl_fn_803326C0_00001A80
lbl_fn_803326C0_00001A24:
    cmpwi r30, 0x5
    bne lbl_fn_803326C0_00001A40
    lwz r4, 0x14d0(r31)
    mr r3, r31
    lwz r5, 0xd1c(r31)
    bl fn_8015802C
    b lbl_fn_803326C0_00001A80
lbl_fn_803326C0_00001A40:
    lwz r5, 0xd1c(r31)
    mr r3, r31
    lwz r4, 0x14d0(r31)
    li r6, 0x0
    lfs f1, lbl_808850E4
    addi r5, r5, 0x528
    li r7, 0x0
    li r8, 0x0
    li r9, 0x0
    bl fn_801562A0
    b lbl_fn_803326C0_00001A80
lbl_fn_803326C0_00001A6C:
    lwz r4, 0xd1c(r31)
    mr r3, r31
    lfs f1, lbl_80885094
    li r5, 0x0
    bl fn_80170A20
lbl_fn_803326C0_00001A80:
    lwz r0, 0x124(r1)
    psq_l f31, 0x118(r1), 0, 0
    lfd f31, 0x110(r1)
    psq_l f30, 0x108(r1), 0, 0
    lfd f30, 0x100(r1)
    psq_l f29, 0xf8(r1), 0, 0
    lfd f29, 0xf0(r1)
    lwz r31, 0xec(r1)
    lwz r30, 0xe8(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}
