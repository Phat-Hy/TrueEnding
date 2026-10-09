#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_26(void);
extern void _savegpr_26(void);
extern void dtor_80084684(void);
extern void fn_80084320(void);
extern void fn_800897D8(void);
extern void fn_8008A76C(void);
extern void fn_8008AD4C(void);
extern void fn_8008BBD8(void);
extern void fn_80091CFC(void);
extern void fn_800D1D3C(void);
extern void fn_800D1E9C(void);
extern void fn_800D246C(void);
extern void fn_800D3FA4(void);
extern void fn_800D5738(void);
extern void fn_800D5808(void);
extern void fn_800E2A24(void);
extern void fn_800EF73C(void);
extern void fn_800F2BB8(void);
extern void fn_800F2BE4(void);
extern void fn_800F3490(void);
extern void fn_800F39A4(void);
extern void fn_800F3B4C(void);
extern void fn_80100BF0(void);
extern void fn_80108090(void);
extern void fn_80108150(void);
extern void fn_8010D808(void);
extern void fn_8010ED4C(void);
extern void fn_8010EE38(void);
extern void fn_80237518(void);
extern void fn_802375C4(void);
extern void fn_802377B8(void);
extern void fn_8023781C(void);
extern void fn_80441590(void);
extern void fn_80473E8C(void);
extern void fn_80478714(void);
extern void fn_80548D58(void);
extern void fn_8054A6EC(void);
extern void fn_8059AB9C(void);
extern void fn_806958E0(void);
extern void fn_806959D8(void);

/* External data declarations */
extern u8 lbl_80736040[];
extern u8 lbl_80779CE0[];
extern u8 lbl_80779DA0[];
extern u8 lbl_807C7850[];

/* Small data declarations */
extern u32 lbl_8087EF10;
extern u32 lbl_8087F048;
extern u32 lbl_8087F04C;
extern u32 lbl_808813B8;
extern u32 lbl_80881464;
extern u32 lbl_80881478;
extern u32 lbl_8088147C;
extern u32 lbl_80881480;
extern u32 lbl_80881484;
extern u32 lbl_80881488;
extern u32 lbl_8088148C;
extern u32 lbl_80881490;
extern u32 lbl_80881494;
extern u32 lbl_80881498;
extern u32 lbl_8088149C;
extern u32 lbl_808814A0;
extern u32 lbl_808814A4;
extern u32 lbl_808814A8;
extern u32 lbl_808814AC;
extern u32 lbl_808814B0;
extern u32 lbl_808814B4;

/* Function declarations */
void fn_800F1378(void);
void fn_800F13B0(void);
void fn_800F13BC(void);
void fn_800F1430(void);
void fn_800F1EE0(void);
void fn_800F1F38(void);
void fn_800F1F94(void);
void fn_800F26D4(void);
void fn_800F29D0(void);

asm void fn_800F1378(void)
{
    nofralloc
    lwz r0, 0x38(r3)
    li r5, 0x3
    lfs f0, lbl_808813B8
    li r4, 0x0
    rlwinm r0, r0, 0, 29, 29
    stw r5, 0x48(r3)
    cmplwi r0, 0x4
    stfs f0, 0x15c(r3)
    stw r4, 0x160(r3)
    beqlr
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    blr
}

asm void fn_800F13B0(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x170(r3)
    blr
}

asm void fn_800F13BC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_800F13BC_000000A0
    lwz r0, lbl_8087F048
    cmpwi r0, 0x0
    bne lbl_fn_800F13BC_000000A0
    lis r5, lbl_80736040@ha
    lis r3, 0x4
    addi r5, r5, lbl_80736040@l
    li r4, 0x1
    mr r6, r5
    subi r3, r3, 0x1c50
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_800F13BC_0000009C
    mr r4, r31
    bl fn_800F1430
lbl_fn_800F13BC_0000009C:
    stw r3, lbl_8087F048
lbl_fn_800F13BC_000000A0:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    lwz r3, lbl_8087F048
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800F1430(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x50
    stfd f31, 0x50(r1)
    psq_st f31, 0x58(r1), 0, 0
    bl _savegpr_26
    mr r31, r3
    bl fn_800D1D3C
    lis r3, lbl_80779DA0@ha
    li r26, 0x0
    addi r3, r3, lbl_80779DA0@l
    lis r4, fn_8010ED4C@ha
    lis r5, fn_8010EE38@ha
    stw r3, 0x0(r31)
    addi r3, r31, 0x150
    addi r4, r4, fn_8010ED4C@l
    stw r26, 0x48(r31)
    addi r5, r5, fn_8010EE38@l
    li r6, 0xa0
    li r7, 0x100
    stw r26, 0x14c(r31)
    bl fn_806958E0
    addis r3, r31, 0x1
    lis r4, fn_80441590@ha
    lis r5, fn_800F1EE0@ha
    li r6, 0xc8
    addi r4, r4, fn_80441590@l
    li r7, 0x20
    addi r5, r5, fn_800F1EE0@l
    subi r3, r3, 0x5eb0
    bl fn_806958E0
    addis r3, r31, 0x1
    lis r4, fn_8010D808@ha
    lis r5, fn_800F1F38@ha
    li r6, 0x21c
    addi r4, r4, fn_8010D808@l
    li r7, 0x8
    addi r5, r5, fn_800F1F38@l
    subi r3, r3, 0x45b0
    bl fn_806958E0
    addis r3, r31, 0x1
    stw r26, -0x34cc(r3)
    subi r3, r3, 0x3484
    bl fn_800D5738
    addis r3, r31, 0x1
    lfs f0, lbl_80881478
    subi r5, r3, 0x3410
    stw r26, -0x3454(r3)
    subi r4, r3, 0x3448
    cmplw r4, r5
    stfs f0, -0x3450(r3)
    stw r26, -0x344c(r3)
    bge lbl_fn_800F1430_000001B4
    addi r0, r5, 0x7
    subf r0, r4, r0
    srwi r0, r0, 3
    mtctr r0
    bge lbl_fn_800F1430_000001B4
lbl_fn_800F1430_000001A4:
    stfs f0, 0x0(r4)
    stw r26, 0x4(r4)
    addi r4, r4, 0x8
    bdnz lbl_fn_800F1430_000001A4
lbl_fn_800F1430_000001B4:
    addis r3, r31, 0x1
    lis r4, fn_80108090@ha
    lis r5, fn_80108150@ha
    li r6, 0x934
    addi r4, r4, fn_80108090@l
    li r7, 0x48
    addi r5, r5, fn_80108150@l
    subi r3, r3, 0x3410
    bl fn_806958E0
    addis r3, r31, 0x3
    li r26, 0x0
    li r0, 0x28
    stw r26, 0x63b0(r3)
    stw r26, 0x63b4(r3)
    stw r26, 0x63b8(r3)
    stw r0, 0x63bc(r3)
    addi r3, r3, 0x63c0
    bl fn_802377B8
    addis r3, r31, 0x3
    addi r3, r3, 0x63cc
    bl fn_802377B8
    addis r3, r31, 0x3
    addi r3, r3, 0x63d8
    bl fn_802377B8
    addis r3, r31, 0x3
    addi r3, r3, 0x63e4
    bl fn_802377B8
    addis r3, r31, 0x3
    lis r27, fn_80237518@ha
    lis r30, fn_802375C4@ha
    li r6, 0xc
    addi r4, r27, fn_80237518@l
    li r7, 0x15
    addi r5, r30, fn_802375C4@l
    addi r3, r3, 0x63f0
    bl fn_806958E0
    addis r3, r31, 0x3
    addi r3, r3, 0x64ec
    bl fn_802377B8
    addis r3, r31, 0x3
    lis r29, fn_802377B8@ha
    lis r28, fn_800EF73C@ha
    li r6, 0xc
    addi r4, r29, fn_802377B8@l
    li r7, 0x3
    addi r5, r28, fn_800EF73C@l
    addi r3, r3, 0x64f8
    bl fn_806958E0
    addis r3, r31, 0x3
    addi r4, r27, fn_80237518@l
    addi r5, r30, fn_802375C4@l
    li r6, 0xc
    li r7, 0x5
    addi r3, r3, 0x651c
    bl fn_806958E0
    addis r3, r31, 0x3
    addi r4, r27, fn_80237518@l
    addi r5, r30, fn_802375C4@l
    li r6, 0xc
    li r7, 0x5
    addi r3, r3, 0x6558
    bl fn_806958E0
    addis r3, r31, 0x3
    addi r4, r27, fn_80237518@l
    addi r5, r30, fn_802375C4@l
    li r6, 0xc
    li r7, 0x3
    addi r3, r3, 0x6594
    bl fn_806958E0
    addis r3, r31, 0x3
    addi r3, r3, 0x65b8
    bl fn_802377B8
    addis r3, r31, 0x3
    addi r3, r3, 0x65c4
    bl fn_802377B8
    addis r3, r31, 0x3
    addi r3, r3, 0x65d0
    bl fn_802377B8
    addis r3, r31, 0x3
    addi r3, r3, 0x65dc
    bl fn_802377B8
    addis r3, r31, 0x3
    addi r4, r29, fn_802377B8@l
    addi r5, r28, fn_800EF73C@l
    li r6, 0xc
    li r7, 0x7
    addi r3, r3, 0x65e8
    bl fn_806958E0
    addis r3, r31, 0x3
    addi r4, r29, fn_802377B8@l
    addi r5, r28, fn_800EF73C@l
    li r6, 0xc
    li r7, 0x1f
    addi r3, r3, 0x663c
    bl fn_806958E0
    addis r3, r31, 0x3
    li r0, 0x2
    addi r7, r3, 0x21c0
    stw r0, 0x67b0(r3)
    addi r7, r7, 0x67b8
    addi r5, r3, 0x6830
    cmplw r5, r7
    stw r26, 0x67b4(r3)
    stw r26, 0x6828(r3)
    sth r26, 0x682c(r3)
    sth r26, 0x682e(r3)
    bge lbl_fn_800F1430_00000448
    addi r6, r3, 0x1e00
    li r0, 0x0
    li r3, 0x0
    addi r6, r6, 0x67b8
    bgt lbl_fn_800F1430_00000378
    li r3, 0x1
lbl_fn_800F1430_00000378:
    cmpwi r3, 0x0
    beq lbl_fn_800F1430_00000384
    li r0, 0x1
lbl_fn_800F1430_00000384:
    cmpwi r0, 0x0
    beq lbl_fn_800F1430_00000414
    addi r3, r6, 0x3bf
    li r0, 0x3c0
    subf r3, r5, r3
    li r4, 0x0
    divwu r3, r3, r0
    mtctr r3
    cmplw r5, r6
    bge lbl_fn_800F1430_00000414
lbl_fn_800F1430_000003AC:
    stw r4, 0x70(r5)
    sth r4, 0x74(r5)
    sth r4, 0x76(r5)
    stw r4, 0xe8(r5)
    sth r4, 0xec(r5)
    sth r4, 0xee(r5)
    stw r4, 0x160(r5)
    sth r4, 0x164(r5)
    sth r4, 0x166(r5)
    stw r4, 0x1d8(r5)
    sth r4, 0x1dc(r5)
    sth r4, 0x1de(r5)
    stw r4, 0x250(r5)
    sth r4, 0x254(r5)
    sth r4, 0x256(r5)
    stw r4, 0x2c8(r5)
    sth r4, 0x2cc(r5)
    sth r4, 0x2ce(r5)
    stw r4, 0x340(r5)
    sth r4, 0x344(r5)
    sth r4, 0x346(r5)
    stw r4, 0x3b8(r5)
    sth r4, 0x3bc(r5)
    sth r4, 0x3be(r5)
    addi r5, r5, 0x3c0
    bdnz lbl_fn_800F1430_000003AC
lbl_fn_800F1430_00000414:
    addi r3, r7, 0x77
    li r0, 0x78
    subf r3, r5, r3
    li r4, 0x0
    divwu r3, r3, r0
    mtctr r3
    cmplw r5, r7
    bge lbl_fn_800F1430_00000448
lbl_fn_800F1430_00000434:
    stw r4, 0x70(r5)
    sth r4, 0x74(r5)
    sth r4, 0x76(r5)
    addi r5, r5, 0x78
    bdnz lbl_fn_800F1430_00000434
lbl_fn_800F1430_00000448:
    addis r26, r31, 0x4
    subi r26, r26, 0x7688
    mr r3, r26
    bl fn_80237518
    addi r3, r26, 0xc
    bl fn_80237518
    addis r26, r31, 0x4
    subi r26, r26, 0x7670
    mr r3, r26
    bl fn_80237518
    addi r3, r26, 0xc
    bl fn_80237518
    addis r26, r31, 0x4
    subi r26, r26, 0x7658
    mr r3, r26
    bl fn_80237518
    addi r3, r26, 0xc
    bl fn_80237518
    addis r3, r31, 0x4
    li r0, 0x1
    stw r0, -0x7640(r3)
    subi r3, r3, 0x763c
    bl fn_800D5738
    addis r3, r31, 0x4
    subi r3, r3, 0x760c
    bl fn_80237518
    addis r3, r31, 0x4
    li r28, 0x0
    lwz r0, -0x7524(r3)
    li r4, -0x1
    lfs f31, lbl_80881478
    lfs f11, lbl_80881484
    clrlwi r0, r0, 4
    lfs f7, lbl_80881494
    lfs f13, lbl_8088147C
    lfs f12, lbl_80881480
    lfs f10, lbl_80881488
    lfs f9, lbl_8088148C
    lfs f8, lbl_80881490
    lfs f6, lbl_80881498
    lfs f5, lbl_8088149C
    lfs f4, lbl_808814A0
    lfs f3, lbl_808814A4
    lfs f0, lbl_808814A8
    stw r28, -0x7600(r3)
    stfs f31, -0x75fc(r3)
    stw r28, -0x75f8(r3)
    stfs f13, -0x75f4(r3)
    stfs f12, -0x75f0(r3)
    stfs f11, -0x75ec(r3)
    stfs f31, -0x75e8(r3)
    stfs f11, -0x75e4(r3)
    stfs f10, -0x75e0(r3)
    stfs f9, -0x75dc(r3)
    stfs f31, -0x75d8(r3)
    stfs f31, -0x75d4(r3)
    stfs f31, -0x75d0(r3)
    stfs f31, -0x75cc(r3)
    stfs f8, -0x75c8(r3)
    stfs f7, -0x75c4(r3)
    stfs f7, -0x75c0(r3)
    stfs f6, -0x75bc(r3)
    stfs f5, -0x75b8(r3)
    stfs f4, -0x75b4(r3)
    stfs f3, -0x75b0(r3)
    stfs f0, -0x75ac(r3)
    stw r28, -0x75a8(r3)
    stw r28, -0x7540(r3)
    stw r28, -0x753c(r3)
    stw r28, -0x7538(r3)
    stw r28, -0x7534(r3)
    stw r28, -0x7530(r3)
    stw r4, -0x752c(r3)
    stw r0, -0x7524(r3)
    stw r4, -0x7528(r3)
    subi r3, r3, 0x75a4
    bl fn_800E2A24
    addis r3, r31, 0x4
    subi r3, r3, 0x750c
    bl fn_802377B8
    addis r3, r31, 0x4
    subi r3, r3, 0x7500
    bl fn_802377B8
    addis r3, r31, 0x4
    lis r30, fn_802377B8@ha
    lis r29, fn_800EF73C@ha
    li r6, 0xc
    addi r4, r30, fn_802377B8@l
    li r7, 0x3
    addi r5, r29, fn_800EF73C@l
    subi r3, r3, 0x74f4
    bl fn_806958E0
    addis r3, r31, 0x4
    subi r3, r3, 0x74d0
    bl fn_802377B8
    addis r3, r31, 0x4
    subi r3, r3, 0x74c4
    bl fn_802377B8
    addis r3, r31, 0x4
    subi r3, r3, 0x74b8
    bl fn_802377B8
    addis r3, r31, 0x4
    subi r3, r3, 0x74ac
    bl fn_802377B8
    addis r3, r31, 0x4
    subi r3, r3, 0x74a0
    bl fn_802377B8
    addis r3, r31, 0x4
    addi r4, r30, fn_802377B8@l
    addi r5, r29, fn_800EF73C@l
    li r6, 0xc
    li r7, 0x3
    subi r3, r3, 0x7494
    bl fn_806958E0
    addis r3, r31, 0x4
    addi r4, r30, fn_802377B8@l
    addi r5, r29, fn_800EF73C@l
    li r6, 0xc
    li r7, 0x3
    subi r3, r3, 0x7470
    bl fn_806958E0
    addis r3, r31, 0x4
    subi r3, r3, 0x744c
    bl fn_802377B8
    addis r3, r31, 0x4
    subi r3, r3, 0x7440
    bl fn_802377B8
    addis r3, r31, 0x4
    subi r3, r3, 0x7434
    bl fn_802377B8
    addis r3, r31, 0x4
    subi r3, r3, 0x7428
    bl fn_802377B8
    addis r3, r31, 0x4
    subi r3, r3, 0x741c
    bl fn_802377B8
    addis r3, r31, 0x4
    subi r3, r3, 0x7410
    bl fn_802377B8
    addis r3, r31, 0x4
    subi r3, r3, 0x7404
    bl fn_802377B8
    addis r3, r31, 0x4
    subi r3, r3, 0x73f8
    bl fn_802377B8
    addis r3, r31, 0x4
    subi r3, r3, 0x73ec
    bl fn_802377B8
    addis r3, r31, 0x4
    subi r3, r3, 0x73e0
    bl fn_802377B8
    addis r3, r31, 0x4
    subi r3, r3, 0x73d4
    bl fn_802377B8
    addis r3, r31, 0x4
    subi r3, r3, 0x73c8
    bl fn_802377B8
    addis r3, r31, 0x4
    subi r3, r3, 0x73bc
    bl fn_802377B8
    addis r3, r31, 0x4
    subi r3, r3, 0x73b0
    bl fn_802377B8
    addis r3, r31, 0x4
    subi r3, r3, 0x73a4
    bl fn_802377B8
    addis r3, r31, 0x4
    subi r3, r3, 0x7398
    bl fn_802377B8
    addis r3, r31, 0x4
    lfs f3, lbl_80881478
    subi r7, r3, 0x6e28
    lfs f0, lbl_80881494
    subi r5, r3, 0x7300
    li r0, 0x2
    cmplw r5, r7
    stw r28, -0x738c(r3)
    stfs f3, -0x7388(r3)
    stfs f3, -0x7384(r3)
    stfs f3, -0x7380(r3)
    stfs f3, -0x737c(r3)
    stfs f3, -0x7378(r3)
    stfs f0, -0x7374(r3)
    stw r28, -0x7370(r3)
    stw r28, -0x736c(r3)
    stw r28, -0x7368(r3)
    stw r28, -0x7364(r3)
    stb r28, -0x7360(r3)
    stw r28, -0x735c(r3)
    stw r28, -0x7358(r3)
    stw r28, -0x7354(r3)
    stw r28, -0x7350(r3)
    stb r28, -0x734c(r3)
    stw r28, -0x7348(r3)
    stw r28, -0x7344(r3)
    stw r28, -0x7340(r3)
    stw r28, -0x733c(r3)
    stb r28, -0x7338(r3)
    stw r28, -0x732c(r3)
    stw r0, -0x7328(r3)
    stw r28, -0x7324(r3)
    stfs f3, -0x7320(r3)
    stfs f3, -0x731c(r3)
    stfs f3, -0x7318(r3)
    stfs f3, -0x7314(r3)
    stfs f3, -0x7310(r3)
    stfs f3, -0x730c(r3)
    stfs f3, -0x7308(r3)
    stw r28, -0x7304(r3)
    bge lbl_fn_800F1430_00000988
    subi r0, r3, 0x7300
    subi r6, r7, 0x140
    cmplw r0, r7
    li r3, 0x0
    li r0, 0x0
    bgt lbl_fn_800F1430_000007AC
    li r3, 0x1
lbl_fn_800F1430_000007AC:
    cmpwi r3, 0x0
    beq lbl_fn_800F1430_000007B8
    li r0, 0x1
lbl_fn_800F1430_000007B8:
    cmpwi r0, 0x0
    beq lbl_fn_800F1430_00000930
    addi r3, r6, 0x13f
    li r0, 0x140
    subf r3, r5, r3
    lfs f0, lbl_80881478
    divwu r3, r3, r0
    li r4, 0x2
    li r0, 0x0
    mtctr r3
    cmplw r5, r6
    bge lbl_fn_800F1430_00000930
lbl_fn_800F1430_000007E8:
    stw r4, 0x0(r5)
    stw r0, 0x4(r5)
    stfs f0, 0x8(r5)
    stfs f0, 0xc(r5)
    stfs f0, 0x10(r5)
    stfs f0, 0x14(r5)
    stfs f0, 0x18(r5)
    stfs f0, 0x1c(r5)
    stfs f0, 0x20(r5)
    stw r0, 0x24(r5)
    stw r4, 0x28(r5)
    stw r0, 0x2c(r5)
    stfs f0, 0x30(r5)
    stfs f0, 0x34(r5)
    stfs f0, 0x38(r5)
    stfs f0, 0x3c(r5)
    stfs f0, 0x40(r5)
    stfs f0, 0x44(r5)
    stfs f0, 0x48(r5)
    stw r0, 0x4c(r5)
    stw r4, 0x50(r5)
    stw r0, 0x54(r5)
    stfs f0, 0x58(r5)
    stfs f0, 0x5c(r5)
    stfs f0, 0x60(r5)
    stfs f0, 0x64(r5)
    stfs f0, 0x68(r5)
    stfs f0, 0x6c(r5)
    stfs f0, 0x70(r5)
    stw r0, 0x74(r5)
    stw r4, 0x78(r5)
    stw r0, 0x7c(r5)
    stfs f0, 0x80(r5)
    stfs f0, 0x84(r5)
    stfs f0, 0x88(r5)
    stfs f0, 0x8c(r5)
    stfs f0, 0x90(r5)
    stfs f0, 0x94(r5)
    stfs f0, 0x98(r5)
    stw r0, 0x9c(r5)
    stw r4, 0xa0(r5)
    stw r0, 0xa4(r5)
    stfs f0, 0xa8(r5)
    stfs f0, 0xac(r5)
    stfs f0, 0xb0(r5)
    stfs f0, 0xb4(r5)
    stfs f0, 0xb8(r5)
    stfs f0, 0xbc(r5)
    stfs f0, 0xc0(r5)
    stw r0, 0xc4(r5)
    stw r4, 0xc8(r5)
    stw r0, 0xcc(r5)
    stfs f0, 0xd0(r5)
    stfs f0, 0xd4(r5)
    stfs f0, 0xd8(r5)
    stfs f0, 0xdc(r5)
    stfs f0, 0xe0(r5)
    stfs f0, 0xe4(r5)
    stfs f0, 0xe8(r5)
    stw r0, 0xec(r5)
    stw r4, 0xf0(r5)
    stw r0, 0xf4(r5)
    stfs f0, 0xf8(r5)
    stfs f0, 0xfc(r5)
    stfs f0, 0x100(r5)
    stfs f0, 0x104(r5)
    stfs f0, 0x108(r5)
    stfs f0, 0x10c(r5)
    stfs f0, 0x110(r5)
    stw r0, 0x114(r5)
    stw r4, 0x118(r5)
    stw r0, 0x11c(r5)
    stfs f0, 0x120(r5)
    stfs f0, 0x124(r5)
    stfs f0, 0x128(r5)
    stfs f0, 0x12c(r5)
    stfs f0, 0x130(r5)
    stfs f0, 0x134(r5)
    stfs f0, 0x138(r5)
    stw r0, 0x13c(r5)
    addi r5, r5, 0x140
    bdnz lbl_fn_800F1430_000007E8
lbl_fn_800F1430_00000930:
    addi r3, r7, 0x27
    li r0, 0x28
    subf r3, r5, r3
    lfs f0, lbl_80881478
    divwu r3, r3, r0
    li r4, 0x2
    li r0, 0x0
    mtctr r3
    cmplw r5, r7
    bge lbl_fn_800F1430_00000988
lbl_fn_800F1430_00000958:
    stw r4, 0x0(r5)
    stw r0, 0x4(r5)
    stfs f0, 0x8(r5)
    stfs f0, 0xc(r5)
    stfs f0, 0x10(r5)
    stfs f0, 0x14(r5)
    stfs f0, 0x18(r5)
    stfs f0, 0x1c(r5)
    stfs f0, 0x20(r5)
    stw r0, 0x24(r5)
    addi r5, r5, 0x28
    bdnz lbl_fn_800F1430_00000958
lbl_fn_800F1430_00000988:
    addis r30, r31, 0x4
    li r0, 0x0
    stw r0, 0x0(r7)
    subi r26, r30, 0x6e20
    subi r29, r30, 0x1d20
    stw r0, -0x6e24(r30)
lbl_fn_800F1430_000009A0:
    mr r3, r26
    li r4, 0x0
    li r5, 0x120
    bl memset
    addi r26, r26, 0x120
    cmplw r26, r29
    blt lbl_fn_800F1430_000009A0
    lfs f0, lbl_808814AC
    li r29, 0x0
    mr r3, r30
    lis r4, fn_802377B8@ha
    lis r5, fn_800EF73C@ha
    stw r29, -0x1d20(r30)
    addi r4, r4, fn_802377B8@l
    li r6, 0xc
    stw r29, -0x1d1c(r30)
    addi r5, r5, fn_800EF73C@l
    li r7, 0x6
    subi r3, r3, 0x1cb8
    stw r29, -0x1d18(r30)
    stw r29, -0x1d14(r30)
    stw r29, -0x1d08(r30)
    stfs f0, -0x1d04(r30)
    stw r29, -0x1d00(r30)
    stw r29, -0x1cec(r30)
    bl fn_806958E0
    addis r4, r31, 0x4
    lfs f4, lbl_808814B0
    lfs f3, lbl_808814AC
    mr r3, r31
    lfs f0, lbl_808814B4
    stw r29, -0x1c70(r4)
    stw r29, -0x1c6c(r4)
    stw r29, -0x1c68(r4)
    stw r29, -0x1c64(r4)
    stfs f4, -0x1c60(r4)
    stfs f3, -0x1c5c(r4)
    stfs f0, -0x1c58(r4)
    bl fn_8059AB9C
    mr r3, r31
    bl fn_8054A6EC
    mr r3, r31
    bl fn_80478714
    mr r3, r31
    bl fn_80548D58
    mr r3, r31
    bl fn_800F39A4
    mr r3, r31
    bl fn_80100BF0
    lwz r27, lbl_80881464
    addis r30, r31, 0x1
    li r28, 0x0
    li r26, 0x0
lbl_fn_800F1430_00000A74:
    add r3, r30, r26
    mr r4, r27
    subi r3, r3, 0x45ac
    li r5, 0x0
    bl fn_8008AD4C
    add r3, r31, r26
    addi r28, r28, 0x1
    addis r3, r3, 0x1
    addi r26, r26, 0x21c
    stw r29, -0x45b0(r3)
    cmplwi r28, 0x8
    stw r29, -0x4398(r3)
    blt lbl_fn_800F1430_00000A74
    lfs f0, lbl_80881478
    addis r5, r31, 0x1
    stfs f0, 0x24(r1)
    addis r4, r31, 0x4
    addi r3, r1, 0x24
    lfs f2, lbl_80881494
    stfs f0, 0x28(r1)
    subi r6, r5, 0x349c
    addi r8, r1, 0x18
    subi r7, r5, 0x3490
    psq_l f1, 0x0(r3), 0, 0
    li r0, 0x0
    stfs f0, 0x18(r1)
    mr r3, r31
    stfs f0, 0x1c(r1)
    psq_st f1, 0x0(r6), 0, 0
    psq_l f1, 0x0(r8), 0, 0
    stfs f0, -0x34c8(r5)
    stfs f0, -0x34c4(r5)
    stfs f0, -0x34c0(r5)
    stfs f0, -0x34bc(r5)
    stfs f0, -0x34b0(r5)
    stfs f0, -0x34ac(r5)
    stfs f0, -0x34b8(r5)
    stfs f0, -0x34b4(r5)
    stw r0, -0x34a8(r5)
    stfs f0, -0x34a4(r5)
    stfs f2, -0x3494(r5)
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, -0x3488(r5)
    stfs f2, -0x1cfc(r4)
    stfs f2, -0x1cf8(r4)
    stfs f2, -0x1cf4(r4)
    stfs f0, -0x1cf0(r4)
    psq_l f31, 0x58(r1), 0, 0
    lfd f31, 0x50(r1)
    addi r11, r1, 0x50
    stfs f2, 0x2c(r1)
    stfs f2, 0x20(r1)
    stfs f2, 0x8(r1)
    stfs f2, 0xc(r1)
    stfs f2, 0x10(r1)
    stfs f0, 0x14(r1)
    bl _restgpr_26
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_800F1EE0(void)
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
    beq lbl_fn_800F1EE0_00000BA4
    li r4, 0x0
    bl fn_8010EE38
    cmpwi r31, 0x0
    ble lbl_fn_800F1EE0_00000BA4
    mr r3, r30
    bl dtor_80084684
lbl_fn_800F1EE0_00000BA4:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800F1F38(void)
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
    beq lbl_fn_800F1F38_00000C00
    li r4, -0x1
    addi r3, r3, 0x4
    bl fn_8008A76C
    cmpwi r31, 0x0
    ble lbl_fn_800F1F38_00000C00
    mr r3, r30
    bl dtor_80084684
lbl_fn_800F1F38_00000C00:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800F1F94(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    beq lbl_fn_800F1F94_0000133C
    addis r3, r3, 0x4
    li r0, 0x0
    lis r4, fn_800EF73C@ha
    stw r0, lbl_8087F048
    addi r4, r4, fn_800EF73C@l
    li r5, 0xc
    li r6, 0x6
    subi r3, r3, 0x1cb8
    bl fn_806959D8
    addis r29, r30, 0x4
    subic. r29, r29, 0x7398
    beq lbl_fn_800F1F94_00000C8C
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_800F1F94_00000C8C
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_800F1F94_00000C8C:
    addis r29, r30, 0x4
    subic. r29, r29, 0x73a4
    beq lbl_fn_800F1F94_00000CB0
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_800F1F94_00000CB0
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_800F1F94_00000CB0:
    addis r29, r30, 0x4
    subic. r29, r29, 0x73b0
    beq lbl_fn_800F1F94_00000CD4
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_800F1F94_00000CD4
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_800F1F94_00000CD4:
    addis r29, r30, 0x4
    subic. r29, r29, 0x73bc
    beq lbl_fn_800F1F94_00000CF8
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_800F1F94_00000CF8
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_800F1F94_00000CF8:
    addis r29, r30, 0x4
    subic. r29, r29, 0x73c8
    beq lbl_fn_800F1F94_00000D1C
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_800F1F94_00000D1C
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_800F1F94_00000D1C:
    addis r29, r30, 0x4
    subic. r29, r29, 0x73d4
    beq lbl_fn_800F1F94_00000D40
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_800F1F94_00000D40
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_800F1F94_00000D40:
    addis r29, r30, 0x4
    subic. r29, r29, 0x73e0
    beq lbl_fn_800F1F94_00000D64
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_800F1F94_00000D64
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_800F1F94_00000D64:
    addis r29, r30, 0x4
    subic. r29, r29, 0x73ec
    beq lbl_fn_800F1F94_00000D88
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_800F1F94_00000D88
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_800F1F94_00000D88:
    addis r29, r30, 0x4
    subic. r29, r29, 0x73f8
    beq lbl_fn_800F1F94_00000DAC
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_800F1F94_00000DAC
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_800F1F94_00000DAC:
    addis r29, r30, 0x4
    subic. r29, r29, 0x7404
    beq lbl_fn_800F1F94_00000DD0
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_800F1F94_00000DD0
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_800F1F94_00000DD0:
    addis r29, r30, 0x4
    subic. r29, r29, 0x7410
    beq lbl_fn_800F1F94_00000DF4
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_800F1F94_00000DF4
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_800F1F94_00000DF4:
    addis r29, r30, 0x4
    subic. r29, r29, 0x741c
    beq lbl_fn_800F1F94_00000E18
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_800F1F94_00000E18
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_800F1F94_00000E18:
    addis r29, r30, 0x4
    subic. r29, r29, 0x7428
    beq lbl_fn_800F1F94_00000E3C
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_800F1F94_00000E3C
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_800F1F94_00000E3C:
    addis r29, r30, 0x4
    subic. r29, r29, 0x7434
    beq lbl_fn_800F1F94_00000E60
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_800F1F94_00000E60
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_800F1F94_00000E60:
    addis r29, r30, 0x4
    subic. r29, r29, 0x7440
    beq lbl_fn_800F1F94_00000E84
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_800F1F94_00000E84
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_800F1F94_00000E84:
    addis r29, r30, 0x4
    subic. r29, r29, 0x744c
    beq lbl_fn_800F1F94_00000EA8
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_800F1F94_00000EA8
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_800F1F94_00000EA8:
    addis r3, r30, 0x4
    lis r29, fn_800EF73C@ha
    addi r4, r29, fn_800EF73C@l
    li r5, 0xc
    li r6, 0x3
    subi r3, r3, 0x7470
    bl fn_806959D8
    addis r3, r30, 0x4
    addi r4, r29, fn_800EF73C@l
    li r5, 0xc
    li r6, 0x3
    subi r3, r3, 0x7494
    bl fn_806959D8
    addis r29, r30, 0x4
    subic. r29, r29, 0x74a0
    beq lbl_fn_800F1F94_00000F00
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_800F1F94_00000F00
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_800F1F94_00000F00:
    addis r29, r30, 0x4
    subic. r29, r29, 0x74ac
    beq lbl_fn_800F1F94_00000F24
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_800F1F94_00000F24
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_800F1F94_00000F24:
    addis r29, r30, 0x4
    subic. r29, r29, 0x74b8
    beq lbl_fn_800F1F94_00000F48
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_800F1F94_00000F48
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_800F1F94_00000F48:
    addis r29, r30, 0x4
    subic. r29, r29, 0x74c4
    beq lbl_fn_800F1F94_00000F6C
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_800F1F94_00000F6C
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_800F1F94_00000F6C:
    addis r29, r30, 0x4
    subic. r29, r29, 0x74d0
    beq lbl_fn_800F1F94_00000F90
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_800F1F94_00000F90
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_800F1F94_00000F90:
    addis r3, r30, 0x4
    lis r4, fn_800EF73C@ha
    addi r4, r4, fn_800EF73C@l
    li r5, 0xc
    li r6, 0x3
    subi r3, r3, 0x74f4
    bl fn_806959D8
    addis r29, r30, 0x4
    subic. r29, r29, 0x7500
    beq lbl_fn_800F1F94_00000FD0
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_800F1F94_00000FD0
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_800F1F94_00000FD0:
    addis r29, r30, 0x4
    subic. r29, r29, 0x750c
    beq lbl_fn_800F1F94_00000FF4
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_800F1F94_00000FF4
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_800F1F94_00000FF4:
    addis r3, r30, 0x4
    subic. r0, r3, 0x75a8
    beq lbl_fn_800F1F94_0000101C
    lwz r4, -0x75a8(r3)
    cmpwi r4, 0x0
    beq lbl_fn_800F1F94_0000101C
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_800F1F94_0000101C
    bl fn_800897D8
lbl_fn_800F1F94_0000101C:
    addis r3, r30, 0x4
    li r4, -0x1
    subi r3, r3, 0x760c
    bl fn_802375C4
    addis r3, r30, 0x4
    li r4, -0x1
    subi r3, r3, 0x763c
    bl fn_800D5808
    addis r29, r30, 0x4
    subic. r29, r29, 0x7658
    beq lbl_fn_800F1F94_00001060
    addi r3, r29, 0xc
    li r4, -0x1
    bl fn_802375C4
    mr r3, r29
    li r4, -0x1
    bl fn_802375C4
lbl_fn_800F1F94_00001060:
    addis r29, r30, 0x4
    subic. r29, r29, 0x7670
    beq lbl_fn_800F1F94_00001084
    addi r3, r29, 0xc
    li r4, -0x1
    bl fn_802375C4
    mr r3, r29
    li r4, -0x1
    bl fn_802375C4
lbl_fn_800F1F94_00001084:
    addis r29, r30, 0x4
    subic. r29, r29, 0x7688
    beq lbl_fn_800F1F94_000010A8
    addi r3, r29, 0xc
    li r4, -0x1
    bl fn_802375C4
    mr r3, r29
    li r4, -0x1
    bl fn_802375C4
lbl_fn_800F1F94_000010A8:
    addis r3, r30, 0x3
    lis r29, fn_800EF73C@ha
    addi r4, r29, fn_800EF73C@l
    li r5, 0xc
    li r6, 0x1f
    addi r3, r3, 0x663c
    bl fn_806959D8
    addis r3, r30, 0x3
    addi r4, r29, fn_800EF73C@l
    li r5, 0xc
    li r6, 0x7
    addi r3, r3, 0x65e8
    bl fn_806959D8
    addis r29, r30, 0x3
    addic. r29, r29, 0x65dc
    beq lbl_fn_800F1F94_00001100
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_800F1F94_00001100
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_800F1F94_00001100:
    addis r29, r30, 0x3
    addic. r29, r29, 0x65d0
    beq lbl_fn_800F1F94_00001124
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_800F1F94_00001124
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_800F1F94_00001124:
    addis r29, r30, 0x3
    addic. r29, r29, 0x65c4
    beq lbl_fn_800F1F94_00001148
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_800F1F94_00001148
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_800F1F94_00001148:
    addis r29, r30, 0x3
    addic. r29, r29, 0x65b8
    beq lbl_fn_800F1F94_0000116C
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_800F1F94_0000116C
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_800F1F94_0000116C:
    addis r3, r30, 0x3
    lis r29, fn_802375C4@ha
    addi r4, r29, fn_802375C4@l
    li r5, 0xc
    li r6, 0x3
    addi r3, r3, 0x6594
    bl fn_806959D8
    addis r3, r30, 0x3
    addi r4, r29, fn_802375C4@l
    li r5, 0xc
    li r6, 0x5
    addi r3, r3, 0x6558
    bl fn_806959D8
    addis r3, r30, 0x3
    addi r4, r29, fn_802375C4@l
    li r5, 0xc
    li r6, 0x5
    addi r3, r3, 0x651c
    bl fn_806959D8
    addis r3, r30, 0x3
    lis r4, fn_800EF73C@ha
    addi r4, r4, fn_800EF73C@l
    li r5, 0xc
    li r6, 0x3
    addi r3, r3, 0x64f8
    bl fn_806959D8
    addis r29, r30, 0x3
    addic. r29, r29, 0x64ec
    beq lbl_fn_800F1F94_000011F8
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_800F1F94_000011F8
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_800F1F94_000011F8:
    addis r3, r30, 0x3
    lis r4, fn_802375C4@ha
    addi r4, r4, fn_802375C4@l
    li r5, 0xc
    li r6, 0x15
    addi r3, r3, 0x63f0
    bl fn_806959D8
    addis r29, r30, 0x3
    addic. r29, r29, 0x63e4
    beq lbl_fn_800F1F94_00001238
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_800F1F94_00001238
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_800F1F94_00001238:
    addis r29, r30, 0x3
    addic. r29, r29, 0x63d8
    beq lbl_fn_800F1F94_0000125C
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_800F1F94_0000125C
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_800F1F94_0000125C:
    addis r29, r30, 0x3
    addic. r29, r29, 0x63cc
    beq lbl_fn_800F1F94_00001280
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_800F1F94_00001280
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_800F1F94_00001280:
    addis r29, r30, 0x3
    addic. r29, r29, 0x63c0
    beq lbl_fn_800F1F94_000012A4
    mr r3, r29
    bl fn_8023781C
    addic. r3, r29, 0x4
    beq lbl_fn_800F1F94_000012A4
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_800F1F94_000012A4:
    addis r3, r30, 0x1
    lis r4, fn_80108150@ha
    addi r4, r4, fn_80108150@l
    li r5, 0x934
    li r6, 0x48
    subi r3, r3, 0x3410
    bl fn_806959D8
    addis r3, r30, 0x1
    li r4, -0x1
    subi r3, r3, 0x3484
    bl fn_800D5808
    addis r3, r30, 0x1
    lis r4, fn_800F1F38@ha
    addi r4, r4, fn_800F1F38@l
    li r5, 0x21c
    li r6, 0x8
    subi r3, r3, 0x45b0
    bl fn_806959D8
    addis r3, r30, 0x1
    lis r4, fn_800F1EE0@ha
    addi r4, r4, fn_800F1EE0@l
    li r5, 0xc8
    li r6, 0x20
    subi r3, r3, 0x5eb0
    bl fn_806959D8
    lis r4, fn_8010EE38@ha
    addi r3, r30, 0x150
    addi r4, r4, fn_8010EE38@l
    li r5, 0xa0
    li r6, 0x100
    bl fn_806959D8
    mr r3, r30
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r31, 0x0
    ble lbl_fn_800F1F94_0000133C
    mr r3, r30
    bl dtor_80084684
lbl_fn_800F1F94_0000133C:
    mr r3, r30
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800F26D4(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    stmw r17, 0x74(r1)
    mr r18, r3
    li r20, 0x1
    bl fn_800D3FA4
    cmpwi r3, 0x0
    bne lbl_fn_800F26D4_00001384
    li r20, 0x0
lbl_fn_800F26D4_00001384:
    mr r3, r18
    bl fn_800F3490
    cmpwi r3, 0x0
    beq lbl_fn_800F26D4_00001398
    li r20, 0x0
lbl_fn_800F26D4_00001398:
    mr r3, r18
    bl fn_800F3B4C
    cmpwi r3, 0x0
    beq lbl_fn_800F26D4_000013AC
    li r20, 0x0
lbl_fn_800F26D4_000013AC:
    cmpwi r20, 0x0
    beq lbl_fn_800F26D4_00001640
    addis r3, r18, 0x1
    li r4, 0x0
    lwz r3, -0x34d0(r3)
    bl fn_800D246C
    addis r4, r18, 0x1
    lwz r3, -0x34d0(r4)
    lwz r0, 0xfc(r3)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r3)
    lwz r3, -0x34d0(r4)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, -0x34a0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_800F26D4_00001420
    li r4, 0x0
    bl fn_800D246C
    addis r4, r18, 0x1
    lwz r3, -0x34a0(r4)
    lwz r0, 0xfc(r3)
    oris r0, r0, 0x1000
    stw r0, 0xfc(r3)
    lwz r3, -0x34a0(r4)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_800F26D4_00001420:
    addis r3, r18, 0x4
    li r4, 0x0
    lwz r3, -0x1d0c(r3)
    bl fn_800D246C
    addis r4, r18, 0x4
    lis r27, lbl_807C7850@ha
    lwz r3, -0x1d0c(r4)
    addis r22, r18, 0x1
    lis r29, fn_800F2BB8@ha
    lis r30, fn_800F2BE4@ha
    lwz r0, 0xfc(r3)
    lis r25, lbl_80779CE0@ha
    lis r17, lbl_80736040@ha
    subi r21, r22, 0x45b0
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r3)
    addi r23, r1, 0x54
    addi r28, r27, lbl_807C7850@l
    lwz r3, -0x1d0c(r4)
    addi r29, r29, fn_800F2BB8@l
    addi r30, r30, fn_800F2BE4@l
    addi r25, r25, lbl_80779CE0@l
    lwz r0, 0x38(r3)
    addi r24, r1, 0x50
    addi r17, r17, lbl_80736040@l
    li r19, 0x0
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    li r31, 0x1
    li r26, 0x0
    subi r22, r22, 0x45ac
lbl_fn_800F26D4_0000149C:
    lwz r0, 0x20c(r22)
    srawi r0, r0, 24
    cmpwi r0, 0x8
    bne lbl_fn_800F26D4_00001620
    lbz r0, lbl_8087F04C
    lwz r4, 0x0(r25)
    extsb. r0, r0
    lwz r3, 0x4(r25)
    lwz r0, 0x8(r25)
    stw r4, 0x34(r1)
    stw r3, 0x38(r1)
    stw r0, 0x3c(r1)
    stw r4, 0x28(r1)
    stw r3, 0x2c(r1)
    stw r0, 0x30(r1)
    stw r4, 0x40(r1)
    stw r3, 0x44(r1)
    stw r0, 0x48(r1)
    stw r21, 0x4c(r1)
    stw r26, 0x50(r1)
    bne lbl_fn_800F26D4_000014FC
    stw r29, 0x4(r28)
    stw r30, lbl_807C7850@l(r27)
    stb r31, lbl_8087F04C
lbl_fn_800F26D4_000014FC:
    lwz r6, 0x40(r1)
    addi r3, r1, 0x18
    lwz r5, 0x44(r1)
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r6, 0x18(r1)
    stw r5, 0x1c(r1)
    stw r4, 0x20(r1)
    stw r0, 0x24(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_800F26D4_00001570
    lwz r5, 0x18(r1)
    cmpwi r23, 0x0
    lwz r4, 0x1c(r1)
    lwz r3, 0x20(r1)
    lwz r0, 0x24(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r3, 0x10(r1)
    stw r0, 0x14(r1)
    beq lbl_fn_800F26D4_00001568
    stw r5, 0x54(r1)
    stw r4, 0x58(r1)
    stw r3, 0x5c(r1)
    stw r0, 0x60(r1)
lbl_fn_800F26D4_00001568:
    li r0, 0x1
    b lbl_fn_800F26D4_00001574
lbl_fn_800F26D4_00001570:
    li r0, 0x0
lbl_fn_800F26D4_00001574:
    cmpwi r0, 0x0
    beq lbl_fn_800F26D4_00001584
    stw r28, 0x50(r1)
    b lbl_fn_800F26D4_00001588
lbl_fn_800F26D4_00001584:
    stw r26, 0x50(r1)
lbl_fn_800F26D4_00001588:
    mr r3, r22
    addi r4, r1, 0x50
    bl fn_800F29D0
    cmpwi r24, 0x0
    beq lbl_fn_800F26D4_000015CC
    lwz r3, 0x50(r1)
    cmpwi r3, 0x0
    beq lbl_fn_800F26D4_000015CC
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_800F26D4_000015C8
    addi r3, r24, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_800F26D4_000015C8:
    stw r26, 0x50(r1)
lbl_fn_800F26D4_000015CC:
    mr r3, r22
    addi r4, r17, 0x1
    bl fn_80091CFC
    mr r3, r22
    addi r4, r17, 0x6
    bl fn_80091CFC
    mr r3, r22
    addi r4, r17, 0xf
    bl fn_80091CFC
    mr r3, r22
    addi r4, r17, 0x17
    bl fn_80091CFC
    mr r3, r22
    addi r4, r17, 0x21
    bl fn_80091CFC
    mr r3, r22
    addi r4, r17, 0x2a
    bl fn_80091CFC
    mr r3, r22
    addi r4, r17, 0x31
    bl fn_80091CFC
lbl_fn_800F26D4_00001620:
    addi r19, r19, 0x1
    addi r21, r21, 0x21c
    cmplwi r19, 0x8
    addi r22, r22, 0x21c
    blt lbl_fn_800F26D4_0000149C
    mr r3, r18
    li r4, 0x1
    bl fn_800D246C
lbl_fn_800F26D4_00001640:
    mr r3, r20
    lmw r17, 0x74(r1)
    lwz r0, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_800F29D0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    li r0, 0x0
    stw r31, 0x3c(r1)
    mr r31, r3
    stw r0, 0x8(r1)
    lwz r6, 0x0(r4)
    cmpwi r6, 0x0
    beq lbl_fn_800F29D0_0000169C
    stw r6, 0x8(r1)
    addi r3, r4, 0x4
    addi r4, r1, 0xc
    li r5, 0x0
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_800F29D0_0000169C:
    addi r3, r31, 0xb8
    addi r0, r1, 0x8
    cmplw r3, r0
    beq lbl_fn_800F29D0_000017F0
    lwz r3, 0x8(r1)
    li r0, 0x0
    stw r0, 0x1c(r1)
    cmpwi r3, 0x0
    beq lbl_fn_800F29D0_000016E0
    lwz r6, 0x8(r1)
    addi r3, r1, 0xc
    stw r6, 0x1c(r1)
    addi r4, r1, 0x20
    li r5, 0x0
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_800F29D0_000016E0:
    addi r3, r31, 0xb8
    addi r0, r1, 0x8
    cmplw r3, r0
    beq lbl_fn_800F29D0_0000174C
    lwz r3, 0x8(r1)
    cmpwi r3, 0x0
    beq lbl_fn_800F29D0_00001724
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_800F29D0_0000171C
    addi r3, r1, 0xc
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_800F29D0_0000171C:
    li r0, 0x0
    stw r0, 0x8(r1)
lbl_fn_800F29D0_00001724:
    lwz r6, 0xb8(r31)
    cmpwi r6, 0x0
    beq lbl_fn_800F29D0_0000174C
    stw r6, 0x8(r1)
    addi r3, r31, 0xbc
    addi r4, r1, 0xc
    li r5, 0x0
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_800F29D0_0000174C:
    addi r3, r1, 0x1c
    addi r0, r31, 0xb8
    cmplw r3, r0
    beq lbl_fn_800F29D0_000017BC
    lwz r3, 0xb8(r31)
    cmpwi r3, 0x0
    beq lbl_fn_800F29D0_00001790
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_800F29D0_00001788
    addi r3, r31, 0xbc
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_800F29D0_00001788:
    li r0, 0x0
    stw r0, 0xb8(r31)
lbl_fn_800F29D0_00001790:
    lwz r0, 0x1c(r1)
    cmpwi r0, 0x0
    beq lbl_fn_800F29D0_000017BC
    stw r0, 0xb8(r31)
    addi r3, r1, 0x20
    addi r4, r31, 0xbc
    li r5, 0x0
    lwz r6, 0x1c(r1)
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_800F29D0_000017BC:
    lwz r3, 0x1c(r1)
    cmpwi r3, 0x0
    beq lbl_fn_800F29D0_000017F0
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_800F29D0_000017E8
    addi r3, r1, 0x20
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_800F29D0_000017E8:
    li r0, 0x0
    stw r0, 0x1c(r1)
lbl_fn_800F29D0_000017F0:
    addic. r3, r1, 0x8
    beq lbl_fn_800F29D0_0000182C
    lwz r4, 0x8(r1)
    cmpwi r4, 0x0
    beq lbl_fn_800F29D0_0000182C
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_800F29D0_00001824
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_800F29D0_00001824:
    li r0, 0x0
    stw r0, 0x8(r1)
lbl_fn_800F29D0_0000182C:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}
