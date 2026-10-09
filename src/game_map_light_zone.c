#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_26(void);
extern void _savegpr_26(void);
extern void fn_80092814(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800A555C(void);
extern void fn_800C31F4(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_800F8548(void);
extern void fn_800FAB80(void);
extern void fn_80219E6C(void);
extern void fn_8023A8B4(void);
extern void fn_803E3384(void);
extern void fn_803EA77C(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_80680CF8(void);
extern void fn_8068AEA4(void);

/* External data declarations */
extern u8 lbl_80739F34[];
extern u8 lbl_8077EB20[];
extern u8 lbl_8077EB98[];
extern u8 lbl_8077EC10[];
extern u8 lbl_8077EC88[];

/* Small data declarations */
extern u32 lbl_8087EF70;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F490;
extern u32 lbl_8087F498;
extern u32 lbl_80881FBC;
extern u32 lbl_80881FCC;
extern u32 lbl_80881FD0;
extern u32 lbl_80881FD4;
extern u32 lbl_80881FD8;
extern u32 lbl_80881FDC;
extern u32 lbl_80881FE8;
extern u32 lbl_80881FEC;
extern u32 lbl_80881FF0;
extern u32 lbl_80881FF4;
extern u32 lbl_80881FF8;
extern u32 lbl_80881FFC;
extern u32 lbl_80882000;
extern u32 lbl_80882004;
extern u32 lbl_80882008;
extern u32 lbl_8088200C;
extern u32 lbl_80882010;
extern u32 lbl_80882014;
extern u32 lbl_80882018;
extern u32 lbl_8088201C;
extern u32 lbl_80882020;
extern u32 lbl_80882024;
extern u32 lbl_80882028;
extern u32 lbl_8088202C;
extern u32 lbl_80882030;
extern u32 lbl_80882034;
extern u32 lbl_80882038;
extern u32 lbl_8088203C;
extern u32 lbl_80882040;
extern u32 lbl_80882044;
extern u32 lbl_80882048;
extern u32 lbl_8088204C;
extern u32 lbl_80882050;
extern u32 lbl_80882054;
extern u32 lbl_80882058;
extern u32 lbl_8088205C;
extern u32 lbl_80882060;

/* Function declarations */
void fn_8019355C(void);
void fn_8019356C(void);
void fn_801937CC(void);
void fn_80193EF8(void);
void fn_80194334(void);
void fn_80194550(void);
void fn_80194790(void);
void fn_80194D5C(void);
void fn_80194E2C(void);

asm void fn_8019355C(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    li r0, 0x0
    stw r0, 0xf1c(r3)
    blr
}

asm void fn_8019356C(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    lis r9, lbl_8077EC88@ha
    li r8, 0x0
    stw r0, 0xa4(r1)
    addi r9, r9, lbl_8077EC88@l
    li r0, 0x4b
    stfd f31, 0x90(r1)
    psq_st f31, 0x98(r1), 0, 0
    stw r31, 0x8c(r1)
    mr r31, r3
    stw r30, 0x88(r1)
    addi r30, r1, 0x38
    stw r29, 0x84(r1)
    mr r29, r5
    stw r4, 0x4(r3)
    stw r9, 0x0(r3)
    stw r5, 0x18(r3)
    stw r7, 0x1c(r3)
    stw r8, 0x20(r3)
    stw r8, 0x24(r3)
    stw r8, 0x58c(r4)
    li r4, 0x79
    lwz r7, 0x4(r3)
    addi r3, r1, 0x48
    stw r0, 0x560(r7)
    lfs f31, 0x538(r5)
    lfs f2, 0x8(r6)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    fmr f1, f31
    stfs f2, 0x40(r1)
    bl fn_805F8E70
    mr r4, r30
    mr r5, r30
    addi r3, r1, 0x48
    bl fn_805F93C0
    lfs f4, 0x38(r1)
    addi r3, r1, 0x8
    lfs f3, 0x528(r29)
    addi r11, r1, 0x14
    lfs f0, lbl_80881FE8
    addi r10, r1, 0x20
    fadds f4, f4, f3
    lfs f3, 0x3c(r1)
    fadds f6, f0, f31
    lfs f7, 0x40(r1)
    stfs f4, 0x38(r1)
    addi r12, r1, 0x2c
    lfs f0, 0x52c(r29)
    li r0, 0x1
    lfs f4, lbl_80881FEC
    li r4, 0x0
    fadds f5, f3, f0
    lfs f0, lbl_80881FF0
    lfs f3, lbl_80881FBC
    li r5, 0x20b
    stfs f5, 0x3c(r1)
    li r6, 0x0
    lfs f5, 0x530(r29)
    li r7, 0x0
    li r8, 0x1
    fadds f5, f7, f5
    stfs f5, 0x40(r1)
    lwz r9, 0x4(r31)
    lfs f5, 0x538(r9)
    fsubs f5, f6, f5
    fdivs f4, f5, f4
    stfs f4, 0x14(r31)
    lwz r30, lbl_8087F430
    lfs f7, 0x78(r30)
    addi r9, r30, 0x9cc
    lfs f6, 0x84(r30)
    lfs f5, 0x74(r30)
    fsubs f7, f7, f6
    lfs f4, 0x80(r30)
    lfs f6, 0x7c(r30)
    fsubs f5, f5, f4
    lfs f4, 0x88(r30)
    stfs f7, 0xc(r1)
    fsubs f8, f6, f4
    stfs f5, 0x8(r1)
    psq_l f1, 0x0(r3), 0, 0
    fmr f2, f8
    psq_st f1, 0x0(r9), 0, 0
    stfs f2, 0x9d4(r30)
    lwz r9, 0x4(r31)
    lfs f5, 0x40(r1)
    lfs f4, 0x530(r9)
    addi r30, r9, 0xb0
    lfs f7, 0x3c(r1)
    mr r3, r30
    fsubs f9, f5, f4
    lfs f6, 0x52c(r9)
    lfs f5, 0x38(r1)
    lfs f4, 0x528(r9)
    fsubs f6, f7, f6
    fmr f2, f9
    fsubs f4, f5, f4
    stfs f6, 0x18(r1)
    stfs f4, 0x14(r1)
    frsp f4, f2
    psq_l f1, 0x0(r11), 0, 0
    psq_st f1, 0x0(r10), 0, 0
    fmuls f6, f4, f0
    lfs f5, 0x24(r1)
    stfs f2, 0x28(r1)
    fmr f2, f6
    fmuls f5, f5, f0
    lfs f4, 0x20(r1)
    stfs f2, 0x10(r31)
    fmuls f0, f4, f0
    lfs f2, lbl_80881FDC
    stfs f5, 0x30(r1)
    stfs f0, 0x2c(r1)
    psq_l f1, 0x0(r12), 0, 0
    psq_st f1, 0x8(r31), 0, 0
    lfs f1, lbl_80881FCC
    stw r0, 0x3fc(r9)
    stfs f8, 0x10(r1)
    stfs f9, 0x1c(r1)
    stfs f6, 0x34(r1)
    stfs f3, 0x2fc(r9)
    bl fn_80097C08
    lfs f0, lbl_80881FBC
    stfs f0, 0x238(r30)
    lwz r0, lbl_8087F498
    cmpwi r0, 0x0
    beq lbl_fn_8019356C_00000248
    bl fn_80680CF8
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    subf. r0, r4, r0
    bne lbl_fn_8019356C_00000248
    lwz r3, lbl_8087F498
    li r5, 0x20
    lwz r4, 0x4(r31)
    li r6, 0x0
    lfs f1, lbl_80881FBC
    lfs f2, lbl_80881FF4
    bl fn_803EA77C
lbl_fn_8019356C_00000248:
    psq_l f31, 0x98(r1), 0, 0
    mr r3, r31
    lfd f31, 0x90(r1)
    lwz r31, 0x8c(r1)
    lwz r30, 0x88(r1)
    lwz r29, 0x84(r1)
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_801937CC(void)
{
    nofralloc
    stwu r1, -0xe0(r1)
    mflr r0
    stw r0, 0xe4(r1)
    addi r11, r1, 0xd0
    stfd f31, 0xd0(r1)
    psq_st f31, 0xd8(r1), 0, 0
    bl _savegpr_26
    lwz r6, 0x4(r3)
    addi r4, r1, 0x24
    lwz r0, 0x24(r3)
    addi r5, r1, 0x18
    psq_l f1, 0x528(r6), 0, 0
    mr r30, r3
    lfs f2, 0x530(r6)
    cmpwi r0, 0x0
    psq_st f1, 0x0(r4), 0, 0
    addi r31, r6, 0xb0
    psq_l f1, 0x534(r6), 0, 0
    stfs f2, 0x2c(r1)
    lfs f2, 0x53c(r6)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x20(r1)
    beq lbl_fn_801937CC_000003F4
    lwz r0, 0x1c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801937CC_000003CC
    lwz r0, 0x20(r3)
    cmpwi r0, 0x2
    bge lbl_fn_801937CC_000003CC
    lwz r6, 0x18(r3)
    cmpwi r6, 0x0
    beq lbl_fn_801937CC_000003CC
    lwz r8, 0x38(r6)
    li r5, 0x0
    li r0, 0x0
    li r4, 0x0
    rlwinm r7, r8, 0, 29, 29
    cmplwi r7, 0x4
    beq lbl_fn_801937CC_0000031C
    clrlwi r7, r8, 31
    cmplwi r7, 0x1
    beq lbl_fn_801937CC_0000031C
    li r4, 0x1
lbl_fn_801937CC_0000031C:
    cmpwi r4, 0x0
    beq lbl_fn_801937CC_00000338
    lwz r4, 0x7e0(r6)
    rlwinm r4, r4, 0, 26, 26
    cmplwi r4, 0x20
    beq lbl_fn_801937CC_00000338
    li r0, 0x1
lbl_fn_801937CC_00000338:
    cmpwi r0, 0x0
    beq lbl_fn_801937CC_0000036C
    lwz r0, 0x55c(r6)
    li r4, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_801937CC_00000360
    lwz r0, 0x560(r6)
    cmpwi r0, 0x1c
    bne lbl_fn_801937CC_00000360
    li r4, 0x1
lbl_fn_801937CC_00000360:
    cmpwi r4, 0x0
    bne lbl_fn_801937CC_0000036C
    li r5, 0x1
lbl_fn_801937CC_0000036C:
    cmpwi r5, 0x0
    beq lbl_fn_801937CC_000003CC
    lwz r8, lbl_8087F490
    cmpwi r8, 0x0
    beq lbl_fn_801937CC_000003CC
    li r5, 0x6
    stw r5, 0x764(r8)
    li r6, 0x0
    li r4, 0x10
    stw r4, 0x768(r8)
    li r7, -0x1
    li r0, 0x1
    stw r7, 0x76c(r8)
    stw r6, 0x770(r8)
    stw r6, 0x774(r8)
    stw r6, 0x778(r8)
    stw r7, 0x54(r1)
    stw r6, 0x58(r1)
    stw r6, 0x5c(r1)
    stw r6, 0x60(r1)
    stw r5, 0x4c(r1)
    stw r4, 0x50(r1)
    stw r0, 0x64(r1)
    stw r0, 0x77c(r8)
lbl_fn_801937CC_000003CC:
    lfs f3, 0x234(r31)
    lfs f0, lbl_80881FF8
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_801937CC_0000092C
    lfs f0, lbl_80881FBC
    li r0, 0x0
    stfs f0, 0x238(r31)
    stw r0, 0x24(r3)
    b lbl_fn_801937CC_0000092C
lbl_fn_801937CC_000003F4:
    lfs f3, 0x234(r31)
    lfs f0, lbl_80881FCC
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_801937CC_00000464
    lfs f0, lbl_80881FEC
    fcmpo cr0, f3, f0
    bge lbl_fn_801937CC_00000464
    fdivs f0, f3, f0
    lwz r4, lbl_8087F430
    lfs f8, 0x24(r1)
    lfs f7, 0x28(r1)
    lfs f5, 0x2c(r1)
    lfs f3, 0x1c(r1)
    stfs f0, 0x9c4(r4)
    lfs f0, 0x8(r3)
    lfs f6, 0xc(r3)
    fadds f8, f8, f0
    lfs f4, 0x10(r3)
    lfs f0, 0x14(r3)
    fadds f6, f7, f6
    fadds f4, f5, f4
    stfs f8, 0x24(r1)
    fadds f0, f3, f0
    stfs f6, 0x28(r1)
    stfs f4, 0x2c(r1)
    stfs f0, 0x1c(r1)
    b lbl_fn_801937CC_0000092C
lbl_fn_801937CC_00000464:
    lfs f31, 0x234(r31)
    mr r3, r31
    li r4, 0x0
    bl fn_80097D7C
    lfs f0, lbl_80881FEC
    fsubs f0, f1, f0
    fcmpo cr0, f31, f0
    cror eq, gt, eq
    bne lbl_fn_801937CC_00000510
    lfs f31, 0x234(r31)
    mr r3, r31
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, lt, eq
    bne lbl_fn_801937CC_00000510
    lfs f31, 0x234(r31)
    mr r3, r31
    li r4, 0x0
    bl fn_80097D7C
    fsubs f3, f1, f31
    lfs f0, lbl_80881FEC
    lwz r3, lbl_8087F430
    lfs f9, lbl_80881FFC
    fdivs f5, f3, f0
    lfs f0, 0x24(r1)
    lfs f7, 0x28(r1)
    lfs f4, 0x2c(r1)
    lfs f3, 0x1c(r1)
    stfs f5, 0x9c4(r3)
    lfs f8, 0x8(r30)
    lfs f6, 0xc(r30)
    fnmsubs f8, f9, f8, f0
    lfs f5, 0x10(r30)
    lfs f0, 0x14(r30)
    fsubs f6, f7, f6
    fnmsubs f4, f9, f5, f4
    stfs f8, 0x24(r1)
    fsubs f0, f3, f0
    stfs f6, 0x28(r1)
    stfs f4, 0x2c(r1)
    stfs f0, 0x1c(r1)
    b lbl_fn_801937CC_0000092C
lbl_fn_801937CC_00000510:
    lwz r3, lbl_8087F430
    lfs f0, lbl_80881FBC
    stfs f0, 0x9c4(r3)
    lfs f0, lbl_80882000
    lfs f3, 0x234(r31)
    fcmpo cr0, f3, f0
    ble lbl_fn_801937CC_00000608
    lfs f0, lbl_80882004
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_801937CC_00000608
    lwz r3, 0x4(r30)
    lwz r26, lbl_8087F048
    addi r28, r3, 0x534
    addi r27, r3, 0x528
    mr r3, r26
    bl fn_800F8548
    mr r29, r3
    li r3, 0xcc
    bl fn_80219E6C
    li r0, -0x1
    stw r0, 0x8(r1)
    mr r5, r3
    lfs f1, lbl_80881FCC
    stw r0, 0xc(r1)
    mr r3, r26
    lfs f2, lbl_80881FBC
    mr r6, r29
    lwz r4, 0x4(r30)
    mr r7, r27
    mr r8, r28
    li r9, 0x0
    li r10, 0x1e
    bl fn_800FAB80
    lwz r5, lbl_8087F430
    li r0, 0xa
    lfs f0, lbl_80882008
    lwz r3, 0x96c(r5)
    srwi r4, r3, 31
    clrlwi r3, r3, 31
    xor r3, r3, r4
    subf r3, r4, r3
    stw r3, 0x96c(r5)
    stw r0, 0x970(r5)
    stfs f0, 0x974(r5)
    stfs f0, 0x978(r5)
    lwz r0, 0x20(r30)
    cmpwi r0, 0x1
    blt lbl_fn_801937CC_00000608
    lwz r3, 0x4(r30)
    lis r4, lbl_80739F34@ha
    addi r4, r4, lbl_80739F34@l
    lfs f1, lbl_8088200C
    addi r5, r3, 0x528
    addi r3, r1, 0x14
    addi r4, r4, 0xd
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x14
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_801937CC_00000608:
    lwz r0, 0x1c(r30)
    li r5, 0x0
    li r3, 0x0
    cmpwi r0, 0x0
    beq lbl_fn_801937CC_00000638
    lwz r0, 0x20(r30)
    cmpwi r0, 0x2
    bge lbl_fn_801937CC_00000638
    lwz r0, 0x18(r30)
    cmpwi r0, 0x0
    beq lbl_fn_801937CC_00000638
    li r3, 0x1
lbl_fn_801937CC_00000638:
    cmpwi r3, 0x0
    beq lbl_fn_801937CC_000006CC
    lwz r4, 0x18(r30)
    li r6, 0x0
    li r0, 0x0
    li r3, 0x0
    lwz r8, 0x38(r4)
    rlwinm r7, r8, 0, 29, 29
    cmplwi r7, 0x4
    beq lbl_fn_801937CC_00000670
    clrlwi r7, r8, 31
    cmplwi r7, 0x1
    beq lbl_fn_801937CC_00000670
    li r3, 0x1
lbl_fn_801937CC_00000670:
    cmpwi r3, 0x0
    beq lbl_fn_801937CC_0000068C
    lwz r3, 0x7e0(r4)
    rlwinm r3, r3, 0, 26, 26
    cmplwi r3, 0x20
    beq lbl_fn_801937CC_0000068C
    li r0, 0x1
lbl_fn_801937CC_0000068C:
    cmpwi r0, 0x0
    beq lbl_fn_801937CC_000006C0
    lwz r0, 0x55c(r4)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_801937CC_000006B4
    lwz r0, 0x560(r4)
    cmpwi r0, 0x1c
    bne lbl_fn_801937CC_000006B4
    li r3, 0x1
lbl_fn_801937CC_000006B4:
    cmpwi r3, 0x0
    bne lbl_fn_801937CC_000006C0
    li r6, 0x1
lbl_fn_801937CC_000006C0:
    cmpwi r6, 0x0
    beq lbl_fn_801937CC_000006CC
    li r5, 0x1
lbl_fn_801937CC_000006CC:
    cmpwi cr1, r5, 0x0
    beq cr1, lbl_fn_801937CC_000007E0
    lfs f3, 0x234(r31)
    lfs f0, lbl_80881FF8
    fcmpo cr0, f3, f0
    ble lbl_fn_801937CC_00000750
    lfs f0, lbl_80882010
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_801937CC_00000750
    beq cr1, lbl_fn_801937CC_00000750
    lwz r7, lbl_8087F490
    cmpwi r7, 0x0
    beq lbl_fn_801937CC_00000750
    li r4, 0x6
    stw r4, 0x764(r7)
    li r5, 0x0
    li r3, 0x10
    stw r3, 0x768(r7)
    li r6, -0x1
    li r0, 0x1
    stw r6, 0x76c(r7)
    stw r5, 0x770(r7)
    stw r5, 0x774(r7)
    stw r5, 0x778(r7)
    stw r6, 0x38(r1)
    stw r5, 0x3c(r1)
    stw r5, 0x40(r1)
    stw r5, 0x44(r1)
    stw r4, 0x30(r1)
    stw r3, 0x34(r1)
    stw r0, 0x48(r1)
    stw r0, 0x77c(r7)
lbl_fn_801937CC_00000750:
    lfs f3, 0x234(r31)
    lfs f0, lbl_80882004
    fcmpo cr0, f3, f0
    ble lbl_fn_801937CC_000007E0
    lfs f0, lbl_80882010
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_801937CC_000007E0
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x4
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_801937CC_000007E0
    lwz r3, 0x20(r30)
    li r0, 0x1
    stw r0, 0x24(r30)
    lis r4, lbl_80739F34@ha
    addi r0, r3, 0x1
    lfs f0, lbl_80882014
    stw r0, 0x20(r30)
    addi r4, r4, lbl_80739F34@l
    lfs f1, lbl_80881FBC
    addi r3, r1, 0x10
    stfs f0, 0x238(r31)
    addi r4, r4, 0x1a
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    lwz r3, lbl_8087F490
    cmpwi r3, 0x0
    beq lbl_fn_801937CC_000007E0
    bl fn_803E3384
lbl_fn_801937CC_000007E0:
    lwz r3, 0x18(r30)
    cmpwi r3, 0x0
    beq lbl_fn_801937CC_0000092C
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_801937CC_0000092C
    lfs f3, 0x234(r31)
    lfs f10, lbl_80881FF8
    lwz r7, lbl_8087F430
    fcmpo cr0, f3, f10
    ble lbl_fn_801937CC_000008A8
    lfs f0, lbl_80882010
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_801937CC_000008A8
    lwz r8, lbl_8087EFA8
    li r0, 0x1
    lfs f5, lbl_80882018
    lwz r6, 0x244(r8)
    lwz r5, 0x248(r8)
    lfs f9, 0x24c(r8)
    lfs f8, 0x250(r8)
    lwz r4, 0x254(r8)
    lwz r3, 0x258(r8)
    lfs f7, 0x25c(r8)
    lfs f6, 0x260(r8)
    stw r6, 0x90(r1)
    lfs f4, lbl_8088201C
    stw r0, 0x240(r8)
    lfs f3, lbl_80882008
    lwz r8, lbl_8087EFA8
    lfs f0, lbl_80881FBC
    stfs f5, 0x3a4(r8)
    lwz r6, 0x4(r30)
    stw r6, 0x8a0(r7)
    lfs f5, 0x234(r31)
    stw r5, 0x94(r1)
    fsubs f5, f5, f10
    stfs f9, 0x98(r1)
    fdivs f4, f5, f4
    stfs f8, 0x9c(r1)
    stw r4, 0xa0(r1)
    stw r3, 0xa4(r1)
    stfs f7, 0xa8(r1)
    stfs f6, 0xac(r1)
    fmadds f0, f3, f4, f0
    stw r0, 0x8c(r1)
    stfs f0, 0x9c8(r7)
    b lbl_fn_801937CC_0000092C
lbl_fn_801937CC_000008A8:
    lwz r8, lbl_8087EFA8
    li r0, 0x0
    lfs f0, lbl_80881FBC
    lwz r6, 0x244(r8)
    lwz r5, 0x248(r8)
    lfs f6, 0x24c(r8)
    lfs f5, 0x250(r8)
    lwz r4, 0x254(r8)
    lwz r3, 0x258(r8)
    lfs f4, 0x25c(r8)
    lfs f3, 0x260(r8)
    stw r6, 0x6c(r1)
    stw r0, 0x240(r8)
    stw r6, 0x244(r8)
    stw r5, 0x248(r8)
    stfs f6, 0x24c(r8)
    stfs f5, 0x250(r8)
    stw r4, 0x254(r8)
    stw r3, 0x258(r8)
    stfs f4, 0x25c(r8)
    stfs f3, 0x260(r8)
    lwz r6, lbl_8087EFA8
    stw r5, 0x70(r1)
    stfs f0, 0x3a4(r6)
    stw r0, 0x8a0(r7)
    stfs f6, 0x74(r1)
    stfs f5, 0x78(r1)
    stw r4, 0x7c(r1)
    stw r3, 0x80(r1)
    stfs f4, 0x84(r1)
    stfs f3, 0x88(r1)
    stw r0, 0x68(r1)
    stfs f0, 0x9c8(r7)
lbl_fn_801937CC_0000092C:
    addi r3, r1, 0x24
    lwz r6, 0x4(r30)
    psq_l f1, 0x0(r3), 0, 0
    addi r5, r1, 0x18
    psq_st f1, 0x528(r6), 0, 0
    mr r3, r31
    lfs f2, 0x2c(r1)
    li r4, 0x0
    stfs f2, 0x530(r6)
    psq_l f1, 0x0(r5), 0, 0
    lwz r5, 0x4(r30)
    lfs f2, 0x20(r1)
    psq_st f1, 0x534(r5), 0, 0
    stfs f2, 0x53c(r5)
    lfs f31, 0x234(r31)
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    mfcr r3
    psq_l f31, 0xd8(r1), 0, 0
    lfd f31, 0xd0(r1)
    addi r11, r1, 0xd0
    extrwi r3, r3, 1, 2
    bl _restgpr_26
    lwz r0, 0xe4(r1)
    mtlr r0
    addi r1, r1, 0xe0
    blr
}

asm void fn_80193EF8(void)
{
    nofralloc
    stwu r1, -0x170(r1)
    mflr r0
    lis r7, lbl_8077EC10@ha
    li r6, 0x0
    stw r0, 0x174(r1)
    addi r7, r7, lbl_8077EC10@l
    li r0, 0x4c
    lfs f9, lbl_80881FCC
    stfd f31, 0x160(r1)
    lfs f6, lbl_80882020
    psq_st f31, 0x168(r1), 0, 0
    lfs f10, lbl_80882024
    stfd f30, 0x150(r1)
    lfs f0, lbl_8088200C
    psq_st f30, 0x158(r1), 0, 0
    stw r31, 0x14c(r1)
    mr r31, r3
    stw r30, 0x148(r1)
    stw r7, 0x0(r3)
    addi r7, r1, 0x8c
    stw r4, 0x4(r3)
    stw r6, 0x58c(r4)
    addi r6, r1, 0x98
    lwz r8, 0x4(r3)
    stw r0, 0x560(r8)
    lfs f5, 0x528(r5)
    lfs f4, 0x52c(r5)
    fadds f8, f9, f5
    lwz r10, 0x4(r3)
    fadds f7, f6, f4
    lfs f3, 0x530(r5)
    lfs f4, 0x52c(r10)
    fadds f6, f9, f3
    lfs f3, 0x528(r10)
    fsubs f4, f7, f4
    lfs f5, 0x530(r10)
    fsubs f3, f8, f3
    stfs f4, 0x90(r1)
    fsubs f2, f6, f5
    stfs f3, 0x8c(r1)
    psq_l f1, 0x0(r7), 0, 0
    frsp f3, f2
    psq_st f1, 0x0(r6), 0, 0
    fmuls f5, f3, f10
    lfs f4, 0x9c(r1)
    lfs f3, 0x98(r1)
    fmuls f4, f4, f10
    stfs f8, 0xc8(r1)
    fmuls f3, f3, f10
    fmuls f10, f5, f0
    stfs f7, 0xcc(r1)
    fmuls f11, f4, f0
    fmuls f0, f3, f0
    stfs f6, 0xd0(r1)
    stfs f2, 0x94(r1)
    stfs f2, 0xa0(r1)
    stfs f3, 0xa4(r1)
    stfs f4, 0xa8(r1)
    stfs f5, 0xac(r1)
    stfs f0, 0xb0(r1)
    stfs f11, 0xb4(r1)
    fmr f2, f10
    addi r5, r1, 0xb0
    psq_l f1, 0x0(r5), 0, 0
    addi r6, r1, 0x68
    psq_st f1, 0x8(r3), 0, 0
    addi r5, r1, 0x74
    stfs f2, 0x10(r3)
    addi r7, r1, 0x80
    lfs f11, lbl_80882028
    addi r8, r1, 0xbc
    lfs f3, 0x530(r10)
    addi r9, r1, 0x50
    lfs f0, 0x52c(r10)
    addi r30, r1, 0x5c
    fsubs f5, f3, f6
    lfs f3, 0x528(r10)
    fsubs f4, f0, f7
    stfs f10, 0xb8(r1)
    fsubs f3, f3, f8
    lfs f0, lbl_80881FD0
    fmr f2, f5
    stfs f3, 0x68(r1)
    stfs f4, 0x6c(r1)
    frsp f3, f2
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    fmuls f10, f3, f11
    lfs f4, 0x78(r1)
    lfs f3, 0x74(r1)
    fmuls f4, f4, f11
    stfs f2, 0x7c(r1)
    fmuls f3, f3, f11
    fmr f2, f10
    stfs f4, 0x84(r1)
    stfs f3, 0x80(r1)
    psq_l f1, 0x0(r7), 0, 0
    psq_st f1, 0x14(r3), 0, 0
    stfs f2, 0x1c(r3)
    lfs f3, 0x530(r10)
    lfs f2, 0x53c(r4)
    fsubs f6, f6, f3
    stfs f2, 0xc4(r1)
    lfs f4, 0x52c(r10)
    lfs f3, 0x528(r10)
    fmr f2, f6
    psq_l f1, 0x534(r4), 0, 0
    fsubs f4, f7, f4
    psq_st f1, 0x0(r8), 0, 0
    fsubs f3, f8, f3
    frsp f7, f2
    stfs f3, 0x50(r1)
    fabs f3, f7
    stfs f4, 0x54(r1)
    psq_l f1, 0x0(r9), 0, 0
    frsp f3, f3
    stfs f5, 0x70(r1)
    stfs f10, 0x88(r1)
    fcmpo cr0, f3, f0
    stfs f6, 0x58(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x64(r1)
    bge lbl_fn_80193EF8_00000BA8
    lfs f0, 0x5c(r1)
    fcmpo cr0, f0, f9
    ble lbl_fn_80193EF8_00000B9C
    lfs f0, lbl_80881FD4
    b lbl_fn_80193EF8_00000BA0
lbl_fn_80193EF8_00000B9C:
    lfs f0, lbl_80881FD8
lbl_fn_80193EF8_00000BA0:
    stfs f0, 0x48(r1)
    b lbl_fn_80193EF8_00000BBC
lbl_fn_80193EF8_00000BA8:
    fmr f2, f7
    lfs f1, 0x5c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_80193EF8_00000BBC:
    lfs f0, 0x48(r1)
    addi r3, r1, 0xd8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80881FCC
    addi r4, r1, 0x38
    lfs f30, 0xe0(r1)
    mr r5, r4
    lfs f31, 0xdc(r1)
    addi r3, r1, 0x108
    lfs f13, 0xd8(r1)
    lfs f12, 0xf0(r1)
    lfs f11, 0xec(r1)
    lfs f10, 0xe8(r1)
    lfs f9, 0x100(r1)
    lfs f8, 0xfc(r1)
    lfs f7, 0xf8(r1)
    lfs f6, 0x104(r1)
    lfs f5, 0xf4(r1)
    lfs f4, 0xe4(r1)
    lfs f0, lbl_80881FBC
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x64(r1)
    stfs f3, 0x138(r1)
    stfs f3, 0x13c(r1)
    stfs f3, 0x140(r1)
    stfs f0, 0x144(r1)
    stfs f13, 0x8(r1)
    stfs f31, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f13, 0x108(r1)
    stfs f31, 0x10c(r1)
    stfs f30, 0x110(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0x118(r1)
    stfs f11, 0x11c(r1)
    stfs f12, 0x120(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0x128(r1)
    stfs f8, 0x12c(r1)
    stfs f9, 0x130(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0x114(r1)
    stfs f5, 0x124(r1)
    stfs f6, 0x134(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80881FD0
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80193EF8_00000CD8
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80881FCC
    fcmpo cr0, f3, f0
    ble lbl_fn_80193EF8_00000CC8
    lfs f0, lbl_80881FD4
    b lbl_fn_80193EF8_00000CCC
lbl_fn_80193EF8_00000CC8:
    lfs f0, lbl_80881FD8
lbl_fn_80193EF8_00000CCC:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_80193EF8_00000CEC
lbl_fn_80193EF8_00000CD8:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_80193EF8_00000CEC:
    addi r3, r1, 0x44
    lfs f3, lbl_80881FCC
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0xbc
    psq_st f1, 0x0(r30), 0, 0
    fmr f2, f3
    lwz r9, 0x4(r31)
    li r0, 0x1
    lfs f0, 0x60(r1)
    li r4, 0x0
    stfs f0, 0xc0(r1)
    lfs f0, lbl_80881FBC
    li r5, 0x20e
    psq_l f1, 0x0(r3), 0, 0
    li r6, 0x0
    psq_st f1, 0x534(r9), 0, 0
    fmr f1, f3
    li r7, 0x0
    li r8, 0x1
    stfs f2, 0x64(r1)
    lfs f2, 0xc4(r1)
    stfs f2, 0x53c(r9)
    lfs f2, lbl_80881FDC
    lwz r3, 0x4(r31)
    stfs f3, 0x4c(r1)
    addi r30, r3, 0xb0
    stw r0, 0x3fc(r3)
    mr r3, r30
    stfs f0, 0x24c(r30)
    bl fn_80097C08
    lfs f0, lbl_8088200C
    stfs f0, 0x238(r30)
    lwz r0, lbl_8087F498
    cmpwi r0, 0x0
    beq lbl_fn_80193EF8_00000DAC
    bl fn_80680CF8
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    subf. r0, r4, r0
    bne lbl_fn_80193EF8_00000DAC
    lwz r3, lbl_8087F498
    li r5, 0x20
    lwz r4, 0x4(r31)
    li r6, 0x0
    lfs f1, lbl_80881FBC
    lfs f2, lbl_80881FF4
    bl fn_803EA77C
lbl_fn_80193EF8_00000DAC:
    psq_l f31, 0x168(r1), 0, 0
    mr r3, r31
    lfd f31, 0x160(r1)
    psq_l f30, 0x158(r1), 0, 0
    lfd f30, 0x150(r1)
    lwz r31, 0x14c(r1)
    lwz r30, 0x148(r1)
    lwz r0, 0x174(r1)
    mtlr r0
    addi r1, r1, 0x170
    blr
}

asm void fn_80194334(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    lfs f0, lbl_80881FCC
    stw r0, 0x44(r1)
    addi r4, r1, 0x10
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    stw r28, 0x20(r1)
    mr r28, r3
    lwz r5, 0x4(r3)
    lfs f3, 0x2e4(r5)
    addi r29, r5, 0xb0
    psq_l f1, 0x528(r5), 0, 0
    lfs f2, 0x530(r5)
    fcmpo cr0, f3, f0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x18(r1)
    cror eq, gt, eq
    bne lbl_fn_80194334_00000E78
    lfs f0, lbl_8088202C
    fcmpo cr0, f3, f0
    bge lbl_fn_80194334_00000E78
    lfs f0, lbl_8088200C
    frsp f3, f2
    stfs f0, 0x238(r29)
    lfs f5, 0x10(r1)
    lfs f4, 0x8(r3)
    lfs f0, 0x10(r3)
    fadds f6, f5, f4
    lfs f5, 0x14(r1)
    lfs f4, 0xc(r3)
    fadds f0, f3, f0
    stfs f6, 0x10(r1)
    fadds f3, f5, f4
    stfs f0, 0x18(r1)
    stfs f3, 0x14(r1)
    b lbl_fn_80194334_00000EFC
lbl_fn_80194334_00000E78:
    lfs f31, 0x234(r29)
    mr r3, r29
    li r4, 0x0
    bl fn_80097D7C
    lfs f0, lbl_80882030
    fsubs f0, f1, f0
    fcmpo cr0, f31, f0
    cror eq, gt, eq
    bne lbl_fn_80194334_00000EF4
    lfs f31, 0x234(r29)
    mr r3, r29
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, lt, eq
    bne lbl_fn_80194334_00000EF4
    lfs f0, lbl_80881FBC
    stfs f0, 0x238(r29)
    lfs f3, 0x10(r1)
    lfs f0, 0x14(r28)
    lfs f5, 0x14(r1)
    fadds f6, f3, f0
    lfs f4, 0x18(r28)
    lfs f3, 0x18(r1)
    lfs f0, 0x1c(r28)
    fadds f4, f5, f4
    stfs f6, 0x10(r1)
    fadds f0, f3, f0
    stfs f4, 0x14(r1)
    stfs f0, 0x18(r1)
    b lbl_fn_80194334_00000EFC
lbl_fn_80194334_00000EF4:
    lfs f0, lbl_80881FBC
    stfs f0, 0x238(r29)
lbl_fn_80194334_00000EFC:
    addi r3, r1, 0x10
    lwz r4, 0x4(r28)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x528(r4), 0, 0
    lfs f2, 0x18(r1)
    stfs f2, 0x530(r4)
    lfs f0, lbl_80882034
    lfs f3, 0x234(r29)
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_80194334_00000FAC
    lfs f0, lbl_80882038
    fcmpo cr0, f3, f0
    bge lbl_fn_80194334_00000FAC
    lwz r30, 0x4(r28)
    li r3, 0xd1
    lwz r31, lbl_8087F048
    bl fn_80219E6C
    li r0, -0x1
    stw r0, 0x8(r1)
    mr r5, r3
    lfs f1, lbl_80881FCC
    stw r0, 0xc(r1)
    mr r3, r31
    lfs f2, lbl_80881FBC
    addi r7, r30, 0x528
    lwz r4, 0x4(r28)
    addi r8, r30, 0x534
    li r6, 0x3e8
    li r9, 0x0
    li r10, 0x1e
    bl fn_800FAB80
    lwz r5, lbl_8087F430
    li r0, 0xa
    lfs f0, lbl_80882008
    lwz r3, 0x96c(r5)
    srwi r4, r3, 31
    clrlwi r3, r3, 31
    xor r3, r3, r4
    subf r3, r4, r3
    stw r3, 0x96c(r5)
    stw r0, 0x970(r5)
    stfs f0, 0x974(r5)
    stfs f0, 0x978(r5)
lbl_fn_80194334_00000FAC:
    lfs f31, 0x234(r29)
    mr r3, r29
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    mfcr r3
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    extrwi r3, r3, 1, 2
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80194550(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    lis r8, lbl_8077EB98@ha
    li r7, 0x0
    stw r0, 0x74(r1)
    addi r8, r8, lbl_8077EB98@l
    li r0, 0x4d
    stw r31, 0x6c(r1)
    mr r31, r6
    stw r30, 0x68(r1)
    mr r30, r5
    stw r29, 0x64(r1)
    mr r29, r3
    stw r4, 0x4(r3)
    stw r8, 0x0(r3)
    stw r7, 0x58c(r4)
    lwz r4, 0x4(r3)
    stw r0, 0x560(r4)
    lwz r4, 0x60(r5)
    lwz r0, 0x24(r4)
    cmpwi r0, 0x1e
    bne lbl_fn_80194550_000010B8
    lwz r3, 0x4(r3)
    li r11, -0x1
    lfs f1, lbl_80881FBC
    li r0, 0x1
    lwz r3, 0x648(r3)
    addi r4, r30, 0x15f4
    lfs f0, lbl_80881FCC
    addi r7, r1, 0x10
    addi r5, r3, 0x10
    stfs f0, 0x1c(r1)
    lwz r3, lbl_8087F3C0
    addi r8, r1, 0x1c
    stfs f0, 0x20(r1)
    addi r9, r1, 0x28
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x24(r1)
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f1, 0x28(r1)
    stfs f1, 0x2c(r1)
    stfs f1, 0x30(r1)
    stfs f1, 0x34(r1)
    stw r11, 0x8(r1)
    stw r0, 0xc(r1)
    bl fn_8023A8B4
lbl_fn_80194550_000010B8:
    psq_l f1, 0x0(r31), 0, 0
    addi r3, r1, 0x50
    lfs f2, 0x8(r31)
    mr r4, r3
    psq_st f1, 0x8(r29), 0, 0
    lfs f6, lbl_8088203C
    stfs f2, 0x10(r29)
    lfs f3, 0x8(r31)
    lfs f0, 0x52c(r30)
    lfs f4, 0x0(r31)
    fadds f5, f6, f0
    lfs f0, lbl_80881FCC
    stfs f5, 0xc(r29)
    lfs f2, 0x530(r30)
    psq_l f1, 0x528(r30), 0, 0
    psq_st f1, 0x14(r29), 0, 0
    fsubs f7, f3, f2
    stfs f2, 0x1c(r29)
    lfs f3, 0x14(r29)
    lfs f5, 0x52c(r30)
    fsubs f4, f4, f3
    fadds f3, f6, f5
    stfs f3, 0x18(r29)
    stfs f4, 0x50(r1)
    stfs f7, 0x58(r1)
    stfs f0, 0x54(r1)
    bl fn_805F98D0
    lfs f5, 0x58(r1)
    addi r5, r1, 0x44
    lfs f4, lbl_80882040
    addi r9, r1, 0x50
    lfs f0, 0x54(r1)
    li r0, 0x1
    fmuls f5, f5, f4
    lfs f3, 0x50(r1)
    fmuls f6, f0, f4
    lfs f0, 0x1c(r29)
    fmuls f4, f3, f4
    lfs f3, 0x18(r29)
    fadds f7, f0, f5
    lfs f0, 0x14(r29)
    fadds f3, f3, f6
    lwz r3, 0x4(r29)
    fadds f8, f0, f4
    lfs f0, lbl_80881FBC
    fmr f2, f7
    stfs f3, 0x48(r1)
    addi r31, r3, 0xb0
    li r4, 0x0
    stfs f8, 0x44(r1)
    mr r3, r31
    psq_l f1, 0x0(r5), 0, 0
    li r5, 0x20d
    psq_st f1, 0x20(r29), 0, 0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    stfs f2, 0x28(r29)
    psq_l f1, 0x0(r9), 0, 0
    lfs f2, 0x58(r1)
    stfs f2, 0x34(r29)
    psq_st f1, 0x2c(r29), 0, 0
    psq_l f1, 0x0(r9), 0, 0
    lfs f2, 0x58(r1)
    stfs f2, 0x40(r29)
    lfs f2, lbl_80881FDC
    psq_st f1, 0x38(r29), 0, 0
    fmr f1, f0
    stw r0, 0x34c(r31)
    stfs f4, 0x38(r1)
    stfs f6, 0x3c(r1)
    stfs f5, 0x40(r1)
    stfs f7, 0x4c(r1)
    stfs f0, 0x24c(r31)
    bl fn_80097C08
    lfs f1, lbl_80881FBC
    stfs f1, 0x238(r31)
    lfs f0, lbl_80882044
    stfs f0, 0x234(r31)
    lwz r3, lbl_8087F498
    cmpwi r3, 0x0
    beq lbl_fn_80194550_00001214
    lwz r4, 0x4(r29)
    li r5, 0x20
    lfs f2, lbl_80881FF4
    li r6, 0x0
    bl fn_803EA77C
lbl_fn_80194550_00001214:
    lwz r31, 0x6c(r1)
    mr r3, r29
    lwz r30, 0x68(r1)
    lwz r29, 0x64(r1)
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_80194790(void)
{
    nofralloc
    stwu r1, -0x210(r1)
    mflr r0
    lfs f3, lbl_80882044
    stw r0, 0x214(r1)
    addi r4, r1, 0xf4
    stfd f31, 0x200(r1)
    psq_st f31, 0x208(r1), 0, 0
    stfd f30, 0x1f0(r1)
    psq_st f30, 0x1f8(r1), 0, 0
    stfd f29, 0x1e0(r1)
    psq_st f29, 0x1e8(r1), 0, 0
    stfd f28, 0x1d0(r1)
    psq_st f28, 0x1d8(r1), 0, 0
    stfd f27, 0x1c0(r1)
    psq_st f27, 0x1c8(r1), 0, 0
    stfd f26, 0x1b0(r1)
    psq_st f26, 0x1b8(r1), 0, 0
    stfd f25, 0x1a0(r1)
    psq_st f25, 0x1a8(r1), 0, 0
    stfd f24, 0x190(r1)
    psq_st f24, 0x198(r1), 0, 0
    stfd f23, 0x180(r1)
    psq_st f23, 0x188(r1), 0, 0
    stw r31, 0x17c(r1)
    stw r30, 0x178(r1)
    mr r30, r3
    stw r29, 0x174(r1)
    addi r29, r1, 0xe8
    stw r28, 0x170(r1)
    lwz r5, 0x4(r3)
    lfs f4, 0x2e4(r5)
    addi r31, r5, 0xb0
    psq_l f1, 0x528(r5), 0, 0
    lfs f2, 0x530(r5)
    fcmpo cr0, f4, f3
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x534(r5), 0, 0
    stfs f2, 0xfc(r1)
    lfs f2, 0x53c(r5)
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0xf0(r1)
    ble lbl_fn_80194790_000015BC
    lfs f0, lbl_80882048
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_80194790_000015BC
    li r0, 0x0
    stw r0, 0xf1c(r5)
    lfs f0, lbl_8088204C
    addi r5, r1, 0xdc
    lfs f4, 0x234(r31)
    addi r6, r1, 0xb8
    lfs f5, 0x40(r3)
    fsubs f4, f4, f3
    lfs f30, lbl_80882050
    lfs f31, 0x3c(r3)
    fmuls f29, f5, f30
    lfs f3, 0x10(r3)
    fdivs f4, f4, f0
    lfs f7, 0x30(r3)
    lfs f13, 0x38(r3)
    lfs f6, 0x2c(r3)
    lfs f0, 0x1c(r3)
    lfs f8, 0x34(r3)
    fsubs f27, f3, f29
    lfs f11, 0x8(r3)
    fmuls f28, f31, f30
    lfs f12, 0xc(r3)
    fmuls f30, f13, f30
    lfs f9, 0x14(r3)
    fsubs f25, f0, f27
    stfs f28, 0xc8(r1)
    fsubs f3, f5, f8
    lfs f10, 0x18(r3)
    fsubs f23, f31, f7
    stfs f29, 0xcc(r1)
    fsubs f11, f11, f30
    stfs f30, 0xc4(r1)
    fsubs f12, f12, f28
    lfs f5, lbl_80881FD0
    fmuls f26, f25, f4
    stfs f27, 0xd8(r1)
    fsubs f29, f9, f11
    stfs f11, 0xd0(r1)
    fadds f28, f26, f27
    fsubs f24, f13, f6
    stfs f12, 0xd4(r1)
    fmuls f0, f3, f4
    fsubs f30, f10, f12
    stfs f29, 0x94(r1)
    fmuls f31, f23, f4
    fmuls f27, f24, f4
    stfs f30, 0x98(r1)
    fadds f13, f0, f8
    fmuls f10, f30, f4
    stfs f25, 0x9c(r1)
    fmuls f9, f29, f4
    fmr f2, f28
    stfs f10, 0x8c(r1)
    fadds f8, f10, f12
    stfs f2, 0xfc(r1)
    fmr f2, f13
    fadds f4, f9, f11
    fadds f6, f27, f6
    stfs f8, 0xe0(r1)
    fadds f7, f31, f7
    stfs f4, 0xdc(r1)
    frsp f4, f2
    psq_l f1, 0x0(r5), 0, 0
    fabs f8, f4
    stfs f6, 0xb8(r1)
    stfs f7, 0xbc(r1)
    frsp f6, f8
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    fcmpo cr0, f6, f5
    stfs f9, 0x88(r1)
    stfs f26, 0x90(r1)
    stfs f28, 0xe4(r1)
    stfs f24, 0x7c(r1)
    stfs f23, 0x80(r1)
    stfs f3, 0x84(r1)
    stfs f27, 0x70(r1)
    stfs f31, 0x74(r1)
    stfs f0, 0x78(r1)
    stfs f13, 0xc0(r1)
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0xf0(r1)
    bge lbl_fn_80194790_0000145C
    lfs f3, 0xe8(r1)
    lfs f0, lbl_80881FCC
    fcmpo cr0, f3, f0
    ble lbl_fn_80194790_00001450
    lfs f0, lbl_80881FD4
    b lbl_fn_80194790_00001454
lbl_fn_80194790_00001450:
    lfs f0, lbl_80881FD8
lbl_fn_80194790_00001454:
    stfs f0, 0x2c(r1)
    b lbl_fn_80194790_00001470
lbl_fn_80194790_0000145C:
    fmr f2, f4
    lfs f1, 0xe8(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x2c(r1)
lbl_fn_80194790_00001470:
    lfs f0, 0x2c(r1)
    addi r3, r1, 0x140
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80881FCC
    addi r4, r1, 0x34
    lfs f4, 0x148(r1)
    mr r5, r4
    lfs f5, 0x144(r1)
    addi r3, r1, 0x100
    lfs f6, 0x140(r1)
    lfs f7, 0x158(r1)
    lfs f8, 0x154(r1)
    lfs f9, 0x150(r1)
    lfs f10, 0x168(r1)
    lfs f11, 0x164(r1)
    lfs f12, 0x160(r1)
    lfs f13, 0x16c(r1)
    lfs f23, 0x15c(r1)
    lfs f24, 0x14c(r1)
    lfs f0, lbl_80881FBC
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0xf0(r1)
    stfs f3, 0x130(r1)
    stfs f3, 0x134(r1)
    stfs f3, 0x138(r1)
    stfs f0, 0x13c(r1)
    stfs f6, 0x64(r1)
    stfs f5, 0x68(r1)
    stfs f4, 0x6c(r1)
    stfs f6, 0x100(r1)
    stfs f5, 0x104(r1)
    stfs f4, 0x108(r1)
    stfs f9, 0x58(r1)
    stfs f8, 0x5c(r1)
    stfs f7, 0x60(r1)
    stfs f9, 0x110(r1)
    stfs f8, 0x114(r1)
    stfs f7, 0x118(r1)
    stfs f12, 0x4c(r1)
    stfs f11, 0x50(r1)
    stfs f10, 0x54(r1)
    stfs f12, 0x120(r1)
    stfs f11, 0x124(r1)
    stfs f10, 0x128(r1)
    stfs f24, 0x40(r1)
    stfs f23, 0x44(r1)
    stfs f13, 0x48(r1)
    stfs f24, 0x10c(r1)
    stfs f23, 0x11c(r1)
    stfs f13, 0x12c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x3c(r1)
    bl fn_805F9750
    lfs f2, 0x3c(r1)
    lfs f0, lbl_80881FD0
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80194790_0000158C
    lfs f3, 0x38(r1)
    lfs f0, lbl_80881FCC
    fcmpo cr0, f3, f0
    ble lbl_fn_80194790_0000157C
    lfs f0, lbl_80881FD4
    b lbl_fn_80194790_00001580
lbl_fn_80194790_0000157C:
    lfs f0, lbl_80881FD8
lbl_fn_80194790_00001580:
    fneg f0, f0
    stfs f0, 0x28(r1)
    b lbl_fn_80194790_000015A0
lbl_fn_80194790_0000158C:
    lfs f1, 0x38(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x28(r1)
lbl_fn_80194790_000015A0:
    addi r3, r1, 0x28
    lfs f2, lbl_80881FCC
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x30(r1)
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0xf0(r1)
    b lbl_fn_80194790_00001694
lbl_fn_80194790_000015BC:
    lfs f3, 0x234(r31)
    lfs f0, lbl_80882048
    fcmpo cr0, f3, f0
    ble lbl_fn_80194790_000015F4
    lfs f0, lbl_80882054
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_80194790_000015F4
    lfs f2, 0x1c(r3)
    addi r4, r1, 0xf4
    psq_l f1, 0x14(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0xfc(r1)
    b lbl_fn_80194790_00001694
lbl_fn_80194790_000015F4:
    lfs f4, 0x234(r31)
    lfs f3, lbl_80882054
    fcmpo cr0, f4, f3
    ble lbl_fn_80194790_00001694
    lfs f0, lbl_80882058
    fcmpo cr0, f4, f0
    cror eq, lt, eq
    bne lbl_fn_80194790_00001694
    fsubs f3, f4, f3
    lfs f0, lbl_80882034
    lfs f7, 0x28(r3)
    addi r5, r1, 0xac
    lfs f6, 0x1c(r3)
    addi r4, r1, 0xf4
    fdivs f10, f3, f0
    lfs f5, 0x24(r3)
    lfs f4, 0x18(r3)
    lfs f3, 0x20(r3)
    lfs f0, 0x14(r3)
    fsubs f7, f7, f6
    fsubs f9, f5, f4
    fsubs f3, f3, f0
    stfs f7, 0x24(r1)
    fmuls f8, f7, f10
    fmuls f7, f9, f10
    stfs f3, 0x1c(r1)
    fmuls f5, f3, f10
    fadds f2, f8, f6
    stfs f9, 0x20(r1)
    fadds f3, f7, f4
    fadds f0, f5, f0
    stfs f5, 0x10(r1)
    stfs f0, 0xac(r1)
    stfs f3, 0xb0(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f7, 0x14(r1)
    stfs f8, 0x18(r1)
    stfs f2, 0xb4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0xfc(r1)
lbl_fn_80194790_00001694:
    addi r3, r1, 0xf4
    lwz r4, 0x4(r30)
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0xe8
    psq_st f1, 0x528(r4), 0, 0
    lfs f2, 0xfc(r1)
    stfs f2, 0x530(r4)
    psq_l f1, 0x0(r3), 0, 0
    lwz r3, 0x4(r30)
    lfs f2, 0xf0(r1)
    psq_st f1, 0x534(r3), 0, 0
    lfs f0, lbl_8088205C
    stfs f2, 0x53c(r3)
    lfs f3, 0x234(r31)
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_80194790_00001778
    lfs f0, lbl_80882060
    fcmpo cr0, f3, f0
    bge lbl_fn_80194790_00001778
    lwz r6, 0x4(r30)
    lis r4, lbl_80739F34@ha
    mr r3, r31
    li r5, 0x0
    addi r29, r6, 0x534
    addi r4, r4, lbl_80739F34@l
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80194790_00001710
    li r4, 0x0
    b lbl_fn_80194790_0000171C
lbl_fn_80194790_00001710:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r31)
    add r4, r3, r0
lbl_fn_80194790_0000171C:
    lfs f0, 0x2c(r4)
    li r3, 0xd5
    lfs f3, 0x1c(r4)
    lfs f4, 0xc(r4)
    stfs f4, 0xa0(r1)
    lwz r28, lbl_8087F048
    stfs f3, 0xa4(r1)
    stfs f0, 0xa8(r1)
    bl fn_80219E6C
    li r0, -0x1
    stw r0, 0x8(r1)
    mr r5, r3
    lfs f1, lbl_80881FCC
    stw r0, 0xc(r1)
    mr r3, r28
    lfs f2, lbl_80881FBC
    mr r8, r29
    lwz r4, 0x4(r30)
    addi r7, r1, 0xa0
    li r6, 0x3e8
    li r9, 0x0
    li r10, 0x1e
    bl fn_800FAB80
lbl_fn_80194790_00001778:
    lfs f23, 0x234(r31)
    mr r3, r31
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f23, f1
    cror eq, gt, eq
    mfcr r3
    psq_l f31, 0x208(r1), 0, 0
    lfd f31, 0x200(r1)
    extrwi r3, r3, 1, 2
    psq_l f30, 0x1f8(r1), 0, 0
    lfd f30, 0x1f0(r1)
    psq_l f29, 0x1e8(r1), 0, 0
    lfd f29, 0x1e0(r1)
    psq_l f28, 0x1d8(r1), 0, 0
    lfd f28, 0x1d0(r1)
    psq_l f27, 0x1c8(r1), 0, 0
    lfd f27, 0x1c0(r1)
    psq_l f26, 0x1b8(r1), 0, 0
    lfd f26, 0x1b0(r1)
    psq_l f25, 0x1a8(r1), 0, 0
    lfd f25, 0x1a0(r1)
    psq_l f24, 0x198(r1), 0, 0
    lfd f24, 0x190(r1)
    psq_l f23, 0x188(r1), 0, 0
    lfd f23, 0x180(r1)
    lwz r31, 0x17c(r1)
    lwz r30, 0x178(r1)
    lwz r29, 0x174(r1)
    lwz r28, 0x170(r1)
    lwz r0, 0x214(r1)
    mtlr r0
    addi r1, r1, 0x210
    blr
}

asm void fn_80194D5C(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    lfs f3, 0x1c(r4)
    lfs f0, 0x10(r4)
    addi r6, r1, 0x8
    stw r0, 0x44(r1)
    addi r5, r1, 0x14
    fsubs f2, f3, f0
    lfs f5, 0x18(r4)
    stw r31, 0x3c(r1)
    mr r31, r4
    lfs f4, 0xc(r4)
    stw r30, 0x38(r1)
    fsubs f4, f5, f4
    lfs f3, 0x14(r4)
    lfs f0, 0x8(r4)
    mr r30, r3
    stfs f4, 0xc(r1)
    mr r3, r5
    fsubs f0, f3, f0
    stfs f2, 0x10(r1)
    mr r4, r5
    stfs f0, 0x8(r1)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x1c(r1)
    bl fn_805F98D0
    lfs f4, 0x1c(r1)
    lfs f5, lbl_80882040
    lfs f3, 0x18(r1)
    fmuls f6, f4, f5
    lfs f4, 0x1c(r31)
    fmuls f7, f3, f5
    lfs f0, 0x14(r1)
    lfs f3, 0x18(r31)
    fmuls f5, f0, f5
    lfs f0, 0x14(r31)
    fadds f4, f4, f6
    fadds f3, f3, f7
    stfs f5, 0x20(r1)
    fadds f0, f0, f5
    stfs f3, 0x4(r30)
    stfs f0, 0x0(r30)
    stfs f4, 0x8(r30)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r0, 0x44(r1)
    stfs f7, 0x24(r1)
    stfs f6, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80194E2C(void)
{
    nofralloc
    stwu r1, -0x220(r1)
    mflr r0
    lis r7, lbl_8077EB20@ha
    li r8, 0x0
    stw r0, 0x224(r1)
    addi r7, r7, lbl_8077EB20@l
    li r0, 0x89
    stfd f31, 0x210(r1)
    psq_st f31, 0x218(r1), 0, 0
    stfd f30, 0x200(r1)
    psq_st f30, 0x208(r1), 0, 0
    stw r31, 0x1fc(r1)
    mr r31, r3
    stw r30, 0x1f8(r1)
    stw r29, 0x1f4(r1)
    mr r29, r5
    stw r7, 0x0(r3)
    li r7, 0x215
    stw r4, 0x4(r3)
    stw r5, 0x8(r3)
    stw r6, 0xc(r3)
    stw r8, 0x28(r3)
    stw r0, 0x560(r4)
    lwz r0, 0xc(r3)
    lwz r3, 0x4(r3)
    cmpwi r0, 0x2
    addi r30, r3, 0xb0
    bne lbl_fn_80194E2C_00001944
    li r7, 0x216
lbl_fn_80194E2C_00001944:
    li r0, 0x1
    stw r0, 0x34c(r30)
    lfs f1, lbl_80881FBC
    mr r5, r7
    lfs f2, lbl_80881FDC
    mr r3, r30
    stfs f1, 0x24c(r30)
    li r4, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80881FBC
    stfs f0, 0x238(r30)
    lwz r3, 0x4(r31)
    lwz r0, 0xc(r31)
    psq_l f1, 0x528(r3), 0, 0
    lfs f2, 0x530(r3)
    cmpwi r0, 0x2
    stfs f2, 0x24(r31)
    psq_st f1, 0x1c(r31), 0, 0
    psq_l f1, 0x528(r29), 0, 0
    lfs f2, 0x530(r29)
    stfs f2, 0x18(r31)
    psq_st f1, 0x10(r31), 0, 0
    bne lbl_fn_80194E2C_00001BF0
    frsp f0, f2
    lfs f5, 0x24(r31)
    lfs f4, 0x1c(r31)
    addi r3, r1, 0xd4
    lfs f3, 0x10(r31)
    mr r4, r3
    fsubs f5, f5, f0
    lfs f0, lbl_80881FCC
    fsubs f3, f4, f3
    stfs f0, 0xd8(r1)
    stfs f3, 0xd4(r1)
    stfs f5, 0xdc(r1)
    bl fn_805F98D0
    lfs f2, 0xdc(r1)
    addi r3, r1, 0xd4
    lfs f0, lbl_80881FD0
    addi r30, r1, 0xbc
    fabs f3, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0xc4(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_80194E2C_00001A30
    lfs f3, 0xbc(r1)
    lfs f0, lbl_80881FCC
    fcmpo cr0, f3, f0
    ble lbl_fn_80194E2C_00001A24
    lfs f0, lbl_80881FD4
    b lbl_fn_80194E2C_00001A28
lbl_fn_80194E2C_00001A24:
    lfs f0, lbl_80881FD8
lbl_fn_80194E2C_00001A28:
    stfs f0, 0x90(r1)
    b lbl_fn_80194E2C_00001A44
lbl_fn_80194E2C_00001A30:
    frsp f2, f2
    lfs f1, 0xbc(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x90(r1)
lbl_fn_80194E2C_00001A44:
    lfs f0, 0x90(r1)
    addi r3, r1, 0x180
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80881FCC
    addi r4, r1, 0x80
    lfs f30, 0x188(r1)
    mr r5, r4
    lfs f31, 0x184(r1)
    addi r3, r1, 0x1b0
    lfs f13, 0x180(r1)
    lfs f12, 0x198(r1)
    lfs f11, 0x194(r1)
    lfs f10, 0x190(r1)
    lfs f9, 0x1a8(r1)
    lfs f8, 0x1a4(r1)
    lfs f7, 0x1a0(r1)
    lfs f6, 0x1ac(r1)
    lfs f5, 0x19c(r1)
    lfs f4, 0x18c(r1)
    lfs f0, lbl_80881FBC
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0xc4(r1)
    stfs f3, 0x1e0(r1)
    stfs f3, 0x1e4(r1)
    stfs f3, 0x1e8(r1)
    stfs f0, 0x1ec(r1)
    stfs f13, 0x50(r1)
    stfs f31, 0x54(r1)
    stfs f30, 0x58(r1)
    stfs f13, 0x1b0(r1)
    stfs f31, 0x1b4(r1)
    stfs f30, 0x1b8(r1)
    stfs f10, 0x5c(r1)
    stfs f11, 0x60(r1)
    stfs f12, 0x64(r1)
    stfs f10, 0x1c0(r1)
    stfs f11, 0x1c4(r1)
    stfs f12, 0x1c8(r1)
    stfs f7, 0x68(r1)
    stfs f8, 0x6c(r1)
    stfs f9, 0x70(r1)
    stfs f7, 0x1d0(r1)
    stfs f8, 0x1d4(r1)
    stfs f9, 0x1d8(r1)
    stfs f4, 0x74(r1)
    stfs f5, 0x78(r1)
    stfs f6, 0x7c(r1)
    stfs f4, 0x1bc(r1)
    stfs f5, 0x1cc(r1)
    stfs f6, 0x1dc(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x88(r1)
    bl fn_805F9750
    lfs f2, 0x88(r1)
    lfs f0, lbl_80881FD0
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80194E2C_00001B60
    lfs f3, 0x84(r1)
    lfs f0, lbl_80881FCC
    fcmpo cr0, f3, f0
    ble lbl_fn_80194E2C_00001B50
    lfs f0, lbl_80881FD4
    b lbl_fn_80194E2C_00001B54
lbl_fn_80194E2C_00001B50:
    lfs f0, lbl_80881FD8
lbl_fn_80194E2C_00001B54:
    fneg f0, f0
    stfs f0, 0x8c(r1)
    b lbl_fn_80194E2C_00001B74
lbl_fn_80194E2C_00001B60:
    lfs f1, 0x84(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x8c(r1)
lbl_fn_80194E2C_00001B74:
    lfs f6, lbl_80881FCC
    addi r3, r1, 0x8c
    psq_l f1, 0x0(r3), 0, 0
    fmr f2, f6
    lwz r3, 0x4(r31)
    lfs f4, lbl_80882040
    stfs f2, 0xc4(r1)
    frsp f2, f2
    psq_st f1, 0x534(r3), 0, 0
    stfs f2, 0x53c(r3)
    lfs f5, 0xdc(r1)
    lfs f3, 0xd8(r1)
    lfs f0, 0xd4(r1)
    fmuls f5, f5, f4
    fmuls f7, f3, f4
    lfs f3, 0x14(r31)
    fmuls f8, f0, f4
    lfs f4, 0x10(r31)
    lfs f0, 0x18(r31)
    fadds f3, f3, f7
    fadds f4, f4, f8
    stfs f6, 0x94(r1)
    fadds f0, f0, f5
    psq_st f1, 0x0(r30), 0, 0
    stfs f8, 0xb0(r1)
    stfs f7, 0xb4(r1)
    stfs f5, 0xb8(r1)
    stfs f4, 0x10(r31)
    stfs f3, 0x14(r31)
    stfs f0, 0x18(r31)
    b lbl_fn_80194E2C_00001DE0
lbl_fn_80194E2C_00001BF0:
    frsp f0, f2
    lfs f5, 0x24(r31)
    lfs f4, 0x1c(r31)
    addi r3, r1, 0xc8
    lfs f3, 0x10(r31)
    mr r4, r3
    fsubs f5, f5, f0
    lfs f0, lbl_80881FCC
    fsubs f3, f4, f3
    stfs f0, 0xcc(r1)
    stfs f3, 0xc8(r1)
    stfs f5, 0xd0(r1)
    bl fn_805F98D0
    lfs f2, 0xd0(r1)
    addi r3, r1, 0xc8
    lfs f0, lbl_80881FD0
    addi r30, r1, 0xa4
    fabs f3, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0xac(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_80194E2C_00001C74
    lfs f3, 0xa4(r1)
    lfs f0, lbl_80881FCC
    fcmpo cr0, f3, f0
    ble lbl_fn_80194E2C_00001C68
    lfs f0, lbl_80881FD4
    b lbl_fn_80194E2C_00001C6C
lbl_fn_80194E2C_00001C68:
    lfs f0, lbl_80881FD8
lbl_fn_80194E2C_00001C6C:
    stfs f0, 0x48(r1)
    b lbl_fn_80194E2C_00001C88
lbl_fn_80194E2C_00001C74:
    frsp f2, f2
    lfs f1, 0xa4(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_80194E2C_00001C88:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x110
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80881FCC
    addi r4, r1, 0x38
    lfs f31, 0x118(r1)
    mr r5, r4
    lfs f30, 0x114(r1)
    addi r3, r1, 0x140
    lfs f13, 0x110(r1)
    lfs f12, 0x128(r1)
    lfs f11, 0x124(r1)
    lfs f10, 0x120(r1)
    lfs f9, 0x138(r1)
    lfs f8, 0x134(r1)
    lfs f7, 0x130(r1)
    lfs f6, 0x13c(r1)
    lfs f5, 0x12c(r1)
    lfs f4, 0x11c(r1)
    lfs f0, lbl_80881FBC
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0xac(r1)
    stfs f3, 0x170(r1)
    stfs f3, 0x174(r1)
    stfs f3, 0x178(r1)
    stfs f0, 0x17c(r1)
    stfs f13, 0x8(r1)
    stfs f30, 0xc(r1)
    stfs f31, 0x10(r1)
    stfs f13, 0x140(r1)
    stfs f30, 0x144(r1)
    stfs f31, 0x148(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0x150(r1)
    stfs f11, 0x154(r1)
    stfs f12, 0x158(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0x160(r1)
    stfs f8, 0x164(r1)
    stfs f9, 0x168(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0x14c(r1)
    stfs f5, 0x15c(r1)
    stfs f6, 0x16c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80881FD0
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80194E2C_00001DA4
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80881FCC
    fcmpo cr0, f3, f0
    ble lbl_fn_80194E2C_00001D94
    lfs f0, lbl_80881FD4
    b lbl_fn_80194E2C_00001D98
lbl_fn_80194E2C_00001D94:
    lfs f0, lbl_80881FD8
lbl_fn_80194E2C_00001D98:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_80194E2C_00001DB8
lbl_fn_80194E2C_00001DA4:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_80194E2C_00001DB8:
    addi r3, r1, 0x44
    lfs f2, lbl_80881FCC
    psq_l f1, 0x0(r3), 0, 0
    lwz r3, 0x4(r31)
    stfs f2, 0x4c(r1)
    stfs f2, 0xac(r1)
    frsp f2, f2
    psq_st f1, 0x534(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x53c(r3)
lbl_fn_80194E2C_00001DE0:
    lwz r5, 0x4(r31)
    addi r3, r1, 0xe0
    lfs f3, lbl_80881FCC
    li r4, 0x79
    lfs f0, lbl_80881FBC
    stfs f3, 0x98(r1)
    stfs f3, 0x9c(r1)
    stfs f0, 0xa0(r1)
    lfs f1, 0x538(r5)
    bl fn_805F8E70
    addi r4, r1, 0x98
    addi r3, r1, 0xe0
    mr r5, r4
    bl fn_805F93C0
    addi r3, r1, 0x98
    lfs f2, 0xa0(r1)
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r31
    psq_st f1, 0x2c(r31), 0, 0
    stfs f2, 0x34(r31)
    psq_l f31, 0x218(r1), 0, 0
    lfd f31, 0x210(r1)
    psq_l f30, 0x208(r1), 0, 0
    lfd f30, 0x200(r1)
    lwz r31, 0x1fc(r1)
    lwz r30, 0x1f8(r1)
    lwz r29, 0x1f4(r1)
    lwz r0, 0x224(r1)
    mtlr r0
    addi r1, r1, 0x220
    blr
}
