#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_14(void);
extern void _restgpr_27(void);
extern void _savegpr_14(void);
extern void _savegpr_27(void);
extern void fn_80050900(void);
extern void fn_80050C38(void);
extern void fn_80056EB0(void);
extern void fn_80058EE4(void);
extern void fn_80084320(void);
extern void fn_800A55D4(void);
extern void fn_800A5648(void);
extern void fn_800A56A8(void);
extern void fn_800A58D0(void);
extern void fn_800A58F8(void);
extern void fn_805F89F0(void);
extern void fn_805F8CA0(void);
extern void fn_805F8E70(void);
extern void fn_805F9050(void);
extern void fn_805F90D0(void);
extern void fn_805F9240(void);
extern void fn_805F93C0(void);
extern void fn_805F94B0(void);
extern void fn_805F95A0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_805F9990(void);
extern void fn_805F99B0(void);
extern void fn_8068A850(void);
extern void fn_8068AD58(void);
extern void fn_8068AE24(void);
extern void fn_8068AE9C(void);
extern void fn_8068AEA4(void);
extern void fn_8068B100(void);

/* External data declarations */
extern u8 lbl_80731038[];
extern u8 lbl_80731040[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087EF70;
extern u32 lbl_80880898;
extern u32 lbl_8088089C;
extern u32 lbl_808808A4;
extern u32 lbl_808808B0;
extern u32 lbl_808808B4;
extern u32 lbl_808808B8;
extern u32 lbl_808808BC;
extern u32 lbl_808808C0;
extern u32 lbl_808808C4;
extern u32 lbl_808808C8;
extern u32 lbl_808808CC;
extern u32 lbl_808808D0;
extern u32 lbl_808808D4;
extern u32 lbl_808808D8;
extern u32 lbl_808808DC;
extern u32 lbl_808808E0;
extern u32 lbl_808808E4;
extern u32 lbl_808808E8;
extern u32 lbl_808808EC;
extern u32 lbl_808808F0;
extern u32 lbl_808808F4;
extern u32 lbl_808808F8;
extern u32 lbl_808808FC;
extern u32 lbl_80880900;
extern u32 lbl_80880904;
extern u32 lbl_80880908;
extern u32 lbl_8088090C;
extern u32 lbl_80880910;
extern u32 lbl_80880914;
extern u32 lbl_80880918;
extern u32 lbl_8088091C;
extern u32 lbl_80880920;
extern u32 lbl_80880924;
extern u32 lbl_80880928;
extern u32 lbl_8088092C;
extern u32 lbl_80880930;
extern u32 lbl_80880934;
extern u32 lbl_80880938;
extern u32 lbl_8088093C;

/* Function declarations */
void fn_8004B378(void);
void fn_8004BF64(void);
void fn_8004C9B4(void);
void fn_8004CB70(void);
void fn_8004CBB0(void);
void fn_8004CCA0(void);
void fn_8004CD5C(void);
void fn_8004CF34(void);
void fn_8004CF3C(void);
void fn_8004D114(void);
void fn_8004D11C(void);
void fn_8004D124(void);
void fn_8004D254(void);
void fn_8004D258(void);
void fn_8004D310(void);
void fn_8004D314(void);
void fn_8004D388(void);
void fn_8004ECC0(void);
void fn_8004ED34(void);
void fn_8004F45C(void);
void fn_8004F50C(void);
void fn_8004F5B8(void);

asm void fn_8004B378(void)
{
    nofralloc
    stwu r1, -0x5f0(r1)
    mflr r0
    stw r0, 0x5f4(r1)
    stfd f31, 0x5e0(r1)
    psq_st f31, 0x5e8(r1), 0, 0
    stfd f30, 0x5d0(r1)
    psq_st f30, 0x5d8(r1), 0, 0
    stfd f29, 0x5c0(r1)
    psq_st f29, 0x5c8(r1), 0, 0
    stfd f28, 0x5b0(r1)
    psq_st f28, 0x5b8(r1), 0, 0
    stfd f27, 0x5a0(r1)
    psq_st f27, 0x5a8(r1), 0, 0
    stfd f26, 0x590(r1)
    psq_st f26, 0x598(r1), 0, 0
    stfd f25, 0x580(r1)
    psq_st f25, 0x588(r1), 0, 0
    stfd f24, 0x570(r1)
    psq_st f24, 0x578(r1), 0, 0
    stw r31, 0x56c(r1)
    mr r31, r3
    stw r30, 0x568(r1)
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8004B378_00000078
    cmpwi r0, 0x2
    beq lbl_fn_8004B378_00000378
    cmpwi r0, 0x1
    beq lbl_fn_8004B378_00000640
    b lbl_fn_8004B378_000009DC
lbl_fn_8004B378_00000078:
    lfs f9, 0x10(r3)
    lfs f0, 0x1c(r3)
    lfs f11, 0xc(r3)
    fsubs f12, f9, f0
    lfs f10, 0x18(r3)
    lfs f9, 0x8(r3)
    lfs f0, 0x14(r3)
    fsubs f10, f11, f10
    addi r3, r1, 0x98
    fsubs f0, f9, f0
    stfs f10, 0x9c(r1)
    stfs f0, 0x98(r1)
    stfs f12, 0xa0(r1)
    bl fn_805F9920
    fabs f9, f1
    lfs f0, lbl_808808B0
    frsp f9, f9
    fcmpo cr0, f9, f0
    bge lbl_fn_8004B378_000000D4
    lfs f9, 0x1c(r31)
    lfs f0, lbl_808808B4
    fadds f0, f9, f0
    stfs f0, 0x1c(r31)
lbl_fn_8004B378_000000D4:
    addi r3, r1, 0x440
    addi r4, r31, 0x8
    addi r5, r31, 0x20
    addi r6, r31, 0x14
    bl fn_805F9240
    lfs f9, 0x1c(r31)
    addi r5, r1, 0x440
    lfs f0, 0x10(r31)
    addi r3, r1, 0x80
    lfs f11, 0x18(r31)
    addi r6, r1, 0x5c
    fsubs f12, f9, f0
    lfs f10, 0xc(r31)
    lfs f9, 0x14(r31)
    mr r4, r3
    lfs f0, 0x8(r31)
    fsubs f10, f11, f10
    fsubs f0, f9, f0
    psq_l f1, 0x0(r5), 0, 0
    psq_l f2, 0x8(r5), 0, 0
    psq_l f3, 0x10(r5), 0, 0
    psq_l f4, 0x18(r5), 0, 0
    psq_l f5, 0x20(r5), 0, 0
    psq_l f6, 0x28(r5), 0, 0
    stfs f0, 0x5c(r1)
    psq_st f2, 0x60(r31), 0, 0
    fmr f2, f12
    stfs f10, 0x60(r1)
    psq_st f1, 0x58(r31), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    psq_st f3, 0x68(r31), 0, 0
    psq_st f4, 0x70(r31), 0, 0
    psq_st f5, 0x78(r31), 0, 0
    psq_st f6, 0x80(r31), 0, 0
    stfs f12, 0x64(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x88(r1)
    bl fn_805F98D0
    lfs f9, 0x88(r1)
    addi r3, r1, 0x8c
    lfs f0, 0x84(r1)
    fneg f10, f9
    lfs f9, 0x80(r1)
    fneg f11, f0
    lfs f0, lbl_808808B0
    fneg f9, f9
    stfs f10, 0x94(r1)
    frsp f2, f10
    stfs f9, 0x8c(r1)
    stfs f11, 0x90(r1)
    fabs f9, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x2c(r31), 0, 0
    frsp f9, f9
    stfs f2, 0x34(r31)
    fcmpo cr0, f9, f0
    bge lbl_fn_8004B378_000001DC
    lfs f9, 0x2c(r31)
    lfs f0, lbl_8088089C
    fcmpo cr0, f9, f0
    ble lbl_fn_8004B378_000001D0
    lfs f0, lbl_808808B8
    b lbl_fn_8004B378_000001D4
lbl_fn_8004B378_000001D0:
    lfs f0, lbl_808808BC
lbl_fn_8004B378_000001D4:
    stfs f0, 0x18(r1)
    b lbl_fn_8004B378_000001F0
lbl_fn_8004B378_000001DC:
    frsp f2, f2
    lfs f1, 0x2c(r31)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x18(r1)
lbl_fn_8004B378_000001F0:
    lfs f0, 0x18(r1)
    addi r3, r1, 0x410
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f9, lbl_8088089C
    addi r4, r1, 0x20
    lfs f10, 0x418(r1)
    mr r5, r4
    lfs f11, 0x414(r1)
    addi r3, r1, 0x3d0
    lfs f12, 0x410(r1)
    lfs f13, 0x428(r1)
    lfs f28, 0x424(r1)
    lfs f29, 0x420(r1)
    lfs f30, 0x438(r1)
    lfs f31, 0x434(r1)
    lfs f27, 0x430(r1)
    lfs f26, 0x43c(r1)
    lfs f25, 0x42c(r1)
    lfs f24, 0x41c(r1)
    lfs f0, lbl_80880898
    stfs f9, 0x400(r1)
    stfs f9, 0x404(r1)
    stfs f9, 0x408(r1)
    stfs f0, 0x40c(r1)
    stfs f12, 0x3d0(r1)
    stfs f11, 0x3d4(r1)
    stfs f10, 0x3d8(r1)
    stfs f29, 0x3e0(r1)
    stfs f28, 0x3e4(r1)
    stfs f13, 0x3e8(r1)
    stfs f27, 0x3f0(r1)
    stfs f31, 0x3f4(r1)
    stfs f30, 0x3f8(r1)
    stfs f24, 0x3dc(r1)
    stfs f25, 0x3ec(r1)
    stfs f26, 0x3fc(r1)
    psq_l f1, 0x2c(r31), 0, 0
    lfs f2, 0x34(r31)
    stfs f12, 0x50(r1)
    stfs f11, 0x54(r1)
    stfs f10, 0x58(r1)
    stfs f29, 0x44(r1)
    stfs f28, 0x48(r1)
    stfs f13, 0x4c(r1)
    stfs f27, 0x38(r1)
    stfs f31, 0x3c(r1)
    stfs f30, 0x40(r1)
    stfs f24, 0x2c(r1)
    stfs f25, 0x30(r1)
    stfs f26, 0x34(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x28(r1)
    bl fn_805F9750
    lfs f2, 0x28(r1)
    lfs f0, lbl_808808B0
    fabs f9, f2
    frsp f9, f9
    fcmpo cr0, f9, f0
    bge lbl_fn_8004B378_0000030C
    lfs f9, 0x24(r1)
    lfs f0, lbl_8088089C
    fcmpo cr0, f9, f0
    ble lbl_fn_8004B378_000002FC
    lfs f0, lbl_808808B8
    b lbl_fn_8004B378_00000300
lbl_fn_8004B378_000002FC:
    lfs f0, lbl_808808BC
lbl_fn_8004B378_00000300:
    fneg f0, f0
    stfs f0, 0x14(r1)
    b lbl_fn_8004B378_00000320
lbl_fn_8004B378_0000030C:
    lfs f1, 0x24(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x14(r1)
lbl_fn_8004B378_00000320:
    lfs f9, 0x1c(r31)
    addi r3, r1, 0x14
    lfs f0, 0x10(r31)
    lfs f11, 0x18(r31)
    fsubs f12, f9, f0
    lfs f2, lbl_8088089C
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x74
    lfs f10, 0xc(r31)
    lfs f9, 0x14(r31)
    lfs f0, 0x8(r31)
    fsubs f10, f11, f10
    psq_st f1, 0x2c(r31), 0, 0
    fsubs f0, f9, f0
    stfs f2, 0x34(r31)
    stfs f2, 0x1c(r1)
    stfs f0, 0x74(r1)
    stfs f10, 0x78(r1)
    stfs f12, 0x7c(r1)
    bl fn_805F9940
    stfs f1, 0x4c(r31)
    b lbl_fn_8004B378_000009DC
lbl_fn_8004B378_00000378:
    lfs f9, 0x10(r3)
    lfs f0, 0x1c(r3)
    lfs f11, 0xc(r3)
    fsubs f13, f9, f0
    lfs f10, 0x18(r3)
    lfs f9, 0x8(r3)
    lfs f0, 0x14(r3)
    fsubs f10, f11, f10
    lfs f12, lbl_8088089C
    fsubs f0, f9, f0
    stfs f10, 0x108(r1)
    lfs f11, lbl_80880898
    stfs f0, 0x104(r1)
    stfs f13, 0x10c(r1)
    stfs f12, 0x84(r3)
    stfs f12, 0x7c(r3)
    stfs f12, 0x78(r3)
    stfs f12, 0x74(r3)
    stfs f12, 0x70(r3)
    stfs f12, 0x68(r3)
    stfs f12, 0x64(r3)
    stfs f12, 0x60(r3)
    stfs f12, 0x5c(r3)
    stfs f11, 0x80(r3)
    stfs f11, 0x6c(r3)
    stfs f11, 0x58(r3)
    lfs f0, 0x104(r1)
    fcmpu cr0, f12, f0
    bne lbl_fn_8004B378_000004E8
    lfs f0, 0x10c(r1)
    fcmpu cr0, f12, f0
    bne lbl_fn_8004B378_000004E8
    lfs f0, 0xc(r3)
    lfs f10, 0x10(r3)
    fneg f13, f0
    lfs f9, 0x8(r3)
    lfs f0, 0x108(r1)
    fneg f10, f10
    fneg f9, f9
    stfs f11, 0xf8(r1)
    fcmpo cr0, f0, f12
    stfs f12, 0xfc(r1)
    stfs f12, 0x100(r1)
    stfs f9, 0xec(r1)
    stfs f10, 0xf0(r1)
    stfs f13, 0xf4(r1)
    stfs f12, 0xe0(r1)
    stfs f12, 0xe4(r1)
    stfs f11, 0xe8(r1)
    stfs f12, 0xd4(r1)
    stfs f11, 0xd8(r1)
    stfs f12, 0xdc(r1)
    cror eq, lt, eq
    bne lbl_fn_8004B378_0000046C
    frsp f0, f10
    lfs f10, lbl_808808A4
    fmuls f9, f11, f10
    fmuls f0, f0, f10
    stfs f9, 0xd8(r1)
    stfs f0, 0xf0(r1)
    b lbl_fn_8004B378_00000484
lbl_fn_8004B378_0000046C:
    frsp f0, f13
    lfs f10, lbl_808808A4
    fmuls f9, f11, f10
    fmuls f0, f0, f10
    stfs f9, 0xe8(r1)
    stfs f0, 0xf4(r1)
lbl_fn_8004B378_00000484:
    lfs f26, 0xf4(r1)
    lfs f25, 0xf0(r1)
    lfs f24, 0xec(r1)
    lfs f13, 0xf8(r1)
    lfs f12, 0xfc(r1)
    lfs f11, 0x100(r1)
    lfs f10, 0xe0(r1)
    lfs f9, 0xe4(r1)
    lfs f0, 0xe8(r1)
    stfs f24, 0x64(r3)
    stfs f25, 0x74(r3)
    stfs f26, 0x84(r3)
    stfs f13, 0x58(r3)
    stfs f12, 0x5c(r3)
    stfs f11, 0x60(r3)
    stfs f10, 0x68(r3)
    stfs f9, 0x6c(r3)
    stfs f0, 0x70(r3)
    lfs f0, 0x104(r1)
    stfs f0, 0x78(r3)
    lfs f0, 0x108(r1)
    stfs f0, 0x7c(r3)
    lfs f0, 0x10c(r1)
    stfs f0, 0x80(r3)
    b lbl_fn_8004B378_000009DC
lbl_fn_8004B378_000004E8:
    lfs f0, 0x104(r1)
    addi r3, r1, 0x104
    lfs f9, 0x10c(r1)
    mr r4, r3
    fneg f10, f0
    lfs f0, lbl_8088089C
    stfs f9, 0xc8(r1)
    stfs f0, 0xcc(r1)
    stfs f10, 0xd0(r1)
    bl fn_805F98D0
    addi r3, r1, 0xc8
    mr r4, r3
    bl fn_805F98D0
    addi r3, r1, 0x104
    addi r4, r1, 0xc8
    addi r5, r1, 0x68
    bl fn_805F99B0
    addi r4, r1, 0x68
    lfs f0, 0x38(r31)
    addi r3, r1, 0xbc
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    fmr f1, f0
    lfs f2, 0x70(r1)
    stfs f2, 0xc4(r1)
    bl fn_8068A850
    lfs f0, 0x38(r31)
    frsp f31, f1
    fmr f1, f0
    bl fn_8068AD58
    frsp f24, f1
    lfs f9, 0xc8(r1)
    lfs f0, 0xd0(r1)
    addi r3, r31, 0x8
    fmuls f11, f31, f9
    lfs f30, 0xc0(r1)
    fmuls f10, f31, f0
    lfs f28, 0xbc(r1)
    fmuls f9, f24, f9
    lfs f12, 0xc4(r1)
    fmadds f29, f24, f28, f11
    addi r4, r1, 0x104
    fmadds f11, f24, f12, f10
    stfs f29, 0xb0(r1)
    fmsubs f10, f31, f28, f9
    fmuls f0, f24, f0
    stfs f11, 0xb8(r1)
    fmuls f13, f24, f30
    fmuls f9, f31, f30
    stfs f10, 0xa4(r1)
    fmsubs f0, f31, f12, f0
    stfs f13, 0xb4(r1)
    stfs f9, 0xa8(r1)
    stfs f0, 0xac(r1)
    bl fn_805F9990
    fneg f25, f1
    addi r3, r31, 0x8
    addi r4, r1, 0xa4
    bl fn_805F9990
    fneg f24, f1
    addi r3, r31, 0x8
    addi r4, r1, 0xb0
    bl fn_805F9990
    fneg f0, f1
    stfs f24, 0x74(r31)
    stfs f0, 0x64(r31)
    stfs f25, 0x84(r31)
    lfs f0, 0xb0(r1)
    stfs f0, 0x58(r31)
    lfs f0, 0xb4(r1)
    stfs f0, 0x5c(r31)
    lfs f0, 0xb8(r1)
    stfs f0, 0x60(r31)
    lfs f0, 0xa4(r1)
    stfs f0, 0x68(r31)
    lfs f0, 0xa8(r1)
    stfs f0, 0x6c(r31)
    lfs f0, 0xac(r1)
    stfs f0, 0x70(r31)
    lfs f0, 0x104(r1)
    stfs f0, 0x78(r31)
    lfs f0, 0x108(r1)
    stfs f0, 0x7c(r31)
    lfs f0, 0x10c(r1)
    stfs f0, 0x80(r31)
    b lbl_fn_8004B378_000009DC
lbl_fn_8004B378_00000640:
    lfs f1, 0x8(r31)
    addi r3, r1, 0x500
    lfs f2, 0xc(r31)
    lfs f3, 0x10(r31)
    bl fn_805F90D0
    addi r3, r1, 0x500
    lfs f9, lbl_8088089C
    psq_l f1, 0x0(r3), 0, 0
    addi r30, r1, 0x4d0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f6, 0x80(r31), 0, 0
    lfs f0, lbl_80880898
    psq_st f1, 0x58(r31), 0, 0
    psq_st f2, 0x60(r31), 0, 0
    psq_st f3, 0x68(r31), 0, 0
    psq_st f4, 0x70(r31), 0, 0
    psq_st f5, 0x78(r31), 0, 0
    stfs f9, 0x4fc(r1)
    stfs f9, 0x4f4(r1)
    stfs f9, 0x4f0(r1)
    stfs f9, 0x4ec(r1)
    stfs f9, 0x4e8(r1)
    stfs f9, 0x4e0(r1)
    stfs f9, 0x4dc(r1)
    stfs f9, 0x4d8(r1)
    stfs f9, 0x4d4(r1)
    stfs f0, 0x4f8(r1)
    stfs f0, 0x4e4(r1)
    stfs f0, 0x4d0(r1)
    lfs f1, 0x34(r31)
    fcmpu cr0, f9, f1
    beq lbl_fn_8004B378_00000720
    addi r3, r1, 0x2e0
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x2e0
    addi r5, r1, 0x2b0
    bl fn_805F89F0
    addi r3, r1, 0x2b0
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
lbl_fn_8004B378_00000720:
    lfs f0, lbl_8088089C
    lfs f1, 0x30(r31)
    fcmpu cr0, f0, f1
    beq lbl_fn_8004B378_00000780
    addi r3, r1, 0x340
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x340
    addi r5, r1, 0x310
    bl fn_805F89F0
    addi r3, r1, 0x310
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
lbl_fn_8004B378_00000780:
    lfs f0, lbl_8088089C
    lfs f1, 0x2c(r31)
    fcmpu cr0, f0, f1
    beq lbl_fn_8004B378_000007E0
    addi r3, r1, 0x3a0
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x3a0
    addi r5, r1, 0x370
    bl fn_805F89F0
    addi r3, r1, 0x370
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
lbl_fn_8004B378_000007E0:
    addi r4, r31, 0x58
    addi r3, r1, 0x4d0
    mr r5, r4
    bl fn_805F89F0
    lfs f9, lbl_8088089C
    addi r3, r1, 0x530
    lfs f0, lbl_80880898
    li r4, 0x7a
    lfs f1, 0x34(r31)
    stfs f9, 0x20(r31)
    stfs f0, 0x24(r31)
    stfs f9, 0x28(r31)
    bl fn_805F8E70
    addi r4, r31, 0x20
    addi r3, r1, 0x530
    mr r5, r4
    bl fn_805F93C0
    lfs f1, lbl_8088089C
    addi r30, r1, 0x4a0
    lfs f9, 0x4c(r31)
    lfs f11, 0x30(r31)
    fcmpu cr0, f1, f1
    lfs f10, 0x2c(r31)
    stfs f1, 0x14(r31)
    lfs f0, lbl_80880898
    stfs f1, 0x18(r31)
    stfs f9, 0x1c(r31)
    stfs f10, 0x8(r1)
    stfs f11, 0xc(r1)
    stfs f1, 0x10(r1)
    stfs f1, 0x4cc(r1)
    stfs f1, 0x4c4(r1)
    stfs f1, 0x4c0(r1)
    stfs f1, 0x4bc(r1)
    stfs f1, 0x4b8(r1)
    stfs f1, 0x4b0(r1)
    stfs f1, 0x4ac(r1)
    stfs f1, 0x4a8(r1)
    stfs f1, 0x4a4(r1)
    stfs f0, 0x4c8(r1)
    stfs f0, 0x4b4(r1)
    stfs f0, 0x4a0(r1)
    beq lbl_fn_8004B378_000008DC
    addi r3, r1, 0x250
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x250
    addi r5, r1, 0x280
    bl fn_805F89F0
    addi r3, r1, 0x280
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
lbl_fn_8004B378_000008DC:
    lfs f0, lbl_8088089C
    lfs f1, 0x8(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_8004B378_0000093C
    addi r3, r1, 0x1f0
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x1f0
    addi r5, r1, 0x220
    bl fn_805F89F0
    addi r3, r1, 0x220
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
lbl_fn_8004B378_0000093C:
    lfs f0, lbl_8088089C
    lfs f1, 0xc(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_8004B378_0000099C
    addi r3, r1, 0x190
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x190
    addi r5, r1, 0x1c0
    bl fn_805F89F0
    addi r3, r1, 0x1c0
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
lbl_fn_8004B378_0000099C:
    addi r3, r1, 0x530
    psq_l f1, 0x0(r30), 0, 0
    psq_l f2, 0x8(r30), 0, 0
    addi r4, r31, 0x14
    psq_l f3, 0x10(r30), 0, 0
    mr r5, r4
    psq_l f4, 0x18(r30), 0, 0
    psq_l f5, 0x20(r30), 0, 0
    psq_l f6, 0x28(r30), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f4, 0x18(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    psq_st f6, 0x28(r3), 0, 0
    bl fn_805F93C0
lbl_fn_8004B378_000009DC:
    lwz r0, 0x4(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8004B378_000009F4
    cmpwi r0, 0x1
    beq lbl_fn_8004B378_00000A5C
    b lbl_fn_8004B378_00000AC0
lbl_fn_8004B378_000009F4:
    lfs f9, 0x50(r31)
    addi r3, r1, 0x150
    lfs f0, lbl_808808C0
    lfs f4, 0xcc(r31)
    fmuls f1, f0, f9
    lfs f3, 0xc8(r31)
    lfs f2, 0x54(r31)
    bl fn_805F94B0
    addi r3, r1, 0x150
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_l f7, 0x30(r3), 0, 0
    psq_l f8, 0x38(r3), 0, 0
    psq_st f8, 0xc0(r31), 0, 0
    psq_st f1, 0x88(r31), 0, 0
    psq_st f2, 0x90(r31), 0, 0
    psq_st f3, 0x98(r31), 0, 0
    psq_st f4, 0xa0(r31), 0, 0
    psq_st f5, 0xa8(r31), 0, 0
    psq_st f6, 0xb0(r31), 0, 0
    psq_st f7, 0xb8(r31), 0, 0
    b lbl_fn_8004B378_00000AC0
lbl_fn_8004B378_00000A5C:
    lfs f6, 0xcc(r31)
    addi r3, r1, 0x110
    lfs f5, 0xc8(r31)
    lfs f4, 0x48(r31)
    lfs f3, 0x44(r31)
    lfs f2, 0x40(r31)
    lfs f1, 0x3c(r31)
    bl fn_805F95A0
    addi r3, r1, 0x110
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_l f7, 0x30(r3), 0, 0
    psq_l f8, 0x38(r3), 0, 0
    psq_st f8, 0xc0(r31), 0, 0
    psq_st f1, 0x88(r31), 0, 0
    psq_st f2, 0x90(r31), 0, 0
    psq_st f3, 0x98(r31), 0, 0
    psq_st f4, 0xa0(r31), 0, 0
    psq_st f5, 0xa8(r31), 0, 0
    psq_st f6, 0xb0(r31), 0, 0
    psq_st f7, 0xb8(r31), 0, 0
lbl_fn_8004B378_00000AC0:
    psq_l f1, 0x58(r31), 0, 0
    addi r30, r1, 0x470
    psq_l f2, 0x60(r31), 0, 0
    mr r3, r30
    psq_l f3, 0x68(r31), 0, 0
    mr r4, r30
    psq_l f4, 0x70(r31), 0, 0
    psq_l f5, 0x78(r31), 0, 0
    psq_l f6, 0x80(r31), 0, 0
    psq_st f6, 0x28(r30), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    bl fn_805F8CA0
    lwz r0, 0x4(r31)
    psq_l f1, 0x0(r30), 0, 0
    psq_l f2, 0x8(r30), 0, 0
    cmpwi r0, 0x0
    psq_l f3, 0x10(r30), 0, 0
    psq_l f4, 0x18(r30), 0, 0
    psq_l f5, 0x20(r30), 0, 0
    psq_l f6, 0x28(r30), 0, 0
    psq_st f6, 0xf8(r31), 0, 0
    psq_st f1, 0xd0(r31), 0, 0
    psq_st f2, 0xd8(r31), 0, 0
    psq_st f3, 0xe0(r31), 0, 0
    psq_st f4, 0xe8(r31), 0, 0
    psq_st f5, 0xf0(r31), 0, 0
    beq lbl_fn_8004B378_00000B48
    cmpwi r0, 0x1
    beq lbl_fn_8004B378_00000B68
    b lbl_fn_8004B378_00000B94
lbl_fn_8004B378_00000B48:
    lfs f1, 0x50(r31)
    addi r3, r31, 0x100
    lfs f2, 0x54(r31)
    addi r4, r31, 0x58
    lfs f3, 0xc8(r31)
    lfs f4, 0xcc(r31)
    bl fn_8004F50C
    b lbl_fn_8004B378_00000B94
lbl_fn_8004B378_00000B68:
    lfs f1, 0x3c(r31)
    addi r3, r31, 0x100
    lfs f2, 0x40(r31)
    addi r4, r31, 0x58
    lfs f3, 0x44(r31)
    li r5, 0x1
    lfs f4, 0x48(r31)
    lfs f5, 0xc8(r31)
    lfs f6, 0xcc(r31)
    lfs f7, lbl_80880898
    bl fn_8004F5B8
lbl_fn_8004B378_00000B94:
    lwz r0, 0x5f4(r1)
    psq_l f31, 0x5e8(r1), 0, 0
    lfd f31, 0x5e0(r1)
    psq_l f30, 0x5d8(r1), 0, 0
    lfd f30, 0x5d0(r1)
    psq_l f29, 0x5c8(r1), 0, 0
    lfd f29, 0x5c0(r1)
    psq_l f28, 0x5b8(r1), 0, 0
    lfd f28, 0x5b0(r1)
    psq_l f27, 0x5a8(r1), 0, 0
    lfd f27, 0x5a0(r1)
    psq_l f26, 0x598(r1), 0, 0
    lfd f26, 0x590(r1)
    psq_l f25, 0x588(r1), 0, 0
    lfd f25, 0x580(r1)
    psq_l f24, 0x578(r1), 0, 0
    lfd f24, 0x570(r1)
    lwz r31, 0x56c(r1)
    lwz r30, 0x568(r1)
    mtlr r0
    addi r1, r1, 0x5f0
    blr
}

asm void fn_8004BF64(void)
{
    nofralloc
    stwu r1, -0x300(r1)
    mflr r0
    stw r0, 0x304(r1)
    addi r11, r1, 0x2c0
    stfd f31, 0x2f0(r1)
    psq_st f31, 0x2f8(r1), 0, 0
    stfd f30, 0x2e0(r1)
    psq_st f30, 0x2e8(r1), 0, 0
    stfd f29, 0x2d0(r1)
    psq_st f29, 0x2d8(r1), 0, 0
    stfd f28, 0x2c0(r1)
    psq_st f28, 0x2c8(r1), 0, 0
    bl _savegpr_27
    lfs f5, 0x1c(r3)
    fmr f31, f2
    lfs f4, 0x10(r3)
    fmr f30, f1
    lfs f3, 0x18(r3)
    addi r4, r1, 0x1c4
    fsubs f5, f5, f4
    lfs f0, 0xc(r3)
    addi r5, r1, 0x1b8
    lfs f2, 0x10(r3)
    addi r6, r1, 0x50
    fsubs f4, f3, f0
    stfs f2, 0x1cc(r1)
    addi r30, r1, 0x1ac
    lfs f2, 0x1c(r3)
    mr r31, r3
    psq_l f1, 0x8(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    mr r4, r30
    psq_l f1, 0x14(r3), 0, 0
    addi r28, r3, 0x20
    stfs f2, 0x1c0(r1)
    fmr f2, f5
    lfs f3, 0x14(r3)
    li r29, 0x0
    lfs f0, 0x8(r3)
    mr r3, r30
    stfs f4, 0x54(r1)
    fsubs f0, f3, f0
    psq_st f1, 0x0(r5), 0, 0
    stfs f0, 0x50(r1)
    psq_l f1, 0x0(r6), 0, 0
    stfs f5, 0x58(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x1b4(r1)
    bl fn_805F98D0
    mr r3, r30
    mr r4, r28
    addi r5, r1, 0x1a0
    bl fn_805F99B0
    addi r3, r1, 0x1a0
    bl fn_805F9920
    lfs f0, lbl_808808C4
    fcmpo cr0, f1, f0
    bge lbl_fn_8004BF64_00000CE8
    lfs f3, lbl_8088089C
    lfs f0, lbl_80880898
    stfs f3, 0x1a0(r1)
    stfs f3, 0x1a4(r1)
    stfs f0, 0x1a8(r1)
lbl_fn_8004BF64_00000CE8:
    lwz r3, lbl_8087EF70
    li r30, 0x1f
    li r27, 0x20
    li r4, 0x0
    bl fn_800A58D0
    cmpwi r3, 0x0
    bne lbl_fn_8004BF64_00000D10
    li r30, 0xc
    li r27, 0xd
    b lbl_fn_8004BF64_00000D2C
lbl_fn_8004BF64_00000D10:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    bl fn_800A58F8
    cmpwi r3, 0x0
    beq lbl_fn_8004BF64_00000D2C
    li r30, 0xa
    li r27, 0xb
lbl_fn_8004BF64_00000D2C:
    lwz r3, lbl_8087EF70
    mr r5, r30
    li r4, 0x0
    bl fn_800A55D4
    cmpwi r3, 0x0
    beq lbl_fn_8004BF64_00000DEC
    lwz r3, lbl_8087EF70
    mr r5, r27
    li r4, 0x0
    bl fn_800A55D4
    cmpwi r3, 0x0
    beq lbl_fn_8004BF64_00000DEC
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    bl fn_800A56A8
    fabs f3, f1
    lfs f0, lbl_808808B4
    frsp f3, f3
    fcmpo cr0, f3, f0
    ble lbl_fn_8004BF64_00000FD4
    lfs f0, 0x1b4(r1)
    li r29, 0x1
    lfs f3, 0x1b0(r1)
    fmuls f5, f0, f1
    lfs f0, 0x1ac(r1)
    fmuls f6, f3, f1
    lfs f4, 0x1c4(r1)
    fmuls f7, f0, f1
    lfs f3, 0x1c8(r1)
    fmuls f9, f6, f30
    stfs f7, 0x164(r1)
    fmuls f7, f7, f30
    lfs f0, 0x1cc(r1)
    fmuls f8, f5, f30
    stfs f6, 0x168(r1)
    fadds f3, f3, f9
    stfs f5, 0x16c(r1)
    fadds f0, f0, f8
    fadds f4, f4, f7
    stfs f7, 0x170(r1)
    stfs f9, 0x174(r1)
    stfs f8, 0x178(r1)
    stfs f4, 0x1c4(r1)
    stfs f3, 0x1c8(r1)
    stfs f0, 0x1cc(r1)
    b lbl_fn_8004BF64_00000FD4
lbl_fn_8004BF64_00000DEC:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x0
    li r6, 0x1
    bl fn_800A56A8
    fabs f3, f1
    lfs f0, lbl_808808B4
    frsp f3, f3
    fcmpo cr0, f3, f0
    ble lbl_fn_8004BF64_00000EB4
    lfs f0, 0x1a8(r1)
    li r29, 0x1
    lfs f3, 0x1a4(r1)
    fmuls f8, f0, f1
    lfs f0, 0x1a0(r1)
    fmuls f9, f3, f1
    lfs f7, 0x1c4(r1)
    fmuls f10, f0, f1
    lfs f6, 0x1c8(r1)
    fmuls f12, f9, f30
    lfs f3, 0x1bc(r1)
    fmuls f13, f10, f30
    lfs f4, 0x1b8(r1)
    fmuls f11, f8, f30
    lfs f5, 0x1cc(r1)
    lfs f0, 0x1c0(r1)
    fadds f7, f7, f13
    fadds f6, f6, f12
    stfs f10, 0x14c(r1)
    fadds f5, f5, f11
    fadds f4, f4, f13
    stfs f9, 0x150(r1)
    fadds f3, f3, f12
    fadds f0, f0, f11
    stfs f8, 0x154(r1)
    stfs f13, 0x158(r1)
    stfs f12, 0x15c(r1)
    stfs f11, 0x160(r1)
    stfs f7, 0x1c4(r1)
    stfs f6, 0x1c8(r1)
    stfs f5, 0x1cc(r1)
    stfs f10, 0x134(r1)
    stfs f9, 0x138(r1)
    stfs f8, 0x13c(r1)
    stfs f13, 0x140(r1)
    stfs f12, 0x144(r1)
    stfs f11, 0x148(r1)
    stfs f4, 0x1b8(r1)
    stfs f3, 0x1bc(r1)
    stfs f0, 0x1c0(r1)
lbl_fn_8004BF64_00000EB4:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    bl fn_800A56A8
    fabs f3, f1
    lfs f0, lbl_808808B4
    frsp f3, f3
    fcmpo cr0, f3, f0
    ble lbl_fn_8004BF64_00000F7C
    lfs f0, 0x1b4(r1)
    li r29, 0x1
    lfs f3, 0x1b0(r1)
    fmuls f8, f0, f1
    lfs f0, 0x1ac(r1)
    fmuls f9, f3, f1
    lfs f7, 0x1c4(r1)
    fmuls f10, f0, f1
    lfs f6, 0x1c8(r1)
    fmuls f12, f9, f30
    lfs f3, 0x1bc(r1)
    fmuls f13, f10, f30
    lfs f4, 0x1b8(r1)
    fmuls f11, f8, f30
    lfs f5, 0x1cc(r1)
    lfs f0, 0x1c0(r1)
    fadds f7, f7, f13
    fadds f6, f6, f12
    stfs f10, 0x11c(r1)
    fadds f5, f5, f11
    fadds f4, f4, f13
    stfs f9, 0x120(r1)
    fadds f3, f3, f12
    fadds f0, f0, f11
    stfs f8, 0x124(r1)
    stfs f13, 0x128(r1)
    stfs f12, 0x12c(r1)
    stfs f11, 0x130(r1)
    stfs f7, 0x1c4(r1)
    stfs f6, 0x1c8(r1)
    stfs f5, 0x1cc(r1)
    stfs f10, 0x104(r1)
    stfs f9, 0x108(r1)
    stfs f8, 0x10c(r1)
    stfs f13, 0x110(r1)
    stfs f12, 0x114(r1)
    stfs f11, 0x118(r1)
    stfs f4, 0x1b8(r1)
    stfs f3, 0x1bc(r1)
    stfs f0, 0x1c0(r1)
lbl_fn_8004BF64_00000F7C:
    lwz r3, lbl_8087EF70
    mr r5, r30
    li r4, 0x0
    bl fn_800A5648
    fmr f29, f1
    lwz r3, lbl_8087EF70
    mr r5, r27
    li r4, 0x0
    bl fn_800A5648
    fsubs f4, f29, f1
    lfs f0, lbl_808808B4
    fabs f3, f4
    frsp f3, f3
    fcmpo cr0, f3, f0
    ble lbl_fn_8004BF64_00000FD4
    lfs f3, 0x1c8(r1)
    li r29, 0x1
    lfs f0, 0x1bc(r1)
    fmadds f3, f30, f4, f3
    fmadds f0, f30, f4, f0
    stfs f3, 0x1c8(r1)
    stfs f0, 0x1bc(r1)
lbl_fn_8004BF64_00000FD4:
    lfs f2, 0x1b4(r1)
    addi r3, r1, 0x1ac
    lfs f0, lbl_808808B0
    addi r30, r1, 0x194
    fabs f3, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0x19c(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_8004BF64_00001024
    lfs f3, 0x194(r1)
    lfs f0, lbl_8088089C
    fcmpo cr0, f3, f0
    ble lbl_fn_8004BF64_00001018
    lfs f0, lbl_808808B8
    b lbl_fn_8004BF64_0000101C
lbl_fn_8004BF64_00001018:
    lfs f0, lbl_808808BC
lbl_fn_8004BF64_0000101C:
    stfs f0, 0x48(r1)
    b lbl_fn_8004BF64_00001038
lbl_fn_8004BF64_00001024:
    frsp f2, f2
    lfs f1, 0x194(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_8004BF64_00001038:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x1d0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_8088089C
    addi r4, r1, 0x38
    lfs f28, 0x1d8(r1)
    mr r5, r4
    lfs f29, 0x1d4(r1)
    addi r3, r1, 0x200
    lfs f13, 0x1d0(r1)
    lfs f12, 0x1e8(r1)
    lfs f11, 0x1e4(r1)
    lfs f10, 0x1e0(r1)
    lfs f9, 0x1f8(r1)
    lfs f8, 0x1f4(r1)
    lfs f7, 0x1f0(r1)
    lfs f6, 0x1fc(r1)
    lfs f5, 0x1ec(r1)
    lfs f4, 0x1dc(r1)
    lfs f0, lbl_80880898
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x19c(r1)
    stfs f3, 0x230(r1)
    stfs f3, 0x234(r1)
    stfs f3, 0x238(r1)
    stfs f0, 0x23c(r1)
    stfs f13, 0x8(r1)
    stfs f29, 0xc(r1)
    stfs f28, 0x10(r1)
    stfs f13, 0x200(r1)
    stfs f29, 0x204(r1)
    stfs f28, 0x208(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0x210(r1)
    stfs f11, 0x214(r1)
    stfs f12, 0x218(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0x220(r1)
    stfs f8, 0x224(r1)
    stfs f9, 0x228(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0x20c(r1)
    stfs f5, 0x21c(r1)
    stfs f6, 0x22c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_808808B0
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8004BF64_00001154
    lfs f3, 0x3c(r1)
    lfs f0, lbl_8088089C
    fcmpo cr0, f3, f0
    ble lbl_fn_8004BF64_00001144
    lfs f0, lbl_808808B8
    b lbl_fn_8004BF64_00001148
lbl_fn_8004BF64_00001144:
    lfs f0, lbl_808808BC
lbl_fn_8004BF64_00001148:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_8004BF64_00001168
lbl_fn_8004BF64_00001154:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_8004BF64_00001168:
    addi r3, r1, 0x44
    lfs f2, lbl_8088089C
    psq_l f1, 0x0(r3), 0, 0
    li r4, 0x0
    stfs f2, 0x4c(r1)
    li r5, 0x2
    lwz r3, lbl_8087EF70
    li r6, 0x1
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x19c(r1)
    bl fn_800A56A8
    fabs f3, f1
    lfs f0, lbl_808808B4
    frsp f3, f3
    fcmpo cr0, f3, f0
    ble lbl_fn_8004BF64_00001264
    fneg f4, f1
    lfs f3, lbl_808808C8
    lfs f0, lbl_808808CC
    mr r4, r28
    addi r3, r1, 0x270
    fmuls f3, f3, f4
    fmuls f3, f3, f31
    fdivs f1, f3, f0
    bl fn_805F9050
    lfs f3, 0x1c0(r1)
    addi r4, r1, 0xec
    lfs f0, 0x1cc(r1)
    addi r6, r1, 0xe0
    lfs f5, 0x1bc(r1)
    mr r5, r4
    fsubs f2, f3, f0
    lfs f4, 0x1c8(r1)
    lfs f3, 0x1b8(r1)
    addi r3, r1, 0x270
    lfs f0, 0x1c4(r1)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0xe4(r1)
    stfs f0, 0xe0(r1)
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0xe8(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0xf4(r1)
    bl fn_805F93C0
    lfs f3, 0xf4(r1)
    addi r4, r1, 0xf8
    lfs f0, 0x1cc(r1)
    addi r3, r1, 0x1b8
    lfs f5, 0xf0(r1)
    li r29, 0x1
    fadds f2, f3, f0
    lfs f4, 0x1c8(r1)
    lfs f3, 0xec(r1)
    lfs f0, 0x1c4(r1)
    fadds f4, f5, f4
    stfs f2, 0x100(r1)
    fadds f0, f3, f0
    stfs f4, 0xfc(r1)
    stfs f0, 0xf8(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x1c0(r1)
lbl_fn_8004BF64_00001264:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x3
    li r6, 0x1
    bl fn_800A56A8
    fabs f3, f1
    lfs f0, lbl_808808B4
    frsp f3, f3
    fcmpo cr0, f3, f0
    ble lbl_fn_8004BF64_00001344
    lfs f3, lbl_808808C8
    addi r3, r1, 0x240
    lfs f0, lbl_808808CC
    addi r4, r1, 0x1a0
    fmuls f3, f3, f1
    fmuls f3, f3, f31
    fdivs f1, f3, f0
    bl fn_805F9050
    lfs f3, 0x1c0(r1)
    addi r4, r1, 0xc8
    lfs f0, 0x1cc(r1)
    addi r6, r1, 0xbc
    lfs f5, 0x1bc(r1)
    mr r5, r4
    fsubs f2, f3, f0
    lfs f4, 0x1c8(r1)
    lfs f3, 0x1b8(r1)
    addi r3, r1, 0x240
    lfs f0, 0x1c4(r1)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0xc0(r1)
    stfs f0, 0xbc(r1)
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0xc4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0xd0(r1)
    bl fn_805F93C0
    lfs f3, 0xd0(r1)
    addi r4, r1, 0xd4
    lfs f0, 0x1cc(r1)
    addi r3, r1, 0x1b8
    lfs f5, 0xcc(r1)
    li r29, 0x1
    fadds f2, f3, f0
    lfs f4, 0x1c8(r1)
    lfs f3, 0xc8(r1)
    lfs f0, 0x1c4(r1)
    fadds f4, f5, f4
    stfs f2, 0xdc(r1)
    fadds f0, f3, f0
    stfs f4, 0xd8(r1)
    stfs f0, 0xd4(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x1c0(r1)
lbl_fn_8004BF64_00001344:
    lfs f5, 0x1c0(r1)
    addi r3, r1, 0x188
    lfs f0, 0x1cc(r1)
    lfs f4, 0x1b8(r1)
    fsubs f5, f5, f0
    lfs f3, 0x1c4(r1)
    lfs f0, lbl_8088089C
    fsubs f3, f4, f3
    stfs f5, 0x190(r1)
    stfs f3, 0x188(r1)
    stfs f0, 0x18c(r1)
    bl fn_805F9920
    lfs f0, lbl_808808C4
    fcmpo cr0, f1, f0
    bge lbl_fn_8004BF64_00001398
    lfs f3, lbl_8088089C
    lfs f0, lbl_80880898
    stfs f3, 0x188(r1)
    stfs f3, 0x18c(r1)
    stfs f0, 0x190(r1)
    b lbl_fn_8004BF64_000013A4
lbl_fn_8004BF64_00001398:
    addi r3, r1, 0x188
    mr r4, r3
    bl fn_805F98D0
lbl_fn_8004BF64_000013A4:
    lfs f0, lbl_8088089C
    li r4, 0x0
    stfs f0, 0x17c(r1)
    li r5, 0x0
    lwz r3, lbl_8087EF70
    stfs f0, 0x180(r1)
    stfs f0, 0x184(r1)
    bl fn_800A55D4
    cmpwi r3, 0x0
    beq lbl_fn_8004BF64_00001414
    lfs f4, 0x190(r1)
    lfs f3, 0x18c(r1)
    fmuls f5, f4, f30
    lfs f0, 0x188(r1)
    fmuls f6, f3, f30
    lfs f3, 0x180(r1)
    fmuls f7, f0, f30
    lfs f4, 0x17c(r1)
    lfs f0, 0x184(r1)
    fadds f3, f3, f6
    fadds f4, f4, f7
    stfs f7, 0xb0(r1)
    fadds f0, f0, f5
    stfs f6, 0xb4(r1)
    stfs f5, 0xb8(r1)
    stfs f4, 0x17c(r1)
    stfs f3, 0x180(r1)
    stfs f0, 0x184(r1)
lbl_fn_8004BF64_00001414:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x1
    bl fn_800A55D4
    cmpwi r3, 0x0
    beq lbl_fn_8004BF64_00001474
    lfs f4, 0x190(r1)
    lfs f3, 0x18c(r1)
    fmuls f5, f4, f30
    lfs f0, 0x188(r1)
    fmuls f6, f3, f30
    lfs f3, 0x180(r1)
    fmuls f7, f0, f30
    lfs f4, 0x17c(r1)
    lfs f0, 0x184(r1)
    fsubs f3, f3, f6
    fsubs f4, f4, f7
    stfs f7, 0xa4(r1)
    fsubs f0, f0, f5
    stfs f6, 0xa8(r1)
    stfs f5, 0xac(r1)
    stfs f4, 0x17c(r1)
    stfs f3, 0x180(r1)
    stfs f0, 0x184(r1)
lbl_fn_8004BF64_00001474:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x3
    bl fn_800A55D4
    cmpwi r3, 0x0
    beq lbl_fn_8004BF64_000014F8
    lfs f3, lbl_8088089C
    addi r3, r1, 0x188
    lfs f0, lbl_80880898
    addi r4, r1, 0x80
    stfs f3, 0x80(r1)
    addi r5, r1, 0x8c
    stfs f0, 0x84(r1)
    stfs f3, 0x88(r1)
    bl fn_805F99B0
    lfs f4, 0x94(r1)
    lfs f3, 0x90(r1)
    fmuls f5, f4, f30
    lfs f0, 0x8c(r1)
    fmuls f6, f3, f30
    lfs f3, 0x180(r1)
    fmuls f7, f0, f30
    lfs f4, 0x17c(r1)
    lfs f0, 0x184(r1)
    fadds f3, f3, f6
    fadds f4, f4, f7
    stfs f7, 0x98(r1)
    fadds f0, f0, f5
    stfs f6, 0x9c(r1)
    stfs f5, 0xa0(r1)
    stfs f4, 0x17c(r1)
    stfs f3, 0x180(r1)
    stfs f0, 0x184(r1)
lbl_fn_8004BF64_000014F8:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x2
    bl fn_800A55D4
    cmpwi r3, 0x0
    beq lbl_fn_8004BF64_0000157C
    lfs f3, lbl_8088089C
    addi r3, r1, 0x188
    lfs f0, lbl_80880898
    addi r4, r1, 0x5c
    stfs f3, 0x5c(r1)
    addi r5, r1, 0x68
    stfs f0, 0x60(r1)
    stfs f3, 0x64(r1)
    bl fn_805F99B0
    lfs f4, 0x70(r1)
    lfs f3, 0x6c(r1)
    fmuls f5, f4, f30
    lfs f0, 0x68(r1)
    fmuls f6, f3, f30
    lfs f3, 0x180(r1)
    fmuls f7, f0, f30
    lfs f4, 0x17c(r1)
    lfs f0, 0x184(r1)
    fsubs f3, f3, f6
    fsubs f4, f4, f7
    stfs f7, 0x74(r1)
    fsubs f0, f0, f5
    stfs f6, 0x78(r1)
    stfs f5, 0x7c(r1)
    stfs f4, 0x17c(r1)
    stfs f3, 0x180(r1)
    stfs f0, 0x184(r1)
lbl_fn_8004BF64_0000157C:
    lfs f4, 0x1cc(r1)
    addi r4, r1, 0x1c4
    lfs f3, 0x184(r1)
    addi r5, r1, 0x1b8
    lfs f0, 0x1c0(r1)
    mr r3, r31
    fadds f5, f4, f3
    lfs f6, 0x1c4(r1)
    fadds f0, f0, f3
    lfs f4, 0x17c(r1)
    lfs f3, 0x1b8(r1)
    fadds f8, f6, f4
    fadds f4, f3, f4
    lfs f6, 0x1c8(r1)
    lfs f7, 0x180(r1)
    fmr f2, f5
    lfs f3, 0x1bc(r1)
    fadds f6, f6, f7
    fadds f3, f3, f7
    stfs f2, 0x10(r31)
    fmr f2, f0
    stfs f8, 0x1c4(r1)
    stfs f6, 0x1c8(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f4, 0x1b8(r1)
    stfs f3, 0x1bc(r1)
    psq_st f1, 0x8(r31), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    stfs f5, 0x1cc(r1)
    stfs f0, 0x1c0(r1)
    psq_st f1, 0x14(r31), 0, 0
    stfs f2, 0x1c(r31)
    bl fn_8004B378
    psq_l f31, 0x2f8(r1), 0, 0
    mr r3, r29
    lfd f31, 0x2f0(r1)
    psq_l f30, 0x2e8(r1), 0, 0
    lfd f30, 0x2e0(r1)
    psq_l f29, 0x2d8(r1), 0, 0
    lfd f29, 0x2d0(r1)
    psq_l f28, 0x2c8(r1), 0, 0
    lfd f28, 0x2c0(r1)
    addi r11, r1, 0x2c0
    bl _restgpr_27
    lwz r0, 0x304(r1)
    mtlr r0
    addi r1, r1, 0x300
    blr
}

asm void fn_8004C9B4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, lbl_8087EE98
    cmpwi r0, 0x0
    bne lbl_fn_8004C9B4_000017E8
    lis r5, lbl_80731040@ha
    lis r3, 0x1
    addi r5, r5, lbl_80731040@l
    li r4, 0x3
    mr r6, r5
    subi r3, r3, 0x6fc8
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8004C9B4_000017E4
    li r0, 0x0
    stw r0, 0x0(r3)
    addis r5, r3, 0x1
    addi r7, r3, 0x4058
    stw r0, 0x2004(r3)
    subi r4, r5, 0x6ff8
    cmplw r7, r4
    stw r0, 0x403c(r3)
    stw r0, 0x4040(r3)
    stw r0, 0x4044(r3)
    stw r0, 0x4048(r3)
    bge lbl_fn_8004C9B4_000017C4
    addi r0, r3, 0x4058
    subi r6, r5, 0x7278
    cmplw r0, r4
    li r4, 0x0
    li r0, 0x0
    bgt lbl_fn_8004C9B4_000016C8
    li r4, 0x1
lbl_fn_8004C9B4_000016C8:
    cmpwi r4, 0x0
    beq lbl_fn_8004C9B4_000016D4
    li r0, 0x1
lbl_fn_8004C9B4_000016D4:
    cmpwi r0, 0x0
    beq lbl_fn_8004C9B4_00001784
    addi r4, r6, 0x27f
    li r0, 0x280
    subf r4, r7, r4
    li r5, 0x0
    divwu r4, r4, r0
    mtctr r4
    cmplw r7, r6
    bge lbl_fn_8004C9B4_00001784
lbl_fn_8004C9B4_000016FC:
    stw r5, 0x34(r7)
    stw r5, 0x38(r7)
    stw r5, 0x3c(r7)
    stw r5, 0x40(r7)
    stw r5, 0x84(r7)
    stw r5, 0x88(r7)
    stw r5, 0x8c(r7)
    stw r5, 0x90(r7)
    stw r5, 0xd4(r7)
    stw r5, 0xd8(r7)
    stw r5, 0xdc(r7)
    stw r5, 0xe0(r7)
    stw r5, 0x124(r7)
    stw r5, 0x128(r7)
    stw r5, 0x12c(r7)
    stw r5, 0x130(r7)
    stw r5, 0x174(r7)
    stw r5, 0x178(r7)
    stw r5, 0x17c(r7)
    stw r5, 0x180(r7)
    stw r5, 0x1c4(r7)
    stw r5, 0x1c8(r7)
    stw r5, 0x1cc(r7)
    stw r5, 0x1d0(r7)
    stw r5, 0x214(r7)
    stw r5, 0x218(r7)
    stw r5, 0x21c(r7)
    stw r5, 0x220(r7)
    stw r5, 0x264(r7)
    stw r5, 0x268(r7)
    stw r5, 0x26c(r7)
    stw r5, 0x270(r7)
    addi r7, r7, 0x280
    bdnz lbl_fn_8004C9B4_000016FC
lbl_fn_8004C9B4_00001784:
    addis r4, r3, 0x1
    li r0, 0x50
    subi r5, r4, 0x6ff8
    li r6, 0x0
    addi r4, r5, 0x4f
    subf r4, r7, r4
    divwu r4, r4, r0
    mtctr r4
    cmplw r7, r5
    bge lbl_fn_8004C9B4_000017C4
lbl_fn_8004C9B4_000017AC:
    stw r6, 0x34(r7)
    stw r6, 0x38(r7)
    stw r6, 0x3c(r7)
    stw r6, 0x40(r7)
    addi r7, r7, 0x50
    bdnz lbl_fn_8004C9B4_000017AC
lbl_fn_8004C9B4_000017C4:
    addis r4, r3, 0x1
    li r5, 0x0
    stw r5, -0x6ff8(r4)
    li r0, 0x1
    lfs f0, lbl_808808D0
    stfs f0, -0x6fd4(r4)
    stw r5, -0x6fd0(r4)
    stw r0, -0x6fcc(r4)
lbl_fn_8004C9B4_000017E4:
    stw r3, lbl_8087EE98
lbl_fn_8004C9B4_000017E8:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8004CB70(void)
{
    nofralloc
    lwz r0, 0x0(r3)
    cmplwi r0, 0x800
    blt lbl_fn_8004CB70_0000180C
    li r3, 0x0
    blr
lbl_fn_8004CB70_0000180C:
    lwz r0, 0x0(r3)
    slwi r0, r0, 2
    add r0, r3, r0
    addic. r5, r0, 0x4
    beq lbl_fn_8004CB70_00001824
    stw r4, 0x0(r5)
lbl_fn_8004CB70_00001824:
    lwz r4, 0x0(r3)
    addi r0, r4, 0x1
    stw r0, 0x0(r3)
    li r3, 0x1
    blr
}

asm void fn_8004CBB0(void)
{
    nofralloc
    lwz r0, 0x0(r3)
    addi r6, r3, 0x4
    slwi r0, r0, 2
    add r5, r3, r0
    addi r5, r5, 0x4
    b lbl_fn_8004CBB0_00001854
lbl_fn_8004CBB0_00001850:
    addi r6, r6, 0x4
lbl_fn_8004CBB0_00001854:
    cmplw r6, r5
    beq lbl_fn_8004CBB0_00001868
    lwz r0, 0x0(r6)
    cmplw r0, r4
    bne lbl_fn_8004CBB0_00001850
lbl_fn_8004CBB0_00001868:
    cmplw r6, r5
    beq lbl_fn_8004CBB0_000018AC
    addi r0, r3, 0x4
    subf r0, r0, r6
    srawi r0, r0, 2
    addze r6, r0
    slwi r0, r6, 2
    add r7, r3, r0
    b lbl_fn_8004CBB0_00001898
lbl_fn_8004CBB0_0000188C:
    lwz r0, 0x8(r7)
    addi r6, r6, 0x1
    stwu r0, 0x4(r7)
lbl_fn_8004CBB0_00001898:
    lwz r5, 0x0(r3)
    subi r0, r5, 0x1
    cmplw r6, r0
    blt lbl_fn_8004CBB0_0000188C
    stw r0, 0x0(r3)
lbl_fn_8004CBB0_000018AC:
    lwz r0, 0x2004(r3)
    addi r6, r3, 0x2008
    slwi r0, r0, 2
    add r5, r3, r0
    addi r5, r5, 0x2008
    b lbl_fn_8004CBB0_000018C8
lbl_fn_8004CBB0_000018C4:
    addi r6, r6, 0x4
lbl_fn_8004CBB0_000018C8:
    cmplw r6, r5
    beq lbl_fn_8004CBB0_000018DC
    lwz r0, 0x0(r6)
    cmplw r0, r4
    bne lbl_fn_8004CBB0_000018C4
lbl_fn_8004CBB0_000018DC:
    cmplw r6, r5
    beqlr
    addi r0, r3, 0x2008
    subf r0, r0, r6
    srawi r0, r0, 2
    addze r5, r0
    slwi r0, r5, 2
    add r6, r3, r0
    b lbl_fn_8004CBB0_00001910
lbl_fn_8004CBB0_00001900:
    lwz r0, 0x200c(r6)
    addi r5, r5, 0x1
    stw r0, 0x2008(r6)
    addi r6, r6, 0x4
lbl_fn_8004CBB0_00001910:
    lwz r4, 0x2004(r3)
    subi r0, r4, 0x1
    cmplw r5, r0
    blt lbl_fn_8004CBB0_00001900
    stw r0, 0x2004(r3)
    blr
}

asm void fn_8004CCA0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    addis r11, r3, 0x1
    lfs f0, lbl_808808D4
    stw r0, 0x44(r1)
    li r0, -0x1
    addi r10, r1, 0x14
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stw r0, 0x1c(r1)
    lfs f6, -0x6fdc(r11)
    lfs f5, 0x8(r6)
    fdivs f7, f0, f6
    lfs f4, -0x6fec(r11)
    lfs f1, 0x0(r6)
    lfs f0, -0x6ff4(r11)
    lfs f3, 0x4(r6)
    lfs f2, -0x6ff0(r11)
    fsubs f4, f5, f4
    fsubs f5, f1, f0
    fsubs f1, f3, f2
    fmuls f0, f4, f7
    fmuls f3, f5, f7
    fmuls f2, f1, f7
    stfs f0, 0x10(r1)
    fctiwz f0, f0
    fctiwz f1, f3
    stfs f3, 0x8(r1)
    stfd f1, 0x20(r1)
    stfd f0, 0x28(r1)
    lwz r11, 0x24(r1)
    lwz r0, 0x2c(r1)
    stw r11, 0x14(r1)
    stw r0, 0x18(r1)
    lfs f0, 0xc(r6)
    stfs f2, 0xc(r1)
    fdivs f0, f0, f6
    fctiwz f0, f0
    stfd f0, 0x30(r1)
    lwz r11, 0x34(r1)
    addi r0, r11, 0x1
    stw r0, 0x1c(r1)
    bl fn_8004CD5C
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8004CD5C(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    rlwinm r11, r7, 0, 5, 5
    stw r0, 0x54(r1)
    subis r0, r11, 0x400
    cmplwi r0, 0x0
    stmw r15, 0xc(r1)
    mr r15, r3
    mr r16, r4
    mr r17, r5
    mr r18, r6
    mr r19, r8
    mr r20, r9
    mr r21, r10
    clrlwi r25, r7, 8
    beq lbl_fn_8004CD5C_00001A28
    li r20, -0x1
lbl_fn_8004CD5C_00001A28:
    mr r31, r15
    clrrwi r30, r7, 31
    rlwinm r29, r7, 0, 1, 1
    rlwinm r28, r7, 0, 2, 2
    rlwinm r27, r7, 0, 3, 3
    rlwinm r26, r7, 0, 4, 4
    li r24, 0x0
    li r23, 0x0
    b lbl_fn_8004CD5C_00001B98
lbl_fn_8004CD5C_00001A4C:
    lwz r22, 0x2008(r31)
    cmplw r22, r19
    beq lbl_fn_8004CD5C_00001B90
    addis r0, r30, 0x8000
    cmplwi r0, 0x0
    bne lbl_fn_8004CD5C_00001A84
    lwz r3, 0x8(r22)
    rlwinm r0, r3, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_8004CD5C_00001A84
    rlwinm r3, r3, 0, 1, 1
    subis r0, r3, 0x4000
    cmplwi r0, 0x0
    bne lbl_fn_8004CD5C_00001B90
lbl_fn_8004CD5C_00001A84:
    addis r0, r30, 0x8000
    cmplwi r0, 0x0
    bne lbl_fn_8004CD5C_00001AA0
    lwz r0, 0x8(r22)
    rlwinm r0, r0, 0, 27, 27
    cmplwi r0, 0x10
    beq lbl_fn_8004CD5C_00001B90
lbl_fn_8004CD5C_00001AA0:
    subis r0, r29, 0x4000
    cmplwi r0, 0x0
    bne lbl_fn_8004CD5C_00001ABC
    lwz r0, 0x8(r22)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_8004CD5C_00001B90
lbl_fn_8004CD5C_00001ABC:
    subis r0, r28, 0x2000
    cmplwi r0, 0x0
    bne lbl_fn_8004CD5C_00001AD8
    lwz r0, 0x8(r22)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_8004CD5C_00001B90
lbl_fn_8004CD5C_00001AD8:
    subis r0, r27, 0x1000
    cmplwi r0, 0x0
    bne lbl_fn_8004CD5C_00001AF4
    lwz r0, 0x8(r22)
    rlwinm r0, r0, 0, 27, 27
    cmplwi r0, 0x10
    bne lbl_fn_8004CD5C_00001B90
lbl_fn_8004CD5C_00001AF4:
    subis r0, r26, 0x800
    cmplwi r0, 0x0
    bne lbl_fn_8004CD5C_00001B10
    lwz r0, 0x8(r22)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_8004CD5C_00001B90
lbl_fn_8004CD5C_00001B10:
    subis r0, r26, 0x800
    cmplwi r0, 0x0
    beq lbl_fn_8004CD5C_00001B2C
    lwz r0, 0x8(r22)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_8004CD5C_00001B90
lbl_fn_8004CD5C_00001B2C:
    lwz r0, 0x20(r22)
    and. r0, r25, r0
    bne lbl_fn_8004CD5C_00001B90
    mr r3, r22
    mr r4, r21
    bl fn_80056EB0
    cmpwi r3, 0x0
    beq lbl_fn_8004CD5C_00001B90
    lwz r12, 0x0(r22)
    mr r3, r22
    mr r4, r16
    mr r6, r18
    lwz r12, 0xc(r12)
    mr r7, r25
    mr r8, r20
    subf r5, r24, r17
    mtctr r12
    bctrl
    add r24, r24, r3
    cmpw r24, r17
    blt lbl_fn_8004CD5C_00001B88
    mr r3, r24
    b lbl_fn_8004CD5C_00001BA8
lbl_fn_8004CD5C_00001B88:
    mulli r0, r3, 0x50
    add r16, r16, r0
lbl_fn_8004CD5C_00001B90:
    addi r31, r31, 0x4
    addi r23, r23, 0x1
lbl_fn_8004CD5C_00001B98:
    lwz r0, 0x2004(r15)
    cmplw r23, r0
    blt lbl_fn_8004CD5C_00001A4C
    mr r3, r24
lbl_fn_8004CD5C_00001BA8:
    lmw r15, 0xc(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8004CF34(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_8004CF3C(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    rlwinm r11, r7, 0, 5, 5
    stw r0, 0x54(r1)
    subis r0, r11, 0x400
    cmplwi r0, 0x0
    stmw r15, 0xc(r1)
    mr r15, r3
    mr r16, r4
    mr r17, r5
    mr r18, r6
    mr r19, r8
    mr r20, r9
    mr r21, r10
    clrlwi r25, r7, 8
    beq lbl_fn_8004CF3C_00001C08
    li r20, -0x1
lbl_fn_8004CF3C_00001C08:
    mr r31, r15
    clrrwi r30, r7, 31
    rlwinm r29, r7, 0, 1, 1
    rlwinm r28, r7, 0, 2, 2
    rlwinm r27, r7, 0, 3, 3
    rlwinm r26, r7, 0, 4, 4
    li r24, 0x0
    li r23, 0x0
    b lbl_fn_8004CF3C_00001D78
lbl_fn_8004CF3C_00001C2C:
    lwz r22, 0x2008(r31)
    cmplw r22, r19
    beq lbl_fn_8004CF3C_00001D70
    addis r0, r30, 0x8000
    cmplwi r0, 0x0
    bne lbl_fn_8004CF3C_00001C64
    lwz r3, 0x8(r22)
    rlwinm r0, r3, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_8004CF3C_00001C64
    rlwinm r3, r3, 0, 1, 1
    subis r0, r3, 0x4000
    cmplwi r0, 0x0
    bne lbl_fn_8004CF3C_00001D70
lbl_fn_8004CF3C_00001C64:
    addis r0, r30, 0x8000
    cmplwi r0, 0x0
    bne lbl_fn_8004CF3C_00001C80
    lwz r0, 0x8(r22)
    rlwinm r0, r0, 0, 27, 27
    cmplwi r0, 0x10
    beq lbl_fn_8004CF3C_00001D70
lbl_fn_8004CF3C_00001C80:
    subis r0, r29, 0x4000
    cmplwi r0, 0x0
    bne lbl_fn_8004CF3C_00001C9C
    lwz r0, 0x8(r22)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_8004CF3C_00001D70
lbl_fn_8004CF3C_00001C9C:
    subis r0, r28, 0x2000
    cmplwi r0, 0x0
    bne lbl_fn_8004CF3C_00001CB8
    lwz r0, 0x8(r22)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_8004CF3C_00001D70
lbl_fn_8004CF3C_00001CB8:
    subis r0, r27, 0x1000
    cmplwi r0, 0x0
    bne lbl_fn_8004CF3C_00001CD4
    lwz r0, 0x8(r22)
    rlwinm r0, r0, 0, 27, 27
    cmplwi r0, 0x10
    bne lbl_fn_8004CF3C_00001D70
lbl_fn_8004CF3C_00001CD4:
    subis r0, r26, 0x800
    cmplwi r0, 0x0
    bne lbl_fn_8004CF3C_00001CF0
    lwz r0, 0x8(r22)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_8004CF3C_00001D70
lbl_fn_8004CF3C_00001CF0:
    subis r0, r26, 0x800
    cmplwi r0, 0x0
    beq lbl_fn_8004CF3C_00001D0C
    lwz r0, 0x8(r22)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_8004CF3C_00001D70
lbl_fn_8004CF3C_00001D0C:
    lwz r0, 0x20(r22)
    and. r0, r25, r0
    bne lbl_fn_8004CF3C_00001D70
    mr r3, r22
    mr r4, r21
    bl fn_80056EB0
    cmpwi r3, 0x0
    beq lbl_fn_8004CF3C_00001D70
    lwz r12, 0x0(r22)
    mr r3, r22
    mr r4, r16
    mr r6, r18
    lwz r12, 0x10(r12)
    mr r7, r25
    mr r8, r20
    subf r5, r24, r17
    mtctr r12
    bctrl
    add r24, r24, r3
    cmpw r24, r17
    blt lbl_fn_8004CF3C_00001D68
    mr r3, r24
    b lbl_fn_8004CF3C_00001D88
lbl_fn_8004CF3C_00001D68:
    mulli r0, r3, 0x50
    add r16, r16, r0
lbl_fn_8004CF3C_00001D70:
    addi r31, r31, 0x4
    addi r23, r23, 0x1
lbl_fn_8004CF3C_00001D78:
    lwz r0, 0x2004(r15)
    cmplw r23, r0
    blt lbl_fn_8004CF3C_00001C2C
    mr r3, r24
lbl_fn_8004CF3C_00001D88:
    lmw r15, 0xc(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8004D114(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_8004D11C(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_8004D124(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    addis r4, r3, 0x1
    stw r0, 0x24(r1)
    li r0, 0x0
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    mr r29, r31
    stw r28, 0x10(r1)
    stw r0, -0x6ff8(r4)
    b lbl_fn_8004D124_00001E18
lbl_fn_8004D124_00001DE4:
    lwz r3, 0x4(r29)
    lwz r4, 0x8(r3)
    clrlwi r0, r4, 31
    cmplwi r0, 0x1
    bne lbl_fn_8004D124_00001E10
    rlwinm r0, r4, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_8004D124_00001E10
    addis r4, r31, 0x1
    subi r4, r4, 0x6ff8
    bl fn_80058EE4
lbl_fn_8004D124_00001E10:
    addi r29, r29, 0x4
    addi r30, r30, 0x1
lbl_fn_8004D124_00001E18:
    lwz r0, 0x0(r31)
    cmplw r30, r0
    blt lbl_fn_8004D124_00001DE4
    li r0, 0x0
    stw r0, 0x2004(r31)
    mr r29, r31
    li r28, 0x0
    li r30, -0x1
    b lbl_fn_8004D124_00001EB0
lbl_fn_8004D124_00001E3C:
    lwz r3, 0x4(r29)
    lwz r0, 0x8(r3)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_8004D124_00001EA8
    lwz r0, 0x2004(r31)
    slwi r0, r0, 2
    add r0, r31, r0
    addic. r4, r0, 0x2008
    beq lbl_fn_8004D124_00001E68
    stw r3, 0x0(r4)
lbl_fn_8004D124_00001E68:
    addis r4, r31, 0x1
    lwz r5, 0x2004(r31)
    lwz r0, -0x6ff8(r4)
    addi r5, r5, 0x1
    stw r5, 0x2004(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8004D124_00001E9C
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    subi r4, r4, 0x6ff8
    bctrl
    b lbl_fn_8004D124_00001EA8
lbl_fn_8004D124_00001E9C:
    stw r30, 0x10(r3)
    stw r30, 0x14(r3)
    stw r30, 0x18(r3)
lbl_fn_8004D124_00001EA8:
    addi r29, r29, 0x4
    addi r28, r28, 0x1
lbl_fn_8004D124_00001EB0:
    lwz r0, 0x0(r31)
    cmplw r28, r0
    blt lbl_fn_8004D124_00001E3C
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8004D254(void)
{
    nofralloc
    blr
}

asm void fn_8004D258(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r24, 0x10(r1)
    mr r24, r3
    mr r25, r4
    mr r26, r5
    mr r27, r6
    mr r28, r7
    mr r29, r8
    mr r31, r24
    li r30, 0x0
    b lbl_fn_8004D258_00001F78
lbl_fn_8004D258_00001F14:
    lwz r3, 0x4(r31)
    lwz r4, 0x8(r3)
    clrlwi r0, r4, 31
    cmplwi r0, 0x1
    bne lbl_fn_8004D258_00001F70
    cmpwi r29, 0x0
    beq lbl_fn_8004D258_00001F3C
    rlwinm r0, r4, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_8004D258_00001F70
lbl_fn_8004D258_00001F3C:
    cmpwi r29, 0x0
    bne lbl_fn_8004D258_00001F50
    rlwinm r0, r4, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_8004D258_00001F70
lbl_fn_8004D258_00001F50:
    lwz r12, 0x0(r3)
    mr r4, r25
    mr r5, r26
    mr r6, r27
    lwz r12, 0x18(r12)
    mr r7, r28
    mtctr r12
    bctrl
lbl_fn_8004D258_00001F70:
    addi r31, r31, 0x4
    addi r30, r30, 0x1
lbl_fn_8004D258_00001F78:
    lwz r0, 0x0(r24)
    cmplw r30, r0
    blt lbl_fn_8004D258_00001F14
    lmw r24, 0x10(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8004D310(void)
{
    nofralloc
    blr
}

asm void fn_8004D314(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    li r0, 0x0
    stw r31, 0x5c(r1)
    mr r31, r4
    addi r4, r1, 0x8
    stw r0, 0x3c(r1)
    stw r0, 0x40(r1)
    stw r0, 0x44(r1)
    stw r0, 0x48(r1)
    bl fn_8004D388
    cmpwi r3, 0x0
    beq lbl_fn_8004D314_00001FF8
    cmpwi r31, 0x0
    beq lbl_fn_8004D314_00001FF0
    addi r3, r1, 0x18
    lfs f2, 0x20(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x8(r31)
lbl_fn_8004D314_00001FF0:
    li r3, 0x1
    b lbl_fn_8004D314_00001FFC
lbl_fn_8004D314_00001FF8:
    li r3, 0x0
lbl_fn_8004D314_00001FFC:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_8004D388(void)
{
    nofralloc
    stwu r1, -0x720(r1)
    mflr r0
    stw r0, 0x724(r1)
    addi r11, r1, 0x600
    stfd f31, 0x710(r1)
    psq_st f31, 0x718(r1), 0, 0
    stfd f30, 0x700(r1)
    psq_st f30, 0x708(r1), 0, 0
    stfd f29, 0x6f0(r1)
    psq_st f29, 0x6f8(r1), 0, 0
    stfd f28, 0x6e0(r1)
    psq_st f28, 0x6e8(r1), 0, 0
    stfd f27, 0x6d0(r1)
    psq_st f27, 0x6d8(r1), 0, 0
    stfd f26, 0x6c0(r1)
    psq_st f26, 0x6c8(r1), 0, 0
    stfd f25, 0x6b0(r1)
    psq_st f25, 0x6b8(r1), 0, 0
    stfd f24, 0x6a0(r1)
    psq_st f24, 0x6a8(r1), 0, 0
    stfd f23, 0x690(r1)
    psq_st f23, 0x698(r1), 0, 0
    stfd f22, 0x680(r1)
    psq_st f22, 0x688(r1), 0, 0
    stfd f21, 0x670(r1)
    psq_st f21, 0x678(r1), 0, 0
    stfd f20, 0x660(r1)
    psq_st f20, 0x668(r1), 0, 0
    stfd f19, 0x650(r1)
    psq_st f19, 0x658(r1), 0, 0
    stfd f18, 0x640(r1)
    psq_st f18, 0x648(r1), 0, 0
    stfd f17, 0x630(r1)
    psq_st f17, 0x638(r1), 0, 0
    stfd f16, 0x620(r1)
    psq_st f16, 0x628(r1), 0, 0
    stfd f15, 0x610(r1)
    psq_st f15, 0x618(r1), 0, 0
    stfd f14, 0x600(r1)
    psq_st f14, 0x608(r1), 0, 0
    bl _savegpr_14
    lfs f3, lbl_808808DC
    fmr f16, f1
    stw r3, 0x8(r1)
    mr r25, r7
    fcmpo cr0, f1, f3
    stw r4, 0xc(r1)
    stw r5, 0x10(r1)
    stw r6, 0x14(r1)
    stw r8, 0x18(r1)
    stw r9, 0x1c(r1)
    cror eq, lt, eq
    bne lbl_fn_8004D388_000020EC
    li r3, 0x0
    b lbl_fn_8004D388_000038A0
lbl_fn_8004D388_000020EC:
    psq_l f1, 0x0(r6), 0, 0
    li r0, 0x0
    lfs f2, 0x8(r6)
    addi r14, r1, 0x1f4
    stfs f2, 0x1fc(r1)
    addi r31, r3, 0x4008
    addi r4, r1, 0x200
    lfs f0, lbl_808808D4
    psq_st f1, 0x0(r14), 0, 0
    mr r3, r14
    li r30, 0x0
    stw r0, 0x5a4(r1)
    li r0, 0x0
    psq_l f1, 0x0(r5), 0, 0
    lfs f2, 0x8(r5)
    stw r0, 0x5a0(r1)
    stfs f2, 0x208(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f16, 0x20c(r1)
    stfs f3, 0x1e8(r1)
    stfs f0, 0x1ec(r1)
    stfs f3, 0x1f0(r1)
    bl fn_805F9920
    lfs f0, lbl_808808E0
    fmr f14, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_8004D388_0000217C
    addi r15, r1, 0x110
    psq_l f1, 0x0(r14), 0, 0
    lfs f2, 0x1fc(r1)
    mr r3, r15
    psq_st f1, 0x0(r15), 0, 0
    mr r4, r15
    stfs f2, 0x118(r1)
    bl fn_805F98D0
    b lbl_fn_8004D388_00002180
lbl_fn_8004D388_0000217C:
    addi r15, r1, 0x1e8
lbl_fn_8004D388_00002180:
    fmuls f3, f16, f16
    lfs f4, lbl_808808DC
    lfs f0, lbl_808808E4
    li r0, 0x0
    stw r0, 0x59c(r1)
    addi r3, r1, 0x1dc
    fmuls f0, f0, f3
    lfs f2, 0x8(r15)
    psq_l f1, 0x0(r15), 0, 0
    li r0, 0x0
    psq_st f1, 0x0(r3), 0, 0
    lwz r3, 0x59c(r1)
    fcmpo cr0, f14, f0
    stfs f2, 0x1e4(r1)
    stw r3, 0x32c(r1)
    stw r3, 0x330(r1)
    stw r3, 0x334(r1)
    stw r3, 0x338(r1)
    stw r3, 0x37c(r1)
    stw r3, 0x380(r1)
    stw r3, 0x384(r1)
    stw r3, 0x388(r1)
    stw r3, 0x3cc(r1)
    stw r3, 0x3d0(r1)
    stw r3, 0x3d4(r1)
    stw r3, 0x3d8(r1)
    stw r3, 0x41c(r1)
    stw r3, 0x420(r1)
    stw r3, 0x424(r1)
    stw r3, 0x428(r1)
    stw r3, 0x46c(r1)
    stw r3, 0x470(r1)
    stw r3, 0x474(r1)
    stw r3, 0x478(r1)
    stw r3, 0x4bc(r1)
    stw r3, 0x4c0(r1)
    stw r3, 0x4c4(r1)
    stw r3, 0x4c8(r1)
    stw r3, 0x50c(r1)
    stw r3, 0x510(r1)
    stw r3, 0x514(r1)
    stw r3, 0x518(r1)
    stw r3, 0x55c(r1)
    stw r3, 0x560(r1)
    stw r3, 0x564(r1)
    stw r3, 0x568(r1)
    stfs f4, 0x1d0(r1)
    stfs f4, 0x1d4(r1)
    stfs f4, 0x1d8(r1)
    ble lbl_fn_8004D388_000025C0
    stw r0, 0x2dc(r1)
    addi r4, r1, 0x2a8
    lwz r5, 0x10(r1)
    addi r6, r1, 0x1c4
    stw r0, 0x2e0(r1)
    oris r7, r25, 0x80
    lfs f7, 0x1fc(r1)
    stw r0, 0x2e4(r1)
    lfs f5, 0x1f8(r1)
    stw r0, 0x2e8(r1)
    lfs f3, 0x1f4(r1)
    lfs f6, 0x8(r5)
    lfs f4, 0x4(r5)
    lfs f0, 0x0(r5)
    fadds f6, f7, f6
    fadds f4, f5, f4
    lwz r3, 0x8(r1)
    fadds f0, f3, f0
    lwz r8, 0x18(r1)
    lwz r9, 0x1c(r1)
    stfs f6, 0x1cc(r1)
    stfs f0, 0x1c4(r1)
    stfs f4, 0x1c8(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_8004D388_000025C0
    lwz r3, 0x10(r1)
    addi r5, r1, 0x104
    lwz r4, 0x10(r1)
    addi r14, r1, 0x1f4
    lfs f0, 0x8(r3)
    mr r3, r14
    lfs f3, 0x2b4(r1)
    lfs f5, 0x2b0(r1)
    fsubs f2, f3, f0
    lfs f4, 0x4(r4)
    lfs f0, 0x0(r4)
    lfs f3, 0x2ac(r1)
    fsubs f4, f5, f4
    stfs f2, 0x10c(r1)
    fsubs f0, f3, f0
    stfs f4, 0x108(r1)
    stfs f0, 0x104(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r14), 0, 0
    stfs f2, 0x1fc(r1)
    bl fn_805F9940
    lfs f0, lbl_808808E8
    fmr f14, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_8004D388_000023D8
    addi r3, r1, 0xec
    psq_l f1, 0x0(r14), 0, 0
    lfs f2, 0x1fc(r1)
    mr r4, r3
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0xf4(r1)
    bl fn_805F98D0
    lfs f3, lbl_808808D8
    lfs f0, lbl_808808EC
    fmuls f4, f3, f16
    fmuls f0, f0, f14
    fcmpo cr0, f4, f0
    bge lbl_fn_8004D388_0000234C
    b lbl_fn_8004D388_00002350
lbl_fn_8004D388_0000234C:
    fmr f4, f0
lbl_fn_8004D388_00002350:
    lfs f3, lbl_808808D8
    lfs f0, lbl_808808EC
    fmuls f6, f3, f16
    lfs f3, 0xf4(r1)
    fmuls f0, f0, f14
    fmuls f5, f3, f4
    fcmpo cr0, f6, f0
    bge lbl_fn_8004D388_00002374
    b lbl_fn_8004D388_00002378
lbl_fn_8004D388_00002374:
    fmr f6, f0
lbl_fn_8004D388_00002378:
    lfs f3, lbl_808808D8
    lfs f0, lbl_808808EC
    fmuls f4, f3, f16
    lfs f3, 0xf0(r1)
    fmuls f0, f0, f14
    fmuls f6, f3, f6
    fcmpo cr0, f4, f0
    bge lbl_fn_8004D388_0000239C
    b lbl_fn_8004D388_000023A0
lbl_fn_8004D388_0000239C:
    fmr f4, f0
lbl_fn_8004D388_000023A0:
    lfs f0, 0xec(r1)
    lfs f3, 0x1f8(r1)
    fmuls f7, f0, f4
    lfs f4, 0x1f4(r1)
    lfs f0, 0x1fc(r1)
    fsubs f3, f3, f6
    stfs f7, 0xf8(r1)
    fsubs f4, f4, f7
    fsubs f0, f0, f5
    stfs f6, 0xfc(r1)
    stfs f5, 0x100(r1)
    stfs f4, 0x1f4(r1)
    stfs f3, 0x1f8(r1)
    stfs f0, 0x1fc(r1)
lbl_fn_8004D388_000023D8:
    addi r3, r1, 0x2d0
    addi r4, r1, 0x1e8
    bl fn_805F9990
    lfs f0, lbl_808808F0
    fcmpo cr0, f1, f0
    ble lbl_fn_8004D388_00002424
    lwz r0, 0x2dc(r1)
    cmpwi r0, 0x0
    beq lbl_fn_8004D388_00002400
    stw r0, 0x5a0(r1)
lbl_fn_8004D388_00002400:
    lwz r3, 0x2e0(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8004D388_00002480
    lwz r0, 0x8(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_8004D388_00002480
    ori r30, r30, 0x1
    b lbl_fn_8004D388_00002480
lbl_fn_8004D388_00002424:
    addi r3, r1, 0x2d0
    addi r4, r1, 0x1e8
    bl fn_805F9990
    lfs f0, lbl_808808F4
    fcmpo cr0, f1, f0
    bge lbl_fn_8004D388_00002460
    lwz r3, 0x2e0(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8004D388_00002480
    lwz r0, 0x8(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_8004D388_00002480
    ori r30, r30, 0x100
    b lbl_fn_8004D388_00002480
lbl_fn_8004D388_00002460:
    lwz r3, 0x2e0(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8004D388_00002480
    lwz r0, 0x8(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_8004D388_00002480
    ori r30, r30, 0x20
lbl_fn_8004D388_00002480:
    cmpwi r3, 0x0
    beq lbl_fn_8004D388_000024A0
    lwz r0, 0x8(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_8004D388_000024A0
    ori r30, r30, 0x2
    stw r3, 0x59c(r1)
lbl_fn_8004D388_000024A0:
    lwz r5, 0x2dc(r1)
    addi r15, r1, 0x1d0
    lwz r3, 0x8(r1)
    addi r4, r1, 0x1dc
    cmpwi r5, 0x0
    li r14, 0x0
    addis r3, r3, 0x1
    lwz r3, -0x6fcc(r3)
    beq lbl_fn_8004D388_000025BC
    lwz r0, 0x4(r5)
    rlwinm r0, r0, 0, 23, 23
    cmplwi r0, 0x100
    bne lbl_fn_8004D388_000024FC
    cmpwi r3, 0x0
    ori r14, r14, 0x4
    beq lbl_fn_8004D388_000024E4
    ori r14, r14, 0x1
lbl_fn_8004D388_000024E4:
    addi r3, r1, 0x2d0
    bl fn_805F9990
    lfs f0, lbl_808808F8
    fcmpo cr0, f1, f0
    bge lbl_fn_8004D388_000024FC
    ori r14, r14, 0x8
lbl_fn_8004D388_000024FC:
    lwz r3, 0x2dc(r1)
    lwz r3, 0x4(r3)
    rlwinm r0, r3, 0, 22, 22
    cmplwi r0, 0x200
    bne lbl_fn_8004D388_00002514
    ori r14, r14, 0x10
lbl_fn_8004D388_00002514:
    rlwinm r0, r3, 0, 19, 19
    cmplwi r0, 0x1000
    bne lbl_fn_8004D388_00002538
    addi r3, r1, 0x2ac
    lfs f2, 0x2b4(r1)
    psq_l f1, 0x0(r3), 0, 0
    ori r14, r14, 0x40
    psq_st f1, 0x0(r15), 0, 0
    stfs f2, 0x1d8(r1)
lbl_fn_8004D388_00002538:
    lwz r3, 0x2dc(r1)
    lwz r0, 0x4(r3)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    bne lbl_fn_8004D388_00002564
    addi r3, r1, 0x2ac
    lfs f2, 0x2b4(r1)
    psq_l f1, 0x0(r3), 0, 0
    ori r14, r14, 0x80
    psq_st f1, 0x0(r15), 0, 0
    stfs f2, 0x1d8(r1)
lbl_fn_8004D388_00002564:
    lwz r3, 0x2dc(r1)
    lwz r0, 0x4(r3)
    rlwinm r0, r0, 0, 17, 17
    cmplwi r0, 0x4000
    bne lbl_fn_8004D388_00002590
    addi r3, r1, 0x2ac
    lfs f2, 0x2b4(r1)
    psq_l f1, 0x0(r3), 0, 0
    ori r14, r14, 0x200
    psq_st f1, 0x0(r15), 0, 0
    stfs f2, 0x1d8(r1)
lbl_fn_8004D388_00002590:
    lwz r3, 0x2dc(r1)
    lwz r3, 0x4(r3)
    rlwinm r0, r3, 0, 16, 16
    cmplwi r0, 0x8000
    bne lbl_fn_8004D388_000025A8
    ori r14, r14, 0x400
lbl_fn_8004D388_000025A8:
    rlwinm r3, r3, 0, 13, 13
    subis r0, r3, 0x4
    cmplwi r0, 0x0
    bne lbl_fn_8004D388_000025BC
    ori r14, r14, 0x800
lbl_fn_8004D388_000025BC:
    or r30, r30, r14
lbl_fn_8004D388_000025C0:
    rlwinm r3, r25, 0, 26, 26
    li r0, 0x4
    cmplwi r3, 0x20
    stw r0, 0x5ac(r1)
    bne lbl_fn_8004D388_000025DC
    li r0, 0x8
    stw r0, 0x5ac(r1)
lbl_fn_8004D388_000025DC:
    rlwinm r3, r25, 0, 7, 7
    subis r0, r3, 0x100
    cmplwi r0, 0x0
    bne lbl_fn_8004D388_000026AC
    addi r3, r1, 0x1f4
    bl fn_805F9940
    lfs f0, lbl_808808FC
    fmuls f0, f0, f16
    fdivs f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x578(r1)
    lwz r0, 0x57c(r1)
    cmpwi r0, 0x1
    bge lbl_fn_8004D388_0000261C
    li r0, 0x1
    b lbl_fn_8004D388_0000263C
lbl_fn_8004D388_0000261C:
    addi r3, r1, 0x1f4
    bl fn_805F9940
    lfs f0, lbl_808808FC
    fmuls f0, f0, f16
    fdivs f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x578(r1)
    lwz r0, 0x57c(r1)
lbl_fn_8004D388_0000263C:
    cmpwi r0, 0x8
    ble lbl_fn_8004D388_00002650
    li r0, 0x8
    stw r0, 0x5a8(r1)
    b lbl_fn_8004D388_000026B4
lbl_fn_8004D388_00002650:
    addi r3, r1, 0x1f4
    bl fn_805F9940
    lfs f0, lbl_808808FC
    fmuls f0, f0, f16
    fdivs f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x578(r1)
    lwz r0, 0x57c(r1)
    cmpwi r0, 0x1
    bge lbl_fn_8004D388_00002684
    li r0, 0x1
    stw r0, 0x5a8(r1)
    b lbl_fn_8004D388_000026B4
lbl_fn_8004D388_00002684:
    addi r3, r1, 0x1f4
    bl fn_805F9940
    lfs f0, lbl_808808FC
    fmuls f0, f0, f16
    fdivs f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x578(r1)
    lwz r0, 0x57c(r1)
    stw r0, 0x5a8(r1)
    b lbl_fn_8004D388_000026B4
lbl_fn_8004D388_000026AC:
    li r0, 0x1
    stw r0, 0x5a8(r1)
lbl_fn_8004D388_000026B4:
    lwz r0, 0x5a8(r1)
    lis r4, lbl_80731038@ha
    lfd f3, lbl_80731038@l(r4)
    addi r22, r1, 0x200
    xoris r3, r0, 0x8000
    lis r0, 0x4330
    stw r3, 0x57c(r1)
    addi r21, r1, 0xe0
    lwz r3, 0x8(r1)
    addi r14, r1, 0x228
    stw r0, 0x578(r1)
    li r0, 0x0
    lfs f21, lbl_808808D4
    addis r23, r3, 0x1
    lfd f0, 0x578(r1)
    addi r20, r1, 0x1d0
    lfs f4, 0x1fc(r1)
    fsubs f5, f0, f3
    lfs f0, 0x1f4(r1)
    lfs f3, 0x1f8(r1)
    lfs f25, lbl_80880910
    fdivs f5, f21, f5
    lfs f24, lbl_8088090C
    lfs f23, lbl_80880908
    lfs f22, lbl_80880904
    lfs f26, lbl_808808D8
    lfs f27, lbl_808808DC
    fmuls f0, f0, f5
    lfs f29, lbl_808808E8
    fmuls f4, f4, f5
    lfs f28, lbl_80880914
    fmuls f3, f3, f5
    stfs f0, 0x1b8(r1)
    lfs f0, lbl_808808F8
    stfs f4, 0x1c0(r1)
    lfs f30, lbl_80880918
    stfs f3, 0x1bc(r1)
    lfs f31, lbl_8088091C
    lfs f15, lbl_808808F0
    lfs f14, lbl_808808F4
    stfd f0, 0x590(r1)
    stw r0, 0x598(r1)
    b lbl_fn_8004D388_00003340
lbl_fn_8004D388_00002760:
    addi r3, r1, 0x1b8
    lfs f2, 0x1c0(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x1f4
    psq_st f1, 0x0(r3), 0, 0
    li r29, 0x0
    li r24, 0x0
    stfs f2, 0x1fc(r1)
    b lbl_fn_8004D388_00003328
lbl_fn_8004D388_00002784:
    lfs f2, 0x208(r1)
    li r0, -0x1
    lfs f0, 0x1fc(r1)
    addi r11, r1, 0x1ac
    lfs f5, 0x200(r1)
    mr r4, r31
    fadds f6, f2, f0
    lfs f4, 0x1f4(r1)
    psq_l f1, 0x0(r22), 0, 0
    mr r6, r22
    fadds f8, f5, f4
    lfs f3, 0x204(r1)
    lfs f0, 0x1f8(r1)
    mr r7, r25
    stw r0, 0x38(r1)
    li r0, -0x1
    fadds f7, f3, f0
    lfs f0, 0x20c(r1)
    stw r0, 0x3c(r1)
    li r0, -0x1
    lwz r3, 0x8(r1)
    addi r10, r1, 0x38
    stfs f6, 0x208(r1)
    li r5, 0x100
    lwz r8, 0x18(r1)
    stfs f8, 0x200(r1)
    lwz r9, 0x1c(r1)
    stfs f7, 0x204(r1)
    stw r0, 0x40(r1)
    lfs f9, -0x6fdc(r23)
    lfs f3, -0x6ff4(r23)
    fdivs f0, f0, f9
    lfs f4, -0x6ff0(r23)
    lfs f5, -0x6fec(r23)
    psq_st f1, 0x0(r11), 0, 0
    stfs f2, 0x1b4(r1)
    fctiwz f0, f0
    fdivs f9, f21, f9
    stfd f0, 0x588(r1)
    lwz r11, 0x58c(r1)
    addi r0, r11, 0x1
    stw r0, 0x40(r1)
    fsubs f0, f6, f5
    fsubs f3, f8, f3
    fsubs f4, f7, f4
    fmuls f0, f0, f9
    fmuls f5, f3, f9
    stfs f0, 0x4c(r1)
    fmuls f4, f4, f9
    fctiwz f0, f0
    fctiwz f3, f5
    stfs f5, 0x44(r1)
    stfd f3, 0x578(r1)
    stfd f0, 0x580(r1)
    lwz r11, 0x57c(r1)
    lwz r0, 0x584(r1)
    stfs f4, 0x48(r1)
    stw r11, 0x38(r1)
    stw r0, 0x3c(r1)
    bl fn_8004CD5C
    cmpwi r3, 0x0
    mr r19, r3
    beq lbl_fn_8004D388_00003334
    lfs f20, lbl_80880900
    mr r15, r31
    li r28, -0x1
    li r16, 0x4
    li r17, 0x0
    b lbl_fn_8004D388_00002950
lbl_fn_8004D388_00002898:
    lwz r3, 0x34(r15)
    lwz r0, 0x4(r3)
    rlwinm r0, r0, 0, 21, 21
    cmplwi r0, 0x400
    bne lbl_fn_8004D388_000028B4
    ori r30, r30, 0x4
    b lbl_fn_8004D388_00002948
lbl_fn_8004D388_000028B4:
    lwz r0, 0x0(r15)
    cmplw r16, r0
    blt lbl_fn_8004D388_00002948
    lfs f3, 0x1b4(r1)
    addi r3, r1, 0x2c
    lfs f0, 0xc(r15)
    lfs f5, 0x1b0(r1)
    fsubs f6, f3, f0
    lfs f4, 0x8(r15)
    lfs f0, 0x4(r15)
    lfs f3, 0x1ac(r1)
    fsubs f4, f5, f4
    stfs f6, 0x34(r1)
    fsubs f0, f3, f0
    stfs f4, 0x30(r1)
    stfs f0, 0x2c(r1)
    bl fn_805F9920
    addi r4, r1, 0x2f8
    fmuls f0, f16, f16
    mtctr r29
    cmpwi r29, 0x0
    ble lbl_fn_8004D388_00002928
lbl_fn_8004D388_0000290C:
    lwz r3, 0x40(r4)
    lwz r0, 0x40(r15)
    cmplw r3, r0
    bne lbl_fn_8004D388_00002920
    fmadds f1, f22, f0, f1
lbl_fn_8004D388_00002920:
    addi r4, r4, 0x50
    bdnz lbl_fn_8004D388_0000290C
lbl_fn_8004D388_00002928:
    lwz r0, 0x0(r15)
    cmplw r16, r0
    bgt lbl_fn_8004D388_0000293C
    fcmpo cr0, f20, f1
    ble lbl_fn_8004D388_00002948
lbl_fn_8004D388_0000293C:
    fmr f20, f1
    mr r16, r0
    mr r28, r17
lbl_fn_8004D388_00002948:
    addi r15, r15, 0x50
    addi r17, r17, 0x1
lbl_fn_8004D388_00002950:
    cmpw r17, r19
    blt lbl_fn_8004D388_00002898
    cmpwi r28, 0x0
    blt lbl_fn_8004D388_00003334
    mulli r0, r28, 0x50
    lfs f19, lbl_808808DC
    lfs f18, lbl_80880900
    mr r18, r31
    li r27, 0x0
    add r16, r31, r0
    addi r17, r16, 0x28
    li r26, -0x1
    li r15, 0x0
    b lbl_fn_8004D388_00002A38
lbl_fn_8004D388_00002988:
    lwz r3, 0x34(r18)
    lwz r0, 0x4(r3)
    rlwinm r0, r0, 0, 21, 21
    cmplwi r0, 0x400
    beq lbl_fn_8004D388_00002A30
    cmpw r15, r28
    beq lbl_fn_8004D388_00002A30
    lwz r0, 0x0(r18)
    cmplwi r0, 0x1
    bne lbl_fn_8004D388_00002A30
    lfs f3, 0x1b4(r1)
    addi r3, r1, 0x20
    lfs f0, 0xc(r18)
    lfs f5, 0x1b0(r1)
    fsubs f6, f3, f0
    lfs f4, 0x8(r18)
    lfs f0, 0x4(r18)
    lfs f3, 0x1ac(r1)
    fsubs f4, f5, f4
    stfs f6, 0x28(r1)
    fsubs f0, f3, f0
    stfs f4, 0x24(r1)
    stfs f0, 0x20(r1)
    bl fn_805F9920
    fcmpo cr0, f18, f1
    fmr f17, f1
    ble lbl_fn_8004D388_00002A30
    addi r3, r18, 0x28
    addi r4, r1, 0x1e8
    bl fn_805F9990
    fcmpo cr0, f1, f23
    bge lbl_fn_8004D388_00002A30
    mr r3, r17
    addi r4, r18, 0x28
    bl fn_805F9990
    fcmpo cr0, f1, f24
    ble lbl_fn_8004D388_00002A30
    fcmpo cr0, f1, f25
    bge lbl_fn_8004D388_00002A30
    fmr f18, f17
    mr r26, r15
    fmr f19, f1
lbl_fn_8004D388_00002A30:
    addi r18, r18, 0x50
    addi r15, r15, 0x1
lbl_fn_8004D388_00002A38:
    cmpw r15, r19
    blt lbl_fn_8004D388_00002988
    addi r3, r16, 0x28
    addi r4, r1, 0x1e8
    bl fn_805F9990
    addi r3, r1, 0x2f8
    lwz r0, 0x0(r16)
    mr r4, r3
    stwux r0, r3, r24
    fmr f17, f1
    add r5, r4, r24
    lfs f2, 0xc(r16)
    li r6, -0x1
    psq_l f1, 0x4(r16), 0, 0
    li r7, 0x0
    psq_st f1, 0x4(r3), 0, 0
    stfs f2, 0xc(r3)
    lfs f2, 0x18(r16)
    psq_l f1, 0x10(r16), 0, 0
    psq_st f1, 0x10(r3), 0, 0
    stfs f2, 0x18(r3)
    lfs f2, 0x24(r16)
    psq_l f1, 0x1c(r16), 0, 0
    psq_st f1, 0x1c(r3), 0, 0
    stfs f2, 0x24(r3)
    lfs f2, 0x30(r16)
    psq_l f1, 0x28(r16), 0, 0
    psq_st f1, 0x28(r3), 0, 0
    stfs f2, 0x30(r3)
    lwz r0, 0x34(r16)
    stw r0, 0x34(r3)
    lwz r0, 0x38(r16)
    stw r0, 0x38(r3)
    lwz r0, 0x3c(r16)
    stw r0, 0x3c(r3)
    lwz r0, 0x40(r16)
    stw r0, 0x40(r3)
    lfs f2, 0x4c(r16)
    psq_l f1, 0x44(r16), 0, 0
    psq_st f1, 0x44(r3), 0, 0
    stfs f2, 0x4c(r3)
    lwz r0, 0x40(r5)
    mtctr r29
    cmpwi r29, 0x0
    ble lbl_fn_8004D388_00002B0C
lbl_fn_8004D388_00002AEC:
    lwz r3, 0x40(r4)
    cmplw r3, r0
    bne lbl_fn_8004D388_00002B00
    mr r6, r7
    b lbl_fn_8004D388_00002B0C
lbl_fn_8004D388_00002B00:
    addi r4, r4, 0x50
    addi r7, r7, 0x1
    bdnz lbl_fn_8004D388_00002AEC
lbl_fn_8004D388_00002B0C:
    cmpwi r6, 0x0
    blt lbl_fn_8004D388_00002C5C
    mulli r0, r28, 0x50
    add r16, r31, r0
    lwzx r0, r31, r0
    cmplwi r0, 0x1
    bne lbl_fn_8004D388_00002C50
    fcmpo cr0, f17, f23
    bge lbl_fn_8004D388_00002C5C
    cmpwi r29, 0x2
    blt lbl_fn_8004D388_00002C5C
    addi r19, r1, 0x2f8
    addi r18, r16, 0x28
    li r15, -0x1
    li r17, 0x0
    b lbl_fn_8004D388_00002BAC
lbl_fn_8004D388_00002B4C:
    lwz r0, 0x0(r19)
    cmplwi r0, 0x1
    bne lbl_fn_8004D388_00002BA4
    lwz r3, 0x40(r19)
    lwz r0, 0x40(r16)
    cmplw r3, r0
    beq lbl_fn_8004D388_00002BA4
    addi r3, r19, 0x28
    addi r4, r1, 0x1e8
    bl fn_805F9990
    fcmpo cr0, f1, f23
    bge lbl_fn_8004D388_00002BA4
    mr r3, r18
    addi r4, r19, 0x28
    bl fn_805F9990
    fcmpo cr0, f1, f24
    ble lbl_fn_8004D388_00002BA4
    fcmpo cr0, f1, f25
    bge lbl_fn_8004D388_00002BA4
    fmr f19, f1
    mr r15, r17
    b lbl_fn_8004D388_00002BB4
lbl_fn_8004D388_00002BA4:
    addi r19, r19, 0x50
    addi r17, r17, 0x1
lbl_fn_8004D388_00002BAC:
    cmpw r17, r29
    blt lbl_fn_8004D388_00002B4C
lbl_fn_8004D388_00002BB4:
    cmpwi r15, 0x0
    blt lbl_fn_8004D388_00002C5C
    cntlzw r0, r28
    addi r4, r1, 0x2f8
    srwi r26, r0, 5
    li r27, 0x1
    mulli r0, r15, 0x50
    lwzux r0, r4, r0
    mulli r3, r26, 0x50
    stwux r0, r3, r31
    lfs f2, 0xc(r4)
    psq_l f1, 0x4(r4), 0, 0
    psq_st f1, 0x4(r3), 0, 0
    stfs f2, 0xc(r3)
    lfs f2, 0x18(r4)
    psq_l f1, 0x10(r4), 0, 0
    psq_st f1, 0x10(r3), 0, 0
    stfs f2, 0x18(r3)
    lfs f2, 0x24(r4)
    psq_l f1, 0x1c(r4), 0, 0
    psq_st f1, 0x1c(r3), 0, 0
    stfs f2, 0x24(r3)
    lfs f2, 0x30(r4)
    psq_l f1, 0x28(r4), 0, 0
    psq_st f1, 0x28(r3), 0, 0
    stfs f2, 0x30(r3)
    lwz r0, 0x34(r4)
    stw r0, 0x34(r3)
    lwz r0, 0x38(r4)
    stw r0, 0x38(r3)
    lwz r0, 0x3c(r4)
    stw r0, 0x3c(r3)
    lwz r0, 0x40(r4)
    stw r0, 0x40(r3)
    lfs f2, 0x4c(r4)
    psq_l f1, 0x44(r4), 0, 0
    psq_st f1, 0x44(r3), 0, 0
    stfs f2, 0x4c(r3)
    b lbl_fn_8004D388_00002C5C
lbl_fn_8004D388_00002C50:
    rlwinm r0, r25, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_8004D388_00003334
lbl_fn_8004D388_00002C5C:
    cmpwi r26, 0x0
    li r0, 0x1
    stw r0, 0x5a4(r1)
    li r15, 0x1
    addi r29, r29, 0x1
    addi r24, r24, 0x50
    blt lbl_fn_8004D388_00002FE0
    mulli r0, r28, 0x50
    add r16, r31, r0
    lwzx r0, r31, r0
    cmplwi r0, 0x1
    bne lbl_fn_8004D388_00002FE0
    fcmpo cr0, f17, f23
    bge lbl_fn_8004D388_00002FE0
    fmr f1, f19
    bl fn_8068AE9C
    frsp f0, f1
    fmuls f1, f26, f0
    bl fn_8068A850
    mulli r0, r26, 0x50
    lfs f7, 0x30(r16)
    lfs f5, 0x2c(r16)
    frsp f18, f1
    lfs f3, 0x28(r16)
    addi r3, r1, 0x1a0
    add r4, r31, r0
    lfs f6, 0x30(r4)
    lfs f4, 0x2c(r4)
    lfs f0, 0x28(r4)
    fadds f6, f7, f6
    fadds f4, f5, f4
    fadds f0, f3, f0
    stfs f6, 0x1a8(r1)
    stfs f0, 0x1a0(r1)
    stfs f4, 0x1a4(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f28
    ble lbl_fn_8004D388_00002FE0
    addi r3, r1, 0x1a0
    mr r4, r3
    bl fn_805F98D0
    lfs f3, 0x1e4(r1)
    cmpwi r27, 0x0
    lfs f0, 0x1dc(r1)
    stfs f0, 0x194(r1)
    stfs f27, 0x198(r1)
    stfs f3, 0x19c(r1)
    bne lbl_fn_8004D388_00002D88
    addi r3, r1, 0x194
    bl fn_805F9920
    fcmpo cr0, f1, f28
    ble lbl_fn_8004D388_00002FE0
    addi r3, r1, 0x194
    lfs f2, 0x19c(r1)
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r21
    psq_st f1, 0x0(r21), 0, 0
    mr r4, r21
    stfs f2, 0xe8(r1)
    bl fn_805F98D0
    lfs f4, 0x1a8(r1)
    mr r3, r21
    lfs f3, 0x1a4(r1)
    addi r4, r1, 0xd4
    lfs f0, 0x1a0(r1)
    fneg f4, f4
    fneg f3, f3
    fneg f0, f0
    stfs f4, 0xdc(r1)
    stfs f0, 0xd4(r1)
    stfs f3, 0xd8(r1)
    bl fn_805F9990
    fcmpo cr0, f1, f18
    cror eq, gt, eq
    bne lbl_fn_8004D388_00002FE0
lbl_fn_8004D388_00002D88:
    mulli r0, r28, 0x50
    addi r6, r1, 0x240
    addi r4, r1, 0x1e8
    addi r5, r1, 0xc8
    add r3, r31, r0
    lfs f2, 0xc(r3)
    psq_l f1, 0x4(r3), 0, 0
    addi r3, r3, 0x28
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x248(r1)
    stfs f27, 0x244(r1)
    bl fn_805F99B0
    addi r3, r1, 0xc8
    lfs f2, 0xd0(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x24c
    mulli r0, r26, 0x50
    psq_st f1, 0x0(r3), 0, 0
    addi r4, r1, 0x1e8
    stfs f2, 0x254(r1)
    addi r5, r1, 0xbc
    add r3, r31, r0
    lfs f2, 0xc(r3)
    psq_l f1, 0x4(r3), 0, 0
    addi r3, r3, 0x28
    psq_st f1, 0x0(r14), 0, 0
    stfs f2, 0x230(r1)
    stfs f27, 0x22c(r1)
    bl fn_805F99B0
    mulli r0, r28, 0x50
    addi r3, r1, 0xbc
    psq_l f1, 0x0(r3), 0, 0
    addi r4, r1, 0x234
    lfs f2, 0xc4(r1)
    addi r3, r1, 0x188
    psq_st f1, 0x0(r4), 0, 0
    add r6, r31, r0
    mr r4, r14
    li r5, 0x0
    stfs f2, 0x23c(r1)
    lfs f2, 0x18(r6)
    psq_l f1, 0x10(r6), 0, 0
    mr r6, r3
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x190(r1)
    stfs f27, 0x18c(r1)
    bl fn_80050900
    lfs f0, 0x20c(r1)
    fmuls f0, f0, f0
    fcmpo cr0, f1, f0
    bge lbl_fn_8004D388_00002FE0
    addi r3, r1, 0x240
    mr r4, r14
    addi r5, r1, 0x210
    bl fn_80050C38
    lfs f3, 0x218(r1)
    addi r3, r1, 0x158
    lfs f0, 0x224(r1)
    lfs f4, 0x214(r1)
    fadds f5, f3, f0
    lfs f0, 0x220(r1)
    lfs f3, 0x210(r1)
    fadds f6, f4, f0
    lfs f0, 0x21c(r1)
    fmuls f8, f5, f26
    fadds f7, f3, f0
    lfs f3, 0x248(r1)
    fmuls f9, f6, f26
    lfs f0, 0x244(r1)
    fsubs f11, f3, f8
    fmuls f10, f7, f26
    fsubs f12, f0, f9
    lfs f0, 0x230(r1)
    lfs f4, 0x240(r1)
    fsubs f13, f0, f8
    lfs f3, 0x22c(r1)
    lfs f0, 0x228(r1)
    fsubs f3, f3, f9
    stfs f7, 0xb0(r1)
    fsubs f4, f4, f10
    fsubs f0, f0, f10
    stfs f6, 0xb4(r1)
    fadds f7, f11, f13
    fadds f19, f12, f3
    stfs f5, 0xb8(r1)
    fadds f6, f4, f0
    stfs f10, 0x17c(r1)
    stfs f9, 0x180(r1)
    stfs f8, 0x184(r1)
    stfs f4, 0x170(r1)
    stfs f12, 0x174(r1)
    stfs f11, 0x178(r1)
    stfs f0, 0x164(r1)
    stfs f3, 0x168(r1)
    stfs f13, 0x16c(r1)
    stfs f6, 0x158(r1)
    stfs f19, 0x15c(r1)
    stfs f7, 0x160(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f28
    ble lbl_fn_8004D388_00002FE0
    addi r3, r1, 0x158
    addi r4, r1, 0x1a0
    bl fn_805F9990
    fcmpo cr0, f1, f27
    ble lbl_fn_8004D388_00002FE0
    lfs f0, 0x20c(r1)
    addi r3, r1, 0x98
    lfs f5, 0x204(r1)
    fadds f3, f29, f0
    lfs f0, 0x204(r1)
    lfs f10, 0x1a8(r1)
    fsubs f0, f0, f5
    lfs f8, 0x1a0(r1)
    fdivs f11, f3, f18
    lfs f7, 0x184(r1)
    lfs f6, 0x17c(r1)
    lfs f9, 0x1a4(r1)
    stfs f5, 0x150(r1)
    lfs f4, 0x208(r1)
    fmuls f10, f10, f11
    lfs f3, 0x200(r1)
    fmuls f8, f8, f11
    stfs f0, 0x9c(r1)
    fmuls f5, f9, f11
    fadds f7, f10, f7
    fadds f6, f8, f6
    stfs f10, 0xac(r1)
    fsubs f4, f4, f7
    stfs f8, 0xa4(r1)
    fsubs f3, f3, f6
    stfs f5, 0xa8(r1)
    stfs f6, 0x14c(r1)
    stfs f7, 0x154(r1)
    stfs f3, 0x98(r1)
    stfs f4, 0xa0(r1)
    bl fn_805F9920
    lfs f0, 0x20c(r1)
    fmuls f0, f0, f0
    fcmpo cr0, f1, f0
    bge lbl_fn_8004D388_00002FE0
    addi r3, r1, 0x14c
    lfs f2, 0x154(r1)
    psq_l f1, 0x0(r3), 0, 0
    li r15, 0x0
    psq_st f1, 0x0(r22), 0, 0
    stfs f2, 0x208(r1)
    stfs f27, 0x1f4(r1)
    stfs f27, 0x1f8(r1)
    stfs f27, 0x1fc(r1)
lbl_fn_8004D388_00002FE0:
    cmpwi r15, 0x0
    beq lbl_fn_8004D388_0000315C
    fcmpo cr0, f17, f26
    ble lbl_fn_8004D388_00003070
    mulli r0, r28, 0x50
    add r15, r31, r0
    lwz r3, 0x38(r15)
    cmpwi r3, 0x0
    beq lbl_fn_8004D388_00003070
    lwz r0, 0x8(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_8004D388_00003070
    lwz r0, 0x0(r15)
    cmplwi r0, 0x1
    bne lbl_fn_8004D388_00003070
    fmr f1, f20
    bl fn_8068B100
    frsp f4, f1
    lfs f0, 0x204(r1)
    fdivs f5, f4, f17
    fmuls f3, f16, f5
    fdivs f3, f3, f4
    fsubs f3, f3, f5
    fadds f3, f3, f30
    fadds f3, f0, f3
    stfs f3, 0x204(r1)
    lfs f0, 0x14(r15)
    fadds f0, f31, f0
    fcmpo cr0, f3, f0
    bge lbl_fn_8004D388_00003060
    stfs f0, 0x204(r1)
lbl_fn_8004D388_00003060:
    stfs f27, 0x1f4(r1)
    stfs f27, 0x1f8(r1)
    stfs f27, 0x1fc(r1)
    b lbl_fn_8004D388_0000315C
lbl_fn_8004D388_00003070:
    mulli r0, r28, 0x50
    lfs f4, 0x208(r1)
    lfs f3, 0x204(r1)
    addi r3, r1, 0x1f4
    lfs f0, 0x200(r1)
    addi r5, r1, 0x8c
    add r15, r31, r0
    lfs f6, 0x18(r15)
    addi r4, r15, 0x1c
    lfs f5, 0x14(r15)
    fsubs f2, f4, f6
    lfs f4, 0x10(r15)
    fsubs f3, f3, f5
    fsubs f0, f0, f4
    stfs f2, 0x1fc(r1)
    stfs f0, 0x8c(r1)
    stfs f3, 0x90(r1)
    psq_l f1, 0x0(r5), 0, 0
    mr r5, r3
    psq_st f1, 0x0(r5), 0, 0
    addi r5, r1, 0x80
    lfs f0, 0x24(r15)
    lfs f3, 0x20(r15)
    fmuls f7, f0, f31
    lfs f0, 0x1c(r15)
    fmuls f3, f3, f31
    stfs f2, 0x94(r1)
    fmuls f0, f0, f31
    fadds f2, f6, f7
    fadds f5, f5, f3
    stfs f0, 0x140(r1)
    fadds f0, f4, f0
    stfs f5, 0x84(r1)
    stfs f0, 0x80(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f7, 0x148(r1)
    stfs f3, 0x144(r1)
    stfs f2, 0x88(r1)
    psq_st f1, 0x0(r22), 0, 0
    stfs f2, 0x208(r1)
    bl fn_805F9990
    lfs f4, 0x24(r15)
    lfs f3, 0x20(r15)
    fmuls f5, f4, f1
    lfs f0, 0x1c(r15)
    fmuls f6, f3, f1
    lfs f3, 0x1f8(r1)
    fmuls f7, f0, f1
    lfs f4, 0x1f4(r1)
    lfs f0, 0x1fc(r1)
    fsubs f3, f3, f6
    fsubs f4, f4, f7
    stfs f7, 0x134(r1)
    fsubs f0, f0, f5
    stfs f6, 0x138(r1)
    stfs f5, 0x13c(r1)
    stfs f4, 0x1f4(r1)
    stfs f3, 0x1f8(r1)
    stfs f0, 0x1fc(r1)
lbl_fn_8004D388_0000315C:
    fcmpo cr0, f17, f15
    ble lbl_fn_8004D388_000031A0
    mulli r0, r28, 0x50
    add r16, r31, r0
    lwz r0, 0x34(r16)
    cmpwi r0, 0x0
    beq lbl_fn_8004D388_0000317C
    stw r0, 0x5a0(r1)
lbl_fn_8004D388_0000317C:
    lwz r4, 0x38(r16)
    cmpwi r4, 0x0
    beq lbl_fn_8004D388_000031FC
    lwz r0, 0x8(r4)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_8004D388_000031FC
    ori r30, r30, 0x1
    b lbl_fn_8004D388_000031FC
lbl_fn_8004D388_000031A0:
    fcmpo cr0, f17, f14
    bge lbl_fn_8004D388_000031D4
    mulli r0, r28, 0x50
    add r16, r31, r0
    lwz r4, 0x38(r16)
    cmpwi r4, 0x0
    beq lbl_fn_8004D388_000031FC
    lwz r0, 0x8(r4)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_8004D388_000031FC
    ori r30, r30, 0x100
    b lbl_fn_8004D388_000031FC
lbl_fn_8004D388_000031D4:
    mulli r0, r28, 0x50
    add r16, r31, r0
    lwz r4, 0x38(r16)
    cmpwi r4, 0x0
    beq lbl_fn_8004D388_000031FC
    lwz r0, 0x8(r4)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_8004D388_000031FC
    ori r30, r30, 0x20
lbl_fn_8004D388_000031FC:
    cmpwi r4, 0x0
    beq lbl_fn_8004D388_00003220
    lwz r3, 0x38(r16)
    lwz r0, 0x8(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_8004D388_00003220
    ori r30, r30, 0x2
    stw r4, 0x59c(r1)
lbl_fn_8004D388_00003220:
    lwz r4, 0x34(r16)
    li r15, 0x0
    lwz r3, -0x6fcc(r23)
    cmpwi r4, 0x0
    beq lbl_fn_8004D388_00003324
    lwz r0, 0x4(r4)
    rlwinm r0, r0, 0, 23, 23
    cmplwi r0, 0x100
    bne lbl_fn_8004D388_00003270
    cmpwi r3, 0x0
    ori r15, r15, 0x4
    beq lbl_fn_8004D388_00003254
    ori r15, r15, 0x1
lbl_fn_8004D388_00003254:
    addi r4, r1, 0x1dc
    addi r3, r16, 0x28
    bl fn_805F9990
    lfd f0, 0x590(r1)
    fcmpo cr0, f1, f0
    bge lbl_fn_8004D388_00003270
    ori r15, r15, 0x8
lbl_fn_8004D388_00003270:
    lwz r3, 0x34(r16)
    lwz r3, 0x4(r3)
    rlwinm r0, r3, 0, 22, 22
    cmplwi r0, 0x200
    bne lbl_fn_8004D388_00003288
    ori r15, r15, 0x10
lbl_fn_8004D388_00003288:
    rlwinm r0, r3, 0, 19, 19
    cmplwi r0, 0x1000
    bne lbl_fn_8004D388_000032A8
    psq_l f1, 0x4(r16), 0, 0
    ori r15, r15, 0x40
    lfs f2, 0xc(r16)
    psq_st f1, 0x0(r20), 0, 0
    stfs f2, 0x1d8(r1)
lbl_fn_8004D388_000032A8:
    lwz r3, 0x34(r16)
    lwz r0, 0x4(r3)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    bne lbl_fn_8004D388_000032D0
    psq_l f1, 0x4(r16), 0, 0
    ori r15, r15, 0x80
    lfs f2, 0xc(r16)
    psq_st f1, 0x0(r20), 0, 0
    stfs f2, 0x1d8(r1)
lbl_fn_8004D388_000032D0:
    lwz r3, 0x34(r16)
    lwz r0, 0x4(r3)
    rlwinm r0, r0, 0, 17, 17
    cmplwi r0, 0x4000
    bne lbl_fn_8004D388_000032F8
    psq_l f1, 0x4(r16), 0, 0
    ori r15, r15, 0x200
    lfs f2, 0xc(r16)
    psq_st f1, 0x0(r20), 0, 0
    stfs f2, 0x1d8(r1)
lbl_fn_8004D388_000032F8:
    lwz r3, 0x34(r16)
    lwz r3, 0x4(r3)
    rlwinm r0, r3, 0, 16, 16
    cmplwi r0, 0x8000
    bne lbl_fn_8004D388_00003310
    ori r15, r15, 0x400
lbl_fn_8004D388_00003310:
    rlwinm r3, r3, 0, 13, 13
    subis r0, r3, 0x4
    cmplwi r0, 0x0
    bne lbl_fn_8004D388_00003324
    ori r15, r15, 0x800
lbl_fn_8004D388_00003324:
    or r30, r30, r15
lbl_fn_8004D388_00003328:
    lwz r0, 0x5ac(r1)
    cmpw r29, r0
    blt lbl_fn_8004D388_00002784
lbl_fn_8004D388_00003334:
    lwz r3, 0x598(r1)
    addi r3, r3, 0x1
    stw r3, 0x598(r1)
lbl_fn_8004D388_00003340:
    lwz r3, 0x598(r1)
    lwz r0, 0x5a8(r1)
    cmpw r3, r0
    blt lbl_fn_8004D388_00002760
    lwz r4, 0x10(r1)
    addi r3, r1, 0x128
    lfs f3, 0x208(r1)
    li r14, 0x0
    lfs f0, 0x8(r4)
    lfs f5, 0x204(r1)
    fsubs f6, f3, f0
    lfs f4, 0x4(r4)
    lfs f0, 0x0(r4)
    lfs f3, 0x200(r1)
    fsubs f4, f5, f4
    stfs f6, 0x130(r1)
    fsubs f0, f3, f0
    stfs f4, 0x12c(r1)
    stfs f0, 0x128(r1)
    bl fn_805F9920
    fmuls f3, f16, f16
    lfs f0, lbl_808808E4
    fmuls f0, f0, f3
    fcmpo cr0, f1, f0
    ble lbl_fn_8004D388_0000367C
    addi r3, r1, 0x128
    mr r4, r3
    bl fn_805F98D0
    lfs f4, 0x130(r1)
    li r0, 0x0
    lfs f3, 0x12c(r1)
    addi r4, r1, 0x258
    fmuls f5, f4, f16
    lfs f0, 0x128(r1)
    fmuls f6, f3, f16
    lfs f4, 0x208(r1)
    fmuls f7, f0, f16
    lfs f3, 0x204(r1)
    lfs f0, 0x200(r1)
    fadds f4, f4, f5
    fadds f3, f3, f6
    lwz r3, 0x8(r1)
    fadds f0, f0, f7
    stw r0, 0x28c(r1)
    lwz r5, 0x10(r1)
    stw r0, 0x290(r1)
    lwz r8, 0x18(r1)
    addi r6, r1, 0x11c
    stw r0, 0x294(r1)
    oris r7, r25, 0x8000
    lwz r9, 0x1c(r1)
    stw r0, 0x298(r1)
    stfs f7, 0x74(r1)
    stfs f6, 0x78(r1)
    stfs f5, 0x7c(r1)
    stfs f0, 0x11c(r1)
    stfs f3, 0x120(r1)
    stfs f4, 0x124(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_8004D388_00003678
    lfs f4, 0x27c(r1)
    addi r6, r1, 0x68
    lfs f0, 0x278(r1)
    addi r5, r1, 0x200
    lfs f3, 0x274(r1)
    fmuls f4, f4, f16
    fmuls f5, f0, f16
    lfs f0, 0x264(r1)
    fmuls f6, f3, f16
    lfs f3, 0x260(r1)
    fadds f2, f0, f4
    lfs f0, 0x25c(r1)
    fadds f3, f3, f5
    stfs f6, 0x5c(r1)
    fadds f0, f0, f6
    addi r3, r1, 0x280
    stfs f3, 0x6c(r1)
    addi r4, r1, 0x1e8
    stfs f0, 0x68(r1)
    psq_l f1, 0x0(r6), 0, 0
    stfs f5, 0x60(r1)
    stfs f4, 0x64(r1)
    stfs f2, 0x70(r1)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x208(r1)
    bl fn_805F9990
    lfs f0, lbl_808808F0
    fcmpo cr0, f1, f0
    ble lbl_fn_8004D388_000034DC
    lwz r0, 0x28c(r1)
    cmpwi r0, 0x0
    beq lbl_fn_8004D388_000034B8
    stw r0, 0x5a0(r1)
lbl_fn_8004D388_000034B8:
    lwz r3, 0x290(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8004D388_00003538
    lwz r0, 0x8(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_8004D388_00003538
    ori r30, r30, 0x1
    b lbl_fn_8004D388_00003538
lbl_fn_8004D388_000034DC:
    addi r3, r1, 0x280
    addi r4, r1, 0x1e8
    bl fn_805F9990
    lfs f0, lbl_808808F4
    fcmpo cr0, f1, f0
    bge lbl_fn_8004D388_00003518
    lwz r3, 0x290(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8004D388_00003538
    lwz r0, 0x8(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_8004D388_00003538
    ori r30, r30, 0x100
    b lbl_fn_8004D388_00003538
lbl_fn_8004D388_00003518:
    lwz r3, 0x290(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8004D388_00003538
    lwz r0, 0x8(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_8004D388_00003538
    ori r30, r30, 0x20
lbl_fn_8004D388_00003538:
    cmpwi r3, 0x0
    beq lbl_fn_8004D388_00003558
    lwz r0, 0x8(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_8004D388_00003558
    ori r30, r30, 0x2
    stw r3, 0x59c(r1)
lbl_fn_8004D388_00003558:
    lwz r5, 0x28c(r1)
    addi r14, r1, 0x1d0
    lwz r3, 0x8(r1)
    addi r4, r1, 0x1dc
    cmpwi r5, 0x0
    li r15, 0x0
    addis r3, r3, 0x1
    lwz r3, -0x6fcc(r3)
    beq lbl_fn_8004D388_00003674
    lwz r0, 0x4(r5)
    rlwinm r0, r0, 0, 23, 23
    cmplwi r0, 0x100
    bne lbl_fn_8004D388_000035B4
    cmpwi r3, 0x0
    ori r15, r15, 0x4
    beq lbl_fn_8004D388_0000359C
    ori r15, r15, 0x1
lbl_fn_8004D388_0000359C:
    addi r3, r1, 0x280
    bl fn_805F9990
    lfs f0, lbl_808808F8
    fcmpo cr0, f1, f0
    bge lbl_fn_8004D388_000035B4
    ori r15, r15, 0x8
lbl_fn_8004D388_000035B4:
    lwz r3, 0x28c(r1)
    lwz r3, 0x4(r3)
    rlwinm r0, r3, 0, 22, 22
    cmplwi r0, 0x200
    bne lbl_fn_8004D388_000035CC
    ori r15, r15, 0x10
lbl_fn_8004D388_000035CC:
    rlwinm r0, r3, 0, 19, 19
    cmplwi r0, 0x1000
    bne lbl_fn_8004D388_000035F0
    addi r3, r1, 0x25c
    lfs f2, 0x264(r1)
    psq_l f1, 0x0(r3), 0, 0
    ori r15, r15, 0x40
    psq_st f1, 0x0(r14), 0, 0
    stfs f2, 0x1d8(r1)
lbl_fn_8004D388_000035F0:
    lwz r3, 0x28c(r1)
    lwz r0, 0x4(r3)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    bne lbl_fn_8004D388_0000361C
    addi r3, r1, 0x25c
    lfs f2, 0x264(r1)
    psq_l f1, 0x0(r3), 0, 0
    ori r15, r15, 0x80
    psq_st f1, 0x0(r14), 0, 0
    stfs f2, 0x1d8(r1)
lbl_fn_8004D388_0000361C:
    lwz r3, 0x28c(r1)
    lwz r0, 0x4(r3)
    rlwinm r0, r0, 0, 17, 17
    cmplwi r0, 0x4000
    bne lbl_fn_8004D388_00003648
    addi r3, r1, 0x25c
    lfs f2, 0x264(r1)
    psq_l f1, 0x0(r3), 0, 0
    ori r15, r15, 0x200
    psq_st f1, 0x0(r14), 0, 0
    stfs f2, 0x1d8(r1)
lbl_fn_8004D388_00003648:
    lwz r3, 0x28c(r1)
    lwz r3, 0x4(r3)
    rlwinm r0, r3, 0, 16, 16
    cmplwi r0, 0x8000
    bne lbl_fn_8004D388_00003660
    ori r15, r15, 0x400
lbl_fn_8004D388_00003660:
    rlwinm r3, r3, 0, 13, 13
    subis r0, r3, 0x4
    cmplwi r0, 0x0
    bne lbl_fn_8004D388_00003674
    ori r15, r15, 0x800
lbl_fn_8004D388_00003674:
    or r30, r30, r15
lbl_fn_8004D388_00003678:
    li r14, 0x1
lbl_fn_8004D388_0000367C:
    lwz r0, 0xc(r1)
    cmpwi r0, 0x0
    beq lbl_fn_8004D388_00003798
    addi r5, r1, 0x200
    lfs f2, 0x208(r1)
    psq_l f1, 0x0(r5), 0, 0
    mr r3, r0
    mr r4, r0
    psq_st f1, 0x10(r3), 0, 0
    addi r6, r1, 0x1d0
    lwz r0, 0x5a0(r1)
    stfs f2, 0x18(r4)
    lwz r3, 0x14(r1)
    psq_l f1, 0x0(r5), 0, 0
    lfs f2, 0x208(r1)
    stfs f2, 0xc(r4)
    lfs f2, 0x1d8(r1)
    psq_st f1, 0x4(r4), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stw r0, 0x34(r4)
    lwz r0, 0x59c(r1)
    stw r30, 0x3c(r4)
    stw r0, 0x38(r4)
    psq_st f1, 0x44(r4), 0, 0
    stfs f2, 0x4c(r4)
    bl fn_805F9920
    lwz r3, 0xc(r1)
    fmadds f5, f16, f16, f1
    lfs f4, lbl_80880920
    lfs f3, 0x10(r3)
    lwz r3, 0x10(r1)
    fadds f4, f4, f5
    lfs f0, 0x0(r3)
    fsubs f0, f3, f0
    fmuls f0, f0, f0
    fcmpo cr0, f0, f4
    bge lbl_fn_8004D388_00003750
    lwz r3, 0xc(r1)
    lfs f3, 0x14(r3)
    lwz r3, 0x10(r1)
    lfs f0, 0x4(r3)
    fsubs f0, f3, f0
    fmuls f0, f0, f0
    fcmpo cr0, f0, f4
    bge lbl_fn_8004D388_00003750
    lwz r3, 0xc(r1)
    lfs f3, 0x18(r3)
    lwz r3, 0x10(r1)
    lfs f0, 0x8(r3)
    fsubs f0, f3, f0
    fmuls f0, f0, f0
    fcmpo cr0, f0, f4
    blt lbl_fn_8004D388_00003798
lbl_fn_8004D388_00003750:
    lwz r3, 0x10(r1)
    li r0, 0x0
    lwz r4, 0xc(r1)
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x8(r3)
    li r3, 0x0
    stfs f2, 0x18(r4)
    psq_st f1, 0x10(r4), 0, 0
    lwz r4, 0x10(r1)
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    lwz r4, 0xc(r1)
    stfs f2, 0xc(r4)
    psq_st f1, 0x4(r4), 0, 0
    stw r0, 0x34(r4)
    stw r0, 0x3c(r4)
    stw r0, 0x38(r4)
    b lbl_fn_8004D388_000038A0
lbl_fn_8004D388_00003798:
    lwz r0, 0xc(r1)
    cmpwi r0, 0x0
    beq lbl_fn_8004D388_0000389C
    lwz r0, 0x5a4(r1)
    cmpwi r0, 0x0
    beq lbl_fn_8004D388_0000389C
    cmpwi r14, 0x0
    bne lbl_fn_8004D388_000037C4
    rlwinm r0, r30, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_8004D388_0000389C
lbl_fn_8004D388_000037C4:
    rlwinm r3, r25, 0, 6, 6
    subis r0, r3, 0x200
    cmplwi r0, 0x0
    bne lbl_fn_8004D388_0000389C
    rlwinm r3, r25, 0, 7, 7
    subis r0, r3, 0x100
    cmplwi r0, 0x0
    beq lbl_fn_8004D388_0000389C
    lwz r3, 0x10(r1)
    addi r5, r1, 0x50
    lwz r4, 0x10(r1)
    addi r14, r1, 0x1f4
    lfs f0, 0x8(r3)
    mr r3, r14
    lfs f3, 0x208(r1)
    lfs f5, 0x204(r1)
    fsubs f2, f3, f0
    lfs f4, 0x4(r4)
    lfs f0, 0x0(r4)
    lfs f3, 0x200(r1)
    fsubs f4, f5, f4
    stfs f2, 0x58(r1)
    fsubs f0, f3, f0
    stfs f4, 0x54(r1)
    stfs f0, 0x50(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r14), 0, 0
    stfs f2, 0x1fc(r1)
    bl fn_805F9920
    fmuls f3, f16, f16
    lfs f0, lbl_80880924
    fmuls f0, f0, f3
    fcmpo cr0, f1, f0
    ble lbl_fn_8004D388_0000389C
    fmr f1, f16
    lwz r3, 0x8(r1)
    lwz r4, 0xc(r1)
    mr r6, r14
    lwz r5, 0x10(r1)
    oris r7, r25, 0x8100
    lwz r8, 0x18(r1)
    lwz r9, 0x1c(r1)
    bl fn_8004D388
    addi r3, r1, 0x1d0
    lwz r0, 0x5a0(r1)
    psq_l f1, 0x0(r3), 0, 0
    lwz r3, 0xc(r1)
    lfs f2, 0x1d8(r1)
    stw r0, 0x34(r3)
    lwz r0, 0x59c(r1)
    stw r30, 0x3c(r3)
    stw r0, 0x38(r3)
    psq_st f1, 0x44(r3), 0, 0
    stfs f2, 0x4c(r3)
lbl_fn_8004D388_0000389C:
    lwz r3, 0x5a4(r1)
lbl_fn_8004D388_000038A0:
    addi r11, r1, 0x600
    psq_l f31, 0x718(r1), 0, 0
    lfd f31, 0x710(r1)
    psq_l f30, 0x708(r1), 0, 0
    lfd f30, 0x700(r1)
    psq_l f29, 0x6f8(r1), 0, 0
    lfd f29, 0x6f0(r1)
    psq_l f28, 0x6e8(r1), 0, 0
    lfd f28, 0x6e0(r1)
    psq_l f27, 0x6d8(r1), 0, 0
    lfd f27, 0x6d0(r1)
    psq_l f26, 0x6c8(r1), 0, 0
    lfd f26, 0x6c0(r1)
    psq_l f25, 0x6b8(r1), 0, 0
    lfd f25, 0x6b0(r1)
    psq_l f24, 0x6a8(r1), 0, 0
    lfd f24, 0x6a0(r1)
    psq_l f23, 0x698(r1), 0, 0
    lfd f23, 0x690(r1)
    psq_l f22, 0x688(r1), 0, 0
    lfd f22, 0x680(r1)
    psq_l f21, 0x678(r1), 0, 0
    lfd f21, 0x670(r1)
    psq_l f20, 0x668(r1), 0, 0
    lfd f20, 0x660(r1)
    psq_l f19, 0x658(r1), 0, 0
    lfd f19, 0x650(r1)
    psq_l f18, 0x648(r1), 0, 0
    lfd f18, 0x640(r1)
    psq_l f17, 0x638(r1), 0, 0
    lfd f17, 0x630(r1)
    psq_l f16, 0x628(r1), 0, 0
    lfd f16, 0x620(r1)
    psq_l f15, 0x618(r1), 0, 0
    lfd f15, 0x610(r1)
    psq_l f14, 0x608(r1), 0, 0
    lfd f14, 0x600(r1)
    bl _restgpr_14
    lwz r0, 0x724(r1)
    mtlr r0
    addi r1, r1, 0x720
    blr
}

asm void fn_8004ECC0(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    li r0, 0x0
    stw r31, 0x5c(r1)
    mr r31, r4
    addi r4, r1, 0x8
    stw r0, 0x3c(r1)
    stw r0, 0x40(r1)
    stw r0, 0x44(r1)
    stw r0, 0x48(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_8004ECC0_000039A4
    cmpwi r31, 0x0
    beq lbl_fn_8004ECC0_0000399C
    addi r3, r1, 0x18
    lfs f2, 0x20(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x8(r31)
lbl_fn_8004ECC0_0000399C:
    li r3, 0x1
    b lbl_fn_8004ECC0_000039A8
lbl_fn_8004ECC0_000039A4:
    li r3, 0x0
lbl_fn_8004ECC0_000039A8:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_8004ED34(void)
{
    nofralloc
    stwu r1, -0x170(r1)
    mflr r0
    stw r0, 0x174(r1)
    addi r11, r1, 0x110
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
    bl _savegpr_14
    lfs f3, 0x8(r6)
    addi r27, r1, 0x98
    lfs f0, 0x8(r5)
    addi r26, r1, 0xa4
    lfs f5, 0x4(r6)
    mr r15, r3
    fsubs f6, f3, f0
    lfs f4, 0x4(r5)
    psq_l f1, 0x0(r5), 0, 0
    addi r24, r3, 0x4008
    lfs f2, 0x8(r5)
    fsubs f4, f5, f4
    psq_st f1, 0x0(r27), 0, 0
    mr r16, r4
    psq_l f1, 0x0(r6), 0, 0
    mr r14, r5
    stfs f2, 0xa0(r1)
    mr r17, r6
    lfs f2, 0x8(r6)
    mr r18, r7
    lfs f3, 0x0(r6)
    mr r19, r8
    lfs f0, 0x0(r5)
    mr r20, r9
    psq_st f1, 0x0(r26), 0, 0
    addi r3, r1, 0x8c
    fsubs f0, f3, f0
    stfs f2, 0xac(r1)
    stfs f0, 0x8c(r1)
    stfs f4, 0x90(r1)
    stfs f6, 0x94(r1)
    bl fn_805F9920
    lfs f0, lbl_80880918
    fmr f27, f1
    fcmpo cr0, f1, f0
    bge lbl_fn_8004ED34_00003A98
    li r3, 0x0
    b lbl_fn_8004ED34_0000409C
lbl_fn_8004ED34_00003A98:
    addi r3, r1, 0x8c
    mr r4, r3
    bl fn_805F98D0
    lfs f28, lbl_80880928
    addis r29, r15, 0x1
    lfs f29, lbl_8088092C
    li r28, -0x1
    lfs f30, lbl_808808D8
    lfs f31, lbl_808808D4
lbl_fn_8004ED34_00003ABC:
    lfs f3, 0xac(r1)
    addi r3, r1, 0x80
    lfs f0, 0xa0(r1)
    lfs f5, 0xa8(r1)
    fsubs f6, f3, f0
    lfs f4, 0x9c(r1)
    lfs f3, 0xa4(r1)
    lfs f0, 0x98(r1)
    fsubs f4, f5, f4
    stfs f6, 0x88(r1)
    fsubs f0, f3, f0
    stfs f4, 0x84(r1)
    stfs f0, 0x80(r1)
    bl fn_805F9940
    fabs f0, f1
    frsp f0, f0
    fcmpo cr0, f0, f28
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_8004ED34_00003B14
    li r3, 0x0
    b lbl_fn_8004ED34_0000409C
lbl_fn_8004ED34_00003B14:
    fcmpo cr0, f1, f29
    mfcr r23
    extrwi. r23, r23, 1, 1
    beq lbl_fn_8004ED34_00003B7C
    lfs f4, 0x94(r1)
    addi r3, r1, 0x74
    lfs f0, 0x90(r1)
    lfs f3, 0x8c(r1)
    fmuls f4, f4, f29
    fmuls f5, f0, f29
    lfs f0, 0xa0(r1)
    fmuls f6, f3, f29
    lfs f3, 0x9c(r1)
    fadds f2, f0, f4
    lfs f0, 0x98(r1)
    fadds f3, f3, f5
    stfs f6, 0x68(r1)
    fadds f0, f0, f6
    stfs f3, 0x78(r1)
    stfs f0, 0x74(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f5, 0x6c(r1)
    stfs f4, 0x70(r1)
    stfs f2, 0x7c(r1)
    psq_st f1, 0x0(r26), 0, 0
    stfs f2, 0xac(r1)
lbl_fn_8004ED34_00003B7C:
    stw r28, 0x14(r1)
    addi r3, r1, 0x50
    lfs f8, 0xa0(r1)
    lfs f0, 0xac(r1)
    stw r28, 0x18(r1)
    lfs f7, 0x9c(r1)
    fsubs f10, f8, f0
    stw r28, 0x1c(r1)
    lfs f3, 0xa8(r1)
    lfs f5, -0x6fec(r29)
    lfs f6, -0x6ff0(r29)
    fsubs f9, f7, f3
    lfs f4, -0x6ff4(r29)
    fsubs f11, f8, f5
    fsubs f12, f0, f5
    lfs f5, 0x98(r1)
    fsubs f8, f7, f6
    fsubs f6, f3, f6
    lfs f0, 0xa4(r1)
    fsubs f7, f5, f4
    fsubs f3, f0, f4
    stfs f11, 0x28(r1)
    fadds f11, f12, f11
    stfs f8, 0x24(r1)
    fadds f8, f6, f8
    fsubs f0, f5, f0
    stfs f7, 0x20(r1)
    fadds f7, f3, f7
    fmuls f4, f8, f30
    stfs f6, 0x30(r1)
    fmuls f6, f11, f30
    stfs f3, 0x2c(r1)
    fmuls f3, f7, f30
    stfs f12, 0x34(r1)
    stfs f7, 0x44(r1)
    stfs f8, 0x48(r1)
    stfs f11, 0x4c(r1)
    stfs f3, 0x38(r1)
    stfs f4, 0x3c(r1)
    stfs f6, 0x40(r1)
    stfs f0, 0x50(r1)
    stfs f9, 0x54(r1)
    stfs f10, 0x58(r1)
    bl fn_805F9940
    lfs f7, -0x6fdc(r29)
    fmuls f8, f30, f1
    lfs f3, 0x38(r1)
    mr r3, r15
    fdivs f6, f31, f7
    lfs f0, 0x40(r1)
    lfs f5, 0x3c(r1)
    mr r4, r24
    mr r7, r18
    mr r8, r19
    fmuls f4, f3, f6
    mr r9, r20
    fmuls f3, f0, f6
    addi r6, r1, 0x98
    fdivs f0, f8, f7
    stfs f4, 0x38(r1)
    stfs f3, 0x40(r1)
    addi r10, r1, 0x14
    li r5, 0x100
    fctiwz f0, f0
    fctiwz f4, f4
    stfd f0, 0xc0(r1)
    fctiwz f3, f3
    fmuls f0, f5, f6
    stfd f4, 0xb0(r1)
    lwz r11, 0xc4(r1)
    lwz r12, 0xb4(r1)
    addi r0, r11, 0x1
    stfd f3, 0xb8(r1)
    lwz r11, 0xbc(r1)
    stfs f0, 0x3c(r1)
    stw r12, 0x14(r1)
    stw r11, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_8004CF3C
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_8004ED34_0000406C
    lfs f26, lbl_80880900
    mr r25, r24
    addis r31, r15, 0x1
    li r22, -0x1
    li r21, 0x0
    b lbl_fn_8004ED34_00003D48
lbl_fn_8004ED34_00003CDC:
    lwz r0, -0x6fd0(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8004ED34_00003CF8
    lfs f3, 0x14(r25)
    lfs f0, -0x6fd4(r31)
    fcmpo cr0, f3, f0
    bgt lbl_fn_8004ED34_00003D40
lbl_fn_8004ED34_00003CF8:
    lfs f3, 0xa0(r1)
    addi r3, r1, 0x8
    lfs f0, 0xc(r25)
    lfs f5, 0x9c(r1)
    fsubs f6, f3, f0
    lfs f4, 0x8(r25)
    lfs f0, 0x4(r25)
    lfs f3, 0x98(r1)
    fsubs f4, f5, f4
    stfs f6, 0x10(r1)
    fsubs f0, f3, f0
    stfs f4, 0xc(r1)
    stfs f0, 0x8(r1)
    bl fn_805F9940
    fcmpo cr0, f26, f1
    ble lbl_fn_8004ED34_00003D40
    fmr f26, f1
    mr r22, r21
lbl_fn_8004ED34_00003D40:
    addi r25, r25, 0x50
    addi r21, r21, 0x1
lbl_fn_8004ED34_00003D48:
    cmpw r21, r30
    blt lbl_fn_8004ED34_00003CDC
    cmpwi r22, -0x1
    beq lbl_fn_8004ED34_0000406C
    cmpwi r16, 0x0
    beq lbl_fn_8004ED34_00004064
    mulli r18, r22, 0x50
    lfs f3, lbl_808808DC
    lfs f0, lbl_808808D4
    addi r4, r1, 0x5c
    lwzx r0, r24, r18
    add r17, r24, r18
    stw r0, 0x0(r16)
    addi r3, r17, 0x28
    psq_l f1, 0x4(r17), 0, 0
    lfs f2, 0xc(r17)
    stfs f2, 0xc(r16)
    psq_st f1, 0x4(r16), 0, 0
    psq_l f1, 0x10(r17), 0, 0
    lfs f2, 0x18(r17)
    stfs f2, 0x18(r16)
    psq_st f1, 0x10(r16), 0, 0
    psq_l f1, 0x1c(r17), 0, 0
    lfs f2, 0x24(r17)
    stfs f2, 0x24(r16)
    psq_st f1, 0x1c(r16), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x30(r17)
    stfs f2, 0x30(r16)
    psq_st f1, 0x28(r16), 0, 0
    lwz r0, 0x34(r17)
    stw r0, 0x34(r16)
    lwz r0, 0x38(r17)
    stw r0, 0x38(r16)
    lwz r0, 0x3c(r17)
    stw r0, 0x3c(r16)
    lwz r0, 0x40(r17)
    stw r0, 0x40(r16)
    psq_l f1, 0x44(r17), 0, 0
    lfs f2, 0x4c(r17)
    stfs f2, 0x4c(r16)
    psq_st f1, 0x44(r16), 0, 0
    stfs f3, 0x5c(r1)
    stfs f0, 0x60(r1)
    stfs f3, 0x64(r1)
    bl fn_805F9990
    lfs f0, lbl_808808F0
    fcmpo cr0, f1, f0
    ble lbl_fn_8004ED34_00003E44
    lwz r0, 0x38(r17)
    mr r3, r17
    addi r4, r3, 0x38
    cmpwi r0, 0x0
    beq lbl_fn_8004ED34_00003EBC
    lwz r3, 0x38(r3)
    lwz r0, 0x8(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_8004ED34_00003EBC
    lwz r0, 0x3c(r16)
    ori r0, r0, 0x1
    stw r0, 0x3c(r16)
    b lbl_fn_8004ED34_00003EBC
lbl_fn_8004ED34_00003E44:
    lfs f0, lbl_808808F4
    fcmpo cr0, f1, f0
    bge lbl_fn_8004ED34_00003E88
    lwz r0, 0x38(r17)
    mr r3, r17
    addi r4, r3, 0x38
    cmpwi r0, 0x0
    beq lbl_fn_8004ED34_00003EBC
    lwz r3, 0x38(r3)
    lwz r0, 0x8(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_8004ED34_00003EBC
    lwz r0, 0x3c(r16)
    ori r0, r0, 0x100
    stw r0, 0x3c(r16)
    b lbl_fn_8004ED34_00003EBC
lbl_fn_8004ED34_00003E88:
    lwz r0, 0x38(r17)
    mr r3, r17
    addi r4, r3, 0x38
    cmpwi r0, 0x0
    beq lbl_fn_8004ED34_00003EBC
    lwz r3, 0x38(r3)
    lwz r0, 0x8(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_8004ED34_00003EBC
    lwz r0, 0x3c(r16)
    ori r0, r0, 0x20
    stw r0, 0x3c(r16)
lbl_fn_8004ED34_00003EBC:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8004ED34_00003EF8
    mulli r0, r22, 0x50
    add r3, r24, r0
    lwz r3, 0x38(r3)
    lwz r0, 0x8(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_8004ED34_00003EF8
    lwz r0, 0x3c(r16)
    ori r0, r0, 0x2
    stw r0, 0x3c(r16)
    lwz r0, 0x0(r4)
    stw r0, 0x38(r16)
lbl_fn_8004ED34_00003EF8:
    lwz r5, 0x34(r17)
    addis r3, r15, 0x1
    lwz r3, -0x6fcc(r3)
    addi r4, r1, 0x8c
    cmpwi r5, 0x0
    li r15, 0x0
    beq lbl_fn_8004ED34_00004000
    lwz r0, 0x4(r5)
    rlwinm r0, r0, 0, 23, 23
    cmplwi r0, 0x100
    bne lbl_fn_8004ED34_00003F4C
    cmpwi r3, 0x0
    ori r15, r15, 0x4
    beq lbl_fn_8004ED34_00003F34
    ori r15, r15, 0x1
lbl_fn_8004ED34_00003F34:
    addi r3, r17, 0x28
    bl fn_805F9990
    lfs f0, lbl_808808F8
    fcmpo cr0, f1, f0
    bge lbl_fn_8004ED34_00003F4C
    ori r15, r15, 0x8
lbl_fn_8004ED34_00003F4C:
    lwz r3, 0x34(r17)
    lwz r3, 0x4(r3)
    rlwinm r0, r3, 0, 22, 22
    cmplwi r0, 0x200
    bne lbl_fn_8004ED34_00003F64
    ori r15, r15, 0x10
lbl_fn_8004ED34_00003F64:
    rlwinm r0, r3, 0, 19, 19
    cmplwi r0, 0x1000
    bne lbl_fn_8004ED34_00003F84
    psq_l f1, 0x4(r17), 0, 0
    ori r15, r15, 0x40
    lfs f2, 0xc(r17)
    stfs f2, 0x4c(r16)
    psq_st f1, 0x44(r16), 0, 0
lbl_fn_8004ED34_00003F84:
    lwz r3, 0x34(r17)
    lwz r0, 0x4(r3)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    bne lbl_fn_8004ED34_00003FAC
    psq_l f1, 0x4(r17), 0, 0
    ori r15, r15, 0x80
    lfs f2, 0xc(r17)
    stfs f2, 0x4c(r16)
    psq_st f1, 0x44(r16), 0, 0
lbl_fn_8004ED34_00003FAC:
    lwz r3, 0x34(r17)
    lwz r0, 0x4(r3)
    rlwinm r0, r0, 0, 17, 17
    cmplwi r0, 0x4000
    bne lbl_fn_8004ED34_00003FD4
    psq_l f1, 0x4(r17), 0, 0
    ori r15, r15, 0x200
    lfs f2, 0xc(r17)
    stfs f2, 0x4c(r16)
    psq_st f1, 0x44(r16), 0, 0
lbl_fn_8004ED34_00003FD4:
    lwz r3, 0x34(r17)
    lwz r3, 0x4(r3)
    rlwinm r0, r3, 0, 16, 16
    cmplwi r0, 0x8000
    bne lbl_fn_8004ED34_00003FEC
    ori r15, r15, 0x400
lbl_fn_8004ED34_00003FEC:
    rlwinm r3, r3, 0, 13, 13
    subis r0, r3, 0x4
    cmplwi r0, 0x0
    bne lbl_fn_8004ED34_00004000
    ori r15, r15, 0x800
lbl_fn_8004ED34_00004000:
    lfs f4, 0x4(r16)
    lfs f3, 0x0(r14)
    lwz r0, 0x3c(r16)
    fsubs f3, f4, f3
    lfs f0, lbl_80880920
    or r0, r0, r15
    stw r0, 0x3c(r16)
    fadds f4, f0, f27
    fmuls f0, f3, f3
    fcmpo cr0, f0, f4
    bge lbl_fn_8004ED34_0000405C
    lfs f3, 0x8(r16)
    lfs f0, 0x4(r14)
    fsubs f0, f3, f0
    fmuls f0, f0, f0
    fcmpo cr0, f0, f4
    bge lbl_fn_8004ED34_0000405C
    lfs f3, 0xc(r16)
    lfs f0, 0x8(r14)
    fsubs f0, f3, f0
    fmuls f0, f0, f0
    fcmpo cr0, f0, f4
    blt lbl_fn_8004ED34_00004064
lbl_fn_8004ED34_0000405C:
    li r3, 0x0
    b lbl_fn_8004ED34_0000409C
lbl_fn_8004ED34_00004064:
    li r3, 0x1
    b lbl_fn_8004ED34_0000409C
lbl_fn_8004ED34_0000406C:
    cmpwi r23, 0x0
    beq lbl_fn_8004ED34_00004098
    psq_l f1, 0x0(r26), 0, 0
    lfs f2, 0xac(r1)
    psq_st f1, 0x0(r27), 0, 0
    psq_l f1, 0x0(r17), 0, 0
    stfs f2, 0xa0(r1)
    lfs f2, 0x8(r17)
    psq_st f1, 0x0(r26), 0, 0
    stfs f2, 0xac(r1)
    b lbl_fn_8004ED34_00003ABC
lbl_fn_8004ED34_00004098:
    li r3, 0x0
lbl_fn_8004ED34_0000409C:
    addi r11, r1, 0x110
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
    bl _restgpr_14
    lwz r0, 0x174(r1)
    mtlr r0
    addi r1, r1, 0x170
    blr
}

asm void fn_8004F45C(void)
{
    nofralloc
    psq_l f1, 0x0(r4), 0, 0
    subi r0, r5, 0x1
    lfs f2, 0x8(r4)
    addi r4, r4, 0xc
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x8(r3)
    psq_st f1, 0xc(r3), 0, 0
    stfs f2, 0x14(r3)
    mtctr r0
    cmpwi r5, 0x1
    blelr
lbl_fn_8004F45C_00004110:
    lfs f3, 0x0(r4)
    lfs f0, 0x0(r3)
    fcmpo cr0, f3, f0
    bge lbl_fn_8004F45C_00004128
    stfs f3, 0x0(r3)
    b lbl_fn_8004F45C_00004138
lbl_fn_8004F45C_00004128:
    lfs f0, 0xc(r3)
    fcmpo cr0, f3, f0
    ble lbl_fn_8004F45C_00004138
    stfs f3, 0xc(r3)
lbl_fn_8004F45C_00004138:
    lfs f3, 0x4(r4)
    lfs f0, 0x4(r3)
    fcmpo cr0, f3, f0
    bge lbl_fn_8004F45C_00004150
    stfs f3, 0x4(r3)
    b lbl_fn_8004F45C_00004160
lbl_fn_8004F45C_00004150:
    lfs f0, 0x10(r3)
    fcmpo cr0, f3, f0
    ble lbl_fn_8004F45C_00004160
    stfs f3, 0x10(r3)
lbl_fn_8004F45C_00004160:
    lfs f3, 0x8(r4)
    lfs f0, 0x8(r3)
    fcmpo cr0, f3, f0
    bge lbl_fn_8004F45C_00004178
    stfs f3, 0x8(r3)
    b lbl_fn_8004F45C_00004188
lbl_fn_8004F45C_00004178:
    lfs f0, 0x14(r3)
    fcmpo cr0, f3, f0
    ble lbl_fn_8004F45C_00004188
    stfs f3, 0x14(r3)
lbl_fn_8004F45C_00004188:
    addi r4, r4, 0xc
    bdnz lbl_fn_8004F45C_00004110
    blr
}

asm void fn_8004F50C(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    lfs f0, lbl_80880930
    stw r0, 0x44(r1)
    fmuls f1, f0, f1
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    fmr f31, f4
    stfd f30, 0x20(r1)
    psq_st f30, 0x28(r1), 0, 0
    fmr f30, f3
    stfd f29, 0x10(r1)
    psq_st f29, 0x18(r1), 0, 0
    fmr f29, f2
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_8068AE24
    fdivs f7, f31, f30
    mr r3, r30
    mr r4, r31
    li r5, 0x0
    frsp f0, f1
    fmr f5, f30
    fmr f6, f31
    fmuls f1, f0, f30
    fmuls f4, f1, f29
    fneg f2, f1
    fneg f3, f4
    bl fn_8004F5B8
    lwz r0, 0x44(r1)
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    psq_l f30, 0x28(r1), 0, 0
    lfd f30, 0x20(r1)
    psq_l f29, 0x18(r1), 0, 0
    lfd f29, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8004F5B8(void)
{
    nofralloc
    stwu r1, -0x340(r1)
    mflr r0
    stw r0, 0x344(r1)
    addi r11, r1, 0x2d0
    stfd f31, 0x330(r1)
    psq_st f31, 0x338(r1), 0, 0
    stfd f30, 0x320(r1)
    psq_st f30, 0x328(r1), 0, 0
    stfd f29, 0x310(r1)
    psq_st f29, 0x318(r1), 0, 0
    stfd f28, 0x300(r1)
    psq_st f28, 0x308(r1), 0, 0
    stfd f27, 0x2f0(r1)
    psq_st f27, 0x2f8(r1), 0, 0
    stfd f26, 0x2e0(r1)
    psq_st f26, 0x2e8(r1), 0, 0
    stfd f25, 0x2d0(r1)
    psq_st f25, 0x2d8(r1), 0, 0
    bl _savegpr_27
    fmr f28, f1
    addi r6, r1, 0x228
    fmr f29, f2
    psq_l f1, 0x0(r4), 0, 0
    fmr f30, f3
    psq_l f2, 0x8(r4), 0, 0
    fmr f31, f4
    psq_l f3, 0x10(r4), 0, 0
    fmr f25, f5
    psq_l f4, 0x18(r4), 0, 0
    fmr f26, f6
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    mr r31, r3
    mr r28, r4
    fmr f27, f7
    psq_st f1, 0x0(r6), 0, 0
    mr r27, r5
    mr r3, r6
    mr r4, r6
    psq_st f2, 0x8(r6), 0, 0
    psq_st f3, 0x10(r6), 0, 0
    psq_st f4, 0x18(r6), 0, 0
    psq_st f5, 0x20(r6), 0, 0
    psq_st f6, 0x28(r6), 0, 0
    bl fn_805F8CA0
    psq_l f1, 0x0(r28), 0, 0
    fneg f11, f25
    psq_l f2, 0x8(r28), 0, 0
    fmuls f10, f27, f30
    psq_l f3, 0x10(r28), 0, 0
    fmuls f9, f27, f28
    psq_l f4, 0x18(r28), 0, 0
    psq_l f5, 0x20(r28), 0, 0
    fneg f8, f26
    psq_l f6, 0x28(r28), 0, 0
    fmuls f7, f27, f31
    psq_st f1, 0x0(r31), 0, 0
    fmuls f0, f27, f29
    lfs f12, lbl_80880934
    psq_st f2, 0x8(r31), 0, 0
    cmpwi r27, 0x0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
    stfs f12, 0x218(r1)
    stfs f12, 0x21c(r1)
    stfs f12, 0x220(r1)
    stfs f30, 0x258(r1)
    stfs f28, 0x25c(r1)
    stfs f11, 0x260(r1)
    stfs f31, 0x264(r1)
    stfs f28, 0x268(r1)
    stfs f11, 0x26c(r1)
    stfs f31, 0x270(r1)
    stfs f29, 0x274(r1)
    stfs f11, 0x278(r1)
    stfs f30, 0x27c(r1)
    stfs f29, 0x280(r1)
    stfs f11, 0x284(r1)
    stfs f10, 0x288(r1)
    stfs f9, 0x28c(r1)
    stfs f8, 0x290(r1)
    stfs f7, 0x294(r1)
    stfs f9, 0x298(r1)
    stfs f8, 0x29c(r1)
    stfs f7, 0x2a0(r1)
    stfs f0, 0x2a4(r1)
    stfs f8, 0x2a8(r1)
    stfs f10, 0x2ac(r1)
    stfs f0, 0x2b0(r1)
    stfs f8, 0x2b4(r1)
    stfs f11, 0x34(r31)
    stfs f8, 0x38(r31)
    stw r27, 0x30(r31)
    beq lbl_fn_8004F5B8_00004458
    lfs f9, lbl_80880938
    fmr f2, f12
    lfs f7, lbl_8088093C
    fneg f8, f30
    stfs f9, 0x20c(r1)
    addi r3, r1, 0x20c
    addi r4, r1, 0x200
    stfs f12, 0x210(r1)
    addi r5, r1, 0x1f4
    fneg f0, f29
    addi r6, r1, 0x1e8
    psq_l f1, 0x0(r3), 0, 0
    stfs f7, 0x200(r1)
    stfs f12, 0x204(r1)
    psq_st f1, 0x3c(r31), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    stfs f12, 0x1f4(r1)
    stfs f7, 0x1f8(r1)
    psq_st f1, 0x4c(r31), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    stfs f12, 0x1e8(r1)
    stfs f9, 0x1ec(r1)
    psq_st f1, 0x5c(r31), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f12, 0x214(r1)
    stfs f2, 0x44(r31)
    stfs f8, 0x48(r31)
    stfs f12, 0x208(r1)
    stfs f2, 0x54(r31)
    stfs f31, 0x58(r31)
    stfs f12, 0x1fc(r1)
    stfs f2, 0x64(r31)
    stfs f28, 0x68(r31)
    stfs f12, 0x1f0(r1)
    psq_st f1, 0x6c(r31), 0, 0
    stfs f2, 0x74(r31)
    stfs f0, 0x78(r31)
    b lbl_fn_8004F5B8_0000471C
lbl_fn_8004F5B8_00004458:
    lfs f7, 0x260(r1)
    addi r29, r1, 0x218
    lfs f8, 0x220(r1)
    addi r30, r31, 0x3c
    lfs f0, 0x284(r1)
    addi r3, r1, 0x1b8
    fsubs f12, f7, f8
    lfs f7, 0x25c(r1)
    fsubs f10, f0, f8
    lfs f9, 0x21c(r1)
    lfs f0, 0x280(r1)
    addi r4, r1, 0x1c4
    fsubs f11, f7, f9
    lfs f8, 0x258(r1)
    fsubs f9, f0, f9
    lfs f7, 0x218(r1)
    lfs f0, 0x27c(r1)
    addi r5, r1, 0x1d0
    fsubs f8, f8, f7
    stfs f11, 0x1bc(r1)
    fsubs f0, f0, f7
    stfs f8, 0x1b8(r1)
    stfs f12, 0x1c0(r1)
    stfs f0, 0x1c4(r1)
    stfs f9, 0x1c8(r1)
    stfs f10, 0x1cc(r1)
    bl fn_805F99B0
    addi r3, r1, 0x1d0
    addi r28, r1, 0x1dc
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r28
    lfs f2, 0x1d8(r1)
    mr r4, r28
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x1e4(r1)
    bl fn_805F98D0
    psq_l f1, 0x0(r28), 0, 0
    mr r3, r30
    lfs f2, 0x1e4(r1)
    mr r4, r29
    stfs f2, 0x8(r30)
    psq_st f1, 0x0(r30), 0, 0
    bl fn_805F9990
    fneg f0, f1
    addi r28, r31, 0x4c
    addi r3, r1, 0x188
    addi r4, r1, 0x194
    stfs f0, 0xc(r30)
    addi r5, r1, 0x1a0
    lfs f7, 0x278(r1)
    lfs f9, 0x220(r1)
    lfs f0, 0x26c(r1)
    fsubs f12, f7, f9
    lfs f8, 0x274(r1)
    fsubs f10, f0, f9
    lfs f7, 0x21c(r1)
    lfs f0, 0x268(r1)
    fsubs f11, f8, f7
    fsubs f9, f0, f7
    lfs f8, 0x270(r1)
    lfs f7, 0x218(r1)
    lfs f0, 0x264(r1)
    fsubs f8, f8, f7
    stfs f11, 0x18c(r1)
    fsubs f0, f0, f7
    stfs f8, 0x188(r1)
    stfs f12, 0x190(r1)
    stfs f0, 0x194(r1)
    stfs f9, 0x198(r1)
    stfs f10, 0x19c(r1)
    bl fn_805F99B0
    addi r3, r1, 0x1a0
    addi r30, r1, 0x1ac
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r30
    lfs f2, 0x1a8(r1)
    mr r4, r30
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x1b4(r1)
    bl fn_805F98D0
    psq_l f1, 0x0(r30), 0, 0
    mr r3, r28
    lfs f2, 0x1b4(r1)
    mr r4, r29
    stfs f2, 0x8(r28)
    psq_st f1, 0x0(r28), 0, 0
    bl fn_805F9990
    fneg f0, f1
    addi r30, r31, 0x5c
    addi r3, r1, 0x158
    addi r4, r1, 0x164
    stfs f0, 0xc(r28)
    addi r5, r1, 0x170
    lfs f7, 0x26c(r1)
    lfs f9, 0x220(r1)
    lfs f0, 0x260(r1)
    fsubs f12, f7, f9
    lfs f8, 0x268(r1)
    fsubs f10, f0, f9
    lfs f7, 0x21c(r1)
    lfs f0, 0x25c(r1)
    fsubs f11, f8, f7
    fsubs f9, f0, f7
    lfs f8, 0x264(r1)
    lfs f7, 0x218(r1)
    lfs f0, 0x258(r1)
    fsubs f8, f8, f7
    stfs f11, 0x15c(r1)
    fsubs f0, f0, f7
    stfs f8, 0x158(r1)
    stfs f12, 0x160(r1)
    stfs f0, 0x164(r1)
    stfs f9, 0x168(r1)
    stfs f10, 0x16c(r1)
    bl fn_805F99B0
    addi r3, r1, 0x170
    addi r28, r1, 0x17c
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r28
    lfs f2, 0x178(r1)
    mr r4, r28
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x184(r1)
    bl fn_805F98D0
    psq_l f1, 0x0(r28), 0, 0
    mr r3, r30
    lfs f2, 0x184(r1)
    mr r4, r29
    stfs f2, 0x8(r30)
    psq_st f1, 0x0(r30), 0, 0
    bl fn_805F9990
    fneg f0, f1
    addi r28, r31, 0x6c
    addi r3, r1, 0x128
    addi r4, r1, 0x134
    stfs f0, 0xc(r30)
    addi r5, r1, 0x140
    lfs f7, 0x284(r1)
    lfs f9, 0x220(r1)
    lfs f0, 0x278(r1)
    fsubs f12, f7, f9
    lfs f8, 0x280(r1)
    fsubs f10, f0, f9
    lfs f7, 0x21c(r1)
    lfs f0, 0x274(r1)
    fsubs f11, f8, f7
    fsubs f9, f0, f7
    lfs f8, 0x27c(r1)
    lfs f7, 0x218(r1)
    lfs f0, 0x270(r1)
    fsubs f8, f8, f7
    stfs f11, 0x12c(r1)
    fsubs f0, f0, f7
    stfs f8, 0x128(r1)
    stfs f12, 0x130(r1)
    stfs f0, 0x134(r1)
    stfs f9, 0x138(r1)
    stfs f10, 0x13c(r1)
    bl fn_805F99B0
    addi r3, r1, 0x140
    addi r30, r1, 0x14c
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r30
    lfs f2, 0x148(r1)
    mr r4, r30
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x154(r1)
    bl fn_805F98D0
    psq_l f1, 0x0(r30), 0, 0
    mr r3, r28
    lfs f2, 0x154(r1)
    mr r4, r29
    stfs f2, 0x8(r28)
    psq_st f1, 0x0(r28), 0, 0
    bl fn_805F9990
    fneg f0, f1
    stfs f0, 0xc(r28)
lbl_fn_8004F5B8_0000471C:
    addi r27, r1, 0x258
    li r28, 0x0
lbl_fn_8004F5B8_00004724:
    mr r4, r27
    mr r5, r27
    addi r3, r1, 0x228
    bl fn_805F93C0
    addi r28, r28, 0x1
    addi r27, r27, 0xc
    cmpwi r28, 0x8
    blt lbl_fn_8004F5B8_00004724
    addi r4, r1, 0x218
    addi r3, r1, 0x228
    mr r5, r4
    bl fn_805F93C0
    addi r3, r31, 0x7c
    addi r4, r1, 0x258
    li r5, 0x8
    bl fn_8004F45C
    lfs f7, 0x260(r1)
    addi r29, r1, 0x218
    lfs f8, 0x220(r1)
    addi r28, r31, 0x94
    lfs f0, 0x284(r1)
    addi r3, r1, 0xf8
    fsubs f12, f7, f8
    lfs f7, 0x25c(r1)
    fsubs f10, f0, f8
    lfs f9, 0x21c(r1)
    lfs f0, 0x280(r1)
    addi r4, r1, 0x104
    fsubs f11, f7, f9
    lfs f8, 0x258(r1)
    fsubs f9, f0, f9
    lfs f7, 0x218(r1)
    lfs f0, 0x27c(r1)
    addi r5, r1, 0x110
    fsubs f8, f8, f7
    stfs f11, 0xfc(r1)
    fsubs f0, f0, f7
    stfs f8, 0xf8(r1)
    stfs f12, 0x100(r1)
    stfs f0, 0x104(r1)
    stfs f9, 0x108(r1)
    stfs f10, 0x10c(r1)
    bl fn_805F99B0
    addi r3, r1, 0x110
    addi r30, r1, 0x11c
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r30
    lfs f2, 0x118(r1)
    mr r4, r30
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x124(r1)
    bl fn_805F98D0
    psq_l f1, 0x0(r30), 0, 0
    mr r3, r28
    lfs f2, 0x124(r1)
    mr r4, r29
    stfs f2, 0x8(r28)
    psq_st f1, 0x0(r28), 0, 0
    bl fn_805F9990
    fneg f0, f1
    addi r30, r31, 0xa4
    addi r3, r1, 0xc8
    addi r4, r1, 0xd4
    stfs f0, 0xc(r28)
    addi r5, r1, 0xe0
    lfs f7, 0x278(r1)
    lfs f9, 0x220(r1)
    lfs f0, 0x26c(r1)
    fsubs f12, f7, f9
    lfs f8, 0x274(r1)
    fsubs f10, f0, f9
    lfs f7, 0x21c(r1)
    lfs f0, 0x268(r1)
    fsubs f11, f8, f7
    fsubs f9, f0, f7
    lfs f8, 0x270(r1)
    lfs f7, 0x218(r1)
    lfs f0, 0x264(r1)
    fsubs f8, f8, f7
    stfs f11, 0xcc(r1)
    fsubs f0, f0, f7
    stfs f8, 0xc8(r1)
    stfs f12, 0xd0(r1)
    stfs f0, 0xd4(r1)
    stfs f9, 0xd8(r1)
    stfs f10, 0xdc(r1)
    bl fn_805F99B0
    addi r3, r1, 0xe0
    addi r28, r1, 0xec
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r28
    lfs f2, 0xe8(r1)
    mr r4, r28
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0xf4(r1)
    bl fn_805F98D0
    psq_l f1, 0x0(r28), 0, 0
    mr r3, r30
    lfs f2, 0xf4(r1)
    mr r4, r29
    stfs f2, 0x8(r30)
    psq_st f1, 0x0(r30), 0, 0
    bl fn_805F9990
    fneg f0, f1
    addi r27, r1, 0x258
    addi r28, r31, 0xb4
    addi r3, r1, 0x98
    stfs f0, 0xc(r30)
    addi r4, r1, 0xa4
    lfs f7, 0x278(r1)
    addi r5, r1, 0xb0
    lfs f9, 0x260(r1)
    lfs f0, 0x26c(r1)
    fsubs f12, f7, f9
    lfs f8, 0x274(r1)
    fsubs f10, f0, f9
    lfs f7, 0x25c(r1)
    lfs f0, 0x268(r1)
    fsubs f11, f8, f7
    fsubs f9, f0, f7
    lfs f8, 0x270(r1)
    lfs f7, 0x258(r1)
    lfs f0, 0x264(r1)
    fsubs f8, f8, f7
    stfs f11, 0x9c(r1)
    fsubs f0, f0, f7
    stfs f8, 0x98(r1)
    stfs f12, 0xa0(r1)
    stfs f0, 0xa4(r1)
    stfs f9, 0xa8(r1)
    stfs f10, 0xac(r1)
    bl fn_805F99B0
    addi r3, r1, 0xb0
    addi r30, r1, 0xbc
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r30
    lfs f2, 0xb8(r1)
    mr r4, r30
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0xc4(r1)
    bl fn_805F98D0
    psq_l f1, 0x0(r30), 0, 0
    mr r3, r28
    lfs f2, 0xc4(r1)
    mr r4, r27
    stfs f2, 0x8(r28)
    psq_st f1, 0x0(r28), 0, 0
    bl fn_805F9990
    fneg f0, f1
    addi r30, r1, 0x288
    addi r27, r31, 0xc4
    addi r3, r1, 0x68
    stfs f0, 0xc(r28)
    addi r4, r1, 0x74
    lfs f7, 0x2a8(r1)
    addi r5, r1, 0x80
    lfs f9, 0x290(r1)
    lfs f0, 0x2b4(r1)
    fsubs f12, f7, f9
    lfs f8, 0x2a4(r1)
    fsubs f10, f0, f9
    lfs f7, 0x28c(r1)
    lfs f0, 0x2b0(r1)
    fsubs f11, f8, f7
    fsubs f9, f0, f7
    lfs f8, 0x2a0(r1)
    lfs f7, 0x288(r1)
    lfs f0, 0x2ac(r1)
    fsubs f8, f8, f7
    stfs f11, 0x6c(r1)
    fsubs f0, f0, f7
    stfs f8, 0x68(r1)
    stfs f12, 0x70(r1)
    stfs f0, 0x74(r1)
    stfs f9, 0x78(r1)
    stfs f10, 0x7c(r1)
    bl fn_805F99B0
    addi r3, r1, 0x80
    addi r28, r1, 0x8c
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r28
    lfs f2, 0x88(r1)
    mr r4, r28
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x94(r1)
    bl fn_805F98D0
    psq_l f1, 0x0(r28), 0, 0
    mr r3, r27
    lfs f2, 0x94(r1)
    mr r4, r30
    stfs f2, 0x8(r27)
    psq_st f1, 0x0(r27), 0, 0
    bl fn_805F9990
    fneg f0, f1
    addi r28, r31, 0xd4
    addi r3, r1, 0x38
    addi r4, r1, 0x44
    stfs f0, 0xc(r27)
    addi r5, r1, 0x50
    lfs f7, 0x26c(r1)
    lfs f9, 0x220(r1)
    lfs f0, 0x260(r1)
    fsubs f12, f7, f9
    lfs f8, 0x268(r1)
    fsubs f10, f0, f9
    lfs f7, 0x21c(r1)
    lfs f0, 0x25c(r1)
    fsubs f11, f8, f7
    fsubs f9, f0, f7
    lfs f8, 0x264(r1)
    lfs f7, 0x218(r1)
    lfs f0, 0x258(r1)
    fsubs f8, f8, f7
    stfs f11, 0x3c(r1)
    fsubs f0, f0, f7
    stfs f8, 0x38(r1)
    stfs f12, 0x40(r1)
    stfs f0, 0x44(r1)
    stfs f9, 0x48(r1)
    stfs f10, 0x4c(r1)
    bl fn_805F99B0
    addi r3, r1, 0x50
    addi r27, r1, 0x5c
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r27
    lfs f2, 0x58(r1)
    mr r4, r27
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0x64(r1)
    bl fn_805F98D0
    psq_l f1, 0x0(r27), 0, 0
    mr r3, r28
    lfs f2, 0x64(r1)
    mr r4, r29
    stfs f2, 0x8(r28)
    psq_st f1, 0x0(r28), 0, 0
    bl fn_805F9990
    fneg f0, f1
    addi r27, r31, 0xe4
    addi r3, r1, 0x8
    addi r4, r1, 0x14
    stfs f0, 0xc(r28)
    addi r5, r1, 0x20
    lfs f7, 0x284(r1)
    lfs f9, 0x220(r1)
    lfs f0, 0x278(r1)
    fsubs f12, f7, f9
    lfs f8, 0x280(r1)
    fsubs f10, f0, f9
    lfs f7, 0x21c(r1)
    lfs f0, 0x274(r1)
    fsubs f11, f8, f7
    fsubs f9, f0, f7
    lfs f8, 0x27c(r1)
    lfs f7, 0x218(r1)
    lfs f0, 0x270(r1)
    fsubs f8, f8, f7
    stfs f11, 0xc(r1)
    fsubs f0, f0, f7
    stfs f8, 0x8(r1)
    stfs f12, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f9, 0x18(r1)
    stfs f10, 0x1c(r1)
    bl fn_805F99B0
    addi r3, r1, 0x20
    addi r28, r1, 0x2c
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r28
    lfs f2, 0x28(r1)
    mr r4, r28
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x34(r1)
    bl fn_805F98D0
    psq_l f1, 0x0(r28), 0, 0
    mr r3, r27
    lfs f2, 0x34(r1)
    mr r4, r29
    stfs f2, 0x8(r27)
    psq_st f1, 0x0(r27), 0, 0
    bl fn_805F9990
    fneg f0, f1
    stfs f0, 0xc(r27)
    psq_l f31, 0x338(r1), 0, 0
    lfd f31, 0x330(r1)
    psq_l f30, 0x328(r1), 0, 0
    lfd f30, 0x320(r1)
    psq_l f29, 0x318(r1), 0, 0
    lfd f29, 0x310(r1)
    psq_l f28, 0x308(r1), 0, 0
    lfd f28, 0x300(r1)
    psq_l f27, 0x2f8(r1), 0, 0
    lfd f27, 0x2f0(r1)
    psq_l f26, 0x2e8(r1), 0, 0
    lfd f26, 0x2e0(r1)
    psq_l f25, 0x2d8(r1), 0, 0
    lfd f25, 0x2d0(r1)
    addi r11, r1, 0x2d0
    bl _restgpr_27
    lwz r0, 0x344(r1)
    mtlr r0
    addi r1, r1, 0x340
    blr
}
