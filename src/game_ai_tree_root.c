#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_14(void);
extern void _restgpr_18(void);
extern void _savegpr_14(void);
extern void _savegpr_18(void);
extern void dtor_80084684(void);
extern void fn_800185B4(void);
extern void fn_8003EA3C(void);
extern void fn_80057F28(void);
extern void fn_80058078(void);
extern void fn_800580BC(void);
extern void fn_800588FC(void);
extern void fn_8005B3CC(void);
extern void fn_8005B5F8(void);
extern void fn_8005B6E8(void);
extern void fn_80084320(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_800897D8(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800C31F4(void);
extern void fn_800CB3A0(void);
extern void fn_800D246C(void);
extern void fn_800DC12C(void);
extern void fn_800F8548(void);
extern void fn_801028E4(void);
extern void fn_8011FC10(void);
extern void fn_8013655C(void);
extern void fn_80139560(void);
extern void fn_80145334(void);
extern void fn_8014C540(void);
extern void fn_8015E7A0(void);
extern void fn_8015ECC4(void);
extern void fn_80166A54(void);
extern void fn_8016DA4C(void);
extern void fn_8016E970(void);
extern void fn_80219E6C(void);
extern void fn_8023781C(void);
extern void fn_80237874(void);
extern void fn_80239DAC(void);
extern void fn_80258574(void);
extern void fn_80258A50(void);
extern void fn_80258F1C(void);
extern void fn_8025922C(void);
extern void fn_8025941C(void);
extern void fn_80259AB4(void);
extern void fn_8025D6D0(void);
extern void fn_8025D704(void);
extern void fn_8035B78C(void);
extern void fn_80370A78(void);
extern void fn_80370AE4(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473E8C(void);
extern void fn_80473F50(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_80682428(void);
extern void fn_80682544(void);
extern void fn_80684600(void);
extern void fn_80695720(void);
extern void fn_806959D8(void);

/* External data declarations */
extern u8 jumptable_80784678[];
extern u8 lbl_80743CF0[];
extern u8 lbl_80743D00[];
extern u8 lbl_80743D18[];
extern u8 lbl_807772B0[];
extern u8 lbl_807772D0[];
extern u8 lbl_807C6B90[];
extern u8 lbl_807C8328[];

/* Small data declarations */
extern u32 lbl_8087D708;
extern u32 lbl_8087DC28;
extern u32 lbl_8087DC2C;
extern u32 lbl_8087EE68;
extern u32 lbl_8087EF10;
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F408;
extern u32 lbl_8087F430;
extern u32 lbl_8087F8A0;
extern u32 lbl_808833E0;
extern u32 lbl_808833F4;
extern u32 lbl_80883420;
extern u32 lbl_80883424;
extern u32 lbl_80883428;
extern u32 lbl_8088342C;
extern u32 lbl_80883430;
extern u32 lbl_80883434;
extern u32 lbl_80883438;
extern u32 lbl_8088343C;
extern u32 lbl_80883440;
extern u32 lbl_80883444;
extern u32 lbl_80883448;
extern u32 lbl_8088344C;

/* Function declarations */
void fn_80255F2C(void);
void fn_80255F68(void);
void fn_80256014(void);
void fn_802561C4(void);
void fn_80256384(void);
void fn_80256C04(void);

asm void fn_80255F2C(void)
{
    nofralloc
    li r0, 0x2
    stw r0, 0x4(r3)
    li r0, 0x0
    stw r0, 0x8(r3)
    stw r0, 0xc(r3)
    stw r0, 0x10(r3)
    stw r0, 0x14(r3)
    stw r0, 0x18(r3)
    stw r0, 0x1c(r3)
    stw r0, 0x20(r3)
    stw r0, 0x24(r3)
    stw r0, 0x28(r3)
    stw r0, 0x2c(r3)
    stw r0, 0x30(r3)
    blr
}

asm void fn_80255F68(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x34(r1)
    stmw r25, 0x14(r1)
    mr r25, r3
    mr r26, r4
    beq lbl_fn_80255F68_000000D0
    addic. r0, r3, 0x4
    beq lbl_fn_80255F68_000000C0
    mr r28, r25
    li r29, 0x0
    li r31, 0x0
lbl_fn_80255F68_00000070:
    mr r27, r28
    li r30, 0x0
lbl_fn_80255F68_00000078:
    lwz r3, 0xc(r27)
    cmpwi r3, 0x0
    beq lbl_fn_80255F68_000000A0
    beq lbl_fn_80255F68_0000009C
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80255F68_0000009C:
    stw r31, 0xc(r27)
lbl_fn_80255F68_000000A0:
    addi r30, r30, 0x1
    addi r27, r27, 0x4
    cmpwi r30, 0x3
    blt lbl_fn_80255F68_00000078
    addi r29, r29, 0x1
    addi r28, r28, 0xc
    cmpwi r29, 0x3
    blt lbl_fn_80255F68_00000070
lbl_fn_80255F68_000000C0:
    cmpwi r26, 0x0
    ble lbl_fn_80255F68_000000D0
    mr r3, r25
    bl dtor_80084684
lbl_fn_80255F68_000000D0:
    mr r3, r25
    lmw r25, 0x14(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80256014(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_fn_80256014_00000278
    addic. r0, r3, 0x16b8
    beq lbl_fn_80256014_00000134
    lwz r4, 0x16b8(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80256014_00000134
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_80256014_00000134
    bl fn_800897D8
lbl_fn_80256014_00000134:
    addic. r31, r29, 0x1640
    beq lbl_fn_80256014_00000154
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_80256014_00000154
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80256014_00000154:
    addic. r31, r29, 0x1634
    beq lbl_fn_80256014_00000174
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_80256014_00000174
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80256014_00000174:
    addic. r31, r29, 0x1628
    beq lbl_fn_80256014_00000194
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_80256014_00000194
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80256014_00000194:
    addic. r31, r29, 0x161c
    beq lbl_fn_80256014_000001B4
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_80256014_000001B4
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80256014_000001B4:
    addic. r31, r29, 0x1610
    beq lbl_fn_80256014_000001D4
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_80256014_000001D4
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80256014_000001D4:
    addic. r31, r29, 0x1604
    beq lbl_fn_80256014_000001F4
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_80256014_000001F4
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80256014_000001F4:
    addic. r31, r29, 0x15f8
    beq lbl_fn_80256014_00000214
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_80256014_00000214
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80256014_00000214:
    lis r4, fn_80255F68@ha
    addi r3, r29, 0x151c
    addi r4, r4, fn_80255F68@l
    li r5, 0x34
    li r6, 0x4
    bl fn_806959D8
    addic. r0, r29, 0x14bc
    beq lbl_fn_80256014_0000024C
    lwz r3, 0x14c4(r29)
    cmpwi r3, 0x0
    beq lbl_fn_80256014_0000024C
    beq lbl_fn_80256014_0000024C
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80256014_0000024C:
    addic. r3, r29, 0x14b4
    beq lbl_fn_80256014_0000025C
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80256014_0000025C:
    mr r3, r29
    li r4, 0x0
    bl fn_8035B78C
    cmpwi r30, 0x0
    ble lbl_fn_80256014_00000278
    mr r3, r29
    bl dtor_80084684
lbl_fn_80256014_00000278:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_802561C4(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r25, 0x14(r1)
    mr r31, r3
    lwz r0, 0x14b0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_802561C4_000003C0
    bl fn_8013655C
    cmpwi r3, 0x0
    bne lbl_fn_802561C4_00000440
    lwz r3, 0x1438(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802561C4_000002E0
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_802561C4_00000440
lbl_fn_802561C4_000002E0:
    addi r3, r31, 0x14b4
    bl fn_80473F50
    cmpwi r3, 0x0
    bne lbl_fn_802561C4_00000440
    addi r3, r31, 0x15f8
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802561C4_00000440
    addi r3, r31, 0x1604
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802561C4_00000440
    addi r3, r31, 0x1610
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802561C4_00000440
    addi r3, r31, 0x161c
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802561C4_00000440
    addi r3, r31, 0x1628
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802561C4_00000440
    addi r3, r31, 0x1634
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802561C4_00000440
    lwz r4, 0x7ec(r31)
    li r0, 0x0
    stw r0, 0x58c(r31)
    mr r3, r31
    ori r0, r4, 0x1c0
    li r4, 0x2
    oris r0, r0, 0x1
    ori r0, r0, 0xc21d
    oris r0, r0, 0x380
    stw r0, 0x7ec(r31)
    bl fn_8016E970
    mr r3, r31
    bl fn_80256384
    lwz r3, 0x1438(r31)
    lis r4, 0x2
    subi r0, r4, 0x7960
    stw r0, 0x14c8(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802561C4_000003B4
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x1438(r31)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_802561C4_000003B4:
    li r0, 0x1
    stw r0, 0x14b0(r31)
    b lbl_fn_802561C4_00000440
lbl_fn_802561C4_000003C0:
    cmpwi r0, 0x1
    bne lbl_fn_802561C4_00000440
    mr r30, r31
    li r27, 0x0
lbl_fn_802561C4_000003D0:
    mr r29, r30
    li r26, 0x0
lbl_fn_802561C4_000003D8:
    mr r28, r29
    li r25, 0x0
lbl_fn_802561C4_000003E0:
    lwz r3, 0x1528(r28)
    cmpwi r3, 0x0
    beq lbl_fn_802561C4_00000400
    bl fn_800580BC
    cmpwi r3, 0x0
    beq lbl_fn_802561C4_00000400
    li r3, 0x0
    b lbl_fn_802561C4_00000444
lbl_fn_802561C4_00000400:
    addi r25, r25, 0x1
    addi r28, r28, 0x4
    cmpwi r25, 0x3
    blt lbl_fn_802561C4_000003E0
    addi r26, r26, 0x1
    addi r29, r29, 0xc
    cmpwi r26, 0x3
    blt lbl_fn_802561C4_000003D8
    addi r27, r27, 0x1
    addi r30, r30, 0x34
    cmplwi r27, 0x4
    blt lbl_fn_802561C4_000003D0
    li r0, 0x2
    stw r0, 0x14b0(r31)
    li r3, 0x1
    b lbl_fn_802561C4_00000444
lbl_fn_802561C4_00000440:
    li r3, 0x0
lbl_fn_802561C4_00000444:
    lmw r25, 0x14(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80256384(void)
{
    nofralloc
    stwu r1, -0x6d0(r1)
    mflr r0
    stw r0, 0x6d4(r1)
    addi r11, r1, 0x6b0
    stfd f31, 0x6c0(r1)
    psq_st f31, 0x6c8(r1), 0, 0
    stfd f30, 0x6b0(r1)
    psq_st f30, 0x6b8(r1), 0, 0
    bl _savegpr_18
    lwz r4, lbl_8087F430
    mr r22, r3
    li r23, 0x0
    li r21, 0x0
    lwz r25, 0x10d8(r4)
    li r20, 0x0
    addi r3, r3, 0x14b4
    bl fn_8047059C
    mr r19, r3
    addi r3, r22, 0x14b4
    bl fn_80470580
    lis r4, lbl_807772D0@ha
    li r0, 0x0
    addi r4, r4, lbl_807772D0@l
    stw r4, 0x38(r1)
    mr r18, r3
    addi r3, r1, 0x48
    stw r0, 0x3c(r1)
    li r4, 0x0
    li r5, 0x400
    stw r0, 0x40(r1)
    stw r0, 0x44(r1)
    stw r0, 0x668(r1)
    bl memset
    addi r3, r1, 0x648
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x38(r1)
    mr r4, r18
    mr r5, r19
    addi r3, r1, 0x38
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0x38
    addi r4, r4, lbl_807772B0@l
    stw r4, 0x38(r1)
    la r4, lbl_8087D708
    bl fn_8005B6E8
    lis r30, lbl_80743D18@ha
    lis r31, lbl_80743CF0@ha
    lfs f30, lbl_808833E0
    addi r26, r1, 0x8
    lfs f31, lbl_808833F4
    addi r30, r30, lbl_80743D18@l
    addi r31, r31, lbl_80743CF0@l
    li r27, 0x8
lbl_fn_80256384_00000540:
    addi r3, r1, 0x38
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    mr r18, r3
    extsb r0, r0
    cmpwi r0, 0x3b
    beq lbl_fn_80256384_00000CA0
    cmpwi r0, 0x0
    beq lbl_fn_80256384_00000CA0
    addi r4, r30, 0x4f
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80256384_00000584
    addi r3, r1, 0x38
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x16b0(r22)
lbl_fn_80256384_00000584:
    mr r3, r18
    addi r4, r30, 0x6b
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80256384_000005AC
    addi r3, r1, 0x38
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x14fc(r22)
    b lbl_fn_80256384_00000CA0
lbl_fn_80256384_000005AC:
    mr r3, r18
    addi r4, r30, 0x11a
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80256384_00000904
lbl_fn_80256384_000005C0:
    addi r3, r1, 0x38
    bl fn_8005B3CC
    bl fn_80684600
    cmpwi r3, 0x0
    ble lbl_fn_80256384_00000CA0
    lwz r0, 0x78(r25)
    li r4, 0x0
    li r5, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80256384_00000614
lbl_fn_80256384_000005EC:
    lwz r6, 0x7c(r25)
    lwzx r0, r6, r5
    cmpw r3, r0
    bne lbl_fn_80256384_00000608
    mulli r0, r4, 0x28
    add r29, r6, r0
    b lbl_fn_80256384_00000618
lbl_fn_80256384_00000608:
    addi r5, r5, 0x28
    addi r4, r4, 0x1
    bdnz lbl_fn_80256384_000005EC
lbl_fn_80256384_00000614:
    li r29, 0x0
lbl_fn_80256384_00000618:
    cmpwi r29, 0x0
    beq lbl_fn_80256384_000005C0
    lwz r0, 0x14c4(r22)
    cmpwi r0, 0x0
    beq lbl_fn_80256384_00000638
    lwz r0, 0x14c0(r22)
    cmpwi r0, 0x0
    bne lbl_fn_80256384_00000780
lbl_fn_80256384_00000638:
    lwz r0, 0x14c0(r22)
    cmplwi r0, 0x8
    bgt lbl_fn_80256384_000008D4
    li r3, 0x70
    li r4, 0x0
    la r5, lbl_8087DC2C
    la r6, lbl_8087DC28
    li r7, 0x0
    bl fn_800846FC
    li r4, 0x0
    li r5, 0x0
    li r6, 0xc
    li r7, 0x8
    bl fn_80695720
    lwz r0, 0x14c4(r22)
    mr r18, r3
    cmpwi r0, 0x0
    beq lbl_fn_80256384_00000774
    lwz r0, 0x14bc(r22)
    li r5, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_80256384_00000694
    mr r5, r0
lbl_fn_80256384_00000694:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_80256384_00000760
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_80256384_00000738
lbl_fn_80256384_000006AC:
    lwz r0, 0x14c4(r22)
    add r7, r3, r4
    add r6, r0, r4
    addi r4, r4, 0xc
    lfs f2, 0x8(r6)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0x8(r7)
    add r7, r3, r4
    lwz r0, 0x14c4(r22)
    add r6, r0, r4
    addi r4, r4, 0xc
    lfs f2, 0x8(r6)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0x8(r7)
    add r7, r3, r4
    lwz r0, 0x14c4(r22)
    add r6, r0, r4
    addi r4, r4, 0xc
    lfs f2, 0x8(r6)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0x8(r7)
    add r7, r3, r4
    lwz r0, 0x14c4(r22)
    add r6, r0, r4
    addi r4, r4, 0xc
    lfs f2, 0x8(r6)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0x8(r7)
    bdnz lbl_fn_80256384_000006AC
    andi. r5, r5, 0x3
    beq lbl_fn_80256384_00000760
lbl_fn_80256384_00000738:
    mtctr r5
lbl_fn_80256384_0000073C:
    lwz r0, 0x14c4(r22)
    add r7, r3, r4
    add r6, r0, r4
    addi r4, r4, 0xc
    lfs f2, 0x8(r6)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0x8(r7)
    bdnz lbl_fn_80256384_0000073C
lbl_fn_80256384_00000760:
    lwz r3, 0x14c4(r22)
    cmpwi r3, 0x0
    beq lbl_fn_80256384_00000774
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80256384_00000774:
    stw r18, 0x14c4(r22)
    stw r27, 0x14c0(r22)
    b lbl_fn_80256384_000008D4
lbl_fn_80256384_00000780:
    lwz r3, 0x14bc(r22)
    cmplw r3, r0
    blt lbl_fn_80256384_000008D4
    slwi r28, r3, 1
    cmplw r0, r28
    bgt lbl_fn_80256384_000008D4
    mulli r3, r28, 0xc
    li r4, 0x0
    la r5, lbl_8087DC2C
    la r6, lbl_8087DC28
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    mr r7, r28
    li r4, 0x0
    li r5, 0x0
    li r6, 0xc
    bl fn_80695720
    lwz r0, 0x14c4(r22)
    mr r24, r3
    cmpwi r0, 0x0
    beq lbl_fn_80256384_000008CC
    lwz r0, 0x14bc(r22)
    mr r5, r28
    cmplw r28, r0
    ble lbl_fn_80256384_000007EC
    mr r5, r0
lbl_fn_80256384_000007EC:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_80256384_000008B8
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_80256384_00000890
lbl_fn_80256384_00000804:
    lwz r0, 0x14c4(r22)
    add r7, r3, r4
    add r6, r0, r4
    addi r4, r4, 0xc
    lfs f2, 0x8(r6)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0x8(r7)
    add r7, r3, r4
    lwz r0, 0x14c4(r22)
    add r6, r0, r4
    addi r4, r4, 0xc
    lfs f2, 0x8(r6)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0x8(r7)
    add r7, r3, r4
    lwz r0, 0x14c4(r22)
    add r6, r0, r4
    addi r4, r4, 0xc
    lfs f2, 0x8(r6)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0x8(r7)
    add r7, r3, r4
    lwz r0, 0x14c4(r22)
    add r6, r0, r4
    addi r4, r4, 0xc
    lfs f2, 0x8(r6)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0x8(r7)
    bdnz lbl_fn_80256384_00000804
    andi. r5, r5, 0x3
    beq lbl_fn_80256384_000008B8
lbl_fn_80256384_00000890:
    mtctr r5
lbl_fn_80256384_00000894:
    lwz r0, 0x14c4(r22)
    add r7, r3, r4
    add r6, r0, r4
    addi r4, r4, 0xc
    lfs f2, 0x8(r6)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0x8(r7)
    bdnz lbl_fn_80256384_00000894
lbl_fn_80256384_000008B8:
    lwz r3, 0x14c4(r22)
    cmpwi r3, 0x0
    beq lbl_fn_80256384_000008CC
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80256384_000008CC:
    stw r24, 0x14c4(r22)
    stw r28, 0x14c0(r22)
lbl_fn_80256384_000008D4:
    lwz r0, 0x14bc(r22)
    lwz r3, 0x14c4(r22)
    mulli r0, r0, 0xc
    lfs f2, 0xc(r29)
    psq_l f1, 0x4(r29), 0, 0
    add r3, r3, r0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x8(r3)
    lwz r3, 0x14bc(r22)
    addi r0, r3, 0x1
    stw r0, 0x14bc(r22)
    b lbl_fn_80256384_000005C0
lbl_fn_80256384_00000904:
    mr r3, r18
    addi r4, r30, 0x130
    li r5, 0xa
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_80256384_00000B34
    cmpwi r23, 0x4
    bge lbl_fn_80256384_00000CA0
    add r4, r22, r21
    addi r3, r1, 0x38
    addi r24, r4, 0x151c
    bl fn_8005B3CC
    bl fn_800DC12C
    lwz r0, 0x78(r25)
    li r4, 0x0
    li r5, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80256384_00000978
lbl_fn_80256384_00000950:
    lwz r6, 0x7c(r25)
    lwzx r0, r6, r5
    cmpw r3, r0
    bne lbl_fn_80256384_0000096C
    mulli r0, r4, 0x28
    add r0, r6, r0
    b lbl_fn_80256384_0000097C
lbl_fn_80256384_0000096C:
    addi r5, r5, 0x28
    addi r4, r4, 0x1
    bdnz lbl_fn_80256384_00000950
lbl_fn_80256384_00000978:
    li r0, 0x0
lbl_fn_80256384_0000097C:
    stw r0, 0x0(r24)
    addi r3, r1, 0x38
    bl fn_8005B3CC
    bl fn_800DC12C
    lwz r0, 0x78(r25)
    li r4, 0x0
    li r5, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80256384_000009CC
lbl_fn_80256384_000009A4:
    lwz r6, 0x7c(r25)
    lwzx r0, r6, r5
    cmpw r3, r0
    bne lbl_fn_80256384_000009C0
    mulli r0, r4, 0x28
    add r0, r6, r0
    b lbl_fn_80256384_000009D0
lbl_fn_80256384_000009C0:
    addi r5, r5, 0x28
    addi r4, r4, 0x1
    bdnz lbl_fn_80256384_000009A4
lbl_fn_80256384_000009CC:
    li r0, 0x0
lbl_fn_80256384_000009D0:
    stw r0, 0x30(r24)
    li r28, 0x0
    li r19, 0x0
lbl_fn_80256384_000009DC:
    addi r5, r30, 0x2b
    li r3, 0x88
    mr r6, r5
    li r4, 0xc
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_80256384_00000A00
    bl fn_80057F28
lbl_fn_80256384_00000A00:
    add r4, r24, r19
    stw r3, 0xc(r4)
    addi r4, r30, 0x13b
    bl fn_80058078
    addi r5, r30, 0x2b
    li r3, 0x88
    mr r6, r5
    li r4, 0xc
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_80256384_00000A34
    bl fn_80057F28
lbl_fn_80256384_00000A34:
    add r4, r24, r19
    stw r3, 0x18(r4)
    addi r4, r30, 0x13b
    bl fn_80058078
    li r29, 0x0
    li r18, 0x0
lbl_fn_80256384_00000A4C:
    add r0, r24, r18
    add r4, r0, r19
    lwz r3, 0xc(r4)
    cmpwi r3, 0x0
    beq lbl_fn_80256384_00000AFC
    lwz r0, 0x8(r3)
    stfs f30, 0xc(r1)
    clrrwi r0, r0, 1
    stw r0, 0x8(r3)
    lwz r3, 0xc(r4)
    stfs f31, 0x8(r1)
    lwz r0, 0x8(r3)
    stfs f30, 0x14(r1)
    ori r0, r0, 0x2
    psq_l f1, 0x0(r26), 0, 0
    stw r0, 0x8(r3)
    lwz r3, 0xc(r4)
    stfs f30, 0x10(r1)
    lwz r0, 0x8(r3)
    stfs f30, 0x18(r1)
    oris r0, r0, 0x4000
    psq_l f2, 0x8(r26), 0, 0
    stw r0, 0x8(r3)
    lwz r3, 0xc(r4)
    stfs f31, 0x1c(r1)
    stw r22, 0xc(r3)
    psq_l f3, 0x10(r26), 0, 0
    lwz r3, 0xc(r4)
    stfs f30, 0x24(r1)
    psq_st f1, 0x48(r3), 0, 0
    psq_st f2, 0x50(r3), 0, 0
    stfs f30, 0x20(r1)
    psq_st f3, 0x58(r3), 0, 0
    psq_l f4, 0x18(r26), 0, 0
    stfs f30, 0x2c(r1)
    stfs f30, 0x28(r1)
    psq_st f4, 0x60(r3), 0, 0
    psq_l f5, 0x20(r26), 0, 0
    stfs f30, 0x34(r1)
    stfs f31, 0x30(r1)
    psq_st f5, 0x68(r3), 0, 0
    psq_l f6, 0x28(r26), 0, 0
    psq_st f6, 0x70(r3), 0, 0
    bl fn_800588FC
lbl_fn_80256384_00000AFC:
    addi r29, r29, 0x1
    addi r18, r18, 0xc
    cmpwi r29, 0x3
    blt lbl_fn_80256384_00000A4C
    addi r28, r28, 0x1
    addi r19, r19, 0x4
    cmpwi r28, 0x3
    blt lbl_fn_80256384_000009DC
    lwzx r0, r31, r20
    addi r21, r21, 0x34
    stw r0, 0x8(r24)
    addi r20, r20, 0x4
    addi r23, r23, 0x1
    b lbl_fn_80256384_00000CA0
lbl_fn_80256384_00000B34:
    mr r3, r18
    addi r4, r30, 0x149
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80256384_00000B70
    lwz r18, lbl_8087F408
    addi r3, r1, 0x38
    bl fn_8005B3CC
    bl fn_80684600
    mr r4, r3
    mr r3, r18
    bl fn_8011FC10
    stw r3, 0x16a0(r22)
    stw r22, 0x1530(r3)
    b lbl_fn_80256384_00000CA0
lbl_fn_80256384_00000B70:
    mr r3, r18
    addi r4, r30, 0x152
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80256384_00000B9C
    addi r3, r1, 0x38
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x1500(r22)
    b lbl_fn_80256384_00000CA0
lbl_fn_80256384_00000B9C:
    mr r3, r18
    addi r4, r30, 0x161
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80256384_00000BC8
    addi r3, r1, 0x38
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x1510(r22)
    b lbl_fn_80256384_00000CA0
lbl_fn_80256384_00000BC8:
    mr r3, r18
    addi r4, r30, 0x172
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80256384_00000BF4
    addi r3, r1, 0x38
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x1504(r22)
    b lbl_fn_80256384_00000CA0
lbl_fn_80256384_00000BF4:
    mr r3, r18
    addi r4, r30, 0x17a
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80256384_00000C20
    addi r3, r1, 0x38
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x1518(r22)
    b lbl_fn_80256384_00000CA0
lbl_fn_80256384_00000C20:
    mr r3, r18
    addi r4, r30, 0x184
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80256384_00000C4C
    addi r3, r1, 0x38
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x1508(r22)
    b lbl_fn_80256384_00000CA0
lbl_fn_80256384_00000C4C:
    mr r3, r18
    addi r4, r30, 0x18f
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80256384_00000C78
    addi r3, r1, 0x38
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x150c(r22)
    b lbl_fn_80256384_00000CA0
lbl_fn_80256384_00000C78:
    mr r3, r18
    addi r4, r30, 0x19c
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80256384_00000CA0
    addi r3, r1, 0x38
    bl fn_8005B3CC
    bl fn_80684600
    bl fn_80219E6C
    stw r3, 0x1514(r22)
lbl_fn_80256384_00000CA0:
    addi r3, r1, 0x38
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_80256384_00000540
    addi r11, r1, 0x6b0
    psq_l f31, 0x6c8(r1), 0, 0
    lfd f31, 0x6c0(r1)
    psq_l f30, 0x6b8(r1), 0, 0
    lfd f30, 0x6b0(r1)
    bl _restgpr_18
    lwz r0, 0x6d4(r1)
    mtlr r0
    addi r1, r1, 0x6d0
    blr
}

asm void fn_80256C04(void)
{
    nofralloc
    stwu r1, -0x3c0(r1)
    mflr r0
    stw r0, 0x3c4(r1)
    addi r11, r1, 0x360
    stfd f31, 0x3b0(r1)
    psq_st f31, 0x3b8(r1), 0, 0
    stfd f30, 0x3a0(r1)
    psq_st f30, 0x3a8(r1), 0, 0
    stfd f29, 0x390(r1)
    psq_st f29, 0x398(r1), 0, 0
    stfd f28, 0x380(r1)
    psq_st f28, 0x388(r1), 0, 0
    stfd f27, 0x370(r1)
    psq_st f27, 0x378(r1), 0, 0
    stfd f26, 0x360(r1)
    psq_st f26, 0x368(r1), 0, 0
    bl _savegpr_14
    lwz r5, 0x16a4(r3)
    mr r15, r3
    li r4, 0x65
    addi r0, r5, 0x1
    stw r0, 0x16a4(r3)
    lwz r3, lbl_8087F430
    bl fn_80370A78
    cmpwi r3, 0x1
    beq lbl_fn_80256C04_00001AA0
    lwz r3, 0x16a8(r15)
    cmpwi r3, 0x0
    ble lbl_fn_80256C04_00000DC8
    subic. r0, r3, 0x1
    stw r0, 0x16a8(r15)
    bgt lbl_fn_80256C04_00000E0C
    lwz r3, lbl_8087F430
    li r4, 0x65
    li r5, 0x1
    bl fn_80370AE4
    li r3, 0x6
    li r0, 0x0
    stw r3, 0x58c(r15)
    mr r3, r15
    stw r0, 0x14c8(r15)
    bl fn_8016DA4C
    lwz r3, 0x5c0(r15)
    li r0, 0x1
    stw r0, 0x14d4(r15)
    ori r0, r3, 0x1
    lwz r3, 0x16a0(r15)
    stw r0, 0x5c0(r15)
    bl fn_8025D6D0
    lfs f2, 0x530(r15)
    addi r3, r15, 0x14d8
    psq_l f1, 0x528(r15), 0, 0
    addi r4, r15, 0x14e4
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x534(r15), 0, 0
    stfs f2, 0x14e0(r15)
    lfs f2, 0x53c(r15)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x14ec(r15)
    b lbl_fn_80256C04_00001AA0
lbl_fn_80256C04_00000DC8:
    bne lbl_fn_80256C04_00000E0C
    lwz r0, 0x14d4(r15)
    cmpwi r0, 0x0
    bne lbl_fn_80256C04_00000E0C
    lwz r4, 0x16a0(r15)
    li r3, 0x0
    lwz r0, 0x58c(r4)
    cmpwi r0, 0x9
    bne lbl_fn_80256C04_00000DFC
    lwz r0, 0x14f4(r4)
    cmpwi r0, 0x1
    bne lbl_fn_80256C04_00000DFC
    li r3, 0x1
lbl_fn_80256C04_00000DFC:
    cmpwi r3, 0x0
    beq lbl_fn_80256C04_00000E0C
    li r0, 0x14
    stw r0, 0x16a8(r15)
lbl_fn_80256C04_00000E0C:
    lwz r0, 0xd1c(r15)
    cmpwi r0, 0x0
    bne lbl_fn_80256C04_00000E24
    lwz r3, lbl_8087F8A0
    lwz r0, 0x48(r3)
    stw r0, 0xd1c(r15)
lbl_fn_80256C04_00000E24:
    lwz r0, 0x15f0(r15)
    cmpwi r0, 0x0
    beq lbl_fn_80256C04_00000F54
    lwz r3, 0x1680(r15)
    cmpwi r3, 0x4
    bge lbl_fn_80256C04_00000F40
    lwz r0, 0x15ec(r15)
    mulli r3, r3, 0x34
    cmpwi r0, 0x0
    add r14, r15, r3
    bne lbl_fn_80256C04_00000E74
    li r0, 0x0
    stw r0, 0x1520(r14)
    lwz r0, 0x154c(r14)
    cmpwi r0, 0x0
    beq lbl_fn_80256C04_00000E74
    lwz r4, 0x1680(r15)
    mr r3, r15
    li r5, 0x0
    bl fn_80259AB4
lbl_fn_80256C04_00000E74:
    lwz r3, 0x15ec(r15)
    slwi r0, r3, 28
    srwi r3, r3, 31
    subf r0, r3, r0
    rotlwi r0, r0, 4
    add r0, r0, r3
    cmpwi r0, 0xf
    bne lbl_fn_80256C04_00000EF0
    lwz r7, lbl_8087F430
    lis r4, lbl_80743D18@ha
    addi r4, r4, lbl_80743D18@l
    li r0, 0xa
    lwz r5, 0x96c(r7)
    addi r3, r1, 0x8
    lfs f0, lbl_80883420
    addi r4, r4, 0x1a3
    srwi r6, r5, 31
    clrlwi r5, r5, 31
    xor r5, r5, r6
    lfs f1, lbl_808833F4
    subf r5, r6, r5
    stw r5, 0x96c(r7)
    li r5, 0x0
    li r6, -0x1
    stw r0, 0x970(r7)
    stfs f0, 0x974(r7)
    stfs f0, 0x978(r7)
    bl fn_800C31F4
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_80256C04_00000EF0:
    lwz r3, 0x15ec(r15)
    li r0, 0x1
    stw r0, 0x1650(r15)
    addi r0, r3, 0x1
    stw r0, 0x15ec(r15)
    lwz r4, 0x154c(r14)
    cmpwi r4, 0x0
    beq lbl_fn_80256C04_00000F40
    psq_l f1, 0x4(r4), 0, 0
    lis r3, lbl_807C8328@ha
    lfs f2, 0xc(r4)
    addi r4, r15, 0x1654
    stfs f2, 0x165c(r15)
    addi r3, r3, lbl_807C8328@l
    lfs f8, lbl_80883424
    psq_st f1, 0x0(r4), 0, 0
    lfs f7, 0x4(r3)
    lfs f0, 0x1658(r15)
    fmadds f0, f8, f7, f0
    stfs f0, 0x1658(r15)
lbl_fn_80256C04_00000F40:
    lwz r0, 0x15ec(r15)
    cmpwi r0, 0x14
    blt lbl_fn_80256C04_00000F54
    li r0, 0x0
    stw r0, 0x15f0(r15)
lbl_fn_80256C04_00000F54:
    lwz r0, 0x15f4(r15)
    cmpwi r0, 0x0
    beq lbl_fn_80256C04_00000FD4
    lwz r0, 0x1680(r15)
    cmpwi r0, 0x4
    bge lbl_fn_80256C04_00000FB8
    mulli r3, r0, 0x34
    li r0, 0x1
    stw r0, 0x1650(r15)
    add r3, r15, r3
    lwz r4, 0x154c(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80256C04_00000FB8
    psq_l f1, 0x4(r4), 0, 0
    lis r3, lbl_807C8328@ha
    lfs f2, 0xc(r4)
    addi r4, r15, 0x1654
    stfs f2, 0x165c(r15)
    addi r3, r3, lbl_807C8328@l
    lfs f8, lbl_80883424
    psq_st f1, 0x0(r4), 0, 0
    lfs f7, 0x4(r3)
    lfs f0, 0x1658(r15)
    fmadds f0, f8, f7, f0
    stfs f0, 0x1658(r15)
lbl_fn_80256C04_00000FB8:
    lwz r3, 0x15ec(r15)
    addi r0, r3, 0x1
    stw r0, 0x15ec(r15)
    cmpwi r0, 0x14
    blt lbl_fn_80256C04_00000FD4
    li r0, 0x0
    stw r0, 0x15f4(r15)
lbl_fn_80256C04_00000FD4:
    lwz r0, 0x1680(r15)
    addi r20, r1, 0x108
    lfs f28, lbl_808833E0
    addi r24, r1, 0x9c
    mulli r0, r0, 0x34
    lfs f26, lbl_808833F4
    lfs f29, lbl_8088342C
    addi r25, r1, 0x84
    lfs f27, lbl_80883428
    addi r28, r1, 0x90
    add r3, r15, r0
    lfs f30, lbl_80883430
    lfs f31, lbl_80883434
    addi r18, r3, 0x1520
    addi r23, r1, 0x228
    addi r21, r1, 0x168
    addi r22, r1, 0x1c8
    addi r19, r1, 0x2b8
    addi r14, r1, 0x2f4
    addi r26, r1, 0x300
    li r17, 0x0
    li r31, 0x0
lbl_fn_80256C04_0000102C:
    lwz r4, 0x2c(r18)
    cmpwi r4, 0x0
    beq lbl_fn_80256C04_0000108C
    psq_l f1, 0x4(r4), 0, 0
    addi r3, r1, 0xa8
    psq_st f1, 0x0(r3), 0, 0
    addi r3, r1, 0x6c
    lfs f2, 0xc(r4)
    lfs f0, 0xac(r1)
    lfs f7, 0x14(r4)
    fadds f0, f0, f27
    psq_st f1, 0x0(r3), 0, 0
    addi r3, r1, 0x60
    stfs f28, 0x60(r1)
    stfs f7, 0x64(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x74(r1)
    stfs f2, 0xb0(r1)
    fmr f2, f28
    stfs f0, 0xac(r1)
    stfs f28, 0x68(r1)
    psq_st f1, 0x0(r24), 0, 0
    stfs f2, 0xa4(r1)
    b lbl_fn_80256C04_000010CC
lbl_fn_80256C04_0000108C:
    stfs f28, 0x54(r1)
    fmr f2, f28
    addi r3, r1, 0x54
    stfs f29, 0x58(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0xa8
    psq_st f1, 0x0(r3), 0, 0
    addi r3, r1, 0x48
    stfs f28, 0x48(r1)
    stfs f28, 0x4c(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f28, 0x5c(r1)
    stfs f2, 0xb0(r1)
    stfs f28, 0x50(r1)
    psq_st f1, 0x0(r24), 0, 0
    stfs f2, 0xa4(r1)
lbl_fn_80256C04_000010CC:
    lis r3, lbl_807C8328@ha
    fmr f2, f28
    lfs f0, lbl_807C8328@l(r3)
    addi r5, r1, 0x3c
    stfs f28, 0x3c(r1)
    addi r3, r1, 0x288
    fneg f0, f0
    stfs f28, 0x40(r1)
    li r4, 0x79
    lfs f7, 0xa0(r1)
    psq_l f1, 0x0(r5), 0, 0
    addi r5, r1, 0x2e8
    psq_st f1, 0x0(r5), 0, 0
    addi r5, r1, 0x30
    stfs f2, 0x2f0(r1)
    frsp f2, f0
    stfs f0, 0x30(r1)
    stfs f28, 0x34(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r14), 0, 0
    fmr f1, f7
    stfs f28, 0x44(r1)
    stfs f0, 0x38(r1)
    stfs f2, 0x2fc(r1)
    bl fn_805F8E70
    mr r4, r14
    mr r5, r14
    addi r3, r1, 0x288
    bl fn_805F93C0
    lis r3, lbl_807C8328@ha
    stfs f28, 0x28(r1)
    lfs f0, lbl_807C8328@l(r3)
    addi r5, r1, 0x24
    stfs f0, 0x24(r1)
    addi r3, r1, 0x258
    fneg f0, f0
    lfs f7, 0xa0(r1)
    psq_l f1, 0x0(r5), 0, 0
    li r4, 0x79
    psq_st f1, 0x0(r26), 0, 0
    fmr f1, f7
    frsp f2, f0
    stfs f0, 0x2c(r1)
    stfs f2, 0x308(r1)
    bl fn_805F8E70
    mr r4, r26
    mr r5, r26
    addi r3, r1, 0x258
    bl fn_805F93C0
    stfs f28, 0x90(r1)
    add r27, r18, r31
    li r16, 0x0
    li r30, 0x0
    stfs f30, 0x94(r1)
    li r29, 0x0
    stfs f31, 0x98(r1)
lbl_fn_80256C04_000011AC:
    add r3, r29, r27
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80256C04_000014A8
    psq_l f1, 0x0(r24), 0, 0
    addi r3, r1, 0x2e8
    psq_st f1, 0x0(r25), 0, 0
    add r3, r3, r30
    lfs f2, 0xa4(r1)
    lfs f9, 0x88(r1)
    lfsx f8, r28, r29
    fcmpu cr0, f28, f2
    lfs f7, 0xb0(r1)
    fadds f10, f9, f8
    lfs f0, 0x8(r3)
    lfs f9, 0xac(r1)
    fadds f11, f7, f0
    lfs f8, 0x4(r3)
    lfs f7, 0xa8(r1)
    lfs f0, 0x0(r3)
    fadds f8, f9, f8
    stfs f2, 0x8c(r1)
    fadds f0, f7, f0
    stfs f10, 0x88(r1)
    stfs f0, 0x78(r1)
    stfs f8, 0x7c(r1)
    stfs f11, 0x80(r1)
    stfs f28, 0x2e4(r1)
    stfs f28, 0x2dc(r1)
    stfs f28, 0x2d8(r1)
    stfs f28, 0x2d4(r1)
    stfs f28, 0x2d0(r1)
    stfs f28, 0x2c8(r1)
    stfs f28, 0x2c4(r1)
    stfs f28, 0x2c0(r1)
    stfs f28, 0x2bc(r1)
    stfs f26, 0x2e0(r1)
    stfs f26, 0x2cc(r1)
    stfs f26, 0x2b8(r1)
    stfs f28, 0x254(r1)
    stfs f28, 0x24c(r1)
    stfs f28, 0x248(r1)
    stfs f28, 0x244(r1)
    stfs f28, 0x240(r1)
    stfs f28, 0x238(r1)
    stfs f28, 0x234(r1)
    stfs f28, 0x230(r1)
    stfs f28, 0x22c(r1)
    stfs f26, 0x250(r1)
    stfs f26, 0x23c(r1)
    stfs f26, 0x228(r1)
    beq lbl_fn_80256C04_000012CC
    frsp f1, f2
    addi r3, r1, 0x138
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r23
    addi r4, r1, 0x138
    addi r5, r1, 0x108
    bl fn_805F89F0
    psq_l f1, 0x0(r20), 0, 0
    psq_l f2, 0x8(r20), 0, 0
    psq_l f3, 0x10(r20), 0, 0
    psq_l f4, 0x18(r20), 0, 0
    psq_l f5, 0x20(r20), 0, 0
    psq_l f6, 0x28(r20), 0, 0
    psq_st f1, 0x0(r23), 0, 0
    psq_st f2, 0x8(r23), 0, 0
    psq_st f3, 0x10(r23), 0, 0
    psq_st f4, 0x18(r23), 0, 0
    psq_st f5, 0x20(r23), 0, 0
    psq_st f6, 0x28(r23), 0, 0
lbl_fn_80256C04_000012CC:
    lfs f1, 0x88(r1)
    fcmpu cr0, f28, f1
    beq lbl_fn_80256C04_00001324
    addi r3, r1, 0x198
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r23
    addi r4, r1, 0x198
    addi r5, r1, 0x168
    bl fn_805F89F0
    psq_l f1, 0x0(r21), 0, 0
    psq_l f2, 0x8(r21), 0, 0
    psq_l f3, 0x10(r21), 0, 0
    psq_l f4, 0x18(r21), 0, 0
    psq_l f5, 0x20(r21), 0, 0
    psq_l f6, 0x28(r21), 0, 0
    psq_st f1, 0x0(r23), 0, 0
    psq_st f2, 0x8(r23), 0, 0
    psq_st f3, 0x10(r23), 0, 0
    psq_st f4, 0x18(r23), 0, 0
    psq_st f5, 0x20(r23), 0, 0
    psq_st f6, 0x28(r23), 0, 0
lbl_fn_80256C04_00001324:
    lfs f1, 0x84(r1)
    fcmpu cr0, f28, f1
    beq lbl_fn_80256C04_0000137C
    addi r3, r1, 0x1f8
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r23
    addi r4, r1, 0x1f8
    addi r5, r1, 0x1c8
    bl fn_805F89F0
    psq_l f1, 0x0(r22), 0, 0
    psq_l f2, 0x8(r22), 0, 0
    psq_l f3, 0x10(r22), 0, 0
    psq_l f4, 0x18(r22), 0, 0
    psq_l f5, 0x20(r22), 0, 0
    psq_l f6, 0x28(r22), 0, 0
    psq_st f1, 0x0(r23), 0, 0
    psq_st f2, 0x8(r23), 0, 0
    psq_st f3, 0x10(r23), 0, 0
    psq_st f4, 0x18(r23), 0, 0
    psq_st f5, 0x20(r23), 0, 0
    psq_st f6, 0x28(r23), 0, 0
lbl_fn_80256C04_0000137C:
    addi r4, r1, 0x2b8
    addi r3, r1, 0x228
    mr r5, r4
    bl fn_805F89F0
    lfs f8, 0x78(r1)
    add r0, r18, r31
    lfs f7, 0x7c(r1)
    add r3, r29, r0
    lfs f0, 0x80(r1)
    stfs f8, 0x2c4(r1)
    psq_l f3, 0x10(r19), 0, 0
    stfs f7, 0x2d4(r1)
    psq_l f2, 0x8(r19), 0, 0
    stfs f0, 0x2e4(r1)
    psq_l f4, 0x18(r19), 0, 0
    lwz r3, 0x8(r3)
    psq_l f5, 0x20(r19), 0, 0
    psq_l f6, 0x28(r19), 0, 0
    psq_l f1, 0x0(r19), 0, 0
    psq_st f1, 0x48(r3), 0, 0
    psq_st f2, 0x50(r3), 0, 0
    psq_st f3, 0x58(r3), 0, 0
    psq_st f4, 0x60(r3), 0, 0
    psq_st f5, 0x68(r3), 0, 0
    psq_st f6, 0x70(r3), 0, 0
    bl fn_800588FC
    lwz r6, 0x38(r15)
    li r4, 0x0
    li r3, 0x0
    li r5, 0x0
    rlwinm r0, r6, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80256C04_00001410
    clrlwi r0, r6, 31
    cmplwi r0, 0x1
    beq lbl_fn_80256C04_00001410
    li r5, 0x1
lbl_fn_80256C04_00001410:
    cmpwi r5, 0x0
    beq lbl_fn_80256C04_0000142C
    lwz r0, 0x7e0(r15)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_80256C04_0000142C
    li r3, 0x1
lbl_fn_80256C04_0000142C:
    cmpwi r3, 0x0
    beq lbl_fn_80256C04_00001460
    lwz r0, 0x55c(r15)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_80256C04_00001454
    lwz r0, 0x560(r15)
    cmpwi r0, 0x1c
    bne lbl_fn_80256C04_00001454
    li r3, 0x1
lbl_fn_80256C04_00001454:
    cmpwi r3, 0x0
    bne lbl_fn_80256C04_00001460
    li r4, 0x1
lbl_fn_80256C04_00001460:
    cmpwi r4, 0x0
    beq lbl_fn_80256C04_00001490
    lwz r0, 0x0(r18)
    cmpw r0, r17
    bne lbl_fn_80256C04_00001490
    add r0, r18, r31
    add r3, r29, r0
    lwz r3, 0x8(r3)
    lwz r0, 0x8(r3)
    ori r0, r0, 0x1
    stw r0, 0x8(r3)
    b lbl_fn_80256C04_000014A8
lbl_fn_80256C04_00001490:
    add r0, r18, r31
    add r3, r29, r0
    lwz r3, 0x8(r3)
    lwz r0, 0x8(r3)
    clrrwi r0, r0, 1
    stw r0, 0x8(r3)
lbl_fn_80256C04_000014A8:
    addi r16, r16, 0x1
    addi r29, r29, 0x4
    cmpwi r16, 0x3
    addi r30, r30, 0xc
    blt lbl_fn_80256C04_000011AC
    addi r17, r17, 0x1
    addi r31, r31, 0xc
    cmpwi r17, 0x3
    blt lbl_fn_80256C04_0000102C
    lwz r0, 0xd18(r15)
    cmpwi r0, 0x0
    beq lbl_fn_80256C04_000019DC
    lwz r0, 0xd1c(r15)
    cmpwi r0, 0x0
    beq lbl_fn_80256C04_000019DC
    lwz r3, lbl_8087F8A0
    lis r14, 0x3
    lwz r16, 0x48(r3)
    b lbl_fn_80256C04_00001564
lbl_fn_80256C04_000014F4:
    lwz r3, lbl_8087EE68
    cmpwi r3, 0x0
    beq lbl_fn_80256C04_00001510
    mr r4, r16
    li r5, 0x0
    bl fn_800185B4
    b lbl_fn_80256C04_00001514
lbl_fn_80256C04_00001510:
    li r3, 0x0
lbl_fn_80256C04_00001514:
    cmpwi r3, 0x0
    beq lbl_fn_80256C04_0000154C
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80256C04_0000154C
    lwz r0, 0xc(r3)
    cmplw r0, r15
    bne lbl_fn_80256C04_0000154C
    lwz r3, lbl_8087F048
    mr r4, r16
    mr r5, r15
    addi r6, r14, 0xd40
    bl fn_801028E4
    b lbl_fn_80256C04_00001560
lbl_fn_80256C04_0000154C:
    lwz r3, lbl_8087F048
    mr r4, r16
    lwz r5, 0x16a0(r15)
    addi r6, r14, 0xd40
    bl fn_801028E4
lbl_fn_80256C04_00001560:
    lwz r16, 0x14ac(r16)
lbl_fn_80256C04_00001564:
    cmpwi r16, 0x0
    bne lbl_fn_80256C04_000014F4
    lwz r0, 0x14d4(r15)
    lwz r3, 0x14c8(r15)
    cmpwi r0, 0x0
    addi r0, r3, 0x1
    stw r0, 0x14c8(r15)
    ble lbl_fn_80256C04_000016BC
    li r14, 0x0
    stw r14, 0x14d4(r15)
    mr r3, r15
    bl fn_8016DA4C
    lwz r0, 0x16b0(r15)
    li r3, 0x6
    li r4, 0x2
    stw r3, 0x58c(r15)
    lwz r3, 0x16a0(r15)
    stw r4, 0x14cc(r15)
    stw r0, 0x14c8(r15)
    bl fn_8025D704
    lwz r3, lbl_8087F8A0
    lwz r16, 0x48(r3)
    mr r3, r16
    bl fn_80166A54
    lwz r0, 0xd4(r1)
    li r4, -0x1
    stw r14, 0xb8(r1)
    li r3, 0xfaa
    clrlwi r0, r0, 4
    stw r14, 0xbc(r1)
    stw r14, 0xc0(r1)
    stw r14, 0xc4(r1)
    stw r14, 0xc8(r1)
    stw r4, 0xcc(r1)
    stw r0, 0xd4(r1)
    stw r4, 0xd0(r1)
    bl fn_80219E6C
    lis r8, lbl_807C6B90@ha
    mr r4, r3
    mr r5, r15
    mr r6, r16
    addi r3, r1, 0xb8
    addi r8, r8, lbl_807C6B90@l
    li r7, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_8003EA3C
    lwz r0, 0x7e0(r16)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_80256C04_0000163C
    mr r3, r16
    bl fn_8015ECC4
    b lbl_fn_80256C04_000016BC
lbl_fn_80256C04_0000163C:
    lfs f7, lbl_808833E0
    addi r3, r1, 0xd8
    lfs f0, lbl_808833F4
    li r4, 0x79
    stfs f7, 0xc(r1)
    stfs f7, 0x10(r1)
    stfs f0, 0x14(r1)
    lfs f1, 0x538(r16)
    bl fn_805F8E70
    addi r4, r1, 0xc
    addi r3, r1, 0xd8
    mr r5, r4
    bl fn_805F93C0
    lfs f8, 0x14(r1)
    mr r3, r16
    lfs f7, 0x10(r1)
    addi r4, r1, 0x18
    lfs f0, 0xc(r1)
    fneg f8, f8
    fneg f7, f7
    li r5, -0x1
    fneg f0, f0
    stfs f8, 0x20(r1)
    li r6, 0x0
    stfs f0, 0x18(r1)
    stfs f7, 0x1c(r1)
    bl fn_8015E7A0
    lwz r12, 0x0(r16)
    mr r3, r16
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
lbl_fn_80256C04_000016BC:
    lwz r0, 0x14f8(r15)
    cmpwi r0, 0x0
    beq lbl_fn_80256C04_000016E0
    lwz r3, 0x16b0(r15)
    li r4, 0x2
    li r0, 0x0
    stw r4, 0x14cc(r15)
    stw r3, 0x14c8(r15)
    stw r0, 0x14f8(r15)
lbl_fn_80256C04_000016E0:
    lwz r0, 0x55c(r15)
    cmpwi r0, 0x2
    bne lbl_fn_80256C04_000016F8
    mr r3, r15
    li r4, 0x3
    bl fn_8016E970
lbl_fn_80256C04_000016F8:
    lwz r3, 0x58c(r15)
    subi r0, r3, 0x7
    cmplwi r0, 0x9
    bgt lbl_fn_80256C04_0000198C
    lis r3, jumptable_80784678@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_80784678@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    mr r3, r15
    bl fn_80258A50
    b lbl_fn_80256C04_000019DC
    lwz r3, 0x1518(r15)
    lis r0, 0x4330
    stw r3, 0x638(r15)
    lis r4, lbl_80743D00@ha
    lfs f7, 0x52c(r15)
    lfs f0, 0x166c(r15)
    lwz r3, 0xc0(r3)
    fsubs f0, f7, f0
    lfs f8, lbl_80883438
    xoris r3, r3, 0x8000
    stw r3, 0x314(r1)
    lfd f10, lbl_80743D00@l(r4)
    fcmpo cr0, f0, f8
    stw r0, 0x310(r1)
    lfs f8, 0xfb8(r15)
    lfd f9, 0x310(r1)
    lfs f0, lbl_808833F4
    fsubs f9, f9, f10
    fadds f0, f8, f0
    stfs f9, 0xfbc(r15)
    stfs f0, 0xfb8(r15)
    bge lbl_fn_80256C04_00001790
    lfs f0, lbl_8088343C
    fadds f0, f7, f0
    stfs f0, 0x52c(r15)
lbl_fn_80256C04_00001790:
    lwz r4, 0x638(r15)
    lis r0, 0x4330
    stw r0, 0x310(r1)
    lis r3, lbl_80743D00@ha
    lwz r0, 0xc0(r4)
    lfd f7, lbl_80743D00@l(r3)
    xoris r0, r0, 0x8000
    stw r0, 0x314(r1)
    lfs f8, 0xfb8(r15)
    lfd f0, 0x310(r1)
    fsubs f0, f0, f7
    fcmpo cr0, f8, f0
    cror eq, gt, eq
    bne lbl_fn_80256C04_000019DC
    lfs f0, lbl_808833E0
    addi r4, r15, 0xf6c
    lwz r3, 0xd1c(r15)
    li r14, 0x0
    stfs f0, 0xfb8(r15)
    stw r3, 0xf7c(r15)
    psq_l f1, 0x528(r3), 0, 0
    lfs f2, 0x530(r3)
    stfs f2, 0xf74(r15)
    psq_st f1, 0x0(r4), 0, 0
    stw r14, 0x14c8(r15)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r15)
    li r0, 0xb
    mr r3, r15
    li r4, 0x3
    stw r14, 0x14d0(r15)
    stw r14, 0x1660(r15)
    stw r0, 0x58c(r15)
    bl fn_8016E970
    lfs f0, lbl_808833F4
    li r0, 0x1
    stw r0, 0x3fc(r15)
    addi r3, r15, 0xb0
    lfs f1, lbl_808833E0
    li r4, 0x0
    stfs f0, 0x2fc(r15)
    li r5, 0x6b
    lfs f2, lbl_80883440
    li r6, 0x0
    stfs f0, 0x2e8(r15)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r3, lbl_8087F3C0
    mr r4, r15
    li r5, 0x0
    li r6, 0x1
    bl fn_80239DAC
    b lbl_fn_80256C04_000019DC
    mr r3, r15
    bl fn_80258F1C
    b lbl_fn_80256C04_000019DC
    lfs f26, 0x2e4(r15)
    addi r3, r15, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f26, f1
    cror eq, gt, eq
    bne lbl_fn_80256C04_000019DC
    mr r3, r15
    bl fn_8025941C
    b lbl_fn_80256C04_000019DC
    lfs f26, 0x2e4(r15)
    addi r3, r15, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f26, f1
    cror eq, gt, eq
    bne lbl_fn_80256C04_000019DC
    li r3, 0x6
    li r0, 0x0
    stw r3, 0x58c(r15)
    stw r0, 0x14c8(r15)
    b lbl_fn_80256C04_000019DC
    mr r3, r15
    bl fn_8025922C
    b lbl_fn_80256C04_000019DC
    lfs f0, 0x2e4(r15)
    lfs f7, lbl_80883444
    fcmpo cr0, f0, f7
    bge lbl_fn_80256C04_00001914
    addi r3, r15, 0x1654
    psq_l f1, 0x528(r15), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    li r0, 0x1
    lfs f2, 0x530(r15)
    lfs f0, 0x1658(r15)
    stw r0, 0x1650(r15)
    fadds f0, f0, f7
    stfs f2, 0x165c(r15)
    stfs f0, 0x1658(r15)
lbl_fn_80256C04_00001914:
    lfs f26, 0x2e4(r15)
    lfs f7, lbl_80883448
    lfs f0, lbl_8088344C
    fsubs f7, f26, f7
    fabs f7, f7
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_80256C04_00001948
    li r3, 0x1
    li r0, 0x0
    stw r3, 0x15f0(r15)
    stw r0, 0x15ec(r15)
    b lbl_fn_80256C04_000019DC
lbl_fn_80256C04_00001948:
    addi r3, r15, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f26, f1
    cror eq, gt, eq
    bne lbl_fn_80256C04_000019DC
    li r3, 0x6
    li r0, 0x0
    stw r3, 0x58c(r15)
    stw r0, 0x14c8(r15)
    b lbl_fn_80256C04_000019DC
    lwz r0, 0xd1c(r15)
    cmpwi r0, 0x0
    beq lbl_fn_80256C04_000019DC
    mr r3, r15
    bl fn_80139560
    b lbl_fn_80256C04_000019DC
lbl_fn_80256C04_0000198C:
    lwz r0, 0x55c(r15)
    cmpwi r0, 0x6
    beq lbl_fn_80256C04_000019C8
    cmpwi r0, 0x7
    bne lbl_fn_80256C04_000019B0
    mr r3, r15
    li r4, 0x3
    bl fn_8016E970
    b lbl_fn_80256C04_000019C8
lbl_fn_80256C04_000019B0:
    lwz r3, 0x14c8(r15)
    lwz r0, 0x16b0(r15)
    cmpw r3, r0
    ble lbl_fn_80256C04_000019C8
    mr r3, r15
    bl fn_80258574
lbl_fn_80256C04_000019C8:
    lwz r0, 0x55c(r15)
    cmpwi r0, 0x3
    beq lbl_fn_80256C04_000019DC
    mr r3, r15
    bl fn_80139560
lbl_fn_80256C04_000019DC:
    mr r3, r15
    bl fn_8014C540
    mr r3, r15
    bl fn_80145334
    lwz r0, 0x1650(r15)
    lwz r3, lbl_8087F430
    cmpwi r0, 0x0
    beq lbl_fn_80256C04_00001A78
    lwz r0, 0x164c(r15)
    cmpwi r0, 0x0
    bne lbl_fn_80256C04_00001A58
    stw r15, 0x8a0(r3)
    addi r5, r3, 0x97c
    li r0, 0x1
    addi r4, r15, 0x1654
    lbz r3, 0x97c(r3)
    stb r3, 0x1(r5)
    lfs f0, lbl_808833E0
    stb r0, 0x0(r5)
    lfs f2, 0x165c(r15)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0xc(r5), 0, 0
    stfs f2, 0x14(r5)
    stfs f0, 0x24(r5)
    b lbl_fn_80256C04_00001A44
    b lbl_fn_80256C04_00001A48
lbl_fn_80256C04_00001A44:
    li r0, 0x0
lbl_fn_80256C04_00001A48:
    stw r0, 0x4(r5)
    li r0, 0x1
    stw r0, 0x164c(r15)
    b lbl_fn_80256C04_00001A98
lbl_fn_80256C04_00001A58:
    stw r15, 0x8a0(r3)
    addi r4, r15, 0x1654
    addi r3, r3, 0x988
    lfs f2, 0x165c(r15)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x8(r3)
    b lbl_fn_80256C04_00001A98
lbl_fn_80256C04_00001A78:
    lwz r0, 0x164c(r15)
    cmpwi r0, 0x0
    beq lbl_fn_80256C04_00001A98
    li r0, 0x0
    stw r0, 0x8a0(r3)
    stb r0, 0x97c(r3)
    stw r0, 0x164c(r15)
    stw r0, 0x4d8(r3)
lbl_fn_80256C04_00001A98:
    li r0, 0x0
    stw r0, 0x1650(r15)
lbl_fn_80256C04_00001AA0:
    addi r11, r1, 0x360
    psq_l f31, 0x3b8(r1), 0, 0
    lfd f31, 0x3b0(r1)
    psq_l f30, 0x3a8(r1), 0, 0
    lfd f30, 0x3a0(r1)
    psq_l f29, 0x398(r1), 0, 0
    lfd f29, 0x390(r1)
    psq_l f28, 0x388(r1), 0, 0
    lfd f28, 0x380(r1)
    psq_l f27, 0x378(r1), 0, 0
    lfd f27, 0x370(r1)
    psq_l f26, 0x368(r1), 0, 0
    lfd f26, 0x360(r1)
    bl _restgpr_14
    lwz r0, 0x3c4(r1)
    mtlr r0
    addi r1, r1, 0x3c0
    blr
}
