#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void fn_8000D114(void);
extern void fn_8000D124(void);
extern void fn_8000D3A4(void);
extern void fn_8001047C(void);
extern void fn_800109E0(void);
extern void fn_80011034(void);
extern void fn_80011220(void);
extern void fn_80011410(void);
extern void fn_80012C88(void);
extern void fn_80013338(void);
extern void fn_80013410(void);
extern void fn_8004B378(void);
extern void fn_8004D388(void);
extern void fn_8004ED34(void);
extern void fn_80057A68(void);
extern void fn_80097D7C(void);
extern void fn_800A56A8(void);
extern void fn_800A58D0(void);
extern void fn_800F72CC(void);
extern void fn_800F7FF0(void);
extern void fn_800F8524(void);
extern void fn_8010F6FC(void);
extern void fn_80112958(void);
extern void fn_80112960(void);
extern void fn_80113CCC(void);
extern void fn_80114AA0(void);
extern void fn_801162A0(void);
extern void fn_80116BA4(void);
extern void fn_80116BD4(void);
extern void fn_801240B4(void);
extern void fn_8013A13C(void);
extern void fn_8013C3B4(void);
extern void fn_80178088(void);
extern void fn_801A03E8(void);
extern void fn_801C3910(void);
extern void fn_8032EC94(void);
extern void fn_80370174(void);
extern void fn_80373148(void);
extern void fn_8037E964(void);
extern void fn_8037F664(void);
extern void fn_8037F688(void);
extern void fn_8037F830(void);
extern void fn_8037F9AC(void);
extern void fn_803829C0(void);
extern void fn_803829D4(void);
extern void fn_80383728(void);
extern void fn_80385B40(void);
extern void fn_8038E23C(void);
extern void fn_8038E540(void);
extern void fn_8038E9B0(void);
extern void fn_803920C8(void);
extern void fn_80392510(void);
extern void fn_803928C0(void);
extern void fn_80392964(void);
extern void fn_80392A04(void);
extern void fn_80392FE8(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F98D0(void);
extern void fn_805F9940(void);
extern void fn_805F99B0(void);
extern void fn_8068A4A8(void);
extern void fn_8068AE24(void);
extern void fn_8068AEA8(void);

/* External data declarations */
extern u8 lbl_8074E008[];
extern u8 lbl_8074E010[];

/* Small data declarations */
extern u32 lbl_8087DCF8;
extern u32 lbl_8087EE98;
extern u32 lbl_8087EF70;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F430;
extern u32 lbl_808858E8;
extern u32 lbl_808858EC;
extern u32 lbl_808858F8;
extern u32 lbl_80885904;
extern u32 lbl_80885910;
extern u32 lbl_80885914;
extern u32 lbl_80885920;
extern u32 lbl_8088592C;
extern u32 lbl_80885930;
extern u32 lbl_80885934;
extern u32 lbl_80885938;
extern u32 lbl_8088593C;
extern u32 lbl_80885950;
extern u32 lbl_80885958;
extern u32 lbl_80885974;
extern u32 lbl_80885978;
extern u32 lbl_8088597C;
extern u32 lbl_808859B0;
extern u32 lbl_808859C8;
extern u32 lbl_808859D4;
extern u32 lbl_808859D8;
extern u32 lbl_808859E0;
extern u32 lbl_808859E4;
extern u32 lbl_80885A04;
extern u32 lbl_80885A08;
extern u32 lbl_80885A0C;
extern u32 lbl_80885A10;
extern u32 lbl_80885A14;
extern u32 lbl_80885A44;
extern u32 lbl_80885A68;
extern u32 lbl_80885A6C;

/* Function declarations */
void fn_80387540(void);
void fn_80387548(void);
void fn_80387910(void);
void fn_80387DE4(void);
void fn_803884B8(void);
void fn_80388A88(void);
void fn_80388C44(void);

asm void fn_80387540(void)
{
    nofralloc
    lwz r3, 0xf80(r3)
    blr
}

asm void fn_80387548(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    stfd f31, 0x100(r1)
    psq_st f31, 0x108(r1), 0, 0
    stw r31, 0xfc(r1)
    mr r31, r4
    stw r30, 0xf8(r1)
    mr r30, r3
    stw r29, 0xf4(r1)
    lwz r5, lbl_8087F0A8
    lwz r0, 0x28c(r5)
    cmpwi r0, 0x0
    beq lbl_fn_80387548_00000064
    addi r3, r5, 0x48c
    li r4, 0x7
    bl fn_801240B4
    cmpwi r3, 0x0
    beq lbl_fn_80387548_00000064
    mr r3, r30
    mr r4, r31
    bl fn_8037F9AC
    b lbl_fn_80387548_000003AC
lbl_fn_80387548_00000064:
    lwz r3, 0x808(r30)
    addi r4, r1, 0xb0
    psq_l f1, 0x8(r30), 0, 0
    addi r5, r1, 0xa4
    addi r0, r3, 0x1
    stw r0, 0x808(r30)
    lfs f2, 0x10(r30)
    addi r3, r1, 0x98
    stfs f2, 0xb8(r1)
    addi r7, r31, 0xf6c
    lwz r8, lbl_8087F0A8
    addi r6, r1, 0x8c
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x14(r30), 0, 0
    lfs f2, 0x1c(r30)
    stfs f2, 0xac(r1)
    psq_st f1, 0x0(r5), 0, 0
    psq_l f1, 0x20(r30), 0, 0
    lfs f2, 0x28(r30)
    stfs f2, 0xa0(r1)
    psq_st f1, 0x0(r3), 0, 0
    lwz r0, 0x40(r8)
    psq_l f1, 0x0(r7), 0, 0
    lfs f2, 0xf74(r31)
    cmpwi r0, 0x0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x94(r1)
    bne lbl_fn_80387548_00000130
    lfs f4, 0x4(r7)
    addi r3, r1, 0x74
    lfs f3, 0x52c(r31)
    lfs f5, 0x8(r7)
    fadds f6, f4, f3
    lfs f0, 0x530(r31)
    lfs f4, 0x0(r7)
    fadds f5, f5, f0
    lfs f3, 0x528(r31)
    lfs f0, lbl_808859E4
    fadds f3, f4, f3
    stfs f6, 0x6c(r1)
    fmuls f2, f5, f0
    fmuls f4, f6, f0
    stfs f5, 0x70(r1)
    fmuls f0, f3, f0
    stfs f4, 0x78(r1)
    stfs f0, 0x74(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f3, 0x68(r1)
    stfs f2, 0x7c(r1)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x94(r1)
lbl_fn_80387548_00000130:
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x6
    bne lbl_fn_80387548_000001C8
    lwz r0, 0x560(r31)
    cmpwi r0, 0xe
    bne lbl_fn_80387548_000001C8
    lfs f3, lbl_808858E8
    addi r3, r1, 0xc0
    lfs f0, lbl_808858F8
    li r4, 0x79
    stfs f3, 0x50(r1)
    stfs f3, 0x54(r1)
    stfs f0, 0x58(r1)
    lfs f1, 0x538(r31)
    bl fn_805F8E70
    addi r4, r1, 0x50
    addi r3, r1, 0xc0
    mr r5, r4
    bl fn_805F93C0
    lfs f5, 0x58(r1)
    lfs f4, lbl_80885914
    lfs f3, 0x54(r1)
    lfs f0, 0x50(r1)
    fmuls f5, f5, f4
    fmuls f6, f3, f4
    lfs f3, 0x90(r1)
    fmuls f7, f0, f4
    lfs f4, 0x8c(r1)
    lfs f0, 0x94(r1)
    fadds f3, f3, f6
    fadds f4, f4, f7
    stfs f7, 0x5c(r1)
    fadds f0, f0, f5
    stfs f6, 0x60(r1)
    stfs f5, 0x64(r1)
    stfs f4, 0x8c(r1)
    stfs f3, 0x90(r1)
    stfs f0, 0x94(r1)
lbl_fn_80387548_000001C8:
    lfs f5, 0x94(r1)
    addi r3, r1, 0x80
    lfs f4, 0xac(r1)
    mr r4, r3
    lfs f3, 0x90(r1)
    fsubs f8, f5, f4
    lfs f0, 0xa8(r1)
    lfs f6, 0x664(r30)
    fsubs f9, f3, f0
    lfs f4, 0x8c(r1)
    lfs f3, 0xa4(r1)
    fmuls f11, f8, f6
    lfs f0, 0xac(r1)
    fsubs f10, f4, f3
    fmuls f12, f9, f6
    lfs f3, 0xa8(r1)
    fadds f5, f0, f11
    fmuls f13, f10, f6
    lfs f0, 0xa4(r1)
    fadds f6, f3, f12
    stfs f5, 0xac(r1)
    fadds f7, f0, f13
    stfs f6, 0xa8(r1)
    stfs f7, 0xa4(r1)
    lfs f4, 0x530(r31)
    lfs f3, 0x52c(r31)
    lfs f0, 0x528(r31)
    fsubs f4, f5, f4
    fsubs f3, f6, f3
    stfs f10, 0x38(r1)
    fsubs f0, f7, f0
    stfs f9, 0x3c(r1)
    stfs f8, 0x40(r1)
    stfs f13, 0x44(r1)
    stfs f12, 0x48(r1)
    stfs f11, 0x4c(r1)
    stfs f0, 0x80(r1)
    stfs f3, 0x84(r1)
    stfs f4, 0x88(r1)
    bl fn_805F98D0
    lfs f5, 0x65c(r30)
    addi r6, r1, 0x2c
    lfs f4, 0x88(r1)
    addi r29, r1, 0xb0
    lfs f0, 0x84(r1)
    addi r3, r1, 0x80
    fmuls f4, f4, f5
    lfs f3, 0x80(r1)
    fmuls f6, f0, f5
    lfs f0, 0x530(r31)
    fmuls f5, f3, f5
    lfs f3, 0x52c(r31)
    fadds f2, f0, f4
    lfs f0, 0x528(r31)
    fadds f3, f3, f6
    stfs f5, 0x20(r1)
    fadds f0, f0, f5
    addi r4, r1, 0x98
    stfs f3, 0x30(r1)
    addi r5, r1, 0x8
    stfs f0, 0x2c(r1)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0xb8(r1)
    lfs f3, 0xb4(r1)
    lfs f0, 0x658(r30)
    stfs f6, 0x24(r1)
    fadds f0, f3, f0
    stfs f4, 0x28(r1)
    stfs f0, 0xb4(r1)
    stfs f2, 0x34(r1)
    lfs f31, 0x654(r30)
    bl fn_805F99B0
    lfs f4, 0x10(r1)
    mr r3, r30
    lfs f3, 0xc(r1)
    mr r4, r31
    fmuls f5, f4, f31
    lfs f0, 0x8(r1)
    fmuls f6, f3, f31
    lfs f3, 0xb4(r1)
    fmuls f7, f0, f31
    lfs f4, 0xb0(r1)
    lfs f0, 0xb8(r1)
    fadds f3, f3, f6
    fadds f4, f4, f7
    stfs f7, 0x14(r1)
    fadds f0, f0, f5
    mr r6, r29
    stfs f6, 0x18(r1)
    addi r5, r30, 0x648
    stfs f5, 0x1c(r1)
    addi r7, r1, 0xa4
    addi r8, r31, 0x528
    stfs f4, 0xb0(r1)
    stfs f3, 0xb4(r1)
    stfs f0, 0xb8(r1)
    bl fn_8038E540
    psq_l f1, 0x0(r29), 0, 0
    addi r4, r1, 0xa4
    lfs f2, 0xb8(r1)
    mr r3, r30
    stfs f2, 0x10(r30)
    psq_st f1, 0x8(r30), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0xac(r1)
    stfs f2, 0x1c(r30)
    psq_st f1, 0x14(r30), 0, 0
    bl fn_8004B378
    mr r4, r30
    addi r3, r30, 0x1f4
    bl fn_80392A04
    mr r3, r30
    bl fn_803920C8
    mr r3, r30
    bl fn_803928C0
    addi r3, r30, 0x1f4
    bl fn_8004B378
    lwz r3, lbl_8087EFB4
    addi r4, r30, 0x1f4
    bl fn_80116BD4
lbl_fn_80387548_000003AC:
    lwz r0, 0x114(r1)
    psq_l f31, 0x108(r1), 0, 0
    lfd f31, 0x100(r1)
    lwz r31, 0xfc(r1)
    lwz r30, 0xf8(r1)
    lwz r29, 0xf4(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_80387910(void)
{
    nofralloc
    stwu r1, -0x240(r1)
    mflr r0
    stw r0, 0x244(r1)
    stfd f31, 0x230(r1)
    psq_st f31, 0x238(r1), 0, 0
    stfd f30, 0x220(r1)
    psq_st f30, 0x228(r1), 0, 0
    stw r31, 0x21c(r1)
    stw r30, 0x218(r1)
    mr r30, r4
    stw r29, 0x214(r1)
    mr r29, r3
    addi r3, r1, 0x1c8
    addi r4, r29, 0x684
    bl fn_8037E964
    addi r3, r29, 0x4b4
    bl fn_803829C0
    cmpwi r3, 0x0
    beq lbl_fn_80387910_00000454
    addi r3, r29, 0x4b4
    bl fn_803829D4
    lfs f1, 0x4b8(r29)
    addi r3, r1, 0x1c8
    addi r4, r29, 0x684
    addi r5, r29, 0x4c0
    bl fn_8037F830
    lfs f1, 0x4b8(r29)
    bl fn_80011220
    lfs f0, lbl_808859C8
    fcmpo cr0, f1, f0
    bge lbl_fn_80387910_00000454
    addi r3, r29, 0x4b4
    bl fn_8032EC94
lbl_fn_80387910_00000454:
    mr r3, r29
    bl fn_80113CCC
    mr r4, r3
    addi r3, r1, 0x128
    bl fn_8001047C
    mr r3, r29
    bl fn_80112958
    mr r4, r3
    addi r3, r1, 0x11c
    bl fn_8001047C
    addi r3, r1, 0x110
    addi r4, r1, 0x11c
    addi r5, r1, 0x128
    bl fn_80013338
    addi r3, r1, 0x104
    addi r4, r1, 0x110
    bl fn_8001047C
    lfs f0, lbl_808858E8
    addi r3, r1, 0x104
    stfs f0, 0x108(r1)
    bl fn_801162A0
    bl fn_80011220
    lfs f0, lbl_808859C8
    fcmpo cr0, f1, f0
    bge lbl_fn_80387910_000004D0
    lfs f1, lbl_808858E8
    addi r3, r1, 0x104
    lfs f3, lbl_808858F8
    fmr f2, f1
    bl fn_80057A68
    b lbl_fn_80387910_000004D8
lbl_fn_80387910_000004D0:
    addi r3, r1, 0x104
    bl fn_800F7FF0
lbl_fn_80387910_000004D8:
    addi r3, r1, 0x110
    bl fn_8000D3A4
    stfs f1, 0x10(r1)
    mr r3, r29
    bl fn_80116BA4
    fmr f31, f1
    addi r3, r1, 0x110
    bl fn_800F7FF0
    addi r3, r1, 0xb0
    addi r4, r1, 0x110
    bl fn_8013C3B4
    addi r3, r1, 0xf8
    addi r4, r1, 0xb0
    bl fn_80011034
    lfs f0, 0x1d0(r1)
    addi r31, r29, 0x8a4
    lfs f2, 0x8a0(r29)
    fneg f1, f0
    lfs f0, 0xf8(r1)
    stfs f2, 0xfc(r1)
    fsubs f1, f1, f0
    fadds f0, f0, f1
    stfs f0, 0xf8(r1)
    bl fn_8037F664
    lfs f2, 0x10(r1)
    mr r4, r31
    lfs f0, 0x12c(r1)
    addi r3, r1, 0xec
    addi r5, r1, 0x128
    fnmsubs f0, f2, f1, f0
    stfs f0, 0x12c(r1)
    bl fn_80013338
    addi r3, r1, 0xec
    bl fn_8000D3A4
    lfs f2, 0x1c8(r1)
    mr r4, r31
    lfs f0, 0x1e4(r1)
    addi r3, r1, 0x11c
    fsubs f2, f2, f1
    fmuls f2, f2, f0
    fadds f30, f1, f2
    bl fn_8000D124
    addi r3, r29, 0x868
    addi r4, r1, 0x11c
    bl fn_8000D124
    lfs f1, lbl_808858E8
    fneg f3, f30
    addi r3, r1, 0x110
    fmr f2, f1
    bl fn_80057A68
    addi r3, r1, 0xa4
    addi r4, r1, 0xf8
    bl fn_8013C3B4
    addi r3, r1, 0x198
    addi r4, r1, 0xa4
    bl fn_800109E0
    addi r3, r1, 0x110
    addi r4, r1, 0x198
    bl fn_80011410
    addi r3, r1, 0x98
    addi r4, r1, 0x11c
    addi r5, r1, 0x110
    bl fn_80013410
    addi r3, r1, 0x128
    addi r4, r1, 0x98
    bl fn_8000D124
    lfs f1, 0x1cc(r1)
    addi r7, r1, 0x11c
    lfs f0, 0x1ec(r1)
    mr r3, r29
    fsubs f1, f1, f31
    mr r4, r30
    mr r8, r7
    addi r5, r1, 0x1c8
    addi r6, r1, 0x128
    fmadds f31, f0, f1, f31
    bl fn_8038E9B0
    lfs f1, lbl_808858E8
    addi r3, r1, 0xe0
    lfs f3, lbl_808858F8
    fmr f2, f1
    bl fn_8000D114
    lfs f0, 0x8a0(r29)
    addi r3, r1, 0x168
    fneg f1, f0
    bl fn_8013A13C
    addi r3, r1, 0xe0
    addi r4, r1, 0x168
    bl fn_80011410
    addi r3, r1, 0xd4
    addi r4, r1, 0x11c
    addi r5, r1, 0x128
    bl fn_80013338
    addi r3, r1, 0xd4
    bl fn_801C3910
    lfs f0, lbl_80885958
    fcmpo cr0, f1, f0
    bge lbl_fn_80387910_00000680
    lfs f1, lbl_80885A68
    addi r3, r1, 0x8c
    addi r4, r1, 0xe0
    bl fn_800F72CC
    addi r3, r1, 0x11c
    addi r4, r1, 0x8c
    bl fn_80012C88
    b lbl_fn_80387910_000006E4
lbl_fn_80387910_00000680:
    lfs f0, lbl_808858E8
    addi r3, r1, 0xd4
    stfs f0, 0xd8(r1)
    bl fn_800F7FF0
    addi r3, r1, 0xd4
    addi r4, r1, 0xe0
    bl fn_801A03E8
    lfs f0, lbl_808858E8
    fcmpo cr0, f1, f0
    bge lbl_fn_80387910_000006E4
    addi r3, r1, 0xc8
    addi r4, r1, 0x128
    bl fn_8001047C
    lfs f0, 0x120(r1)
    addi r3, r1, 0x80
    stfs f0, 0xcc(r1)
    addi r4, r1, 0xe0
    lfs f1, lbl_80885A68
    bl fn_800F72CC
    addi r3, r1, 0xc8
    addi r4, r1, 0x80
    bl fn_80012C88
    addi r3, r1, 0x11c
    addi r4, r1, 0xc8
    bl fn_8000D124
lbl_fn_80387910_000006E4:
    addi r3, r1, 0x74
    addi r4, r1, 0x11c
    addi r5, r1, 0x128
    bl fn_80013338
    addi r3, r1, 0x110
    addi r4, r1, 0x74
    bl fn_8000D124
    lfs f0, lbl_808858E8
    addi r3, r1, 0x104
    stfs f0, 0x114(r1)
    bl fn_801162A0
    bl fn_80011220
    lfs f0, lbl_808859C8
    fcmpo cr0, f1, f0
    bge lbl_fn_80387910_00000730
    lfs f1, 0x124(r1)
    lfs f0, lbl_8088593C
    fadds f0, f1, f0
    stfs f0, 0x124(r1)
lbl_fn_80387910_00000730:
    addi r3, r1, 0x68
    addi r4, r1, 0x11c
    addi r5, r1, 0x128
    bl fn_80013338
    addi r3, r1, 0x68
    bl fn_8000D3A4
    frsp f2, f1
    lfs f0, lbl_8088593C
    stfs f1, 0x10(r1)
    fcmpo cr0, f2, f0
    ble lbl_fn_80387910_00000834
    mr r3, r29
    bl fn_80385B40
    stfs f1, 0x8(r1)
    addi r3, r1, 0x8
    lfs f1, lbl_80885934
    addi r4, r1, 0x10
    bl fn_800F8524
    stfs f1, 0x10(r1)
    mr r4, r29
    addi r3, r1, 0x50
    bl fn_80383728
    addi r3, r1, 0x5c
    addi r4, r1, 0x50
    bl fn_80011034
    lfs f0, 0x5c(r1)
    addi r3, r1, 0x44
    stfs f0, 0xc(r1)
    addi r4, r1, 0x11c
    addi r5, r1, 0x128
    bl fn_80013338
    addi r3, r1, 0xbc
    addi r4, r1, 0x44
    bl fn_80011034
    lfs f1, lbl_80885934
    addi r3, r1, 0xc
    addi r4, r1, 0xbc
    bl fn_800F8524
    stfs f1, 0xbc(r1)
    addi r3, r1, 0x138
    addi r4, r1, 0xbc
    bl fn_800109E0
    lfs f1, lbl_808858E8
    addi r3, r1, 0x2c
    lfs f3, lbl_808858F8
    fmr f2, f1
    bl fn_8000D114
    mr r4, r3
    addi r3, r1, 0x38
    addi r5, r1, 0x138
    bl fn_8010F6FC
    addi r3, r1, 0x110
    addi r4, r1, 0x38
    bl fn_8000D124
    lfs f1, 0x10(r1)
    addi r3, r1, 0x14
    addi r4, r1, 0x110
    bl fn_800F72CC
    addi r3, r1, 0x20
    addi r4, r1, 0x11c
    addi r5, r1, 0x14
    bl fn_80013338
    addi r3, r1, 0x128
    addi r4, r1, 0x20
    bl fn_8000D124
lbl_fn_80387910_00000834:
    mr r3, r29
    addi r4, r1, 0x128
    bl fn_80114AA0
    mr r3, r29
    addi r4, r1, 0x11c
    bl fn_80112960
    fmr f1, f31
    mr r3, r29
    bl fn_8037F688
    mr r3, r29
    bl fn_8004B378
    mr r3, r29
    li r4, 0x0
    li r5, 0x1
    li r6, 0x0
    li r7, 0x0
    bl fn_80392964
    lwz r0, 0x244(r1)
    psq_l f31, 0x238(r1), 0, 0
    lfd f31, 0x230(r1)
    psq_l f30, 0x228(r1), 0, 0
    lfd f30, 0x220(r1)
    lwz r31, 0x21c(r1)
    lwz r30, 0x218(r1)
    lwz r29, 0x214(r1)
    mtlr r0
    addi r1, r1, 0x240
    blr
}

asm void fn_80387DE4(void)
{
    nofralloc
    stwu r1, -0x140(r1)
    mflr r0
    addi r7, r3, 0x8a4
    stw r0, 0x144(r1)
    addi r6, r1, 0x5c
    stfd f31, 0x130(r1)
    psq_st f31, 0x138(r1), 0, 0
    stfd f30, 0x120(r1)
    psq_st f30, 0x128(r1), 0, 0
    stw r31, 0x11c(r1)
    mr r31, r4
    stw r30, 0x118(r1)
    mr r30, r3
    stw r29, 0x114(r1)
    li r29, 0x0
    stw r28, 0x110(r1)
    li r28, 0x0
    lwz r5, lbl_8087F0A8
    lfs f2, 0x8ac(r3)
    lfs f3, 0x8c(r5)
    psq_l f1, 0x0(r7), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    lwz r0, lbl_8087F430
    lfs f0, 0x60(r1)
    cmpwi r0, 0x0
    stfs f2, 0x64(r1)
    fadds f0, f0, f3
    stfs f0, 0x60(r1)
    beq lbl_fn_80387DE4_0000092C
    mr r3, r0
    bl fn_80373148
    cmpwi r3, 0x0
    beq lbl_fn_80387DE4_0000092C
    li r28, 0x1
lbl_fn_80387DE4_0000092C:
    cmpwi r28, 0x0
    beq lbl_fn_80387DE4_0000094C
    lwz r3, lbl_8087F430
    bl fn_80373148
    lwz r0, 0xec(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80387DE4_0000094C
    li r29, 0x1
lbl_fn_80387DE4_0000094C:
    cmpwi r29, 0x0
    bne lbl_fn_80387DE4_000009B4
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80387DE4_000009A4
    bl fn_80373148
    cmpwi r3, 0x0
    beq lbl_fn_80387DE4_000009A4
    lwz r3, lbl_8087F430
    bl fn_80373148
    lwz r0, 0x4c(r3)
    cmpwi r0, 0x3
    bne lbl_fn_80387DE4_00000988
    lfs f3, lbl_80885914
    b lbl_fn_80387DE4_000009A8
lbl_fn_80387DE4_00000988:
    cmpwi r0, 0x11
    bne lbl_fn_80387DE4_000009A4
    lwz r0, 0x50(r3)
    cmpwi r0, 0x2
    bne lbl_fn_80387DE4_000009A4
    lfs f3, lbl_8088597C
    b lbl_fn_80387DE4_000009A8
lbl_fn_80387DE4_000009A4:
    lfs f3, lbl_80885910
lbl_fn_80387DE4_000009A8:
    lfs f0, 0x60(r1)
    fadds f0, f0, f3
    stfs f0, 0x60(r1)
lbl_fn_80387DE4_000009B4:
    lwz r0, 0x7f4(r30)
    lwz r3, lbl_8087F0A8
    cmpwi r0, 0x0
    lfs f31, 0x8c(r3)
    beq lbl_fn_80387DE4_00000AB8
    lfs f0, 0x7f8(r30)
    lis r3, lbl_8074E010@ha
    lfd f2, lbl_8074E010@l(r3)
    fneg f1, f0
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_808858EC
    fcmpo cr0, f3, f0
    ble lbl_fn_80387DE4_000009F4
    lfs f0, lbl_808859D4
    fsubs f3, f3, f0
lbl_fn_80387DE4_000009F4:
    lfs f0, lbl_808859D8
    fcmpo cr0, f3, f0
    bge lbl_fn_80387DE4_00000A08
    lfs f0, lbl_808859D4
    fadds f3, f3, f0
lbl_fn_80387DE4_00000A08:
    lfs f0, 0x8a0(r30)
    lis r3, lbl_8074E010@ha
    lfd f2, lbl_8074E010@l(r3)
    fsubs f1, f0, f3
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_808858EC
    fcmpo cr0, f3, f0
    ble lbl_fn_80387DE4_00000A34
    lfs f0, lbl_808859D4
    fsubs f3, f3, f0
lbl_fn_80387DE4_00000A34:
    lfs f0, lbl_808859D8
    fcmpo cr0, f3, f0
    bge lbl_fn_80387DE4_00000A48
    lfs f0, lbl_808859D4
    fadds f3, f3, f0
lbl_fn_80387DE4_00000A48:
    fneg f30, f3
    lfs f0, lbl_80885938
    lis r3, lbl_8074E010@ha
    lfs f3, 0x8a0(r30)
    lfd f2, lbl_8074E010@l(r3)
    fmuls f0, f0, f30
    stfs f0, 0x96c(r30)
    fadds f1, f0, f3
    bl fn_8068AEA8
    frsp f4, f1
    lfs f0, lbl_808858EC
    fcmpo cr0, f4, f0
    ble lbl_fn_80387DE4_00000A84
    lfs f0, lbl_808859D4
    fsubs f4, f4, f0
lbl_fn_80387DE4_00000A84:
    lfs f0, lbl_808859D8
    fcmpo cr0, f4, f0
    bge lbl_fn_80387DE4_00000A98
    lfs f0, lbl_808859D4
    fadds f4, f4, f0
lbl_fn_80387DE4_00000A98:
    fabs f3, f30
    lfs f0, lbl_80885950
    stfs f4, 0x8a0(r30)
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80387DE4_00000AB8
    li r0, 0x0
    stw r0, 0x7f4(r30)
lbl_fn_80387DE4_00000AB8:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    bl fn_800A58D0
    cmpwi r3, 0x0
    beq lbl_fn_80387DE4_00000C0C
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x2
    li r6, 0x0
    bl fn_800A56A8
    fneg f4, f1
    lfs f0, lbl_808859E0
    fabs f3, f4
    frsp f3, f3
    fcmpo cr0, f3, f0
    ble lbl_fn_80387DE4_00000B8C
    lfs f0, lbl_808858E8
    fcmpo cr0, f4, f0
    ble lbl_fn_80387DE4_00000B0C
    lfs f6, lbl_808858F8
    b lbl_fn_80387DE4_00000B10
lbl_fn_80387DE4_00000B0C:
    lfs f6, lbl_80885904
lbl_fn_80387DE4_00000B10:
    lfs f0, lbl_808859E0
    lfs f4, lbl_80885A08
    fsubs f5, f3, f0
    lfs f3, lbl_80885920
    lfs f0, 0xa14(r30)
    lfs f7, lbl_8088592C
    fdivs f4, f5, f4
    fmuls f5, f6, f4
    fneg f4, f5
    fmadds f0, f4, f3, f0
    stfs f0, 0xa14(r30)
    fcmpo cr0, f7, f0
    bge lbl_fn_80387DE4_00000B48
    b lbl_fn_80387DE4_00000B4C
lbl_fn_80387DE4_00000B48:
    fmr f7, f0
lbl_fn_80387DE4_00000B4C:
    lfs f3, lbl_80885A0C
    fcmpo cr0, f3, f7
    ble lbl_fn_80387DE4_00000B5C
    b lbl_fn_80387DE4_00000B74
lbl_fn_80387DE4_00000B5C:
    lfs f3, lbl_8088592C
    lfs f0, 0xa14(r30)
    fcmpo cr0, f3, f0
    bge lbl_fn_80387DE4_00000B70
    b lbl_fn_80387DE4_00000B74
lbl_fn_80387DE4_00000B70:
    fmr f3, f0
lbl_fn_80387DE4_00000B74:
    fabs f4, f5
    frsp f0, f3
    frsp f3, f4
    fmuls f0, f0, f3
    stfs f0, 0xa14(r30)
    b lbl_fn_80387DE4_00000BB8
lbl_fn_80387DE4_00000B8C:
    lfs f4, 0xa14(r30)
    lfs f3, lbl_80885A10
    lfs f0, lbl_80885A14
    fmuls f3, f4, f3
    stfs f3, 0xa14(r30)
    fabs f3, f3
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80387DE4_00000BB8
    lfs f0, lbl_808858E8
    stfs f0, 0xa14(r30)
lbl_fn_80387DE4_00000BB8:
    lfs f3, lbl_808858E8
    lfs f0, 0xa14(r30)
    fcmpu cr0, f3, f0
    beq lbl_fn_80387DE4_00000C0C
    lfs f3, 0x8a0(r30)
    lis r3, lbl_8074E010@ha
    lfd f2, lbl_8074E010@l(r3)
    fadds f1, f0, f3
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_808858EC
    fcmpo cr0, f3, f0
    ble lbl_fn_80387DE4_00000BF4
    lfs f0, lbl_808859D4
    fsubs f3, f3, f0
lbl_fn_80387DE4_00000BF4:
    lfs f0, lbl_808859D8
    fcmpo cr0, f3, f0
    bge lbl_fn_80387DE4_00000C08
    lfs f0, lbl_808859D4
    fadds f3, f3, f0
lbl_fn_80387DE4_00000C08:
    stfs f3, 0x8a0(r30)
lbl_fn_80387DE4_00000C0C:
    lwz r3, lbl_8087F430
    li r28, 0x0
    li r29, 0x0
    cmpwi r3, 0x0
    beq lbl_fn_80387DE4_00000C30
    bl fn_80373148
    cmpwi r3, 0x0
    beq lbl_fn_80387DE4_00000C30
    li r29, 0x1
lbl_fn_80387DE4_00000C30:
    cmpwi r29, 0x0
    beq lbl_fn_80387DE4_00000C50
    lwz r3, lbl_8087F430
    bl fn_80373148
    lwz r0, 0xec(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80387DE4_00000C50
    li r28, 0x1
lbl_fn_80387DE4_00000C50:
    cmpwi r28, 0x0
    bne lbl_fn_80387DE4_00000C70
    psq_l f1, 0x528(r31), 0, 0
    addi r3, r30, 0x8a4
    lfs f2, 0x530(r31)
    stfs f2, 0x8ac(r30)
    psq_st f1, 0x0(r3), 0, 0
    b lbl_fn_80387DE4_00000F3C
lbl_fn_80387DE4_00000C70:
    li r0, 0x0
    stw r0, 0xec(r1)
    addi r28, r31, 0x528
    addi r5, r1, 0x8
    stw r0, 0xf0(r1)
    addi r6, r1, 0x14
    lfs f4, lbl_80885930
    addi r4, r1, 0x68
    stw r0, 0xf4(r1)
    li r29, -0x1
    lwz r3, lbl_8087EE98
    lis r7, 0x800
    stw r0, 0xf8(r1)
    li r8, 0x0
    li r9, 0x0
    lfs f2, 0x530(r31)
    psq_l f1, 0x0(r28), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    lfs f3, 0xc(r1)
    lfs f0, 0x18(r1)
    fadds f3, f3, f4
    stfs f2, 0x10(r1)
    fsubs f0, f0, f4
    stfs f2, 0x1c(r1)
    stfs f3, 0xc(r1)
    stfs f0, 0x18(r1)
    stw r0, 0x9c(r1)
    stw r0, 0xa0(r1)
    stw r0, 0xa4(r1)
    stw r0, 0xa8(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_80387DE4_00000D0C
    lwz r3, 0x9c(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80387DE4_00000D58
    lwz r29, 0x0(r3)
    b lbl_fn_80387DE4_00000D58
lbl_fn_80387DE4_00000D0C:
    lfs f0, lbl_808858E8
    mr r5, r28
    stfs f0, 0x20(r1)
    addi r4, r1, 0x68
    lwz r3, lbl_8087EE98
    addi r6, r1, 0x20
    stfs f0, 0x24(r1)
    lis r7, 0x800
    lfs f1, lbl_80885974
    li r8, 0x0
    stfs f0, 0x28(r1)
    li r9, 0x0
    bl fn_8004D388
    cmpwi r3, 0x0
    beq lbl_fn_80387DE4_00000D58
    lwz r3, 0x9c(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80387DE4_00000D58
    lwz r29, 0x0(r3)
lbl_fn_80387DE4_00000D58:
    lfs f3, 0x530(r31)
    addi r3, r1, 0x50
    lfs f0, 0x8ac(r30)
    lis r28, 0x800
    lfs f5, 0x52c(r31)
    fsubs f6, f3, f0
    lfs f4, 0x8a8(r30)
    lfs f3, 0x528(r31)
    lfs f0, 0x8a4(r30)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x54(r1)
    stfs f0, 0x50(r1)
    stfs f6, 0x58(r1)
    bl fn_805F9940
    lfs f0, lbl_80885974
    fcmpo cr0, f1, f0
    ble lbl_fn_80387DE4_00000DC4
    psq_l f1, 0x528(r31), 0, 0
    addi r3, r30, 0x8a4
    lfs f2, 0x530(r31)
    stfs f2, 0x8ac(r30)
    lfs f0, lbl_808858E8
    psq_st f1, 0x0(r3), 0, 0
    stfs f0, 0x50(r1)
    stfs f0, 0x54(r1)
    stfs f0, 0x58(r1)
lbl_fn_80387DE4_00000DC4:
    fneg f3, f31
    lfs f0, lbl_808859E4
    fmr f1, f31
    lwz r3, lbl_8087EE98
    mr r7, r28
    mr r9, r29
    fmuls f0, f0, f3
    addi r4, r1, 0xb8
    addi r5, r1, 0x5c
    addi r6, r1, 0x50
    stfs f0, 0x54(r1)
    li r8, 0x0
    bl fn_8004D388
    cmpwi r3, 0x0
    beq lbl_fn_80387DE4_00000E7C
    lfs f3, 0xd0(r1)
    lfs f0, 0x64(r1)
    lwz r0, 0xf4(r1)
    fsubs f6, f3, f0
    lfs f5, 0xcc(r1)
    lfs f4, 0x60(r1)
    clrlwi r0, r0, 31
    lfs f3, 0xc8(r1)
    cmplwi r0, 0x1
    lfs f0, 0x5c(r1)
    fsubs f4, f5, f4
    stfs f6, 0x4c(r1)
    fsubs f0, f3, f0
    stfs f4, 0x48(r1)
    stfs f0, 0x44(r1)
    beq lbl_fn_80387DE4_00000E48
    lfs f0, lbl_808858E8
    stfs f0, 0x48(r1)
lbl_fn_80387DE4_00000E48:
    lfs f3, 0x8a4(r30)
    lfs f0, 0x44(r1)
    lfs f5, 0x8a8(r30)
    fadds f6, f3, f0
    lfs f4, 0x48(r1)
    lfs f3, 0x8ac(r30)
    lfs f0, 0x4c(r1)
    fadds f4, f5, f4
    stfs f6, 0x8a4(r30)
    fadds f0, f3, f0
    stfs f4, 0x8a8(r30)
    stfs f0, 0x8ac(r30)
    b lbl_fn_80387DE4_00000EB4
lbl_fn_80387DE4_00000E7C:
    lfs f0, lbl_808858E8
    stfs f0, 0x54(r1)
    lfs f0, 0x50(r1)
    lfs f3, 0x8a4(r30)
    lfs f4, 0x8a8(r30)
    fadds f0, f3, f0
    lfs f3, 0x8ac(r30)
    stfs f0, 0x8a4(r30)
    lfs f0, 0x54(r1)
    fadds f0, f4, f0
    stfs f0, 0x8a8(r30)
    lfs f0, 0x58(r1)
    fadds f0, f3, f0
    stfs f0, 0x8ac(r30)
lbl_fn_80387DE4_00000EB4:
    addi r3, r30, 0x8a4
    lfs f2, 0x8ac(r30)
    psq_l f1, 0x0(r3), 0, 0
    addi r5, r1, 0x38
    addi r6, r1, 0x2c
    lfs f0, lbl_80885914
    psq_st f1, 0x0(r5), 0, 0
    mr r7, r28
    fadds f5, f0, f31
    lfs f0, lbl_80885930
    psq_st f1, 0x0(r6), 0, 0
    mr r9, r29
    lfs f4, 0x3c(r1)
    addi r4, r1, 0xb8
    lfs f3, 0x30(r1)
    fadds f4, f4, f5
    stfs f2, 0x40(r1)
    li r8, 0x0
    fsubs f0, f3, f0
    lwz r3, lbl_8087EE98
    stfs f2, 0x34(r1)
    stfs f4, 0x3c(r1)
    stfs f0, 0x30(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_80387DE4_00000F24
    lfs f0, 0xcc(r1)
    stfs f0, 0x8a8(r30)
lbl_fn_80387DE4_00000F24:
    addi r4, r30, 0x8a4
    lfs f2, 0x8ac(r30)
    addi r3, r30, 0x8b0
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x8b8(r30)
lbl_fn_80387DE4_00000F3C:
    mr r3, r30
    mr r4, r31
    bl fn_80387910
    lwz r0, 0x144(r1)
    psq_l f31, 0x138(r1), 0, 0
    lfd f31, 0x130(r1)
    psq_l f30, 0x128(r1), 0, 0
    lfd f30, 0x120(r1)
    lwz r31, 0x11c(r1)
    lwz r30, 0x118(r1)
    lwz r29, 0x114(r1)
    lwz r28, 0x110(r1)
    mtlr r0
    addi r1, r1, 0x140
    blr
}

asm void fn_803884B8(void)
{
    nofralloc
    stwu r1, -0x170(r1)
    mflr r0
    lfs f3, lbl_808858E8
    stw r0, 0x174(r1)
    addi r6, r1, 0xc8
    addi r7, r1, 0xbc
    lfs f0, lbl_808858F8
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
    stw r31, 0x11c(r1)
    stw r30, 0x118(r1)
    mr r30, r4
    stw r29, 0x114(r1)
    mr r29, r3
    lwz r5, 0x808(r3)
    psq_l f1, 0x8(r3), 0, 0
    addi r0, r5, 0x1
    stw r0, 0x808(r3)
    lfs f2, 0x10(r3)
    addi r5, r1, 0xb0
    stfs f2, 0xd0(r1)
    psq_st f1, 0x0(r6), 0, 0
    psq_l f1, 0x14(r3), 0, 0
    lfs f2, 0x1c(r3)
    stfs f2, 0xc4(r1)
    psq_st f1, 0x0(r7), 0, 0
    psq_l f1, 0x20(r3), 0, 0
    lfs f2, 0x28(r3)
    addi r3, r1, 0xd8
    stfs f2, 0xb8(r1)
    psq_st f1, 0x0(r5), 0, 0
    stfs f3, 0x98(r1)
    stfs f3, 0x9c(r1)
    stfs f0, 0xa0(r1)
    lfs f1, 0x538(r4)
    li r4, 0x79
    stfs f3, 0xa4(r1)
    stfs f3, 0xa8(r1)
    stfs f3, 0xac(r1)
    bl fn_805F8E70
    addi r4, r1, 0x98
    addi r3, r1, 0xd8
    mr r5, r4
    bl fn_805F93C0
    lwz r0, 0x560(r30)
    lfs f31, 0x7bc(r29)
    cmpwi r0, 0xf
    lfs f30, 0x7c0(r29)
    lfs f29, 0x7c4(r29)
    lfs f28, 0x664(r29)
    beq lbl_fn_803884B8_00001078
    cmpwi r0, 0xb
    beq lbl_fn_803884B8_00001118
    cmpwi r0, 0x10
    beq lbl_fn_803884B8_00001284
    b lbl_fn_803884B8_000012DC
lbl_fn_803884B8_00001078:
    lfs f3, 0xa0(r1)
    addi r4, r1, 0x80
    lfs f0, 0x9c(r1)
    addi r3, r1, 0x98
    fneg f6, f3
    lfs f3, 0x98(r1)
    fneg f4, f0
    lfs f0, lbl_80885938
    fneg f3, f3
    addi r6, r1, 0x74
    stfs f3, 0x80(r1)
    frsp f2, f6
    addi r5, r1, 0xa4
    stfs f4, 0x84(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0xa0(r1)
    lfs f4, 0xf74(r30)
    lfs f3, 0x898(r29)
    lfs f5, 0xf70(r30)
    fsubs f7, f4, f3
    lfs f3, 0x894(r29)
    lfs f4, 0xf6c(r30)
    fsubs f5, f5, f3
    lfs f3, 0x890(r29)
    fmuls f2, f7, f0
    fsubs f3, f4, f3
    stfs f6, 0x88(r1)
    fmuls f4, f5, f0
    stfs f3, 0x68(r1)
    fmuls f0, f3, f0
    stfs f4, 0x78(r1)
    stfs f0, 0x74(r1)
    psq_l f1, 0x0(r6), 0, 0
    stfs f5, 0x6c(r1)
    stfs f7, 0x70(r1)
    stfs f2, 0x7c(r1)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0xac(r1)
    b lbl_fn_803884B8_000012DC
lbl_fn_803884B8_00001118:
    lfs f28, 0x2e4(r30)
    addi r3, r30, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    lfs f0, lbl_80885A6C
    lfs f3, lbl_80885A04
    fmuls f0, f0, f28
    fdivs f0, f0, f1
    fcmpo cr0, f3, f0
    bge lbl_fn_803884B8_00001144
    b lbl_fn_803884B8_00001160
lbl_fn_803884B8_00001144:
    lfs f28, 0x2e4(r30)
    addi r3, r30, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    lfs f0, lbl_80885A6C
    fmuls f0, f0, f28
    fdivs f3, f0, f1
lbl_fn_803884B8_00001160:
    lfs f4, 0x2e4(r30)
    lfs f0, lbl_80885914
    lfs f5, lbl_808858F8
    fdivs f0, f4, f0
    fsubs f3, f5, f3
    fcmpo cr0, f5, f0
    fmuls f31, f31, f3
    bge lbl_fn_803884B8_00001184
    b lbl_fn_803884B8_00001188
lbl_fn_803884B8_00001184:
    fmr f5, f0
lbl_fn_803884B8_00001188:
    lfs f3, lbl_8087DCF8
    lfs f4, 0x2e4(r30)
    lfs f0, lbl_80885914
    fsubs f3, f3, f30
    lfs f27, lbl_808858E8
    fsubs f0, f4, f0
    fmadds f28, f5, f3, f30
    fcmpo cr0, f27, f0
    ble lbl_fn_803884B8_000011B0
    b lbl_fn_803884B8_000011B4
lbl_fn_803884B8_000011B0:
    fmr f27, f0
lbl_fn_803884B8_000011B4:
    addi r3, r30, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    lfs f4, lbl_80885914
    lfs f0, lbl_80885A44
    fsubs f3, f1, f4
    lfs f5, lbl_808859E4
    fmuls f0, f0, f27
    fdivs f0, f0, f3
    fcmpo cr0, f5, f0
    bge lbl_fn_803884B8_000011E4
    b lbl_fn_803884B8_00001220
lbl_fn_803884B8_000011E4:
    lfs f0, 0x2e4(r30)
    lfs f27, lbl_808858E8
    fsubs f0, f0, f4
    fcmpo cr0, f27, f0
    ble lbl_fn_803884B8_000011FC
    b lbl_fn_803884B8_00001200
lbl_fn_803884B8_000011FC:
    fmr f27, f0
lbl_fn_803884B8_00001200:
    addi r3, r30, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    lfs f3, lbl_80885914
    lfs f0, lbl_80885A44
    fsubs f3, f1, f3
    fmuls f0, f0, f27
    fdivs f5, f0, f3
lbl_fn_803884B8_00001220:
    lfs f0, lbl_808858F8
    addi r3, r30, 0xb0
    lfs f27, 0x2e4(r30)
    li r4, 0x0
    fadds f0, f0, f5
    fmuls f30, f28, f0
    bl fn_80097D7C
    lfs f0, lbl_80885A6C
    lfs f3, lbl_80885A04
    fmuls f0, f0, f27
    fdivs f0, f0, f1
    fcmpo cr0, f3, f0
    bge lbl_fn_803884B8_00001258
    b lbl_fn_803884B8_00001274
lbl_fn_803884B8_00001258:
    lfs f27, 0x2e4(r30)
    addi r3, r30, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    lfs f0, lbl_80885A6C
    fmuls f0, f0, f27
    fdivs f3, f0, f1
lbl_fn_803884B8_00001274:
    lfs f28, lbl_808858F8
    fsubs f0, f28, f3
    fmuls f29, f29, f0
    b lbl_fn_803884B8_000012DC
lbl_fn_803884B8_00001284:
    lfs f27, 0x2e4(r30)
    addi r3, r30, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    lfs f0, lbl_80885A44
    lfs f3, lbl_80885A04
    fmuls f0, f0, f27
    fdivs f0, f0, f1
    fcmpo cr0, f3, f0
    bge lbl_fn_803884B8_000012B0
    b lbl_fn_803884B8_000012CC
lbl_fn_803884B8_000012B0:
    lfs f27, 0x2e4(r30)
    addi r3, r30, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    lfs f0, lbl_80885A44
    fmuls f0, f0, f27
    fdivs f3, f0, f1
lbl_fn_803884B8_000012CC:
    lfs f0, lbl_808858F8
    lfs f28, lbl_80885938
    fsubs f0, f0, f3
    fmuls f29, f29, f0
lbl_fn_803884B8_000012DC:
    lfs f4, 0xa0(r1)
    mr r4, r30
    lfs f3, 0x9c(r1)
    addi r3, r1, 0x50
    lfs f0, 0x98(r1)
    fmuls f4, f4, f29
    fmuls f3, f3, f29
    fmuls f0, f0, f29
    stfs f4, 0x4c(r1)
    stfs f0, 0x44(r1)
    stfs f3, 0x48(r1)
    bl fn_80178088
    lfs f5, 0x58(r1)
    mr r4, r30
    lfs f0, 0x4c(r1)
    addi r3, r1, 0x20
    lfs f4, 0x54(r1)
    fadds f7, f5, f0
    lfs f3, 0x48(r1)
    lfs f0, 0xac(r1)
    fadds f8, f4, f3
    lfs f4, 0xa8(r1)
    fadds f9, f7, f0
    lfs f0, 0xc4(r1)
    fadds f10, f8, f4
    lfs f6, 0x50(r1)
    fsubs f12, f9, f0
    lfs f5, 0x44(r1)
    lfs f0, 0xc0(r1)
    fadds f6, f6, f5
    fsubs f13, f10, f0
    lfs f3, 0xa4(r1)
    fmuls f29, f12, f28
    lfs f5, 0xbc(r1)
    fadds f11, f6, f3
    stfs f6, 0x5c(r1)
    fmuls f6, f13, f28
    lfs f3, 0xc0(r1)
    fsubs f5, f11, f5
    stfs f8, 0x60(r1)
    lfs f0, 0xc4(r1)
    fadds f3, f3, f6
    fmuls f8, f5, f28
    lfs f4, 0xbc(r1)
    fadds f0, f0, f29
    stfs f7, 0x64(r1)
    fadds f4, f4, f8
    stfs f11, 0x8c(r1)
    stfs f10, 0x90(r1)
    stfs f9, 0x94(r1)
    stfs f5, 0x2c(r1)
    stfs f13, 0x30(r1)
    stfs f12, 0x34(r1)
    stfs f8, 0x38(r1)
    stfs f6, 0x3c(r1)
    stfs f29, 0x40(r1)
    stfs f4, 0xbc(r1)
    stfs f3, 0xc0(r1)
    stfs f0, 0xc4(r1)
    bl fn_80178088
    addi r3, r1, 0x20
    lfs f2, 0x28(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r31, r1, 0xc8
    psq_st f1, 0x0(r31), 0, 0
    addi r3, r1, 0x98
    addi r4, r1, 0xb0
    addi r5, r1, 0x8
    lfs f0, 0xcc(r1)
    stfs f2, 0xd0(r1)
    fadds f0, f0, f30
    stfs f0, 0xcc(r1)
    bl fn_805F99B0
    lfs f4, 0x10(r1)
    mr r3, r29
    lfs f3, 0xc(r1)
    mr r4, r30
    fmuls f5, f4, f31
    lfs f0, 0x8(r1)
    fmuls f6, f3, f31
    lfs f3, 0xcc(r1)
    fmuls f7, f0, f31
    lfs f4, 0xc8(r1)
    lfs f0, 0xd0(r1)
    fadds f3, f3, f6
    fadds f4, f4, f7
    stfs f7, 0x14(r1)
    fadds f0, f0, f5
    mr r6, r31
    stfs f6, 0x18(r1)
    addi r5, r29, 0x648
    stfs f5, 0x1c(r1)
    addi r7, r1, 0xbc
    stfs f4, 0xc8(r1)
    stfs f3, 0xcc(r1)
    stfs f0, 0xd0(r1)
    bl fn_8038E23C
    psq_l f1, 0x0(r31), 0, 0
    addi r3, r1, 0xbc
    lfs f2, 0xd0(r1)
    li r4, 0x65
    stfs f2, 0x10(r29)
    psq_st f1, 0x8(r29), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0xc4(r1)
    stfs f2, 0x1c(r29)
    psq_st f1, 0x14(r29), 0, 0
    lwz r3, lbl_8087F430
    bl fn_80370174
    cmpwi r3, 0x0
    beq lbl_fn_803884B8_000014C4
    lfs f3, 0x52c(r30)
    lfs f0, lbl_808859B0
    fcmpo cr0, f3, f0
    ble lbl_fn_803884B8_000014C4
    lfs f3, lbl_80885978
    lfs f4, 0x50(r29)
    lfs f0, lbl_80885934
    fsubs f3, f3, f4
    fmadds f0, f0, f3, f4
    stfs f0, 0x50(r29)
    b lbl_fn_803884B8_000014CC
lbl_fn_803884B8_000014C4:
    lfs f0, 0x7b4(r29)
    stfs f0, 0x50(r29)
lbl_fn_803884B8_000014CC:
    mr r3, r29
    bl fn_8004B378
    mr r4, r29
    addi r3, r29, 0x1f4
    bl fn_80392A04
    mr r3, r29
    bl fn_803920C8
    mr r3, r29
    bl fn_803928C0
    addi r3, r29, 0x1f4
    bl fn_8004B378
    lwz r3, lbl_8087EFB4
    addi r4, r29, 0x1f4
    bl fn_80116BD4
    lwz r0, 0x174(r1)
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
    lwz r31, 0x11c(r1)
    lwz r30, 0x118(r1)
    lwz r29, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x170
    blr
}

asm void fn_80388A88(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    lfs f0, lbl_808858E8
    stw r0, 0x74(r1)
    addi r5, r1, 0x38
    stfd f31, 0x60(r1)
    psq_st f31, 0x68(r1), 0, 0
    stw r31, 0x5c(r1)
    mr r31, r3
    lfs f4, 0x748(r3)
    lfs f3, 0x744(r3)
    lfs f2, 0x74c(r3)
    lfs f5, 0x750(r3)
    stfs f3, 0x38(r1)
    stfs f4, 0x3c(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0x40(r1)
    psq_st f1, 0x8(r3), 0, 0
    stfs f2, 0x10(r3)
    addi r3, r1, 0x20
    stfs f0, 0x14(r1)
    stfs f5, 0x18(r1)
    stfs f0, 0x1c(r1)
    bl fn_80178088
    lfs f4, 0x28(r1)
    addi r3, r1, 0x2c
    lfs f0, 0x1c(r1)
    lfs f3, 0x24(r1)
    fadds f2, f4, f0
    lfs f0, 0x18(r1)
    lwz r4, 0xc20(r31)
    fadds f4, f3, f0
    lfs f3, 0x20(r1)
    lfs f0, 0x14(r1)
    lfs f5, 0x73c(r31)
    cmpwi r4, 0x0
    fadds f0, f3, f0
    stfs f4, 0x30(r1)
    stfs f0, 0x2c(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x34(r1)
    psq_st f1, 0x14(r31), 0, 0
    stfs f2, 0x1c(r31)
    stfs f5, 0x50(r31)
    beq lbl_fn_80388A88_000016B0
    lwz r0, 0x30(r4)
    cmpwi r0, 0x0
    ble lbl_fn_80388A88_000016B0
    frsp f6, f2
    lfs f7, 0x10(r31)
    lfs f5, 0xc(r31)
    addi r3, r1, 0x8
    lfs f4, 0x18(r31)
    lfs f3, 0x8(r31)
    lfs f0, 0x14(r31)
    fsubs f6, f7, f6
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f6, 0x10(r1)
    stfs f0, 0x8(r1)
    stfs f4, 0xc(r1)
    bl fn_805F9940
    lfs f3, 0x73c(r31)
    fmr f31, f1
    lfs f0, lbl_808859E4
    fmuls f1, f3, f0
    bl fn_8068AE24
    lwz r4, 0xc20(r31)
    lis r0, 0x4330
    stw r0, 0x48(r1)
    lis r3, lbl_8074E008@ha
    lwz r0, 0x30(r4)
    frsp f4, f1
    lfd f3, lbl_8074E008@l(r3)
    xoris r0, r0, 0x8000
    stw r0, 0x4c(r1)
    lfd f0, 0x48(r1)
    fsubs f0, f0, f3
    fmuls f0, f0, f4
    fdivs f1, f0, f31
    bl fn_8068A4A8
    frsp f4, f1
    lfs f3, lbl_80885A44
    lfs f0, 0x73c(r31)
    fmuls f3, f3, f4
    fcmpo cr0, f3, f0
    bge lbl_fn_80388A88_000016A8
    b lbl_fn_80388A88_000016AC
lbl_fn_80388A88_000016A8:
    fmr f3, f0
lbl_fn_80388A88_000016AC:
    stfs f3, 0x50(r31)
lbl_fn_80388A88_000016B0:
    mr r3, r31
    bl fn_8004B378
    mr r4, r31
    addi r3, r31, 0x1f4
    bl fn_80392A04
    mr r3, r31
    bl fn_803920C8
    mr r3, r31
    bl fn_803928C0
    addi r3, r31, 0x1f4
    bl fn_8004B378
    lwz r3, lbl_8087EFB4
    addi r4, r31, 0x1f4
    bl fn_80116BD4
    lwz r0, 0x74(r1)
    psq_l f31, 0x68(r1), 0, 0
    lfd f31, 0x60(r1)
    lwz r31, 0x5c(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_80388C44(void)
{
    nofralloc
    stwu r1, -0x1b0(r1)
    mflr r0
    lfs f3, lbl_80885920
    stw r0, 0x1b4(r1)
    lfs f0, lbl_808858EC
    stfd f31, 0x1a0(r1)
    psq_st f31, 0x1a8(r1), 0, 0
    stw r31, 0x19c(r1)
    mr r31, r3
    stw r30, 0x198(r1)
    mr r30, r4
    li r4, 0x79
    lfs f4, 0x79c(r3)
    lfs f5, 0x788(r3)
    fmuls f31, f3, f4
    lfs f4, 0x784(r3)
    lfs f3, 0x780(r3)
    addi r3, r1, 0x110
    stfs f3, 0xa4(r1)
    fadds f1, f0, f31
    stfs f4, 0xa8(r1)
    stfs f5, 0xac(r1)
    bl fn_805F8E70
    addi r4, r1, 0xa4
    addi r3, r1, 0x110
    mr r5, r4
    bl fn_805F93C0
    mr r4, r30
    addi r3, r1, 0x74
    bl fn_80178088
    lfs f4, 0x7c(r1)
    addi r3, r1, 0xe0
    lfs f0, 0xac(r1)
    li r4, 0x78
    lfs f5, 0x78(r1)
    fadds f6, f4, f0
    lfs f4, 0xa8(r1)
    lfs f3, lbl_808858E8
    fadds f7, f5, f4
    lfs f5, 0x74(r1)
    lfs f4, 0xa4(r1)
    lfs f0, lbl_808858F8
    fadds f4, f5, f4
    stfs f7, 0x9c(r1)
    stfs f6, 0xa0(r1)
    stfs f4, 0x98(r1)
    stfs f3, 0x8c(r1)
    stfs f3, 0x90(r1)
    stfs f0, 0x94(r1)
    lfs f0, 0x77c(r31)
    fneg f1, f0
    bl fn_805F8E70
    addi r4, r1, 0x8c
    addi r3, r1, 0xe0
    mr r5, r4
    bl fn_805F93C0
    lfs f0, lbl_808858EC
    addi r3, r1, 0xb0
    li r4, 0x79
    fadds f1, f0, f31
    bl fn_805F8E70
    addi r4, r1, 0x8c
    addi r3, r1, 0xb0
    mr r5, r4
    bl fn_805F93C0
    lfs f5, 0x774(r31)
    li r0, 0x0
    lfs f4, 0x94(r1)
    lis r7, 0x8000
    lfs f3, 0x90(r1)
    addi r4, r1, 0x140
    fmuls f6, f4, f5
    lfs f4, 0xa0(r1)
    fmuls f7, f3, f5
    lfs f0, 0x8c(r1)
    lfs f3, 0x9c(r1)
    addi r5, r1, 0x98
    fmuls f5, f0, f5
    lfs f0, 0x98(r1)
    fadds f4, f4, f6
    lwz r3, lbl_8087EE98
    fadds f3, f3, f7
    stfs f5, 0x68(r1)
    fadds f0, f0, f5
    stfs f7, 0x6c(r1)
    addi r6, r1, 0x80
    addi r7, r7, 0x8
    stfs f6, 0x70(r1)
    li r8, 0x0
    stfs f0, 0x80(r1)
    li r9, 0x0
    stfs f3, 0x84(r1)
    stfs f4, 0x88(r1)
    stw r0, 0x174(r1)
    stw r0, 0x178(r1)
    stw r0, 0x17c(r1)
    stw r0, 0x180(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_80388C44_000019CC
    lfs f0, 0x94(r1)
    addi r4, r1, 0x150
    lfs f3, 0x90(r1)
    addi r3, r1, 0x80
    fneg f7, f0
    lfs f0, 0x8c(r1)
    fneg f8, f3
    psq_l f1, 0x0(r4), 0, 0
    fneg f9, f0
    psq_st f1, 0x0(r3), 0, 0
    frsp f3, f7
    lfs f6, lbl_8088593C
    frsp f5, f8
    lfs f2, 0x158(r1)
    frsp f0, f9
    lfs f4, 0x80(r1)
    fmuls f10, f3, f6
    lfs f3, 0x84(r1)
    fmuls f5, f5, f6
    stfs f9, 0x50(r1)
    fmuls f6, f0, f6
    fadds f0, f2, f10
    fadds f3, f3, f5
    stfs f8, 0x54(r1)
    fadds f4, f4, f6
    stfs f3, 0x84(r1)
    stfs f4, 0x80(r1)
    stfs f0, 0x88(r1)
    lwz r3, 0x880(r31)
    stfs f7, 0x58(r1)
    cmpwi r3, 0xa
    stfs f6, 0x5c(r1)
    stfs f5, 0x60(r1)
    stfs f10, 0x64(r1)
    bge lbl_fn_80388C44_00001928
    addi r0, r3, 0x1
    stw r0, 0x880(r31)
lbl_fn_80388C44_00001928:
    lwz r4, 0x880(r31)
    lis r0, 0x4330
    stw r0, 0x190(r1)
    lis r3, lbl_8074E008@ha
    xoris r0, r4, 0x8000
    lfd f5, lbl_8074E008@l(r3)
    stw r0, 0x194(r1)
    addi r4, r1, 0x44
    lfs f3, lbl_80885914
    addi r3, r1, 0x80
    lfd f4, 0x190(r1)
    lfs f0, 0x88(r1)
    fsubs f7, f4, f5
    lfs f6, 0x10(r31)
    lfs f5, 0x84(r1)
    fsubs f8, f0, f6
    lfs f4, 0xc(r31)
    fdivs f7, f7, f3
    lfs f3, 0x80(r1)
    lfs f0, 0x8(r31)
    stfs f8, 0x34(r1)
    fmuls f9, f8, f7
    fsubs f5, f5, f4
    fsubs f3, f3, f0
    stfs f9, 0x28(r1)
    fadds f2, f9, f6
    fmuls f8, f5, f7
    stfs f5, 0x30(r1)
    fmuls f5, f3, f7
    stfs f3, 0x2c(r1)
    fadds f3, f8, f4
    fadds f0, f5, f0
    stfs f5, 0x20(r1)
    stfs f3, 0x48(r1)
    stfs f0, 0x44(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f8, 0x24(r1)
    stfs f2, 0x4c(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x88(r1)
    b lbl_fn_80388C44_00001A88
lbl_fn_80388C44_000019CC:
    lwz r3, 0x880(r31)
    cmpwi r3, 0x0
    ble lbl_fn_80388C44_000019E0
    subi r0, r3, 0x1
    stw r0, 0x880(r31)
lbl_fn_80388C44_000019E0:
    lwz r4, 0x880(r31)
    lis r0, 0x4330
    stw r0, 0x190(r1)
    lis r3, lbl_8074E008@ha
    xoris r0, r4, 0x8000
    lfd f4, lbl_8074E008@l(r3)
    stw r0, 0x194(r1)
    addi r4, r1, 0x38
    lfs f0, lbl_80885914
    addi r3, r1, 0x80
    lfd f3, 0x190(r1)
    lfs f8, lbl_808858F8
    fsubs f3, f3, f4
    lfs f7, 0x88(r1)
    lfs f6, 0x10(r31)
    lfs f5, 0x84(r1)
    fdivs f9, f3, f0
    lfs f4, 0xc(r31)
    lfs f3, 0x80(r1)
    lfs f0, 0x8(r31)
    fsubs f10, f7, f6
    fsubs f7, f8, f9
    fsubs f5, f5, f4
    stfs f10, 0x1c(r1)
    fsubs f3, f3, f0
    stfs f5, 0x18(r1)
    fmuls f9, f10, f7
    fmuls f8, f5, f7
    fmuls f5, f3, f7
    stfs f3, 0x14(r1)
    fadds f2, f9, f6
    fadds f3, f8, f4
    stfs f5, 0x8(r1)
    fadds f0, f5, f0
    stfs f3, 0x3c(r1)
    stfs f0, 0x38(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f8, 0xc(r1)
    stfs f9, 0x10(r1)
    stfs f2, 0x40(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x88(r1)
lbl_fn_80388C44_00001A88:
    addi r3, r1, 0x80
    lfs f2, 0x88(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r4, r1, 0x98
    psq_st f1, 0x8(r31), 0, 0
    mr r3, r31
    lfs f0, 0x778(r31)
    stfs f2, 0x10(r31)
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0xa0(r1)
    stfs f2, 0x1c(r31)
    psq_st f1, 0x14(r31), 0, 0
    stfs f0, 0x50(r31)
    bl fn_8004B378
    mr r4, r31
    addi r3, r31, 0x1f4
    bl fn_80392A04
    mr r3, r31
    bl fn_80392510
    mr r3, r31
    bl fn_80392FE8
    mr r3, r31
    bl fn_803920C8
    mr r3, r31
    bl fn_803928C0
    addi r3, r31, 0x1f4
    bl fn_8004B378
    lwz r3, lbl_8087EFB4
    addi r4, r31, 0x1f4
    bl fn_80116BD4
    lwz r0, 0x1b4(r1)
    psq_l f31, 0x1a8(r1), 0, 0
    lfd f31, 0x1a0(r1)
    lwz r31, 0x19c(r1)
    lwz r30, 0x198(r1)
    mtlr r0
    addi r1, r1, 0x1b0
    blr
}
