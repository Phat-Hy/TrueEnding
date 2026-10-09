#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void fn_80092814(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800C31F4(void);
extern void fn_800CB3A0(void);
extern void fn_800F8548(void);
extern void fn_800F8574(void);
extern void fn_80126214(void);
extern void fn_8013A258(void);
extern void fn_8013CB68(void);
extern void fn_80144710(void);
extern void fn_8016E970(void);
extern void fn_80170A20(void);
extern void fn_80232B7C(void);
extern void fn_80239DAC(void);
extern void fn_8023A680(void);
extern void fn_8023A8B4(void);
extern void fn_8033E8D4(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9940(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);

/* External data declarations */
extern u8 lbl_8074A498[];
extern u8 lbl_8074A4C0[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087DC58;
extern u32 lbl_8087DC5C;
extern u32 lbl_8087DC60;
extern u32 lbl_8087DC64;
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_80885238;
extern u32 lbl_8088523C;
extern u32 lbl_8088525C;
extern u32 lbl_80885260;
extern u32 lbl_80885270;
extern u32 lbl_80885274;
extern u32 lbl_80885278;
extern u32 lbl_80885280;
extern u32 lbl_80885284;
extern u32 lbl_80885288;
extern u32 lbl_8088528C;
extern u32 lbl_80885290;
extern u32 lbl_80885294;
extern u32 lbl_80885298;
extern u32 lbl_8088529C;
extern u32 lbl_808852A0;
extern u32 lbl_808852A4;
extern u32 lbl_808852A8;
extern u32 lbl_808852AC;
extern u32 lbl_808852B0;
extern u32 lbl_808852B4;
extern u32 lbl_808852B8;
extern u32 lbl_808852BC;
extern u32 lbl_808852C0;
extern u32 lbl_808852C4;
extern u32 lbl_808852C8;
extern u32 lbl_808852CC;
extern u32 lbl_808852D0;
extern u32 lbl_808852D4;

/* Function declarations */
void fn_8033BD74(void);
void fn_8033BFE8(void);
void fn_8033C000(void);
void fn_8033C364(void);
void fn_8033C3D8(void);
void fn_8033C490(void);
void fn_8033D040(void);

asm void fn_8033BD74(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    stw r31, 0x8c(r1)
    stw r30, 0x88(r1)
    mr r30, r3
    lwz r0, 0x624(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8033BD74_0000025C
    lwz r5, 0x62c(r3)
    li r31, 0x0
    lfs f0, 0x620(r3)
    li r4, 0x79
    stfs f0, 0x10(r5)
    lfs f3, lbl_80885238
    lfs f0, lbl_80885260
    stfs f3, 0x2c(r1)
    stfs f3, 0x30(r1)
    stfs f0, 0x34(r1)
    lfs f1, 0x538(r3)
    addi r3, r1, 0x50
    bl fn_805F8E70
    addi r4, r1, 0x2c
    addi r3, r1, 0x50
    mr r5, r4
    bl fn_805F93C0
    lfs f4, lbl_8088525C
    mulli r0, r31, 0x14
    lfs f3, 0x30(r1)
    li r31, 0x1
    lfs f0, 0x2c(r1)
    lis r3, lbl_8074A4C0@ha
    fmuls f6, f3, f4
    fmuls f7, f0, f4
    lfs f3, 0x618(r30)
    lfs f0, 0x614(r30)
    addi r3, r3, lbl_8074A4C0@l
    fadds f8, f3, f6
    lfs f5, 0x34(r1)
    fadds f0, f0, f7
    stfs f8, 0x48(r1)
    fmuls f5, f5, f4
    lfs f3, 0x61c(r30)
    stfs f0, 0x44(r1)
    addi r5, r1, 0x44
    psq_l f1, 0x0(r5), 0, 0
    fadds f2, f3, f5
    lwz r6, 0x62c(r30)
    addi r4, r3, 0x327
    mulli r7, r31, 0x14
    stfs f7, 0x38(r1)
    addi r3, r30, 0xb0
    psq_st f1, 0x4(r6), 0, 0
    li r5, 0x0
    stfs f2, 0xc(r6)
    lwz r6, 0x62c(r30)
    stfs f6, 0x3c(r1)
    add r6, r6, r0
    lfs f0, 0x8(r6)
    stfs f5, 0x40(r1)
    fsubs f0, f0, f4
    stfs f2, 0x4c(r1)
    stfs f0, 0x8(r6)
    lwz r0, 0x62c(r30)
    add r6, r0, r7
    stfs f4, 0x10(r6)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8033BD74_0000011C
    li r3, 0x0
    b lbl_fn_8033BD74_00000128
lbl_fn_8033BD74_0000011C:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r3, r3, r0
lbl_fn_8033BD74_00000128:
    mulli r0, r31, 0x14
    lfs f3, 0x1c(r3)
    lfs f0, 0xc(r3)
    lis r4, lbl_8074A4C0@ha
    lfs f2, 0x2c(r3)
    addi r3, r1, 0x20
    lwz r5, 0x62c(r30)
    addi r4, r4, lbl_8074A4C0@l
    stfs f0, 0x20(r1)
    li r31, 0x2
    add r5, r5, r0
    lfs f0, lbl_8088528C
    stfs f3, 0x24(r1)
    mulli r0, r31, 0x14
    addi r4, r4, 0x32c
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r30, 0xb0
    psq_st f1, 0x4(r5), 0, 0
    stfs f2, 0xc(r5)
    li r5, 0x0
    lwz r6, 0x62c(r30)
    stfs f2, 0x28(r1)
    add r6, r6, r0
    stfs f0, 0x10(r6)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8033BD74_0000019C
    li r3, 0x0
    b lbl_fn_8033BD74_000001A8
lbl_fn_8033BD74_0000019C:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r3, r3, r0
lbl_fn_8033BD74_000001A8:
    mulli r0, r31, 0x14
    lfs f3, 0x1c(r3)
    lfs f0, 0xc(r3)
    lis r4, lbl_8074A4C0@ha
    lfs f2, 0x2c(r3)
    addi r3, r1, 0x14
    lwz r5, 0x62c(r30)
    addi r4, r4, lbl_8074A4C0@l
    stfs f0, 0x14(r1)
    li r31, 0x3
    add r5, r5, r0
    lfs f0, lbl_8088528C
    stfs f3, 0x18(r1)
    mulli r0, r31, 0x14
    addi r4, r4, 0x332
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r30, 0xb0
    psq_st f1, 0x4(r5), 0, 0
    stfs f2, 0xc(r5)
    li r5, 0x0
    lwz r6, 0x62c(r30)
    stfs f2, 0x1c(r1)
    add r6, r6, r0
    stfs f0, 0x10(r6)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8033BD74_0000021C
    li r4, 0x0
    b lbl_fn_8033BD74_00000228
lbl_fn_8033BD74_0000021C:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r4, r3, r0
lbl_fn_8033BD74_00000228:
    lfs f0, 0x1c(r4)
    mulli r0, r31, 0x14
    lfs f3, 0xc(r4)
    addi r3, r1, 0x8
    lfs f2, 0x2c(r4)
    lwz r4, 0x62c(r30)
    stfs f3, 0x8(r1)
    add r4, r4, r0
    stfs f0, 0xc(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x4(r4), 0, 0
    stfs f2, 0x10(r1)
    stfs f2, 0xc(r4)
lbl_fn_8033BD74_0000025C:
    lwz r0, 0x94(r1)
    lwz r31, 0x8c(r1)
    lwz r30, 0x88(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_8033BFE8(void)
{
    nofralloc
    lwz r4, 0x62c(r4)
    psq_l f1, 0x4(r4), 0, 0
    lfs f2, 0xc(r4)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
    blr
}

asm void fn_8033C000(void)
{
    nofralloc
    stwu r1, -0x150(r1)
    mflr r0
    stw r0, 0x154(r1)
    addi r4, r1, 0x80
    stfd f31, 0x140(r1)
    psq_st f31, 0x148(r1), 0, 0
    lfs f31, lbl_80885238
    stfd f30, 0x130(r1)
    psq_st f30, 0x138(r1), 0, 0
    lfs f30, lbl_80885260
    stfd f29, 0x120(r1)
    psq_st f29, 0x128(r1), 0, 0
    stfd f28, 0x110(r1)
    psq_st f28, 0x118(r1), 0, 0
    stw r31, 0x10c(r1)
    stw r30, 0x108(r1)
    stw r29, 0x104(r1)
    mr r29, r3
    psq_l f1, 0x534(r3), 0, 0
    lfs f2, 0x53c(r3)
    stfs f2, 0x88(r1)
    psq_st f1, 0x0(r4), 0, 0
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x7
    bne lbl_fn_8033C000_00000580
    addi r3, r3, 0x1030
    bl fn_80126214
    addi r3, r29, 0x1088
    lfs f0, lbl_80885290
    psq_l f1, 0x0(r3), 0, 0
    addi r31, r1, 0x74
    lfs f2, 0x1090(r29)
    fmuls f30, f30, f0
    stfs f2, 0x7c(r1)
    addi r3, r1, 0x68
    psq_st f1, 0x0(r31), 0, 0
    lwz r4, 0x14b0(r29)
    lfs f0, 0x530(r29)
    lfs f3, 0x530(r4)
    lfs f5, 0x52c(r4)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r29)
    lfs f3, 0x528(r4)
    lfs f0, 0x528(r29)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x6c(r1)
    stfs f0, 0x68(r1)
    stfs f6, 0x70(r1)
    bl fn_805F9940
    lfs f3, lbl_80885270
    lfs f0, 0x177c(r29)
    fmuls f0, f3, f0
    fcmpo cr0, f1, f0
    bge lbl_fn_8033C000_00000370
    lfs f31, lbl_80885238
    b lbl_fn_8033C000_0000037C
lbl_fn_8033C000_00000370:
    mr r3, r31
    bl fn_805F9940
    fmr f31, f1
lbl_fn_8033C000_0000037C:
    lfs f0, lbl_80885294
    fcmpo cr0, f31, f0
    ble lbl_fn_8033C000_00000568
    addi r3, r1, 0x74
    addi r31, r1, 0x50
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r31
    lfs f2, 0x7c(r1)
    mr r4, r31
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x58(r1)
    bl fn_805F98D0
    lfs f2, 0x58(r1)
    addi r30, r1, 0x5c
    psq_l f1, 0x0(r31), 0, 0
    fabs f3, f2
    lfs f0, lbl_80885298
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0x64(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_8033C000_000003F8
    lfs f3, 0x5c(r1)
    lfs f0, lbl_80885238
    fcmpo cr0, f3, f0
    ble lbl_fn_8033C000_000003EC
    lfs f0, lbl_8088529C
    b lbl_fn_8033C000_000003F0
lbl_fn_8033C000_000003EC:
    lfs f0, lbl_808852A0
lbl_fn_8033C000_000003F0:
    stfs f0, 0x48(r1)
    b lbl_fn_8033C000_0000040C
lbl_fn_8033C000_000003F8:
    frsp f2, f2
    lfs f1, 0x5c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_8033C000_0000040C:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x90
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80885238
    addi r4, r1, 0x38
    lfs f28, 0x98(r1)
    mr r5, r4
    lfs f29, 0x94(r1)
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
    lfs f0, lbl_80885260
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x64(r1)
    stfs f3, 0xf0(r1)
    stfs f3, 0xf4(r1)
    stfs f3, 0xf8(r1)
    stfs f0, 0xfc(r1)
    stfs f13, 0x8(r1)
    stfs f29, 0xc(r1)
    stfs f28, 0x10(r1)
    stfs f13, 0xc0(r1)
    stfs f29, 0xc4(r1)
    stfs f28, 0xc8(r1)
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
    lfs f0, lbl_80885298
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8033C000_00000528
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80885238
    fcmpo cr0, f3, f0
    ble lbl_fn_8033C000_00000518
    lfs f0, lbl_8088529C
    b lbl_fn_8033C000_0000051C
lbl_fn_8033C000_00000518:
    lfs f0, lbl_808852A0
lbl_fn_8033C000_0000051C:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_8033C000_0000053C
lbl_fn_8033C000_00000528:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_8033C000_0000053C:
    lfs f2, lbl_80885238
    addi r3, r1, 0x44
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x80
    stfs f2, 0x4c(r1)
    stfs f2, 0x64(r1)
    frsp f2, f2
    psq_st f1, 0x0(r30), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x88(r1)
    b lbl_fn_8033C000_00000590
lbl_fn_8033C000_00000568:
    psq_l f1, 0x534(r29), 0, 0
    addi r3, r1, 0x80
    lfs f2, 0x53c(r29)
    stfs f2, 0x88(r1)
    psq_st f1, 0x0(r3), 0, 0
    b lbl_fn_8033C000_00000590
lbl_fn_8033C000_00000580:
    cmpwi r0, 0x6
    bne lbl_fn_8033C000_00000590
    bl fn_8013A258
    b lbl_fn_8033C000_000005B4
lbl_fn_8033C000_00000590:
    lfs f0, 0x568(r29)
    fmr f1, f31
    lfs f3, lbl_80885238
    mr r3, r29
    fmuls f2, f0, f30
    stfs f3, 0x52c(r29)
    addi r4, r1, 0x80
    li r5, 0x0
    bl fn_8013CB68
lbl_fn_8033C000_000005B4:
    lwz r0, 0x154(r1)
    psq_l f31, 0x148(r1), 0, 0
    lfd f31, 0x140(r1)
    psq_l f30, 0x138(r1), 0, 0
    lfd f30, 0x130(r1)
    psq_l f29, 0x128(r1), 0, 0
    lfd f29, 0x120(r1)
    psq_l f28, 0x118(r1), 0, 0
    lfd f28, 0x110(r1)
    lwz r31, 0x10c(r1)
    lwz r30, 0x108(r1)
    lwz r29, 0x104(r1)
    mtlr r0
    addi r1, r1, 0x150
    blr
}

asm void fn_8033C364(void)
{
    nofralloc
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    beqlr
    lfs f0, 0x570(r3)
    lfs f1, lbl_80885238
    fcmpo cr0, f0, f1
    cror eq, lt, eq
    bne lbl_fn_8033C364_00000638
    lfs f0, lbl_808852A4
    li r4, 0x0
    stfs f0, 0x2e8(r3)
    li r5, 0x2
    lfs f2, lbl_80885284
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    addi r3, r3, 0xb0
    b fn_80097C08
lbl_fn_8033C364_00000638:
    lfs f0, lbl_808852A4
    li r4, 0x0
    stfs f0, 0x2e8(r3)
    li r5, 0x14
    lfs f2, lbl_80885284
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    addi r3, r3, 0xb0
    b fn_80097C08
    blr
}

asm void fn_8033C3D8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    beq lbl_fn_8033C3D8_000006D8
    cmpwi r0, 0x7
    bne lbl_fn_8033C3D8_000006BC
    lwz r4, 0xd20(r3)
    lwz r0, 0x14b0(r3)
    cmplw r4, r0
    beq lbl_fn_8033C3D8_000006D8
    li r4, 0x3
    bl fn_8016E970
    lwz r4, 0x14b0(r31)
    mr r3, r31
    lfs f1, lbl_808852A8
    li r5, 0x0
    bl fn_80170A20
    b lbl_fn_8033C3D8_000006D8
lbl_fn_8033C3D8_000006BC:
    li r4, 0x3
    bl fn_8016E970
    lwz r4, 0x14b0(r31)
    mr r3, r31
    lfs f1, lbl_808852A8
    li r5, 0x0
    bl fn_80170A20
lbl_fn_8033C3D8_000006D8:
    lis r4, lbl_807C7030@ha
    mr r3, r31
    addi r4, r4, lbl_807C7030@l
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    stfs f2, 0x6c0(r31)
    psq_st f1, 0x6b8(r31), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    stfs f2, 0x57c(r31)
    psq_st f1, 0x574(r31), 0, 0
    bl fn_8033C000
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8033C490(void)
{
    nofralloc
    stwu r1, -0x540(r1)
    mflr r0
    stw r0, 0x544(r1)
    stfd f31, 0x530(r1)
    psq_st f31, 0x538(r1), 0, 0
    stfd f30, 0x520(r1)
    psq_st f30, 0x528(r1), 0, 0
    stfd f29, 0x510(r1)
    psq_st f29, 0x518(r1), 0, 0
    stfd f28, 0x500(r1)
    psq_st f28, 0x508(r1), 0, 0
    stfd f27, 0x4f0(r1)
    psq_st f27, 0x4f8(r1), 0, 0
    stfd f26, 0x4e0(r1)
    psq_st f26, 0x4e8(r1), 0, 0
    stw r31, 0x4dc(r1)
    mr r31, r3
    stw r30, 0x4d8(r1)
    stw r29, 0x4d4(r1)
    stw r28, 0x4d0(r1)
    lwz r4, 0x14b4(r3)
    cmpwi r4, 0x0
    bne lbl_fn_8033C490_00000C08
    lwz r5, 0x14b0(r3)
    addi r4, r1, 0xc0
    lfs f0, 0x530(r3)
    addi r30, r1, 0xcc
    lfs f7, 0x530(r5)
    lfs f9, 0x52c(r5)
    fsubs f2, f7, f0
    lfs f8, 0x52c(r3)
    lfs f7, 0x528(r5)
    fsubs f8, f9, f8
    lfs f0, 0x528(r3)
    stfs f2, 0xc8(r1)
    fsubs f7, f7, f0
    lfs f0, lbl_80885298
    stfs f8, 0xc4(r1)
    frsp f8, f2
    stfs f7, 0xc0(r1)
    fabs f7, f8
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    frsp f7, f7
    stfs f2, 0xd4(r1)
    fcmpo cr0, f7, f0
    bge lbl_fn_8033C490_000007FC
    lfs f7, 0xcc(r1)
    lfs f0, lbl_80885238
    fcmpo cr0, f7, f0
    ble lbl_fn_8033C490_000007F0
    lfs f0, lbl_8088529C
    b lbl_fn_8033C490_000007F4
lbl_fn_8033C490_000007F0:
    lfs f0, lbl_808852A0
lbl_fn_8033C490_000007F4:
    stfs f0, 0xb8(r1)
    b lbl_fn_8033C490_00000810
lbl_fn_8033C490_000007FC:
    fmr f2, f8
    lfs f1, 0xcc(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0xb8(r1)
lbl_fn_8033C490_00000810:
    lfs f0, 0xb8(r1)
    addi r3, r1, 0x428
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f7, lbl_80885238
    addi r4, r1, 0xa8
    lfs f26, 0x430(r1)
    mr r5, r4
    lfs f27, 0x42c(r1)
    addi r3, r1, 0x458
    lfs f28, 0x428(r1)
    lfs f29, 0x440(r1)
    lfs f30, 0x43c(r1)
    lfs f31, 0x438(r1)
    lfs f13, 0x450(r1)
    lfs f12, 0x44c(r1)
    lfs f11, 0x448(r1)
    lfs f10, 0x454(r1)
    lfs f9, 0x444(r1)
    lfs f8, 0x434(r1)
    lfs f0, lbl_80885260
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0xd4(r1)
    stfs f7, 0x488(r1)
    stfs f7, 0x48c(r1)
    stfs f7, 0x490(r1)
    stfs f0, 0x494(r1)
    stfs f28, 0x78(r1)
    stfs f27, 0x7c(r1)
    stfs f26, 0x80(r1)
    stfs f28, 0x458(r1)
    stfs f27, 0x45c(r1)
    stfs f26, 0x460(r1)
    stfs f31, 0x84(r1)
    stfs f30, 0x88(r1)
    stfs f29, 0x8c(r1)
    stfs f31, 0x468(r1)
    stfs f30, 0x46c(r1)
    stfs f29, 0x470(r1)
    stfs f11, 0x90(r1)
    stfs f12, 0x94(r1)
    stfs f13, 0x98(r1)
    stfs f11, 0x478(r1)
    stfs f12, 0x47c(r1)
    stfs f13, 0x480(r1)
    stfs f8, 0x9c(r1)
    stfs f9, 0xa0(r1)
    stfs f10, 0xa4(r1)
    stfs f8, 0x464(r1)
    stfs f9, 0x474(r1)
    stfs f10, 0x484(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0xb0(r1)
    bl fn_805F9750
    lfs f2, 0xb0(r1)
    lfs f0, lbl_80885298
    fabs f7, f2
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_8033C490_0000092C
    lfs f7, 0xac(r1)
    lfs f0, lbl_80885238
    fcmpo cr0, f7, f0
    ble lbl_fn_8033C490_0000091C
    lfs f0, lbl_8088529C
    b lbl_fn_8033C490_00000920
lbl_fn_8033C490_0000091C:
    lfs f0, lbl_808852A0
lbl_fn_8033C490_00000920:
    fneg f0, f0
    stfs f0, 0xb4(r1)
    b lbl_fn_8033C490_00000940
lbl_fn_8033C490_0000092C:
    lfs f1, 0xac(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0xb4(r1)
lbl_fn_8033C490_00000940:
    addi r3, r1, 0xb4
    lfs f7, lbl_80885238
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_8074A498@ha
    psq_st f1, 0x0(r30), 0, 0
    fmr f2, f7
    lfs f0, 0x538(r31)
    lfs f31, 0xd0(r1)
    stfs f2, 0xd4(r1)
    fsubs f1, f31, f0
    lfd f2, lbl_8074A498@l(r3)
    stfs f7, 0xbc(r1)
    bl fn_8068AEA8
    frsp f8, f1
    lfs f0, lbl_808852AC
    fcmpo cr0, f8, f0
    ble lbl_fn_8033C490_0000098C
    lfs f0, lbl_80885280
    fsubs f8, f8, f0
lbl_fn_8033C490_0000098C:
    lfs f0, lbl_808852B0
    fcmpo cr0, f8, f0
    bge lbl_fn_8033C490_000009A0
    lfs f0, lbl_80885280
    fadds f8, f8, f0
lbl_fn_8033C490_000009A0:
    lfs f0, lbl_80885238
    fcmpo cr0, f8, f0
    bge lbl_fn_8033C490_000009B4
    fneg f0, f8
    b lbl_fn_8033C490_000009B8
lbl_fn_8033C490_000009B4:
    fmr f0, f8
lbl_fn_8033C490_000009B8:
    lfs f7, lbl_808852B4
    fcmpo cr0, f0, f7
    cror eq, lt, eq
    bne lbl_fn_8033C490_000009D0
    stfs f31, 0x538(r31)
    b lbl_fn_8033C490_000009FC
lbl_fn_8033C490_000009D0:
    lfs f0, lbl_80885238
    fcmpo cr0, f8, f0
    cror eq, lt, eq
    bne lbl_fn_8033C490_000009F0
    lfs f0, 0x538(r31)
    fsubs f0, f0, f7
    stfs f0, 0x538(r31)
    b lbl_fn_8033C490_000009FC
lbl_fn_8033C490_000009F0:
    lfs f0, 0x538(r31)
    fadds f0, f0, f7
    stfs f0, 0x538(r31)
lbl_fn_8033C490_000009FC:
    lfs f7, 0x53c(r31)
    addi r30, r1, 0x498
    lfs f9, lbl_80885274
    lfs f0, 0x538(r31)
    fmuls f1, f7, f9
    lfs f8, 0x534(r31)
    lfs f7, lbl_80885238
    fmuls f10, f0, f9
    lfs f0, lbl_80885260
    fmuls f8, f8, f9
    fcmpu cr0, f7, f1
    stfs f8, 0xf0(r1)
    stfs f10, 0xf4(r1)
    stfs f1, 0xf8(r1)
    stfs f7, 0x4c4(r1)
    stfs f7, 0x4bc(r1)
    stfs f7, 0x4b8(r1)
    stfs f7, 0x4b4(r1)
    stfs f7, 0x4b0(r1)
    stfs f7, 0x4a8(r1)
    stfs f7, 0x4a4(r1)
    stfs f7, 0x4a0(r1)
    stfs f7, 0x49c(r1)
    stfs f0, 0x4c0(r1)
    stfs f0, 0x4ac(r1)
    stfs f0, 0x498(r1)
    beq lbl_fn_8033C490_00000AB8
    addi r3, r1, 0x338
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x338
    addi r5, r1, 0x308
    bl fn_805F89F0
    addi r3, r1, 0x308
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
lbl_fn_8033C490_00000AB8:
    lfs f0, lbl_80885238
    lfs f1, 0xf4(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_8033C490_00000B18
    addi r3, r1, 0x398
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x398
    addi r5, r1, 0x368
    bl fn_805F89F0
    addi r3, r1, 0x368
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
lbl_fn_8033C490_00000B18:
    lfs f0, lbl_80885238
    lfs f1, 0xf0(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_8033C490_00000B78
    addi r3, r1, 0x3f8
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x3f8
    addi r5, r1, 0x3c8
    bl fn_805F89F0
    addi r3, r1, 0x3c8
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
lbl_fn_8033C490_00000B78:
    lfs f7, 0x2e4(r31)
    lfs f0, lbl_808852B8
    fcmpo cr0, f7, f0
    cror eq, gt, eq
    bne lbl_fn_8033C490_0000127C
    lwz r3, 0x14b4(r31)
    mr r4, r31
    li r5, 0x3e8
    li r6, 0x1
    addi r0, r3, 0x1
    stw r0, 0x14b4(r31)
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    mr r3, r31
    li r4, 0x3e8
    bl fn_80232B7C
    lfs f1, lbl_80885260
    lis r7, lbl_807C7030@ha
    stfs f1, 0x68(r1)
    addi r7, r7, lbl_807C7030@l
    li r3, -0x1
    li r0, 0x1
    stfs f1, 0x6c(r1)
    mr r8, r7
    addi r4, r31, 0x15bc
    addi r5, r31, 0xb0
    stfs f1, 0x70(r1)
    addi r9, r1, 0x68
    li r6, 0x0
    li r10, -0x1
    stfs f1, 0x74(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    b lbl_fn_8033C490_0000127C
lbl_fn_8033C490_00000C08:
    cmpwi r4, 0x1
    bne lbl_fn_8033C490_0000115C
    lfs f7, 0x2e4(r3)
    lfs f0, lbl_808852BC
    fcmpo cr0, f7, f0
    cror eq, gt, eq
    bne lbl_fn_8033C490_0000127C
    addi r0, r4, 0x1
    stw r0, 0x14b4(r3)
    lfs f7, lbl_80885238
    lis r4, lbl_8074A4C0@ha
    lfs f0, lbl_80885278
    addi r4, r4, lbl_8074A4C0@l
    stfs f7, 0x108(r1)
    addi r4, r4, 0x327
    li r5, 0x0
    addi r3, r3, 0xb0
    stfs f7, 0x10c(r1)
    stfs f0, 0x110(r1)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8033C490_00000C68
    li r3, 0x0
    b lbl_fn_8033C490_00000C74
lbl_fn_8033C490_00000C68:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r3, r3, r0
lbl_fn_8033C490_00000C74:
    addi r4, r1, 0x108
    mr r5, r4
    bl fn_805F93C0
    lwz r3, 0x14b0(r31)
    lis r4, lbl_8074A4C0@ha
    addi r4, r4, lbl_8074A4C0@l
    li r5, 0x0
    addi r28, r3, 0xb0
    mr r3, r28
    addi r4, r4, 0x32c
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8033C490_00000CB0
    li r4, 0x0
    b lbl_fn_8033C490_00000CBC
lbl_fn_8033C490_00000CB0:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r28)
    add r4, r3, r0
lbl_fn_8033C490_00000CBC:
    lfs f8, 0x2c(r4)
    addi r5, r1, 0xe4
    lfs f0, 0x110(r1)
    addi r3, r31, 0x15d4
    lfs f9, 0x1c(r4)
    lfs f10, 0xc(r4)
    fsubs f2, f8, f0
    lfs f7, 0x10c(r1)
    mr r4, r3
    lfs f0, 0x108(r1)
    fsubs f7, f9, f7
    stfs f10, 0xfc(r1)
    fsubs f0, f10, f0
    stfs f7, 0xe8(r1)
    stfs f0, 0xe4(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f9, 0x100(r1)
    stfs f8, 0x104(r1)
    stfs f2, 0xec(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x15dc(r31)
    bl fn_805F98D0
    lfs f2, 0x15dc(r31)
    addi r3, r31, 0x15d4
    lfs f8, lbl_80885238
    addi r30, r1, 0xd8
    fabs f9, f2
    lfs f7, lbl_80885260
    psq_l f1, 0x0(r3), 0, 0
    lfs f0, lbl_80885298
    frsp f9, f9
    stfs f8, 0x160c(r31)
    stfs f8, 0x1604(r31)
    fcmpo cr0, f9, f0
    stfs f8, 0x1600(r31)
    stfs f8, 0x15fc(r31)
    stfs f8, 0x15f8(r31)
    stfs f8, 0x15f0(r31)
    stfs f8, 0x15ec(r31)
    stfs f8, 0x15e8(r31)
    stfs f8, 0x15e4(r31)
    stfs f7, 0x1608(r31)
    stfs f7, 0x15f4(r31)
    stfs f7, 0x15e0(r31)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0xe0(r1)
    bge lbl_fn_8033C490_00000D98
    lfs f0, 0xd8(r1)
    fcmpo cr0, f0, f8
    ble lbl_fn_8033C490_00000D8C
    lfs f0, lbl_8088529C
    b lbl_fn_8033C490_00000D90
lbl_fn_8033C490_00000D8C:
    lfs f0, lbl_808852A0
lbl_fn_8033C490_00000D90:
    stfs f0, 0x5c(r1)
    b lbl_fn_8033C490_00000DAC
lbl_fn_8033C490_00000D98:
    frsp f2, f2
    lfs f1, 0xd8(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x5c(r1)
lbl_fn_8033C490_00000DAC:
    lfs f0, 0x5c(r1)
    addi r3, r1, 0x298
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f7, lbl_80885238
    addi r4, r1, 0x4c
    lfs f31, 0x2a0(r1)
    mr r5, r4
    lfs f30, 0x29c(r1)
    addi r3, r1, 0x2c8
    lfs f29, 0x298(r1)
    lfs f28, 0x2b0(r1)
    lfs f27, 0x2ac(r1)
    lfs f26, 0x2a8(r1)
    lfs f13, 0x2c0(r1)
    lfs f12, 0x2bc(r1)
    lfs f11, 0x2b8(r1)
    lfs f10, 0x2c4(r1)
    lfs f9, 0x2b4(r1)
    lfs f8, 0x2a4(r1)
    lfs f0, lbl_80885260
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0xe0(r1)
    stfs f7, 0x2f8(r1)
    stfs f7, 0x2fc(r1)
    stfs f7, 0x300(r1)
    stfs f0, 0x304(r1)
    stfs f29, 0x1c(r1)
    stfs f30, 0x20(r1)
    stfs f31, 0x24(r1)
    stfs f29, 0x2c8(r1)
    stfs f30, 0x2cc(r1)
    stfs f31, 0x2d0(r1)
    stfs f26, 0x28(r1)
    stfs f27, 0x2c(r1)
    stfs f28, 0x30(r1)
    stfs f26, 0x2d8(r1)
    stfs f27, 0x2dc(r1)
    stfs f28, 0x2e0(r1)
    stfs f11, 0x34(r1)
    stfs f12, 0x38(r1)
    stfs f13, 0x3c(r1)
    stfs f11, 0x2e8(r1)
    stfs f12, 0x2ec(r1)
    stfs f13, 0x2f0(r1)
    stfs f8, 0x40(r1)
    stfs f9, 0x44(r1)
    stfs f10, 0x48(r1)
    stfs f8, 0x2d4(r1)
    stfs f9, 0x2e4(r1)
    stfs f10, 0x2f4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x54(r1)
    bl fn_805F9750
    lfs f2, 0x54(r1)
    lfs f0, lbl_80885298
    fabs f7, f2
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_8033C490_00000EC8
    lfs f7, 0x50(r1)
    lfs f0, lbl_80885238
    fcmpo cr0, f7, f0
    ble lbl_fn_8033C490_00000EB8
    lfs f0, lbl_8088529C
    b lbl_fn_8033C490_00000EBC
lbl_fn_8033C490_00000EB8:
    lfs f0, lbl_808852A0
lbl_fn_8033C490_00000EBC:
    fneg f0, f0
    stfs f0, 0x58(r1)
    b lbl_fn_8033C490_00000EDC
lbl_fn_8033C490_00000EC8:
    lfs f1, 0x50(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x58(r1)
lbl_fn_8033C490_00000EDC:
    lfs f2, lbl_80885238
    addi r3, r1, 0x58
    lfs f7, lbl_80885260
    addi r29, r31, 0x15e0
    frsp f0, f2
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x60(r1)
    addi r28, r1, 0x148
    fcmpu cr0, f2, f0
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0xe0(r1)
    stfs f2, 0x174(r1)
    stfs f2, 0x16c(r1)
    stfs f2, 0x168(r1)
    stfs f2, 0x164(r1)
    stfs f2, 0x160(r1)
    stfs f2, 0x158(r1)
    stfs f2, 0x154(r1)
    stfs f2, 0x150(r1)
    stfs f2, 0x14c(r1)
    stfs f7, 0x170(r1)
    stfs f7, 0x15c(r1)
    stfs f7, 0x148(r1)
    beq lbl_fn_8033C490_00000F90
    fmr f1, f0
    addi r3, r1, 0x238
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r28
    addi r4, r1, 0x238
    addi r5, r1, 0x268
    bl fn_805F89F0
    addi r3, r1, 0x268
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
lbl_fn_8033C490_00000F90:
    lfs f0, lbl_80885238
    lfs f1, 0xdc(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_8033C490_00000FF0
    addi r3, r1, 0x1d8
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r28
    addi r4, r1, 0x1d8
    addi r5, r1, 0x208
    bl fn_805F89F0
    addi r3, r1, 0x208
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
lbl_fn_8033C490_00000FF0:
    lfs f0, lbl_80885238
    lfs f1, 0xd8(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_8033C490_00001050
    addi r3, r1, 0x178
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r28
    addi r4, r1, 0x178
    addi r5, r1, 0x1a8
    bl fn_805F89F0
    addi r3, r1, 0x1a8
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
lbl_fn_8033C490_00001050:
    mr r3, r29
    mr r4, r28
    addi r5, r1, 0x118
    bl fn_805F89F0
    addi r5, r1, 0x118
    mr r3, r31
    psq_l f1, 0x0(r5), 0, 0
    li r4, 0x3e8
    psq_l f2, 0x8(r5), 0, 0
    psq_l f3, 0x10(r5), 0, 0
    psq_l f4, 0x18(r5), 0, 0
    psq_l f5, 0x20(r5), 0, 0
    psq_l f6, 0x28(r5), 0, 0
    psq_st f6, 0x28(r29), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    lfs f0, 0x108(r1)
    stfs f0, 0x15ec(r31)
    lfs f0, 0x10c(r1)
    stfs f0, 0x15fc(r31)
    lfs f0, 0x110(r1)
    stfs f0, 0x160c(r31)
    bl fn_80232B7C
    li r0, 0x0
    stw r0, 0x8(r1)
    li r3, -0x1
    lfs f1, lbl_80885260
    stw r3, 0xc(r1)
    li r0, 0x1
    addi r4, r31, 0x15c8
    addi r7, r31, 0x15e0
    stw r0, 0x10(r1)
    li r5, -0x1
    li r6, 0x5
    li r8, 0x0
    lwz r3, lbl_8087F3C0
    li r9, 0x0
    li r10, 0x0
    bl fn_8023A680
    mr r3, r31
    bl fn_80144710
    lwz r3, lbl_8087F048
    mr r4, r31
    lwz r5, 0x14d0(r31)
    addi r6, r1, 0x108
    lfs f1, lbl_80885238
    addi r7, r31, 0x15d4
    lfs f2, lbl_80885260
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_800F8574
    lis r4, lbl_8074A4C0@ha
    lfs f1, lbl_80885260
    addi r4, r4, lbl_8074A4C0@l
    addi r3, r1, 0x18
    addi r4, r4, 0x339
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x18
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_8033C490_0000127C
lbl_fn_8033C490_0000115C:
    lfs f26, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f26, f1
    cror eq, gt, eq
    bne lbl_fn_8033C490_0000127C
    li r30, 0x0
    stw r30, 0x14b4(r31)
    stw r30, 0x14b8(r31)
    stw r30, 0x14c0(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r4, r31
    li r5, 0x3e8
    li r6, 0x1
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3e9
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3ea
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3ed
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3ef
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3f0
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3f1
    li r6, 0x0
    bl fn_80239DAC
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lfs f0, lbl_80885260
    li r0, 0x1
    stw r30, 0x58c(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80885238
    li r4, 0x0
    stw r0, 0x3fc(r31)
    li r5, 0x2
    lfs f2, lbl_80885284
    li r6, 0x1
    stfs f0, 0x2fc(r31)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3e8
    li r6, 0x1
    bl fn_80239DAC
lbl_fn_8033C490_0000127C:
    lwz r0, 0x544(r1)
    psq_l f31, 0x538(r1), 0, 0
    lfd f31, 0x530(r1)
    psq_l f30, 0x528(r1), 0, 0
    lfd f30, 0x520(r1)
    psq_l f29, 0x518(r1), 0, 0
    lfd f29, 0x510(r1)
    psq_l f28, 0x508(r1), 0, 0
    lfd f28, 0x500(r1)
    psq_l f27, 0x4f8(r1), 0, 0
    lfd f27, 0x4f0(r1)
    psq_l f26, 0x4e8(r1), 0, 0
    lfd f26, 0x4e0(r1)
    lwz r31, 0x4dc(r1)
    lwz r30, 0x4d8(r1)
    lwz r29, 0x4d4(r1)
    lwz r28, 0x4d0(r1)
    mtlr r0
    addi r1, r1, 0x540
    blr
}

asm void fn_8033D040(void)
{
    nofralloc
    stwu r1, -0x230(r1)
    mflr r0
    stw r0, 0x234(r1)
    stfd f31, 0x220(r1)
    psq_st f31, 0x228(r1), 0, 0
    stw r31, 0x21c(r1)
    mr r31, r3
    stw r30, 0x218(r1)
    lwz r6, 0x14b4(r3)
    cmpwi r6, 0x0
    bne lbl_fn_8033D040_00001408
    lfs f10, lbl_80885238
    addi r5, r1, 0x98
    lfs f9, lbl_80885260
    li r4, 0x1
    lfs f8, 0x15a0(r3)
    lfs f7, 0x159c(r3)
    lfs f0, 0x1598(r3)
    fadds f8, f8, f9
    fadds f7, f7, f10
    stfs f10, 0x8c(r1)
    fadds f0, f0, f10
    lfs f1, lbl_808852C0
    stfs f10, 0x90(r1)
    stfs f9, 0x94(r1)
    stfs f0, 0x98(r1)
    stfs f7, 0x9c(r1)
    stfs f8, 0xa0(r1)
    bl fn_8033E8D4
    lwz r0, 0x2dc(r31)
    cmpwi r0, 0x141
    bne lbl_fn_8033D040_000019BC
    lwz r4, 0x14b4(r31)
    li r30, 0x1
    lfs f0, lbl_80885260
    addi r3, r31, 0xb0
    addi r0, r4, 0x1
    stw r0, 0x14b4(r31)
    lfs f1, lbl_80885238
    li r4, 0x0
    stw r30, 0x3fc(r31)
    li r5, 0x16b
    lfs f2, lbl_80885284
    li r6, 0x0
    stfs f0, 0x2fc(r31)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    mr r3, r31
    li r4, 0x3ea
    bl fn_80232B7C
    lfs f0, lbl_80885238
    li r0, -0x1
    lfs f1, lbl_80885260
    addi r4, r31, 0x162c
    stfs f0, 0x64(r1)
    addi r5, r31, 0xb0
    addi r7, r1, 0x58
    addi r8, r1, 0x64
    stfs f0, 0x68(r1)
    addi r9, r1, 0x70
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x6c(r1)
    stfs f0, 0x58(r1)
    stfs f0, 0x5c(r1)
    stfs f0, 0x60(r1)
    stfs f1, 0x70(r1)
    stfs f1, 0x74(r1)
    stfs f1, 0x78(r1)
    stfs f1, 0x7c(r1)
    stw r0, 0x8(r1)
    stw r30, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    li r0, 0x0
    stw r0, 0x14b8(r31)
    b lbl_fn_8033D040_000019BC
lbl_fn_8033D040_00001408:
    cmpwi r6, 0x1
    bne lbl_fn_8033D040_00001548
    lwz r4, 0x14d8(r3)
    lwz r5, 0x14b8(r3)
    lwz r0, 0xc0(r4)
    cmpw r5, r0
    blt lbl_fn_8033D040_000014D4
    addi r0, r6, 0x1
    stw r0, 0x14b4(r3)
    lfs f1, lbl_80885238
    li r4, 0x0
    lfs f2, lbl_80885284
    li r5, 0x16d
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    addi r3, r3, 0xb0
    bl fn_80097C08
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3ea
    li r6, 0x0
    bl fn_80239DAC
    mr r3, r31
    li r4, 0x3e9
    bl fn_80232B7C
    lfs f0, lbl_80885238
    li r3, -0x1
    lfs f1, lbl_80885260
    li r0, 0x1
    stfs f0, 0x38(r1)
    addi r4, r31, 0x1638
    addi r5, r31, 0xb0
    addi r7, r1, 0x2c
    stfs f0, 0x3c(r1)
    addi r8, r1, 0x38
    addi r9, r1, 0x48
    li r6, 0x0
    stfs f0, 0x40(r1)
    li r10, -0x1
    stfs f0, 0x2c(r1)
    stfs f0, 0x30(r1)
    stfs f0, 0x34(r1)
    stfs f1, 0x48(r1)
    stfs f1, 0x4c(r1)
    stfs f1, 0x50(r1)
    stfs f1, 0x54(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
lbl_fn_8033D040_000014D4:
    lfs f7, lbl_80885288
    lfs f0, 0x52c(r31)
    lfs f8, lbl_808852C0
    fadds f0, f7, f0
    fcmpo cr0, f8, f0
    bge lbl_fn_8033D040_000014F0
    b lbl_fn_8033D040_000014F4
lbl_fn_8033D040_000014F0:
    fmr f8, f0
lbl_fn_8033D040_000014F4:
    lwz r0, 0x2dc(r31)
    stfs f8, 0x52c(r31)
    cmpwi r0, 0x16b
    bne lbl_fn_8033D040_000019BC
    lfs f31, 0x2e4(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_8033D040_000019BC
    lfs f1, lbl_80885260
    addi r3, r31, 0xb0
    lfs f2, lbl_80885284
    li r4, 0x0
    li r5, 0x16c
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_8033D040_000019BC
lbl_fn_8033D040_00001548:
    cmpwi r6, 0x2
    bne lbl_fn_8033D040_00001834
    lfs f8, 0x2e4(r3)
    lfs f7, lbl_808852C4
    lfs f0, lbl_808852C8
    fsubs f7, f8, f7
    lfs f8, lbl_80885238
    fmuls f0, f7, f0
    fcmpo cr0, f8, f0
    ble lbl_fn_8033D040_00001574
    b lbl_fn_8033D040_00001578
lbl_fn_8033D040_00001574:
    fmr f8, f0
lbl_fn_8033D040_00001578:
    lfs f9, lbl_80885260
    fcmpo cr0, f9, f8
    bge lbl_fn_8033D040_00001588
    b lbl_fn_8033D040_000015B0
lbl_fn_8033D040_00001588:
    lfs f8, 0x2e4(r3)
    lfs f7, lbl_808852C4
    lfs f0, lbl_808852C8
    fsubs f7, f8, f7
    lfs f9, lbl_80885238
    fmuls f0, f7, f0
    fcmpo cr0, f9, f0
    ble lbl_fn_8033D040_000015AC
    b lbl_fn_8033D040_000015B0
lbl_fn_8033D040_000015AC:
    fmr f9, f0
lbl_fn_8033D040_000015B0:
    lfs f0, lbl_8087DC5C
    lfs f8, lbl_8087DC58
    lfs f10, 0x2e4(r3)
    fsubs f7, f0, f8
    lfs f0, lbl_808852CC
    fcmpo cr0, f10, f0
    fmadds f0, f9, f7, f8
    stfs f0, 0x52c(r3)
    lwz r6, lbl_8087F430
    cror eq, gt, eq
    bne lbl_fn_8033D040_000019BC
    lwz r4, 0x14b4(r3)
    li r0, 0xa
    lfs f11, lbl_80885238
    addi r30, r1, 0x1e0
    addi r4, r4, 0x1
    stw r4, 0x14b4(r3)
    lfs f10, lbl_808852C0
    lwz r4, 0x96c(r6)
    lfs f9, lbl_808852D0
    srwi r5, r4, 31
    clrlwi r4, r4, 31
    xor r4, r4, r5
    lfs f8, lbl_8088523C
    subf r4, r5, r4
    stw r4, 0x96c(r6)
    lfs f7, lbl_808852D4
    stw r0, 0x970(r6)
    lfs f0, lbl_80885260
    stfs f9, 0x974(r6)
    stfs f8, 0x978(r6)
    stfs f11, 0xa4(r1)
    stfs f11, 0xa8(r1)
    stfs f7, 0xac(r1)
    stfs f11, 0x20c(r1)
    stfs f11, 0x204(r1)
    stfs f11, 0x200(r1)
    stfs f11, 0x1fc(r1)
    stfs f11, 0x1f8(r1)
    stfs f11, 0x1f0(r1)
    stfs f11, 0x1ec(r1)
    stfs f11, 0x1e8(r1)
    stfs f11, 0x1e4(r1)
    stfs f0, 0x208(r1)
    stfs f0, 0x1f4(r1)
    stfs f0, 0x1e0(r1)
    lfs f1, 0x53c(r3)
    stfs f11, 0xb0(r1)
    fcmpu cr0, f11, f1
    stfs f11, 0x18(r1)
    stfs f10, 0x28(r1)
    beq lbl_fn_8033D040_000016D0
    addi r3, r1, 0xf0
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0xf0
    addi r5, r1, 0xc0
    bl fn_805F89F0
    addi r3, r1, 0xc0
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
lbl_fn_8033D040_000016D0:
    lfs f0, lbl_80885238
    lfs f1, 0x538(r31)
    fcmpu cr0, f0, f1
    beq lbl_fn_8033D040_00001730
    addi r3, r1, 0x150
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x150
    addi r5, r1, 0x120
    bl fn_805F89F0
    addi r3, r1, 0x120
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
lbl_fn_8033D040_00001730:
    lfs f0, lbl_80885238
    lfs f1, 0x534(r31)
    fcmpu cr0, f0, f1
    beq lbl_fn_8033D040_00001790
    addi r3, r1, 0x1b0
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x1b0
    addi r5, r1, 0x180
    bl fn_805F89F0
    addi r3, r1, 0x180
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
lbl_fn_8033D040_00001790:
    addi r4, r1, 0xa4
    addi r3, r1, 0x1e0
    mr r5, r4
    bl fn_805F93C0
    li r0, 0x1
    stb r0, 0x1644(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x1658(r31)
    lis r4, lbl_8074A4C0@ha
    addi r4, r4, lbl_8074A4C0@l
    lfs f9, 0x52c(r31)
    lfs f8, 0xa8(r1)
    addi r6, r1, 0x80
    lfs f7, 0x528(r31)
    addi r7, r31, 0x164c
    fadds f9, f9, f8
    lfs f0, 0xa4(r1)
    lfs f8, 0x530(r31)
    addi r3, r1, 0x10
    fadds f7, f7, f0
    stfs f9, 0x84(r1)
    stfs f7, 0x80(r1)
    addi r4, r4, 0x348
    lfs f0, 0xac(r1)
    li r5, 0x0
    psq_l f1, 0x0(r6), 0, 0
    li r6, -0x1
    fadds f2, f8, f0
    psq_st f1, 0x0(r7), 0, 0
    lfs f0, lbl_80885238
    lfs f1, lbl_80885260
    stfs f2, 0x88(r1)
    stfs f2, 0x1654(r31)
    stfs f0, 0x1650(r31)
    stfs f0, 0x9fc(r31)
    bl fn_800C31F4
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_8033D040_000019BC
lbl_fn_8033D040_00001834:
    lfs f8, 0x2e4(r3)
    lfs f7, lbl_808852C4
    lfs f0, lbl_808852C8
    fsubs f7, f8, f7
    lfs f8, lbl_80885238
    fmuls f0, f7, f0
    fcmpo cr0, f8, f0
    ble lbl_fn_8033D040_00001858
    b lbl_fn_8033D040_0000185C
lbl_fn_8033D040_00001858:
    fmr f8, f0
lbl_fn_8033D040_0000185C:
    lfs f9, lbl_80885260
    fcmpo cr0, f9, f8
    bge lbl_fn_8033D040_0000186C
    b lbl_fn_8033D040_00001894
lbl_fn_8033D040_0000186C:
    lfs f8, 0x2e4(r3)
    lfs f7, lbl_808852C4
    lfs f0, lbl_808852C8
    fsubs f7, f8, f7
    lfs f9, lbl_80885238
    fmuls f0, f7, f0
    fcmpo cr0, f9, f0
    ble lbl_fn_8033D040_00001890
    b lbl_fn_8033D040_00001894
lbl_fn_8033D040_00001890:
    fmr f9, f0
lbl_fn_8033D040_00001894:
    lfs f0, lbl_8087DC64
    li r4, 0x0
    lfs f7, lbl_8087DC60
    lfs f31, 0x2e4(r3)
    fsubs f0, f0, f7
    fmadds f0, f9, f0, f7
    stfs f0, 0x52c(r3)
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_8033D040_000019BC
    li r30, 0x0
    stw r30, 0x14b4(r31)
    stw r30, 0x14b8(r31)
    stw r30, 0x14c0(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r4, r31
    li r5, 0x3e8
    li r6, 0x1
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3e9
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3ea
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3ed
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3ef
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3f0
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3f1
    li r6, 0x0
    bl fn_80239DAC
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lfs f0, lbl_80885260
    li r0, 0x1
    stw r30, 0x58c(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80885238
    li r4, 0x0
    stw r0, 0x3fc(r31)
    li r5, 0x2
    lfs f2, lbl_80885284
    li r6, 0x1
    stfs f0, 0x2fc(r31)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    lfs f0, lbl_80885238
    stfs f0, 0x52c(r31)
lbl_fn_8033D040_000019BC:
    lwz r0, 0x234(r1)
    psq_l f31, 0x228(r1), 0, 0
    lfd f31, 0x220(r1)
    lwz r31, 0x21c(r1)
    lwz r30, 0x218(r1)
    mtlr r0
    addi r1, r1, 0x230
    blr
}
