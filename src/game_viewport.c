#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_19(void);
extern void _restgpr_21(void);
extern void _savegpr_19(void);
extern void _savegpr_21(void);
extern void fn_8000D124(void);
extern void fn_8000D3A4(void);
extern void fn_8000D9E8(void);
extern void fn_8000DCF4(void);
extern void fn_8001047C(void);
extern void fn_80011034(void);
extern void fn_80012C88(void);
extern void fn_80013338(void);
extern void fn_80013484(void);
extern void fn_80041B8C(void);
extern void fn_80042108(void);
extern void fn_80050420(void);
extern void fn_8005E3E0(void);
extern void fn_80064F00(void);
extern void fn_8008B964(void);
extern void fn_8008CD1C(void);
extern void fn_800C31F4(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_800EE180(void);
extern void fn_800EFD04(void);
extern void fn_800EFDA0(void);
extern void fn_800EFF04(void);
extern void fn_800F52F0(void);
extern void fn_800F52F8(void);
extern void fn_800F5300(void);
extern void fn_800F530C(void);
extern void fn_80102890(void);
extern void fn_801065F4(void);
extern void fn_8010B250(void);
extern void fn_8010EE78(void);
extern void fn_80134250(void);
extern void fn_80134270(void);
extern void fn_8021A888(void);
extern void fn_80232B7C(void);
extern void fn_80239D58(void);
extern void fn_80239DAC(void);
extern void fn_8023A680(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F90D0(void);
extern void fn_805F9160(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_80680CF8(void);
extern void fn_8068AEA4(void);
extern void fn_80695D84(void);

/* External data declarations */
extern u8 lbl_80735DD0[];
extern u8 lbl_80735EB0[];
extern u8 lbl_80735EB8[];

/* Small data declarations */
extern u32 lbl_8087EEB0;
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F610;
extern u32 lbl_80881478;
extern u32 lbl_80881490;
extern u32 lbl_80881494;
extern u32 lbl_808814AC;
extern u32 lbl_808814B0;
extern u32 lbl_808814B4;
extern u32 lbl_808814C8;
extern u32 lbl_808814CC;
extern u32 lbl_808814D4;
extern u32 lbl_808814D8;
extern u32 lbl_808814DC;
extern u32 lbl_80881500;
extern u32 lbl_8088150C;
extern u32 lbl_80881510;
extern u32 lbl_80881514;
extern u32 lbl_80881518;
extern u32 lbl_8088151C;
extern u32 lbl_80881520;
extern u32 lbl_80881524;
extern u32 lbl_80881528;
extern u32 lbl_8088152C;
extern u32 lbl_80881530;
extern u32 lbl_80881534;

/* Function declarations */
void fn_800F7250(void);
void fn_800F7258(void);
void fn_800F7260(void);
void fn_800F72CC(void);
void fn_800F72F4(void);
void fn_800F7F60(void);
void fn_800F7F80(void);
void fn_800F7F90(void);
void fn_800F7F98(void);
void fn_800F7FA0(void);
void fn_800F7FA8(void);
void fn_800F7FB4(void);
void fn_800F7FBC(void);
void fn_800F7FD8(void);
void fn_800F7FF0(void);
void fn_800F7FF8(void);
void fn_800F8014(void);
void fn_800F8098(void);
void fn_800F80A0(void);
void fn_800F80A8(void);
void fn_800F80B8(void);
void fn_800F8290(void);
void fn_800F831C(void);
void fn_800F833C(void);
void fn_800F8348(void);
void fn_800F84BC(void);
void fn_800F84C8(void);
void fn_800F84D0(void);
void fn_800F84D8(void);
void fn_800F8524(void);
void fn_800F8538(void);
void fn_800F8544(void);
void fn_800F8548(void);
void fn_800F8574(void);

asm void fn_800F7250(void)
{
    nofralloc
    lwz r3, lbl_8087EEB0
    blr
}

asm void fn_800F7258(void)
{
    nofralloc
    addi r3, r3, 0x104
    blr
}

asm void fn_800F7260(void)
{
    nofralloc
    lfs f2, 0x8(r5)
    lfs f4, 0x8(r4)
    lfs f0, 0x4(r5)
    fsubs f5, f2, f4
    lfs f3, 0x4(r4)
    lfs f2, 0x0(r5)
    fsubs f6, f0, f3
    stwu r1, -0x20(r1)
    lfs f0, 0x0(r4)
    fmuls f7, f5, f1
    stfs f6, 0xc(r1)
    fsubs f2, f2, f0
    fmuls f6, f6, f1
    stfs f5, 0x10(r1)
    fadds f4, f7, f4
    fmuls f1, f2, f1
    stfs f2, 0x8(r1)
    fadds f2, f6, f3
    stfs f1, 0x14(r1)
    fadds f0, f1, f0
    stfs f6, 0x18(r1)
    stfs f7, 0x1c(r1)
    stfs f0, 0x0(r3)
    stfs f2, 0x4(r3)
    stfs f4, 0x8(r3)
    addi r1, r1, 0x20
    blr
}

asm void fn_800F72CC(void)
{
    nofralloc
    lfs f3, 0x8(r4)
    lfs f2, 0x4(r4)
    lfs f0, 0x0(r4)
    fmuls f3, f3, f1
    fmuls f2, f2, f1
    fmuls f0, f0, f1
    stfs f3, 0x8(r3)
    stfs f0, 0x0(r3)
    stfs f2, 0x4(r3)
    blr
}

asm void fn_800F72F4(void)
{
    nofralloc
    stwu r1, -0x420(r1)
    mflr r0
    stw r0, 0x424(r1)
    addi r11, r1, 0x3d0
    stfd f31, 0x410(r1)
    psq_st f31, 0x418(r1), 0, 0
    stfd f30, 0x400(r1)
    psq_st f30, 0x408(r1), 0, 0
    stfd f29, 0x3f0(r1)
    psq_st f29, 0x3f8(r1), 0, 0
    stfd f28, 0x3e0(r1)
    psq_st f28, 0x3e8(r1), 0, 0
    stfd f27, 0x3d0(r1)
    psq_st f27, 0x3d8(r1), 0, 0
    bl _savegpr_21
    lis r0, 0x4330
    mr r27, r4
    mr r26, r3
    stw r0, 0x390(r1)
    mr r21, r5
    mr r3, r27
    stw r0, 0x398(r1)
    bl fn_800EE180
    cmpwi r3, 0x0
    beq lbl_fn_800F72F4_00000CD0
    mr r3, r27
    bl fn_800F530C
    lwz r30, 0xc4(r3)
    mr r31, r3
    cmpwi r30, 0x0
    beq lbl_fn_800F72F4_00000CD0
    mr r3, r30
    bl fn_800F7F60
    cmpwi r3, 0x0
    bne lbl_fn_800F72F4_00000CD0
    mr r3, r26
    mr r4, r27
    bl fn_80102890
    mr r22, r3
    mr r3, r26
    mr r4, r30
    bl fn_80102890
    addis r3, r26, 0x3
    mr r4, r22
    addi r3, r3, 0x67b8
    bl fn_800F8538
    lhz r0, 0x76(r3)
    addis r4, r26, 0x4
    mr r29, r3
    li r22, 0x0
    ori r0, r0, 0x1
    sth r0, 0x76(r3)
    li r28, 0x0
    lwz r0, -0x7640(r4)
    cmpwi r0, 0x0
    bne lbl_fn_800F72F4_000001B0
    mr r3, r30
    bl fn_800F7F80
    cmpwi r3, 0x0
    beq lbl_fn_800F72F4_000001A4
    mr r3, r30
    bl fn_800F5300
    cmpwi r3, 0x0
    bne lbl_fn_800F72F4_000001B0
lbl_fn_800F72F4_000001A4:
    bl fn_800F7F90
    cmpwi r3, 0x0
    beq lbl_fn_800F72F4_000001B8
lbl_fn_800F72F4_000001B0:
    li r28, 0x1
    b lbl_fn_800F72F4_000001E0
lbl_fn_800F72F4_000001B8:
    bl fn_8000D9E8
    bl fn_8000DCF4
    bl fn_800F5300
    cmpwi r3, 0x0
    beq lbl_fn_800F72F4_000001D4
    li r28, 0x3
    b lbl_fn_800F72F4_000001E0
lbl_fn_800F72F4_000001D4:
    cmpwi r21, 0x0
    beq lbl_fn_800F72F4_000001E0
    li r28, 0x2
lbl_fn_800F72F4_000001E0:
    lhz r0, 0x74(r29)
    cmpw r0, r28
    beq lbl_fn_800F72F4_000001F0
    li r22, 0x1
lbl_fn_800F72F4_000001F0:
    lwz r0, 0xc8(r31)
    cmplw r0, r30
    beq lbl_fn_800F72F4_00000208
    cmpwi r0, 0x0
    beq lbl_fn_800F72F4_00000208
    li r22, 0x1
lbl_fn_800F72F4_00000208:
    cmpwi r22, 0x0
    beq lbl_fn_800F72F4_00000254
    bl fn_800F7FA0
    li r4, 0x1
    bl fn_800F7F98
    bl fn_800F7FA0
    mr r4, r29
    li r5, 0x0
    li r6, 0x0
    bl fn_80239DAC
    bl fn_800F7FA0
    li r4, 0x0
    bl fn_800F7F98
    li r0, 0xc
    stw r0, 0x70(r29)
    lhz r0, 0x76(r29)
    andi. r0, r0, 0xffef
    sth r0, 0x76(r29)
    b lbl_fn_800F72F4_000003A4
lbl_fn_800F72F4_00000254:
    lwz r12, 0x0(r27)
    mr r3, r27
    lwz r12, 0xe4(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_800F72F4_00000398
    lhz r0, 0x76(r29)
    rlwinm r0, r0, 0, 27, 27
    cmpwi r0, 0x10
    beq lbl_fn_800F72F4_00000388
    bl fn_800F7FA0
    li r4, 0x1
    bl fn_800F7F98
    bl fn_800F7FA0
    mr r4, r29
    li r5, 0x0
    bl fn_800F7FA8
    bl fn_800F7FA0
    li r23, 0x0
    stw r23, 0x8(r1)
    li r25, -0x1
    addis r4, r26, 0x4
    stw r25, 0xc(r1)
    li r24, 0x1
    lfs f1, lbl_80881494
    mr r7, r29
    stw r24, 0x10(r1)
    li r5, -0x1
    li r6, 0x5
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    subi r4, r4, 0x7670
    bl fn_8023A680
    bl fn_800F7FA0
    stw r23, 0x8(r1)
    addis r4, r26, 0x4
    lfs f1, lbl_80881510
    addi r7, r29, 0x30
    stw r25, 0xc(r1)
    li r5, -0x1
    li r6, 0x5
    li r8, 0x0
    stw r24, 0x10(r1)
    li r9, 0x0
    li r10, 0x0
    subi r4, r4, 0x7664
    bl fn_8023A680
    mr r3, r27
    bl fn_800F7FB4
    cmpwi r3, 0x12
    beq lbl_fn_800F72F4_00000338
    mr r3, r27
    bl fn_800F7FB4
    cmpwi r3, 0x11
    bne lbl_fn_800F72F4_0000037C
lbl_fn_800F72F4_00000338:
    bl fn_800F7FA0
    li r0, 0x0
    stw r0, 0x8(r1)
    li r0, -0x1
    addis r4, r26, 0x4
    stw r0, 0xc(r1)
    li r0, 0x1
    lfs f1, lbl_80881494
    mr r7, r29
    stw r0, 0x10(r1)
    li r5, -0x1
    li r6, 0x5
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    subi r4, r4, 0x7670
    bl fn_8023A680
lbl_fn_800F72F4_0000037C:
    bl fn_800F7FA0
    li r4, 0x0
    bl fn_800F7F98
lbl_fn_800F72F4_00000388:
    lhz r0, 0x76(r29)
    ori r0, r0, 0x10
    sth r0, 0x76(r29)
    b lbl_fn_800F72F4_000003A4
lbl_fn_800F72F4_00000398:
    lhz r0, 0x76(r29)
    andi. r0, r0, 0xffef
    sth r0, 0x76(r29)
lbl_fn_800F72F4_000003A4:
    mr r3, r27
    bl fn_800F7FBC
    mr r4, r3
    addi r3, r1, 0x1bc
    bl fn_8001047C
    mr r3, r30
    bl fn_800F7FBC
    mr r4, r3
    addi r3, r1, 0x1b0
    bl fn_8001047C
    addi r3, r1, 0x178
    addi r4, r1, 0x1b0
    addi r5, r1, 0x1bc
    bl fn_80013338
    addi r3, r1, 0x1a4
    addi r4, r1, 0x178
    bl fn_800F7FD8
    mr r3, r27
    bl fn_800F7FF8
    addi r3, r1, 0x16c
    addi r4, r1, 0x1a4
    bl fn_800F72CC
    addi r3, r1, 0x1bc
    addi r4, r1, 0x16c
    bl fn_80012C88
    mr r3, r30
    bl fn_800F7FF8
    addi r3, r1, 0x154
    addi r4, r1, 0x1a4
    bl fn_800F72CC
    lfs f1, lbl_80881514
    addi r3, r1, 0x160
    addi r4, r1, 0x154
    bl fn_800F72CC
    addi r3, r1, 0x1b0
    addi r4, r1, 0x160
    bl fn_80013484
    addi r3, r1, 0x148
    addi r4, r1, 0x1b0
    addi r5, r1, 0x1bc
    bl fn_80013338
    addi r3, r1, 0x1a4
    addi r4, r1, 0x148
    bl fn_8000D124
    addi r3, r1, 0x1a4
    bl fn_8000D3A4
    lfs f2, lbl_808814B0
    addi r3, r1, 0x1a4
    lfs f0, lbl_808814C8
    fsubs f1, f1, f2
    fdivs f0, f1, f0
    stfs f0, 0x24(r1)
    bl fn_800F7FF0
    addi r3, r1, 0x198
    addi r4, r1, 0x1a4
    bl fn_80011034
    addi r3, r1, 0x188
    bl fn_80041B8C
    cmpwi r28, 0x1
    beq lbl_fn_800F72F4_000004A0
    cmpwi r28, 0x2
    beq lbl_fn_800F72F4_00000578
    b lbl_fn_800F72F4_000005A0
lbl_fn_800F72F4_000004A0:
    mr r3, r27
    bl fn_800F52F0
    bl fn_80134270
    cmpwi r3, 0x0
    beq lbl_fn_800F72F4_000004DC
    bl fn_800F52F8
    bl fn_800F8098
    mr r4, r3
    addi r3, r1, 0x138
    lwz r4, 0x20(r4)
    bl fn_800F8014
    mr r4, r3
    addi r3, r1, 0x188
    bl fn_80042108
    b lbl_fn_800F72F4_0000053C
lbl_fn_800F72F4_000004DC:
    mr r3, r27
    bl fn_800F52F0
    bl fn_80134250
    cmpwi r3, 0x0
    beq lbl_fn_800F72F4_00000518
    bl fn_800F52F8
    bl fn_800F8098
    mr r4, r3
    addi r3, r1, 0x128
    lwz r4, 0x1c(r4)
    bl fn_800F8014
    mr r4, r3
    addi r3, r1, 0x188
    bl fn_80042108
    b lbl_fn_800F72F4_0000053C
lbl_fn_800F72F4_00000518:
    bl fn_800F52F8
    bl fn_800F8098
    mr r4, r3
    addi r3, r1, 0x118
    lwz r4, 0x18(r4)
    bl fn_800F8014
    mr r4, r3
    addi r3, r1, 0x188
    bl fn_80042108
lbl_fn_800F72F4_0000053C:
    mr r3, r27
    bl fn_800F7FB4
    subi r0, r3, 0x11
    cmplwi r0, 0x1
    bgt lbl_fn_800F72F4_000005C4
    bl fn_800F52F8
    bl fn_800F8098
    mr r4, r3
    addi r3, r1, 0x108
    lwz r4, 0x20(r4)
    bl fn_800F8014
    mr r4, r3
    addi r3, r1, 0x188
    bl fn_80042108
    b lbl_fn_800F72F4_000005C4
lbl_fn_800F72F4_00000578:
    bl fn_800F52F8
    bl fn_800F8098
    mr r4, r3
    addi r3, r1, 0xf8
    lwz r4, 0x20(r4)
    bl fn_800F8014
    mr r4, r3
    addi r3, r1, 0x188
    bl fn_80042108
    b lbl_fn_800F72F4_000005C4
lbl_fn_800F72F4_000005A0:
    bl fn_800F52F8
    bl fn_800F8098
    mr r4, r3
    addi r3, r1, 0xe8
    lwz r4, 0x14(r4)
    bl fn_800F8014
    mr r4, r3
    addi r3, r1, 0x188
    bl fn_80042108
lbl_fn_800F72F4_000005C4:
    sth r28, 0x74(r29)
    mr r3, r27
    lfs f28, lbl_80881494
    bl fn_800F7FB4
    cmpwi r3, 0x11
    beq lbl_fn_800F72F4_000005F0
    cmpwi r3, 0x12
    beq lbl_fn_800F72F4_000005F8
    cmpwi r3, 0x3b
    beq lbl_fn_800F72F4_000005F8
    b lbl_fn_800F72F4_000005FC
lbl_fn_800F72F4_000005F0:
    lfs f28, lbl_80881490
    b lbl_fn_800F72F4_000005FC
lbl_fn_800F72F4_000005F8:
    lfs f28, lbl_80881510
lbl_fn_800F72F4_000005FC:
    lwz r4, 0x70(r29)
    addis r3, r26, 0x4
    subi r0, r4, 0x1
    stw r0, 0x70(r29)
    lwz r0, -0x7640(r3)
    cmpwi r0, 0x0
    bne lbl_fn_800F72F4_00000A9C
    lwz r3, 0x70(r29)
    cmpwi r3, 0x0
    blt lbl_fn_800F72F4_00000A9C
    subi r0, r3, 0x6
    lis r3, lbl_80735EB0@ha
    xoris r0, r0, 0x8000
    stw r0, 0x394(r1)
    lfd f2, lbl_80735EB0@l(r3)
    lfd f0, 0x390(r1)
    lfs f1, lbl_808814B4
    fsubs f0, f0, f2
    lfs f28, lbl_80881478
    fdivs f0, f0, f1
    fcmpo cr0, f28, f0
    ble lbl_fn_800F72F4_00000658
    b lbl_fn_800F72F4_00000668
lbl_fn_800F72F4_00000658:
    stw r0, 0x39c(r1)
    lfd f0, 0x398(r1)
    fsubs f0, f0, f2
    fdivs f28, f0, f1
lbl_fn_800F72F4_00000668:
    fmr f1, f28
    addi r3, r1, 0xd8
    addi r4, r1, 0x1b0
    addi r5, r29, 0x60
    bl fn_800F7260
    addi r3, r1, 0x1b0
    addi r4, r1, 0xd8
    bl fn_8000D124
    addi r3, r1, 0xcc
    addi r4, r1, 0x1b0
    addi r5, r1, 0x1bc
    bl fn_80013338
    addi r3, r1, 0x1a4
    addi r4, r1, 0xcc
    bl fn_8000D124
    addi r3, r1, 0x1a4
    bl fn_8000D3A4
    lfs f2, lbl_808814B0
    addi r3, r1, 0x24
    lfs f0, lbl_808814C8
    addi r4, r29, 0x6c
    fsubs f2, f1, f2
    fmr f1, f28
    fdivs f0, f2, f0
    stfs f0, 0x24(r1)
    bl fn_800F8524
    stfs f1, 0x24(r1)
    addi r3, r1, 0x1a4
    bl fn_800F7FF0
    addi r3, r1, 0xc0
    addi r4, r1, 0x1a4
    bl fn_80011034
    addi r3, r1, 0x198
    addi r4, r1, 0xc0
    bl fn_8000D124
    addi r3, r1, 0x210
    bl fn_800F8544
    addi r3, r1, 0x1f8
    bl fn_800F8544
    addi r3, r1, 0x210
    addi r4, r1, 0x1bc
    bl fn_8000D124
    addi r3, r1, 0x21c
    addi r4, r1, 0x1b0
    bl fn_8000D124
    bl fn_8008B964
    bl fn_800F7258
    bl fn_800F80A0
    addi r4, r1, 0x210
    addi r5, r1, 0x1f8
    bl fn_80050420
    cmpwi r3, 0x0
    beq lbl_fn_800F72F4_00000768
    addi r3, r1, 0xb4
    addi r4, r1, 0x204
    addi r5, r1, 0x1f8
    bl fn_80013338
    addi r3, r1, 0xb4
    bl fn_8000D3A4
    lfs f2, lbl_808814B0
    lfs f0, lbl_808814C8
    fsubs f1, f1, f2
    fdivs f0, f1, f0
    b lbl_fn_800F72F4_0000076C
lbl_fn_800F72F4_00000768:
    lfs f0, lbl_80881518
lbl_fn_800F72F4_0000076C:
    stfs f0, 0x24(r1)
    addi r3, r1, 0x2b8
    addi r4, r1, 0x1f8
    bl fn_800F80A8
    mr r3, r29
    addi r4, r1, 0x2b8
    bl fn_8008CD1C
    mr r3, r29
    addi r4, r1, 0x198
    bl fn_800F80B8
    lfs f1, lbl_808814B0
    mr r3, r29
    lfs f3, 0x24(r1)
    fmr f2, f1
    bl fn_800F8290
    lfs f1, lbl_808814B0
    addi r3, r1, 0x9c
    addi r4, r1, 0x1a4
    bl fn_800F72CC
    addi r3, r1, 0xa8
    addi r4, r1, 0x1b0
    addi r5, r1, 0x9c
    bl fn_80013338
    addi r3, r1, 0x288
    addi r4, r1, 0xa8
    bl fn_800F80A8
    addi r3, r29, 0x30
    addi r4, r1, 0x288
    bl fn_8008CD1C
    addi r3, r29, 0x30
    addi r4, r1, 0x198
    bl fn_800F80B8
    addi r3, r1, 0x2e8
    bl fn_8005E3E0
    addi r3, r1, 0x300
    bl fn_8005E3E0
    addi r3, r1, 0x318
    bl fn_8005E3E0
    addi r3, r1, 0x330
    bl fn_8005E3E0
    addi r3, r1, 0x348
    bl fn_8005E3E0
    addi r3, r1, 0x360
    bl fn_8005E3E0
    addi r3, r1, 0x378
    bl fn_8005E3E0
    lfs f1, lbl_80881478
    addi r3, r1, 0x40
    lfs f2, lbl_80881494
    bl fn_800F84BC
    mr r24, r3
    addi r3, r1, 0x188
    bl fn_800F8348
    mr r5, r3
    mr r6, r24
    addi r3, r1, 0x2e8
    addi r4, r1, 0x1bc
    bl fn_800F831C
    lwz r0, 0x70(r29)
    li r24, 0x6
    cmpwi r0, 0x6
    bge lbl_fn_800F72F4_00000868
    mr r24, r0
lbl_fn_800F72F4_00000868:
    lis r3, lbl_80735EB0@ha
    lfs f29, lbl_808814B4
    lfd f28, lbl_80735EB0@l(r3)
    addi r23, r1, 0x2e8
    lfs f30, lbl_80881494
    xoris r27, r24, 0x8000
    lfs f31, lbl_808814B0
    li r21, 0x0
    b lbl_fn_800F72F4_00000988
lbl_fn_800F72F4_0000088C:
    subf r3, r21, r24
    addi r0, r21, 0x1
    subi r3, r3, 0x1
    addi r22, r1, 0x2e8
    xoris r3, r3, 0x8000
    stw r3, 0x394(r1)
    mulli r0, r0, 0x18
    addi r4, r1, 0x1b0
    lfd f0, 0x390(r1)
    addi r3, r1, 0x90
    addi r5, r29, 0x60
    fsubs f0, f0, f28
    add r22, r22, r0
    fdivs f27, f0, f29
    fmr f1, f27
    bl fn_800F7260
    mr r3, r22
    addi r4, r1, 0x90
    bl fn_8000D124
    mr r4, r22
    addi r3, r1, 0x6c
    addi r5, r1, 0x1bc
    bl fn_80013338
    addi r3, r1, 0x78
    addi r4, r1, 0x6c
    bl fn_800F7FD8
    fnmsubs f0, f27, f27, f30
    addi r3, r1, 0x84
    addi r4, r1, 0x78
    fmuls f1, f31, f0
    bl fn_800F72CC
    mr r3, r22
    addi r4, r1, 0x84
    bl fn_80012C88
    addi r3, r1, 0x188
    bl fn_800F8348
    lfs f1, lbl_80881478
    stw r3, 0x24(r23)
    addi r3, r1, 0x28
    fmr f2, f1
    bl fn_800F84BC
    lfs f1, lbl_80881494
    mr r25, r3
    lfs f2, lbl_80881478
    addi r3, r1, 0x30
    bl fn_800F84BC
    stw r27, 0x394(r1)
    xoris r0, r21, 0x8000
    mr r4, r3
    mr r5, r25
    stw r0, 0x39c(r1)
    addi r3, r1, 0x38
    lfd f0, 0x390(r1)
    lfd f1, 0x398(r1)
    fsubs f0, f0, f28
    fsubs f1, f1, f28
    fdivs f1, f1, f0
    bl fn_800F84D8
    addi r3, r22, 0x10
    addi r4, r1, 0x38
    bl fn_800F833C
    addi r23, r23, 0x18
    addi r21, r21, 0x1
lbl_fn_800F72F4_00000988:
    cmpw r21, r24
    blt lbl_fn_800F72F4_0000088C
    bl fn_800F7250
    addis r8, r26, 0x4
    lfs f1, lbl_80881478
    addi r4, r1, 0x2e8
    addi r5, r24, 0x1
    li r6, 0xa0
    li r7, 0x0
    subi r8, r8, 0x763c
    bl fn_80064F00
    lwz r0, 0x70(r29)
    cmpwi r0, 0x8
    bne lbl_fn_800F72F4_00000A64
    lwz r3, 0xc4(r31)
    bl fn_800F7F80
    cmpwi r3, 0x0
    beq lbl_fn_800F72F4_00000A38
    lwz r3, 0xc4(r31)
    bl fn_800F5300
    cmpwi r3, 0x0
    beq lbl_fn_800F72F4_00000A0C
    lis r3, lbl_80735DD0@ha
    lfs f1, lbl_80881510
    lwz r4, lbl_80735DD0@l(r3)
    addi r3, r1, 0x20
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x20
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_800F72F4_00000A64
lbl_fn_800F72F4_00000A0C:
    lis r3, lbl_80735DD0@ha
    lfs f1, lbl_80881494
    lwz r4, lbl_80735DD0@l(r3)
    addi r3, r1, 0x1c
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x1c
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_800F72F4_00000A64
lbl_fn_800F72F4_00000A38:
    lis r4, lbl_80735DD0@ha
    lfs f1, lbl_80881494
    addi r4, r4, lbl_80735DD0@l
    addi r3, r1, 0x18
    lwz r4, 0x4(r4)
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x18
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_800F72F4_00000A64:
    bl fn_800F7F90
    cmpwi r3, 0x0
    beq lbl_fn_800F72F4_00000BD0
    lwz r0, 0x70(r29)
    cmpwi r0, 0x1
    bne lbl_fn_800F72F4_00000BD0
    mr r3, r30
    bl fn_800F84C8
    mr r5, r3
    mr r3, r26
    mr r4, r30
    addi r6, r1, 0x188
    bl fn_801065F4
    b lbl_fn_800F72F4_00000BD0
lbl_fn_800F72F4_00000A9C:
    lfs f27, 0x24(r1)
    addi r3, r1, 0x1e0
    bl fn_800F8544
    addi r3, r1, 0x1c8
    bl fn_800F8544
    addi r3, r1, 0x1e0
    addi r4, r1, 0x1bc
    bl fn_8000D124
    addi r3, r1, 0x1ec
    addi r4, r1, 0x1b0
    bl fn_8000D124
    bl fn_8008B964
    bl fn_800F7258
    bl fn_800F80A0
    addi r4, r1, 0x1e0
    addi r5, r1, 0x1c8
    bl fn_80050420
    cmpwi r3, 0x0
    beq lbl_fn_800F72F4_00000B14
    addi r3, r1, 0x60
    addi r4, r1, 0x1d4
    addi r5, r1, 0x1c8
    bl fn_80013338
    addi r3, r1, 0x60
    bl fn_8000D3A4
    lfs f2, lbl_808814B0
    lfs f0, lbl_808814C8
    fsubs f1, f1, f2
    fdivs f0, f1, f0
    b lbl_fn_800F72F4_00000B18
lbl_fn_800F72F4_00000B14:
    lfs f0, lbl_80881518
lbl_fn_800F72F4_00000B18:
    stfs f0, 0x24(r1)
    addi r3, r1, 0x258
    addi r4, r1, 0x1c8
    bl fn_800F80A8
    mr r3, r29
    addi r4, r1, 0x258
    bl fn_8008CD1C
    mr r3, r29
    addi r4, r1, 0x198
    bl fn_800F80B8
    addis r3, r26, 0x4
    lwz r0, -0x7640(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800F72F4_00000B68
    lfs f1, lbl_8088151C
    mr r3, r29
    lfs f3, 0x24(r1)
    fmr f2, f1
    bl fn_800F8290
    b lbl_fn_800F72F4_00000B7C
lbl_fn_800F72F4_00000B68:
    fmr f1, f28
    lfs f3, 0x24(r1)
    fmr f2, f28
    mr r3, r29
    bl fn_800F8290
lbl_fn_800F72F4_00000B7C:
    lfs f1, lbl_808814B0
    addi r3, r1, 0x48
    addi r4, r1, 0x1a4
    bl fn_800F72CC
    addi r3, r1, 0x54
    addi r4, r1, 0x1b0
    addi r5, r1, 0x48
    bl fn_80013338
    addi r3, r1, 0x228
    addi r4, r1, 0x54
    bl fn_800F80A8
    addi r3, r29, 0x30
    addi r4, r1, 0x228
    bl fn_8008CD1C
    addi r3, r29, 0x30
    addi r4, r1, 0x198
    bl fn_800F80B8
    addi r3, r29, 0x60
    addi r4, r1, 0x1b0
    bl fn_8000D124
    stfs f27, 0x6c(r29)
lbl_fn_800F72F4_00000BD0:
    bl fn_800F7FA0
    mr r4, r29
    li r5, 0x0
    bl fn_80239D58
    cmpwi r3, 0x0
    bne lbl_fn_800F72F4_00000CD0
    cmpwi r28, 0x1
    li r0, 0x0
    beq lbl_fn_800F72F4_00000BFC
    cmpwi r28, 0x3
    bne lbl_fn_800F72F4_00000C00
lbl_fn_800F72F4_00000BFC:
    li r0, 0x1
lbl_fn_800F72F4_00000C00:
    cmpwi r0, 0x0
    beq lbl_fn_800F72F4_00000C14
    addis r23, r26, 0x4
    subi r23, r23, 0x7658
    b lbl_fn_800F72F4_00000C1C
lbl_fn_800F72F4_00000C14:
    addis r23, r26, 0x4
    subi r23, r23, 0x7688
lbl_fn_800F72F4_00000C1C:
    bl fn_800F7FA0
    li r4, 0x1
    bl fn_800F7F98
    bl fn_800F7FA0
    li r4, 0x5
    bl fn_800F84D0
    bl fn_800F7FA0
    mr r4, r29
    li r5, 0x0
    bl fn_800F7FA8
    bl fn_800F7FA0
    li r28, 0x0
    stw r28, 0x8(r1)
    li r27, -0x1
    lfs f1, lbl_80881494
    stw r27, 0xc(r1)
    li r26, 0x1
    mr r4, r23
    mr r7, r29
    stw r26, 0x10(r1)
    addi r10, r1, 0x188
    li r5, -0x1
    li r6, 0x5
    li r8, 0x0
    li r9, 0x0
    bl fn_8023A680
    bl fn_800F7FA0
    stw r28, 0x8(r1)
    addi r4, r23, 0xc
    lfs f1, lbl_80881494
    addi r7, r29, 0x30
    stw r27, 0xc(r1)
    addi r10, r1, 0x188
    li r5, -0x1
    li r6, 0x5
    stw r26, 0x10(r1)
    li r8, 0x0
    li r9, 0x0
    bl fn_8023A680
    bl fn_800F7FA0
    li r4, 0x0
    bl fn_800F84D0
    bl fn_800F7FA0
    li r4, 0x0
    bl fn_800F7F98
lbl_fn_800F72F4_00000CD0:
    addi r11, r1, 0x3d0
    psq_l f31, 0x418(r1), 0, 0
    lfd f31, 0x410(r1)
    psq_l f30, 0x408(r1), 0, 0
    lfd f30, 0x400(r1)
    psq_l f29, 0x3f8(r1), 0, 0
    lfd f29, 0x3f0(r1)
    psq_l f28, 0x3e8(r1), 0, 0
    lfd f28, 0x3e0(r1)
    psq_l f27, 0x3d8(r1), 0, 0
    lfd f27, 0x3d0(r1)
    bl _restgpr_21
    lwz r0, 0x424(r1)
    mtlr r0
    addi r1, r1, 0x420
    blr
}

asm void fn_800F7F60(void)
{
    nofralloc
    lwz r0, 0x48(r3)
    li r3, 0x1
    cmpwi r0, 0x1
    beqlr
    cmpwi r0, 0x4
    beqlr
    li r3, 0x0
    blr
}

asm void fn_800F7F80(void)
{
    nofralloc
    lwz r0, 0x48(r3)
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

asm void fn_800F7F90(void)
{
    nofralloc
    lwz r3, lbl_8087F610
    blr
}

asm void fn_800F7F98(void)
{
    nofralloc
    stw r4, 0xd0(r3)
    blr
}

asm void fn_800F7FA0(void)
{
    nofralloc
    lwz r3, lbl_8087F3C0
    blr
}

asm void fn_800F7FA8(void)
{
    nofralloc
    mr r3, r4
    mr r4, r5
    b fn_80232B7C
}

asm void fn_800F7FB4(void)
{
    nofralloc
    lwz r3, 0x146c(r3)
    blr
}

asm void fn_800F7FBC(void)
{
    nofralloc
    lwz r0, 0x14a8(r3)
    srwi. r0, r0, 31
    beq lbl_fn_800F7FBC_00000D80
    addi r3, r3, 0x148c
    blr
lbl_fn_800F7FBC_00000D80:
    addi r3, r3, 0x600
    blr
}

asm void fn_800F7FD8(void)
{
    nofralloc
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    mr r4, r3
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x8(r3)
    b fn_805F98D0
}

asm void fn_800F7FF0(void)
{
    nofralloc
    mr r4, r3
    b fn_805F98D0
}

asm void fn_800F7FF8(void)
{
    nofralloc
    lwz r0, 0x14a8(r3)
    srwi. r0, r0, 31
    beq lbl_fn_800F7FF8_00000DBC
    lfs f1, 0x1498(r3)
    blr
lbl_fn_800F7FF8_00000DBC:
    lfs f1, 0x5b0(r3)
    blr
}

asm void fn_800F8014(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    lis r8, 0x4330
    extrwi r0, r4, 8, 8
    lis r7, lbl_80735EB8@ha
    stw r0, 0xc(r1)
    extrwi r6, r4, 8, 16
    lfd f5, lbl_80735EB8@l(r7)
    clrlwi r5, r4, 24
    stw r8, 0x8(r1)
    srwi r0, r4, 24
    lfs f4, lbl_80881520
    lfd f0, 0x8(r1)
    stw r8, 0x10(r1)
    fsubs f1, f0, f5
    stw r6, 0x14(r1)
    lfd f0, 0x10(r1)
    fmuls f3, f4, f1
    stw r5, 0xc(r1)
    fsubs f2, f0, f5
    stw r0, 0x14(r1)
    lfd f1, 0x8(r1)
    lfd f0, 0x10(r1)
    fmuls f2, f4, f2
    fsubs f1, f1, f5
    stfs f3, 0x0(r3)
    fsubs f0, f0, f5
    stfs f2, 0x4(r3)
    fmuls f1, f4, f1
    fmuls f0, f4, f0
    stfs f1, 0x8(r3)
    stfs f0, 0xc(r3)
    addi r1, r1, 0x20
    blr
}

asm void fn_800F8098(void)
{
    nofralloc
    addi r3, r3, 0x350
    blr
}

asm void fn_800F80A0(void)
{
    nofralloc
    addi r3, r3, 0x100
    blr
}

asm void fn_800F80A8(void)
{
    nofralloc
    lfs f1, 0x0(r4)
    lfs f2, 0x4(r4)
    lfs f3, 0x8(r4)
    b fn_805F90D0
}

asm void fn_800F80B8(void)
{
    nofralloc
    stwu r1, -0x1a0(r1)
    mflr r0
    lfs f7, lbl_80881478
    stw r0, 0x1a4(r1)
    lfs f1, 0x8(r4)
    stw r31, 0x19c(r1)
    addi r31, r1, 0x128
    lfs f0, lbl_80881494
    fcmpu cr0, f7, f1
    stw r30, 0x198(r1)
    mr r30, r4
    stw r29, 0x194(r1)
    mr r29, r3
    stfs f7, 0x154(r1)
    stfs f7, 0x14c(r1)
    stfs f7, 0x148(r1)
    stfs f7, 0x144(r1)
    stfs f7, 0x140(r1)
    stfs f7, 0x138(r1)
    stfs f7, 0x134(r1)
    stfs f7, 0x130(r1)
    stfs f7, 0x12c(r1)
    stfs f0, 0x150(r1)
    stfs f0, 0x13c(r1)
    stfs f0, 0x128(r1)
    beq lbl_fn_800F80B8_00000F20
    addi r3, r1, 0x38
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0x38
    addi r5, r1, 0x8
    bl fn_805F89F0
    addi r3, r1, 0x8
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
lbl_fn_800F80B8_00000F20:
    lfs f0, lbl_80881478
    lfs f1, 0x4(r30)
    fcmpu cr0, f0, f1
    beq lbl_fn_800F80B8_00000F80
    addi r3, r1, 0x98
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0x98
    addi r5, r1, 0x68
    bl fn_805F89F0
    addi r3, r1, 0x68
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
lbl_fn_800F80B8_00000F80:
    lfs f0, lbl_80881478
    lfs f1, 0x0(r30)
    fcmpu cr0, f0, f1
    beq lbl_fn_800F80B8_00000FE0
    addi r3, r1, 0xf8
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0xf8
    addi r5, r1, 0xc8
    bl fn_805F89F0
    addi r3, r1, 0xc8
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
lbl_fn_800F80B8_00000FE0:
    mr r3, r29
    mr r4, r31
    addi r5, r1, 0x158
    bl fn_805F89F0
    addi r3, r1, 0x158
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f6, 0x28(r29), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    lwz r31, 0x19c(r1)
    lwz r30, 0x198(r1)
    lwz r29, 0x194(r1)
    lwz r0, 0x1a4(r1)
    mtlr r0
    addi r1, r1, 0x1a0
    blr
}

asm void fn_800F8290(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stfs f1, 0x8(r1)
    frsp f1, f1
    stfs f2, 0xc(r1)
    frsp f2, f2
    stfs f3, 0x10(r1)
    frsp f3, f3
    stw r31, 0x7c(r1)
    mr r31, r3
    addi r3, r1, 0x48
    bl fn_805F9160
    mr r3, r31
    addi r4, r1, 0x48
    addi r5, r1, 0x18
    bl fn_805F89F0
    addi r3, r1, 0x18
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f6, 0x28(r31), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    lwz r31, 0x7c(r1)
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_800F831C(void)
{
    nofralloc
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lfs f2, 0x8(r4)
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x8(r3)
    stw r5, 0xc(r3)
    psq_st f1, 0x10(r3), 0, 0
    blr
}

asm void fn_800F833C(void)
{
    nofralloc
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    blr
}

asm void fn_800F8348(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lfs f2, 0x0(r3)
    stw r0, 0x24(r1)
    lfs f0, lbl_80881494
    stw r31, 0x1c(r1)
    fcmpo cr0, f2, f0
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    cror eq, gt, eq
    bne lbl_fn_800F8348_00001134
    li r29, 0xff
    b lbl_fn_800F8348_00001160
lbl_fn_800F8348_00001134:
    lfs f0, lbl_80881478
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_800F8348_0000114C
    li r3, 0x0
    b lbl_fn_800F8348_0000115C
lbl_fn_800F8348_0000114C:
    lfs f1, lbl_8088150C
    lfs f0, lbl_80881500
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_800F8348_0000115C:
    mr r29, r3
lbl_fn_800F8348_00001160:
    lfs f2, 0x4(r28)
    lfs f0, lbl_80881494
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_800F8348_0000117C
    li r30, 0xff
    b lbl_fn_800F8348_000011A8
lbl_fn_800F8348_0000117C:
    lfs f0, lbl_80881478
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_800F8348_00001194
    li r3, 0x0
    b lbl_fn_800F8348_000011A4
lbl_fn_800F8348_00001194:
    lfs f1, lbl_8088150C
    lfs f0, lbl_80881500
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_800F8348_000011A4:
    mr r30, r3
lbl_fn_800F8348_000011A8:
    lfs f2, 0x8(r28)
    lfs f0, lbl_80881494
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_800F8348_000011C4
    li r31, 0xff
    b lbl_fn_800F8348_000011F0
lbl_fn_800F8348_000011C4:
    lfs f0, lbl_80881478
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_800F8348_000011DC
    li r3, 0x0
    b lbl_fn_800F8348_000011EC
lbl_fn_800F8348_000011DC:
    lfs f1, lbl_8088150C
    lfs f0, lbl_80881500
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_800F8348_000011EC:
    mr r31, r3
lbl_fn_800F8348_000011F0:
    lfs f2, 0xc(r28)
    lfs f0, lbl_80881494
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_800F8348_0000120C
    li r3, 0xff
    b lbl_fn_800F8348_00001234
lbl_fn_800F8348_0000120C:
    lfs f0, lbl_80881478
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_800F8348_00001224
    li r3, 0x0
    b lbl_fn_800F8348_00001234
lbl_fn_800F8348_00001224:
    lfs f1, lbl_8088150C
    lfs f0, lbl_80881500
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_800F8348_00001234:
    slwi r3, r3, 24
    slwi r0, r29, 16
    or r3, r3, r0
    slwi r0, r30, 8
    or r0, r0, r3
    or r3, r31, r0
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800F84BC(void)
{
    nofralloc
    stfs f1, 0x0(r3)
    stfs f2, 0x4(r3)
    blr
}

asm void fn_800F84C8(void)
{
    nofralloc
    addi r3, r3, 0xb0
    blr
}

asm void fn_800F84D0(void)
{
    nofralloc
    stw r4, 0xb8(r3)
    blr
}

asm void fn_800F84D8(void)
{
    nofralloc
    lfs f0, 0x4(r5)
    lfs f3, 0x4(r4)
    lfs f2, 0x0(r5)
    fsubs f4, f0, f3
    lfs f0, 0x0(r4)
    stwu r1, -0x20(r1)
    fsubs f2, f2, f0
    stfs f4, 0xc(r1)
    fmuls f4, f4, f1
    fmuls f1, f2, f1
    stfs f2, 0x8(r1)
    fadds f2, f4, f3
    stfs f4, 0x14(r1)
    fadds f0, f1, f0
    stfs f1, 0x10(r1)
    stfs f0, 0x0(r3)
    stfs f2, 0x4(r3)
    addi r1, r1, 0x20
    blr
}

asm void fn_800F8524(void)
{
    nofralloc
    lfs f0, 0x0(r4)
    lfs f2, 0x0(r3)
    fsubs f0, f0, f2
    fmadds f1, f1, f0, f2
    blr
}

asm void fn_800F8538(void)
{
    nofralloc
    mulli r0, r4, 0x78
    add r3, r3, r0
    blr
}

asm void fn_800F8544(void)
{
    nofralloc
    blr
}

asm void fn_800F8548(void)
{
    nofralloc
    lwz r5, 0x14c(r3)
    lis r4, 0x2
    subi r0, r4, 0x7960
    addi r4, r5, 0x1
    stw r4, 0x14c(r3)
    cmpw r4, r0
    ble lbl_fn_800F8548_0000131C
    li r0, 0x0
    stw r0, 0x14c(r3)
lbl_fn_800F8548_0000131C:
    mr r3, r5
    blr
}

asm void fn_800F8574(void)
{
    nofralloc
    stwu r1, -0x390(r1)
    mflr r0
    stw r0, 0x394(r1)
    addi r11, r1, 0x2f0
    stfd f31, 0x380(r1)
    psq_st f31, 0x388(r1), 0, 0
    stfd f30, 0x370(r1)
    psq_st f30, 0x378(r1), 0, 0
    stfd f29, 0x360(r1)
    psq_st f29, 0x368(r1), 0, 0
    stfd f28, 0x350(r1)
    psq_st f28, 0x358(r1), 0, 0
    stfd f27, 0x340(r1)
    psq_st f27, 0x348(r1), 0, 0
    stfd f26, 0x330(r1)
    psq_st f26, 0x338(r1), 0, 0
    stfd f25, 0x320(r1)
    psq_st f25, 0x328(r1), 0, 0
    stfd f24, 0x310(r1)
    psq_st f24, 0x318(r1), 0, 0
    stfd f23, 0x300(r1)
    psq_st f23, 0x308(r1), 0, 0
    stfd f22, 0x2f0(r1)
    psq_st f22, 0x2f8(r1), 0, 0
    bl _savegpr_19
    fmr f24, f1
    cmpwi r5, 0x0
    fmr f25, f2
    mr r21, r3
    mr r22, r4
    mr r23, r5
    mr r24, r6
    mr r20, r7
    mr r25, r8
    mr r26, r9
    mr r27, r10
    bne lbl_fn_800F8574_000013C0
    li r3, 0x0
    b lbl_fn_800F8574_000019B4
lbl_fn_800F8574_000013C0:
    lwz r3, 0xb0(r5)
    bl fn_800EFF04
    cmpwi r3, 0x0
    mr r19, r3
    beq lbl_fn_800F8574_00001420
    lwz r0, 0x48(r22)
    lfs f22, lbl_80881494
    cmpwi r0, 0x0
    bne lbl_fn_800F8574_000013F8
    mr r3, r23
    bl fn_8021A888
    cmpwi r3, 0x0
    beq lbl_fn_800F8574_000013F8
    lfs f22, lbl_80881524
lbl_fn_800F8574_000013F8:
    fmr f1, f22
    mr r4, r19
    mr r5, r24
    addi r3, r1, 0x8
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_800F8574_00001420:
    lfs f2, 0x8(r20)
    addi r19, r1, 0x54
    psq_l f1, 0x0(r20), 0, 0
    fabs f7, f2
    lfs f0, lbl_808814D4
    psq_st f1, 0x0(r19), 0, 0
    frsp f7, f7
    stfs f2, 0x5c(r1)
    fcmpo cr0, f7, f0
    bge lbl_fn_800F8574_0000146C
    lfs f7, 0x54(r1)
    lfs f0, lbl_80881478
    fcmpo cr0, f7, f0
    ble lbl_fn_800F8574_00001460
    lfs f0, lbl_808814D8
    b lbl_fn_800F8574_00001464
lbl_fn_800F8574_00001460:
    lfs f0, lbl_808814DC
lbl_fn_800F8574_00001464:
    stfs f0, 0x4c(r1)
    b lbl_fn_800F8574_00001480
lbl_fn_800F8574_0000146C:
    frsp f2, f2
    lfs f1, 0x54(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x4c(r1)
lbl_fn_800F8574_00001480:
    lfs f0, 0x4c(r1)
    addi r3, r1, 0x1a8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f7, lbl_80881478
    addi r4, r1, 0x3c
    lfs f29, 0x1b0(r1)
    mr r5, r4
    lfs f28, 0x1ac(r1)
    addi r3, r1, 0x1d8
    lfs f27, 0x1a8(r1)
    lfs f26, 0x1c0(r1)
    lfs f23, 0x1bc(r1)
    lfs f22, 0x1b8(r1)
    lfs f13, 0x1d0(r1)
    lfs f12, 0x1cc(r1)
    lfs f11, 0x1c8(r1)
    lfs f10, 0x1d4(r1)
    lfs f9, 0x1c4(r1)
    lfs f8, 0x1b4(r1)
    lfs f0, lbl_80881494
    psq_l f1, 0x0(r19), 0, 0
    lfs f2, 0x5c(r1)
    stfs f7, 0x208(r1)
    stfs f7, 0x20c(r1)
    stfs f7, 0x210(r1)
    stfs f0, 0x214(r1)
    stfs f27, 0xc(r1)
    stfs f28, 0x10(r1)
    stfs f29, 0x14(r1)
    stfs f27, 0x1d8(r1)
    stfs f28, 0x1dc(r1)
    stfs f29, 0x1e0(r1)
    stfs f22, 0x18(r1)
    stfs f23, 0x1c(r1)
    stfs f26, 0x20(r1)
    stfs f22, 0x1e8(r1)
    stfs f23, 0x1ec(r1)
    stfs f26, 0x1f0(r1)
    stfs f11, 0x24(r1)
    stfs f12, 0x28(r1)
    stfs f13, 0x2c(r1)
    stfs f11, 0x1f8(r1)
    stfs f12, 0x1fc(r1)
    stfs f13, 0x200(r1)
    stfs f8, 0x30(r1)
    stfs f9, 0x34(r1)
    stfs f10, 0x38(r1)
    stfs f8, 0x1e4(r1)
    stfs f9, 0x1f4(r1)
    stfs f10, 0x204(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x44(r1)
    bl fn_805F9750
    lfs f2, 0x44(r1)
    lfs f0, lbl_808814D4
    fabs f7, f2
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_800F8574_0000159C
    lfs f7, 0x40(r1)
    lfs f0, lbl_80881478
    fcmpo cr0, f7, f0
    ble lbl_fn_800F8574_0000158C
    lfs f0, lbl_808814D8
    b lbl_fn_800F8574_00001590
lbl_fn_800F8574_0000158C:
    lfs f0, lbl_808814DC
lbl_fn_800F8574_00001590:
    fneg f0, f0
    stfs f0, 0x48(r1)
    b lbl_fn_800F8574_000015B0
lbl_fn_800F8574_0000159C:
    lfs f1, 0x40(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x48(r1)
lbl_fn_800F8574_000015B0:
    lfs f2, lbl_80881478
    addi r3, r1, 0x48
    lfs f7, lbl_80881494
    addi r20, r1, 0x278
    frsp f0, f2
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x50(r1)
    fcmpu cr0, f2, f0
    psq_st f1, 0x0(r19), 0, 0
    stfs f2, 0x5c(r1)
    stfs f2, 0x2a4(r1)
    stfs f2, 0x29c(r1)
    stfs f2, 0x298(r1)
    stfs f2, 0x294(r1)
    stfs f2, 0x290(r1)
    stfs f2, 0x288(r1)
    stfs f2, 0x284(r1)
    stfs f2, 0x280(r1)
    stfs f2, 0x27c(r1)
    stfs f7, 0x2a0(r1)
    stfs f7, 0x28c(r1)
    stfs f7, 0x278(r1)
    beq lbl_fn_800F8574_00001660
    fmr f1, f0
    addi r3, r1, 0xb8
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r20
    addi r4, r1, 0xb8
    addi r5, r1, 0x88
    bl fn_805F89F0
    addi r3, r1, 0x88
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r20), 0, 0
    psq_st f2, 0x8(r20), 0, 0
    psq_st f3, 0x10(r20), 0, 0
    psq_st f4, 0x18(r20), 0, 0
    psq_st f5, 0x20(r20), 0, 0
    psq_st f6, 0x28(r20), 0, 0
lbl_fn_800F8574_00001660:
    lfs f0, lbl_80881478
    lfs f1, 0x58(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_800F8574_000016C0
    addi r3, r1, 0x118
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r20
    addi r4, r1, 0x118
    addi r5, r1, 0xe8
    bl fn_805F89F0
    addi r3, r1, 0xe8
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r20), 0, 0
    psq_st f2, 0x8(r20), 0, 0
    psq_st f3, 0x10(r20), 0, 0
    psq_st f4, 0x18(r20), 0, 0
    psq_st f5, 0x20(r20), 0, 0
    psq_st f6, 0x28(r20), 0, 0
lbl_fn_800F8574_000016C0:
    lfs f0, lbl_80881478
    lfs f1, 0x54(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_800F8574_00001720
    addi r3, r1, 0x178
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r20
    addi r4, r1, 0x178
    addi r5, r1, 0x148
    bl fn_805F89F0
    addi r3, r1, 0x148
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r20), 0, 0
    psq_st f2, 0x8(r20), 0, 0
    psq_st f3, 0x10(r20), 0, 0
    psq_st f4, 0x18(r20), 0, 0
    psq_st f5, 0x20(r20), 0, 0
    psq_st f6, 0x28(r20), 0, 0
lbl_fn_800F8574_00001720:
    lis r3, lbl_80735EB0@ha
    lis r4, 0x4178
    lfs f27, lbl_80881478
    addi r29, r4, 0x749f
    lfs f28, lbl_80881494
    li r28, 0x0
    lfs f29, lbl_80881528
    lis r30, 0x4330
    lfd f30, lbl_80735EB0@l(r3)
    li r31, 0x0
    lfs f31, lbl_8088152C
    li r19, 0x100
    lfs f22, lbl_80881530
    li r20, 0x20
    lfs f23, lbl_808814AC
    b lbl_fn_800F8574_00001984
lbl_fn_800F8574_00001760:
    stfs f27, 0x60(r1)
    stfs f27, 0x64(r1)
    stfs f28, 0x68(r1)
    lfs f0, 0x12cc(r22)
    lfs f7, 0x8e8(r22)
    fsubs f0, f28, f0
    fmuls f7, f7, f0
    fmuls f26, f29, f7
    bl fn_80680CF8
    mulhw r0, r29, r3
    stw r30, 0x2a8(r1)
    li r4, 0x79
    srawi r0, r0, 8
    srwi r5, r0, 31
    add r0, r0, r5
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    addi r3, r1, 0x248
    xoris r0, r0, 0x8000
    stw r0, 0x2ac(r1)
    lfd f0, 0x2a8(r1)
    fsubs f0, f0, f30
    fdivs f0, f0, f31
    fmuls f1, f26, f0
    bl fn_805F8E70
    addi r4, r1, 0x60
    addi r3, r1, 0x248
    mr r5, r4
    bl fn_805F93C0
    bl fn_80680CF8
    mulhw r0, r29, r3
    stw r30, 0x2b0(r1)
    li r4, 0x7a
    srawi r0, r0, 8
    srwi r5, r0, 31
    add r0, r0, r5
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    addi r3, r1, 0x218
    xoris r0, r0, 0x8000
    stw r0, 0x2b4(r1)
    lfd f0, 0x2b0(r1)
    fsubs f0, f0, f30
    fdivs f0, f0, f31
    fmuls f1, f22, f0
    bl fn_805F8E70
    addi r4, r1, 0x60
    addi r3, r1, 0x218
    mr r5, r4
    bl fn_805F93C0
    addi r4, r1, 0x60
    addi r3, r1, 0x278
    mr r5, r4
    bl fn_805F93C0
    stfs f23, 0x6c(r1)
    mr r3, r21
    li r5, 0x0
    stw r31, 0x70(r1)
    stw r31, 0x74(r1)
    stw r31, 0x7c(r1)
    stfs f27, 0x80(r1)
    stfs f28, 0x84(r1)
    lwz r4, 0x3c(r23)
    bl fn_8010B250
    stfs f1, 0x6c(r1)
    lwz r3, 0xb0(r23)
    bl fn_800EFD04
    stw r3, 0x70(r1)
    lwz r3, 0xb0(r23)
    bl fn_800EFDA0
    cmpwi r25, 0x0
    stw r3, 0x74(r1)
    stw r23, 0x78(r1)
    stw r27, 0x7c(r1)
    stfs f24, 0x80(r1)
    stfs f25, 0x84(r1)
    bne lbl_fn_800F8574_00001904
    lwz r6, lbl_8087F048
    li r4, 0x0
    mr r5, r6
    mtctr r19
lbl_fn_800F8574_000018A4:
    lwz r0, 0x154(r5)
    rlwinm r3, r0, 0, 15, 15
    subis r0, r3, 0x1
    cmplwi r0, 0x0
    beq lbl_fn_800F8574_000018C8
    mulli r0, r4, 0xa0
    add r3, r6, r0
    addi r3, r3, 0x150
    b lbl_fn_800F8574_000018D8
lbl_fn_800F8574_000018C8:
    addi r5, r5, 0xa0
    addi r4, r4, 0x1
    bdnz lbl_fn_800F8574_000018A4
    li r3, 0x0
lbl_fn_800F8574_000018D8:
    cmpwi r3, 0x0
    beq lbl_fn_800F8574_00001990
    lfs f1, lbl_808814CC
    mr r5, r24
    mr r7, r22
    mr r9, r26
    addi r4, r1, 0x6c
    addi r6, r1, 0x60
    li r8, -0x1
    bl fn_8010EE78
    b lbl_fn_800F8574_00001980
lbl_fn_800F8574_00001904:
    lwz r6, lbl_8087F048
    li r4, 0x0
    mr r5, r6
    mtctr r20
lbl_fn_800F8574_00001914:
    addis r3, r5, 0x1
    lwz r0, -0x5eac(r3)
    rlwinm r3, r0, 0, 15, 15
    subis r0, r3, 0x1
    cmplwi r0, 0x0
    beq lbl_fn_800F8574_00001940
    mulli r0, r4, 0xc8
    addis r3, r6, 0x1
    add r3, r3, r0
    subi r3, r3, 0x5eb0
    b lbl_fn_800F8574_00001950
lbl_fn_800F8574_00001940:
    addi r5, r5, 0xc8
    addi r4, r4, 0x1
    bdnz lbl_fn_800F8574_00001914
    li r3, 0x0
lbl_fn_800F8574_00001950:
    cmpwi r3, 0x0
    beq lbl_fn_800F8574_00001990
    lwz r12, 0x0(r3)
    mr r5, r24
    mr r7, r22
    mr r8, r25
    lwz r12, 0x28(r12)
    mr r9, r26
    addi r4, r1, 0x6c
    addi r6, r1, 0x60
    mtctr r12
    bctrl
lbl_fn_800F8574_00001980:
    addi r28, r28, 0x1
lbl_fn_800F8574_00001984:
    lwz r0, 0x48(r23)
    cmpw r28, r0
    blt lbl_fn_800F8574_00001760
lbl_fn_800F8574_00001990:
    lfs f8, 0x12cc(r22)
    lfs f7, lbl_80881534
    lfs f0, lbl_80881494
    fadds f7, f8, f7
    fcmpo cr0, f7, f0
    ble lbl_fn_800F8574_000019AC
    fmr f7, f0
lbl_fn_800F8574_000019AC:
    stfs f7, 0x12cc(r22)
    li r3, 0x1
lbl_fn_800F8574_000019B4:
    addi r11, r1, 0x2f0
    psq_l f31, 0x388(r1), 0, 0
    lfd f31, 0x380(r1)
    psq_l f30, 0x378(r1), 0, 0
    lfd f30, 0x370(r1)
    psq_l f29, 0x368(r1), 0, 0
    lfd f29, 0x360(r1)
    psq_l f28, 0x358(r1), 0, 0
    lfd f28, 0x350(r1)
    psq_l f27, 0x348(r1), 0, 0
    lfd f27, 0x340(r1)
    psq_l f26, 0x338(r1), 0, 0
    lfd f26, 0x330(r1)
    psq_l f25, 0x328(r1), 0, 0
    lfd f25, 0x320(r1)
    psq_l f24, 0x318(r1), 0, 0
    lfd f24, 0x310(r1)
    psq_l f23, 0x308(r1), 0, 0
    lfd f23, 0x300(r1)
    psq_l f22, 0x2f8(r1), 0, 0
    lfd f22, 0x2f0(r1)
    bl _restgpr_19
    lwz r0, 0x394(r1)
    mtlr r0
    addi r1, r1, 0x390
    blr
}
