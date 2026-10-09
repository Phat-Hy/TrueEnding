#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_8004ED34(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_8008BBD8(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800C344C(void);
extern void fn_800CB360(void);
extern void fn_800CB3A0(void);
extern void fn_800CB440(void);
extern void fn_800CB5C8(void);
extern void fn_800CB6E4(void);
extern void fn_800F8548(void);
extern void fn_800FAB80(void);
extern void fn_8012476C(void);
extern void fn_8013CB68(void);
extern void fn_801539E0(void);
extern void fn_80155DAC(void);
extern void fn_80164DCC(void);
extern void fn_8016DA4C(void);
extern void fn_80179D44(void);
extern void fn_801905AC(void);
extern void fn_801905DC(void);
extern void fn_803EA77C(void);
extern void fn_805F8E70(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_80680770(void);
extern void fn_80682428(void);
extern void fn_80686EA4(void);
extern void fn_8068AEA4(void);
extern void fn_80695B00(void);

/* External data declarations */
extern u8 lbl_80739F34[];
extern u8 lbl_8077DC10[];
extern u8 lbl_8077DD2C[];
extern u8 lbl_8077DD38[];
extern u8 lbl_8077DD44[];
extern u8 lbl_8077DDD0[];
extern u8 lbl_8077DDE0[];
extern u8 lbl_8077E238[];
extern u8 lbl_8077E2B0[];
extern u8 lbl_8077E328[];
extern u8 lbl_8077E3A0[];
extern u8 lbl_8077E418[];
extern u8 lbl_8077EEF0[];
extern u8 lbl_8077EF28[];
extern u8 lbl_807C7B78[];
extern u8 lbl_807C7BA0[];
extern u8 lbl_807C7BA8[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F0BB;
extern u32 lbl_8087F0C1;
extern u32 lbl_8087F0C2;
extern u32 lbl_8087F490;
extern u32 lbl_8087F498;
extern u32 lbl_80881FBC;
extern u32 lbl_80881FCC;
extern u32 lbl_80881FD0;
extern u32 lbl_80881FD4;
extern u32 lbl_80881FD8;
extern u32 lbl_80881FDC;
extern u32 lbl_80881FF4;
extern u32 lbl_80882040;
extern u32 lbl_8088209C;
extern u32 lbl_808820DC;
extern u32 lbl_808820F0;

/* Function declarations */
void fn_8019A580(void);
void fn_8019A8A8(void);
void fn_8019AC60(void);
void fn_8019AE9C(void);
void fn_8019AECC(void);
void fn_8019AFE8(void);
void fn_8019B068(void);
void fn_8019B0F0(void);
void fn_8019B29C(void);
void fn_8019B630(void);
void fn_8019B6A8(void);
void fn_8019BA08(void);
void fn_8019BA1C(void);
void fn_8019BBFC(void);
void fn_8019BC2C(void);
void fn_8019BD48(void);
void fn_8019BE14(void);
void fn_8019BE88(void);
void fn_8019BE9C(void);

asm void fn_8019A580(void)
{
    nofralloc
    stwu r1, -0x100(r1)
    mflr r0
    lis r7, lbl_8077E418@ha
    psq_l f1, 0x0(r5), 0, 0
    stw r0, 0x104(r1)
    addi r7, r7, lbl_8077E418@l
    lfs f2, 0x8(r5)
    li r0, 0x71
    stfd f31, 0xf0(r1)
    psq_st f31, 0xf8(r1), 0, 0
    stfd f30, 0xe0(r1)
    psq_st f30, 0xe8(r1), 0, 0
    stw r31, 0xdc(r1)
    mr r31, r3
    stw r30, 0xd8(r1)
    mr r30, r4
    stw r4, 0x4(r3)
    stw r7, 0x0(r3)
    stw r6, 0x8(r3)
    psq_st f1, 0xc(r3), 0, 0
    stfs f2, 0x14(r3)
    stw r0, 0x560(r4)
    lwz r3, 0x4(r3)
    bl fn_8016DA4C
    lwz r3, 0x4(r31)
    lwz r0, 0x12a4(r3)
    srwi. r0, r0, 31
    beq lbl_fn_8019A580_00000078
    mr r3, r30
    bl fn_801539E0
lbl_fn_8019A580_00000078:
    lwz r3, 0x4(r31)
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 25
    beq lbl_fn_8019A580_00000090
    li r4, 0x0
    bl fn_80155DAC
lbl_fn_8019A580_00000090:
    lwz r3, 0x4(r31)
    li r0, 0x1
    lfs f0, lbl_80881FBC
    li r4, 0x0
    addi r3, r3, 0xb0
    lfs f1, lbl_80881FCC
    stw r0, 0x34c(r3)
    li r5, 0x2
    lfs f2, lbl_808820DC
    li r6, 0x1
    stfs f0, 0x24c(r3)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x238(r3)
    bl fn_80097C08
    lwz r6, 0x4(r31)
    addi r3, r31, 0x18
    lfs f3, 0x14(r31)
    addi r5, r1, 0x50
    lfs f0, 0x530(r6)
    mr r4, r3
    lfs f5, 0x10(r31)
    fsubs f2, f3, f0
    lfs f4, 0x52c(r6)
    lfs f0, 0x528(r6)
    lfs f3, 0xc(r31)
    fsubs f4, f5, f4
    stfs f2, 0x58(r1)
    fsubs f0, f3, f0
    stfs f4, 0x54(r1)
    stfs f0, 0x50(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x20(r31)
    bl fn_805F98D0
    lfs f2, 0x20(r31)
    addi r30, r1, 0x5c
    psq_l f1, 0x18(r31), 0, 0
    fabs f3, f2
    lfs f0, lbl_80881FD0
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0x64(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_8019A580_00000168
    lfs f3, 0x5c(r1)
    lfs f0, lbl_80881FCC
    fcmpo cr0, f3, f0
    ble lbl_fn_8019A580_0000015C
    lfs f0, lbl_80881FD4
    b lbl_fn_8019A580_00000160
lbl_fn_8019A580_0000015C:
    lfs f0, lbl_80881FD8
lbl_fn_8019A580_00000160:
    stfs f0, 0x48(r1)
    b lbl_fn_8019A580_0000017C
lbl_fn_8019A580_00000168:
    frsp f2, f2
    lfs f1, 0x5c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_8019A580_0000017C:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x68
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80881FCC
    addi r4, r1, 0x38
    lfs f30, 0x70(r1)
    mr r5, r4
    lfs f31, 0x6c(r1)
    addi r3, r1, 0x98
    lfs f13, 0x68(r1)
    lfs f12, 0x80(r1)
    lfs f11, 0x7c(r1)
    lfs f10, 0x78(r1)
    lfs f9, 0x90(r1)
    lfs f8, 0x8c(r1)
    lfs f7, 0x88(r1)
    lfs f6, 0x94(r1)
    lfs f5, 0x84(r1)
    lfs f4, 0x74(r1)
    lfs f0, lbl_80881FBC
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x64(r1)
    stfs f3, 0xc8(r1)
    stfs f3, 0xcc(r1)
    stfs f3, 0xd0(r1)
    stfs f0, 0xd4(r1)
    stfs f13, 0x8(r1)
    stfs f31, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f13, 0x98(r1)
    stfs f31, 0x9c(r1)
    stfs f30, 0xa0(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xa8(r1)
    stfs f11, 0xac(r1)
    stfs f12, 0xb0(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0xb8(r1)
    stfs f8, 0xbc(r1)
    stfs f9, 0xc0(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0xa4(r1)
    stfs f5, 0xb4(r1)
    stfs f6, 0xc4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80881FD0
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8019A580_00000298
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80881FCC
    fcmpo cr0, f3, f0
    ble lbl_fn_8019A580_00000288
    lfs f0, lbl_80881FD4
    b lbl_fn_8019A580_0000028C
lbl_fn_8019A580_00000288:
    lfs f0, lbl_80881FD8
lbl_fn_8019A580_0000028C:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_8019A580_000002AC
lbl_fn_8019A580_00000298:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_8019A580_000002AC:
    addi r3, r1, 0x44
    lfs f4, lbl_80881FCC
    psq_l f1, 0x0(r3), 0, 0
    addi r4, r1, 0x5c
    psq_st f1, 0x0(r30), 0, 0
    fmr f2, f4
    lfs f0, lbl_80881FD4
    li r0, 0x0
    lfs f3, 0x5c(r1)
    mr r3, r31
    stfs f2, 0x64(r1)
    fadds f0, f3, f0
    lwz r5, 0x4(r31)
    frsp f2, f2
    stfs f4, 0x4c(r1)
    stfs f0, 0x5c(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x534(r5), 0, 0
    stfs f2, 0x53c(r5)
    lwz r4, 0x4(r31)
    stw r0, 0xf1c(r4)
    psq_l f31, 0xf8(r1), 0, 0
    lfd f31, 0xf0(r1)
    psq_l f30, 0xe8(r1), 0, 0
    lfd f30, 0xe0(r1)
    lwz r31, 0xdc(r1)
    lwz r30, 0xd8(r1)
    lwz r0, 0x104(r1)
    mtlr r0
    addi r1, r1, 0x100
    blr
}

asm void fn_8019A8A8(void)
{
    nofralloc
    stwu r1, -0x1a0(r1)
    mflr r0
    lfs f3, lbl_808820F0
    stw r0, 0x1a4(r1)
    li r0, 0x0
    lfs f0, lbl_80882040
    stfd f31, 0x190(r1)
    psq_st f31, 0x198(r1), 0, 0
    stfd f30, 0x180(r1)
    psq_st f30, 0x188(r1), 0, 0
    stw r31, 0x17c(r1)
    stw r30, 0x178(r1)
    stw r29, 0x174(r1)
    mr r29, r3
    stw r0, 0x154(r1)
    lwz r30, lbl_8087EE98
    stw r0, 0x158(r1)
    stw r0, 0x15c(r1)
    stw r0, 0x160(r1)
    lwz r4, 0x4(r3)
    lfs f8, 0x20(r3)
    lfs f7, 0x1c(r3)
    addi r31, r4, 0x5b8
    lfs f6, 0x18(r3)
    fmuls f9, f8, f3
    fmuls f10, f7, f3
    lfs f5, 0x530(r4)
    fmuls f11, f6, f3
    lfs f4, 0x52c(r4)
    lfs f3, 0x528(r4)
    fadds f5, f5, f9
    fadds f4, f4, f10
    stfs f11, 0x88(r1)
    fadds f3, f3, f11
    mr r3, r4
    fmuls f8, f8, f0
    fmuls f7, f7, f0
    fmuls f6, f6, f0
    stfs f3, 0xa0(r1)
    stfs f4, 0xa4(r1)
    stfs f5, 0xa8(r1)
    lfs f4, 0x530(r4)
    lfs f3, 0x52c(r4)
    lfs f0, 0x528(r4)
    fadds f4, f4, f8
    fadds f3, f3, f7
    stfs f10, 0x8c(r1)
    fadds f0, f0, f6
    stfs f9, 0x90(r1)
    stfs f6, 0x7c(r1)
    stfs f7, 0x80(r1)
    stfs f8, 0x84(r1)
    stfs f0, 0x94(r1)
    stfs f3, 0x98(r1)
    stfs f4, 0x9c(r1)
    bl fn_80179D44
    mr r7, r3
    mr r3, r30
    mr r8, r31
    addi r4, r1, 0x120
    addi r5, r1, 0xa0
    addi r6, r1, 0x94
    li r9, 0x0
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_8019A8A8_00000650
    addi r3, r1, 0x124
    lwz r4, 0x4(r29)
    lfs f2, 0x12c(r1)
    addi r31, r1, 0x70
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x528(r4), 0, 0
    lfs f3, lbl_80881FCC
    stfs f2, 0x530(r4)
    lfs f0, lbl_80881FD0
    lfs f2, 0x20(r29)
    stfs f3, 0x1c(r29)
    fabs f4, f2
    psq_l f1, 0x18(r29), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    frsp f4, f4
    stfs f2, 0x78(r1)
    fcmpo cr0, f4, f0
    bge lbl_fn_8019A8A8_00000498
    lfs f0, 0x70(r1)
    fcmpo cr0, f0, f3
    ble lbl_fn_8019A8A8_0000048C
    lfs f0, lbl_80881FD4
    b lbl_fn_8019A8A8_00000490
lbl_fn_8019A8A8_0000048C:
    lfs f0, lbl_80881FD8
lbl_fn_8019A8A8_00000490:
    stfs f0, 0x50(r1)
    b lbl_fn_8019A8A8_000004AC
lbl_fn_8019A8A8_00000498:
    frsp f2, f2
    lfs f1, 0x70(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x50(r1)
lbl_fn_8019A8A8_000004AC:
    lfs f0, 0x50(r1)
    addi r3, r1, 0xb0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80881FCC
    addi r4, r1, 0x40
    lfs f30, 0xb8(r1)
    mr r5, r4
    lfs f31, 0xb4(r1)
    addi r3, r1, 0xe0
    lfs f13, 0xb0(r1)
    lfs f12, 0xc8(r1)
    lfs f11, 0xc4(r1)
    lfs f10, 0xc0(r1)
    lfs f9, 0xd8(r1)
    lfs f8, 0xd4(r1)
    lfs f7, 0xd0(r1)
    lfs f6, 0xdc(r1)
    lfs f5, 0xcc(r1)
    lfs f4, 0xbc(r1)
    lfs f0, lbl_80881FBC
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x78(r1)
    stfs f3, 0x110(r1)
    stfs f3, 0x114(r1)
    stfs f3, 0x118(r1)
    stfs f0, 0x11c(r1)
    stfs f13, 0x10(r1)
    stfs f31, 0x14(r1)
    stfs f30, 0x18(r1)
    stfs f13, 0xe0(r1)
    stfs f31, 0xe4(r1)
    stfs f30, 0xe8(r1)
    stfs f10, 0x1c(r1)
    stfs f11, 0x20(r1)
    stfs f12, 0x24(r1)
    stfs f10, 0xf0(r1)
    stfs f11, 0xf4(r1)
    stfs f12, 0xf8(r1)
    stfs f7, 0x28(r1)
    stfs f8, 0x2c(r1)
    stfs f9, 0x30(r1)
    stfs f7, 0x100(r1)
    stfs f8, 0x104(r1)
    stfs f9, 0x108(r1)
    stfs f4, 0x34(r1)
    stfs f5, 0x38(r1)
    stfs f6, 0x3c(r1)
    stfs f4, 0xec(r1)
    stfs f5, 0xfc(r1)
    stfs f6, 0x10c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x48(r1)
    bl fn_805F9750
    lfs f2, 0x48(r1)
    lfs f0, lbl_80881FD0
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8019A8A8_000005C8
    lfs f3, 0x44(r1)
    lfs f0, lbl_80881FCC
    fcmpo cr0, f3, f0
    ble lbl_fn_8019A8A8_000005B8
    lfs f0, lbl_80881FD4
    b lbl_fn_8019A8A8_000005BC
lbl_fn_8019A8A8_000005B8:
    lfs f0, lbl_80881FD8
lbl_fn_8019A8A8_000005BC:
    fneg f0, f0
    stfs f0, 0x4c(r1)
    b lbl_fn_8019A8A8_000005DC
lbl_fn_8019A8A8_000005C8:
    lfs f1, 0x44(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x4c(r1)
lbl_fn_8019A8A8_000005DC:
    addi r3, r1, 0x4c
    lfs f2, lbl_80881FCC
    psq_l f1, 0x0(r3), 0, 0
    lwz r3, 0x4(r29)
    stfs f2, 0x54(r1)
    stfs f2, 0x78(r1)
    frsp f2, f2
    psq_st f1, 0x534(r3), 0, 0
    stfs f2, 0x53c(r3)
    lwz r30, lbl_8087F048
    psq_st f1, 0x0(r31), 0, 0
    mr r3, r30
    bl fn_800F8548
    li r0, -0x1
    stw r0, 0x8(r1)
    mr r6, r3
    lfs f1, lbl_80881FCC
    stw r0, 0xc(r1)
    mr r3, r30
    lfs f2, lbl_80881FBC
    addi r7, r1, 0x124
    lwz r4, 0x4(r29)
    li r9, 0x0
    lwz r5, 0x8(r29)
    li r10, 0x1e
    addi r8, r4, 0x534
    bl fn_800FAB80
    li r3, 0x1
    b lbl_fn_8019A8A8_000006B4
lbl_fn_8019A8A8_00000650:
    lfs f4, lbl_80881FF4
    addi r4, r1, 0x64
    lfs f3, 0x1c(r29)
    li r3, 0x0
    lfs f0, 0x18(r29)
    fmuls f6, f3, f4
    lwz r5, 0x4(r29)
    fmuls f7, f0, f4
    lfs f5, 0x20(r29)
    lfs f0, 0x528(r5)
    fmuls f4, f5, f4
    lfs f3, 0x52c(r5)
    fadds f0, f0, f7
    stfs f7, 0x58(r1)
    fadds f5, f3, f6
    lfs f3, 0x530(r5)
    stfs f0, 0x64(r1)
    fadds f2, f3, f4
    stfs f5, 0x68(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x528(r5), 0, 0
    stfs f6, 0x5c(r1)
    stfs f4, 0x60(r1)
    stfs f2, 0x6c(r1)
    stfs f2, 0x530(r5)
lbl_fn_8019A8A8_000006B4:
    lwz r0, 0x1a4(r1)
    psq_l f31, 0x198(r1), 0, 0
    lfd f31, 0x190(r1)
    psq_l f30, 0x188(r1), 0, 0
    lfd f30, 0x180(r1)
    lwz r31, 0x17c(r1)
    lwz r30, 0x178(r1)
    lwz r29, 0x174(r1)
    mtlr r0
    addi r1, r1, 0x1a0
    blr
}

asm void fn_8019AC60(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    lis r5, lbl_80739F34@ha
    li r7, 0x0
    stw r0, 0x84(r1)
    addi r5, r5, lbl_80739F34@l
    addi r5, r5, 0x27
    stw r31, 0x7c(r1)
    mr r31, r3
    li r3, 0x20
    mr r6, r5
    stw r30, 0x78(r1)
    stw r29, 0x74(r1)
    mr r29, r4
    li r4, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_8019AC60_00000784
    lwz r7, 0x4(r29)
    lis r4, lbl_8077E3A0@ha
    stw r7, 0x4(r3)
    addi r4, r4, lbl_8077E3A0@l
    li r6, 0x71
    li r0, 0x1
    stw r4, 0x0(r3)
    li r4, 0x0
    lfs f0, lbl_80881FBC
    li r5, 0x2e
    stw r6, 0x560(r7)
    li r6, 0x0
    lfs f1, lbl_80881FCC
    li r7, 0x0
    lwz r3, 0x4(r3)
    li r8, 0x1
    lfs f2, lbl_80881FDC
    addi r3, r3, 0xb0
    stw r0, 0x34c(r3)
    stfs f0, 0x24c(r3)
    stfs f0, 0x238(r3)
    bl fn_80097C08
lbl_fn_8019AC60_00000784:
    lis r3, lbl_8077DD2C@ha
    lwzu r5, lbl_8077DD2C@l(r3)
    lwz r6, 0x4(r29)
    li r0, 0x0
    lwz r4, 0x4(r3)
    lwz r3, 0x8(r3)
    stw r6, 0x8(r1)
    stw r0, 0x0(r31)
    lbz r0, lbl_8087F0C1
    stw r30, 0xc(r1)
    extsb. r0, r0
    stw r5, 0x1c(r1)
    stw r4, 0x20(r1)
    stw r3, 0x24(r1)
    stw r5, 0x10(r1)
    stw r4, 0x14(r1)
    stw r3, 0x18(r1)
    stw r5, 0x50(r1)
    stw r4, 0x54(r1)
    stw r3, 0x58(r1)
    stw r6, 0x5c(r1)
    stw r30, 0x60(r1)
    bne lbl_fn_8019AC60_00000808
    lis r6, lbl_807C7BA0@ha
    lis r4, fn_8019AE9C@ha
    lis r3, fn_8019AECC@ha
    li r0, 0x1
    addi r3, r3, fn_8019AECC@l
    addi r5, r6, lbl_807C7BA0@l
    addi r4, r4, fn_8019AE9C@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C7BA0@l(r6)
    stb r0, lbl_8087F0C1
lbl_fn_8019AC60_00000808:
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
    bne lbl_fn_8019AC60_000008DC
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
    bne lbl_fn_8019AC60_000008A0
    lis r3, __files@ha
    lis r4, lbl_8077EF28@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8077EF28@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8019AC60_000008A0:
    cmpwi r30, 0x0
    beq lbl_fn_8019AC60_000008D0
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
lbl_fn_8019AC60_000008D0:
    stw r30, 0x4(r31)
    li r0, 0x1
    b lbl_fn_8019AC60_000008E0
lbl_fn_8019AC60_000008DC:
    li r0, 0x0
lbl_fn_8019AC60_000008E0:
    cmpwi r0, 0x0
    beq lbl_fn_8019AC60_000008F8
    lis r3, lbl_807C7BA0@ha
    addi r3, r3, lbl_807C7BA0@l
    stw r3, 0x0(r31)
    b lbl_fn_8019AC60_00000900
lbl_fn_8019AC60_000008F8:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_8019AC60_00000900:
    lwz r0, 0x84(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    lwz r29, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_8019AE9C(void)
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

asm void fn_8019AECC(void)
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
    bne lbl_fn_8019AECC_00000984
    lis r3, lbl_8077DDE0@ha
    addi r3, r3, lbl_8077DDE0@l
    stw r3, 0x0(r4)
    b lbl_fn_8019AECC_00000A4C
lbl_fn_8019AECC_00000984:
    cmpwi r5, 0x0
    bne lbl_fn_8019AECC_000009FC
    lwz r31, 0x0(r3)
    li r3, 0x14
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_8019AECC_000009C4
    lis r3, __files@ha
    lis r4, lbl_8077EF28@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8077EF28@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8019AECC_000009C4:
    cmpwi r30, 0x0
    beq lbl_fn_8019AECC_000009F4
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
lbl_fn_8019AECC_000009F4:
    stw r30, 0x0(r29)
    b lbl_fn_8019AECC_00000A4C
lbl_fn_8019AECC_000009FC:
    cmpwi r5, 0x1
    bne lbl_fn_8019AECC_00000A18
    lwz r3, 0x0(r4)
    bl dtor_80084684
    li r0, 0x0
    stw r0, 0x0(r29)
    b lbl_fn_8019AECC_00000A4C
lbl_fn_8019AECC_00000A18:
    lwz r5, 0x0(r4)
    lis r3, lbl_8077DDE0@ha
    lwz r4, lbl_8077DDE0@l(r3)
    lwz r3, 0x0(r5)
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_8019AECC_00000A44
    lwz r0, 0x0(r30)
    stw r0, 0x0(r29)
    b lbl_fn_8019AECC_00000A4C
lbl_fn_8019AECC_00000A44:
    li r0, 0x0
    stw r0, 0x0(r29)
lbl_fn_8019AECC_00000A4C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8019AFE8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r6, lbl_8077E3A0@ha
    li r5, 0x71
    stw r0, 0x14(r1)
    addi r6, r6, lbl_8077E3A0@l
    li r0, 0x1
    lfs f0, lbl_80881FBC
    stw r31, 0xc(r1)
    mr r31, r3
    lfs f1, lbl_80881FCC
    li r7, 0x0
    stw r6, 0x0(r3)
    li r6, 0x0
    lfs f2, lbl_80881FDC
    li r8, 0x1
    stw r4, 0x4(r3)
    stw r5, 0x560(r4)
    li r4, 0x0
    li r5, 0x2e
    lwz r3, 0x4(r3)
    addi r3, r3, 0xb0
    stw r0, 0x34c(r3)
    stfs f0, 0x24c(r3)
    stfs f0, 0x238(r3)
    bl fn_80097C08
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8019B068(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    psq_st f31, 0x18(r1), 0, 0
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r5, 0x4(r3)
    lfs f31, 0x2e4(r5)
    addi r3, r5, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_8019B068_00000B2C
    li r3, 0x1
    b lbl_fn_8019B068_00000B54
lbl_fn_8019B068_00000B2C:
    lwz r3, 0x4(r31)
    li r5, 0x0
    lfs f1, lbl_80881FCC
    lwz r12, 0x0(r3)
    addi r4, r3, 0x534
    lfs f2, lbl_80881FBC
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    li r3, 0x0
lbl_fn_8019B068_00000B54:
    lwz r0, 0x24(r1)
    psq_l f31, 0x18(r1), 0, 0
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8019B0F0(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    lwz r8, 0x4(r4)
    li r9, 0x1
    stw r0, 0x74(r1)
    lis r7, lbl_8077DD38@ha
    li r0, 0x0
    stw r31, 0x6c(r1)
    mr r31, r3
    stw r30, 0x68(r1)
    lwzu r6, lbl_8077DD38@l(r7)
    stw r8, 0x8(r1)
    lwz r5, 0x4(r7)
    lwz r4, 0x8(r7)
    stw r9, 0xc(r1)
    stw r0, 0x0(r3)
    lbz r0, lbl_8087F0BB
    stw r6, 0x1c(r1)
    extsb. r0, r0
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r6, 0x10(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r6, 0x50(r1)
    stw r5, 0x54(r1)
    stw r4, 0x58(r1)
    stw r8, 0x5c(r1)
    stw r9, 0x60(r1)
    bne lbl_fn_8019B0F0_00000C0C
    lis r6, lbl_807C7B78@ha
    lis r4, fn_801905AC@ha
    lis r3, fn_801905DC@ha
    stb r9, lbl_8087F0BB
    addi r3, r3, fn_801905DC@l
    addi r5, r6, lbl_807C7B78@l
    addi r4, r4, fn_801905AC@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C7B78@l(r6)
lbl_fn_8019B0F0_00000C0C:
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
    bne lbl_fn_8019B0F0_00000CE0
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
    bne lbl_fn_8019B0F0_00000CA4
    lis r3, __files@ha
    lis r4, lbl_8077DC10@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8077DC10@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8019B0F0_00000CA4:
    cmpwi r30, 0x0
    beq lbl_fn_8019B0F0_00000CD4
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
lbl_fn_8019B0F0_00000CD4:
    stw r30, 0x4(r31)
    li r0, 0x1
    b lbl_fn_8019B0F0_00000CE4
lbl_fn_8019B0F0_00000CE0:
    li r0, 0x0
lbl_fn_8019B0F0_00000CE4:
    cmpwi r0, 0x0
    beq lbl_fn_8019B0F0_00000CFC
    lis r3, lbl_807C7B78@ha
    addi r3, r3, lbl_807C7B78@l
    stw r3, 0x0(r31)
    b lbl_fn_8019B0F0_00000D04
lbl_fn_8019B0F0_00000CFC:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_8019B0F0_00000D04:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_8019B29C(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    addi r11, r1, 0xf0
    stfd f31, 0x100(r1)
    psq_st f31, 0x108(r1), 0, 0
    stfd f30, 0xf0(r1)
    psq_st f30, 0xf8(r1), 0, 0
    bl _savegpr_27
    lis r7, lbl_8077E328@ha
    li r29, 0x0
    addi r7, r7, lbl_8077E328@l
    li r0, 0x5a
    stw r4, 0x4(r3)
    mr r30, r3
    mr r27, r4
    mr r31, r5
    stw r7, 0x0(r3)
    mr r28, r6
    stw r29, 0x8(r3)
    stw r5, 0xc(r3)
    stw r0, 0x1c(r3)
    addi r3, r3, 0x20
    bl fn_800CB360
    stw r28, 0x24(r30)
    lwz r3, 0x4(r30)
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x2
    beq lbl_fn_8019B29C_00000D94
    stw r29, 0x58c(r3)
lbl_fn_8019B29C_00000D94:
    lwz r3, 0x4(r30)
    li r0, 0x74
    stw r0, 0x560(r3)
    lwz r3, 0x4(r30)
    lwz r0, 0x5c0(r3)
    clrrwi r0, r0, 1
    stw r0, 0x5c0(r3)
    lwz r3, 0x4(r30)
    bl fn_8016DA4C
    lwz r3, 0x4(r30)
    li r4, 0x1
    bl fn_80164DCC
    lwz r3, 0x4(r30)
    lwz r0, 0x12a4(r3)
    srwi. r0, r0, 31
    beq lbl_fn_8019B29C_00000DDC
    mr r3, r27
    bl fn_801539E0
lbl_fn_8019B29C_00000DDC:
    lwz r3, 0x4(r30)
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 25
    beq lbl_fn_8019B29C_00000DF4
    li r4, 0x0
    bl fn_80155DAC
lbl_fn_8019B29C_00000DF4:
    lwz r6, 0x4(r30)
    addi r3, r30, 0x10
    lfs f4, 0x52c(r31)
    addi r5, r1, 0x5c
    lfs f5, 0x52c(r6)
    mr r4, r3
    lfs f3, 0x528(r6)
    fsubs f5, f5, f4
    lfs f0, 0x528(r31)
    lfs f4, 0x530(r6)
    fsubs f3, f3, f0
    stfs f5, 0x60(r1)
    lfs f0, 0x530(r31)
    stfs f3, 0x5c(r1)
    fsubs f2, f4, f0
    lfs f0, lbl_80881FCC
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x64(r1)
    stfs f2, 0x18(r30)
    stfs f0, 0x14(r30)
    bl fn_805F98D0
    lfs f4, 0x10(r30)
    addi r29, r1, 0x50
    lfs f5, lbl_8088209C
    lfs f3, 0x14(r30)
    lfs f0, 0x18(r30)
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    lwz r3, 0x4(r30)
    fmuls f2, f0, f5
    stfs f4, 0x10(r30)
    lfs f0, lbl_80881FD0
    stfs f3, 0x14(r30)
    stfs f2, 0x18(r30)
    psq_l f1, 0x10(r30), 0, 0
    psq_st f1, 0x6b8(r3), 0, 0
    stfs f2, 0x6c0(r3)
    lfs f2, 0x18(r30)
    psq_l f1, 0x10(r30), 0, 0
    fabs f3, f2
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x58(r1)
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8019B29C_00000ED0
    lfs f3, 0x50(r1)
    lfs f0, lbl_80881FCC
    fcmpo cr0, f3, f0
    ble lbl_fn_8019B29C_00000EC4
    lfs f0, lbl_80881FD4
    b lbl_fn_8019B29C_00000EC8
lbl_fn_8019B29C_00000EC4:
    lfs f0, lbl_80881FD8
lbl_fn_8019B29C_00000EC8:
    stfs f0, 0x48(r1)
    b lbl_fn_8019B29C_00000EE4
lbl_fn_8019B29C_00000ED0:
    frsp f2, f2
    lfs f1, 0x50(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_8019B29C_00000EE4:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x68
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80881FCC
    addi r4, r1, 0x38
    lfs f30, 0x70(r1)
    mr r5, r4
    lfs f31, 0x6c(r1)
    addi r3, r1, 0x98
    lfs f13, 0x68(r1)
    lfs f12, 0x80(r1)
    lfs f11, 0x7c(r1)
    lfs f10, 0x78(r1)
    lfs f9, 0x90(r1)
    lfs f8, 0x8c(r1)
    lfs f7, 0x88(r1)
    lfs f6, 0x94(r1)
    lfs f5, 0x84(r1)
    lfs f4, 0x74(r1)
    lfs f0, lbl_80881FBC
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x58(r1)
    stfs f3, 0xc8(r1)
    stfs f3, 0xcc(r1)
    stfs f3, 0xd0(r1)
    stfs f0, 0xd4(r1)
    stfs f13, 0x8(r1)
    stfs f31, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f13, 0x98(r1)
    stfs f31, 0x9c(r1)
    stfs f30, 0xa0(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xa8(r1)
    stfs f11, 0xac(r1)
    stfs f12, 0xb0(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0xb8(r1)
    stfs f8, 0xbc(r1)
    stfs f9, 0xc0(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0xa4(r1)
    stfs f5, 0xb4(r1)
    stfs f6, 0xc4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80881FD0
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8019B29C_00001000
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80881FCC
    fcmpo cr0, f3, f0
    ble lbl_fn_8019B29C_00000FF0
    lfs f0, lbl_80881FD4
    b lbl_fn_8019B29C_00000FF4
lbl_fn_8019B29C_00000FF0:
    lfs f0, lbl_80881FD8
lbl_fn_8019B29C_00000FF4:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_8019B29C_00001014
lbl_fn_8019B29C_00001000:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_8019B29C_00001014:
    lfs f3, lbl_80881FCC
    addi r3, r1, 0x44
    psq_l f1, 0x0(r3), 0, 0
    li r0, 0x1
    fmr f2, f3
    lwz r3, 0x4(r30)
    psq_st f1, 0x0(r29), 0, 0
    li r4, 0x0
    lfs f0, lbl_80881FBC
    li r5, 0x225
    stfs f2, 0x58(r1)
    frsp f2, f2
    li r6, 0x0
    li r7, 0x0
    psq_st f1, 0x534(r3), 0, 0
    fmr f1, f3
    li r8, 0x1
    stfs f2, 0x53c(r3)
    lfs f2, lbl_80881FDC
    lwz r3, 0x4(r30)
    stfs f3, 0x4c(r1)
    addi r29, r3, 0xb0
    stw r0, 0x3fc(r3)
    mr r3, r29
    stfs f0, 0x24c(r29)
    bl fn_80097C08
    lfs f0, lbl_80881FBC
    mr r3, r30
    stfs f0, 0x238(r29)
    psq_l f31, 0x108(r1), 0, 0
    lfd f31, 0x100(r1)
    psq_l f30, 0xf8(r1), 0, 0
    lfd f30, 0xf0(r1)
    addi r11, r1, 0xf0
    bl _restgpr_27
    lwz r0, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_8019B630(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_fn_8019B630_0000110C
    lis r5, lbl_8077E328@ha
    li r4, 0x3
    addi r5, r5, lbl_8077E328@l
    stw r5, 0x0(r3)
    li r5, 0x0
    addi r3, r3, 0x20
    bl fn_800CB5C8
    addi r3, r30, 0x20
    li r4, -0x1
    bl fn_800CB3A0
    cmpwi r31, 0x0
    ble lbl_fn_8019B630_0000110C
    mr r3, r30
    bl dtor_80084684
lbl_fn_8019B630_0000110C:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8019B6A8(void)
{
    nofralloc
    stwu r1, -0x100(r1)
    mflr r0
    stw r0, 0x104(r1)
    stfd f31, 0xf0(r1)
    psq_st f31, 0xf8(r1), 0, 0
    stfd f30, 0xe0(r1)
    psq_st f30, 0xe8(r1), 0, 0
    stw r31, 0xdc(r1)
    mr r31, r3
    stw r30, 0xd8(r1)
    stw r29, 0xd4(r1)
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8019B6A8_000013DC
    lfs f2, 0x18(r3)
    addi r30, r1, 0x54
    psq_l f1, 0x10(r3), 0, 0
    fabs f3, f2
    lfs f0, lbl_80881FD0
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0x5c(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_8019B6A8_000011AC
    lfs f3, 0x54(r1)
    lfs f0, lbl_80881FCC
    fcmpo cr0, f3, f0
    ble lbl_fn_8019B6A8_000011A0
    lfs f0, lbl_80881FD4
    b lbl_fn_8019B6A8_000011A4
lbl_fn_8019B6A8_000011A0:
    lfs f0, lbl_80881FD8
lbl_fn_8019B6A8_000011A4:
    stfs f0, 0x4c(r1)
    b lbl_fn_8019B6A8_000011C0
lbl_fn_8019B6A8_000011AC:
    frsp f2, f2
    lfs f1, 0x54(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x4c(r1)
lbl_fn_8019B6A8_000011C0:
    lfs f0, 0x4c(r1)
    addi r3, r1, 0x60
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80881FCC
    addi r4, r1, 0x3c
    lfs f30, 0x68(r1)
    mr r5, r4
    lfs f31, 0x64(r1)
    addi r3, r1, 0x90
    lfs f13, 0x60(r1)
    lfs f12, 0x78(r1)
    lfs f11, 0x74(r1)
    lfs f10, 0x70(r1)
    lfs f9, 0x88(r1)
    lfs f8, 0x84(r1)
    lfs f7, 0x80(r1)
    lfs f6, 0x8c(r1)
    lfs f5, 0x7c(r1)
    lfs f4, 0x6c(r1)
    lfs f0, lbl_80881FBC
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x5c(r1)
    stfs f3, 0xc0(r1)
    stfs f3, 0xc4(r1)
    stfs f3, 0xc8(r1)
    stfs f0, 0xcc(r1)
    stfs f13, 0xc(r1)
    stfs f31, 0x10(r1)
    stfs f30, 0x14(r1)
    stfs f13, 0x90(r1)
    stfs f31, 0x94(r1)
    stfs f30, 0x98(r1)
    stfs f10, 0x18(r1)
    stfs f11, 0x1c(r1)
    stfs f12, 0x20(r1)
    stfs f10, 0xa0(r1)
    stfs f11, 0xa4(r1)
    stfs f12, 0xa8(r1)
    stfs f7, 0x24(r1)
    stfs f8, 0x28(r1)
    stfs f9, 0x2c(r1)
    stfs f7, 0xb0(r1)
    stfs f8, 0xb4(r1)
    stfs f9, 0xb8(r1)
    stfs f4, 0x30(r1)
    stfs f5, 0x34(r1)
    stfs f6, 0x38(r1)
    stfs f4, 0x9c(r1)
    stfs f5, 0xac(r1)
    stfs f6, 0xbc(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x44(r1)
    bl fn_805F9750
    lfs f2, 0x44(r1)
    lfs f0, lbl_80881FD0
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8019B6A8_000012DC
    lfs f3, 0x40(r1)
    lfs f0, lbl_80881FCC
    fcmpo cr0, f3, f0
    ble lbl_fn_8019B6A8_000012CC
    lfs f0, lbl_80881FD4
    b lbl_fn_8019B6A8_000012D0
lbl_fn_8019B6A8_000012CC:
    lfs f0, lbl_80881FD8
lbl_fn_8019B6A8_000012D0:
    fneg f0, f0
    stfs f0, 0x48(r1)
    b lbl_fn_8019B6A8_000012F0
lbl_fn_8019B6A8_000012DC:
    lfs f1, 0x40(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x48(r1)
lbl_fn_8019B6A8_000012F0:
    addi r3, r1, 0x48
    lfs f2, lbl_80881FCC
    psq_l f1, 0x0(r3), 0, 0
    mr r4, r30
    psq_st f1, 0x0(r30), 0, 0
    fmr f1, f2
    li r5, 0x0
    stfs f2, 0x5c(r1)
    lwz r3, 0x4(r31)
    stfs f2, 0x50(r1)
    lfs f2, 0x568(r3)
    bl fn_8013CB68
    lwz r3, 0x4(r31)
    li r4, 0x0
    addi r29, r3, 0xb0
    lfs f30, 0x2e4(r3)
    mr r3, r29
    bl fn_80097D7C
    fcmpo cr0, f30, f1
    cror eq, gt, eq
    bne lbl_fn_8019B6A8_00001458
    li r30, 0x1
    stw r30, 0x34c(r29)
    lfs f0, lbl_80881FBC
    mr r3, r29
    stfs f0, 0x24c(r29)
    li r4, 0x0
    lfs f1, lbl_80881FCC
    li r5, 0x32
    lfs f2, lbl_80881FDC
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f1, lbl_80881FBC
    li r0, 0x75
    stfs f1, 0x238(r29)
    stw r30, 0x8(r31)
    lwz r3, 0x4(r31)
    stw r0, 0x560(r3)
    lwz r0, 0x24(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8019B6A8_00001458
    lwz r4, 0x4(r31)
    lis r6, lbl_80739F34@ha
    addi r6, r6, lbl_80739F34@l
    addi r3, r1, 0x8
    addi r5, r4, 0x528
    li r7, -0x1
    addi r4, r6, 0x28
    li r6, 0x0
    bl fn_800C344C
    addi r3, r31, 0x20
    addi r4, r1, 0x8
    bl fn_800CB440
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_8019B6A8_00001458
lbl_fn_8019B6A8_000013DC:
    cmpwi r0, 0x1
    bne lbl_fn_8019B6A8_00001458
    lwz r3, 0x4(r3)
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8019B6A8_00001424
    lwz r3, lbl_8087F490
    li r0, 0x1
    li r4, 0x22
    stw r0, 0x728(r3)
    lwz r3, lbl_8087F0A8
    addi r3, r3, 0x48c
    bl fn_8012476C
    cmpwi r3, 0x0
    beq lbl_fn_8019B6A8_00001424
    lwz r3, 0x1c(r31)
    subi r0, r3, 0x5
    stw r0, 0x1c(r31)
lbl_fn_8019B6A8_00001424:
    lwz r0, 0x1c(r31)
    cmpwi r0, 0x0
    bgt lbl_fn_8019B6A8_00001448
    lwz r4, 0x4(r31)
    li r3, 0x1
    lwz r0, 0x5c0(r4)
    ori r0, r0, 0x1
    stw r0, 0x5c0(r4)
    b lbl_fn_8019B6A8_0000145C
lbl_fn_8019B6A8_00001448:
    lwz r4, 0x4(r31)
    addi r3, r31, 0x20
    addi r4, r4, 0x528
    bl fn_800CB6E4
lbl_fn_8019B6A8_00001458:
    li r3, 0x0
lbl_fn_8019B6A8_0000145C:
    lwz r0, 0x104(r1)
    psq_l f31, 0xf8(r1), 0, 0
    lfd f31, 0xf0(r1)
    psq_l f30, 0xe8(r1), 0, 0
    lfd f30, 0xe0(r1)
    lwz r31, 0xdc(r1)
    lwz r30, 0xd8(r1)
    lwz r29, 0xd4(r1)
    mtlr r0
    addi r1, r1, 0x100
    blr
}

asm void fn_8019BA08(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    lwz r0, 0x5c0(r3)
    ori r0, r0, 0x1
    stw r0, 0x5c0(r3)
    blr
}

asm void fn_8019BA1C(void)
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
    li r3, 0xc
    mr r6, r5
    stw r30, 0x68(r1)
    mr r30, r4
    li r4, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8019BA1C_000014E8
    lwz r4, 0x4(r30)
    bl fn_8019BE9C
lbl_fn_8019BA1C_000014E8:
    lis r4, lbl_8077DD44@ha
    lwzu r6, lbl_8077DD44@l(r4)
    lwz r7, 0x4(r30)
    li r0, 0x0
    lwz r5, 0x4(r4)
    lwz r4, 0x8(r4)
    stw r7, 0x8(r1)
    stw r0, 0x0(r31)
    lbz r0, lbl_8087F0C2
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
    bne lbl_fn_8019BA1C_0000156C
    lis r6, lbl_807C7BA8@ha
    lis r4, fn_8019BBFC@ha
    lis r3, fn_8019BC2C@ha
    li r0, 0x1
    addi r3, r3, fn_8019BC2C@l
    addi r5, r6, lbl_807C7BA8@l
    addi r4, r4, fn_8019BBFC@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C7BA8@l(r6)
    stb r0, lbl_8087F0C2
lbl_fn_8019BA1C_0000156C:
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
    bne lbl_fn_8019BA1C_00001640
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
    bne lbl_fn_8019BA1C_00001604
    lis r3, __files@ha
    lis r4, lbl_8077EEF0@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8077EEF0@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8019BA1C_00001604:
    cmpwi r30, 0x0
    beq lbl_fn_8019BA1C_00001634
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
lbl_fn_8019BA1C_00001634:
    stw r30, 0x4(r31)
    li r0, 0x1
    b lbl_fn_8019BA1C_00001644
lbl_fn_8019BA1C_00001640:
    li r0, 0x0
lbl_fn_8019BA1C_00001644:
    cmpwi r0, 0x0
    beq lbl_fn_8019BA1C_0000165C
    lis r3, lbl_807C7BA8@ha
    addi r3, r3, lbl_807C7BA8@l
    stw r3, 0x0(r31)
    b lbl_fn_8019BA1C_00001664
lbl_fn_8019BA1C_0000165C:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_8019BA1C_00001664:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_8019BBFC(void)
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

asm void fn_8019BC2C(void)
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
    bne lbl_fn_8019BC2C_000016E4
    lis r3, lbl_8077DDD0@ha
    addi r3, r3, lbl_8077DDD0@l
    stw r3, 0x0(r4)
    b lbl_fn_8019BC2C_000017AC
lbl_fn_8019BC2C_000016E4:
    cmpwi r5, 0x0
    bne lbl_fn_8019BC2C_0000175C
    lwz r31, 0x0(r3)
    li r3, 0x14
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_8019BC2C_00001724
    lis r3, __files@ha
    lis r4, lbl_8077EEF0@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8077EEF0@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8019BC2C_00001724:
    cmpwi r30, 0x0
    beq lbl_fn_8019BC2C_00001754
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
lbl_fn_8019BC2C_00001754:
    stw r30, 0x0(r29)
    b lbl_fn_8019BC2C_000017AC
lbl_fn_8019BC2C_0000175C:
    cmpwi r5, 0x1
    bne lbl_fn_8019BC2C_00001778
    lwz r3, 0x0(r4)
    bl dtor_80084684
    li r0, 0x0
    stw r0, 0x0(r29)
    b lbl_fn_8019BC2C_000017AC
lbl_fn_8019BC2C_00001778:
    lwz r5, 0x0(r4)
    lis r3, lbl_8077DDD0@ha
    lwz r4, lbl_8077DDD0@l(r3)
    lwz r3, 0x0(r5)
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_8019BC2C_000017A4
    lwz r0, 0x0(r30)
    stw r0, 0x0(r29)
    b lbl_fn_8019BC2C_000017AC
lbl_fn_8019BC2C_000017A4:
    li r0, 0x0
    stw r0, 0x0(r29)
lbl_fn_8019BC2C_000017AC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8019BD48(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r6, lbl_8077E2B0@ha
    lfs f1, lbl_80881FBC
    stw r0, 0x24(r1)
    addi r6, r6, lbl_8077E2B0@l
    li r0, 0x1
    lfs f2, lbl_80881FDC
    stw r31, 0x1c(r1)
    li r7, 0x0
    li r8, 0x1
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    stw r6, 0x0(r3)
    li r6, 0x0
    stw r5, 0x8(r3)
    li r5, 0x76
    stw r4, 0x4(r3)
    stw r5, 0x560(r4)
    li r4, 0x0
    li r5, 0x226
    lwz r10, 0x4(r3)
    lwz r9, 0x5c0(r10)
    clrrwi r9, r9, 1
    stw r9, 0x5c0(r10)
    lwz r3, 0x4(r3)
    stw r0, 0x3fc(r3)
    addi r31, r3, 0xb0
    mr r3, r31
    stfs f1, 0x24c(r31)
    bl fn_80097C08
    lfs f1, lbl_80881FBC
    stfs f1, 0x238(r31)
    lwz r3, lbl_8087F498
    cmpwi r3, 0x0
    beq lbl_fn_8019BD48_00001874
    lfs f2, lbl_80881FF4
    mr r4, r30
    li r5, 0xa
    li r6, 0x1e
    bl fn_803EA77C
lbl_fn_8019BD48_00001874:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8019BE14(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    psq_st f31, 0x18(r1), 0, 0
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r5, 0x4(r3)
    lfs f31, 0x2e4(r5)
    addi r3, r5, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_8019BE14_000018E8
    lwz r4, 0x4(r31)
    li r3, 0x1
    lwz r0, 0x5c0(r4)
    ori r0, r0, 0x1
    stw r0, 0x5c0(r4)
    b lbl_fn_8019BE14_000018EC
lbl_fn_8019BE14_000018E8:
    li r3, 0x0
lbl_fn_8019BE14_000018EC:
    lwz r0, 0x24(r1)
    psq_l f31, 0x18(r1), 0, 0
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8019BE88(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    lwz r0, 0x5c0(r3)
    ori r0, r0, 0x1
    stw r0, 0x5c0(r3)
    blr
}

asm void fn_8019BE9C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r5, lbl_8077E238@ha
    stw r0, 0x24(r1)
    addi r5, r5, lbl_8077E238@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    addi r30, r4, 0xb0
    stw r29, 0x14(r1)
    mr r29, r3
    stw r4, 0x4(r3)
    stw r5, 0x0(r3)
    lwz r0, 0x7e0(r4)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_8019BE9C_000019A0
    lfs f0, lbl_80881FBC
    li r31, 0x1
    stw r31, 0x34c(r30)
    mr r3, r30
    lfs f1, lbl_80881FCC
    li r4, 0x0
    stfs f0, 0x24c(r30)
    li r5, 0x32
    lfs f2, lbl_80881FDC
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80881FBC
    stfs f0, 0x238(r30)
    stw r31, 0x8(r29)
    b lbl_fn_8019BE9C_000019EC
lbl_fn_8019BE9C_000019A0:
    lfs f0, lbl_80881FBC
    li r0, 0x77
    stw r0, 0x560(r4)
    li r0, 0x1
    lfs f1, lbl_80881FCC
    mr r3, r30
    stw r0, 0x34c(r30)
    li r4, 0x0
    lfs f2, lbl_80881FDC
    li r5, 0x3c
    stfs f0, 0x24c(r30)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80881FBC
    li r0, 0x0
    stfs f0, 0x238(r30)
    stw r0, 0x8(r29)
lbl_fn_8019BE9C_000019EC:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
