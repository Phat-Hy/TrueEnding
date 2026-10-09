#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_25(void);
extern void _restgpr_27(void);
extern void _savegpr_25(void);
extern void _savegpr_27(void);
extern void dtor_80013D60(void);
extern void dtor_80084684(void);
extern void fn_8000D760(void);
extern void fn_8003E4A4(void);
extern void fn_8004212C(void);
extern void fn_8004ED34(void);
extern void fn_80057A64(void);
extern void fn_80057A68(void);
extern void fn_80063D3C(void);
extern void fn_8006AFF8(void);
extern void fn_8006CA80(void);
extern void fn_800874C8(void);
extern void fn_8008771C(void);
extern void fn_80087994(void);
extern void fn_8008937C(void);
extern void fn_800897D8(void);
extern void fn_80092814(void);
extern void fn_80097C08(void);
extern void fn_800D246C(void);
extern void fn_800EC254(void);
extern void fn_800EC2C4(void);
extern void fn_800EC440(void);
extern void fn_800EC534(void);
extern void fn_800EC5BC(void);
extern void fn_800EC654(void);
extern void fn_800ED42C(void);
extern void fn_800ED4D8(void);
extern void fn_800ED4E0(void);
extern void fn_800EDFE8(void);
extern void fn_800F8548(void);
extern void fn_800FAB80(void);
extern void fn_80103F60(void);
extern void fn_80108378(void);
extern void fn_80121F00(void);
extern void fn_8016E4C4(void);
extern void fn_8016E970(void);
extern void fn_801F3FF8(void);
extern void fn_8020A780(void);
extern void fn_80232B7C(void);
extern void fn_80237518(void);
extern void fn_802375C4(void);
extern void fn_80237654(void);
extern void fn_802377B8(void);
extern void fn_8023780C(void);
extern void fn_8023781C(void);
extern void fn_80239DAC(void);
extern void fn_8023A8B4(void);
extern void fn_80288390(void);
extern void fn_802BABC0(void);
extern void fn_802FCF14(void);
extern void fn_803165E0(void);
extern void fn_80338CDC(void);
extern void fn_8034585C(void);
extern void fn_803458C0(void);
extern void fn_803458CC(void);
extern void fn_803458D0(void);
extern void fn_803458E0(void);
extern void fn_80354110(void);
extern void fn_8035B694(void);
extern void fn_8035B78C(void);
extern void fn_80370320(void);
extern void fn_80370A78(void);
extern void fn_80370AE4(void);
extern void fn_803EA77C(void);
extern void fn_80473E8C(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9990(void);
extern void fn_80682544(void);
extern void fn_8068AE9C(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);
extern void fn_8068B100(void);
extern void fn_806958E0(void);
extern void fn_806959D8(void);

/* External data declarations */
extern u8 lbl_8074A490[];
extern u8 lbl_8074A498[];
extern u8 lbl_8074A4A0[];
extern u8 lbl_8074A4C0[];
extern u8 lbl_8074AA58[];
extern u8 lbl_80789550[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EF10;
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F498;
extern u32 lbl_8087F4A0;
extern u32 lbl_8087F8A0;
extern u32 lbl_80885238;
extern u32 lbl_80885254;
extern u32 lbl_8088525C;
extern u32 lbl_80885260;
extern u32 lbl_80885270;
extern u32 lbl_8088527C;
extern u32 lbl_80885280;
extern u32 lbl_80885284;
extern u32 lbl_80885288;
extern u32 lbl_80885298;
extern u32 lbl_8088529C;
extern u32 lbl_808852A0;
extern u32 lbl_808852A4;
extern u32 lbl_808852AC;
extern u32 lbl_808852B0;
extern u32 lbl_808852C4;
extern u32 lbl_808852C8;
extern u32 lbl_808852D0;
extern u32 lbl_808852F4;
extern u32 lbl_808852F8;
extern u32 lbl_80885300;
extern u32 lbl_80885348;
extern u32 lbl_8088534C;
extern u32 lbl_80885350;
extern u32 lbl_80885354;
extern u32 lbl_80885358;
extern u32 lbl_8088535C;
extern u32 lbl_80885360;
extern u32 lbl_80885364;
extern u32 lbl_80885368;
extern u32 lbl_8088536C;
extern u32 lbl_80885370;
extern u32 lbl_80885374;
extern u32 lbl_80885378;
extern u32 lbl_8088537C;
extern u32 lbl_80885380;
extern u32 lbl_80885384;

/* Function declarations */
void fn_80343B0C(void);
void fn_80344060(void);
void fn_803441AC(void);
void fn_8034441C(void);
void fn_80344454(void);
void fn_803446BC(void);
void fn_8034472C(void);
void fn_80344780(void);
void fn_803449AC(void);
void fn_80344AB8(void);
void fn_80344BB4(void);
void fn_80344BD8(void);
void fn_80344BF4(void);
void fn_80344C1C(void);
void fn_80344DF4(void);
void fn_80344E88(void);
void fn_80345154(void);
void fn_8034515C(void);
void fn_80345384(void);

asm void fn_80343B0C(void)
{
    nofralloc
    stwu r1, -0x170(r1)
    mflr r0
    stw r0, 0x174(r1)
    li r0, 0x0
    stfd f31, 0x160(r1)
    psq_st f31, 0x168(r1), 0, 0
    stfd f30, 0x150(r1)
    psq_st f30, 0x158(r1), 0, 0
    stw r31, 0x14c(r1)
    mr r31, r3
    stw r30, 0x148(r1)
    stw r29, 0x144(r1)
    stw r28, 0x140(r1)
    stw r0, 0x14b4(r3)
    stw r0, 0x14b8(r3)
    stw r0, 0x14c0(r3)
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
    li r0, 0x10
    stw r0, 0x58c(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_80885260
    li r0, 0x1
    stw r3, 0x590(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80885238
    li r4, 0x0
    stw r0, 0x3fc(r31)
    li r5, 0x13f
    lfs f2, lbl_80885284
    li r6, 0x0
    stfs f0, 0x2fc(r31)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    lwz r3, lbl_8087F430
    addi r30, r1, 0xbc
    li r4, 0x0
    li r5, 0x0
    lwz r7, 0x10d8(r3)
    lwz r8, 0x78(r7)
    mtctr r8
    cmplwi r8, 0x0
    ble lbl_fn_80343B0C_0000017C
lbl_fn_80343B0C_00000154:
    lwz r3, 0x7c(r7)
    lwzx r0, r3, r5
    cmpwi r0, 0x3
    bne lbl_fn_80343B0C_00000170
    mulli r0, r4, 0x28
    add r5, r3, r0
    b lbl_fn_80343B0C_00000180
lbl_fn_80343B0C_00000170:
    addi r5, r5, 0x28
    addi r4, r4, 0x1
    bdnz lbl_fn_80343B0C_00000154
lbl_fn_80343B0C_0000017C:
    li r5, 0x0
lbl_fn_80343B0C_00000180:
    li r4, 0x0
    li r6, 0x0
    mtctr r8
    cmplwi r8, 0x0
    ble lbl_fn_80343B0C_000001BC
lbl_fn_80343B0C_00000194:
    lwz r3, 0x7c(r7)
    lwzx r0, r3, r6
    cmpwi r0, 0x4
    bne lbl_fn_80343B0C_000001B0
    mulli r0, r4, 0x28
    add r4, r3, r0
    b lbl_fn_80343B0C_000001C0
lbl_fn_80343B0C_000001B0:
    addi r6, r6, 0x28
    addi r4, r4, 0x1
    bdnz lbl_fn_80343B0C_00000194
lbl_fn_80343B0C_000001BC:
    li r4, 0x0
lbl_fn_80343B0C_000001C0:
    lfs f2, 0xc(r5)
    addi r29, r1, 0x74
    psq_l f1, 0x4(r5), 0, 0
    addi r28, r1, 0x80
    psq_st f1, 0x0(r29), 0, 0
    frsp f0, f2
    lwz r5, lbl_8087F8A0
    addi r3, r1, 0x8c
    stfs f2, 0x7c(r1)
    lfs f4, 0x74(r1)
    psq_l f1, 0x4(r4), 0, 0
    lfs f2, 0xc(r4)
    stfs f2, 0x88(r1)
    lfs f6, 0x78(r1)
    psq_st f1, 0x0(r28), 0, 0
    lwz r4, 0x48(r5)
    lfs f2, 0x530(r4)
    psq_l f1, 0x528(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    fsubs f7, f0, f2
    lfs f3, 0x8c(r1)
    lfs f5, 0x90(r1)
    fmuls f0, f7, f7
    fsubs f3, f4, f3
    stfs f2, 0x94(r1)
    fsubs f4, f6, f5
    stfs f3, 0x98(r1)
    fmadds f1, f3, f3, f0
    stfs f4, 0x9c(r1)
    stfs f7, 0xa0(r1)
    bl fn_8068B100
    lfs f4, 0x88(r1)
    frsp f30, f1
    lfs f0, 0x94(r1)
    lfs f3, 0x80(r1)
    fsubs f6, f4, f0
    lfs f0, 0x8c(r1)
    lfs f4, 0x84(r1)
    fsubs f5, f3, f0
    lfs f3, 0x90(r1)
    fmuls f0, f6, f6
    fsubs f3, f4, f3
    stfs f5, 0xa4(r1)
    fmadds f1, f5, f5, f0
    stfs f3, 0xa8(r1)
    stfs f6, 0xac(r1)
    bl fn_8068B100
    frsp f0, f1
    fcmpo cr0, f30, f0
    bge lbl_fn_80343B0C_0000028C
    b lbl_fn_80343B0C_00000290
lbl_fn_80343B0C_0000028C:
    mr r28, r29
lbl_fn_80343B0C_00000290:
    lfs f2, 0x8(r28)
    addi r3, r1, 0xb0
    psq_l f1, 0x0(r28), 0, 0
    addi r5, r31, 0x1568
    frsp f3, f2
    psq_st f1, 0x0(r3), 0, 0
    lfs f0, 0x530(r31)
    addi r4, r1, 0x14
    stfs f2, 0xb8(r1)
    addi r29, r1, 0x8
    fsubs f7, f3, f0
    stfs f2, 0xc4(r1)
    frsp f2, f2
    lfs f0, 0x52c(r31)
    lfs f5, 0xb4(r1)
    stfs f2, 0x1570(r31)
    fmr f2, f7
    lfs f4, 0xb0(r1)
    fsubs f6, f5, f0
    lfs f3, 0x528(r31)
    lfs f0, lbl_80885298
    frsp f5, f2
    stfs f6, 0x18(r1)
    fsubs f4, f4, f3
    lfs f3, lbl_80885238
    fabs f6, f5
    stfs f4, 0x14(r1)
    psq_st f1, 0x0(r5), 0, 0
    frsp f4, f6
    psq_st f1, 0x0(r30), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    fcmpo cr0, f4, f0
    stfs f3, 0x156c(r31)
    stfs f7, 0x1c(r1)
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x10(r1)
    bge lbl_fn_80343B0C_00000344
    lfs f0, 0x8(r1)
    fcmpo cr0, f0, f3
    ble lbl_fn_80343B0C_00000338
    lfs f0, lbl_8088529C
    b lbl_fn_80343B0C_0000033C
lbl_fn_80343B0C_00000338:
    lfs f0, lbl_808852A0
lbl_fn_80343B0C_0000033C:
    stfs f0, 0x30(r1)
    b lbl_fn_80343B0C_00000358
lbl_fn_80343B0C_00000344:
    fmr f2, f5
    lfs f1, 0x8(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x30(r1)
lbl_fn_80343B0C_00000358:
    lfs f0, 0x30(r1)
    addi r3, r1, 0x108
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80885238
    addi r4, r1, 0x38
    lfs f4, 0x110(r1)
    mr r5, r4
    lfs f5, 0x10c(r1)
    addi r3, r1, 0xc8
    lfs f6, 0x108(r1)
    lfs f7, 0x120(r1)
    lfs f8, 0x11c(r1)
    lfs f9, 0x118(r1)
    lfs f10, 0x130(r1)
    lfs f11, 0x12c(r1)
    lfs f12, 0x128(r1)
    lfs f13, 0x134(r1)
    lfs f31, 0x124(r1)
    lfs f30, 0x114(r1)
    lfs f0, lbl_80885260
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x10(r1)
    stfs f3, 0xf8(r1)
    stfs f3, 0xfc(r1)
    stfs f3, 0x100(r1)
    stfs f0, 0x104(r1)
    stfs f6, 0x68(r1)
    stfs f5, 0x6c(r1)
    stfs f4, 0x70(r1)
    stfs f6, 0xc8(r1)
    stfs f5, 0xcc(r1)
    stfs f4, 0xd0(r1)
    stfs f9, 0x5c(r1)
    stfs f8, 0x60(r1)
    stfs f7, 0x64(r1)
    stfs f9, 0xd8(r1)
    stfs f8, 0xdc(r1)
    stfs f7, 0xe0(r1)
    stfs f12, 0x50(r1)
    stfs f11, 0x54(r1)
    stfs f10, 0x58(r1)
    stfs f12, 0xe8(r1)
    stfs f11, 0xec(r1)
    stfs f10, 0xf0(r1)
    stfs f30, 0x44(r1)
    stfs f31, 0x48(r1)
    stfs f13, 0x4c(r1)
    stfs f30, 0xd4(r1)
    stfs f31, 0xe4(r1)
    stfs f13, 0xf4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80885298
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80343B0C_00000474
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80885238
    fcmpo cr0, f3, f0
    ble lbl_fn_80343B0C_00000464
    lfs f0, lbl_8088529C
    b lbl_fn_80343B0C_00000468
lbl_fn_80343B0C_00000464:
    lfs f0, lbl_808852A0
lbl_fn_80343B0C_00000468:
    fneg f0, f0
    stfs f0, 0x2c(r1)
    b lbl_fn_80343B0C_00000488
lbl_fn_80343B0C_00000474:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x2c(r1)
lbl_fn_80343B0C_00000488:
    lfs f6, lbl_80885238
    addi r4, r1, 0x2c
    lfs f5, 0xb4(r1)
    addi r6, r31, 0x1574
    lfs f4, 0x52c(r31)
    fmr f2, f6
    lfs f3, 0xb0(r1)
    addi r5, r1, 0x20
    fsubs f5, f5, f4
    lfs f0, 0x528(r31)
    psq_l f1, 0x0(r4), 0, 0
    fsubs f4, f3, f0
    stfs f2, 0x10(r1)
    frsp f2, f2
    addi r3, r31, 0x1580
    lfs f3, 0xb8(r1)
    lfs f0, 0x530(r31)
    stfs f4, 0x20(r1)
    mr r4, r3
    fsubs f0, f3, f0
    stfs f2, 0x157c(r31)
    fmr f2, f0
    stfs f5, 0x24(r1)
    psq_st f1, 0x0(r29), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f6, 0x34(r1)
    stfs f0, 0x28(r1)
    stfs f2, 0x1588(r31)
    stfs f6, 0x1584(r31)
    bl fn_805F98D0
    lfs f0, lbl_80885238
    addi r3, r31, 0x158c
    psq_l f1, 0x528(r31), 0, 0
    lfs f2, 0x530(r31)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x1594(r31)
    stfs f0, 0x570(r31)
    psq_l f31, 0x168(r1), 0, 0
    lfd f31, 0x160(r1)
    psq_l f30, 0x158(r1), 0, 0
    lfd f30, 0x150(r1)
    lwz r31, 0x14c(r1)
    lwz r30, 0x148(r1)
    lwz r29, 0x144(r1)
    lwz r28, 0x140(r1)
    lwz r0, 0x174(r1)
    mtlr r0
    addi r1, r1, 0x170
    blr
}

asm void fn_80344060(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    stw r0, 0x14b4(r3)
    stw r0, 0x14b8(r3)
    stw r0, 0x14c0(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    mr r4, r30
    li r5, 0x3e8
    li r6, 0x1
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3e9
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3ea
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3ed
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3ef
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3f0
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3f1
    li r6, 0x0
    bl fn_80239DAC
    mr r3, r30
    li r4, 0x3
    bl fn_8016E970
    lfs f0, lbl_80885260
    li r0, 0xb
    li r31, 0x1
    stw r0, 0x58c(r30)
    lfs f1, lbl_80885238
    addi r3, r30, 0xb0
    stw r31, 0x3fc(r30)
    li r4, 0x0
    lfs f2, lbl_80885284
    li r5, 0x14d
    stfs f0, 0x2fc(r30)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r30)
    bl fn_80097C08
    stb r31, 0x1628(r30)
    lwz r3, lbl_8087F498
    cmpwi r3, 0x0
    beq lbl_fn_80344060_00000688
    lfs f1, lbl_80885260
    mr r4, r30
    lfs f2, lbl_8088525C
    li r5, 0x2
    li r6, 0x0
    bl fn_803EA77C
lbl_fn_80344060_00000688:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803441AC(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    addi r11, r1, 0x90
    stfd f31, 0x100(r1)
    psq_st f31, 0x108(r1), 0, 0
    stfd f30, 0xf0(r1)
    psq_st f30, 0xf8(r1), 0, 0
    stfd f29, 0xe0(r1)
    psq_st f29, 0xe8(r1), 0, 0
    stfd f28, 0xd0(r1)
    psq_st f28, 0xd8(r1), 0, 0
    stfd f27, 0xc0(r1)
    psq_st f27, 0xc8(r1), 0, 0
    stfd f26, 0xb0(r1)
    psq_st f26, 0xb8(r1), 0, 0
    stfd f25, 0xa0(r1)
    psq_st f25, 0xa8(r1), 0, 0
    stfd f24, 0x90(r1)
    psq_st f24, 0x98(r1), 0, 0
    bl _savegpr_27
    lfs f0, 0x1648(r3)
    lis r4, lbl_8074A490@ha
    lfs f25, lbl_80885238
    mr r27, r3
    stfs f25, 0x34(r1)
    li r28, 0x0
    lfd f26, lbl_8074A490@l(r4)
    lis r29, 0x4330
    stfs f25, 0x38(r1)
    lis r30, lbl_8074A498@ha
    lfs f27, lbl_808852A4
    li r31, -0x1
    stfs f0, 0x3c(r1)
    lfs f28, lbl_80885348
    lfs f24, 0x538(r3)
    lfs f30, lbl_80885280
    lfs f29, lbl_808852AC
    lfs f31, lbl_808852B0
lbl_fn_803441AC_0000073C:
    xoris r0, r28, 0x8000
    stw r0, 0x74(r1)
    lfd f2, lbl_8074A498@l(r30)
    stw r29, 0x70(r1)
    lfd f0, 0x70(r1)
    fsubs f0, f0, f26
    fmuls f0, f27, f0
    fmuls f0, f28, f0
    fadds f24, f24, f0
    fmr f1, f24
    bl fn_8068AEA8
    frsp f24, f1
    fcmpo cr0, f24, f29
    ble lbl_fn_803441AC_00000778
    fsubs f24, f24, f30
lbl_fn_803441AC_00000778:
    fcmpo cr0, f24, f31
    bge lbl_fn_803441AC_00000784
    fadds f24, f24, f30
lbl_fn_803441AC_00000784:
    fmr f1, f24
    addi r3, r1, 0x40
    li r4, 0x79
    bl fn_805F8E70
    addi r4, r1, 0x34
    addi r3, r1, 0x40
    mr r5, r4
    bl fn_805F93C0
    stfs f25, 0x1c(r1)
    mr r4, r27
    lfs f4, 0x3c(r1)
    addi r7, r1, 0x28
    stfs f24, 0x20(r1)
    addi r8, r1, 0x1c
    lfs f1, 0x38(r1)
    li r9, 0x0
    stfs f25, 0x24(r1)
    li r10, 0x1e
    lfs f0, 0x34(r1)
    lfs f5, 0x1654(r27)
    lfs f3, 0x1650(r27)
    lfs f2, 0x164c(r27)
    fadds f4, f5, f4
    fadds f3, f3, f1
    lfs f1, lbl_808852F4
    fadds f0, f2, f0
    stfs f4, 0x30(r1)
    lfs f2, lbl_80885260
    stfs f0, 0x28(r1)
    stfs f3, 0x2c(r1)
    stw r31, 0x8(r1)
    stw r31, 0xc(r1)
    lwz r3, lbl_8087F048
    lwz r5, 0x14d8(r27)
    lwz r6, 0x1658(r27)
    bl fn_800FAB80
    lwz r0, 0x1760(r27)
    cmpwi r0, 0x0
    beq lbl_fn_803441AC_0000086C
    lfs f1, 0x1654(r27)
    addi r4, r1, 0x10
    lfs f0, 0x3c(r1)
    lis r5, 0xff00
    lfs f3, 0x1650(r27)
    fadds f4, f1, f0
    lfs f2, 0x38(r1)
    lfs f1, 0x164c(r27)
    lfs f0, 0x34(r1)
    fadds f2, f3, f2
    stfs f4, 0x18(r1)
    fadds f0, f1, f0
    lwz r3, lbl_8087EEB0
    stfs f2, 0x14(r1)
    lfs f2, lbl_8088534C
    stfs f0, 0x10(r1)
    lwz r6, 0x14d8(r27)
    lfs f1, 0x58(r6)
    bl fn_80063D3C
lbl_fn_803441AC_0000086C:
    addi r28, r28, 0x1
    cmpwi r28, 0xb4
    blt lbl_fn_803441AC_0000073C
    lfs f1, 0x1648(r27)
    lfs f0, 0x1768(r27)
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_803441AC_000008A8
    lwz r3, lbl_8087F3C0
    mr r4, r27
    li r5, 0x3e9
    li r6, 0x0
    bl fn_80239DAC
    li r0, 0x0
    stb r0, 0x1644(r27)
lbl_fn_803441AC_000008A8:
    lfs f1, 0x1648(r27)
    lfs f0, 0x1764(r27)
    fadds f0, f1, f0
    stfs f0, 0x1648(r27)
    psq_l f31, 0x108(r1), 0, 0
    lfd f31, 0x100(r1)
    psq_l f30, 0xf8(r1), 0, 0
    lfd f30, 0xf0(r1)
    psq_l f29, 0xe8(r1), 0, 0
    lfd f29, 0xe0(r1)
    psq_l f28, 0xd8(r1), 0, 0
    lfd f28, 0xd0(r1)
    psq_l f27, 0xc8(r1), 0, 0
    lfd f27, 0xc0(r1)
    psq_l f26, 0xb8(r1), 0, 0
    lfd f26, 0xb0(r1)
    psq_l f25, 0xa8(r1), 0, 0
    lfd f25, 0xa0(r1)
    psq_l f24, 0x98(r1), 0, 0
    lfd f24, 0x90(r1)
    addi r11, r1, 0x90
    bl _restgpr_27
    lwz r0, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_8034441C(void)
{
    nofralloc
    lfs f0, lbl_80885260
    li r0, 0x1
    stfs f1, 0x2e8(r3)
    mr r6, r5
    mr r5, r4
    lfs f1, lbl_80885238
    stw r0, 0x3fc(r3)
    li r4, 0x0
    lfs f2, lbl_80885284
    li r7, 0x0
    stfs f0, 0x2fc(r3)
    li r8, 0x1
    addi r3, r3, 0xb0
    b fn_80097C08
}

asm void fn_80344454(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    addi r11, r1, 0xb0
    stfd f31, 0x110(r1)
    psq_st f31, 0x118(r1), 0, 0
    stfd f30, 0x100(r1)
    psq_st f30, 0x108(r1), 0, 0
    stfd f29, 0xf0(r1)
    psq_st f29, 0xf8(r1), 0, 0
    stfd f28, 0xe0(r1)
    psq_st f28, 0xe8(r1), 0, 0
    stfd f27, 0xd0(r1)
    psq_st f27, 0xd8(r1), 0, 0
    stfd f26, 0xc0(r1)
    psq_st f26, 0xc8(r1), 0, 0
    stfd f25, 0xb0(r1)
    psq_st f25, 0xb8(r1), 0, 0
    bl _savegpr_27
    lwz r6, lbl_8087F4A0
    lis r31, lbl_8074A4C0@ha
    fmr f30, f1
    lfs f26, lbl_80885238
    fmr f31, f2
    lwz r30, 0x48(r6)
    lfs f27, lbl_80885260
    mr r27, r3
    lfs f28, lbl_80885254
    mr r28, r4
    lfs f29, lbl_808852A4
    mr r29, r5
    addi r31, r31, lbl_8074A4C0@l
    b lbl_fn_80344454_00000B58
lbl_fn_80344454_000009CC:
    lwz r3, 0x48(r30)
    addis r0, r3, 0x0
    cmplwi r0, 0xbb84
    beq lbl_fn_80344454_000009E4
    cmplwi r0, 0xbb81
    bne lbl_fn_80344454_00000B54
lbl_fn_80344454_000009E4:
    lwz r12, 0x0(r30)
    mr r4, r30
    addi r3, r1, 0x2c
    lwz r12, 0x54(r12)
    mtctr r12
    bctrl
    addi r4, r31, 0x32c
    addi r3, r27, 0xb0
    li r5, 0x0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80344454_00000A1C
    li r3, 0x0
    b lbl_fn_80344454_00000A28
lbl_fn_80344454_00000A1C:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r27)
    add r3, r3, r0
lbl_fn_80344454_00000A28:
    lfs f2, 0x2c(r3)
    lfs f0, 0x34(r1)
    lfs f3, 0xc(r3)
    fsubs f4, f0, f2
    lfs f0, 0x2c(r1)
    lfs f1, 0x1c(r3)
    fsubs f5, f0, f3
    stfs f1, 0xc(r1)
    fmuls f0, f4, f4
    stfs f3, 0x8(r1)
    fmadds f1, f5, f5, f0
    stfs f2, 0x10(r1)
    stfs f5, 0x20(r1)
    stfs f4, 0x28(r1)
    stfs f26, 0x24(r1)
    bl fn_8068B100
    lwz r12, 0x0(r30)
    frsp f25, f1
    mr r3, r30
    lwz r12, 0x50(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_80344454_00000A90
    lfs f0, 0x48(r3)
    fsubs f25, f25, f0
lbl_fn_80344454_00000A90:
    fcmpo cr0, f25, f30
    cror eq, lt, eq
    bne lbl_fn_80344454_00000B34
    addi r3, r1, 0x20
    mr r4, r3
    bl fn_805F98D0
    stfs f26, 0x14(r1)
    addi r3, r1, 0x38
    li r4, 0x79
    stfs f26, 0x18(r1)
    stfs f27, 0x1c(r1)
    lfs f1, 0x538(r27)
    bl fn_805F8E70
    addi r4, r1, 0x14
    addi r3, r1, 0x38
    mr r5, r4
    bl fn_805F93C0
    stfs f26, 0x18(r1)
    addi r3, r1, 0x20
    addi r4, r1, 0x14
    bl fn_805F9990
    bl fn_8068AE9C
    frsp f1, f1
    fmuls f0, f28, f31
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_80344454_00000B34
    cmpwi r29, 0x0
    beq lbl_fn_80344454_00000B34
    addi r3, r1, 0x68
    li r4, 0x0
    li r5, 0x30
    bl memset
    stw r28, 0x68(r1)
    mr r3, r30
    addi r4, r1, 0x68
    stw r27, 0x90(r1)
    lwz r12, 0x0(r30)
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
lbl_fn_80344454_00000B34:
    fmuls f0, f29, f30
    fcmpo cr0, f25, f0
    cror eq, lt, eq
    bne lbl_fn_80344454_00000B54
    lwz r0, 0x54(r30)
    cmpwi r0, 0x3
    bne lbl_fn_80344454_00000B54
    stfs f26, 0x920(r30)
lbl_fn_80344454_00000B54:
    lwz r30, 0x5c(r30)
lbl_fn_80344454_00000B58:
    cmpwi r30, 0x0
    bne lbl_fn_80344454_000009CC
    addi r11, r1, 0xb0
    psq_l f31, 0x118(r1), 0, 0
    lfd f31, 0x110(r1)
    psq_l f30, 0x108(r1), 0, 0
    lfd f30, 0x100(r1)
    psq_l f29, 0xf8(r1), 0, 0
    lfd f29, 0xf0(r1)
    psq_l f28, 0xe8(r1), 0, 0
    lfd f28, 0xe0(r1)
    psq_l f27, 0xd8(r1), 0, 0
    lfd f27, 0xd0(r1)
    psq_l f26, 0xc8(r1), 0, 0
    lfd f26, 0xc0(r1)
    psq_l f25, 0xb8(r1), 0, 0
    lfd f25, 0xb0(r1)
    bl _restgpr_27
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_803446BC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lfs f2, 0x8(r4)
    stw r0, 0x24(r1)
    lfs f1, 0x0(r4)
    lfs f0, 0x15a0(r3)
    fsubs f3, f2, f0
    lfs f0, 0x1598(r3)
    lfs f2, 0x4(r4)
    fsubs f4, f1, f0
    lfs f1, 0x159c(r3)
    fmuls f0, f3, f3
    fsubs f2, f2, f1
    stfs f4, 0x8(r1)
    fmadds f1, f4, f4, f0
    stfs f2, 0xc(r1)
    stfs f3, 0x10(r1)
    bl fn_8068B100
    frsp f1, f1
    lfs f0, lbl_80885350
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    mfcr r3
    lwz r0, 0x24(r1)
    extrwi r3, r3, 1, 2
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8034472C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r5
    stw r30, 0x8(r1)
    mr r30, r4
    lwz r3, lbl_8087F430
    bl fn_80370A78
    cmpwi r3, 0x0
    bne lbl_fn_8034472C_00000C5C
    lwz r3, lbl_8087F430
    mr r4, r30
    mr r5, r31
    bl fn_80370AE4
lbl_fn_8034472C_00000C5C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80344780(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_8074A4C0@ha
    stw r0, 0x24(r1)
    addi r4, r4, lbl_8074A4C0@l
    addi r4, r4, 0x38b
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r0, 0x175c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80344780_00000CCC
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_80344780_00000CCC
    addi r3, r3, 0x10
    bl fn_8008937C
    stw r3, 0x175c(r28)
    mr r29, r3
    b lbl_fn_80344780_00000CD0
lbl_fn_80344780_00000CCC:
    li r29, 0x0
lbl_fn_80344780_00000CD0:
    lis r30, lbl_8074A4C0@ha
    mr r3, r29
    addi r30, r30, lbl_8074A4C0@l
    addi r5, r28, 0x1760
    addi r4, r30, 0x391
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    lis r31, 0xf
    mr r3, r29
    addi r4, r30, 0x129
    addi r5, r28, 0x176c
    addi r7, r31, 0x423f
    li r6, 0x1
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r29
    addi r4, r30, 0x142
    addi r5, r28, 0x16cc
    addi r7, r31, 0x423f
    li r6, 0x1
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r29
    addi r4, r30, 0x156
    addi r5, r28, 0x16a4
    addi r7, r31, 0x423f
    li r6, 0x1
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r29
    addi r4, r30, 0x160
    addi r5, r28, 0x16a8
    addi r7, r31, 0x423f
    li r6, 0x1
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r29
    addi r4, r30, 0x39b
    addi r5, r28, 0x1770
    li r6, 0x1
    li r7, 0x3e7
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_80885238
    mr r3, r29
    lfs f2, lbl_80885354
    addi r4, r30, 0x1a8
    lfs f3, lbl_80885358
    addi r5, r28, 0x177c
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80885238
    mr r3, r29
    lfs f2, lbl_80885354
    addi r4, r30, 0x1b3
    lfs f3, lbl_80885358
    addi r5, r28, 0x1780
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80885238
    mr r3, r29
    lfs f2, lbl_80885354
    addi r4, r30, 0x1bf
    lfs f3, lbl_80885358
    addi r5, r28, 0x1784
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80885238
    mr r3, r29
    lfs f2, lbl_8088534C
    addi r4, r30, 0x186
    lfs f3, lbl_80885358
    addi r5, r28, 0x1774
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    mr r3, r29
    addi r4, r30, 0x199
    addi r5, r28, 0x1778
    addi r7, r31, 0x423f
    li r6, 0x0
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_80885238
    mr r3, r29
    lfs f2, lbl_8088535C
    addi r4, r30, 0x3aa
    lfs f3, lbl_80885358
    addi r5, r28, 0x1764
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803449AC(void)
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
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    mr r4, r29
    lwz r3, lbl_8087F048
    bl fn_80103F60
    lbz r0, 0x14c8(r29)
    mr r31, r3
    cmpwi r0, 0x0
    beq lbl_fn_803449AC_00000F4C
    lwz r3, lbl_8087F8A0
    lwz r30, 0x48(r3)
    lwz r0, 0x12a4(r30)
    extrwi. r0, r0, 1, 3
    bne lbl_fn_803449AC_00000F4C
    lfs f31, lbl_80885238
    lfs f30, lbl_8088535C
    b lbl_fn_803449AC_00000F40
lbl_fn_803449AC_00000F08:
    mr r3, r31
    mr r4, r30
    bl fn_80108378
    lwz r0, 0x14c4(r29)
    cmplw r30, r0
    bne lbl_fn_803449AC_00000F30
    slwi r0, r3, 2
    add r3, r31, r0
    stfs f30, 0x128(r3)
    b lbl_fn_803449AC_00000F3C
lbl_fn_803449AC_00000F30:
    slwi r0, r3, 2
    add r3, r31, r0
    stfs f31, 0x128(r3)
lbl_fn_803449AC_00000F3C:
    lwz r30, 0x14ac(r30)
lbl_fn_803449AC_00000F40:
    cmpwi r30, 0x0
    bne lbl_fn_803449AC_00000F08
    b lbl_fn_803449AC_00000F80
lbl_fn_803449AC_00000F4C:
    lwz r3, lbl_8087F8A0
    lfs f31, lbl_80885260
    lwz r30, 0x48(r3)
    b lbl_fn_803449AC_00000F78
lbl_fn_803449AC_00000F5C:
    mr r3, r31
    mr r4, r30
    bl fn_80108378
    slwi r0, r3, 2
    add r3, r31, r0
    stfs f31, 0x128(r3)
    lwz r30, 0x14ac(r30)
lbl_fn_803449AC_00000F78:
    cmpwi r30, 0x0
    bne lbl_fn_803449AC_00000F5C
lbl_fn_803449AC_00000F80:
    lwz r0, 0x44(r1)
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    psq_l f30, 0x28(r1), 0, 0
    lfd f30, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80344AB8(void)
{
    nofralloc
    lwz r0, 0x14b0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80344AB8_000010A0
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x6
    beq lbl_fn_80344AB8_00000FE0
    cmpwi r0, 0x7
    beq lbl_fn_80344AB8_00001010
    cmpwi r0, 0x9
    beq lbl_fn_80344AB8_00001040
    cmpwi r0, 0xa
    beq lbl_fn_80344AB8_00001070
    b lbl_fn_80344AB8_000010A0
lbl_fn_80344AB8_00000FE0:
    lfs f1, 0x2e4(r3)
    li r3, 0x0
    lfs f0, lbl_80885360
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bnelr
    lfs f0, lbl_80885364
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bnelr
    li r3, 0x1
    blr
lbl_fn_80344AB8_00001010:
    lfs f1, 0x2e4(r3)
    li r3, 0x0
    lfs f0, lbl_80885368
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bnelr
    lfs f0, lbl_808852C4
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bnelr
    li r3, 0x1
    blr
lbl_fn_80344AB8_00001040:
    lfs f1, 0x2e4(r3)
    li r3, 0x0
    lfs f0, lbl_808852F8
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bnelr
    lfs f0, lbl_8088536C
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bnelr
    li r3, 0x1
    blr
lbl_fn_80344AB8_00001070:
    lfs f1, 0x2e4(r3)
    li r3, 0x0
    lfs f0, lbl_808852D0
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bnelr
    lfs f0, lbl_80885370
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bnelr
    li r3, 0x1
    blr
lbl_fn_80344AB8_000010A0:
    li r3, 0x0
    blr
}

asm void fn_80344BB4(void)
{
    nofralloc
    lwz r3, lbl_8087F430
    lwz r0, 0x8a0(r3)
    cmpwi r0, 0x0
    beqlr
    li r0, 0x0
    stw r0, 0x8a0(r3)
    stw r0, 0x4d8(r3)
    stb r0, 0x97c(r3)
    blr
}

asm void fn_80344BD8(void)
{
    nofralloc
    lwz r4, 0x14bc(r3)
    subi r3, r4, 0x1
    subfic r0, r4, 0x1
    nor r0, r3, r0
    srawi r0, r0, 31
    clrlwi r3, r0, 30
    blr
}

asm void fn_80344BF4(void)
{
    nofralloc
    lwz r0, 0x14bc(r3)
    cmpwi r0, 0x2
    bne lbl_fn_80344BF4_00001108
    lwz r0, 0x48(r4)
    cmpwi r0, 0x0
    bne lbl_fn_80344BF4_00001108
    li r3, 0x9
    blr
lbl_fn_80344BF4_00001108:
    li r3, 0x0
    blr
}

asm void fn_80344C1C(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    mr r31, r4
    stw r30, 0x48(r1)
    mr r30, r3
    lfs f3, 0x530(r3)
    lfs f0, 0x530(r5)
    lfs f2, 0x528(r3)
    addi r3, r1, 0x38
    lfs f1, 0x528(r5)
    fsubs f3, f3, f0
    lfs f0, lbl_80885238
    mr r4, r3
    fsubs f1, f2, f1
    stfs f3, 0x40(r1)
    stfs f1, 0x38(r1)
    stfs f0, 0x3c(r1)
    bl fn_805F98D0
    cmpwi r31, 0x9
    bne lbl_fn_80344C1C_000012D0
    li r0, 0x0
    stw r0, 0x14b4(r30)
    stw r0, 0x14b8(r30)
    stw r0, 0x14c0(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    mr r4, r30
    li r5, 0x3e8
    li r6, 0x1
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3e9
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3ea
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3ed
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3ef
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3f0
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3f1
    li r6, 0x0
    bl fn_80239DAC
    mr r3, r30
    li r4, 0x3
    bl fn_8016E970
    lfs f0, lbl_80885260
    li r0, 0x11
    li r31, 0x1
    stw r0, 0x58c(r30)
    lfs f1, lbl_80885238
    addi r3, r30, 0xb0
    stw r31, 0x3fc(r30)
    li r4, 0x0
    lfs f2, lbl_80885284
    li r5, 0x1e2
    stfs f0, 0x2fc(r30)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r30)
    bl fn_80097C08
    li r3, 0x0
    li r4, 0x0
    bl fn_80232B7C
    lfs f0, lbl_80885238
    li r0, -0x1
    lfs f1, lbl_80885260
    addi r4, r30, 0x1674
    stfs f0, 0x20(r1)
    addi r5, r30, 0xb0
    addi r7, r1, 0x2c
    addi r8, r1, 0x20
    stfs f0, 0x24(r1)
    addi r9, r1, 0x10
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x28(r1)
    stfs f0, 0x2c(r1)
    stfs f0, 0x30(r1)
    stfs f0, 0x34(r1)
    stfs f1, 0x10(r1)
    stfs f1, 0x14(r1)
    stfs f1, 0x18(r1)
    stfs f1, 0x1c(r1)
    stw r0, 0x8(r1)
    stw r31, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r3, 0x1758(r30)
    bl fn_80354110
lbl_fn_80344C1C_000012D0:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80344DF4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x1
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x54c(r3)
    stb r31, 0x16b4(r3)
    ori r0, r0, 0x2000
    stw r0, 0x54c(r3)
    bl fn_8016E4C4
    lwz r6, 0x6a8(r30)
    addi r3, r30, 0xb0
    lfs f0, lbl_80885260
    li r4, 0x0
    lwz r0, 0x3dc(r6)
    li r5, 0x16e
    lfs f1, lbl_80885238
    li r7, 0x1
    clrlwi r0, r0, 1
    stw r0, 0x3dc(r6)
    lfs f2, lbl_80885284
    li r6, 0x0
    stw r31, 0x3fc(r30)
    li r8, 0x1
    stfs f0, 0x2fc(r30)
    bl fn_80097C08
    lfs f0, lbl_80885300
    stfs f0, 0x2e8(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80344E88(void)
{
    nofralloc
    stwu r1, -0x180(r1)
    mflr r0
    stw r0, 0x184(r1)
    addi r11, r1, 0x120
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
    bl _savegpr_25
    lfs f3, 0x530(r4)
    mr r25, r3
    lfs f0, 0x530(r5)
    addi r6, r1, 0x68
    lfs f5, 0x52c(r4)
    addi r3, r1, 0x5c
    fsubs f6, f3, f0
    lfs f4, 0x52c(r5)
    psq_l f1, 0x528(r4), 0, 0
    lfs f2, 0x530(r4)
    fsubs f4, f5, f4
    lfs f3, 0x528(r4)
    lfs f0, 0x528(r5)
    psq_st f1, 0x0(r6), 0, 0
    fsubs f0, f3, f0
    stfs f2, 0x70(r1)
    stfs f0, 0x5c(r1)
    stfs f4, 0x60(r1)
    stfs f6, 0x64(r1)
    bl fn_805F9920
    lfs f0, lbl_80885374
    fcmpo cr0, f1, f0
    ble lbl_fn_80344E88_0000142C
    addi r3, r1, 0x5c
    mr r4, r3
    bl fn_805F98D0
    b lbl_fn_80344E88_00001440
lbl_fn_80344E88_0000142C:
    lfs f3, lbl_80885238
    lfs f0, lbl_80885260
    stfs f3, 0x5c(r1)
    stfs f3, 0x60(r1)
    stfs f0, 0x64(r1)
lbl_fn_80344E88_00001440:
    lfs f31, lbl_8088527C
    lis r3, lbl_8074A4A0@ha
    lfs f4, 0x64(r1)
    li r0, 0x0
    lfs f3, 0x60(r1)
    addi r30, r1, 0x50
    fmuls f5, f4, f31
    lfs f0, 0x5c(r1)
    fmuls f6, f3, f31
    lfs f4, 0x70(r1)
    fmuls f7, f0, f31
    lfs f3, 0x6c(r1)
    lfs f0, 0x68(r1)
    fsubs f4, f4, f5
    fsubs f3, f3, f6
    lfs f29, lbl_80885288
    fsubs f0, f0, f7
    stfs f4, 0x8(r25)
    fadds f30, f29, f31
    stfs f0, 0x0(r25)
    lfd f26, lbl_8074A4A0@l(r3)
    addi r29, r1, 0x5c
    stfs f3, 0x4(r25)
    addi r27, r1, 0x68
    lfs f27, lbl_808852AC
    addi r28, r1, 0x44
    stfs f7, 0x2c(r1)
    li r26, 0x0
    lfs f28, lbl_808852C8
    lis r31, 0x4330
    stfs f6, 0x30(r1)
    stfs f5, 0x34(r1)
    stw r0, 0xdc(r1)
    stw r0, 0xe0(r1)
    stw r0, 0xe4(r1)
    stw r0, 0xe8(r1)
lbl_fn_80344E88_000014D0:
    stw r26, 0xfc(r1)
    addi r3, r1, 0x78
    li r4, 0x79
    stw r31, 0xf8(r1)
    lfd f0, 0xf8(r1)
    fsubs f0, f0, f26
    fmuls f0, f27, f0
    fmuls f1, f0, f28
    bl fn_805F8E70
    psq_l f1, 0x0(r29), 0, 0
    mr r4, r30
    lfs f2, 0x64(r1)
    mr r5, r30
    psq_st f1, 0x0(r30), 0, 0
    addi r3, r1, 0x78
    stfs f2, 0x58(r1)
    bl fn_805F93C0
    psq_l f1, 0x0(r27), 0, 0
    mr r5, r28
    psq_st f1, 0x0(r28), 0, 0
    addi r4, r1, 0xa8
    lfs f0, 0x58(r1)
    addi r6, r1, 0x38
    lfs f4, 0x48(r1)
    lis r7, 0x8000
    fmuls f5, f0, f30
    lfs f3, 0x54(r1)
    lfs f0, 0x50(r1)
    fadds f4, f4, f29
    fmuls f3, f3, f30
    lfs f2, 0x70(r1)
    fmuls f6, f0, f30
    lfs f0, 0x44(r1)
    fsubs f7, f2, f5
    stfs f2, 0x4c(r1)
    fsubs f8, f4, f3
    lwz r3, lbl_8087EE98
    fsubs f0, f0, f6
    stfs f4, 0x48(r1)
    li r8, 0x0
    li r9, 0x0
    stfs f6, 0x20(r1)
    stfs f3, 0x24(r1)
    stfs f5, 0x28(r1)
    stfs f0, 0x38(r1)
    stfs f8, 0x3c(r1)
    stfs f7, 0x40(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    bne lbl_fn_80344E88_000015F4
    lfs f4, 0x58(r1)
    addi r3, r1, 0x14
    lfs f0, 0x54(r1)
    lfs f3, 0x50(r1)
    fmuls f4, f4, f31
    fmuls f5, f0, f31
    lfs f0, 0x70(r1)
    fmuls f6, f3, f31
    lfs f3, 0x6c(r1)
    fsubs f2, f0, f4
    lfs f0, 0x68(r1)
    fsubs f3, f3, f5
    stfs f6, 0x8(r1)
    fsubs f0, f0, f6
    stfs f3, 0x18(r1)
    stfs f0, 0x14(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f5, 0xc(r1)
    stfs f4, 0x10(r1)
    stfs f2, 0x1c(r1)
    psq_st f1, 0x0(r25), 0, 0
    stfs f2, 0x8(r25)
    b lbl_fn_80344E88_00001600
lbl_fn_80344E88_000015F4:
    addi r26, r26, 0x1
    cmplwi r26, 0x8
    blt lbl_fn_80344E88_000014D0
lbl_fn_80344E88_00001600:
    addi r11, r1, 0x120
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
    bl _restgpr_25
    lwz r0, 0x184(r1)
    mtlr r0
    addi r1, r1, 0x180
    blr
}

asm void fn_80345154(void)
{
    nofralloc
    lfs f1, lbl_80885270
    blr
}

asm void fn_8034515C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_fn_8034515C_00001858
    addic. r0, r3, 0x175c
    beq lbl_fn_8034515C_0000169C
    lwz r4, 0x175c(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8034515C_0000169C
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_8034515C_0000169C
    bl fn_800897D8
lbl_fn_8034515C_0000169C:
    addic. r3, r29, 0x16b8
    beq lbl_fn_8034515C_000016AC
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8034515C_000016AC:
    addic. r31, r29, 0x1698
    beq lbl_fn_8034515C_000016CC
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_8034515C_000016CC
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8034515C_000016CC:
    addic. r31, r29, 0x168c
    beq lbl_fn_8034515C_000016EC
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_8034515C_000016EC
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8034515C_000016EC:
    addic. r31, r29, 0x1680
    beq lbl_fn_8034515C_0000170C
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_8034515C_0000170C
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8034515C_0000170C:
    addic. r31, r29, 0x1674
    beq lbl_fn_8034515C_0000172C
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_8034515C_0000172C
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8034515C_0000172C:
    addi r3, r29, 0x1668
    li r4, -0x1
    bl fn_802375C4
    addic. r31, r29, 0x1638
    beq lbl_fn_8034515C_00001758
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_8034515C_00001758
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8034515C_00001758:
    addic. r31, r29, 0x162c
    beq lbl_fn_8034515C_00001778
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_8034515C_00001778
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8034515C_00001778:
    addic. r31, r29, 0x161c
    beq lbl_fn_8034515C_00001798
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_8034515C_00001798
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8034515C_00001798:
    addic. r31, r29, 0x1610
    beq lbl_fn_8034515C_000017B8
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_8034515C_000017B8
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8034515C_000017B8:
    addi r3, r29, 0x15c8
    li r4, -0x1
    bl fn_802375C4
    addic. r31, r29, 0x15bc
    beq lbl_fn_8034515C_000017E4
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_8034515C_000017E4
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8034515C_000017E4:
    addic. r31, r29, 0x15b0
    beq lbl_fn_8034515C_00001804
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_8034515C_00001804
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8034515C_00001804:
    addic. r31, r29, 0x15a4
    beq lbl_fn_8034515C_00001824
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_8034515C_00001824
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8034515C_00001824:
    lis r4, fn_8000D760@ha
    addi r3, r29, 0x14ec
    addi r4, r4, fn_8000D760@l
    li r5, 0xc
    li r6, 0x9
    bl fn_806959D8
    mr r3, r29
    li r4, 0x0
    bl fn_8035B78C
    cmpwi r30, 0x0
    ble lbl_fn_8034515C_00001858
    mr r3, r29
    bl dtor_80084684
lbl_fn_8034515C_00001858:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80345384(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    addi r11, r1, 0x120
    bl _savegpr_27
    mr r27, r5
    lwz r5, 0x20(r5)
    mr r31, r3
    bl fn_8035B694
    lis r3, lbl_80789550@ha
    li r28, 0x0
    addi r3, r3, lbl_80789550@l
    stw r3, 0x0(r31)
    addi r3, r31, 0x14c8
    stw r28, 0x14b0(r31)
    stw r28, 0x14b4(r31)
    stw r28, 0x14b8(r31)
    stw r28, 0x14bc(r31)
    stw r28, 0x14c0(r31)
    stw r28, 0x14c4(r31)
    bl fn_8034585C
    lis r4, fn_80288390@ha
    lis r5, fn_8000D760@ha
    stw r28, 0x153c(r31)
    addi r3, r31, 0x1560
    addi r4, r4, fn_80288390@l
    addi r5, r5, fn_8000D760@l
    stw r28, 0x1550(r31)
    li r6, 0xc
    li r7, 0x9
    bl fn_806958E0
    stw r28, 0x15cc(r31)
    addi r3, r31, 0x15dc
    stw r28, 0x15d0(r31)
    stw r28, 0x15d4(r31)
    stw r28, 0x15d8(r31)
    bl fn_803458CC
    addi r3, r31, 0x160c
    bl fn_80057A64
    addi r3, r31, 0x1618
    bl fn_802377B8
    addi r3, r31, 0x1624
    bl fn_802377B8
    addi r3, r31, 0x1630
    bl fn_802377B8
    addi r3, r31, 0x163c
    bl fn_802377B8
    addi r3, r31, 0x1648
    bl fn_80237518
    addi r3, r31, 0x1654
    bl fn_80057A64
    addi r3, r31, 0x1660
    bl fn_803165E0
    addi r3, r31, 0x1690
    bl fn_802377B8
    addi r3, r31, 0x169c
    bl fn_802377B8
    addi r3, r31, 0x16a8
    bl fn_802377B8
    addi r3, r31, 0x16b4
    bl fn_802377B8
    addi r3, r31, 0x16c0
    bl fn_802377B8
    addi r3, r31, 0x16cc
    bl fn_802377B8
    lfs f0, lbl_80885378
    addi r3, r31, 0x16e0
    stb r28, 0x16d8(r31)
    stfs f0, 0x16dc(r31)
    bl fn_80057A64
    addi r3, r31, 0x16f8
    bl fn_80057A64
    addi r3, r31, 0x1704
    bl fn_802FCF14
    addi r3, r31, 0x170c
    bl fn_802FCF14
    addi r29, r31, 0x1718
    addi r28, r31, 0x17d8
lbl_fn_80345384_000019B0:
    mr r3, r29
    bl fn_803458C0
    addi r29, r29, 0x18
    cmplw r29, r28
    blt lbl_fn_80345384_000019B0
    mr r3, r28
    bl fn_80237518
    li r28, 0x0
    li r0, 0x96
    li r30, 0xa
    stw r28, 0x17e4(r31)
    addi r3, r31, 0x180c
    stw r28, 0x17e8(r31)
    stw r28, 0x17f0(r31)
    stw r0, 0x17fc(r31)
    stw r30, 0x1800(r31)
    stw r28, 0x1804(r31)
    stb r28, 0x1808(r31)
    stb r28, 0x1809(r31)
    stb r28, 0x180a(r31)
    stb r28, 0x180b(r31)
    bl fn_8006CA80
    li r0, 0xf
    stw r28, 0x1814(r31)
    addi r3, r31, 0x181c
    stw r0, 0x1818(r31)
    bl fn_803458D0
    addi r3, r31, 0x1a28
    bl fn_803458E0
    addi r3, r31, 0x1cac
    bl fn_802377B8
    stw r28, 0x1cb8(r31)
    addi r3, r31, 0x1cc0
    stw r28, 0x1cbc(r31)
    bl fn_802BABC0
    lwz r0, 0x12a4(r31)
    li r5, 0x1e
    lfs f2, lbl_8088537C
    lis r29, lbl_8074AA58@ha
    lfs f1, lbl_80885380
    oris r0, r0, 0x40
    lfs f0, lbl_80885384
    addi r3, r1, 0x2c
    stw r28, 0x1cc4(r31)
    addi r4, r29, lbl_8074AA58@l
    stfs f2, 0x1cc8(r31)
    stfs f1, 0x1ccc(r31)
    stw r30, 0x1cd4(r31)
    stfs f0, 0x1cd8(r31)
    stw r5, 0x1cdc(r31)
    stw r0, 0x12a4(r31)
    bl fn_8003E4A4
    addi r29, r29, lbl_8074AA58@l
    addi r3, r1, 0x20
    addi r4, r29, 0x18
    bl fn_8003E4A4
    addi r3, r1, 0x14
    addi r4, r27, 0x2c
    bl fn_8003E4A4
    addi r3, r1, 0x74
    addi r4, r29, 0x31
    li r5, 0x0
    li r6, 0x0
    bl fn_800EC440
    addi r3, r1, 0xd4
    addi r4, r1, 0x14
    addi r5, r1, 0x74
    bl fn_800EC2C4
    addi r3, r1, 0x74
    li r4, -0x1
    bl fn_800EC534
    addi r3, r1, 0x98
    addi r4, r1, 0xd4
    bl fn_800EC654
    b lbl_fn_80345384_00001B20
lbl_fn_80345384_00001ADC:
    addi r3, r1, 0x98
    bl fn_800ED4D8
    bl fn_8004212C
    addi r4, r29, 0x33
    li r5, 0x8
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_80345384_00001B18
    addi r3, r1, 0x98
    bl fn_800ED4D8
    bl fn_8004212C
    mr r4, r3
    addi r3, r1, 0x20
    addi r4, r4, 0x8
    bl fn_8020A780
lbl_fn_80345384_00001B18:
    addi r3, r1, 0x98
    bl fn_800ED4E0
lbl_fn_80345384_00001B20:
    addi r3, r1, 0x38
    addi r4, r1, 0xd4
    bl fn_800EDFE8
    addi r3, r1, 0x98
    addi r4, r1, 0x38
    bl fn_800EC254
    mr r30, r3
    addi r3, r1, 0x38
    li r4, -0x1
    bl fn_800ED42C
    cmpwi r30, 0x0
    bne lbl_fn_80345384_00001ADC
    addi r3, r1, 0x98
    li r4, -0x1
    bl fn_800ED42C
    addi r3, r1, 0x8
    addi r4, r1, 0x2c
    addi r5, r1, 0x20
    bl fn_8006AFF8
    addi r3, r1, 0x8
    bl fn_8004212C
    lwz r12, 0x180c(r31)
    mr r4, r3
    addi r3, r31, 0x180c
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lis r30, lbl_8074AA58@ha
    addi r3, r31, 0x1624
    addi r30, r30, lbl_8074AA58@l
    addi r4, r30, 0x3c
    bl fn_8023780C
    addi r3, r31, 0x1630
    addi r4, r30, 0x4a
    bl fn_8023780C
    addi r3, r31, 0x163c
    addi r4, r30, 0x58
    bl fn_8023780C
    addi r3, r31, 0x1648
    addi r4, r30, 0x66
    bl fn_80237654
    addi r3, r31, 0x16c0
    addi r4, r30, 0x77
    bl fn_8023780C
    addi r3, r31, 0x16cc
    addi r4, r30, 0x85
    bl fn_8023780C
    addi r3, r31, 0x17d8
    addi r4, r30, 0x93
    bl fn_80237654
    addi r3, r31, 0x1618
    addi r4, r30, 0xa1
    bl fn_8023780C
    addi r3, r31, 0x1690
    addi r4, r30, 0xaf
    bl fn_8023780C
    addi r3, r31, 0x169c
    addi r4, r30, 0xbd
    bl fn_8023780C
    addi r3, r31, 0x16a8
    addi r4, r30, 0xcb
    bl fn_8023780C
    addi r3, r31, 0x16b4
    addi r4, r30, 0xd9
    bl fn_8023780C
    addi r3, r31, 0x1cac
    addi r4, r30, 0xe7
    bl fn_8023780C
    lwz r12, 0x1704(r31)
    addi r3, r31, 0x1704
    addi r4, r30, 0xf5
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lwz r12, 0x170c(r31)
    addi r3, r31, 0x170c
    addi r4, r30, 0x118
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    mr r3, r31
    addi r4, r30, 0x13b
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x17f4(r31)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r31
    addi r4, r30, 0x15c
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x17f8(r31)
    li r4, 0x1
    bl fn_800D246C
    bl fn_80121F00
    li r4, 0x65
    li r5, 0x1
    li r6, 0x0
    bl fn_80370320
    bl fn_80121F00
    li r4, 0x68
    li r5, 0x1
    li r6, 0x0
    bl fn_80370320
    addi r3, r31, 0x5b8
    li r4, 0x0
    bl fn_80338CDC
    lfs f1, lbl_80885378
    addi r3, r31, 0x160c
    fmr f2, f1
    fmr f3, f1
    bl fn_80057A68
    lwz r5, 0x12a8(r31)
    addi r3, r1, 0x8
    lwz r0, 0x12a4(r31)
    li r4, -0x1
    ori r5, r5, 0x800
    stw r5, 0x12a8(r31)
    rlwinm r0, r0, 0, 8, 6
    stw r0, 0x12a4(r31)
    bl dtor_80013D60
    addi r3, r1, 0xd4
    li r4, -0x1
    bl fn_800EC5BC
    addi r3, r1, 0x14
    li r4, -0x1
    bl dtor_80013D60
    addi r3, r1, 0x20
    li r4, -0x1
    bl dtor_80013D60
    addi r3, r1, 0x2c
    li r4, -0x1
    bl dtor_80013D60
    addi r11, r1, 0x120
    mr r3, r31
    bl _restgpr_27
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}
