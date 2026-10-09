#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_26(void);
extern void _savegpr_26(void);
extern void fn_80044E0C(void);
extern void fn_8004ED34(void);
extern void fn_80050A1C(void);
extern void fn_80097C08(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_801059F8(void);
extern void fn_80105B3C(void);
extern void fn_80107380(void);
extern void fn_80107798(void);
extern void fn_80107850(void);
extern void fn_801079B0(void);
extern void fn_80107A68(void);
extern void fn_80107B20(void);
extern void fn_80107BD8(void);
extern void fn_80107D94(void);
extern void fn_80107E58(void);
extern void fn_80107F10(void);
extern void fn_80107FC8(void);
extern void fn_80108080(void);
extern void fn_8011BEB8(void);
extern void fn_8012DD70(void);
extern void fn_8013322C(void);
extern void fn_8013539C(void);
extern void fn_8014C228(void);
extern void fn_8014DEE4(void);
extern void fn_8015487C(void);
extern void fn_80154C08(void);
extern void fn_80164DCC(void);
extern void fn_8016E970(void);
extern void fn_80178A6C(void);
extern void fn_80179D44(void);
extern void fn_80204E04(void);
extern void fn_8021A888(void);
extern void fn_8021A8D0(void);
extern void fn_8021A918(void);
extern void fn_8023A02C(void);
extern void fn_8023A098(void);
extern void fn_80370174(void);
extern void fn_80370320(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9990(void);
extern void fn_805F99B0(void);
extern void fn_8068A850(void);
extern void fn_80695AD0(void);

/* External data declarations */
extern u8 jumptable_8077AD5C[];
extern u8 lbl_80737490[];
extern u8 lbl_807374B8[];
extern u8 lbl_80737828[];
extern u8 lbl_80766768[];
extern u8 lbl_8077AD44[];
extern u8 lbl_8077AD50[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F9C0;
extern u32 lbl_80881964;
extern u32 lbl_8088196C;
extern u32 lbl_80881994;
extern u32 lbl_808819B0;
extern u32 lbl_808819C0;
extern u32 lbl_808819F8;
extern u32 lbl_80881A88;
extern u32 lbl_80881B0C;

/* Function declarations */
void fn_80152D10(void);
void fn_80153004(void);
void fn_801533C8(void);
void fn_80153698(void);
void fn_801539E0(void);
void fn_80153B44(void);
void fn_80153FA0(void);
void fn_80153FD8(void);
void fn_80154344(void);
void fn_80154488(void);
void fn_80154654(void);

asm void fn_80152D10(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r12, 0x0(r3)
    lwz r12, 0x48(r12)
    mtctr r12
    bctrl
    mr r3, r31
    bl fn_80178A6C
    li r0, 0x2
    stw r0, 0x58c(r31)
    addi r3, r31, 0x7d4
    bl fn_8012DD70
    addi r3, r31, 0xc58
    li r4, 0x0
    bl fn_8011BEB8
    lwz r0, 0x12a4(r31)
    srwi. r0, r0, 31
    beq lbl_fn_80152D10_00000190
    lwz r0, 0x12a4(r31)
    clrlwi r0, r0, 2
    stw r0, 0x12a4(r31)
    lwz r3, lbl_8087F430
    lwz r4, 0x10d8(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80152D10_000000B8
    lwz r3, 0xc38(r31)
    cmpwi r3, 0x0
    ble lbl_fn_80152D10_000000B8
    lwz r0, 0xc3c(r31)
    cmpwi r0, 0x0
    ble lbl_fn_80152D10_000000B8
    subi r0, r3, 0x1
    lwz r3, 0xb0(r4)
    slwi r0, r0, 6
    li r5, 0x0
    add r3, r3, r0
    stw r5, 0x3c(r3)
    lwz r3, 0xc3c(r31)
    lwz r4, 0xb0(r4)
    subi r0, r3, 0x1
    slwi r0, r0, 6
    add r3, r4, r0
    stw r5, 0x3c(r3)
lbl_fn_80152D10_000000B8:
    lwz r4, 0x48(r31)
    cmpwi r4, 0x0
    bne lbl_fn_80152D10_000000EC
    lwz r3, lbl_8087F0A8
    lwz r0, 0x278(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80152D10_000000EC
    lwz r3, 0x5c(r31)
    lwz r0, 0x11c(r3)
    cmpwi r0, 0x1
    bne lbl_fn_80152D10_000000EC
    li r0, 0x1
    b lbl_fn_80152D10_0000010C
lbl_fn_80152D10_000000EC:
    cmpwi r4, 0x0
    bne lbl_fn_80152D10_00000108
    lwz r0, 0x12a8(r31)
    extrwi. r0, r0, 1, 14
    beq lbl_fn_80152D10_00000108
    li r0, 0x1
    b lbl_fn_80152D10_0000010C
lbl_fn_80152D10_00000108:
    li r0, 0x0
lbl_fn_80152D10_0000010C:
    cmpwi r0, 0x0
    beq lbl_fn_80152D10_00000190
    lwz r3, lbl_8087F430
    li r4, 0x25
    bl fn_80370174
    cmpwi r3, 0x1
    blt lbl_fn_80152D10_00000170
    lwz r3, 0x648(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80152D10_0000013C
    li r4, 0x1
    bl fn_80044E0C
lbl_fn_80152D10_0000013C:
    lwz r3, 0x64c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80152D10_00000150
    li r4, 0x1
    bl fn_80044E0C
lbl_fn_80152D10_00000150:
    li r0, 0x0
    li r3, -0x1
    stw r3, 0x674(r31)
    mr r3, r31
    stw r0, 0x648(r31)
    stw r0, 0x64c(r31)
    bl fn_8014C228
    b lbl_fn_80152D10_00000190
lbl_fn_80152D10_00000170:
    lwz r0, 0x674(r31)
    cmpwi r0, 0x0
    blt lbl_fn_80152D10_00000190
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8014DEE4
lbl_fn_80152D10_00000190:
    lwz r0, 0x12a4(r31)
    extrwi. r0, r0, 1, 26
    beq lbl_fn_80152D10_000001A8
    lwz r0, 0x12a4(r31)
    rlwinm r0, r0, 0, 27, 25
    stw r0, 0x12a4(r31)
lbl_fn_80152D10_000001A8:
    lwz r7, 0xd1c(r31)
    cmpwi r7, 0x0
    beq lbl_fn_80152D10_00000250
    lwz r0, 0x12a8(r7)
    mr r5, r7
    lwz r6, 0x1028(r7)
    li r4, 0x0
    extrwi r0, r0, 1, 15
    cntlzw r0, r0
    srwi r3, r0, 5
    b lbl_fn_80152D10_000001F0
lbl_fn_80152D10_000001D4:
    lwz r0, 0xfe8(r5)
    cmplw r0, r31
    bne lbl_fn_80152D10_000001E8
    li r0, 0x1
    b lbl_fn_80152D10_0000020C
lbl_fn_80152D10_000001E8:
    addi r5, r5, 0x4
    addi r4, r4, 0x1
lbl_fn_80152D10_000001F0:
    cmpwi r3, 0x0
    mr r0, r6
    bne lbl_fn_80152D10_00000200
    slwi r0, r6, 1
lbl_fn_80152D10_00000200:
    cmpw r4, r0
    blt lbl_fn_80152D10_000001D4
    li r0, 0x0
lbl_fn_80152D10_0000020C:
    cmpwi r0, 0x0
    beq lbl_fn_80152D10_00000250
    li r0, 0x10
    mr r4, r7
    li r3, 0x0
    mtctr r0
lbl_fn_80152D10_00000224:
    lwz r0, 0xfe8(r4)
    cmplw r0, r31
    bne lbl_fn_80152D10_00000244
    slwi r0, r3, 2
    li r4, 0x0
    add r3, r7, r0
    stw r4, 0xfe8(r3)
    b lbl_fn_80152D10_00000250
lbl_fn_80152D10_00000244:
    addi r4, r4, 0x4
    addi r3, r3, 0x1
    bdnz lbl_fn_80152D10_00000224
lbl_fn_80152D10_00000250:
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_80152D10_00000270
    mr r4, r31
    bl fn_801059F8
    lwz r3, lbl_8087F048
    mr r4, r31
    bl fn_80105B3C
lbl_fn_80152D10_00000270:
    lwz r0, 0x12a8(r31)
    lfs f0, lbl_8088196C
    rlwinm r0, r0, 0, 24, 22
    stw r0, 0x12a8(r31)
    stfs f0, 0xfb8(r31)
    stfs f0, 0xfbc(r31)
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_80152D10_000002A8
    mr r4, r31
    bl fn_801059F8
    lwz r3, lbl_8087F048
    mr r4, r31
    bl fn_80105B3C
lbl_fn_80152D10_000002A8:
    lwz r0, 0x12a8(r31)
    mr r3, r31
    lfs f0, lbl_8088196C
    li r4, 0x1
    rlwinm r0, r0, 0, 24, 22
    stw r0, 0x12a8(r31)
    stfs f0, 0xfb8(r31)
    stfs f0, 0xfbc(r31)
    bl fn_80164DCC
    lwz r0, 0x12a8(r31)
    li r3, 0x0
    stw r3, 0xfc0(r31)
    ori r0, r0, 0x400
    stw r0, 0x12a8(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80153004(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    stw r31, 0x8c(r1)
    stw r30, 0x88(r1)
    mr r30, r3
    lwz r0, lbl_8087F048
    cmpwi r0, 0x0
    beq lbl_fn_80153004_00000370
    mr r3, r0
    addi r4, r30, 0xb0
    bl fn_80107850
    lwz r3, lbl_8087F048
    addi r4, r30, 0xb0
    li r5, 0x1
    bl fn_80107798
    lwz r3, lbl_8087F048
    addi r4, r30, 0xb0
    bl fn_80107A68
    lwz r3, lbl_8087F048
    addi r4, r30, 0xb0
    bl fn_80107B20
    lwz r3, lbl_8087F048
    addi r4, r30, 0xb0
    bl fn_80107E58
    lwz r3, lbl_8087F048
    addi r4, r30, 0xb0
    bl fn_80107FC8
    lwz r3, lbl_8087F048
    addi r4, r30, 0xb0
    bl fn_80108080
lbl_fn_80153004_00000370:
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_80153004_00000384
    addi r4, r30, 0xb0
    bl fn_801079B0
lbl_fn_80153004_00000384:
    lwz r3, 0x12a4(r30)
    extrwi. r0, r3, 1, 11
    beq lbl_fn_80153004_0000046C
    lwz r0, 0x48(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80153004_0000046C
    rlwinm r0, r3, 0, 12, 10
    stw r0, 0x12a4(r30)
    extrwi r0, r3, 1, 12
    li r4, 0x0
    lwz r10, lbl_8087EFA8
    addi r5, r1, 0x24
    lfs f0, lbl_8088196C
    addi r6, r1, 0x34
    psq_l f1, 0x328(r10), 0, 0
    addi r7, r1, 0x44
    psq_l f2, 0x330(r10), 0, 0
    addi r9, r10, 0x358
    psq_st f1, 0x0(r5), 0, 0
    addi r8, r1, 0x54
    psq_l f1, 0x338(r10), 0, 0
    psq_st f2, 0x8(r5), 0, 0
    psq_l f2, 0x340(r10), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    psq_l f1, 0x348(r10), 0, 0
    psq_st f2, 0x8(r6), 0, 0
    psq_l f2, 0x350(r10), 0, 0
    psq_st f1, 0x0(r7), 0, 0
    psq_l f1, 0x0(r9), 0, 0
    psq_st f2, 0x8(r7), 0, 0
    psq_l f2, 0x8(r9), 0, 0
    lwz r3, 0x368(r10)
    psq_st f1, 0x0(r8), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    stw r0, 0x324(r10)
    psq_st f1, 0x328(r10), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    psq_st f2, 0x8(r8), 0, 0
    psq_l f2, 0x8(r5), 0, 0
    psq_st f2, 0x330(r10), 0, 0
    psq_l f2, 0x8(r6), 0, 0
    psq_st f1, 0x338(r10), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    psq_st f2, 0x340(r10), 0, 0
    psq_l f2, 0x8(r7), 0, 0
    psq_st f1, 0x348(r10), 0, 0
    psq_l f1, 0x0(r8), 0, 0
    psq_st f2, 0x350(r10), 0, 0
    psq_l f2, 0x8(r8), 0, 0
    psq_st f1, 0x0(r9), 0, 0
    psq_st f2, 0x8(r9), 0, 0
    stw r3, 0x368(r10)
    stw r4, 0x36c(r10)
    stw r3, 0x64(r1)
    stw r0, 0x20(r1)
    stw r4, 0x68(r1)
    stfs f0, 0x6c(r1)
    stfs f0, 0x370(r10)
lbl_fn_80153004_0000046C:
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_80153004_00000480
    addi r4, r30, 0xb0
    bl fn_80107F10
lbl_fn_80153004_00000480:
    lwz r0, 0x58c(r30)
    cmpwi r0, 0x3
    bne lbl_fn_80153004_00000658
    lwz r31, 0x564(r30)
    li r0, 0x0
    lwz r3, 0x55c(r30)
    stw r0, 0x58c(r30)
    cmpw r3, r31
    beq lbl_fn_80153004_00000654
    cmpwi r3, 0x6
    beq lbl_fn_80153004_000004B8
    cmpwi r3, 0x8
    beq lbl_fn_80153004_000004B8
    stw r3, 0x564(r30)
lbl_fn_80153004_000004B8:
    lwz r0, 0x55c(r30)
    cmpwi r0, 0x6
    bne lbl_fn_80153004_00000654
    lwz r0, 0xf80(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80153004_000004F0
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x70(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x74(r1)
    stw r0, 0x78(r1)
    b lbl_fn_80153004_0000050C
lbl_fn_80153004_000004F0:
    lis r5, lbl_8077AD44@ha
    lwzu r4, lbl_8077AD44@l(r5)
    stw r4, 0x70(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x74(r1)
    stw r0, 0x78(r1)
lbl_fn_80153004_0000050C:
    lwz r5, 0x70(r1)
    addi r3, r1, 0x14
    lwz r4, 0x74(r1)
    lwz r0, 0x78(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80153004_00000548
    lwz r3, 0xf80(r30)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80153004_00000548:
    lwz r0, 0x55c(r30)
    cmpwi r0, 0x6
    beq lbl_fn_80153004_00000624
    cmpwi r0, 0x8
    beq lbl_fn_80153004_00000560
    stw r0, 0x564(r30)
lbl_fn_80153004_00000560:
    lwz r0, 0x55c(r30)
    cmpwi r0, 0x6
    bne lbl_fn_80153004_00000624
    lwz r0, 0xf80(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80153004_00000598
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x7c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x80(r1)
    stw r0, 0x84(r1)
    b lbl_fn_80153004_000005B4
lbl_fn_80153004_00000598:
    lis r5, lbl_8077AD50@ha
    lwzu r4, lbl_8077AD50@l(r5)
    stw r4, 0x7c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x80(r1)
    stw r0, 0x84(r1)
lbl_fn_80153004_000005B4:
    lwz r5, 0x7c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x80(r1)
    lwz r0, 0x84(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80153004_000005F0
    lwz r3, 0xf80(r30)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80153004_000005F0:
    mr r3, r30
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r30)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r30)
    beq lbl_fn_80153004_00000624
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80153004_00000624:
    lwz r3, 0xf80(r30)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r30)
    cmpwi r3, 0x0
    stw r0, 0xf80(r30)
    beq lbl_fn_80153004_00000654
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80153004_00000654:
    stw r31, 0x55c(r30)
lbl_fn_80153004_00000658:
    addi r3, r30, 0x7d4
    li r4, 0x40
    bl fn_8013322C
    li r0, -0x1
    stw r0, 0xf94(r30)
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_80153004_0000068C
    addi r4, r30, 0xb0
    bl fn_80107BD8
    lwz r3, lbl_8087F048
    mr r4, r30
    bl fn_80107380
lbl_fn_80153004_0000068C:
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_80153004_000006A0
    addi r4, r30, 0xb0
    bl fn_80107D94
lbl_fn_80153004_000006A0:
    lwz r0, 0x94(r1)
    lwz r31, 0x8c(r1)
    lwz r30, 0x88(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_801533C8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    addi r7, r3, 0x6d4
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r5
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x6d0(r3)
    slwi r0, r0, 3
    add r6, r3, r0
    addi r6, r6, 0x6d4
    b lbl_fn_801533C8_00000704
lbl_fn_801533C8_000006EC:
    lwz r0, 0x0(r7)
    cmpw r0, r4
    bne lbl_fn_801533C8_00000700
    li r3, 0x1
    b lbl_fn_801533C8_00000970
lbl_fn_801533C8_00000700:
    addi r7, r7, 0x8
lbl_fn_801533C8_00000704:
    cmplw r7, r6
    bne lbl_fn_801533C8_000006EC
    lwz r4, lbl_8087F430
    lwz r0, 0x54e4(r4)
    cmpwi r0, 0x9
    bne lbl_fn_801533C8_00000724
    li r3, 0x1
    b lbl_fn_801533C8_00000970
lbl_fn_801533C8_00000724:
    lwz r8, 0x38(r3)
    li r6, 0x0
    li r4, 0x0
    li r7, 0x0
    rlwinm r0, r8, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_801533C8_00000750
    clrlwi r0, r8, 31
    cmplwi r0, 0x1
    beq lbl_fn_801533C8_00000750
    li r7, 0x1
lbl_fn_801533C8_00000750:
    cmpwi r7, 0x0
    beq lbl_fn_801533C8_0000076C
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_801533C8_0000076C
    li r4, 0x1
lbl_fn_801533C8_0000076C:
    cmpwi r4, 0x0
    beq lbl_fn_801533C8_000007A0
    lwz r0, 0x55c(r3)
    li r4, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_801533C8_00000794
    lwz r0, 0x560(r3)
    cmpwi r0, 0x1c
    bne lbl_fn_801533C8_00000794
    li r4, 0x1
lbl_fn_801533C8_00000794:
    cmpwi r4, 0x0
    bne lbl_fn_801533C8_000007A0
    li r6, 0x1
lbl_fn_801533C8_000007A0:
    cmpwi r6, 0x0
    bne lbl_fn_801533C8_000007B0
    li r3, 0x1
    b lbl_fn_801533C8_00000970
lbl_fn_801533C8_000007B0:
    lwz r0, 0x12a8(r3)
    extrwi. r0, r0, 1, 22
    beq lbl_fn_801533C8_000007C4
    li r3, 0x1
    b lbl_fn_801533C8_00000970
lbl_fn_801533C8_000007C4:
    lwz r6, 0x48(r3)
    li r0, 0x1
    cmpwi r6, 0x1
    beq lbl_fn_801533C8_000007E0
    cmpwi r6, 0x4
    beq lbl_fn_801533C8_000007E0
    li r0, 0x0
lbl_fn_801533C8_000007E0:
    cmpwi r0, 0x0
    beq lbl_fn_801533C8_0000080C
    cmpwi r5, 0x0
    beq lbl_fn_801533C8_00000804
    lwz r0, 0xac(r5)
    rlwinm r4, r0, 0, 14, 14
    subis r0, r4, 0x2
    cmplwi r0, 0x0
    beq lbl_fn_801533C8_0000080C
lbl_fn_801533C8_00000804:
    li r3, 0x1
    b lbl_fn_801533C8_00000970
lbl_fn_801533C8_0000080C:
    lwz r0, 0x54c(r3)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_801533C8_00000824
    li r3, 0x1
    b lbl_fn_801533C8_00000970
lbl_fn_801533C8_00000824:
    lwz r0, 0x6d0(r3)
    cmplwi r0, 0x20
    blt lbl_fn_801533C8_00000838
    li r3, 0x1
    b lbl_fn_801533C8_00000970
lbl_fn_801533C8_00000838:
    cmpwi r5, 0x0
    beq lbl_fn_801533C8_00000858
    lwz r0, 0xac(r5)
    rlwinm r0, r0, 0, 17, 17
    cmpwi r0, 0x4000
    bne lbl_fn_801533C8_00000858
    li r3, 0x0
    b lbl_fn_801533C8_00000970
lbl_fn_801533C8_00000858:
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_801533C8_0000095C
    lwz r4, 0x560(r3)
    subi r0, r4, 0x5
    cmplwi r0, 0x89
    bgt lbl_fn_801533C8_0000096C
    lis r4, jumptable_8077AD5C@ha
    slwi r0, r0, 2
    addi r4, r4, jumptable_8077AD5C@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    cmpwi r6, 0x2
    beq lbl_fn_801533C8_0000096C
    li r3, 0x1
    b lbl_fn_801533C8_00000970
    li r3, 0x1
    b lbl_fn_801533C8_00000970
    cmpwi r6, 0x0
    bne lbl_fn_801533C8_0000096C
    li r3, 0x1
    b lbl_fn_801533C8_00000970
    cmpwi r5, 0x0
    beq lbl_fn_801533C8_000008DC
    mr r3, r31
    bl fn_8021A8D0
    cmpwi r3, 0x0
    bne lbl_fn_801533C8_0000096C
    mr r3, r31
    bl fn_8021A918
    cmpwi r3, 0x0
    bne lbl_fn_801533C8_0000096C
lbl_fn_801533C8_000008DC:
    li r3, 0x1
    b lbl_fn_801533C8_00000970
    cmpwi r5, 0x0
    beq lbl_fn_801533C8_0000091C
    mr r3, r31
    bl fn_8021A8D0
    cmpwi r3, 0x0
    bne lbl_fn_801533C8_0000096C
    mr r3, r31
    bl fn_8021A918
    cmpwi r3, 0x0
    bne lbl_fn_801533C8_0000096C
    mr r3, r31
    bl fn_8021A888
    cmpwi r3, 0x0
    bne lbl_fn_801533C8_0000096C
lbl_fn_801533C8_0000091C:
    lwz r0, 0x958(r30)
    rlwinm r0, r0, 0, 23, 23
    cmplwi r0, 0x100
    beq lbl_fn_801533C8_0000096C
    li r3, 0x1
    b lbl_fn_801533C8_00000970
    lwz r4, lbl_8087F9C0
    lwz r0, 0x28(r4)
    cmpwi r0, 0x0
    bne lbl_fn_801533C8_0000096C
    lfs f1, 0x2e4(r3)
    lfs f0, lbl_80881B0C
    fcmpo cr0, f1, f0
    mfcr r3
    srwi r3, r3, 31
    b lbl_fn_801533C8_00000970
lbl_fn_801533C8_0000095C:
    cmpwi r0, 0x5
    bne lbl_fn_801533C8_0000096C
    li r3, 0x1
    b lbl_fn_801533C8_00000970
lbl_fn_801533C8_0000096C:
    li r3, 0x0
lbl_fn_801533C8_00000970:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80153698(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    lfs f4, 0x2c(r4)
    stw r0, 0xa4(r1)
    li r0, 0x0
    lfs f0, 0x20(r4)
    addi r7, r1, 0xc
    stw r31, 0x9c(r1)
    mr r31, r5
    fsubs f2, f4, f0
    lfs f3, 0x28(r4)
    stw r30, 0x98(r1)
    mr r30, r4
    lfs f0, 0x1c(r4)
    stw r29, 0x94(r1)
    fsubs f4, f3, f0
    lfs f3, 0x24(r4)
    stw r28, 0x90(r1)
    addi r28, r1, 0x18
    lfs f0, 0x18(r4)
    mr r29, r3
    fsubs f0, f3, f0
    lwz r6, 0x12a4(r3)
    stfs f4, 0x10(r1)
    mr r4, r28
    oris r6, r6, 0x8000
    stfs f0, 0xc(r1)
    stw r6, 0x12a4(r3)
    psq_l f1, 0x0(r7), 0, 0
    stw r0, 0xc48(r3)
    mr r3, r28
    stfs f2, 0x14(r1)
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x20(r1)
    bl fn_805F98D0
    lwz r9, 0x34(r30)
    addi r5, r29, 0xc14
    psq_l f1, 0x0(r28), 0, 0
    addi r10, r29, 0xc20
    lfs f2, 0x20(r1)
    neg r0, r9
    stfs f2, 0xc1c(r29)
    or r3, r0, r9
    lfs f2, 0x20(r30)
    addi r11, r29, 0xc2c
    psq_st f1, 0x0(r5), 0, 0
    addi r4, r1, 0x40
    psq_l f1, 0x18(r30), 0, 0
    addi r12, r1, 0x4c
    psq_st f1, 0x0(r10), 0, 0
    addi r5, r1, 0x30
    lwz r0, 0x12a4(r29)
    rlwimi r0, r3, 31, 1, 1
    stfs f2, 0xc28(r29)
    addi r3, r29, 0x528
    lwz r8, 0x30(r30)
    ori r0, r0, 0x4000
    psq_l f1, 0x24(r30), 0, 0
    lfs f2, 0x2c(r30)
    lwz r7, 0x38(r30)
    lwz r6, 0x3c(r30)
    psq_st f1, 0x0(r11), 0, 0
    psq_l f1, 0x0(r10), 0, 0
    stfs f2, 0xc34(r29)
    lfs f2, 0xc28(r29)
    stw r8, 0xc44(r29)
    stw r9, 0xc40(r29)
    stw r7, 0xc38(r29)
    stw r6, 0xc3c(r29)
    stw r0, 0x12a4(r29)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x48(r1)
    psq_l f1, 0x0(r11), 0, 0
    lfs f2, 0xc34(r29)
    stfs f2, 0x54(r1)
    psq_st f1, 0x0(r12), 0, 0
    bl fn_80050A1C
    addi r3, r1, 0x30
    lfs f2, 0x38(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x58
    psq_st f1, 0x528(r29), 0, 0
    li r4, 0x79
    lfs f3, lbl_8088196C
    stfs f2, 0x530(r29)
    lfs f0, lbl_80881964
    stfs f3, 0x24(r1)
    stfs f3, 0x28(r1)
    stfs f0, 0x2c(r1)
    lfs f1, 0x538(r29)
    bl fn_805F8E70
    addi r4, r1, 0x24
    addi r3, r1, 0x58
    mr r5, r4
    bl fn_805F93C0
    addi r3, r1, 0x24
    addi r4, r29, 0xc14
    bl fn_805F9990
    lfs f0, lbl_8088196C
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_80153698_00000B30
    lwz r0, 0x12a4(r29)
    oris r0, r0, 0x2000
    stw r0, 0x12a4(r29)
    b lbl_fn_80153698_00000B3C
lbl_fn_80153698_00000B30:
    lwz r0, 0x12a4(r29)
    rlwinm r0, r0, 0, 3, 1
    stw r0, 0x12a4(r29)
lbl_fn_80153698_00000B3C:
    lwz r3, lbl_8087F430
    lwz r6, 0x10d8(r3)
    cmpwi r6, 0x0
    beq lbl_fn_80153698_00000B8C
    lwz r0, 0xc44(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80153698_00000B8C
    lwz r3, 0xc38(r29)
    li r5, 0x1
    lwz r4, 0xb0(r6)
    subi r0, r3, 0x1
    slwi r0, r0, 6
    add r3, r4, r0
    stw r5, 0x3c(r3)
    lwz r3, 0xc3c(r29)
    lwz r4, 0xb0(r6)
    subi r0, r3, 0x1
    slwi r0, r0, 6
    add r3, r4, r0
    stw r5, 0x3c(r3)
lbl_fn_80153698_00000B8C:
    cmpwi r31, 0x0
    bne lbl_fn_80153698_00000C68
    lwz r3, 0x12a4(r29)
    li r4, 0x1
    lfs f0, lbl_80881964
    extrwi. r0, r3, 1, 1
    stw r4, 0x3fc(r29)
    stfs f0, 0x2fc(r29)
    beq lbl_fn_80153698_00000BE8
    extrwi. r0, r3, 1, 2
    addi r3, r29, 0xb0
    li r4, 0x0
    beq lbl_fn_80153698_00000BC8
    lwz r5, 0x498(r29)
    b lbl_fn_80153698_00000BCC
lbl_fn_80153698_00000BC8:
    lwz r5, 0x49c(r29)
lbl_fn_80153698_00000BCC:
    lfs f1, lbl_8088196C
    li r6, 0x1
    lfs f2, lbl_80881994
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_80153698_00000C1C
lbl_fn_80153698_00000BE8:
    extrwi. r0, r3, 1, 2
    addi r3, r29, 0xb0
    li r4, 0x0
    beq lbl_fn_80153698_00000C00
    lwz r5, 0x4a0(r29)
    b lbl_fn_80153698_00000C04
lbl_fn_80153698_00000C00:
    lwz r5, 0x4a4(r29)
lbl_fn_80153698_00000C04:
    lfs f1, lbl_8088196C
    li r6, 0x1
    lfs f2, lbl_80881994
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
lbl_fn_80153698_00000C1C:
    lis r4, lbl_80737490@ha
    lfs f1, lbl_80881964
    addi r4, r4, lbl_80737490@l
    addi r3, r1, 0x8
    lwz r4, 0xc(r4)
    addi r5, r29, 0x528
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    lwz r3, lbl_8087F0A8
    lwz r0, 0x3d8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80153698_00000C68
    mr r3, r29
    li r4, 0x1
    bl fn_80164DCC
lbl_fn_80153698_00000C68:
    lwz r0, 0x48(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80153698_00000CB0
    lwz r3, lbl_8087F430
    li r4, 0xed
    bl fn_80370174
    cmpwi r3, 0x0
    bne lbl_fn_80153698_00000CB0
    lwz r3, lbl_8087F430
    li r4, 0xea
    bl fn_80370174
    cmpwi r3, 0x1
    bne lbl_fn_80153698_00000CB0
    lwz r3, lbl_8087F430
    li r4, 0xed
    li r5, 0x1
    li r6, 0x0
    bl fn_80370320
lbl_fn_80153698_00000CB0:
    lwz r0, 0xa4(r1)
    lwz r31, 0x9c(r1)
    lwz r30, 0x98(r1)
    lwz r29, 0x94(r1)
    lwz r28, 0x90(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_801539E0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x12a4(r3)
    clrlwi r0, r0, 2
    stw r0, 0x12a4(r3)
    lwz r4, lbl_8087F430
    lwz r5, 0x10d8(r4)
    cmpwi r5, 0x0
    beq lbl_fn_801539E0_00000D48
    lwz r4, 0xc38(r3)
    cmpwi r4, 0x0
    ble lbl_fn_801539E0_00000D48
    lwz r0, 0xc3c(r3)
    cmpwi r0, 0x0
    ble lbl_fn_801539E0_00000D48
    subi r0, r4, 0x1
    lwz r4, 0xb0(r5)
    slwi r0, r0, 6
    li r6, 0x0
    add r4, r4, r0
    stw r6, 0x3c(r4)
    lwz r4, 0xc3c(r3)
    lwz r5, 0xb0(r5)
    subi r0, r4, 0x1
    slwi r0, r0, 6
    add r4, r5, r0
    stw r6, 0x3c(r4)
lbl_fn_801539E0_00000D48:
    lwz r5, 0x48(r3)
    cmpwi r5, 0x0
    bne lbl_fn_801539E0_00000D7C
    lwz r4, lbl_8087F0A8
    lwz r0, 0x278(r4)
    cmpwi r0, 0x0
    beq lbl_fn_801539E0_00000D7C
    lwz r4, 0x5c(r3)
    lwz r0, 0x11c(r4)
    cmpwi r0, 0x1
    bne lbl_fn_801539E0_00000D7C
    li r0, 0x1
    b lbl_fn_801539E0_00000D9C
lbl_fn_801539E0_00000D7C:
    cmpwi r5, 0x0
    bne lbl_fn_801539E0_00000D98
    lwz r0, 0x12a8(r3)
    extrwi. r0, r0, 1, 14
    beq lbl_fn_801539E0_00000D98
    li r0, 0x1
    b lbl_fn_801539E0_00000D9C
lbl_fn_801539E0_00000D98:
    li r0, 0x0
lbl_fn_801539E0_00000D9C:
    cmpwi r0, 0x0
    beq lbl_fn_801539E0_00000E20
    lwz r3, lbl_8087F430
    li r4, 0x25
    bl fn_80370174
    cmpwi r3, 0x1
    blt lbl_fn_801539E0_00000E00
    lwz r3, 0x648(r31)
    cmpwi r3, 0x0
    beq lbl_fn_801539E0_00000DCC
    li r4, 0x1
    bl fn_80044E0C
lbl_fn_801539E0_00000DCC:
    lwz r3, 0x64c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_801539E0_00000DE0
    li r4, 0x1
    bl fn_80044E0C
lbl_fn_801539E0_00000DE0:
    li r0, 0x0
    li r3, -0x1
    stw r3, 0x674(r31)
    mr r3, r31
    stw r0, 0x648(r31)
    stw r0, 0x64c(r31)
    bl fn_8014C228
    b lbl_fn_801539E0_00000E20
lbl_fn_801539E0_00000E00:
    lwz r0, 0x674(r31)
    cmpwi r0, 0x0
    blt lbl_fn_801539E0_00000E20
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8014DEE4
lbl_fn_801539E0_00000E20:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80153B44(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    addi r11, r1, 0xd0
    stfd f31, 0x100(r1)
    psq_st f31, 0x108(r1), 0, 0
    stfd f30, 0xf0(r1)
    psq_st f30, 0xf8(r1), 0, 0
    stfd f29, 0xe0(r1)
    psq_st f29, 0xe8(r1), 0, 0
    stfd f28, 0xd0(r1)
    psq_st f28, 0xd8(r1), 0, 0
    bl _savegpr_26
    lwz r0, 0xc44(r3)
    mr r30, r3
    li r31, 0x0
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_80153B44_00000EC8
    lfs f3, 0x530(r3)
    lfs f0, 0xc28(r3)
    lfs f5, 0x52c(r3)
    fsubs f6, f3, f0
    lfs f4, 0xc24(r3)
    lfs f3, 0x528(r3)
    lfs f0, 0xc20(r3)
    fsubs f4, f5, f4
    addi r3, r1, 0x74
    fsubs f0, f3, f0
    stfs f4, 0x78(r1)
    stfs f0, 0x74(r1)
    stfs f6, 0x7c(r1)
    bl fn_805F9920
    lfs f0, lbl_808819B0
    fcmpo cr0, f1, f0
    bge lbl_fn_80153B44_00000EC8
    li r31, 0x1
lbl_fn_80153B44_00000EC8:
    lwz r0, 0xc44(r30)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_80153B44_00000F20
    lfs f3, 0x530(r30)
    addi r3, r1, 0x68
    lfs f0, 0xc34(r30)
    lfs f5, 0x52c(r30)
    fsubs f6, f3, f0
    lfs f4, 0xc30(r30)
    lfs f3, 0x528(r30)
    lfs f0, 0xc2c(r30)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x6c(r1)
    stfs f0, 0x68(r1)
    stfs f6, 0x70(r1)
    bl fn_805F9920
    lfs f0, lbl_808819B0
    fcmpo cr0, f1, f0
    bge lbl_fn_80153B44_00000F20
    li r31, 0x2
lbl_fn_80153B44_00000F20:
    cmpwi r31, 0x0
    bne lbl_fn_80153B44_00000F3C
    lwz r0, 0xc44(r30)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_80153B44_00000F3C
    li r31, 0x3
lbl_fn_80153B44_00000F3C:
    lfs f28, lbl_808819C0
    addi r28, r1, 0x5c
    lfs f29, lbl_8088196C
    addi r27, r1, 0x50
    lfs f30, lbl_80881964
    li r26, 0x1
    lfs f31, lbl_808819F8
    lis r29, 0x8000
    b lbl_fn_80153B44_0000124C
lbl_fn_80153B44_00000F60:
    cmpwi r31, 0x0
    li r26, 0x0
    beq lbl_fn_80153B44_0000124C
    lwz r0, 0x48(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80153B44_0000124C
    psq_l f1, 0x528(r30), 0, 0
    cmpwi r31, 0x1
    lfs f2, 0x530(r30)
    stfs f2, 0x64(r1)
    psq_st f1, 0x0(r28), 0, 0
    bne lbl_fn_80153B44_00000FDC
    lfs f4, 0xc1c(r30)
    frsp f0, f2
    lfs f3, 0xc18(r30)
    fmuls f5, f4, f28
    lfs f4, 0xc14(r30)
    fmuls f6, f3, f28
    lfs f3, 0x60(r1)
    fmuls f7, f4, f28
    lfs f4, 0x5c(r1)
    fsubs f3, f3, f6
    stfs f7, 0x44(r1)
    fsubs f4, f4, f7
    fsubs f0, f0, f5
    stfs f6, 0x48(r1)
    stfs f5, 0x4c(r1)
    stfs f4, 0x5c(r1)
    stfs f3, 0x60(r1)
    stfs f0, 0x64(r1)
    b lbl_fn_80153B44_0000102C
lbl_fn_80153B44_00000FDC:
    cmpwi r31, 0x2
    bne lbl_fn_80153B44_0000102C
    lfs f4, 0xc1c(r30)
    frsp f0, f2
    lfs f3, 0xc18(r30)
    fmuls f5, f4, f28
    lfs f4, 0xc14(r30)
    fmuls f6, f3, f28
    lfs f3, 0x60(r1)
    fmuls f7, f4, f28
    lfs f4, 0x5c(r1)
    fadds f3, f3, f6
    stfs f7, 0x38(r1)
    fadds f4, f4, f7
    fadds f0, f0, f5
    stfs f6, 0x3c(r1)
    stfs f5, 0x40(r1)
    stfs f4, 0x5c(r1)
    stfs f3, 0x60(r1)
    stfs f0, 0x64(r1)
lbl_fn_80153B44_0000102C:
    lwz r0, 0x12a4(r30)
    li r3, 0x0
    extrwi. r0, r0, 1, 1
    beq lbl_fn_80153B44_00001048
    cmpwi r31, 0x3
    beq lbl_fn_80153B44_00001048
    li r3, 0x1
lbl_fn_80153B44_00001048:
    cmpwi r3, 0x0
    beq lbl_fn_80153B44_00001058
    lfs f3, lbl_808819C0
    b lbl_fn_80153B44_0000105C
lbl_fn_80153B44_00001058:
    lfs f3, lbl_80881A88
lbl_fn_80153B44_0000105C:
    lfs f0, 0x60(r1)
    addi r3, r1, 0x80
    stfs f29, 0x20(r1)
    li r4, 0x79
    fadds f0, f0, f3
    stfs f29, 0x24(r1)
    stfs f0, 0x60(r1)
    stfs f30, 0x28(r1)
    lfs f1, 0x538(r30)
    bl fn_805F8E70
    addi r4, r1, 0x20
    addi r3, r1, 0x80
    mr r5, r4
    bl fn_805F93C0
    lfs f4, 0x28(r1)
    addi r5, r1, 0x5c
    lfs f3, 0x24(r1)
    addi r6, r1, 0x50
    fmuls f5, f4, f31
    lfs f0, 0x20(r1)
    fmuls f6, f3, f31
    lfs f4, 0x64(r1)
    fmuls f7, f0, f31
    lfs f3, 0x60(r1)
    lfs f0, 0x5c(r1)
    fadds f4, f4, f5
    fadds f3, f3, f6
    stfs f7, 0x2c(r1)
    fadds f0, f0, f7
    lwz r3, lbl_8087EE98
    stfs f6, 0x30(r1)
    addi r7, r29, 0x6
    stfs f5, 0x34(r1)
    li r4, 0x0
    li r8, 0x0
    li r9, 0x0
    stfs f0, 0x50(r1)
    stfs f3, 0x54(r1)
    stfs f4, 0x58(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_80153B44_00001128
    lwz r0, 0x12a4(r30)
    extrwi. r0, r0, 1, 1
    beq lbl_fn_80153B44_00001124
    cmpwi r31, 0x3
    beq lbl_fn_80153B44_00001124
    li r26, 0x1
    li r31, 0x3
    b lbl_fn_80153B44_00001128
lbl_fn_80153B44_00001124:
    li r31, 0x0
lbl_fn_80153B44_00001128:
    subi r0, r31, 0x1
    cmplwi r0, 0x1
    bgt lbl_fn_80153B44_0000124C
    lfs f2, 0x530(r30)
    cmpwi r31, 0x1
    psq_l f1, 0x528(r30), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    lfs f0, 0x60(r1)
    stfs f2, 0x64(r1)
    fadds f0, f0, f28
    stfs f2, 0x58(r1)
    stfs f0, 0x60(r1)
    psq_l f1, 0x0(r28), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    bne lbl_fn_80153B44_000011B0
    lfs f4, 0xc1c(r30)
    frsp f0, f2
    lfs f3, 0xc18(r30)
    fmuls f5, f4, f28
    lfs f4, 0xc14(r30)
    fmuls f6, f3, f28
    lfs f3, 0x54(r1)
    fmuls f7, f4, f28
    lfs f4, 0x50(r1)
    fsubs f3, f3, f6
    stfs f7, 0x14(r1)
    fsubs f4, f4, f7
    fsubs f0, f0, f5
    stfs f6, 0x18(r1)
    stfs f5, 0x1c(r1)
    stfs f4, 0x50(r1)
    stfs f3, 0x54(r1)
    stfs f0, 0x58(r1)
    b lbl_fn_80153B44_00001200
lbl_fn_80153B44_000011B0:
    cmpwi r31, 0x2
    bne lbl_fn_80153B44_00001200
    lfs f4, 0xc1c(r30)
    frsp f0, f2
    lfs f3, 0xc18(r30)
    fmuls f5, f4, f28
    lfs f4, 0xc14(r30)
    fmuls f6, f3, f28
    lfs f3, 0x54(r1)
    fmuls f7, f4, f28
    lfs f4, 0x50(r1)
    fadds f3, f3, f6
    stfs f7, 0x8(r1)
    fadds f4, f4, f7
    fadds f0, f0, f5
    stfs f6, 0xc(r1)
    stfs f5, 0x10(r1)
    stfs f4, 0x50(r1)
    stfs f3, 0x54(r1)
    stfs f0, 0x58(r1)
lbl_fn_80153B44_00001200:
    lwz r3, lbl_8087EE98
    addi r5, r1, 0x5c
    addi r6, r1, 0x50
    addi r7, r29, 0x6
    li r4, 0x0
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_80153B44_0000124C
    lwz r0, 0x12a4(r30)
    extrwi. r0, r0, 1, 1
    beq lbl_fn_80153B44_00001248
    cmpwi r31, 0x3
    beq lbl_fn_80153B44_00001248
    li r26, 0x1
    li r31, 0x3
    b lbl_fn_80153B44_0000124C
lbl_fn_80153B44_00001248:
    li r31, 0x0
lbl_fn_80153B44_0000124C:
    cmpwi r26, 0x0
    bne lbl_fn_80153B44_00000F60
    psq_l f31, 0x108(r1), 0, 0
    mr r3, r31
    lfd f31, 0x100(r1)
    psq_l f30, 0xf8(r1), 0, 0
    lfd f30, 0xf0(r1)
    psq_l f29, 0xe8(r1), 0, 0
    lfd f29, 0xe0(r1)
    psq_l f28, 0xd8(r1), 0, 0
    lfd f28, 0xd0(r1)
    addi r11, r1, 0xd0
    bl _restgpr_26
    lwz r0, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_80153FA0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80153B44
    mr r4, r3
    mr r3, r31
    bl fn_80153FD8
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80153FD8(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    cmpwi r4, 0x1
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    mr r31, r3
    stw r30, 0x48(r1)
    stw r4, 0xc48(r3)
    bne lbl_fn_80153FD8_000012FC
    lwz r0, 0x12a4(r3)
    rlwinm r0, r0, 0, 3, 1
    stw r0, 0x12a4(r3)
    b lbl_fn_80153FD8_00001310
lbl_fn_80153FD8_000012FC:
    cmpwi r4, 0x2
    bne lbl_fn_80153FD8_00001310
    lwz r0, 0x12a4(r3)
    oris r0, r0, 0x2000
    stw r0, 0x12a4(r3)
lbl_fn_80153FD8_00001310:
    lwz r0, 0xc48(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80153FD8_00001618
    lwz r5, 0x48(r3)
    cmpwi r5, 0x0
    bne lbl_fn_80153FD8_00001350
    lwz r4, lbl_8087F0A8
    lwz r0, 0x278(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80153FD8_00001350
    lwz r4, 0x5c(r3)
    lwz r0, 0x11c(r4)
    cmpwi r0, 0x1
    bne lbl_fn_80153FD8_00001350
    li r0, 0x1
    b lbl_fn_80153FD8_00001370
lbl_fn_80153FD8_00001350:
    cmpwi r5, 0x0
    bne lbl_fn_80153FD8_0000136C
    lwz r0, 0x12a8(r3)
    extrwi. r0, r0, 1, 14
    beq lbl_fn_80153FD8_0000136C
    li r0, 0x1
    b lbl_fn_80153FD8_00001370
lbl_fn_80153FD8_0000136C:
    li r0, 0x0
lbl_fn_80153FD8_00001370:
    cmpwi r0, 0x0
    beq lbl_fn_80153FD8_000013CC
    lwz r0, 0x674(r3)
    cmpwi r0, 0x0
    bge lbl_fn_80153FD8_000013B8
    lwz r3, lbl_8087F430
    li r4, 0x25
    bl fn_80370174
    cmpwi r3, 0x1
    beq lbl_fn_80153FD8_000013B8
    lwz r3, lbl_8087F430
    li r4, 0x25
    bl fn_80370174
    cmpwi r3, 0x2
    bne lbl_fn_80153FD8_000013CC
    bl fn_8013539C
    cmpwi r3, 0x0
    beq lbl_fn_80153FD8_000013CC
lbl_fn_80153FD8_000013B8:
    mr r3, r31
    li r4, 0x1
    li r5, 0x0
    li r6, 0x0
    bl fn_8014DEE4
lbl_fn_80153FD8_000013CC:
    lwz r0, 0xc48(r31)
    li r3, 0x1
    lfs f0, lbl_80881964
    cmpwi r0, 0x3
    stw r3, 0x3fc(r31)
    stfs f0, 0x2fc(r31)
    bne lbl_fn_80153FD8_00001554
    lwz r0, 0x48(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80153FD8_00001518
    lfs f2, 0x530(r31)
    addi r3, r1, 0x30
    psq_l f1, 0x528(r31), 0, 0
    addi r4, r1, 0x24
    psq_st f1, 0x0(r3), 0, 0
    lfs f0, lbl_808819C0
    lfs f3, 0x34(r1)
    stfs f2, 0x38(r1)
    fadds f0, f3, f0
    stfs f2, 0x2c(r1)
    stfs f0, 0x34(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lwz r0, 0x12a4(r31)
    extrwi. r0, r0, 1, 2
    beq lbl_fn_80153FD8_00001484
    lfs f4, 0xc1c(r31)
    frsp f0, f2
    lfs f5, lbl_80881B0C
    lfs f3, 0xc18(r31)
    fmuls f6, f4, f5
    lfs f4, 0xc14(r31)
    fmuls f7, f3, f5
    lfs f3, 0x28(r1)
    fmuls f5, f4, f5
    lfs f4, 0x24(r1)
    fadds f3, f3, f7
    stfs f5, 0x18(r1)
    fadds f4, f4, f5
    fadds f0, f0, f6
    stfs f7, 0x1c(r1)
    stfs f6, 0x20(r1)
    stfs f4, 0x24(r1)
    stfs f3, 0x28(r1)
    stfs f0, 0x2c(r1)
    b lbl_fn_80153FD8_000014D0
lbl_fn_80153FD8_00001484:
    lfs f4, 0xc1c(r31)
    frsp f0, f2
    lfs f5, lbl_80881B0C
    lfs f3, 0xc18(r31)
    fmuls f6, f4, f5
    lfs f4, 0xc14(r31)
    fmuls f7, f3, f5
    lfs f3, 0x28(r1)
    fmuls f5, f4, f5
    lfs f4, 0x24(r1)
    fsubs f3, f3, f7
    stfs f5, 0xc(r1)
    fsubs f4, f4, f5
    fsubs f0, f0, f6
    stfs f7, 0x10(r1)
    stfs f6, 0x14(r1)
    stfs f4, 0x24(r1)
    stfs f3, 0x28(r1)
    stfs f0, 0x2c(r1)
lbl_fn_80153FD8_000014D0:
    lwz r30, lbl_8087EE98
    mr r3, r31
    bl fn_80179D44
    oris r7, r3, 0x8000
    mr r3, r30
    addi r5, r1, 0x30
    addi r6, r1, 0x24
    li r4, 0x0
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_80153FD8_00001518
    lwz r3, 0x12a4(r31)
    extrwi r0, r3, 1, 2
    cntlzw r0, r0
    rlwimi r3, r0, 24, 2, 2
    stw r3, 0x12a4(r31)
lbl_fn_80153FD8_00001518:
    lwz r0, 0x12a4(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    extrwi. r0, r0, 1, 2
    beq lbl_fn_80153FD8_00001534
    lwz r5, 0x4c8(r31)
    b lbl_fn_80153FD8_00001538
lbl_fn_80153FD8_00001534:
    lwz r5, 0x4cc(r31)
lbl_fn_80153FD8_00001538:
    lfs f1, lbl_8088196C
    li r6, 0x1
    lfs f2, lbl_80881994
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_80153FD8_000015CC
lbl_fn_80153FD8_00001554:
    lwz r3, 0x12a4(r31)
    extrwi. r0, r3, 1, 1
    beq lbl_fn_80153FD8_00001598
    extrwi. r0, r3, 1, 2
    addi r3, r31, 0xb0
    li r4, 0x0
    beq lbl_fn_80153FD8_00001578
    lwz r5, 0x4b8(r31)
    b lbl_fn_80153FD8_0000157C
lbl_fn_80153FD8_00001578:
    lwz r5, 0x4bc(r31)
lbl_fn_80153FD8_0000157C:
    lfs f1, lbl_8088196C
    li r6, 0x1
    lfs f2, lbl_80881994
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_80153FD8_000015CC
lbl_fn_80153FD8_00001598:
    extrwi. r0, r3, 1, 2
    addi r3, r31, 0xb0
    li r4, 0x0
    beq lbl_fn_80153FD8_000015B0
    lwz r5, 0x4c0(r31)
    b lbl_fn_80153FD8_000015B4
lbl_fn_80153FD8_000015B0:
    lwz r5, 0x4c4(r31)
lbl_fn_80153FD8_000015B4:
    lfs f1, lbl_8088196C
    li r6, 0x1
    lfs f2, lbl_80881994
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
lbl_fn_80153FD8_000015CC:
    lis r4, lbl_80737490@ha
    lfs f1, lbl_80881964
    addi r4, r4, lbl_80737490@l
    addi r3, r1, 0x8
    lwz r4, 0x10(r4)
    addi r5, r31, 0x528
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x4
    li r6, 0x20
    bl fn_8023A02C
    li r3, 0x1
    b lbl_fn_80153FD8_0000161C
lbl_fn_80153FD8_00001618:
    li r3, 0x0
lbl_fn_80153FD8_0000161C:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80154344(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r4, lbl_8087F430
    lwz r5, 0x868(r4)
    cmpwi r5, 0x3
    bne lbl_fn_80154344_00001670
    lwz r0, 0x86c(r4)
    cmpw r5, r0
    bne lbl_fn_80154344_00001670
    lwz r0, 0x12a4(r3)
    rlwinm r0, r0, 0, 18, 16
    stw r0, 0x12a4(r3)
lbl_fn_80154344_00001670:
    lwz r5, 0x48(r3)
    li r0, 0x0
    stw r0, 0xc48(r3)
    cmpwi r5, 0x0
    bne lbl_fn_80154344_000016AC
    lwz r4, lbl_8087F0A8
    lwz r0, 0x278(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80154344_000016AC
    lwz r4, 0x5c(r3)
    lwz r0, 0x11c(r4)
    cmpwi r0, 0x1
    bne lbl_fn_80154344_000016AC
    li r0, 0x1
    b lbl_fn_80154344_000016CC
lbl_fn_80154344_000016AC:
    cmpwi r5, 0x0
    bne lbl_fn_80154344_000016C8
    lwz r0, 0x12a8(r3)
    extrwi. r0, r0, 1, 14
    beq lbl_fn_80154344_000016C8
    li r0, 0x1
    b lbl_fn_80154344_000016CC
lbl_fn_80154344_000016C8:
    li r0, 0x0
lbl_fn_80154344_000016CC:
    cmpwi r0, 0x0
    beq lbl_fn_80154344_00001750
    lwz r3, lbl_8087F430
    li r4, 0x25
    bl fn_80370174
    cmpwi r3, 0x1
    blt lbl_fn_80154344_00001730
    lwz r3, 0x648(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80154344_000016FC
    li r4, 0x1
    bl fn_80044E0C
lbl_fn_80154344_000016FC:
    lwz r3, 0x64c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80154344_00001710
    li r4, 0x1
    bl fn_80044E0C
lbl_fn_80154344_00001710:
    li r0, 0x0
    li r3, -0x1
    stw r3, 0x674(r31)
    mr r3, r31
    stw r0, 0x648(r31)
    stw r0, 0x64c(r31)
    bl fn_8014C228
    b lbl_fn_80154344_00001750
lbl_fn_80154344_00001730:
    lwz r0, 0x674(r31)
    cmpwi r0, 0x0
    blt lbl_fn_80154344_00001750
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8014DEE4
lbl_fn_80154344_00001750:
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x4
    li r6, 0x20
    bl fn_8023A098
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80154488(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stfd f31, 0x70(r1)
    psq_st f31, 0x78(r1), 0, 0
    stw r31, 0x6c(r1)
    mr r31, r3
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 29
    bne lbl_fn_80154488_00001928
    lwz r6, 0xd1c(r3)
    cmpwi r6, 0x0
    bne lbl_fn_80154488_000017B8
    lwz r0, 0xd28(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80154488_00001928
lbl_fn_80154488_000017B8:
    lwz r0, 0x12a4(r3)
    srwi. r0, r0, 31
    beq lbl_fn_80154488_00001928
    lwz r4, 0xc44(r3)
    rlwinm r0, r4, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80154488_00001928
    clrlwi r0, r4, 30
    cmplwi r0, 0x3
    bne lbl_fn_80154488_00001928
    lwz r4, 0xd28(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80154488_00001848
    lwz r12, 0x0(r4)
    addi r3, r1, 0x2c
    lwz r12, 0x54(r12)
    mtctr r12
    bctrl
    lfs f3, 0x34(r1)
    addi r4, r1, 0x38
    lfs f0, 0x530(r31)
    addi r3, r1, 0x50
    lfs f5, 0x30(r1)
    fsubs f2, f3, f0
    lfs f4, 0x52c(r31)
    lfs f0, 0x528(r31)
    lfs f3, 0x2c(r1)
    fsubs f4, f5, f4
    stfs f2, 0x40(r1)
    fsubs f0, f3, f0
    stfs f4, 0x3c(r1)
    stfs f0, 0x38(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x58(r1)
    b lbl_fn_80154488_0000188C
lbl_fn_80154488_00001848:
    lfs f3, 0x530(r6)
    addi r5, r1, 0x20
    lfs f0, 0x530(r3)
    addi r4, r1, 0x50
    lfs f5, 0x52c(r6)
    fsubs f2, f3, f0
    lfs f4, 0x52c(r3)
    lfs f3, 0x528(r6)
    lfs f0, 0x528(r3)
    fsubs f4, f5, f4
    stfs f2, 0x28(r1)
    fsubs f0, f3, f0
    stfs f4, 0x24(r1)
    stfs f0, 0x20(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x58(r1)
lbl_fn_80154488_0000188C:
    addi r3, r1, 0x50
    mr r4, r3
    bl fn_805F98D0
    lfs f3, lbl_8088196C
    addi r3, r31, 0xc14
    lfs f0, lbl_80881964
    addi r4, r1, 0x14
    stfs f3, 0x14(r1)
    addi r5, r1, 0x44
    stfs f0, 0x18(r1)
    stfs f3, 0x1c(r1)
    bl fn_805F99B0
    addi r3, r1, 0x44
    mr r4, r3
    bl fn_805F98D0
    addi r3, r1, 0x44
    addi r4, r1, 0x50
    bl fn_805F9990
    fabs f0, f1
    lis r3, lbl_80737828@ha
    lfd f1, lbl_80737828@l(r3)
    frsp f31, f0
    bl fn_8068A850
    frsp f0, f1
    fcmpo cr0, f31, f0
    bge lbl_fn_80154488_00001928
    addi r3, r1, 0x44
    addi r4, r1, 0x50
    addi r5, r1, 0x8
    bl fn_805F99B0
    lfs f3, 0xc(r1)
    lfs f0, lbl_8088196C
    fcmpo cr0, f3, f0
    ble lbl_fn_80154488_00001920
    li r0, 0x2
    stw r0, 0xc80(r31)
    b lbl_fn_80154488_00001928
lbl_fn_80154488_00001920:
    li r0, 0x1
    stw r0, 0xc80(r31)
lbl_fn_80154488_00001928:
    lwz r0, 0x84(r1)
    psq_l f31, 0x78(r1), 0, 0
    lfd f31, 0x70(r1)
    lwz r31, 0x6c(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_80154654(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    stw r4, 0xc50(r3)
    mr r4, r5
    stw r5, 0xc54(r3)
    mr r3, r31
    bl fn_80204E04
    stw r3, 0x68(r30)
    mr r3, r30
    bl fn_8015487C
    lis r4, lbl_807374B8@ha
    slwi r0, r3, 2
    addi r4, r4, lbl_807374B8@l
    lwzx r4, r4, r0
    cmpwi r4, 0x0
    ble lbl_fn_80154654_000019A4
    mr r3, r31
    bl fn_80204E04
    stw r3, 0x70(r30)
lbl_fn_80154654_000019A4:
    mr r3, r31
    li r4, 0x251d
    bl fn_80204E04
    stw r3, 0x74(r30)
    mr r3, r31
    li r4, 0x2581
    bl fn_80204E04
    stw r3, 0x78(r30)
    mr r3, r30
    bl fn_80154C08
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
