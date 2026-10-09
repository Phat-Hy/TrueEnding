#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_20(void);
extern void _restgpr_23(void);
extern void _savegpr_20(void);
extern void _savegpr_23(void);
extern void dtor_80084684(void);
extern void fn_8000D430(void);
extern void fn_8004B290(void);
extern void fn_8004B338(void);
extern void fn_8004B378(void);
extern void fn_8005E3E4(void);
extern void fn_8005E7F4(void);
extern void fn_8005EDF0(void);
extern void fn_8005EE38(void);
extern void fn_80061824(void);
extern void fn_8006EF48(void);
extern void fn_8007FAF0(void);
extern void fn_80084320(void);
extern void fn_8008771C(void);
extern void fn_80087994(void);
extern void fn_8008937C(void);
extern void fn_800897D8(void);
extern void fn_8008AD4C(void);
extern void fn_8008B140(void);
extern void fn_80092954(void);
extern void fn_80096E94(void);
extern void fn_800971D4(void);
extern void fn_800BDB58(void);
extern void fn_800D1D3C(void);
extern void fn_800D1E9C(void);
extern void fn_800D246C(void);
extern void fn_800D3FA4(void);
extern void fn_800D5738(void);
extern void fn_800D5808(void);
extern void fn_800D5908(void);
extern void fn_800D59B8(void);
extern void fn_800DC6B4(void);
extern void fn_800DD3FC(void);
extern void fn_801F3FF8(void);
extern void fn_80211480(void);
extern void fn_80370174(void);
extern void fn_80473E74(void);
extern void fn_80473E8C(void);
extern void fn_80473F50(void);
extern void fn_804A9EB4(void);
extern void fn_804AA490(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9940(void);
extern void fn_8068AEA4(void);
extern void fn_80695D84(void);

/* External data declarations */
extern u8 lbl_807573B8[];
extern u8 lbl_80757640[];
extern u8 lbl_80757648[];
extern u8 lbl_8075765C[];
extern u8 lbl_8078FBB0[];
extern u8 lbl_80790818[];
extern u8 lbl_807C7060[];

/* Small data declarations */
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EEC8;
extern u32 lbl_8087EEE0;
extern u32 lbl_8087EF10;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F1E4;
extern u32 lbl_8087F430;
extern u32 lbl_8087F490;
extern u32 lbl_8087F8A0;
extern u32 lbl_808813D0;
extern u32 lbl_808871D0;
extern u32 lbl_808871E4;
extern u32 lbl_80887218;
extern u32 lbl_80887224;
extern u32 lbl_8088722C;
extern u32 lbl_80887230;
extern u32 lbl_80887234;
extern u32 lbl_80887238;
extern u32 lbl_8088723C;
extern u32 lbl_80887240;
extern u32 lbl_80887244;
extern u32 lbl_80887248;
extern u32 lbl_8088724C;
extern u32 lbl_80887250;
extern u32 lbl_80887254;
extern u32 lbl_80887258;
extern u32 lbl_8088725C;
extern u32 lbl_80887260;
extern u32 lbl_80887264;
extern u32 lbl_80887268;
extern u32 lbl_8088726C;
extern u32 lbl_80887270;
extern u32 lbl_80887274;
extern u32 lbl_80887278;
extern u32 lbl_8088727C;
extern u32 lbl_80887280;
extern u32 lbl_80887284;
extern u32 lbl_80887288;
extern u32 lbl_8088728C;
extern u32 lbl_80887290;
extern u32 lbl_80887294;
extern u32 lbl_80887298;
extern u32 lbl_8088729C;
extern u32 lbl_808872A0;
extern u32 lbl_808872A4;
extern u32 lbl_808872A8;
extern u32 lbl_808872AC;

/* Function declarations */
void fn_804A71F0(void);
void fn_804A7DD4(void);
void fn_804A7EA4(void);
void fn_804A7F18(void);
void fn_804A83E4(void);
void fn_804A8504(void);
void fn_804A8644(void);
void fn_804A88C8(void);
void fn_804A893C(void);
void fn_804A894C(void);

asm void fn_804A71F0(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    addi r11, r1, 0x80
    bl _savegpr_23
    cmpwi r4, 0x0
    lis r0, 0x4330
    stw r0, 0x48(r1)
    mr r23, r3
    mr r24, r4
    mr r31, r5
    stw r0, 0x50(r1)
    mr r28, r6
    mr r29, r7
    beq lbl_fn_804A71F0_00000BCC
    cmpwi r5, 0x0
    bne lbl_fn_804A71F0_00000048
    b lbl_fn_804A71F0_00000BCC
lbl_fn_804A71F0_00000048:
    addi r26, r3, 0xa0
    li r27, 0x0
    li r30, 0x0
    b lbl_fn_804A71F0_000000A8
lbl_fn_804A71F0_00000058:
    lwz r0, 0x4(r26)
    cmplw r0, r24
    bne lbl_fn_804A71F0_000000A0
    lbz r0, 0x8(r26)
    extsb. r0, r0
    bne lbl_fn_804A71F0_00000088
    lwz r0, 0x10(r31)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_804A71F0_000000A0
    li r27, 0x1
    b lbl_fn_804A71F0_000000A0
lbl_fn_804A71F0_00000088:
    lwz r25, 0x4(r31)
    addi r3, r26, 0x8
    bl fn_800DC6B4
    cmplw r25, r3
    bne lbl_fn_804A71F0_000000A0
    li r27, 0x1
lbl_fn_804A71F0_000000A0:
    addi r26, r26, 0x48
    addi r30, r30, 0x1
lbl_fn_804A71F0_000000A8:
    lwz r0, 0x9c(r23)
    cmplw r30, r0
    blt lbl_fn_804A71F0_00000058
    cmpwi r27, 0x0
    beq lbl_fn_804A71F0_00000BCC
    cmpwi r28, 0x0
    beq lbl_fn_804A71F0_00000BCC
    lfs f2, 0x0(r28)
    lfs f0, lbl_808871E4
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_804A71F0_000000E0
    li r27, 0xff
    b lbl_fn_804A71F0_0000010C
lbl_fn_804A71F0_000000E0:
    lfs f0, lbl_808871D0
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_804A71F0_000000F8
    li r3, 0x0
    b lbl_fn_804A71F0_00000108
lbl_fn_804A71F0_000000F8:
    lfs f1, lbl_80887218
    lfs f0, lbl_80887224
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_804A71F0_00000108:
    mr r27, r3
lbl_fn_804A71F0_0000010C:
    lfs f2, 0x4(r28)
    lfs f0, lbl_808871E4
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_804A71F0_00000128
    li r26, 0xff
    b lbl_fn_804A71F0_00000154
lbl_fn_804A71F0_00000128:
    lfs f0, lbl_808871D0
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_804A71F0_00000140
    li r3, 0x0
    b lbl_fn_804A71F0_00000150
lbl_fn_804A71F0_00000140:
    lfs f1, lbl_80887218
    lfs f0, lbl_80887224
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_804A71F0_00000150:
    mr r26, r3
lbl_fn_804A71F0_00000154:
    lfs f2, 0x8(r28)
    lfs f0, lbl_808871E4
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_804A71F0_00000170
    li r25, 0xff
    b lbl_fn_804A71F0_0000019C
lbl_fn_804A71F0_00000170:
    lfs f0, lbl_808871D0
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_804A71F0_00000188
    li r3, 0x0
    b lbl_fn_804A71F0_00000198
lbl_fn_804A71F0_00000188:
    lfs f1, lbl_80887218
    lfs f0, lbl_80887224
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_804A71F0_00000198:
    mr r25, r3
lbl_fn_804A71F0_0000019C:
    lfs f2, 0xc(r28)
    lfs f0, lbl_808871E4
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_804A71F0_000001B8
    li r3, 0xff
    b lbl_fn_804A71F0_000001E0
lbl_fn_804A71F0_000001B8:
    lfs f0, lbl_808871D0
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_804A71F0_000001D0
    li r3, 0x0
    b lbl_fn_804A71F0_000001E0
lbl_fn_804A71F0_000001D0:
    lfs f1, lbl_80887218
    lfs f0, lbl_80887224
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_804A71F0_000001E0:
    lfs f2, 0x0(r28)
    slwi r3, r3, 24
    lfs f0, lbl_808871E4
    slwi r0, r27, 16
    or r3, r3, r0
    slwi r0, r26, 8
    fcmpo cr0, f2, f0
    or r0, r0, r3
    or r0, r25, r0
    clrrwi r30, r0, 24
    cror eq, gt, eq
    bne lbl_fn_804A71F0_00000218
    li r27, 0xff
    b lbl_fn_804A71F0_00000244
lbl_fn_804A71F0_00000218:
    lfs f0, lbl_808871D0
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_804A71F0_00000230
    li r3, 0x0
    b lbl_fn_804A71F0_00000240
lbl_fn_804A71F0_00000230:
    lfs f1, lbl_80887218
    lfs f0, lbl_80887224
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_804A71F0_00000240:
    mr r27, r3
lbl_fn_804A71F0_00000244:
    lfs f2, 0x4(r28)
    lfs f0, lbl_808871E4
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_804A71F0_00000260
    li r26, 0xff
    b lbl_fn_804A71F0_0000028C
lbl_fn_804A71F0_00000260:
    lfs f0, lbl_808871D0
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_804A71F0_00000278
    li r3, 0x0
    b lbl_fn_804A71F0_00000288
lbl_fn_804A71F0_00000278:
    lfs f1, lbl_80887218
    lfs f0, lbl_80887224
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_804A71F0_00000288:
    mr r26, r3
lbl_fn_804A71F0_0000028C:
    lfs f2, 0x8(r28)
    lfs f0, lbl_808871E4
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_804A71F0_000002A8
    li r25, 0xff
    b lbl_fn_804A71F0_000002D4
lbl_fn_804A71F0_000002A8:
    lfs f0, lbl_808871D0
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_804A71F0_000002C0
    li r3, 0x0
    b lbl_fn_804A71F0_000002D0
lbl_fn_804A71F0_000002C0:
    lfs f1, lbl_80887218
    lfs f0, lbl_80887224
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_804A71F0_000002D0:
    mr r25, r3
lbl_fn_804A71F0_000002D4:
    lfs f2, 0xc(r28)
    lfs f0, lbl_808871E4
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_804A71F0_000002F0
    li r3, 0xff
    b lbl_fn_804A71F0_00000318
lbl_fn_804A71F0_000002F0:
    lfs f0, lbl_808871D0
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_804A71F0_00000308
    li r3, 0x0
    b lbl_fn_804A71F0_00000318
lbl_fn_804A71F0_00000308:
    lfs f1, lbl_80887218
    lfs f0, lbl_80887224
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_804A71F0_00000318:
    lfs f2, lbl_8088722C
    slwi r3, r3, 24
    lfs f0, lbl_808871E4
    slwi r0, r27, 16
    or r3, r3, r0
    lfs f1, lbl_808871D0
    slwi r0, r26, 8
    fcmpo cr0, f2, f0
    or r0, r0, r3
    stfs f2, 0x8(r1)
    or r0, r25, r0
    stfs f2, 0xc(r1)
    clrlwi r31, r0, 8
    stfs f2, 0x10(r1)
    stfs f1, 0x14(r1)
    cror eq, gt, eq
    bne lbl_fn_804A71F0_00000364
    li r27, 0xff
    b lbl_fn_804A71F0_0000038C
lbl_fn_804A71F0_00000364:
    fcmpo cr0, f2, f1
    cror eq, lt, eq
    bne lbl_fn_804A71F0_00000378
    li r3, 0x0
    b lbl_fn_804A71F0_00000388
lbl_fn_804A71F0_00000378:
    lfs f1, lbl_80887218
    lfs f0, lbl_80887224
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_804A71F0_00000388:
    mr r27, r3
lbl_fn_804A71F0_0000038C:
    lfs f2, 0xc(r1)
    lfs f0, lbl_808871E4
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_804A71F0_000003A8
    li r26, 0xff
    b lbl_fn_804A71F0_000003D4
lbl_fn_804A71F0_000003A8:
    lfs f0, lbl_808871D0
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_804A71F0_000003C0
    li r3, 0x0
    b lbl_fn_804A71F0_000003D0
lbl_fn_804A71F0_000003C0:
    lfs f1, lbl_80887218
    lfs f0, lbl_80887224
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_804A71F0_000003D0:
    mr r26, r3
lbl_fn_804A71F0_000003D4:
    lfs f2, 0x10(r1)
    lfs f0, lbl_808871E4
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_804A71F0_000003F0
    li r25, 0xff
    b lbl_fn_804A71F0_0000041C
lbl_fn_804A71F0_000003F0:
    lfs f0, lbl_808871D0
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_804A71F0_00000408
    li r3, 0x0
    b lbl_fn_804A71F0_00000418
lbl_fn_804A71F0_00000408:
    lfs f1, lbl_80887218
    lfs f0, lbl_80887224
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_804A71F0_00000418:
    mr r25, r3
lbl_fn_804A71F0_0000041C:
    lfs f2, 0x14(r1)
    lfs f0, lbl_808871E4
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_804A71F0_00000438
    li r3, 0xff
    b lbl_fn_804A71F0_00000460
lbl_fn_804A71F0_00000438:
    lfs f0, lbl_808871D0
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_804A71F0_00000450
    li r3, 0x0
    b lbl_fn_804A71F0_00000460
lbl_fn_804A71F0_00000450:
    lfs f1, lbl_80887218
    lfs f0, lbl_80887224
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_804A71F0_00000460:
    slwi r3, r3, 24
    slwi r0, r27, 16
    or r3, r3, r0
    slwi r0, r26, 8
    or r0, r0, r3
    or r0, r25, r0
    cmplw r31, r0
    beq lbl_fn_804A71F0_00000868
    lfs f2, lbl_80887230
    lfs f0, lbl_808871E4
    lfs f1, lbl_808871D0
    fcmpo cr0, f2, f0
    stfs f2, 0x18(r1)
    stfs f2, 0x1c(r1)
    stfs f2, 0x20(r1)
    stfs f1, 0x24(r1)
    cror eq, gt, eq
    bne lbl_fn_804A71F0_000004B0
    li r27, 0xff
    b lbl_fn_804A71F0_000004D8
lbl_fn_804A71F0_000004B0:
    fcmpo cr0, f2, f1
    cror eq, lt, eq
    bne lbl_fn_804A71F0_000004C4
    li r3, 0x0
    b lbl_fn_804A71F0_000004D4
lbl_fn_804A71F0_000004C4:
    lfs f1, lbl_80887218
    lfs f0, lbl_80887224
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_804A71F0_000004D4:
    mr r27, r3
lbl_fn_804A71F0_000004D8:
    lfs f2, 0x1c(r1)
    lfs f0, lbl_808871E4
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_804A71F0_000004F4
    li r26, 0xff
    b lbl_fn_804A71F0_00000520
lbl_fn_804A71F0_000004F4:
    lfs f0, lbl_808871D0
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_804A71F0_0000050C
    li r3, 0x0
    b lbl_fn_804A71F0_0000051C
lbl_fn_804A71F0_0000050C:
    lfs f1, lbl_80887218
    lfs f0, lbl_80887224
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_804A71F0_0000051C:
    mr r26, r3
lbl_fn_804A71F0_00000520:
    lfs f2, 0x20(r1)
    lfs f0, lbl_808871E4
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_804A71F0_0000053C
    li r25, 0xff
    b lbl_fn_804A71F0_00000568
lbl_fn_804A71F0_0000053C:
    lfs f0, lbl_808871D0
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_804A71F0_00000554
    li r3, 0x0
    b lbl_fn_804A71F0_00000564
lbl_fn_804A71F0_00000554:
    lfs f1, lbl_80887218
    lfs f0, lbl_80887224
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_804A71F0_00000564:
    mr r25, r3
lbl_fn_804A71F0_00000568:
    lfs f2, 0x24(r1)
    lfs f0, lbl_808871E4
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_804A71F0_00000584
    li r3, 0xff
    b lbl_fn_804A71F0_000005AC
lbl_fn_804A71F0_00000584:
    lfs f0, lbl_808871D0
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_804A71F0_0000059C
    li r3, 0x0
    b lbl_fn_804A71F0_000005AC
lbl_fn_804A71F0_0000059C:
    lfs f1, lbl_80887218
    lfs f0, lbl_80887224
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_804A71F0_000005AC:
    slwi r3, r3, 24
    slwi r0, r27, 16
    or r3, r3, r0
    slwi r0, r26, 8
    or r0, r0, r3
    or r0, r25, r0
    cmplw r31, r0
    beq lbl_fn_804A71F0_00000868
    lfs f2, lbl_808871E4
    lfs f0, lbl_808871D0
    fcmpo cr0, f2, f2
    stfs f2, 0x28(r1)
    stfs f2, 0x2c(r1)
    stfs f2, 0x30(r1)
    stfs f0, 0x34(r1)
    cror eq, gt, eq
    bne lbl_fn_804A71F0_000005F8
    li r27, 0xff
    b lbl_fn_804A71F0_00000620
lbl_fn_804A71F0_000005F8:
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_804A71F0_0000060C
    li r3, 0x0
    b lbl_fn_804A71F0_0000061C
lbl_fn_804A71F0_0000060C:
    lfs f1, lbl_80887218
    lfs f0, lbl_80887224
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_804A71F0_0000061C:
    mr r27, r3
lbl_fn_804A71F0_00000620:
    lfs f2, 0x2c(r1)
    lfs f0, lbl_808871E4
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_804A71F0_0000063C
    li r26, 0xff
    b lbl_fn_804A71F0_00000668
lbl_fn_804A71F0_0000063C:
    lfs f0, lbl_808871D0
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_804A71F0_00000654
    li r3, 0x0
    b lbl_fn_804A71F0_00000664
lbl_fn_804A71F0_00000654:
    lfs f1, lbl_80887218
    lfs f0, lbl_80887224
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_804A71F0_00000664:
    mr r26, r3
lbl_fn_804A71F0_00000668:
    lfs f2, 0x30(r1)
    lfs f0, lbl_808871E4
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_804A71F0_00000684
    li r25, 0xff
    b lbl_fn_804A71F0_000006B0
lbl_fn_804A71F0_00000684:
    lfs f0, lbl_808871D0
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_804A71F0_0000069C
    li r3, 0x0
    b lbl_fn_804A71F0_000006AC
lbl_fn_804A71F0_0000069C:
    lfs f1, lbl_80887218
    lfs f0, lbl_80887224
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_804A71F0_000006AC:
    mr r25, r3
lbl_fn_804A71F0_000006B0:
    lfs f2, 0x34(r1)
    lfs f0, lbl_808871E4
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_804A71F0_000006CC
    li r3, 0xff
    b lbl_fn_804A71F0_000006F4
lbl_fn_804A71F0_000006CC:
    lfs f0, lbl_808871D0
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_804A71F0_000006E4
    li r3, 0x0
    b lbl_fn_804A71F0_000006F4
lbl_fn_804A71F0_000006E4:
    lfs f1, lbl_80887218
    lfs f0, lbl_80887224
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_804A71F0_000006F4:
    slwi r3, r3, 24
    slwi r0, r27, 16
    or r3, r3, r0
    slwi r0, r26, 8
    or r0, r0, r3
    or r0, r25, r0
    cmplw r31, r0
    beq lbl_fn_804A71F0_00000868
    lfs f3, lbl_80887234
    lfs f0, lbl_808871E4
    lfs f2, lbl_80887238
    fcmpo cr0, f3, f0
    lfs f1, lbl_8088723C
    lfs f0, lbl_808871D0
    stfs f3, 0x38(r1)
    stfs f2, 0x3c(r1)
    stfs f1, 0x40(r1)
    stfs f0, 0x44(r1)
    cror eq, gt, eq
    bne lbl_fn_804A71F0_0000074C
    li r25, 0xff
    b lbl_fn_804A71F0_00000774
lbl_fn_804A71F0_0000074C:
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_804A71F0_00000760
    li r3, 0x0
    b lbl_fn_804A71F0_00000770
lbl_fn_804A71F0_00000760:
    lfs f1, lbl_80887218
    lfs f0, lbl_80887224
    fmadds f1, f1, f3, f0
    bl fn_80695D84
lbl_fn_804A71F0_00000770:
    mr r25, r3
lbl_fn_804A71F0_00000774:
    lfs f2, 0x3c(r1)
    lfs f0, lbl_808871E4
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_804A71F0_00000790
    li r27, 0xff
    b lbl_fn_804A71F0_000007BC
lbl_fn_804A71F0_00000790:
    lfs f0, lbl_808871D0
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_804A71F0_000007A8
    li r3, 0x0
    b lbl_fn_804A71F0_000007B8
lbl_fn_804A71F0_000007A8:
    lfs f1, lbl_80887218
    lfs f0, lbl_80887224
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_804A71F0_000007B8:
    mr r27, r3
lbl_fn_804A71F0_000007BC:
    lfs f2, 0x40(r1)
    lfs f0, lbl_808871E4
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_804A71F0_000007D8
    li r26, 0xff
    b lbl_fn_804A71F0_00000804
lbl_fn_804A71F0_000007D8:
    lfs f0, lbl_808871D0
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_804A71F0_000007F0
    li r3, 0x0
    b lbl_fn_804A71F0_00000800
lbl_fn_804A71F0_000007F0:
    lfs f1, lbl_80887218
    lfs f0, lbl_80887224
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_804A71F0_00000800:
    mr r26, r3
lbl_fn_804A71F0_00000804:
    lfs f2, 0x44(r1)
    lfs f0, lbl_808871E4
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_804A71F0_00000820
    li r3, 0xff
    b lbl_fn_804A71F0_00000848
lbl_fn_804A71F0_00000820:
    lfs f0, lbl_808871D0
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_804A71F0_00000838
    li r3, 0x0
    b lbl_fn_804A71F0_00000848
lbl_fn_804A71F0_00000838:
    lfs f1, lbl_80887218
    lfs f0, lbl_80887224
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_804A71F0_00000848:
    slwi r3, r3, 24
    slwi r0, r25, 16
    or r3, r3, r0
    slwi r0, r27, 8
    or r0, r0, r3
    or r0, r26, r0
    cmplw r31, r0
    bne lbl_fn_804A71F0_00000BCC
lbl_fn_804A71F0_00000868:
    lwz r25, lbl_8087F490
    cmpwi r25, 0x0
    beq lbl_fn_804A71F0_00000A18
    lfs f2, 0x288c(r25)
    lfs f0, lbl_808871E4
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_804A71F0_00000890
    li r26, 0xff
    b lbl_fn_804A71F0_000008BC
lbl_fn_804A71F0_00000890:
    lfs f0, lbl_808871D0
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_804A71F0_000008A8
    li r3, 0x0
    b lbl_fn_804A71F0_000008B8
lbl_fn_804A71F0_000008A8:
    lfs f1, lbl_80887218
    lfs f0, lbl_80887224
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_804A71F0_000008B8:
    mr r26, r3
lbl_fn_804A71F0_000008BC:
    lfs f2, 0x2890(r25)
    lfs f0, lbl_808871E4
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_804A71F0_000008D8
    li r27, 0xff
    b lbl_fn_804A71F0_00000904
lbl_fn_804A71F0_000008D8:
    lfs f0, lbl_808871D0
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_804A71F0_000008F0
    li r3, 0x0
    b lbl_fn_804A71F0_00000900
lbl_fn_804A71F0_000008F0:
    lfs f1, lbl_80887218
    lfs f0, lbl_80887224
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_804A71F0_00000900:
    mr r27, r3
lbl_fn_804A71F0_00000904:
    lfs f2, 0x2894(r25)
    lfs f0, lbl_808871E4
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_804A71F0_00000920
    li r31, 0xff
    b lbl_fn_804A71F0_0000094C
lbl_fn_804A71F0_00000920:
    lfs f0, lbl_808871D0
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_804A71F0_00000938
    li r3, 0x0
    b lbl_fn_804A71F0_00000948
lbl_fn_804A71F0_00000938:
    lfs f1, lbl_80887218
    lfs f0, lbl_80887224
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_804A71F0_00000948:
    mr r31, r3
lbl_fn_804A71F0_0000094C:
    lfs f2, 0x2898(r25)
    lfs f0, lbl_808871E4
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_804A71F0_00000968
    li r3, 0xff
    b lbl_fn_804A71F0_00000990
lbl_fn_804A71F0_00000968:
    lfs f0, lbl_808871D0
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_804A71F0_00000980
    li r3, 0x0
    b lbl_fn_804A71F0_00000990
lbl_fn_804A71F0_00000980:
    lfs f1, lbl_80887218
    lfs f0, lbl_80887224
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_804A71F0_00000990:
    slwi r3, r3, 24
    slwi r0, r26, 16
    or r3, r3, r0
    lfs f4, lbl_80887240
    slwi r0, r27, 8
    or r0, r0, r3
    lis r3, lbl_807573B8@ha
    or r0, r31, r0
    lfd f5, lbl_807573B8@l(r3)
    or r5, r30, r0
    extrwi r0, r5, 8, 8
    stw r0, 0x4c(r1)
    extrwi r4, r5, 8, 16
    clrlwi r3, r5, 24
    lfd f0, 0x48(r1)
    srwi r0, r5, 24
    stw r4, 0x54(r1)
    fsubs f1, f0, f5
    lfd f0, 0x50(r1)
    stw r3, 0x4c(r1)
    fmuls f3, f4, f1
    fsubs f2, f0, f5
    stw r0, 0x54(r1)
    lfd f1, 0x48(r1)
    lfd f0, 0x50(r1)
    fsubs f1, f1, f5
    stfs f3, 0x0(r28)
    fsubs f0, f0, f5
    fmuls f2, f4, f2
    fmuls f1, f4, f1
    fmuls f0, f4, f0
    stfs f2, 0x4(r28)
    stfs f1, 0x8(r28)
    stfs f0, 0xc(r28)
lbl_fn_804A71F0_00000A18:
    cmpwi r29, 0x0
    beq lbl_fn_804A71F0_00000BCC
    lwz r25, lbl_8087F490
    cmpwi r25, 0x0
    beq lbl_fn_804A71F0_00000BCC
    lfs f2, 0x289c(r25)
    lfs f0, lbl_808871E4
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_804A71F0_00000A48
    li r31, 0xff
    b lbl_fn_804A71F0_00000A74
lbl_fn_804A71F0_00000A48:
    lfs f0, lbl_808871D0
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_804A71F0_00000A60
    li r3, 0x0
    b lbl_fn_804A71F0_00000A70
lbl_fn_804A71F0_00000A60:
    lfs f1, lbl_80887218
    lfs f0, lbl_80887224
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_804A71F0_00000A70:
    mr r31, r3
lbl_fn_804A71F0_00000A74:
    lfs f2, 0x28a0(r25)
    lfs f0, lbl_808871E4
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_804A71F0_00000A90
    li r30, 0xff
    b lbl_fn_804A71F0_00000ABC
lbl_fn_804A71F0_00000A90:
    lfs f0, lbl_808871D0
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_804A71F0_00000AA8
    li r3, 0x0
    b lbl_fn_804A71F0_00000AB8
lbl_fn_804A71F0_00000AA8:
    lfs f1, lbl_80887218
    lfs f0, lbl_80887224
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_804A71F0_00000AB8:
    mr r30, r3
lbl_fn_804A71F0_00000ABC:
    lfs f2, 0x28a4(r25)
    lfs f0, lbl_808871E4
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_804A71F0_00000AD8
    li r28, 0xff
    b lbl_fn_804A71F0_00000B04
lbl_fn_804A71F0_00000AD8:
    lfs f0, lbl_808871D0
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_804A71F0_00000AF0
    li r3, 0x0
    b lbl_fn_804A71F0_00000B00
lbl_fn_804A71F0_00000AF0:
    lfs f1, lbl_80887218
    lfs f0, lbl_80887224
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_804A71F0_00000B00:
    mr r28, r3
lbl_fn_804A71F0_00000B04:
    lfs f2, 0x28a8(r25)
    lfs f0, lbl_808871E4
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_804A71F0_00000B20
    li r3, 0xff
    b lbl_fn_804A71F0_00000B48
lbl_fn_804A71F0_00000B20:
    lfs f0, lbl_808871D0
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_804A71F0_00000B38
    li r3, 0x0
    b lbl_fn_804A71F0_00000B48
lbl_fn_804A71F0_00000B38:
    lfs f1, lbl_80887218
    lfs f0, lbl_80887224
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_804A71F0_00000B48:
    slwi r3, r3, 24
    slwi r0, r31, 16
    or r3, r3, r0
    lfs f4, lbl_80887240
    slwi r0, r30, 8
    or r0, r0, r3
    lis r3, lbl_807573B8@ha
    or r5, r28, r0
    lfd f5, lbl_807573B8@l(r3)
    extrwi r0, r5, 8, 8
    stw r0, 0x4c(r1)
    extrwi r4, r5, 8, 16
    clrlwi r3, r5, 24
    lfd f0, 0x48(r1)
    srwi r0, r5, 24
    stw r4, 0x54(r1)
    fsubs f1, f0, f5
    lfd f0, 0x50(r1)
    stw r3, 0x4c(r1)
    fmuls f3, f4, f1
    fsubs f2, f0, f5
    stw r0, 0x54(r1)
    lfd f1, 0x48(r1)
    lfd f0, 0x50(r1)
    fsubs f1, f1, f5
    stfs f3, 0x0(r29)
    fsubs f0, f0, f5
    fmuls f2, f4, f2
    fmuls f1, f4, f1
    fmuls f0, f4, f0
    stfs f2, 0x4(r29)
    stfs f1, 0x8(r29)
    stfs f0, 0xc(r29)
lbl_fn_804A71F0_00000BCC:
    addi r11, r1, 0x80
    bl _restgpr_23
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_804A7DD4(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    stfd f31, 0x110(r1)
    psq_st f31, 0x118(r1), 0, 0
    mr r3, r4
    bl fn_80211480
    cmpwi r3, 0x0
    mr r5, r3
    beq lbl_fn_804A7DD4_00000C9C
    lwz r4, lbl_8087F1E4
    addi r3, r1, 0x8
    lfs f31, lbl_80887244
    lwz r4, 0xdbc(r4)
    cmpwi r4, 0x0
    beq lbl_fn_804A7DD4_00000C28
    b lbl_fn_804A7DD4_00000C2C
lbl_fn_804A7DD4_00000C28:
    la r4, lbl_808813D0
lbl_fn_804A7DD4_00000C2C:
    lwz r5, 0x8(r5)
    crclr 6
    bl fn_800DD3FC
    lwz r3, lbl_8087EEC8
    addi r4, r1, 0x8
    lfs f1, lbl_80887248
    li r5, 0x1
    lfs f2, lbl_808871D0
    li r6, 0x1
    bl fn_8006EF48
    lfs f3, lbl_808871D0
    fmr f2, f31
    lfs f0, lbl_8088724C
    addi r4, r1, 0x8
    lfs f4, lbl_80887248
    fmr f6, f3
    fmr f7, f3
    fmr f5, f4
    lwz r3, lbl_8087EEB0
    fmr f8, f3
    li r5, -0x1
    fsubs f1, f0, f1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
lbl_fn_804A7DD4_00000C9C:
    lwz r0, 0x124(r1)
    psq_l f31, 0x118(r1), 0, 0
    lfd f31, 0x110(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_804A7EA4(void)
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
    beq lbl_fn_804A7EA4_00000D0C
    lis r5, lbl_8075765C@ha
    li r3, 0x1610
    addi r5, r5, lbl_8075765C@l
    li r4, 0xc
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_804A7EA4_00000D10
    mr r4, r30
    mr r5, r31
    bl fn_804A7F18
    b lbl_fn_804A7EA4_00000D10
lbl_fn_804A7EA4_00000D0C:
    li r3, 0x0
lbl_fn_804A7EA4_00000D10:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804A7F18(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    bl fn_800D1D3C
    lis r3, lbl_80790818@ha
    li r29, 0x1
    addi r3, r3, lbl_80790818@l
    addi r28, r30, 0x50
    addi r0, r3, 0x1c
    stw r3, 0x0(r30)
    mr r3, r28
    stw r0, 0x48(r30)
    stw r29, 0x4c(r30)
    bl fn_80473E74
    lis r4, lbl_8078FBB0@ha
    addi r3, r30, 0x58
    addi r4, r4, lbl_8078FBB0@l
    stw r4, 0x0(r28)
    bl fn_800D5738
    addi r3, r30, 0x88
    bl fn_800D5738
    addi r3, r30, 0xb8
    bl fn_800D5738
    addi r3, r30, 0xe8
    bl fn_800D5738
    addi r3, r30, 0x118
    bl fn_800D5738
    addi r3, r30, 0x148
    bl fn_800D5738
    addi r3, r30, 0x178
    bl fn_800D5738
    addi r3, r30, 0x1a8
    bl fn_800D5738
    addi r3, r30, 0x1d8
    bl fn_800D5738
    lis r4, 0xa0
    addi r3, r30, 0x208
    addi r4, r4, 0x1
    li r5, 0x20
    bl fn_80096E94
    lfs f4, lbl_80887258
    addi r3, r30, 0x640
    lfs f6, lbl_80887250
    li r4, 0x0
    lfs f5, lbl_80887254
    li r5, 0x0
    lfs f3, lbl_8088725C
    lfs f2, lbl_80887260
    lfs f1, lbl_80887264
    lfs f0, lbl_80887268
    stfs f6, 0x5dc(r30)
    stfs f6, 0x5e0(r30)
    stfs f6, 0x5e4(r30)
    stfs f6, 0x5e8(r30)
    stfs f6, 0x5ec(r30)
    stfs f6, 0x5f0(r30)
    stfs f6, 0x5f4(r30)
    stfs f6, 0x5f8(r30)
    stfs f5, 0x5fc(r30)
    stfs f4, 0x600(r30)
    stfs f4, 0x604(r30)
    stfs f4, 0x608(r30)
    stfs f6, 0x60c(r30)
    stfs f4, 0x610(r30)
    stfs f4, 0x614(r30)
    stfs f4, 0x618(r30)
    stfs f4, 0x61c(r30)
    stfs f4, 0x620(r30)
    stfs f4, 0x624(r30)
    stfs f4, 0x628(r30)
    stfs f4, 0x62c(r30)
    stfs f3, 0x630(r30)
    stfs f2, 0x634(r30)
    stfs f1, 0x638(r30)
    stfs f0, 0x63c(r30)
    bl fn_8004B290
    addi r7, r30, 0x860
    addi r3, r30, 0x1334
    cmplw r7, r3
    li r0, -0x1
    stw r0, 0x834(r30)
    stw r0, 0x838(r30)
    stw r29, 0x858(r30)
    bge lbl_fn_804A7F18_00000F88
    addi r0, r30, 0x860
    addi r5, r30, 0x11d4
    cmplw r0, r3
    li r3, 0x0
    li r0, 0x0
    bgt lbl_fn_804A7F18_00000EAC
    li r3, 0x1
lbl_fn_804A7F18_00000EAC:
    cmpwi r3, 0x0
    beq lbl_fn_804A7F18_00000EB8
    li r0, 0x1
lbl_fn_804A7F18_00000EB8:
    cmpwi r0, 0x0
    beq lbl_fn_804A7F18_00000F4C
    addi r3, r5, 0x15f
    li r0, 0x160
    subf r3, r7, r3
    li r4, -0x1
    divwu r3, r3, r0
    li r0, 0x1
    mtctr r3
    cmplw r7, r5
    bge lbl_fn_804A7F18_00000F4C
lbl_fn_804A7F18_00000EE4:
    stw r4, 0x0(r7)
    stw r4, 0x4(r7)
    stw r0, 0x24(r7)
    stw r4, 0x2c(r7)
    stw r4, 0x30(r7)
    stw r0, 0x50(r7)
    stw r4, 0x58(r7)
    stw r4, 0x5c(r7)
    stw r0, 0x7c(r7)
    stw r4, 0x84(r7)
    stw r4, 0x88(r7)
    stw r0, 0xa8(r7)
    stw r4, 0xb0(r7)
    stw r4, 0xb4(r7)
    stw r0, 0xd4(r7)
    stw r4, 0xdc(r7)
    stw r4, 0xe0(r7)
    stw r0, 0x100(r7)
    stw r4, 0x108(r7)
    stw r4, 0x10c(r7)
    stw r0, 0x12c(r7)
    stw r4, 0x134(r7)
    stw r4, 0x138(r7)
    stw r0, 0x158(r7)
    addi r7, r7, 0x160
    bdnz lbl_fn_804A7F18_00000EE4
lbl_fn_804A7F18_00000F4C:
    addi r4, r30, 0x1334
    li r0, 0x2c
    addi r3, r4, 0x2b
    li r6, -0x1
    subf r3, r7, r3
    li r5, 0x1
    divwu r3, r3, r0
    mtctr r3
    cmplw r7, r4
    bge lbl_fn_804A7F18_00000F88
lbl_fn_804A7F18_00000F74:
    stw r6, 0x0(r7)
    stw r6, 0x4(r7)
    stw r5, 0x24(r7)
    addi r7, r7, 0x2c
    bdnz lbl_fn_804A7F18_00000F74
lbl_fn_804A7F18_00000F88:
    addi r5, r30, 0x1340
    addi r7, r30, 0x1538
    cmplw r5, r7
    li r3, 0x0
    li r0, -0x1
    stw r3, 0x1334(r30)
    stw r3, 0x1338(r30)
    stw r0, 0x133c(r30)
    bge lbl_fn_804A7F18_00001074
    addi r0, r30, 0x1340
    subi r6, r7, 0x40
    cmplw r0, r7
    li r3, 0x0
    li r0, 0x0
    bgt lbl_fn_804A7F18_00000FC8
    li r3, 0x1
lbl_fn_804A7F18_00000FC8:
    cmpwi r3, 0x0
    beq lbl_fn_804A7F18_00000FD4
    li r0, 0x1
lbl_fn_804A7F18_00000FD4:
    cmpwi r0, 0x0
    beq lbl_fn_804A7F18_00001044
    addi r0, r6, 0x3f
    li r4, 0x0
    subf r0, r5, r0
    li r3, -0x1
    srwi r0, r0, 6
    mtctr r0
    cmplw r5, r6
    bge lbl_fn_804A7F18_00001044
lbl_fn_804A7F18_00000FFC:
    stw r4, 0x0(r5)
    stw r3, 0x4(r5)
    stw r4, 0x8(r5)
    stw r3, 0xc(r5)
    stw r4, 0x10(r5)
    stw r3, 0x14(r5)
    stw r4, 0x18(r5)
    stw r3, 0x1c(r5)
    stw r4, 0x20(r5)
    stw r3, 0x24(r5)
    stw r4, 0x28(r5)
    stw r3, 0x2c(r5)
    stw r4, 0x30(r5)
    stw r3, 0x34(r5)
    stw r4, 0x38(r5)
    stw r3, 0x3c(r5)
    addi r5, r5, 0x40
    bdnz lbl_fn_804A7F18_00000FFC
lbl_fn_804A7F18_00001044:
    addi r0, r7, 0x7
    li r4, 0x0
    subf r0, r5, r0
    li r3, -0x1
    srwi r0, r0, 3
    mtctr r0
    cmplw r5, r7
    bge lbl_fn_804A7F18_00001074
lbl_fn_804A7F18_00001064:
    stw r4, 0x0(r5)
    stw r3, 0x4(r5)
    addi r5, r5, 0x8
    bdnz lbl_fn_804A7F18_00001064
lbl_fn_804A7F18_00001074:
    lfs f0, lbl_8088726C
    li r29, 0x0
    stw r29, 0x1538(r30)
    addi r3, r30, 0x15c4
    stw r29, 0x15bc(r30)
    stfs f0, 0x15c0(r30)
    bl fn_800D5738
    stw r29, 0x160c(r30)
    addi r3, r30, 0x50
    mr r4, r31
    lwz r12, 0x50(r30)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lis r31, lbl_8075765C@ha
    addi r3, r30, 0xe8
    addi r31, r31, lbl_8075765C@l
    addi r4, r31, 0x1
    bl fn_800D5908
    addi r3, r30, 0xb8
    addi r4, r31, 0x1f
    bl fn_800D5908
    addi r3, r30, 0x148
    addi r4, r31, 0x3c
    bl fn_800D5908
    addi r3, r30, 0x88
    addi r4, r31, 0x5e
    bl fn_800D5908
    addi r3, r30, 0x118
    addi r4, r31, 0x7d
    bl fn_800D5908
    addi r3, r30, 0x1a8
    addi r4, r31, 0xa1
    bl fn_800D5908
    addi r3, r30, 0x178
    addi r4, r31, 0xc2
    bl fn_800D5908
    addi r3, r30, 0x1d8
    addi r4, r31, 0xe5
    bl fn_800D5908
    addi r3, r30, 0x208
    addi r4, r31, 0x105
    li r5, 0x0
    bl fn_8008AD4C
    mr r3, r30
    addi r4, r31, 0x11c
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x5d8(r30)
    li r4, 0x1
    bl fn_800D246C
    lwz r0, 0x15bc(r30)
    addi r4, r31, 0x12b
    cmpwi r0, 0x0
    bne lbl_fn_804A7F18_00001170
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_804A7F18_00001170
    addi r3, r3, 0x10
    bl fn_8008937C
    stw r3, 0x15bc(r30)
    mr r28, r3
    b lbl_fn_804A7F18_00001174
lbl_fn_804A7F18_00001170:
    li r28, 0x0
lbl_fn_804A7F18_00001174:
    lis r31, lbl_8075765C@ha
    mr r3, r28
    addi r31, r31, lbl_8075765C@l
    addi r5, r30, 0x4c
    addi r4, r31, 0x133
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    lfs f1, lbl_80887250
    mr r3, r28
    lfs f2, lbl_80887270
    addi r4, r31, 0x13a
    lfs f3, lbl_80887258
    addi r5, r30, 0x15c0
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    mr r3, r28
    addi r4, r31, 0x144
    addi r5, r30, 0x160c
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r30
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804A83E4(void)
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
    beq lbl_fn_804A83E4_000012F8
    li r4, -0x1
    addi r3, r3, 0x15c4
    bl fn_800D5808
    addic. r0, r30, 0x15bc
    beq lbl_fn_804A83E4_00001248
    lwz r4, 0x15bc(r30)
    cmpwi r4, 0x0
    beq lbl_fn_804A83E4_00001248
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_804A83E4_00001248
    bl fn_800897D8
lbl_fn_804A83E4_00001248:
    addi r3, r30, 0x640
    li r4, -0x1
    bl fn_8004B338
    addi r3, r30, 0x208
    li r4, -0x1
    bl fn_800971D4
    addi r3, r30, 0x1d8
    li r4, -0x1
    bl fn_800D5808
    addi r3, r30, 0x1a8
    li r4, -0x1
    bl fn_800D5808
    addi r3, r30, 0x178
    li r4, -0x1
    bl fn_800D5808
    addi r3, r30, 0x148
    li r4, -0x1
    bl fn_800D5808
    addi r3, r30, 0x118
    li r4, -0x1
    bl fn_800D5808
    addi r3, r30, 0xe8
    li r4, -0x1
    bl fn_800D5808
    addi r3, r30, 0xb8
    li r4, -0x1
    bl fn_800D5808
    addi r3, r30, 0x88
    li r4, -0x1
    bl fn_800D5808
    addi r3, r30, 0x58
    li r4, -0x1
    bl fn_800D5808
    addic. r3, r30, 0x50
    beq lbl_fn_804A83E4_000012DC
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_804A83E4_000012DC:
    mr r3, r30
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r31, 0x0
    ble lbl_fn_804A83E4_000012F8
    mr r3, r30
    bl dtor_80084684
lbl_fn_804A83E4_000012F8:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804A8504(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    addi r3, r3, 0x50
    bl fn_80473F50
    cmpwi r3, 0x0
    bne lbl_fn_804A8504_000013F0
    addi r3, r30, 0x58
    bl fn_800D59B8
    cmpwi r3, 0x0
    bne lbl_fn_804A8504_000013F0
    addi r3, r30, 0x88
    bl fn_800D59B8
    cmpwi r3, 0x0
    bne lbl_fn_804A8504_000013F0
    addi r3, r30, 0xb8
    bl fn_800D59B8
    cmpwi r3, 0x0
    bne lbl_fn_804A8504_000013F0
    addi r3, r30, 0xe8
    bl fn_800D59B8
    cmpwi r3, 0x0
    bne lbl_fn_804A8504_000013F0
    addi r3, r30, 0x118
    bl fn_800D59B8
    cmpwi r3, 0x0
    bne lbl_fn_804A8504_000013F0
    addi r3, r30, 0x148
    bl fn_800D59B8
    cmpwi r3, 0x0
    bne lbl_fn_804A8504_000013F0
    addi r3, r30, 0x178
    bl fn_800D59B8
    cmpwi r3, 0x0
    bne lbl_fn_804A8504_000013F0
    addi r3, r30, 0x1a8
    bl fn_800D59B8
    cmpwi r3, 0x0
    bne lbl_fn_804A8504_000013F0
    addi r3, r30, 0x1d8
    bl fn_800D59B8
    cmpwi r3, 0x0
    bne lbl_fn_804A8504_000013F0
    mr r3, r30
    bl fn_800D3FA4
    cmpwi r3, 0x0
    beq lbl_fn_804A8504_000013F0
    addi r3, r30, 0x208
    bl fn_8008B140
    cmpwi r3, 0x0
    beq lbl_fn_804A8504_000013F4
lbl_fn_804A8504_000013F0:
    li r31, 0x1
lbl_fn_804A8504_000013F4:
    cmpwi r31, 0x0
    bne lbl_fn_804A8504_00001438
    lwz r3, 0x5d8(r30)
    li r4, 0x0
    bl fn_800D246C
    lwz r4, 0x5d8(r30)
    mr r3, r30
    lwz r0, 0xfc(r4)
    oris r0, r0, 0x1000
    stw r0, 0xfc(r4)
    lwz r4, 0x5d8(r30)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    bl fn_804AA490
    li r3, 0x1
    b lbl_fn_804A8504_0000143C
lbl_fn_804A8504_00001438:
    li r3, 0x0
lbl_fn_804A8504_0000143C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804A8644(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x0
    stw r0, 0x84(r1)
    mr r7, r4
    li r8, 0x1
    stfd f31, 0x70(r1)
    psq_st f31, 0x78(r1), 0, 0
    stfd f30, 0x60(r1)
    psq_st f30, 0x68(r1), 0, 0
    stw r31, 0x5c(r1)
    mr r31, r3
    stw r30, 0x58(r1)
    b lbl_fn_804A8644_00001564
lbl_fn_804A8644_00001490:
    add r9, r3, r5
    li r10, 0x0
    lwz r30, 0x133c(r9)
    li r11, 0x0
    lwz r6, 0x1338(r9)
    li r12, 0x0
    mulli r0, r30, 0x2c
    lfs f2, 0x530(r6)
    psq_l f1, 0x528(r6), 0, 0
    add r6, r3, r0
    addi r6, r6, 0x84c
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x8(r6)
    lwz r9, 0x1338(r9)
    lwz r6, 0x38(r9)
    rlwinm r0, r6, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_804A8644_000014E8
    clrlwi r0, r6, 31
    cmplwi r0, 0x1
    beq lbl_fn_804A8644_000014E8
    li r12, 0x1
lbl_fn_804A8644_000014E8:
    cmpwi r12, 0x0
    beq lbl_fn_804A8644_00001504
    lwz r0, 0x7e0(r9)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_804A8644_00001504
    li r11, 0x1
lbl_fn_804A8644_00001504:
    cmpwi r11, 0x0
    beq lbl_fn_804A8644_00001538
    lwz r0, 0x55c(r9)
    li r6, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_804A8644_0000152C
    lwz r0, 0x560(r9)
    cmpwi r0, 0x1c
    bne lbl_fn_804A8644_0000152C
    li r6, 0x1
lbl_fn_804A8644_0000152C:
    cmpwi r6, 0x0
    bne lbl_fn_804A8644_00001538
    li r10, 0x1
lbl_fn_804A8644_00001538:
    cmpwi r10, 0x0
    beq lbl_fn_804A8644_00001550
    mulli r0, r30, 0x2c
    add r6, r3, r0
    stw r8, 0x834(r6)
    b lbl_fn_804A8644_0000155C
lbl_fn_804A8644_00001550:
    mulli r0, r30, 0x2c
    add r6, r3, r0
    stw r7, 0x834(r6)
lbl_fn_804A8644_0000155C:
    addi r4, r4, 0x1
    addi r5, r5, 0x8
lbl_fn_804A8644_00001564:
    lwz r0, 0x1334(r3)
    cmplw r4, r0
    blt lbl_fn_804A8644_00001490
    lis r30, lbl_807C7060@ha
    addi r30, r30, lbl_807C7060@l
    psq_l f1, 0x0(r30), 0, 0
    psq_l f2, 0x8(r30), 0, 0
    psq_l f3, 0x10(r30), 0, 0
    psq_l f4, 0x18(r30), 0, 0
    psq_l f5, 0x20(r30), 0, 0
    psq_l f6, 0x28(r30), 0, 0
    psq_st f6, 0x238(r3), 0, 0
    psq_st f1, 0x210(r3), 0, 0
    psq_st f2, 0x218(r3), 0, 0
    psq_st f3, 0x220(r3), 0, 0
    psq_st f4, 0x228(r3), 0, 0
    psq_st f5, 0x230(r3), 0, 0
    addi r3, r1, 0x14
    lfs f8, 0x28(r30)
    lfs f7, 0x18(r30)
    lfs f0, 0x8(r30)
    stfs f0, 0x14(r1)
    stfs f7, 0x18(r1)
    stfs f8, 0x1c(r1)
    bl fn_805F9940
    lfs f8, 0x24(r30)
    fmr f30, f1
    lfs f7, 0x14(r30)
    addi r3, r1, 0x20
    lfs f0, 0x4(r30)
    stfs f0, 0x20(r1)
    stfs f7, 0x24(r1)
    stfs f8, 0x28(r1)
    bl fn_805F9940
    lfs f8, 0x20(r30)
    fmr f31, f1
    lfs f7, 0x10(r30)
    addi r3, r1, 0x2c
    lfs f0, 0x0(r30)
    stfs f0, 0x2c(r1)
    stfs f7, 0x30(r1)
    stfs f8, 0x34(r1)
    bl fn_805F9940
    frsp f7, f31
    stfs f1, 0x8(r1)
    frsp f0, f30
    stfs f31, 0xc(r1)
    fcmpo cr0, f7, f0
    stfs f30, 0x10(r1)
    ble lbl_fn_804A8644_00001630
    b lbl_fn_804A8644_00001634
lbl_fn_804A8644_00001630:
    fmr f7, f0
lbl_fn_804A8644_00001634:
    lfs f8, 0x8(r1)
    fcmpo cr0, f8, f7
    ble lbl_fn_804A8644_00001644
    b lbl_fn_804A8644_0000165C
lbl_fn_804A8644_00001644:
    lfs f8, 0xc(r1)
    lfs f0, 0x10(r1)
    fcmpo cr0, f8, f0
    ble lbl_fn_804A8644_00001658
    b lbl_fn_804A8644_0000165C
lbl_fn_804A8644_00001658:
    fmr f8, f0
lbl_fn_804A8644_0000165C:
    stfs f8, 0x25c(r31)
    li r0, 0x0
    addi r3, r31, 0x208
    addi r4, r1, 0x38
    stw r0, 0x38(r1)
    bl fn_8000D430
    addic. r3, r1, 0x38
    beq lbl_fn_804A8644_000016B0
    lwz r4, 0x38(r1)
    cmpwi r4, 0x0
    beq lbl_fn_804A8644_000016B0
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_804A8644_000016A8
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_804A8644_000016A8:
    li r0, 0x0
    stw r0, 0x38(r1)
lbl_fn_804A8644_000016B0:
    lwz r0, 0x84(r1)
    psq_l f31, 0x78(r1), 0, 0
    lfd f31, 0x70(r1)
    psq_l f30, 0x68(r1), 0, 0
    lfd f30, 0x60(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_804A88C8(void)
{
    nofralloc
    lfs f4, lbl_80887274
    lfs f0, 0x0(r3)
    lfs f2, 0x4(r3)
    fmuls f3, f4, f0
    lfs f1, 0x8(r3)
    lfs f0, 0xc(r3)
    fmuls f2, f4, f2
    fmuls f1, f4, f1
    stwu r1, -0x30(r1)
    fmuls f0, f4, f0
    fctiwz f3, f3
    fctiwz f2, f2
    fctiwz f1, f1
    stfd f3, 0x10(r1)
    fctiwz f0, f0
    stfd f2, 0x18(r1)
    lwz r5, 0x14(r1)
    stfd f1, 0x20(r1)
    lwz r4, 0x1c(r1)
    stfd f0, 0x28(r1)
    lwz r3, 0x24(r1)
    lwz r0, 0x2c(r1)
    stb r5, 0x8(r1)
    stb r4, 0x9(r1)
    stb r3, 0xa(r1)
    stb r0, 0xb(r1)
    lwz r3, 0x8(r1)
    addi r1, r1, 0x30
    blr
}

asm void fn_804A893C(void)
{
    nofralloc
    lwz r0, 0x4(r3)
    or r0, r0, r4
    stw r0, 0x4(r3)
    blr
}

asm void fn_804A894C(void)
{
    nofralloc
    stwu r1, -0x4c0(r1)
    mflr r0
    stw r0, 0x4c4(r1)
    addi r11, r1, 0x3e0
    stfd f31, 0x4b0(r1)
    psq_st f31, 0x4b8(r1), 0, 0
    stfd f30, 0x4a0(r1)
    psq_st f30, 0x4a8(r1), 0, 0
    stfd f29, 0x490(r1)
    psq_st f29, 0x498(r1), 0, 0
    stfd f28, 0x480(r1)
    psq_st f28, 0x488(r1), 0, 0
    stfd f27, 0x470(r1)
    psq_st f27, 0x478(r1), 0, 0
    stfd f26, 0x460(r1)
    psq_st f26, 0x468(r1), 0, 0
    stfd f25, 0x450(r1)
    psq_st f25, 0x458(r1), 0, 0
    stfd f24, 0x440(r1)
    psq_st f24, 0x448(r1), 0, 0
    stfd f23, 0x430(r1)
    psq_st f23, 0x438(r1), 0, 0
    stfd f22, 0x420(r1)
    psq_st f22, 0x428(r1), 0, 0
    stfd f21, 0x410(r1)
    psq_st f21, 0x418(r1), 0, 0
    stfd f20, 0x400(r1)
    psq_st f20, 0x408(r1), 0, 0
    stfd f19, 0x3f0(r1)
    psq_st f19, 0x3f8(r1), 0, 0
    stfd f18, 0x3e0(r1)
    psq_st f18, 0x3e8(r1), 0, 0
    bl _savegpr_20
    lwz r5, 0x5d8(r3)
    lis r4, 0x4330
    stw r4, 0x378(r1)
    mr r24, r3
    lwz r0, 0x38(r5)
    stw r4, 0x380(r1)
    ori r0, r0, 0x4
    stw r0, 0x38(r5)
    lwz r0, 0x4c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804A894C_00002BCC
    lwz r4, lbl_8087F8A0
    cmpwi r4, 0x0
    beq lbl_fn_804A894C_00002BCC
    lwz r5, 0x48(r4)
    cmpwi r5, 0x0
    bne lbl_fn_804A894C_00001828
    b lbl_fn_804A894C_00002BCC
lbl_fn_804A894C_00001828:
    addi r4, r1, 0x1e8
    psq_l f1, 0x528(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    li r0, 0x0
    lfs f2, 0x530(r5)
    lfs f3, 0x1ec(r1)
    lfs f0, 0x1604(r3)
    stfs f2, 0x1f0(r1)
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_804A894C_00001898
    lfs f4, 0x1e8(r1)
    lfs f3, 0x15f4(r3)
    fcmpo cr0, f4, f3
    ble lbl_fn_804A894C_00001898
    lfs f0, 0x15fc(r3)
    fadds f0, f3, f0
    fcmpo cr0, f4, f0
    bge lbl_fn_804A894C_00001898
    frsp f4, f2
    lfs f3, 0x15f8(r3)
    fcmpo cr0, f4, f3
    ble lbl_fn_804A894C_00001898
    lfs f0, 0x1600(r3)
    fadds f0, f3, f0
    fcmpo cr0, f4, f0
    bge lbl_fn_804A894C_00001898
    li r0, 0x1
lbl_fn_804A894C_00001898:
    cmpwi r0, 0x0
    beq lbl_fn_804A894C_000018C4
    lfs f3, 0x1608(r3)
    lfs f0, lbl_80887280
    lfs f4, lbl_8088727C
    fsubs f0, f3, f0
    fcmpo cr0, f4, f0
    ble lbl_fn_804A894C_000018BC
    b lbl_fn_804A894C_000018E4
lbl_fn_804A894C_000018BC:
    fmr f4, f0
    b lbl_fn_804A894C_000018E4
lbl_fn_804A894C_000018C4:
    lfs f3, lbl_80887280
    lfs f0, 0x1608(r3)
    lfs f4, lbl_80887258
    fadds f0, f3, f0
    fcmpo cr0, f4, f0
    bge lbl_fn_804A894C_000018E0
    b lbl_fn_804A894C_000018E4
lbl_fn_804A894C_000018E0:
    fmr f4, f0
lbl_fn_804A894C_000018E4:
    lwz r0, 0x20c(r3)
    lis r4, lbl_8075765C@ha
    frsp f24, f4
    addi r4, r4, lbl_8075765C@l
    rlwinm r0, r0, 0, 28, 26
    stfs f4, 0x1608(r3)
    addi r4, r4, 0x14c
    stw r0, 0x20c(r3)
    addi r3, r3, 0x208
    bl fn_80092954
    cmpwi r3, 0x0
    beq lbl_fn_804A894C_00001A18
    lwz r0, 0x18(r3)
    lis r5, lbl_80757640@ha
    stw r0, 0x38(r1)
    lfs f6, lbl_80887274
    lbz r0, 0x38(r1)
    stw r0, 0x37c(r1)
    fmuls f0, f6, f24
    lbz r4, 0x39(r1)
    lfd f3, 0x378(r1)
    lbz r0, 0x3a(r1)
    fctiwz f0, f0
    stw r4, 0x384(r1)
    lfd f7, lbl_80757640@l(r5)
    lfd f4, 0x380(r1)
    fsubs f5, f3, f7
    stw r0, 0x37c(r1)
    fsubs f4, f4, f7
    lfd f3, 0x378(r1)
    stfd f0, 0x3a0(r1)
    fdivs f5, f5, f6
    lfs f0, lbl_80887278
    lwz r0, 0x3a4(r1)
    stb r0, 0x43(r1)
    stfs f24, 0x154(r1)
    stfs f5, 0x148(r1)
    fsubs f3, f3, f7
    fdivs f4, f4, f6
    stfs f4, 0x14c(r1)
    fdivs f3, f3, f6
    stfs f3, 0x150(r1)
    fmuls f5, f6, f5
    fmuls f4, f6, f4
    fmuls f3, f6, f3
    fctiwz f5, f5
    fctiwz f4, f4
    fctiwz f3, f3
    stfd f5, 0x388(r1)
    fcmpo cr0, f24, f0
    stfd f4, 0x390(r1)
    lwz r5, 0x38c(r1)
    stfd f3, 0x398(r1)
    lwz r4, 0x394(r1)
    lwz r0, 0x39c(r1)
    stb r5, 0x40(r1)
    stb r4, 0x41(r1)
    stb r0, 0x42(r1)
    lwz r0, 0x40(r1)
    stw r0, 0x3c(r1)
    lbz r0, 0x3c(r1)
    stb r0, 0x18(r3)
    lbz r0, 0x3d(r1)
    stb r0, 0x19(r3)
    lbz r0, 0x3e(r1)
    stb r0, 0x1a(r3)
    lbz r0, 0x3f(r1)
    stb r0, 0x1b(r3)
    bge lbl_fn_804A894C_00001A10
    li r4, 0x3
    bl fn_8007FAF0
    lwz r0, 0x20c(r24)
    ori r0, r0, 0x10
    stw r0, 0x20c(r24)
    b lbl_fn_804A894C_00001A18
lbl_fn_804A894C_00001A10:
    li r4, 0x1
    bl fn_8007FAF0
lbl_fn_804A894C_00001A18:
    lis r4, lbl_8075765C@ha
    lfs f24, 0x1608(r24)
    addi r4, r4, lbl_8075765C@l
    addi r3, r24, 0x208
    addi r4, r4, 0x15a
    bl fn_80092954
    cmpwi r3, 0x0
    beq lbl_fn_804A894C_00001B3C
    lwz r0, 0x18(r3)
    lis r5, lbl_80757640@ha
    stw r0, 0x2c(r1)
    lfs f6, lbl_80887274
    lbz r0, 0x2c(r1)
    stw r0, 0x37c(r1)
    fmuls f0, f6, f24
    lbz r4, 0x2d(r1)
    lfd f3, 0x378(r1)
    lbz r0, 0x2e(r1)
    fctiwz f0, f0
    stw r4, 0x384(r1)
    lfd f7, lbl_80757640@l(r5)
    lfd f4, 0x380(r1)
    fsubs f5, f3, f7
    stw r0, 0x37c(r1)
    fsubs f4, f4, f7
    lfd f3, 0x378(r1)
    stfd f0, 0x388(r1)
    fdivs f5, f5, f6
    lfs f0, lbl_80887278
    lwz r0, 0x38c(r1)
    stb r0, 0x37(r1)
    stfs f24, 0x144(r1)
    stfs f5, 0x138(r1)
    fsubs f3, f3, f7
    fdivs f4, f4, f6
    stfs f4, 0x13c(r1)
    fdivs f3, f3, f6
    stfs f3, 0x140(r1)
    fmuls f5, f6, f5
    fmuls f4, f6, f4
    fmuls f3, f6, f3
    fctiwz f5, f5
    fctiwz f4, f4
    fctiwz f3, f3
    stfd f5, 0x3a0(r1)
    fcmpo cr0, f24, f0
    stfd f4, 0x398(r1)
    lwz r5, 0x3a4(r1)
    stfd f3, 0x390(r1)
    lwz r4, 0x39c(r1)
    lwz r0, 0x394(r1)
    stb r5, 0x34(r1)
    stb r4, 0x35(r1)
    stb r0, 0x36(r1)
    lwz r0, 0x34(r1)
    stw r0, 0x30(r1)
    lbz r0, 0x30(r1)
    stb r0, 0x18(r3)
    lbz r0, 0x31(r1)
    stb r0, 0x19(r3)
    lbz r0, 0x32(r1)
    stb r0, 0x1a(r3)
    lbz r0, 0x33(r1)
    stb r0, 0x1b(r3)
    bge lbl_fn_804A894C_00001B34
    li r4, 0x3
    bl fn_8007FAF0
    lwz r0, 0x20c(r24)
    ori r0, r0, 0x10
    stw r0, 0x20c(r24)
    b lbl_fn_804A894C_00001B3C
lbl_fn_804A894C_00001B34:
    li r4, 0x1
    bl fn_8007FAF0
lbl_fn_804A894C_00001B3C:
    lis r4, lbl_8075765C@ha
    lfs f24, 0x1608(r24)
    addi r4, r4, lbl_8075765C@l
    addi r3, r24, 0x208
    addi r4, r4, 0x167
    bl fn_80092954
    cmpwi r3, 0x0
    beq lbl_fn_804A894C_00001C60
    lwz r0, 0x18(r3)
    lis r5, lbl_80757640@ha
    stw r0, 0x20(r1)
    lfs f6, lbl_80887274
    lbz r0, 0x20(r1)
    stw r0, 0x37c(r1)
    fmuls f0, f6, f24
    lbz r4, 0x21(r1)
    lfd f3, 0x378(r1)
    lbz r0, 0x22(r1)
    fctiwz f0, f0
    stw r4, 0x384(r1)
    lfd f7, lbl_80757640@l(r5)
    lfd f4, 0x380(r1)
    fsubs f5, f3, f7
    stw r0, 0x37c(r1)
    fsubs f4, f4, f7
    lfd f3, 0x378(r1)
    stfd f0, 0x388(r1)
    fdivs f5, f5, f6
    lfs f0, lbl_80887278
    lwz r0, 0x38c(r1)
    stb r0, 0x2b(r1)
    stfs f24, 0x134(r1)
    stfs f5, 0x128(r1)
    fsubs f3, f3, f7
    fdivs f4, f4, f6
    stfs f4, 0x12c(r1)
    fdivs f3, f3, f6
    stfs f3, 0x130(r1)
    fmuls f5, f6, f5
    fmuls f4, f6, f4
    fmuls f3, f6, f3
    fctiwz f5, f5
    fctiwz f4, f4
    fctiwz f3, f3
    stfd f5, 0x3a0(r1)
    fcmpo cr0, f24, f0
    stfd f4, 0x398(r1)
    lwz r5, 0x3a4(r1)
    stfd f3, 0x390(r1)
    lwz r4, 0x39c(r1)
    lwz r0, 0x394(r1)
    stb r5, 0x28(r1)
    stb r4, 0x29(r1)
    stb r0, 0x2a(r1)
    lwz r0, 0x28(r1)
    stw r0, 0x24(r1)
    lbz r0, 0x24(r1)
    stb r0, 0x18(r3)
    lbz r0, 0x25(r1)
    stb r0, 0x19(r3)
    lbz r0, 0x26(r1)
    stb r0, 0x1a(r3)
    lbz r0, 0x27(r1)
    stb r0, 0x1b(r3)
    bge lbl_fn_804A894C_00001C58
    li r4, 0x3
    bl fn_8007FAF0
    lwz r0, 0x20c(r24)
    ori r0, r0, 0x10
    stw r0, 0x20c(r24)
    b lbl_fn_804A894C_00001C60
lbl_fn_804A894C_00001C58:
    li r4, 0x1
    bl fn_8007FAF0
lbl_fn_804A894C_00001C60:
    lwz r0, 0x160c(r24)
    cmpwi r0, 0x0
    beq lbl_fn_804A894C_00001C78
    mr r3, r24
    bl fn_804A9EB4
    b lbl_fn_804A894C_00002BCC
lbl_fn_804A894C_00001C78:
    lfs f4, 0x5e4(r24)
    mr r3, r24
    lfs f3, lbl_80887284
    lfs f5, lbl_80887288
    fmuls f7, f4, f3
    lfs f0, 0x5dc(r24)
    lfs f3, 0x5f4(r24)
    fmadds f6, f5, f4, f0
    lfs f4, 0x5e8(r24)
    fmuls f19, f3, f7
    lfs f3, 0x5e0(r24)
    lfs f0, lbl_80887250
    fmadds f3, f5, f4, f3
    lwz r0, 0x1538(r24)
    stfs f6, 0x1dc(r1)
    lfs f23, 0x630(r24)
    stfs f3, 0x1e0(r1)
    lfs f22, 0x638(r24)
    stfs f0, 0x1e4(r1)
    lfs f21, 0x634(r24)
    lfs f20, 0x63c(r24)
    lfs f4, 0x1f0(r1)
    lfs f5, 0x1e8(r1)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_804A894C_00001D20
lbl_fn_804A894C_00001CE0:
    lfs f3, 0x153c(r3)
    fcmpo cr0, f5, f3
    ble lbl_fn_804A894C_00001D18
    lfs f0, 0x1544(r3)
    fadds f0, f3, f0
    fcmpo cr0, f5, f0
    bge lbl_fn_804A894C_00001D18
    lfs f3, 0x1540(r3)
    fcmpo cr0, f4, f3
    ble lbl_fn_804A894C_00001D18
    lfs f0, 0x1548(r3)
    fadds f0, f3, f0
    fcmpo cr0, f4, f0
    blt lbl_fn_804A894C_00002BCC
lbl_fn_804A894C_00001D18:
    addi r3, r3, 0x10
    bdnz lbl_fn_804A894C_00001CE0
lbl_fn_804A894C_00001D20:
    lwz r3, lbl_8087F0A8
    lfs f1, lbl_80887250
    lwz r0, 0x5a8(r3)
    stfs f1, 0x1ec(r1)
    cmpwi r0, 0x1
    beq lbl_fn_804A894C_00001D44
    cmpwi r0, 0x2
    beq lbl_fn_804A894C_00001D5C
    b lbl_fn_804A894C_00001F68
lbl_fn_804A894C_00001D44:
    lwz r3, lbl_8087F8A0
    lfs f0, lbl_8088728C
    lwz r3, 0x48(r3)
    lfs f3, 0x538(r3)
    fsubs f1, f3, f0
    b lbl_fn_804A894C_00001F68
lbl_fn_804A894C_00001D5C:
    lwz r5, lbl_8087EFB4
    addi r20, r1, 0x170
    addi r6, r1, 0x11c
    lfs f3, 0x120(r5)
    mr r3, r20
    lfs f0, 0x114(r5)
    mr r4, r20
    lfs f5, 0x11c(r5)
    fsubs f2, f3, f0
    lfs f4, 0x110(r5)
    lfs f3, 0x118(r5)
    lfs f0, 0x10c(r5)
    fsubs f4, f5, f4
    stfs f2, 0x124(r1)
    fsubs f0, f3, f0
    stfs f4, 0x120(r1)
    stfs f0, 0x11c(r1)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r20), 0, 0
    stfs f2, 0x178(r1)
    bl fn_805F98D0
    lfs f2, 0x178(r1)
    addi r21, r1, 0x17c
    psq_l f1, 0x0(r20), 0, 0
    fabs f3, f2
    lfs f0, lbl_80887290
    psq_st f1, 0x0(r21), 0, 0
    frsp f3, f3
    stfs f2, 0x184(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_804A894C_00001DFC
    lfs f3, 0x17c(r1)
    lfs f0, lbl_80887250
    fcmpo cr0, f3, f0
    ble lbl_fn_804A894C_00001DF0
    lfs f0, lbl_80887294
    b lbl_fn_804A894C_00001DF4
lbl_fn_804A894C_00001DF0:
    lfs f0, lbl_80887298
lbl_fn_804A894C_00001DF4:
    stfs f0, 0x114(r1)
    b lbl_fn_804A894C_00001E10
lbl_fn_804A894C_00001DFC:
    frsp f2, f2
    lfs f1, 0x17c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x114(r1)
lbl_fn_804A894C_00001E10:
    lfs f0, 0x114(r1)
    addi r3, r1, 0x2d8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80887250
    addi r4, r1, 0x104
    lfs f24, 0x2e0(r1)
    mr r5, r4
    lfs f18, 0x2dc(r1)
    addi r3, r1, 0x308
    lfs f13, 0x2d8(r1)
    lfs f12, 0x2f0(r1)
    lfs f11, 0x2ec(r1)
    lfs f10, 0x2e8(r1)
    lfs f9, 0x300(r1)
    lfs f8, 0x2fc(r1)
    lfs f7, 0x2f8(r1)
    lfs f6, 0x304(r1)
    lfs f5, 0x2f4(r1)
    lfs f4, 0x2e4(r1)
    lfs f0, lbl_80887258
    psq_l f1, 0x0(r21), 0, 0
    lfs f2, 0x184(r1)
    stfs f3, 0x338(r1)
    stfs f3, 0x33c(r1)
    stfs f3, 0x340(r1)
    stfs f0, 0x344(r1)
    stfs f13, 0xd4(r1)
    stfs f18, 0xd8(r1)
    stfs f24, 0xdc(r1)
    stfs f13, 0x308(r1)
    stfs f18, 0x30c(r1)
    stfs f24, 0x310(r1)
    stfs f10, 0xe0(r1)
    stfs f11, 0xe4(r1)
    stfs f12, 0xe8(r1)
    stfs f10, 0x318(r1)
    stfs f11, 0x31c(r1)
    stfs f12, 0x320(r1)
    stfs f7, 0xec(r1)
    stfs f8, 0xf0(r1)
    stfs f9, 0xf4(r1)
    stfs f7, 0x328(r1)
    stfs f8, 0x32c(r1)
    stfs f9, 0x330(r1)
    stfs f4, 0xf8(r1)
    stfs f5, 0xfc(r1)
    stfs f6, 0x100(r1)
    stfs f4, 0x314(r1)
    stfs f5, 0x324(r1)
    stfs f6, 0x334(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x10c(r1)
    bl fn_805F9750
    lfs f2, 0x10c(r1)
    lfs f0, lbl_80887290
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_804A894C_00001F2C
    lfs f3, 0x108(r1)
    lfs f0, lbl_80887250
    fcmpo cr0, f3, f0
    ble lbl_fn_804A894C_00001F1C
    lfs f0, lbl_80887294
    b lbl_fn_804A894C_00001F20
lbl_fn_804A894C_00001F1C:
    lfs f0, lbl_80887298
lbl_fn_804A894C_00001F20:
    fneg f0, f0
    stfs f0, 0x110(r1)
    b lbl_fn_804A894C_00001F40
lbl_fn_804A894C_00001F2C:
    lfs f1, 0x108(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x110(r1)
lbl_fn_804A894C_00001F40:
    addi r3, r1, 0x110
    lfs f2, lbl_80887250
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r21), 0, 0
    lfs f0, lbl_8088728C
    lfs f3, 0x180(r1)
    stfs f2, 0x118(r1)
    fneg f3, f3
    stfs f2, 0x184(r1)
    fsubs f1, f3, f0
lbl_fn_804A894C_00001F68:
    addi r3, r1, 0x348
    li r4, 0x79
    bl fn_805F8E70
    lfs f3, lbl_80887250
    addi r4, r1, 0x1d0
    lfs f0, lbl_8088729C
    mr r5, r4
    stfs f3, 0x1d0(r1)
    addi r3, r1, 0x348
    stfs f3, 0x1d4(r1)
    stfs f0, 0x1d8(r1)
    bl fn_805F93C0
    lfs f0, 0x1d8(r1)
    addi r20, r1, 0x1c4
    lfs f1, 0x1d0(r1)
    fneg f4, f0
    lfs f3, lbl_80887250
    lfs f0, lbl_80887290
    stfs f4, 0x1cc(r1)
    frsp f2, f4
    stfs f1, 0x1c4(r1)
    fabs f5, f2
    stfs f3, 0x1c8(r1)
    frsp f4, f5
    fcmpo cr0, f4, f0
    bge lbl_fn_804A894C_00001FEC
    fcmpo cr0, f1, f3
    ble lbl_fn_804A894C_00001FE0
    lfs f0, lbl_80887294
    b lbl_fn_804A894C_00001FE4
lbl_fn_804A894C_00001FE0:
    lfs f0, lbl_80887298
lbl_fn_804A894C_00001FE4:
    stfs f0, 0x90(r1)
    b lbl_fn_804A894C_00001FF8
lbl_fn_804A894C_00001FEC:
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x90(r1)
lbl_fn_804A894C_00001FF8:
    lfs f0, 0x90(r1)
    addi r3, r1, 0x2a8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80887250
    addi r4, r1, 0x98
    lfs f4, 0x2b0(r1)
    mr r5, r4
    lfs f5, 0x2ac(r1)
    addi r3, r1, 0x268
    lfs f6, 0x2a8(r1)
    lfs f7, 0x2c0(r1)
    lfs f8, 0x2bc(r1)
    lfs f9, 0x2b8(r1)
    lfs f10, 0x2d0(r1)
    lfs f11, 0x2cc(r1)
    lfs f12, 0x2c8(r1)
    lfs f13, 0x2d4(r1)
    lfs f18, 0x2c4(r1)
    lfs f24, 0x2b4(r1)
    lfs f0, lbl_80887258
    psq_l f1, 0x0(r20), 0, 0
    lfs f2, 0x1cc(r1)
    stfs f3, 0x298(r1)
    stfs f3, 0x29c(r1)
    stfs f3, 0x2a0(r1)
    stfs f0, 0x2a4(r1)
    stfs f6, 0xc8(r1)
    stfs f5, 0xcc(r1)
    stfs f4, 0xd0(r1)
    stfs f6, 0x268(r1)
    stfs f5, 0x26c(r1)
    stfs f4, 0x270(r1)
    stfs f9, 0xbc(r1)
    stfs f8, 0xc0(r1)
    stfs f7, 0xc4(r1)
    stfs f9, 0x278(r1)
    stfs f8, 0x27c(r1)
    stfs f7, 0x280(r1)
    stfs f12, 0xb0(r1)
    stfs f11, 0xb4(r1)
    stfs f10, 0xb8(r1)
    stfs f12, 0x288(r1)
    stfs f11, 0x28c(r1)
    stfs f10, 0x290(r1)
    stfs f24, 0xa4(r1)
    stfs f18, 0xa8(r1)
    stfs f13, 0xac(r1)
    stfs f24, 0x274(r1)
    stfs f18, 0x284(r1)
    stfs f13, 0x294(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0xa0(r1)
    bl fn_805F9750
    lfs f2, 0xa0(r1)
    lfs f0, lbl_80887290
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_804A894C_00002114
    lfs f3, 0x9c(r1)
    lfs f0, lbl_80887250
    fcmpo cr0, f3, f0
    ble lbl_fn_804A894C_00002104
    lfs f0, lbl_80887294
    b lbl_fn_804A894C_00002108
lbl_fn_804A894C_00002104:
    lfs f0, lbl_80887298
lbl_fn_804A894C_00002108:
    fneg f0, f0
    stfs f0, 0x8c(r1)
    b lbl_fn_804A894C_00002128
lbl_fn_804A894C_00002114:
    lfs f1, 0x9c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x8c(r1)
lbl_fn_804A894C_00002128:
    lwz r6, lbl_8087F8A0
    addi r5, r1, 0x8c
    lfs f7, lbl_80887250
    lis r4, 0xff39
    lwz r8, 0x48(r6)
    addi r4, r4, 0x5a83
    lwz r3, lbl_8087EEB0
    fmr f2, f7
    lfs f6, lbl_80887258
    fmr f8, f7
    stfs f6, 0x8(r1)
    addi r6, r24, 0x1d8
    psq_l f1, 0x0(r5), 0, 0
    stfs f6, 0xc(r1)
    addi r5, r3, 0x10
    lfs f4, lbl_80887268
    li r7, 0x0
    stfs f7, 0x10(r1)
    lfs f0, lbl_8088728C
    fmr f5, f4
    stfs f7, 0x14(r1)
    lfs f11, lbl_80887288
    stfs f6, 0x18(r1)
    lfs f3, lbl_808872A0
    stfs f6, 0x1c(r1)
    lfs f6, 0x538(r8)
    lfs f9, 0x5e4(r24)
    fsubs f0, f6, f0
    lfs f6, 0x5dc(r24)
    psq_st f1, 0x0(r20), 0, 0
    fmadds f1, f11, f9, f6
    lfs f10, 0x5e8(r24)
    lfs f9, 0x5e0(r24)
    stfs f2, 0x1cc(r1)
    fneg f6, f0
    fmadds f2, f11, f10, f9
    stfs f7, 0x94(r1)
    bl fn_8005EE38
    lfs f28, lbl_80887250
    addi r30, r1, 0x158
    lfs f27, lbl_80887258
    addi r29, r1, 0x1ac
    lfs f24, lbl_80887288
    addi r28, r1, 0x188
    lfs f25, lbl_808872A4
    addi r26, r1, 0x50
    lfs f26, lbl_80887290
    addi r27, r1, 0x44
    lfs f29, lbl_80887274
    li r25, 0x0
    lfs f30, 0x1dc(r1)
    li r23, 0x0
    lfs f31, 0x1e0(r1)
lbl_fn_804A894C_000021FC:
    add r31, r24, r23
    lwz r0, 0x834(r31)
    cmpwi r0, 0x1
    bne lbl_fn_804A894C_00002AAC
    lwz r4, 0x838(r31)
    cmpwi r4, -0x1
    beq lbl_fn_804A894C_00002228
    lwz r3, lbl_8087F430
    bl fn_80370174
    cmpwi r3, 0x0
    beq lbl_fn_804A894C_00002AAC
lbl_fn_804A894C_00002228:
    lfs f6, 0x854(r31)
    addi r3, r1, 0x1ac
    lfs f5, 0x84c(r31)
    lfs f4, 0x1f0(r1)
    lfs f3, 0x1ec(r1)
    lfs f0, 0x1e8(r1)
    fsubs f4, f6, f4
    fsubs f3, f28, f3
    stfs f5, 0x1b8(r1)
    fsubs f0, f5, f0
    stfs f28, 0x1bc(r1)
    stfs f6, 0x1c0(r1)
    stfs f0, 0x1ac(r1)
    stfs f3, 0x1b0(r1)
    stfs f4, 0x1b4(r1)
    bl fn_805F9940
    lfs f0, 0x5fc(r24)
    addi r4, r1, 0x1a0
    lfs f4, 0x1b4(r1)
    mr r5, r4
    fdivs f5, f27, f0
    lfs f3, 0x1b0(r1)
    lfs f0, 0x1ac(r1)
    addi r3, r1, 0x348
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    fmuls f0, f0, f5
    stfs f4, 0x16c(r1)
    fmuls f4, f4, f19
    fmuls f5, f3, f19
    stfs f0, 0x164(r1)
    fmuls f0, f0, f19
    stfs f3, 0x168(r1)
    stfs f0, 0x1a0(r1)
    stfs f5, 0x1a4(r1)
    stfs f4, 0x1a8(r1)
    bl fn_805F93C0
    lfs f3, 0x5e4(r24)
    li r0, 0x0
    lfs f4, 0x1a0(r1)
    fneg f0, f3
    fmadds f0, f24, f0, f25
    fcmpo cr0, f4, f0
    ble lbl_fn_804A894C_0000230C
    fmsubs f0, f24, f3, f25
    fcmpo cr0, f4, f0
    bge lbl_fn_804A894C_0000230C
    lfs f3, 0x5e8(r24)
    lfs f4, 0x1a8(r1)
    fneg f0, f3
    fmadds f0, f24, f0, f25
    fcmpo cr0, f4, f0
    ble lbl_fn_804A894C_0000230C
    fmsubs f0, f24, f3, f25
    fcmpo cr0, f4, f0
    bge lbl_fn_804A894C_0000230C
    li r0, 0x1
lbl_fn_804A894C_0000230C:
    cmpwi r0, 0x0
    bne lbl_fn_804A894C_00002828
    lwz r0, 0x858(r31)
    cmpwi r0, 0x0
    beq lbl_fn_804A894C_00002AAC
    lfs f3, 0x5e4(r24)
    lfs f0, 0x1a0(r1)
    fmsubs f4, f24, f3, f25
    fcmpo cr0, f4, f0
    bge lbl_fn_804A894C_00002338
    b lbl_fn_804A894C_0000233C
lbl_fn_804A894C_00002338:
    fmr f4, f0
lbl_fn_804A894C_0000233C:
    lfs f3, 0x5e4(r24)
    fneg f0, f3
    fmadds f5, f24, f0, f25
    fcmpo cr0, f5, f4
    ble lbl_fn_804A894C_00002354
    b lbl_fn_804A894C_0000236C
lbl_fn_804A894C_00002354:
    fmsubs f5, f24, f3, f25
    lfs f0, 0x1a0(r1)
    fcmpo cr0, f5, f0
    bge lbl_fn_804A894C_00002368
    b lbl_fn_804A894C_0000236C
lbl_fn_804A894C_00002368:
    fmr f5, f0
lbl_fn_804A894C_0000236C:
    stfs f5, 0x1a0(r1)
    lfs f0, 0x1a8(r1)
    lfs f3, 0x5e8(r24)
    fmsubs f4, f24, f3, f25
    fcmpo cr0, f4, f0
    bge lbl_fn_804A894C_00002388
    b lbl_fn_804A894C_0000238C
lbl_fn_804A894C_00002388:
    fmr f4, f0
lbl_fn_804A894C_0000238C:
    lfs f3, 0x5e8(r24)
    fneg f0, f3
    fmadds f5, f24, f0, f25
    fcmpo cr0, f5, f4
    ble lbl_fn_804A894C_000023A4
    b lbl_fn_804A894C_000023BC
lbl_fn_804A894C_000023A4:
    fmsubs f5, f24, f3, f25
    lfs f0, 0x1a8(r1)
    fcmpo cr0, f5, f0
    bge lbl_fn_804A894C_000023B8
    b lbl_fn_804A894C_000023BC
lbl_fn_804A894C_000023B8:
    fmr f5, f0
lbl_fn_804A894C_000023BC:
    psq_l f1, 0x0(r29), 0, 0
    mr r3, r30
    lfs f2, 0x1b4(r1)
    mr r4, r30
    stfs f5, 0x1a8(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x160(r1)
    bl fn_805F98D0
    lfs f4, 0x160(r1)
    addi r4, r1, 0x194
    lfs f3, 0x15c(r1)
    mr r5, r4
    lfs f0, 0x158(r1)
    fmuls f4, f4, f19
    fmuls f3, f3, f19
    addi r3, r1, 0x348
    fmuls f0, f0, f19
    stfs f4, 0x19c(r1)
    stfs f0, 0x194(r1)
    stfs f3, 0x198(r1)
    bl fn_805F93C0
    lfs f0, 0x19c(r1)
    lfs f1, 0x194(r1)
    fneg f0, f0
    stfs f1, 0x188(r1)
    stfs f0, 0x190(r1)
    frsp f2, f0
    stfs f28, 0x18c(r1)
    fabs f0, f2
    frsp f0, f0
    fcmpo cr0, f0, f26
    bge lbl_fn_804A894C_00002458
    fcmpo cr0, f1, f28
    ble lbl_fn_804A894C_0000244C
    lfs f0, lbl_80887294
    b lbl_fn_804A894C_00002450
lbl_fn_804A894C_0000244C:
    lfs f0, lbl_80887298
lbl_fn_804A894C_00002450:
    stfs f0, 0x48(r1)
    b lbl_fn_804A894C_00002464
lbl_fn_804A894C_00002458:
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_804A894C_00002464:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x238
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f0, 0x240(r1)
    mr r4, r26
    lfs f3, 0x23c(r1)
    mr r5, r26
    lfs f4, 0x238(r1)
    addi r3, r1, 0x1f8
    lfs f5, 0x250(r1)
    lfs f6, 0x24c(r1)
    lfs f7, 0x248(r1)
    lfs f8, 0x260(r1)
    lfs f9, 0x25c(r1)
    lfs f10, 0x258(r1)
    lfs f11, 0x264(r1)
    lfs f12, 0x254(r1)
    lfs f13, 0x244(r1)
    psq_l f1, 0x0(r28), 0, 0
    lfs f2, 0x190(r1)
    stfs f28, 0x228(r1)
    stfs f28, 0x22c(r1)
    stfs f28, 0x230(r1)
    stfs f27, 0x234(r1)
    stfs f4, 0x80(r1)
    stfs f3, 0x84(r1)
    stfs f0, 0x88(r1)
    stfs f4, 0x1f8(r1)
    stfs f3, 0x1fc(r1)
    stfs f0, 0x200(r1)
    stfs f7, 0x74(r1)
    stfs f6, 0x78(r1)
    stfs f5, 0x7c(r1)
    stfs f7, 0x208(r1)
    stfs f6, 0x20c(r1)
    stfs f5, 0x210(r1)
    stfs f10, 0x68(r1)
    stfs f9, 0x6c(r1)
    stfs f8, 0x70(r1)
    stfs f10, 0x218(r1)
    stfs f9, 0x21c(r1)
    stfs f8, 0x220(r1)
    stfs f13, 0x5c(r1)
    stfs f12, 0x60(r1)
    stfs f11, 0x64(r1)
    stfs f13, 0x204(r1)
    stfs f12, 0x214(r1)
    stfs f11, 0x224(r1)
    psq_st f1, 0x0(r26), 0, 0
    stfs f2, 0x58(r1)
    bl fn_805F9750
    lfs f2, 0x58(r1)
    fabs f0, f2
    frsp f0, f0
    fcmpo cr0, f0, f26
    bge lbl_fn_804A894C_00002570
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f28
    ble lbl_fn_804A894C_00002560
    lfs f0, lbl_80887294
    b lbl_fn_804A894C_00002564
lbl_fn_804A894C_00002560:
    lfs f0, lbl_80887298
lbl_fn_804A894C_00002564:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_804A894C_00002584
lbl_fn_804A894C_00002570:
    lfs f1, 0x54(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_804A894C_00002584:
    lfs f0, 0x610(r24)
    fmr f2, f28
    psq_l f1, 0x0(r27), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    fcmpo cr0, f0, f27
    stfs f28, 0x4c(r1)
    lfs f18, 0x18c(r1)
    stfs f2, 0x190(r1)
    cror eq, gt, eq
    bne lbl_fn_804A894C_000025B4
    li r22, 0xff
    b lbl_fn_804A894C_000025D4
lbl_fn_804A894C_000025B4:
    fcmpo cr0, f0, f28
    cror eq, lt, eq
    bne lbl_fn_804A894C_000025C8
    li r3, 0x0
    b lbl_fn_804A894C_000025D0
lbl_fn_804A894C_000025C8:
    fmadds f1, f29, f0, f24
    bl fn_80695D84
lbl_fn_804A894C_000025D0:
    mr r22, r3
lbl_fn_804A894C_000025D4:
    lfs f0, 0x614(r24)
    fcmpo cr0, f0, f27
    cror eq, gt, eq
    bne lbl_fn_804A894C_000025EC
    li r21, 0xff
    b lbl_fn_804A894C_0000260C
lbl_fn_804A894C_000025EC:
    fcmpo cr0, f0, f28
    cror eq, lt, eq
    bne lbl_fn_804A894C_00002600
    li r3, 0x0
    b lbl_fn_804A894C_00002608
lbl_fn_804A894C_00002600:
    fmadds f1, f29, f0, f24
    bl fn_80695D84
lbl_fn_804A894C_00002608:
    mr r21, r3
lbl_fn_804A894C_0000260C:
    lfs f0, 0x618(r24)
    fcmpo cr0, f0, f27
    cror eq, gt, eq
    bne lbl_fn_804A894C_00002624
    li r20, 0xff
    b lbl_fn_804A894C_00002644
lbl_fn_804A894C_00002624:
    fcmpo cr0, f0, f28
    cror eq, lt, eq
    bne lbl_fn_804A894C_00002638
    li r3, 0x0
    b lbl_fn_804A894C_00002640
lbl_fn_804A894C_00002638:
    fmadds f1, f29, f0, f24
    bl fn_80695D84
lbl_fn_804A894C_00002640:
    mr r20, r3
lbl_fn_804A894C_00002644:
    lfs f0, 0x61c(r24)
    fcmpo cr0, f0, f27
    cror eq, gt, eq
    bne lbl_fn_804A894C_0000265C
    li r3, 0xff
    b lbl_fn_804A894C_00002678
lbl_fn_804A894C_0000265C:
    fcmpo cr0, f0, f28
    cror eq, lt, eq
    bne lbl_fn_804A894C_00002670
    li r3, 0x0
    b lbl_fn_804A894C_00002678
lbl_fn_804A894C_00002670:
    fmadds f1, f29, f0, f24
    bl fn_80695D84
lbl_fn_804A894C_00002678:
    stfs f27, 0x8(r1)
    slwi r0, r22, 16
    lfs f7, lbl_80887250
    slwi r3, r3, 24
    stfs f27, 0xc(r1)
    or r0, r3, r0
    slwi r3, r21, 8
    fmr f6, f18
    lfs f0, 0x85c(r31)
    or r0, r3, r0
    lfs f3, 0x1a0(r1)
    fmr f8, f7
    fmuls f4, f21, f0
    lfs f0, 0x1a8(r1)
    fadds f1, f30, f3
    lwz r3, lbl_8087EEB0
    or r4, r20, r0
    fmr f5, f4
    fadds f2, f31, f0
    lfs f3, lbl_808872A0
    addi r5, r24, 0x178
    li r6, 0x1
    li r7, 0x1
    bl fn_8005EDF0
    lfs f0, 0x83c(r31)
    fcmpo cr0, f0, f27
    cror eq, gt, eq
    bne lbl_fn_804A894C_000026F0
    li r22, 0xff
    b lbl_fn_804A894C_00002710
lbl_fn_804A894C_000026F0:
    fcmpo cr0, f0, f28
    cror eq, lt, eq
    bne lbl_fn_804A894C_00002704
    li r3, 0x0
    b lbl_fn_804A894C_0000270C
lbl_fn_804A894C_00002704:
    fmadds f1, f29, f0, f24
    bl fn_80695D84
lbl_fn_804A894C_0000270C:
    mr r22, r3
lbl_fn_804A894C_00002710:
    lfs f0, 0x840(r31)
    fcmpo cr0, f0, f27
    cror eq, gt, eq
    bne lbl_fn_804A894C_00002728
    li r21, 0xff
    b lbl_fn_804A894C_00002748
lbl_fn_804A894C_00002728:
    fcmpo cr0, f0, f28
    cror eq, lt, eq
    bne lbl_fn_804A894C_0000273C
    li r3, 0x0
    b lbl_fn_804A894C_00002744
lbl_fn_804A894C_0000273C:
    fmadds f1, f29, f0, f24
    bl fn_80695D84
lbl_fn_804A894C_00002744:
    mr r21, r3
lbl_fn_804A894C_00002748:
    lfs f0, 0x844(r31)
    fcmpo cr0, f0, f27
    cror eq, gt, eq
    bne lbl_fn_804A894C_00002760
    li r20, 0xff
    b lbl_fn_804A894C_00002780
lbl_fn_804A894C_00002760:
    fcmpo cr0, f0, f28
    cror eq, lt, eq
    bne lbl_fn_804A894C_00002774
    li r3, 0x0
    b lbl_fn_804A894C_0000277C
lbl_fn_804A894C_00002774:
    fmadds f1, f29, f0, f24
    bl fn_80695D84
lbl_fn_804A894C_0000277C:
    mr r20, r3
lbl_fn_804A894C_00002780:
    lfs f0, 0x848(r31)
    fcmpo cr0, f0, f27
    cror eq, gt, eq
    bne lbl_fn_804A894C_00002798
    li r3, 0xff
    b lbl_fn_804A894C_000027B4
lbl_fn_804A894C_00002798:
    fcmpo cr0, f0, f28
    cror eq, lt, eq
    bne lbl_fn_804A894C_000027AC
    li r3, 0x0
    b lbl_fn_804A894C_000027B4
lbl_fn_804A894C_000027AC:
    fmadds f1, f29, f0, f24
    bl fn_80695D84
lbl_fn_804A894C_000027B4:
    stfs f27, 0x8(r1)
    slwi r0, r22, 16
    slwi r3, r3, 24
    fmr f6, f18
    stfs f27, 0xc(r1)
    or r0, r3, r0
    slwi r3, r21, 8
    fmr f7, f28
    stfs f28, 0x10(r1)
    or r0, r3, r0
    fmr f8, f28
    stfs f28, 0x14(r1)
    addi r5, r24, 0x88
    lfs f3, lbl_808872A0
    or r4, r20, r0
    stfs f27, 0x18(r1)
    addi r6, r24, 0x118
    li r7, 0x0
    stfs f27, 0x1c(r1)
    lfs f0, 0x85c(r31)
    lfs f5, 0x1a0(r1)
    fmuls f4, f23, f0
    lfs f0, 0x1a8(r1)
    fadds f1, f30, f5
    lwz r3, lbl_8087EEB0
    fadds f2, f31, f0
    fmr f5, f4
    bl fn_8005EE38
    b lbl_fn_804A894C_00002AAC
lbl_fn_804A894C_00002828:
    lfs f0, 0x620(r24)
    fcmpo cr0, f0, f27
    cror eq, gt, eq
    bne lbl_fn_804A894C_00002840
    li r22, 0xff
    b lbl_fn_804A894C_00002860
lbl_fn_804A894C_00002840:
    fcmpo cr0, f0, f28
    cror eq, lt, eq
    bne lbl_fn_804A894C_00002854
    li r3, 0x0
    b lbl_fn_804A894C_0000285C
lbl_fn_804A894C_00002854:
    fmadds f1, f29, f0, f24
    bl fn_80695D84
lbl_fn_804A894C_0000285C:
    mr r22, r3
lbl_fn_804A894C_00002860:
    lfs f0, 0x624(r24)
    fcmpo cr0, f0, f27
    cror eq, gt, eq
    bne lbl_fn_804A894C_00002878
    li r21, 0xff
    b lbl_fn_804A894C_00002898
lbl_fn_804A894C_00002878:
    fcmpo cr0, f0, f28
    cror eq, lt, eq
    bne lbl_fn_804A894C_0000288C
    li r3, 0x0
    b lbl_fn_804A894C_00002894
lbl_fn_804A894C_0000288C:
    fmadds f1, f29, f0, f24
    bl fn_80695D84
lbl_fn_804A894C_00002894:
    mr r21, r3
lbl_fn_804A894C_00002898:
    lfs f0, 0x628(r24)
    fcmpo cr0, f0, f27
    cror eq, gt, eq
    bne lbl_fn_804A894C_000028B0
    li r20, 0xff
    b lbl_fn_804A894C_000028D0
lbl_fn_804A894C_000028B0:
    fcmpo cr0, f0, f28
    cror eq, lt, eq
    bne lbl_fn_804A894C_000028C4
    li r3, 0x0
    b lbl_fn_804A894C_000028CC
lbl_fn_804A894C_000028C4:
    fmadds f1, f29, f0, f24
    bl fn_80695D84
lbl_fn_804A894C_000028CC:
    mr r20, r3
lbl_fn_804A894C_000028D0:
    lfs f0, 0x62c(r24)
    fcmpo cr0, f0, f27
    cror eq, gt, eq
    bne lbl_fn_804A894C_000028E8
    li r3, 0xff
    b lbl_fn_804A894C_00002904
lbl_fn_804A894C_000028E8:
    fcmpo cr0, f0, f28
    cror eq, lt, eq
    bne lbl_fn_804A894C_000028FC
    li r3, 0x0
    b lbl_fn_804A894C_00002904
lbl_fn_804A894C_000028FC:
    fmadds f1, f29, f0, f24
    bl fn_80695D84
lbl_fn_804A894C_00002904:
    stfs f27, 0x8(r1)
    fmuls f11, f24, f20
    lfs f6, lbl_80887250
    slwi r0, r22, 16
    lfs f3, 0x1a0(r1)
    slwi r3, r3, 24
    lfs f9, 0x85c(r31)
    fadds f10, f30, f3
    lfs f0, 0x1a8(r1)
    fmuls f4, f20, f9
    or r0, r3, r0
    fadds f0, f31, f0
    slwi r3, r21, 8
    or r0, r3, r0
    fmr f7, f6
    fmr f5, f4
    lwz r3, lbl_8087EEB0
    fmr f8, f27
    lfs f3, lbl_808872A0
    fnmsubs f1, f11, f9, f10
    fnmsubs f2, f11, f9, f0
    or r4, r20, r0
    addi r5, r24, 0x1a8
    li r6, 0x1
    li r7, 0x1
    bl fn_8005E3E4
    lfs f0, 0x83c(r31)
    fcmpo cr0, f0, f27
    cror eq, gt, eq
    bne lbl_fn_804A894C_00002984
    li r20, 0xff
    b lbl_fn_804A894C_000029A4
lbl_fn_804A894C_00002984:
    fcmpo cr0, f0, f28
    cror eq, lt, eq
    bne lbl_fn_804A894C_00002998
    li r3, 0x0
    b lbl_fn_804A894C_000029A0
lbl_fn_804A894C_00002998:
    fmadds f1, f29, f0, f24
    bl fn_80695D84
lbl_fn_804A894C_000029A0:
    mr r20, r3
lbl_fn_804A894C_000029A4:
    lfs f0, 0x840(r31)
    fcmpo cr0, f0, f27
    cror eq, gt, eq
    bne lbl_fn_804A894C_000029BC
    li r21, 0xff
    b lbl_fn_804A894C_000029DC
lbl_fn_804A894C_000029BC:
    fcmpo cr0, f0, f28
    cror eq, lt, eq
    bne lbl_fn_804A894C_000029D0
    li r3, 0x0
    b lbl_fn_804A894C_000029D8
lbl_fn_804A894C_000029D0:
    fmadds f1, f29, f0, f24
    bl fn_80695D84
lbl_fn_804A894C_000029D8:
    mr r21, r3
lbl_fn_804A894C_000029DC:
    lfs f0, 0x844(r31)
    fcmpo cr0, f0, f27
    cror eq, gt, eq
    bne lbl_fn_804A894C_000029F4
    li r22, 0xff
    b lbl_fn_804A894C_00002A14
lbl_fn_804A894C_000029F4:
    fcmpo cr0, f0, f28
    cror eq, lt, eq
    bne lbl_fn_804A894C_00002A08
    li r3, 0x0
    b lbl_fn_804A894C_00002A10
lbl_fn_804A894C_00002A08:
    fmadds f1, f29, f0, f24
    bl fn_80695D84
lbl_fn_804A894C_00002A10:
    mr r22, r3
lbl_fn_804A894C_00002A14:
    lfs f0, 0x848(r31)
    fcmpo cr0, f0, f27
    cror eq, gt, eq
    bne lbl_fn_804A894C_00002A2C
    li r3, 0xff
    b lbl_fn_804A894C_00002A48
lbl_fn_804A894C_00002A2C:
    fcmpo cr0, f0, f28
    cror eq, lt, eq
    bne lbl_fn_804A894C_00002A40
    li r3, 0x0
    b lbl_fn_804A894C_00002A48
lbl_fn_804A894C_00002A40:
    fmadds f1, f29, f0, f24
    bl fn_80695D84
lbl_fn_804A894C_00002A48:
    stfs f27, 0x8(r1)
    fmuls f11, f24, f22
    lfs f6, lbl_80887250
    slwi r0, r20, 16
    lfs f3, 0x1a0(r1)
    slwi r3, r3, 24
    lfs f9, 0x85c(r31)
    fadds f10, f30, f3
    lfs f0, 0x1a8(r1)
    fmuls f4, f22, f9
    or r0, r3, r0
    fadds f0, f31, f0
    slwi r3, r21, 8
    or r0, r3, r0
    fmr f7, f6
    fmr f5, f4
    lwz r3, lbl_8087EEB0
    fmr f8, f27
    lfs f3, lbl_808872A0
    fnmsubs f1, f11, f9, f10
    fnmsubs f2, f11, f9, f0
    or r4, r22, r0
    addi r5, r24, 0xb8
    addi r6, r24, 0x148
    bl fn_8005E7F4
lbl_fn_804A894C_00002AAC:
    addi r25, r25, 0x1
    addi r23, r23, 0x2c
    cmplwi r25, 0x40
    blt lbl_fn_804A894C_000021FC
    lfs f9, lbl_80887250
    li r0, 0x1
    lfs f10, 0x1f0(r1)
    lis r4, lbl_80757648@ha
    lfs f4, 0x1e8(r1)
    addi r3, r24, 0x640
    lfs f0, lbl_808872A8
    lfs f8, lbl_8088729C
    stfs f0, 0x64c(r24)
    lfd f7, lbl_80757648@l(r4)
    stw r0, 0x644(r24)
    lfs f3, 0x5e8(r24)
    lfs f0, lbl_808872AC
    stfs f4, 0x648(r24)
    fmuls f5, f3, f0
    lfs f6, 0x5fc(r24)
    stfs f4, 0x654(r24)
    lfs f4, lbl_80887288
    stfs f10, 0x650(r24)
    stfs f9, 0x658(r24)
    stfs f10, 0x65c(r24)
    stfs f9, 0x660(r24)
    stfs f9, 0x664(r24)
    stfs f8, 0x668(r24)
    lwz r5, lbl_8087EEE0
    lwz r4, 0x40(r5)
    lwz r0, 0x3c(r5)
    xoris r4, r4, 0x8000
    stw r4, 0x37c(r1)
    xoris r0, r0, 0x8000
    lfd f0, 0x378(r1)
    stw r0, 0x384(r1)
    fsubs f0, f0, f7
    lfd f3, 0x380(r1)
    stw r4, 0x37c(r1)
    fmuls f6, f6, f0
    lfd f0, 0x378(r1)
    fsubs f3, f3, f7
    fdivs f6, f6, f19
    fsubs f0, f0, f7
    fmuls f5, f6, f5
    fdivs f6, f3, f0
    fneg f3, f5
    fmuls f0, f4, f5
    fmuls f3, f4, f3
    stfs f0, 0x67c(r24)
    fmuls f0, f0, f6
    stfs f3, 0x680(r24)
    stfs f0, 0x688(r24)
    fmuls f0, f3, f6
    stfs f0, 0x684(r24)
    bl fn_8004B378
    cmpwi r24, 0x0
    mr r4, r24
    beq lbl_fn_804A894C_00002B9C
    addi r4, r24, 0x48
lbl_fn_804A894C_00002B9C:
    lwz r3, lbl_8087EFB4
    li r5, 0x2
    lfs f1, lbl_80887250
    bl fn_800BDB58
    cmpwi r24, 0x0
    beq lbl_fn_804A894C_00002BB8
    addi r24, r24, 0x48
lbl_fn_804A894C_00002BB8:
    lwz r3, lbl_8087EFB4
    mr r4, r24
    lfs f1, lbl_80887250
    li r5, 0x10
    bl fn_800BDB58
lbl_fn_804A894C_00002BCC:
    addi r11, r1, 0x3e0
    psq_l f31, 0x4b8(r1), 0, 0
    lfd f31, 0x4b0(r1)
    psq_l f30, 0x4a8(r1), 0, 0
    lfd f30, 0x4a0(r1)
    psq_l f29, 0x498(r1), 0, 0
    lfd f29, 0x490(r1)
    psq_l f28, 0x488(r1), 0, 0
    lfd f28, 0x480(r1)
    psq_l f27, 0x478(r1), 0, 0
    lfd f27, 0x470(r1)
    psq_l f26, 0x468(r1), 0, 0
    lfd f26, 0x460(r1)
    psq_l f25, 0x458(r1), 0, 0
    lfd f25, 0x450(r1)
    psq_l f24, 0x448(r1), 0, 0
    lfd f24, 0x440(r1)
    psq_l f23, 0x438(r1), 0, 0
    lfd f23, 0x430(r1)
    psq_l f22, 0x428(r1), 0, 0
    lfd f22, 0x420(r1)
    psq_l f21, 0x418(r1), 0, 0
    lfd f21, 0x410(r1)
    psq_l f20, 0x408(r1), 0, 0
    lfd f20, 0x400(r1)
    psq_l f19, 0x3f8(r1), 0, 0
    lfd f19, 0x3f0(r1)
    psq_l f18, 0x3e8(r1), 0, 0
    lfd f18, 0x3e0(r1)
    bl _restgpr_20
    lwz r0, 0x4c4(r1)
    mtlr r0
    addi r1, r1, 0x4c0
    blr
}
