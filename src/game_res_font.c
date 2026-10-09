#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_14(void);
extern void _restgpr_21(void);
extern void _restgpr_25(void);
extern void _savegpr_14(void);
extern void _savegpr_21(void);
extern void _savegpr_25(void);
extern void fn_80071E04(void);
extern void fn_80072914(void);
extern void fn_800761A8(void);
extern void fn_800763C0(void);
extern void fn_80076760(void);
extern void fn_80076A28(void);
extern void fn_80079994(void);
extern void fn_800846FC(void);
extern void fn_8008771C(void);
extern void fn_8008937C(void);
extern void fn_800902C0(void);
extern void fn_80094D88(void);
extern void fn_80094F14(void);
extern void fn_800BFAC8(void);
extern void fn_800C0508(void);
extern void fn_800C06B0(void);
extern void fn_800C08B0(void);
extern void fn_800C2448(void);
extern void fn_80236938(void);
extern void fn_80238560(void);
extern void fn_805F8C50(void);
extern void fn_805F8CA0(void);
extern void fn_805F9940(void);
extern void fn_80612E80(void);
extern void fn_806134E0(void);
extern void fn_80613520(void);
extern void fn_80613960(void);
extern void fn_80613BB0(void);
extern void fn_80614790(void);
extern void fn_80615AE0(void);
extern void fn_80615B60(void);
extern void fn_80615C40(void);
extern void fn_80615D20(void);
extern void fn_80615D50(void);
extern void fn_80616EF0(void);
extern void fn_80617030(void);
extern void fn_80617130(void);
extern void fn_80617200(void);
extern void fn_80617220(void);
extern void fn_80617270(void);
extern void fn_806173E0(void);
extern void fn_80617420(void);
extern void fn_80617460(void);
extern void fn_806174C0(void);
extern void fn_806175F0(void);
extern void fn_80617650(void);
extern void fn_806176A0(void);
extern void fn_806176F0(void);
extern void fn_80617730(void);
extern void fn_80617880(void);
extern void fn_806179E0(void);
extern void fn_80618350(void);
extern void fn_806183A0(void);
extern void fn_80618400(void);
extern void fn_80695720(void);

/* External data declarations */
extern u8 lbl_80742F98[];
extern u8 lbl_80742FA0[];
extern u8 lbl_80742FB8[];
extern u8 lbl_807C8290[];
extern u8 lbl_807C82C0[];

/* Small data declarations */
extern u32 lbl_8087DBF8;
extern u32 lbl_8087DBFC;
extern u32 lbl_8087DC00;
extern u32 lbl_8087DC04;
extern u32 lbl_8087DC08;
extern u32 lbl_8087EEE0;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F378;
extern u32 lbl_8087F37C;
extern u32 lbl_8087F380;
extern u32 lbl_8087F384;
extern u32 lbl_8087F388;
extern u32 lbl_8087F38C;
extern u32 lbl_8087F390;
extern u32 lbl_8087F394;
extern u32 lbl_8087F398;
extern u32 lbl_8087F39C;
extern u32 lbl_8087F3A0;
extern u32 lbl_8087F3A4;
extern u32 lbl_8087F3A8;
extern u32 lbl_8087F3AC;
extern u32 lbl_8087F3B0;
extern u32 lbl_808830D0;
extern u32 lbl_80883110;
extern u32 lbl_80883118;
extern u32 lbl_8088311C;
extern u32 lbl_80883120;
extern u32 lbl_80883124;
extern u32 lbl_80883130;
extern u32 lbl_80883134;
extern u32 lbl_80883138;

/* Function declarations */
void fn_802348E4(void);
void fn_80234958(void);
void fn_80234A60(void);
void fn_80234A8C(void);
void fn_80234C24(void);
void fn_80234C54(void);
void fn_80234C84(void);
void fn_80234CD8(void);
void fn_80235968(void);
void fn_80235AB0(void);
void fn_80235BF8(void);

asm void fn_802348E4(void)
{
    nofralloc
    lwz r7, 0xc(r3)
    clrlwi r6, r5, 16
    b lbl_fn_802348E4_00000028
lbl_fn_802348E4_0000000C:
    lwz r0, 0x30(r7)
    cmplw r0, r4
    bne lbl_fn_802348E4_00000024
    lhz r0, 0x18(r7)
    or r0, r0, r6
    sth r0, 0x18(r7)
lbl_fn_802348E4_00000024:
    lwz r7, 0x4(r7)
lbl_fn_802348E4_00000028:
    cmpwi r7, 0x0
    bne lbl_fn_802348E4_0000000C
    li r7, 0x0
    li r6, 0x0
    b lbl_fn_802348E4_00000064
lbl_fn_802348E4_0000003C:
    lwz r0, 0x24(r3)
    add r8, r0, r6
    lwz r0, 0x8(r8)
    cmplw r0, r4
    bne lbl_fn_802348E4_0000005C
    lwz r0, 0x34(r8)
    or r0, r0, r5
    stw r0, 0x34(r8)
lbl_fn_802348E4_0000005C:
    addi r6, r6, 0x94
    addi r7, r7, 0x1
lbl_fn_802348E4_00000064:
    lwz r0, 0x20(r3)
    cmpw r7, r0
    blt lbl_fn_802348E4_0000003C
    blr
}

asm void fn_80234958(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x30
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    stfd f30, 0x30(r1)
    psq_st f30, 0x38(r1), 0, 0
    bl _savegpr_25
    lwz r6, 0xc(r3)
    mr r25, r3
    mr r26, r4
    mr r27, r5
    li r3, 0x1
    b lbl_fn_80234958_000000E8
lbl_fn_80234958_000000B0:
    lwz r0, 0x30(r6)
    lwz r7, 0x4(r6)
    cmplw r0, r4
    bne lbl_fn_80234958_000000E4
    cmpwi r5, 0x0
    bne lbl_fn_80234958_000000D8
    cmpwi r6, 0x0
    beq lbl_fn_80234958_000000E4
    stb r3, 0x1b(r6)
    b lbl_fn_80234958_000000E4
lbl_fn_80234958_000000D8:
    lbz r0, 0x1a(r6)
    rlwinm r0, r0, 0, 24, 24
    stb r0, 0x1a(r6)
lbl_fn_80234958_000000E4:
    mr r6, r7
lbl_fn_80234958_000000E8:
    cmpwi r6, 0x0
    bne lbl_fn_80234958_000000B0
    lfs f30, lbl_80883110
    li r28, 0x0
    lfs f31, lbl_808830D0
    li r29, 0x0
    li r30, 0x1
    li r31, 0x0
    b lbl_fn_80234958_00000148
lbl_fn_80234958_0000010C:
    lwz r0, 0x24(r25)
    add r3, r0, r29
    lwz r0, 0x8(r3)
    cmplw r0, r26
    bne lbl_fn_80234958_00000140
    cmpwi r27, 0x0
    bne lbl_fn_80234958_00000130
    bl fn_80238560
    b lbl_fn_80234958_00000140
lbl_fn_80234958_00000130:
    stb r30, 0x14(r3)
    stw r31, 0x18(r3)
    stfs f30, 0x1c(r3)
    stfs f31, 0x20(r3)
lbl_fn_80234958_00000140:
    addi r29, r29, 0x94
    addi r28, r28, 0x1
lbl_fn_80234958_00000148:
    lwz r0, 0x20(r25)
    cmpw r28, r0
    blt lbl_fn_80234958_0000010C
    addi r11, r1, 0x30
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    psq_l f30, 0x38(r1), 0, 0
    lfd f30, 0x30(r1)
    bl _restgpr_25
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80234A60(void)
{
    nofralloc
    lis r5, lbl_807C82C0@ha
    lis r4, lbl_807C8290@ha
    addi r3, r5, lbl_807C82C0@l
    li r0, 0x0
    addi r4, r4, lbl_807C8290@l
    li r6, 0x5
    stw r6, lbl_807C82C0@l(r5)
    stw r4, 0x4(r3)
    stw r0, 0x8(r3)
    stw r0, 0xc(r3)
    blr
}

asm void fn_80234A8C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r6, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    stw r3, lbl_8087DBF8
    stw r4, lbl_8087DBFC
    stw r5, lbl_8087DC00
    bge lbl_fn_80234A8C_000001D8
    slwi r0, r3, 3
    stw r0, lbl_8087F378
lbl_fn_80234A8C_000001D8:
    lis r31, lbl_80742FB8@ha
    li r3, 0x1000
    addi r5, r31, lbl_80742FB8@l
    li r4, 0x7
    mr r6, r5
    li r7, 0x0
    bl fn_800846FC
    lwz r30, lbl_8087DBF8
    addi r5, r31, lbl_80742FB8@l
    stw r3, lbl_8087F37C
    mr r6, r5
    mulli r3, r30, 0x70
    li r4, 0x7
    li r7, 0x0
    addi r3, r3, 0x10
    bl fn_800846FC
    lis r4, fn_80234C24@ha
    mr r7, r30
    addi r4, r4, fn_80234C24@l
    li r5, 0x0
    li r6, 0x70
    bl fn_80695720
    lwz r30, lbl_8087DBFC
    addi r5, r31, lbl_80742FB8@l
    stw r3, lbl_8087F388
    mr r6, r5
    mulli r3, r30, 0x5c
    li r4, 0x7
    li r7, 0x0
    addi r3, r3, 0x10
    bl fn_800846FC
    lis r4, fn_80234C54@ha
    mr r7, r30
    addi r4, r4, fn_80234C54@l
    li r5, 0x0
    li r6, 0x5c
    bl fn_80695720
    lwz r0, lbl_8087F378
    addi r5, r31, lbl_80742FB8@l
    stw r3, lbl_8087F398
    mr r6, r5
    mulli r3, r0, 0x14
    li r4, 0x7
    li r7, 0x0
    bl fn_800846FC
    lwz r0, lbl_8087DC00
    addi r5, r31, lbl_80742FB8@l
    stw r3, lbl_8087F3A8
    mr r6, r5
    slwi r3, r0, 2
    li r4, 0x7
    li r7, 0x0
    bl fn_800846FC
    lwz r4, lbl_8087EFA8
    li r0, 0x0
    stw r3, lbl_8087F3A0
    cmpwi r4, 0x0
    stw r0, lbl_8087F38C
    stw r0, lbl_8087F39C
    stw r0, lbl_8087F3AC
    stw r0, lbl_8087F3A4
    beq lbl_fn_80234A8C_00000328
    addi r31, r31, lbl_80742FB8@l
    lwz r3, 0x4c(r4)
    addi r4, r31, 0x1
    bl fn_8008937C
    lfs f1, lbl_80883118
    mr r30, r3
    lfs f2, lbl_8088311C
    addi r4, r31, 0x8
    lfs f3, lbl_80883120
    la r5, lbl_8087DC04
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80883120
    mr r3, r30
    lfs f2, lbl_80883124
    addi r4, r31, 0x11
    fmr f3, f1
    la r5, lbl_8087DC08
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
lbl_fn_80234A8C_00000328:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80234C24(void)
{
    nofralloc
    lfs f0, lbl_8088311C
    li r0, 0x0
    stfs f0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    stw r0, 0xc(r3)
    stw r0, 0x10(r3)
    stw r0, 0x14(r3)
    stw r0, 0x18(r3)
    stfs f0, 0x38(r3)
    stw r0, 0x6c(r3)
    blr
}

asm void fn_80234C54(void)
{
    nofralloc
    lfs f0, lbl_8088311C
    li r0, 0x0
    stfs f0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    stw r0, 0xc(r3)
    stfs f0, 0x40(r3)
    stfs f0, 0x44(r3)
    stfs f0, 0x48(r3)
    stfs f0, 0x4c(r3)
    stw r0, 0x58(r3)
    blr
}

asm void fn_80234C84(void)
{
    nofralloc
    lwz r0, lbl_8087F3AC
    lwz r4, lbl_8087F378
    add r0, r0, r3
    cmpw r0, r4
    blt lbl_fn_80234C84_000003BC
    li r0, 0x0
    stw r0, lbl_8087F3AC
lbl_fn_80234C84_000003BC:
    lwz r0, lbl_8087F3B0
    add r6, r0, r3
    cmpw r6, r4
    blt lbl_fn_80234C84_000003D4
    li r3, 0x0
    blr
lbl_fn_80234C84_000003D4:
    lwz r0, lbl_8087F3AC
    lwz r5, lbl_8087F3A8
    mulli r4, r0, 0x14
    add r0, r0, r3
    stw r0, lbl_8087F3AC
    stw r6, lbl_8087F3B0
    add r3, r5, r4
    blr
}

asm void fn_80234CD8(void)
{
    nofralloc
    stwu r1, -0x1e0(r1)
    mflr r0
    stw r0, 0x1e4(r1)
    addi r11, r1, 0x1c0
    stfd f31, 0x1d0(r1)
    psq_st f31, 0x1d8(r1), 0, 0
    stfd f30, 0x1c0(r1)
    psq_st f30, 0x1c8(r1), 0, 0
    bl _savegpr_21
    lwz r0, lbl_8087F38C
    cmpwi r0, 0x0
    bne lbl_fn_80234CD8_00000430
    lwz r0, lbl_8087F39C
    cmpwi r0, 0x0
    beq lbl_fn_80234CD8_0000105C
lbl_fn_80234CD8_00000430:
    lwz r5, lbl_8087F39C
    cmpwi r5, 0x0
    beq lbl_fn_80234CD8_00000730
    lwz r3, lbl_8087F37C
    li r6, 0x400
    lwz r4, lbl_8087F398
    lfs f1, lbl_8087F394
    lfs f2, lbl_8087F390
    bl fn_80235AB0
    lwz r3, lbl_8087EEE0
    bl fn_80071E04
    lwz r3, lbl_8087EFB4
    li r28, 0x0
    lwz r0, 0x954(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80234CD8_00000498
    addis r4, r3, 0x1
    li r3, 0x1000
    lwz r4, -0x76a4(r4)
    subi r0, r4, 0x1000
    orc r3, r4, r3
    srwi r0, r0, 1
    subf r0, r0, r3
    srwi. r0, r0, 31
    bne lbl_fn_80234CD8_00000498
    li r28, 0x1
lbl_fn_80234CD8_00000498:
    lwz r3, lbl_8087EFB4
    li r24, 0x0
    addi r25, r1, 0x44
    li r30, 0x3ff
    stw r24, 0x954(r3)
    li r23, 0xffc
lbl_fn_80234CD8_000004B0:
    lwz r3, lbl_8087F37C
    lwzx r27, r3, r23
    b lbl_fn_80234CD8_00000714
lbl_fn_80234CD8_000004BC:
    lwz r29, 0xc(r27)
    cmpwi r29, 0x0
    beq lbl_fn_80234CD8_00000710
    lfs f1, 0x50(r27)
    mr r3, r29
    lfs f2, 0x54(r27)
    bl fn_80094F14
    psq_l f2, 0x18(r27), 0, 0
    addi r3, r1, 0x20
    psq_l f3, 0x20(r27), 0, 0
    psq_l f4, 0x28(r27), 0, 0
    psq_l f5, 0x30(r27), 0, 0
    psq_l f6, 0x38(r27), 0, 0
    psq_l f1, 0x10(r27), 0, 0
    psq_st f1, 0x8(r29), 0, 0
    psq_st f2, 0x10(r29), 0, 0
    psq_st f3, 0x18(r29), 0, 0
    psq_st f4, 0x20(r29), 0, 0
    psq_st f5, 0x28(r29), 0, 0
    psq_st f6, 0x30(r29), 0, 0
    lfs f8, 0x38(r27)
    lfs f7, 0x28(r27)
    lfs f0, 0x18(r27)
    stfs f0, 0x20(r1)
    stfs f7, 0x24(r1)
    stfs f8, 0x28(r1)
    bl fn_805F9940
    lfs f8, 0x34(r27)
    fmr f30, f1
    lfs f7, 0x24(r27)
    addi r3, r1, 0x2c
    lfs f0, 0x14(r27)
    stfs f0, 0x2c(r1)
    stfs f7, 0x30(r1)
    stfs f8, 0x34(r1)
    bl fn_805F9940
    lfs f8, 0x30(r27)
    fmr f31, f1
    lfs f7, 0x20(r27)
    addi r3, r1, 0x38
    lfs f0, 0x10(r27)
    stfs f0, 0x38(r1)
    stfs f7, 0x3c(r1)
    stfs f8, 0x40(r1)
    bl fn_805F9940
    frsp f7, f31
    stfs f1, 0x14(r1)
    frsp f0, f30
    stfs f31, 0x18(r1)
    fcmpo cr0, f7, f0
    stfs f30, 0x1c(r1)
    ble lbl_fn_80234CD8_00000590
    b lbl_fn_80234CD8_00000594
lbl_fn_80234CD8_00000590:
    fmr f7, f0
lbl_fn_80234CD8_00000594:
    lfs f8, 0x14(r1)
    fcmpo cr0, f8, f7
    ble lbl_fn_80234CD8_000005A4
    b lbl_fn_80234CD8_000005BC
lbl_fn_80234CD8_000005A4:
    lfs f8, 0x18(r1)
    lfs f0, 0x1c(r1)
    fcmpo cr0, f8, f0
    ble lbl_fn_80234CD8_000005B8
    b lbl_fn_80234CD8_000005BC
lbl_fn_80234CD8_000005B8:
    fmr f8, f0
lbl_fn_80234CD8_000005BC:
    stfs f8, 0x54(r29)
    mr r3, r29
    addi r5, r1, 0x44
    li r4, 0x0
    stw r24, 0x44(r1)
    bl fn_800902C0
    cmpwi r25, 0x0
    beq lbl_fn_80234CD8_0000060C
    lwz r3, 0x44(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80234CD8_0000060C
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_80234CD8_00000608
    addi r3, r25, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80234CD8_00000608:
    stw r24, 0x44(r1)
lbl_fn_80234CD8_0000060C:
    lfs f0, 0x40(r27)
    stfs f0, 0x40(r29)
    lfs f0, 0x44(r27)
    stfs f0, 0x44(r29)
    lfs f0, 0x48(r27)
    stfs f0, 0x48(r29)
    lfs f0, 0x4c(r27)
    stfs f0, 0x4c(r29)
    lwz r8, 0x8(r27)
    rlwinm r0, r8, 0, 19, 23
    cmplwi r0, 0x100
    beq lbl_fn_80234CD8_00000660
    cmplwi r0, 0x200
    beq lbl_fn_80234CD8_00000668
    cmplwi r0, 0x800
    beq lbl_fn_80234CD8_00000670
    cmplwi r0, 0x400
    beq lbl_fn_80234CD8_00000678
    cmplwi r0, 0x1000
    beq lbl_fn_80234CD8_00000680
    b lbl_fn_80234CD8_00000688
lbl_fn_80234CD8_00000660:
    li r4, 0xd
    b lbl_fn_80234CD8_0000068C
lbl_fn_80234CD8_00000668:
    li r4, 0x9
    b lbl_fn_80234CD8_0000068C
lbl_fn_80234CD8_00000670:
    li r4, 0xa
    b lbl_fn_80234CD8_0000068C
lbl_fn_80234CD8_00000678:
    li r4, 0xb
    b lbl_fn_80234CD8_0000068C
lbl_fn_80234CD8_00000680:
    li r4, 0xc
    b lbl_fn_80234CD8_0000068C
lbl_fn_80234CD8_00000688:
    li r4, 0x3
lbl_fn_80234CD8_0000068C:
    extrwi r0, r8, 1, 27
    mr r3, r29
    extrwi r5, r8, 1, 29
    extrwi r7, r8, 1, 24
    xori r6, r0, 0x1
    extrwi r8, r8, 1, 28
    bl fn_80094D88
    lwz r3, lbl_8087EFB4
    lwz r0, 0x2f8(r3)
    cmpwi r0, 0x4
    bne lbl_fn_80234CD8_000006C8
    lwz r0, 0x4(r29)
    ori r0, r0, 0x1400
    stw r0, 0x4(r29)
    b lbl_fn_80234CD8_000006D8
lbl_fn_80234CD8_000006C8:
    lwz r0, 0x4(r29)
    rlwinm r0, r0, 0, 22, 20
    rlwinm r0, r0, 0, 20, 18
    stw r0, 0x4(r29)
lbl_fn_80234CD8_000006D8:
    lwz r0, 0x58(r27)
    mr r3, r29
    stw r0, 0x1dc(r29)
    lwz r12, 0x0(r29)
    lwz r4, lbl_8087EFB4
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r29)
    mr r3, r29
    lwz r4, lbl_8087EFB4
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
lbl_fn_80234CD8_00000710:
    lwz r27, 0x4(r27)
lbl_fn_80234CD8_00000714:
    cmpwi r27, 0x0
    bne lbl_fn_80234CD8_000004BC
    subic. r30, r30, 0x1
    subi r23, r23, 0x4
    bge lbl_fn_80234CD8_000004B0
    lwz r3, lbl_8087EFB4
    stw r28, 0x954(r3)
lbl_fn_80234CD8_00000730:
    lwz r0, lbl_8087F38C
    cmpwi r0, 0x0
    beq lbl_fn_80234CD8_0000105C
    lwz r3, 0x10(r1)
    li r7, 0x4
    li r0, 0x5
    li r5, 0x2
    clrlwi r6, r3, 1
    lwz r3, lbl_8087EEE0
    oris r6, r6, 0x7000
    addi r4, r1, 0x10
    rlwinm r6, r6, 0, 12, 3
    oris r6, r6, 0x8
    rlwimi r6, r7, 16, 13, 15
    rlwimi r6, r0, 13, 16, 18
    ori r0, r6, 0x1000
    rlwinm r0, r0, 0, 21, 19
    ori r0, r0, 0x400
    rlwimi r0, r5, 7, 22, 24
    ori r0, r0, 0x70
    stw r0, 0x10(r1)
    bl fn_80076A28
    lwz r3, lbl_8087EEE0
    li r4, 0x6
    li r5, 0x0
    bl fn_80076760
    lwz r22, lbl_8087EEE0
    li r4, 0x4
    li r5, 0x4
    mr r3, r22
    bl fn_80076760
    mr r3, r22
    li r4, 0x5
    li r5, 0x5
    bl fn_80076760
    li r3, 0x1
    bl fn_80615D20
    li r3, 0x1
    bl fn_80613BB0
    li r3, 0x1
    bl fn_806179E0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x4
    bl fn_80617880
    li r3, 0x0
    li r4, 0xf
    li r5, 0x8
    li r6, 0xa
    li r7, 0xf
    bl fn_806173E0
    li r3, 0x0
    li r4, 0x7
    li r5, 0x4
    li r6, 0x5
    li r7, 0x7
    bl fn_80617420
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_80617460
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_806174C0
    li r3, 0x0
    li r4, 0xc
    bl fn_80617650
    li r3, 0x0
    li r4, 0x1c
    bl fn_806176A0
    li r3, 0x0
    bl fn_80617220
    li r3, 0x1
    li r4, 0x1
    li r5, 0x1
    li r6, 0x4
    bl fn_80617880
    li r3, 0x1
    li r4, 0xf
    li r5, 0x0
    li r6, 0xc
    li r7, 0xf
    bl fn_806173E0
    li r3, 0x1
    li r4, 0x7
    li r5, 0x0
    li r6, 0x4
    li r7, 0x7
    bl fn_80617420
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_80617460
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_806174C0
    li r3, 0x1
    li r4, 0xc
    bl fn_80617650
    li r3, 0x1
    li r4, 0x1c
    bl fn_806176A0
    li r3, 0x1
    bl fn_80617220
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    bl fn_80617730
    li r3, 0x1
    li r4, 0x0
    li r5, 0x1
    bl fn_806176F0
    li r0, 0x0
    stb r0, 0x8(r1)
    addi r4, r1, 0xc
    li r3, 0x4
    stb r0, 0x9(r1)
    stb r0, 0xa(r1)
    stb r0, 0xb(r1)
    lwz r0, 0x8(r1)
    stw r0, 0xc(r1)
    bl fn_80615B60
    li r3, 0x4
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    li r9, 0x2
    bl fn_80615D50
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    li r3, 0x1
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    lwz r5, lbl_8087EFB4
    addi r23, r1, 0x158
    mr r3, r23
    li r4, 0x0
    psq_l f1, 0x15c(r5), 0, 0
    psq_l f2, 0x164(r5), 0, 0
    psq_l f3, 0x16c(r5), 0, 0
    psq_l f4, 0x174(r5), 0, 0
    psq_l f5, 0x17c(r5), 0, 0
    psq_l f6, 0x184(r5), 0, 0
    psq_st f6, 0x28(r23), 0, 0
    psq_st f1, 0x0(r23), 0, 0
    psq_st f2, 0x8(r23), 0, 0
    psq_st f3, 0x10(r23), 0, 0
    psq_st f4, 0x18(r23), 0, 0
    psq_st f5, 0x20(r23), 0, 0
    bl fn_80618350
    li r3, 0x0
    bl fn_80618400
    bl fn_806134E0
    li r3, 0x9
    li r4, 0x1
    bl fn_80612E80
    li r3, 0xd
    li r4, 0x1
    bl fn_80612E80
    li r3, 0x0
    li r4, 0x9
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl fn_80613520
    li r3, 0x0
    li r4, 0xd
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl fn_80613520
    lwz r3, lbl_8087EFB4
    li r4, 0x0
    lwz r3, 0x2fc(r3)
    bl fn_800C2448
    mr r5, r23
    addi r4, r1, 0x118
    bl fn_80079994
    addi r3, r1, 0x118
    li r4, 0x1
    bl fn_80615AE0
    addi r24, r1, 0xb8
    psq_l f1, 0x0(r23), 0, 0
    psq_l f2, 0x8(r23), 0, 0
    mr r3, r24
    psq_l f3, 0x10(r23), 0, 0
    mr r4, r24
    psq_l f4, 0x18(r23), 0, 0
    psq_l f5, 0x20(r23), 0, 0
    psq_l f6, 0x28(r23), 0, 0
    psq_st f1, 0x0(r24), 0, 0
    psq_st f2, 0x8(r24), 0, 0
    psq_st f3, 0x10(r24), 0, 0
    psq_st f4, 0x18(r24), 0, 0
    psq_st f5, 0x20(r24), 0, 0
    psq_st f6, 0x28(r24), 0, 0
    bl fn_805F8CA0
    addi r23, r1, 0xe8
    psq_l f1, 0x0(r24), 0, 0
    psq_l f2, 0x8(r24), 0, 0
    mr r3, r23
    psq_l f3, 0x10(r24), 0, 0
    mr r4, r23
    psq_l f4, 0x18(r24), 0, 0
    psq_l f5, 0x20(r24), 0, 0
    psq_l f6, 0x28(r24), 0, 0
    psq_st f1, 0x0(r23), 0, 0
    psq_st f2, 0x8(r23), 0, 0
    psq_st f3, 0x10(r23), 0, 0
    psq_st f4, 0x18(r23), 0, 0
    psq_st f5, 0x20(r23), 0, 0
    psq_st f6, 0x28(r23), 0, 0
    bl fn_805F8C50
    mr r3, r23
    li r4, 0x0
    bl fn_806183A0
    lwz r3, lbl_8087F37C
    li r6, 0x400
    lwz r4, lbl_8087F388
    lwz r5, lbl_8087F38C
    lfs f1, lbl_8087F384
    lfs f2, lbl_8087F380
    bl fn_80235968
    addi r28, r1, 0x88
    addi r29, r1, 0x58
    li r26, 0x0
    li r25, 0x0
    li r24, 0x3ff
    li r23, 0xffc
    li r30, 0x1
    li r31, 0x0
lbl_fn_80234CD8_00000B3C:
    lwz r3, lbl_8087F37C
    lwzx r27, r3, r23
    b lbl_fn_80234CD8_00001038
lbl_fn_80234CD8_00000B48:
    lwz r4, 0x8(r27)
    rlwinm r3, r4, 0, 13, 13
    subis r0, r3, 0x4
    cmplwi r0, 0x0
    beq lbl_fn_80234CD8_00000B6C
    rlwinm r3, r4, 0, 12, 12
    subis r0, r3, 0x8
    cmplwi r0, 0x0
    bne lbl_fn_80234CD8_00000B98
lbl_fn_80234CD8_00000B6C:
    lwz r4, lbl_8087F3A4
    lwz r0, lbl_8087DC00
    cmpw r4, r0
    bge lbl_fn_80234CD8_00001034
    lwz r3, lbl_8087F3A0
    slwi r0, r4, 2
    stwx r27, r3, r0
    lwz r3, lbl_8087F3A4
    addi r0, r3, 0x1
    stw r0, lbl_8087F3A4
    b lbl_fn_80234CD8_00001034
lbl_fn_80234CD8_00000B98:
    rlwinm r0, r4, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_80234CD8_00000D88
    cmpwi r26, 0x0
    beq lbl_fn_80234CD8_00000C1C
    li r3, 0x4
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    li r9, 0x2
    bl fn_80615D50
    bl fn_806134E0
    li r3, 0x9
    li r4, 0x1
    bl fn_80612E80
    li r3, 0xd
    li r4, 0x1
    bl fn_80612E80
    li r3, 0x0
    li r4, 0x9
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl fn_80613520
    li r3, 0x0
    li r4, 0xd
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl fn_80613520
    li r26, 0x0
lbl_fn_80234CD8_00000C1C:
    lwz r0, 0x8(r27)
    rlwinm r3, r0, 0, 10, 10
    subis r0, r3, 0x20
    cmplwi r0, 0x0
    bne lbl_fn_80234CD8_00000C50
    cmpwi r25, 0x0
    bne lbl_fn_80234CD8_00000C6C
    li r3, 0x2
    bl fn_806179E0
    li r3, 0x2
    bl fn_80613BB0
    li r25, 0x1
    b lbl_fn_80234CD8_00000C6C
lbl_fn_80234CD8_00000C50:
    cmpwi r25, 0x0
    beq lbl_fn_80234CD8_00000C6C
    li r3, 0x1
    bl fn_806179E0
    li r3, 0x1
    bl fn_80613BB0
    li r25, 0x0
lbl_fn_80234CD8_00000C6C:
    lwz r22, 0x8(r27)
    li r4, 0x8
    lwz r21, lbl_8087EEE0
    extrwi r0, r22, 1, 24
    mr r3, r21
    xori r5, r0, 0x1
    bl fn_80076760
    mr r3, r21
    li r4, 0x9
    li r5, 0x2
    bl fn_80076760
    extrwi r0, r22, 1, 28
    mr r3, r21
    xori r5, r0, 0x1
    li r4, 0xa
    bl fn_80076760
    lwz r0, 0x8(r27)
    rlwinm r0, r0, 0, 19, 23
    cmplwi r0, 0x100
    beq lbl_fn_80234CD8_00000CE0
    cmplwi r0, 0x200
    beq lbl_fn_80234CD8_00000CE8
    cmplwi r0, 0x800
    beq lbl_fn_80234CD8_00000CF0
    cmplwi r0, 0x400
    beq lbl_fn_80234CD8_00000CF8
    cmplwi r0, 0x1000
    beq lbl_fn_80234CD8_00000D00
    b lbl_fn_80234CD8_00000D08
lbl_fn_80234CD8_00000CE0:
    li r4, 0x1
    b lbl_fn_80234CD8_00000D0C
lbl_fn_80234CD8_00000CE8:
    li r4, 0x2
    b lbl_fn_80234CD8_00000D0C
lbl_fn_80234CD8_00000CF0:
    li r4, 0x3
    b lbl_fn_80234CD8_00000D0C
lbl_fn_80234CD8_00000CF8:
    li r4, 0x4
    b lbl_fn_80234CD8_00000D0C
lbl_fn_80234CD8_00000D00:
    li r4, 0x5
    b lbl_fn_80234CD8_00000D0C
lbl_fn_80234CD8_00000D08:
    li r4, 0x0
lbl_fn_80234CD8_00000D0C:
    lwz r3, lbl_8087EEE0
    bl fn_80072914
    lwz r3, lbl_8087EEE0
    li r4, 0x0
    lwz r5, 0xc(r27)
    bl fn_800763C0
    lwz r0, 0x8(r27)
    rlwinm r3, r0, 0, 10, 10
    subis r0, r3, 0x20
    cmplwi r0, 0x0
    bne lbl_fn_80234CD8_00000D50
    lwz r5, 0x10(r27)
    cmpwi r5, 0x0
    beq lbl_fn_80234CD8_00000D50
    lwz r3, lbl_8087EEE0
    li r4, 0x1
    bl fn_800763C0
lbl_fn_80234CD8_00000D50:
    lwz r3, lbl_8087EFB4
    lwz r0, 0x2f8(r3)
    cmpwi r0, 0x4
    bne lbl_fn_80234CD8_00000D6C
    addi r3, r27, 0x3c
    li r4, 0x0
    bl fn_80618350
lbl_fn_80234CD8_00000D6C:
    lwz r3, 0x18(r27)
    addi r5, r27, 0x1c
    lwz r4, 0x14(r27)
    li r6, 0x0
    li r7, 0x0
    bl fn_80236938
    b lbl_fn_80234CD8_00001008
lbl_fn_80234CD8_00000D88:
    cmpwi r26, 0x0
    bne lbl_fn_80234CD8_00000E44
    li r3, 0x0
    li r4, 0x1
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x2
    li r9, 0x2
    bl fn_80615D50
    li r3, 0x2
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    li r9, 0x2
    bl fn_80615D50
    bl fn_806134E0
    li r3, 0x9
    li r4, 0x1
    bl fn_80612E80
    li r3, 0xa
    li r4, 0x1
    bl fn_80612E80
    li r3, 0xd
    li r4, 0x1
    bl fn_80612E80
    li r3, 0x0
    li r4, 0x9
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl fn_80613520
    li r3, 0x0
    li r4, 0xa
    li r5, 0x0
    li r6, 0x4
    li r7, 0x0
    bl fn_80613520
    li r3, 0x0
    li r4, 0xd
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl fn_80613520
    li r26, 0x1
lbl_fn_80234CD8_00000E44:
    lwz r22, 0x8(r27)
    li r4, 0x8
    lwz r21, lbl_8087EEE0
    extrwi r0, r22, 1, 24
    mr r3, r21
    xori r5, r0, 0x1
    bl fn_80076760
    mr r3, r21
    li r4, 0x9
    li r5, 0x2
    bl fn_80076760
    extrwi r0, r22, 1, 28
    mr r3, r21
    xori r5, r0, 0x1
    li r4, 0xa
    bl fn_80076760
    lwz r0, 0x8(r27)
    rlwinm r0, r0, 0, 19, 23
    cmplwi r0, 0x100
    beq lbl_fn_80234CD8_00000EB8
    cmplwi r0, 0x200
    beq lbl_fn_80234CD8_00000EC0
    cmplwi r0, 0x800
    beq lbl_fn_80234CD8_00000EC8
    cmplwi r0, 0x400
    beq lbl_fn_80234CD8_00000ED0
    cmplwi r0, 0x1000
    beq lbl_fn_80234CD8_00000ED8
    b lbl_fn_80234CD8_00000EE0
lbl_fn_80234CD8_00000EB8:
    li r4, 0x1
    b lbl_fn_80234CD8_00000EE4
lbl_fn_80234CD8_00000EC0:
    li r4, 0x2
    b lbl_fn_80234CD8_00000EE4
lbl_fn_80234CD8_00000EC8:
    li r4, 0x3
    b lbl_fn_80234CD8_00000EE4
lbl_fn_80234CD8_00000ED0:
    li r4, 0x4
    b lbl_fn_80234CD8_00000EE4
lbl_fn_80234CD8_00000ED8:
    li r4, 0x5
    b lbl_fn_80234CD8_00000EE4
lbl_fn_80234CD8_00000EE0:
    li r4, 0x0
lbl_fn_80234CD8_00000EE4:
    lwz r3, lbl_8087EEE0
    bl fn_80072914
    lwz r3, lbl_8087EEE0
    li r4, 0x0
    lwz r5, 0xc(r27)
    bl fn_800763C0
    lwz r0, 0x8(r27)
    rlwinm r3, r0, 0, 10, 10
    subis r0, r3, 0x20
    cmplwi r0, 0x0
    bne lbl_fn_80234CD8_00000F28
    lwz r5, 0x10(r27)
    cmpwi r5, 0x0
    beq lbl_fn_80234CD8_00000F28
    lwz r3, lbl_8087EEE0
    li r4, 0x1
    bl fn_800763C0
lbl_fn_80234CD8_00000F28:
    lwz r3, lbl_8087EFB4
    lwz r0, 0x2f8(r3)
    cmpwi r0, 0x4
    bne lbl_fn_80234CD8_00000FC8
    addi r3, r27, 0x3c
    li r4, 0x0
    bl fn_80618350
    psq_l f1, 0x3c(r27), 0, 0
    mr r3, r28
    psq_l f2, 0x44(r27), 0, 0
    mr r4, r28
    psq_l f3, 0x4c(r27), 0, 0
    psq_l f4, 0x54(r27), 0, 0
    psq_l f5, 0x5c(r27), 0, 0
    psq_l f6, 0x64(r27), 0, 0
    psq_st f6, 0x28(r28), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    psq_st f2, 0x8(r28), 0, 0
    psq_st f3, 0x10(r28), 0, 0
    psq_st f4, 0x18(r28), 0, 0
    psq_st f5, 0x20(r28), 0, 0
    bl fn_805F8CA0
    psq_l f1, 0x0(r28), 0, 0
    mr r3, r29
    psq_l f2, 0x8(r28), 0, 0
    mr r4, r29
    psq_l f3, 0x10(r28), 0, 0
    psq_l f4, 0x18(r28), 0, 0
    psq_l f5, 0x20(r28), 0, 0
    psq_l f6, 0x28(r28), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f6, 0x28(r29), 0, 0
    bl fn_805F8C50
    mr r3, r29
    li r4, 0x0
    bl fn_806183A0
lbl_fn_80234CD8_00000FC8:
    cmpwi r31, 0x0
    lwz r3, 0x18(r27)
    lwz r4, 0x14(r27)
    addi r5, r27, 0x1c
    li r0, 0x0
    bne lbl_fn_80234CD8_00000FE8
    cmpwi r30, 0x0
    beq lbl_fn_80234CD8_00000FEC
lbl_fn_80234CD8_00000FE8:
    li r0, 0x1
lbl_fn_80234CD8_00000FEC:
    cmpwi r0, 0x0
    beq lbl_fn_80234CD8_00000FFC
    addi r6, r27, 0x2c
    b lbl_fn_80234CD8_00001000
lbl_fn_80234CD8_00000FFC:
    li r6, 0x0
lbl_fn_80234CD8_00001000:
    li r7, 0x1
    bl fn_80236938
lbl_fn_80234CD8_00001008:
    lwz r0, 0x8(r27)
    rlwinm r0, r0, 0, 27, 27
    cmplwi r0, 0x10
    bne lbl_fn_80234CD8_0000102C
    lwz r4, 0x6c(r27)
    lwz r3, lbl_8087EFB4
    addi r4, r4, 0x3c
    bl fn_800C06B0
    b lbl_fn_80234CD8_00001034
lbl_fn_80234CD8_0000102C:
    lwz r3, lbl_8087EFB4
    bl fn_800C08B0
lbl_fn_80234CD8_00001034:
    lwz r27, 0x4(r27)
lbl_fn_80234CD8_00001038:
    cmpwi r27, 0x0
    bne lbl_fn_80234CD8_00000B48
    subic. r24, r24, 0x1
    subi r23, r23, 0x4
    bge lbl_fn_80234CD8_00000B3C
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    bl fn_806176F0
lbl_fn_80234CD8_0000105C:
    addi r11, r1, 0x1c0
    psq_l f31, 0x1d8(r1), 0, 0
    lfd f31, 0x1d0(r1)
    psq_l f30, 0x1c8(r1), 0, 0
    lfd f30, 0x1c0(r1)
    bl _restgpr_21
    lwz r0, 0x1e4(r1)
    mtlr r0
    addi r1, r1, 0x1e0
    blr
}

asm void fn_80235968(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    fmr f31, f2
    stfd f30, 0x30(r1)
    psq_st f30, 0x38(r1), 0, 0
    fmr f30, f1
    stw r31, 0x2c(r1)
    mr r31, r6
    stw r30, 0x28(r1)
    mr r30, r5
    slwi r5, r6, 2
    stw r29, 0x24(r1)
    mr r29, r4
    li r4, 0x0
    stw r28, 0x20(r1)
    mr r28, r3
    bl memset
    fsubs f5, f30, f31
    lfs f0, lbl_8088311C
    fcmpu cr0, f0, f5
    bne lbl_fn_80235968_000010E8
    lfs f5, lbl_80883120
lbl_fn_80235968_000010E8:
    lis r3, lbl_80742F98@ha
    lfs f3, lbl_8088311C
    lfs f2, lbl_80883120
    lis r4, 0x4330
    lfd f1, lbl_80742F98@l(r3)
    mtctr r30
    cmplwi r30, 0x0
    ble lbl_fn_80235968_0000119C
lbl_fn_80235968_00001108:
    lwz r3, 0x8(r29)
    rlwinm. r0, r3, 0, 15, 15
    beq lbl_fn_80235968_0000111C
    subi r0, r31, 0x1
    b lbl_fn_80235968_00001184
lbl_fn_80235968_0000111C:
    rlwinm. r0, r3, 0, 14, 14
    beq lbl_fn_80235968_0000112C
    li r0, 0x0
    b lbl_fn_80235968_00001184
lbl_fn_80235968_0000112C:
    lfs f0, 0x0(r29)
    fsubs f0, f0, f31
    fdivs f0, f0, f5
    fcmpo cr0, f0, f3
    bge lbl_fn_80235968_00001148
    fmr f0, f3
    b lbl_fn_80235968_00001154
lbl_fn_80235968_00001148:
    fcmpo cr0, f0, f2
    ble lbl_fn_80235968_00001154
    fmr f0, f2
lbl_fn_80235968_00001154:
    subi r0, r31, 0x3
    stw r4, 0x8(r1)
    xoris r0, r0, 0x8000
    fsubs f4, f2, f0
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f1
    fmuls f0, f4, f0
    fctiwz f0, f0
    stfd f0, 0x10(r1)
    lwz r3, 0x14(r1)
    addi r0, r3, 0x1
lbl_fn_80235968_00001184:
    slwi r3, r0, 2
    lwzx r0, r28, r3
    stw r0, 0x4(r29)
    stwx r29, r28, r3
    addi r29, r29, 0x70
    bdnz lbl_fn_80235968_00001108
lbl_fn_80235968_0000119C:
    lwz r0, 0x54(r1)
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    psq_l f30, 0x38(r1), 0, 0
    lfd f30, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80235AB0(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    fmr f31, f2
    stfd f30, 0x30(r1)
    psq_st f30, 0x38(r1), 0, 0
    fmr f30, f1
    stw r31, 0x2c(r1)
    mr r31, r6
    stw r30, 0x28(r1)
    mr r30, r5
    slwi r5, r6, 2
    stw r29, 0x24(r1)
    mr r29, r4
    li r4, 0x0
    stw r28, 0x20(r1)
    mr r28, r3
    bl memset
    fsubs f5, f30, f31
    lfs f0, lbl_8088311C
    fcmpu cr0, f0, f5
    bne lbl_fn_80235AB0_00001230
    lfs f5, lbl_80883120
lbl_fn_80235AB0_00001230:
    lis r3, lbl_80742F98@ha
    lfs f3, lbl_8088311C
    lfs f2, lbl_80883120
    lis r4, 0x4330
    lfd f1, lbl_80742F98@l(r3)
    mtctr r30
    cmplwi r30, 0x0
    ble lbl_fn_80235AB0_000012E4
lbl_fn_80235AB0_00001250:
    lwz r3, 0x8(r29)
    rlwinm. r0, r3, 0, 15, 15
    beq lbl_fn_80235AB0_00001264
    subi r0, r31, 0x1
    b lbl_fn_80235AB0_000012CC
lbl_fn_80235AB0_00001264:
    rlwinm. r0, r3, 0, 14, 14
    beq lbl_fn_80235AB0_00001274
    li r0, 0x0
    b lbl_fn_80235AB0_000012CC
lbl_fn_80235AB0_00001274:
    lfs f0, 0x0(r29)
    fsubs f0, f0, f31
    fdivs f0, f0, f5
    fcmpo cr0, f0, f3
    bge lbl_fn_80235AB0_00001290
    fmr f0, f3
    b lbl_fn_80235AB0_0000129C
lbl_fn_80235AB0_00001290:
    fcmpo cr0, f0, f2
    ble lbl_fn_80235AB0_0000129C
    fmr f0, f2
lbl_fn_80235AB0_0000129C:
    subi r0, r31, 0x3
    stw r4, 0x8(r1)
    xoris r0, r0, 0x8000
    fsubs f4, f2, f0
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f1
    fmuls f0, f4, f0
    fctiwz f0, f0
    stfd f0, 0x10(r1)
    lwz r3, 0x14(r1)
    addi r0, r3, 0x1
lbl_fn_80235AB0_000012CC:
    slwi r3, r0, 2
    lwzx r0, r28, r3
    stw r0, 0x4(r29)
    stwx r29, r28, r3
    addi r29, r29, 0x5c
    bdnz lbl_fn_80235AB0_00001250
lbl_fn_80235AB0_000012E4:
    lwz r0, 0x54(r1)
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    psq_l f30, 0x38(r1), 0, 0
    lfd f30, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80235BF8(void)
{
    nofralloc
    stwu r1, -0x1b0(r1)
    mflr r0
    stw r0, 0x1b4(r1)
    addi r11, r1, 0x130
    stfd f31, 0x1a0(r1)
    psq_st f31, 0x1a8(r1), 0, 0
    stfd f30, 0x190(r1)
    psq_st f30, 0x198(r1), 0, 0
    stfd f29, 0x180(r1)
    psq_st f29, 0x188(r1), 0, 0
    stfd f28, 0x170(r1)
    psq_st f28, 0x178(r1), 0, 0
    stfd f27, 0x160(r1)
    psq_st f27, 0x168(r1), 0, 0
    stfd f26, 0x150(r1)
    psq_st f26, 0x158(r1), 0, 0
    stfd f25, 0x140(r1)
    psq_st f25, 0x148(r1), 0, 0
    stfd f24, 0x130(r1)
    psq_st f24, 0x138(r1), 0, 0
    bl _savegpr_14
    lwz r0, lbl_8087F3A4
    lis r3, 0x4330
    stw r3, 0xb8(r1)
    cmpwi r0, 0x0
    stw r3, 0xc0(r1)
    beq lbl_fn_80235BF8_00001F30
    lwz r3, lbl_8087EEE0
    li r4, 0x0
    bl fn_80072914
    lwz r3, lbl_8087EFB4
    li r4, 0x0
    bl fn_800C0508
    li r3, 0x1
    bl fn_80615D20
    li r3, 0x2
    bl fn_80613BB0
    li r3, 0x1
    bl fn_806179E0
    li r3, 0x1
    bl fn_80617200
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x4
    bl fn_80617880
    li r3, 0x0
    li r4, 0xf
    li r5, 0x8
    li r6, 0xc
    li r7, 0xf
    bl fn_806173E0
    li r3, 0x0
    li r4, 0x7
    li r5, 0x4
    li r6, 0x5
    li r7, 0x7
    bl fn_80617420
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_80617460
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_806174C0
    li r3, 0x0
    li r4, 0xc
    bl fn_80617650
    li r3, 0x0
    li r4, 0x1c
    bl fn_806176A0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x1
    li r6, 0x0
    li r7, 0x1
    bl fn_80617270
    li r3, 0x0
    li r4, 0x1
    li r5, 0x1
    bl fn_80617130
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_80617030
    li r3, 0x1
    li r4, 0x1
    li r5, 0x2
    li r6, 0x4
    bl fn_80617880
    li r3, 0x1
    li r4, 0xf
    li r5, 0x0
    li r6, 0xc
    li r7, 0xf
    bl fn_806173E0
    li r3, 0x1
    li r4, 0x7
    li r5, 0x0
    li r6, 0x4
    li r7, 0x7
    bl fn_80617420
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_80617460
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_806174C0
    li r3, 0x1
    li r4, 0xc
    bl fn_80617650
    li r3, 0x1
    li r4, 0x1c
    bl fn_806176A0
    li r3, 0x1
    bl fn_80617220
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    bl fn_80617730
    li r3, 0x1
    li r4, 0x0
    li r5, 0x1
    bl fn_806176F0
    li r0, 0x0
    stb r0, 0x14(r1)
    addi r4, r1, 0x24
    li r3, 0x4
    stb r0, 0x15(r1)
    stb r0, 0x16(r1)
    stb r0, 0x17(r1)
    lwz r0, 0x14(r1)
    stw r0, 0x24(r1)
    bl fn_80615B60
    li r3, 0x4
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    li r9, 0x2
    bl fn_80615D50
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    li r3, 0x1
    li r4, 0x1
    li r5, 0x5
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    lwz r3, lbl_8087EFB4
    li r4, 0x0
    addi r3, r3, 0x15c
    bl fn_80618350
    li r3, 0x0
    bl fn_80618400
    bl fn_806134E0
    li r3, 0x9
    li r4, 0x1
    bl fn_80612E80
    li r3, 0xd
    li r4, 0x1
    bl fn_80612E80
    li r3, 0xe
    li r4, 0x1
    bl fn_80612E80
    li r3, 0x0
    li r4, 0x9
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl fn_80613520
    li r3, 0x0
    li r4, 0xd
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl fn_80613520
    li r3, 0x0
    li r4, 0xe
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl fn_80613520
    lwz r5, lbl_8087EFB4
    li r4, 0x0
    lwz r3, lbl_8087EEE0
    addi r5, r5, 0x74c
    bl fn_800763C0
    lwz r4, lbl_8087EEE0
    lis r3, lbl_80742F98@ha
    lfd f2, lbl_80742F98@l(r3)
    lis r8, lbl_80742FA0@ha
    lwz r3, 0x3c(r4)
    li r15, 0x0
    lwz r0, 0x40(r4)
    li r14, 0x0
    xoris r3, r3, 0x8000
    stw r3, 0xbc(r1)
    xoris r0, r0, 0x8000
    lwzu r7, lbl_80742FA0@l(r8)
    stw r0, 0xc4(r1)
    lis r18, 0xcc01
    lfd f1, 0xb8(r1)
    lfd f0, 0xc0(r1)
    lwz r6, 0x4(r8)
    fsubs f26, f1, f2
    lwz r5, 0x8(r8)
    fsubs f25, f0, f2
    lwz r4, 0xc(r8)
    lwz r3, 0x10(r8)
    lwz r0, 0x14(r8)
    stw r7, 0xa0(r1)
    lfs f27, lbl_80883130
    stw r6, 0xa4(r1)
    lfs f28, lbl_80883134
    stw r5, 0xa8(r1)
    stw r4, 0xac(r1)
    stw r3, 0xb0(r1)
    stw r0, 0xb4(r1)
    b lbl_fn_80235BF8_000018D4
lbl_fn_80235BF8_000016E4:
    lwz r3, lbl_8087F3A0
    lwzx r16, r3, r14
    lwz r19, 0x8(r16)
    lwz r17, 0x14(r16)
    rlwinm r3, r19, 0, 13, 13
    subis r0, r3, 0x4
    cmplwi r0, 0x0
    bne lbl_fn_80235BF8_000018CC
    lwz r20, lbl_8087EEE0
    extrwi r0, r19, 1, 24
    xori r5, r0, 0x1
    li r4, 0x8
    mr r3, r20
    bl fn_80076760
    mr r3, r20
    li r4, 0x9
    li r5, 0x2
    bl fn_80076760
    extrwi r0, r19, 1, 28
    mr r3, r20
    xori r5, r0, 0x1
    li r4, 0xa
    bl fn_80076760
    lwz r3, lbl_8087EEE0
    li r4, 0x1
    lwz r5, 0xc(r16)
    bl fn_800763C0
    lwz r0, 0x8(r16)
    rlwinm r3, r0, 0, 10, 10
    subis r0, r3, 0x20
    cmplwi r0, 0x0
    bne lbl_fn_80235BF8_00001788
    lwz r5, 0x10(r16)
    cmpwi r5, 0x0
    beq lbl_fn_80235BF8_00001788
    lwz r3, lbl_8087EEE0
    li r4, 0x2
    bl fn_800763C0
    li r3, 0x2
    bl fn_806179E0
    b lbl_fn_80235BF8_00001790
lbl_fn_80235BF8_00001788:
    li r3, 0x1
    bl fn_806179E0
lbl_fn_80235BF8_00001790:
    lfs f0, 0x1c(r16)
    addi r4, r1, 0x20
    lfs f2, 0x20(r16)
    li r3, 0x4
    fmuls f3, f27, f0
    lfs f1, 0x24(r16)
    lfs f0, 0x28(r16)
    fmuls f2, f27, f2
    fmuls f1, f27, f1
    fmuls f0, f27, f0
    fctiwz f3, f3
    fctiwz f2, f2
    fctiwz f1, f1
    stfd f3, 0xc8(r1)
    fctiwz f0, f0
    stfd f2, 0xd0(r1)
    lwz r7, 0xcc(r1)
    stfd f1, 0xd8(r1)
    lwz r6, 0xd4(r1)
    stfd f0, 0xe0(r1)
    lwz r5, 0xdc(r1)
    lwz r0, 0xe4(r1)
    stb r7, 0x10(r1)
    stb r6, 0x11(r1)
    stb r5, 0x12(r1)
    stb r0, 0x13(r1)
    lwz r0, 0x10(r1)
    stw r0, 0x20(r1)
    bl fn_80615C40
    lfs f0, 0x1c(r16)
    addi r4, r1, 0xa0
    li r3, 0x1
    li r5, 0x1
    fmuls f0, f28, f0
    stfs f0, 0xa0(r1)
    lfs f0, 0x1c(r16)
    fmuls f0, f28, f0
    stfs f0, 0xb0(r1)
    bl fn_80616EF0
    lwz r3, lbl_8087EEE0
    bl fn_800761A8
    lwz r0, 0x18(r16)
    li r3, 0x98
    li r4, 0x0
    clrlwi r5, r0, 16
    bl fn_80614790
    li r19, 0x0
    b lbl_fn_80235BF8_000018C0
lbl_fn_80235BF8_00001850:
    lfs f2, 0x8(r17)
    addi r3, r1, 0x94
    lfs f1, 0x4(r17)
    addi r5, r1, 0x70
    lfs f0, 0x0(r17)
    stfs f0, 0x70(r1)
    lwz r4, lbl_8087EFB4
    stfs f1, 0x74(r1)
    stfs f2, 0x78(r1)
    bl fn_800BFAC8
    lfs f2, 0x8(r17)
    addi r19, r19, 0x1
    lfs f1, 0x4(r17)
    lfs f0, 0x0(r17)
    stfs f0, -0x8000(r18)
    stfs f1, -0x8000(r18)
    stfs f2, -0x8000(r18)
    lfs f0, 0x94(r1)
    lfs f1, 0x98(r1)
    fdivs f0, f0, f26
    stfs f0, -0x8000(r18)
    fdivs f0, f1, f25
    stfs f0, -0x8000(r18)
    lfs f1, 0x10(r17)
    lfs f0, 0xc(r17)
    addi r17, r17, 0x14
    stfs f0, -0x8000(r18)
    stfs f1, -0x8000(r18)
lbl_fn_80235BF8_000018C0:
    lwz r0, 0x18(r16)
    cmpw r19, r0
    blt lbl_fn_80235BF8_00001850
lbl_fn_80235BF8_000018CC:
    addi r14, r14, 0x4
    addi r15, r15, 0x1
lbl_fn_80235BF8_000018D4:
    lwz r0, lbl_8087F3A4
    cmpw r15, r0
    blt lbl_fn_80235BF8_000016E4
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    bl fn_806176F0
    li r3, 0x1
    bl fn_80615D20
    li r3, 0x8
    bl fn_80613BB0
    li r3, 0x8
    bl fn_806179E0
    li r3, 0x0
    bl fn_80617200
    li r3, 0x0
    li r4, 0x0
    li r5, 0x1
    li r6, 0x4
    bl fn_80617880
    li r3, 0x0
    li r4, 0xf
    li r5, 0xf
    li r6, 0xf
    li r7, 0xf
    bl fn_806173E0
    li r3, 0x0
    li r4, 0x7
    li r5, 0x4
    li r6, 0x5
    li r7, 0x7
    bl fn_80617420
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_80617460
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_806174C0
    li r3, 0x0
    li r4, 0x10
    bl fn_80617650
    li r3, 0x0
    bl fn_80617220
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    bl fn_80617730
    li r3, 0x0
    li r4, 0x0
    li r5, 0x1
    bl fn_806176F0
    li r14, 0x0
lbl_fn_80235BF8_000019E8:
    addi r3, r14, 0x1
    li r5, 0x0
    mr r4, r3
    li r6, 0xff
    bl fn_80617880
    addi r3, r14, 0x1
    li r4, 0xf
    li r5, 0x8
    li r6, 0xe
    li r7, 0x0
    bl fn_806173E0
    addi r3, r14, 0x1
    li r4, 0x7
    li r5, 0x7
    li r6, 0x7
    li r7, 0x0
    bl fn_80617420
    addi r3, r14, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_80617460
    addi r3, r14, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_806174C0
    addi r3, r14, 0x1
    li r4, 0x10
    bl fn_80617650
    addi r3, r14, 0x1
    bl fn_80617220
    addi r3, r14, 0x1
    addi r5, r14, 0x5
    li r4, 0x1
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    addi r14, r14, 0x1
    cmpwi r14, 0x7
    blt lbl_fn_80235BF8_000019E8
    lfs f2, lbl_8088311C
    addi r4, r1, 0x1c
    lfs f1, lbl_80883138
    li r3, 0x0
    lfs f0, lbl_80883130
    stfs f1, 0x60(r1)
    fmuls f1, f0, f1
    fmuls f0, f0, f2
    stfs f2, 0x64(r1)
    fctiwz f1, f1
    stfs f2, 0x68(r1)
    fctiwz f0, f0
    stfd f1, 0xe0(r1)
    stfd f0, 0xd8(r1)
    lwz r7, 0xe4(r1)
    stfd f0, 0xd0(r1)
    lwz r6, 0xdc(r1)
    stfd f0, 0xc8(r1)
    lwz r5, 0xd4(r1)
    lwz r0, 0xcc(r1)
    stb r7, 0xc(r1)
    stb r6, 0xd(r1)
    stb r5, 0xe(r1)
    stb r0, 0xf(r1)
    lwz r0, 0xc(r1)
    stfs f2, 0x6c(r1)
    stw r0, 0x1c(r1)
    bl fn_806175F0
    bl fn_806134E0
    li r3, 0x9
    li r4, 0x1
    bl fn_80612E80
    li r3, 0xd
    li r4, 0x1
    bl fn_80612E80
    li r14, 0x0
lbl_fn_80235BF8_00001B30:
    addi r3, r14, 0xe
    li r4, 0x1
    bl fn_80612E80
    addi r14, r14, 0x1
    cmpwi r14, 0x7
    blt lbl_fn_80235BF8_00001B30
    li r3, 0x0
    li r4, 0x9
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl fn_80613520
    li r3, 0x0
    li r4, 0xd
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl fn_80613520
    li r14, 0x0
lbl_fn_80235BF8_00001B7C:
    addi r4, r14, 0xe
    li r3, 0x0
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl fn_80613520
    addi r14, r14, 0x1
    cmpwi r14, 0x7
    blt lbl_fn_80235BF8_00001B7C
    lis r3, lbl_80742F98@ha
    lfs f30, lbl_80883138
    lfd f31, lbl_80742F98@l(r3)
    li r18, 0x0
    lfs f27, lbl_80883130
    li r19, 0x0
    lis r20, 0xcc01
    li r21, 0x0
    li r23, 0x1
    li r25, 0x2
    li r27, 0x3
    li r14, 0x4
    b lbl_fn_80235BF8_00001F0C
lbl_fn_80235BF8_00001BD4:
    lwz r3, lbl_8087F3A0
    lwzx r17, r3, r19
    lwz r15, 0x8(r17)
    lwz r16, 0x14(r17)
    rlwinm r3, r15, 0, 12, 12
    subis r0, r3, 0x8
    cmplwi r0, 0x0
    bne lbl_fn_80235BF8_00001F04
    lwz r22, lbl_8087EEE0
    extrwi r0, r15, 1, 24
    xori r5, r0, 0x1
    li r4, 0x8
    mr r3, r22
    bl fn_80076760
    mr r3, r22
    li r4, 0x9
    li r5, 0x2
    bl fn_80076760
    extrwi r0, r15, 1, 28
    mr r3, r22
    xori r5, r0, 0x1
    li r4, 0xa
    bl fn_80076760
    lfs f0, 0x1c(r17)
    addi r4, r1, 0x18
    lfs f2, 0x20(r17)
    li r3, 0x4
    fmuls f3, f27, f0
    lfs f1, 0x24(r17)
    lfs f0, 0x28(r17)
    fmuls f2, f27, f2
    fmuls f1, f27, f1
    fmuls f0, f27, f0
    fctiwz f3, f3
    fctiwz f2, f2
    fctiwz f1, f1
    stfd f3, 0xe0(r1)
    fctiwz f0, f0
    stfd f2, 0xd8(r1)
    lwz r7, 0xe4(r1)
    stfd f1, 0xd0(r1)
    lwz r6, 0xdc(r1)
    stfd f0, 0xc8(r1)
    lwz r5, 0xd4(r1)
    lwz r0, 0xcc(r1)
    stb r7, 0x8(r1)
    stb r6, 0x9(r1)
    stb r5, 0xa(r1)
    stb r0, 0xb(r1)
    lwz r0, 0x8(r1)
    stw r0, 0x18(r1)
    bl fn_80615C40
    lwz r5, 0x10(r17)
    li r4, 0x1
    lwz r3, lbl_8087EEE0
    cmpwi r5, 0x0
    beq lbl_fn_80235BF8_00001CBC
    b lbl_fn_80235BF8_00001CC0
lbl_fn_80235BF8_00001CBC:
    lwz r5, 0xc(r17)
lbl_fn_80235BF8_00001CC0:
    bl fn_800763C0
    lwz r4, lbl_8087EFB4
    addi r3, r1, 0x88
    addi r5, r17, 0x2c
    bl fn_800BFAC8
    lfs f1, 0x8c(r1)
    lfs f0, 0x88(r1)
    fdivs f1, f1, f25
    lwz r3, lbl_8087EEE0
    stfs f1, 0x4c(r1)
    fdivs f0, f0, f26
    stfs f0, 0x48(r1)
    bl fn_800761A8
    lwz r0, 0x18(r17)
    li r3, 0x98
    li r4, 0x0
    clrlwi r5, r0, 16
    bl fn_80614790
    li r0, 0x5
    lfs f28, 0x4c(r1)
    xoris r30, r0, 0x8000
    lfs f29, 0x48(r1)
    li r0, 0x6
    xoris r22, r21, 0x8000
    xoris r24, r23, 0x8000
    xoris r26, r25, 0x8000
    xoris r28, r27, 0x8000
    xoris r29, r14, 0x8000
    xoris r31, r0, 0x8000
    li r15, 0x0
    b lbl_fn_80235BF8_00001EF8
lbl_fn_80235BF8_00001D3C:
    lfs f2, 0x8(r16)
    addi r3, r1, 0x7c
    lfs f1, 0x4(r16)
    addi r5, r1, 0x50
    lfs f0, 0x0(r16)
    stfs f0, 0x50(r1)
    lwz r4, lbl_8087EFB4
    stfs f1, 0x54(r1)
    stfs f2, 0x58(r1)
    bl fn_800BFAC8
    lfs f1, 0x80(r1)
    lfs f0, 0x7c(r1)
    fdivs f1, f1, f25
    stw r22, 0xbc(r1)
    lfs f7, 0x1c(r17)
    lfd f6, 0xb8(r1)
    stw r22, 0xc4(r1)
    lfs f5, 0x8(r16)
    lfd f4, 0xc0(r1)
    fdivs f0, f0, f26
    stw r24, 0xbc(r1)
    lfs f3, 0x4(r16)
    lfd f10, 0xb8(r1)
    lfs f2, 0x0(r16)
    stfs f2, -0x8000(r20)
    stfs f3, -0x8000(r20)
    fsubs f2, f28, f1
    fsubs f3, f29, f0
    stfs f5, -0x8000(r20)
    fsubs f11, f4, f31
    fmuls f4, f2, f7
    fmuls f5, f3, f7
    stw r24, 0xc4(r1)
    fsubs f12, f6, f31
    lfs f24, 0x10(r16)
    lfd f8, 0xc0(r1)
    fmuls f6, f4, f30
    fmuls f7, f5, f30
    lfs f13, 0xc(r16)
    stfs f13, -0x8000(r20)
    fsubs f10, f10, f31
    fsubs f9, f8, f31
    stw r26, 0xbc(r1)
    fmadds f11, f7, f11, f0
    lfd f8, 0xb8(r1)
    fmadds f12, f6, f12, f1
    stfs f24, -0x8000(r20)
    fmadds f24, f7, f9, f0
    fsubs f8, f8, f31
    stfs f11, -0x8000(r20)
    fmadds f10, f6, f10, f1
    stfs f12, -0x8000(r20)
    fmadds f13, f6, f8, f1
    stw r26, 0xc4(r1)
    lfd f8, 0xc0(r1)
    stfs f24, -0x8000(r20)
    fsubs f8, f8, f31
    stw r28, 0xbc(r1)
    fmadds f11, f7, f8, f0
    lfd f8, 0xb8(r1)
    stfs f10, -0x8000(r20)
    fsubs f9, f8, f31
    stw r28, 0xc4(r1)
    lfd f8, 0xc0(r1)
    fmadds f10, f6, f9, f1
    stfs f11, -0x8000(r20)
    fsubs f8, f8, f31
    stw r29, 0xbc(r1)
    fmadds f12, f7, f8, f0
    lfd f8, 0xb8(r1)
    stfs f13, -0x8000(r20)
    fsubs f9, f8, f31
    stw r29, 0xc4(r1)
    lfd f8, 0xc0(r1)
    fmadds f11, f6, f9, f1
    stfs f12, -0x8000(r20)
    fsubs f8, f8, f31
    stw r30, 0xbc(r1)
    fmadds f13, f7, f8, f0
    lfd f8, 0xb8(r1)
    stfs f10, -0x8000(r20)
    fsubs f9, f8, f31
    stw r30, 0xc4(r1)
    lfd f8, 0xc0(r1)
    fmadds f10, f6, f9, f1
    stw r31, 0xbc(r1)
    fsubs f8, f8, f31
    lfd f9, 0xb8(r1)
    stfs f13, -0x8000(r20)
    fsubs f9, f9, f31
    stw r31, 0xc4(r1)
    fmadds f12, f7, f8, f0
    lfd f8, 0xc0(r1)
    fmadds f9, f6, f9, f1
    stfs f11, -0x8000(r20)
    fsubs f8, f8, f31
    stfs f12, -0x8000(r20)
    fmadds f8, f7, f8, f0
    stfs f0, 0x40(r1)
    stfs f1, 0x44(r1)
    stfs f3, 0x28(r1)
    stfs f2, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f4, 0x34(r1)
    stfs f7, 0x38(r1)
    stfs f6, 0x3c(r1)
    stfs f10, -0x8000(r20)
    stfs f8, -0x8000(r20)
    addi r16, r16, 0x14
    addi r15, r15, 0x1
    stfs f9, -0x8000(r20)
lbl_fn_80235BF8_00001EF8:
    lwz r0, 0x18(r17)
    cmpw r15, r0
    blt lbl_fn_80235BF8_00001D3C
lbl_fn_80235BF8_00001F04:
    addi r19, r19, 0x4
    addi r18, r18, 0x1
lbl_fn_80235BF8_00001F0C:
    lwz r0, lbl_8087F3A4
    cmpw r18, r0
    blt lbl_fn_80235BF8_00001BD4
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_806176F0
    li r0, 0x0
    stw r0, lbl_8087F3A4
lbl_fn_80235BF8_00001F30:
    addi r11, r1, 0x130
    psq_l f31, 0x1a8(r1), 0, 0
    lfd f31, 0x1a0(r1)
    psq_l f30, 0x198(r1), 0, 0
    lfd f30, 0x190(r1)
    psq_l f29, 0x188(r1), 0, 0
    lfd f29, 0x180(r1)
    psq_l f28, 0x178(r1), 0, 0
    lfd f28, 0x170(r1)
    psq_l f27, 0x168(r1), 0, 0
    lfd f27, 0x160(r1)
    psq_l f26, 0x158(r1), 0, 0
    lfd f26, 0x150(r1)
    psq_l f25, 0x148(r1), 0, 0
    lfd f25, 0x140(r1)
    psq_l f24, 0x138(r1), 0, 0
    lfd f24, 0x130(r1)
    bl _restgpr_14
    lwz r0, 0x1b4(r1)
    mtlr r0
    addi r1, r1, 0x1b0
    blr
}
