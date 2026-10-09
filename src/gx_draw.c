#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void OSDisableInterrupts(void);
extern void OSRegisterVersion(void);
extern void OSRestoreInterrupts(void);
extern void _restgpr_14(void);
extern void _restgpr_17(void);
extern void _restgpr_25(void);
extern void _savegpr_14(void);
extern void _savegpr_17(void);
extern void _savegpr_25(void);
extern void fn_805F93C0(void);
extern void fn_80653EE0(void);
extern void fn_806583E0(void);
extern void fn_80658F30(void);
extern void fn_8065AA50(void);
extern void fn_8065AA80(void);
extern void fn_8065AEB0(void);
extern void fn_8065CEF0(void);
extern void fn_8065CF00(void);
extern void fn_8065CF20(void);
extern void fn_8065F490(void);
extern void fn_8065F540(void);
extern void fn_80660CF0(void);
extern void fn_80660D80(void);
extern void fn_80660E10(void);
extern void fn_80661300(void);
extern void fn_806635D0(void);
extern void fn_80663610(void);
extern void fn_80664950(void);
extern void fn_80666850(void);
extern void fn_8068A850(void);
extern void fn_8068AD58(void);
extern void fn_8068B100(void);
extern void fn_8069636C(void);

/* External data declarations */
extern u8 jumptable_807B89A8[];
extern u8 lbl_80828318[];
extern u8 lbl_80829D38[];
extern u8 lbl_80829D68[];
extern u8 lbl_80829D88[];

/* Small data declarations */
extern u32 lbl_8087EB20;
extern u32 lbl_8087EB24;
extern u32 lbl_8087EB28;
extern u32 lbl_8087EB2C;
extern u32 lbl_8087EB30;
extern u32 lbl_8087EB34;
extern u32 lbl_8087EB38;
extern u32 lbl_8087EB3C;
extern u32 lbl_8087EB44;
extern u32 lbl_8087EB48;
extern u32 lbl_8087EB50;
extern u32 lbl_8087EB58;
extern u32 lbl_8087EB5C;
extern u32 lbl_8087EB60;
extern u32 lbl_8087EB64;
extern u32 lbl_8087EB68;
extern u32 lbl_8087EB6C;
extern u32 lbl_8087EB70;
extern u32 lbl_8087EB74;
extern u32 lbl_8087EB78;
extern u32 lbl_8087EB7C;
extern u32 lbl_8087EB80;
extern u32 lbl_8087EB84;
extern u32 lbl_8087EB88;
extern u32 lbl_8087EB8C;
extern u32 lbl_8087EB90;
extern u32 lbl_8087EB94;
extern u32 lbl_8087EB9C;
extern u32 lbl_8087EBA4;
extern u32 lbl_80880190;
extern u32 lbl_80880194;
extern u32 lbl_80880198;
extern u32 lbl_8088019C;
extern u32 lbl_808801A0;
extern u32 lbl_808801A4;
extern u32 lbl_808801A8;
extern u32 lbl_808801AC;
extern u32 lbl_808801B0;
extern u32 lbl_808801B8;
extern u32 lbl_808801C0;
extern u32 lbl_808801C8;
extern u32 lbl_808801D0;
extern u32 lbl_808801D2;
extern u32 lbl_808801D3;
extern u32 lbl_808801D4;
extern u32 lbl_808801D5;
extern u32 lbl_808801D6;
extern u32 lbl_808801D8;
extern u32 lbl_808801D9;
extern u32 lbl_808801DA;
extern u32 lbl_808801DC;
extern u32 lbl_808801E0;
extern u32 lbl_80888898;
extern u32 lbl_8088889C;
extern u32 lbl_808888A0;
extern u32 lbl_808888A4;
extern u32 lbl_808888AC;
extern u32 lbl_808888B0;
extern u32 lbl_808888B8;
extern u32 lbl_808888C0;
extern u32 lbl_808888C4;
extern u32 lbl_808888C8;
extern u32 lbl_808888D0;
extern u32 lbl_808888D8;
extern u32 lbl_808888E0;
extern u32 lbl_808888E8;
extern u32 lbl_808888F0;
extern u32 lbl_808888F8;
extern u32 lbl_80888900;
extern u32 lbl_80888908;
extern u32 lbl_80888910;
extern u32 lbl_80888918;
extern u32 lbl_8088891C;

/* Function declarations */
void fn_806540A0(void);
void fn_806540C0(void);
void fn_806540E0(void);
void fn_80654100(void);
void fn_806542B0(void);
void fn_80654370(void);
void fn_80654430(void);
void fn_806545D0(void);
void fn_80654700(void);
void fn_80654C90(void);
void fn_80654E80(void);
void fn_806550B0(void);
void fn_80655270(void);
void fn_806553F0(void);
void fn_806559D0(void);
void fn_80655E90(void);
void fn_80655FC0(void);
void fn_806561F0(void);
void fn_80657230(void);
void fn_806572D0(void);
void fn_806572E0(void);
void fn_80657AF0(void);
void fn_80657B00(void);
void fn_80657F70(void);
void fn_80658170(void);
void fn_806581D0(void);
void fn_806581F0(void);
void fn_80658220(void);
void fn_80658240(void);
void fn_80658260(void);
void fn_80658300(void);

asm void fn_806540A0(void)
{
    nofralloc
    mulli r4, r3, 0x688
    lis r3, lbl_80828318@ha
    li r0, 0x1
    addi r3, r3, lbl_80828318@l
    add r3, r3, r4
    stb r0, 0x648(r3)
    stb r0, 0x649(r3)
    blr
}

asm void fn_806540C0(void)
{
    nofralloc
    mulli r0, r3, 0x688
    lis r3, lbl_80828318@ha
    addi r3, r3, lbl_80828318@l
    add r3, r3, r0
    lbz r3, 0x649(r3)
    blr
}

asm void fn_806540E0(void)
{
    nofralloc
    mulli r0, r3, 0x688
    lis r3, lbl_80828318@ha
    addi r3, r3, lbl_80828318@l
    add r3, r3, r0
    lfs f1, 0x128(r3)
    blr
}

asm void fn_80654100(void)
{
    nofralloc
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80654100_00000078
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80654100_000000B0
lbl_fn_80654100_00000078:
    lwz r0, 0x4(r3)
    li r7, 0x0
    lhz r6, 0x5f0(r3)
    cmpwi r0, 0x0
    sth r7, 0x5ec(r3)
    sth r6, 0x5ee(r3)
    beq lbl_fn_80654100_00000124
    lhz r0, 0x5f2(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80654100_00000124
    lwz r0, 0x0(r3)
    oris r0, r0, 0x8000
    stw r0, 0x0(r3)
    b lbl_fn_80654100_00000124
lbl_fn_80654100_000000B0:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80654100_00000124
    lhz r0, 0x5ec(r3)
    add r0, r0, r5
    sth r0, 0x5ec(r3)
    clrlwi r6, r0, 16
    cmplwi r6, 0x9c40
    blt lbl_fn_80654100_000000E0
    subis r6, r6, 0x1
    addi r0, r6, 0x63c0
    sth r0, 0x5ec(r3)
lbl_fn_80654100_000000E0:
    lhz r8, 0x5ec(r3)
    lhz r7, 0x5ee(r3)
    cmplw r8, r7
    blt lbl_fn_80654100_00000124
    lwz r6, 0x0(r3)
    cmplwi r8, 0x4e20
    lhz r0, 0x5f2(r3)
    oris r6, r6, 0x8000
    stw r6, 0x0(r3)
    add r0, r7, r0
    sth r0, 0x5ee(r3)
    blt lbl_fn_80654100_00000124
    clrlwi r6, r0, 16
    subi r7, r8, 0x4e20
    subi r0, r6, 0x4e20
    sth r7, 0x5ec(r3)
    sth r0, 0x5ee(r3)
lbl_fn_80654100_00000124:
    subi r0, r4, 0x10
    cmplwi r0, 0x3
    ble lbl_fn_80654100_00000140
    cmplwi r4, 0x2
    beq lbl_fn_80654100_00000140
    cmplwi r4, 0x7
    bnelr
lbl_fn_80654100_00000140:
    lwz r0, 0x64(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80654100_00000158
    lwz r0, 0x68(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80654100_00000190
lbl_fn_80654100_00000158:
    lwz r0, 0x64(r3)
    li r5, 0x0
    lhz r4, 0x5f0(r3)
    cmpwi r0, 0x0
    sth r5, 0x5f4(r3)
    sth r4, 0x5f6(r3)
    beqlr
    lhz r0, 0x5f2(r3)
    cmpwi r0, 0x0
    beqlr
    lwz r0, 0x60(r3)
    oris r0, r0, 0x8000
    stw r0, 0x60(r3)
    blr
lbl_fn_80654100_00000190:
    lwz r0, 0x60(r3)
    cmpwi r0, 0x0
    beqlr
    lhz r0, 0x5f4(r3)
    add r0, r0, r5
    sth r0, 0x5f4(r3)
    clrlwi r4, r0, 16
    cmplwi r4, 0x9c40
    blt lbl_fn_80654100_000001C0
    subis r4, r4, 0x1
    addi r0, r4, 0x63c0
    sth r0, 0x5f4(r3)
lbl_fn_80654100_000001C0:
    lhz r6, 0x5f4(r3)
    lhz r5, 0x5f6(r3)
    cmplw r6, r5
    bltlr
    lwz r4, 0x60(r3)
    cmplwi r6, 0x4e20
    lhz r0, 0x5f2(r3)
    oris r4, r4, 0x8000
    stw r4, 0x60(r3)
    add r0, r5, r0
    sth r0, 0x5f6(r3)
    bltlr
    clrlwi r4, r0, 16
    subi r5, r6, 0x4e20
    subi r0, r4, 0x4e20
    sth r5, 0x5f4(r3)
    sth r0, 0x5f6(r3)
    blr
}

asm void fn_806542B0(void)
{
    nofralloc
    lwz r9, 0x0(r3)
    andi. r0, r6, 0x9fff
    cmplwi r4, 0x1
    stw r0, 0x0(r3)
    clrlwi r10, r9, 16
    beq lbl_fn_806542B0_00000230
    cmplwi r4, 0x6
    bne lbl_fn_806542B0_00000254
lbl_fn_806542B0_00000230:
    lbz r6, 0x641(r3)
    lwz r9, 0x0(r3)
    neg r0, r6
    or r0, r0, r6
    srawi r0, r0, 31
    andc r0, r7, r0
    rlwinm r0, r0, 0, 17, 18
    or r0, r9, r0
    stw r0, 0x0(r3)
lbl_fn_806542B0_00000254:
    lwz r6, 0x0(r3)
    subi r0, r4, 0x10
    cmplwi r0, 0x3
    xor r7, r6, r10
    and r0, r7, r6
    stw r0, 0x4(r3)
    and r0, r7, r10
    stw r0, 0x8(r3)
    ble lbl_fn_806542B0_00000288
    cmplwi r4, 0x2
    beq lbl_fn_806542B0_00000288
    cmplwi r4, 0x7
    bne lbl_fn_806542B0_000002C0
lbl_fn_806542B0_00000288:
    lbz r7, 0x641(r3)
    lwz r0, 0x60(r3)
    neg r6, r7
    or r6, r6, r7
    clrlwi r7, r0, 16
    srawi r0, r6, 31
    andc r0, r8, r0
    clrlwi r0, r0, 16
    stw r0, 0x60(r3)
    xor r6, r0, r7
    and r0, r6, r0
    stw r0, 0x64(r3)
    and r0, r6, r7
    stw r0, 0x68(r3)
lbl_fn_806542B0_000002C0:
    b fn_80654100
}

asm void fn_80654370(void)
{
    nofralloc
    lfs f2, 0x0(r4)
    lwz r0, 0x658(r3)
    fsubs f3, f1, f2
    cmpwi r0, 0x0
    bne lbl_fn_80654370_0000033C
    lfs f0, lbl_80888898
    fcmpo cr0, f3, f0
    bge lbl_fn_80654370_000002F8
    fneg f2, f3
    b lbl_fn_80654370_000002FC
lbl_fn_80654370_000002F8:
    fmr f2, f3
lbl_fn_80654370_000002FC:
    lfs f0, 0x108(r3)
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_80654370_00000314
    lfs f2, lbl_808888A4
    b lbl_fn_80654370_00000320
lbl_fn_80654370_00000314:
    fdivs f2, f2, f0
    fmuls f2, f2, f2
    fmuls f2, f2, f2
lbl_fn_80654370_00000320:
    lfs f1, 0x10c(r3)
    lfs f0, 0x0(r4)
    fmuls f2, f2, f1
    fmuls f1, f2, f3
    fadds f0, f0, f1
    stfs f0, 0x0(r4)
    blr
lbl_fn_80654370_0000033C:
    lfs f1, 0x108(r3)
    fneg f0, f1
    fcmpo cr0, f3, f0
    bge lbl_fn_80654370_00000364
    fadds f1, f3, f1
    lfs f0, 0x10c(r3)
    fmuls f0, f0, f1
    fadds f0, f2, f0
    stfs f0, 0x0(r4)
    blr
lbl_fn_80654370_00000364:
    fcmpo cr0, f3, f1
    blelr
    fsubs f1, f3, f1
    lfs f0, 0x10c(r3)
    fmuls f0, f0, f1
    fadds f0, f2, f0
    stfs f0, 0x0(r4)
    blr
}

asm void fn_80654430(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    stfd f30, 0x10(r1)
    psq_st f30, 0x18(r1), 0, 0
    stw r31, 0xc(r1)
    mr r31, r3
    lfs f1, 0x5bc(r3)
    lfs f0, 0x5c0(r3)
    fmuls f1, f1, f1
    fmuls f0, f0, f0
    fadds f1, f1, f0
    bl fn_8068B100
    frsp f8, f1
    lfs f0, lbl_80888898
    fcmpu cr0, f0, f8
    beq lbl_fn_80654430_00000500
    lfs f2, lbl_808888B0
    fcmpo cr0, f8, f2
    cror eq, gt, eq
    bne lbl_fn_80654430_000003F0
    b lbl_fn_80654430_00000500
lbl_fn_80654430_000003F0:
    lfs f0, 0x5bc(r31)
    lfs f1, 0x5c0(r31)
    fdivs f9, f0, f8
    lfs f0, lbl_808888A4
    fdivs f10, f1, f8
    fcmpo cr0, f8, f0
    ble lbl_fn_80654430_00000410
    fsubs f8, f2, f8
lbl_fn_80654430_00000410:
    lfs f0, 0x118(r31)
    lfs f6, 0x114(r31)
    fmuls f4, f0, f10
    lfs f7, lbl_8087EB3C
    fmuls f5, f6, f9
    lfs f3, 0x5d0(r31)
    fmuls f2, f0, f9
    lfs f1, 0x5d4(r31)
    fmuls f0, f6, f10
    fmuls f6, f8, f7
    fadds f4, f5, f4
    fsubs f0, f2, f0
    fmuls f8, f8, f6
    fsubs f2, f4, f3
    fsubs f0, f0, f1
    fmuls f2, f8, f2
    fmuls f0, f8, f0
    fadds f31, f3, f2
    fadds f30, f1, f0
    fmuls f1, f31, f31
    fmuls f0, f30, f30
    fadds f1, f1, f0
    bl fn_8068B100
    frsp f1, f1
    lfs f0, lbl_80888898
    fcmpu cr0, f0, f1
    beq lbl_fn_80654430_00000500
    fdivs f7, f31, f1
    lfs f5, 0x5e0(r31)
    lfs f3, 0x5e4(r31)
    lfs f0, 0x62c(r31)
    stfs f7, 0x5d0(r31)
    fdivs f6, f30, f1
    stfs f6, 0x5d4(r31)
    fsubs f4, f7, f5
    lfs f1, lbl_8087EB44
    fsubs f2, f6, f3
    fmuls f1, f1, f4
    fadds f1, f5, f1
    stfs f1, 0x5e0(r31)
    fsubs f4, f7, f1
    lfs f1, lbl_8087EB44
    fmuls f1, f1, f2
    fmuls f2, f4, f4
    fadds f1, f3, f1
    stfs f1, 0x5e4(r31)
    fsubs f1, f6, f1
    fmuls f1, f1, f1
    fadds f1, f2, f1
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_80654430_000004F8
    lhz r3, 0x5e8(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80654430_00000500
    subi r0, r3, 0x1
    sth r0, 0x5e8(r31)
    b lbl_fn_80654430_00000500
lbl_fn_80654430_000004F8:
    lhz r0, lbl_8087EB48
    sth r0, 0x5e8(r31)
lbl_fn_80654430_00000500:
    lwz r0, 0x34(r1)
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    psq_l f30, 0x18(r1), 0, 0
    lfd f30, 0x10(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806545D0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    stfd f30, 0x20(r1)
    psq_st f30, 0x28(r1), 0, 0
    stfd f29, 0x10(r1)
    psq_st f29, 0x18(r1), 0, 0
    stw r31, 0xc(r1)
    mr r31, r3
    lfs f1, 0x5bc(r3)
    lfs f0, 0x5c0(r3)
    fmuls f1, f1, f1
    fmuls f0, f0, f0
    fadds f30, f1, f0
    fmr f1, f30
    bl fn_8068B100
    lfs f0, 0x5c4(r31)
    frsp f31, f1
    fneg f29, f0
    fmuls f0, f29, f29
    fadds f1, f30, f0
    bl fn_8068B100
    frsp f5, f1
    lfs f0, lbl_80888898
    fcmpu cr0, f0, f5
    beq lbl_fn_806545D0_00000628
    lfs f1, lbl_808888B0
    fcmpo cr0, f5, f1
    cror eq, gt, eq
    bne lbl_fn_806545D0_000005B4
    b lbl_fn_806545D0_00000628
lbl_fn_806545D0_000005B4:
    fdivs f2, f31, f5
    lfs f0, lbl_808888A4
    fdivs f29, f29, f5
    fcmpo cr0, f5, f0
    ble lbl_fn_806545D0_000005CC
    fsubs f5, f1, f5
lbl_fn_806545D0_000005CC:
    lfs f0, lbl_8087EB3C
    lfs f3, 0x54(r31)
    fmuls f4, f5, f0
    lfs f1, 0x58(r31)
    fsubs f2, f2, f3
    fsubs f0, f29, f1
    fmuls f5, f5, f4
    fmuls f2, f5, f2
    fmuls f0, f5, f0
    fadds f31, f3, f2
    fadds f30, f1, f0
    fmuls f1, f31, f31
    fmuls f0, f30, f30
    fadds f1, f1, f0
    bl fn_8068B100
    frsp f1, f1
    lfs f0, lbl_80888898
    fcmpu cr0, f0, f1
    beq lbl_fn_806545D0_00000628
    fdivs f0, f31, f1
    stfs f0, 0x54(r31)
    fdivs f0, f30, f1
    stfs f0, 0x58(r31)
lbl_fn_806545D0_00000628:
    lwz r0, 0x44(r1)
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    psq_l f30, 0x28(r1), 0, 0
    lfd f30, 0x20(r1)
    psq_l f29, 0x18(r1), 0, 0
    lfd f29, 0x10(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80654700(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    lis r5, 0x4330
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    mr r31, r4
    stw r30, 0x48(r1)
    mr r30, r3
    lbz r0, 0x40(r4)
    stw r5, 0x30(r1)
    cmplwi r0, 0x14
    stw r5, 0x38(r1)
    bgt lbl_fn_80654700_00000BD0
    lis r5, jumptable_807B89A8@ha
    slwi r0, r0, 2
    addi r5, r5, jumptable_807B89A8@l
    lwzx r5, r5, r0
    mtctr r5
    bctr
    b lbl_fn_80654700_00000BD0
    lha r0, 0x2(r4)
    lfd f3, lbl_808888B8
    neg r0, r0
    lfs f1, 0x5fc(r3)
    xoris r0, r0, 0x8000
    stw r0, 0x34(r1)
    lfs f0, lbl_80888898
    lfd f2, 0x30(r1)
    lfs f4, lbl_8087EB84
    fsubs f2, f2, f3
    fmuls f1, f2, f1
    fcmpo cr0, f1, f0
    bge lbl_fn_80654700_000006F4
    fneg f4, f4
    fcmpo cr0, f1, f4
    bge lbl_fn_80654700_00000700
    b lbl_fn_80654700_00000704
lbl_fn_80654700_000006F4:
    fcmpo cr0, f1, f4
    ble lbl_fn_80654700_00000700
    b lbl_fn_80654700_00000704
lbl_fn_80654700_00000700:
    fmr f4, f1
lbl_fn_80654700_00000704:
    stfs f4, 0x5bc(r3)
    lfd f3, lbl_808888B8
    lha r0, 0x6(r4)
    lfs f1, 0x604(r3)
    neg r0, r0
    lfs f0, lbl_80888898
    xoris r0, r0, 0x8000
    stw r0, 0x3c(r1)
    lfs f4, lbl_8087EB84
    lfd f2, 0x38(r1)
    fsubs f2, f2, f3
    fmuls f1, f2, f1
    fcmpo cr0, f1, f0
    bge lbl_fn_80654700_0000074C
    fneg f4, f4
    fcmpo cr0, f1, f4
    bge lbl_fn_80654700_00000758
    b lbl_fn_80654700_0000075C
lbl_fn_80654700_0000074C:
    fcmpo cr0, f1, f4
    ble lbl_fn_80654700_00000758
    b lbl_fn_80654700_0000075C
lbl_fn_80654700_00000758:
    fmr f4, f1
lbl_fn_80654700_0000075C:
    stfs f4, 0x5c0(r3)
    lfd f3, lbl_808888B8
    lha r0, 0x4(r4)
    lfs f1, 0x600(r3)
    xoris r0, r0, 0x8000
    stw r0, 0x34(r1)
    lfs f0, lbl_80888898
    lfd f2, 0x30(r1)
    lfs f4, lbl_8087EB84
    fsubs f2, f2, f3
    fmuls f1, f2, f1
    fcmpo cr0, f1, f0
    bge lbl_fn_80654700_000007A0
    fneg f4, f4
    fcmpo cr0, f1, f4
    bge lbl_fn_80654700_000007AC
    b lbl_fn_80654700_000007B0
lbl_fn_80654700_000007A0:
    fcmpo cr0, f1, f4
    ble lbl_fn_80654700_000007AC
    b lbl_fn_80654700_000007B0
lbl_fn_80654700_000007AC:
    fmr f4, f1
lbl_fn_80654700_000007B0:
    lwz r6, 0xc(r3)
    addi r4, r30, 0xc
    lwz r5, 0x10(r3)
    lwz r0, 0x14(r3)
    stfs f4, 0x5c4(r3)
    mr r3, r30
    lfs f1, 0x5bc(r30)
    stw r6, 0x14(r1)
    stw r5, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80654370
    lfs f1, 0x5c0(r30)
    mr r3, r30
    addi r4, r30, 0x10
    bl fn_80654370
    lfs f1, 0x5c4(r30)
    mr r3, r30
    addi r4, r30, 0x14
    bl fn_80654370
    lfs f1, 0xc(r30)
    lfs f0, 0x10(r30)
    fmuls f1, f1, f1
    lfs f2, 0x14(r30)
    fmuls f0, f0, f0
    fmuls f2, f2, f2
    fadds f0, f1, f0
    fadds f1, f2, f0
    bl fn_8068B100
    lfs f2, 0x14(r1)
    frsp f6, f1
    lfs f0, 0xc(r30)
    lfs f1, 0x18(r1)
    fsubs f5, f2, f0
    lfs f0, 0x10(r30)
    lfs f2, 0x1c(r1)
    fsubs f4, f1, f0
    lfs f0, 0x14(r30)
    fmuls f1, f5, f5
    fsubs f3, f2, f0
    stfs f6, 0x18(r30)
    fmuls f0, f4, f4
    stfs f5, 0x14(r1)
    fmuls f2, f3, f3
    fadds f0, f1, f0
    stfs f4, 0x18(r1)
    stfs f3, 0x1c(r1)
    fadds f1, f2, f0
    bl fn_8068B100
    frsp f0, f1
    mr r3, r30
    stfs f0, 0x1c(r30)
    bl fn_80654430
    mr r3, r30
    bl fn_806545D0
    lbz r0, 0x29(r31)
    extsb. r0, r0
    bne lbl_fn_80654700_000008B4
    lbz r3, 0x28(r31)
    cmplwi r3, 0x1
    bne lbl_fn_80654700_000008B4
    lbz r0, 0x40(r31)
    cmplwi r0, 0x4
    beq lbl_fn_80654700_000008D8
    cmplwi r0, 0x5
    beq lbl_fn_80654700_000008D8
lbl_fn_80654700_000008B4:
    lbz r3, 0x28(r31)
    cmplwi r3, 0x6
    bne lbl_fn_80654700_00000BD0
    lbz r0, 0x40(r31)
    cmplwi r0, 0x10
    bne lbl_fn_80654700_00000BD0
    lbz r0, 0x36(r31)
    rlwinm. r0, r0, 0, 25, 25
    beq lbl_fn_80654700_00000BD0
lbl_fn_80654700_000008D8:
    cmplwi r3, 0x1
    bne lbl_fn_80654700_000009E8
    lha r0, 0x2a(r31)
    lfd f3, lbl_808888B8
    neg r0, r0
    lfs f1, 0x608(r30)
    xoris r0, r0, 0x8000
    stw r0, 0x3c(r1)
    lfs f0, lbl_80888898
    lfd f2, 0x38(r1)
    lfs f4, lbl_8087EB88
    fsubs f2, f2, f3
    fmuls f1, f2, f1
    fcmpo cr0, f1, f0
    bge lbl_fn_80654700_00000924
    fneg f4, f4
    fcmpo cr0, f1, f4
    bge lbl_fn_80654700_00000930
    b lbl_fn_80654700_00000934
lbl_fn_80654700_00000924:
    fcmpo cr0, f1, f4
    ble lbl_fn_80654700_00000930
    b lbl_fn_80654700_00000934
lbl_fn_80654700_00000930:
    fmr f4, f1
lbl_fn_80654700_00000934:
    stfs f4, 0x20(r1)
    lfd f3, lbl_808888B8
    lha r0, 0x2e(r31)
    lfs f1, 0x610(r30)
    neg r0, r0
    lfs f0, lbl_80888898
    xoris r0, r0, 0x8000
    stw r0, 0x34(r1)
    lfs f4, lbl_8087EB88
    lfd f2, 0x30(r1)
    fsubs f2, f2, f3
    fmuls f1, f2, f1
    fcmpo cr0, f1, f0
    bge lbl_fn_80654700_0000097C
    fneg f4, f4
    fcmpo cr0, f1, f4
    bge lbl_fn_80654700_00000988
    b lbl_fn_80654700_0000098C
lbl_fn_80654700_0000097C:
    fcmpo cr0, f1, f4
    ble lbl_fn_80654700_00000988
    b lbl_fn_80654700_0000098C
lbl_fn_80654700_00000988:
    fmr f4, f1
lbl_fn_80654700_0000098C:
    stfs f4, 0x24(r1)
    lfd f3, lbl_808888B8
    lha r0, 0x2c(r31)
    lfs f1, 0x60c(r30)
    xoris r0, r0, 0x8000
    stw r0, 0x3c(r1)
    lfs f0, lbl_80888898
    lfd f2, 0x38(r1)
    lfs f4, lbl_8087EB88
    fsubs f2, f2, f3
    fmuls f1, f2, f1
    fcmpo cr0, f1, f0
    bge lbl_fn_80654700_000009D0
    fneg f4, f4
    fcmpo cr0, f1, f4
    bge lbl_fn_80654700_000009DC
    b lbl_fn_80654700_000009E0
lbl_fn_80654700_000009D0:
    fcmpo cr0, f1, f4
    ble lbl_fn_80654700_000009DC
    b lbl_fn_80654700_000009E0
lbl_fn_80654700_000009DC:
    fmr f4, f1
lbl_fn_80654700_000009E0:
    stfs f4, 0x28(r1)
    b lbl_fn_80654700_00000AEC
lbl_fn_80654700_000009E8:
    lha r0, 0x2a(r31)
    lfd f3, lbl_808888B8
    neg r0, r0
    lfs f1, 0x608(r30)
    xoris r0, r0, 0x8000
    stw r0, 0x34(r1)
    lfs f0, lbl_80888898
    lfd f2, 0x30(r1)
    lfs f4, lbl_8087EB88
    fsubs f2, f2, f3
    fmuls f1, f2, f1
    fcmpo cr0, f1, f0
    bge lbl_fn_80654700_00000A2C
    fneg f4, f4
    fcmpo cr0, f1, f4
    bge lbl_fn_80654700_00000A38
    b lbl_fn_80654700_00000A3C
lbl_fn_80654700_00000A2C:
    fcmpo cr0, f1, f4
    ble lbl_fn_80654700_00000A38
    b lbl_fn_80654700_00000A3C
lbl_fn_80654700_00000A38:
    fmr f4, f1
lbl_fn_80654700_00000A3C:
    stfs f4, 0x20(r1)
    lfd f3, lbl_808888B8
    lha r0, 0x2e(r31)
    lfs f1, 0x610(r30)
    neg r0, r0
    lfs f0, lbl_80888898
    xoris r0, r0, 0x8000
    stw r0, 0x3c(r1)
    lfs f4, lbl_8087EB88
    lfd f2, 0x38(r1)
    fsubs f2, f2, f3
    fmuls f1, f2, f1
    fcmpo cr0, f1, f0
    bge lbl_fn_80654700_00000A84
    fneg f4, f4
    fcmpo cr0, f1, f4
    bge lbl_fn_80654700_00000A90
    b lbl_fn_80654700_00000A94
lbl_fn_80654700_00000A84:
    fcmpo cr0, f1, f4
    ble lbl_fn_80654700_00000A90
    b lbl_fn_80654700_00000A94
lbl_fn_80654700_00000A90:
    fmr f4, f1
lbl_fn_80654700_00000A94:
    stfs f4, 0x24(r1)
    lfd f3, lbl_808888B8
    lha r0, 0x2c(r31)
    lfs f1, 0x60c(r30)
    xoris r0, r0, 0x8000
    stw r0, 0x34(r1)
    lfs f0, lbl_80888898
    lfd f2, 0x30(r1)
    lfs f4, lbl_8087EB88
    fsubs f2, f2, f3
    fmuls f1, f2, f1
    fcmpo cr0, f1, f0
    bge lbl_fn_80654700_00000AD8
    fneg f4, f4
    fcmpo cr0, f1, f4
    bge lbl_fn_80654700_00000AE4
    b lbl_fn_80654700_00000AE8
lbl_fn_80654700_00000AD8:
    fcmpo cr0, f1, f4
    ble lbl_fn_80654700_00000AE4
    b lbl_fn_80654700_00000AE8
lbl_fn_80654700_00000AE4:
    fmr f4, f1
lbl_fn_80654700_00000AE8:
    stfs f4, 0x28(r1)
lbl_fn_80654700_00000AEC:
    lbz r0, 0x64a(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80654700_00000B0C
    addi r4, r1, 0x20
    lis r3, lbl_80829D38@ha
    mr r5, r4
    addi r3, r3, lbl_80829D38@l
    bl fn_805F93C0
lbl_fn_80654700_00000B0C:
    lwz r6, 0x68(r30)
    mr r3, r30
    lwz r5, 0x6c(r30)
    addi r4, r30, 0x68
    lwz r0, 0x70(r30)
    stw r6, 0x8(r1)
    lfs f1, 0x20(r1)
    stw r5, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80654370
    lfs f1, 0x24(r1)
    mr r3, r30
    addi r4, r30, 0x6c
    bl fn_80654370
    lfs f1, 0x28(r1)
    mr r3, r30
    addi r4, r30, 0x70
    bl fn_80654370
    lfs f1, 0x68(r30)
    lfs f0, 0x6c(r30)
    fmuls f1, f1, f1
    lfs f2, 0x70(r30)
    fmuls f0, f0, f0
    fmuls f2, f2, f2
    fadds f0, f1, f0
    fadds f1, f2, f0
    bl fn_8068B100
    lfs f2, 0x8(r1)
    frsp f6, f1
    lfs f0, 0x68(r30)
    lfs f1, 0xc(r1)
    fsubs f5, f2, f0
    lfs f0, 0x6c(r30)
    lfs f2, 0x10(r1)
    fsubs f4, f1, f0
    lfs f0, 0x70(r30)
    fmuls f1, f5, f5
    fsubs f3, f2, f0
    stfs f6, 0x74(r30)
    fmuls f0, f4, f4
    stfs f5, 0x8(r1)
    fmuls f2, f3, f3
    fadds f0, f1, f0
    stfs f4, 0xc(r1)
    stfs f3, 0x10(r1)
    fadds f1, f2, f0
    bl fn_8068B100
    frsp f0, f1
    stfs f0, 0x78(r30)
lbl_fn_80654700_00000BD0:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80654C90(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    addi r11, r1, 0x30
    stfd f31, 0x70(r1)
    psq_st f31, 0x78(r1), 0, 0
    stfd f30, 0x60(r1)
    psq_st f30, 0x68(r1), 0, 0
    stfd f29, 0x50(r1)
    psq_st f29, 0x58(r1), 0, 0
    stfd f28, 0x40(r1)
    psq_st f28, 0x48(r1), 0, 0
    stfd f27, 0x30(r1)
    psq_st f27, 0x38(r1), 0, 0
    bl _savegpr_25
    lfs f30, lbl_8087EB58
    mr r25, r3
    lfs f29, lbl_80888898
    addi r29, r3, 0x130
    lfs f31, lbl_808888A4
    addi r31, r3, 0x154
lbl_fn_80654C90_00000C44:
    lbz r0, 0x8(r29)
    extsb. r0, r0
    bne lbl_fn_80654C90_00000D44
    addi r28, r29, 0xc
    addi r30, r25, 0x154
lbl_fn_80654C90_00000C58:
    lbz r0, 0x8(r28)
    extsb. r0, r0
    bne lbl_fn_80654C90_00000D38
    lfs f3, 0x0(r28)
    lfs f2, 0x0(r29)
    lfs f1, 0x4(r28)
    lfs f0, 0x4(r29)
    fsubs f27, f3, f2
    fsubs f28, f1, f0
    fmuls f1, f27, f27
    fmuls f0, f28, f28
    fadds f1, f1, f0
    bl fn_8068B100
    frsp f0, f1
    lfs f5, 0x11c(r25)
    lfs f2, 0x120(r25)
    lfs f1, 0x630(r25)
    fdivs f3, f31, f0
    lfs f0, 0x634(r25)
    fmuls f27, f27, f3
    fmuls f28, f28, f3
    fmuls f6, f1, f3
    fmuls f4, f5, f27
    fmuls f3, f2, f28
    fmuls f2, f2, f27
    fmuls f1, f5, f28
    fadds f3, f4, f3
    fcmpo cr0, f6, f0
    fsubs f2, f2, f1
    stfs f3, 0x8(r1)
    stfs f2, 0xc(r1)
    cror eq, lt, eq
    beq lbl_fn_80654C90_00000D38
    lfs f0, lbl_8087EB50
    fcmpo cr0, f6, f0
    cror eq, gt, eq
    beq lbl_fn_80654C90_00000D38
    lfs f1, 0x5d0(r25)
    lfs f0, 0x5d4(r25)
    fmuls f1, f1, f3
    fmuls f0, f0, f2
    fadds f0, f1, f0
    fcmpo cr0, f0, f29
    bge lbl_fn_80654C90_00000D24
    fneg f0, f0
    fcmpo cr0, f0, f30
    ble lbl_fn_80654C90_00000D38
    fmr f30, f0
    mr r27, r28
    mr r26, r29
    b lbl_fn_80654C90_00000D38
lbl_fn_80654C90_00000D24:
    fcmpo cr0, f0, f30
    ble lbl_fn_80654C90_00000D38
    fmr f30, f0
    mr r27, r29
    mr r26, r28
lbl_fn_80654C90_00000D38:
    addi r28, r28, 0xc
    cmplw r28, r30
    ble lbl_fn_80654C90_00000C58
lbl_fn_80654C90_00000D44:
    addi r29, r29, 0xc
    cmplw r29, r31
    blt lbl_fn_80654C90_00000C44
    lfs f0, lbl_8087EB58
    fcmpu cr0, f30, f0
    bne lbl_fn_80654C90_00000D64
    li r3, 0x0
    b lbl_fn_80654C90_00000D98
lbl_fn_80654C90_00000D64:
    lwz r4, 0x0(r27)
    li r3, 0x2
    lwz r0, 0x4(r27)
    stw r0, 0x164(r25)
    stw r4, 0x160(r25)
    lwz r0, 0x8(r27)
    stw r0, 0x168(r25)
    lwz r4, 0x0(r26)
    lwz r0, 0x4(r26)
    stw r0, 0x170(r25)
    stw r4, 0x16c(r25)
    lwz r0, 0x8(r26)
    stw r0, 0x174(r25)
lbl_fn_80654C90_00000D98:
    addi r11, r1, 0x30
    psq_l f31, 0x78(r1), 0, 0
    lfd f31, 0x70(r1)
    psq_l f30, 0x68(r1), 0, 0
    lfd f30, 0x60(r1)
    psq_l f29, 0x58(r1), 0, 0
    lfd f29, 0x50(r1)
    psq_l f28, 0x48(r1), 0, 0
    lfd f28, 0x40(r1)
    psq_l f27, 0x38(r1), 0, 0
    lfd f27, 0x30(r1)
    bl _restgpr_25
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_80654E80(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    addi r11, r1, 0x30
    stfd f31, 0x70(r1)
    psq_st f31, 0x78(r1), 0, 0
    stfd f30, 0x60(r1)
    psq_st f30, 0x68(r1), 0, 0
    stfd f29, 0x50(r1)
    psq_st f29, 0x58(r1), 0, 0
    stfd f28, 0x40(r1)
    psq_st f28, 0x48(r1), 0, 0
    stfd f27, 0x30(r1)
    psq_st f27, 0x38(r1), 0, 0
    bl _savegpr_25
    lfs f31, lbl_808888B0
    mr r31, r3
    lfs f29, lbl_80888898
    addi r28, r3, 0x130
    lfs f30, lbl_808888A4
    addi r30, r3, 0x154
lbl_fn_80654E80_00000E34:
    lbz r0, 0x8(r28)
    extsb. r0, r0
    bne lbl_fn_80654E80_00000F74
    addi r27, r28, 0xc
    addi r29, r31, 0x154
lbl_fn_80654E80_00000E48:
    lbz r0, 0x8(r27)
    extsb. r0, r0
    bne lbl_fn_80654E80_00000F68
    lfs f3, 0x0(r27)
    lfs f2, 0x0(r28)
    lfs f1, 0x4(r27)
    lfs f0, 0x4(r28)
    fsubs f28, f3, f2
    fsubs f27, f1, f0
    fmuls f1, f28, f28
    fmuls f0, f27, f27
    fadds f1, f1, f0
    bl fn_8068B100
    frsp f2, f1
    lfs f1, 0x630(r31)
    lfs f0, 0x634(r31)
    fdivs f4, f30, f2
    fmuls f3, f28, f4
    fmuls f2, f27, f4
    fmuls f4, f4, f1
    stfs f3, 0x8(r1)
    stfs f2, 0xc(r1)
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    beq lbl_fn_80654E80_00000F68
    lfs f0, lbl_8087EB50
    fcmpo cr0, f4, f0
    cror eq, gt, eq
    beq lbl_fn_80654E80_00000F68
    lfs f0, 0x5b4(r31)
    fsubs f4, f4, f0
    fcmpo cr0, f4, f29
    bge lbl_fn_80654E80_00000ED8
    lfs f0, 0x628(r31)
    fmuls f4, f4, f0
    b lbl_fn_80654E80_00000EE0
lbl_fn_80654E80_00000ED8:
    lfs f0, 0x624(r31)
    fmuls f4, f4, f0
lbl_fn_80654E80_00000EE0:
    fcmpo cr0, f4, f30
    cror eq, gt, eq
    beq lbl_fn_80654E80_00000F68
    lfs f3, 0x5ac(r31)
    lfs f2, 0x8(r1)
    lfs f1, 0x5b0(r31)
    lfs f0, 0xc(r1)
    fmuls f2, f3, f2
    fmuls f0, f1, f0
    fadds f1, f2, f0
    fcmpo cr0, f1, f29
    bge lbl_fn_80654E80_00000F1C
    fneg f1, f1
    li r0, 0x1
    b lbl_fn_80654E80_00000F20
lbl_fn_80654E80_00000F1C:
    li r0, 0x0
lbl_fn_80654E80_00000F20:
    lfs f0, lbl_8087EB5C
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    beq lbl_fn_80654E80_00000F68
    fsubs f1, f30, f1
    fsubs f0, f30, f0
    fdivs f0, f1, f0
    fadds f4, f4, f0
    fcmpo cr0, f4, f31
    bge lbl_fn_80654E80_00000F68
    fmr f31, f4
    cmpwi r0, 0x0
    beq lbl_fn_80654E80_00000F60
    mr r26, r27
    mr r25, r28
    b lbl_fn_80654E80_00000F68
lbl_fn_80654E80_00000F60:
    mr r26, r28
    mr r25, r27
lbl_fn_80654E80_00000F68:
    addi r27, r27, 0xc
    cmplw r27, r29
    ble lbl_fn_80654E80_00000E48
lbl_fn_80654E80_00000F74:
    addi r28, r28, 0xc
    cmplw r28, r30
    blt lbl_fn_80654E80_00000E34
    lfs f0, lbl_808888B0
    fcmpu cr0, f0, f31
    bne lbl_fn_80654E80_00000F94
    li r3, 0x0
    b lbl_fn_80654E80_00000FC8
lbl_fn_80654E80_00000F94:
    lwz r4, 0x0(r26)
    li r3, 0x2
    lwz r0, 0x4(r26)
    stw r0, 0x164(r31)
    stw r4, 0x160(r31)
    lwz r0, 0x8(r26)
    stw r0, 0x168(r31)
    lwz r4, 0x0(r25)
    lwz r0, 0x4(r25)
    stw r0, 0x170(r31)
    stw r4, 0x16c(r31)
    lwz r0, 0x8(r25)
    stw r0, 0x174(r31)
lbl_fn_80654E80_00000FC8:
    addi r11, r1, 0x30
    psq_l f31, 0x78(r1), 0, 0
    lfd f31, 0x70(r1)
    psq_l f30, 0x68(r1), 0, 0
    lfd f30, 0x60(r1)
    psq_l f29, 0x58(r1), 0, 0
    lfd f29, 0x50(r1)
    psq_l f28, 0x48(r1), 0, 0
    lfd f28, 0x40(r1)
    psq_l f27, 0x38(r1), 0, 0
    lfd f27, 0x30(r1)
    bl _restgpr_25
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_806550B0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    addi r8, r3, 0x130
    addi r0, r3, 0x160
    lfs f5, 0x11c(r3)
    lfs f0, 0x5d0(r3)
    lfs f3, 0x120(r3)
    lfs f1, 0x5d4(r3)
    fmuls f4, f5, f0
    fmuls f2, f3, f0
    lfs f0, 0x5b8(r3)
    fmuls f3, f3, f1
    fmuls f1, f5, f1
    fadds f7, f4, f3
    fsubs f8, f2, f1
    fmuls f7, f7, f0
    fmuls f8, f8, f0
lbl_fn_806550B0_00001050:
    lbz r4, 0x8(r8)
    extsb. r4, r4
    bne lbl_fn_806550B0_000011AC
    lfs f2, 0x0(r8)
    lfs f0, 0x4(r8)
    fsubs f1, f2, f7
    lfs f3, 0x614(r3)
    fsubs f6, f0, f8
    fadds f5, f2, f7
    stfs f1, 0x10(r1)
    fadds f4, f0, f8
    fcmpo cr0, f1, f3
    stfs f6, 0x14(r1)
    stfs f5, 0x8(r1)
    stfs f4, 0xc(r1)
    cror eq, lt, eq
    beq lbl_fn_806550B0_000010C4
    lfs f2, 0x61c(r3)
    fcmpo cr0, f1, f2
    cror eq, gt, eq
    beq lbl_fn_806550B0_000010C4
    lfs f1, 0x618(r3)
    fcmpo cr0, f6, f1
    cror eq, lt, eq
    beq lbl_fn_806550B0_000010C4
    lfs f0, 0x620(r3)
    fcmpo cr0, f6, f0
    cror eq, gt, eq
    bne lbl_fn_806550B0_0000113C
lbl_fn_806550B0_000010C4:
    lfs f1, 0x8(r1)
    lfs f0, 0x614(r3)
    fcmpo cr0, f1, f0
    ble lbl_fn_806550B0_000011AC
    lfs f0, 0x61c(r3)
    fcmpo cr0, f1, f0
    bge lbl_fn_806550B0_000011AC
    lfs f1, 0xc(r1)
    lfs f0, 0x618(r3)
    fcmpo cr0, f1, f0
    ble lbl_fn_806550B0_000011AC
    lfs f0, 0x620(r3)
    fcmpo cr0, f1, f0
    bge lbl_fn_806550B0_000011AC
    lwz r7, 0x0(r8)
    li r4, 0x0
    lwz r5, 0x4(r8)
    li r0, -0x1
    stw r5, 0x170(r3)
    lwz r6, 0x10(r1)
    stw r7, 0x16c(r3)
    lwz r5, 0x14(r1)
    lwz r7, 0x8(r8)
    stw r7, 0x174(r3)
    stw r6, 0x160(r3)
    stw r5, 0x164(r3)
    stb r4, 0x168(r3)
    stb r0, 0x169(r3)
    li r3, -0x1
    b lbl_fn_806550B0_000011BC
lbl_fn_806550B0_0000113C:
    fcmpo cr0, f5, f3
    cror eq, lt, eq
    beq lbl_fn_806550B0_0000116C
    fcmpo cr0, f5, f2
    cror eq, gt, eq
    beq lbl_fn_806550B0_0000116C
    fcmpo cr0, f4, f1
    cror eq, lt, eq
    beq lbl_fn_806550B0_0000116C
    fcmpo cr0, f4, f0
    cror eq, gt, eq
    bne lbl_fn_806550B0_000011AC
lbl_fn_806550B0_0000116C:
    lwz r7, 0x0(r8)
    li r4, 0x0
    lwz r5, 0x4(r8)
    li r0, -0x1
    stw r5, 0x164(r3)
    lwz r6, 0x8(r1)
    stw r7, 0x160(r3)
    lwz r5, 0xc(r1)
    lwz r7, 0x8(r8)
    stw r7, 0x168(r3)
    stw r6, 0x16c(r3)
    stw r5, 0x170(r3)
    stb r4, 0x174(r3)
    stb r0, 0x175(r3)
    li r3, -0x1
    b lbl_fn_806550B0_000011BC
lbl_fn_806550B0_000011AC:
    addi r8, r8, 0xc
    cmplw r8, r0
    blt lbl_fn_806550B0_00001050
    li r3, 0x0
lbl_fn_806550B0_000011BC:
    addi r1, r1, 0x20
    blr
}

asm void fn_80655270(void)
{
    nofralloc
    lfs f0, lbl_8087EB68
    addi r6, r3, 0x160
    addi r0, r3, 0x178
    fmuls f4, f0, f0
lbl_fn_80655270_000011E0:
    lbz r4, 0x8(r6)
    extsb. r4, r4
    bne lbl_fn_80655270_00001250
    lbz r4, 0x9(r6)
    extsb. r4, r4
    bne lbl_fn_80655270_00001250
    addi r7, r3, 0x130
    addi r4, r3, 0x160
lbl_fn_80655270_00001200:
    lbz r5, 0x8(r7)
    extsb. r5, r5
    bne lbl_fn_80655270_00001244
    lfs f3, 0x0(r6)
    lfs f2, 0x0(r7)
    lfs f1, 0x4(r6)
    lfs f0, 0x4(r7)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    fmuls f1, f2, f2
    fmuls f0, f0, f0
    fadds f0, f1, f0
    fcmpo cr0, f0, f4
    bge lbl_fn_80655270_00001244
    fmr f4, f0
    mr r8, r6
    mr r9, r7
lbl_fn_80655270_00001244:
    addi r7, r7, 0xc
    cmplw r7, r4
    blt lbl_fn_80655270_00001200
lbl_fn_80655270_00001250:
    addi r6, r6, 0xc
    cmplw r6, r0
    blt lbl_fn_80655270_000011E0
    lfs f0, lbl_8087EB68
    fmuls f0, f0, f0
    fcmpu cr0, f4, f0
    bne lbl_fn_80655270_00001274
    li r3, 0x0
    blr
lbl_fn_80655270_00001274:
    lwz r4, 0x4(r9)
    addi r0, r3, 0x160
    lwz r5, 0x0(r9)
    cmplw r8, r0
    stw r5, 0x0(r8)
    stw r4, 0x4(r8)
    lwz r0, 0x8(r9)
    stw r0, 0x8(r8)
    lfs f5, 0x11c(r3)
    lfs f0, 0x5d0(r3)
    lfs f3, 0x120(r3)
    lfs f1, 0x5d4(r3)
    fmuls f4, f5, f0
    fmuls f2, f3, f0
    lfs f0, 0x5a8(r3)
    fmuls f3, f3, f1
    fmuls f1, f5, f1
    fadds f3, f4, f3
    fsubs f1, f2, f1
    stfs f3, 0x5ac(r3)
    fmuls f2, f0, f3
    fmuls f3, f0, f1
    stfs f1, 0x5b0(r3)
    bne lbl_fn_80655270_00001300
    lfs f0, 0x0(r8)
    li r4, 0x0
    li r0, -0x1
    fadds f0, f0, f2
    stfs f0, 0x16c(r3)
    lfs f0, 0x4(r8)
    fadds f0, f0, f3
    stb r4, 0x174(r3)
    stfs f0, 0x170(r3)
    stb r0, 0x175(r3)
    b lbl_fn_80655270_00001328
lbl_fn_80655270_00001300:
    lfs f0, 0x0(r8)
    li r4, 0x0
    li r0, -0x1
    fsubs f0, f0, f2
    stfs f0, 0x160(r3)
    lfs f0, 0x4(r8)
    fsubs f0, f0, f3
    stb r4, 0x168(r3)
    stfs f0, 0x164(r3)
    stb r0, 0x169(r3)
lbl_fn_80655270_00001328:
    lbz r0, 0x5e(r3)
    extsb. r0, r0
    bge lbl_fn_80655270_0000133C
    li r3, -0x1
    blr
lbl_fn_80655270_0000133C:
    li r3, 0x1
    blr
}

asm void fn_806553F0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    extsb. r0, r4
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    bne lbl_fn_806553F0_00001380
    li r0, 0x0
    stb r0, 0x5e(r3)
    b lbl_fn_806553F0_0000190C
lbl_fn_806553F0_00001380:
    lfs f4, 0x11c(r3)
    lfs f1, 0x5ac(r3)
    lfs f2, 0x120(r3)
    fmuls f3, f4, f1
    lfs f0, 0x5b0(r3)
    fmuls f1, f2, f1
    lbz r0, 0x5e(r3)
    fmuls f2, f2, f0
    fmuls f0, f4, f0
    extsb. r0, r0
    fadds f3, f3, f2
    fsubs f2, f1, f0
    stfs f3, 0x10(r1)
    stfs f2, 0x14(r1)
    bne lbl_fn_806553F0_000013E8
    lwz r4, 0x10(r1)
    lwz r0, 0x14(r1)
    stw r4, 0x34(r3)
    lfs f0, lbl_80888898
    stw r0, 0x38(r3)
    lwz r4, lbl_808801A8
    lwz r0, lbl_808801AC
    stw r0, 0x40(r3)
    stw r4, 0x3c(r3)
    stfs f0, 0x44(r3)
    b lbl_fn_806553F0_000015B0
lbl_fn_806553F0_000013E8:
    lfs f1, 0x34(r3)
    lfs f0, 0x38(r3)
    fsubs f1, f3, f1
    fsubs f2, f2, f0
    stfs f1, 0x8(r1)
    fmuls f1, f1, f1
    fmuls f0, f2, f2
    stfs f2, 0xc(r1)
    fadds f1, f1, f0
    bl fn_8068B100
    lwz r0, 0x650(r30)
    frsp f2, f1
    cmpwi r0, 0x0
    bne lbl_fn_806553F0_000014E4
    lfs f0, 0xf8(r30)
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_806553F0_00001438
    lfs f4, lbl_808888A4
    b lbl_fn_806553F0_00001444
lbl_fn_806553F0_00001438:
    fdivs f4, f2, f0
    fmuls f4, f4, f4
    fmuls f4, f4, f4
lbl_fn_806553F0_00001444:
    lfs f0, 0xfc(r30)
    lfs f3, 0x8(r1)
    fmuls f4, f4, f0
    lfs f1, 0xc(r1)
    lfs f2, 0x34(r30)
    lfs f0, 0x38(r30)
    fmuls f3, f4, f3
    fmuls f1, f4, f1
    fadds f3, f2, f3
    fadds f2, f0, f1
    stfs f3, 0x8(r1)
    fmuls f1, f3, f3
    fmuls f0, f2, f2
    stfs f2, 0xc(r1)
    fadds f1, f1, f0
    bl fn_8068B100
    frsp f4, f1
    lfs f0, 0x8(r1)
    lfs f2, 0xc(r1)
    lfs f1, 0x34(r30)
    fdivs f3, f0, f4
    lfs f0, 0x38(r30)
    stfs f3, 0x8(r1)
    fdivs f2, f2, f4
    stfs f2, 0xc(r1)
    fsubs f2, f2, f0
    fsubs f1, f3, f1
    stfs f2, 0x40(r30)
    fmuls f0, f2, f2
    stfs f1, 0x3c(r30)
    fmuls f1, f1, f1
    fadds f1, f1, f0
    bl fn_8068B100
    frsp f0, f1
    lwz r3, 0x8(r1)
    lwz r0, 0xc(r1)
    stfs f0, 0x44(r30)
    stw r3, 0x34(r30)
    stw r0, 0x38(r30)
    b lbl_fn_806553F0_000015B0
lbl_fn_806553F0_000014E4:
    lfs f0, 0xf8(r30)
    fcmpo cr0, f2, f0
    ble lbl_fn_806553F0_00001598
    fsubs f0, f2, f0
    lfs f4, 0xfc(r30)
    lfs f3, 0x8(r1)
    lfs f1, 0xc(r1)
    fdivs f5, f0, f2
    lfs f2, 0x34(r30)
    lfs f0, 0x38(r30)
    fmuls f4, f4, f5
    fmuls f3, f3, f4
    fmuls f1, f1, f4
    fadds f3, f2, f3
    fadds f2, f0, f1
    stfs f3, 0x8(r1)
    fmuls f1, f3, f3
    fmuls f0, f2, f2
    stfs f2, 0xc(r1)
    fadds f1, f1, f0
    bl fn_8068B100
    frsp f4, f1
    lfs f0, 0x8(r1)
    lfs f2, 0xc(r1)
    lfs f1, 0x34(r30)
    fdivs f3, f0, f4
    lfs f0, 0x38(r30)
    stfs f3, 0x8(r1)
    fdivs f2, f2, f4
    stfs f2, 0xc(r1)
    fsubs f2, f2, f0
    fsubs f1, f3, f1
    stfs f2, 0x40(r30)
    fmuls f0, f2, f2
    stfs f1, 0x3c(r30)
    fmuls f1, f1, f1
    fadds f1, f1, f0
    bl fn_8068B100
    frsp f0, f1
    lwz r3, 0x8(r1)
    lwz r0, 0xc(r1)
    stfs f0, 0x44(r30)
    stw r3, 0x34(r30)
    stw r0, 0x38(r30)
    b lbl_fn_806553F0_000015B0
lbl_fn_806553F0_00001598:
    lwz r3, lbl_808801A8
    lwz r0, lbl_808801AC
    lfs f0, lbl_80888898
    stw r3, 0x3c(r30)
    stw r0, 0x40(r30)
    stfs f0, 0x44(r30)
lbl_fn_806553F0_000015B0:
    lfs f1, 0x630(r30)
    lfs f0, 0x5a8(r30)
    lbz r0, 0x5e(r30)
    fdivs f2, f1, f0
    extsb. r0, r0
    bne lbl_fn_806553F0_000015DC
    lfs f0, lbl_80888898
    stfs f2, 0x48(r30)
    stfs f0, 0x4c(r30)
    stfs f0, 0x50(r30)
    b lbl_fn_806553F0_000016CC
lbl_fn_806553F0_000015DC:
    lfs f1, 0x48(r30)
    lfs f0, lbl_80888898
    fsubs f4, f2, f1
    fcmpo cr0, f4, f0
    bge lbl_fn_806553F0_000015F8
    fneg f3, f4
    b lbl_fn_806553F0_000015FC
lbl_fn_806553F0_000015F8:
    fmr f3, f4
lbl_fn_806553F0_000015FC:
    lwz r0, 0x654(r30)
    cmpwi r0, 0x0
    bne lbl_fn_806553F0_0000166C
    lfs f0, 0x100(r30)
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_806553F0_00001620
    lfs f3, lbl_808888A4
    b lbl_fn_806553F0_0000162C
lbl_fn_806553F0_00001620:
    fdivs f3, f3, f0
    fmuls f3, f3, f3
    fmuls f3, f3, f3
lbl_fn_806553F0_0000162C:
    lfs f1, 0x104(r30)
    lfs f0, lbl_80888898
    fmuls f3, f3, f1
    fmuls f1, f3, f4
    stfs f1, 0x4c(r30)
    fcmpo cr0, f1, f0
    bge lbl_fn_806553F0_00001654
    fneg f0, f1
    stfs f0, 0x50(r30)
    b lbl_fn_806553F0_00001658
lbl_fn_806553F0_00001654:
    stfs f1, 0x50(r30)
lbl_fn_806553F0_00001658:
    lfs f1, 0x48(r30)
    lfs f0, 0x4c(r30)
    fadds f0, f1, f0
    stfs f0, 0x48(r30)
    b lbl_fn_806553F0_000016CC
lbl_fn_806553F0_0000166C:
    lfs f0, 0x100(r30)
    fcmpo cr0, f3, f0
    ble lbl_fn_806553F0_000016C0
    fsubs f2, f3, f0
    lfs f1, 0x104(r30)
    lfs f0, lbl_80888898
    fdivs f2, f2, f3
    fmuls f1, f1, f2
    fmuls f1, f1, f4
    stfs f1, 0x4c(r30)
    fcmpo cr0, f1, f0
    bge lbl_fn_806553F0_000016A8
    fneg f0, f1
    stfs f0, 0x50(r30)
    b lbl_fn_806553F0_000016AC
lbl_fn_806553F0_000016A8:
    stfs f1, 0x50(r30)
lbl_fn_806553F0_000016AC:
    lfs f1, 0x48(r30)
    lfs f0, 0x4c(r30)
    fadds f0, f1, f0
    stfs f0, 0x48(r30)
    b lbl_fn_806553F0_000016CC
lbl_fn_806553F0_000016C0:
    lfs f0, lbl_80888898
    stfs f0, 0x4c(r30)
    stfs f0, 0x50(r30)
lbl_fn_806553F0_000016CC:
    lfs f2, 0x5b0(r30)
    lfs f0, 0x120(r30)
    fneg f1, f2
    lbz r0, 0x5e(r30)
    lfs f5, 0x5ac(r30)
    fmuls f3, f2, f0
    lfs f4, 0x11c(r30)
    extsb. r0, r0
    fmuls f0, f5, f0
    lfs f7, 0x160(r30)
    fmuls f2, f1, f4
    lfs f6, 0x16c(r30)
    fmuls f5, f5, f4
    lfs f4, 0x164(r30)
    lfs f1, 0x170(r30)
    fadds f7, f7, f6
    lfs f8, lbl_8088889C
    fadds f3, f5, f3
    fadds f6, f4, f1
    lfs f4, 0x118(r30)
    fmuls f7, f8, f7
    fadds f2, f2, f0
    lfs f1, 0x114(r30)
    fmuls f5, f8, f6
    fmuls f9, f3, f7
    lfs f6, 0x124(r30)
    fmuls f7, f2, f7
    fmuls f0, f3, f5
    lfs f3, 0x128(r30)
    fmuls f8, f2, f5
    lfs f5, 0x12c(r30)
    fneg f2, f4
    fadds f7, f7, f0
    fsubs f8, f9, f8
    fneg f0, f1
    fsubs f3, f3, f7
    fsubs f6, f6, f8
    fmuls f6, f5, f6
    fmuls f5, f5, f3
    stfs f6, 0x8(r1)
    fmuls f3, f2, f6
    fmuls f2, f1, f5
    stfs f5, 0xc(r1)
    fmuls f1, f0, f6
    fmuls f0, f4, f5
    fadds f3, f3, f2
    fsubs f2, f1, f0
    stfs f3, 0x10(r1)
    stfs f2, 0x14(r1)
    lwz r3, 0x10(r1)
    lwz r0, 0x14(r1)
    stw r3, 0x5d8(r30)
    stw r0, 0x5dc(r30)
    bne lbl_fn_806553F0_000017C8
    stw r3, 0x20(r30)
    lfs f0, lbl_80888898
    stw r0, 0x24(r30)
    lwz r3, lbl_808801A8
    lwz r0, lbl_808801AC
    stw r0, 0x2c(r30)
    stw r3, 0x28(r30)
    stfs f0, 0x30(r30)
    b lbl_fn_806553F0_00001908
lbl_fn_806553F0_000017C8:
    lfs f1, 0x20(r30)
    lfs f0, 0x24(r30)
    fsubs f1, f3, f1
    fsubs f2, f2, f0
    stfs f1, 0x8(r1)
    fmuls f1, f1, f1
    fmuls f0, f2, f2
    stfs f2, 0xc(r1)
    fadds f1, f1, f0
    bl fn_8068B100
    lwz r0, 0x64c(r30)
    frsp f4, f1
    cmpwi r0, 0x0
    bne lbl_fn_806553F0_00001880
    lfs f0, 0xf0(r30)
    fcmpo cr0, f4, f0
    cror eq, gt, eq
    bne lbl_fn_806553F0_00001818
    lfs f2, lbl_808888A4
    b lbl_fn_806553F0_00001824
lbl_fn_806553F0_00001818:
    fdivs f2, f4, f0
    fmuls f2, f2, f2
    fmuls f2, f2, f2
lbl_fn_806553F0_00001824:
    lfs f0, 0xf4(r30)
    lfs f1, 0x8(r1)
    fmuls f2, f2, f0
    lfs f0, 0xc(r1)
    fmuls f1, f2, f1
    fmuls f2, f2, f0
    stfs f1, 0x28(r30)
    fmuls f1, f1, f1
    fmuls f0, f2, f2
    stfs f2, 0x2c(r30)
    fadds f1, f1, f0
    bl fn_8068B100
    frsp f4, f1
    lfs f3, 0x20(r30)
    lfs f2, 0x28(r30)
    lfs f1, 0x24(r30)
    lfs f0, 0x2c(r30)
    fadds f2, f3, f2
    stfs f4, 0x30(r30)
    fadds f0, f1, f0
    stfs f2, 0x20(r30)
    stfs f0, 0x24(r30)
    b lbl_fn_806553F0_00001908
lbl_fn_806553F0_00001880:
    lfs f0, 0xf0(r30)
    fcmpo cr0, f4, f0
    ble lbl_fn_806553F0_000018F0
    fsubs f3, f4, f0
    lfs f2, 0xf4(r30)
    lfs f1, 0x8(r1)
    lfs f0, 0xc(r1)
    fdivs f3, f3, f4
    fmuls f2, f2, f3
    fmuls f1, f2, f1
    fmuls f2, f2, f0
    stfs f1, 0x28(r30)
    fmuls f1, f1, f1
    fmuls f0, f2, f2
    stfs f2, 0x2c(r30)
    fadds f1, f1, f0
    bl fn_8068B100
    frsp f4, f1
    lfs f3, 0x20(r30)
    lfs f2, 0x28(r30)
    lfs f1, 0x24(r30)
    lfs f0, 0x2c(r30)
    fadds f2, f3, f2
    stfs f4, 0x30(r30)
    fadds f0, f1, f0
    stfs f2, 0x20(r30)
    stfs f0, 0x24(r30)
    b lbl_fn_806553F0_00001908
lbl_fn_806553F0_000018F0:
    lwz r3, lbl_808801A8
    lwz r0, lbl_808801AC
    lfs f0, lbl_80888898
    stw r3, 0x28(r30)
    stw r0, 0x2c(r30)
    stfs f0, 0x30(r30)
lbl_fn_806553F0_00001908:
    stb r31, 0x5e(r30)
lbl_fn_806553F0_0000190C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806559D0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    stfd f30, 0x20(r1)
    psq_st f30, 0x28(r1), 0, 0
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    lbz r5, 0x40(r4)
    cmplwi r5, 0x2
    beq lbl_fn_806559D0_000019C4
    cmplwi r5, 0x5
    beq lbl_fn_806559D0_000019C4
    cmplwi r5, 0x8
    beq lbl_fn_806559D0_000019C4
    cmplwi r5, 0xb
    bne lbl_fn_806559D0_00001988
    lbz r0, 0x643(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806559D0_000019C4
lbl_fn_806559D0_00001988:
    cmplwi r5, 0xf
    bne lbl_fn_806559D0_0000199C
    lbz r0, 0x643(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806559D0_000019C4
lbl_fn_806559D0_0000199C:
    cmplwi r5, 0x11
    bne lbl_fn_806559D0_000019B0
    lbz r0, 0x643(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806559D0_000019C4
lbl_fn_806559D0_000019B0:
    cmplwi r5, 0x10
    bne lbl_fn_806559D0_00001A68
    lbz r0, 0x643(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806559D0_00001A68
lbl_fn_806559D0_000019C4:
    lfd f4, lbl_808888B8
    addi r8, r4, 0x20
    lfs f3, lbl_808888C0
    addi r9, r3, 0x154
    lfs f2, lbl_808888C4
    addi r0, r3, 0x130
    lfs f1, lbl_808888C8
    li r4, -0x1
    lis r7, 0x4330
    li r5, 0x0
    nop
lbl_fn_806559D0_000019F0:
    lhz r6, 0x4(r8)
    cmpwi r6, 0x0
    beq lbl_fn_806559D0_00001A50
    lha r6, 0x0(r8)
    stw r7, 0x8(r1)
    xoris r6, r6, 0x8000
    stw r6, 0xc(r1)
    lfd f0, 0x8(r1)
    stw r7, 0x10(r1)
    fsubs f0, f0, f4
    fmuls f0, f3, f0
    fsubs f0, f0, f2
    stfs f0, 0x0(r9)
    lha r6, 0x2(r8)
    xoris r6, r6, 0x8000
    stw r6, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f4
    fmuls f0, f3, f0
    fsubs f0, f0, f1
    stfs f0, 0x4(r9)
    stb r5, 0x8(r9)
    stb r5, 0x9(r9)
    b lbl_fn_806559D0_00001A54
lbl_fn_806559D0_00001A50:
    stb r4, 0x8(r9)
lbl_fn_806559D0_00001A54:
    subi r9, r9, 0xc
    subi r8, r8, 0x8
    cmplw r9, r0
    bge lbl_fn_806559D0_000019F0
    b lbl_fn_806559D0_00001A88
lbl_fn_806559D0_00001A68:
    addi r5, r3, 0x154
    addi r0, r3, 0x130
    li r4, -0x1
    nop
lbl_fn_806559D0_00001A78:
    stb r4, 0x8(r5)
    subi r5, r5, 0xc
    cmplw r5, r0
    bge lbl_fn_806559D0_00001A78
lbl_fn_806559D0_00001A88:
    addi r7, r3, 0x154
    addi r6, r3, 0x130
    mr r4, r7
    nop
lbl_fn_806559D0_00001A98:
    lbz r0, 0x8(r4)
    extsb. r0, r0
    blt lbl_fn_806559D0_00001AF8
    lfs f1, 0x0(r4)
    lfs f0, 0x614(r3)
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    beq lbl_fn_806559D0_00001AEC
    lfs f0, 0x61c(r3)
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    beq lbl_fn_806559D0_00001AEC
    lfs f1, 0x4(r4)
    lfs f0, 0x618(r3)
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    beq lbl_fn_806559D0_00001AEC
    lfs f0, 0x620(r3)
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_806559D0_00001AF8
lbl_fn_806559D0_00001AEC:
    lbz r0, 0x8(r4)
    ori r0, r0, 0x1
    stb r0, 0x8(r4)
lbl_fn_806559D0_00001AF8:
    subi r4, r4, 0xc
    cmplw r4, r6
    bge lbl_fn_806559D0_00001A98
    nop
lbl_fn_806559D0_00001B08:
    lbz r0, 0x8(r6)
    extsb. r0, r0
    bne lbl_fn_806559D0_00001B58
    addi r5, r6, 0xc
lbl_fn_806559D0_00001B18:
    lbz r4, 0x8(r5)
    extsb. r0, r4
    bne lbl_fn_806559D0_00001B4C
    lfs f1, 0x0(r6)
    lfs f0, 0x0(r5)
    fcmpu cr0, f1, f0
    bne lbl_fn_806559D0_00001B4C
    lfs f1, 0x4(r6)
    lfs f0, 0x4(r5)
    fcmpu cr0, f1, f0
    bne lbl_fn_806559D0_00001B4C
    ori r0, r4, 0x2
    stb r0, 0x8(r5)
lbl_fn_806559D0_00001B4C:
    addi r5, r5, 0xc
    cmplw r5, r7
    ble lbl_fn_806559D0_00001B18
lbl_fn_806559D0_00001B58:
    addi r6, r6, 0xc
    cmplw r6, r7
    blt lbl_fn_806559D0_00001B08
    li r0, 0x0
    sth r0, 0x178(r3)
    addi r5, r3, 0x154
    addi r0, r3, 0x130
    nop
lbl_fn_806559D0_00001B78:
    lbz r4, 0x8(r5)
    extsb. r4, r4
    bne lbl_fn_806559D0_00001B90
    lha r4, 0x178(r3)
    addi r4, r4, 0x1
    sth r4, 0x178(r3)
lbl_fn_806559D0_00001B90:
    subi r5, r5, 0xc
    cmplw r5, r0
    bge lbl_fn_806559D0_00001B78
    lfs f1, 0x54(r3)
    lfs f0, lbl_8087EB64
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    beq lbl_fn_806559D0_00001CA0
    lbz r0, 0x5e(r3)
    extsb r0, r0
    cmpwi r0, 0x2
    beq lbl_fn_806559D0_00001BC8
    cmpwi r0, -0x2
    bne lbl_fn_806559D0_00001C0C
lbl_fn_806559D0_00001BC8:
    lha r0, 0x178(r3)
    cmpwi r0, 0x2
    blt lbl_fn_806559D0_00001BE8
    mr r3, r31
    bl fn_80654E80
    extsb. r0, r3
    mr r30, r3
    bne lbl_fn_806559D0_00001CA4
lbl_fn_806559D0_00001BE8:
    lha r0, 0x178(r31)
    cmpwi r0, 0x1
    blt lbl_fn_806559D0_00001CA0
    mr r3, r31
    bl fn_80655270
    extsb. r0, r3
    mr r30, r3
    bne lbl_fn_806559D0_00001CA4
    b lbl_fn_806559D0_00001CA0
lbl_fn_806559D0_00001C0C:
    cmpwi r0, 0x1
    beq lbl_fn_806559D0_00001C1C
    cmpwi r0, -0x1
    bne lbl_fn_806559D0_00001C60
lbl_fn_806559D0_00001C1C:
    lha r0, 0x178(r3)
    cmpwi r0, 0x2
    blt lbl_fn_806559D0_00001C3C
    mr r3, r31
    bl fn_80654C90
    extsb. r0, r3
    mr r30, r3
    bne lbl_fn_806559D0_00001CA4
lbl_fn_806559D0_00001C3C:
    lha r0, 0x178(r31)
    cmpwi r0, 0x1
    blt lbl_fn_806559D0_00001CA0
    mr r3, r31
    bl fn_80655270
    extsb. r0, r3
    mr r30, r3
    bne lbl_fn_806559D0_00001CA4
    b lbl_fn_806559D0_00001CA0
lbl_fn_806559D0_00001C60:
    lha r0, 0x178(r3)
    cmpwi r0, 0x2
    blt lbl_fn_806559D0_00001C80
    mr r3, r31
    bl fn_80654C90
    extsb. r0, r3
    mr r30, r3
    bne lbl_fn_806559D0_00001CA4
lbl_fn_806559D0_00001C80:
    lha r0, 0x178(r31)
    cmpwi r0, 0x1
    bne lbl_fn_806559D0_00001CA0
    mr r3, r31
    bl fn_806550B0
    extsb. r0, r3
    mr r30, r3
    bne lbl_fn_806559D0_00001CA4
lbl_fn_806559D0_00001CA0:
    li r30, 0x0
lbl_fn_806559D0_00001CA4:
    extsb. r0, r30
    beq lbl_fn_806559D0_00001DB0
    lfs f3, 0x16c(r31)
    lfs f2, 0x160(r31)
    lfs f1, 0x170(r31)
    lfs f0, 0x164(r31)
    fsubs f30, f3, f2
    fsubs f31, f1, f0
    fmuls f1, f30, f30
    fmuls f0, f31, f31
    fadds f1, f1, f0
    bl fn_8068B100
    frsp f3, f1
    lfs f0, lbl_808888A4
    lhz r0, 0x5e8(r31)
    lfs f1, 0x630(r31)
    fdivs f2, f0, f3
    lfs f4, 0x11c(r31)
    lfs f0, 0x120(r31)
    cmpwi r0, 0x0
    stfs f3, 0x5a8(r31)
    fmuls f30, f30, f2
    fmuls f31, f31, f2
    fmuls f1, f1, f2
    stfs f30, 0x5ac(r31)
    fmuls f3, f4, f30
    fmuls f2, f0, f31
    stfs f1, 0x5b4(r31)
    fmuls f1, f0, f30
    fmuls f0, f4, f31
    stfs f31, 0x5b0(r31)
    fadds f2, f3, f2
    fsubs f3, f1, f0
    stfs f2, 0x5c8(r31)
    stfs f3, 0x5cc(r31)
    bne lbl_fn_806559D0_00001D68
    lfs f0, 0x5d0(r31)
    lfs f1, 0x5d4(r31)
    fmuls f2, f2, f0
    lfs f0, lbl_8087EB60
    fmuls f1, f3, f1
    fadds f1, f2, f1
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_806559D0_00001D68
    li r0, 0x1
    stb r0, 0x174(r31)
    li r30, 0x0
    stb r0, 0x168(r31)
lbl_fn_806559D0_00001D68:
    lbz r0, 0x5e(r31)
    cmpwi r0, 0x2
    bne lbl_fn_806559D0_00001DA4
    extsb r0, r30
    cmpwi r0, 0x2
    bne lbl_fn_806559D0_00001DA4
    lbz r3, 0x5ea(r31)
    cmplwi r3, 0xc8
    bne lbl_fn_806559D0_00001D98
    lfs f0, 0x5a8(r31)
    stfs f0, 0x5b8(r31)
    b lbl_fn_806559D0_00001DB8
lbl_fn_806559D0_00001D98:
    addi r0, r3, 0x1
    stb r0, 0x5ea(r31)
    b lbl_fn_806559D0_00001DB8
lbl_fn_806559D0_00001DA4:
    li r0, 0x0
    stb r0, 0x5ea(r31)
    b lbl_fn_806559D0_00001DB8
lbl_fn_806559D0_00001DB0:
    li r0, 0x0
    stb r0, 0x5ea(r31)
lbl_fn_806559D0_00001DB8:
    mr r3, r31
    extsb r4, r30
    bl fn_806553F0
    lwz r0, 0x44(r1)
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    psq_l f30, 0x28(r1), 0, 0
    lfd f30, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80655E90(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    lis r8, 0x4330
    xoris r5, r5, 0x8000
    stw r0, 0x64(r1)
    xoris r0, r4, 0x8000
    lfd f4, lbl_808888B8
    xoris r4, r6, 0x8000
    stw r0, 0xc(r1)
    xoris r0, r7, 0x8000
    stw r8, 0x8(r1)
    stfd f31, 0x50(r1)
    lfd f0, 0x8(r1)
    psq_st f31, 0x58(r1), 0, 0
    fsubs f31, f0, f4
    stfd f30, 0x40(r1)
    psq_st f30, 0x48(r1), 0, 0
    fmuls f1, f31, f31
    stfd f29, 0x30(r1)
    psq_st f29, 0x38(r1), 0, 0
    stw r4, 0xc(r1)
    stfd f28, 0x20(r1)
    lfd f3, 0x8(r1)
    psq_st f28, 0x28(r1), 0, 0
    fsubs f29, f3, f4
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r8, 0x10(r1)
    stw r5, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f30, f0, f4
    stw r0, 0x14(r1)
    lfd f2, 0x10(r1)
    fmuls f0, f30, f30
    fsubs f28, f2, f4
    fadds f1, f1, f0
    bl fn_8068B100
    frsp f2, f1
    fcmpo cr0, f2, f29
    cror eq, lt, eq
    bne lbl_fn_80655E90_00001EA4
    lfs f0, lbl_80888898
    stfs f0, 0x4(r31)
    stfs f0, 0x0(r31)
    b lbl_fn_80655E90_00001EE4
lbl_fn_80655E90_00001EA4:
    fcmpo cr0, f2, f28
    cror eq, gt, eq
    bne lbl_fn_80655E90_00001EC4
    fdivs f0, f31, f2
    stfs f0, 0x0(r31)
    fdivs f0, f30, f2
    stfs f0, 0x4(r31)
    b lbl_fn_80655E90_00001EE4
lbl_fn_80655E90_00001EC4:
    fsubs f1, f2, f29
    fsubs f0, f28, f29
    fdivs f0, f1, f0
    fdivs f0, f0, f2
    fmuls f1, f31, f0
    fmuls f0, f30, f0
    stfs f1, 0x0(r31)
    stfs f0, 0x4(r31)
lbl_fn_80655E90_00001EE4:
    lwz r0, 0x64(r1)
    psq_l f31, 0x58(r1), 0, 0
    lfd f31, 0x50(r1)
    psq_l f30, 0x48(r1), 0, 0
    lfd f30, 0x40(r1)
    psq_l f29, 0x38(r1), 0, 0
    lfd f29, 0x30(r1)
    psq_l f28, 0x28(r1), 0, 0
    lfd f28, 0x20(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80655FC0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    lis r0, 0x4330
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r0, 0x8(r1)
    stw r0, 0x10(r1)
    bge lbl_fn_80655FC0_00001FBC
    neg r0, r4
    cmpw r0, r6
    bgt lbl_fn_80655FC0_00001F60
    lfs f0, lbl_80888898
    stfs f0, 0x0(r3)
    b lbl_fn_80655FC0_00001FAC
lbl_fn_80655FC0_00001F60:
    cmpw r0, r7
    blt lbl_fn_80655FC0_00001F74
    lfs f0, lbl_808888A4
    stfs f0, 0x0(r3)
    b lbl_fn_80655FC0_00001FAC
lbl_fn_80655FC0_00001F74:
    add r4, r4, r6
    subf r0, r6, r7
    neg r4, r4
    lfd f2, lbl_808888B8
    xoris r4, r4, 0x8000
    stw r4, 0xc(r1)
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f1, 0x8(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f1, f2
    fsubs f0, f0, f2
    fdivs f0, f1, f0
    stfs f0, 0x0(r3)
lbl_fn_80655FC0_00001FAC:
    lfs f0, 0x0(r3)
    fneg f0, f0
    stfs f0, 0x0(r3)
    b lbl_fn_80655FC0_00002018
lbl_fn_80655FC0_00001FBC:
    cmpw r4, r6
    bgt lbl_fn_80655FC0_00001FD0
    lfs f0, lbl_80888898
    stfs f0, 0x0(r3)
    b lbl_fn_80655FC0_00002018
lbl_fn_80655FC0_00001FD0:
    cmpw r4, r7
    blt lbl_fn_80655FC0_00001FE4
    lfs f0, lbl_808888A4
    stfs f0, 0x0(r3)
    b lbl_fn_80655FC0_00002018
lbl_fn_80655FC0_00001FE4:
    subf r4, r6, r4
    subf r0, r6, r7
    xoris r4, r4, 0x8000
    stw r4, 0xc(r1)
    xoris r0, r0, 0x8000
    lfd f2, lbl_808888B8
    stw r0, 0x14(r1)
    lfd f1, 0x8(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f1, f2
    fsubs f0, f0, f2
    fdivs f0, f1, f0
    stfs f0, 0x0(r3)
lbl_fn_80655FC0_00002018:
    cmpwi r5, 0x0
    bge lbl_fn_80655FC0_00002094
    neg r0, r5
    cmpw r0, r6
    bgt lbl_fn_80655FC0_00002038
    lfs f0, lbl_80888898
    stfs f0, 0x4(r3)
    b lbl_fn_80655FC0_00002084
lbl_fn_80655FC0_00002038:
    cmpw r0, r7
    blt lbl_fn_80655FC0_0000204C
    lfs f0, lbl_808888A4
    stfs f0, 0x4(r3)
    b lbl_fn_80655FC0_00002084
lbl_fn_80655FC0_0000204C:
    add r4, r5, r6
    subf r0, r6, r7
    neg r4, r4
    lfd f2, lbl_808888B8
    xoris r4, r4, 0x8000
    stw r4, 0xc(r1)
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f1, 0x8(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f1, f2
    fsubs f0, f0, f2
    fdivs f0, f1, f0
    stfs f0, 0x4(r3)
lbl_fn_80655FC0_00002084:
    lfs f0, 0x4(r3)
    fneg f0, f0
    stfs f0, 0x4(r3)
    b lbl_fn_80655FC0_000020F0
lbl_fn_80655FC0_00002094:
    cmpw r5, r6
    bgt lbl_fn_80655FC0_000020A8
    lfs f0, lbl_80888898
    stfs f0, 0x4(r3)
    b lbl_fn_80655FC0_000020F0
lbl_fn_80655FC0_000020A8:
    cmpw r5, r7
    blt lbl_fn_80655FC0_000020BC
    lfs f0, lbl_808888A4
    stfs f0, 0x4(r3)
    b lbl_fn_80655FC0_000020F0
lbl_fn_80655FC0_000020BC:
    subf r4, r6, r5
    subf r0, r6, r7
    xoris r4, r4, 0x8000
    stw r4, 0xc(r1)
    xoris r0, r0, 0x8000
    lfd f2, lbl_808888B8
    stw r0, 0x14(r1)
    lfd f1, 0x8(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f1, f2
    fsubs f0, f0, f2
    fdivs f0, f1, f0
    stfs f0, 0x4(r3)
lbl_fn_80655FC0_000020F0:
    lfs f0, 0x0(r3)
    lfs f1, 0x4(r3)
    fmuls f2, f0, f0
    lfs f0, lbl_808888A4
    fmuls f1, f1, f1
    fadds f1, f2, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_80655FC0_00002130
    bl fn_8068B100
    frsp f2, f1
    lfs f1, 0x0(r31)
    lfs f0, 0x4(r31)
    fdivs f1, f1, f2
    stfs f1, 0x0(r31)
    fdivs f0, f0, f2
    stfs f0, 0x4(r31)
lbl_fn_80655FC0_00002130:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806561F0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r5, 0x4330
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    lis r31, fn_80655E90@ha
    addi r31, r31, fn_80655E90@l
    stw r30, 0x28(r1)
    addi r30, r3, 0x60
    stw r29, 0x24(r1)
    mr r29, r4
    lwz r0, lbl_80880198
    stw r5, 0x8(r1)
    cmpwi r0, 0x0
    stw r5, 0x10(r1)
    beq lbl_fn_806561F0_00002198
    lis r31, fn_80655FC0@ha
    addi r31, r31, fn_80655FC0@l
lbl_fn_806561F0_00002198:
    lbz r6, 0x28(r4)
    cmplwi r6, 0x1
    bne lbl_fn_806561F0_00002228
    lbz r5, 0x40(r4)
    addi r0, r5, 0xfd
    clrlwi r0, r0, 24
    cmplwi r0, 0x2
    bgt lbl_fn_806561F0_00002228
    lbz r0, 0x641(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806561F0_000021FC
    li r0, 0x0
    stb r0, 0x641(r3)
    lfs f2, lbl_80888898
    lwz r3, lbl_808801A8
    lwz r0, lbl_808801AC
    lfs f1, lbl_808888A0
    lfs f0, lbl_808888A4
    stw r3, 0x0(r30)
    stw r0, 0x4(r30)
    stfs f2, 0x10(r30)
    stfs f2, 0x8(r30)
    stfs f1, 0xc(r30)
    stfs f0, 0x14(r30)
    stfs f2, 0x18(r30)
lbl_fn_806561F0_000021FC:
    lbz r4, 0x30(r4)
    mr r12, r31
    lbz r5, 0x31(r29)
    mr r3, r30
    extsb r4, r4
    lwz r6, lbl_8087EB6C
    extsb r5, r5
    lwz r7, lbl_8087EB70
    mtctr r12
    bctrl
    b lbl_fn_806561F0_00003170
lbl_fn_806561F0_00002228:
    cmplwi r6, 0x2
    bne lbl_fn_806561F0_000023B0
    lbz r5, 0x40(r4)
    addi r0, r5, 0xfa
    clrlwi r0, r0, 24
    cmplwi r0, 0x2
    bgt lbl_fn_806561F0_000023B0
    lbz r0, 0x641(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806561F0_0000229C
    li r7, 0x0
    stb r7, 0x641(r3)
    lfs f0, lbl_80888898
    lwz r5, lbl_808801A8
    lwz r0, lbl_808801AC
    stw r0, 0x10(r30)
    lhz r0, 0x5f0(r3)
    stw r5, 0xc(r30)
    lwz r6, lbl_808801A8
    lwz r5, lbl_808801AC
    stw r5, 0x18(r30)
    stw r6, 0x14(r30)
    stfs f0, 0x20(r30)
    stfs f0, 0x1c(r30)
    stw r7, 0x8(r30)
    stw r7, 0x4(r30)
    stw r7, 0x0(r30)
    sth r7, 0x5f4(r3)
    sth r0, 0x5f6(r3)
lbl_fn_806561F0_0000229C:
    mr r12, r31
    addi r3, r30, 0xc
    lha r4, 0x2c(r4)
    lha r5, 0x2e(r29)
    lwz r6, lbl_8087EB74
    lwz r7, lbl_8087EB78
    mtctr r12
    bctrl
    mr r12, r31
    addi r3, r30, 0x14
    lha r4, 0x30(r29)
    lha r5, 0x32(r29)
    lwz r6, lbl_8087EB74
    lwz r7, lbl_8087EB78
    mtctr r12
    bctrl
    lwz r4, lbl_8087EB7C
    lbz r3, 0x34(r29)
    lwz r0, lbl_8087EB80
    cmpw r3, r4
    bgt lbl_fn_806561F0_000022FC
    lfs f0, lbl_80888898
    stfs f0, 0x1c(r30)
    b lbl_fn_806561F0_00002344
lbl_fn_806561F0_000022FC:
    cmpw r3, r0
    blt lbl_fn_806561F0_00002310
    lfs f0, lbl_808888A4
    stfs f0, 0x1c(r30)
    b lbl_fn_806561F0_00002344
lbl_fn_806561F0_00002310:
    subf r3, r4, r3
    subf r0, r4, r0
    xoris r3, r3, 0x8000
    stw r3, 0xc(r1)
    xoris r0, r0, 0x8000
    lfd f2, lbl_808888B8
    stw r0, 0x14(r1)
    lfd f1, 0x8(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f1, f2
    fsubs f0, f0, f2
    fdivs f0, f1, f0
    stfs f0, 0x1c(r30)
lbl_fn_806561F0_00002344:
    lwz r4, lbl_8087EB7C
    lbz r3, 0x35(r29)
    lwz r0, lbl_8087EB80
    cmpw r3, r4
    bgt lbl_fn_806561F0_00002364
    lfs f0, lbl_80888898
    stfs f0, 0x20(r30)
    b lbl_fn_806561F0_00003170
lbl_fn_806561F0_00002364:
    cmpw r3, r0
    blt lbl_fn_806561F0_00002378
    lfs f0, lbl_808888A4
    stfs f0, 0x20(r30)
    b lbl_fn_806561F0_00003170
lbl_fn_806561F0_00002378:
    subf r3, r4, r3
    subf r0, r4, r0
    xoris r3, r3, 0x8000
    stw r3, 0xc(r1)
    xoris r0, r0, 0x8000
    lfd f2, lbl_808888B8
    stw r0, 0x14(r1)
    lfd f1, 0x8(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f1, f2
    fsubs f0, f0, f2
    fdivs f0, f1, f0
    stfs f0, 0x20(r30)
    b lbl_fn_806561F0_00003170
lbl_fn_806561F0_000023B0:
    cmplwi r6, 0x11
    bne lbl_fn_806561F0_000023C4
    lbz r0, 0x40(r4)
    cmplwi r0, 0xb
    beq lbl_fn_806561F0_000023D8
lbl_fn_806561F0_000023C4:
    cmplwi r6, 0x12
    bne lbl_fn_806561F0_000025F4
    lbz r0, 0x40(r4)
    cmplwi r0, 0xf
    bne lbl_fn_806561F0_000025F4
lbl_fn_806561F0_000023D8:
    lbz r0, 0x641(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806561F0_00002430
    li r7, 0x0
    stb r7, 0x641(r3)
    lfs f0, lbl_80888898
    lwz r5, lbl_808801A8
    lwz r0, lbl_808801AC
    stw r0, 0x10(r30)
    lhz r0, 0x5f0(r3)
    stw r5, 0xc(r30)
    lwz r6, lbl_808801A8
    lwz r5, lbl_808801AC
    stw r5, 0x18(r30)
    stw r6, 0x14(r30)
    stfs f0, 0x20(r30)
    stfs f0, 0x1c(r30)
    stw r7, 0x8(r30)
    stw r7, 0x4(r30)
    stw r7, 0x0(r30)
    sth r7, 0x5f4(r3)
    sth r0, 0x5f6(r3)
lbl_fn_806561F0_00002430:
    mr r12, r31
    addi r3, r30, 0xc
    lha r4, 0x2c(r4)
    lha r5, 0x2e(r29)
    lwz r6, lbl_8087EB74
    lwz r7, lbl_8087EB78
    mtctr r12
    bctrl
    lwz r4, lbl_808801A0
    lha r3, 0x30(r29)
    lwz r0, lbl_8087EB90
    cmpw r3, r4
    bgt lbl_fn_806561F0_00002470
    lfs f0, lbl_80888898
    stfs f0, 0x14(r30)
    b lbl_fn_806561F0_000024B8
lbl_fn_806561F0_00002470:
    cmpw r3, r0
    blt lbl_fn_806561F0_00002484
    lfs f0, lbl_808888A4
    stfs f0, 0x14(r30)
    b lbl_fn_806561F0_000024B8
lbl_fn_806561F0_00002484:
    subf r3, r4, r3
    subf r0, r4, r0
    xoris r3, r3, 0x8000
    stw r3, 0xc(r1)
    xoris r0, r0, 0x8000
    lfd f2, lbl_808888B8
    stw r0, 0x14(r1)
    lfd f1, 0x8(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f1, f2
    fsubs f0, f0, f2
    fdivs f0, f1, f0
    stfs f0, 0x14(r30)
lbl_fn_806561F0_000024B8:
    lwz r4, lbl_808801A0
    lha r3, 0x32(r29)
    lwz r0, lbl_8087EB90
    cmpw r3, r4
    bgt lbl_fn_806561F0_000024D8
    lfs f0, lbl_80888898
    stfs f0, 0x18(r30)
    b lbl_fn_806561F0_00002520
lbl_fn_806561F0_000024D8:
    cmpw r3, r0
    blt lbl_fn_806561F0_000024EC
    lfs f0, lbl_808888A4
    stfs f0, 0x18(r30)
    b lbl_fn_806561F0_00002520
lbl_fn_806561F0_000024EC:
    subf r3, r4, r3
    subf r0, r4, r0
    xoris r3, r3, 0x8000
    stw r3, 0xc(r1)
    xoris r0, r0, 0x8000
    lfd f2, lbl_808888B8
    stw r0, 0x14(r1)
    lfd f1, 0x8(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f1, f2
    fsubs f0, f0, f2
    fdivs f0, f1, f0
    stfs f0, 0x18(r30)
lbl_fn_806561F0_00002520:
    lwz r4, lbl_8088019C
    lbz r3, 0x34(r29)
    lwz r0, lbl_8087EB8C
    cmpw r3, r4
    bgt lbl_fn_806561F0_00002540
    lfs f0, lbl_80888898
    stfs f0, 0x1c(r30)
    b lbl_fn_806561F0_00002588
lbl_fn_806561F0_00002540:
    cmpw r3, r0
    blt lbl_fn_806561F0_00002554
    lfs f0, lbl_808888A4
    stfs f0, 0x1c(r30)
    b lbl_fn_806561F0_00002588
lbl_fn_806561F0_00002554:
    subf r3, r4, r3
    subf r0, r4, r0
    xoris r3, r3, 0x8000
    stw r3, 0xc(r1)
    xoris r0, r0, 0x8000
    lfd f2, lbl_808888B8
    stw r0, 0x14(r1)
    lfd f1, 0x8(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f1, f2
    fsubs f0, f0, f2
    fdivs f0, f1, f0
    stfs f0, 0x1c(r30)
lbl_fn_806561F0_00002588:
    lwz r4, lbl_8088019C
    lbz r3, 0x35(r29)
    lwz r0, lbl_8087EB8C
    cmpw r3, r4
    bgt lbl_fn_806561F0_000025A8
    lfs f0, lbl_80888898
    stfs f0, 0x20(r30)
    b lbl_fn_806561F0_00003170
lbl_fn_806561F0_000025A8:
    cmpw r3, r0
    blt lbl_fn_806561F0_000025BC
    lfs f0, lbl_808888A4
    stfs f0, 0x20(r30)
    b lbl_fn_806561F0_00003170
lbl_fn_806561F0_000025BC:
    subf r3, r4, r3
    subf r0, r4, r0
    xoris r3, r3, 0x8000
    stw r3, 0xc(r1)
    xoris r0, r0, 0x8000
    lfd f2, lbl_808888B8
    stw r0, 0x14(r1)
    lfd f1, 0x8(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f1, f2
    fsubs f0, f0, f2
    fdivs f0, f1, f0
    stfs f0, 0x20(r30)
    b lbl_fn_806561F0_00003170
lbl_fn_806561F0_000025F4:
    cmplwi r6, 0x10
    bne lbl_fn_806561F0_00002744
    lbz r0, 0x40(r4)
    cmplwi r0, 0xa
    bne lbl_fn_806561F0_00002744
    lbz r0, 0x641(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806561F0_00002660
    li r7, 0x0
    stb r7, 0x641(r3)
    lfs f0, lbl_80888898
    lwz r5, lbl_808801A8
    lwz r0, lbl_808801AC
    stw r0, 0x10(r30)
    lhz r0, 0x5f0(r3)
    stw r5, 0xc(r30)
    lwz r6, lbl_808801A8
    lwz r5, lbl_808801AC
    stw r5, 0x18(r30)
    stw r6, 0x14(r30)
    stfs f0, 0x20(r30)
    stfs f0, 0x1c(r30)
    stw r7, 0x8(r30)
    stw r7, 0x4(r30)
    stw r7, 0x0(r30)
    sth r7, 0x5f4(r3)
    sth r0, 0x5f6(r3)
lbl_fn_806561F0_00002660:
    lfs f0, lbl_80888898
    stfs f0, 0x10(r30)
    stfs f0, 0xc(r30)
    stfs f0, 0x18(r30)
    stfs f0, 0x14(r30)
    lwz r5, lbl_8088019C
    lbz r3, 0x2c(r4)
    lwz r0, lbl_8087EB8C
    cmpw r3, r5
    bgt lbl_fn_806561F0_00002690
    stfs f0, 0x1c(r30)
    b lbl_fn_806561F0_000026D8
lbl_fn_806561F0_00002690:
    cmpw r3, r0
    blt lbl_fn_806561F0_000026A4
    lfs f0, lbl_808888A4
    stfs f0, 0x1c(r30)
    b lbl_fn_806561F0_000026D8
lbl_fn_806561F0_000026A4:
    subf r3, r5, r3
    subf r0, r5, r0
    xoris r3, r3, 0x8000
    stw r3, 0xc(r1)
    xoris r0, r0, 0x8000
    lfd f2, lbl_808888B8
    stw r0, 0x14(r1)
    lfd f1, 0x8(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f1, f2
    fsubs f0, f0, f2
    fdivs f0, f1, f0
    stfs f0, 0x1c(r30)
lbl_fn_806561F0_000026D8:
    lwz r5, lbl_8088019C
    lbz r3, 0x2d(r4)
    lwz r0, lbl_8087EB8C
    cmpw r3, r5
    bgt lbl_fn_806561F0_000026F8
    lfs f0, lbl_80888898
    stfs f0, 0x20(r30)
    b lbl_fn_806561F0_00003170
lbl_fn_806561F0_000026F8:
    cmpw r3, r0
    blt lbl_fn_806561F0_0000270C
    lfs f0, lbl_808888A4
    stfs f0, 0x20(r30)
    b lbl_fn_806561F0_00003170
lbl_fn_806561F0_0000270C:
    subf r3, r5, r3
    subf r0, r5, r0
    xoris r3, r3, 0x8000
    stw r3, 0xc(r1)
    xoris r0, r0, 0x8000
    lfd f2, lbl_808888B8
    stw r0, 0x14(r1)
    lfd f1, 0x8(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f1, f2
    fsubs f0, f0, f2
    fdivs f0, f1, f0
    stfs f0, 0x20(r30)
    b lbl_fn_806561F0_00003170
lbl_fn_806561F0_00002744:
    cmplwi r6, 0x13
    bne lbl_fn_806561F0_00002A24
    lbz r0, 0x40(r4)
    cmplwi r0, 0x11
    bne lbl_fn_806561F0_00002A24
    lbz r0, 0x641(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806561F0_000027B0
    li r7, 0x0
    stb r7, 0x641(r3)
    lfs f0, lbl_80888898
    lwz r5, lbl_808801A8
    lwz r0, lbl_808801AC
    stw r0, 0x10(r30)
    lhz r0, 0x5f0(r3)
    stw r5, 0xc(r30)
    lwz r6, lbl_808801A8
    lwz r5, lbl_808801AC
    stw r5, 0x18(r30)
    stw r6, 0x14(r30)
    stfs f0, 0x20(r30)
    stfs f0, 0x1c(r30)
    stw r7, 0x8(r30)
    stw r7, 0x4(r30)
    stw r7, 0x0(r30)
    sth r7, 0x5f4(r3)
    sth r0, 0x5f6(r3)
lbl_fn_806561F0_000027B0:
    lwz r5, lbl_808801A0
    lha r3, 0x2c(r4)
    lwz r0, lbl_8087EB90
    cmpw r3, r5
    bgt lbl_fn_806561F0_000027D0
    lfs f0, lbl_80888898
    stfs f0, 0xc(r30)
    b lbl_fn_806561F0_00002818
lbl_fn_806561F0_000027D0:
    cmpw r3, r0
    blt lbl_fn_806561F0_000027E4
    lfs f0, lbl_808888A4
    stfs f0, 0xc(r30)
    b lbl_fn_806561F0_00002818
lbl_fn_806561F0_000027E4:
    subf r3, r5, r3
    subf r0, r5, r0
    xoris r3, r3, 0x8000
    stw r3, 0xc(r1)
    xoris r0, r0, 0x8000
    lfd f2, lbl_808888B8
    stw r0, 0x14(r1)
    lfd f1, 0x8(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f1, f2
    fsubs f0, f0, f2
    fdivs f0, f1, f0
    stfs f0, 0xc(r30)
lbl_fn_806561F0_00002818:
    lwz r5, lbl_808801A0
    lha r3, 0x2e(r4)
    lwz r0, lbl_8087EB90
    cmpw r3, r5
    bgt lbl_fn_806561F0_00002838
    lfs f0, lbl_80888898
    stfs f0, 0x10(r30)
    b lbl_fn_806561F0_00002880
lbl_fn_806561F0_00002838:
    cmpw r3, r0
    blt lbl_fn_806561F0_0000284C
    lfs f0, lbl_808888A4
    stfs f0, 0x10(r30)
    b lbl_fn_806561F0_00002880
lbl_fn_806561F0_0000284C:
    subf r3, r5, r3
    subf r0, r5, r0
    xoris r3, r3, 0x8000
    stw r3, 0xc(r1)
    xoris r0, r0, 0x8000
    lfd f2, lbl_808888B8
    stw r0, 0x14(r1)
    lfd f1, 0x8(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f1, f2
    fsubs f0, f0, f2
    fdivs f0, f1, f0
    stfs f0, 0x10(r30)
lbl_fn_806561F0_00002880:
    lwz r5, lbl_808801A0
    lha r3, 0x30(r4)
    lwz r0, lbl_8087EB90
    cmpw r3, r5
    bgt lbl_fn_806561F0_000028A0
    lfs f0, lbl_80888898
    stfs f0, 0x14(r30)
    b lbl_fn_806561F0_000028E8
lbl_fn_806561F0_000028A0:
    cmpw r3, r0
    blt lbl_fn_806561F0_000028B4
    lfs f0, lbl_808888A4
    stfs f0, 0x14(r30)
    b lbl_fn_806561F0_000028E8
lbl_fn_806561F0_000028B4:
    subf r3, r5, r3
    subf r0, r5, r0
    xoris r3, r3, 0x8000
    stw r3, 0xc(r1)
    xoris r0, r0, 0x8000
    lfd f2, lbl_808888B8
    stw r0, 0x14(r1)
    lfd f1, 0x8(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f1, f2
    fsubs f0, f0, f2
    fdivs f0, f1, f0
    stfs f0, 0x14(r30)
lbl_fn_806561F0_000028E8:
    lwz r5, lbl_808801A0
    lha r3, 0x32(r4)
    lwz r0, lbl_8087EB90
    cmpw r3, r5
    bgt lbl_fn_806561F0_00002908
    lfs f0, lbl_80888898
    stfs f0, 0x18(r30)
    b lbl_fn_806561F0_00002950
lbl_fn_806561F0_00002908:
    cmpw r3, r0
    blt lbl_fn_806561F0_0000291C
    lfs f0, lbl_808888A4
    stfs f0, 0x18(r30)
    b lbl_fn_806561F0_00002950
lbl_fn_806561F0_0000291C:
    subf r3, r5, r3
    subf r0, r5, r0
    xoris r3, r3, 0x8000
    stw r3, 0xc(r1)
    xoris r0, r0, 0x8000
    lfd f2, lbl_808888B8
    stw r0, 0x14(r1)
    lfd f1, 0x8(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f1, f2
    fsubs f0, f0, f2
    fdivs f0, f1, f0
    stfs f0, 0x18(r30)
lbl_fn_806561F0_00002950:
    lwz r5, lbl_8088019C
    lbz r3, 0x34(r4)
    lwz r0, lbl_8087EB8C
    cmpw r3, r5
    bgt lbl_fn_806561F0_00002970
    lfs f0, lbl_80888898
    stfs f0, 0x1c(r30)
    b lbl_fn_806561F0_000029B8
lbl_fn_806561F0_00002970:
    cmpw r3, r0
    blt lbl_fn_806561F0_00002984
    lfs f0, lbl_808888A4
    stfs f0, 0x1c(r30)
    b lbl_fn_806561F0_000029B8
lbl_fn_806561F0_00002984:
    subf r3, r5, r3
    subf r0, r5, r0
    xoris r3, r3, 0x8000
    stw r3, 0xc(r1)
    xoris r0, r0, 0x8000
    lfd f2, lbl_808888B8
    stw r0, 0x14(r1)
    lfd f1, 0x8(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f1, f2
    fsubs f0, f0, f2
    fdivs f0, f1, f0
    stfs f0, 0x1c(r30)
lbl_fn_806561F0_000029B8:
    lwz r5, lbl_8088019C
    lbz r3, 0x35(r4)
    lwz r0, lbl_8087EB8C
    cmpw r3, r5
    bgt lbl_fn_806561F0_000029D8
    lfs f0, lbl_80888898
    stfs f0, 0x20(r30)
    b lbl_fn_806561F0_00003170
lbl_fn_806561F0_000029D8:
    cmpw r3, r0
    blt lbl_fn_806561F0_000029EC
    lfs f0, lbl_808888A4
    stfs f0, 0x20(r30)
    b lbl_fn_806561F0_00003170
lbl_fn_806561F0_000029EC:
    subf r3, r5, r3
    subf r0, r5, r0
    xoris r3, r3, 0x8000
    stw r3, 0xc(r1)
    xoris r0, r0, 0x8000
    lfd f2, lbl_808888B8
    stw r0, 0x14(r1)
    lfd f1, 0x8(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f1, f2
    fsubs f0, f0, f2
    fdivs f0, f1, f0
    stfs f0, 0x20(r30)
    b lbl_fn_806561F0_00003170
lbl_fn_806561F0_00002A24:
    cmplwi r6, 0x3
    bne lbl_fn_806561F0_00002F2C
    lbz r0, 0x40(r4)
    cmplwi r0, 0xc
    bne lbl_fn_806561F0_00002F2C
    mr r3, r29
    addi r4, r30, 0x8
    li r5, 0x4
    bl fn_8065CF00
    stw r3, 0x48(r30)
    lbz r3, 0x33(r29)
    bl fn_8065CEF0
    cmpwi r3, 0x0
    bne lbl_fn_806561F0_00002A68
    li r0, -0x1
    stw r0, 0x48(r30)
    b lbl_fn_806561F0_00002F14
lbl_fn_806561F0_00002A68:
    lbz r0, lbl_808801D9
    extsb. r0, r0
    bge lbl_fn_806561F0_00002A80
    li r0, -0x6
    stw r0, 0x48(r30)
    b lbl_fn_806561F0_00002F14
lbl_fn_806561F0_00002A80:
    lbz r0, lbl_808801D3
    extsb. r0, r0
    bne lbl_fn_806561F0_00002A98
    li r0, -0x7
    stw r0, 0x48(r30)
    b lbl_fn_806561F0_00002F14
lbl_fn_806561F0_00002A98:
    cmpwi r0, 0x3
    bgt lbl_fn_806561F0_00002AE0
    lwz r0, 0x48(r30)
    cmpwi r0, 0x1
    bne lbl_fn_806561F0_00002ABC
    li r3, -0x1
    li r0, 0x0
    stb r3, lbl_808801D3
    stb r0, lbl_808801D5
lbl_fn_806561F0_00002ABC:
    lbz r0, lbl_808801D3
    extsb. r0, r0
    bge lbl_fn_806561F0_00002AD4
    li r0, -0x4
    stw r0, 0x48(r30)
    b lbl_fn_806561F0_00002F14
lbl_fn_806561F0_00002AD4:
    li r0, -0x8
    stw r0, 0x48(r30)
    b lbl_fn_806561F0_00002F14
lbl_fn_806561F0_00002AE0:
    lwz r0, 0x48(r30)
    cmpwi r0, -0x2
    bne lbl_fn_806561F0_00002AF8
    li r0, -0x2
    stw r0, 0x48(r30)
    b lbl_fn_806561F0_00002F14
lbl_fn_806561F0_00002AF8:
    cmpwi r0, 0x0
    blt lbl_fn_806561F0_00002F14
    lis r4, lbl_80829D68@ha
    lfs f2, lbl_8087EB94
    lfd f0, lbl_80829D68@l(r4)
    addi r3, r4, lbl_80829D68@l
    lfd f8, 0x8(r30)
    fmul f1, f2, f0
    lfs f4, lbl_808888A4
    lfd f7, 0x10(r30)
    fadds f0, f4, f2
    lfd f6, 0x18(r30)
    fadd f3, f8, f7
    fadd f2, f1, f8
    lfd f5, 0x20(r30)
    fadd f3, f6, f3
    lfd f1, lbl_808888D0
    fdiv f2, f2, f0
    stfd f2, lbl_80829D68@l(r4)
    fadd f0, f5, f3
    stfd f2, 0x28(r30)
    lfs f3, lbl_8087EB94
    fcmpo cr0, f0, f1
    lfd f2, 0x8(r3)
    fadds f1, f4, f3
    fmul f2, f3, f2
    fadd f2, f2, f7
    fdiv f1, f2, f1
    stfd f1, 0x8(r3)
    stfd f1, 0x30(r30)
    lfs f3, lbl_8087EB94
    lfd f2, 0x10(r3)
    fadds f1, f4, f3
    fmul f2, f3, f2
    fadd f2, f2, f6
    fdiv f1, f2, f1
    stfd f1, 0x10(r3)
    stfd f1, 0x38(r30)
    lfs f3, lbl_8087EB94
    lfd f2, 0x18(r3)
    fadds f1, f4, f3
    fmul f2, f3, f2
    fadd f2, f2, f5
    fdiv f1, f2, f1
    stfd f1, 0x18(r3)
    stfd f1, 0x40(r30)
    ble lbl_fn_806561F0_00002BC0
    li r0, -0x5
    stw r0, 0x48(r30)
    b lbl_fn_806561F0_00002F14
lbl_fn_806561F0_00002BC0:
    lbz r5, lbl_808801D5
    cmpwi r5, 0x0
    beq lbl_fn_806561F0_00002F14
    lfd f1, lbl_808888E0
    la r4, lbl_8087EB9C
    lha r3, lbl_808801D6
    fdiv f2, f0, f1
    lfd f3, lbl_80888908
    addi r3, r3, 0x1
    lfs f1, lbl_808888D8
    extsh r0, r3
    sth r3, lbl_808801D6
    fctiwz f2, f2
    cmpwi r0, 0x7d0
    stfd f2, 0x18(r1)
    lwz r0, 0x1c(r1)
    clrlwi r0, r0, 24
    lbzx r0, r4, r0
    stw r0, 0xc(r1)
    lfd f2, 0x8(r1)
    fsubs f2, f2, f3
    fmuls f1, f1, f2
    stfs f1, lbl_808801B0
    ble lbl_fn_806561F0_00002C40
    cmplwi r5, 0x1
    li r3, -0x1
    bne lbl_fn_806561F0_00002C30
    li r3, -0x3
lbl_fn_806561F0_00002C30:
    li r0, 0x0
    stb r3, lbl_808801D8
    stb r0, lbl_808801D5
    b lbl_fn_806561F0_00002C54
lbl_fn_806561F0_00002C40:
    lfd f2, lbl_808888E8
    fcmpo cr0, f0, f2
    bge lbl_fn_806561F0_00002C54
    li r0, 0x1
    stb r0, lbl_808801D5
lbl_fn_806561F0_00002C54:
    lbz r0, lbl_808801D5
    cmplwi r0, 0x1
    bne lbl_fn_806561F0_00002C94
    lfd f1, lbl_808888E8
    li r0, 0x1
    stb r0, lbl_808801D8
    fcmpo cr0, f0, f1
    cror eq, gt, eq
    bne lbl_fn_806561F0_00002F14
    li r3, 0x2
    li r0, 0x0
    stb r3, lbl_808801D5
    sth r0, lbl_808801D0
    stfd f0, lbl_808801B8
    stfd f0, lbl_808801C0
    b lbl_fn_806561F0_00002F14
lbl_fn_806561F0_00002C94:
    cmplwi r0, 0x2
    bne lbl_fn_806561F0_00002D50
    lfd f3, lbl_808801C0
    li r0, 0x1
    lfd f2, lbl_808888F0
    fsub f3, f0, f3
    stb r0, lbl_808801D8
    stfd f3, lbl_808801B8
    fcmpo cr0, f3, f2
    bge lbl_fn_806561F0_00002CC8
    lfd f2, lbl_808888F8
    fmul f3, f3, f2
    stfd f3, lbl_808801B8
lbl_fn_806561F0_00002CC8:
    fcmpo cr0, f3, f1
    bge lbl_fn_806561F0_00002CE0
    lhz r3, lbl_808801D0
    addi r0, r3, 0x1
    sth r0, lbl_808801D0
    b lbl_fn_806561F0_00002D00
lbl_fn_806561F0_00002CE0:
    lfd f3, lbl_808801C0
    li r0, 0x0
    lfd f1, lbl_80888900
    fsub f2, f0, f3
    sth r0, lbl_808801D0
    fmul f1, f1, f2
    fadd f1, f3, f1
    stfd f1, lbl_808801C0
lbl_fn_806561F0_00002D00:
    clrlwi r0, r0, 16
    cmplwi r0, 0x64
    ble lbl_fn_806561F0_00002F14
    li r3, 0x3
    li r0, 0x1
    stb r3, lbl_808801D5
    lis r4, lbl_80829D88@ha
    addi r3, r4, lbl_80829D88@l
    sth r0, lbl_808801D0
    lfd f1, 0x8(r30)
    stfd f1, lbl_80829D88@l(r4)
    lfd f1, 0x10(r30)
    stfd f1, 0x8(r3)
    lfd f1, 0x18(r30)
    stfd f1, 0x10(r3)
    lfd f1, 0x20(r30)
    stfd f1, 0x18(r3)
    stfd f0, lbl_808801B8
    stfd f0, lbl_808801C0
    b lbl_fn_806561F0_00002F14
lbl_fn_806561F0_00002D50:
    cmplwi r0, 0x3
    bne lbl_fn_806561F0_00002F14
    lis r4, lbl_80829D88@ha
    li r0, -0x4
    addi r3, r4, lbl_80829D88@l
    lfd f3, lbl_80829D88@l(r4)
    lfd f2, 0x8(r3)
    lfd f4, 0x10(r3)
    fadd f5, f3, f2
    lfd f3, 0x18(r3)
    lfd f2, lbl_808888F0
    stb r0, lbl_808801D8
    fadd f4, f4, f5
    fadd f3, f3, f4
    fsub f3, f0, f3
    fcmpo cr0, f3, f2
    bge lbl_fn_806561F0_00002D9C
    lfd f0, lbl_808888F8
    fmul f3, f3, f0
lbl_fn_806561F0_00002D9C:
    fcmpo cr0, f3, f1
    cror eq, lt, eq
    bne lbl_fn_806561F0_00002F14
    lhz r5, lbl_808801D0
    lis r4, lbl_80829D88@ha
    addi r3, r4, lbl_80829D88@l
    lfd f12, lbl_808888B8
    addi r0, r5, 0x1
    sth r0, lbl_808801D0
    clrlwi r5, r0, 16
    lfd f3, lbl_80829D88@l(r4)
    subi r0, r5, 0x1
    stw r5, 0xc(r1)
    xoris r0, r0, 0x8000
    lfd f11, 0x8(r30)
    stw r0, 0x14(r1)
    lfd f0, 0x8(r1)
    lfd f1, 0x10(r1)
    lfd f10, lbl_80888908
    fsub f4, f1, f12
    stw r0, 0x14(r1)
    fsub f2, f0, f10
    lfd f0, 0x8(r3)
    lfd f1, 0x10(r1)
    fmul f3, f4, f3
    stw r5, 0xc(r1)
    fsub f1, f1, f12
    lfd f5, 0x10(r3)
    lfd f4, 0x8(r1)
    fadd f3, f3, f11
    fmul f9, f1, f0
    stw r0, 0x14(r1)
    lfd f1, 0x18(r3)
    fdiv f6, f3, f2
    lfd f2, 0x10(r1)
    stw r5, 0xc(r1)
    lfd f3, 0x8(r1)
    stw r0, 0x14(r1)
    lfd f0, lbl_808801C0
    stfd f6, lbl_80829D88@l(r4)
    fsub f6, f2, f12
    fsub f7, f4, f10
    lfd f2, 0x10(r1)
    fsub f4, f3, f10
    lfd f8, 0x10(r30)
    fsub f3, f2, f12
    fadd f2, f9, f8
    fmul f5, f6, f5
    stw r5, 0xc(r1)
    fdiv f6, f2, f7
    lfd f2, 0x8(r1)
    stfd f6, 0x8(r3)
    fmul f3, f3, f1
    lfd f6, 0x18(r30)
    fadd f1, f11, f8
    fadd f5, f5, f6
    fsub f2, f2, f10
    fadd f1, f6, f1
    fdiv f4, f5, f4
    stfd f4, 0x10(r3)
    lfd f4, 0x20(r30)
    fadd f3, f3, f4
    fadd f4, f4, f1
    fdiv f1, f3, f2
    stfd f1, 0x18(r3)
    fcmpo cr0, f0, f4
    ble lbl_fn_806561F0_00002EAC
    stfd f4, lbl_808801C0
lbl_fn_806561F0_00002EAC:
    lfd f0, lbl_808801B8
    fcmpo cr0, f0, f4
    bge lbl_fn_806561F0_00002EBC
    stfd f4, lbl_808801B8
lbl_fn_806561F0_00002EBC:
    stw r5, 0x14(r1)
    lfd f2, lbl_80888908
    lfd f1, 0x10(r1)
    lfs f0, lbl_8087EB94
    fsubs f1, f1, f2
    fcmpu cr0, f1, f0
    bne lbl_fn_806561F0_00002F14
    lis r3, lbl_80829D88@ha
    li r31, 0x0
    addi r5, r3, lbl_80829D88@l
    lfd f2, lbl_80829D88@l(r3)
    lfd f0, 0x8(r5)
    mr r4, r29
    lfd f1, 0x10(r5)
    la r3, lbl_808801C8
    fadd f2, f2, f0
    lfd f0, 0x18(r5)
    stb r31, lbl_808801D8
    fadd f1, f1, f2
    fadd f1, f0, f1
    bl fn_8065CF20
    stb r31, lbl_808801D5
lbl_fn_806561F0_00002F14:
    lfd f0, lbl_808801C8
    stfd f0, 0x0(r30)
    lbz r0, lbl_808801D8
    extsb r0, r0
    stw r0, 0x4c(r30)
    b lbl_fn_806561F0_00003170
lbl_fn_806561F0_00002F2C:
    addi r0, r6, 0xfb
    clrlwi r0, r0, 24
    cmplwi r0, 0x2
    ble lbl_fn_806561F0_00002F44
    cmplwi r6, 0xfa
    bne lbl_fn_806561F0_00003170
lbl_fn_806561F0_00002F44:
    lbz r0, 0x40(r4)
    cmplwi r0, 0x10
    bne lbl_fn_806561F0_00003170
    lbz r0, 0x641(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806561F0_0000300C
    li r0, 0x0
    stb r0, 0x641(r3)
    lbz r0, 0x28(r4)
    cmplwi r0, 0x6
    bne lbl_fn_806561F0_00002FAC
    lbz r0, 0x36(r4)
    rlwinm. r0, r0, 0, 25, 25
    beq lbl_fn_806561F0_00002FAC
    lwz r5, lbl_808801A8
    lwz r0, lbl_808801AC
    lfs f2, lbl_80888898
    lfs f1, lbl_808888A0
    lfs f0, lbl_808888A4
    stw r5, 0x0(r30)
    stw r0, 0x4(r30)
    stfs f2, 0x10(r30)
    stfs f2, 0x8(r30)
    stfs f1, 0xc(r30)
    stfs f0, 0x14(r30)
    stfs f2, 0x18(r30)
lbl_fn_806561F0_00002FAC:
    lbz r0, 0x28(r4)
    cmplwi r0, 0x7
    bne lbl_fn_806561F0_0000300C
    lbz r0, 0x36(r4)
    rlwinm. r0, r0, 0, 25, 25
    beq lbl_fn_806561F0_0000300C
    lwz r6, lbl_808801A8
    li r5, 0x0
    lwz r0, lbl_808801AC
    stw r0, 0x10(r30)
    lfs f0, lbl_80888898
    stw r6, 0xc(r30)
    lhz r0, 0x5f0(r3)
    lwz r7, lbl_808801A8
    lwz r6, lbl_808801AC
    stw r6, 0x18(r30)
    stw r7, 0x14(r30)
    stfs f0, 0x20(r30)
    stfs f0, 0x1c(r30)
    stw r5, 0x8(r30)
    stw r5, 0x4(r30)
    stw r5, 0x0(r30)
    sth r5, 0x5f4(r3)
    sth r0, 0x5f6(r3)
lbl_fn_806561F0_0000300C:
    lbz r3, 0x36(r4)
    clrlwi. r0, r3, 31
    beq lbl_fn_806561F0_00003170
    rlwinm. r0, r3, 0, 25, 25
    beq lbl_fn_806561F0_00003170
    lbz r0, 0x28(r4)
    cmplwi r0, 0x6
    bne lbl_fn_806561F0_00003058
    lbz r4, 0x30(r4)
    mr r12, r31
    lbz r5, 0x31(r29)
    mr r3, r30
    extsb r4, r4
    lwz r6, lbl_8087EB6C
    extsb r5, r5
    lwz r7, lbl_8087EB70
    mtctr r12
    bctrl
    b lbl_fn_806561F0_00003170
lbl_fn_806561F0_00003058:
    cmplwi r0, 0x7
    bne lbl_fn_806561F0_00003170
    mr r12, r31
    addi r3, r30, 0xc
    lha r4, 0x2c(r4)
    lha r5, 0x2e(r29)
    lwz r6, lbl_8087EB74
    lwz r7, lbl_8087EB78
    mtctr r12
    bctrl
    mr r12, r31
    addi r3, r30, 0x14
    lha r4, 0x30(r29)
    lha r5, 0x32(r29)
    lwz r6, lbl_8087EB74
    lwz r7, lbl_8087EB78
    mtctr r12
    bctrl
    lwz r4, lbl_8087EB7C
    lbz r3, 0x34(r29)
    lwz r0, lbl_8087EB80
    cmpw r3, r4
    bgt lbl_fn_806561F0_000030C0
    lfs f0, lbl_80888898
    stfs f0, 0x1c(r30)
    b lbl_fn_806561F0_00003108
lbl_fn_806561F0_000030C0:
    cmpw r3, r0
    blt lbl_fn_806561F0_000030D4
    lfs f0, lbl_808888A4
    stfs f0, 0x1c(r30)
    b lbl_fn_806561F0_00003108
lbl_fn_806561F0_000030D4:
    subf r3, r4, r3
    subf r0, r4, r0
    xoris r3, r3, 0x8000
    stw r3, 0xc(r1)
    xoris r0, r0, 0x8000
    lfd f2, lbl_808888B8
    stw r0, 0x14(r1)
    lfd f1, 0x8(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f1, f2
    fsubs f0, f0, f2
    fdivs f0, f1, f0
    stfs f0, 0x1c(r30)
lbl_fn_806561F0_00003108:
    lwz r4, lbl_8087EB7C
    lbz r3, 0x35(r29)
    lwz r0, lbl_8087EB80
    cmpw r3, r4
    bgt lbl_fn_806561F0_00003128
    lfs f0, lbl_80888898
    stfs f0, 0x20(r30)
    b lbl_fn_806561F0_00003170
lbl_fn_806561F0_00003128:
    cmpw r3, r0
    blt lbl_fn_806561F0_0000313C
    lfs f0, lbl_808888A4
    stfs f0, 0x20(r30)
    b lbl_fn_806561F0_00003170
lbl_fn_806561F0_0000313C:
    subf r3, r4, r3
    subf r0, r4, r0
    xoris r3, r3, 0x8000
    stw r3, 0xc(r1)
    xoris r0, r0, 0x8000
    lfd f2, lbl_808888B8
    stw r0, 0x14(r1)
    lfd f1, 0x8(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f1, f2
    fsubs f0, f0, f2
    fdivs f0, f1, f0
    stfs f0, 0x20(r30)
lbl_fn_806561F0_00003170:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80657230(void)
{
    nofralloc
    mulli r0, r3, 0x688
    lis r3, lbl_80828318@ha
    addi r3, r3, lbl_80828318@l
    add r6, r3, r0
    lwz r3, 0x17c(r6)
    cmpwi r3, 0x0
    beqlr
    subi r5, r3, 0xf0
    stw r5, 0x17c(r6)
    lwz r0, 0x4(r4)
    lwz r3, 0x0(r4)
    stw r3, 0xb0(r5)
    stw r0, 0xb4(r5)
    lwz r0, 0xc(r4)
    lwz r3, 0x8(r4)
    stw r3, 0xb8(r5)
    stw r0, 0xbc(r5)
    lwz r0, 0x14(r4)
    lwz r3, 0x10(r4)
    stw r3, 0xc0(r5)
    stw r0, 0xc4(r5)
    lwz r0, 0x1c(r4)
    lwz r3, 0x18(r4)
    stw r3, 0xc8(r5)
    stw r0, 0xcc(r5)
    lwz r0, 0x24(r4)
    lwz r3, 0x20(r4)
    stw r3, 0xd0(r5)
    stw r0, 0xd4(r5)
    lwz r0, 0x2c(r4)
    lwz r3, 0x28(r4)
    stw r3, 0xd8(r5)
    stw r0, 0xdc(r5)
    lwz r0, 0x34(r4)
    lwz r3, 0x30(r4)
    stw r3, 0xe0(r5)
    stw r0, 0xe4(r5)
    lwz r0, 0x38(r4)
    stw r0, 0xe8(r5)
    blr
}

asm void fn_806572D0(void)
{
    nofralloc
    li r6, 0x0
    li r7, 0x0
    b fn_806572E0
}

asm void fn_806572E0(void)
{
    nofralloc
    stwu r1, -0x240(r1)
    mflr r0
    stw r0, 0x244(r1)
    addi r11, r1, 0x238
    stfd f31, 0x238(r1)
    bl _savegpr_17
    lbz r0, lbl_808801A4
    lis r8, lbl_80828318@ha
    mulli r9, r3, 0x688
    mr r25, r3
    cmpwi r0, 0x0
    addi r8, r8, lbl_80828318@l
    mr r26, r4
    mr r19, r5
    mr r27, r6
    mr r28, r7
    add r21, r8, r9
    li r31, 0x0
    li r29, 0x0
    bne lbl_fn_806572E0_00003298
    li r31, -0x5
    b lbl_fn_806572E0_000039AC
lbl_fn_806572E0_00003298:
    bl fn_8065F540
    cmpwi r3, 0x3
    beq lbl_fn_806572E0_000032AC
    li r31, -0x3
    b lbl_fn_806572E0_000039AC
lbl_fn_806572E0_000032AC:
    bl OSDisableInterrupts
    lbz r0, 0x5eb(r21)
    mr r18, r3
    cmpwi r0, 0x0
    beq lbl_fn_806572E0_000032CC
    bl OSRestoreInterrupts
    li r31, -0x4
    b lbl_fn_806572E0_000039AC
lbl_fn_806572E0_000032CC:
    li r17, 0x1
    stb r17, 0x5eb(r21)
    mr r3, r25
    li r4, 0x0
    bl fn_80660CF0
    cmpwi r3, -0x1
    bne lbl_fn_806572E0_00003398
    mr r3, r25
    bl fn_80653EE0
    lwz r0, 0x5f8(r21)
    cmpwi cr1, r0, 0x0
    beq cr1, lbl_fn_806572E0_00003350
    lbz r0, 0x646(r21)
    cmpwi r0, 0x0
    beq lbl_fn_806572E0_00003350
    lbz r0, 0x647(r21)
    cmpwi r0, 0x0
    bne lbl_fn_806572E0_00003350
    beq cr1, lbl_fn_806572E0_0000333C
    bne lbl_fn_806572E0_0000333C
    stb r17, 0x647(r21)
    mr r3, r25
    li r4, 0x1
    lwz r12, 0x5f8(r21)
    mtctr r12
    bctrl
    li r0, 0x0
    stb r0, 0x646(r21)
lbl_fn_806572E0_0000333C:
    mr r3, r25
    bl fn_80663610
    stb r3, 0x643(r21)
    li r0, 0x0
    stb r0, 0x644(r21)
lbl_fn_806572E0_00003350:
    lwz r0, 0x680(r21)
    cmpwi r0, 0x0
    beq lbl_fn_806572E0_00003380
    lbz r0, 0x67b(r21)
    cmpwi r0, 0x0
    beq lbl_fn_806572E0_00003380
    lbz r0, 0x67c(r21)
    cmpwi r0, 0x0
    bne lbl_fn_806572E0_00003380
    mr r3, r25
    li r4, 0x0
    bl fn_80658300
lbl_fn_806572E0_00003380:
    li r0, 0x0
    stb r0, 0x5eb(r21)
    mr r3, r18
    bl OSRestoreInterrupts
    li r31, -0x2
    b lbl_fn_806572E0_000039AC
lbl_fn_806572E0_00003398:
    mr r3, r18
    bl OSRestoreInterrupts
    lbz r0, 0x640(r21)
    cmpwi r0, 0x0
    beq lbl_fn_806572E0_000033BC
    li r0, -0x4
    stb r0, 0x5d(r21)
    mr r3, r25
    bl fn_80653EE0
lbl_fn_806572E0_000033BC:
    li r0, 0x1e
    addi r5, r1, 0xf4
    subi r4, r26, 0x4
    mtctr r0
    nop
lbl_fn_806572E0_000033D0:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_fn_806572E0_000033D0
    lbz r0, 0x17b(r21)
    cmpwi r0, 0x0
    beq lbl_fn_806572E0_000039A4
    cmpwi r26, 0x0
    beq lbl_fn_806572E0_000039A4
    cmpwi r19, 0x0
    beq lbl_fn_806572E0_000039A4
    bl OSDisableInterrupts
    lbz r18, 0x17b(r21)
    mr r20, r3
    cmplw r18, r19
    ble lbl_fn_806572E0_00003418
    mr r18, r19
lbl_fn_806572E0_00003418:
    li r6, 0x0
    stb r6, 0x17b(r21)
    li r4, 0x1
    li r0, -0x1
    lwz r7, 0x660(r21)
    li r3, 0x0
    lwz r5, 0x664(r21)
    stw r5, 0x660(r21)
    lwz r5, 0x668(r21)
    stw r5, 0x664(r21)
    lwz r5, 0x66c(r21)
    stw r5, 0x668(r21)
    lwz r5, 0x66c(r21)
    addc r5, r5, r6
    adde r4, r6, r4
    subfc r4, r7, r5
    and r4, r4, r0
    bl fn_8069636C
    lis r3, 0x8000
    lis r0, 0x4330
    lwz r3, 0xf8(r3)
    stw r0, 0x1e8(r1)
    srwi r0, r3, 2
    lfd f3, lbl_80888908
    stw r0, 0x1ec(r1)
    lfd f0, lbl_80888910
    lfd f2, 0x1e8(r1)
    fsub f2, f2, f3
    fdiv f2, f1, f2
    fcmpo cr0, f2, f0
    ble lbl_fn_806572E0_00003498
    fmr f2, f0
lbl_fn_806572E0_00003498:
    lbz r3, 0x674(r21)
    lis r4, 0x4330
    lbz r5, 0x675(r21)
    mulli r0, r18, 0xf0
    add r3, r18, r3
    stb r5, 0x674(r21)
    lfd f1, lbl_80888908
    mr r29, r18
    add r3, r5, r3
    stw r3, 0x1f4(r1)
    add r3, r26, r0
    stw r4, 0x1f0(r1)
    lfd f0, 0x1f0(r1)
    stb r18, 0x675(r21)
    fsub f0, f0, f1
    lbz r0, 0x17a(r21)
    fdiv f31, f2, f0
    subf. r30, r18, r0
    bge lbl_fn_806572E0_000034F0
    lwz r0, 0x5a4(r21)
    add r4, r30, r0
    addi r30, r4, 0x10
lbl_fn_806572E0_000034F0:
    li r5, 0x8
    nop
lbl_fn_806572E0_000034F8:
    cmpwi r30, 0x10
    blt lbl_fn_806572E0_00003514
    subi r0, r30, 0x10
    lwz r4, 0x5a0(r21)
    mulli r0, r0, 0x42
    add r4, r4, r0
    b lbl_fn_806572E0_00003520
lbl_fn_806572E0_00003514:
    mulli r0, r30, 0x42
    add r4, r21, r0
    addi r4, r4, 0x180
lbl_fn_806572E0_00003520:
    subi r7, r3, 0xf4
    subi r6, r4, 0x4
    mtctr r5
    subi r3, r3, 0xf0
lbl_fn_806572E0_00003530:
    lwz r4, 0x4(r6)
    lwzu r0, 0x8(r6)
    stw r4, 0x4(r7)
    stwu r0, 0x8(r7)
    bdnz lbl_fn_806572E0_00003530
    lhz r0, 0x4(r6)
    addi r30, r30, 0x1
    sth r0, 0x4(r7)
    lwz r4, 0x5a4(r21)
    addi r0, r4, 0x10
    cmplw r30, r0
    blt lbl_fn_806572E0_00003564
    li r30, 0x0
lbl_fn_806572E0_00003564:
    subic. r18, r18, 0x1
    bgt lbl_fn_806572E0_000034F8
    mr r3, r20
    bl OSRestoreInterrupts
    mulli r3, r29, 0xf0
    lbz r0, 0x64b(r21)
    mr r19, r29
    cmplwi r0, 0x1
    add r20, r26, r3
    mr r18, r20
    bne lbl_fn_806572E0_00003738
    li r22, 0x1
    lis r23, 0x1
    li r24, 0x0
    li r17, 0x1e
lbl_fn_806572E0_000035A0:
    lbz r3, -0xc8(r18)
    subi r18, r18, 0xf0
    lbz r0, 0x5c(r21)
    cmplw r0, r3
    beq lbl_fn_806572E0_000035BC
    stb r3, 0x5c(r21)
    stb r22, 0x641(r21)
lbl_fn_806572E0_000035BC:
    lbz r0, 0x29(r18)
    subi r8, r23, 0x1
    stb r0, 0x5d(r21)
    mr r7, r8
    extsb. r0, r0
    mr r6, r8
    lbz r3, 0x40(r18)
    stb r3, 0x5f(r21)
    lbz r4, 0x5c(r21)
    beq lbl_fn_806572E0_000035F8
    cmpwi r0, -0x7
    beq lbl_fn_806572E0_00003684
    cmpwi r0, -0x2
    beq lbl_fn_806572E0_00003684
    b lbl_fn_806572E0_0000368C
lbl_fn_806572E0_000035F8:
    cmplwi r4, 0x1
    bne lbl_fn_806572E0_0000360C
    lhz r7, 0x0(r18)
    li r8, 0x0
    b lbl_fn_806572E0_00003684
lbl_fn_806572E0_0000360C:
    cmplwi r4, 0x2
    beq lbl_fn_806572E0_00003620
    subi r0, r4, 0x10
    cmplwi r0, 0x3
    bgt lbl_fn_806572E0_0000362C
lbl_fn_806572E0_00003620:
    lhz r8, 0x2a(r18)
    li r7, 0x0
    b lbl_fn_806572E0_00003684
lbl_fn_806572E0_0000362C:
    cmplwi r4, 0x6
    bne lbl_fn_806572E0_00003654
    lbz r3, 0x36(r18)
    rlwinm. r0, r3, 0, 25, 25
    beq lbl_fn_806572E0_00003654
    clrlwi. r0, r3, 31
    beq lbl_fn_806572E0_00003654
    lhz r7, 0x0(r18)
    li r8, 0x0
    b lbl_fn_806572E0_00003684
lbl_fn_806572E0_00003654:
    cmplwi r4, 0x7
    bne lbl_fn_806572E0_0000367C
    lbz r3, 0x36(r18)
    rlwinm. r0, r3, 0, 25, 25
    beq lbl_fn_806572E0_0000367C
    clrlwi. r0, r3, 31
    beq lbl_fn_806572E0_0000367C
    lhz r8, 0x2a(r18)
    li r7, 0x0
    b lbl_fn_806572E0_00003684
lbl_fn_806572E0_0000367C:
    li r8, 0x0
    li r7, 0x0
lbl_fn_806572E0_00003684:
    lhz r0, 0x0(r18)
    andi. r6, r0, 0x9f1f
lbl_fn_806572E0_0000368C:
    cmplwi r6, 0xffff
    bne lbl_fn_806572E0_0000369C
    lwz r0, 0x0(r21)
    andi. r6, r0, 0x9f1f
lbl_fn_806572E0_0000369C:
    cmplwi r7, 0xffff
    bne lbl_fn_806572E0_000036A8
    lwz r7, 0x0(r21)
lbl_fn_806572E0_000036A8:
    cmplwi r8, 0xffff
    bne lbl_fn_806572E0_000036B4
    lwz r8, 0x60(r21)
lbl_fn_806572E0_000036B4:
    mr r3, r21
    li r5, 0x1
    bl fn_806542B0
    lbz r0, 0x29(r18)
    extsb. r0, r0
    beq lbl_fn_806572E0_000036D8
    cmpwi r0, -0x7
    beq lbl_fn_806572E0_000036E4
    b lbl_fn_806572E0_00003700
lbl_fn_806572E0_000036D8:
    mr r3, r21
    mr r4, r18
    bl fn_806561F0
lbl_fn_806572E0_000036E4:
    mr r3, r21
    mr r4, r18
    bl fn_80654700
    mr r3, r21
    mr r4, r18
    bl fn_806559D0
    b lbl_fn_806572E0_0000370C
lbl_fn_806572E0_00003700:
    cmpwi r28, 0x0
    bne lbl_fn_806572E0_0000370C
    stb r24, 0x5e(r21)
lbl_fn_806572E0_0000370C:
    subi r5, r18, 0x4
    subi r4, r21, 0x4
    mtctr r17
lbl_fn_806572E0_00003718:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_fn_806572E0_00003718
    subic. r19, r19, 0x1
    bgt lbl_fn_806572E0_000035A0
    b lbl_fn_806572E0_000038F4
lbl_fn_806572E0_00003738:
    lis r4, 0x1
    li r3, 0x1
    subi r8, r4, 0x1
    mr r7, r8
    mr r6, r8
    nop
lbl_fn_806572E0_00003750:
    lbz r4, -0xc8(r18)
    subi r18, r18, 0xf0
    lbz r0, 0x5c(r21)
    cmplw r0, r4
    beq lbl_fn_806572E0_0000376C
    stb r4, 0x5c(r21)
    stb r3, 0x641(r21)
lbl_fn_806572E0_0000376C:
    lbz r0, 0x29(r18)
    lbz r4, 0x28(r18)
    extsb. r0, r0
    beq lbl_fn_806572E0_00003790
    cmpwi r0, -0x7
    beq lbl_fn_806572E0_0000381C
    cmpwi r0, -0x2
    beq lbl_fn_806572E0_0000381C
    b lbl_fn_806572E0_00003824
lbl_fn_806572E0_00003790:
    cmplwi r4, 0x1
    bne lbl_fn_806572E0_000037A4
    lhz r7, 0x0(r18)
    li r8, 0x0
    b lbl_fn_806572E0_0000381C
lbl_fn_806572E0_000037A4:
    cmplwi r4, 0x2
    beq lbl_fn_806572E0_000037B8
    subi r0, r4, 0x10
    cmplwi r0, 0x3
    bgt lbl_fn_806572E0_000037C4
lbl_fn_806572E0_000037B8:
    lhz r8, 0x2a(r18)
    li r7, 0x0
    b lbl_fn_806572E0_0000381C
lbl_fn_806572E0_000037C4:
    cmplwi r4, 0x6
    bne lbl_fn_806572E0_000037EC
    lbz r5, 0x36(r18)
    rlwinm. r0, r5, 0, 25, 25
    beq lbl_fn_806572E0_000037EC
    clrlwi. r0, r5, 31
    beq lbl_fn_806572E0_000037EC
    lhz r7, 0x0(r18)
    li r8, 0x0
    b lbl_fn_806572E0_0000381C
lbl_fn_806572E0_000037EC:
    cmplwi r4, 0x7
    bne lbl_fn_806572E0_00003814
    lbz r5, 0x36(r18)
    rlwinm. r0, r5, 0, 25, 25
    beq lbl_fn_806572E0_00003814
    clrlwi. r0, r5, 31
    beq lbl_fn_806572E0_00003814
    lhz r8, 0x2a(r18)
    li r7, 0x0
    b lbl_fn_806572E0_0000381C
lbl_fn_806572E0_00003814:
    li r8, 0x0
    li r7, 0x0
lbl_fn_806572E0_0000381C:
    lhz r0, 0x0(r18)
    andi. r6, r0, 0x9f1f
lbl_fn_806572E0_00003824:
    subic. r19, r19, 0x1
    bgt lbl_fn_806572E0_00003750
    cmplwi r6, 0xffff
    bne lbl_fn_806572E0_0000383C
    lwz r0, 0x0(r21)
    andi. r6, r0, 0x9f1f
lbl_fn_806572E0_0000383C:
    cmplwi r7, 0xffff
    bne lbl_fn_806572E0_00003848
    lwz r7, 0x0(r21)
lbl_fn_806572E0_00003848:
    cmplwi r8, 0xffff
    bne lbl_fn_806572E0_00003854
    lwz r8, 0x60(r21)
lbl_fn_806572E0_00003854:
    mr r3, r21
    mr r5, r29
    bl fn_806542B0
    mr r22, r29
    mr r19, r20
    li r23, 0x0
    li r18, 0x1e
lbl_fn_806572E0_00003870:
    lbz r0, -0xc7(r19)
    subi r19, r19, 0xf0
    stb r0, 0x5d(r21)
    extsb. r0, r0
    lbz r3, 0x40(r19)
    stb r3, 0x5f(r21)
    beq lbl_fn_806572E0_00003898
    cmpwi r0, -0x7
    beq lbl_fn_806572E0_000038A4
    b lbl_fn_806572E0_000038C0
lbl_fn_806572E0_00003898:
    mr r3, r21
    mr r4, r19
    bl fn_806561F0
lbl_fn_806572E0_000038A4:
    mr r3, r21
    mr r4, r19
    bl fn_80654700
    mr r3, r21
    mr r4, r19
    bl fn_806559D0
    b lbl_fn_806572E0_000038CC
lbl_fn_806572E0_000038C0:
    cmpwi r28, 0x0
    bne lbl_fn_806572E0_000038CC
    stb r23, 0x5e(r21)
lbl_fn_806572E0_000038CC:
    subi r5, r19, 0x4
    subi r4, r21, 0x4
    mtctr r18
lbl_fn_806572E0_000038D8:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_fn_806572E0_000038D8
    subic. r22, r22, 0x1
    bgt lbl_fn_806572E0_00003870
lbl_fn_806572E0_000038F4:
    bl fn_80658F30
    cmpwi r3, 0x0
    beq lbl_fn_806572E0_000039A4
    stw r20, 0x17c(r21)
    mr r3, r25
    addi r4, r21, 0x180
    lwz r5, 0x5bc(r21)
    lwz r6, 0x5c0(r21)
    lwz r11, 0x5c4(r21)
    lwz r10, 0x5d8(r21)
    lwz r9, 0x5dc(r21)
    lwz r8, 0x5c8(r21)
    lwz r7, 0x5cc(r21)
    lbz r0, 0x5e(r21)
    stw r5, 0x14(r1)
    lwz r5, 0x5a0(r21)
    stw r6, 0x18(r1)
    lwz r6, 0x5a4(r21)
    stw r11, 0x1c(r1)
    stw r10, 0x28(r1)
    stw r9, 0x2c(r1)
    stw r8, 0x3c(r1)
    stw r7, 0x40(r1)
    stb r0, 0x66(r1)
    bl fn_8065AA50
    lis r3, fn_80657230@ha
    addi r3, r3, fn_80657230@l
    bl fn_8065AEB0
    fmr f1, f31
    mr r3, r25
    mr r5, r30
    mr r6, r29
    addi r4, r21, 0xb0
    addi r7, r1, 0x8
    bl fn_8065AA80
    li r0, 0x1e
    subi r5, r26, 0x4
    subi r4, r21, 0x4
    mtctr r0
lbl_fn_806572E0_00003990:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_fn_806572E0_00003990
lbl_fn_806572E0_000039A4:
    li r0, 0x0
    stb r0, 0x5eb(r21)
lbl_fn_806572E0_000039AC:
    cmpwi r29, 0x0
    bne lbl_fn_806572E0_00003A1C
    cmpwi r31, 0x0
    bne lbl_fn_806572E0_000039F4
    cmpwi r28, 0x0
    beq lbl_fn_806572E0_000039EC
    li r0, 0x1e
    subi r5, r26, 0x4
    addi r4, r1, 0xf4
    mtctr r0
    nop
lbl_fn_806572E0_000039D8:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_fn_806572E0_000039D8
lbl_fn_806572E0_000039EC:
    li r31, -0x1
    b lbl_fn_806572E0_00003A1C
lbl_fn_806572E0_000039F4:
    cmpwi r31, -0x2
    bne lbl_fn_806572E0_00003A1C
    cmpwi r28, 0x0
    beq lbl_fn_806572E0_00003A1C
    li r4, 0xfd
    li r3, 0x0
    li r0, -0x1
    stb r4, 0x5c(r26)
    stb r3, 0x5f(r26)
    stb r0, 0x5d(r26)
lbl_fn_806572E0_00003A1C:
    cmpwi r27, 0x0
    beq lbl_fn_806572E0_00003A28
    stw r31, 0x0(r27)
lbl_fn_806572E0_00003A28:
    lfd f31, 0x238(r1)
    addi r11, r1, 0x238
    mr r3, r29
    bl _restgpr_17
    lwz r0, 0x244(r1)
    mtlr r0
    addi r1, r1, 0x240
    blr
}

asm void fn_80657AF0(void)
{
    nofralloc
    li r3, 0x0
    li r4, 0x0
    b fn_80657B00
}

asm void fn_80657B00(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    addi r11, r1, 0x60
    stfd f31, 0x90(r1)
    psq_st f31, 0x98(r1), 0, 0
    stfd f30, 0x80(r1)
    psq_st f30, 0x88(r1), 0, 0
    stfd f29, 0x70(r1)
    psq_st f29, 0x78(r1), 0, 0
    stfd f28, 0x60(r1)
    psq_st f28, 0x68(r1), 0, 0
    bl _savegpr_14
    lbz r0, lbl_808801A4
    lis r20, lbl_80828318@ha
    mr r15, r3
    mr r16, r4
    cmpwi r0, 0x0
    addi r20, r20, lbl_80828318@l
    bne lbl_fn_80657B00_00003E90
    bl fn_8065F490
    bl OSDisableInterrupts
    stw r3, 0x10(r1)
    addi r3, r20, 0x0
    li r4, 0x0
    li r5, 0x1a20
    bl memset
    bl fn_806635D0
    clrlwi r3, r3, 24
    lis r0, 0x4330
    stw r3, 0xc(r1)
    li r17, 0x0
    lfd f1, lbl_80888908
    lis r3, 0x1
    stw r0, 0x8(r1)
    mr r23, r17
    lfs f30, lbl_808888A4
    mr r26, r17
    lfd f0, 0x8(r1)
    mr r27, r17
    lfs f31, lbl_80888898
    mr r29, r17
    fsubs f0, f0, f1
    addi r19, r20, 0x0
    srwi r18, r16, 2
    subi r28, r3, 0x63c0
    li r31, 0x0
    li r30, -0x1
    fadds f0, f30, f0
    lis r22, fn_806583E0@ha
    li r24, 0x1
    li r25, 0x3
    stfs f0, lbl_8087EB50
    li r14, 0xfd
    lis r21, fn_80657F70@ha
lbl_fn_80657B00_00003B3C:
    mr r3, r17
    addi r4, r21, fn_80657F70@l
    bl fn_80660E10
    stw r3, 0x63c(r19)
    mr r3, r17
    addi r4, r22, fn_806583E0@l
    bl fn_80660D80
    stw r3, 0x638(r19)
    mr r3, r17
    stb r23, 0x643(r19)
    stb r24, 0x642(r19)
    stb r23, 0x645(r19)
    stb r23, 0x646(r19)
    stb r24, 0x647(r19)
    stb r23, 0x679(r19)
    stb r23, 0x676(r19)
    stb r23, 0x67a(r19)
    stb r25, 0x67d(r19)
    bl fn_80664950
    stb r3, 0x678(r19)
    lfs f28, lbl_808888A4
    stb r3, 0x677(r19)
    lfs f29, lbl_808888AC
    fmuls f1, f28, f28
    stb r26, 0x67b(r19)
    fmuls f0, f29, f29
    lfs f2, lbl_8087EB24
    stb r24, 0x67c(r19)
    lwz r3, lbl_8087EB28
    stb r14, 0x5c(r19)
    fadds f1, f1, f0
    lwz r0, lbl_8087EB2C
    stb r26, 0x5f(r19)
    lwz r5, lbl_8087EB30
    stfs f2, 0x110(r19)
    lwz r4, lbl_8087EB34
    stw r3, 0x114(r19)
    lwz r3, lbl_80880190
    stw r0, 0x118(r19)
    lwz r0, lbl_80880194
    stw r5, 0x11c(r19)
    stw r4, 0x120(r19)
    stw r3, 0x124(r19)
    stw r0, 0x128(r19)
    bl fn_8068B100
    lfs f0, 0x124(r19)
    frsp f1, f1
    fcmpo cr0, f0, f31
    bge lbl_fn_80657B00_00003C08
    fadds f28, f28, f0
    b lbl_fn_80657B00_00003C0C
lbl_fn_80657B00_00003C08:
    fsubs f28, f28, f0
lbl_fn_80657B00_00003C0C:
    lfs f0, 0x128(r19)
    fcmpo cr0, f0, f31
    bge lbl_fn_80657B00_00003C20
    fadds f29, f29, f0
    b lbl_fn_80657B00_00003C24
lbl_fn_80657B00_00003C20:
    fsubs f29, f29, f0
lbl_fn_80657B00_00003C24:
    fcmpo cr0, f28, f29
    bge lbl_fn_80657B00_00003C30
    b lbl_fn_80657B00_00003C34
lbl_fn_80657B00_00003C30:
    fmr f28, f29
lbl_fn_80657B00_00003C34:
    fdivs f0, f1, f28
    cmpwi r16, 0x0
    stfs f0, 0x12c(r19)
    stfs f31, 0x108(r19)
    stfs f31, 0x100(r19)
    stfs f31, 0xf8(r19)
    stfs f31, 0xf0(r19)
    stfs f30, 0x10c(r19)
    stfs f30, 0x104(r19)
    stfs f30, 0xfc(r19)
    stfs f30, 0xf4(r19)
    stw r27, 0x658(r19)
    stw r27, 0x654(r19)
    stw r27, 0x650(r19)
    stw r27, 0x64c(r19)
    sth r28, 0x5f0(r19)
    sth r27, 0x5f2(r19)
    sth r27, 0x5ec(r19)
    sth r28, 0x5ee(r19)
    sth r27, 0x5f4(r19)
    sth r28, 0x5f6(r19)
    stb r27, 0x64b(r19)
    stb r24, 0x648(r19)
    stb r24, 0x649(r19)
    stb r24, 0x67e(r19)
    stb r27, 0x64a(r19)
    beq lbl_fn_80657B00_00003CBC
    cmpwi r15, 0x0
    beq lbl_fn_80657B00_00003CBC
    mullw r0, r18, r31
    stw r18, 0x5a4(r19)
    add r0, r15, r0
    stw r0, 0x5a0(r19)
    b lbl_fn_80657B00_00003CC4
lbl_fn_80657B00_00003CBC:
    stw r29, 0x5a4(r19)
    stw r29, 0x5a0(r19)
lbl_fn_80657B00_00003CC4:
    stb r30, 0x1a9(r19)
    li r5, 0x0
    li r4, 0x0
    stb r30, 0x1eb(r19)
    stb r30, 0x22d(r19)
    stb r30, 0x26f(r19)
    stb r30, 0x2b1(r19)
    stb r30, 0x2f3(r19)
    stb r30, 0x335(r19)
    stb r30, 0x377(r19)
    stb r30, 0x3b9(r19)
    stb r30, 0x3fb(r19)
    stb r30, 0x43d(r19)
    stb r30, 0x47f(r19)
    stb r30, 0x4c1(r19)
    stb r30, 0x503(r19)
    stb r30, 0x545(r19)
    stb r30, 0x587(r19)
    b lbl_fn_80657B00_00003D24
lbl_fn_80657B00_00003D10:
    lwz r0, 0x5a0(r19)
    addi r5, r5, 0x1
    add r3, r0, r4
    addi r4, r4, 0x42
    stb r30, 0x29(r3)
lbl_fn_80657B00_00003D24:
    lwz r0, 0x5a4(r19)
    cmplw r5, r0
    blt lbl_fn_80657B00_00003D10
    addi r17, r17, 0x1
    addi r31, r31, 0x42
    cmpwi r17, 0x4
    addi r19, r19, 0x688
    blt lbl_fn_80657B00_00003B3C
    lfd f0, lbl_808888F0
    addi r4, r20, 0x1a70
    li r5, 0x0
    li r0, -0x2
    li r14, 0x1
    stb r5, lbl_808801DA
    li r3, 0x1
    stb r5, lbl_808801D9
    sth r5, lbl_808801D0
    stfd f0, 0x1a70(r20)
    stfd f0, 0x8(r4)
    stfd f0, 0x10(r4)
    stfd f0, 0x18(r4)
    stb r0, lbl_808801D8
    sth r5, lbl_808801D6
    stb r14, lbl_808801D5
    stb r5, lbl_808801D3
    bl fn_80666850
    lfs f29, lbl_8087EB38
    bl OSDisableInterrupts
    lfs f0, lbl_80888918
    stfs f29, lbl_8087EB38
    fdivs f0, f29, f0
    stfs f0, lbl_808801E0
    stfs f0, lbl_808801DC
    bl OSRestoreInterrupts
    addi r3, r20, 0x0
    li r15, 0x3
    addi r16, r3, 0x1398
lbl_fn_80657B00_00003DB8:
    bl fn_8065F540
    cmpwi r3, 0x3
    bne lbl_fn_80657B00_00003DD0
    mr r3, r15
    li r4, 0x0
    bl fn_80661300
lbl_fn_80657B00_00003DD0:
    subic. r15, r15, 0x1
    stb r14, 0x640(r16)
    subi r16, r16, 0x688
    bge lbl_fn_80657B00_00003DB8
    lfs f1, lbl_8088891C
    addi r14, r20, 0x1a20
    lfs f0, lbl_8087EBA4
    lfs f2, lbl_80888898
    lfs f3, lbl_808888A4
    fmuls f1, f1, f0
    stfs f3, 0x1a20(r20)
    stfs f2, 0x4(r14)
    stfs f2, 0x8(r14)
    stfs f2, 0xc(r14)
    stfs f2, 0x10(r14)
    bl fn_8068A850
    frsp f1, f1
    lfs f2, lbl_8088891C
    lfs f0, lbl_8087EBA4
    stfs f1, 0x14(r14)
    fmuls f1, f2, f0
    bl fn_8068AD58
    fneg f3, f1
    lfs f2, lbl_80888898
    lfs f1, lbl_8088891C
    lfs f0, lbl_8087EBA4
    frsp f3, f3
    stfs f2, 0x1c(r14)
    fmuls f1, f1, f0
    stfs f3, 0x18(r14)
    stfs f2, 0x20(r14)
    bl fn_8068AD58
    frsp f1, f1
    lfs f2, lbl_8088891C
    lfs f0, lbl_8087EBA4
    stfs f1, 0x24(r14)
    fmuls f1, f2, f0
    bl fn_8068A850
    frsp f1, f1
    lfs f0, lbl_80888898
    li r0, 0x1
    stfs f0, 0x2c(r14)
    lwz r3, 0x10(r1)
    stfs f1, 0x28(r14)
    stb r0, lbl_808801A4
    bl OSRestoreInterrupts
    lwz r3, lbl_8087EB20
    bl OSRegisterVersion
lbl_fn_80657B00_00003E90:
    addi r11, r1, 0x60
    psq_l f31, 0x98(r1), 0, 0
    lfd f31, 0x90(r1)
    psq_l f30, 0x88(r1), 0, 0
    lfd f30, 0x80(r1)
    psq_l f29, 0x78(r1), 0, 0
    lfd f29, 0x70(r1)
    psq_l f28, 0x68(r1), 0, 0
    lfd f28, 0x60(r1)
    bl _restgpr_14
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_80657F70(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r5, lbl_80828318@ha
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    mulli r0, r3, 0x688
    addi r5, r5, lbl_80828318@l
    stw r31, 0x1c(r1)
    add r31, r5, r0
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    stw r28, 0x10(r1)
    bne lbl_fn_80657F70_00003FA4
    li r28, 0x0
    stw r28, 0x65c(r31)
    li r0, 0x1
    li r3, 0x0
    stb r0, 0x67e(r31)
    bl fn_80666850
    lis r4, fn_806583E0@ha
    mr r3, r29
    addi r4, r4, fn_806583E0@l
    bl fn_80660D80
    li r3, 0x1
    bl fn_80666850
    stb r28, 0x643(r31)
    cmpwi r29, 0x3
    stb r28, 0x645(r31)
    stb r28, 0x644(r31)
    bne lbl_fn_80657F70_00003F7C
    lbz r0, lbl_808801D3
    stb r28, lbl_808801DA
    cmpwi r0, 0x4
    stb r28, lbl_808801D9
    beq lbl_fn_80657F70_00003F68
    stb r28, lbl_808801D3
lbl_fn_80657F70_00003F68:
    li r0, -0x2
    li r3, 0x0
    stb r3, lbl_808801D5
    stb r0, lbl_808801D8
    stw r0, 0xa8(r31)
lbl_fn_80657F70_00003F7C:
    li r4, 0x0
    stb r4, 0x67a(r31)
    li r3, 0x1
    stb r3, 0x67d(r31)
    lbz r0, 0x679(r31)
    stb r0, 0x678(r31)
    stb r4, 0x677(r31)
    stb r4, 0x67b(r31)
    stb r3, 0x67c(r31)
    b lbl_fn_80657F70_00004090
lbl_fn_80657F70_00003FA4:
    li r4, -0x1
    stb r4, 0x1a9(r31)
    li r6, 0x0
    li r5, 0x0
    stb r4, 0x1eb(r31)
    stb r4, 0x22d(r31)
    stb r4, 0x26f(r31)
    stb r4, 0x2b1(r31)
    stb r4, 0x2f3(r31)
    stb r4, 0x335(r31)
    stb r4, 0x377(r31)
    stb r4, 0x3b9(r31)
    stb r4, 0x3fb(r31)
    stb r4, 0x43d(r31)
    stb r4, 0x47f(r31)
    stb r4, 0x4c1(r31)
    stb r4, 0x503(r31)
    stb r4, 0x545(r31)
    stb r4, 0x587(r31)
    b lbl_fn_80657F70_0000400C
    nop
lbl_fn_80657F70_00003FF8:
    lwz r0, 0x5a0(r31)
    addi r6, r6, 0x1
    add r3, r0, r5
    addi r5, r5, 0x42
    stb r4, 0x29(r3)
lbl_fn_80657F70_0000400C:
    lwz r0, 0x5a4(r31)
    cmplw r6, r0
    blt lbl_fn_80657F70_00003FF8
    lwz r0, 0x5f8(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80657F70_00004054
    lbz r0, 0x647(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80657F70_00004054
    li r0, 0x1
    stb r0, 0x647(r31)
    mr r3, r29
    li r4, 0x1
    lwz r12, 0x5f8(r31)
    mtctr r12
    bctrl
    li r0, 0x0
    stb r0, 0x646(r31)
lbl_fn_80657F70_00004054:
    mr r3, r29
    bl fn_80663610
    stb r3, 0x643(r31)
    li r0, 0x0
    stb r0, 0x644(r31)
    lbz r0, 0x67c(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80657F70_00004090
    lwz r12, 0x680(r31)
    cmpwi r12, 0x0
    beq lbl_fn_80657F70_00004090
    mr r3, r29
    li r4, 0x1
    mtctr r12
    bctrl
lbl_fn_80657F70_00004090:
    lwz r12, 0x63c(r31)
    cmpwi r12, 0x0
    beq lbl_fn_80657F70_000040AC
    mr r3, r29
    mr r4, r30
    mtctr r12
    bctrl
lbl_fn_80657F70_000040AC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80658170(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    mr r30, r4
    bl OSDisableInterrupts
    mulli r0, r31, 0x688
    lis r4, lbl_80828318@ha
    addi r4, r4, lbl_80828318@l
    add r4, r4, r0
    lwz r31, 0x63c(r4)
    stw r30, 0x63c(r4)
    bl OSRestoreInterrupts
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806581D0(void)
{
    nofralloc
    cntlzw r3, r4
    li r0, 0x0
    srwi r3, r3, 5
    stb r3, lbl_808801D9
    stb r0, lbl_808801D2
    stb r0, lbl_808801DA
    blr
}

asm void fn_806581F0(void)
{
    nofralloc
    cmpwi r4, 0x0
    bne lbl_fn_806581F0_00004170
    li r4, 0x2
    li r3, 0x64
    li r0, 0x0
    stb r4, lbl_808801D3
    stb r3, lbl_808801D4
    sth r0, lbl_808801D0
lbl_fn_806581F0_00004170:
    li r0, 0x0
    stb r0, lbl_808801DA
    blr
}

asm void fn_80658220(void)
{
    nofralloc
    mulli r0, r3, 0x688
    lis r3, lbl_80828318@ha
    li r4, 0x0
    addi r3, r3, lbl_80828318@l
    add r3, r3, r0
    stb r4, 0x642(r3)
    blr
}

asm void fn_80658240(void)
{
    nofralloc
    mulli r0, r3, 0x688
    lis r3, lbl_80828318@ha
    li r4, 0x1
    addi r3, r3, lbl_80828318@l
    add r3, r3, r0
    stb r4, 0x642(r3)
    blr
}

asm void fn_80658260(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_80828318@ha
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    mulli r0, r3, 0x688
    addi r5, r5, lbl_80828318@l
    stw r31, 0xc(r1)
    add r31, r5, r0
    stw r30, 0x8(r1)
    mr r30, r3
    bne lbl_fn_80658260_00004228
    lwz r0, 0x5f8(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80658260_00004228
    lbz r0, 0x647(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80658260_00004228
    li r0, 0x1
    stb r0, 0x647(r31)
    li r4, 0x1
    lwz r12, 0x5f8(r31)
    mtctr r12
    bctrl
    li r0, 0x0
    stb r0, 0x646(r31)
lbl_fn_80658260_00004228:
    mr r3, r30
    bl fn_80663610
    stb r3, 0x643(r31)
    li r0, 0x0
    stb r0, 0x644(r31)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80658300(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_80828318@ha
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    mulli r6, r3, 0x688
    addi r5, r5, lbl_80828318@l
    stw r31, 0xc(r1)
    li r0, 0x0
    add r31, r5, r6
    stb r0, 0x67a(r31)
    li r0, 0x1
    stb r0, 0x67d(r31)
    bne lbl_fn_80658300_000042A4
    lbz r0, 0x676(r31)
    stb r0, 0x677(r31)
    b lbl_fn_80658300_00004328
lbl_fn_80658300_000042A4:
    addi r0, r4, 0x4
    cmplwi r0, 0x1
    bgt lbl_fn_80658300_00004320
    lbz r0, 0x67c(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80658300_00004320
    lbz r4, 0x676(r31)
    cmpwi r4, 0x0
    beq lbl_fn_80658300_00004320
    lbz r0, 0x678(r31)
    cmplw r4, r0
    bne lbl_fn_80658300_00004320
    cmpwi r4, 0x5
    beq lbl_fn_80658300_000042E8
    cmpwi r4, 0x7
    beq lbl_fn_80658300_000042F0
    b lbl_fn_80658300_000042F8
lbl_fn_80658300_000042E8:
    li r4, -0x2
    b lbl_fn_80658300_000042FC
lbl_fn_80658300_000042F0:
    li r4, -0x3
    b lbl_fn_80658300_000042FC
lbl_fn_80658300_000042F8:
    li r4, -0x1
lbl_fn_80658300_000042FC:
    li r0, 0x0
    stb r0, 0x67c(r31)
    lwz r12, 0x680(r31)
    cmpwi r12, 0x0
    beq lbl_fn_80658300_00004318
    mtctr r12
    bctrl
lbl_fn_80658300_00004318:
    li r0, 0x1
    stb r0, 0x67b(r31)
lbl_fn_80658300_00004320:
    li r0, 0x0
    stb r0, 0x677(r31)
lbl_fn_80658300_00004328:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
