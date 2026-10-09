#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_80097C08(void);
extern void fn_80097D40(void);
extern void fn_80097D7C(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_80106878(void);
extern void fn_8010CA34(void);
extern void fn_8012DB04(void);
extern void fn_802097C4(void);
extern void fn_803EA77C(void);
extern void fn_80473F18(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F9990(void);
extern void fn_80680CF8(void);
extern void fn_8068A850(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);

/* External data declarations */
extern u8 lbl_80738EF8[];
extern u8 lbl_80738F68[];
extern u8 lbl_80738F88[];
extern u8 lbl_80738FB8[];
extern u8 lbl_8077D478[];
extern u8 lbl_8077D4F8[];
extern u8 lbl_8077D578[];

/* Small data declarations */
extern u32 lbl_8087F048;
extern u32 lbl_8087F498;
extern u32 lbl_8087F610;
extern u32 lbl_8087F9C0;
extern u32 lbl_80881E90;
extern u32 lbl_80881E94;
extern u32 lbl_80881E98;
extern u32 lbl_80881E9C;
extern u32 lbl_80881EA0;
extern u32 lbl_80881EA4;
extern u32 lbl_80881EA8;
extern u32 lbl_80881EAC;
extern u32 lbl_80881EB0;
extern u32 lbl_80881EB4;
extern u32 lbl_80881EB8;
extern u32 lbl_80881EBC;
extern u32 lbl_80881EC0;
extern u32 lbl_80881EC4;
extern u32 lbl_80881EC8;
extern u32 lbl_80881ECC;
extern u32 lbl_80881ED0;
extern u32 lbl_80881ED4;
extern u32 lbl_80881ED8;
extern u32 lbl_80881EDC;
extern u32 lbl_80881EE0;
extern u32 lbl_80881EE4;
extern u32 lbl_80881EE8;
extern u32 lbl_80881EEC;
extern u32 lbl_80881EF0;
extern u32 lbl_80881EF4;
extern u32 lbl_80881EF8;
extern u32 lbl_80881EFC;
extern u32 lbl_80881F00;
extern u32 lbl_80881F04;
extern u32 lbl_80881F08;
extern u32 lbl_80881F0C;

/* Function declarations */
void fn_801895B4(void);
void fn_801895F4(void);
void fn_80189634(void);
void fn_801897B4(void);
void fn_8018982C(void);
void fn_801899B0(void);
void fn_80189A14(void);
void fn_80189A30(void);
void fn_80189A8C(void);
void fn_80189B28(void);
void fn_80189CB4(void);
void fn_8018A490(void);
void fn_8018A4D0(void);
void fn_8018A8CC(void);

asm void fn_801895B4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801895B4_00000028
    cmpwi r4, 0x0
    ble lbl_fn_801895B4_00000028
    bl dtor_80084684
lbl_fn_801895B4_00000028:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801895F4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801895F4_00000068
    cmpwi r4, 0x0
    ble lbl_fn_801895F4_00000068
    bl dtor_80084684
lbl_fn_801895F4_00000068:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80189634(void)
{
    nofralloc
    lwz r4, 0x8(r3)
    lwz r5, 0x4(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80189634_000000E0
    lwz r0, 0x4(r4)
    li r3, 0x0
    lfs f1, 0x2e4(r5)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80189634_000001F8
lbl_fn_80189634_000000A8:
    add r5, r4, r3
    lfs f0, 0x8(r5)
    fcmpo cr0, f0, f1
    cror eq, lt, eq
    bne lbl_fn_80189634_000000D4
    lfs f0, 0x18(r5)
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_80189634_000000D4
    li r3, 0x1
    blr
lbl_fn_80189634_000000D4:
    addi r3, r3, 0x4
    bdnz lbl_fn_80189634_000000A8
    b lbl_fn_80189634_000001F8
lbl_fn_80189634_000000E0:
    lwz r3, 0x560(r5)
    subi r0, r3, 0x4
    cmplwi r0, 0x1
    bgt lbl_fn_80189634_00000120
    lfs f1, 0x2e4(r5)
    li r3, 0x0
    lfs f0, lbl_80881E90
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bnelr
    lfs f0, lbl_80881E94
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bnelr
    li r3, 0x1
    blr
lbl_fn_80189634_00000120:
    cmpwi r3, 0x8
    bne lbl_fn_80189634_00000158
    lfs f1, 0x2e4(r5)
    li r3, 0x0
    lfs f0, lbl_80881E90
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bnelr
    lfs f0, lbl_80881E94
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bnelr
    li r3, 0x1
    blr
lbl_fn_80189634_00000158:
    cmpwi r3, 0x7
    bne lbl_fn_80189634_00000190
    lfs f1, 0x2e4(r5)
    li r3, 0x0
    lfs f0, lbl_80881E98
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bnelr
    lfs f0, lbl_80881E9C
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bnelr
    li r3, 0x1
    blr
lbl_fn_80189634_00000190:
    cmpwi r3, 0xb
    bne lbl_fn_80189634_000001C8
    lfs f1, 0x2e4(r5)
    li r3, 0x0
    lfs f0, lbl_80881EA0
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bnelr
    lfs f0, lbl_80881EA4
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bnelr
    li r3, 0x1
    blr
lbl_fn_80189634_000001C8:
    lfs f1, 0x2e4(r5)
    li r3, 0x0
    lfs f0, lbl_80881EA8
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bnelr
    lfs f0, lbl_80881EAC
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bnelr
    li r3, 0x1
    blr
lbl_fn_80189634_000001F8:
    li r3, 0x0
    blr
}

asm void fn_801897B4(void)
{
    nofralloc
    lwz r4, 0x8(r3)
    lwz r3, 0x4(r3)
    cmpwi r4, 0x0
    beq lbl_fn_801897B4_00000228
    lwz r3, 0x4(r4)
    subi r0, r3, 0x1
    slwi r0, r0, 2
    add r3, r4, r0
    lfs f1, 0x18(r3)
    blr
lbl_fn_801897B4_00000228:
    lwz r3, 0x560(r3)
    subi r0, r3, 0x4
    cmplwi r0, 0x1
    bgt lbl_fn_801897B4_00000240
    lfs f1, lbl_80881E94
    blr
lbl_fn_801897B4_00000240:
    cmpwi r3, 0x8
    bne lbl_fn_801897B4_00000250
    lfs f1, lbl_80881E94
    blr
lbl_fn_801897B4_00000250:
    cmpwi r3, 0x7
    bne lbl_fn_801897B4_00000260
    lfs f1, lbl_80881E9C
    blr
lbl_fn_801897B4_00000260:
    cmpwi r3, 0xb
    bne lbl_fn_801897B4_00000270
    lfs f1, lbl_80881EA4
    blr
lbl_fn_801897B4_00000270:
    lfs f1, lbl_80881EAC
    blr
}

asm void fn_8018982C(void)
{
    nofralloc
    lwz r4, 0x8(r3)
    lwz r5, 0x4(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8018982C_000002DC
    lwz r0, 0x4(r4)
    li r3, 0x0
    lfs f3, 0x2e4(r5)
    lfs f1, lbl_80881EB0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8018982C_000003F4
lbl_fn_8018982C_000002A4:
    add r5, r4, r3
    lfs f2, 0x8(r5)
    fsubs f0, f2, f1
    fcmpo cr0, f0, f3
    cror eq, lt, eq
    bne lbl_fn_8018982C_000002D0
    fcmpo cr0, f3, f2
    cror eq, lt, eq
    bne lbl_fn_8018982C_000002D0
    li r3, 0x1
    blr
lbl_fn_8018982C_000002D0:
    addi r3, r3, 0x4
    bdnz lbl_fn_8018982C_000002A4
    b lbl_fn_8018982C_000003F4
lbl_fn_8018982C_000002DC:
    lwz r3, 0x560(r5)
    subi r0, r3, 0x4
    cmplwi r0, 0x1
    bgt lbl_fn_8018982C_0000031C
    lfs f1, 0x2e4(r5)
    li r3, 0x0
    lfs f0, lbl_80881EB4
    fcmpo cr0, f0, f1
    cror eq, lt, eq
    bnelr
    lfs f0, lbl_80881E90
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bnelr
    li r3, 0x1
    blr
lbl_fn_8018982C_0000031C:
    cmpwi r3, 0x8
    bne lbl_fn_8018982C_00000354
    lfs f1, 0x2e4(r5)
    li r3, 0x0
    lfs f0, lbl_80881EB4
    fcmpo cr0, f0, f1
    cror eq, lt, eq
    bnelr
    lfs f0, lbl_80881E90
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bnelr
    li r3, 0x1
    blr
lbl_fn_8018982C_00000354:
    cmpwi r3, 0x7
    bne lbl_fn_8018982C_0000038C
    lfs f1, 0x2e4(r5)
    li r3, 0x0
    lfs f0, lbl_80881EB8
    fcmpo cr0, f0, f1
    cror eq, lt, eq
    bnelr
    lfs f0, lbl_80881E98
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bnelr
    li r3, 0x1
    blr
lbl_fn_8018982C_0000038C:
    cmpwi r3, 0xb
    bne lbl_fn_8018982C_000003C4
    lfs f1, 0x2e4(r5)
    li r3, 0x0
    lfs f0, lbl_80881EBC
    fcmpo cr0, f0, f1
    cror eq, lt, eq
    bnelr
    lfs f0, lbl_80881EA0
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bnelr
    li r3, 0x1
    blr
lbl_fn_8018982C_000003C4:
    lfs f1, 0x2e4(r5)
    li r3, 0x0
    lfs f0, lbl_80881EC0
    fcmpo cr0, f0, f1
    cror eq, lt, eq
    bnelr
    lfs f0, lbl_80881EA8
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bnelr
    li r3, 0x1
    blr
lbl_fn_8018982C_000003F4:
    li r3, 0x0
    blr
}

asm void fn_801899B0(void)
{
    nofralloc
    lwz r4, 0x8(r3)
    lwz r5, 0x4(r3)
    cmpwi r4, 0x0
    beq lbl_fn_801899B0_00000458
    lwz r0, 0x4(r4)
    li r3, 0x0
    lfs f1, 0x2e4(r5)
    li r5, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_801899B0_00000458
lbl_fn_801899B0_00000428:
    add r6, r4, r5
    lfs f0, 0x8(r6)
    fcmpo cr0, f0, f1
    cror eq, lt, eq
    bne lbl_fn_801899B0_0000044C
    lfs f0, 0x18(r6)
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    beqlr
lbl_fn_801899B0_0000044C:
    addi r5, r5, 0x4
    addi r3, r3, 0x1
    bdnz lbl_fn_801899B0_00000428
lbl_fn_801899B0_00000458:
    li r3, 0x0
    blr
}

asm void fn_80189A14(void)
{
    nofralloc
    lwz r3, 0x8(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80189A14_00000474
    lwz r3, 0x4(r3)
    blr
lbl_fn_80189A14_00000474:
    li r3, 0x1
    blr
}

asm void fn_80189A30(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80189A30_000004C0
    lwz r12, 0x0(r3)
    lwz r12, 0x30(r12)
    mtctr r12
    bctrl
    lwz r0, 0x8(r31)
    slwi r3, r3, 2
    add r3, r0, r3
    lwz r3, 0x28(r3)
    b lbl_fn_80189A30_000004C4
lbl_fn_80189A30_000004C0:
    li r3, 0x0
lbl_fn_80189A30_000004C4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80189A8C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_80189A8C_0000052C
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80189A8C_00000524
    lwz r12, 0x0(r3)
    lwz r12, 0x30(r12)
    mtctr r12
    bctrl
    lwz r0, 0x8(r31)
    slwi r3, r3, 2
    add r3, r0, r3
    lwz r3, 0x48(r3)
    b lbl_fn_80189A8C_00000560
lbl_fn_80189A8C_00000524:
    li r3, -0x1
    b lbl_fn_80189A8C_00000560
lbl_fn_80189A8C_0000052C:
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80189A8C_0000055C
    lwz r12, 0x0(r3)
    lwz r12, 0x30(r12)
    mtctr r12
    bctrl
    lwz r0, 0x8(r31)
    slwi r3, r3, 2
    add r3, r0, r3
    lwz r3, 0x38(r3)
    b lbl_fn_80189A8C_00000560
lbl_fn_80189A8C_0000055C:
    li r3, -0x1
lbl_fn_80189A8C_00000560:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80189B28(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r5, 0x4330
    lwz r6, 0x4(r3)
    stw r0, 0x34(r1)
    lis r4, 0x51ec
    addi r7, r6, 0x7d4
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    stw r31, 0x1c(r1)
    mr r31, r3
    subi r3, r4, 0x7ae1
    lwz r0, 0x950(r6)
    stw r5, 0x8(r1)
    mulhw r0, r3, r0
    stw r5, 0x10(r1)
    srawi r0, r0, 5
    srwi r3, r0, 31
    add r3, r0, r3
    srawi r0, r3, 31
    andc r0, r3, r0
    cmpwi r0, 0x5
    ble lbl_fn_80189B28_000005D8
    li r0, 0x5
    b lbl_fn_80189B28_000005E0
lbl_fn_80189B28_000005D8:
    srawi r0, r3, 31
    andc r0, r3, r0
lbl_fn_80189B28_000005E0:
    lwz r5, 0xc(r7)
    lis r3, lbl_80738F88@ha
    slwi r4, r0, 3
    addi r3, r3, lbl_80738F88@l
    rlwinm r0, r5, 0, 25, 25
    add r3, r3, r4
    cmplwi r0, 0x40
    lfs f31, 0x4(r3)
    bne lbl_fn_80189B28_0000067C
    lwz r0, 0xf98(r6)
    lis r4, lbl_80738FB8@ha
    lwz r3, 0xf94(r6)
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    xoris r3, r3, 0x8000
    lfd f3, lbl_80738FB8@l(r4)
    stw r3, 0xc(r1)
    lfd f0, 0x10(r1)
    lfd f1, 0x8(r1)
    fsubs f0, f0, f3
    lfs f2, lbl_80881EC4
    fsubs f1, f1, f3
    lfs f4, lbl_80881EC8
    fdivs f0, f1, f0
    fsubs f0, f2, f0
    fsubs f0, f2, f0
    fcmpo cr0, f4, f0
    ble lbl_fn_80189B28_00000654
    b lbl_fn_80189B28_00000678
lbl_fn_80189B28_00000654:
    stw r3, 0xc(r1)
    stw r0, 0x14(r1)
    lfd f1, 0x8(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f1, f3
    fsubs f0, f0, f3
    fdivs f0, f1, f0
    fsubs f0, f2, f0
    fsubs f4, f2, f0
lbl_fn_80189B28_00000678:
    fmuls f31, f31, f4
lbl_fn_80189B28_0000067C:
    rlwinm r0, r5, 0, 16, 16
    cmplwi r0, 0x8000
    bne lbl_fn_80189B28_00000690
    lfs f0, lbl_80881ECC
    fmuls f31, f31, f0
lbl_fn_80189B28_00000690:
    mr r3, r7
    bl fn_8012DB04
    lwz r3, 0x4(r31)
    fmuls f31, f31, f1
    lwz r0, 0x7e8(r3)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    bne lbl_fn_80189B28_000006BC
    lwz r3, lbl_8087F048
    bl fn_8010CA34
    fmuls f31, f31, f1
lbl_fn_80189B28_000006BC:
    lwz r3, lbl_8087F9C0
    lwz r0, 0x28(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80189B28_000006E0
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    beq lbl_fn_80189B28_000006E0
    lfs f0, lbl_80881ED0
    fmuls f31, f31, f0
lbl_fn_80189B28_000006E0:
    fmr f1, f31
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80189CB4(void)
{
    nofralloc
    stwu r1, -0x260(r1)
    mflr r0
    stw r0, 0x264(r1)
    addi r11, r1, 0x230
    stfd f31, 0x250(r1)
    psq_st f31, 0x258(r1), 0, 0
    stfd f30, 0x240(r1)
    psq_st f30, 0x248(r1), 0, 0
    stfd f29, 0x230(r1)
    psq_st f29, 0x238(r1), 0, 0
    bl _savegpr_27
    lis r6, lbl_8077D578@ha
    li r8, 0x0
    addi r6, r6, lbl_8077D578@l
    stw r6, 0x0(r3)
    lis r7, lbl_8077D4F8@ha
    lis r31, lbl_80738EF8@ha
    stw r4, 0x4(r3)
    addi r7, r7, lbl_8077D4F8@l
    li r6, 0x4
    li r0, 0x1
    stw r8, 0x8(r3)
    mr r29, r3
    lfs f0, lbl_80881EC4
    mr r27, r5
    stw r8, 0xc(r3)
    addi r31, r31, lbl_80738EF8@l
    psq_l f1, 0x0(r5), 0, 0
    lfs f2, 0x8(r5)
    stfs f2, 0x18(r3)
    psq_st f1, 0x10(r3), 0, 0
    stw r7, 0x0(r3)
    stw r6, 0x560(r4)
    lwz r4, 0x4(r3)
    stw r0, 0x3fc(r4)
    addi r30, r4, 0xb0
    stfs f0, 0x2fc(r4)
    lwz r12, 0x0(r3)
    lwz r12, 0x60(r12)
    mtctr r12
    bctrl
    stfs f1, 0x238(r30)
    lwz r6, 0x4(r29)
    lwz r0, 0x12a4(r6)
    lwz r28, 0x4d0(r6)
    srwi. r0, r0, 31
    beq lbl_fn_80189CB4_0000080C
    lwz r28, 0x4e4(r6)
    addi r3, r1, 0x1e8
    lfs f3, lbl_80881ED4
    li r4, 0x79
    lfs f0, lbl_80881EC4
    stfs f3, 0xb0(r1)
    stfs f3, 0xb4(r1)
    stfs f0, 0xb8(r1)
    lfs f1, 0x538(r6)
    bl fn_805F8E70
    addi r4, r1, 0xb0
    addi r3, r1, 0x1e8
    mr r5, r4
    bl fn_805F93C0
    addi r3, r1, 0xb0
    lfs f2, 0xb8(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x10(r29), 0, 0
    stfs f2, 0x18(r29)
    b lbl_fn_80189CB4_00000D50
lbl_fn_80189CB4_0000080C:
    lfs f2, 0x53c(r6)
    addi r5, r1, 0xc8
    psq_l f1, 0x534(r6), 0, 0
    addi r3, r1, 0x1b8
    lfs f3, lbl_80881ED4
    li r4, 0x79
    lfs f0, lbl_80881EC4
    stfs f3, 0xbc(r1)
    stfs f3, 0xc0(r1)
    stfs f0, 0xc4(r1)
    lfs f0, 0x538(r6)
    psq_st f1, 0x0(r5), 0, 0
    fmr f1, f0
    stfs f2, 0xd0(r1)
    bl fn_805F8E70
    addi r4, r1, 0xbc
    addi r3, r1, 0x1b8
    mr r5, r4
    bl fn_805F93C0
    mr r3, r27
    addi r4, r1, 0xbc
    bl fn_805F9990
    fmr f31, f1
    lfd f1, 0xc8(r31)
    bl fn_8068A850
    frsp f30, f1
    lfd f1, 0xd0(r31)
    bl fn_8068A850
    frsp f29, f1
    mr r3, r30
    li r4, 0x158
    bl fn_80097D40
    cmpwi r3, 0x0
    beq lbl_fn_80189CB4_00000D50
    fcmpo cr0, f31, f30
    ble lbl_fn_80189CB4_00000938
    bl fn_80680CF8
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    li r5, 0x14
    subf. r0, r4, r0
    bne lbl_fn_80189CB4_000008BC
    li r5, 0x13
lbl_fn_80189CB4_000008BC:
    lwz r4, 0x4(r29)
    li r6, 0x0
    lwz r0, 0x48(r4)
    cmpwi r0, 0x0
    bne lbl_fn_80189CB4_000008E4
    lwz r3, lbl_8087F9C0
    lwz r0, 0x28(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80189CB4_000008E4
    li r6, 0x1
lbl_fn_80189CB4_000008E4:
    lwz r3, 0x50(r4)
    subis r3, r3, 0xb
    addi r0, r3, 0x518a
    cmplwi r0, 0x1
    bgt lbl_fn_80189CB4_000008FC
    li r6, 0x0
lbl_fn_80189CB4_000008FC:
    cmpwi r6, 0x0
    li r3, 0x0
    beq lbl_fn_80189CB4_00000918
    lwz r0, 0x64c(r4)
    cmpwi r0, 0x0
    bne lbl_fn_80189CB4_00000918
    li r3, 0x1
lbl_fn_80189CB4_00000918:
    cmpwi r3, 0x0
    beq lbl_fn_80189CB4_00000928
    li r28, 0x162
    b lbl_fn_80189CB4_00000D50
lbl_fn_80189CB4_00000928:
    slwi r0, r5, 2
    add r3, r4, r0
    lwz r28, 0x484(r3)
    b lbl_fn_80189CB4_00000D50
lbl_fn_80189CB4_00000938:
    fneg f0, f29
    fcmpo cr0, f31, f0
    bge lbl_fn_80189CB4_00000B4C
    lfs f2, 0x8(r27)
    addi r28, r1, 0xa4
    psq_l f1, 0x0(r27), 0, 0
    fabs f3, f2
    lfs f0, lbl_80881ED8
    psq_st f1, 0x0(r28), 0, 0
    frsp f3, f3
    stfs f2, 0xac(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_80189CB4_00000990
    lfs f3, 0xa4(r1)
    lfs f0, lbl_80881ED4
    fcmpo cr0, f3, f0
    ble lbl_fn_80189CB4_00000984
    lfs f0, lbl_80881EDC
    b lbl_fn_80189CB4_00000988
lbl_fn_80189CB4_00000984:
    lfs f0, lbl_80881EE0
lbl_fn_80189CB4_00000988:
    stfs f0, 0x90(r1)
    b lbl_fn_80189CB4_000009A4
lbl_fn_80189CB4_00000990:
    frsp f2, f2
    lfs f1, 0xa4(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x90(r1)
lbl_fn_80189CB4_000009A4:
    lfs f0, 0x90(r1)
    addi r3, r1, 0x148
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80881ED4
    addi r4, r1, 0x80
    lfs f30, 0x150(r1)
    mr r5, r4
    lfs f31, 0x14c(r1)
    addi r3, r1, 0x178
    lfs f13, 0x148(r1)
    lfs f12, 0x160(r1)
    lfs f11, 0x15c(r1)
    lfs f10, 0x158(r1)
    lfs f9, 0x170(r1)
    lfs f8, 0x16c(r1)
    lfs f7, 0x168(r1)
    lfs f6, 0x174(r1)
    lfs f5, 0x164(r1)
    lfs f4, 0x154(r1)
    lfs f0, lbl_80881EC4
    psq_l f1, 0x0(r28), 0, 0
    lfs f2, 0xac(r1)
    stfs f3, 0x1a8(r1)
    stfs f3, 0x1ac(r1)
    stfs f3, 0x1b0(r1)
    stfs f0, 0x1b4(r1)
    stfs f13, 0x50(r1)
    stfs f31, 0x54(r1)
    stfs f30, 0x58(r1)
    stfs f13, 0x178(r1)
    stfs f31, 0x17c(r1)
    stfs f30, 0x180(r1)
    stfs f10, 0x5c(r1)
    stfs f11, 0x60(r1)
    stfs f12, 0x64(r1)
    stfs f10, 0x188(r1)
    stfs f11, 0x18c(r1)
    stfs f12, 0x190(r1)
    stfs f7, 0x68(r1)
    stfs f8, 0x6c(r1)
    stfs f9, 0x70(r1)
    stfs f7, 0x198(r1)
    stfs f8, 0x19c(r1)
    stfs f9, 0x1a0(r1)
    stfs f4, 0x74(r1)
    stfs f5, 0x78(r1)
    stfs f6, 0x7c(r1)
    stfs f4, 0x184(r1)
    stfs f5, 0x194(r1)
    stfs f6, 0x1a4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x88(r1)
    bl fn_805F9750
    lfs f2, 0x88(r1)
    lfs f0, lbl_80881ED8
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80189CB4_00000AC0
    lfs f3, 0x84(r1)
    lfs f0, lbl_80881ED4
    fcmpo cr0, f3, f0
    ble lbl_fn_80189CB4_00000AB0
    lfs f0, lbl_80881EDC
    b lbl_fn_80189CB4_00000AB4
lbl_fn_80189CB4_00000AB0:
    lfs f0, lbl_80881EE0
lbl_fn_80189CB4_00000AB4:
    fneg f0, f0
    stfs f0, 0x8c(r1)
    b lbl_fn_80189CB4_00000AD4
lbl_fn_80189CB4_00000AC0:
    lfs f1, 0x84(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x8c(r1)
lbl_fn_80189CB4_00000AD4:
    addi r3, r1, 0x8c
    lfs f3, lbl_80881ED4
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    fmr f2, f3
    lfs f0, 0xcc(r1)
    lfs f4, 0xa8(r1)
    stfs f2, 0xac(r1)
    fsubs f1, f4, f0
    lfd f2, 0xd8(r31)
    stfs f3, 0x94(r1)
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_80881EE4
    fcmpo cr0, f3, f0
    ble lbl_fn_80189CB4_00000B1C
    lfs f0, lbl_80881EE8
    fsubs f3, f3, f0
lbl_fn_80189CB4_00000B1C:
    lfs f0, lbl_80881EEC
    fcmpo cr0, f3, f0
    bge lbl_fn_80189CB4_00000B30
    lfs f0, lbl_80881EE8
    fadds f3, f3, f0
lbl_fn_80189CB4_00000B30:
    lfs f0, lbl_80881ED4
    fcmpo cr0, f3, f0
    ble lbl_fn_80189CB4_00000B44
    li r28, 0x15a
    b lbl_fn_80189CB4_00000D50
lbl_fn_80189CB4_00000B44:
    li r28, 0x15b
    b lbl_fn_80189CB4_00000D50
lbl_fn_80189CB4_00000B4C:
    lfs f2, 0x8(r27)
    addi r28, r1, 0x98
    psq_l f1, 0x0(r27), 0, 0
    fabs f3, f2
    lfs f0, lbl_80881ED8
    psq_st f1, 0x0(r28), 0, 0
    frsp f3, f3
    stfs f2, 0xa0(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_80189CB4_00000B98
    lfs f3, 0x98(r1)
    lfs f0, lbl_80881ED4
    fcmpo cr0, f3, f0
    ble lbl_fn_80189CB4_00000B8C
    lfs f0, lbl_80881EDC
    b lbl_fn_80189CB4_00000B90
lbl_fn_80189CB4_00000B8C:
    lfs f0, lbl_80881EE0
lbl_fn_80189CB4_00000B90:
    stfs f0, 0x48(r1)
    b lbl_fn_80189CB4_00000BAC
lbl_fn_80189CB4_00000B98:
    frsp f2, f2
    lfs f1, 0x98(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_80189CB4_00000BAC:
    lfs f0, 0x48(r1)
    addi r3, r1, 0xd8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80881ED4
    addi r4, r1, 0x38
    lfs f31, 0xe0(r1)
    mr r5, r4
    lfs f30, 0xdc(r1)
    addi r3, r1, 0x108
    lfs f13, 0xd8(r1)
    lfs f12, 0xf0(r1)
    lfs f11, 0xec(r1)
    lfs f10, 0xe8(r1)
    lfs f9, 0x100(r1)
    lfs f8, 0xfc(r1)
    lfs f7, 0xf8(r1)
    lfs f6, 0x104(r1)
    lfs f5, 0xf4(r1)
    lfs f4, 0xe4(r1)
    lfs f0, lbl_80881EC4
    psq_l f1, 0x0(r28), 0, 0
    lfs f2, 0xa0(r1)
    stfs f3, 0x138(r1)
    stfs f3, 0x13c(r1)
    stfs f3, 0x140(r1)
    stfs f0, 0x144(r1)
    stfs f13, 0x8(r1)
    stfs f30, 0xc(r1)
    stfs f31, 0x10(r1)
    stfs f13, 0x108(r1)
    stfs f30, 0x10c(r1)
    stfs f31, 0x110(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0x118(r1)
    stfs f11, 0x11c(r1)
    stfs f12, 0x120(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0x128(r1)
    stfs f8, 0x12c(r1)
    stfs f9, 0x130(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0x114(r1)
    stfs f5, 0x124(r1)
    stfs f6, 0x134(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80881ED8
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80189CB4_00000CC8
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80881ED4
    fcmpo cr0, f3, f0
    ble lbl_fn_80189CB4_00000CB8
    lfs f0, lbl_80881EDC
    b lbl_fn_80189CB4_00000CBC
lbl_fn_80189CB4_00000CB8:
    lfs f0, lbl_80881EE0
lbl_fn_80189CB4_00000CBC:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_80189CB4_00000CDC
lbl_fn_80189CB4_00000CC8:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_80189CB4_00000CDC:
    addi r3, r1, 0x44
    lfs f3, lbl_80881ED4
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    fmr f2, f3
    lfs f0, 0xcc(r1)
    lfs f4, 0x9c(r1)
    stfs f2, 0xa0(r1)
    fsubs f1, f4, f0
    lfd f2, 0xd8(r31)
    stfs f3, 0x4c(r1)
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_80881EE4
    fcmpo cr0, f3, f0
    ble lbl_fn_80189CB4_00000D24
    lfs f0, lbl_80881EE8
    fsubs f3, f3, f0
lbl_fn_80189CB4_00000D24:
    lfs f0, lbl_80881EEC
    fcmpo cr0, f3, f0
    bge lbl_fn_80189CB4_00000D38
    lfs f0, lbl_80881EE8
    fadds f3, f3, f0
lbl_fn_80189CB4_00000D38:
    lfs f0, lbl_80881ED4
    fcmpo cr0, f3, f0
    ble lbl_fn_80189CB4_00000D4C
    li r28, 0x158
    b lbl_fn_80189CB4_00000D50
lbl_fn_80189CB4_00000D4C:
    li r28, 0x159
lbl_fn_80189CB4_00000D50:
    lfs f1, lbl_80881ED4
    mr r3, r30
    lfs f2, lbl_80881EF0
    mr r5, r28
    li r4, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    lwz r4, 0x4(r29)
    lis r3, 0x51ec
    subi r3, r3, 0x7ae1
    lwz r0, 0x950(r4)
    mulhw r0, r3, r0
    srawi r0, r0, 5
    srwi r3, r0, 31
    add r3, r0, r3
    srawi r0, r3, 31
    andc r0, r3, r0
    cmpwi r0, 0x5
    ble lbl_fn_80189CB4_00000DAC
    li r0, 0x5
    b lbl_fn_80189CB4_00000DB4
lbl_fn_80189CB4_00000DAC:
    srawi r0, r3, 31
    andc r0, r3, r0
lbl_fn_80189CB4_00000DB4:
    lfs f3, 0x2e8(r4)
    slwi r0, r0, 3
    lfs f4, lbl_80881EC4
    addi r3, r31, 0x90
    lfsx f0, r3, r0
    fcmpo cr0, f4, f3
    bge lbl_fn_80189CB4_00000DD4
    b lbl_fn_80189CB4_00000DD8
lbl_fn_80189CB4_00000DD4:
    fmr f4, f3
lbl_fn_80189CB4_00000DD8:
    fmuls f0, f0, f4
    stfs f0, 0x234(r30)
    lwz r3, 0x4(r29)
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80189CB4_00000E40
    lwz r3, 0x50(r3)
    subis r0, r3, 0xa
    cmplwi r0, 0xae76
    beq lbl_fn_80189CB4_00000E0C
    cmplwi r0, 0xae77
    beq lbl_fn_80189CB4_00000E28
    b lbl_fn_80189CB4_00000E40
lbl_fn_80189CB4_00000E0C:
    lwz r3, 0x22c(r30)
    subi r0, r3, 0x156
    cmplwi r0, 0x1
    bgt lbl_fn_80189CB4_00000E40
    lfs f0, lbl_80881EF4
    stfs f0, 0x234(r30)
    b lbl_fn_80189CB4_00000E40
lbl_fn_80189CB4_00000E28:
    lwz r3, 0x22c(r30)
    subi r0, r3, 0x156
    cmplwi r0, 0x1
    bgt lbl_fn_80189CB4_00000E40
    lfs f0, lbl_80881EF8
    stfs f0, 0x234(r30)
lbl_fn_80189CB4_00000E40:
    lwz r3, lbl_8087F048
    lwz r4, 0x4(r29)
    bl fn_80106878
    lwz r3, 0x4(r29)
    addi r3, r3, 0xb0
    lwz r4, 0x22c(r3)
    bl fn_80097D40
    bl fn_80473F18
    bl fn_802097C4
    stw r3, 0x8(r29)
    lwz r0, lbl_8087F498
    cmpwi r0, 0x0
    beq lbl_fn_80189CB4_00000EA8
    bl fn_80680CF8
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    subf. r0, r4, r0
    bne lbl_fn_80189CB4_00000EA8
    lwz r3, lbl_8087F498
    li r5, 0x0
    lwz r4, 0x4(r29)
    li r6, 0x0
    lfs f1, lbl_80881EC4
    lfs f2, lbl_80881EB0
    bl fn_803EA77C
lbl_fn_80189CB4_00000EA8:
    psq_l f31, 0x258(r1), 0, 0
    mr r3, r29
    lfd f31, 0x250(r1)
    psq_l f30, 0x248(r1), 0, 0
    lfd f30, 0x240(r1)
    psq_l f29, 0x238(r1), 0, 0
    lfd f29, 0x230(r1)
    addi r11, r1, 0x230
    bl _restgpr_27
    lwz r0, 0x264(r1)
    mtlr r0
    addi r1, r1, 0x260
    blr
}

asm void fn_8018A490(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_8018A490_00000F04
    cmpwi r4, 0x0
    ble lbl_fn_8018A490_00000F04
    bl dtor_80084684
lbl_fn_8018A490_00000F04:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8018A4D0(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    stfd f31, 0x100(r1)
    psq_st f31, 0x108(r1), 0, 0
    stfd f30, 0xf0(r1)
    psq_st f30, 0xf8(r1), 0, 0
    stfd f29, 0xe0(r1)
    psq_st f29, 0xe8(r1), 0, 0
    stw r31, 0xdc(r1)
    mr r31, r3
    stw r30, 0xd8(r1)
    stw r29, 0xd4(r1)
    lwz r4, 0x4(r3)
    lwz r0, 0x674(r4)
    cmpwi r0, 0x0
    bge lbl_fn_8018A4D0_00000F68
    li r3, 0x1
    b lbl_fn_8018A4D0_000012E4
lbl_fn_8018A4D0_00000F68:
    lfs f3, lbl_80881EC0
    addi r30, r4, 0xb0
    lfs f0, 0x2e4(r4)
    lfs f4, 0x2e8(r4)
    fcmpo cr0, f0, f3
    bge lbl_fn_8018A4D0_00000FE8
    fadds f0, f0, f4
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_8018A4D0_00000FE8
    addi r29, r4, 0x528
    bl fn_80680CF8
    lis r5, 0x5555
    lis r4, lbl_80738F68@ha
    addi r0, r5, 0x5556
    lfs f1, lbl_80881EC4
    mulhw r8, r0, r3
    addi r4, r4, lbl_80738F68@l
    mr r5, r29
    li r6, 0x0
    li r7, -0x1
    srwi r0, r8, 31
    add r0, r8, r0
    mulli r0, r0, 0x3
    subf r0, r0, r3
    addi r3, r1, 0x8
    slwi r0, r0, 2
    lwzx r4, r4, r0
    bl fn_800C344C
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_8018A4D0_00000FE8:
    lwz r3, 0x4(r31)
    lfs f31, lbl_80881ED4
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8018A4D0_00001074
    lwz r3, lbl_8087F9C0
    lwz r0, 0x28(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8018A4D0_00001074
    lwz r0, 0x22c(r30)
    cmpwi r0, 0x162
    beq lbl_fn_8018A4D0_00001020
    cmpwi r0, 0x163
    bne lbl_fn_8018A4D0_00001074
lbl_fn_8018A4D0_00001020:
    lfs f3, 0x234(r30)
    lfs f0, lbl_80881EFC
    fcmpo cr0, f3, f0
    ble lbl_fn_8018A4D0_00001048
    lfs f0, lbl_80881EA8
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_8018A4D0_00001048
    lfs f31, lbl_80881EC4
    b lbl_fn_8018A4D0_00001074
lbl_fn_8018A4D0_00001048:
    lfs f29, 0x234(r30)
    mr r3, r30
    li r4, 0x0
    bl fn_80097D7C
    lfs f0, lbl_80881F00
    fsubs f0, f1, f0
    fcmpo cr0, f29, f0
    ble lbl_fn_8018A4D0_00001074
    lwz r3, 0x4(r31)
    lfs f0, lbl_80881ED4
    stfs f0, 0x570(r3)
lbl_fn_8018A4D0_00001074:
    lwz r3, 0x4(r31)
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8018A4D0_000010D0
    lwz r3, 0x50(r3)
    subis r0, r3, 0xa
    cmplwi r0, 0xae76
    bne lbl_fn_8018A4D0_000010D0
    lwz r0, 0x22c(r30)
    cmpwi r0, 0x156
    beq lbl_fn_8018A4D0_000010A8
    cmpwi r0, 0x157
    bne lbl_fn_8018A4D0_000010D0
lbl_fn_8018A4D0_000010A8:
    lfs f3, 0x234(r30)
    lfs f0, lbl_80881F04
    fcmpo cr0, f3, f0
    bge lbl_fn_8018A4D0_000010D0
    lfs f0, lbl_80881F0C
    fcmpo cr0, f3, f0
    ble lbl_fn_8018A4D0_000010CC
    lfs f31, lbl_80881EC4
    b lbl_fn_8018A4D0_000010D0
lbl_fn_8018A4D0_000010CC:
    lfs f31, lbl_80881F08
lbl_fn_8018A4D0_000010D0:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8018A4D0_00001100
    lwz r0, 0xc(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8018A4D0_00001100
    li r0, 0x1
    stw r0, 0xc(r31)
lbl_fn_8018A4D0_00001100:
    lfs f2, 0x18(r31)
    addi r30, r1, 0x54
    psq_l f1, 0x10(r31), 0, 0
    fabs f3, f2
    lfs f0, lbl_80881ED8
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0x5c(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_8018A4D0_0000114C
    lfs f3, 0x54(r1)
    lfs f0, lbl_80881ED4
    fcmpo cr0, f3, f0
    ble lbl_fn_8018A4D0_00001140
    lfs f0, lbl_80881EDC
    b lbl_fn_8018A4D0_00001144
lbl_fn_8018A4D0_00001140:
    lfs f0, lbl_80881EE0
lbl_fn_8018A4D0_00001144:
    stfs f0, 0x4c(r1)
    b lbl_fn_8018A4D0_00001160
lbl_fn_8018A4D0_0000114C:
    frsp f2, f2
    lfs f1, 0x54(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x4c(r1)
lbl_fn_8018A4D0_00001160:
    lfs f0, 0x4c(r1)
    addi r3, r1, 0x60
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80881ED4
    addi r4, r1, 0x3c
    lfs f29, 0x68(r1)
    mr r5, r4
    lfs f30, 0x64(r1)
    addi r3, r1, 0x90
    lfs f13, 0x60(r1)
    lfs f12, 0x78(r1)
    lfs f11, 0x74(r1)
    lfs f10, 0x70(r1)
    lfs f9, 0x88(r1)
    lfs f8, 0x84(r1)
    lfs f7, 0x80(r1)
    lfs f6, 0x8c(r1)
    lfs f5, 0x7c(r1)
    lfs f4, 0x6c(r1)
    lfs f0, lbl_80881EC4
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x5c(r1)
    stfs f3, 0xc0(r1)
    stfs f3, 0xc4(r1)
    stfs f3, 0xc8(r1)
    stfs f0, 0xcc(r1)
    stfs f13, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f29, 0x14(r1)
    stfs f13, 0x90(r1)
    stfs f30, 0x94(r1)
    stfs f29, 0x98(r1)
    stfs f10, 0x18(r1)
    stfs f11, 0x1c(r1)
    stfs f12, 0x20(r1)
    stfs f10, 0xa0(r1)
    stfs f11, 0xa4(r1)
    stfs f12, 0xa8(r1)
    stfs f7, 0x24(r1)
    stfs f8, 0x28(r1)
    stfs f9, 0x2c(r1)
    stfs f7, 0xb0(r1)
    stfs f8, 0xb4(r1)
    stfs f9, 0xb8(r1)
    stfs f4, 0x30(r1)
    stfs f5, 0x34(r1)
    stfs f6, 0x38(r1)
    stfs f4, 0x9c(r1)
    stfs f5, 0xac(r1)
    stfs f6, 0xbc(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x44(r1)
    bl fn_805F9750
    lfs f2, 0x44(r1)
    lfs f0, lbl_80881ED8
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8018A4D0_0000127C
    lfs f3, 0x40(r1)
    lfs f0, lbl_80881ED4
    fcmpo cr0, f3, f0
    ble lbl_fn_8018A4D0_0000126C
    lfs f0, lbl_80881EDC
    b lbl_fn_8018A4D0_00001270
lbl_fn_8018A4D0_0000126C:
    lfs f0, lbl_80881EE0
lbl_fn_8018A4D0_00001270:
    fneg f0, f0
    stfs f0, 0x48(r1)
    b lbl_fn_8018A4D0_00001290
lbl_fn_8018A4D0_0000127C:
    lfs f1, 0x40(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x48(r1)
lbl_fn_8018A4D0_00001290:
    lfs f0, lbl_80881ED4
    addi r3, r1, 0x48
    psq_l f1, 0x0(r3), 0, 0
    mr r4, r30
    fmr f2, f0
    psq_st f1, 0x0(r30), 0, 0
    fmr f1, f31
    li r5, 0x0
    stfs f2, 0x5c(r1)
    lfs f2, lbl_80881EC4
    lwz r3, 0x4(r31)
    stfs f0, 0x50(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    lwz r4, 0x4(r31)
    li r3, 0x0
    lfs f0, lbl_80881ED4
    stfs f0, 0x580(r4)
    stfs f0, 0x584(r4)
lbl_fn_8018A4D0_000012E4:
    lwz r0, 0x114(r1)
    psq_l f31, 0x108(r1), 0, 0
    lfd f31, 0x100(r1)
    psq_l f30, 0xf8(r1), 0, 0
    lfd f30, 0xf0(r1)
    psq_l f29, 0xe8(r1), 0, 0
    lfd f29, 0xe0(r1)
    lwz r31, 0xdc(r1)
    lwz r30, 0xd8(r1)
    lwz r29, 0xd4(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_8018A8CC(void)
{
    nofralloc
    stwu r1, -0x220(r1)
    mflr r0
    stw r0, 0x224(r1)
    addi r11, r1, 0x1f0
    stfd f31, 0x210(r1)
    psq_st f31, 0x218(r1), 0, 0
    stfd f30, 0x200(r1)
    psq_st f30, 0x208(r1), 0, 0
    stfd f29, 0x1f0(r1)
    psq_st f29, 0x1f8(r1), 0, 0
    bl _savegpr_26
    lis r6, lbl_8077D578@ha
    li r8, 0x0
    addi r6, r6, lbl_8077D578@l
    stw r6, 0x0(r3)
    lis r7, lbl_8077D478@ha
    lis r31, lbl_80738EF8@ha
    stw r4, 0x4(r3)
    addi r7, r7, lbl_8077D478@l
    li r6, 0x5
    li r0, 0x1
    stw r8, 0x8(r3)
    mr r26, r3
    lfs f0, lbl_80881EC4
    mr r27, r5
    stw r8, 0xc(r3)
    addi r31, r31, lbl_80738EF8@l
    psq_l f1, 0x0(r5), 0, 0
    lfs f2, 0x8(r5)
    stfs f2, 0x18(r3)
    psq_st f1, 0x10(r3), 0, 0
    stw r7, 0x0(r3)
    stw r6, 0x560(r4)
    lwz r4, 0x4(r3)
    stw r0, 0x3fc(r4)
    addi r30, r4, 0xb0
    stfs f0, 0x2fc(r4)
    lwz r12, 0x0(r3)
    lwz r12, 0x60(r12)
    mtctr r12
    bctrl
    stfs f1, 0x238(r30)
    lwz r6, 0x4(r26)
    lwz r0, 0x12a4(r6)
    lwz r29, 0x4d0(r6)
    srwi. r0, r0, 31
    beq lbl_fn_8018A8CC_000013DC
    lwz r29, 0x4e4(r6)
    b lbl_fn_8018A8CC_00001950
lbl_fn_8018A8CC_000013DC:
    lfs f2, 0x53c(r6)
    addi r5, r1, 0xbc
    psq_l f1, 0x534(r6), 0, 0
    addi r3, r1, 0x1a8
    lfs f3, lbl_80881ED4
    li r4, 0x79
    lfs f0, lbl_80881EC4
    stfs f3, 0xb0(r1)
    stfs f3, 0xb4(r1)
    stfs f0, 0xb8(r1)
    lfs f0, 0x538(r6)
    psq_st f1, 0x0(r5), 0, 0
    fmr f1, f0
    stfs f2, 0xc4(r1)
    bl fn_805F8E70
    addi r4, r1, 0xb0
    addi r3, r1, 0x1a8
    mr r5, r4
    bl fn_805F93C0
    mr r3, r27
    addi r4, r1, 0xb0
    bl fn_805F9990
    fmr f31, f1
    lfd f1, 0xc8(r31)
    bl fn_8068A850
    frsp f30, f1
    lfd f1, 0xd0(r31)
    bl fn_8068A850
    lwz r4, 0x4(r26)
    frsp f29, f1
    li r28, 0x0
    lwz r0, 0x48(r4)
    cntlzw r0, r0
    srwi. r0, r0, 5
    beq lbl_fn_8018A8CC_00001480
    lwz r3, lbl_8087F9C0
    lwz r0, 0x28(r3)
    cntlzw r0, r0
    srwi. r0, r0, 5
    bne lbl_fn_8018A8CC_00001480
    li r28, 0x1
lbl_fn_8018A8CC_00001480:
    lwz r3, 0x50(r4)
    subis r0, r3, 0xa
    cmplwi r0, 0xae76
    beq lbl_fn_8018A8CC_00001498
    cmplwi r0, 0xae77
    bne lbl_fn_8018A8CC_0000149C
lbl_fn_8018A8CC_00001498:
    li r28, 0x0
lbl_fn_8018A8CC_0000149C:
    mr r3, r30
    li r4, 0x158
    bl fn_80097D40
    cmpwi r3, 0x0
    beq lbl_fn_8018A8CC_00001950
    fcmpo cr0, f31, f30
    ble lbl_fn_8018A8CC_00001538
    lwz r4, 0x4(r26)
    lwz r0, 0x22c(r30)
    lwz r5, 0x4d0(r4)
    cmpw r0, r5
    beq lbl_fn_8018A8CC_000014D4
    cmpwi r0, 0x162
    bne lbl_fn_8018A8CC_00001508
lbl_fn_8018A8CC_000014D4:
    cmpwi r28, 0x0
    li r3, 0x0
    beq lbl_fn_8018A8CC_000014F0
    lwz r0, 0x64c(r4)
    cmpwi r0, 0x0
    bne lbl_fn_8018A8CC_000014F0
    li r3, 0x1
lbl_fn_8018A8CC_000014F0:
    cmpwi r3, 0x0
    beq lbl_fn_8018A8CC_00001500
    li r29, 0x163
    b lbl_fn_8018A8CC_00001950
lbl_fn_8018A8CC_00001500:
    lwz r29, 0x4d4(r4)
    b lbl_fn_8018A8CC_00001950
lbl_fn_8018A8CC_00001508:
    cmpwi r28, 0x0
    li r3, 0x0
    beq lbl_fn_8018A8CC_00001524
    lwz r0, 0x64c(r4)
    cmpwi r0, 0x0
    bne lbl_fn_8018A8CC_00001524
    li r3, 0x1
lbl_fn_8018A8CC_00001524:
    cmpwi r3, 0x0
    li r29, 0x162
    bne lbl_fn_8018A8CC_00001950
    mr r29, r5
    b lbl_fn_8018A8CC_00001950
lbl_fn_8018A8CC_00001538:
    fneg f0, f29
    fcmpo cr0, f31, f0
    bge lbl_fn_8018A8CC_0000174C
    lfs f2, 0x8(r27)
    addi r28, r1, 0xa4
    psq_l f1, 0x0(r27), 0, 0
    fabs f3, f2
    lfs f0, lbl_80881ED8
    psq_st f1, 0x0(r28), 0, 0
    frsp f3, f3
    stfs f2, 0xac(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_8018A8CC_00001590
    lfs f3, 0xa4(r1)
    lfs f0, lbl_80881ED4
    fcmpo cr0, f3, f0
    ble lbl_fn_8018A8CC_00001584
    lfs f0, lbl_80881EDC
    b lbl_fn_8018A8CC_00001588
lbl_fn_8018A8CC_00001584:
    lfs f0, lbl_80881EE0
lbl_fn_8018A8CC_00001588:
    stfs f0, 0x90(r1)
    b lbl_fn_8018A8CC_000015A4
lbl_fn_8018A8CC_00001590:
    frsp f2, f2
    lfs f1, 0xa4(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x90(r1)
lbl_fn_8018A8CC_000015A4:
    lfs f0, 0x90(r1)
    addi r3, r1, 0x138
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80881ED4
    addi r4, r1, 0x80
    lfs f30, 0x140(r1)
    mr r5, r4
    lfs f31, 0x13c(r1)
    addi r3, r1, 0x168
    lfs f13, 0x138(r1)
    lfs f12, 0x150(r1)
    lfs f11, 0x14c(r1)
    lfs f10, 0x148(r1)
    lfs f9, 0x160(r1)
    lfs f8, 0x15c(r1)
    lfs f7, 0x158(r1)
    lfs f6, 0x164(r1)
    lfs f5, 0x154(r1)
    lfs f4, 0x144(r1)
    lfs f0, lbl_80881EC4
    psq_l f1, 0x0(r28), 0, 0
    lfs f2, 0xac(r1)
    stfs f3, 0x198(r1)
    stfs f3, 0x19c(r1)
    stfs f3, 0x1a0(r1)
    stfs f0, 0x1a4(r1)
    stfs f13, 0x50(r1)
    stfs f31, 0x54(r1)
    stfs f30, 0x58(r1)
    stfs f13, 0x168(r1)
    stfs f31, 0x16c(r1)
    stfs f30, 0x170(r1)
    stfs f10, 0x5c(r1)
    stfs f11, 0x60(r1)
    stfs f12, 0x64(r1)
    stfs f10, 0x178(r1)
    stfs f11, 0x17c(r1)
    stfs f12, 0x180(r1)
    stfs f7, 0x68(r1)
    stfs f8, 0x6c(r1)
    stfs f9, 0x70(r1)
    stfs f7, 0x188(r1)
    stfs f8, 0x18c(r1)
    stfs f9, 0x190(r1)
    stfs f4, 0x74(r1)
    stfs f5, 0x78(r1)
    stfs f6, 0x7c(r1)
    stfs f4, 0x174(r1)
    stfs f5, 0x184(r1)
    stfs f6, 0x194(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x88(r1)
    bl fn_805F9750
    lfs f2, 0x88(r1)
    lfs f0, lbl_80881ED8
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8018A8CC_000016C0
    lfs f3, 0x84(r1)
    lfs f0, lbl_80881ED4
    fcmpo cr0, f3, f0
    ble lbl_fn_8018A8CC_000016B0
    lfs f0, lbl_80881EDC
    b lbl_fn_8018A8CC_000016B4
lbl_fn_8018A8CC_000016B0:
    lfs f0, lbl_80881EE0
lbl_fn_8018A8CC_000016B4:
    fneg f0, f0
    stfs f0, 0x8c(r1)
    b lbl_fn_8018A8CC_000016D4
lbl_fn_8018A8CC_000016C0:
    lfs f1, 0x84(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x8c(r1)
lbl_fn_8018A8CC_000016D4:
    addi r3, r1, 0x8c
    lfs f3, lbl_80881ED4
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    fmr f2, f3
    lfs f0, 0xc0(r1)
    lfs f4, 0xa8(r1)
    stfs f2, 0xac(r1)
    fsubs f1, f4, f0
    lfd f2, 0xd8(r31)
    stfs f3, 0x94(r1)
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_80881EE4
    fcmpo cr0, f3, f0
    ble lbl_fn_8018A8CC_0000171C
    lfs f0, lbl_80881EE8
    fsubs f3, f3, f0
lbl_fn_8018A8CC_0000171C:
    lfs f0, lbl_80881EEC
    fcmpo cr0, f3, f0
    bge lbl_fn_8018A8CC_00001730
    lfs f0, lbl_80881EE8
    fadds f3, f3, f0
lbl_fn_8018A8CC_00001730:
    lfs f0, lbl_80881ED4
    fcmpo cr0, f3, f0
    ble lbl_fn_8018A8CC_00001744
    li r29, 0x15a
    b lbl_fn_8018A8CC_00001950
lbl_fn_8018A8CC_00001744:
    li r29, 0x15b
    b lbl_fn_8018A8CC_00001950
lbl_fn_8018A8CC_0000174C:
    lfs f2, 0x8(r27)
    addi r28, r1, 0x98
    psq_l f1, 0x0(r27), 0, 0
    fabs f3, f2
    lfs f0, lbl_80881ED8
    psq_st f1, 0x0(r28), 0, 0
    frsp f3, f3
    stfs f2, 0xa0(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_8018A8CC_00001798
    lfs f3, 0x98(r1)
    lfs f0, lbl_80881ED4
    fcmpo cr0, f3, f0
    ble lbl_fn_8018A8CC_0000178C
    lfs f0, lbl_80881EDC
    b lbl_fn_8018A8CC_00001790
lbl_fn_8018A8CC_0000178C:
    lfs f0, lbl_80881EE0
lbl_fn_8018A8CC_00001790:
    stfs f0, 0x48(r1)
    b lbl_fn_8018A8CC_000017AC
lbl_fn_8018A8CC_00001798:
    frsp f2, f2
    lfs f1, 0x98(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_8018A8CC_000017AC:
    lfs f0, 0x48(r1)
    addi r3, r1, 0xc8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80881ED4
    addi r4, r1, 0x38
    lfs f31, 0xd0(r1)
    mr r5, r4
    lfs f30, 0xcc(r1)
    addi r3, r1, 0xf8
    lfs f13, 0xc8(r1)
    lfs f12, 0xe0(r1)
    lfs f11, 0xdc(r1)
    lfs f10, 0xd8(r1)
    lfs f9, 0xf0(r1)
    lfs f8, 0xec(r1)
    lfs f7, 0xe8(r1)
    lfs f6, 0xf4(r1)
    lfs f5, 0xe4(r1)
    lfs f4, 0xd4(r1)
    lfs f0, lbl_80881EC4
    psq_l f1, 0x0(r28), 0, 0
    lfs f2, 0xa0(r1)
    stfs f3, 0x128(r1)
    stfs f3, 0x12c(r1)
    stfs f3, 0x130(r1)
    stfs f0, 0x134(r1)
    stfs f13, 0x8(r1)
    stfs f30, 0xc(r1)
    stfs f31, 0x10(r1)
    stfs f13, 0xf8(r1)
    stfs f30, 0xfc(r1)
    stfs f31, 0x100(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0x108(r1)
    stfs f11, 0x10c(r1)
    stfs f12, 0x110(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0x118(r1)
    stfs f8, 0x11c(r1)
    stfs f9, 0x120(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0x104(r1)
    stfs f5, 0x114(r1)
    stfs f6, 0x124(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80881ED8
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8018A8CC_000018C8
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80881ED4
    fcmpo cr0, f3, f0
    ble lbl_fn_8018A8CC_000018B8
    lfs f0, lbl_80881EDC
    b lbl_fn_8018A8CC_000018BC
lbl_fn_8018A8CC_000018B8:
    lfs f0, lbl_80881EE0
lbl_fn_8018A8CC_000018BC:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_8018A8CC_000018DC
lbl_fn_8018A8CC_000018C8:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_8018A8CC_000018DC:
    addi r3, r1, 0x44
    lfs f3, lbl_80881ED4
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    fmr f2, f3
    lfs f0, 0xc0(r1)
    lfs f4, 0x9c(r1)
    stfs f2, 0xa0(r1)
    fsubs f1, f4, f0
    lfd f2, 0xd8(r31)
    stfs f3, 0x4c(r1)
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_80881EE4
    fcmpo cr0, f3, f0
    ble lbl_fn_8018A8CC_00001924
    lfs f0, lbl_80881EE8
    fsubs f3, f3, f0
lbl_fn_8018A8CC_00001924:
    lfs f0, lbl_80881EEC
    fcmpo cr0, f3, f0
    bge lbl_fn_8018A8CC_00001938
    lfs f0, lbl_80881EE8
    fadds f3, f3, f0
lbl_fn_8018A8CC_00001938:
    lfs f0, lbl_80881ED4
    fcmpo cr0, f3, f0
    ble lbl_fn_8018A8CC_0000194C
    li r29, 0x158
    b lbl_fn_8018A8CC_00001950
lbl_fn_8018A8CC_0000194C:
    li r29, 0x159
lbl_fn_8018A8CC_00001950:
    lfs f1, lbl_80881ED4
    mr r3, r30
    lfs f2, lbl_80881EF0
    mr r5, r29
    li r4, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    lwz r4, 0x4(r26)
    lis r3, 0x51ec
    subi r0, r3, 0x7ae1
    lwz r3, 0x950(r4)
    mulhw r0, r0, r3
    srawi r0, r0, 5
    srwi r3, r0, 31
    add r3, r0, r3
    srawi r0, r3, 31
    andc r0, r3, r0
    cmpwi r0, 0x5
    ble lbl_fn_8018A8CC_000019AC
    li r0, 0x5
    b lbl_fn_8018A8CC_000019B4
lbl_fn_8018A8CC_000019AC:
    srawi r0, r3, 31
    andc r0, r3, r0
lbl_fn_8018A8CC_000019B4:
    lfs f3, 0x2e8(r4)
    slwi r0, r0, 3
    lfs f4, lbl_80881EC4
    addi r3, r31, 0x90
    lfsx f0, r3, r0
    fcmpo cr0, f4, f3
    bge lbl_fn_8018A8CC_000019D4
    b lbl_fn_8018A8CC_000019D8
lbl_fn_8018A8CC_000019D4:
    fmr f4, f3
lbl_fn_8018A8CC_000019D8:
    fmuls f0, f0, f4
    stfs f0, 0x234(r30)
    lwz r3, 0x4(r26)
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8018A8CC_00001A40
    lwz r3, 0x50(r3)
    subis r0, r3, 0xa
    cmplwi r0, 0xae76
    beq lbl_fn_8018A8CC_00001A0C
    cmplwi r0, 0xae77
    beq lbl_fn_8018A8CC_00001A28
    b lbl_fn_8018A8CC_00001A40
lbl_fn_8018A8CC_00001A0C:
    lwz r3, 0x22c(r30)
    subi r0, r3, 0x156
    cmplwi r0, 0x1
    bgt lbl_fn_8018A8CC_00001A40
    lfs f0, lbl_80881EF4
    stfs f0, 0x234(r30)
    b lbl_fn_8018A8CC_00001A40
lbl_fn_8018A8CC_00001A28:
    lwz r3, 0x22c(r30)
    subi r0, r3, 0x156
    cmplwi r0, 0x1
    bgt lbl_fn_8018A8CC_00001A40
    lfs f0, lbl_80881EF8
    stfs f0, 0x234(r30)
lbl_fn_8018A8CC_00001A40:
    lwz r3, lbl_8087F048
    lwz r4, 0x4(r26)
    bl fn_80106878
    lwz r3, 0x4(r26)
    addi r3, r3, 0xb0
    lwz r4, 0x22c(r3)
    bl fn_80097D40
    bl fn_80473F18
    bl fn_802097C4
    stw r3, 0x8(r26)
    lwz r0, lbl_8087F498
    cmpwi r0, 0x0
    beq lbl_fn_8018A8CC_00001AA8
    bl fn_80680CF8
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    subf. r0, r4, r0
    bne lbl_fn_8018A8CC_00001AA8
    lwz r3, lbl_8087F498
    li r5, 0x0
    lwz r4, 0x4(r26)
    li r6, 0x0
    lfs f1, lbl_80881EC4
    lfs f2, lbl_80881EB0
    bl fn_803EA77C
lbl_fn_8018A8CC_00001AA8:
    psq_l f31, 0x218(r1), 0, 0
    mr r3, r26
    lfd f31, 0x210(r1)
    psq_l f30, 0x208(r1), 0, 0
    lfd f30, 0x200(r1)
    psq_l f29, 0x1f8(r1), 0, 0
    lfd f29, 0x1f0(r1)
    addi r11, r1, 0x1f0
    bl _restgpr_26
    lwz r0, 0x224(r1)
    mtlr r0
    addi r1, r1, 0x220
    blr
}
