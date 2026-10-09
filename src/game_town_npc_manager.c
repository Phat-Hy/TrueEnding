#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_15(void);
extern void _restgpr_17(void);
extern void _restgpr_22(void);
extern void _restgpr_24(void);
extern void _restgpr_27(void);
extern void _savegpr_15(void);
extern void _savegpr_17(void);
extern void _savegpr_22(void);
extern void _savegpr_24(void);
extern void _savegpr_27(void);
extern void fn_8004ED34(void);
extern void fn_80050A1C(void);
extern void fn_8005361C(void);
extern void fn_80153B44(void);
extern void fn_80161E58(void);
extern void fn_80162140(void);
extern void fn_80162428(void);
extern void fn_80162720(void);
extern void fn_80162A08(void);
extern void fn_80162CF0(void);
extern void fn_80162FE8(void);
extern void fn_801632D0(void);
extern void fn_801635B8(void);
extern void fn_801638A0(void);
extern void fn_80165F54(void);
extern void fn_801698E4(void);
extern void fn_80176548(void);
extern void fn_80179D44(void);
extern void fn_80370174(void);
extern void fn_803ABFD4(void);
extern void fn_803AC088(void);
extern void fn_803B3B38(void);
extern void fn_803EEE10(void);
extern void fn_80435CBC(void);
extern void fn_8043A530(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9990(void);
extern void fn_805F99B0(void);
extern void fn_8068A850(void);
extern void fn_8068AEA4(void);

/* External data declarations */
extern u8 jumptable_8078BBE0[];
extern u8 jumptable_8078BC14[];
extern u8 lbl_807500C8[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087F408;
extern u32 lbl_8087F430;
extern u32 lbl_8087F4A0;
extern u32 lbl_8087F610;
extern u32 lbl_80885CB8;
extern u32 lbl_80885CBC;
extern u32 lbl_80885CCC;
extern u32 lbl_80885CD8;
extern u32 lbl_80885CFC;
extern u32 lbl_80885D00;
extern u32 lbl_80885D04;
extern u32 lbl_80885D08;
extern u32 lbl_80885D0C;
extern u32 lbl_80885D10;
extern u32 lbl_80885D14;
extern u32 lbl_80885D18;
extern u32 lbl_80885D1C;
extern u32 lbl_80885D20;
extern u32 lbl_80885D24;
extern u32 lbl_80885D28;
extern u32 lbl_80885D2C;
extern u32 lbl_80885D30;
extern u32 lbl_80885D34;
extern u32 lbl_80885D38;
extern u32 lbl_80885D3C;
extern u32 lbl_80885D40;
extern u32 lbl_80885D44;

/* Function declarations */
void fn_803CAED0(void);
void fn_803CB044(void);
void fn_803CB474(void);
void fn_803CB618(void);
void fn_803CB820(void);
void fn_803CC198(void);
void fn_803CC1A4(void);
void fn_803CC3BC(void);
void fn_803CC5E4(void);
void fn_803CC6B4(void);
void fn_803CC6D0(void);
void fn_803CC718(void);
void fn_803CC754(void);
void fn_803CC774(void);
void fn_803CC77C(void);

asm void fn_803CAED0(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_27
    lwz r0, 0x0(r5)
    addi r6, r1, 0x20
    lwz r8, 0xb0(r3)
    addi r29, r1, 0x2c
    slwi r3, r0, 6
    lwz r7, 0x4(r5)
    add r28, r8, r3
    mr r30, r4
    slwi r0, r7, 6
    lfs f0, 0xc(r28)
    add r27, r8, r0
    lfs f4, 0x8(r28)
    lfs f3, 0xc(r27)
    mr r31, r5
    lfs f5, 0x8(r27)
    mr r3, r29
    fsubs f2, f3, f0
    lfs f3, 0x4(r27)
    lfs f0, 0x4(r28)
    fsubs f4, f5, f4
    stfs f2, 0x28(r1)
    mr r4, r29
    fsubs f0, f3, f0
    stfs f4, 0x24(r1)
    stfs f0, 0x20(r1)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x34(r1)
    bl fn_805F98D0
    psq_l f1, 0x0(r29), 0, 0
    mr r3, r30
    lfs f2, 0x34(r1)
    addi r4, r1, 0x8
    stfs f2, 0x8(r30)
    addi r5, r1, 0x14
    lfs f3, lbl_80885CBC
    psq_st f1, 0x0(r30), 0, 0
    lfs f0, lbl_80885CB8
    stfs f3, 0x8(r1)
    stfs f0, 0xc(r1)
    stfs f3, 0x10(r1)
    bl fn_805F99B0
    addi r3, r1, 0x14
    lfs f2, 0x1c(r1)
    psq_l f1, 0x0(r3), 0, 0
    li r3, 0x0
    psq_st f1, 0xc(r30), 0, 0
    stfs f2, 0x14(r30)
    psq_l f1, 0x4(r28), 0, 0
    lfs f2, 0xc(r28)
    stfs f2, 0x20(r30)
    psq_st f1, 0x18(r30), 0, 0
    psq_l f1, 0x4(r27), 0, 0
    lfs f2, 0xc(r27)
    stfs f2, 0x2c(r30)
    psq_st f1, 0x24(r30), 0, 0
    lwz r4, 0x14(r28)
    stw r4, 0x34(r30)
    subi r0, r4, 0x1
    stw r3, 0x30(r30)
    cmplwi r0, 0x1
    lwz r3, 0x18(r28)
    neg r0, r3
    or r4, r0, r3
    srwi r0, r4, 31
    stw r0, 0x30(r30)
    lwz r3, 0x18(r27)
    neg r0, r3
    or r0, r0, r3
    srawi r0, r0, 31
    rlwinm r0, r0, 0, 30, 30
    rlwimi r0, r4, 1, 31, 31
    stw r0, 0x30(r30)
    bgt lbl_fn_803CAED0_00000144
    ori r0, r0, 0x4
    stw r0, 0x30(r30)
lbl_fn_803CAED0_00000144:
    lwz r4, 0x0(r31)
    addi r11, r1, 0x50
    lwz r3, 0x4(r31)
    addi r0, r4, 0x1
    stw r0, 0x38(r30)
    addi r0, r3, 0x1
    stw r0, 0x3c(r30)
    bl _restgpr_27
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_803CB044(void)
{
    nofralloc
    stwu r1, -0x250(r1)
    mflr r0
    stw r0, 0x254(r1)
    addi r11, r1, 0x1b0
    stfd f31, 0x240(r1)
    psq_st f31, 0x248(r1), 0, 0
    stfd f30, 0x230(r1)
    psq_st f30, 0x238(r1), 0, 0
    stfd f29, 0x220(r1)
    psq_st f29, 0x228(r1), 0, 0
    stfd f28, 0x210(r1)
    psq_st f28, 0x218(r1), 0, 0
    stfd f27, 0x200(r1)
    psq_st f27, 0x208(r1), 0, 0
    stfd f26, 0x1f0(r1)
    psq_st f26, 0x1f8(r1), 0, 0
    stfd f25, 0x1e0(r1)
    psq_st f25, 0x1e8(r1), 0, 0
    stfd f24, 0x1d0(r1)
    psq_st f24, 0x1d8(r1), 0, 0
    stfd f23, 0x1c0(r1)
    psq_st f23, 0x1c8(r1), 0, 0
    stfd f22, 0x1b0(r1)
    psq_st f22, 0x1b8(r1), 0, 0
    bl _savegpr_15
    lfs f3, lbl_80885CBC
    li r31, 0x0
    lfs f0, lbl_80885CB8
    mr r16, r3
    stfs f3, 0x70(r1)
    mr r17, r4
    mr r18, r5
    mr r19, r6
    stfs f3, 0x74(r1)
    mr r20, r7
    addi r3, r1, 0x98
    li r4, 0x79
    stfs f0, 0x78(r1)
    lfs f1, 0x538(r5)
    stw r31, 0x14c(r1)
    stw r31, 0x150(r1)
    stw r31, 0x154(r1)
    stw r31, 0x158(r1)
    bl fn_805F8E70
    addi r4, r1, 0x70
    addi r3, r1, 0x98
    mr r5, r4
    bl fn_805F93C0
    lfs f0, 0x570(r18)
    mr r15, r31
    lfs f27, lbl_80885D00
    addi r30, r1, 0x80
    lfs f25, lbl_80885CD8
    addi r29, r1, 0x8c
    fmuls f26, f27, f0
    lfs f29, lbl_80885CBC
    lfs f30, lbl_80885CB8
    addi r28, r1, 0x48
    lfs f31, lbl_80885D08
    addi r27, r1, 0x8
    lfs f23, lbl_80885CFC
    addi r26, r1, 0x2c
    lfs f22, lbl_80885CCC
    li r24, 0x0
    lfs f28, lbl_80885D04
    li r23, 0x0
    subi r20, r20, 0x1
    b lbl_fn_803CB044_0000050C
lbl_fn_803CB044_00000284:
    lwz r0, 0xb8(r16)
    lwz r4, 0xb0(r16)
    add r22, r0, r15
    lwz r0, 0x8(r22)
    lwz r5, 0x0(r22)
    lwz r6, 0x4(r22)
    cmpwi r0, 0x0
    slwi r3, r5, 6
    slwi r0, r6, 6
    add r25, r4, r3
    add r21, r4, r0
    beq lbl_fn_803CB044_00000504
    cmpwi r20, 0x0
    blt lbl_fn_803CB044_000002CC
    cmpw r5, r20
    beq lbl_fn_803CB044_000002CC
    cmpw r6, r20
    bne lbl_fn_803CB044_00000504
lbl_fn_803CB044_000002CC:
    lfs f3, 0x14(r22)
    addi r3, r1, 0x20
    lfs f0, 0x61c(r18)
    lfs f5, 0x10(r22)
    fsubs f6, f3, f0
    lfs f4, 0x618(r18)
    lfs f3, 0xc(r22)
    lfs f0, 0x614(r18)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x24(r1)
    stfs f0, 0x20(r1)
    stfs f6, 0x28(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f28
    bgt lbl_fn_803CB044_00000504
    lfs f2, 0xc(r25)
    addi r3, r1, 0x64
    psq_l f1, 0x4(r25), 0, 0
    mr r4, r3
    psq_st f1, 0x0(r30), 0, 0
    frsp f0, f2
    stfs f2, 0x88(r1)
    lfs f5, 0x84(r1)
    lfs f2, 0xc(r21)
    psq_l f1, 0x4(r21), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    fsubs f7, f2, f0
    stfs f2, 0x94(r1)
    lfs f4, 0x90(r1)
    lfs f6, 0x5a8(r18)
    lfs f0, 0x620(r18)
    lfs f3, 0x8c(r1)
    fadds f6, f6, f0
    lfs f0, 0x80(r1)
    stfs f7, 0x6c(r1)
    fsubs f7, f3, f0
    fadds f3, f5, f6
    fadds f0, f4, f6
    stfs f7, 0x64(r1)
    stfs f3, 0x84(r1)
    fsubs f3, f0, f3
    stfs f0, 0x90(r1)
    stfs f3, 0x68(r1)
    bl fn_805F98D0
    stfs f29, 0x14(r1)
    addi r3, r1, 0x64
    addi r4, r1, 0x14
    addi r5, r1, 0x58
    stfs f30, 0x18(r1)
    stfs f29, 0x1c(r1)
    bl fn_805F99B0
    addi r3, r1, 0x58
    addi r4, r1, 0x70
    bl fn_805F9990
    fmr f3, f1
    cmpwi r19, 0x0
    beq lbl_fn_803CB044_000003BC
    fcmpo cr0, f1, f22
    blt lbl_fn_803CB044_00000504
lbl_fn_803CB044_000003BC:
    psq_l f1, 0x614(r18), 0, 0
    lfs f2, 0x61c(r18)
    stfs f2, 0x50(r1)
    psq_st f1, 0x0(r28), 0, 0
    lfs f0, 0x620(r18)
    stfs f0, 0x54(r1)
    fcmpo cr0, f0, f31
    ble lbl_fn_803CB044_000003E0
    b lbl_fn_803CB044_000003E4
lbl_fn_803CB044_000003E0:
    fmr f0, f31
lbl_fn_803CB044_000003E4:
    frsp f0, f0
    addi r3, r1, 0x48
    addi r4, r1, 0x80
    addi r5, r1, 0x38
    fmadds f0, f3, f26, f0
    stfs f0, 0x54(r1)
    bl fn_80050A1C
    lfs f0, 0x54(r1)
    fmr f24, f1
    fmuls f0, f0, f0
    fcmpo cr0, f1, f0
    bge lbl_fn_803CB044_00000504
    fcmpo cr0, f1, f25
    bge lbl_fn_803CB044_00000504
    lfs f5, 0x40(r1)
    addi r3, r1, 0x2c
    lfs f4, 0x61c(r18)
    lfs f0, 0x614(r18)
    lfs f3, 0x38(r1)
    fsubs f4, f5, f4
    stfs f29, 0x30(r1)
    fsubs f0, f3, f0
    stfs f4, 0x34(r1)
    stfs f0, 0x2c(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f27
    blt lbl_fn_803CB044_00000480
    psq_l f1, 0x0(r26), 0, 0
    mr r3, r27
    lfs f2, 0x34(r1)
    mr r4, r27
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0x10(r1)
    bl fn_805F98D0
    mr r3, r27
    addi r4, r1, 0x70
    bl fn_805F9990
    fcmpo cr0, f1, f22
    ble lbl_fn_803CB044_00000504
lbl_fn_803CB044_00000480:
    cmpwi r20, 0x0
    li r25, 0x0
    bge lbl_fn_803CB044_000004F4
    stw r31, 0xfc(r1)
    mr r3, r18
    lwz r21, lbl_8087EE98
    stw r31, 0x100(r1)
    stw r31, 0x104(r1)
    stw r31, 0x108(r1)
    bl fn_80179D44
    oris r7, r3, 0x8000
    mr r3, r21
    addi r4, r1, 0xc8
    addi r5, r1, 0x48
    addi r6, r1, 0x38
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_803CB044_000004D4
    li r25, 0x1
lbl_fn_803CB044_000004D4:
    lfs f3, 0x3c(r1)
    lfs f0, 0x52c(r18)
    fsubs f0, f3, f0
    fabs f0, f0
    frsp f0, f0
    fcmpo cr0, f0, f23
    ble lbl_fn_803CB044_000004F4
    li r25, 0x1
lbl_fn_803CB044_000004F4:
    cmpwi r25, 0x0
    bne lbl_fn_803CB044_00000504
    fmr f25, f24
    mr r24, r22
lbl_fn_803CB044_00000504:
    addi r23, r23, 0x1
    addi r15, r15, 0x18
lbl_fn_803CB044_0000050C:
    lwz r0, 0xb4(r16)
    cmplw r23, r0
    blt lbl_fn_803CB044_00000284
    cmpwi r24, 0x0
    beq lbl_fn_803CB044_00000538
    mr r3, r16
    mr r4, r17
    mr r5, r24
    bl fn_803CAED0
    li r3, 0x1
    b lbl_fn_803CB044_0000053C
lbl_fn_803CB044_00000538:
    li r3, 0x0
lbl_fn_803CB044_0000053C:
    addi r11, r1, 0x1b0
    psq_l f31, 0x248(r1), 0, 0
    lfd f31, 0x240(r1)
    psq_l f30, 0x238(r1), 0, 0
    lfd f30, 0x230(r1)
    psq_l f29, 0x228(r1), 0, 0
    lfd f29, 0x220(r1)
    psq_l f28, 0x218(r1), 0, 0
    lfd f28, 0x210(r1)
    psq_l f27, 0x208(r1), 0, 0
    lfd f27, 0x200(r1)
    psq_l f26, 0x1f8(r1), 0, 0
    lfd f26, 0x1f0(r1)
    psq_l f25, 0x1e8(r1), 0, 0
    lfd f25, 0x1e0(r1)
    psq_l f24, 0x1d8(r1), 0, 0
    lfd f24, 0x1d0(r1)
    psq_l f23, 0x1c8(r1), 0, 0
    lfd f23, 0x1c0(r1)
    psq_l f22, 0x1b8(r1), 0, 0
    lfd f22, 0x1b0(r1)
    bl _restgpr_15
    lwz r0, 0x254(r1)
    mtlr r0
    addi r1, r1, 0x250
    blr
}

asm void fn_803CB474(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    addi r11, r1, 0x90
    stfd f31, 0xb0(r1)
    psq_st f31, 0xb8(r1), 0, 0
    stfd f30, 0xa0(r1)
    psq_st f30, 0xa8(r1), 0, 0
    stfd f29, 0x90(r1)
    psq_st f29, 0x98(r1), 0, 0
    bl _savegpr_24
    lfs f29, lbl_80885CBC
    mr r26, r3
    lfs f30, lbl_80885CB8
    mr r27, r4
    lfs f31, lbl_80885D0C
    mr r28, r5
    mr r29, r6
    mr r30, r7
    li r31, 0x0
    li r24, 0x0
    b lbl_fn_803CB474_00000708
lbl_fn_803CB474_000005FC:
    lwz r0, 0xb8(r26)
    add r25, r0, r24
    lwz r0, 0x8(r25)
    cmpwi r0, 0x0
    beq lbl_fn_803CB474_00000700
    lwz r3, 0x0(r25)
    cmpw r3, r29
    beq lbl_fn_803CB474_00000628
    lwz r0, 0x4(r25)
    cmpw r0, r29
    bne lbl_fn_803CB474_00000700
lbl_fn_803CB474_00000628:
    cmpw r3, r30
    beq lbl_fn_803CB474_00000700
    lwz r0, 0x4(r25)
    cmpw r0, r30
    beq lbl_fn_803CB474_00000700
    lwz r6, 0xb0(r26)
    slwi r4, r3, 6
    slwi r0, r0, 6
    addi r3, r1, 0x2c
    add r5, r6, r4
    add r6, r6, r0
    lfs f0, 0xc(r5)
    lfs f1, 0xc(r6)
    mr r4, r3
    lfs f3, 0x8(r6)
    fsubs f4, f1, f0
    lfs f2, 0x8(r5)
    lfs f1, 0x4(r6)
    lfs f0, 0x4(r5)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0x30(r1)
    stfs f0, 0x2c(r1)
    stfs f4, 0x34(r1)
    bl fn_805F98D0
    stfs f29, 0x14(r1)
    addi r3, r1, 0x2c
    addi r4, r1, 0x14
    addi r5, r1, 0x20
    stfs f30, 0x18(r1)
    stfs f29, 0x1c(r1)
    bl fn_805F99B0
    stfs f29, 0x8(r1)
    addi r3, r1, 0x38
    li r4, 0x79
    stfs f29, 0xc(r1)
    stfs f30, 0x10(r1)
    lfs f1, 0x538(r28)
    bl fn_805F8E70
    addi r4, r1, 0x8
    addi r3, r1, 0x38
    mr r5, r4
    bl fn_805F93C0
    addi r3, r1, 0x20
    addi r4, r1, 0x8
    bl fn_805F9990
    fcmpo cr0, f1, f31
    blt lbl_fn_803CB474_00000700
    mr r3, r26
    mr r4, r27
    mr r5, r25
    bl fn_803CAED0
    li r3, 0x1
    b lbl_fn_803CB474_00000718
lbl_fn_803CB474_00000700:
    addi r24, r24, 0x18
    addi r31, r31, 0x1
lbl_fn_803CB474_00000708:
    lwz r0, 0xb4(r26)
    cmplw r31, r0
    blt lbl_fn_803CB474_000005FC
    li r3, 0x0
lbl_fn_803CB474_00000718:
    addi r11, r1, 0x90
    psq_l f31, 0xb8(r1), 0, 0
    lfd f31, 0xb0(r1)
    psq_l f30, 0xa8(r1), 0, 0
    lfd f30, 0xa0(r1)
    psq_l f29, 0x98(r1), 0, 0
    lfd f29, 0x90(r1)
    bl _restgpr_24
    lwz r0, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

asm void fn_803CB618(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    mr r31, r5
    stw r30, 0x48(r1)
    mr r30, r4
    stw r29, 0x44(r1)
    mr r29, r3
    mr r3, r31
    stw r28, 0x40(r1)
    lwz r6, 0xc38(r5)
    subi r28, r6, 0x1
    bl fn_80153B44
    cmpwi r3, 0x2
    bne lbl_fn_803CB618_00000790
    lwz r3, 0xc3c(r31)
    subi r28, r3, 0x1
lbl_fn_803CB618_00000790:
    lwz r0, 0xbc(r29)
    li r6, 0x0
    li r3, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_803CB618_0000092C
lbl_fn_803CB618_000007A8:
    lwz r4, 0xc0(r29)
    add r5, r4, r3
    lwz r0, 0x8(r5)
    cmpwi r0, 0x0
    beq lbl_fn_803CB618_00000920
    lwz r0, 0x0(r5)
    cmpw r28, r0
    bne lbl_fn_803CB618_00000920
    mulli r0, r6, 0xc
    slwi r7, r28, 6
    lwz r5, 0xb0(r29)
    addi r6, r1, 0x2c
    lfs f4, 0x530(r31)
    add r3, r4, r0
    lwz r28, 0x4(r3)
    add r8, r5, r7
    lfs f7, 0x52c(r31)
    addi r3, r1, 0x20
    slwi r0, r28, 6
    lfs f3, 0x528(r31)
    add r7, r5, r0
    lfs f5, 0xc(r8)
    lfs f9, 0xc(r7)
    addi r4, r1, 0x8
    lfs f8, 0x8(r7)
    addi r5, r1, 0x14
    fsubs f2, f9, f4
    lfs f6, 0x4(r7)
    lfs f4, 0x4(r8)
    fsubs f7, f8, f7
    fsubs f10, f6, f3
    lfs f0, 0x8(r8)
    fsubs f8, f8, f0
    stfs f10, 0x2c(r1)
    fsubs f5, f9, f5
    lfs f3, lbl_80885CBC
    fsubs f4, f6, f4
    stfs f7, 0x30(r1)
    stfs f4, 0x20(r1)
    psq_l f1, 0x0(r6), 0, 0
    stfs f8, 0x24(r1)
    lfs f0, lbl_80885CB8
    stfs f5, 0x28(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x8(r30)
    stfs f2, 0x34(r1)
    stfs f3, 0x8(r1)
    stfs f0, 0xc(r1)
    stfs f3, 0x10(r1)
    bl fn_805F99B0
    addi r3, r1, 0x14
    lfs f2, 0x1c(r1)
    psq_l f1, 0x0(r3), 0, 0
    slwi r7, r28, 6
    psq_st f1, 0xc(r30), 0, 0
    li r4, 0x0
    addi r0, r28, 0x1
    li r3, 0x1
    stfs f2, 0x14(r30)
    lwz r5, 0xb0(r29)
    add r5, r5, r7
    psq_l f1, 0x4(r5), 0, 0
    lfs f2, 0xc(r5)
    stfs f2, 0x20(r30)
    psq_st f1, 0x18(r30), 0, 0
    lwz r5, 0xb0(r29)
    add r5, r5, r7
    psq_l f1, 0x4(r5), 0, 0
    lfs f2, 0xc(r5)
    stfs f2, 0x2c(r30)
    psq_st f1, 0x24(r30), 0, 0
    lwz r5, 0xb0(r29)
    add r5, r5, r7
    lwz r5, 0x14(r5)
    stw r5, 0x34(r30)
    stw r4, 0x30(r30)
    lwz r4, 0xb0(r29)
    add r4, r4, r7
    lwz r5, 0x18(r4)
    neg r4, r5
    or r6, r4, r5
    srwi r4, r6, 31
    stw r4, 0x30(r30)
    lwz r4, 0xb0(r29)
    add r4, r4, r7
    lwz r5, 0x18(r4)
    neg r4, r5
    stw r0, 0x38(r30)
    or r0, r4, r5
    srawi r0, r0, 31
    rlwinm r0, r0, 0, 30, 30
    rlwimi r0, r6, 1, 31, 31
    stw r0, 0x30(r30)
    b lbl_fn_803CB618_00000930
lbl_fn_803CB618_00000920:
    addi r3, r3, 0xc
    addi r6, r6, 0x1
    bdnz lbl_fn_803CB618_000007A8
lbl_fn_803CB618_0000092C:
    li r3, 0x0
lbl_fn_803CB618_00000930:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    lwz r28, 0x40(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_803CB820(void)
{
    nofralloc
    stwu r1, -0x2c0(r1)
    mflr r0
    stw r0, 0x2c4(r1)
    addi r11, r1, 0x260
    stfd f31, 0x2b0(r1)
    psq_st f31, 0x2b8(r1), 0, 0
    stfd f30, 0x2a0(r1)
    psq_st f30, 0x2a8(r1), 0, 0
    stfd f29, 0x290(r1)
    psq_st f29, 0x298(r1), 0, 0
    stfd f28, 0x280(r1)
    psq_st f28, 0x288(r1), 0, 0
    stfd f27, 0x270(r1)
    psq_st f27, 0x278(r1), 0, 0
    stfd f26, 0x260(r1)
    psq_st f26, 0x268(r1), 0, 0
    bl _savegpr_17
    mr r0, r4
    mr r18, r6
    mr r17, r3
    mr r19, r5
    mr r4, r18
    mr r5, r0
    addi r3, r1, 0x130
    bl fn_80176548
    addi r3, r1, 0x120
    psq_l f1, 0x0(r19), 0, 0
    li r30, 0x0
    lfs f2, 0x8(r19)
    stw r30, 0x1fc(r1)
    mr r4, r3
    stw r30, 0x200(r1)
    stw r30, 0x204(r1)
    stw r30, 0x208(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x128(r1)
    bl fn_805F98D0
    lfs f26, lbl_80885CBC
    addi r26, r1, 0x108
    lfs f27, lbl_80885CB8
    addi r29, r1, 0xbc
    lfs f30, lbl_80885D18
    addi r28, r1, 0xa4
    lfs f29, lbl_80885D10
    addi r27, r1, 0x114
    lfs f28, lbl_80885D14
    addi r25, r1, 0x140
    lfs f31, lbl_80885D04
    addi r24, r1, 0x14c
    addi r22, r1, 0x130
    addi r23, r1, 0xf8
    li r19, 0x0
    lis r31, jumptable_8078BC14@ha
    b lbl_fn_803CB820_00001270
lbl_fn_803CB820_00000A28:
    lwz r0, 0xd0(r17)
    lwz r4, 0xc8(r17)
    add r3, r0, r30
    lwzx r0, r30, r0
    lwz r3, 0x4(r3)
    mulli r0, r0, 0x30
    add r21, r4, r0
    lwz r0, 0x2c(r21)
    mulli r3, r3, 0x30
    cmpwi r0, 0x0
    add r20, r4, r3
    beq lbl_fn_803CB820_00001268
    lwz r0, 0x55c(r18)
    cmpwi r0, 0x6
    bne lbl_fn_803CB820_00000A9C
    lwz r0, 0x560(r18)
    cmpwi r0, 0x68
    bne lbl_fn_803CB820_00000A80
    lwz r0, 0x14(r21)
    cmpwi r0, 0x4
    bne lbl_fn_803CB820_00001268
    b lbl_fn_803CB820_00000AA8
lbl_fn_803CB820_00000A80:
    lwz r0, 0x14(r21)
    cmpwi r0, 0x6
    bne lbl_fn_803CB820_00001268
    lwz r0, 0x48(r18)
    cmpwi r0, 0x2
    bne lbl_fn_803CB820_00001268
    b lbl_fn_803CB820_00000AA8
lbl_fn_803CB820_00000A9C:
    lwz r0, 0x14(r21)
    cmpwi r0, 0x6
    beq lbl_fn_803CB820_00001268
lbl_fn_803CB820_00000AA8:
    lfs f3, 0xc(r21)
    addi r3, r1, 0xc8
    lfs f0, 0x138(r1)
    lfs f5, 0x8(r21)
    fsubs f6, f3, f0
    lfs f4, 0x134(r1)
    lfs f3, 0x4(r21)
    lfs f0, 0x130(r1)
    fsubs f4, f5, f4
    stfs f6, 0xd0(r1)
    fsubs f0, f3, f0
    stfs f4, 0xcc(r1)
    stfs f0, 0xc8(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f31
    bgt lbl_fn_803CB820_00001268
    lfs f3, 0xc(r20)
    addi r3, r1, 0x114
    lfs f0, 0xc(r21)
    mr r4, r3
    lfs f5, 0x8(r20)
    fsubs f6, f3, f0
    lfs f4, 0x8(r21)
    lfs f3, 0x4(r20)
    lfs f0, 0x4(r21)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x118(r1)
    stfs f0, 0x114(r1)
    stfs f6, 0x11c(r1)
    bl fn_805F98D0
    lwz r0, 0x14(r21)
    cmplwi r0, 0xc
    bgt lbl_fn_803CB820_00000C78
    addi r3, r31, jumptable_8078BC14@l
    slwi r0, r0, 2
    lwzx r3, r3, r0
    mtctr r3
    bctr
    stfs f26, 0xb0(r1)
    addi r3, r1, 0x114
    addi r4, r1, 0xb0
    addi r5, r1, 0xbc
    stfs f27, 0xb4(r1)
    stfs f26, 0xb8(r1)
    bl fn_805F99B0
    psq_l f1, 0x0(r29), 0, 0
    mr r4, r26
    lfs f2, 0xc4(r1)
    addi r3, r1, 0x120
    psq_st f1, 0x0(r26), 0, 0
    stfs f2, 0x110(r1)
    bl fn_805F9990
    fcmpo cr0, f1, f29
    blt lbl_fn_803CB820_00001268
    b lbl_fn_803CB820_00000C78
    stfs f26, 0x98(r1)
    addi r3, r1, 0x114
    addi r4, r1, 0x98
    addi r5, r1, 0xa4
    stfs f27, 0x9c(r1)
    stfs f26, 0xa0(r1)
    bl fn_805F99B0
    psq_l f1, 0x0(r28), 0, 0
    mr r4, r26
    lfs f2, 0xac(r1)
    addi r3, r1, 0x120
    psq_st f1, 0x0(r26), 0, 0
    stfs f2, 0x110(r1)
    bl fn_805F9990
    fcmpo cr0, f1, f28
    blt lbl_fn_803CB820_00001268
    b lbl_fn_803CB820_00000C78
    psq_l f1, 0x0(r27), 0, 0
    mr r4, r26
    lfs f2, 0x11c(r1)
    addi r3, r1, 0x120
    psq_st f1, 0x0(r26), 0, 0
    stfs f2, 0x110(r1)
    bl fn_805F9990
    fabs f0, f1
    frsp f0, f0
    fcmpo cr0, f0, f29
    blt lbl_fn_803CB820_00001268
    b lbl_fn_803CB820_00000C78
    psq_l f1, 0x0(r27), 0, 0
    mr r4, r26
    lfs f2, 0x11c(r1)
    addi r3, r1, 0x120
    psq_st f1, 0x0(r26), 0, 0
    stfs f2, 0x110(r1)
    bl fn_805F9990
    fcmpo cr0, f1, f29
    blt lbl_fn_803CB820_00001268
    b lbl_fn_803CB820_00000C78
    lwz r0, 0x18(r21)
    cmpwi r0, 0x1
    bne lbl_fn_803CB820_00000C3C
    lwz r0, 0x48(r18)
    cmpwi r0, 0x0
    beq lbl_fn_803CB820_00001268
lbl_fn_803CB820_00000C3C:
    psq_l f1, 0x0(r27), 0, 0
    mr r3, r26
    psq_st f1, 0x0(r26), 0, 0
    mr r4, r26
    lfs f2, 0x11c(r1)
    stfs f2, 0x110(r1)
    stfs f26, 0x10c(r1)
    bl fn_805F98D0
    mr r4, r26
    addi r3, r1, 0x120
    bl fn_805F9990
    fabs f0, f1
    frsp f0, f0
    fcmpo cr0, f0, f29
    blt lbl_fn_803CB820_00001268
lbl_fn_803CB820_00000C78:
    psq_l f1, 0x4(r21), 0, 0
    lfs f2, 0xc(r21)
    stfs f2, 0x148(r1)
    lfs f5, 0x13c(r1)
    psq_st f1, 0x0(r25), 0, 0
    psq_l f1, 0x4(r20), 0, 0
    lfs f2, 0xc(r20)
    stfs f2, 0x154(r1)
    lfs f3, 0x144(r1)
    psq_st f1, 0x0(r24), 0, 0
    psq_l f1, 0x0(r22), 0, 0
    lfs f4, 0x5a8(r18)
    lfs f0, 0x150(r1)
    fadds f4, f4, f5
    lfs f2, 0x138(r1)
    psq_st f1, 0x0(r23), 0, 0
    fadds f3, f3, f4
    stfs f2, 0x100(r1)
    fadds f0, f0, f4
    stfs f3, 0x144(r1)
    stfs f0, 0x150(r1)
    stfs f5, 0x104(r1)
    lwz r0, 0x14(r21)
    cmpwi r0, 0xa
    bne lbl_fn_803CB820_00000CE4
    fadds f0, f5, f30
    stfs f0, 0x104(r1)
lbl_fn_803CB820_00000CE4:
    addi r3, r1, 0x1c8
    addi r4, r1, 0x140
    addi r5, r1, 0xf8
    bl fn_8005361C
    cmpwi r3, 0x0
    beq lbl_fn_803CB820_00001268
    lfs f2, 0x110(r1)
    addi r3, r1, 0x108
    lfs f0, lbl_80885D1C
    addi r19, r1, 0xec
    fabs f3, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r19), 0, 0
    frsp f3, f3
    stfs f2, 0xf4(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_803CB820_00000D4C
    lfs f3, 0xec(r1)
    lfs f0, lbl_80885CBC
    fcmpo cr0, f3, f0
    ble lbl_fn_803CB820_00000D40
    lfs f0, lbl_80885D20
    b lbl_fn_803CB820_00000D44
lbl_fn_803CB820_00000D40:
    lfs f0, lbl_80885D24
lbl_fn_803CB820_00000D44:
    stfs f0, 0x48(r1)
    b lbl_fn_803CB820_00000D60
lbl_fn_803CB820_00000D4C:
    frsp f2, f2
    lfs f1, 0xec(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_803CB820_00000D60:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x158
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80885CBC
    addi r4, r1, 0x38
    lfs f27, 0x160(r1)
    mr r5, r4
    lfs f26, 0x15c(r1)
    addi r3, r1, 0x188
    lfs f13, 0x158(r1)
    lfs f12, 0x170(r1)
    lfs f11, 0x16c(r1)
    lfs f10, 0x168(r1)
    lfs f9, 0x180(r1)
    lfs f8, 0x17c(r1)
    lfs f7, 0x178(r1)
    lfs f6, 0x184(r1)
    lfs f5, 0x174(r1)
    lfs f4, 0x164(r1)
    lfs f0, lbl_80885CB8
    psq_l f1, 0x0(r19), 0, 0
    lfs f2, 0xf4(r1)
    stfs f3, 0x1b8(r1)
    stfs f3, 0x1bc(r1)
    stfs f3, 0x1c0(r1)
    stfs f0, 0x1c4(r1)
    stfs f13, 0x8(r1)
    stfs f26, 0xc(r1)
    stfs f27, 0x10(r1)
    stfs f13, 0x188(r1)
    stfs f26, 0x18c(r1)
    stfs f27, 0x190(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0x198(r1)
    stfs f11, 0x19c(r1)
    stfs f12, 0x1a0(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0x1a8(r1)
    stfs f8, 0x1ac(r1)
    stfs f9, 0x1b0(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0x194(r1)
    stfs f5, 0x1a4(r1)
    stfs f6, 0x1b4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80885D1C
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_803CB820_00000E7C
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80885CBC
    fcmpo cr0, f3, f0
    ble lbl_fn_803CB820_00000E6C
    lfs f0, lbl_80885D20
    b lbl_fn_803CB820_00000E70
lbl_fn_803CB820_00000E6C:
    lfs f0, lbl_80885D24
lbl_fn_803CB820_00000E70:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_803CB820_00000E90
lbl_fn_803CB820_00000E7C:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_803CB820_00000E90:
    addi r3, r1, 0x44
    lfs f2, lbl_80885CBC
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r19), 0, 0
    stfs f2, 0xf4(r1)
    lwz r0, 0x14(r21)
    stfs f2, 0x4c(r1)
    cmplwi r0, 0xc
    bgt lbl_fn_803CB820_00001260
    lis r3, jumptable_8078BBE0@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_8078BBE0@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    frsp f2, f2
    psq_st f1, 0x534(r18), 0, 0
    mr r3, r18
    stfs f2, 0x53c(r18)
    bl fn_80161E58
    b lbl_fn_803CB820_00001260
    frsp f2, f2
    psq_st f1, 0x534(r18), 0, 0
    mr r3, r18
    addi r4, r21, 0x4
    stfs f2, 0x53c(r18)
    addi r5, r20, 0x4
    bl fn_80162140
    b lbl_fn_803CB820_00001260
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    bne lbl_fn_803CB820_00001260
    mr r3, r18
    addi r4, r1, 0xec
    bl fn_801698E4
    b lbl_fn_803CB820_00001260
    mr r3, r18
    addi r4, r1, 0xec
    bl fn_80162428
    b lbl_fn_803CB820_00001260
    mr r3, r18
    addi r4, r1, 0xec
    bl fn_80165F54
    b lbl_fn_803CB820_00001260
    lfs f3, 0xc(r21)
    addi r3, r1, 0x8c
    lfs f0, 0x530(r18)
    lfs f5, 0x8(r21)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r18)
    lfs f3, 0x4(r21)
    lfs f0, 0x528(r18)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x90(r1)
    stfs f0, 0x8c(r1)
    stfs f6, 0x94(r1)
    bl fn_805F9920
    lfs f3, 0xc(r20)
    fmr f31, f1
    lfs f0, 0x530(r18)
    addi r3, r1, 0x80
    lfs f5, 0x8(r20)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r18)
    lfs f3, 0x4(r20)
    lfs f0, 0x528(r18)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x84(r1)
    stfs f0, 0x80(r1)
    stfs f6, 0x88(r1)
    bl fn_805F9920
    fmr f30, f1
    addi r3, r1, 0x120
    addi r4, r1, 0x108
    li r19, 0x0
    bl fn_805F9990
    lfs f0, lbl_80885CBC
    fcmpo cr0, f1, f0
    ble lbl_fn_803CB820_0000100C
    fcmpo cr0, f31, f30
    bge lbl_fn_803CB820_00001040
    psq_l f1, 0x4(r21), 0, 0
    addi r3, r1, 0xe0
    lfs f2, 0xc(r21)
    addi r4, r1, 0xd4
    stfs f2, 0xe8(r1)
    li r19, 0x1
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x4(r20), 0, 0
    lfs f2, 0xc(r20)
    stfs f2, 0xdc(r1)
    psq_st f1, 0x0(r4), 0, 0
    b lbl_fn_803CB820_00001040
lbl_fn_803CB820_0000100C:
    fcmpo cr0, f31, f30
    ble lbl_fn_803CB820_00001040
    psq_l f1, 0x4(r20), 0, 0
    addi r3, r1, 0xe0
    lfs f2, 0xc(r20)
    addi r4, r1, 0xd4
    stfs f2, 0xe8(r1)
    li r19, 0x1
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x4(r21), 0, 0
    lfs f2, 0xc(r21)
    stfs f2, 0xdc(r1)
    psq_st f1, 0x0(r4), 0, 0
lbl_fn_803CB820_00001040:
    cmpwi r19, 0x0
    beq lbl_fn_803CB820_00001260
    lwz r0, 0x14(r21)
    cmpwi r0, 0x2
    bne lbl_fn_803CB820_00001068
    mr r3, r18
    addi r4, r1, 0xe0
    addi r5, r1, 0xd4
    bl fn_80162720
    b lbl_fn_803CB820_00001260
lbl_fn_803CB820_00001068:
    cmpwi r0, 0x3
    bne lbl_fn_803CB820_0000113C
    lwz r3, 0x64(r17)
    lfs f26, lbl_80885CCC
    cmpwi r3, 0x0
    beq lbl_fn_803CB820_00001124
    lwz r0, 0x48(r3)
    cmpwi r0, 0x2
    bne lbl_fn_803CB820_00001124
    lwz r0, 0x4c(r3)
    cmpwi r0, 0x4
    bne lbl_fn_803CB820_00001124
    lwz r0, 0x50(r3)
    cmpwi r0, 0x1
    bne lbl_fn_803CB820_00001124
    lfs f7, lbl_80885D28
    addi r3, r1, 0x74
    lfs f6, lbl_80885D2C
    lfs f5, lbl_80885D30
    lfs f4, 0xe8(r1)
    lfs f3, 0xe4(r1)
    lfs f0, 0xe0(r1)
    fsubs f4, f4, f5
    fsubs f3, f3, f6
    stfs f7, 0x68(r1)
    fsubs f0, f0, f7
    stfs f6, 0x6c(r1)
    stfs f5, 0x70(r1)
    stfs f0, 0x74(r1)
    stfs f3, 0x78(r1)
    stfs f4, 0x7c(r1)
    bl fn_805F9920
    lfs f0, lbl_80885CB8
    fcmpo cr0, f1, f0
    bge lbl_fn_803CB820_00001124
    lfs f5, lbl_80885D38
    lfs f6, lbl_80885D34
    lfs f4, lbl_80885D3C
    lfs f3, lbl_80885D40
    lfs f0, lbl_80885D44
    stfs f6, 0xe0(r1)
    lfs f26, lbl_80885D10
    stfs f5, 0xe4(r1)
    stfs f4, 0xe8(r1)
    stfs f3, 0xd4(r1)
    stfs f5, 0xd8(r1)
    stfs f0, 0xdc(r1)
lbl_fn_803CB820_00001124:
    fmr f1, f26
    mr r3, r18
    addi r4, r1, 0xe0
    addi r5, r1, 0xd4
    bl fn_80162CF0
    b lbl_fn_803CB820_00001260
lbl_fn_803CB820_0000113C:
    cmpwi r0, 0x4
    bne lbl_fn_803CB820_00001158
    mr r3, r18
    addi r4, r1, 0xe0
    addi r5, r1, 0xd4
    bl fn_80162FE8
    b lbl_fn_803CB820_00001260
lbl_fn_803CB820_00001158:
    cmpwi r0, 0x7
    bne lbl_fn_803CB820_00001174
    mr r3, r18
    addi r4, r1, 0xe0
    addi r5, r1, 0xd4
    bl fn_801632D0
    b lbl_fn_803CB820_00001260
lbl_fn_803CB820_00001174:
    cmpwi r0, 0x8
    bne lbl_fn_803CB820_00001190
    mr r3, r18
    addi r4, r1, 0xe0
    addi r5, r1, 0xd4
    bl fn_801635B8
    b lbl_fn_803CB820_00001260
lbl_fn_803CB820_00001190:
    cmpwi r0, 0xa
    bne lbl_fn_803CB820_00001260
    mr r3, r18
    addi r4, r1, 0xe0
    addi r5, r1, 0xd4
    bl fn_80162A08
    b lbl_fn_803CB820_00001260
    lfs f3, 0xc(r21)
    addi r3, r1, 0x5c
    lfs f0, 0x530(r18)
    lfs f5, 0x8(r21)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r18)
    lfs f3, 0x4(r21)
    lfs f0, 0x528(r18)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x60(r1)
    stfs f0, 0x5c(r1)
    stfs f6, 0x64(r1)
    bl fn_805F9920
    lfs f3, 0xc(r20)
    fmr f30, f1
    lfs f0, 0x530(r18)
    addi r3, r1, 0x50
    lfs f5, 0x8(r20)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r18)
    lfs f3, 0x4(r20)
    lfs f0, 0x528(r18)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x54(r1)
    stfs f0, 0x50(r1)
    stfs f6, 0x58(r1)
    bl fn_805F9920
    fmr f31, f1
    addi r3, r1, 0x120
    addi r4, r1, 0x108
    bl fn_805F9990
    lfs f0, lbl_80885CBC
    fcmpo cr0, f1, f0
    ble lbl_fn_803CB820_00001260
    fcmpo cr0, f30, f31
    bge lbl_fn_803CB820_00001260
    lwz r0, 0x14(r21)
    cmpwi r0, 0xc
    bne lbl_fn_803CB820_00001260
    mr r3, r18
    addi r4, r21, 0x4
    addi r5, r20, 0x4
    bl fn_801638A0
lbl_fn_803CB820_00001260:
    li r3, 0x1
    b lbl_fn_803CB820_00001280
lbl_fn_803CB820_00001268:
    addi r19, r19, 0x1
    addi r30, r30, 0x8
lbl_fn_803CB820_00001270:
    lwz r0, 0xcc(r17)
    cmplw r19, r0
    blt lbl_fn_803CB820_00000A28
    li r3, 0x0
lbl_fn_803CB820_00001280:
    addi r11, r1, 0x260
    psq_l f31, 0x2b8(r1), 0, 0
    lfd f31, 0x2b0(r1)
    psq_l f30, 0x2a8(r1), 0, 0
    lfd f30, 0x2a0(r1)
    psq_l f29, 0x298(r1), 0, 0
    lfd f29, 0x290(r1)
    psq_l f28, 0x288(r1), 0, 0
    lfd f28, 0x280(r1)
    psq_l f27, 0x278(r1), 0, 0
    lfd f27, 0x270(r1)
    psq_l f26, 0x268(r1), 0, 0
    lfd f26, 0x260(r1)
    bl _restgpr_17
    lwz r0, 0x2c4(r1)
    mtlr r0
    addi r1, r1, 0x2c0
    blr
}

asm void fn_803CC198(void)
{
    nofralloc
    lfs f1, 0x620(r6)
    lfs f2, lbl_80885CCC
    b fn_803CC1A4
}

asm void fn_803CC1A4(void)
{
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    stw r0, 0xd4(r1)
    addi r11, r1, 0x80
    stfd f31, 0xc0(r1)
    psq_st f31, 0xc8(r1), 0, 0
    stfd f30, 0xb0(r1)
    psq_st f30, 0xb8(r1), 0, 0
    stfd f29, 0xa0(r1)
    psq_st f29, 0xa8(r1), 0, 0
    stfd f28, 0x90(r1)
    psq_st f28, 0x98(r1), 0, 0
    stfd f27, 0x80(r1)
    psq_st f27, 0x88(r1), 0, 0
    bl _savegpr_22
    fmr f30, f1
    lfs f28, lbl_80885CBC
    fmr f31, f2
    lfs f29, lbl_80885CB8
    lfs f27, lbl_80885D04
    mr r23, r3
    mr r24, r4
    mr r25, r5
    addi r31, r1, 0x38
    addi r30, r1, 0x44
    addi r28, r1, 0x14
    addi r29, r1, 0x2c
    li r26, 0x0
    li r22, 0x0
    b lbl_fn_803CC1A4_0000149C
lbl_fn_803CC1A4_0000134C:
    lwz r0, 0xb8(r23)
    add r27, r0, r22
    lwz r0, 0x8(r27)
    cmpwi r0, 0x0
    beq lbl_fn_803CC1A4_00001494
    lwz r0, 0x0(r27)
    lwz r3, 0xb0(r23)
    slwi r0, r0, 6
    add r3, r3, r0
    lwz r0, 0x14(r3)
    cmpwi r0, 0x1
    bne lbl_fn_803CC1A4_00001494
    lfs f3, 0x14(r27)
    addi r3, r1, 0x20
    lfs f0, 0x8(r24)
    lfs f5, 0x10(r27)
    fsubs f6, f3, f0
    lfs f4, 0x4(r24)
    lfs f3, 0xc(r27)
    lfs f0, 0x0(r24)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x24(r1)
    stfs f0, 0x20(r1)
    stfs f6, 0x28(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f27
    bgt lbl_fn_803CC1A4_00001494
    lwz r0, 0x0(r27)
    addi r3, r1, 0x2c
    lwz r5, 0xb0(r23)
    mr r4, r3
    slwi r0, r0, 6
    add r6, r5, r0
    lfs f2, 0xc(r6)
    psq_l f1, 0x4(r6), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    frsp f3, f2
    stfs f2, 0x40(r1)
    lfs f4, 0x3c(r1)
    lwz r0, 0x4(r27)
    lfs f0, 0x38(r1)
    slwi r0, r0, 6
    add r5, r5, r0
    lfs f2, 0xc(r5)
    psq_l f1, 0x4(r5), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    fsubs f6, f2, f3
    lfs f5, 0x48(r1)
    lfs f3, 0x44(r1)
    fsubs f4, f5, f4
    stfs f2, 0x4c(r1)
    fsubs f0, f3, f0
    stfs f4, 0x30(r1)
    stfs f0, 0x2c(r1)
    stfs f6, 0x34(r1)
    bl fn_805F98D0
    stfs f28, 0x8(r1)
    addi r3, r1, 0x2c
    addi r4, r1, 0x8
    addi r5, r1, 0x14
    stfs f29, 0xc(r1)
    stfs f28, 0x10(r1)
    bl fn_805F99B0
    psq_l f1, 0x0(r28), 0, 0
    mr r3, r29
    lfs f2, 0x1c(r1)
    mr r4, r25
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x34(r1)
    bl fn_805F9990
    fcmpo cr0, f1, f31
    blt lbl_fn_803CC1A4_00001494
    mr r3, r24
    mr r4, r31
    li r5, 0x0
    bl fn_80050A1C
    fmuls f0, f30, f30
    fcmpo cr0, f1, f0
    bgt lbl_fn_803CC1A4_00001494
    li r3, 0x1
    b lbl_fn_803CC1A4_000014AC
lbl_fn_803CC1A4_00001494:
    addi r26, r26, 0x1
    addi r22, r22, 0x18
lbl_fn_803CC1A4_0000149C:
    lwz r0, 0xb4(r23)
    cmplw r26, r0
    blt lbl_fn_803CC1A4_0000134C
    li r3, 0x0
lbl_fn_803CC1A4_000014AC:
    addi r11, r1, 0x80
    psq_l f31, 0xc8(r1), 0, 0
    lfd f31, 0xc0(r1)
    psq_l f30, 0xb8(r1), 0, 0
    lfd f30, 0xb0(r1)
    psq_l f29, 0xa8(r1), 0, 0
    lfd f29, 0xa0(r1)
    psq_l f28, 0x98(r1), 0, 0
    lfd f28, 0x90(r1)
    psq_l f27, 0x88(r1), 0, 0
    lfd f27, 0x80(r1)
    bl _restgpr_22
    lwz r0, 0xd4(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}

asm void fn_803CC3BC(void)
{
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    stw r0, 0xd4(r1)
    addi r11, r1, 0x80
    stfd f31, 0xc0(r1)
    psq_st f31, 0xc8(r1), 0, 0
    stfd f30, 0xb0(r1)
    psq_st f30, 0xb8(r1), 0, 0
    stfd f29, 0xa0(r1)
    psq_st f29, 0xa8(r1), 0, 0
    stfd f28, 0x90(r1)
    psq_st f28, 0x98(r1), 0, 0
    stfd f27, 0x80(r1)
    psq_st f27, 0x88(r1), 0, 0
    bl _savegpr_22
    lis r7, lbl_807500C8@ha
    mr r23, r3
    lfd f1, lbl_807500C8@l(r7)
    mr r24, r4
    mr r25, r5
    mr r22, r6
    bl fn_8068A850
    frsp f31, f1
    lfs f30, 0x620(r22)
    lfs f28, lbl_80885CBC
    addi r31, r1, 0x38
    lfs f29, lbl_80885CB8
    addi r30, r1, 0x44
    lfs f27, lbl_80885D04
    addi r28, r1, 0x14
    addi r29, r1, 0x2c
    li r26, 0x0
    li r22, 0x0
    b lbl_fn_803CC3BC_000016C4
lbl_fn_803CC3BC_00001574:
    lwz r0, 0xb8(r23)
    add r27, r0, r22
    lwz r0, 0x8(r27)
    cmpwi r0, 0x0
    beq lbl_fn_803CC3BC_000016BC
    lwz r0, 0x0(r27)
    lwz r3, 0xb0(r23)
    slwi r0, r0, 6
    add r3, r3, r0
    lwz r0, 0x14(r3)
    cmpwi r0, 0x0
    bne lbl_fn_803CC3BC_000016BC
    lfs f3, 0x14(r27)
    addi r3, r1, 0x20
    lfs f0, 0x8(r24)
    lfs f5, 0x10(r27)
    fsubs f6, f3, f0
    lfs f4, 0x4(r24)
    lfs f3, 0xc(r27)
    lfs f0, 0x0(r24)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x24(r1)
    stfs f0, 0x20(r1)
    stfs f6, 0x28(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f27
    bgt lbl_fn_803CC3BC_000016BC
    lwz r0, 0x0(r27)
    addi r3, r1, 0x2c
    lwz r5, 0xb0(r23)
    mr r4, r3
    slwi r0, r0, 6
    add r6, r5, r0
    lfs f2, 0xc(r6)
    psq_l f1, 0x4(r6), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    frsp f3, f2
    stfs f2, 0x40(r1)
    lfs f4, 0x3c(r1)
    lwz r0, 0x4(r27)
    lfs f0, 0x38(r1)
    slwi r0, r0, 6
    add r5, r5, r0
    lfs f2, 0xc(r5)
    psq_l f1, 0x4(r5), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    fsubs f6, f2, f3
    lfs f5, 0x48(r1)
    lfs f3, 0x44(r1)
    fsubs f4, f5, f4
    stfs f2, 0x4c(r1)
    fsubs f0, f3, f0
    stfs f4, 0x30(r1)
    stfs f0, 0x2c(r1)
    stfs f6, 0x34(r1)
    bl fn_805F98D0
    stfs f28, 0x8(r1)
    addi r3, r1, 0x2c
    addi r4, r1, 0x8
    addi r5, r1, 0x14
    stfs f29, 0xc(r1)
    stfs f28, 0x10(r1)
    bl fn_805F99B0
    psq_l f1, 0x0(r28), 0, 0
    mr r3, r29
    lfs f2, 0x1c(r1)
    mr r4, r25
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x34(r1)
    bl fn_805F9990
    fcmpo cr0, f1, f31
    blt lbl_fn_803CC3BC_000016BC
    mr r3, r24
    mr r4, r31
    li r5, 0x0
    bl fn_80050A1C
    fmuls f0, f30, f30
    fcmpo cr0, f1, f0
    bgt lbl_fn_803CC3BC_000016BC
    li r3, 0x1
    b lbl_fn_803CC3BC_000016D4
lbl_fn_803CC3BC_000016BC:
    addi r26, r26, 0x1
    addi r22, r22, 0x18
lbl_fn_803CC3BC_000016C4:
    lwz r0, 0xb4(r23)
    cmplw r26, r0
    blt lbl_fn_803CC3BC_00001574
    li r3, 0x0
lbl_fn_803CC3BC_000016D4:
    addi r11, r1, 0x80
    psq_l f31, 0xc8(r1), 0, 0
    lfd f31, 0xc0(r1)
    psq_l f30, 0xb8(r1), 0, 0
    lfd f30, 0xb0(r1)
    psq_l f29, 0xa8(r1), 0, 0
    lfd f29, 0xa0(r1)
    psq_l f28, 0x98(r1), 0, 0
    lfd f28, 0x90(r1)
    psq_l f27, 0x88(r1), 0, 0
    lfd f27, 0x80(r1)
    bl _restgpr_22
    lwz r0, 0xd4(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}

asm void fn_803CC5E4(void)
{
    nofralloc
    cmpwi r4, 0x1
    bne lbl_fn_803CC5E4_00001758
    lwz r0, 0x80(r3)
    li r4, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_803CC5E4_000017DC
lbl_fn_803CC5E4_00001730:
    lwz r6, 0x84(r3)
    lwzx r0, r6, r4
    cmpw r5, r0
    bne lbl_fn_803CC5E4_0000174C
    add r3, r6, r4
    lwz r3, 0x20(r3)
    blr
lbl_fn_803CC5E4_0000174C:
    addi r4, r4, 0x148
    bdnz lbl_fn_803CC5E4_00001730
    b lbl_fn_803CC5E4_000017DC
lbl_fn_803CC5E4_00001758:
    cmpwi r4, 0x2
    bne lbl_fn_803CC5E4_0000179C
    lwz r0, 0x88(r3)
    li r4, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_803CC5E4_000017DC
lbl_fn_803CC5E4_00001774:
    lwz r6, 0x8c(r3)
    lwzx r0, r6, r4
    cmpw r5, r0
    bne lbl_fn_803CC5E4_00001790
    add r3, r6, r4
    lwz r3, 0x20(r3)
    blr
lbl_fn_803CC5E4_00001790:
    addi r4, r4, 0x148
    bdnz lbl_fn_803CC5E4_00001774
    b lbl_fn_803CC5E4_000017DC
lbl_fn_803CC5E4_0000179C:
    cmpwi r4, 0x3
    bne lbl_fn_803CC5E4_000017DC
    lwz r0, 0x90(r3)
    li r4, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_803CC5E4_000017DC
lbl_fn_803CC5E4_000017B8:
    lwz r6, 0x94(r3)
    lwzx r0, r6, r4
    cmpw r5, r0
    bne lbl_fn_803CC5E4_000017D4
    add r3, r6, r4
    lwz r3, 0x20(r3)
    blr
lbl_fn_803CC5E4_000017D4:
    addi r4, r4, 0x148
    bdnz lbl_fn_803CC5E4_000017B8
lbl_fn_803CC5E4_000017DC:
    li r3, -0x1
    blr
}

asm void fn_803CC6B4(void)
{
    nofralloc
    cmpwi r4, 0x2710
    bge lbl_fn_803CC6B4_000017F4
    addi r3, r3, 0x11c
    b fn_803B3B38
lbl_fn_803CC6B4_000017F4:
    lwz r3, lbl_8087F430
    addi r3, r3, 0x54f4
    b fn_803B3B38
}

asm void fn_803CC6D0(void)
{
    nofralloc
    lwz r0, 0xdc(r3)
    li r7, 0x0
    li r5, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_803CC6D0_00001840
lbl_fn_803CC6D0_00001818:
    lwz r6, 0xe0(r3)
    lwzx r0, r6, r5
    cmpw r4, r0
    bne lbl_fn_803CC6D0_00001834
    slwi r0, r7, 5
    add r3, r6, r0
    blr
lbl_fn_803CC6D0_00001834:
    addi r5, r5, 0x20
    addi r7, r7, 0x1
    bdnz lbl_fn_803CC6D0_00001818
lbl_fn_803CC6D0_00001840:
    li r3, 0x0
    blr
}

asm void fn_803CC718(void)
{
    nofralloc
    li r8, 0x0
    li r7, 0x0
    b lbl_fn_803CC718_00001874
lbl_fn_803CC718_00001854:
    lwz r0, 0xe0(r3)
    add r6, r0, r7
    lwz r0, 0x8(r6)
    cmplw r0, r4
    bne lbl_fn_803CC718_0000186C
    stw r5, 0x1c(r6)
lbl_fn_803CC718_0000186C:
    addi r7, r7, 0x20
    addi r8, r8, 0x1
lbl_fn_803CC718_00001874:
    lwz r0, 0xdc(r3)
    cmplw r8, r0
    blt lbl_fn_803CC718_00001854
    blr
}

asm void fn_803CC754(void)
{
    nofralloc
    mulli r0, r5, 0x148
    lwz r4, 0x84(r4)
    add r4, r4, r0
    psq_l f1, 0x4(r4), 0, 0
    lfs f2, 0xc(r4)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
    blr
}

asm void fn_803CC774(void)
{
    nofralloc
    lwz r3, 0x134(r3)
    b fn_803ABFD4
}

asm void fn_803CC77C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lwz r3, 0x134(r3)
    stw r0, 0x14(r1)
    cmpwi r3, 0x0
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    beq lbl_fn_803CC77C_000018D8
    bl fn_803AC088
    mr r31, r3
lbl_fn_803CC77C_000018D8:
    lwz r3, lbl_8087F408
    cmpwi r3, 0x0
    beq lbl_fn_803CC77C_000019A4
    lwz r30, 0x48(r3)
    b lbl_fn_803CC77C_0000199C
lbl_fn_803CC77C_000018EC:
    lwz r6, 0x38(r30)
    li r4, 0x0
    li r3, 0x0
    li r5, 0x0
    rlwinm r0, r6, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_803CC77C_00001918
    clrlwi r0, r6, 31
    cmplwi r0, 0x1
    beq lbl_fn_803CC77C_00001918
    li r5, 0x1
lbl_fn_803CC77C_00001918:
    cmpwi r5, 0x0
    beq lbl_fn_803CC77C_00001934
    lwz r0, 0x7e0(r30)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_803CC77C_00001934
    li r3, 0x1
lbl_fn_803CC77C_00001934:
    cmpwi r3, 0x0
    beq lbl_fn_803CC77C_00001968
    lwz r0, 0x55c(r30)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_803CC77C_0000195C
    lwz r0, 0x560(r30)
    cmpwi r0, 0x1c
    bne lbl_fn_803CC77C_0000195C
    li r3, 0x1
lbl_fn_803CC77C_0000195C:
    cmpwi r3, 0x0
    bne lbl_fn_803CC77C_00001968
    li r4, 0x1
lbl_fn_803CC77C_00001968:
    cmpwi r4, 0x0
    beq lbl_fn_803CC77C_00001998
    lwz r0, 0x54c(r30)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    beq lbl_fn_803CC77C_00001998
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0xf4(r12)
    mtctr r12
    bctrl
    add r31, r31, r3
lbl_fn_803CC77C_00001998:
    lwz r30, 0x14ac(r30)
lbl_fn_803CC77C_0000199C:
    cmpwi r30, 0x0
    bne lbl_fn_803CC77C_000018EC
lbl_fn_803CC77C_000019A4:
    lwz r3, lbl_8087F4A0
    cmpwi r3, 0x0
    beq lbl_fn_803CC77C_000019F4
    lis r4, 0x1
    li r5, 0x1
    subi r4, r4, 0x11b8
    bl fn_803EEE10
    cmpwi r3, 0x0
    beq lbl_fn_803CC77C_000019D0
    bl fn_80435CBC
    add r31, r31, r3
lbl_fn_803CC77C_000019D0:
    lis r4, 0x1
    lwz r3, lbl_8087F4A0
    subi r4, r4, 0x600
    li r5, 0x1
    bl fn_803EEE10
    cmpwi r3, 0x0
    beq lbl_fn_803CC77C_000019F4
    bl fn_8043A530
    add r31, r31, r3
lbl_fn_803CC77C_000019F4:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_803CC77C_00001A14
    li r4, 0xa1e
    bl fn_80370174
    cmpwi r3, 0x0
    ble lbl_fn_803CC77C_00001A14
    li r31, 0x0
lbl_fn_803CC77C_00001A14:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
