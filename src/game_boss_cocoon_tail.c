#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void fn_8000D124(void);
extern void fn_8000D3A4(void);
extern void fn_8001047C(void);
extern void fn_80011034(void);
extern void fn_80011220(void);
extern void fn_80013338(void);
extern void fn_8004ECC0(void);
extern void fn_8004ED34(void);
extern void fn_80057A64(void);
extern void fn_80063D3C(void);
extern void fn_80097C08(void);
extern void fn_80097D40(void);
extern void fn_80097D7C(void);
extern void fn_800A08D4(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_800F7FD8(void);
extern void fn_800F8548(void);
extern void fn_800F8C6C(void);
extern void fn_80107A68(void);
extern void fn_8012A1B8(void);
extern void fn_8012A288(void);
extern void fn_8013C38C(void);
extern void fn_8013C480(void);
extern void fn_801404F8(void);
extern void fn_80144710(void);
extern void fn_8016E970(void);
extern void fn_80170A20(void);
extern void fn_801765D8(void);
extern void fn_80219E6C(void);
extern void fn_80239DAC(void);
extern void fn_80279788(void);
extern void fn_80279790(void);
extern void fn_802797A0(void);
extern void fn_802797D4(void);
extern void fn_802A7910(void);
extern void fn_802A7964(void);
extern void fn_80370AE4(void);
extern void fn_80461838(void);
extern void fn_80466974(void);
extern void fn_80466A04(void);
extern void fn_80466AE4(void);
extern void fn_80466CA4(void);
extern void fn_804672CC(void);
extern void fn_804678F4(void);
extern void fn_80467C18(void);
extern void fn_80467F50(void);
extern void fn_80468B68(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_80682428(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);
extern void fn_80695AD0(void);

/* External data declarations */
extern u8 lbl_80755090[];
extern u8 lbl_807550A0[];
extern u8 lbl_80755188[];
extern u8 lbl_80766768[];
extern u8 lbl_8078F96C[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F408;
extern u32 lbl_8087F430;
extern u32 lbl_80886D60;
extern u32 lbl_80886D70;
extern u32 lbl_80886D7C;
extern u32 lbl_80886D80;
extern u32 lbl_80886D84;
extern u32 lbl_80886D88;
extern u32 lbl_80886D8C;
extern u32 lbl_80886D90;
extern u32 lbl_80886D94;
extern u32 lbl_80886D98;
extern u32 lbl_80886D9C;
extern u32 lbl_80886DA4;
extern u32 lbl_80886DA8;
extern u32 lbl_80886DAC;
extern u32 lbl_80886DB8;
extern u32 lbl_80886DE4;
extern u32 lbl_80886E04;
extern u32 lbl_80886E08;
extern u32 lbl_80886E0C;
extern u32 lbl_80886E10;
extern u32 lbl_80886E14;
extern u32 lbl_80886E18;
extern u32 lbl_80886E1C;
extern u32 lbl_80886E20;
extern u32 lbl_80886E24;
extern u32 lbl_80886E28;
extern u32 lbl_80886E2C;
extern u32 lbl_80886E30;
extern u32 lbl_80886E34;
extern u32 lbl_80886E38;
extern u32 lbl_80886E3C;

/* Function declarations */
void fn_804628B4(void);
void fn_80462CCC(void);
void fn_80463174(void);
void fn_804635A4(void);
void fn_804635AC(void);
void fn_804635B4(void);
void fn_80463610(void);
void fn_804638A4(void);
void fn_80463C58(void);
void fn_80463DCC(void);
void fn_80463F20(void);

asm void fn_804628B4(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stfd f31, 0x70(r1)
    psq_st f31, 0x78(r1), 0, 0
    stfd f30, 0x60(r1)
    psq_st f30, 0x68(r1), 0, 0
    stfd f29, 0x50(r1)
    psq_st f29, 0x58(r1), 0, 0
    stfd f28, 0x40(r1)
    psq_st f28, 0x48(r1), 0, 0
    stw r31, 0x3c(r1)
    mr r31, r3
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 25
    bne lbl_fn_804628B4_000003E4
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_804628B4_000000D8
    lwz r0, 0xf80(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804628B4_00000078
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x20(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x24(r1)
    stw r0, 0x28(r1)
    b lbl_fn_804628B4_00000094
lbl_fn_804628B4_00000078:
    lis r5, lbl_8078F96C@ha
    lwzu r4, lbl_8078F96C@l(r5)
    stw r4, 0x20(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x24(r1)
    stw r0, 0x28(r1)
lbl_fn_804628B4_00000094:
    lwz r5, 0x20(r1)
    addi r3, r1, 0x14
    lwz r4, 0x24(r1)
    lwz r0, 0x28(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_804628B4_000000D8
    lwz r3, 0xf80(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_804628B4_000003E4
lbl_fn_804628B4_000000D8:
    lwz r3, 0x55c(r31)
    cmpwi r3, 0x9
    beq lbl_fn_804628B4_000003E4
    lwz r0, 0x12a4(r31)
    extrwi. r0, r0, 1, 29
    beq lbl_fn_804628B4_000000F4
    b lbl_fn_804628B4_000003E4
lbl_fn_804628B4_000000F4:
    cmpwi r3, 0x2
    bne lbl_fn_804628B4_0000011C
    lha r3, 0xd3a(r31)
    subi r0, r3, 0x14
    clrlwi r0, r0, 16
    cmplwi r0, 0x2
    bgt lbl_fn_804628B4_0000011C
    lhz r0, 0xd38(r31)
    extrwi. r0, r0, 1, 17
    beq lbl_fn_804628B4_000003E4
lbl_fn_804628B4_0000011C:
    lwz r5, lbl_8087EFA8
    addi r3, r31, 0xb0
    lwz r4, 0x488(r31)
    lfs f29, 0x3a4(r5)
    bl fn_80097D40
    cmpwi r3, 0x0
    beq lbl_fn_804628B4_00000140
    bl fn_800A08D4
    b lbl_fn_804628B4_00000144
lbl_fn_804628B4_00000140:
    lfs f1, lbl_80886DB8
lbl_fn_804628B4_00000144:
    lfs f0, lbl_80886D60
    fcmpu cr0, f0, f1
    lwz r4, 0x490(r31)
    addi r3, r31, 0xb0
    bl fn_80097D40
    cmpwi r3, 0x0
    beq lbl_fn_804628B4_00000168
    bl fn_800A08D4
    b lbl_fn_804628B4_0000016C
lbl_fn_804628B4_00000168:
    lfs f1, lbl_80886DB8
lbl_fn_804628B4_0000016C:
    lfs f0, lbl_80886D60
    fcmpu cr0, f0, f1
    lfs f0, 0x570(r31)
    lfs f2, 0x500(r31)
    fdivs f1, f0, f29
    lfs f0, 0x508(r31)
    fcmpo cr0, f1, f2
    bge lbl_fn_804628B4_0000019C
    fdivs f31, f1, f2
    lfs f30, lbl_80886D8C
    lfs f29, lbl_80886D60
    b lbl_fn_804628B4_000001DC
lbl_fn_804628B4_0000019C:
    fcmpo cr0, f1, f0
    bge lbl_fn_804628B4_000001C0
    fsubs f1, f1, f2
    lfs f31, lbl_80886D8C
    fsubs f0, f0, f2
    lfs f29, lbl_80886D60
    fdivs f0, f1, f0
    fadds f30, f31, f0
    b lbl_fn_804628B4_000001DC
lbl_fn_804628B4_000001C0:
    fdivs f1, f1, f0
    lfs f2, lbl_80886D8C
    lfs f0, lbl_80886D90
    lfs f31, lbl_80886DA4
    lfs f30, lbl_80886D60
    fsubs f1, f1, f2
    fmadds f29, f0, f1, f2
lbl_fn_804628B4_000001DC:
    lwz r4, lbl_8087EFB4
    addi r3, r1, 0x8
    lfs f0, 0x530(r31)
    lfs f1, 0x114(r4)
    lfs f3, 0x110(r4)
    fsubs f4, f1, f0
    lfs f2, 0x52c(r31)
    lfs f1, 0x10c(r4)
    lfs f0, 0x528(r31)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f4, 0x10(r1)
    bl fn_805F9920
    lfs f0, lbl_80886E04
    fcmpo cr0, f1, f0
    ble lbl_fn_804628B4_000002D4
    lfs f0, lbl_80886D94
    li r0, 0x1
    lfs f1, lbl_80886D8C
    fcmpo cr0, f31, f0
    stw r0, 0x3fc(r31)
    stfs f1, 0x2fc(r31)
    bge lbl_fn_804628B4_00000270
    lwz r5, 0x484(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80886D60
    li r4, 0x0
    lfs f2, lbl_80886D90
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80886D8C
    stfs f0, 0x2e8(r31)
    b lbl_fn_804628B4_000003E4
lbl_fn_804628B4_00000270:
    lfs f0, lbl_80886D98
    fcmpo cr0, f31, f0
    bge lbl_fn_804628B4_000002A8
    lwz r5, 0x488(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80886D60
    li r4, 0x0
    lfs f2, lbl_80886D90
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    stfs f30, 0x2e8(r31)
    b lbl_fn_804628B4_000003E4
lbl_fn_804628B4_000002A8:
    lwz r5, 0x490(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80886D60
    li r4, 0x0
    lfs f2, lbl_80886D90
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    stfs f29, 0x2e8(r31)
    b lbl_fn_804628B4_000003E4
lbl_fn_804628B4_000002D4:
    lfs f1, lbl_80886D8C
    li r0, 0x3
    lfs f0, lbl_80886D60
    fsubs f28, f1, f31
    stw r0, 0x3fc(r31)
    fcmpo cr0, f28, f0
    bge lbl_fn_804628B4_000002F8
    fmr f28, f0
    b lbl_fn_804628B4_00000304
lbl_fn_804628B4_000002F8:
    fcmpo cr0, f28, f1
    ble lbl_fn_804628B4_00000304
    fmr f28, f1
lbl_fn_804628B4_00000304:
    lwz r5, 0x484(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80886D60
    li r4, 0x0
    lfs f2, lbl_80886D90
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f2, lbl_80886D8C
    stfs f28, 0x2fc(r31)
    fsubs f1, f2, f31
    lfs f0, lbl_80886D60
    stfs f2, 0x2e8(r31)
    fabs f1, f1
    frsp f1, f1
    fsubs f28, f2, f1
    fcmpo cr0, f28, f0
    bge lbl_fn_804628B4_00000358
    fmr f28, f0
    b lbl_fn_804628B4_00000364
lbl_fn_804628B4_00000358:
    fcmpo cr0, f28, f2
    ble lbl_fn_804628B4_00000364
    fmr f28, f2
lbl_fn_804628B4_00000364:
    lwz r5, 0x488(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80886D60
    li r4, 0x1
    lfs f2, lbl_80886D90
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f1, lbl_80886D8C
    lfs f0, lbl_80886D60
    fsubs f31, f31, f1
    stfs f30, 0x318(r31)
    stfs f28, 0x32c(r31)
    fcmpo cr0, f31, f0
    bge lbl_fn_804628B4_000003AC
    fmr f31, f0
    b lbl_fn_804628B4_000003B8
lbl_fn_804628B4_000003AC:
    fcmpo cr0, f31, f1
    ble lbl_fn_804628B4_000003B8
    fmr f31, f1
lbl_fn_804628B4_000003B8:
    lwz r5, 0x490(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80886D60
    li r4, 0x2
    lfs f2, lbl_80886D90
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    stfs f29, 0x348(r31)
    stfs f31, 0x35c(r31)
lbl_fn_804628B4_000003E4:
    lwz r0, 0x84(r1)
    psq_l f31, 0x78(r1), 0, 0
    lfd f31, 0x70(r1)
    psq_l f30, 0x68(r1), 0, 0
    lfd f30, 0x60(r1)
    psq_l f29, 0x58(r1), 0, 0
    lfd f29, 0x50(r1)
    psq_l f28, 0x48(r1), 0, 0
    lfd f28, 0x40(r1)
    lwz r31, 0x3c(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_80462CCC(void)
{
    nofralloc
    stwu r1, -0x330(r1)
    mflr r0
    stw r0, 0x334(r1)
    stw r31, 0x32c(r1)
    stw r30, 0x328(r1)
    mr r30, r5
    stw r29, 0x324(r1)
    mr r29, r4
    stw r28, 0x320(r1)
    mr r28, r3
    addi r3, r3, 0x10d8
    bl fn_8012A288
    cmpwi r3, 0x0
    bne lbl_fn_80462CCC_000008A0
    lwz r30, 0x10(r30)
    lis r31, lbl_80755188@ha
    addi r31, r31, lbl_80755188@l
    mr r3, r30
    addi r4, r31, 0xb1
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80462CCC_000004EC
    lwz r0, 0x648(r28)
    cmpwi r0, 0x0
    bne lbl_fn_80462CCC_000008A0
    lfs f9, 0x2c(r29)
    addi r3, r1, 0x2e8
    lfs f10, 0x1c(r29)
    li r4, 0x7a
    lfs f0, lbl_80886D60
    lfs f11, 0xc(r29)
    stfs f0, 0x1c(r29)
    lfs f8, lbl_80886DE4
    stfs f0, 0xc(r29)
    stfs f0, 0x2c(r29)
    lfs f7, 0x584(r28)
    lfs f0, 0x580(r28)
    stfs f11, 0x38(r1)
    fnmsubs f1, f8, f7, f0
    stfs f10, 0x3c(r1)
    stfs f9, 0x40(r1)
    bl fn_805F8E70
    mr r4, r29
    mr r5, r29
    addi r3, r1, 0x2e8
    bl fn_805F89F0
    lfs f8, 0x38(r1)
    lfs f7, 0x3c(r1)
    lfs f0, 0x40(r1)
    stfs f8, 0xc(r29)
    stfs f7, 0x1c(r29)
    stfs f0, 0x2c(r29)
    b lbl_fn_80462CCC_000008A0
lbl_fn_80462CCC_000004EC:
    mr r3, r30
    addi r4, r31, 0xb6
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80462CCC_000006C8
    lwz r0, 0x55c(r28)
    cmpwi r0, 0x8
    beq lbl_fn_80462CCC_000008A0
    lfs f10, 0x2c(r29)
    addi r31, r1, 0x2b8
    lfs f9, lbl_80886D60
    lfs f11, 0x1c(r29)
    lfs f12, 0xc(r29)
    stfs f9, 0x1c(r29)
    lfs f8, lbl_80886D90
    stfs f9, 0xc(r29)
    lfs f0, lbl_80886D8C
    stfs f9, 0x2c(r29)
    lfs f7, 0x15d0(r28)
    stfs f12, 0x2c(r1)
    fmuls f1, f8, f7
    stfs f11, 0x30(r1)
    fcmpu cr0, f9, f1
    stfs f10, 0x34(r1)
    stfs f7, 0x14(r1)
    stfs f9, 0x18(r1)
    stfs f1, 0x1c(r1)
    stfs f9, 0x2e4(r1)
    stfs f9, 0x2dc(r1)
    stfs f9, 0x2d8(r1)
    stfs f9, 0x2d4(r1)
    stfs f9, 0x2d0(r1)
    stfs f9, 0x2c8(r1)
    stfs f9, 0x2c4(r1)
    stfs f9, 0x2c0(r1)
    stfs f9, 0x2bc(r1)
    stfs f0, 0x2e0(r1)
    stfs f0, 0x2cc(r1)
    stfs f0, 0x2b8(r1)
    beq lbl_fn_80462CCC_000005DC
    addi r3, r1, 0x228
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0x228
    addi r5, r1, 0x258
    bl fn_805F89F0
    addi r3, r1, 0x258
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_80462CCC_000005DC:
    lfs f0, lbl_80886D60
    lfs f1, 0x18(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_80462CCC_0000063C
    addi r3, r1, 0x1c8
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0x1c8
    addi r5, r1, 0x1f8
    bl fn_805F89F0
    addi r3, r1, 0x1f8
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_80462CCC_0000063C:
    lfs f0, lbl_80886D60
    lfs f1, 0x14(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_80462CCC_0000069C
    addi r3, r1, 0x168
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0x168
    addi r5, r1, 0x198
    bl fn_805F89F0
    addi r3, r1, 0x198
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_80462CCC_0000069C:
    mr r4, r29
    mr r5, r29
    addi r3, r1, 0x2b8
    bl fn_805F89F0
    lfs f8, 0x2c(r1)
    lfs f7, 0x30(r1)
    lfs f0, 0x34(r1)
    stfs f8, 0xc(r29)
    stfs f7, 0x1c(r29)
    stfs f0, 0x2c(r29)
    b lbl_fn_80462CCC_000008A0
lbl_fn_80462CCC_000006C8:
    mr r3, r30
    addi r4, r31, 0xbc
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80462CCC_000008A0
    lwz r0, 0x55c(r28)
    cmpwi r0, 0x8
    beq lbl_fn_80462CCC_000008A0
    lfs f10, 0x2c(r29)
    addi r31, r1, 0x288
    lfs f9, lbl_80886D60
    lfs f11, 0x1c(r29)
    lfs f12, 0xc(r29)
    stfs f9, 0x1c(r29)
    lfs f8, lbl_80886D70
    stfs f9, 0xc(r29)
    lfs f0, lbl_80886D8C
    stfs f9, 0x2c(r29)
    lfs f7, 0x15d0(r28)
    stfs f12, 0x20(r1)
    fmuls f1, f8, f7
    stfs f11, 0x24(r1)
    fcmpu cr0, f9, f1
    stfs f10, 0x28(r1)
    stfs f9, 0x8(r1)
    stfs f9, 0xc(r1)
    stfs f1, 0x10(r1)
    stfs f9, 0x2b4(r1)
    stfs f9, 0x2ac(r1)
    stfs f9, 0x2a8(r1)
    stfs f9, 0x2a4(r1)
    stfs f9, 0x2a0(r1)
    stfs f9, 0x298(r1)
    stfs f9, 0x294(r1)
    stfs f9, 0x290(r1)
    stfs f9, 0x28c(r1)
    stfs f0, 0x2b0(r1)
    stfs f0, 0x29c(r1)
    stfs f0, 0x288(r1)
    beq lbl_fn_80462CCC_000007B8
    addi r3, r1, 0x108
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0x108
    addi r5, r1, 0x138
    bl fn_805F89F0
    addi r3, r1, 0x138
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_80462CCC_000007B8:
    lfs f0, lbl_80886D60
    lfs f1, 0xc(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_80462CCC_00000818
    addi r3, r1, 0xa8
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0xa8
    addi r5, r1, 0xd8
    bl fn_805F89F0
    addi r3, r1, 0xd8
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_80462CCC_00000818:
    lfs f0, lbl_80886D60
    lfs f1, 0x8(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_80462CCC_00000878
    addi r3, r1, 0x48
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0x48
    addi r5, r1, 0x78
    bl fn_805F89F0
    addi r3, r1, 0x78
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_80462CCC_00000878:
    mr r4, r29
    mr r5, r29
    addi r3, r1, 0x288
    bl fn_805F89F0
    lfs f8, 0x20(r1)
    lfs f7, 0x24(r1)
    lfs f0, 0x28(r1)
    stfs f8, 0xc(r29)
    stfs f7, 0x1c(r29)
    stfs f0, 0x2c(r29)
lbl_fn_80462CCC_000008A0:
    lwz r0, 0x334(r1)
    lwz r31, 0x32c(r1)
    lwz r30, 0x328(r1)
    lwz r29, 0x324(r1)
    lwz r28, 0x320(r1)
    mtlr r0
    addi r1, r1, 0x330
    blr
}

asm void fn_80463174(void)
{
    nofralloc
    stwu r1, -0xf0(r1)
    mflr r0
    stw r0, 0xf4(r1)
    addi r11, r1, 0xb0
    stfd f31, 0xe0(r1)
    psq_st f31, 0xe8(r1), 0, 0
    stfd f30, 0xd0(r1)
    psq_st f30, 0xd8(r1), 0, 0
    stfd f29, 0xc0(r1)
    psq_st f29, 0xc8(r1), 0, 0
    stfd f28, 0xb0(r1)
    psq_st f28, 0xb8(r1), 0, 0
    bl _savegpr_27
    lwz r0, 0x14b8(r3)
    mr r31, r3
    cmpwi r0, 0x0
    beq lbl_fn_80463174_00000CB8
    mr r3, r0
    bl fn_8013C38C
    mr r4, r3
    addi r3, r1, 0x8c
    bl fn_8001047C
    addi r3, r1, 0x80
    addi r4, r1, 0x8c
    addi r5, r31, 0x528
    bl fn_80013338
    addi r3, r1, 0x80
    bl fn_8000D3A4
    lwz r0, 0x14c4(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80463174_00000960
    lwz r0, 0x14c0(r31)
    cmpwi r0, 0x3c
    ble lbl_fn_80463174_00000CB8
    lfs f0, lbl_80886E08
    fcmpo cr0, f1, f0
    bge lbl_fn_80463174_00000CB8
    mr r3, r31
    bl fn_80466AE4
    b lbl_fn_80463174_00000CB8
lbl_fn_80463174_00000960:
    cmpwi r0, 0x1
    bne lbl_fn_80463174_00000B5C
    lwz r0, 0x14ec(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80463174_00000988
    mr r3, r31
    bl fn_80467F50
    li r0, 0x1
    stw r0, 0x14ec(r31)
    b lbl_fn_80463174_00000CB8
lbl_fn_80463174_00000988:
    lwz r0, 0x14f0(r31)
    li r30, 0x1
    cmpwi r0, 0x0
    bgt lbl_fn_80463174_00000B24
    addi r3, r1, 0x74
    li r29, 0x0
    bl fn_80057A64
    lwz r0, 0x1558(r31)
    li r28, 0x0
    cmpwi r0, 0x0
    blt lbl_fn_80463174_00000A9C
    bl fn_80279790
    bl fn_80279788
    lfs f30, lbl_80886DAC
    mr r27, r3
    lfs f31, lbl_80886E0C
    b lbl_fn_80463174_00000A94
lbl_fn_80463174_000009CC:
    mr r3, r27
    bl fn_804635A4
    cmpwi r3, 0x455
    bne lbl_fn_80463174_00000A88
    lwz r12, 0x0(r27)
    mr r3, r27
    lwz r12, 0x5c(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_80463174_00000A88
    mr r3, r27
    bl fn_802797A0
    mr r4, r3
    addi r3, r1, 0x74
    bl fn_8000D124
    mr r3, r27
    bl fn_804635AC
    mr r28, r3
    addi r3, r1, 0x68
    addi r4, r1, 0x74
    addi r5, r31, 0x528
    bl fn_80013338
    addi r3, r1, 0x68
    bl fn_8000D3A4
    fmr f28, f1
    mr r3, r31
    bl fn_8012A1B8
    lfs f29, 0x4(r3)
    addi r3, r1, 0x2c
    addi r4, r1, 0x68
    bl fn_800F7FD8
    addi r3, r1, 0x38
    addi r4, r1, 0x2c
    bl fn_80011034
    lfs f0, 0x3c(r1)
    fsubs f1, f0, f29
    bl fn_802A7964
    bl fn_802A7910
    bl fn_80011220
    fcmpo cr0, f1, f31
    cror eq, lt, eq
    bne lbl_fn_80463174_00000A88
    fcmpo cr0, f28, f30
    bge lbl_fn_80463174_00000A88
    li r29, 0x1
    b lbl_fn_80463174_00000A9C
lbl_fn_80463174_00000A88:
    mr r3, r27
    bl fn_802797D4
    mr r27, r3
lbl_fn_80463174_00000A94:
    cmpwi r27, 0x0
    bne lbl_fn_80463174_000009CC
lbl_fn_80463174_00000A9C:
    cmpwi r29, 0x0
    beq lbl_fn_80463174_00000AD8
    li r3, 0x0
    li r0, 0x6
    stw r3, 0x1558(r31)
    addi r3, r1, 0x20
    addi r4, r1, 0x74
    stw r0, 0x14c4(r31)
    bl fn_8001047C
    mr r5, r3
    mr r3, r31
    mr r4, r28
    bl fn_80467C18
    li r30, 0x0
    b lbl_fn_80463174_00000B24
lbl_fn_80463174_00000AD8:
    lwz r0, 0x14f0(r31)
    cmpwi r0, -0x2
    bge lbl_fn_80463174_00000B24
    lwz r4, 0x1558(r31)
    li r6, 0x4
    lwz r0, 0x14b8(r31)
    mr r3, r31
    addi r4, r4, 0x1
    stw r4, 0x1558(r31)
    lwz r5, 0x14f4(r31)
    addi r4, r31, 0x1504
    stw r6, 0x14c4(r31)
    addi r6, r31, 0x14f4
    li r7, 0x1
    stw r0, 0x1554(r31)
    bl fn_80468B68
    mr r3, r31
    bl fn_804672CC
    li r30, 0x0
lbl_fn_80463174_00000B24:
    cmpwi r30, 0x0
    beq lbl_fn_80463174_00000CB8
    lwz r6, 0x14f0(r31)
    mr r3, r31
    lwz r5, 0x14f4(r31)
    addi r4, r31, 0x1504
    subi r0, r6, 0x1
    stw r0, 0x14f0(r31)
    addi r6, r31, 0x14f4
    li r7, 0x0
    bl fn_80468B68
    mr r3, r31
    bl fn_80466CA4
    b lbl_fn_80463174_00000CB8
lbl_fn_80463174_00000B5C:
    cmpwi r0, 0x4
    bne lbl_fn_80463174_00000C7C
    lwz r3, 0x1554(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80463174_00000B7C
    bl fn_8013C480
    cmpwi r3, 0x0
    bne lbl_fn_80463174_00000B8C
lbl_fn_80463174_00000B7C:
    li r0, 0x0
    stw r0, 0x14c4(r31)
    mr r3, r31
    bl fn_80466974
lbl_fn_80463174_00000B8C:
    lwz r3, 0x1554(r31)
    bl fn_8013C38C
    mr r4, r3
    addi r3, r1, 0x5c
    addi r5, r31, 0x528
    bl fn_80013338
    addi r3, r1, 0x80
    bl fn_8000D3A4
    fmr f30, f1
    mr r3, r31
    bl fn_8012A1B8
    lfs f31, 0x4(r3)
    addi r3, r1, 0x8
    addi r4, r1, 0x5c
    bl fn_800F7FD8
    addi r3, r1, 0x14
    addi r4, r1, 0x8
    bl fn_80011034
    lfs f0, 0x18(r1)
    fsubs f1, f0, f31
    bl fn_802A7964
    bl fn_802A7910
    bl fn_80011220
    lfs f0, lbl_80886E10
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_80463174_00000CB8
    lfs f0, lbl_80886DAC
    fcmpo cr0, f30, f0
    bge lbl_fn_80463174_00000CB8
    addi r3, r1, 0x50
    addi r4, r31, 0x528
    bl fn_8001047C
    lfs f1, 0x54(r1)
    addi r3, r1, 0x44
    lfs f0, lbl_80886D9C
    addi r4, r1, 0x8c
    fadds f0, f1, f0
    stfs f0, 0x54(r1)
    bl fn_8001047C
    lfs f1, 0x48(r1)
    lfs f0, lbl_80886D9C
    fadds f0, f1, f0
    stfs f0, 0x48(r1)
    bl fn_801404F8
    lis r4, 0x8000
    addi r5, r1, 0x50
    addi r7, r4, 0x80
    addi r6, r1, 0x44
    addi r8, r31, 0x5b8
    li r4, 0x0
    li r9, 0x0
    bl fn_8004ECC0
    cmpwi r3, 0x0
    bne lbl_fn_80463174_00000CB8
    li r0, 0x5
    stw r0, 0x14c4(r31)
    mr r3, r31
    bl fn_804678F4
    b lbl_fn_80463174_00000CB8
lbl_fn_80463174_00000C7C:
    cmpwi r0, 0x5
    bne lbl_fn_80463174_00000C94
    li r0, 0x0
    stw r0, 0x14c4(r31)
    stw r0, 0x1574(r31)
    b lbl_fn_80463174_00000CB8
lbl_fn_80463174_00000C94:
    cmpwi r0, 0x6
    bne lbl_fn_80463174_00000CA8
    li r0, 0x0
    stw r0, 0x14c4(r31)
    b lbl_fn_80463174_00000CB8
lbl_fn_80463174_00000CA8:
    cmpwi r0, 0x7
    bne lbl_fn_80463174_00000CB8
    mr r3, r31
    bl fn_80466A04
lbl_fn_80463174_00000CB8:
    addi r11, r1, 0xb0
    psq_l f31, 0xe8(r1), 0, 0
    lfd f31, 0xe0(r1)
    psq_l f30, 0xd8(r1), 0, 0
    lfd f30, 0xd0(r1)
    psq_l f29, 0xc8(r1), 0, 0
    lfd f29, 0xc0(r1)
    psq_l f28, 0xb8(r1), 0, 0
    lfd f28, 0xb0(r1)
    bl _restgpr_27
    lwz r0, 0xf4(r1)
    mtlr r0
    addi r1, r1, 0xf0
    blr
}

asm void fn_804635A4(void)
{
    nofralloc
    lwz r3, 0x48(r3)
    blr
}

asm void fn_804635AC(void)
{
    nofralloc
    lwz r3, 0x4c(r3)
    blr
}

asm void fn_804635B4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x14c4(r3)
    cmpwi r0, 0x4
    bne lbl_fn_804635B4_00000D40
    lwz r4, 0x55c(r3)
    subi r0, r4, 0x6
    cmplwi r0, 0x1
    ble lbl_fn_804635B4_00000D40
    lwz r4, 0x1554(r3)
    li r5, 0x0
    lfs f1, lbl_80886E20
    bl fn_80170A20
lbl_fn_804635B4_00000D40:
    mr r3, r31
    bl fn_80461838
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80463610(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stfd f31, 0x60(r1)
    psq_st f31, 0x68(r1), 0, 0
    stfd f30, 0x50(r1)
    psq_st f30, 0x58(r1), 0, 0
    stw r31, 0x4c(r1)
    mr r31, r3
    stw r30, 0x48(r1)
    lwz r0, 0x2dc(r3)
    cmpwi r0, 0x14a
    bne lbl_fn_80463610_00000E98
    lfs f2, 0x2e4(r3)
    lfs f1, lbl_80886E24
    lfs f0, lbl_80886D80
    fsubs f1, f2, f1
    fabs f1, f1
    frsp f1, f1
    fcmpo cr0, f1, f0
    bge lbl_fn_80463610_00000DE0
    lwz r6, lbl_8087F430
    li r0, 0x3c
    lfs f0, lbl_80886D70
    lwz r4, 0x96c(r6)
    srwi r5, r4, 31
    clrlwi r4, r4, 31
    xor r4, r4, r5
    subf r4, r5, r4
    stw r4, 0x96c(r6)
    stw r0, 0x970(r6)
    stfs f0, 0x974(r6)
    stfs f0, 0x978(r6)
lbl_fn_80463610_00000DE0:
    lfs f30, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f30, f1
    cror eq, gt, eq
    bne lbl_fn_80463610_00000FC8
    lfs f0, lbl_80886D8C
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80886D60
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x14d
    lfs f2, lbl_80886D90
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r8, lbl_8087F430
    lis r4, lbl_80755188@ha
    addi r4, r4, lbl_80755188@l
    li r0, 0xb4
    lwz r5, 0x96c(r8)
    addi r3, r1, 0x8
    lfs f0, lbl_80886D90
    addi r4, r4, 0xd6
    srwi r6, r5, 31
    clrlwi r5, r5, 31
    xor r5, r5, r6
    lfs f1, lbl_80886D8C
    subf r5, r6, r5
    stw r5, 0x96c(r8)
    addi r5, r31, 0x528
    li r6, 0x0
    stw r0, 0x970(r8)
    li r7, -0x1
    stfs f0, 0x974(r8)
    stfs f0, 0x978(r8)
    bl fn_800C344C
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_80463610_00000FC8
lbl_fn_80463610_00000E98:
    lfs f30, 0x2e4(r3)
    lfs f1, lbl_80886DA8
    lfs f0, lbl_80886D80
    fsubs f1, f30, f1
    fabs f1, f1
    frsp f1, f1
    fcmpo cr0, f1, f0
    bge lbl_fn_80463610_00000ECC
    lwz r3, lbl_8087F430
    li r4, 0x5b
    li r5, 0x1
    bl fn_80370AE4
    b lbl_fn_80463610_00000FC8
lbl_fn_80463610_00000ECC:
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f30, f1
    cror eq, gt, eq
    bne lbl_fn_80463610_00000FC8
    lwz r4, 0x5c0(r31)
    mr r3, r31
    lwz r5, 0x15e0(r31)
    clrrwi r10, r4, 1
    lwz r0, 0x1638(r31)
    lwz r4, 0x1690(r31)
    clrrwi r9, r5, 1
    clrrwi r8, r0, 1
    lwz r11, 0x12a4(r31)
    clrrwi r7, r4, 1
    lwz r5, 0x16e8(r31)
    lwz r4, 0x17b0(r31)
    oris r11, r11, 0x200
    clrrwi r6, r5, 1
    lwz r0, 0x1740(r31)
    clrrwi r4, r4, 1
    stw r10, 0x5c0(r31)
    clrrwi r5, r0, 1
    ori r0, r11, 0x8000
    stw r9, 0x15e0(r31)
    stw r8, 0x1638(r31)
    stw r7, 0x1690(r31)
    stw r6, 0x16e8(r31)
    stw r5, 0x1740(r31)
    stw r4, 0x17b0(r31)
    stw r0, 0x12a4(r31)
    bl fn_801765D8
    lwz r3, lbl_8087F408
    lfs f30, lbl_80886D60
    lwz r30, 0x48(r3)
    lfs f31, lbl_80886D8C
    b lbl_fn_80463610_00000FC0
lbl_fn_80463610_00000F64:
    lwz r3, 0x60(r30)
    lwz r0, 0x24(r3)
    cmpwi r0, 0x3b
    bne lbl_fn_80463610_00000FBC
    stfs f30, 0xc(r1)
    addi r3, r1, 0x18
    li r4, 0x79
    stfs f30, 0x10(r1)
    stfs f31, 0x14(r1)
    lfs f1, 0x538(r31)
    bl fn_805F8E70
    addi r4, r1, 0xc
    addi r3, r1, 0x18
    mr r5, r4
    bl fn_805F93C0
    lwz r12, 0x0(r30)
    mr r3, r30
    addi r4, r31, 0x528
    addi r5, r1, 0xc
    lwz r12, 0x80(r12)
    mtctr r12
    bctrl
lbl_fn_80463610_00000FBC:
    lwz r30, 0x14ac(r30)
lbl_fn_80463610_00000FC0:
    cmpwi r30, 0x0
    bne lbl_fn_80463610_00000F64
lbl_fn_80463610_00000FC8:
    lwz r0, 0x74(r1)
    psq_l f31, 0x68(r1), 0, 0
    lfd f31, 0x60(r1)
    psq_l f30, 0x58(r1), 0, 0
    lfd f30, 0x50(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_804638A4(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x124(r1)
    stfd f31, 0x110(r1)
    psq_st f31, 0x118(r1), 0, 0
    stfd f30, 0x100(r1)
    psq_st f30, 0x108(r1), 0, 0
    stw r31, 0xfc(r1)
    stw r30, 0xf8(r1)
    stw r29, 0xf4(r1)
    mr r29, r3
    lfs f30, 0x2e4(r3)
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f30, f1
    cror eq, gt, eq
    bne lbl_fn_804638A4_0000109C
    li r0, 0x0
    stw r0, 0x14bc(r29)
    stw r0, 0x14c0(r29)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r29)
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_804638A4_00001068
    li r4, 0x8c
    li r5, 0x0
    bl fn_80370AE4
lbl_fn_804638A4_00001068:
    li r31, 0x0
    stw r31, 0x58c(r29)
    mr r3, r29
    li r4, 0x3
    bl fn_8016E970
    lwz r0, 0x1800(r29)
    cmpwi r0, 0x0
    beq lbl_fn_804638A4_00001378
    lwz r3, lbl_8087F048
    addi r4, r29, 0xb0
    bl fn_80107A68
    stw r31, 0x1800(r29)
    b lbl_fn_804638A4_00001378
lbl_fn_804638A4_0000109C:
    lfs f3, 0x2e4(r29)
    lfs f0, lbl_80886E28
    fcmpo cr0, f3, f0
    bge lbl_fn_804638A4_0000131C
    lwz r6, 0x14b8(r29)
    addi r31, r1, 0x50
    lfs f0, 0x530(r29)
    addi r5, r1, 0x68
    lfs f3, 0x530(r6)
    mr r3, r31
    lfs f5, 0x52c(r6)
    mr r4, r31
    fsubs f2, f3, f0
    lfs f4, 0x52c(r29)
    lfs f3, 0x528(r6)
    lfs f0, 0x528(r29)
    fsubs f4, f5, f4
    stfs f2, 0x70(r1)
    fsubs f0, f3, f0
    stfs f4, 0x6c(r1)
    stfs f0, 0x68(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x58(r1)
    bl fn_805F98D0
    lfs f2, 0x58(r1)
    addi r30, r1, 0x5c
    psq_l f1, 0x0(r31), 0, 0
    fabs f3, f2
    lfs f0, lbl_80886D80
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0x64(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_804638A4_0000114C
    lfs f3, 0x5c(r1)
    lfs f0, lbl_80886D60
    fcmpo cr0, f3, f0
    ble lbl_fn_804638A4_00001140
    lfs f0, lbl_80886D84
    b lbl_fn_804638A4_00001144
lbl_fn_804638A4_00001140:
    lfs f0, lbl_80886D88
lbl_fn_804638A4_00001144:
    stfs f0, 0x48(r1)
    b lbl_fn_804638A4_00001160
lbl_fn_804638A4_0000114C:
    frsp f2, f2
    lfs f1, 0x5c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_804638A4_00001160:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x78
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80886D60
    addi r4, r1, 0x38
    lfs f30, 0x80(r1)
    mr r5, r4
    lfs f31, 0x7c(r1)
    addi r3, r1, 0xa8
    lfs f13, 0x78(r1)
    lfs f12, 0x90(r1)
    lfs f11, 0x8c(r1)
    lfs f10, 0x88(r1)
    lfs f9, 0xa0(r1)
    lfs f8, 0x9c(r1)
    lfs f7, 0x98(r1)
    lfs f6, 0xa4(r1)
    lfs f5, 0x94(r1)
    lfs f4, 0x84(r1)
    lfs f0, lbl_80886D8C
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x64(r1)
    stfs f3, 0xd8(r1)
    stfs f3, 0xdc(r1)
    stfs f3, 0xe0(r1)
    stfs f0, 0xe4(r1)
    stfs f13, 0x8(r1)
    stfs f31, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f13, 0xa8(r1)
    stfs f31, 0xac(r1)
    stfs f30, 0xb0(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xb8(r1)
    stfs f11, 0xbc(r1)
    stfs f12, 0xc0(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0xc8(r1)
    stfs f8, 0xcc(r1)
    stfs f9, 0xd0(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0xb4(r1)
    stfs f5, 0xc4(r1)
    stfs f6, 0xd4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80886D80
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_804638A4_0000127C
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80886D60
    fcmpo cr0, f3, f0
    ble lbl_fn_804638A4_0000126C
    lfs f0, lbl_80886D84
    b lbl_fn_804638A4_00001270
lbl_fn_804638A4_0000126C:
    lfs f0, lbl_80886D88
lbl_fn_804638A4_00001270:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_804638A4_00001290
lbl_fn_804638A4_0000127C:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_804638A4_00001290:
    addi r3, r1, 0x44
    lfs f2, lbl_80886D60
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_807550A0@ha
    psq_st f1, 0x0(r30), 0, 0
    lfs f0, 0x538(r29)
    lfs f3, 0x60(r1)
    stfs f2, 0x64(r1)
    fsubs f3, f3, f0
    lfs f0, lbl_80886E1C
    stfs f2, 0x4c(r1)
    lfd f2, lbl_807550A0@l(r3)
    fmuls f1, f0, f3
    bl fn_8068AEA8
    frsp f4, f1
    lfs f0, lbl_80886E14
    fcmpo cr0, f4, f0
    ble lbl_fn_804638A4_000012E0
    lfs f0, lbl_80886E0C
    fsubs f4, f4, f0
lbl_fn_804638A4_000012E0:
    lfs f0, lbl_80886E18
    fcmpo cr0, f4, f0
    bge lbl_fn_804638A4_000012F4
    lfs f0, lbl_80886E0C
    fadds f4, f4, f0
lbl_fn_804638A4_000012F4:
    fabs f0, f4
    lfs f3, lbl_80886E2C
    frsp f0, f0
    fcmpo cr0, f0, f3
    ble lbl_fn_804638A4_00001310
    fdivs f0, f4, f0
    fmuls f4, f0, f3
lbl_fn_804638A4_00001310:
    lfs f0, 0x538(r29)
    fadds f0, f0, f4
    stfs f0, 0x538(r29)
lbl_fn_804638A4_0000131C:
    lfs f3, 0x2e4(r29)
    lfs f0, lbl_80886E30
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_804638A4_00001378
    lfs f0, lbl_80886E34
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_804638A4_00001378
    mr r3, r29
    bl fn_80144710
    li r3, 0x5b4
    bl fn_80219E6C
    mr r7, r3
    lwz r3, lbl_8087F048
    lwz r8, 0x590(r29)
    mr r6, r29
    lfs f1, lbl_80886D60
    li r4, 0x0
    li r5, 0x0
    li r9, 0x1e
    li r10, -0x1
    bl fn_800F8C6C
lbl_fn_804638A4_00001378:
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

asm void fn_80463C58(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    lfs f0, lbl_80886D7C
    stw r0, 0x84(r1)
    stw r31, 0x7c(r1)
    mr r31, r3
    lfs f3, 0x2e4(r3)
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_80463C58_00001504
    li r0, 0x0
    stw r0, 0x14bc(r3)
    stw r0, 0x14c0(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80463C58_000013FC
    li r4, 0x8c
    li r5, 0x0
    bl fn_80370AE4
lbl_fn_80463C58_000013FC:
    li r0, 0x9
    stw r0, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lfs f1, lbl_80886D8C
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f2, lbl_80886D90
    li r4, 0x0
    stfs f1, 0x2fc(r31)
    li r5, 0x140
    li r6, 0x0
    li r7, 0x0
    stfs f1, 0x2e8(r31)
    li r8, 0x1
    bl fn_80097C08
    li r0, 0x0
    stw r0, 0x54(r1)
    lfs f6, lbl_80886D60
    addi r5, r31, 0x14d4
    lfs f5, lbl_80886E38
    addi r4, r1, 0x20
    stw r0, 0x58(r1)
    addi r6, r1, 0x8
    addi r8, r31, 0x5b8
    lis r7, 0x2000
    stw r0, 0x5c(r1)
    li r9, 0x0
    stw r0, 0x60(r1)
    lfs f4, 0x14dc(r31)
    lfs f3, 0x14d8(r31)
    lfs f0, 0x14d4(r31)
    fadds f4, f6, f4
    psq_l f1, 0x0(r5), 0, 0
    fadds f3, f5, f3
    lfs f2, 0x14dc(r31)
    fadds f0, f6, f0
    psq_st f1, 0x528(r31), 0, 0
    stfs f2, 0x530(r31)
    stfs f6, 0x14(r1)
    lwz r3, lbl_8087EE98
    stfs f5, 0x18(r1)
    stfs f6, 0x1c(r1)
    stfs f0, 0x8(r1)
    stfs f3, 0xc(r1)
    stfs f4, 0x10(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_80463C58_000014DC
    addi r3, r1, 0x30
    lfs f2, 0x38(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x528(r31), 0, 0
    stfs f2, 0x530(r31)
lbl_fn_80463C58_000014DC:
    addi r3, r31, 0x14e0
    lfs f2, 0x14e8(r31)
    psq_l f1, 0x0(r3), 0, 0
    mr r4, r31
    psq_st f1, 0x534(r31), 0, 0
    li r5, 0x65
    li r6, 0x1
    stfs f2, 0x53c(r31)
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
lbl_fn_80463C58_00001504:
    lwz r0, 0x84(r1)
    lwz r31, 0x7c(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_80463DCC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    psq_st f31, 0x18(r1), 0, 0
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lfs f31, 0x2e4(r3)
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_80463DCC_0000164C
    lwz r0, 0x14c4(r30)
    cmpwi r0, 0x1
    beq lbl_fn_80463DCC_00001568
    cmpwi r0, 0x7
    bne lbl_fn_80463DCC_000015CC
lbl_fn_80463DCC_00001568:
    li r0, 0x0
    stw r0, 0x14bc(r30)
    stw r0, 0x14c0(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80463DCC_00001598
    li r4, 0x8c
    li r5, 0x0
    bl fn_80370AE4
lbl_fn_80463DCC_00001598:
    li r31, 0x0
    stw r31, 0x58c(r30)
    mr r3, r30
    li r4, 0x3
    bl fn_8016E970
    lwz r0, 0x1800(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80463DCC_0000164C
    lwz r3, lbl_8087F048
    addi r4, r30, 0xb0
    bl fn_80107A68
    stw r31, 0x1800(r30)
    b lbl_fn_80463DCC_0000164C
lbl_fn_80463DCC_000015CC:
    li r0, 0x0
    stw r0, 0x14bc(r30)
    stw r0, 0x14c0(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80463DCC_000015FC
    li r4, 0x8c
    li r5, 0x0
    bl fn_80370AE4
lbl_fn_80463DCC_000015FC:
    li r0, 0x7
    stw r0, 0x58c(r30)
    mr r3, r30
    li r4, 0x3
    bl fn_8016E970
    lfs f2, lbl_80886D8C
    li r0, 0x1
    lfs f0, lbl_80886DA4
    addi r3, r30, 0xb0
    stfs f2, 0x2fc(r30)
    li r4, 0x0
    lfs f1, lbl_80886D60
    li r5, 0x156
    stw r0, 0x3fc(r30)
    li r6, 0x0
    lfs f2, lbl_80886D90
    li r7, 0x0
    stfs f0, 0x2e8(r30)
    li r8, 0x1
    bl fn_80097C08
lbl_fn_80463DCC_0000164C:
    lwz r0, 0x24(r1)
    psq_l f31, 0x18(r1), 0, 0
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80463F20(void)
{
    nofralloc
    stwu r1, -0x140(r1)
    mflr r0
    stw r0, 0x144(r1)
    stfd f31, 0x130(r1)
    psq_st f31, 0x138(r1), 0, 0
    stfd f30, 0x120(r1)
    psq_st f30, 0x128(r1), 0, 0
    stw r31, 0x11c(r1)
    mr r31, r3
    stw r30, 0x118(r1)
    lwz r0, 0x14c0(r3)
    cmpwi r0, 0x2d
    blt lbl_fn_80463F20_00001704
    li r0, 0x0
    stw r0, 0x14bc(r3)
    stw r0, 0x14c0(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80463F20_000016D0
    li r4, 0x8c
    li r5, 0x0
    bl fn_80370AE4
lbl_fn_80463F20_000016D0:
    li r30, 0x0
    stw r30, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lwz r0, 0x1800(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80463F20_00001D2C
    lwz r3, lbl_8087F048
    addi r4, r31, 0xb0
    bl fn_80107A68
    stw r30, 0x1800(r31)
    b lbl_fn_80463F20_00001D2C
lbl_fn_80463F20_00001704:
    xoris r4, r0, 0x8000
    lis r0, 0x4330
    lis r5, lbl_80755090@ha
    stw r4, 0x10c(r1)
    lfd f5, lbl_80755090@l(r5)
    addi r6, r1, 0x80
    stw r0, 0x108(r1)
    lfs f3, lbl_80886E3C
    lfd f4, 0x108(r1)
    lfs f0, lbl_80886D60
    fsubs f4, f4, f5
    fmuls f3, f3, f4
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_80463F20_00001758
    addi r4, r3, 0x150c
    lfs f2, 0x1514(r3)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x88(r1)
    b lbl_fn_80463F20_000018E4
lbl_fn_80463F20_00001758:
    lfs f0, lbl_80886D8C
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_80463F20_00001780
    addi r4, r3, 0x1518
    lfs f2, 0x1520(r3)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x88(r1)
    b lbl_fn_80463F20_000018E4
lbl_fn_80463F20_00001780:
    lwz r8, 0x1504(r3)
    li r7, 0x0
    lfs f0, 0x1508(r3)
    li r4, 0x0
    subic. r0, r8, 0x1
    fmuls f3, f0, f3
    mtctr r0
    ble lbl_fn_80463F20_000018D0
lbl_fn_80463F20_000017A0:
    lwz r5, 0x1548(r3)
    lfsx f0, r5, r4
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_80463F20_000018C0
    lfs f8, lbl_80886D60
    fcmpu cr0, f8, f3
    bne lbl_fn_80463F20_000017C4
    b lbl_fn_80463F20_000017C8
lbl_fn_80463F20_000017C4:
    fdivs f8, f3, f0
lbl_fn_80463F20_000017C8:
    cmpwi r7, 0x0
    bge lbl_fn_80463F20_000017E8
    addi r4, r3, 0x150c
    lfs f2, 0x1514(r3)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x88(r1)
    b lbl_fn_80463F20_000018E4
lbl_fn_80463F20_000017E8:
    subi r0, r8, 0x1
    cmpw r7, r0
    blt lbl_fn_80463F20_0000180C
    addi r4, r3, 0x1518
    lfs f2, 0x1520(r3)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x88(r1)
    b lbl_fn_80463F20_000018E4
lbl_fn_80463F20_0000180C:
    cmpwi r8, 0x2
    bge lbl_fn_80463F20_00001830
    lis r4, lbl_807C7030@ha
    addi r4, r4, lbl_807C7030@l
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x88(r1)
    b lbl_fn_80463F20_000018E4
lbl_fn_80463F20_00001830:
    lwz r0, 0x1524(r3)
    slwi r8, r7, 4
    lwz r4, 0x1530(r3)
    addi r5, r1, 0x5c
    add r7, r0, r8
    lwz r0, 0x153c(r3)
    add r4, r4, r8
    lfs f5, 0xc(r7)
    lfs f3, 0x8(r7)
    add r8, r0, r8
    lfs f4, 0xc(r4)
    fmadds f7, f5, f8, f3
    lfs f0, 0x8(r4)
    lfs f6, 0x4(r7)
    fmadds f5, f4, f8, f0
    lfs f4, 0x4(r4)
    fmadds f7, f8, f7, f6
    lfs f6, 0x0(r7)
    fmadds f5, f8, f5, f4
    lfs f4, 0x0(r4)
    fmadds f6, f8, f7, f6
    lfs f3, 0xc(r8)
    lfs f0, 0x8(r8)
    fmadds f4, f8, f5, f4
    fmadds f3, f3, f8, f0
    lfs f0, 0x4(r8)
    stfs f6, 0x5c(r1)
    fmadds f3, f8, f3, f0
    lfs f0, 0x0(r8)
    stfs f4, 0x60(r1)
    fmadds f2, f8, f3, f0
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x64(r1)
    stfs f2, 0x88(r1)
    b lbl_fn_80463F20_000018E4
lbl_fn_80463F20_000018C0:
    fsubs f3, f3, f0
    addi r7, r7, 0x1
    addi r4, r4, 0x4
    bdnz lbl_fn_80463F20_000017A0
lbl_fn_80463F20_000018D0:
    addi r4, r3, 0x150c
    lfs f2, 0x1514(r3)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x88(r1)
lbl_fn_80463F20_000018E4:
    lwz r4, 0x14c0(r3)
    lis r0, 0x4330
    lis r5, lbl_80755090@ha
    psq_l f1, 0x0(r6), 0, 0
    subi r4, r4, 0x1
    lfs f2, 0x8(r6)
    xoris r4, r4, 0x8000
    stw r4, 0x10c(r1)
    lfd f5, lbl_80755090@l(r5)
    addi r6, r1, 0x8c
    stw r0, 0x108(r1)
    lfs f3, lbl_80886E3C
    lfd f4, 0x108(r1)
    lfs f0, lbl_80886D60
    fsubs f4, f4, f5
    psq_st f1, 0x528(r3), 0, 0
    stfs f2, 0x530(r3)
    fmuls f3, f3, f4
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_80463F20_00001950
    addi r4, r3, 0x150c
    lfs f2, 0x1514(r3)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x94(r1)
    b lbl_fn_80463F20_00001ADC
lbl_fn_80463F20_00001950:
    lfs f0, lbl_80886D8C
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_80463F20_00001978
    addi r4, r3, 0x1518
    lfs f2, 0x1520(r3)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x94(r1)
    b lbl_fn_80463F20_00001ADC
lbl_fn_80463F20_00001978:
    lwz r8, 0x1504(r3)
    li r7, 0x0
    lfs f0, 0x1508(r3)
    li r4, 0x0
    subic. r0, r8, 0x1
    fmuls f3, f0, f3
    mtctr r0
    ble lbl_fn_80463F20_00001AC8
lbl_fn_80463F20_00001998:
    lwz r5, 0x1548(r3)
    lfsx f0, r5, r4
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_80463F20_00001AB8
    lfs f8, lbl_80886D60
    fcmpu cr0, f8, f3
    bne lbl_fn_80463F20_000019BC
    b lbl_fn_80463F20_000019C0
lbl_fn_80463F20_000019BC:
    fdivs f8, f3, f0
lbl_fn_80463F20_000019C0:
    cmpwi r7, 0x0
    bge lbl_fn_80463F20_000019E0
    addi r4, r3, 0x150c
    lfs f2, 0x1514(r3)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x94(r1)
    b lbl_fn_80463F20_00001ADC
lbl_fn_80463F20_000019E0:
    subi r0, r8, 0x1
    cmpw r7, r0
    blt lbl_fn_80463F20_00001A04
    addi r4, r3, 0x1518
    lfs f2, 0x1520(r3)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x94(r1)
    b lbl_fn_80463F20_00001ADC
lbl_fn_80463F20_00001A04:
    cmpwi r8, 0x2
    bge lbl_fn_80463F20_00001A28
    lis r4, lbl_807C7030@ha
    addi r4, r4, lbl_807C7030@l
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x94(r1)
    b lbl_fn_80463F20_00001ADC
lbl_fn_80463F20_00001A28:
    lwz r0, 0x1524(r3)
    slwi r8, r7, 4
    lwz r4, 0x1530(r3)
    addi r5, r1, 0x50
    add r7, r0, r8
    lwz r0, 0x153c(r3)
    add r4, r4, r8
    lfs f5, 0xc(r7)
    lfs f3, 0x8(r7)
    add r8, r0, r8
    lfs f4, 0xc(r4)
    fmadds f7, f5, f8, f3
    lfs f0, 0x8(r4)
    lfs f6, 0x4(r7)
    fmadds f5, f4, f8, f0
    lfs f4, 0x4(r4)
    fmadds f7, f8, f7, f6
    lfs f6, 0x0(r7)
    fmadds f5, f8, f5, f4
    lfs f4, 0x0(r4)
    fmadds f6, f8, f7, f6
    lfs f3, 0xc(r8)
    lfs f0, 0x8(r8)
    fmadds f4, f8, f5, f4
    fmadds f3, f3, f8, f0
    lfs f0, 0x4(r8)
    stfs f6, 0x50(r1)
    fmadds f3, f8, f3, f0
    lfs f0, 0x0(r8)
    stfs f4, 0x54(r1)
    fmadds f2, f8, f3, f0
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x58(r1)
    stfs f2, 0x94(r1)
    b lbl_fn_80463F20_00001ADC
lbl_fn_80463F20_00001AB8:
    fsubs f3, f3, f0
    addi r7, r7, 0x1
    addi r4, r4, 0x4
    bdnz lbl_fn_80463F20_00001998
lbl_fn_80463F20_00001AC8:
    addi r4, r3, 0x150c
    lfs f2, 0x1514(r3)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x94(r1)
lbl_fn_80463F20_00001ADC:
    lfs f3, 0x530(r3)
    addi r4, r1, 0x68
    lfs f0, 0x94(r1)
    addi r30, r1, 0x74
    lfs f5, 0x52c(r3)
    fsubs f2, f3, f0
    lfs f4, 0x90(r1)
    lfs f3, 0x528(r3)
    fsubs f4, f5, f4
    lfs f0, 0x8c(r1)
    stfs f2, 0x70(r1)
    fsubs f3, f3, f0
    lfs f0, lbl_80886D80
    stfs f4, 0x6c(r1)
    frsp f4, f2
    stfs f3, 0x68(r1)
    fabs f3, f4
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0x7c(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_80463F20_00001B5C
    lfs f3, 0x74(r1)
    lfs f0, lbl_80886D60
    fcmpo cr0, f3, f0
    ble lbl_fn_80463F20_00001B50
    lfs f0, lbl_80886D84
    b lbl_fn_80463F20_00001B54
lbl_fn_80463F20_00001B50:
    lfs f0, lbl_80886D88
lbl_fn_80463F20_00001B54:
    stfs f0, 0x48(r1)
    b lbl_fn_80463F20_00001B70
lbl_fn_80463F20_00001B5C:
    fmr f2, f4
    lfs f1, 0x74(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_80463F20_00001B70:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x98
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80886D60
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
    lfs f0, lbl_80886D8C
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x7c(r1)
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
    lfs f0, lbl_80886D80
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80463F20_00001C8C
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80886D60
    fcmpo cr0, f3, f0
    ble lbl_fn_80463F20_00001C7C
    lfs f0, lbl_80886D84
    b lbl_fn_80463F20_00001C80
lbl_fn_80463F20_00001C7C:
    lfs f0, lbl_80886D88
lbl_fn_80463F20_00001C80:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_80463F20_00001CA0
lbl_fn_80463F20_00001C8C:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_80463F20_00001CA0:
    lfs f2, lbl_80886D60
    addi r3, r1, 0x44
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r31
    stfs f2, 0x4c(r1)
    stfs f2, 0x7c(r1)
    frsp f2, f2
    psq_st f1, 0x0(r30), 0, 0
    psq_st f1, 0x534(r31), 0, 0
    stfs f2, 0x53c(r31)
    bl fn_80144710
    li r3, 0x5b4
    bl fn_80219E6C
    mr r30, r3
    lwz r3, lbl_8087F048
    lwz r8, 0x590(r31)
    mr r6, r31
    lfs f1, lbl_80886D60
    mr r7, r30
    li r4, 0x0
    li r5, 0x0
    li r9, 0x1e
    li r10, -0x1
    bl fn_800F8C6C
    lwz r0, 0x18f4(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80463F20_00001D2C
    lfs f3, 0x8e4(r31)
    addi r4, r31, 0x528
    lfs f0, 0x40(r30)
    lis r5, 0xffff
    lwz r3, lbl_8087EEB0
    fadds f1, f3, f0
    lfs f2, lbl_80886D60
    bl fn_80063D3C
lbl_fn_80463F20_00001D2C:
    lwz r0, 0x144(r1)
    psq_l f31, 0x138(r1), 0, 0
    lfd f31, 0x130(r1)
    psq_l f30, 0x128(r1), 0, 0
    lfd f30, 0x120(r1)
    lwz r31, 0x11c(r1)
    lwz r30, 0x118(r1)
    mtlr r0
    addi r1, r1, 0x140
    blr
}
