#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void dtor_80084684(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_8005B3CC(void);
extern void fn_8005B5F8(void);
extern void fn_8005B6E8(void);
extern void fn_8006AFF8(void);
extern void fn_800844D8(void);
extern void fn_80092814(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800C344C(void);
extern void fn_800CB360(void);
extern void fn_800CB3A0(void);
extern void fn_800CB440(void);
extern void fn_800CB5C8(void);
extern void fn_80126214(void);
extern void fn_8012F440(void);
extern void fn_8013A258(void);
extern void fn_8013CB68(void);
extern void fn_801426A4(void);
extern void fn_8015495C(void);
extern void fn_8015C3A8(void);
extern void fn_8015E7A0(void);
extern void fn_8016E970(void);
extern void fn_8016EB48(void);
extern void fn_8017039C(void);
extern void fn_8021A888(void);
extern void fn_80232B7C(void);
extern void fn_80237518(void);
extern void fn_80237654(void);
extern void fn_802377B8(void);
extern void fn_8023780C(void);
extern void fn_80239DAC(void);
extern void fn_8023A8B4(void);
extern void fn_8027688C(void);
extern void fn_80277B84(void);
extern void fn_80278218(void);
extern void fn_8027851C(void);
extern void fn_80279054(void);
extern void fn_8035B694(void);
extern void fn_80370A78(void);
extern void fn_80370AE4(void);
extern void fn_80473E74(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_80680770(void);
extern void fn_80680CF8(void);
extern void fn_80682428(void);
extern void fn_80682544(void);
extern void fn_80686EA4(void);
extern void fn_8068AEA4(void);
extern void fn_8068B100(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_80744D2C[];
extern u8 lbl_80744EFC[];
extern u8 lbl_80775A88[];
extern u8 lbl_807772B0[];
extern u8 lbl_807772D0[];
extern u8 lbl_80785500[];
extern u8 lbl_8078FBB0[];

/* Small data declarations */
extern u32 lbl_8087D708;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F8A0;
extern u32 lbl_808838DC;
extern u32 lbl_808838E4;
extern u32 lbl_808838F0;
extern u32 lbl_80883908;
extern u32 lbl_80883910;
extern u32 lbl_80883914;
extern u32 lbl_80883918;
extern u32 lbl_8088391C;
extern u32 lbl_80883920;
extern u32 lbl_80883924;
extern u32 lbl_80883928;
extern u32 lbl_8088392C;
extern u32 lbl_80883930;
extern u32 lbl_80883934;
extern u32 lbl_80883938;
extern u32 lbl_80883944;
extern u32 lbl_80883948;
extern u32 lbl_8088394C;

/* Function declarations */
void fn_8027B118(void);
void fn_8027B1A4(void);
void fn_8027B21C(void);
void fn_8027B748(void);
void fn_8027B8C8(void);
void fn_8027BE3C(void);
void fn_8027C1D4(void);
void fn_8027C244(void);
void fn_8027C2E0(void);
void fn_8027C38C(void);
void fn_8027C80C(void);
void fn_8027C8E4(void);
void fn_8027C990(void);

asm void fn_8027B118(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    mr r3, r31
    bl fn_8021A888
    cmpwi r3, 0x0
    beq lbl_fn_8027B118_0000006C
    lwz r0, 0x48(r30)
    cmpwi r0, 0x3
    bne lbl_fn_8027B118_0000006C
    mr r3, r29
    mr r4, r30
    bl fn_80277B84
    cmpwi r3, 0x0
    bne lbl_fn_8027B118_0000006C
    lfs f1, 0x84(r31)
    lfs f0, lbl_808838F0
    fcmpo cr0, f1, f0
    ble lbl_fn_8027B118_0000006C
    li r3, 0x3
    b lbl_fn_8027B118_00000070
lbl_fn_8027B118_0000006C:
    li r3, 0x0
lbl_fn_8027B118_00000070:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8027B1A4(void)
{
    nofralloc
    lwz r4, 0x58c(r3)
    lwz r5, 0xd1c(r3)
    subi r0, r4, 0x9
    stw r5, 0xd20(r3)
    cmplwi r0, 0x2
    bgt lbl_fn_8027B1A4_000000B8
    lwz r0, 0x18e8(r3)
    li r4, 0x0
    stw r4, 0x1454(r3)
    stw r0, 0x14d4(r3)
    b lbl_fn_8027B1A4_000000C4
lbl_fn_8027B1A4_000000B8:
    li r0, 0x1
    stw r0, 0x1454(r3)
    stw r5, 0x14d4(r3)
lbl_fn_8027B1A4_000000C4:
    lwz r0, 0x14d4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8027B1A4_000000F8
    lwz r4, lbl_8087F8A0
    lwz r4, 0x48(r4)
    b lbl_fn_8027B1A4_000000F0
lbl_fn_8027B1A4_000000DC:
    lwz r0, 0x12a8(r4)
    extrwi. r0, r0, 1, 22
    bne lbl_fn_8027B1A4_000000EC
    stw r4, 0x14d4(r3)
lbl_fn_8027B1A4_000000EC:
    lwz r4, 0x14ac(r4)
lbl_fn_8027B1A4_000000F0:
    cmpwi r4, 0x0
    bne lbl_fn_8027B1A4_000000DC
lbl_fn_8027B1A4_000000F8:
    lwz r0, 0x14d4(r3)
    stw r0, 0xd1c(r3)
    blr
}

asm void fn_8027B21C(void)
{
    nofralloc
    stwu r1, -0x220(r1)
    mflr r0
    lfs f3, lbl_808838F0
    stw r0, 0x224(r1)
    addi r4, r1, 0xc8
    stfd f31, 0x210(r1)
    psq_st f31, 0x218(r1), 0, 0
    stfd f30, 0x200(r1)
    psq_st f30, 0x208(r1), 0, 0
    lfs f30, lbl_808838DC
    stfd f29, 0x1f0(r1)
    psq_st f29, 0x1f8(r1), 0, 0
    stfd f28, 0x1e0(r1)
    psq_st f28, 0x1e8(r1), 0, 0
    stfd f27, 0x1d0(r1)
    psq_st f27, 0x1d8(r1), 0, 0
    stw r31, 0x1cc(r1)
    stw r30, 0x1c8(r1)
    stw r29, 0x1c4(r1)
    mr r29, r3
    psq_l f1, 0x534(r3), 0, 0
    lfs f2, 0x53c(r3)
    stfs f2, 0xd0(r1)
    psq_st f1, 0x0(r4), 0, 0
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x7
    bne lbl_fn_8027B21C_000005C8
    addi r3, r3, 0x1030
    bl fn_80126214
    addi r4, r29, 0x1088
    addi r31, r1, 0xbc
    psq_l f1, 0x0(r4), 0, 0
    mr r3, r31
    lfs f2, 0x1090(r29)
    stfs f2, 0xc4(r1)
    psq_st f1, 0x0(r31), 0, 0
    bl fn_805F9940
    lfs f0, lbl_80883910
    fmr f31, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_8027B21C_00000380
    addi r30, r1, 0xa4
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0xc4(r1)
    mr r3, r30
    psq_st f1, 0x0(r30), 0, 0
    mr r4, r30
    stfs f2, 0xac(r1)
    bl fn_805F98D0
    lfs f2, 0xac(r1)
    addi r31, r1, 0xb0
    psq_l f1, 0x0(r30), 0, 0
    fabs f3, f2
    lfs f0, lbl_808838E4
    psq_st f1, 0x0(r31), 0, 0
    frsp f3, f3
    stfs f2, 0xb8(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_8027B21C_00000214
    lfs f3, 0xb0(r1)
    lfs f0, lbl_808838F0
    fcmpo cr0, f3, f0
    ble lbl_fn_8027B21C_00000208
    lfs f0, lbl_80883914
    b lbl_fn_8027B21C_0000020C
lbl_fn_8027B21C_00000208:
    lfs f0, lbl_80883918
lbl_fn_8027B21C_0000020C:
    stfs f0, 0x90(r1)
    b lbl_fn_8027B21C_00000228
lbl_fn_8027B21C_00000214:
    frsp f2, f2
    lfs f1, 0xb0(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x90(r1)
lbl_fn_8027B21C_00000228:
    lfs f0, 0x90(r1)
    addi r3, r1, 0x148
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808838F0
    addi r4, r1, 0x80
    lfs f28, 0x150(r1)
    mr r5, r4
    lfs f29, 0x14c(r1)
    addi r3, r1, 0x178
    lfs f13, 0x148(r1)
    lfs f12, 0x160(r1)
    lfs f11, 0x15c(r1)
    lfs f10, 0x158(r1)
    lfs f9, 0x170(r1)
    lfs f8, 0x16c(r1)
    lfs f7, 0x168(r1)
    lfs f6, 0x174(r1)
    lfs f5, 0x164(r1)
    lfs f4, 0x154(r1)
    lfs f0, lbl_808838DC
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0xb8(r1)
    stfs f3, 0x1a8(r1)
    stfs f3, 0x1ac(r1)
    stfs f3, 0x1b0(r1)
    stfs f0, 0x1b4(r1)
    stfs f13, 0x50(r1)
    stfs f29, 0x54(r1)
    stfs f28, 0x58(r1)
    stfs f13, 0x178(r1)
    stfs f29, 0x17c(r1)
    stfs f28, 0x180(r1)
    stfs f10, 0x5c(r1)
    stfs f11, 0x60(r1)
    stfs f12, 0x64(r1)
    stfs f10, 0x188(r1)
    stfs f11, 0x18c(r1)
    stfs f12, 0x190(r1)
    stfs f7, 0x68(r1)
    stfs f8, 0x6c(r1)
    stfs f9, 0x70(r1)
    stfs f7, 0x198(r1)
    stfs f8, 0x19c(r1)
    stfs f9, 0x1a0(r1)
    stfs f4, 0x74(r1)
    stfs f5, 0x78(r1)
    stfs f6, 0x7c(r1)
    stfs f4, 0x184(r1)
    stfs f5, 0x194(r1)
    stfs f6, 0x1a4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x88(r1)
    bl fn_805F9750
    lfs f2, 0x88(r1)
    lfs f0, lbl_808838E4
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8027B21C_00000344
    lfs f3, 0x84(r1)
    lfs f0, lbl_808838F0
    fcmpo cr0, f3, f0
    ble lbl_fn_8027B21C_00000334
    lfs f0, lbl_80883914
    b lbl_fn_8027B21C_00000338
lbl_fn_8027B21C_00000334:
    lfs f0, lbl_80883918
lbl_fn_8027B21C_00000338:
    fneg f0, f0
    stfs f0, 0x8c(r1)
    b lbl_fn_8027B21C_00000358
lbl_fn_8027B21C_00000344:
    lfs f1, 0x84(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x8c(r1)
lbl_fn_8027B21C_00000358:
    lfs f2, lbl_808838F0
    addi r3, r1, 0x8c
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0xc8
    stfs f2, 0x94(r1)
    stfs f2, 0xb8(r1)
    frsp f2, f2
    psq_st f1, 0x0(r31), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0xd0(r1)
lbl_fn_8027B21C_00000380:
    lwz r5, 0x14d4(r29)
    addi r30, r1, 0xbc
    lfs f4, 0x52c(r29)
    addi r4, r1, 0x98
    lfs f5, 0x52c(r5)
    mr r3, r30
    lfs f3, 0x528(r5)
    fsubs f5, f5, f4
    lfs f0, 0x528(r29)
    lfs f4, 0x530(r5)
    fsubs f3, f3, f0
    stfs f5, 0x9c(r1)
    lfs f0, 0x530(r29)
    stfs f3, 0x98(r1)
    fsubs f2, f4, f0
    lfs f0, lbl_808838F0
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0xa0(r1)
    stfs f2, 0xc4(r1)
    stfs f0, 0xc0(r1)
    bl fn_805F9940
    fmr f29, f1
    mr r3, r30
    mr r4, r30
    bl fn_805F98D0
    lfs f2, 0xc4(r1)
    lfs f0, lbl_808838E4
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8027B21C_00000424
    lfs f3, 0xbc(r1)
    lfs f0, lbl_808838F0
    fcmpo cr0, f3, f0
    ble lbl_fn_8027B21C_00000418
    lfs f0, lbl_80883914
    b lbl_fn_8027B21C_0000041C
lbl_fn_8027B21C_00000418:
    lfs f0, lbl_80883918
lbl_fn_8027B21C_0000041C:
    stfs f0, 0xc(r1)
    b lbl_fn_8027B21C_00000434
lbl_fn_8027B21C_00000424:
    lfs f1, 0xbc(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0xc(r1)
lbl_fn_8027B21C_00000434:
    lfs f0, 0xc(r1)
    addi r3, r1, 0x118
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808838F0
    addi r4, r1, 0x14
    lfs f4, 0x120(r1)
    mr r5, r4
    lfs f5, 0x11c(r1)
    addi r3, r1, 0xd8
    lfs f6, 0x118(r1)
    lfs f7, 0x130(r1)
    lfs f8, 0x12c(r1)
    lfs f9, 0x128(r1)
    lfs f10, 0x140(r1)
    lfs f11, 0x13c(r1)
    lfs f12, 0x138(r1)
    lfs f13, 0x144(r1)
    lfs f28, 0x134(r1)
    lfs f27, 0x124(r1)
    lfs f0, lbl_808838DC
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0xc4(r1)
    stfs f3, 0x108(r1)
    stfs f3, 0x10c(r1)
    stfs f3, 0x110(r1)
    stfs f0, 0x114(r1)
    stfs f6, 0x44(r1)
    stfs f5, 0x48(r1)
    stfs f4, 0x4c(r1)
    stfs f6, 0xd8(r1)
    stfs f5, 0xdc(r1)
    stfs f4, 0xe0(r1)
    stfs f9, 0x38(r1)
    stfs f8, 0x3c(r1)
    stfs f7, 0x40(r1)
    stfs f9, 0xe8(r1)
    stfs f8, 0xec(r1)
    stfs f7, 0xf0(r1)
    stfs f12, 0x2c(r1)
    stfs f11, 0x30(r1)
    stfs f10, 0x34(r1)
    stfs f12, 0xf8(r1)
    stfs f11, 0xfc(r1)
    stfs f10, 0x100(r1)
    stfs f27, 0x20(r1)
    stfs f28, 0x24(r1)
    stfs f13, 0x28(r1)
    stfs f27, 0xe4(r1)
    stfs f28, 0xf4(r1)
    stfs f13, 0x104(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x1c(r1)
    bl fn_805F9750
    lfs f2, 0x1c(r1)
    lfs f0, lbl_808838E4
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8027B21C_00000550
    lfs f3, 0x18(r1)
    lfs f0, lbl_808838F0
    fcmpo cr0, f3, f0
    ble lbl_fn_8027B21C_00000540
    lfs f0, lbl_80883914
    b lbl_fn_8027B21C_00000544
lbl_fn_8027B21C_00000540:
    lfs f0, lbl_80883918
lbl_fn_8027B21C_00000544:
    fneg f0, f0
    stfs f0, 0x8(r1)
    b lbl_fn_8027B21C_00000564
lbl_fn_8027B21C_00000550:
    lfs f1, 0x18(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x8(r1)
lbl_fn_8027B21C_00000564:
    addi r3, r1, 0x8
    lfs f2, lbl_808838F0
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0xc4(r1)
    lfs f0, 0xc0(r1)
    lwz r0, 0x14f8(r29)
    stfs f2, 0x10(r1)
    cmpwi r0, 0x0
    stfs f0, 0x538(r29)
    beq lbl_fn_8027B21C_0000059C
    lfs f0, lbl_80883920
    fmuls f30, f30, f0
    b lbl_fn_8027B21C_000005AC
lbl_fn_8027B21C_0000059C:
    lfs f0, 0x1510(r29)
    fcmpo cr0, f29, f0
    bge lbl_fn_8027B21C_000005AC
    fmr f30, f2
lbl_fn_8027B21C_000005AC:
    lfs f0, 0x568(r29)
    fmr f1, f31
    mr r3, r29
    addi r4, r1, 0xc8
    fmuls f2, f0, f30
    bl fn_801426A4
    b lbl_fn_8027B21C_000005EC
lbl_fn_8027B21C_000005C8:
    cmpwi r0, 0x6
    bne lbl_fn_8027B21C_000005D8
    bl fn_8013A258
    b lbl_fn_8027B21C_000005EC
lbl_fn_8027B21C_000005D8:
    lfs f0, 0x568(r3)
    fmr f1, f3
    li r5, 0x0
    fmuls f2, f0, f30
    bl fn_8013CB68
lbl_fn_8027B21C_000005EC:
    lwz r0, 0x224(r1)
    psq_l f31, 0x218(r1), 0, 0
    lfd f31, 0x210(r1)
    psq_l f30, 0x208(r1), 0, 0
    lfd f30, 0x200(r1)
    psq_l f29, 0x1f8(r1), 0, 0
    lfd f29, 0x1f0(r1)
    psq_l f28, 0x1e8(r1), 0, 0
    lfd f28, 0x1e0(r1)
    psq_l f27, 0x1d8(r1), 0, 0
    lfd f27, 0x1d0(r1)
    lwz r31, 0x1cc(r1)
    lwz r30, 0x1c8(r1)
    lwz r29, 0x1c4(r1)
    mtlr r0
    addi r1, r1, 0x220
    blr
}

asm void fn_8027B748(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    lwz r0, 0x190c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8027B748_0000069C
    lwz r4, 0x1908(r3)
    lwz r4, 0x0(r4)
    lwz r0, 0x7e0(r4)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_8027B748_00000670
    li r0, 0x1
    stw r0, 0x199c(r3)
lbl_fn_8027B748_00000670:
    lwz r0, 0x199c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8027B748_0000069C
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x178(r12)
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x199c(r31)
    b lbl_fn_8027B748_0000079C
lbl_fn_8027B748_0000069C:
    lwz r5, 0x14d4(r3)
    cmpwi r5, 0x0
    beq lbl_fn_8027B748_0000079C
    lwz r4, 0x14dc(r3)
    lwz r0, 0x1524(r3)
    cmpw r4, r0
    blt lbl_fn_8027B748_0000079C
    lwz r0, 0x14e0(r3)
    cmpwi r0, 0x0
    bgt lbl_fn_8027B748_000006F8
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_8027B748_000006F8
    lwz r0, 0x190c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8027B748_000006F8
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x160(r12)
    mtctr r12
    bctrl
    b lbl_fn_8027B748_0000079C
lbl_fn_8027B748_000006F8:
    lfs f2, 0x530(r5)
    lfs f0, 0x530(r3)
    lfs f1, 0x528(r5)
    fsubs f3, f2, f0
    lfs f0, 0x528(r3)
    lfs f2, 0x52c(r5)
    fsubs f4, f1, f0
    lfs f1, 0x52c(r3)
    fmuls f0, f3, f3
    fsubs f2, f2, f1
    stfs f4, 0x8(r1)
    fmadds f1, f4, f4, f0
    stfs f2, 0xc(r1)
    stfs f3, 0x10(r1)
    bl fn_8068B100
    frsp f1, f1
    lfs f0, 0x1504(r31)
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_8027B748_0000079C
    lis r3, 0x6666
    lwz r4, 0x14e4(r31)
    addi r0, r3, 0x6667
    mulhw r0, r0, r4
    srawi r0, r0, 1
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r0, r0, 0x5
    subf. r0, r0, r4
    bne lbl_fn_8027B748_00000788
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x13c(r12)
    mtctr r12
    bctrl
    b lbl_fn_8027B748_0000079C
lbl_fn_8027B748_00000788:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x140(r12)
    mtctr r12
    bctrl
lbl_fn_8027B748_0000079C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8027B8C8(void)
{
    nofralloc
    stwu r1, -0x1e0(r1)
    mflr r0
    stw r0, 0x1e4(r1)
    stfd f31, 0x1d0(r1)
    psq_st f31, 0x1d8(r1), 0, 0
    stfd f30, 0x1c0(r1)
    psq_st f30, 0x1c8(r1), 0, 0
    stw r31, 0x1bc(r1)
    stw r30, 0x1b8(r1)
    mr r30, r3
    bl fn_8027688C
    lfs f0, lbl_808838DC
    li r3, 0xb
    li r0, 0x1
    stw r3, 0x58c(r30)
    lfs f1, lbl_808838F0
    addi r3, r30, 0xb0
    stw r0, 0x3fc(r30)
    li r4, 0x0
    lfs f2, lbl_80883924
    li r5, 0x148
    stfs f0, 0x2fc(r30)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r30)
    bl fn_80097C08
    lwz r5, 0x18ec(r30)
    addi r3, r1, 0xc8
    lfs f0, 0x530(r30)
    mr r4, r3
    lfs f3, 0x530(r5)
    lfs f5, 0x52c(r5)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r30)
    lfs f3, 0x528(r5)
    lfs f0, 0x528(r30)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0xcc(r1)
    stfs f0, 0xc8(r1)
    stfs f6, 0xd0(r1)
    bl fn_805F98D0
    lfs f2, 0xd0(r1)
    addi r3, r1, 0xc8
    lfs f0, lbl_808838E4
    addi r31, r1, 0xbc
    fabs f3, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    frsp f3, f3
    stfs f2, 0xc4(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_8027B8C8_000008AC
    lfs f3, 0xbc(r1)
    lfs f0, lbl_808838F0
    fcmpo cr0, f3, f0
    ble lbl_fn_8027B8C8_000008A0
    lfs f0, lbl_80883914
    b lbl_fn_8027B8C8_000008A4
lbl_fn_8027B8C8_000008A0:
    lfs f0, lbl_80883918
lbl_fn_8027B8C8_000008A4:
    stfs f0, 0x90(r1)
    b lbl_fn_8027B8C8_000008C0
lbl_fn_8027B8C8_000008AC:
    frsp f2, f2
    lfs f1, 0xbc(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x90(r1)
lbl_fn_8027B8C8_000008C0:
    lfs f0, 0x90(r1)
    addi r3, r1, 0x148
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808838F0
    addi r4, r1, 0x80
    lfs f30, 0x150(r1)
    mr r5, r4
    lfs f31, 0x14c(r1)
    addi r3, r1, 0x178
    lfs f13, 0x148(r1)
    lfs f12, 0x160(r1)
    lfs f11, 0x15c(r1)
    lfs f10, 0x158(r1)
    lfs f9, 0x170(r1)
    lfs f8, 0x16c(r1)
    lfs f7, 0x168(r1)
    lfs f6, 0x174(r1)
    lfs f5, 0x164(r1)
    lfs f4, 0x154(r1)
    lfs f0, lbl_808838DC
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0xc4(r1)
    stfs f3, 0x1a8(r1)
    stfs f3, 0x1ac(r1)
    stfs f3, 0x1b0(r1)
    stfs f0, 0x1b4(r1)
    stfs f13, 0x50(r1)
    stfs f31, 0x54(r1)
    stfs f30, 0x58(r1)
    stfs f13, 0x178(r1)
    stfs f31, 0x17c(r1)
    stfs f30, 0x180(r1)
    stfs f10, 0x5c(r1)
    stfs f11, 0x60(r1)
    stfs f12, 0x64(r1)
    stfs f10, 0x188(r1)
    stfs f11, 0x18c(r1)
    stfs f12, 0x190(r1)
    stfs f7, 0x68(r1)
    stfs f8, 0x6c(r1)
    stfs f9, 0x70(r1)
    stfs f7, 0x198(r1)
    stfs f8, 0x19c(r1)
    stfs f9, 0x1a0(r1)
    stfs f4, 0x74(r1)
    stfs f5, 0x78(r1)
    stfs f6, 0x7c(r1)
    stfs f4, 0x184(r1)
    stfs f5, 0x194(r1)
    stfs f6, 0x1a4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x88(r1)
    bl fn_805F9750
    lfs f2, 0x88(r1)
    lfs f0, lbl_808838E4
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8027B8C8_000009DC
    lfs f3, 0x84(r1)
    lfs f0, lbl_808838F0
    fcmpo cr0, f3, f0
    ble lbl_fn_8027B8C8_000009CC
    lfs f0, lbl_80883914
    b lbl_fn_8027B8C8_000009D0
lbl_fn_8027B8C8_000009CC:
    lfs f0, lbl_80883918
lbl_fn_8027B8C8_000009D0:
    fneg f0, f0
    stfs f0, 0x8c(r1)
    b lbl_fn_8027B8C8_000009F0
lbl_fn_8027B8C8_000009DC:
    lfs f1, 0x84(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x8c(r1)
lbl_fn_8027B8C8_000009F0:
    lfs f0, lbl_808838F0
    addi r3, r1, 0x8c
    psq_l f1, 0x0(r3), 0, 0
    li r0, 0x0
    fmr f2, f0
    psq_st f1, 0x534(r30), 0, 0
    addi r4, r30, 0x1538
    li r5, 0x67
    stfs f2, 0xc4(r1)
    li r6, 0x1
    frsp f2, f2
    stw r0, 0x18f0(r30)
    stfs f2, 0x53c(r30)
    stfs f0, 0x94(r1)
    lwz r3, lbl_8087F3C0
    psq_st f1, 0x0(r31), 0, 0
    bl fn_80239DAC
    lfs f4, lbl_80883928
    addi r3, r1, 0xb0
    lfs f3, 0xcc(r1)
    addi r4, r1, 0xc8
    lfs f0, 0xc8(r1)
    addi r31, r1, 0x98
    fmuls f6, f3, f4
    lfs f5, 0xd0(r1)
    fmuls f7, f0, f4
    lfs f0, 0x528(r30)
    fmuls f4, f5, f4
    lfs f3, 0x52c(r30)
    fadds f5, f3, f6
    lfs f3, 0x530(r30)
    fadds f0, f0, f7
    lwz r5, 0x18ec(r30)
    fadds f3, f3, f4
    stfs f5, 0xb4(r1)
    stfs f0, 0xb0(r1)
    fmr f2, f3
    lfs f0, lbl_808838E4
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x528(r5), 0, 0
    stfs f2, 0x530(r5)
    lfs f2, 0xd0(r1)
    psq_l f1, 0x0(r4), 0, 0
    fabs f5, f2
    stfs f7, 0xa4(r1)
    stfs f6, 0xa8(r1)
    frsp f5, f5
    stfs f4, 0xac(r1)
    fcmpo cr0, f5, f0
    stfs f3, 0xb8(r1)
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0xa0(r1)
    bge lbl_fn_8027B8C8_00000AE8
    lfs f3, 0x98(r1)
    lfs f0, lbl_808838F0
    fcmpo cr0, f3, f0
    ble lbl_fn_8027B8C8_00000ADC
    lfs f0, lbl_80883914
    b lbl_fn_8027B8C8_00000AE0
lbl_fn_8027B8C8_00000ADC:
    lfs f0, lbl_80883918
lbl_fn_8027B8C8_00000AE0:
    stfs f0, 0x48(r1)
    b lbl_fn_8027B8C8_00000AFC
lbl_fn_8027B8C8_00000AE8:
    frsp f2, f2
    lfs f1, 0x98(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_8027B8C8_00000AFC:
    lfs f0, 0x48(r1)
    addi r3, r1, 0xd8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808838F0
    addi r4, r1, 0x38
    lfs f31, 0xe0(r1)
    mr r5, r4
    lfs f30, 0xdc(r1)
    addi r3, r1, 0x108
    lfs f13, 0xd8(r1)
    lfs f12, 0xf0(r1)
    lfs f11, 0xec(r1)
    lfs f10, 0xe8(r1)
    lfs f9, 0x100(r1)
    lfs f8, 0xfc(r1)
    lfs f7, 0xf8(r1)
    lfs f6, 0x104(r1)
    lfs f5, 0xf4(r1)
    lfs f4, 0xe4(r1)
    lfs f0, lbl_808838DC
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0xa0(r1)
    stfs f3, 0x138(r1)
    stfs f3, 0x13c(r1)
    stfs f3, 0x140(r1)
    stfs f0, 0x144(r1)
    stfs f13, 0x8(r1)
    stfs f30, 0xc(r1)
    stfs f31, 0x10(r1)
    stfs f13, 0x108(r1)
    stfs f30, 0x10c(r1)
    stfs f31, 0x110(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0x118(r1)
    stfs f11, 0x11c(r1)
    stfs f12, 0x120(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0x128(r1)
    stfs f8, 0x12c(r1)
    stfs f9, 0x130(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0x114(r1)
    stfs f5, 0x124(r1)
    stfs f6, 0x134(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_808838E4
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8027B8C8_00000C18
    lfs f3, 0x3c(r1)
    lfs f0, lbl_808838F0
    fcmpo cr0, f3, f0
    ble lbl_fn_8027B8C8_00000C08
    lfs f0, lbl_80883914
    b lbl_fn_8027B8C8_00000C0C
lbl_fn_8027B8C8_00000C08:
    lfs f0, lbl_80883918
lbl_fn_8027B8C8_00000C0C:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_8027B8C8_00000C2C
lbl_fn_8027B8C8_00000C18:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_8027B8C8_00000C2C:
    addi r3, r1, 0x44
    lfs f2, lbl_808838F0
    psq_l f1, 0x0(r3), 0, 0
    mr r4, r30
    lwz r3, 0x18ec(r30)
    stfs f2, 0x4c(r1)
    stfs f2, 0xa0(r1)
    frsp f2, f2
    psq_st f1, 0x534(r3), 0, 0
    stfs f2, 0x53c(r3)
    psq_st f1, 0x0(r31), 0, 0
    lwz r3, 0x18ec(r30)
    bl fn_8015C3A8
    lwz r3, 0x18ec(r30)
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8027B8C8_00000CB0
    lwz r3, lbl_8087F430
    li r31, -0x1
    li r4, 0xe6
    bl fn_80370A78
    cmpwi r3, 0x0
    bne lbl_fn_8027B8C8_00000C9C
    lwz r3, lbl_8087F430
    li r4, 0xe6
    li r5, 0x1
    bl fn_80370AE4
    b lbl_fn_8027B8C8_00000CEC
lbl_fn_8027B8C8_00000C9C:
    lwz r3, lbl_8087F430
    li r4, 0xea
    li r5, 0x1
    bl fn_80370AE4
    b lbl_fn_8027B8C8_00000CEC
lbl_fn_8027B8C8_00000CB0:
    lwz r31, 0x58(r3)
    li r4, 0xe7
    lwz r3, lbl_8087F430
    bl fn_80370A78
    cmpwi r3, 0x0
    bne lbl_fn_8027B8C8_00000CDC
    lwz r3, lbl_8087F430
    li r4, 0xe7
    li r5, 0x1
    bl fn_80370AE4
    b lbl_fn_8027B8C8_00000CEC
lbl_fn_8027B8C8_00000CDC:
    lwz r3, lbl_8087F430
    li r4, 0xeb
    li r5, 0x1
    bl fn_80370AE4
lbl_fn_8027B8C8_00000CEC:
    lwz r3, lbl_8087F430
    mr r5, r31
    li r4, 0x79
    bl fn_80370AE4
    lwz r0, 0x1e4(r1)
    psq_l f31, 0x1d8(r1), 0, 0
    lfd f31, 0x1d0(r1)
    psq_l f30, 0x1c8(r1), 0, 0
    lfd f30, 0x1c0(r1)
    lwz r31, 0x1bc(r1)
    lwz r30, 0x1b8(r1)
    mtlr r0
    addi r1, r1, 0x1e0
    blr
}

asm void fn_8027BE3C(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x54(r1)
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r3
    stw r29, 0x34(r1)
    stw r28, 0x30(r1)
    lfs f31, 0x2e4(r3)
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_8027BE3C_00001094
    lwz r3, 0x190c(r30)
    li r0, 0x1c2
    lwz r4, 0x1910(r30)
    stw r0, 0x14e0(r30)
    cmplw r3, r4
    bge lbl_fn_8027BE3C_00000DA0
    addi r3, r3, 0x1
    stw r3, 0x190c(r30)
    subi r0, r3, 0x1
    lwz r3, 0x1908(r30)
    slwi r0, r0, 2
    lwz r4, 0x18ec(r30)
    stwx r4, r3, r0
    b lbl_fn_8027BE3C_00001020
lbl_fn_8027BE3C_00000DA0:
    lis r3, 0x4000
    subi r0, r3, 0x1
    subf r0, r4, r0
    cmplwi r0, 0x1
    bge lbl_fn_8027BE3C_00000DD8
    lis r4, lbl_80744D2C@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80744D2C@l
    addi r3, r3, __files@l
    addi r4, r4, 0xbe
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8027BE3C_00000DD8:
    li r5, 0x0
    addi r4, r30, 0x1910
    lis r3, 0x4000
    stw r5, 0x14(r1)
    subi r0, r3, 0x1
    stw r5, 0x18(r1)
    stw r5, 0x1c(r1)
    stw r4, 0x20(r1)
    stw r5, 0x24(r1)
    lwz r3, 0x190c(r30)
    lwz r31, 0x1910(r30)
    addi r3, r3, 0x1
    subf r3, r31, r3
    subf r0, r31, r0
    cmplw r3, r0
    stw r3, 0x8(r1)
    ble lbl_fn_8027BE3C_00000E40
    lis r4, lbl_80744D2C@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80744D2C@l
    addi r3, r3, __files@l
    addi r4, r4, 0xbe
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8027BE3C_00000E40:
    lis r3, 0x1555
    addi r0, r3, 0x5555
    cmplw r31, r0
    bge lbl_fn_8027BE3C_00000E90
    addi r5, r31, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x8(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r4, r3, r4
    addi r3, r1, 0x10
    srwi r4, r4, 2
    stw r4, 0x10(r1)
    cmplw r4, r0
    bge lbl_fn_8027BE3C_00000E84
    addi r3, r1, 0x8
lbl_fn_8027BE3C_00000E84:
    lwz r0, 0x0(r3)
    add r29, r31, r0
    b lbl_fn_8027BE3C_00000ED4
lbl_fn_8027BE3C_00000E90:
    lis r3, 0x2aab
    subi r0, r3, 0x5556
    cmplw r31, r0
    bge lbl_fn_8027BE3C_00000ECC
    addi r3, r31, 0x1
    lwz r0, 0x8(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_8027BE3C_00000EC0
    addi r3, r1, 0x8
lbl_fn_8027BE3C_00000EC0:
    lwz r0, 0x0(r3)
    add r29, r31, r0
    b lbl_fn_8027BE3C_00000ED4
lbl_fn_8027BE3C_00000ECC:
    lis r3, 0x4000
    subi r29, r3, 0x1
lbl_fn_8027BE3C_00000ED4:
    lis r3, 0x4000
    subi r0, r3, 0x1
    cmplw r29, r0
    ble lbl_fn_8027BE3C_00000F08
    lis r4, lbl_80744D2C@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80744D2C@l
    addi r3, r3, __files@l
    addi r4, r4, 0xbe
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8027BE3C_00000F08:
    slwi r3, r29, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_8027BE3C_00000F3C
    lis r3, __files@ha
    lis r4, lbl_80775A88@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8027BE3C_00000F3C:
    lwz r0, 0x18(r1)
    stw r31, 0x14(r1)
    slwi r3, r0, 2
    stw r29, 0x1c(r1)
    lwz r0, 0x190c(r30)
    stw r0, 0x24(r1)
    slwi r0, r0, 2
    add r0, r31, r0
    lwz r4, 0x18ec(r30)
    stwx r4, r3, r0
    lwz r3, 0x18(r1)
    lwz r0, 0x24(r1)
    addi r3, r3, 0x1
    stw r3, 0x18(r1)
    lwz r3, 0x14(r1)
    lwz r4, 0x190c(r30)
    lwz r29, 0x1908(r30)
    slwi r4, r4, 2
    add r5, r29, r4
    subf r5, r29, r5
    mr r4, r29
    srawi r5, r5, 2
    addze r31, r5
    subf r0, r31, r0
    stw r0, 0x24(r1)
    slwi r28, r31, 2
    slwi r0, r0, 2
    mr r5, r28
    add r3, r3, r0
    bl memcpy
    mr r3, r29
    mr r5, r28
    li r4, 0x0
    bl memset
    lwz r0, 0x18(r1)
    li r4, 0x0
    addic. r3, r1, 0x14
    add r0, r0, r31
    stw r0, 0x18(r1)
    stw r4, 0x190c(r30)
    lwz r3, 0x1910(r30)
    lwz r0, 0x1c(r1)
    stw r0, 0x1910(r30)
    stw r3, 0x1c(r1)
    lwz r0, 0x14(r1)
    lwz r3, 0x1908(r30)
    stw r0, 0x1908(r30)
    stw r3, 0x14(r1)
    lwz r0, 0x18(r1)
    stw r0, 0x190c(r30)
    stw r4, 0x18(r1)
    beq lbl_fn_8027BE3C_00001020
    lwz r3, 0x14(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8027BE3C_00001020
    stw r4, 0x18(r1)
    bl dtor_80084684
lbl_fn_8027BE3C_00001020:
    lwz r3, 0x18ec(r30)
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8016EB48
    lwz r8, 0x18ec(r30)
    addi r0, r30, 0x196c
    li r4, 0x0
    li r5, 0x1
    lwz r3, 0x12a8(r8)
    li r6, 0x1
    li r7, 0x1
    ori r3, r3, 0x200
    stw r3, 0x12a8(r8)
    lwz r3, 0x18ec(r30)
    stw r0, 0xf1c(r3)
    lwz r3, 0x18ec(r30)
    bl fn_8015495C
    li r31, 0x0
    stw r31, 0x18ec(r30)
    mr r3, r30
    bl fn_80279054
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x138(r12)
    mtctr r12
    bctrl
    stw r31, 0x199c(r30)
    stw r31, 0x19a4(r30)
lbl_fn_8027BE3C_00001094:
    lwz r0, 0x54(r1)
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r28, 0x30(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8027C1D4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_8027688C
    lwz r4, 0x1968(r31)
    li r3, 0x13
    li r0, 0x1
    stw r3, 0x58c(r31)
    cmpwi r4, 0x0
    stw r0, 0x14f8(r31)
    beq lbl_fn_8027C1D4_00001104
    lwz r4, 0x0(r4)
    mr r3, r31
    li r5, 0x2
    bl fn_8017039C
    b lbl_fn_8027C1D4_00001118
lbl_fn_8027C1D4_00001104:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x180(r12)
    mtctr r12
    bctrl
lbl_fn_8027C1D4_00001118:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8027C244(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    lwz r4, 0x1968(r3)
    lfs f3, 0x530(r3)
    lfs f0, 0xc(r4)
    lfs f2, 0x528(r3)
    addi r3, r1, 0x8
    lfs f1, 0x4(r4)
    fsubs f3, f3, f0
    lfs f0, lbl_808838F0
    fsubs f1, f2, f1
    stfs f3, 0x10(r1)
    stfs f1, 0x8(r1)
    stfs f0, 0xc(r1)
    bl fn_805F9920
    lfs f0, lbl_8088392C
    fcmpo cr0, f1, f0
    bge lbl_fn_8027C244_000011A0
    li r0, 0x0
    stw r0, 0x14f8(r31)
    mr r3, r31
    lwz r12, 0x0(r31)
    lwz r12, 0x180(r12)
    mtctr r12
    bctrl
    b lbl_fn_8027C244_000011B4
lbl_fn_8027C244_000011A0:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0xfc(r12)
    mtctr r12
    bctrl
lbl_fn_8027C244_000011B4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8027C2E0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    bl fn_8027688C
    li r0, 0x14
    stw r0, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lwz r3, 0x1968(r31)
    addi r6, r1, 0x8
    lfs f3, lbl_808838F0
    li r9, 0x0
    lfs f4, 0x14(r3)
    li r0, 0x1
    stfs f3, 0x8(r1)
    fmr f2, f3
    lfs f0, lbl_808838DC
    addi r3, r31, 0xb0
    stfs f4, 0xc(r1)
    li r4, 0x0
    li r5, 0x142
    psq_l f1, 0x0(r6), 0, 0
    li r6, 0x0
    psq_st f1, 0x534(r31), 0, 0
    fmr f1, f3
    li r7, 0x0
    li r8, 0x1
    stfs f2, 0x53c(r31)
    lfs f2, lbl_80883924
    stfs f3, 0x10(r1)
    stw r9, 0x19a0(r31)
    stw r0, 0x3fc(r31)
    stfs f0, 0x2fc(r31)
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8027C38C(void)
{
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    stw r0, 0xd4(r1)
    addi r11, r1, 0xc0
    stfd f31, 0xc0(r1)
    psq_st f31, 0xc8(r1), 0, 0
    bl _savegpr_26
    lwz r4, lbl_8087F8A0
    mr r30, r3
    lwz r4, 0x48(r4)
    b lbl_fn_8027C38C_000012A4
lbl_fn_8027C38C_000012A0:
    lwz r4, 0x14ac(r4)
lbl_fn_8027C38C_000012A4:
    cmpwi r4, 0x0
    bne lbl_fn_8027C38C_000012A0
    lwz r5, 0x14d8(r3)
    cmpwi r5, 0x0
    beq lbl_fn_8027C38C_000012CC
    cmpwi r5, 0x1
    beq lbl_fn_8027C38C_000013D8
    cmpwi r5, 0x2
    beq lbl_fn_8027C38C_0000145C
    b lbl_fn_8027C38C_000016D4
lbl_fn_8027C38C_000012CC:
    lfs f31, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_8027C38C_000016D4
    lwz r5, 0x14d8(r30)
    mr r3, r30
    li r4, 0x64
    addi r0, r5, 0x1
    stw r0, 0x14d8(r30)
    bl fn_80232B7C
    lfs f0, lbl_808838F0
    li r0, -0x1
    lfs f1, lbl_808838DC
    li r27, 0x1
    stfs f0, 0x20(r1)
    addi r4, r30, 0x19b4
    addi r5, r30, 0xb0
    addi r7, r1, 0x14
    stfs f0, 0x24(r1)
    addi r8, r1, 0x20
    addi r9, r1, 0x30
    li r6, 0x0
    stfs f0, 0x28(r1)
    li r10, -0x1
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f1, 0x30(r1)
    stfs f1, 0x34(r1)
    stfs f1, 0x38(r1)
    stfs f1, 0x3c(r1)
    stw r0, 0x8(r1)
    stw r27, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lis r4, lbl_80744D2C@ha
    lfs f1, lbl_808838DC
    addi r4, r4, lbl_80744D2C@l
    addi r3, r1, 0x10
    addi r4, r4, 0xec
    addi r5, r30, 0x528
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r30, 0x19c0
    addi r4, r1, 0x10
    bl fn_800CB440
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    lfs f0, lbl_808838DC
    addi r3, r30, 0xb0
    stw r27, 0x3fc(r30)
    li r4, 0x0
    lfs f1, lbl_808838F0
    li r5, 0x143
    stfs f0, 0x2fc(r30)
    li r6, 0x1
    lfs f2, lbl_80883924
    li r7, 0x0
    stfs f0, 0x2e8(r30)
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_8027C38C_000016D4
lbl_fn_8027C38C_000013D8:
    lwz r4, 0x19a0(r3)
    addi r0, r4, 0x1
    stw r0, 0x19a0(r3)
    cmpwi r0, 0x5
    blt lbl_fn_8027C38C_000016D4
    addi r4, r5, 0x1
    li r0, 0x0
    stw r4, 0x14d8(r3)
    mr r4, r30
    li r5, 0x64
    li r6, 0x1
    stw r0, 0x19a0(r3)
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    addi r3, r30, 0x19c0
    li r4, 0x0
    li r5, 0x0
    bl fn_800CB5C8
    lfs f0, lbl_808838DC
    li r0, 0x1
    stw r0, 0x3fc(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_808838F0
    li r4, 0x0
    stfs f0, 0x2fc(r30)
    li r5, 0x144
    lfs f2, lbl_80883924
    li r6, 0x0
    stfs f0, 0x2e8(r30)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_8027C38C_000016D4
lbl_fn_8027C38C_0000145C:
    lfs f3, 0x2e4(r3)
    lfs f0, lbl_80883930
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_8027C38C_000016A4
    lfs f0, lbl_80883934
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_8027C38C_000016A4
    lfs f3, lbl_808838F0
    li r4, 0x79
    lfs f0, lbl_808838DC
    stfs f3, 0x64(r1)
    stfs f3, 0x68(r1)
    stfs f0, 0x6c(r1)
    lfs f1, 0x538(r3)
    addi r3, r1, 0x70
    bl fn_805F8E70
    addi r4, r1, 0x64
    addi r3, r1, 0x70
    mr r5, r4
    bl fn_805F93C0
    lis r4, lbl_80744D2C@ha
    addi r26, r30, 0xb0
    addi r4, r4, lbl_80744D2C@l
    li r5, 0x0
    mr r3, r26
    addi r4, r4, 0xf9
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8027C38C_000014E0
    li r3, 0x0
    b lbl_fn_8027C38C_000014EC
lbl_fn_8027C38C_000014E0:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r26)
    add r3, r3, r0
lbl_fn_8027C38C_000014EC:
    lfs f5, 0x6c(r1)
    lfs f4, lbl_80883938
    lfs f3, 0x68(r1)
    fmuls f6, f5, f4
    lfs f0, 0x64(r1)
    fmuls f7, f3, f4
    lwz r0, 0x190c(r30)
    fmuls f8, f0, f4
    lfs f3, 0xc(r3)
    lfs f5, 0x2c(r3)
    cmpwi r0, 0x0
    fadds f4, f3, f8
    lfs f0, 0x1c(r3)
    stfs f8, 0x4c(r1)
    fadds f3, f0, f7
    fadds f0, f5, f6
    stfs f7, 0x50(r1)
    stfs f6, 0x54(r1)
    stfs f4, 0x58(r1)
    stfs f3, 0x5c(r1)
    stfs f0, 0x60(r1)
    beq lbl_fn_8027C38C_00001698
    li r31, 0x0
    lfs f31, lbl_80883908
    mr r27, r31
    addi r26, r1, 0x58
    li r29, 0x0
    lis r28, 0x1
    b lbl_fn_8027C38C_00001680
lbl_fn_8027C38C_00001560:
    lwz r3, 0x1908(r30)
    addi r4, r28, -0x8000
    psq_l f1, 0x0(r26), 0, 0
    li r5, 0x12c
    lwzx r3, r3, r29
    li r6, 0x0
    lfs f2, 0x60(r1)
    li r7, 0x0
    lwz r0, 0x12a8(r3)
    li r8, 0x0
    li r9, 0x0
    li r10, 0x1
    rlwinm r0, r0, 0, 23, 21
    stw r0, 0x12a8(r3)
    lwz r3, 0x1908(r30)
    lwzx r3, r3, r29
    stw r27, 0xf1c(r3)
    lwz r3, 0x1908(r30)
    lwzx r3, r3, r29
    psq_st f1, 0x528(r3), 0, 0
    stfs f2, 0x530(r3)
    lwz r3, 0x1908(r30)
    lwzx r3, r3, r29
    addi r3, r3, 0x7d4
    bl fn_8012F440
    lwz r3, 0x1908(r30)
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    lwzx r3, r3, r29
    bl fn_8016EB48
    lfs f4, 0x6c(r1)
    addi r4, r1, 0x40
    lfs f3, 0x68(r1)
    li r5, -0x1
    lfs f0, 0x64(r1)
    fmuls f4, f4, f31
    fmuls f3, f3, f31
    li r6, 0x0
    fmuls f0, f0, f31
    stfs f4, 0x48(r1)
    stfs f0, 0x40(r1)
    stfs f3, 0x44(r1)
    lwz r3, 0x1908(r30)
    lwzx r3, r3, r29
    bl fn_8015E7A0
    lwz r3, 0x1908(r30)
    lwzx r3, r3, r29
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8027C38C_00001654
    lwz r3, lbl_8087F430
    li r4, 0xe8
    bl fn_80370A78
    cmpwi r3, 0x0
    bne lbl_fn_8027C38C_00001678
    lwz r3, lbl_8087F430
    li r4, 0xe8
    li r5, 0x1
    bl fn_80370AE4
    b lbl_fn_8027C38C_00001678
lbl_fn_8027C38C_00001654:
    lwz r3, lbl_8087F430
    li r4, 0xe9
    bl fn_80370A78
    cmpwi r3, 0x0
    bne lbl_fn_8027C38C_00001678
    lwz r3, lbl_8087F430
    li r4, 0xe9
    li r5, 0x1
    bl fn_80370AE4
lbl_fn_8027C38C_00001678:
    addi r31, r31, 0x1
    addi r29, r29, 0x4
lbl_fn_8027C38C_00001680:
    lwz r0, 0x190c(r30)
    cmplw r31, r0
    blt lbl_fn_8027C38C_00001560
    lwz r0, 0x190c(r30)
    subf r0, r0, r0
    stw r0, 0x190c(r30)
lbl_fn_8027C38C_00001698:
    li r0, 0x1c2
    stw r0, 0x14e0(r30)
    b lbl_fn_8027C38C_000016D4
lbl_fn_8027C38C_000016A4:
    lfs f31, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_8027C38C_000016D4
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x138(r12)
    mtctr r12
    bctrl
lbl_fn_8027C38C_000016D4:
    addi r11, r1, 0xc0
    psq_l f31, 0xc8(r1), 0, 0
    lfd f31, 0xc0(r1)
    bl _restgpr_26
    lwz r0, 0xd4(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}

asm void fn_8027C80C(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r4, r1, 0x14
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    stw r28, 0x20(r1)
    mr r28, r3
    bl fn_80278218
    lfs f31, lbl_8088391C
    li r30, 0x0
    li r29, 0x0
    li r31, 0x0
    b lbl_fn_8027C80C_00001794
lbl_fn_8027C80C_00001738:
    lwz r4, 0x14c0(r28)
    addi r3, r1, 0x8
    lfs f4, 0x1c(r1)
    lwzx r4, r4, r31
    lfs f3, 0x18(r1)
    lfs f0, 0xc(r4)
    lfs f2, 0x8(r4)
    fsubs f4, f4, f0
    lfs f0, 0x4(r4)
    lfs f1, 0x14(r1)
    fsubs f2, f3, f2
    stfs f4, 0x10(r1)
    fsubs f0, f1, f0
    stfs f2, 0xc(r1)
    stfs f0, 0x8(r1)
    bl fn_805F9920
    fcmpo cr0, f31, f1
    ble lbl_fn_8027C80C_0000178C
    lwz r3, 0x14c0(r28)
    fmr f31, f1
    lwzx r30, r3, r31
lbl_fn_8027C80C_0000178C:
    addi r31, r31, 0x4
    addi r29, r29, 0x1
lbl_fn_8027C80C_00001794:
    lwz r0, 0x14c4(r28)
    cmplw r29, r0
    blt lbl_fn_8027C80C_00001738
    psq_l f31, 0x38(r1), 0, 0
    mr r3, r30
    lfd f31, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8027C8E4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, 0x51ec
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    subi r31, r4, 0x7ae1
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r5, lbl_8087F8A0
    lwz r30, 0x14d4(r3)
    lwz r29, 0x48(r5)
    b lbl_fn_8027C8E4_0000184C
lbl_fn_8027C8E4_00001804:
    mr r3, r28
    mr r4, r29
    bl fn_8027851C
    cmpwi r3, 0x0
    beq lbl_fn_8027C8E4_00001848
    cmpwi r30, 0x0
    beq lbl_fn_8027C8E4_00001844
    bl fn_80680CF8
    mulhw r0, r31, r3
    srawi r0, r0, 5
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x64
    subf r0, r0, r3
    cmpwi r0, 0x46
    bge lbl_fn_8027C8E4_00001848
lbl_fn_8027C8E4_00001844:
    mr r30, r29
lbl_fn_8027C8E4_00001848:
    lwz r29, 0x14ac(r29)
lbl_fn_8027C8E4_0000184C:
    cmpwi r29, 0x0
    bne lbl_fn_8027C8E4_00001804
    mr r3, r30
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8027C990(void)
{
    nofralloc
    stwu r1, -0x6a0(r1)
    mflr r0
    stw r0, 0x6a4(r1)
    addi r11, r1, 0x6a0
    bl _savegpr_25
    mr r30, r5
    lwz r5, 0x20(r5)
    mr r29, r3
    bl fn_8035B694
    lis r3, lbl_80785500@ha
    addi r31, r29, 0x14b0
    addi r3, r3, lbl_80785500@l
    stw r3, 0x0(r29)
    mr r3, r31
    bl fn_80473E74
    lfs f1, lbl_80883944
    lis r3, lbl_8078FBB0@ha
    li r28, 0x0
    lfs f0, lbl_80883948
    addi r3, r3, lbl_8078FBB0@l
    li r4, 0x3c
    li r0, 0x1
    stw r3, 0x0(r31)
    addi r3, r29, 0x1550
    stw r28, 0x14c0(r29)
    stw r28, 0x14c4(r29)
    stw r28, 0x14c8(r29)
    stw r28, 0x14cc(r29)
    stw r28, 0x14d0(r29)
    stw r28, 0x14d4(r29)
    stw r28, 0x14d8(r29)
    stfs f1, 0x14dc(r29)
    stw r28, 0x14e4(r29)
    stw r28, 0x14e8(r29)
    stw r28, 0x14ec(r29)
    stw r28, 0x14f0(r29)
    stw r28, 0x14fc(r29)
    stw r28, 0x1500(r29)
    stw r28, 0x1504(r29)
    stw r28, 0x1508(r29)
    stw r28, 0x150c(r29)
    stw r28, 0x1510(r29)
    stw r28, 0x1514(r29)
    stw r28, 0x1518(r29)
    stw r28, 0x151c(r29)
    stw r28, 0x1520(r29)
    stw r28, 0x1524(r29)
    stw r28, 0x1528(r29)
    stw r28, 0x152c(r29)
    stw r4, 0x1534(r29)
    stw r28, 0x1538(r29)
    stfs f0, 0x153c(r29)
    stw r28, 0x1544(r29)
    stw r28, 0x1548(r29)
    stw r0, 0x154c(r29)
    bl fn_802377B8
    addi r3, r29, 0x155c
    bl fn_80237518
    addi r3, r29, 0x1568
    bl fn_802377B8
    addi r3, r29, 0x1574
    bl fn_802377B8
    addi r3, r29, 0x1580
    bl fn_802377B8
    addi r3, r29, 0x158c
    bl fn_802377B8
    lfs f0, lbl_8088394C
    addi r3, r29, 0x15a8
    stfs f0, 0x1598(r29)
    stfs f0, 0x159c(r29)
    stfs f0, 0x15a0(r29)
    stfs f0, 0x15a4(r29)
    bl fn_800CB360
    lwz r7, 0x12a4(r29)
    li r5, 0x3
    lwz r0, 0x958(r29)
    lis r3, lbl_80744EFC@ha
    lwz r4, 0x14c4(r29)
    oris r7, r7, 0x40
    ori r6, r0, 0x10
    lwz r8, 0x14d0(r29)
    subf r4, r4, r4
    addi r31, r3, lbl_80744EFC@l
    subf r0, r8, r8
    stw r7, 0x12a4(r29)
    mr r3, r31
    addi r27, r1, 0x38
    stw r6, 0x958(r29)
    stw r5, 0x55c(r29)
    stw r4, 0x14c4(r29)
    stw r0, 0x14d0(r29)
    stw r28, 0x14f4(r29)
    stw r28, 0x14f8(r29)
    stw r28, 0x151c(r29)
    stw r28, 0x14b8(r29)
    stw r28, 0x14bc(r29)
    stw r28, 0x38(r1)
    stw r28, 0x3c(r1)
    stw r28, 0x40(r1)
    bl strlen
    mr r26, r3
    mr r3, r27
    mr r4, r26
    bl fn_80013DC4
    lbz r0, 0x1c(r1)
    mr r3, r27
    stb r0, 0x18(r1)
    mr r6, r31
    add r7, r31, r26
    addi r8, r1, 0x18
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    addi r27, r31, 0x18
    stw r28, 0x2c(r1)
    addi r26, r1, 0x2c
    stw r28, 0x30(r1)
    mr r3, r27
    stw r28, 0x34(r1)
    bl strlen
    mr r25, r3
    mr r3, r26
    mr r4, r25
    bl fn_80013DC4
    lbz r0, 0x14(r1)
    mr r3, r26
    stb r0, 0x10(r1)
    mr r6, r27
    add r7, r27, r25
    addi r8, r1, 0x10
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    addi r3, r30, 0x2c
    bl strlen
    lis r4, lbl_807772D0@ha
    mr r26, r3
    addi r4, r4, lbl_807772D0@l
    stw r4, 0x44(r1)
    addi r3, r1, 0x54
    li r5, 0x400
    stw r28, 0x48(r1)
    li r4, 0x0
    stw r28, 0x4c(r1)
    stw r28, 0x50(r1)
    stw r28, 0x674(r1)
    bl memset
    addi r3, r1, 0x654
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x44(r1)
    mr r5, r26
    addi r3, r1, 0x44
    addi r4, r30, 0x2c
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0x44
    addi r4, r4, lbl_807772B0@l
    stw r4, 0x44(r1)
    la r4, lbl_8087D708
    bl fn_8005B6E8
lbl_fn_8027C990_00001B08:
    addi r3, r1, 0x44
    bl fn_8005B3CC
    cmpwi r3, 0x0
    mr r26, r3
    beq lbl_fn_8027C990_00001BA0
    addi r4, r31, 0x2b
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_8027C990_00001BA0
    mr r3, r26
    addi r4, r31, 0x2c
    li r5, 0x8
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_8027C990_00001B90
    lwz r0, 0x2c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_8027C990_00001B5C
    lbz r0, 0x2c(r1)
    clrlwi r25, r0, 25
    b lbl_fn_8027C990_00001B60
lbl_fn_8027C990_00001B5C:
    lwz r25, 0x30(r1)
lbl_fn_8027C990_00001B60:
    lbz r0, 0xc(r1)
    addi r3, r26, 0x8
    stb r0, 0x8(r1)
    bl strlen
    add r4, r26, r3
    mr r5, r25
    addi r7, r4, 0x8
    addi r3, r1, 0x2c
    addi r6, r26, 0x8
    addi r8, r1, 0x8
    li r4, 0x0
    bl fn_80013F78
lbl_fn_8027C990_00001B90:
    addi r3, r1, 0x44
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_8027C990_00001B08
lbl_fn_8027C990_00001BA0:
    addi r3, r1, 0x20
    addi r4, r1, 0x38
    addi r5, r1, 0x2c
    bl fn_8006AFF8
    lwz r0, 0x20(r1)
    addi r3, r29, 0x14b0
    srwi. r0, r0, 31
    bne lbl_fn_8027C990_00001BC8
    addi r4, r1, 0x21
    b lbl_fn_8027C990_00001BCC
lbl_fn_8027C990_00001BC8:
    lwz r4, 0x28(r1)
lbl_fn_8027C990_00001BCC:
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lis r30, lbl_80744EFC@ha
    addi r3, r29, 0x1550
    addi r30, r30, lbl_80744EFC@l
    addi r4, r30, 0x35
    bl fn_8023780C
    addi r3, r29, 0x155c
    addi r4, r30, 0x4a
    bl fn_80237654
    addi r3, r29, 0x1568
    addi r4, r30, 0x60
    bl fn_8023780C
    addi r3, r29, 0x1574
    addi r4, r30, 0x75
    bl fn_8023780C
    addi r3, r29, 0x1580
    addi r4, r30, 0x8b
    bl fn_8023780C
    addi r3, r29, 0x158c
    addi r4, r30, 0xa0
    bl fn_8023780C
    lwz r0, 0x20(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8027C990_00001C40
    lwz r3, 0x28(r1)
    bl dtor_80084684
lbl_fn_8027C990_00001C40:
    lwz r0, 0x2c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8027C990_00001C54
    lwz r3, 0x34(r1)
    bl dtor_80084684
lbl_fn_8027C990_00001C54:
    lwz r0, 0x38(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8027C990_00001C68
    lwz r3, 0x40(r1)
    bl dtor_80084684
lbl_fn_8027C990_00001C68:
    addi r11, r1, 0x6a0
    mr r3, r29
    bl _restgpr_25
    lwz r0, 0x6a4(r1)
    mtlr r0
    addi r1, r1, 0x6a0
    blr
}
