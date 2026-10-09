#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800F8548(void);
extern void fn_800F8C6C(void);
extern void fn_80126214(void);
extern void fn_8013A258(void);
extern void fn_8013CB68(void);
extern void fn_80148990(void);
extern void fn_80151448(void);
extern void fn_8015495C(void);
extern void fn_8016DA4C(void);
extern void fn_8016E970(void);
extern void fn_8017039C(void);
extern void fn_80170A20(void);
extern void fn_80178A6C(void);
extern void fn_80232B7C(void);
extern void fn_8023A8B4(void);
extern void fn_805F8E70(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9940(void);
extern void fn_80680CF8(void);
extern void fn_8068AEA4(void);
extern void fn_80695720(void);

/* External data declarations */

/* Small data declarations */
extern u32 lbl_8087D9E0;
extern u32 lbl_8087D9E4;
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F8A0;
extern u32 lbl_80884760;
extern u32 lbl_80884764;
extern u32 lbl_80884768;
extern u32 lbl_8088476C;
extern u32 lbl_80884770;
extern u32 lbl_80884774;
extern u32 lbl_80884778;
extern u32 lbl_8088477C;
extern u32 lbl_80884780;
extern u32 lbl_80884784;
extern u32 lbl_80884788;
extern u32 lbl_8088478C;
extern u32 lbl_80884790;
extern u32 lbl_80884794;
extern u32 lbl_80884798;
extern u32 lbl_8088479C;
extern u32 lbl_808847A0;
extern u32 lbl_808847A4;

/* Function declarations */
void fn_802E683C(void);
void fn_802E711C(void);
void fn_802E7120(void);
void fn_802E71B0(void);
void fn_802E7298(void);
void fn_802E7740(void);
void fn_802E8084(void);

asm void fn_802E683C(void)
{
    nofralloc
    stwu r1, -0x230(r1)
    mflr r0
    stw r0, 0x234(r1)
    stfd f31, 0x220(r1)
    psq_st f31, 0x228(r1), 0, 0
    stfd f30, 0x210(r1)
    psq_st f30, 0x218(r1), 0, 0
    stfd f29, 0x200(r1)
    psq_st f29, 0x208(r1), 0, 0
    stfd f28, 0x1f0(r1)
    psq_st f28, 0x1f8(r1), 0, 0
    stw r31, 0x1ec(r1)
    mr r31, r3
    stw r30, 0x1e8(r1)
    stw r29, 0x1e4(r1)
    lwz r0, 0xd1c(r3)
    stw r0, 0x14f4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_802E683C_0000005C
    lwz r4, lbl_8087F8A0
    lwz r0, 0x48(r4)
    stw r0, 0x14f4(r3)
    stw r0, 0xd1c(r3)
lbl_fn_802E683C_0000005C:
    lwz r0, 0xd18(r3)
    lwz r4, 0x14e0(r3)
    cmpwi r0, 0x0
    addi r0, r4, 0x1
    stw r0, 0x14e0(r3)
    beq lbl_fn_802E683C_00000080
    lwz r4, 0x14f4(r3)
    cmpwi r4, 0x0
    bne lbl_fn_802E683C_000000CC
lbl_fn_802E683C_00000080:
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x2
    beq lbl_fn_802E683C_00000098
    cmpwi r0, 0xc
    beq lbl_fn_802E683C_000000B0
    b lbl_fn_802E683C_000000BC
lbl_fn_802E683C_00000098:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0xec(r12)
    mtctr r12
    bctrl
    b lbl_fn_802E683C_0000089C
lbl_fn_802E683C_000000B0:
    lfs f0, lbl_8088477C
    stfs f0, 0x52c(r3)
    b lbl_fn_802E683C_0000089C
lbl_fn_802E683C_000000BC:
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    b lbl_fn_802E683C_0000089C
lbl_fn_802E683C_000000CC:
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x7
    beq lbl_fn_802E683C_00000104
    cmpwi r0, 0x8
    beq lbl_fn_802E683C_00000150
    cmpwi r0, 0x9
    beq lbl_fn_802E683C_00000228
    cmpwi r0, 0xa
    beq lbl_fn_802E683C_000002C0
    cmpwi r0, 0x2
    beq lbl_fn_802E683C_00000580
    cmpwi r0, 0xc
    beq lbl_fn_802E683C_00000598
    b lbl_fn_802E683C_000005A4
lbl_fn_802E683C_00000104:
    lfs f28, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f28, f1
    cror eq, gt, eq
    bne lbl_fn_802E683C_0000089C
    li r30, 0x0
    stw r30, 0x14dc(r31)
    stw r30, 0x14e0(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r3, r31
    li r4, 0x3
    stw r30, 0x58c(r31)
    bl fn_8016E970
    stw r30, 0x14e4(r31)
    b lbl_fn_802E683C_0000089C
lbl_fn_802E683C_00000150:
    lfs f28, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f28, f1
    cror eq, gt, eq
    bne lbl_fn_802E683C_000001D8
    lwz r0, 0x14e4(r31)
    cmpwi r0, 0x0
    bne lbl_fn_802E683C_000001AC
    li r0, 0x0
    stw r0, 0x14dc(r31)
    stw r0, 0x14e0(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r30, 0xa
    mr r3, r31
    li r4, 0x3
    stw r30, 0x58c(r31)
    bl fn_8016E970
    stw r30, 0x1500(r31)
    b lbl_fn_802E683C_0000089C
lbl_fn_802E683C_000001AC:
    li r30, 0x0
    stw r30, 0x14dc(r31)
    stw r30, 0x14e0(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r3, r31
    li r4, 0x3
    stw r30, 0x58c(r31)
    bl fn_8016E970
    b lbl_fn_802E683C_0000089C
lbl_fn_802E683C_000001D8:
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_80884780
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_802E683C_0000089C
    lfs f0, lbl_80884784
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_802E683C_0000089C
    lwz r3, lbl_8087F048
    mr r6, r31
    lwz r7, 0x14f8(r31)
    li r4, 0x0
    lwz r8, 0x590(r31)
    li r5, 0x0
    lfs f1, lbl_80884768
    li r9, 0x1e
    li r10, -0x1
    bl fn_800F8C6C
    b lbl_fn_802E683C_0000089C
lbl_fn_802E683C_00000228:
    lfs f28, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f28, f1
    cror eq, gt, eq
    bne lbl_fn_802E683C_00000270
    li r30, 0x0
    stw r30, 0x14dc(r31)
    stw r30, 0x14e0(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r3, r31
    li r4, 0x3
    stw r30, 0x58c(r31)
    bl fn_8016E970
    b lbl_fn_802E683C_0000089C
lbl_fn_802E683C_00000270:
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_80884788
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_802E683C_0000089C
    lfs f0, lbl_8088478C
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_802E683C_0000089C
    lwz r3, lbl_8087F048
    mr r6, r31
    lwz r7, 0x14fc(r31)
    li r4, 0x0
    lwz r8, 0x590(r31)
    li r5, 0x0
    lfs f1, lbl_80884768
    li r9, 0x1e
    li r10, -0x1
    bl fn_800F8C6C
    b lbl_fn_802E683C_0000089C
lbl_fn_802E683C_000002C0:
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    beq lbl_fn_802E683C_000002D8
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
lbl_fn_802E683C_000002D8:
    psq_l f1, 0x534(r31), 0, 0
    addi r3, r1, 0xec
    lfs f2, 0x53c(r31)
    stfs f2, 0xf4(r1)
    lfs f31, lbl_80884768
    psq_st f1, 0x0(r3), 0, 0
    lfs f30, lbl_80884760
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x7
    bne lbl_fn_802E683C_00000514
    addi r3, r31, 0x1030
    bl fn_80126214
    addi r4, r31, 0x1088
    addi r30, r1, 0xe0
    psq_l f1, 0x0(r4), 0, 0
    mr r3, r30
    lfs f2, 0x1090(r31)
    stfs f2, 0xe8(r1)
    psq_st f1, 0x0(r30), 0, 0
    bl fn_805F9940
    lfs f0, lbl_80884790
    fmr f31, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_802E683C_00000528
    addi r29, r1, 0xc8
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0xe8(r1)
    mr r3, r29
    psq_st f1, 0x0(r29), 0, 0
    mr r4, r29
    stfs f2, 0xd0(r1)
    bl fn_805F98D0
    lfs f2, 0xd0(r1)
    addi r30, r1, 0xd4
    psq_l f1, 0x0(r29), 0, 0
    fabs f3, f2
    lfs f0, lbl_8088476C
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0xdc(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_802E683C_000003A4
    lfs f3, 0xd4(r1)
    lfs f0, lbl_80884768
    fcmpo cr0, f3, f0
    ble lbl_fn_802E683C_00000398
    lfs f0, lbl_80884770
    b lbl_fn_802E683C_0000039C
lbl_fn_802E683C_00000398:
    lfs f0, lbl_80884774
lbl_fn_802E683C_0000039C:
    stfs f0, 0xc0(r1)
    b lbl_fn_802E683C_000003B8
lbl_fn_802E683C_000003A4:
    frsp f2, f2
    lfs f1, 0xd4(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0xc0(r1)
lbl_fn_802E683C_000003B8:
    lfs f0, 0xc0(r1)
    addi r3, r1, 0x168
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80884768
    addi r4, r1, 0xb0
    lfs f28, 0x170(r1)
    mr r5, r4
    lfs f29, 0x16c(r1)
    addi r3, r1, 0x198
    lfs f13, 0x168(r1)
    lfs f12, 0x180(r1)
    lfs f11, 0x17c(r1)
    lfs f10, 0x178(r1)
    lfs f9, 0x190(r1)
    lfs f8, 0x18c(r1)
    lfs f7, 0x188(r1)
    lfs f6, 0x194(r1)
    lfs f5, 0x184(r1)
    lfs f4, 0x174(r1)
    lfs f0, lbl_80884760
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0xdc(r1)
    stfs f3, 0x1c8(r1)
    stfs f3, 0x1cc(r1)
    stfs f3, 0x1d0(r1)
    stfs f0, 0x1d4(r1)
    stfs f13, 0x80(r1)
    stfs f29, 0x84(r1)
    stfs f28, 0x88(r1)
    stfs f13, 0x198(r1)
    stfs f29, 0x19c(r1)
    stfs f28, 0x1a0(r1)
    stfs f10, 0x8c(r1)
    stfs f11, 0x90(r1)
    stfs f12, 0x94(r1)
    stfs f10, 0x1a8(r1)
    stfs f11, 0x1ac(r1)
    stfs f12, 0x1b0(r1)
    stfs f7, 0x98(r1)
    stfs f8, 0x9c(r1)
    stfs f9, 0xa0(r1)
    stfs f7, 0x1b8(r1)
    stfs f8, 0x1bc(r1)
    stfs f9, 0x1c0(r1)
    stfs f4, 0xa4(r1)
    stfs f5, 0xa8(r1)
    stfs f6, 0xac(r1)
    stfs f4, 0x1a4(r1)
    stfs f5, 0x1b4(r1)
    stfs f6, 0x1c4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0xb8(r1)
    bl fn_805F9750
    lfs f2, 0xb8(r1)
    lfs f0, lbl_8088476C
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802E683C_000004D4
    lfs f3, 0xb4(r1)
    lfs f0, lbl_80884768
    fcmpo cr0, f3, f0
    ble lbl_fn_802E683C_000004C4
    lfs f0, lbl_80884770
    b lbl_fn_802E683C_000004C8
lbl_fn_802E683C_000004C4:
    lfs f0, lbl_80884774
lbl_fn_802E683C_000004C8:
    fneg f0, f0
    stfs f0, 0xbc(r1)
    b lbl_fn_802E683C_000004E8
lbl_fn_802E683C_000004D4:
    lfs f1, 0xb4(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0xbc(r1)
lbl_fn_802E683C_000004E8:
    lfs f2, lbl_80884768
    addi r3, r1, 0xbc
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0xec
    stfs f2, 0xc4(r1)
    stfs f2, 0xdc(r1)
    frsp f2, f2
    psq_st f1, 0x0(r30), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0xf4(r1)
    b lbl_fn_802E683C_00000528
lbl_fn_802E683C_00000514:
    cmpwi r0, 0x6
    bne lbl_fn_802E683C_00000528
    mr r3, r31
    bl fn_8013A258
    b lbl_fn_802E683C_00000544
lbl_fn_802E683C_00000528:
    lfs f0, 0x568(r31)
    fmr f1, f31
    mr r3, r31
    addi r4, r1, 0xec
    fmuls f2, f30, f0
    li r5, 0x0
    bl fn_8013CB68
lbl_fn_802E683C_00000544:
    lwz r3, 0x14e0(r31)
    lwz r0, 0x1500(r31)
    cmpw r3, r0
    blt lbl_fn_802E683C_0000089C
    li r30, 0x0
    stw r30, 0x14dc(r31)
    stw r30, 0x14e0(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r3, r31
    li r4, 0x3
    stw r30, 0x58c(r31)
    bl fn_8016E970
    b lbl_fn_802E683C_0000089C
lbl_fn_802E683C_00000580:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0xec(r12)
    mtctr r12
    bctrl
    b lbl_fn_802E683C_0000089C
lbl_fn_802E683C_00000598:
    lfs f0, lbl_8088477C
    stfs f0, 0x52c(r3)
    b lbl_fn_802E683C_0000089C
lbl_fn_802E683C_000005A4:
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    beq lbl_fn_802E683C_00000628
    cmpwi r0, 0x7
    bne lbl_fn_802E683C_000005E0
    lwz r0, 0x14e4(r3)
    cmpwi r0, 0x1
    bne lbl_fn_802E683C_00000628
    lwz r0, 0x1054(r3)
    cmplw r4, r0
    beq lbl_fn_802E683C_00000628
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    b lbl_fn_802E683C_00000628
lbl_fn_802E683C_000005E0:
    lwz r0, 0x14e4(r3)
    cmpwi r0, 0x1
    beq lbl_fn_802E683C_000005F8
    cmpwi r0, 0x3
    beq lbl_fn_802E683C_0000060C
    b lbl_fn_802E683C_00000628
lbl_fn_802E683C_000005F8:
    lfs f1, lbl_80884794
    mr r3, r31
    li r5, 0x0
    bl fn_80170A20
    b lbl_fn_802E683C_00000628
lbl_fn_802E683C_0000060C:
    lwz r3, 0x1504(r3)
    cmpwi r3, 0x0
    beq lbl_fn_802E683C_00000628
    lwz r4, 0x0(r3)
    mr r3, r31
    li r5, 0x0
    bl fn_8017039C
lbl_fn_802E683C_00000628:
    psq_l f1, 0x534(r31), 0, 0
    addi r3, r1, 0x74
    lfs f2, 0x53c(r31)
    stfs f2, 0x7c(r1)
    lfs f28, lbl_80884768
    psq_st f1, 0x0(r3), 0, 0
    lfs f29, lbl_80884760
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x7
    bne lbl_fn_802E683C_00000864
    addi r3, r31, 0x1030
    bl fn_80126214
    addi r4, r31, 0x1088
    addi r29, r1, 0x68
    psq_l f1, 0x0(r4), 0, 0
    mr r3, r29
    lfs f2, 0x1090(r31)
    stfs f2, 0x70(r1)
    psq_st f1, 0x0(r29), 0, 0
    bl fn_805F9940
    lfs f0, lbl_80884790
    fmr f28, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_802E683C_00000878
    addi r30, r1, 0x50
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x70(r1)
    mr r3, r30
    psq_st f1, 0x0(r30), 0, 0
    mr r4, r30
    stfs f2, 0x58(r1)
    bl fn_805F98D0
    lfs f2, 0x58(r1)
    addi r29, r1, 0x5c
    psq_l f1, 0x0(r30), 0, 0
    fabs f3, f2
    lfs f0, lbl_8088476C
    psq_st f1, 0x0(r29), 0, 0
    frsp f3, f3
    stfs f2, 0x64(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_802E683C_000006F4
    lfs f3, 0x5c(r1)
    lfs f0, lbl_80884768
    fcmpo cr0, f3, f0
    ble lbl_fn_802E683C_000006E8
    lfs f0, lbl_80884770
    b lbl_fn_802E683C_000006EC
lbl_fn_802E683C_000006E8:
    lfs f0, lbl_80884774
lbl_fn_802E683C_000006EC:
    stfs f0, 0x48(r1)
    b lbl_fn_802E683C_00000708
lbl_fn_802E683C_000006F4:
    frsp f2, f2
    lfs f1, 0x5c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_802E683C_00000708:
    lfs f0, 0x48(r1)
    addi r3, r1, 0xf8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80884768
    addi r4, r1, 0x38
    lfs f31, 0x100(r1)
    mr r5, r4
    lfs f30, 0xfc(r1)
    addi r3, r1, 0x128
    lfs f13, 0xf8(r1)
    lfs f12, 0x110(r1)
    lfs f11, 0x10c(r1)
    lfs f10, 0x108(r1)
    lfs f9, 0x120(r1)
    lfs f8, 0x11c(r1)
    lfs f7, 0x118(r1)
    lfs f6, 0x124(r1)
    lfs f5, 0x114(r1)
    lfs f4, 0x104(r1)
    lfs f0, lbl_80884760
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x64(r1)
    stfs f3, 0x158(r1)
    stfs f3, 0x15c(r1)
    stfs f3, 0x160(r1)
    stfs f0, 0x164(r1)
    stfs f13, 0x8(r1)
    stfs f30, 0xc(r1)
    stfs f31, 0x10(r1)
    stfs f13, 0x128(r1)
    stfs f30, 0x12c(r1)
    stfs f31, 0x130(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0x138(r1)
    stfs f11, 0x13c(r1)
    stfs f12, 0x140(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0x148(r1)
    stfs f8, 0x14c(r1)
    stfs f9, 0x150(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0x134(r1)
    stfs f5, 0x144(r1)
    stfs f6, 0x154(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_8088476C
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802E683C_00000824
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80884768
    fcmpo cr0, f3, f0
    ble lbl_fn_802E683C_00000814
    lfs f0, lbl_80884770
    b lbl_fn_802E683C_00000818
lbl_fn_802E683C_00000814:
    lfs f0, lbl_80884774
lbl_fn_802E683C_00000818:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_802E683C_00000838
lbl_fn_802E683C_00000824:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_802E683C_00000838:
    lfs f2, lbl_80884768
    addi r3, r1, 0x44
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x74
    stfs f2, 0x4c(r1)
    stfs f2, 0x64(r1)
    frsp f2, f2
    psq_st f1, 0x0(r29), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x7c(r1)
    b lbl_fn_802E683C_00000878
lbl_fn_802E683C_00000864:
    cmpwi r0, 0x6
    bne lbl_fn_802E683C_00000878
    mr r3, r31
    bl fn_8013A258
    b lbl_fn_802E683C_00000894
lbl_fn_802E683C_00000878:
    lfs f0, 0x568(r31)
    fmr f1, f28
    mr r3, r31
    addi r4, r1, 0x74
    fmuls f2, f29, f0
    li r5, 0x0
    bl fn_8013CB68
lbl_fn_802E683C_00000894:
    mr r3, r31
    bl fn_802E7740
lbl_fn_802E683C_0000089C:
    lfs f0, 0x14ec(r31)
    stfs f0, 0x52c(r31)
    psq_l f31, 0x228(r1), 0, 0
    lfd f31, 0x220(r1)
    psq_l f30, 0x218(r1), 0, 0
    lfd f30, 0x210(r1)
    psq_l f29, 0x208(r1), 0, 0
    lfd f29, 0x200(r1)
    psq_l f28, 0x1f8(r1), 0, 0
    lfd f28, 0x1f0(r1)
    lwz r31, 0x1ec(r1)
    lwz r30, 0x1e8(r1)
    lwz r29, 0x1e4(r1)
    lwz r0, 0x234(r1)
    mtlr r0
    addi r1, r1, 0x230
    blr
}

asm void fn_802E711C(void)
{
    nofralloc
    blr
}

asm void fn_802E7120(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x7
    beq lbl_fn_802E7120_0000095C
    lwz r0, 0x44(r4)
    cmpwi r0, 0x1
    beq lbl_fn_802E7120_0000095C
    bl fn_80151448
    lwz r0, 0x12a4(r30)
    extrwi. r0, r0, 1, 29
    bne lbl_fn_802E7120_00000944
    lwz r12, 0x0(r30)
    mr r3, r30
    mr r4, r31
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    b lbl_fn_802E7120_0000095C
lbl_fn_802E7120_00000944:
    lwz r12, 0x0(r30)
    mr r3, r30
    mr r4, r31
    lwz r12, 0x118(r12)
    mtctr r12
    bctrl
lbl_fn_802E7120_0000095C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802E71B0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r4, 0x8(r4)
    lbz r0, 0x1(r4)
    extsb. r0, r0
    bne lbl_fn_802E71B0_000009A0
    li r5, 0x1
lbl_fn_802E71B0_000009A0:
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_802E71B0_000009E4
    lbz r0, 0x1508(r3)
    cmpwi r0, 0x0
    bne lbl_fn_802E71B0_00000A48
    cmpwi r5, 0x0
    beq lbl_fn_802E71B0_000009D4
    mr r3, r31
    li r4, 0x1
    bl fn_802E8084
    b lbl_fn_802E71B0_00000A48
lbl_fn_802E71B0_000009D4:
    mr r3, r31
    li r4, 0x2
    bl fn_802E8084
    b lbl_fn_802E71B0_00000A48
lbl_fn_802E71B0_000009E4:
    li r0, 0x0
    stw r0, 0x14dc(r3)
    stw r0, 0x14e0(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0xb
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f0, lbl_80884760
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80884768
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x33
    lfs f2, lbl_80884764
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
lbl_fn_802E71B0_00000A48:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802E7298(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    li r0, 0x0
    stw r31, 0x4c(r1)
    mr r31, r3
    stw r30, 0x48(r1)
    stw r29, 0x44(r1)
    lwz r4, 0x62c(r3)
    stw r0, 0x624(r3)
    cmpwi r4, 0x0
    stw r0, 0x628(r3)
    beq lbl_fn_802E7298_00000AA4
    beq lbl_fn_802E7298_00000A9C
    subi r3, r4, 0x10
    bl fn_80084C24
lbl_fn_802E7298_00000A9C:
    li r0, 0x0
    stw r0, 0x62c(r31)
lbl_fn_802E7298_00000AA4:
    lfs f3, 0x530(r31)
    li r0, 0x0
    lfs f0, 0x5ac(r31)
    addi r3, r1, 0x8
    lfs f5, lbl_80884768
    addi r4, r1, 0x24
    fadds f6, f3, f0
    lfs f3, 0x52c(r31)
    lfs f0, 0x5a8(r31)
    fmr f2, f5
    lwz r5, 0x958(r31)
    fadds f7, f3, f0
    lfs f3, 0x528(r31)
    rlwinm r6, r5, 0, 25, 25
    lfs f0, 0x5a4(r31)
    addi r5, r1, 0x14
    stfs f2, 0x2c(r1)
    fadds f0, f3, f0
    lfs f4, 0x5b0(r31)
    fmr f2, f6
    stfs f5, 0x8(r1)
    cmplwi r6, 0x40
    stfs f5, 0xc(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f0, 0x14(r1)
    stfs f7, 0x18(r1)
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    stw r0, 0x20(r1)
    stfs f5, 0x10(r1)
    stfs f4, 0x30(r1)
    stfs f6, 0x1c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x2c(r1)
    bne lbl_fn_802E7298_00000B40
    lfs f0, 0x28(r1)
    fsubs f0, f0, f4
    stfs f0, 0x28(r1)
    b lbl_fn_802E7298_00000B4C
lbl_fn_802E7298_00000B40:
    lfs f0, 0x28(r1)
    fadds f0, f0, f4
    stfs f0, 0x28(r1)
lbl_fn_802E7298_00000B4C:
    lwz r0, 0x62c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_802E7298_00000B64
    lwz r0, 0x628(r31)
    cmpwi r0, 0x0
    bne lbl_fn_802E7298_00000D04
lbl_fn_802E7298_00000B64:
    lwz r0, 0x628(r31)
    li r30, 0x8
    cmplwi r0, 0x8
    bgt lbl_fn_802E7298_00000EAC
    li r3, 0xb0
    li r4, 0x0
    la r5, lbl_8087D9E4
    la r6, lbl_8087D9E0
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_80148990@ha
    li r5, 0x0
    addi r4, r4, fn_80148990@l
    li r6, 0x14
    li r7, 0x8
    bl fn_80695720
    lwz r0, 0x62c(r31)
    mr r29, r3
    cmpwi r0, 0x0
    beq lbl_fn_802E7298_00000CF8
    lwz r0, 0x624(r31)
    li r5, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_802E7298_00000BC8
    mr r5, r0
lbl_fn_802E7298_00000BC8:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_802E7298_00000CE4
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_802E7298_00000CAC
lbl_fn_802E7298_00000BE0:
    lwz r0, 0x62c(r31)
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
    lwz r0, 0x62c(r31)
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
    lwz r0, 0x62c(r31)
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
    lwz r0, 0x62c(r31)
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
    bdnz lbl_fn_802E7298_00000BE0
    andi. r5, r5, 0x3
    beq lbl_fn_802E7298_00000CE4
lbl_fn_802E7298_00000CAC:
    mtctr r5
lbl_fn_802E7298_00000CB0:
    lwz r0, 0x62c(r31)
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
    bdnz lbl_fn_802E7298_00000CB0
lbl_fn_802E7298_00000CE4:
    lwz r3, 0x62c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802E7298_00000CF8
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_802E7298_00000CF8:
    stw r29, 0x62c(r31)
    stw r30, 0x628(r31)
    b lbl_fn_802E7298_00000EAC
lbl_fn_802E7298_00000D04:
    lwz r3, 0x624(r31)
    cmplw r3, r0
    blt lbl_fn_802E7298_00000EAC
    slwi r30, r3, 1
    cmplw r0, r30
    bgt lbl_fn_802E7298_00000EAC
    mulli r3, r30, 0x14
    li r4, 0x0
    la r5, lbl_8087D9E4
    la r6, lbl_8087D9E0
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_80148990@ha
    mr r7, r30
    addi r4, r4, fn_80148990@l
    li r5, 0x0
    li r6, 0x14
    bl fn_80695720
    lwz r0, 0x62c(r31)
    mr r29, r3
    cmpwi r0, 0x0
    beq lbl_fn_802E7298_00000EA4
    lwz r0, 0x624(r31)
    mr r5, r30
    cmplw r30, r0
    ble lbl_fn_802E7298_00000D74
    mr r5, r0
lbl_fn_802E7298_00000D74:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_802E7298_00000E90
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_802E7298_00000E58
lbl_fn_802E7298_00000D8C:
    lwz r0, 0x62c(r31)
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
    lwz r0, 0x62c(r31)
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
    lwz r0, 0x62c(r31)
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
    lwz r0, 0x62c(r31)
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
    bdnz lbl_fn_802E7298_00000D8C
    andi. r5, r5, 0x3
    beq lbl_fn_802E7298_00000E90
lbl_fn_802E7298_00000E58:
    mtctr r5
lbl_fn_802E7298_00000E5C:
    lwz r0, 0x62c(r31)
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
    bdnz lbl_fn_802E7298_00000E5C
lbl_fn_802E7298_00000E90:
    lwz r3, 0x62c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802E7298_00000EA4
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_802E7298_00000EA4:
    stw r29, 0x62c(r31)
    stw r30, 0x628(r31)
lbl_fn_802E7298_00000EAC:
    lwz r0, 0x624(r31)
    addi r5, r1, 0x24
    lwz r4, 0x62c(r31)
    mulli r3, r0, 0x14
    lwz r0, 0x20(r1)
    stwux r0, r3, r4
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x4(r3), 0, 0
    lfs f2, 0x2c(r1)
    stfs f2, 0xc(r3)
    lfs f0, 0x30(r1)
    stfs f0, 0x10(r3)
    lwz r3, 0x624(r31)
    addi r0, r3, 0x1
    stw r0, 0x624(r31)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_802E7740(void)
{
    nofralloc
    stwu r1, -0x2d0(r1)
    mflr r0
    stw r0, 0x2d4(r1)
    stfd f31, 0x2c0(r1)
    psq_st f31, 0x2c8(r1), 0, 0
    stfd f30, 0x2b0(r1)
    psq_st f30, 0x2b8(r1), 0, 0
    stw r31, 0x2ac(r1)
    mr r31, r3
    stw r30, 0x2a8(r1)
    lwz r0, 0x14e4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_802E7740_00000F54
    cmpwi r0, 0x1
    beq lbl_fn_802E7740_0000122C
    cmpwi r0, 0x2
    beq lbl_fn_802E7740_00001758
    cmpwi r0, 0x3
    beq lbl_fn_802E7740_00001764
    b lbl_fn_802E7740_00001820
lbl_fn_802E7740_00000F54:
    lwz r0, 0x14e0(r3)
    cmpwi r0, 0x1e
    ble lbl_fn_802E7740_00001820
    lwz r4, 0x14f4(r3)
    lfs f0, 0x530(r3)
    lfs f5, 0x530(r4)
    lfs f3, 0x528(r3)
    addi r3, r1, 0x140
    lfs f4, 0x528(r4)
    fsubs f5, f5, f0
    lfs f0, lbl_80884768
    fsubs f3, f4, f3
    stfs f5, 0x148(r1)
    stfs f3, 0x140(r1)
    stfs f0, 0x144(r1)
    bl fn_805F9940
    lfs f0, lbl_8088479C
    fcmpo cr0, f1, f0
    bge lbl_fn_802E7740_000011F4
    li r0, 0x0
    stw r0, 0x14dc(r31)
    stw r0, 0x14e0(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0x8
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f0, lbl_80884760
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80884768
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x142
    lfs f2, lbl_80884764
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    lwz r4, 0x14f4(r31)
    addi r3, r1, 0xc8
    lfs f3, lbl_80884768
    addi r30, r1, 0xd4
    lfs f5, 0x530(r4)
    lfs f0, 0x530(r31)
    lfs f4, 0x528(r4)
    fsubs f2, f5, f0
    lfs f0, 0x528(r31)
    stfs f3, 0xcc(r1)
    fsubs f4, f4, f0
    lfs f0, lbl_8088476C
    stfs f2, 0xd0(r1)
    stfs f4, 0xc8(r1)
    frsp f4, f2
    psq_l f1, 0x0(r3), 0, 0
    fabs f5, f4
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0xdc(r1)
    frsp f5, f5
    fcmpo cr0, f5, f0
    bge lbl_fn_802E7740_0000107C
    lfs f0, 0xd4(r1)
    fcmpo cr0, f0, f3
    ble lbl_fn_802E7740_00001070
    lfs f0, lbl_80884770
    b lbl_fn_802E7740_00001074
lbl_fn_802E7740_00001070:
    lfs f0, lbl_80884774
lbl_fn_802E7740_00001074:
    stfs f0, 0xe4(r1)
    b lbl_fn_802E7740_00001090
lbl_fn_802E7740_0000107C:
    fmr f2, f4
    lfs f1, 0xd4(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0xe4(r1)
lbl_fn_802E7740_00001090:
    lfs f0, 0xe4(r1)
    addi r3, r1, 0x270
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80884768
    addi r4, r1, 0xec
    lfs f4, 0x278(r1)
    mr r5, r4
    lfs f5, 0x274(r1)
    addi r3, r1, 0x230
    lfs f6, 0x270(r1)
    lfs f7, 0x288(r1)
    lfs f8, 0x284(r1)
    lfs f9, 0x280(r1)
    lfs f10, 0x298(r1)
    lfs f11, 0x294(r1)
    lfs f12, 0x290(r1)
    lfs f13, 0x29c(r1)
    lfs f31, 0x28c(r1)
    lfs f30, 0x27c(r1)
    lfs f0, lbl_80884760
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0xdc(r1)
    stfs f3, 0x260(r1)
    stfs f3, 0x264(r1)
    stfs f3, 0x268(r1)
    stfs f0, 0x26c(r1)
    stfs f6, 0x11c(r1)
    stfs f5, 0x120(r1)
    stfs f4, 0x124(r1)
    stfs f6, 0x230(r1)
    stfs f5, 0x234(r1)
    stfs f4, 0x238(r1)
    stfs f9, 0x110(r1)
    stfs f8, 0x114(r1)
    stfs f7, 0x118(r1)
    stfs f9, 0x240(r1)
    stfs f8, 0x244(r1)
    stfs f7, 0x248(r1)
    stfs f12, 0x104(r1)
    stfs f11, 0x108(r1)
    stfs f10, 0x10c(r1)
    stfs f12, 0x250(r1)
    stfs f11, 0x254(r1)
    stfs f10, 0x258(r1)
    stfs f30, 0xf8(r1)
    stfs f31, 0xfc(r1)
    stfs f13, 0x100(r1)
    stfs f30, 0x23c(r1)
    stfs f31, 0x24c(r1)
    stfs f13, 0x25c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0xf4(r1)
    bl fn_805F9750
    lfs f2, 0xf4(r1)
    lfs f0, lbl_8088476C
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802E7740_000011AC
    lfs f3, 0xf0(r1)
    lfs f0, lbl_80884768
    fcmpo cr0, f3, f0
    ble lbl_fn_802E7740_0000119C
    lfs f0, lbl_80884770
    b lbl_fn_802E7740_000011A0
lbl_fn_802E7740_0000119C:
    lfs f0, lbl_80884774
lbl_fn_802E7740_000011A0:
    fneg f0, f0
    stfs f0, 0xe0(r1)
    b lbl_fn_802E7740_000011C0
lbl_fn_802E7740_000011AC:
    lfs f1, 0xf0(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0xe0(r1)
lbl_fn_802E7740_000011C0:
    addi r3, r1, 0xe0
    lfs f2, lbl_80884768
    psq_l f1, 0x0(r3), 0, 0
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_80884778
    psq_st f1, 0x0(r30), 0, 0
    fcmpo cr0, f3, f0
    stfs f2, 0xe8(r1)
    lfs f0, 0xd8(r1)
    stfs f2, 0xdc(r1)
    blt lbl_fn_802E7740_00001820
    stfs f0, 0x538(r31)
    b lbl_fn_802E7740_00001820
lbl_fn_802E7740_000011F4:
    li r0, 0x1
    stw r0, 0x14e4(r31)
    bl fn_80680CF8
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    subf. r0, r4, r0
    bne lbl_fn_802E7740_00001220
    li r0, 0x8
    stw r0, 0x14e8(r31)
    b lbl_fn_802E7740_00001820
lbl_fn_802E7740_00001220:
    li r0, 0x9
    stw r0, 0x14e8(r31)
    b lbl_fn_802E7740_00001820
lbl_fn_802E7740_0000122C:
    lwz r4, 0x14f4(r3)
    cmpwi r4, 0x0
    beq lbl_fn_802E7740_00001820
    lfs f3, 0x530(r4)
    lfs f0, 0x530(r3)
    lfs f5, 0x52c(r4)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r3)
    lfs f0, 0x528(r3)
    addi r3, r1, 0x128
    lfs f3, 0x528(r4)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x12c(r1)
    stfs f0, 0x128(r1)
    stfs f6, 0x130(r1)
    bl fn_805F9940
    lwz r0, 0x14e8(r31)
    cmpwi r0, 0x8
    beq lbl_fn_802E7740_00001288
    cmpwi r0, 0x9
    beq lbl_fn_802E7740_000014F0
    b lbl_fn_802E7740_00001820
lbl_fn_802E7740_00001288:
    lfs f0, lbl_808847A0
    fcmpo cr0, f1, f0
    bge lbl_fn_802E7740_00001820
    li r0, 0x0
    stw r0, 0x14dc(r31)
    stw r0, 0x14e0(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0x8
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f0, lbl_80884760
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80884768
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x142
    lfs f2, lbl_80884764
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    lwz r4, 0x14f4(r31)
    addi r3, r1, 0x68
    lfs f3, lbl_80884768
    addi r30, r1, 0x74
    lfs f5, 0x530(r4)
    lfs f0, 0x530(r31)
    lfs f4, 0x528(r4)
    fsubs f2, f5, f0
    lfs f0, 0x528(r31)
    stfs f3, 0x6c(r1)
    fsubs f4, f4, f0
    lfs f0, lbl_8088476C
    stfs f2, 0x70(r1)
    stfs f4, 0x68(r1)
    frsp f4, f2
    psq_l f1, 0x0(r3), 0, 0
    fabs f5, f4
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x7c(r1)
    frsp f5, f5
    fcmpo cr0, f5, f0
    bge lbl_fn_802E7740_00001370
    lfs f0, 0x74(r1)
    fcmpo cr0, f0, f3
    ble lbl_fn_802E7740_00001364
    lfs f0, lbl_80884770
    b lbl_fn_802E7740_00001368
lbl_fn_802E7740_00001364:
    lfs f0, lbl_80884774
lbl_fn_802E7740_00001368:
    stfs f0, 0x84(r1)
    b lbl_fn_802E7740_00001384
lbl_fn_802E7740_00001370:
    fmr f2, f4
    lfs f1, 0x74(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x84(r1)
lbl_fn_802E7740_00001384:
    lfs f0, 0x84(r1)
    addi r3, r1, 0x200
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80884768
    addi r4, r1, 0x8c
    lfs f4, 0x208(r1)
    mr r5, r4
    lfs f5, 0x204(r1)
    addi r3, r1, 0x1c0
    lfs f6, 0x200(r1)
    lfs f7, 0x218(r1)
    lfs f8, 0x214(r1)
    lfs f9, 0x210(r1)
    lfs f10, 0x228(r1)
    lfs f11, 0x224(r1)
    lfs f12, 0x220(r1)
    lfs f13, 0x22c(r1)
    lfs f30, 0x21c(r1)
    lfs f31, 0x20c(r1)
    lfs f0, lbl_80884760
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x7c(r1)
    stfs f3, 0x1f0(r1)
    stfs f3, 0x1f4(r1)
    stfs f3, 0x1f8(r1)
    stfs f0, 0x1fc(r1)
    stfs f6, 0xbc(r1)
    stfs f5, 0xc0(r1)
    stfs f4, 0xc4(r1)
    stfs f6, 0x1c0(r1)
    stfs f5, 0x1c4(r1)
    stfs f4, 0x1c8(r1)
    stfs f9, 0xb0(r1)
    stfs f8, 0xb4(r1)
    stfs f7, 0xb8(r1)
    stfs f9, 0x1d0(r1)
    stfs f8, 0x1d4(r1)
    stfs f7, 0x1d8(r1)
    stfs f12, 0xa4(r1)
    stfs f11, 0xa8(r1)
    stfs f10, 0xac(r1)
    stfs f12, 0x1e0(r1)
    stfs f11, 0x1e4(r1)
    stfs f10, 0x1e8(r1)
    stfs f31, 0x98(r1)
    stfs f30, 0x9c(r1)
    stfs f13, 0xa0(r1)
    stfs f31, 0x1cc(r1)
    stfs f30, 0x1dc(r1)
    stfs f13, 0x1ec(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x94(r1)
    bl fn_805F9750
    lfs f2, 0x94(r1)
    lfs f0, lbl_8088476C
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802E7740_000014A0
    lfs f3, 0x90(r1)
    lfs f0, lbl_80884768
    fcmpo cr0, f3, f0
    ble lbl_fn_802E7740_00001490
    lfs f0, lbl_80884770
    b lbl_fn_802E7740_00001494
lbl_fn_802E7740_00001490:
    lfs f0, lbl_80884774
lbl_fn_802E7740_00001494:
    fneg f0, f0
    stfs f0, 0x80(r1)
    b lbl_fn_802E7740_000014B4
lbl_fn_802E7740_000014A0:
    lfs f1, 0x90(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x80(r1)
lbl_fn_802E7740_000014B4:
    addi r3, r1, 0x80
    lfs f2, lbl_80884768
    psq_l f1, 0x0(r3), 0, 0
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_80884778
    psq_st f1, 0x0(r30), 0, 0
    fcmpo cr0, f3, f0
    stfs f2, 0x88(r1)
    lfs f0, 0x78(r1)
    stfs f2, 0x7c(r1)
    blt lbl_fn_802E7740_000014E4
    stfs f0, 0x538(r31)
lbl_fn_802E7740_000014E4:
    li r0, 0x2
    stw r0, 0x14e4(r31)
    b lbl_fn_802E7740_00001820
lbl_fn_802E7740_000014F0:
    lfs f0, lbl_808847A0
    fcmpo cr0, f1, f0
    bge lbl_fn_802E7740_00001820
    li r0, 0x0
    stw r0, 0x14dc(r31)
    stw r0, 0x14e0(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0x9
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f0, lbl_80884760
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80884768
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x14d
    lfs f2, lbl_80884764
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    lwz r4, 0x14f4(r31)
    addi r3, r1, 0x8
    lfs f3, lbl_80884768
    addi r30, r1, 0x14
    lfs f5, 0x530(r4)
    lfs f0, 0x530(r31)
    lfs f4, 0x528(r4)
    fsubs f2, f5, f0
    lfs f0, 0x528(r31)
    stfs f3, 0xc(r1)
    fsubs f4, f4, f0
    lfs f0, lbl_8088476C
    stfs f2, 0x10(r1)
    stfs f4, 0x8(r1)
    frsp f4, f2
    psq_l f1, 0x0(r3), 0, 0
    fabs f5, f4
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x1c(r1)
    frsp f5, f5
    fcmpo cr0, f5, f0
    bge lbl_fn_802E7740_000015D8
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f3
    ble lbl_fn_802E7740_000015CC
    lfs f0, lbl_80884770
    b lbl_fn_802E7740_000015D0
lbl_fn_802E7740_000015CC:
    lfs f0, lbl_80884774
lbl_fn_802E7740_000015D0:
    stfs f0, 0x24(r1)
    b lbl_fn_802E7740_000015EC
lbl_fn_802E7740_000015D8:
    fmr f2, f4
    lfs f1, 0x14(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x24(r1)
lbl_fn_802E7740_000015EC:
    lfs f0, 0x24(r1)
    addi r3, r1, 0x190
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80884768
    addi r4, r1, 0x2c
    lfs f4, 0x198(r1)
    mr r5, r4
    lfs f5, 0x194(r1)
    addi r3, r1, 0x150
    lfs f6, 0x190(r1)
    lfs f7, 0x1a8(r1)
    lfs f8, 0x1a4(r1)
    lfs f9, 0x1a0(r1)
    lfs f10, 0x1b8(r1)
    lfs f11, 0x1b4(r1)
    lfs f12, 0x1b0(r1)
    lfs f13, 0x1bc(r1)
    lfs f30, 0x1ac(r1)
    lfs f31, 0x19c(r1)
    lfs f0, lbl_80884760
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x1c(r1)
    stfs f3, 0x180(r1)
    stfs f3, 0x184(r1)
    stfs f3, 0x188(r1)
    stfs f0, 0x18c(r1)
    stfs f6, 0x5c(r1)
    stfs f5, 0x60(r1)
    stfs f4, 0x64(r1)
    stfs f6, 0x150(r1)
    stfs f5, 0x154(r1)
    stfs f4, 0x158(r1)
    stfs f9, 0x50(r1)
    stfs f8, 0x54(r1)
    stfs f7, 0x58(r1)
    stfs f9, 0x160(r1)
    stfs f8, 0x164(r1)
    stfs f7, 0x168(r1)
    stfs f12, 0x44(r1)
    stfs f11, 0x48(r1)
    stfs f10, 0x4c(r1)
    stfs f12, 0x170(r1)
    stfs f11, 0x174(r1)
    stfs f10, 0x178(r1)
    stfs f31, 0x38(r1)
    stfs f30, 0x3c(r1)
    stfs f13, 0x40(r1)
    stfs f31, 0x15c(r1)
    stfs f30, 0x16c(r1)
    stfs f13, 0x17c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x34(r1)
    bl fn_805F9750
    lfs f2, 0x34(r1)
    lfs f0, lbl_8088476C
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802E7740_00001708
    lfs f3, 0x30(r1)
    lfs f0, lbl_80884768
    fcmpo cr0, f3, f0
    ble lbl_fn_802E7740_000016F8
    lfs f0, lbl_80884770
    b lbl_fn_802E7740_000016FC
lbl_fn_802E7740_000016F8:
    lfs f0, lbl_80884774
lbl_fn_802E7740_000016FC:
    fneg f0, f0
    stfs f0, 0x20(r1)
    b lbl_fn_802E7740_0000171C
lbl_fn_802E7740_00001708:
    lfs f1, 0x30(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x20(r1)
lbl_fn_802E7740_0000171C:
    addi r3, r1, 0x20
    lfs f2, lbl_80884768
    psq_l f1, 0x0(r3), 0, 0
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_80884778
    psq_st f1, 0x0(r30), 0, 0
    fcmpo cr0, f3, f0
    stfs f2, 0x28(r1)
    lfs f0, 0x18(r1)
    stfs f2, 0x1c(r1)
    blt lbl_fn_802E7740_0000174C
    stfs f0, 0x538(r31)
lbl_fn_802E7740_0000174C:
    li r0, 0x2
    stw r0, 0x14e4(r31)
    b lbl_fn_802E7740_00001820
lbl_fn_802E7740_00001758:
    li r0, 0x3
    stw r0, 0x14e4(r3)
    b lbl_fn_802E7740_00001820
lbl_fn_802E7740_00001764:
    lwz r4, 0x1504(r3)
    cmpwi r4, 0x0
    beq lbl_fn_802E7740_000017E8
    lfs f5, 0xc(r4)
    lfs f0, 0x530(r3)
    lfs f3, 0x528(r3)
    addi r3, r1, 0x134
    lfs f4, 0x4(r4)
    fsubs f5, f5, f0
    lfs f0, lbl_80884768
    fsubs f3, f4, f3
    stfs f5, 0x13c(r1)
    stfs f3, 0x134(r1)
    stfs f0, 0x138(r1)
    bl fn_805F9940
    lfs f0, lbl_80884798
    fcmpo cr0, f1, f0
    bge lbl_fn_802E7740_00001820
    li r30, 0x0
    stw r30, 0x14dc(r31)
    stw r30, 0x14e0(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0xa
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    li r0, 0x5
    stw r0, 0x1500(r31)
    stw r30, 0x14e4(r31)
    b lbl_fn_802E7740_00001820
lbl_fn_802E7740_000017E8:
    li r30, 0x0
    stw r30, 0x14dc(r3)
    stw r30, 0x14e0(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0xa
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    li r0, 0x5
    stw r0, 0x1500(r31)
    stw r30, 0x14e4(r31)
lbl_fn_802E7740_00001820:
    lwz r0, 0x2d4(r1)
    psq_l f31, 0x2c8(r1), 0, 0
    lfd f31, 0x2c0(r1)
    psq_l f30, 0x2b8(r1), 0, 0
    lfd f30, 0x2b0(r1)
    lwz r31, 0x2ac(r1)
    lwz r30, 0x2a8(r1)
    mtlr r0
    addi r1, r1, 0x2d0
    blr
}

asm void fn_802E8084(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    li r0, 0x0
    stw r31, 0x4c(r1)
    li r31, 0x1
    stw r30, 0x48(r1)
    mr r30, r4
    stw r29, 0x44(r1)
    mr r29, r3
    stw r4, 0x150c(r3)
    stb r31, 0x1508(r3)
    stw r0, 0x14dc(r3)
    stw r0, 0x14e0(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r29)
    mr r3, r29
    lwz r12, 0x0(r29)
    lwz r12, 0x48(r12)
    mtctr r12
    bctrl
    mr r3, r29
    bl fn_80178A6C
    mr r3, r29
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    bl fn_8015495C
    mr r3, r29
    bl fn_8016DA4C
    li r0, 0x2
    stw r0, 0x58c(r29)
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lfs f0, lbl_80884760
    cmpwi r30, 0x1
    li r0, 0x17
    stw r0, 0x560(r29)
    stw r31, 0x3fc(r29)
    stfs f0, 0x2fc(r29)
    stfs f0, 0x2e8(r29)
    beq lbl_fn_802E8084_00001910
    cmpwi r30, 0x2
    beq lbl_fn_802E8084_000019A4
    cmpwi r30, 0x3
    beq lbl_fn_802E8084_000019CC
    b lbl_fn_802E8084_000019F8
lbl_fn_802E8084_00001910:
    lfs f1, lbl_80884768
    addi r3, r29, 0xb0
    lfs f2, lbl_80884764
    li r4, 0x0
    li r5, 0x2f
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    li r3, 0x0
    li r4, 0x0
    bl fn_80232B7C
    lfs f0, lbl_80884768
    li r0, -0x1
    lfs f1, lbl_80884760
    addi r4, r29, 0x1510
    stfs f0, 0x1c(r1)
    addi r5, r29, 0xb0
    addi r7, r1, 0x10
    addi r8, r1, 0x1c
    stfs f0, 0x20(r1)
    addi r9, r1, 0x28
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x24(r1)
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f1, 0x28(r1)
    stfs f1, 0x2c(r1)
    stfs f1, 0x30(r1)
    stfs f1, 0x34(r1)
    stw r0, 0x8(r1)
    stw r31, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    b lbl_fn_802E8084_000019F8
lbl_fn_802E8084_000019A4:
    lfs f1, lbl_80884768
    addi r3, r29, 0xb0
    lfs f2, lbl_80884764
    li r4, 0x0
    li r5, 0x30
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_802E8084_000019F8
lbl_fn_802E8084_000019CC:
    lfs f0, lbl_808847A4
    addi r3, r29, 0xb0
    stfs f0, 0x2e8(r29)
    li r4, 0x0
    lfs f1, lbl_80884768
    li r5, 0x2e
    lfs f2, lbl_80884764
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
lbl_fn_802E8084_000019F8:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}
