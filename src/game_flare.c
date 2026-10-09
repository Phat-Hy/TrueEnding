#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_21(void);
extern void _restgpr_26(void);
extern void _savegpr_21(void);
extern void _savegpr_26(void);
extern void fn_8003EA3C(void);
extern void fn_8003F1E4(void);
extern void fn_8004ED34(void);
extern void fn_80063484(void);
extern void fn_80092814(void);
extern void fn_800A56A8(void);
extern void fn_800E62AC(void);
extern void fn_800E7650(void);
extern void fn_800E8688(void);
extern void fn_8010089C(void);
extern void fn_801021B4(void);
extern void fn_8010220C(void);
extern void fn_80108C10(void);
extern void fn_801092C8(void);
extern void fn_80122330(void);
extern void fn_801231D0(void);
extern void fn_801240B4(void);
extern void fn_801248DC(void);
extern void fn_80124B60(void);
extern void fn_8013310C(void);
extern void fn_80149A30(void);
extern void fn_80153698(void);
extern void fn_801539E0(void);
extern void fn_80153B44(void);
extern void fn_80153FA0(void);
extern void fn_80154344(void);
extern void fn_80154EC4(void);
extern void fn_801551AC(void);
extern void fn_80155790(void);
extern void fn_80155DAC(void);
extern void fn_80166544(void);
extern void fn_80166A54(void);
extern void fn_8016DC14(void);
extern void fn_8016E970(void);
extern void fn_8016F3D0(void);
extern void fn_80178018(void);
extern void fn_80178668(void);
extern void fn_80179FA8(void);
extern void fn_8017C9AC(void);
extern void fn_80211480(void);
extern void fn_80211734(void);
extern void fn_80219558(void);
extern void fn_80219E6C(void);
extern void fn_8036DAF4(void);
extern void fn_8036DB3C(void);
extern void fn_8036DDD4(void);
extern void fn_8036E098(void);
extern void fn_80370174(void);
extern void fn_80370320(void);
extern void fn_803761BC(void);
extern void fn_8037EF30(void);
extern void fn_803CC77C(void);
extern void fn_803CCA34(void);
extern void fn_803CCA4C(void);
extern void fn_803CCA64(void);
extern void fn_803CCC4C(void);
extern void fn_803FC870(void);
extern void fn_8044441C(void);
extern void fn_804444E8(void);
extern void fn_8054D798(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_805F9990(void);
extern void fn_805F99B0(void);
extern void fn_80682428(void);
extern void fn_8068AEA8(void);
extern void fn_80695B00(void);

/* External data declarations */
extern u8 lbl_80735258[];
extern u8 lbl_80735324[];
extern u8 lbl_80779B60[];
extern u8 lbl_807C6B90[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EF70;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F430;
extern u32 lbl_8087F490;
extern u32 lbl_8087F4F0;
extern u32 lbl_8087F8A8;
extern u32 lbl_8087F9C0;
extern u32 lbl_808812D8;
extern u32 lbl_808812DC;
extern u32 lbl_808812E0;
extern u32 lbl_808812E4;
extern u32 lbl_80881300;
extern u32 lbl_8088130C;
extern u32 lbl_80881310;
extern u32 lbl_80881314;
extern u32 lbl_80881318;
extern u32 lbl_8088131C;
extern u32 lbl_80881320;
extern u32 lbl_80881324;
extern u32 lbl_80881328;
extern u32 lbl_8088132C;
extern u32 lbl_80881330;
extern u32 lbl_80881334;
extern u32 lbl_80881338;
extern u32 lbl_8088133C;
extern u32 lbl_80881340;
extern u32 lbl_80881344;
extern u32 lbl_80881348;
extern u32 lbl_8088134C;

/* Function declarations */
void fn_800E3E78(void);
void fn_800E3EA4(void);
void fn_800E3F5C(void);
void fn_800E41FC(void);
void fn_800E426C(void);
void fn_800E4278(void);

asm void fn_800E3E78(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    mr r12, r3
    stw r0, 0x14(r1)
    lwz r3, 0xc(r3)
    bl fn_80695B00
    nop
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800E3EA4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r5, 0x3
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bne lbl_fn_800E3EA4_00000060
    lis r3, lbl_80779B60@ha
    addi r3, r3, lbl_80779B60@l
    stw r3, 0x0(r4)
    b lbl_fn_800E3EA4_000000CC
lbl_fn_800E3EA4_00000060:
    cmpwi r5, 0x0
    bne lbl_fn_800E3EA4_00000094
    cmpwi r4, 0x0
    beq lbl_fn_800E3EA4_000000CC
    lwz r5, 0x0(r3)
    lwz r0, 0x4(r3)
    stw r0, 0x4(r4)
    stw r5, 0x0(r4)
    lwz r0, 0x8(r3)
    stw r0, 0x8(r4)
    lwz r0, 0xc(r3)
    stw r0, 0xc(r4)
    b lbl_fn_800E3EA4_000000CC
lbl_fn_800E3EA4_00000094:
    cmpwi r5, 0x1
    beq lbl_fn_800E3EA4_000000CC
    lwz r5, 0x0(r4)
    lis r3, lbl_80779B60@ha
    lwz r4, lbl_80779B60@l(r3)
    lwz r3, 0x0(r5)
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_800E3EA4_000000C4
    stw r30, 0x0(r31)
    b lbl_fn_800E3EA4_000000CC
lbl_fn_800E3EA4_000000C4:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_800E3EA4_000000CC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800E3F5C(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    addi r11, r1, 0xc0
    bl _savegpr_26
    lwz r5, lbl_8087F430
    mr r28, r3
    cmpwi r5, 0x0
    beq lbl_fn_800E3F5C_0000036C
    lwz r0, lbl_8087F048
    cmpwi r0, 0x0
    bne lbl_fn_800E3F5C_00000118
    b lbl_fn_800E3F5C_0000036C
lbl_fn_800E3F5C_00000118:
    lwz r0, 0x868(r5)
    li r4, 0x0
    lwz r29, 0x10d8(r5)
    li r31, 0x0
    cmpwi r0, 0x3
    li r30, 0x0
    beq lbl_fn_800E3F5C_0000013C
    cmpwi r0, 0x4
    bne lbl_fn_800E3F5C_0000035C
lbl_fn_800E3F5C_0000013C:
    lwz r27, lbl_8087EFB4
    mr r4, r28
    addi r3, r1, 0x44
    bl fn_8017C9AC
    lfs f3, 0x120(r27)
    addi r3, r1, 0x38
    lfs f0, 0x114(r27)
    addi r5, r1, 0x8
    lfs f5, 0x11c(r27)
    mr r4, r3
    fsubs f2, f3, f0
    lfs f4, 0x110(r27)
    lfs f3, 0x118(r27)
    lfs f0, 0x10c(r27)
    fsubs f4, f5, f4
    stfs f2, 0x10(r1)
    fsubs f0, f3, f0
    stfs f4, 0xc(r1)
    stfs f0, 0x8(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F98D0
    lfs f7, lbl_8088130C
    lfs f0, 0x8e4(r28)
    fcmpo cr0, f7, f0
    ble lbl_fn_800E3F5C_000001AC
    b lbl_fn_800E3F5C_000001B0
lbl_fn_800E3F5C_000001AC:
    fmr f7, f0
lbl_fn_800E3F5C_000001B0:
    lfs f4, 0x40(r1)
    li r0, 0x0
    lfs f3, 0x3c(r1)
    addi r4, r1, 0x44
    fmuls f5, f4, f7
    lfs f0, 0x38(r1)
    fmuls f6, f3, f7
    lfs f4, 0x4c(r1)
    fmuls f7, f0, f7
    lfs f3, 0x48(r1)
    lfs f0, 0x44(r1)
    fadds f4, f4, f5
    fadds f3, f3, f6
    lfs f2, 0x4c(r1)
    fadds f0, f0, f7
    cmpwi r29, 0x0
    addi r3, r1, 0x2c
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    li r7, 0x4
    stfs f2, 0x34(r1)
    stfs f7, 0x14(r1)
    stfs f6, 0x18(r1)
    stfs f5, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f3, 0x24(r1)
    stfs f4, 0x28(r1)
    stw r0, 0x84(r1)
    stw r0, 0x88(r1)
    stw r0, 0x8c(r1)
    stw r0, 0x90(r1)
    beq lbl_fn_800E3F5C_0000024C
    lwz r3, 0x64(r29)
    cmpwi r3, 0x0
    beq lbl_fn_800E3F5C_0000024C
    lwz r0, 0x48(r3)
    cmpwi r0, 0x1
    bne lbl_fn_800E3F5C_0000024C
    li r7, 0x10
lbl_fn_800E3F5C_0000024C:
    lwz r3, lbl_8087EE98
    addi r4, r1, 0x50
    addi r5, r1, 0x2c
    addi r6, r1, 0x20
    addi r8, r28, 0x5b8
    li r27, 0x0
    li r9, 0x0
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_800E3F5C_00000338
    lwz r3, 0x88(r1)
    cmpwi r3, 0x0
    beq lbl_fn_800E3F5C_00000338
    lwz r0, 0x8(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_800E3F5C_00000338
    lwz r26, 0xc(r3)
    mr r4, r28
    li r31, 0x0
    li r5, 0x1
    mr r3, r26
    bl fn_8016F3D0
    cmpwi r3, 0x0
    bne lbl_fn_800E3F5C_000002D8
    lwz r3, 0x48(r26)
    li r0, 0x1
    cmpwi r3, 0x1
    beq lbl_fn_800E3F5C_000002CC
    cmpwi r3, 0x4
    beq lbl_fn_800E3F5C_000002CC
    li r0, 0x0
lbl_fn_800E3F5C_000002CC:
    cmpwi r0, 0x0
    bne lbl_fn_800E3F5C_000002D8
    li r31, 0x1
lbl_fn_800E3F5C_000002D8:
    lwz r0, 0x54c(r26)
    rlwinm r3, r0, 0, 9, 9
    subis r0, r3, 0x40
    cmplwi r0, 0x0
    bne lbl_fn_800E3F5C_000002F4
    cntlzw r0, r31
    srwi r31, r0, 5
lbl_fn_800E3F5C_000002F4:
    cmpwi r29, 0x0
    li r27, 0x1
    beq lbl_fn_800E3F5C_00000338
    mr r3, r29
    mr r4, r26
    bl fn_803CCA4C
    cmpwi r3, 0x0
    beq lbl_fn_800E3F5C_00000338
    lfs f1, lbl_80881310
    mr r3, r29
    mr r4, r26
    li r5, 0x0
    bl fn_803CCA64
    cmpwi r3, 0x0
    bne lbl_fn_800E3F5C_00000338
    li r27, 0x0
    li r31, 0x0
lbl_fn_800E3F5C_00000338:
    cmpwi r27, 0x0
    bne lbl_fn_800E3F5C_00000358
    cmpwi r29, 0x0
    beq lbl_fn_800E3F5C_00000358
    mr r3, r29
    mr r4, r28
    bl fn_803CCA34
    mr r30, r3
lbl_fn_800E3F5C_00000358:
    lwz r4, 0x88(r1)
lbl_fn_800E3F5C_0000035C:
    lwz r3, lbl_8087F048
    mr r5, r31
    mr r6, r30
    bl fn_801021B4
lbl_fn_800E3F5C_0000036C:
    addi r11, r1, 0xc0
    bl _restgpr_26
    lwz r0, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

asm void fn_800E41FC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80149A30
    lwz r3, lbl_8087F0A8
    lwz r0, 0x34(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800E41FC_000003E0
    lfs f1, lbl_80881314
    li r4, 0x14
    lfs f0, 0x52c(r31)
    lis r5, 0xffff
    lwz r3, lbl_8087EEB0
    fadds f2, f1, f0
    lfs f1, 0x528(r31)
    lfs f3, 0x530(r31)
    lfs f4, 0x538(r31)
    lfs f5, lbl_808812DC
    lfs f6, lbl_80881318
    lfs f7, lbl_80881300
    bl fn_80063484
lbl_fn_800E41FC_000003E0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800E426C(void)
{
    nofralloc
    lwz r3, lbl_8087F048
    li r4, 0x0
    b fn_8010220C
}

asm void fn_800E4278(void)
{
    nofralloc
    stwu r1, -0x310(r1)
    mflr r0
    stw r0, 0x314(r1)
    addi r11, r1, 0x2f0
    stfd f31, 0x300(r1)
    psq_st f31, 0x308(r1), 0, 0
    stfd f30, 0x2f0(r1)
    psq_st f30, 0x2f8(r1), 0, 0
    bl _savegpr_21
    lwz r5, 0x55c(r3)
    mr r22, r3
    mr r23, r4
    li r24, 0x1
    cmpwi r5, 0x1
    bne lbl_fn_800E4278_00000440
    li r24, 0x0
lbl_fn_800E4278_00000440:
    cmpwi r5, 0x6
    bne lbl_fn_800E4278_00000464
    lwz r4, 0x560(r3)
    subi r0, r4, 0x3c
    cmplwi r0, 0x1
    ble lbl_fn_800E4278_00000460
    cmpwi r4, 0x62
    bne lbl_fn_800E4278_00000464
lbl_fn_800E4278_00000460:
    li r24, 0x0
lbl_fn_800E4278_00000464:
    cmpwi r5, 0x5
    bne lbl_fn_800E4278_00000494
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 25
    beq lbl_fn_800E4278_00000494
    lwz r3, lbl_8087F0A8
    li r4, 0x15
    addi r3, r3, 0x48c
    bl fn_801240B4
    cmpwi r3, 0x0
    beq lbl_fn_800E4278_00000494
    li r24, 0x0
lbl_fn_800E4278_00000494:
    lwz r3, lbl_8087F0A8
    mr r4, r24
    addi r3, r3, 0x48c
    bl fn_80122330
    lwz r5, lbl_8087F490
    li r3, 0x0
    lwz r6, 0xfc4(r22)
    li r4, -0x1
    lwz r0, 0x764(r5)
    addi r30, r23, 0x6c
    cmpwi r6, 0x0
    stw r4, 0x19c(r1)
    lwz r31, lbl_8087F0A8
    li r27, 0x0
    stw r4, 0x1a0(r1)
    lwz r29, 0x748(r5)
    stw r3, 0x1a4(r1)
    lwz r28, 0x75c(r5)
    stw r3, 0x1a8(r1)
    stw r3, 0x1ac(r1)
    stw r3, 0x1b0(r1)
    stw r0, 0x198(r1)
    beq lbl_fn_800E4278_00000608
    lwz r7, 0x38(r6)
    li r4, 0x0
    li r0, 0x0
    li r3, 0x0
    rlwinm r5, r7, 0, 29, 29
    cmplwi r5, 0x4
    beq lbl_fn_800E4278_0000051C
    clrlwi r5, r7, 31
    cmplwi r5, 0x1
    beq lbl_fn_800E4278_0000051C
    li r3, 0x1
lbl_fn_800E4278_0000051C:
    cmpwi r3, 0x0
    beq lbl_fn_800E4278_00000538
    lwz r3, 0x7e0(r6)
    rlwinm r3, r3, 0, 26, 26
    cmplwi r3, 0x20
    beq lbl_fn_800E4278_00000538
    li r0, 0x1
lbl_fn_800E4278_00000538:
    cmpwi r0, 0x0
    beq lbl_fn_800E4278_0000056C
    lwz r0, 0x55c(r6)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_800E4278_00000560
    lwz r0, 0x560(r6)
    cmpwi r0, 0x1c
    bne lbl_fn_800E4278_00000560
    li r3, 0x1
lbl_fn_800E4278_00000560:
    cmpwi r3, 0x0
    bne lbl_fn_800E4278_0000056C
    li r4, 0x1
lbl_fn_800E4278_0000056C:
    cmpwi r4, 0x0
    beq lbl_fn_800E4278_00000598
    lwz r0, 0x12a4(r22)
    srwi. r3, r0, 31
    bne lbl_fn_800E4278_00000598
    extrwi. r3, r0, 1, 25
    bne lbl_fn_800E4278_00000598
    lwz r3, 0x54c(r6)
    rlwinm r3, r3, 0, 18, 18
    cmplwi r3, 0x2000
    bne lbl_fn_800E4278_000005AC
lbl_fn_800E4278_00000598:
    mr r3, r22
    li r4, 0x0
    li r5, 0x0
    bl fn_8016DC14
    b lbl_fn_800E4278_00000608
lbl_fn_800E4278_000005AC:
    extrwi. r0, r0, 1, 26
    bne lbl_fn_800E4278_000005E0
    lwz r3, lbl_8087F0A8
    li r4, 0x11
    addi r3, r3, 0x48c
    bl fn_801240B4
    cmpwi r3, 0x0
    beq lbl_fn_800E4278_000005E0
    mr r3, r22
    li r4, 0x0
    li r5, 0x0
    bl fn_8016DC14
    b lbl_fn_800E4278_00000608
lbl_fn_800E4278_000005E0:
    lwz r0, 0x55c(r22)
    cmpwi r0, 0x6
    bne lbl_fn_800E4278_00000608
    lwz r0, 0x560(r22)
    cmpwi r0, 0x1d
    bne lbl_fn_800E4278_00000608
    mr r3, r22
    li r4, 0x0
    li r5, 0x0
    bl fn_8016DC14
lbl_fn_800E4278_00000608:
    lwz r3, 0x55c(r22)
    cmpwi r3, 0x1
    bne lbl_fn_800E4278_00001704
    lwz r0, 0x12a8(r22)
    extrwi. r0, r0, 1, 22
    bne lbl_fn_800E4278_00001704
    lwz r0, 0x12a4(r22)
    extrwi. r3, r0, 1, 25
    beq lbl_fn_800E4278_000006A8
    lwz r0, 0x800(r30)
    lwz r3, 0x7fc(r30)
    cmpw r3, r0
    bne lbl_fn_800E4278_0000066C
    lfs f3, lbl_8088131C
    addi r3, r1, 0x100
    lfs f0, 0x30(r30)
    psq_l f1, 0x534(r22), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    fadds f0, f3, f0
    lfs f2, 0x53c(r22)
    stfs f0, 0x104(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x108(r1)
    psq_st f1, 0x534(r22), 0, 0
    stfs f2, 0x53c(r22)
lbl_fn_800E4278_0000066C:
    lwz r0, 0x12a4(r22)
    extrwi. r0, r0, 1, 28
    beq lbl_fn_800E4278_00000684
    mr r3, r22
    li r4, 0x0
    bl fn_80155DAC
lbl_fn_800E4278_00000684:
    lwz r3, 0x648(r22)
    cmpwi r3, 0x0
    beq lbl_fn_800E4278_0000158C
    lwz r0, 0x4(r3)
    cmpwi r0, 0x1
    bne lbl_fn_800E4278_0000158C
    li r0, 0xb
    stw r0, 0x198(r1)
    b lbl_fn_800E4278_0000158C
lbl_fn_800E4278_000006A8:
    lwz r3, 0x1208(r22)
    cmpwi r3, 0x0
    bne lbl_fn_800E4278_0000158C
    extrwi. r3, r0, 1, 28
    bne lbl_fn_800E4278_0000158C
    lwz r3, 0xf54(r22)
    cmpwi r3, 0x0
    bne lbl_fn_800E4278_0000158C
    srwi. r3, r0, 31
    beq lbl_fn_800E4278_00000E7C
    lwz r3, 0xc48(r22)
    cmpwi r3, 0x0
    beq lbl_fn_800E4278_00000720
    lwz r3, lbl_8087F0A8
    li r4, 0x15
    addi r3, r3, 0x48c
    bl fn_801240B4
    cmpwi r3, 0x0
    bne lbl_fn_800E4278_000006FC
    mr r3, r22
    bl fn_80154344
lbl_fn_800E4278_000006FC:
    lwz r3, 0x648(r22)
    cmpwi r3, 0x0
    beq lbl_fn_800E4278_0000158C
    lwz r0, 0x4(r3)
    cmpwi r0, 0x1
    bne lbl_fn_800E4278_0000158C
    li r0, 0xb
    stw r0, 0x198(r1)
    b lbl_fn_800E4278_0000158C
lbl_fn_800E4278_00000720:
    extrwi. r0, r0, 1, 26
    lwz r3, 0x143c(r22)
    subi r0, r3, 0x1
    stw r0, 0x143c(r22)
    bne lbl_fn_800E4278_00000D78
    mr r3, r22
    li r26, 0x0
    bl fn_80153B44
    mr r31, r3
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_800A56A8
    fneg f3, f1
    lfs f0, lbl_808812DC
    stfs f0, 0xf8(r1)
    li r4, 0x0
    lwz r3, lbl_8087EF70
    li r5, 0x1
    stfs f3, 0xf4(r1)
    li r6, 0x0
    bl fn_800A56A8
    fneg f0, f1
    addi r3, r1, 0xf4
    stfs f0, 0xfc(r1)
    bl fn_805F9940
    fmr f30, f1
    mr r4, r22
    addi r3, r1, 0xe8
    bl fn_80178018
    lfs f3, 0xec(r1)
    lis r3, lbl_80735258@ha
    lfs f0, 0x538(r22)
    lfd f2, lbl_80735258@l(r3)
    fsubs f1, f3, f0
    bl fn_8068AEA8
    frsp f31, f1
    lfs f0, lbl_8088131C
    fcmpo cr0, f31, f0
    ble lbl_fn_800E4278_000007CC
    lfs f0, lbl_80881320
    fsubs f31, f31, f0
lbl_fn_800E4278_000007CC:
    lfs f0, lbl_80881324
    fcmpo cr0, f31, f0
    bge lbl_fn_800E4278_000007E0
    lfs f0, lbl_80881320
    fadds f31, f31, f0
lbl_fn_800E4278_000007E0:
    lfs f0, lbl_80881328
    fcmpo cr0, f30, f0
    ble lbl_fn_800E4278_00000D3C
    cmpwi r31, 0x0
    beq lbl_fn_800E4278_00000B30
    cmpwi r31, 0x3
    bne lbl_fn_800E4278_00000808
    lwz r0, 0xc40(r22)
    cmpwi r0, 0x1
    bne lbl_fn_800E4278_00000B30
lbl_fn_800E4278_00000808:
    mr r3, r22
    bl fn_80179FA8
    cmpwi r3, 0x0
    beq lbl_fn_800E4278_00000B30
    lwz r0, 0x139c(r22)
    cmpwi r0, 0x0
    bne lbl_fn_800E4278_00000B30
    lfs f0, lbl_808812DC
    li r0, 0x0
    stw r0, 0x180(r1)
    mr r5, r22
    lwz r3, lbl_8087F048
    addi r4, r1, 0x180
    stw r0, 0x184(r1)
    addi r6, r1, 0xe8
    lfs f1, lbl_80881310
    stw r0, 0x188(r1)
    lfs f2, lbl_80881300
    stfs f0, 0x18c(r1)
    stfs f0, 0x190(r1)
    stfs f0, 0x194(r1)
    bl fn_8010089C
    cmpwi r3, 0x0
    beq lbl_fn_800E4278_0000087C
    lwz r0, 0x180(r1)
    li r4, 0xa
    stw r4, 0x198(r1)
    li r26, 0x1
    stw r0, 0x1a4(r1)
lbl_fn_800E4278_0000087C:
    cmpwi r3, 0x0
    beq lbl_fn_800E4278_00000B30
    cmpwi r29, 0xa
    bne lbl_fn_800E4278_00000B30
    lwz r3, lbl_8087F9C0
    li r4, 0x4
    lwz r0, 0x28(r3)
    cntlzw r0, r0
    srwi. r0, r0, 5
    beq lbl_fn_800E4278_000008A8
    li r4, 0x2
lbl_fn_800E4278_000008A8:
    lwz r3, lbl_8087F0A8
    addi r3, r3, 0x48c
    bl fn_801231D0
    cmpwi r3, 0x0
    beq lbl_fn_800E4278_00000B30
    cmpwi r31, 0x3
    li r24, 0x0
    bne lbl_fn_800E4278_000008CC
    li r24, 0x2
lbl_fn_800E4278_000008CC:
    lfs f5, 0x194(r1)
    addi r3, r1, 0xdc
    lfs f0, 0x530(r22)
    lfs f4, 0x18c(r1)
    lfs f3, 0x528(r22)
    fsubs f5, f5, f0
    lfs f0, lbl_808812DC
    fsubs f3, f4, f3
    stfs f5, 0xe4(r1)
    stfs f3, 0xdc(r1)
    stfs f0, 0xe0(r1)
    bl fn_805F9920
    lfs f0, lbl_8088132C
    fcmpo cr0, f1, f0
    ble lbl_fn_800E4278_00000918
    addi r3, r1, 0xdc
    mr r4, r3
    bl fn_805F98D0
    b lbl_fn_800E4278_00000964
lbl_fn_800E4278_00000918:
    lfs f3, lbl_808812DC
    addi r3, r1, 0x248
    lfs f0, lbl_808812D8
    li r4, 0x79
    stfs f3, 0xac(r1)
    stfs f3, 0xb0(r1)
    stfs f0, 0xb4(r1)
    lfs f1, 0x538(r22)
    bl fn_805F8E70
    addi r4, r1, 0xac
    addi r3, r1, 0x248
    mr r5, r4
    bl fn_805F93C0
    addi r4, r1, 0xac
    lfs f2, 0xb4(r1)
    addi r3, r1, 0xdc
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0xe4(r1)
lbl_fn_800E4278_00000964:
    cmpwi r31, 0x3
    bne lbl_fn_800E4278_000009C0
    lfs f3, lbl_808812DC
    addi r3, r1, 0x218
    lfs f0, lbl_808812D8
    li r4, 0x79
    stfs f3, 0xa0(r1)
    stfs f3, 0xa4(r1)
    stfs f0, 0xa8(r1)
    lfs f1, 0x538(r22)
    bl fn_805F8E70
    addi r4, r1, 0xa0
    addi r3, r1, 0x218
    mr r5, r4
    bl fn_805F93C0
    addi r3, r1, 0xdc
    addi r4, r1, 0xa0
    bl fn_805F9990
    lfs f0, lbl_808812DC
    fcmpo cr0, f1, f0
    bge lbl_fn_800E4278_00000B04
    li r24, 0x0
    b lbl_fn_800E4278_00000B04
lbl_fn_800E4278_000009C0:
    cmpwi r31, 0x2
    bne lbl_fn_800E4278_00000A64
    lfs f3, lbl_808812DC
    addi r3, r1, 0x1e8
    lfs f0, lbl_808812D8
    li r4, 0x79
    stfs f3, 0x94(r1)
    stfs f3, 0x98(r1)
    stfs f0, 0x9c(r1)
    lfs f1, 0x538(r22)
    bl fn_805F8E70
    addi r4, r1, 0x94
    addi r3, r1, 0x1e8
    mr r5, r4
    bl fn_805F93C0
    addi r3, r1, 0xdc
    addi r4, r1, 0x94
    bl fn_805F9990
    lfs f0, lbl_808812DC
    fcmpo cr0, f1, f0
    ble lbl_fn_800E4278_00000B04
    lfs f5, 0xc1c(r22)
    lfs f4, lbl_80881330
    lfs f3, 0xc18(r22)
    lfs f0, 0xc14(r22)
    fmuls f5, f5, f4
    fmuls f6, f3, f4
    lfs f3, 0x52c(r22)
    fmuls f7, f0, f4
    lfs f4, 0x528(r22)
    lfs f0, 0x530(r22)
    fadds f3, f3, f6
    fadds f4, f4, f7
    stfs f7, 0x88(r1)
    fadds f0, f0, f5
    stfs f6, 0x8c(r1)
    stfs f5, 0x90(r1)
    stfs f4, 0x528(r22)
    stfs f3, 0x52c(r22)
    stfs f0, 0x530(r22)
    b lbl_fn_800E4278_00000B04
lbl_fn_800E4278_00000A64:
    cmpwi r31, 0x1
    bne lbl_fn_800E4278_00000B04
    lfs f3, lbl_808812DC
    addi r3, r1, 0x1b8
    lfs f0, lbl_808812D8
    li r4, 0x79
    stfs f3, 0x7c(r1)
    stfs f3, 0x80(r1)
    stfs f0, 0x84(r1)
    lfs f1, 0x538(r22)
    bl fn_805F8E70
    addi r4, r1, 0x7c
    addi r3, r1, 0x1b8
    mr r5, r4
    bl fn_805F93C0
    addi r3, r1, 0xdc
    addi r4, r1, 0x7c
    bl fn_805F9990
    lfs f0, lbl_808812DC
    fcmpo cr0, f1, f0
    ble lbl_fn_800E4278_00000B04
    lfs f5, 0xc1c(r22)
    lfs f4, lbl_80881334
    lfs f3, 0xc18(r22)
    lfs f0, 0xc14(r22)
    fmuls f5, f5, f4
    fmuls f6, f3, f4
    lfs f3, 0x52c(r22)
    fmuls f7, f0, f4
    lfs f4, 0x528(r22)
    lfs f0, 0x530(r22)
    fadds f3, f3, f6
    fadds f4, f4, f7
    stfs f7, 0x70(r1)
    fadds f0, f0, f5
    stfs f6, 0x74(r1)
    stfs f5, 0x78(r1)
    stfs f4, 0x528(r22)
    stfs f3, 0x52c(r22)
    stfs f0, 0x530(r22)
lbl_fn_800E4278_00000B04:
    mr r3, r22
    bl fn_801539E0
    lwz r6, 0x180(r1)
    mr r3, r22
    mr r8, r24
    addi r7, r1, 0x18c
    li r4, 0xcb
    li r5, 0x0
    li r9, 0x0
    bl fn_800E8688
    li r27, 0x1
lbl_fn_800E4278_00000B30:
    cmpwi r31, 0x2
    li r24, -0x1
    bne lbl_fn_800E4278_00000B54
    lfs f0, lbl_80881338
    fcmpo cr0, f31, f0
    ble lbl_fn_800E4278_00000B54
    lfs f0, lbl_8088133C
    fcmpo cr0, f31, f0
    blt lbl_fn_800E4278_00000B74
lbl_fn_800E4278_00000B54:
    cmpwi r31, 0x1
    bne lbl_fn_800E4278_00000BA8
    lfs f0, lbl_80881340
    fcmpo cr0, f31, f0
    bge lbl_fn_800E4278_00000BA8
    lfs f0, lbl_80881344
    fcmpo cr0, f31, f0
    ble lbl_fn_800E4278_00000BA8
lbl_fn_800E4278_00000B74:
    mr r3, r23
    mr r6, r22
    addi r4, r1, 0xd0
    addi r5, r1, 0x24
    bl fn_8036DB3C
    cmpwi r3, 0x0
    beq lbl_fn_800E4278_00000B98
    li r24, 0x3
    b lbl_fn_800E4278_00000BA8
lbl_fn_800E4278_00000B98:
    lwz r0, 0x139c(r22)
    cmpwi r0, 0x0
    bne lbl_fn_800E4278_00000BA8
    li r24, 0x2
lbl_fn_800E4278_00000BA8:
    cmpwi r24, -0x1
    bne lbl_fn_800E4278_00000BE0
    lwz r0, 0x139c(r22)
    cmpwi r0, 0x0
    bne lbl_fn_800E4278_00000BE0
    subi r0, r31, 0x1
    cmplwi r0, 0x1
    bgt lbl_fn_800E4278_00000BE0
    fabs f3, f31
    lfs f0, lbl_80881338
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_800E4278_00000BE0
    li r24, 0x5
lbl_fn_800E4278_00000BE0:
    cmpwi r24, -0x1
    bne lbl_fn_800E4278_00000C20
    lwz r0, 0x139c(r22)
    cmpwi r0, 0x0
    bne lbl_fn_800E4278_00000C20
    cmpwi r31, 0x3
    bne lbl_fn_800E4278_00000C20
    fabs f3, f31
    lfs f0, lbl_80881338
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_800E4278_00000C20
    lwz r0, 0xc40(r22)
    cmpwi r0, 0x1
    bne lbl_fn_800E4278_00000C20
    li r24, 0x4
lbl_fn_800E4278_00000C20:
    cmpwi r24, -0x1
    beq lbl_fn_800E4278_00000D3C
    cmpwi r26, 0x0
    bne lbl_fn_800E4278_00000C48
    cmpwi r24, 0x5
    stw r24, 0x198(r1)
    bne lbl_fn_800E4278_00000C44
    li r0, 0x2
    stw r0, 0x198(r1)
lbl_fn_800E4278_00000C44:
    li r26, 0x1
lbl_fn_800E4278_00000C48:
    cmpwi r27, 0x0
    bne lbl_fn_800E4278_00000D3C
    lwz r3, lbl_8087F0A8
    li r4, 0x2
    addi r3, r3, 0x48c
    bl fn_801231D0
    cmpwi r3, 0x0
    beq lbl_fn_800E4278_00000D3C
    cmpwi r24, 0x4
    bne lbl_fn_800E4278_00000CB0
    lfs f3, lbl_808812DC
    addi r3, r22, 0xc14
    lfs f0, lbl_808812D8
    addi r4, r1, 0x58
    stfs f3, 0x58(r1)
    addi r5, r1, 0x64
    stfs f0, 0x5c(r1)
    stfs f3, 0x60(r1)
    bl fn_805F99B0
    lwz r12, 0x0(r22)
    mr r3, r22
    addi r4, r1, 0x64
    lwz r12, 0x74(r12)
    mtctr r12
    bctrl
    b lbl_fn_800E4278_00000D38
lbl_fn_800E4278_00000CB0:
    cmpwi r24, 0x5
    bne lbl_fn_800E4278_00000CC4
    mr r3, r22
    bl fn_801551AC
    b lbl_fn_800E4278_00000D38
lbl_fn_800E4278_00000CC4:
    cmpwi r24, 0x2
    bne lbl_fn_800E4278_00000D18
    mr r3, r22
    bl fn_80153B44
    cmpwi r3, 0x1
    bne lbl_fn_800E4278_00000D08
    lfs f4, 0xc1c(r22)
    addi r4, r1, 0x4c
    lfs f3, 0xc18(r22)
    lfs f0, 0xc14(r22)
    fneg f4, f4
    fneg f3, f3
    fneg f0, f0
    stfs f4, 0x54(r1)
    stfs f0, 0x4c(r1)
    stfs f3, 0x50(r1)
    b lbl_fn_800E4278_00000D0C
lbl_fn_800E4278_00000D08:
    addi r4, r22, 0xc14
lbl_fn_800E4278_00000D0C:
    mr r3, r22
    bl fn_80155790
    b lbl_fn_800E4278_00000D38
lbl_fn_800E4278_00000D18:
    cmpwi r24, 0x3
    bne lbl_fn_800E4278_00000D38
    lwz r5, 0x24(r1)
    mr r3, r22
    addi r4, r1, 0xd0
    bl fn_80154EC4
    li r0, 0x8
    stw r0, 0x143c(r22)
lbl_fn_800E4278_00000D38:
    li r27, 0x1
lbl_fn_800E4278_00000D3C:
    cmpwi r26, 0x0
    bne lbl_fn_800E4278_00000D78
    lwz r3, lbl_8087F0A8
    li r0, 0x1
    stw r0, 0x198(r1)
    li r4, 0x13
    addi r3, r3, 0x48c
    bl fn_801231D0
    cmpwi r3, 0x0
    beq lbl_fn_800E4278_00000D78
    mr r3, r22
    bl fn_801539E0
    li r0, 0x2
    stw r0, 0x14a0(r22)
    li r27, 0x1
lbl_fn_800E4278_00000D78:
    lwz r0, 0x12a4(r22)
    srwi. r0, r0, 31
    beq lbl_fn_800E4278_00000DBC
    lwz r0, 0x139c(r22)
    cmpwi r0, 0x0
    bne lbl_fn_800E4278_00000DBC
    lwz r3, lbl_8087F0A8
    li r4, 0x15
    addi r3, r3, 0x48c
    bl fn_801240B4
    cmpwi r3, 0x0
    beq lbl_fn_800E4278_00000DBC
    lwz r0, 0x143c(r22)
    cmpwi r0, 0x0
    bgt lbl_fn_800E4278_00000DBC
    mr r3, r22
    bl fn_80153FA0
lbl_fn_800E4278_00000DBC:
    lwz r3, 0x12a4(r22)
    extrwi. r0, r3, 1, 25
    bne lbl_fn_800E4278_0000158C
    srwi. r0, r3, 31
    li r3, 0x0
    beq lbl_fn_800E4278_00000DE4
    lwz r0, 0xc48(r22)
    cmpwi r0, 0x0
    beq lbl_fn_800E4278_00000DE4
    li r3, 0x1
lbl_fn_800E4278_00000DE4:
    cmpwi r3, 0x0
    bne lbl_fn_800E4278_0000158C
    lwz r0, 0x139c(r22)
    cmpwi r0, 0x0
    bne lbl_fn_800E4278_0000158C
    mr r3, r22
    bl fn_80153B44
    cmpwi r3, 0x0
    beq lbl_fn_800E4278_0000158C
    lwz r3, lbl_8087F0A8
    addi r3, r3, 0x48c
    bl fn_80124B60
    cmpwi r3, 0x0
    bne lbl_fn_800E4278_0000158C
    lwz r3, lbl_8087F430
    li r4, 0xd0
    bl fn_80370174
    cmpwi r3, 0x0
    bne lbl_fn_800E4278_0000158C
    lwz r5, lbl_8087F490
    li r3, 0x0
    li r0, 0xd
    li r4, -0x1
    stw r0, 0x7c0(r5)
    stw r4, 0x7c4(r5)
    stw r4, 0x7c8(r5)
    stw r3, 0x7cc(r5)
    stw r3, 0x7d0(r5)
    stw r3, 0x7d4(r5)
    stw r4, 0x168(r1)
    stw r4, 0x16c(r1)
    stw r3, 0x170(r1)
    stw r3, 0x174(r1)
    stw r3, 0x178(r1)
    stw r3, 0x17c(r1)
    stw r0, 0x164(r1)
    stw r3, 0x7d8(r5)
    b lbl_fn_800E4278_0000158C
lbl_fn_800E4278_00000E7C:
    lwz r0, 0x198(r1)
    li r26, 0x0
    cmpwi r0, -0x1
    bne lbl_fn_800E4278_000010CC
    lwz r0, 0x139c(r22)
    cmpwi r0, 0x0
    bne lbl_fn_800E4278_000010CC
    mr r3, r23
    bl fn_8036E098
    cmpwi r3, 0x0
    mr r25, r3
    beq lbl_fn_800E4278_000010CC
    lwz r0, 0x50(r3)
    li r24, 0x0
    cmpwi r0, 0x10
    bne lbl_fn_800E4278_00000F0C
    lwz r5, 0xe8(r3)
    li r26, 0x1
    lwz r0, 0xec(r3)
    li r24, 0x0
    lwz r3, lbl_8087F0A8
    li r4, 0x2
    stw r5, 0x198(r1)
    addi r3, r3, 0x48c
    stw r0, 0x19c(r1)
    bl fn_801231D0
    cmpwi r3, 0x0
    bne lbl_fn_800E4278_00000F04
    lwz r3, lbl_8087F0A8
    li r4, 0x4
    addi r3, r3, 0x48c
    bl fn_801231D0
    cmpwi r3, 0x0
    beq lbl_fn_800E4278_00001070
lbl_fn_800E4278_00000F04:
    li r24, 0x1
    b lbl_fn_800E4278_00001070
lbl_fn_800E4278_00000F0C:
    cmpwi r0, 0x3f
    beq lbl_fn_800E4278_00000F2C
    cmpwi r0, 0x3b
    beq lbl_fn_800E4278_00000F2C
    cmpwi r0, 0x3c
    beq lbl_fn_800E4278_00000F2C
    cmpwi r0, 0x27
    bne lbl_fn_800E4278_00000F7C
lbl_fn_800E4278_00000F2C:
    lwz r5, 0xe8(r3)
    li r26, 0x1
    lwz r0, 0xec(r3)
    li r24, 0x0
    lwz r3, lbl_8087F0A8
    li r4, 0x2
    stw r5, 0x198(r1)
    addi r3, r3, 0x48c
    stw r0, 0x19c(r1)
    bl fn_801231D0
    cmpwi r3, 0x0
    bne lbl_fn_800E4278_00000F74
    lwz r3, lbl_8087F0A8
    li r4, 0x0
    addi r3, r3, 0x48c
    bl fn_801231D0
    cmpwi r3, 0x0
    beq lbl_fn_800E4278_00001070
lbl_fn_800E4278_00000F74:
    li r24, 0x1
    b lbl_fn_800E4278_00001070
lbl_fn_800E4278_00000F7C:
    cmpwi r0, 0x8
    bne lbl_fn_800E4278_00000FF8
    lwz r3, 0x12a4(r22)
    lwz r0, 0x32c(r31)
    extrwi r3, r3, 1, 26
    cntlzw r3, r3
    cmpwi r0, 0x2
    srwi r31, r3, 5
    bne lbl_fn_800E4278_00000FCC
    lwz r0, 0x648(r22)
    cmpwi r0, 0x0
    beq lbl_fn_800E4278_00000FCC
    lwz r3, lbl_8087F0A8
    li r4, 0x0
    addi r3, r3, 0x48c
    bl fn_801248DC
    lfs f0, lbl_80881328
    fcmpo cr0, f1, f0
    ble lbl_fn_800E4278_00000FCC
    li r31, 0x0
lbl_fn_800E4278_00000FCC:
    cmpwi r31, 0x0
    beq lbl_fn_800E4278_00001070
    mr r3, r25
    bl fn_803FC870
    lwz r3, lbl_8087F0A8
    li r26, 0x1
    li r4, 0x2
    addi r3, r3, 0x48c
    bl fn_801231D0
    mr r24, r3
    b lbl_fn_800E4278_00001070
lbl_fn_800E4278_00000FF8:
    lwz r3, 0x12a4(r22)
    lwz r0, 0x32c(r31)
    extrwi r3, r3, 1, 26
    cntlzw r3, r3
    cmpwi r0, 0x2
    srwi r31, r3, 5
    bne lbl_fn_800E4278_00001040
    lwz r0, 0x648(r22)
    cmpwi r0, 0x0
    beq lbl_fn_800E4278_00001040
    lwz r3, lbl_8087F0A8
    li r4, 0x0
    addi r3, r3, 0x48c
    bl fn_801248DC
    lfs f0, lbl_80881328
    fcmpo cr0, f1, f0
    ble lbl_fn_800E4278_00001040
    li r31, 0x0
lbl_fn_800E4278_00001040:
    cmpwi r31, 0x0
    beq lbl_fn_800E4278_00001070
    lwz r5, 0xe8(r25)
    li r26, 0x1
    lwz r0, 0xec(r25)
    li r4, 0x2
    lwz r3, lbl_8087F0A8
    stw r5, 0x198(r1)
    addi r3, r3, 0x48c
    stw r0, 0x19c(r1)
    bl fn_801231D0
    mr r24, r3
lbl_fn_800E4278_00001070:
    cmpwi r26, 0x0
    beq lbl_fn_800E4278_000010CC
    cmpwi r24, 0x0
    beq lbl_fn_800E4278_000010CC
    lwz r0, 0x50(r25)
    cmpwi r0, 0x10
    bne lbl_fn_800E4278_000010B0
    mr r3, r22
    addi r7, r25, 0x6c
    li r4, 0xc8
    li r5, 0x0
    li r6, 0x0
    li r8, 0x0
    li r9, 0x0
    bl fn_800E8688
    b lbl_fn_800E4278_000010C8
lbl_fn_800E4278_000010B0:
    lwz r12, 0x0(r25)
    mr r3, r25
    mr r4, r22
    lwz r12, 0x4c(r12)
    mtctr r12
    bctrl
lbl_fn_800E4278_000010C8:
    li r27, 0x1
lbl_fn_800E4278_000010CC:
    cmpwi r26, 0x0
    bne lbl_fn_800E4278_0000158C
    cmpwi r28, 0x0
    bne lbl_fn_800E4278_0000158C
    lwz r0, 0x12a4(r22)
    extrwi. r0, r0, 1, 26
    bne lbl_fn_800E4278_00001148
    mr r3, r23
    mr r5, r22
    addi r4, r1, 0x278
    li r6, 0x1
    li r7, 0x0
    bl fn_8036DAF4
    cmpwi r3, 0x0
    beq lbl_fn_800E4278_00001148
    lwz r3, lbl_8087F0A8
    li r0, 0x0
    stw r0, 0x198(r1)
    li r26, 0x1
    addi r3, r3, 0x48c
    li r4, 0x13
    bl fn_801231D0
    cmpwi r3, 0x0
    beq lbl_fn_800E4278_00001148
    mr r3, r22
    addi r4, r1, 0x278
    li r5, 0x0
    bl fn_80153698
    li r0, 0x8
    stw r0, 0x143c(r22)
    li r27, 0x1
lbl_fn_800E4278_00001148:
    lwz r0, 0x14a4(r22)
    cmpwi r0, 0x0
    bgt lbl_fn_800E4278_0000158C
    lwz r0, 0x198(r1)
    cmpwi r0, -0x1
    beq lbl_fn_800E4278_00001170
    lwz r3, lbl_8087F0A8
    lwz r0, 0x320(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800E4278_0000158C
lbl_fn_800E4278_00001170:
    lwz r0, 0x139c(r22)
    cmpwi r0, 0x0
    bne lbl_fn_800E4278_0000158C
    mr r3, r23
    bl fn_8036DDD4
    cmpwi r3, 0x0
    mr r24, r3
    beq lbl_fn_800E4278_0000158C
    lwz r4, 0x7e0(r3)
    li r0, 0x0
    stw r0, 0x150(r1)
    rlwinm r0, r4, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_800E4278_000011EC
    lwz r0, 0x9f8(r3)
    cmpwi r0, 0x0
    ble lbl_fn_800E4278_000011EC
    mr r3, r23
    bl fn_803761BC
    cmpwi r3, 0x0
    beq lbl_fn_800E4278_00001254
    lwz r3, 0x50(r22)
    bl fn_80219558
    cmpwi r3, 0x0
    bne lbl_fn_800E4278_00001254
    lwz r0, 0x12a4(r22)
    extrwi. r0, r0, 1, 3
    beq lbl_fn_800E4278_00001254
    li r0, 0x9
    stw r0, 0x198(r1)
    b lbl_fn_800E4278_00001254
lbl_fn_800E4278_000011EC:
    rlwinm r0, r4, 0, 25, 25
    cmplwi r0, 0x40
    bne lbl_fn_800E4278_00001254
    lwz r3, lbl_8087F4F0
    li r4, 0x190
    bl fn_804444E8
    cmpwi r3, 0x0
    mr r25, r3
    ble lbl_fn_800E4278_00001254
    li r3, 0x190
    bl fn_80211480
    lwz r0, 0x150(r1)
    addi r4, r1, 0x154
    slwi r0, r0, 2
    add. r4, r4, r0
    beq lbl_fn_800E4278_00001230
    stw r3, 0x0(r4)
lbl_fn_800E4278_00001230:
    lwz r4, 0x150(r1)
    cmpwi r26, 0x0
    addi r0, r4, 0x1
    stw r0, 0x150(r1)
    bne lbl_fn_800E4278_00001254
    li r0, 0xc
    stw r25, 0x1a0(r1)
    stw r3, 0x1a8(r1)
    stw r0, 0x198(r1)
lbl_fn_800E4278_00001254:
    lwz r3, lbl_8087F0A8
    lwz r0, 0x320(r3)
    cmpwi r0, 0x0
    bne lbl_fn_800E4278_00001278
    addi r3, r3, 0x48c
    li r4, 0x2
    bl fn_801231D0
    cmpwi r3, 0x0
    beq lbl_fn_800E4278_0000158C
lbl_fn_800E4278_00001278:
    lwz r0, 0x198(r1)
    cmpwi r0, 0x9
    bne lbl_fn_800E4278_00001484
    li r3, 0x2711
    bl fn_80219E6C
    lwz r0, 0x7e0(r24)
    mr r25, r3
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_800E4278_000012B0
    addi r3, r24, 0x7d4
    li r4, 0x20
    li r5, 0x0
    bl fn_8013310C
lbl_fn_800E4278_000012B0:
    lwz r0, 0x14c(r1)
    li r12, 0x0
    li r11, -0x1
    lis r8, lbl_807C6B90@ha
    clrlwi r0, r0, 4
    stw r12, 0x130(r1)
    mr r4, r25
    mr r5, r22
    stw r12, 0x134(r1)
    mr r6, r24
    addi r3, r1, 0x130
    addi r8, r8, lbl_807C6B90@l
    stw r12, 0x138(r1)
    li r7, 0x0
    li r9, 0x0
    li r10, 0x0
    stw r12, 0x13c(r1)
    stw r12, 0x140(r1)
    stw r11, 0x144(r1)
    stw r0, 0x14c(r1)
    stw r11, 0x148(r1)
    bl fn_8003EA3C
    lwz r3, lbl_8087F048
    mr r5, r24
    li r4, 0x16
    li r6, 0x0
    li r7, 0x0
    bl fn_801092C8
    li r3, 0x4fbf
    bl fn_80219E6C
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_800E4278_0000147C
    lwz r6, 0x5c(r4)
    mr r3, r24
    mr r7, r22
    li r5, 0x0
    li r8, 0x0
    bl fn_80178668
    lwz r0, 0x48(r24)
    cmpwi r0, 0x0
    beq lbl_fn_800E4278_00001360
    cmpwi r0, 0x3
    bne lbl_fn_800E4278_0000147C
lbl_fn_800E4278_00001360:
    lwz r0, lbl_8087F8A8
    cmpwi r0, 0x0
    beq lbl_fn_800E4278_0000147C
    lfs f3, lbl_808812DC
    lis r4, lbl_80735324@ha
    lfs f0, lbl_808812E0
    addi r4, r4, lbl_80735324@l
    addi r26, r24, 0xb0
    li r25, 0x0
    stw r25, 0x20(r1)
    mr r3, r26
    addi r4, r4, 0x1
    li r5, 0x0
    stfs f3, 0xc4(r1)
    stfs f0, 0xc8(r1)
    stfs f3, 0xcc(r1)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_800E4278_000013B0
    b lbl_fn_800E4278_000013BC
lbl_fn_800E4278_000013B0:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r26)
    add r25, r3, r0
lbl_fn_800E4278_000013BC:
    cmpwi r25, 0x0
    beq lbl_fn_800E4278_00001438
    lis r4, lbl_80735324@ha
    addi r24, r24, 0xb0
    addi r4, r4, lbl_80735324@l
    li r5, 0x0
    mr r3, r24
    addi r4, r4, 0x1
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_800E4278_000013F0
    li r3, 0x0
    b lbl_fn_800E4278_000013FC
lbl_fn_800E4278_000013F0:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r24)
    add r3, r3, r0
lbl_fn_800E4278_000013FC:
    lfs f5, 0x2c(r3)
    lfs f6, 0x1c(r3)
    lfs f7, 0xc(r3)
    lfs f4, 0xc4(r1)
    lfs f3, 0xc8(r1)
    lfs f0, 0xcc(r1)
    fadds f4, f4, f7
    fadds f3, f3, f6
    stfs f7, 0x40(r1)
    fadds f0, f0, f5
    stfs f6, 0x44(r1)
    stfs f5, 0x48(r1)
    stfs f4, 0xc4(r1)
    stfs f3, 0xc8(r1)
    stfs f0, 0xcc(r1)
lbl_fn_800E4278_00001438:
    li r4, 0x0
    stw r4, 0x8(r1)
    li r3, 0x1
    li r0, -0x1
    stw r4, 0xc(r1)
    addi r5, r1, 0x20
    addi r6, r1, 0xc4
    li r4, 0x7
    stw r3, 0x10(r1)
    li r7, 0x0
    li r8, 0x0
    li r9, 0x1
    stw r0, 0x14(r1)
    li r10, 0x0
    stw r0, 0x18(r1)
    lwz r3, lbl_8087F8A8
    bl fn_8054D798
lbl_fn_800E4278_0000147C:
    li r27, 0x1
    b lbl_fn_800E4278_0000158C
lbl_fn_800E4278_00001484:
    lwz r31, 0x150(r1)
    cmpwi r31, 0x0
    beq lbl_fn_800E4278_0000158C
    lfs f30, lbl_808812DC
    addi r27, r1, 0x150
    lfs f31, lbl_80881348
    li r21, 0x0
    li r26, 0x0
    li r25, -0x1
    b lbl_fn_800E4278_00001578
lbl_fn_800E4278_000014AC:
    lwz r3, 0x4(r27)
    bl fn_80211734
    cmpwi r3, 0x0
    bne lbl_fn_800E4278_000014D0
    lwz r4, 0x4(r27)
    li r5, 0x1
    lwz r3, lbl_8087F4F0
    lwz r4, 0x4(r4)
    bl fn_8044441C
lbl_fn_800E4278_000014D0:
    lwz r0, 0x12c(r1)
    mr r5, r22
    stw r26, 0x110(r1)
    mr r6, r24
    clrlwi r0, r0, 4
    lwz r4, 0x4(r27)
    stw r26, 0x114(r1)
    addi r3, r1, 0x110
    li r7, 0x0
    stw r26, 0x118(r1)
    stw r26, 0x11c(r1)
    stw r26, 0x120(r1)
    stw r25, 0x124(r1)
    stw r0, 0x12c(r1)
    stw r25, 0x128(r1)
    bl fn_8003F1E4
    lwz r3, 0x4(r27)
    lwz r0, 0x4(r3)
    cmpwi r0, 0x190
    beq lbl_fn_800E4278_00001570
    lfs f4, 0x530(r24)
    mr r6, r22
    lfs f3, 0x52c(r24)
    addi r4, r1, 0x110
    lfs f0, 0x528(r24)
    fadds f4, f4, f30
    fadds f3, f3, f31
    stfs f30, 0x28(r1)
    fadds f0, f0, f30
    lwz r3, lbl_8087F048
    stfs f31, 0x2c(r1)
    addi r5, r1, 0x34
    stfs f30, 0x30(r1)
    li r7, 0x0
    li r8, 0x1
    li r9, 0x0
    stfs f0, 0x34(r1)
    stfs f3, 0x38(r1)
    stfs f4, 0x3c(r1)
    bl fn_80108C10
lbl_fn_800E4278_00001570:
    addi r27, r27, 0x4
    addi r21, r21, 0x1
lbl_fn_800E4278_00001578:
    cmplw r21, r31
    blt lbl_fn_800E4278_000014AC
    li r0, 0x3c
    stw r0, 0x14a4(r22)
    li r27, 0x1
lbl_fn_800E4278_0000158C:
    lwz r31, lbl_8087F490
    lwz r0, 0x7c0(r31)
    cmpwi r0, 0xd
    beq lbl_fn_800E4278_000015F0
    cmpwi r0, -0x1
    bne lbl_fn_800E4278_00001680
    lwz r3, 0x12a4(r22)
    extrwi. r0, r3, 1, 25
    bne lbl_fn_800E4278_00001680
    srwi. r4, r3, 31
    li r3, 0x0
    beq lbl_fn_800E4278_000015CC
    lwz r0, 0xc48(r22)
    cmpwi r0, 0x0
    beq lbl_fn_800E4278_000015CC
    li r3, 0x1
lbl_fn_800E4278_000015CC:
    cmpwi r3, 0x0
    bne lbl_fn_800E4278_00001680
    cmpwi r4, 0x0
    bne lbl_fn_800E4278_00001680
    lwz r3, lbl_8087F0A8
    addi r3, r3, 0x48c
    bl fn_80124B60
    cmpwi r3, 0x0
    bne lbl_fn_800E4278_00001680
lbl_fn_800E4278_000015F0:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_800E4278_00001680
    lwz r0, lbl_8087F490
    cmpwi r0, 0x0
    beq lbl_fn_800E4278_00001680
    lwz r24, 0x10d8(r3)
    cmpwi r24, 0x0
    beq lbl_fn_800E4278_00001680
    mr r3, r24
    bl fn_803CCC4C
    cmpwi r3, 0x0
    bne lbl_fn_800E4278_00001680
    mr r3, r24
    bl fn_803CC77C
    cmpwi r3, 0x0
    ble lbl_fn_800E4278_00001680
    lwz r0, 0x12a4(r22)
    extrwi. r0, r0, 1, 28
    bne lbl_fn_800E4278_00001680
    li r0, 0x11
    stw r0, 0x7c0(r31)
    lwz r3, lbl_8087F490
    stw r0, 0x7c0(r3)
    lwz r0, 0x7c4(r31)
    stw r0, 0x7c4(r3)
    lwz r0, 0x7c8(r31)
    stw r0, 0x7c8(r3)
    lwz r0, 0x7cc(r31)
    stw r0, 0x7cc(r3)
    lwz r0, 0x7d0(r31)
    stw r0, 0x7d0(r3)
    lwz r0, 0x7d4(r31)
    stw r0, 0x7d4(r3)
    lwz r0, 0x7d8(r31)
    stw r0, 0x7d8(r3)
lbl_fn_800E4278_00001680:
    mr r3, r23
    li r4, 0x8f
    bl fn_80370174
    cmpwi r3, 0x1
    bne lbl_fn_800E4278_000017A8
    mr r3, r23
    li r4, 0xa9
    bl fn_80370174
    cmpwi r3, 0x0
    bne lbl_fn_800E4278_000017A8
    lwz r3, 0x12a4(r22)
    extrwi. r0, r3, 1, 25
    bne lbl_fn_800E4278_000016D8
    srwi. r0, r3, 31
    li r3, 0x0
    beq lbl_fn_800E4278_000016D0
    lwz r0, 0xc48(r22)
    cmpwi r0, 0x0
    beq lbl_fn_800E4278_000016D0
    li r3, 0x1
lbl_fn_800E4278_000016D0:
    cmpwi r3, 0x0
    beq lbl_fn_800E4278_000017A8
lbl_fn_800E4278_000016D8:
    lfs f3, 0x2ec(r22)
    lfs f0, lbl_8088134C
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_800E4278_000017A8
    lwz r3, lbl_8087F430
    li r4, 0xa9
    li r5, 0x1
    li r6, 0x0
    bl fn_80370320
    b lbl_fn_800E4278_000017A8
lbl_fn_800E4278_00001704:
    cmpwi r3, 0x6
    bne lbl_fn_800E4278_0000179C
    lwz r0, 0x560(r22)
    cmpwi r0, 0xf
    beq lbl_fn_800E4278_0000172C
    cmpwi r0, 0x62
    beq lbl_fn_800E4278_00001738
    cmpwi r0, 0x79
    beq lbl_fn_800E4278_00001790
    b lbl_fn_800E4278_000017A8
lbl_fn_800E4278_0000172C:
    li r0, 0xa
    stw r0, 0x198(r1)
    b lbl_fn_800E4278_000017A8
lbl_fn_800E4278_00001738:
    lwz r0, 0x12a4(r22)
    extrwi. r0, r0, 1, 25
    beq lbl_fn_800E4278_00001784
    lwz r0, 0x800(r30)
    lwz r3, 0x7fc(r30)
    cmpw r3, r0
    bne lbl_fn_800E4278_00001784
    lfs f3, lbl_8088131C
    addi r3, r1, 0xb8
    lfs f0, 0x30(r30)
    psq_l f1, 0x534(r22), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    fadds f0, f3, f0
    lfs f2, 0x53c(r22)
    stfs f0, 0xbc(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0xc0(r1)
    psq_st f1, 0x534(r22), 0, 0
    stfs f2, 0x53c(r22)
lbl_fn_800E4278_00001784:
    li r0, 0xb
    stw r0, 0x198(r1)
    b lbl_fn_800E4278_000017A8
lbl_fn_800E4278_00001790:
    li r0, 0x10
    stw r0, 0x198(r1)
    b lbl_fn_800E4278_000017A8
lbl_fn_800E4278_0000179C:
    cmpwi r3, 0x2
    bne lbl_fn_800E4278_000017A8
    li r27, 0x1
lbl_fn_800E4278_000017A8:
    lwz r3, lbl_8087F0A8
    addi r3, r3, 0x48c
    bl fn_80124B60
    cmpwi r3, 0x0
    bne lbl_fn_800E4278_000017F8
    lwz r3, lbl_8087F490
    lwz r0, 0x198(r1)
    stw r0, 0x764(r3)
    lwz r0, 0x19c(r1)
    stw r0, 0x768(r3)
    lwz r0, 0x1a0(r1)
    stw r0, 0x76c(r3)
    lwz r0, 0x1a4(r1)
    stw r0, 0x770(r3)
    lwz r0, 0x1a8(r1)
    stw r0, 0x774(r3)
    lwz r0, 0x1ac(r1)
    stw r0, 0x778(r3)
    lwz r0, 0x1b0(r1)
    stw r0, 0x77c(r3)
lbl_fn_800E4278_000017F8:
    lwz r3, lbl_8087F0A8
    addi r3, r3, 0x48c
    bl fn_80124B60
    cmpwi r3, 0x0
    bne lbl_fn_800E4278_0000187C
    lwz r0, 0x55c(r22)
    cmpwi r0, 0x1
    beq lbl_fn_800E4278_00001820
    cmpwi r0, 0x6
    bne lbl_fn_800E4278_0000187C
lbl_fn_800E4278_00001820:
    lwz r3, 0x7e0(r22)
    rlwinm r0, r3, 0, 24, 24
    cmplwi r0, 0x80
    beq lbl_fn_800E4278_00001870
    rlwinm r0, r3, 0, 23, 23
    cmplwi r0, 0x100
    beq lbl_fn_800E4278_00001870
    rlwinm r0, r3, 0, 25, 25
    cmplwi r0, 0x40
    bne lbl_fn_800E4278_00001854
    lwz r0, 0xf94(r22)
    cmpwi r0, 0x0
    beq lbl_fn_800E4278_00001870
lbl_fn_800E4278_00001854:
    rlwinm r0, r3, 0, 17, 17
    cmplwi r0, 0x4000
    beq lbl_fn_800E4278_00001870
    rlwinm r3, r3, 0, 14, 14
    subis r0, r3, 0x2
    cmplwi r0, 0x0
    bne lbl_fn_800E4278_0000187C
lbl_fn_800E4278_00001870:
    lwz r3, lbl_8087F490
    li r0, 0x1
    stw r0, 0x728(r3)
lbl_fn_800E4278_0000187C:
    cmpwi r27, 0x0
    bne lbl_fn_800E4278_000019FC
    lwz r0, 0x58c(r22)
    cmpwi r0, 0x3
    beq lbl_fn_800E4278_000019D0
    cmpwi r0, 0x4
    beq lbl_fn_800E4278_000019E8
    lwz r3, 0x648(r22)
    cmpwi r3, 0x0
    beq lbl_fn_800E4278_000018E8
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_800E4278_000018C8
    mr r3, r22
    mr r4, r23
    mr r5, r29
    mr r6, r28
    bl fn_800E62AC
    b lbl_fn_800E4278_000019FC
lbl_fn_800E4278_000018C8:
    cmpwi r0, 0x1
    bne lbl_fn_800E4278_000019FC
    mr r3, r22
    mr r4, r23
    mr r5, r29
    mr r6, r28
    bl fn_800E7650
    b lbl_fn_800E4278_000019FC
lbl_fn_800E4278_000018E8:
    lwz r3, 0x12a4(r22)
    extrwi. r0, r3, 1, 25
    beq lbl_fn_800E4278_0000191C
    lwz r3, lbl_8087F0A8
    li r4, 0x12
    addi r3, r3, 0x48c
    bl fn_801240B4
    cmpwi r3, 0x0
    bne lbl_fn_800E4278_000019FC
    mr r3, r22
    li r4, 0x0
    bl fn_80155DAC
    b lbl_fn_800E4278_000019FC
lbl_fn_800E4278_0000191C:
    srwi. r0, r3, 31
    bne lbl_fn_800E4278_000019FC
    lwz r0, 0x12a4(r22)
    li r4, 0x11
    rlwinm r0, r0, 0, 27, 25
    stw r0, 0x12a4(r22)
    lwz r3, lbl_8087F0A8
    addi r3, r3, 0x48c
    bl fn_801231D0
    cmpwi r3, 0x0
    beq lbl_fn_800E4278_00001964
    lfs f1, lbl_808812E4
    mr r3, r30
    li r4, 0x0
    li r5, 0x1
    bl fn_8037EF30
    li r0, 0x0
    stw r0, 0xfc0(r22)
lbl_fn_800E4278_00001964:
    lwz r3, lbl_8087F0A8
    li r4, 0x12
    addi r3, r3, 0x48c
    bl fn_801240B4
    cmpwi r3, 0x0
    beq lbl_fn_800E4278_000019FC
    lwz r0, 0x55c(r22)
    cmpwi r0, 0x6
    bne lbl_fn_800E4278_000019B4
    lwz r3, 0x560(r22)
    subi r0, r3, 0x3c
    cmplwi r0, 0x1
    bgt lbl_fn_800E4278_000019FC
    lwz r4, 0x564(r22)
    mr r3, r22
    bl fn_8016E970
    mr r3, r22
    li r4, 0x1
    bl fn_80155DAC
    b lbl_fn_800E4278_000019FC
lbl_fn_800E4278_000019B4:
    lwz r0, 0x12a4(r22)
    extrwi. r0, r0, 1, 28
    bne lbl_fn_800E4278_000019FC
    mr r3, r22
    li r4, 0x1
    bl fn_80155DAC
    b lbl_fn_800E4278_000019FC
lbl_fn_800E4278_000019D0:
    lwz r0, 0x55c(r22)
    cmpwi r0, 0x6
    beq lbl_fn_800E4278_000019FC
    mr r3, r22
    bl fn_80166544
    b lbl_fn_800E4278_000019FC
lbl_fn_800E4278_000019E8:
    lwz r0, 0x55c(r22)
    cmpwi r0, 0x6
    beq lbl_fn_800E4278_000019FC
    mr r3, r22
    bl fn_80166A54
lbl_fn_800E4278_000019FC:
    addi r11, r1, 0x2f0
    psq_l f31, 0x308(r1), 0, 0
    lfd f31, 0x300(r1)
    psq_l f30, 0x2f8(r1), 0, 0
    lfd f30, 0x2f0(r1)
    bl _restgpr_21
    lwz r0, 0x314(r1)
    mtlr r0
    addi r1, r1, 0x310
    blr
}
