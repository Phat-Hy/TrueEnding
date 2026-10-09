#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_24(void);
extern void _savegpr_24(void);
extern void fn_80092814(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800D246C(void);
extern void fn_800EE360(void);
extern void fn_800F8548(void);
extern void fn_800F8574(void);
extern void fn_800F8C6C(void);
extern void fn_800FAB80(void);
extern void fn_80134674(void);
extern void fn_80139560(void);
extern void fn_80144710(void);
extern void fn_80145334(void);
extern void fn_8014C0B4(void);
extern void fn_8014C540(void);
extern void fn_80151448(void);
extern void fn_801561E4(void);
extern void fn_80158BB4(void);
extern void fn_80158CA4(void);
extern void fn_8015E4B0(void);
extern void fn_8016D74C(void);
extern void fn_8016E970(void);
extern void fn_80219E6C(void);
extern void fn_80232B7C(void);
extern void fn_80239DAC(void);
extern void fn_8023A8B4(void);
extern void fn_802620A8(void);
extern void fn_802621D4(void);
extern void fn_80370A78(void);
extern void fn_80370AE4(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9940(void);
extern void fn_80680CF8(void);
extern void fn_8068AEA4(void);
extern void fn_80695AD0(void);

/* External data declarations */
extern u8 jumptable_80784A94[];
extern u8 lbl_80744278[];
extern u8 lbl_80744298[];
extern u8 lbl_80766768[];
extern u8 lbl_80784A88[];

/* Small data declarations */
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F8A0;
extern u32 lbl_80883578;
extern u32 lbl_8088357C;
extern u32 lbl_80883580;
extern u32 lbl_80883584;
extern u32 lbl_80883588;
extern u32 lbl_8088358C;
extern u32 lbl_80883590;
extern u32 lbl_80883594;
extern u32 lbl_80883598;
extern u32 lbl_8088359C;
extern u32 lbl_808835A0;
extern u32 lbl_808835A4;
extern u32 lbl_808835A8;
extern u32 lbl_808835AC;
extern u32 lbl_808835B0;
extern u32 lbl_808835B4;
extern u32 lbl_808835B8;
extern u32 lbl_808835BC;
extern u32 lbl_808835C0;
extern u32 lbl_808835C4;
extern u32 lbl_808835C8;
extern u32 lbl_808835CC;
extern u32 lbl_808835D0;
extern u32 lbl_808835D4;
extern u32 lbl_808835D8;
extern u32 lbl_808835DC;
extern u32 lbl_808835E0;
extern u32 lbl_808835E4;
extern u32 lbl_808835E8;

/* Function declarations */
void fn_802604E0(void);
void fn_80260EBC(void);
void fn_80260F88(void);
void fn_80261078(void);
void fn_80261948(void);
void fn_80261A50(void);
void fn_80261DC0(void);

asm void fn_802604E0(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    li r4, 0xfa
    stw r0, 0xc4(r1)
    stfd f31, 0xb0(r1)
    psq_st f31, 0xb8(r1), 0, 0
    stw r31, 0xac(r1)
    mr r31, r3
    stw r30, 0xa8(r1)
    stw r29, 0xa4(r1)
    lwz r5, 0x14bc(r3)
    lwz r6, 0xd1c(r3)
    addi r0, r5, 0x1
    stw r6, 0x14b8(r3)
    stw r0, 0x14bc(r3)
    lwz r3, lbl_8087F430
    bl fn_80370A78
    cmpwi r3, 0x1
    bne lbl_fn_802604E0_000000C8
    lwz r0, 0x154c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_802604E0_00000070
    lwz r3, lbl_8087F430
    li r0, 0x0
    stw r0, 0x8a0(r3)
    stw r0, 0x4d8(r3)
    stb r0, 0x97c(r3)
    stw r0, 0x154c(r31)
lbl_fn_802604E0_00000070:
    li r29, 0x0
    stw r29, 0x14bc(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r0, 0x12a4(r31)
    mr r4, r31
    stw r3, 0x590(r31)
    li r5, 0x66
    rlwinm r0, r0, 0, 27, 25
    li r6, 0x1
    stw r29, 0x14c4(r31)
    stw r0, 0x12a4(r31)
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    stw r29, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lwz r3, lbl_8087F430
    li r4, 0xfa
    li r5, 0x0
    bl fn_80370AE4
lbl_fn_802604E0_000000C8:
    lwz r0, 0xd18(r31)
    cmpwi r0, 0x0
    beq lbl_fn_802604E0_000000E0
    lwz r0, 0x14b8(r31)
    cmpwi r0, 0x0
    bne lbl_fn_802604E0_00000160
lbl_fn_802604E0_000000E0:
    lwz r0, 0x58c(r31)
    cmpwi r0, 0x2
    bne lbl_fn_802604E0_00000148
    addi r4, r31, 0x1514
    lfs f2, 0x151c(r31)
    psq_l f1, 0x0(r4), 0, 0
    addi r3, r31, 0xb0
    lfs f31, 0x2e4(r31)
    li r4, 0x0
    psq_st f1, 0x528(r31), 0, 0
    stfs f2, 0x530(r31)
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_802604E0_000009A8
    lwz r0, 0x12a4(r31)
    mr r3, r31
    lfs f0, lbl_80883578
    li r4, 0x1
    oris r0, r0, 0x200
    stw r0, 0x12a4(r31)
    stfs f0, 0x2e8(r31)
    bl fn_800D246C
    mr r3, r31
    bl fn_800EE360
    b lbl_fn_802604E0_000009A8
lbl_fn_802604E0_00000148:
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    li r0, 0x0
    stw r0, 0x58c(r31)
    b lbl_fn_802604E0_000009A8
lbl_fn_802604E0_00000160:
    lwz r0, 0x58c(r31)
    cmplwi r0, 0xc
    bgt lbl_fn_802604E0_00000904
    lis r3, jumptable_80784A94@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_80784A94@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    mr r3, r31
    bl fn_80158BB4
    cmpwi r3, 0x0
    beq lbl_fn_802604E0_000001E0
    li r29, 0x0
    stw r29, 0x14bc(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r0, 0x12a4(r31)
    mr r4, r31
    stw r3, 0x590(r31)
    li r5, 0x66
    rlwinm r0, r0, 0, 27, 25
    li r6, 0x1
    stw r29, 0x14c4(r31)
    stw r0, 0x12a4(r31)
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    stw r29, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    b lbl_fn_802604E0_00000920
lbl_fn_802604E0_000001E0:
    mr r3, r31
    bl fn_80139560
    lwz r0, lbl_8087F048
    cmpwi r0, 0x0
    beq lbl_fn_802604E0_00000920
    mr r3, r31
    bl fn_80158CA4
    cmpwi r3, 0x0
    beq lbl_fn_802604E0_00000920
    lwz r0, 0xf80(r31)
    cmpwi r0, 0x0
    bne lbl_fn_802604E0_00000230
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x90(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x94(r1)
    stw r0, 0x98(r1)
    b lbl_fn_802604E0_0000024C
lbl_fn_802604E0_00000230:
    lis r5, lbl_80784A88@ha
    lwzu r4, lbl_80784A88@l(r5)
    stw r4, 0x90(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x94(r1)
    stw r0, 0x98(r1)
lbl_fn_802604E0_0000024C:
    lwz r5, 0x90(r1)
    addi r3, r1, 0x50
    lwz r4, 0x94(r1)
    lwz r0, 0x98(r1)
    stw r5, 0x50(r1)
    stw r4, 0x54(r1)
    stw r0, 0x58(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_802604E0_000002C0
    lwz r3, 0xf80(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x30(r12)
    mtctr r12
    bctrl
    lwz r0, 0x598(r31)
    cmpw r3, r0
    ble lbl_fn_802604E0_000002C0
    lwz r3, 0xf80(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x30(r12)
    mtctr r12
    bctrl
    li r0, 0x1
    stw r3, 0x598(r31)
    stw r0, 0x594(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
lbl_fn_802604E0_000002C0:
    mr r3, r31
    bl fn_80144710
    lwz r3, lbl_8087F048
    mr r6, r31
    lwz r7, 0x638(r31)
    li r4, 0x0
    lwz r8, 0x590(r31)
    li r5, 0x0
    lfs f1, lbl_80883578
    li r9, 0x1e
    li r10, -0x1
    bl fn_800F8C6C
    b lbl_fn_802604E0_00000920
    mr r3, r31
    bl fn_80261A50
    b lbl_fn_802604E0_00000920
    lfs f31, 0x2e4(r31)
    lfs f3, lbl_8088357C
    lfs f0, lbl_80883580
    fsubs f3, f31, f3
    fabs f3, f3
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802604E0_00000364
    li r3, 0x5e9
    bl fn_80219E6C
    li r0, -0x1
    stw r0, 0x8(r1)
    mr r5, r3
    lfs f1, lbl_80883578
    stw r0, 0xc(r1)
    mr r4, r31
    lfs f2, lbl_80883584
    addi r7, r31, 0x528
    lwz r3, lbl_8087F048
    addi r8, r31, 0x534
    lwz r6, 0x590(r31)
    li r9, 0x0
    li r10, 0x1e
    bl fn_800FAB80
    b lbl_fn_802604E0_00000920
lbl_fn_802604E0_00000364:
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_802604E0_00000920
    li r29, 0x0
    stw r29, 0x14bc(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r0, 0x12a4(r31)
    mr r4, r31
    stw r3, 0x590(r31)
    li r5, 0x66
    rlwinm r0, r0, 0, 27, 25
    li r6, 0x1
    stw r29, 0x14c4(r31)
    stw r0, 0x12a4(r31)
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    stw r29, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    b lbl_fn_802604E0_00000920
    mr r3, r31
    bl fn_80261DC0
    b lbl_fn_802604E0_00000920
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_80883588
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_802604E0_00000548
    lfs f0, lbl_8088358C
    fcmpo cr0, f3, f0
    bge lbl_fn_802604E0_00000548
    li r3, 0x5e3
    bl fn_80219E6C
    lfs f5, 0x2e4(r31)
    mr r30, r3
    lfs f4, lbl_80883588
    addi r3, r1, 0x60
    lfs f3, lbl_80883578
    li r4, 0x79
    fsubs f5, f5, f4
    lfs f0, lbl_80883584
    lfs f4, lbl_80883590
    stfs f3, 0x34(r1)
    fmuls f31, f5, f4
    stfs f3, 0x38(r1)
    stfs f0, 0x3c(r1)
    lfs f1, 0x538(r31)
    bl fn_805F8E70
    addi r4, r1, 0x34
    addi r3, r1, 0x60
    mr r5, r4
    bl fn_805F93C0
    lfs f0, 0x3c(r1)
    li r29, -0x1
    lfs f5, lbl_80883594
    mr r4, r31
    lfs f3, 0x38(r1)
    mr r5, r30
    fmuls f9, f0, f5
    lfs f0, 0x34(r1)
    fmuls f8, f3, f5
    lfs f4, 0x530(r31)
    fmuls f5, f0, f5
    lfs f3, 0x52c(r31)
    fmuls f7, f9, f31
    stfs f5, 0x28(r1)
    fmuls f6, f8, f31
    lfs f0, 0x528(r31)
    fmuls f5, f5, f31
    lfs f1, lbl_80883578
    fadds f4, f4, f7
    stfs f8, 0x2c(r1)
    fadds f3, f3, f6
    lfs f2, lbl_80883584
    fadds f0, f0, f5
    stfs f4, 0x18(r1)
    stfs f0, 0x10(r1)
    addi r7, r1, 0x10
    addi r8, r31, 0x534
    li r9, 0x0
    stfs f3, 0x14(r1)
    li r10, 0x1e
    stw r29, 0x8(r1)
    stw r29, 0xc(r1)
    stfs f9, 0x30(r1)
    lwz r3, lbl_8087F048
    stfs f5, 0x1c(r1)
    lwz r6, 0x590(r31)
    stfs f6, 0x20(r1)
    stfs f7, 0x24(r1)
    bl fn_800FAB80
    lwz r0, 0x14c4(r31)
    cmpwi r0, 0x0
    bne lbl_fn_802604E0_00000920
    li r3, 0x0
    li r4, 0x0
    bl fn_80232B7C
    lfs f1, lbl_80883584
    li r30, 0x1
    stfs f1, 0x40(r1)
    addi r4, r31, 0x1538
    addi r7, r1, 0x10
    addi r8, r31, 0x534
    stfs f1, 0x44(r1)
    addi r9, r1, 0x40
    li r5, 0x0
    li r6, 0x0
    stfs f1, 0x48(r1)
    li r10, -0x1
    stfs f1, 0x4c(r1)
    stw r29, 0x8(r1)
    stw r30, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    stw r30, 0x14c4(r31)
    b lbl_fn_802604E0_00000920
lbl_fn_802604E0_00000548:
    lfs f31, 0x2e4(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_802604E0_00000920
    li r30, 0x0
    stw r30, 0x14bc(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r0, 0x12a4(r31)
    mr r4, r31
    stw r3, 0x590(r31)
    li r5, 0x66
    rlwinm r0, r0, 0, 27, 25
    li r6, 0x1
    stw r30, 0x14c4(r31)
    stw r0, 0x12a4(r31)
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    stw r30, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    b lbl_fn_802604E0_00000920
    lwz r0, 0x14bc(r31)
    cmpwi r0, 0xa
    ble lbl_fn_802604E0_00000920
    lwz r0, 0x14e8(r31)
    cmpwi r0, 0x1
    bne lbl_fn_802604E0_00000688
    li r30, 0x0
    stw r30, 0x14bc(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r0, 0x12a4(r31)
    mr r4, r31
    stw r3, 0x590(r31)
    li r5, 0x66
    rlwinm r0, r0, 0, 27, 25
    li r6, 0x1
    stw r30, 0x14c4(r31)
    stw r0, 0x12a4(r31)
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    li r0, 0xa
    stw r0, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lfs f1, lbl_80883584
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f2, lbl_80883598
    li r4, 0x0
    stfs f1, 0x2fc(r31)
    li r5, 0x142
    li r6, 0x0
    li r7, 0x0
    stfs f1, 0x2e8(r31)
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80883578
    mr r3, r31
    stfs f0, 0x2e4(r31)
    addi r4, r31, 0x14ec
    addi r5, r31, 0x14f8
    bl fn_802621D4
    addi r3, r31, 0x14ec
    lfs f3, 0x14f8(r31)
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x14f4(r31)
    lfs f0, lbl_80883578
    psq_st f1, 0x528(r31), 0, 0
    stfs f2, 0x530(r31)
    stfs f3, 0x538(r31)
    stfs f0, 0x1544(r31)
    b lbl_fn_802604E0_00000920
lbl_fn_802604E0_00000688:
    li r30, 0x0
    stw r30, 0x14bc(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r0, 0x12a4(r31)
    mr r4, r31
    stw r3, 0x590(r31)
    li r5, 0x66
    rlwinm r0, r0, 0, 27, 25
    li r6, 0x1
    stw r30, 0x14c4(r31)
    stw r0, 0x12a4(r31)
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    li r0, 0x9
    stw r0, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lfs f0, lbl_80883584
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80883578
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x1c4
    lfs f2, lbl_80883598
    li r6, 0x1
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    mr r3, r31
    addi r4, r31, 0x14ec
    addi r5, r31, 0x14f8
    bl fn_802621D4
    addi r3, r31, 0x14ec
    lfs f0, 0x14f8(r31)
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x14f4(r31)
    psq_st f1, 0x528(r31), 0, 0
    stfs f2, 0x530(r31)
    stfs f0, 0x538(r31)
    b lbl_fn_802604E0_00000920
    lwz r0, 0x14bc(r31)
    cmpwi r0, 0xa
    ble lbl_fn_802604E0_00000920
    li r30, 0x0
    stw r30, 0x14bc(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r0, 0x12a4(r31)
    mr r4, r31
    stw r3, 0x590(r31)
    li r5, 0x66
    rlwinm r0, r0, 0, 27, 25
    li r6, 0x1
    stw r30, 0x14c4(r31)
    stw r0, 0x12a4(r31)
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    stw r30, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lwz r0, 0x14d4(r31)
    li r4, 0xf1
    stw r0, 0x14bc(r31)
    lwz r29, lbl_8087F430
    mr r3, r29
    bl fn_80370A78
    mr r4, r3
    mr r3, r29
    addi r5, r4, 0x1
    li r4, 0xf1
    bl fn_80370AE4
    b lbl_fn_802604E0_00000920
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_80883588
    fcmpo cr0, f0, f3
    bge lbl_fn_802604E0_00000814
    lfs f0, lbl_8088359C
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_802604E0_00000814
    li r3, 0x5e8
    bl fn_80219E6C
    mr r7, r3
    lwz r3, lbl_8087F048
    lwz r8, 0x590(r31)
    mr r6, r31
    lfs f1, lbl_80883578
    li r4, 0x0
    li r5, 0x0
    li r9, 0x1e
    li r10, -0x1
    bl fn_800F8C6C
    b lbl_fn_802604E0_0000089C
lbl_fn_802604E0_00000814:
    lfs f31, 0x2e4(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_802604E0_0000089C
    li r30, 0x0
    stw r30, 0x14bc(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r0, 0x12a4(r31)
    mr r4, r31
    stw r3, 0x590(r31)
    li r5, 0x66
    rlwinm r0, r0, 0, 27, 25
    li r6, 0x1
    stw r30, 0x14c4(r31)
    stw r0, 0x12a4(r31)
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    stw r30, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lwz r29, lbl_8087F430
    li r4, 0xf1
    mr r3, r29
    bl fn_80370A78
    mr r4, r3
    mr r3, r29
    addi r5, r4, 0x1
    li r4, 0xf1
    bl fn_80370AE4
lbl_fn_802604E0_0000089C:
    lfs f0, 0x2e4(r31)
    stfs f0, 0x1544(r31)
    b lbl_fn_802604E0_00000920
    addi r4, r31, 0x1514
    lfs f2, 0x151c(r31)
    psq_l f1, 0x0(r4), 0, 0
    addi r3, r31, 0xb0
    lfs f31, 0x2e4(r31)
    li r4, 0x0
    psq_st f1, 0x528(r31), 0, 0
    stfs f2, 0x530(r31)
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_802604E0_00000920
    lwz r0, 0x12a4(r31)
    mr r3, r31
    lfs f0, lbl_80883578
    li r4, 0x1
    oris r0, r0, 0x200
    stw r0, 0x12a4(r31)
    stfs f0, 0x2e8(r31)
    bl fn_800D246C
    mr r3, r31
    bl fn_800EE360
    b lbl_fn_802604E0_00000920
lbl_fn_802604E0_00000904:
    mr r3, r31
    bl fn_80261948
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x6
    beq lbl_fn_802604E0_00000920
    mr r3, r31
    bl fn_80261078
lbl_fn_802604E0_00000920:
    lwz r5, 0x7e0(r31)
    li r4, 0x1
    rlwinm r3, r5, 0, 12, 12
    subis r0, r3, 0x8
    cmplwi r0, 0x0
    beq lbl_fn_802604E0_0000094C
    rlwinm r3, r5, 0, 7, 7
    subis r0, r3, 0x100
    cmplwi r0, 0x0
    beq lbl_fn_802604E0_0000094C
    li r4, 0x0
lbl_fn_802604E0_0000094C:
    cmpwi r4, 0x0
    beq lbl_fn_802604E0_00000968
    lwz r5, 0x484(r31)
    mr r3, r31
    li r4, 0x19
    bl fn_8014C0B4
    b lbl_fn_802604E0_00000978
lbl_fn_802604E0_00000968:
    mr r3, r31
    li r4, 0x19
    li r5, 0x1c4
    bl fn_8014C0B4
lbl_fn_802604E0_00000978:
    lwz r0, 0x58c(r31)
    cmpwi r0, 0xb
    beq lbl_fn_802604E0_000009A8
    lwz r0, 0x154c(r31)
    lwz r3, lbl_8087F430
    cmpwi r0, 0x0
    beq lbl_fn_802604E0_000009A8
    li r0, 0x0
    stw r0, 0x8a0(r3)
    stw r0, 0x4d8(r3)
    stb r0, 0x97c(r3)
    stw r0, 0x154c(r31)
lbl_fn_802604E0_000009A8:
    mr r3, r31
    bl fn_8014C540
    mr r3, r31
    bl fn_80145334
    lwz r0, 0xc4(r1)
    psq_l f31, 0xb8(r1), 0, 0
    lfd f31, 0xb0(r1)
    lwz r31, 0xac(r1)
    lwz r30, 0xa8(r1)
    lwz r29, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

asm void fn_80260EBC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r5, 0x58c(r3)
    subi r0, r5, 0x6
    cmplwi r0, 0x1
    ble lbl_fn_80260EBC_00000A24
    cmpwi r5, 0x1
    beq lbl_fn_80260EBC_00000A24
    cmpwi r5, 0xb
    beq lbl_fn_80260EBC_00000A24
    cmpwi r5, 0x8
    beq lbl_fn_80260EBC_00000A90
    b lbl_fn_80260EBC_00000A54
lbl_fn_80260EBC_00000A24:
    lfs f2, 0x10(r4)
    lfs f3, lbl_80883578
    lfs f1, 0x14(r4)
    lfs f0, 0x18(r4)
    fmuls f2, f2, f3
    fmuls f1, f1, f3
    fmuls f0, f0, f3
    stfs f2, 0x10(r4)
    stfs f1, 0x14(r4)
    stfs f0, 0x18(r4)
    b lbl_fn_80260EBC_00000A54
    b lbl_fn_80260EBC_00000A90
lbl_fn_80260EBC_00000A54:
    li r4, 0x2
    addi r3, r3, 0x7d4
    bl fn_80134674
    addi r3, r30, 0x7d4
    li r4, 0x3
    bl fn_80134674
    mr r3, r30
    mr r4, r31
    bl fn_80151448
    lwz r12, 0x0(r30)
    mr r3, r30
    mr r4, r31
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
lbl_fn_80260EBC_00000A90:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80260F88(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_80260F88_00000B5C
    lwz r0, 0x560(r3)
    cmpwi r0, 0x16
    beq lbl_fn_80260F88_00000B20
    cmpwi r0, 0x17
    beq lbl_fn_80260F88_00000AEC
    cmpwi r0, 0x14
    beq lbl_fn_80260F88_00000B20
    b lbl_fn_80260F88_00000B5C
lbl_fn_80260F88_00000AEC:
    lfs f3, 0x6c0(r3)
    addi r4, r1, 0x8
    lfs f2, lbl_808835A0
    li r5, -0x1
    lfs f1, 0x6bc(r3)
    lfs f0, 0x6b8(r3)
    fmuls f3, f3, f2
    fmuls f1, f1, f2
    fmuls f0, f0, f2
    stfs f3, 0x10(r1)
    stfs f0, 0x8(r1)
    stfs f1, 0xc(r1)
    bl fn_8015E4B0
lbl_fn_80260F88_00000B20:
    li r31, 0x0
    stw r31, 0x58c(r30)
    stw r31, 0x14bc(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r0, 0x12a4(r30)
    mr r4, r30
    stw r3, 0x590(r30)
    li r5, 0x66
    rlwinm r0, r0, 0, 27, 25
    li r6, 0x1
    stw r31, 0x14c4(r30)
    stw r0, 0x12a4(r30)
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
lbl_fn_80260F88_00000B5C:
    lwz r0, 0x7e0(r30)
    lwz r3, 0x1548(r30)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    addi r0, r3, 0x1
    stw r0, 0x1548(r30)
    bne lbl_fn_80260F88_00000B80
    mr r3, r30
    bl fn_802620A8
lbl_fn_80260F88_00000B80:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80261078(void)
{
    nofralloc
    stwu r1, -0x1b0(r1)
    mflr r0
    stw r0, 0x1b4(r1)
    addi r4, r1, 0xf4
    stfd f31, 0x1a0(r1)
    psq_st f31, 0x1a8(r1), 0, 0
    stfd f30, 0x190(r1)
    psq_st f30, 0x198(r1), 0, 0
    stw r31, 0x18c(r1)
    mr r31, r3
    stw r30, 0x188(r1)
    stw r29, 0x184(r1)
    lwz r5, 0x14b8(r3)
    lfs f0, 0x530(r3)
    lfs f2, 0x530(r5)
    psq_l f1, 0x528(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    fsubs f6, f2, f0
    lfs f4, 0x52c(r3)
    lfs f0, 0x528(r3)
    addi r3, r1, 0xe8
    lfs f5, 0xf8(r1)
    lfs f3, 0xf4(r1)
    fsubs f4, f5, f4
    stfs f2, 0xfc(r1)
    fsubs f0, f3, f0
    stfs f4, 0xec(r1)
    stfs f0, 0xe8(r1)
    stfs f6, 0xf0(r1)
    bl fn_805F9940
    lwz r3, 0x14c8(r31)
    fmr f31, f1
    lwz r5, 0x7e0(r31)
    li r4, 0x1
    lfs f4, 0x40(r3)
    lfs f3, 0x8e4(r31)
    rlwinm r0, r5, 0, 28, 28
    lfs f0, lbl_808835A4
    cmplwi r0, 0x8
    fadds f3, f4, f3
    fsubs f5, f3, f0
    beq lbl_fn_80261078_00000C50
    rlwinm r0, r5, 0, 22, 22
    cmplwi r0, 0x200
    beq lbl_fn_80261078_00000C50
    li r4, 0x0
lbl_fn_80261078_00000C50:
    cmpwi r4, 0x0
    li r3, 0x14
    beq lbl_fn_80261078_00000C60
    li r3, 0x28
lbl_fn_80261078_00000C60:
    lwz r4, 0x940(r31)
    li r0, 0x5a
    stw r3, 0x14d4(r31)
    cmpwi r4, 0x0
    stw r0, 0x14d8(r31)
    ble lbl_fn_80261078_00000CA4
    xoris r3, r4, 0x8000
    lis r0, 0x4330
    lis r4, lbl_80744278@ha
    stw r3, 0x174(r1)
    lfd f4, lbl_80744278@l(r4)
    stw r0, 0x170(r1)
    lfs f0, 0x7d8(r31)
    lfd f3, 0x170(r1)
    fsubs f3, f3, f4
    fdivs f3, f0, f3
    b lbl_fn_80261078_00000CA8
lbl_fn_80261078_00000CA4:
    lfs f3, lbl_80883578
lbl_fn_80261078_00000CA8:
    lfs f0, lbl_808835A0
    fcmpo cr0, f3, f0
    bge lbl_fn_80261078_00000CD8
    lwz r4, 0x14d4(r31)
    lwz r0, 0x14d8(r31)
    srwi r3, r4, 31
    add r3, r3, r4
    srawi r3, r3, 1
    stw r3, 0x14d4(r31)
    srawi r0, r0, 2
    addze r0, r0
    stw r0, 0x14d8(r31)
lbl_fn_80261078_00000CD8:
    lwz r0, 0x1548(r31)
    cmpwi r0, 0x5
    ble lbl_fn_80261078_00000DEC
    li r29, 0x0
    stw r29, 0x14bc(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r0, 0x12a4(r31)
    mr r4, r31
    stw r3, 0x590(r31)
    li r5, 0x66
    rlwinm r0, r0, 0, 27, 25
    li r6, 0x1
    stw r29, 0x14c4(r31)
    stw r0, 0x12a4(r31)
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    li r0, 0x8
    stw r0, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lfs f0, lbl_80883584
    li r30, 0x1
    stw r30, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80883578
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x1c4
    lfs f2, lbl_80883598
    li r6, 0x1
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    mr r3, r31
    li r4, 0x65
    bl fn_80232B7C
    lfs f0, lbl_80883578
    li r0, -0x1
    lfs f1, lbl_80883584
    addi r4, r31, 0x1520
    stfs f0, 0xd0(r1)
    addi r5, r31, 0xb0
    addi r7, r1, 0xdc
    addi r8, r1, 0xd0
    stfs f0, 0xd4(r1)
    addi r9, r1, 0xc0
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0xd8(r1)
    stfs f0, 0xdc(r1)
    stfs f0, 0xe0(r1)
    stfs f0, 0xe4(r1)
    stfs f1, 0xc0(r1)
    stfs f1, 0xc4(r1)
    stfs f1, 0xc8(r1)
    stfs f1, 0xcc(r1)
    stw r0, 0x8(r1)
    stw r30, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r3, 0x14d0(r31)
    stw r29, 0x14e8(r31)
    addi r0, r3, 0x1
    stw r0, 0x14cc(r31)
    stw r29, 0x1548(r31)
    b lbl_fn_80261078_0000143C
lbl_fn_80261078_00000DEC:
    lwz r4, 0x14cc(r31)
    lwz r0, 0x14d0(r31)
    cmpw r4, r0
    ble lbl_fn_80261078_00000FCC
    lwz r3, 0x14bc(r31)
    lwz r0, 0x14d4(r31)
    cmpw r3, r0
    ble lbl_fn_80261078_0000143C
    bl fn_80680CF8
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    subf r0, r4, r0
    cmpwi r0, 0x1
    bne lbl_fn_80261078_00000ECC
    li r30, 0x0
    stw r30, 0x14bc(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r0, 0x12a4(r31)
    mr r4, r31
    stw r3, 0x590(r31)
    li r5, 0x66
    rlwinm r0, r0, 0, 27, 25
    li r6, 0x1
    stw r30, 0x14c4(r31)
    stw r0, 0x12a4(r31)
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    li r0, 0xb
    stw r0, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r0, 0x12a4(r31)
    li r4, 0x1
    lfs f2, 0x530(r31)
    addi r5, r31, 0x1508
    psq_l f1, 0x528(r31), 0, 0
    rlwinm r0, r0, 0, 27, 25
    stw r3, 0x590(r31)
    li r3, 0x5e2
    stw r4, 0x594(r31)
    stw r30, 0x598(r31)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x1510(r31)
    stw r0, 0x12a4(r31)
    bl fn_80219E6C
    mr r4, r3
    mr r3, r31
    li r5, 0x0
    li r6, 0x0
    bl fn_8016D74C
    b lbl_fn_80261078_00000FC0
lbl_fn_80261078_00000ECC:
    li r30, 0x0
    stw r30, 0x14bc(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r0, 0x12a4(r31)
    mr r4, r31
    stw r3, 0x590(r31)
    li r5, 0x66
    rlwinm r0, r0, 0, 27, 25
    li r6, 0x1
    stw r30, 0x14c4(r31)
    stw r0, 0x12a4(r31)
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    li r0, 0x6
    stw r0, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lfs f0, lbl_80883584
    li r30, 0x1
    stw r30, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80883578
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x13f
    lfs f2, lbl_80883598
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_808835A8
    mr r3, r31
    stfs f0, 0x2e8(r31)
    li r4, 0x66
    bl fn_80232B7C
    lfs f0, lbl_80883578
    li r0, -0x1
    lfs f1, lbl_80883584
    addi r4, r31, 0x152c
    stfs f0, 0xa8(r1)
    addi r5, r31, 0xb0
    addi r7, r1, 0xb4
    addi r8, r1, 0xa8
    stfs f0, 0xac(r1)
    addi r9, r1, 0x98
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0xb0(r1)
    stfs f0, 0xb4(r1)
    stfs f0, 0xb8(r1)
    stfs f0, 0xbc(r1)
    stfs f1, 0x98(r1)
    stfs f1, 0x9c(r1)
    stfs f1, 0xa0(r1)
    stfs f1, 0xa4(r1)
    stw r0, 0x8(r1)
    stw r30, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
lbl_fn_80261078_00000FC0:
    li r0, 0x0
    stw r0, 0x14cc(r31)
    b lbl_fn_80261078_0000143C
lbl_fn_80261078_00000FCC:
    fcmpo cr0, f1, f5
    cror eq, lt, eq
    bne lbl_fn_80261078_00001284
    lwz r3, 0x14bc(r31)
    lwz r0, 0x14d4(r31)
    cmpw r3, r0
    ble lbl_fn_80261078_0000143C
    addi r0, r4, 0x1
    li r30, 0x0
    stw r0, 0x14cc(r31)
    stw r30, 0x14bc(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r0, 0x12a4(r31)
    mr r4, r31
    stw r3, 0x590(r31)
    li r5, 0x66
    rlwinm r0, r0, 0, 27, 25
    li r6, 0x1
    stw r30, 0x14c4(r31)
    stw r0, 0x12a4(r31)
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    li r0, 0x1
    stw r0, 0x58c(r31)
    li r3, 0xc8
    bl fn_80219E6C
    mr r4, r3
    mr r3, r31
    bl fn_801561E4
    lwz r4, 0x7e0(r31)
    li r3, 0x1
    rlwinm r0, r4, 0, 28, 28
    cmplwi r0, 0x8
    beq lbl_fn_80261078_00001068
    rlwinm r0, r4, 0, 22, 22
    cmplwi r0, 0x200
    beq lbl_fn_80261078_00001068
    li r3, 0x0
lbl_fn_80261078_00001068:
    cmpwi r3, 0x0
    bne lbl_fn_80261078_0000107C
    lfs f0, lbl_808835AC
    stfs f0, 0x2e8(r31)
    b lbl_fn_80261078_00001084
lbl_fn_80261078_0000107C:
    lfs f0, lbl_808835B0
    stfs f0, 0x2e8(r31)
lbl_fn_80261078_00001084:
    li r0, 0x0
    stw r0, 0x598(r31)
    lwz r5, 0x14b8(r31)
    addi r3, r1, 0x38
    lfs f0, 0x530(r31)
    mr r4, r3
    lfs f3, 0x530(r5)
    lfs f5, 0x52c(r5)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r31)
    lfs f3, 0x528(r5)
    lfs f0, 0x528(r31)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x3c(r1)
    stfs f0, 0x38(r1)
    stfs f6, 0x40(r1)
    bl fn_805F98D0
    lfs f2, 0x40(r1)
    addi r3, r1, 0x38
    lfs f0, lbl_80883580
    addi r29, r1, 0x44
    fabs f3, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    frsp f3, f3
    stfs f2, 0x4c(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_80261078_0000111C
    lfs f3, 0x44(r1)
    lfs f0, lbl_80883578
    fcmpo cr0, f3, f0
    ble lbl_fn_80261078_00001110
    lfs f0, lbl_808835B4
    b lbl_fn_80261078_00001114
lbl_fn_80261078_00001110:
    lfs f0, lbl_808835B8
lbl_fn_80261078_00001114:
    stfs f0, 0x54(r1)
    b lbl_fn_80261078_00001130
lbl_fn_80261078_0000111C:
    frsp f2, f2
    lfs f1, 0x44(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x54(r1)
lbl_fn_80261078_00001130:
    lfs f0, 0x54(r1)
    addi r3, r1, 0x140
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883578
    addi r4, r1, 0x5c
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
    lfs f31, 0x15c(r1)
    lfs f30, 0x14c(r1)
    lfs f0, lbl_80883584
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x4c(r1)
    stfs f3, 0x130(r1)
    stfs f3, 0x134(r1)
    stfs f3, 0x138(r1)
    stfs f0, 0x13c(r1)
    stfs f6, 0x8c(r1)
    stfs f5, 0x90(r1)
    stfs f4, 0x94(r1)
    stfs f6, 0x100(r1)
    stfs f5, 0x104(r1)
    stfs f4, 0x108(r1)
    stfs f9, 0x80(r1)
    stfs f8, 0x84(r1)
    stfs f7, 0x88(r1)
    stfs f9, 0x110(r1)
    stfs f8, 0x114(r1)
    stfs f7, 0x118(r1)
    stfs f12, 0x74(r1)
    stfs f11, 0x78(r1)
    stfs f10, 0x7c(r1)
    stfs f12, 0x120(r1)
    stfs f11, 0x124(r1)
    stfs f10, 0x128(r1)
    stfs f30, 0x68(r1)
    stfs f31, 0x6c(r1)
    stfs f13, 0x70(r1)
    stfs f30, 0x10c(r1)
    stfs f31, 0x11c(r1)
    stfs f13, 0x12c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x64(r1)
    bl fn_805F9750
    lfs f2, 0x64(r1)
    lfs f0, lbl_80883580
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80261078_0000124C
    lfs f3, 0x60(r1)
    lfs f0, lbl_80883578
    fcmpo cr0, f3, f0
    ble lbl_fn_80261078_0000123C
    lfs f0, lbl_808835B4
    b lbl_fn_80261078_00001240
lbl_fn_80261078_0000123C:
    lfs f0, lbl_808835B8
lbl_fn_80261078_00001240:
    fneg f0, f0
    stfs f0, 0x50(r1)
    b lbl_fn_80261078_00001260
lbl_fn_80261078_0000124C:
    lfs f1, 0x60(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x50(r1)
lbl_fn_80261078_00001260:
    addi r3, r1, 0x50
    lfs f2, lbl_80883578
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    lfs f0, 0x48(r1)
    stfs f2, 0x58(r1)
    stfs f2, 0x4c(r1)
    stfs f0, 0x538(r31)
    b lbl_fn_80261078_0000143C
lbl_fn_80261078_00001284:
    lwz r3, 0x14bc(r31)
    lwz r0, 0x14d8(r31)
    cmpw r3, r0
    ble lbl_fn_80261078_0000143C
    bl fn_80680CF8
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    subf r0, r4, r0
    cmpwi r0, 0x1
    bne lbl_fn_80261078_00001348
    lfs f0, lbl_80883594
    fcmpo cr0, f31, f0
    bge lbl_fn_80261078_00001348
    li r30, 0x0
    stw r30, 0x14bc(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r0, 0x12a4(r31)
    mr r4, r31
    stw r3, 0x590(r31)
    li r5, 0x66
    rlwinm r0, r0, 0, 27, 25
    li r6, 0x1
    stw r30, 0x14c4(r31)
    stw r0, 0x12a4(r31)
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    li r0, 0xc
    stw r0, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lfs f3, lbl_80883584
    li r0, 0x1
    lfs f0, lbl_808835BC
    addi r3, r31, 0xb0
    stw r0, 0x3fc(r31)
    li r4, 0x0
    lfs f1, lbl_80883578
    li r5, 0x145
    stfs f3, 0x2fc(r31)
    li r6, 0x0
    lfs f2, lbl_80883598
    li r7, 0x0
    stfs f0, 0x2e8(r31)
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_80261078_0000143C
lbl_fn_80261078_00001348:
    li r30, 0x0
    stw r30, 0x14bc(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r0, 0x12a4(r31)
    mr r4, r31
    stw r3, 0x590(r31)
    li r5, 0x66
    rlwinm r0, r0, 0, 27, 25
    li r6, 0x1
    stw r30, 0x14c4(r31)
    stw r0, 0x12a4(r31)
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    li r0, 0x8
    stw r0, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lfs f0, lbl_80883584
    li r30, 0x1
    stw r30, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80883578
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x1c4
    lfs f2, lbl_80883598
    li r6, 0x1
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    mr r3, r31
    li r4, 0x65
    bl fn_80232B7C
    lfs f0, lbl_80883578
    li r0, -0x1
    lfs f1, lbl_80883584
    addi r4, r31, 0x1520
    stfs f0, 0x20(r1)
    addi r5, r31, 0xb0
    addi r7, r1, 0x2c
    addi r8, r1, 0x20
    stfs f0, 0x24(r1)
    addi r9, r1, 0x10
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x28(r1)
    stfs f0, 0x2c(r1)
    stfs f0, 0x30(r1)
    stfs f0, 0x34(r1)
    stfs f1, 0x10(r1)
    stfs f1, 0x14(r1)
    stfs f1, 0x18(r1)
    stfs f1, 0x1c(r1)
    stw r0, 0x8(r1)
    stw r30, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    stw r30, 0x14e8(r31)
lbl_fn_80261078_0000143C:
    lwz r0, 0x1b4(r1)
    psq_l f31, 0x1a8(r1), 0, 0
    lfd f31, 0x1a0(r1)
    psq_l f30, 0x198(r1), 0, 0
    lfd f30, 0x190(r1)
    lwz r31, 0x18c(r1)
    lwz r30, 0x188(r1)
    lwz r29, 0x184(r1)
    mtlr r0
    addi r1, r1, 0x1b0
    blr
}

asm void fn_80261948(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    beq lbl_fn_80261948_00001498
    cmpwi r0, 0x7
    beq lbl_fn_80261948_00001510
    b lbl_fn_80261948_00001528
lbl_fn_80261948_00001498:
    lwz r0, 0x560(r3)
    cmpwi r0, 0xa
    bne lbl_fn_80261948_00001550
    li r0, 0x0
    li r31, 0x1
    stw r0, 0x598(r3)
    stb r0, 0x59d(r3)
    stb r0, 0x59c(r3)
    stb r31, 0x59f(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    li r3, 0xe5
    bl fn_80219E6C
    lwz r0, 0x638(r30)
    li r4, 0xf0
    stw r0, 0x63c(r30)
    lwz r5, 0xf80(r30)
    stw r3, 0x638(r30)
    stw r31, 0x1c(r5)
    stw r31, 0x58c(r30)
    lwz r31, lbl_8087F430
    mr r3, r31
    bl fn_80370A78
    mr r4, r3
    mr r3, r31
    addi r5, r4, 0x1
    li r4, 0xf1
    bl fn_80370AE4
    b lbl_fn_80261948_00001550
lbl_fn_80261948_00001510:
    lwz r0, 0x12a4(r3)
    li r4, 0x0
    stw r4, 0xfc0(r3)
    rlwinm r0, r0, 0, 27, 25
    stw r0, 0x12a4(r3)
    b lbl_fn_80261948_00001550
lbl_fn_80261948_00001528:
    li r4, 0x3
    bl fn_8016E970
    lwz r0, 0x58c(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80261948_00001548
    lwz r0, 0x12a4(r30)
    ori r0, r0, 0x20
    stw r0, 0x12a4(r30)
lbl_fn_80261948_00001548:
    lwz r0, 0x14b8(r30)
    stw r0, 0xfc0(r30)
lbl_fn_80261948_00001550:
    mr r3, r30
    bl fn_80139560
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80261A50(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    addi r11, r1, 0xa0
    stfd f31, 0x100(r1)
    psq_st f31, 0x108(r1), 0, 0
    stfd f30, 0xf0(r1)
    psq_st f30, 0xf8(r1), 0, 0
    stfd f29, 0xe0(r1)
    psq_st f29, 0xe8(r1), 0, 0
    stfd f28, 0xd0(r1)
    psq_st f28, 0xd8(r1), 0, 0
    stfd f27, 0xc0(r1)
    psq_st f27, 0xc8(r1), 0, 0
    stfd f26, 0xb0(r1)
    psq_st f26, 0xb8(r1), 0, 0
    stfd f25, 0xa0(r1)
    psq_st f25, 0xa8(r1), 0, 0
    bl _savegpr_24
    lwz r0, 0x14c4(r3)
    mr r30, r3
    cmpwi r0, 0x0
    bne lbl_fn_80261A50_00001834
    lfs f3, 0x2e4(r3)
    lfs f0, lbl_808835C0
    fcmpo cr0, f3, f0
    ble lbl_fn_80261A50_00001890
    lfs f0, lbl_80883584
    lis r4, lbl_80744298@ha
    stfs f0, 0x12cc(r3)
    addi r4, r4, lbl_80744298@l
    addi r4, r4, 0x9b
    li r5, 0x0
    addi r3, r3, 0xb0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80261A50_0000160C
    li r3, 0x0
    b lbl_fn_80261A50_00001618
lbl_fn_80261A50_0000160C:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r3, r3, r0
lbl_fn_80261A50_00001618:
    lwz r4, lbl_8087F8A0
    lis r27, lbl_80744298@ha
    lfs f0, 0x2c(r3)
    addi r27, r27, lbl_80744298@l
    lfs f3, 0x1c(r3)
    addi r26, r1, 0x2c
    lfs f4, 0xc(r3)
    addi r25, r1, 0x14
    stfs f4, 0x44(r1)
    li r28, 0x0
    lwz r31, 0x48(r4)
    li r29, -0x1
    stfs f3, 0x48(r1)
    lfs f25, lbl_808835C4
    stfs f0, 0x4c(r1)
    lfs f26, lbl_80883578
    lfs f27, lbl_808835C8
    lfs f28, lbl_808835CC
    lfs f29, lbl_808835D0
    lfs f30, lbl_808835D4
    lfs f31, lbl_808835D8
    b lbl_fn_80261A50_00001820
lbl_fn_80261A50_00001670:
    lwz r6, 0x38(r31)
    li r4, 0x0
    li r3, 0x0
    li r5, 0x0
    rlwinm r0, r6, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80261A50_0000169C
    clrlwi r0, r6, 31
    cmplwi r0, 0x1
    beq lbl_fn_80261A50_0000169C
    li r5, 0x1
lbl_fn_80261A50_0000169C:
    cmpwi r5, 0x0
    beq lbl_fn_80261A50_000016B8
    lwz r0, 0x7e0(r31)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_80261A50_000016B8
    li r3, 0x1
lbl_fn_80261A50_000016B8:
    cmpwi r3, 0x0
    beq lbl_fn_80261A50_000016EC
    lwz r0, 0x55c(r31)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_80261A50_000016E0
    lwz r0, 0x560(r31)
    cmpwi r0, 0x1c
    bne lbl_fn_80261A50_000016E0
    li r3, 0x1
lbl_fn_80261A50_000016E0:
    cmpwi r3, 0x0
    bne lbl_fn_80261A50_000016EC
    li r4, 0x1
lbl_fn_80261A50_000016EC:
    cmpwi r4, 0x0
    beq lbl_fn_80261A50_0000181C
    addi r24, r31, 0xb0
    addi r4, r27, 0x9b
    mr r3, r24
    li r5, 0x0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80261A50_00001718
    li r5, 0x0
    b lbl_fn_80261A50_00001724
lbl_fn_80261A50_00001718:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r24)
    add r5, r3, r0
lbl_fn_80261A50_00001724:
    lfs f4, 0x2c(r5)
    mr r3, r26
    lfs f0, 0x4c(r1)
    mr r4, r26
    lfs f5, 0x1c(r5)
    fsubs f2, f4, f0
    lfs f6, 0xc(r5)
    lfs f3, 0x48(r1)
    lfs f0, 0x44(r1)
    fsubs f3, f5, f3
    stfs f6, 0x38(r1)
    fsubs f0, f6, f0
    stfs f3, 0x18(r1)
    stfs f0, 0x14(r1)
    psq_l f1, 0x0(r25), 0, 0
    stfs f5, 0x3c(r1)
    stfs f4, 0x40(r1)
    stfs f2, 0x1c(r1)
    psq_st f1, 0x0(r26), 0, 0
    stfs f2, 0x34(r1)
    bl fn_805F98D0
    lfs f4, 0x34(r1)
    li r3, 0x5e7
    lfs f3, 0x30(r1)
    fmuls f5, f4, f25
    lfs f0, 0x2c(r1)
    fmuls f6, f3, f25
    lfs f4, 0x4c(r1)
    fmuls f7, f0, f25
    lfs f3, 0x48(r1)
    lfs f0, 0x44(r1)
    fadds f4, f4, f5
    fadds f3, f3, f6
    stfs f7, 0x8(r1)
    fadds f0, f0, f7
    lwz r24, lbl_8087F048
    stfs f6, 0xc(r1)
    stfs f5, 0x10(r1)
    stfs f0, 0x20(r1)
    stfs f3, 0x24(r1)
    stfs f4, 0x28(r1)
    stfs f26, 0x54(r1)
    stfs f27, 0x58(r1)
    stfs f28, 0x5c(r1)
    stfs f29, 0x64(r1)
    stw r28, 0x6c(r1)
    stw r29, 0x70(r1)
    stfs f30, 0x68(r1)
    stw r31, 0x50(r1)
    stfs f31, 0x60(r1)
    bl fn_80219E6C
    lfs f1, lbl_80883578
    mr r5, r3
    lfs f2, lbl_80883584
    mr r3, r24
    mr r4, r30
    mr r7, r26
    addi r6, r1, 0x20
    addi r8, r1, 0x50
    li r9, 0x24
    li r10, 0x0
    bl fn_800F8574
lbl_fn_80261A50_0000181C:
    lwz r31, 0x14ac(r31)
lbl_fn_80261A50_00001820:
    cmpwi r31, 0x0
    bne lbl_fn_80261A50_00001670
    li r0, 0x1
    stw r0, 0x14c4(r30)
    b lbl_fn_80261A50_00001890
lbl_fn_80261A50_00001834:
    lfs f3, 0x2e4(r3)
    lfs f0, lbl_808835DC
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_80261A50_00001890
    li r31, 0x0
    stw r31, 0x14bc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r0, 0x12a4(r30)
    mr r4, r30
    stw r3, 0x590(r30)
    li r5, 0x66
    rlwinm r0, r0, 0, 27, 25
    li r6, 0x1
    stw r31, 0x14c4(r30)
    stw r0, 0x12a4(r30)
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    stw r31, 0x58c(r30)
    mr r3, r30
    li r4, 0x3
    bl fn_8016E970
lbl_fn_80261A50_00001890:
    addi r11, r1, 0xa0
    psq_l f31, 0x108(r1), 0, 0
    lfd f31, 0x100(r1)
    psq_l f30, 0xf8(r1), 0, 0
    lfd f30, 0xf0(r1)
    psq_l f29, 0xe8(r1), 0, 0
    lfd f29, 0xe0(r1)
    psq_l f28, 0xd8(r1), 0, 0
    lfd f28, 0xd0(r1)
    psq_l f27, 0xc8(r1), 0, 0
    lfd f27, 0xc0(r1)
    psq_l f26, 0xb8(r1), 0, 0
    lfd f26, 0xb0(r1)
    psq_l f25, 0xa8(r1), 0, 0
    lfd f25, 0xa0(r1)
    bl _restgpr_24
    lwz r0, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_80261DC0(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    stfd f31, 0xa0(r1)
    psq_st f31, 0xa8(r1), 0, 0
    stfd f30, 0x90(r1)
    psq_st f30, 0x98(r1), 0, 0
    stfd f29, 0x80(r1)
    psq_st f29, 0x88(r1), 0, 0
    stfd f28, 0x70(r1)
    psq_st f28, 0x78(r1), 0, 0
    stw r31, 0x6c(r1)
    mr r31, r3
    stw r30, 0x68(r1)
    lwz r0, 0x55c(r3)
    lwz r30, lbl_8087F430
    cmpwi r0, 0x6
    bne lbl_fn_80261DC0_00001B48
    lwz r0, 0x560(r3)
    cmpwi r0, 0xd
    beq lbl_fn_80261DC0_00001940
    cmpwi r0, 0xe
    beq lbl_fn_80261DC0_00001948
    b lbl_fn_80261DC0_00001ADC
lbl_fn_80261DC0_00001940:
    bl fn_80139560
    b lbl_fn_80261DC0_00001B90
lbl_fn_80261DC0_00001948:
    bl fn_80139560
    addi r3, r1, 0x14
    psq_l f1, 0x528(r31), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lwz r0, 0x154c(r31)
    lfs f0, 0x18(r1)
    lfs f28, lbl_808835C4
    cmpwi r0, 0x0
    lfs f2, 0x530(r31)
    fadds f0, f0, f28
    stfs f2, 0x1c(r1)
    stfs f0, 0x18(r1)
    bne lbl_fn_80261DC0_00001AC0
    lfs f29, 0x594(r30)
    addi r4, r30, 0x4d8
    lfs f30, 0x59c(r30)
    lfs f31, 0x5a0(r30)
    lfs f13, 0x5a4(r30)
    lfs f12, 0x5a8(r30)
    lfs f11, 0x5ac(r30)
    lfs f10, 0x5b0(r30)
    lfs f9, 0x5b4(r30)
    lfs f8, 0x5b8(r30)
    lfs f7, 0x5bc(r30)
    lwz r3, 0x5c0(r30)
    lfs f6, lbl_808835E0
    stw r31, 0x8a0(r30)
    lfs f5, lbl_808835E4
    lwz r0, 0x4d8(r30)
    lfs f4, lbl_808835A4
    cmpwi r0, 0x4
    stfs f29, 0x2c(r1)
    stfs f30, 0x34(r1)
    stfs f31, 0x38(r1)
    stfs f13, 0x3c(r1)
    stfs f12, 0x40(r1)
    stfs f11, 0x44(r1)
    stfs f10, 0x48(r1)
    stfs f9, 0x4c(r1)
    stfs f8, 0x50(r1)
    stfs f7, 0x54(r1)
    stw r3, 0x58(r1)
    stfs f6, 0x28(r1)
    stfs f5, 0x24(r1)
    stfs f28, 0x20(r1)
    stfs f4, 0x30(r1)
    beq lbl_fn_80261DC0_00001A58
    li r0, 0x4
    stw r0, 0x0(r4)
    lfs f3, lbl_808835E8
    stfs f28, 0xc(r4)
    lfs f0, lbl_80883584
    stfs f5, 0x10(r4)
    stfs f6, 0x14(r4)
    stfs f29, 0x18(r4)
    stfs f4, 0x1c(r4)
    stfs f30, 0x20(r4)
    stfs f31, 0x24(r4)
    stfs f13, 0x28(r4)
    stfs f12, 0x2c(r4)
    stfs f11, 0x30(r4)
    stfs f10, 0x34(r4)
    stfs f9, 0x38(r4)
    stfs f8, 0x3c(r4)
    stfs f7, 0x40(r4)
    stw r3, 0x44(r4)
    stfs f3, 0x8(r4)
    stfs f0, 0x4(r4)
lbl_fn_80261DC0_00001A58:
    addi r4, r1, 0x8
    psq_l f1, 0x528(r31), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    li r0, 0x1
    lfs f2, 0x530(r31)
    addi r5, r30, 0x97c
    lfs f3, 0xc(r1)
    lfs f0, lbl_8088358C
    lbz r3, 0x97c(r30)
    fadds f0, f3, f0
    stb r3, 0x97d(r30)
    lfs f3, lbl_80883578
    stfs f0, 0xc(r1)
    stb r0, 0x97c(r30)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0xc(r5), 0, 0
    stfs f2, 0x990(r30)
    stfs f2, 0x10(r1)
    stfs f3, 0x9a0(r30)
    b lbl_fn_80261DC0_00001AAC
    b lbl_fn_80261DC0_00001AB0
lbl_fn_80261DC0_00001AAC:
    li r0, 0x0
lbl_fn_80261DC0_00001AB0:
    stw r0, 0x4(r5)
    li r0, 0x1
    stw r0, 0x154c(r31)
    b lbl_fn_80261DC0_00001B90
lbl_fn_80261DC0_00001AC0:
    stw r31, 0x8a0(r30)
    addi r4, r30, 0x988
    psq_l f1, 0x0(r3), 0, 0
    frsp f2, f2
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x990(r30)
    b lbl_fn_80261DC0_00001B90
lbl_fn_80261DC0_00001ADC:
    lwz r0, 0x154c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80261DC0_00001AFC
    li r0, 0x0
    stw r0, 0x8a0(r30)
    stw r0, 0x4d8(r30)
    stb r0, 0x97c(r30)
    stw r0, 0x154c(r3)
lbl_fn_80261DC0_00001AFC:
    li r30, 0x0
    stw r30, 0x14bc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r0, 0x12a4(r31)
    mr r4, r31
    stw r3, 0x590(r31)
    li r5, 0x66
    rlwinm r0, r0, 0, 27, 25
    li r6, 0x1
    stw r30, 0x14c4(r31)
    stw r0, 0x12a4(r31)
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    stw r30, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    b lbl_fn_80261DC0_00001B90
lbl_fn_80261DC0_00001B48:
    li r30, 0x0
    stw r30, 0x14bc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r0, 0x12a4(r31)
    mr r4, r31
    stw r3, 0x590(r31)
    li r5, 0x66
    rlwinm r0, r0, 0, 27, 25
    li r6, 0x1
    stw r30, 0x14c4(r31)
    stw r0, 0x12a4(r31)
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    stw r30, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
lbl_fn_80261DC0_00001B90:
    lwz r0, 0xb4(r1)
    psq_l f31, 0xa8(r1), 0, 0
    lfd f31, 0xa0(r1)
    psq_l f30, 0x98(r1), 0, 0
    lfd f30, 0x90(r1)
    psq_l f29, 0x88(r1), 0, 0
    lfd f29, 0x80(r1)
    psq_l f28, 0x78(r1), 0, 0
    lfd f28, 0x70(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}
