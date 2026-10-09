#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void fn_8004D314(void);
extern void fn_80092814(void);
extern void fn_80092954(void);
extern void fn_80097C08(void);
extern void fn_80097CCC(void);
extern void fn_80097D7C(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_800CB440(void);
extern void fn_800CB5C8(void);
extern void fn_800F8548(void);
extern void fn_800F8574(void);
extern void fn_80108F38(void);
extern void fn_80126214(void);
extern void fn_8013A258(void);
extern void fn_8013CB68(void);
extern void fn_801426A4(void);
extern void fn_80148B0C(void);
extern void fn_80149A30(void);
extern void fn_80151448(void);
extern void fn_80158BB4(void);
extern void fn_8016E970(void);
extern void fn_801781B0(void);
extern void fn_80232B7C(void);
extern void fn_80239DAC(void);
extern void fn_8023A8B4(void);
extern void fn_8028702C(void);
extern void fn_80287400(void);
extern void fn_80287788(void);
extern void fn_802878EC(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_805F9990(void);
extern void fn_8068A850(void);
extern void fn_8068AEA4(void);
extern void fn_8068B100(void);

/* External data declarations */
extern u8 lbl_807450E0[];
extern u8 lbl_80745100[];
extern u8 lbl_807C7030[];
extern u8 lbl_807C8398[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F3C0;
extern u32 lbl_808839F0;
extern u32 lbl_808839F8;
extern u32 lbl_808839FC;
extern u32 lbl_80883A00;
extern u32 lbl_80883A08;
extern u32 lbl_80883A18;
extern u32 lbl_80883A28;
extern u32 lbl_80883A2C;
extern u32 lbl_80883A30;
extern u32 lbl_80883A34;
extern u32 lbl_80883A38;
extern u32 lbl_80883A3C;
extern u32 lbl_80883A40;
extern u32 lbl_80883A44;
extern u32 lbl_80883A48;
extern u32 lbl_80883A4C;
extern u32 lbl_80883A50;
extern u32 lbl_80883A54;
extern u32 lbl_80883A58;
extern u32 lbl_80883A5C;
extern u32 lbl_80883A60;
extern u32 lbl_80883A64;

/* Function declarations */
void fn_80283D60(void);
void fn_80283FD4(void);
void fn_8028429C(void);
void fn_802844E0(void);
void fn_802846F8(void);
void fn_802847CC(void);
void fn_80284CC8(void);
void fn_80285064(void);

asm void fn_80283D60(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    lfs f0, lbl_808839FC
    li r5, 0x1
    stw r0, 0xb4(r1)
    stfd f31, 0xa0(r1)
    psq_st f31, 0xa8(r1), 0, 0
    stw r31, 0x9c(r1)
    mr r31, r3
    stw r30, 0x98(r1)
    lwz r6, 0x7e0(r3)
    stfs f0, 0x48(r1)
    rlwinm r4, r6, 0, 12, 12
    subis r0, r4, 0x8
    stfs f0, 0x4c(r1)
    cmplwi r0, 0x0
    stfs f0, 0x50(r1)
    stfs f0, 0x54(r1)
    beq lbl_fn_80283D60_00000060
    rlwinm r4, r6, 0, 7, 7
    subis r0, r4, 0x100
    cmplwi r0, 0x0
    beq lbl_fn_80283D60_00000060
    li r5, 0x0
lbl_fn_80283D60_00000060:
    cmpwi r5, 0x0
    beq lbl_fn_80283D60_00000090
    lis r5, lbl_807C8398@ha
    addi r4, r5, lbl_807C8398@l
    lfs f3, lbl_807C8398@l(r5)
    lfs f2, 0x4(r4)
    lfs f1, 0x8(r4)
    lfs f0, 0xc(r4)
    stfs f3, 0x48(r1)
    stfs f2, 0x4c(r1)
    stfs f1, 0x50(r1)
    stfs f0, 0x54(r1)
lbl_fn_80283D60_00000090:
    lfs f1, 0x50(r1)
    lis r30, lbl_80745100@ha
    lfs f5, 0x15cc(r3)
    addi r30, r30, lbl_80745100@l
    lfs f2, 0x4c(r1)
    addi r4, r30, 0x177
    fsubs f13, f1, f5
    lfs f4, 0x15c8(r3)
    lfs f0, 0x54(r1)
    fsubs f12, f2, f4
    lfs f3, 0x15d0(r3)
    lfs f1, 0x48(r1)
    fsubs f31, f0, f3
    lfs f0, lbl_80883A28
    lfs f2, 0x15c4(r3)
    fmuls f10, f13, f0
    stfs f12, 0x2c(r1)
    fsubs f1, f1, f2
    fmuls f11, f31, f0
    stfs f13, 0x30(r1)
    fadds f6, f10, f5
    fmuls f9, f12, f0
    stfs f1, 0x28(r1)
    fadds f7, f11, f3
    fmuls f8, f1, f0
    lfs f3, lbl_80883A2C
    fadds f5, f9, f4
    fmuls f1, f3, f6
    stfs f31, 0x34(r1)
    fadds f4, f8, f2
    fmuls f0, f3, f7
    stfs f8, 0x18(r1)
    fmuls f2, f3, f5
    fmuls f3, f3, f4
    stfs f9, 0x1c(r1)
    fctiwz f1, f1
    fctiwz f2, f2
    stfs f10, 0x20(r1)
    fctiwz f3, f3
    fctiwz f0, f0
    stfd f1, 0x68(r1)
    stfd f3, 0x58(r1)
    lwz r5, 0x6c(r1)
    stfd f2, 0x60(r1)
    lwz r7, 0x5c(r1)
    stfd f0, 0x70(r1)
    lwz r6, 0x64(r1)
    lwz r0, 0x74(r1)
    stb r7, 0xc(r1)
    stb r6, 0xd(r1)
    stb r5, 0xe(r1)
    stb r0, 0xf(r1)
    lwz r0, 0xc(r1)
    stfs f11, 0x24(r1)
    stfs f4, 0x38(r1)
    stfs f5, 0x3c(r1)
    stfs f6, 0x40(r1)
    stfs f7, 0x44(r1)
    stfs f4, 0x15c4(r3)
    stfs f5, 0x15c8(r3)
    stfs f6, 0x15cc(r3)
    stfs f7, 0x15d0(r3)
    addi r3, r3, 0xb0
    stw r0, 0x14(r1)
    bl fn_80092954
    lbz r0, 0x14(r1)
    addi r4, r30, 0x182
    stb r0, 0x18(r3)
    lbz r0, 0x15(r1)
    stb r0, 0x19(r3)
    lbz r0, 0x16(r1)
    stb r0, 0x1a(r3)
    lbz r0, 0x17(r1)
    stb r0, 0x1b(r3)
    addi r3, r31, 0xb0
    lfs f4, lbl_80883A2C
    lfs f0, 0x15c4(r31)
    lfs f2, 0x15c8(r31)
    fmuls f3, f4, f0
    lfs f1, 0x15cc(r31)
    lfs f0, 0x15d0(r31)
    fmuls f2, f4, f2
    fmuls f1, f4, f1
    fmuls f0, f4, f0
    fctiwz f3, f3
    fctiwz f2, f2
    fctiwz f1, f1
    stfd f3, 0x78(r1)
    fctiwz f0, f0
    stfd f2, 0x80(r1)
    lwz r7, 0x7c(r1)
    stfd f1, 0x88(r1)
    lwz r6, 0x84(r1)
    stfd f0, 0x90(r1)
    lwz r5, 0x8c(r1)
    lwz r0, 0x94(r1)
    stb r7, 0x8(r1)
    stb r6, 0x9(r1)
    stb r5, 0xa(r1)
    stb r0, 0xb(r1)
    lwz r0, 0x8(r1)
    stw r0, 0x10(r1)
    bl fn_80092954
    lbz r0, 0x10(r1)
    stb r0, 0x18(r3)
    lbz r0, 0x11(r1)
    stb r0, 0x19(r3)
    lbz r0, 0x12(r1)
    stb r0, 0x1a(r3)
    lbz r0, 0x13(r1)
    stb r0, 0x1b(r3)
    mr r3, r31
    bl fn_80149A30
    lwz r0, 0xb4(r1)
    psq_l f31, 0xa8(r1), 0, 0
    lfd f31, 0xa0(r1)
    lwz r31, 0x9c(r1)
    lwz r30, 0x98(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_80283FD4(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    li r6, 0x1
    stw r0, 0x74(r1)
    stfd f31, 0x60(r1)
    psq_st f31, 0x68(r1), 0, 0
    stw r31, 0x5c(r1)
    mr r31, r4
    stw r30, 0x58(r1)
    mr r30, r3
    stw r29, 0x54(r1)
    lwz r7, 0x7e0(r3)
    rlwinm r5, r7, 0, 12, 12
    subis r0, r5, 0x8
    cmplwi r0, 0x0
    beq lbl_fn_80283FD4_000002C8
    rlwinm r5, r7, 0, 7, 7
    subis r0, r5, 0x100
    cmplwi r0, 0x0
    beq lbl_fn_80283FD4_000002C8
    li r6, 0x0
lbl_fn_80283FD4_000002C8:
    cmpwi r6, 0x0
    bne lbl_fn_80283FD4_00000460
    lwz r0, 0x58c(r3)
    cmpwi r0, 0xe
    beq lbl_fn_80283FD4_00000460
    cmpwi r0, 0x8
    bne lbl_fn_80283FD4_000002FC
    lis r5, lbl_807C7030@ha
    addi r5, r5, lbl_807C7030@l
    psq_l f1, 0x0(r5), 0, 0
    lfs f2, 0x8(r5)
    stfs f2, 0x18(r4)
    psq_st f1, 0x10(r4), 0, 0
lbl_fn_80283FD4_000002FC:
    lwz r4, 0x8(r4)
    lbz r0, 0x1(r4)
    cmpwi r0, 0x1
    beq lbl_fn_80283FD4_00000418
    lfs f3, 0x1534(r3)
    lfs f0, lbl_80883A08
    fabs f3, f3
    frsp f3, f3
    fcmpo cr0, f3, f0
    blt lbl_fn_80283FD4_00000418
    lfs f3, lbl_808839F8
    li r29, 0x0
    lfs f0, lbl_808839FC
    li r4, 0x79
    stfs f3, 0x8(r1)
    stfs f3, 0xc(r1)
    stfs f0, 0x10(r1)
    lfs f1, 0x538(r3)
    addi r3, r1, 0x20
    bl fn_805F8E70
    addi r4, r1, 0x8
    addi r3, r1, 0x20
    mr r5, r4
    bl fn_805F93C0
    lfs f3, 0x24(r31)
    addi r3, r1, 0x14
    lfs f0, 0x530(r30)
    addi r4, r1, 0x8
    lfs f5, 0x20(r31)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r30)
    lfs f3, 0x1c(r31)
    lfs f0, 0x528(r30)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x18(r1)
    stfs f0, 0x14(r1)
    stfs f6, 0x1c(r1)
    bl fn_805F9990
    lwz r0, 0x58c(r30)
    fmr f31, f1
    cmpwi r0, 0x8
    bne lbl_fn_80283FD4_000003D0
    lfs f3, 0x1534(r30)
    lfs f0, lbl_80883A00
    fmuls f1, f3, f0
    bl fn_8068A850
    frsp f0, f1
    fneg f0, f0
    fcmpo cr0, f31, f0
    bge lbl_fn_80283FD4_000003F0
    li r29, 0x1
    b lbl_fn_80283FD4_000003F0
lbl_fn_80283FD4_000003D0:
    lfs f3, 0x1534(r30)
    lfs f0, lbl_80883A00
    fmuls f1, f3, f0
    bl fn_8068A850
    frsp f0, f1
    fcmpo cr0, f31, f0
    ble lbl_fn_80283FD4_000003F0
    li r29, 0x1
lbl_fn_80283FD4_000003F0:
    cmpwi r29, 0x0
    beq lbl_fn_80283FD4_00000418
    lis r3, lbl_807C7030@ha
    li r0, 0x1
    addi r3, r3, lbl_807C7030@l
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x8(r3)
    stfs f2, 0x18(r31)
    psq_st f1, 0x10(r31), 0, 0
    stw r0, 0x48(r31)
lbl_fn_80283FD4_00000418:
    lwz r0, 0x48(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80283FD4_00000460
    lwz r0, 0x58c(r30)
    cmpwi r0, 0x8
    bne lbl_fn_80283FD4_00000460
    lwz r0, 0x158c(r30)
    cmpwi r0, 0x1
    bne lbl_fn_80283FD4_00000460
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x0
    li r6, 0x0
    bl fn_80239DAC
    addi r3, r30, 0x151c
    li r4, 0x0
    li r5, 0x0
    bl fn_800CB5C8
lbl_fn_80283FD4_00000460:
    lwz r0, 0x58c(r30)
    cmpwi r0, 0xf
    bne lbl_fn_80283FD4_00000494
    lfs f4, 0x10(r31)
    lfs f5, lbl_808839F8
    lfs f3, 0x14(r31)
    lfs f0, 0x18(r31)
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    fmuls f0, f0, f5
    stfs f4, 0x10(r31)
    stfs f3, 0x14(r31)
    stfs f0, 0x18(r31)
lbl_fn_80283FD4_00000494:
    addi r3, r31, 0x10
    bl fn_805F9920
    fabs f3, f1
    lfs f0, lbl_80883A08
    frsp f3, f3
    fcmpo cr0, f3, f0
    blt lbl_fn_80283FD4_000004F4
    lfs f0, lbl_80883A30
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_80283FD4_000004F4
    addi r3, r31, 0x10
    mr r4, r3
    bl fn_805F98D0
    lfs f4, 0x10(r31)
    lfs f5, lbl_80883A34
    lfs f3, 0x14(r31)
    lfs f0, 0x18(r31)
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    fmuls f0, f0, f5
    stfs f4, 0x10(r31)
    stfs f3, 0x14(r31)
    stfs f0, 0x18(r31)
lbl_fn_80283FD4_000004F4:
    mr r3, r30
    mr r4, r31
    bl fn_80151448
    lwz r12, 0x0(r30)
    mr r3, r30
    mr r4, r31
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r0, 0x74(r1)
    psq_l f31, 0x68(r1), 0, 0
    lfd f31, 0x60(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_8028429C(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    mr r31, r3
    stw r30, 0x48(r1)
    mr r30, r4
    lwz r0, 0x55c(r3)
    lwz r5, 0x1554(r3)
    cmpwi r0, 0x6
    addi r0, r5, 0x1
    stw r0, 0x1554(r3)
    bne lbl_fn_8028429C_00000604
    lwz r4, 0x560(r3)
    subi r0, r4, 0x16
    cmplwi r0, 0x1
    bgt lbl_fn_8028429C_00000604
    lwz r5, 0x14f4(r3)
    li r0, 0x0
    li r4, 0x6
    stw r4, 0x58c(r3)
    cmpwi r5, 0x0
    stw r0, 0x14b0(r3)
    stw r0, 0x158c(r3)
    beq lbl_fn_8028429C_000005A8
    lwz r0, 0x68(r5)
    b lbl_fn_8028429C_000005AC
lbl_fn_8028429C_000005A8:
    li r0, 0x5a
lbl_fn_8028429C_000005AC:
    stw r0, 0x1594(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    addi r3, r31, 0x151c
    li r4, 0xf
    li r5, 0x0
    bl fn_800CB5C8
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0xc8
    li r6, 0x0
    bl fn_80239DAC
    addi r3, r31, 0x151c
    li r4, 0xf
    li r5, 0x0
    bl fn_800CB5C8
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0xc8
    li r6, 0x0
    bl fn_80239DAC
lbl_fn_8028429C_00000604:
    lwz r0, 0x7e0(r31)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_8028429C_00000620
    mr r3, r31
    bl fn_80287788
    b lbl_fn_8028429C_00000768
lbl_fn_8028429C_00000620:
    lwz r3, 0x8(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8028429C_00000768
    lwz r0, 0x4(r3)
    cmpwi r0, 0x1791
    bne lbl_fn_8028429C_00000768
    lwz r3, 0x14f4(r31)
    li r0, 0x0
    stw r0, 0x14b0(r31)
    cmpwi r3, 0x0
    stw r0, 0x158c(r31)
    beq lbl_fn_8028429C_00000658
    lwz r0, 0x68(r3)
    b lbl_fn_8028429C_0000065C
lbl_fn_8028429C_00000658:
    li r0, 0x5a
lbl_fn_8028429C_0000065C:
    stw r0, 0x1594(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    addi r3, r31, 0x151c
    li r4, 0xf
    li r5, 0x0
    bl fn_800CB5C8
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0xc8
    li r6, 0x0
    bl fn_80239DAC
    li r0, 0xf
    stw r0, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lfs f1, lbl_808839F8
    li r30, 0x1
    lfs f0, lbl_808839FC
    addi r3, r31, 0xb0
    stw r30, 0x3fc(r31)
    li r4, 0x0
    lfs f2, lbl_80883A38
    li r5, 0x2
    stfs f0, 0x2fc(r31)
    li r6, 0x1
    li r7, 0x1
    li r8, 0x1
    stfs f1, 0x2e8(r31)
    bl fn_80097C08
    mr r3, r31
    li r4, 0xc8
    bl fn_80232B7C
    lfs f0, lbl_808839F8
    li r0, -0x1
    lfs f1, lbl_808839FC
    addi r4, r31, 0x15b0
    stfs f0, 0x30(r1)
    addi r5, r31, 0xb0
    addi r7, r1, 0x3c
    addi r8, r1, 0x30
    stfs f0, 0x34(r1)
    addi r9, r1, 0x20
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x38(r1)
    stfs f0, 0x3c(r1)
    stfs f0, 0x40(r1)
    stfs f0, 0x44(r1)
    stfs f1, 0x20(r1)
    stfs f1, 0x24(r1)
    stfs f1, 0x28(r1)
    stfs f1, 0x2c(r1)
    stw r0, 0x8(r1)
    stw r30, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r30, lbl_8087F048
    mr r4, r31
    addi r3, r1, 0x10
    bl fn_801781B0
    mr r3, r30
    addi r4, r1, 0x10
    li r5, 0x80
    bl fn_80108F38
lbl_fn_8028429C_00000768:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_802844E0(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    li r0, 0x0
    stw r31, 0x5c(r1)
    mr r31, r3
    stw r30, 0x58(r1)
    mr r30, r5
    stw r29, 0x54(r1)
    mr r29, r4
    lwz r6, 0x14f4(r3)
    stw r0, 0x14b0(r3)
    cmpwi r6, 0x0
    stw r0, 0x158c(r3)
    beq lbl_fn_802844E0_000007C4
    lwz r0, 0x68(r6)
    b lbl_fn_802844E0_000007C8
lbl_fn_802844E0_000007C4:
    li r0, 0x5a
lbl_fn_802844E0_000007C8:
    stw r0, 0x1594(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    addi r3, r31, 0x151c
    li r4, 0xf
    li r5, 0x0
    bl fn_800CB5C8
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0xc8
    li r6, 0x0
    bl fn_80239DAC
    li r0, 0xd
    stw r0, 0x58c(r31)
    lfs f1, lbl_808839F8
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097CCC
    lfs f0, lbl_808839FC
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_808839F8
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x68
    lfs f2, lbl_80883A38
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f3, 0x8(r29)
    addi r3, r31, 0xb0
    lfs f0, 0x8(r30)
    li r4, 0x0
    lfs f5, 0x4(r29)
    fadds f6, f3, f0
    lfs f4, 0x4(r30)
    lfs f3, 0x0(r29)
    lfs f0, 0x0(r30)
    fadds f4, f5, f4
    stfs f6, 0x10(r1)
    fadds f0, f3, f0
    stfs f4, 0xc(r1)
    stfs f0, 0x8(r1)
    bl fn_80097D7C
    fctiwz f0, f1
    lis r4, 0x4330
    lis r3, lbl_807450E0@ha
    lwz r0, 0x5c0(r31)
    stfd f0, 0x30(r1)
    addi r7, r1, 0x14
    lwz r6, 0x34(r1)
    addi r8, r31, 0x1548
    lfd f7, lbl_807450E0@l(r3)
    li r3, 0x0
    xoris r5, r6, 0x8000
    stw r4, 0x38(r1)
    lfs f0, lbl_808839FC
    clrrwi r0, r0, 1
    stw r5, 0x3c(r1)
    lfs f5, 0x10(r1)
    lfd f3, 0x38(r1)
    lfs f6, 0xc(r1)
    fsubs f8, f3, f7
    lfs f3, 0x530(r31)
    lfs f4, 0x52c(r31)
    fsubs f11, f5, f3
    lfs f3, 0x8(r1)
    fdivs f8, f0, f8
    lfs f0, 0x528(r31)
    stw r6, 0x159c(r31)
    lfs f5, lbl_80883A18
    stw r4, 0x40(r1)
    stw r4, 0x48(r1)
    fsubs f10, f6, f4
    stw r5, 0x4c(r1)
    fsubs f9, f3, f0
    lfs f3, lbl_80883A00
    fmuls f2, f11, f8
    lfd f0, 0x48(r1)
    fmuls f6, f10, f8
    stfs f2, 0x1550(r31)
    fmuls f4, f9, f8
    stfs f6, 0x18(r1)
    stfs f4, 0x14(r1)
    fsubs f4, f0, f7
    psq_l f1, 0x0(r7), 0, 0
    psq_st f1, 0x0(r8), 0, 0
    lwz r4, lbl_8087F0A8
    lfs f0, 0x154c(r31)
    lwz r4, 0x30(r4)
    stfs f9, 0x20(r1)
    mullw r4, r4, r4
    stw r3, 0x1590(r31)
    stw r0, 0x5c0(r31)
    xoris r3, r4, 0x8000
    stw r3, 0x44(r1)
    lfd f6, 0x40(r1)
    stfs f10, 0x24(r1)
    fsubs f6, f6, f7
    stfs f11, 0x28(r1)
    fdivs f5, f5, f6
    stfs f2, 0x1c(r1)
    fmuls f4, f4, f5
    fnmsubs f0, f3, f4, f0
    stfs f0, 0x154c(r31)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_802846F8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r4, 0x14f4(r3)
    stw r0, 0x14b0(r3)
    cmpwi r4, 0x0
    stw r0, 0x158c(r3)
    beq lbl_fn_802846F8_000009CC
    lwz r0, 0x68(r4)
    b lbl_fn_802846F8_000009D0
lbl_fn_802846F8_000009CC:
    li r0, 0x5a
lbl_fn_802846F8_000009D0:
    stw r0, 0x1594(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    addi r3, r31, 0x151c
    li r4, 0xf
    li r5, 0x0
    bl fn_800CB5C8
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0xc8
    li r6, 0x0
    bl fn_80239DAC
    li r0, 0xe
    stw r0, 0x58c(r31)
    mr r3, r31
    li r4, 0x6
    bl fn_8016E970
    lfs f0, lbl_808839FC
    li r3, 0x16
    li r0, 0x1
    stw r3, 0x560(r31)
    lfs f1, lbl_808839F8
    addi r3, r31, 0xb0
    stw r0, 0x3fc(r31)
    li r4, 0x0
    lfs f2, lbl_80883A3C
    li r5, 0x1dd
    stfs f0, 0x2fc(r31)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802847CC(void)
{
    nofralloc
    stwu r1, -0x210(r1)
    mflr r0
    lfs f0, lbl_808839F8
    stw r0, 0x214(r1)
    stfd f31, 0x200(r1)
    psq_st f31, 0x208(r1), 0, 0
    stfd f30, 0x1f0(r1)
    psq_st f30, 0x1f8(r1), 0, 0
    lfs f30, lbl_808839FC
    stfd f29, 0x1e0(r1)
    psq_st f29, 0x1e8(r1), 0, 0
    stfd f28, 0x1d0(r1)
    psq_st f28, 0x1d8(r1), 0, 0
    stw r31, 0x1cc(r1)
    stw r30, 0x1c8(r1)
    stw r29, 0x1c4(r1)
    mr r29, r3
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x7
    bne lbl_fn_802847CC_00000EF4
    addi r3, r3, 0x1030
    bl fn_80126214
    addi r4, r29, 0x1088
    addi r31, r1, 0xbc
    psq_l f1, 0x0(r4), 0, 0
    mr r3, r31
    lfs f2, 0x1090(r29)
    stfs f2, 0xc4(r1)
    psq_st f1, 0x0(r31), 0, 0
    bl fn_805F9940
    lfs f0, lbl_80883A40
    fmr f31, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_802847CC_00000CCC
    addi r30, r1, 0xa4
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0xc4(r1)
    mr r3, r30
    psq_st f1, 0x0(r30), 0, 0
    mr r4, r30
    stfs f2, 0xac(r1)
    bl fn_805F98D0
    lfs f2, 0xac(r1)
    addi r31, r1, 0xb0
    psq_l f1, 0x0(r30), 0, 0
    fabs f3, f2
    lfs f0, lbl_80883A08
    psq_st f1, 0x0(r31), 0, 0
    frsp f3, f3
    stfs f2, 0xb8(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_802847CC_00000B60
    lfs f3, 0xb0(r1)
    lfs f0, lbl_808839F8
    fcmpo cr0, f3, f0
    ble lbl_fn_802847CC_00000B54
    lfs f0, lbl_80883A44
    b lbl_fn_802847CC_00000B58
lbl_fn_802847CC_00000B54:
    lfs f0, lbl_80883A48
lbl_fn_802847CC_00000B58:
    stfs f0, 0x90(r1)
    b lbl_fn_802847CC_00000B74
lbl_fn_802847CC_00000B60:
    frsp f2, f2
    lfs f1, 0xb0(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x90(r1)
lbl_fn_802847CC_00000B74:
    lfs f0, 0x90(r1)
    addi r3, r1, 0x148
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808839F8
    addi r4, r1, 0x80
    lfs f28, 0x150(r1)
    mr r5, r4
    lfs f29, 0x14c(r1)
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
    lfs f0, lbl_808839FC
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0xb8(r1)
    stfs f3, 0x1a8(r1)
    stfs f3, 0x1ac(r1)
    stfs f3, 0x1b0(r1)
    stfs f0, 0x1b4(r1)
    stfs f13, 0x50(r1)
    stfs f29, 0x54(r1)
    stfs f28, 0x58(r1)
    stfs f13, 0x178(r1)
    stfs f29, 0x17c(r1)
    stfs f28, 0x180(r1)
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
    lfs f0, lbl_80883A08
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802847CC_00000C90
    lfs f3, 0x84(r1)
    lfs f0, lbl_808839F8
    fcmpo cr0, f3, f0
    ble lbl_fn_802847CC_00000C80
    lfs f0, lbl_80883A44
    b lbl_fn_802847CC_00000C84
lbl_fn_802847CC_00000C80:
    lfs f0, lbl_80883A48
lbl_fn_802847CC_00000C84:
    fneg f0, f0
    stfs f0, 0x8c(r1)
    b lbl_fn_802847CC_00000CA4
lbl_fn_802847CC_00000C90:
    lfs f1, 0x84(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x8c(r1)
lbl_fn_802847CC_00000CA4:
    lfs f2, lbl_808839F8
    addi r3, r1, 0x8c
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0xc8
    stfs f2, 0x94(r1)
    stfs f2, 0xb8(r1)
    frsp f2, f2
    psq_st f1, 0x0(r31), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0xd0(r1)
lbl_fn_802847CC_00000CCC:
    lwz r6, 0x1580(r29)
    addi r30, r1, 0xbc
    lfs f4, 0x52c(r29)
    addi r5, r1, 0x98
    lfs f5, 0x52c(r6)
    mr r3, r30
    lfs f3, 0x528(r6)
    mr r4, r30
    fsubs f5, f5, f4
    lfs f0, 0x528(r29)
    lfs f4, 0x530(r6)
    fsubs f3, f3, f0
    stfs f5, 0x9c(r1)
    lfs f0, 0x530(r29)
    stfs f3, 0x98(r1)
    fsubs f2, f4, f0
    lfs f0, lbl_808839F8
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0xa0(r1)
    stfs f2, 0xc4(r1)
    stfs f0, 0xc0(r1)
    bl fn_805F98D0
    lfs f2, 0xc4(r1)
    lfs f0, lbl_80883A08
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802847CC_00000D64
    lfs f3, 0xbc(r1)
    lfs f0, lbl_808839F8
    fcmpo cr0, f3, f0
    ble lbl_fn_802847CC_00000D58
    lfs f0, lbl_80883A44
    b lbl_fn_802847CC_00000D5C
lbl_fn_802847CC_00000D58:
    lfs f0, lbl_80883A48
lbl_fn_802847CC_00000D5C:
    stfs f0, 0xc(r1)
    b lbl_fn_802847CC_00000D74
lbl_fn_802847CC_00000D64:
    lfs f1, 0xbc(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0xc(r1)
lbl_fn_802847CC_00000D74:
    lfs f0, 0xc(r1)
    addi r3, r1, 0x118
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808839F8
    addi r4, r1, 0x14
    lfs f4, 0x120(r1)
    mr r5, r4
    lfs f5, 0x11c(r1)
    addi r3, r1, 0xd8
    lfs f6, 0x118(r1)
    lfs f7, 0x130(r1)
    lfs f8, 0x12c(r1)
    lfs f9, 0x128(r1)
    lfs f10, 0x140(r1)
    lfs f11, 0x13c(r1)
    lfs f12, 0x138(r1)
    lfs f13, 0x144(r1)
    lfs f28, 0x134(r1)
    lfs f29, 0x124(r1)
    lfs f0, lbl_808839FC
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0xc4(r1)
    stfs f3, 0x108(r1)
    stfs f3, 0x10c(r1)
    stfs f3, 0x110(r1)
    stfs f0, 0x114(r1)
    stfs f6, 0x44(r1)
    stfs f5, 0x48(r1)
    stfs f4, 0x4c(r1)
    stfs f6, 0xd8(r1)
    stfs f5, 0xdc(r1)
    stfs f4, 0xe0(r1)
    stfs f9, 0x38(r1)
    stfs f8, 0x3c(r1)
    stfs f7, 0x40(r1)
    stfs f9, 0xe8(r1)
    stfs f8, 0xec(r1)
    stfs f7, 0xf0(r1)
    stfs f12, 0x2c(r1)
    stfs f11, 0x30(r1)
    stfs f10, 0x34(r1)
    stfs f12, 0xf8(r1)
    stfs f11, 0xfc(r1)
    stfs f10, 0x100(r1)
    stfs f29, 0x20(r1)
    stfs f28, 0x24(r1)
    stfs f13, 0x28(r1)
    stfs f29, 0xe4(r1)
    stfs f28, 0xf4(r1)
    stfs f13, 0x104(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x1c(r1)
    bl fn_805F9750
    lfs f2, 0x1c(r1)
    lfs f0, lbl_80883A08
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802847CC_00000E90
    lfs f3, 0x18(r1)
    lfs f0, lbl_808839F8
    fcmpo cr0, f3, f0
    ble lbl_fn_802847CC_00000E80
    lfs f0, lbl_80883A44
    b lbl_fn_802847CC_00000E84
lbl_fn_802847CC_00000E80:
    lfs f0, lbl_80883A48
lbl_fn_802847CC_00000E84:
    fneg f0, f0
    stfs f0, 0x8(r1)
    b lbl_fn_802847CC_00000EA4
lbl_fn_802847CC_00000E90:
    lfs f1, 0x18(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x8(r1)
lbl_fn_802847CC_00000EA4:
    addi r3, r1, 0x8
    lfs f2, lbl_808839F8
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0xc4(r1)
    lfs f0, 0xc0(r1)
    lwz r0, 0x58c(r29)
    stfs f2, 0x10(r1)
    cmpwi r0, 0xc
    stfs f0, 0x538(r29)
    bne lbl_fn_802847CC_00000ED8
    lfs f0, 0x155c(r29)
    fmuls f30, f30, f0
lbl_fn_802847CC_00000ED8:
    lfs f0, 0x568(r29)
    fmr f1, f31
    mr r3, r29
    addi r4, r1, 0xc8
    fmuls f2, f0, f30
    bl fn_801426A4
    b lbl_fn_802847CC_00000F2C
lbl_fn_802847CC_00000EF4:
    cmpwi r0, 0x6
    bne lbl_fn_802847CC_00000F04
    bl fn_8013A258
    b lbl_fn_802847CC_00000F2C
lbl_fn_802847CC_00000F04:
    psq_l f1, 0x534(r3), 0, 0
    addi r4, r1, 0xc8
    lfs f2, 0x53c(r3)
    li r5, 0x0
    stfs f2, 0xd0(r1)
    psq_st f1, 0x0(r4), 0, 0
    fmr f1, f0
    lfs f0, 0x568(r3)
    fmuls f2, f0, f30
    bl fn_8013CB68
lbl_fn_802847CC_00000F2C:
    lwz r0, 0x214(r1)
    psq_l f31, 0x208(r1), 0, 0
    lfd f31, 0x200(r1)
    psq_l f30, 0x1f8(r1), 0, 0
    lfd f30, 0x1f0(r1)
    psq_l f29, 0x1e8(r1), 0, 0
    lfd f29, 0x1e0(r1)
    psq_l f28, 0x1d8(r1), 0, 0
    lfd f28, 0x1d0(r1)
    lwz r31, 0x1cc(r1)
    lwz r30, 0x1c8(r1)
    lwz r29, 0x1c4(r1)
    mtlr r0
    addi r1, r1, 0x210
    blr
}

asm void fn_80284CC8(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    stw r31, 0x2c(r1)
    mr r31, r3
    lwz r4, 0x1554(r3)
    lwz r0, 0x1558(r3)
    lwz r5, 0x1594(r3)
    cmpw r4, r0
    subi r0, r5, 0x1
    stw r0, 0x1594(r3)
    blt lbl_fn_80284CC8_00000FB4
    lwz r0, 0x1574(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80284CC8_00000FB4
    lwz r4, 0x1580(r3)
    bl fn_802878EC
lbl_fn_80284CC8_00000FB4:
    lwz r3, 0x1580(r31)
    lwz r0, 0x1584(r31)
    cmplw r3, r0
    beq lbl_fn_80284CC8_00001004
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lwz r3, 0x14f4(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80284CC8_00000FE4
    lwz r0, 0x68(r3)
    b lbl_fn_80284CC8_00000FE8
lbl_fn_80284CC8_00000FE4:
    li r0, 0x5a
lbl_fn_80284CC8_00000FE8:
    stw r0, 0x1594(r31)
    mr r3, r31
    lwz r4, 0x1580(r31)
    li r5, 0x6
    bl fn_80287400
    cmpwi r3, 0x0
    bne lbl_fn_80284CC8_000012E8
lbl_fn_80284CC8_00001004:
    lwz r3, 0x1580(r31)
    lfs f0, 0x530(r31)
    lfs f2, 0x530(r3)
    lfs f1, 0x528(r3)
    fsubs f3, f2, f0
    lfs f0, 0x528(r31)
    lfs f2, 0x52c(r3)
    fsubs f4, f1, f0
    lfs f1, 0x52c(r31)
    fmuls f0, f3, f3
    fsubs f2, f2, f1
    stfs f4, 0x14(r1)
    fmadds f1, f4, f4, f0
    stfs f2, 0x18(r1)
    stfs f3, 0x1c(r1)
    bl fn_8068B100
    lwz r0, 0x1594(r31)
    frsp f31, f1
    cmpwi r0, 0x0
    bge lbl_fn_80284CC8_000010B8
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lfs f0, 0x14f0(r31)
    fcmpo cr0, f31, f0
    cror eq, lt, eq
    bne lbl_fn_80284CC8_00001098
    lwz r4, 0x1580(r31)
    mr r3, r31
    li r5, 0x8
    bl fn_80287400
    cmpwi r3, 0x0
    bne lbl_fn_80284CC8_000012E8
    lwz r4, 0x1580(r31)
    mr r3, r31
    bl fn_8028702C
    b lbl_fn_80284CC8_000012E8
lbl_fn_80284CC8_00001098:
    lwz r3, 0x14f4(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80284CC8_000010AC
    lwz r0, 0x68(r3)
    b lbl_fn_80284CC8_000010B0
lbl_fn_80284CC8_000010AC:
    li r0, 0x5a
lbl_fn_80284CC8_000010B0:
    stw r0, 0x1594(r31)
    b lbl_fn_80284CC8_000012E8
lbl_fn_80284CC8_000010B8:
    lfs f2, lbl_808839F8
    addi r5, r31, 0x528
    lfs f0, lbl_80883A4C
    addi r6, r1, 0x8
    stfs f2, 0x8(r1)
    li r4, 0x0
    lwz r3, lbl_8087EE98
    lis r7, 0x8000
    stfs f0, 0xc(r1)
    li r8, 0x0
    lfs f1, lbl_80883A50
    li r9, 0x0
    stfs f2, 0x10(r1)
    bl fn_8004D314
    cmpwi r3, 0x0
    beq lbl_fn_80284CC8_000012E8
    lwz r3, 0x1530(r31)
    lfs f0, lbl_808839F0
    cmpwi r3, 0x0
    beq lbl_fn_80284CC8_0000110C
    lfs f0, 0x40(r3)
lbl_fn_80284CC8_0000110C:
    fcmpo cr0, f31, f0
    bge lbl_fn_80284CC8_00001208
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lwz r4, 0x1580(r31)
    mr r3, r31
    li r5, 0xb
    bl fn_80287400
    cmpwi r3, 0x0
    bne lbl_fn_80284CC8_000012E8
    lwz r3, 0x14f4(r31)
    li r0, 0x0
    stw r0, 0x14b0(r31)
    cmpwi r3, 0x0
    stw r0, 0x158c(r31)
    beq lbl_fn_80284CC8_00001158
    lwz r0, 0x68(r3)
    b lbl_fn_80284CC8_0000115C
lbl_fn_80284CC8_00001158:
    li r0, 0x5a
lbl_fn_80284CC8_0000115C:
    stw r0, 0x1594(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    addi r3, r31, 0x151c
    li r4, 0xf
    li r5, 0x0
    bl fn_800CB5C8
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0xc8
    li r6, 0x0
    bl fn_80239DAC
    li r0, 0xb
    stw r0, 0x58c(r31)
    lfs f1, lbl_808839F8
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097CCC
    lfs f0, lbl_808839FC
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_808839F8
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x14
    lfs f2, lbl_80883A38
    li r6, 0x1
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r3, 0x1530(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80284CC8_000011F4
    lwz r3, 0x68(r3)
    b lbl_fn_80284CC8_000011F8
lbl_fn_80284CC8_000011F4:
    li r3, 0x3c
lbl_fn_80284CC8_000011F8:
    lwz r0, 0x1580(r31)
    stw r3, 0x1590(r31)
    stw r0, 0x1584(r31)
    b lbl_fn_80284CC8_000012E8
lbl_fn_80284CC8_00001208:
    lfs f0, 0x152c(r31)
    fcmpo cr0, f31, f0
    bge lbl_fn_80284CC8_000012E8
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lwz r4, 0x1580(r31)
    mr r3, r31
    li r5, 0xa
    bl fn_80287400
    cmpwi r3, 0x0
    bne lbl_fn_80284CC8_000012E8
    lwz r3, 0x14f4(r31)
    li r0, 0x0
    stw r0, 0x14b0(r31)
    cmpwi r3, 0x0
    stw r0, 0x158c(r31)
    beq lbl_fn_80284CC8_00001258
    lwz r0, 0x68(r3)
    b lbl_fn_80284CC8_0000125C
lbl_fn_80284CC8_00001258:
    li r0, 0x5a
lbl_fn_80284CC8_0000125C:
    stw r0, 0x1594(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    addi r3, r31, 0x151c
    li r4, 0xf
    li r5, 0x0
    bl fn_800CB5C8
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0xc8
    li r6, 0x0
    bl fn_80239DAC
    li r0, 0xa
    stw r0, 0x58c(r31)
    lfs f1, lbl_808839F8
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097CCC
    lfs f0, lbl_808839FC
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_808839F8
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x14
    lfs f2, lbl_80883A38
    li r6, 0x1
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r0, 0x1580(r31)
    stw r0, 0x1584(r31)
lbl_fn_80284CC8_000012E8:
    lwz r0, 0x44(r1)
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80285064(void)
{
    nofralloc
    stwu r1, -0x2e0(r1)
    mflr r0
    stw r0, 0x2e4(r1)
    stfd f31, 0x2d0(r1)
    psq_st f31, 0x2d8(r1), 0, 0
    stfd f30, 0x2c0(r1)
    psq_st f30, 0x2c8(r1), 0, 0
    stfd f29, 0x2b0(r1)
    psq_st f29, 0x2b8(r1), 0, 0
    stfd f28, 0x2a0(r1)
    psq_st f28, 0x2a8(r1), 0, 0
    stfd f27, 0x290(r1)
    psq_st f27, 0x298(r1), 0, 0
    stfd f26, 0x280(r1)
    psq_st f26, 0x288(r1), 0, 0
    stw r31, 0x27c(r1)
    mr r31, r3
    stw r30, 0x278(r1)
    lwz r0, 0x158c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80285064_0000136C
    cmpwi r0, 0x1
    beq lbl_fn_80285064_00001468
    cmpwi r0, 0x2
    beq lbl_fn_80285064_00001500
    b lbl_fn_80285064_00001A0C
lbl_fn_80285064_0000136C:
    lfs f26, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f26, f1
    cror eq, gt, eq
    bne lbl_fn_80285064_00001A0C
    li r30, 0x1
    stw r30, 0x158c(r31)
    mr r3, r31
    li r4, 0x0
    bl fn_80232B7C
    lfs f0, lbl_808839F8
    li r0, -0x1
    lfs f1, lbl_808839FC
    addi r4, r31, 0x1520
    stfs f0, 0x68(r1)
    addi r5, r31, 0xb0
    addi r7, r1, 0x5c
    addi r8, r1, 0x68
    stfs f0, 0x6c(r1)
    addi r9, r1, 0x78
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x70(r1)
    stfs f0, 0x5c(r1)
    stfs f0, 0x60(r1)
    stfs f0, 0x64(r1)
    stfs f1, 0x78(r1)
    stfs f1, 0x7c(r1)
    stfs f1, 0x80(r1)
    stfs f1, 0x84(r1)
    stw r0, 0x8(r1)
    stw r30, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lfs f1, lbl_808839FC
    addi r3, r1, 0x10
    addi r4, r31, 0x14fc
    addi r5, r31, 0x528
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r31, 0x151c
    addi r4, r1, 0x10
    bl fn_800CB440
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    lfs f0, lbl_808839FC
    addi r3, r31, 0xb0
    stw r30, 0x3fc(r31)
    li r4, 0x0
    lfs f1, lbl_808839F8
    li r5, 0x143
    stfs f0, 0x2fc(r31)
    li r6, 0x1
    lfs f2, lbl_80883A38
    li r7, 0x0
    stfs f0, 0x2e8(r31)
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_80285064_00001A0C
lbl_fn_80285064_00001468:
    lwz r4, 0x1598(r3)
    lwz r0, 0x14e8(r3)
    addi r4, r4, 0x1
    stw r4, 0x1598(r3)
    cmpw r4, r0
    blt lbl_fn_80285064_00001A0C
    li r4, 0x2
    li r0, 0x0
    stw r4, 0x158c(r3)
    li r4, 0x6
    stw r0, 0x1598(r3)
    bl fn_8016E970
    li r0, 0x4
    stw r0, 0x560(r31)
    mr r4, r31
    li r5, 0x0
    lwz r3, lbl_8087F3C0
    li r6, 0x1
    bl fn_80239DAC
    addi r3, r31, 0x151c
    li r4, 0xf
    li r5, 0x0
    bl fn_800CB5C8
    lfs f0, lbl_808839FC
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_808839F8
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x144
    lfs f2, lbl_80883A38
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_80285064_00001A0C
lbl_fn_80285064_00001500:
    lfs f7, 0x2e4(r3)
    lfs f0, lbl_80883A54
    fcmpo cr0, f0, f7
    bge lbl_fn_80285064_00001540
    lfs f0, lbl_80883A58
    fcmpo cr0, f7, f0
    bge lbl_fn_80285064_00001540
    lwz r4, 0x1598(r3)
    lwz r0, 0x14ec(r3)
    addi r4, r4, 0x1
    stw r4, 0x1598(r3)
    cmpw r4, r0
    bge lbl_fn_80285064_00001A0C
    lfs f0, lbl_80883A5C
    stfs f0, 0x2e4(r3)
    b lbl_fn_80285064_00001A0C
lbl_fn_80285064_00001540:
    mr r3, r31
    bl fn_80158BB4
    cmpwi r3, 0x0
    beq lbl_fn_80285064_000015C0
    lwz r3, 0x14f4(r31)
    li r0, 0x0
    stw r0, 0x14b0(r31)
    cmpwi r3, 0x0
    stw r0, 0x158c(r31)
    beq lbl_fn_80285064_00001570
    lwz r0, 0x68(r3)
    b lbl_fn_80285064_00001574
lbl_fn_80285064_00001570:
    li r0, 0x5a
lbl_fn_80285064_00001574:
    stw r0, 0x1594(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    addi r3, r31, 0x151c
    li r4, 0xf
    li r5, 0x0
    bl fn_800CB5C8
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0xc8
    li r6, 0x0
    bl fn_80239DAC
    li r0, 0x6
    stw r0, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    b lbl_fn_80285064_00001A0C
lbl_fn_80285064_000015C0:
    lfs f7, 0x2e4(r31)
    lfs f0, lbl_80883A60
    fcmpo cr0, f7, f0
    cror eq, gt, eq
    bne lbl_fn_80285064_00001A0C
    lfs f0, lbl_80883A64
    fcmpo cr0, f7, f0
    bge lbl_fn_80285064_00001A0C
    lwz r3, 0x1580(r31)
    li r4, 0x0
    bl fn_80148B0C
    lfs f7, 0xc(r3)
    addi r4, r1, 0x88
    lfs f0, 0x530(r31)
    addi r30, r1, 0xac
    lfs f9, 0x8(r3)
    fsubs f2, f7, f0
    lfs f8, 0x52c(r31)
    lfs f7, 0x4(r3)
    fsubs f8, f9, f8
    lfs f0, 0x528(r31)
    stfs f2, 0x90(r1)
    fsubs f7, f7, f0
    lfs f0, lbl_80883A08
    stfs f8, 0x8c(r1)
    frsp f8, f2
    stfs f7, 0x88(r1)
    fabs f7, f8
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    frsp f7, f7
    stfs f2, 0xb4(r1)
    fcmpo cr0, f7, f0
    bge lbl_fn_80285064_0000166C
    lfs f7, 0xac(r1)
    lfs f0, lbl_808839F8
    fcmpo cr0, f7, f0
    ble lbl_fn_80285064_00001660
    lfs f0, lbl_80883A44
    b lbl_fn_80285064_00001664
lbl_fn_80285064_00001660:
    lfs f0, lbl_80883A48
lbl_fn_80285064_00001664:
    stfs f0, 0x54(r1)
    b lbl_fn_80285064_00001680
lbl_fn_80285064_0000166C:
    fmr f2, f8
    lfs f1, 0xac(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x54(r1)
lbl_fn_80285064_00001680:
    lfs f0, 0x54(r1)
    addi r3, r1, 0x1d8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f7, lbl_808839F8
    addi r4, r1, 0x44
    lfs f26, 0x1e0(r1)
    mr r5, r4
    lfs f27, 0x1dc(r1)
    addi r3, r1, 0x208
    lfs f28, 0x1d8(r1)
    lfs f29, 0x1f0(r1)
    lfs f30, 0x1ec(r1)
    lfs f31, 0x1e8(r1)
    lfs f13, 0x200(r1)
    lfs f12, 0x1fc(r1)
    lfs f11, 0x1f8(r1)
    lfs f10, 0x204(r1)
    lfs f9, 0x1f4(r1)
    lfs f8, 0x1e4(r1)
    lfs f0, lbl_808839FC
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0xb4(r1)
    stfs f7, 0x238(r1)
    stfs f7, 0x23c(r1)
    stfs f7, 0x240(r1)
    stfs f0, 0x244(r1)
    stfs f28, 0x14(r1)
    stfs f27, 0x18(r1)
    stfs f26, 0x1c(r1)
    stfs f28, 0x208(r1)
    stfs f27, 0x20c(r1)
    stfs f26, 0x210(r1)
    stfs f31, 0x20(r1)
    stfs f30, 0x24(r1)
    stfs f29, 0x28(r1)
    stfs f31, 0x218(r1)
    stfs f30, 0x21c(r1)
    stfs f29, 0x220(r1)
    stfs f11, 0x2c(r1)
    stfs f12, 0x30(r1)
    stfs f13, 0x34(r1)
    stfs f11, 0x228(r1)
    stfs f12, 0x22c(r1)
    stfs f13, 0x230(r1)
    stfs f8, 0x38(r1)
    stfs f9, 0x3c(r1)
    stfs f10, 0x40(r1)
    stfs f8, 0x214(r1)
    stfs f9, 0x224(r1)
    stfs f10, 0x234(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x4c(r1)
    bl fn_805F9750
    lfs f2, 0x4c(r1)
    lfs f0, lbl_80883A08
    fabs f7, f2
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_80285064_0000179C
    lfs f7, 0x48(r1)
    lfs f0, lbl_808839F8
    fcmpo cr0, f7, f0
    ble lbl_fn_80285064_0000178C
    lfs f0, lbl_80883A44
    b lbl_fn_80285064_00001790
lbl_fn_80285064_0000178C:
    lfs f0, lbl_80883A48
lbl_fn_80285064_00001790:
    fneg f0, f0
    stfs f0, 0x50(r1)
    b lbl_fn_80285064_000017B0
lbl_fn_80285064_0000179C:
    lfs f1, 0x48(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x50(r1)
lbl_fn_80285064_000017B0:
    addi r3, r1, 0x50
    lfs f2, lbl_808839F8
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    lfs f0, 0x538(r31)
    lfs f9, 0xb0(r1)
    lfs f8, 0x14f8(r31)
    lfs f7, lbl_80883A00
    fsubs f9, f9, f0
    stfs f2, 0x58(r1)
    fmuls f0, f8, f7
    stfs f2, 0xb4(r1)
    fcmpo cr0, f9, f0
    cror eq, gt, eq
    bne lbl_fn_80285064_000017F4
    stfs f0, 0xb0(r1)
    b lbl_fn_80285064_0000180C
lbl_fn_80285064_000017F4:
    fneg f0, f8
    fmuls f0, f0, f7
    fcmpo cr0, f9, f0
    cror eq, lt, eq
    bne lbl_fn_80285064_0000180C
    stfs f0, 0xb0(r1)
lbl_fn_80285064_0000180C:
    lfs f7, lbl_808839F8
    addi r30, r1, 0x248
    lfs f1, 0xb4(r1)
    lfs f0, lbl_808839FC
    fcmpu cr0, f7, f1
    stfs f7, 0x274(r1)
    stfs f7, 0x26c(r1)
    stfs f7, 0x268(r1)
    stfs f7, 0x264(r1)
    stfs f7, 0x260(r1)
    stfs f7, 0x258(r1)
    stfs f7, 0x254(r1)
    stfs f7, 0x250(r1)
    stfs f7, 0x24c(r1)
    stfs f0, 0x270(r1)
    stfs f0, 0x25c(r1)
    stfs f0, 0x248(r1)
    beq lbl_fn_80285064_000018A4
    addi r3, r1, 0xe8
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0xe8
    addi r5, r1, 0xb8
    bl fn_805F89F0
    addi r3, r1, 0xb8
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
lbl_fn_80285064_000018A4:
    lfs f0, lbl_808839F8
    lfs f1, 0xb0(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_80285064_00001904
    addi r3, r1, 0x148
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x148
    addi r5, r1, 0x118
    bl fn_805F89F0
    addi r3, r1, 0x118
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
lbl_fn_80285064_00001904:
    lfs f0, lbl_808839F8
    lfs f1, 0xac(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_80285064_00001964
    addi r3, r1, 0x1a8
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x1a8
    addi r5, r1, 0x178
    bl fn_805F89F0
    addi r3, r1, 0x178
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
lbl_fn_80285064_00001964:
    lis r4, lbl_80745100@ha
    addi r30, r31, 0xb0
    addi r4, r4, lbl_80745100@l
    li r5, 0x0
    mr r3, r30
    addi r4, r4, 0x18d
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80285064_00001990
    li r3, 0x0
    b lbl_fn_80285064_0000199C
lbl_fn_80285064_00001990:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r30)
    add r3, r3, r0
lbl_fn_80285064_0000199C:
    lfs f8, 0x2c(r3)
    addi r4, r1, 0x94
    lfs f9, 0x1c(r3)
    mr r5, r4
    lfs f10, 0xc(r3)
    addi r3, r1, 0x248
    lfs f7, lbl_808839F8
    lfs f0, lbl_80883A50
    stfs f10, 0xa0(r1)
    stfs f9, 0xa4(r1)
    stfs f8, 0xa8(r1)
    stfs f7, 0x94(r1)
    stfs f7, 0x98(r1)
    stfs f0, 0x9c(r1)
    bl fn_805F93C0
    lwz r5, 0x14f4(r31)
    cmpwi r5, 0x0
    beq lbl_fn_80285064_00001A0C
    lwz r3, lbl_8087F048
    mr r4, r31
    lfs f1, lbl_808839F8
    addi r6, r1, 0xa0
    lfs f2, lbl_808839FC
    addi r7, r1, 0x94
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_800F8574
lbl_fn_80285064_00001A0C:
    lwz r0, 0x2e4(r1)
    psq_l f31, 0x2d8(r1), 0, 0
    lfd f31, 0x2d0(r1)
    psq_l f30, 0x2c8(r1), 0, 0
    lfd f30, 0x2c0(r1)
    psq_l f29, 0x2b8(r1), 0, 0
    lfd f29, 0x2b0(r1)
    psq_l f28, 0x2a8(r1), 0, 0
    lfd f28, 0x2a0(r1)
    psq_l f27, 0x298(r1), 0, 0
    lfd f27, 0x290(r1)
    psq_l f26, 0x288(r1), 0, 0
    lfd f26, 0x280(r1)
    lwz r31, 0x27c(r1)
    lwz r30, 0x278(r1)
    mtlr r0
    addi r1, r1, 0x2e0
    blr
}
