#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_24(void);
extern void _savegpr_24(void);
extern void dtor_80084684(void);
extern void fn_8000D114(void);
extern void fn_8000D124(void);
extern void fn_8000D3A4(void);
extern void fn_8001047C(void);
extern void fn_80011034(void);
extern void fn_80011410(void);
extern void fn_80012C88(void);
extern void fn_80013338(void);
extern void fn_800133B0(void);
extern void fn_80013404(void);
extern void fn_80013410(void);
extern void fn_80013484(void);
extern void fn_8004ED34(void);
extern void fn_80057A64(void);
extern void fn_80057A68(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_8008B964(void);
extern void fn_8008BBD8(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800A56A8(void);
extern void fn_800F7258(void);
extern void fn_800F72CC(void);
extern void fn_800F7FF0(void);
extern void fn_801156BC(void);
extern void fn_80116E6C(void);
extern void fn_8012A1B8(void);
extern void fn_8013A13C(void);
extern void fn_8013C3B4(void);
extern void fn_8013CB68(void);
extern void fn_8014052C(void);
extern void fn_801446F0(void);
extern void fn_80179D44(void);
extern void fn_80188A70(void);
extern void fn_80188AA0(void);
extern void fn_80192758(void);
extern void fn_801A03E8(void);
extern void fn_801C0738(void);
extern void fn_801C1060(void);
extern void fn_801C1578(void);
extern void fn_801C3910(void);
extern void fn_801C3944(void);
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
extern u8 lbl_8073B710[];
extern u8 lbl_8077CF44[];
extern u8 lbl_807818F0[];
extern u8 lbl_807818FC[];
extern u8 lbl_80781908[];
extern u8 lbl_80781910[];
extern u8 lbl_80781B70[];
extern u8 lbl_80781B90[];
extern u8 lbl_807C7B50[];
extern u8 lbl_807C7C78[];

/* Small data declarations */
extern u32 lbl_8087DA10;
extern u32 lbl_8087DA14;
extern u32 lbl_8087DA18;
extern u32 lbl_8087DA1C;
extern u32 lbl_8087DA20;
extern u32 lbl_8087DA24;
extern u32 lbl_8087DA28;
extern u32 lbl_8087DA2C;
extern u32 lbl_8087DA30;
extern u32 lbl_8087DA34;
extern u32 lbl_8087DA38;
extern u32 lbl_8087DA3C;
extern u32 lbl_8087EE98;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F0B1;
extern u32 lbl_8087F108;
extern u32 lbl_80882698;
extern u32 lbl_8088269C;
extern u32 lbl_808826A0;
extern u32 lbl_808826A4;
extern u32 lbl_808826A8;
extern u32 lbl_808826AC;
extern u32 lbl_808826B0;
extern u32 lbl_808826B8;
extern u32 lbl_808826C0;
extern u32 lbl_808826C4;
extern u32 lbl_808826DC;
extern u32 lbl_808826FC;
extern u32 lbl_80882704;
extern u32 lbl_80882708;
extern u32 lbl_8088270C;
extern u32 lbl_80882710;
extern u32 lbl_80882714;
extern u32 lbl_80882718;
extern u32 lbl_8088271C;
extern u32 lbl_80882720;
extern u32 lbl_80882724;
extern u32 lbl_80882728;
extern u32 lbl_8088272C;
extern u32 lbl_80882730;
extern u32 lbl_80882734;
extern u32 lbl_80882738;
extern u32 lbl_8088273C;
extern u32 lbl_80882740;
extern u32 lbl_80882744;
extern u32 lbl_80882748;
extern u32 lbl_8088274C;
extern u32 lbl_80882750;
extern u32 lbl_80882754;
extern u32 lbl_80882758;
extern u32 lbl_8088275C;
extern u32 lbl_80882760;

/* Function declarations */
void fn_801C1B50(void);
void fn_801C1DB4(void);
void fn_801C1DCC(void);
void fn_801C2198(void);
void fn_801C2870(void);
void fn_801C2CA8(void);
void fn_801C2CC0(void);
void fn_801C31C8(void);
void fn_801C31F8(void);
void fn_801C3314(void);
void fn_801C3354(void);
void fn_801C3394(void);
void fn_801C33D4(void);
void fn_801C3414(void);
void fn_801C3458(void);
void fn_801C346C(void);

asm void fn_801C1B50(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    lwz r5, 0x4(r3)
    lwz r4, lbl_8087EFA8
    lfs f3, 0x38(r3)
    addi r6, r5, 0xb0
    lfs f4, 0x2e8(r5)
    lfs f5, 0x3a4(r4)
    lfs f0, lbl_808826DC
    fmadds f3, f5, f4, f3
    lfs f8, lbl_808826A8
    stfs f3, 0x38(r3)
    lfs f3, 0x2e4(r5)
    fdivs f0, f3, f0
    fcmpo cr0, f8, f0
    bge lbl_fn_801C1B50_00000050
    b lbl_fn_801C1B50_00000054
lbl_fn_801C1B50_00000050:
    fmr f8, f0
lbl_fn_801C1B50_00000054:
    lwz r5, 0x4(r3)
    addi r4, r1, 0x2c
    lfs f5, 0x38(r3)
    lfs f0, lbl_80882708
    psq_l f1, 0x528(r5), 0, 0
    lfs f2, 0x530(r5)
    fcmpo cr0, f5, f0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x34(r1)
    bge lbl_fn_801C1B50_00000110
    lfs f0, lbl_8088270C
    addi r5, r1, 0x20
    lfs f3, 0x24(r3)
    fmuls f7, f5, f0
    lfs f4, 0x18(r3)
    lfs f0, 0x20(r3)
    fsubs f11, f3, f4
    lfs f3, 0x14(r3)
    fmuls f12, f7, f8
    fsubs f10, f0, f3
    lfs f6, 0x28(r3)
    fmuls f9, f11, f7
    lfs f5, 0x1c(r3)
    fmuls f8, f10, f7
    stfs f10, 0x14(r1)
    fadds f4, f9, f4
    lfs f0, 0x30(r3)
    fsubs f10, f6, f5
    stfs f11, 0x18(r1)
    fadds f3, f8, f3
    stfs f4, 0x24(r1)
    fmuls f6, f10, f7
    stfs f3, 0x20(r1)
    psq_l f1, 0x0(r5), 0, 0
    fadds f2, f6, f5
    psq_st f1, 0x0(r4), 0, 0
    lfs f3, 0x30(r1)
    stfs f10, 0x1c(r1)
    fsubs f0, f0, f3
    stfs f8, 0x8(r1)
    fmadds f0, f12, f0, f3
    stfs f9, 0xc(r1)
    stfs f6, 0x10(r1)
    stfs f2, 0x28(r1)
    stfs f2, 0x34(r1)
    stfs f0, 0x30(r1)
    b lbl_fn_801C1B50_0000020C
lbl_fn_801C1B50_00000110:
    lfs f4, 0x234(r6)
    lfs f3, lbl_808826C4
    lfs f0, lbl_808826B0
    fsubs f3, f4, f3
    lfs f5, 0x30(r3)
    lfs f4, 0x24(r3)
    lfs f6, lbl_808826A4
    fdivs f0, f3, f0
    fsubs f3, f5, f4
    fcmpo cr0, f6, f0
    fmadds f3, f8, f3, f4
    stfs f3, 0x30(r1)
    ble lbl_fn_801C1B50_00000148
    b lbl_fn_801C1B50_0000014C
lbl_fn_801C1B50_00000148:
    fmr f6, f0
lbl_fn_801C1B50_0000014C:
    lfs f7, lbl_808826A8
    fcmpo cr0, f7, f6
    bge lbl_fn_801C1B50_0000015C
    b lbl_fn_801C1B50_00000184
lbl_fn_801C1B50_0000015C:
    lfs f4, 0x234(r6)
    lfs f3, lbl_808826C4
    lfs f0, lbl_808826B0
    fsubs f3, f4, f3
    lfs f7, lbl_808826A4
    fdivs f0, f3, f0
    fcmpo cr0, f7, f0
    ble lbl_fn_801C1B50_00000180
    b lbl_fn_801C1B50_00000184
lbl_fn_801C1B50_00000180:
    fmr f7, f0
lbl_fn_801C1B50_00000184:
    lfs f4, 0x234(r6)
    lfs f3, lbl_808826C4
    lfs f0, lbl_808826B0
    fsubs f3, f4, f3
    lfs f5, 0x2c(r3)
    lfs f4, 0x20(r3)
    lfs f6, lbl_808826A4
    fdivs f0, f3, f0
    fsubs f3, f5, f4
    fcmpo cr0, f6, f0
    fmadds f3, f7, f3, f4
    stfs f3, 0x2c(r1)
    ble lbl_fn_801C1B50_000001BC
    b lbl_fn_801C1B50_000001C0
lbl_fn_801C1B50_000001BC:
    fmr f6, f0
lbl_fn_801C1B50_000001C0:
    lfs f4, lbl_808826A8
    fcmpo cr0, f4, f6
    bge lbl_fn_801C1B50_000001D0
    b lbl_fn_801C1B50_000001F8
lbl_fn_801C1B50_000001D0:
    lfs f4, 0x234(r6)
    lfs f3, lbl_808826C4
    lfs f0, lbl_808826B0
    fsubs f3, f4, f3
    lfs f4, lbl_808826A4
    fdivs f0, f3, f0
    fcmpo cr0, f4, f0
    ble lbl_fn_801C1B50_000001F4
    b lbl_fn_801C1B50_000001F8
lbl_fn_801C1B50_000001F4:
    fmr f4, f0
lbl_fn_801C1B50_000001F8:
    lfs f0, 0x34(r3)
    lfs f3, 0x28(r3)
    fsubs f0, f0, f3
    fmadds f0, f4, f0, f3
    stfs f0, 0x34(r1)
lbl_fn_801C1B50_0000020C:
    addi r4, r1, 0x2c
    lwz r5, 0x4(r3)
    psq_l f1, 0x0(r4), 0, 0
    mr r3, r6
    psq_st f1, 0x528(r5), 0, 0
    li r4, 0x0
    lfs f2, 0x34(r1)
    stfs f2, 0x530(r5)
    lfs f31, 0x234(r6)
    bl fn_80097D7C
    lfs f0, lbl_808826FC
    fsubs f0, f1, f0
    fcmpo cr0, f31, f0
    cror eq, gt, eq
    mfcr r3
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    extrwi r3, r3, 1, 2
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_801C1DB4(void)
{
    nofralloc
    lwz r4, 0x4(r4)
    psq_l f1, 0x528(r4), 0, 0
    lfs f2, 0x530(r4)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
    blr
}

asm void fn_801C1DCC(void)
{
    nofralloc
    stwu r1, -0x180(r1)
    mflr r0
    lis r7, lbl_80781910@ha
    lfs f0, lbl_808826A4
    stw r0, 0x184(r1)
    addi r7, r7, lbl_80781910@l
    li r0, 0x2d
    stfd f31, 0x170(r1)
    psq_st f31, 0x178(r1), 0, 0
    stfd f30, 0x160(r1)
    psq_st f30, 0x168(r1), 0, 0
    stw r31, 0x15c(r1)
    mr r31, r3
    stw r30, 0x158(r1)
    stw r29, 0x154(r1)
    mr r29, r6
    stw r28, 0x150(r1)
    mr r28, r5
    stw r4, 0x4(r3)
    stw r7, 0x0(r3)
    stfs f0, 0x34(r3)
    stw r0, 0x560(r4)
    lwz r4, 0x4(r3)
    lwz r0, 0x12a4(r4)
    addi r30, r4, 0xb0
    rlwinm r0, r0, 0, 27, 25
    stw r0, 0x12a4(r4)
    lwz r4, 0x4(r3)
    lwz r0, 0x12a4(r4)
    rlwinm r0, r0, 0, 28, 26
    stw r0, 0x12a4(r4)
    lwz r3, 0x4(r3)
    bl fn_801446F0
    lfs f1, lbl_808826A4
    mr r3, r30
    lfs f2, lbl_808826AC
    li r4, 0x0
    li r5, 0x214
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    li r0, 0x1
    stw r0, 0x34c(r30)
    lfs f0, lbl_808826A8
    mr r3, r31
    stfs f0, 0x24c(r30)
    mr r5, r29
    lfs f3, lbl_808826A4
    addi r4, r1, 0x74
    stfs f0, 0x238(r30)
    lfs f0, lbl_80882710
    stfs f3, 0x234(r30)
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x8(r29)
    stfs f2, 0x10(r31)
    lfs f2, 0x8(r28)
    psq_st f1, 0x8(r31), 0, 0
    psq_l f1, 0x0(r28), 0, 0
    psq_st f1, 0x14(r31), 0, 0
    stfs f2, 0x1c(r31)
    stfs f3, 0x74(r1)
    stfs f3, 0x78(r1)
    stfs f3, 0x7c(r1)
    stfs f0, 0x2c(r31)
    bl fn_801C2198
    cmpwi r3, 0x0
    bne lbl_fn_801C1DCC_000003D0
    lfs f1, lbl_80882714
    addi r3, r1, 0x120
    li r4, 0x79
    bl fn_805F8E70
    psq_l f1, 0x0(r29), 0, 0
    addi r30, r1, 0x68
    lfs f2, 0x8(r29)
    mr r4, r30
    stfs f2, 0x70(r1)
    mr r5, r30
    addi r3, r1, 0x120
    psq_st f1, 0x0(r30), 0, 0
    bl fn_805F93C0
    mr r3, r31
    mr r5, r30
    addi r4, r1, 0x74
    bl fn_801C2198
lbl_fn_801C1DCC_000003D0:
    cmpwi r3, 0x0
    bne lbl_fn_801C1DCC_0000041C
    lfs f1, lbl_80882718
    addi r3, r1, 0xf0
    li r4, 0x79
    bl fn_805F8E70
    psq_l f1, 0x0(r29), 0, 0
    addi r30, r1, 0x5c
    lfs f2, 0x8(r29)
    mr r4, r30
    stfs f2, 0x64(r1)
    mr r5, r30
    addi r3, r1, 0xf0
    psq_st f1, 0x0(r30), 0, 0
    bl fn_805F93C0
    mr r3, r31
    mr r5, r30
    addi r4, r1, 0x74
    bl fn_801C2198
lbl_fn_801C1DCC_0000041C:
    clrlwi. r0, r3, 24
    stb r3, 0x30(r31)
    bne lbl_fn_801C1DCC_00000450
    lwz r4, 0x4(r31)
    addi r3, r1, 0x74
    lfs f0, 0x2c(r31)
    stfs f0, 0x570(r4)
    lwz r4, 0x4(r31)
    lfs f2, 0x7c(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x6b8(r4), 0, 0
    stfs f2, 0x6c0(r4)
    b lbl_fn_801C1DCC_0000045C
lbl_fn_801C1DCC_00000450:
    lwz r3, 0x4(r31)
    lfs f0, lbl_808826A8
    stfs f0, 0x570(r3)
lbl_fn_801C1DCC_0000045C:
    lfs f2, 0x10(r31)
    addi r30, r1, 0x50
    psq_l f1, 0x8(r31), 0, 0
    fabs f3, f2
    lfs f0, lbl_80882698
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0x58(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_801C1DCC_000004A8
    lfs f3, 0x50(r1)
    lfs f0, lbl_808826A4
    fcmpo cr0, f3, f0
    ble lbl_fn_801C1DCC_0000049C
    lfs f0, lbl_8088269C
    b lbl_fn_801C1DCC_000004A0
lbl_fn_801C1DCC_0000049C:
    lfs f0, lbl_808826A0
lbl_fn_801C1DCC_000004A0:
    stfs f0, 0x48(r1)
    b lbl_fn_801C1DCC_000004BC
lbl_fn_801C1DCC_000004A8:
    frsp f2, f2
    lfs f1, 0x50(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_801C1DCC_000004BC:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x80
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808826A4
    addi r4, r1, 0x38
    lfs f30, 0x88(r1)
    mr r5, r4
    lfs f31, 0x84(r1)
    addi r3, r1, 0xb0
    lfs f13, 0x80(r1)
    lfs f12, 0x98(r1)
    lfs f11, 0x94(r1)
    lfs f10, 0x90(r1)
    lfs f9, 0xa8(r1)
    lfs f8, 0xa4(r1)
    lfs f7, 0xa0(r1)
    lfs f6, 0xac(r1)
    lfs f5, 0x9c(r1)
    lfs f4, 0x8c(r1)
    lfs f0, lbl_808826A8
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x58(r1)
    stfs f3, 0xe0(r1)
    stfs f3, 0xe4(r1)
    stfs f3, 0xe8(r1)
    stfs f0, 0xec(r1)
    stfs f13, 0x8(r1)
    stfs f31, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f13, 0xb0(r1)
    stfs f31, 0xb4(r1)
    stfs f30, 0xb8(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xc0(r1)
    stfs f11, 0xc4(r1)
    stfs f12, 0xc8(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0xd0(r1)
    stfs f8, 0xd4(r1)
    stfs f9, 0xd8(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0xbc(r1)
    stfs f5, 0xcc(r1)
    stfs f6, 0xdc(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80882698
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_801C1DCC_000005D8
    lfs f3, 0x3c(r1)
    lfs f0, lbl_808826A4
    fcmpo cr0, f3, f0
    ble lbl_fn_801C1DCC_000005C8
    lfs f0, lbl_8088269C
    b lbl_fn_801C1DCC_000005CC
lbl_fn_801C1DCC_000005C8:
    lfs f0, lbl_808826A0
lbl_fn_801C1DCC_000005CC:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_801C1DCC_000005EC
lbl_fn_801C1DCC_000005D8:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_801C1DCC_000005EC:
    lfs f2, lbl_808826A4
    addi r3, r1, 0x44
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r31
    lwz r4, 0x4(r31)
    stfs f2, 0x4c(r1)
    stfs f2, 0x58(r1)
    frsp f2, f2
    psq_st f1, 0x534(r4), 0, 0
    stfs f2, 0x53c(r4)
    psq_l f31, 0x178(r1), 0, 0
    lfd f31, 0x170(r1)
    psq_l f30, 0x168(r1), 0, 0
    lfd f30, 0x160(r1)
    psq_st f1, 0x0(r30), 0, 0
    lwz r31, 0x15c(r1)
    lwz r30, 0x158(r1)
    lwz r29, 0x154(r1)
    lwz r28, 0x150(r1)
    lwz r0, 0x184(r1)
    mtlr r0
    addi r1, r1, 0x180
    blr
}

asm void fn_801C2198(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    addi r11, r1, 0x110
    stfd f31, 0x120(r1)
    psq_st f31, 0x128(r1), 0, 0
    stfd f30, 0x110(r1)
    psq_st f30, 0x118(r1), 0, 0
    bl _savegpr_24
    lwz r7, 0x4(r3)
    li r0, 0x0
    lfs f30, lbl_8088271C
    addi r26, r1, 0x8c
    stw r0, 0xcc(r1)
    addi r6, r1, 0x74
    lfs f0, 0x0(r5)
    addi r25, r1, 0x80
    stw r0, 0xd0(r1)
    mr r27, r3
    fmuls f7, f0, f30
    lfs f3, 0x4(r5)
    stw r0, 0xd4(r1)
    mr r28, r4
    lfs f0, 0x8(r5)
    fmuls f6, f3, f30
    stw r0, 0xd8(r1)
    fmuls f5, f0, f30
    lfs f4, lbl_808826FC
    mr r29, r5
    stb r0, 0x31(r3)
    mr r3, r7
    addi r31, r7, 0xb0
    lfs f2, 0x530(r7)
    li r30, 0x0
    psq_l f1, 0x528(r7), 0, 0
    psq_st f1, 0x0(r26), 0, 0
    fadds f8, f2, f5
    lwz r24, lbl_8087EE98
    lfs f0, 0x90(r1)
    lfs f3, 0x8c(r1)
    fadds f9, f0, f6
    lfs f0, 0x90(r1)
    fadds f10, f3, f7
    stfs f2, 0x94(r1)
    fsubs f3, f0, f4
    fmr f2, f8
    stfs f10, 0x74(r1)
    stfs f9, 0x78(r1)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r25), 0, 0
    lfs f0, 0x84(r1)
    stfs f7, 0x68(r1)
    fsubs f0, f0, f4
    stfs f6, 0x6c(r1)
    stfs f5, 0x70(r1)
    stfs f8, 0x7c(r1)
    stfs f2, 0x88(r1)
    stfs f3, 0x90(r1)
    stfs f0, 0x84(r1)
    bl fn_80179D44
    oris r7, r3, 0x8000
    mr r3, r24
    mr r5, r26
    mr r6, r25
    addi r4, r1, 0x98
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_801C2198_000009F4
    lwz r0, 0xd4(r1)
    rlwinm r0, r0, 0, 21, 21
    cmplwi r0, 0x400
    beq lbl_fn_801C2198_00000780
    lwz r3, lbl_8087F0A8
    lwz r0, 0x2c0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801C2198_000009F4
lbl_fn_801C2198_00000780:
    lfs f5, 0xc8(r1)
    addi r5, r1, 0x5c
    lfs f4, lbl_808826B8
    addi r4, r1, 0x80
    lfs f0, 0xc4(r1)
    addi r3, r1, 0x44
    lfs f3, 0xc0(r1)
    fmuls f6, f5, f4
    fmuls f7, f0, f4
    lfs f0, 0xa4(r1)
    fmuls f8, f3, f4
    lfs f3, 0xa0(r1)
    fsubs f2, f0, f6
    fsubs f5, f3, f7
    lfs f0, 0x9c(r1)
    stfs f5, 0x60(r1)
    frsp f5, f2
    fsubs f0, f0, f8
    lfs f3, 0x94(r1)
    lfs f4, 0x90(r1)
    stfs f0, 0x5c(r1)
    fsubs f9, f5, f3
    lfs f0, 0x8c(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lfs f5, 0x84(r1)
    lfs f3, 0x80(r1)
    fsubs f4, f5, f4
    stfs f8, 0x50(r1)
    fsubs f0, f3, f0
    stfs f7, 0x54(r1)
    stfs f6, 0x58(r1)
    stfs f2, 0x64(r1)
    stfs f2, 0x88(r1)
    stfs f0, 0x44(r1)
    stfs f4, 0x48(r1)
    stfs f9, 0x4c(r1)
    bl fn_805F9940
    lfs f3, lbl_808826C0
    fmr f31, f1
    lfs f0, lbl_808826DC
    fsubs f3, f1, f3
    lfs f4, lbl_808826A4
    fdivs f0, f3, f0
    fcmpo cr0, f4, f0
    ble lbl_fn_801C2198_0000083C
    b lbl_fn_801C2198_00000840
lbl_fn_801C2198_0000083C:
    fmr f4, f0
lbl_fn_801C2198_00000840:
    lfs f6, lbl_808826A8
    fcmpo cr0, f6, f4
    bge lbl_fn_801C2198_00000850
    b lbl_fn_801C2198_00000874
lbl_fn_801C2198_00000850:
    lfs f3, lbl_808826C0
    lfs f0, lbl_808826DC
    fsubs f3, f1, f3
    lfs f6, lbl_808826A4
    fdivs f0, f3, f0
    fcmpo cr0, f6, f0
    ble lbl_fn_801C2198_00000870
    b lbl_fn_801C2198_00000874
lbl_fn_801C2198_00000870:
    fmr f6, f0
lbl_fn_801C2198_00000874:
    lfs f3, lbl_808826C0
    lfs f0, lbl_808826DC
    fsubs f3, f1, f3
    lfs f5, lbl_8087DA14
    lfs f4, lbl_8087DA10
    lfs f7, lbl_808826A4
    fdivs f0, f3, f0
    fsubs f3, f5, f4
    fcmpo cr0, f7, f0
    fmadds f3, f6, f3, f4
    stfs f3, 0x4(r28)
    ble lbl_fn_801C2198_000008A8
    b lbl_fn_801C2198_000008AC
lbl_fn_801C2198_000008A8:
    fmr f7, f0
lbl_fn_801C2198_000008AC:
    lfs f5, lbl_808826A8
    fcmpo cr0, f5, f7
    bge lbl_fn_801C2198_000008BC
    b lbl_fn_801C2198_000008E0
lbl_fn_801C2198_000008BC:
    lfs f3, lbl_808826C0
    lfs f0, lbl_808826DC
    fsubs f3, f1, f3
    lfs f5, lbl_808826A4
    fdivs f0, f3, f0
    fcmpo cr0, f5, f0
    ble lbl_fn_801C2198_000008DC
    b lbl_fn_801C2198_000008E0
lbl_fn_801C2198_000008DC:
    fmr f5, f0
lbl_fn_801C2198_000008E0:
    lfs f0, lbl_8087DA1C
    addi r3, r27, 0x8
    lfs f4, lbl_8087DA18
    addi r5, r1, 0x80
    lwz r7, 0x4(r27)
    addi r6, r1, 0x38
    fsubs f3, f0, f4
    lfs f0, lbl_808826A4
    mr r4, r3
    fmadds f3, f5, f3, f4
    stfs f3, 0x2c(r27)
    psq_l f1, 0x0(r5), 0, 0
    lfs f2, 0x88(r1)
    stfs f2, 0x28(r27)
    psq_st f1, 0x20(r27), 0, 0
    lfs f3, 0x52c(r7)
    stfs f3, 0x24(r27)
    lfs f6, 0x84(r1)
    lfs f5, 0x90(r1)
    lfs f4, 0x80(r1)
    fsubs f6, f6, f5
    lfs f3, 0x8c(r1)
    lfs f5, 0x88(r1)
    fsubs f4, f4, f3
    lfs f3, 0x94(r1)
    stfs f6, 0x3c(r1)
    fsubs f2, f5, f3
    stfs f4, 0x38(r1)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x40(r1)
    stfs f2, 0x10(r27)
    stfs f0, 0xc(r27)
    bl fn_805F98D0
    lfs f3, lbl_808826C4
    lfs f0, lbl_808826DC
    fsubs f3, f31, f3
    lfs f4, lbl_808826A4
    fdivs f0, f3, f0
    fcmpo cr0, f4, f0
    ble lbl_fn_801C2198_00000988
    b lbl_fn_801C2198_0000098C
lbl_fn_801C2198_00000988:
    fmr f4, f0
lbl_fn_801C2198_0000098C:
    lfs f5, lbl_808826A8
    fcmpo cr0, f5, f4
    bge lbl_fn_801C2198_0000099C
    b lbl_fn_801C2198_000009C0
lbl_fn_801C2198_0000099C:
    lfs f3, lbl_808826C4
    lfs f0, lbl_808826DC
    fsubs f3, f31, f3
    lfs f5, lbl_808826A4
    fdivs f0, f3, f0
    fcmpo cr0, f5, f0
    ble lbl_fn_801C2198_000009BC
    b lbl_fn_801C2198_000009C0
lbl_fn_801C2198_000009BC:
    fmr f5, f0
lbl_fn_801C2198_000009C0:
    lfs f3, lbl_8087DA24
    mr r3, r31
    lfs f4, lbl_8087DA20
    li r4, 0x0
    lfs f0, lbl_80882720
    fsubs f3, f3, f4
    fmadds f3, f5, f3, f4
    stfs f3, 0x38(r27)
    fdivs f0, f0, f3
    stfs f0, 0x238(r31)
    bl fn_80097D7C
    stfs f1, 0x38(r27)
    li r30, 0x1
lbl_fn_801C2198_000009F4:
    lwz r3, 0x4(r27)
    addi r25, r1, 0x8c
    lfs f0, 0x4(r29)
    addi r4, r1, 0x2c
    lfs f2, 0x530(r3)
    addi r26, r1, 0x80
    psq_l f1, 0x528(r3), 0, 0
    fmuls f6, f0, f30
    lfs f3, 0x0(r29)
    psq_st f1, 0x0(r25), 0, 0
    fmuls f7, f3, f30
    lfs f4, 0x8(r29)
    lfs f0, 0x90(r1)
    lfs f3, 0x8c(r1)
    fmuls f5, f4, f30
    fadds f8, f0, f6
    fadds f3, f3, f7
    lfs f0, 0x90(r1)
    stfs f8, 0x30(r1)
    fadds f8, f2, f5
    lfs f4, lbl_808826FC
    stfs f3, 0x2c(r1)
    fadds f3, f0, f4
    lwz r24, lbl_8087EE98
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r26), 0, 0
    lfs f0, 0x84(r1)
    stfs f2, 0x94(r1)
    fmr f2, f8
    fadds f0, f0, f4
    stfs f7, 0x20(r1)
    stfs f6, 0x24(r1)
    stfs f5, 0x28(r1)
    stfs f8, 0x34(r1)
    stfs f2, 0x88(r1)
    stfs f3, 0x90(r1)
    stfs f0, 0x84(r1)
    bl fn_80179D44
    oris r7, r3, 0x8000
    mr r3, r24
    mr r5, r25
    mr r6, r26
    addi r4, r1, 0x98
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_801C2198_00000CF4
    lwz r0, 0xd4(r1)
    rlwinm r0, r0, 0, 21, 21
    cmplwi r0, 0x400
    beq lbl_fn_801C2198_00000AD4
    lwz r3, lbl_8087F0A8
    lwz r0, 0x2c0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801C2198_00000CF4
lbl_fn_801C2198_00000AD4:
    lfs f3, 0xa4(r1)
    addi r3, r1, 0x14
    lfs f0, 0x94(r1)
    lfs f5, 0xa0(r1)
    fsubs f6, f3, f0
    lfs f4, 0x90(r1)
    lfs f3, 0x9c(r1)
    lfs f0, 0x8c(r1)
    fsubs f4, f5, f4
    stfs f6, 0x1c(r1)
    fsubs f0, f3, f0
    stfs f4, 0x18(r1)
    stfs f0, 0x14(r1)
    bl fn_805F9940
    lfs f3, lbl_808826C0
    fmr f31, f1
    lfs f0, lbl_808826DC
    fsubs f3, f1, f3
    lfs f4, lbl_808826A4
    fdivs f0, f3, f0
    fcmpo cr0, f4, f0
    ble lbl_fn_801C2198_00000B30
    b lbl_fn_801C2198_00000B34
lbl_fn_801C2198_00000B30:
    fmr f4, f0
lbl_fn_801C2198_00000B34:
    lfs f6, lbl_808826A8
    fcmpo cr0, f6, f4
    bge lbl_fn_801C2198_00000B44
    b lbl_fn_801C2198_00000B68
lbl_fn_801C2198_00000B44:
    lfs f3, lbl_808826C0
    lfs f0, lbl_808826DC
    fsubs f3, f1, f3
    lfs f6, lbl_808826A4
    fdivs f0, f3, f0
    fcmpo cr0, f6, f0
    ble lbl_fn_801C2198_00000B64
    b lbl_fn_801C2198_00000B68
lbl_fn_801C2198_00000B64:
    fmr f6, f0
lbl_fn_801C2198_00000B68:
    lfs f3, lbl_808826C0
    lfs f0, lbl_808826DC
    fsubs f3, f1, f3
    lfs f5, lbl_8087DA2C
    lfs f4, lbl_8087DA28
    lfs f7, lbl_808826A4
    fdivs f0, f3, f0
    fsubs f3, f5, f4
    fcmpo cr0, f7, f0
    fmadds f3, f6, f3, f4
    stfs f3, 0x4(r28)
    ble lbl_fn_801C2198_00000B9C
    b lbl_fn_801C2198_00000BA0
lbl_fn_801C2198_00000B9C:
    fmr f7, f0
lbl_fn_801C2198_00000BA0:
    lfs f6, lbl_808826A8
    fcmpo cr0, f6, f7
    bge lbl_fn_801C2198_00000BB0
    b lbl_fn_801C2198_00000BD4
lbl_fn_801C2198_00000BB0:
    lfs f3, lbl_808826C0
    lfs f0, lbl_808826DC
    fsubs f3, f1, f3
    lfs f6, lbl_808826A4
    fdivs f0, f3, f0
    fcmpo cr0, f6, f0
    ble lbl_fn_801C2198_00000BD0
    b lbl_fn_801C2198_00000BD4
lbl_fn_801C2198_00000BD0:
    fmr f6, f0
lbl_fn_801C2198_00000BD4:
    lfs f0, lbl_8087DA34
    addi r3, r27, 0x8
    lfs f5, lbl_8087DA30
    addi r5, r1, 0x9c
    lwz r7, 0x4(r27)
    addi r6, r1, 0x8
    fsubs f3, f0, f5
    lfs f4, lbl_808826B0
    lfs f0, lbl_808826A4
    mr r4, r3
    fmadds f3, f6, f3, f5
    stfs f3, 0x2c(r27)
    psq_l f1, 0x0(r5), 0, 0
    lfs f2, 0xa4(r1)
    stfs f2, 0x28(r27)
    psq_st f1, 0x20(r27), 0, 0
    lfs f3, 0x52c(r7)
    fadds f3, f4, f3
    stfs f3, 0x24(r27)
    lfs f6, 0x84(r1)
    lfs f5, 0x90(r1)
    lfs f4, 0x80(r1)
    fsubs f6, f6, f5
    lfs f3, 0x8c(r1)
    lfs f5, 0x88(r1)
    fsubs f4, f4, f3
    lfs f3, 0x94(r1)
    stfs f6, 0xc(r1)
    fsubs f2, f5, f3
    stfs f4, 0x8(r1)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x10(r1)
    stfs f2, 0x10(r27)
    stfs f0, 0xc(r27)
    bl fn_805F98D0
    lfs f3, lbl_808826C4
    lfs f0, lbl_80882724
    fsubs f3, f31, f3
    lfs f4, lbl_808826A4
    fdivs f0, f3, f0
    fcmpo cr0, f4, f0
    ble lbl_fn_801C2198_00000C84
    b lbl_fn_801C2198_00000C88
lbl_fn_801C2198_00000C84:
    fmr f4, f0
lbl_fn_801C2198_00000C88:
    lfs f5, lbl_808826A8
    fcmpo cr0, f5, f4
    bge lbl_fn_801C2198_00000C98
    b lbl_fn_801C2198_00000CBC
lbl_fn_801C2198_00000C98:
    lfs f3, lbl_808826C4
    lfs f0, lbl_80882724
    fsubs f3, f31, f3
    lfs f5, lbl_808826A4
    fdivs f0, f3, f0
    fcmpo cr0, f5, f0
    ble lbl_fn_801C2198_00000CB8
    b lbl_fn_801C2198_00000CBC
lbl_fn_801C2198_00000CB8:
    fmr f5, f0
lbl_fn_801C2198_00000CBC:
    lfs f3, lbl_8087DA3C
    mr r3, r31
    lfs f4, lbl_8087DA38
    li r4, 0x0
    lfs f0, lbl_80882720
    fsubs f3, f3, f4
    fmadds f3, f5, f3, f4
    stfs f3, 0x38(r27)
    fdivs f0, f0, f3
    stfs f0, 0x238(r31)
    bl fn_80097D7C
    li r30, 0x1
    stfs f1, 0x38(r27)
    stb r30, 0x31(r27)
lbl_fn_801C2198_00000CF4:
    psq_l f31, 0x128(r1), 0, 0
    mr r3, r30
    lfd f31, 0x120(r1)
    psq_l f30, 0x118(r1), 0, 0
    lfd f30, 0x110(r1)
    addi r11, r1, 0x110
    bl _restgpr_24
    lwz r0, 0x134(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

asm void fn_801C2870(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    stfd f31, 0x110(r1)
    psq_st f31, 0x118(r1), 0, 0
    stfd f30, 0x100(r1)
    psq_st f30, 0x108(r1), 0, 0
    stw r31, 0xfc(r1)
    stw r30, 0xf8(r1)
    stw r29, 0xf4(r1)
    mr r29, r3
    lwz r5, 0x4(r3)
    lwz r4, lbl_8087EFA8
    lbz r0, 0x30(r3)
    addi r30, r5, 0xb0
    lfs f3, 0x2e8(r5)
    lfs f4, 0x3a4(r4)
    cmpwi r0, 0x0
    lfs f0, 0x34(r3)
    fmadds f4, f4, f3, f0
    stfs f4, 0x34(r3)
    beq lbl_fn_801C2870_00000EC4
    lfs f3, lbl_80882704
    lfs f0, lbl_8088270C
    fsubs f3, f4, f3
    lfs f4, lbl_808826A4
    fmuls f0, f3, f0
    fcmpo cr0, f4, f0
    ble lbl_fn_801C2870_00000D98
    b lbl_fn_801C2870_00000D9C
lbl_fn_801C2870_00000D98:
    fmr f4, f0
lbl_fn_801C2870_00000D9C:
    lfs f5, lbl_808826A8
    fcmpo cr0, f5, f4
    bge lbl_fn_801C2870_00000DAC
    b lbl_fn_801C2870_00000DD4
lbl_fn_801C2870_00000DAC:
    lfs f4, 0x34(r3)
    lfs f3, lbl_80882704
    lfs f0, lbl_8088270C
    fsubs f3, f4, f3
    lfs f5, lbl_808826A4
    fmuls f0, f3, f0
    fcmpo cr0, f5, f0
    ble lbl_fn_801C2870_00000DD0
    b lbl_fn_801C2870_00000DD4
lbl_fn_801C2870_00000DD0:
    fmr f5, f0
lbl_fn_801C2870_00000DD4:
    lfs f3, 0x34(r3)
    lfs f0, lbl_80882704
    lfs f9, lbl_808826A8
    fdivs f0, f3, f0
    fcmpo cr0, f9, f0
    bge lbl_fn_801C2870_00000DF0
    b lbl_fn_801C2870_00000DF4
lbl_fn_801C2870_00000DF0:
    fmr f9, f0
lbl_fn_801C2870_00000DF4:
    lfs f0, lbl_808826AC
    addi r4, r1, 0x74
    lfs f6, lbl_80882728
    fmuls f7, f0, f5
    lfs f5, 0x24(r3)
    lfs f4, 0x18(r3)
    lfs f3, 0x20(r3)
    fsubs f8, f5, f4
    lfs f0, 0x14(r3)
    fmadds f10, f6, f9, f7
    lfs f5, 0x28(r3)
    fsubs f7, f3, f0
    lfs f3, 0x1c(r3)
    fsubs f9, f5, f3
    stfs f7, 0x5c(r1)
    fmuls f5, f7, f10
    lwz r5, 0x4(r3)
    fmuls f6, f8, f10
    stfs f8, 0x60(r1)
    fmuls f7, f9, f10
    stfs f9, 0x64(r1)
    fadds f4, f6, f4
    fadds f0, f5, f0
    stfs f5, 0x50(r1)
    fadds f2, f7, f3
    stfs f0, 0x74(r1)
    stfs f4, 0x78(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x528(r5), 0, 0
    stfs f2, 0x530(r5)
    lbz r0, 0x31(r3)
    stfs f6, 0x54(r1)
    cmpwi r0, 0x0
    stfs f7, 0x58(r1)
    stfs f2, 0x7c(r1)
    beq lbl_fn_801C2870_00000E9C
    lfs f0, lbl_8088272C
    fcmpo cr0, f10, f0
    cror eq, gt, eq
    mfcr r3
    extrwi r3, r3, 1, 2
    b lbl_fn_801C2870_0000112C
lbl_fn_801C2870_00000E9C:
    lfs f30, 0x234(r30)
    mr r3, r30
    li r4, 0x0
    bl fn_80097D7C
    lfs f0, lbl_80882708
    fsubs f0, f1, f0
    fcmpo cr0, f30, f0
    mfcr r3
    extrwi r3, r3, 1, 1
    b lbl_fn_801C2870_0000112C
lbl_fn_801C2870_00000EC4:
    lfs f0, lbl_80882730
    fcmpo cr0, f4, f0
    ble lbl_fn_801C2870_00000EE0
    lfs f3, 0x2c(r3)
    lfs f0, lbl_80882734
    fmuls f0, f3, f0
    stfs f0, 0x2c(r3)
lbl_fn_801C2870_00000EE0:
    lfs f2, 0x10(r3)
    addi r31, r1, 0x68
    psq_l f1, 0x8(r3), 0, 0
    fabs f3, f2
    lfs f0, lbl_80882698
    psq_st f1, 0x0(r31), 0, 0
    frsp f3, f3
    stfs f2, 0x70(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_801C2870_00000F2C
    lfs f3, 0x68(r1)
    lfs f0, lbl_808826A4
    fcmpo cr0, f3, f0
    ble lbl_fn_801C2870_00000F20
    lfs f0, lbl_8088269C
    b lbl_fn_801C2870_00000F24
lbl_fn_801C2870_00000F20:
    lfs f0, lbl_808826A0
lbl_fn_801C2870_00000F24:
    stfs f0, 0x48(r1)
    b lbl_fn_801C2870_00000F40
lbl_fn_801C2870_00000F2C:
    frsp f2, f2
    lfs f1, 0x68(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_801C2870_00000F40:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x80
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808826A4
    addi r4, r1, 0x38
    lfs f30, 0x88(r1)
    mr r5, r4
    lfs f31, 0x84(r1)
    addi r3, r1, 0xb0
    lfs f13, 0x80(r1)
    lfs f12, 0x98(r1)
    lfs f11, 0x94(r1)
    lfs f10, 0x90(r1)
    lfs f9, 0xa8(r1)
    lfs f8, 0xa4(r1)
    lfs f7, 0xa0(r1)
    lfs f6, 0xac(r1)
    lfs f5, 0x9c(r1)
    lfs f4, 0x8c(r1)
    lfs f0, lbl_808826A8
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x70(r1)
    stfs f3, 0xe0(r1)
    stfs f3, 0xe4(r1)
    stfs f3, 0xe8(r1)
    stfs f0, 0xec(r1)
    stfs f13, 0x8(r1)
    stfs f31, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f13, 0xb0(r1)
    stfs f31, 0xb4(r1)
    stfs f30, 0xb8(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xc0(r1)
    stfs f11, 0xc4(r1)
    stfs f12, 0xc8(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0xd0(r1)
    stfs f8, 0xd4(r1)
    stfs f9, 0xd8(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0xbc(r1)
    stfs f5, 0xcc(r1)
    stfs f6, 0xdc(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80882698
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_801C2870_0000105C
    lfs f3, 0x3c(r1)
    lfs f0, lbl_808826A4
    fcmpo cr0, f3, f0
    ble lbl_fn_801C2870_0000104C
    lfs f0, lbl_8088269C
    b lbl_fn_801C2870_00001050
lbl_fn_801C2870_0000104C:
    lfs f0, lbl_808826A0
lbl_fn_801C2870_00001050:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_801C2870_00001070
lbl_fn_801C2870_0000105C:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_801C2870_00001070:
    addi r3, r1, 0x44
    lfs f2, lbl_808826A4
    psq_l f1, 0x0(r3), 0, 0
    mr r4, r31
    psq_st f1, 0x0(r31), 0, 0
    li r5, 0x0
    lfs f1, lbl_808826A8
    stfs f2, 0x70(r1)
    stfs f2, 0x4c(r1)
    lwz r3, 0x4(r29)
    lfs f2, 0x2c(r29)
    bl fn_8013CB68
    lfs f3, 0x234(r30)
    lfs f0, lbl_80882704
    fcmpo cr0, f3, f0
    ble lbl_fn_801C2870_000010BC
    lfs f0, lbl_80882738
    stfs f0, 0x238(r30)
    b lbl_fn_801C2870_00001108
lbl_fn_801C2870_000010BC:
    lfs f0, lbl_8088273C
    fcmpo cr0, f3, f0
    ble lbl_fn_801C2870_00001108
    lwz r3, 0x4(r29)
    lfs f0, lbl_80882740
    lfs f3, 0x578(r3)
    fcmpo cr0, f3, f0
    bge lbl_fn_801C2870_00001100
    lfs f0, 0x238(r30)
    lfs f3, lbl_808826AC
    fsubs f0, f0, f3
    fcmpo cr0, f3, f0
    ble lbl_fn_801C2870_000010F4
    b lbl_fn_801C2870_000010F8
lbl_fn_801C2870_000010F4:
    fmr f3, f0
lbl_fn_801C2870_000010F8:
    stfs f3, 0x238(r30)
    b lbl_fn_801C2870_00001108
lbl_fn_801C2870_00001100:
    lfs f0, lbl_808826A8
    stfs f0, 0x238(r30)
lbl_fn_801C2870_00001108:
    lfs f30, 0x234(r30)
    mr r3, r30
    li r4, 0x0
    bl fn_80097D7C
    lfs f0, lbl_80882708
    fsubs f0, f1, f0
    fcmpo cr0, f30, f0
    mfcr r3
    extrwi r3, r3, 1, 1
lbl_fn_801C2870_0000112C:
    lwz r0, 0x124(r1)
    psq_l f31, 0x118(r1), 0, 0
    lfd f31, 0x110(r1)
    psq_l f30, 0x108(r1), 0, 0
    lfd f30, 0x100(r1)
    lwz r31, 0xfc(r1)
    lwz r30, 0xf8(r1)
    lwz r29, 0xf4(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_801C2CA8(void)
{
    nofralloc
    lwz r4, 0x4(r4)
    psq_l f1, 0x528(r4), 0, 0
    lfs f2, 0x530(r4)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
    blr
}

asm void fn_801C2CC0(void)
{
    nofralloc
    stwu r1, -0x210(r1)
    mflr r0
    stw r0, 0x214(r1)
    stw r31, 0x20c(r1)
    mr r31, r3
    stw r30, 0x208(r1)
    mr r30, r4
    lbz r0, 0x31(r4)
    cmpwi r0, 0x0
    beq lbl_fn_801C2CC0_0000165C
    lwz r5, 0x4(r4)
    lfs f0, lbl_80882744
    lfs f3, 0x52c(r5)
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_801C2CC0_000014A4
    lfs f3, lbl_808826A4
    addi r3, r1, 0x1d0
    lfs f0, lbl_808826A8
    li r4, 0x79
    stfs f3, 0x80(r1)
    stfs f3, 0x84(r1)
    stfs f0, 0x88(r1)
    lfs f1, 0x538(r5)
    bl fn_805F8E70
    addi r4, r1, 0x80
    addi r3, r1, 0x1d0
    mr r5, r4
    bl fn_805F93C0
    lfs f2, 0x88(r1)
    lis r3, lbl_807818F0@ha
    lwzu r7, lbl_807818F0@l(r3)
    addi r10, r1, 0x80
    stfs f2, 0x70(r1)
    li r0, 0x0
    lwz r6, 0x4(r3)
    addi r11, r1, 0x68
    lwz r5, 0x8(r3)
    addi r4, r1, 0x74
    lwz r8, 0x4(r30)
    addi r9, r1, 0x5c
    psq_l f1, 0x0(r10), 0, 0
    addi r3, r1, 0x1c4
    stfs f2, 0x7c(r1)
    frsp f2, f2
    addi r12, r1, 0xd0
    addi r10, r1, 0x194
    stw r0, 0x0(r31)
    stfs f2, 0x64(r1)
    frsp f2, f2
    lbz r0, lbl_8087F0B1
    stfs f2, 0x1cc(r1)
    extsb. r0, r0
    stfs f2, 0xd8(r1)
    frsp f2, f2
    stw r7, 0x8c(r1)
    stw r6, 0x90(r1)
    stw r5, 0x94(r1)
    psq_st f1, 0x0(r11), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stw r8, 0x58(r1)
    psq_st f1, 0x0(r9), 0, 0
    stw r7, 0x10(r1)
    stw r6, 0x14(r1)
    stw r5, 0x18(r1)
    stw r7, 0x4c(r1)
    stw r6, 0x50(r1)
    stw r5, 0x54(r1)
    stw r7, 0x40(r1)
    stw r6, 0x44(r1)
    stw r5, 0x48(r1)
    stw r7, 0x34(r1)
    stw r6, 0x38(r1)
    stw r5, 0x3c(r1)
    stw r7, 0x1b4(r1)
    stw r6, 0x1b8(r1)
    stw r5, 0x1bc(r1)
    stw r8, 0x1c0(r1)
    psq_st f1, 0x0(r3), 0, 0
    stw r7, 0xc0(r1)
    stw r6, 0xc4(r1)
    stw r5, 0xc8(r1)
    stw r8, 0xcc(r1)
    psq_st f1, 0x0(r12), 0, 0
    stw r7, 0x184(r1)
    stw r6, 0x188(r1)
    stw r5, 0x18c(r1)
    stw r8, 0x190(r1)
    psq_st f1, 0x0(r10), 0, 0
    stfs f2, 0x19c(r1)
    bne lbl_fn_801C2CC0_00001360
    frsp f2, f2
    lis r11, lbl_807C7B50@ha
    addi r12, r1, 0xec
    addi r9, r1, 0x140
    addi r10, r1, 0x124
    lis r4, fn_80188A70@ha
    lis r3, fn_80188AA0@ha
    stfs f2, 0xf4(r1)
    li r0, 0x1
    addi r11, r11, lbl_807C7B50@l
    stfs f2, 0x148(r1)
    frsp f2, f2
    addi r4, r4, fn_80188A70@l
    addi r3, r3, fn_80188AA0@l
    stw r7, 0xdc(r1)
    stw r6, 0xe0(r1)
    stw r5, 0xe4(r1)
    stw r8, 0xe8(r1)
    psq_st f1, 0x0(r12), 0, 0
    stw r7, 0x130(r1)
    stw r6, 0x134(r1)
    stw r5, 0x138(r1)
    stw r8, 0x13c(r1)
    psq_st f1, 0x0(r9), 0, 0
    stw r7, 0x114(r1)
    stw r6, 0x118(r1)
    stw r5, 0x11c(r1)
    stw r8, 0x120(r1)
    psq_st f1, 0x0(r10), 0, 0
    stfs f2, 0x12c(r1)
    stw r4, 0x4(r11)
    stw r3, 0x0(r11)
    stb r0, lbl_8087F0B1
lbl_fn_801C2CC0_00001360:
    addi r3, r1, 0x194
    lwz r6, 0x184(r1)
    lwz r5, 0x188(r1)
    addi r8, r1, 0x108
    lwz r4, 0x18c(r1)
    addi r7, r1, 0x178
    lwz r0, 0x190(r1)
    addi r30, r1, 0x168
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r30
    lfs f2, 0x19c(r1)
    stw r6, 0xf8(r1)
    stw r5, 0xfc(r1)
    stw r4, 0x100(r1)
    stw r0, 0x104(r1)
    psq_st f1, 0x0(r8), 0, 0
    stfs f2, 0x110(r1)
    stw r6, 0x168(r1)
    stw r5, 0x16c(r1)
    stw r4, 0x170(r1)
    stw r0, 0x174(r1)
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0x180(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_801C2CC0_0000147C
    lwz r6, 0x168(r1)
    addi r7, r1, 0x15c
    lwz r5, 0x16c(r1)
    li r3, 0x1c
    lwz r4, 0x170(r1)
    lwz r0, 0x174(r1)
    psq_l f1, 0x10(r30), 0, 0
    lfs f2, 0x180(r1)
    stw r6, 0x14c(r1)
    stw r5, 0x150(r1)
    stw r4, 0x154(r1)
    stw r0, 0x158(r1)
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0x164(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_801C2CC0_00001434
    lis r3, __files@ha
    lis r4, lbl_8077CF44@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8077CF44@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801C2CC0_00001434:
    cmpwi r30, 0x0
    beq lbl_fn_801C2CC0_00001470
    lwz r0, 0x14c(r1)
    addi r3, r1, 0x15c
    stw r0, 0x0(r30)
    lwz r0, 0x150(r1)
    stw r0, 0x4(r30)
    lwz r0, 0x154(r1)
    stw r0, 0x8(r30)
    lwz r0, 0x158(r1)
    stw r0, 0xc(r30)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x10(r30), 0, 0
    lfs f2, 0x164(r1)
    stfs f2, 0x18(r30)
lbl_fn_801C2CC0_00001470:
    stw r30, 0x4(r31)
    li r0, 0x1
    b lbl_fn_801C2CC0_00001480
lbl_fn_801C2CC0_0000147C:
    li r0, 0x0
lbl_fn_801C2CC0_00001480:
    cmpwi r0, 0x0
    beq lbl_fn_801C2CC0_00001498
    lis r3, lbl_807C7B50@ha
    addi r3, r3, lbl_807C7B50@l
    stw r3, 0x0(r31)
    b lbl_fn_801C2CC0_00001660
lbl_fn_801C2CC0_00001498:
    li r0, 0x0
    stw r0, 0x0(r31)
    b lbl_fn_801C2CC0_00001660
lbl_fn_801C2CC0_000014A4:
    lis r5, lbl_8073B710@ha
    li r3, 0x3c
    addi r5, r5, lbl_8073B710@l
    li r4, 0x0
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_801C2CC0_000014DC
    lwz r4, 0x4(r30)
    addi r5, r30, 0x8
    addi r6, r30, 0x20
    li r7, 0x1
    bl fn_801C1578
lbl_fn_801C2CC0_000014DC:
    lis r4, lbl_807818FC@ha
    lwzu r6, lbl_807818FC@l(r4)
    lwz r7, 0x4(r30)
    li r0, 0x0
    lwz r5, 0x4(r4)
    lwz r4, 0x8(r4)
    stw r7, 0x8(r1)
    stw r0, 0x0(r31)
    lbz r0, lbl_8087F108
    stw r3, 0xc(r1)
    extsb. r0, r0
    stw r6, 0x28(r1)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r6, 0x1c(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r6, 0x1a0(r1)
    stw r5, 0x1a4(r1)
    stw r4, 0x1a8(r1)
    stw r7, 0x1ac(r1)
    stw r3, 0x1b0(r1)
    bne lbl_fn_801C2CC0_00001560
    lis r6, lbl_807C7C78@ha
    lis r4, fn_801C31C8@ha
    lis r3, fn_801C31F8@ha
    li r0, 0x1
    addi r3, r3, fn_801C31F8@l
    addi r5, r6, lbl_807C7C78@l
    addi r4, r4, fn_801C31C8@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C7C78@l(r6)
    stb r0, lbl_8087F108
lbl_fn_801C2CC0_00001560:
    lwz r7, 0x1a0(r1)
    addi r3, r1, 0xac
    lwz r6, 0x1a4(r1)
    lwz r5, 0x1a8(r1)
    lwz r4, 0x1ac(r1)
    lwz r0, 0x1b0(r1)
    stw r7, 0xac(r1)
    stw r6, 0xb0(r1)
    stw r5, 0xb4(r1)
    stw r4, 0xb8(r1)
    stw r0, 0xbc(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_801C2CC0_00001634
    lwz r7, 0xac(r1)
    li r3, 0x14
    lwz r6, 0xb0(r1)
    lwz r5, 0xb4(r1)
    lwz r4, 0xb8(r1)
    lwz r0, 0xbc(r1)
    stw r7, 0x98(r1)
    stw r6, 0x9c(r1)
    stw r5, 0xa0(r1)
    stw r4, 0xa4(r1)
    stw r0, 0xa8(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_801C2CC0_000015F8
    lis r3, __files@ha
    lis r4, lbl_80781B70@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80781B70@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801C2CC0_000015F8:
    cmpwi r30, 0x0
    beq lbl_fn_801C2CC0_00001628
    lwz r0, 0x98(r1)
    stw r0, 0x0(r30)
    lwz r0, 0x9c(r1)
    stw r0, 0x4(r30)
    lwz r0, 0xa0(r1)
    stw r0, 0x8(r30)
    lwz r0, 0xa4(r1)
    stw r0, 0xc(r30)
    lwz r0, 0xa8(r1)
    stw r0, 0x10(r30)
lbl_fn_801C2CC0_00001628:
    stw r30, 0x4(r31)
    li r0, 0x1
    b lbl_fn_801C2CC0_00001638
lbl_fn_801C2CC0_00001634:
    li r0, 0x0
lbl_fn_801C2CC0_00001638:
    cmpwi r0, 0x0
    beq lbl_fn_801C2CC0_00001650
    lis r3, lbl_807C7C78@ha
    addi r3, r3, lbl_807C7C78@l
    stw r3, 0x0(r31)
    b lbl_fn_801C2CC0_00001660
lbl_fn_801C2CC0_00001650:
    li r0, 0x0
    stw r0, 0x0(r31)
    b lbl_fn_801C2CC0_00001660
lbl_fn_801C2CC0_0000165C:
    bl fn_80192758
lbl_fn_801C2CC0_00001660:
    lwz r0, 0x214(r1)
    lwz r31, 0x20c(r1)
    lwz r30, 0x208(r1)
    mtlr r0
    addi r1, r1, 0x210
    blr
}

asm void fn_801C31C8(void)
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

asm void fn_801C31F8(void)
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
    bne lbl_fn_801C31F8_000016E0
    lis r3, lbl_80781908@ha
    addi r3, r3, lbl_80781908@l
    stw r3, 0x0(r4)
    b lbl_fn_801C31F8_000017A8
lbl_fn_801C31F8_000016E0:
    cmpwi r5, 0x0
    bne lbl_fn_801C31F8_00001758
    lwz r31, 0x0(r3)
    li r3, 0x14
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_801C31F8_00001720
    lis r3, __files@ha
    lis r4, lbl_80781B70@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80781B70@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801C31F8_00001720:
    cmpwi r30, 0x0
    beq lbl_fn_801C31F8_00001750
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
lbl_fn_801C31F8_00001750:
    stw r30, 0x0(r29)
    b lbl_fn_801C31F8_000017A8
lbl_fn_801C31F8_00001758:
    cmpwi r5, 0x1
    bne lbl_fn_801C31F8_00001774
    lwz r3, 0x0(r4)
    bl dtor_80084684
    li r0, 0x0
    stw r0, 0x0(r29)
    b lbl_fn_801C31F8_000017A8
lbl_fn_801C31F8_00001774:
    lwz r5, 0x0(r4)
    lis r3, lbl_80781908@ha
    lwz r4, lbl_80781908@l(r3)
    lwz r3, 0x0(r5)
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_801C31F8_000017A0
    lwz r0, 0x0(r30)
    stw r0, 0x0(r29)
    b lbl_fn_801C31F8_000017A8
lbl_fn_801C31F8_000017A0:
    li r0, 0x0
    stw r0, 0x0(r29)
lbl_fn_801C31F8_000017A8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801C3314(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801C3314_000017EC
    cmpwi r4, 0x0
    ble lbl_fn_801C3314_000017EC
    bl dtor_80084684
lbl_fn_801C3314_000017EC:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801C3354(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801C3354_0000182C
    cmpwi r4, 0x0
    ble lbl_fn_801C3354_0000182C
    bl dtor_80084684
lbl_fn_801C3354_0000182C:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801C3394(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801C3394_0000186C
    cmpwi r4, 0x0
    ble lbl_fn_801C3394_0000186C
    bl dtor_80084684
lbl_fn_801C3394_0000186C:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801C33D4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801C33D4_000018AC
    cmpwi r4, 0x0
    ble lbl_fn_801C33D4_000018AC
    bl dtor_80084684
lbl_fn_801C33D4_000018AC:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801C3414(void)
{
    nofralloc
    lis r5, lbl_80781B90@ha
    stw r4, 0x4(r3)
    addi r5, r5, lbl_80781B90@l
    lfs f0, lbl_80882748
    stw r5, 0x0(r3)
    li r0, 0x0
    psq_l f1, 0x528(r4), 0, 0
    lfs f2, 0x530(r4)
    stfs f2, 0x10(r3)
    psq_st f1, 0x8(r3), 0, 0
    psq_l f1, 0x528(r4), 0, 0
    lfs f2, 0x530(r4)
    stfs f2, 0x1c(r3)
    psq_st f1, 0x14(r3), 0, 0
    stfs f0, 0x20(r3)
    stb r0, 0x24(r3)
    blr
}

asm void fn_801C3458(void)
{
    nofralloc
    lbz r0, 0x24(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801C3458_00001918
    b fn_801C3944
lbl_fn_801C3458_00001918:
    b fn_801C346C
}

asm void fn_801C346C(void)
{
    nofralloc
    stwu r1, -0x1c0(r1)
    mflr r0
    stw r0, 0x1c4(r1)
    stfd f31, 0x1b0(r1)
    psq_st f31, 0x1b8(r1), 0, 0
    fmr f31, f3
    stfd f30, 0x1a0(r1)
    psq_st f30, 0x1a8(r1), 0, 0
    fmr f30, f2
    stfd f29, 0x190(r1)
    psq_st f29, 0x198(r1), 0, 0
    fmr f29, f1
    stfd f28, 0x180(r1)
    psq_st f28, 0x188(r1), 0, 0
    stfd f27, 0x170(r1)
    psq_st f27, 0x178(r1), 0, 0
    stw r31, 0x16c(r1)
    mr r31, r4
    stw r30, 0x168(r1)
    mr r30, r3
    addi r3, r1, 0xf8
    bl fn_80057A64
    bl fn_801156BC
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_800A56A8
    fneg f1, f1
    lfs f0, lbl_80882748
    stfs f0, 0xfc(r1)
    stfs f1, 0xf8(r1)
    bl fn_801156BC
    li r4, 0x0
    li r5, 0x1
    li r6, 0x0
    bl fn_800A56A8
    fneg f0, f1
    addi r3, r1, 0xf8
    stfs f0, 0x100(r1)
    bl fn_8000D3A4
    fmr f28, f1
    lwz r3, 0x4(r30)
    bl fn_8012A1B8
    mr r4, r3
    addi r3, r1, 0xec
    bl fn_8001047C
    lfs f0, lbl_8088274C
    fcmpo cr0, f28, f0
    cror eq, gt, eq
    bne lbl_fn_801C346C_00001D78
    bl fn_8008B964
    bl fn_800F7258
    bl fn_80116E6C
    lfs f27, 0x4(r3)
    addi r3, r1, 0xb0
    addi r4, r1, 0xf8
    bl fn_80011034
    addi r3, r1, 0xec
    addi r4, r1, 0xb0
    bl fn_8000D124
    lfs f0, lbl_8088274C
    lfs f2, 0xf0(r1)
    fsubs f1, f28, f0
    lfs f0, lbl_80882750
    fsubs f2, f27, f2
    lfs f3, lbl_80882754
    fdivs f0, f1, f0
    stfs f2, 0xf0(r1)
    fmuls f0, f0, f0
    fcmpo cr0, f3, f0
    bge lbl_fn_801C346C_00001A3C
    b lbl_fn_801C346C_00001A40
lbl_fn_801C346C_00001A3C:
    fmr f3, f0
lbl_fn_801C346C_00001A40:
    lfs f2, 0x20(r30)
    lfs f1, lbl_80882758
    fcmpo cr0, f2, f1
    bge lbl_fn_801C346C_00001A68
    lfs f0, lbl_8088274C
    fadds f0, f2, f0
    stfs f0, 0x20(r30)
    fcmpo cr0, f0, f1
    ble lbl_fn_801C346C_00001A68
    stfs f1, 0x20(r30)
lbl_fn_801C346C_00001A68:
    lfs f0, 0x20(r30)
    addi r3, r1, 0xe0
    lfs f1, lbl_80882748
    fmuls f3, f3, f0
    fmr f2, f1
    bl fn_8000D114
    lfs f1, 0xf0(r1)
    addi r3, r1, 0x138
    bl fn_8013A13C
    addi r3, r1, 0xe0
    addi r4, r1, 0x138
    bl fn_80011410
    addi r3, r1, 0xd4
    addi r4, r30, 0x8
    addi r5, r1, 0xe0
    bl fn_80013410
    addi r3, r1, 0xd4
    addi r4, r30, 0x14
    bl fn_80013484
    addi r3, r1, 0xd4
    bl fn_8000D3A4
    fcmpo cr0, f1, f29
    ble lbl_fn_801C346C_00001AD4
    addi r3, r30, 0x8
    addi r4, r1, 0xe0
    bl fn_80012C88
    b lbl_fn_801C346C_00001B40
lbl_fn_801C346C_00001AD4:
    addi r3, r1, 0x98
    addi r4, r30, 0x8
    addi r5, r1, 0xe0
    bl fn_80013410
    addi r3, r1, 0xa4
    addi r4, r1, 0x98
    addi r5, r30, 0x14
    bl fn_80013338
    addi r3, r1, 0xe0
    addi r4, r1, 0xa4
    bl fn_8000D124
    lfs f0, lbl_80882748
    addi r3, r1, 0xe0
    stfs f0, 0xe4(r1)
    bl fn_800F7FF0
    lfs f0, lbl_8088275C
    addi r3, r1, 0x80
    addi r4, r1, 0xe0
    fadds f1, f0, f29
    bl fn_800F72CC
    addi r3, r1, 0x8c
    addi r4, r1, 0x80
    addi r5, r30, 0x14
    bl fn_80013410
    addi r3, r30, 0x8
    addi r4, r1, 0x8c
    bl fn_8000D124
lbl_fn_801C346C_00001B40:
    lfs f0, 0x18(r30)
    cmpwi r31, 0x0
    stfs f0, 0xc(r30)
    beq lbl_fn_801C346C_00001B84
    mr r4, r31
    addi r3, r1, 0x74
    addi r5, r30, 0x8
    bl fn_80013338
    addi r3, r1, 0x74
    bl fn_801C3910
    lfs f0, 0xc(r31)
    fcmpo cr0, f1, f0
    bge lbl_fn_801C346C_00001B84
    lfs f1, 0xc(r30)
    lfs f0, 0x10(r31)
    fadds f0, f1, f0
    stfs f0, 0xc(r30)
lbl_fn_801C346C_00001B84:
    addi r3, r1, 0x68
    addi r4, r30, 0x8
    addi r5, r30, 0x14
    bl fn_80013338
    addi r3, r1, 0xe0
    addi r4, r1, 0x68
    bl fn_8000D124
    addi r3, r1, 0xe0
    bl fn_8000D3A4
    fcmpo cr0, f30, f1
    bge lbl_fn_801C346C_00001BE4
    addi r3, r1, 0xe0
    bl fn_800F7FF0
    fmr f1, f30
    addi r3, r1, 0x50
    addi r4, r1, 0xe0
    bl fn_800F72CC
    addi r3, r1, 0x5c
    addi r4, r30, 0x14
    addi r5, r1, 0x50
    bl fn_80013410
    addi r3, r30, 0x8
    addi r4, r1, 0x5c
    bl fn_8000D124
lbl_fn_801C346C_00001BE4:
    addi r3, r1, 0x44
    addi r4, r30, 0x8
    addi r5, r30, 0x14
    bl fn_80013338
    addi r3, r1, 0xe0
    addi r4, r1, 0x44
    bl fn_8000D124
    addi r3, r1, 0xe0
    bl fn_8000D3A4
    lfs f0, lbl_80882748
    fmr f30, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_801C346C_00001D40
    addi r3, r1, 0xe0
    bl fn_800F7FF0
    lwz r4, 0x4(r30)
    addi r3, r1, 0xc8
    bl fn_8014052C
    lfs f0, lbl_80882748
    fcmpo cr0, f31, f0
    bge lbl_fn_801C346C_00001C50
    addi r3, r1, 0x38
    addi r4, r1, 0xc8
    bl fn_8013C3B4
    addi r3, r1, 0xc8
    addi r4, r1, 0x38
    bl fn_8000D124
lbl_fn_801C346C_00001C50:
    addi r3, r1, 0xc8
    addi r4, r1, 0xe0
    bl fn_801A03E8
    lfs f0, lbl_80882760
    fmr f29, f1
    fmuls f1, f0, f31
    bl fn_80013404
    bl fn_801C1060
    fcmpo cr0, f29, f1
    bge lbl_fn_801C346C_00001D40
    addi r3, r1, 0x2c
    addi r4, r1, 0xe0
    bl fn_80011034
    lfs f27, 0x30(r1)
    addi r3, r1, 0x20
    addi r4, r1, 0xc8
    bl fn_80011034
    lfs f28, 0x24(r1)
    fsubs f1, f27, f28
    bl fn_800133B0
    lfs f0, lbl_80882748
    fmr f29, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_801C346C_00001CD4
    lfs f0, lbl_80882760
    fmuls f1, f0, f31
    bl fn_80013404
    lfs f0, lbl_80882760
    fadds f28, f28, f1
    fmuls f1, f0, f31
    bl fn_80013404
    fsubs f1, f29, f1
    b lbl_fn_801C346C_00001CF4
lbl_fn_801C346C_00001CD4:
    lfs f0, lbl_80882760
    fmuls f1, f0, f31
    bl fn_80013404
    lfs f0, lbl_80882760
    fsubs f28, f28, f1
    fmuls f1, f0, f31
    bl fn_80013404
    fadds f1, f29, f1
lbl_fn_801C346C_00001CF4:
    bl fn_801C1060
    fmuls f3, f30, f1
    lfs f1, lbl_80882748
    addi r3, r1, 0xe0
    fmr f2, f1
    bl fn_80057A68
    fmr f1, f28
    addi r3, r1, 0x108
    bl fn_8013A13C
    addi r3, r1, 0xe0
    addi r4, r1, 0x108
    bl fn_80011410
    addi r3, r1, 0x14
    addi r4, r30, 0x14
    addi r5, r1, 0xe0
    bl fn_80013410
    addi r3, r30, 0x8
    addi r4, r1, 0x14
    bl fn_8000D124
lbl_fn_801C346C_00001D40:
    lwz r3, 0x4(r30)
    bl fn_8012A1B8
    mr r4, r3
    addi r3, r1, 0xbc
    bl fn_8001047C
    addi r3, r1, 0x8
    addi r4, r1, 0xe0
    bl fn_80011034
    lfs f0, 0xc(r1)
    addi r4, r1, 0xbc
    stfs f0, 0xc0(r1)
    lwz r3, 0x4(r30)
    bl fn_801C0738
    b lbl_fn_801C346C_00001D80
lbl_fn_801C346C_00001D78:
    lfs f0, lbl_80882748
    stfs f0, 0x20(r30)
lbl_fn_801C346C_00001D80:
    lwz r0, 0x1c4(r1)
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
    lwz r31, 0x16c(r1)
    lwz r30, 0x168(r1)
    mtlr r0
    addi r1, r1, 0x1c0
    blr
}
