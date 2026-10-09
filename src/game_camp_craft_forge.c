#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_20(void);
extern void _restgpr_22(void);
extern void _restgpr_23(void);
extern void _restgpr_25(void);
extern void _restgpr_27(void);
extern void _savegpr_20(void);
extern void _savegpr_22(void);
extern void _savegpr_23(void);
extern void _savegpr_25(void);
extern void _savegpr_27(void);
extern void fn_8000D430(void);
extern void fn_80016888(void);
extern void fn_80043A24(void);
extern void fn_8004ED34(void);
extern void fn_8008B140(void);
extern void fn_8008B978(void);
extern void fn_800C7F08(void);
extern void fn_800D246C(void);
extern void fn_800D3FA4(void);
extern void fn_801027A4(void);
extern void fn_80154654(void);
extern void fn_801546F4(void);
extern void fn_80176DFC(void);
extern void fn_801EA4B0(void);
extern void fn_801EB078(void);
extern void fn_80219544(void);
extern void fn_8035B534(void);
extern void fn_8035E730(void);
extern void fn_8035E7CC(void);
extern void fn_8036FE74(void);
extern void fn_80375184(void);
extern void fn_80376194(void);
extern void fn_803761BC(void);
extern void fn_80394C68(void);
extern void fn_80398530(void);
extern void fn_80398590(void);
extern void fn_8039CC24(void);
extern void fn_803B3CA8(void);
extern void fn_803BA0CC(void);
extern void fn_803C1CAC(void);
extern void fn_803C1E3C(void);
extern void fn_803C3894(void);
extern void fn_803CA0F4(void);
extern void fn_803CA604(void);
extern void fn_803CAABC(void);
extern void fn_803EC16C(void);
extern void fn_803EC374(void);
extern void fn_803EE374(void);
extern void fn_80470528(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473F50(void);
extern void fn_80473F88(void);
extern void fn_8047E5DC(void);
extern void fn_8047F268(void);
extern void fn_80547C2C(void);
extern void fn_8054A3E0(void);
extern void fn_805B7B08(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_805F9990(void);
extern void fn_80680CF8(void);
extern void fn_8068A850(void);
extern void fn_8068AD58(void);

/* External data declarations */
extern u8 lbl_807500B0[];

/* Small data declarations */
extern u32 lbl_8087EE68;
extern u32 lbl_8087EE78;
extern u32 lbl_8087EE98;
extern u32 lbl_8087EFE8;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F128;
extern u32 lbl_8087F408;
extern u32 lbl_8087F418;
extern u32 lbl_8087F430;
extern u32 lbl_8087F448;
extern u32 lbl_8087F4A0;
extern u32 lbl_8087F4F0;
extern u32 lbl_8087F540;
extern u32 lbl_8087F890;
extern u32 lbl_8087F8A0;
extern u32 lbl_8087FA20;
extern u32 lbl_80885CB8;
extern u32 lbl_80885CBC;
extern u32 lbl_80885CC0;
extern u32 lbl_80885CC4;
extern u32 lbl_80885CC8;
extern u32 lbl_80885CCC;
extern u32 lbl_80885CD0;
extern u32 lbl_80885CD4;
extern u32 lbl_80885CD8;
extern u32 lbl_80885CDC;

/* Function declarations */
void fn_803C01B0(void);
void fn_803C01C0(void);
void fn_803C0624(void);
void fn_803C0634(void);
void fn_803C0928(void);
void fn_803C0938(void);
void fn_803C0C2C(void);
void fn_803C0F48(void);
void fn_803C1194(void);
void fn_803C11A4(void);
void fn_803C1338(void);
void fn_803C1560(void);
void fn_803C17FC(void);
void fn_803C1840(void);
void fn_803C1884(void);
void fn_803C18DC(void);
void fn_803C1950(void);

asm void fn_803C01B0(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    slwi r0, r4, 5
    add r3, r3, r0
    blr
}

asm void fn_803C01C0(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_27
    lwz r0, 0x48(r3)
    mr r31, r3
    cmpwi r0, 0x0
    bne lbl_fn_803C01C0_0000032C
    addi r27, r3, 0x4c
    li r29, 0x1
    mr r28, r27
    li r30, 0x0
lbl_fn_803C01C0_00000044:
    mr r3, r28
    bl fn_80473F50
    cmpwi r3, 0x0
    beq lbl_fn_803C01C0_00000058
    li r29, 0x0
lbl_fn_803C01C0_00000058:
    addi r30, r30, 0x1
    addi r28, r28, 0x8
    cmplwi r30, 0x3
    blt lbl_fn_803C01C0_00000044
    lwz r3, 0x134(r31)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_803C01C0_00000080
    li r29, 0x0
lbl_fn_803C01C0_00000080:
    lwz r3, lbl_8087F418
    bl fn_8035E730
    cmpwi r3, 0x0
    beq lbl_fn_803C01C0_00000094
    li r29, 0x0
lbl_fn_803C01C0_00000094:
    cmpwi r29, 0x0
    beq lbl_fn_803C01C0_00000458
    lwz r3, 0x48(r31)
    mr r28, r27
    li r29, 0x0
    addi r0, r3, 0x1
    stw r0, 0x48(r31)
lbl_fn_803C01C0_000000B0:
    mr r3, r28
    bl fn_80470580
    cmpwi r3, 0x0
    beq lbl_fn_803C01C0_000000F8
    mr r3, r28
    bl fn_8047059C
    cmpwi r3, 0x0
    beq lbl_fn_803C01C0_000000F8
    mr r3, r28
    bl fn_8047059C
    mr r30, r3
    mr r3, r28
    bl fn_80470580
    mr r4, r3
    mr r3, r31
    mr r5, r30
    mr r6, r29
    bl fn_803C3894
lbl_fn_803C01C0_000000F8:
    addi r29, r29, 0x1
    addi r28, r28, 0x8
    cmplwi r29, 0x3
    blt lbl_fn_803C01C0_000000B0
    mr r3, r31
    bl fn_803CAABC
    li r28, 0x0
lbl_fn_803C01C0_00000114:
    mr r3, r27
    bl fn_80473F88
    addi r28, r28, 0x1
    addi r27, r27, 0x8
    cmplwi r28, 0x3
    blt lbl_fn_803C01C0_00000114
    lwz r3, lbl_8087F430
    addi r4, r1, 0x38
    addi r5, r1, 0x2c
    bl fn_8036FE74
    lwz r3, lbl_8087FA20
    cmpwi r3, 0x0
    beq lbl_fn_803C01C0_00000164
    addi r5, r1, 0x38
    lfs f2, 0x40(r1)
    addi r4, r1, 0x8
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x10(r1)
    bl fn_805B7B08
lbl_fn_803C01C0_00000164:
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_803C01C0_0000017C
    lwz r4, lbl_8087F8A0
    lwz r4, 0x48(r4)
    bl fn_801027A4
lbl_fn_803C01C0_0000017C:
    lwz r5, 0x68(r31)
    mr r3, r31
    addi r4, r31, 0xd4
    bl fn_801EA4B0
    lwz r0, lbl_8087FA20
    cmpwi r0, 0x0
    bne lbl_fn_803C01C0_000001BC
    li r27, 0x0
    b lbl_fn_803C01C0_000001B0
lbl_fn_803C01C0_000001A0:
    mr r3, r31
    mr r4, r27
    bl fn_803C0634
    addi r27, r27, 0x1
lbl_fn_803C01C0_000001B0:
    lwz r0, 0x80(r31)
    cmplw r27, r0
    blt lbl_fn_803C01C0_000001A0
lbl_fn_803C01C0_000001BC:
    li r27, 0x0
    b lbl_fn_803C01C0_000001D4
lbl_fn_803C01C0_000001C4:
    mr r3, r31
    mr r4, r27
    bl fn_803C0C2C
    addi r27, r27, 0x1
lbl_fn_803C01C0_000001D4:
    lwz r0, 0x88(r31)
    cmplw r27, r0
    blt lbl_fn_803C01C0_000001C4
    li r27, 0x0
    b lbl_fn_803C01C0_000001F8
lbl_fn_803C01C0_000001E8:
    mr r3, r31
    mr r4, r27
    bl fn_803C0938
    addi r27, r27, 0x1
lbl_fn_803C01C0_000001F8:
    lwz r0, 0x90(r31)
    cmplw r27, r0
    blt lbl_fn_803C01C0_000001E8
    mr r3, r31
    bl fn_803CA0F4
    lwz r0, 0x64(r31)
    cmpwi r0, 0x0
    beq lbl_fn_803C01C0_000002A8
    li r29, 0x0
    li r30, 0x0
    b lbl_fn_803C01C0_0000023C
lbl_fn_803C01C0_00000224:
    lwz r0, 0x108(r31)
    mr r3, r31
    add r4, r0, r30
    bl fn_803EC374
    addi r30, r30, 0x80
    addi r29, r29, 0x1
lbl_fn_803C01C0_0000023C:
    lwz r0, 0x104(r31)
    cmplw r29, r0
    blt lbl_fn_803C01C0_00000224
    lwz r3, 0x64(r31)
    lwz r0, 0x48(r3)
    cmpwi r0, 0x1
    bne lbl_fn_803C01C0_000002A8
    lwz r0, lbl_8087F430
    cmpwi r0, 0x0
    beq lbl_fn_803C01C0_000002A8
    lwz r0, 0x4c(r3)
    cmpwi r0, 0x3
    beq lbl_fn_803C01C0_00000284
    lis r4, 0x1
    mr r3, r31
    subi r4, r4, 0x15a0
    li r5, 0x1
    bl fn_803EC16C
lbl_fn_803C01C0_00000284:
    lis r30, 0x1
    mr r3, r31
    subi r4, r30, 0x11b8
    li r5, 0x1
    bl fn_803EC16C
    mr r3, r31
    subi r4, r30, 0x600
    li r5, 0x1
    bl fn_803EC16C
lbl_fn_803C01C0_000002A8:
    mr r3, r31
    bl fn_803CA604
    lwz r3, lbl_8087F0A8
    lwz r0, 0x158(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803C01C0_000002C8
    lwz r3, lbl_8087F418
    bl fn_8035E7CC
lbl_fn_803C01C0_000002C8:
    addi r3, r1, 0x38
    lfs f2, 0x40(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r4, r1, 0x20
    psq_st f1, 0x0(r4), 0, 0
    addi r3, r1, 0x2c
    psq_l f1, 0x0(r3), 0, 0
    addi r5, r1, 0x14
    lfs f3, 0x24(r1)
    lfs f0, lbl_80885CB8
    stfs f2, 0x28(r1)
    fadds f0, f3, f0
    lfs f2, 0x34(r1)
    lwz r3, lbl_8087EFE8
    psq_st f1, 0x0(r5), 0, 0
    addi r3, r3, 0x2984
    stfs f2, 0x1c(r1)
    stfs f0, 0x24(r1)
    bl fn_800C7F08
    lwz r0, lbl_8087FA20
    cmpwi r0, 0x0
    beq lbl_fn_803C01C0_00000458
    addi r3, r31, 0x9ac
    bl fn_80470528
    b lbl_fn_803C01C0_00000458
lbl_fn_803C01C0_0000032C:
    cmpwi r0, 0x1
    bne lbl_fn_803C01C0_000003B8
    bl fn_800D3FA4
    cmpwi r3, 0x0
    beq lbl_fn_803C01C0_000003B8
    addi r3, r31, 0x11c
    bl fn_803B3CA8
    cmpwi r3, 0x0
    bne lbl_fn_803C01C0_000003B8
    lwz r3, lbl_8087F448
    lwz r0, 0x48(r3)
    cmpwi r0, 0x2
    beq lbl_fn_803C01C0_000003B8
    li r29, 0x0
    li r30, 0x0
    b lbl_fn_803C01C0_0000038C
lbl_fn_803C01C0_0000036C:
    lwz r3, 0x184(r31)
    lwzx r4, r3, r30
    cmpwi r4, 0x0
    blt lbl_fn_803C01C0_00000384
    lwz r3, lbl_8087F540
    bl fn_8047E5DC
lbl_fn_803C01C0_00000384:
    addi r30, r30, 0x4
    addi r29, r29, 0x1
lbl_fn_803C01C0_0000038C:
    lwz r0, 0x180(r31)
    cmplw r29, r0
    blt lbl_fn_803C01C0_0000036C
    lwz r3, lbl_8087EE78
    cmpwi r3, 0x0
    beq lbl_fn_803C01C0_000003A8
    bl fn_80043A24
lbl_fn_803C01C0_000003A8:
    lwz r3, 0x48(r31)
    addi r0, r3, 0x1
    stw r0, 0x48(r31)
    b lbl_fn_803C01C0_00000458
lbl_fn_803C01C0_000003B8:
    lwz r0, 0x48(r31)
    cmpwi r0, 0x2
    bne lbl_fn_803C01C0_00000458
    li r27, 0x1
    li r28, 0x0
    li r29, 0x0
    b lbl_fn_803C01C0_00000404
lbl_fn_803C01C0_000003D4:
    lwz r3, 0x184(r31)
    lwzx r4, r3, r29
    cmpwi r4, 0x0
    blt lbl_fn_803C01C0_000003FC
    lwz r3, lbl_8087F540
    bl fn_8047F268
    cmpwi r3, 0x0
    bne lbl_fn_803C01C0_000003FC
    li r27, 0x0
    b lbl_fn_803C01C0_00000410
lbl_fn_803C01C0_000003FC:
    addi r29, r29, 0x4
    addi r28, r28, 0x1
lbl_fn_803C01C0_00000404:
    lwz r0, 0x180(r31)
    cmplw r28, r0
    blt lbl_fn_803C01C0_000003D4
lbl_fn_803C01C0_00000410:
    li r28, 0x0
    li r29, 0x0
    b lbl_fn_803C01C0_00000444
lbl_fn_803C01C0_0000041C:
    lwz r0, 0xe0(r31)
    add r3, r0, r29
    lwz r3, 0x4(r3)
    bl fn_8008B140
    cmpwi r3, 0x0
    beq lbl_fn_803C01C0_0000043C
    li r27, 0x0
    b lbl_fn_803C01C0_00000450
lbl_fn_803C01C0_0000043C:
    addi r29, r29, 0x20
    addi r28, r28, 0x1
lbl_fn_803C01C0_00000444:
    lwz r0, 0xdc(r31)
    cmplw r28, r0
    blt lbl_fn_803C01C0_0000041C
lbl_fn_803C01C0_00000450:
    mr r3, r27
    b lbl_fn_803C01C0_0000045C
lbl_fn_803C01C0_00000458:
    li r3, 0x0
lbl_fn_803C01C0_0000045C:
    addi r11, r1, 0x60
    bl _restgpr_27
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_803C0624(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    slwi r0, r4, 2
    add r3, r3, r0
    blr
}

asm void fn_803C0634(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_23
    mulli r31, r4, 0x148
    lwz r0, 0x84(r3)
    lwz r5, lbl_8087FA20
    mr r28, r3
    mr r30, r4
    add r23, r0, r31
    lwz r0, 0x12c(r23)
    cmpwi r5, 0x0
    extrwi r0, r0, 1, 20
    xori r29, r0, 0x1
    beq lbl_fn_803C0634_00000564
    lwz r4, lbl_8087F0A8
    lwz r0, 0x188(r4)
    cmpwi r0, 0x0
    beq lbl_fn_803C0634_00000564
    lwz r27, 0x134(r3)
    li r25, 0x0
    li r24, 0x0
    b lbl_fn_803C0634_0000054C
lbl_fn_803C0634_000004E4:
    lwz r4, 0x144(r23)
    mr r3, r27
    lwzx r4, r4, r24
    bl fn_8039CC24
    cmpwi r3, 0x0
    mr r26, r3
    beq lbl_fn_803C0634_00000544
    cmpwi r29, 0x0
    beq lbl_fn_803C0634_0000051C
    mr r3, r27
    mr r4, r26
    bl fn_80398530
    cmpwi r3, 0x0
    bne lbl_fn_803C0634_0000053C
lbl_fn_803C0634_0000051C:
    cmpwi r29, 0x0
    bne lbl_fn_803C0634_00000544
    mr r3, r27
    mr r4, r26
    li r5, 0x1
    bl fn_80398590
    cmpwi r3, 0x0
    beq lbl_fn_803C0634_00000544
lbl_fn_803C0634_0000053C:
    li r0, 0x1
    b lbl_fn_803C0634_0000055C
lbl_fn_803C0634_00000544:
    addi r24, r24, 0x4
    addi r25, r25, 0x1
lbl_fn_803C0634_0000054C:
    lwz r0, 0x140(r23)
    cmplw r25, r0
    blt lbl_fn_803C0634_000004E4
    li r0, 0x0
lbl_fn_803C0634_0000055C:
    cmpwi r0, 0x0
    beq lbl_fn_803C0634_0000075C
lbl_fn_803C0634_00000564:
    lwz r0, 0x84(r28)
    add r3, r0, r31
    lwz r3, 0x13c(r3)
    cmpwi r3, 0x0
    beq lbl_fn_803C0634_000005A0
    lwz r4, lbl_8087F430
    cmpwi r4, 0x0
    beq lbl_fn_803C0634_000005A0
    lwz r0, 0x5694(r4)
    cmpwi r0, 0x0
    bne lbl_fn_803C0634_00000598
    clrlwi r0, r3, 31
    b lbl_fn_803C0634_000005A4
lbl_fn_803C0634_00000598:
    extrwi r0, r3, 1, 30
    b lbl_fn_803C0634_000005A4
lbl_fn_803C0634_000005A0:
    li r0, 0x1
lbl_fn_803C0634_000005A4:
    cmpwi r0, 0x0
    beq lbl_fn_803C0634_0000075C
    lwz r0, 0x84(r28)
    lwz r3, lbl_8087F890
    add r4, r0, r31
    lwz r4, 0x20(r4)
    bl fn_80547C2C
    lwz r12, 0x0(r3)
    mr r29, r3
    lwz r0, 0x84(r28)
    mr r5, r28
    lwz r12, 0x2c(r12)
    add r4, r0, r31
    addi r4, r4, 0x2c
    mtctr r12
    bctrl
    mr r3, r29
    li r4, 0x1
    bl fn_800D246C
    lwz r0, 0x84(r28)
    mulli r30, r30, 0x148
    lfs f0, lbl_80885CBC
    addi r3, r1, 0x8
    add r4, r0, r31
    stfs f0, 0x8(r1)
    lfs f2, 0xc(r4)
    psq_l f1, 0x4(r4), 0, 0
    li r0, 0x1
    psq_st f1, 0x528(r29), 0, 0
    stfs f2, 0x530(r29)
    fmr f2, f0
    lwz r4, 0x84(r28)
    stfs f0, 0x10(r1)
    add r4, r4, r30
    lfs f0, 0x14(r4)
    stfs f0, 0xc(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x534(r29), 0, 0
    stfs f2, 0x53c(r29)
    stw r0, 0x1428(r29)
    lwz r3, 0x84(r28)
    lwzx r0, r3, r30
    stw r0, 0x58(r29)
    lhz r0, 0xd38(r29)
    ori r0, r0, 0x8000
    sth r0, 0xd38(r29)
    lwz r3, lbl_8087F0A8
    lwz r0, 0x7c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803C0634_00000688
    lwz r12, 0x0(r29)
    mr r3, r29
    lwz r4, lbl_8087F890
    lwz r12, 0x30(r12)
    lwz r4, 0x58(r4)
    mtctr r12
    bctrl
lbl_fn_803C0634_00000688:
    lwz r0, 0x84(r28)
    add r3, r0, r30
    lwz r3, 0x28(r3)
    cmpwi r3, 0x0
    ble lbl_fn_803C0634_000006A4
    addi r0, r3, 0xd5
    stw r0, 0x510(r29)
lbl_fn_803C0634_000006A4:
    lwz r0, 0x84(r28)
    lwz r4, 0x137c(r29)
    add r3, r0, r30
    lwz r0, 0x12c(r3)
    or r0, r4, r0
    stw r0, 0x137c(r29)
    rlwinm r0, r0, 0, 23, 23
    cmplwi r0, 0x100
    bne lbl_fn_803C0634_000006DC
    mr r3, r29
    li r4, 0x1
    li r5, 0x1
    li r6, 0x1
    bl fn_80176DFC
lbl_fn_803C0634_000006DC:
    lwz r3, 0x9b0(r28)
    cmpwi r3, 0x0
    beq lbl_fn_803C0634_0000072C
    lwz r5, 0x84(r28)
    addi r3, r3, 0x4
    li r4, 0x1
    lwzx r5, r5, r30
    bl fn_803BA0CC
    cmpwi r3, 0x0
    beq lbl_fn_803C0634_00000754
    lbz r0, 0x5(r3)
    cmpwi r0, 0x0
    bne lbl_fn_803C0634_00000754
    lwz r0, 0x12a8(r29)
    addi r3, r29, 0xb0
    li r4, 0x1
    rlwinm r0, r0, 0, 12, 10
    stw r0, 0x12a8(r29)
    bl fn_8008B978
    b lbl_fn_803C0634_00000754
lbl_fn_803C0634_0000072C:
    lwz r0, 0x137c(r29)
    rlwinm r0, r0, 0, 24, 24
    cmplwi r0, 0x80
    bne lbl_fn_803C0634_00000754
    lwz r0, 0x12a8(r29)
    addi r3, r29, 0xb0
    li r4, 0x1
    rlwinm r0, r0, 0, 12, 10
    stw r0, 0x12a8(r29)
    bl fn_8008B978
lbl_fn_803C0634_00000754:
    mr r3, r29
    b lbl_fn_803C0634_00000760
lbl_fn_803C0634_0000075C:
    li r3, 0x0
lbl_fn_803C0634_00000760:
    addi r11, r1, 0x40
    bl _restgpr_23
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_803C0928(void)
{
    nofralloc
    mulli r0, r4, 0x148
    lwz r3, 0x4(r3)
    add r3, r3, r0
    blr
}

asm void fn_803C0938(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_23
    mulli r31, r4, 0x148
    lwz r0, 0x94(r3)
    lwz r5, lbl_8087FA20
    mr r28, r3
    mr r29, r4
    add r23, r0, r31
    lwz r0, 0x12c(r23)
    cmpwi r5, 0x0
    extrwi r0, r0, 1, 20
    xori r30, r0, 0x1
    beq lbl_fn_803C0938_00000868
    lwz r4, lbl_8087F0A8
    lwz r0, 0x188(r4)
    cmpwi r0, 0x0
    beq lbl_fn_803C0938_00000868
    lwz r27, 0x134(r3)
    li r25, 0x0
    li r24, 0x0
    b lbl_fn_803C0938_00000850
lbl_fn_803C0938_000007E8:
    lwz r4, 0x144(r23)
    mr r3, r27
    lwzx r4, r4, r24
    bl fn_8039CC24
    cmpwi r3, 0x0
    mr r26, r3
    beq lbl_fn_803C0938_00000848
    cmpwi r30, 0x0
    beq lbl_fn_803C0938_00000820
    mr r3, r27
    mr r4, r26
    bl fn_80398530
    cmpwi r3, 0x0
    bne lbl_fn_803C0938_00000840
lbl_fn_803C0938_00000820:
    cmpwi r30, 0x0
    bne lbl_fn_803C0938_00000848
    mr r3, r27
    mr r4, r26
    li r5, 0x1
    bl fn_80398590
    cmpwi r3, 0x0
    beq lbl_fn_803C0938_00000848
lbl_fn_803C0938_00000840:
    li r0, 0x1
    b lbl_fn_803C0938_00000860
lbl_fn_803C0938_00000848:
    addi r24, r24, 0x4
    addi r25, r25, 0x1
lbl_fn_803C0938_00000850:
    lwz r0, 0x140(r23)
    cmplw r25, r0
    blt lbl_fn_803C0938_000007E8
    li r0, 0x0
lbl_fn_803C0938_00000860:
    cmpwi r0, 0x0
    beq lbl_fn_803C0938_00000A60
lbl_fn_803C0938_00000868:
    lwz r0, 0x94(r28)
    add r3, r0, r31
    lwz r3, 0x13c(r3)
    cmpwi r3, 0x0
    beq lbl_fn_803C0938_000008A4
    lwz r4, lbl_8087F430
    cmpwi r4, 0x0
    beq lbl_fn_803C0938_000008A4
    lwz r0, 0x5694(r4)
    cmpwi r0, 0x0
    bne lbl_fn_803C0938_0000089C
    clrlwi r0, r3, 31
    b lbl_fn_803C0938_000008A8
lbl_fn_803C0938_0000089C:
    extrwi r0, r3, 1, 30
    b lbl_fn_803C0938_000008A8
lbl_fn_803C0938_000008A4:
    li r0, 0x1
lbl_fn_803C0938_000008A8:
    cmpwi r0, 0x0
    beq lbl_fn_803C0938_00000A60
    mulli r0, r29, 0x148
    lwz r3, 0x94(r28)
    add r3, r3, r0
    lwz r5, 0x20(r3)
    subis r3, r5, 0x3
    subi r0, r3, 0xcdc
    cmplwi r0, 0x63
    bgt lbl_fn_803C0938_00000908
    lis r3, 0x51ec
    lwz r4, lbl_8087F4F0
    subi r0, r3, 0x7ae1
    mulhw r0, r0, r5
    srawi r0, r0, 5
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r0, r0, 0x64
    subf r0, r0, r5
    slwi r0, r0, 2
    add r3, r4, r0
    lwz r3, 0x64a0(r3)
    bl fn_80219544
    mr r5, r3
lbl_fn_803C0938_00000908:
    lwz r3, lbl_8087F8A0
    li r4, 0x3
    bl fn_8054A3E0
    mr r30, r3
    li r4, 0x1
    bl fn_800D246C
    mulli r31, r29, 0x148
    lfs f0, lbl_80885CBC
    lwz r0, 0x94(r28)
    addi r3, r1, 0x8
    stfs f0, 0x8(r1)
    add r4, r0, r31
    lfs f2, 0xc(r4)
    psq_l f1, 0x4(r4), 0, 0
    psq_st f1, 0x528(r30), 0, 0
    stfs f2, 0x530(r30)
    fmr f2, f0
    lwz r0, 0x94(r28)
    stfs f0, 0x10(r1)
    add r4, r0, r31
    lfs f0, 0x14(r4)
    stfs f0, 0xc(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x534(r30), 0, 0
    stfs f2, 0x53c(r30)
    lwz r3, 0x94(r28)
    lwzx r0, r3, r31
    stw r0, 0x58(r30)
    lhz r0, 0xd38(r30)
    ori r0, r0, 0x8000
    sth r0, 0xd38(r30)
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_803C0938_00000998
    mr r4, r30
    bl fn_801027A4
lbl_fn_803C0938_00000998:
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r4, lbl_8087F8A0
    lwz r12, 0x30(r12)
    lwz r4, 0x5c(r4)
    mtctr r12
    bctrl
    lwz r0, 0x94(r28)
    add r3, r0, r31
    lwz r3, 0x28(r3)
    cmpwi r3, 0x0
    ble lbl_fn_803C0938_000009D0
    addi r0, r3, 0xd5
    stw r0, 0x510(r30)
lbl_fn_803C0938_000009D0:
    lwz r0, 0x94(r28)
    lwz r4, 0x137c(r30)
    add r3, r0, r31
    lwz r0, 0x12c(r3)
    or r0, r4, r0
    stw r0, 0x137c(r30)
    lwz r3, 0x9b0(r28)
    cmpwi r3, 0x0
    beq lbl_fn_803C0938_00000A38
    lwz r5, 0x94(r28)
    addi r3, r3, 0x4
    li r4, 0x3
    lwzx r5, r5, r31
    bl fn_803BA0CC
    cmpwi r3, 0x0
    beq lbl_fn_803C0938_00000A60
    lbz r0, 0x5(r3)
    cmpwi r0, 0x0
    bne lbl_fn_803C0938_00000A60
    lwz r0, 0x12a8(r30)
    addi r3, r30, 0xb0
    li r4, 0x1
    rlwinm r0, r0, 0, 12, 10
    stw r0, 0x12a8(r30)
    bl fn_8008B978
    b lbl_fn_803C0938_00000A60
lbl_fn_803C0938_00000A38:
    lwz r0, 0x137c(r30)
    rlwinm r0, r0, 0, 24, 24
    cmplwi r0, 0x80
    bne lbl_fn_803C0938_00000A60
    lwz r0, 0x12a8(r30)
    addi r3, r30, 0xb0
    li r4, 0x1
    rlwinm r0, r0, 0, 12, 10
    stw r0, 0x12a8(r30)
    bl fn_8008B978
lbl_fn_803C0938_00000A60:
    addi r11, r1, 0x40
    li r3, 0x0
    bl _restgpr_23
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_803C0C2C(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_23
    mulli r31, r4, 0x148
    lwz r0, 0x8c(r3)
    lwz r5, lbl_8087FA20
    mr r28, r3
    mr r30, r4
    add r23, r0, r31
    lwz r0, 0x12c(r23)
    cmpwi r5, 0x0
    extrwi r0, r0, 1, 20
    xori r29, r0, 0x1
    beq lbl_fn_803C0C2C_00000B5C
    lwz r4, lbl_8087F0A8
    lwz r0, 0x188(r4)
    cmpwi r0, 0x0
    beq lbl_fn_803C0C2C_00000B5C
    lwz r27, 0x134(r3)
    li r25, 0x0
    li r24, 0x0
    b lbl_fn_803C0C2C_00000B44
lbl_fn_803C0C2C_00000ADC:
    lwz r4, 0x144(r23)
    mr r3, r27
    lwzx r4, r4, r24
    bl fn_8039CC24
    cmpwi r3, 0x0
    mr r26, r3
    beq lbl_fn_803C0C2C_00000B3C
    cmpwi r29, 0x0
    beq lbl_fn_803C0C2C_00000B14
    mr r3, r27
    mr r4, r26
    bl fn_80398530
    cmpwi r3, 0x0
    bne lbl_fn_803C0C2C_00000B34
lbl_fn_803C0C2C_00000B14:
    cmpwi r29, 0x0
    bne lbl_fn_803C0C2C_00000B3C
    mr r3, r27
    mr r4, r26
    li r5, 0x1
    bl fn_80398590
    cmpwi r3, 0x0
    beq lbl_fn_803C0C2C_00000B3C
lbl_fn_803C0C2C_00000B34:
    li r0, 0x1
    b lbl_fn_803C0C2C_00000B54
lbl_fn_803C0C2C_00000B3C:
    addi r24, r24, 0x4
    addi r25, r25, 0x1
lbl_fn_803C0C2C_00000B44:
    lwz r0, 0x140(r23)
    cmplw r25, r0
    blt lbl_fn_803C0C2C_00000ADC
    li r0, 0x0
lbl_fn_803C0C2C_00000B54:
    cmpwi r0, 0x0
    beq lbl_fn_803C0C2C_00000D7C
lbl_fn_803C0C2C_00000B5C:
    lwz r0, 0x8c(r28)
    add r3, r0, r31
    lwz r3, 0x13c(r3)
    cmpwi r3, 0x0
    beq lbl_fn_803C0C2C_00000B98
    lwz r4, lbl_8087F430
    cmpwi r4, 0x0
    beq lbl_fn_803C0C2C_00000B98
    lwz r0, 0x5694(r4)
    cmpwi r0, 0x0
    bne lbl_fn_803C0C2C_00000B90
    clrlwi r0, r3, 31
    b lbl_fn_803C0C2C_00000B9C
lbl_fn_803C0C2C_00000B90:
    extrwi r0, r3, 1, 30
    b lbl_fn_803C0C2C_00000B9C
lbl_fn_803C0C2C_00000B98:
    li r0, 0x1
lbl_fn_803C0C2C_00000B9C:
    cmpwi r0, 0x0
    beq lbl_fn_803C0C2C_00000D7C
    lwz r0, 0x8c(r28)
    li r5, 0x0
    lwz r3, lbl_8087F408
    add r4, r0, r31
    bl fn_8035B534
    lwz r12, 0x0(r3)
    mr r29, r3
    lwz r0, 0x8c(r28)
    mr r5, r28
    lwz r12, 0x2c(r12)
    add r4, r0, r31
    addi r4, r4, 0x2c
    mtctr r12
    bctrl
    mr r3, r29
    li r4, 0x1
    bl fn_800D246C
    lwz r0, 0x8c(r28)
    mulli r30, r30, 0x148
    lfs f0, lbl_80885CBC
    addi r3, r1, 0x8
    add r4, r0, r31
    stfs f0, 0x8(r1)
    lfs f2, 0xc(r4)
    psq_l f1, 0x4(r4), 0, 0
    psq_st f1, 0x528(r29), 0, 0
    stfs f2, 0x530(r29)
    fmr f2, f0
    lwz r0, 0x8c(r28)
    stfs f0, 0x10(r1)
    add r4, r0, r30
    lfs f0, 0x14(r4)
    stfs f0, 0xc(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x534(r29), 0, 0
    stfs f2, 0x53c(r29)
    lwz r3, 0x8c(r28)
    lwzx r0, r3, r30
    stw r0, 0x58(r29)
    lwz r0, 0x8c(r28)
    add r5, r0, r30
    lwz r0, 0x140(r5)
    cmpwi r0, 0x0
    bne lbl_fn_803C0C2C_00000C64
    lwz r4, 0xc50(r29)
    mr r3, r29
    lwz r5, 0x1c(r5)
    bl fn_80154654
lbl_fn_803C0C2C_00000C64:
    lhz r0, 0xd38(r29)
    ori r0, r0, 0x8000
    sth r0, 0xd38(r29)
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_803C0C2C_00000C84
    mr r4, r29
    bl fn_801027A4
lbl_fn_803C0C2C_00000C84:
    lwz r3, lbl_8087F0A8
    lwz r0, 0x7c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803C0C2C_00000CB0
    lwz r12, 0x0(r29)
    mr r3, r29
    lwz r4, lbl_8087F408
    lwz r12, 0x30(r12)
    lwz r4, 0x58(r4)
    mtctr r12
    bctrl
lbl_fn_803C0C2C_00000CB0:
    lwz r0, 0x8c(r28)
    add r3, r0, r30
    lwz r3, 0x28(r3)
    cmpwi r3, 0x0
    ble lbl_fn_803C0C2C_00000CCC
    addi r0, r3, 0xd5
    stw r0, 0x510(r29)
lbl_fn_803C0C2C_00000CCC:
    lwz r0, 0x8c(r28)
    lwz r4, 0x137c(r29)
    add r3, r0, r30
    lwz r0, 0x12c(r3)
    or r0, r4, r0
    stw r0, 0x137c(r29)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_803C0C2C_00000CFC
    lwz r0, 0x12a4(r29)
    oris r0, r0, 0x1
    stw r0, 0x12a4(r29)
lbl_fn_803C0C2C_00000CFC:
    lwz r3, 0x9b0(r28)
    cmpwi r3, 0x0
    beq lbl_fn_803C0C2C_00000D4C
    lwz r5, 0x8c(r28)
    addi r3, r3, 0x4
    li r4, 0x2
    lwzx r5, r5, r30
    bl fn_803BA0CC
    cmpwi r3, 0x0
    beq lbl_fn_803C0C2C_00000D74
    lbz r0, 0x5(r3)
    cmpwi r0, 0x0
    bne lbl_fn_803C0C2C_00000D74
    lwz r0, 0x12a8(r29)
    addi r3, r29, 0xb0
    li r4, 0x1
    rlwinm r0, r0, 0, 12, 10
    stw r0, 0x12a8(r29)
    bl fn_8008B978
    b lbl_fn_803C0C2C_00000D74
lbl_fn_803C0C2C_00000D4C:
    lwz r0, 0x137c(r29)
    rlwinm r0, r0, 0, 24, 24
    cmplwi r0, 0x80
    bne lbl_fn_803C0C2C_00000D74
    lwz r0, 0x12a8(r29)
    addi r3, r29, 0xb0
    li r4, 0x1
    rlwinm r0, r0, 0, 12, 10
    stw r0, 0x12a8(r29)
    bl fn_8008B978
lbl_fn_803C0C2C_00000D74:
    mr r3, r29
    b lbl_fn_803C0C2C_00000D80
lbl_fn_803C0C2C_00000D7C:
    li r3, 0x0
lbl_fn_803C0C2C_00000D80:
    addi r11, r1, 0x40
    bl _restgpr_23
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_803C0F48(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stw r31, 0x7c(r1)
    mr r31, r3
    stw r30, 0x78(r1)
    li r30, 0x0
    stw r29, 0x74(r1)
    addi r29, r3, 0x998
    stw r28, 0x70(r1)
    mr r28, r4
lbl_fn_803C0F48_00000DC4:
    mr r3, r29
    bl fn_80470528
    addi r30, r30, 0x1
    addi r29, r29, 0x4
    cmplwi r30, 0x6
    blt lbl_fn_803C0F48_00000DC4
    lwz r0, 0x78(r31)
    li r5, 0x0
    li r3, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_803C0F48_00000EB0
lbl_fn_803C0F48_00000DF4:
    lwz r4, 0x7c(r31)
    lwzx r0, r4, r3
    cmpw r28, r0
    bne lbl_fn_803C0F48_00000EA4
    mulli r0, r5, 0x28
    lfs f0, lbl_80885CBC
    lwz r6, lbl_8087F8A0
    addi r5, r1, 0x2c
    stfs f0, 0x2c(r1)
    addi r3, r1, 0x38
    add r7, r4, r0
    lwz r6, 0x48(r6)
    lfs f2, 0xc(r7)
    li r4, 0x79
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x528(r6), 0, 0
    stfs f2, 0x530(r6)
    fmr f2, f0
    lwz r6, 0x7c(r31)
    lwz r7, lbl_8087F8A0
    add r6, r6, r0
    stfs f0, 0x34(r1)
    lfs f0, 0x14(r6)
    stfs f0, 0x30(r1)
    lwz r6, 0x48(r7)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x534(r6), 0, 0
    fmr f1, f0
    stfs f2, 0x53c(r6)
    bl fn_805F8E70
    lfs f0, lbl_80885CBC
    addi r4, r1, 0x20
    stfs f0, 0x14(r1)
    addi r6, r1, 0x14
    lfs f2, lbl_80885CB8
    mr r5, r4
    stfs f0, 0x18(r1)
    addi r3, r1, 0x38
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x1c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x28(r1)
    bl fn_805F93C0
    b lbl_fn_803C0F48_00000EB0
lbl_fn_803C0F48_00000EA4:
    addi r3, r3, 0x28
    addi r5, r5, 0x1
    bdnz lbl_fn_803C0F48_00000DF4
lbl_fn_803C0F48_00000EB0:
    lwz r3, lbl_8087F048
    li r4, 0x0
    bl fn_800D246C
    lwz r3, lbl_8087F408
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    lwz r3, lbl_8087F890
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    lwz r3, lbl_8087EE68
    bl fn_80016888
    lwz r3, lbl_8087F8A0
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    lwz r3, lbl_8087F4A0
    li r4, 0x0
    bl fn_803EE374
    lwz r3, 0x134(r31)
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x134(r31)
    bl fn_80394C68
    lwz r3, lbl_8087F8A0
    lwz r4, lbl_8087F128
    lwz r3, 0x48(r3)
    lfs f2, 0x530(r3)
    psq_l f1, 0x528(r3), 0, 0
    psq_st f1, 0x48(r4), 0, 0
    stfs f2, 0x50(r4)
    lwz r3, lbl_8087F128
    bl fn_801EB078
    lwz r3, lbl_8087F8A0
    lwz r3, 0x48(r3)
    cmpwi r3, 0x0
    beq lbl_fn_803C0F48_00000F74
    psq_l f1, 0x528(r3), 0, 0
    addi r5, r1, 0x8
    lfs f2, 0x530(r3)
    li r4, 0x0
    stfs f2, 0x10(r1)
    psq_st f1, 0x0(r5), 0, 0
    lfs f1, lbl_80885CC0
    bl fn_801546F4
lbl_fn_803C0F48_00000F74:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_803C0F48_00000FBC
    li r29, 0x1
    stw r29, 0x5664(r3)
    li r30, 0x0
    lwz r3, lbl_8087F430
    bl fn_803761BC
    cmpwi r3, 0x0
    beq lbl_fn_803C0F48_00000FB0
    lwz r3, lbl_8087F430
    bl fn_80375184
    cmpwi r3, 0x0
    beq lbl_fn_803C0F48_00000FB0
    mr r30, r29
lbl_fn_803C0F48_00000FB0:
    lwz r3, lbl_8087F430
    mr r4, r30
    bl fn_80376194
lbl_fn_803C0F48_00000FBC:
    mr r3, r31
    bl fn_803CAABC
    lwz r0, 0x84(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    lwz r29, 0x74(r1)
    lwz r28, 0x70(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_803C1194(void)
{
    nofralloc
    mulli r0, r4, 0x28
    lwz r3, 0x4(r3)
    add r3, r3, r0
    blr
}

asm void fn_803C11A4(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r11, r1, 0x40
    stfd f31, 0x60(r1)
    psq_st f31, 0x68(r1), 0, 0
    stfd f30, 0x50(r1)
    psq_st f30, 0x58(r1), 0, 0
    stfd f29, 0x40(r1)
    psq_st f29, 0x48(r1), 0, 0
    bl _savegpr_27
    cmpwi r5, 0x0
    mr r30, r3
    bgt lbl_fn_803C11A4_00001040
    lfs f0, lbl_80885CBC
    stfs f0, 0x0(r3)
    stfs f0, 0x4(r3)
    stfs f0, 0x8(r3)
    b lbl_fn_803C11A4_00001158
lbl_fn_803C11A4_00001040:
    subi r0, r5, 0x1
    lwz r3, 0x9c(r4)
    mulli r0, r0, 0x30
    add r31, r3, r0
    bl fn_80680CF8
    lis r27, 0x4178
    lis r29, 0x4330
    addi r0, r27, 0x749f
    lis r28, lbl_807500B0@ha
    mulhw r0, r0, r3
    stw r29, 0x18(r1)
    lfd f5, lbl_807500B0@l(r28)
    lfs f3, lbl_80885CC8
    lfs f0, lbl_80885CC4
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x1c(r1)
    lfd f4, 0x18(r1)
    fsubs f4, f4, f5
    fdivs f3, f4, f3
    fmuls f30, f0, f3
    bl fn_80680CF8
    addi r0, r27, 0x749f
    stw r29, 0x20(r1)
    mulhw r0, r0, r3
    lfd f6, lbl_807500B0@l(r28)
    lfs f4, lbl_80885CC8
    lfs f3, lbl_80885CD0
    lfs f0, lbl_80885CCC
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x24(r1)
    lfd f5, 0x20(r1)
    fsubs f5, f5, f6
    fdivs f4, f5, f4
    fmuls f3, f3, f4
    fmuls f1, f0, f3
    bl fn_8068AD58
    frsp f4, f1
    lfs f3, 0x14(r31)
    lfs f0, lbl_80885CD4
    fmr f1, f30
    fmuls f3, f3, f4
    fmuls f29, f0, f3
    bl fn_8068AD58
    frsp f3, f1
    lfs f0, 0xc(r31)
    fmr f1, f30
    lfs f31, 0x8(r31)
    fmadds f30, f29, f3, f0
    bl fn_8068A850
    frsp f3, f1
    lfs f0, 0x4(r31)
    fmr f2, f30
    stfs f31, 0xc(r1)
    addi r3, r1, 0x8
    fmadds f0, f29, f3, f0
    stfs f30, 0x10(r1)
    stfs f0, 0x8(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x8(r30)
lbl_fn_803C11A4_00001158:
    addi r11, r1, 0x40
    psq_l f31, 0x68(r1), 0, 0
    lfd f31, 0x60(r1)
    psq_l f30, 0x58(r1), 0, 0
    lfd f30, 0x50(r1)
    psq_l f29, 0x48(r1), 0, 0
    lfd f29, 0x40(r1)
    bl _restgpr_27
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_803C1338(void)
{
    nofralloc
    stwu r1, -0xe0(r1)
    mflr r0
    stw r0, 0xe4(r1)
    addi r11, r1, 0x50
    stfd f31, 0xd0(r1)
    psq_st f31, 0xd8(r1), 0, 0
    stfd f30, 0xc0(r1)
    psq_st f30, 0xc8(r1), 0, 0
    stfd f29, 0xb0(r1)
    psq_st f29, 0xb8(r1), 0, 0
    stfd f28, 0xa0(r1)
    psq_st f28, 0xa8(r1), 0, 0
    stfd f27, 0x90(r1)
    psq_st f27, 0x98(r1), 0, 0
    stfd f26, 0x80(r1)
    psq_st f26, 0x88(r1), 0, 0
    stfd f25, 0x70(r1)
    psq_st f25, 0x78(r1), 0, 0
    stfd f24, 0x60(r1)
    psq_st f24, 0x68(r1), 0, 0
    stfd f23, 0x50(r1)
    psq_st f23, 0x58(r1), 0, 0
    bl _savegpr_25
    subi r0, r5, 0x1
    lwz r7, 0x9c(r4)
    mulli r0, r0, 0x30
    lis r4, lbl_807500B0@ha
    lis r5, 0x4178
    lfs f26, lbl_80885CC8
    lfd f25, lbl_807500B0@l(r4)
    mr r26, r3
    add r28, r7, r0
    lfs f27, lbl_80885CC4
    lfs f4, 0xc(r28)
    mr r27, r6
    lfs f3, 0x8(r28)
    addi r31, r5, 0x749f
    lfs f0, 0x4(r28)
    addi r29, r1, 0x8
    stfs f0, 0x0(r3)
    addi r30, r1, 0x14
    lfs f28, lbl_80885CD0
    lis r25, 0x4330
    stfs f3, 0x4(r3)
    lfs f29, lbl_80885CCC
    stfs f4, 0x8(r3)
    lfs f30, lbl_80885CD4
    lfs f31, lbl_80885CBC
lbl_fn_803C1338_00001248:
    bl fn_80680CF8
    mulhw r0, r31, r3
    stw r25, 0x20(r1)
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x24(r1)
    lfd f0, 0x20(r1)
    fsubs f0, f0, f25
    fdivs f0, f0, f26
    fmuls f24, f27, f0
    bl fn_80680CF8
    mulhw r0, r31, r3
    stw r25, 0x28(r1)
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x2c(r1)
    lfd f0, 0x28(r1)
    fsubs f0, f0, f25
    fdivs f0, f0, f26
    fmuls f0, f28, f0
    fmuls f1, f29, f0
    bl fn_8068AD58
    frsp f3, f1
    lfs f0, 0x14(r28)
    fmr f1, f24
    fmuls f0, f0, f3
    fmuls f23, f30, f0
    bl fn_8068AD58
    frsp f0, f1
    fmr f1, f24
    fmuls f24, f23, f0
    bl fn_8068A850
    frsp f0, f1
    stfs f31, 0xc(r1)
    fmr f2, f24
    mr r3, r27
    stfs f24, 0x10(r1)
    mr r4, r30
    fmuls f0, f23, f0
    stfs f2, 0x1c(r1)
    stfs f0, 0x8(r1)
    psq_l f1, 0x0(r29), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    bl fn_805F9990
    fcmpo cr0, f1, f31
    blt lbl_fn_803C1338_00001248
    lfs f3, 0x0(r26)
    lfs f0, 0x14(r1)
    lfs f4, 0x4(r26)
    fadds f0, f3, f0
    lfs f3, 0x8(r26)
    stfs f0, 0x0(r26)
    lfs f0, 0x18(r1)
    fadds f0, f4, f0
    stfs f0, 0x4(r26)
    lfs f0, 0x1c(r1)
    fadds f0, f3, f0
    stfs f0, 0x8(r26)
    psq_l f31, 0xd8(r1), 0, 0
    lfd f31, 0xd0(r1)
    psq_l f30, 0xc8(r1), 0, 0
    lfd f30, 0xc0(r1)
    psq_l f29, 0xb8(r1), 0, 0
    lfd f29, 0xb0(r1)
    psq_l f28, 0xa8(r1), 0, 0
    lfd f28, 0xa0(r1)
    psq_l f27, 0x98(r1), 0, 0
    lfd f27, 0x90(r1)
    psq_l f26, 0x88(r1), 0, 0
    lfd f26, 0x80(r1)
    psq_l f25, 0x78(r1), 0, 0
    lfd f25, 0x70(r1)
    psq_l f24, 0x68(r1), 0, 0
    lfd f24, 0x60(r1)
    psq_l f23, 0x58(r1), 0, 0
    lfd f23, 0x50(r1)
    addi r11, r1, 0x50
    bl _restgpr_25
    lwz r0, 0xe4(r1)
    mtlr r0
    addi r1, r1, 0xe0
    blr
}

asm void fn_803C1560(void)
{
    nofralloc
    stwu r1, -0xe0(r1)
    mflr r0
    stw r0, 0xe4(r1)
    addi r11, r1, 0xc0
    stfd f31, 0xd0(r1)
    psq_st f31, 0xd8(r1), 0, 0
    stfd f30, 0xc0(r1)
    psq_st f30, 0xc8(r1), 0, 0
    bl _savegpr_22
    lfs f0, lbl_80885CD8
    fmr f30, f1
    li r23, 0x0
    stfs f0, 0x38(r1)
    mr r24, r3
    mr r25, r4
    stfs f0, 0x3c(r1)
    mr r26, r5
    mr r27, r6
    stw r23, 0x40(r1)
    mr r28, r7
    mr r29, r8
    li r31, 0x0
    stfs f0, 0x50(r1)
    li r30, 0x0
    stfs f0, 0x54(r1)
    stw r23, 0x58(r1)
    stfs f0, 0x68(r1)
    stfs f0, 0x6c(r1)
    stw r23, 0x70(r1)
    stfs f0, 0x80(r1)
    stfs f0, 0x84(r1)
    stw r23, 0x88(r1)
    b lbl_fn_803C1560_0000152C
lbl_fn_803C1560_00001434:
    lwz r0, 0x9c(r24)
    add r22, r0, r23
    lwz r0, 0x2c(r22)
    cmpwi r0, 0x0
    beq lbl_fn_803C1560_00001524
    cmpwi r27, 0x0
    ble lbl_fn_803C1560_0000145C
    lwz r0, 0x20(r22)
    cmpw r0, r27
    bne lbl_fn_803C1560_00001524
lbl_fn_803C1560_0000145C:
    lwz r0, 0x28(r22)
    cmpw r0, r28
    bne lbl_fn_803C1560_00001524
    lfs f0, 0x14(r22)
    fcmpo cr0, f0, f30
    blt lbl_fn_803C1560_00001524
    lfs f3, 0x8(r22)
    addi r3, r1, 0x20
    lfs f0, 0x4(r25)
    lfs f5, 0xc(r22)
    fsubs f31, f3, f0
    lfs f4, 0x8(r25)
    lfs f3, 0x4(r22)
    lfs f0, 0x0(r25)
    fsubs f4, f5, f4
    stfs f31, 0x24(r1)
    fsubs f0, f3, f0
    stfs f4, 0x28(r1)
    stfs f0, 0x20(r1)
    bl fn_805F9920
    mulli r0, r31, 0x18
    addi r3, r1, 0x38
    fmadds f3, f31, f31, f1
    lfsux f0, r3, r0
    fcmpo cr0, f0, f3
    ble lbl_fn_803C1560_00001524
    stfs f3, 0x0(r3)
    addi r0, r30, 0x1
    psq_l f1, 0x4(r22), 0, 0
    li r31, 0x0
    stfs f31, 0x4(r3)
    lfs f2, 0xc(r22)
    stw r0, 0x8(r3)
    psq_st f1, 0xc(r3), 0, 0
    stfs f2, 0x14(r3)
    lfs f3, 0x38(r1)
    lfs f0, 0x50(r1)
    fcmpo cr0, f0, f3
    ble lbl_fn_803C1560_00001500
    fmr f3, f0
    li r31, 0x1
lbl_fn_803C1560_00001500:
    lfs f0, 0x68(r1)
    fcmpo cr0, f0, f3
    ble lbl_fn_803C1560_00001514
    fmr f3, f0
    li r31, 0x2
lbl_fn_803C1560_00001514:
    lfs f0, 0x80(r1)
    fcmpo cr0, f0, f3
    ble lbl_fn_803C1560_00001524
    li r31, 0x3
lbl_fn_803C1560_00001524:
    addi r30, r30, 0x1
    addi r23, r23, 0x30
lbl_fn_803C1560_0000152C:
    lwz r0, 0x74(r24)
    cmpw r30, r0
    blt lbl_fn_803C1560_00001434
    lfs f3, lbl_80885CBC
    oris r23, r26, 0x8000
    lfs f0, lbl_80885CDC
    addi r22, r1, 0x38
    stfs f3, 0x2c(r1)
    li r24, 0x0
    lfs f31, lbl_80885CD8
    li r26, 0x0
    stfs f0, 0x30(r1)
    stfs f3, 0x34(r1)
lbl_fn_803C1560_00001560:
    lwz r0, 0x8(r22)
    cmpwi r0, 0x0
    beq lbl_fn_803C1560_00001604
    lfs f0, 0x0(r22)
    fcmpo cr0, f31, f0
    ble lbl_fn_803C1560_00001604
    cmpwi r29, 0x0
    beq lbl_fn_803C1560_000015FC
    lfs f3, 0x14(r22)
    mr r7, r23
    lfs f4, 0x34(r1)
    addi r5, r1, 0x14
    lfs f0, 0x8(r25)
    addi r6, r1, 0x8
    fadds f7, f3, f4
    lfs f3, 0x10(r22)
    fadds f6, f0, f4
    lfs f5, 0x30(r1)
    lfs f0, 0x4(r25)
    li r4, 0x0
    fadds f8, f3, f5
    lfs f4, 0xc(r22)
    fadds f5, f0, f5
    lfs f3, 0x2c(r1)
    lfs f0, 0x0(r25)
    li r8, 0x0
    fadds f4, f4, f3
    stfs f8, 0xc(r1)
    fadds f0, f0, f3
    lwz r3, lbl_8087EE98
    stfs f4, 0x8(r1)
    li r9, 0x0
    stfs f7, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f5, 0x18(r1)
    stfs f6, 0x1c(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    bne lbl_fn_803C1560_00001604
lbl_fn_803C1560_000015FC:
    lfs f31, 0x0(r22)
    lwz r24, 0x8(r22)
lbl_fn_803C1560_00001604:
    addi r26, r26, 0x1
    addi r22, r22, 0x18
    cmpwi r26, 0x4
    blt lbl_fn_803C1560_00001560
    cmpwi r24, 0x0
    bne lbl_fn_803C1560_00001620
    lwz r24, 0x40(r1)
lbl_fn_803C1560_00001620:
    psq_l f31, 0xd8(r1), 0, 0
    mr r3, r24
    lfd f31, 0xd0(r1)
    psq_l f30, 0xc8(r1), 0, 0
    lfd f30, 0xc0(r1)
    addi r11, r1, 0xc0
    bl _restgpr_22
    lwz r0, 0xe4(r1)
    mtlr r0
    addi r1, r1, 0xe0
    blr
}

asm void fn_803C17FC(void)
{
    nofralloc
    lwz r0, 0x74(r3)
    li r7, 0x0
    li r5, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_803C17FC_00001688
lbl_fn_803C17FC_00001664:
    lwz r6, 0x9c(r3)
    lwzx r0, r6, r5
    cmpw r0, r4
    bne lbl_fn_803C17FC_0000167C
    addi r3, r7, 0x1
    blr
lbl_fn_803C17FC_0000167C:
    addi r7, r7, 0x1
    addi r5, r5, 0x30
    bdnz lbl_fn_803C17FC_00001664
lbl_fn_803C17FC_00001688:
    li r3, 0x0
    blr
}

asm void fn_803C1840(void)
{
    nofralloc
    lwz r0, 0xa8(r3)
    li r7, 0x0
    li r5, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_803C1840_000016CC
lbl_fn_803C1840_000016A8:
    lwz r6, 0xb0(r3)
    lwzx r0, r6, r5
    cmpw r0, r4
    bne lbl_fn_803C1840_000016C0
    addi r3, r7, 0x1
    blr
lbl_fn_803C1840_000016C0:
    addi r7, r7, 0x1
    addi r5, r5, 0x40
    bdnz lbl_fn_803C1840_000016A8
lbl_fn_803C1840_000016CC:
    li r3, 0x0
    blr
}

asm void fn_803C1884(void)
{
    nofralloc
    lwz r0, 0xf4(r3)
    li r8, 0x0
    li r6, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_803C1884_00001724
lbl_fn_803C1884_000016EC:
    lwz r5, 0xf8(r3)
    add r7, r5, r6
    lwz r0, 0x2c(r7)
    cmpwi r0, 0x0
    bne lbl_fn_803C1884_00001718
    lwz r0, 0x24(r7)
    cmpw r4, r0
    bne lbl_fn_803C1884_00001718
    mulli r0, r8, 0x30
    add r3, r5, r0
    blr
lbl_fn_803C1884_00001718:
    addi r6, r6, 0x30
    addi r8, r8, 0x1
    bdnz lbl_fn_803C1884_000016EC
lbl_fn_803C1884_00001724:
    li r3, 0x0
    blr
}

asm void fn_803C18DC(void)
{
    nofralloc
    lwz r0, 0xcc(r3)
    li r9, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_803C18DC_00001798
lbl_fn_803C18DC_00001740:
    lwz r0, 0xd0(r3)
    lwz r10, 0xc8(r3)
    add r7, r0, r9
    lwzx r0, r9, r0
    lwz r6, 0x4(r7)
    mulli r0, r0, 0x30
    add r8, r10, r0
    lwz r0, 0x14(r8)
    mulli r6, r6, 0x30
    cmpw r0, r4
    add r6, r10, r6
    bne lbl_fn_803C18DC_00001790
    lwz r0, 0x14(r6)
    cmpw r0, r4
    bne lbl_fn_803C18DC_00001790
    lwz r0, 0x0(r8)
    cmpw r0, r5
    bne lbl_fn_803C18DC_00001790
    mr r3, r7
    blr
lbl_fn_803C18DC_00001790:
    addi r9, r9, 0x8
    bdnz lbl_fn_803C18DC_00001740
lbl_fn_803C18DC_00001798:
    li r3, 0x0
    blr
}

asm void fn_803C1950(void)
{
    nofralloc
    stwu r1, -0x210(r1)
    mflr r0
    stw r0, 0x214(r1)
    addi r11, r1, 0x1d0
    stfd f31, 0x200(r1)
    psq_st f31, 0x208(r1), 0, 0
    stfd f30, 0x1f0(r1)
    psq_st f30, 0x1f8(r1), 0, 0
    stfd f29, 0x1e0(r1)
    psq_st f29, 0x1e8(r1), 0, 0
    stfd f28, 0x1d0(r1)
    psq_st f28, 0x1d8(r1), 0, 0
    bl _savegpr_20
    mr r20, r3
    bl fn_803C1CAC
    mr r3, r20
    bl fn_803C1E3C
    li r21, 0x0
    lfs f28, lbl_80885CBC
    lfs f29, lbl_80885CB8
    mr r29, r21
    mr r30, r21
    addi r25, r1, 0x50
    addi r28, r1, 0x170
    addi r26, r1, 0xb0
    addi r27, r1, 0x110
    addi r23, r1, 0x38
    li r31, 0x0
    b lbl_fn_803C1950_00001AB8
lbl_fn_803C1950_00001814:
    lwz r0, 0xe0(r20)
    add r22, r0, r31
    lwz r0, 0xc(r22)
    cmpwi r0, 0x0
    beq lbl_fn_803C1950_00001AB0
    lwz r0, 0x1c(r22)
    cmpwi r0, 0x0
    beq lbl_fn_803C1950_00001AB0
    stfs f28, 0x19c(r1)
    stfs f28, 0x194(r1)
    stfs f28, 0x190(r1)
    stfs f28, 0x18c(r1)
    stfs f28, 0x188(r1)
    stfs f28, 0x180(r1)
    stfs f28, 0x17c(r1)
    stfs f28, 0x178(r1)
    stfs f28, 0x174(r1)
    stfs f29, 0x198(r1)
    stfs f29, 0x184(r1)
    stfs f29, 0x170(r1)
    lfs f1, 0x18(r22)
    fcmpu cr0, f28, f1
    beq lbl_fn_803C1950_000018BC
    addi r3, r1, 0x80
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r28
    addi r4, r1, 0x80
    addi r5, r1, 0x50
    bl fn_805F89F0
    psq_l f1, 0x0(r25), 0, 0
    psq_l f2, 0x8(r25), 0, 0
    psq_l f3, 0x10(r25), 0, 0
    psq_l f4, 0x18(r25), 0, 0
    psq_l f5, 0x20(r25), 0, 0
    psq_l f6, 0x28(r25), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    psq_st f2, 0x8(r28), 0, 0
    psq_st f3, 0x10(r28), 0, 0
    psq_st f4, 0x18(r28), 0, 0
    psq_st f5, 0x20(r28), 0, 0
    psq_st f6, 0x28(r28), 0, 0
lbl_fn_803C1950_000018BC:
    lfs f1, 0x14(r22)
    fcmpu cr0, f28, f1
    beq lbl_fn_803C1950_00001914
    addi r3, r1, 0xe0
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r28
    addi r4, r1, 0xe0
    addi r5, r1, 0xb0
    bl fn_805F89F0
    psq_l f1, 0x0(r26), 0, 0
    psq_l f2, 0x8(r26), 0, 0
    psq_l f3, 0x10(r26), 0, 0
    psq_l f4, 0x18(r26), 0, 0
    psq_l f5, 0x20(r26), 0, 0
    psq_l f6, 0x28(r26), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    psq_st f2, 0x8(r28), 0, 0
    psq_st f3, 0x10(r28), 0, 0
    psq_st f4, 0x18(r28), 0, 0
    psq_st f5, 0x20(r28), 0, 0
    psq_st f6, 0x28(r28), 0, 0
lbl_fn_803C1950_00001914:
    lfs f1, 0x10(r22)
    fcmpu cr0, f28, f1
    beq lbl_fn_803C1950_0000196C
    addi r3, r1, 0x140
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r28
    addi r4, r1, 0x140
    addi r5, r1, 0x110
    bl fn_805F89F0
    psq_l f1, 0x0(r27), 0, 0
    psq_l f2, 0x8(r27), 0, 0
    psq_l f3, 0x10(r27), 0, 0
    psq_l f4, 0x18(r27), 0, 0
    psq_l f5, 0x20(r27), 0, 0
    psq_l f6, 0x28(r27), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    psq_st f2, 0x8(r28), 0, 0
    psq_st f3, 0x10(r28), 0, 0
    psq_st f4, 0x18(r28), 0, 0
    psq_st f5, 0x20(r28), 0, 0
    psq_st f6, 0x28(r28), 0, 0
lbl_fn_803C1950_0000196C:
    addi r4, r1, 0x170
    lwz r3, 0xc(r22)
    mr r5, r4
    bl fn_805F89F0
    lwz r24, 0x4(r22)
    addi r3, r1, 0x14
    psq_l f2, 0x8(r28), 0, 0
    psq_l f3, 0x10(r28), 0, 0
    psq_l f4, 0x18(r28), 0, 0
    psq_l f5, 0x20(r28), 0, 0
    psq_l f6, 0x28(r28), 0, 0
    psq_l f1, 0x0(r28), 0, 0
    psq_st f1, 0x8(r24), 0, 0
    psq_st f2, 0x10(r24), 0, 0
    psq_st f3, 0x18(r24), 0, 0
    psq_st f4, 0x20(r24), 0, 0
    psq_st f5, 0x28(r24), 0, 0
    psq_st f6, 0x30(r24), 0, 0
    lfs f8, 0x198(r1)
    lfs f7, 0x188(r1)
    lfs f0, 0x178(r1)
    stfs f0, 0x14(r1)
    stfs f7, 0x18(r1)
    stfs f8, 0x1c(r1)
    bl fn_805F9940
    lfs f8, 0x194(r1)
    fmr f30, f1
    lfs f7, 0x184(r1)
    addi r3, r1, 0x20
    lfs f0, 0x174(r1)
    stfs f0, 0x20(r1)
    stfs f7, 0x24(r1)
    stfs f8, 0x28(r1)
    bl fn_805F9940
    lfs f8, 0x190(r1)
    fmr f31, f1
    lfs f7, 0x180(r1)
    addi r3, r1, 0x2c
    lfs f0, 0x170(r1)
    stfs f0, 0x2c(r1)
    stfs f7, 0x30(r1)
    stfs f8, 0x34(r1)
    bl fn_805F9940
    frsp f7, f31
    stfs f1, 0x8(r1)
    frsp f0, f30
    stfs f31, 0xc(r1)
    fcmpo cr0, f7, f0
    stfs f30, 0x10(r1)
    ble lbl_fn_803C1950_00001A38
    b lbl_fn_803C1950_00001A3C
lbl_fn_803C1950_00001A38:
    fmr f7, f0
lbl_fn_803C1950_00001A3C:
    lfs f8, 0x8(r1)
    fcmpo cr0, f8, f7
    ble lbl_fn_803C1950_00001A4C
    b lbl_fn_803C1950_00001A64
lbl_fn_803C1950_00001A4C:
    lfs f8, 0xc(r1)
    lfs f0, 0x10(r1)
    fcmpo cr0, f8, f0
    ble lbl_fn_803C1950_00001A60
    b lbl_fn_803C1950_00001A64
lbl_fn_803C1950_00001A60:
    fmr f8, f0
lbl_fn_803C1950_00001A64:
    stfs f8, 0x54(r24)
    addi r4, r1, 0x38
    stw r29, 0x38(r1)
    lwz r3, 0x4(r22)
    bl fn_8000D430
    cmpwi r23, 0x0
    beq lbl_fn_803C1950_00001AB0
    lwz r3, 0x38(r1)
    cmpwi r3, 0x0
    beq lbl_fn_803C1950_00001AB0
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_803C1950_00001AAC
    addi r3, r23, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_803C1950_00001AAC:
    stw r30, 0x38(r1)
lbl_fn_803C1950_00001AB0:
    addi r21, r21, 0x1
    addi r31, r31, 0x20
lbl_fn_803C1950_00001AB8:
    lwz r0, 0xdc(r20)
    cmplw r21, r0
    blt lbl_fn_803C1950_00001814
    addi r11, r1, 0x1d0
    psq_l f31, 0x208(r1), 0, 0
    lfd f31, 0x200(r1)
    psq_l f30, 0x1f8(r1), 0, 0
    lfd f30, 0x1f0(r1)
    psq_l f29, 0x1e8(r1), 0, 0
    lfd f29, 0x1e0(r1)
    psq_l f28, 0x1d8(r1), 0, 0
    lfd f28, 0x1d0(r1)
    bl _restgpr_20
    lwz r0, 0x214(r1)
    mtlr r0
    addi r1, r1, 0x210
    blr
}
