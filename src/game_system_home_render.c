#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_21(void);
extern void _restgpr_22(void);
extern void _restgpr_27(void);
extern void _savegpr_21(void);
extern void _savegpr_22(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_80051CD8(void);
extern void fn_8005454C(void);
extern void fn_8005B3CC(void);
extern void fn_8005B9CC(void);
extern void fn_8005BBF8(void);
extern void fn_8005BCE8(void);
extern void fn_800616C0(void);
extern void fn_800629F0(void);
extern void fn_80063764(void);
extern void fn_80063D3C(void);
extern void fn_8006AC08(void);
extern void fn_80084320(void);
extern void fn_80084C24(void);
extern void fn_800874C8(void);
extern void fn_8008771C(void);
extern void fn_80087E9C(void);
extern void fn_8008937C(void);
extern void fn_800897D8(void);
extern void fn_8008AD4C(void);
extern void fn_8008B140(void);
extern void fn_80096E94(void);
extern void fn_80097A88(void);
extern void fn_800BFAC8(void);
extern void fn_800D1D3C(void);
extern void fn_800D1E9C(void);
extern void fn_800D3FA4(void);
extern void fn_800DC12C(void);
extern void fn_800DC288(void);
extern void fn_800DC6B4(void);
extern void fn_802180A8(void);
extern void fn_8035FF44(void);
extern void fn_8035FF94(void);
extern void fn_8036055C(void);
extern void fn_80360B40(void);
extern void fn_80360EA4(void);
extern void fn_803637D4(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473E74(void);
extern void fn_80473F50(void);
extern void fn_80473F88(void);
extern void fn_805F8E70(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_805F9990(void);
extern void fn_8067E23C(void);
extern void fn_80682428(void);
extern void fn_80684600(void);
extern int sprintf(char* str, const char* format, ...);
extern char* strcpy(char* dest, const char* src);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_8074B658[];
extern u8 lbl_8074B6B8[];
extern u8 lbl_8074B780[];
extern u8 lbl_807774B8[];
extern u8 lbl_807774D8[];
extern u8 lbl_80789CF0[];
extern u8 lbl_80789D38[];
extern u8 lbl_80789D80[];
extern u8 lbl_80789E58[];
extern u8 lbl_80789E98[];
extern u8 lbl_8078FBB0[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087D710;
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EF10;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087EFE8;
extern u32 lbl_8087F418;
extern u32 lbl_80885694;
extern u32 lbl_80885698;
extern u32 lbl_8088569C;
extern u32 lbl_808856A0;
extern u32 lbl_808856A4;
extern u32 lbl_808856A8;
extern u32 lbl_808856AC;
extern u32 lbl_808856B0;
extern u32 lbl_808856B4;
extern u32 lbl_808856B8;
extern u32 lbl_808856BC;
extern u32 lbl_808856C0;

/* Function declarations */
void fn_80361CA4(void);
void fn_80361D50(void);
void fn_80361D54(void);
void fn_8036205C(void);
void fn_80362278(void);
void fn_80362344(void);
void fn_803623C8(void);
void fn_8036243C(void);
void fn_80362440(void);
void fn_80362598(void);
void fn_803626A8(void);
void fn_80362774(void);
void fn_803627F8(void);
void fn_80362924(void);
void fn_80362928(void);
void fn_80362B94(void);
void fn_80362CC4(void);
void fn_80362D90(void);
void fn_80362E14(void);
void fn_80362E84(void);
void fn_80362E88(void);
void fn_80362E8C(void);
void fn_80362FA4(void);
void fn_80363108(void);
void fn_8036324C(void);
void fn_8036327C(void);
void fn_80363284(void);
void fn_8036354C(void);
void fn_803635E8(void);

asm void fn_80361CA4(void)
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
    beq lbl_fn_80361CA4_00000090
    addic. r0, r3, 0x64
    beq lbl_fn_80361CA4_00000048
    lwz r3, 0x68(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80361CA4_0000003C
    bl fn_80084C24
lbl_fn_80361CA4_0000003C:
    li r0, 0x0
    stw r0, 0x68(r30)
    stw r0, 0x64(r30)
lbl_fn_80361CA4_00000048:
    cmpwi r30, 0x0
    beq lbl_fn_80361CA4_00000080
    addic. r0, r30, 0x60
    beq lbl_fn_80361CA4_00000074
    lwz r4, 0x60(r30)
    cmpwi r4, 0x0
    beq lbl_fn_80361CA4_00000074
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_80361CA4_00000074
    bl fn_800897D8
lbl_fn_80361CA4_00000074:
    mr r3, r30
    li r4, 0x0
    bl fn_800D1E9C
lbl_fn_80361CA4_00000080:
    cmpwi r31, 0x0
    ble lbl_fn_80361CA4_00000090
    mr r3, r30
    bl dtor_80084684
lbl_fn_80361CA4_00000090:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80361D50(void)
{
    nofralloc
    b fn_800D3FA4
}

asm void fn_80361D54(void)
{
    nofralloc
    stwu r1, -0xf0(r1)
    mflr r0
    stw r0, 0xf4(r1)
    addi r11, r1, 0xa0
    stfd f31, 0xe0(r1)
    psq_st f31, 0xe8(r1), 0, 0
    stfd f30, 0xd0(r1)
    psq_st f30, 0xd8(r1), 0, 0
    stfd f29, 0xc0(r1)
    psq_st f29, 0xc8(r1), 0, 0
    stfd f28, 0xb0(r1)
    psq_st f28, 0xb8(r1), 0, 0
    stfd f27, 0xa0(r1)
    psq_st f27, 0xa8(r1), 0, 0
    bl _savegpr_22
    lwz r4, lbl_8087EFE8
    mr r31, r3
    cmpwi r4, 0x0
    beq lbl_fn_80361D54_00000378
    addi r4, r4, 0x29f4
    lfs f30, lbl_808856A0
    lfs f2, 0x8(r4)
    addi r3, r1, 0x50
    psq_l f1, 0x0(r4), 0, 0
    addi r27, r1, 0x60
    psq_st f1, 0x0(r3), 0, 0
    addi r26, r1, 0x6c
    lfs f29, lbl_808856B4
    addi r25, r1, 0x38
    stfs f2, 0x58(r1)
    addi r24, r1, 0x44
    lwz r28, lbl_8087F418
    li r22, 0x0
    stfs f30, 0x44(r1)
    li r30, 0x0
    lfs f31, lbl_808856B8
    stfs f30, 0x48(r1)
    lfs f28, lbl_8088569C
    stfs f30, 0x4c(r1)
    b lbl_fn_80361D54_00000334
lbl_fn_80361D54_00000150:
    lwz r3, 0x68(r31)
    lwz r4, 0x68(r28)
    lwzx r0, r3, r30
    lwz r3, lbl_8087F418
    slwi r0, r0, 3
    add r23, r4, r0
    lwzx r4, r4, r0
    bl fn_8035FF44
    mr r29, r3
    lwz r3, lbl_8087F418
    lwz r4, 0x4(r23)
    bl fn_8035FF44
    cmpwi r29, 0x0
    beq lbl_fn_80361D54_0000032C
    cmpwi r3, 0x0
    beq lbl_fn_80361D54_0000032C
    lwz r5, 0x50(r29)
    lwz r4, 0x50(r3)
    addi r3, r1, 0x8
    lfs f2, 0x34(r5)
    stfs f2, 0x68(r1)
    psq_l f1, 0x2c(r5), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    psq_l f1, 0x2c(r4), 0, 0
    psq_st f1, 0x0(r26), 0, 0
    lfs f2, 0x34(r4)
    lfs f0, 0x68(r1)
    lfs f5, 0x70(r1)
    fsubs f6, f2, f0
    lfs f4, 0x64(r1)
    lfs f3, 0x6c(r1)
    lfs f0, 0x60(r1)
    fsubs f4, f5, f4
    stfs f2, 0x74(r1)
    fsubs f0, f3, f0
    stfs f4, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f6, 0x10(r1)
    bl fn_805F9920
    fabs f0, f1
    fmr f27, f1
    frsp f0, f0
    fcmpo cr0, f0, f31
    bge lbl_fn_80361D54_00000214
    psq_l f1, 0x0(r27), 0, 0
    lfs f2, 0x68(r1)
    psq_st f1, 0x0(r25), 0, 0
    stfs f2, 0x40(r1)
    b lbl_fn_80361D54_000002D4
lbl_fn_80361D54_00000214:
    lfs f3, 0x68(r1)
    addi r3, r1, 0x8
    lfs f0, 0x58(r1)
    addi r4, r1, 0x14
    lfs f5, 0x64(r1)
    fsubs f6, f3, f0
    lfs f4, 0x54(r1)
    lfs f3, 0x60(r1)
    lfs f0, 0x50(r1)
    fsubs f4, f5, f4
    stfs f6, 0x1c(r1)
    fsubs f0, f3, f0
    stfs f4, 0x18(r1)
    stfs f0, 0x14(r1)
    bl fn_805F9990
    fneg f0, f1
    fdivs f5, f0, f27
    fcmpo cr0, f5, f30
    ble lbl_fn_80361D54_00000268
    fmr f0, f5
    b lbl_fn_80361D54_0000026C
lbl_fn_80361D54_00000268:
    fmr f0, f30
lbl_fn_80361D54_0000026C:
    fcmpo cr0, f0, f28
    bge lbl_fn_80361D54_00000288
    fcmpo cr0, f5, f30
    ble lbl_fn_80361D54_00000280
    b lbl_fn_80361D54_0000028C
lbl_fn_80361D54_00000280:
    fmr f5, f30
    b lbl_fn_80361D54_0000028C
lbl_fn_80361D54_00000288:
    fmr f5, f28
lbl_fn_80361D54_0000028C:
    lfs f4, 0x10(r1)
    lfs f3, 0xc(r1)
    fmuls f7, f4, f5
    lfs f0, 0x8(r1)
    fmuls f6, f3, f5
    lfs f4, 0x68(r1)
    fmuls f5, f0, f5
    lfs f3, 0x64(r1)
    lfs f0, 0x60(r1)
    fadds f4, f4, f7
    fadds f3, f3, f6
    stfs f5, 0x20(r1)
    fadds f0, f0, f5
    stfs f6, 0x24(r1)
    stfs f7, 0x28(r1)
    stfs f0, 0x38(r1)
    stfs f3, 0x3c(r1)
    stfs f4, 0x40(r1)
lbl_fn_80361D54_000002D4:
    lfs f3, 0x40(r1)
    addi r3, r1, 0x2c
    lfs f0, 0x58(r1)
    lfs f5, 0x3c(r1)
    fsubs f6, f3, f0
    lfs f4, 0x54(r1)
    lfs f3, 0x38(r1)
    lfs f0, 0x50(r1)
    fsubs f4, f5, f4
    stfs f6, 0x34(r1)
    fsubs f0, f3, f0
    stfs f4, 0x30(r1)
    stfs f0, 0x2c(r1)
    bl fn_805F9920
    fcmpo cr0, f29, f1
    fmr f0, f1
    ble lbl_fn_80361D54_0000032C
    psq_l f1, 0x0(r25), 0, 0
    fmr f29, f0
    lfs f2, 0x40(r1)
    psq_st f1, 0x0(r24), 0, 0
    stfs f2, 0x4c(r1)
lbl_fn_80361D54_0000032C:
    addi r22, r22, 0x1
    addi r30, r30, 0x4
lbl_fn_80361D54_00000334:
    lwz r0, 0x64(r31)
    cmplw r22, r0
    blt lbl_fn_80361D54_00000150
    addi r3, r1, 0x44
    lwz r4, 0x50(r31)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x2c(r4), 0, 0
    lfs f2, 0x4c(r1)
    stfs f2, 0x34(r4)
    lwz r0, 0x58(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80361D54_00000370
    lwz r3, lbl_8087F418
    lwz r4, 0x48(r31)
    bl fn_8036055C
lbl_fn_80361D54_00000370:
    mr r3, r31
    bl fn_80360EA4
lbl_fn_80361D54_00000378:
    addi r11, r1, 0xa0
    psq_l f31, 0xe8(r1), 0, 0
    lfd f31, 0xe0(r1)
    psq_l f30, 0xd8(r1), 0, 0
    lfd f30, 0xd0(r1)
    psq_l f29, 0xc8(r1), 0, 0
    lfd f29, 0xc0(r1)
    psq_l f28, 0xb8(r1), 0, 0
    lfd f28, 0xb0(r1)
    psq_l f27, 0xa8(r1), 0, 0
    lfd f27, 0xa0(r1)
    bl _restgpr_22
    lwz r0, 0xf4(r1)
    mtlr r0
    addi r1, r1, 0xf0
    blr
}

asm void fn_8036205C(void)
{
    nofralloc
    stwu r1, -0x1b0(r1)
    mflr r0
    stw r0, 0x1b4(r1)
    addi r11, r1, 0x180
    stfd f31, 0x1a0(r1)
    psq_st f31, 0x1a8(r1), 0, 0
    stfd f30, 0x190(r1)
    psq_st f30, 0x198(r1), 0, 0
    stfd f29, 0x180(r1)
    psq_st f29, 0x188(r1), 0, 0
    bl _savegpr_21
    lwz r29, lbl_8087F418
    mr r27, r3
    lwz r0, 0x1a4(r29)
    cmpwi r0, 0x1
    blt lbl_fn_8036205C_000005A4
    lis r25, lbl_8074B658@ha
    lfs f29, lbl_808856BC
    lfs f31, lbl_8088569C
    addi r31, r1, 0x30
    lfs f30, lbl_808856A0
    addi r30, r1, 0x3c
    addi r25, r25, lbl_8074B658@l
    li r28, 0x0
    li r26, 0x0
    lis r23, 0xff7f
    lis r24, lbl_8074B6B8@ha
    b lbl_fn_8036205C_00000598
lbl_fn_8036205C_00000428:
    lwz r3, 0x68(r27)
    lwz r4, 0x68(r29)
    lwzx r0, r3, r26
    lwz r3, lbl_8087F418
    slwi r0, r0, 3
    add r21, r4, r0
    lwzx r4, r4, r0
    bl fn_8035FF44
    mr r22, r3
    lwz r3, lbl_8087F418
    lwz r4, 0x4(r21)
    bl fn_8035FF44
    cmpwi r22, 0x0
    beq lbl_fn_8036205C_00000590
    cmpwi r3, 0x0
    beq lbl_fn_8036205C_00000590
    lwz r7, 0x50(r22)
    mr r4, r31
    mr r5, r30
    addi r6, r23, 0x7f40
    psq_l f1, 0x2c(r7), 0, 0
    lfs f2, 0x34(r7)
    stfs f2, 0x38(r1)
    psq_st f1, 0x0(r31), 0, 0
    lwz r7, 0x50(r3)
    lwz r3, lbl_8087EEB0
    psq_l f1, 0x2c(r7), 0, 0
    lfs f2, 0x34(r7)
    stfs f2, 0x44(r1)
    psq_st f1, 0x0(r30), 0, 0
    lfs f1, lbl_808856A0
    lwz r0, 0x58(r27)
    cmpwi r0, 0x0
    beq lbl_fn_8036205C_000004B4
    li r6, -0x80
lbl_fn_8036205C_000004B4:
    bl fn_80063764
    lfs f3, 0x38(r1)
    addi r3, r1, 0x8
    lfs f0, 0x44(r1)
    addi r5, r1, 0x20
    lfs f4, 0x34(r1)
    fadds f5, f3, f0
    lfs f0, 0x40(r1)
    lfs f3, 0x30(r1)
    fadds f4, f4, f0
    lfs f0, 0x3c(r1)
    fmuls f6, f5, f29
    fadds f0, f3, f0
    stfs f4, 0x18(r1)
    fmuls f3, f4, f29
    stfs f0, 0x14(r1)
    fmuls f0, f0, f29
    lwz r4, lbl_8087EFB4
    stfs f5, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f3, 0x24(r1)
    stfs f6, 0x28(r1)
    bl fn_800BFAC8
    lfs f0, 0x10(r1)
    fcmpo cr0, f30, f0
    bge lbl_fn_8036205C_00000590
    fcmpo cr0, f0, f31
    bge lbl_fn_8036205C_00000590
    lwz r5, 0x50(r27)
    addi r3, r1, 0x48
    lwz r6, 0x4c(r27)
    addi r4, r24, lbl_8074B6B8@l
    lwz r0, 0x0(r5)
    addi r7, r5, 0x4
    slwi r0, r0, 2
    lwzx r5, r25, r0
    crclr 6
    bl sprintf
    lfs f4, lbl_808856AC
    addi r4, r1, 0x48
    lwz r0, 0x58(r27)
    addi r5, r23, 0x7f7f
    fmr f5, f4
    lwz r3, lbl_8087EEB0
    cmpwi r0, 0x0
    lfs f1, 0x8(r1)
    lfs f2, 0xc(r1)
    lfs f3, lbl_808856A0
    beq lbl_fn_8036205C_0000057C
    li r5, -0x1
lbl_fn_8036205C_0000057C:
    lfs f6, lbl_808856A0
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
lbl_fn_8036205C_00000590:
    addi r28, r28, 0x1
    addi r26, r26, 0x4
lbl_fn_8036205C_00000598:
    lwz r0, 0x64(r27)
    cmplw r28, r0
    blt lbl_fn_8036205C_00000428
lbl_fn_8036205C_000005A4:
    addi r11, r1, 0x180
    psq_l f31, 0x1a8(r1), 0, 0
    lfd f31, 0x1a0(r1)
    psq_l f30, 0x198(r1), 0, 0
    lfd f30, 0x190(r1)
    psq_l f29, 0x188(r1), 0, 0
    lfd f29, 0x180(r1)
    bl _restgpr_21
    lwz r0, 0x1b4(r1)
    mtlr r0
    addi r1, r1, 0x1b0
    blr
}

asm void fn_80362278(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r5, lbl_8074B6B8@ha
    li r7, 0x0
    stw r0, 0x24(r1)
    addi r5, r5, lbl_8074B6B8@l
    addi r5, r5, 0x28
    stw r31, 0x1c(r1)
    mr r6, r5
    stw r30, 0x18(r1)
    mr r30, r4
    li r4, 0xc
    stw r29, 0x14(r1)
    mr r29, r3
    li r3, 0x78
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_80362278_00000680
    mr r4, r29
    bl fn_800D1D3C
    lis r4, lbl_80789E58@ha
    lis r3, lbl_80789D80@ha
    addi r4, r4, lbl_80789E58@l
    stw r4, 0x0(r31)
    li r5, 0x0
    li r0, 0x2
    stw r30, 0x48(r31)
    mulli r4, r30, 0x5c
    addi r3, r3, lbl_80789D80@l
    stw r5, 0x4c(r31)
    stw r5, 0x50(r31)
    stw r5, 0x54(r31)
    stw r5, 0x58(r31)
    stw r5, 0x5c(r31)
    stw r5, 0x60(r31)
    lwz r5, lbl_8087F418
    lwz r5, 0x58(r5)
    add r4, r5, r4
    addi r4, r4, 0x4
    stw r4, 0x50(r31)
    stw r0, 0x0(r4)
    stw r3, 0x0(r31)
lbl_fn_80362278_00000680:
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80362344(void)
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
    beq lbl_fn_80362344_00000708
    beq lbl_fn_80362344_000006F8
    addic. r0, r3, 0x60
    beq lbl_fn_80362344_000006EC
    lwz r4, 0x60(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80362344_000006EC
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_80362344_000006EC
    bl fn_800897D8
lbl_fn_80362344_000006EC:
    mr r3, r30
    li r4, 0x0
    bl fn_800D1E9C
lbl_fn_80362344_000006F8:
    cmpwi r31, 0x0
    ble lbl_fn_80362344_00000708
    mr r3, r30
    bl dtor_80084684
lbl_fn_80362344_00000708:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803623C8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    mr r3, r31
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x64(r30)
    mr r3, r31
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x68(r30)
    mr r3, r31
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x6c(r30)
    mr r3, r31
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x70(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8036243C(void)
{
    nofralloc
    b fn_800D3FA4
}

asm void fn_80362440(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r3
    lwz r4, lbl_8087EFE8
    cmpwi r4, 0x0
    beq lbl_fn_80362440_000008DC
    addi r4, r4, 0x29f4
    addi r31, r1, 0x20
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    lfs f2, 0x8(r4)
    lfs f0, 0x6c(r3)
    lfs f5, 0x24(r1)
    lfs f4, 0x68(r3)
    fsubs f6, f2, f0
    lfs f0, 0x64(r3)
    addi r3, r1, 0x14
    lfs f3, 0x20(r1)
    fsubs f4, f5, f4
    stfs f2, 0x28(r1)
    fsubs f0, f3, f0
    stfs f4, 0x18(r1)
    stfs f0, 0x14(r1)
    stfs f6, 0x1c(r1)
    bl fn_805F9920
    lfs f0, 0x70(r30)
    fmuls f0, f0, f0
    fcmpo cr0, f1, f0
    ble lbl_fn_80362440_000008A8
    addi r3, r1, 0x14
    bl fn_805F9920
    fabs f3, f1
    lfs f0, lbl_808856B8
    frsp f3, f3
    fcmpo cr0, f3, f0
    blt lbl_fn_80362440_00000844
    addi r3, r1, 0x14
    mr r4, r3
    bl fn_805F98D0
lbl_fn_80362440_00000844:
    lfs f7, 0x70(r30)
    addi r3, r1, 0x8
    lfs f4, 0x14(r1)
    lfs f3, 0x18(r1)
    fmuls f6, f4, f7
    lfs f0, 0x1c(r1)
    fmuls f5, f3, f7
    fmuls f4, f0, f7
    stfs f6, 0x14(r1)
    stfs f5, 0x18(r1)
    stfs f4, 0x1c(r1)
    lfs f3, 0x68(r30)
    lfs f0, 0x64(r30)
    fadds f5, f3, f5
    lfs f3, 0x6c(r30)
    fadds f0, f0, f6
    lwz r4, 0x50(r30)
    fadds f2, f3, f4
    stfs f5, 0xc(r1)
    stfs f0, 0x8(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x2c(r4), 0, 0
    stfs f2, 0x10(r1)
    stfs f2, 0x34(r4)
    b lbl_fn_80362440_000008BC
lbl_fn_80362440_000008A8:
    lwz r3, 0x50(r30)
    psq_l f1, 0x0(r31), 0, 0
    psq_st f1, 0x2c(r3), 0, 0
    lfs f2, 0x28(r1)
    stfs f2, 0x34(r3)
lbl_fn_80362440_000008BC:
    lwz r0, 0x58(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80362440_000008D4
    lwz r3, lbl_8087F418
    lwz r4, 0x48(r30)
    bl fn_8036055C
lbl_fn_80362440_000008D4:
    mr r3, r30
    bl fn_80360EA4
lbl_fn_80362440_000008DC:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80362598(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    stw r31, 0x11c(r1)
    mr r31, r3
    lwz r4, lbl_8087F418
    lwz r0, 0x1a4(r4)
    cmpwi r0, 0x1
    blt lbl_fn_80362598_000009F0
    lwz r0, 0x58(r31)
    lis r5, 0xff40
    lwz r3, lbl_8087EEB0
    addi r4, r31, 0x64
    cmpwi r0, 0x0
    lfs f1, 0x70(r31)
    lfs f2, lbl_808856A0
    addi r5, r5, 0x7f40
    beq lbl_fn_80362598_00000944
    lis r5, 0xff81
    subi r5, r5, 0x80
lbl_fn_80362598_00000944:
    bl fn_80063D3C
    lwz r4, lbl_8087EFB4
    addi r3, r1, 0x8
    addi r5, r31, 0x64
    bl fn_800BFAC8
    lfs f0, lbl_808856A0
    lfs f1, 0x10(r1)
    fcmpo cr0, f0, f1
    bge lbl_fn_80362598_000009F0
    lfs f0, lbl_8088569C
    fcmpo cr0, f1, f0
    bge lbl_fn_80362598_000009F0
    lwz r7, 0x50(r31)
    lis r5, lbl_8074B658@ha
    lis r4, lbl_8074B6B8@ha
    lwz r6, 0x4c(r31)
    lwz r0, 0x0(r7)
    addi r5, r5, lbl_8074B658@l
    addi r3, r1, 0x18
    addi r4, r4, lbl_8074B6B8@l
    slwi r0, r0, 2
    addi r7, r7, 0x4
    lwzx r5, r5, r0
    crclr 6
    bl sprintf
    lfs f4, lbl_808856AC
    lis r5, 0xff7f
    lwz r0, 0x58(r31)
    addi r4, r1, 0x18
    fmr f5, f4
    lwz r3, lbl_8087EEB0
    cmpwi r0, 0x0
    lfs f1, 0x8(r1)
    lfs f2, 0xc(r1)
    addi r5, r5, 0x7f7f
    lfs f3, lbl_808856A0
    beq lbl_fn_80362598_000009DC
    li r5, -0x1
lbl_fn_80362598_000009DC:
    lfs f6, lbl_808856A0
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
lbl_fn_80362598_000009F0:
    lwz r0, 0x124(r1)
    lwz r31, 0x11c(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_803626A8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r5, lbl_8074B6B8@ha
    li r7, 0x0
    stw r0, 0x24(r1)
    addi r5, r5, lbl_8074B6B8@l
    addi r5, r5, 0x28
    stw r31, 0x1c(r1)
    mr r6, r5
    stw r30, 0x18(r1)
    mr r30, r4
    li r4, 0xc
    stw r29, 0x14(r1)
    mr r29, r3
    li r3, 0xa8
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_803626A8_00000AB0
    mr r4, r29
    bl fn_800D1D3C
    lis r4, lbl_80789E58@ha
    lis r3, lbl_80789D38@ha
    addi r4, r4, lbl_80789E58@l
    stw r4, 0x0(r31)
    li r5, 0x0
    li r0, 0x3
    stw r30, 0x48(r31)
    mulli r4, r30, 0x5c
    addi r3, r3, lbl_80789D38@l
    stw r5, 0x4c(r31)
    stw r5, 0x50(r31)
    stw r5, 0x54(r31)
    stw r5, 0x58(r31)
    stw r5, 0x5c(r31)
    stw r5, 0x60(r31)
    lwz r5, lbl_8087F418
    lwz r5, 0x58(r5)
    add r4, r5, r4
    addi r4, r4, 0x4
    stw r4, 0x50(r31)
    stw r0, 0x0(r4)
    stw r3, 0x0(r31)
lbl_fn_803626A8_00000AB0:
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80362774(void)
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
    beq lbl_fn_80362774_00000B38
    beq lbl_fn_80362774_00000B28
    addic. r0, r3, 0x60
    beq lbl_fn_80362774_00000B1C
    lwz r4, 0x60(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80362774_00000B1C
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_80362774_00000B1C
    bl fn_800897D8
lbl_fn_80362774_00000B1C:
    mr r3, r30
    li r4, 0x0
    bl fn_800D1E9C
lbl_fn_80362774_00000B28:
    cmpwi r31, 0x0
    ble lbl_fn_80362774_00000B38
    mr r3, r30
    bl dtor_80084684
lbl_fn_80362774_00000B38:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803627F8(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stfd f31, 0x50(r1)
    psq_st f31, 0x58(r1), 0, 0
    stw r31, 0x4c(r1)
    mr r31, r4
    stw r30, 0x48(r1)
    mr r30, r3
    mr r3, r31
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x8(r1)
    mr r3, r31
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0xc(r1)
    mr r3, r31
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x10(r1)
    mr r3, r31
    bl fn_8005B3CC
    bl fn_800DC288
    fmr f31, f1
    mr r3, r31
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x64(r30)
    mr r3, r31
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x68(r30)
    mr r3, r31
    bl fn_8005B3CC
    bl fn_800DC288
    lfs f7, 0xc(r1)
    addi r3, r1, 0x18
    lfs f0, 0x68(r30)
    li r4, 0x79
    stfs f1, 0x6c(r30)
    fmr f1, f31
    fadds f0, f7, f0
    stfs f0, 0xc(r1)
    bl fn_805F8E70
    addi r4, r1, 0x18
    lfs f8, 0x8(r1)
    psq_l f1, 0x0(r4), 0, 0
    addi r3, r30, 0x64
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_st f6, 0x98(r30), 0, 0
    lfs f0, 0x10(r1)
    psq_st f2, 0x78(r30), 0, 0
    lfs f7, 0xc(r1)
    psq_st f4, 0x88(r30), 0, 0
    psq_st f1, 0x70(r30), 0, 0
    psq_st f3, 0x80(r30), 0, 0
    psq_st f5, 0x90(r30), 0, 0
    stfs f8, 0x7c(r30)
    stfs f7, 0x8c(r30)
    stfs f0, 0x9c(r30)
    bl fn_805F9940
    stfs f1, 0xa0(r30)
    psq_l f31, 0x58(r1), 0, 0
    lfd f31, 0x50(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80362924(void)
{
    nofralloc
    b fn_800D3FA4
}

asm void fn_80362928(void)
{
    nofralloc
    stwu r1, -0xf0(r1)
    mflr r0
    stw r0, 0xf4(r1)
    stw r31, 0xec(r1)
    stw r30, 0xe8(r1)
    mr r30, r3
    lwz r4, lbl_8087EFE8
    cmpwi r4, 0x0
    beq lbl_fn_80362928_00000ED8
    addi r4, r4, 0x29f4
    lfs f4, 0x9c(r3)
    addi r31, r1, 0x6c
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    lfs f2, 0x8(r4)
    lfs f5, 0x8c(r3)
    lfs f6, 0x7c(r3)
    fsubs f7, f2, f4
    lfs f3, 0x70(r1)
    addi r3, r1, 0x60
    lfs f0, 0x6c(r1)
    fsubs f3, f3, f5
    stfs f2, 0x74(r1)
    fsubs f0, f0, f6
    stfs f6, 0x44(r1)
    stfs f5, 0x48(r1)
    stfs f4, 0x4c(r1)
    stfs f0, 0x60(r1)
    stfs f3, 0x64(r1)
    stfs f7, 0x68(r1)
    bl fn_805F9920
    lwz r4, 0x50(r30)
    lfs f0, 0xa0(r30)
    lfs f3, 0x38(r4)
    fadds f0, f3, f0
    fmuls f0, f0, f0
    fcmpo cr0, f1, f0
    bge lbl_fn_80362928_00000E90
    lfs f2, 0x74(r1)
    addi r3, r1, 0x50
    psq_l f1, 0x0(r31), 0, 0
    addi r4, r30, 0x64
    lfs f0, lbl_808856A0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x58(r1)
    stfs f0, 0x5c(r1)
    bl fn_80051CD8
    cmpwi r3, 0x0
    beq lbl_fn_80362928_00000D60
    lwz r3, 0x50(r30)
    psq_l f1, 0x0(r31), 0, 0
    psq_st f1, 0x2c(r3), 0, 0
    lfs f2, 0x74(r1)
    stfs f2, 0x34(r3)
    b lbl_fn_80362928_00000EB8
lbl_fn_80362928_00000D60:
    addi r3, r1, 0x60
    bl fn_805F9920
    fabs f3, f1
    lfs f0, lbl_808856B8
    frsp f3, f3
    fcmpo cr0, f3, f0
    blt lbl_fn_80362928_00000D88
    addi r3, r1, 0x60
    mr r4, r3
    bl fn_805F98D0
lbl_fn_80362928_00000D88:
    lfs f5, 0xa0(r30)
    addi r6, r1, 0x38
    lfs f4, 0x60(r1)
    addi r4, r1, 0x78
    lfs f3, 0x64(r1)
    addi r8, r1, 0x20
    lfs f0, 0x68(r1)
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    addi r7, r1, 0x84
    fmuls f0, f0, f5
    stfs f4, 0x60(r1)
    li r0, 0x0
    stfs f3, 0x64(r1)
    addi r3, r1, 0x90
    addi r5, r30, 0x64
    stfs f0, 0x68(r1)
    lfs f5, 0x9c(r30)
    lfs f6, 0x8c(r30)
    lfs f7, 0x7c(r30)
    fadds f0, f5, f0
    fadds f3, f6, f3
    stfs f7, 0x20(r1)
    fadds f4, f7, f4
    fmr f2, f0
    stfs f3, 0x3c(r1)
    stfs f4, 0x38(r1)
    stfs f2, 0x80(r1)
    fmr f2, f5
    psq_l f1, 0x0(r6), 0, 0
    stfs f6, 0x24(r1)
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x0(r8), 0, 0
    stfs f7, 0x2c(r1)
    stfs f6, 0x30(r1)
    stfs f5, 0x34(r1)
    stfs f0, 0x40(r1)
    stfs f5, 0x28(r1)
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0x8c(r1)
    stw r0, 0xc4(r1)
    stw r0, 0xc8(r1)
    stw r0, 0xcc(r1)
    stw r0, 0xd0(r1)
    bl fn_8005454C
    cmpwi r3, 0x0
    beq lbl_fn_80362928_00000E60
    addi r3, r1, 0xa0
    lwz r4, 0x50(r30)
    lfs f2, 0xa8(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x2c(r4), 0, 0
    stfs f2, 0x34(r4)
    b lbl_fn_80362928_00000EB8
lbl_fn_80362928_00000E60:
    lfs f0, 0x8c(r30)
    addi r3, r1, 0x14
    lfs f3, 0x7c(r30)
    lfs f2, 0x9c(r30)
    stfs f3, 0x14(r1)
    lwz r4, 0x50(r30)
    stfs f0, 0x18(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x2c(r4), 0, 0
    stfs f2, 0x1c(r1)
    stfs f2, 0x34(r4)
    b lbl_fn_80362928_00000EB8
lbl_fn_80362928_00000E90:
    lfs f0, 0x8c(r30)
    addi r3, r1, 0x8
    lfs f3, 0x7c(r30)
    lfs f2, 0x9c(r30)
    stfs f3, 0x8(r1)
    stfs f0, 0xc(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x2c(r4), 0, 0
    stfs f2, 0x10(r1)
    stfs f2, 0x34(r4)
lbl_fn_80362928_00000EB8:
    lwz r0, 0x58(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80362928_00000ED0
    lwz r3, lbl_8087F418
    lwz r4, 0x48(r30)
    bl fn_8036055C
lbl_fn_80362928_00000ED0:
    mr r3, r30
    bl fn_80360EA4
lbl_fn_80362928_00000ED8:
    lwz r0, 0xf4(r1)
    lwz r31, 0xec(r1)
    lwz r30, 0xe8(r1)
    mtlr r0
    addi r1, r1, 0xf0
    blr
}

asm void fn_80362B94(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    stw r31, 0x12c(r1)
    mr r31, r3
    lwz r4, lbl_8087F418
    lwz r0, 0x1a4(r4)
    cmpwi r0, 0x1
    blt lbl_fn_80362B94_0000100C
    lwz r0, 0x58(r31)
    lis r4, lbl_807C7030@ha
    lis r6, 0xff40
    lwz r3, lbl_8087EEB0
    cmpwi r0, 0x0
    lfs f1, lbl_808856A0
    addi r4, r4, lbl_807C7030@l
    addi r5, r31, 0x64
    addi r6, r6, 0x7f7f
    beq lbl_fn_80362B94_00000F44
    lis r6, 0xff81
    subi r6, r6, 0x1
lbl_fn_80362B94_00000F44:
    addi r7, r31, 0x70
    bl fn_800629F0
    lfs f0, 0x9c(r31)
    addi r3, r1, 0x8
    lfs f1, 0x8c(r31)
    addi r5, r1, 0x14
    lfs f2, 0x7c(r31)
    stfs f2, 0x14(r1)
    lwz r4, lbl_8087EFB4
    stfs f1, 0x18(r1)
    stfs f0, 0x1c(r1)
    bl fn_800BFAC8
    lfs f0, lbl_808856A0
    lfs f1, 0x10(r1)
    fcmpo cr0, f0, f1
    bge lbl_fn_80362B94_0000100C
    lfs f0, lbl_8088569C
    fcmpo cr0, f1, f0
    bge lbl_fn_80362B94_0000100C
    lwz r7, 0x50(r31)
    lis r5, lbl_8074B658@ha
    lis r4, lbl_8074B6B8@ha
    lwz r6, 0x4c(r31)
    lwz r0, 0x0(r7)
    addi r5, r5, lbl_8074B658@l
    addi r3, r1, 0x20
    addi r4, r4, lbl_8074B6B8@l
    slwi r0, r0, 2
    addi r7, r7, 0x4
    lwzx r5, r5, r0
    crclr 6
    bl sprintf
    lfs f4, lbl_808856AC
    lis r5, 0xff7f
    lwz r0, 0x58(r31)
    addi r4, r1, 0x20
    fmr f5, f4
    lwz r3, lbl_8087EEB0
    cmpwi r0, 0x0
    lfs f1, 0x8(r1)
    lfs f2, 0xc(r1)
    addi r5, r5, 0x7f7f
    lfs f3, lbl_808856A0
    beq lbl_fn_80362B94_00000FF8
    li r5, -0x1
lbl_fn_80362B94_00000FF8:
    lfs f6, lbl_808856A0
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
lbl_fn_80362B94_0000100C:
    lwz r0, 0x134(r1)
    lwz r31, 0x12c(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

asm void fn_80362CC4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r5, lbl_8074B6B8@ha
    li r7, 0x0
    stw r0, 0x24(r1)
    addi r5, r5, lbl_8074B6B8@l
    addi r5, r5, 0x28
    stw r31, 0x1c(r1)
    mr r6, r5
    stw r30, 0x18(r1)
    mr r30, r4
    li r4, 0xc
    stw r29, 0x14(r1)
    mr r29, r3
    li r3, 0x68
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_80362CC4_000010CC
    mr r4, r29
    bl fn_800D1D3C
    lis r4, lbl_80789E58@ha
    lis r3, lbl_80789CF0@ha
    addi r4, r4, lbl_80789E58@l
    stw r4, 0x0(r31)
    li r5, 0x0
    li r0, 0x4
    stw r30, 0x48(r31)
    mulli r4, r30, 0x5c
    addi r3, r3, lbl_80789CF0@l
    stw r5, 0x4c(r31)
    stw r5, 0x50(r31)
    stw r5, 0x54(r31)
    stw r5, 0x58(r31)
    stw r5, 0x5c(r31)
    stw r5, 0x60(r31)
    lwz r5, lbl_8087F418
    lwz r5, 0x58(r5)
    add r4, r5, r4
    addi r4, r4, 0x4
    stw r4, 0x50(r31)
    stw r0, 0x0(r4)
    stw r3, 0x0(r31)
lbl_fn_80362CC4_000010CC:
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80362D90(void)
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
    beq lbl_fn_80362D90_00001154
    beq lbl_fn_80362D90_00001144
    addic. r0, r3, 0x60
    beq lbl_fn_80362D90_00001138
    lwz r4, 0x60(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80362D90_00001138
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_80362D90_00001138
    bl fn_800897D8
lbl_fn_80362D90_00001138:
    mr r3, r30
    li r4, 0x0
    bl fn_800D1E9C
lbl_fn_80362D90_00001144:
    cmpwi r31, 0x0
    ble lbl_fn_80362D90_00001154
    mr r3, r30
    bl dtor_80084684
lbl_fn_80362D90_00001154:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80362E14(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    mr r3, r31
    bl fn_8005B3CC
    bl fn_800DC288
    lwz r4, 0x50(r30)
    mr r3, r31
    stfs f1, 0x2c(r4)
    bl fn_8005B3CC
    bl fn_800DC288
    lwz r4, 0x50(r30)
    mr r3, r31
    stfs f1, 0x30(r4)
    bl fn_8005B3CC
    bl fn_800DC288
    lwz r3, 0x50(r30)
    stfs f1, 0x34(r3)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80362E84(void)
{
    nofralloc
    b fn_800D3FA4
}

asm void fn_80362E88(void)
{
    nofralloc
    b fn_80360EA4
}

asm void fn_80362E8C(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    stw r31, 0x11c(r1)
    mr r31, r3
    lwz r4, lbl_8087F418
    lwz r0, 0x1a4(r4)
    cmpwi r0, 0x1
    blt lbl_fn_80362E8C_000012EC
    lwz r0, 0x58(r31)
    lis r3, 0xff40
    lwz r4, 0x50(r31)
    addi r5, r3, 0x407f
    cmpwi r0, 0x0
    lwz r3, lbl_8087EEB0
    lfs f1, lbl_808856B0
    addi r4, r4, 0x2c
    lfs f2, lbl_808856A0
    beq lbl_fn_80362E8C_0000123C
    lis r5, 0xff81
    subi r5, r5, 0x7f01
lbl_fn_80362E8C_0000123C:
    bl fn_80063D3C
    lwz r5, 0x50(r31)
    addi r3, r1, 0x8
    lwz r4, lbl_8087EFB4
    addi r5, r5, 0x2c
    bl fn_800BFAC8
    lfs f0, lbl_808856A0
    lfs f1, 0x10(r1)
    fcmpo cr0, f0, f1
    bge lbl_fn_80362E8C_000012EC
    lfs f0, lbl_8088569C
    fcmpo cr0, f1, f0
    bge lbl_fn_80362E8C_000012EC
    lwz r7, 0x50(r31)
    lis r5, lbl_8074B658@ha
    lis r4, lbl_8074B6B8@ha
    lwz r6, 0x4c(r31)
    lwz r0, 0x0(r7)
    addi r5, r5, lbl_8074B658@l
    addi r3, r1, 0x18
    addi r4, r4, lbl_8074B6B8@l
    slwi r0, r0, 2
    addi r7, r7, 0x4
    lwzx r5, r5, r0
    crclr 6
    bl sprintf
    lfs f4, lbl_808856AC
    lis r5, 0xff7f
    lwz r0, 0x58(r31)
    addi r4, r1, 0x18
    fmr f5, f4
    lwz r3, lbl_8087EEB0
    cmpwi r0, 0x0
    lfs f1, 0x8(r1)
    lfs f2, 0xc(r1)
    addi r5, r5, 0x7f7f
    lfs f3, lbl_808856A0
    beq lbl_fn_80362E8C_000012D8
    li r5, -0x1
lbl_fn_80362E8C_000012D8:
    lfs f6, lbl_808856A0
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
lbl_fn_80362E8C_000012EC:
    lwz r0, 0x124(r1)
    lwz r31, 0x11c(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_80362FA4(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stfd f31, 0x50(r1)
    psq_st f31, 0x58(r1), 0, 0
    stw r31, 0x4c(r1)
    mr r31, r4
    stw r30, 0x48(r1)
    mr r30, r3
    mr r3, r31
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x0(r30)
    mr r3, r31
    bl fn_8005B3CC
    mr r4, r31
    addi r3, r30, 0x8
    bl fn_80360B40
    mr r3, r31
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x8(r1)
    mr r3, r31
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0xc(r1)
    mr r3, r31
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x10(r1)
    mr r3, r31
    bl fn_8005B3CC
    bl fn_800DC288
    fmr f31, f1
    mr r3, r31
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x60(r30)
    mr r3, r31
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x64(r30)
    mr r3, r31
    bl fn_8005B3CC
    bl fn_800DC288
    lfs f7, 0xc(r1)
    addi r3, r1, 0x18
    lfs f0, 0x64(r30)
    li r4, 0x79
    stfs f1, 0x68(r30)
    fmr f1, f31
    fadds f0, f7, f0
    stfs f0, 0xc(r1)
    bl fn_805F8E70
    addi r4, r1, 0x18
    lfs f8, 0x8(r1)
    psq_l f1, 0x0(r4), 0, 0
    mr r3, r31
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_st f6, 0x94(r30), 0, 0
    lfs f0, 0x10(r1)
    psq_st f2, 0x74(r30), 0, 0
    lfs f7, 0xc(r1)
    psq_st f4, 0x84(r30), 0, 0
    psq_st f1, 0x6c(r30), 0, 0
    psq_st f3, 0x7c(r30), 0, 0
    psq_st f5, 0x8c(r30), 0, 0
    stfs f8, 0x78(r30)
    stfs f7, 0x88(r30)
    stfs f0, 0x98(r30)
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x9c(r30)
    mr r3, r31
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0xa0(r30)
    psq_l f31, 0x58(r1), 0, 0
    lfd f31, 0x50(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80363108(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x124(r1)
    stw r31, 0x11c(r1)
    stw r30, 0x118(r1)
    stw r29, 0x114(r1)
    mr r29, r4
    stw r28, 0x110(r1)
    mr r28, r3
    beq lbl_fn_80363108_00001588
    lis r4, lbl_8074B6B8@ha
    lwz r5, 0x0(r28)
    addi r4, r4, lbl_8074B6B8@l
    addi r3, r1, 0x8
    addi r4, r4, 0x3f
    addi r6, r28, 0xc
    crclr 6
    bl sprintf
    lwz r0, 0xa4(r28)
    cmpwi r0, 0x0
    bne lbl_fn_80363108_000014E8
    cmpwi r29, 0x0
    beq lbl_fn_80363108_000014E8
    lwz r0, lbl_8087EF10
    cmpwi r0, 0x0
    beq lbl_fn_80363108_000014E8
    mr r3, r29
    addi r4, r1, 0x8
    bl fn_8008937C
    stw r3, 0xa4(r28)
    mr r29, r3
    b lbl_fn_80363108_000014EC
lbl_fn_80363108_000014E8:
    li r29, 0x0
lbl_fn_80363108_000014EC:
    lis r30, lbl_8074B6B8@ha
    lis r31, fn_8036324C@ha
    addi r30, r30, lbl_8074B6B8@l
    lfs f1, lbl_80885694
    lfs f2, lbl_80885698
    mr r3, r29
    lfs f3, lbl_8088569C
    mr r7, r28
    addi r4, r30, 0xb
    addi r5, r28, 0x34
    addi r6, r31, fn_8036324C@l
    bl fn_80087E9C
    lfs f1, lbl_808856A0
    mr r3, r29
    lfs f2, lbl_808856A4
    mr r7, r28
    lfs f3, lbl_808856A8
    addi r4, r30, 0x1d
    addi r5, r28, 0x30
    addi r6, r31, fn_8036324C@l
    bl fn_8008771C
    lfs f1, lbl_808856A0
    mr r3, r29
    lfs f2, lbl_8088569C
    mr r7, r28
    lfs f3, lbl_808856A8
    addi r4, r30, 0x24
    addi r5, r28, 0x44
    addi r6, r31, fn_8036324C@l
    bl fn_8008771C
    mr r3, r29
    mr r10, r28
    addi r4, r30, 0x4c
    addi r5, r28, 0x9c
    addi r9, r31, fn_8036324C@l
    li r6, 0x0
    li r7, 0x14
    li r8, 0x1
    bl fn_800874C8
lbl_fn_80363108_00001588:
    lwz r0, 0x124(r1)
    lwz r31, 0x11c(r1)
    lwz r30, 0x118(r1)
    lwz r29, 0x114(r1)
    lwz r28, 0x110(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_8036324C(void)
{
    nofralloc
    lwz r5, lbl_8087F418
    cmpwi r5, 0x0
    beqlr
    lwz r4, 0x0(r3)
    lwz r0, 0x84(r5)
    cmpw r4, r0
    bnelr
    mr r3, r5
    li r5, 0x0
    li r6, 0x1
    b fn_8035FF94
    blr
}

asm void fn_8036327C(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_80363284(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_27
    lis r5, lbl_80789E98@ha
    mr r30, r4
    addi r5, r5, lbl_80789E98@l
    stw r5, 0x0(r3)
    mr r29, r3
    li r4, 0x505
    li r5, 0x20
    addi r3, r3, 0x4
    bl fn_80096E94
    lwz r0, 0x3dc(r29)
    addi r31, r29, 0x3ec
    lfs f0, lbl_808856C0
    li r28, 0x0
    oris r0, r0, 0x8000
    li r4, -0x1
    rlwinm r0, r0, 0, 2, 0
    stw r28, 0x3d4(r29)
    mr r3, r31
    stw r4, 0x3d8(r29)
    stw r0, 0x3dc(r29)
    stfs f0, 0x3e0(r29)
    stfs f0, 0x3e4(r29)
    stfs f0, 0x3e8(r29)
    bl fn_80473E74
    lis r4, lbl_8078FBB0@ha
    mr r3, r30
    addi r4, r4, lbl_8078FBB0@l
    stw r4, 0x0(r31)
    bl fn_8005B9CC
    stw r28, 0x2c(r1)
    mr r31, r3
    addi r27, r1, 0x2c
    stw r28, 0x30(r1)
    stw r28, 0x34(r1)
    bl strlen
    mr r28, r3
    mr r3, r27
    mr r4, r28
    bl fn_80013DC4
    lbz r0, 0xc(r1)
    mr r3, r27
    stb r0, 0x8(r1)
    mr r6, r31
    add r7, r31, r28
    addi r8, r1, 0x8
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    mr r4, r27
    addi r3, r1, 0x20
    bl fn_8006AC08
    lis r27, lbl_8074B780@ha
    addi r27, r27, lbl_8074B780@l
    mr r3, r27
    bl strlen
    lwz r0, 0x20(r1)
    mr r28, r3
    stw r3, 0x18(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80363284_000016F0
    lbz r0, 0x20(r1)
    clrlwi r4, r0, 25
    b lbl_fn_80363284_000016F4
lbl_fn_80363284_000016F0:
    lwz r4, 0x24(r1)
lbl_fn_80363284_000016F4:
    lwz r0, 0x20(r1)
    stw r4, 0x1c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80363284_00001714
    lbz r0, 0x20(r1)
    addi r3, r1, 0x21
    clrlwi r0, r0, 25
    b lbl_fn_80363284_0000171C
lbl_fn_80363284_00001714:
    lwz r3, 0x28(r1)
    lwz r0, 0x24(r1)
lbl_fn_80363284_0000171C:
    cmplw r4, r0
    stw r0, 0x14(r1)
    addi r4, r1, 0x14
    bge lbl_fn_80363284_00001730
    addi r4, r1, 0x1c
lbl_fn_80363284_00001730:
    lwz r0, 0x0(r4)
    mr r4, r27
    stw r0, 0x10(r1)
    addi r5, r1, 0x10
    cmplw r28, r0
    bge lbl_fn_80363284_0000174C
    addi r5, r1, 0x18
lbl_fn_80363284_0000174C:
    lwz r5, 0x0(r5)
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_80363284_00001780
    lwz r0, 0x10(r1)
    cmplw r0, r28
    bge lbl_fn_80363284_00001770
    li r3, -0x1
    b lbl_fn_80363284_00001780
lbl_fn_80363284_00001770:
    bne lbl_fn_80363284_0000177C
    li r3, 0x0
    b lbl_fn_80363284_00001780
lbl_fn_80363284_0000177C:
    li r3, 0x1
lbl_fn_80363284_00001780:
    lwz r0, 0x20(r1)
    cntlzw r3, r3
    srwi r27, r3, 5
    srwi. r0, r0, 31
    beq lbl_fn_80363284_0000179C
    lwz r3, 0x28(r1)
    bl dtor_80084684
lbl_fn_80363284_0000179C:
    lwz r0, 0x2c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80363284_000017B0
    lwz r3, 0x34(r1)
    bl dtor_80084684
lbl_fn_80363284_000017B0:
    cmpwi r27, 0x0
    beq lbl_fn_80363284_000017DC
    lwz r12, 0x3ec(r29)
    addi r3, r29, 0x3ec
    mr r4, r31
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x3f4(r29)
    b lbl_fn_80363284_0000188C
lbl_fn_80363284_000017DC:
    mr r4, r31
    addi r3, r29, 0x4
    li r5, 0x0
    bl fn_8008AD4C
    mr r3, r30
    bl fn_8005B9CC
    bl fn_800DC6B4
    stw r3, 0x3d8(r29)
    mr r3, r30
    bl fn_8005B9CC
    lis r4, lbl_8074B780@ha
    addi r4, r4, lbl_8074B780@l
    addi r4, r4, 0x4
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_80363284_00001848
    addi r3, r30, 0x10
    bl fn_800DC288
    stfs f1, 0x3e0(r29)
    mr r3, r30
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x3e4(r29)
    mr r3, r30
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x3e8(r29)
lbl_fn_80363284_00001848:
    mr r3, r30
    bl fn_8005B9CC
    lis r4, lbl_8074B780@ha
    addi r4, r4, lbl_8074B780@l
    addi r4, r4, 0x4
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_80363284_00001884
    addi r3, r30, 0x10
    bl fn_800DC12C
    neg r4, r3
    lwz r0, 0x3dc(r29)
    or r3, r4, r3
    rlwimi r0, r3, 0, 0, 0
    stw r0, 0x3dc(r29)
lbl_fn_80363284_00001884:
    li r0, 0x1
    stw r0, 0x3f4(r29)
lbl_fn_80363284_0000188C:
    addi r11, r1, 0x50
    mr r3, r29
    bl _restgpr_27
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8036354C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x3f4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8036354C_000018D4
    cmpwi r0, 0x1
    beq lbl_fn_8036354C_000018F4
    b lbl_fn_8036354C_0000191C
lbl_fn_8036354C_000018D4:
    addi r3, r3, 0x3ec
    bl fn_80473F50
    cmpwi r3, 0x0
    bne lbl_fn_8036354C_0000191C
    mr r3, r31
    bl fn_803635E8
    li r0, 0x1
    stw r0, 0x3f4(r31)
lbl_fn_8036354C_000018F4:
    addi r3, r31, 0x4
    bl fn_8008B140
    cmpwi r3, 0x0
    bne lbl_fn_8036354C_0000191C
    mr r3, r31
    bl fn_803637D4
    addi r3, r31, 0x3ec
    bl fn_80473F88
    li r0, 0x2
    stw r0, 0x3f4(r31)
lbl_fn_8036354C_0000191C:
    lwz r4, 0x3f4(r31)
    lwz r31, 0xc(r1)
    subfic r3, r4, 0x2
    subi r0, r4, 0x2
    or r0, r3, r0
    srwi r3, r0, 31
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803635E8(void)
{
    nofralloc
    stwu r1, -0x950(r1)
    mflr r0
    stw r0, 0x954(r1)
    stw r31, 0x94c(r1)
    stw r30, 0x948(r1)
    stw r29, 0x944(r1)
    mr r29, r3
    addi r3, r3, 0x3ec
    bl fn_8047059C
    mr r30, r3
    addi r3, r29, 0x3ec
    bl fn_80470580
    lis r4, lbl_807774D8@ha
    li r0, 0x0
    addi r4, r4, lbl_807774D8@l
    stw r4, 0x308(r1)
    mr r31, r3
    addi r3, r1, 0x318
    stw r0, 0x30c(r1)
    li r4, 0x0
    li r5, 0x400
    stw r0, 0x310(r1)
    stw r0, 0x314(r1)
    stw r0, 0x938(r1)
    bl memset
    addi r3, r1, 0x918
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x308(r1)
    mr r4, r31
    mr r5, r30
    addi r3, r1, 0x308
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807774B8@ha
    addi r3, r1, 0x308
    addi r4, r4, lbl_807774B8@l
    stw r4, 0x308(r1)
    la r4, lbl_8087D710
    bl fn_8005BCE8
    lis r31, lbl_8074B780@ha
    addi r31, r31, lbl_8074B780@l
lbl_fn_803635E8_000019F4:
    addi r3, r1, 0x308
    bl fn_8005B9CC
    lbz r0, 0x0(r3)
    mr r30, r3
    cmpwi r0, 0x3b
    beq lbl_fn_803635E8_00001B04
    addi r4, r31, 0x5
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803635E8_00001A80
    addi r3, r1, 0x308
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r1, 0x208
    bl strcpy
    addi r3, r1, 0x308
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r1, 0x108
    bl strcpy
    addi r3, r1, 0x108
    addi r4, r31, 0x4
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803635E8_00001A6C
    addi r3, r29, 0x4
    addi r4, r1, 0x208
    li r5, 0x0
    bl fn_8008AD4C
    b lbl_fn_803635E8_00001B04
lbl_fn_803635E8_00001A6C:
    addi r3, r29, 0x4
    addi r4, r1, 0x208
    addi r5, r1, 0x108
    bl fn_8008AD4C
    b lbl_fn_803635E8_00001B04
lbl_fn_803635E8_00001A80:
    mr r3, r30
    addi r4, r31, 0xb
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803635E8_00001AB0
    lwz r3, 0x3dc(r29)
    lwz r0, 0x8(r29)
    oris r3, r3, 0x4000
    stw r3, 0x3dc(r29)
    clrrwi r0, r0, 1
    stw r0, 0x8(r29)
    b lbl_fn_803635E8_00001B04
lbl_fn_803635E8_00001AB0:
    mr r3, r30
    addi r4, r31, 0x17
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803635E8_00001B04
    lwz r0, 0x8(r29)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_fn_803635E8_00001B04
    addi r3, r1, 0x308
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r1, 0x8
    bl strcpy
    addi r3, r1, 0x308
    bl fn_8005B9CC
    bl fn_802180A8
    mr r4, r3
    addi r3, r29, 0x4
    addi r5, r1, 0x8
    bl fn_80097A88
lbl_fn_803635E8_00001B04:
    addi r3, r1, 0x308
    bl fn_8005BBF8
    cmpwi r3, 0x0
    bne lbl_fn_803635E8_000019F4
    lwz r0, 0x954(r1)
    lwz r31, 0x94c(r1)
    lwz r30, 0x948(r1)
    lwz r29, 0x944(r1)
    mtlr r0
    addi r1, r1, 0x950
    blr
}
