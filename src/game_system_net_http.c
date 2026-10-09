#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void dtor_80084684(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_80014798(void);
extern void fn_8004B378(void);
extern void fn_800616C0(void);
extern void fn_80063D3C(void);
extern void fn_8006AA20(void);
extern void fn_8006B2D8(void);
extern void fn_8006CA80(void);
extern void fn_80084320(void);
extern void fn_8008B964(void);
extern void fn_800C31F4(void);
extern void fn_800D1D3C(void);
extern void fn_80116BD4(void);
extern void fn_803918EC(void);
extern void fn_80393BEC(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_80680CF8(void);
extern void fn_8068A850(void);
extern void fn_8068AEA4(void);
extern void fn_806958E0(void);
extern int sprintf(char* str, const char* format, ...);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_8074E008[];
extern u8 lbl_8074E210[];
extern u8 lbl_8074EF78[];
extern u8 lbl_8074F8CC[];
extern u8 lbl_8078B128[];

/* Small data declarations */
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EFE8;
extern u32 lbl_8087F0A8;
extern u32 lbl_808858E8;
extern u32 lbl_808858EC;
extern u32 lbl_808858F4;
extern u32 lbl_808858F8;
extern u32 lbl_80885938;
extern u32 lbl_80885974;
extern u32 lbl_80885988;
extern u32 lbl_808859BC;
extern u32 lbl_808859C8;
extern u32 lbl_808859CC;
extern u32 lbl_808859D0;
extern u32 lbl_808859E4;
extern u32 lbl_80885A10;
extern u32 lbl_80885A44;
extern u32 lbl_80885ACC;

/* Function declarations */
void fn_803920C8(void);
void fn_80392510(void);
void fn_803928C0(void);
void fn_80392964(void);
void fn_80392A04(void);
void fn_80392C94(void);
void fn_80392CE0(void);
void fn_80392D2C(void);
void fn_80392FE8(void);
void fn_8039328C(void);
void fn_803933A4(void);
void fn_803933F4(void);
void fn_803935AC(void);
void fn_803935FC(void);
void fn_80393610(void);
void fn_803936A4(void);

asm void fn_803920C8(void)
{
    nofralloc
    stwu r1, -0x180(r1)
    mflr r0
    stw r0, 0x184(r1)
    lis r0, 0x4330
    stfd f31, 0x170(r1)
    psq_st f31, 0x178(r1), 0, 0
    stfd f30, 0x160(r1)
    psq_st f30, 0x168(r1), 0, 0
    stw r31, 0x15c(r1)
    stw r30, 0x158(r1)
    mr r30, r3
    stw r29, 0x154(r1)
    stw r28, 0x150(r1)
    lwz r4, 0x904(r3)
    lwz r5, 0x900(r3)
    stw r0, 0x138(r1)
    cmpw r5, r4
    stw r0, 0x140(r1)
    bge lbl_fn_803920C8_00000418
    lfs f5, 0x210(r3)
    addi r5, r1, 0x8c
    lfs f4, 0x204(r3)
    addi r6, r1, 0x5c
    lfs f3, 0x20c(r3)
    addi r4, r1, 0x80
    fsubs f5, f5, f4
    lfs f0, 0x200(r3)
    lfs f2, 0x210(r3)
    fsubs f4, f3, f0
    lfs f3, 0x208(r3)
    lfs f0, 0x1fc(r3)
    psq_l f1, 0x208(r3), 0, 0
    mr r3, r4
    fsubs f0, f3, f0
    stfs f2, 0x94(r1)
    fmr f2, f5
    stfs f4, 0x60(r1)
    stfs f0, 0x5c(r1)
    psq_st f1, 0x0(r5), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f5, 0x64(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x88(r1)
    bl fn_805F98D0
    addi r31, r1, 0x74
    bl fn_80680CF8
    lis r28, 0x4178
    lis r29, lbl_8074E008@ha
    addi r0, r28, 0x749f
    lfd f7, lbl_8074E008@l(r29)
    mulhw r0, r0, r3
    lfs f5, lbl_808859BC
    lfs f3, lbl_80885938
    lfs f4, 0x90c(r30)
    lfs f0, lbl_80885A10
    fmuls f3, f3, f4
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x13c(r1)
    lfd f6, 0x138(r1)
    fsubs f6, f6, f7
    fdivs f5, f6, f5
    fmuls f3, f3, f5
    fmadds f31, f0, f4, f3
    bl fn_80680CF8
    addi r0, r28, 0x749f
    lfs f4, 0x908(r30)
    mulhw r0, r0, r3
    lfs f3, lbl_80885A44
    lfs f0, lbl_808858E8
    lfd f7, lbl_8074E008@l(r29)
    fmuls f3, f3, f4
    lfs f5, lbl_808859BC
    srawi r0, r0, 8
    stfs f31, 0x78(r1)
    srwi r4, r0, 31
    add r0, r0, r4
    stfs f0, 0x7c(r1)
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x144(r1)
    lfd f6, 0x140(r1)
    fsubs f6, f6, f7
    fdivs f5, f6, f5
    fmsubs f5, f3, f5, f4
    stfs f5, 0x74(r1)
    lwz r0, 0x900(r30)
    srwi r3, r0, 31
    clrlwi r0, r0, 31
    xor r0, r0, r3
    subf. r0, r3, r0
    bne lbl_fn_803920C8_000001B0
    fneg f4, f0
    addi r3, r1, 0x50
    fneg f3, f31
    fneg f0, f5
    stfs f4, 0x58(r1)
    frsp f2, f4
    stfs f0, 0x50(r1)
    stfs f3, 0x54(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x7c(r1)
lbl_fn_803920C8_000001B0:
    lfs f2, 0x88(r1)
    lis r3, lbl_8074E008@ha
    lwz r6, 0x904(r30)
    addi r5, r1, 0x80
    lwz r4, 0x900(r30)
    fabs f3, f2
    xoris r0, r6, 0x8000
    stw r0, 0x144(r1)
    subf r4, r4, r6
    lfd f4, lbl_8074E008@l(r3)
    xoris r0, r4, 0x8000
    stw r0, 0x13c(r1)
    frsp f6, f3
    lfd f3, 0x140(r1)
    addi r28, r1, 0x68
    lfd f0, 0x138(r1)
    fsubs f3, f3, f4
    psq_l f1, 0x0(r5), 0, 0
    fsubs f5, f0, f4
    lfs f0, lbl_808859C8
    lfs f4, 0x74(r1)
    fcmpo cr0, f6, f0
    fdivs f5, f5, f3
    lfs f3, 0x78(r1)
    lfs f0, 0x7c(r1)
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x70(r1)
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    fmuls f0, f0, f5
    stfs f4, 0x74(r1)
    stfs f3, 0x78(r1)
    stfs f0, 0x7c(r1)
    bge lbl_fn_803920C8_0000025C
    lfs f3, 0x68(r1)
    lfs f0, lbl_808858E8
    fcmpo cr0, f3, f0
    ble lbl_fn_803920C8_00000250
    lfs f0, lbl_808859CC
    b lbl_fn_803920C8_00000254
lbl_fn_803920C8_00000250:
    lfs f0, lbl_808859D0
lbl_fn_803920C8_00000254:
    stfs f0, 0x48(r1)
    b lbl_fn_803920C8_00000270
lbl_fn_803920C8_0000025C:
    frsp f2, f2
    lfs f1, 0x68(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_803920C8_00000270:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x98
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808858E8
    addi r4, r1, 0x38
    lfs f30, 0xa0(r1)
    mr r5, r4
    lfs f31, 0x9c(r1)
    addi r3, r1, 0xc8
    lfs f13, 0x98(r1)
    lfs f12, 0xb0(r1)
    lfs f11, 0xac(r1)
    lfs f10, 0xa8(r1)
    lfs f9, 0xc0(r1)
    lfs f8, 0xbc(r1)
    lfs f7, 0xb8(r1)
    lfs f6, 0xc4(r1)
    lfs f5, 0xb4(r1)
    lfs f4, 0xa4(r1)
    lfs f0, lbl_808858F8
    psq_l f1, 0x0(r28), 0, 0
    lfs f2, 0x70(r1)
    stfs f3, 0xf8(r1)
    stfs f3, 0xfc(r1)
    stfs f3, 0x100(r1)
    stfs f0, 0x104(r1)
    stfs f13, 0x8(r1)
    stfs f31, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f13, 0xc8(r1)
    stfs f31, 0xcc(r1)
    stfs f30, 0xd0(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xd8(r1)
    stfs f11, 0xdc(r1)
    stfs f12, 0xe0(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0xe8(r1)
    stfs f8, 0xec(r1)
    stfs f9, 0xf0(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0xd4(r1)
    stfs f5, 0xe4(r1)
    stfs f6, 0xf4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_808859C8
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_803920C8_0000038C
    lfs f3, 0x3c(r1)
    lfs f0, lbl_808858E8
    fcmpo cr0, f3, f0
    ble lbl_fn_803920C8_0000037C
    lfs f0, lbl_808859CC
    b lbl_fn_803920C8_00000380
lbl_fn_803920C8_0000037C:
    lfs f0, lbl_808859D0
lbl_fn_803920C8_00000380:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_803920C8_000003A0
lbl_fn_803920C8_0000038C:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_803920C8_000003A0:
    addi r3, r1, 0x44
    lfs f2, lbl_808858E8
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x108
    psq_st f1, 0x0(r28), 0, 0
    li r4, 0x79
    lfs f1, 0x6c(r1)
    stfs f2, 0x4c(r1)
    stfs f2, 0x70(r1)
    bl fn_805F8E70
    addi r4, r1, 0x74
    addi r3, r1, 0x108
    mr r5, r4
    bl fn_805F93C0
    lfs f3, 0x8c(r1)
    addi r3, r1, 0x8c
    lfs f0, 0x74(r1)
    lfs f5, 0x90(r1)
    fadds f6, f3, f0
    lfs f4, 0x78(r1)
    lfs f3, 0x94(r1)
    fadds f4, f5, f4
    lfs f0, 0x7c(r1)
    stfs f6, 0x8c(r1)
    fadds f2, f3, f0
    stfs f4, 0x90(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x94(r1)
    psq_st f1, 0x208(r30), 0, 0
    stfs f2, 0x210(r30)
lbl_fn_803920C8_00000418:
    lwz r0, 0x184(r1)
    psq_l f31, 0x178(r1), 0, 0
    lfd f31, 0x170(r1)
    psq_l f30, 0x168(r1), 0, 0
    lfd f30, 0x160(r1)
    lwz r31, 0x15c(r1)
    lwz r30, 0x158(r1)
    lwz r29, 0x154(r1)
    lwz r28, 0x150(r1)
    mtlr r0
    addi r1, r1, 0x180
    blr
}

asm void fn_80392510(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    lis r6, 0x4330
    lis r5, lbl_8074E008@ha
    stw r0, 0x94(r1)
    lfd f4, lbl_8074E008@l(r5)
    stfd f31, 0x80(r1)
    lfs f5, lbl_808858E8
    psq_st f31, 0x88(r1), 0, 0
    stw r31, 0x7c(r1)
    mr r31, r3
    stw r30, 0x78(r1)
    addi r30, r1, 0x50
    lwz r8, 0x914(r3)
    lwz r7, 0x918(r3)
    xoris r4, r8, 0x8000
    stw r6, 0x60(r1)
    xoris r0, r7, 0x8000
    stw r4, 0x64(r1)
    lfd f0, 0x60(r1)
    stw r6, 0x68(r1)
    fsubs f3, f0, f4
    stw r0, 0x6c(r1)
    lfd f0, 0x68(r1)
    fsubs f0, f0, f4
    fdivs f0, f3, f0
    fcmpo cr0, f0, f5
    ble lbl_fn_80392510_000004D4
    stw r4, 0x64(r1)
    stw r0, 0x6c(r1)
    lfd f3, 0x60(r1)
    lfd f0, 0x68(r1)
    fsubs f3, f3, f4
    fsubs f0, f0, f4
    fdivs f5, f3, f0
lbl_fn_80392510_000004D4:
    lfs f6, lbl_808858F8
    fcmpo cr0, f5, f6
    bge lbl_fn_80392510_00000534
    xoris r3, r8, 0x8000
    stw r3, 0x64(r1)
    xoris r0, r7, 0x8000
    lis r4, lbl_8074E008@ha
    stw r0, 0x6c(r1)
    lfd f4, lbl_8074E008@l(r4)
    lfd f3, 0x60(r1)
    lfd f0, 0x68(r1)
    fsubs f3, f3, f4
    lfs f6, lbl_808858E8
    fsubs f0, f0, f4
    fdivs f0, f3, f0
    fcmpo cr0, f0, f6
    ble lbl_fn_80392510_00000534
    stw r3, 0x64(r1)
    stw r0, 0x6c(r1)
    lfd f3, 0x60(r1)
    lfd f0, 0x68(r1)
    fsubs f3, f3, f4
    fsubs f0, f0, f4
    fdivs f6, f3, f0
lbl_fn_80392510_00000534:
    lfs f0, lbl_808858EC
    fmuls f1, f0, f6
    bl fn_8068A850
    frsp f4, f1
    lfs f3, lbl_808858F8
    lbz r0, 0x910(r31)
    lfs f0, lbl_808859E4
    fsubs f3, f3, f4
    cmpwi r0, 0x0
    fmuls f9, f0, f3
    beq lbl_fn_80392510_000005E4
    lbz r0, 0x911(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80392510_000005E4
    lfs f3, 0x924(r31)
    addi r3, r1, 0x8
    lfs f5, 0x930(r31)
    addi r4, r31, 0x928
    lfs f0, 0x920(r31)
    fsubs f6, f3, f5
    lfs f4, 0x92c(r31)
    lfs f3, 0x91c(r31)
    fsubs f7, f0, f4
    lfs f0, 0x928(r31)
    fmuls f8, f6, f9
    fsubs f3, f3, f0
    stfs f7, 0x24(r1)
    fmuls f7, f7, f9
    stfs f3, 0x20(r1)
    fadds f2, f8, f5
    fmuls f3, f3, f9
    fadds f4, f7, f4
    stfs f6, 0x28(r1)
    fadds f0, f3, f0
    stfs f4, 0xc(r1)
    stfs f0, 0x8(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f3, 0x2c(r1)
    stfs f7, 0x30(r1)
    stfs f8, 0x34(r1)
    stfs f2, 0x10(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x930(r31)
    b lbl_fn_80392510_00000658
lbl_fn_80392510_000005E4:
    lfs f3, 0x924(r31)
    addi r3, r1, 0x14
    lfs f5, 0x210(r31)
    addi r4, r31, 0x928
    lfs f0, 0x920(r31)
    fsubs f6, f3, f5
    lfs f4, 0x20c(r31)
    lfs f3, 0x91c(r31)
    fsubs f7, f0, f4
    lfs f0, 0x208(r31)
    fmuls f8, f6, f9
    fsubs f3, f3, f0
    stfs f7, 0x3c(r1)
    fmuls f7, f7, f9
    stfs f3, 0x38(r1)
    fadds f2, f8, f5
    fmuls f3, f3, f9
    fadds f4, f7, f4
    stfs f6, 0x40(r1)
    fadds f0, f3, f0
    stfs f4, 0x18(r1)
    stfs f0, 0x14(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f3, 0x44(r1)
    stfs f7, 0x48(r1)
    stfs f8, 0x4c(r1)
    stfs f2, 0x1c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x930(r31)
lbl_fn_80392510_00000658:
    lwz r6, 0x918(r31)
    lis r4, lbl_8074E008@ha
    lwz r7, 0x914(r31)
    addi r5, r31, 0x928
    xoris r0, r6, 0x8000
    stw r0, 0x6c(r1)
    xoris r3, r7, 0x8000
    psq_l f1, 0x0(r5), 0, 0
    stw r3, 0x64(r1)
    lfd f4, lbl_8074E008@l(r4)
    lfd f3, 0x60(r1)
    lfd f0, 0x68(r1)
    fsubs f3, f3, f4
    lfs f2, 0x930(r31)
    fsubs f0, f0, f4
    lfs f5, lbl_808858E8
    psq_st f1, 0x0(r30), 0, 0
    lfs f31, 0x244(r31)
    fdivs f0, f3, f0
    stfs f2, 0x58(r1)
    psq_st f1, 0x208(r31), 0, 0
    stfs f2, 0x210(r31)
    fcmpo cr0, f0, f5
    ble lbl_fn_80392510_000006D4
    stw r3, 0x64(r1)
    stw r0, 0x6c(r1)
    lfd f3, 0x60(r1)
    lfd f0, 0x68(r1)
    fsubs f3, f3, f4
    fsubs f0, f0, f4
    fdivs f5, f3, f0
lbl_fn_80392510_000006D4:
    lfs f6, lbl_808858F8
    fcmpo cr0, f5, f6
    bge lbl_fn_80392510_00000734
    xoris r3, r7, 0x8000
    stw r3, 0x64(r1)
    xoris r0, r6, 0x8000
    lis r4, lbl_8074E008@ha
    stw r0, 0x6c(r1)
    lfd f4, lbl_8074E008@l(r4)
    lfd f3, 0x60(r1)
    lfd f0, 0x68(r1)
    fsubs f3, f3, f4
    lfs f6, lbl_808858E8
    fsubs f0, f0, f4
    fdivs f0, f3, f0
    fcmpo cr0, f0, f6
    ble lbl_fn_80392510_00000734
    stw r3, 0x64(r1)
    stw r0, 0x6c(r1)
    lfd f3, 0x60(r1)
    lfd f0, 0x68(r1)
    fsubs f3, f3, f4
    fsubs f0, f0, f4
    fdivs f6, f3, f0
lbl_fn_80392510_00000734:
    lfs f0, lbl_808858EC
    fmuls f1, f0, f6
    bl fn_8068A850
    frsp f4, f1
    lfs f3, lbl_808858F8
    lbz r0, 0x910(r31)
    lfs f0, lbl_808859E4
    fsubs f3, f3, f4
    cmpwi r0, 0x0
    fmuls f4, f0, f3
    beq lbl_fn_80392510_000007A8
    lbz r0, 0x911(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80392510_000007A8
    lfs f3, 0x934(r31)
    lfs f0, lbl_808858E8
    fcmpo cr0, f3, f0
    ble lbl_fn_80392510_00000794
    lfs f0, 0x934(r31)
    lfs f3, 0x938(r31)
    fsubs f0, f0, f3
    fmadds f0, f4, f0, f3
    stfs f0, 0x938(r31)
    b lbl_fn_80392510_000007D0
lbl_fn_80392510_00000794:
    lfs f3, 0x938(r31)
    fsubs f0, f31, f3
    fmadds f0, f4, f0, f3
    stfs f0, 0x938(r31)
    b lbl_fn_80392510_000007D0
lbl_fn_80392510_000007A8:
    lfs f3, 0x934(r31)
    lfs f0, lbl_808858E8
    fcmpo cr0, f3, f0
    ble lbl_fn_80392510_000007CC
    lfs f0, 0x934(r31)
    fsubs f0, f0, f31
    fmadds f0, f4, f0, f31
    stfs f0, 0x938(r31)
    b lbl_fn_80392510_000007D0
lbl_fn_80392510_000007CC:
    stfs f31, 0x938(r31)
lbl_fn_80392510_000007D0:
    lfs f0, 0x938(r31)
    stfs f0, 0x244(r31)
    psq_l f31, 0x88(r1), 0, 0
    lfd f31, 0x80(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_803928C0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    lfs f3, 0x204(r3)
    addi r4, r1, 0x14
    lfs f0, 0x944(r3)
    addi r5, r1, 0x8
    lfs f5, 0x200(r3)
    fadds f6, f3, f0
    lfs f4, 0x940(r3)
    lfs f3, 0x1fc(r3)
    fadds f7, f5, f4
    lfs f0, 0x93c(r3)
    lfs f5, 0x210(r3)
    fadds f8, f3, f0
    lfs f4, 0x950(r3)
    lfs f3, 0x20c(r3)
    fadds f4, f5, f4
    lfs f0, 0x94c(r3)
    fmr f2, f6
    fadds f5, f3, f0
    stfs f7, 0x18(r1)
    lfs f3, 0x208(r3)
    lfs f0, 0x948(r3)
    stfs f8, 0x14(r1)
    fadds f3, f3, f0
    lfs f7, 0x244(r3)
    lfs f0, 0x954(r3)
    stfs f2, 0x204(r3)
    fmr f2, f4
    psq_l f1, 0x0(r4), 0, 0
    fadds f0, f0, f7
    stfs f3, 0x8(r1)
    stfs f5, 0xc(r1)
    psq_st f1, 0x1fc(r3), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    stfs f6, 0x1c(r1)
    stfs f4, 0x10(r1)
    psq_st f1, 0x208(r3), 0, 0
    stfs f2, 0x210(r3)
    stfs f0, 0x244(r3)
    addi r1, r1, 0x20
    blr
}

asm void fn_80392964(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r30, r6
    mr r31, r7
    mr r4, r27
    addi r3, r3, 0x1f4
    bl fn_80392A04
    cmpwi r30, 0x0
    beq lbl_fn_80392964_000008DC
    mr r3, r27
    bl fn_80392510
lbl_fn_80392964_000008DC:
    cmpwi r31, 0x0
    beq lbl_fn_80392964_000008EC
    mr r3, r27
    bl fn_80392FE8
lbl_fn_80392964_000008EC:
    cmpwi r28, 0x0
    beq lbl_fn_80392964_000008FC
    mr r3, r27
    bl fn_803918EC
lbl_fn_80392964_000008FC:
    cmpwi r29, 0x0
    beq lbl_fn_80392964_0000090C
    mr r3, r27
    bl fn_803920C8
lbl_fn_80392964_0000090C:
    mr r3, r27
    bl fn_803928C0
    addi r3, r27, 0x1f4
    bl fn_8004B378
    bl fn_8008B964
    addi r4, r27, 0x1f4
    bl fn_80116BD4
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80392A04(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    stfd f30, 0x30(r1)
    psq_st f30, 0x38(r1), 0, 0
    stfd f29, 0x20(r1)
    psq_st f29, 0x28(r1), 0, 0
    stfd f28, 0x10(r1)
    psq_st f28, 0x18(r1), 0, 0
    psq_l f1, 0x8(r4), 0, 0
    lfs f2, 0x10(r4)
    psq_st f1, 0x8(r3), 0, 0
    psq_l f1, 0x14(r4), 0, 0
    stfs f2, 0x10(r3)
    lfs f2, 0x1c(r4)
    psq_st f1, 0x14(r3), 0, 0
    psq_l f1, 0x20(r4), 0, 0
    stfs f2, 0x1c(r3)
    lfs f2, 0x28(r4)
    psq_st f1, 0x20(r3), 0, 0
    psq_l f1, 0x2c(r4), 0, 0
    stfs f2, 0x28(r3)
    lfs f2, 0x34(r4)
    psq_st f1, 0x2c(r3), 0, 0
    psq_l f1, 0x58(r4), 0, 0
    stfs f2, 0x34(r3)
    psq_l f2, 0x60(r4), 0, 0
    psq_l f3, 0x68(r4), 0, 0
    psq_l f4, 0x70(r4), 0, 0
    psq_l f5, 0x78(r4), 0, 0
    psq_l f6, 0x80(r4), 0, 0
    psq_st f1, 0x58(r3), 0, 0
    lwz r5, 0x0(r4)
    psq_st f2, 0x60(r3), 0, 0
    lwz r0, 0x4(r4)
    psq_st f3, 0x68(r3), 0, 0
    lfs f28, 0x38(r4)
    psq_st f4, 0x70(r3), 0, 0
    lfs f29, 0x3c(r4)
    psq_st f5, 0x78(r3), 0, 0
    lfs f30, 0x40(r4)
    psq_st f6, 0x80(r3), 0, 0
    lfs f31, 0x44(r4)
    lfs f13, 0x48(r4)
    lfs f12, 0x4c(r4)
    lfs f11, 0x50(r4)
    lfs f10, 0x54(r4)
    psq_l f1, 0x88(r4), 0, 0
    psq_l f2, 0x90(r4), 0, 0
    psq_l f3, 0x98(r4), 0, 0
    psq_l f4, 0xa0(r4), 0, 0
    psq_l f5, 0xa8(r4), 0, 0
    psq_l f6, 0xb0(r4), 0, 0
    psq_l f7, 0xb8(r4), 0, 0
    psq_l f8, 0xc0(r4), 0, 0
    lfs f9, 0xc8(r4)
    lfs f0, 0xcc(r4)
    stw r5, 0x0(r3)
    stw r0, 0x4(r3)
    stfs f28, 0x38(r3)
    stfs f29, 0x3c(r3)
    stfs f30, 0x40(r3)
    stfs f31, 0x44(r3)
    stfs f13, 0x48(r3)
    stfs f12, 0x4c(r3)
    stfs f11, 0x50(r3)
    stfs f10, 0x54(r3)
    psq_st f1, 0x88(r3), 0, 0
    psq_st f2, 0x90(r3), 0, 0
    psq_st f3, 0x98(r3), 0, 0
    psq_st f4, 0xa0(r3), 0, 0
    psq_st f5, 0xa8(r3), 0, 0
    psq_st f6, 0xb0(r3), 0, 0
    psq_st f7, 0xb8(r3), 0, 0
    psq_st f8, 0xc0(r3), 0, 0
    stfs f9, 0xc8(r3)
    stfs f0, 0xcc(r3)
    psq_l f1, 0xd0(r4), 0, 0
    addi r6, r4, 0x17c
    psq_l f2, 0xd8(r4), 0, 0
    addi r7, r3, 0x17c
    psq_st f1, 0xd0(r3), 0, 0
    addi r9, r3, 0x194
    psq_l f1, 0x100(r4), 0, 0
    addi r8, r4, 0x194
    psq_st f2, 0xd8(r3), 0, 0
    addi r0, r3, 0x1f4
    psq_l f2, 0x108(r4), 0, 0
    psq_st f1, 0x100(r3), 0, 0
    psq_l f1, 0x13c(r4), 0, 0
    psq_st f2, 0x108(r3), 0, 0
    lfs f2, 0x144(r4)
    psq_st f1, 0x13c(r3), 0, 0
    psq_l f1, 0x14c(r4), 0, 0
    stfs f2, 0x144(r3)
    lfs f2, 0x154(r4)
    psq_st f1, 0x14c(r3), 0, 0
    psq_l f1, 0x15c(r4), 0, 0
    stfs f2, 0x154(r3)
    lfs f2, 0x164(r4)
    psq_st f1, 0x15c(r3), 0, 0
    psq_l f1, 0x16c(r4), 0, 0
    stfs f2, 0x164(r3)
    lfs f2, 0x174(r4)
    psq_st f1, 0x16c(r3), 0, 0
    psq_l f3, 0xe0(r4), 0, 0
    stfs f2, 0x174(r3)
    psq_l f4, 0xe8(r4), 0, 0
    psq_l f5, 0xf0(r4), 0, 0
    psq_l f6, 0xf8(r4), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    lfs f2, 0x184(r4)
    psq_st f3, 0xe0(r3), 0, 0
    psq_l f3, 0x110(r4), 0, 0
    psq_st f4, 0xe8(r3), 0, 0
    psq_l f4, 0x118(r4), 0, 0
    psq_st f5, 0xf0(r3), 0, 0
    psq_l f5, 0x120(r4), 0, 0
    psq_st f6, 0xf8(r3), 0, 0
    psq_l f6, 0x128(r4), 0, 0
    psq_st f1, 0x0(r7), 0, 0
    lwz r5, 0x130(r4)
    stfs f2, 0x184(r3)
    lfs f13, 0x134(r4)
    lfs f12, 0x138(r4)
    lfs f11, 0x148(r4)
    lfs f10, 0x158(r4)
    lfs f9, 0x168(r4)
    lfs f0, 0x178(r4)
    psq_l f1, 0xc(r6), 0, 0
    lfs f2, 0x190(r4)
    psq_st f3, 0x110(r3), 0, 0
    psq_st f4, 0x118(r3), 0, 0
    psq_st f5, 0x120(r3), 0, 0
    psq_st f6, 0x128(r3), 0, 0
    stw r5, 0x130(r3)
    stfs f13, 0x134(r3)
    stfs f12, 0x138(r3)
    stfs f11, 0x148(r3)
    stfs f10, 0x158(r3)
    stfs f9, 0x168(r3)
    stfs f0, 0x178(r3)
    psq_st f1, 0xc(r7), 0, 0
    stfs f2, 0x190(r3)
lbl_fn_80392A04_00000B7C:
    psq_l f1, 0x0(r8), 0, 0
    psq_st f1, 0x0(r9), 0, 0
    lfs f2, 0x8(r8)
    stfs f2, 0x8(r9)
    lfs f0, 0xc(r8)
    addi r8, r8, 0x10
    stfs f0, 0xc(r9)
    addi r9, r9, 0x10
    cmplw r9, r0
    blt lbl_fn_80392A04_00000B7C
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    psq_l f30, 0x38(r1), 0, 0
    lfd f30, 0x30(r1)
    psq_l f29, 0x28(r1), 0, 0
    lfd f29, 0x20(r1)
    psq_l f28, 0x18(r1), 0, 0
    lfd f28, 0x10(r1)
    addi r1, r1, 0x50
    blr
}

asm void fn_80392C94(void)
{
    nofralloc
    addi r5, r3, 0x80c
    lfs f2, 0x814(r3)
    psq_l f1, 0x0(r5), 0, 0
    addi r7, r3, 0x818
    lwz r6, 0x7fc(r3)
    psq_st f1, 0xc(r4), 0, 0
    lwz r5, 0x800(r3)
    stfs f2, 0x14(r4)
    lwz r0, 0x808(r3)
    psq_l f1, 0x0(r7), 0, 0
    lfs f2, 0x820(r3)
    lfs f0, 0x830(r3)
    stw r6, 0x0(r4)
    stw r5, 0x4(r4)
    stw r0, 0x8(r4)
    psq_st f1, 0x18(r4), 0, 0
    stfs f2, 0x20(r4)
    stfs f0, 0x24(r4)
    blr
}

asm void fn_80392CE0(void)
{
    nofralloc
    lfs f2, 0x14(r4)
    addi r5, r3, 0x80c
    psq_l f1, 0xc(r4), 0, 0
    addi r7, r3, 0x818
    psq_st f1, 0x0(r5), 0, 0
    lwz r6, 0x0(r4)
    stfs f2, 0x814(r3)
    lwz r5, 0x4(r4)
    lwz r0, 0x8(r4)
    psq_l f1, 0x18(r4), 0, 0
    lfs f2, 0x20(r4)
    lfs f0, 0x24(r4)
    stw r6, 0x7fc(r3)
    stw r5, 0x800(r3)
    stw r0, 0x808(r3)
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0x820(r3)
    stfs f0, 0x830(r3)
    blr
}

asm void fn_80392D2C(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    stfd f30, 0x30(r1)
    psq_st f30, 0x38(r1), 0, 0
    stfd f29, 0x20(r1)
    psq_st f29, 0x28(r1), 0, 0
    stfd f28, 0x10(r1)
    psq_st f28, 0x18(r1), 0, 0
    fmr f0, f1
    lfs f2, 0x10(r4)
    stfs f2, 0xa30(r3)
    addi r6, r3, 0xa28
    psq_l f1, 0x8(r4), 0, 0
    addi r9, r3, 0xa34
    psq_st f1, 0x0(r6), 0, 0
    addi r8, r3, 0xa40
    psq_l f1, 0x14(r4), 0, 0
    addi r5, r3, 0xa4c
    lfs f2, 0x1c(r4)
    addi r7, r3, 0xa78
    psq_st f1, 0x0(r9), 0, 0
    addi r6, r3, 0xaa8
    psq_l f1, 0x20(r4), 0, 0
    stfs f2, 0xa3c(r3)
    lfs f2, 0x28(r4)
    psq_st f1, 0x0(r8), 0, 0
    psq_l f1, 0x2c(r4), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    psq_l f1, 0x58(r4), 0, 0
    stfs f2, 0xa48(r3)
    lfs f2, 0x34(r4)
    stfs f2, 0xa54(r3)
    psq_l f2, 0x60(r4), 0, 0
    psq_l f3, 0x68(r4), 0, 0
    psq_l f4, 0x70(r4), 0, 0
    psq_l f5, 0x78(r4), 0, 0
    psq_l f6, 0x80(r4), 0, 0
    psq_st f1, 0x0(r7), 0, 0
    lwz r5, 0x0(r4)
    psq_st f2, 0x8(r7), 0, 0
    lwz r0, 0x4(r4)
    psq_st f3, 0x10(r7), 0, 0
    lfs f28, 0x38(r4)
    psq_st f4, 0x18(r7), 0, 0
    lfs f29, 0x3c(r4)
    psq_st f5, 0x20(r7), 0, 0
    lfs f31, 0x40(r4)
    psq_st f6, 0x28(r7), 0, 0
    lfs f30, 0x44(r4)
    lfs f13, 0x48(r4)
    lfs f12, 0x4c(r4)
    lfs f11, 0x50(r4)
    lfs f10, 0x54(r4)
    psq_l f1, 0x88(r4), 0, 0
    psq_l f2, 0x90(r4), 0, 0
    psq_l f3, 0x98(r4), 0, 0
    psq_l f4, 0xa0(r4), 0, 0
    psq_l f5, 0xa8(r4), 0, 0
    psq_l f6, 0xb0(r4), 0, 0
    psq_l f7, 0xb8(r4), 0, 0
    psq_l f8, 0xc0(r4), 0, 0
    lfs f9, 0xc8(r4)
    stw r5, 0xa20(r3)
    stw r0, 0xa24(r3)
    stfs f28, 0xa58(r3)
    stfs f29, 0xa5c(r3)
    stfs f31, 0xa60(r3)
    stfs f30, 0xa64(r3)
    stfs f13, 0xa68(r3)
    stfs f12, 0xa6c(r3)
    stfs f11, 0xa70(r3)
    stfs f10, 0xa74(r3)
    psq_st f1, 0x0(r6), 0, 0
    psq_st f2, 0x8(r6), 0, 0
    psq_st f3, 0x10(r6), 0, 0
    psq_st f4, 0x18(r6), 0, 0
    psq_st f5, 0x20(r6), 0, 0
    psq_st f6, 0x28(r6), 0, 0
    psq_st f7, 0x30(r6), 0, 0
    psq_st f8, 0x38(r6), 0, 0
    stfs f9, 0xae8(r3)
    addi r5, r3, 0xaf0
    psq_l f1, 0xd0(r4), 0, 0
    addi r9, r3, 0xb20
    psq_l f2, 0xd8(r4), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    addi r8, r4, 0x17c
    psq_l f1, 0x100(r4), 0, 0
    addi r6, r9, 0x94
    psq_st f2, 0x8(r5), 0, 0
    addi r7, r4, 0x194
    psq_l f2, 0x108(r4), 0, 0
    addi r0, r9, 0xf4
    psq_st f1, 0x0(r9), 0, 0
    psq_l f1, 0x13c(r4), 0, 0
    psq_st f2, 0x8(r9), 0, 0
    lfs f2, 0x144(r4)
    psq_st f1, 0x3c(r9), 0, 0
    psq_l f1, 0x14c(r4), 0, 0
    stfs f2, 0xb64(r3)
    lfs f2, 0x154(r4)
    psq_st f1, 0x4c(r9), 0, 0
    psq_l f1, 0x15c(r4), 0, 0
    stfs f2, 0xb74(r3)
    lfs f2, 0x164(r4)
    psq_st f1, 0x5c(r9), 0, 0
    psq_l f1, 0x16c(r4), 0, 0
    stfs f2, 0xb84(r3)
    lfs f2, 0x174(r4)
    psq_st f1, 0x6c(r9), 0, 0
    psq_l f3, 0xe0(r4), 0, 0
    stfs f2, 0xb94(r3)
    psq_l f4, 0xe8(r4), 0, 0
    psq_l f5, 0xf0(r4), 0, 0
    psq_l f6, 0xf8(r4), 0, 0
    psq_l f1, 0x0(r8), 0, 0
    lfs f2, 0x184(r4)
    psq_st f3, 0x10(r5), 0, 0
    lfs f30, 0xcc(r4)
    psq_st f4, 0x18(r5), 0, 0
    psq_l f3, 0x110(r4), 0, 0
    psq_st f5, 0x20(r5), 0, 0
    psq_l f4, 0x118(r4), 0, 0
    psq_st f6, 0x28(r5), 0, 0
    psq_l f5, 0x120(r4), 0, 0
    psq_st f1, 0x7c(r9), 0, 0
    psq_l f6, 0x128(r4), 0, 0
    stfs f2, 0xba4(r3)
    lwz r5, 0x130(r4)
    lfs f31, 0x134(r4)
    lfs f13, 0x138(r4)
    lfs f12, 0x148(r4)
    lfs f11, 0x158(r4)
    lfs f10, 0x168(r4)
    lfs f9, 0x178(r4)
    psq_l f1, 0xc(r8), 0, 0
    lfs f2, 0x190(r4)
    stfs f30, 0xaec(r3)
    psq_st f3, 0x10(r9), 0, 0
    psq_st f4, 0x18(r9), 0, 0
    psq_st f5, 0x20(r9), 0, 0
    psq_st f6, 0x28(r9), 0, 0
    stw r5, 0xb50(r3)
    stfs f31, 0xb54(r3)
    stfs f13, 0xb58(r3)
    stfs f12, 0xb68(r3)
    stfs f11, 0xb78(r3)
    stfs f10, 0xb88(r3)
    stfs f9, 0xb98(r3)
    psq_st f1, 0x88(r9), 0, 0
    stfs f2, 0xbb0(r3)
lbl_fn_80392D2C_00000EC4:
    psq_l f1, 0x0(r7), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    lfs f2, 0x8(r7)
    stfs f2, 0x8(r6)
    lfs f9, 0xc(r7)
    addi r7, r7, 0x10
    stfs f9, 0xc(r6)
    addi r6, r6, 0x10
    cmplw r6, r0
    blt lbl_fn_80392D2C_00000EC4
    lfs f9, lbl_808858F8
    stfs f9, 0xc14(r3)
    stfs f0, 0xc18(r3)
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    psq_l f30, 0x38(r1), 0, 0
    lfd f30, 0x30(r1)
    psq_l f29, 0x28(r1), 0, 0
    lfd f29, 0x20(r1)
    psq_l f28, 0x18(r1), 0, 0
    lfd f28, 0x10(r1)
    addi r1, r1, 0x50
    blr
}

asm void fn_80392FE8(void)
{
    nofralloc
    stwu r1, -0x160(r1)
    mflr r0
    lfs f3, lbl_808858E8
    stw r0, 0x164(r1)
    stfd f31, 0x150(r1)
    psq_st f31, 0x158(r1), 0, 0
    stfd f30, 0x140(r1)
    psq_st f30, 0x148(r1), 0, 0
    stfd f29, 0x130(r1)
    psq_st f29, 0x138(r1), 0, 0
    stfd f28, 0x120(r1)
    psq_st f28, 0x128(r1), 0, 0
    stfd f27, 0x110(r1)
    psq_st f27, 0x118(r1), 0, 0
    stfd f26, 0x100(r1)
    psq_st f26, 0x108(r1), 0, 0
    stfd f25, 0xf0(r1)
    psq_st f25, 0xf8(r1), 0, 0
    stfd f24, 0xe0(r1)
    psq_st f24, 0xe8(r1), 0, 0
    stfd f23, 0xd0(r1)
    psq_st f23, 0xd8(r1), 0, 0
    stfd f22, 0xc0(r1)
    psq_st f22, 0xc8(r1), 0, 0
    stfd f21, 0xb0(r1)
    psq_st f21, 0xb8(r1), 0, 0
    stfd f20, 0xa0(r1)
    psq_st f20, 0xa8(r1), 0, 0
    stfd f19, 0x90(r1)
    psq_st f19, 0x98(r1), 0, 0
    stfd f18, 0x80(r1)
    psq_st f18, 0x88(r1), 0, 0
    stw r31, 0x7c(r1)
    mr r31, r3
    lfs f0, 0xc14(r3)
    fcmpo cr0, f0, f3
    ble lbl_fn_80392FE8_00001140
    lfs f4, 0xa48(r3)
    lfs f6, 0x21c(r3)
    lfs f3, 0xa44(r3)
    fsubs f22, f4, f6
    lfs f5, 0x218(r3)
    lfs f4, 0xa40(r3)
    fsubs f23, f3, f5
    lfs f3, 0x214(r3)
    lfs f12, 0x204(r3)
    fsubs f24, f4, f3
    lfs f4, 0xa30(r3)
    fmuls f25, f22, f0
    fsubs f9, f4, f12
    lfs f4, 0xa2c(r3)
    fmuls f27, f24, f0
    fmuls f26, f23, f0
    lfs f11, 0x200(r3)
    fadds f28, f25, f6
    fsubs f8, f4, f11
    lfs f18, 0x1fc(r3)
    fmuls f7, f9, f0
    fadds f10, f27, f3
    lfs f3, 0xa28(r3)
    fmuls f6, f8, f0
    fsubs f13, f3, f18
    lfs f19, 0x210(r3)
    fadds f4, f7, f12
    fadds f3, f6, f11
    lfs f11, 0xa34(r3)
    fadds f31, f26, f5
    lfs f5, 0xa3c(r3)
    lfs f21, 0x208(r3)
    fsubs f29, f5, f19
    stfs f13, 0x44(r1)
    fmuls f5, f13, f0
    lfs f12, 0xa38(r3)
    lfs f20, 0x20c(r3)
    fsubs f13, f11, f21
    fsubs f30, f12, f20
    stfs f10, 0x50(r1)
    fmuls f12, f29, f0
    fmuls f10, f13, f0
    stfs f28, 0x58(r1)
    fmuls f11, f30, f0
    fadds f28, f12, f19
    stfs f31, 0x54(r1)
    fadds f19, f10, f21
    fadds f18, f5, f18
    lfs f21, 0xa70(r3)
    lfs f31, 0x244(r3)
    stfs f8, 0x48(r1)
    fadds f20, f11, f20
    fsubs f8, f21, f31
    addi r3, r1, 0x50
    stfs f9, 0x4c(r1)
    mr r4, r3
    fmadds f31, f0, f8, f31
    stfs f5, 0x38(r1)
    stfs f6, 0x3c(r1)
    stfs f7, 0x40(r1)
    stfs f18, 0x68(r1)
    stfs f3, 0x6c(r1)
    stfs f4, 0x70(r1)
    stfs f13, 0x2c(r1)
    stfs f30, 0x30(r1)
    stfs f29, 0x34(r1)
    stfs f10, 0x20(r1)
    stfs f11, 0x24(r1)
    stfs f12, 0x28(r1)
    stfs f19, 0x5c(r1)
    stfs f20, 0x60(r1)
    stfs f28, 0x64(r1)
    stfs f24, 0x14(r1)
    stfs f23, 0x18(r1)
    stfs f22, 0x1c(r1)
    stfs f27, 0x8(r1)
    stfs f26, 0xc(r1)
    stfs f25, 0x10(r1)
    bl fn_805F98D0
    addi r3, r1, 0x68
    lfs f2, 0x70(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x5c
    stfs f2, 0x204(r31)
    frsp f2, f28
    lfs f3, 0xc14(r31)
    addi r4, r1, 0x50
    psq_st f1, 0x1fc(r31), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    lfs f0, 0xc18(r31)
    psq_st f1, 0x208(r31), 0, 0
    fsubs f0, f3, f0
    stfs f2, 0x210(r31)
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x58(r1)
    stfs f2, 0x21c(r31)
    psq_st f1, 0x214(r31), 0, 0
    stfs f31, 0x244(r31)
    stfs f0, 0xc14(r31)
lbl_fn_80392FE8_00001140:
    lwz r0, 0x164(r1)
    psq_l f31, 0x158(r1), 0, 0
    lfd f31, 0x150(r1)
    psq_l f30, 0x148(r1), 0, 0
    lfd f30, 0x140(r1)
    psq_l f29, 0x138(r1), 0, 0
    lfd f29, 0x130(r1)
    psq_l f28, 0x128(r1), 0, 0
    lfd f28, 0x120(r1)
    psq_l f27, 0x118(r1), 0, 0
    lfd f27, 0x110(r1)
    psq_l f26, 0x108(r1), 0, 0
    lfd f26, 0x100(r1)
    psq_l f25, 0xf8(r1), 0, 0
    lfd f25, 0xf0(r1)
    psq_l f24, 0xe8(r1), 0, 0
    lfd f24, 0xe0(r1)
    psq_l f23, 0xd8(r1), 0, 0
    lfd f23, 0xd0(r1)
    psq_l f22, 0xc8(r1), 0, 0
    lfd f22, 0xc0(r1)
    psq_l f21, 0xb8(r1), 0, 0
    lfd f21, 0xb0(r1)
    psq_l f20, 0xa8(r1), 0, 0
    lfd f20, 0xa0(r1)
    psq_l f19, 0x98(r1), 0, 0
    lfd f19, 0x90(r1)
    psq_l f18, 0x88(r1), 0, 0
    lfd f18, 0x80(r1)
    lwz r31, 0x7c(r1)
    mtlr r0
    addi r1, r1, 0x160
    blr
}

asm void fn_8039328C(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    stw r31, 0x11c(r1)
    stw r30, 0x118(r1)
    stw r29, 0x114(r1)
    mr r29, r3
    lwz r0, 0x7f0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8039328C_000012C0
    lis r31, lbl_8074E210@ha
    lwz r30, lbl_8087EEB0
    addi r31, r31, lbl_8074E210@l
    lfs f1, 0x8(r29)
    lfs f2, 0xc(r29)
    addi r3, r1, 0x8
    lfs f3, 0x10(r29)
    addi r4, r31, 0x1f0
    crset 6
    bl sprintf
    lfs f3, lbl_808858E8
    mr r3, r30
    lfs f4, lbl_808858F4
    addi r4, r1, 0x8
    fmr f6, f3
    lfs f1, lbl_80885988
    fmr f5, f4
    lfs f2, lbl_80885974
    li r5, -0x1
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    bl fn_800616C0
    lfs f1, 0x14(r29)
    addi r3, r1, 0x8
    lfs f2, 0x18(r29)
    addi r4, r31, 0x20d
    lfs f3, 0x1c(r29)
    crset 6
    bl sprintf
    lfs f3, lbl_808858E8
    mr r3, r30
    lfs f4, lbl_808858F4
    addi r4, r1, 0x8
    fmr f6, f3
    lfs f1, lbl_80885988
    fmr f5, f4
    lfs f2, lbl_80885ACC
    li r5, -0x1
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    bl fn_800616C0
    lwz r0, 0x7fc(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8039328C_000012C0
    lwz r5, lbl_8087F0A8
    mr r3, r30
    lfs f2, lbl_808858E8
    addi r4, r29, 0x8a4
    lfs f1, 0x8c(r5)
    li r5, -0x100
    bl fn_80063D3C
lbl_fn_8039328C_000012C0:
    lwz r0, 0x124(r1)
    lwz r31, 0x11c(r1)
    lwz r30, 0x118(r1)
    lwz r29, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_803933A4(void)
{
    nofralloc
    lwz r0, 0x900(r3)
    li r5, 0x0
    lfs f0, lbl_808858E8
    srwi r4, r0, 31
    clrlwi r0, r0, 31
    xor r0, r0, r4
    stw r5, 0x834(r3)
    subf r0, r4, r0
    stb r5, 0x910(r3)
    stw r5, 0x914(r3)
    stw r5, 0x858(r3)
    stw r5, 0x838(r3)
    stw r5, 0x46c(r3)
    stw r0, 0x900(r3)
    stw r5, 0x904(r3)
    stfs f0, 0x908(r3)
    stfs f0, 0x90c(r3)
    stw r5, 0xc20(r3)
    stw r5, 0xc84(r3)
    blr
}

asm void fn_803933F4(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    lis r0, 0x4330
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    stw r31, 0x3c(r1)
    mr r31, r4
    stw r30, 0x38(r1)
    mr r30, r3
    stw r29, 0x34(r1)
    stw r28, 0x30(r1)
    stw r0, 0x18(r1)
    stw r0, 0x20(r1)
    bl fn_80680CF8
    lis r28, 0x4178
    lis r29, lbl_8074E008@ha
    addi r0, r28, 0x749f
    lfd f7, lbl_8074E008@l(r29)
    mulhw r0, r0, r3
    lfs f5, lbl_808859BC
    lfs f3, lbl_80885938
    lfs f4, 0xc(r31)
    lfs f0, lbl_80885A10
    fmuls f3, f3, f4
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x1c(r1)
    lfd f6, 0x18(r1)
    fsubs f6, f6, f7
    fdivs f5, f6, f5
    fmuls f3, f3, f5
    fmadds f31, f0, f4, f3
    bl fn_80680CF8
    addi r4, r28, 0x749f
    lfs f0, lbl_808858E8
    mulhw r5, r4, r3
    lwz r0, 0x0(r31)
    lfd f7, lbl_8074E008@l(r29)
    srwi r4, r0, 31
    lfs f5, lbl_808859BC
    clrlwi r0, r0, 31
    srawi r5, r5, 8
    xor r0, r0, r4
    srwi r6, r5, 31
    lfs f3, lbl_80885A44
    add r5, r5, r6
    lfs f4, 0x8(r31)
    mulli r5, r5, 0x3e9
    subf. r0, r4, r0
    fmuls f3, f3, f4
    stfs f31, 0x4(r30)
    subf r0, r5, r3
    stfs f0, 0x8(r30)
    xoris r0, r0, 0x8000
    stw r0, 0x24(r1)
    lfd f6, 0x20(r1)
    fsubs f6, f6, f7
    fdivs f5, f6, f5
    fmsubs f3, f3, f5, f4
    stfs f3, 0x0(r30)
    bne lbl_fn_803933F4_00001460
    fneg f0, f0
    addi r3, r1, 0x8
    fneg f4, f31
    fneg f3, f3
    stfs f0, 0x10(r1)
    frsp f2, f0
    stfs f3, 0x8(r1)
    stfs f4, 0xc(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x8(r30)
lbl_fn_803933F4_00001460:
    lwz r5, 0x4(r31)
    lis r3, lbl_8074E008@ha
    lwz r4, 0x0(r31)
    xoris r0, r5, 0x8000
    stw r0, 0x24(r1)
    subf r0, r4, r5
    lfd f6, lbl_8074E008@l(r3)
    xoris r0, r0, 0x8000
    stw r0, 0x1c(r1)
    lfd f0, 0x20(r1)
    lfd f3, 0x18(r1)
    fsubs f5, f0, f6
    lfs f4, 0x0(r30)
    fsubs f6, f3, f6
    lfs f3, 0x4(r30)
    lfs f0, 0x8(r30)
    fdivs f5, f6, f5
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    fmuls f0, f0, f5
    stfs f4, 0x0(r30)
    stfs f3, 0x4(r30)
    stfs f0, 0x8(r30)
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r28, 0x30(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_803935AC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r5, lbl_8087EFE8
    cmpwi r5, 0x0
    beq lbl_fn_803935AC_00001504
    li r0, 0x5
    stw r0, 0x34d0(r5)
lbl_fn_803935AC_00001504:
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    lwz r3, lbl_8087EFE8
    cmpwi r3, 0x0
    beq lbl_fn_803935AC_00001524
    li r0, 0x0
    stw r0, 0x34d0(r3)
lbl_fn_803935AC_00001524:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803935FC(void)
{
    nofralloc
    lis r5, lbl_8074EF78@ha
    slwi r0, r4, 2
    addi r5, r5, lbl_8074EF78@l
    lwzx r4, r5, r0
    b fn_803935AC
}

asm void fn_80393610(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r6
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    beq lbl_fn_80393610_000015B8
    lis r5, lbl_8074F8CC@ha
    li r3, 0x390
    addi r5, r5, lbl_8074F8CC@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_80393610_000015BC
    mr r4, r28
    mr r5, r29
    mr r6, r30
    mr r7, r31
    bl fn_803936A4
    b lbl_fn_80393610_000015BC
lbl_fn_80393610_000015B8:
    li r3, 0x0
lbl_fn_80393610_000015BC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803936A4(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    stmw r20, 0x70(r1)
    mr r21, r3
    mr r25, r4
    mr r22, r5
    mr r24, r6
    mr r20, r7
    bl fn_800D1D3C
    lis r3, lbl_8078B128@ha
    lis r4, fn_8006CA80@ha
    addi r3, r3, lbl_8078B128@l
    lis r5, fn_80014798@ha
    stw r3, 0x0(r21)
    addi r3, r21, 0x48
    addi r4, r4, fn_8006CA80@l
    addi r5, r5, fn_80014798@l
    li r6, 0x8
    li r7, 0x3
    bl fn_806958E0
    li r23, 0x0
    addi r7, r21, 0x80
    addi r0, r21, 0x13c
    li r6, -0x1
    stw r23, 0x60(r21)
    addi r3, r21, 0x64
    li r4, 0x0
    li r5, 0xc
    stw r23, 0x7c(r21)
    stw r23, 0x80(r21)
    stw r7, 0x84(r21)
    stw r25, 0x88(r21)
    stw r23, 0x8c(r21)
    stw r23, 0x9c(r21)
    stw r23, 0xa0(r21)
    stw r23, 0xa4(r21)
    stw r23, 0xd0(r21)
    stw r6, 0xd4(r21)
    stw r23, 0xd8(r21)
    stw r23, 0xdc(r21)
    stw r23, 0xe0(r21)
    stw r23, 0xe4(r21)
    stw r23, 0xe8(r21)
    stw r23, 0xec(r21)
    stw r23, 0xf0(r21)
    stw r23, 0xf4(r21)
    stw r23, 0xf8(r21)
    stw r23, 0xfc(r21)
    stw r23, 0x100(r21)
    stw r23, 0x104(r21)
    stw r23, 0x108(r21)
    stw r23, 0x10c(r21)
    stw r23, 0x110(r21)
    stw r23, 0x114(r21)
    stw r23, 0x118(r21)
    stw r23, 0x11c(r21)
    stw r23, 0x120(r21)
    stw r23, 0x124(r21)
    stw r23, 0x128(r21)
    stw r23, 0x12c(r21)
    stw r23, 0x130(r21)
    stw r23, 0x134(r21)
    stw r23, 0x138(r21)
    stw r23, 0x13c(r21)
    stw r0, 0x140(r21)
    stw r23, 0x144(r21)
    stw r23, 0x148(r21)
    stw r23, 0x14c(r21)
    stw r23, 0x150(r21)
    stw r23, 0x354(r21)
    stw r23, 0x358(r21)
    stw r23, 0x35c(r21)
    stw r23, 0x360(r21)
    stw r23, 0x364(r21)
    stw r23, 0x368(r21)
    stw r23, 0x36c(r21)
    stw r23, 0x370(r21)
    stw r23, 0x374(r21)
    stw r23, 0x378(r21)
    stw r23, 0x37c(r21)
    stw r23, 0x380(r21)
    stw r23, 0x384(r21)
    stw r23, 0x388(r21)
    stw r23, 0x38c(r21)
    bl memset
    lwz r12, 0x48(r21)
    addi r3, r21, 0x48
    mr r4, r22
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    cmpwi r24, 0x1
    bne lbl_fn_803936A4_000018D4
    lwz r3, lbl_8087F0A8
    lwz r0, 0x190(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803936A4_000018D4
    lis r3, lbl_8074F8CC@ha
    stw r23, 0x60(r1)
    addi r3, r3, lbl_8074F8CC@l
    addi r24, r1, 0x60
    addi r22, r3, 0x1
    stw r23, 0x64(r1)
    mr r3, r22
    stw r23, 0x68(r1)
    bl strlen
    mr r23, r3
    mr r3, r24
    mr r4, r23
    bl fn_80013DC4
    lbz r0, 0x34(r1)
    mr r3, r24
    stb r0, 0x30(r1)
    mr r6, r22
    add r7, r22, r23
    addi r8, r1, 0x30
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    lwz r0, 0x60(r1)
    srwi. r0, r0, 31
    bne lbl_fn_803936A4_000017D0
    addi r3, r1, 0x61
    b lbl_fn_803936A4_000017D4
lbl_fn_803936A4_000017D0:
    lwz r3, 0x68(r1)
lbl_fn_803936A4_000017D4:
    bl fn_8006AA20
    cmpwi r3, 0x0
    beq lbl_fn_803936A4_00001814
    cmpwi r20, 0x3
    beq lbl_fn_803936A4_00001814
    lwz r0, 0x60(r1)
    addi r3, r21, 0x50
    srwi. r0, r0, 31
    bne lbl_fn_803936A4_00001800
    addi r4, r1, 0x61
    b lbl_fn_803936A4_00001804
lbl_fn_803936A4_00001800:
    lwz r4, 0x68(r1)
lbl_fn_803936A4_00001804:
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
lbl_fn_803936A4_00001814:
    lwz r0, 0x60(r1)
    lis r3, lbl_8074F8CC@ha
    addi r3, r3, lbl_8074F8CC@l
    srwi. r0, r0, 31
    addi r22, r3, 0x1c
    bne lbl_fn_803936A4_00001838
    lbz r0, 0x60(r1)
    clrlwi r23, r0, 25
    b lbl_fn_803936A4_0000183C
lbl_fn_803936A4_00001838:
    lwz r23, 0x64(r1)
lbl_fn_803936A4_0000183C:
    lbz r0, 0x2c(r1)
    mr r3, r22
    stb r0, 0x28(r1)
    bl strlen
    mr r0, r3
    mr r5, r23
    mr r6, r22
    addi r3, r1, 0x60
    add r7, r22, r0
    addi r8, r1, 0x28
    li r4, 0x0
    bl fn_80013F78
    lwz r0, 0x60(r1)
    srwi. r0, r0, 31
    bne lbl_fn_803936A4_00001880
    addi r3, r1, 0x61
    b lbl_fn_803936A4_00001884
lbl_fn_803936A4_00001880:
    lwz r3, 0x68(r1)
lbl_fn_803936A4_00001884:
    bl fn_8006AA20
    cmpwi r3, 0x0
    beq lbl_fn_803936A4_000018BC
    lwz r0, 0x60(r1)
    addi r3, r21, 0x58
    srwi. r0, r0, 31
    bne lbl_fn_803936A4_000018A8
    addi r4, r1, 0x61
    b lbl_fn_803936A4_000018AC
lbl_fn_803936A4_000018A8:
    lwz r4, 0x68(r1)
lbl_fn_803936A4_000018AC:
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
lbl_fn_803936A4_000018BC:
    lwz r0, 0x60(r1)
    srwi. r0, r0, 31
    beq lbl_fn_803936A4_00001AFC
    lwz r3, 0x68(r1)
    bl dtor_80084684
    b lbl_fn_803936A4_00001AFC
lbl_fn_803936A4_000018D4:
    lis r3, lbl_8074F8CC@ha
    li r0, 0x1
    addi r3, r3, lbl_8074F8CC@l
    stw r0, 0x38(r1)
    lbz r28, 0x24(r1)
    addi r26, r3, 0x36
    lbz r29, 0x1c(r1)
    addi r25, r3, 0x3b
    lbz r30, 0x14(r1)
    addi r24, r1, 0x3d
    lbz r31, 0xc(r1)
    addi r23, r1, 0x55
    li r27, 0x0
    b lbl_fn_803936A4_00001AF4
lbl_fn_803936A4_0000190C:
    stw r27, 0x48(r1)
    mr r3, r22
    stw r27, 0x4c(r1)
    stw r27, 0x50(r1)
    bl strlen
    mr r20, r3
    addi r3, r1, 0x48
    mr r4, r20
    bl fn_80013DC4
    stb r28, 0x20(r1)
    mr r6, r22
    addi r3, r1, 0x48
    add r7, r22, r20
    addi r8, r1, 0x20
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    addi r3, r1, 0x54
    addi r4, r1, 0x48
    bl fn_8006B2D8
    lwz r0, 0x48(r1)
    srwi. r0, r0, 31
    beq lbl_fn_803936A4_00001970
    lwz r3, 0x50(r1)
    bl dtor_80084684
lbl_fn_803936A4_00001970:
    lwz r0, 0x54(r1)
    srwi. r0, r0, 31
    bne lbl_fn_803936A4_00001988
    lbz r0, 0x54(r1)
    clrlwi r20, r0, 25
    b lbl_fn_803936A4_0000198C
lbl_fn_803936A4_00001988:
    lwz r20, 0x58(r1)
lbl_fn_803936A4_0000198C:
    stb r29, 0x18(r1)
    mr r3, r26
    bl strlen
    mr r0, r3
    mr r4, r20
    mr r6, r26
    addi r3, r1, 0x54
    add r7, r26, r0
    addi r8, r1, 0x18
    li r5, 0x0
    bl fn_80013F78
    addi r3, r1, 0x3c
    addi r4, r1, 0x38
    bl fn_80393BEC
    lwz r0, 0x54(r1)
    srwi. r0, r0, 31
    bne lbl_fn_803936A4_000019DC
    lbz r0, 0x54(r1)
    clrlwi r4, r0, 25
    b lbl_fn_803936A4_000019E0
lbl_fn_803936A4_000019DC:
    lwz r4, 0x58(r1)
lbl_fn_803936A4_000019E0:
    lwz r0, 0x3c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_803936A4_000019FC
    lbz r0, 0x3c(r1)
    mr r6, r24
    clrlwi r0, r0, 25
    b lbl_fn_803936A4_00001A04
lbl_fn_803936A4_000019FC:
    lwz r6, 0x44(r1)
    lwz r0, 0x40(r1)
lbl_fn_803936A4_00001A04:
    stb r30, 0x10(r1)
    addi r3, r1, 0x54
    add r7, r6, r0
    addi r8, r1, 0x10
    li r5, 0x0
    bl fn_80013F78
    lwz r0, 0x3c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_803936A4_00001A30
    lwz r3, 0x44(r1)
    bl dtor_80084684
lbl_fn_803936A4_00001A30:
    lwz r0, 0x54(r1)
    srwi. r0, r0, 31
    bne lbl_fn_803936A4_00001A48
    lbz r0, 0x54(r1)
    clrlwi r20, r0, 25
    b lbl_fn_803936A4_00001A4C
lbl_fn_803936A4_00001A48:
    lwz r20, 0x58(r1)
lbl_fn_803936A4_00001A4C:
    stb r31, 0x8(r1)
    mr r3, r25
    bl strlen
    mr r0, r3
    mr r4, r20
    mr r6, r25
    addi r3, r1, 0x54
    add r7, r25, r0
    addi r8, r1, 0x8
    li r5, 0x0
    bl fn_80013F78
    lwz r0, 0x54(r1)
    srwi. r0, r0, 31
    bne lbl_fn_803936A4_00001A8C
    mr r3, r23
    b lbl_fn_803936A4_00001A90
lbl_fn_803936A4_00001A8C:
    lwz r3, 0x5c(r1)
lbl_fn_803936A4_00001A90:
    bl fn_8006AA20
    cmpwi r3, 0x0
    beq lbl_fn_803936A4_00001AD4
    lwz r0, 0x54(r1)
    lwz r3, 0x38(r1)
    srwi. r0, r0, 31
    slwi r0, r3, 3
    add r3, r21, r0
    addi r3, r3, 0x48
    bne lbl_fn_803936A4_00001AC0
    mr r4, r23
    b lbl_fn_803936A4_00001AC4
lbl_fn_803936A4_00001AC0:
    lwz r4, 0x5c(r1)
lbl_fn_803936A4_00001AC4:
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
lbl_fn_803936A4_00001AD4:
    lwz r0, 0x54(r1)
    srwi. r0, r0, 31
    beq lbl_fn_803936A4_00001AE8
    lwz r3, 0x5c(r1)
    bl dtor_80084684
lbl_fn_803936A4_00001AE8:
    lwz r3, 0x38(r1)
    addi r0, r3, 0x1
    stw r0, 0x38(r1)
lbl_fn_803936A4_00001AF4:
    cmpwi r0, 0x3
    blt lbl_fn_803936A4_0000190C
lbl_fn_803936A4_00001AFC:
    addi r3, r21, 0x154
    li r4, 0x0
    li r5, 0x200
    bl memset
    mr r3, r21
    lmw r20, 0x70(r1)
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}
