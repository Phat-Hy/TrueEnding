#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_22(void);
extern void _restgpr_23(void);
extern void _savegpr_22(void);
extern void _savegpr_23(void);
extern void dtor_80084684(void);
extern void fn_8000D124(void);
extern void fn_8001047C(void);
extern void fn_8004D388(void);
extern void fn_8004ED34(void);
extern void fn_80056E40(void);
extern void fn_80059468(void);
extern void fn_8007708C(void);
extern void fn_80084320(void);
extern void fn_800874C8(void);
extern void fn_8008771C(void);
extern void fn_8008937C(void);
extern void fn_800897D8(void);
extern void fn_80097C08(void);
extern void fn_800A555C(void);
extern void fn_800C3094(void);
extern void fn_800C3124(void);
extern void fn_800C31F4(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_800D1D3C(void);
extern void fn_800D1E9C(void);
extern void fn_800D2338(void);
extern void fn_800D246C(void);
extern void fn_800D3FA4(void);
extern void fn_800DC6B4(void);
extern void fn_800EC204(void);
extern void fn_800F8548(void);
extern void fn_800FBA9C(void);
extern void fn_800FBE70(void);
extern void fn_80117228(void);
extern void fn_80121F00(void);
extern void fn_8013C504(void);
extern void fn_80158E1C(void);
extern void fn_8016E970(void);
extern void fn_801F3FF8(void);
extern void fn_801F64D0(void);
extern void fn_801FECE0(void);
extern void fn_802375C4(void);
extern void fn_8023781C(void);
extern void fn_80239DAC(void);
extern void fn_8032AB90(void);
extern void fn_8032ABA4(void);
extern void fn_8032AC1C(void);
extern void fn_8032AF90(void);
extern void fn_8035B78C(void);
extern void fn_80370AE4(void);
extern void fn_80469AB8(void);
extern void fn_80469C64(void);
extern void fn_80469D60(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473E74(void);
extern void fn_80473E8C(void);
extern void fn_80473F50(void);
extern void fn_804A39EC(void);
extern void fn_804A3A68(void);
extern void fn_804A4494(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);
extern void fn_806959D8(void);

/* External data declarations */
extern u8 lbl_80755018[];
extern u8 lbl_80755090[];
extern u8 lbl_80755098[];
extern u8 lbl_80755188[];
extern u8 lbl_80755310[];
extern u8 lbl_80755320[];
extern u8 lbl_80755394[];
extern u8 lbl_8078FAF0[];
extern u8 lbl_8078FBB0[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087E030;
extern u32 lbl_8087E034;
extern u32 lbl_8087E038;
extern u32 lbl_8087E03C;
extern u32 lbl_8087E040;
extern u32 lbl_8087EE98;
extern u32 lbl_8087EEF0;
extern u32 lbl_8087EF10;
extern u32 lbl_8087EF70;
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F500;
extern u32 lbl_8087F508;
extern u32 lbl_8087F8A0;
extern u32 lbl_80886D60;
extern u32 lbl_80886D78;
extern u32 lbl_80886D80;
extern u32 lbl_80886D84;
extern u32 lbl_80886D88;
extern u32 lbl_80886D8C;
extern u32 lbl_80886D90;
extern u32 lbl_80886DB8;
extern u32 lbl_80886DBC;
extern u32 lbl_80886DC0;
extern u32 lbl_80886E24;
extern u32 lbl_80886E28;
extern u32 lbl_80886E48;
extern u32 lbl_80886E80;
extern u32 lbl_80886E84;
extern u32 lbl_80886E88;
extern u32 lbl_80886E8C;
extern u32 lbl_80886E90;
extern u32 lbl_80886E94;
extern u32 lbl_80886E98;
extern u32 lbl_80886E9C;
extern u32 lbl_80886EA0;
extern u32 lbl_80886EA4;

/* Function declarations */
void fn_80467F50(void);
void fn_80468038(void);
void fn_80468534(void);
void fn_804687B0(void);
void fn_80468A08(void);
void fn_80468B68(void);
void fn_80468D18(void);
void fn_80468D40(void);
void fn_80468D48(void);
void fn_80468F48(void);
void fn_80468F54(void);
void fn_80468FBC(void);
void fn_80469144(void);
void fn_80469230(void);
void fn_80469494(void);
void fn_80469650(void);

asm void fn_80467F50(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    li r0, 0x0
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r0, 0x14bc(r3)
    stw r0, 0x14c0(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80467F50_00000044
    li r4, 0x8c
    li r5, 0x0
    bl fn_80370AE4
lbl_fn_80467F50_00000044:
    li r0, 0x13
    stw r0, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lfs f0, lbl_80886D8C
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80886D60
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x14a
    lfs f2, lbl_80886D90
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3e8
    li r6, 0x0
    bl fn_80239DAC
    lis r4, lbl_80755188@ha
    lfs f1, lbl_80886D8C
    addi r4, r4, lbl_80755188@l
    addi r3, r1, 0x8
    addi r4, r4, 0xc9
    addi r5, r31, 0x528
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80468038(void)
{
    nofralloc
    stwu r1, -0x1e0(r1)
    mflr r0
    stw r0, 0x1e4(r1)
    addi r11, r1, 0x1a0
    stfd f31, 0x1d0(r1)
    psq_st f31, 0x1d8(r1), 0, 0
    stfd f30, 0x1c0(r1)
    psq_st f30, 0x1c8(r1), 0, 0
    stfd f29, 0x1b0(r1)
    psq_st f29, 0x1b8(r1), 0, 0
    stfd f28, 0x1a0(r1)
    psq_st f28, 0x1a8(r1), 0, 0
    bl _savegpr_23
    lwz r7, 0x0(r4)
    mr r27, r3
    mr r28, r5
    mr r29, r6
    addi r0, r7, 0x1
    stw r0, 0x0(r4)
    cmpwi r0, 0x5
    ble lbl_fn_80468038_00000144
    li r3, 0x1
    b lbl_fn_80468038_000005AC
lbl_fn_80468038_00000144:
    lfs f29, lbl_80886D60
    addi r24, r1, 0x68
    stfs f29, 0xa4(r1)
    addi r25, r1, 0x98
    lwz r3, lbl_8087F8A0
    addi r23, r1, 0x8c
    stfs f29, 0xa8(r1)
    li r31, 0x0
    lfs f28, lbl_80886E48
    li r26, 0x0
    stfs f29, 0xac(r1)
    lfs f30, lbl_80886E28
    lwz r30, 0x48(r3)
    lfs f31, lbl_80886E80
    b lbl_fn_80468038_00000574
lbl_fn_80468038_00000180:
    lwz r4, 0x38(r30)
    li r3, 0x0
    rlwinm r0, r4, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80468038_000001A4
    clrlwi r0, r4, 31
    cmplwi r0, 0x1
    beq lbl_fn_80468038_000001A4
    li r3, 0x1
lbl_fn_80468038_000001A4:
    cmpwi r3, 0x0
    beq lbl_fn_80468038_00000570
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x78(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_80468038_00000570
    lwz r0, 0x560(r30)
    cmpwi r0, 0x4
    beq lbl_fn_80468038_000001DC
    cmpwi r0, 0x5
    bne lbl_fn_80468038_00000224
lbl_fn_80468038_000001DC:
    lwz r3, lbl_8087F048
    mr r4, r30
    lwz r6, 0x638(r30)
    mr r5, r27
    lfs f1, lbl_80886D60
    li r7, -0x1
    bl fn_800FBA9C
    cmpwi r3, 0x0
    blt lbl_fn_80468038_00000570
    psq_l f1, 0x528(r30), 0, 0
    addi r3, r1, 0xa4
    lfs f2, 0x530(r30)
    li r31, 0x1
    stfs f2, 0xac(r1)
    lfs f28, lbl_80886DB8
    psq_st f1, 0x0(r3), 0, 0
    lfs f29, 0x538(r30)
    b lbl_fn_80468038_0000057C
lbl_fn_80468038_00000224:
    cmpwi r0, 0x1e
    bne lbl_fn_80468038_000004EC
    lwz r3, 0x638(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80468038_00000570
    lbz r0, 0x1(r3)
    cmpwi r0, 0x1
    bne lbl_fn_80468038_00000570
    mr r4, r30
    addi r3, r1, 0x68
    bl fn_80158E1C
    psq_l f1, 0x0(r24), 0, 0
    mr r3, r25
    lfs f2, 0x70(r1)
    mr r4, r25
    psq_st f1, 0x0(r25), 0, 0
    stfs f2, 0xa0(r1)
    bl fn_805F98D0
    lfs f2, 0x530(r30)
    mr r5, r23
    psq_l f1, 0x528(r30), 0, 0
    addi r4, r1, 0x120
    psq_st f1, 0x0(r23), 0, 0
    addi r6, r1, 0x80
    lfs f3, 0xa0(r1)
    addi r8, r30, 0x5b8
    lfs f4, 0x90(r1)
    li r7, 0x0
    fmuls f5, f3, f31
    lfs f0, 0x9c(r1)
    lfs f3, 0x98(r1)
    fadds f4, f4, f30
    fmuls f6, f0, f31
    lfs f0, 0x8c(r1)
    fmuls f3, f3, f31
    stfs f2, 0x94(r1)
    fadds f7, f2, f5
    lwz r3, lbl_8087EE98
    fadds f8, f4, f6
    stfs f4, 0x90(r1)
    fadds f0, f0, f3
    stfs f3, 0x5c(r1)
    li r9, 0x0
    stfs f6, 0x60(r1)
    stfs f5, 0x64(r1)
    stfs f0, 0x80(r1)
    stfs f8, 0x84(r1)
    stfs f7, 0x88(r1)
    stw r26, 0x154(r1)
    stw r26, 0x158(r1)
    stw r26, 0x15c(r1)
    stw r26, 0x160(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_80468038_00000570
    lwz r3, 0x158(r1)
    lwz r0, 0x8(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_80468038_00000570
    lwz r0, 0xc(r3)
    cmplw r0, r27
    bne lbl_fn_80468038_00000570
    psq_l f1, 0x528(r27), 0, 0
    addi r3, r1, 0xa4
    lfs f2, 0x530(r27)
    addi r23, r1, 0x50
    stfs f2, 0xac(r1)
    lfs f2, 0xa0(r1)
    psq_st f1, 0x0(r3), 0, 0
    fabs f3, f2
    psq_l f1, 0x0(r25), 0, 0
    lfs f0, lbl_80886D80
    psq_st f1, 0x0(r23), 0, 0
    frsp f3, f3
    stfs f2, 0x58(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_80468038_00000380
    lfs f3, 0x50(r1)
    lfs f0, lbl_80886D60
    fcmpo cr0, f3, f0
    ble lbl_fn_80468038_00000374
    lfs f0, lbl_80886D84
    b lbl_fn_80468038_00000378
lbl_fn_80468038_00000374:
    lfs f0, lbl_80886D88
lbl_fn_80468038_00000378:
    stfs f0, 0x48(r1)
    b lbl_fn_80468038_00000394
lbl_fn_80468038_00000380:
    frsp f2, f2
    lfs f1, 0x50(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_80468038_00000394:
    lfs f0, 0x48(r1)
    addi r3, r1, 0xb0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80886D60
    addi r4, r1, 0x38
    lfs f31, 0xb8(r1)
    mr r5, r4
    lfs f30, 0xb4(r1)
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
    lfs f0, lbl_80886D8C
    psq_l f1, 0x0(r23), 0, 0
    lfs f2, 0x58(r1)
    stfs f3, 0x110(r1)
    stfs f3, 0x114(r1)
    stfs f3, 0x118(r1)
    stfs f0, 0x11c(r1)
    stfs f13, 0x8(r1)
    stfs f30, 0xc(r1)
    stfs f31, 0x10(r1)
    stfs f13, 0xe0(r1)
    stfs f30, 0xe4(r1)
    stfs f31, 0xe8(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xf0(r1)
    stfs f11, 0xf4(r1)
    stfs f12, 0xf8(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0x100(r1)
    stfs f8, 0x104(r1)
    stfs f9, 0x108(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0xec(r1)
    stfs f5, 0xfc(r1)
    stfs f6, 0x10c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80886D80
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80468038_000004B0
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80886D60
    fcmpo cr0, f3, f0
    ble lbl_fn_80468038_000004A0
    lfs f0, lbl_80886D84
    b lbl_fn_80468038_000004A4
lbl_fn_80468038_000004A0:
    lfs f0, lbl_80886D88
lbl_fn_80468038_000004A4:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_80468038_000004C4
lbl_fn_80468038_000004B0:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_80468038_000004C4:
    addi r3, r1, 0x44
    lfs f2, lbl_80886D60
    psq_l f1, 0x0(r3), 0, 0
    li r31, 0x1
    psq_st f1, 0x0(r23), 0, 0
    lfs f28, lbl_80886E48
    stfs f2, 0x4c(r1)
    lfs f29, 0x54(r1)
    stfs f2, 0x58(r1)
    b lbl_fn_80468038_0000057C
lbl_fn_80468038_000004EC:
    cmpwi r0, 0xe
    bne lbl_fn_80468038_00000550
    mr r4, r30
    addi r3, r1, 0x74
    bl fn_80158E1C
    lwz r3, lbl_8087F048
    mr r4, r30
    lwz r6, 0x638(r30)
    mr r5, r27
    addi r8, r1, 0x74
    li r7, -0x1
    li r9, 0x1
    li r10, -0x1
    bl fn_800FBE70
    cmpwi r3, 0x0
    blt lbl_fn_80468038_00000570
    addi r4, r1, 0x74
    lfs f2, 0x7c(r1)
    addi r3, r1, 0xa4
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    li r31, 0x1
    stfs f2, 0xac(r1)
    lfs f29, 0x538(r30)
    b lbl_fn_80468038_0000057C
lbl_fn_80468038_00000550:
    psq_l f1, 0x528(r30), 0, 0
    addi r3, r1, 0xa4
    lfs f2, 0x530(r30)
    li r31, 0x1
    stfs f2, 0xac(r1)
    psq_st f1, 0x0(r3), 0, 0
    lfs f29, 0x538(r30)
    b lbl_fn_80468038_0000057C
lbl_fn_80468038_00000570:
    lwz r30, 0x14ac(r30)
lbl_fn_80468038_00000574:
    cmpwi r30, 0x0
    bne lbl_fn_80468038_00000180
lbl_fn_80468038_0000057C:
    cmpwi r31, 0x0
    beq lbl_fn_80468038_000005A8
    fmr f1, f29
    mr r3, r27
    fmr f2, f28
    mr r4, r28
    mr r5, r29
    addi r6, r1, 0xa4
    bl fn_80468534
    li r3, 0x1
    b lbl_fn_80468038_000005AC
lbl_fn_80468038_000005A8:
    li r3, 0x0
lbl_fn_80468038_000005AC:
    addi r11, r1, 0x1a0
    psq_l f31, 0x1d8(r1), 0, 0
    lfd f31, 0x1d0(r1)
    psq_l f30, 0x1c8(r1), 0, 0
    lfd f30, 0x1c0(r1)
    psq_l f29, 0x1b8(r1), 0, 0
    lfd f29, 0x1b0(r1)
    psq_l f28, 0x1a8(r1), 0, 0
    lfd f28, 0x1a0(r1)
    bl _restgpr_23
    lwz r0, 0x1e4(r1)
    mtlr r0
    addi r1, r1, 0x1e0
    blr
}

asm void fn_80468534(void)
{
    nofralloc
    stwu r1, -0x1a0(r1)
    mflr r0
    stw r0, 0x1a4(r1)
    addi r11, r1, 0x100
    stfd f31, 0x190(r1)
    psq_st f31, 0x198(r1), 0, 0
    stfd f30, 0x180(r1)
    psq_st f30, 0x188(r1), 0, 0
    stfd f29, 0x170(r1)
    psq_st f29, 0x178(r1), 0, 0
    stfd f28, 0x160(r1)
    psq_st f28, 0x168(r1), 0, 0
    stfd f27, 0x150(r1)
    psq_st f27, 0x158(r1), 0, 0
    stfd f26, 0x140(r1)
    psq_st f26, 0x148(r1), 0, 0
    stfd f25, 0x130(r1)
    psq_st f25, 0x138(r1), 0, 0
    stfd f24, 0x120(r1)
    psq_st f24, 0x128(r1), 0, 0
    stfd f23, 0x110(r1)
    psq_st f23, 0x118(r1), 0, 0
    stfd f22, 0x100(r1)
    psq_st f22, 0x108(r1), 0, 0
    bl _savegpr_22
    fmr f27, f1
    stfs f2, 0x40(r1)
    li r0, 0x0
    lfs f2, 0x8(r6)
    psq_l f1, 0x0(r6), 0, 0
    addi r7, r1, 0x2c
    psq_st f1, 0x0(r7), 0, 0
    lis r6, lbl_80755090@ha
    lfs f30, lbl_80886D60
    mr r22, r3
    stw r0, 0xac(r1)
    mr r23, r4
    lfs f3, 0x30(r1)
    mr r24, r5
    stw r0, 0xb0(r1)
    addi r29, r1, 0x14
    lfd f31, lbl_80755090@l(r6)
    addi r28, r1, 0x38
    stw r0, 0xb4(r1)
    addi r27, r1, 0x88
    lfs f23, lbl_80886D78
    addi r26, r1, 0x20
    stw r0, 0xb8(r1)
    li r25, 0x0
    lfs f24, lbl_80886D84
    lis r30, 0x4330
    stfs f2, 0x34(r1)
    lis r31, lbl_80755098@ha
    lfs f25, lbl_80886DBC
    lfs f0, 0x620(r3)
    stfs f30, 0x38(r1)
    fadds f0, f3, f0
    lfs f26, lbl_80886DC0
    stfs f30, 0x3c(r1)
    stfs f0, 0x30(r1)
    lfs f29, 0x538(r3)
lbl_fn_80468534_000006D8:
    xoris r0, r25, 0x8000
    stw r0, 0xcc(r1)
    addi r3, r1, 0x48
    li r4, 0x79
    stw r30, 0xc8(r1)
    lfd f0, 0xc8(r1)
    fsubs f0, f0, f31
    fmadds f0, f23, f0, f27
    fsubs f28, f0, f24
    fmr f1, f28
    bl fn_805F8E70
    psq_l f1, 0x0(r28), 0, 0
    mr r4, r29
    lfs f2, 0x40(r1)
    mr r5, r29
    psq_st f1, 0x0(r29), 0, 0
    addi r3, r1, 0x48
    stfs f2, 0x1c(r1)
    bl fn_805F93C0
    lwz r3, lbl_8087EE98
    mr r6, r29
    lfs f1, 0x620(r22)
    addi r4, r1, 0x78
    addi r5, r1, 0x2c
    addi r8, r22, 0x5b8
    lis r7, 0x8000
    li r9, 0x0
    bl fn_8004D388
    psq_l f1, 0x0(r27), 0, 0
    addi r3, r1, 0x8
    psq_st f1, 0x0(r29), 0, 0
    lfs f2, 0x90(r1)
    lfs f0, 0x34(r1)
    lfs f5, 0x18(r1)
    fsubs f6, f2, f0
    lfs f4, 0x30(r1)
    lfs f3, 0x14(r1)
    lfs f0, 0x2c(r1)
    fsubs f4, f5, f4
    stfs f2, 0x1c(r1)
    fsubs f0, f3, f0
    stfs f4, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f6, 0x10(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f30
    fmr f22, f1
    ble lbl_fn_80468534_000007D4
    fadds f1, f23, f28
    lfd f2, lbl_80755098@l(r31)
    bl fn_8068AEA8
    frsp f29, f1
    fcmpo cr0, f29, f23
    ble lbl_fn_80468534_000007B4
    fsubs f29, f29, f25
lbl_fn_80468534_000007B4:
    fcmpo cr0, f29, f26
    bge lbl_fn_80468534_000007C0
    fadds f29, f29, f25
lbl_fn_80468534_000007C0:
    psq_l f1, 0x0(r29), 0, 0
    fmr f30, f22
    lfs f2, 0x1c(r1)
    psq_st f1, 0x0(r26), 0, 0
    stfs f2, 0x28(r1)
lbl_fn_80468534_000007D4:
    addi r25, r25, 0x1
    cmpwi r25, 0x2
    blt lbl_fn_80468534_000006D8
    addi r3, r1, 0x20
    lfs f2, 0x28(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r23), 0, 0
    stfs f2, 0x8(r23)
    stfs f29, 0x0(r24)
    psq_l f31, 0x198(r1), 0, 0
    lfd f31, 0x190(r1)
    psq_l f30, 0x188(r1), 0, 0
    lfd f30, 0x180(r1)
    psq_l f29, 0x178(r1), 0, 0
    lfd f29, 0x170(r1)
    psq_l f28, 0x168(r1), 0, 0
    lfd f28, 0x160(r1)
    psq_l f27, 0x158(r1), 0, 0
    lfd f27, 0x150(r1)
    psq_l f26, 0x148(r1), 0, 0
    lfd f26, 0x140(r1)
    psq_l f25, 0x138(r1), 0, 0
    lfd f25, 0x130(r1)
    psq_l f24, 0x128(r1), 0, 0
    lfd f24, 0x120(r1)
    psq_l f23, 0x118(r1), 0, 0
    lfd f23, 0x110(r1)
    psq_l f22, 0x108(r1), 0, 0
    lfd f22, 0x100(r1)
    addi r11, r1, 0x100
    bl _restgpr_22
    lwz r0, 0x1a4(r1)
    mtlr r0
    addi r1, r1, 0x1a0
    blr
}

asm void fn_804687B0(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x50
    stfd f31, 0x50(r1)
    psq_st f31, 0x58(r1), 0, 0
    bl _savegpr_23
    lis r4, lbl_807C7030@ha
    lfs f0, lbl_80886D60
    addi r4, r4, lbl_807C7030@l
    mr r27, r5
    psq_l f1, 0x0(r4), 0, 0
    addi r8, r1, 0x14
    lfs f2, 0x8(r4)
    mr r26, r3
    stfs f2, 0x8(r3)
    mr r28, r6
    mr r29, r7
    li r5, 0x0
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r8), 0, 0
    lwz r3, lbl_8087F8A0
    stfs f0, 0x14(r1)
    lwz r6, 0x48(r3)
    stfs f0, 0x18(r1)
    stfs f0, 0x1c(r1)
    b lbl_fn_804687B0_00000940
lbl_fn_804687B0_000008D0:
    lwz r4, 0x38(r6)
    li r3, 0x0
    rlwinm r0, r4, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_804687B0_000008F4
    clrlwi r0, r4, 31
    cmplwi r0, 0x1
    beq lbl_fn_804687B0_000008F4
    li r3, 0x1
lbl_fn_804687B0_000008F4:
    cmpwi r3, 0x0
    bne lbl_fn_804687B0_00000908
    lwz r0, 0x48(r6)
    cmpwi r0, 0x0
    bne lbl_fn_804687B0_0000093C
lbl_fn_804687B0_00000908:
    lfs f3, 0x14(r1)
    addi r5, r5, 0x1
    lfs f0, 0x528(r6)
    lfs f5, 0x18(r1)
    fadds f6, f3, f0
    lfs f4, 0x52c(r6)
    lfs f3, 0x1c(r1)
    lfs f0, 0x530(r6)
    fadds f4, f5, f4
    stfs f6, 0x14(r1)
    fadds f0, f3, f0
    stfs f4, 0x18(r1)
    stfs f0, 0x1c(r1)
lbl_fn_804687B0_0000093C:
    lwz r6, 0x14ac(r6)
lbl_fn_804687B0_00000940:
    cmpwi r6, 0x0
    bne lbl_fn_804687B0_000008D0
    xoris r3, r5, 0x8000
    lis r0, 0x4330
    lis r4, lbl_80755090@ha
    stw r3, 0x24(r1)
    lfd f3, lbl_80755090@l(r4)
    lis r24, lbl_80755018@ha
    stw r0, 0x20(r1)
    addi r24, r24, lbl_80755018@l
    lfs f5, lbl_80886D8C
    li r31, 0x0
    lfd f0, 0x20(r1)
    li r30, 0x0
    lfs f4, 0x14(r1)
    li r25, 0x0
    fsubs f6, f0, f3
    lfs f3, 0x18(r1)
    lfs f0, 0x1c(r1)
    lfs f31, lbl_80886D60
    fdivs f5, f5, f6
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    fmuls f0, f0, f5
    stfs f4, 0x14(r1)
    stfs f3, 0x18(r1)
    stfs f0, 0x1c(r1)
lbl_fn_804687B0_000009AC:
    add r4, r24, r25
    lwz r0, 0x8(r4)
    cmpw r0, r28
    bne lbl_fn_804687B0_00000A7C
    lwz r0, 0x4(r4)
    cmpw r0, r29
    bne lbl_fn_804687B0_00000A7C
    lwz r3, lbl_8087F430
    li r5, 0x0
    lwz r4, 0x0(r4)
    li r7, 0x0
    lwz r6, 0x10d8(r3)
    lwz r0, 0x78(r6)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_804687B0_00000A14
lbl_fn_804687B0_000009EC:
    lwz r3, 0x7c(r6)
    lwzx r0, r3, r7
    cmpw r4, r0
    bne lbl_fn_804687B0_00000A08
    mulli r0, r5, 0x28
    add r23, r3, r0
    b lbl_fn_804687B0_00000A18
lbl_fn_804687B0_00000A08:
    addi r7, r7, 0x28
    addi r5, r5, 0x1
    bdnz lbl_fn_804687B0_000009EC
lbl_fn_804687B0_00000A14:
    li r23, 0x0
lbl_fn_804687B0_00000A18:
    cmpwi r23, 0x0
    beq lbl_fn_804687B0_00000A7C
    lfs f3, 0xc(r23)
    addi r3, r1, 0x8
    lfs f0, 0x1c(r1)
    lfs f5, 0x8(r23)
    fsubs f6, f3, f0
    lfs f4, 0x18(r1)
    lfs f3, 0x4(r23)
    lfs f0, 0x14(r1)
    fsubs f4, f5, f4
    stfs f6, 0x10(r1)
    fsubs f0, f3, f0
    stfs f4, 0xc(r1)
    stfs f0, 0x8(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f31
    fmr f0, f1
    ble lbl_fn_804687B0_00000A7C
    psq_l f1, 0x4(r23), 0, 0
    fmr f31, f0
    lfs f2, 0xc(r23)
    stfs f2, 0x8(r26)
    psq_st f1, 0x0(r26), 0, 0
    lwz r31, 0x0(r23)
lbl_fn_804687B0_00000A7C:
    addi r30, r30, 0x1
    addi r25, r25, 0xc
    cmpwi r30, 0xa
    blt lbl_fn_804687B0_000009AC
    cmpwi r27, 0x0
    beq lbl_fn_804687B0_00000A98
    stw r31, 0x0(r27)
lbl_fn_804687B0_00000A98:
    addi r11, r1, 0x50
    psq_l f31, 0x58(r1), 0, 0
    lfd f31, 0x50(r1)
    bl _restgpr_23
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80468A08(void)
{
    nofralloc
    lis r4, lbl_807C7030@ha
    lis r7, lbl_80755018@ha
    addi r4, r4, lbl_807C7030@l
    li r0, 0x2
    psq_l f1, 0x0(r4), 0, 0
    addi r7, r7, lbl_80755018@l
    lfs f2, 0x8(r4)
    li r9, 0x0
    stfs f2, 0x8(r3)
    li r4, 0x0
    psq_st f1, 0x0(r3), 0, 0
    mtctr r0
lbl_fn_80468A08_00000AE8:
    lwz r0, 0x0(r7)
    cmpw r5, r0
    bne lbl_fn_80468A08_00000B08
    cmpwi r4, 0x9
    bne lbl_fn_80468A08_00000B04
    li r9, 0x259
    b lbl_fn_80468A08_00000B08
lbl_fn_80468A08_00000B04:
    lwz r9, 0xc(r7)
lbl_fn_80468A08_00000B08:
    lwz r0, 0xc(r7)
    addi r4, r4, 0x1
    cmpw r5, r0
    bne lbl_fn_80468A08_00000B2C
    cmpwi r4, 0x9
    bne lbl_fn_80468A08_00000B28
    li r9, 0x259
    b lbl_fn_80468A08_00000B2C
lbl_fn_80468A08_00000B28:
    lwz r9, 0x18(r7)
lbl_fn_80468A08_00000B2C:
    lwz r0, 0x18(r7)
    addi r4, r4, 0x1
    cmpw r5, r0
    bne lbl_fn_80468A08_00000B50
    cmpwi r4, 0x9
    bne lbl_fn_80468A08_00000B4C
    li r9, 0x259
    b lbl_fn_80468A08_00000B50
lbl_fn_80468A08_00000B4C:
    lwz r9, 0x24(r7)
lbl_fn_80468A08_00000B50:
    lwz r0, 0x24(r7)
    addi r4, r4, 0x1
    cmpw r5, r0
    bne lbl_fn_80468A08_00000B74
    cmpwi r4, 0x9
    bne lbl_fn_80468A08_00000B70
    li r9, 0x259
    b lbl_fn_80468A08_00000B74
lbl_fn_80468A08_00000B70:
    lwz r9, 0x30(r7)
lbl_fn_80468A08_00000B74:
    lwz r0, 0x30(r7)
    addi r4, r4, 0x1
    cmpw r5, r0
    bne lbl_fn_80468A08_00000B98
    cmpwi r4, 0x9
    bne lbl_fn_80468A08_00000B94
    li r9, 0x259
    b lbl_fn_80468A08_00000B98
lbl_fn_80468A08_00000B94:
    lwz r9, 0x3c(r7)
lbl_fn_80468A08_00000B98:
    addi r7, r7, 0x3c
    addi r4, r4, 0x1
    bdnz lbl_fn_80468A08_00000AE8
    lwz r4, lbl_8087F430
    li r5, 0x0
    li r8, 0x0
    lwz r7, 0x10d8(r4)
    lwz r0, 0x78(r7)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80468A08_00000BEC
lbl_fn_80468A08_00000BC4:
    lwz r4, 0x7c(r7)
    lwzx r0, r4, r8
    cmpw r9, r0
    bne lbl_fn_80468A08_00000BE0
    mulli r0, r5, 0x28
    add r4, r4, r0
    b lbl_fn_80468A08_00000BF0
lbl_fn_80468A08_00000BE0:
    addi r8, r8, 0x28
    addi r5, r5, 0x1
    bdnz lbl_fn_80468A08_00000BC4
lbl_fn_80468A08_00000BEC:
    li r4, 0x0
lbl_fn_80468A08_00000BF0:
    cmpwi r4, 0x0
    beq lbl_fn_80468A08_00000C08
    psq_l f1, 0x4(r4), 0, 0
    lfs f2, 0xc(r4)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
lbl_fn_80468A08_00000C08:
    cmpwi r6, 0x0
    beqlr
    stw r9, 0x0(r6)
    blr
}

asm void fn_80468B68(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r3, r1, 0x2c
    stmw r25, 0x44(r1)
    lis r29, lbl_807C7030@ha
    mr r30, r4
    mr r25, r5
    mr r31, r6
    mr r26, r7
    addi r4, r29, lbl_807C7030@l
    li r28, 0x0
    li r27, 0x0
    bl fn_8001047C
    addi r3, r1, 0x20
    addi r4, r29, lbl_807C7030@l
    bl fn_8001047C
    addi r3, r1, 0x14
    addi r4, r29, lbl_807C7030@l
    bl fn_8001047C
    lis r3, lbl_80755018@ha
    li r0, 0xa
    addi r3, r3, lbl_80755018@l
    li r4, 0x0
    mtctr r0
lbl_fn_80468B68_00000C7C:
    lwz r0, 0x0(r3)
    cmpw r25, r0
    bne lbl_fn_80468B68_00000CDC
    addi r4, r4, 0x1
    cmpwi r4, 0xa
    bne lbl_fn_80468B68_00000C98
    li r4, 0x0
lbl_fn_80468B68_00000C98:
    mulli r0, r4, 0xc
    lis r3, lbl_80755018@ha
    cmpwi r26, 0x0
    addi r3, r3, lbl_80755018@l
    lwzx r27, r3, r0
    beq lbl_fn_80468B68_00000CB8
    li r28, 0x258
    b lbl_fn_80468B68_00000CE8
lbl_fn_80468B68_00000CB8:
    addi r0, r4, 0x1
    cmpwi r0, 0xa
    bne lbl_fn_80468B68_00000CC8
    li r0, 0x0
lbl_fn_80468B68_00000CC8:
    mulli r0, r0, 0xc
    lis r3, lbl_80755018@ha
    addi r3, r3, lbl_80755018@l
    lwzx r28, r3, r0
    b lbl_fn_80468B68_00000CE8
lbl_fn_80468B68_00000CDC:
    addi r3, r3, 0xc
    addi r4, r4, 0x1
    bdnz lbl_fn_80468B68_00000C7C
lbl_fn_80468B68_00000CE8:
    bl fn_80121F00
    bl fn_8013C504
    mr r4, r25
    bl fn_800EC204
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_80468B68_00000D10
    addi r3, r1, 0x14
    addi r4, r4, 0x4
    bl fn_8000D124
lbl_fn_80468B68_00000D10:
    bl fn_80121F00
    bl fn_8013C504
    mr r4, r27
    bl fn_800EC204
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_80468B68_00000D38
    addi r3, r1, 0x2c
    addi r4, r4, 0x4
    bl fn_8000D124
lbl_fn_80468B68_00000D38:
    bl fn_80121F00
    bl fn_8013C504
    mr r4, r28
    bl fn_800EC204
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_80468B68_00000D60
    addi r3, r1, 0x20
    addi r4, r4, 0x4
    bl fn_8000D124
lbl_fn_80468B68_00000D60:
    addi r3, r1, 0x8
    bl fn_8032AB90
    addi r3, r1, 0x8
    addi r4, r1, 0x14
    bl fn_8032AC1C
    addi r3, r1, 0x8
    addi r4, r1, 0x2c
    bl fn_8032AC1C
    addi r3, r1, 0x8
    addi r4, r1, 0x20
    bl fn_8032AC1C
    mr r3, r30
    addi r4, r1, 0x8
    bl fn_8032AF90
    cmpwi r31, 0x0
    beq lbl_fn_80468B68_00000DA4
    stw r28, 0x0(r31)
lbl_fn_80468B68_00000DA4:
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_8032ABA4
    lmw r25, 0x44(r1)
    li r3, 0x1
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80468D18(void)
{
    nofralloc
    lwz r0, 0x58c(r3)
    li r4, 0x0
    cmpwi r0, 0x10
    bne lbl_fn_80468D18_00000DE8
    lwz r0, 0x14bc(r3)
    cmpwi r0, 0x1
    bne lbl_fn_80468D18_00000DE8
    li r4, 0x1
lbl_fn_80468D18_00000DE8:
    mr r3, r4
    blr
}

asm void fn_80468D40(void)
{
    nofralloc
    lfs f1, lbl_80886E24
    blr
}

asm void fn_80468D48(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    beq lbl_fn_80468D48_00000FD8
    addic. r0, r3, 0x18f0
    beq lbl_fn_80468D48_00000E44
    lwz r4, 0x18f0(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80468D48_00000E44
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_80468D48_00000E44
    bl fn_800897D8
lbl_fn_80468D48_00000E44:
    addi r3, r30, 0x1848
    li r4, -0x1
    bl fn_802375C4
    addi r3, r30, 0x183c
    li r4, -0x1
    bl fn_802375C4
    addic. r29, r30, 0x1830
    beq lbl_fn_80468D48_00000E7C
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_80468D48_00000E7C
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80468D48_00000E7C:
    addi r3, r30, 0x1824
    li r4, -0x1
    bl fn_802375C4
    addic. r3, r30, 0x17a8
    beq lbl_fn_80468D48_00000E98
    li r4, 0x0
    bl fn_80056E40
lbl_fn_80468D48_00000E98:
    addic. r29, r30, 0x179c
    beq lbl_fn_80468D48_00000EB8
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_80468D48_00000EB8
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80468D48_00000EB8:
    addic. r29, r30, 0x1790
    beq lbl_fn_80468D48_00000ED8
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_80468D48_00000ED8
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80468D48_00000ED8:
    lis r4, fn_80059468@ha
    addi r3, r30, 0x15d8
    addi r4, r4, fn_80059468@l
    li r5, 0x58
    li r6, 0x5
    bl fn_806959D8
    addic. r29, r30, 0x1504
    beq lbl_fn_80468D48_00000FAC
    addic. r4, r29, 0x44
    beq lbl_fn_80468D48_00000F28
    beq lbl_fn_80468D48_00000F28
    beq lbl_fn_80468D48_00000F28
    beq lbl_fn_80468D48_00000F28
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_80468D48_00000F28
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_80468D48_00000F28:
    addic. r4, r29, 0x38
    beq lbl_fn_80468D48_00000F54
    beq lbl_fn_80468D48_00000F54
    beq lbl_fn_80468D48_00000F54
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_80468D48_00000F54
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_80468D48_00000F54:
    addic. r4, r29, 0x2c
    beq lbl_fn_80468D48_00000F80
    beq lbl_fn_80468D48_00000F80
    beq lbl_fn_80468D48_00000F80
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_80468D48_00000F80
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_80468D48_00000F80:
    addic. r4, r29, 0x20
    beq lbl_fn_80468D48_00000FAC
    beq lbl_fn_80468D48_00000FAC
    beq lbl_fn_80468D48_00000FAC
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_80468D48_00000FAC
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_80468D48_00000FAC:
    addic. r3, r30, 0x14b0
    beq lbl_fn_80468D48_00000FBC
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80468D48_00000FBC:
    mr r3, r30
    li r4, 0x0
    bl fn_8035B78C
    cmpwi r31, 0x0
    ble lbl_fn_80468D48_00000FD8
    mr r3, r30
    bl dtor_80084684
lbl_fn_80468D48_00000FD8:
    mr r3, r30
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80468F48(void)
{
    nofralloc
    lfs f0, lbl_80886E84
    stfs f0, lbl_8087F500
    blr
}

asm void fn_80468F54(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, lbl_8087F508
    cmpwi r0, 0x0
    bne lbl_fn_80468F54_00001054
    lis r5, lbl_80755394@ha
    li r3, 0xb0
    addi r5, r5, lbl_80755394@l
    li r4, 0x1
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_80468F54_00001050
    mr r4, r31
    bl fn_80468FBC
lbl_fn_80468F54_00001050:
    stw r3, lbl_8087F508
lbl_fn_80468F54_00001054:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    lwz r3, lbl_8087F508
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80468FBC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    bl fn_800D1D3C
    lis r3, lbl_8078FAF0@ha
    addi r30, r28, 0x48
    addi r3, r3, lbl_8078FAF0@l
    stw r3, 0x0(r28)
    mr r3, r30
    bl fn_80473E74
    lis r3, lbl_8078FBB0@ha
    lis r31, lbl_80755394@ha
    li r0, 0x0
    li r6, 0x2
    addi r3, r3, lbl_8078FBB0@l
    addi r31, r31, lbl_80755394@l
    stw r3, 0x0(r30)
    mr r3, r28
    addi r4, r31, 0x1
    li r5, 0x0
    stw r6, 0x8c(r28)
    stw r6, 0x90(r28)
    stw r0, 0x94(r28)
    stw r0, 0x98(r28)
    stw r0, 0x9c(r28)
    stw r0, 0xa0(r28)
    stw r0, 0xa4(r28)
    stw r0, 0xa8(r28)
    stw r0, 0xac(r28)
    bl fn_801F3FF8
    stw r3, 0x50(r28)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r28
    addi r4, r31, 0x20
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x54(r28)
    li r4, 0x1
    bl fn_800D246C
    addi r30, r31, 0x44
    li r29, 0x0
    li r31, 0x0
lbl_fn_80468FBC_0000112C:
    mr r3, r28
    mr r4, r30
    bl fn_801F64D0
    add r5, r28, r31
    li r4, 0x1
    stw r3, 0x58(r5)
    bl fn_800D246C
    addi r29, r29, 0x1
    addi r31, r31, 0x4
    cmpwi r29, 0xa
    blt lbl_fn_80468FBC_0000112C
    lis r31, lbl_80755394@ha
    mr r3, r28
    addi r31, r31, lbl_80755394@l
    li r5, 0x0
    addi r4, r31, 0x63
    bl fn_801F3FF8
    stw r3, 0x84(r28)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r28
    addi r4, r31, 0x85
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x88(r28)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r28
    addi r4, r31, 0xa7
    bl fn_801F64D0
    stw r3, 0x80(r28)
    li r4, 0x1
    bl fn_800D246C
    lwz r12, 0x48(r28)
    addi r3, r28, 0x48
    addi r4, r31, 0xb6
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    addi r3, r31, 0xd9
    bl fn_800C3094
    lwz r31, 0x1c(r1)
    mr r3, r28
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80469144(void)
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
    beq lbl_fn_80469144_000012C4
    lis r4, lbl_8078FAF0@ha
    addi r4, r4, lbl_8078FAF0@l
    stw r4, 0x0(r3)
    lwz r0, lbl_8087F508
    cmpwi r0, 0x0
    beq lbl_fn_80469144_00001238
    li r0, 0x0
    stw r0, lbl_8087F508
lbl_fn_80469144_00001238:
    lis r3, lbl_80755394@ha
    addi r3, r3, lbl_80755394@l
    addi r3, r3, 0xd9
    bl fn_800C3124
    addic. r0, r30, 0xac
    beq lbl_fn_80469144_0000126C
    lwz r4, 0xac(r30)
    cmpwi r4, 0x0
    beq lbl_fn_80469144_0000126C
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_80469144_0000126C
    bl fn_800897D8
lbl_fn_80469144_0000126C:
    addic. r4, r30, 0x9c
    beq lbl_fn_80469144_00001298
    beq lbl_fn_80469144_00001298
    beq lbl_fn_80469144_00001298
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_80469144_00001298
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_80469144_00001298:
    addic. r3, r30, 0x48
    beq lbl_fn_80469144_000012A8
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80469144_000012A8:
    mr r3, r30
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r31, 0x0
    ble lbl_fn_80469144_000012C4
    mr r3, r30
    bl dtor_80084684
lbl_fn_80469144_000012C4:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80469230(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    addi r3, r3, 0x48
    bl fn_80473F50
    cmpwi r3, 0x0
    beq lbl_fn_80469230_00001314
    li r3, 0x0
    b lbl_fn_80469230_00001528
lbl_fn_80469230_00001314:
    mr r3, r29
    bl fn_800D3FA4
    cmpwi r3, 0x0
    bne lbl_fn_80469230_0000132C
    li r3, 0x0
    b lbl_fn_80469230_00001528
lbl_fn_80469230_0000132C:
    addi r3, r29, 0x48
    bl fn_8047059C
    mr r31, r3
    addi r3, r29, 0x48
    bl fn_80470580
    mr r4, r3
    mr r3, r29
    mr r5, r31
    li r6, 0x0
    bl fn_80469D60
    lwz r3, 0x50(r29)
    li r4, 0x1
    lfs f1, lbl_80886E88
    li r5, 0x0
    lfs f2, lbl_80886E8C
    bl fn_804A39EC
    lwz r3, 0x50(r29)
    li r4, 0x1
    lfs f1, lbl_80886E88
    li r5, 0x0
    lwz r0, 0x38(r3)
    lfs f2, lbl_80886E8C
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x54(r29)
    bl fn_804A39EC
    lwz r3, 0x84(r29)
    li r4, 0x1
    lfs f1, lbl_80886E88
    li r5, 0x0
    lfs f2, lbl_80886E90
    bl fn_804A39EC
    lwz r3, 0x88(r29)
    li r4, 0x1
    lfs f1, lbl_80886E88
    li r5, 0x0
    lfs f2, lbl_80886E90
    bl fn_804A39EC
    lwz r3, 0x80(r29)
    li r4, 0x1
    lfs f1, lbl_80886E88
    li r5, 0x0
    lfs f2, lbl_80886E8C
    bl fn_804A3A68
    lwz r3, 0x54(r29)
    mr r30, r29
    li r31, 0x0
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_80469230_000013F4:
    lwz r3, 0x58(r30)
    li r4, 0x1
    lfs f1, lbl_80886E88
    li r5, 0x0
    lfs f2, lbl_80886E8C
    bl fn_804A3A68
    lwz r3, 0x58(r30)
    addi r31, r31, 0x1
    cmpwi r31, 0xa
    addi r30, r30, 0x4
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    blt lbl_fn_80469230_000013F4
    lwz r0, 0xac(r29)
    lis r3, lbl_80755394@ha
    addi r3, r3, lbl_80755394@l
    cmpwi r0, 0x0
    addi r4, r3, 0xe6
    bne lbl_fn_80469230_00001464
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_80469230_00001464
    addi r3, r3, 0x10
    bl fn_8008937C
    stw r3, 0xac(r29)
    mr r30, r3
    b lbl_fn_80469230_00001468
lbl_fn_80469230_00001464:
    li r30, 0x0
lbl_fn_80469230_00001468:
    lis r31, lbl_80755394@ha
    lfs f1, lbl_80886E94
    addi r31, r31, lbl_80755394@l
    lfs f2, lbl_80886E98
    lfs f3, lbl_80886E9C
    mr r3, r30
    addi r4, r31, 0xee
    la r5, lbl_8087E030
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80886E94
    mr r3, r30
    lfs f2, lbl_80886E98
    addi r4, r31, 0xf4
    lfs f3, lbl_80886E9C
    la r5, lbl_8087E034
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80886E94
    mr r3, r30
    lfs f2, lbl_80886E98
    addi r4, r31, 0xfa
    lfs f3, lbl_80886E9C
    la r5, lbl_8087E038
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    mr r3, r30
    addi r4, r31, 0x106
    la r5, lbl_8087E03C
    li r6, 0x0
    li r7, 0x2710
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_80886E94
    mr r3, r30
    lfs f2, lbl_80886E98
    addi r4, r31, 0x10e
    lfs f3, lbl_80886E9C
    la r5, lbl_8087E040
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    li r3, 0x1
lbl_fn_80469230_00001528:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80469494(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    lwz r4, lbl_8087EEF0
    cmpwi r4, 0x0
    beq lbl_fn_80469494_000015C4
    lwz r0, 0xd90(r4)
    li r31, 0x0
    cmpwi r0, 0x0
    beq lbl_fn_80469494_00001594
    mr r3, r4
    addi r4, r4, 0x34
    li r5, 0x34
    bl fn_8007708C
    cmpwi r3, 0x0
    beq lbl_fn_80469494_00001594
    li r31, 0x1
lbl_fn_80469494_00001594:
    cmpwi r31, 0x0
    beq lbl_fn_80469494_000015C4
    addi r3, r30, 0x48
    bl fn_8047059C
    mr r31, r3
    addi r3, r30, 0x48
    bl fn_80470580
    mr r4, r3
    mr r3, r30
    mr r5, r31
    li r6, 0x1
    bl fn_80469D60
lbl_fn_80469494_000015C4:
    lwz r0, 0x90(r30)
    cmpwi r0, 0x2
    beq lbl_fn_80469494_000015DC
    cmpwi r0, 0x3
    beq lbl_fn_80469494_000016A4
    b lbl_fn_80469494_000016E8
lbl_fn_80469494_000015DC:
    lwz r5, 0xa0(r30)
    addi r3, r30, 0x94
    addi r4, r30, 0x98
    li r6, 0xa
    li r7, 0x1
    li r8, 0x3
    bl fn_804A4494
    lwz r31, lbl_8087EF70
    li r4, 0x0
    li r5, 0x4
    mr r3, r31
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_80469494_00001658
    lis r3, lbl_80755310@ha
    lfs f1, lbl_80886E8C
    lwz r4, lbl_80755310@l(r3)
    addi r3, r1, 0xc
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    lwz r12, 0x0(r30)
    mr r3, r30
    li r4, 0x3
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    b lbl_fn_80469494_000016E8
lbl_fn_80469494_00001658:
    mr r3, r31
    li r4, 0x0
    li r5, 0x5
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_80469494_000016E8
    addi r3, r1, 0x8
    li r4, 0x2
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    lwz r12, 0x0(r30)
    mr r3, r30
    li r4, 0x1
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    b lbl_fn_80469494_000016E8
lbl_fn_80469494_000016A4:
    lwz r3, 0xa8(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80469494_000016BC
    lwz r0, 0x70(r3)
    cmpwi r0, 0x5
    bne lbl_fn_80469494_000016E8
lbl_fn_80469494_000016BC:
    cmpwi r3, 0x0
    beq lbl_fn_80469494_000016D0
    bl fn_800D2338
    li r0, 0x0
    stw r0, 0xa8(r30)
lbl_fn_80469494_000016D0:
    lwz r12, 0x0(r30)
    mr r3, r30
    li r4, 0x2
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80469494_000016E8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80469650(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r5, 0x4330
    lfs f0, lbl_80886EA0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    mr r30, r3
    stw r29, 0x24(r1)
    stw r28, 0x20(r1)
    lwz r4, 0x50(r3)
    stw r5, 0x8(r1)
    lwz r0, 0x38(r4)
    stw r5, 0x10(r1)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x54(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x58(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x5c(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x60(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x64(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x68(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x6c(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x70(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x74(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x78(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x7c(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x80(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x84(r3)
    stfs f0, 0x104(r4)
    lwz r4, 0x88(r3)
    stfs f0, 0x104(r4)
    lwz r3, 0xa8(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80469650_000019C0
    lwz r29, 0x80(r3)
    lwz r31, 0x84(r3)
    cmpwi r29, 0x7
    ble lbl_fn_80469650_00001878
    lwz r4, 0x84(r30)
    lis r3, lbl_80755394@ha
    addi r3, r3, lbl_80755394@l
    addi r3, r3, 0x118
    addi r28, r4, 0x58
    bl fn_800DC6B4
    subfic r0, r29, 0xa
    lis r5, lbl_80755320@ha
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    mr r4, r3
    lfd f2, lbl_80755320@l(r5)
    lfd f1, 0x8(r1)
    mr r3, r28
    lfs f0, lbl_80886EA4
    fsubs f1, f1, f2
    fdivs f1, f1, f0
    bl fn_801FECE0
    b lbl_fn_80469650_000018F0
lbl_fn_80469650_00001878:
    cmpwi r29, 0x3
    bge lbl_fn_80469650_000018C8
    lwz r4, 0x84(r30)
    lis r3, lbl_80755394@ha
    addi r3, r3, lbl_80755394@l
    addi r3, r3, 0x118
    addi r28, r4, 0x58
    bl fn_800DC6B4
    xoris r0, r29, 0x8000
    stw r0, 0x14(r1)
    lis r5, lbl_80755320@ha
    mr r4, r3
    lfd f2, lbl_80755320@l(r5)
    mr r3, r28
    lfd f1, 0x10(r1)
    lfs f0, lbl_80886EA4
    fsubs f1, f1, f2
    fdivs f1, f1, f0
    bl fn_801FECE0
    b lbl_fn_80469650_000018F0
lbl_fn_80469650_000018C8:
    lwz r4, 0x84(r30)
    lis r3, lbl_80755394@ha
    addi r3, r3, lbl_80755394@l
    addi r3, r3, 0x118
    addi r28, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80886E8C
    mr r4, r3
    mr r3, r28
    bl fn_801FECE0
lbl_fn_80469650_000018F0:
    cmpwi r31, 0x7
    ble lbl_fn_80469650_00001944
    lwz r4, 0x88(r30)
    lis r3, lbl_80755394@ha
    addi r3, r3, lbl_80755394@l
    addi r3, r3, 0x118
    addi r28, r4, 0x58
    bl fn_800DC6B4
    subfic r0, r31, 0xa
    lis r5, lbl_80755320@ha
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    mr r4, r3
    lfd f2, lbl_80755320@l(r5)
    lfd f1, 0x8(r1)
    mr r3, r28
    lfs f0, lbl_80886EA4
    fsubs f1, f1, f2
    fdivs f1, f1, f0
    bl fn_801FECE0
    b lbl_fn_80469650_00001A08
lbl_fn_80469650_00001944:
    cmpwi r31, 0x3
    bge lbl_fn_80469650_00001994
    lwz r4, 0x88(r30)
    lis r3, lbl_80755394@ha
    addi r3, r3, lbl_80755394@l
    addi r3, r3, 0x118
    addi r28, r4, 0x58
    bl fn_800DC6B4
    xoris r0, r31, 0x8000
    stw r0, 0x14(r1)
    lis r5, lbl_80755320@ha
    mr r4, r3
    lfd f2, lbl_80755320@l(r5)
    mr r3, r28
    lfd f1, 0x10(r1)
    lfs f0, lbl_80886EA4
    fsubs f1, f1, f2
    fdivs f1, f1, f0
    bl fn_801FECE0
    b lbl_fn_80469650_00001A08
lbl_fn_80469650_00001994:
    lwz r4, 0x88(r30)
    lis r3, lbl_80755394@ha
    addi r3, r3, lbl_80755394@l
    addi r3, r3, 0x118
    addi r28, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80886E8C
    mr r4, r3
    mr r3, r28
    bl fn_801FECE0
    b lbl_fn_80469650_00001A08
lbl_fn_80469650_000019C0:
    lwz r4, 0x84(r30)
    lis r31, lbl_80755394@ha
    addi r31, r31, lbl_80755394@l
    addi r3, r31, 0x118
    addi r28, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80886E88
    mr r4, r3
    mr r3, r28
    bl fn_801FECE0
    lwz r4, 0x88(r30)
    addi r3, r31, 0x118
    addi r28, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80886E88
    mr r4, r3
    mr r3, r28
    bl fn_801FECE0
lbl_fn_80469650_00001A08:
    lwz r0, 0x90(r30)
    cmpwi r0, 0x2
    beq lbl_fn_80469650_00001A20
    cmpwi r0, 0x3
    beq lbl_fn_80469650_00001A2C
    b lbl_fn_80469650_00001A34
lbl_fn_80469650_00001A20:
    mr r3, r30
    bl fn_80469AB8
    b lbl_fn_80469650_00001A34
lbl_fn_80469650_00001A2C:
    mr r3, r30
    bl fn_80469C64
lbl_fn_80469650_00001A34:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}
