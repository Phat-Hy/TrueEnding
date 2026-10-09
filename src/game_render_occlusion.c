#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_23(void);
extern void _restgpr_24(void);
extern void _restgpr_27(void);
extern void _savegpr_23(void);
extern void _savegpr_24(void);
extern void _savegpr_27(void);
extern void fn_8000D0F8(void);
extern void fn_8000D124(void);
extern void fn_8001047C(void);
extern void fn_800132EC(void);
extern void fn_8004D124(void);
extern void fn_80051A88(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_80092814(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800FAB80(void);
extern void fn_80139550(void);
extern void fn_80139F2C(void);
extern void fn_80139F3C(void);
extern void fn_8013A194(void);
extern void fn_8013CB68(void);
extern void fn_801404F8(void);
extern void fn_80148990(void);
extern void fn_8016E970(void);
extern void fn_802B0430(void);
extern void fn_802B07F0(void);
extern void fn_802B0D90(void);
extern void fn_802B12D8(void);
extern void fn_802B1744(void);
extern void fn_802B17AC(void);
extern void fn_802B19EC(void);
extern void fn_802B1B08(void);
extern void fn_802B1B50(void);
extern void fn_805A40BC(void);
extern void fn_805A4258(void);
extern void fn_805A4A20(void);
extern void fn_805F9920(void);
extern void fn_80680CF8(void);
extern void fn_80695720(void);

/* External data declarations */
extern u8 jumptable_80785E58[];
extern u8 jumptable_80785E94[];
extern u8 jumptable_80785ED0[];
extern u8 lbl_80746288[];
extern u8 lbl_807462A8[];

/* Small data declarations */
extern u32 lbl_8087D9E0;
extern u32 lbl_8087D9E4;
extern u32 lbl_8087F4A0;
extern u32 lbl_80883F30;
extern u32 lbl_80883F34;
extern u32 lbl_80883F3C;
extern u32 lbl_80883F40;
extern u32 lbl_80883F44;
extern u32 lbl_80883F4C;
extern u32 lbl_80883F58;
extern u32 lbl_80883F5C;
extern u32 lbl_80883F60;
extern u32 lbl_80883F64;
extern u32 lbl_80883F68;
extern u32 lbl_80883F6C;
extern u32 lbl_80883F70;
extern u32 lbl_80883F74;
extern u32 lbl_80883F78;
extern u32 lbl_80883F7C;
extern u32 lbl_80883F80;
extern u32 lbl_80883F84;
extern u32 lbl_80883F88;
extern u32 lbl_80883F8C;
extern u32 lbl_80883F90;
extern u32 lbl_80883F94;
extern u32 lbl_80883F98;
extern u32 lbl_80883F9C;
extern u32 lbl_80883FA0;
extern u32 lbl_80883FA4;
extern u32 lbl_80883FA8;
extern u32 lbl_80883FAC;
extern u32 lbl_80883FB0;
extern u32 lbl_80883FB4;
extern u32 lbl_80883FB8;
extern u32 lbl_80883FBC;
extern u32 lbl_80883FC0;
extern u32 lbl_80883FC4;
extern u32 lbl_80883FC8;
extern u32 lbl_80883FCC;
extern u32 lbl_80883FD0;
extern u32 lbl_80883FD4;
extern u32 lbl_80883FD8;

/* Function declarations */
void fn_802ADF34(void);
void fn_802AE070(void);
void fn_802AE0B8(void);
void fn_802AE558(void);
void fn_802AE674(void);
void fn_802AE954(void);
void fn_802AEABC(void);
void fn_802AEAC4(void);
void fn_802AEB08(void);
void fn_802AF264(void);
void fn_802AF7D8(void);

asm void fn_802ADF34(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_802ADF34_00000034
    lwz r12, 0x0(r3)
    li r4, 0x2
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    b lbl_fn_802ADF34_0000012C
lbl_fn_802ADF34_00000034:
    lwz r0, 0x58c(r3)
    cmpwi r0, 0xe
    bne lbl_fn_802ADF34_0000012C
    lwz r0, 0x14bc(r3)
    cmpwi r0, 0x5
    bne lbl_fn_802ADF34_0000007C
    lwz r4, 0x8(r4)
    lwz r0, 0x1544(r3)
    cmplw r4, r0
    bne lbl_fn_802ADF34_0000012C
    li r0, 0x6
    stw r0, 0x14dc(r3)
    li r4, 0xe
    lwz r12, 0x0(r3)
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    b lbl_fn_802ADF34_0000012C
lbl_fn_802ADF34_0000007C:
    cmpwi r0, 0x2
    beq lbl_fn_802ADF34_0000008C
    cmpwi r0, 0x0
    bne lbl_fn_802ADF34_0000012C
lbl_fn_802ADF34_0000008C:
    lwz r6, 0x940(r3)
    lis r0, 0x4330
    stw r0, 0x8(r1)
    lis r5, lbl_80746288@ha
    xoris r0, r6, 0x8000
    lfd f3, lbl_80746288@l(r5)
    stw r0, 0xc(r1)
    lfs f2, 0x7d8(r3)
    lfd f0, 0x8(r1)
    lfs f1, 0x1550(r3)
    fsubs f3, f0, f3
    lfs f0, lbl_80883F5C
    fdivs f2, f2, f3
    fmadds f1, f2, f2, f1
    stfs f1, 0x1550(r3)
    fcmpo cr0, f1, f0
    ble lbl_fn_802ADF34_000000F0
    li r0, 0x3
    stw r0, 0x14dc(r3)
    li r4, 0xe
    lwz r12, 0x0(r3)
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    b lbl_fn_802ADF34_0000012C
lbl_fn_802ADF34_000000F0:
    lwz r4, 0x8(r4)
    cmpwi r4, 0x0
    beq lbl_fn_802ADF34_0000012C
    lwz r0, 0x90(r4)
    rlwinm r4, r0, 0, 6, 6
    subis r0, r4, 0x200
    cmplwi r0, 0x0
    bne lbl_fn_802ADF34_0000012C
    li r0, 0x3
    stw r0, 0x14dc(r3)
    li r4, 0xe
    lwz r12, 0x0(r3)
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_802ADF34_0000012C:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802AE070(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x2
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_8016E970
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x6
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802AE0B8(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_23
    lfs f2, lbl_80883F40
    li r0, 0x0
    stfs f2, 0x8(r1)
    addi r4, r1, 0x8
    lfs f0, lbl_80883F5C
    addi r30, r1, 0x24
    stfs f2, 0xc(r1)
    mr r26, r3
    addi r29, r1, 0x14
    li r27, 0x0
    psq_l f1, 0x0(r4), 0, 0
    li r25, 0x0
    stw r0, 0x20(r1)
    lis r31, fn_80148990@ha
    li r28, 0x8
    stfs f2, 0x10(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x2c(r1)
    stfs f0, 0x30(r1)
    b lbl_fn_802AE0B8_00000600
lbl_fn_802AE0B8_000001E8:
    lwz r0, 0x1a34(r26)
    addi r3, r26, 0xb0
    add r4, r0, r25
    lwzx r0, r25, r0
    srwi. r0, r0, 31
    bne lbl_fn_802AE0B8_00000208
    addi r4, r4, 0x1
    b lbl_fn_802AE0B8_0000020C
lbl_fn_802AE0B8_00000208:
    lwz r4, 0x8(r4)
lbl_fn_802AE0B8_0000020C:
    li r5, 0x0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802AE0B8_00000224
    li r4, 0x0
    b lbl_fn_802AE0B8_00000230
lbl_fn_802AE0B8_00000224:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r26)
    add r4, r3, r0
lbl_fn_802AE0B8_00000230:
    lwz r0, 0x1a34(r26)
    lfs f2, 0x2c(r4)
    add r3, r0, r25
    lfs f4, 0x1c(r4)
    lfs f5, 0xc(r4)
    lwz r0, 0x62c(r26)
    lfs f3, 0x5b0(r26)
    lfs f0, 0xc(r3)
    cmpwi r0, 0x0
    stfs f5, 0x14(r1)
    fmuls f0, f3, f0
    stfs f4, 0x18(r1)
    psq_l f1, 0x0(r29), 0, 0
    stfs f2, 0x1c(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x2c(r1)
    stfs f0, 0x30(r1)
    beq lbl_fn_802AE0B8_00000284
    lwz r0, 0x628(r26)
    cmpwi r0, 0x0
    bne lbl_fn_802AE0B8_0000041C
lbl_fn_802AE0B8_00000284:
    lwz r0, 0x628(r26)
    cmplwi r0, 0x8
    bgt lbl_fn_802AE0B8_000005C0
    li r3, 0xb0
    li r4, 0x0
    la r5, lbl_8087D9E4
    la r6, lbl_8087D9E0
    li r7, 0x0
    bl fn_800846FC
    addi r4, r31, fn_80148990@l
    li r5, 0x0
    li r6, 0x14
    li r7, 0x8
    bl fn_80695720
    lwz r0, 0x62c(r26)
    mr r24, r3
    cmpwi r0, 0x0
    beq lbl_fn_802AE0B8_00000410
    lwz r0, 0x624(r26)
    li r5, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_802AE0B8_000002E0
    mr r5, r0
lbl_fn_802AE0B8_000002E0:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_802AE0B8_000003FC
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_802AE0B8_000003C4
lbl_fn_802AE0B8_000002F8:
    lwz r0, 0x62c(r26)
    add r6, r3, r4
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r26)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r26)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r26)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    bdnz lbl_fn_802AE0B8_000002F8
    andi. r5, r5, 0x3
    beq lbl_fn_802AE0B8_000003FC
lbl_fn_802AE0B8_000003C4:
    mtctr r5
lbl_fn_802AE0B8_000003C8:
    lwz r0, 0x62c(r26)
    add r6, r3, r4
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    bdnz lbl_fn_802AE0B8_000003C8
lbl_fn_802AE0B8_000003FC:
    lwz r3, 0x62c(r26)
    cmpwi r3, 0x0
    beq lbl_fn_802AE0B8_00000410
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_802AE0B8_00000410:
    stw r24, 0x62c(r26)
    stw r28, 0x628(r26)
    b lbl_fn_802AE0B8_000005C0
lbl_fn_802AE0B8_0000041C:
    lwz r3, 0x624(r26)
    cmplw r3, r0
    blt lbl_fn_802AE0B8_000005C0
    slwi r24, r3, 1
    cmplw r0, r24
    bgt lbl_fn_802AE0B8_000005C0
    mulli r3, r24, 0x14
    li r4, 0x0
    la r5, lbl_8087D9E4
    la r6, lbl_8087D9E0
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    mr r7, r24
    addi r4, r31, fn_80148990@l
    li r5, 0x0
    li r6, 0x14
    bl fn_80695720
    lwz r0, 0x62c(r26)
    mr r23, r3
    cmpwi r0, 0x0
    beq lbl_fn_802AE0B8_000005B8
    lwz r0, 0x624(r26)
    mr r5, r24
    cmplw r24, r0
    ble lbl_fn_802AE0B8_00000488
    mr r5, r0
lbl_fn_802AE0B8_00000488:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_802AE0B8_000005A4
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_802AE0B8_0000056C
lbl_fn_802AE0B8_000004A0:
    lwz r0, 0x62c(r26)
    add r6, r3, r4
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r26)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r26)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r26)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    bdnz lbl_fn_802AE0B8_000004A0
    andi. r5, r5, 0x3
    beq lbl_fn_802AE0B8_000005A4
lbl_fn_802AE0B8_0000056C:
    mtctr r5
lbl_fn_802AE0B8_00000570:
    lwz r0, 0x62c(r26)
    add r6, r3, r4
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    bdnz lbl_fn_802AE0B8_00000570
lbl_fn_802AE0B8_000005A4:
    lwz r3, 0x62c(r26)
    cmpwi r3, 0x0
    beq lbl_fn_802AE0B8_000005B8
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_802AE0B8_000005B8:
    stw r23, 0x62c(r26)
    stw r24, 0x628(r26)
lbl_fn_802AE0B8_000005C0:
    lwz r0, 0x624(r26)
    addi r27, r27, 0x1
    lwz r4, 0x62c(r26)
    addi r25, r25, 0x20
    mulli r3, r0, 0x14
    lwz r0, 0x20(r1)
    stwux r0, r3, r4
    psq_l f1, 0x0(r30), 0, 0
    psq_st f1, 0x4(r3), 0, 0
    lfs f2, 0x2c(r1)
    stfs f2, 0xc(r3)
    lfs f0, 0x30(r1)
    stfs f0, 0x10(r3)
    lwz r3, 0x624(r26)
    addi r0, r3, 0x1
    stw r0, 0x624(r26)
lbl_fn_802AE0B8_00000600:
    lwz r0, 0x1a38(r26)
    cmplw r27, r0
    blt lbl_fn_802AE0B8_000001E8
    addi r11, r1, 0x60
    bl _restgpr_23
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_802AE558(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    lwz r0, 0x624(r3)
    mr r30, r3
    cmpwi r0, 0x0
    beq lbl_fn_802AE558_00000728
    addi r27, r1, 0x8
    li r31, 0x0
    li r29, 0x0
    li r28, 0x0
    b lbl_fn_802AE558_000006FC
lbl_fn_802AE558_0000065C:
    lwz r4, 0x1a34(r30)
    addi r3, r30, 0xb0
    lfs f3, 0x5b0(r30)
    add r4, r4, r29
    lwz r0, 0x62c(r30)
    lfs f0, 0xc(r4)
    add r4, r0, r28
    fmuls f0, f3, f0
    stfs f0, 0x10(r4)
    lwz r0, 0x1a34(r30)
    add r4, r0, r29
    lwzx r0, r29, r0
    srwi. r0, r0, 31
    bne lbl_fn_802AE558_0000069C
    addi r4, r4, 0x1
    b lbl_fn_802AE558_000006A0
lbl_fn_802AE558_0000069C:
    lwz r4, 0x8(r4)
lbl_fn_802AE558_000006A0:
    li r5, 0x0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802AE558_000006B8
    li r3, 0x0
    b lbl_fn_802AE558_000006C4
lbl_fn_802AE558_000006B8:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r3, r3, r0
lbl_fn_802AE558_000006C4:
    lfs f0, 0x1c(r3)
    addi r31, r31, 0x1
    lfs f3, 0xc(r3)
    addi r29, r29, 0x20
    lfs f2, 0x2c(r3)
    lwz r0, 0x62c(r30)
    stfs f3, 0x8(r1)
    add r3, r0, r28
    addi r28, r28, 0x14
    stfs f0, 0xc(r1)
    psq_l f1, 0x0(r27), 0, 0
    psq_st f1, 0x4(r3), 0, 0
    stfs f2, 0x10(r1)
    stfs f2, 0xc(r3)
lbl_fn_802AE558_000006FC:
    lwz r0, 0x1a38(r30)
    cmplw r31, r0
    blt lbl_fn_802AE558_0000065C
    lwz r0, 0x58c(r30)
    cmpwi r0, 0xb
    bne lbl_fn_802AE558_00000728
    lwz r3, 0x62c(r30)
    lfs f0, lbl_80883F60
    lfs f3, 0x1c(r3)
    fsubs f0, f3, f0
    stfs f0, 0x1c(r3)
lbl_fn_802AE558_00000728:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_802AE674(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    addi r11, r1, 0x80
    stfd f31, 0x80(r1)
    psq_st f31, 0x88(r1), 0, 0
    bl _savegpr_24
    lfs f5, 0x52c(r3)
    lis r4, lbl_807462A8@ha
    lfs f4, 0x5a8(r3)
    addi r4, r4, lbl_807462A8@l
    lfs f3, 0x528(r3)
    addi r5, r1, 0x38
    fadds f5, f5, f4
    lfs f0, 0x5a4(r3)
    lfs f4, 0x5b0(r3)
    mr r26, r3
    fadds f0, f3, f0
    stfs f5, 0x3c(r1)
    stfs f0, 0x38(r1)
    addi r4, r4, 0x19a
    lfs f3, 0x530(r3)
    psq_l f1, 0x0(r5), 0, 0
    li r5, 0x0
    lfs f0, 0x5ac(r3)
    psq_st f1, 0x614(r3), 0, 0
    fadds f2, f3, f0
    lfs f0, lbl_80883F3C
    lfs f3, 0x618(r3)
    fmuls f31, f0, f4
    stfs f4, 0x620(r3)
    fadds f3, f3, f4
    stfs f2, 0x40(r1)
    stfs f2, 0x61c(r3)
    stfs f3, 0x618(r3)
    addi r3, r3, 0xb0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802AE674_000007E4
    li r4, 0x0
    b lbl_fn_802AE674_000007F0
lbl_fn_802AE674_000007E4:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r26)
    add r4, r3, r0
lbl_fn_802AE674_000007F0:
    lfs f0, 0x1c(r4)
    lis r3, lbl_807462A8@ha
    lfs f3, 0xc(r4)
    addi r7, r1, 0x2c
    stfs f3, 0x2c(r1)
    addi r6, r1, 0x50
    lfs f2, 0x2c(r4)
    addi r3, r3, lbl_807462A8@l
    stfs f0, 0x30(r1)
    addi r4, r3, 0x1a1
    addi r3, r26, 0xb0
    li r5, 0x0
    psq_l f1, 0x0(r7), 0, 0
    stfs f2, 0x34(r1)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x58(r1)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802AE674_00000844
    li r4, 0x0
    b lbl_fn_802AE674_00000850
lbl_fn_802AE674_00000844:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r26)
    add r4, r3, r0
lbl_fn_802AE674_00000850:
    lfs f0, 0x1c(r4)
    addi r3, r1, 0x20
    lfs f3, 0xc(r4)
    addi r31, r1, 0x44
    stfs f0, 0x24(r1)
    addi r30, r1, 0x50
    lfs f4, 0x2c(r4)
    addi r29, r1, 0x14
    stfs f3, 0x20(r1)
    addi r28, r1, 0x8
    fmr f2, f4
    lfs f0, lbl_80883F4C
    psq_l f1, 0x0(r3), 0, 0
    li r27, 0x0
    psq_st f1, 0x0(r31), 0, 0
    li r25, 0x0
    lfs f3, 0x48(r1)
    li r24, 0x0
    stfs f2, 0x4c(r1)
    fsubs f0, f3, f0
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x58(r1)
    stfs f2, 0x5fc(r26)
    lfs f2, 0x4c(r1)
    stfs f0, 0x48(r1)
    psq_st f1, 0x5f4(r26), 0, 0
    psq_l f1, 0x0(r31), 0, 0
    stfs f4, 0x28(r1)
    psq_st f1, 0x600(r26), 0, 0
    stfs f2, 0x608(r26)
    stfs f31, 0x60c(r26)
    b lbl_fn_802AE674_000009F4
lbl_fn_802AE674_000008D0:
    lwz r0, 0x1558(r26)
    addi r3, r26, 0xb0
    lfs f3, 0x5b0(r26)
    add r4, r0, r24
    lwzx r0, r24, r0
    lfs f0, 0x18(r4)
    srwi. r0, r0, 31
    fmuls f31, f3, f0
    bne lbl_fn_802AE674_000008FC
    addi r4, r4, 0x1
    b lbl_fn_802AE674_00000900
lbl_fn_802AE674_000008FC:
    lwz r4, 0x8(r4)
lbl_fn_802AE674_00000900:
    li r5, 0x0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802AE674_00000918
    li r5, 0x0
    b lbl_fn_802AE674_00000924
lbl_fn_802AE674_00000918:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r26)
    add r5, r3, r0
lbl_fn_802AE674_00000924:
    lwz r0, 0x1558(r26)
    addi r3, r26, 0xb0
    lfs f2, 0x2c(r5)
    add r4, r0, r24
    lfs f0, 0x1c(r5)
    lfs f3, 0xc(r5)
    lwz r0, 0xc(r4)
    stfs f3, 0x14(r1)
    srwi. r0, r0, 31
    stfs f0, 0x18(r1)
    psq_l f1, 0x0(r29), 0, 0
    stfs f2, 0x1c(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x58(r1)
    bne lbl_fn_802AE674_00000968
    addi r4, r4, 0xd
    b lbl_fn_802AE674_0000096C
lbl_fn_802AE674_00000968:
    lwz r4, 0x14(r4)
lbl_fn_802AE674_0000096C:
    li r5, 0x0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802AE674_00000984
    li r4, 0x0
    b lbl_fn_802AE674_00000990
lbl_fn_802AE674_00000984:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r26)
    add r4, r3, r0
lbl_fn_802AE674_00000990:
    lfs f3, 0x1c(r4)
    add r3, r26, r25
    lfs f4, 0xc(r4)
    addi r5, r3, 0x15a0
    lfs f0, 0x2c(r4)
    addi r4, r3, 0x15ac
    stfs f4, 0x8(r1)
    addi r27, r27, 0x1
    fmr f2, f0
    addi r25, r25, 0x58
    stfs f3, 0xc(r1)
    addi r24, r24, 0x1c
    psq_l f1, 0x0(r28), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_l f1, 0x0(r30), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    psq_l f1, 0x0(r31), 0, 0
    stfs f2, 0x4c(r1)
    lfs f2, 0x58(r1)
    stfs f2, 0x15a8(r3)
    lfs f2, 0x4c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x15b4(r3)
    stfs f0, 0x10(r1)
    stfs f31, 0x15b8(r3)
lbl_fn_802AE674_000009F4:
    lwz r0, 0x155c(r26)
    cmplw r27, r0
    blt lbl_fn_802AE674_000008D0
    addi r11, r1, 0x80
    psq_l f31, 0x88(r1), 0, 0
    lfd f31, 0x80(r1)
    bl _restgpr_24
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_802AE954(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    addi r11, r1, 0x70
    stfd f31, 0x70(r1)
    psq_st f31, 0x78(r1), 0, 0
    bl _savegpr_23
    lwz r4, lbl_8087F4A0
    mr r23, r3
    lfs f31, lbl_80883F40
    addi r27, r1, 0x8
    lwz r26, 0x48(r4)
    addi r28, r1, 0x18
    li r29, 0x0
    li r30, 0x4
    b lbl_fn_802AE954_00000B60
lbl_fn_802AE954_00000A60:
    lwz r0, 0x50(r26)
    cmpwi r0, 0x1
    bne lbl_fn_802AE954_00000B5C
    lwz r12, 0x0(r26)
    mr r3, r26
    lwz r12, 0x5c(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_802AE954_00000B5C
    lwz r12, 0x0(r26)
    mr r3, r26
    lwz r12, 0x50(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_802AE954_00000B5C
    psq_l f1, 0x3c(r3), 0, 0
    li r25, 0x0
    lfs f2, 0x44(r3)
    li r24, 0x0
    stfs f2, 0x20(r1)
    li r31, 0x0
    psq_st f1, 0x0(r28), 0, 0
    lfs f0, 0x48(r3)
    stfs f0, 0x24(r1)
    b lbl_fn_802AE954_00000B10
lbl_fn_802AE954_00000ACC:
    lwz r0, 0x62c(r23)
    mr r4, r27
    addi r3, r1, 0x18
    add r5, r0, r31
    psq_l f1, 0x4(r5), 0, 0
    lfs f2, 0xc(r5)
    stfs f2, 0x10(r1)
    psq_st f1, 0x0(r27), 0, 0
    lfs f0, 0x10(r5)
    stfs f0, 0x14(r1)
    bl fn_80051A88
    cmpwi r3, 0x0
    beq lbl_fn_802AE954_00000B08
    li r25, 0x1
    b lbl_fn_802AE954_00000B1C
lbl_fn_802AE954_00000B08:
    addi r24, r24, 0x1
    addi r31, r31, 0x14
lbl_fn_802AE954_00000B10:
    lwz r0, 0x1a38(r23)
    cmplw r24, r0
    blt lbl_fn_802AE954_00000ACC
lbl_fn_802AE954_00000B1C:
    cmpwi r25, 0x0
    beq lbl_fn_802AE954_00000B5C
    stw r29, 0x2c(r1)
    mr r3, r26
    addi r4, r1, 0x28
    stw r29, 0x30(r1)
    stw r29, 0x34(r1)
    stw r29, 0x38(r1)
    stfs f31, 0x3c(r1)
    stfs f31, 0x40(r1)
    stfs f31, 0x44(r1)
    stw r30, 0x28(r1)
    lwz r12, 0x0(r26)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
lbl_fn_802AE954_00000B5C:
    lwz r26, 0x5c(r26)
lbl_fn_802AE954_00000B60:
    cmpwi r26, 0x0
    bne lbl_fn_802AE954_00000A60
    addi r11, r1, 0x70
    psq_l f31, 0x78(r1), 0, 0
    lfd f31, 0x70(r1)
    bl _restgpr_23
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_802AEABC(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_802AEAC4(void)
{
    nofralloc
    psq_l f1, 0x528(r4), 0, 0
    cmpwi r5, 0x0
    lfs f2, 0x530(r4)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
    bne lbl_fn_802AEAC4_00000BC0
    lwz r4, 0x62c(r4)
    psq_l f1, 0x40(r4), 0, 0
    lfs f2, 0x48(r4)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
    blr
lbl_fn_802AEAC4_00000BC0:
    psq_l f1, 0x528(r4), 0, 0
    lfs f2, 0x530(r4)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
    blr
}

asm void fn_802AEB08(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 29
    bne lbl_fn_802AEB08_0000131C
    lwz r0, 0x14cc(r3)
    li r5, 0x0
    lwz r6, 0x14dc(r3)
    lwz r7, 0x14c0(r3)
    clrlwi r0, r0, 4
    oris r0, r0, 0x800
    cmpwi r6, 0x0
    stw r5, 0x14bc(r3)
    stw r5, 0x14c0(r3)
    stw r5, 0x14c4(r3)
    stw r5, 0x14c8(r3)
    stw r0, 0x14cc(r3)
    stw r5, 0x14d0(r3)
    beq lbl_fn_802AEB08_00000C34
    stw r6, 0x14bc(r3)
    stw r7, 0x14c0(r3)
lbl_fn_802AEB08_00000C34:
    lwz r5, 0xd1c(r3)
    lwz r6, 0x58c(r3)
    cmpwi r5, 0x0
    stw r4, 0x14d8(r3)
    stw r4, 0x58c(r3)
    beq lbl_fn_802AEB08_00000C60
    psq_l f1, 0x528(r5), 0, 0
    addi r4, r3, 0x1500
    lfs f2, 0x530(r5)
    stfs f2, 0x1508(r3)
    psq_st f1, 0x0(r4), 0, 0
lbl_fn_802AEB08_00000C60:
    lwz r0, 0x58c(r3)
    cmpwi r0, 0xe
    bne lbl_fn_802AEB08_00000C78
    li r0, 0x0
    stw r0, 0x1454(r3)
    b lbl_fn_802AEB08_00000C80
lbl_fn_802AEB08_00000C78:
    li r0, 0x1
    stw r0, 0x1454(r3)
lbl_fn_802AEB08_00000C80:
    lwz r0, 0x58c(r3)
    cmplwi r0, 0xe
    bgt lbl_fn_802AEB08_00001314
    lis r4, jumptable_80785E58@ha
    slwi r0, r0, 2
    addi r4, r4, jumptable_80785E58@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    lwz r0, 0x14cc(r3)
    mr r5, r31
    li r4, 0x0
    oris r0, r0, 0x4000
    stw r0, 0x14cc(r3)
    b lbl_fn_802AEB08_00000CD0
lbl_fn_802AEB08_00000CBC:
    lwz r0, 0x156c(r5)
    addi r4, r4, 0x1
    ori r0, r0, 0x1
    stw r0, 0x156c(r5)
    addi r5, r5, 0x58
lbl_fn_802AEB08_00000CD0:
    lwz r0, 0x155c(r3)
    cmplw r4, r0
    blt lbl_fn_802AEB08_00000CBC
    b lbl_fn_802AEB08_00001314
    lfs f3, 0x1524(r3)
    lfs f0, lbl_80883F64
    fabs f4, f3
    lfs f2, lbl_80883F40
    frsp f4, f4
    fcmpo cr0, f4, f0
    fabs f4, f2
    lfs f0, lbl_80883F64
    frsp f4, f4
    fcmpo cr0, f4, f0
    bge lbl_fn_802AEB08_00000D10
    lfs f2, 0x1528(r3)
lbl_fn_802AEB08_00000D10:
    lfs f0, lbl_80883F4C
    li r0, 0x1
    stw r0, 0x3fc(r3)
    li r4, 0x0
    lfs f1, lbl_80883F40
    li r5, 0x2
    stfs f0, 0x2fc(r3)
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    stfs f3, 0x2e8(r3)
    addi r3, r3, 0xb0
    bl fn_80097C08
    b lbl_fn_802AEB08_00001314
    lfs f0, lbl_80883F68
    lfs f3, 0x1524(r3)
    lwz r0, 0xd1c(r3)
    fmuls f4, f0, f3
    lfs f0, lbl_80883F64
    stw r0, 0x14ec(r3)
    lfs f2, lbl_80883F40
    fabs f5, f4
    frsp f5, f5
    fcmpo cr0, f5, f0
    bge lbl_fn_802AEB08_00000D78
    fmr f4, f3
lbl_fn_802AEB08_00000D78:
    fabs f3, f2
    lfs f0, lbl_80883F64
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802AEB08_00000D90
    lfs f2, 0x1528(r3)
lbl_fn_802AEB08_00000D90:
    lfs f0, lbl_80883F4C
    li r0, 0x1
    stw r0, 0x3fc(r3)
    li r4, 0x0
    lfs f1, lbl_80883F40
    li r5, 0x1c7
    stfs f0, 0x2fc(r3)
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    stfs f4, 0x2e8(r3)
    addi r3, r3, 0xb0
    bl fn_80097C08
    b lbl_fn_802AEB08_00001314
    lwz r0, 0x14bc(r3)
    cmpwi r0, 0x1
    bne lbl_fn_802AEB08_00000E4C
    lfs f4, lbl_80883F68
    lfs f3, 0x1524(r3)
    lfs f0, lbl_80883F64
    fmuls f4, f4, f3
    lfs f2, lbl_80883F40
    fabs f5, f4
    frsp f5, f5
    fcmpo cr0, f5, f0
    bge lbl_fn_802AEB08_00000DFC
    fmr f4, f3
lbl_fn_802AEB08_00000DFC:
    fabs f3, f2
    lfs f0, lbl_80883F64
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802AEB08_00000E14
    lfs f2, 0x1528(r3)
lbl_fn_802AEB08_00000E14:
    lfs f0, lbl_80883F4C
    li r0, 0x1
    stw r0, 0x3fc(r3)
    li r4, 0x0
    lfs f1, lbl_80883F40
    li r5, 0x14
    stfs f0, 0x2fc(r3)
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    stfs f4, 0x2e8(r3)
    addi r3, r3, 0xb0
    bl fn_80097C08
    b lbl_fn_802AEB08_00001314
lbl_fn_802AEB08_00000E4C:
    cmpwi r0, -0x1
    bne lbl_fn_802AEB08_00001314
    lfs f4, lbl_80883F68
    lfs f3, 0x1524(r3)
    lfs f0, lbl_80883F64
    fmuls f4, f4, f3
    lfs f2, lbl_80883F40
    fabs f5, f4
    frsp f5, f5
    fcmpo cr0, f5, f0
    bge lbl_fn_802AEB08_00000E7C
    fmr f4, f3
lbl_fn_802AEB08_00000E7C:
    fabs f3, f2
    lfs f0, lbl_80883F64
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802AEB08_00000E94
    lfs f2, 0x1528(r3)
lbl_fn_802AEB08_00000E94:
    lfs f0, lbl_80883F4C
    li r0, 0x1
    stw r0, 0x3fc(r3)
    li r4, 0x0
    lfs f1, lbl_80883F40
    li r5, 0x1c7
    stfs f0, 0x2fc(r3)
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    stfs f4, 0x2e8(r3)
    addi r3, r3, 0xb0
    bl fn_80097C08
    b lbl_fn_802AEB08_00001314
    lfs f4, lbl_80883F68
    li r0, 0x0
    lfs f3, 0x1524(r3)
    lfs f0, lbl_80883F64
    fmuls f4, f4, f3
    stw r0, 0x150c(r3)
    lfs f2, lbl_80883F40
    fabs f5, f4
    frsp f5, f5
    fcmpo cr0, f5, f0
    bge lbl_fn_802AEB08_00000EFC
    fmr f4, f3
lbl_fn_802AEB08_00000EFC:
    fabs f3, f2
    lfs f0, lbl_80883F64
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802AEB08_00000F14
    lfs f2, 0x1528(r3)
lbl_fn_802AEB08_00000F14:
    lfs f0, lbl_80883F4C
    li r0, 0x1
    stw r0, 0x3fc(r3)
    li r4, 0x0
    lfs f1, lbl_80883F40
    li r5, 0x1c7
    stfs f0, 0x2fc(r3)
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    stfs f4, 0x2e8(r3)
    addi r3, r3, 0xb0
    bl fn_80097C08
    b lbl_fn_802AEB08_00001314
    mr r3, r31
    li r4, 0xb
    li r5, 0x0
    bl fn_802B0430
    cmpwi r3, 0x0
    bne lbl_fn_802AEB08_00000FCC
    lfs f3, 0x1524(r31)
    lfs f0, lbl_80883F64
    fabs f4, f3
    lfs f2, lbl_80883F40
    frsp f4, f4
    fcmpo cr0, f4, f0
    fabs f4, f2
    lfs f0, lbl_80883F64
    frsp f4, f4
    fcmpo cr0, f4, f0
    bge lbl_fn_802AEB08_00000F94
    lfs f2, 0x1528(r31)
lbl_fn_802AEB08_00000F94:
    lfs f0, lbl_80883F4C
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80883F40
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x156
    li r6, 0x0
    li r7, 0x0
    stfs f3, 0x2e8(r31)
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_802AEB08_00001314
lbl_fn_802AEB08_00000FCC:
    stw r3, 0x14dc(r31)
    li r0, 0xb
    mr r3, r31
    li r4, 0x9
    stw r0, 0x14e0(r31)
    lwz r12, 0x0(r31)
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    b lbl_fn_802AEB08_00001314
    mr r3, r31
    li r4, 0xb
    li r5, 0x0
    bl fn_802B0430
    cmpwi r3, 0x0
    bne lbl_fn_802AEB08_00001074
    lfs f3, 0x1524(r31)
    lfs f0, lbl_80883F64
    fabs f4, f3
    lfs f2, lbl_80883F40
    frsp f4, f4
    fcmpo cr0, f4, f0
    fabs f4, f2
    lfs f0, lbl_80883F64
    frsp f4, f4
    fcmpo cr0, f4, f0
    bge lbl_fn_802AEB08_0000103C
    lfs f2, 0x1528(r31)
lbl_fn_802AEB08_0000103C:
    lfs f0, lbl_80883F4C
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80883F40
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x145
    li r6, 0x0
    li r7, 0x0
    stfs f3, 0x2e8(r31)
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_802AEB08_00001314
lbl_fn_802AEB08_00001074:
    stw r3, 0x14dc(r31)
    li r0, 0xc
    mr r3, r31
    li r4, 0x9
    stw r0, 0x14e0(r31)
    lwz r12, 0x0(r31)
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    b lbl_fn_802AEB08_00001314
    lfs f4, lbl_80883F6C
    li r0, 0x0
    lfs f3, 0x1524(r3)
    lfs f0, lbl_80883F64
    fmuls f4, f4, f3
    stw r0, 0x14bc(r3)
    lfs f2, lbl_80883F40
    fabs f5, f4
    frsp f5, f5
    fcmpo cr0, f5, f0
    bge lbl_fn_802AEB08_000010CC
    fmr f4, f3
lbl_fn_802AEB08_000010CC:
    fabs f3, f2
    lfs f0, lbl_80883F64
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802AEB08_000010E4
    lfs f2, 0x1528(r3)
lbl_fn_802AEB08_000010E4:
    lfs f0, lbl_80883F4C
    li r0, 0x1
    stw r0, 0x3fc(r3)
    li r4, 0x0
    lfs f1, lbl_80883F40
    li r5, 0x13f
    stfs f0, 0x2fc(r3)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    stfs f4, 0x2e8(r3)
    addi r3, r3, 0xb0
    bl fn_80097C08
    b lbl_fn_802AEB08_00001314
    lwz r0, 0x14bc(r3)
    cmpwi r0, 0x6
    bne lbl_fn_802AEB08_000011A0
    lfs f4, lbl_80883F68
    lfs f3, 0x1524(r3)
    lfs f0, lbl_80883F64
    fmuls f4, f4, f3
    lfs f2, lbl_80883F40
    fabs f5, f4
    frsp f5, f5
    fcmpo cr0, f5, f0
    bge lbl_fn_802AEB08_00001150
    fmr f4, f3
lbl_fn_802AEB08_00001150:
    fabs f3, f2
    lfs f0, lbl_80883F64
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802AEB08_00001168
    lfs f2, 0x1528(r3)
lbl_fn_802AEB08_00001168:
    lfs f0, lbl_80883F4C
    li r0, 0x1
    stw r0, 0x3fc(r3)
    li r4, 0x0
    lfs f1, lbl_80883F40
    li r5, 0x31
    stfs f0, 0x2fc(r3)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    stfs f4, 0x2e8(r3)
    addi r3, r3, 0xb0
    bl fn_80097C08
    b lbl_fn_802AEB08_00001314
lbl_fn_802AEB08_000011A0:
    cmpwi r0, 0x0
    bne lbl_fn_802AEB08_00001238
    lfs f0, lbl_80883F40
    addi r4, r31, 0x1a84
    stfs f0, 0x1550(r3)
    mr r3, r31
    li r5, 0x1
    bl fn_805A4A20
    lfs f4, lbl_80883F68
    lfs f3, 0x1524(r31)
    lfs f0, lbl_80883F64
    fmuls f4, f4, f3
    lfs f2, lbl_80883F40
    fabs f5, f4
    frsp f5, f5
    fcmpo cr0, f5, f0
    bge lbl_fn_802AEB08_000011E8
    fmr f4, f3
lbl_fn_802AEB08_000011E8:
    fabs f3, f2
    lfs f0, lbl_80883F64
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802AEB08_00001200
    lfs f2, 0x1528(r31)
lbl_fn_802AEB08_00001200:
    lfs f0, lbl_80883F4C
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80883F40
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x35
    li r6, 0x0
    li r7, 0x0
    stfs f4, 0x2e8(r31)
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_802AEB08_00001314
lbl_fn_802AEB08_00001238:
    lfs f4, lbl_80883F68
    lfs f3, 0x1524(r3)
    lfs f0, lbl_80883F64
    fmuls f4, f4, f3
    lfs f2, lbl_80883F40
    fabs f5, f4
    frsp f5, f5
    fcmpo cr0, f5, f0
    bge lbl_fn_802AEB08_00001260
    fmr f4, f3
lbl_fn_802AEB08_00001260:
    fabs f3, f2
    lfs f0, lbl_80883F64
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802AEB08_00001278
    lfs f2, 0x1528(r3)
lbl_fn_802AEB08_00001278:
    lfs f0, lbl_80883F4C
    li r0, 0x1
    stw r0, 0x3fc(r3)
    li r4, 0x0
    lfs f1, lbl_80883F40
    li r5, 0x38
    stfs f0, 0x2fc(r3)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    stfs f4, 0x2e8(r3)
    addi r3, r3, 0xb0
    bl fn_80097C08
    b lbl_fn_802AEB08_00001314
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_802AEB08_000012DC
    cmpwi r6, 0x2
    beq lbl_fn_802AEB08_000012DC
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
lbl_fn_802AEB08_000012DC:
    lfs f0, lbl_80883F4C
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80883F40
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x2e
    lfs f2, lbl_80883F3C
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
lbl_fn_802AEB08_00001314:
    li r0, 0x0
    stw r0, 0x14dc(r31)
lbl_fn_802AEB08_0000131C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802AF264(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    lfs f0, lbl_80883F40
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r3
    stw r30, 0x38(r1)
    lwz r4, 0x14c0(r3)
    addi r0, r4, 0x1
    stw r0, 0x14c0(r3)
    stfs f0, 0x2c(r1)
    stfs f0, 0x30(r1)
    stfs f0, 0x34(r1)
    lwz r6, 0xd1c(r3)
    cmpwi r6, 0x0
    beq lbl_fn_802AF264_000013B4
    lfs f3, 0x530(r6)
    addi r5, r1, 0x14
    lfs f0, 0x530(r3)
    addi r4, r1, 0x2c
    lfs f5, 0x52c(r6)
    fsubs f2, f3, f0
    lfs f4, 0x52c(r3)
    lfs f3, 0x528(r6)
    lfs f0, 0x528(r3)
    fsubs f4, f5, f4
    stfs f2, 0x1c(r1)
    fsubs f0, f3, f0
    stfs f4, 0x18(r1)
    stfs f0, 0x14(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x34(r1)
lbl_fn_802AF264_000013B4:
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x6
    blt lbl_fn_802AF264_000013D4
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_802AF264_000013D4
    li r0, 0x2
    stw r0, 0x55c(r3)
lbl_fn_802AF264_000013D4:
    lwz r0, 0x58c(r3)
    cmplwi r0, 0xe
    bgt lbl_fn_802AF264_00001874
    lis r4, jumptable_80785E94@ha
    slwi r0, r0, 2
    addi r4, r4, jumptable_80785E94@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0xf8(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_802AF264_0000142C
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x7
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_802AF264_0000142C:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x108(r12)
    mtctr r12
    bctrl
    b lbl_fn_802AF264_0000188C
    lwz r0, 0x14cc(r3)
    srwi. r0, r0, 31
    beq lbl_fn_802AF264_00001540
    li r30, 0x0
    stw r30, 0x14e4(r3)
    mr r3, r31
    addi r4, r1, 0x20
    bl fn_802B0D90
    cmpwi r3, 0x0
    beq lbl_fn_802AF264_00001528
    lfs f3, 0x530(r31)
    addi r3, r1, 0x8
    lfs f0, 0x28(r1)
    lfs f5, 0x52c(r31)
    fsubs f6, f3, f0
    lfs f4, 0x24(r1)
    lfs f3, 0x528(r31)
    lfs f0, 0x20(r1)
    fsubs f4, f5, f4
    stfs f6, 0x10(r1)
    fsubs f0, f3, f0
    stfs f4, 0xc(r1)
    stfs f0, 0x8(r1)
    bl fn_805F9920
    lfs f0, lbl_80883F70
    fcmpo cr0, f1, f0
    ble lbl_fn_802AF264_000014E4
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0xa
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    addi r3, r1, 0x20
    lfs f2, 0x28(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r31, 0x1500
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x1508(r31)
    b lbl_fn_802AF264_00001540
lbl_fn_802AF264_000014E4:
    lwz r4, 0x14e0(r31)
    cmpwi r4, 0x0
    bne lbl_fn_802AF264_0000150C
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x8
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    b lbl_fn_802AF264_00001540
lbl_fn_802AF264_0000150C:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    stw r30, 0x14e0(r31)
    b lbl_fn_802AF264_00001540
lbl_fn_802AF264_00001528:
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x8
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_802AF264_00001540:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x108(r12)
    mtctr r12
    bctrl
    b lbl_fn_802AF264_0000188C
    lwz r0, 0x14cc(r3)
    srwi. r0, r0, 31
    beq lbl_fn_802AF264_000016B8
    lwz r0, 0x1548(r3)
    cmpwi r0, 0x5
    blt lbl_fn_802AF264_0000159C
    li r0, 0x1
    stw r0, 0x1554(r3)
    mr r3, r31
    li r4, 0xd
    lwz r12, 0x0(r31)
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x1548(r31)
    b lbl_fn_802AF264_000016B8
lbl_fn_802AF264_0000159C:
    addi r3, r1, 0x2c
    bl fn_805F9920
    lfs f0, 0x14fc(r31)
    fmuls f0, f0, f0
    fcmpo cr0, f1, f0
    bge lbl_fn_802AF264_000016A0
    lwz r0, 0x14d4(r31)
    cmpwi r0, 0x0
    beq lbl_fn_802AF264_000015CC
    cmpwi r0, 0x1
    beq lbl_fn_802AF264_00001630
    b lbl_fn_802AF264_00001690
lbl_fn_802AF264_000015CC:
    bl fn_80680CF8
    lis r4, 0x6666
    addi r0, r4, 0x6667
    mulhw r0, r0, r3
    srawi r0, r0, 2
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0xa
    subf r0, r0, r3
    cmpwi r0, 0x7
    bge lbl_fn_802AF264_00001614
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0xb
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    b lbl_fn_802AF264_00001690
lbl_fn_802AF264_00001614:
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0xc
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    b lbl_fn_802AF264_00001690
lbl_fn_802AF264_00001630:
    bl fn_80680CF8
    lis r4, 0x6666
    addi r0, r4, 0x6667
    mulhw r0, r0, r3
    srawi r0, r0, 2
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0xa
    subf r0, r0, r3
    cmpwi r0, 0x5
    bge lbl_fn_802AF264_00001678
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0xb
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    b lbl_fn_802AF264_00001690
lbl_fn_802AF264_00001678:
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0xc
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_802AF264_00001690:
    lwz r3, 0x1548(r31)
    addi r0, r3, 0x1
    stw r0, 0x1548(r31)
    b lbl_fn_802AF264_000016B8
lbl_fn_802AF264_000016A0:
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x7
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_802AF264_000016B8:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x108(r12)
    mtctr r12
    bctrl
    b lbl_fn_802AF264_0000188C
    lwz r0, 0x14cc(r3)
    srwi. r0, r0, 31
    beq lbl_fn_802AF264_00001720
    lwz r4, 0x14e0(r3)
    cmpwi r4, 0x0
    bne lbl_fn_802AF264_00001704
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x8
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    b lbl_fn_802AF264_00001720
lbl_fn_802AF264_00001704:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x14e0(r31)
lbl_fn_802AF264_00001720:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x108(r12)
    mtctr r12
    bctrl
    b lbl_fn_802AF264_0000188C
    lwz r0, 0x14cc(r3)
    srwi. r0, r0, 31
    beq lbl_fn_802AF264_0000175C
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x7
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_802AF264_0000175C:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x108(r12)
    mtctr r12
    bctrl
    b lbl_fn_802AF264_0000188C
    lwz r0, 0x14cc(r3)
    srwi. r0, r0, 31
    beq lbl_fn_802AF264_000017A0
    li r0, 0x1
    stw r0, 0x1554(r3)
    mr r3, r31
    li r4, 0xd
    lwz r12, 0x0(r31)
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_802AF264_000017A0:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x108(r12)
    mtctr r12
    bctrl
    b lbl_fn_802AF264_0000188C
    lwz r0, 0x14cc(r3)
    srwi. r0, r0, 31
    beq lbl_fn_802AF264_000017DC
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x7
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_802AF264_000017DC:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x108(r12)
    mtctr r12
    bctrl
    b lbl_fn_802AF264_0000188C
    lwz r0, 0x14cc(r3)
    srwi. r0, r0, 31
    beq lbl_fn_802AF264_00001818
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x7
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_802AF264_00001818:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x108(r12)
    mtctr r12
    bctrl
    b lbl_fn_802AF264_0000188C
    mr r3, r31
    bl fn_805A40BC
    lwz r0, 0x12a4(r31)
    extrwi. r0, r0, 1, 6
    beq lbl_fn_802AF264_0000188C
    mr r4, r31
    li r3, 0x0
    b lbl_fn_802AF264_00001864
lbl_fn_802AF264_00001850:
    lwz r0, 0x156c(r4)
    addi r3, r3, 0x1
    clrrwi r0, r0, 1
    stw r0, 0x156c(r4)
    addi r4, r4, 0x58
lbl_fn_802AF264_00001864:
    lwz r0, 0x155c(r31)
    cmplw r3, r0
    blt lbl_fn_802AF264_00001850
    b lbl_fn_802AF264_0000188C
lbl_fn_802AF264_00001874:
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x6
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
lbl_fn_802AF264_0000188C:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_802AF7D8(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    stfd f31, 0xa0(r1)
    psq_st f31, 0xa8(r1), 0, 0
    lfs f31, lbl_80883F40
    stfd f30, 0x90(r1)
    psq_st f30, 0x98(r1), 0, 0
    lfs f30, lbl_80883F4C
    stfd f29, 0x80(r1)
    psq_st f29, 0x88(r1), 0, 0
    stw r31, 0x7c(r1)
    mr r31, r3
    addi r3, r1, 0x5c
    stw r30, 0x78(r1)
    addi r4, r31, 0x534
    stw r29, 0x74(r1)
    bl fn_8001047C
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x2
    bne lbl_fn_802AF7D8_0000246C
    lwz r0, 0x58c(r31)
    cmplwi r0, 0xe
    bgt lbl_fn_802AF7D8_00002478
    lis r3, jumptable_80785ED0@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_80785ED0@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lwz r3, 0x1510(r31)
    lwz r0, 0x14e4(r31)
    lwz r4, 0x14c0(r31)
    add r0, r3, r0
    cmpw r4, r0
    ble lbl_fn_802AF7D8_00002478
    lwz r0, 0x14cc(r31)
    oris r0, r0, 0x8000
    stw r0, 0x14cc(r31)
    b lbl_fn_802AF7D8_00002478
    lis r3, 0x8889
    lwz r4, 0x14c0(r31)
    subi r0, r3, 0x7777
    mulhw r0, r0, r4
    add r0, r0, r4
    srawi r0, r0, 3
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r0, r0, 0xf
    subf r0, r0, r4
    cmpwi r0, 0xa
    blt lbl_fn_802AF7D8_00002478
    lfs f1, lbl_80883F34
    mr r3, r31
    lfs f2, lbl_80883F74
    li r4, 0x0
    lfs f3, lbl_80883F6C
    bl fn_802B12D8
    cmpwi r3, 0x0
    beq lbl_fn_802AF7D8_000019B0
    lfs f1, lbl_80883F68
    addi r3, r31, 0xb0
    lfs f0, 0x1524(r31)
    li r4, 0x0
    fmuls f1, f1, f0
    bl fn_80139F3C
    b lbl_fn_802AF7D8_00002478
lbl_fn_802AF7D8_000019B0:
    lwz r0, 0x14cc(r31)
    oris r0, r0, 0x8000
    stw r0, 0x14cc(r31)
    b lbl_fn_802AF7D8_00002478
    lwz r4, 0x14e0(r31)
    mr r3, r31
    addi r5, r1, 0x10
    bl fn_802B0430
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_fn_802AF7D8_000019EC
    lwz r0, 0x14cc(r31)
    oris r0, r0, 0x8000
    stw r0, 0x14cc(r31)
    b lbl_fn_802AF7D8_00001A8C
lbl_fn_802AF7D8_000019EC:
    lwz r0, 0x14bc(r31)
    cmpw r0, r3
    beq lbl_fn_802AF7D8_00001A4C
    cmpwi r3, 0x1
    bne lbl_fn_802AF7D8_00001A24
    lfs f1, lbl_80883F68
    mr r3, r31
    lfs f0, 0x1524(r31)
    li r4, 0x14
    lfs f2, lbl_80883F40
    li r5, 0x1
    fmuls f1, f1, f0
    bl fn_802B1744
    b lbl_fn_802AF7D8_00001A4C
lbl_fn_802AF7D8_00001A24:
    cmpwi r3, -0x1
    bne lbl_fn_802AF7D8_00001A4C
    lfs f1, lbl_80883F68
    mr r3, r31
    lfs f0, 0x1524(r31)
    li r4, 0x1c7
    lfs f2, lbl_80883F40
    li r5, 0x1
    fmuls f1, f1, f0
    bl fn_802B1744
lbl_fn_802AF7D8_00001A4C:
    cmpwi r29, 0x1
    stw r29, 0x14bc(r31)
    bne lbl_fn_802AF7D8_00001A70
    lfs f1, lbl_80883F78
    mr r3, r31
    lfs f2, lbl_80883F4C
    lfs f3, lbl_80883F40
    bl fn_802B17AC
    b lbl_fn_802AF7D8_00001A8C
lbl_fn_802AF7D8_00001A70:
    cmpwi r29, -0x1
    bne lbl_fn_802AF7D8_00001A8C
    lfs f1, lbl_80883F7C
    mr r3, r31
    lfs f2, lbl_80883F4C
    lfs f3, lbl_80883F40
    bl fn_802B17AC
lbl_fn_802AF7D8_00001A8C:
    lis r3, 0x8889
    lwz r4, 0x14c0(r31)
    subi r0, r3, 0x7777
    mulhw r0, r0, r4
    add r0, r0, r4
    srawi r0, r0, 3
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r0, r0, 0xf
    subf r0, r0, r4
    cmpwi r0, 0xa
    blt lbl_fn_802AF7D8_00002478
    lfs f1, lbl_80883F34
    mr r3, r31
    lfs f2, lbl_80883F40
    li r4, 0x0
    lfs f3, lbl_80883F6C
    bl fn_802B12D8
    b lbl_fn_802AF7D8_00002478
    mr r3, r31
    li r4, 0x28
    bl fn_802B07F0
    cmpwi r3, 0x0
    beq lbl_fn_802AF7D8_00002478
    lwz r0, 0x14cc(r31)
    oris r0, r0, 0x8000
    stw r0, 0x14cc(r31)
    b lbl_fn_802AF7D8_00002478
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80139550
    lfs f0, lbl_80883F80
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_802AF7D8_00001B30
    lfs f1, lbl_80883F34
    mr r3, r31
    lfs f2, lbl_80883F40
    li r4, 0x0
    lfs f3, lbl_80883F6C
    bl fn_802B12D8
lbl_fn_802AF7D8_00001B30:
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fmr f29, f1
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80139550
    fcmpo cr0, f1, f29
    cror eq, gt, eq
    bne lbl_fn_802AF7D8_00001B64
    lwz r0, 0x14cc(r31)
    oris r0, r0, 0x8000
    stw r0, 0x14cc(r31)
lbl_fn_802AF7D8_00001B64:
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80139550
    lfs f0, lbl_80883F84
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_802AF7D8_00001BF4
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80139550
    lfs f0, lbl_80883F88
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_802AF7D8_00001BF4
    lis r4, lbl_807462A8@ha
    addi r3, r31, 0xb0
    addi r4, r4, lbl_807462A8@l
    addi r4, r4, 0x1a6
    bl fn_800132EC
    mr r4, r3
    addi r3, r1, 0x50
    bl fn_8000D0F8
    bl fn_8013A194
    li r0, -0x1
    stw r0, 0x8(r1)
    lfs f1, lbl_80883F40
    mr r4, r31
    stw r0, 0xc(r1)
    addi r7, r1, 0x50
    lfs f2, lbl_80883F4C
    addi r8, r31, 0x534
    lwz r5, 0x152c(r31)
    li r9, 0x0
    lwz r6, 0x590(r31)
    li r10, 0x1e
    bl fn_800FAB80
lbl_fn_802AF7D8_00001BF4:
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80139550
    lfs f0, lbl_80883F8C
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_802AF7D8_00001C48
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80139550
    lfs f0, lbl_80883F90
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_802AF7D8_00001C48
    lfs f1, lbl_80883F94
    addi r3, r31, 0xb0
    lfs f0, 0x1524(r31)
    li r4, 0x0
    fmuls f1, f1, f0
    bl fn_80139F3C
    b lbl_fn_802AF7D8_00002478
lbl_fn_802AF7D8_00001C48:
    lfs f1, 0x1524(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80139F3C
    b lbl_fn_802AF7D8_00002478
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fmr f29, f1
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80139550
    fcmpo cr0, f1, f29
    cror eq, gt, eq
    bne lbl_fn_802AF7D8_00001C90
    lwz r0, 0x14cc(r31)
    oris r0, r0, 0x8000
    stw r0, 0x14cc(r31)
lbl_fn_802AF7D8_00001C90:
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80139550
    lfs f0, lbl_80883F98
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_802AF7D8_00001D04
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80139550
    lfs f0, lbl_80883F9C
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_802AF7D8_00001D04
    lwz r4, 0x1514(r31)
    lis r0, 0x4330
    stw r0, 0x68(r1)
    lis r3, lbl_80746288@ha
    xoris r0, r4, 0x8000
    lfd f2, lbl_80746288@l(r3)
    stw r0, 0x6c(r1)
    addi r3, r31, 0xb0
    lfs f1, lbl_80883FA0
    li r4, 0x0
    lfd f0, 0x68(r1)
    fsubs f0, f0, f2
    fadds f0, f1, f0
    fdivs f1, f1, f0
    bl fn_80139F3C
lbl_fn_802AF7D8_00001D04:
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80139550
    lfs f0, lbl_80883F9C
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_802AF7D8_00001D30
    lfs f1, 0x1524(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80139F3C
lbl_fn_802AF7D8_00001D30:
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80139550
    lfs f0, lbl_80883FA4
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_802AF7D8_00001E78
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80139550
    lfs f0, lbl_80883FA8
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_802AF7D8_00001E78
    lis r29, lbl_807462A8@ha
    li r0, 0x0
    addi r29, r29, lbl_807462A8@l
    stw r0, 0x1a44(r31)
    addi r3, r31, 0xb0
    addi r4, r29, 0x1ab
    bl fn_800132EC
    mr r4, r3
    addi r3, r1, 0x44
    bl fn_8000D0F8
    bl fn_8013A194
    li r30, -0x1
    stw r30, 0x8(r1)
    lfs f1, lbl_80883F40
    mr r4, r31
    stw r30, 0xc(r1)
    addi r7, r1, 0x44
    lfs f2, lbl_80883F4C
    addi r8, r31, 0x534
    lwz r5, 0x1530(r31)
    li r9, 0x0
    lwz r6, 0x590(r31)
    li r10, 0x1e
    bl fn_800FAB80
    addi r3, r31, 0xb0
    addi r4, r29, 0x19a
    bl fn_800132EC
    mr r4, r3
    addi r3, r1, 0x20
    bl fn_8000D0F8
    addi r3, r1, 0x44
    addi r4, r1, 0x20
    bl fn_8000D124
    bl fn_8013A194
    stw r30, 0x8(r1)
    mr r4, r31
    lfs f1, lbl_80883F40
    addi r7, r1, 0x44
    stw r30, 0xc(r1)
    addi r8, r31, 0x534
    lfs f2, lbl_80883F4C
    li r9, 0x0
    lwz r5, 0x1530(r31)
    li r10, 0x1e
    lwz r6, 0x590(r31)
    bl fn_800FAB80
    addi r3, r31, 0xb0
    addi r4, r29, 0x1b0
    bl fn_800132EC
    mr r4, r3
    addi r3, r1, 0x14
    bl fn_8000D0F8
    addi r3, r1, 0x44
    addi r4, r1, 0x14
    bl fn_8000D124
    bl fn_8013A194
    stw r30, 0x8(r1)
    mr r4, r31
    lfs f1, lbl_80883F40
    addi r7, r1, 0x44
    stw r30, 0xc(r1)
    addi r8, r31, 0x534
    lfs f2, lbl_80883F4C
    li r9, 0x0
    lwz r5, 0x1530(r31)
    li r10, 0x1e
    lwz r6, 0x590(r31)
    bl fn_800FAB80
lbl_fn_802AF7D8_00001E78:
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80139550
    lfs f0, lbl_80883FAC
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_802AF7D8_00001F08
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80139550
    lfs f0, lbl_80883F84
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_802AF7D8_00001F08
    lis r4, lbl_807462A8@ha
    addi r3, r31, 0xb0
    addi r4, r4, lbl_807462A8@l
    addi r4, r4, 0x1b7
    bl fn_800132EC
    mr r4, r3
    addi r3, r1, 0x38
    bl fn_8000D0F8
    bl fn_8013A194
    li r0, -0x1
    stw r0, 0x8(r1)
    lfs f1, lbl_80883F40
    mr r4, r31
    stw r0, 0xc(r1)
    addi r7, r1, 0x38
    lfs f2, lbl_80883F4C
    addi r8, r31, 0x534
    lwz r5, 0x1534(r31)
    li r9, 0x0
    lwz r6, 0x590(r31)
    li r10, 0x1e
    bl fn_800FAB80
lbl_fn_802AF7D8_00001F08:
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80139550
    lfs f0, lbl_80883FB0
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_802AF7D8_00001F2C
    li r0, 0x1
    stw r0, 0x1a44(r31)
lbl_fn_802AF7D8_00001F2C:
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80139550
    lfs f2, lbl_80883F84
    fcmpo cr0, f1, f2
    cror eq, lt, eq
    bne lbl_fn_802AF7D8_00001F58
    lfs f1, lbl_80883FB4
    mr r3, r31
    lfs f3, lbl_80883F40
    bl fn_802B17AC
lbl_fn_802AF7D8_00001F58:
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80139550
    lfs f0, lbl_80883FB8
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_802AF7D8_00002478
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80139550
    lfs f0, lbl_80883FBC
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_802AF7D8_00002478
    lfs f1, lbl_80883F44
    mr r3, r31
    lfs f2, lbl_80883F58
    lfs f3, lbl_80883F40
    bl fn_802B17AC
    b lbl_fn_802AF7D8_00002478
    lwz r0, 0x14bc(r31)
    cmpwi r0, 0x0
    beq lbl_fn_802AF7D8_00001FC8
    cmpwi r0, 0x1
    beq lbl_fn_802AF7D8_00002028
    cmpwi r0, 0x2
    beq lbl_fn_802AF7D8_00002134
    b lbl_fn_802AF7D8_00002478
lbl_fn_802AF7D8_00001FC8:
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fmr f29, f1
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80139550
    fcmpo cr0, f1, f29
    cror eq, gt, eq
    bne lbl_fn_802AF7D8_00002478
    lfs f1, lbl_80883F6C
    li r30, 0x0
    lfs f0, 0x1524(r31)
    li r0, 0x1
    stw r30, 0x14c0(r31)
    mr r3, r31
    fmuls f1, f1, f0
    lfs f2, lbl_80883F4C
    stw r0, 0x14bc(r31)
    li r4, 0x140
    li r5, 0x1
    bl fn_802B1744
    stw r30, 0x1a44(r31)
    b lbl_fn_802AF7D8_00002478
lbl_fn_802AF7D8_00002028:
    lwz r3, 0x14c0(r31)
    lwz r0, 0x1520(r31)
    cmpw r3, r0
    ble lbl_fn_802AF7D8_00002098
    lwz r0, 0x1554(r31)
    cmpwi r0, 0x0
    beq lbl_fn_802AF7D8_00002068
    li r0, 0x0
    stw r0, 0x14dc(r31)
    mr r3, r31
    li r4, 0xe
    lwz r12, 0x0(r31)
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    b lbl_fn_802AF7D8_00002090
lbl_fn_802AF7D8_00002068:
    lfs f1, lbl_80883F68
    li r0, 0x2
    lfs f0, 0x1524(r31)
    mr r3, r31
    stw r0, 0x14bc(r31)
    li r4, 0x141
    fmuls f1, f1, f0
    lfs f2, lbl_80883F4C
    li r5, 0x0
    bl fn_802B1744
lbl_fn_802AF7D8_00002090:
    li r0, 0x1
    stw r0, 0x1a44(r31)
lbl_fn_802AF7D8_00002098:
    lwz r5, 0x14c0(r31)
    lwz r0, 0x1520(r31)
    cmpw r5, r0
    bgt lbl_fn_802AF7D8_000020D8
    lis r4, 0x6666
    mr r3, r31
    addi r0, r4, 0x6667
    mulhw r0, r0, r5
    srawi r0, r0, 2
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0xa
    subf r0, r0, r5
    cntlzw r0, r0
    srwi r4, r0, 5
    bl fn_802B1B50
lbl_fn_802AF7D8_000020D8:
    lis r4, lbl_807462A8@ha
    addi r3, r31, 0xb0
    addi r4, r4, lbl_807462A8@l
    addi r4, r4, 0x1b7
    bl fn_800132EC
    mr r4, r3
    addi r3, r1, 0x2c
    bl fn_8000D0F8
    bl fn_8013A194
    li r0, -0x1
    stw r0, 0x8(r1)
    lfs f1, lbl_80883F40
    mr r4, r31
    stw r0, 0xc(r1)
    addi r7, r1, 0x2c
    lfs f2, lbl_80883F4C
    addi r8, r31, 0x534
    lwz r5, 0x1538(r31)
    li r9, 0x0
    lwz r6, 0x590(r31)
    li r10, 0x1e
    bl fn_800FAB80
    b lbl_fn_802AF7D8_00002478
lbl_fn_802AF7D8_00002134:
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fmr f29, f1
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80139550
    fcmpo cr0, f1, f29
    cror eq, gt, eq
    bne lbl_fn_802AF7D8_00002478
    lwz r0, 0x14cc(r31)
    oris r0, r0, 0x8000
    stw r0, 0x14cc(r31)
    b lbl_fn_802AF7D8_00002478
    lwz r0, 0x14bc(r31)
    cmpwi r0, 0x0
    beq lbl_fn_802AF7D8_000021A4
    cmpwi r0, 0x2
    beq lbl_fn_802AF7D8_000021E8
    cmpwi r0, 0x3
    beq lbl_fn_802AF7D8_00002208
    cmpwi r0, 0x4
    beq lbl_fn_802AF7D8_000022E4
    cmpwi r0, 0x6
    beq lbl_fn_802AF7D8_00002320
    cmpwi r0, 0x7
    beq lbl_fn_802AF7D8_00002374
    b lbl_fn_802AF7D8_00002478
lbl_fn_802AF7D8_000021A4:
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80139550
    lfs f0, lbl_80883FC0
    fcmpo cr0, f1, f0
    ble lbl_fn_802AF7D8_00002478
    li r3, 0x2
    li r0, 0x0
    stw r3, 0x14bc(r31)
    mr r3, r31
    lfs f1, 0x1524(r31)
    li r4, 0x37
    stw r0, 0x14c0(r31)
    li r5, 0x1
    lfs f2, lbl_80883F40
    bl fn_802B1744
    b lbl_fn_802AF7D8_00002478
lbl_fn_802AF7D8_000021E8:
    lwz r3, 0x14c0(r31)
    lwz r0, 0x151c(r31)
    cmpw r3, r0
    ble lbl_fn_802AF7D8_00002478
    lwz r0, 0x14cc(r31)
    oris r0, r0, 0x8000
    stw r0, 0x14cc(r31)
    b lbl_fn_802AF7D8_00002478
lbl_fn_802AF7D8_00002208:
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fmr f29, f1
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80139550
    fcmpo cr0, f1, f29
    cror eq, gt, eq
    bne lbl_fn_802AF7D8_00002268
    li r3, 0x4
    li r0, 0x0
    stw r3, 0x14bc(r31)
    mr r3, r31
    lfs f1, 0x1524(r31)
    li r4, 0x3b
    stw r0, 0x14c0(r31)
    li r5, 0x1
    lfs f2, lbl_80883F40
    bl fn_802B1744
    mr r3, r31
    addi r4, r31, 0x1a8c
    li r5, 0x1
    bl fn_805A4A20
lbl_fn_802AF7D8_00002268:
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80139550
    lfs f2, lbl_80883FAC
    fcmpo cr0, f1, f2
    bge lbl_fn_802AF7D8_00002294
    lfs f1, lbl_80883F30
    mr r3, r31
    lfs f3, lbl_80883F40
    bl fn_802B17AC
    b lbl_fn_802AF7D8_00002478
lbl_fn_802AF7D8_00002294:
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fmr f29, f1
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80139550
    fcmpo cr0, f1, f29
    cror eq, lt, eq
    bne lbl_fn_802AF7D8_00002478
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    lfs f0, lbl_80883FAC
    mr r3, r31
    lfs f3, lbl_80883F40
    fsubs f2, f1, f0
    lfs f1, lbl_80883FC4
    bl fn_802B17AC
    b lbl_fn_802AF7D8_00002478
lbl_fn_802AF7D8_000022E4:
    lwz r3, 0x14c0(r31)
    lwz r0, 0x1518(r31)
    cmpw r3, r0
    ble lbl_fn_802AF7D8_00002478
    lfs f1, lbl_80883FC8
    li r0, 0x7
    lfs f0, 0x1524(r31)
    mr r3, r31
    stw r0, 0x14bc(r31)
    li r4, 0x3e
    fmuls f1, f1, f0
    lfs f2, lbl_80883F40
    li r5, 0x0
    bl fn_802B1744
    b lbl_fn_802AF7D8_00002478
lbl_fn_802AF7D8_00002320:
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fmr f29, f1
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80139550
    fcmpo cr0, f1, f29
    cror eq, gt, eq
    bne lbl_fn_802AF7D8_00002478
    lfs f1, lbl_80883FC8
    li r0, 0x7
    lfs f0, 0x1524(r31)
    mr r3, r31
    stw r0, 0x14bc(r31)
    li r4, 0x3e
    fmuls f1, f1, f0
    lfs f2, lbl_80883F40
    li r5, 0x0
    bl fn_802B1744
    b lbl_fn_802AF7D8_00002478
lbl_fn_802AF7D8_00002374:
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80139550
    lfs f0, lbl_80883FCC
    fcmpo cr0, f1, f0
    ble lbl_fn_802AF7D8_000023B0
    li r0, 0x0
    stw r0, 0x1554(r31)
    mr r3, r31
    li r4, 0xd
    lwz r12, 0x0(r31)
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    b lbl_fn_802AF7D8_00002478
lbl_fn_802AF7D8_000023B0:
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80139550
    lfs f0, lbl_80883FD0
    fcmpo cr0, f1, f0
    ble lbl_fn_802AF7D8_00002478
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80139550
    lfs f0, lbl_80883FCC
    fcmpo cr0, f1, f0
    bge lbl_fn_802AF7D8_00002478
    lfs f1, lbl_80883FC4
    mr r3, r31
    lfs f2, lbl_80883F74
    lfs f3, lbl_80883F40
    bl fn_802B17AC
    b lbl_fn_802AF7D8_00002478
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fmr f29, f1
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80139550
    fcmpo cr0, f1, f29
    cror eq, gt, eq
    bne lbl_fn_802AF7D8_0000242C
    mr r3, r31
    li r4, 0x2
    bl fn_802B19EC
lbl_fn_802AF7D8_0000242C:
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80139F2C
    cmpwi r3, 0x2e
    bne lbl_fn_802AF7D8_00002478
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80139550
    lfs f2, lbl_80883FD4
    fcmpo cr0, f1, f2
    bge lbl_fn_802AF7D8_00002478
    lfs f1, lbl_80883FD8
    mr r3, r31
    lfs f3, lbl_80883F40
    bl fn_802B17AC
    b lbl_fn_802AF7D8_00002478
lbl_fn_802AF7D8_0000246C:
    mr r3, r31
    bl fn_805A4258
    b lbl_fn_802AF7D8_000024C8
lbl_fn_802AF7D8_00002478:
    mr r3, r31
    li r4, 0x0
    bl fn_802B1B08
    bl fn_801404F8
    bl fn_8004D124
    lfs f0, 0x568(r31)
    fmr f1, f31
    mr r3, r31
    addi r4, r1, 0x5c
    fmuls f2, f0, f30
    li r5, 0x1
    bl fn_8013CB68
    lwz r0, 0x1a44(r31)
    cmpwi r0, 0x0
    beq lbl_fn_802AF7D8_000024C8
    mr r3, r31
    li r4, 0x1
    bl fn_802B1B08
    bl fn_801404F8
    bl fn_8004D124
lbl_fn_802AF7D8_000024C8:
    lwz r0, 0xb4(r1)
    psq_l f31, 0xa8(r1), 0, 0
    lfd f31, 0xa0(r1)
    psq_l f30, 0x98(r1), 0, 0
    lfd f30, 0x90(r1)
    psq_l f29, 0x88(r1), 0, 0
    lfd f29, 0x80(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    lwz r29, 0x74(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}
