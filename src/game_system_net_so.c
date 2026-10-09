#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void fn_8004ED34(void);
extern void fn_80097D7C(void);
extern void fn_800F52F8(void);
extern void fn_800F84C8(void);
extern void fn_800F8524(void);
extern void fn_801125F8(void);
extern void fn_801156C4(void);
extern void fn_801156D8(void);
extern void fn_80116BAC(void);
extern void fn_80121F00(void);
extern void fn_801240B4(void);
extern void fn_80139550(void);
extern void fn_80139F2C(void);
extern void fn_8013C3A8(void);
extern void fn_8013C504(void);
extern void fn_801479D8(void);
extern void fn_8015EB2C(void);
extern void fn_80267B20(void);
extern void fn_80267B28(void);
extern void fn_8032EC94(void);
extern void fn_80339F6C(void);
extern void fn_80373148(void);
extern void fn_8037E89C(void);
extern void fn_8037E964(void);
extern void fn_8037EF30(void);
extern void fn_80382A00(void);
extern void fn_803830A0(void);
extern void fn_80387540(void);
extern void fn_80389838(void);
extern void fn_8038B648(void);
extern void fn_80390374(void);
extern void fn_803903C4(void);
extern void fn_803903CC(void);
extern void fn_803C2048(void);
extern void fn_805F98D0(void);
extern void fn_805F9940(void);

/* External data declarations */
extern u8 jumptable_8078A528[];
extern u8 jumptable_8078A558[];
extern u8 lbl_8074E008[];

/* Small data declarations */
extern u32 lbl_8087DD04;
extern u32 lbl_8087DD08;
extern u32 lbl_8087DD0C;
extern u32 lbl_8087DD10;
extern u32 lbl_8087DD14;
extern u32 lbl_8087DD18;
extern u32 lbl_8087DD1C;
extern u32 lbl_8087DD20;
extern u32 lbl_8087DD24;
extern u32 lbl_8087DD28;
extern u32 lbl_8087DD2C;
extern u32 lbl_8087DD30;
extern u32 lbl_8087DD34;
extern u32 lbl_8087EE98;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F430;
extern u32 lbl_808858E8;
extern u32 lbl_808858F0;
extern u32 lbl_808858F4;
extern u32 lbl_808858F8;
extern u32 lbl_808858FC;
extern u32 lbl_80885904;
extern u32 lbl_80885910;
extern u32 lbl_80885914;
extern u32 lbl_80885930;
extern u32 lbl_80885938;
extern u32 lbl_8088593C;
extern u32 lbl_80885944;
extern u32 lbl_8088594C;
extern u32 lbl_80885970;
extern u32 lbl_80885974;
extern u32 lbl_8088597C;
extern u32 lbl_808859E4;
extern u32 lbl_80885A10;
extern u32 lbl_80885A24;
extern u32 lbl_80885A34;
extern u32 lbl_80885A3C;
extern u32 lbl_80885A40;
extern u32 lbl_80885A44;
extern u32 lbl_80885A50;
extern u32 lbl_80885A54;
extern u32 lbl_80885A94;
extern u32 lbl_80885A98;
extern u32 lbl_80885A9C;
extern u32 lbl_80885AA0;
extern u32 lbl_80885AA4;
extern u32 lbl_80885AA8;
extern u32 lbl_80885AAC;
extern u32 lbl_80885AB0;
extern u32 lbl_80885AB4;
extern u32 lbl_80885AB8;
extern u32 lbl_80885ABC;
extern u32 lbl_80885AC0;

/* Function declarations */
void fn_8038E540(void);
void fn_8038E9B0(void);
void fn_8038EF94(void);
void fn_8038F52C(void);

asm void fn_8038E540(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    addi r11, r1, 0x100
    stfd f31, 0x120(r1)
    psq_st f31, 0x128(r1), 0, 0
    stfd f30, 0x110(r1)
    psq_st f30, 0x118(r1), 0, 0
    stfd f29, 0x100(r1)
    psq_st f29, 0x108(r1), 0, 0
    bl _savegpr_27
    lwz r4, lbl_8087F0A8
    li r0, 0x0
    lwz r5, lbl_8087F430
    mr r30, r3
    lfs f31, 0x8c(r4)
    mr r31, r6
    lfs f3, lbl_80885944
    cmpwi r5, 0x0
    stw r0, 0xc4(r1)
    mr r27, r8
    lfs f29, lbl_80885910
    li r29, 0x0
    stw r0, 0xc8(r1)
    li r28, 0x0
    stw r0, 0xcc(r1)
    stw r0, 0xd0(r1)
    lfs f0, 0x4(r6)
    fadds f30, f3, f0
    beq lbl_fn_8038E540_0000008C
    mr r3, r5
    bl fn_80373148
    cmpwi r3, 0x0
    beq lbl_fn_8038E540_0000008C
    li r28, 0x1
lbl_fn_8038E540_0000008C:
    cmpwi r28, 0x0
    beq lbl_fn_8038E540_000000AC
    lwz r3, lbl_8087F430
    bl fn_80373148
    lwz r0, 0xec(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8038E540_000000AC
    li r29, 0x1
lbl_fn_8038E540_000000AC:
    cmpwi r29, 0x0
    beq lbl_fn_8038E540_00000164
    lfs f2, 0x8(r27)
    addi r5, r1, 0x80
    psq_l f1, 0x0(r27), 0, 0
    addi r6, r1, 0x74
    psq_st f1, 0x0(r5), 0, 0
    addi r4, r1, 0x90
    lfs f3, lbl_80885A44
    lis r7, 0x800
    stfs f2, 0x88(r1)
    li r8, 0x0
    lwz r3, lbl_8087EE98
    li r9, 0x0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x7c(r1)
    lfs f0, 0x4(r31)
    fadds f0, f3, f0
    stfs f0, 0x78(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_8038E540_00000164
    lfs f3, 0xa4(r1)
    addi r3, r1, 0x68
    lfs f0, lbl_80885A44
    psq_l f1, 0x0(r31), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    fsubs f0, f3, f0
    lfs f2, 0x8(r31)
    stfs f0, 0x6c(r1)
    lfs f0, 0x4(r27)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    lfs f3, 0x4(r31)
    stfs f2, 0x70(r1)
    fsubs f0, f3, f0
    stfs f2, 0x8(r31)
    fcmpo cr0, f29, f0
    bge lbl_fn_8038E540_0000014C
    b lbl_fn_8038E540_00000150
lbl_fn_8038E540_0000014C:
    fmr f29, f0
lbl_fn_8038E540_00000150:
    lfs f0, 0x4(r31)
    fcmpo cr0, f30, f0
    bge lbl_fn_8038E540_00000160
    b lbl_fn_8038E540_00000164
lbl_fn_8038E540_00000160:
    fmr f30, f0
lbl_fn_8038E540_00000164:
    lfs f2, 0x8(r27)
    addi r4, r1, 0x80
    psq_l f1, 0x0(r27), 0, 0
    addi r5, r1, 0x74
    psq_st f1, 0x0(r4), 0, 0
    addi r3, r1, 0x5c
    mr r4, r3
    stfs f2, 0x88(r1)
    lfs f0, 0x84(r1)
    lfs f2, 0x8(r31)
    psq_l f1, 0x0(r31), 0, 0
    fadds f5, f0, f29
    psq_st f1, 0x0(r5), 0, 0
    lfs f4, 0x88(r1)
    fsubs f6, f5, f5
    lfs f3, 0x74(r1)
    lfs f0, 0x80(r1)
    fsubs f4, f2, f4
    stfs f2, 0x7c(r1)
    fsubs f0, f3, f0
    stfs f5, 0x84(r1)
    stfs f5, 0x78(r1)
    stfs f0, 0x5c(r1)
    stfs f6, 0x60(r1)
    stfs f4, 0x64(r1)
    bl fn_805F98D0
    lfs f4, 0x64(r1)
    lis r27, 0x800
    lfs f3, 0x60(r1)
    li r28, 0x0
    fmuls f5, f4, f31
    lfs f0, 0x5c(r1)
    fmuls f6, f3, f31
    lfs f3, 0x78(r1)
    fmuls f7, f0, f31
    lfs f4, 0x74(r1)
    lfs f0, 0x7c(r1)
    fadds f3, f3, f6
    lwz r3, lbl_8087F430
    fadds f4, f4, f7
    fadds f0, f0, f5
    stfs f7, 0x38(r1)
    cmpwi r3, 0x0
    stfs f6, 0x3c(r1)
    li r29, 0x0
    stfs f5, 0x40(r1)
    stfs f4, 0x74(r1)
    stfs f3, 0x78(r1)
    stfs f0, 0x7c(r1)
    beq lbl_fn_8038E540_0000023C
    bl fn_80373148
    cmpwi r3, 0x0
    beq lbl_fn_8038E540_0000023C
    li r29, 0x1
lbl_fn_8038E540_0000023C:
    cmpwi r29, 0x0
    beq lbl_fn_8038E540_0000025C
    lwz r3, lbl_8087F430
    bl fn_80373148
    lwz r0, 0xec(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8038E540_0000025C
    li r28, 0x1
lbl_fn_8038E540_0000025C:
    cmpwi r28, 0x0
    bne lbl_fn_8038E540_0000026C
    lis r3, 0x8000
    addi r27, r3, 0x8
lbl_fn_8038E540_0000026C:
    lwz r3, lbl_8087EE98
    mr r7, r27
    addi r4, r1, 0x90
    addi r5, r1, 0x80
    addi r6, r1, 0x74
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_8038E540_00000364
    lfs f3, 0x64(r1)
    addi r3, r1, 0x44
    lfs f0, 0x5c(r1)
    fmuls f7, f3, f31
    lfs f3, 0xa8(r1)
    fmuls f8, f0, f31
    lfs f0, 0xa0(r1)
    lfs f6, 0x60(r1)
    fsubs f9, f3, f7
    fsubs f10, f0, f8
    lfs f5, 0x4(r31)
    lfs f4, 0x8(r31)
    fmuls f6, f6, f31
    lfs f3, 0x4(r31)
    lfs f0, 0x0(r31)
    fsubs f4, f9, f4
    stfs f8, 0x2c(r1)
    fsubs f3, f5, f3
    fsubs f0, f10, f0
    stfs f6, 0x30(r1)
    stfs f7, 0x34(r1)
    stfs f10, 0x50(r1)
    stfs f9, 0x58(r1)
    stfs f5, 0x54(r1)
    stfs f0, 0x44(r1)
    stfs f3, 0x48(r1)
    stfs f4, 0x4c(r1)
    bl fn_805F9940
    lfs f3, lbl_80885974
    fcmpo cr0, f3, f1
    bge lbl_fn_8038E540_00000314
    b lbl_fn_8038E540_00000320
lbl_fn_8038E540_00000314:
    addi r3, r1, 0x44
    bl fn_805F9940
    fmr f3, f1
lbl_fn_8038E540_00000320:
    lfs f0, 0x54(r1)
    fadds f0, f0, f3
    stfs f0, 0x54(r1)
    fcmpo cr0, f30, f0
    bge lbl_fn_8038E540_00000338
    b lbl_fn_8038E540_0000033C
lbl_fn_8038E540_00000338:
    fmr f30, f0
lbl_fn_8038E540_0000033C:
    stfs f30, 0x54(r1)
    addi r3, r1, 0x50
    lfs f2, 0x58(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x8(r31)
    lwz r3, 0x89c(r30)
    addi r0, r3, 0x1
    stw r0, 0x89c(r30)
    b lbl_fn_8038E540_00000370
lbl_fn_8038E540_00000364:
    lwz r3, 0x89c(r30)
    subi r0, r3, 0x1
    stw r0, 0x89c(r30)
lbl_fn_8038E540_00000370:
    lwz r3, 0x89c(r30)
    srawi r0, r3, 31
    andc r0, r3, r0
    cmpwi r0, 0x8
    ble lbl_fn_8038E540_0000038C
    li r0, 0x8
    b lbl_fn_8038E540_00000394
lbl_fn_8038E540_0000038C:
    srawi r0, r3, 31
    andc r0, r3, r0
lbl_fn_8038E540_00000394:
    cmpwi r0, 0x0
    stw r0, 0x89c(r30)
    ble lbl_fn_8038E540_00000440
    xoris r3, r0, 0x8000
    lis r0, 0x4330
    stw r3, 0xe4(r1)
    lis r4, lbl_8074E008@ha
    lfd f4, lbl_8074E008@l(r4)
    addi r3, r1, 0x20
    stw r0, 0xe0(r1)
    lfs f3, lbl_80885A34
    lfd f0, 0xe0(r1)
    lfs f6, 0x8(r31)
    fsubs f4, f0, f4
    lfs f0, 0x10(r30)
    lfs f7, lbl_808859E4
    fsubs f10, f0, f6
    lfs f5, 0xc(r30)
    fmuls f8, f4, f3
    lfs f4, 0x4(r31)
    lfs f3, 0x8(r30)
    fsubs f9, f5, f4
    lfs f0, 0x0(r31)
    fmuls f5, f7, f8
    stfs f10, 0x1c(r1)
    fsubs f8, f3, f0
    stfs f9, 0x18(r1)
    fmuls f7, f10, f5
    fmuls f3, f9, f5
    stfs f8, 0x14(r1)
    fmuls f5, f8, f5
    fadds f2, f7, f6
    stfs f3, 0xc(r1)
    fadds f3, f3, f4
    fadds f0, f5, f0
    stfs f5, 0x8(r1)
    stfs f0, 0x20(r1)
    stfs f3, 0x24(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f7, 0x10(r1)
    stfs f2, 0x28(r1)
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x8(r31)
lbl_fn_8038E540_00000440:
    addi r11, r1, 0x100
    psq_l f31, 0x128(r1), 0, 0
    lfd f31, 0x120(r1)
    psq_l f30, 0x118(r1), 0, 0
    lfd f30, 0x110(r1)
    psq_l f29, 0x108(r1), 0, 0
    lfd f29, 0x100(r1)
    bl _restgpr_27
    lwz r0, 0x134(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

asm void fn_8038E9B0(void)
{
    nofralloc
    stwu r1, -0x1d0(r1)
    mflr r0
    stw r0, 0x1d4(r1)
    addi r11, r1, 0x1b0
    stfd f31, 0x1c0(r1)
    psq_st f31, 0x1c8(r1), 0, 0
    stfd f30, 0x1b0(r1)
    psq_st f30, 0x1b8(r1), 0, 0
    bl _savegpr_26
    lwz r0, lbl_8087F430
    mr r30, r3
    mr r31, r6
    mr r26, r7
    cmpwi r0, 0x0
    mr r27, r8
    li r29, 0x0
    li r28, 0x0
    beq lbl_fn_8038E9B0_000004CC
    mr r3, r0
    bl fn_80373148
    cmpwi r3, 0x0
    beq lbl_fn_8038E9B0_000004CC
    li r28, 0x1
lbl_fn_8038E9B0_000004CC:
    cmpwi r28, 0x0
    beq lbl_fn_8038E9B0_000004EC
    lwz r3, lbl_8087F430
    bl fn_80373148
    lwz r0, 0xec(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8038E9B0_000004EC
    li r29, 0x1
lbl_fn_8038E9B0_000004EC:
    cmpwi r29, 0x0
    bne lbl_fn_8038E9B0_000006C0
    lwz r4, lbl_8087F0A8
    li r0, 0x0
    addi r30, r1, 0xe0
    psq_l f1, 0x0(r27), 0, 0
    lfs f31, 0x8c(r4)
    addi r3, r1, 0xc8
    lfs f2, 0x8(r27)
    addi r29, r1, 0xd4
    stw r0, 0x174(r1)
    mr r4, r3
    lfs f3, lbl_80885944
    stw r0, 0x178(r1)
    lfs f4, lbl_80885910
    stw r0, 0x17c(r1)
    stw r0, 0x180(r1)
    lfs f0, 0x4(r31)
    psq_st f1, 0x0(r30), 0, 0
    fadds f30, f3, f0
    stfs f2, 0xe8(r1)
    lfs f0, 0xe4(r1)
    lfs f2, 0x8(r31)
    fadds f5, f0, f4
    psq_l f1, 0x0(r31), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    lfs f4, 0xe8(r1)
    fsubs f6, f5, f5
    lfs f3, 0xd4(r1)
    lfs f0, 0xe0(r1)
    fsubs f4, f2, f4
    stfs f2, 0xdc(r1)
    fsubs f0, f3, f0
    stfs f5, 0xe4(r1)
    stfs f5, 0xd8(r1)
    stfs f0, 0xc8(r1)
    stfs f6, 0xcc(r1)
    stfs f4, 0xd0(r1)
    bl fn_805F98D0
    lfs f4, 0xd0(r1)
    lis r7, 0x8000
    lfs f3, 0xcc(r1)
    mr r5, r30
    fmuls f5, f4, f31
    lfs f0, 0xc8(r1)
    fmuls f6, f3, f31
    lfs f3, 0xd8(r1)
    fmuls f7, f0, f31
    lfs f4, 0xd4(r1)
    lfs f0, 0xdc(r1)
    fadds f3, f3, f6
    fadds f4, f4, f7
    stfs f7, 0x50(r1)
    fadds f0, f0, f5
    lwz r3, lbl_8087EE98
    stfs f6, 0x54(r1)
    mr r6, r29
    stfs f5, 0x58(r1)
    addi r4, r1, 0x140
    addi r7, r7, 0x8
    li r8, 0x0
    stfs f4, 0xd4(r1)
    li r9, 0x0
    stfs f3, 0xd8(r1)
    stfs f0, 0xdc(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_8038E9B0_00000A2C
    lfs f3, 0xd0(r1)
    addi r3, r1, 0xb0
    lfs f0, 0xc8(r1)
    fmuls f7, f3, f31
    lfs f3, 0x158(r1)
    fmuls f8, f0, f31
    lfs f0, 0x150(r1)
    lfs f6, 0xcc(r1)
    fsubs f9, f3, f7
    fsubs f10, f0, f8
    lfs f5, 0x4(r31)
    lfs f4, 0x8(r31)
    fmuls f6, f6, f31
    lfs f3, 0x4(r31)
    lfs f0, 0x0(r31)
    fsubs f4, f9, f4
    stfs f8, 0x44(r1)
    fsubs f3, f5, f3
    fsubs f0, f10, f0
    stfs f6, 0x48(r1)
    stfs f7, 0x4c(r1)
    stfs f10, 0xbc(r1)
    stfs f9, 0xc4(r1)
    stfs f5, 0xc0(r1)
    stfs f0, 0xb0(r1)
    stfs f3, 0xb4(r1)
    stfs f4, 0xb8(r1)
    bl fn_805F9940
    lfs f3, lbl_80885974
    fcmpo cr0, f3, f1
    bge lbl_fn_8038E9B0_0000067C
    b lbl_fn_8038E9B0_00000688
lbl_fn_8038E9B0_0000067C:
    addi r3, r1, 0xb0
    bl fn_805F9940
    fmr f3, f1
lbl_fn_8038E9B0_00000688:
    lfs f0, 0xc0(r1)
    fadds f0, f0, f3
    stfs f0, 0xc0(r1)
    fcmpo cr0, f30, f0
    bge lbl_fn_8038E9B0_000006A0
    b lbl_fn_8038E9B0_000006A4
lbl_fn_8038E9B0_000006A0:
    fmr f30, f0
lbl_fn_8038E9B0_000006A4:
    stfs f30, 0xc0(r1)
    addi r3, r1, 0xbc
    lfs f2, 0xc4(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x8(r31)
    b lbl_fn_8038E9B0_00000A2C
lbl_fn_8038E9B0_000006C0:
    lwz r4, lbl_8087F0A8
    li r0, 0x0
    addi r5, r1, 0x8c
    addi r6, r1, 0xa4
    lfs f31, 0x8c(r4)
    addi r3, r1, 0x80
    addi r7, r1, 0x98
    stw r0, 0x124(r1)
    mr r4, r3
    stw r0, 0x128(r1)
    stw r0, 0x12c(r1)
    stw r0, 0x130(r1)
    psq_l f1, 0x0(r26), 0, 0
    lfs f2, 0x8(r26)
    psq_st f1, 0x0(r5), 0, 0
    psq_l f1, 0x0(r27), 0, 0
    stfs f2, 0x94(r1)
    lfs f2, 0x8(r27)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0xac(r1)
    lfs f0, 0xa8(r1)
    lfs f2, 0x8(r31)
    psq_l f1, 0x0(r31), 0, 0
    fadds f5, f0, f31
    psq_st f1, 0x0(r7), 0, 0
    lfs f4, 0xac(r1)
    fsubs f6, f5, f5
    lfs f3, 0x98(r1)
    lfs f0, 0xa4(r1)
    fsubs f4, f2, f4
    stfs f2, 0xa0(r1)
    fsubs f0, f3, f0
    stfs f5, 0xa8(r1)
    stfs f5, 0x9c(r1)
    stfs f0, 0x80(r1)
    stfs f6, 0x84(r1)
    stfs f4, 0x88(r1)
    bl fn_805F98D0
    lfs f4, 0x88(r1)
    li r28, 0x0
    lfs f3, 0x84(r1)
    fmuls f5, f4, f31
    lfs f0, 0x80(r1)
    fmuls f6, f3, f31
    lfs f3, 0x9c(r1)
    fmuls f7, f0, f31
    lfs f4, 0x98(r1)
    lfs f0, 0xa0(r1)
    fadds f3, f3, f6
    fadds f4, f4, f7
    stfs f7, 0x38(r1)
    fadds f0, f0, f5
    lfs f30, lbl_80885914
    stfs f6, 0x3c(r1)
    stfs f5, 0x40(r1)
    stfs f4, 0x98(r1)
    stfs f3, 0x9c(r1)
    stfs f0, 0xa0(r1)
lbl_fn_8038E9B0_000007A8:
    lwz r3, lbl_8087EE98
    addi r4, r1, 0xf0
    addi r5, r1, 0xa4
    addi r6, r1, 0x98
    lis r7, 0x800
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_8038E9B0_00000880
    lfs f3, 0x88(r1)
    addi r3, r1, 0x68
    lfs f0, 0x80(r1)
    fmuls f7, f3, f31
    lfs f3, 0x108(r1)
    fmuls f8, f0, f31
    lfs f0, 0x100(r1)
    lfs f6, 0x84(r1)
    fsubs f9, f3, f7
    fsubs f10, f0, f8
    lfs f5, 0x4(r31)
    lfs f4, 0x8(r31)
    fmuls f6, f6, f31
    lfs f3, 0x4(r31)
    lfs f0, 0x0(r31)
    fsubs f4, f9, f4
    stfs f8, 0x2c(r1)
    fsubs f3, f5, f3
    fsubs f0, f10, f0
    stfs f6, 0x30(r1)
    stfs f7, 0x34(r1)
    stfs f10, 0x74(r1)
    stfs f9, 0x7c(r1)
    stfs f5, 0x78(r1)
    stfs f0, 0x68(r1)
    stfs f3, 0x6c(r1)
    stfs f4, 0x70(r1)
    bl fn_805F9940
    lfs f3, lbl_80885974
    fcmpo cr0, f3, f1
    bge lbl_fn_8038E9B0_00000850
    b lbl_fn_8038E9B0_0000085C
lbl_fn_8038E9B0_00000850:
    addi r3, r1, 0x68
    bl fn_805F9940
    fmr f3, f1
lbl_fn_8038E9B0_0000085C:
    lfs f0, 0x78(r1)
    addi r3, r1, 0x74
    lfs f2, 0x7c(r1)
    fadds f0, f0, f3
    stfs f2, 0x8(r31)
    stfs f0, 0x78(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    b lbl_fn_8038E9B0_0000089C
lbl_fn_8038E9B0_00000880:
    lfs f0, 0xa8(r1)
    addi r28, r28, 0x1
    cmpwi r28, 0x2
    fadds f0, f0, f30
    stfs f0, 0xa8(r1)
    stfs f0, 0x9c(r1)
    blt lbl_fn_8038E9B0_000007A8
lbl_fn_8038E9B0_0000089C:
    psq_l f1, 0x0(r31), 0, 0
    addi r5, r1, 0xa4
    lfs f2, 0x8(r31)
    addi r6, r1, 0x98
    stfs f2, 0xac(r1)
    addi r4, r1, 0xf0
    lwz r3, lbl_8087EE98
    lis r7, 0x800
    psq_st f1, 0x0(r5), 0, 0
    li r8, 0x0
    li r9, 0x0
    psq_l f1, 0x0(r26), 0, 0
    lfs f2, 0x8(r26)
    stfs f2, 0xa0(r1)
    psq_st f1, 0x0(r6), 0, 0
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_8038E9B0_000008FC
    addi r4, r1, 0x100
    lfs f2, 0x108(r1)
    addi r3, r1, 0x8c
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x94(r1)
lbl_fn_8038E9B0_000008FC:
    addi r3, r1, 0x8c
    lfs f2, 0x94(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r5, r1, 0xa4
    psq_st f1, 0x0(r5), 0, 0
    addi r6, r1, 0x98
    lwz r3, lbl_8087EE98
    addi r4, r1, 0xf0
    stfs f2, 0xac(r1)
    lis r7, 0x800
    li r8, 0x0
    li r9, 0x0
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x8(r31)
    stfs f2, 0xa0(r1)
    psq_st f1, 0x0(r6), 0, 0
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_8038E9B0_00000A24
    lwz r3, 0x89c(r30)
    addi r4, r1, 0x100
    addi r5, r1, 0x5c
    addi r0, r3, 0x1
    stw r0, 0x89c(r30)
    cmpwi r0, 0x8
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x108(r1)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x64(r1)
    bge lbl_fn_8038E9B0_00000A0C
    xoris r3, r0, 0x8000
    lis r0, 0x4330
    stw r3, 0x194(r1)
    lis r4, lbl_8074E008@ha
    lfd f4, lbl_8074E008@l(r4)
    frsp f0, f2
    stw r0, 0x190(r1)
    addi r3, r1, 0x20
    lfs f6, 0x8(r31)
    lfd f3, 0x190(r1)
    fsubs f9, f0, f6
    lfs f7, lbl_80885A34
    fsubs f8, f3, f4
    lfs f5, 0x60(r1)
    lfs f4, 0x4(r31)
    lfs f3, 0x5c(r1)
    lfs f0, 0x0(r31)
    fsubs f5, f5, f4
    fmuls f7, f8, f7
    stfs f9, 0x1c(r1)
    fsubs f3, f3, f0
    stfs f5, 0x18(r1)
    fmuls f8, f5, f7
    fmuls f5, f3, f7
    stfs f3, 0x14(r1)
    fmuls f9, f9, f7
    fadds f3, f8, f4
    stfs f5, 0x8(r1)
    fadds f0, f5, f0
    fadds f2, f9, f6
    stfs f3, 0x24(r1)
    stfs f0, 0x20(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f8, 0xc(r1)
    stfs f9, 0x10(r1)
    stfs f2, 0x28(r1)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x64(r1)
lbl_fn_8038E9B0_00000A0C:
    addi r3, r1, 0x5c
    lfs f2, 0x64(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x8(r31)
    b lbl_fn_8038E9B0_00000A2C
lbl_fn_8038E9B0_00000A24:
    li r0, 0x0
    stw r0, 0x89c(r30)
lbl_fn_8038E9B0_00000A2C:
    addi r11, r1, 0x1b0
    psq_l f31, 0x1c8(r1), 0, 0
    lfd f31, 0x1c0(r1)
    psq_l f30, 0x1b8(r1), 0, 0
    lfd f30, 0x1b0(r1)
    bl _restgpr_26
    lwz r0, 0x1d4(r1)
    mtlr r0
    addi r1, r1, 0x1d0
    blr
}

asm void fn_8038EF94(void)
{
    nofralloc
    cmplwi r5, 0xb
    bgtlr
    lis r6, jumptable_8078A528@ha
    slwi r0, r5, 2
    addi r6, r6, jumptable_8078A528@l
    lwzx r6, r6, r0
    mtctr r6
    bctr
    lfs f13, 0x0(r4)
    lfs f12, 0x4(r4)
    lfs f11, 0x8(r4)
    lfs f10, 0xc(r4)
    lfs f9, 0x10(r4)
    lfs f8, 0x14(r4)
    lfs f7, 0x18(r4)
    lfs f6, 0x1c(r4)
    lfs f5, 0x20(r4)
    lfs f4, 0x24(r4)
    lfs f3, 0x28(r4)
    lfs f2, 0x2c(r4)
    lfs f1, 0x30(r4)
    lfs f0, 0x34(r4)
    lwz r0, 0x38(r4)
    stfs f13, 0x51c(r3)
    stfs f12, 0x520(r3)
    stfs f11, 0x524(r3)
    stfs f10, 0x528(r3)
    stfs f9, 0x52c(r3)
    stfs f8, 0x530(r3)
    stfs f7, 0x534(r3)
    stfs f6, 0x538(r3)
    stfs f5, 0x53c(r3)
    stfs f4, 0x540(r3)
    stfs f3, 0x544(r3)
    stfs f2, 0x548(r3)
    stfs f1, 0x54c(r3)
    stfs f0, 0x550(r3)
    stw r0, 0x554(r3)
    blr
    lfs f13, 0x0(r4)
    lfs f12, 0x4(r4)
    lfs f11, 0x8(r4)
    lfs f10, 0xc(r4)
    lfs f9, 0x10(r4)
    lfs f8, 0x14(r4)
    lfs f7, 0x18(r4)
    lfs f6, 0x1c(r4)
    lfs f5, 0x20(r4)
    lfs f4, 0x24(r4)
    lfs f3, 0x28(r4)
    lfs f2, 0x2c(r4)
    lfs f1, 0x30(r4)
    lfs f0, 0x34(r4)
    lwz r0, 0x38(r4)
    stfs f13, 0x594(r3)
    stfs f12, 0x598(r3)
    stfs f11, 0x59c(r3)
    stfs f10, 0x5a0(r3)
    stfs f9, 0x5a4(r3)
    stfs f8, 0x5a8(r3)
    stfs f7, 0x5ac(r3)
    stfs f6, 0x5b0(r3)
    stfs f5, 0x5b4(r3)
    stfs f4, 0x5b8(r3)
    stfs f3, 0x5bc(r3)
    stfs f2, 0x5c0(r3)
    stfs f1, 0x5c4(r3)
    stfs f0, 0x5c8(r3)
    stw r0, 0x5cc(r3)
    blr
    lfs f13, 0x0(r4)
    lfs f12, 0x4(r4)
    lfs f11, 0x8(r4)
    lfs f10, 0xc(r4)
    lfs f9, 0x10(r4)
    lfs f8, 0x14(r4)
    lfs f7, 0x18(r4)
    lfs f6, 0x1c(r4)
    lfs f5, 0x20(r4)
    lfs f4, 0x24(r4)
    lfs f3, 0x28(r4)
    lfs f2, 0x2c(r4)
    lfs f1, 0x30(r4)
    lfs f0, 0x34(r4)
    lwz r0, 0x38(r4)
    stfs f13, 0x5d0(r3)
    stfs f12, 0x5d4(r3)
    stfs f11, 0x5d8(r3)
    stfs f10, 0x5dc(r3)
    stfs f9, 0x5e0(r3)
    stfs f8, 0x5e4(r3)
    stfs f7, 0x5e8(r3)
    stfs f6, 0x5ec(r3)
    stfs f5, 0x5f0(r3)
    stfs f4, 0x5f4(r3)
    stfs f3, 0x5f8(r3)
    stfs f2, 0x5fc(r3)
    stfs f1, 0x600(r3)
    stfs f0, 0x604(r3)
    stw r0, 0x608(r3)
    blr
    lfs f13, 0x0(r4)
    lfs f12, 0x4(r4)
    lfs f11, 0x8(r4)
    lfs f10, 0xc(r4)
    lfs f9, 0x10(r4)
    lfs f8, 0x14(r4)
    lfs f7, 0x18(r4)
    lfs f6, 0x1c(r4)
    lfs f5, 0x20(r4)
    lfs f4, 0x24(r4)
    lfs f3, 0x28(r4)
    lfs f2, 0x2c(r4)
    lfs f1, 0x30(r4)
    lfs f0, 0x34(r4)
    lwz r0, 0x38(r4)
    stfs f13, 0x60c(r3)
    stfs f12, 0x610(r3)
    stfs f11, 0x614(r3)
    stfs f10, 0x618(r3)
    stfs f9, 0x61c(r3)
    stfs f8, 0x620(r3)
    stfs f7, 0x624(r3)
    stfs f6, 0x628(r3)
    stfs f5, 0x62c(r3)
    stfs f4, 0x630(r3)
    stfs f3, 0x634(r3)
    stfs f2, 0x638(r3)
    stfs f1, 0x63c(r3)
    stfs f0, 0x640(r3)
    stw r0, 0x644(r3)
    blr
    lfs f13, 0x0(r4)
    lfs f12, 0x4(r4)
    lfs f11, 0x8(r4)
    lfs f10, 0xc(r4)
    lfs f9, 0x10(r4)
    lfs f8, 0x14(r4)
    lfs f7, 0x18(r4)
    lfs f6, 0x1c(r4)
    lfs f5, 0x20(r4)
    lfs f4, 0x24(r4)
    lfs f3, 0x28(r4)
    lfs f2, 0x2c(r4)
    lfs f1, 0x30(r4)
    lfs f0, 0x34(r4)
    lwz r0, 0x38(r4)
    stfs f13, 0x558(r3)
    stfs f12, 0x55c(r3)
    stfs f11, 0x560(r3)
    stfs f10, 0x564(r3)
    stfs f9, 0x568(r3)
    stfs f8, 0x56c(r3)
    stfs f7, 0x570(r3)
    stfs f6, 0x574(r3)
    stfs f5, 0x578(r3)
    stfs f4, 0x57c(r3)
    stfs f3, 0x580(r3)
    stfs f2, 0x584(r3)
    stfs f1, 0x588(r3)
    stfs f0, 0x58c(r3)
    stw r0, 0x590(r3)
    blr
    lfs f13, 0x0(r4)
    lfs f12, 0x4(r4)
    lfs f11, 0x8(r4)
    lfs f10, 0xc(r4)
    lfs f9, 0x10(r4)
    lfs f8, 0x14(r4)
    lfs f7, 0x18(r4)
    lfs f6, 0x1c(r4)
    lfs f5, 0x20(r4)
    lfs f4, 0x24(r4)
    lfs f3, 0x28(r4)
    lfs f2, 0x2c(r4)
    lfs f1, 0x30(r4)
    lfs f0, 0x34(r4)
    lwz r0, 0x38(r4)
    stfs f13, 0x648(r3)
    stfs f12, 0x64c(r3)
    stfs f11, 0x650(r3)
    stfs f10, 0x654(r3)
    stfs f9, 0x658(r3)
    stfs f8, 0x65c(r3)
    stfs f7, 0x660(r3)
    stfs f6, 0x664(r3)
    stfs f5, 0x668(r3)
    stfs f4, 0x66c(r3)
    stfs f3, 0x670(r3)
    stfs f2, 0x674(r3)
    stfs f1, 0x678(r3)
    stfs f0, 0x67c(r3)
    stw r0, 0x680(r3)
    blr
    lfs f13, 0x0(r4)
    lfs f12, 0x4(r4)
    lfs f11, 0x8(r4)
    lfs f10, 0xc(r4)
    lfs f9, 0x10(r4)
    lfs f8, 0x14(r4)
    lfs f7, 0x18(r4)
    lfs f6, 0x1c(r4)
    lfs f5, 0x20(r4)
    lfs f4, 0x24(r4)
    lfs f3, 0x28(r4)
    lfs f2, 0x2c(r4)
    lfs f1, 0x30(r4)
    lfs f0, 0x34(r4)
    lwz r0, 0x38(r4)
    stfs f13, 0x6c0(r3)
    stfs f12, 0x6c4(r3)
    stfs f11, 0x6c8(r3)
    stfs f10, 0x6cc(r3)
    stfs f9, 0x6d0(r3)
    stfs f8, 0x6d4(r3)
    stfs f7, 0x6d8(r3)
    stfs f6, 0x6dc(r3)
    stfs f5, 0x6e0(r3)
    stfs f4, 0x6e4(r3)
    stfs f3, 0x6e8(r3)
    stfs f2, 0x6ec(r3)
    stfs f1, 0x6f0(r3)
    stfs f0, 0x6f4(r3)
    stw r0, 0x6f8(r3)
    blr
    lfs f13, 0x0(r4)
    lfs f12, 0x4(r4)
    lfs f11, 0x8(r4)
    lfs f10, 0xc(r4)
    lfs f9, 0x10(r4)
    lfs f8, 0x14(r4)
    lfs f7, 0x18(r4)
    lfs f6, 0x1c(r4)
    lfs f5, 0x20(r4)
    lfs f4, 0x24(r4)
    lfs f3, 0x28(r4)
    lfs f2, 0x2c(r4)
    lfs f1, 0x30(r4)
    lfs f0, 0x34(r4)
    lwz r0, 0x38(r4)
    stfs f13, 0x6fc(r3)
    stfs f12, 0x700(r3)
    stfs f11, 0x704(r3)
    stfs f10, 0x708(r3)
    stfs f9, 0x70c(r3)
    stfs f8, 0x710(r3)
    stfs f7, 0x714(r3)
    stfs f6, 0x718(r3)
    stfs f5, 0x71c(r3)
    stfs f4, 0x720(r3)
    stfs f3, 0x724(r3)
    stfs f2, 0x728(r3)
    stfs f1, 0x72c(r3)
    stfs f0, 0x730(r3)
    stw r0, 0x734(r3)
    blr
    lfs f13, 0x0(r4)
    lfs f12, 0x4(r4)
    lfs f11, 0x8(r4)
    lfs f10, 0xc(r4)
    lfs f9, 0x10(r4)
    lfs f8, 0x14(r4)
    lfs f7, 0x18(r4)
    lfs f6, 0x1c(r4)
    lfs f5, 0x20(r4)
    lfs f4, 0x24(r4)
    lfs f3, 0x28(r4)
    lfs f2, 0x2c(r4)
    lfs f1, 0x30(r4)
    lfs f0, 0x34(r4)
    lwz r0, 0x38(r4)
    stfs f13, 0x684(r3)
    stfs f12, 0x688(r3)
    stfs f11, 0x68c(r3)
    stfs f10, 0x690(r3)
    stfs f9, 0x694(r3)
    stfs f8, 0x698(r3)
    stfs f7, 0x69c(r3)
    stfs f6, 0x6a0(r3)
    stfs f5, 0x6a4(r3)
    stfs f4, 0x6a8(r3)
    stfs f3, 0x6ac(r3)
    stfs f2, 0x6b0(r3)
    stfs f1, 0x6b4(r3)
    stfs f0, 0x6b8(r3)
    stw r0, 0x6bc(r3)
    blr
    lfs f13, 0x0(r4)
    li r0, 0x3
    lfs f12, 0x4(r4)
    lfs f11, 0x8(r4)
    lfs f10, 0xc(r4)
    lfs f9, 0x10(r4)
    lfs f8, 0x14(r4)
    lfs f7, 0x18(r4)
    lfs f6, 0x1c(r4)
    lfs f5, 0x20(r4)
    lfs f4, 0x24(r4)
    lfs f3, 0x28(r4)
    lfs f2, 0x2c(r4)
    lfs f1, 0x30(r4)
    lfs f0, 0x34(r4)
    lwz r4, 0x38(r4)
    stfs f13, 0x738(r3)
    stfs f12, 0x73c(r3)
    stfs f11, 0x740(r3)
    stfs f10, 0x744(r3)
    stfs f9, 0x748(r3)
    stfs f8, 0x74c(r3)
    stfs f7, 0x750(r3)
    stfs f6, 0x754(r3)
    stfs f5, 0x758(r3)
    stfs f4, 0x75c(r3)
    stfs f3, 0x760(r3)
    stfs f2, 0x764(r3)
    stfs f1, 0x768(r3)
    stfs f0, 0x76c(r3)
    stw r4, 0x770(r3)
    lwz r3, lbl_8087F0A8
    stw r0, 0x49c(r3)
    blr
    lwz r0, 0x7fc(r3)
    cmpw r0, r5
    bne lbl_fn_8038EF94_00000F70
    li r0, 0x0
    stw r0, 0x800(r3)
    stw r0, 0x808(r3)
lbl_fn_8038EF94_00000F70:
    lfs f13, 0x0(r4)
    lfs f12, 0x4(r4)
    lfs f11, 0x8(r4)
    lfs f10, 0xc(r4)
    lfs f9, 0x10(r4)
    lfs f8, 0x14(r4)
    lfs f7, 0x18(r4)
    lfs f6, 0x1c(r4)
    lfs f5, 0x20(r4)
    lfs f4, 0x24(r4)
    lfs f3, 0x28(r4)
    lfs f2, 0x2c(r4)
    lfs f1, 0x30(r4)
    lfs f0, 0x34(r4)
    lwz r0, 0x38(r4)
    stfs f13, 0x774(r3)
    stfs f12, 0x778(r3)
    stfs f11, 0x77c(r3)
    stfs f10, 0x780(r3)
    stfs f9, 0x784(r3)
    stfs f8, 0x788(r3)
    stfs f7, 0x78c(r3)
    stfs f6, 0x790(r3)
    stfs f5, 0x794(r3)
    stfs f4, 0x798(r3)
    stfs f3, 0x79c(r3)
    stfs f2, 0x7a0(r3)
    stfs f1, 0x7a4(r3)
    stfs f0, 0x7a8(r3)
    stw r0, 0x7ac(r3)
    blr
}

asm void fn_8038F52C(void)
{
    nofralloc
    stwu r1, -0x250(r1)
    mflr r0
    stw r0, 0x254(r1)
    stfd f31, 0x240(r1)
    psq_st f31, 0x248(r1), 0, 0
    stfd f30, 0x230(r1)
    psq_st f30, 0x238(r1), 0, 0
    stfd f29, 0x220(r1)
    psq_st f29, 0x228(r1), 0, 0
    stw r31, 0x21c(r1)
    li r31, 0x0
    stw r30, 0x218(r1)
    mr r30, r4
    stw r29, 0x214(r1)
    mr r29, r3
    lwz r0, 0x7fc(r3)
    cmpwi r0, 0x6
    beq lbl_fn_8038F52C_00001DE4
    cmpwi r0, 0x13
    beq lbl_fn_8038F52C_00001DE4
    mr r3, r30
    bl fn_8013C3A8
    cmpwi r3, 0x0
    beq lbl_fn_8038F52C_0000107C
    mr r3, r30
    bl fn_8038B648
    cmpwi r3, 0x0
    beq lbl_fn_8038F52C_0000106C
    mr r3, r29
    li r4, 0x3
    bl fn_80389838
    b lbl_fn_8038F52C_00001DE4
lbl_fn_8038F52C_0000106C:
    mr r3, r29
    li r4, 0x2
    bl fn_80389838
    b lbl_fn_8038F52C_00001DE4
lbl_fn_8038F52C_0000107C:
    mr r3, r30
    bl fn_801479D8
    cmpwi r3, 0x0
    beq lbl_fn_8038F52C_0000109C
    mr r3, r29
    li r4, 0x4
    bl fn_80389838
    b lbl_fn_8038F52C_00001DE4
lbl_fn_8038F52C_0000109C:
    mr r3, r30
    bl fn_80267B20
    cmpwi r3, 0x6
    bne lbl_fn_8038F52C_00001CFC
    mr r3, r30
    bl fn_80267B28
    subi r0, r3, 0x4
    cmplwi r0, 0x89
    bgt lbl_fn_8038F52C_00001CF0
    lis r3, jumptable_8078A558@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_8078A558@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    mr r3, r29
    li r4, 0x5
    bl fn_80389838
    b lbl_fn_8038F52C_00001DE4
    mr r3, r30
    bl fn_800F84C8
    li r4, 0x0
    bl fn_80139550
    mr r3, r30
    bl fn_800F84C8
    li r4, 0x0
    bl fn_80097D7C
    addi r3, r1, 0x1cc
    addi r4, r29, 0x51c
    bl fn_8037E964
    lfs f3, 0x1cc(r1)
    lfs f1, lbl_80885A9C
    lfs f2, 0x1d0(r1)
    fmuls f3, f3, f1
    lfs f0, lbl_80885AA0
    lfs f1, lbl_80885AA4
    fmuls f0, f2, f0
    stfs f3, 0x1cc(r1)
    stfs f0, 0x1d0(r1)
    bl fn_801125F8
    stfs f1, 0x1d4(r1)
    addi r3, r29, 0x46c
    lfs f1, lbl_808858F8
    addi r5, r1, 0x1cc
    li r4, 0x3
    bl fn_8037E89C
    lfs f0, 0x1cc(r1)
    mr r3, r29
    stfs f0, 0x478(r29)
    li r31, 0x1
    lfs f0, 0x1d0(r1)
    stfs f0, 0x47c(r29)
    lfs f0, 0x1d4(r1)
    stfs f0, 0x480(r29)
    bl fn_80390374
    lfs f1, lbl_80885904
    mr r3, r29
    li r4, 0x0
    li r5, 0x0
    bl fn_8037EF30
    b lbl_fn_8038F52C_00001DE4
    mr r3, r30
    bl fn_80387540
    cmpwi r3, 0x0
    beq lbl_fn_8038F52C_000011D0
    mr r3, r30
    bl fn_80387540
    lwz r12, 0x0(r3)
    lwz r12, 0x58(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8038F52C_000011D0
    mr r3, r29
    li r4, 0x4
    bl fn_80389838
    b lbl_fn_8038F52C_00001DE4
lbl_fn_8038F52C_000011D0:
    mr r3, r29
    li r4, 0x5
    bl fn_80389838
    b lbl_fn_8038F52C_00001DE4
    mr r3, r30
    bl fn_80339F6C
    cmpwi r3, 0x0
    beq lbl_fn_8038F52C_00001DE4
    mr r3, r30
    bl fn_80339F6C
    lbz r0, 0x2(r3)
    cmpwi r0, 0x4
    bne lbl_fn_8038F52C_00001DE4
    mr r3, r29
    bl fn_80390374
    b lbl_fn_8038F52C_00001DE4
    mr r3, r29
    li r4, 0x7
    bl fn_80389838
    b lbl_fn_8038F52C_00001DE4
    mr r3, r29
    bl fn_80390374
    lfs f1, lbl_80885904
    mr r3, r29
    li r4, 0x0
    li r5, 0x1
    bl fn_8037EF30
    b lbl_fn_8038F52C_00001DE4
    mr r3, r29
    bl fn_80390374
    mr r3, r30
    bl fn_80382A00
    cmpwi r3, 0x2
    bne lbl_fn_8038F52C_00001268
    mr r3, r30
    bl fn_8015EB2C
    cmpwi r3, 0x0
    bne lbl_fn_8038F52C_00001DE4
lbl_fn_8038F52C_00001268:
    lfs f1, lbl_80885904
    mr r3, r29
    li r4, 0x0
    li r5, 0x0
    bl fn_8037EF30
    b lbl_fn_8038F52C_00001DE4
    addi r3, r1, 0x190
    addi r4, r29, 0x51c
    bl fn_8037E964
    lfs f0, lbl_808858E8
    addi r3, r29, 0x46c
    stfs f0, 0x19c(r1)
    addi r5, r1, 0x190
    lfs f1, lbl_8088593C
    li r4, 0x2
    bl fn_8037E89C
    mr r3, r29
    li r31, 0x1
    bl fn_80390374
    lfs f1, lbl_80885904
    mr r3, r29
    li r4, 0x0
    li r5, 0x0
    bl fn_8037EF30
    b lbl_fn_8038F52C_00001DE4
    mr r3, r29
    bl fn_80390374
    bl fn_801156C4
    bl fn_801156D8
    mr r4, r3
    mr r3, r29
    lfs f1, 0x0(r4)
    li r4, 0x0
    li r5, 0x0
    bl fn_8037EF30
    b lbl_fn_8038F52C_00001DE4
    mr r3, r29
    li r4, 0xd
    bl fn_80389838
    b lbl_fn_8038F52C_00001DE4
    mr r3, r29
    li r4, 0xe
    bl fn_80389838
    b lbl_fn_8038F52C_00001DE4
    mr r3, r29
    li r4, 0xf
    bl fn_80389838
    b lbl_fn_8038F52C_00001DE4
    mr r3, r29
    li r4, 0x14
    bl fn_80389838
    lfs f1, lbl_80885904
    mr r3, r29
    li r4, 0x1
    li r5, 0x1
    bl fn_8037EF30
    b lbl_fn_8038F52C_00001DE4
    mr r3, r29
    bl fn_80390374
    lfs f1, lbl_80885904
    mr r3, r29
    li r4, 0x1
    li r5, 0x1
    bl fn_8037EF30
    b lbl_fn_8038F52C_00001DE4
    addi r3, r1, 0x154
    addi r4, r29, 0x51c
    bl fn_8037E964
    lfs f2, 0x158(r1)
    addi r3, r29, 0x46c
    lfs f0, lbl_80885A10
    addi r5, r1, 0x154
    lfs f1, lbl_8088593C
    li r4, 0x3
    fmuls f0, f2, f0
    stfs f0, 0x158(r1)
    bl fn_8037E89C
    mr r3, r29
    li r31, 0x1
    bl fn_80390374
    lfs f1, lbl_80885904
    mr r3, r29
    li r4, 0x0
    li r5, 0x0
    bl fn_8037EF30
    b lbl_fn_8038F52C_00001DE4
    mr r3, r30
    bl fn_800F84C8
    li r4, 0x0
    bl fn_80139550
    fmr f30, f1
    mr r3, r30
    bl fn_800F84C8
    li r4, 0x0
    bl fn_80097D7C
    fmr f31, f1
    addi r3, r1, 0x118
    addi r4, r29, 0x51c
    bl fn_8037E964
    mr r3, r30
    bl fn_800F84C8
    li r4, 0x0
    bl fn_80139F2C
    cmpwi r3, 0x16e
    bne lbl_fn_8038F52C_000014CC
    lfs f1, lbl_80885974
    bl fn_801125F8
    fneg f0, f1
    lfs f1, lbl_80885914
    stfs f0, 0x24(r1)
    bl fn_801125F8
    lfs f0, lbl_80885AA8
    stfs f1, 0x20(r1)
    fcmpo cr0, f30, f0
    ble lbl_fn_8038F52C_00001474
    lfs f1, lbl_80885A98
    lfs f0, lbl_808858FC
    fsubs f2, f30, f1
    lfs f1, lbl_808858F8
    fmuls f0, f2, f0
    fcmpo cr0, f1, f0
    bge lbl_fn_8038F52C_00001454
    b lbl_fn_8038F52C_00001458
lbl_fn_8038F52C_00001454:
    fmr f1, f0
lbl_fn_8038F52C_00001458:
    addi r3, r1, 0x24
    addi r4, r1, 0x20
    bl fn_800F8524
    lfs f0, 0x120(r1)
    fadds f0, f0, f1
    stfs f0, 0x120(r1)
    b lbl_fn_8038F52C_000014B8
lbl_fn_8038F52C_00001474:
    lfs f0, lbl_80885AAC
    fcmpo cr0, f30, f0
    ble lbl_fn_8038F52C_000014B8
    fsubs f2, f30, f0
    lfs f0, lbl_80885A3C
    lfs f1, lbl_808858F8
    fdivs f0, f2, f0
    fcmpo cr0, f1, f0
    bge lbl_fn_8038F52C_0000149C
    b lbl_fn_8038F52C_000014A0
lbl_fn_8038F52C_0000149C:
    fmr f1, f0
lbl_fn_8038F52C_000014A0:
    addi r4, r1, 0x24
    la r3, lbl_8087DD04
    bl fn_800F8524
    lfs f0, 0x120(r1)
    fadds f0, f0, f1
    stfs f0, 0x120(r1)
lbl_fn_8038F52C_000014B8:
    lfs f1, 0x11c(r1)
    lfs f0, lbl_80885A10
    fmuls f0, f1, f0
    stfs f0, 0x11c(r1)
    b lbl_fn_8038F52C_0000193C
lbl_fn_8038F52C_000014CC:
    mr r3, r30
    bl fn_800F84C8
    li r4, 0x0
    bl fn_80139F2C
    cmpwi r3, 0x170
    bne lbl_fn_8038F52C_000016D8
    lfs f1, lbl_80885914
    bl fn_801125F8
    fneg f0, f1
    lfs f1, lbl_80885930
    stfs f0, 0x1c(r1)
    bl fn_801125F8
    lfs f0, lbl_80885AA8
    stfs f1, 0x18(r1)
    fcmpo cr0, f30, f0
    ble lbl_fn_8038F52C_0000154C
    lfs f1, lbl_80885A98
    lfs f0, lbl_808858FC
    fsubs f2, f30, f1
    lfs f1, lbl_808858F8
    fmuls f0, f2, f0
    fcmpo cr0, f1, f0
    bge lbl_fn_8038F52C_0000152C
    b lbl_fn_8038F52C_00001530
lbl_fn_8038F52C_0000152C:
    fmr f1, f0
lbl_fn_8038F52C_00001530:
    addi r3, r1, 0x1c
    addi r4, r1, 0x18
    bl fn_800F8524
    lfs f0, 0x120(r1)
    fadds f0, f0, f1
    stfs f0, 0x120(r1)
    b lbl_fn_8038F52C_00001590
lbl_fn_8038F52C_0000154C:
    lfs f0, lbl_80885AAC
    fcmpo cr0, f30, f0
    ble lbl_fn_8038F52C_00001590
    fsubs f2, f30, f0
    lfs f0, lbl_80885A3C
    lfs f1, lbl_808858F8
    fdivs f0, f2, f0
    fcmpo cr0, f1, f0
    bge lbl_fn_8038F52C_00001574
    b lbl_fn_8038F52C_00001578
lbl_fn_8038F52C_00001574:
    fmr f1, f0
lbl_fn_8038F52C_00001578:
    addi r4, r1, 0x1c
    la r3, lbl_8087DD08
    bl fn_800F8524
    lfs f0, 0x120(r1)
    fadds f0, f0, f1
    stfs f0, 0x120(r1)
lbl_fn_8038F52C_00001590:
    lfs f0, lbl_80885AB0
    fsubs f0, f31, f0
    fcmpo cr0, f30, f0
    ble lbl_fn_8038F52C_00001634
    fsubs f1, f30, f0
    lfs f0, lbl_80885A94
    lfs f2, lbl_808858E8
    fdivs f0, f1, f0
    fcmpo cr0, f2, f0
    ble lbl_fn_8038F52C_000015BC
    b lbl_fn_8038F52C_000015C0
lbl_fn_8038F52C_000015BC:
    fmr f2, f0
lbl_fn_8038F52C_000015C0:
    lfs f29, lbl_808858F8
    fcmpo cr0, f29, f2
    bge lbl_fn_8038F52C_000015D0
    b lbl_fn_8038F52C_000015F8
lbl_fn_8038F52C_000015D0:
    lfs f1, lbl_80885AB0
    lfs f0, lbl_80885A94
    fsubs f1, f31, f1
    lfs f29, lbl_808858E8
    fsubs f1, f30, f1
    fdivs f0, f1, f0
    fcmpo cr0, f29, f0
    ble lbl_fn_8038F52C_000015F4
    b lbl_fn_8038F52C_000015F8
lbl_fn_8038F52C_000015F4:
    fmr f29, f0
lbl_fn_8038F52C_000015F8:
    fmr f1, f29
    addi r4, r1, 0x124
    la r3, lbl_8087DD0C
    bl fn_800F8524
    stfs f1, 0x124(r1)
    lfs f1, lbl_80885970
    bl fn_801125F8
    fneg f0, f1
    addi r3, r1, 0xc
    fmr f1, f29
    addi r4, r1, 0x14c
    stfs f0, 0xc(r1)
    bl fn_800F8524
    stfs f1, 0x14c(r1)
    b lbl_fn_8038F52C_000016C4
lbl_fn_8038F52C_00001634:
    lfs f1, lbl_808858F4
    lfs f0, lbl_80885914
    fsubs f1, f30, f1
    lfs f2, lbl_808858F8
    fdivs f0, f1, f0
    fcmpo cr0, f2, f0
    bge lbl_fn_8038F52C_00001654
    b lbl_fn_8038F52C_00001658
lbl_fn_8038F52C_00001654:
    fmr f2, f0
lbl_fn_8038F52C_00001658:
    lfs f29, lbl_808858E8
    fcmpo cr0, f29, f2
    ble lbl_fn_8038F52C_00001668
    b lbl_fn_8038F52C_0000168C
lbl_fn_8038F52C_00001668:
    lfs f1, lbl_808858F4
    lfs f0, lbl_80885914
    fsubs f1, f30, f1
    lfs f29, lbl_808858F8
    fdivs f0, f1, f0
    fcmpo cr0, f29, f0
    bge lbl_fn_8038F52C_00001688
    b lbl_fn_8038F52C_0000168C
lbl_fn_8038F52C_00001688:
    fmr f29, f0
lbl_fn_8038F52C_0000168C:
    fmr f1, f29
    addi r3, r1, 0x124
    la r4, lbl_8087DD10
    bl fn_800F8524
    stfs f1, 0x124(r1)
    lfs f1, lbl_80885970
    bl fn_801125F8
    fneg f0, f1
    addi r3, r1, 0x14c
    fmr f1, f29
    addi r4, r1, 0x8
    stfs f0, 0x8(r1)
    bl fn_800F8524
    stfs f1, 0x14c(r1)
lbl_fn_8038F52C_000016C4:
    lfs f1, 0x11c(r1)
    lfs f0, lbl_80885A24
    fmuls f0, f1, f0
    stfs f0, 0x11c(r1)
    b lbl_fn_8038F52C_0000193C
lbl_fn_8038F52C_000016D8:
    lfs f1, lbl_8088594C
    bl fn_801125F8
    fneg f0, f1
    lfs f1, lbl_808858E8
    stfs f0, 0x14(r1)
    bl fn_801125F8
    lfs f0, lbl_80885914
    stfs f1, 0x10(r1)
    fsubs f0, f31, f0
    fcmpo cr0, f30, f0
    ble lbl_fn_8038F52C_000017B0
    fsubs f1, f30, f0
    lfs f0, lbl_80885AB4
    lfs f2, lbl_808858E8
    fdivs f0, f1, f0
    fcmpo cr0, f2, f0
    ble lbl_fn_8038F52C_00001720
    b lbl_fn_8038F52C_00001724
lbl_fn_8038F52C_00001720:
    fmr f2, f0
lbl_fn_8038F52C_00001724:
    lfs f1, lbl_808858F8
    fcmpo cr0, f1, f2
    bge lbl_fn_8038F52C_00001734
    b lbl_fn_8038F52C_0000175C
lbl_fn_8038F52C_00001734:
    lfs f1, lbl_80885914
    lfs f0, lbl_80885AB4
    fsubs f2, f31, f1
    lfs f1, lbl_808858E8
    fsubs f2, f30, f2
    fdivs f0, f2, f0
    fcmpo cr0, f1, f0
    ble lbl_fn_8038F52C_00001758
    b lbl_fn_8038F52C_0000175C
lbl_fn_8038F52C_00001758:
    fmr f1, f0
lbl_fn_8038F52C_0000175C:
    la r3, lbl_8087DD14
    la r4, lbl_8087DD18
    bl fn_800F8524
    lfs f0, lbl_80885914
    lfs f3, 0x118(r1)
    fsubs f2, f31, f0
    lfs f0, lbl_80885A40
    fmuls f3, f3, f1
    lfs f1, lbl_808858F8
    fsubs f2, f30, f2
    stfs f3, 0x118(r1)
    fdivs f0, f2, f0
    fcmpo cr0, f1, f0
    bge lbl_fn_8038F52C_00001798
    b lbl_fn_8038F52C_0000179C
lbl_fn_8038F52C_00001798:
    fmr f1, f0
lbl_fn_8038F52C_0000179C:
    addi r3, r29, 0x480
    addi r4, r1, 0x120
    bl fn_800F8524
    stfs f1, 0x120(r1)
    b lbl_fn_8038F52C_0000193C
lbl_fn_8038F52C_000017B0:
    lfs f0, lbl_80885AA8
    fcmpo cr0, f30, f0
    ble lbl_fn_8038F52C_0000186C
    lfs f1, lbl_80885A98
    lfs f0, lbl_808858FC
    fsubs f2, f30, f1
    lfs f1, lbl_808858F8
    fmuls f0, f2, f0
    fcmpo cr0, f1, f0
    bge lbl_fn_8038F52C_000017DC
    b lbl_fn_8038F52C_000017E0
lbl_fn_8038F52C_000017DC:
    fmr f1, f0
lbl_fn_8038F52C_000017E0:
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    bl fn_800F8524
    lfs f0, lbl_80885AA8
    lfs f3, 0x120(r1)
    fsubs f2, f30, f0
    lfs f0, lbl_80885930
    fadds f1, f3, f1
    lfs f3, lbl_808858E8
    fdivs f0, f2, f0
    stfs f1, 0x120(r1)
    fcmpo cr0, f3, f0
    ble lbl_fn_8038F52C_00001818
    b lbl_fn_8038F52C_0000181C
lbl_fn_8038F52C_00001818:
    fmr f3, f0
lbl_fn_8038F52C_0000181C:
    lfs f1, lbl_808858F8
    fcmpo cr0, f1, f3
    bge lbl_fn_8038F52C_0000182C
    b lbl_fn_8038F52C_00001850
lbl_fn_8038F52C_0000182C:
    lfs f1, lbl_80885AA8
    lfs f0, lbl_80885930
    fsubs f2, f30, f1
    lfs f1, lbl_808858E8
    fdivs f0, f2, f0
    fcmpo cr0, f1, f0
    ble lbl_fn_8038F52C_0000184C
    b lbl_fn_8038F52C_00001850
lbl_fn_8038F52C_0000184C:
    fmr f1, f0
lbl_fn_8038F52C_00001850:
    la r3, lbl_8087DD1C
    la r4, lbl_8087DD20
    bl fn_800F8524
    lfs f0, 0x118(r1)
    fmuls f0, f0, f1
    stfs f0, 0x118(r1)
    b lbl_fn_8038F52C_0000193C
lbl_fn_8038F52C_0000186C:
    lfs f1, lbl_80885AAC
    lfs f0, lbl_80885A3C
    fsubs f1, f30, f1
    lfs f2, lbl_808858E8
    fdivs f0, f1, f0
    fcmpo cr0, f2, f0
    ble lbl_fn_8038F52C_0000188C
    b lbl_fn_8038F52C_00001890
lbl_fn_8038F52C_0000188C:
    fmr f2, f0
lbl_fn_8038F52C_00001890:
    lfs f1, lbl_808858F8
    fcmpo cr0, f1, f2
    bge lbl_fn_8038F52C_000018A0
    b lbl_fn_8038F52C_000018C4
lbl_fn_8038F52C_000018A0:
    lfs f1, lbl_80885AAC
    lfs f0, lbl_80885A3C
    fsubs f2, f30, f1
    lfs f1, lbl_808858E8
    fdivs f0, f2, f0
    fcmpo cr0, f1, f0
    ble lbl_fn_8038F52C_000018C0
    b lbl_fn_8038F52C_000018C4
lbl_fn_8038F52C_000018C0:
    fmr f1, f0
lbl_fn_8038F52C_000018C4:
    addi r4, r1, 0x14
    la r3, lbl_8087DD24
    bl fn_800F8524
    lfs f0, lbl_80885930
    lfs f2, 0x120(r1)
    fdivs f0, f30, f0
    lfs f3, lbl_808858E8
    fadds f1, f2, f1
    fcmpo cr0, f3, f0
    stfs f1, 0x120(r1)
    ble lbl_fn_8038F52C_000018F4
    b lbl_fn_8038F52C_000018F8
lbl_fn_8038F52C_000018F4:
    fmr f3, f0
lbl_fn_8038F52C_000018F8:
    lfs f1, lbl_808858F8
    fcmpo cr0, f1, f3
    bge lbl_fn_8038F52C_00001908
    b lbl_fn_8038F52C_00001924
lbl_fn_8038F52C_00001908:
    lfs f0, lbl_80885930
    lfs f1, lbl_808858E8
    fdivs f0, f30, f0
    fcmpo cr0, f1, f0
    ble lbl_fn_8038F52C_00001920
    b lbl_fn_8038F52C_00001924
lbl_fn_8038F52C_00001920:
    fmr f1, f0
lbl_fn_8038F52C_00001924:
    la r3, lbl_8087DD28
    la r4, lbl_8087DD2C
    bl fn_800F8524
    lfs f0, 0x118(r1)
    fmuls f0, f0, f1
    stfs f0, 0x118(r1)
lbl_fn_8038F52C_0000193C:
    lfs f1, lbl_8088593C
    addi r3, r29, 0x46c
    addi r5, r1, 0x118
    li r4, 0x3
    bl fn_8037E89C
    lfs f1, lbl_80885AA4
    bl fn_801125F8
    fneg f1, f1
    lfs f0, 0x120(r1)
    fcmpo cr0, f1, f0
    ble lbl_fn_8038F52C_00001974
    lfs f1, lbl_80885AA4
    bl fn_801125F8
    fneg f0, f1
lbl_fn_8038F52C_00001974:
    stfs f0, 0x480(r29)
    mr r3, r29
    li r31, 0x1
    lfs f0, 0x11c(r1)
    stfs f0, 0x47c(r29)
    lfs f0, 0x118(r1)
    stfs f0, 0x478(r29)
    lfs f0, 0x124(r1)
    stfs f0, 0x484(r29)
    lfs f0, 0x14c(r1)
    stfs f0, 0x4ac(r29)
    bl fn_80390374
    lfs f1, lbl_80885904
    mr r3, r29
    li r4, 0x0
    li r5, 0x1
    bl fn_8037EF30
    b lbl_fn_8038F52C_00001DE4
    addi r3, r1, 0xdc
    addi r4, r29, 0x51c
    bl fn_8037E964
    lfs f1, lbl_80885AB8
    addi r3, r29, 0x46c
    lfs f3, lbl_80885938
    addi r5, r1, 0xdc
    lfs f2, lbl_80885AA4
    li r4, 0x3
    lfs f0, lbl_80885914
    stfs f1, 0xdc(r1)
    lfs f1, lbl_8088593C
    stfs f3, 0x104(r1)
    stfs f2, 0xe8(r1)
    stfs f0, 0xec(r1)
    bl fn_8037E89C
    mr r3, r29
    li r31, 0x1
    bl fn_80390374
    b lbl_fn_8038F52C_00001DE4
    addi r3, r1, 0xa0
    addi r4, r29, 0x51c
    bl fn_8037E964
    lfs f1, lbl_80885AB8
    addi r3, r29, 0x46c
    lfs f3, lbl_80885938
    addi r5, r1, 0xa0
    lfs f2, lbl_80885AA4
    li r4, 0x3
    lfs f0, lbl_80885914
    stfs f1, 0xa0(r1)
    lfs f1, lbl_8088593C
    stfs f3, 0xc8(r1)
    stfs f2, 0xac(r1)
    stfs f0, 0xb0(r1)
    bl fn_8037E89C
    mr r3, r29
    li r31, 0x1
    bl fn_80390374
    b lbl_fn_8038F52C_00001DE4
    addi r3, r1, 0x64
    addi r4, r29, 0x51c
    bl fn_8037E964
    mr r3, r30
    bl fn_800F84C8
    li r4, 0x0
    bl fn_80139550
    lfs f0, lbl_80885ABC
    fcmpo cr0, f1, f0
    bge lbl_fn_8038F52C_00001A98
    lfs f1, 0x64(r1)
    lfs f0, lbl_80885A24
    fmuls f0, f1, f0
    stfs f0, 0x64(r1)
    b lbl_fn_8038F52C_00001B80
lbl_fn_8038F52C_00001A98:
    mr r3, r30
    bl fn_800F84C8
    li r4, 0x0
    bl fn_80139550
    lfs f0, lbl_80885AC0
    fcmpo cr0, f1, f0
    ble lbl_fn_8038F52C_00001B1C
    mr r3, r30
    bl fn_800F84C8
    li r4, 0x0
    bl fn_80139550
    lfs f0, lbl_80885AC0
    lfs f2, lbl_808858F0
    fsubs f3, f1, f0
    lfs f0, lbl_80885A50
    lfs f1, lbl_808858F8
    fnmsubs f0, f2, f3, f0
    fcmpo cr0, f1, f0
    ble lbl_fn_8038F52C_00001AE8
    b lbl_fn_8038F52C_00001B0C
lbl_fn_8038F52C_00001AE8:
    mr r3, r30
    bl fn_800F84C8
    li r4, 0x0
    bl fn_80139550
    lfs f0, lbl_80885AC0
    lfs f2, lbl_808858F0
    fsubs f1, f1, f0
    lfs f0, lbl_80885A50
    fnmsubs f1, f2, f1, f0
lbl_fn_8038F52C_00001B0C:
    lfs f0, 0x64(r1)
    fmuls f0, f0, f1
    stfs f0, 0x64(r1)
    b lbl_fn_8038F52C_00001B80
lbl_fn_8038F52C_00001B1C:
    mr r3, r30
    bl fn_800F84C8
    li r4, 0x0
    bl fn_80139550
    lfs f0, lbl_80885ABC
    lfs f2, lbl_80885A54
    fsubs f3, f1, f0
    lfs f0, lbl_80885A24
    lfs f1, lbl_80885A50
    fmadds f0, f2, f3, f0
    fcmpo cr0, f1, f0
    bge lbl_fn_8038F52C_00001B50
    b lbl_fn_8038F52C_00001B74
lbl_fn_8038F52C_00001B50:
    mr r3, r30
    bl fn_800F84C8
    li r4, 0x0
    bl fn_80139550
    lfs f0, lbl_80885ABC
    lfs f2, lbl_80885A54
    fsubs f1, f1, f0
    lfs f0, lbl_80885A24
    fmadds f1, f2, f1, f0
lbl_fn_8038F52C_00001B74:
    lfs f0, 0x64(r1)
    fmuls f0, f0, f1
    stfs f0, 0x64(r1)
lbl_fn_8038F52C_00001B80:
    lfs f1, lbl_8088593C
    addi r3, r29, 0x46c
    addi r5, r1, 0x64
    li r4, 0x3
    bl fn_8037E89C
    lfs f0, 0x64(r1)
    mr r3, r29
    stfs f0, 0x478(r29)
    li r31, 0x1
    lfs f0, 0x70(r1)
    stfs f0, 0x484(r29)
    bl fn_80390374
    lfs f1, lbl_80885904
    mr r3, r29
    li r4, 0x0
    li r5, 0x0
    bl fn_8037EF30
    b lbl_fn_8038F52C_00001DE4
    addi r3, r1, 0x28
    addi r4, r29, 0x51c
    bl fn_8037E964
    mr r3, r30
    bl fn_800F84C8
    li r4, 0x0
    bl fn_80097D7C
    lfs f0, lbl_8088597C
    mr r3, r30
    fsubs f30, f1, f0
    bl fn_800F84C8
    li r4, 0x0
    bl fn_80139550
    fcmpo cr0, f1, f30
    ble lbl_fn_8038F52C_00001C98
    mr r3, r30
    bl fn_800F84C8
    li r4, 0x0
    bl fn_80097D7C
    lfs f0, lbl_8088597C
    mr r3, r30
    fsubs f30, f1, f0
    bl fn_800F84C8
    li r4, 0x0
    bl fn_80139550
    fsubs f2, f1, f30
    lfs f0, lbl_80885A34
    lfs f1, lbl_808858F8
    fmuls f0, f2, f0
    fcmpo cr0, f1, f0
    bge lbl_fn_8038F52C_00001C48
    b lbl_fn_8038F52C_00001C7C
lbl_fn_8038F52C_00001C48:
    mr r3, r30
    bl fn_800F84C8
    li r4, 0x0
    bl fn_80097D7C
    lfs f0, lbl_8088597C
    mr r3, r30
    fsubs f30, f1, f0
    bl fn_800F84C8
    li r4, 0x0
    bl fn_80139550
    fsubs f1, f1, f30
    lfs f0, lbl_80885A34
    fmuls f1, f1, f0
lbl_fn_8038F52C_00001C7C:
    la r3, lbl_8087DD30
    la r4, lbl_8087DD34
    bl fn_800F8524
    lfs f0, 0x28(r1)
    fmuls f0, f0, f1
    stfs f0, 0x28(r1)
    b lbl_fn_8038F52C_00001CA8
lbl_fn_8038F52C_00001C98:
    lfs f1, 0x28(r1)
    lfs f0, lbl_80885A24
    fmuls f0, f1, f0
    stfs f0, 0x28(r1)
lbl_fn_8038F52C_00001CA8:
    lfs f1, lbl_8088593C
    addi r3, r29, 0x46c
    addi r5, r1, 0x28
    li r4, 0x3
    bl fn_8037E89C
    lfs f0, 0x28(r1)
    mr r3, r29
    stfs f0, 0x478(r29)
    li r31, 0x1
    lfs f0, 0x34(r1)
    stfs f0, 0x484(r29)
    bl fn_80390374
    lfs f1, lbl_80885904
    mr r3, r29
    li r4, 0x0
    li r5, 0x0
    bl fn_8037EF30
    b lbl_fn_8038F52C_00001DE4
lbl_fn_8038F52C_00001CF0:
    mr r3, r29
    bl fn_80390374
    b lbl_fn_8038F52C_00001DE4
lbl_fn_8038F52C_00001CFC:
    bl fn_803830A0
    cmpwi r3, 0x0
    beq lbl_fn_8038F52C_00001D30
    bl fn_800F52F8
    bl fn_80116BAC
    li r4, 0x24
    bl fn_801240B4
    cmpwi r3, 0x0
    beq lbl_fn_8038F52C_00001D30
    mr r3, r29
    li r4, 0x9
    bl fn_80389838
    b lbl_fn_8038F52C_00001DE4
lbl_fn_8038F52C_00001D30:
    bl fn_803903C4
    cmpwi r3, 0x0
    beq lbl_fn_8038F52C_00001D5C
    bl fn_803903C4
    bl fn_803903CC
    cmpwi r3, 0x0
    beq lbl_fn_8038F52C_00001D5C
    mr r3, r29
    li r4, 0x8
    bl fn_80389838
    b lbl_fn_8038F52C_00001DE4
lbl_fn_8038F52C_00001D5C:
    bl fn_80121F00
    cmpwi r3, 0x0
    beq lbl_fn_8038F52C_00001DDC
    bl fn_80121F00
    bl fn_8013C504
    cmpwi r3, 0x0
    beq lbl_fn_8038F52C_00001DDC
    bl fn_80121F00
    bl fn_8013C504
    mr r4, r30
    bl fn_803C2048
    cmpwi r3, 0x0
    beq lbl_fn_8038F52C_00001DD0
    lwz r0, 0x2c(r3)
    cmpwi r0, 0x1
    bne lbl_fn_8038F52C_00001DAC
    mr r3, r29
    li r4, 0xa
    bl fn_80389838
    b lbl_fn_8038F52C_00001DE4
lbl_fn_8038F52C_00001DAC:
    cmpwi r0, 0x2
    bne lbl_fn_8038F52C_00001DC4
    mr r3, r29
    li r4, 0xb
    bl fn_80389838
    b lbl_fn_8038F52C_00001DE4
lbl_fn_8038F52C_00001DC4:
    mr r3, r29
    bl fn_80390374
    b lbl_fn_8038F52C_00001DE4
lbl_fn_8038F52C_00001DD0:
    mr r3, r29
    bl fn_80390374
    b lbl_fn_8038F52C_00001DE4
lbl_fn_8038F52C_00001DDC:
    mr r3, r29
    bl fn_80390374
lbl_fn_8038F52C_00001DE4:
    cmpwi r31, 0x0
    bne lbl_fn_8038F52C_00001E00
    lwz r0, 0x46c(r29)
    cmpwi r0, 0x4
    beq lbl_fn_8038F52C_00001E00
    addi r3, r29, 0x46c
    bl fn_8032EC94
lbl_fn_8038F52C_00001E00:
    lwz r0, 0x254(r1)
    psq_l f31, 0x248(r1), 0, 0
    lfd f31, 0x240(r1)
    psq_l f30, 0x238(r1), 0, 0
    lfd f30, 0x230(r1)
    psq_l f29, 0x228(r1), 0, 0
    lfd f29, 0x220(r1)
    lwz r31, 0x21c(r1)
    lwz r30, 0x218(r1)
    lwz r29, 0x214(r1)
    mtlr r0
    addi r1, r1, 0x250
    blr
}
