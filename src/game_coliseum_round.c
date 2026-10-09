#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_8000DB1C(void);
extern void fn_80042108(void);
extern void fn_8007A154(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_8008B964(void);
extern void fn_800C16B4(void);
extern void fn_800C2448(void);
extern void fn_800D1E9C(void);
extern void fn_800D2338(void);
extern void fn_800D246C(void);
extern void fn_800DC6B4(void);
extern void fn_800F8348(void);
extern void fn_801856A4(void);
extern void fn_801F4998(void);
extern void fn_801FECE0(void);
extern void fn_801FED24(void);
extern void fn_80383728(void);
extern void fn_8041D180(void);
extern void fn_8041D198(void);
extern void fn_8041D23C(void);
extern void fn_8047C1D8(void);
extern void fn_8047CDE8(void);
extern void fn_8047CDFC(void);
extern void fn_8047CE04(void);
extern void fn_8047CE28(void);
extern void fn_8047CF48(void);
extern void fn_804814E8(void);
extern void fn_80483644(void);
extern void fn_80484074(void);
extern void fn_804848C4(void);
extern void fn_804848D0(void);
extern void fn_804862C4(void);
extern void fn_80491528(void);
extern void fn_80531090(void);
extern void fn_805F8E70(void);
extern void fn_805F9190(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9D20(void);
extern void fn_80680770(void);
extern void fn_80686EA4(void);
extern void fn_8068AEA4(void);
extern void fn_8072D210(void);
extern void memmove(void);

/* External data declarations */
extern u8 lbl_80756380[];
extern u8 lbl_80790168[];
extern u8 lbl_807C88F0[];
extern u8 lbl_807C8AB0[];

/* Small data declarations */
extern u32 lbl_8087E0A0;
extern u32 lbl_8087E0A4;
extern u32 lbl_8087EEF8;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F4C0;
extern u32 lbl_8087F540;
extern u32 lbl_8087F544;
extern u32 lbl_8087F548;
extern u32 lbl_8087F558;
extern u32 lbl_80886F80;
extern u32 lbl_80886F84;
extern u32 lbl_80886F88;
extern u32 lbl_80886F8C;
extern u32 lbl_80886F90;
extern u32 lbl_80886F94;
extern u32 lbl_80886F98;
extern u32 lbl_80887000;
extern u32 lbl_80887048;
extern u32 lbl_8088704C;

/* Function declarations */
void fn_8048EE78(void);
void fn_8048F184(void);
void fn_8048F1DC(void);
void fn_8048F844(void);
void fn_8048F9B0(void);
void fn_8048FC0C(void);
void fn_8048FC30(void);
void fn_8048FC38(void);
void fn_8048FC4C(void);
void fn_8048FC7C(void);
void fn_8048FE88(void);
void fn_8048FEF0(void);
void fn_8048FF34(void);
void fn_8048FF60(void);
void fn_8048FFC0(void);
void fn_8048FFC4(void);
void fn_8048FFCC(void);
void fn_8049002C(void);
void fn_80490030(void);
void fn_80490034(void);
void fn_8049003C(void);
void fn_80490098(void);
void fn_80490850(void);

asm void fn_8048EE78(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    cmplwi r4, 0x1
    stw r0, 0x84(r1)
    stfd f31, 0x70(r1)
    psq_st f31, 0x78(r1), 0, 0
    fmr f31, f6
    stfd f30, 0x60(r1)
    psq_st f30, 0x68(r1), 0, 0
    fmr f30, f5
    stfd f29, 0x50(r1)
    psq_st f29, 0x58(r1), 0, 0
    fmr f29, f4
    stfd f28, 0x40(r1)
    psq_st f28, 0x48(r1), 0, 0
    fmr f28, f3
    stfd f27, 0x30(r1)
    psq_st f27, 0x38(r1), 0, 0
    fmr f27, f2
    stfd f26, 0x20(r1)
    psq_st f26, 0x28(r1), 0, 0
    fmr f26, f1
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    bgt lbl_fn_8048EE78_000002C0
    cmpwi r4, 0x0
    bne lbl_fn_8048EE78_0000019C
    lwz r3, 0x23ac(r3)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_8048EE78_000002C0
    lis r30, lbl_80756380@ha
    addi r30, r30, lbl_80756380@l
    addi r4, r30, 0x2b4
    bl fn_801F4998
    lwz r4, 0x23ac(r31)
    addi r3, r30, 0x2bf
    addi r29, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f26
    mr r4, r3
    mr r3, r29
    li r5, 0x0
    bl fn_801FED24
    lwz r4, 0x23ac(r31)
    addi r3, r30, 0x2bf
    addi r29, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f27
    mr r4, r3
    mr r3, r29
    li r5, 0x1
    bl fn_801FED24
    lwz r4, 0x23ac(r31)
    addi r3, r30, 0x2bf
    addi r29, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f28
    mr r4, r3
    mr r3, r29
    li r5, 0x2
    bl fn_801FED24
    lwz r4, 0x23ac(r31)
    addi r3, r30, 0x2bf
    addi r29, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f29
    mr r4, r3
    mr r3, r29
    li r5, 0x3
    bl fn_801FED24
    lwz r4, 0x23ac(r31)
    addi r3, r30, 0x2bf
    addi r29, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80887048
    mr r4, r3
    mr r3, r29
    li r5, 0x4
    bl fn_801FED24
    lwz r4, 0x23ac(r31)
    addi r3, r30, 0x2ca
    addi r29, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f30
    mr r4, r3
    mr r3, r29
    bl fn_801FECE0
    lwz r3, 0x23ac(r31)
    lfs f0, lbl_80886F8C
    stfs f0, 0x104(r3)
    lwz r3, 0x23ac(r31)
    lfs f0, 0xa0(r3)
    fmuls f0, f0, f31
    stfs f0, 0x100(r3)
    lwz r3, 0x23ac(r31)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    b lbl_fn_8048EE78_000002C0
lbl_fn_8048EE78_0000019C:
    lwz r3, 0x23b0(r3)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_8048EE78_000002C0
    lis r30, lbl_80756380@ha
    addi r30, r30, lbl_80756380@l
    addi r4, r30, 0x2b4
    bl fn_801F4998
    lwz r4, 0x23b0(r31)
    addi r3, r30, 0x2bf
    addi r29, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f26
    mr r4, r3
    mr r3, r29
    li r5, 0x0
    bl fn_801FED24
    lwz r4, 0x23b0(r31)
    addi r3, r30, 0x2bf
    addi r29, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f27
    mr r4, r3
    mr r3, r29
    li r5, 0x1
    bl fn_801FED24
    lwz r4, 0x23b0(r31)
    addi r3, r30, 0x2bf
    addi r29, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f28
    mr r4, r3
    mr r3, r29
    li r5, 0x2
    bl fn_801FED24
    lwz r4, 0x23b0(r31)
    addi r3, r30, 0x2bf
    addi r29, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f29
    mr r4, r3
    mr r3, r29
    li r5, 0x3
    bl fn_801FED24
    lwz r4, 0x23b0(r31)
    addi r3, r30, 0x2bf
    addi r29, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80887048
    mr r4, r3
    mr r3, r29
    li r5, 0x4
    bl fn_801FED24
    lwz r4, 0x23b0(r31)
    addi r3, r30, 0x2ca
    addi r29, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f30
    mr r4, r3
    mr r3, r29
    bl fn_801FECE0
    lwz r3, 0x23b0(r31)
    lfs f0, lbl_80886F8C
    stfs f0, 0x104(r3)
    lwz r3, 0x23b0(r31)
    lfs f0, 0xa0(r3)
    fmuls f0, f0, f31
    stfs f0, 0x100(r3)
    lwz r3, 0x23b0(r31)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
lbl_fn_8048EE78_000002C0:
    lwz r0, 0x84(r1)
    psq_l f31, 0x78(r1), 0, 0
    lfd f31, 0x70(r1)
    psq_l f30, 0x68(r1), 0, 0
    lfd f30, 0x60(r1)
    psq_l f29, 0x58(r1), 0, 0
    lfd f29, 0x50(r1)
    psq_l f28, 0x48(r1), 0, 0
    lfd f28, 0x40(r1)
    psq_l f27, 0x38(r1), 0, 0
    lfd f27, 0x30(r1)
    psq_l f26, 0x28(r1), 0, 0
    lfd f26, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_8048F184(void)
{
    nofralloc
    cmplwi r4, 0x1
    bgtlr
    cmpwi r4, 0x0
    bne lbl_fn_8048F184_00000340
    lwz r3, 0x23ac(r3)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beqlr
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    blr
lbl_fn_8048F184_00000340:
    lwz r3, 0x23b0(r3)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beqlr
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    blr
}

asm void fn_8048F1DC(void)
{
    nofralloc
    stwu r1, -0x290(r1)
    mflr r0
    stw r0, 0x294(r1)
    addi r11, r1, 0x260
    stfd f31, 0x280(r1)
    psq_st f31, 0x288(r1), 0, 0
    stfd f30, 0x270(r1)
    psq_st f30, 0x278(r1), 0, 0
    stfd f29, 0x260(r1)
    psq_st f29, 0x268(r1), 0, 0
    bl _savegpr_27
    lwz r0, 0x8(r4)
    mr r30, r3
    mr r31, r4
    cmpwi r0, 0x1
    bne lbl_fn_8048F1DC_0000099C
    lwz r7, 0x4(r4)
    li r27, 0x0
    li r6, 0x0
    lwz r0, 0x114(r7)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8048F1DC_0000099C
lbl_fn_8048F1DC_000003C0:
    lwz r0, 0x110(r7)
    lwz r5, 0x24(r3)
    add r8, r0, r6
    lwz r0, 0x190(r8)
    cmplw r5, r0
    bne lbl_fn_8048F1DC_00000990
    lwz r5, 0x0(r4)
    addi r29, r1, 0x11c
    addi r6, r1, 0x110
    lfs f3, 0x1c(r5)
    mr r3, r29
    lfs f0, 0x10(r5)
    mr r4, r29
    lfs f5, 0x18(r5)
    fsubs f2, f3, f0
    lfs f4, 0xc(r5)
    lfs f3, 0x14(r5)
    lfs f0, 0x8(r5)
    fsubs f4, f5, f4
    stfs f2, 0x118(r1)
    fsubs f0, f3, f0
    stfs f4, 0x114(r1)
    stfs f0, 0x110(r1)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x124(r1)
    bl fn_805F98D0
    lfs f2, 0x124(r1)
    mulli r0, r27, 0x194
    lwz r3, 0x4(r31)
    addi r28, r1, 0x58
    fabs f3, f2
    psq_l f1, 0x0(r29), 0, 0
    lwz r3, 0x110(r3)
    lfs f0, lbl_80886F80
    addi r29, r1, 0x128
    frsp f3, f3
    psq_st f1, 0x0(r28), 0, 0
    add r27, r3, r0
    lfs f31, 0xc(r31)
    fcmpo cr0, f3, f0
    stfs f2, 0x60(r1)
    bge lbl_fn_8048F1DC_00000490
    lfs f3, 0x58(r1)
    lfs f0, lbl_80886F8C
    fcmpo cr0, f3, f0
    ble lbl_fn_8048F1DC_00000484
    lfs f0, lbl_80886F84
    b lbl_fn_8048F1DC_00000488
lbl_fn_8048F1DC_00000484:
    lfs f0, lbl_80886F88
lbl_fn_8048F1DC_00000488:
    stfs f0, 0x84(r1)
    b lbl_fn_8048F1DC_000004A4
lbl_fn_8048F1DC_00000490:
    frsp f2, f2
    lfs f1, 0x58(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x84(r1)
lbl_fn_8048F1DC_000004A4:
    lfs f0, 0x84(r1)
    addi r3, r1, 0x1a8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80886F8C
    addi r4, r1, 0x8c
    lfs f4, 0x1b0(r1)
    mr r5, r4
    lfs f5, 0x1ac(r1)
    addi r3, r1, 0x168
    lfs f6, 0x1a8(r1)
    lfs f7, 0x1c0(r1)
    lfs f8, 0x1bc(r1)
    lfs f9, 0x1b8(r1)
    lfs f10, 0x1d0(r1)
    lfs f11, 0x1cc(r1)
    lfs f12, 0x1c8(r1)
    lfs f13, 0x1d4(r1)
    lfs f29, 0x1c4(r1)
    lfs f30, 0x1b4(r1)
    lfs f0, lbl_80886F90
    psq_l f1, 0x0(r28), 0, 0
    lfs f2, 0x60(r1)
    stfs f3, 0x198(r1)
    stfs f3, 0x19c(r1)
    stfs f3, 0x1a0(r1)
    stfs f0, 0x1a4(r1)
    stfs f6, 0xbc(r1)
    stfs f5, 0xc0(r1)
    stfs f4, 0xc4(r1)
    stfs f6, 0x168(r1)
    stfs f5, 0x16c(r1)
    stfs f4, 0x170(r1)
    stfs f9, 0xb0(r1)
    stfs f8, 0xb4(r1)
    stfs f7, 0xb8(r1)
    stfs f9, 0x178(r1)
    stfs f8, 0x17c(r1)
    stfs f7, 0x180(r1)
    stfs f12, 0xa4(r1)
    stfs f11, 0xa8(r1)
    stfs f10, 0xac(r1)
    stfs f12, 0x188(r1)
    stfs f11, 0x18c(r1)
    stfs f10, 0x190(r1)
    stfs f30, 0x98(r1)
    stfs f29, 0x9c(r1)
    stfs f13, 0xa0(r1)
    stfs f30, 0x174(r1)
    stfs f29, 0x184(r1)
    stfs f13, 0x194(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x94(r1)
    bl fn_805F9750
    lfs f2, 0x94(r1)
    lfs f0, lbl_80886F80
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8048F1DC_000005C0
    lfs f3, 0x90(r1)
    lfs f0, lbl_80886F8C
    fcmpo cr0, f3, f0
    ble lbl_fn_8048F1DC_000005B0
    lfs f0, lbl_80886F84
    b lbl_fn_8048F1DC_000005B4
lbl_fn_8048F1DC_000005B0:
    lfs f0, lbl_80886F88
lbl_fn_8048F1DC_000005B4:
    fneg f0, f0
    stfs f0, 0x80(r1)
    b lbl_fn_8048F1DC_000005D4
lbl_fn_8048F1DC_000005C0:
    lfs f1, 0x90(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x80(r1)
lbl_fn_8048F1DC_000005D4:
    addi r3, r1, 0x80
    lfs f2, lbl_80886F8C
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x10
    psq_st f1, 0x0(r28), 0, 0
    frsp f30, f2
    lfs f3, lbl_80886F98
    addi r4, r1, 0x1c
    lfs f4, 0x58(r1)
    lfs f0, lbl_80886F94
    fmuls f3, f4, f3
    stfs f2, 0x88(r1)
    lfs f29, 0x5c(r1)
    stfs f2, 0x60(r1)
    fmuls f1, f0, f3
    bl fn_8072D210
    lfs f3, lbl_80886F98
    addi r3, r1, 0xc
    lfs f0, lbl_80886F94
    addi r4, r1, 0x18
    fmuls f3, f29, f3
    fmuls f1, f0, f3
    bl fn_8072D210
    lfs f3, lbl_80886F98
    addi r3, r1, 0x8
    lfs f0, lbl_80886F94
    addi r4, r1, 0x14
    fmuls f3, f30, f3
    fmuls f1, f0, f3
    bl fn_8072D210
    lfs f12, 0x18(r1)
    addi r31, r1, 0x64
    lfs f9, 0x10(r1)
    lfs f4, 0xc(r1)
    lfs f8, 0x1c(r1)
    fmuls f0, f9, f12
    lfs f10, 0x8(r1)
    fmuls f3, f9, f4
    fmuls f5, f8, f4
    lfs f11, 0x14(r1)
    fmuls f6, f4, f10
    fmuls f4, f10, f0
    lfs f0, lbl_80886F80
    fmuls f13, f12, f11
    fmuls f7, f9, f6
    fmadds f4, f11, f5, f4
    fmuls f6, f8, f6
    stfs f4, 0x3c(r1)
    fmuls f4, f8, f12
    fmuls f3, f11, f3
    fmadds f7, f8, f13, f7
    fmsubs f5, f9, f13, f6
    fmsubs f3, f10, f4, f3
    stfs f7, 0x44(r1)
    stfs f5, 0x38(r1)
    stfs f3, 0x40(r1)
    lfs f2, 0x168(r27)
    psq_l f1, 0x160(r27), 0, 0
    fabs f3, f2
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x6c(r1)
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8048F1DC_000006F8
    lfs f3, 0x64(r1)
    lfs f0, lbl_80886F8C
    fcmpo cr0, f3, f0
    ble lbl_fn_8048F1DC_000006EC
    lfs f0, lbl_80886F84
    b lbl_fn_8048F1DC_000006F0
lbl_fn_8048F1DC_000006EC:
    lfs f0, lbl_80886F88
lbl_fn_8048F1DC_000006F0:
    stfs f0, 0xcc(r1)
    b lbl_fn_8048F1DC_0000070C
lbl_fn_8048F1DC_000006F8:
    frsp f2, f2
    lfs f1, 0x64(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0xcc(r1)
lbl_fn_8048F1DC_0000070C:
    lfs f0, 0xcc(r1)
    addi r3, r1, 0x218
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80886F8C
    addi r4, r1, 0xd4
    lfs f4, 0x220(r1)
    mr r5, r4
    lfs f5, 0x21c(r1)
    addi r3, r1, 0x1d8
    lfs f6, 0x218(r1)
    lfs f7, 0x230(r1)
    lfs f8, 0x22c(r1)
    lfs f9, 0x228(r1)
    lfs f10, 0x240(r1)
    lfs f11, 0x23c(r1)
    lfs f12, 0x238(r1)
    lfs f13, 0x244(r1)
    lfs f30, 0x234(r1)
    lfs f29, 0x224(r1)
    lfs f0, lbl_80886F90
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x6c(r1)
    stfs f3, 0x208(r1)
    stfs f3, 0x20c(r1)
    stfs f3, 0x210(r1)
    stfs f0, 0x214(r1)
    stfs f6, 0x104(r1)
    stfs f5, 0x108(r1)
    stfs f4, 0x10c(r1)
    stfs f6, 0x1d8(r1)
    stfs f5, 0x1dc(r1)
    stfs f4, 0x1e0(r1)
    stfs f9, 0xf8(r1)
    stfs f8, 0xfc(r1)
    stfs f7, 0x100(r1)
    stfs f9, 0x1e8(r1)
    stfs f8, 0x1ec(r1)
    stfs f7, 0x1f0(r1)
    stfs f12, 0xec(r1)
    stfs f11, 0xf0(r1)
    stfs f10, 0xf4(r1)
    stfs f12, 0x1f8(r1)
    stfs f11, 0x1fc(r1)
    stfs f10, 0x200(r1)
    stfs f29, 0xe0(r1)
    stfs f30, 0xe4(r1)
    stfs f13, 0xe8(r1)
    stfs f29, 0x1e4(r1)
    stfs f30, 0x1f4(r1)
    stfs f13, 0x204(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0xdc(r1)
    bl fn_805F9750
    lfs f2, 0xdc(r1)
    lfs f0, lbl_80886F80
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8048F1DC_00000828
    lfs f3, 0xd8(r1)
    lfs f0, lbl_80886F8C
    fcmpo cr0, f3, f0
    ble lbl_fn_8048F1DC_00000818
    lfs f0, lbl_80886F84
    b lbl_fn_8048F1DC_0000081C
lbl_fn_8048F1DC_00000818:
    lfs f0, lbl_80886F88
lbl_fn_8048F1DC_0000081C:
    fneg f0, f0
    stfs f0, 0xc8(r1)
    b lbl_fn_8048F1DC_0000083C
lbl_fn_8048F1DC_00000828:
    lfs f1, 0xd8(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0xc8(r1)
lbl_fn_8048F1DC_0000083C:
    addi r3, r1, 0xc8
    lfs f2, lbl_80886F8C
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x28
    psq_st f1, 0x0(r31), 0, 0
    frsp f30, f2
    lfs f3, lbl_80886F98
    addi r4, r1, 0x34
    lfs f4, 0x64(r1)
    lfs f0, lbl_80886F94
    fmuls f3, f4, f3
    stfs f2, 0xd0(r1)
    lfs f29, 0x68(r1)
    stfs f2, 0x6c(r1)
    fmuls f1, f0, f3
    bl fn_8072D210
    lfs f3, lbl_80886F98
    addi r3, r1, 0x24
    lfs f0, lbl_80886F94
    addi r4, r1, 0x30
    fmuls f3, f29, f3
    fmuls f1, f0, f3
    bl fn_8072D210
    lfs f3, lbl_80886F98
    addi r3, r1, 0x20
    lfs f0, lbl_80886F94
    addi r4, r1, 0x2c
    fmuls f3, f30, f3
    fmuls f1, f0, f3
    bl fn_8072D210
    lfs f11, 0x30(r1)
    fmr f1, f31
    lfs f8, 0x28(r1)
    addi r3, r1, 0x48
    lfs f4, 0x24(r1)
    addi r4, r1, 0x38
    lfs f9, 0x20(r1)
    fmuls f3, f8, f11
    lfs f7, 0x34(r1)
    fmuls f5, f4, f9
    lfs f10, 0x2c(r1)
    fmuls f0, f8, f4
    addi r5, r1, 0x70
    fmuls f6, f8, f5
    fmuls f12, f11, f10
    fmuls f5, f7, f5
    fmuls f4, f7, f4
    fmuls f3, f9, f3
    fmadds f6, f7, f12, f6
    fmsubs f5, f8, f12, f5
    fmadds f4, f10, f4, f3
    stfs f6, 0x54(r1)
    fmuls f3, f7, f11
    fmuls f0, f10, f0
    stfs f5, 0x48(r1)
    stfs f4, 0x4c(r1)
    fmsubs f0, f9, f3, f0
    stfs f0, 0x50(r1)
    bl fn_805F9D20
    addi r3, r1, 0x70
    lfs f3, lbl_80886F8C
    lfs f0, lbl_80886F90
    addi r4, r1, 0x48
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    addi r3, r1, 0x138
    psq_st f1, 0x0(r4), 0, 0
    psq_st f2, 0x8(r4), 0, 0
    stfs f3, 0x128(r1)
    stfs f3, 0x12c(r1)
    stfs f0, 0x130(r1)
    bl fn_805F9190
    mr r4, r29
    mr r5, r29
    addi r3, r1, 0x138
    bl fn_805F93C0
    addi r3, r30, 0x4c
    li r4, 0x0
    bl fn_800C2448
    addi r4, r1, 0x128
    lfs f2, 0x130(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x14(r3), 0, 0
    stfs f2, 0x1c(r3)
    b lbl_fn_8048F1DC_0000099C
lbl_fn_8048F1DC_00000990:
    addi r6, r6, 0x194
    addi r27, r27, 0x1
    bdnz lbl_fn_8048F1DC_000003C0
lbl_fn_8048F1DC_0000099C:
    addi r11, r1, 0x260
    psq_l f31, 0x288(r1), 0, 0
    lfd f31, 0x280(r1)
    psq_l f30, 0x278(r1), 0, 0
    lfd f30, 0x270(r1)
    psq_l f29, 0x268(r1), 0, 0
    lfd f29, 0x260(r1)
    bl _restgpr_27
    lwz r0, 0x294(r1)
    mtlr r0
    addi r1, r1, 0x290
    blr
}

asm void fn_8048F844(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    li r7, 0x0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r4
    stw r30, 0x38(r1)
    mr r30, r3
    stw r29, 0x34(r1)
    li r29, 0x0
    lwz r8, 0x0(r4)
    lwz r0, 0x114(r8)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8048F844_00000B1C
lbl_fn_8048F844_00000A08:
    lwz r9, 0x110(r8)
    lwz r6, 0x24(r3)
    add r5, r9, r7
    lwz r0, 0x190(r5)
    cmplw r6, r0
    bne lbl_fn_8048F844_00000B10
    lbz r0, 0xc(r4)
    cmpwi r0, 0x0
    bne lbl_fn_8048F844_00000AAC
    lbz r0, 0xd(r4)
    cmpwi r0, 0x0
    bne lbl_fn_8048F844_00000AAC
    lbz r0, 0xe(r4)
    cmpwi r0, 0x0
    bne lbl_fn_8048F844_00000AAC
    mulli r0, r29, 0x194
    lfs f3, 0x4(r4)
    li r4, 0x0
    addi r3, r3, 0x4c
    add r5, r9, r0
    lfs f0, 0x18c(r5)
    lfs f2, 0x188(r5)
    fmuls f4, f0, f3
    lfs f1, 0x184(r5)
    lfs f0, 0x180(r5)
    fmuls f2, f2, f3
    fmuls f1, f1, f3
    stfs f4, 0x24(r1)
    fmuls f0, f0, f3
    stfs f1, 0x1c(r1)
    stfs f0, 0x18(r1)
    stfs f2, 0x20(r1)
    bl fn_800C2448
    lfs f0, 0x18(r1)
    stfs f0, 0x34(r3)
    lfs f0, 0x1c(r1)
    stfs f0, 0x38(r3)
    lfs f0, 0x20(r1)
    stfs f0, 0x3c(r3)
    lfs f0, 0x24(r1)
    stfs f0, 0x40(r3)
lbl_fn_8048F844_00000AAC:
    lbz r0, 0xf(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8048F844_00000B1C
    lwz r3, 0x0(r31)
    mulli r0, r29, 0x194
    lfs f3, 0x8(r31)
    lwz r3, 0x110(r3)
    add r3, r3, r0
    lfs f0, 0x28(r3)
    lfs f2, 0x24(r3)
    fmuls f4, f0, f3
    lfs f1, 0x20(r3)
    lfs f0, 0x1c(r3)
    fmuls f2, f2, f3
    fmuls f1, f1, f3
    stfs f4, 0x14(r1)
    fmuls f0, f0, f3
    stfs f1, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f2, 0x10(r1)
    stfs f0, 0x58(r30)
    stfs f1, 0x5c(r30)
    stfs f2, 0x60(r30)
    stfs f4, 0x64(r30)
    b lbl_fn_8048F844_00000B1C
lbl_fn_8048F844_00000B10:
    addi r7, r7, 0x194
    addi r29, r29, 0x1
    bdnz lbl_fn_8048F844_00000A08
lbl_fn_8048F844_00000B1C:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8048F9B0(void)
{
    nofralloc
    stwu r1, -0x100(r1)
    mflr r0
    stw r0, 0x104(r1)
    stw r31, 0xfc(r1)
    stw r30, 0xf8(r1)
    stw r29, 0xf4(r1)
    mr r29, r3
    mr r3, r4
    bl fn_8048FC30
    mr r4, r3
    addi r3, r1, 0xc
    bl fn_8048FC0C
    lbz r0, 0xc(r1)
    cmpwi r0, 0x0
    bne lbl_fn_8048F9B0_00000C90
    lbz r0, 0xd(r1)
    cmpwi r0, 0x0
    bne lbl_fn_8048F9B0_00000C90
    lbz r0, 0xe(r1)
    cmpwi r0, 0x0
    bne lbl_fn_8048F9B0_00000C90
    lwz r0, 0x240c(r29)
    cmpwi r0, 0x1
    beq lbl_fn_8048F9B0_00000BA4
    cmpwi r0, 0x2
    beq lbl_fn_8048F9B0_00000C38
    b lbl_fn_8048F9B0_00000C90
lbl_fn_8048F9B0_00000BA4:
    bl fn_8000DB1C
    bl fn_80484074
    mr r30, r3
    addi r3, r29, 0x1d1c
    bl fn_8047CDFC
    mr r31, r3
    mr r4, r30
    addi r3, r1, 0x4c
    bl fn_80383728
    lfs f1, 0x2410(r29)
    mr r5, r31
    addi r3, r1, 0x78
    addi r4, r1, 0x4c
    bl fn_8047C1D8
    bl fn_8008B964
    bl fn_804848C4
    addi r4, r1, 0x78
    bl fn_8047CDE8
    lwz r6, 0x240c(r29)
    mr r4, r30
    lfs f1, 0x2410(r29)
    addi r3, r1, 0x68
    addi r5, r29, 0x1ab0
    bl fn_8048FC38
    lis r4, fn_8048F1DC@ha
    addi r3, r1, 0x98
    addi r4, r4, fn_8048F1DC@l
    li r5, 0x0
    bl fn_80483644
    bl fn_804814E8
    addi r4, r1, 0x98
    addi r5, r1, 0x68
    bl fn_80491528
    addi r3, r1, 0x98
    li r4, -0x1
    bl fn_8041D23C
    b lbl_fn_8048F9B0_00000C90
lbl_fn_8048F9B0_00000C38:
    bl fn_8000DB1C
    bl fn_80484074
    mr r30, r3
    mr r4, r29
    addi r3, r1, 0xac
    bl fn_804848D0
    addi r3, r1, 0xac
    bl fn_8047CE28
    lfs f1, 0x2410(r29)
    mr r4, r3
    addi r3, r1, 0x30
    bl fn_8047CF48
    addi r3, r1, 0x30
    bl fn_800F8348
    mr r31, r3
    mr r4, r30
    addi r3, r1, 0x40
    bl fn_80383728
    mr r3, r29
    mr r5, r31
    addi r4, r1, 0x40
    bl fn_804862C4
lbl_fn_8048F9B0_00000C90:
    lfs f1, lbl_80886F90
    lfs f0, 0x2414(r29)
    fcmpu cr0, f1, f0
    bne lbl_fn_8048F9B0_00000CAC
    lfs f0, 0x2418(r29)
    fcmpu cr0, f1, f0
    beq lbl_fn_8048F9B0_00000D78
lbl_fn_8048F9B0_00000CAC:
    lbz r0, 0xc(r1)
    cmpwi r0, 0x0
    bne lbl_fn_8048F9B0_00000CF8
    lbz r0, 0xd(r1)
    cmpwi r0, 0x0
    bne lbl_fn_8048F9B0_00000CF8
    lbz r0, 0xe(r1)
    cmpwi r0, 0x0
    bne lbl_fn_8048F9B0_00000CF8
    addi r3, r29, 0x1d1c
    bl fn_8047CE28
    lfs f1, 0x2414(r29)
    mr r4, r3
    addi r3, r1, 0x20
    bl fn_8047CF48
    bl fn_8008B964
    bl fn_804848C4
    addi r4, r1, 0x20
    bl fn_8047CE04
lbl_fn_8048F9B0_00000CF8:
    lbz r0, 0xf(r1)
    cmpwi r0, 0x0
    bne lbl_fn_8048F9B0_00000D28
    lfs f1, 0x2418(r29)
    addi r3, r1, 0x10
    addi r4, r29, 0x1bec
    bl fn_8047CF48
    bl fn_8008B964
    bl fn_800C16B4
    bl fn_801856A4
    addi r4, r1, 0x10
    bl fn_80042108
lbl_fn_8048F9B0_00000D28:
    lwz r0, 0xc(r1)
    addi r3, r1, 0x58
    stw r0, 0x8(r1)
    addi r4, r29, 0x1ab0
    addi r5, r1, 0x8
    lfs f1, 0x2414(r29)
    lfs f2, 0x2418(r29)
    bl fn_8048FC4C
    lis r4, fn_8048F844@ha
    addi r3, r1, 0x84
    addi r4, r4, fn_8048F844@l
    li r5, 0x0
    bl fn_80483644
    bl fn_804814E8
    addi r4, r1, 0x84
    addi r5, r1, 0x58
    bl fn_80491528
    addi r3, r1, 0x84
    li r4, -0x1
    bl fn_8041D23C
lbl_fn_8048F9B0_00000D78:
    lwz r0, 0x104(r1)
    lwz r31, 0xfc(r1)
    lwz r30, 0xf8(r1)
    lwz r29, 0xf4(r1)
    mtlr r0
    addi r1, r1, 0x100
    blr
}

asm void fn_8048FC0C(void)
{
    nofralloc
    lbz r7, 0x0(r4)
    lbz r6, 0x1(r4)
    lbz r5, 0x2(r4)
    lbz r0, 0x3(r4)
    stb r7, 0x0(r3)
    stb r6, 0x1(r3)
    stb r5, 0x2(r3)
    stb r0, 0x3(r3)
    blr
}

asm void fn_8048FC30(void)
{
    nofralloc
    addi r3, r3, 0x48
    blr
}

asm void fn_8048FC38(void)
{
    nofralloc
    stw r4, 0x0(r3)
    stw r5, 0x4(r3)
    stw r6, 0x8(r3)
    stfs f1, 0xc(r3)
    blr
}

asm void fn_8048FC4C(void)
{
    nofralloc
    stw r4, 0x0(r3)
    stfs f1, 0x4(r3)
    stfs f2, 0x8(r3)
    lbz r0, 0x0(r5)
    stb r0, 0xc(r3)
    lbz r0, 0x1(r5)
    stb r0, 0xd(r3)
    lbz r0, 0x2(r5)
    stb r0, 0xe(r3)
    lbz r0, 0x3(r5)
    stb r0, 0xf(r3)
    blr
}

asm void fn_8048FC7C(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r3
    stw r30, 0x38(r1)
    stw r29, 0x34(r1)
    lwz r0, 0x240c(r3)
    cmpwi r0, 0x1
    beq lbl_fn_8048FC7C_00000E38
    cmpwi r0, 0x2
    beq lbl_fn_8048FC7C_00000F78
    b lbl_fn_8048FC7C_00000FF4
lbl_fn_8048FC7C_00000E38:
    lwz r5, lbl_8087F540
    addi r29, r3, 0x1d30
    lwz r3, lbl_8087EFB4
    li r4, 0x0
    lwz r0, 0x1a38(r5)
    lwz r3, 0x2fc(r3)
    mulli r0, r0, 0x65c
    add r5, r5, r0
    addi r30, r5, 0xc8
    bl fn_800C2448
    lfs f2, 0x8(r29)
    addi r5, r31, 0x1ab0
    psq_l f1, 0x0(r29), 0, 0
    li r4, 0x0
    psq_st f1, 0x14(r3), 0, 0
    lfs f0, lbl_80886F8C
    stfs f2, 0x1c(r3)
    lbz r0, lbl_8087F4C0
    lwz r3, 0x240c(r31)
    extsb. r0, r0
    stw r3, 0x10(r1)
    stw r30, 0x8(r1)
    stw r5, 0xc(r1)
    stfs f0, 0x14(r1)
    stw r4, 0x18(r1)
    bne lbl_fn_8048FC7C_00000EC8
    lis r6, lbl_807C88F0@ha
    lis r4, fn_8041D180@ha
    lis r3, fn_8041D198@ha
    li r0, 0x1
    addi r3, r3, fn_8041D198@l
    addi r5, r6, lbl_807C88F0@l
    addi r4, r4, fn_8041D180@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C88F0@l(r6)
    stb r0, lbl_8087F4C0
lbl_fn_8048FC7C_00000EC8:
    lis r3, lbl_807C88F0@ha
    lwz r12, lbl_807C88F0@l(r3)
    cmpwi r12, 0x0
    beq lbl_fn_8048FC7C_00000EEC
    addi r3, r1, 0x1c
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8048FC7C_00000EEC:
    lis r0, fn_8048F1DC@ha
    addic. r0, r0, -3620
    beq lbl_fn_8048FC7C_00000F04
    stw r0, 0x1c(r1)
    li r0, 0x1
    b lbl_fn_8048FC7C_00000F08
lbl_fn_8048FC7C_00000F04:
    li r0, 0x0
lbl_fn_8048FC7C_00000F08:
    cmpwi r0, 0x0
    beq lbl_fn_8048FC7C_00000F20
    lis r3, lbl_807C88F0@ha
    addi r3, r3, lbl_807C88F0@l
    stw r3, 0x18(r1)
    b lbl_fn_8048FC7C_00000F28
lbl_fn_8048FC7C_00000F20:
    li r0, 0x0
    stw r0, 0x18(r1)
lbl_fn_8048FC7C_00000F28:
    lwz r3, lbl_8087F558
    addi r4, r1, 0x18
    addi r5, r1, 0x8
    bl fn_80491528
    addic. r3, r1, 0x18
    beq lbl_fn_8048FC7C_00000FF4
    lwz r4, 0x18(r1)
    cmpwi r4, 0x0
    beq lbl_fn_8048FC7C_00000FF4
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_8048FC7C_00000F6C
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8048FC7C_00000F6C:
    li r0, 0x0
    stw r0, 0x18(r1)
    b lbl_fn_8048FC7C_00000FF4
lbl_fn_8048FC7C_00000F78:
    lwz r0, 0x1f14(r3)
    li r30, 0x0
    li r4, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8048FC7C_00000FF4
lbl_fn_8048FC7C_00000F90:
    lwz r5, 0x1f10(r3)
    lwzx r0, r5, r4
    cmpwi r0, -0x2
    bne lbl_fn_8048FC7C_00000FE8
    lwz r0, 0x1f14(r31)
    add r3, r5, r4
    addi r4, r3, 0x4
    slwi r0, r0, 2
    add r0, r5, r0
    subf r0, r3, r0
    srawi r0, r0, 2
    addze r5, r0
    subi r0, r5, 0x1
    slwi r5, r0, 2
    bl memmove
    lwz r3, 0x1f14(r31)
    mr r4, r30
    subi r0, r3, 0x1
    stw r0, 0x1f14(r31)
    lwz r3, lbl_8087EEF8
    bl fn_8007A154
    b lbl_fn_8048FC7C_00000FF4
lbl_fn_8048FC7C_00000FE8:
    addi r30, r30, 0x1
    addi r4, r4, 0x4
    bdnz lbl_fn_8048FC7C_00000F90
lbl_fn_8048FC7C_00000FF4:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8048FE88(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x2400(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8048FE88_00001064
    li r3, 0xb0
    li r4, 0x1
    la r5, lbl_8087E0A4
    la r6, lbl_8087E0A0
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8048FE88_00001058
    mr r4, r31
    bl fn_80531090
lbl_fn_8048FE88_00001058:
    stw r3, 0x2400(r31)
    li r4, 0x1
    bl fn_800D246C
lbl_fn_8048FE88_00001064:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8048FEF0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x2400(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8048FEF0_000010A8
    mr r3, r0
    bl fn_800D2338
    li r0, 0x0
    stw r0, 0x2400(r31)
lbl_fn_8048FEF0_000010A8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8048FF34(void)
{
    nofralloc
    lwz r3, 0x2400(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8048FF34_000010E0
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_8048FF34_000010E0
    li r3, 0x1
    blr
lbl_fn_8048FF34_000010E0:
    li r3, 0x0
    blr
}

asm void fn_8048FF60(void)
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
    beq lbl_fn_8048FF60_0000112C
    li r0, 0x0
    stw r0, lbl_8087F548
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r31, 0x0
    ble lbl_fn_8048FF60_0000112C
    mr r3, r30
    bl dtor_80084684
lbl_fn_8048FF60_0000112C:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8048FFC0(void)
{
    nofralloc
    blr
}

asm void fn_8048FFC4(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_8048FFCC(void)
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
    beq lbl_fn_8048FFCC_00001198
    li r0, 0x0
    stw r0, lbl_8087F544
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r31, 0x0
    ble lbl_fn_8048FFCC_00001198
    mr r3, r30
    bl dtor_80084684
lbl_fn_8048FFCC_00001198:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8049002C(void)
{
    nofralloc
    blr
}

asm void fn_80490030(void)
{
    nofralloc
    blr
}

asm void fn_80490034(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_8049003C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, 0xa2
    stw r0, 0x14(r1)
    addi r0, r5, 0x37c3
    lwz r3, 0x8(r3)
    subf r0, r3, r0
    cmplw r4, r0
    ble lbl_fn_8049003C_0000120C
    lis r4, lbl_80756380@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80756380@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1c8
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8049003C_0000120C:
    lwz r0, 0x14(r1)
    li r3, 0x0
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80490098(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_27
    li r7, 0x0
    addi r8, r3, 0x8
    stw r7, 0x14(r1)
    lis r6, 0xa2
    mr r30, r5
    mr r28, r3
    stw r7, 0x18(r1)
    addi r0, r6, 0x37c3
    mr r29, r4
    stw r7, 0x1c(r1)
    stw r8, 0x20(r1)
    stw r7, 0x24(r1)
    lwz r31, 0x8(r3)
    lwz r5, 0x4(r3)
    subf r0, r31, r0
    add r3, r5, r4
    subf r3, r31, r3
    stw r3, 0x10(r1)
    cmplw r3, r0
    ble lbl_fn_80490098_000012A8
    lis r4, lbl_80756380@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80756380@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1c8
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80490098_000012A8:
    lis r3, 0x36
    addi r0, r3, 0x1296
    cmplw r31, r0
    bge lbl_fn_80490098_000012F8
    addi r5, r31, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x10(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r4, r3, r4
    addi r3, r1, 0x8
    srwi r4, r4, 2
    stw r4, 0x8(r1)
    cmplw r4, r0
    bge lbl_fn_80490098_000012EC
    addi r3, r1, 0x10
lbl_fn_80490098_000012EC:
    lwz r0, 0x0(r3)
    add r31, r31, r0
    b lbl_fn_80490098_0000133C
lbl_fn_80490098_000012F8:
    lis r3, 0x6c
    addi r0, r3, 0x252c
    cmplw r31, r0
    bge lbl_fn_80490098_00001334
    addi r3, r31, 0x1
    lwz r0, 0x10(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_80490098_00001328
    addi r3, r1, 0x10
lbl_fn_80490098_00001328:
    lwz r0, 0x0(r3)
    add r31, r31, r0
    b lbl_fn_80490098_0000133C
lbl_fn_80490098_00001334:
    lis r3, 0xa2
    addi r31, r3, 0x37c3
lbl_fn_80490098_0000133C:
    lis r3, 0xa2
    addi r0, r3, 0x37c3
    cmplw r31, r0
    ble lbl_fn_80490098_00001370
    lis r4, lbl_80756380@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80756380@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1c8
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80490098_00001370:
    mulli r3, r31, 0x194
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_fn_80490098_000013A4
    lis r3, __files@ha
    lis r4, lbl_80790168@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80790168@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80490098_000013A4:
    lwz r0, 0x18(r1)
    stw r27, 0x14(r1)
    mulli r3, r0, 0x194
    stw r31, 0x1c(r1)
    lwz r0, 0x4(r28)
    stw r0, 0x24(r1)
    mulli r0, r0, 0x194
    add r0, r27, r0
    add r4, r3, r0
    mtctr r29
    cmpwi r29, 0x0
    beq lbl_fn_80490098_00001688
lbl_fn_80490098_000013D4:
    cmpwi r4, 0x0
    beq lbl_fn_80490098_00001674
    lwz r0, 0x0(r30)
    stw r0, 0x0(r4)
    lfs f0, 0x4(r30)
    stfs f0, 0x4(r4)
    lfs f0, 0x8(r30)
    stfs f0, 0x8(r4)
    lfs f0, 0xc(r30)
    stfs f0, 0xc(r4)
    lfs f0, 0x10(r30)
    stfs f0, 0x10(r4)
    lfs f0, 0x14(r30)
    stfs f0, 0x14(r4)
    lfs f0, 0x18(r30)
    stfs f0, 0x18(r4)
    lfs f0, 0x1c(r30)
    stfs f0, 0x1c(r4)
    lfs f0, 0x20(r30)
    stfs f0, 0x20(r4)
    lfs f0, 0x24(r30)
    stfs f0, 0x24(r4)
    lfs f0, 0x28(r30)
    stfs f0, 0x28(r4)
    lfs f0, 0x2c(r30)
    stfs f0, 0x2c(r4)
    lfs f0, 0x30(r30)
    stfs f0, 0x30(r4)
    lfs f0, 0x34(r30)
    stfs f0, 0x34(r4)
    lfs f0, 0x38(r30)
    stfs f0, 0x38(r4)
    lfs f0, 0x3c(r30)
    stfs f0, 0x3c(r4)
    lfs f0, 0x40(r30)
    stfs f0, 0x40(r4)
    lfs f0, 0x44(r30)
    stfs f0, 0x44(r4)
    lfs f0, 0x48(r30)
    stfs f0, 0x48(r4)
    lwz r0, 0x4c(r30)
    stw r0, 0x4c(r4)
    lwz r0, 0x50(r30)
    stw r0, 0x50(r4)
    lwz r0, 0x54(r30)
    stw r0, 0x54(r4)
    lwz r0, 0x58(r30)
    stw r0, 0x58(r4)
    lwz r0, 0x5c(r30)
    stw r0, 0x5c(r4)
    lwz r0, 0x60(r30)
    stw r0, 0x60(r4)
    lwz r0, 0x64(r30)
    stw r0, 0x64(r4)
    lfs f0, 0x68(r30)
    stfs f0, 0x68(r4)
    lfs f0, 0x6c(r30)
    stfs f0, 0x6c(r4)
    lfs f0, 0x70(r30)
    stfs f0, 0x70(r4)
    lfs f0, 0x74(r30)
    stfs f0, 0x74(r4)
    lfs f0, 0x78(r30)
    stfs f0, 0x78(r4)
    lfs f0, 0x7c(r30)
    stfs f0, 0x7c(r4)
    lfs f0, 0x80(r30)
    stfs f0, 0x80(r4)
    psq_l f1, 0x84(r30), 0, 0
    psq_st f1, 0x84(r4), 0, 0
    lfs f2, 0x8c(r30)
    stfs f2, 0x8c(r4)
    lfs f0, 0x90(r30)
    stfs f0, 0x90(r4)
    lwz r0, 0x94(r30)
    stw r0, 0x94(r4)
    lwz r0, 0x98(r30)
    stw r0, 0x98(r4)
    lfs f0, 0x9c(r30)
    stfs f0, 0x9c(r4)
    lfs f0, 0xa0(r30)
    stfs f0, 0xa0(r4)
    lfs f0, 0xa4(r30)
    stfs f0, 0xa4(r4)
    lfs f0, 0xa8(r30)
    stfs f0, 0xa8(r4)
    lfs f0, 0xac(r30)
    stfs f0, 0xac(r4)
    psq_l f1, 0xb0(r30), 0, 0
    psq_st f1, 0xb0(r4), 0, 0
    lfs f2, 0xb8(r30)
    stfs f2, 0xb8(r4)
    lwz r0, 0xbc(r30)
    stw r0, 0xbc(r4)
    psq_l f1, 0xc0(r30), 0, 0
    psq_st f1, 0xc0(r4), 0, 0
    psq_l f2, 0xc8(r30), 0, 0
    psq_st f2, 0xc8(r4), 0, 0
    psq_l f1, 0xd0(r30), 0, 0
    psq_st f1, 0xd0(r4), 0, 0
    psq_l f2, 0xd8(r30), 0, 0
    psq_st f2, 0xd8(r4), 0, 0
    psq_l f1, 0xe0(r30), 0, 0
    psq_st f1, 0xe0(r4), 0, 0
    psq_l f2, 0xe8(r30), 0, 0
    psq_st f2, 0xe8(r4), 0, 0
    psq_l f1, 0xf0(r30), 0, 0
    psq_st f1, 0xf0(r4), 0, 0
    psq_l f2, 0xf8(r30), 0, 0
    psq_st f2, 0xf8(r4), 0, 0
    lwz r0, 0x100(r30)
    stw r0, 0x100(r4)
    lwz r0, 0x104(r30)
    stw r0, 0x104(r4)
    lfs f0, 0x108(r30)
    stfs f0, 0x108(r4)
    lwz r0, 0x10c(r30)
    stw r0, 0x10c(r4)
    lwz r0, 0x110(r30)
    stw r0, 0x110(r4)
    lfs f0, 0x114(r30)
    stfs f0, 0x114(r4)
    psq_l f1, 0x118(r30), 0, 0
    psq_st f1, 0x118(r4), 0, 0
    psq_l f1, 0x120(r30), 0, 0
    psq_st f1, 0x120(r4), 0, 0
    psq_l f1, 0x128(r30), 0, 0
    psq_st f1, 0x128(r4), 0, 0
    psq_l f1, 0x130(r30), 0, 0
    psq_st f1, 0x130(r4), 0, 0
    psq_l f1, 0x138(r30), 0, 0
    psq_st f1, 0x138(r4), 0, 0
    psq_l f2, 0x140(r30), 0, 0
    psq_st f2, 0x140(r4), 0, 0
    lwz r0, 0x148(r30)
    stw r0, 0x148(r4)
    lwz r0, 0x14c(r30)
    stw r0, 0x14c(r4)
    lwz r0, 0x150(r30)
    stw r0, 0x150(r4)
    psq_l f1, 0x154(r30), 0, 0
    psq_st f1, 0x154(r4), 0, 0
    lfs f2, 0x15c(r30)
    stfs f2, 0x15c(r4)
    psq_l f1, 0x160(r30), 0, 0
    psq_st f1, 0x160(r4), 0, 0
    lfs f2, 0x168(r30)
    stfs f2, 0x168(r4)
    lwz r0, 0x16c(r30)
    stw r0, 0x16c(r4)
    lfs f0, 0x170(r30)
    stfs f0, 0x170(r4)
    lfs f0, 0x174(r30)
    stfs f0, 0x174(r4)
    lfs f0, 0x178(r30)
    stfs f0, 0x178(r4)
    lfs f0, 0x17c(r30)
    stfs f0, 0x17c(r4)
    lfs f0, 0x180(r30)
    stfs f0, 0x180(r4)
    lfs f0, 0x184(r30)
    stfs f0, 0x184(r4)
    lfs f0, 0x188(r30)
    stfs f0, 0x188(r4)
    lfs f0, 0x18c(r30)
    stfs f0, 0x18c(r4)
    lwz r0, 0x190(r30)
    stw r0, 0x190(r4)
lbl_fn_80490098_00001674:
    lwz r3, 0x18(r1)
    addi r4, r4, 0x194
    addi r0, r3, 0x1
    stw r0, 0x18(r1)
    bdnz lbl_fn_80490098_000013D4
lbl_fn_80490098_00001688:
    lwz r0, 0x4(r28)
    lwz r3, 0x24(r1)
    mulli r4, r0, 0x194
    lwz r0, 0x0(r28)
    lwz r5, 0x14(r1)
    mulli r3, r3, 0x194
    add r4, r0, r4
    add r3, r5, r3
    b lbl_fn_80490098_00001968
lbl_fn_80490098_000016AC:
    subic. r3, r3, 0x194
    subi r4, r4, 0x194
    beq lbl_fn_80490098_00001950
    lwz r5, 0x0(r4)
    stw r5, 0x0(r3)
    lfs f0, 0x4(r4)
    stfs f0, 0x4(r3)
    lfs f0, 0x8(r4)
    stfs f0, 0x8(r3)
    lfs f0, 0xc(r4)
    stfs f0, 0xc(r3)
    lfs f0, 0x10(r4)
    stfs f0, 0x10(r3)
    lfs f0, 0x14(r4)
    stfs f0, 0x14(r3)
    lfs f0, 0x18(r4)
    stfs f0, 0x18(r3)
    lfs f0, 0x1c(r4)
    stfs f0, 0x1c(r3)
    lfs f0, 0x20(r4)
    stfs f0, 0x20(r3)
    lfs f0, 0x24(r4)
    stfs f0, 0x24(r3)
    lfs f0, 0x28(r4)
    stfs f0, 0x28(r3)
    lfs f0, 0x2c(r4)
    stfs f0, 0x2c(r3)
    lfs f0, 0x30(r4)
    stfs f0, 0x30(r3)
    lfs f0, 0x34(r4)
    stfs f0, 0x34(r3)
    lfs f0, 0x38(r4)
    stfs f0, 0x38(r3)
    lfs f0, 0x3c(r4)
    stfs f0, 0x3c(r3)
    lfs f0, 0x40(r4)
    stfs f0, 0x40(r3)
    lfs f0, 0x44(r4)
    stfs f0, 0x44(r3)
    lfs f0, 0x48(r4)
    stfs f0, 0x48(r3)
    lwz r5, 0x4c(r4)
    stw r5, 0x4c(r3)
    lwz r5, 0x50(r4)
    stw r5, 0x50(r3)
    lwz r5, 0x54(r4)
    stw r5, 0x54(r3)
    lwz r5, 0x58(r4)
    stw r5, 0x58(r3)
    lwz r5, 0x5c(r4)
    stw r5, 0x5c(r3)
    lwz r5, 0x60(r4)
    stw r5, 0x60(r3)
    lwz r5, 0x64(r4)
    stw r5, 0x64(r3)
    lfs f0, 0x68(r4)
    stfs f0, 0x68(r3)
    lfs f0, 0x6c(r4)
    stfs f0, 0x6c(r3)
    lfs f0, 0x70(r4)
    stfs f0, 0x70(r3)
    lfs f0, 0x74(r4)
    stfs f0, 0x74(r3)
    lfs f0, 0x78(r4)
    stfs f0, 0x78(r3)
    lfs f0, 0x7c(r4)
    stfs f0, 0x7c(r3)
    lfs f0, 0x80(r4)
    stfs f0, 0x80(r3)
    lfs f2, 0x8c(r4)
    psq_l f1, 0x84(r4), 0, 0
    psq_st f1, 0x84(r3), 0, 0
    stfs f2, 0x8c(r3)
    lfs f0, 0x90(r4)
    stfs f0, 0x90(r3)
    lwz r5, 0x94(r4)
    stw r5, 0x94(r3)
    lwz r5, 0x98(r4)
    stw r5, 0x98(r3)
    lfs f0, 0x9c(r4)
    stfs f0, 0x9c(r3)
    lfs f0, 0xa0(r4)
    stfs f0, 0xa0(r3)
    lfs f0, 0xa4(r4)
    stfs f0, 0xa4(r3)
    lfs f0, 0xa8(r4)
    stfs f0, 0xa8(r3)
    lfs f0, 0xac(r4)
    stfs f0, 0xac(r3)
    lfs f2, 0xb8(r4)
    psq_l f1, 0xb0(r4), 0, 0
    psq_st f1, 0xb0(r3), 0, 0
    stfs f2, 0xb8(r3)
    lwz r5, 0xbc(r4)
    stw r5, 0xbc(r3)
    psq_l f2, 0xc8(r4), 0, 0
    psq_l f1, 0xc0(r4), 0, 0
    psq_st f1, 0xc0(r3), 0, 0
    psq_st f2, 0xc8(r3), 0, 0
    psq_l f2, 0xd8(r4), 0, 0
    psq_l f1, 0xd0(r4), 0, 0
    psq_st f1, 0xd0(r3), 0, 0
    psq_st f2, 0xd8(r3), 0, 0
    psq_l f2, 0xe8(r4), 0, 0
    psq_l f1, 0xe0(r4), 0, 0
    psq_st f1, 0xe0(r3), 0, 0
    psq_st f2, 0xe8(r3), 0, 0
    psq_l f2, 0xf8(r4), 0, 0
    psq_l f1, 0xf0(r4), 0, 0
    psq_st f1, 0xf0(r3), 0, 0
    psq_st f2, 0xf8(r3), 0, 0
    lwz r5, 0x100(r4)
    stw r5, 0x100(r3)
    lwz r5, 0x104(r4)
    stw r5, 0x104(r3)
    lfs f0, 0x108(r4)
    stfs f0, 0x108(r3)
    lwz r5, 0x10c(r4)
    stw r5, 0x10c(r3)
    lwz r5, 0x110(r4)
    stw r5, 0x110(r3)
    lfs f0, 0x114(r4)
    stfs f0, 0x114(r3)
    psq_l f1, 0x118(r4), 0, 0
    psq_st f1, 0x118(r3), 0, 0
    psq_l f1, 0x120(r4), 0, 0
    psq_st f1, 0x120(r3), 0, 0
    psq_l f1, 0x128(r4), 0, 0
    psq_st f1, 0x128(r3), 0, 0
    psq_l f1, 0x130(r4), 0, 0
    psq_st f1, 0x130(r3), 0, 0
    psq_l f2, 0x140(r4), 0, 0
    psq_l f1, 0x138(r4), 0, 0
    psq_st f1, 0x138(r3), 0, 0
    psq_st f2, 0x140(r3), 0, 0
    lwz r5, 0x148(r4)
    stw r5, 0x148(r3)
    lwz r5, 0x14c(r4)
    stw r5, 0x14c(r3)
    lwz r5, 0x150(r4)
    stw r5, 0x150(r3)
    lfs f2, 0x15c(r4)
    psq_l f1, 0x154(r4), 0, 0
    psq_st f1, 0x154(r3), 0, 0
    stfs f2, 0x15c(r3)
    lfs f2, 0x168(r4)
    psq_l f1, 0x160(r4), 0, 0
    psq_st f1, 0x160(r3), 0, 0
    stfs f2, 0x168(r3)
    lwz r5, 0x16c(r4)
    stw r5, 0x16c(r3)
    lfs f0, 0x170(r4)
    stfs f0, 0x170(r3)
    lfs f0, 0x174(r4)
    stfs f0, 0x174(r3)
    lfs f0, 0x178(r4)
    stfs f0, 0x178(r3)
    lfs f0, 0x17c(r4)
    stfs f0, 0x17c(r3)
    lfs f0, 0x180(r4)
    stfs f0, 0x180(r3)
    lfs f0, 0x184(r4)
    stfs f0, 0x184(r3)
    lfs f0, 0x188(r4)
    stfs f0, 0x188(r3)
    lfs f0, 0x18c(r4)
    stfs f0, 0x18c(r3)
    lwz r5, 0x190(r4)
    stw r5, 0x190(r3)
lbl_fn_80490098_00001950:
    lwz r6, 0x24(r1)
    lwz r5, 0x18(r1)
    subi r6, r6, 0x1
    stw r6, 0x24(r1)
    addi r5, r5, 0x1
    stw r5, 0x18(r1)
lbl_fn_80490098_00001968:
    cmplw r0, r4
    blt lbl_fn_80490098_000016AC
    li r4, 0x0
    stw r4, 0x4(r28)
    addic. r0, r1, 0x14
    lwz r3, 0x8(r28)
    lwz r0, 0x1c(r1)
    stw r0, 0x8(r28)
    stw r3, 0x1c(r1)
    lwz r0, 0x14(r1)
    lwz r3, 0x0(r28)
    stw r0, 0x0(r28)
    stw r3, 0x14(r1)
    lwz r0, 0x18(r1)
    stw r0, 0x4(r28)
    stw r4, 0x18(r1)
    beq lbl_fn_80490098_000019C0
    lwz r3, 0x14(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80490098_000019C0
    stw r4, 0x18(r1)
    bl dtor_80084684
lbl_fn_80490098_000019C0:
    addi r11, r1, 0x40
    bl _restgpr_27
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80490850(void)
{
    nofralloc
    lis r4, lbl_807C8AB0@ha
    lfs f3, lbl_80886F98
    addi r3, r4, lbl_807C8AB0@l
    lfs f2, lbl_8088704C
    lfs f1, lbl_80887000
    lfs f0, lbl_80887048
    stfs f3, lbl_807C8AB0@l(r4)
    stfs f2, 0x4(r3)
    stfs f3, 0x8(r3)
    stfs f3, 0xc(r3)
    stfs f1, 0x10(r3)
    stfs f0, 0x14(r3)
    blr
}
