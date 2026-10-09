#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void fn_8004B378(void);
extern void fn_8004D388(void);
extern void fn_8004ED34(void);
extern void fn_80092814(void);
extern void fn_80116BD4(void);
extern void fn_80178088(void);
extern void fn_8037F9AC(void);
extern void fn_803918EC(void);
extern void fn_803920C8(void);
extern void fn_80392510(void);
extern void fn_803928C0(void);
extern void fn_80392A04(void);
extern void fn_80392FE8(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_805F9990(void);
extern void fn_8068A4A8(void);
extern void fn_8068A850(void);
extern void fn_8068AD58(void);
extern void fn_8068AE24(void);

/* External data declarations */
extern u8 lbl_8074E008[];
extern u8 lbl_8074E210[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087EFB4;
extern u32 lbl_808858E8;
extern u32 lbl_808858EC;
extern u32 lbl_808858F8;
extern u32 lbl_80885910;
extern u32 lbl_80885914;
extern u32 lbl_80885920;
extern u32 lbl_80885934;
extern u32 lbl_80885944;
extern u32 lbl_80885988;
extern u32 lbl_808859CC;
extern u32 lbl_808859E0;
extern u32 lbl_808859E4;
extern u32 lbl_80885A34;
extern u32 lbl_80885A44;
extern u32 lbl_80885A70;
extern u32 lbl_80885A74;
extern u32 lbl_80885A78;
extern u32 lbl_80885A7C;
extern u32 lbl_80885A84;
extern u32 lbl_80885A98;

/* Function declarations */
void fn_8038C928(void);
void fn_8038CD94(void);
void fn_8038D1C0(void);
void fn_8038D4D4(void);
void fn_8038D854(void);
void fn_8038DBE4(void);
void fn_8038DDE0(void);
void fn_8038DF5C(void);
void fn_8038E23C(void);

asm void fn_8038C928(void)
{
    nofralloc
    stwu r1, -0x150(r1)
    mflr r0
    addi r5, r3, 0x80c
    addi r6, r3, 0x818
    stw r0, 0x154(r1)
    stfd f31, 0x140(r1)
    psq_st f31, 0x148(r1), 0, 0
    lfs f31, lbl_808858F8
    stfd f30, 0x130(r1)
    psq_st f30, 0x138(r1), 0, 0
    stfd f29, 0x120(r1)
    psq_st f29, 0x128(r1), 0, 0
    stfd f28, 0x110(r1)
    psq_st f28, 0x118(r1), 0, 0
    stfd f27, 0x100(r1)
    psq_st f27, 0x108(r1), 0, 0
    stfd f26, 0xf0(r1)
    psq_st f26, 0xf8(r1), 0, 0
    stfd f25, 0xe0(r1)
    psq_st f25, 0xe8(r1), 0, 0
    stfd f24, 0xd0(r1)
    psq_st f24, 0xd8(r1), 0, 0
    stfd f23, 0xc0(r1)
    psq_st f23, 0xc8(r1), 0, 0
    stw r31, 0xbc(r1)
    mr r31, r3
    lwz r0, 0x424(r3)
    psq_l f1, 0x8(r3), 0, 0
    lfs f2, 0x10(r3)
    cmpwi r0, 0x0
    psq_st f1, 0x0(r5), 0, 0
    psq_l f1, 0x14(r3), 0, 0
    stfs f2, 0x814(r3)
    lfs f2, 0x1c(r3)
    lfs f0, 0x50(r3)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x820(r3)
    stfs f0, 0x830(r3)
    beq lbl_fn_8038C928_000000E4
    lfs f3, 0x428(r3)
    lfs f0, 0x42c(r3)
    lfs f5, lbl_808858E8
    fsubs f0, f3, f0
    stfs f0, 0x428(r3)
    fcmpo cr0, f5, f0
    ble lbl_fn_8038C928_000000BC
    b lbl_fn_8038C928_000000C0
lbl_fn_8038C928_000000BC:
    fmr f5, f0
lbl_fn_8038C928_000000C0:
    frsp f3, f5
    lfs f4, lbl_808858F8
    lfs f0, 0x42c(r3)
    stfs f5, 0x428(r3)
    fcmpo cr0, f3, f0
    fsubs f31, f4, f3
    bge lbl_fn_8038C928_000000E4
    li r0, 0x0
    stw r0, 0x424(r3)
lbl_fn_8038C928_000000E4:
    lfs f0, lbl_808858E8
    lfs f5, 0x74c(r3)
    lfs f4, 0x748(r3)
    lfs f3, 0x744(r3)
    lfs f6, 0x750(r3)
    addi r3, r1, 0x68
    stfs f3, 0x98(r1)
    stfs f4, 0x9c(r1)
    stfs f5, 0xa0(r1)
    stfs f0, 0x5c(r1)
    stfs f6, 0x60(r1)
    stfs f0, 0x64(r1)
    bl fn_80178088
    lfs f3, 0x70(r1)
    lfs f0, 0x64(r1)
    lfs f5, 0x6c(r1)
    fadds f6, f3, f0
    lfs f4, 0x60(r1)
    lwz r3, 0xc20(r31)
    fadds f5, f5, f4
    lfs f3, 0x68(r1)
    lfs f0, 0x5c(r1)
    cmpwi r3, 0x0
    stfs f6, 0x94(r1)
    fadds f7, f3, f0
    lfs f30, 0x73c(r31)
    stfs f5, 0x90(r1)
    stfs f7, 0x8c(r1)
    beq lbl_fn_8038C928_000001FC
    lwz r0, 0x30(r3)
    cmpwi r0, 0x0
    ble lbl_fn_8038C928_000001FC
    lfs f4, 0xa0(r1)
    addi r3, r1, 0x50
    lfs f3, 0x9c(r1)
    lfs f0, 0x98(r1)
    fsubs f4, f4, f6
    fsubs f3, f3, f5
    fsubs f0, f0, f7
    stfs f4, 0x58(r1)
    stfs f0, 0x50(r1)
    stfs f3, 0x54(r1)
    bl fn_805F9940
    lfs f3, 0x73c(r31)
    fmr f30, f1
    lfs f0, lbl_808859E4
    fmuls f1, f3, f0
    bl fn_8068AE24
    lwz r4, 0xc20(r31)
    lis r0, 0x4330
    stw r0, 0xa8(r1)
    lis r3, lbl_8074E008@ha
    lwz r0, 0x30(r4)
    frsp f4, f1
    lfd f3, lbl_8074E008@l(r3)
    xoris r0, r0, 0x8000
    stw r0, 0xac(r1)
    lfd f0, 0xa8(r1)
    fsubs f0, f0, f3
    fmuls f0, f0, f4
    fdivs f1, f0, f30
    bl fn_8068A4A8
    frsp f4, f1
    lfs f3, lbl_80885A44
    lfs f0, 0x73c(r31)
    fmuls f30, f3, f4
    fcmpo cr0, f30, f0
    bge lbl_fn_8038C928_000001F8
    b lbl_fn_8038C928_000001FC
lbl_fn_8038C928_000001F8:
    fmr f30, f0
lbl_fn_8038C928_000001FC:
    lfs f5, 0xa0(r1)
    addi r3, r1, 0x80
    lfs f0, 0x94(r1)
    lfs f4, 0x98(r1)
    fsubs f5, f5, f0
    lfs f3, 0x8c(r1)
    lfs f0, lbl_808858E8
    fsubs f3, f4, f3
    stfs f5, 0x88(r1)
    stfs f3, 0x80(r1)
    stfs f0, 0x84(r1)
    bl fn_805F9920
    lfs f0, lbl_808858E8
    fcmpo cr0, f1, f0
    ble lbl_fn_8038C928_00000244
    addi r3, r1, 0x80
    mr r4, r3
    bl fn_805F98D0
lbl_fn_8038C928_00000244:
    lfs f5, 0x814(r31)
    addi r3, r1, 0x74
    lfs f0, 0x820(r31)
    lfs f4, 0x80c(r31)
    lfs f3, 0x818(r31)
    fsubs f5, f5, f0
    lfs f0, lbl_808858E8
    fsubs f3, f4, f3
    stfs f5, 0x7c(r1)
    stfs f3, 0x74(r1)
    stfs f0, 0x78(r1)
    bl fn_805F9920
    lfs f0, lbl_808858E8
    fcmpo cr0, f1, f0
    ble lbl_fn_8038C928_0000028C
    addi r3, r1, 0x74
    mr r4, r3
    bl fn_805F98D0
lbl_fn_8038C928_0000028C:
    addi r3, r1, 0x80
    addi r4, r1, 0x74
    bl fn_805F9990
    lfs f0, lbl_80885A84
    fcmpo cr0, f1, f0
    bge lbl_fn_8038C928_000002A8
    lfs f31, lbl_808858F8
lbl_fn_8038C928_000002A8:
    lfs f0, lbl_808858F8
    lwz r3, 0x808(r31)
    fcmpo cr0, f31, f0
    addi r0, r3, 0x1
    stw r0, 0x808(r31)
    cror eq, gt, eq
    bne lbl_fn_8038C928_000002E0
    lwz r4, 0x7fc(r31)
    li r3, 0x0
    li r0, 0x6
    stw r4, 0x800(r31)
    stw r3, 0x838(r31)
    stw r0, 0x83c(r31)
    stw r3, 0x808(r31)
lbl_fn_8038C928_000002E0:
    lfs f3, 0x9c(r1)
    addi r4, r1, 0x44
    lfs f5, 0x810(r31)
    addi r5, r1, 0x38
    lfs f0, 0xa0(r1)
    mr r3, r31
    fsubs f27, f3, f5
    lfs f4, 0x814(r31)
    lfs f3, 0x80c(r31)
    fsubs f26, f0, f4
    lfs f0, 0x98(r1)
    fmuls f13, f27, f31
    fsubs f28, f0, f3
    lfs f7, 0x81c(r31)
    fmuls f29, f26, f31
    fadds f10, f13, f5
    lfs f5, 0x90(r1)
    fmuls f12, f28, f31
    fsubs f23, f5, f7
    lfs f0, 0x94(r1)
    lfs f8, 0x820(r31)
    fadds f11, f29, f4
    lfs f6, 0x8c(r1)
    fsubs f0, f0, f8
    lfs f5, 0x818(r31)
    fadds f9, f12, f3
    lfs f4, 0x830(r31)
    fmuls f25, f0, f31
    stfs f9, 0x44(r1)
    fsubs f24, f6, f5
    fsubs f3, f30, f4
    stfs f10, 0x48(r1)
    fmuls f30, f23, f31
    fmuls f9, f24, f31
    psq_l f1, 0x0(r4), 0, 0
    fmadds f4, f31, f3, f4
    fadds f8, f25, f8
    psq_st f1, 0x8(r31), 0, 0
    fadds f6, f30, f7
    fadds f3, f9, f5
    stfs f28, 0x2c(r1)
    fmr f2, f11
    stfs f6, 0x3c(r1)
    stfs f3, 0x38(r1)
    stfs f2, 0x10(r31)
    fmr f2, f8
    psq_l f1, 0x0(r5), 0, 0
    stfs f27, 0x30(r1)
    stfs f26, 0x34(r1)
    stfs f12, 0x20(r1)
    stfs f13, 0x24(r1)
    stfs f29, 0x28(r1)
    stfs f11, 0x4c(r1)
    stfs f24, 0x14(r1)
    stfs f23, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f9, 0x8(r1)
    stfs f30, 0xc(r1)
    stfs f25, 0x10(r1)
    stfs f8, 0x40(r1)
    psq_st f1, 0x14(r31), 0, 0
    stfs f2, 0x1c(r31)
    stfs f4, 0x50(r31)
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
    lwz r0, 0x154(r1)
    psq_l f31, 0x148(r1), 0, 0
    lfd f31, 0x140(r1)
    psq_l f30, 0x138(r1), 0, 0
    lfd f30, 0x130(r1)
    psq_l f29, 0x128(r1), 0, 0
    lfd f29, 0x120(r1)
    psq_l f28, 0x118(r1), 0, 0
    lfd f28, 0x110(r1)
    psq_l f27, 0x108(r1), 0, 0
    lfd f27, 0x100(r1)
    psq_l f26, 0xf8(r1), 0, 0
    lfd f26, 0xf0(r1)
    psq_l f25, 0xe8(r1), 0, 0
    lfd f25, 0xe0(r1)
    psq_l f24, 0xd8(r1), 0, 0
    lfd f24, 0xd0(r1)
    psq_l f23, 0xc8(r1), 0, 0
    lfd f23, 0xc0(r1)
    lwz r31, 0xbc(r1)
    mtlr r0
    addi r1, r1, 0x150
    blr
}

asm void fn_8038CD94(void)
{
    nofralloc
    stwu r1, -0x1c0(r1)
    mflr r0
    stw r0, 0x1c4(r1)
    stfd f31, 0x1b0(r1)
    psq_st f31, 0x1b8(r1), 0, 0
    stfd f30, 0x1a0(r1)
    psq_st f30, 0x1a8(r1), 0, 0
    stfd f29, 0x190(r1)
    psq_st f29, 0x198(r1), 0, 0
    stfd f28, 0x180(r1)
    psq_st f28, 0x188(r1), 0, 0
    stfd f27, 0x170(r1)
    psq_st f27, 0x178(r1), 0, 0
    stfd f26, 0x160(r1)
    psq_st f26, 0x168(r1), 0, 0
    stfd f25, 0x150(r1)
    psq_st f25, 0x158(r1), 0, 0
    stfd f24, 0x140(r1)
    psq_st f24, 0x148(r1), 0, 0
    stfd f23, 0x130(r1)
    psq_st f23, 0x138(r1), 0, 0
    stw r31, 0x12c(r1)
    mr r31, r4
    stw r30, 0x128(r1)
    mr r30, r3
    lwz r0, 0x808(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8038CD94_0000050C
    lfs f2, 0x10(r3)
    addi r4, r3, 0x80c
    psq_l f1, 0x8(r3), 0, 0
    addi r5, r3, 0x818
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x14(r3), 0, 0
    stfs f2, 0x814(r3)
    lfs f2, 0x1c(r3)
    lfs f0, 0x50(r3)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x820(r3)
    stfs f0, 0x830(r3)
lbl_fn_8038CD94_0000050C:
    lfs f4, 0x79c(r3)
    li r4, 0x79
    lfs f3, lbl_80885920
    lfs f0, lbl_808858EC
    fmuls f31, f3, f4
    lfs f5, 0x788(r3)
    lfs f4, 0x784(r3)
    lfs f3, 0x780(r3)
    addi r3, r1, 0xf8
    fadds f1, f0, f31
    stfs f3, 0x8c(r1)
    stfs f4, 0x90(r1)
    stfs f5, 0x94(r1)
    bl fn_805F8E70
    addi r4, r1, 0x8c
    addi r3, r1, 0xf8
    mr r5, r4
    bl fn_805F93C0
    mr r4, r31
    addi r3, r1, 0x5c
    bl fn_80178088
    lfs f3, lbl_808858E8
    addi r3, r1, 0xc8
    lfs f0, lbl_808858F8
    li r4, 0x78
    stfs f3, 0x74(r1)
    lfs f4, 0x64(r1)
    stfs f3, 0x78(r1)
    lfs f3, 0x94(r1)
    stfs f0, 0x7c(r1)
    fadds f6, f4, f3
    lfs f5, 0x60(r1)
    lfs f0, 0x77c(r30)
    lfs f4, 0x90(r1)
    fneg f1, f0
    lfs f3, 0x5c(r1)
    lfs f0, 0x8c(r1)
    fadds f4, f5, f4
    stfs f6, 0x88(r1)
    fadds f0, f3, f0
    stfs f4, 0x84(r1)
    stfs f0, 0x80(r1)
    bl fn_805F8E70
    addi r4, r1, 0x74
    addi r3, r1, 0xc8
    mr r5, r4
    bl fn_805F93C0
    lfs f0, lbl_808858EC
    addi r3, r1, 0x98
    li r4, 0x79
    fadds f1, f0, f31
    bl fn_805F8E70
    addi r4, r1, 0x74
    addi r3, r1, 0x98
    mr r5, r4
    bl fn_805F93C0
    lfs f5, 0x774(r30)
    lfs f4, 0x7c(r1)
    lfs f3, 0x78(r1)
    fmuls f6, f4, f5
    lfs f4, 0x88(r1)
    fmuls f7, f3, f5
    lfs f0, 0x74(r1)
    lfs f3, 0x84(r1)
    fmuls f5, f0, f5
    lfs f0, 0x80(r1)
    fadds f4, f4, f6
    lwz r0, 0x424(r30)
    fadds f3, f3, f7
    fadds f0, f0, f5
    cmpwi r0, 0x0
    stfs f5, 0x50(r1)
    lfs f31, lbl_808858F8
    stfs f7, 0x54(r1)
    stfs f6, 0x58(r1)
    stfs f0, 0x68(r1)
    stfs f3, 0x6c(r1)
    stfs f4, 0x70(r1)
    beq lbl_fn_8038CD94_000006B4
    lfs f3, 0x428(r30)
    lfs f0, 0x42c(r30)
    lfs f5, lbl_808858E8
    fsubs f0, f3, f0
    stfs f0, 0x428(r30)
    fcmpo cr0, f5, f0
    ble lbl_fn_8038CD94_00000668
    b lbl_fn_8038CD94_0000066C
lbl_fn_8038CD94_00000668:
    fmr f5, f0
lbl_fn_8038CD94_0000066C:
    frsp f3, f5
    lfs f4, lbl_808858F8
    lfs f0, lbl_808858EC
    stfs f5, 0x428(r30)
    fsubs f3, f4, f3
    fmuls f1, f0, f3
    bl fn_8068A850
    frsp f5, f1
    lfs f0, lbl_808858F8
    lfs f4, lbl_808859E4
    lfs f3, 0x428(r30)
    fsubs f5, f0, f5
    lfs f0, 0x42c(r30)
    fcmpo cr0, f3, f0
    fmuls f31, f5, f4
    bge lbl_fn_8038CD94_000006B4
    li r0, 0x0
    stw r0, 0x424(r30)
lbl_fn_8038CD94_000006B4:
    lfs f0, 0x70(r1)
    addi r4, r1, 0x44
    lfs f5, 0x814(r30)
    addi r5, r1, 0x38
    lfs f4, 0x6c(r1)
    mr r3, r30
    fsubs f28, f0, f5
    lfs f3, 0x810(r30)
    lfs f0, 0x68(r1)
    fsubs f29, f4, f3
    lfs f8, 0x80c(r30)
    fmuls f13, f28, f31
    fsubs f30, f0, f8
    lfs f0, 0x88(r1)
    fmuls f12, f29, f31
    fadds f10, f13, f5
    lfs f7, 0x820(r30)
    lfs f4, 0x84(r1)
    fadds f9, f12, f3
    lfs f6, 0x81c(r30)
    fsubs f0, f0, f7
    fsubs f23, f4, f6
    lfs f3, 0x80(r1)
    fmuls f11, f30, f31
    fmuls f25, f0, f31
    lfs f5, 0x818(r30)
    fmuls f26, f23, f31
    fsubs f24, f3, f5
    lfs f3, 0x778(r30)
    lfs f4, 0x830(r30)
    fadds f8, f11, f8
    stfs f9, 0x48(r1)
    fmuls f27, f24, f31
    fadds f7, f25, f7
    stfs f8, 0x44(r1)
    fadds f6, f26, f6
    fsubs f3, f3, f4
    psq_l f1, 0x0(r4), 0, 0
    fadds f5, f27, f5
    fmr f2, f10
    stfs f6, 0x3c(r1)
    fmadds f3, f31, f3, f4
    stfs f2, 0x10(r30)
    fmr f2, f7
    stfs f5, 0x38(r1)
    psq_st f1, 0x8(r30), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    stfs f30, 0x2c(r1)
    stfs f29, 0x30(r1)
    stfs f28, 0x34(r1)
    stfs f11, 0x20(r1)
    stfs f12, 0x24(r1)
    stfs f13, 0x28(r1)
    stfs f10, 0x4c(r1)
    stfs f24, 0x14(r1)
    stfs f23, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f27, 0x8(r1)
    stfs f26, 0xc(r1)
    stfs f25, 0x10(r1)
    stfs f7, 0x40(r1)
    psq_st f1, 0x14(r30), 0, 0
    stfs f2, 0x1c(r30)
    stfs f3, 0x50(r30)
    bl fn_8004B378
    mr r4, r30
    addi r3, r30, 0x1f4
    bl fn_80392A04
    mr r3, r30
    bl fn_80392510
    mr r3, r30
    bl fn_80392FE8
    mr r3, r30
    bl fn_803920C8
    mr r3, r30
    bl fn_803928C0
    addi r3, r30, 0x1f4
    bl fn_8004B378
    lwz r3, lbl_8087EFB4
    addi r4, r30, 0x1f4
    bl fn_80116BD4
    lfs f0, lbl_808858F8
    lwz r3, 0x808(r30)
    fcmpo cr0, f31, f0
    addi r0, r3, 0x1
    stw r0, 0x808(r30)
    cror eq, gt, eq
    bne lbl_fn_8038CD94_00000830
    lwz r4, 0x7fc(r30)
    li r3, 0x0
    li r0, 0x6
    stw r4, 0x800(r30)
    stw r3, 0x838(r30)
    stw r0, 0x83c(r30)
    stw r3, 0x808(r30)
lbl_fn_8038CD94_00000830:
    li r0, 0x0
    stw r0, 0x834(r30)
    psq_l f31, 0x1b8(r1), 0, 0
    lfd f31, 0x1b0(r1)
    psq_l f30, 0x1a8(r1), 0, 0
    lfd f30, 0x1a0(r1)
    psq_l f29, 0x198(r1), 0, 0
    lfd f29, 0x190(r1)
    psq_l f28, 0x188(r1), 0, 0
    lfd f28, 0x180(r1)
    psq_l f27, 0x178(r1), 0, 0
    lfd f27, 0x170(r1)
    psq_l f26, 0x168(r1), 0, 0
    lfd f26, 0x160(r1)
    psq_l f25, 0x158(r1), 0, 0
    lfd f25, 0x150(r1)
    psq_l f24, 0x148(r1), 0, 0
    lfd f24, 0x140(r1)
    psq_l f23, 0x138(r1), 0, 0
    lfd f23, 0x130(r1)
    lwz r31, 0x12c(r1)
    lwz r30, 0x128(r1)
    lwz r0, 0x1c4(r1)
    mtlr r0
    addi r1, r1, 0x1c0
    blr
}

asm void fn_8038D1C0(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    addi r11, r1, 0x110
    bl _savegpr_26
    lwz r0, 0x808(r3)
    mr r31, r3
    mr r26, r4
    cmpwi r0, 0x0
    bne lbl_fn_8038D1C0_000008F0
    lfs f2, 0x10(r3)
    addi r5, r3, 0x80c
    psq_l f1, 0x8(r3), 0, 0
    addi r6, r3, 0x818
    psq_st f1, 0x0(r5), 0, 0
    psq_l f1, 0x14(r3), 0, 0
    stfs f2, 0x814(r3)
    lfs f2, 0x1c(r3)
    lfs f0, 0x50(r3)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x820(r3)
    stfs f0, 0x830(r3)
lbl_fn_8038D1C0_000008F0:
    lfs f2, 0x530(r4)
    addi r28, r1, 0x74
    psq_l f1, 0x528(r4), 0, 0
    addi r3, r1, 0xb0
    lfs f3, lbl_808858E8
    lfs f0, lbl_80885914
    stfs f3, 0x68(r1)
    stfs f3, 0x6c(r1)
    stfs f0, 0x70(r1)
    lfs f0, 0x538(r4)
    li r4, 0x79
    psq_st f1, 0x0(r28), 0, 0
    fmr f1, f0
    stfs f2, 0x7c(r1)
    bl fn_805F8E70
    addi r4, r1, 0x68
    addi r3, r1, 0xb0
    mr r5, r4
    bl fn_805F93C0
    lwz r0, 0x808(r31)
    lis r30, 0x4330
    lis r29, lbl_8074E008@ha
    stw r30, 0xe0(r1)
    xoris r0, r0, 0x8000
    lfd f4, lbl_8074E008@l(r29)
    stw r0, 0xe4(r1)
    addi r5, r1, 0x44
    lfs f0, lbl_80885910
    addi r27, r1, 0x5c
    lfd f3, 0xe0(r1)
    addi r3, r1, 0x80
    lfs f6, 0x74(r1)
    li r4, 0x79
    fsubs f3, f3, f4
    lfs f5, 0x68(r1)
    lfs f8, 0x78(r1)
    fadds f9, f6, f5
    lfs f4, 0x6c(r1)
    fdivs f10, f3, f0
    lfs f3, 0x7c(r1)
    lfs f0, 0x70(r1)
    lfs f5, 0x818(r31)
    stfs f9, 0x74(r1)
    lfs f7, 0x820(r31)
    fadds f8, f8, f4
    lfs f6, 0x81c(r31)
    fadds f0, f3, f0
    lfs f4, lbl_808858E8
    fsubs f9, f9, f5
    stfs f8, 0x78(r1)
    fsubs f13, f0, f7
    stfs f9, 0x2c(r1)
    fsubs f12, f8, f6
    lfs f3, lbl_80885A70
    fmuls f8, f9, f10
    lfs f0, lbl_80885A74
    fmuls f11, f13, f10
    stfs f12, 0x30(r1)
    fmuls f9, f12, f10
    fadds f5, f8, f5
    stfs f13, 0x34(r1)
    fadds f7, f11, f7
    fadds f6, f9, f6
    stfs f5, 0x44(r1)
    stfs f6, 0x48(r1)
    fmr f2, f7
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    psq_l f1, 0x528(r26), 0, 0
    stfs f2, 0x7c(r1)
    lfs f2, 0x530(r26)
    psq_st f1, 0x0(r27), 0, 0
    stfs f4, 0x50(r1)
    stfs f3, 0x54(r1)
    stfs f0, 0x58(r1)
    lfs f1, 0x538(r26)
    stfs f8, 0x20(r1)
    stfs f9, 0x24(r1)
    stfs f11, 0x28(r1)
    stfs f7, 0x4c(r1)
    stfs f2, 0x64(r1)
    bl fn_805F8E70
    addi r4, r1, 0x50
    addi r3, r1, 0x80
    mr r5, r4
    bl fn_805F93C0
    lwz r0, 0x808(r31)
    addi r4, r1, 0x38
    stw r30, 0xe8(r1)
    mr r3, r31
    xoris r0, r0, 0x8000
    lfd f4, lbl_8074E008@l(r29)
    stw r0, 0xec(r1)
    lfs f0, lbl_80885910
    lfd f3, 0xe8(r1)
    lfs f5, 0x64(r1)
    fsubs f3, f3, f4
    lfs f4, 0x58(r1)
    lfs f9, 0x5c(r1)
    fadds f5, f5, f4
    lfs f8, 0x50(r1)
    fdivs f10, f3, f0
    lfs f4, 0x814(r31)
    lfs f7, 0x60(r1)
    lfs f6, 0x54(r1)
    lfs f3, 0x810(r31)
    lfs f0, 0x80c(r31)
    fadds f8, f9, f8
    fadds f6, f7, f6
    fsubs f11, f5, f4
    stfs f8, 0x5c(r1)
    fsubs f8, f8, f0
    fsubs f9, f6, f3
    stfs f6, 0x60(r1)
    fmuls f7, f11, f10
    fmuls f5, f8, f10
    stfs f8, 0x14(r1)
    fmuls f6, f9, f10
    fadds f4, f7, f4
    stfs f9, 0x18(r1)
    fadds f0, f5, f0
    fadds f3, f6, f3
    stfs f11, 0x1c(r1)
    fmr f2, f4
    stfs f0, 0x38(r1)
    stfs f3, 0x3c(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0x64(r1)
    frsp f2, f2
    stfs f2, 0x10(r31)
    lfs f2, 0x7c(r1)
    psq_st f1, 0x0(r27), 0, 0
    psq_st f1, 0x8(r31), 0, 0
    psq_l f1, 0x0(r28), 0, 0
    stfs f5, 0x8(r1)
    stfs f6, 0xc(r1)
    stfs f7, 0x10(r1)
    stfs f4, 0x40(r1)
    psq_st f1, 0x14(r31), 0, 0
    stfs f2, 0x1c(r31)
    bl fn_8004B378
    mr r4, r31
    addi r3, r31, 0x1f4
    bl fn_80392A04
    mr r3, r31
    bl fn_803918EC
    mr r3, r31
    bl fn_803920C8
    mr r3, r31
    bl fn_803928C0
    addi r3, r31, 0x1f4
    bl fn_8004B378
    lwz r3, lbl_8087EFB4
    addi r4, r31, 0x1f4
    bl fn_80116BD4
    lwz r3, 0x808(r31)
    addi r0, r3, 0x1
    stw r0, 0x808(r31)
    cmpwi r0, 0x1e
    ble lbl_fn_8038D1C0_00000B8C
    lwz r4, 0x7fc(r31)
    li r3, 0x0
    li r0, 0x6
    stw r4, 0x800(r31)
    stw r3, 0x838(r31)
    stw r0, 0x83c(r31)
    stw r3, 0x808(r31)
lbl_fn_8038D1C0_00000B8C:
    li r0, 0x0
    stw r0, 0x834(r31)
    addi r11, r1, 0x110
    bl _restgpr_26
    lwz r0, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_8038D4D4(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    stfd f31, 0x120(r1)
    psq_st f31, 0x128(r1), 0, 0
    stfd f30, 0x110(r1)
    psq_st f30, 0x118(r1), 0, 0
    stfd f29, 0x100(r1)
    psq_st f29, 0x108(r1), 0, 0
    stfd f28, 0xf0(r1)
    psq_st f28, 0xf8(r1), 0, 0
    stfd f27, 0xe0(r1)
    psq_st f27, 0xe8(r1), 0, 0
    stfd f26, 0xd0(r1)
    psq_st f26, 0xd8(r1), 0, 0
    stw r31, 0xcc(r1)
    mr r31, r3
    stw r30, 0xc8(r1)
    stw r29, 0xc4(r1)
    stw r28, 0xc0(r1)
    lwz r0, 0x808(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8038D4D4_00000C38
    lfs f2, 0x10(r3)
    addi r5, r3, 0x80c
    psq_l f1, 0x8(r3), 0, 0
    addi r6, r3, 0x818
    psq_st f1, 0x0(r5), 0, 0
    psq_l f1, 0x14(r3), 0, 0
    stfs f2, 0x814(r3)
    lfs f2, 0x1c(r3)
    lfs f0, 0x50(r3)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x820(r3)
    stfs f0, 0x830(r3)
lbl_fn_8038D4D4_00000C38:
    lfs f3, lbl_808858E8
    addi r28, r1, 0xa4
    psq_l f1, 0x528(r4), 0, 0
    addi r3, r1, 0x74
    lfs f2, 0x530(r4)
    lfs f0, lbl_80885A78
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0xac(r1)
    stfs f3, 0x68(r1)
    stfs f0, 0x6c(r1)
    stfs f3, 0x70(r1)
    bl fn_80178088
    lwz r0, 0x808(r31)
    lis r30, 0x4330
    lis r29, lbl_8074E008@ha
    addi r3, r1, 0x44
    xoris r0, r0, 0x8000
    stw r0, 0xb4(r1)
    lfd f4, lbl_8074E008@l(r29)
    addi r5, r1, 0x5c
    stw r30, 0xb0(r1)
    addi r6, r1, 0x98
    lfs f3, lbl_80885914
    mr r4, r3
    lfd f0, 0xb0(r1)
    lfs f8, 0xac(r1)
    fsubs f6, f0, f4
    lfs f5, 0x820(r31)
    lfs f7, 0xa8(r1)
    lfs f4, 0x81c(r31)
    fsubs f0, f8, f5
    fdivs f30, f6, f3
    lfs f6, 0xa4(r1)
    lfs f3, 0x818(r31)
    lfs f31, 0x7c(r1)
    lfs f13, 0x70(r1)
    lfs f12, 0x78(r1)
    fsubs f26, f7, f4
    lfs f11, 0x6c(r1)
    fsubs f27, f6, f3
    lfs f10, 0x74(r1)
    fmuls f28, f0, f30
    lfs f9, 0x68(r1)
    fmuls f29, f26, f30
    stfs f27, 0x2c(r1)
    fadds f11, f12, f11
    fadds f12, f28, f5
    stfs f26, 0x30(r1)
    fadds f9, f10, f9
    fmuls f30, f27, f30
    stfs f11, 0x84(r1)
    fadds f13, f31, f13
    fadds f4, f29, f4
    stfs f9, 0x80(r1)
    fadds f10, f30, f3
    fsubs f3, f8, f13
    stfs f4, 0x60(r1)
    fsubs f4, f7, f11
    fsubs f5, f6, f9
    stfs f10, 0x5c(r1)
    fmr f2, f12
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0xac(r1)
    fmr f2, f3
    stfs f5, 0x98(r1)
    stfs f4, 0x9c(r1)
    psq_st f1, 0x0(r28), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f13, 0x88(r1)
    stfs f3, 0xa0(r1)
    stfs f0, 0x34(r1)
    stfs f30, 0x20(r1)
    stfs f29, 0x24(r1)
    stfs f28, 0x28(r1)
    stfs f12, 0x64(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x4c(r1)
    bl fn_805F98D0
    lwz r0, 0x808(r31)
    addi r5, r1, 0x38
    stw r30, 0xb8(r1)
    addi r4, r1, 0x8c
    xoris r0, r0, 0x8000
    lfd f4, lbl_8074E008@l(r29)
    stw r0, 0xbc(r1)
    mr r3, r31
    lfs f0, lbl_80885914
    lfd f3, 0xb8(r1)
    lfs f5, 0x4c(r1)
    fsubs f3, f3, f4
    lfs f10, lbl_80885988
    lfs f9, 0x48(r1)
    fmuls f11, f5, f10
    lfs f8, 0x44(r1)
    fdivs f12, f3, f0
    lfs f7, 0xac(r1)
    lfs f6, 0xa8(r1)
    lfs f5, 0xa4(r1)
    lfs f4, 0x814(r31)
    stfs f11, 0x58(r1)
    fmuls f9, f9, f10
    lfs f3, 0x810(r31)
    fmuls f8, f8, f10
    lfs f0, 0x80c(r31)
    fadds f7, f7, f11
    stfs f9, 0x54(r1)
    fadds f6, f6, f9
    stfs f8, 0x50(r1)
    fadds f5, f5, f8
    fsubs f11, f7, f4
    stfs f6, 0x90(r1)
    fsubs f10, f6, f3
    fsubs f8, f5, f0
    stfs f5, 0x8c(r1)
    fmuls f7, f11, f12
    fmuls f6, f10, f12
    stfs f8, 0x14(r1)
    fmuls f5, f8, f12
    fadds f4, f7, f4
    stfs f10, 0x18(r1)
    fadds f3, f6, f3
    fadds f0, f5, f0
    stfs f11, 0x1c(r1)
    fmr f2, f4
    stfs f3, 0x3c(r1)
    stfs f0, 0x38(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0x94(r1)
    frsp f2, f2
    stfs f2, 0x10(r31)
    lfs f2, 0xac(r1)
    psq_st f1, 0x0(r4), 0, 0
    psq_st f1, 0x8(r31), 0, 0
    psq_l f1, 0x0(r28), 0, 0
    stfs f5, 0x8(r1)
    stfs f6, 0xc(r1)
    stfs f7, 0x10(r1)
    stfs f4, 0x40(r1)
    psq_st f1, 0x14(r31), 0, 0
    stfs f2, 0x1c(r31)
    bl fn_8004B378
    mr r4, r31
    addi r3, r31, 0x1f4
    bl fn_80392A04
    mr r3, r31
    bl fn_803918EC
    mr r3, r31
    bl fn_803920C8
    mr r3, r31
    bl fn_803928C0
    addi r3, r31, 0x1f4
    bl fn_8004B378
    lwz r3, lbl_8087EFB4
    addi r4, r31, 0x1f4
    bl fn_80116BD4
    lwz r3, 0x808(r31)
    addi r0, r3, 0x1
    stw r0, 0x808(r31)
    cmpwi r0, 0xa
    ble lbl_fn_8038D4D4_00000ED4
    lwz r4, 0x7fc(r31)
    li r3, 0x0
    li r0, 0x6
    stw r4, 0x800(r31)
    stw r3, 0x838(r31)
    stw r0, 0x83c(r31)
    stw r3, 0x808(r31)
lbl_fn_8038D4D4_00000ED4:
    li r0, 0x0
    stw r0, 0x834(r31)
    psq_l f31, 0x128(r1), 0, 0
    lfd f31, 0x120(r1)
    psq_l f30, 0x118(r1), 0, 0
    lfd f30, 0x110(r1)
    psq_l f29, 0x108(r1), 0, 0
    lfd f29, 0x100(r1)
    psq_l f28, 0xf8(r1), 0, 0
    lfd f28, 0xf0(r1)
    psq_l f27, 0xe8(r1), 0, 0
    lfd f27, 0xe0(r1)
    psq_l f26, 0xd8(r1), 0, 0
    lfd f26, 0xd0(r1)
    lwz r31, 0xcc(r1)
    lwz r30, 0xc8(r1)
    lwz r29, 0xc4(r1)
    lwz r28, 0xc0(r1)
    lwz r0, 0x134(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

asm void fn_8038D854(void)
{
    nofralloc
    stwu r1, -0x140(r1)
    mflr r0
    stw r0, 0x144(r1)
    stfd f31, 0x130(r1)
    psq_st f31, 0x138(r1), 0, 0
    stfd f30, 0x120(r1)
    psq_st f30, 0x128(r1), 0, 0
    stfd f29, 0x110(r1)
    psq_st f29, 0x118(r1), 0, 0
    stfd f28, 0x100(r1)
    psq_st f28, 0x108(r1), 0, 0
    stfd f27, 0xf0(r1)
    psq_st f27, 0xf8(r1), 0, 0
    stw r31, 0xec(r1)
    mr r31, r3
    stw r30, 0xe8(r1)
    stw r29, 0xe4(r1)
    stw r28, 0xe0(r1)
    mr r28, r4
    lwz r0, 0x808(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8038D854_00000FF8
    addi r5, r3, 0x80c
    psq_l f1, 0x8(r3), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    addi r6, r3, 0x818
    psq_l f1, 0x14(r3), 0, 0
    addi r7, r1, 0x68
    psq_st f1, 0x0(r6), 0, 0
    addi r5, r3, 0x824
    lfs f2, 0x10(r3)
    stfs f2, 0x814(r3)
    lfs f2, 0x1c(r3)
    lfs f4, 0x814(r3)
    lfs f3, 0x81c(r3)
    lfs f0, 0x810(r3)
    fsubs f4, f2, f4
    stfs f2, 0x820(r3)
    fsubs f5, f3, f0
    lfs f3, 0x818(r3)
    lfs f0, 0x80c(r3)
    fmr f2, f4
    lfs f6, 0x50(r3)
    fsubs f0, f3, f0
    stfs f5, 0x6c(r1)
    stfs f0, 0x68(r1)
    psq_l f1, 0x0(r7), 0, 0
    stfs f4, 0x70(r1)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x82c(r3)
    stfs f6, 0x830(r3)
lbl_fn_8038D854_00000FF8:
    addi r30, r1, 0x8c
    psq_l f1, 0x528(r4), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    addi r29, r1, 0x5c
    lfs f2, 0x530(r4)
    addi r5, r1, 0x50
    lfs f4, lbl_80885934
    mr r3, r29
    lfs f3, lbl_808859E0
    mr r4, r29
    lfs f0, lbl_808858F8
    stfs f2, 0x94(r1)
    fmr f2, f0
    lfs f6, 0x90(r1)
    lfs f5, lbl_80885A7C
    stfs f4, 0x50(r1)
    fadds f4, f6, f5
    stfs f3, 0x54(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f4, 0x90(r1)
    stfs f0, 0x58(r1)
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x64(r1)
    bl fn_805F98D0
    lfs f1, 0x538(r28)
    addi r3, r1, 0x98
    li r4, 0x79
    bl fn_805F8E70
    addi r4, r1, 0x80
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x64(r1)
    mr r5, r4
    psq_st f1, 0x0(r4), 0, 0
    addi r3, r1, 0x98
    stfs f2, 0x88(r1)
    bl fn_805F93C0
    lfs f4, 0x80(r1)
    lis r0, 0x4330
    lfs f6, lbl_80885910
    lis r3, lbl_8074E008@ha
    lfs f0, 0x88(r1)
    addi r5, r1, 0x44
    fmuls f5, f4, f6
    lfs f3, 0x84(r1)
    fmuls f0, f0, f6
    lfs f11, 0x8c(r1)
    fmuls f4, f3, f6
    stfs f5, 0x80(r1)
    stfs f4, 0x84(r1)
    fsubs f31, f11, f5
    lfs f3, 0x94(r1)
    addi r7, r1, 0x38
    stfs f0, 0x88(r1)
    addi r6, r1, 0x74
    lfd f10, lbl_8074E008@l(r3)
    lwz r3, 0x808(r31)
    fsubs f6, f3, f0
    stw r0, 0xc8(r1)
    xoris r4, r3, 0x8000
    lfs f9, lbl_80885A98
    stw r4, 0xcc(r1)
    mr r3, r31
    lfs f12, 0x90(r1)
    lfd f0, 0xc8(r1)
    stw r4, 0xd4(r1)
    fsubs f13, f12, f4
    fsubs f0, f0, f10
    lfs f8, 0x820(r31)
    stw r0, 0xd0(r1)
    fsubs f29, f3, f8
    lfs f4, 0x814(r31)
    lfd f5, 0xd0(r1)
    fdivs f30, f0, f9
    lfs f7, 0x81c(r31)
    stfs f29, 0x34(r1)
    lfs f3, 0x810(r31)
    lfs f0, 0x80c(r31)
    stfs f13, 0x78(r1)
    fsubs f5, f5, f10
    stfs f31, 0x74(r1)
    fsubs f27, f6, f4
    lfs f6, 0x818(r31)
    fmuls f29, f29, f30
    fsubs f28, f11, f6
    fsubs f10, f13, f3
    stfs f29, 0x28(r1)
    fadds f2, f29, f8
    fdivs f5, f5, f9
    stfs f10, 0x18(r1)
    stfs f2, 0x4c(r1)
    stfs f2, 0x94(r1)
    stfs f28, 0x2c(r1)
    stfs f27, 0x1c(r1)
    fsubs f13, f31, f0
    fmuls f10, f10, f5
    fsubs f12, f12, f7
    stfs f13, 0x14(r1)
    fmuls f9, f13, f5
    fmuls f8, f27, f5
    stfs f12, 0x30(r1)
    fmuls f12, f12, f30
    fmuls f11, f28, f30
    stfs f8, 0x10(r1)
    fadds f8, f8, f4
    fadds f5, f12, f7
    stfs f11, 0x20(r1)
    fadds f4, f11, f6
    fmr f2, f8
    stfs f5, 0x48(r1)
    fadds f3, f10, f3
    stfs f4, 0x44(r1)
    fadds f0, f9, f0
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0x7c(r1)
    frsp f2, f2
    stfs f2, 0x10(r31)
    lfs f2, 0x94(r1)
    stfs f0, 0x38(r1)
    stfs f3, 0x3c(r1)
    psq_st f1, 0x0(r30), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    psq_st f1, 0x8(r31), 0, 0
    psq_l f1, 0x0(r30), 0, 0
    stfs f12, 0x24(r1)
    stfs f9, 0x8(r1)
    stfs f10, 0xc(r1)
    stfs f8, 0x40(r1)
    psq_st f1, 0x14(r31), 0, 0
    stfs f2, 0x1c(r31)
    bl fn_8004B378
    mr r4, r31
    addi r3, r31, 0x1f4
    bl fn_80392A04
    mr r3, r31
    bl fn_803918EC
    mr r3, r31
    bl fn_803920C8
    mr r3, r31
    bl fn_803928C0
    addi r3, r31, 0x1f4
    bl fn_8004B378
    lwz r3, lbl_8087EFB4
    addi r4, r31, 0x1f4
    bl fn_80116BD4
    lwz r3, 0x808(r31)
    addi r0, r3, 0x1
    stw r0, 0x808(r31)
    cmpwi r0, 0x17
    ble lbl_fn_8038D854_0000126C
    lwz r4, 0x7fc(r31)
    li r3, 0x0
    li r0, 0x6
    stw r4, 0x800(r31)
    stw r3, 0x838(r31)
    stw r0, 0x83c(r31)
    stw r3, 0x808(r31)
lbl_fn_8038D854_0000126C:
    li r0, 0x0
    stw r0, 0x834(r31)
    psq_l f31, 0x138(r1), 0, 0
    lfd f31, 0x130(r1)
    psq_l f30, 0x128(r1), 0, 0
    lfd f30, 0x120(r1)
    psq_l f29, 0x118(r1), 0, 0
    lfd f29, 0x110(r1)
    psq_l f28, 0x108(r1), 0, 0
    lfd f28, 0x100(r1)
    psq_l f27, 0xf8(r1), 0, 0
    lfd f27, 0xf0(r1)
    lwz r31, 0xec(r1)
    lwz r30, 0xe8(r1)
    lwz r29, 0xe4(r1)
    lwz r28, 0xe0(r1)
    lwz r0, 0x144(r1)
    mtlr r0
    addi r1, r1, 0x140
    blr
}

asm void fn_8038DBE4(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    mr r31, r3
    stw r30, 0x58(r1)
    stw r29, 0x54(r1)
    mr r29, r4
    lwz r0, 0x808(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8038DBE4_0000135C
    addi r4, r3, 0x80c
    psq_l f1, 0x8(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    addi r5, r3, 0x818
    psq_l f1, 0x14(r3), 0, 0
    addi r6, r1, 0x20
    psq_st f1, 0x0(r5), 0, 0
    addi r4, r3, 0x824
    lfs f2, 0x10(r3)
    stfs f2, 0x814(r3)
    lfs f2, 0x1c(r3)
    lfs f4, 0x814(r3)
    lfs f3, 0x81c(r3)
    lfs f0, 0x810(r3)
    fsubs f4, f2, f4
    stfs f2, 0x820(r3)
    fsubs f5, f3, f0
    lfs f3, 0x818(r3)
    lfs f0, 0x80c(r3)
    fmr f2, f4
    lfs f6, 0x50(r3)
    fsubs f0, f3, f0
    stfs f5, 0x24(r1)
    stfs f0, 0x20(r1)
    psq_l f1, 0x0(r6), 0, 0
    stfs f4, 0x28(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x82c(r3)
    stfs f6, 0x830(r3)
lbl_fn_8038DBE4_0000135C:
    lis r4, lbl_8074E210@ha
    addi r30, r29, 0xb0
    addi r4, r4, lbl_8074E210@l
    li r5, 0x0
    mr r3, r30
    addi r4, r4, 0x1eb
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8038DBE4_00001388
    li r5, 0x0
    b lbl_fn_8038DBE4_00001394
lbl_fn_8038DBE4_00001388:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r30)
    add r5, r3, r0
lbl_fn_8038DBE4_00001394:
    lfs f3, lbl_808858E8
    mr r4, r29
    lfs f4, 0x2c(r5)
    addi r3, r1, 0x14
    lfs f5, 0x1c(r5)
    lfs f6, 0xc(r5)
    lfs f0, lbl_80885944
    stfs f6, 0x38(r1)
    stfs f5, 0x3c(r1)
    stfs f4, 0x40(r1)
    stfs f3, 0x8(r1)
    stfs f0, 0xc(r1)
    stfs f3, 0x10(r1)
    bl fn_80178088
    lfs f3, 0x1c(r1)
    addi r4, r1, 0x2c
    lfs f0, 0x10(r1)
    addi r5, r1, 0x38
    lfs f5, 0x18(r1)
    mr r3, r31
    fadds f6, f3, f0
    lfs f4, 0xc(r1)
    lfs f3, 0x14(r1)
    lfs f0, 0x8(r1)
    fadds f4, f5, f4
    fmr f2, f6
    fadds f0, f3, f0
    stfs f4, 0x30(r1)
    stfs f0, 0x2c(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x8(r31), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0x10(r31)
    lfs f2, 0x40(r1)
    stfs f6, 0x34(r1)
    psq_st f1, 0x14(r31), 0, 0
    stfs f2, 0x1c(r31)
    bl fn_8004B378
    mr r4, r31
    addi r3, r31, 0x1f4
    bl fn_80392A04
    mr r3, r31
    bl fn_803918EC
    mr r3, r31
    bl fn_803920C8
    mr r3, r31
    bl fn_803928C0
    addi r3, r31, 0x1f4
    bl fn_8004B378
    lwz r3, lbl_8087EFB4
    addi r4, r31, 0x1f4
    bl fn_80116BD4
    lwz r3, 0x808(r31)
    addi r0, r3, 0x1
    stw r0, 0x808(r31)
    cmpwi r0, 0x1
    ble lbl_fn_8038DBE4_00001494
    lwz r4, 0x7fc(r31)
    li r3, 0x0
    li r0, 0x6
    stw r4, 0x800(r31)
    stw r3, 0x838(r31)
    stw r0, 0x83c(r31)
    stw r3, 0x808(r31)
lbl_fn_8038DBE4_00001494:
    li r0, 0x0
    stw r0, 0x834(r31)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_8038DDE0(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    addi r31, r1, 0x14
    stw r30, 0x58(r1)
    addi r30, r1, 0x8
    stw r29, 0x54(r1)
    mr r29, r4
    stw r28, 0x50(r1)
    mr r28, r3
    lwz r0, 0x7fc(r3)
    stw r0, 0x800(r3)
    psq_l f1, 0x4fc(r3), 0, 0
    lfs f2, 0x504(r3)
    stfs f2, 0x10(r1)
    psq_st f1, 0x0(r30), 0, 0
    psq_l f1, 0x508(r3), 0, 0
    lfs f2, 0x510(r3)
    stfs f2, 0x1c(r1)
    psq_st f1, 0x0(r31), 0, 0
    lwz r0, 0x518(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8038DDE0_0000159C
    lfs f1, 0x538(r4)
    addi r3, r1, 0x20
    li r4, 0x79
    bl fn_805F8E70
    mr r4, r30
    mr r5, r30
    addi r3, r1, 0x20
    bl fn_805F93C0
    mr r4, r31
    mr r5, r31
    addi r3, r1, 0x20
    bl fn_805F93C0
    lfs f3, 0x8(r1)
    lfs f4, 0x528(r29)
    lfs f6, 0xc(r1)
    fadds f3, f3, f4
    lfs f0, 0x14(r1)
    lfs f5, 0x10(r1)
    stfs f3, 0x8(r1)
    fadds f4, f0, f4
    lfs f3, 0x18(r1)
    lfs f7, 0x52c(r29)
    lfs f0, 0x1c(r1)
    fadds f6, f6, f7
    fadds f3, f3, f7
    stfs f6, 0xc(r1)
    lfs f6, 0x530(r29)
    fadds f5, f5, f6
    stfs f4, 0x14(r1)
    fadds f0, f0, f6
    stfs f5, 0x10(r1)
    stfs f3, 0x18(r1)
    stfs f0, 0x1c(r1)
lbl_fn_8038DDE0_0000159C:
    addi r3, r1, 0x8
    lfs f2, 0x10(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r4, r1, 0x14
    psq_st f1, 0x8(r28), 0, 0
    mr r3, r28
    lfs f0, 0x514(r28)
    stfs f2, 0x10(r28)
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x1c(r1)
    stfs f2, 0x1c(r28)
    psq_st f1, 0x14(r28), 0, 0
    stfs f0, 0x50(r28)
    bl fn_8004B378
    mr r4, r28
    addi r3, r28, 0x1f4
    bl fn_80392A04
    mr r3, r28
    bl fn_80392510
    mr r3, r28
    bl fn_803918EC
    mr r3, r28
    bl fn_803920C8
    mr r3, r28
    bl fn_803928C0
    addi r3, r28, 0x1f4
    bl fn_8004B378
    lwz r3, lbl_8087EFB4
    addi r4, r28, 0x1f4
    bl fn_80116BD4
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    lwz r28, 0x50(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_8038DF5C(void)
{
    nofralloc
    stwu r1, -0xf0(r1)
    mflr r0
    stw r0, 0xf4(r1)
    stfd f31, 0xe0(r1)
    psq_st f31, 0xe8(r1), 0, 0
    stfd f30, 0xd0(r1)
    psq_st f30, 0xd8(r1), 0, 0
    stfd f29, 0xc0(r1)
    psq_st f29, 0xc8(r1), 0, 0
    stfd f28, 0xb0(r1)
    psq_st f28, 0xb8(r1), 0, 0
    stfd f27, 0xa0(r1)
    psq_st f27, 0xa8(r1), 0, 0
    stfd f26, 0x90(r1)
    psq_st f26, 0x98(r1), 0, 0
    stfd f25, 0x80(r1)
    psq_st f25, 0x88(r1), 0, 0
    stfd f24, 0x70(r1)
    psq_st f24, 0x78(r1), 0, 0
    stfd f23, 0x60(r1)
    psq_st f23, 0x68(r1), 0, 0
    stw r31, 0x5c(r1)
    stw r30, 0x58(r1)
    mr r30, r3
    lwz r0, 0x808(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8038DF5C_000016D0
    lfs f2, 0x10(r3)
    addi r5, r3, 0x80c
    psq_l f1, 0x8(r3), 0, 0
    addi r6, r3, 0x818
    psq_st f1, 0x0(r5), 0, 0
    psq_l f1, 0x14(r3), 0, 0
    stfs f2, 0x814(r3)
    lfs f2, 0x1c(r3)
    lfs f0, 0x50(r3)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x820(r3)
    stfs f0, 0x830(r3)
lbl_fn_8038DF5C_000016D0:
    li r31, 0x0
    li r0, 0x1
    stw r31, 0x834(r3)
    stw r0, 0x8f0(r3)
    mr r3, r30
    bl fn_8037F9AC
    lwz r4, 0x808(r30)
    lis r0, 0x4330
    stw r0, 0x50(r1)
    lis r3, lbl_8074E008@ha
    xoris r0, r4, 0x8000
    lfd f5, lbl_8074E008@l(r3)
    stw r0, 0x54(r1)
    lfs f4, lbl_80885910
    lfd f0, 0x50(r1)
    lfs f3, lbl_808858EC
    fsubs f5, f0, f5
    lfs f0, lbl_808859CC
    stw r31, 0x8f0(r30)
    fdivs f4, f5, f4
    fmsubs f1, f3, f4, f0
    bl fn_8068AD58
    frsp f5, f1
    lfs f0, lbl_808858F8
    lfs f4, lbl_808859E4
    addi r4, r1, 0x44
    lfs f3, 0x10(r30)
    addi r5, r1, 0x38
    fadds f6, f0, f5
    lfs f5, 0x814(r30)
    lfs f8, 0x80c(r30)
    mr r3, r30
    fsubs f29, f3, f5
    lfs f0, 0xc(r30)
    fmuls f3, f4, f6
    lfs f4, 0x8(r30)
    lfs f9, 0x810(r30)
    fsubs f31, f4, f8
    lfs f4, 0x18(r30)
    fmuls f13, f29, f3
    fsubs f30, f0, f9
    lfs f6, 0x81c(r30)
    lfs f0, 0x1c(r30)
    fadds f10, f13, f5
    lfs f7, 0x820(r30)
    fsubs f24, f4, f6
    fsubs f0, f0, f7
    lfs f5, 0x14(r30)
    fmuls f12, f30, f3
    fmuls f11, f31, f3
    lfs f4, 0x818(r30)
    fmuls f26, f0, f3
    fsubs f25, f5, f4
    lfs f23, 0x50(r30)
    fmuls f27, f24, f3
    fadds f9, f12, f9
    lfs f5, 0x830(r30)
    fmuls f28, f25, f3
    fadds f8, f11, f8
    stfs f9, 0x48(r1)
    fadds f9, f26, f7
    fadds f7, f27, f6
    stfs f8, 0x44(r1)
    fadds f6, f28, f4
    fsubs f4, f23, f5
    psq_l f1, 0x0(r4), 0, 0
    fmr f2, f10
    stfs f6, 0x38(r1)
    fmadds f3, f3, f4, f5
    stfs f2, 0x10(r30)
    fmr f2, f9
    stfs f7, 0x3c(r1)
    psq_st f1, 0x8(r30), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    stfs f31, 0x2c(r1)
    stfs f30, 0x30(r1)
    stfs f29, 0x34(r1)
    stfs f11, 0x20(r1)
    stfs f12, 0x24(r1)
    stfs f13, 0x28(r1)
    stfs f10, 0x4c(r1)
    stfs f25, 0x14(r1)
    stfs f24, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f28, 0x8(r1)
    stfs f27, 0xc(r1)
    stfs f26, 0x10(r1)
    stfs f9, 0x40(r1)
    psq_st f1, 0x14(r30), 0, 0
    stfs f2, 0x1c(r30)
    stfs f3, 0x50(r30)
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
    lwz r3, 0x808(r30)
    addi r0, r3, 0x1
    stw r0, 0x808(r30)
    cmpwi r0, 0x1e
    blt lbl_fn_8038DF5C_000018B4
    lwz r3, 0x7fc(r30)
    li r0, 0x6
    stw r3, 0x800(r30)
    stw r31, 0x838(r30)
    stw r0, 0x83c(r30)
    stw r31, 0x808(r30)
lbl_fn_8038DF5C_000018B4:
    lwz r0, 0xf4(r1)
    psq_l f31, 0xe8(r1), 0, 0
    lfd f31, 0xe0(r1)
    psq_l f30, 0xd8(r1), 0, 0
    lfd f30, 0xd0(r1)
    psq_l f29, 0xc8(r1), 0, 0
    lfd f29, 0xc0(r1)
    psq_l f28, 0xb8(r1), 0, 0
    lfd f28, 0xb0(r1)
    psq_l f27, 0xa8(r1), 0, 0
    lfd f27, 0xa0(r1)
    psq_l f26, 0x98(r1), 0, 0
    lfd f26, 0x90(r1)
    psq_l f25, 0x88(r1), 0, 0
    lfd f25, 0x80(r1)
    psq_l f24, 0x78(r1), 0, 0
    lfd f24, 0x70(r1)
    psq_l f23, 0x68(r1), 0, 0
    lfd f23, 0x60(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    mtlr r0
    addi r1, r1, 0xf0
    blr
}

asm void fn_8038E23C(void)
{
    nofralloc
    stwu r1, -0xf0(r1)
    mflr r0
    stw r0, 0xf4(r1)
    addi r11, r1, 0xf0
    bl _savegpr_27
    lwz r0, 0x38(r5)
    mr r30, r3
    mr r31, r6
    cmpwi r0, 0x0
    beq lbl_fn_8038E23C_00001C00
    psq_l f1, 0x0(r6), 0, 0
    addi r7, r1, 0x74
    lfs f2, 0x8(r6)
    addi r6, r1, 0x68
    stfs f2, 0x7c(r1)
    lfs f0, 0x10(r5)
    psq_st f1, 0x0(r7), 0, 0
    lfs f2, 0x530(r4)
    psq_l f1, 0x528(r4), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    lfs f3, 0x6c(r1)
    stfs f2, 0x70(r1)
    fadds f3, f3, f0
    stfs f3, 0x6c(r1)
    lwz r0, 0x7fc(r3)
    cmpwi r0, 0x2
    bne lbl_fn_8038E23C_00001998
    lwz r0, 0x12a4(r4)
    extrwi. r0, r0, 1, 1
    beq lbl_fn_8038E23C_00001998
    lfs f0, 0x18(r5)
    fsubs f0, f3, f0
    stfs f0, 0x6c(r1)
lbl_fn_8038E23C_00001998:
    li r28, 0x0
    lis r29, 0x8000
    stw r28, 0xb4(r1)
    addi r4, r1, 0x80
    lwz r3, lbl_8087EE98
    addi r5, r1, 0x68
    stw r28, 0xb8(r1)
    addi r6, r1, 0x74
    addi r7, r29, 0x8
    li r8, 0x0
    stw r28, 0xbc(r1)
    li r9, 0x0
    stw r28, 0xc0(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_8038E23C_00001B20
    lwz r3, 0x89c(r30)
    addi r28, r1, 0x5c
    addi r27, r1, 0x90
    lfs f0, lbl_808858E8
    addi r0, r3, 0x1
    stw r0, 0x89c(r30)
    mr r5, r28
    addi r4, r1, 0x80
    psq_l f1, 0x0(r27), 0, 0
    addi r6, r1, 0x50
    psq_st f1, 0x0(r28), 0, 0
    addi r7, r29, 0x8
    lfs f2, 0x98(r1)
    li r8, 0x0
    lfs f3, 0xb0(r1)
    li r9, 0x0
    lfs f7, 0x5c(r1)
    lfs f6, 0xa8(r1)
    fadds f3, f2, f3
    lfs f5, 0x60(r1)
    fadds f6, f7, f6
    lfs f4, 0xac(r1)
    stfs f3, 0x64(r1)
    fadds f3, f5, f4
    lwz r3, lbl_8087EE98
    stfs f6, 0x5c(r1)
    lfs f1, lbl_808858F8
    stfs f3, 0x60(r1)
    stfs f0, 0x50(r1)
    stfs f0, 0x54(r1)
    stfs f0, 0x58(r1)
    bl fn_8004D388
    psq_l f1, 0x0(r27), 0, 0
    lfs f2, 0x98(r1)
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x64(r1)
    lwz r0, 0x89c(r30)
    cmpwi r0, 0x8
    blt lbl_fn_8038E23C_00001A84
    frsp f2, f2
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x8(r31)
    b lbl_fn_8038E23C_00001C00
lbl_fn_8038E23C_00001A84:
    xoris r3, r0, 0x8000
    lis r0, 0x4330
    stw r3, 0xd4(r1)
    lis r4, lbl_8074E008@ha
    lfd f4, lbl_8074E008@l(r4)
    frsp f0, f2
    stw r0, 0xd0(r1)
    addi r3, r1, 0x44
    lfs f6, 0x8(r31)
    lfd f3, 0xd0(r1)
    fsubs f9, f0, f6
    lfs f7, lbl_80885A34
    fsubs f8, f3, f4
    lfs f5, 0x60(r1)
    lfs f4, 0x4(r31)
    lfs f3, 0x5c(r1)
    lfs f0, 0x0(r31)
    fsubs f5, f5, f4
    fmuls f7, f8, f7
    stfs f9, 0x34(r1)
    fsubs f3, f3, f0
    stfs f5, 0x30(r1)
    fmuls f8, f5, f7
    fmuls f5, f3, f7
    stfs f3, 0x2c(r1)
    fmuls f9, f9, f7
    fadds f3, f8, f4
    stfs f5, 0x20(r1)
    fadds f0, f5, f0
    fadds f2, f9, f6
    stfs f3, 0x48(r1)
    stfs f0, 0x44(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f2, 0x4c(r1)
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x8(r31)
    b lbl_fn_8038E23C_00001C00
lbl_fn_8038E23C_00001B20:
    lwz r0, 0x7fc(r30)
    cmpwi r0, 0x2
    bne lbl_fn_8038E23C_00001BFC
    lwz r0, 0x89c(r30)
    cmpwi r0, 0x8
    ble lbl_fn_8038E23C_00001B40
    li r0, 0x8
    stw r0, 0x89c(r30)
lbl_fn_8038E23C_00001B40:
    lwz r3, 0x89c(r30)
    cmpwi r3, 0x0
    ble lbl_fn_8038E23C_00001B54
    subi r0, r3, 0x1
    stw r0, 0x89c(r30)
lbl_fn_8038E23C_00001B54:
    lwz r0, 0x89c(r30)
    cmpwi r0, 0x0
    ble lbl_fn_8038E23C_00001C00
    xoris r3, r0, 0x8000
    lis r0, 0x4330
    stw r3, 0xd4(r1)
    lis r4, lbl_8074E008@ha
    lfd f4, lbl_8074E008@l(r4)
    addi r3, r1, 0x38
    stw r0, 0xd0(r1)
    lfs f6, lbl_80885A34
    lfd f0, 0xd0(r1)
    lfs f3, 0x10(r30)
    fsubs f7, f0, f4
    lfs f5, 0x8(r31)
    lfs f0, 0xc(r30)
    fsubs f9, f3, f5
    lfs f4, 0x4(r31)
    fmuls f6, f7, f6
    fsubs f7, f0, f4
    lfs f3, 0x8(r30)
    lfs f0, 0x0(r31)
    fmuls f8, f9, f6
    stfs f7, 0x18(r1)
    fsubs f3, f3, f0
    fmuls f7, f7, f6
    stfs f9, 0x1c(r1)
    fadds f2, f8, f5
    fmuls f5, f3, f6
    stfs f3, 0x14(r1)
    fadds f3, f7, f4
    stfs f5, 0x8(r1)
    fadds f0, f5, f0
    stfs f3, 0x3c(r1)
    stfs f0, 0x38(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f7, 0xc(r1)
    stfs f8, 0x10(r1)
    stfs f2, 0x40(r1)
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x8(r31)
    b lbl_fn_8038E23C_00001C00
lbl_fn_8038E23C_00001BFC:
    stw r28, 0x89c(r30)
lbl_fn_8038E23C_00001C00:
    addi r11, r1, 0xf0
    bl _restgpr_27
    lwz r0, 0xf4(r1)
    mtlr r0
    addi r1, r1, 0xf0
    blr
}
