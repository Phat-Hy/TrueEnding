#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void fn_8004B378(void);
extern void fn_8004ED34(void);
extern void fn_80092814(void);
extern void fn_80116BD4(void);
extern void fn_80370174(void);
extern void fn_8038E540(void);
extern void fn_8038E9B0(void);
extern void fn_803918EC(void);
extern void fn_803920C8(void);
extern void fn_803928C0(void);
extern void fn_80392A04(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_805F99B0(void);
extern void fn_8068A850(void);

/* External data declarations */
extern u8 lbl_8074E008[];
extern u8 lbl_8074E210[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F430;
extern u32 lbl_808858E8;
extern u32 lbl_808858EC;
extern u32 lbl_808858F8;
extern u32 lbl_80885914;
extern u32 lbl_80885930;
extern u32 lbl_8088593C;
extern u32 lbl_80885944;
extern u32 lbl_80885948;
extern u32 lbl_8088594C;
extern u32 lbl_80885960;
extern u32 lbl_80885964;
extern u32 lbl_80885968;
extern u32 lbl_8088596C;
extern u32 lbl_80885970;
extern u32 lbl_80885974;
extern u32 lbl_808859DC;
extern u32 lbl_808859E4;
extern u32 lbl_80885A3C;
extern u32 lbl_80885A40;
extern u32 lbl_80885A44;
extern u32 lbl_80885A60;
extern u32 lbl_80885A88;
extern u32 lbl_80885A8C;
extern u32 lbl_80885A90;
extern u32 lbl_80885A94;

/* Function declarations */
void fn_8038AEF0(void);
void fn_8038B148(void);
void fn_8038B648(void);
void fn_8038B650(void);
void fn_8038BD78(void);
void fn_8038C070(void);
void fn_8038C5B0(void);

asm void fn_8038AEF0(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    lfs f0, 0x8(r4)
    cmpwi r7, 0x0
    stw r0, 0xc4(r1)
    mr r8, r6
    lfs f4, 0x4(r4)
    stfd f31, 0xb0(r1)
    psq_st f31, 0xb8(r1), 0, 0
    stfd f30, 0xa0(r1)
    psq_st f30, 0xa8(r1), 0, 0
    stfd f29, 0x90(r1)
    psq_st f29, 0x98(r1), 0, 0
    stfd f28, 0x80(r1)
    psq_st f28, 0x88(r1), 0, 0
    stfd f27, 0x70(r1)
    psq_st f27, 0x78(r1), 0, 0
    stw r31, 0x6c(r1)
    mr r31, r3
    lfs f5, 0x814(r3)
    lfs f3, 0x810(r3)
    fsubs f13, f0, f5
    lfs f0, 0x0(r4)
    fsubs f12, f4, f3
    lfs f4, 0x80c(r3)
    stfs f13, 0x34(r1)
    fsubs f11, f0, f4
    fmuls f10, f13, f2
    lfs f0, 0x8(r5)
    fmuls f9, f12, f2
    stfs f11, 0x2c(r1)
    fmuls f8, f11, f2
    fadds f7, f10, f5
    fadds f6, f9, f3
    lfs f5, 0x4(r5)
    fadds f4, f8, f4
    stfs f7, 0x64(r1)
    lfs f3, 0x0(r5)
    stfs f6, 0x60(r1)
    stfs f4, 0x5c(r1)
    lfs f6, 0x820(r3)
    lfs f4, 0x81c(r3)
    fsubs f27, f0, f6
    lfs f0, 0x818(r3)
    fsubs f28, f5, f4
    stfs f12, 0x30(r1)
    fsubs f29, f3, f0
    fmuls f30, f27, f2
    fmuls f11, f28, f2
    stfs f8, 0x20(r1)
    fmuls f7, f29, f2
    fadds f5, f30, f6
    stfs f9, 0x24(r1)
    fadds f3, f11, f4
    fadds f0, f7, f0
    stfs f5, 0x58(r1)
    stfs f0, 0x50(r1)
    stfs f3, 0x54(r1)
    lfs f3, 0x830(r3)
    stfs f10, 0x28(r1)
    fsubs f0, f1, f3
    stfs f29, 0x14(r1)
    fmadds f31, f2, f0, f3
    stfs f28, 0x18(r1)
    stfs f27, 0x1c(r1)
    stfs f7, 0x8(r1)
    stfs f11, 0xc(r1)
    stfs f30, 0x10(r1)
    beq lbl_fn_8038AEF0_0000012C
    mr r4, r8
    addi r5, r3, 0x648
    addi r6, r1, 0x5c
    addi r7, r1, 0x50
    addi r8, r8, 0x528
    bl fn_8038E540
lbl_fn_8038AEF0_0000012C:
    lfs f4, 0x58(r1)
    lfs f0, 0x64(r1)
    lfs f3, 0x50(r1)
    fsubs f5, f4, f0
    lfs f0, 0x5c(r1)
    lfs f4, 0x54(r1)
    fsubs f6, f3, f0
    lfs f0, 0x60(r1)
    fmuls f3, f5, f5
    fsubs f4, f4, f0
    lfs f0, lbl_808858F8
    stfs f6, 0x44(r1)
    fmadds f3, f6, f6, f3
    stfs f4, 0x48(r1)
    fcmpo cr0, f3, f0
    stfs f5, 0x4c(r1)
    bge lbl_fn_8038AEF0_000001E8
    lfs f0, lbl_808858E8
    addi r3, r1, 0x38
    stfs f6, 0x38(r1)
    stfs f0, 0x3c(r1)
    stfs f5, 0x40(r1)
    bl fn_805F9920
    lfs f0, lbl_808859DC
    fcmpo cr0, f1, f0
    bge lbl_fn_8038AEF0_000001AC
    lfs f3, lbl_808858E8
    lfs f0, lbl_808858F8
    stfs f3, 0x38(r1)
    stfs f3, 0x3c(r1)
    stfs f0, 0x40(r1)
    b lbl_fn_8038AEF0_000001B8
lbl_fn_8038AEF0_000001AC:
    addi r3, r1, 0x38
    mr r4, r3
    bl fn_805F98D0
lbl_fn_8038AEF0_000001B8:
    lfs f3, 0x50(r1)
    lfs f0, 0x38(r1)
    lfs f5, 0x54(r1)
    fadds f6, f3, f0
    lfs f4, 0x3c(r1)
    lfs f3, 0x58(r1)
    lfs f0, 0x40(r1)
    fadds f4, f5, f4
    stfs f6, 0x50(r1)
    fadds f0, f3, f0
    stfs f4, 0x54(r1)
    stfs f0, 0x58(r1)
lbl_fn_8038AEF0_000001E8:
    addi r3, r1, 0x5c
    lfs f2, 0x64(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r4, r1, 0x50
    psq_st f1, 0x8(r31), 0, 0
    mr r3, r31
    stfs f2, 0x10(r31)
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x58(r1)
    stfs f2, 0x1c(r31)
    psq_st f1, 0x14(r31), 0, 0
    stfs f31, 0x50(r31)
    bl fn_8004B378
    lwz r0, 0xc4(r1)
    psq_l f31, 0xb8(r1), 0, 0
    lfd f31, 0xb0(r1)
    psq_l f30, 0xa8(r1), 0, 0
    lfd f30, 0xa0(r1)
    psq_l f29, 0x98(r1), 0, 0
    lfd f29, 0x90(r1)
    psq_l f28, 0x88(r1), 0, 0
    lfd f28, 0x80(r1)
    psq_l f27, 0x78(r1), 0, 0
    lfd f27, 0x70(r1)
    lwz r31, 0x6c(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

asm void fn_8038B148(void)
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
    stw r31, 0xac(r1)
    mr r31, r4
    stw r30, 0xa8(r1)
    mr r30, r3
    stw r29, 0xa4(r1)
    lwz r0, 0x808(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8038B148_000003CC
    lfs f2, 0x10(r3)
    addi r5, r3, 0x80c
    psq_l f1, 0x8(r3), 0, 0
    addi r6, r3, 0x818
    psq_st f1, 0x0(r5), 0, 0
    psq_l f1, 0x14(r3), 0, 0
    stfs f2, 0x814(r3)
    lfs f2, 0x1c(r3)
    lfs f3, 0x50(r3)
    lfs f0, 0x5dc(r3)
    psq_st f1, 0x0(r6), 0, 0
    fneg f0, f0
    lfs f4, 0x5e0(r3)
    stfs f2, 0x820(r3)
    stfs f3, 0x830(r3)
    lwz r0, 0xc48(r4)
    cmpwi r0, 0x2
    beq lbl_fn_8038B148_00000300
    cmpwi r0, 0x3
    bne lbl_fn_8038B148_0000030C
    lwz r0, 0x12a4(r4)
    extrwi. r0, r0, 1, 2
    beq lbl_fn_8038B148_0000030C
lbl_fn_8038B148_00000300:
    fneg f3, f0
    lfs f0, lbl_808859E4
    fsubs f0, f3, f0
lbl_fn_8038B148_0000030C:
    lfs f3, lbl_808858E8
    stfs f0, 0x874(r3)
    stfs f4, 0x878(r3)
    stfs f3, 0x87c(r3)
    lwz r5, 0x50(r4)
    subis r5, r5, 0xb
    addi r0, r5, 0x5193
    cmplwi r0, 0x7
    ble lbl_fn_8038B148_0000033C
    addi r0, r5, 0x518a
    cmplwi r0, 0x1
    bgt lbl_fn_8038B148_00000360
lbl_fn_8038B148_0000033C:
    lfs f3, 0x874(r3)
    lfs f0, lbl_808858E8
    fcmpo cr0, f3, f0
    ble lbl_fn_8038B148_00000354
    lfs f0, lbl_80885960
    b lbl_fn_8038B148_00000358
lbl_fn_8038B148_00000354:
    lfs f0, lbl_80885A88
lbl_fn_8038B148_00000358:
    stfs f0, 0x874(r3)
    b lbl_fn_8038B148_000003CC
lbl_fn_8038B148_00000360:
    lwz r6, 0x680(r4)
    cmpwi r6, 0x0
    beq lbl_fn_8038B148_000003CC
    lis r5, 0x1062
    lwz r7, 0x4(r6)
    addi r0, r5, 0x4dd3
    mulhw r0, r0, r7
    lis r5, 0x6666
    addi r6, r5, 0x6667
    srawi r0, r0, 6
    srwi r5, r0, 31
    add r0, r0, r5
    mulli r0, r0, 0x3e8
    subf r0, r0, r7
    mulhw r0, r6, r0
    srawi r0, r0, 2
    srwi r5, r0, 31
    add r0, r0, r5
    cmpwi r0, 0x8
    bne lbl_fn_8038B148_000003CC
    frsp f0, f0
    fcmpo cr0, f0, f3
    ble lbl_fn_8038B148_000003C4
    lfs f0, lbl_80885960
    b lbl_fn_8038B148_000003C8
lbl_fn_8038B148_000003C4:
    lfs f0, lbl_80885A88
lbl_fn_8038B148_000003C8:
    stfs f0, 0x874(r3)
lbl_fn_8038B148_000003CC:
    lwz r0, 0x12a4(r4)
    lfs f31, 0x5d4(r3)
    extrwi. r0, r0, 1, 17
    bne lbl_fn_8038B148_00000410
    addi r5, r3, 0x884
    lfs f2, 0x88c(r3)
    psq_l f1, 0x0(r5), 0, 0
    addi r4, r1, 0x50
    addi r6, r3, 0x890
    psq_st f1, 0x0(r4), 0, 0
    addi r3, r1, 0x44
    stfs f2, 0x58(r1)
    psq_l f1, 0x0(r6), 0, 0
    lfs f2, 0x8(r6)
    stfs f2, 0x4c(r1)
    psq_st f1, 0x0(r3), 0, 0
    b lbl_fn_8038B148_000005CC
lbl_fn_8038B148_00000410:
    lis r4, lbl_8074E210@ha
    addi r29, r31, 0xb0
    addi r4, r4, lbl_8074E210@l
    lfs f30, 0x874(r3)
    lfs f29, 0x878(r3)
    mr r3, r29
    addi r4, r4, 0x1eb
    li r5, 0x0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8038B148_00000444
    li r4, 0x0
    b lbl_fn_8038B148_00000450
lbl_fn_8038B148_00000444:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r29)
    add r4, r3, r0
lbl_fn_8038B148_00000450:
    lwz r3, lbl_8087F430
    lfs f0, 0x2c(r4)
    lfs f3, 0x1c(r4)
    cmpwi r3, 0x0
    lfs f4, 0xc(r4)
    lfs f5, 0x5e4(r30)
    stfs f4, 0x38(r1)
    lfs f28, lbl_80885A60
    stfs f3, 0x3c(r1)
    stfs f0, 0x40(r1)
    stfs f30, 0x2c(r1)
    stfs f29, 0x30(r1)
    stfs f5, 0x34(r1)
    beq lbl_fn_8038B148_0000049C
    li r4, 0x6a
    bl fn_80370174
    cmpwi r3, 0x0
    beq lbl_fn_8038B148_0000049C
    lfs f28, lbl_80885A44
lbl_fn_8038B148_0000049C:
    lfs f0, 0xc1c(r30)
    lfs f3, lbl_808858E8
    fadds f0, f0, f28
    stfs f0, 0xc1c(r30)
    fcmpo cr0, f3, f0
    ble lbl_fn_8038B148_000004B8
    b lbl_fn_8038B148_000004BC
lbl_fn_8038B148_000004B8:
    fmr f3, f0
lbl_fn_8038B148_000004BC:
    lfs f4, lbl_80885914
    fcmpo cr0, f3, f4
    bge lbl_fn_8038B148_000004E0
    lfs f4, lbl_808858E8
    lfs f0, 0xc1c(r30)
    fcmpo cr0, f4, f0
    ble lbl_fn_8038B148_000004DC
    b lbl_fn_8038B148_000004E0
lbl_fn_8038B148_000004DC:
    fmr f4, f0
lbl_fn_8038B148_000004E0:
    stfs f4, 0xc1c(r30)
    frsp f0, f4
    addi r3, r1, 0x60
    li r4, 0x79
    lfs f3, 0x34(r1)
    fadds f0, f3, f0
    stfs f0, 0x34(r1)
    lfs f1, 0x538(r31)
    bl fn_805F8E70
    addi r4, r1, 0x2c
    addi r3, r1, 0x60
    mr r5, r4
    bl fn_805F93C0
    lfs f3, 0x34(r1)
    addi r4, r1, 0x2c
    lfs f0, 0x40(r1)
    addi r7, r1, 0x20
    lfs f5, 0x30(r1)
    addi r6, r1, 0x50
    fadds f2, f3, f0
    lfs f4, 0x3c(r1)
    lfs f3, 0x2c(r1)
    mr r5, r4
    lfs f0, 0x38(r1)
    fadds f4, f5, f4
    fadds f0, f3, f0
    stfs f4, 0x24(r1)
    addi r3, r1, 0x60
    stfs f0, 0x20(r1)
    psq_l f1, 0x0(r7), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x58(r1)
    lfs f0, 0x5d0(r30)
    stfs f2, 0x28(r1)
    stfs f30, 0x2c(r1)
    stfs f29, 0x30(r1)
    stfs f0, 0x34(r1)
    bl fn_805F93C0
    lfs f3, 0x34(r1)
    addi r4, r1, 0x14
    lfs f0, 0x40(r1)
    addi r3, r1, 0x44
    lfs f5, 0x30(r1)
    fadds f2, f3, f0
    lfs f4, 0x3c(r1)
    lfs f3, 0x2c(r1)
    lfs f0, 0x38(r1)
    fadds f4, f5, f4
    stfs f2, 0x4c(r1)
    fadds f0, f3, f0
    stfs f4, 0x18(r1)
    stfs f0, 0x14(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lfs f3, 0x48(r1)
    lfs f0, 0x5e8(r30)
    stfs f2, 0x1c(r1)
    fadds f0, f3, f0
    stfs f0, 0x48(r1)
lbl_fn_8038B148_000005CC:
    lwz r4, 0x808(r30)
    lis r0, 0x4330
    stw r0, 0x90(r1)
    lis r3, lbl_8074E008@ha
    xoris r0, r4, 0x8000
    lfd f4, lbl_8074E008@l(r3)
    stw r0, 0x94(r1)
    fmr f1, f31
    lfs f0, lbl_80885930
    mr r3, r30
    lfd f3, 0x90(r1)
    mr r6, r31
    addi r4, r1, 0x50
    fsubs f3, f3, f4
    addi r5, r1, 0x44
    li r7, 0x0
    fdivs f2, f3, f0
    bl fn_8038AEF0
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
    lwz r3, 0x808(r30)
    addi r0, r3, 0x1
    stw r0, 0x808(r30)
    cmpwi r0, 0x5
    ble lbl_fn_8038B148_00000710
    addi r3, r1, 0x50
    lis r4, lbl_8074E210@ha
    psq_l f1, 0x0(r3), 0, 0
    addi r4, r4, lbl_8074E210@l
    lfs f2, 0x58(r1)
    addi r3, r30, 0x80c
    stfs f2, 0x814(r30)
    addi r5, r1, 0x44
    addi r8, r30, 0x818
    lwz r7, 0x7fc(r30)
    psq_st f1, 0x0(r3), 0, 0
    addi r29, r31, 0xb0
    li r6, 0x0
    li r0, 0x6
    psq_l f1, 0x0(r5), 0, 0
    mr r3, r29
    lfs f2, 0x4c(r1)
    addi r4, r4, 0x1eb
    stfs f2, 0x820(r30)
    li r5, 0x0
    psq_st f1, 0x0(r8), 0, 0
    stw r7, 0x800(r30)
    stw r6, 0x838(r30)
    stw r0, 0x83c(r30)
    stw r6, 0x808(r30)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8038B148_000006D8
    li r5, 0x0
    b lbl_fn_8038B148_000006E4
lbl_fn_8038B148_000006D8:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r29)
    add r5, r3, r0
lbl_fn_8038B148_000006E4:
    lfs f0, 0x1c(r5)
    addi r4, r1, 0x8
    lfs f3, 0xc(r5)
    addi r3, r30, 0x9f8
    lfs f2, 0x2c(r5)
    stfs f3, 0x8(r1)
    stfs f0, 0xc(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0x10(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0xa00(r30)
lbl_fn_8038B148_00000710:
    li r0, 0x0
    stw r0, 0x834(r30)
    stw r0, 0x860(r30)
    psq_l f31, 0xe8(r1), 0, 0
    lfd f31, 0xe0(r1)
    psq_l f30, 0xd8(r1), 0, 0
    lfd f30, 0xd0(r1)
    psq_l f29, 0xc8(r1), 0, 0
    lfd f29, 0xc0(r1)
    psq_l f28, 0xb8(r1), 0, 0
    lfd f28, 0xb0(r1)
    lwz r31, 0xac(r1)
    lwz r30, 0xa8(r1)
    lwz r29, 0xa4(r1)
    lwz r0, 0xf4(r1)
    mtlr r0
    addi r1, r1, 0xf0
    blr
}

asm void fn_8038B648(void)
{
    nofralloc
    lwz r3, 0xc48(r3)
    blr
}

asm void fn_8038B650(void)
{
    nofralloc
    stwu r1, -0x190(r1)
    mflr r0
    stw r0, 0x194(r1)
    stfd f31, 0x180(r1)
    psq_st f31, 0x188(r1), 0, 0
    stfd f30, 0x170(r1)
    psq_st f30, 0x178(r1), 0, 0
    stfd f29, 0x160(r1)
    psq_st f29, 0x168(r1), 0, 0
    stw r31, 0x15c(r1)
    mr r31, r4
    stw r30, 0x158(r1)
    mr r30, r3
    stw r29, 0x154(r1)
    lwz r0, 0x808(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8038B650_00000B0C
    lwz r0, 0x800(r3)
    cmpwi r0, 0x3
    bne lbl_fn_8038B650_00000968
    lfs f3, 0x210(r3)
    addi r5, r1, 0x8
    lfs f0, 0x204(r3)
    addi r4, r1, 0xbc
    lfs f5, 0x20c(r3)
    fsubs f2, f3, f0
    lfs f4, 0x200(r3)
    lfs f3, 0x208(r3)
    lfs f0, 0x1fc(r3)
    fsubs f4, f5, f4
    stfs f2, 0x10(r1)
    fsubs f0, f3, f0
    mr r3, r4
    stfs f4, 0xc(r1)
    stfs f0, 0x8(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0xc4(r1)
    bl fn_805F98D0
    lfs f2, 0x204(r30)
    addi r5, r1, 0xb0
    psq_l f1, 0x1fc(r30), 0, 0
    addi r29, r1, 0xa4
    lfs f4, 0xc4(r1)
    li r0, 0x0
    lfs f5, lbl_80885A8C
    addi r4, r1, 0xf8
    lfs f3, 0xc0(r1)
    addi r6, r1, 0x68
    fmuls f6, f4, f5
    lfs f0, 0xbc(r1)
    fmuls f7, f3, f5
    psq_st f1, 0x0(r5), 0, 0
    fmuls f5, f0, f5
    lwz r3, lbl_8087EE98
    frsp f4, f2
    stfs f2, 0xb8(r1)
    lfs f3, 0xb4(r1)
    addi r8, r31, 0x5b8
    lfs f0, 0xb0(r1)
    li r7, 0x4
    psq_l f1, 0x208(r30), 0, 0
    fadds f4, f4, f6
    lfs f2, 0x210(r30)
    fadds f3, f3, f7
    fadds f0, f0, f5
    psq_st f1, 0x0(r29), 0, 0
    li r9, 0x0
    stfs f2, 0xac(r1)
    stw r0, 0x12c(r1)
    stw r0, 0x130(r1)
    stw r0, 0x134(r1)
    stw r0, 0x138(r1)
    stfs f5, 0x5c(r1)
    stfs f7, 0x60(r1)
    stfs f6, 0x64(r1)
    stfs f0, 0x68(r1)
    stfs f3, 0x6c(r1)
    stfs f4, 0x70(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_8038B650_000008C0
    addi r3, r1, 0xfc
    lfs f2, 0x104(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0xac(r1)
    b lbl_fn_8038B650_0000091C
lbl_fn_8038B650_000008C0:
    lfs f5, 0xc4(r1)
    addi r3, r1, 0x50
    lfs f4, lbl_80885A8C
    lfs f0, 0xc0(r1)
    fmuls f5, f5, f4
    lfs f3, 0xbc(r1)
    fmuls f6, f0, f4
    lfs f0, 0xb8(r1)
    fmuls f4, f3, f4
    lfs f3, 0xb4(r1)
    fadds f2, f0, f5
    lfs f0, 0xb0(r1)
    fadds f3, f3, f6
    stfs f4, 0x44(r1)
    fadds f0, f0, f4
    stfs f3, 0x54(r1)
    stfs f0, 0x50(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f6, 0x48(r1)
    stfs f5, 0x4c(r1)
    stfs f2, 0x58(r1)
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0xac(r1)
lbl_fn_8038B650_0000091C:
    lfs f3, 0x874(r30)
    addi r4, r1, 0xa4
    lfs f0, lbl_808858E8
    addi r3, r30, 0x890
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0xac(r1)
    fcmpo cr0, f3, f0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x898(r30)
    bge lbl_fn_8038B650_00000954
    lfs f0, 0x618(r30)
    fneg f0, f0
    stfs f0, 0x874(r30)
    b lbl_fn_8038B650_0000095C
lbl_fn_8038B650_00000954:
    lfs f0, 0x618(r30)
    stfs f0, 0x874(r30)
lbl_fn_8038B650_0000095C:
    lfs f0, 0x61c(r30)
    stfs f0, 0x878(r30)
    b lbl_fn_8038B650_0000097C
lbl_fn_8038B650_00000968:
    lfs f3, 0x618(r3)
    lfs f0, 0x61c(r3)
    fneg f3, f3
    stfs f0, 0x878(r3)
    stfs f3, 0x874(r3)
lbl_fn_8038B650_0000097C:
    lfs f0, 0x620(r30)
    stfs f0, 0x87c(r30)
    lwz r0, 0x12a4(r31)
    extrwi. r0, r0, 1, 25
    bne lbl_fn_8038B650_000009CC
    lfs f3, 0x874(r30)
    lfs f0, lbl_808858E8
    fcmpo cr0, f3, f0
    ble lbl_fn_8038B650_000009A8
    lfs f5, lbl_80885914
    b lbl_fn_8038B650_000009AC
lbl_fn_8038B650_000009A8:
    lfs f5, lbl_8088596C
lbl_fn_8038B650_000009AC:
    lfs f3, 0x87c(r30)
    lfs f0, lbl_80885974
    lfs f4, lbl_80885968
    fsubs f0, f3, f0
    stfs f5, 0x874(r30)
    stfs f4, 0x878(r30)
    stfs f0, 0x87c(r30)
    b lbl_fn_8038B650_00000ADC
lbl_fn_8038B650_000009CC:
    lwz r4, 0x50(r31)
    subis r3, r4, 0xb
    addi r0, r3, 0x5193
    cmplwi r0, 0x7
    ble lbl_fn_8038B650_000009F8
    subis r0, r4, 0xa
    cmplwi r0, 0xae76
    beq lbl_fn_8038B650_00000A1C
    cmplwi r0, 0xae77
    beq lbl_fn_8038B650_00000A50
    b lbl_fn_8038B650_00000A6C
lbl_fn_8038B650_000009F8:
    lfs f3, 0x874(r30)
    lfs f0, lbl_808858E8
    fcmpo cr0, f3, f0
    ble lbl_fn_8038B650_00000A10
    lfs f0, lbl_80885970
    b lbl_fn_8038B650_00000A14
lbl_fn_8038B650_00000A10:
    lfs f0, lbl_80885A90
lbl_fn_8038B650_00000A14:
    stfs f0, 0x874(r30)
    b lbl_fn_8038B650_00000ADC
lbl_fn_8038B650_00000A1C:
    lfs f3, 0x874(r30)
    lfs f0, lbl_808858E8
    fcmpo cr0, f3, f0
    ble lbl_fn_8038B650_00000A34
    lfs f4, lbl_80885A40
    b lbl_fn_8038B650_00000A38
lbl_fn_8038B650_00000A34:
    lfs f4, lbl_80885964
lbl_fn_8038B650_00000A38:
    lfs f3, 0x878(r30)
    lfs f0, lbl_80885914
    stfs f4, 0x874(r30)
    fadds f0, f3, f0
    stfs f0, 0x878(r30)
    b lbl_fn_8038B650_00000ADC
lbl_fn_8038B650_00000A50:
    lfs f3, 0x878(r30)
    lfs f0, lbl_80885A94
    lfs f4, lbl_80885A3C
    fadds f0, f3, f0
    stfs f4, 0x874(r30)
    stfs f0, 0x878(r30)
    b lbl_fn_8038B650_00000ADC
lbl_fn_8038B650_00000A6C:
    lwz r4, 0x680(r31)
    cmpwi r4, 0x0
    beq lbl_fn_8038B650_00000ADC
    lis r3, 0x1062
    lwz r5, 0x4(r4)
    addi r0, r3, 0x4dd3
    mulhw r0, r0, r5
    lis r3, 0x6666
    addi r4, r3, 0x6667
    srawi r0, r0, 6
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r0, r0, 0x3e8
    subf r0, r0, r5
    mulhw r0, r4, r0
    srawi r0, r0, 2
    srwi r3, r0, 31
    add r0, r0, r3
    cmpwi r0, 0x8
    bne lbl_fn_8038B650_00000ADC
    lfs f3, 0x874(r30)
    lfs f0, lbl_808858E8
    fcmpo cr0, f3, f0
    ble lbl_fn_8038B650_00000AD4
    lfs f0, lbl_80885960
    b lbl_fn_8038B650_00000AD8
lbl_fn_8038B650_00000AD4:
    lfs f0, lbl_80885A88
lbl_fn_8038B650_00000AD8:
    stfs f0, 0x874(r30)
lbl_fn_8038B650_00000ADC:
    lfs f2, 0x10(r30)
    addi r3, r30, 0x80c
    psq_l f1, 0x8(r30), 0, 0
    addi r4, r30, 0x818
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x14(r30), 0, 0
    stfs f2, 0x814(r30)
    lfs f2, 0x1c(r30)
    lfs f0, 0x50(r30)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x820(r30)
    stfs f0, 0x830(r30)
lbl_fn_8038B650_00000B0C:
    lwz r0, 0x12a4(r31)
    lfs f31, 0x874(r30)
    extrwi. r0, r0, 1, 25
    lfs f30, 0x878(r30)
    beq lbl_fn_8038B650_00000B34
    lwz r0, 0x674(r31)
    cmpwi r0, 0x0
    blt lbl_fn_8038B650_00000B34
    lfs f0, 0x624(r30)
    fsubs f30, f30, f0
lbl_fn_8038B650_00000B34:
    lwz r3, lbl_8087F430
    lfs f0, 0x87c(r30)
    cmpwi r3, 0x0
    stfs f0, 0xa0(r1)
    lfs f29, lbl_80885A60
    stfs f31, 0x98(r1)
    stfs f30, 0x9c(r1)
    beq lbl_fn_8038B650_00000B68
    li r4, 0x6a
    bl fn_80370174
    cmpwi r3, 0x0
    beq lbl_fn_8038B650_00000B68
    lfs f29, lbl_80885A44
lbl_fn_8038B650_00000B68:
    lfs f0, 0xc1c(r30)
    lfs f3, lbl_808858E8
    fadds f0, f0, f29
    stfs f0, 0xc1c(r30)
    fcmpo cr0, f3, f0
    ble lbl_fn_8038B650_00000B84
    b lbl_fn_8038B650_00000B88
lbl_fn_8038B650_00000B84:
    fmr f3, f0
lbl_fn_8038B650_00000B88:
    lfs f4, lbl_80885914
    fcmpo cr0, f3, f4
    bge lbl_fn_8038B650_00000BAC
    lfs f4, lbl_808858E8
    lfs f0, 0xc1c(r30)
    fcmpo cr0, f4, f0
    ble lbl_fn_8038B650_00000BA8
    b lbl_fn_8038B650_00000BAC
lbl_fn_8038B650_00000BA8:
    fmr f4, f0
lbl_fn_8038B650_00000BAC:
    stfs f4, 0xc1c(r30)
    frsp f0, f4
    addi r3, r1, 0xc8
    li r4, 0x79
    lfs f3, 0xa0(r1)
    fadds f0, f3, f0
    stfs f0, 0xa0(r1)
    lfs f1, 0x538(r31)
    bl fn_805F8E70
    addi r4, r1, 0x98
    addi r3, r1, 0xc8
    mr r5, r4
    bl fn_805F93C0
    lfs f3, 0xa0(r1)
    addi r4, r1, 0x98
    lfs f0, 0x530(r31)
    mr r5, r4
    lfs f5, 0x9c(r1)
    addi r3, r1, 0xc8
    fadds f6, f3, f0
    lfs f4, 0x52c(r31)
    lfs f0, 0x528(r31)
    lfs f3, 0x98(r1)
    fadds f4, f5, f4
    stfs f6, 0x94(r1)
    fadds f0, f3, f0
    stfs f4, 0x90(r1)
    stfs f0, 0x8c(r1)
    lfs f0, 0x60c(r30)
    stfs f0, 0xa0(r1)
    stfs f31, 0x98(r1)
    stfs f30, 0x9c(r1)
    bl fn_805F93C0
    lfs f3, 0xa0(r1)
    lfs f0, 0x530(r31)
    lfs f5, 0x9c(r1)
    fadds f6, f3, f0
    lfs f4, 0x52c(r31)
    lfs f0, 0x528(r31)
    lfs f3, 0x98(r1)
    fadds f4, f5, f4
    stfs f6, 0x88(r1)
    fadds f0, f3, f0
    stfs f4, 0x84(r1)
    stfs f0, 0x80(r1)
    lwz r0, 0x12a4(r31)
    extrwi. r0, r0, 1, 25
    bne lbl_fn_8038B650_00000C74
    lfs f30, lbl_80885948
    b lbl_fn_8038B650_00000C78
lbl_fn_8038B650_00000C74:
    lfs f30, 0x610(r30)
lbl_fn_8038B650_00000C78:
    lwz r0, 0x800(r30)
    cmpwi r0, 0x3
    bne lbl_fn_8038B650_00000D68
    lfs f3, 0x88(r1)
    addi r3, r1, 0x38
    lfs f0, 0x94(r1)
    lfs f5, 0x84(r1)
    fsubs f6, f3, f0
    lfs f4, 0x90(r1)
    lfs f3, 0x80(r1)
    lfs f0, 0x8c(r1)
    fsubs f4, f5, f4
    stfs f6, 0x40(r1)
    fsubs f0, f3, f0
    stfs f4, 0x3c(r1)
    stfs f0, 0x38(r1)
    bl fn_805F9940
    lfs f3, 0x898(r30)
    addi r3, r1, 0x74
    lfs f0, 0x94(r1)
    addi r5, r1, 0x2c
    lfs f5, 0x894(r30)
    fmr f31, f1
    fsubs f2, f3, f0
    lfs f4, 0x90(r1)
    lfs f3, 0x890(r30)
    mr r4, r3
    lfs f0, 0x8c(r1)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f2, 0x34(r1)
    stfs f0, 0x2c(r1)
    stfs f4, 0x30(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x7c(r1)
    bl fn_805F98D0
    lfs f4, 0x7c(r1)
    addi r4, r1, 0x20
    lfs f0, 0x78(r1)
    addi r3, r1, 0x80
    lfs f3, 0x74(r1)
    fmuls f4, f4, f31
    fmuls f5, f0, f31
    lfs f0, 0x94(r1)
    fmuls f6, f3, f31
    lfs f3, 0x90(r1)
    fadds f2, f4, f0
    lfs f0, 0x8c(r1)
    fadds f3, f5, f3
    stfs f6, 0x14(r1)
    fadds f0, f6, f0
    stfs f3, 0x24(r1)
    stfs f0, 0x20(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f5, 0x18(r1)
    stfs f4, 0x1c(r1)
    stfs f2, 0x28(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x88(r1)
lbl_fn_8038B650_00000D68:
    lwz r4, 0x808(r30)
    lis r0, 0x4330
    stw r0, 0x148(r1)
    lis r3, lbl_8074E008@ha
    xoris r0, r4, 0x8000
    lfd f4, lbl_8074E008@l(r3)
    stw r0, 0x14c(r1)
    fmr f1, f30
    lfs f0, lbl_80885930
    mr r3, r30
    lfd f3, 0x148(r1)
    mr r6, r31
    addi r4, r1, 0x8c
    fsubs f3, f3, f4
    addi r5, r1, 0x80
    li r7, 0x0
    fdivs f2, f3, f0
    bl fn_8038AEF0
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
    lwz r3, 0x808(r30)
    addi r0, r3, 0x1
    stw r0, 0x808(r30)
    cmpwi r0, 0x5
    ble lbl_fn_8038B650_00000E48
    addi r3, r1, 0x8c
    lfs f2, 0x94(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r30, 0x80c
    psq_st f1, 0x0(r3), 0, 0
    addi r6, r1, 0x80
    addi r5, r30, 0x818
    lwz r4, 0x7fc(r30)
    stfs f2, 0x814(r30)
    li r3, 0x0
    li r0, 0x6
    psq_l f1, 0x0(r6), 0, 0
    lfs f2, 0x88(r1)
    stfs f2, 0x820(r30)
    psq_st f1, 0x0(r5), 0, 0
    stw r4, 0x800(r30)
    stw r3, 0x838(r30)
    stw r0, 0x83c(r30)
    stw r3, 0x808(r30)
lbl_fn_8038B650_00000E48:
    li r0, 0x0
    stw r0, 0x834(r30)
    stw r0, 0x860(r30)
    psq_l f31, 0x188(r1), 0, 0
    lfd f31, 0x180(r1)
    psq_l f30, 0x178(r1), 0, 0
    lfd f30, 0x170(r1)
    psq_l f29, 0x168(r1), 0, 0
    lfd f29, 0x160(r1)
    lwz r31, 0x15c(r1)
    lwz r30, 0x158(r1)
    lwz r29, 0x154(r1)
    lwz r0, 0x194(r1)
    mtlr r0
    addi r1, r1, 0x190
    blr
}

asm void fn_8038BD78(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    stfd f31, 0x90(r1)
    psq_st f31, 0x98(r1), 0, 0
    stw r31, 0x8c(r1)
    mr r31, r3
    stw r30, 0x88(r1)
    stw r29, 0x84(r1)
    stw r28, 0x80(r1)
    mr r28, r4
    lwz r0, 0x808(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8038BD78_00000EF0
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
lbl_fn_8038BD78_00000EF0:
    lwz r7, lbl_8087F0A8
    addi r6, r4, 0xf6c
    lfs f2, 0xf74(r4)
    addi r5, r1, 0x68
    lwz r0, 0x40(r7)
    addi r29, r3, 0x20
    psq_l f1, 0x0(r6), 0, 0
    cmpwi r0, 0x0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x70(r1)
    bne lbl_fn_8038BD78_00000F78
    lfs f4, 0x4(r6)
    addi r3, r1, 0x38
    lfs f3, 0x52c(r4)
    lfs f5, 0x8(r6)
    fadds f6, f4, f3
    lfs f0, 0x530(r4)
    lfs f4, 0x0(r6)
    fadds f5, f5, f0
    lfs f3, 0x528(r4)
    lfs f0, lbl_808859E4
    fadds f3, f4, f3
    stfs f6, 0x30(r1)
    fmuls f2, f5, f0
    fmuls f4, f6, f0
    stfs f5, 0x34(r1)
    fmuls f0, f3, f0
    stfs f4, 0x3c(r1)
    stfs f0, 0x38(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f3, 0x2c(r1)
    stfs f2, 0x40(r1)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x70(r1)
lbl_fn_8038BD78_00000F78:
    addi r3, r1, 0x68
    lfs f2, 0x70(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r30, r1, 0x5c
    psq_st f1, 0x0(r30), 0, 0
    addi r3, r1, 0x50
    stfs f2, 0x64(r1)
    lfs f5, 0x60(r1)
    lfs f3, 0x530(r4)
    lfs f4, 0x52c(r4)
    lfs f0, 0x528(r4)
    fsubs f6, f2, f3
    lfs f3, 0x5c(r1)
    fsubs f4, f5, f4
    stfs f6, 0x58(r1)
    mr r4, r3
    fsubs f0, f3, f0
    stfs f4, 0x54(r1)
    stfs f0, 0x50(r1)
    bl fn_805F98D0
    lfs f5, 0x65c(r31)
    mr r4, r29
    lfs f4, 0x58(r1)
    addi r3, r1, 0x50
    lfs f3, 0x54(r1)
    addi r5, r1, 0x8
    fmuls f6, f4, f5
    lfs f4, 0x530(r28)
    fmuls f7, f3, f5
    lfs f0, 0x50(r1)
    lfs f3, 0x52c(r28)
    fmuls f5, f0, f5
    lfs f0, 0x528(r28)
    fadds f4, f4, f6
    fadds f3, f3, f7
    stfs f5, 0x20(r1)
    fadds f0, f0, f5
    stfs f3, 0x48(r1)
    stfs f0, 0x44(r1)
    stfs f4, 0x4c(r1)
    lfs f0, 0x658(r31)
    stfs f7, 0x24(r1)
    fadds f0, f3, f0
    stfs f6, 0x28(r1)
    stfs f0, 0x48(r1)
    lfs f31, 0x654(r31)
    bl fn_805F99B0
    lfs f4, 0x10(r1)
    lis r0, 0x4330
    lfs f3, 0xc(r1)
    lis r3, lbl_8074E008@ha
    fmuls f7, f4, f31
    lfs f0, 0x8(r1)
    fmuls f8, f3, f31
    lfs f3, 0x48(r1)
    fmuls f9, f0, f31
    lfs f4, 0x44(r1)
    fadds f5, f3, f8
    lfs f0, 0x4c(r1)
    fadds f6, f4, f9
    lfd f4, lbl_8074E008@l(r3)
    fadds f3, f0, f7
    stfs f5, 0x48(r1)
    stfs f6, 0x44(r1)
    mr r3, r31
    lfs f0, lbl_8088594C
    mr r5, r30
    stfs f3, 0x4c(r1)
    mr r6, r28
    addi r4, r1, 0x44
    li r7, 0x1
    stw r0, 0x78(r1)
    lwz r0, 0x808(r31)
    lfs f1, 0x64c(r31)
    xoris r0, r0, 0x8000
    stw r0, 0x7c(r1)
    lfd f3, 0x78(r1)
    stfs f9, 0x14(r1)
    fsubs f3, f3, f4
    stfs f8, 0x18(r1)
    fdivs f2, f3, f0
    stfs f7, 0x1c(r1)
    bl fn_8038AEF0
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
    lwz r3, 0x808(r31)
    addi r0, r3, 0x1
    stw r0, 0x808(r31)
    cmpwi r0, 0xf
    ble lbl_fn_8038BD78_00001150
    addi r3, r1, 0x44
    lfs f2, 0x4c(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r5, r31, 0x80c
    psq_st f1, 0x0(r5), 0, 0
    addi r6, r31, 0x818
    lwz r4, 0x7fc(r31)
    li r3, 0x0
    stfs f2, 0x814(r31)
    li r0, 0x6
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x64(r1)
    stfs f2, 0x820(r31)
    psq_st f1, 0x0(r6), 0, 0
    stw r4, 0x800(r31)
    stw r3, 0x838(r31)
    stw r0, 0x83c(r31)
    stw r3, 0x808(r31)
lbl_fn_8038BD78_00001150:
    li r0, 0x0
    stw r0, 0x834(r31)
    psq_l f31, 0x98(r1), 0, 0
    lfd f31, 0x90(r1)
    lwz r31, 0x8c(r1)
    lwz r30, 0x88(r1)
    lwz r29, 0x84(r1)
    lwz r28, 0x80(r1)
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_8038C070(void)
{
    nofralloc
    stwu r1, -0x240(r1)
    mflr r0
    stw r0, 0x244(r1)
    stfd f31, 0x230(r1)
    psq_st f31, 0x238(r1), 0, 0
    stfd f30, 0x220(r1)
    psq_st f30, 0x228(r1), 0, 0
    stfd f29, 0x210(r1)
    psq_st f29, 0x218(r1), 0, 0
    stfd f28, 0x200(r1)
    psq_st f28, 0x208(r1), 0, 0
    stfd f27, 0x1f0(r1)
    psq_st f27, 0x1f8(r1), 0, 0
    stw r31, 0x1ec(r1)
    li r31, 0x2d
    stw r30, 0x1e8(r1)
    mr r30, r4
    stw r29, 0x1e4(r1)
    mr r29, r3
    stw r28, 0x1e0(r1)
    lwz r5, lbl_8087F430
    cmpwi r5, 0x0
    beq lbl_fn_8038C070_000011F0
    lwz r0, 0x54e4(r5)
    cmpwi r0, 0x7
    beq lbl_fn_8038C070_000011F0
    cmpwi r0, 0xe
    bne lbl_fn_8038C070_000011F4
lbl_fn_8038C070_000011F0:
    li r31, 0xa
lbl_fn_8038C070_000011F4:
    lwz r0, 0x808(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8038C070_00001230
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
lbl_fn_8038C070_00001230:
    lfs f0, 0x684(r3)
    addi r28, r1, 0x198
    lfs f1, lbl_808858E8
    fneg f7, f0
    stfs f1, 0x68(r1)
    fcmpu cr0, f1, f1
    lfs f0, lbl_808858F8
    stfs f1, 0x6c(r1)
    stfs f7, 0x70(r1)
    lfs f7, 0x8a0(r3)
    lfs f8, 0x68c(r3)
    fneg f7, f7
    stfs f8, 0x38(r1)
    stfs f7, 0x3c(r1)
    stfs f1, 0x40(r1)
    stfs f1, 0x1c4(r1)
    stfs f1, 0x1bc(r1)
    stfs f1, 0x1b8(r1)
    stfs f1, 0x1b4(r1)
    stfs f1, 0x1b0(r1)
    stfs f1, 0x1a8(r1)
    stfs f1, 0x1a4(r1)
    stfs f1, 0x1a0(r1)
    stfs f1, 0x19c(r1)
    stfs f0, 0x1c0(r1)
    stfs f0, 0x1ac(r1)
    stfs f0, 0x198(r1)
    beq lbl_fn_8038C070_000012F0
    addi r3, r1, 0x138
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r28
    addi r4, r1, 0x138
    addi r5, r1, 0x168
    bl fn_805F89F0
    addi r3, r1, 0x168
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    psq_st f2, 0x8(r28), 0, 0
    psq_st f3, 0x10(r28), 0, 0
    psq_st f4, 0x18(r28), 0, 0
    psq_st f5, 0x20(r28), 0, 0
    psq_st f6, 0x28(r28), 0, 0
lbl_fn_8038C070_000012F0:
    lfs f0, lbl_808858E8
    lfs f1, 0x3c(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_8038C070_00001350
    addi r3, r1, 0xd8
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r28
    addi r4, r1, 0xd8
    addi r5, r1, 0x108
    bl fn_805F89F0
    addi r3, r1, 0x108
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    psq_st f2, 0x8(r28), 0, 0
    psq_st f3, 0x10(r28), 0, 0
    psq_st f4, 0x18(r28), 0, 0
    psq_st f5, 0x20(r28), 0, 0
    psq_st f6, 0x28(r28), 0, 0
lbl_fn_8038C070_00001350:
    lfs f0, lbl_808858E8
    lfs f1, 0x38(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_8038C070_000013B0
    addi r3, r1, 0x78
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r28
    addi r4, r1, 0x78
    addi r5, r1, 0xa8
    bl fn_805F89F0
    addi r3, r1, 0xa8
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    psq_st f2, 0x8(r28), 0, 0
    psq_st f3, 0x10(r28), 0, 0
    psq_st f4, 0x18(r28), 0, 0
    psq_st f5, 0x20(r28), 0, 0
    psq_st f6, 0x28(r28), 0, 0
lbl_fn_8038C070_000013B0:
    addi r4, r1, 0x68
    addi r3, r1, 0x198
    mr r5, r4
    bl fn_805F93C0
    lfs f31, 0x698(r29)
    lis r3, 0x4330
    lfs f13, 0x694(r29)
    xoris r0, r31, 0x8000
    lfs f12, 0x690(r29)
    lis r4, lbl_8074E008@ha
    lfs f8, 0x68(r1)
    lfs f7, 0x6c(r1)
    lfs f0, 0x70(r1)
    fadds f8, f8, f12
    fadds f11, f7, f13
    stw r0, 0x1d4(r1)
    fadds f10, f0, f31
    lfd f9, lbl_8074E008@l(r4)
    stfs f8, 0x68(r1)
    lfs f7, lbl_808858EC
    stfs f11, 0x6c(r1)
    stfs f10, 0x70(r1)
    lfs f0, 0x8a4(r29)
    stw r3, 0x1c8(r1)
    fadds f0, f8, f0
    stw r3, 0x1d0(r1)
    stfs f0, 0x68(r1)
    lfd f0, 0x1d0(r1)
    lfs f8, 0x8a8(r29)
    fsubs f0, f0, f9
    stfs f12, 0x44(r1)
    fadds f8, f11, f8
    stfs f13, 0x48(r1)
    stfs f8, 0x6c(r1)
    lfs f8, 0x8ac(r29)
    stfs f31, 0x4c(r1)
    fadds f8, f10, f8
    stfs f8, 0x70(r1)
    lwz r0, 0x808(r29)
    xoris r0, r0, 0x8000
    stw r0, 0x1cc(r1)
    lfd f8, 0x1c8(r1)
    fsubs f8, f8, f9
    fmuls f7, f7, f8
    fdivs f1, f7, f0
    bl fn_8068A850
    frsp f9, f1
    lfs f7, lbl_808858F8
    lfs f8, lbl_808859E4
    lfs f0, 0x70(r1)
    fsubs f11, f7, f9
    lfs f10, 0x814(r29)
    lfs f7, 0x6c(r1)
    lfs f9, 0x810(r29)
    fsubs f31, f0, f10
    fmuls f0, f11, f8
    fsubs f11, f7, f9
    lfs f8, 0x68(r1)
    lfs f7, 0x80c(r29)
    fmuls f13, f31, f0
    stfs f11, 0x30(r1)
    fsubs f8, f8, f7
    fmuls f12, f11, f0
    stfs f31, 0x34(r1)
    fadds f10, f13, f10
    fmuls f11, f8, f0
    stfs f8, 0x2c(r1)
    fadds f8, f12, f9
    stfs f10, 0x64(r1)
    fadds f7, f11, f7
    stfs f8, 0x60(r1)
    stfs f7, 0x5c(r1)
    lfs f8, 0x8ac(r29)
    lfs f10, 0x820(r29)
    lfs f7, 0x8a8(r29)
    fsubs f27, f8, f10
    lfs f9, 0x81c(r29)
    lfs f8, 0x8a4(r29)
    fsubs f28, f7, f9
    lfs f7, 0x818(r29)
    fmuls f30, f27, f0
    fsubs f29, f8, f7
    stfs f11, 0x20(r1)
    fmuls f31, f28, f0
    fadds f10, f30, f10
    stfs f29, 0x14(r1)
    fmuls f11, f29, f0
    fadds f8, f31, f9
    stfs f10, 0x58(r1)
    fadds f7, f11, f7
    stfs f8, 0x54(r1)
    stfs f7, 0x50(r1)
    lwz r0, 0x8e4(r29)
    lfs f7, 0x688(r29)
    lfs f8, 0x830(r29)
    cmpwi r0, 0x0
    stfs f12, 0x24(r1)
    fsubs f7, f7, f8
    stfs f13, 0x28(r1)
    fmadds f29, f0, f7, f8
    stfs f28, 0x18(r1)
    stfs f27, 0x1c(r1)
    stfs f11, 0x8(r1)
    stfs f31, 0xc(r1)
    stfs f30, 0x10(r1)
    beq lbl_fn_8038C070_00001574
    addi r7, r1, 0x50
    mr r3, r29
    mr r4, r30
    addi r5, r29, 0x684
    mr r8, r7
    addi r6, r1, 0x5c
    bl fn_8038E9B0
lbl_fn_8038C070_00001574:
    lfs f8, 0x5c(r1)
    lfs f0, 0x50(r1)
    fcmpu cr0, f8, f0
    bne lbl_fn_8038C070_000015A0
    lfs f7, 0x64(r1)
    lfs f0, 0x58(r1)
    fcmpu cr0, f7, f0
    bne lbl_fn_8038C070_000015A0
    lfs f0, lbl_8088593C
    fadds f0, f8, f0
    stfs f0, 0x5c(r1)
lbl_fn_8038C070_000015A0:
    addi r28, r1, 0x5c
    lfs f2, 0x64(r1)
    psq_l f1, 0x0(r28), 0, 0
    addi r30, r1, 0x50
    psq_st f1, 0x8(r29), 0, 0
    mr r3, r29
    stfs f2, 0x10(r29)
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x58(r1)
    stfs f2, 0x1c(r29)
    psq_st f1, 0x14(r29), 0, 0
    stfs f29, 0x50(r29)
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
    lwz r3, 0x808(r29)
    addi r0, r3, 0x1
    stw r0, 0x808(r29)
    cmpw r0, r31
    ble lbl_fn_8038C070_00001670
    psq_l f1, 0x0(r28), 0, 0
    addi r5, r29, 0x80c
    lfs f2, 0x64(r1)
    addi r6, r29, 0x818
    stfs f2, 0x814(r29)
    addi r7, r29, 0x868
    lwz r4, 0x7fc(r29)
    li r3, 0x0
    psq_st f1, 0x0(r5), 0, 0
    li r0, 0x6
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x58(r1)
    stfs f2, 0x820(r29)
    psq_st f1, 0x0(r6), 0, 0
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x58(r1)
    stfs f2, 0x870(r29)
    psq_st f1, 0x0(r7), 0, 0
    stw r4, 0x800(r29)
    stw r3, 0x838(r29)
    stw r0, 0x83c(r29)
    stw r3, 0x808(r29)
lbl_fn_8038C070_00001670:
    li r0, 0x0
    stw r0, 0x834(r29)
    psq_l f31, 0x238(r1), 0, 0
    lfd f31, 0x230(r1)
    psq_l f30, 0x228(r1), 0, 0
    lfd f30, 0x220(r1)
    psq_l f29, 0x218(r1), 0, 0
    lfd f29, 0x210(r1)
    psq_l f28, 0x208(r1), 0, 0
    lfd f28, 0x200(r1)
    psq_l f27, 0x1f8(r1), 0, 0
    lfd f27, 0x1f0(r1)
    lwz r31, 0x1ec(r1)
    lwz r30, 0x1e8(r1)
    lwz r29, 0x1e4(r1)
    lwz r28, 0x1e0(r1)
    lwz r0, 0x244(r1)
    mtlr r0
    addi r1, r1, 0x240
    blr
}

asm void fn_8038C5B0(void)
{
    nofralloc
    stwu r1, -0xf0(r1)
    mflr r0
    stw r0, 0xf4(r1)
    addi r11, r1, 0xe0
    stfd f31, 0xe0(r1)
    psq_st f31, 0xe8(r1), 0, 0
    bl _savegpr_27
    lwz r0, 0x808(r3)
    lis r5, 0x4330
    stw r5, 0xb0(r1)
    mr r31, r3
    cmpwi r0, 0x0
    mr r27, r4
    stw r5, 0xb8(r1)
    bne lbl_fn_8038C5B0_00001744
    lfs f2, 0x10(r3)
    addi r5, r3, 0x80c
    psq_l f1, 0x8(r3), 0, 0
    addi r6, r3, 0x818
    psq_st f1, 0x0(r5), 0, 0
    addi r8, r4, 0xf6c
    psq_l f1, 0x14(r3), 0, 0
    addi r7, r3, 0x890
    stfs f2, 0x814(r3)
    lfs f2, 0x1c(r3)
    lfs f0, 0x50(r3)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x820(r3)
    stfs f0, 0x830(r3)
    psq_l f1, 0x0(r8), 0, 0
    lfs f2, 0xf74(r4)
    stfs f2, 0x898(r3)
    psq_st f1, 0x0(r7), 0, 0
lbl_fn_8038C5B0_00001744:
    lfs f2, 0x10(r3)
    addi r30, r1, 0x74
    psq_l f1, 0x8(r3), 0, 0
    addi r29, r1, 0x68
    psq_st f1, 0x0(r30), 0, 0
    addi r28, r1, 0x5c
    psq_l f1, 0x14(r3), 0, 0
    stfs f2, 0x7c(r1)
    lfs f2, 0x1c(r3)
    psq_st f1, 0x0(r29), 0, 0
    psq_l f1, 0x20(r3), 0, 0
    stfs f2, 0x70(r1)
    lfs f2, 0x28(r3)
    addi r3, r1, 0x80
    lfs f3, lbl_808858E8
    lfs f0, lbl_808858F8
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x64(r1)
    stfs f3, 0x50(r1)
    stfs f3, 0x54(r1)
    stfs f0, 0x58(r1)
    lfs f1, 0x538(r4)
    li r4, 0x79
    bl fn_805F8E70
    addi r4, r1, 0x50
    addi r3, r1, 0x80
    mr r5, r4
    bl fn_805F93C0
    lfs f0, 0x58(r1)
    addi r6, r1, 0x44
    lfs f3, 0x54(r1)
    addi r3, r1, 0x50
    fneg f4, f0
    lfs f0, 0x50(r1)
    fneg f3, f3
    lfs f5, lbl_80885944
    fneg f0, f0
    stfs f4, 0x4c(r1)
    stfs f0, 0x44(r1)
    frsp f2, f4
    mr r4, r28
    addi r5, r1, 0x2c
    stfs f3, 0x48(r1)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x58(r1)
    psq_l f1, 0x528(r27), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    lfs f2, 0x530(r27)
    lfs f0, 0x78(r1)
    stfs f2, 0x7c(r1)
    fadds f0, f0, f5
    lfs f31, 0x654(r31)
    stfs f0, 0x78(r1)
    bl fn_805F99B0
    lwz r0, 0x808(r31)
    lis r3, lbl_8074E008@ha
    lfs f0, 0x34(r1)
    xoris r0, r0, 0x8000
    stw r0, 0xb4(r1)
    fmuls f11, f0, f31
    lfs f3, 0x30(r1)
    lfd f5, lbl_8074E008@l(r3)
    lfd f0, 0xb0(r1)
    fmuls f12, f3, f31
    lfs f3, 0x2c(r1)
    fsubs f0, f0, f5
    lfs f4, lbl_80885914
    fmuls f13, f3, f31
    psq_l f1, 0x528(r27), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    fdivs f3, f0, f4
    lfs f6, 0x74(r1)
    lfs f9, 0x78(r1)
    lfs f8, 0x7c(r1)
    lfs f0, lbl_808858F8
    lfs f2, 0x530(r27)
    fadds f10, f6, f13
    lfs f7, 0x6c(r1)
    lfs f6, lbl_80885A94
    fadds f9, f9, f12
    fadds f8, f8, f11
    stfs f13, 0x38(r1)
    fadds f6, f7, f6
    stfs f12, 0x3c(r1)
    fcmpo cr0, f0, f3
    stfs f11, 0x40(r1)
    stfs f10, 0x74(r1)
    stfs f9, 0x78(r1)
    stfs f8, 0x7c(r1)
    stfs f2, 0x70(r1)
    stfs f6, 0x6c(r1)
    bge lbl_fn_8038C5B0_000018BC
    b lbl_fn_8038C5B0_000018CC
lbl_fn_8038C5B0_000018BC:
    stw r0, 0xbc(r1)
    lfd f0, 0xb8(r1)
    fsubs f0, f0, f5
    fdivs f0, f0, f4
lbl_fn_8038C5B0_000018CC:
    lwz r0, 0x808(r31)
    lis r3, lbl_8074E008@ha
    lfd f5, lbl_8074E008@l(r3)
    addi r4, r1, 0x20
    xoris r0, r0, 0x8000
    stw r0, 0xb4(r1)
    lfs f4, lbl_80885914
    addi r3, r1, 0x68
    lfd f3, 0xb0(r1)
    lfs f6, 0x70(r1)
    fsubs f3, f3, f5
    lfs f10, 0x820(r31)
    lfs f9, 0x6c(r1)
    fsubs f11, f6, f10
    lfs f8, 0x81c(r31)
    fdivs f3, f3, f4
    lfs f13, lbl_808858F8
    lfs f7, 0x68(r1)
    lfs f6, 0x818(r31)
    stfs f11, 0x1c(r1)
    fsubs f9, f9, f8
    fmuls f12, f11, f0
    fsubs f7, f7, f6
    stfs f9, 0x18(r1)
    fmuls f11, f9, f0
    fadds f9, f12, f10
    stfs f7, 0x14(r1)
    fmuls f0, f7, f0
    fadds f7, f11, f8
    stfs f11, 0xc(r1)
    fmr f2, f9
    stfs f0, 0x8(r1)
    fadds f0, f0, f6
    fcmpo cr0, f13, f3
    stfs f2, 0x70(r1)
    frsp f2, f2
    stfs f7, 0x24(r1)
    stfs f0, 0x20(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f12, 0x10(r1)
    stfs f9, 0x28(r1)
    psq_st f1, 0x0(r3), 0, 0
    psq_st f1, 0x14(r31), 0, 0
    stfs f2, 0x1c(r31)
    bge lbl_fn_8038C5B0_00001984
    b lbl_fn_8038C5B0_00001994
lbl_fn_8038C5B0_00001984:
    stw r0, 0xbc(r1)
    lfd f0, 0xb8(r1)
    fsubs f0, f0, f5
    fdivs f13, f0, f4
lbl_fn_8038C5B0_00001994:
    lfs f0, 0x7b4(r31)
    mr r3, r31
    lfs f3, 0x830(r31)
    fsubs f0, f0, f3
    fmadds f0, f13, f0, f3
    stfs f0, 0x50(r31)
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
    lwz r3, 0x808(r31)
    addi r0, r3, 0x1
    stw r0, 0x808(r31)
    cmpwi r0, 0xa
    ble lbl_fn_8038C5B0_00001A10
    lwz r4, 0x7fc(r31)
    li r3, 0x0
    li r0, 0x6
    stw r4, 0x800(r31)
    stw r3, 0x838(r31)
    stw r0, 0x83c(r31)
    stw r3, 0x808(r31)
lbl_fn_8038C5B0_00001A10:
    li r0, 0x0
    stw r0, 0x834(r31)
    psq_l f31, 0xe8(r1), 0, 0
    lfd f31, 0xe0(r1)
    addi r11, r1, 0xe0
    bl _restgpr_27
    lwz r0, 0xf4(r1)
    mtlr r0
    addi r1, r1, 0xf0
    blr
}
