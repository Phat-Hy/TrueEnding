#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_25(void);
extern void _restgpr_27(void);
extern void _savegpr_25(void);
extern void _savegpr_27(void);
extern void fn_8004ECC0(void);
extern void fn_8004ED34(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800DD3FC(void);
extern void fn_800EB7A0(void);
extern void fn_800EE360(void);
extern void fn_800F8548(void);
extern void fn_800FAB80(void);
extern void fn_801031D0(void);
extern void fn_801079C0(void);
extern void fn_80107A68(void);
extern void fn_80108C10(void);
extern void fn_80109828(void);
extern void fn_8012DF7C(void);
extern void fn_8013CB68(void);
extern void fn_80148B0C(void);
extern void fn_8015495C(void);
extern void fn_8015BAF0(void);
extern void fn_8015BDD8(void);
extern void fn_8015E7A0(void);
extern void fn_8016DA4C(void);
extern void fn_8016E970(void);
extern void fn_801765D8(void);
extern void fn_80178A6C(void);
extern void fn_80219E6C(void);
extern void fn_802CCFD8(void);
extern void fn_80370AE4(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_805F9990(void);
extern void fn_80680CF8(void);
extern void fn_8068AE9C(void);
extern void fn_8068AEA4(void);

/* External data declarations */
extern u8 lbl_80746DB0[];
extern u8 lbl_80746DD0[];
extern u8 lbl_80786990[];
extern u8 lbl_807C7030[];
extern u8 lbl_807C83B8[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087F048;
extern u32 lbl_8087F1E4;
extern u32 lbl_8087F430;
extern u32 lbl_8087F4A0;
extern u32 lbl_8087F8A0;
extern u32 lbl_808813D0;
extern u32 lbl_808843E8;
extern u32 lbl_808843F4;
extern u32 lbl_808843F8;
extern u32 lbl_80884420;
extern u32 lbl_80884428;
extern u32 lbl_80884430;
extern u32 lbl_80884438;
extern u32 lbl_8088443C;
extern u32 lbl_80884440;
extern u32 lbl_80884444;
extern u32 lbl_80884448;
extern u32 lbl_80884478;
extern u32 lbl_80884484;
extern u32 lbl_8088448C;
extern u32 lbl_80884494;
extern u32 lbl_80884498;
extern u32 lbl_8088449C;
extern u32 lbl_808844A0;
extern u32 lbl_808844A4;
extern u32 lbl_808844A8;
extern u32 lbl_808844AC;
extern u32 lbl_808844B0;
extern u32 lbl_808844B4;
extern u32 lbl_808844B8;
extern u32 lbl_808844C0;

/* Function declarations */
void fn_802CB1CC(void);
void fn_802CB43C(void);
void fn_802CB74C(void);
void fn_802CB8A0(void);
void fn_802CC0F4(void);
void fn_802CC19C(void);
void fn_802CC39C(void);
void fn_802CC4C8(void);
void fn_802CC708(void);
void fn_802CC834(void);
void fn_802CCA0C(void);
void fn_802CCAAC(void);
void fn_802CCAFC(void);
void fn_802CCB20(void);

asm void fn_802CB1CC(void)
{
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0xd4(r1)
    stfd f31, 0xc0(r1)
    psq_st f31, 0xc8(r1), 0, 0
    stw r31, 0xbc(r1)
    mr r31, r3
    lfs f31, 0x2e4(r3)
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_802CB1CC_00000068
    li r0, 0x0
    stw r0, 0x14b8(r31)
    stw r0, 0x14bc(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0x6
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    b lbl_fn_802CB1CC_00000254
lbl_fn_802CB1CC_00000068:
    lwz r0, 0x14bc(r31)
    cmpwi r0, 0x5
    bne lbl_fn_802CB1CC_000000D4
    lwz r3, 0x14d0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802CB1CC_00000254
    lwz r0, 0x48(r3)
    cmpwi r0, 0x2
    beq lbl_fn_802CB1CC_000000B4
    lwz r0, 0x1208(r3)
    cmpwi r0, 0x0
    bne lbl_fn_802CB1CC_000000B4
    addi r4, r31, 0x14dc
    li r5, 0x12c
    bl fn_8015BAF0
    lfs f3, 0x14cc(r31)
    lfs f0, lbl_80884428
    fadds f0, f3, f0
    stfs f0, 0x14cc(r31)
lbl_fn_802CB1CC_000000B4:
    lfs f3, 0x14cc(r31)
    lfs f0, lbl_808843F4
    fcmpo cr0, f3, f0
    bge lbl_fn_802CB1CC_000000C8
    b lbl_fn_802CB1CC_000000CC
lbl_fn_802CB1CC_000000C8:
    fmr f3, f0
lbl_fn_802CB1CC_000000CC:
    stfs f3, 0x14cc(r31)
    b lbl_fn_802CB1CC_00000254
lbl_fn_802CB1CC_000000D4:
    cmpwi r0, 0x1a
    bne lbl_fn_802CB1CC_00000254
    lwz r0, 0x14d0(r31)
    cmpwi r0, 0x0
    beq lbl_fn_802CB1CC_00000254
    lfs f3, lbl_808843F4
    addi r3, r1, 0x20
    lfs f0, lbl_80884494
    mr r4, r3
    stfs f3, 0x20(r1)
    stfs f0, 0x24(r1)
    stfs f3, 0x28(r1)
    bl fn_805F98D0
    lfs f4, 0x20(r1)
    addi r3, r1, 0x30
    lfs f5, lbl_80884498
    li r4, 0x79
    lfs f3, 0x24(r1)
    lfs f0, 0x28(r1)
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    fmuls f0, f0, f5
    stfs f4, 0x20(r1)
    stfs f3, 0x24(r1)
    stfs f0, 0x28(r1)
    lfs f1, 0x538(r31)
    bl fn_805F8E70
    addi r4, r1, 0x20
    addi r3, r1, 0x30
    mr r5, r4
    bl fn_805F93C0
    lfs f2, 0x530(r31)
    addi r5, r1, 0x14
    psq_l f1, 0x528(r31), 0, 0
    addi r6, r1, 0x8
    psq_st f1, 0x0(r5), 0, 0
    li r0, 0x0
    lfs f3, lbl_8088449C
    addi r4, r1, 0x60
    lfs f0, 0x18(r1)
    lis r7, 0x8000
    stfs f2, 0x1c(r1)
    li r8, 0x0
    fadds f0, f0, f3
    lwz r3, lbl_8087EE98
    li r9, 0x0
    stfs f0, 0x18(r1)
    lwz r10, 0x14d0(r31)
    lfs f2, 0x530(r10)
    psq_l f1, 0x528(r10), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    lfs f0, 0xc(r1)
    stfs f2, 0x10(r1)
    fadds f0, f0, f3
    stw r0, 0x94(r1)
    stfs f0, 0xc(r1)
    stw r0, 0x98(r1)
    stw r0, 0x9c(r1)
    stw r0, 0xa0(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_802CB1CC_00000224
    lwz r3, 0x98(r1)
    lwz r0, 0x8(r3)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_802CB1CC_00000224
    lfs f3, 0x70(r1)
    addi r3, r1, 0x70
    lfs f0, 0x88(r1)
    lfs f5, 0x74(r1)
    fadds f6, f3, f0
    lfs f4, 0x8c(r1)
    lfs f3, 0x78(r1)
    lfs f0, 0x90(r1)
    fadds f4, f5, f4
    stfs f6, 0x70(r1)
    fadds f2, f3, f0
    stfs f4, 0x74(r1)
    stfs f2, 0x78(r1)
    psq_l f1, 0x0(r3), 0, 0
    lwz r3, 0x14d0(r31)
    psq_st f1, 0x528(r3), 0, 0
    stfs f2, 0x530(r3)
lbl_fn_802CB1CC_00000224:
    lwz r3, 0x14d0(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
    lwz r3, 0x14d0(r31)
    addi r4, r1, 0x20
    li r5, -0x1
    li r6, 0x0
    bl fn_8015E7A0
    li r0, 0x0
    stw r0, 0x14d0(r31)
lbl_fn_802CB1CC_00000254:
    lwz r0, 0xd4(r1)
    psq_l f31, 0xc8(r1), 0, 0
    lfd f31, 0xc0(r1)
    lwz r31, 0xbc(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}

asm void fn_802CB43C(void)
{
    nofralloc
    stwu r1, -0x100(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x104(r1)
    lis r0, 0x4330
    stfd f31, 0xf0(r1)
    psq_st f31, 0xf8(r1), 0, 0
    stw r31, 0xec(r1)
    mr r31, r3
    stw r30, 0xe8(r1)
    stw r29, 0xe4(r1)
    lfs f31, 0x2e4(r3)
    addi r3, r3, 0xb0
    stw r0, 0xb8(r1)
    stw r0, 0xc0(r1)
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_802CB43C_000002EC
    li r0, 0x0
    stw r0, 0x14b8(r31)
    stw r0, 0x14bc(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0x6
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    b lbl_fn_802CB43C_0000055C
lbl_fn_802CB43C_000002EC:
    lwz r0, 0x14bc(r31)
    cmpwi r0, 0x5
    bne lbl_fn_802CB43C_0000054C
    lwz r0, 0x14d0(r31)
    cmpwi r0, 0x0
    beq lbl_fn_802CB43C_0000052C
    lfs f3, lbl_808843E8
    addi r3, r1, 0x88
    lfs f0, lbl_8088449C
    li r4, 0x79
    stfs f3, 0x2c(r1)
    stfs f3, 0x30(r1)
    stfs f0, 0x34(r1)
    lfs f1, 0x538(r31)
    bl fn_805F8E70
    addi r4, r1, 0x2c
    addi r3, r1, 0x88
    mr r5, r4
    bl fn_805F93C0
    lwz r3, 0x14d0(r31)
    addi r4, r31, 0x14dc
    addi r5, r1, 0x2c
    bl fn_8015BDD8
    lfs f3, 0x14cc(r31)
    lis r3, lbl_80746DD0@ha
    lfs f0, lbl_80884428
    lwz r4, 0x14d0(r31)
    fadds f0, f3, f0
    lfd f4, lbl_80746DD0@l(r3)
    addi r3, r4, 0x7d4
    lfs f3, lbl_808843F8
    stfs f0, 0x14cc(r31)
    lwz r6, 0x940(r4)
    lfs f0, 0x7d8(r4)
    xoris r4, r6, 0x8000
    stw r4, 0xbc(r1)
    fctiwz f5, f0
    lfd f0, 0xb8(r1)
    stfd f5, 0xc8(r1)
    fsubs f0, f0, f4
    lwz r7, 0xcc(r1)
    fmuls f0, f3, f0
    subi r5, r7, 0x1
    fctiwz f0, f0
    stfd f0, 0xd0(r1)
    lwz r0, 0xd4(r1)
    cmpw r0, r5
    bge lbl_fn_802CB43C_000003C8
    stw r4, 0xc4(r1)
    lfd f0, 0xc0(r1)
    fsubs f0, f0, f4
    fmuls f0, f3, f0
    fctiwz f0, f0
    stfd f0, 0xd0(r1)
    lwz r5, 0xd4(r1)
lbl_fn_802CB43C_000003C8:
    cmpwi r5, 0x0
    bge lbl_fn_802CB43C_000003D8
    li r29, 0x0
    b lbl_fn_802CB43C_0000042C
lbl_fn_802CB43C_000003D8:
    xoris r4, r6, 0x8000
    stw r4, 0xbc(r1)
    lis r5, lbl_80746DD0@ha
    lfs f3, lbl_808843F8
    lfd f4, lbl_80746DD0@l(r5)
    subi r29, r7, 0x1
    lfd f0, 0xb8(r1)
    fsubs f0, f0, f4
    fmuls f0, f3, f0
    fctiwz f0, f0
    stfd f0, 0xd0(r1)
    lwz r0, 0xd4(r1)
    cmpw r0, r29
    bge lbl_fn_802CB43C_0000042C
    stw r4, 0xc4(r1)
    lfd f0, 0xc0(r1)
    fsubs f0, f0, f4
    fmuls f0, f3, f0
    fctiwz f0, f0
    stfd f0, 0xd0(r1)
    lwz r29, 0xd4(r1)
lbl_fn_802CB43C_0000042C:
    mr r4, r29
    li r5, 0x0
    li r6, 0x0
    bl fn_8012DF7C
    lwz r3, 0x14d0(r31)
    li r4, 0x0
    bl fn_80148B0C
    psq_l f1, 0x4(r3), 0, 0
    addi r30, r1, 0x20
    lfs f2, 0xc(r3)
    addi r3, r1, 0x58
    stfs f2, 0x28(r1)
    li r4, 0x79
    psq_st f1, 0x0(r30), 0, 0
    lwz r5, 0x14d0(r31)
    lfs f1, 0x538(r5)
    bl fn_805F8E70
    lfs f3, lbl_808843E8
    addi r4, r1, 0x14
    lfs f0, lbl_80884420
    addi r6, r1, 0x8
    stfs f3, 0x8(r1)
    mr r5, r4
    lfs f2, lbl_8088448C
    addi r3, r1, 0x58
    stfs f0, 0xc(r1)
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x10(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x1c(r1)
    bl fn_805F93C0
    lfs f3, 0x20(r1)
    li r11, 0x0
    lfs f0, 0x14(r1)
    li r10, -0x1
    lfs f5, 0x24(r1)
    li r0, 0x1
    fadds f6, f3, f0
    lfs f4, 0x18(r1)
    lwz r3, 0x54(r1)
    mr r5, r30
    fadds f4, f5, f4
    lfs f3, 0x28(r1)
    clrlwi r7, r3, 4
    lfs f0, 0x1c(r1)
    stfs f6, 0x20(r1)
    mr r6, r31
    fadds f0, f3, f0
    lwz r3, lbl_8087F048
    stfs f4, 0x24(r1)
    addi r4, r1, 0x38
    li r8, 0x0
    li r9, 0x0
    stfs f0, 0x28(r1)
    stw r11, 0x40(r1)
    stw r11, 0x44(r1)
    stw r11, 0x48(r1)
    stw r10, 0x4c(r1)
    stw r7, 0x54(r1)
    stw r10, 0x50(r1)
    stw r0, 0x38(r1)
    stw r29, 0x3c(r1)
    lwz r7, 0x14d0(r31)
    bl fn_80108C10
lbl_fn_802CB43C_0000052C:
    lfs f3, 0x14cc(r31)
    lfs f0, lbl_808843F4
    fcmpo cr0, f3, f0
    bge lbl_fn_802CB43C_00000540
    b lbl_fn_802CB43C_00000544
lbl_fn_802CB43C_00000540:
    fmr f3, f0
lbl_fn_802CB43C_00000544:
    stfs f3, 0x14cc(r31)
    b lbl_fn_802CB43C_0000055C
lbl_fn_802CB43C_0000054C:
    cmpwi r0, 0xc
    bne lbl_fn_802CB43C_0000055C
    li r0, 0x0
    stw r0, 0x14d0(r31)
lbl_fn_802CB43C_0000055C:
    lwz r0, 0x104(r1)
    psq_l f31, 0xf8(r1), 0, 0
    lfd f31, 0xf0(r1)
    lwz r31, 0xec(r1)
    lwz r30, 0xe8(r1)
    lwz r29, 0xe4(r1)
    mtlr r0
    addi r1, r1, 0x100
    blr
}

asm void fn_802CB74C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    psq_st f31, 0x18(r1), 0, 0
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x14b8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_802CB74C_00000604
    lfs f31, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_802CB74C_000006B8
    lfs f0, lbl_808843F4
    li r0, 0x1
    stw r0, 0x14b8(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_808843E8
    li r4, 0x0
    stw r0, 0x3fc(r31)
    li r5, 0x14b
    lfs f2, lbl_808843F8
    li r6, 0x1
    stfs f0, 0x2fc(r31)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    b lbl_fn_802CB74C_000006B8
lbl_fn_802CB74C_00000604:
    cmpwi r0, 0x1
    bne lbl_fn_802CB74C_00000668
    lwz r0, 0x14bc(r3)
    cmpwi r0, 0xb4
    blt lbl_fn_802CB74C_000006B8
    lfs f0, lbl_808843F4
    li r4, 0x2
    li r0, 0x1
    stw r4, 0x14b8(r3)
    lfs f1, lbl_808843E8
    li r4, 0x0
    stw r0, 0x3fc(r3)
    li r5, 0x14c
    lfs f2, lbl_808843F8
    li r6, 0x0
    stfs f0, 0x2fc(r3)
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r3)
    addi r3, r3, 0xb0
    bl fn_80097C08
    lwz r3, lbl_8087F048
    addi r4, r31, 0xb0
    bl fn_80107A68
    b lbl_fn_802CB74C_000006B8
lbl_fn_802CB74C_00000668:
    cmpwi r0, 0x2
    bne lbl_fn_802CB74C_000006B8
    lfs f31, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_802CB74C_000006B8
    li r0, 0x0
    stw r0, 0x14b8(r31)
    stw r0, 0x14bc(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0x6
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
lbl_fn_802CB74C_000006B8:
    lwz r0, 0x24(r1)
    psq_l f31, 0x18(r1), 0, 0
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_802CB8A0(void)
{
    nofralloc
    stwu r1, -0x4b0(r1)
    mflr r0
    stw r0, 0x4b4(r1)
    stfd f31, 0x4a0(r1)
    psq_st f31, 0x4a8(r1), 0, 0
    stfd f30, 0x490(r1)
    psq_st f30, 0x498(r1), 0, 0
    stfd f29, 0x480(r1)
    psq_st f29, 0x488(r1), 0, 0
    stfd f28, 0x470(r1)
    psq_st f28, 0x478(r1), 0, 0
    stw r31, 0x46c(r1)
    mr r31, r3
    stw r30, 0x468(r1)
    addi r30, r1, 0x124
    stw r29, 0x464(r1)
    psq_l f1, 0x534(r3), 0, 0
    lfs f2, 0x53c(r3)
    stfs f2, 0x12c(r1)
    psq_st f1, 0x0(r30), 0, 0
    lfs f3, 0x1524(r3)
    lfs f0, 0x530(r3)
    lfs f5, 0x1520(r3)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r3)
    lfs f3, 0x151c(r3)
    lfs f0, 0x528(r3)
    fsubs f4, f5, f4
    addi r3, r1, 0x118
    fsubs f0, f3, f0
    stfs f4, 0x11c(r1)
    stfs f0, 0x118(r1)
    stfs f6, 0x120(r1)
    bl fn_805F9940
    lfs f0, lbl_8088443C
    fmr f31, f1
    lfs f30, lbl_80884430
    fcmpo cr0, f1, f0
    ble lbl_fn_802CB8A0_00000950
    addi r3, r1, 0x118
    addi r30, r1, 0xdc
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r30
    lfs f2, 0x120(r1)
    mr r4, r30
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0xe4(r1)
    bl fn_805F98D0
    lfs f2, 0xe4(r1)
    addi r29, r1, 0xe8
    psq_l f1, 0x0(r30), 0, 0
    fabs f3, f2
    lfs f0, lbl_80884440
    psq_st f1, 0x0(r29), 0, 0
    frsp f3, f3
    stfs f2, 0xf0(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_802CB8A0_000007E0
    lfs f3, 0xe8(r1)
    lfs f0, lbl_808843E8
    fcmpo cr0, f3, f0
    ble lbl_fn_802CB8A0_000007D4
    lfs f0, lbl_80884444
    b lbl_fn_802CB8A0_000007D8
lbl_fn_802CB8A0_000007D4:
    lfs f0, lbl_80884448
lbl_fn_802CB8A0_000007D8:
    stfs f0, 0xb0(r1)
    b lbl_fn_802CB8A0_000007F4
lbl_fn_802CB8A0_000007E0:
    frsp f2, f2
    lfs f1, 0xe8(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0xb0(r1)
lbl_fn_802CB8A0_000007F4:
    lfs f0, 0xb0(r1)
    addi r3, r1, 0x1a0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808843E8
    addi r4, r1, 0xa0
    lfs f28, 0x1a8(r1)
    mr r5, r4
    lfs f29, 0x1a4(r1)
    addi r3, r1, 0x1d0
    lfs f13, 0x1a0(r1)
    lfs f12, 0x1b8(r1)
    lfs f11, 0x1b4(r1)
    lfs f10, 0x1b0(r1)
    lfs f9, 0x1c8(r1)
    lfs f8, 0x1c4(r1)
    lfs f7, 0x1c0(r1)
    lfs f6, 0x1cc(r1)
    lfs f5, 0x1bc(r1)
    lfs f4, 0x1ac(r1)
    lfs f0, lbl_808843F4
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0xf0(r1)
    stfs f3, 0x200(r1)
    stfs f3, 0x204(r1)
    stfs f3, 0x208(r1)
    stfs f0, 0x20c(r1)
    stfs f13, 0x70(r1)
    stfs f29, 0x74(r1)
    stfs f28, 0x78(r1)
    stfs f13, 0x1d0(r1)
    stfs f29, 0x1d4(r1)
    stfs f28, 0x1d8(r1)
    stfs f10, 0x7c(r1)
    stfs f11, 0x80(r1)
    stfs f12, 0x84(r1)
    stfs f10, 0x1e0(r1)
    stfs f11, 0x1e4(r1)
    stfs f12, 0x1e8(r1)
    stfs f7, 0x88(r1)
    stfs f8, 0x8c(r1)
    stfs f9, 0x90(r1)
    stfs f7, 0x1f0(r1)
    stfs f8, 0x1f4(r1)
    stfs f9, 0x1f8(r1)
    stfs f4, 0x94(r1)
    stfs f5, 0x98(r1)
    stfs f6, 0x9c(r1)
    stfs f4, 0x1dc(r1)
    stfs f5, 0x1ec(r1)
    stfs f6, 0x1fc(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0xa8(r1)
    bl fn_805F9750
    lfs f2, 0xa8(r1)
    lfs f0, lbl_80884440
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802CB8A0_00000910
    lfs f3, 0xa4(r1)
    lfs f0, lbl_808843E8
    fcmpo cr0, f3, f0
    ble lbl_fn_802CB8A0_00000900
    lfs f0, lbl_80884444
    b lbl_fn_802CB8A0_00000904
lbl_fn_802CB8A0_00000900:
    lfs f0, lbl_80884448
lbl_fn_802CB8A0_00000904:
    fneg f0, f0
    stfs f0, 0xac(r1)
    b lbl_fn_802CB8A0_00000924
lbl_fn_802CB8A0_00000910:
    lfs f1, 0xa4(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0xac(r1)
lbl_fn_802CB8A0_00000924:
    lfs f2, lbl_808843E8
    addi r3, r1, 0xac
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x124
    stfs f2, 0xb4(r1)
    stfs f2, 0xf0(r1)
    frsp f2, f2
    psq_st f1, 0x0(r29), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x12c(r1)
    b lbl_fn_802CB8A0_00000960
lbl_fn_802CB8A0_00000950:
    psq_l f1, 0x534(r31), 0, 0
    lfs f2, 0x53c(r31)
    stfs f2, 0x12c(r1)
    psq_st f1, 0x0(r30), 0, 0
lbl_fn_802CB8A0_00000960:
    lfs f0, 0x568(r31)
    fmr f1, f31
    mr r3, r31
    addi r4, r1, 0x124
    fmuls f2, f0, f30
    li r5, 0x0
    bl fn_8013CB68
    lfs f3, 0x570(r31)
    lfs f0, lbl_808844A0
    fcmpo cr0, f3, f0
    ble lbl_fn_802CB8A0_000009CC
    li r3, 0x67e
    bl fn_80219E6C
    mr r5, r3
    lwz r3, lbl_8087F048
    li r0, -0x1
    lfs f1, lbl_808843E8
    stw r0, 0x8(r1)
    mr r4, r31
    lfs f2, lbl_808843F4
    addi r7, r31, 0x528
    stw r0, 0xc(r1)
    addi r8, r31, 0x534
    li r9, 0x0
    li r10, 0x3c
    lwz r6, 0x590(r31)
    bl fn_800FAB80
lbl_fn_802CB8A0_000009CC:
    psq_l f1, 0x528(r31), 0, 0
    addi r4, r1, 0xd0
    lfs f2, 0x530(r31)
    mr r3, r31
    stfs f2, 0xd8(r1)
    li r5, 0x64
    lfs f2, lbl_80884478
    psq_st f1, 0x0(r4), 0, 0
    lfs f1, lbl_80884438
    bl fn_802CC834
    lfs f3, 0x530(r31)
    addi r3, r1, 0x10c
    lfs f0, 0x1524(r31)
    lfs f5, 0x52c(r31)
    fsubs f6, f3, f0
    lfs f4, 0x1520(r31)
    lfs f3, 0x528(r31)
    lfs f0, 0x151c(r31)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x110(r1)
    stfs f0, 0x10c(r1)
    stfs f6, 0x114(r1)
    bl fn_805F9920
    lfs f0, lbl_80884484
    fcmpo cr0, f1, f0
    bge lbl_fn_802CB8A0_00000E34
    lwz r3, 0x150c(r31)
    subic. r0, r3, 0x1
    stw r0, 0x150c(r31)
    bgt lbl_fn_802CB8A0_00000E18
    lfs f3, 0x14cc(r31)
    lfs f0, lbl_808843E8
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_802CB8A0_00000AD8
    li r0, 0x1
    stw r0, 0x14c0(r31)
    addi r3, r1, 0x260
    li r4, 0x0
    li r5, 0x200
    bl memset
    lwz r3, lbl_8087F1E4
    lwz r4, 0x3fc(r3)
    cmpwi r4, 0x0
    beq lbl_fn_802CB8A0_00000A88
    b lbl_fn_802CB8A0_00000A8C
lbl_fn_802CB8A0_00000A88:
    la r4, lbl_808813D0
lbl_fn_802CB8A0_00000A8C:
    lwz r5, 0x60(r31)
    addi r3, r1, 0x260
    lwz r5, 0x4(r5)
    crclr 6
    bl fn_800DD3FC
    lwz r3, lbl_8087F048
    addi r4, r1, 0x260
    bl fn_80109828
    lwz r3, lbl_8087F8A0
    lwz r29, 0x48(r3)
    b lbl_fn_802CB8A0_00000AD0
lbl_fn_802CB8A0_00000AB8:
    lwz r3, lbl_8087F048
    mr r4, r31
    mr r5, r29
    li r6, 0x1
    bl fn_801031D0
    lwz r29, 0x14ac(r29)
lbl_fn_802CB8A0_00000AD0:
    cmpwi r29, 0x0
    bne lbl_fn_802CB8A0_00000AB8
lbl_fn_802CB8A0_00000AD8:
    lwz r0, 0x1518(r31)
    cmpwi r0, 0x6
    beq lbl_fn_802CB8A0_00000B00
    cmpwi r0, 0x7
    beq lbl_fn_802CB8A0_00000B30
    cmpwi r0, 0x9
    beq lbl_fn_802CB8A0_00000B54
    cmpwi r0, 0x8
    beq lbl_fn_802CB8A0_00000DB0
    b lbl_fn_802CB8A0_00000E28
lbl_fn_802CB8A0_00000B00:
    li r0, 0x0
    stw r0, 0x14b8(r31)
    stw r0, 0x14bc(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0x6
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    b lbl_fn_802CB8A0_00000EEC
lbl_fn_802CB8A0_00000B30:
    lfs f0, lbl_808843E8
    mr r3, r31
    stfs f0, 0xc4(r1)
    addi r5, r1, 0xc4
    li r4, 0x0
    stfs f0, 0xc8(r1)
    stfs f0, 0xcc(r1)
    bl fn_802CC19C
    b lbl_fn_802CB8A0_00000EEC
lbl_fn_802CB8A0_00000B54:
    li r0, 0x0
    stw r0, 0x14b8(r31)
    stw r0, 0x14bc(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0x9
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f0, lbl_808843F4
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_808843E8
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x145
    lfs f2, lbl_808843F8
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r4, 0x14b0(r31)
    addi r3, r1, 0x10
    lfs f3, lbl_808843E8
    addi r29, r1, 0x1c
    lfs f5, 0x530(r4)
    lfs f0, 0x530(r31)
    lfs f4, 0x528(r4)
    fsubs f2, f5, f0
    lfs f0, 0x528(r31)
    stfs f3, 0x14(r1)
    fsubs f4, f4, f0
    lfs f0, lbl_80884440
    stfs f2, 0x18(r1)
    stfs f4, 0x10(r1)
    frsp f4, f2
    psq_l f1, 0x0(r3), 0, 0
    fabs f5, f4
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x24(r1)
    frsp f5, f5
    fcmpo cr0, f5, f0
    bge lbl_fn_802CB8A0_00000C30
    lfs f0, 0x1c(r1)
    fcmpo cr0, f0, f3
    ble lbl_fn_802CB8A0_00000C24
    lfs f0, lbl_80884444
    b lbl_fn_802CB8A0_00000C28
lbl_fn_802CB8A0_00000C24:
    lfs f0, lbl_80884448
lbl_fn_802CB8A0_00000C28:
    stfs f0, 0x2c(r1)
    b lbl_fn_802CB8A0_00000C44
lbl_fn_802CB8A0_00000C30:
    fmr f2, f4
    lfs f1, 0x1c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x2c(r1)
lbl_fn_802CB8A0_00000C44:
    lfs f0, 0x2c(r1)
    addi r3, r1, 0x170
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808843E8
    addi r4, r1, 0x34
    lfs f4, 0x178(r1)
    mr r5, r4
    lfs f5, 0x174(r1)
    addi r3, r1, 0x130
    lfs f6, 0x170(r1)
    lfs f7, 0x188(r1)
    lfs f8, 0x184(r1)
    lfs f9, 0x180(r1)
    lfs f10, 0x198(r1)
    lfs f11, 0x194(r1)
    lfs f12, 0x190(r1)
    lfs f13, 0x19c(r1)
    lfs f28, 0x18c(r1)
    lfs f29, 0x17c(r1)
    lfs f0, lbl_808843F4
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x24(r1)
    stfs f3, 0x160(r1)
    stfs f3, 0x164(r1)
    stfs f3, 0x168(r1)
    stfs f0, 0x16c(r1)
    stfs f6, 0x64(r1)
    stfs f5, 0x68(r1)
    stfs f4, 0x6c(r1)
    stfs f6, 0x130(r1)
    stfs f5, 0x134(r1)
    stfs f4, 0x138(r1)
    stfs f9, 0x58(r1)
    stfs f8, 0x5c(r1)
    stfs f7, 0x60(r1)
    stfs f9, 0x140(r1)
    stfs f8, 0x144(r1)
    stfs f7, 0x148(r1)
    stfs f12, 0x4c(r1)
    stfs f11, 0x50(r1)
    stfs f10, 0x54(r1)
    stfs f12, 0x150(r1)
    stfs f11, 0x154(r1)
    stfs f10, 0x158(r1)
    stfs f29, 0x40(r1)
    stfs f28, 0x44(r1)
    stfs f13, 0x48(r1)
    stfs f29, 0x13c(r1)
    stfs f28, 0x14c(r1)
    stfs f13, 0x15c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x3c(r1)
    bl fn_805F9750
    lfs f2, 0x3c(r1)
    lfs f0, lbl_80884440
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802CB8A0_00000D60
    lfs f3, 0x38(r1)
    lfs f0, lbl_808843E8
    fcmpo cr0, f3, f0
    ble lbl_fn_802CB8A0_00000D50
    lfs f0, lbl_80884444
    b lbl_fn_802CB8A0_00000D54
lbl_fn_802CB8A0_00000D50:
    lfs f0, lbl_80884448
lbl_fn_802CB8A0_00000D54:
    fneg f0, f0
    stfs f0, 0x28(r1)
    b lbl_fn_802CB8A0_00000D74
lbl_fn_802CB8A0_00000D60:
    lfs f1, 0x38(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x28(r1)
lbl_fn_802CB8A0_00000D74:
    lfs f0, lbl_808843E8
    addi r3, r1, 0x28
    psq_l f1, 0x0(r3), 0, 0
    li r4, 0x5d
    fmr f2, f0
    psq_st f1, 0x534(r31), 0, 0
    li r5, 0x2
    stfs f2, 0x24(r1)
    frsp f2, f2
    stfs f0, 0x30(r1)
    stfs f2, 0x53c(r31)
    psq_st f1, 0x0(r29), 0, 0
    lwz r3, lbl_8087F430
    bl fn_80370AE4
    b lbl_fn_802CB8A0_00000EEC
lbl_fn_802CB8A0_00000DB0:
    li r0, 0x0
    stw r0, 0x14b8(r31)
    stw r0, 0x14bc(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0x8
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f0, lbl_808843F4
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_808843E8
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x142
    lfs f2, lbl_808843F8
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_802CB8A0_00000EEC
lbl_fn_802CB8A0_00000E18:
    mr r3, r31
    li r4, 0x6
    li r5, 0x0
    bl fn_802CC4C8
lbl_fn_802CB8A0_00000E28:
    li r0, 0x0
    stw r0, 0x1514(r31)
    b lbl_fn_802CB8A0_00000EEC
lbl_fn_802CB8A0_00000E34:
    lfs f2, 0x530(r31)
    addi r5, r1, 0x100
    psq_l f1, 0x528(r31), 0, 0
    addi r10, r31, 0x151c
    psq_st f1, 0x0(r5), 0, 0
    addi r6, r1, 0xf4
    lfs f3, lbl_8088448C
    li r0, 0x0
    lfs f0, 0x104(r1)
    addi r4, r1, 0x210
    stfs f2, 0x108(r1)
    lis r7, 0x2000
    fadds f0, f0, f3
    lwz r3, lbl_8087EE98
    li r8, 0x0
    li r9, 0x0
    stfs f0, 0x104(r1)
    lfs f2, 0x1524(r31)
    psq_l f1, 0x0(r10), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    lfs f0, 0xf8(r1)
    stfs f2, 0xfc(r1)
    fadds f0, f0, f3
    stw r0, 0x244(r1)
    stfs f0, 0xf8(r1)
    stw r0, 0x248(r1)
    stw r0, 0x24c(r1)
    stw r0, 0x250(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_802CB8A0_00000EEC
    addi r4, r31, 0x151c
    li r0, 0x1
    psq_l f1, 0x0(r4), 0, 0
    addi r5, r1, 0xb8
    stw r0, 0x14c0(r31)
    mr r3, r31
    lfs f2, 0x1524(r31)
    li r4, 0x1
    stfs f2, 0xc0(r1)
    psq_st f1, 0x0(r5), 0, 0
    bl fn_802CC19C
    lfs f3, 0x14cc(r31)
    lfs f0, 0x1550(r31)
    fsubs f0, f3, f0
    stfs f0, 0x14cc(r31)
lbl_fn_802CB8A0_00000EEC:
    lwz r0, 0x4b4(r1)
    psq_l f31, 0x4a8(r1), 0, 0
    lfd f31, 0x4a0(r1)
    psq_l f30, 0x498(r1), 0, 0
    lfd f30, 0x490(r1)
    psq_l f29, 0x488(r1), 0, 0
    lfd f29, 0x480(r1)
    psq_l f28, 0x478(r1), 0, 0
    lfd f28, 0x470(r1)
    lwz r31, 0x46c(r1)
    lwz r30, 0x468(r1)
    lwz r29, 0x464(r1)
    mtlr r0
    addi r1, r1, 0x4b0
    blr
}

asm void fn_802CC0F4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    psq_st f31, 0x18(r1), 0, 0
    stw r31, 0xc(r1)
    mr r31, r3
    lfs f31, 0x2e4(r3)
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_802CC0F4_00000FAC
    lwz r3, 0x1434(r31)
    lwz r0, 0x12a4(r31)
    cmpwi r3, 0x0
    oris r0, r0, 0x200
    stw r0, 0x12a4(r31)
    ble lbl_fn_802CC0F4_00000F84
    subi r0, r3, 0x1
    stw r0, 0x1434(r31)
    b lbl_fn_802CC0F4_00000FB4
lbl_fn_802CC0F4_00000F84:
    lwz r4, 0x5c0(r31)
    ori r0, r0, 0x8000
    stw r0, 0x12a4(r31)
    mr r3, r31
    clrrwi r0, r4, 1
    stw r0, 0x5c0(r31)
    bl fn_801765D8
    mr r3, r31
    bl fn_800EE360
    b lbl_fn_802CC0F4_00000FB4
lbl_fn_802CC0F4_00000FAC:
    li r0, 0xf
    stw r0, 0x1434(r31)
lbl_fn_802CC0F4_00000FB4:
    lwz r0, 0x24(r1)
    psq_l f31, 0x18(r1), 0, 0
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_802CC19C(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    addi r11, r1, 0xb0
    bl _savegpr_27
    li r30, 0x0
    stw r30, 0x14b8(r3)
    mr r27, r3
    mr r29, r4
    stw r30, 0x14bc(r3)
    mr r28, r5
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r27)
    li r0, 0x7
    mr r3, r27
    li r4, 0x3
    stw r0, 0x58c(r27)
    bl fn_8016E970
    lfs f0, lbl_808843F4
    li r31, 0x1
    stw r31, 0x3fc(r27)
    addi r3, r27, 0xb0
    lfs f1, lbl_808843E8
    li r4, 0x0
    stfs f0, 0x2fc(r27)
    li r5, 0x13f
    lfs f2, lbl_808843F8
    li r6, 0x0
    stfs f0, 0x2e8(r27)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r5, 0x14b0(r27)
    cmpwi r29, 0x0
    addi r29, r1, 0x50
    psq_l f1, 0x528(r5), 0, 0
    lfs f2, 0x530(r5)
    stfs f2, 0x58(r1)
    psq_st f1, 0x0(r29), 0, 0
    beq lbl_fn_802CC19C_0000108C
    stw r30, 0x153c(r27)
    psq_l f1, 0x0(r28), 0, 0
    lfs f2, 0x8(r28)
    stfs f2, 0x58(r1)
    psq_st f1, 0x0(r29), 0, 0
    b lbl_fn_802CC19C_00001158
lbl_fn_802CC19C_0000108C:
    stw r31, 0x153c(r27)
    addi r3, r1, 0x60
    li r4, 0x79
    lfs f1, 0x538(r5)
    bl fn_805F8E70
    lfs f0, lbl_808843E8
    addi r4, r1, 0x44
    stfs f0, 0x20(r1)
    addi r6, r1, 0x20
    lfs f2, lbl_8088448C
    mr r5, r4
    stfs f0, 0x24(r1)
    addi r3, r1, 0x60
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x28(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x4c(r1)
    bl fn_805F93C0
    lfs f5, 0x50(r1)
    addi r5, r1, 0x38
    lfs f3, 0x44(r1)
    addi r6, r1, 0x2c
    lfs f4, 0x54(r1)
    mr r4, r29
    fadds f5, f5, f3
    lfs f0, 0x48(r1)
    lfs f3, 0x58(r1)
    addi r8, r27, 0x5b8
    fadds f4, f4, f0
    stfs f5, 0x50(r1)
    stfs f4, 0x54(r1)
    lis r7, 0x2000
    lfs f0, 0x4c(r1)
    li r9, 0x0
    psq_l f1, 0x0(r29), 0, 0
    fadds f2, f3, f0
    psq_st f1, 0x0(r5), 0, 0
    lfs f4, lbl_8088448C
    psq_st f1, 0x0(r6), 0, 0
    lfs f5, 0x3c(r1)
    lfs f3, 0x30(r1)
    lfs f0, lbl_808844A4
    fadds f4, f5, f4
    stfs f2, 0x58(r1)
    fsubs f0, f3, f0
    lwz r3, lbl_8087EE98
    stfs f2, 0x40(r1)
    stfs f2, 0x34(r1)
    stfs f4, 0x3c(r1)
    stfs f0, 0x30(r1)
    bl fn_8004ECC0
lbl_fn_802CC19C_00001158:
    lfs f5, 0x58(r1)
    addi r4, r1, 0x14
    lfs f4, 0x530(r27)
    addi r3, r27, 0x1530
    lfs f3, 0x54(r1)
    addi r11, r1, 0xb0
    fsubs f4, f5, f4
    lfs f0, 0x52c(r27)
    lfs f6, lbl_808844A0
    fsubs f5, f3, f0
    lfs f3, 0x50(r1)
    lfs f0, 0x528(r27)
    fmuls f2, f4, f6
    stfs f4, 0x10(r1)
    fsubs f0, f3, f0
    fmuls f3, f5, f6
    stfs f2, 0x1538(r27)
    fmuls f4, f0, f6
    stfs f3, 0x18(r1)
    stfs f4, 0x14(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f5, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f2, 0x1c(r1)
    bl _restgpr_27
    lwz r0, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_802CC39C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    li r0, 0x0
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r0, 0x14b8(r3)
    stw r0, 0x14bc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0xe
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f0, lbl_808843F4
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_808843E8
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x14a
    lfs f2, lbl_808843F8
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r5, 0x14d0(r31)
    lfs f0, lbl_808843F4
    cmpwi r5, 0x0
    stfs f0, 0x14cc(r31)
    beq lbl_fn_802CC39C_000012D8
    lwz r0, 0x55c(r5)
    cmpwi r0, 0x6
    bne lbl_fn_802CC39C_000012D0
    lwz r3, 0x560(r5)
    subi r0, r3, 0x71
    cmplwi r0, 0x1
    bgt lbl_fn_802CC39C_000012D0
    lfs f2, lbl_808843E8
    lis r4, lbl_807C7030@ha
    lfs f0, lbl_808844A8
    addi r3, r1, 0x8
    stfs f2, 0x8(r1)
    addi r4, r4, lbl_807C7030@l
    stfs f0, 0xc(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x574(r5), 0, 0
    stfs f2, 0x57c(r5)
    lwz r3, 0x14d0(r31)
    stfs f2, 0x10(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x8c(r12)
    mtctr r12
    bctrl
    lwz r3, 0x14d0(r31)
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    bl fn_8015495C
lbl_fn_802CC39C_000012D0:
    li r0, 0x0
    stw r0, 0x14d0(r31)
lbl_fn_802CC39C_000012D8:
    addi r4, r31, 0xb0
    lwz r3, lbl_8087F048
    mr r5, r4
    bl fn_801079C0
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_802CC4C8(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r11, r1, 0x60
    stfd f31, 0x60(r1)
    psq_st f31, 0x68(r1), 0, 0
    bl _savegpr_25
    li r29, 0x0
    stw r29, 0x14b8(r3)
    mr r31, r3
    mr r26, r4
    stw r29, 0x14bc(r3)
    mr r25, r5
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0xf
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    cmpwi r25, 0x0
    stw r26, 0x1518(r31)
    beq lbl_fn_802CC4C8_0000137C
    li r0, -0x1
    stw r0, 0x1510(r31)
    addi r3, r31, 0x151c
    psq_l f1, 0x528(r25), 0, 0
    lfs f2, 0x530(r25)
    stfs f2, 0x1524(r31)
    psq_st f1, 0x0(r3), 0, 0
    b lbl_fn_802CC4C8_0000151C
lbl_fn_802CC4C8_0000137C:
    lis r25, lbl_80746DB0@ha
    lfs f31, lbl_808844AC
    addi r30, r1, 0x18
    li r26, 0x0
    addi r25, r25, lbl_80746DB0@l
    li r27, 0x0
lbl_fn_802CC4C8_00001394:
    lwz r3, lbl_8087F430
    li r4, 0x0
    lwz r5, 0x0(r25)
    li r7, 0x0
    lwz r6, 0x10d8(r3)
    lwz r0, 0x78(r6)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_802CC4C8_000013E0
lbl_fn_802CC4C8_000013B8:
    lwz r3, 0x7c(r6)
    lwzx r0, r3, r7
    cmpw r5, r0
    bne lbl_fn_802CC4C8_000013D4
    mulli r0, r4, 0x28
    add r28, r3, r0
    b lbl_fn_802CC4C8_000013E4
lbl_fn_802CC4C8_000013D4:
    addi r7, r7, 0x28
    addi r4, r4, 0x1
    bdnz lbl_fn_802CC4C8_000013B8
lbl_fn_802CC4C8_000013E0:
    li r28, 0x0
lbl_fn_802CC4C8_000013E4:
    cmpwi r28, 0x0
    beq lbl_fn_802CC4C8_0000143C
    lfs f3, 0xc(r28)
    addi r3, r1, 0x8
    lfs f0, 0x530(r31)
    lfs f5, 0x8(r28)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r31)
    lfs f3, 0x4(r28)
    lfs f0, 0x528(r31)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f6, 0x10(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f31
    ble lbl_fn_802CC4C8_0000143C
    lwz r0, 0x0(r28)
    addi r26, r26, 0x1
    stwx r0, r30, r29
    addi r29, r29, 0x4
lbl_fn_802CC4C8_0000143C:
    addi r27, r27, 0x1
    addi r25, r25, 0x4
    cmpwi r27, 0x8
    blt lbl_fn_802CC4C8_00001394
    cmpwi r26, 0x0
    ble lbl_fn_802CC4C8_00001474
    bl fn_80680CF8
    divw r0, r3, r26
    addi r4, r1, 0x18
    mullw r0, r0, r26
    subf r0, r0, r3
    slwi r0, r0, 2
    lwzx r4, r4, r0
    b lbl_fn_802CC4C8_00001478
lbl_fn_802CC4C8_00001474:
    li r4, -0x1
lbl_fn_802CC4C8_00001478:
    li r0, 0x0
    stw r4, 0x1510(r31)
    li r5, 0x0
    li r7, 0x0
    stw r0, 0x1514(r31)
    lwz r3, lbl_8087F430
    lwz r6, 0x10d8(r3)
    lwz r0, 0x78(r6)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_802CC4C8_000014CC
lbl_fn_802CC4C8_000014A4:
    lwz r3, 0x7c(r6)
    lwzx r0, r3, r7
    cmpw r4, r0
    bne lbl_fn_802CC4C8_000014C0
    mulli r0, r5, 0x28
    add r3, r3, r0
    b lbl_fn_802CC4C8_000014D0
lbl_fn_802CC4C8_000014C0:
    addi r7, r7, 0x28
    addi r5, r5, 0x1
    bdnz lbl_fn_802CC4C8_000014A4
lbl_fn_802CC4C8_000014CC:
    li r3, 0x0
lbl_fn_802CC4C8_000014D0:
    cmpwi r3, 0x0
    bne lbl_fn_802CC4C8_00001508
    li r0, 0x0
    stw r0, 0x14b8(r31)
    stw r0, 0x14bc(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0x6
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    b lbl_fn_802CC4C8_0000151C
lbl_fn_802CC4C8_00001508:
    psq_l f1, 0x4(r3), 0, 0
    addi r4, r31, 0x151c
    lfs f2, 0xc(r3)
    stfs f2, 0x1524(r31)
    psq_st f1, 0x0(r4), 0, 0
lbl_fn_802CC4C8_0000151C:
    addi r11, r1, 0x60
    psq_l f31, 0x68(r1), 0, 0
    lfd f31, 0x60(r1)
    bl _restgpr_25
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_802CC708(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    lwz r12, 0x0(r3)
    lwz r12, 0x48(r12)
    mtctr r12
    bctrl
    mr r3, r31
    bl fn_80178A6C
    mr r3, r31
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    bl fn_8015495C
    mr r3, r31
    bl fn_8016DA4C
    lfs f0, lbl_808843F4
    li r3, 0x2
    li r0, 0x1
    stw r3, 0x58c(r31)
    lfs f1, lbl_808843E8
    addi r3, r31, 0xb0
    stw r0, 0x3fc(r31)
    li r4, 0x0
    lfs f2, lbl_808843F8
    li r5, 0x2e
    stfs f0, 0x2fc(r31)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r31)
    bl fn_80097C08
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x1
    lwz r12, 0x9c(r12)
    mtctr r12
    bctrl
    lwz r3, 0x14d0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802CC708_0000164C
    lfs f2, lbl_808843E8
    lis r4, lbl_807C7030@ha
    lfs f0, lbl_808844A8
    addi r5, r1, 0x8
    stfs f2, 0x8(r1)
    addi r4, r4, lbl_807C7030@l
    stfs f0, 0xc(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x574(r3), 0, 0
    stfs f2, 0x57c(r3)
    lwz r3, 0x14d0(r31)
    stfs f2, 0x10(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x8c(r12)
    mtctr r12
    bctrl
    lwz r3, 0x14d0(r31)
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    bl fn_8015495C
    li r0, 0x0
    stw r0, 0x14d0(r31)
lbl_fn_802CC708_0000164C:
    mr r3, r31
    bl fn_800EB7A0
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_802CC834(void)
{
    nofralloc
    stwu r1, -0x100(r1)
    mflr r0
    stw r0, 0x104(r1)
    stfd f31, 0xf0(r1)
    psq_st f31, 0xf8(r1), 0, 0
    lfs f31, lbl_80884428
    stfd f30, 0xe0(r1)
    psq_st f30, 0xe8(r1), 0, 0
    lfs f30, lbl_808843F4
    stfd f29, 0xd0(r1)
    psq_st f29, 0xd8(r1), 0, 0
    lfs f29, lbl_808843E8
    stfd f28, 0xc0(r1)
    psq_st f28, 0xc8(r1), 0, 0
    stfd f27, 0xb0(r1)
    psq_st f27, 0xb8(r1), 0, 0
    fmr f27, f2
    stfd f26, 0xa0(r1)
    psq_st f26, 0xa8(r1), 0, 0
    fmr f26, f1
    stw r31, 0x9c(r1)
    stw r30, 0x98(r1)
    mr r30, r5
    stw r29, 0x94(r1)
    mr r29, r3
    lwz r4, lbl_8087F4A0
    lwz r31, 0x48(r4)
    b lbl_fn_802CC834_000017EC
lbl_fn_802CC834_000016D8:
    lwz r0, 0x50(r31)
    cmpwi r0, 0x1
    bne lbl_fn_802CC834_000017E8
    lwz r12, 0x0(r31)
    mr r4, r31
    addi r3, r1, 0x20
    lwz r12, 0x54(r12)
    mtctr r12
    bctrl
    lfs f3, 0x28(r1)
    addi r3, r1, 0x14
    lfs f2, 0x530(r29)
    lfs f0, 0x528(r29)
    lfs f1, 0x20(r1)
    fsubs f2, f3, f2
    stfs f29, 0x18(r1)
    fsubs f0, f1, f0
    stfs f2, 0x1c(r1)
    stfs f0, 0x14(r1)
    bl fn_805F9940
    lwz r12, 0x0(r31)
    fmr f28, f1
    mr r3, r31
    lwz r12, 0x50(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_802CC834_00001750
    lfs f0, 0x48(r3)
    fsubs f28, f28, f0
lbl_fn_802CC834_00001750:
    fcmpo cr0, f28, f26
    cror eq, lt, eq
    bne lbl_fn_802CC834_000017E8
    addi r3, r1, 0x14
    mr r4, r3
    bl fn_805F98D0
    stfs f29, 0x8(r1)
    addi r3, r1, 0x30
    li r4, 0x79
    stfs f29, 0xc(r1)
    stfs f30, 0x10(r1)
    lfs f1, 0x538(r29)
    bl fn_805F8E70
    addi r4, r1, 0x8
    addi r3, r1, 0x30
    mr r5, r4
    bl fn_805F93C0
    stfs f29, 0xc(r1)
    addi r3, r1, 0x14
    addi r4, r1, 0x8
    bl fn_805F9990
    bl fn_8068AE9C
    frsp f1, f1
    fmuls f0, f31, f27
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_802CC834_000017E8
    addi r3, r1, 0x60
    li r4, 0x0
    li r5, 0x30
    bl memset
    stw r30, 0x60(r1)
    mr r3, r31
    addi r4, r1, 0x60
    lwz r12, 0x0(r31)
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
lbl_fn_802CC834_000017E8:
    lwz r31, 0x5c(r31)
lbl_fn_802CC834_000017EC:
    cmpwi r31, 0x0
    bne lbl_fn_802CC834_000016D8
    lwz r0, 0x104(r1)
    psq_l f31, 0xf8(r1), 0, 0
    lfd f31, 0xf0(r1)
    psq_l f30, 0xe8(r1), 0, 0
    lfd f30, 0xe0(r1)
    psq_l f29, 0xd8(r1), 0, 0
    lfd f29, 0xd0(r1)
    psq_l f28, 0xc8(r1), 0, 0
    lfd f28, 0xc0(r1)
    psq_l f27, 0xb8(r1), 0, 0
    lfd f27, 0xb0(r1)
    psq_l f26, 0xa8(r1), 0, 0
    lfd f26, 0xa0(r1)
    lwz r31, 0x9c(r1)
    lwz r30, 0x98(r1)
    lwz r29, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x100
    blr
}

asm void fn_802CCA0C(void)
{
    nofralloc
    lwz r8, 0x38(r3)
    li r5, 0x0
    li r6, 0x0
    li r4, 0x0
    rlwinm r0, r8, 0, 29, 29
    li r7, 0x0
    cmplwi r0, 0x4
    beq lbl_fn_802CCA0C_00001870
    clrlwi r0, r8, 31
    cmplwi r0, 0x1
    beq lbl_fn_802CCA0C_00001870
    li r7, 0x1
lbl_fn_802CCA0C_00001870:
    cmpwi r7, 0x0
    beq lbl_fn_802CCA0C_0000188C
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_802CCA0C_0000188C
    li r4, 0x1
lbl_fn_802CCA0C_0000188C:
    cmpwi r4, 0x0
    beq lbl_fn_802CCA0C_000018C0
    lwz r0, 0x55c(r3)
    li r4, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_802CCA0C_000018B4
    lwz r0, 0x560(r3)
    cmpwi r0, 0x1c
    bne lbl_fn_802CCA0C_000018B4
    li r4, 0x1
lbl_fn_802CCA0C_000018B4:
    cmpwi r4, 0x0
    bne lbl_fn_802CCA0C_000018C0
    li r6, 0x1
lbl_fn_802CCA0C_000018C0:
    cmpwi r6, 0x0
    beq lbl_fn_802CCA0C_000018D8
    lwz r0, 0x58c(r3)
    cmpwi r0, 0xa
    bne lbl_fn_802CCA0C_000018D8
    li r5, 0x1
lbl_fn_802CCA0C_000018D8:
    mr r3, r5
    blr
}

asm void fn_802CCAAC(void)
{
    nofralloc
    psq_l f1, 0x528(r4), 0, 0
    cmpwi r5, 0x0
    lfs f2, 0x530(r4)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
    bne lbl_fn_802CCAAC_00001918
    lwz r5, 0x62c(r4)
    psq_l f1, 0x4(r5), 0, 0
    lfs f2, 0xc(r5)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
    lfs f0, 0x52c(r4)
    stfs f0, 0x4(r3)
    blr
lbl_fn_802CCAAC_00001918:
    lwz r4, 0x62c(r4)
    psq_l f1, 0x4(r4), 0, 0
    lfs f2, 0xc(r4)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
    blr
}

asm void fn_802CCAFC(void)
{
    nofralloc
    lis r4, lbl_807C83B8@ha
    lfs f2, lbl_808844B0
    addi r3, r4, lbl_807C83B8@l
    lfs f1, lbl_808844B4
    lfs f0, lbl_808844B8
    stfs f2, lbl_807C83B8@l(r4)
    stfs f1, 0x4(r3)
    stfs f0, 0x8(r3)
    blr
}

asm void fn_802CCB20(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_802CCFD8
    lfs f0, lbl_808844C0
    lis r3, lbl_80786990@ha
    addi r3, r3, lbl_80786990@l
    li r5, 0x409
    li r4, 0x408
    li r0, 0x1
    stw r3, 0x0(r31)
    mr r3, r31
    stw r5, 0x1510(r31)
    stw r4, 0x1514(r31)
    stfs f0, 0x1518(r31)
    stb r0, 0x1548(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
