#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_18(void);
extern void _restgpr_23(void);
extern void _savegpr_18(void);
extern void _savegpr_23(void);
extern void fn_80061824(void);
extern void fn_80061AE4(void);
extern void fn_8006EF48(void);
extern void fn_800DC6B4(void);
extern void fn_800DD3FC(void);
extern void fn_801F4C14(void);
extern void fn_801F4CB4(void);
extern void fn_801F4E8C(void);
extern void fn_801FEDBC(void);
extern void fn_801FEE08(void);
extern void fn_8020924C(void);
extern void fn_804A3C24(void);
extern void fn_804A4738(void);
extern void fn_804C54FC(void);
extern void fn_804CB0B8(void);
extern void fn_80686AF0(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 lbl_807592E0[];
extern u8 lbl_80759338[];
extern u8 lbl_80759374[];

/* Small data declarations */
extern u32 lbl_8087E140;
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EEC8;
extern u32 lbl_8087F1E4;
extern u32 lbl_8087F580;
extern u32 lbl_8087F588;
extern u32 lbl_8087F610;
extern u32 lbl_8087F86C;
extern u32 lbl_808813D0;
extern u32 lbl_808874E0;
extern u32 lbl_808874E4;
extern u32 lbl_808874EC;
extern u32 lbl_808874F0;
extern u32 lbl_80887500;
extern u32 lbl_8088750C;
extern u32 lbl_80887518;
extern u32 lbl_8088751C;
extern u32 lbl_80887524;
extern u32 lbl_80887528;
extern u32 lbl_80887530;
extern u32 lbl_80887534;
extern u32 lbl_80887538;
extern u32 lbl_8088753C;
extern u32 lbl_80887540;
extern u32 lbl_80887544;

/* Function declarations */
void fn_804CB74C(void);
void fn_804CBA1C(void);
void fn_804CBBD8(void);
void fn_804CBCD0(void);
void fn_804CC618(void);
void fn_804CC7A4(void);
void fn_804CCB54(void);

asm void fn_804CB74C(void)
{
    nofralloc
    stwu r1, -0x2c0(r1)
    mflr r0
    li r5, 0x0
    stw r0, 0x2c4(r1)
    li r0, 0x40
    addi r4, r1, 0xac
    stw r31, 0x2bc(r1)
    mr r31, r3
    stw r5, 0x70(r1)
    stw r5, 0x74(r1)
    stw r5, 0x78(r1)
    stw r5, 0x7c(r1)
    stw r5, 0x80(r1)
    stw r5, 0x84(r1)
    stw r5, 0x88(r1)
    stw r5, 0x8c(r1)
    stw r5, 0x90(r1)
    stw r5, 0x94(r1)
    stw r5, 0x98(r1)
    stw r5, 0x9c(r1)
    stw r5, 0xa0(r1)
    stw r5, 0xa4(r1)
    stw r5, 0xa8(r1)
    stw r5, 0xac(r1)
    mtctr r0
lbl_fn_804CB74C_00000064:
    stw r5, 0x4(r4)
    stwu r5, 0x8(r4)
    bdnz lbl_fn_804CB74C_00000064
    lwz r6, 0x48(r3)
    li r0, 0x3
    lfs f0, lbl_808874E0
    mr r4, r31
    lwz r5, 0x38(r6)
    stfs f0, 0x58(r1)
    rlwinm r5, r5, 0, 30, 28
    stw r5, 0x38(r6)
    lwz r6, 0x50(r3)
    stfs f0, 0xc(r1)
    lwz r5, 0x38(r6)
    stfs f0, 0x24(r1)
    rlwinm r5, r5, 0, 30, 28
    stw r5, 0x38(r6)
    lwz r6, 0x58(r3)
    stfs f0, 0x3c(r1)
    lwz r5, 0x38(r6)
    stfs f0, 0x54(r1)
    rlwinm r5, r5, 0, 30, 28
    stw r5, 0x38(r6)
    lwz r6, 0x5c(r3)
    lwz r5, 0x38(r6)
    rlwinm r5, r5, 0, 30, 28
    stw r5, 0x38(r6)
    lwz r6, 0x60(r3)
    lwz r5, 0x38(r6)
    rlwinm r5, r5, 0, 30, 28
    stw r5, 0x38(r6)
    lwz r6, 0x64(r3)
    lwz r5, 0x38(r6)
    rlwinm r5, r5, 0, 30, 28
    stw r5, 0x38(r6)
    lwz r6, 0x6c(r3)
    lwz r5, 0x38(r6)
    rlwinm r5, r5, 0, 30, 28
    stw r5, 0x38(r6)
    lwz r6, 0x68(r3)
    lwz r5, 0x38(r6)
    rlwinm r5, r5, 0, 30, 28
    stw r5, 0x38(r6)
    lwz r6, 0x70(r3)
    lwz r5, 0x38(r6)
    rlwinm r5, r5, 0, 30, 28
    stw r5, 0x38(r6)
    mtctr r0
lbl_fn_804CB74C_00000124:
    lwz r5, 0x74(r4)
    lwz r0, 0x38(r5)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r5)
    lwz r5, 0x78(r4)
    lwz r0, 0x38(r5)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r5)
    lwz r5, 0x7c(r4)
    lwz r0, 0x38(r5)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r5)
    lwz r5, 0x80(r4)
    lwz r0, 0x38(r5)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r5)
    lwz r5, 0x84(r4)
    lwz r0, 0x38(r5)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r5)
    lwz r5, 0x88(r4)
    lwz r0, 0x38(r5)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r5)
    lwz r5, 0x8c(r4)
    lwz r0, 0x38(r5)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r5)
    lwz r5, 0x90(r4)
    addi r4, r4, 0x20
    lwz r0, 0x38(r5)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r5)
    bdnz lbl_fn_804CB74C_00000124
    lwz r3, 0x50(r3)
    lfs f0, lbl_808874EC
    lfs f1, 0x100(r3)
    fcmpo cr0, f1, f0
    blt lbl_fn_804CB74C_000002BC
    mr r3, r31
    bl fn_804CB0B8
    lwz r4, 0xe4(r31)
    cmpwi r4, 0x13
    bge lbl_fn_804CB74C_00000284
    cmpwi r4, 0x0
    blt lbl_fn_804CB74C_000001E4
    cmplwi r4, 0x16
    blt lbl_fn_804CB74C_000001EC
lbl_fn_804CB74C_000001E4:
    li r5, 0x0
    b lbl_fn_804CB74C_0000024C
lbl_fn_804CB74C_000001EC:
    lis r3, lbl_807592E0@ha
    slwi r0, r4, 2
    addi r3, r3, lbl_807592E0@l
    lwzx r3, r3, r0
    cmpwi r3, 0x0
    ble lbl_fn_804CB74C_00000218
    bl fn_8020924C
    cmpwi r3, 0x0
    beq lbl_fn_804CB74C_00000248
    lwz r5, 0x4(r3)
    b lbl_fn_804CB74C_0000024C
lbl_fn_804CB74C_00000218:
    lwz r3, lbl_8087F86C
    cmpwi r3, 0x0
    beq lbl_fn_804CB74C_00000248
    addi r0, r4, 0x2e
    slwi r0, r0, 3
    add r3, r3, r0
    lwz r5, 0x4c(r3)
    cmpwi r5, 0x0
    beq lbl_fn_804CB74C_00000240
    b lbl_fn_804CB74C_0000024C
lbl_fn_804CB74C_00000240:
    la r5, lbl_808813D0
    b lbl_fn_804CB74C_0000024C
lbl_fn_804CB74C_00000248:
    li r5, 0x0
lbl_fn_804CB74C_0000024C:
    lwz r4, lbl_8087F86C
    addi r3, r1, 0xb0
    lwz r4, 0x864(r4)
    cmpwi r4, 0x0
    beq lbl_fn_804CB74C_00000264
    b lbl_fn_804CB74C_00000268
lbl_fn_804CB74C_00000264:
    la r4, lbl_808813D0
lbl_fn_804CB74C_00000268:
    crclr 6
    bl fn_800DD3FC
    lwz r3, lbl_8087F580
    addi r4, r1, 0xb0
    li r5, 0x0
    bl fn_804A3C24
    b lbl_fn_804CB74C_000002BC
lbl_fn_804CB74C_00000284:
    cmpwi r4, 0x16
    bge lbl_fn_804CB74C_000002BC
    addi r0, r4, 0xf1
    lwz r4, lbl_8087F86C
    slwi r0, r0, 3
    lwz r3, lbl_8087F580
    add r4, r4, r0
    lwz r4, 0x4c(r4)
    cmpwi r4, 0x0
    beq lbl_fn_804CB74C_000002B0
    b lbl_fn_804CB74C_000002B4
lbl_fn_804CB74C_000002B0:
    la r4, lbl_808813D0
lbl_fn_804CB74C_000002B4:
    li r5, 0x0
    bl fn_804A3C24
lbl_fn_804CB74C_000002BC:
    lwz r0, 0x2c4(r1)
    lwz r31, 0x2bc(r1)
    mtlr r0
    addi r1, r1, 0x2c0
    blr
}

asm void fn_804CBA1C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0x3
    stw r31, 0xc(r1)
    mr r31, r3
    mr r4, r31
    lwz r6, 0x48(r3)
    lwz r5, 0x38(r6)
    rlwinm r5, r5, 0, 30, 28
    stw r5, 0x38(r6)
    lwz r6, 0x50(r3)
    lwz r5, 0x38(r6)
    rlwinm r5, r5, 0, 30, 28
    stw r5, 0x38(r6)
    lwz r6, 0x58(r3)
    lwz r5, 0x38(r6)
    rlwinm r5, r5, 0, 30, 28
    stw r5, 0x38(r6)
    lwz r6, 0x5c(r3)
    lwz r5, 0x38(r6)
    rlwinm r5, r5, 0, 30, 28
    stw r5, 0x38(r6)
    lwz r6, 0x60(r3)
    lwz r5, 0x38(r6)
    rlwinm r5, r5, 0, 30, 28
    stw r5, 0x38(r6)
    lwz r6, 0x64(r3)
    lwz r5, 0x38(r6)
    rlwinm r5, r5, 0, 30, 28
    stw r5, 0x38(r6)
    lwz r6, 0x6c(r3)
    lwz r5, 0x38(r6)
    rlwinm r5, r5, 0, 30, 28
    stw r5, 0x38(r6)
    lwz r6, 0x68(r3)
    lwz r5, 0x38(r6)
    rlwinm r5, r5, 0, 30, 28
    stw r5, 0x38(r6)
    lwz r6, 0x70(r3)
    lwz r5, 0x38(r6)
    rlwinm r5, r5, 0, 30, 28
    stw r5, 0x38(r6)
    mtctr r0
lbl_fn_804CBA1C_00000380:
    lwz r5, 0x74(r4)
    lwz r0, 0x38(r5)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r5)
    lwz r5, 0x78(r4)
    lwz r0, 0x38(r5)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r5)
    lwz r5, 0x7c(r4)
    lwz r0, 0x38(r5)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r5)
    lwz r5, 0x80(r4)
    lwz r0, 0x38(r5)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r5)
    lwz r5, 0x84(r4)
    lwz r0, 0x38(r5)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r5)
    lwz r5, 0x88(r4)
    lwz r0, 0x38(r5)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r5)
    lwz r5, 0x8c(r4)
    lwz r0, 0x38(r5)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r5)
    lwz r5, 0x90(r4)
    addi r4, r4, 0x20
    lwz r0, 0x38(r5)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r5)
    bdnz lbl_fn_804CBA1C_00000380
    lwz r3, 0x50(r3)
    lfs f0, lbl_808874EC
    lfs f1, 0x100(r3)
    fcmpo cr0, f1, f0
    blt lbl_fn_804CBA1C_00000478
    mr r3, r31
    bl fn_804CB0B8
    lwz r3, 0xe4(r31)
    cmpwi r3, 0x14
    bge lbl_fn_804CBA1C_00000478
    addi r0, r3, 0x107
    lwz r3, lbl_8087F86C
    slwi r0, r0, 3
    add r3, r3, r0
    lwz r31, 0x4c(r3)
    cmpwi r31, 0x0
    beq lbl_fn_804CBA1C_00000450
    b lbl_fn_804CBA1C_00000454
lbl_fn_804CBA1C_00000450:
    la r31, lbl_808813D0
lbl_fn_804CBA1C_00000454:
    mr r3, r31
    la r4, lbl_8087E140
    bl fn_80686AF0
    cmpwi r3, 0x0
    beq lbl_fn_804CBA1C_00000478
    lwz r3, lbl_8087F580
    mr r4, r31
    li r5, 0x0
    bl fn_804A3C24
lbl_fn_804CBA1C_00000478:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804CBBD8(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    lfs f1, lbl_808874E0
    stw r0, 0x84(r1)
    lfs f0, lbl_80887500
    stw r31, 0x7c(r1)
    mr r31, r3
    lwz r4, 0x48(r3)
    stfs f1, 0x58(r1)
    lwz r0, 0x38(r4)
    stfs f1, 0xc(r1)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0x50(r3)
    stfs f1, 0x24(r1)
    lwz r0, 0x38(r4)
    stfs f1, 0x3c(r1)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0x54(r3)
    stfs f1, 0x54(r1)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0xd4(r3)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0x64(r3)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0x6c(r3)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0x68(r3)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0x70(r3)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0x54(r3)
    lfs f1, 0x100(r4)
    fcmpo cr0, f1, f0
    blt lbl_fn_804CBBD8_00000570
    lwz r3, 0xd4(r3)
    li r6, 0x8
    lwz r4, 0xec(r31)
    lwz r5, 0xe8(r31)
    bl fn_804A4738
    mr r3, r31
    bl fn_804CB0B8
    mr r3, r31
    bl fn_804CBCD0
lbl_fn_804CBBD8_00000570:
    lwz r0, 0x84(r1)
    lwz r31, 0x7c(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_804CBCD0(void)
{
    nofralloc
    stwu r1, -0x160(r1)
    mflr r0
    stw r0, 0x164(r1)
    addi r11, r1, 0xd0
    stfd f31, 0x150(r1)
    psq_st f31, 0x158(r1), 0, 0
    stfd f30, 0x140(r1)
    psq_st f30, 0x148(r1), 0, 0
    stfd f29, 0x130(r1)
    psq_st f29, 0x138(r1), 0, 0
    stfd f28, 0x120(r1)
    psq_st f28, 0x128(r1), 0, 0
    stfd f27, 0x110(r1)
    psq_st f27, 0x118(r1), 0, 0
    stfd f26, 0x100(r1)
    psq_st f26, 0x108(r1), 0, 0
    stfd f25, 0xf0(r1)
    psq_st f25, 0xf8(r1), 0, 0
    stfd f24, 0xe0(r1)
    psq_st f24, 0xe8(r1), 0, 0
    stfd f23, 0xd0(r1)
    psq_st f23, 0xd8(r1), 0, 0
    bl _savegpr_23
    li r0, 0x0
    stw r0, 0x58(r1)
    lwz r4, lbl_8087F588
    mr r25, r3
    stw r0, 0x5c(r1)
    lfs f28, lbl_808874E0
    stw r0, 0x60(r1)
    lfs f27, lbl_80887518
    stw r0, 0x64(r1)
    lfs f3, lbl_8088751C
    stw r0, 0x68(r1)
    lfs f26, lbl_80887534
    stw r0, 0x6c(r1)
    lfs f25, lbl_80887538
    stw r0, 0x70(r1)
    stw r0, 0x74(r1)
    stw r0, 0x78(r1)
    stw r0, 0x7c(r1)
    stw r0, 0x80(r1)
    stw r0, 0x84(r1)
    stw r0, 0x88(r1)
    stw r0, 0x8c(r1)
    stw r0, 0x90(r1)
    stw r0, 0x94(r1)
    lwz r0, 0x4c(r4)
    stfs f28, 0x40(r1)
    cmpwi r0, 0x0
    stfs f28, 0x44(r1)
    stfs f28, 0x48(r1)
    stfs f28, 0x4c(r1)
    stfs f28, 0x50(r1)
    bne lbl_fn_804CBCD0_00000688
    lfs f2, 0x170(r3)
    lfs f1, lbl_808874E4
    lfs f0, lbl_80887524
    fadds f1, f2, f1
    stfs f1, 0x170(r3)
    fcmpo cr0, f1, f0
    bge lbl_fn_804CBCD0_00000680
    b lbl_fn_804CBCD0_00000688
lbl_fn_804CBCD0_00000680:
    fsubs f0, f1, f0
    fmuls f28, f0, f3
lbl_fn_804CBCD0_00000688:
    lis r3, lbl_80759338@ha
    lis r30, lbl_80759374@ha
    lis r31, lbl_807592E0@ha
    lfs f29, lbl_8088753C
    lfs f30, lbl_80887528
    mr r28, r25
    lfs f31, lbl_808874E0
    addi r31, r31, lbl_807592E0@l
    lfs f23, lbl_80887540
    addi r30, r30, lbl_80759374@l
    lfd f24, lbl_80759338@l(r3)
    li r27, 0x0
    lis r24, 0x4330
lbl_fn_804CBCD0_000006BC:
    lwz r0, 0x164(r25)
    lwz r26, 0xf0(r28)
    lwz r3, lbl_8087F610
    cmpwi r0, 0x0
    mr r5, r26
    addi r3, r3, 0x2a50
    blt lbl_fn_804CBCD0_000006E0
    cmpwi r0, 0x15
    ble lbl_fn_804CBCD0_000006E8
lbl_fn_804CBCD0_000006E0:
    li r29, 0x0
    b lbl_fn_804CBCD0_00000810
lbl_fn_804CBCD0_000006E8:
    bge lbl_fn_804CBCD0_00000720
    cmpwi r26, 0x0
    blt lbl_fn_804CBCD0_00000708
    mulli r0, r0, 0xc
    add r3, r3, r0
    lwz r0, 0x0(r3)
    cmpw r0, r26
    bgt lbl_fn_804CBCD0_00000710
lbl_fn_804CBCD0_00000708:
    li r29, 0x0
    b lbl_fn_804CBCD0_00000810
lbl_fn_804CBCD0_00000710:
    mulli r0, r26, 0x1c
    lwz r3, 0x8(r3)
    add r29, r3, r0
    b lbl_fn_804CBCD0_00000810
lbl_fn_804CBCD0_00000720:
    cmpwi r26, 0x0
    bge lbl_fn_804CBCD0_00000730
    li r29, 0x0
    b lbl_fn_804CBCD0_00000810
lbl_fn_804CBCD0_00000730:
    mr r6, r3
    li r4, 0x0
    b lbl_fn_804CBCD0_00000748
lbl_fn_804CBCD0_0000073C:
    subf r5, r0, r5
    addi r6, r6, 0xc
    addi r4, r4, 0x1
lbl_fn_804CBCD0_00000748:
    cmpwi r4, 0x14
    bge lbl_fn_804CBCD0_0000075C
    lwz r0, 0x0(r6)
    cmplw r0, r5
    ble lbl_fn_804CBCD0_0000073C
lbl_fn_804CBCD0_0000075C:
    cmpwi r4, 0x14
    bge lbl_fn_804CBCD0_0000080C
    cmpwi r4, 0x0
    blt lbl_fn_804CBCD0_00000774
    cmpwi r4, 0x15
    ble lbl_fn_804CBCD0_0000077C
lbl_fn_804CBCD0_00000774:
    li r3, 0x0
    b lbl_fn_804CBCD0_00000804
lbl_fn_804CBCD0_0000077C:
    bge lbl_fn_804CBCD0_000007B4
    cmpwi r5, 0x0
    blt lbl_fn_804CBCD0_0000079C
    mulli r0, r4, 0xc
    add r3, r3, r0
    lwz r0, 0x0(r3)
    cmpw r0, r5
    bgt lbl_fn_804CBCD0_000007A4
lbl_fn_804CBCD0_0000079C:
    li r3, 0x0
    b lbl_fn_804CBCD0_00000804
lbl_fn_804CBCD0_000007A4:
    mulli r0, r5, 0x1c
    lwz r3, 0x8(r3)
    add r3, r3, r0
    b lbl_fn_804CBCD0_00000804
lbl_fn_804CBCD0_000007B4:
    cmpwi r5, 0x0
    bge lbl_fn_804CBCD0_000007C4
    li r3, 0x0
    b lbl_fn_804CBCD0_00000804
lbl_fn_804CBCD0_000007C4:
    mr r6, r3
    li r4, 0x0
    b lbl_fn_804CBCD0_000007DC
lbl_fn_804CBCD0_000007D0:
    subf r5, r0, r5
    addi r6, r6, 0xc
    addi r4, r4, 0x1
lbl_fn_804CBCD0_000007DC:
    cmpwi r4, 0x14
    bge lbl_fn_804CBCD0_000007F0
    lwz r0, 0x0(r6)
    cmplw r0, r5
    ble lbl_fn_804CBCD0_000007D0
lbl_fn_804CBCD0_000007F0:
    cmpwi r4, 0x14
    bge lbl_fn_804CBCD0_00000800
    bl fn_804C54FC
    b lbl_fn_804CBCD0_00000804
lbl_fn_804CBCD0_00000800:
    li r3, 0x0
lbl_fn_804CBCD0_00000804:
    mr r29, r3
    b lbl_fn_804CBCD0_00000810
lbl_fn_804CBCD0_0000080C:
    li r29, 0x0
lbl_fn_804CBCD0_00000810:
    cmpwi r29, 0x0
    beq lbl_fn_804CBCD0_00000E5C
    addi r3, r1, 0x58
    addi r4, r30, 0x1b5
    addi r5, r27, 0x9
    crclr 6
    bl sprintf
    lwz r23, 0x54(r25)
    addi r3, r1, 0x58
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r23
    addi r3, r1, 0x2c
    bl fn_801F4E8C
    lfs f1, 0x2c(r1)
    lfs f0, 0x30(r1)
    lwz r23, 0x18(r29)
    fadds f1, f1, f29
    fadds f0, f0, f30
    lfs f4, 0x34(r1)
    lfs f3, 0x38(r1)
    cmpwi r23, 0x0
    lfs f2, 0x3c(r1)
    stfs f4, 0x48(r1)
    stfs f3, 0x4c(r1)
    stfs f2, 0x50(r1)
    stfs f1, 0x40(r1)
    stfs f0, 0x44(r1)
    beq lbl_fn_804CBCD0_00000888
    b lbl_fn_804CBCD0_0000088C
lbl_fn_804CBCD0_00000888:
    la r23, lbl_808813D0
lbl_fn_804CBCD0_0000088C:
    cmpwi r23, 0x0
    beq lbl_fn_804CBCD0_00000938
    lwz r0, 0xe4(r25)
    cmplw r27, r0
    bne lbl_fn_804CBCD0_000008A8
    fmr f3, f28
    b lbl_fn_804CBCD0_000008AC
lbl_fn_804CBCD0_000008A8:
    lfs f3, lbl_808874E0
lbl_fn_804CBCD0_000008AC:
    lfs f1, 0x40(r1)
    mr r4, r23
    lfs f6, lbl_808874E0
    li r5, -0x1
    fnmsubs f0, f26, f27, f1
    lfs f4, lbl_80887530
    fsubs f1, f1, f3
    lfs f2, 0x44(r1)
    stfs f0, 0x8(r1)
    fmr f7, f6
    stfs f26, 0xc(r1)
    fmr f5, f4
    fmr f8, f6
    lfs f3, lbl_8088750C
    stfs f27, 0x10(r1)
    li r6, 0x1
    li r7, 0x1
    lwz r3, lbl_8087EEB0
    li r8, 0x0
    li r9, 0x1
    lis r10, 0xff00
    bl fn_80061AE4
    lwz r0, 0xe4(r25)
    cmplw r27, r0
    bne lbl_fn_804CBCD0_00000938
    lwz r3, lbl_8087EEC8
    mr r4, r23
    lfs f1, lbl_80887530
    li r5, 0x1
    lfs f2, lbl_808874E0
    li r6, 0x1
    bl fn_8006EF48
    fcmpo cr0, f28, f1
    ble lbl_fn_804CBCD0_00000938
    stfs f31, 0x170(r25)
lbl_fn_804CBCD0_00000938:
    addi r3, r1, 0x58
    addi r4, r30, 0x1b5
    addi r5, r27, 0x1
    crclr 6
    bl sprintf
    lwz r23, 0x54(r25)
    addi r3, r1, 0x58
    bl fn_800DC6B4
    mr r5, r3
    mr r4, r23
    addi r3, r1, 0x18
    bl fn_801F4E8C
    lfs f1, 0x18(r1)
    lfs f0, 0x1c(r1)
    lwz r0, 0x164(r25)
    fadds f1, f1, f23
    fadds f0, f0, f30
    lfs f4, 0x20(r1)
    lfs f3, 0x24(r1)
    cmpwi r0, 0x0
    lfs f2, 0x28(r1)
    stfs f4, 0x48(r1)
    stfs f3, 0x4c(r1)
    stfs f2, 0x50(r1)
    stfs f1, 0x40(r1)
    stfs f0, 0x44(r1)
    bge lbl_fn_804CBCD0_000009AC
    li r0, 0x0
    b lbl_fn_804CBCD0_00000B24
lbl_fn_804CBCD0_000009AC:
    lwz r3, lbl_8087F610
    mr r5, r26
    addi r3, r3, 0x2a50
    blt lbl_fn_804CBCD0_000009C4
    cmpwi r0, 0x15
    ble lbl_fn_804CBCD0_000009CC
lbl_fn_804CBCD0_000009C4:
    li r3, 0x0
    b lbl_fn_804CBCD0_00000AF0
lbl_fn_804CBCD0_000009CC:
    bge lbl_fn_804CBCD0_00000A04
    cmpwi r26, 0x0
    blt lbl_fn_804CBCD0_000009EC
    mulli r0, r0, 0xc
    add r3, r3, r0
    lwz r0, 0x0(r3)
    cmpw r0, r26
    bgt lbl_fn_804CBCD0_000009F4
lbl_fn_804CBCD0_000009EC:
    li r3, 0x0
    b lbl_fn_804CBCD0_00000AF0
lbl_fn_804CBCD0_000009F4:
    mulli r0, r26, 0x1c
    lwz r3, 0x8(r3)
    add r3, r3, r0
    b lbl_fn_804CBCD0_00000AF0
lbl_fn_804CBCD0_00000A04:
    cmpwi r26, 0x0
    bge lbl_fn_804CBCD0_00000A14
    li r3, 0x0
    b lbl_fn_804CBCD0_00000AF0
lbl_fn_804CBCD0_00000A14:
    mr r6, r3
    li r4, 0x0
    b lbl_fn_804CBCD0_00000A2C
lbl_fn_804CBCD0_00000A20:
    subf r5, r0, r5
    addi r6, r6, 0xc
    addi r4, r4, 0x1
lbl_fn_804CBCD0_00000A2C:
    cmpwi r4, 0x14
    bge lbl_fn_804CBCD0_00000A40
    lwz r0, 0x0(r6)
    cmplw r0, r5
    ble lbl_fn_804CBCD0_00000A20
lbl_fn_804CBCD0_00000A40:
    cmpwi r4, 0x14
    bge lbl_fn_804CBCD0_00000AEC
    cmpwi r4, 0x0
    blt lbl_fn_804CBCD0_00000A58
    cmpwi r4, 0x15
    ble lbl_fn_804CBCD0_00000A60
lbl_fn_804CBCD0_00000A58:
    li r3, 0x0
    b lbl_fn_804CBCD0_00000AF0
lbl_fn_804CBCD0_00000A60:
    bge lbl_fn_804CBCD0_00000A98
    cmpwi r5, 0x0
    blt lbl_fn_804CBCD0_00000A80
    mulli r0, r4, 0xc
    add r3, r3, r0
    lwz r0, 0x0(r3)
    cmpw r0, r5
    bgt lbl_fn_804CBCD0_00000A88
lbl_fn_804CBCD0_00000A80:
    li r3, 0x0
    b lbl_fn_804CBCD0_00000AF0
lbl_fn_804CBCD0_00000A88:
    mulli r0, r5, 0x1c
    lwz r3, 0x8(r3)
    add r3, r3, r0
    b lbl_fn_804CBCD0_00000AF0
lbl_fn_804CBCD0_00000A98:
    cmpwi r5, 0x0
    bge lbl_fn_804CBCD0_00000AA8
    li r3, 0x0
    b lbl_fn_804CBCD0_00000AF0
lbl_fn_804CBCD0_00000AA8:
    mr r6, r3
    li r4, 0x0
    b lbl_fn_804CBCD0_00000AC0
lbl_fn_804CBCD0_00000AB4:
    subf r5, r0, r5
    addi r6, r6, 0xc
    addi r4, r4, 0x1
lbl_fn_804CBCD0_00000AC0:
    cmpwi r4, 0x14
    bge lbl_fn_804CBCD0_00000AD4
    lwz r0, 0x0(r6)
    cmplw r0, r5
    ble lbl_fn_804CBCD0_00000AB4
lbl_fn_804CBCD0_00000AD4:
    cmpwi r4, 0x14
    bge lbl_fn_804CBCD0_00000AE4
    bl fn_804C54FC
    b lbl_fn_804CBCD0_00000AF0
lbl_fn_804CBCD0_00000AE4:
    li r3, 0x0
    b lbl_fn_804CBCD0_00000AF0
lbl_fn_804CBCD0_00000AEC:
    li r3, 0x0
lbl_fn_804CBCD0_00000AF0:
    cmpwi r3, 0x0
    beq lbl_fn_804CBCD0_00000B04
    lwz r3, 0x10(r3)
    cmpwi r3, 0x0
    bne lbl_fn_804CBCD0_00000B0C
lbl_fn_804CBCD0_00000B04:
    li r0, 0x0
    b lbl_fn_804CBCD0_00000B24
lbl_fn_804CBCD0_00000B0C:
    bl fn_8020924C
    cmpwi r3, 0x0
    beq lbl_fn_804CBCD0_00000B20
    lwz r0, 0x4(r3)
    b lbl_fn_804CBCD0_00000B24
lbl_fn_804CBCD0_00000B20:
    la r0, lbl_8087E140
lbl_fn_804CBCD0_00000B24:
    cmpwi r0, 0x0
    bne lbl_fn_804CBCD0_00000BC8
    lwz r0, 0x8(r29)
    srwi r4, r0, 24
    cmpwi r4, 0x13
    bne lbl_fn_804CBCD0_00000B58
    lwz r3, lbl_8087F86C
    lwz r23, 0x26c(r3)
    cmpwi r23, 0x0
    beq lbl_fn_804CBCD0_00000B50
    b lbl_fn_804CBCD0_00000D54
lbl_fn_804CBCD0_00000B50:
    la r23, lbl_808813D0
    b lbl_fn_804CBCD0_00000D54
lbl_fn_804CBCD0_00000B58:
    cmpwi r4, 0x0
    blt lbl_fn_804CBCD0_00000B68
    cmplwi r4, 0x16
    blt lbl_fn_804CBCD0_00000B70
lbl_fn_804CBCD0_00000B68:
    li r23, 0x0
    b lbl_fn_804CBCD0_00000D54
lbl_fn_804CBCD0_00000B70:
    slwi r0, r4, 2
    lwzx r3, r31, r0
    cmpwi r3, 0x0
    ble lbl_fn_804CBCD0_00000B94
    bl fn_8020924C
    cmpwi r3, 0x0
    beq lbl_fn_804CBCD0_00000BC0
    lwz r23, 0x4(r3)
    b lbl_fn_804CBCD0_00000D54
lbl_fn_804CBCD0_00000B94:
    lwz r3, lbl_8087F86C
    cmpwi r3, 0x0
    beq lbl_fn_804CBCD0_00000BC0
    slwi r0, r4, 3
    add r3, r3, r0
    lwz r23, 0x1bc(r3)
    cmpwi r23, 0x0
    beq lbl_fn_804CBCD0_00000BB8
    b lbl_fn_804CBCD0_00000D54
lbl_fn_804CBCD0_00000BB8:
    la r23, lbl_808813D0
    b lbl_fn_804CBCD0_00000D54
lbl_fn_804CBCD0_00000BC0:
    li r23, 0x0
    b lbl_fn_804CBCD0_00000D54
lbl_fn_804CBCD0_00000BC8:
    lwz r0, 0x164(r25)
    cmpwi r0, 0x0
    bge lbl_fn_804CBCD0_00000BDC
    li r23, 0x0
    b lbl_fn_804CBCD0_00000D54
lbl_fn_804CBCD0_00000BDC:
    lwz r3, lbl_8087F610
    addi r3, r3, 0x2a50
    blt lbl_fn_804CBCD0_00000BF0
    cmpwi r0, 0x15
    ble lbl_fn_804CBCD0_00000BF8
lbl_fn_804CBCD0_00000BF0:
    li r3, 0x0
    b lbl_fn_804CBCD0_00000D20
lbl_fn_804CBCD0_00000BF8:
    bge lbl_fn_804CBCD0_00000C30
    cmpwi r26, 0x0
    blt lbl_fn_804CBCD0_00000C18
    mulli r0, r0, 0xc
    add r3, r3, r0
    lwz r0, 0x0(r3)
    cmpw r0, r26
    bgt lbl_fn_804CBCD0_00000C20
lbl_fn_804CBCD0_00000C18:
    li r3, 0x0
    b lbl_fn_804CBCD0_00000D20
lbl_fn_804CBCD0_00000C20:
    mulli r0, r26, 0x1c
    lwz r3, 0x8(r3)
    add r3, r3, r0
    b lbl_fn_804CBCD0_00000D20
lbl_fn_804CBCD0_00000C30:
    cmpwi r26, 0x0
    bge lbl_fn_804CBCD0_00000C40
    li r3, 0x0
    b lbl_fn_804CBCD0_00000D20
lbl_fn_804CBCD0_00000C40:
    mr r5, r3
    li r4, 0x0
    b lbl_fn_804CBCD0_00000C58
lbl_fn_804CBCD0_00000C4C:
    subf r26, r0, r26
    addi r5, r5, 0xc
    addi r4, r4, 0x1
lbl_fn_804CBCD0_00000C58:
    cmpwi r4, 0x14
    bge lbl_fn_804CBCD0_00000C6C
    lwz r0, 0x0(r5)
    cmplw r0, r26
    ble lbl_fn_804CBCD0_00000C4C
lbl_fn_804CBCD0_00000C6C:
    cmpwi r4, 0x14
    bge lbl_fn_804CBCD0_00000D1C
    cmpwi r4, 0x0
    blt lbl_fn_804CBCD0_00000C84
    cmpwi r4, 0x15
    ble lbl_fn_804CBCD0_00000C8C
lbl_fn_804CBCD0_00000C84:
    li r3, 0x0
    b lbl_fn_804CBCD0_00000D20
lbl_fn_804CBCD0_00000C8C:
    bge lbl_fn_804CBCD0_00000CC4
    cmpwi r26, 0x0
    blt lbl_fn_804CBCD0_00000CAC
    mulli r0, r4, 0xc
    add r3, r3, r0
    lwz r0, 0x0(r3)
    cmpw r0, r26
    bgt lbl_fn_804CBCD0_00000CB4
lbl_fn_804CBCD0_00000CAC:
    li r3, 0x0
    b lbl_fn_804CBCD0_00000D20
lbl_fn_804CBCD0_00000CB4:
    mulli r0, r26, 0x1c
    lwz r3, 0x8(r3)
    add r3, r3, r0
    b lbl_fn_804CBCD0_00000D20
lbl_fn_804CBCD0_00000CC4:
    cmpwi r26, 0x0
    bge lbl_fn_804CBCD0_00000CD4
    li r3, 0x0
    b lbl_fn_804CBCD0_00000D20
lbl_fn_804CBCD0_00000CD4:
    mr r5, r3
    li r4, 0x0
    b lbl_fn_804CBCD0_00000CEC
lbl_fn_804CBCD0_00000CE0:
    subf r26, r0, r26
    addi r5, r5, 0xc
    addi r4, r4, 0x1
lbl_fn_804CBCD0_00000CEC:
    cmpwi r4, 0x14
    bge lbl_fn_804CBCD0_00000D00
    lwz r0, 0x0(r5)
    cmplw r0, r26
    ble lbl_fn_804CBCD0_00000CE0
lbl_fn_804CBCD0_00000D00:
    cmpwi r4, 0x14
    bge lbl_fn_804CBCD0_00000D14
    mr r5, r26
    bl fn_804C54FC
    b lbl_fn_804CBCD0_00000D20
lbl_fn_804CBCD0_00000D14:
    li r3, 0x0
    b lbl_fn_804CBCD0_00000D20
lbl_fn_804CBCD0_00000D1C:
    li r3, 0x0
lbl_fn_804CBCD0_00000D20:
    cmpwi r3, 0x0
    beq lbl_fn_804CBCD0_00000D34
    lwz r3, 0x10(r3)
    cmpwi r3, 0x0
    bne lbl_fn_804CBCD0_00000D3C
lbl_fn_804CBCD0_00000D34:
    li r23, 0x0
    b lbl_fn_804CBCD0_00000D54
lbl_fn_804CBCD0_00000D3C:
    bl fn_8020924C
    cmpwi r3, 0x0
    beq lbl_fn_804CBCD0_00000D50
    lwz r23, 0x4(r3)
    b lbl_fn_804CBCD0_00000D54
lbl_fn_804CBCD0_00000D50:
    la r23, lbl_8087E140
lbl_fn_804CBCD0_00000D54:
    cmpwi r23, 0x0
    beq lbl_fn_804CBCD0_00000E5C
    lwz r3, lbl_8087EEC8
    mr r4, r23
    lfs f1, lbl_80887530
    li r5, 0x1
    lfs f2, lbl_808874E0
    li r6, 0x1
    bl fn_8006EF48
    fctiwz f0, f1
    stfd f0, 0x98(r1)
    lwz r3, 0x9c(r1)
    cmpwi r3, 0x77
    bge lbl_fn_804CBCD0_00000DD4
    lfs f6, lbl_808874E0
    mr r4, r23
    lfs f4, lbl_80887530
    li r5, -0x1
    fmr f7, f6
    lwz r3, lbl_8087EEB0
    fmr f5, f4
    lfs f1, 0x40(r1)
    fmr f8, f6
    lfs f2, 0x44(r1)
    lfs f3, lbl_8088750C
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
    b lbl_fn_804CBCD0_00000E5C
lbl_fn_804CBCD0_00000DD4:
    lwz r0, 0xe4(r25)
    lfs f3, lbl_808874E0
    cmplw r27, r0
    bne lbl_fn_804CBCD0_00000E04
    xoris r0, r3, 0x8000
    stw r0, 0x9c(r1)
    stw r24, 0x98(r1)
    lfd f0, 0x98(r1)
    fsubs f0, f0, f24
    fcmpo cr0, f28, f0
    bge lbl_fn_804CBCD0_00000E04
    fmr f3, f28
lbl_fn_804CBCD0_00000E04:
    lfs f1, 0x40(r1)
    mr r4, r23
    lfs f6, lbl_808874E0
    li r5, -0x1
    fnmsubs f0, f25, f27, f1
    lfs f4, lbl_80887530
    fsubs f1, f1, f3
    lfs f2, 0x44(r1)
    stfs f0, 0x8(r1)
    fmr f7, f6
    stfs f25, 0xc(r1)
    fmr f5, f4
    fmr f8, f6
    lfs f3, lbl_8088750C
    stfs f27, 0x10(r1)
    li r6, 0x1
    li r7, 0x1
    lwz r3, lbl_8087EEB0
    li r8, 0x0
    li r9, 0x1
    lis r10, 0xff00
    bl fn_80061AE4
lbl_fn_804CBCD0_00000E5C:
    addi r27, r27, 0x1
    addi r28, r28, 0x4
    cmplwi r27, 0x8
    blt lbl_fn_804CBCD0_000006BC
    addi r11, r1, 0xd0
    psq_l f31, 0x158(r1), 0, 0
    lfd f31, 0x150(r1)
    psq_l f30, 0x148(r1), 0, 0
    lfd f30, 0x140(r1)
    psq_l f29, 0x138(r1), 0, 0
    lfd f29, 0x130(r1)
    psq_l f28, 0x128(r1), 0, 0
    lfd f28, 0x120(r1)
    psq_l f27, 0x118(r1), 0, 0
    lfd f27, 0x110(r1)
    psq_l f26, 0x108(r1), 0, 0
    lfd f26, 0x100(r1)
    psq_l f25, 0xf8(r1), 0, 0
    lfd f25, 0xf0(r1)
    psq_l f24, 0xe8(r1), 0, 0
    lfd f24, 0xe0(r1)
    psq_l f23, 0xd8(r1), 0, 0
    lfd f23, 0xd0(r1)
    bl _restgpr_23
    lwz r0, 0x164(r1)
    mtlr r0
    addi r1, r1, 0x160
    blr
}

asm void fn_804CC618(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    addi r11, r1, 0xa0
    bl _savegpr_23
    lfs f0, lbl_808874E0
    lis r30, lbl_80759374@ha
    addi r30, r30, lbl_80759374@l
    mr r31, r3
    lis r25, lbl_807592E0@ha
    stfs f0, 0x58(r1)
    mr r26, r31
    addi r29, r30, 0x253
    stfs f0, 0xc(r1)
    addi r25, r25, lbl_807592E0@l
    li r23, 0x0
    li r24, 0x0
    stfs f0, 0x24(r1)
    stfs f0, 0x3c(r1)
    stfs f0, 0x54(r1)
lbl_fn_804CC618_00000F1C:
    lwz r3, 0x74(r26)
    mr r5, r30
    addi r4, r30, 0x170
    bl fn_801F4C14
    lwz r4, 0x74(r26)
    mr r3, r29
    addi r28, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_808874F0
    mr r4, r3
    mr r3, r28
    li r5, 0x0
    bl fn_801FEDBC
    cmpwi r23, 0x15
    bgt lbl_fn_804CC618_00000FE4
    cmpwi r23, 0x0
    blt lbl_fn_804CC618_00000F68
    cmplwi r23, 0x16
    blt lbl_fn_804CC618_00000F70
lbl_fn_804CC618_00000F68:
    li r28, 0x0
    b lbl_fn_804CC618_00000FBC
lbl_fn_804CC618_00000F70:
    lwz r3, 0x0(r25)
    cmpwi r3, 0x0
    ble lbl_fn_804CC618_00000F90
    bl fn_8020924C
    cmpwi r3, 0x0
    beq lbl_fn_804CC618_00000FB8
    lwz r28, 0x4(r3)
    b lbl_fn_804CC618_00000FBC
lbl_fn_804CC618_00000F90:
    lwz r0, lbl_8087F86C
    cmpwi r0, 0x0
    beq lbl_fn_804CC618_00000FB8
    add r3, r0, r24
    lwz r28, 0x1bc(r3)
    cmpwi r28, 0x0
    beq lbl_fn_804CC618_00000FB0
    b lbl_fn_804CC618_00000FBC
lbl_fn_804CC618_00000FB0:
    la r28, lbl_808813D0
    b lbl_fn_804CC618_00000FBC
lbl_fn_804CC618_00000FB8:
    li r28, 0x0
lbl_fn_804CC618_00000FBC:
    cmpwi r28, 0x0
    beq lbl_fn_804CC618_00000FE4
    lwz r4, 0x74(r26)
    addi r3, r30, 0x170
    addi r27, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r27
    mr r5, r28
    bl fn_801FEE08
lbl_fn_804CC618_00000FE4:
    addi r23, r23, 0x1
    addi r25, r25, 0x4
    cmpwi r23, 0x18
    addi r24, r24, 0x8
    addi r26, r26, 0x4
    blt lbl_fn_804CC618_00000F1C
    lis r3, lbl_80759374@ha
    li r23, 0x0
    addi r3, r3, lbl_80759374@l
    la r29, lbl_8087E140
    addi r28, r3, 0x170
lbl_fn_804CC618_00001010:
    lwz r4, 0x6c(r31)
    mr r3, r28
    addi r27, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r27
    mr r5, r29
    bl fn_801FEE08
    addi r23, r23, 0x1
    addi r31, r31, 0x4
    cmpwi r23, 0x2
    blt lbl_fn_804CC618_00001010
    addi r11, r1, 0xa0
    bl _restgpr_23
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_804CC7A4(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    addi r11, r1, 0xb0
    bl _savegpr_18
    lfs f0, lbl_808874E0
    lis r4, lbl_80759374@ha
    mr r20, r3
    stfs f0, 0x58(r1)
    mr r26, r20
    addi r31, r4, lbl_80759374@l
    stfs f0, 0xc(r1)
    li r21, 0x0
    li r25, 0x0
    li r18, 0x1
    stfs f0, 0x24(r1)
    li r19, 0x0
    stfs f0, 0x3c(r1)
    stfs f0, 0x54(r1)
lbl_fn_804CC7A4_000010A4:
    lwz r3, 0x74(r26)
    mr r5, r31
    addi r4, r31, 0x170
    bl fn_801F4C14
    cmpwi r21, 0x14
    bge lbl_fn_804CC7A4_000013B0
    lwz r0, lbl_8087F86C
    add r3, r0, r25
    lwz r22, 0x274(r3)
    cmpwi r22, 0x0
    beq lbl_fn_804CC7A4_000010D4
    b lbl_fn_804CC7A4_000010D8
lbl_fn_804CC7A4_000010D4:
    la r22, lbl_808813D0
lbl_fn_804CC7A4_000010D8:
    cmpwi r22, 0x0
    beq lbl_fn_804CC7A4_00001100
    lwz r4, 0x74(r26)
    addi r3, r31, 0x170
    addi r23, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r23
    mr r5, r22
    bl fn_801FEE08
lbl_fn_804CC7A4_00001100:
    lwz r30, 0x164(r20)
    li r27, 0x0
    lwz r3, lbl_8087F610
    cmpwi r30, 0x0
    addi r6, r3, 0x2a50
    blt lbl_fn_804CC7A4_00001120
    cmpwi r30, 0x15
    ble lbl_fn_804CC7A4_00001128
lbl_fn_804CC7A4_00001120:
    li r29, 0x0
    b lbl_fn_804CC7A4_000011D4
lbl_fn_804CC7A4_00001128:
    bge lbl_fn_804CC7A4_00001138
    mulli r0, r30, 0xc
    lwzx r29, r6, r0
    b lbl_fn_804CC7A4_000011D4
lbl_fn_804CC7A4_00001138:
    lwz r4, 0x0(r6)
    lwz r3, 0xc(r6)
    lwz r0, 0x18(r6)
    add r5, r4, r3
    lwz r3, 0x24(r6)
    add r5, r5, r0
    lwz r0, 0x30(r6)
    add r5, r5, r3
    lwz r4, 0x3c(r6)
    add r5, r5, r0
    lwz r3, 0x48(r6)
    add r5, r5, r4
    lwz r0, 0x54(r6)
    add r5, r5, r3
    lwz r3, 0x60(r6)
    add r5, r5, r0
    lwz r0, 0x6c(r6)
    add r5, r5, r3
    lwz r4, 0x78(r6)
    add r5, r5, r0
    lwz r3, 0x84(r6)
    add r5, r5, r4
    lwz r0, 0x90(r6)
    add r5, r5, r3
    lwz r3, 0x9c(r6)
    add r5, r5, r0
    lwz r0, 0xa8(r6)
    add r5, r5, r3
    lwz r4, 0xb4(r6)
    add r5, r5, r0
    lwz r3, 0xc0(r6)
    add r5, r5, r4
    lwz r0, 0xcc(r6)
    add r5, r5, r3
    lwz r3, 0xd8(r6)
    add r5, r5, r0
    lwz r0, 0xe4(r6)
    add r5, r5, r3
    add r29, r5, r0
lbl_fn_804CC7A4_000011D4:
    mulli r23, r30, 0xc
    slw r22, r18, r21
    li r28, 0x0
    li r24, 0x0
    b lbl_fn_804CC7A4_0000134C
lbl_fn_804CC7A4_000011E8:
    lwz r3, lbl_8087F610
    cmpwi r30, 0x0
    mr r5, r28
    addi r3, r3, 0x2a50
    blt lbl_fn_804CC7A4_00001204
    cmpwi r30, 0x15
    ble lbl_fn_804CC7A4_0000120C
lbl_fn_804CC7A4_00001204:
    li r3, 0x0
    b lbl_fn_804CC7A4_00001324
lbl_fn_804CC7A4_0000120C:
    bge lbl_fn_804CC7A4_00001238
    cmpwi r28, 0x0
    blt lbl_fn_804CC7A4_00001224
    lwzux r0, r3, r23
    cmpw r0, r28
    bgt lbl_fn_804CC7A4_0000122C
lbl_fn_804CC7A4_00001224:
    li r3, 0x0
    b lbl_fn_804CC7A4_00001324
lbl_fn_804CC7A4_0000122C:
    lwz r0, 0x8(r3)
    add r3, r0, r24
    b lbl_fn_804CC7A4_00001324
lbl_fn_804CC7A4_00001238:
    cmpwi r28, 0x0
    bge lbl_fn_804CC7A4_00001248
    li r3, 0x0
    b lbl_fn_804CC7A4_00001324
lbl_fn_804CC7A4_00001248:
    mr r6, r3
    li r4, 0x0
    b lbl_fn_804CC7A4_00001260
lbl_fn_804CC7A4_00001254:
    subf r5, r0, r5
    addi r6, r6, 0xc
    addi r4, r4, 0x1
lbl_fn_804CC7A4_00001260:
    cmpwi r4, 0x14
    bge lbl_fn_804CC7A4_00001274
    lwz r0, 0x0(r6)
    cmplw r0, r5
    ble lbl_fn_804CC7A4_00001254
lbl_fn_804CC7A4_00001274:
    cmpwi r4, 0x14
    bge lbl_fn_804CC7A4_00001320
    cmpwi r4, 0x0
    blt lbl_fn_804CC7A4_0000128C
    cmpwi r4, 0x15
    ble lbl_fn_804CC7A4_00001294
lbl_fn_804CC7A4_0000128C:
    li r3, 0x0
    b lbl_fn_804CC7A4_00001324
lbl_fn_804CC7A4_00001294:
    bge lbl_fn_804CC7A4_000012CC
    cmpwi r5, 0x0
    blt lbl_fn_804CC7A4_000012B4
    mulli r0, r4, 0xc
    add r3, r3, r0
    lwz r0, 0x0(r3)
    cmpw r0, r5
    bgt lbl_fn_804CC7A4_000012BC
lbl_fn_804CC7A4_000012B4:
    li r3, 0x0
    b lbl_fn_804CC7A4_00001324
lbl_fn_804CC7A4_000012BC:
    mulli r0, r5, 0x1c
    lwz r3, 0x8(r3)
    add r3, r3, r0
    b lbl_fn_804CC7A4_00001324
lbl_fn_804CC7A4_000012CC:
    cmpwi r5, 0x0
    bge lbl_fn_804CC7A4_000012DC
    li r3, 0x0
    b lbl_fn_804CC7A4_00001324
lbl_fn_804CC7A4_000012DC:
    mr r6, r3
    li r4, 0x0
    b lbl_fn_804CC7A4_000012F4
lbl_fn_804CC7A4_000012E8:
    subf r5, r0, r5
    addi r6, r6, 0xc
    addi r4, r4, 0x1
lbl_fn_804CC7A4_000012F4:
    cmpwi r4, 0x14
    bge lbl_fn_804CC7A4_00001308
    lwz r0, 0x0(r6)
    cmplw r0, r5
    ble lbl_fn_804CC7A4_000012E8
lbl_fn_804CC7A4_00001308:
    cmpwi r4, 0x14
    bge lbl_fn_804CC7A4_00001318
    bl fn_804C54FC
    b lbl_fn_804CC7A4_00001324
lbl_fn_804CC7A4_00001318:
    li r3, 0x0
    b lbl_fn_804CC7A4_00001324
lbl_fn_804CC7A4_00001320:
    li r3, 0x0
lbl_fn_804CC7A4_00001324:
    cmpwi r3, 0x0
    beq lbl_fn_804CC7A4_00001344
    lwz r0, 0x4(r3)
    srwi r0, r0, 8
    and. r0, r0, r22
    beq lbl_fn_804CC7A4_00001344
    li r27, 0x1
    b lbl_fn_804CC7A4_00001354
lbl_fn_804CC7A4_00001344:
    addi r24, r24, 0x1c
    addi r28, r28, 0x1
lbl_fn_804CC7A4_0000134C:
    cmpw r28, r29
    blt lbl_fn_804CC7A4_000011E8
lbl_fn_804CC7A4_00001354:
    cmpwi r27, 0x0
    beq lbl_fn_804CC7A4_00001388
    stw r18, 0x110(r26)
    addi r3, r31, 0x253
    lwz r4, 0x74(r26)
    addi r22, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_808874F0
    mr r4, r3
    mr r3, r22
    li r5, 0x0
    bl fn_801FEDBC
    b lbl_fn_804CC7A4_000013B0
lbl_fn_804CC7A4_00001388:
    stw r19, 0x110(r26)
    addi r3, r31, 0x253
    lwz r4, 0x74(r26)
    addi r22, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80887544
    mr r4, r3
    mr r3, r22
    li r5, 0x0
    bl fn_801FEDBC
lbl_fn_804CC7A4_000013B0:
    addi r21, r21, 0x1
    addi r25, r25, 0x8
    cmpwi r21, 0x18
    addi r26, r26, 0x4
    blt lbl_fn_804CC7A4_000010A4
    lwz r4, 0x70(r20)
    lis r3, lbl_80759374@ha
    addi r3, r3, lbl_80759374@l
    la r18, lbl_8087E140
    addi r3, r3, 0x170
    addi r19, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r19
    mr r5, r18
    bl fn_801FEE08
    addi r11, r1, 0xb0
    bl _restgpr_18
    lwz r0, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_804CCB54(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stmw r22, 0x48(r1)
    li r27, 0x0
    mr r26, r3
    stw r27, 0x8(r1)
    stw r27, 0xc(r1)
    stw r27, 0x10(r1)
    stw r27, 0x14(r1)
    stw r27, 0x18(r1)
    lwz r0, 0x164(r3)
    stw r27, 0x1c(r1)
    cmpwi r0, 0x0
    stw r27, 0x20(r1)
    stw r27, 0x24(r1)
    stw r27, 0x28(r1)
    stw r27, 0x2c(r1)
    stw r27, 0x30(r1)
    stw r27, 0x34(r1)
    stw r27, 0x38(r1)
    stw r27, 0x3c(r1)
    stw r27, 0x40(r1)
    stw r27, 0x44(r1)
    blt lbl_fn_804CCB54_00001490
    cmplwi r0, 0x16
    bge lbl_fn_804CCB54_00001490
    lis r3, lbl_807592E0@ha
    slwi r0, r0, 2
    addi r3, r3, lbl_807592E0@l
    lwzx r3, r3, r0
    cmpwi r3, 0x0
    ble lbl_fn_804CCB54_00001490
    bl fn_8020924C
lbl_fn_804CCB54_00001490:
    lwz r0, 0x164(r26)
    lwz r3, lbl_8087F610
    cmpwi r0, 0x0
    addi r6, r3, 0x2a50
    blt lbl_fn_804CCB54_000014AC
    cmpwi r0, 0x15
    ble lbl_fn_804CCB54_000014B4
lbl_fn_804CCB54_000014AC:
    li r30, 0x0
    b lbl_fn_804CCB54_00001560
lbl_fn_804CCB54_000014B4:
    bge lbl_fn_804CCB54_000014C4
    mulli r0, r0, 0xc
    lwzx r30, r6, r0
    b lbl_fn_804CCB54_00001560
lbl_fn_804CCB54_000014C4:
    lwz r4, 0x0(r6)
    lwz r3, 0xc(r6)
    lwz r0, 0x18(r6)
    add r5, r4, r3
    lwz r3, 0x24(r6)
    add r5, r5, r0
    lwz r0, 0x30(r6)
    add r5, r5, r3
    lwz r4, 0x3c(r6)
    add r5, r5, r0
    lwz r3, 0x48(r6)
    add r5, r5, r4
    lwz r0, 0x54(r6)
    add r5, r5, r3
    lwz r3, 0x60(r6)
    add r5, r5, r0
    lwz r0, 0x6c(r6)
    add r5, r5, r3
    lwz r4, 0x78(r6)
    add r5, r5, r0
    lwz r3, 0x84(r6)
    add r5, r5, r4
    lwz r0, 0x90(r6)
    add r5, r5, r3
    lwz r3, 0x9c(r6)
    add r5, r5, r0
    lwz r0, 0xa8(r6)
    add r5, r5, r3
    lwz r4, 0xb4(r6)
    add r5, r5, r0
    lwz r3, 0xc0(r6)
    add r5, r5, r4
    lwz r0, 0xcc(r6)
    add r5, r5, r3
    lwz r3, 0xd8(r6)
    add r5, r5, r0
    lwz r0, 0xe4(r6)
    add r5, r5, r3
    add r30, r5, r0
lbl_fn_804CCB54_00001560:
    li r31, 0x0
    stw r31, 0xe8(r26)
    li r29, 0x0
    li r23, 0x1
    b lbl_fn_804CCB54_000016EC
lbl_fn_804CCB54_00001574:
    lwz r0, 0x164(r26)
    mr r5, r29
    lwz r3, lbl_8087F610
    cmpwi r0, 0x0
    addi r3, r3, 0x2a50
    blt lbl_fn_804CCB54_00001594
    cmpwi r0, 0x15
    ble lbl_fn_804CCB54_0000159C
lbl_fn_804CCB54_00001594:
    li r3, 0x0
    b lbl_fn_804CCB54_000016B8
lbl_fn_804CCB54_0000159C:
    bge lbl_fn_804CCB54_000015CC
    cmpwi r29, 0x0
    blt lbl_fn_804CCB54_000015B8
    mulli r0, r0, 0xc
    lwzux r0, r3, r0
    cmpw r0, r29
    bgt lbl_fn_804CCB54_000015C0
lbl_fn_804CCB54_000015B8:
    li r3, 0x0
    b lbl_fn_804CCB54_000016B8
lbl_fn_804CCB54_000015C0:
    lwz r0, 0x8(r3)
    add r3, r0, r31
    b lbl_fn_804CCB54_000016B8
lbl_fn_804CCB54_000015CC:
    cmpwi r29, 0x0
    bge lbl_fn_804CCB54_000015DC
    li r3, 0x0
    b lbl_fn_804CCB54_000016B8
lbl_fn_804CCB54_000015DC:
    mr r6, r3
    li r4, 0x0
    b lbl_fn_804CCB54_000015F4
lbl_fn_804CCB54_000015E8:
    subf r5, r0, r5
    addi r6, r6, 0xc
    addi r4, r4, 0x1
lbl_fn_804CCB54_000015F4:
    cmpwi r4, 0x14
    bge lbl_fn_804CCB54_00001608
    lwz r0, 0x0(r6)
    cmplw r0, r5
    ble lbl_fn_804CCB54_000015E8
lbl_fn_804CCB54_00001608:
    cmpwi r4, 0x14
    bge lbl_fn_804CCB54_000016B4
    cmpwi r4, 0x0
    blt lbl_fn_804CCB54_00001620
    cmpwi r4, 0x15
    ble lbl_fn_804CCB54_00001628
lbl_fn_804CCB54_00001620:
    li r3, 0x0
    b lbl_fn_804CCB54_000016B8
lbl_fn_804CCB54_00001628:
    bge lbl_fn_804CCB54_00001660
    cmpwi r5, 0x0
    blt lbl_fn_804CCB54_00001648
    mulli r0, r4, 0xc
    add r3, r3, r0
    lwz r0, 0x0(r3)
    cmpw r0, r5
    bgt lbl_fn_804CCB54_00001650
lbl_fn_804CCB54_00001648:
    li r3, 0x0
    b lbl_fn_804CCB54_000016B8
lbl_fn_804CCB54_00001650:
    mulli r0, r5, 0x1c
    lwz r3, 0x8(r3)
    add r3, r3, r0
    b lbl_fn_804CCB54_000016B8
lbl_fn_804CCB54_00001660:
    cmpwi r5, 0x0
    bge lbl_fn_804CCB54_00001670
    li r3, 0x0
    b lbl_fn_804CCB54_000016B8
lbl_fn_804CCB54_00001670:
    mr r6, r3
    li r4, 0x0
    b lbl_fn_804CCB54_00001688
lbl_fn_804CCB54_0000167C:
    subf r5, r0, r5
    addi r6, r6, 0xc
    addi r4, r4, 0x1
lbl_fn_804CCB54_00001688:
    cmpwi r4, 0x14
    bge lbl_fn_804CCB54_0000169C
    lwz r0, 0x0(r6)
    cmplw r0, r5
    ble lbl_fn_804CCB54_0000167C
lbl_fn_804CCB54_0000169C:
    cmpwi r4, 0x14
    bge lbl_fn_804CCB54_000016AC
    bl fn_804C54FC
    b lbl_fn_804CCB54_000016B8
lbl_fn_804CCB54_000016AC:
    li r3, 0x0
    b lbl_fn_804CCB54_000016B8
lbl_fn_804CCB54_000016B4:
    li r3, 0x0
lbl_fn_804CCB54_000016B8:
    cmpwi r3, 0x0
    beq lbl_fn_804CCB54_000016E4
    lwz r3, 0x4(r3)
    lwz r0, 0x168(r26)
    srwi r3, r3, 8
    slw r0, r23, r0
    and. r0, r3, r0
    beq lbl_fn_804CCB54_000016E4
    lwz r3, 0xe8(r26)
    addi r0, r3, 0x1
    stw r0, 0xe8(r26)
lbl_fn_804CCB54_000016E4:
    addi r29, r29, 0x1
    addi r31, r31, 0x1c
lbl_fn_804CCB54_000016EC:
    cmplw r29, r30
    blt lbl_fn_804CCB54_00001574
    li r28, 0x0
    li r25, 0x0
    li r29, 0x0
    li r31, 0x0
    li r23, 0x1
    b lbl_fn_804CCB54_0000188C
lbl_fn_804CCB54_0000170C:
    lwz r0, 0xec(r26)
    cmplw r29, r0
    bge lbl_fn_804CCB54_00001894
    lwz r0, 0x164(r26)
    mr r5, r28
    lwz r3, lbl_8087F610
    cmpwi r0, 0x0
    addi r3, r3, 0x2a50
    blt lbl_fn_804CCB54_00001738
    cmpwi r0, 0x15
    ble lbl_fn_804CCB54_00001740
lbl_fn_804CCB54_00001738:
    li r3, 0x0
    b lbl_fn_804CCB54_0000185C
lbl_fn_804CCB54_00001740:
    bge lbl_fn_804CCB54_00001770
    cmpwi r28, 0x0
    blt lbl_fn_804CCB54_0000175C
    mulli r0, r0, 0xc
    lwzux r0, r3, r0
    cmpw r0, r28
    bgt lbl_fn_804CCB54_00001764
lbl_fn_804CCB54_0000175C:
    li r3, 0x0
    b lbl_fn_804CCB54_0000185C
lbl_fn_804CCB54_00001764:
    lwz r0, 0x8(r3)
    add r3, r0, r25
    b lbl_fn_804CCB54_0000185C
lbl_fn_804CCB54_00001770:
    cmpwi r28, 0x0
    bge lbl_fn_804CCB54_00001780
    li r3, 0x0
    b lbl_fn_804CCB54_0000185C
lbl_fn_804CCB54_00001780:
    mr r6, r3
    li r4, 0x0
    b lbl_fn_804CCB54_00001798
lbl_fn_804CCB54_0000178C:
    subf r5, r0, r5
    addi r6, r6, 0xc
    addi r4, r4, 0x1
lbl_fn_804CCB54_00001798:
    cmpwi r4, 0x14
    bge lbl_fn_804CCB54_000017AC
    lwz r0, 0x0(r6)
    cmplw r0, r5
    ble lbl_fn_804CCB54_0000178C
lbl_fn_804CCB54_000017AC:
    cmpwi r4, 0x14
    bge lbl_fn_804CCB54_00001858
    cmpwi r4, 0x0
    blt lbl_fn_804CCB54_000017C4
    cmpwi r4, 0x15
    ble lbl_fn_804CCB54_000017CC
lbl_fn_804CCB54_000017C4:
    li r3, 0x0
    b lbl_fn_804CCB54_0000185C
lbl_fn_804CCB54_000017CC:
    bge lbl_fn_804CCB54_00001804
    cmpwi r5, 0x0
    blt lbl_fn_804CCB54_000017EC
    mulli r0, r4, 0xc
    add r3, r3, r0
    lwz r0, 0x0(r3)
    cmpw r0, r5
    bgt lbl_fn_804CCB54_000017F4
lbl_fn_804CCB54_000017EC:
    li r3, 0x0
    b lbl_fn_804CCB54_0000185C
lbl_fn_804CCB54_000017F4:
    mulli r0, r5, 0x1c
    lwz r3, 0x8(r3)
    add r3, r3, r0
    b lbl_fn_804CCB54_0000185C
lbl_fn_804CCB54_00001804:
    cmpwi r5, 0x0
    bge lbl_fn_804CCB54_00001814
    li r3, 0x0
    b lbl_fn_804CCB54_0000185C
lbl_fn_804CCB54_00001814:
    mr r6, r3
    li r4, 0x0
    b lbl_fn_804CCB54_0000182C
lbl_fn_804CCB54_00001820:
    subf r5, r0, r5
    addi r6, r6, 0xc
    addi r4, r4, 0x1
lbl_fn_804CCB54_0000182C:
    cmpwi r4, 0x14
    bge lbl_fn_804CCB54_00001840
    lwz r0, 0x0(r6)
    cmplw r0, r5
    ble lbl_fn_804CCB54_00001820
lbl_fn_804CCB54_00001840:
    cmpwi r4, 0x14
    bge lbl_fn_804CCB54_00001850
    bl fn_804C54FC
    b lbl_fn_804CCB54_0000185C
lbl_fn_804CCB54_00001850:
    li r3, 0x0
    b lbl_fn_804CCB54_0000185C
lbl_fn_804CCB54_00001858:
    li r3, 0x0
lbl_fn_804CCB54_0000185C:
    cmpwi r3, 0x0
    addi r28, r28, 0x1
    addi r25, r25, 0x1c
    beq lbl_fn_804CCB54_00001888
    lwz r3, 0x4(r3)
    lwz r0, 0x168(r26)
    srwi r3, r3, 8
    slw r0, r23, r0
    and. r0, r3, r0
    beq lbl_fn_804CCB54_00001888
    addi r29, r29, 0x1
lbl_fn_804CCB54_00001888:
    addi r31, r31, 0x1
lbl_fn_804CCB54_0000188C:
    cmplw r31, r30
    blt lbl_fn_804CCB54_0000170C
lbl_fn_804CCB54_00001894:
    mulli r25, r28, 0x1c
    lis r24, lbl_80759374@ha
    mr r29, r26
    addi r24, r24, lbl_80759374@l
    la r31, lbl_8087E140
    li r23, 0x1
    b lbl_fn_804CCB54_00001A50
lbl_fn_804CCB54_000018B0:
    lwz r0, 0x164(r26)
    mr r5, r28
    lwz r3, lbl_8087F610
    cmpwi r0, 0x0
    addi r3, r3, 0x2a50
    blt lbl_fn_804CCB54_000018D0
    cmpwi r0, 0x15
    ble lbl_fn_804CCB54_000018D8
lbl_fn_804CCB54_000018D0:
    li r3, 0x0
    b lbl_fn_804CCB54_000019F4
lbl_fn_804CCB54_000018D8:
    bge lbl_fn_804CCB54_00001908
    cmpwi r28, 0x0
    blt lbl_fn_804CCB54_000018F4
    mulli r0, r0, 0xc
    lwzux r0, r3, r0
    cmpw r0, r28
    bgt lbl_fn_804CCB54_000018FC
lbl_fn_804CCB54_000018F4:
    li r3, 0x0
    b lbl_fn_804CCB54_000019F4
lbl_fn_804CCB54_000018FC:
    lwz r0, 0x8(r3)
    add r3, r0, r25
    b lbl_fn_804CCB54_000019F4
lbl_fn_804CCB54_00001908:
    cmpwi r28, 0x0
    bge lbl_fn_804CCB54_00001918
    li r3, 0x0
    b lbl_fn_804CCB54_000019F4
lbl_fn_804CCB54_00001918:
    mr r6, r3
    li r4, 0x0
    b lbl_fn_804CCB54_00001930
lbl_fn_804CCB54_00001924:
    subf r5, r0, r5
    addi r6, r6, 0xc
    addi r4, r4, 0x1
lbl_fn_804CCB54_00001930:
    cmpwi r4, 0x14
    bge lbl_fn_804CCB54_00001944
    lwz r0, 0x0(r6)
    cmplw r0, r5
    ble lbl_fn_804CCB54_00001924
lbl_fn_804CCB54_00001944:
    cmpwi r4, 0x14
    bge lbl_fn_804CCB54_000019F0
    cmpwi r4, 0x0
    blt lbl_fn_804CCB54_0000195C
    cmpwi r4, 0x15
    ble lbl_fn_804CCB54_00001964
lbl_fn_804CCB54_0000195C:
    li r3, 0x0
    b lbl_fn_804CCB54_000019F4
lbl_fn_804CCB54_00001964:
    bge lbl_fn_804CCB54_0000199C
    cmpwi r5, 0x0
    blt lbl_fn_804CCB54_00001984
    mulli r0, r4, 0xc
    add r3, r3, r0
    lwz r0, 0x0(r3)
    cmpw r0, r5
    bgt lbl_fn_804CCB54_0000198C
lbl_fn_804CCB54_00001984:
    li r3, 0x0
    b lbl_fn_804CCB54_000019F4
lbl_fn_804CCB54_0000198C:
    mulli r0, r5, 0x1c
    lwz r3, 0x8(r3)
    add r3, r3, r0
    b lbl_fn_804CCB54_000019F4
lbl_fn_804CCB54_0000199C:
    cmpwi r5, 0x0
    bge lbl_fn_804CCB54_000019AC
    li r3, 0x0
    b lbl_fn_804CCB54_000019F4
lbl_fn_804CCB54_000019AC:
    mr r6, r3
    li r4, 0x0
    b lbl_fn_804CCB54_000019C4
lbl_fn_804CCB54_000019B8:
    subf r5, r0, r5
    addi r6, r6, 0xc
    addi r4, r4, 0x1
lbl_fn_804CCB54_000019C4:
    cmpwi r4, 0x14
    bge lbl_fn_804CCB54_000019D8
    lwz r0, 0x0(r6)
    cmplw r0, r5
    ble lbl_fn_804CCB54_000019B8
lbl_fn_804CCB54_000019D8:
    cmpwi r4, 0x14
    bge lbl_fn_804CCB54_000019E8
    bl fn_804C54FC
    b lbl_fn_804CCB54_000019F4
lbl_fn_804CCB54_000019E8:
    li r3, 0x0
    b lbl_fn_804CCB54_000019F4
lbl_fn_804CCB54_000019F0:
    li r3, 0x0
lbl_fn_804CCB54_000019F4:
    cmpwi r3, 0x0
    beq lbl_fn_804CCB54_00001A48
    lwz r3, 0x4(r3)
    lwz r0, 0x168(r26)
    srwi r3, r3, 8
    slw r0, r23, r0
    and. r0, r3, r0
    beq lbl_fn_804CCB54_00001A48
    cmpwi r27, 0x8
    bge lbl_fn_804CCB54_00001A48
    stw r28, 0xf0(r29)
    addi r3, r24, 0x170
    lwz r4, 0x74(r29)
    addi r22, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r22
    mr r5, r31
    bl fn_801FEE08
    addi r29, r29, 0x4
    addi r27, r27, 0x1
lbl_fn_804CCB54_00001A48:
    addi r28, r28, 0x1
    addi r25, r25, 0x1c
lbl_fn_804CCB54_00001A50:
    cmplw r28, r30
    blt lbl_fn_804CCB54_000018B0
    cmplwi r27, 0x8
    bge lbl_fn_804CCB54_00001AB4
    lis r3, lbl_80759374@ha
    slwi r0, r27, 2
    addi r3, r3, lbl_80759374@l
    la r24, lbl_8087E140
    addi r23, r3, 0x170
    add r28, r26, r0
    li r25, -0x1
    b lbl_fn_804CCB54_00001AAC
lbl_fn_804CCB54_00001A80:
    stw r25, 0xf0(r28)
    mr r3, r23
    lwz r4, 0x74(r28)
    addi r22, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r22
    mr r5, r24
    bl fn_801FEE08
    addi r28, r28, 0x4
    addi r27, r27, 0x1
lbl_fn_804CCB54_00001AAC:
    cmplwi r27, 0x8
    blt lbl_fn_804CCB54_00001A80
lbl_fn_804CCB54_00001AB4:
    lis r25, lbl_80759374@ha
    lwz r3, 0x50(r26)
    addi r25, r25, lbl_80759374@l
    lwz r5, 0xe8(r26)
    addi r4, r25, 0x138
    li r6, 0x0
    bl fn_801F4CB4
    lwz r0, 0xe8(r26)
    addi r4, r25, 0x146
    lwz r3, 0x50(r26)
    cmpwi r0, 0x0
    bne lbl_fn_804CCB54_00001AEC
    li r5, 0x0
    b lbl_fn_804CCB54_00001AFC
lbl_fn_804CCB54_00001AEC:
    lwz r5, 0xec(r26)
    lwz r0, 0xe4(r26)
    add r5, r5, r0
    addi r5, r5, 0x1
lbl_fn_804CCB54_00001AFC:
    li r6, 0x0
    bl fn_801F4CB4
    lwz r3, 0x50(r26)
    lis r25, lbl_80759374@ha
    la r27, lbl_8087E140
    addi r25, r25, lbl_80759374@l
    addi r22, r3, 0x58
    addi r23, r27, 0x12
    addi r3, r25, 0x154
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r22
    mr r5, r23
    bl fn_801FEE08
    lwz r4, 0x50(r26)
    addi r23, r27, 0x16
    addi r3, r25, 0x162
    addi r22, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r22
    mr r5, r23
    bl fn_801FEE08
    lwz r3, lbl_8087F1E4
    lwz r22, 0xde4(r3)
    cmpwi r22, 0x0
    beq lbl_fn_804CCB54_00001B6C
    b lbl_fn_804CCB54_00001B70
lbl_fn_804CCB54_00001B6C:
    la r22, lbl_808813D0
lbl_fn_804CCB54_00001B70:
    lwz r4, 0x50(r26)
    lis r3, lbl_80759374@ha
    addi r3, r3, lbl_80759374@l
    addi r3, r3, 0x170
    addi r23, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r23
    mr r5, r22
    bl fn_801FEE08
    lmw r22, 0x48(r1)
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}
