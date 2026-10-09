#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_24(void);
extern void _restgpr_27(void);
extern void _savegpr_24(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_8000D124(void);
extern void fn_8000DD04(void);
extern void fn_80013F78(void);
extern void fn_80070B60(void);
extern void fn_80070C98(void);
extern void fn_80080048(void);
extern void fn_80084320(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_8008A4B0(void);
extern void fn_8008A4E0(void);
extern void fn_8008CCC0(void);
extern void fn_8008CCD4(void);
extern void fn_8008CCE8(void);
extern void fn_8008CD1C(void);
extern void fn_8008CD50(void);
extern void fn_8008E2DC(void);
extern void fn_8008E2E0(void);
extern void fn_8008F5F8(void);
extern void fn_80091C00(void);
extern void fn_800A03A0(void);
extern void fn_800A1060(void);
extern void fn_800D5808(void);
extern void fn_800D87A4(void);
extern void fn_800D87B0(void);
extern void fn_800D8808(void);
extern void fn_800DC6B4(void);
extern void fn_80473E8C(void);
extern void fn_80473F34(void);
extern void fn_80476130(void);
extern void fn_805F93C0(void);
extern void fn_8067E23C(void);
extern void fn_80695720(void);
extern void fn_80695A50(void);
extern void fn_80695AD0(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_80732368[];
extern u8 lbl_80766768[];
extern u8 lbl_80778858[];
extern u8 lbl_80778888[];

/* Small data declarations */
extern u32 lbl_8087D77C;
extern u32 lbl_8087D780;
extern u32 lbl_8087D7C4;
extern u32 lbl_8087D7C8;
extern u32 lbl_8087D7CC;
extern u32 lbl_8087D7D0;
extern u32 lbl_8087D7D4;
extern u32 lbl_8087D7D8;
extern u32 lbl_8087D7DC;
extern u32 lbl_8087D7E0;
extern u32 lbl_8087EF18;
extern u32 lbl_80880B88;
extern u32 lbl_80880B8C;
extern u32 lbl_80880B90;
extern u32 lbl_80880B94;
extern u32 lbl_80880B98;
extern u32 lbl_80880BF8;
extern u32 lbl_80880C00;
extern u32 lbl_80880C08;
extern u32 lbl_80880C0C;
extern u32 lbl_80880C24;

/* Function declarations */
void fn_80094F98(void);
void fn_800952F8(void);
void fn_80095300(void);
void fn_800954DC(void);
void fn_80095750(void);
void fn_80095B08(void);
void fn_80095CD0(void);
void fn_80095D44(void);
void fn_80095F10(void);
void fn_80096218(void);
void fn_80096E94(void);
void fn_800970CC(void);
void fn_80097128(void);
void fn_80097180(void);

asm void fn_80094F98(void)
{
    nofralloc
    stwu r1, -0x1a0(r1)
    mflr r0
    stw r0, 0x1a4(r1)
    addi r5, r1, 0x78
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
    stfd f21, 0xf0(r1)
    psq_st f21, 0xf8(r1), 0, 0
    stfd f20, 0xe0(r1)
    psq_st f20, 0xe8(r1), 0, 0
    stfd f19, 0xd0(r1)
    psq_st f19, 0xd8(r1), 0, 0
    stfd f18, 0xc0(r1)
    psq_st f18, 0xc8(r1), 0, 0
    stw r31, 0xbc(r1)
    stw r30, 0xb8(r1)
    mr r30, r4
    stw r29, 0xb4(r1)
    mr r29, r3
    psq_l f1, 0x8(r4), 0, 0
    psq_l f2, 0x10(r4), 0, 0
    psq_l f3, 0x18(r4), 0, 0
    psq_l f4, 0x20(r4), 0, 0
    psq_l f5, 0x28(r4), 0, 0
    psq_l f6, 0x30(r4), 0, 0
    psq_st f6, 0x28(r5), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    psq_st f2, 0x8(r5), 0, 0
    psq_st f3, 0x10(r5), 0, 0
    psq_st f4, 0x18(r5), 0, 0
    psq_st f5, 0x20(r5), 0, 0
    lwz r8, 0xb0(r4)
    cmpwi r8, 0x0
    blt lbl_fn_80094F98_00000288
    lwz r0, 0xb4(r4)
    cmpwi r0, 0x0
    blt lbl_fn_80094F98_0000024C
    mulli r0, r0, 0x30
    lwz r7, 0x3c(r4)
    lfs f27, lbl_80880C08
    addi r3, r1, 0x48
    add r6, r7, r0
    mulli r0, r8, 0x30
    lfs f0, 0x2c(r6)
    lfs f7, 0x28(r6)
    lfs f8, 0x24(r6)
    add r7, r7, r0
    lfs f9, 0x20(r6)
    lfs f11, 0x2c(r7)
    lfs f10, 0x28(r7)
    fadds f0, f11, f0
    lfs f11, 0x24(r7)
    fadds f7, f10, f7
    lfs f10, 0x20(r7)
    fadds f8, f11, f8
    lfs f11, 0x1c(r7)
    fadds f9, f10, f9
    lfs f10, 0x1c(r6)
    lfs f12, 0x18(r7)
    fmuls f31, f0, f27
    fadds f10, f11, f10
    lfs f11, 0x18(r6)
    fadds f11, f12, f11
    lfs f13, 0x14(r7)
    lfs f12, 0x14(r6)
    fmuls f30, f7, f27
    lfs f24, 0x10(r7)
    fmuls f29, f8, f27
    fadds f12, f13, f12
    lfs f13, 0x10(r6)
    lfs f25, 0xc(r7)
    fmuls f20, f11, f27
    fadds f13, f24, f13
    lfs f24, 0xc(r6)
    fadds f23, f25, f24
    lfs f26, 0x8(r7)
    lfs f25, 0x8(r6)
    fmuls f19, f12, f27
    lfs f24, 0x4(r7)
    fmuls f28, f9, f27
    fadds f22, f26, f25
    lfs f26, 0x4(r6)
    stfs f19, 0x5c(r1)
    fmuls f19, f13, f27
    fadds f24, f24, f26
    lfs f25, 0x0(r7)
    lfs f26, 0x0(r6)
    fmuls f21, f10, f27
    stfs f20, 0x60(r1)
    fmuls f20, f22, f27
    fadds f25, f25, f26
    stfs f19, 0x58(r1)
    fmuls f26, f23, f27
    fmuls f18, f24, f27
    fmuls f19, f25, f27
    stfs f21, 0x64(r1)
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    stfs f19, 0x48(r1)
    stfs f18, 0x4c(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f20, 0x50(r1)
    stfs f26, 0x54(r1)
    psq_l f2, 0x8(r3), 0, 0
    stfs f28, 0x68(r1)
    stfs f29, 0x6c(r1)
    psq_l f5, 0x20(r3), 0, 0
    stfs f30, 0x70(r1)
    stfs f31, 0x74(r1)
    psq_l f6, 0x28(r3), 0, 0
    stfs f25, 0x18(r1)
    stfs f24, 0x1c(r1)
    stfs f22, 0x20(r1)
    stfs f23, 0x24(r1)
    stfs f13, 0x28(r1)
    stfs f12, 0x2c(r1)
    stfs f11, 0x30(r1)
    stfs f10, 0x34(r1)
    stfs f9, 0x38(r1)
    stfs f8, 0x3c(r1)
    stfs f7, 0x40(r1)
    stfs f0, 0x44(r1)
    psq_st f1, 0x0(r5), 0, 0
    psq_st f2, 0x8(r5), 0, 0
    psq_st f3, 0x10(r5), 0, 0
    psq_st f4, 0x18(r5), 0, 0
    psq_st f5, 0x20(r5), 0, 0
    psq_st f6, 0x28(r5), 0, 0
    b lbl_fn_80094F98_00000288
lbl_fn_80094F98_0000024C:
    mulli r0, r8, 0x30
    lwz r3, 0x3c(r4)
    add r3, r3, r0
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f6, 0x28(r5), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    psq_st f2, 0x8(r5), 0, 0
    psq_st f3, 0x10(r5), 0, 0
    psq_st f4, 0x18(r5), 0, 0
    psq_st f5, 0x20(r5), 0, 0
lbl_fn_80094F98_00000288:
    lfs f7, 0x54(r4)
    addi r31, r1, 0x8
    lfs f0, 0xac(r4)
    mr r5, r31
    psq_l f1, 0x9c(r4), 0, 0
    addi r3, r1, 0x78
    lfs f2, 0xa4(r4)
    fmuls f18, f7, f0
    stfs f2, 0x10(r1)
    mr r4, r31
    psq_st f1, 0x0(r31), 0, 0
    bl fn_805F93C0
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x10(r1)
    stfs f2, 0x8(r29)
    psq_st f1, 0x0(r29), 0, 0
    lfs f0, 0xa8(r30)
    fmuls f0, f0, f18
    stfs f0, 0xc(r29)
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
    psq_l f21, 0xf8(r1), 0, 0
    lfd f21, 0xf0(r1)
    psq_l f20, 0xe8(r1), 0, 0
    lfd f20, 0xe0(r1)
    psq_l f19, 0xd8(r1), 0, 0
    lfd f19, 0xd0(r1)
    psq_l f18, 0xc8(r1), 0, 0
    lfd f18, 0xc0(r1)
    lwz r31, 0xbc(r1)
    lwz r30, 0xb8(r1)
    lwz r29, 0xb4(r1)
    lwz r0, 0x1a4(r1)
    mtlr r0
    addi r1, r1, 0x1a0
    blr
}

asm void fn_800952F8(void)
{
    nofralloc
    addi r3, r3, 0x8
    blr
}

asm void fn_80095300(void)
{
    nofralloc
    stwu r1, -0x1a0(r1)
    mflr r0
    stw r0, 0x1a4(r1)
    addi r11, r1, 0x1a0
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    bl fn_8008E2DC
    mr r3, r28
    bl fn_8000DD04
    mr r4, r3
    addi r3, r1, 0x14
    bl fn_8008CCD4
    mr r3, r27
    addi r4, r1, 0x14
    bl fn_8000D124
    mr r3, r28
    bl fn_8000DD04
    mr r4, r3
    addi r3, r1, 0x8
    bl fn_8008CCC0
    addi r3, r27, 0xc
    addi r4, r1, 0x8
    bl fn_8000D124
    mr r3, r28
    bl fn_800952F8
    mr r29, r3
    addi r3, r1, 0x158
    mr r4, r29
    bl fn_8008CCE8
    lwz r0, 0xb0(r28)
    cmpwi r0, 0x0
    blt lbl_fn_80095300_000004F4
    addi r3, r28, 0x164
    bl fn_80476130
    lwz r0, 0xb4(r28)
    mr r31, r3
    cmpwi r0, 0x0
    blt lbl_fn_80095300_000004C4
    lwz r30, 0xb0(r28)
    addi r3, r29, 0x30
    mr r4, r30
    bl fn_80091C00
    mulli r0, r30, 0x30
    mr r5, r3
    addi r3, r1, 0x128
    add r4, r31, r0
    bl fn_8008CD50
    lfs f1, 0xac(r28)
    mr r4, r27
    addi r3, r1, 0xb0
    bl fn_80070B60
    addi r3, r1, 0x80
    addi r4, r1, 0xb0
    addi r5, r1, 0x128
    bl fn_8008F5F8
    addi r3, r1, 0xb0
    addi r4, r1, 0x80
    bl fn_8008E2E0
    lwz r30, 0xb4(r28)
    addi r3, r29, 0x30
    mr r4, r30
    bl fn_80091C00
    mulli r0, r30, 0x30
    mr r5, r3
    addi r3, r1, 0xf8
    add r4, r31, r0
    bl fn_8008CD50
    lfs f1, 0xac(r28)
    mr r4, r27
    addi r3, r1, 0x98
    bl fn_80070B60
    addi r3, r1, 0x68
    addi r4, r1, 0x98
    addi r5, r1, 0xf8
    bl fn_8008F5F8
    addi r3, r1, 0x98
    addi r4, r1, 0x68
    bl fn_8008E2E0
    addi r3, r1, 0x50
    addi r4, r1, 0xb0
    addi r5, r1, 0x98
    bl fn_80070C98
    mr r3, r27
    addi r4, r1, 0x50
    bl fn_8008E2E0
    b lbl_fn_80095300_0000052C
lbl_fn_80095300_000004C4:
    lwz r30, 0xb0(r28)
    addi r3, r29, 0x30
    mr r4, r30
    bl fn_80091C00
    mulli r0, r30, 0x30
    mr r5, r3
    addi r3, r1, 0xc8
    add r4, r31, r0
    bl fn_8008CD50
    addi r3, r1, 0x158
    addi r4, r1, 0xc8
    bl fn_8008CD1C
lbl_fn_80095300_000004F4:
    lfs f1, 0xac(r28)
    mr r4, r27
    addi r3, r1, 0x38
    bl fn_80070B60
    mr r3, r27
    addi r4, r1, 0x38
    bl fn_8008E2E0
    mr r4, r27
    addi r3, r1, 0x20
    addi r5, r1, 0x158
    bl fn_8008F5F8
    mr r3, r27
    addi r4, r1, 0x20
    bl fn_8008E2E0
lbl_fn_80095300_0000052C:
    addi r11, r1, 0x1a0
    bl _restgpr_27
    lwz r0, 0x1a4(r1)
    mtlr r0
    addi r1, r1, 0x1a0
    blr
}

asm void fn_800954DC(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    addi r11, r1, 0x30
    stfd f31, 0x90(r1)
    psq_st f31, 0x98(r1), 0, 0
    stfd f30, 0x80(r1)
    psq_st f30, 0x88(r1), 0, 0
    stfd f29, 0x70(r1)
    psq_st f29, 0x78(r1), 0, 0
    stfd f28, 0x60(r1)
    psq_st f28, 0x68(r1), 0, 0
    stfd f27, 0x50(r1)
    psq_st f27, 0x58(r1), 0, 0
    stfd f26, 0x40(r1)
    psq_st f26, 0x48(r1), 0, 0
    stfd f25, 0x30(r1)
    psq_st f25, 0x38(r1), 0, 0
    bl _savegpr_24
    fmr f25, f1
    cmpwi r4, 0x0
    mr r26, r3
    mr r27, r4
    mr r28, r5
    beq lbl_fn_800954DC_00000768
    lwz r30, 0x104(r3)
    li r29, 0x0
    lfs f27, lbl_80880B88
    li r31, 0x0
    lfs f28, lbl_80880B8C
    li r25, 0x0
    lfs f29, lbl_80880B90
    lfs f30, lbl_80880B94
    lfs f31, lbl_80880B98
    b lbl_fn_800954DC_00000760
lbl_fn_800954DC_000005D0:
    lwz r3, 0x130(r26)
    lwz r4, 0x108(r26)
    lwzx r0, r3, r31
    lwzx r3, r4, r31
    cmpwi r0, -0x1
    ble lbl_fn_800954DC_00000758
    mulli r0, r0, 0x18
    lwz r3, 0xc(r3)
    add r24, r3, r0
    lwz r0, 0x8(r24)
    cmpwi r0, 0x0
    bne lbl_fn_800954DC_00000638
    li r3, 0x14
    li r4, 0x6
    la r5, lbl_8087D780
    la r6, lbl_8087D77C
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_800954DC_00000634
    stfs f27, 0x0(r3)
    stfs f28, 0x4(r3)
    stfs f29, 0x8(r3)
    stfs f30, 0xc(r3)
    stfs f31, 0x10(r3)
lbl_fn_800954DC_00000634:
    stw r3, 0x8(r24)
lbl_fn_800954DC_00000638:
    lwz r3, 0x8(r24)
    stfs f25, 0x0(r3)
    lwz r0, 0x8(r24)
    cmpwi r0, 0x0
    bne lbl_fn_800954DC_00000684
    li r3, 0x14
    li r4, 0x6
    la r5, lbl_8087D780
    la r6, lbl_8087D77C
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_800954DC_00000680
    stfs f27, 0x0(r3)
    stfs f28, 0x4(r3)
    stfs f29, 0x8(r3)
    stfs f30, 0xc(r3)
    stfs f31, 0x10(r3)
lbl_fn_800954DC_00000680:
    stw r3, 0x8(r24)
lbl_fn_800954DC_00000684:
    lwz r3, 0x8(r24)
    stfs f25, 0x4(r3)
    lwz r0, 0x8(r24)
    lfs f26, 0x0(r28)
    cmpwi r0, 0x0
    bne lbl_fn_800954DC_000006D4
    li r3, 0x14
    li r4, 0x6
    la r5, lbl_8087D780
    la r6, lbl_8087D77C
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_800954DC_000006D0
    stfs f27, 0x0(r3)
    stfs f28, 0x4(r3)
    stfs f29, 0x8(r3)
    stfs f30, 0xc(r3)
    stfs f31, 0x10(r3)
lbl_fn_800954DC_000006D0:
    stw r3, 0x8(r24)
lbl_fn_800954DC_000006D4:
    lwz r3, 0x8(r24)
    stfs f26, 0xc(r3)
    lwz r0, 0x8(r24)
    lfs f26, 0x4(r28)
    cmpwi r0, 0x0
    bne lbl_fn_800954DC_00000724
    li r3, 0x14
    li r4, 0x6
    la r5, lbl_8087D780
    la r6, lbl_8087D77C
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_800954DC_00000720
    stfs f27, 0x0(r3)
    stfs f28, 0x4(r3)
    stfs f29, 0x8(r3)
    stfs f30, 0xc(r3)
    stfs f31, 0x10(r3)
lbl_fn_800954DC_00000720:
    stw r3, 0x8(r24)
lbl_fn_800954DC_00000724:
    lwz r3, 0x8(r24)
    stfs f26, 0x10(r3)
    lbz r0, 0x11(r24)
    cmpwi r0, 0x0
    beq lbl_fn_800954DC_00000754
    lwz r3, 0x4(r24)
    cmpwi r3, 0x0
    beq lbl_fn_800954DC_00000754
    li r4, 0x1
    bl fn_800D5808
    stb r25, 0x11(r24)
    stw r25, 0x4(r24)
lbl_fn_800954DC_00000754:
    stw r27, 0x4(r24)
lbl_fn_800954DC_00000758:
    addi r31, r31, 0x4
    addi r29, r29, 0x1
lbl_fn_800954DC_00000760:
    cmplw r29, r30
    blt lbl_fn_800954DC_000005D0
lbl_fn_800954DC_00000768:
    addi r11, r1, 0x30
    psq_l f31, 0x98(r1), 0, 0
    lfd f31, 0x90(r1)
    psq_l f30, 0x88(r1), 0, 0
    lfd f30, 0x80(r1)
    psq_l f29, 0x78(r1), 0, 0
    lfd f29, 0x70(r1)
    psq_l f28, 0x68(r1), 0, 0
    lfd f28, 0x60(r1)
    psq_l f27, 0x58(r1), 0, 0
    lfd f27, 0x50(r1)
    psq_l f26, 0x48(r1), 0, 0
    lfd f26, 0x40(r1)
    psq_l f25, 0x38(r1), 0, 0
    lfd f25, 0x30(r1)
    bl _restgpr_24
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_80095750(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r6, lbl_80732368@ha
    li r7, 0x0
    stw r0, 0x34(r1)
    addi r6, r6, lbl_80732368@l
    stmw r27, 0x1c(r1)
    mr r30, r5
    addi r5, r6, 0xa
    mr r28, r3
    mr r27, r4
    li r3, 0x18
    mr r6, r5
    li r4, 0x6
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_80095750_00000818
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    addi r3, r3, 0x14
    bl fn_800D87A4
lbl_fn_80095750_00000818:
    lwz r0, 0x0(r31)
    srwi. r0, r0, 31
    bne lbl_fn_80095750_00000830
    lbz r0, 0x0(r31)
    clrlwi r29, r0, 25
    b lbl_fn_80095750_00000834
lbl_fn_80095750_00000830:
    lwz r29, 0x4(r31)
lbl_fn_80095750_00000834:
    lbz r0, 0xc(r1)
    mr r3, r27
    stb r0, 0x8(r1)
    bl strlen
    mr r0, r3
    mr r3, r31
    mr r5, r29
    mr r6, r27
    add r7, r27, r0
    addi r8, r1, 0x8
    li r4, 0x0
    bl fn_80013F78
    mr r3, r27
    bl fn_800DC6B4
    stw r3, 0xc(r31)
    addi r3, r30, 0x4
    stw r30, 0x10(r31)
    bl fn_800D87B0
    lwz r0, 0x4(r30)
    stw r0, 0x14(r31)
    lwz r0, 0x1ec(r28)
    cmpwi r0, 0x0
    beq lbl_fn_80095750_0000089C
    lwz r0, 0x1e8(r28)
    cmpwi r0, 0x0
    bne lbl_fn_80095750_000009EC
lbl_fn_80095750_0000089C:
    lwz r0, 0x1e8(r28)
    cmplwi r0, 0x8
    bgt lbl_fn_80095750_00000B40
    li r3, 0x20
    li r4, 0x0
    la r5, lbl_8087D7D8
    la r6, lbl_8087D7D4
    li r7, 0x0
    bl fn_800846FC
    lwz r0, 0x1ec(r28)
    mr r29, r3
    cmpwi r0, 0x0
    beq lbl_fn_80095750_000009DC
    lwz r0, 0x1e4(r28)
    li r4, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_80095750_000008E4
    mr r4, r0
lbl_fn_80095750_000008E4:
    cmpwi r4, 0x0
    li r5, 0x0
    beq lbl_fn_80095750_000009D4
    cmplwi r4, 0x8
    subi r8, r4, 0x8
    ble lbl_fn_80095750_000009A4
    addi r0, r8, 0x7
    mr r7, r29
    srwi r0, r0, 3
    li r6, 0x0
    mtctr r0
    cmplwi r8, 0x0
    ble lbl_fn_80095750_000009A4
lbl_fn_80095750_00000918:
    lwz r8, 0x1ec(r28)
    addi r5, r5, 0x8
    lwzx r0, r8, r6
    stw r0, 0x0(r7)
    lwz r0, 0x1ec(r28)
    add r8, r0, r6
    lwz r0, 0x4(r8)
    stw r0, 0x4(r7)
    lwz r0, 0x1ec(r28)
    add r8, r0, r6
    lwz r0, 0x8(r8)
    stw r0, 0x8(r7)
    lwz r0, 0x1ec(r28)
    add r8, r0, r6
    lwz r0, 0xc(r8)
    stw r0, 0xc(r7)
    lwz r0, 0x1ec(r28)
    add r8, r0, r6
    lwz r0, 0x10(r8)
    stw r0, 0x10(r7)
    lwz r0, 0x1ec(r28)
    add r8, r0, r6
    lwz r0, 0x14(r8)
    stw r0, 0x14(r7)
    lwz r0, 0x1ec(r28)
    add r8, r0, r6
    lwz r0, 0x18(r8)
    stw r0, 0x18(r7)
    lwz r0, 0x1ec(r28)
    add r8, r0, r6
    addi r6, r6, 0x20
    lwz r0, 0x1c(r8)
    stw r0, 0x1c(r7)
    addi r7, r7, 0x20
    bdnz lbl_fn_80095750_00000918
lbl_fn_80095750_000009A4:
    slwi r7, r5, 2
    subf r0, r5, r4
    add r6, r3, r7
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_80095750_000009D4
lbl_fn_80095750_000009BC:
    lwz r3, 0x1ec(r28)
    lwzx r0, r3, r7
    addi r7, r7, 0x4
    stw r0, 0x0(r6)
    addi r6, r6, 0x4
    bdnz lbl_fn_80095750_000009BC
lbl_fn_80095750_000009D4:
    lwz r3, 0x1ec(r28)
    bl fn_80084C24
lbl_fn_80095750_000009DC:
    li r0, 0x8
    stw r29, 0x1ec(r28)
    stw r0, 0x1e8(r28)
    b lbl_fn_80095750_00000B40
lbl_fn_80095750_000009EC:
    lwz r3, 0x1e4(r28)
    cmplw r3, r0
    blt lbl_fn_80095750_00000B40
    slwi r29, r3, 1
    cmplw r0, r29
    bgt lbl_fn_80095750_00000B40
    slwi r3, r29, 2
    li r4, 0x0
    la r5, lbl_8087D7D8
    la r6, lbl_8087D7D4
    li r7, 0x0
    bl fn_800846FC
    lwz r0, 0x1ec(r28)
    mr r30, r3
    cmpwi r0, 0x0
    beq lbl_fn_80095750_00000B38
    lwz r0, 0x1e4(r28)
    mr r4, r29
    cmplw r29, r0
    ble lbl_fn_80095750_00000A40
    mr r4, r0
lbl_fn_80095750_00000A40:
    cmpwi r4, 0x0
    li r5, 0x0
    beq lbl_fn_80095750_00000B30
    cmplwi r4, 0x8
    subi r8, r4, 0x8
    ble lbl_fn_80095750_00000B00
    addi r0, r8, 0x7
    mr r7, r30
    srwi r0, r0, 3
    li r6, 0x0
    mtctr r0
    cmplwi r8, 0x0
    ble lbl_fn_80095750_00000B00
lbl_fn_80095750_00000A74:
    lwz r8, 0x1ec(r28)
    addi r5, r5, 0x8
    lwzx r0, r8, r6
    stw r0, 0x0(r7)
    lwz r0, 0x1ec(r28)
    add r8, r0, r6
    lwz r0, 0x4(r8)
    stw r0, 0x4(r7)
    lwz r0, 0x1ec(r28)
    add r8, r0, r6
    lwz r0, 0x8(r8)
    stw r0, 0x8(r7)
    lwz r0, 0x1ec(r28)
    add r8, r0, r6
    lwz r0, 0xc(r8)
    stw r0, 0xc(r7)
    lwz r0, 0x1ec(r28)
    add r8, r0, r6
    lwz r0, 0x10(r8)
    stw r0, 0x10(r7)
    lwz r0, 0x1ec(r28)
    add r8, r0, r6
    lwz r0, 0x14(r8)
    stw r0, 0x14(r7)
    lwz r0, 0x1ec(r28)
    add r8, r0, r6
    lwz r0, 0x18(r8)
    stw r0, 0x18(r7)
    lwz r0, 0x1ec(r28)
    add r8, r0, r6
    addi r6, r6, 0x20
    lwz r0, 0x1c(r8)
    stw r0, 0x1c(r7)
    addi r7, r7, 0x20
    bdnz lbl_fn_80095750_00000A74
lbl_fn_80095750_00000B00:
    slwi r7, r5, 2
    subf r0, r5, r4
    add r6, r3, r7
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_80095750_00000B30
lbl_fn_80095750_00000B18:
    lwz r3, 0x1ec(r28)
    lwzx r0, r3, r7
    addi r7, r7, 0x4
    stw r0, 0x0(r6)
    addi r6, r6, 0x4
    bdnz lbl_fn_80095750_00000B18
lbl_fn_80095750_00000B30:
    lwz r3, 0x1ec(r28)
    bl fn_80084C24
lbl_fn_80095750_00000B38:
    stw r30, 0x1ec(r28)
    stw r29, 0x1e8(r28)
lbl_fn_80095750_00000B40:
    lwz r0, 0x1e4(r28)
    lwz r3, 0x1ec(r28)
    slwi r0, r0, 2
    stwx r31, r3, r0
    lwz r3, 0x1e4(r28)
    addi r0, r3, 0x1
    stw r0, 0x1e4(r28)
    lmw r27, 0x1c(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80095B08(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stmw r25, 0x24(r1)
    mr r27, r3
    mr r28, r4
    lwz r0, 0x1e4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80095B08_00000D20
    lwz r0, 0x0(r4)
    srwi. r0, r0, 31
    bne lbl_fn_80095B08_00000BA8
    addi r3, r4, 0x1
    b lbl_fn_80095B08_00000BAC
lbl_fn_80095B08_00000BA8:
    lwz r3, 0x8(r4)
lbl_fn_80095B08_00000BAC:
    bl fn_800DC6B4
    mr r31, r3
    addi r30, r28, 0x1
    li r29, 0x0
    li r26, 0x0
    b lbl_fn_80095B08_00000D14
lbl_fn_80095B08_00000BC4:
    lwz r3, 0x1ec(r27)
    lwzx r5, r3, r26
    lwz r0, 0xc(r5)
    cmplw r31, r0
    bne lbl_fn_80095B08_00000D0C
    lwz r0, 0x0(r28)
    srwi. r0, r0, 31
    bne lbl_fn_80095B08_00000BF0
    lbz r0, 0x0(r28)
    clrlwi r4, r0, 25
    b lbl_fn_80095B08_00000BF4
lbl_fn_80095B08_00000BF0:
    lwz r4, 0x4(r28)
lbl_fn_80095B08_00000BF4:
    lwz r0, 0x0(r5)
    srwi. r3, r0, 31
    bne lbl_fn_80095B08_00000C0C
    lbz r0, 0x0(r5)
    clrlwi r0, r0, 25
    b lbl_fn_80095B08_00000C10
lbl_fn_80095B08_00000C0C:
    lwz r0, 0x4(r5)
lbl_fn_80095B08_00000C10:
    subf r0, r4, r0
    cntlzw r0, r0
    srwi. r0, r0, 5
    beq lbl_fn_80095B08_00000CF0
    cmpwi r3, 0x0
    bne lbl_fn_80095B08_00000C38
    lbz r0, 0x0(r5)
    addi r4, r5, 0x1
    clrlwi r25, r0, 25
    b lbl_fn_80095B08_00000C40
lbl_fn_80095B08_00000C38:
    lwz r4, 0x8(r5)
    lwz r25, 0x4(r5)
lbl_fn_80095B08_00000C40:
    stw r25, 0x10(r1)
    lwz r0, 0x0(r28)
    srwi. r0, r0, 31
    bne lbl_fn_80095B08_00000C5C
    lbz r0, 0x0(r28)
    clrlwi r5, r0, 25
    b lbl_fn_80095B08_00000C60
lbl_fn_80095B08_00000C5C:
    lwz r5, 0x4(r28)
lbl_fn_80095B08_00000C60:
    stw r5, 0x14(r1)
    lwz r0, 0x0(r28)
    srwi. r0, r0, 31
    bne lbl_fn_80095B08_00000C80
    lbz r0, 0x0(r28)
    mr r3, r30
    clrlwi r0, r0, 25
    b lbl_fn_80095B08_00000C88
lbl_fn_80095B08_00000C80:
    lwz r3, 0x8(r28)
    lwz r0, 0x4(r28)
lbl_fn_80095B08_00000C88:
    cmplw r5, r0
    stw r0, 0xc(r1)
    addi r5, r1, 0xc
    bge lbl_fn_80095B08_00000C9C
    addi r5, r1, 0x14
lbl_fn_80095B08_00000C9C:
    lwz r0, 0x0(r5)
    addi r5, r1, 0x8
    stw r0, 0x8(r1)
    cmplw r25, r0
    bge lbl_fn_80095B08_00000CB4
    addi r5, r1, 0x10
lbl_fn_80095B08_00000CB4:
    lwz r5, 0x0(r5)
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_80095B08_00000CE8
    lwz r0, 0x8(r1)
    cmplw r0, r25
    bge lbl_fn_80095B08_00000CD8
    li r3, -0x1
    b lbl_fn_80095B08_00000CE8
lbl_fn_80095B08_00000CD8:
    bne lbl_fn_80095B08_00000CE4
    li r3, 0x0
    b lbl_fn_80095B08_00000CE8
lbl_fn_80095B08_00000CE4:
    li r3, 0x1
lbl_fn_80095B08_00000CE8:
    cntlzw r0, r3
    srwi r0, r0, 5
lbl_fn_80095B08_00000CF0:
    cmpwi r0, 0x0
    beq lbl_fn_80095B08_00000D0C
    lwz r3, 0x1ec(r27)
    lwzx r3, r3, r26
    addi r3, r3, 0x14
    bl fn_800D8808
    b lbl_fn_80095B08_00000D24
lbl_fn_80095B08_00000D0C:
    addi r29, r29, 0x1
    addi r26, r26, 0x4
lbl_fn_80095B08_00000D14:
    lwz r0, 0x1e4(r27)
    cmplw r29, r0
    blt lbl_fn_80095B08_00000BC4
lbl_fn_80095B08_00000D20:
    li r3, 0x0
lbl_fn_80095B08_00000D24:
    lmw r25, 0x24(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80095CD0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    mr r29, r3
    b lbl_fn_80095CD0_00000D84
lbl_fn_80095CD0_00000D60:
    lwz r3, 0x108(r29)
    lwzx r3, r3, r31
    lbz r0, 0x4b(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80095CD0_00000D7C
    lfs f1, lbl_80880C0C
    bl fn_80080048
lbl_fn_80095CD0_00000D7C:
    addi r31, r31, 0x4
    addi r30, r30, 0x1
lbl_fn_80095CD0_00000D84:
    lwz r0, 0x104(r29)
    cmplw r30, r0
    blt lbl_fn_80095CD0_00000D60
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80095D44(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    stfd f31, 0x80(r1)
    psq_st f31, 0x88(r1), 0, 0
    cmpwi cr1, r4, 0x0
    stw r4, 0xb0(r3)
    stw r5, 0xb4(r3)
    blt cr1, lbl_fn_80095D44_00000F68
    cmpwi r5, 0x0
    blt lbl_fn_80095D44_00000ED8
    lfs f0, 0x34(r3)
    lfs f1, 0x24(r3)
    lfs f2, 0x14(r3)
    stfs f2, 0x2c(r1)
    stfs f1, 0x30(r1)
    stfs f0, 0x34(r1)
    bge lbl_fn_80095D44_00000DF4
    li r5, 0x0
    b lbl_fn_80095D44_00000E00
lbl_fn_80095D44_00000DF4:
    mulli r0, r5, 0x30
    lwz r5, 0x3c(r3)
    add r5, r5, r0
lbl_fn_80095D44_00000E00:
    lfs f0, 0x2c(r5)
    cmpwi r4, 0x0
    lfs f1, 0x1c(r5)
    lfs f2, 0xc(r5)
    stfs f2, 0x38(r1)
    stfs f1, 0x3c(r1)
    stfs f0, 0x40(r1)
    bge lbl_fn_80095D44_00000E28
    li r4, 0x0
    b lbl_fn_80095D44_00000E34
lbl_fn_80095D44_00000E28:
    mulli r0, r4, 0x30
    lwz r4, 0x3c(r3)
    add r4, r4, r0
lbl_fn_80095D44_00000E34:
    lfs f3, 0x2c(r4)
    lfs f4, 0x1c(r4)
    lfs f5, 0xc(r4)
    lfs f2, 0x40(r1)
    lfs f0, 0x3c(r1)
    fadds f6, f3, f2
    lfs f1, 0x38(r1)
    fadds f7, f4, f0
    lfs f0, lbl_80880C08
    fadds f8, f5, f1
    lfs f2, 0x34(r1)
    fmuls f9, f6, f0
    lfs f1, 0x30(r1)
    fmuls f10, f7, f0
    stfs f5, 0x44(r1)
    fmuls f11, f8, f0
    lfs f0, 0x2c(r1)
    fsubs f12, f9, f2
    lfs f2, 0x9c(r3)
    fsubs f31, f11, f0
    lfs f0, 0xa4(r3)
    fsubs f13, f10, f1
    lfs f1, 0xa0(r3)
    fsubs f2, f2, f31
    stfs f4, 0x48(r1)
    fsubs f1, f1, f13
    fsubs f0, f0, f12
    stfs f3, 0x4c(r1)
    stfs f8, 0x50(r1)
    stfs f7, 0x54(r1)
    stfs f6, 0x58(r1)
    stfs f11, 0x5c(r1)
    stfs f10, 0x60(r1)
    stfs f9, 0x64(r1)
    stfs f31, 0x68(r1)
    stfs f13, 0x6c(r1)
    stfs f12, 0x70(r1)
    stfs f2, 0x9c(r3)
    stfs f1, 0xa0(r3)
    stfs f0, 0xa4(r3)
    b lbl_fn_80095D44_00000F68
lbl_fn_80095D44_00000ED8:
    lfs f0, 0x34(r3)
    lfs f1, 0x24(r3)
    lfs f2, 0x14(r3)
    stfs f2, 0x8(r1)
    stfs f1, 0xc(r1)
    stfs f0, 0x10(r1)
    bge cr1, lbl_fn_80095D44_00000EFC
    li r4, 0x0
    b lbl_fn_80095D44_00000F08
lbl_fn_80095D44_00000EFC:
    mulli r0, r4, 0x30
    lwz r4, 0x3c(r3)
    add r4, r4, r0
lbl_fn_80095D44_00000F08:
    lfs f3, 0x2c(r4)
    lfs f4, 0x1c(r4)
    lfs f5, 0xc(r4)
    lfs f2, 0x10(r1)
    lfs f1, 0xc(r1)
    fsubs f6, f3, f2
    lfs f0, 0x8(r1)
    fsubs f7, f4, f1
    lfs f1, 0xa0(r3)
    fsubs f8, f5, f0
    lfs f2, 0x9c(r3)
    lfs f0, 0xa4(r3)
    fsubs f1, f1, f7
    fsubs f2, f2, f8
    stfs f5, 0x14(r1)
    fsubs f0, f0, f6
    stfs f4, 0x18(r1)
    stfs f3, 0x1c(r1)
    stfs f8, 0x20(r1)
    stfs f7, 0x24(r1)
    stfs f6, 0x28(r1)
    stfs f2, 0x9c(r3)
    stfs f1, 0xa0(r3)
    stfs f0, 0xa4(r3)
lbl_fn_80095D44_00000F68:
    psq_l f31, 0x88(r1), 0, 0
    lfd f31, 0x80(r1)
    addi r1, r1, 0x90
    blr
}

asm void fn_80095F10(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r4
    stw r30, 0x28(r1)
    mr r30, r3
    lwz r0, 0x208(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80095F10_00000FC0
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x14(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
    b lbl_fn_80095F10_00000FDC
lbl_fn_80095F10_00000FC0:
    lis r5, lbl_80778858@ha
    lwzu r4, lbl_80778858@l(r5)
    stw r4, 0x14(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
lbl_fn_80095F10_00000FDC:
    lwz r5, 0x14(r1)
    addi r3, r1, 0x8
    lwz r4, 0x18(r1)
    lwz r0, 0x1c(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80095F10_00001268
    lwz r3, 0x208(r30)
    lwz r0, 0x0(r31)
    stw r0, 0x0(r3)
    lwz r0, 0x4(r31)
    stw r0, 0x4(r3)
    lwz r0, 0x8(r31)
    stw r0, 0x8(r3)
    lwz r0, 0xc(r31)
    stw r0, 0xc(r3)
    lfs f2, 0x18(r31)
    psq_l f1, 0x10(r31), 0, 0
    psq_st f1, 0x10(r3), 0, 0
    stfs f2, 0x18(r3)
    lfs f2, 0x24(r31)
    psq_l f1, 0x1c(r31), 0, 0
    psq_st f1, 0x1c(r3), 0, 0
    stfs f2, 0x24(r3)
    lfs f2, 0x30(r31)
    psq_l f1, 0x28(r31), 0, 0
    psq_st f1, 0x28(r3), 0, 0
    stfs f2, 0x30(r3)
    lfs f2, 0x3c(r31)
    psq_l f1, 0x34(r31), 0, 0
    psq_st f1, 0x34(r3), 0, 0
    stfs f2, 0x3c(r3)
    lfs f0, 0x40(r31)
    stfs f0, 0x40(r3)
    lfs f0, 0x44(r31)
    stfs f0, 0x44(r3)
    lfs f0, 0x48(r31)
    stfs f0, 0x48(r3)
    lfs f0, 0x4c(r31)
    stfs f0, 0x4c(r3)
    lfs f0, 0x50(r31)
    stfs f0, 0x50(r3)
    lfs f0, 0x54(r31)
    stfs f0, 0x54(r3)
    lfs f0, 0x58(r31)
    stfs f0, 0x58(r3)
    lfs f0, 0x5c(r31)
    stfs f0, 0x5c(r3)
    psq_l f2, 0x68(r31), 0, 0
    psq_l f3, 0x70(r31), 0, 0
    psq_l f4, 0x78(r31), 0, 0
    psq_l f5, 0x80(r31), 0, 0
    psq_l f6, 0x88(r31), 0, 0
    psq_l f1, 0x60(r31), 0, 0
    psq_st f1, 0x60(r3), 0, 0
    psq_st f2, 0x68(r3), 0, 0
    psq_st f3, 0x70(r3), 0, 0
    psq_st f4, 0x78(r3), 0, 0
    psq_st f5, 0x80(r3), 0, 0
    psq_st f6, 0x88(r3), 0, 0
    psq_l f2, 0x98(r31), 0, 0
    psq_l f3, 0xa0(r31), 0, 0
    psq_l f4, 0xa8(r31), 0, 0
    psq_l f5, 0xb0(r31), 0, 0
    psq_l f6, 0xb8(r31), 0, 0
    psq_l f7, 0xc0(r31), 0, 0
    psq_l f8, 0xc8(r31), 0, 0
    psq_l f1, 0x90(r31), 0, 0
    psq_st f1, 0x90(r3), 0, 0
    psq_st f2, 0x98(r3), 0, 0
    psq_st f3, 0xa0(r3), 0, 0
    psq_st f4, 0xa8(r3), 0, 0
    psq_st f5, 0xb0(r3), 0, 0
    psq_st f6, 0xb8(r3), 0, 0
    psq_st f7, 0xc0(r3), 0, 0
    psq_st f8, 0xc8(r3), 0, 0
    lfs f0, 0xd0(r31)
    addi r4, r3, 0x108
    stfs f0, 0xd0(r3)
    addi r5, r31, 0x108
    addi r7, r4, 0x94
    addi r0, r4, 0xf4
    lfs f0, 0xd4(r31)
    addi r6, r5, 0x94
    stfs f0, 0xd4(r3)
    psq_l f2, 0xe0(r31), 0, 0
    psq_l f3, 0xe8(r31), 0, 0
    psq_l f4, 0xf0(r31), 0, 0
    psq_l f5, 0xf8(r31), 0, 0
    psq_l f6, 0x100(r31), 0, 0
    psq_l f1, 0xd8(r31), 0, 0
    psq_st f1, 0xd8(r3), 0, 0
    psq_st f2, 0xe0(r3), 0, 0
    psq_st f3, 0xe8(r3), 0, 0
    psq_st f4, 0xf0(r3), 0, 0
    psq_st f5, 0xf8(r3), 0, 0
    psq_st f6, 0x100(r3), 0, 0
    psq_l f2, 0x8(r5), 0, 0
    psq_l f3, 0x10(r5), 0, 0
    psq_l f4, 0x18(r5), 0, 0
    psq_l f5, 0x20(r5), 0, 0
    psq_l f6, 0x28(r5), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    psq_st f2, 0x8(r4), 0, 0
    psq_st f3, 0x10(r4), 0, 0
    psq_st f4, 0x18(r4), 0, 0
    psq_st f5, 0x20(r4), 0, 0
    psq_st f6, 0x28(r4), 0, 0
    lwz r3, 0x138(r31)
    stw r3, 0x30(r4)
    lfs f0, 0x13c(r31)
    stfs f0, 0x34(r4)
    lfs f0, 0x140(r31)
    stfs f0, 0x38(r4)
    lfs f2, 0x14c(r31)
    psq_l f1, 0x3c(r5), 0, 0
    psq_st f1, 0x3c(r4), 0, 0
    stfs f2, 0x44(r4)
    lfs f0, 0x150(r31)
    stfs f0, 0x48(r4)
    lfs f2, 0x15c(r31)
    psq_l f1, 0x4c(r5), 0, 0
    psq_st f1, 0x4c(r4), 0, 0
    stfs f2, 0x54(r4)
    lfs f0, 0x160(r31)
    stfs f0, 0x58(r4)
    lfs f2, 0x16c(r31)
    psq_l f1, 0x5c(r5), 0, 0
    psq_st f1, 0x5c(r4), 0, 0
    stfs f2, 0x64(r4)
    lfs f0, 0x170(r31)
    stfs f0, 0x68(r4)
    lfs f2, 0x17c(r31)
    psq_l f1, 0x6c(r5), 0, 0
    psq_st f1, 0x6c(r4), 0, 0
    stfs f2, 0x74(r4)
    lfs f0, 0x180(r31)
    stfs f0, 0x78(r4)
    lfs f2, 0x18c(r31)
    psq_l f1, 0x7c(r5), 0, 0
    psq_st f1, 0x7c(r4), 0, 0
    stfs f2, 0x84(r4)
    lfs f2, 0x198(r31)
    psq_l f1, 0x88(r5), 0, 0
    psq_st f1, 0x88(r4), 0, 0
    stfs f2, 0x90(r4)
lbl_fn_80095F10_00001234:
    lfs f2, 0x8(r6)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0x8(r7)
    lfs f0, 0xc(r6)
    addi r6, r6, 0x10
    stfs f0, 0xc(r7)
    addi r7, r7, 0x10
    cmplw r7, r0
    blt lbl_fn_80095F10_00001234
    lwz r0, 0x4(r30)
    oris r0, r0, 0x8
    stw r0, 0x4(r30)
lbl_fn_80095F10_00001268:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80096218(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stmw r21, 0x14(r1)
    mr r27, r3
    mr r28, r4
    mr r29, r5
    addi r21, r3, 0x164
    li r31, 0x0
    li r25, 0x8
    b lbl_fn_80096218_0000159C
lbl_fn_80096218_000012AC:
    mr r3, r21
    bl fn_80473F34
    lwz r0, 0x8(r28)
    mr r26, r3
    cmpwi r0, 0x0
    beq lbl_fn_80096218_000012D0
    lwz r0, 0x4(r28)
    cmpwi r0, 0x0
    bne lbl_fn_80096218_00001420
lbl_fn_80096218_000012D0:
    lwz r0, 0x4(r28)
    cmplwi r0, 0x8
    bgt lbl_fn_80096218_00001578
    li r3, 0x20
    li r4, 0x0
    la r5, lbl_8087D7E0
    la r6, lbl_8087D7DC
    li r7, 0x0
    bl fn_800846FC
    lwz r0, 0x8(r28)
    mr r24, r3
    cmpwi r0, 0x0
    beq lbl_fn_80096218_00001414
    lwz r0, 0x0(r28)
    li r4, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_80096218_00001318
    mr r4, r0
lbl_fn_80096218_00001318:
    cmpwi r4, 0x0
    li r5, 0x0
    beq lbl_fn_80096218_0000140C
    cmplwi r4, 0x8
    subi r8, r4, 0x8
    ble lbl_fn_80096218_000013D8
    addi r0, r8, 0x7
    mr r7, r24
    srwi r0, r0, 3
    li r6, 0x0
    mtctr r0
    cmplwi r8, 0x0
    ble lbl_fn_80096218_000013D8
lbl_fn_80096218_0000134C:
    lwz r8, 0x8(r28)
    addi r5, r5, 0x8
    lwzx r0, r8, r6
    stw r0, 0x0(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    lwz r0, 0x4(r8)
    stw r0, 0x4(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    lwz r0, 0x8(r8)
    stw r0, 0x8(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    lwz r0, 0xc(r8)
    stw r0, 0xc(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    lwz r0, 0x10(r8)
    stw r0, 0x10(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    lwz r0, 0x14(r8)
    stw r0, 0x14(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    lwz r0, 0x18(r8)
    stw r0, 0x18(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    addi r6, r6, 0x20
    lwz r0, 0x1c(r8)
    stw r0, 0x1c(r7)
    addi r7, r7, 0x20
    bdnz lbl_fn_80096218_0000134C
lbl_fn_80096218_000013D8:
    slwi r7, r5, 2
    subf r0, r5, r4
    add r6, r3, r7
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_80096218_0000140C
lbl_fn_80096218_000013F0:
    lwz r3, 0x8(r28)
    addi r5, r5, 0x1
    lwzx r0, r3, r7
    addi r7, r7, 0x4
    stw r0, 0x0(r6)
    addi r6, r6, 0x4
    bdnz lbl_fn_80096218_000013F0
lbl_fn_80096218_0000140C:
    lwz r3, 0x8(r28)
    bl fn_80084C24
lbl_fn_80096218_00001414:
    stw r24, 0x8(r28)
    stw r25, 0x4(r28)
    b lbl_fn_80096218_00001578
lbl_fn_80096218_00001420:
    lwz r3, 0x0(r28)
    cmplw r3, r0
    blt lbl_fn_80096218_00001578
    slwi r24, r3, 1
    cmplw r0, r24
    bgt lbl_fn_80096218_00001578
    slwi r3, r24, 2
    li r4, 0x0
    la r5, lbl_8087D7E0
    la r6, lbl_8087D7DC
    li r7, 0x0
    bl fn_800846FC
    lwz r0, 0x8(r28)
    mr r30, r3
    cmpwi r0, 0x0
    beq lbl_fn_80096218_00001570
    lwz r0, 0x0(r28)
    mr r4, r24
    cmplw r24, r0
    ble lbl_fn_80096218_00001474
    mr r4, r0
lbl_fn_80096218_00001474:
    cmpwi r4, 0x0
    li r5, 0x0
    beq lbl_fn_80096218_00001568
    cmplwi r4, 0x8
    subi r8, r4, 0x8
    ble lbl_fn_80096218_00001534
    addi r0, r8, 0x7
    mr r7, r30
    srwi r0, r0, 3
    li r6, 0x0
    mtctr r0
    cmplwi r8, 0x0
    ble lbl_fn_80096218_00001534
lbl_fn_80096218_000014A8:
    lwz r8, 0x8(r28)
    addi r5, r5, 0x8
    lwzx r0, r8, r6
    stw r0, 0x0(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    lwz r0, 0x4(r8)
    stw r0, 0x4(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    lwz r0, 0x8(r8)
    stw r0, 0x8(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    lwz r0, 0xc(r8)
    stw r0, 0xc(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    lwz r0, 0x10(r8)
    stw r0, 0x10(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    lwz r0, 0x14(r8)
    stw r0, 0x14(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    lwz r0, 0x18(r8)
    stw r0, 0x18(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    addi r6, r6, 0x20
    lwz r0, 0x1c(r8)
    stw r0, 0x1c(r7)
    addi r7, r7, 0x20
    bdnz lbl_fn_80096218_000014A8
lbl_fn_80096218_00001534:
    slwi r7, r5, 2
    subf r0, r5, r4
    add r6, r3, r7
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_80096218_00001568
lbl_fn_80096218_0000154C:
    lwz r3, 0x8(r28)
    addi r5, r5, 0x1
    lwzx r0, r3, r7
    addi r7, r7, 0x4
    stw r0, 0x0(r6)
    addi r6, r6, 0x4
    bdnz lbl_fn_80096218_0000154C
lbl_fn_80096218_00001568:
    lwz r3, 0x8(r28)
    bl fn_80084C24
lbl_fn_80096218_00001570:
    stw r30, 0x8(r28)
    stw r24, 0x4(r28)
lbl_fn_80096218_00001578:
    lwz r0, 0x0(r28)
    addi r21, r21, 0x18
    lwz r3, 0x8(r28)
    addi r31, r31, 0x1
    slwi r0, r0, 2
    stwx r26, r3, r0
    lwz r3, 0x0(r28)
    addi r0, r3, 0x1
    stw r0, 0x0(r28)
lbl_fn_80096218_0000159C:
    lwz r0, 0x20c(r27)
    extlwi r0, r0, 9, 8
    srawi r0, r0, 24
    cmpw r31, r0
    blt lbl_fn_80096218_000012AC
    addi r3, r27, 0xfc
    bl fn_80473F34
    lwz r0, 0x8(r28)
    mr r25, r3
    cmpwi r0, 0x0
    beq lbl_fn_80096218_000015D4
    lwz r0, 0x4(r28)
    cmpwi r0, 0x0
    bne lbl_fn_80096218_00001724
lbl_fn_80096218_000015D4:
    lwz r0, 0x4(r28)
    cmplwi r0, 0x8
    bgt lbl_fn_80096218_00001878
    li r3, 0x20
    li r4, 0x0
    la r5, lbl_8087D7E0
    la r6, lbl_8087D7DC
    li r7, 0x0
    bl fn_800846FC
    lwz r0, 0x8(r28)
    mr r24, r3
    cmpwi r0, 0x0
    beq lbl_fn_80096218_00001714
    lwz r0, 0x0(r28)
    li r4, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_80096218_0000161C
    mr r4, r0
lbl_fn_80096218_0000161C:
    cmpwi r4, 0x0
    li r5, 0x0
    beq lbl_fn_80096218_0000170C
    cmplwi r4, 0x8
    subi r8, r4, 0x8
    ble lbl_fn_80096218_000016DC
    addi r0, r8, 0x7
    mr r7, r24
    srwi r0, r0, 3
    li r6, 0x0
    mtctr r0
    cmplwi r8, 0x0
    ble lbl_fn_80096218_000016DC
lbl_fn_80096218_00001650:
    lwz r8, 0x8(r28)
    addi r5, r5, 0x8
    lwzx r0, r8, r6
    stw r0, 0x0(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    lwz r0, 0x4(r8)
    stw r0, 0x4(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    lwz r0, 0x8(r8)
    stw r0, 0x8(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    lwz r0, 0xc(r8)
    stw r0, 0xc(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    lwz r0, 0x10(r8)
    stw r0, 0x10(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    lwz r0, 0x14(r8)
    stw r0, 0x14(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    lwz r0, 0x18(r8)
    stw r0, 0x18(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    addi r6, r6, 0x20
    lwz r0, 0x1c(r8)
    stw r0, 0x1c(r7)
    addi r7, r7, 0x20
    bdnz lbl_fn_80096218_00001650
lbl_fn_80096218_000016DC:
    slwi r7, r5, 2
    subf r0, r5, r4
    add r6, r3, r7
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_80096218_0000170C
lbl_fn_80096218_000016F4:
    lwz r3, 0x8(r28)
    lwzx r0, r3, r7
    addi r7, r7, 0x4
    stw r0, 0x0(r6)
    addi r6, r6, 0x4
    bdnz lbl_fn_80096218_000016F4
lbl_fn_80096218_0000170C:
    lwz r3, 0x8(r28)
    bl fn_80084C24
lbl_fn_80096218_00001714:
    li r0, 0x8
    stw r24, 0x8(r28)
    stw r0, 0x4(r28)
    b lbl_fn_80096218_00001878
lbl_fn_80096218_00001724:
    lwz r3, 0x0(r28)
    cmplw r3, r0
    blt lbl_fn_80096218_00001878
    slwi r26, r3, 1
    cmplw r0, r26
    bgt lbl_fn_80096218_00001878
    slwi r3, r26, 2
    li r4, 0x0
    la r5, lbl_8087D7E0
    la r6, lbl_8087D7DC
    li r7, 0x0
    bl fn_800846FC
    lwz r0, 0x8(r28)
    mr r24, r3
    cmpwi r0, 0x0
    beq lbl_fn_80096218_00001870
    lwz r0, 0x0(r28)
    mr r4, r26
    cmplw r26, r0
    ble lbl_fn_80096218_00001778
    mr r4, r0
lbl_fn_80096218_00001778:
    cmpwi r4, 0x0
    li r5, 0x0
    beq lbl_fn_80096218_00001868
    cmplwi r4, 0x8
    subi r8, r4, 0x8
    ble lbl_fn_80096218_00001838
    addi r0, r8, 0x7
    mr r7, r24
    srwi r0, r0, 3
    li r6, 0x0
    mtctr r0
    cmplwi r8, 0x0
    ble lbl_fn_80096218_00001838
lbl_fn_80096218_000017AC:
    lwz r8, 0x8(r28)
    addi r5, r5, 0x8
    lwzx r0, r8, r6
    stw r0, 0x0(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    lwz r0, 0x4(r8)
    stw r0, 0x4(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    lwz r0, 0x8(r8)
    stw r0, 0x8(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    lwz r0, 0xc(r8)
    stw r0, 0xc(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    lwz r0, 0x10(r8)
    stw r0, 0x10(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    lwz r0, 0x14(r8)
    stw r0, 0x14(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    lwz r0, 0x18(r8)
    stw r0, 0x18(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    addi r6, r6, 0x20
    lwz r0, 0x1c(r8)
    stw r0, 0x1c(r7)
    addi r7, r7, 0x20
    bdnz lbl_fn_80096218_000017AC
lbl_fn_80096218_00001838:
    slwi r7, r5, 2
    subf r0, r5, r4
    add r6, r3, r7
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_80096218_00001868
lbl_fn_80096218_00001850:
    lwz r3, 0x8(r28)
    lwzx r0, r3, r7
    addi r7, r7, 0x4
    stw r0, 0x0(r6)
    addi r6, r6, 0x4
    bdnz lbl_fn_80096218_00001850
lbl_fn_80096218_00001868:
    lwz r3, 0x8(r28)
    bl fn_80084C24
lbl_fn_80096218_00001870:
    stw r24, 0x8(r28)
    stw r26, 0x4(r28)
lbl_fn_80096218_00001878:
    lwz r0, 0x0(r28)
    li r31, 0x0
    lwz r3, 0x8(r28)
    li r22, 0x0
    slwi r0, r0, 2
    li r26, 0x8
    stwx r25, r3, r0
    lwz r3, 0x0(r28)
    addi r0, r3, 0x1
    stw r0, 0x0(r28)
    b lbl_fn_80096218_00001BD0
lbl_fn_80096218_000018A4:
    li r30, 0x0
    li r21, 0x0
    b lbl_fn_80096218_00001BB4
lbl_fn_80096218_000018B0:
    lwz r0, 0xc(r3)
    add r3, r0, r21
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80096218_00001BAC
    addi r3, r3, 0x20
    bl fn_80473F34
    lwz r0, 0x8(r28)
    mr r25, r3
    cmpwi r0, 0x0
    beq lbl_fn_80096218_000018E8
    lwz r0, 0x4(r28)
    cmpwi r0, 0x0
    bne lbl_fn_80096218_00001A38
lbl_fn_80096218_000018E8:
    lwz r0, 0x4(r28)
    cmplwi r0, 0x8
    bgt lbl_fn_80096218_00001B90
    li r3, 0x20
    li r4, 0x0
    la r5, lbl_8087D7E0
    la r6, lbl_8087D7DC
    li r7, 0x0
    bl fn_800846FC
    lwz r0, 0x8(r28)
    mr r23, r3
    cmpwi r0, 0x0
    beq lbl_fn_80096218_00001A2C
    lwz r0, 0x0(r28)
    li r4, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_80096218_00001930
    mr r4, r0
lbl_fn_80096218_00001930:
    cmpwi r4, 0x0
    li r5, 0x0
    beq lbl_fn_80096218_00001A24
    cmplwi r4, 0x8
    subi r8, r4, 0x8
    ble lbl_fn_80096218_000019F0
    addi r0, r8, 0x7
    mr r7, r23
    srwi r0, r0, 3
    li r6, 0x0
    mtctr r0
    cmplwi r8, 0x0
    ble lbl_fn_80096218_000019F0
lbl_fn_80096218_00001964:
    lwz r8, 0x8(r28)
    addi r5, r5, 0x8
    lwzx r0, r8, r6
    stw r0, 0x0(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    lwz r0, 0x4(r8)
    stw r0, 0x4(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    lwz r0, 0x8(r8)
    stw r0, 0x8(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    lwz r0, 0xc(r8)
    stw r0, 0xc(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    lwz r0, 0x10(r8)
    stw r0, 0x10(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    lwz r0, 0x14(r8)
    stw r0, 0x14(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    lwz r0, 0x18(r8)
    stw r0, 0x18(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    addi r6, r6, 0x20
    lwz r0, 0x1c(r8)
    stw r0, 0x1c(r7)
    addi r7, r7, 0x20
    bdnz lbl_fn_80096218_00001964
lbl_fn_80096218_000019F0:
    slwi r7, r5, 2
    subf r0, r5, r4
    add r6, r3, r7
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_80096218_00001A24
lbl_fn_80096218_00001A08:
    lwz r3, 0x8(r28)
    addi r5, r5, 0x1
    lwzx r0, r3, r7
    addi r7, r7, 0x4
    stw r0, 0x0(r6)
    addi r6, r6, 0x4
    bdnz lbl_fn_80096218_00001A08
lbl_fn_80096218_00001A24:
    lwz r3, 0x8(r28)
    bl fn_80084C24
lbl_fn_80096218_00001A2C:
    stw r23, 0x8(r28)
    stw r26, 0x4(r28)
    b lbl_fn_80096218_00001B90
lbl_fn_80096218_00001A38:
    lwz r3, 0x0(r28)
    cmplw r3, r0
    blt lbl_fn_80096218_00001B90
    slwi r23, r3, 1
    cmplw r0, r23
    bgt lbl_fn_80096218_00001B90
    slwi r3, r23, 2
    li r4, 0x0
    la r5, lbl_8087D7E0
    la r6, lbl_8087D7DC
    li r7, 0x0
    bl fn_800846FC
    lwz r0, 0x8(r28)
    mr r24, r3
    cmpwi r0, 0x0
    beq lbl_fn_80096218_00001B88
    lwz r0, 0x0(r28)
    mr r4, r23
    cmplw r23, r0
    ble lbl_fn_80096218_00001A8C
    mr r4, r0
lbl_fn_80096218_00001A8C:
    cmpwi r4, 0x0
    li r5, 0x0
    beq lbl_fn_80096218_00001B80
    cmplwi r4, 0x8
    subi r8, r4, 0x8
    ble lbl_fn_80096218_00001B4C
    addi r0, r8, 0x7
    mr r7, r24
    srwi r0, r0, 3
    li r6, 0x0
    mtctr r0
    cmplwi r8, 0x0
    ble lbl_fn_80096218_00001B4C
lbl_fn_80096218_00001AC0:
    lwz r8, 0x8(r28)
    addi r5, r5, 0x8
    lwzx r0, r8, r6
    stw r0, 0x0(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    lwz r0, 0x4(r8)
    stw r0, 0x4(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    lwz r0, 0x8(r8)
    stw r0, 0x8(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    lwz r0, 0xc(r8)
    stw r0, 0xc(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    lwz r0, 0x10(r8)
    stw r0, 0x10(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    lwz r0, 0x14(r8)
    stw r0, 0x14(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    lwz r0, 0x18(r8)
    stw r0, 0x18(r7)
    lwz r0, 0x8(r28)
    add r8, r0, r6
    addi r6, r6, 0x20
    lwz r0, 0x1c(r8)
    stw r0, 0x1c(r7)
    addi r7, r7, 0x20
    bdnz lbl_fn_80096218_00001AC0
lbl_fn_80096218_00001B4C:
    slwi r7, r5, 2
    subf r0, r5, r4
    add r6, r3, r7
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_80096218_00001B80
lbl_fn_80096218_00001B64:
    lwz r3, 0x8(r28)
    addi r5, r5, 0x1
    lwzx r0, r3, r7
    addi r7, r7, 0x4
    stw r0, 0x0(r6)
    addi r6, r6, 0x4
    bdnz lbl_fn_80096218_00001B64
lbl_fn_80096218_00001B80:
    lwz r3, 0x8(r28)
    bl fn_80084C24
lbl_fn_80096218_00001B88:
    stw r24, 0x8(r28)
    stw r23, 0x4(r28)
lbl_fn_80096218_00001B90:
    lwz r0, 0x0(r28)
    lwz r3, 0x8(r28)
    slwi r0, r0, 2
    stwx r25, r3, r0
    lwz r3, 0x0(r28)
    addi r0, r3, 0x1
    stw r0, 0x0(r28)
lbl_fn_80096218_00001BAC:
    addi r21, r21, 0x18
    addi r30, r30, 0x1
lbl_fn_80096218_00001BB4:
    lwz r0, 0x108(r27)
    lwzx r3, r22, r0
    lbz r0, 0x4a(r3)
    cmpw r30, r0
    blt lbl_fn_80096218_000018B0
    addi r22, r22, 0x4
    addi r31, r31, 0x1
lbl_fn_80096218_00001BD0:
    lwz r0, 0x104(r27)
    cmplw r31, r0
    blt lbl_fn_80096218_000018A4
    li r21, 0x0
    li r28, 0x0
    li r30, 0x8
    b lbl_fn_80096218_00001EDC
lbl_fn_80096218_00001BEC:
    lwz r3, 0x1ec(r27)
    lwz r0, 0x8(r29)
    lwzx r3, r3, r28
    cmpwi r0, 0x0
    lwz r25, 0x14(r3)
    beq lbl_fn_80096218_00001C10
    lwz r0, 0x4(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80096218_00001D60
lbl_fn_80096218_00001C10:
    lwz r0, 0x4(r29)
    cmplwi r0, 0x8
    bgt lbl_fn_80096218_00001EB8
    li r3, 0x20
    li r4, 0x0
    la r5, lbl_8087D7D0
    la r6, lbl_8087D7CC
    li r7, 0x0
    bl fn_800846FC
    lwz r0, 0x8(r29)
    mr r23, r3
    cmpwi r0, 0x0
    beq lbl_fn_80096218_00001D54
    lwz r0, 0x0(r29)
    li r4, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_80096218_00001C58
    mr r4, r0
lbl_fn_80096218_00001C58:
    cmpwi r4, 0x0
    li r5, 0x0
    beq lbl_fn_80096218_00001D4C
    cmplwi r4, 0x8
    subi r8, r4, 0x8
    ble lbl_fn_80096218_00001D18
    addi r0, r8, 0x7
    mr r7, r23
    srwi r0, r0, 3
    li r6, 0x0
    mtctr r0
    cmplwi r8, 0x0
    ble lbl_fn_80096218_00001D18
lbl_fn_80096218_00001C8C:
    lwz r8, 0x8(r29)
    addi r5, r5, 0x8
    lwzx r0, r8, r6
    stw r0, 0x0(r7)
    lwz r0, 0x8(r29)
    add r8, r0, r6
    lwz r0, 0x4(r8)
    stw r0, 0x4(r7)
    lwz r0, 0x8(r29)
    add r8, r0, r6
    lwz r0, 0x8(r8)
    stw r0, 0x8(r7)
    lwz r0, 0x8(r29)
    add r8, r0, r6
    lwz r0, 0xc(r8)
    stw r0, 0xc(r7)
    lwz r0, 0x8(r29)
    add r8, r0, r6
    lwz r0, 0x10(r8)
    stw r0, 0x10(r7)
    lwz r0, 0x8(r29)
    add r8, r0, r6
    lwz r0, 0x14(r8)
    stw r0, 0x14(r7)
    lwz r0, 0x8(r29)
    add r8, r0, r6
    lwz r0, 0x18(r8)
    stw r0, 0x18(r7)
    lwz r0, 0x8(r29)
    add r8, r0, r6
    addi r6, r6, 0x20
    lwz r0, 0x1c(r8)
    stw r0, 0x1c(r7)
    addi r7, r7, 0x20
    bdnz lbl_fn_80096218_00001C8C
lbl_fn_80096218_00001D18:
    slwi r7, r5, 2
    subf r0, r5, r4
    add r6, r3, r7
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_80096218_00001D4C
lbl_fn_80096218_00001D30:
    lwz r3, 0x8(r29)
    addi r5, r5, 0x1
    lwzx r0, r3, r7
    addi r7, r7, 0x4
    stw r0, 0x0(r6)
    addi r6, r6, 0x4
    bdnz lbl_fn_80096218_00001D30
lbl_fn_80096218_00001D4C:
    lwz r3, 0x8(r29)
    bl fn_80084C24
lbl_fn_80096218_00001D54:
    stw r23, 0x8(r29)
    stw r30, 0x4(r29)
    b lbl_fn_80096218_00001EB8
lbl_fn_80096218_00001D60:
    lwz r3, 0x0(r29)
    cmplw r3, r0
    blt lbl_fn_80096218_00001EB8
    slwi r24, r3, 1
    cmplw r0, r24
    bgt lbl_fn_80096218_00001EB8
    slwi r3, r24, 2
    li r4, 0x0
    la r5, lbl_8087D7D0
    la r6, lbl_8087D7CC
    li r7, 0x0
    bl fn_800846FC
    lwz r0, 0x8(r29)
    mr r23, r3
    cmpwi r0, 0x0
    beq lbl_fn_80096218_00001EB0
    lwz r0, 0x0(r29)
    mr r4, r24
    cmplw r24, r0
    ble lbl_fn_80096218_00001DB4
    mr r4, r0
lbl_fn_80096218_00001DB4:
    cmpwi r4, 0x0
    li r5, 0x0
    beq lbl_fn_80096218_00001EA8
    cmplwi r4, 0x8
    subi r8, r4, 0x8
    ble lbl_fn_80096218_00001E74
    addi r0, r8, 0x7
    mr r7, r23
    srwi r0, r0, 3
    li r6, 0x0
    mtctr r0
    cmplwi r8, 0x0
    ble lbl_fn_80096218_00001E74
lbl_fn_80096218_00001DE8:
    lwz r8, 0x8(r29)
    addi r5, r5, 0x8
    lwzx r0, r8, r6
    stw r0, 0x0(r7)
    lwz r0, 0x8(r29)
    add r8, r0, r6
    lwz r0, 0x4(r8)
    stw r0, 0x4(r7)
    lwz r0, 0x8(r29)
    add r8, r0, r6
    lwz r0, 0x8(r8)
    stw r0, 0x8(r7)
    lwz r0, 0x8(r29)
    add r8, r0, r6
    lwz r0, 0xc(r8)
    stw r0, 0xc(r7)
    lwz r0, 0x8(r29)
    add r8, r0, r6
    lwz r0, 0x10(r8)
    stw r0, 0x10(r7)
    lwz r0, 0x8(r29)
    add r8, r0, r6
    lwz r0, 0x14(r8)
    stw r0, 0x14(r7)
    lwz r0, 0x8(r29)
    add r8, r0, r6
    lwz r0, 0x18(r8)
    stw r0, 0x18(r7)
    lwz r0, 0x8(r29)
    add r8, r0, r6
    addi r6, r6, 0x20
    lwz r0, 0x1c(r8)
    stw r0, 0x1c(r7)
    addi r7, r7, 0x20
    bdnz lbl_fn_80096218_00001DE8
lbl_fn_80096218_00001E74:
    slwi r7, r5, 2
    subf r0, r5, r4
    add r6, r3, r7
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_80096218_00001EA8
lbl_fn_80096218_00001E8C:
    lwz r3, 0x8(r29)
    addi r5, r5, 0x1
    lwzx r0, r3, r7
    addi r7, r7, 0x4
    stw r0, 0x0(r6)
    addi r6, r6, 0x4
    bdnz lbl_fn_80096218_00001E8C
lbl_fn_80096218_00001EA8:
    lwz r3, 0x8(r29)
    bl fn_80084C24
lbl_fn_80096218_00001EB0:
    stw r23, 0x8(r29)
    stw r24, 0x4(r29)
lbl_fn_80096218_00001EB8:
    lwz r0, 0x0(r29)
    addi r21, r21, 0x1
    lwz r3, 0x8(r29)
    addi r28, r28, 0x4
    slwi r0, r0, 2
    stwx r25, r3, r0
    lwz r3, 0x0(r29)
    addi r0, r3, 0x1
    stw r0, 0x0(r29)
lbl_fn_80096218_00001EDC:
    lwz r0, 0x1e4(r27)
    cmplw r21, r0
    blt lbl_fn_80096218_00001BEC
    lmw r21, 0x14(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80096E94(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    mr r30, r5
    bl fn_8008A4E0
    lfs f0, lbl_80880BF8
    lis r5, lbl_80778888@ha
    li r4, 0x0
    lfs f1, lbl_80880C00
    addi r5, r5, lbl_80778888@l
    li r3, 0x1
    li r0, -0x1
    stw r5, 0x0(r31)
    stw r4, 0x214(r31)
    stw r4, 0x218(r31)
    stw r4, 0x21c(r31)
    stw r4, 0x220(r31)
    stw r4, 0x224(r31)
    stw r4, 0x228(r31)
    stw r3, 0x34c(r31)
    stfs f1, 0x350(r31)
    stw r4, 0x354(r31)
    stw r4, 0x358(r31)
    stw r4, 0x35c(r31)
    stw r4, 0x370(r31)
    stw r4, 0x384(r31)
    stfs f0, 0x3a8(r31)
    stfs f0, 0x3ac(r31)
    stfs f0, 0x3b0(r31)
    stfs f0, 0x3b4(r31)
    stfs f0, 0x3b8(r31)
    stw r4, 0x3bc(r31)
    stw r0, 0x3c0(r31)
    stfs f0, 0x3c4(r31)
    stb r4, 0x3c8(r31)
    lwz r0, lbl_8087EF18
    cmpwi r0, 0x0
    bne lbl_fn_80096E94_00001FE0
    lis r3, lbl_80732368@ha
    lis r6, 0x1
    addi r3, r3, lbl_80732368@l
    li r4, 0x6
    addi r5, r3, 0xa
    li r7, 0x0
    subi r3, r6, 0x4ff0
    mr r6, r5
    bl fn_800846FC
    lis r4, fn_8008A4B0@ha
    li r5, 0x0
    addi r4, r4, fn_8008A4B0@l
    li r6, 0x2c
    li r7, 0x400
    bl fn_80695720
    stw r3, lbl_8087EF18
lbl_fn_80096E94_00001FE0:
    li r0, 0x2
    mr r6, r31
    lfs f2, lbl_80880BF8
    li r5, -0x1
    lfs f1, lbl_80880C00
    li r4, 0x1
    lfs f0, lbl_80880C24
    li r3, 0x0
    mtctr r0
lbl_fn_80096E94_00002004:
    stw r5, 0x22c(r6)
    stfs f2, 0x234(r6)
    stfs f1, 0x238(r6)
    stb r4, 0x244(r6)
    stfs f2, 0x23c(r6)
    stfs f0, 0x240(r6)
    stfs f1, 0x248(r6)
    stfs f1, 0x24c(r6)
    stw r3, 0x230(r6)
    stw r3, 0x250(r6)
    stfs f2, 0x254(r6)
    stfs f2, 0x258(r6)
    stw r5, 0x25c(r6)
    stfs f2, 0x264(r6)
    stfs f1, 0x268(r6)
    stb r4, 0x274(r6)
    stfs f2, 0x26c(r6)
    stfs f0, 0x270(r6)
    stfs f1, 0x278(r6)
    stfs f1, 0x27c(r6)
    stw r3, 0x260(r6)
    stw r3, 0x280(r6)
    stfs f2, 0x284(r6)
    stfs f2, 0x288(r6)
    stw r5, 0x28c(r6)
    stfs f2, 0x294(r6)
    stfs f1, 0x298(r6)
    stb r4, 0x2a4(r6)
    stfs f2, 0x29c(r6)
    stfs f0, 0x2a0(r6)
    stfs f1, 0x2a8(r6)
    stfs f1, 0x2ac(r6)
    stw r3, 0x290(r6)
    stw r3, 0x2b0(r6)
    stfs f2, 0x2b4(r6)
    stfs f2, 0x2b8(r6)
    addi r6, r6, 0x90
    bdnz lbl_fn_80096E94_00002004
    lwz r0, 0x4(r31)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_fn_80096E94_00002118
    lwz r3, 0x228(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80096E94_000020C4
    lis r4, fn_800970CC@ha
    addi r4, r4, fn_800970CC@l
    bl fn_80695A50
lbl_fn_80096E94_000020C4:
    cmpwi r30, 0x0
    stw r30, 0x224(r31)
    beq lbl_fn_80096E94_00002110
    mulli r3, r30, 0xc
    li r4, 0xb
    la r5, lbl_8087D7C8
    la r6, lbl_8087D7C4
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_800A03A0@ha
    lis r5, fn_800970CC@ha
    mr r7, r30
    li r6, 0xc
    addi r4, r4, fn_800A03A0@l
    addi r5, r5, fn_800970CC@l
    bl fn_80695720
    stw r3, 0x228(r31)
    b lbl_fn_80096E94_00002118
lbl_fn_80096E94_00002110:
    li r0, 0x0
    stw r0, 0x228(r31)
lbl_fn_80096E94_00002118:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800970CC(void)
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
    beq lbl_fn_800970CC_00002174
    beq lbl_fn_800970CC_00002164
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_800970CC_00002164:
    cmpwi r31, 0x0
    ble lbl_fn_800970CC_00002174
    mr r3, r30
    bl dtor_80084684
lbl_fn_800970CC_00002174:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80097128(void)
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
    beq lbl_fn_80097128_000021CC
    li r4, 0x0
    bl fn_80473E8C
    cmpwi r31, 0x0
    ble lbl_fn_80097128_000021CC
    mr r3, r30
    bl dtor_80084684
lbl_fn_80097128_000021CC:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80097180(void)
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
    beq lbl_fn_80097180_00002220
    bl fn_800A1060
    cmpwi r31, 0x0
    ble lbl_fn_80097180_00002220
    mr r3, r30
    bl dtor_80084684
lbl_fn_80097180_00002220:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
