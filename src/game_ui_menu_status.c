#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_8004ED34(void);
extern void fn_80092814(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800C344C(void);
extern void fn_800CB360(void);
extern void fn_800CB3A0(void);
extern void fn_800CB440(void);
extern void fn_80105AB0(void);
extern void fn_801446F0(void);
extern void fn_801539E0(void);
extern void fn_80155DAC(void);
extern void fn_8016DA4C(void);
extern void fn_80178018(void);
extern void fn_80178078(void);
extern void fn_801C3414(void);
extern void fn_80219558(void);
extern void fn_803E2110(void);
extern void fn_803EA77C(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_80680CF8(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);

/* External data declarations */
extern u8 lbl_8073B308[];
extern u8 lbl_8073B36C[];
extern u8 lbl_8073B378[];
extern u8 lbl_80781438[];
extern u8 lbl_807814B0[];
extern u8 lbl_80781528[];
extern u8 lbl_80781618[];
extern u8 lbl_80781690[];
extern u8 lbl_80781838[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087F048;
extern u32 lbl_8087F490;
extern u32 lbl_8087F498;
extern u32 lbl_80882550;
extern u32 lbl_80882554;
extern u32 lbl_80882558;
extern u32 lbl_8088255C;
extern u32 lbl_80882560;
extern u32 lbl_80882564;
extern u32 lbl_80882568;
extern u32 lbl_8088256C;
extern u32 lbl_80882570;
extern u32 lbl_80882574;
extern u32 lbl_80882578;
extern u32 lbl_8088257C;
extern u32 lbl_80882584;
extern u32 lbl_80882588;
extern u32 lbl_8088258C;
extern u32 lbl_80882590;
extern u32 lbl_808825A4;
extern u32 lbl_808825AC;
extern u32 lbl_808825B0;
extern u32 lbl_808825B4;
extern u32 lbl_808825B8;
extern u32 lbl_808825BC;
extern u32 lbl_808825C0;
extern u32 lbl_808825C8;
extern u32 lbl_808825CC;
extern u32 lbl_808825D0;
extern u32 lbl_808825D4;
extern u32 lbl_808825D8;
extern u32 lbl_808825E0;
extern u32 lbl_808825E4;
extern u32 lbl_808825E8;
extern u32 lbl_808825EC;
extern u32 lbl_808825F0;
extern u32 lbl_808825F4;
extern u32 lbl_808825F8;
extern u32 lbl_808825FC;
extern u32 lbl_80882600;
extern u32 lbl_80882604;
extern u32 lbl_80882608;

/* Function declarations */
void fn_801BAC74(void);
void fn_801BB138(void);
void fn_801BB1C8(void);
void fn_801BB514(void);
void fn_801BB8BC(void);
void fn_801BBBDC(void);
void fn_801BBC48(void);
void fn_801BBF84(void);
void fn_801BC188(void);
void fn_801BC1C8(void);
void fn_801BC208(void);
void fn_801BC248(void);
void fn_801BC288(void);
void fn_801BC3B4(void);
void fn_801BC410(void);
void fn_801BC4F4(void);
void fn_801BC538(void);
void fn_801BC578(void);
void fn_801BC5B8(void);

asm void fn_801BAC74(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    lwz r5, 0x4(r4)
    stw r0, 0xa4(r1)
    stfd f31, 0x90(r1)
    psq_st f31, 0x98(r1), 0, 0
    stw r31, 0x8c(r1)
    addi r31, r5, 0xb0
    stw r30, 0x88(r1)
    mr r30, r4
    stw r29, 0x84(r1)
    mr r29, r3
    lwz r0, 0x2dc(r5)
    cmpwi r0, 0x59
    bne lbl_fn_801BAC74_00000198
    mr r3, r31
    li r4, 0x0
    bl fn_80097D7C
    lfs f0, lbl_80882574
    lfs f3, 0x234(r31)
    fsubs f10, f1, f0
    lwz r3, 0x4(r30)
    fsubs f11, f3, f0
    lfs f7, 0x38(r30)
    lfs f8, 0x530(r3)
    lfs f6, 0x52c(r3)
    fdivs f0, f11, f10
    lfs f5, 0x34(r30)
    lfs f9, lbl_80882550
    lfs f4, 0x528(r3)
    lfs f3, 0x30(r30)
    fsubs f7, f8, f7
    fsubs f5, f6, f5
    fsubs f3, f4, f3
    stfs f7, 0x4c(r1)
    fcmpo cr0, f9, f0
    stfs f3, 0x44(r1)
    stfs f5, 0x48(r1)
    ble lbl_fn_801BAC74_000000A0
    b lbl_fn_801BAC74_000000A4
lbl_fn_801BAC74_000000A0:
    fmr f9, f0
lbl_fn_801BAC74_000000A4:
    lfs f4, lbl_80882554
    fcmpo cr0, f4, f9
    bge lbl_fn_801BAC74_000000B4
    b lbl_fn_801BAC74_000000CC
lbl_fn_801BAC74_000000B4:
    fdivs f0, f11, f10
    lfs f4, lbl_80882550
    fcmpo cr0, f4, f0
    ble lbl_fn_801BAC74_000000C8
    b lbl_fn_801BAC74_000000CC
lbl_fn_801BAC74_000000C8:
    fmr f4, f0
lbl_fn_801BAC74_000000CC:
    fdivs f0, f11, f10
    lfs f3, 0x4c(r1)
    lfs f5, lbl_80882550
    fcmpo cr0, f5, f0
    fmuls f7, f3, f4
    ble lbl_fn_801BAC74_000000E8
    b lbl_fn_801BAC74_000000EC
lbl_fn_801BAC74_000000E8:
    fmr f5, f0
lbl_fn_801BAC74_000000EC:
    lfs f4, lbl_80882554
    fcmpo cr0, f4, f5
    bge lbl_fn_801BAC74_000000FC
    b lbl_fn_801BAC74_00000114
lbl_fn_801BAC74_000000FC:
    fdivs f0, f11, f10
    lfs f4, lbl_80882550
    fcmpo cr0, f4, f0
    ble lbl_fn_801BAC74_00000110
    b lbl_fn_801BAC74_00000114
lbl_fn_801BAC74_00000110:
    fmr f4, f0
lbl_fn_801BAC74_00000114:
    fdivs f0, f11, f10
    lfs f3, 0x48(r1)
    lfs f5, lbl_80882550
    fcmpo cr0, f5, f0
    fmuls f6, f3, f4
    ble lbl_fn_801BAC74_00000130
    b lbl_fn_801BAC74_00000134
lbl_fn_801BAC74_00000130:
    fmr f5, f0
lbl_fn_801BAC74_00000134:
    lfs f3, lbl_80882554
    fcmpo cr0, f3, f5
    bge lbl_fn_801BAC74_00000144
    b lbl_fn_801BAC74_0000015C
lbl_fn_801BAC74_00000144:
    fdivs f0, f11, f10
    lfs f3, lbl_80882550
    fcmpo cr0, f3, f0
    ble lbl_fn_801BAC74_00000158
    b lbl_fn_801BAC74_0000015C
lbl_fn_801BAC74_00000158:
    fmr f3, f0
lbl_fn_801BAC74_0000015C:
    lfs f0, 0x44(r1)
    lfs f4, 0x38(r30)
    fmuls f5, f0, f3
    lfs f3, 0x34(r30)
    lfs f0, 0x30(r30)
    fadds f4, f7, f4
    fadds f3, f6, f3
    stfs f5, 0x38(r1)
    fadds f0, f5, f0
    stfs f6, 0x3c(r1)
    stfs f7, 0x40(r1)
    stfs f0, 0x0(r29)
    stfs f3, 0x4(r29)
    stfs f4, 0x8(r29)
    b lbl_fn_801BAC74_000004A0
lbl_fn_801BAC74_00000198:
    cmpwi r0, 0x56
    bne lbl_fn_801BAC74_000002AC
    addi r3, r1, 0x74
    psq_l f1, 0x528(r5), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    mr r3, r31
    lfs f2, 0x530(r5)
    li r4, 0x0
    lfs f3, 0x78(r1)
    lfs f0, lbl_80882578
    stfs f2, 0x7c(r1)
    fsubs f0, f3, f0
    lfs f31, 0x234(r31)
    stfs f0, 0x78(r1)
    bl fn_80097D7C
    fdivs f0, f31, f1
    lfs f3, lbl_80882550
    fcmpo cr0, f3, f0
    ble lbl_fn_801BAC74_000001E8
    b lbl_fn_801BAC74_000001FC
lbl_fn_801BAC74_000001E8:
    lfs f31, 0x234(r31)
    mr r3, r31
    li r4, 0x0
    bl fn_80097D7C
    fdivs f3, f31, f1
lbl_fn_801BAC74_000001FC:
    lfs f10, lbl_80882554
    fcmpo cr0, f10, f3
    bge lbl_fn_801BAC74_0000020C
    b lbl_fn_801BAC74_00000244
lbl_fn_801BAC74_0000020C:
    lfs f31, 0x234(r31)
    mr r3, r31
    li r4, 0x0
    bl fn_80097D7C
    fdivs f0, f31, f1
    lfs f10, lbl_80882550
    fcmpo cr0, f10, f0
    ble lbl_fn_801BAC74_00000230
    b lbl_fn_801BAC74_00000244
lbl_fn_801BAC74_00000230:
    lfs f31, 0x234(r31)
    mr r3, r31
    li r4, 0x0
    bl fn_80097D7C
    fdivs f10, f31, f1
lbl_fn_801BAC74_00000244:
    lwz r3, 0x4(r30)
    lfs f3, 0x7c(r1)
    lfs f5, 0x530(r3)
    lfs f0, 0x78(r1)
    fsubs f9, f3, f5
    lfs f4, 0x52c(r3)
    lfs f3, 0x74(r1)
    fsubs f6, f0, f4
    lfs f0, 0x528(r3)
    fmuls f8, f9, f10
    fsubs f3, f3, f0
    stfs f6, 0x30(r1)
    fmuls f7, f6, f10
    fadds f5, f8, f5
    stfs f3, 0x2c(r1)
    fmuls f6, f3, f10
    fadds f3, f7, f4
    stfs f9, 0x34(r1)
    fadds f0, f6, f0
    stfs f6, 0x20(r1)
    stfs f7, 0x24(r1)
    stfs f8, 0x28(r1)
    stfs f0, 0x0(r29)
    stfs f3, 0x4(r29)
    stfs f5, 0x8(r29)
    b lbl_fn_801BAC74_000004A0
lbl_fn_801BAC74_000002AC:
    cmpwi r0, 0x55
    bne lbl_fn_801BAC74_000003C0
    addi r3, r1, 0x68
    psq_l f1, 0x528(r5), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    mr r3, r31
    lfs f2, 0x530(r5)
    li r4, 0x0
    lfs f3, 0x6c(r1)
    lfs f0, lbl_80882578
    stfs f2, 0x70(r1)
    fsubs f0, f3, f0
    lfs f31, 0x234(r31)
    stfs f0, 0x6c(r1)
    bl fn_80097D7C
    fdivs f0, f31, f1
    lfs f3, lbl_80882550
    fcmpo cr0, f3, f0
    ble lbl_fn_801BAC74_000002FC
    b lbl_fn_801BAC74_00000310
lbl_fn_801BAC74_000002FC:
    lfs f31, 0x234(r31)
    mr r3, r31
    li r4, 0x0
    bl fn_80097D7C
    fdivs f3, f31, f1
lbl_fn_801BAC74_00000310:
    lfs f10, lbl_80882554
    fcmpo cr0, f10, f3
    bge lbl_fn_801BAC74_00000320
    b lbl_fn_801BAC74_00000358
lbl_fn_801BAC74_00000320:
    lfs f31, 0x234(r31)
    mr r3, r31
    li r4, 0x0
    bl fn_80097D7C
    fdivs f0, f31, f1
    lfs f10, lbl_80882550
    fcmpo cr0, f10, f0
    ble lbl_fn_801BAC74_00000344
    b lbl_fn_801BAC74_00000358
lbl_fn_801BAC74_00000344:
    lfs f31, 0x234(r31)
    mr r3, r31
    li r4, 0x0
    bl fn_80097D7C
    fdivs f10, f31, f1
lbl_fn_801BAC74_00000358:
    lwz r3, 0x4(r30)
    lfs f3, 0x70(r1)
    lfs f5, 0x530(r3)
    lfs f0, 0x6c(r1)
    fsubs f9, f3, f5
    lfs f4, 0x52c(r3)
    lfs f3, 0x68(r1)
    fsubs f6, f0, f4
    lfs f0, 0x528(r3)
    fmuls f8, f9, f10
    fsubs f3, f3, f0
    stfs f6, 0x18(r1)
    fmuls f7, f6, f10
    fadds f5, f8, f5
    stfs f3, 0x14(r1)
    fmuls f6, f3, f10
    fadds f3, f7, f4
    stfs f9, 0x1c(r1)
    fadds f0, f6, f0
    stfs f6, 0x8(r1)
    stfs f7, 0xc(r1)
    stfs f8, 0x10(r1)
    stfs f0, 0x0(r29)
    stfs f3, 0x4(r29)
    stfs f5, 0x8(r29)
    b lbl_fn_801BAC74_000004A0
lbl_fn_801BAC74_000003C0:
    cmpwi r0, 0x58
    bne lbl_fn_801BAC74_000003FC
    addi r4, r1, 0x5c
    psq_l f1, 0x528(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lfs f2, 0x530(r5)
    lfs f3, 0x60(r1)
    lfs f0, lbl_80882578
    stfs f2, 0x64(r1)
    fsubs f0, f3, f0
    stfs f2, 0x8(r3)
    stfs f0, 0x60(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    b lbl_fn_801BAC74_000004A0
lbl_fn_801BAC74_000003FC:
    cmpwi r0, 0x5a
    bne lbl_fn_801BAC74_00000490
    lfs f2, 0x530(r5)
    addi r4, r1, 0x50
    psq_l f1, 0x528(r5), 0, 0
    mr r3, r31
    psq_st f1, 0x0(r4), 0, 0
    li r4, 0x0
    lfs f31, 0x234(r31)
    stfs f2, 0x58(r1)
    bl fn_80097D7C
    lfs f3, lbl_80882554
    lfs f4, lbl_80882550
    fadds f0, f3, f31
    fdivs f0, f0, f1
    fsubs f0, f3, f0
    fcmpo cr0, f4, f0
    ble lbl_fn_801BAC74_00000448
    b lbl_fn_801BAC74_00000468
lbl_fn_801BAC74_00000448:
    lfs f31, 0x234(r31)
    mr r3, r31
    li r4, 0x0
    bl fn_80097D7C
    lfs f3, lbl_80882554
    fadds f0, f3, f31
    fdivs f0, f0, f1
    fsubs f4, f3, f0
lbl_fn_801BAC74_00000468:
    lfs f3, lbl_80882578
    addi r3, r1, 0x50
    lfs f0, 0x54(r1)
    lfs f2, 0x58(r1)
    fnmsubs f0, f3, f4, f0
    stfs f2, 0x8(r29)
    stfs f0, 0x54(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    b lbl_fn_801BAC74_000004A0
lbl_fn_801BAC74_00000490:
    psq_l f1, 0x528(r5), 0, 0
    lfs f2, 0x530(r5)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
lbl_fn_801BAC74_000004A0:
    lwz r0, 0xa4(r1)
    psq_l f31, 0x98(r1), 0, 0
    lfd f31, 0x90(r1)
    lwz r31, 0x8c(r1)
    lwz r30, 0x88(r1)
    lwz r29, 0x84(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_801BB138(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x2c(r3)
    cmpwi r0, 0x1
    bne lbl_fn_801BB138_0000053C
    lwz r3, 0x4(r3)
    lis r4, lbl_8073B36C@ha
    addi r4, r4, lbl_8073B36C@l
    li r5, 0x0
    addi r3, r3, 0xb0
    lwz r31, 0x220(r3)
    addi r4, r4, 0x6
    bl fn_80092814
    lwz r4, 0x4(r30)
    mulli r3, r3, 0x2c
    lwz r0, 0x48(r4)
    add r3, r31, r3
    cmpwi r0, 0x0
    bne lbl_fn_801BB138_00000528
    lfs f1, 0x4c(r30)
    b lbl_fn_801BB138_00000530
lbl_fn_801BB138_00000528:
    lfs f0, 0x4c(r30)
    fneg f1, f0
lbl_fn_801BB138_00000530:
    lfs f0, 0x4(r3)
    fadds f0, f0, f1
    stfs f0, 0x4(r3)
lbl_fn_801BB138_0000053C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801BB1C8(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    lis r7, lbl_80781528@ha
    psq_l f1, 0x0(r5), 0, 0
    stw r0, 0x114(r1)
    addi r7, r7, lbl_80781528@l
    lfs f2, 0x8(r5)
    li r0, 0x28
    stfd f31, 0x100(r1)
    psq_st f31, 0x108(r1), 0, 0
    stfd f30, 0xf0(r1)
    psq_st f30, 0xf8(r1), 0, 0
    stw r31, 0xec(r1)
    stw r30, 0xe8(r1)
    mr r30, r6
    stw r29, 0xe4(r1)
    mr r29, r5
    stw r28, 0xe0(r1)
    mr r28, r3
    psq_st f1, 0x8(r3), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x10(r3)
    lfs f2, 0x8(r6)
    stw r4, 0x4(r3)
    stw r7, 0x0(r3)
    psq_st f1, 0x14(r3), 0, 0
    stfs f2, 0x1c(r3)
    stw r0, 0x560(r4)
    lwz r3, 0x4(r3)
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 25
    beq lbl_fn_801BB1C8_000005DC
    li r4, 0x0
    bl fn_80155DAC
lbl_fn_801BB1C8_000005DC:
    lwz r3, 0x4(r28)
    li r0, 0x1
    lfs f0, lbl_80882554
    li r4, 0x0
    stw r0, 0x3fc(r3)
    addi r31, r3, 0xb0
    lfs f1, lbl_80882550
    mr r3, r31
    lfs f2, lbl_80882558
    li r5, 0x4b
    stfs f0, 0x24c(r31)
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80882554
    addi r3, r1, 0x5c
    stfs f0, 0x238(r31)
    lfs f3, 0x8(r30)
    lfs f0, 0x8(r29)
    lwz r4, 0x4(r28)
    fsubs f6, f3, f0
    psq_l f1, 0x0(r29), 0, 0
    psq_st f1, 0x528(r4), 0, 0
    lfs f2, 0x8(r29)
    stfs f2, 0x530(r4)
    lfs f5, 0x4(r30)
    lfs f4, 0x4(r29)
    lfs f3, 0x0(r30)
    lfs f0, 0x0(r29)
    fsubs f4, f5, f4
    stfs f6, 0x64(r1)
    fsubs f0, f3, f0
    stfs f4, 0x60(r1)
    stfs f0, 0x5c(r1)
    bl fn_805F9940
    fmr f31, f1
    addi r3, r1, 0x5c
    mr r4, r3
    bl fn_805F98D0
    lfs f0, lbl_80882588
    addi r3, r1, 0x5c
    lfs f2, 0x64(r1)
    addi r31, r1, 0x50
    fdivs f4, f31, f0
    psq_l f1, 0x0(r3), 0, 0
    lfs f3, lbl_808825A4
    lfs f0, lbl_8088255C
    psq_st f1, 0x20(r28), 0, 0
    stfs f2, 0x28(r28)
    fadds f3, f3, f4
    psq_st f1, 0x0(r31), 0, 0
    frsp f5, f2
    stfs f2, 0x58(r1)
    fctiwz f3, f3
    fabs f4, f5
    stfd f3, 0xd8(r1)
    frsp f4, f4
    lwz r0, 0xdc(r1)
    stw r0, 0x2c(r28)
    fcmpo cr0, f4, f0
    bge lbl_fn_801BB1C8_000006F8
    lfs f3, 0x50(r1)
    lfs f0, lbl_80882550
    fcmpo cr0, f3, f0
    ble lbl_fn_801BB1C8_000006EC
    lfs f0, lbl_80882560
    b lbl_fn_801BB1C8_000006F0
lbl_fn_801BB1C8_000006EC:
    lfs f0, lbl_80882564
lbl_fn_801BB1C8_000006F0:
    stfs f0, 0x48(r1)
    b lbl_fn_801BB1C8_0000070C
lbl_fn_801BB1C8_000006F8:
    fmr f2, f5
    lfs f1, 0x50(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_801BB1C8_0000070C:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x68
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80882550
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
    lfs f0, lbl_80882554
    psq_l f1, 0x0(r31), 0, 0
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
    lfs f0, lbl_8088255C
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_801BB1C8_00000828
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80882550
    fcmpo cr0, f3, f0
    ble lbl_fn_801BB1C8_00000818
    lfs f0, lbl_80882560
    b lbl_fn_801BB1C8_0000081C
lbl_fn_801BB1C8_00000818:
    lfs f0, lbl_80882564
lbl_fn_801BB1C8_0000081C:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_801BB1C8_0000083C
lbl_fn_801BB1C8_00000828:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_801BB1C8_0000083C:
    addi r3, r1, 0x44
    lfs f2, lbl_80882550
    psq_l f1, 0x0(r3), 0, 0
    lwz r3, 0x4(r28)
    stfs f2, 0x4c(r1)
    stfs f2, 0x58(r1)
    frsp f2, f2
    psq_st f1, 0x534(r3), 0, 0
    stfs f2, 0x53c(r3)
    psq_st f1, 0x0(r31), 0, 0
    lwz r3, 0x4(r28)
    bl fn_801446F0
    psq_l f31, 0x108(r1), 0, 0
    mr r3, r28
    lfd f31, 0x100(r1)
    psq_l f30, 0xf8(r1), 0, 0
    lfd f30, 0xf0(r1)
    lwz r31, 0xec(r1)
    lwz r30, 0xe8(r1)
    lwz r29, 0xe4(r1)
    lwz r28, 0xe0(r1)
    lwz r0, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_801BB514(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    stfd f31, 0x80(r1)
    psq_st f31, 0x88(r1), 0, 0
    stw r31, 0x7c(r1)
    li r31, 0x0
    stw r30, 0x78(r1)
    mr r30, r3
    stw r29, 0x74(r1)
    lwz r4, 0x4(r3)
    lwz r0, 0x48(r4)
    addi r29, r4, 0xb0
    cmpwi r0, 0x0
    bne lbl_fn_801BB514_00000B74
    lwz r0, 0x12a4(r4)
    clrlwi. r0, r0, 31
    bne lbl_fn_801BB514_00000B74
    addi r3, r1, 0x5c
    bl fn_80178018
    lwz r0, 0x22c(r29)
    cmpwi r0, 0x4d
    beq lbl_fn_801BB514_00000920
    lfs f31, 0x234(r29)
    mr r3, r29
    li r4, 0x0
    bl fn_80097D7C
    lfs f0, lbl_80882554
    fsubs f0, f1, f0
    fcmpo cr0, f31, f0
    cror eq, gt, eq
    bne lbl_fn_801BB514_00000A2C
lbl_fn_801BB514_00000920:
    lwz r4, 0x4(r30)
    lis r3, lbl_8073B308@ha
    lfs f3, 0x60(r1)
    lfs f0, 0x538(r4)
    lfs f31, lbl_80882588
    fsubs f1, f3, f0
    lfd f2, lbl_8073B308@l(r3)
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_80882568
    fcmpo cr0, f3, f0
    ble lbl_fn_801BB514_00000958
    lfs f0, lbl_8088256C
    fsubs f3, f3, f0
lbl_fn_801BB514_00000958:
    lfs f0, lbl_80882570
    fcmpo cr0, f3, f0
    bge lbl_fn_801BB514_0000096C
    lfs f0, lbl_8088256C
    fadds f3, f3, f0
lbl_fn_801BB514_0000096C:
    fabs f3, f3
    lfs f0, lbl_80882560
    frsp f3, f3
    fcmpo cr0, f3, f0
    ble lbl_fn_801BB514_00000984
    fneg f31, f31
lbl_fn_801BB514_00000984:
    lwz r3, 0x4(r30)
    bl fn_80178078
    lfs f0, lbl_80882584
    fcmpo cr0, f1, f0
    bge lbl_fn_801BB514_0000099C
    lfs f31, lbl_80882550
lbl_fn_801BB514_0000099C:
    fabs f3, f31
    lfs f0, lbl_8088255C
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_801BB514_000009D8
    lfs f1, lbl_80882550
    mr r3, r29
    lfs f2, lbl_80882558
    li r4, 0x0
    li r5, 0x4d
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_801BB514_00000A54
lbl_fn_801BB514_000009D8:
    lfs f1, lbl_80882550
    fcmpo cr0, f31, f1
    ble lbl_fn_801BB514_00000A08
    lfs f2, lbl_80882558
    mr r3, r29
    li r4, 0x0
    li r5, 0x4b
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_801BB514_00000A54
lbl_fn_801BB514_00000A08:
    lfs f2, lbl_80882558
    mr r3, r29
    li r4, 0x0
    li r5, 0x4c
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_801BB514_00000A54
lbl_fn_801BB514_00000A2C:
    lwz r0, 0x22c(r29)
    cmpwi r0, 0x4b
    bne lbl_fn_801BB514_00000A40
    lfs f31, lbl_80882588
    b lbl_fn_801BB514_00000A54
lbl_fn_801BB514_00000A40:
    cmpwi r0, 0x4c
    bne lbl_fn_801BB514_00000A50
    lfs f31, lbl_8088258C
    b lbl_fn_801BB514_00000A54
lbl_fn_801BB514_00000A50:
    lfs f31, lbl_80882550
lbl_fn_801BB514_00000A54:
    lwz r5, 0x4(r30)
    addi r4, r1, 0x50
    lfs f0, 0x28(r30)
    addi r3, r1, 0x44
    psq_l f1, 0x528(r5), 0, 0
    fmuls f8, f0, f31
    lfs f3, 0x24(r30)
    lfs f0, 0x20(r30)
    fmuls f9, f3, f31
    psq_st f1, 0x0(r4), 0, 0
    fmuls f10, f0, f31
    lfs f2, 0x530(r5)
    lfs f3, 0x50(r1)
    lfs f0, 0x54(r1)
    fadds f5, f2, f8
    fadds f7, f3, f10
    lfs f4, 0x1c(r30)
    fadds f6, f0, f9
    lfs f3, 0x18(r30)
    lfs f0, 0x14(r30)
    fsubs f4, f4, f5
    fsubs f3, f3, f6
    stfs f10, 0x20(r1)
    fsubs f0, f0, f7
    stfs f9, 0x24(r1)
    stfs f8, 0x28(r1)
    stfs f7, 0x50(r1)
    stfs f6, 0x54(r1)
    stfs f5, 0x58(r1)
    stfs f0, 0x44(r1)
    stfs f3, 0x48(r1)
    stfs f4, 0x4c(r1)
    bl fn_805F9920
    lfs f0, lbl_80882554
    fcmpo cr0, f1, f0
    bge lbl_fn_801BB514_00000AF4
    lwz r0, 0x22c(r29)
    cmpwi r0, 0x4b
    bne lbl_fn_801BB514_00000AF4
    li r31, 0x1
lbl_fn_801BB514_00000AF4:
    lfs f3, 0x10(r30)
    addi r4, r1, 0x14
    lfs f0, 0x58(r1)
    addi r3, r1, 0x44
    lfs f5, 0xc(r30)
    fsubs f2, f3, f0
    lfs f4, 0x54(r1)
    lfs f3, 0x8(r30)
    lfs f0, 0x50(r1)
    fsubs f4, f5, f4
    stfs f2, 0x1c(r1)
    fsubs f0, f3, f0
    stfs f4, 0x18(r1)
    stfs f0, 0x14(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x4c(r1)
    bl fn_805F9920
    lfs f0, lbl_80882554
    fcmpo cr0, f1, f0
    bge lbl_fn_801BB514_00000B58
    lwz r0, 0x22c(r29)
    cmpwi r0, 0x4c
    bne lbl_fn_801BB514_00000B58
    li r31, 0x1
lbl_fn_801BB514_00000B58:
    addi r3, r1, 0x50
    lwz r4, 0x4(r30)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x528(r4), 0, 0
    lfs f2, 0x58(r1)
    stfs f2, 0x530(r4)
    b lbl_fn_801BB514_00000C20
lbl_fn_801BB514_00000B74:
    addi r5, r1, 0x38
    psq_l f1, 0x528(r4), 0, 0
    lfs f5, 0x28(r3)
    lfs f4, lbl_80882588
    lfs f3, 0x24(r3)
    lfs f0, 0x20(r3)
    fmuls f8, f5, f4
    fmuls f9, f3, f4
    psq_st f1, 0x0(r5), 0, 0
    fmuls f10, f0, f4
    lfs f2, 0x530(r4)
    lfs f3, 0x38(r1)
    lfs f0, 0x3c(r1)
    fadds f7, f3, f10
    lfs f4, 0x1c(r3)
    fadds f5, f2, f8
    lfs f3, 0x18(r3)
    fadds f6, f0, f9
    lfs f0, 0x14(r3)
    fsubs f4, f4, f5
    stfs f10, 0x8(r1)
    fsubs f3, f3, f6
    addi r3, r1, 0x2c
    fsubs f0, f0, f7
    stfs f9, 0xc(r1)
    stfs f8, 0x10(r1)
    stfs f7, 0x38(r1)
    stfs f6, 0x3c(r1)
    stfs f5, 0x40(r1)
    stfs f0, 0x2c(r1)
    stfs f3, 0x30(r1)
    stfs f4, 0x34(r1)
    bl fn_805F9920
    lfs f0, lbl_80882554
    fcmpo cr0, f1, f0
    bge lbl_fn_801BB514_00000C08
    li r31, 0x1
lbl_fn_801BB514_00000C08:
    addi r3, r1, 0x38
    lwz r4, 0x4(r30)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x528(r4), 0, 0
    lfs f2, 0x40(r1)
    stfs f2, 0x530(r4)
lbl_fn_801BB514_00000C20:
    psq_l f31, 0x88(r1), 0, 0
    mr r3, r31
    lfd f31, 0x80(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    lwz r29, 0x74(r1)
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_801BB8BC(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    addi r11, r1, 0x110
    bl _savegpr_27
    lis r6, lbl_807814B0@ha
    li r31, 0x0
    addi r6, r6, lbl_807814B0@l
    stw r6, 0x0(r3)
    li r6, 0x6c
    mr r28, r5
    stw r4, 0x4(r3)
    mr r27, r3
    li r0, 0x1
    lfs f1, lbl_80882554
    stw r31, 0x8(r3)
    li r5, 0x59
    lfs f2, lbl_80882558
    li r7, 0x0
    stw r6, 0x560(r4)
    li r4, 0x0
    li r6, 0x0
    li r8, 0x1
    lwz r3, 0x4(r3)
    stw r0, 0x3fc(r3)
    addi r29, r3, 0xb0
    mr r3, r29
    stfs f1, 0x24c(r29)
    bl fn_80097C08
    lfs f3, lbl_80882554
    addi r3, r1, 0x78
    stfs f3, 0x238(r29)
    li r4, 0x79
    lfs f0, lbl_808825AC
    stfs f0, 0x234(r29)
    lfs f0, lbl_80882550
    lfs f1, 0x4(r28)
    stfs f0, 0x68(r1)
    stfs f0, 0x6c(r1)
    stfs f3, 0x70(r1)
    bl fn_805F8E70
    addi r4, r1, 0x68
    addi r3, r1, 0x78
    mr r5, r4
    bl fn_805F93C0
    lwz r10, 0x4(r27)
    addi r30, r1, 0x5c
    addi r29, r1, 0x50
    lfs f10, 0x70(r1)
    lfs f2, 0x530(r10)
    addi r3, r1, 0x2c
    psq_l f1, 0x528(r10), 0, 0
    mr r5, r30
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f2
    lfs f4, lbl_808825B4
    mr r6, r29
    lfs f9, 0x6c(r1)
    addi r4, r1, 0xa8
    fmuls f11, f10, f4
    fmuls f12, f9, f4
    lfs f8, 0x68(r1)
    lfs f0, lbl_808825B0
    lis r7, 0x8000
    fmuls f13, f8, f4
    lfs f5, 0x60(r1)
    psq_st f1, 0x0(r29), 0, 0
    li r8, 0x0
    fadds f6, f5, f0
    lfs f7, 0x5c(r1)
    fadds f5, f3, f11
    lfs f4, 0x50(r1)
    lfs f3, 0x54(r1)
    fadds f7, f7, f13
    fadds f6, f6, f12
    lfs f0, lbl_8088257C
    fadds f4, f4, f13
    stfs f7, 0x5c(r1)
    fadds f3, f3, f12
    li r9, 0x0
    stfs f6, 0x60(r1)
    fmuls f10, f10, f0
    fmuls f6, f9, f0
    fmuls f7, f8, f0
    stfs f5, 0x64(r1)
    stfs f4, 0x50(r1)
    stfs f3, 0x54(r1)
    stfs f5, 0x58(r1)
    stw r31, 0xdc(r1)
    stw r31, 0xe0(r1)
    stw r31, 0xe4(r1)
    stw r31, 0xe8(r1)
    lfs f0, 0x530(r10)
    lfs f3, 0x52c(r10)
    fadds f2, f0, f10
    lfs f0, 0x528(r10)
    fadds f3, f3, f6
    stfs f13, 0x44(r1)
    fadds f0, f0, f7
    stfs f3, 0x30(r1)
    stfs f0, 0x2c(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x18(r27), 0, 0
    stfs f2, 0x20(r27)
    stfs f12, 0x48(r1)
    lwz r3, lbl_8087EE98
    stfs f11, 0x4c(r1)
    stfs f13, 0x38(r1)
    stfs f12, 0x3c(r1)
    stfs f11, 0x40(r1)
    stfs f7, 0x20(r1)
    stfs f6, 0x24(r1)
    stfs f10, 0x28(r1)
    stfs f2, 0x34(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_801BB8BC_00000F24
    lwz r3, 0x4(r27)
    mr r5, r30
    lfs f4, 0xb0(r1)
    mr r6, r29
    lfs f2, 0x530(r3)
    addi r4, r1, 0xa8
    psq_l f1, 0x528(r3), 0, 0
    lis r7, 0x8000
    lfs f3, lbl_808825B8
    frsp f0, f2
    psq_st f1, 0x0(r30), 0, 0
    li r8, 0x0
    fsubs f3, f4, f3
    lfs f4, 0x70(r1)
    lfs f5, lbl_808825B4
    stfs f3, 0x60(r1)
    li r9, 0x0
    fmuls f6, f4, f5
    lfs f3, 0x6c(r1)
    psq_l f1, 0x0(r30), 0, 0
    fmuls f7, f3, f5
    lfs f4, 0x68(r1)
    psq_st f1, 0x0(r29), 0, 0
    fadds f0, f0, f6
    fmuls f5, f4, f5
    lwz r3, lbl_8087EE98
    lfs f3, 0x54(r1)
    lfs f4, 0x50(r1)
    fadds f3, f3, f7
    stfs f2, 0x64(r1)
    fadds f4, f4, f5
    stfs f5, 0x14(r1)
    stfs f7, 0x18(r1)
    stfs f6, 0x1c(r1)
    stfs f4, 0x50(r1)
    stfs f3, 0x54(r1)
    stfs f0, 0x58(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_801BB8BC_00000F24
    addi r3, r1, 0xac
    lfs f2, 0xb4(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x18(r27), 0, 0
    lfs f0, lbl_808825B8
    lfs f3, 0x1c(r27)
    stfs f2, 0x20(r27)
    fadds f6, f3, f0
    lfs f5, lbl_808825BC
    lfs f4, 0x18(r27)
    stfs f6, 0x1c(r27)
    lfs f0, 0x70(r1)
    lfs f3, 0x6c(r1)
    fmuls f7, f0, f5
    lfs f0, 0x68(r1)
    fmuls f8, f3, f5
    fmuls f5, f0, f5
    stfs f7, 0x10(r1)
    fadds f0, f2, f7
    fadds f3, f6, f8
    stfs f5, 0x8(r1)
    fadds f4, f4, f5
    stfs f8, 0xc(r1)
    stfs f4, 0x18(r27)
    stfs f3, 0x1c(r27)
    stfs f0, 0x20(r27)
lbl_fn_801BB8BC_00000F24:
    lwz r4, 0x4(r27)
    addi r11, r1, 0x110
    lfs f2, 0x20(r27)
    mr r3, r27
    psq_l f1, 0x18(r27), 0, 0
    psq_st f1, 0x528(r4), 0, 0
    psq_l f1, 0x0(r28), 0, 0
    stfs f2, 0x530(r4)
    lfs f2, 0x8(r28)
    lwz r4, 0x4(r27)
    psq_st f1, 0x534(r4), 0, 0
    stfs f2, 0x53c(r4)
    bl _restgpr_27
    lwz r0, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_801BBBDC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    psq_st f31, 0x18(r1), 0, 0
    stw r31, 0xc(r1)
    li r31, 0x0
    lwz r5, 0x8(r3)
    lwz r6, 0x4(r3)
    addi r0, r5, 0x1
    stw r0, 0x8(r3)
    addi r3, r6, 0xb0
    lfs f31, 0x2e4(r6)
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_801BBBDC_00000FB4
    li r31, 0x1
lbl_fn_801BBBDC_00000FB4:
    psq_l f31, 0x18(r1), 0, 0
    mr r3, r31
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801BBC48(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    lis r11, lbl_80781438@ha
    psq_l f1, 0x0(r5), 0, 0
    stw r0, 0x114(r1)
    addi r11, r11, lbl_80781438@l
    lfs f2, 0x8(r5)
    li r10, 0x0
    stfd f31, 0x100(r1)
    li r9, 0x78
    li r0, 0x1
    lfs f0, lbl_80882554
    psq_st f31, 0x108(r1), 0, 0
    li r7, 0x0
    li r8, 0x1
    stfd f30, 0xf0(r1)
    psq_st f30, 0xf8(r1), 0, 0
    stw r31, 0xec(r1)
    stw r30, 0xe8(r1)
    mr r30, r6
    stw r29, 0xe4(r1)
    mr r29, r5
    li r5, 0x207
    stw r28, 0xe0(r1)
    mr r28, r3
    psq_st f1, 0x8(r3), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x10(r3)
    lfs f2, 0x8(r6)
    li r6, 0x0
    psq_st f1, 0x14(r3), 0, 0
    lfs f1, lbl_80882550
    stfs f2, 0x1c(r3)
    lfs f2, lbl_80882558
    stw r4, 0x4(r3)
    stw r11, 0x0(r3)
    stw r10, 0x30(r3)
    stw r9, 0x560(r4)
    li r4, 0x0
    lwz r3, 0x4(r3)
    stw r0, 0x3fc(r3)
    addi r31, r3, 0xb0
    mr r3, r31
    stfs f0, 0x24c(r31)
    bl fn_80097C08
    lfs f0, lbl_808825C0
    addi r3, r1, 0x5c
    stfs f0, 0x238(r31)
    lfs f3, 0x8(r30)
    lfs f0, 0x8(r29)
    lwz r4, 0x4(r28)
    fsubs f6, f3, f0
    psq_l f1, 0x0(r29), 0, 0
    psq_st f1, 0x528(r4), 0, 0
    lfs f2, 0x8(r29)
    stfs f2, 0x530(r4)
    lfs f5, 0x4(r30)
    lfs f4, 0x4(r29)
    lfs f3, 0x0(r30)
    lfs f0, 0x0(r29)
    fsubs f4, f5, f4
    stfs f6, 0x64(r1)
    fsubs f0, f3, f0
    stfs f4, 0x60(r1)
    stfs f0, 0x5c(r1)
    bl fn_805F9940
    fmr f31, f1
    addi r3, r1, 0x5c
    mr r4, r3
    bl fn_805F98D0
    lfs f0, lbl_80882590
    addi r3, r1, 0x5c
    lfs f2, 0x64(r1)
    addi r31, r1, 0x50
    fdivs f4, f31, f0
    psq_l f1, 0x0(r3), 0, 0
    lfs f3, lbl_808825A4
    lfs f0, lbl_8088255C
    psq_st f1, 0x20(r28), 0, 0
    stfs f2, 0x28(r28)
    fadds f3, f3, f4
    psq_st f1, 0x0(r31), 0, 0
    frsp f5, f2
    stfs f2, 0x58(r1)
    fctiwz f3, f3
    fabs f4, f5
    stfd f3, 0xd8(r1)
    frsp f4, f4
    lwz r0, 0xdc(r1)
    stw r0, 0x2c(r28)
    fcmpo cr0, f4, f0
    bge lbl_fn_801BBC48_00001168
    lfs f3, 0x50(r1)
    lfs f0, lbl_80882550
    fcmpo cr0, f3, f0
    ble lbl_fn_801BBC48_0000115C
    lfs f0, lbl_80882560
    b lbl_fn_801BBC48_00001160
lbl_fn_801BBC48_0000115C:
    lfs f0, lbl_80882564
lbl_fn_801BBC48_00001160:
    stfs f0, 0x48(r1)
    b lbl_fn_801BBC48_0000117C
lbl_fn_801BBC48_00001168:
    fmr f2, f5
    lfs f1, 0x50(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_801BBC48_0000117C:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x68
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80882550
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
    lfs f0, lbl_80882554
    psq_l f1, 0x0(r31), 0, 0
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
    lfs f0, lbl_8088255C
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_801BBC48_00001298
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80882550
    fcmpo cr0, f3, f0
    ble lbl_fn_801BBC48_00001288
    lfs f0, lbl_80882560
    b lbl_fn_801BBC48_0000128C
lbl_fn_801BBC48_00001288:
    lfs f0, lbl_80882564
lbl_fn_801BBC48_0000128C:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_801BBC48_000012AC
lbl_fn_801BBC48_00001298:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_801BBC48_000012AC:
    addi r3, r1, 0x44
    lfs f2, lbl_80882550
    psq_l f1, 0x0(r3), 0, 0
    lwz r3, 0x4(r28)
    stfs f2, 0x4c(r1)
    stfs f2, 0x58(r1)
    frsp f2, f2
    psq_st f1, 0x534(r3), 0, 0
    stfs f2, 0x53c(r3)
    psq_st f1, 0x0(r31), 0, 0
    lwz r3, 0x4(r28)
    bl fn_801446F0
    psq_l f31, 0x108(r1), 0, 0
    mr r3, r28
    lfd f31, 0x100(r1)
    psq_l f30, 0xf8(r1), 0, 0
    lfd f30, 0xf0(r1)
    lwz r31, 0xec(r1)
    lwz r30, 0xe8(r1)
    lwz r29, 0xe4(r1)
    lwz r28, 0xe0(r1)
    lwz r0, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_801BBF84(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stfd f31, 0x50(r1)
    psq_st f31, 0x58(r1), 0, 0
    stw r31, 0x4c(r1)
    stw r30, 0x48(r1)
    li r30, 0x0
    stw r29, 0x44(r1)
    mr r29, r3
    lwz r0, 0x30(r3)
    lwz r5, 0x4(r3)
    cmpwi r0, 0x0
    addi r31, r5, 0xb0
    bne lbl_fn_801BBF84_00001398
    lfs f31, 0x234(r31)
    mr r3, r31
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_801BBF84_000014EC
    lfs f1, lbl_80882550
    mr r3, r31
    lfs f2, lbl_80882558
    li r4, 0x0
    li r5, 0x208
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    li r0, 0x1
    stw r0, 0x30(r29)
    b lbl_fn_801BBF84_000014EC
lbl_fn_801BBF84_00001398:
    cmpwi r0, 0x1
    bne lbl_fn_801BBF84_000014C4
    addi r4, r1, 0x2c
    psq_l f1, 0x528(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lfs f2, 0x530(r5)
    lfs f0, 0x1c(r3)
    lfs f5, 0x18(r3)
    lfs f4, 0x30(r1)
    fsubs f6, f0, f2
    lfs f3, 0x14(r3)
    addi r3, r1, 0x14
    lfs f0, 0x2c(r1)
    fsubs f4, f5, f4
    stfs f2, 0x34(r1)
    fsubs f0, f3, f0
    lfs f31, lbl_80882590
    stfs f4, 0x18(r1)
    stfs f0, 0x14(r1)
    stfs f6, 0x1c(r1)
    bl fn_805F9940
    fcmpo cr0, f1, f31
    bge lbl_fn_801BBF84_000013F8
    fmr f31, f1
lbl_fn_801BBF84_000013F8:
    lfs f4, 0x28(r29)
    addi r3, r1, 0x20
    lfs f3, 0x24(r29)
    fmuls f8, f4, f31
    lfs f0, 0x20(r29)
    fmuls f9, f3, f31
    lfs f3, 0x30(r1)
    fmuls f10, f0, f31
    lfs f4, 0x2c(r1)
    fadds f6, f3, f9
    lfs f0, 0x34(r1)
    fadds f7, f4, f10
    lfs f3, 0x18(r29)
    fadds f5, f0, f8
    lfs f0, 0x14(r29)
    lfs f4, 0x1c(r29)
    fsubs f11, f3, f6
    fsubs f0, f0, f7
    stfs f10, 0x8(r1)
    fsubs f3, f4, f5
    stfs f9, 0xc(r1)
    stfs f8, 0x10(r1)
    stfs f7, 0x2c(r1)
    stfs f6, 0x30(r1)
    stfs f5, 0x34(r1)
    stfs f0, 0x20(r1)
    stfs f11, 0x24(r1)
    stfs f3, 0x28(r1)
    bl fn_805F9920
    lfs f0, lbl_80882554
    fcmpo cr0, f1, f0
    bge lbl_fn_801BBF84_000014A8
    lfs f1, lbl_80882550
    mr r3, r31
    lfs f2, lbl_80882558
    li r4, 0x0
    li r5, 0x209
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    li r0, 0x2
    stw r0, 0x30(r29)
    b lbl_fn_801BBF84_000014EC
lbl_fn_801BBF84_000014A8:
    addi r3, r1, 0x2c
    lwz r4, 0x4(r29)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x528(r4), 0, 0
    lfs f2, 0x34(r1)
    stfs f2, 0x530(r4)
    b lbl_fn_801BBF84_000014EC
lbl_fn_801BBF84_000014C4:
    cmpwi r0, 0x2
    bne lbl_fn_801BBF84_000014EC
    lfs f31, 0x234(r31)
    mr r3, r31
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_801BBF84_000014EC
    li r30, 0x1
lbl_fn_801BBF84_000014EC:
    psq_l f31, 0x58(r1), 0, 0
    mr r3, r30
    lfd f31, 0x50(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_801BC188(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801BC188_0000153C
    cmpwi r4, 0x0
    ble lbl_fn_801BC188_0000153C
    bl dtor_80084684
lbl_fn_801BC188_0000153C:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801BC1C8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801BC1C8_0000157C
    cmpwi r4, 0x0
    ble lbl_fn_801BC1C8_0000157C
    bl dtor_80084684
lbl_fn_801BC1C8_0000157C:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801BC208(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801BC208_000015BC
    cmpwi r4, 0x0
    ble lbl_fn_801BC208_000015BC
    bl dtor_80084684
lbl_fn_801BC208_000015BC:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801BC248(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801BC248_000015FC
    cmpwi r4, 0x0
    ble lbl_fn_801BC248_000015FC
    bl dtor_80084684
lbl_fn_801BC248_000015FC:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801BC288(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r6, lbl_80781690@ha
    li r7, 0x60
    stw r0, 0x24(r1)
    addi r6, r6, lbl_80781690@l
    li r0, 0x1
    lfs f0, lbl_808825C8
    stw r31, 0x1c(r1)
    mr r31, r3
    lfs f1, lbl_808825CC
    li r8, 0x1
    stw r30, 0x18(r1)
    lfs f2, lbl_808825D0
    stw r5, 0x8(r3)
    li r5, 0x45
    stw r6, 0x0(r3)
    li r6, 0x1
    stw r4, 0x4(r3)
    stw r7, 0x560(r4)
    li r4, 0x0
    li r7, 0x0
    lwz r3, 0x4(r3)
    stw r0, 0x3fc(r3)
    addi r30, r3, 0xb0
    mr r3, r30
    stfs f0, 0x24c(r30)
    stfs f0, 0x238(r30)
    bl fn_80097C08
    bl fn_80680CF8
    lis r4, 0x4178
    lis r0, 0x4330
    addi r5, r4, 0x749f
    stw r0, 0x8(r1)
    mulhw r5, r5, r3
    lis r4, lbl_8073B378@ha
    lfd f3, lbl_8073B378@l(r4)
    lfs f1, lbl_808825D8
    lfs f0, lbl_808825D4
    srawi r0, r5, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f2, 0x8(r1)
    fsubs f2, f2, f3
    fdivs f1, f2, f1
    fmuls f0, f0, f1
    stfs f0, 0x234(r30)
    lwz r3, 0x4(r31)
    lwz r0, 0x12a4(r3)
    srwi. r0, r0, 31
    beq lbl_fn_801BC288_000016F4
    bl fn_801539E0
lbl_fn_801BC288_000016F4:
    lwz r3, 0x4(r31)
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 25
    beq lbl_fn_801BC288_0000170C
    li r4, 0x0
    bl fn_80155DAC
lbl_fn_801BC288_0000170C:
    lwz r3, 0x4(r31)
    bl fn_8016DA4C
    lwz r4, 0x4(r31)
    mr r3, r31
    lwz r0, 0x12a4(r4)
    rlwinm r0, r0, 0, 27, 25
    stw r0, 0x12a4(r4)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801BC3B4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r4, 0x8(r3)
    subic. r0, r4, 0x1
    stw r0, 0x8(r3)
    bgt lbl_fn_801BC3B4_00001764
    li r3, 0x1
    b lbl_fn_801BC3B4_0000178C
lbl_fn_801BC3B4_00001764:
    lwz r3, 0x4(r3)
    li r5, 0x0
    lfs f1, lbl_808825CC
    lwz r12, 0x0(r3)
    addi r4, r3, 0x534
    lfs f2, lbl_808825C8
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    li r3, 0x0
lbl_fn_801BC3B4_0000178C:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801BC410(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r6, lbl_80781618@ha
    lfs f0, lbl_808825C8
    stw r0, 0x24(r1)
    addi r6, r6, lbl_80781618@l
    li r0, 0x1
    lfs f1, lbl_808825CC
    stw r31, 0x1c(r1)
    addi r31, r4, 0xb0
    lfs f2, lbl_808825D0
    li r7, 0x0
    stw r30, 0x18(r1)
    mr r30, r3
    li r8, 0x1
    stw r5, 0x8(r3)
    li r5, 0x5
    stw r6, 0x0(r3)
    li r6, 0x0
    stw r4, 0x4(r3)
    mr r3, r31
    stw r5, 0x58c(r4)
    li r4, 0x0
    li r5, 0x142
    stw r0, 0x34c(r31)
    stfs f0, 0x24c(r31)
    stfs f0, 0x238(r31)
    bl fn_80097C08
    bl fn_80680CF8
    lis r4, 0x4178
    lis r0, 0x4330
    addi r5, r4, 0x749f
    stw r0, 0x8(r1)
    mulhw r5, r5, r3
    lis r4, lbl_8073B378@ha
    lfd f3, lbl_8073B378@l(r4)
    lfs f1, lbl_808825D8
    lfs f0, lbl_808825D4
    srawi r0, r5, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    mr r3, r30
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f2, 0x8(r1)
    fsubs f2, f2, f3
    fdivs f1, f2, f1
    fmuls f0, f0, f1
    stfs f0, 0x234(r31)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801BC4F4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0x0
    lfs f1, lbl_808825CC
    stw r0, 0x14(r1)
    lfs f2, lbl_808825C8
    lwz r3, 0x4(r3)
    lwz r12, 0x0(r3)
    addi r4, r3, 0x534
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    lwz r0, 0x14(r1)
    li r3, 0x0
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801BC538(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801BC538_000018EC
    cmpwi r4, 0x0
    ble lbl_fn_801BC538_000018EC
    bl dtor_80084684
lbl_fn_801BC538_000018EC:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801BC578(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801BC578_0000192C
    cmpwi r4, 0x0
    ble lbl_fn_801BC578_0000192C
    bl dtor_80084684
lbl_fn_801BC578_0000192C:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801BC5B8(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    addi r11, r1, 0xa0
    stfd f31, 0xa0(r1)
    psq_st f31, 0xa8(r1), 0, 0
    bl _savegpr_26
    fmr f31, f1
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r30, r6
    mr r31, r7
    bl fn_801C3414
    lfs f0, lbl_808825E4
    lis r3, lbl_80781838@ha
    addi r3, r3, lbl_80781838@l
    stw r3, 0x0(r27)
    addi r3, r27, 0x30
    stfs f0, 0x2c(r27)
    bl fn_800CB360
    lfs f0, lbl_808825E8
    li r4, 0x0
    li r3, 0x1
    stfs f0, 0x40(r27)
    lwz r5, 0x4(r27)
    li r0, 0x1d
    stb r4, 0x44(r27)
    stb r4, 0x45(r27)
    stb r4, 0x46(r27)
    stb r4, 0x47(r27)
    stfs f0, 0x48(r27)
    stb r3, 0x24(r27)
    stw r0, 0x560(r5)
    lwz r3, 0x4(r27)
    lwz r0, 0x12a4(r3)
    addi r26, r3, 0xb0
    extrwi. r0, r0, 1, 25
    beq lbl_fn_801BC5B8_000019E8
    li r4, 0x0
    bl fn_80155DAC
lbl_fn_801BC5B8_000019E8:
    li r0, 0x1
    stw r0, 0x34c(r26)
    lfs f0, lbl_808825E8
    mr r3, r26
    stfs f0, 0x24c(r26)
    li r4, 0x0
    lfs f1, lbl_808825E4
    li r5, 0x66
    lfs f2, lbl_808825EC
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_808825E8
    stfs f0, 0x238(r26)
    lwz r3, 0x4(r27)
    lwz r0, 0x638(r3)
    stw r0, 0x3c(r27)
    lwz r0, lbl_8087F048
    cmpwi r0, 0x0
    beq lbl_fn_801BC5B8_00001B10
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f0, 0x1c(r1)
    lwz r3, 0x50(r3)
    bl fn_80219558
    subi r0, r3, 0x9
    cmplwi r0, 0x1
    ble lbl_fn_801BC5B8_00001A84
    cmpwi r3, 0x1
    beq lbl_fn_801BC5B8_00001A84
    cmpwi r3, 0x4
    beq lbl_fn_801BC5B8_00001AA4
    cmpwi r3, 0x6
    beq lbl_fn_801BC5B8_00001AC4
    cmpwi r3, 0x5
    beq lbl_fn_801BC5B8_00001AE4
    b lbl_fn_801BC5B8_00001AFC
lbl_fn_801BC5B8_00001A84:
    lfs f4, lbl_808825E8
    lfs f3, lbl_808825F0
    lfs f0, lbl_808825F4
    stfs f4, 0x10(r1)
    stfs f3, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f4, 0x1c(r1)
    b lbl_fn_801BC5B8_00001AFC
lbl_fn_801BC5B8_00001AA4:
    lfs f4, lbl_808825E8
    lfs f3, lbl_808825F4
    lfs f0, lbl_808825EC
    stfs f4, 0x10(r1)
    stfs f3, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f4, 0x1c(r1)
    b lbl_fn_801BC5B8_00001AFC
lbl_fn_801BC5B8_00001AC4:
    lfs f0, lbl_808825E8
    lfs f4, lbl_808825F8
    lfs f3, lbl_808825FC
    stfs f4, 0x10(r1)
    stfs f3, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f0, 0x1c(r1)
    b lbl_fn_801BC5B8_00001AFC
lbl_fn_801BC5B8_00001AE4:
    lfs f3, lbl_808825F8
    lfs f0, lbl_808825E8
    stfs f3, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f3, 0x18(r1)
    stfs f0, 0x1c(r1)
lbl_fn_801BC5B8_00001AFC:
    lwz r3, lbl_8087F048
    mr r5, r26
    lwz r4, 0x4(r27)
    addi r6, r1, 0x10
    bl fn_80105AB0
lbl_fn_801BC5B8_00001B10:
    lwz r5, 0x4(r27)
    addi r3, r1, 0x8
    lwz r4, lbl_808825E0
    li r6, 0x0
    lfs f1, lbl_808825E8
    addi r5, r5, 0x528
    li r7, -0x1
    bl fn_800C344C
    addi r3, r27, 0x30
    addi r4, r1, 0x8
    bl fn_800CB440
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    psq_l f1, 0x0(r30), 0, 0
    li r0, 0x0
    lfs f2, 0x8(r30)
    addi r5, r1, 0x2c
    psq_st f1, 0x8(r27), 0, 0
    addi r6, r1, 0x20
    lwz r10, 0x4(r27)
    addi r4, r1, 0x38
    stfs f2, 0x10(r27)
    lis r7, 0x8000
    lfs f3, lbl_80882600
    li r8, 0x0
    stfs f31, 0x28(r27)
    li r9, 0x0
    lfs f0, lbl_80882604
    psq_l f1, 0x528(r10), 0, 0
    lfs f2, 0x530(r10)
    stfs f2, 0x1c(r27)
    psq_st f1, 0x14(r27), 0, 0
    stw r29, 0x34(r27)
    stw r31, 0x38(r27)
    stw r0, 0x6c(r1)
    lwz r3, lbl_8087EE98
    stw r0, 0x70(r1)
    stw r0, 0x74(r1)
    stw r0, 0x78(r1)
    psq_l f1, 0x528(r10), 0, 0
    lfs f2, 0x530(r10)
    stfs f2, 0x34(r1)
    psq_st f1, 0x0(r5), 0, 0
    lfs f4, 0x30(r1)
    lfs f2, 0x530(r10)
    psq_l f1, 0x528(r10), 0, 0
    fadds f4, f4, f3
    psq_st f1, 0x0(r6), 0, 0
    lfs f3, 0x24(r1)
    stfs f2, 0x28(r1)
    fsubs f0, f3, f0
    stfs f4, 0x30(r1)
    stfs f0, 0x24(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_801BC5B8_00001C08
    addi r3, r1, 0x3c
    lfs f2, 0x44(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x14(r27), 0, 0
    stfs f2, 0x1c(r27)
lbl_fn_801BC5B8_00001C08:
    lwz r3, lbl_8087F490
    li r4, 0x0
    lwz r5, 0x4(r27)
    bl fn_803E2110
    lwz r3, lbl_8087F498
    cmpwi r3, 0x0
    beq lbl_fn_801BC5B8_00001C6C
    lwz r4, 0x4(r27)
    lwz r0, 0x48(r4)
    cmpwi r0, 0x3
    bne lbl_fn_801BC5B8_00001C6C
    cmpwi r31, 0x5a
    bgt lbl_fn_801BC5B8_00001C54
    lwz r4, 0x3c(r27)
    lwz r0, 0xac(r4)
    rlwinm r4, r0, 0, 13, 13
    subis r0, r4, 0x4
    cmplwi r0, 0x0
    bne lbl_fn_801BC5B8_00001C6C
lbl_fn_801BC5B8_00001C54:
    lfs f1, lbl_808825E8
    mr r4, r28
    lfs f2, lbl_80882608
    li r5, 0x15
    li r6, 0x0
    bl fn_803EA77C
lbl_fn_801BC5B8_00001C6C:
    psq_l f31, 0xa8(r1), 0, 0
    mr r3, r27
    lfd f31, 0xa0(r1)
    addi r11, r1, 0xa0
    bl _restgpr_26
    lwz r0, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}
