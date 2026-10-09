#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void fn_8000D114(void);
extern void fn_8000D124(void);
extern void fn_8000D3A4(void);
extern void fn_8001047C(void);
extern void fn_800109E0(void);
extern void fn_80011034(void);
extern void fn_80011410(void);
extern void fn_80012C88(void);
extern void fn_80013338(void);
extern void fn_800133B0(void);
extern void fn_80013410(void);
extern void fn_80013484(void);
extern void fn_8004B378(void);
extern void fn_8004D388(void);
extern void fn_8004ED34(void);
extern void fn_80050900(void);
extern void fn_80051B70(void);
extern void fn_80057A64(void);
extern void fn_800A56A8(void);
extern void fn_800A58D0(void);
extern void fn_800F7260(void);
extern void fn_800F72CC(void);
extern void fn_800F7FD8(void);
extern void fn_800F7FF0(void);
extern void fn_801002DC(void);
extern void fn_80112960(void);
extern void fn_80113CCC(void);
extern void fn_80114AA0(void);
extern void fn_801162A0(void);
extern void fn_80116BA4(void);
extern void fn_80116BD4(void);
extern void fn_801231D0(void);
extern void fn_801240B4(void);
extern void fn_8012A1B8(void);
extern void fn_8013A13C(void);
extern void fn_8013C3B4(void);
extern void fn_801404F8(void);
extern void fn_80140500(void);
extern void fn_80178088(void);
extern void fn_801C3910(void);
extern void fn_80370174(void);
extern void fn_8037F640(void);
extern void fn_8037F664(void);
extern void fn_8037F688(void);
extern void fn_80387DE4(void);
extern void fn_8038E23C(void);
extern void fn_803918EC(void);
extern void fn_803920C8(void);
extern void fn_80392510(void);
extern void fn_803928C0(void);
extern void fn_80392964(void);
extern void fn_80392A04(void);
extern void fn_80392FE8(void);
extern void fn_805B81F4(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F9050(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_805F9990(void);
extern void fn_805F99B0(void);
extern void fn_8068A850(void);
extern void fn_8068AD58(void);
extern void fn_8068AEA4(void);

/* External data declarations */
extern u8 lbl_8074E008[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087DCF0;
extern u32 lbl_8087DCF4;
extern u32 lbl_8087EE98;
extern u32 lbl_8087EF70;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F430;
extern u32 lbl_8087F9C0;
extern u32 lbl_8087FA20;
extern u32 lbl_808858E8;
extern u32 lbl_808858F8;
extern u32 lbl_808858FC;
extern u32 lbl_80885904;
extern u32 lbl_80885910;
extern u32 lbl_80885914;
extern u32 lbl_80885938;
extern u32 lbl_8088593C;
extern u32 lbl_80885958;
extern u32 lbl_80885990;
extern u32 lbl_808859C4;
extern u32 lbl_808859C8;
extern u32 lbl_808859CC;
extern u32 lbl_808859D0;
extern u32 lbl_808859DC;
extern u32 lbl_808859E0;
extern u32 lbl_808859E4;
extern u32 lbl_80885A04;
extern u32 lbl_80885A08;
extern u32 lbl_80885A24;
extern u32 lbl_80885A3C;
extern u32 lbl_80885A40;
extern u32 lbl_80885A44;
extern u32 lbl_80885A48;
extern u32 lbl_80885A4C;
extern u32 lbl_80885A50;
extern u32 lbl_80885A54;
extern u32 lbl_80885A58;
extern u32 lbl_80885A5C;
extern u32 lbl_80885A60;
extern u32 lbl_80885A64;

/* Function declarations */
void fn_803829C0(void);
void fn_803829D4(void);
void fn_80382A00(void);
void fn_80382A08(void);
void fn_80382A1C(void);
void fn_803830A0(void);
void fn_803830A8(void);
void fn_80383728(void);
void fn_8038378C(void);
void fn_80383F7C(void);
void fn_80384188(void);

asm void fn_803829C0(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    blr
}

asm void fn_803829D4(void)
{
    nofralloc
    lfs f1, 0x4(r3)
    lfs f0, 0x8(r3)
    lfs f2, lbl_808858E8
    fsubs f0, f1, f0
    stfs f0, 0x4(r3)
    fcmpo cr0, f2, f0
    ble lbl_fn_803829D4_00000034
    b lbl_fn_803829D4_00000038
lbl_fn_803829D4_00000034:
    fmr f2, f0
lbl_fn_803829D4_00000038:
    stfs f2, 0x4(r3)
    blr
}

asm void fn_80382A00(void)
{
    nofralloc
    lwz r3, 0x58c(r3)
    blr
}

asm void fn_80382A08(void)
{
    nofralloc
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    psq_st f1, 0x20(r3), 0, 0
    stfs f2, 0x28(r3)
    blr
}

asm void fn_80382A1C(void)
{
    nofralloc
    stwu r1, -0x2f0(r1)
    mflr r0
    stw r0, 0x2f4(r1)
    stfd f31, 0x2e0(r1)
    psq_st f31, 0x2e8(r1), 0, 0
    stfd f30, 0x2d0(r1)
    psq_st f30, 0x2d8(r1), 0, 0
    stfd f29, 0x2c0(r1)
    psq_st f29, 0x2c8(r1), 0, 0
    stw r31, 0x2bc(r1)
    mr r31, r4
    stw r30, 0x2b8(r1)
    mr r30, r3
    bl fn_80113CCC
    mr r4, r3
    addi r3, r1, 0x188
    bl fn_8001047C
    addi r3, r1, 0x17c
    addi r4, r30, 0x868
    bl fn_8001047C
    addi r3, r1, 0x170
    addi r4, r1, 0x17c
    addi r5, r1, 0x188
    bl fn_80013338
    addi r3, r1, 0x170
    bl fn_8000D3A4
    mr r3, r30
    bl fn_80116BA4
    fmr f30, f1
    addi r3, r1, 0x170
    bl fn_800F7FF0
    addi r3, r1, 0xec
    addi r4, r1, 0x170
    bl fn_8013C3B4
    addi r3, r1, 0x164
    addi r4, r1, 0xec
    bl fn_80011034
    lfs f1, lbl_808858E8
    addi r3, r1, 0x158
    lfs f2, lbl_808858F8
    fmr f3, f1
    bl fn_8000D114
    lfs f1, 0x700(r30)
    mr r4, r31
    lfs f0, 0x720(r30)
    addi r3, r1, 0x14c
    fsubs f1, f1, f30
    fmadds f31, f0, f1, f30
    bl fn_80178088
    mr r3, r31
    addi r31, r1, 0x14c
    bl fn_8012A1B8
    mr r4, r3
    addi r3, r1, 0x140
    bl fn_8001047C
    mr r4, r31
    addi r3, r1, 0x17c
    bl fn_8000D124
    lfs f1, 0x180(r1)
    addi r3, r30, 0x868
    lfs f0, 0x70c(r30)
    addi r4, r1, 0x17c
    fadds f0, f1, f0
    stfs f0, 0x180(r1)
    bl fn_8000D124
    lwz r0, 0x8ec(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80382A1C_00000174
    lfs f0, 0x144(r1)
    stfs f0, 0x168(r1)
lbl_fn_80382A1C_00000174:
    lfs f0, 0x704(r30)
    fneg f30, f0
    bl fn_803830A0
    cmpwi r3, 0x0
    beq lbl_fn_80382A1C_000001E4
    bl fn_803830A0
    mr r4, r3
    addi r3, r1, 0xe0
    li r5, 0x3
    li r6, 0x2
    bl fn_805B81F4
    mr r4, r31
    addi r3, r1, 0x134
    addi r5, r1, 0xe0
    bl fn_80013338
    lfs f1, 0x150(r1)
    lfs f0, lbl_80885910
    lfs f2, lbl_808858E8
    fcmpo cr0, f1, f0
    stfs f2, 0x138(r1)
    bge lbl_fn_80382A1C_000001E4
    addi r3, r1, 0x134
    bl fn_801162A0
    lfs f0, lbl_80885A48
    fcmpo cr0, f1, f0
    bge lbl_fn_80382A1C_000001E4
    lfs f0, lbl_808858FC
    fmuls f30, f30, f0
lbl_fn_80382A1C_000001E4:
    fmr f1, f30
    lfs f2, 0x168(r1)
    lfs f3, lbl_808858E8
    addi r3, r1, 0x128
    bl fn_8000D114
    lfs f1, lbl_808858E8
    addi r3, r1, 0x11c
    lfs f3, 0x6fc(r30)
    fmr f2, f1
    bl fn_8000D114
    addi r3, r1, 0x228
    addi r4, r1, 0x128
    bl fn_800109E0
    addi r3, r1, 0x11c
    addi r4, r1, 0x228
    bl fn_80011410
    addi r3, r1, 0x110
    bl fn_80057A64
    addi r3, r1, 0xd4
    addi r4, r1, 0x11c
    addi r5, r1, 0x17c
    bl fn_80013410
    addi r3, r1, 0x110
    addi r4, r1, 0xd4
    bl fn_8000D124
    lfs f1, 0x144(r1)
    bl fn_800133B0
    lfs f0, 0x12c(r1)
    fsubs f1, f0, f1
    bl fn_800133B0
    fneg f29, f1
    addi r3, r1, 0x104
    addi r4, r1, 0x110
    addi r5, r1, 0x17c
    bl fn_80013338
    lfs f0, 0x12c(r1)
    addi r3, r1, 0x1f8
    fneg f1, f0
    bl fn_8013A13C
    addi r3, r1, 0x104
    addi r4, r1, 0x1f8
    bl fn_80011410
    lfs f1, 0x728(r30)
    addi r3, r1, 0x1c8
    lfs f0, 0x12c(r1)
    fmadds f1, f29, f1, f0
    stfs f1, 0x12c(r1)
    bl fn_8013A13C
    addi r3, r1, 0x104
    addi r4, r1, 0x1c8
    bl fn_80011410
    addi r3, r1, 0xc8
    addi r4, r1, 0x104
    addi r5, r1, 0x17c
    bl fn_80013410
    addi r3, r1, 0x110
    addi r4, r1, 0xc8
    bl fn_8000D124
    addi r3, r1, 0xbc
    addi r4, r1, 0x17c
    addi r5, r1, 0x110
    bl fn_80013338
    addi r3, r1, 0x11c
    addi r4, r1, 0xbc
    bl fn_8000D124
    addi r3, r1, 0x11c
    bl fn_8000D3A4
    addi r3, r1, 0x11c
    bl fn_800F7FF0
    addi r3, r1, 0x258
    bl fn_80140500
    addi r3, r1, 0xb0
    addi r4, r1, 0x17c
    addi r5, r1, 0x110
    bl fn_80013338
    addi r3, r1, 0x11c
    addi r4, r1, 0xb0
    bl fn_8000D124
    addi r3, r1, 0x98
    addi r4, r1, 0x11c
    bl fn_8013C3B4
    addi r3, r1, 0xa4
    addi r4, r1, 0x98
    bl fn_80011034
    addi r3, r1, 0x128
    addi r4, r1, 0xa4
    bl fn_8000D124
    lfs f3, 0x164(r1)
    addi r3, r1, 0x8c
    lfs f2, 0x12c(r1)
    fsubs f4, f30, f3
    lfs f0, 0x130(r1)
    lfs f1, lbl_808858E8
    stfs f2, 0x168(r1)
    fadds f3, f3, f4
    stfs f0, 0x16c(r1)
    fmr f2, f1
    stfs f3, 0x164(r1)
    lfs f3, 0x6fc(r30)
    bl fn_8000D114
    mr r4, r3
    addi r3, r1, 0x170
    bl fn_8000D124
    addi r3, r1, 0x198
    addi r4, r1, 0x164
    bl fn_800109E0
    addi r3, r1, 0x170
    addi r4, r1, 0x198
    bl fn_80011410
    addi r3, r1, 0x80
    addi r4, r1, 0x170
    addi r5, r1, 0x17c
    bl fn_80013410
    addi r3, r1, 0x188
    addi r4, r1, 0x80
    bl fn_8000D124
    bl fn_801404F8
    lis r7, 0x8000
    addi r4, r1, 0x258
    addi r5, r1, 0x17c
    addi r6, r1, 0x188
    addi r7, r7, 0x8
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_80382A1C_000004B4
    addi r3, r1, 0xf8
    addi r4, r1, 0x17c
    addi r5, r1, 0x268
    bl fn_80013338
    addi r3, r1, 0xf8
    bl fn_801162A0
    lfs f0, lbl_808859DC
    fcmpo cr0, f1, f0
    ble lbl_fn_80382A1C_0000054C
    addi r3, r1, 0x188
    addi r4, r1, 0x268
    bl fn_8000D124
    addi r3, r1, 0x5c
    addi r4, r1, 0x17c
    addi r5, r1, 0x188
    bl fn_80013338
    addi r3, r1, 0x68
    addi r4, r1, 0x5c
    bl fn_800F7FD8
    lfs f1, lbl_8088593C
    addi r3, r1, 0x74
    addi r4, r1, 0x68
    bl fn_800F72CC
    addi r3, r1, 0x188
    addi r4, r1, 0x74
    bl fn_80012C88
    li r0, 0xa
    stw r0, 0x880(r30)
    mr r3, r30
    bl fn_80113CCC
    mr r5, r3
    addi r3, r1, 0x50
    addi r4, r1, 0x188
    bl fn_80013338
    addi r3, r1, 0x50
    bl fn_801162A0
    lfs f0, lbl_808859C4
    fcmpo cr0, f1, f0
    ble lbl_fn_80382A1C_0000054C
    lwz r0, 0x8ec(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80382A1C_0000054C
    mr r3, r30
    bl fn_80113CCC
    lfs f1, lbl_808858FC
    mr r4, r3
    addi r3, r1, 0x44
    addi r5, r1, 0x188
    bl fn_800F7260
    addi r3, r1, 0x188
    addi r4, r1, 0x44
    bl fn_8000D124
    b lbl_fn_80382A1C_0000054C
lbl_fn_80382A1C_000004B4:
    lwz r3, 0x880(r30)
    cmpwi r3, 0x0
    ble lbl_fn_80382A1C_0000054C
    subi r0, r3, 0x1
    stw r0, 0x880(r30)
    mr r3, r30
    bl fn_80113CCC
    mr r5, r3
    addi r3, r1, 0x38
    addi r4, r1, 0x188
    bl fn_80013338
    addi r3, r1, 0x38
    bl fn_801162A0
    lfs f0, lbl_808859C4
    fcmpo cr0, f1, f0
    ble lbl_fn_80382A1C_0000054C
    mr r3, r30
    bl fn_80113CCC
    lwz r6, 0x880(r30)
    lis r0, 0x4330
    mr r4, r3
    lis r5, lbl_8074E008@ha
    xoris r3, r6, 0x8000
    stw r3, 0x2ac(r1)
    lfd f3, lbl_8074E008@l(r5)
    addi r3, r1, 0x2c
    stw r0, 0x2a8(r1)
    addi r5, r1, 0x188
    lfs f1, lbl_80885914
    lfd f2, 0x2a8(r1)
    lfs f0, lbl_808858F8
    fsubs f2, f2, f3
    fdivs f1, f2, f1
    fsubs f1, f0, f1
    bl fn_800F7260
    addi r3, r1, 0x188
    addi r4, r1, 0x2c
    bl fn_8000D124
lbl_fn_80382A1C_0000054C:
    bl fn_801404F8
    lis r6, lbl_807C7030@ha
    lis r7, 0x8000
    lfs f1, lbl_80885A3C
    addi r4, r1, 0x258
    addi r5, r1, 0x188
    addi r6, r6, lbl_807C7030@l
    addi r7, r7, 0x8
    li r8, 0x0
    li r9, 0x0
    bl fn_8004D388
    cmpwi r3, 0x0
    beq lbl_fn_80382A1C_0000058C
    addi r3, r1, 0x188
    addi r4, r1, 0x268
    bl fn_8000D124
lbl_fn_80382A1C_0000058C:
    addi r3, r1, 0x20
    addi r4, r1, 0x17c
    addi r5, r1, 0x188
    bl fn_80013338
    addi r3, r1, 0x20
    bl fn_8000D3A4
    fmr f30, f1
    lfs f1, 0x168(r1)
    bl fn_8037F640
    lfs f0, 0x6fc(r30)
    lfs f2, 0x708(r30)
    fdivs f3, f30, f0
    lfs f0, 0x17c(r1)
    fmuls f2, f2, f3
    fmadds f0, f2, f1, f0
    lfs f1, 0x168(r1)
    stfs f0, 0x17c(r1)
    bl fn_8037F664
    lfs f0, 0x6fc(r30)
    addi r3, r1, 0x14
    lfs f3, 0x708(r30)
    addi r4, r1, 0x17c
    fdivs f2, f30, f0
    lfs f0, 0x184(r1)
    addi r5, r1, 0x188
    fneg f3, f3
    fmuls f2, f3, f2
    fmadds f0, f2, f1, f0
    stfs f0, 0x184(r1)
    bl fn_80013338
    addi r3, r1, 0x14
    bl fn_801C3910
    lfs f0, lbl_808858F8
    fcmpo cr0, f1, f0
    bge lbl_fn_80382A1C_00000658
    addi r3, r1, 0x11c
    bl fn_8000D3A4
    lfs f0, lbl_8088593C
    fcmpo cr0, f1, f0
    ble lbl_fn_80382A1C_00000648
    addi r3, r1, 0x8
    addi r4, r1, 0x11c
    bl fn_800F7FD8
    addi r3, r1, 0x188
    addi r4, r1, 0x8
    bl fn_80013484
    b lbl_fn_80382A1C_00000658
lbl_fn_80382A1C_00000648:
    lfs f1, 0x190(r1)
    lfs f0, lbl_808858F8
    fadds f0, f1, f0
    stfs f0, 0x190(r1)
lbl_fn_80382A1C_00000658:
    mr r3, r30
    addi r4, r1, 0x188
    bl fn_80114AA0
    mr r3, r30
    addi r4, r1, 0x17c
    bl fn_80112960
    fmr f1, f31
    mr r3, r30
    bl fn_8037F688
    mr r3, r30
    addi r4, r1, 0x158
    bl fn_80382A08
    mr r3, r30
    bl fn_8004B378
    mr r3, r30
    li r4, 0x1
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    bl fn_80392964
    li r0, 0x0
    stw r0, 0x8ec(r30)
    psq_l f31, 0x2e8(r1), 0, 0
    lfd f31, 0x2e0(r1)
    psq_l f30, 0x2d8(r1), 0, 0
    lfd f30, 0x2d0(r1)
    psq_l f29, 0x2c8(r1), 0, 0
    lfd f29, 0x2c0(r1)
    lwz r31, 0x2bc(r1)
    lwz r30, 0x2b8(r1)
    lwz r0, 0x2f4(r1)
    mtlr r0
    addi r1, r1, 0x2f0
    blr
}

asm void fn_803830A0(void)
{
    nofralloc
    lwz r3, lbl_8087FA20
    blr
}

asm void fn_803830A8(void)
{
    nofralloc
    stwu r1, -0x1d0(r1)
    mflr r0
    stw r0, 0x1d4(r1)
    stw r31, 0x1cc(r1)
    mr r31, r4
    stw r30, 0x1c8(r1)
    mr r30, r3
    stw r29, 0x1c4(r1)
    stw r28, 0x1c0(r1)
    lwz r5, 0x808(r3)
    addi r0, r5, 0x1
    stw r0, 0x808(r3)
    cmpwi r0, 0xf
    blt lbl_fn_803830A8_00000D48
    lwz r0, 0x838(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803830A8_000007F8
    lwz r4, 0x83c(r3)
    cmpwi r4, 0x6
    bge lbl_fn_803830A8_00000D08
    addi r5, r4, 0x1
    lis r0, 0x4330
    xoris r4, r5, 0x8000
    stw r4, 0x1bc(r1)
    lis r4, lbl_8074E008@ha
    lfs f3, lbl_80885A40
    stw r0, 0x1b8(r1)
    addi r6, r1, 0xb0
    lfd f5, lbl_8074E008@l(r4)
    lfd f4, 0x1b8(r1)
    lfs f8, 0x844(r3)
    fsubs f4, f4, f5
    lfs f7, 0x850(r3)
    lfs f6, 0x840(r3)
    lfs f5, 0x84c(r3)
    fsubs f8, f8, f7
    fdivs f13, f4, f3
    lfs f0, 0x848(r3)
    lfs f9, 0x854(r3)
    lfs f4, lbl_808859E4
    stfs f8, 0x30(r1)
    lfs f3, 0x85c(r3)
    fsubs f12, f0, f9
    lfs f0, 0x55c(r3)
    fsubs f6, f6, f5
    stw r5, 0x83c(r3)
    fmuls f10, f8, f13
    fmuls f11, f12, f13
    fmuls f8, f6, f13
    stfs f6, 0x2c(r1)
    fmuls f0, f4, f0
    fadds f2, f11, f9
    stfs f12, 0x34(r1)
    fadds f6, f10, f7
    fadds f4, f8, f5
    stfs f8, 0x20(r1)
    fsubs f0, f0, f3
    stfs f4, 0xb0(r1)
    stfs f6, 0xb4(r1)
    fmadds f0, f13, f0, f3
    psq_l f1, 0x0(r6), 0, 0
    stfs f10, 0x24(r1)
    stfs f11, 0x28(r1)
    stfs f2, 0xb8(r1)
    psq_st f1, 0x14(r3), 0, 0
    stfs f2, 0x1c(r3)
    stfs f0, 0x50(r3)
    b lbl_fn_803830A8_00000D08
lbl_fn_803830A8_000007F8:
    lfs f2, 0x10(r3)
    addi r4, r1, 0x11c
    psq_l f1, 0x8(r3), 0, 0
    addi r5, r1, 0x110
    psq_st f1, 0x0(r4), 0, 0
    addi r28, r1, 0xf8
    psq_l f1, 0x14(r3), 0, 0
    addi r29, r1, 0x104
    stfs f2, 0x124(r1)
    addi r6, r1, 0x14
    lfs f2, 0x1c(r3)
    mr r4, r28
    psq_st f1, 0x0(r5), 0, 0
    psq_l f1, 0x20(r3), 0, 0
    stfs f2, 0x118(r1)
    lfs f2, 0x28(r3)
    stfs f2, 0x10c(r1)
    psq_st f1, 0x0(r29), 0, 0
    lfs f3, 0x1c(r3)
    lfs f0, 0x10(r3)
    lfs f5, 0x18(r3)
    fsubs f2, f3, f0
    lfs f4, 0xc(r3)
    lfs f3, 0x14(r3)
    lfs f0, 0x8(r3)
    fsubs f4, f5, f4
    stfs f2, 0x1c(r1)
    fsubs f0, f3, f0
    mr r3, r28
    stfs f4, 0x18(r1)
    stfs f0, 0x14(r1)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x100(r1)
    bl fn_805F98D0
    mr r3, r28
    mr r4, r29
    addi r5, r1, 0xec
    bl fn_805F99B0
    lfs f3, 0x820(r30)
    addi r3, r1, 0xe0
    lfs f0, 0x814(r30)
    mr r4, r3
    lfs f5, 0x81c(r30)
    fsubs f6, f3, f0
    lfs f4, 0x810(r30)
    lfs f3, 0x818(r30)
    lfs f0, 0x80c(r30)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0xe4(r1)
    stfs f0, 0xe0(r1)
    stfs f6, 0xe8(r1)
    bl fn_805F98D0
    addi r3, r1, 0xec
    bl fn_805F9920
    lfs f0, lbl_80885958
    fcmpo cr0, f1, f0
    bge lbl_fn_803830A8_000008F8
    lfs f3, lbl_808858E8
    lfs f0, lbl_808858F8
    stfs f3, 0xec(r1)
    stfs f3, 0xf0(r1)
    stfs f0, 0xf4(r1)
lbl_fn_803830A8_000008F8:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_800A56A8
    fabs f0, f1
    lfs f3, lbl_808859E0
    frsp f0, f0
    fcmpo cr0, f0, f3
    ble lbl_fn_803830A8_000009F8
    lfs f0, lbl_808858E8
    fcmpo cr0, f1, f0
    ble lbl_fn_803830A8_00000930
    b lbl_fn_803830A8_00000934
lbl_fn_803830A8_00000930:
    lfs f3, lbl_80885A4C
lbl_fn_803830A8_00000934:
    fsubs f4, f1, f3
    lfs f3, lbl_80885A08
    lfs f0, 0x574(r30)
    addi r3, r1, 0x188
    addi r4, r1, 0x104
    fdivs f4, f4, f3
    fabs f3, f4
    frsp f3, f3
    fmuls f4, f4, f3
    fneg f3, f4
    fmuls f1, f3, f0
    bl fn_805F9050
    lfs f3, 0x118(r1)
    addi r4, r1, 0x98
    lfs f0, 0x124(r1)
    addi r6, r1, 0x8c
    lfs f5, 0x114(r1)
    mr r5, r4
    fsubs f2, f3, f0
    lfs f4, 0x120(r1)
    lfs f3, 0x110(r1)
    addi r3, r1, 0x188
    lfs f0, 0x11c(r1)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x90(r1)
    stfs f0, 0x8c(r1)
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x94(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0xa0(r1)
    bl fn_805F93C0
    lfs f3, 0xa0(r1)
    addi r4, r1, 0xa4
    lfs f0, 0x124(r1)
    addi r3, r1, 0x110
    lfs f5, 0x9c(r1)
    fadds f2, f3, f0
    lfs f4, 0x120(r1)
    lfs f3, 0x98(r1)
    lfs f0, 0x11c(r1)
    fadds f4, f5, f4
    stfs f2, 0xac(r1)
    fadds f0, f3, f0
    stfs f4, 0xa8(r1)
    stfs f0, 0xa4(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x118(r1)
lbl_fn_803830A8_000009F8:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x1
    li r6, 0x0
    bl fn_800A56A8
    fabs f0, f1
    lfs f3, lbl_808859E0
    frsp f0, f0
    fcmpo cr0, f0, f3
    ble lbl_fn_803830A8_00000AF4
    lfs f0, lbl_808858E8
    fcmpo cr0, f1, f0
    ble lbl_fn_803830A8_00000A30
    b lbl_fn_803830A8_00000A34
lbl_fn_803830A8_00000A30:
    lfs f3, lbl_80885A4C
lbl_fn_803830A8_00000A34:
    fsubs f4, f1, f3
    lfs f3, lbl_80885A08
    lfs f0, 0x574(r30)
    addi r3, r1, 0x158
    addi r4, r1, 0xec
    fdivs f4, f4, f3
    fabs f3, f4
    frsp f3, f3
    fmuls f4, f4, f3
    fmuls f1, f4, f0
    bl fn_805F9050
    lfs f3, 0x118(r1)
    addi r4, r1, 0x74
    lfs f0, 0x124(r1)
    addi r6, r1, 0x68
    lfs f5, 0x114(r1)
    mr r5, r4
    fsubs f2, f3, f0
    lfs f4, 0x120(r1)
    lfs f3, 0x110(r1)
    addi r3, r1, 0x158
    lfs f0, 0x11c(r1)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x6c(r1)
    stfs f0, 0x68(r1)
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x70(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x7c(r1)
    bl fn_805F93C0
    lfs f3, 0x7c(r1)
    addi r4, r1, 0x80
    lfs f0, 0x124(r1)
    addi r3, r1, 0x110
    lfs f5, 0x78(r1)
    fadds f2, f3, f0
    lfs f4, 0x120(r1)
    lfs f3, 0x74(r1)
    lfs f0, 0x11c(r1)
    fadds f4, f5, f4
    stfs f2, 0x88(r1)
    fadds f0, f3, f0
    stfs f4, 0x84(r1)
    stfs f0, 0x80(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x118(r1)
lbl_fn_803830A8_00000AF4:
    lfs f3, 0x118(r1)
    addi r28, r1, 0xf8
    lfs f0, 0x124(r1)
    addi r5, r1, 0x5c
    lfs f5, 0x114(r1)
    mr r3, r28
    fsubs f2, f3, f0
    lfs f4, 0x120(r1)
    lfs f3, 0x110(r1)
    mr r4, r28
    lfs f0, 0x11c(r1)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x60(r1)
    stfs f0, 0x5c(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0x64(r1)
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x100(r1)
    bl fn_805F98D0
    lfs f3, 0xfc(r1)
    lfs f0, lbl_80885A04
    fabs f3, f3
    frsp f3, f3
    fcmpo cr0, f3, f0
    ble lbl_fn_803830A8_00000BE8
    lfs f5, 0x1c(r30)
    addi r29, r1, 0x50
    lfs f4, 0x10(r30)
    addi r4, r1, 0x11c
    lfs f3, 0x18(r30)
    addi r5, r1, 0x110
    fsubs f5, f5, f4
    lfs f0, 0xc(r30)
    lfs f2, 0x10(r30)
    addi r6, r1, 0x8
    fsubs f4, f3, f0
    lfs f3, 0x14(r30)
    lfs f0, 0x8(r30)
    mr r3, r29
    stfs f2, 0x124(r1)
    fsubs f0, f3, f0
    psq_l f1, 0x8(r30), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    mr r4, r29
    lfs f2, 0x1c(r30)
    psq_l f1, 0x14(r30), 0, 0
    stfs f2, 0x118(r1)
    fmr f2, f5
    stfs f4, 0xc(r1)
    stfs f0, 0x8(r1)
    psq_st f1, 0x0(r5), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f5, 0x10(r1)
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x58(r1)
    bl fn_805F98D0
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x58(r1)
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x100(r1)
lbl_fn_803830A8_00000BE8:
    addi r28, r1, 0xd4
    psq_l f1, 0x528(r31), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    addi r4, r1, 0xc8
    psq_l f1, 0x534(r31), 0, 0
    addi r3, r1, 0x128
    psq_st f1, 0x0(r4), 0, 0
    li r4, 0x79
    lfs f2, 0x530(r31)
    stfs f2, 0xdc(r1)
    lfs f2, 0x53c(r31)
    lfs f3, 0x568(r30)
    lfs f0, lbl_808858E8
    lfs f1, 0xcc(r1)
    stfs f2, 0xd0(r1)
    stfs f0, 0xbc(r1)
    stfs f3, 0xc0(r1)
    stfs f0, 0xc4(r1)
    bl fn_805F8E70
    addi r4, r1, 0xbc
    addi r3, r1, 0x128
    mr r5, r4
    bl fn_805F93C0
    lfs f3, 0xd4(r1)
    addi r3, r1, 0x11c
    lfs f0, 0xbc(r1)
    addi r5, r1, 0x44
    lfs f5, 0xd8(r1)
    addi r4, r1, 0x110
    fadds f6, f3, f0
    lfs f4, 0xc0(r1)
    lfs f3, 0xdc(r1)
    fadds f4, f5, f4
    lfs f0, 0xc4(r1)
    stfs f6, 0xd4(r1)
    fadds f2, f3, f0
    lfs f5, 0x558(r30)
    stfs f4, 0xd8(r1)
    lfs f0, 0x100(r1)
    psq_l f1, 0x0(r28), 0, 0
    frsp f4, f2
    fmuls f6, f0, f5
    lfs f3, 0xfc(r1)
    lfs f0, 0xf8(r1)
    fmuls f7, f3, f5
    psq_st f1, 0x0(r3), 0, 0
    fmuls f5, f0, f5
    lfs f3, 0x120(r1)
    lfs f0, 0x11c(r1)
    fadds f8, f7, f3
    stfs f2, 0x124(r1)
    fadds f3, f6, f4
    fadds f0, f5, f0
    stfs f2, 0xdc(r1)
    fmr f2, f3
    stfs f8, 0x48(r1)
    stfs f0, 0x44(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x118(r1)
    lfs f2, 0x124(r1)
    psq_st f1, 0x8(r30), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0x10(r30)
    lfs f2, 0x118(r1)
    stfs f5, 0x38(r1)
    stfs f7, 0x3c(r1)
    stfs f6, 0x40(r1)
    stfs f3, 0x4c(r1)
    psq_st f1, 0x14(r30), 0, 0
    stfs f2, 0x1c(r30)
lbl_fn_803830A8_00000D08:
    mr r3, r30
    bl fn_8004B378
    mr r4, r30
    addi r3, r30, 0x1f4
    bl fn_80392A04
    mr r3, r30
    bl fn_803918EC
    mr r3, r30
    bl fn_803920C8
    mr r3, r30
    bl fn_803928C0
    addi r3, r30, 0x1f4
    bl fn_8004B378
    lwz r3, lbl_8087EFB4
    addi r4, r30, 0x1f4
    bl fn_80116BD4
lbl_fn_803830A8_00000D48:
    lwz r0, 0x1d4(r1)
    lwz r31, 0x1cc(r1)
    lwz r30, 0x1c8(r1)
    lwz r29, 0x1c4(r1)
    lwz r28, 0x1c0(r1)
    mtlr r0
    addi r1, r1, 0x1d0
    blr
}

asm void fn_80383728(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lfs f3, 0x1c(r4)
    lfs f0, 0x10(r4)
    addi r5, r1, 0x8
    lfs f5, 0x18(r4)
    fsubs f2, f3, f0
    lfs f4, 0xc(r4)
    lfs f3, 0x14(r4)
    lfs f0, 0x8(r4)
    fsubs f4, f5, f4
    stw r0, 0x24(r1)
    fsubs f0, f3, f0
    mr r4, r3
    stfs f4, 0xc(r1)
    stfs f0, 0x8(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0x10(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x8(r3)
    bl fn_805F98D0
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8038378C(void)
{
    nofralloc
    stwu r1, -0x320(r1)
    mflr r0
    stw r0, 0x324(r1)
    stfd f31, 0x310(r1)
    psq_st f31, 0x318(r1), 0, 0
    stfd f30, 0x300(r1)
    psq_st f30, 0x308(r1), 0, 0
    stfd f29, 0x2f0(r1)
    psq_st f29, 0x2f8(r1), 0, 0
    stfd f28, 0x2e0(r1)
    psq_st f28, 0x2e8(r1), 0, 0
    stfd f27, 0x2d0(r1)
    psq_st f27, 0x2d8(r1), 0, 0
    stfd f26, 0x2c0(r1)
    psq_st f26, 0x2c8(r1), 0, 0
    stw r31, 0x2bc(r1)
    mr r31, r4
    stw r30, 0x2b8(r1)
    mr r30, r3
    stw r29, 0x2b4(r1)
    lwz r5, lbl_8087F0A8
    lwz r0, 0x290(r5)
    cmpwi r0, 0x0
    beq lbl_fn_8038378C_00000E34
    bl fn_80387DE4
    b lbl_fn_8038378C_00001570
lbl_fn_8038378C_00000E34:
    lfs f7, lbl_808858E8
    addi r3, r4, 0xc14
    lfs f0, lbl_808858F8
    addi r4, r1, 0x98
    stfs f7, 0x98(r1)
    addi r5, r1, 0xe0
    stfs f0, 0x9c(r1)
    stfs f7, 0xa0(r1)
    bl fn_805F99B0
    addi r3, r1, 0xe0
    mr r4, r3
    bl fn_805F98D0
    lfs f2, 0xe8(r1)
    addi r3, r1, 0xe0
    lfs f0, lbl_808859C8
    addi r29, r1, 0xd4
    fabs f7, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    frsp f7, f7
    stfs f2, 0xdc(r1)
    fcmpo cr0, f7, f0
    bge lbl_fn_8038378C_00000EB4
    lfs f7, 0xd4(r1)
    lfs f0, lbl_808858E8
    fcmpo cr0, f7, f0
    ble lbl_fn_8038378C_00000EA8
    lfs f0, lbl_808859CC
    b lbl_fn_8038378C_00000EAC
lbl_fn_8038378C_00000EA8:
    lfs f0, lbl_808859D0
lbl_fn_8038378C_00000EAC:
    stfs f0, 0x54(r1)
    b lbl_fn_8038378C_00000EC8
lbl_fn_8038378C_00000EB4:
    frsp f2, f2
    lfs f1, 0xd4(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x54(r1)
lbl_fn_8038378C_00000EC8:
    lfs f0, 0x54(r1)
    addi r3, r1, 0x210
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f7, lbl_808858E8
    addi r4, r1, 0x44
    lfs f26, 0x218(r1)
    mr r5, r4
    lfs f27, 0x214(r1)
    addi r3, r1, 0x240
    lfs f28, 0x210(r1)
    lfs f31, 0x228(r1)
    lfs f30, 0x224(r1)
    lfs f29, 0x220(r1)
    lfs f13, 0x238(r1)
    lfs f12, 0x234(r1)
    lfs f11, 0x230(r1)
    lfs f10, 0x23c(r1)
    lfs f9, 0x22c(r1)
    lfs f8, 0x21c(r1)
    lfs f0, lbl_808858F8
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0xdc(r1)
    stfs f7, 0x270(r1)
    stfs f7, 0x274(r1)
    stfs f7, 0x278(r1)
    stfs f0, 0x27c(r1)
    stfs f28, 0x14(r1)
    stfs f27, 0x18(r1)
    stfs f26, 0x1c(r1)
    stfs f28, 0x240(r1)
    stfs f27, 0x244(r1)
    stfs f26, 0x248(r1)
    stfs f29, 0x20(r1)
    stfs f30, 0x24(r1)
    stfs f31, 0x28(r1)
    stfs f29, 0x250(r1)
    stfs f30, 0x254(r1)
    stfs f31, 0x258(r1)
    stfs f11, 0x2c(r1)
    stfs f12, 0x30(r1)
    stfs f13, 0x34(r1)
    stfs f11, 0x260(r1)
    stfs f12, 0x264(r1)
    stfs f13, 0x268(r1)
    stfs f8, 0x38(r1)
    stfs f9, 0x3c(r1)
    stfs f10, 0x40(r1)
    stfs f8, 0x24c(r1)
    stfs f9, 0x25c(r1)
    stfs f10, 0x26c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x4c(r1)
    bl fn_805F9750
    lfs f2, 0x4c(r1)
    lfs f0, lbl_808859C8
    fabs f7, f2
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_8038378C_00000FE4
    lfs f7, 0x48(r1)
    lfs f0, lbl_808858E8
    fcmpo cr0, f7, f0
    ble lbl_fn_8038378C_00000FD4
    lfs f0, lbl_808859CC
    b lbl_fn_8038378C_00000FD8
lbl_fn_8038378C_00000FD4:
    lfs f0, lbl_808859D0
lbl_fn_8038378C_00000FD8:
    fneg f0, f0
    stfs f0, 0x50(r1)
    b lbl_fn_8038378C_00000FF8
lbl_fn_8038378C_00000FE4:
    lfs f1, 0x48(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x50(r1)
lbl_fn_8038378C_00000FF8:
    addi r3, r1, 0x50
    lfs f2, lbl_808858E8
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x8c
    psq_st f1, 0x0(r29), 0, 0
    fmr f30, f2
    lfs f8, 0x59c(r30)
    lfs f9, 0xd4(r1)
    lfs f7, 0xc28(r31)
    fadds f10, f9, f8
    lfs f0, 0xc34(r31)
    lfs f9, 0xc24(r31)
    fsubs f11, f7, f0
    lfs f8, 0xc30(r31)
    lfs f7, 0xc20(r31)
    lfs f0, 0xc2c(r31)
    fsubs f8, f9, f8
    lwz r29, 0xc44(r31)
    fsubs f0, f7, f0
    stfs f2, 0x58(r1)
    stfs f2, 0xdc(r1)
    stfs f10, 0xd4(r1)
    stfs f0, 0x8c(r1)
    stfs f8, 0x90(r1)
    stfs f11, 0x94(r1)
    bl fn_805F9940
    lfs f7, 0x530(r31)
    fmr f31, f1
    lfs f0, 0xc28(r31)
    addi r3, r1, 0x80
    lfs f9, 0x52c(r31)
    fsubs f10, f7, f0
    lfs f8, 0xc24(r31)
    lfs f7, 0x528(r31)
    lfs f0, 0xc20(r31)
    fsubs f8, f9, f8
    fsubs f0, f7, f0
    stfs f8, 0x84(r1)
    stfs f0, 0x80(r1)
    stfs f10, 0x88(r1)
    bl fn_805F9940
    lfs f7, 0x530(r31)
    fmr f29, f1
    lfs f0, 0xc34(r31)
    addi r3, r1, 0x74
    lfs f9, 0x52c(r31)
    fsubs f10, f7, f0
    lfs f8, 0xc30(r31)
    lfs f7, 0x528(r31)
    lfs f0, 0xc2c(r31)
    fsubs f8, f9, f8
    fsubs f0, f7, f0
    stfs f8, 0x78(r1)
    stfs f0, 0x74(r1)
    stfs f10, 0x7c(r1)
    bl fn_805F9940
    fdivs f0, f29, f31
    lfs f8, lbl_808858F8
    fcmpo cr0, f8, f0
    bge lbl_fn_8038378C_000010EC
    b lbl_fn_8038378C_000010F0
lbl_fn_8038378C_000010EC:
    fmr f8, f0
lbl_fn_8038378C_000010F0:
    clrlwi r0, r29, 31
    cmplwi r0, 0x1
    bne lbl_fn_8038378C_00001138
    rlwinm r0, r29, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_8038378C_00001120
    lfs f7, 0x5a0(r30)
    lfs f0, 0x5a0(r30)
    fneg f7, f7
    fsubs f0, f0, f7
    fmadds f30, f8, f0, f7
    b lbl_fn_8038378C_00001154
lbl_fn_8038378C_00001120:
    lfs f7, 0x5a0(r30)
    lfs f0, lbl_8087DCF0
    fneg f7, f7
    fsubs f0, f0, f7
    fmadds f30, f8, f0, f7
    b lbl_fn_8038378C_00001154
lbl_fn_8038378C_00001138:
    rlwinm r0, r29, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_8038378C_00001154
    lfs f0, 0x5a0(r30)
    lfs f7, lbl_8087DCF4
    fsubs f0, f0, f7
    fmadds f30, f8, f0, f7
lbl_fn_8038378C_00001154:
    lwz r0, 0x12a4(r31)
    lfs f8, 0x5a4(r30)
    extrwi. r0, r0, 1, 1
    beq lbl_fn_8038378C_0000116C
    lfs f0, 0x5ac(r30)
    fsubs f8, f8, f0
lbl_fn_8038378C_0000116C:
    lfs f2, 0x530(r31)
    addi r3, r1, 0xc8
    psq_l f1, 0x528(r31), 0, 0
    addi r4, r30, 0x868
    psq_st f1, 0x0(r3), 0, 0
    lfs f7, 0xd8(r1)
    lfs f0, 0xcc(r1)
    stfs f2, 0xd0(r1)
    fadds f0, f0, f8
    stfs f0, 0xcc(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    fmr f1, f7
    stfs f2, 0x870(r30)
    bl fn_8068A850
    frsp f7, f1
    lfs f0, 0xc8(r1)
    lfs f1, 0xd8(r1)
    fmadds f0, f30, f7, f0
    stfs f0, 0xc8(r1)
    bl fn_8068AD58
    frsp f10, f1
    lfs f7, lbl_808858E8
    fneg f9, f30
    lfs f8, 0xd0(r1)
    lfs f1, 0xdc(r1)
    addi r29, r1, 0x280
    lfs f0, lbl_808858F8
    fmadds f8, f9, f10, f8
    fcmpu cr0, f7, f1
    stfs f7, 0xbc(r1)
    stfs f8, 0xd0(r1)
    stfs f7, 0xc0(r1)
    stfs f0, 0xc4(r1)
    stfs f7, 0x2ac(r1)
    stfs f7, 0x2a4(r1)
    stfs f7, 0x2a0(r1)
    stfs f7, 0x29c(r1)
    stfs f7, 0x298(r1)
    stfs f7, 0x290(r1)
    stfs f7, 0x28c(r1)
    stfs f7, 0x288(r1)
    stfs f7, 0x284(r1)
    stfs f0, 0x2a8(r1)
    stfs f0, 0x294(r1)
    stfs f0, 0x280(r1)
    beq lbl_fn_8038378C_00001278
    addi r3, r1, 0x120
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0x120
    addi r5, r1, 0xf0
    bl fn_805F89F0
    addi r3, r1, 0xf0
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f6, 0x28(r29), 0, 0
lbl_fn_8038378C_00001278:
    lfs f0, lbl_808858E8
    lfs f1, 0xd8(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_8038378C_000012D8
    addi r3, r1, 0x180
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0x180
    addi r5, r1, 0x150
    bl fn_805F89F0
    addi r3, r1, 0x150
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f6, 0x28(r29), 0, 0
lbl_fn_8038378C_000012D8:
    lfs f0, lbl_808858E8
    lfs f1, 0xd4(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_8038378C_00001338
    addi r3, r1, 0x1e0
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0x1e0
    addi r5, r1, 0x1b0
    bl fn_805F89F0
    addi r3, r1, 0x1b0
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f6, 0x28(r29), 0, 0
lbl_fn_8038378C_00001338:
    addi r4, r1, 0xbc
    addi r3, r1, 0x280
    mr r5, r4
    bl fn_805F93C0
    lfs f7, 0x594(r30)
    addi r3, r1, 0xb0
    lfs f0, lbl_808858E8
    fneg f12, f7
    lfs f8, 0xbc(r1)
    lfs f7, 0xc4(r1)
    lfs f9, 0xc0(r1)
    fmuls f10, f8, f12
    lfs f11, 0xc8(r1)
    fmuls f8, f7, f12
    lfs f7, 0xd0(r1)
    fmuls f12, f9, f12
    lfs f9, 0xcc(r1)
    fadds f10, f10, f11
    stfs f0, 0xb4(r1)
    fadds f0, f8, f7
    fadds f8, f12, f9
    stfs f10, 0xbc(r1)
    fsubs f10, f11, f10
    fsubs f7, f7, f0
    stfs f8, 0xc0(r1)
    fsubs f30, f9, f8
    stfs f0, 0xc4(r1)
    stfs f10, 0xb0(r1)
    stfs f7, 0xb8(r1)
    bl fn_805F9940
    fmr f31, f1
    addi r3, r1, 0xb0
    mr r4, r3
    bl fn_805F98D0
    lfs f7, 0x1c(r30)
    addi r29, r1, 0xa4
    lfs f0, 0x10(r30)
    addi r5, r1, 0x8
    lfs f9, 0x18(r30)
    mr r3, r29
    fsubs f2, f7, f0
    lfs f8, 0xc(r30)
    lfs f7, 0x14(r30)
    mr r4, r29
    lfs f0, 0x8(r30)
    fsubs f8, f9, f8
    fsubs f0, f7, f0
    stfs f8, 0xc(r1)
    stfs f0, 0x8(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0x10(r1)
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0xac(r1)
    bl fn_805F98D0
    lfs f0, lbl_808858E8
    mr r3, r29
    stfs f0, 0xa8(r1)
    mr r4, r29
    bl fn_805F98D0
    lfs f9, 0xac(r1)
    addi r3, r1, 0xb0
    lfs f8, lbl_80885A3C
    mr r4, r3
    lfs f7, 0xa8(r1)
    lfs f0, 0xa4(r1)
    fmuls f9, f9, f8
    fmuls f10, f7, f8
    lfs f7, 0xb4(r1)
    fmuls f11, f0, f8
    lfs f8, 0xb0(r1)
    lfs f0, 0xb8(r1)
    fadds f7, f7, f10
    fadds f8, f8, f11
    stfs f11, 0x68(r1)
    fadds f0, f0, f9
    stfs f10, 0x6c(r1)
    stfs f9, 0x70(r1)
    stfs f8, 0xb0(r1)
    stfs f7, 0xb4(r1)
    stfs f0, 0xb8(r1)
    bl fn_805F98D0
    fneg f10, f30
    addi r29, r1, 0xbc
    fneg f8, f31
    lfs f0, 0xb0(r1)
    lfs f7, 0xb8(r1)
    addi r7, r1, 0x5c
    fmuls f12, f0, f8
    lfs f0, 0xc8(r1)
    fmuls f11, f7, f8
    lfs f8, 0xcc(r1)
    frsp f7, f10
    lfs f9, 0xd0(r1)
    fadds f0, f0, f12
    stfs f12, 0xb0(r1)
    fadds f2, f9, f11
    mr r3, r30
    fadds f7, f8, f7
    stfs f0, 0x5c(r1)
    stfs f7, 0x60(r1)
    mr r4, r31
    mr r6, r29
    addi r5, r30, 0x594
    psq_l f1, 0x0(r7), 0, 0
    addi r7, r1, 0xc8
    stfs f11, 0xb8(r1)
    stfs f10, 0xb4(r1)
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0xc4(r1)
    stfs f2, 0x64(r1)
    lfs f26, 0x598(r30)
    bl fn_8038E23C
    psq_l f1, 0x0(r29), 0, 0
    addi r4, r1, 0xc8
    lfs f2, 0xc4(r1)
    mr r3, r30
    stfs f2, 0x10(r30)
    psq_st f1, 0x8(r30), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0xd0(r1)
    stfs f2, 0x1c(r30)
    psq_st f1, 0x14(r30), 0, 0
    stfs f26, 0x50(r30)
    bl fn_8004B378
    mr r4, r30
    addi r3, r30, 0x1f4
    bl fn_80392A04
    mr r3, r30
    bl fn_80392510
    mr r3, r30
    bl fn_80392FE8
    mr r3, r30
    bl fn_803918EC
    mr r3, r30
    bl fn_803920C8
    mr r3, r30
    bl fn_803928C0
    addi r3, r30, 0x1f4
    bl fn_8004B378
    lwz r3, lbl_8087EFB4
    addi r4, r30, 0x1f4
    bl fn_80116BD4
lbl_fn_8038378C_00001570:
    lwz r0, 0x324(r1)
    psq_l f31, 0x318(r1), 0, 0
    lfd f31, 0x310(r1)
    psq_l f30, 0x308(r1), 0, 0
    lfd f30, 0x300(r1)
    psq_l f29, 0x2f8(r1), 0, 0
    lfd f29, 0x2f0(r1)
    psq_l f28, 0x2e8(r1), 0, 0
    lfd f28, 0x2e0(r1)
    psq_l f27, 0x2d8(r1), 0, 0
    lfd f27, 0x2d0(r1)
    psq_l f26, 0x2c8(r1), 0, 0
    lfd f26, 0x2c0(r1)
    lwz r31, 0x2bc(r1)
    lwz r30, 0x2b8(r1)
    lwz r29, 0x2b4(r1)
    mtlr r0
    addi r1, r1, 0x320
    blr
}

asm void fn_80383F7C(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    fabs f0, f1
    lfs f3, lbl_808859E0
    stw r0, 0x74(r1)
    stw r31, 0x6c(r1)
    frsp f0, f0
    mr r31, r7
    stw r30, 0x68(r1)
    mr r30, r5
    fcmpo cr0, f0, f3
    stw r29, 0x64(r1)
    mr r29, r4
    stw r28, 0x60(r1)
    mr r28, r3
    ble lbl_fn_80383F7C_000017A0
    lfs f0, lbl_808858E8
    fcmpo cr0, f1, f0
    ble lbl_fn_80383F7C_0000160C
    b lbl_fn_80383F7C_00001610
lbl_fn_80383F7C_0000160C:
    lfs f3, lbl_80885A4C
lbl_fn_80383F7C_00001610:
    fsubs f3, f1, f3
    lfs f0, lbl_80885A08
    cmpwi r8, 0x0
    fdivs f5, f3, f0
    fmuls f5, f5, f2
    beq lbl_fn_80383F7C_00001630
    lfs f0, lbl_808859E4
    b lbl_fn_80383F7C_00001634
lbl_fn_80383F7C_00001630:
    lfs f0, lbl_808858F8
lbl_fn_80383F7C_00001634:
    fmuls f5, f5, f0
    lfs f0, 0x1c(r7)
    lfs f4, lbl_80885A50
    lfs f3, lbl_80885A54
    fmuls f5, f5, f0
    lfs f0, 0x0(r3)
    fmuls f5, f4, f5
    fabs f4, f5
    fmadds f0, f3, f5, f0
    frsp f3, f4
    stfs f0, 0x0(r3)
    fneg f3, f3
    fcmpo cr0, f3, f0
    ble lbl_fn_80383F7C_00001670
    b lbl_fn_80383F7C_00001674
lbl_fn_80383F7C_00001670:
    fmr f3, f0
lbl_fn_80383F7C_00001674:
    fabs f0, f5
    frsp f4, f0
    fcmpo cr0, f4, f3
    bge lbl_fn_80383F7C_00001688
    b lbl_fn_80383F7C_000016A0
lbl_fn_80383F7C_00001688:
    fneg f4, f4
    lfs f0, 0x0(r3)
    fcmpo cr0, f4, f0
    ble lbl_fn_80383F7C_0000169C
    b lbl_fn_80383F7C_000016A0
lbl_fn_80383F7C_0000169C:
    fmr f4, f0
lbl_fn_80383F7C_000016A0:
    frsp f1, f4
    stfs f4, 0x0(r3)
    mr r4, r6
    addi r3, r1, 0x30
    bl fn_805F9050
    lfs f3, 0x8(r29)
    addi r4, r1, 0x14
    lfs f0, 0x8(r30)
    addi r6, r1, 0x8
    lfs f5, 0x4(r29)
    mr r5, r4
    fsubs f2, f3, f0
    lfs f4, 0x4(r30)
    lfs f3, 0x0(r29)
    addi r3, r1, 0x30
    lfs f0, 0x0(r30)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0xc(r1)
    stfs f0, 0x8(r1)
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x10(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x1c(r1)
    bl fn_805F93C0
    lfs f3, 0x1c(r1)
    addi r3, r1, 0x20
    lfs f0, 0x8(r30)
    lfs f5, 0x18(r1)
    fadds f2, f3, f0
    lfs f4, 0x4(r30)
    lfs f3, 0x14(r1)
    fadds f4, f5, f4
    lfs f0, 0x0(r30)
    stfs f2, 0x8(r29)
    fadds f0, f3, f0
    lfs f5, lbl_808858E8
    stfs f4, 0x24(r1)
    stfs f0, 0x20(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    lfs f4, 0x0(r28)
    stfs f2, 0x28(r1)
    fcmpo cr0, f4, f5
    ble lbl_fn_80383F7C_00001778
    lfs f3, lbl_80885958
    lfs f0, 0x1c(r31)
    fnmsubs f0, f3, f0, f4
    fcmpo cr0, f5, f0
    ble lbl_fn_80383F7C_0000176C
    b lbl_fn_80383F7C_00001770
lbl_fn_80383F7C_0000176C:
    fmr f5, f0
lbl_fn_80383F7C_00001770:
    stfs f5, 0x0(r28)
    b lbl_fn_80383F7C_000017A8
lbl_fn_80383F7C_00001778:
    bge lbl_fn_80383F7C_000017A8
    lfs f3, lbl_80885958
    lfs f0, 0x1c(r31)
    fmadds f0, f3, f0, f4
    fcmpo cr0, f5, f0
    bge lbl_fn_80383F7C_00001794
    b lbl_fn_80383F7C_00001798
lbl_fn_80383F7C_00001794:
    fmr f5, f0
lbl_fn_80383F7C_00001798:
    stfs f5, 0x0(r28)
    b lbl_fn_80383F7C_000017A8
lbl_fn_80383F7C_000017A0:
    lfs f0, lbl_808858E8
    stfs f0, 0x0(r3)
lbl_fn_80383F7C_000017A8:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    lwz r29, 0x64(r1)
    lwz r28, 0x60(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_80384188(void)
{
    nofralloc
    stwu r1, -0x990(r1)
    mflr r0
    stw r0, 0x994(r1)
    li r0, 0x988
    addi r11, r1, 0x930
    stfd f31, 0x980(r1)
    psq_stx f31, r1, r0, 0, 0
    li r0, 0x978
    stfd f30, 0x970(r1)
    psq_stx f30, r1, r0, 0, 0
    li r0, 0x968
    stfd f29, 0x960(r1)
    psq_stx f29, r1, r0, 0, 0
    li r0, 0x958
    stfd f28, 0x950(r1)
    psq_stx f28, r1, r0, 0, 0
    li r0, 0x948
    stfd f27, 0x940(r1)
    psq_stx f27, r1, r0, 0, 0
    li r0, 0x938
    stfd f26, 0x930(r1)
    psq_stx f26, r1, r0, 0, 0
    bl _savegpr_27
    lwz r5, 0x808(r3)
    mr r29, r3
    mr r30, r4
    addic. r0, r5, 0x1
    stw r0, 0x808(r3)
    blt lbl_fn_80384188_00003120
    lwz r0, 0x858(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80384188_00001854
    lwz r0, 0x55c(r4)
    cmpwi r0, 0x5
    bne lbl_fn_80384188_00001978
lbl_fn_80384188_00001854:
    lwz r0, 0x838(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80384188_00003120
    lwz r4, 0x83c(r3)
    addi r0, r4, 0x1
    stw r0, 0x83c(r3)
    cmpwi r0, 0x6
    ble lbl_fn_80384188_0000187C
    li r0, 0x6
    stw r0, 0x83c(r3)
lbl_fn_80384188_0000187C:
    lwz r5, 0x83c(r3)
    lis r0, 0x4330
    stw r0, 0x908(r1)
    lis r4, lbl_8074E008@ha
    xoris r0, r5, 0x8000
    lfd f9, lbl_8074E008@l(r4)
    stw r0, 0x90c(r1)
    addi r4, r1, 0xbc
    lfs f7, lbl_80885A40
    lfd f8, 0x908(r1)
    lfs f0, 0x848(r3)
    fsubs f11, f8, f9
    lfs f10, 0x854(r3)
    lfs f9, 0x844(r3)
    fsubs f30, f0, f10
    lfs f8, 0x850(r3)
    fdivs f29, f11, f7
    stfs f30, 0xd0(r1)
    lfs f7, 0x840(r3)
    lfs f0, 0x84c(r3)
    lfs f13, lbl_80885A24
    lfs f12, 0x5d4(r3)
    fsubs f7, f7, f0
    lfs f11, 0x85c(r3)
    fmuls f30, f30, f29
    fsubs f9, f9, f8
    stfs f7, 0xc8(r1)
    fmuls f31, f7, f29
    fadds f2, f30, f10
    stfs f9, 0xcc(r1)
    fmuls f9, f9, f29
    fmuls f10, f13, f12
    stfs f31, 0xd4(r1)
    fadds f7, f9, f8
    stfs f9, 0xd8(r1)
    fadds f8, f31, f0
    fsubs f0, f10, f11
    stfs f7, 0xc0(r1)
    stfs f8, 0xbc(r1)
    fmadds f0, f29, f0, f11
    psq_l f1, 0x0(r4), 0, 0
    stfs f30, 0xdc(r1)
    stfs f2, 0xc4(r1)
    stfs f0, 0x50(r3)
    psq_st f1, 0x14(r3), 0, 0
    stfs f2, 0x1c(r3)
    mr r3, r29
    bl fn_8004B378
    mr r4, r29
    addi r3, r29, 0x1f4
    bl fn_80392A04
    mr r3, r29
    bl fn_803918EC
    mr r3, r29
    bl fn_803920C8
    mr r3, r29
    bl fn_803928C0
    addi r3, r29, 0x1f4
    bl fn_8004B378
    lwz r3, lbl_8087EFB4
    addi r4, r29, 0x1f4
    bl fn_80116BD4
    b lbl_fn_80384188_00003120
lbl_fn_80384188_00001978:
    lwz r3, lbl_8087F0A8
    li r31, 0x0
    li r4, 0x24
    addi r3, r3, 0x48c
    bl fn_801240B4
    cmpwi r3, 0x0
    beq lbl_fn_80384188_000019B0
    lwz r3, lbl_8087F0A8
    li r4, 0x24
    addi r3, r3, 0x48c
    bl fn_801231D0
    cmpwi r3, 0x0
    bne lbl_fn_80384188_000019B0
    li r31, 0x1
lbl_fn_80384188_000019B0:
    psq_l f1, 0x8(r29), 0, 0
    addi r27, r1, 0x328
    lfs f2, 0x10(r29)
    addi r3, r1, 0x34c
    stfs f2, 0x354(r1)
    addi r5, r1, 0x340
    addi r28, r1, 0x334
    addi r6, r1, 0xb0
    psq_st f1, 0x0(r3), 0, 0
    mr r3, r27
    mr r4, r27
    psq_l f1, 0x14(r29), 0, 0
    lfs f2, 0x1c(r29)
    stfs f2, 0x348(r1)
    psq_st f1, 0x0(r5), 0, 0
    psq_l f1, 0x20(r29), 0, 0
    lfs f2, 0x28(r29)
    stfs f2, 0x33c(r1)
    psq_st f1, 0x0(r28), 0, 0
    lfs f7, 0x1c(r29)
    lfs f0, 0x10(r29)
    lfs f9, 0x18(r29)
    fsubs f2, f7, f0
    lfs f8, 0xc(r29)
    lfs f7, 0x14(r29)
    lfs f0, 0x8(r29)
    fsubs f8, f9, f8
    stfs f2, 0xb8(r1)
    fsubs f0, f7, f0
    stfs f8, 0xb4(r1)
    stfs f0, 0xb0(r1)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0x330(r1)
    bl fn_805F98D0
    mr r3, r27
    mr r4, r28
    addi r5, r1, 0x31c
    bl fn_805F99B0
    lfs f8, 0x820(r29)
    addi r3, r30, 0xfa4
    lfs f7, 0x814(r29)
    addi r27, r1, 0x304
    lfs f9, 0x81c(r29)
    fsubs f10, f8, f7
    lfs f0, 0x810(r29)
    lfs f8, 0x818(r29)
    lfs f7, 0x80c(r29)
    fsubs f9, f9, f0
    lfs f0, lbl_808859C8
    fsubs f7, f8, f7
    stfs f9, 0x314(r1)
    stfs f7, 0x310(r1)
    stfs f10, 0x318(r1)
    lfs f2, 0xfac(r30)
    psq_l f1, 0x0(r3), 0, 0
    fabs f7, f2
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0x30c(r1)
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_80384188_00001ACC
    lfs f7, 0x304(r1)
    lfs f0, lbl_808858E8
    fcmpo cr0, f7, f0
    ble lbl_fn_80384188_00001AC0
    lfs f0, lbl_808859CC
    b lbl_fn_80384188_00001AC4
lbl_fn_80384188_00001AC0:
    lfs f0, lbl_808859D0
lbl_fn_80384188_00001AC4:
    stfs f0, 0xa8(r1)
    b lbl_fn_80384188_00001AE0
lbl_fn_80384188_00001ACC:
    frsp f2, f2
    lfs f1, 0x304(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0xa8(r1)
lbl_fn_80384188_00001AE0:
    lfs f0, 0xa8(r1)
    addi r3, r1, 0x788
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f7, lbl_808858E8
    addi r4, r1, 0x98
    lfs f26, 0x790(r1)
    mr r5, r4
    lfs f27, 0x78c(r1)
    addi r3, r1, 0x7b8
    lfs f28, 0x788(r1)
    lfs f31, 0x7a0(r1)
    lfs f30, 0x79c(r1)
    lfs f29, 0x798(r1)
    lfs f13, 0x7b0(r1)
    lfs f12, 0x7ac(r1)
    lfs f11, 0x7a8(r1)
    lfs f10, 0x7b4(r1)
    lfs f9, 0x7a4(r1)
    lfs f8, 0x794(r1)
    lfs f0, lbl_808858F8
    psq_l f1, 0x0(r27), 0, 0
    lfs f2, 0x30c(r1)
    stfs f7, 0x7e8(r1)
    stfs f7, 0x7ec(r1)
    stfs f7, 0x7f0(r1)
    stfs f0, 0x7f4(r1)
    stfs f28, 0x68(r1)
    stfs f27, 0x6c(r1)
    stfs f26, 0x70(r1)
    stfs f28, 0x7b8(r1)
    stfs f27, 0x7bc(r1)
    stfs f26, 0x7c0(r1)
    stfs f29, 0x74(r1)
    stfs f30, 0x78(r1)
    stfs f31, 0x7c(r1)
    stfs f29, 0x7c8(r1)
    stfs f30, 0x7cc(r1)
    stfs f31, 0x7d0(r1)
    stfs f11, 0x80(r1)
    stfs f12, 0x84(r1)
    stfs f13, 0x88(r1)
    stfs f11, 0x7d8(r1)
    stfs f12, 0x7dc(r1)
    stfs f13, 0x7e0(r1)
    stfs f8, 0x8c(r1)
    stfs f9, 0x90(r1)
    stfs f10, 0x94(r1)
    stfs f8, 0x7c4(r1)
    stfs f9, 0x7d4(r1)
    stfs f10, 0x7e4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0xa0(r1)
    bl fn_805F9750
    lfs f2, 0xa0(r1)
    lfs f0, lbl_808859C8
    fabs f7, f2
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_80384188_00001BFC
    lfs f7, 0x9c(r1)
    lfs f0, lbl_808858E8
    fcmpo cr0, f7, f0
    ble lbl_fn_80384188_00001BEC
    lfs f0, lbl_808859CC
    b lbl_fn_80384188_00001BF0
lbl_fn_80384188_00001BEC:
    lfs f0, lbl_808859D0
lbl_fn_80384188_00001BF0:
    fneg f0, f0
    stfs f0, 0xa4(r1)
    b lbl_fn_80384188_00001C10
lbl_fn_80384188_00001BFC:
    lfs f1, 0x9c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0xa4(r1)
lbl_fn_80384188_00001C10:
    addi r3, r1, 0xa4
    lfs f2, lbl_808858E8
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x310
    stfs f2, 0xac(r1)
    mr r4, r3
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0x30c(r1)
    bl fn_805F98D0
    addi r3, r1, 0x31c
    bl fn_805F9920
    lfs f0, lbl_80885958
    fcmpo cr0, f1, f0
    bge lbl_fn_80384188_00001C5C
    lfs f7, lbl_808858E8
    lfs f0, lbl_808858F8
    stfs f7, 0x31c(r1)
    stfs f7, 0x320(r1)
    stfs f0, 0x324(r1)
lbl_fn_80384188_00001C5C:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_800A56A8
    fmr f26, f1
    lwz r3, lbl_8087EF70
    li r4, 0x0
    bl fn_800A58D0
    cmpwi r3, 0x0
    beq lbl_fn_80384188_00001CA0
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x2
    li r6, 0x0
    bl fn_800A56A8
    fadds f26, f26, f1
lbl_fn_80384188_00001CA0:
    lwz r3, lbl_8087F9C0
    lwz r0, 0x50(r3)
    rlwinm r0, r0, 0, 28, 28
    cmplwi r0, 0x8
    bne lbl_fn_80384188_00001CBC
    lfs f0, lbl_80885904
    fmuls f26, f26, f0
lbl_fn_80384188_00001CBC:
    lwz r0, lbl_8087F9C0
    cmpwi r0, 0x0
    beq lbl_fn_80384188_00001CE0
    lfs f7, 0x4c(r3)
    lfs f8, lbl_808858F8
    lfs f0, lbl_80885938
    fsubs f7, f7, f8
    fmadds f0, f0, f7, f8
    fmuls f26, f26, f0
lbl_fn_80384188_00001CE0:
    lfs f0, lbl_80885904
    fcmpo cr0, f0, f26
    ble lbl_fn_80384188_00001CF0
    b lbl_fn_80384188_00001CF4
lbl_fn_80384188_00001CF0:
    fmr f0, f26
lbl_fn_80384188_00001CF4:
    lfs f31, lbl_808858F8
    fcmpo cr0, f31, f0
    bge lbl_fn_80384188_00001D04
    b lbl_fn_80384188_00001D18
lbl_fn_80384188_00001D04:
    lfs f31, lbl_80885904
    fcmpo cr0, f31, f26
    ble lbl_fn_80384188_00001D14
    b lbl_fn_80384188_00001D18
lbl_fn_80384188_00001D14:
    fmr f31, f26
lbl_fn_80384188_00001D18:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x1
    li r6, 0x0
    bl fn_800A56A8
    fmr f27, f1
    lwz r3, lbl_8087EF70
    li r4, 0x0
    bl fn_800A58D0
    cmpwi r3, 0x0
    beq lbl_fn_80384188_00001D5C
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x3
    li r6, 0x0
    bl fn_800A56A8
    fadds f27, f27, f1
lbl_fn_80384188_00001D5C:
    lwz r3, lbl_8087F9C0
    lwz r0, 0x50(r3)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_80384188_00001D78
    lfs f0, lbl_80885904
    fmuls f27, f27, f0
lbl_fn_80384188_00001D78:
    lwz r0, lbl_8087F9C0
    cmpwi r0, 0x0
    beq lbl_fn_80384188_00001D9C
    lfs f7, 0x4c(r3)
    lfs f8, lbl_808858F8
    lfs f0, lbl_80885938
    fsubs f7, f7, f8
    fmadds f0, f0, f7, f8
    fmuls f27, f27, f0
lbl_fn_80384188_00001D9C:
    lfs f0, lbl_80885904
    fcmpo cr0, f0, f27
    ble lbl_fn_80384188_00001DAC
    b lbl_fn_80384188_00001DB0
lbl_fn_80384188_00001DAC:
    fmr f0, f27
lbl_fn_80384188_00001DB0:
    lfs f26, lbl_808858F8
    fcmpo cr0, f26, f0
    bge lbl_fn_80384188_00001DC0
    b lbl_fn_80384188_00001DD4
lbl_fn_80384188_00001DC0:
    lfs f26, lbl_80885904
    fcmpo cr0, f26, f27
    ble lbl_fn_80384188_00001DD0
    b lbl_fn_80384188_00001DD4
lbl_fn_80384188_00001DD0:
    fmr f26, f27
lbl_fn_80384188_00001DD4:
    fmuls f9, f26, f26
    lfs f8, 0x33c(r1)
    lfs f7, 0x338(r1)
    fmr f1, f31
    lfs f0, 0x334(r1)
    fneg f8, f8
    fmadds f27, f31, f31, f9
    stfs f8, 0x268(r1)
    fneg f7, f7
    mr r8, r31
    fneg f0, f0
    addi r3, r29, 0xa18
    fmr f2, f27
    stfs f0, 0x260(r1)
    addi r4, r1, 0x340
    addi r5, r1, 0x34c
    stfs f7, 0x264(r1)
    addi r6, r1, 0x260
    addi r7, r29, 0x60c
    bl fn_80383F7C
    fmr f1, f26
    mr r8, r31
    fmr f2, f27
    addi r3, r29, 0xa1c
    addi r4, r1, 0x340
    addi r5, r1, 0x34c
    addi r6, r1, 0x31c
    addi r7, r29, 0x60c
    bl fn_80383F7C
    lwz r0, 0x55c(r30)
    cmpwi r0, 0x6
    bne lbl_fn_80384188_00001F18
    lwz r0, 0x560(r30)
    cmpwi r0, 0x1d
    bne lbl_fn_80384188_00001F18
    lwz r0, lbl_8087F048
    cmpwi r0, 0x0
    beq lbl_fn_80384188_00001F18
    lwz r3, lbl_8087F0A8
    li r4, 0x24
    addi r3, r3, 0x48c
    bl fn_801231D0
    cmpwi r3, 0x0
    beq lbl_fn_80384188_00001F18
    lwz r3, lbl_8087F048
    mr r4, r30
    lfs f1, lbl_80885A58
    addi r5, r1, 0x34c
    lfs f2, lbl_80885A5C
    addi r6, r1, 0x328
    li r7, 0x1
    bl fn_801002DC
    cmpwi r3, 0x0
    stw r3, 0x860(r29)
    beq lbl_fn_80384188_00001F18
    lfs f9, 0x5fc(r3)
    addi r5, r1, 0x254
    lfs f7, 0x608(r3)
    addi r4, r29, 0x840
    lfs f8, 0x5f8(r3)
    fadds f10, f9, f7
    lfs f0, 0x604(r3)
    lfs f9, 0x5f4(r3)
    fadds f11, f8, f0
    lfs f8, 0x600(r3)
    lfs f7, lbl_808859E4
    fadds f8, f9, f8
    lfs f0, lbl_808858E8
    fmuls f2, f10, f7
    fmuls f9, f11, f7
    stfs f11, 0x24c(r1)
    fmuls f7, f8, f7
    stfs f9, 0x258(r1)
    stfs f7, 0x254(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f8, 0x248(r1)
    stfs f10, 0x250(r1)
    stfs f2, 0x25c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x848(r29)
    stfs f0, 0x864(r29)
lbl_fn_80384188_00001F18:
    lwz r0, 0x860(r29)
    cmpwi r0, 0x0
    beq lbl_fn_80384188_00001FD4
    lfs f7, 0x864(r29)
    lfs f0, lbl_8088593C
    lfs f27, lbl_808858F8
    fadds f0, f7, f0
    stfs f0, 0x864(r29)
    fcmpo cr0, f27, f0
    bge lbl_fn_80384188_00001F44
    b lbl_fn_80384188_00001F48
lbl_fn_80384188_00001F44:
    fmr f27, f0
lbl_fn_80384188_00001F48:
    lfs f0, 0x848(r29)
    addi r4, r1, 0x23c
    lfs f9, 0x348(r1)
    addi r3, r1, 0x340
    lfs f7, 0x844(r29)
    fsubs f26, f0, f9
    lfs f8, 0x344(r1)
    lfs f0, 0x840(r29)
    fsubs f13, f7, f8
    lfs f7, 0x340(r1)
    fmuls f11, f26, f27
    fsubs f12, f0, f7
    lfs f0, lbl_808858F8
    fmuls f10, f13, f27
    fadds f2, f11, f9
    stfs f12, 0x5c(r1)
    fmuls f9, f12, f27
    fadds f8, f10, f8
    stfs f2, 0x348(r1)
    fadds f7, f9, f7
    stfs f8, 0x240(r1)
    stfs f7, 0x23c(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lfs f7, 0x864(r29)
    stfs f13, 0x60(r1)
    fcmpo cr0, f7, f0
    stfs f26, 0x64(r1)
    stfs f9, 0x50(r1)
    stfs f10, 0x54(r1)
    stfs f11, 0x58(r1)
    stfs f2, 0x244(r1)
    ble lbl_fn_80384188_00001FD4
    li r0, 0x0
    stw r0, 0x860(r29)
lbl_fn_80384188_00001FD4:
    lfs f7, 0x348(r1)
    addi r27, r1, 0x328
    lfs f0, 0x354(r1)
    addi r5, r1, 0x230
    lfs f9, 0x344(r1)
    mr r3, r27
    fsubs f2, f7, f0
    lfs f8, 0x350(r1)
    lfs f7, 0x340(r1)
    mr r4, r27
    lfs f0, 0x34c(r1)
    fsubs f8, f9, f8
    fsubs f0, f7, f0
    stfs f8, 0x234(r1)
    stfs f0, 0x230(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0x238(r1)
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0x330(r1)
    bl fn_805F98D0
    lfs f2, 0x330(r1)
    addi r28, r1, 0x2f8
    psq_l f1, 0x0(r27), 0, 0
    fabs f7, f2
    lfs f0, lbl_808859C8
    psq_st f1, 0x0(r28), 0, 0
    frsp f7, f7
    stfs f2, 0x300(r1)
    fcmpo cr0, f7, f0
    bge lbl_fn_80384188_00002070
    lfs f7, 0x2f8(r1)
    lfs f0, lbl_808858E8
    fcmpo cr0, f7, f0
    ble lbl_fn_80384188_00002064
    lfs f0, lbl_808859CC
    b lbl_fn_80384188_00002068
lbl_fn_80384188_00002064:
    lfs f0, lbl_808859D0
lbl_fn_80384188_00002068:
    stfs f0, 0x48(r1)
    b lbl_fn_80384188_00002084
lbl_fn_80384188_00002070:
    frsp f2, f2
    lfs f1, 0x2f8(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_80384188_00002084:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x718
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f7, lbl_808858E8
    addi r4, r1, 0x38
    lfs f31, 0x720(r1)
    mr r5, r4
    lfs f30, 0x71c(r1)
    addi r3, r1, 0x748
    lfs f29, 0x718(r1)
    lfs f28, 0x730(r1)
    lfs f27, 0x72c(r1)
    lfs f26, 0x728(r1)
    lfs f13, 0x740(r1)
    lfs f12, 0x73c(r1)
    lfs f11, 0x738(r1)
    lfs f10, 0x744(r1)
    lfs f9, 0x734(r1)
    lfs f8, 0x724(r1)
    lfs f0, lbl_808858F8
    psq_l f1, 0x0(r28), 0, 0
    lfs f2, 0x300(r1)
    stfs f7, 0x778(r1)
    stfs f7, 0x77c(r1)
    stfs f7, 0x780(r1)
    stfs f0, 0x784(r1)
    stfs f29, 0x8(r1)
    stfs f30, 0xc(r1)
    stfs f31, 0x10(r1)
    stfs f29, 0x748(r1)
    stfs f30, 0x74c(r1)
    stfs f31, 0x750(r1)
    stfs f26, 0x14(r1)
    stfs f27, 0x18(r1)
    stfs f28, 0x1c(r1)
    stfs f26, 0x758(r1)
    stfs f27, 0x75c(r1)
    stfs f28, 0x760(r1)
    stfs f11, 0x20(r1)
    stfs f12, 0x24(r1)
    stfs f13, 0x28(r1)
    stfs f11, 0x768(r1)
    stfs f12, 0x76c(r1)
    stfs f13, 0x770(r1)
    stfs f8, 0x2c(r1)
    stfs f9, 0x30(r1)
    stfs f10, 0x34(r1)
    stfs f8, 0x754(r1)
    stfs f9, 0x764(r1)
    stfs f10, 0x774(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_808859C8
    fabs f7, f2
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_80384188_000021A0
    lfs f7, 0x3c(r1)
    lfs f0, lbl_808858E8
    fcmpo cr0, f7, f0
    ble lbl_fn_80384188_00002190
    lfs f0, lbl_808859CC
    b lbl_fn_80384188_00002194
lbl_fn_80384188_00002190:
    lfs f0, lbl_808859D0
lbl_fn_80384188_00002194:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_80384188_000021B4
lbl_fn_80384188_000021A0:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_80384188_000021B4:
    addi r3, r1, 0x44
    lfs f2, lbl_808858E8
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    lfs f8, lbl_80885990
    lfs f0, 0x2f8(r1)
    stfs f2, 0x4c(r1)
    fabs f7, f0
    stfs f2, 0x300(r1)
    frsp f7, f7
    fcmpo cr0, f7, f8
    ble lbl_fn_80384188_000023A8
    fcmpo cr0, f0, f2
    ble lbl_fn_80384188_000021F0
    b lbl_fn_80384188_000021F4
lbl_fn_80384188_000021F0:
    fneg f8, f8
lbl_fn_80384188_000021F4:
    lfs f7, lbl_808858E8
    addi r27, r1, 0x888
    lfs f1, 0x300(r1)
    lfs f0, lbl_808858F8
    fcmpu cr0, f7, f1
    stfs f8, 0x2f8(r1)
    stfs f7, 0x328(r1)
    stfs f7, 0x32c(r1)
    stfs f0, 0x330(r1)
    stfs f7, 0x8b4(r1)
    stfs f7, 0x8ac(r1)
    stfs f7, 0x8a8(r1)
    stfs f7, 0x8a4(r1)
    stfs f7, 0x8a0(r1)
    stfs f7, 0x898(r1)
    stfs f7, 0x894(r1)
    stfs f7, 0x890(r1)
    stfs f7, 0x88c(r1)
    stfs f0, 0x8b0(r1)
    stfs f0, 0x89c(r1)
    stfs f0, 0x888(r1)
    beq lbl_fn_80384188_0000229C
    addi r3, r1, 0x628
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r27
    addi r4, r1, 0x628
    addi r5, r1, 0x5f8
    bl fn_805F89F0
    addi r3, r1, 0x5f8
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    psq_st f2, 0x8(r27), 0, 0
    psq_st f3, 0x10(r27), 0, 0
    psq_st f4, 0x18(r27), 0, 0
    psq_st f5, 0x20(r27), 0, 0
    psq_st f6, 0x28(r27), 0, 0
lbl_fn_80384188_0000229C:
    lfs f0, lbl_808858E8
    lfs f1, 0x2fc(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_80384188_000022FC
    addi r3, r1, 0x688
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r27
    addi r4, r1, 0x688
    addi r5, r1, 0x658
    bl fn_805F89F0
    addi r3, r1, 0x658
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    psq_st f2, 0x8(r27), 0, 0
    psq_st f3, 0x10(r27), 0, 0
    psq_st f4, 0x18(r27), 0, 0
    psq_st f5, 0x20(r27), 0, 0
    psq_st f6, 0x28(r27), 0, 0
lbl_fn_80384188_000022FC:
    lfs f0, lbl_808858E8
    lfs f1, 0x2f8(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_80384188_0000235C
    addi r3, r1, 0x6e8
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r27
    addi r4, r1, 0x6e8
    addi r5, r1, 0x6b8
    bl fn_805F89F0
    addi r3, r1, 0x6b8
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    psq_st f2, 0x8(r27), 0, 0
    psq_st f3, 0x10(r27), 0, 0
    psq_st f4, 0x18(r27), 0, 0
    psq_st f5, 0x20(r27), 0, 0
    psq_st f6, 0x28(r27), 0, 0
lbl_fn_80384188_0000235C:
    addi r4, r1, 0x328
    addi r3, r1, 0x888
    mr r5, r4
    bl fn_805F93C0
    lfs f8, 0x4c(r29)
    addi r4, r1, 0x224
    lfs f0, 0x330(r1)
    addi r3, r1, 0x340
    lfs f7, 0x32c(r1)
    fmuls f2, f0, f8
    lfs f0, 0x328(r1)
    fmuls f7, f7, f8
    fmuls f0, f0, f8
    stfs f2, 0x22c(r1)
    stfs f0, 0x224(r1)
    stfs f7, 0x228(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x348(r1)
lbl_fn_80384188_000023A8:
    addi r5, r29, 0x9f8
    lwz r3, lbl_8087F430
    lfs f31, 0x874(r29)
    addi r4, r1, 0x2ec
    lfs f30, 0x878(r29)
    cmpwi r3, 0x0
    psq_l f1, 0x0(r5), 0, 0
    lfs f2, 0xa00(r29)
    stfs f2, 0x2f4(r1)
    lfs f26, lbl_80885A60
    psq_st f1, 0x0(r4), 0, 0
    lfs f0, 0x5e4(r29)
    stfs f0, 0x2e8(r1)
    stfs f31, 0x2e0(r1)
    stfs f30, 0x2e4(r1)
    beq lbl_fn_80384188_000023FC
    li r4, 0x6a
    bl fn_80370174
    cmpwi r3, 0x0
    beq lbl_fn_80384188_000023FC
    lfs f26, lbl_80885A44
lbl_fn_80384188_000023FC:
    lfs f0, 0xc1c(r29)
    lfs f7, lbl_808858E8
    fadds f0, f0, f26
    stfs f0, 0xc1c(r29)
    fcmpo cr0, f7, f0
    ble lbl_fn_80384188_00002418
    b lbl_fn_80384188_0000241C
lbl_fn_80384188_00002418:
    fmr f7, f0
lbl_fn_80384188_0000241C:
    lfs f8, lbl_80885914
    fcmpo cr0, f7, f8
    bge lbl_fn_80384188_00002440
    lfs f8, lbl_808858E8
    lfs f0, 0xc1c(r29)
    fcmpo cr0, f8, f0
    ble lbl_fn_80384188_0000243C
    b lbl_fn_80384188_00002440
lbl_fn_80384188_0000243C:
    fmr f8, f0
lbl_fn_80384188_00002440:
    stfs f8, 0xc1c(r29)
    frsp f0, f8
    lfs f7, lbl_808858E8
    addi r27, r1, 0x858
    lfs f8, 0x2e8(r1)
    lfs f1, 0x300(r1)
    fadds f8, f8, f0
    lfs f0, lbl_808858F8
    fcmpu cr0, f7, f1
    stfs f7, 0x884(r1)
    stfs f8, 0x2e8(r1)
    stfs f7, 0x87c(r1)
    stfs f7, 0x878(r1)
    stfs f7, 0x874(r1)
    stfs f7, 0x870(r1)
    stfs f7, 0x868(r1)
    stfs f7, 0x864(r1)
    stfs f7, 0x860(r1)
    stfs f7, 0x85c(r1)
    stfs f0, 0x880(r1)
    stfs f0, 0x86c(r1)
    stfs f0, 0x858(r1)
    beq lbl_fn_80384188_000024EC
    addi r3, r1, 0x508
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r27
    addi r4, r1, 0x508
    addi r5, r1, 0x4d8
    bl fn_805F89F0
    addi r3, r1, 0x4d8
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    psq_st f2, 0x8(r27), 0, 0
    psq_st f3, 0x10(r27), 0, 0
    psq_st f4, 0x18(r27), 0, 0
    psq_st f5, 0x20(r27), 0, 0
    psq_st f6, 0x28(r27), 0, 0
lbl_fn_80384188_000024EC:
    lfs f0, lbl_808858E8
    lfs f1, 0x2fc(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_80384188_0000254C
    addi r3, r1, 0x568
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r27
    addi r4, r1, 0x568
    addi r5, r1, 0x538
    bl fn_805F89F0
    addi r3, r1, 0x538
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    psq_st f2, 0x8(r27), 0, 0
    psq_st f3, 0x10(r27), 0, 0
    psq_st f4, 0x18(r27), 0, 0
    psq_st f5, 0x20(r27), 0, 0
    psq_st f6, 0x28(r27), 0, 0
lbl_fn_80384188_0000254C:
    lfs f0, lbl_808858E8
    lfs f1, 0x2f8(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_80384188_000025AC
    addi r3, r1, 0x5c8
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r27
    addi r4, r1, 0x5c8
    addi r5, r1, 0x598
    bl fn_805F89F0
    addi r3, r1, 0x598
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    psq_st f2, 0x8(r27), 0, 0
    psq_st f3, 0x10(r27), 0, 0
    psq_st f4, 0x18(r27), 0, 0
    psq_st f5, 0x20(r27), 0, 0
    psq_st f6, 0x28(r27), 0, 0
lbl_fn_80384188_000025AC:
    addi r4, r1, 0x2e0
    addi r3, r1, 0x858
    mr r5, r4
    bl fn_805F93C0
    lfs f7, 0x2f4(r1)
    addi r4, r1, 0x218
    lfs f0, 0x2e8(r1)
    addi r3, r1, 0x34c
    lfs f9, 0x2f0(r1)
    addi r6, r1, 0x20c
    fadds f2, f7, f0
    lfs f8, 0x2e4(r1)
    lfs f7, 0x2ec(r1)
    addi r5, r1, 0x340
    fadds f8, f9, f8
    lfs f0, 0x2e0(r1)
    fadds f7, f7, f0
    stfs f8, 0x21c(r1)
    lfs f0, lbl_808858E8
    frsp f8, f2
    stfs f7, 0x218(r1)
    addi r8, r1, 0x2ec
    psq_l f1, 0x0(r4), 0, 0
    fcmpo cr0, f31, f0
    stfs f2, 0x354(r1)
    addi r7, r1, 0x2d4
    lfs f7, 0x32c(r1)
    li r0, 0x0
    psq_st f1, 0x0(r3), 0, 0
    lfs f9, 0x328(r1)
    lfs f10, 0x5d0(r29)
    lfs f0, 0x330(r1)
    fmuls f12, f7, f10
    lfs f7, 0x350(r1)
    fmuls f11, f0, f10
    lfs f0, 0x34c(r1)
    fmuls f9, f9, f10
    stfs f2, 0x220(r1)
    fadds f8, f11, f8
    stfs f9, 0x200(r1)
    fadds f7, f12, f7
    fadds f0, f9, f0
    stfs f12, 0x204(r1)
    fmr f2, f8
    stfs f0, 0x20c(r1)
    stfs f7, 0x210(r1)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    psq_l f1, 0x0(r8), 0, 0
    psq_st f1, 0x0(r7), 0, 0
    lfs f0, 0x2d8(r1)
    stfs f2, 0x348(r1)
    fadds f0, f0, f30
    lfs f2, 0x2f4(r1)
    stfs f11, 0x208(r1)
    stfs f8, 0x214(r1)
    stw r0, 0x8ec(r1)
    stw r0, 0x8f0(r1)
    stw r0, 0x8f4(r1)
    stw r0, 0x8f8(r1)
    stfs f2, 0x2dc(r1)
    stfs f0, 0x2d8(r1)
    ble lbl_fn_80384188_000026B4
    lfs f0, lbl_80885A3C
    fadds f7, f0, f31
    b lbl_fn_80384188_000026BC
lbl_fn_80384188_000026B4:
    lfs f0, lbl_80885A3C
    fsubs f7, f31, f0
lbl_fn_80384188_000026BC:
    lfs f0, lbl_808858E8
    addi r3, r1, 0x828
    lfs f1, 0x2fc(r1)
    li r4, 0x79
    stfs f7, 0x2c8(r1)
    stfs f0, 0x2cc(r1)
    stfs f0, 0x2d0(r1)
    bl fn_805F8E70
    addi r4, r1, 0x2c8
    addi r3, r1, 0x828
    mr r5, r4
    bl fn_805F93C0
    lfs f7, 0x2dc(r1)
    lis r7, 0x8000
    lfs f0, 0x2d0(r1)
    addi r4, r1, 0x8b8
    lfs f9, 0x2d8(r1)
    addi r5, r1, 0x2d4
    fadds f10, f7, f0
    lfs f8, 0x2cc(r1)
    lfs f7, 0x2d4(r1)
    addi r6, r1, 0x2bc
    lfs f0, 0x2c8(r1)
    fadds f8, f9, f8
    fadds f0, f7, f0
    stfs f10, 0x2c4(r1)
    lwz r3, lbl_8087EE98
    addi r7, r7, 0x8
    stfs f8, 0x2c0(r1)
    li r8, 0x0
    stfs f0, 0x2bc(r1)
    li r9, 0x0
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_80384188_00002A20
    lfs f7, 0x8c4(r1)
    addi r3, r1, 0x1f4
    lfs f0, 0x2dc(r1)
    lfs f9, 0x8c0(r1)
    fsubs f10, f7, f0
    lfs f8, 0x2d8(r1)
    lfs f7, 0x8bc(r1)
    lfs f0, 0x2d4(r1)
    fsubs f8, f9, f8
    stfs f10, 0x1fc(r1)
    fsubs f0, f7, f0
    stfs f8, 0x1f8(r1)
    stfs f0, 0x1f4(r1)
    bl fn_805F9940
    lfs f0, lbl_80885A3C
    lfs f10, lbl_80885958
    fsubs f0, f1, f0
    fcmpo cr0, f10, f0
    ble lbl_fn_80384188_00002798
    b lbl_fn_80384188_000027D8
lbl_fn_80384188_00002798:
    lfs f7, 0x8c4(r1)
    addi r3, r1, 0x1e8
    lfs f0, 0x2dc(r1)
    lfs f9, 0x8c0(r1)
    fsubs f10, f7, f0
    lfs f8, 0x2d8(r1)
    lfs f7, 0x8bc(r1)
    lfs f0, 0x2d4(r1)
    fsubs f8, f9, f8
    stfs f10, 0x1f0(r1)
    fsubs f0, f7, f0
    stfs f8, 0x1ec(r1)
    stfs f0, 0x1e8(r1)
    bl fn_805F9940
    lfs f0, lbl_80885A3C
    fsubs f10, f1, f0
lbl_fn_80384188_000027D8:
    fdivs f9, f10, f31
    lfs f0, lbl_808858E8
    lfs f8, 0x5e4(r29)
    lfs f7, 0xc1c(r29)
    fabs f9, f9
    fcmpo cr0, f31, f0
    fadds f7, f8, f7
    frsp f0, f9
    fmuls f8, f7, f0
    ble lbl_fn_80384188_00002804
    b lbl_fn_80384188_00002808
lbl_fn_80384188_00002804:
    fneg f10, f10
lbl_fn_80384188_00002808:
    lfs f7, lbl_808858E8
    addi r27, r1, 0x7f8
    lfs f1, 0x300(r1)
    lfs f0, lbl_808858F8
    fcmpu cr0, f7, f1
    stfs f10, 0x2e0(r1)
    stfs f30, 0x2e4(r1)
    stfs f8, 0x2e8(r1)
    stfs f7, 0x824(r1)
    stfs f7, 0x81c(r1)
    stfs f7, 0x818(r1)
    stfs f7, 0x814(r1)
    stfs f7, 0x810(r1)
    stfs f7, 0x808(r1)
    stfs f7, 0x804(r1)
    stfs f7, 0x800(r1)
    stfs f7, 0x7fc(r1)
    stfs f0, 0x820(r1)
    stfs f0, 0x80c(r1)
    stfs f0, 0x7f8(r1)
    beq lbl_fn_80384188_000028AC
    addi r3, r1, 0x3e8
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r27
    addi r4, r1, 0x3e8
    addi r5, r1, 0x3b8
    bl fn_805F89F0
    addi r3, r1, 0x3b8
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    psq_st f2, 0x8(r27), 0, 0
    psq_st f3, 0x10(r27), 0, 0
    psq_st f4, 0x18(r27), 0, 0
    psq_st f5, 0x20(r27), 0, 0
    psq_st f6, 0x28(r27), 0, 0
lbl_fn_80384188_000028AC:
    lfs f0, lbl_808858E8
    lfs f1, 0x2fc(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_80384188_0000290C
    addi r3, r1, 0x448
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r27
    addi r4, r1, 0x448
    addi r5, r1, 0x418
    bl fn_805F89F0
    addi r3, r1, 0x418
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    psq_st f2, 0x8(r27), 0, 0
    psq_st f3, 0x10(r27), 0, 0
    psq_st f4, 0x18(r27), 0, 0
    psq_st f5, 0x20(r27), 0, 0
    psq_st f6, 0x28(r27), 0, 0
lbl_fn_80384188_0000290C:
    lfs f0, lbl_808858E8
    lfs f1, 0x2f8(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_80384188_0000296C
    addi r3, r1, 0x4a8
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r27
    addi r4, r1, 0x4a8
    addi r5, r1, 0x478
    bl fn_805F89F0
    addi r3, r1, 0x478
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    psq_st f2, 0x8(r27), 0, 0
    psq_st f3, 0x10(r27), 0, 0
    psq_st f4, 0x18(r27), 0, 0
    psq_st f5, 0x20(r27), 0, 0
    psq_st f6, 0x28(r27), 0, 0
lbl_fn_80384188_0000296C:
    addi r4, r1, 0x2e0
    addi r3, r1, 0x7f8
    mr r5, r4
    bl fn_805F93C0
    lfs f7, 0x2f4(r1)
    addi r4, r1, 0x1dc
    lfs f0, 0x2e8(r1)
    addi r3, r1, 0x34c
    lfs f9, 0x2f0(r1)
    addi r6, r1, 0x1d0
    fadds f2, f7, f0
    lfs f8, 0x2e4(r1)
    lfs f7, 0x2ec(r1)
    addi r5, r1, 0x340
    fadds f8, f9, f8
    lfs f0, 0x2e0(r1)
    fadds f7, f7, f0
    stfs f8, 0x1e0(r1)
    lfs f10, 0x32c(r1)
    frsp f8, f2
    stfs f7, 0x1dc(r1)
    lfs f9, 0x328(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lfs f0, 0x330(r1)
    stfs f2, 0x354(r1)
    lfs f7, 0x350(r1)
    lfs f11, 0x5d0(r29)
    stfs f2, 0x1e4(r1)
    fmuls f12, f0, f11
    lfs f0, 0x34c(r1)
    fmuls f10, f10, f11
    fmuls f9, f9, f11
    stfs f12, 0x1cc(r1)
    fadds f2, f12, f8
    fadds f7, f10, f7
    stfs f9, 0x1c4(r1)
    fadds f0, f9, f0
    stfs f7, 0x1d4(r1)
    stfs f0, 0x1d0(r1)
    psq_l f1, 0x0(r6), 0, 0
    stfs f10, 0x1c8(r1)
    stfs f2, 0x1d8(r1)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x348(r1)
lbl_fn_80384188_00002A20:
    lfs f8, 0x330(r1)
    addi r3, r1, 0x2b0
    lfs f7, 0x328(r1)
    lfs f0, lbl_808858E8
    stfs f7, 0x2b0(r1)
    stfs f0, 0x2b4(r1)
    stfs f8, 0x2b8(r1)
    bl fn_805F9920
    lfs f0, lbl_808859C4
    fcmpo cr0, f1, f0
    ble lbl_fn_80384188_00002C2C
    addi r3, r1, 0x2b0
    mr r4, r3
    bl fn_805F98D0
    addi r27, r1, 0x34c
    lfs f2, 0x354(r1)
    addi r4, r1, 0x370
    psq_l f1, 0x0(r27), 0, 0
    stfs f2, 0x378(r1)
    addi r3, r1, 0x2b0
    lfs f2, 0x2b8(r1)
    addi r6, r1, 0x37c
    psq_st f1, 0x0(r4), 0, 0
    addi r5, r1, 0x2a4
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x2ec
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x384(r1)
    bl fn_80050900
    addi r3, r1, 0x2a4
    lfs f2, 0x2ac(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r5, r1, 0x2d4
    lis r3, 0x8000
    psq_st f1, 0x0(r5), 0, 0
    addi r7, r3, 0x8
    addi r6, r1, 0x2bc
    psq_l f1, 0x0(r27), 0, 0
    addi r4, r1, 0x8b8
    stfs f2, 0x2dc(r1)
    li r8, 0x0
    lfs f2, 0x354(r1)
    li r9, 0x0
    psq_st f1, 0x0(r6), 0, 0
    lwz r3, lbl_8087EE98
    stfs f2, 0x2c4(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_80384188_00002B84
    lfs f7, 0x8c4(r1)
    addi r3, r1, 0x1b8
    lfs f0, 0x8e8(r1)
    addi r5, r1, 0x1ac
    lfs f9, 0x8c0(r1)
    addi r4, r1, 0x340
    fadds f2, f7, f0
    lfs f8, 0x8e4(r1)
    lfs f7, 0x8bc(r1)
    fadds f8, f9, f8
    lfs f0, 0x8e0(r1)
    stfs f2, 0x354(r1)
    fadds f0, f7, f0
    lfs f10, 0x32c(r1)
    stfs f8, 0x1bc(r1)
    lfs f9, 0x328(r1)
    frsp f8, f2
    stfs f0, 0x1b8(r1)
    lfs f11, 0x330(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    lfs f12, 0x5d0(r29)
    lfs f7, 0x350(r1)
    fmuls f10, f10, f12
    lfs f0, 0x34c(r1)
    fmuls f9, f9, f12
    stfs f2, 0x1c0(r1)
    fmuls f11, f11, f12
    fadds f7, f10, f7
    fadds f0, f9, f0
    stfs f11, 0x1a8(r1)
    fadds f2, f11, f8
    stfs f7, 0x1b0(r1)
    stfs f0, 0x1ac(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f9, 0x1a0(r1)
    stfs f10, 0x1a4(r1)
    stfs f2, 0x1b4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x348(r1)
lbl_fn_80384188_00002B84:
    lis r6, lbl_807C7030@ha
    lis r7, 0x8000
    lwz r3, lbl_8087EE98
    addi r4, r1, 0x8b8
    lfs f1, lbl_80885A44
    addi r5, r1, 0x34c
    addi r6, r6, lbl_807C7030@l
    addi r7, r7, 0x8
    li r8, 0x0
    li r9, 0x0
    bl fn_8004D388
    cmpwi r3, 0x0
    beq lbl_fn_80384188_00002C2C
    addi r4, r1, 0x8c8
    lfs f2, 0x8d0(r1)
    psq_l f1, 0x0(r4), 0, 0
    addi r3, r1, 0x34c
    psq_st f1, 0x0(r3), 0, 0
    addi r4, r1, 0x194
    lfs f0, 0x32c(r1)
    addi r3, r1, 0x340
    stfs f2, 0x354(r1)
    lfs f8, 0x328(r1)
    lfs f9, 0x5d0(r29)
    lfs f7, 0x330(r1)
    fmuls f11, f0, f9
    lfs f0, 0x34c(r1)
    fmuls f10, f7, f9
    lfs f7, 0x350(r1)
    fmuls f8, f8, f9
    stfs f11, 0x18c(r1)
    fadds f2, f10, f2
    stfs f10, 0x190(r1)
    fadds f7, f11, f7
    fadds f0, f8, f0
    stfs f8, 0x188(r1)
    stfs f0, 0x194(r1)
    stfs f7, 0x198(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0x19c(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x348(r1)
lbl_fn_80384188_00002C2C:
    lfs f7, 0x5e4(r29)
    lis r7, 0x8000
    lfs f0, 0xc1c(r29)
    addi r10, r1, 0x17c
    lfs f11, 0x330(r1)
    addi r5, r1, 0x2d4
    fadds f0, f7, f0
    lfs f10, 0x32c(r1)
    lfs f9, 0x328(r1)
    addi r27, r1, 0x34c
    lfs f8, 0x354(r1)
    addi r6, r1, 0x2bc
    fneg f12, f0
    lfs f7, 0x350(r1)
    lfs f0, 0x34c(r1)
    addi r4, r1, 0x8b8
    lwz r3, lbl_8087EE98
    addi r7, r7, 0x8
    fmuls f11, f11, f12
    li r8, 0x0
    fmuls f10, f10, f12
    li r9, 0x0
    fmuls f9, f9, f12
    stfs f11, 0x178(r1)
    fadds f8, f11, f8
    stfs f9, 0x170(r1)
    fadds f7, f10, f7
    fadds f0, f9, f0
    stfs f10, 0x174(r1)
    fmr f2, f8
    stfs f0, 0x17c(r1)
    stfs f7, 0x180(r1)
    psq_l f1, 0x0(r10), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    psq_l f1, 0x0(r27), 0, 0
    stfs f2, 0x2dc(r1)
    lfs f2, 0x354(r1)
    stfs f8, 0x184(r1)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x2c4(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_80384188_00002D78
    lfs f7, 0x8c4(r1)
    addi r3, r1, 0x164
    lfs f0, 0x8e8(r1)
    addi r5, r1, 0x158
    lfs f9, 0x8c0(r1)
    addi r4, r1, 0x340
    fadds f2, f7, f0
    lfs f8, 0x8e4(r1)
    lfs f7, 0x8bc(r1)
    fadds f8, f9, f8
    lfs f0, 0x8e0(r1)
    stfs f2, 0x354(r1)
    fadds f0, f7, f0
    lfs f10, 0x32c(r1)
    stfs f8, 0x168(r1)
    lfs f9, 0x328(r1)
    frsp f8, f2
    stfs f0, 0x164(r1)
    lfs f11, 0x330(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    lfs f12, 0x5d0(r29)
    lfs f7, 0x350(r1)
    fmuls f10, f10, f12
    lfs f0, 0x34c(r1)
    fmuls f9, f9, f12
    stfs f2, 0x16c(r1)
    fmuls f11, f11, f12
    fadds f7, f10, f7
    fadds f0, f9, f0
    stfs f11, 0x154(r1)
    fadds f2, f11, f8
    stfs f7, 0x15c(r1)
    stfs f0, 0x158(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f9, 0x14c(r1)
    stfs f10, 0x150(r1)
    stfs f2, 0x160(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x348(r1)
lbl_fn_80384188_00002D78:
    lis r6, lbl_807C7030@ha
    lis r7, 0x8000
    lwz r3, lbl_8087EE98
    addi r4, r1, 0x8b8
    lfs f1, lbl_80885A3C
    addi r5, r1, 0x34c
    addi r6, r6, lbl_807C7030@l
    addi r7, r7, 0x8
    li r8, 0x0
    li r9, 0x0
    bl fn_8004D388
    cmpwi r3, 0x0
    beq lbl_fn_80384188_00002E20
    addi r4, r1, 0x8c8
    lfs f2, 0x8d0(r1)
    psq_l f1, 0x0(r4), 0, 0
    addi r3, r1, 0x34c
    psq_st f1, 0x0(r3), 0, 0
    addi r4, r1, 0x140
    lfs f0, 0x32c(r1)
    addi r3, r1, 0x340
    stfs f2, 0x354(r1)
    lfs f8, 0x328(r1)
    lfs f9, 0x5d0(r29)
    lfs f7, 0x330(r1)
    fmuls f11, f0, f9
    lfs f0, 0x34c(r1)
    fmuls f10, f7, f9
    lfs f7, 0x350(r1)
    fmuls f8, f8, f9
    stfs f11, 0x138(r1)
    fadds f2, f10, f2
    stfs f10, 0x13c(r1)
    fadds f7, f11, f7
    fadds f0, f8, f0
    stfs f8, 0x134(r1)
    stfs f0, 0x140(r1)
    stfs f7, 0x144(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0x148(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x348(r1)
lbl_fn_80384188_00002E20:
    lwz r0, 0x520(r30)
    cmpwi r0, 0x0
    blt lbl_fn_80384188_0000306C
    addi r4, r1, 0x34c
    lfs f2, 0x354(r1)
    psq_l f1, 0x0(r4), 0, 0
    addi r3, r1, 0x298
    addi r4, r1, 0x358
    psq_st f1, 0x0(r3), 0, 0
    addi r5, r1, 0x340
    addi r3, r1, 0x364
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0x2a0(r1)
    stfs f2, 0x360(r1)
    lfs f2, 0x348(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x36c(r1)
    bge lbl_fn_80384188_00002E74
    li r3, 0x0
    b lbl_fn_80384188_00002E80
lbl_fn_80384188_00002E74:
    mulli r0, r0, 0x30
    lwz r3, 0xec(r30)
    add r3, r3, r0
lbl_fn_80384188_00002E80:
    lfs f7, 0x1c(r3)
    addi r5, r1, 0x128
    lfs f8, 0xc(r3)
    addi r4, r1, 0x288
    lfs f2, 0x2c(r3)
    addi r3, r1, 0x358
    lfs f0, lbl_80885A64
    stfs f8, 0x128(r1)
    stfs f7, 0x12c(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0x130(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x290(r1)
    stfs f0, 0x294(r1)
    bl fn_80051B70
    cmpwi r3, 0x0
    beq lbl_fn_80384188_0000306C
    lfs f7, lbl_808858E8
    addi r3, r1, 0x388
    lfs f0, lbl_808858F8
    li r4, 0x79
    stfs f7, 0x110(r1)
    lfs f26, 0x294(r1)
    stfs f7, 0x114(r1)
    stfs f0, 0x118(r1)
    lfs f1, 0x538(r30)
    bl fn_805F8E70
    addi r4, r1, 0x110
    addi r3, r1, 0x388
    mr r5, r4
    bl fn_805F93C0
    lfs f8, 0x118(r1)
    addi r3, r1, 0x26c
    lfs f7, 0x114(r1)
    fmuls f9, f8, f26
    lfs f0, 0x110(r1)
    fmuls f10, f7, f26
    lfs f8, 0x290(r1)
    fmuls f11, f0, f26
    lfs f7, 0x28c(r1)
    fadds f12, f8, f9
    lfs f0, 0x288(r1)
    fadds f13, f7, f10
    lfs f8, 0x354(r1)
    fadds f26, f0, f11
    lfs f7, 0x350(r1)
    lfs f0, 0x34c(r1)
    fsubs f8, f12, f8
    fsubs f7, f13, f7
    stfs f11, 0x11c(r1)
    fsubs f0, f26, f0
    stfs f10, 0x120(r1)
    stfs f9, 0x124(r1)
    stfs f26, 0x278(r1)
    stfs f13, 0x27c(r1)
    stfs f12, 0x280(r1)
    stfs f0, 0x26c(r1)
    stfs f7, 0x270(r1)
    stfs f8, 0x274(r1)
    bl fn_805F9940
    lfs f0, lbl_808859DC
    fmr f30, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_80384188_0000306C
    addi r3, r1, 0x26c
    mr r4, r3
    bl fn_805F98D0
    lis r4, 0x8000
    lwz r3, lbl_8087EE98
    addi r7, r4, 0x8
    addi r5, r1, 0x298
    addi r6, r1, 0x34c
    li r4, 0x0
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ED34
    cmpwi r3, 0x0
    bne lbl_fn_80384188_0000306C
    addi r3, r1, 0x328
    addi r4, r1, 0x26c
    bl fn_805F9990
    lfs f11, 0x330(r1)
    addi r4, r1, 0xec
    lfs f10, 0x32c(r1)
    addi r3, r1, 0x340
    fmuls f12, f11, f30
    lfs f9, 0x328(r1)
    fmuls f13, f10, f30
    lfs f8, 0x34c(r1)
    fmuls f26, f9, f30
    lfs f7, 0x350(r1)
    fmuls f28, f13, f1
    stfs f26, 0xf8(r1)
    fmuls f26, f26, f1
    lfs f0, 0x354(r1)
    fmuls f27, f12, f1
    stfs f13, 0xfc(r1)
    fadds f7, f7, f28
    stfs f12, 0x100(r1)
    fadds f0, f0, f27
    fadds f8, f8, f26
    stfs f7, 0x350(r1)
    stfs f8, 0x34c(r1)
    stfs f0, 0x354(r1)
    lfs f13, 0x5d0(r29)
    stfs f26, 0x104(r1)
    fmuls f11, f11, f13
    fmuls f10, f10, f13
    stfs f28, 0x108(r1)
    fmuls f9, f9, f13
    fadds f2, f11, f0
    stfs f27, 0x10c(r1)
    fadds f0, f10, f7
    fadds f7, f9, f8
    stfs f9, 0xe0(r1)
    stfs f7, 0xec(r1)
    stfs f0, 0xf0(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f10, 0xe4(r1)
    stfs f11, 0xe8(r1)
    stfs f2, 0xf4(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x348(r1)
lbl_fn_80384188_0000306C:
    addi r3, r1, 0x34c
    lfs f2, 0x354(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x340
    psq_st f1, 0x8(r29), 0, 0
    cmpwi r31, 0x0
    lfs f9, 0x50(r29)
    stfs f2, 0x10(r29)
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x348(r1)
    stfs f2, 0x1c(r29)
    psq_st f1, 0x14(r29), 0, 0
    beq lbl_fn_80384188_000030C4
    lfs f8, lbl_8088593C
    lfs f7, 0x5d4(r29)
    lfs f0, lbl_80885A24
    fnmsubs f8, f8, f7, f9
    fmuls f0, f0, f7
    fcmpo cr0, f8, f0
    bge lbl_fn_80384188_000030DC
    fmr f8, f0
    b lbl_fn_80384188_000030DC
lbl_fn_80384188_000030C4:
    lfs f7, lbl_8088593C
    lfs f0, 0x5d4(r29)
    fmadds f8, f7, f0, f9
    fcmpo cr0, f8, f0
    ble lbl_fn_80384188_000030DC
    fmr f8, f0
lbl_fn_80384188_000030DC:
    stfs f8, 0x50(r29)
    mr r3, r29
    bl fn_8004B378
    mr r4, r29
    addi r3, r29, 0x1f4
    bl fn_80392A04
    mr r3, r29
    bl fn_803918EC
    mr r3, r29
    bl fn_803920C8
    mr r3, r29
    bl fn_803928C0
    addi r3, r29, 0x1f4
    bl fn_8004B378
    lwz r3, lbl_8087EFB4
    addi r4, r29, 0x1f4
    bl fn_80116BD4
lbl_fn_80384188_00003120:
    li r0, 0x988
    addi r11, r1, 0x930
    psq_lx f31, r1, r0, 0, 0
    lfd f31, 0x980(r1)
    li r0, 0x978
    psq_lx f30, r1, r0, 0, 0
    lfd f30, 0x970(r1)
    li r0, 0x968
    psq_lx f29, r1, r0, 0, 0
    lfd f29, 0x960(r1)
    li r0, 0x958
    psq_lx f28, r1, r0, 0, 0
    lfd f28, 0x950(r1)
    li r0, 0x948
    psq_lx f27, r1, r0, 0, 0
    lfd f27, 0x940(r1)
    li r0, 0x938
    psq_lx f26, r1, r0, 0, 0
    lfd f26, 0x930(r1)
    bl _restgpr_27
    lwz r0, 0x994(r1)
    mtlr r0
    addi r1, r1, 0x990
    blr
}
