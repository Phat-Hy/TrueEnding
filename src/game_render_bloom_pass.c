#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_21(void);
extern void _restgpr_22(void);
extern void _restgpr_26(void);
extern void _savegpr_21(void);
extern void _savegpr_22(void);
extern void _savegpr_26(void);
extern void fn_8000D9E8(void);
extern void fn_8000DCF4(void);
extern void fn_8004D388(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_80092814(void);
extern void fn_80097C08(void);
extern void fn_800E0AA8(void);
extern void fn_800E0AB0(void);
extern void fn_800F8548(void);
extern void fn_800FAB80(void);
extern void fn_80103F60(void);
extern void fn_80108378(void);
extern void fn_8013A158(void);
extern void fn_8013A194(void);
extern void fn_80148990(void);
extern void fn_8016E970(void);
extern void fn_80179D44(void);
extern void fn_801A03E0(void);
extern void fn_801A03EC(void);
extern void fn_801A0408(void);
extern void fn_80219E6C(void);
extern void fn_80232B7C(void);
extern void fn_8023A8B4(void);
extern void fn_80244674(void);
extern void fn_80244FC0(void);
extern void fn_802A36B0(void);
extern void fn_802A4094(void);
extern void fn_802A4170(void);
extern void fn_802A4184(void);
extern void fn_802BD480(void);
extern void fn_802BDFA0(void);
extern void fn_802BE0FC(void);
extern void fn_802BE180(void);
extern void fn_802BE2A0(void);
extern void fn_802BE7EC(void);
extern void fn_802BE9C8(void);
extern void fn_802BEAEC(void);
extern void fn_802BEE44(void);
extern void fn_802BF5C0(void);
extern void fn_802C0058(void);
extern void fn_802C0458(void);
extern void fn_802C06B4(void);
extern void fn_802C0738(void);
extern void fn_80370AE4(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_80680CF8(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);
extern void fn_80695720(void);

/* External data declarations */
extern u8 jumptable_80786510[];
extern u8 lbl_80746964[];
extern u8 lbl_80746AF8[];
extern u8 lbl_80746B00[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087D9E0;
extern u32 lbl_8087D9E4;
extern u32 lbl_8087EE98;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F8A0;
extern u32 lbl_8088417C;
extern u32 lbl_80884190;
extern u32 lbl_80884194;
extern u32 lbl_80884198;
extern u32 lbl_8088419C;
extern u32 lbl_808841A0;
extern u32 lbl_808841A4;
extern u32 lbl_808841A8;
extern u32 lbl_808841AC;
extern u32 lbl_808841B0;
extern u32 lbl_808841B4;
extern u32 lbl_808841B8;
extern u32 lbl_808841BC;
extern u32 lbl_808841C0;
extern u32 lbl_808841C4;
extern u32 lbl_808841C8;
extern u32 lbl_808841CC;
extern u32 lbl_808841D0;
extern u32 lbl_808841D4;
extern u32 lbl_808841D8;
extern u32 lbl_808841DC;
extern u32 lbl_808841E0;
extern u32 lbl_808841E4;
extern u32 lbl_808841E8;
extern u32 lbl_808841EC;
extern u32 lbl_808841F0;

/* Function declarations */
void fn_802BB368(void);
void fn_802BB3B8(void);
void fn_802BB410(void);
void fn_802BB92C(void);
void fn_802BBCD8(void);
void fn_802BBCDC(void);
void fn_802BC240(void);
void fn_802BC4EC(void);

asm void fn_802BB368(void)
{
    nofralloc
    psq_l f1, 0x528(r4), 0, 0
    cmpwi r5, 0x0
    lfs f2, 0x530(r4)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
    bne lbl_fn_802BB368_0000002C
    psq_l f1, 0x528(r4), 0, 0
    lfs f2, 0x530(r4)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
    blr
lbl_fn_802BB368_0000002C:
    lwz r0, 0x1900(r4)
    cmpwi r0, 0x0
    beqlr
    lwz r4, 0x62c(r4)
    psq_l f1, 0x18(r4), 0, 0
    lfs f2, 0x20(r4)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
    blr
}

asm void fn_802BB3B8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    stw r31, 0x14dc(r3)
    stw r31, 0x14e0(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    mr r3, r30
    li r4, 0x3
    stw r31, 0x58c(r30)
    bl fn_8016E970
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802BB410(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    addi r11, r1, 0x80
    bl _savegpr_26
    lwz r5, 0xd1c(r3)
    mr r31, r3
    cmpwi r5, 0x0
    beq lbl_fn_802BB410_000005AC
    addi r4, r1, 0x5c
    psq_l f1, 0x528(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lfs f2, 0x530(r5)
    lfs f0, 0x530(r3)
    lfs f5, 0x60(r1)
    lfs f4, 0x52c(r3)
    fsubs f6, f2, f0
    lfs f0, 0x528(r3)
    addi r3, r1, 0x50
    lfs f3, 0x5c(r1)
    fsubs f4, f5, f4
    stfs f2, 0x64(r1)
    fsubs f0, f3, f0
    mr r4, r3
    stfs f4, 0x54(r1)
    stfs f0, 0x50(r1)
    stfs f6, 0x58(r1)
    bl fn_805F98D0
    lwz r0, 0x58c(r31)
    cmpwi r0, 0x6
    beq lbl_fn_802BB410_00000158
    cmpwi r0, 0x7
    beq lbl_fn_802BB410_000001BC
    cmpwi r0, 0x8
    beq lbl_fn_802BB410_00000224
    cmpwi r0, 0x9
    beq lbl_fn_802BB410_000002B8
    cmpwi r0, 0xa
    beq lbl_fn_802BB410_0000034C
    cmpwi r0, 0xb
    beq lbl_fn_802BB410_000003B4
    cmpwi r0, 0x2
    beq lbl_fn_802BB410_00000410
    b lbl_fn_802BB410_00000570
lbl_fn_802BB410_00000158:
    li r0, 0x0
    stw r0, 0x14dc(r31)
    stw r0, 0x14e0(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0x6
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f1, lbl_8088417C
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f2, lbl_80884198
    li r4, 0x0
    stfs f1, 0x2fc(r31)
    li r5, 0x33
    li r6, 0x0
    li r7, 0x1
    stfs f1, 0x2e8(r31)
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_802BB410_000005AC
lbl_fn_802BB410_000001BC:
    li r0, 0x0
    stw r0, 0x14dc(r31)
    stw r0, 0x14e0(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0x7
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f0, lbl_8088417C
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80884190
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x33
    lfs f2, lbl_80884198
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_802BB410_000005AC
lbl_fn_802BB410_00000224:
    addi r3, r1, 0x50
    lfs f2, 0x58(r1)
    psq_l f1, 0x0(r3), 0, 0
    li r0, 0x0
    addi r28, r1, 0x44
    stfs f2, 0x4c(r1)
    stw r0, 0x14dc(r31)
    stw r0, 0x14e0(r31)
    psq_st f1, 0x0(r28), 0, 0
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0x8
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f0, lbl_8088417C
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80884190
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x156
    lfs f2, lbl_80884198
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    lfs f2, 0x4c(r1)
    addi r3, r31, 0x152c
    psq_l f1, 0x0(r28), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x1534(r31)
    b lbl_fn_802BB410_000005AC
lbl_fn_802BB410_000002B8:
    addi r3, r1, 0x50
    lfs f2, 0x58(r1)
    psq_l f1, 0x0(r3), 0, 0
    li r0, 0x0
    addi r28, r1, 0x38
    stfs f2, 0x40(r1)
    stw r0, 0x14dc(r31)
    stw r0, 0x14e0(r31)
    psq_st f1, 0x0(r28), 0, 0
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0x9
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f0, lbl_8088417C
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80884190
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x14d
    lfs f2, lbl_80884198
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    lfs f2, 0x40(r1)
    addi r3, r31, 0x152c
    psq_l f1, 0x0(r28), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x1534(r31)
    b lbl_fn_802BB410_000005AC
lbl_fn_802BB410_0000034C:
    li r0, 0x0
    stw r0, 0x14dc(r31)
    stw r0, 0x14e0(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0xa
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f0, lbl_8088417C
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80884190
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x13f
    lfs f2, lbl_80884198
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_802BB410_000005AC
lbl_fn_802BB410_000003B4:
    li r0, 0x0
    stw r0, 0x14dc(r31)
    stw r0, 0x14e0(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lfs f0, lbl_8088417C
    li r4, 0xb
    stw r3, 0x590(r31)
    li r0, 0x1
    lfs f1, lbl_80884190
    addi r3, r31, 0xb0
    stw r4, 0x58c(r31)
    li r4, 0x0
    lfs f2, lbl_80884198
    li r5, 0x145
    stw r0, 0x3fc(r31)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2fc(r31)
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    b lbl_fn_802BB410_000005AC
lbl_fn_802BB410_00000410:
    li r0, 0x0
    stw r0, 0x14dc(r31)
    stw r0, 0x14e0(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0x2
    mr r3, r31
    li r4, 0x6
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f3, lbl_8088417C
    li r0, 0x17
    lfs f0, lbl_80884194
    li r28, 0x1
    stw r0, 0x560(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80884190
    li r4, 0x0
    stw r28, 0x3fc(r31)
    li r5, 0x2e
    lfs f2, lbl_80884198
    li r6, 0x0
    stfs f3, 0x2fc(r31)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    li r3, 0x0
    li r4, 0x0
    bl fn_80232B7C
    lfs f0, lbl_80884190
    li r29, -0x1
    lfs f1, lbl_8088417C
    addi r4, r31, 0x191c
    stfs f0, 0x20(r1)
    addi r5, r31, 0xb0
    lwz r3, lbl_8087F3C0
    addi r7, r1, 0x2c
    stfs f0, 0x24(r1)
    addi r8, r1, 0x20
    addi r9, r1, 0x10
    li r6, 0x0
    stfs f0, 0x28(r1)
    li r10, -0x1
    stfs f0, 0x2c(r1)
    stfs f0, 0x30(r1)
    stfs f0, 0x34(r1)
    stfs f1, 0x10(r1)
    stfs f1, 0x14(r1)
    stfs f1, 0x18(r1)
    stfs f1, 0x1c(r1)
    stw r29, 0x8(r1)
    stw r28, 0xc(r1)
    bl fn_8023A8B4
    lis r3, lbl_807C7030@ha
    li r4, 0x65
    addi r3, r3, lbl_807C7030@l
    li r5, 0x1
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x8(r3)
    stfs f2, 0x57c(r31)
    psq_st f1, 0x574(r31), 0, 0
    lwz r3, lbl_8087F430
    bl fn_80370AE4
    lwz r3, lbl_8087F8A0
    lwz r26, lbl_8087F048
    lwz r27, 0x48(r3)
    mr r3, r26
    bl fn_800F8548
    mr r30, r3
    li r3, 0x5c3
    bl fn_80219E6C
    stw r29, 0x8(r1)
    mr r5, r3
    lfs f1, lbl_80884190
    mr r3, r26
    stw r29, 0xc(r1)
    mr r4, r27
    lfs f2, lbl_8088417C
    mr r6, r30
    addi r7, r31, 0x528
    addi r8, r31, 0x534
    li r9, 0x0
    li r10, 0x1e
    bl fn_800FAB80
    stw r28, 0x1914(r31)
    b lbl_fn_802BB410_000005AC
lbl_fn_802BB410_00000570:
    li r30, 0x0
    stw r30, 0x14dc(r31)
    stw r30, 0x14e0(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r3, r31
    li r4, 0x3
    stw r30, 0x58c(r31)
    bl fn_8016E970
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x6
    beq lbl_fn_802BB410_000005AC
    mr r3, r31
    bl fn_802BD480
lbl_fn_802BB410_000005AC:
    addi r11, r1, 0x80
    bl _restgpr_26
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_802BB92C(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r30, 0x28(r1)
    lwz r0, 0xd1c(r3)
    lwz r4, 0x14e0(r3)
    cmpwi r0, 0x0
    addi r0, r4, 0x1
    stw r0, 0x14e0(r3)
    bne lbl_fn_802BB92C_00000608
    bl fn_8000D9E8
    bl fn_8000DCF4
    stw r3, 0xd1c(r31)
lbl_fn_802BB92C_00000608:
    lwz r0, 0xd18(r31)
    cmpwi r0, 0x0
    beq lbl_fn_802BB92C_00000620
    lwz r0, 0xd1c(r31)
    cmpwi r0, 0x0
    bne lbl_fn_802BB92C_00000654
lbl_fn_802BB92C_00000620:
    lwz r0, 0x58c(r31)
    cmpwi r0, 0x2
    bne lbl_fn_802BB92C_00000644
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0xec(r12)
    mtctr r12
    bctrl
    b lbl_fn_802BB92C_00000950
lbl_fn_802BB92C_00000644:
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    b lbl_fn_802BB92C_00000950
lbl_fn_802BB92C_00000654:
    beq lbl_fn_802BB92C_00000740
    lwz r0, 0x58c(r31)
    cmplwi r0, 0x12
    bgt lbl_fn_802BB92C_00000724
    lis r3, jumptable_80786510@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_80786510@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    mr r3, r31
    bl fn_802BE0FC
    b lbl_fn_802BB92C_00000740
    mr r3, r31
    bl fn_802BE180
    b lbl_fn_802BB92C_00000740
    mr r3, r31
    bl fn_802BE2A0
    b lbl_fn_802BB92C_00000740
    mr r3, r31
    bl fn_802BE7EC
    b lbl_fn_802BB92C_00000740
    mr r3, r31
    bl fn_802BE9C8
    b lbl_fn_802BB92C_00000740
    mr r3, r31
    bl fn_802BEAEC
    b lbl_fn_802BB92C_00000740
    mr r3, r31
    bl fn_802BEE44
    b lbl_fn_802BB92C_00000740
    mr r3, r31
    bl fn_802BF5C0
    b lbl_fn_802BB92C_00000740
    mr r3, r31
    bl fn_802C0058
    b lbl_fn_802BB92C_00000740
    mr r3, r31
    bl fn_802C0458
    b lbl_fn_802BB92C_00000740
    mr r3, r31
    bl fn_802C06B4
    b lbl_fn_802BB92C_00000740
    mr r3, r31
    bl fn_802C0738
    b lbl_fn_802BB92C_00000740
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0xec(r12)
    mtctr r12
    bctrl
    b lbl_fn_802BB92C_00000740
lbl_fn_802BB92C_00000724:
    mr r3, r31
    bl fn_802BDFA0
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x6
    beq lbl_fn_802BB92C_00000740
    mr r3, r31
    bl fn_802BD480
lbl_fn_802BB92C_00000740:
    lwz r3, 0x58c(r31)
    subi r0, r3, 0xd
    cmplwi r0, 0x1
    bgt lbl_fn_802BB92C_000008A8
    lwz r3, 0x1918(r31)
    addi r0, r3, 0x1
    stw r0, 0x1918(r31)
    cmpwi r0, 0x78
    ble lbl_fn_802BB92C_00000950
    li r0, 0x0
    stw r0, 0x1918(r31)
    bl fn_8013A194
    mr r4, r31
    bl fn_80103F60
    mr r30, r3
    addi r3, r1, 0x10
    bl fn_802A4170
    bl fn_8000D9E8
    bl fn_802A36B0
    stw r3, 0xc(r1)
    lfs f31, lbl_808841A0
    b lbl_fn_802BB92C_000007D4
lbl_fn_802BB92C_00000798:
    lwz r0, 0xd1c(r31)
    cmplw r3, r0
    beq lbl_fn_802BB92C_000007B0
    addi r3, r1, 0x10
    addi r4, r1, 0xc
    bl fn_80244FC0
lbl_fn_802BB92C_000007B0:
    lwz r4, 0xc(r1)
    mr r3, r30
    bl fn_80108378
    slwi r0, r3, 2
    add r3, r30, r0
    stfs f31, 0x128(r3)
    lwz r3, 0xc(r1)
    bl fn_802A4094
    stw r3, 0xc(r1)
lbl_fn_802BB92C_000007D4:
    cmpwi r3, 0x0
    bne lbl_fn_802BB92C_00000798
    bl fn_801A03E0
    bl fn_801A0408
    stw r3, 0x8(r1)
    lfs f31, lbl_808841A0
    b lbl_fn_802BB92C_0000083C
lbl_fn_802BB92C_000007F0:
    bl fn_8013A158
    cmpwi r3, 0x0
    bne lbl_fn_802BB92C_00000830
    lwz r3, 0x8(r1)
    lwz r0, 0xd1c(r31)
    cmplw r3, r0
    beq lbl_fn_802BB92C_00000818
    addi r3, r1, 0x10
    addi r4, r1, 0x8
    bl fn_80244FC0
lbl_fn_802BB92C_00000818:
    lwz r4, 0x8(r1)
    mr r3, r30
    bl fn_80108378
    slwi r0, r3, 2
    add r3, r30, r0
    stfs f31, 0x128(r3)
lbl_fn_802BB92C_00000830:
    lwz r3, 0x8(r1)
    bl fn_801A03EC
    stw r3, 0x8(r1)
lbl_fn_802BB92C_0000083C:
    cmpwi r3, 0x0
    bne lbl_fn_802BB92C_000007F0
    addi r3, r1, 0x10
    bl fn_800E0AB0
    cmpwi r3, 0x0
    bne lbl_fn_802BB92C_00000898
    addi r3, r1, 0x10
    bl fn_800E0AA8
    mr r31, r3
    bl fn_80680CF8
    divwu r0, r3, r31
    mullw r0, r0, r31
    subf r4, r0, r3
    addi r3, r1, 0x10
    bl fn_802A4184
    mr r4, r3
    mr r3, r30
    lwz r4, 0x0(r4)
    bl fn_80108378
    slwi r0, r3, 2
    lfs f0, lbl_8088417C
    add r3, r30, r0
    stfs f0, 0x128(r3)
lbl_fn_802BB92C_00000898:
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_80244674
    b lbl_fn_802BB92C_00000950
lbl_fn_802BB92C_000008A8:
    li r0, 0x0
    stw r0, 0x1918(r31)
    bl fn_8013A194
    mr r4, r31
    bl fn_80103F60
    mr r30, r3
    bl fn_8000D9E8
    bl fn_802A36B0
    lfs f31, lbl_8088417C
    mr r31, r3
    b lbl_fn_802BB92C_000008F8
lbl_fn_802BB92C_000008D4:
    mr r3, r30
    mr r4, r31
    bl fn_80108378
    slwi r0, r3, 2
    mr r3, r31
    add r4, r30, r0
    stfs f31, 0x128(r4)
    bl fn_802A4094
    mr r31, r3
lbl_fn_802BB92C_000008F8:
    cmpwi r31, 0x0
    bne lbl_fn_802BB92C_000008D4
    bl fn_801A03E0
    bl fn_801A0408
    lfs f31, lbl_8088417C
    mr r31, r3
    b lbl_fn_802BB92C_00000948
lbl_fn_802BB92C_00000914:
    mr r3, r31
    bl fn_8013A158
    cmpwi r3, 0x0
    bne lbl_fn_802BB92C_0000093C
    mr r3, r30
    mr r4, r31
    bl fn_80108378
    slwi r0, r3, 2
    add r3, r30, r0
    stfs f31, 0x128(r3)
lbl_fn_802BB92C_0000093C:
    mr r3, r31
    bl fn_801A03EC
    mr r31, r3
lbl_fn_802BB92C_00000948:
    cmpwi r31, 0x0
    bne lbl_fn_802BB92C_00000914
lbl_fn_802BB92C_00000950:
    lwz r0, 0x44(r1)
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_802BBCD8(void)
{
    nofralloc
    blr
}

asm void fn_802BBCDC(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    addi r11, r1, 0xa0
    stfd f31, 0xa0(r1)
    psq_st f31, 0xa8(r1), 0, 0
    bl _savegpr_21
    lfs f2, lbl_80884190
    lis r4, lbl_80746964@ha
    stfs f2, 0x20(r1)
    li r0, 0x0
    addi r5, r1, 0x20
    lfs f0, lbl_808841A4
    stfs f2, 0x24(r1)
    addi r29, r1, 0x60
    lfs f31, lbl_808841A8
    mr r22, r3
    psq_l f1, 0x0(r5), 0, 0
    addi r30, r4, lbl_80746964@l
    stw r0, 0x5c(r1)
    addi r27, r1, 0x2c
    addi r28, r1, 0x50
    li r23, 0x0
    stfs f2, 0x28(r1)
    li r21, 0x0
    lis r31, fn_80148990@ha
    li r25, 0x8
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x68(r1)
    stfs f0, 0x6c(r1)
lbl_fn_802BBCDC_000009EC:
    lwzx r4, r30, r21
    add r26, r30, r21
    addi r3, r22, 0xb0
    li r5, 0x0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802BBCDC_00000A10
    li r24, 0x0
    b lbl_fn_802BBCDC_00000A1C
lbl_fn_802BBCDC_00000A10:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r22)
    add r24, r3, r0
lbl_fn_802BBCDC_00000A1C:
    lwz r4, 0x4(r26)
    addi r3, r22, 0xb0
    li r5, 0x0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802BBCDC_00000A3C
    li r3, 0x0
    b lbl_fn_802BBCDC_00000A48
lbl_fn_802BBCDC_00000A3C:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r22)
    add r3, r3, r0
lbl_fn_802BBCDC_00000A48:
    cmpwi r24, 0x0
    beq lbl_fn_802BBCDC_00000E9C
    cmpwi r3, 0x0
    beq lbl_fn_802BBCDC_00000AE0
    lfs f6, 0x1c(r3)
    lfs f3, 0x1c(r24)
    lfs f7, 0xc(r3)
    lfs f4, 0xc(r24)
    fsubs f10, f6, f3
    lfs f5, 0x2c(r3)
    lfs f0, 0x2c(r24)
    fsubs f9, f7, f4
    stfs f7, 0x38(r1)
    fmuls f7, f10, f31
    fsubs f11, f5, f0
    stfs f6, 0x3c(r1)
    fmuls f6, f9, f31
    fmuls f8, f11, f31
    stfs f5, 0x40(r1)
    fadds f5, f7, f3
    stfs f4, 0x44(r1)
    fadds f4, f6, f4
    fadds f2, f8, f0
    stfs f5, 0x54(r1)
    stfs f4, 0x50(r1)
    psq_l f1, 0x0(r28), 0, 0
    stfs f3, 0x48(r1)
    stfs f0, 0x4c(r1)
    stfs f9, 0x14(r1)
    stfs f10, 0x18(r1)
    stfs f11, 0x1c(r1)
    stfs f6, 0x8(r1)
    stfs f7, 0xc(r1)
    stfs f8, 0x10(r1)
    stfs f2, 0x58(r1)
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x68(r1)
    b lbl_fn_802BBCDC_00000B04
lbl_fn_802BBCDC_00000AE0:
    lfs f0, 0x1c(r24)
    lfs f3, 0xc(r24)
    stfs f3, 0x2c(r1)
    lfs f2, 0x2c(r24)
    stfs f0, 0x30(r1)
    psq_l f1, 0x0(r27), 0, 0
    stfs f2, 0x34(r1)
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x68(r1)
lbl_fn_802BBCDC_00000B04:
    lwz r0, 0x62c(r22)
    add r3, r30, r21
    lfs f0, 0x14(r3)
    cmpwi r0, 0x0
    stfs f0, 0x6c(r1)
    beq lbl_fn_802BBCDC_00000B28
    lwz r0, 0x628(r22)
    cmpwi r0, 0x0
    bne lbl_fn_802BBCDC_00000CC0
lbl_fn_802BBCDC_00000B28:
    lwz r0, 0x628(r22)
    cmplwi r0, 0x8
    bgt lbl_fn_802BBCDC_00000E64
    li r3, 0xb0
    li r4, 0x0
    la r5, lbl_8087D9E4
    la r6, lbl_8087D9E0
    li r7, 0x0
    bl fn_800846FC
    addi r4, r31, fn_80148990@l
    li r5, 0x0
    li r6, 0x14
    li r7, 0x8
    bl fn_80695720
    lwz r0, 0x62c(r22)
    mr r26, r3
    cmpwi r0, 0x0
    beq lbl_fn_802BBCDC_00000CB4
    lwz r0, 0x624(r22)
    li r5, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_802BBCDC_00000B84
    mr r5, r0
lbl_fn_802BBCDC_00000B84:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_802BBCDC_00000CA0
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_802BBCDC_00000C68
lbl_fn_802BBCDC_00000B9C:
    lwz r0, 0x62c(r22)
    add r6, r3, r4
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r22)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r22)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r22)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    bdnz lbl_fn_802BBCDC_00000B9C
    andi. r5, r5, 0x3
    beq lbl_fn_802BBCDC_00000CA0
lbl_fn_802BBCDC_00000C68:
    mtctr r5
lbl_fn_802BBCDC_00000C6C:
    lwz r0, 0x62c(r22)
    add r6, r3, r4
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    bdnz lbl_fn_802BBCDC_00000C6C
lbl_fn_802BBCDC_00000CA0:
    lwz r3, 0x62c(r22)
    cmpwi r3, 0x0
    beq lbl_fn_802BBCDC_00000CB4
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_802BBCDC_00000CB4:
    stw r26, 0x62c(r22)
    stw r25, 0x628(r22)
    b lbl_fn_802BBCDC_00000E64
lbl_fn_802BBCDC_00000CC0:
    lwz r3, 0x624(r22)
    cmplw r3, r0
    blt lbl_fn_802BBCDC_00000E64
    slwi r26, r3, 1
    cmplw r0, r26
    bgt lbl_fn_802BBCDC_00000E64
    mulli r3, r26, 0x14
    li r4, 0x0
    la r5, lbl_8087D9E4
    la r6, lbl_8087D9E0
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    mr r7, r26
    addi r4, r31, fn_80148990@l
    li r5, 0x0
    li r6, 0x14
    bl fn_80695720
    lwz r0, 0x62c(r22)
    mr r24, r3
    cmpwi r0, 0x0
    beq lbl_fn_802BBCDC_00000E5C
    lwz r0, 0x624(r22)
    mr r5, r26
    cmplw r26, r0
    ble lbl_fn_802BBCDC_00000D2C
    mr r5, r0
lbl_fn_802BBCDC_00000D2C:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_802BBCDC_00000E48
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_802BBCDC_00000E10
lbl_fn_802BBCDC_00000D44:
    lwz r0, 0x62c(r22)
    add r6, r3, r4
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r22)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r22)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r22)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    bdnz lbl_fn_802BBCDC_00000D44
    andi. r5, r5, 0x3
    beq lbl_fn_802BBCDC_00000E48
lbl_fn_802BBCDC_00000E10:
    mtctr r5
lbl_fn_802BBCDC_00000E14:
    lwz r0, 0x62c(r22)
    add r6, r3, r4
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    bdnz lbl_fn_802BBCDC_00000E14
lbl_fn_802BBCDC_00000E48:
    lwz r3, 0x62c(r22)
    cmpwi r3, 0x0
    beq lbl_fn_802BBCDC_00000E5C
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_802BBCDC_00000E5C:
    stw r24, 0x62c(r22)
    stw r26, 0x628(r22)
lbl_fn_802BBCDC_00000E64:
    lwz r0, 0x624(r22)
    lwz r4, 0x62c(r22)
    mulli r3, r0, 0x14
    lwz r0, 0x5c(r1)
    stwux r0, r3, r4
    psq_l f1, 0x0(r29), 0, 0
    psq_st f1, 0x4(r3), 0, 0
    lfs f2, 0x68(r1)
    stfs f2, 0xc(r3)
    lfs f0, 0x6c(r1)
    stfs f0, 0x10(r3)
    lwz r3, 0x624(r22)
    addi r0, r3, 0x1
    stw r0, 0x624(r22)
lbl_fn_802BBCDC_00000E9C:
    addi r23, r23, 0x1
    addi r21, r21, 0x1c
    cmpwi r23, 0x3
    blt lbl_fn_802BBCDC_000009EC
    lwz r0, 0x12a8(r22)
    rlwinm r0, r0, 0, 3, 1
    stw r0, 0x12a8(r22)
    psq_l f31, 0xa8(r1), 0, 0
    lfd f31, 0xa0(r1)
    addi r11, r1, 0xa0
    bl _restgpr_21
    lwz r0, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_802BC240(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    addi r11, r1, 0xd0
    stfd f31, 0x110(r1)
    psq_st f31, 0x118(r1), 0, 0
    stfd f30, 0x100(r1)
    psq_st f30, 0x108(r1), 0, 0
    stfd f29, 0xf0(r1)
    psq_st f29, 0xf8(r1), 0, 0
    stfd f28, 0xe0(r1)
    psq_st f28, 0xe8(r1), 0, 0
    stfd f27, 0xd0(r1)
    psq_st f27, 0xd8(r1), 0, 0
    bl _savegpr_22
    lwz r0, 0x624(r3)
    mr r30, r3
    cmpwi r0, 0x0
    beq lbl_fn_802BC240_00001144
    lis r3, lbl_80746964@ha
    lfs f27, lbl_80884190
    lfs f28, lbl_8088417C
    addi r27, r3, lbl_80746964@l
    lfs f31, lbl_808841A8
    addi r24, r1, 0x20
    lfs f29, lbl_808841AC
    addi r25, r1, 0x44
    lfs f30, lbl_80884194
    addi r26, r1, 0x68
    li r31, 0x0
    li r29, 0x0
    li r28, 0x0
lbl_fn_802BC240_00000F58:
    cmpwi r31, 0x0
    bne lbl_fn_802BC240_00001008
    stfs f27, 0x50(r1)
    addi r3, r1, 0x78
    li r4, 0x79
    stfs f27, 0x54(r1)
    stfs f28, 0x58(r1)
    lfs f1, 0x538(r30)
    bl fn_805F8E70
    addi r4, r1, 0x50
    addi r3, r1, 0x78
    mr r5, r4
    bl fn_805F93C0
    lfs f3, 0x54(r1)
    add r3, r27, r29
    lfs f0, 0x50(r1)
    fmuls f5, f3, f29
    lfs f3, 0x52c(r30)
    fmuls f6, f0, f29
    lfs f0, 0x528(r30)
    lfs f4, 0x58(r1)
    fsubs f7, f3, f5
    fsubs f0, f0, f6
    lwz r0, 0x62c(r30)
    fmuls f4, f4, f29
    stfs f7, 0x6c(r1)
    lfs f3, 0x530(r30)
    stfs f0, 0x68(r1)
    fsubs f2, f3, f4
    add r4, r0, r28
    psq_l f1, 0x0(r26), 0, 0
    psq_st f1, 0x4(r4), 0, 0
    lfs f3, 0x14(r3)
    stfs f2, 0xc(r4)
    lwz r0, 0x62c(r30)
    stfs f6, 0x5c(r1)
    add r3, r0, r28
    lfs f0, 0x8(r3)
    stfs f5, 0x60(r1)
    fmadds f0, f30, f3, f0
    stfs f4, 0x64(r1)
    stfs f2, 0x70(r1)
    stfs f0, 0x8(r3)
    b lbl_fn_802BC240_00001130
lbl_fn_802BC240_00001008:
    lwzx r4, r27, r29
    add r22, r27, r29
    addi r3, r30, 0xb0
    li r5, 0x0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802BC240_0000102C
    li r23, 0x0
    b lbl_fn_802BC240_00001038
lbl_fn_802BC240_0000102C:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r23, r3, r0
lbl_fn_802BC240_00001038:
    lwz r4, 0x4(r22)
    addi r3, r30, 0xb0
    li r5, 0x0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802BC240_00001058
    li r3, 0x0
    b lbl_fn_802BC240_00001064
lbl_fn_802BC240_00001058:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r3, r3, r0
lbl_fn_802BC240_00001064:
    cmpwi r23, 0x0
    beq lbl_fn_802BC240_00001130
    cmpwi r3, 0x0
    beq lbl_fn_802BC240_00001104
    lfs f6, 0x1c(r3)
    lfs f3, 0x1c(r23)
    lfs f7, 0xc(r3)
    lfs f4, 0xc(r23)
    fsubs f12, f6, f3
    lfs f5, 0x2c(r3)
    fsubs f11, f7, f4
    lfs f0, 0x2c(r23)
    fmuls f9, f12, f31
    stfs f7, 0x2c(r1)
    fsubs f13, f5, f0
    lwz r0, 0x62c(r30)
    fmuls f8, f11, f31
    stfs f6, 0x30(r1)
    fmuls f10, f13, f31
    add r3, r0, r28
    fadds f7, f9, f3
    stfs f5, 0x34(r1)
    fadds f6, f8, f4
    stfs f7, 0x48(r1)
    fadds f2, f10, f0
    stfs f6, 0x44(r1)
    psq_l f1, 0x0(r25), 0, 0
    psq_st f1, 0x4(r3), 0, 0
    stfs f4, 0x38(r1)
    stfs f3, 0x3c(r1)
    stfs f0, 0x40(r1)
    stfs f11, 0x14(r1)
    stfs f12, 0x18(r1)
    stfs f13, 0x1c(r1)
    stfs f8, 0x8(r1)
    stfs f9, 0xc(r1)
    stfs f10, 0x10(r1)
    stfs f2, 0x4c(r1)
    stfs f2, 0xc(r3)
    b lbl_fn_802BC240_00001130
lbl_fn_802BC240_00001104:
    lfs f0, 0x1c(r23)
    lfs f3, 0xc(r23)
    lwz r0, 0x62c(r30)
    lfs f2, 0x2c(r23)
    stfs f3, 0x20(r1)
    add r3, r0, r28
    stfs f0, 0x24(r1)
    psq_l f1, 0x0(r24), 0, 0
    psq_st f1, 0x4(r3), 0, 0
    stfs f2, 0x28(r1)
    stfs f2, 0xc(r3)
lbl_fn_802BC240_00001130:
    addi r31, r31, 0x1
    addi r28, r28, 0x14
    cmpwi r31, 0x3
    addi r29, r29, 0x1c
    blt lbl_fn_802BC240_00000F58
lbl_fn_802BC240_00001144:
    addi r11, r1, 0xd0
    psq_l f31, 0x118(r1), 0, 0
    lfd f31, 0x110(r1)
    psq_l f30, 0x108(r1), 0, 0
    lfd f30, 0x100(r1)
    psq_l f29, 0xf8(r1), 0, 0
    lfd f29, 0xf0(r1)
    psq_l f28, 0xe8(r1), 0, 0
    lfd f28, 0xe0(r1)
    psq_l f27, 0xd8(r1), 0, 0
    lfd f27, 0xd0(r1)
    bl _restgpr_22
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_802BC4EC(void)
{
    nofralloc
    stwu r1, -0x210(r1)
    mflr r0
    lfs f3, 0x4(r4)
    stw r0, 0x214(r1)
    addi r5, r1, 0xcc
    addi r6, r1, 0xc0
    li r0, 0x0
    stfd f31, 0x200(r1)
    psq_st f31, 0x208(r1), 0, 0
    stfd f30, 0x1f0(r1)
    psq_st f30, 0x1f8(r1), 0, 0
    fmr f30, f2
    stfd f29, 0x1e0(r1)
    psq_st f29, 0x1e8(r1), 0, 0
    fmr f29, f1
    stw r31, 0x1dc(r1)
    mr r31, r3
    stw r30, 0x1d8(r1)
    stw r29, 0x1d4(r1)
    stw r28, 0x1d0(r1)
    psq_l f1, 0x528(r3), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    lis r5, lbl_80746AF8@ha
    psq_l f1, 0x534(r3), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    lfs f2, 0x530(r3)
    lfs f0, 0xc4(r1)
    stfs f2, 0xd4(r1)
    lfs f2, 0x53c(r3)
    fsubs f1, f3, f0
    stfs f2, 0xc8(r1)
    lfd f2, lbl_80746AF8@l(r5)
    stw r0, 0x14e8(r3)
    bl fn_8068AEA8
    frsp f6, f1
    lfs f0, lbl_808841B0
    fcmpo cr0, f6, f0
    ble lbl_fn_802BC4EC_00001224
    lfs f0, lbl_808841B4
    fsubs f6, f6, f0
lbl_fn_802BC4EC_00001224:
    lfs f0, lbl_808841B8
    fcmpo cr0, f6, f0
    bge lbl_fn_802BC4EC_00001238
    lfs f0, lbl_808841B4
    fadds f6, f6, f0
lbl_fn_802BC4EC_00001238:
    lfs f0, lbl_808841B0
    lwz r3, lbl_8087EFA8
    fdivs f0, f6, f0
    lfs f4, lbl_808841BC
    lfs f3, lbl_8088417C
    lfs f7, 0x56c(r31)
    lfs f1, 0xc4(r1)
    lfs f31, 0x3a4(r3)
    fabs f5, f0
    lfs f0, lbl_808841C0
    frsp f5, f5
    fmuls f4, f5, f4
    fadds f3, f3, f4
    fmuls f7, f7, f3
    fmuls f3, f6, f7
    fcmpo cr0, f3, f0
    fadds f1, f1, f3
    bge lbl_fn_802BC4EC_00001288
    li r0, 0x1
    stw r0, 0x14e8(r31)
lbl_fn_802BC4EC_00001288:
    lfs f3, lbl_80884190
    addi r3, r1, 0x148
    lfs f0, lbl_8088417C
    li r4, 0x79
    stfs f1, 0xc4(r1)
    stfs f3, 0xb4(r1)
    stfs f3, 0xb8(r1)
    stfs f0, 0xbc(r1)
    bl fn_805F8E70
    addi r4, r1, 0xb4
    addi r3, r1, 0x148
    mr r5, r4
    bl fn_805F93C0
    lfs f0, lbl_808841C4
    fcmpo cr0, f29, f0
    ble lbl_fn_802BC4EC_000012FC
    fmuls f5, f0, f30
    lfs f4, 0xb4(r1)
    lfs f3, 0xb8(r1)
    li r0, 0x1
    lfs f0, 0xbc(r1)
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    fmuls f0, f0, f5
    stfs f4, 0xb4(r1)
    stfs f3, 0xb8(r1)
    stfs f0, 0xbc(r1)
    stw r0, 0x14e8(r31)
    b lbl_fn_802BC4EC_00001324
lbl_fn_802BC4EC_000012FC:
    lfs f4, 0xb4(r1)
    lfs f5, lbl_80884190
    lfs f3, 0xb8(r1)
    lfs f0, 0xbc(r1)
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    fmuls f0, f0, f5
    stfs f4, 0xb4(r1)
    stfs f3, 0xb8(r1)
    stfs f0, 0xbc(r1)
lbl_fn_802BC4EC_00001324:
    lwz r0, 0x58c(r31)
    cmpwi r0, 0x6
    beq lbl_fn_802BC4EC_00001354
    cmpwi r0, 0x9
    beq lbl_fn_802BC4EC_00001354
    cmpwi r0, 0x7
    beq lbl_fn_802BC4EC_00001354
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
lbl_fn_802BC4EC_00001354:
    lwz r4, lbl_8087F0A8
    lis r0, 0x4330
    lis r3, lbl_80746B00@ha
    lfs f7, lbl_8088417C
    lwz r4, 0x30(r4)
    stw r0, 0x1c8(r1)
    fcmpo cr0, f7, f31
    mullw r0, r4, r4
    lfd f6, lbl_80746B00@l(r3)
    lfs f4, lbl_808841C8
    lfs f3, lbl_808841CC
    lfs f0, 0xb8(r1)
    xoris r0, r0, 0x8000
    stw r0, 0x1cc(r1)
    lfd f5, 0x1c8(r1)
    fsubs f5, f5, f6
    fdivs f4, f4, f5
    fmuls f4, f31, f4
    fmadds f0, f3, f4, f0
    stfs f0, 0xb8(r1)
    bge lbl_fn_802BC4EC_000013AC
    b lbl_fn_802BC4EC_000013B0
lbl_fn_802BC4EC_000013AC:
    fmr f7, f31
lbl_fn_802BC4EC_000013B0:
    lfs f3, 0x6b8(r31)
    lfs f0, 0xb4(r1)
    lfs f5, lbl_8088417C
    fmadds f0, f3, f7, f0
    fcmpo cr0, f5, f31
    stfs f0, 0xb4(r1)
    bge lbl_fn_802BC4EC_000013D0
    b lbl_fn_802BC4EC_000013D4
lbl_fn_802BC4EC_000013D0:
    fmr f5, f31
lbl_fn_802BC4EC_000013D4:
    lfs f4, 0x6c0(r31)
    lfs f3, 0xbc(r1)
    lfs f0, lbl_808841D0
    fmadds f3, f4, f5, f3
    lfs f4, 0xb8(r1)
    fmuls f0, f0, f31
    lfs f5, lbl_8088417C
    stfs f3, 0xbc(r1)
    lfs f3, 0x6bc(r31)
    fcmpo cr0, f5, f0
    fadds f3, f4, f3
    stfs f3, 0xb8(r1)
    bge lbl_fn_802BC4EC_0000140C
    b lbl_fn_802BC4EC_00001410
lbl_fn_802BC4EC_0000140C:
    fmr f5, f0
lbl_fn_802BC4EC_00001410:
    lfs f0, lbl_808841D0
    lfs f3, 0x6c0(r31)
    fmuls f0, f0, f31
    lfs f4, lbl_8088417C
    fmuls f5, f3, f5
    fcmpo cr0, f4, f0
    bge lbl_fn_802BC4EC_00001430
    b lbl_fn_802BC4EC_00001434
lbl_fn_802BC4EC_00001430:
    fmr f4, f0
lbl_fn_802BC4EC_00001434:
    lfs f0, lbl_808841D0
    lfs f3, 0x6bc(r31)
    fmuls f0, f0, f31
    lfs f7, lbl_8088417C
    fmuls f6, f3, f4
    fcmpo cr0, f7, f0
    bge lbl_fn_802BC4EC_00001454
    b lbl_fn_802BC4EC_00001458
lbl_fn_802BC4EC_00001454:
    fmr f7, f0
lbl_fn_802BC4EC_00001458:
    lfs f3, 0x6b8(r31)
    addi r3, r31, 0x6b8
    lfs f0, 0x6c0(r31)
    fmuls f7, f3, f7
    lfs f4, 0x6b8(r31)
    fsubs f3, f0, f5
    lfs f0, lbl_80884190
    stfs f7, 0x80(r1)
    fsubs f4, f4, f7
    stfs f6, 0x84(r1)
    stfs f5, 0x88(r1)
    stfs f4, 0x6b8(r31)
    stfs f3, 0x6c0(r31)
    stfs f0, 0x6bc(r31)
    bl fn_805F9940
    lfs f0, lbl_8088419C
    fcmpo cr0, f1, f0
    bge lbl_fn_802BC4EC_000014B0
    lfs f0, lbl_80884190
    stfs f0, 0x6b8(r31)
    stfs f0, 0x6bc(r31)
    stfs f0, 0x6c0(r31)
lbl_fn_802BC4EC_000014B0:
    lfs f3, 0xb8(r1)
    lfs f0, lbl_808841D4
    fcmpo cr0, f3, f0
    bge lbl_fn_802BC4EC_000014C4
    stfs f0, 0xb8(r1)
lbl_fn_802BC4EC_000014C4:
    li r0, 0x0
    addi r30, r1, 0xcc
    lfs f2, 0xd4(r1)
    addi r4, r1, 0xa8
    psq_l f1, 0x0(r30), 0, 0
    addi r29, r1, 0x98
    stw r0, 0x1ac(r1)
    mr r3, r31
    lis r28, 0x8000
    stw r0, 0x1b0(r1)
    stw r0, 0x1b4(r1)
    stw r0, 0x1b8(r1)
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x614(r31), 0, 0
    stfs f2, 0xb0(r1)
    lfs f2, 0x61c(r31)
    stfs f2, 0xa0(r1)
    psq_st f1, 0x0(r29), 0, 0
    lfs f0, 0x620(r31)
    stfs f0, 0xa4(r1)
    bl fn_80179D44
    or r7, r28, r3
    lwz r3, lbl_8087EE98
    lfs f1, 0xa4(r1)
    mr r5, r29
    addi r4, r1, 0x178
    addi r6, r1, 0xb4
    addi r8, r31, 0x5b8
    li r9, 0x0
    bl fn_8004D388
    addi r3, r1, 0x188
    lwz r4, 0x1ac(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    cmpwi r4, 0x0
    lfs f0, 0x5a8(r31)
    lfs f3, 0xd0(r1)
    lfs f2, 0x190(r1)
    fsubs f4, f3, f0
    lfs f3, 0x5ac(r31)
    lfs f0, 0xa4(r1)
    fsubs f3, f2, f3
    lfs f6, 0xcc(r1)
    lfs f5, 0x5a4(r31)
    fsubs f0, f4, f0
    stfs f3, 0xd4(r1)
    fsubs f3, f6, f5
    stfs f0, 0xd0(r1)
    stfs f3, 0xcc(r1)
    beq lbl_fn_802BC4EC_00001594
    lwz r0, 0x0(r4)
    b lbl_fn_802BC4EC_00001598
lbl_fn_802BC4EC_00001594:
    li r0, -0x1
lbl_fn_802BC4EC_00001598:
    lfs f5, 0xd4(r1)
    addi r3, r1, 0x8c
    lfs f3, 0xb0(r1)
    stw r0, 0x634(r31)
    fsubs f5, f5, f3
    lfs f4, 0xd0(r1)
    lfs f0, 0xac(r1)
    lfs f3, 0xbc(r1)
    fsubs f6, f4, f0
    lfs f0, 0xb8(r1)
    fadds f7, f3, f5
    lfs f4, 0xcc(r1)
    lfs f3, 0xa8(r1)
    fadds f8, f0, f6
    fsubs f3, f4, f3
    lfs f0, 0xb4(r1)
    stfs f6, 0x78(r1)
    lfs f31, lbl_80884190
    fadds f0, f0, f3
    stfs f3, 0x74(r1)
    stfs f5, 0x7c(r1)
    stfs f0, 0x8c(r1)
    stfs f8, 0x90(r1)
    stfs f7, 0x94(r1)
    bl fn_805F9920
    lfs f0, lbl_808841D8
    fcmpo cr0, f1, f0
    ble lbl_fn_802BC4EC_00001824
    fcmpo cr0, f29, f0
    ble lbl_fn_802BC4EC_00001824
    addi r3, r1, 0x8c
    addi r29, r1, 0x5c
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r29
    lfs f2, 0x94(r1)
    mr r4, r29
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x64(r1)
    bl fn_805F98D0
    lfs f2, 0x64(r1)
    addi r30, r1, 0x68
    psq_l f1, 0x0(r29), 0, 0
    fabs f3, f2
    lfs f0, lbl_808841DC
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0x70(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_802BC4EC_00001680
    lfs f3, 0x68(r1)
    lfs f0, lbl_80884190
    fcmpo cr0, f3, f0
    ble lbl_fn_802BC4EC_00001674
    lfs f0, lbl_808841E0
    b lbl_fn_802BC4EC_00001678
lbl_fn_802BC4EC_00001674:
    lfs f0, lbl_808841E4
lbl_fn_802BC4EC_00001678:
    stfs f0, 0x48(r1)
    b lbl_fn_802BC4EC_00001694
lbl_fn_802BC4EC_00001680:
    frsp f2, f2
    lfs f1, 0x68(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_802BC4EC_00001694:
    lfs f0, 0x48(r1)
    addi r3, r1, 0xd8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80884190
    addi r4, r1, 0x38
    lfs f30, 0xe0(r1)
    mr r5, r4
    lfs f29, 0xdc(r1)
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
    lfs f0, lbl_8088417C
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x70(r1)
    stfs f3, 0x138(r1)
    stfs f3, 0x13c(r1)
    stfs f3, 0x140(r1)
    stfs f0, 0x144(r1)
    stfs f13, 0x8(r1)
    stfs f29, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f13, 0x108(r1)
    stfs f29, 0x10c(r1)
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
    lfs f0, lbl_808841DC
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802BC4EC_000017B0
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80884190
    fcmpo cr0, f3, f0
    ble lbl_fn_802BC4EC_000017A0
    lfs f0, lbl_808841E0
    b lbl_fn_802BC4EC_000017A4
lbl_fn_802BC4EC_000017A0:
    lfs f0, lbl_808841E4
lbl_fn_802BC4EC_000017A4:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_802BC4EC_000017C4
lbl_fn_802BC4EC_000017B0:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_802BC4EC_000017C4:
    addi r3, r1, 0x44
    lfs f4, lbl_80884190
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_80746AF8@ha
    psq_st f1, 0x0(r30), 0, 0
    fmr f2, f4
    lfs f0, 0x538(r31)
    lfs f3, 0x6c(r1)
    stfs f2, 0x70(r1)
    fsubs f1, f3, f0
    lfd f2, lbl_80746AF8@l(r3)
    stfs f4, 0x4c(r1)
    bl fn_8068AEA8
    frsp f31, f1
    lfs f0, lbl_808841B0
    fcmpo cr0, f31, f0
    ble lbl_fn_802BC4EC_00001810
    lfs f0, lbl_808841B4
    fsubs f31, f31, f0
lbl_fn_802BC4EC_00001810:
    lfs f0, lbl_808841B8
    fcmpo cr0, f31, f0
    bge lbl_fn_802BC4EC_00001824
    lfs f0, lbl_808841B4
    fadds f31, f31, f0
lbl_fn_802BC4EC_00001824:
    lfs f0, lbl_808841CC
    lfs f4, lbl_80884194
    fmuls f31, f31, f0
    lfs f3, 0x584(r31)
    lfs f0, lbl_808841E8
    fnmsubs f3, f4, f31, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802BC4EC_00001848
    b lbl_fn_802BC4EC_0000184C
lbl_fn_802BC4EC_00001848:
    fmr f3, f0
lbl_fn_802BC4EC_0000184C:
    lfs f4, lbl_808841EC
    fcmpo cr0, f3, f4
    ble lbl_fn_802BC4EC_00001878
    lfs f4, lbl_80884194
    lfs f3, 0x584(r31)
    lfs f0, lbl_808841E8
    fnmsubs f4, f4, f31, f3
    fcmpo cr0, f4, f0
    bge lbl_fn_802BC4EC_00001874
    b lbl_fn_802BC4EC_00001878
lbl_fn_802BC4EC_00001874:
    fmr f4, f0
lbl_fn_802BC4EC_00001878:
    addi r3, r1, 0xcc
    frsp f3, f4
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0xc0
    lfs f0, lbl_808841F0
    psq_st f1, 0x528(r31), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    fmuls f0, f3, f0
    lfs f2, 0xd4(r1)
    lis r3, lbl_80746AF8@ha
    psq_st f1, 0x534(r31), 0, 0
    stfs f2, 0x530(r31)
    lfs f2, 0xc8(r1)
    stfs f2, 0x53c(r31)
    lfs f1, 0x534(r31)
    lfd f2, lbl_80746AF8@l(r3)
    stfs f0, 0x584(r31)
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_808841B0
    fcmpo cr0, f3, f0
    ble lbl_fn_802BC4EC_000018D8
    lfs f0, lbl_808841B4
    fsubs f3, f3, f0
lbl_fn_802BC4EC_000018D8:
    lfs f0, lbl_808841B8
    fcmpo cr0, f3, f0
    bge lbl_fn_802BC4EC_000018EC
    lfs f0, lbl_808841B4
    fadds f3, f3, f0
lbl_fn_802BC4EC_000018EC:
    lis r3, lbl_80746AF8@ha
    lfs f1, 0x538(r31)
    stfs f3, 0x534(r31)
    lfd f2, lbl_80746AF8@l(r3)
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_808841B0
    fcmpo cr0, f3, f0
    ble lbl_fn_802BC4EC_00001918
    lfs f0, lbl_808841B4
    fsubs f3, f3, f0
lbl_fn_802BC4EC_00001918:
    lfs f0, lbl_808841B8
    fcmpo cr0, f3, f0
    bge lbl_fn_802BC4EC_0000192C
    lfs f0, lbl_808841B4
    fadds f3, f3, f0
lbl_fn_802BC4EC_0000192C:
    lis r3, lbl_80746AF8@ha
    lfs f1, 0x53c(r31)
    stfs f3, 0x538(r31)
    lfd f2, lbl_80746AF8@l(r3)
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_808841B0
    fcmpo cr0, f3, f0
    ble lbl_fn_802BC4EC_00001958
    lfs f0, lbl_808841B4
    fsubs f3, f3, f0
lbl_fn_802BC4EC_00001958:
    lfs f0, lbl_808841B8
    fcmpo cr0, f3, f0
    bge lbl_fn_802BC4EC_0000196C
    lfs f0, lbl_808841B4
    fadds f3, f3, f0
lbl_fn_802BC4EC_0000196C:
    lfs f2, lbl_80884190
    li r0, 0x0
    stfs f2, 0x50(r1)
    addi r3, r1, 0x50
    stfs f2, 0x54(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f3, 0x53c(r31)
    psq_st f1, 0x574(r31), 0, 0
    stfs f2, 0x57c(r31)
    stw r0, 0x630(r31)
    stw r0, 0x610(r31)
    psq_l f31, 0x208(r1), 0, 0
    lfd f31, 0x200(r1)
    psq_l f30, 0x1f8(r1), 0, 0
    lfd f30, 0x1f0(r1)
    psq_l f29, 0x1e8(r1), 0, 0
    lfd f29, 0x1e0(r1)
    lwz r31, 0x1dc(r1)
    lwz r30, 0x1d8(r1)
    lwz r29, 0x1d4(r1)
    lwz r28, 0x1d0(r1)
    lwz r0, 0x214(r1)
    stfs f2, 0x58(r1)
    mtlr r0
    addi r1, r1, 0x210
    blr
}
