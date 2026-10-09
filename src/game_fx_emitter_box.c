#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void fn_80097C08(void);
extern void fn_80097CCC(void);
extern void fn_80097D7C(void);
extern void fn_800CB5C8(void);
extern void fn_800EE360(void);
extern void fn_800F8548(void);
extern void fn_801426A4(void);
extern void fn_8016E970(void);
extern void fn_8017039C(void);
extern void fn_80170A20(void);
extern void fn_801765D8(void);
extern void fn_80232B7C(void);
extern void fn_80239DAC(void);
extern void fn_8023A8B4(void);
extern void fn_802847CC(void);
extern void fn_80287400(void);
extern void fn_802878EC(void);
extern void fn_805F8E70(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);
extern void fn_8068B100(void);

/* External data declarations */
extern u8 lbl_807450E0[];
extern u8 lbl_807450E8[];

/* Small data declarations */
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_808839F0;
extern u32 lbl_808839F4;
extern u32 lbl_808839F8;
extern u32 lbl_808839FC;
extern u32 lbl_80883A08;
extern u32 lbl_80883A1C;
extern u32 lbl_80883A38;
extern u32 lbl_80883A44;
extern u32 lbl_80883A48;
extern u32 lbl_80883A5C;
extern u32 lbl_80883A68;
extern u32 lbl_80883A6C;
extern u32 lbl_80883A70;
extern u32 lbl_80883A74;
extern u32 lbl_80883A78;
extern u32 lbl_80883A7C;
extern u32 lbl_80883A80;

/* Function declarations */
void fn_802857B4(void);
void fn_80285B7C(void);
void fn_80285FA0(void);
void fn_802868A0(void);
void fn_80286B78(void);
void fn_80286CB0(void);
void fn_8028702C(void);

asm void fn_802857B4(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    stw r31, 0x1c(r1)
    mr r31, r3
    lfs f31, 0x2e4(r3)
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_802857B4_000002C4
    lwz r0, 0x1538(r31)
    cmpwi r0, 0x6
    beq lbl_fn_802857B4_00000070
    cmpwi r0, 0x7
    beq lbl_fn_802857B4_000000E0
    cmpwi r0, 0x8
    beq lbl_fn_802857B4_000000F0
    cmpwi r0, 0xa
    beq lbl_fn_802857B4_00000100
    cmpwi r0, 0xb
    beq lbl_fn_802857B4_000001CC
    cmpwi r0, 0xc
    beq lbl_fn_802857B4_000002B4
    b lbl_fn_802857B4_000003AC
lbl_fn_802857B4_00000070:
    lwz r3, 0x14f4(r31)
    li r0, 0x0
    stw r0, 0x14b0(r31)
    cmpwi r3, 0x0
    stw r0, 0x158c(r31)
    beq lbl_fn_802857B4_00000090
    lwz r0, 0x68(r3)
    b lbl_fn_802857B4_00000094
lbl_fn_802857B4_00000090:
    li r0, 0x5a
lbl_fn_802857B4_00000094:
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
    b lbl_fn_802857B4_000003AC
lbl_fn_802857B4_000000E0:
    lwz r4, 0x1588(r31)
    mr r3, r31
    bl fn_80286CB0
    b lbl_fn_802857B4_000003AC
lbl_fn_802857B4_000000F0:
    lwz r4, 0x1588(r31)
    mr r3, r31
    bl fn_80286CB0
    b lbl_fn_802857B4_000003AC
lbl_fn_802857B4_00000100:
    lwz r4, 0x1588(r31)
    mr r3, r31
    li r5, 0xa
    bl fn_80287400
    cmpwi r3, 0x0
    bne lbl_fn_802857B4_000003AC
    lwz r3, 0x14f4(r31)
    li r0, 0x0
    stw r0, 0x14b0(r31)
    cmpwi r3, 0x0
    stw r0, 0x158c(r31)
    beq lbl_fn_802857B4_00000138
    lwz r0, 0x68(r3)
    b lbl_fn_802857B4_0000013C
lbl_fn_802857B4_00000138:
    li r0, 0x5a
lbl_fn_802857B4_0000013C:
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
    b lbl_fn_802857B4_000003AC
lbl_fn_802857B4_000001CC:
    lwz r4, 0x1580(r31)
    mr r3, r31
    li r5, 0xb
    bl fn_80287400
    cmpwi r3, 0x0
    bne lbl_fn_802857B4_000003AC
    lwz r3, 0x14f4(r31)
    li r0, 0x0
    stw r0, 0x14b0(r31)
    cmpwi r3, 0x0
    stw r0, 0x158c(r31)
    beq lbl_fn_802857B4_00000204
    lwz r0, 0x68(r3)
    b lbl_fn_802857B4_00000208
lbl_fn_802857B4_00000204:
    li r0, 0x5a
lbl_fn_802857B4_00000208:
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
    beq lbl_fn_802857B4_000002A0
    lwz r3, 0x68(r3)
    b lbl_fn_802857B4_000002A4
lbl_fn_802857B4_000002A0:
    li r3, 0x3c
lbl_fn_802857B4_000002A4:
    lwz r0, 0x1580(r31)
    stw r3, 0x1590(r31)
    stw r0, 0x1584(r31)
    b lbl_fn_802857B4_000003AC
lbl_fn_802857B4_000002B4:
    lwz r4, 0x1580(r31)
    mr r3, r31
    bl fn_802878EC
    b lbl_fn_802857B4_000003AC
lbl_fn_802857B4_000002C4:
    lfs f1, 0x2e4(r31)
    lfs f0, lbl_80883A68
    fcmpo cr0, f0, f1
    cror eq, lt, eq
    bne lbl_fn_802857B4_000003AC
    lfs f0, lbl_80883A6C
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_802857B4_000003AC
    lfs f1, 0x1544(r31)
    lis r3, lbl_807450E8@ha
    lfs f0, 0x1540(r31)
    lwz r4, 0x153c(r31)
    fsubs f1, f1, f0
    lfd f2, lbl_807450E8@l(r3)
    addi r0, r4, 0x2
    stw r0, 0x153c(r31)
    bl fn_8068AEA8
    frsp f4, f1
    lfs f0, lbl_808839F4
    fcmpo cr0, f4, f0
    ble lbl_fn_802857B4_00000324
    lfs f0, lbl_80883A70
    fsubs f4, f4, f0
lbl_fn_802857B4_00000324:
    lfs f0, lbl_80883A74
    fcmpo cr0, f4, f0
    bge lbl_fn_802857B4_00000338
    lfs f0, lbl_80883A70
    fadds f4, f4, f0
lbl_fn_802857B4_00000338:
    lwz r4, 0x153c(r31)
    lis r0, 0x4330
    lis r5, lbl_807450E0@ha
    stw r0, 0x8(r1)
    xoris r4, r4, 0x8000
    lfd f3, lbl_807450E0@l(r5)
    stw r4, 0xc(r1)
    lis r3, lbl_807450E8@ha
    lfs f1, lbl_80883A5C
    lfd f2, 0x8(r1)
    lfs f0, 0x1540(r31)
    fsubs f3, f2, f3
    lfd f2, lbl_807450E8@l(r3)
    fmuls f3, f3, f4
    fdivs f1, f3, f1
    fadds f1, f0, f1
    bl fn_8068AEA8
    frsp f1, f1
    lfs f0, lbl_808839F4
    fcmpo cr0, f1, f0
    ble lbl_fn_802857B4_00000394
    lfs f0, lbl_80883A70
    fsubs f1, f1, f0
lbl_fn_802857B4_00000394:
    lfs f0, lbl_80883A74
    fcmpo cr0, f1, f0
    bge lbl_fn_802857B4_000003A8
    lfs f0, lbl_80883A70
    fadds f1, f1, f0
lbl_fn_802857B4_000003A8:
    stfs f1, 0x538(r31)
lbl_fn_802857B4_000003AC:
    lwz r0, 0x34(r1)
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80285B7C(void)
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
    lwz r4, 0x1580(r3)
    lfs f0, 0x530(r3)
    lfs f4, 0x530(r4)
    lfs f3, 0x528(r4)
    fsubs f5, f4, f0
    lfs f0, 0x528(r3)
    lfs f4, 0x52c(r4)
    fsubs f6, f3, f0
    lfs f3, 0x52c(r3)
    fmuls f0, f5, f5
    fsubs f3, f4, f3
    stfs f6, 0x5c(r1)
    fmadds f1, f6, f6, f0
    stfs f3, 0x60(r1)
    stfs f5, 0x64(r1)
    bl fn_8068B100
    lfs f2, 0x64(r1)
    addi r3, r1, 0x5c
    frsp f31, f1
    lfs f0, lbl_80883A08
    fabs f3, f2
    addi r30, r1, 0x50
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0x58(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_80285B7C_0000048C
    lfs f3, 0x50(r1)
    lfs f0, lbl_808839F8
    fcmpo cr0, f3, f0
    ble lbl_fn_80285B7C_00000480
    lfs f0, lbl_80883A44
    b lbl_fn_80285B7C_00000484
lbl_fn_80285B7C_00000480:
    lfs f0, lbl_80883A48
lbl_fn_80285B7C_00000484:
    stfs f0, 0x48(r1)
    b lbl_fn_80285B7C_000004A0
lbl_fn_80285B7C_0000048C:
    frsp f2, f2
    lfs f1, 0x50(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_80285B7C_000004A0:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x78
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808839F8
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
    lfs f0, lbl_808839FC
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
    lfs f0, lbl_80883A08
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80285B7C_000005BC
    lfs f3, 0x3c(r1)
    lfs f0, lbl_808839F8
    fcmpo cr0, f3, f0
    ble lbl_fn_80285B7C_000005AC
    lfs f0, lbl_80883A44
    b lbl_fn_80285B7C_000005B0
lbl_fn_80285B7C_000005AC:
    lfs f0, lbl_80883A48
lbl_fn_80285B7C_000005B0:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_80285B7C_000005D0
lbl_fn_80285B7C_000005BC:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_80285B7C_000005D0:
    lfs f2, lbl_808839F8
    addi r3, r1, 0x44
    lwz r5, 0x1530(r31)
    addi r4, r1, 0x68
    stfs f2, 0x4c(r1)
    psq_l f1, 0x0(r3), 0, 0
    cmpwi r5, 0x0
    stfs f2, 0x58(r1)
    frsp f2, f2
    lfs f29, lbl_808839F0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x70(r1)
    beq lbl_fn_80285B7C_0000060C
    lfs f29, 0x40(r5)
lbl_fn_80285B7C_0000060C:
    lwz r3, 0x1554(r31)
    lwz r0, 0x1558(r31)
    cmpw r3, r0
    blt lbl_fn_80285B7C_00000634
    lwz r0, 0x1574(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80285B7C_00000634
    lwz r4, 0x1580(r31)
    mr r3, r31
    bl fn_802878EC
lbl_fn_80285B7C_00000634:
    fcmpo cr0, f31, f29
    bge lbl_fn_80285B7C_00000748
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lwz r4, 0x1580(r31)
    mr r3, r31
    li r5, 0xb
    bl fn_80287400
    cmpwi r3, 0x0
    bne lbl_fn_80285B7C_000007BC
    lwz r4, 0x1580(r31)
    mr r3, r31
    li r5, 0xb
    bl fn_80287400
    cmpwi r3, 0x0
    bne lbl_fn_80285B7C_000007BC
    lwz r3, 0x14f4(r31)
    li r0, 0x0
    stw r0, 0x14b0(r31)
    cmpwi r3, 0x0
    stw r0, 0x158c(r31)
    beq lbl_fn_80285B7C_00000698
    lwz r0, 0x68(r3)
    b lbl_fn_80285B7C_0000069C
lbl_fn_80285B7C_00000698:
    li r0, 0x5a
lbl_fn_80285B7C_0000069C:
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
    beq lbl_fn_80285B7C_00000734
    lwz r3, 0x68(r3)
    b lbl_fn_80285B7C_00000738
lbl_fn_80285B7C_00000734:
    li r3, 0x3c
lbl_fn_80285B7C_00000738:
    lwz r0, 0x1580(r31)
    stw r3, 0x1590(r31)
    stw r0, 0x1584(r31)
    b lbl_fn_80285B7C_000007BC
lbl_fn_80285B7C_00000748:
    lfs f0, 0x152c(r31)
    fcmpo cr0, f31, f0
    ble lbl_fn_80285B7C_00000788
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lwz r4, 0x1580(r31)
    mr r3, r31
    li r5, 0x8
    bl fn_80287400
    cmpwi r3, 0x0
    bne lbl_fn_80285B7C_000007BC
    lwz r4, 0x1580(r31)
    mr r3, r31
    bl fn_8028702C
    b lbl_fn_80285B7C_000007BC
lbl_fn_80285B7C_00000788:
    lwz r3, 0x55c(r31)
    subi r0, r3, 0x6
    cmplwi r0, 0x1
    ble lbl_fn_80285B7C_000007B4
    li r0, 0x3
    stw r0, 0x55c(r31)
    lwz r4, 0x1580(r31)
    mr r3, r31
    lfs f1, lbl_80883A1C
    li r5, 0x0
    bl fn_80170A20
lbl_fn_80285B7C_000007B4:
    mr r3, r31
    bl fn_802847CC
lbl_fn_80285B7C_000007BC:
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

asm void fn_80285FA0(void)
{
    nofralloc
    stwu r1, -0x2e0(r1)
    mflr r0
    stw r0, 0x2e4(r1)
    stfd f31, 0x2d0(r1)
    psq_st f31, 0x2d8(r1), 0, 0
    stfd f30, 0x2c0(r1)
    psq_st f30, 0x2c8(r1), 0, 0
    lfs f30, lbl_808839FC
    stfd f29, 0x2b0(r1)
    psq_st f29, 0x2b8(r1), 0, 0
    stfd f28, 0x2a0(r1)
    psq_st f28, 0x2a8(r1), 0, 0
    stw r31, 0x29c(r1)
    mr r31, r3
    stw r30, 0x298(r1)
    stw r29, 0x294(r1)
    lwz r4, 0x1580(r3)
    lfs f0, 0x530(r3)
    lfs f4, 0x530(r4)
    lfs f3, 0x528(r4)
    fsubs f5, f4, f0
    lfs f0, 0x528(r3)
    lfs f4, 0x52c(r4)
    fsubs f6, f3, f0
    lfs f3, 0x52c(r3)
    fmuls f0, f5, f5
    fsubs f3, f4, f3
    stfs f6, 0x11c(r1)
    fmadds f1, f6, f6, f0
    stfs f3, 0x120(r1)
    stfs f5, 0x124(r1)
    bl fn_8068B100
    lfs f2, 0x124(r1)
    addi r3, r1, 0x11c
    frsp f31, f1
    lfs f0, lbl_80883A08
    fabs f3, f2
    addi r30, r1, 0x110
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0x118(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_80285FA0_000008C0
    lfs f3, 0x110(r1)
    lfs f0, lbl_808839F8
    fcmpo cr0, f3, f0
    ble lbl_fn_80285FA0_000008B4
    lfs f0, lbl_80883A44
    b lbl_fn_80285FA0_000008B8
lbl_fn_80285FA0_000008B4:
    lfs f0, lbl_80883A48
lbl_fn_80285FA0_000008B8:
    stfs f0, 0xd8(r1)
    b lbl_fn_80285FA0_000008D4
lbl_fn_80285FA0_000008C0:
    frsp f2, f2
    lfs f1, 0x110(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0xd8(r1)
lbl_fn_80285FA0_000008D4:
    lfs f0, 0xd8(r1)
    addi r3, r1, 0x218
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808839F8
    addi r4, r1, 0xc8
    lfs f28, 0x220(r1)
    mr r5, r4
    lfs f29, 0x21c(r1)
    addi r3, r1, 0x248
    lfs f13, 0x218(r1)
    lfs f12, 0x230(r1)
    lfs f11, 0x22c(r1)
    lfs f10, 0x228(r1)
    lfs f9, 0x240(r1)
    lfs f8, 0x23c(r1)
    lfs f7, 0x238(r1)
    lfs f6, 0x244(r1)
    lfs f5, 0x234(r1)
    lfs f4, 0x224(r1)
    lfs f0, lbl_808839FC
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x118(r1)
    stfs f3, 0x278(r1)
    stfs f3, 0x27c(r1)
    stfs f3, 0x280(r1)
    stfs f0, 0x284(r1)
    stfs f13, 0x98(r1)
    stfs f29, 0x9c(r1)
    stfs f28, 0xa0(r1)
    stfs f13, 0x248(r1)
    stfs f29, 0x24c(r1)
    stfs f28, 0x250(r1)
    stfs f10, 0xa4(r1)
    stfs f11, 0xa8(r1)
    stfs f12, 0xac(r1)
    stfs f10, 0x258(r1)
    stfs f11, 0x25c(r1)
    stfs f12, 0x260(r1)
    stfs f7, 0xb0(r1)
    stfs f8, 0xb4(r1)
    stfs f9, 0xb8(r1)
    stfs f7, 0x268(r1)
    stfs f8, 0x26c(r1)
    stfs f9, 0x270(r1)
    stfs f4, 0xbc(r1)
    stfs f5, 0xc0(r1)
    stfs f6, 0xc4(r1)
    stfs f4, 0x254(r1)
    stfs f5, 0x264(r1)
    stfs f6, 0x274(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0xd0(r1)
    bl fn_805F9750
    lfs f2, 0xd0(r1)
    lfs f0, lbl_80883A08
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80285FA0_000009F0
    lfs f3, 0xcc(r1)
    lfs f0, lbl_808839F8
    fcmpo cr0, f3, f0
    ble lbl_fn_80285FA0_000009E0
    lfs f0, lbl_80883A44
    b lbl_fn_80285FA0_000009E4
lbl_fn_80285FA0_000009E0:
    lfs f0, lbl_80883A48
lbl_fn_80285FA0_000009E4:
    fneg f0, f0
    stfs f0, 0xd4(r1)
    b lbl_fn_80285FA0_00000A04
lbl_fn_80285FA0_000009F0:
    lfs f1, 0xcc(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0xd4(r1)
lbl_fn_80285FA0_00000A04:
    lfs f0, lbl_808839F8
    addi r3, r1, 0xd4
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x128
    fmr f2, f0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x118(r1)
    frsp f2, f2
    stfs f0, 0xdc(r1)
    stfs f2, 0x130(r1)
    lwz r3, 0x1554(r31)
    lwz r0, 0x1558(r31)
    psq_st f1, 0x0(r30), 0, 0
    cmpw r3, r0
    blt lbl_fn_80285FA0_00000A5C
    lwz r0, 0x1574(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80285FA0_00000A5C
    lwz r4, 0x1580(r31)
    mr r3, r31
    bl fn_802878EC
    b lbl_fn_80285FA0_000010B0
lbl_fn_80285FA0_00000A5C:
    lfs f3, 0x152c(r31)
    fcmpo cr0, f31, f3
    ble lbl_fn_80285FA0_00000A9C
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lwz r4, 0x1580(r31)
    mr r3, r31
    li r5, 0x8
    bl fn_80287400
    cmpwi r3, 0x0
    bne lbl_fn_80285FA0_000010B0
    lwz r4, 0x1580(r31)
    mr r3, r31
    bl fn_8028702C
    b lbl_fn_80285FA0_000010B0
lbl_fn_80285FA0_00000A9C:
    lfs f0, lbl_80883A78
    fmuls f0, f0, f3
    fcmpo cr0, f31, f0
    ble lbl_fn_80285FA0_00000B9C
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lwz r4, 0x1580(r31)
    mr r3, r31
    li r5, 0xa
    bl fn_80287400
    cmpwi r3, 0x0
    bne lbl_fn_80285FA0_000010B0
    lwz r4, 0x1580(r31)
    mr r3, r31
    li r5, 0xa
    bl fn_80287400
    cmpwi r3, 0x0
    bne lbl_fn_80285FA0_000010B0
    lwz r3, 0x14f4(r31)
    li r0, 0x0
    stw r0, 0x14b0(r31)
    cmpwi r3, 0x0
    stw r0, 0x158c(r31)
    beq lbl_fn_80285FA0_00000B08
    lwz r0, 0x68(r3)
    b lbl_fn_80285FA0_00000B0C
lbl_fn_80285FA0_00000B08:
    li r0, 0x5a
lbl_fn_80285FA0_00000B0C:
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
    b lbl_fn_80285FA0_000010B0
lbl_fn_80285FA0_00000B9C:
    lwz r0, 0x1590(r31)
    cmpwi r0, 0x0
    bge lbl_fn_80285FA0_00000BDC
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lwz r4, 0x1580(r31)
    mr r3, r31
    li r5, 0x7
    bl fn_80287400
    cmpwi r3, 0x0
    bne lbl_fn_80285FA0_000010B0
    lwz r4, 0x1580(r31)
    mr r3, r31
    bl fn_80286CB0
    b lbl_fn_80285FA0_000010B0
lbl_fn_80285FA0_00000BDC:
    lwz r3, 0x1530(r31)
    lfs f5, lbl_808839F0
    cmpwi r3, 0x0
    beq lbl_fn_80285FA0_00000BF0
    lfs f5, 0x40(r3)
lbl_fn_80285FA0_00000BF0:
    lfs f0, lbl_80883A78
    fmuls f0, f0, f5
    fcmpo cr0, f31, f0
    cror eq, gt, eq
    bne lbl_fn_80285FA0_00000C24
    lfs f0, lbl_80883A7C
    fmuls f0, f0, f5
    fcmpo cr0, f31, f0
    cror eq, lt, eq
    bne lbl_fn_80285FA0_00000C24
    li r0, 0x1
    stw r0, 0x158c(r31)
    b lbl_fn_80285FA0_00000C58
lbl_fn_80285FA0_00000C24:
    lfs f0, lbl_80883A78
    fmuls f0, f0, f5
    fcmpo cr0, f31, f0
    bge lbl_fn_80285FA0_00000C40
    li r0, 0x0
    stw r0, 0x158c(r31)
    b lbl_fn_80285FA0_00000C58
lbl_fn_80285FA0_00000C40:
    lfs f0, lbl_80883A7C
    fmuls f0, f0, f5
    fcmpo cr0, f31, f0
    ble lbl_fn_80285FA0_00000C58
    li r0, 0x2
    stw r0, 0x158c(r31)
lbl_fn_80285FA0_00000C58:
    lwz r0, 0x158c(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80285FA0_00000E80
    fdivs f4, f31, f5
    lfs f3, lbl_808839FC
    lfs f0, lbl_808839F8
    fsubs f3, f3, f4
    fmuls f31, f5, f3
    fcmpo cr0, f31, f0
    cror eq, lt, eq
    bne lbl_fn_80285FA0_00000C8C
    addi r29, r31, 0x534
    b lbl_fn_80285FA0_00000E58
lbl_fn_80285FA0_00000C8C:
    addi r3, r1, 0x11c
    addi r30, r1, 0x104
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r30
    lfs f2, 0x124(r1)
    mr r4, r30
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x10c(r1)
    bl fn_805F98D0
    lfs f2, 0x10c(r1)
    addi r29, r1, 0xf8
    psq_l f1, 0x0(r30), 0, 0
    fabs f3, f2
    lfs f0, lbl_80883A08
    psq_st f1, 0x0(r29), 0, 0
    frsp f3, f3
    stfs f2, 0x100(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_80285FA0_00000CFC
    lfs f3, 0xf8(r1)
    lfs f0, lbl_808839F8
    fcmpo cr0, f3, f0
    ble lbl_fn_80285FA0_00000CF0
    lfs f0, lbl_80883A44
    b lbl_fn_80285FA0_00000CF4
lbl_fn_80285FA0_00000CF0:
    lfs f0, lbl_80883A48
lbl_fn_80285FA0_00000CF4:
    stfs f0, 0x90(r1)
    b lbl_fn_80285FA0_00000D10
lbl_fn_80285FA0_00000CFC:
    frsp f2, f2
    lfs f1, 0xf8(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x90(r1)
lbl_fn_80285FA0_00000D10:
    lfs f0, 0x90(r1)
    addi r3, r1, 0x1a8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808839F8
    addi r4, r1, 0x80
    lfs f29, 0x1b0(r1)
    mr r5, r4
    lfs f28, 0x1ac(r1)
    addi r3, r1, 0x1d8
    lfs f13, 0x1a8(r1)
    lfs f12, 0x1c0(r1)
    lfs f11, 0x1bc(r1)
    lfs f10, 0x1b8(r1)
    lfs f9, 0x1d0(r1)
    lfs f8, 0x1cc(r1)
    lfs f7, 0x1c8(r1)
    lfs f6, 0x1d4(r1)
    lfs f5, 0x1c4(r1)
    lfs f4, 0x1b4(r1)
    lfs f0, lbl_808839FC
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x100(r1)
    stfs f3, 0x208(r1)
    stfs f3, 0x20c(r1)
    stfs f3, 0x210(r1)
    stfs f0, 0x214(r1)
    stfs f13, 0x50(r1)
    stfs f28, 0x54(r1)
    stfs f29, 0x58(r1)
    stfs f13, 0x1d8(r1)
    stfs f28, 0x1dc(r1)
    stfs f29, 0x1e0(r1)
    stfs f10, 0x5c(r1)
    stfs f11, 0x60(r1)
    stfs f12, 0x64(r1)
    stfs f10, 0x1e8(r1)
    stfs f11, 0x1ec(r1)
    stfs f12, 0x1f0(r1)
    stfs f7, 0x68(r1)
    stfs f8, 0x6c(r1)
    stfs f9, 0x70(r1)
    stfs f7, 0x1f8(r1)
    stfs f8, 0x1fc(r1)
    stfs f9, 0x200(r1)
    stfs f4, 0x74(r1)
    stfs f5, 0x78(r1)
    stfs f6, 0x7c(r1)
    stfs f4, 0x1e4(r1)
    stfs f5, 0x1f4(r1)
    stfs f6, 0x204(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x88(r1)
    bl fn_805F9750
    lfs f2, 0x88(r1)
    lfs f0, lbl_80883A08
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80285FA0_00000E2C
    lfs f3, 0x84(r1)
    lfs f0, lbl_808839F8
    fcmpo cr0, f3, f0
    ble lbl_fn_80285FA0_00000E1C
    lfs f0, lbl_80883A44
    b lbl_fn_80285FA0_00000E20
lbl_fn_80285FA0_00000E1C:
    lfs f0, lbl_80883A48
lbl_fn_80285FA0_00000E20:
    fneg f0, f0
    stfs f0, 0x8c(r1)
    b lbl_fn_80285FA0_00000E40
lbl_fn_80285FA0_00000E2C:
    lfs f1, 0x84(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x8c(r1)
lbl_fn_80285FA0_00000E40:
    addi r3, r1, 0x8c
    lfs f2, lbl_808839F8
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x94(r1)
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x100(r1)
lbl_fn_80285FA0_00000E58:
    lfs f2, 0x8(r29)
    addi r3, r1, 0x128
    psq_l f1, 0x0(r29), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lfs f0, lbl_808839F4
    lfs f3, 0x12c(r1)
    stfs f2, 0x130(r1)
    fsubs f0, f3, f0
    stfs f0, 0x12c(r1)
    b lbl_fn_80285FA0_00000EA0
lbl_fn_80285FA0_00000E80:
    cmpwi r0, 0x1
    bne lbl_fn_80285FA0_00000E90
    lfs f31, lbl_808839F8
    b lbl_fn_80285FA0_00000EA0
lbl_fn_80285FA0_00000E90:
    cmpwi r0, 0x2
    bne lbl_fn_80285FA0_00000EA0
    fdivs f0, f31, f5
    fmuls f31, f31, f0
lbl_fn_80285FA0_00000EA0:
    lwz r4, 0x1580(r31)
    addi r3, r1, 0xe0
    lfs f0, 0x530(r31)
    addi r29, r1, 0xec
    lfs f3, 0x530(r4)
    lfs f5, 0x52c(r4)
    fsubs f2, f3, f0
    lfs f4, 0x52c(r31)
    lfs f3, 0x528(r4)
    fsubs f4, f5, f4
    lfs f0, 0x528(r31)
    stfs f2, 0xe8(r1)
    fsubs f3, f3, f0
    lfs f0, lbl_80883A08
    stfs f4, 0xe4(r1)
    frsp f4, f2
    stfs f3, 0xe0(r1)
    fabs f3, f4
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    frsp f3, f3
    stfs f2, 0xf4(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_80285FA0_00000F24
    lfs f3, 0xec(r1)
    lfs f0, lbl_808839F8
    fcmpo cr0, f3, f0
    ble lbl_fn_80285FA0_00000F18
    lfs f0, lbl_80883A44
    b lbl_fn_80285FA0_00000F1C
lbl_fn_80285FA0_00000F18:
    lfs f0, lbl_80883A48
lbl_fn_80285FA0_00000F1C:
    stfs f0, 0x48(r1)
    b lbl_fn_80285FA0_00000F38
lbl_fn_80285FA0_00000F24:
    fmr f2, f4
    lfs f1, 0xec(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_80285FA0_00000F38:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x138
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808839F8
    addi r4, r1, 0x38
    lfs f29, 0x140(r1)
    mr r5, r4
    lfs f28, 0x13c(r1)
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
    lfs f0, lbl_808839FC
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0xf4(r1)
    stfs f3, 0x198(r1)
    stfs f3, 0x19c(r1)
    stfs f3, 0x1a0(r1)
    stfs f0, 0x1a4(r1)
    stfs f13, 0x8(r1)
    stfs f28, 0xc(r1)
    stfs f29, 0x10(r1)
    stfs f13, 0x168(r1)
    stfs f28, 0x16c(r1)
    stfs f29, 0x170(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0x178(r1)
    stfs f11, 0x17c(r1)
    stfs f12, 0x180(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0x188(r1)
    stfs f8, 0x18c(r1)
    stfs f9, 0x190(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0x174(r1)
    stfs f5, 0x184(r1)
    stfs f6, 0x194(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80883A08
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80285FA0_00001054
    lfs f3, 0x3c(r1)
    lfs f0, lbl_808839F8
    fcmpo cr0, f3, f0
    ble lbl_fn_80285FA0_00001044
    lfs f0, lbl_80883A44
    b lbl_fn_80285FA0_00001048
lbl_fn_80285FA0_00001044:
    lfs f0, lbl_80883A48
lbl_fn_80285FA0_00001048:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_80285FA0_00001068
lbl_fn_80285FA0_00001054:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_80285FA0_00001068:
    lfs f4, lbl_808839F8
    addi r3, r1, 0x44
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r31
    psq_st f1, 0x0(r29), 0, 0
    fmr f2, f4
    lfs f0, 0x568(r31)
    fmr f1, f31
    stfs f2, 0xf4(r1)
    addi r4, r1, 0x128
    lfs f3, 0xf0(r1)
    fmuls f2, f0, f30
    stfs f4, 0x4c(r1)
    stfs f3, 0x538(r31)
    bl fn_801426A4
    lwz r3, 0x1590(r31)
    subi r0, r3, 0x1
    stw r0, 0x1590(r31)
lbl_fn_80285FA0_000010B0:
    lwz r0, 0x2e4(r1)
    psq_l f31, 0x2d8(r1), 0, 0
    lfd f31, 0x2d0(r1)
    psq_l f30, 0x2c8(r1), 0, 0
    lfd f30, 0x2c0(r1)
    psq_l f29, 0x2b8(r1), 0, 0
    lfd f29, 0x2b0(r1)
    psq_l f28, 0x2a8(r1), 0, 0
    lfd f28, 0x2a0(r1)
    lwz r31, 0x29c(r1)
    lwz r30, 0x298(r1)
    lwz r29, 0x294(r1)
    mtlr r0
    addi r1, r1, 0x2e0
    blr
}

asm void fn_802868A0(void)
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
    stw r30, 0xe8(r1)
    mr r30, r3
    lfs f4, 0x156c(r3)
    lfs f0, 0x530(r3)
    lfs f3, 0x1564(r3)
    fsubs f5, f4, f0
    lfs f0, 0x528(r3)
    lfs f4, 0x1568(r3)
    fsubs f6, f3, f0
    lfs f3, 0x52c(r3)
    fmuls f0, f5, f5
    fsubs f3, f4, f3
    stfs f6, 0x5c(r1)
    fmadds f1, f6, f6, f0
    stfs f3, 0x60(r1)
    stfs f5, 0x64(r1)
    bl fn_8068B100
    lfs f2, 0x64(r1)
    addi r3, r1, 0x5c
    frsp f31, f1
    lfs f0, lbl_80883A08
    fabs f3, f2
    addi r31, r1, 0x50
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    frsp f3, f3
    stfs f2, 0x58(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_802868A0_000011AC
    lfs f3, 0x50(r1)
    lfs f0, lbl_808839F8
    fcmpo cr0, f3, f0
    ble lbl_fn_802868A0_000011A0
    lfs f0, lbl_80883A44
    b lbl_fn_802868A0_000011A4
lbl_fn_802868A0_000011A0:
    lfs f0, lbl_80883A48
lbl_fn_802868A0_000011A4:
    stfs f0, 0x48(r1)
    b lbl_fn_802868A0_000011C0
lbl_fn_802868A0_000011AC:
    frsp f2, f2
    lfs f1, 0x50(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_802868A0_000011C0:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x78
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808839F8
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
    lfs f0, lbl_808839FC
    psq_l f1, 0x0(r31), 0, 0
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
    lfs f0, lbl_80883A08
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802868A0_000012DC
    lfs f3, 0x3c(r1)
    lfs f0, lbl_808839F8
    fcmpo cr0, f3, f0
    ble lbl_fn_802868A0_000012CC
    lfs f0, lbl_80883A44
    b lbl_fn_802868A0_000012D0
lbl_fn_802868A0_000012CC:
    lfs f0, lbl_80883A48
lbl_fn_802868A0_000012D0:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_802868A0_000012F0
lbl_fn_802868A0_000012DC:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_802868A0_000012F0:
    lfs f2, lbl_808839F8
    addi r3, r1, 0x44
    lfs f0, lbl_80883A80
    addi r4, r1, 0x68
    stfs f2, 0x4c(r1)
    psq_l f1, 0x0(r3), 0, 0
    fcmpo cr0, f31, f0
    stfs f2, 0x58(r1)
    frsp f2, f2
    psq_st f1, 0x0(r31), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x70(r1)
    bge lbl_fn_802868A0_00001360
    mr r3, r30
    li r4, 0x3
    bl fn_8016E970
    li r0, 0x0
    stw r0, 0x1554(r30)
    lwz r4, 0x1580(r30)
    mr r3, r30
    li r5, 0x8
    bl fn_80287400
    cmpwi r3, 0x0
    bne lbl_fn_802868A0_00001394
    lwz r4, 0x1580(r30)
    mr r3, r30
    bl fn_8028702C
    b lbl_fn_802868A0_00001394
lbl_fn_802868A0_00001360:
    lwz r3, 0x55c(r30)
    subi r0, r3, 0x6
    cmplwi r0, 0x1
    ble lbl_fn_802868A0_0000138C
    li r0, 0x3
    stw r0, 0x55c(r30)
    lwz r4, 0x1560(r30)
    mr r3, r30
    li r5, 0x0
    lwz r4, 0x0(r4)
    bl fn_8017039C
lbl_fn_802868A0_0000138C:
    mr r3, r30
    bl fn_802847CC
lbl_fn_802868A0_00001394:
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

asm void fn_80286B78(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x54(r1)
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    stw r31, 0x3c(r1)
    mr r31, r3
    lfs f31, 0x2e4(r3)
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_80286B78_000014D8
    lwz r3, 0x1434(r31)
    lwz r4, 0x12a4(r31)
    lwz r0, 0x5c0(r31)
    cmpwi r3, 0x0
    oris r4, r4, 0x200
    stw r4, 0x12a4(r31)
    clrrwi r0, r0, 1
    stw r0, 0x5c0(r31)
    ble lbl_fn_80286B78_000014BC
    subi r0, r3, 0x1
    stw r0, 0x1434(r31)
    cmpwi r0, 0x1d
    bne lbl_fn_80286B78_000014E0
    li r3, 0x0
    li r4, 0x0
    bl fn_80232B7C
    lfs f0, lbl_808839F8
    li r3, -0x1
    lfs f1, lbl_808839FC
    li r0, 0x1
    stfs f0, 0x1c(r1)
    addi r4, r31, 0x15a4
    addi r5, r31, 0xb0
    addi r7, r1, 0x10
    stfs f0, 0x20(r1)
    addi r8, r1, 0x1c
    addi r9, r1, 0x28
    li r6, 0x0
    stfs f0, 0x24(r1)
    li r10, -0x1
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f1, 0x28(r1)
    stfs f1, 0x2c(r1)
    stfs f1, 0x30(r1)
    stfs f1, 0x34(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x1
    lwz r12, 0x9c(r12)
    mtctr r12
    bctrl
    b lbl_fn_80286B78_000014E0
lbl_fn_80286B78_000014BC:
    ori r0, r4, 0x8000
    stw r0, 0x12a4(r31)
    mr r3, r31
    bl fn_801765D8
    mr r3, r31
    bl fn_800EE360
    b lbl_fn_80286B78_000014E0
lbl_fn_80286B78_000014D8:
    li r0, 0x1e
    stw r0, 0x1434(r31)
lbl_fn_80286B78_000014E0:
    lwz r0, 0x54(r1)
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    lwz r31, 0x3c(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80286CB0(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    stfd f31, 0x110(r1)
    psq_st f31, 0x118(r1), 0, 0
    stfd f30, 0x100(r1)
    psq_st f30, 0x108(r1), 0, 0
    stw r31, 0xfc(r1)
    stw r30, 0xf8(r1)
    mr r30, r4
    stw r29, 0xf4(r1)
    mr r29, r3
    lwz r0, 0x157c(r3)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x2
    beq lbl_fn_80286CB0_0000155C
    li r5, 0x8
    bl fn_80287400
    cmpwi r3, 0x0
    bne lbl_fn_80286CB0_0000184C
    lwz r4, 0x1580(r29)
    mr r3, r29
    bl fn_8028702C
    b lbl_fn_80286CB0_0000184C
lbl_fn_80286CB0_0000155C:
    li r5, 0x7
    bl fn_80287400
    cmpwi r3, 0x0
    bne lbl_fn_80286CB0_0000184C
    lwz r3, 0x14f4(r29)
    li r0, 0x0
    stw r0, 0x14b0(r29)
    cmpwi r3, 0x0
    stw r0, 0x158c(r29)
    beq lbl_fn_80286CB0_0000158C
    lwz r0, 0x68(r3)
    b lbl_fn_80286CB0_00001590
lbl_fn_80286CB0_0000158C:
    li r0, 0x5a
lbl_fn_80286CB0_00001590:
    stw r0, 0x1594(r29)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r29)
    addi r3, r29, 0x151c
    li r4, 0xf
    li r5, 0x0
    bl fn_800CB5C8
    lwz r3, lbl_8087F3C0
    mr r4, r29
    li r5, 0xc8
    li r6, 0x0
    bl fn_80239DAC
    li r0, 0x7
    stw r0, 0x58c(r29)
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    li r0, 0x4
    stw r0, 0x560(r29)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r29)
    addi r31, r1, 0x5c
    addi r3, r1, 0x74
    lfs f0, 0x530(r29)
    psq_l f1, 0x528(r30), 0, 0
    addi r5, r1, 0x50
    psq_st f1, 0x0(r3), 0, 0
    mr r3, r31
    lfs f2, 0x530(r30)
    mr r4, r31
    lfs f5, 0x78(r1)
    fsubs f6, f2, f0
    lfs f4, 0x52c(r29)
    lfs f3, 0x74(r1)
    lfs f0, 0x528(r29)
    fsubs f4, f5, f4
    stfs f2, 0x7c(r1)
    fsubs f0, f3, f0
    fmr f2, f6
    stfs f4, 0x54(r1)
    stfs f0, 0x50(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f6, 0x58(r1)
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x64(r1)
    bl fn_805F98D0
    lfs f2, 0x64(r1)
    addi r30, r1, 0x68
    psq_l f1, 0x0(r31), 0, 0
    fabs f3, f2
    lfs f0, lbl_80883A08
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0x70(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_80286CB0_0000169C
    lfs f3, 0x68(r1)
    lfs f0, lbl_808839F8
    fcmpo cr0, f3, f0
    ble lbl_fn_80286CB0_00001690
    lfs f0, lbl_80883A44
    b lbl_fn_80286CB0_00001694
lbl_fn_80286CB0_00001690:
    lfs f0, lbl_80883A48
lbl_fn_80286CB0_00001694:
    stfs f0, 0x48(r1)
    b lbl_fn_80286CB0_000016B0
lbl_fn_80286CB0_0000169C:
    frsp f2, f2
    lfs f1, 0x68(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_80286CB0_000016B0:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x80
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808839F8
    addi r4, r1, 0x38
    lfs f30, 0x88(r1)
    mr r5, r4
    lfs f31, 0x84(r1)
    addi r3, r1, 0xb0
    lfs f13, 0x80(r1)
    lfs f12, 0x98(r1)
    lfs f11, 0x94(r1)
    lfs f10, 0x90(r1)
    lfs f9, 0xa8(r1)
    lfs f8, 0xa4(r1)
    lfs f7, 0xa0(r1)
    lfs f6, 0xac(r1)
    lfs f5, 0x9c(r1)
    lfs f4, 0x8c(r1)
    lfs f0, lbl_808839FC
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x70(r1)
    stfs f3, 0xe0(r1)
    stfs f3, 0xe4(r1)
    stfs f3, 0xe8(r1)
    stfs f0, 0xec(r1)
    stfs f13, 0x8(r1)
    stfs f31, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f13, 0xb0(r1)
    stfs f31, 0xb4(r1)
    stfs f30, 0xb8(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xc0(r1)
    stfs f11, 0xc4(r1)
    stfs f12, 0xc8(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0xd0(r1)
    stfs f8, 0xd4(r1)
    stfs f9, 0xd8(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0xbc(r1)
    stfs f5, 0xcc(r1)
    stfs f6, 0xdc(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80883A08
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80286CB0_000017CC
    lfs f3, 0x3c(r1)
    lfs f0, lbl_808839F8
    fcmpo cr0, f3, f0
    ble lbl_fn_80286CB0_000017BC
    lfs f0, lbl_80883A44
    b lbl_fn_80286CB0_000017C0
lbl_fn_80286CB0_000017BC:
    lfs f0, lbl_80883A48
lbl_fn_80286CB0_000017C0:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_80286CB0_000017E0
lbl_fn_80286CB0_000017CC:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_80286CB0_000017E0:
    addi r3, r1, 0x44
    lfs f2, lbl_808839F8
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r29, 0xb0
    psq_st f1, 0x534(r29), 0, 0
    li r4, 0x0
    psq_st f1, 0x0(r30), 0, 0
    fmr f1, f2
    stfs f2, 0x4c(r1)
    stfs f2, 0x70(r1)
    stfs f2, 0x534(r29)
    stfs f2, 0x53c(r29)
    bl fn_80097CCC
    lfs f0, lbl_808839FC
    li r0, 0x1
    stw r0, 0x3fc(r29)
    addi r3, r29, 0xb0
    lfs f1, lbl_808839F8
    li r4, 0x0
    stfs f0, 0x2fc(r29)
    li r5, 0x13f
    lfs f2, lbl_80883A38
    li r6, 0x0
    stfs f0, 0x2e8(r29)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
lbl_fn_80286CB0_0000184C:
    lwz r0, 0x124(r1)
    psq_l f31, 0x118(r1), 0, 0
    lfd f31, 0x110(r1)
    psq_l f30, 0x108(r1), 0, 0
    lfd f30, 0x100(r1)
    lwz r31, 0xfc(r1)
    lwz r30, 0xf8(r1)
    lwz r29, 0xf4(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_8028702C(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    stfd f31, 0x110(r1)
    psq_st f31, 0x118(r1), 0, 0
    stfd f30, 0x100(r1)
    psq_st f30, 0x108(r1), 0, 0
    stw r31, 0xfc(r1)
    mr r31, r3
    stw r30, 0xf8(r1)
    stw r29, 0xf4(r1)
    mr r29, r4
    lwz r0, 0x157c(r3)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x4
    beq lbl_fn_8028702C_00001938
    li r5, 0x6
    bl fn_80287400
    cmpwi r3, 0x0
    bne lbl_fn_8028702C_00001C20
    lwz r3, 0x14f4(r31)
    li r0, 0x0
    stw r0, 0x14b0(r31)
    cmpwi r3, 0x0
    stw r0, 0x158c(r31)
    beq lbl_fn_8028702C_000018E8
    lwz r0, 0x68(r3)
    b lbl_fn_8028702C_000018EC
lbl_fn_8028702C_000018E8:
    li r0, 0x5a
lbl_fn_8028702C_000018EC:
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
    b lbl_fn_8028702C_00001C20
lbl_fn_8028702C_00001938:
    li r5, 0x8
    bl fn_80287400
    cmpwi r3, 0x0
    bne lbl_fn_8028702C_00001C20
    li r0, 0x8
    stw r0, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lwz r3, 0x14f4(r31)
    li r0, 0x0
    stw r0, 0x14b0(r31)
    cmpwi r3, 0x0
    stw r0, 0x158c(r31)
    beq lbl_fn_8028702C_0000197C
    lwz r0, 0x68(r3)
    b lbl_fn_8028702C_00001980
lbl_fn_8028702C_0000197C:
    li r0, 0x5a
lbl_fn_8028702C_00001980:
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
    addi r3, r1, 0x74
    psq_l f1, 0x528(r29), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    addi r30, r1, 0x5c
    lfs f2, 0x530(r29)
    addi r5, r1, 0x50
    lfs f0, 0x530(r31)
    mr r3, r30
    lfs f5, 0x78(r1)
    mr r4, r30
    fsubs f6, f2, f0
    lfs f4, 0x52c(r31)
    lfs f3, 0x74(r1)
    lfs f0, 0x528(r31)
    fsubs f4, f5, f4
    stfs f2, 0x7c(r1)
    fsubs f0, f3, f0
    fmr f2, f6
    stfs f4, 0x54(r1)
    stfs f0, 0x50(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f6, 0x58(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x64(r1)
    bl fn_805F98D0
    lfs f2, 0x64(r1)
    addi r29, r1, 0x68
    psq_l f1, 0x0(r30), 0, 0
    fabs f3, f2
    lfs f0, lbl_80883A08
    psq_st f1, 0x0(r29), 0, 0
    frsp f3, f3
    stfs f2, 0x70(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_8028702C_00001A64
    lfs f3, 0x68(r1)
    lfs f0, lbl_808839F8
    fcmpo cr0, f3, f0
    ble lbl_fn_8028702C_00001A58
    lfs f0, lbl_80883A44
    b lbl_fn_8028702C_00001A5C
lbl_fn_8028702C_00001A58:
    lfs f0, lbl_80883A48
lbl_fn_8028702C_00001A5C:
    stfs f0, 0x48(r1)
    b lbl_fn_8028702C_00001A78
lbl_fn_8028702C_00001A64:
    frsp f2, f2
    lfs f1, 0x68(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_8028702C_00001A78:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x80
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808839F8
    addi r4, r1, 0x38
    lfs f30, 0x88(r1)
    mr r5, r4
    lfs f31, 0x84(r1)
    addi r3, r1, 0xb0
    lfs f13, 0x80(r1)
    lfs f12, 0x98(r1)
    lfs f11, 0x94(r1)
    lfs f10, 0x90(r1)
    lfs f9, 0xa8(r1)
    lfs f8, 0xa4(r1)
    lfs f7, 0xa0(r1)
    lfs f6, 0xac(r1)
    lfs f5, 0x9c(r1)
    lfs f4, 0x8c(r1)
    lfs f0, lbl_808839FC
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x70(r1)
    stfs f3, 0xe0(r1)
    stfs f3, 0xe4(r1)
    stfs f3, 0xe8(r1)
    stfs f0, 0xec(r1)
    stfs f13, 0x8(r1)
    stfs f31, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f13, 0xb0(r1)
    stfs f31, 0xb4(r1)
    stfs f30, 0xb8(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xc0(r1)
    stfs f11, 0xc4(r1)
    stfs f12, 0xc8(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0xd0(r1)
    stfs f8, 0xd4(r1)
    stfs f9, 0xd8(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0xbc(r1)
    stfs f5, 0xcc(r1)
    stfs f6, 0xdc(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80883A08
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8028702C_00001B94
    lfs f3, 0x3c(r1)
    lfs f0, lbl_808839F8
    fcmpo cr0, f3, f0
    ble lbl_fn_8028702C_00001B84
    lfs f0, lbl_80883A44
    b lbl_fn_8028702C_00001B88
lbl_fn_8028702C_00001B84:
    lfs f0, lbl_80883A48
lbl_fn_8028702C_00001B88:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_8028702C_00001BA8
lbl_fn_8028702C_00001B94:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_8028702C_00001BA8:
    addi r3, r1, 0x44
    lfs f2, lbl_808839F8
    psq_l f1, 0x0(r3), 0, 0
    li r0, 0x0
    psq_st f1, 0x0(r29), 0, 0
    fmr f1, f2
    addi r3, r31, 0xb0
    li r4, 0x0
    lfs f0, 0x6c(r1)
    stfs f2, 0x4c(r1)
    stfs f2, 0x70(r1)
    stfs f2, 0x534(r31)
    stfs f0, 0x538(r31)
    stfs f2, 0x53c(r31)
    stw r0, 0x1598(r31)
    bl fn_80097CCC
    lfs f0, lbl_808839FC
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_808839F8
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x142
    lfs f2, lbl_80883A38
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
lbl_fn_8028702C_00001C20:
    lwz r0, 0x124(r1)
    psq_l f31, 0x118(r1), 0, 0
    lfd f31, 0x110(r1)
    psq_l f30, 0x108(r1), 0, 0
    lfd f30, 0x100(r1)
    lwz r31, 0xfc(r1)
    lwz r30, 0xf8(r1)
    lwz r29, 0xf4(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}
