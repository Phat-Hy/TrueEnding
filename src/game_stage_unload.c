#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void dtor_80084684(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_8008BBD8(void);
extern void fn_80092814(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_8012476C(void);
extern void fn_801426A4(void);
extern void fn_801539E0(void);
extern void fn_80155DAC(void);
extern void fn_8016DA4C(void);
extern void fn_801750FC(void);
extern void fn_801B2EDC(void);
extern void fn_803EA77C(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9940(void);
extern void fn_80680770(void);
extern void fn_80682428(void);
extern void fn_80686EA4(void);
extern void fn_8068AEA4(void);
extern void fn_80695B00(void);

/* External data declarations */
extern u8 lbl_80739708[];
extern u8 lbl_80739F34[];
extern u8 lbl_8077DD20[];
extern u8 lbl_8077DDE8[];
extern u8 lbl_8077E490[];
extern u8 lbl_8077E508[];
extern u8 lbl_8077E580[];
extern u8 lbl_8077E5F8[];
extern u8 lbl_8077EF44[];
extern u8 lbl_807C7B98[];

/* Small data declarations */
extern u32 lbl_8087EFA8;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F0C0;
extern u32 lbl_8087F490;
extern u32 lbl_8087F498;
extern u32 lbl_80881FB8;
extern u32 lbl_80881FBC;
extern u32 lbl_80881FCC;
extern u32 lbl_80881FD0;
extern u32 lbl_80881FD4;
extern u32 lbl_80881FD8;
extern u32 lbl_80881FDC;
extern u32 lbl_80881FF4;
extern u32 lbl_8088200C;
extern u32 lbl_80882040;
extern u32 lbl_808820D0;
extern u32 lbl_808820D8;
extern u32 lbl_808820E8;

/* Function declarations */
void fn_80198C00(void);
void fn_80198C08(void);
void fn_8019905C(void);
void fn_80199334(void);
void fn_80199348(void);
void fn_801993EC(void);
void fn_80199450(void);
void fn_80199760(void);
void fn_80199788(void);
void fn_80199AFC(void);
void fn_8019A020(void);
void fn_8019A0C4(void);
void fn_8019A2A8(void);
void fn_8019A2D8(void);
void fn_8019A3F4(void);
void fn_8019A524(void);

asm void fn_80198C00(void)
{
    nofralloc
    addi r3, r3, 0x5b8
    blr
}

asm void fn_80198C08(void)
{
    nofralloc
    stwu r1, -0x140(r1)
    mflr r0
    lis r8, lbl_8077E5F8@ha
    psq_l f1, 0x0(r5), 0, 0
    stw r0, 0x144(r1)
    addi r8, r8, lbl_8077E5F8@l
    lfs f2, 0x8(r5)
    li r7, 0xf
    stfd f31, 0x130(r1)
    li r5, 0x0
    li r0, 0x71
    psq_st f31, 0x138(r1), 0, 0
    stfd f30, 0x120(r1)
    psq_st f30, 0x128(r1), 0, 0
    stw r31, 0x11c(r1)
    mr r31, r3
    stw r30, 0x118(r1)
    stw r29, 0x114(r1)
    mr r29, r6
    stw r4, 0x4(r3)
    stw r8, 0x0(r3)
    psq_st f1, 0x8(r3), 0, 0
    stfs f2, 0x10(r3)
    stw r6, 0x20(r3)
    stw r7, 0x28(r3)
    stw r5, 0x2c(r3)
    stw r0, 0x560(r4)
    lwz r3, 0x4(r3)
    bl fn_8016DA4C
    lwz r3, 0x4(r31)
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 25
    beq lbl_fn_80198C08_00000094
    li r4, 0x0
    bl fn_80155DAC
lbl_fn_80198C08_00000094:
    lwz r3, 0x4(r31)
    lwz r0, 0x12a4(r3)
    srwi. r0, r0, 31
    beq lbl_fn_80198C08_000000A8
    bl fn_801539E0
lbl_fn_80198C08_000000A8:
    lwz r3, 0x4(r31)
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 26
    beq lbl_fn_80198C08_000000C4
    lwz r0, 0x12a4(r3)
    rlwinm r0, r0, 0, 27, 25
    stw r0, 0x12a4(r3)
lbl_fn_80198C08_000000C4:
    lis r0, 0x4330
    xoris r3, r29, 0x8000
    lis r4, lbl_80739708@ha
    stw r3, 0x104(r1)
    lfd f9, lbl_80739708@l(r4)
    addi r30, r1, 0x80
    stw r0, 0x100(r1)
    addi r5, r1, 0x74
    lwz r7, 0x4(r31)
    addi r6, r1, 0x5c
    lfd f3, 0x100(r1)
    mr r3, r30
    lfs f0, lbl_80881FBC
    mr r4, r30
    fsubs f12, f3, f9
    lfs f8, 0x10(r31)
    lfs f4, 0x530(r7)
    lfs f7, 0xc(r31)
    fdivs f11, f0, f12
    lfs f5, 0x52c(r7)
    lfs f6, 0x8(r31)
    lfs f0, 0x528(r7)
    stw r0, 0x108(r1)
    lfs f3, lbl_808820E8
    fsubs f10, f8, f4
    lfs f4, lbl_80881FB8
    fsubs f5, f7, f5
    fsubs f0, f6, f0
    stfs f10, 0x70(r1)
    fmuls f2, f10, f11
    fmuls f10, f5, f11
    stfs f0, 0x68(r1)
    fmuls f0, f0, f11
    stfs f10, 0x78(r1)
    stfs f0, 0x74(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x14(r31), 0, 0
    stfs f2, 0x1c(r31)
    lfs f0, 0x18(r31)
    lwz r5, lbl_8087F0A8
    stfs f5, 0x6c(r1)
    lwz r0, 0x30(r5)
    stfs f2, 0x7c(r1)
    mullw r0, r0, r0
    xoris r0, r0, 0x8000
    stw r0, 0x10c(r1)
    lfd f5, 0x108(r1)
    fsubs f5, f5, f9
    fdivs f3, f3, f5
    fmuls f3, f4, f3
    fmuls f3, f12, f3
    fnmsubs f0, f4, f3, f0
    stfs f0, 0x18(r31)
    lfs f0, 0x530(r7)
    lfs f3, 0x52c(r7)
    fsubs f2, f8, f0
    lfs f0, 0x528(r7)
    fsubs f3, f7, f3
    fsubs f0, f6, f0
    stfs f2, 0x64(r1)
    stfs f0, 0x5c(r1)
    stfs f3, 0x60(r1)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x88(r1)
    bl fn_805F98D0
    lfs f2, 0x88(r1)
    addi r29, r1, 0x50
    lfs f3, lbl_80881FCC
    fabs f4, f2
    stfs f3, 0x84(r1)
    lfs f0, lbl_80881FD0
    psq_l f1, 0x0(r30), 0, 0
    frsp f4, f4
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x58(r1)
    fcmpo cr0, f4, f0
    bge lbl_fn_80198C08_0000021C
    lfs f0, 0x50(r1)
    fcmpo cr0, f0, f3
    ble lbl_fn_80198C08_00000210
    lfs f0, lbl_80881FD4
    b lbl_fn_80198C08_00000214
lbl_fn_80198C08_00000210:
    lfs f0, lbl_80881FD8
lbl_fn_80198C08_00000214:
    stfs f0, 0x48(r1)
    b lbl_fn_80198C08_00000230
lbl_fn_80198C08_0000021C:
    frsp f2, f2
    lfs f1, 0x50(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_80198C08_00000230:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x90
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80881FCC
    addi r4, r1, 0x38
    lfs f30, 0x98(r1)
    mr r5, r4
    lfs f31, 0x94(r1)
    addi r3, r1, 0xc0
    lfs f13, 0x90(r1)
    lfs f12, 0xa8(r1)
    lfs f11, 0xa4(r1)
    lfs f10, 0xa0(r1)
    lfs f9, 0xb8(r1)
    lfs f8, 0xb4(r1)
    lfs f7, 0xb0(r1)
    lfs f6, 0xbc(r1)
    lfs f5, 0xac(r1)
    lfs f4, 0x9c(r1)
    lfs f0, lbl_80881FBC
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x58(r1)
    stfs f3, 0xf0(r1)
    stfs f3, 0xf4(r1)
    stfs f3, 0xf8(r1)
    stfs f0, 0xfc(r1)
    stfs f13, 0x8(r1)
    stfs f31, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f13, 0xc0(r1)
    stfs f31, 0xc4(r1)
    stfs f30, 0xc8(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xd0(r1)
    stfs f11, 0xd4(r1)
    stfs f12, 0xd8(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0xe0(r1)
    stfs f8, 0xe4(r1)
    stfs f9, 0xe8(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0xcc(r1)
    stfs f5, 0xdc(r1)
    stfs f6, 0xec(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80881FD0
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80198C08_0000034C
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80881FCC
    fcmpo cr0, f3, f0
    ble lbl_fn_80198C08_0000033C
    lfs f0, lbl_80881FD4
    b lbl_fn_80198C08_00000340
lbl_fn_80198C08_0000033C:
    lfs f0, lbl_80881FD8
lbl_fn_80198C08_00000340:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_80198C08_00000360
lbl_fn_80198C08_0000034C:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_80198C08_00000360:
    lfs f3, lbl_80881FCC
    addi r3, r1, 0x44
    psq_l f1, 0x0(r3), 0, 0
    li r30, 0x1
    fmr f2, f3
    lwz r3, 0x4(r31)
    lfs f0, lbl_80881FBC
    stfs f2, 0x58(r1)
    frsp f2, f2
    psq_st f1, 0x534(r3), 0, 0
    stfs f2, 0x53c(r3)
    lwz r3, 0x4(r31)
    stfs f3, 0x4c(r1)
    addi r3, r3, 0xb0
    stw r30, 0x34c(r3)
    stfs f0, 0x24c(r3)
    stfs f0, 0x238(r3)
    lwz r4, 0x4(r31)
    psq_st f1, 0x0(r29), 0, 0
    lwz r0, 0x1208(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80198C08_000003E4
    fmr f1, f3
    lfs f2, lbl_80881FDC
    li r4, 0x0
    li r5, 0x221
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    li r0, 0x0
    stw r0, 0x24(r31)
    b lbl_fn_80198C08_00000408
lbl_fn_80198C08_000003E4:
    fmr f1, f3
    lfs f2, lbl_80881FDC
    li r4, 0x0
    li r5, 0x220
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    stw r30, 0x24(r31)
lbl_fn_80198C08_00000408:
    lwz r3, lbl_8087F498
    cmpwi r3, 0x0
    beq lbl_fn_80198C08_0000042C
    lwz r4, 0x4(r31)
    li r5, 0x10
    lfs f1, lbl_80881FBC
    li r6, 0x0
    lfs f2, lbl_80881FF4
    bl fn_803EA77C
lbl_fn_80198C08_0000042C:
    psq_l f31, 0x138(r1), 0, 0
    mr r3, r31
    lfd f31, 0x130(r1)
    psq_l f30, 0x128(r1), 0, 0
    lfd f30, 0x120(r1)
    lwz r31, 0x11c(r1)
    lwz r30, 0x118(r1)
    lwz r29, 0x114(r1)
    lwz r0, 0x144(r1)
    mtlr r0
    addi r1, r1, 0x140
    blr
}

asm void fn_8019905C(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    lis r4, lbl_80739708@ha
    stw r0, 0x64(r1)
    lis r0, 0x4330
    addi r5, r1, 0x8
    lfd f6, lbl_80739708@l(r4)
    stfd f31, 0x50(r1)
    psq_st f31, 0x58(r1), 0, 0
    stw r31, 0x4c(r1)
    stw r30, 0x48(r1)
    mr r30, r3
    lwz r6, 0x4(r3)
    lfs f4, 0x18(r3)
    lfs f5, 0x52c(r6)
    addi r31, r6, 0xb0
    lfs f3, 0x528(r6)
    fadds f5, f5, f4
    lfs f0, 0x14(r3)
    lfs f4, 0x530(r6)
    fadds f3, f3, f0
    lfs f0, 0x1c(r3)
    stfs f5, 0xc(r1)
    fadds f2, f4, f0
    lfs f4, lbl_808820E8
    stfs f3, 0x8(r1)
    lfs f3, lbl_80881FB8
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x528(r6), 0, 0
    stfs f2, 0x530(r6)
    lwz r4, lbl_8087F0A8
    lwz r5, lbl_8087EFA8
    lwz r4, 0x30(r4)
    lwz r7, 0x24(r3)
    mullw r6, r4, r4
    stw r0, 0x38(r1)
    lfs f7, 0x3a4(r5)
    cmpwi r7, 0x0
    lwz r4, 0x20(r3)
    lfs f0, 0x18(r3)
    xoris r0, r6, 0x8000
    stw r0, 0x3c(r1)
    subi r5, r4, 0x1
    lfd f5, 0x38(r1)
    stfs f2, 0x10(r1)
    fsubs f5, f5, f6
    stw r5, 0x20(r3)
    fdivs f4, f4, f5
    fmuls f3, f3, f4
    fmadds f0, f7, f3, f0
    stfs f0, 0x18(r3)
    beq lbl_fn_8019905C_00000548
    cmpwi r7, 0x1
    beq lbl_fn_8019905C_000005D4
    cmpwi r7, 0x2
    beq lbl_fn_8019905C_000006A0
    cmpwi r7, 0x3
    beq lbl_fn_8019905C_00000700
    b lbl_fn_8019905C_00000710
lbl_fn_8019905C_00000548:
    cmpwi r5, 0x0
    bge lbl_fn_8019905C_00000710
    lwz r3, 0x4(r3)
    lwz r0, 0x1208(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8019905C_000005CC
    lwz r31, 0x1208(r3)
    bl fn_801750FC
    lfs f0, lbl_80881FCC
    li r6, 0x0
    li r5, 0x6
    stw r6, 0x1c(r1)
    addi r7, r1, 0x2c
    li r0, 0x1
    stw r6, 0x20(r1)
    mr r3, r31
    addi r4, r1, 0x18
    stw r6, 0x24(r1)
    stw r6, 0x28(r1)
    stfs f0, 0x2c(r1)
    stfs f0, 0x30(r1)
    stfs f0, 0x34(r1)
    stw r5, 0x18(r1)
    psq_l f1, 0x8(r30), 0, 0
    lfs f2, 0x10(r30)
    stfs f2, 0x34(r1)
    psq_st f1, 0x0(r7), 0, 0
    stw r6, 0x28(r1)
    stw r0, 0x1c(r1)
    lwz r12, 0x0(r31)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
lbl_fn_8019905C_000005CC:
    li r3, 0x1
    b lbl_fn_8019905C_00000714
lbl_fn_8019905C_000005D4:
    lwz r4, 0x4(r3)
    lwz r0, 0x48(r4)
    cmpwi r0, 0x0
    bne lbl_fn_8019905C_0000063C
    lwz r0, 0x28(r3)
    cmpwi r0, 0x0
    ble lbl_fn_8019905C_0000063C
    cmpwi r5, 0x1e
    ble lbl_fn_8019905C_0000063C
    lwz r3, lbl_8087F490
    li r0, 0x1
    li r4, 0x22
    stw r0, 0x728(r3)
    lwz r3, lbl_8087F0A8
    addi r3, r3, 0x48c
    bl fn_8012476C
    cmpwi r3, 0x0
    beq lbl_fn_8019905C_00000628
    lwz r3, 0x28(r30)
    subi r0, r3, 0x1
    stw r0, 0x28(r30)
lbl_fn_8019905C_00000628:
    lwz r0, 0x28(r30)
    cmpwi r0, 0x0
    bgt lbl_fn_8019905C_0000063C
    li r0, 0x1
    stw r0, 0x2c(r30)
lbl_fn_8019905C_0000063C:
    lwz r0, 0x2c(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8019905C_00000710
    lfs f3, 0x234(r31)
    lfs f0, lbl_80882040
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_8019905C_00000710
    li r0, 0x1
    stw r0, 0x34c(r31)
    lfs f0, lbl_80881FBC
    mr r3, r31
    stfs f0, 0x24c(r31)
    li r4, 0x0
    lfs f1, lbl_80881FCC
    li r5, 0x222
    stfs f0, 0x238(r31)
    li r6, 0x0
    lfs f2, lbl_80881FDC
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    li r0, 0x2
    stw r0, 0x24(r30)
    b lbl_fn_8019905C_00000710
lbl_fn_8019905C_000006A0:
    lfs f31, 0x234(r31)
    mr r3, r31
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_8019905C_00000710
    li r0, 0x1
    stw r0, 0x34c(r31)
    lfs f0, lbl_80881FBC
    mr r3, r31
    stfs f0, 0x24c(r31)
    li r4, 0x0
    lfs f1, lbl_80881FCC
    li r5, 0x68
    stfs f0, 0x238(r31)
    li r6, 0x1
    lfs f2, lbl_80881FDC
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    li r0, 0x3
    stw r0, 0x24(r30)
    b lbl_fn_8019905C_00000710
lbl_fn_8019905C_00000700:
    cmpwi r5, 0x0
    bge lbl_fn_8019905C_00000710
    li r3, 0x1
    b lbl_fn_8019905C_00000714
lbl_fn_8019905C_00000710:
    li r3, 0x0
lbl_fn_8019905C_00000714:
    lwz r0, 0x64(r1)
    psq_l f31, 0x58(r1), 0, 0
    lfd f31, 0x50(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80199334(void)
{
    nofralloc
    psq_l f1, 0x8(r4), 0, 0
    lfs f2, 0x10(r4)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x8(r3)
    blr
}

asm void fn_80199348(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r7, lbl_8077E580@ha
    li r9, 0x72
    stw r0, 0x14(r1)
    addi r7, r7, lbl_8077E580@l
    li r0, 0x1
    lfs f0, lbl_80881FBC
    stw r31, 0xc(r1)
    li r8, 0x1
    lfs f1, lbl_80881FCC
    stw r30, 0x8(r1)
    mr r30, r3
    lfs f2, lbl_80881FDC
    stw r5, 0x8(r3)
    li r5, 0x224
    stw r6, 0xc(r3)
    li r6, 0x1
    stw r7, 0x0(r3)
    li r7, 0x0
    stw r4, 0x4(r3)
    stw r9, 0x560(r4)
    li r4, 0x0
    lwz r9, 0x4(r3)
    lwz r10, 0x8(r3)
    stw r10, 0xf1c(r9)
    lwz r3, 0x4(r3)
    stw r0, 0x3fc(r3)
    addi r31, r3, 0xb0
    mr r3, r31
    stfs f0, 0x24c(r31)
    bl fn_80097C08
    lfs f0, lbl_80881FBC
    mr r3, r30
    stfs f0, 0x238(r31)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801993EC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801993EC_00000838
    lwz r6, 0x4(r3)
    lis r5, lbl_8077E580@ha
    addi r5, r5, lbl_8077E580@l
    stw r5, 0x0(r3)
    cmpwi r6, 0x0
    beq lbl_fn_801993EC_00000828
    li r0, 0x0
    stw r0, 0xf1c(r6)
lbl_fn_801993EC_00000828:
    cmpwi r4, 0x0
    ble lbl_fn_801993EC_00000838
    mr r3, r31
    bl dtor_80084684
lbl_fn_801993EC_00000838:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80199450(void)
{
    nofralloc
    stwu r1, -0x180(r1)
    mflr r0
    stw r0, 0x184(r1)
    stfd f31, 0x170(r1)
    psq_st f31, 0x178(r1), 0, 0
    stfd f30, 0x160(r1)
    psq_st f30, 0x168(r1), 0, 0
    stfd f29, 0x150(r1)
    psq_st f29, 0x158(r1), 0, 0
    stfd f28, 0x140(r1)
    psq_st f28, 0x148(r1), 0, 0
    stfd f27, 0x130(r1)
    psq_st f27, 0x138(r1), 0, 0
    stfd f26, 0x120(r1)
    psq_st f26, 0x128(r1), 0, 0
    stw r31, 0x11c(r1)
    stw r30, 0x118(r1)
    mr r30, r3
    lwz r4, 0x4(r3)
    lwz r7, 0xf1c(r4)
    cmpwi r7, 0x0
    beq lbl_fn_80199450_00000AFC
    lfs f7, lbl_80881FCC
    addi r31, r1, 0x68
    lfs f0, lbl_80881FBC
    addi r3, r1, 0xe8
    psq_l f1, 0x0(r7), 0, 0
    addi r6, r1, 0x5c
    psq_l f2, 0x8(r7), 0, 0
    mr r4, r31
    psq_l f3, 0x10(r7), 0, 0
    mr r5, r31
    psq_l f4, 0x18(r7), 0, 0
    psq_l f5, 0x20(r7), 0, 0
    psq_l f6, 0x28(r7), 0, 0
    psq_st f6, 0x28(r3), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    fmr f2, f0
    psq_st f4, 0x18(r3), 0, 0
    stfs f7, 0x5c(r1)
    stfs f7, 0x60(r1)
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    stfs f7, 0xf4(r1)
    stfs f7, 0x104(r1)
    stfs f7, 0x114(r1)
    stfs f0, 0x64(r1)
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x70(r1)
    bl fn_805F93C0
    lfs f2, 0x70(r1)
    lfs f0, lbl_80881FD0
    fabs f7, f2
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_80199450_0000095C
    lfs f7, 0x68(r1)
    lfs f0, lbl_80881FCC
    fcmpo cr0, f7, f0
    ble lbl_fn_80199450_00000950
    lfs f0, lbl_80881FD4
    b lbl_fn_80199450_00000954
lbl_fn_80199450_00000950:
    lfs f0, lbl_80881FD8
lbl_fn_80199450_00000954:
    stfs f0, 0xc(r1)
    b lbl_fn_80199450_0000096C
lbl_fn_80199450_0000095C:
    lfs f1, 0x68(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0xc(r1)
lbl_fn_80199450_0000096C:
    lfs f0, 0xc(r1)
    addi r3, r1, 0xb8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f7, lbl_80881FCC
    addi r4, r1, 0x14
    lfs f8, 0xc0(r1)
    mr r5, r4
    lfs f9, 0xbc(r1)
    addi r3, r1, 0x78
    lfs f10, 0xb8(r1)
    lfs f11, 0xd0(r1)
    lfs f12, 0xcc(r1)
    lfs f13, 0xc8(r1)
    lfs f31, 0xe0(r1)
    lfs f30, 0xdc(r1)
    lfs f29, 0xd8(r1)
    lfs f28, 0xe4(r1)
    lfs f27, 0xd4(r1)
    lfs f26, 0xc4(r1)
    lfs f0, lbl_80881FBC
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x70(r1)
    stfs f7, 0xa8(r1)
    stfs f7, 0xac(r1)
    stfs f7, 0xb0(r1)
    stfs f0, 0xb4(r1)
    stfs f10, 0x44(r1)
    stfs f9, 0x48(r1)
    stfs f8, 0x4c(r1)
    stfs f10, 0x78(r1)
    stfs f9, 0x7c(r1)
    stfs f8, 0x80(r1)
    stfs f13, 0x38(r1)
    stfs f12, 0x3c(r1)
    stfs f11, 0x40(r1)
    stfs f13, 0x88(r1)
    stfs f12, 0x8c(r1)
    stfs f11, 0x90(r1)
    stfs f29, 0x2c(r1)
    stfs f30, 0x30(r1)
    stfs f31, 0x34(r1)
    stfs f29, 0x98(r1)
    stfs f30, 0x9c(r1)
    stfs f31, 0xa0(r1)
    stfs f26, 0x20(r1)
    stfs f27, 0x24(r1)
    stfs f28, 0x28(r1)
    stfs f26, 0x84(r1)
    stfs f27, 0x94(r1)
    stfs f28, 0xa4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x1c(r1)
    bl fn_805F9750
    lfs f2, 0x1c(r1)
    lfs f0, lbl_80881FD0
    fabs f7, f2
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_80199450_00000A88
    lfs f7, 0x18(r1)
    lfs f0, lbl_80881FCC
    fcmpo cr0, f7, f0
    ble lbl_fn_80199450_00000A78
    lfs f0, lbl_80881FD4
    b lbl_fn_80199450_00000A7C
lbl_fn_80199450_00000A78:
    lfs f0, lbl_80881FD8
lbl_fn_80199450_00000A7C:
    fneg f0, f0
    stfs f0, 0x8(r1)
    b lbl_fn_80199450_00000A9C
lbl_fn_80199450_00000A88:
    lfs f1, 0x18(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x8(r1)
lbl_fn_80199450_00000A9C:
    addi r3, r1, 0x8
    lfs f2, lbl_80881FCC
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x68
    psq_st f1, 0x0(r31), 0, 0
    addi r4, r1, 0x50
    stfs f2, 0x68(r1)
    stfs f2, 0x70(r1)
    psq_l f1, 0x0(r3), 0, 0
    lwz r3, 0x4(r30)
    stfs f2, 0x10(r1)
    psq_st f1, 0x534(r3), 0, 0
    stfs f2, 0x53c(r3)
    lwz r5, 0x4(r30)
    lwz r3, 0xf1c(r5)
    lfs f0, 0x1c(r3)
    lfs f7, 0xc(r3)
    lfs f2, 0x2c(r3)
    stfs f7, 0x50(r1)
    stfs f0, 0x54(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x528(r5), 0, 0
    stfs f2, 0x58(r1)
    stfs f2, 0x530(r5)
lbl_fn_80199450_00000AFC:
    lwz r3, 0xc(r30)
    subic. r0, r3, 0x1
    stw r0, 0xc(r30)
    bge lbl_fn_80199450_00000B14
    li r3, 0x1
    b lbl_fn_80199450_00000B18
lbl_fn_80199450_00000B14:
    li r3, 0x0
lbl_fn_80199450_00000B18:
    lwz r0, 0x184(r1)
    psq_l f31, 0x178(r1), 0, 0
    lfd f31, 0x170(r1)
    psq_l f30, 0x168(r1), 0, 0
    lfd f30, 0x160(r1)
    psq_l f29, 0x158(r1), 0, 0
    lfd f29, 0x150(r1)
    psq_l f28, 0x148(r1), 0, 0
    lfd f28, 0x140(r1)
    psq_l f27, 0x138(r1), 0, 0
    lfd f27, 0x130(r1)
    psq_l f26, 0x128(r1), 0, 0
    lfd f26, 0x120(r1)
    lwz r31, 0x11c(r1)
    lwz r30, 0x118(r1)
    mtlr r0
    addi r1, r1, 0x180
    blr
}

asm void fn_80199760(void)
{
    nofralloc
    lwz r4, 0x4(r4)
    lfs f0, lbl_80881FF4
    lfs f2, 0x530(r4)
    psq_l f1, 0x528(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lfs f3, 0x4(r3)
    stfs f2, 0x8(r3)
    fsubs f0, f3, f0
    stfs f0, 0x4(r3)
    blr
}

asm void fn_80199788(void)
{
    nofralloc
    stwu r1, -0x180(r1)
    mflr r0
    lis r7, lbl_8077E508@ha
    psq_l f1, 0x0(r6), 0, 0
    stw r0, 0x184(r1)
    addi r7, r7, lbl_8077E508@l
    lfs f2, 0x8(r6)
    li r0, 0x73
    stfd f31, 0x170(r1)
    psq_st f31, 0x178(r1), 0, 0
    stfd f30, 0x160(r1)
    psq_st f30, 0x168(r1), 0, 0
    stfd f29, 0x150(r1)
    psq_st f29, 0x158(r1), 0, 0
    stfd f28, 0x140(r1)
    psq_st f28, 0x148(r1), 0, 0
    stfd f27, 0x130(r1)
    psq_st f27, 0x138(r1), 0, 0
    stfd f26, 0x120(r1)
    psq_st f26, 0x128(r1), 0, 0
    stw r31, 0x11c(r1)
    mr r31, r3
    stw r30, 0x118(r1)
    stw r4, 0x4(r3)
    stw r7, 0x0(r3)
    stw r5, 0x8(r3)
    psq_st f1, 0xc(r3), 0, 0
    stfs f2, 0x14(r3)
    stw r0, 0x560(r4)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r0, 0xf1c(r4)
    lwz r3, 0x4(r3)
    lwz r7, 0xf1c(r3)
    cmpwi r7, 0x0
    beq lbl_fn_80199788_00000E6C
    lfs f7, lbl_80881FCC
    addi r30, r1, 0x68
    lfs f0, lbl_80881FBC
    addi r3, r1, 0xe8
    psq_l f1, 0x0(r7), 0, 0
    addi r6, r1, 0x5c
    psq_l f2, 0x8(r7), 0, 0
    mr r4, r30
    psq_l f3, 0x10(r7), 0, 0
    mr r5, r30
    psq_l f4, 0x18(r7), 0, 0
    psq_l f5, 0x20(r7), 0, 0
    psq_l f6, 0x28(r7), 0, 0
    psq_st f6, 0x28(r3), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    fmr f2, f0
    psq_st f4, 0x18(r3), 0, 0
    stfs f7, 0x5c(r1)
    stfs f7, 0x60(r1)
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    stfs f7, 0xf4(r1)
    stfs f7, 0x104(r1)
    stfs f7, 0x114(r1)
    stfs f0, 0x64(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x70(r1)
    bl fn_805F93C0
    lfs f2, 0x70(r1)
    lfs f0, lbl_80881FD0
    fabs f7, f2
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_80199788_00000CCC
    lfs f7, 0x68(r1)
    lfs f0, lbl_80881FCC
    fcmpo cr0, f7, f0
    ble lbl_fn_80199788_00000CC0
    lfs f0, lbl_80881FD4
    b lbl_fn_80199788_00000CC4
lbl_fn_80199788_00000CC0:
    lfs f0, lbl_80881FD8
lbl_fn_80199788_00000CC4:
    stfs f0, 0xc(r1)
    b lbl_fn_80199788_00000CDC
lbl_fn_80199788_00000CCC:
    lfs f1, 0x68(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0xc(r1)
lbl_fn_80199788_00000CDC:
    lfs f0, 0xc(r1)
    addi r3, r1, 0xb8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f7, lbl_80881FCC
    addi r4, r1, 0x14
    lfs f8, 0xc0(r1)
    mr r5, r4
    lfs f9, 0xbc(r1)
    addi r3, r1, 0x78
    lfs f10, 0xb8(r1)
    lfs f11, 0xd0(r1)
    lfs f12, 0xcc(r1)
    lfs f13, 0xc8(r1)
    lfs f31, 0xe0(r1)
    lfs f30, 0xdc(r1)
    lfs f29, 0xd8(r1)
    lfs f28, 0xe4(r1)
    lfs f27, 0xd4(r1)
    lfs f26, 0xc4(r1)
    lfs f0, lbl_80881FBC
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x70(r1)
    stfs f7, 0xa8(r1)
    stfs f7, 0xac(r1)
    stfs f7, 0xb0(r1)
    stfs f0, 0xb4(r1)
    stfs f10, 0x44(r1)
    stfs f9, 0x48(r1)
    stfs f8, 0x4c(r1)
    stfs f10, 0x78(r1)
    stfs f9, 0x7c(r1)
    stfs f8, 0x80(r1)
    stfs f13, 0x38(r1)
    stfs f12, 0x3c(r1)
    stfs f11, 0x40(r1)
    stfs f13, 0x88(r1)
    stfs f12, 0x8c(r1)
    stfs f11, 0x90(r1)
    stfs f29, 0x2c(r1)
    stfs f30, 0x30(r1)
    stfs f31, 0x34(r1)
    stfs f29, 0x98(r1)
    stfs f30, 0x9c(r1)
    stfs f31, 0xa0(r1)
    stfs f26, 0x20(r1)
    stfs f27, 0x24(r1)
    stfs f28, 0x28(r1)
    stfs f26, 0x84(r1)
    stfs f27, 0x94(r1)
    stfs f28, 0xa4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x1c(r1)
    bl fn_805F9750
    lfs f2, 0x1c(r1)
    lfs f0, lbl_80881FD0
    fabs f7, f2
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_80199788_00000DF8
    lfs f7, 0x18(r1)
    lfs f0, lbl_80881FCC
    fcmpo cr0, f7, f0
    ble lbl_fn_80199788_00000DE8
    lfs f0, lbl_80881FD4
    b lbl_fn_80199788_00000DEC
lbl_fn_80199788_00000DE8:
    lfs f0, lbl_80881FD8
lbl_fn_80199788_00000DEC:
    fneg f0, f0
    stfs f0, 0x8(r1)
    b lbl_fn_80199788_00000E0C
lbl_fn_80199788_00000DF8:
    lfs f1, 0x18(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x8(r1)
lbl_fn_80199788_00000E0C:
    addi r3, r1, 0x8
    lfs f2, lbl_80881FCC
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x68
    psq_st f1, 0x0(r30), 0, 0
    addi r4, r1, 0x50
    stfs f2, 0x68(r1)
    stfs f2, 0x70(r1)
    psq_l f1, 0x0(r3), 0, 0
    lwz r3, 0x4(r31)
    stfs f2, 0x10(r1)
    psq_st f1, 0x534(r3), 0, 0
    stfs f2, 0x53c(r3)
    lwz r5, 0x4(r31)
    lwz r3, 0xf1c(r5)
    lfs f0, 0x1c(r3)
    lfs f7, 0xc(r3)
    lfs f2, 0x2c(r3)
    stfs f7, 0x50(r1)
    stfs f0, 0x54(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x528(r5), 0, 0
    stfs f2, 0x58(r1)
    stfs f2, 0x530(r5)
lbl_fn_80199788_00000E6C:
    lwz r3, 0x4(r31)
    li r0, 0x1
    lfs f0, lbl_80881FBC
    li r4, 0x0
    stw r0, 0x3fc(r3)
    addi r30, r3, 0xb0
    lfs f1, lbl_80881FCC
    mr r3, r30
    lfs f2, lbl_80881FDC
    li r5, 0x223
    stfs f0, 0x24c(r30)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80881FBC
    mr r3, r31
    stfs f0, 0x238(r30)
    psq_l f31, 0x178(r1), 0, 0
    lfd f31, 0x170(r1)
    psq_l f30, 0x168(r1), 0, 0
    lfd f30, 0x160(r1)
    psq_l f29, 0x158(r1), 0, 0
    lfd f29, 0x150(r1)
    psq_l f28, 0x148(r1), 0, 0
    lfd f28, 0x140(r1)
    psq_l f27, 0x138(r1), 0, 0
    lfd f27, 0x130(r1)
    psq_l f26, 0x128(r1), 0, 0
    lfd f26, 0x120(r1)
    lwz r31, 0x11c(r1)
    lwz r30, 0x118(r1)
    lwz r0, 0x184(r1)
    mtlr r0
    addi r1, r1, 0x180
    blr
}

asm void fn_80199AFC(void)
{
    nofralloc
    stwu r1, -0x250(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x254(r1)
    stfd f31, 0x240(r1)
    psq_st f31, 0x248(r1), 0, 0
    stfd f30, 0x230(r1)
    psq_st f30, 0x238(r1), 0, 0
    stfd f29, 0x220(r1)
    psq_st f29, 0x228(r1), 0, 0
    stfd f28, 0x210(r1)
    psq_st f28, 0x218(r1), 0, 0
    stfd f27, 0x200(r1)
    psq_st f27, 0x208(r1), 0, 0
    stfd f26, 0x1f0(r1)
    psq_st f26, 0x1f8(r1), 0, 0
    stfd f25, 0x1e0(r1)
    psq_st f25, 0x1e8(r1), 0, 0
    stw r31, 0x1dc(r1)
    stw r30, 0x1d8(r1)
    mr r30, r3
    lwz r5, 0x4(r3)
    addi r31, r5, 0xb0
    lfs f25, 0x2e4(r5)
    mr r3, r31
    bl fn_80097D7C
    fcmpo cr0, f25, f1
    cror eq, gt, eq
    bne lbl_fn_80199AFC_00000F78
    li r3, 0x1
    b lbl_fn_80199AFC_000013D0
lbl_fn_80199AFC_00000F78:
    lfs f7, 0x234(r31)
    lfs f0, lbl_808820D0
    fcmpo cr0, f7, f0
    cror eq, gt, eq
    bne lbl_fn_80199AFC_00001168
    lwz r4, 0x4(r30)
    li r0, 0x0
    addi r3, r30, 0xc
    stw r0, 0xf1c(r4)
    bl fn_805F9940
    lfs f2, 0x14(r30)
    fmr f31, f1
    psq_l f1, 0xc(r30), 0, 0
    addi r31, r1, 0xbc
    fabs f7, f2
    lfs f0, lbl_80881FD0
    psq_st f1, 0x0(r31), 0, 0
    frsp f7, f7
    stfs f2, 0xc4(r1)
    fcmpo cr0, f7, f0
    bge lbl_fn_80199AFC_00000FF0
    lfs f7, 0xbc(r1)
    lfs f0, lbl_80881FCC
    fcmpo cr0, f7, f0
    ble lbl_fn_80199AFC_00000FE4
    lfs f0, lbl_80881FD4
    b lbl_fn_80199AFC_00000FE8
lbl_fn_80199AFC_00000FE4:
    lfs f0, lbl_80881FD8
lbl_fn_80199AFC_00000FE8:
    stfs f0, 0x90(r1)
    b lbl_fn_80199AFC_00001004
lbl_fn_80199AFC_00000FF0:
    frsp f2, f2
    lfs f1, 0xbc(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x90(r1)
lbl_fn_80199AFC_00001004:
    lfs f0, 0x90(r1)
    addi r3, r1, 0x138
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f7, lbl_80881FCC
    addi r4, r1, 0x80
    lfs f25, 0x140(r1)
    mr r5, r4
    lfs f26, 0x13c(r1)
    addi r3, r1, 0x168
    lfs f27, 0x138(r1)
    lfs f28, 0x150(r1)
    lfs f29, 0x14c(r1)
    lfs f30, 0x148(r1)
    lfs f13, 0x160(r1)
    lfs f12, 0x15c(r1)
    lfs f11, 0x158(r1)
    lfs f10, 0x164(r1)
    lfs f9, 0x154(r1)
    lfs f8, 0x144(r1)
    lfs f0, lbl_80881FBC
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0xc4(r1)
    stfs f7, 0x198(r1)
    stfs f7, 0x19c(r1)
    stfs f7, 0x1a0(r1)
    stfs f0, 0x1a4(r1)
    stfs f27, 0x50(r1)
    stfs f26, 0x54(r1)
    stfs f25, 0x58(r1)
    stfs f27, 0x168(r1)
    stfs f26, 0x16c(r1)
    stfs f25, 0x170(r1)
    stfs f30, 0x5c(r1)
    stfs f29, 0x60(r1)
    stfs f28, 0x64(r1)
    stfs f30, 0x178(r1)
    stfs f29, 0x17c(r1)
    stfs f28, 0x180(r1)
    stfs f11, 0x68(r1)
    stfs f12, 0x6c(r1)
    stfs f13, 0x70(r1)
    stfs f11, 0x188(r1)
    stfs f12, 0x18c(r1)
    stfs f13, 0x190(r1)
    stfs f8, 0x74(r1)
    stfs f9, 0x78(r1)
    stfs f10, 0x7c(r1)
    stfs f8, 0x174(r1)
    stfs f9, 0x184(r1)
    stfs f10, 0x194(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x88(r1)
    bl fn_805F9750
    lfs f2, 0x88(r1)
    lfs f0, lbl_80881FD0
    fabs f7, f2
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_80199AFC_00001120
    lfs f7, 0x84(r1)
    lfs f0, lbl_80881FCC
    fcmpo cr0, f7, f0
    ble lbl_fn_80199AFC_00001110
    lfs f0, lbl_80881FD4
    b lbl_fn_80199AFC_00001114
lbl_fn_80199AFC_00001110:
    lfs f0, lbl_80881FD8
lbl_fn_80199AFC_00001114:
    fneg f0, f0
    stfs f0, 0x8c(r1)
    b lbl_fn_80199AFC_00001134
lbl_fn_80199AFC_00001120:
    lfs f1, 0x84(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x8c(r1)
lbl_fn_80199AFC_00001134:
    lfs f0, lbl_80881FCC
    addi r3, r1, 0x8c
    psq_l f1, 0x0(r3), 0, 0
    addi r4, r1, 0xbc
    fmr f2, f0
    psq_st f1, 0x0(r31), 0, 0
    fmr f1, f31
    stfs f2, 0xc4(r1)
    lfs f2, lbl_8088200C
    stfs f0, 0x94(r1)
    lwz r3, 0x4(r30)
    bl fn_801426A4
    b lbl_fn_80199AFC_000013CC
lbl_fn_80199AFC_00001168:
    lwz r3, 0x4(r30)
    lwz r7, 0xf1c(r3)
    cmpwi r7, 0x0
    beq lbl_fn_80199AFC_000013CC
    lfs f7, lbl_80881FCC
    addi r31, r1, 0xb0
    lfs f0, lbl_80881FBC
    addi r3, r1, 0x1a8
    psq_l f1, 0x0(r7), 0, 0
    addi r6, r1, 0xa4
    psq_l f2, 0x8(r7), 0, 0
    mr r4, r31
    psq_l f3, 0x10(r7), 0, 0
    mr r5, r31
    psq_l f4, 0x18(r7), 0, 0
    psq_l f5, 0x20(r7), 0, 0
    psq_l f6, 0x28(r7), 0, 0
    psq_st f6, 0x28(r3), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    fmr f2, f0
    psq_st f4, 0x18(r3), 0, 0
    stfs f7, 0xa4(r1)
    stfs f7, 0xa8(r1)
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    stfs f7, 0x1b4(r1)
    stfs f7, 0x1c4(r1)
    stfs f7, 0x1d4(r1)
    stfs f0, 0xac(r1)
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0xb8(r1)
    bl fn_805F93C0
    lfs f2, 0xb8(r1)
    lfs f0, lbl_80881FD0
    fabs f7, f2
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_80199AFC_0000122C
    lfs f7, 0xb0(r1)
    lfs f0, lbl_80881FCC
    fcmpo cr0, f7, f0
    ble lbl_fn_80199AFC_00001220
    lfs f0, lbl_80881FD4
    b lbl_fn_80199AFC_00001224
lbl_fn_80199AFC_00001220:
    lfs f0, lbl_80881FD8
lbl_fn_80199AFC_00001224:
    stfs f0, 0xc(r1)
    b lbl_fn_80199AFC_0000123C
lbl_fn_80199AFC_0000122C:
    lfs f1, 0xb0(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0xc(r1)
lbl_fn_80199AFC_0000123C:
    lfs f0, 0xc(r1)
    addi r3, r1, 0x108
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f7, lbl_80881FCC
    addi r4, r1, 0x14
    lfs f8, 0x110(r1)
    mr r5, r4
    lfs f9, 0x10c(r1)
    addi r3, r1, 0xc8
    lfs f10, 0x108(r1)
    lfs f11, 0x120(r1)
    lfs f12, 0x11c(r1)
    lfs f13, 0x118(r1)
    lfs f25, 0x130(r1)
    lfs f26, 0x12c(r1)
    lfs f27, 0x128(r1)
    lfs f28, 0x134(r1)
    lfs f29, 0x124(r1)
    lfs f30, 0x114(r1)
    lfs f0, lbl_80881FBC
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0xb8(r1)
    stfs f7, 0xf8(r1)
    stfs f7, 0xfc(r1)
    stfs f7, 0x100(r1)
    stfs f0, 0x104(r1)
    stfs f10, 0x44(r1)
    stfs f9, 0x48(r1)
    stfs f8, 0x4c(r1)
    stfs f10, 0xc8(r1)
    stfs f9, 0xcc(r1)
    stfs f8, 0xd0(r1)
    stfs f13, 0x38(r1)
    stfs f12, 0x3c(r1)
    stfs f11, 0x40(r1)
    stfs f13, 0xd8(r1)
    stfs f12, 0xdc(r1)
    stfs f11, 0xe0(r1)
    stfs f27, 0x2c(r1)
    stfs f26, 0x30(r1)
    stfs f25, 0x34(r1)
    stfs f27, 0xe8(r1)
    stfs f26, 0xec(r1)
    stfs f25, 0xf0(r1)
    stfs f30, 0x20(r1)
    stfs f29, 0x24(r1)
    stfs f28, 0x28(r1)
    stfs f30, 0xd4(r1)
    stfs f29, 0xe4(r1)
    stfs f28, 0xf4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x1c(r1)
    bl fn_805F9750
    lfs f2, 0x1c(r1)
    lfs f0, lbl_80881FD0
    fabs f7, f2
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_80199AFC_00001358
    lfs f7, 0x18(r1)
    lfs f0, lbl_80881FCC
    fcmpo cr0, f7, f0
    ble lbl_fn_80199AFC_00001348
    lfs f0, lbl_80881FD4
    b lbl_fn_80199AFC_0000134C
lbl_fn_80199AFC_00001348:
    lfs f0, lbl_80881FD8
lbl_fn_80199AFC_0000134C:
    fneg f0, f0
    stfs f0, 0x8(r1)
    b lbl_fn_80199AFC_0000136C
lbl_fn_80199AFC_00001358:
    lfs f1, 0x18(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x8(r1)
lbl_fn_80199AFC_0000136C:
    addi r3, r1, 0x8
    lfs f2, lbl_80881FCC
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0xb0
    psq_st f1, 0x0(r31), 0, 0
    addi r4, r1, 0x98
    stfs f2, 0xb0(r1)
    stfs f2, 0xb8(r1)
    psq_l f1, 0x0(r3), 0, 0
    lwz r3, 0x4(r30)
    stfs f2, 0x10(r1)
    psq_st f1, 0x534(r3), 0, 0
    stfs f2, 0x53c(r3)
    lwz r5, 0x4(r30)
    lwz r3, 0xf1c(r5)
    lfs f0, 0x1c(r3)
    lfs f7, 0xc(r3)
    lfs f2, 0x2c(r3)
    stfs f7, 0x98(r1)
    stfs f0, 0x9c(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x528(r5), 0, 0
    stfs f2, 0xa0(r1)
    stfs f2, 0x530(r5)
lbl_fn_80199AFC_000013CC:
    li r3, 0x0
lbl_fn_80199AFC_000013D0:
    lwz r0, 0x254(r1)
    psq_l f31, 0x248(r1), 0, 0
    lfd f31, 0x240(r1)
    psq_l f30, 0x238(r1), 0, 0
    lfd f30, 0x230(r1)
    psq_l f29, 0x228(r1), 0, 0
    lfd f29, 0x220(r1)
    psq_l f28, 0x218(r1), 0, 0
    lfd f28, 0x210(r1)
    psq_l f27, 0x208(r1), 0, 0
    lfd f27, 0x200(r1)
    psq_l f26, 0x1f8(r1), 0, 0
    lfd f26, 0x1f0(r1)
    psq_l f25, 0x1e8(r1), 0, 0
    lfd f25, 0x1e0(r1)
    lwz r31, 0x1dc(r1)
    lwz r30, 0x1d8(r1)
    mtlr r0
    addi r1, r1, 0x250
    blr
}

asm void fn_8019A020(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    lfs f2, lbl_80881FCC
    stw r0, 0x44(r1)
    lfs f1, lbl_808820D8
    stw r31, 0x3c(r1)
    mr r31, r4
    lwz r5, 0x4(r4)
    li r4, 0x79
    stw r30, 0x38(r1)
    mr r30, r3
    lfs f0, lbl_80881FB8
    stfs f2, 0x0(r3)
    stfs f1, 0x4(r3)
    stfs f0, 0x8(r3)
    addi r3, r1, 0x8
    lfs f1, 0x538(r5)
    bl fn_805F8E70
    mr r4, r30
    mr r5, r30
    addi r3, r1, 0x8
    bl fn_805F93C0
    lwz r3, 0x4(r31)
    lfs f1, 0x0(r30)
    lfs f0, 0x528(r3)
    lfs f2, 0x4(r30)
    fadds f0, f1, f0
    lfs f1, 0x8(r30)
    stfs f0, 0x0(r30)
    lfs f0, 0x52c(r3)
    fadds f0, f2, f0
    stfs f0, 0x4(r30)
    lfs f0, 0x530(r3)
    fadds f0, f1, f0
    stfs f0, 0x8(r30)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8019A0C4(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    lis r5, lbl_80739F34@ha
    li r7, 0x0
    stw r0, 0x74(r1)
    addi r5, r5, lbl_80739F34@l
    addi r5, r5, 0x27
    stw r31, 0x6c(r1)
    mr r31, r3
    li r3, 0x34
    mr r6, r5
    stw r30, 0x68(r1)
    mr r30, r4
    li r4, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8019A0C4_00001514
    lwz r4, 0x4(r30)
    addi r5, r30, 0xc
    bl fn_801B2EDC
lbl_fn_8019A0C4_00001514:
    lis r4, lbl_8077DD20@ha
    lwzu r6, lbl_8077DD20@l(r4)
    lwz r7, 0x4(r30)
    li r0, 0x0
    lwz r5, 0x4(r4)
    lwz r4, 0x8(r4)
    stw r7, 0x8(r1)
    stw r0, 0x0(r31)
    lbz r0, lbl_8087F0C0
    stw r3, 0xc(r1)
    extsb. r0, r0
    stw r6, 0x1c(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r6, 0x10(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r6, 0x50(r1)
    stw r5, 0x54(r1)
    stw r4, 0x58(r1)
    stw r7, 0x5c(r1)
    stw r3, 0x60(r1)
    bne lbl_fn_8019A0C4_00001598
    lis r6, lbl_807C7B98@ha
    lis r4, fn_8019A2A8@ha
    lis r3, fn_8019A2D8@ha
    li r0, 0x1
    addi r3, r3, fn_8019A2D8@l
    addi r5, r6, lbl_807C7B98@l
    addi r4, r4, fn_8019A2A8@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C7B98@l(r6)
    stb r0, lbl_8087F0C0
lbl_fn_8019A0C4_00001598:
    lwz r7, 0x50(r1)
    addi r3, r1, 0x3c
    lwz r6, 0x54(r1)
    lwz r5, 0x58(r1)
    lwz r4, 0x5c(r1)
    lwz r0, 0x60(r1)
    stw r7, 0x3c(r1)
    stw r6, 0x40(r1)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_8019A0C4_0000166C
    lwz r7, 0x3c(r1)
    li r3, 0x14
    lwz r6, 0x40(r1)
    lwz r5, 0x44(r1)
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r7, 0x28(r1)
    stw r6, 0x2c(r1)
    stw r5, 0x30(r1)
    stw r4, 0x34(r1)
    stw r0, 0x38(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_8019A0C4_00001630
    lis r3, __files@ha
    lis r4, lbl_8077EF44@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8077EF44@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8019A0C4_00001630:
    cmpwi r30, 0x0
    beq lbl_fn_8019A0C4_00001660
    lwz r0, 0x28(r1)
    stw r0, 0x0(r30)
    lwz r0, 0x2c(r1)
    stw r0, 0x4(r30)
    lwz r0, 0x30(r1)
    stw r0, 0x8(r30)
    lwz r0, 0x34(r1)
    stw r0, 0xc(r30)
    lwz r0, 0x38(r1)
    stw r0, 0x10(r30)
lbl_fn_8019A0C4_00001660:
    stw r30, 0x4(r31)
    li r0, 0x1
    b lbl_fn_8019A0C4_00001670
lbl_fn_8019A0C4_0000166C:
    li r0, 0x0
lbl_fn_8019A0C4_00001670:
    cmpwi r0, 0x0
    beq lbl_fn_8019A0C4_00001688
    lis r3, lbl_807C7B98@ha
    addi r3, r3, lbl_807C7B98@l
    stw r3, 0x0(r31)
    b lbl_fn_8019A0C4_00001690
lbl_fn_8019A0C4_00001688:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_8019A0C4_00001690:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_8019A2A8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r12, 0x0(r3)
    lwz r3, 0xc(r12)
    lwz r4, 0x10(r12)
    bl fn_80695B00
    nop
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8019A2D8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r5, 0x3
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    mr r29, r4
    bne lbl_fn_8019A2D8_00001710
    lis r3, lbl_8077DDE8@ha
    addi r3, r3, lbl_8077DDE8@l
    stw r3, 0x0(r4)
    b lbl_fn_8019A2D8_000017D8
lbl_fn_8019A2D8_00001710:
    cmpwi r5, 0x0
    bne lbl_fn_8019A2D8_00001788
    lwz r31, 0x0(r3)
    li r3, 0x14
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_8019A2D8_00001750
    lis r3, __files@ha
    lis r4, lbl_8077EF44@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8077EF44@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8019A2D8_00001750:
    cmpwi r30, 0x0
    beq lbl_fn_8019A2D8_00001780
    lwz r0, 0x4(r31)
    lwz r3, 0x0(r31)
    stw r3, 0x0(r30)
    stw r0, 0x4(r30)
    lwz r0, 0x8(r31)
    stw r0, 0x8(r30)
    lwz r0, 0xc(r31)
    stw r0, 0xc(r30)
    lwz r0, 0x10(r31)
    stw r0, 0x10(r30)
lbl_fn_8019A2D8_00001780:
    stw r30, 0x0(r29)
    b lbl_fn_8019A2D8_000017D8
lbl_fn_8019A2D8_00001788:
    cmpwi r5, 0x1
    bne lbl_fn_8019A2D8_000017A4
    lwz r3, 0x0(r4)
    bl dtor_80084684
    li r0, 0x0
    stw r0, 0x0(r29)
    b lbl_fn_8019A2D8_000017D8
lbl_fn_8019A2D8_000017A4:
    lwz r5, 0x0(r4)
    lis r3, lbl_8077DDE8@ha
    lwz r4, lbl_8077DDE8@l(r3)
    lwz r3, 0x0(r5)
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_8019A2D8_000017D0
    lwz r0, 0x0(r30)
    stw r0, 0x0(r29)
    b lbl_fn_8019A2D8_000017D8
lbl_fn_8019A2D8_000017D0:
    li r0, 0x0
    stw r0, 0x0(r29)
lbl_fn_8019A2D8_000017D8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8019A3F4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r6, lbl_8077E490@ha
    stw r0, 0x24(r1)
    addi r6, r6, lbl_8077E490@l
    li r0, 0x71
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    stw r4, 0x4(r3)
    stw r6, 0x0(r3)
    stw r5, 0x8(r3)
    stw r0, 0x560(r4)
    lwz r3, 0x4(r3)
    bl fn_8016DA4C
    lwz r3, 0x4(r30)
    lwz r0, 0x12a4(r3)
    srwi. r0, r0, 31
    beq lbl_fn_8019A3F4_0000184C
    mr r3, r31
    bl fn_801539E0
lbl_fn_8019A3F4_0000184C:
    lwz r3, 0x4(r30)
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 25
    beq lbl_fn_8019A3F4_00001864
    li r4, 0x0
    bl fn_80155DAC
lbl_fn_8019A3F4_00001864:
    lwz r3, 0x4(r30)
    li r0, 0x1
    lfs f0, lbl_80881FBC
    li r4, 0x0
    addi r3, r3, 0xb0
    lfs f1, lbl_80881FCC
    stw r0, 0x34c(r3)
    li r5, 0x28
    lfs f2, lbl_80881FDC
    li r6, 0x1
    stfs f0, 0x24c(r3)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x238(r3)
    bl fn_80097C08
    lwz r3, 0x8(r30)
    lis r4, lbl_80739F34@ha
    addi r4, r4, lbl_80739F34@l
    li r5, 0x0
    addi r31, r3, 0xb0
    mr r3, r31
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8019A3F4_000018CC
    li r5, 0x0
    b lbl_fn_8019A3F4_000018D8
lbl_fn_8019A3F4_000018CC:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r31)
    add r5, r3, r0
lbl_fn_8019A3F4_000018D8:
    stw r5, 0xc(r30)
    addi r4, r1, 0x8
    lwz r6, 0x4(r30)
    mr r3, r30
    lfs f0, 0x1c(r5)
    lfs f3, 0xc(r5)
    lfs f2, 0x2c(r5)
    stfs f3, 0x8(r1)
    stfs f0, 0xc(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x528(r6), 0, 0
    stfs f2, 0x530(r6)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    stfs f2, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8019A524(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    lwz r4, 0xc(r3)
    addi r5, r1, 0x8
    lwz r6, 0x4(r3)
    lfs f3, 0x1c(r4)
    lfs f4, 0xc(r4)
    lfs f0, 0x2c(r4)
    stfs f4, 0x8(r1)
    fmr f2, f0
    stfs f3, 0xc(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x528(r6), 0, 0
    stfs f2, 0x530(r6)
    lwz r4, 0x8(r3)
    lwz r5, 0x4(r3)
    li r3, 0x0
    lfs f2, 0x53c(r4)
    psq_l f1, 0x534(r4), 0, 0
    psq_st f1, 0x534(r5), 0, 0
    stfs f0, 0x10(r1)
    stfs f2, 0x53c(r5)
    addi r1, r1, 0x20
    blr
}
