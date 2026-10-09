#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_16(void);
extern void _restgpr_21(void);
extern void _restgpr_26(void);
extern void _savegpr_16(void);
extern void _savegpr_21(void);
extern void _savegpr_26(void);
extern void dtor_80084684(void);
extern void fn_80061824(void);
extern void fn_8006EF48(void);
extern void fn_80084320(void);
extern void fn_8008937C(void);
extern void fn_800897D8(void);
extern void fn_800A4450(void);
extern void fn_800BFAC8(void);
extern void fn_800D1D3C(void);
extern void fn_800D1E9C(void);
extern void fn_800D2338(void);
extern void fn_800D246C(void);
extern void fn_800D3FA4(void);
extern void fn_800DC6B4(void);
extern void fn_800DD3FC(void);
extern void fn_800E2AF8(void);
extern void fn_800E2D4C(void);
extern void fn_8011F6B0(void);
extern void fn_8011F7D4(void);
extern void fn_8011F7FC(void);
extern void fn_801546F4(void);
extern void fn_8016DF3C(void);
extern void fn_8016EB48(void);
extern void fn_801765D8(void);
extern void fn_80176ACC(void);
extern void fn_801F3FF8(void);
extern void fn_801F4484(void);
extern void fn_801F465C(void);
extern void fn_801FEC74(void);
extern void fn_801FECE0(void);
extern void fn_801FED24(void);
extern void fn_801FEE08(void);
extern void fn_8020924C(void);
extern void fn_80219544(void);
extern void fn_80365390(void);
extern void fn_80371320(void);
extern void fn_80373148(void);
extern void fn_804EB874(void);
extern void fn_805AE3C8(void);
extern void fn_805F98D0(void);
extern void fn_805F9940(void);
extern void fn_806846C4(void);
extern void fn_80686A48(void);
extern void fn_80686A64(void);
extern void fn_806958E0(void);
extern void fn_806959D8(void);
extern void fn_80695D84(void);

/* External data declarations */
extern u8 lbl_8075E468[];
extern u8 lbl_8075E478[];
extern u8 lbl_8075E480[];
extern u8 lbl_8075E488[];
extern u8 lbl_8075E49C[];
extern u8 lbl_80794920[];
extern u8 lbl_80794968[];
extern u8 lbl_80794A84[];
extern u8 lbl_80794AC0[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EEC8;
extern u32 lbl_8087EEE0;
extern u32 lbl_8087EF10;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F1E4;
extern u32 lbl_8087F430;
extern u32 lbl_8087F610;
extern u32 lbl_8087F8A0;
extern u32 lbl_8087F8A8;
extern u32 lbl_8087FA00;
extern u32 lbl_808813D0;
extern u32 lbl_80887D58;
extern u32 lbl_80887D60;
extern u32 lbl_80887D64;
extern u32 lbl_80887D68;
extern u32 lbl_80887D6C;
extern u32 lbl_80887D70;
extern u32 lbl_80887D74;
extern u32 lbl_80887D78;
extern u32 lbl_80887D7C;
extern u32 lbl_80887D80;
extern u32 lbl_80887D84;
extern u32 lbl_80887D88;
extern u32 lbl_80887D8C;
extern u32 lbl_80887D90;
extern u32 lbl_80887D94;
extern u32 lbl_80887D98;
extern u32 lbl_80887D9C;
extern u32 lbl_80887DA0;
extern u32 lbl_80887DA4;
extern u32 lbl_80887DA8;
extern u32 lbl_80887DAC;
extern u32 lbl_80887DB0;
extern u32 lbl_80887DB4;
extern u32 lbl_80887DB8;
extern u32 lbl_80887DBC;
extern u32 lbl_80887DC0;
extern u32 lbl_80887DC4;
extern u32 lbl_80887DC8;
extern u32 lbl_80887DCC;
extern u32 lbl_80887DD0;
extern u32 lbl_80887DD4;
extern u32 lbl_80887DD8;
extern u32 lbl_80887DDC;
extern u32 lbl_80887DE0;
extern u32 lbl_80887DE4;
extern u32 lbl_80887DE8;
extern u32 lbl_80887DEC;
extern u32 lbl_80887DF0;
extern u32 lbl_80887DF4;
extern u32 lbl_80887DF8;
extern u32 lbl_80887DFC;
extern u32 lbl_80887E00;

/* Function declarations */
void fn_80549D90(void);
void fn_80549E5C(void);
void fn_80549EEC(void);
void fn_80549F18(void);
void fn_8054A004(void);
void fn_8054A0A0(void);
void fn_8054A340(void);
void fn_8054A39C(void);
void fn_8054A3E0(void);
void fn_8054A530(void);
void fn_8054A5C8(void);
void fn_8054A644(void);
void fn_8054A660(void);
void fn_8054A690(void);
void fn_8054A6EC(void);
void fn_8054A754(void);
void fn_8054A858(void);
void fn_8054A8E4(void);
void fn_8054A924(void);
void fn_8054A9AC(void);
void fn_8054AF0C(void);
void fn_8054B048(void);
void fn_8054B0A0(void);
void fn_8054B328(void);

asm void fn_80549D90(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_fn_80549D90_000000AC
    lwz r0, lbl_8087F8A0
    cmpwi r0, 0x0
    bne lbl_fn_80549D90_000000AC
    lis r31, lbl_8075E468@ha
    li r3, 0x60
    addi r5, r31, lbl_8075E468@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_80549D90_000000A8
    mr r4, r29
    bl fn_8011F6B0
    lis r3, lbl_80794920@ha
    li r0, 0x0
    addi r3, r3, lbl_80794920@l
    stw r3, 0x0(r30)
    addi r3, r31, lbl_8075E468@l
    stw r0, 0x54(r30)
    addi r4, r3, 0x1
    stw r0, 0x58(r30)
    stw r0, 0x5c(r30)
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_80549D90_000000A0
    addi r3, r3, 0x10
    bl fn_8008937C
    stw r3, 0x58(r30)
    b lbl_fn_80549D90_000000A4
lbl_fn_80549D90_000000A0:
    li r3, 0x0
lbl_fn_80549D90_000000A4:
    stw r3, 0x5c(r30)
lbl_fn_80549D90_000000A8:
    stw r30, lbl_8087F8A0
lbl_fn_80549D90_000000AC:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    lwz r3, lbl_8087F8A0
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80549E5C(void)
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
    beq lbl_fn_80549E5C_00000140
    addic. r0, r3, 0x58
    li r0, 0x0
    stw r0, lbl_8087F8A0
    beq lbl_fn_80549E5C_0000011C
    lwz r4, 0x58(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80549E5C_0000011C
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_80549E5C_0000011C
    bl fn_800897D8
lbl_fn_80549E5C_0000011C:
    cmpwi r30, 0x0
    beq lbl_fn_80549E5C_00000130
    mr r3, r30
    li r4, 0x0
    bl fn_800D1E9C
lbl_fn_80549E5C_00000130:
    cmpwi r31, 0x0
    ble lbl_fn_80549E5C_00000140
    mr r3, r30
    bl dtor_80084684
lbl_fn_80549E5C_00000140:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80549EEC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_800D3FA4
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80549F18(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    subi r0, r4, 0x3
    cmplwi r0, 0x1
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    bgt lbl_fn_80549F18_0000022C
    lis r4, 0xb
    lwz r3, lbl_8087F610
    subi r30, r4, 0x51a0
    bl fn_804EB874
    cmpwi r3, 0x0
    beq lbl_fn_80549F18_000001D4
    lwz r0, 0xb0(r3)
    add r30, r30, r0
lbl_fn_80549F18_000001D4:
    mr r3, r28
    mr r5, r30
    li r4, 0x0
    bl fn_8054A3E0
    mr r29, r3
    li r4, 0x1
    bl fn_800D246C
    li r0, -0x1
    stw r0, 0x58(r29)
    li r31, 0x0
    b lbl_fn_80549F18_0000021C
lbl_fn_80549F18_00000200:
    mr r3, r28
    mr r4, r30
    bl fn_8011F7FC
    stw r31, 0x14ac(r30)
    mr r3, r28
    mr r4, r30
    bl fn_8011F7D4
lbl_fn_80549F18_0000021C:
    lwz r30, 0x48(r28)
    cmplw r29, r30
    bne lbl_fn_80549F18_00000200
    b lbl_fn_80549F18_0000024C
lbl_fn_80549F18_0000022C:
    li r4, 0x0
    li r5, 0x1
    bl fn_8054A3E0
    mr r29, r3
    li r4, 0x1
    bl fn_800D246C
    li r0, -0x1
    stw r0, 0x58(r29)
lbl_fn_80549F18_0000024C:
    lwz r0, 0x48(r28)
    stw r0, 0x54(r28)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8054A004(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r3, lbl_8087F430
    bl fn_80373148
    lwz r31, 0x48(r30)
    b lbl_fn_8054A004_000002F0
lbl_fn_8054A004_0000029C:
    lwz r0, 0x48(r30)
    cmplw r0, r31
    bne lbl_fn_8054A004_000002B8
    mr r3, r31
    li r4, 0x0
    bl fn_8016DF3C
    b lbl_fn_8054A004_000002C4
lbl_fn_8054A004_000002B8:
    mr r3, r31
    li r4, 0x3
    bl fn_8016DF3C
lbl_fn_8054A004_000002C4:
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8016EB48
    mr r3, r31
    li r4, 0x0
    bl fn_800D246C
    mr r3, r31
    bl fn_80176ACC
    lwz r31, 0x14ac(r31)
lbl_fn_8054A004_000002F0:
    cmpwi r31, 0x0
    bne lbl_fn_8054A004_0000029C
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8054A0A0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    lwz r0, 0x48(r3)
    mr r29, r3
    mr r30, r4
    mr r31, r5
    cmplw r0, r4
    beq lbl_fn_8054A0A0_00000598
    mr r3, r0
    li r4, 0x3
    bl fn_8016DF3C
    mr r3, r30
    li r4, 0x0
    bl fn_8016DF3C
    lwz r0, 0x38(r30)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_8054A0A0_0000036C
    mr r3, r30
    bl fn_80176ACC
lbl_fn_8054A0A0_0000036C:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_8054A0A0_00000380
    mr r4, r30
    bl fn_80371320
lbl_fn_8054A0A0_00000380:
    cmpwi r31, 0x0
    beq lbl_fn_8054A0A0_00000508
    lwz r6, 0x48(r29)
    li r9, 0x0
    lwz r4, 0x58(r30)
    li r5, 0x0
    lwz r3, 0x58(r6)
    li r0, 0x8
    stw r4, 0x58(r6)
    stw r3, 0x58(r30)
    lwz r3, lbl_8087F430
    lwz r4, 0x10d8(r3)
    b lbl_fn_8054A0A0_000004CC
lbl_fn_8054A0A0_000003B4:
    lwz r3, 0x14c(r4)
    lwz r6, 0x48(r29)
    add r7, r3, r5
    lwz r3, 0x8c(r7)
    cmplw r3, r6
    bne lbl_fn_8054A0A0_000003D4
    stw r30, 0x8c(r7)
    b lbl_fn_8054A0A0_000003E0
lbl_fn_8054A0A0_000003D4:
    cmplw r3, r30
    bne lbl_fn_8054A0A0_000003E0
    stw r6, 0x8c(r7)
lbl_fn_8054A0A0_000003E0:
    li r10, 0x0
    li r3, 0x0
    mtctr r0
lbl_fn_8054A0A0_000003EC:
    lwz r6, 0x14c(r4)
    lwz r7, 0x48(r29)
    add r6, r5, r6
    add r8, r6, r3
    lwz r6, 0xc(r8)
    cmplw r6, r7
    bne lbl_fn_8054A0A0_00000410
    stw r30, 0xc(r8)
    b lbl_fn_8054A0A0_0000041C
lbl_fn_8054A0A0_00000410:
    cmplw r6, r30
    bne lbl_fn_8054A0A0_0000041C
    stw r7, 0xc(r8)
lbl_fn_8054A0A0_0000041C:
    lwz r6, 0x14c(r4)
    addi r3, r3, 0x4
    lwz r7, 0x48(r29)
    add r6, r5, r6
    add r8, r6, r3
    lwz r6, 0xc(r8)
    cmplw r6, r7
    bne lbl_fn_8054A0A0_00000444
    stw r30, 0xc(r8)
    b lbl_fn_8054A0A0_00000450
lbl_fn_8054A0A0_00000444:
    cmplw r6, r30
    bne lbl_fn_8054A0A0_00000450
    stw r7, 0xc(r8)
lbl_fn_8054A0A0_00000450:
    lwz r6, 0x14c(r4)
    addi r3, r3, 0x4
    lwz r7, 0x48(r29)
    add r6, r5, r6
    add r8, r6, r3
    lwz r6, 0xc(r8)
    cmplw r6, r7
    bne lbl_fn_8054A0A0_00000478
    stw r30, 0xc(r8)
    b lbl_fn_8054A0A0_00000484
lbl_fn_8054A0A0_00000478:
    cmplw r6, r30
    bne lbl_fn_8054A0A0_00000484
    stw r7, 0xc(r8)
lbl_fn_8054A0A0_00000484:
    lwz r6, 0x14c(r4)
    addi r3, r3, 0x4
    lwz r7, 0x48(r29)
    add r6, r5, r6
    add r8, r6, r3
    lwz r6, 0xc(r8)
    cmplw r6, r7
    bne lbl_fn_8054A0A0_000004AC
    stw r30, 0xc(r8)
    b lbl_fn_8054A0A0_000004B8
lbl_fn_8054A0A0_000004AC:
    cmplw r6, r30
    bne lbl_fn_8054A0A0_000004B8
    stw r7, 0xc(r8)
lbl_fn_8054A0A0_000004B8:
    addi r3, r3, 0x4
    addi r10, r10, 0x3
    bdnz lbl_fn_8054A0A0_000003EC
    addi r5, r5, 0x90
    addi r9, r9, 0x1
lbl_fn_8054A0A0_000004CC:
    lwz r3, 0x148(r4)
    cmplw r9, r3
    blt lbl_fn_8054A0A0_000003B4
    lwz r26, lbl_8087FA00
    li r27, 0x0
    li r28, 0x0
    b lbl_fn_8054A0A0_000004FC
lbl_fn_8054A0A0_000004E8:
    lwz r0, 0x4c(r26)
    add r3, r0, r28
    bl fn_805AE3C8
    addi r27, r27, 0x1
    addi r28, r28, 0x37c
lbl_fn_8054A0A0_000004FC:
    lwz r0, 0x48(r26)
    cmpw r27, r0
    blt lbl_fn_8054A0A0_000004E8
lbl_fn_8054A0A0_00000508:
    lwz r3, 0x48(r29)
    lwz r0, 0x50(r3)
    cmpwi r0, 0x1
    bne lbl_fn_8054A0A0_00000550
    lis r6, lbl_807C7030@ha
    addi r5, r1, 0x8
    addi r6, r6, lbl_807C7030@l
    li r4, 0x0
    psq_l f1, 0x0(r6), 0, 0
    lfs f2, 0x8(r6)
    psq_st f1, 0x0(r5), 0, 0
    lfs f1, lbl_80887D58
    stfs f2, 0x10(r1)
    bl fn_801546F4
    cmpwi r31, 0x0
    bne lbl_fn_8054A0A0_00000550
    lwz r3, 0x48(r29)
    bl fn_801765D8
lbl_fn_8054A0A0_00000550:
    lwz r0, 0x50(r30)
    cmpwi r0, 0x1
    bne lbl_fn_8054A0A0_00000574
    cmpwi r31, 0x0
    li r0, -0x1
    stw r0, 0x58(r30)
    bne lbl_fn_8054A0A0_00000574
    mr r3, r30
    bl fn_80176ACC
lbl_fn_8054A0A0_00000574:
    mr r3, r29
    mr r4, r30
    bl fn_8011F7FC
    lwz r0, 0x48(r29)
    stw r0, 0x14ac(r30)
    lwz r3, 0x4c(r29)
    stw r30, 0x48(r29)
    addi r0, r3, 0x1
    stw r0, 0x4c(r29)
lbl_fn_8054A0A0_00000598:
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8054A340(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    mr r3, r4
    bl fn_80219544
    lwz r4, 0x48(r31)
    b lbl_fn_8054A340_000005EC
lbl_fn_8054A340_000005D4:
    lwz r0, 0x50(r4)
    cmpw r3, r0
    bne lbl_fn_8054A340_000005E8
    mr r3, r4
    b lbl_fn_8054A340_000005F8
lbl_fn_8054A340_000005E8:
    lwz r4, 0x14ac(r4)
lbl_fn_8054A340_000005EC:
    cmpwi r4, 0x0
    bne lbl_fn_8054A340_000005D4
    li r3, 0x0
lbl_fn_8054A340_000005F8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8054A39C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lwz r3, 0x48(r3)
    lwz r31, 0x14ac(r3)
    b lbl_fn_8054A39C_00000634
lbl_fn_8054A39C_00000628:
    mr r3, r31
    bl fn_800D2338
    lwz r31, 0x14ac(r31)
lbl_fn_8054A39C_00000634:
    cmpwi r31, 0x0
    bne lbl_fn_8054A39C_00000628
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8054A3E0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    beq lbl_fn_8054A3E0_0000077C
    mr r3, r30
    bl fn_8020924C
    cmpwi r3, 0x0
    beq lbl_fn_8054A3E0_000006D4
    lwz r0, 0x24(r3)
    cmpwi r0, 0x42
    bne lbl_fn_8054A3E0_000006D4
    lis r5, lbl_8075E478@ha
    li r3, 0x14b0
    addi r5, r5, lbl_8075E478@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8054A3E0_00000780
    mr r4, r28
    mr r5, r29
    mr r6, r30
    bl fn_80365390
    b lbl_fn_8054A3E0_00000780
lbl_fn_8054A3E0_000006D4:
    lis r5, lbl_8075E478@ha
    li r3, 0x14b0
    addi r5, r5, lbl_8075E478@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_8054A3E0_00000774
    mr r4, r28
    mr r5, r29
    mr r6, r30
    bl fn_800E2AF8
    lis r4, lbl_80794968@ha
    lis r3, 0x2
    addi r4, r4, lbl_80794968@l
    stw r4, 0x0(r31)
    li r4, 0x0
    subi r0, r3, 0x7960
    stw r4, 0x14ac(r31)
    lwz r4, lbl_8087F8A0
    lwz r3, 0x50(r4)
    addi r3, r3, 0x1
    stw r3, 0x50(r4)
    cmpw r3, r0
    ble lbl_fn_8054A3E0_00000750
    lwz r3, 0x50(r4)
    subis r3, r3, 0x2
    addi r0, r3, 0x7960
    stw r0, 0x50(r4)
lbl_fn_8054A3E0_00000750:
    lwz r0, 0x50(r4)
    mr r4, r31
    stw r0, 0x80(r31)
    lwz r3, lbl_8087F8A0
    bl fn_8011F7D4
    lwz r3, 0xf14(r31)
    li r0, 0x0
    stw r3, 0xf18(r31)
    stw r0, 0xf14(r31)
lbl_fn_8054A3E0_00000774:
    mr r3, r31
    b lbl_fn_8054A3E0_00000780
lbl_fn_8054A3E0_0000077C:
    li r3, 0x0
lbl_fn_8054A3E0_00000780:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8054A530(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_800E2AF8
    lis r3, lbl_80794968@ha
    li r0, 0x0
    addi r3, r3, lbl_80794968@l
    stw r3, 0x0(r31)
    lis r3, 0x2
    stw r0, 0x14ac(r31)
    subi r0, r3, 0x7960
    lwz r4, lbl_8087F8A0
    lwz r3, 0x50(r4)
    addi r3, r3, 0x1
    stw r3, 0x50(r4)
    cmpw r3, r0
    ble lbl_fn_8054A530_000007FC
    lwz r3, 0x50(r4)
    subis r3, r3, 0x2
    addi r0, r3, 0x7960
    stw r0, 0x50(r4)
lbl_fn_8054A530_000007FC:
    lwz r0, 0x50(r4)
    mr r4, r31
    stw r0, 0x80(r31)
    lwz r3, lbl_8087F8A0
    bl fn_8011F7D4
    lwz r3, 0xf14(r31)
    li r0, 0x0
    stw r3, 0xf18(r31)
    mr r3, r31
    stw r0, 0xf14(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8054A5C8(void)
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
    beq lbl_fn_8054A5C8_00000898
    lis r4, lbl_80794968@ha
    addi r4, r4, lbl_80794968@l
    stw r4, 0x0(r3)
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_8054A5C8_0000087C
    mr r4, r30
    bl fn_8011F7FC
lbl_fn_8054A5C8_0000087C:
    mr r3, r30
    li r4, 0x0
    bl fn_800E2D4C
    cmpwi r31, 0x0
    ble lbl_fn_8054A5C8_00000898
    mr r3, r30
    bl dtor_80084684
lbl_fn_8054A5C8_00000898:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8054A644(void)
{
    nofralloc
    b lbl_fn_8054A644_000008BC
lbl_fn_8054A644_000008B8:
    mr r3, r0
lbl_fn_8054A644_000008BC:
    lwz r0, 0x14ac(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8054A644_000008B8
    stw r4, 0x14ac(r3)
    blr
}

asm void fn_8054A660(void)
{
    nofralloc
    li r5, 0x0
    b lbl_fn_8054A660_000008E0
lbl_fn_8054A660_000008D8:
    mr r5, r3
    lwz r3, 0x14ac(r3)
lbl_fn_8054A660_000008E0:
    cmplw r3, r4
    bne lbl_fn_8054A660_000008D8
    bnelr
    cmpwi r5, 0x0
    beqlr
    lwz r0, 0x14ac(r3)
    stw r0, 0x14ac(r5)
    blr
}

asm void fn_8054A690(void)
{
    nofralloc
    lwz r4, lbl_8087F8A0
    cmpwi r4, 0x0
    beq lbl_fn_8054A690_00000954
    lwz r4, 0x48(r4)
    cmpwi r4, 0x0
    beq lbl_fn_8054A690_00000954
    cmplw r3, r4
    bne lbl_fn_8054A690_00000940
    b lbl_fn_8054A690_00000928
lbl_fn_8054A690_00000924:
    mr r4, r0
lbl_fn_8054A690_00000928:
    lwz r0, 0x14ac(r4)
    cmpwi r0, 0x0
    bne lbl_fn_8054A690_00000924
    b lbl_fn_8054A690_0000094C
    b lbl_fn_8054A690_00000940
lbl_fn_8054A690_0000093C:
    mr r4, r0
lbl_fn_8054A690_00000940:
    lwz r0, 0x14ac(r4)
    cmplw r0, r3
    bne lbl_fn_8054A690_0000093C
lbl_fn_8054A690_0000094C:
    mr r3, r4
    blr
lbl_fn_8054A690_00000954:
    li r3, 0x0
    blr
}

asm void fn_8054A6EC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, lbl_8087F8A8
    cmpwi r0, 0x0
    bne lbl_fn_8054A6EC_000009AC
    lis r5, lbl_8075E49C@ha
    li r3, 0x17d8
    addi r5, r5, lbl_8075E49C@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8054A6EC_000009A8
    mr r4, r31
    bl fn_8054A754
lbl_fn_8054A6EC_000009A8:
    stw r3, lbl_8087F8A8
lbl_fn_8054A6EC_000009AC:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    lwz r3, lbl_8087F8A8
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8054A754(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_800D1D3C
    lis r3, lbl_80794A84@ha
    li r31, 0x0
    addi r3, r3, lbl_80794A84@l
    lis r4, fn_8054A858@ha
    lis r5, fn_8054A8E4@ha
    stw r3, 0x0(r30)
    addi r3, r30, 0x50
    addi r4, r4, fn_8054A858@l
    stw r31, 0x48(r30)
    addi r5, r5, fn_8054A8E4@l
    li r6, 0xb4
    li r7, 0x20
    stw r31, 0x4c(r30)
    bl fn_806958E0
    lis r4, lbl_8075E49C@ha
    mr r3, r30
    addi r4, r4, lbl_8075E49C@l
    li r5, 0x0
    addi r4, r4, 0x1
    bl fn_801F3FF8
    stw r3, 0x16d4(r30)
    li r4, 0x1
    bl fn_800D246C
    lwz r4, 0x16d4(r30)
    li r0, 0xa
    mulli r0, r0, 0xc
    lwz r3, 0xfc(r4)
    rlwinm r3, r3, 0, 2, 0
    stw r3, 0xfc(r4)
    add r4, r30, r0
    stw r31, 0x16e0(r30)
    mr r3, r30
    stw r31, 0x16ec(r30)
    stw r31, 0x16f8(r30)
    stw r31, 0x1704(r30)
    stw r31, 0x1710(r30)
    stw r31, 0x171c(r30)
    stw r31, 0x1728(r30)
    stw r31, 0x1734(r30)
    stw r31, 0x1740(r30)
    stw r31, 0x174c(r30)
    stw r31, 0x1758(r30)
    stw r31, 0x1764(r30)
    stw r31, 0x1770(r30)
    stw r31, 0x177c(r30)
    stw r31, 0x1710(r4)
    stw r31, 0x1794(r30)
    stw r31, 0x17a0(r30)
    stw r31, 0x17ac(r30)
    stw r31, 0x17b8(r30)
    stw r31, 0x17c4(r30)
    stw r31, 0x17d0(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8054A858(void)
{
    nofralloc
    lfs f0, lbl_80887D60
    li r5, 0x0
    li r0, -0x1
    li r4, 0x1
    stw r5, 0x0(r3)
    stfs f0, 0x4(r3)
    stfs f0, 0x8(r3)
    stw r5, 0xc(r3)
    stw r5, 0x10(r3)
    stw r5, 0x14(r3)
    stw r5, 0x18(r3)
    stw r4, 0x1c(r3)
    sth r5, 0x20(r3)
    stfs f0, 0x60(r3)
    stfs f0, 0x64(r3)
    stfs f0, 0x68(r3)
    stfs f0, 0x6c(r3)
    stfs f0, 0x70(r3)
    stfs f0, 0x74(r3)
    stw r5, 0x78(r3)
    stw r0, 0x7c(r3)
    stw r0, 0x80(r3)
    stw r5, 0x84(r3)
    stw r5, 0x88(r3)
    stw r5, 0x8c(r3)
    stw r5, 0x90(r3)
    stw r5, 0x94(r3)
    stw r5, 0x98(r3)
    stw r5, 0x9c(r3)
    stw r5, 0xa0(r3)
    stw r5, 0xa4(r3)
    stw r5, 0xa8(r3)
    stw r5, 0xac(r3)
    stw r5, 0xb0(r3)
    blr
}

asm void fn_8054A8E4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_8054A8E4_00000B7C
    cmpwi r4, 0x0
    ble lbl_fn_8054A8E4_00000B7C
    bl dtor_80084684
lbl_fn_8054A8E4_00000B7C:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8054A924(void)
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
    beq lbl_fn_8054A924_00000C00
    addic. r3, r3, 0x4c
    li r0, 0x0
    stw r0, lbl_8087F8A8
    beq lbl_fn_8054A924_00000BE4
    beq lbl_fn_8054A924_00000BE4
    lis r4, fn_8054A8E4@ha
    addi r3, r3, 0x4
    addi r4, r4, fn_8054A8E4@l
    li r5, 0xb4
    li r6, 0x20
    bl fn_806959D8
lbl_fn_8054A924_00000BE4:
    mr r3, r30
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r31, 0x0
    ble lbl_fn_8054A924_00000C00
    mr r3, r30
    bl dtor_80084684
lbl_fn_8054A924_00000C00:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8054A9AC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8054A9AC_00001160
    lis r31, lbl_8075E49C@ha
    li r0, 0x1
    addi r31, r31, lbl_8075E49C@l
    stw r0, 0x48(r3)
    addi r4, r31, 0x1b
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x16e0(r30)
    li r4, 0x1
    bl fn_800D246C
    lwz r6, 0x16e0(r30)
    mr r3, r30
    addi r4, r31, 0x38
    li r5, 0x0
    lwz r0, 0xfc(r6)
    rlwinm r0, r0, 0, 2, 0
    stw r0, 0xfc(r6)
    lwz r6, 0x16e0(r30)
    lwz r0, 0xfc(r6)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r6)
    bl fn_801F3FF8
    stw r3, 0x16ec(r30)
    li r4, 0x1
    bl fn_800D246C
    lwz r4, 0x16ec(r30)
    addi r3, r31, 0x59
    lwz r0, 0xfc(r4)
    rlwinm r0, r0, 0, 2, 0
    stw r0, 0xfc(r4)
    lwz r4, 0x16ec(r30)
    lwz r0, 0xfc(r4)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r4)
    lwz r4, 0x16ec(r30)
    addi r29, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80887D64
    mr r4, r3
    mr r3, r29
    li r5, 0x2
    bl fn_801FED24
    mr r3, r30
    addi r4, r31, 0x63
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x16f8(r30)
    li r4, 0x1
    bl fn_800D246C
    lwz r6, 0x16f8(r30)
    mr r3, r30
    addi r4, r31, 0x80
    li r5, 0x0
    lwz r0, 0xfc(r6)
    rlwinm r0, r0, 0, 2, 0
    stw r0, 0xfc(r6)
    bl fn_801F3FF8
    stw r3, 0x1704(r30)
    li r4, 0x1
    lwz r0, 0xfc(r3)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r3)
    lwz r3, 0x1704(r30)
    bl fn_800D246C
    lwz r6, 0x1704(r30)
    mr r3, r30
    addi r4, r31, 0x9a
    li r5, 0x0
    lwz r0, 0xfc(r6)
    rlwinm r0, r0, 0, 2, 0
    stw r0, 0xfc(r6)
    lwz r6, 0x1704(r30)
    lwz r0, 0xfc(r6)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r6)
    bl fn_801F3FF8
    stw r3, 0x1710(r30)
    li r4, 0x1
    bl fn_800D246C
    lwz r6, 0x1710(r30)
    mr r3, r30
    addi r4, r31, 0xb5
    li r5, 0x0
    lwz r0, 0xfc(r6)
    rlwinm r0, r0, 0, 2, 0
    stw r0, 0xfc(r6)
    lwz r6, 0x1710(r30)
    lwz r0, 0xfc(r6)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r6)
    bl fn_801F3FF8
    stw r3, 0x171c(r30)
    li r4, 0x1
    bl fn_800D246C
    lwz r6, 0x171c(r30)
    mr r3, r30
    addi r4, r31, 0xd6
    li r5, 0x0
    lwz r0, 0xfc(r6)
    rlwinm r0, r0, 0, 2, 0
    stw r0, 0xfc(r6)
    lwz r6, 0x171c(r30)
    lwz r0, 0xfc(r6)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r6)
    bl fn_801F3FF8
    stw r3, 0x1728(r30)
    li r4, 0x1
    bl fn_800D246C
    lwz r6, 0x1728(r30)
    mr r3, r30
    addi r4, r31, 0xf6
    li r5, 0x0
    lwz r0, 0xfc(r6)
    rlwinm r0, r0, 0, 2, 0
    stw r0, 0xfc(r6)
    lwz r6, 0x1728(r30)
    lwz r0, 0xfc(r6)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r6)
    bl fn_801F3FF8
    stw r3, 0x1734(r30)
    li r4, 0x1
    bl fn_800D246C
    lwz r6, 0x1734(r30)
    mr r3, r30
    addi r4, r31, 0x115
    li r5, 0x0
    lwz r0, 0xfc(r6)
    rlwinm r0, r0, 0, 2, 0
    stw r0, 0xfc(r6)
    lwz r6, 0x1734(r30)
    lwz r0, 0xfc(r6)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r6)
    bl fn_801F3FF8
    stw r3, 0x1740(r30)
    li r4, 0x1
    bl fn_800D246C
    lwz r6, 0x1740(r30)
    mr r3, r30
    addi r4, r31, 0x135
    li r5, 0x0
    lwz r0, 0xfc(r6)
    rlwinm r0, r0, 0, 2, 0
    stw r0, 0xfc(r6)
    lwz r6, 0x1740(r30)
    lwz r0, 0xfc(r6)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r6)
    bl fn_801F3FF8
    stw r3, 0x174c(r30)
    li r4, 0x1
    bl fn_800D246C
    lwz r6, 0x174c(r30)
    mr r3, r30
    addi r4, r31, 0x157
    li r5, 0x0
    lwz r0, 0xfc(r6)
    rlwinm r0, r0, 0, 2, 0
    stw r0, 0xfc(r6)
    lwz r6, 0x174c(r30)
    lwz r0, 0xfc(r6)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r6)
    bl fn_801F3FF8
    stw r3, 0x1758(r30)
    li r4, 0x1
    bl fn_800D246C
    lwz r6, 0x1758(r30)
    mr r3, r30
    addi r4, r31, 0x177
    li r5, 0x0
    lwz r0, 0xfc(r6)
    rlwinm r0, r0, 0, 2, 0
    stw r0, 0xfc(r6)
    lwz r6, 0x1758(r30)
    lwz r0, 0xfc(r6)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r6)
    bl fn_801F3FF8
    stw r3, 0x1764(r30)
    li r4, 0x1
    bl fn_800D246C
    lwz r6, 0x1764(r30)
    mr r3, r30
    addi r4, r31, 0x197
    li r5, 0x0
    lwz r0, 0xfc(r6)
    rlwinm r0, r0, 0, 2, 0
    stw r0, 0xfc(r6)
    lwz r6, 0x1764(r30)
    lwz r0, 0xfc(r6)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r6)
    bl fn_801F3FF8
    stw r3, 0x1770(r30)
    li r4, 0x1
    bl fn_800D246C
    lwz r6, 0x1770(r30)
    mr r3, r30
    addi r4, r31, 0x1b4
    li r5, 0x0
    lwz r0, 0xfc(r6)
    rlwinm r0, r0, 0, 2, 0
    stw r0, 0xfc(r6)
    lwz r6, 0x1770(r30)
    lwz r0, 0xfc(r6)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r6)
    bl fn_801F3FF8
    stw r3, 0x177c(r30)
    li r4, 0x1
    bl fn_800D246C
    lwz r6, 0x177c(r30)
    mr r3, r30
    addi r4, r31, 0x1d7
    li r5, 0x0
    lwz r0, 0xfc(r6)
    rlwinm r0, r0, 0, 2, 0
    stw r0, 0xfc(r6)
    lwz r6, 0x177c(r30)
    lwz r0, 0xfc(r6)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r6)
    bl fn_801F3FF8
    stw r3, 0x1788(r30)
    li r4, 0x1
    bl fn_800D246C
    lwz r6, 0x1788(r30)
    mr r3, r30
    addi r4, r31, 0x1f7
    li r5, 0x0
    lwz r0, 0xfc(r6)
    rlwinm r0, r0, 0, 2, 0
    stw r0, 0xfc(r6)
    lwz r6, 0x1788(r30)
    lwz r0, 0xfc(r6)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r6)
    bl fn_801F3FF8
    stw r3, 0x1794(r30)
    li r4, 0x1
    bl fn_800D246C
    lwz r6, 0x1794(r30)
    mr r3, r30
    addi r4, r31, 0x20f
    li r5, 0x0
    lwz r0, 0xfc(r6)
    rlwinm r0, r0, 0, 2, 0
    stw r0, 0xfc(r6)
    lwz r6, 0x1794(r30)
    lwz r0, 0xfc(r6)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r6)
    bl fn_801F3FF8
    stw r3, 0x17a0(r30)
    li r4, 0x1
    bl fn_800D246C
    lwz r6, 0x17a0(r30)
    mr r3, r30
    addi r4, r31, 0x22e
    li r5, 0x0
    lwz r0, 0xfc(r6)
    rlwinm r0, r0, 0, 2, 0
    stw r0, 0xfc(r6)
    lwz r6, 0x17a0(r30)
    lwz r0, 0xfc(r6)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r6)
    bl fn_801F3FF8
    stw r3, 0x17ac(r30)
    li r4, 0x1
    bl fn_800D246C
    lwz r6, 0x17ac(r30)
    mr r3, r30
    addi r4, r31, 0x24c
    li r5, 0x0
    lwz r0, 0xfc(r6)
    rlwinm r0, r0, 0, 2, 0
    stw r0, 0xfc(r6)
    lwz r6, 0x17ac(r30)
    lwz r0, 0xfc(r6)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r6)
    bl fn_801F3FF8
    stw r3, 0x17b8(r30)
    li r4, 0x1
    bl fn_800D246C
    lwz r6, 0x17b8(r30)
    mr r3, r30
    addi r4, r31, 0x266
    li r5, 0x0
    lwz r0, 0xfc(r6)
    rlwinm r0, r0, 0, 2, 0
    stw r0, 0xfc(r6)
    lwz r6, 0x17b8(r30)
    lwz r0, 0xfc(r6)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r6)
    bl fn_801F3FF8
    stw r3, 0x17c4(r30)
    li r4, 0x1
    bl fn_800D246C
    lwz r6, 0x17c4(r30)
    mr r3, r30
    addi r4, r31, 0x288
    li r5, 0x0
    lwz r0, 0xfc(r6)
    rlwinm r0, r0, 0, 2, 0
    stw r0, 0xfc(r6)
    lwz r6, 0x17c4(r30)
    lwz r0, 0xfc(r6)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r6)
    bl fn_801F3FF8
    stw r3, 0x17d0(r30)
    li r4, 0x1
    bl fn_800D246C
    lwz r3, 0x17d0(r30)
    lwz r0, 0xfc(r3)
    rlwinm r0, r0, 0, 2, 0
    stw r0, 0xfc(r3)
    lwz r3, 0x17d0(r30)
    lwz r0, 0xfc(r3)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r3)
lbl_fn_8054A9AC_00001160:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8054AF0C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r0, 0x16e0(r3)
    stw r31, 0x48(r3)
    cmpwi r0, 0x0
    stw r31, 0x4c(r3)
    beq lbl_fn_8054AF0C_000011C0
    mr r3, r0
    bl fn_800D2338
    stw r31, 0x16e0(r28)
lbl_fn_8054AF0C_000011C0:
    mr r30, r28
    li r29, 0x0
    li r31, 0x0
lbl_fn_8054AF0C_000011CC:
    lwz r3, 0x16ec(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8054AF0C_000011E0
    bl fn_800D2338
    stw r31, 0x16ec(r30)
lbl_fn_8054AF0C_000011E0:
    addi r29, r29, 0x1
    addi r30, r30, 0xc
    cmpwi r29, 0x3
    blt lbl_fn_8054AF0C_000011CC
    mr r30, r28
    li r29, 0x0
    li r31, 0x0
lbl_fn_8054AF0C_000011FC:
    lwz r3, 0x1710(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8054AF0C_00001210
    bl fn_800D2338
    stw r31, 0x1710(r30)
lbl_fn_8054AF0C_00001210:
    addi r29, r29, 0x1
    addi r30, r30, 0xc
    cmpwi r29, 0xb
    blt lbl_fn_8054AF0C_000011FC
    mr r30, r28
    li r29, 0x0
    li r31, 0x0
lbl_fn_8054AF0C_0000122C:
    lwz r3, 0x1794(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8054AF0C_00001240
    bl fn_800D2338
    stw r31, 0x1794(r30)
lbl_fn_8054AF0C_00001240:
    addi r29, r29, 0x1
    addi r30, r30, 0xc
    cmpwi r29, 0x3
    blt lbl_fn_8054AF0C_0000122C
    lwz r3, 0x17b8(r28)
    cmpwi r3, 0x0
    beq lbl_fn_8054AF0C_00001268
    bl fn_800D2338
    li r0, 0x0
    stw r0, 0x17b8(r28)
lbl_fn_8054AF0C_00001268:
    lwz r3, 0x17c4(r28)
    cmpwi r3, 0x0
    beq lbl_fn_8054AF0C_00001280
    bl fn_800D2338
    li r0, 0x0
    stw r0, 0x17c4(r28)
lbl_fn_8054AF0C_00001280:
    lwz r3, 0x17d0(r28)
    cmpwi r3, 0x0
    beq lbl_fn_8054AF0C_00001298
    bl fn_800D2338
    li r0, 0x0
    stw r0, 0x17d0(r28)
lbl_fn_8054AF0C_00001298:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8054B048(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x1
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_800D3FA4
    cmpwi r3, 0x0
    bne lbl_fn_8054B048_000012E4
    li r31, 0x0
lbl_fn_8054B048_000012E4:
    cmpwi r31, 0x0
    beq lbl_fn_8054B048_000012F4
    li r0, 0x0
    stw r0, 0x4c(r30)
lbl_fn_8054B048_000012F4:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8054B0A0(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x40
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    bl _savegpr_21
    lis r4, lbl_8075E480@ha
    mr r22, r3
    lfd f31, lbl_8075E480@l(r4)
    addi r23, r3, 0x50
    li r28, 0x0
    lis r29, 0xb60b
    lis r27, 0x4330
    b lbl_fn_8054B0A0_00001560
lbl_fn_8054B0A0_0000134C:
    lwz r3, 0x0(r23)
    stw r27, 0x8(r1)
    addi r3, r3, 0x1
    xoris r0, r3, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    stw r3, 0x0(r23)
    fsubs f3, f0, f31
    lfs f0, 0x4(r23)
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_8054B0A0_0000155C
    lwz r0, 0x94(r23)
    cmpwi r0, 0x0
    beq lbl_fn_8054B0A0_0000138C
    stw r28, 0x94(r23)
lbl_fn_8054B0A0_0000138C:
    lwz r0, 0x90(r23)
    cmpwi r0, 0x0
    beq lbl_fn_8054B0A0_0000139C
    stw r28, 0x90(r23)
lbl_fn_8054B0A0_0000139C:
    lwz r0, 0x98(r23)
    cmpwi r0, 0x0
    beq lbl_fn_8054B0A0_000013AC
    stw r28, 0x98(r23)
lbl_fn_8054B0A0_000013AC:
    lwz r0, 0x9c(r23)
    cmpwi r0, 0x0
    beq lbl_fn_8054B0A0_000013BC
    stw r28, 0x9c(r23)
lbl_fn_8054B0A0_000013BC:
    lwz r0, 0xa0(r23)
    cmpwi r0, 0x0
    beq lbl_fn_8054B0A0_000013CC
    stw r28, 0xa0(r23)
lbl_fn_8054B0A0_000013CC:
    lwz r0, 0xa4(r23)
    cmpwi r0, 0x0
    beq lbl_fn_8054B0A0_000013DC
    stw r28, 0xa4(r23)
lbl_fn_8054B0A0_000013DC:
    lwz r0, 0xa8(r23)
    cmpwi r0, 0x0
    beq lbl_fn_8054B0A0_000013EC
    stw r28, 0xa8(r23)
lbl_fn_8054B0A0_000013EC:
    lwz r0, 0xac(r23)
    cmpwi r0, 0x0
    beq lbl_fn_8054B0A0_000013FC
    stw r28, 0xac(r23)
lbl_fn_8054B0A0_000013FC:
    addi r26, r22, 0x4c
    addi r3, r29, 0x60b7
    addi r0, r26, 0x4
    subf r0, r0, r23
    mulhw r3, r3, r0
    add r0, r3, r0
    srawi r0, r0, 7
    srwi r3, r0, 31
    add r25, r0, r3
    mulli r21, r25, 0xb4
    b lbl_fn_8054B0A0_00001544
lbl_fn_8054B0A0_00001428:
    addi r0, r25, 0x1
    add r31, r26, r21
    mulli r3, r0, 0xb4
    addi r0, r31, 0x24
    add r30, r26, r3
    lwz r3, 0x4(r30)
    addi r24, r30, 0x24
    stw r3, 0x4(r31)
    cmplw r24, r0
    lfs f0, 0x8(r30)
    stfs f0, 0x8(r31)
    lfs f0, 0xc(r30)
    stfs f0, 0xc(r31)
    lwz r0, 0x10(r30)
    stw r0, 0x10(r31)
    lwz r0, 0x14(r30)
    stw r0, 0x14(r31)
    lwz r0, 0x18(r30)
    stw r0, 0x18(r31)
    lwz r0, 0x1c(r30)
    stw r0, 0x1c(r31)
    lwz r0, 0x20(r30)
    stw r0, 0x20(r31)
    beq lbl_fn_8054B0A0_000014A4
    mr r3, r24
    bl fn_80686A48
    mr r5, r3
    mr r4, r24
    addi r3, r31, 0x24
    addi r5, r5, 0x1
    bl fn_806846C4
lbl_fn_8054B0A0_000014A4:
    lfs f2, 0x6c(r30)
    addi r25, r25, 0x1
    psq_l f1, 0x64(r30), 0, 0
    addi r21, r21, 0xb4
    psq_st f1, 0x64(r31), 0, 0
    stfs f2, 0x6c(r31)
    lfs f2, 0x78(r30)
    psq_l f1, 0x70(r30), 0, 0
    psq_st f1, 0x70(r31), 0, 0
    stfs f2, 0x78(r31)
    lwz r0, 0x7c(r30)
    stw r0, 0x7c(r31)
    lwz r0, 0x80(r30)
    stw r0, 0x80(r31)
    lwz r0, 0x84(r30)
    stw r0, 0x84(r31)
    lwz r0, 0x88(r30)
    stw r0, 0x88(r31)
    lwz r0, 0x8c(r30)
    stw r0, 0x8c(r31)
    lwz r0, 0x90(r30)
    stw r0, 0x90(r31)
    lwz r0, 0x94(r30)
    stw r0, 0x94(r31)
    lwz r0, 0x98(r30)
    stw r0, 0x98(r31)
    lwz r0, 0x9c(r30)
    stw r0, 0x9c(r31)
    lwz r0, 0xa0(r30)
    stw r0, 0xa0(r31)
    lwz r0, 0xa4(r30)
    stw r0, 0xa4(r31)
    lwz r0, 0xa8(r30)
    stw r0, 0xa8(r31)
    lwz r0, 0xac(r30)
    stw r0, 0xac(r31)
    lwz r0, 0xb0(r30)
    stw r0, 0xb0(r31)
    lwz r0, 0xb4(r30)
    stw r0, 0xb4(r31)
lbl_fn_8054B0A0_00001544:
    lwz r3, 0x0(r26)
    subi r0, r3, 0x1
    cmplw r25, r0
    blt lbl_fn_8054B0A0_00001428
    stw r0, 0x0(r26)
    b lbl_fn_8054B0A0_00001560
lbl_fn_8054B0A0_0000155C:
    addi r23, r23, 0xb4
lbl_fn_8054B0A0_00001560:
    lwz r0, 0x4c(r22)
    mulli r0, r0, 0xb4
    add r3, r22, r0
    addi r0, r3, 0x50
    cmplw r23, r0
    bne lbl_fn_8054B0A0_0000134C
    addi r11, r1, 0x40
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    bl _restgpr_21
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8054B328(void)
{
    nofralloc
    stwu r1, -0x2d0(r1)
    mflr r0
    stw r0, 0x2d4(r1)
    addi r11, r1, 0x1b0
    stfd f31, 0x2c0(r1)
    psq_st f31, 0x2c8(r1), 0, 0
    stfd f30, 0x2b0(r1)
    psq_st f30, 0x2b8(r1), 0, 0
    stfd f29, 0x2a0(r1)
    psq_st f29, 0x2a8(r1), 0, 0
    stfd f28, 0x290(r1)
    psq_st f28, 0x298(r1), 0, 0
    stfd f27, 0x280(r1)
    psq_st f27, 0x288(r1), 0, 0
    stfd f26, 0x270(r1)
    psq_st f26, 0x278(r1), 0, 0
    stfd f25, 0x260(r1)
    psq_st f25, 0x268(r1), 0, 0
    stfd f24, 0x250(r1)
    psq_st f24, 0x258(r1), 0, 0
    stfd f23, 0x240(r1)
    psq_st f23, 0x248(r1), 0, 0
    stfd f22, 0x230(r1)
    psq_st f22, 0x238(r1), 0, 0
    stfd f21, 0x220(r1)
    psq_st f21, 0x228(r1), 0, 0
    stfd f20, 0x210(r1)
    psq_st f20, 0x218(r1), 0, 0
    stfd f19, 0x200(r1)
    psq_st f19, 0x208(r1), 0, 0
    stfd f18, 0x1f0(r1)
    psq_st f18, 0x1f8(r1), 0, 0
    stfd f17, 0x1e0(r1)
    psq_st f17, 0x1e8(r1), 0, 0
    stfd f16, 0x1d0(r1)
    psq_st f16, 0x1d8(r1), 0, 0
    stfd f15, 0x1c0(r1)
    psq_st f15, 0x1c8(r1), 0, 0
    stfd f14, 0x1b0(r1)
    psq_st f14, 0x1b8(r1), 0, 0
    bl _savegpr_16
    lwz r4, lbl_8087F8A0
    lis r0, 0x4330
    stw r0, 0xb0(r1)
    mr r16, r3
    lwz r4, 0x48(r4)
    stw r0, 0xb8(r1)
    cmpwi r4, 0x0
    lfs f20, lbl_80887D68
    beq lbl_fn_8054B328_00001698
    lwz r0, 0x12a4(r4)
    extrwi. r5, r0, 1, 25
    bne lbl_fn_8054B328_00001694
    srwi. r0, r0, 31
    beq lbl_fn_8054B328_00001698
    li r5, 0x0
    beq lbl_fn_8054B328_0000168C
    lwz r0, 0xc48(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8054B328_0000168C
    li r5, 0x1
lbl_fn_8054B328_0000168C:
    cmpwi r5, 0x0
    beq lbl_fn_8054B328_00001698
lbl_fn_8054B328_00001694:
    lfs f20, lbl_80887D6C
lbl_fn_8054B328_00001698:
    lfs f0, lbl_80887D98
    lis r6, lbl_8075E480@ha
    stfd f0, 0xe8(r1)
    lis r5, lbl_8075E49C@ha
    lfs f0, lbl_80887DA0
    lis r30, lbl_80794AC0@ha
    stfd f0, 0xf0(r1)
    lis r4, lbl_8075E488@ha
    lfs f0, lbl_80887D7C
    addi r19, r3, 0x50
    stfd f0, 0xc8(r1)
    addi r20, r1, 0x12
    lfs f0, lbl_80887D88
    addi r23, r1, 0x64
    stfd f0, 0xd0(r1)
    addi r21, r1, 0x28
    lfs f0, lbl_80887D8C
    addi r22, r1, 0x58
    stfd f0, 0xd8(r1)
    addi r27, r5, lbl_8075E49C@l
    lfs f0, lbl_80887D90
    addi r31, r30, lbl_80794AC0@l
    stfd f0, 0xe0(r1)
    lis r24, 0x34
    lfs f0, lbl_80887DB4
    lis r26, 0x89
    stfd f0, 0xf8(r1)
    lis r25, 0x100
    lfd f0, lbl_8075E488@l(r4)
    li r28, 0x0
    stfd f0, 0x100(r1)
    lis r29, 0x80
    lfs f0, lbl_80887DD4
    stfd f0, 0x108(r1)
    lfs f0, lbl_80887DD8
    stfd f0, 0x110(r1)
    lfs f0, lbl_80887DDC
    stfd f0, 0x118(r1)
    lfs f0, lbl_80887DE0
    stfd f0, 0x120(r1)
    lfs f0, lbl_80887DE4
    stfd f0, 0x128(r1)
    lfs f0, lbl_80887DE8
    stfd f0, 0x130(r1)
    lfs f0, lbl_80887DEC
    stfd f0, 0x138(r1)
    lfs f0, lbl_80887DF0
    stfd f0, 0x140(r1)
    lfs f0, lbl_80887DF4
    stfd f0, 0x148(r1)
    lfs f0, lbl_80887DF8
    stfd f0, 0x150(r1)
    lfs f0, lbl_80887DFC
    stfd f0, 0x158(r1)
    lfs f0, lbl_80887E00
    lfs f21, lbl_80887D60
    lfd f22, lbl_8075E480@l(r6)
    lfs f23, lbl_80887D94
    lfs f24, lbl_80887D84
    lfs f25, lbl_80887D80
    lfs f26, lbl_80887DA4
    lfs f27, lbl_80887D78
    lfs f28, lbl_80887DA8
    lfs f29, lbl_80887DB0
    lfs f14, lbl_80887D70
    lfs f30, lbl_80887D64
    lfs f31, lbl_80887D9C
    stfd f0, 0x160(r1)
    b lbl_fn_8054B328_00003948
lbl_fn_8054B328_000017AC:
    psq_l f1, 0x60(r19), 0, 0
    lfs f2, 0x68(r19)
    stfs f2, 0x6c(r1)
    psq_st f1, 0x0(r23), 0, 0
    lwz r3, 0xb0(r19)
    cmpwi r3, 0x0
    beq lbl_fn_8054B328_00001804
    frsp f0, f2
    lfs f5, 0x2c(r3)
    lfs f6, 0x1c(r3)
    lfs f7, 0xc(r3)
    lfs f4, 0x64(r1)
    fadds f0, f0, f5
    lfs f3, 0x68(r1)
    fadds f4, f4, f7
    stfs f7, 0x34(r1)
    fadds f3, f3, f6
    stfs f6, 0x38(r1)
    stfs f5, 0x3c(r1)
    stfs f4, 0x64(r1)
    stfs f3, 0x68(r1)
    stfs f0, 0x6c(r1)
lbl_fn_8054B328_00001804:
    lwz r4, lbl_8087EFB4
    addi r3, r1, 0x58
    addi r5, r1, 0x64
    bl fn_800BFAC8
    lfs f3, 0x58(r1)
    lfs f0, 0x6c(r19)
    lfs f4, 0x5c(r1)
    fadds f0, f3, f0
    lfs f3, 0x60(r1)
    stfs f0, 0x58(r1)
    lfs f0, 0x70(r19)
    fadds f0, f4, f0
    stfs f0, 0x5c(r1)
    lfs f0, 0x74(r19)
    fadds f0, f3, f0
    stfs f0, 0x60(r1)
    fcmpo cr0, f0, f21
    blt lbl_fn_8054B328_00003944
    fcmpo cr0, f0, f14
    bgt lbl_fn_8054B328_00003944
    lwz r0, 0x1c(r19)
    lfs f19, lbl_80887D74
    cmpwi r0, 0x0
    bne lbl_fn_8054B328_0000186C
    fmuls f19, f19, f27
    b lbl_fn_8054B328_0000187C
lbl_fn_8054B328_0000186C:
    cmpwi r0, 0x2
    bne lbl_fn_8054B328_0000187C
    lfd f0, 0xc8(r1)
    fmuls f19, f19, f0
lbl_fn_8054B328_0000187C:
    lwz r3, lbl_8087F430
    lfs f18, lbl_80887D70
    lwz r0, 0xd18(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8054B328_000018A8
    lwz r0, 0x10(r19)
    cmpwi r0, 0x0
    beq lbl_fn_8054B328_000018A4
    cmpwi r0, 0x4
    bne lbl_fn_8054B328_000018A8
lbl_fn_8054B328_000018A4:
    fmuls f18, f18, f25
lbl_fn_8054B328_000018A8:
    lwz r0, 0x14(r19)
    fmuls f19, f19, f18
    lis r17, 0xff00
    rlwinm r3, r0, 0, 13, 13
    subis r0, r3, 0x4
    cmplwi r0, 0x0
    bne lbl_fn_8054B328_00001A88
    lwz r3, lbl_8087EEE0
    fmr f1, f19
    fmr f2, f21
    stfs f21, 0x54(r1)
    lwz r0, 0x40(r3)
    addi r4, r19, 0x20
    lwz r3, 0x3c(r3)
    xoris r0, r0, 0x8000
    stw r0, 0xb4(r1)
    xoris r0, r3, 0x8000
    lwz r3, lbl_8087EEC8
    li r5, 0x1
    lfd f0, 0xb0(r1)
    li r6, 0x1
    stw r0, 0xbc(r1)
    fsubs f4, f0, f22
    stw r0, 0xb4(r1)
    lfd f3, 0xb8(r1)
    fmuls f5, f24, f4
    lfd f0, 0xb0(r1)
    fsubs f4, f3, f22
    fsubs f3, f0, f22
    lfd f0, 0xd0(r1)
    stfs f5, 0x50(r1)
    fmuls f4, f24, f4
    fmuls f0, f0, f3
    stfs f4, 0x4c(r1)
    fmuls f15, f24, f0
    bl fn_8006EF48
    frsp f0, f21
    lfs f3, 0x60(r1)
    lfs f5, 0x5c(r1)
    fmr f16, f1
    lfs f4, 0x50(r1)
    addi r3, r1, 0x40
    fsubs f6, f3, f0
    lfs f3, 0x58(r1)
    lfs f0, 0x4c(r1)
    fsubs f4, f5, f4
    stfs f6, 0x48(r1)
    fsubs f0, f3, f0
    stfs f4, 0x44(r1)
    stfs f0, 0x40(r1)
    bl fn_805F9940
    fcmpo cr0, f1, f15
    ble lbl_fn_8054B328_000019DC
    addi r3, r1, 0x40
    mr r4, r3
    bl fn_805F98D0
    lfs f4, 0x48(r1)
    lfs f0, 0x44(r1)
    lfs f3, 0x40(r1)
    fmuls f4, f4, f15
    fmuls f5, f0, f15
    fmuls f6, f3, f15
    lfs f3, 0x50(r1)
    frsp f0, f21
    stfs f5, 0x20(r1)
    fadds f3, f5, f3
    stfs f6, 0x1c(r1)
    fadds f2, f4, f0
    lfs f0, 0x4c(r1)
    stfs f3, 0x2c(r1)
    fadds f0, f6, f0
    stfs f4, 0x24(r1)
    stfs f0, 0x28(r1)
    psq_l f1, 0x0(r21), 0, 0
    stfs f2, 0x30(r1)
    psq_st f1, 0x0(r22), 0, 0
    stfs f2, 0x60(r1)
lbl_fn_8054B328_000019DC:
    lfd f0, 0xd8(r1)
    lfs f4, 0x58(r1)
    fadds f3, f0, f16
    fcmpo cr0, f4, f3
    bge lbl_fn_8054B328_000019F8
    stfs f3, 0x58(r1)
    b lbl_fn_8054B328_00001A30
lbl_fn_8054B328_000019F8:
    lwz r3, lbl_8087EEE0
    lwz r0, 0x3c(r3)
    xoris r0, r0, 0x8000
    stw r0, 0xbc(r1)
    lfd f0, 0xb8(r1)
    fsubs f0, f0, f22
    fsubs f0, f0, f3
    fcmpo cr0, f4, f0
    ble lbl_fn_8054B328_00001A30
    stw r0, 0xb4(r1)
    lfd f0, 0xb0(r1)
    fsubs f0, f0, f22
    fsubs f0, f0, f3
    stfs f0, 0x58(r1)
lbl_fn_8054B328_00001A30:
    lfs f4, 0x5c(r1)
    lfd f0, 0xe0(r1)
    fcmpo cr0, f4, f0
    bge lbl_fn_8054B328_00001A48
    stfs f0, 0x5c(r1)
    b lbl_fn_8054B328_00001A88
lbl_fn_8054B328_00001A48:
    lwz r3, lbl_8087EEE0
    lfd f0, 0xd8(r1)
    lwz r0, 0x40(r3)
    fadds f3, f0, f19
    xoris r0, r0, 0x8000
    stw r0, 0xbc(r1)
    lfd f0, 0xb8(r1)
    fsubs f0, f0, f22
    fsubs f0, f0, f3
    fcmpo cr0, f4, f0
    ble lbl_fn_8054B328_00001A88
    stw r0, 0xb4(r1)
    lfd f0, 0xb0(r1)
    fsubs f0, f0, f22
    fsubs f0, f0, f3
    stfs f0, 0x5c(r1)
lbl_fn_8054B328_00001A88:
    lwz r0, 0x10(r19)
    lfs f17, 0x5c(r1)
    cmplwi r0, 0x1
    ble lbl_fn_8054B328_00001ABC
    cmpwi r0, 0x3
    beq lbl_fn_8054B328_00001BBC
    cmpwi r0, 0x4
    beq lbl_fn_8054B328_00001D28
    cmpwi r0, 0x5
    beq lbl_fn_8054B328_00001EAC
    cmpwi r0, 0x8
    beq lbl_fn_8054B328_00002018
    b lbl_fn_8054B328_00002190
lbl_fn_8054B328_00001ABC:
    lwz r0, 0x14(r19)
    rlwinm r0, r0, 0, 28, 28
    cmplwi r0, 0x8
    beq lbl_fn_8054B328_00001B44
    lwz r0, 0x0(r19)
    lfs f4, lbl_80887D70
    xoris r0, r0, 0x8000
    stw r0, 0xbc(r1)
    lfd f0, 0xb8(r1)
    fsubs f0, f0, f22
    fcmpo cr0, f0, f23
    bge lbl_fn_8054B328_00001B00
    stw r0, 0xb4(r1)
    lfd f0, 0xb0(r1)
    fsubs f0, f0, f22
    fdivs f4, f0, f23
    b lbl_fn_8054B328_00001B30
lbl_fn_8054B328_00001B00:
    stw r0, 0xbc(r1)
    lfs f3, 0x4(r19)
    lfd f0, 0xb8(r1)
    fsubs f0, f0, f22
    fsubs f0, f3, f0
    fcmpo cr0, f0, f23
    bge lbl_fn_8054B328_00001B30
    stw r0, 0xb4(r1)
    lfd f0, 0xb0(r1)
    fsubs f0, f0, f22
    fsubs f0, f3, f0
    fdivs f4, f0, f23
lbl_fn_8054B328_00001B30:
    lfd f0, 0xe8(r1)
    fmuls f1, f0, f4
    bl fn_80695D84
    slwi r17, r3, 24
    b lbl_fn_8054B328_00002190
lbl_fn_8054B328_00001B44:
    lwz r0, 0x0(r19)
    lfs f4, lbl_80887D70
    xoris r0, r0, 0x8000
    stw r0, 0xbc(r1)
    lfd f0, 0xb8(r1)
    fsubs f0, f0, f22
    fcmpo cr0, f0, f23
    bge lbl_fn_8054B328_00001B78
    stw r0, 0xb4(r1)
    lfd f0, 0xb0(r1)
    fsubs f0, f0, f22
    fdivs f4, f0, f23
    b lbl_fn_8054B328_00001BA8
lbl_fn_8054B328_00001B78:
    stw r0, 0xbc(r1)
    lfs f3, 0x4(r19)
    lfd f0, 0xb8(r1)
    fsubs f0, f0, f22
    fsubs f0, f3, f0
    fcmpo cr0, f0, f23
    bge lbl_fn_8054B328_00001BA8
    stw r0, 0xb4(r1)
    lfd f0, 0xb0(r1)
    fsubs f0, f0, f22
    fsubs f0, f3, f0
    fdivs f4, f0, f23
lbl_fn_8054B328_00001BA8:
    lfd f0, 0xe8(r1)
    fmuls f1, f0, f4
    bl fn_80695D84
    slwi r17, r3, 24
    b lbl_fn_8054B328_00002190
lbl_fn_8054B328_00001BBC:
    lwz r3, 0x0(r19)
    lfs f5, lbl_80887D70
    xoris r0, r3, 0x8000
    stw r0, 0xbc(r1)
    fmr f0, f5
    lfs f15, lbl_80887D9C
    lfd f3, 0xb8(r1)
    fsubs f3, f3, f22
    fcmpo cr0, f3, f23
    bge lbl_fn_8054B328_00001BF8
    stw r0, 0xb4(r1)
    lfd f3, 0xb0(r1)
    fsubs f3, f3, f22
    fdivs f5, f3, f23
    b lbl_fn_8054B328_00001C28
lbl_fn_8054B328_00001BF8:
    stw r0, 0xbc(r1)
    lfs f4, 0x4(r19)
    lfd f3, 0xb8(r1)
    fsubs f3, f3, f22
    fsubs f3, f4, f3
    fcmpo cr0, f3, f23
    bge lbl_fn_8054B328_00001C28
    stw r0, 0xb4(r1)
    lfd f3, 0xb0(r1)
    fsubs f3, f3, f22
    fsubs f3, f4, f3
    fdivs f5, f3, f23
lbl_fn_8054B328_00001C28:
    lfs f3, 0x4(r19)
    fcmpo cr0, f3, f21
    ble lbl_fn_8054B328_00001C48
    xoris r0, r3, 0x8000
    stw r0, 0xbc(r1)
    lfd f0, 0xb8(r1)
    fsubs f0, f0, f22
    fdivs f0, f0, f3
lbl_fn_8054B328_00001C48:
    fmuls f15, f15, f0
    lfd f0, 0xf0(r1)
    fmuls f1, f0, f5
    bl fn_80695D84
    fmr f1, f19
    slwi r17, r3, 24
    lwz r3, lbl_8087EEC8
    addi r4, r19, 0x20
    lfs f2, lbl_80887D60
    li r5, 0x1
    li r6, 0x1
    bl fn_8006EF48
    lwz r0, 0x10(r19)
    fsubs f17, f17, f15
    lfs f0, 0x58(r1)
    subi r18, r24, 0x3400
    cmpwi r0, 0x3
    fnmsubs f15, f24, f1, f0
    bne lbl_fn_8054B328_00001C9C
    lwz r0, 0x78(r19)
    clrlwi r18, r0, 8
lbl_fn_8054B328_00001C9C:
    lfs f6, lbl_80887D60
    fmr f3, f20
    fmr f4, f19
    lwz r3, lbl_8087EEB0
    fmr f5, f19
    addi r4, r19, 0x20
    fmr f7, f6
    fmr f8, f6
    fadds f1, f25, f15
    lis r5, 0xa000
    fadds f2, f25, f17
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
    lfs f6, lbl_80887D60
    fmr f1, f15
    fmr f2, f17
    lwz r3, lbl_8087EEB0
    fmr f3, f20
    addi r4, r19, 0x20
    fmr f4, f19
    fmr f5, f19
    fmr f7, f6
    or r5, r18, r17
    fmr f8, f6
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
    b lbl_fn_8054B328_00002190
lbl_fn_8054B328_00001D28:
    fmr f1, f19
    lwz r3, lbl_8087EEC8
    lfs f2, lbl_80887D60
    addi r4, r19, 0x20
    li r5, 0x1
    li r6, 0x1
    bl fn_8006EF48
    lfs f0, 0x58(r1)
    fnmsubs f17, f26, f19, f17
    lfs f6, lbl_80887D60
    fmr f4, f19
    fnmsubs f15, f24, f1, f0
    lwz r3, lbl_8087EEB0
    fmr f2, f17
    fmr f5, f19
    mr r5, r17
    fmr f7, f6
    fmr f8, f6
    addi r4, r19, 0x20
    fadds f1, f27, f15
    fadds f3, f28, f20
    li r6, 0x1
    li r7, 0x4
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
    lfs f6, lbl_80887D60
    fmr f1, f15
    fmr f4, f19
    lwz r3, lbl_8087EEB0
    fmr f5, f19
    mr r5, r17
    fmr f7, f6
    fmr f8, f6
    fadds f2, f27, f17
    addi r4, r19, 0x20
    fadds f3, f28, f20
    li r6, 0x1
    li r7, 0x4
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
    lfs f6, lbl_80887D60
    fmr f2, f17
    fmr f4, f19
    lwz r3, lbl_8087EEB0
    fmr f5, f19
    mr r5, r17
    fmr f7, f6
    fmr f8, f6
    fsubs f1, f15, f27
    addi r4, r19, 0x20
    fadds f3, f28, f20
    li r6, 0x1
    li r7, 0x4
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
    lfs f6, lbl_80887D60
    fmr f1, f15
    fmr f4, f19
    lwz r3, lbl_8087EEB0
    fmr f5, f19
    mr r5, r17
    fmr f7, f6
    fmr f8, f6
    fsubs f2, f17, f27
    addi r4, r19, 0x20
    fadds f3, f28, f20
    li r6, 0x1
    li r7, 0x4
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
    lfs f6, lbl_80887D60
    oris r5, r17, 0xff
    fmr f1, f15
    lwz r3, lbl_8087EEB0
    fmr f2, f17
    addi r4, r19, 0x20
    fmr f3, f20
    ori r5, r5, 0xc040
    fmr f4, f19
    li r6, 0x1
    fmr f5, f19
    li r7, 0x4
    fmr f7, f6
    li r8, 0x0
    fmr f8, f6
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
    b lbl_fn_8054B328_00002190
lbl_fn_8054B328_00001EAC:
    lwz r3, 0x0(r19)
    lfs f0, lbl_80887D70
    xoris r0, r3, 0x8000
    stw r0, 0xb4(r1)
    lfs f15, lbl_80887DAC
    lfd f3, 0xb0(r1)
    fsubs f3, f3, f22
    fcmpo cr0, f3, f29
    bge lbl_fn_8054B328_00001EE4
    stw r0, 0xbc(r1)
    lfd f0, 0xb8(r1)
    fsubs f0, f0, f22
    fdivs f0, f0, f29
    b lbl_fn_8054B328_00001F14
lbl_fn_8054B328_00001EE4:
    stw r0, 0xb4(r1)
    lfs f4, 0x4(r19)
    lfd f3, 0xb0(r1)
    fsubs f3, f3, f22
    fsubs f3, f4, f3
    fcmpo cr0, f3, f29
    bge lbl_fn_8054B328_00001F14
    stw r0, 0xbc(r1)
    lfd f0, 0xb8(r1)
    fsubs f0, f0, f22
    fsubs f0, f4, f0
    fdivs f0, f0, f29
lbl_fn_8054B328_00001F14:
    xoris r0, r3, 0x8000
    stw r0, 0xb4(r1)
    lfd f3, 0xb0(r1)
    fsubs f3, f3, f22
    fdivs f3, f3, f29
    fcmpo cr0, f14, f3
    bge lbl_fn_8054B328_00001F38
    fmr f3, f14
    b lbl_fn_8054B328_00001F48
lbl_fn_8054B328_00001F38:
    stw r0, 0xbc(r1)
    lfd f3, 0xb8(r1)
    fsubs f3, f3, f22
    fdivs f3, f3, f29
lbl_fn_8054B328_00001F48:
    fmuls f15, f15, f3
    lfd f3, 0xf0(r1)
    fmuls f1, f3, f0
    bl fn_80695D84
    fmr f1, f19
    slwi r17, r3, 24
    lwz r3, lbl_8087EEC8
    addi r4, r19, 0x20
    lfs f2, lbl_80887D60
    li r5, 0x1
    li r6, 0x1
    bl fn_8006EF48
    lfs f0, 0x58(r1)
    fsubs f17, f17, f15
    lfs f6, lbl_80887D60
    fmr f3, f20
    fnmsubs f15, f24, f1, f0
    lwz r0, 0x78(r19)
    fmr f4, f19
    fmr f5, f19
    lwz r3, lbl_8087EEB0
    fmr f7, f6
    fmr f8, f6
    clrlwi r18, r0, 8
    fadds f1, f25, f15
    fadds f2, f25, f17
    addi r4, r19, 0x20
    lis r5, 0xa000
    li r6, 0x1
    li r7, 0x4
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
    lfs f6, lbl_80887D60
    fmr f1, f15
    fmr f2, f17
    lwz r3, lbl_8087EEB0
    fmr f3, f20
    addi r4, r19, 0x20
    fmr f4, f19
    fmr f5, f19
    fmr f7, f6
    or r5, r18, r17
    fmr f8, f6
    li r6, 0x1
    li r7, 0x4
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
    b lbl_fn_8054B328_00002190
lbl_fn_8054B328_00002018:
    lwz r3, 0x0(r19)
    lfs f5, lbl_80887D70
    xoris r0, r3, 0x8000
    stw r0, 0xb4(r1)
    fmr f0, f5
    lwz r18, 0x78(r19)
    lfd f3, 0xb0(r1)
    lfs f16, lbl_80887D8C
    fsubs f3, f3, f22
    fcmpo cr0, f3, f23
    bge lbl_fn_8054B328_00002058
    stw r0, 0xbc(r1)
    lfd f3, 0xb8(r1)
    fsubs f3, f3, f22
    fdivs f5, f3, f23
    b lbl_fn_8054B328_00002088
lbl_fn_8054B328_00002058:
    stw r0, 0xb4(r1)
    lfs f4, 0x4(r19)
    lfd f3, 0xb0(r1)
    fsubs f3, f3, f22
    fsubs f3, f4, f3
    fcmpo cr0, f3, f23
    bge lbl_fn_8054B328_00002088
    stw r0, 0xbc(r1)
    lfd f3, 0xb8(r1)
    fsubs f3, f3, f22
    fsubs f3, f4, f3
    fdivs f5, f3, f23
lbl_fn_8054B328_00002088:
    lfs f3, 0x4(r19)
    fcmpo cr0, f3, f21
    ble lbl_fn_8054B328_000020A8
    xoris r0, r3, 0x8000
    stw r0, 0xb4(r1)
    lfd f0, 0xb0(r1)
    fsubs f0, f0, f22
    fdivs f0, f0, f3
lbl_fn_8054B328_000020A8:
    fmuls f16, f16, f0
    lfd f0, 0xf8(r1)
    fmuls f1, f0, f5
    bl fn_80695D84
    fmuls f19, f19, f30
    slwi r17, r3, 24
    lwz r3, lbl_8087EEC8
    addi r4, r19, 0x20
    lfs f2, lbl_80887D60
    li r5, 0x1
    fmr f1, f19
    li r6, 0x1
    bl fn_8006EF48
    lfs f0, 0x58(r1)
    cmpwi r18, 0x0
    fnmsubs f15, f24, f1, f0
    ble lbl_fn_8054B328_000020F4
    fsubs f17, f17, f16
    b lbl_fn_8054B328_000020F8
lbl_fn_8054B328_000020F4:
    fadds f17, f17, f16
lbl_fn_8054B328_000020F8:
    cmpwi r18, 0x0
    subi r18, r25, 0x1
    bgt lbl_fn_8054B328_00002108
    subi r18, r26, 0x7778
lbl_fn_8054B328_00002108:
    lfs f6, lbl_80887D60
    fmr f3, f20
    fmr f4, f19
    lwz r3, lbl_8087EEB0
    fmr f5, f19
    addi r4, r19, 0x20
    fmr f7, f6
    fmr f8, f6
    fadds f1, f25, f15
    lis r5, 0xa000
    fadds f2, f25, f17
    li r6, 0x1
    li r7, 0x4
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
    lfs f6, lbl_80887D60
    fmr f1, f15
    fmr f2, f17
    lwz r3, lbl_8087EEB0
    fmr f3, f20
    addi r4, r19, 0x20
    fmr f4, f19
    fmr f5, f19
    fmr f7, f6
    or r5, r18, r17
    fmr f8, f6
    li r6, 0x1
    li r7, 0x4
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
lbl_fn_8054B328_00002190:
    lwz r4, 0xa4(r19)
    cmpwi r4, 0x0
    beq lbl_fn_8054B328_000022DC
    lwz r0, 0x0(r19)
    addi r3, r27, 0x59
    lwz r4, 0x4(r4)
    xoris r0, r0, 0x8000
    stw r0, 0xbc(r1)
    lfd f0, 0xb8(r1)
    fsubs f0, f0, f22
    stfs f0, 0x100(r4)
    lwz r4, 0xa4(r19)
    lfs f15, 0x58(r1)
    lwz r4, 0x4(r4)
    addi r18, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f15
    mr r4, r3
    mr r3, r18
    li r5, 0x0
    bl fn_801FED24
    lwz r4, 0xa4(r19)
    addi r3, r27, 0x59
    lwz r4, 0x4(r4)
    addi r18, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f17
    mr r4, r3
    mr r3, r18
    li r5, 0x1
    bl fn_801FED24
    lwz r4, 0xa4(r19)
    addi r3, r27, 0x59
    lwz r4, 0x4(r4)
    addi r18, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f18
    mr r4, r3
    mr r3, r18
    li r5, 0x2
    bl fn_801FED24
    lwz r4, 0xa4(r19)
    addi r3, r27, 0x59
    lwz r4, 0x4(r4)
    addi r18, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f18
    mr r4, r3
    mr r3, r18
    li r5, 0x3
    bl fn_801FED24
    lwz r4, 0xa4(r19)
    addi r3, r27, 0x59
    lwz r4, 0x4(r4)
    addi r18, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f20
    mr r4, r3
    mr r3, r18
    li r5, 0x4
    bl fn_801FED24
    lwz r0, 0x78(r19)
    addi r3, r27, 0x2a8
    stw r0, 0xb4(r1)
    lwz r4, 0xa4(r19)
    lfd f3, 0xb0(r1)
    lfd f0, 0x100(r1)
    lwz r4, 0x4(r4)
    fsubs f15, f3, f0
    addi r18, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f15
    mr r4, r3
    mr r3, r18
    bl fn_801FECE0
    lwz r3, 0xa4(r19)
    lwz r3, 0x4(r3)
    bl fn_801F4484
    lwz r3, 0xa4(r19)
    li r4, 0x1
    lwz r3, 0x4(r3)
    bl fn_801F465C
    fnmsubs f17, f31, f18, f17
lbl_fn_8054B328_000022DC:
    lwz r0, 0x9c(r19)
    cmpwi r0, 0x0
    beq lbl_fn_8054B328_000024B4
    lwz r0, 0xc(r19)
    cmpwi r0, 0x0
    beq lbl_fn_8054B328_00002338
    lwz r0, 0x0(r19)
    lfs f0, 0x8(r19)
    xoris r0, r0, 0x8000
    stw r0, 0xbc(r1)
    lfd f3, 0xb8(r1)
    fsubs f3, f3, f22
    fsubs f0, f3, f0
    fcmpo cr0, f23, f0
    cror eq, lt, eq
    bne lbl_fn_8054B328_00002338
    lfs f0, 0x4(r19)
    fctiwz f0, f0
    stfd f0, 0xc0(r1)
    lwz r3, 0xc4(r1)
    subi r0, r3, 0xa
    stw r0, 0x0(r19)
    stw r28, 0xc(r19)
lbl_fn_8054B328_00002338:
    lwz r0, 0x0(r19)
    lfs f3, 0x8(r19)
    xoris r0, r0, 0x8000
    stw r0, 0xb4(r1)
    lfd f0, 0xb0(r1)
    fsubs f0, f0, f22
    fsubs f0, f0, f3
    fcmpo cr0, f21, f0
    ble lbl_fn_8054B328_00002364
    fmr f0, f21
    b lbl_fn_8054B328_00002374
lbl_fn_8054B328_00002364:
    stw r0, 0xbc(r1)
    lfd f0, 0xb8(r1)
    fsubs f0, f0, f22
    fsubs f0, f0, f3
lbl_fn_8054B328_00002374:
    lwz r4, 0x9c(r19)
    addi r3, r27, 0x59
    lwz r4, 0x4(r4)
    stfs f0, 0x100(r4)
    lwz r4, 0x9c(r19)
    lfs f15, 0x58(r1)
    lwz r4, 0x4(r4)
    addi r18, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f15
    mr r4, r3
    mr r3, r18
    li r5, 0x0
    bl fn_801FED24
    lwz r4, 0x9c(r19)
    addi r3, r27, 0x59
    lwz r4, 0x4(r4)
    addi r18, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f17
    mr r4, r3
    mr r3, r18
    li r5, 0x1
    bl fn_801FED24
    lwz r4, 0x9c(r19)
    addi r3, r27, 0x59
    lwz r4, 0x4(r4)
    addi r18, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f18
    mr r4, r3
    mr r3, r18
    li r5, 0x2
    bl fn_801FED24
    lwz r4, 0x9c(r19)
    addi r3, r27, 0x59
    lwz r4, 0x4(r4)
    addi r18, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f18
    mr r4, r3
    mr r3, r18
    li r5, 0x3
    bl fn_801FED24
    lwz r4, 0x9c(r19)
    addi r3, r27, 0x59
    lwz r4, 0x4(r4)
    addi r18, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f20
    mr r4, r3
    mr r3, r18
    li r5, 0x4
    bl fn_801FED24
    lwz r4, 0x9c(r19)
    addi r3, r27, 0x2ad
    lwz r4, 0x4(r4)
    addi r18, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r18
    addi r5, r19, 0x20
    bl fn_801FEE08
    lwz r4, 0x9c(r19)
    addi r3, r27, 0x2b4
    lwz r4, 0x4(r4)
    addi r18, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r18
    addi r5, r19, 0x20
    bl fn_801FEE08
    lwz r3, 0x9c(r19)
    lwz r3, 0x4(r3)
    bl fn_801F4484
    lwz r3, 0x9c(r19)
    li r4, 0x1
    lwz r3, 0x4(r3)
    bl fn_801F465C
    fnmsubs f17, f31, f18, f17
lbl_fn_8054B328_000024B4:
    lwz r4, 0xa0(r19)
    cmpwi r4, 0x0
    beq lbl_fn_8054B328_00002630
    lwz r0, 0x0(r19)
    addi r3, r27, 0x59
    lwz r4, 0x4(r4)
    xoris r0, r0, 0x8000
    stw r0, 0xb4(r1)
    lfd f0, 0xb0(r1)
    fsubs f0, f0, f22
    stfs f0, 0x100(r4)
    lwz r4, 0xa0(r19)
    lfs f15, 0x58(r1)
    lwz r4, 0x4(r4)
    addi r18, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f15
    mr r4, r3
    mr r3, r18
    li r5, 0x0
    bl fn_801FED24
    lwz r4, 0xa0(r19)
    addi r3, r27, 0x59
    lwz r4, 0x4(r4)
    addi r18, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f17
    mr r4, r3
    mr r3, r18
    li r5, 0x1
    bl fn_801FED24
    lwz r4, 0xa0(r19)
    addi r3, r27, 0x59
    lwz r4, 0x4(r4)
    addi r18, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f18
    mr r4, r3
    mr r3, r18
    li r5, 0x2
    bl fn_801FED24
    lwz r4, 0xa0(r19)
    addi r3, r27, 0x59
    lwz r4, 0x4(r4)
    addi r18, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f18
    mr r4, r3
    mr r3, r18
    li r5, 0x3
    bl fn_801FED24
    lwz r4, 0xa0(r19)
    addi r3, r27, 0x59
    lwz r4, 0x4(r4)
    addi r18, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f20
    mr r4, r3
    mr r3, r18
    li r5, 0x4
    bl fn_801FED24
    lwz r4, 0xa0(r19)
    addi r3, r27, 0x2ad
    lwz r4, 0x4(r4)
    addi r18, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r18
    addi r5, r19, 0x20
    bl fn_801FEE08
    lwz r3, lbl_8087EEC8
    addi r4, r19, 0x20
    lfs f1, lbl_80887D9C
    li r5, 0x1
    lfs f2, lbl_80887D60
    li r6, 0x4
    bl fn_8006EF48
    lwz r4, 0xa0(r19)
    fmr f15, f1
    addi r3, r27, 0x2be
    lwz r4, 0x4(r4)
    addi r18, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f15
    mr r4, r3
    mr r3, r18
    bl fn_801FECE0
    lwz r3, 0xa0(r19)
    lwz r3, 0x4(r3)
    bl fn_801F4484
    lwz r3, 0xa0(r19)
    li r4, 0x1
    lwz r3, 0x4(r3)
    bl fn_801F465C
    fnmsubs f17, f31, f18, f17
lbl_fn_8054B328_00002630:
    lwz r0, 0x18(r19)
    cmpwi r0, 0x0
    beq lbl_fn_8054B328_00002720
    lis r0, 0xff
    ble lbl_fn_8054B328_00002648
    subi r0, r29, 0x81
lbl_fn_8054B328_00002648:
    lwz r3, lbl_8087F1E4
    or r18, r0, r17
    lwz r4, 0x1a4(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8054B328_00002660
    b lbl_fn_8054B328_00002664
lbl_fn_8054B328_00002660:
    la r4, lbl_808813D0
lbl_fn_8054B328_00002664:
    addi r3, r1, 0x70
    crclr 6
    bl fn_800DD3FC
    fmr f1, f19
    lwz r3, lbl_8087EEC8
    lfs f2, lbl_80887D60
    addi r4, r1, 0x70
    li r5, 0x1
    li r6, 0x1
    bl fn_8006EF48
    lfs f0, 0x58(r1)
    fnmsubs f17, f26, f19, f17
    lfs f6, lbl_80887D60
    fmr f3, f20
    fnmsubs f15, f24, f1, f0
    lwz r3, lbl_8087EEB0
    fmr f4, f19
    fmr f5, f19
    mr r5, r17
    fmr f7, f6
    fmr f8, f6
    addi r4, r1, 0x70
    fadds f1, f25, f15
    fadds f2, f25, f17
    li r6, 0x1
    li r7, 0x4
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
    lfs f6, lbl_80887D60
    fmr f1, f15
    fmr f2, f17
    lwz r3, lbl_8087EEB0
    fmr f3, f20
    mr r5, r18
    fmr f4, f19
    fmr f5, f19
    fmr f7, f6
    addi r4, r1, 0x70
    fmr f8, f6
    li r6, 0x1
    li r7, 0x4
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
lbl_fn_8054B328_00002720:
    lwz r3, 0x94(r19)
    cmpwi r3, 0x0
    beq lbl_fn_8054B328_00002994
    lwz r0, 0x0(r19)
    fsubs f17, f17, f30
    lwz r4, 0x4(r3)
    addi r3, r27, 0x59
    xoris r0, r0, 0x8000
    stw r0, 0xbc(r1)
    lfd f0, 0xb8(r1)
    fsubs f0, f0, f22
    stfs f0, 0x100(r4)
    lwz r4, 0x94(r19)
    lfs f15, 0x58(r1)
    lwz r4, 0x4(r4)
    addi r18, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f15
    mr r4, r3
    mr r3, r18
    li r5, 0x0
    bl fn_801FED24
    lwz r4, 0x94(r19)
    addi r3, r27, 0x59
    lwz r4, 0x4(r4)
    addi r18, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f17
    mr r4, r3
    mr r3, r18
    li r5, 0x1
    bl fn_801FED24
    lwz r3, 0x88(r19)
    cmpwi r3, 0x0
    beq lbl_fn_8054B328_0000280C
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8054B328_0000280C
    lwz r4, 0x94(r19)
    addi r3, r27, 0x59
    lwz r4, 0x4(r4)
    addi r18, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80887DB8
    mr r4, r3
    mr r3, r18
    li r5, 0x2
    bl fn_801FED24
    lwz r4, 0x94(r19)
    addi r3, r27, 0x59
    lwz r4, 0x4(r4)
    addi r18, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80887DB8
    mr r4, r3
    mr r3, r18
    li r5, 0x3
    bl fn_801FED24
    b lbl_fn_8054B328_0000285C
lbl_fn_8054B328_0000280C:
    lwz r4, 0x94(r19)
    addi r3, r27, 0x59
    lwz r4, 0x4(r4)
    addi r18, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80887D70
    mr r4, r3
    mr r3, r18
    li r5, 0x2
    bl fn_801FED24
    lwz r4, 0x94(r19)
    addi r3, r27, 0x59
    lwz r4, 0x4(r4)
    addi r18, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80887D70
    mr r4, r3
    mr r3, r18
    li r5, 0x3
    bl fn_801FED24
lbl_fn_8054B328_0000285C:
    lwz r5, 0x84(r19)
    cmpwi r5, 0x64
    bge lbl_fn_8054B328_000028A0
    addi r3, r1, 0x8
    addi r4, r30, lbl_80794AC0@l
    crclr 6
    bl fn_800DD3FC
    lwz r4, 0x94(r19)
    addi r3, r27, 0x2c2
    lwz r4, 0x4(r4)
    addi r18, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80887D70
    mr r4, r3
    mr r3, r18
    bl fn_801FECE0
    b lbl_fn_8054B328_000028D4
lbl_fn_8054B328_000028A0:
    addi r3, r1, 0x8
    addi r4, r31, 0x8
    crclr 6
    bl fn_800DD3FC
    lwz r4, 0x94(r19)
    addi r3, r27, 0x2c2
    lwz r4, 0x4(r4)
    addi r18, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80887D60
    mr r4, r3
    mr r3, r18
    bl fn_801FECE0
lbl_fn_8054B328_000028D4:
    lwz r4, 0x94(r19)
    addi r3, r27, 0x2ca
    lwz r4, 0x4(r4)
    addi r18, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r18
    addi r5, r1, 0x8
    bl fn_801FEE08
    lwz r4, 0x94(r19)
    addi r3, r27, 0x2d3
    lwz r4, 0x4(r4)
    addi r18, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r18
    addi r5, r1, 0x8
    bl fn_801FEE08
    lwz r0, 0x84(r19)
    cmpwi r0, 0xa
    bge lbl_fn_8054B328_00002950
    lwz r4, 0x94(r19)
    addi r3, r27, 0x2dd
    lwz r4, 0x4(r4)
    addi r18, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80887DBC
    mr r4, r3
    mr r3, r18
    bl fn_801FECE0
    b lbl_fn_8054B328_00002974
lbl_fn_8054B328_00002950:
    lwz r4, 0x94(r19)
    addi r3, r27, 0x2dd
    lwz r4, 0x4(r4)
    addi r18, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80887D60
    mr r4, r3
    mr r3, r18
    bl fn_801FECE0
lbl_fn_8054B328_00002974:
    lwz r3, 0x94(r19)
    lwz r3, 0x4(r3)
    bl fn_801F4484
    lwz r3, 0x94(r19)
    li r4, 0x1
    lwz r3, 0x4(r3)
    bl fn_801F465C
    fsubs f17, f17, f31
lbl_fn_8054B328_00002994:
    lwz r3, 0xa8(r19)
    cmpwi r3, 0x0
    beq lbl_fn_8054B328_00002DF0
    lwz r0, 0x0(r19)
    fsubs f17, f17, f30
    lwz r4, 0x4(r3)
    addi r3, r27, 0x59
    xoris r0, r0, 0x8000
    stw r0, 0xb4(r1)
    lfd f0, 0xb0(r1)
    fsubs f0, f0, f22
    stfs f0, 0x100(r4)
    lwz r4, 0xa8(r19)
    lfs f15, 0x58(r1)
    lwz r4, 0x4(r4)
    addi r18, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f15
    mr r4, r3
    mr r3, r18
    li r5, 0x0
    bl fn_801FED24
    lwz r4, 0xa8(r19)
    addi r3, r27, 0x59
    lwz r4, 0x4(r4)
    addi r18, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f17
    mr r4, r3
    mr r3, r18
    li r5, 0x1
    bl fn_801FED24
    lwz r4, 0xa8(r19)
    addi r3, r27, 0x59
    lwz r4, 0x4(r4)
    addi r18, r4, 0x58
    bl fn_800DC6B4
    fmuls f1, f27, f18
    mr r4, r3
    mr r3, r18
    li r5, 0x2
    bl fn_801FED24
    lwz r4, 0xa8(r19)
    addi r3, r27, 0x59
    lwz r4, 0x4(r4)
    addi r18, r4, 0x58
    bl fn_800DC6B4
    fmuls f1, f27, f18
    mr r4, r3
    mr r3, r18
    li r5, 0x3
    bl fn_801FED24
    lwz r4, 0xa8(r19)
    addi r3, r27, 0x59
    lwz r4, 0x4(r4)
    addi r18, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f20
    mr r4, r3
    mr r3, r18
    li r5, 0x4
    bl fn_801FED24
    lwz r0, 0x80(r19)
    cmpwi r0, 0x0
    beq lbl_fn_8054B328_00002AC4
    cmpwi r0, 0x1
    beq lbl_fn_8054B328_00002B34
    cmpwi r0, 0x3
    beq lbl_fn_8054B328_00002BA4
    cmpwi r0, 0x4
    beq lbl_fn_8054B328_00002C14
    cmpwi r0, 0x6
    beq lbl_fn_8054B328_00002C84
    cmpwi r0, 0x5
    beq lbl_fn_8054B328_00002CF4
    b lbl_fn_8054B328_00002D64
lbl_fn_8054B328_00002AC4:
    lwz r4, 0xa8(r19)
    addi r3, r27, 0x2e2
    lwz r4, 0x4(r4)
    addi r18, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80887D98
    mr r4, r3
    mr r3, r18
    bl fn_801FECE0
    lwz r4, 0xa8(r19)
    addi r3, r27, 0x2e7
    lwz r4, 0x4(r4)
    addi r18, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80887DC0
    mr r4, r3
    mr r3, r18
    bl fn_801FECE0
    lwz r4, 0xa8(r19)
    addi r3, r27, 0x2ec
    lwz r4, 0x4(r4)
    addi r18, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80887DC4
    mr r4, r3
    mr r3, r18
    bl fn_801FECE0
    b lbl_fn_8054B328_00002DD0
lbl_fn_8054B328_00002B34:
    lwz r4, 0xa8(r19)
    addi r3, r27, 0x2e2
    lwz r4, 0x4(r4)
    addi r18, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80887DC8
    mr r4, r3
    mr r3, r18
    bl fn_801FECE0
    lwz r4, 0xa8(r19)
    addi r3, r27, 0x2e7
    lwz r4, 0x4(r4)
    addi r18, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80887D68
    mr r4, r3
    mr r3, r18
    bl fn_801FECE0
    lwz r4, 0xa8(r19)
    addi r3, r27, 0x2ec
    lwz r4, 0x4(r4)
    addi r18, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80887DCC
    mr r4, r3
    mr r3, r18
    bl fn_801FECE0
    b lbl_fn_8054B328_00002DD0
lbl_fn_8054B328_00002BA4:
    lwz r4, 0xa8(r19)
    addi r3, r27, 0x2e2
    lwz r4, 0x4(r4)
    addi r18, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80887DD0
    mr r4, r3
    mr r3, r18
    bl fn_801FECE0
    lwz r4, 0xa8(r19)
    addi r3, r27, 0x2e7
    lwz r4, 0x4(r4)
    addi r18, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80887DCC
    mr r4, r3
    mr r3, r18
    bl fn_801FECE0
    lwz r4, 0xa8(r19)
    addi r3, r27, 0x2ec
    lwz r4, 0x4(r4)
    addi r18, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80887DD0
    mr r4, r3
    mr r3, r18
    bl fn_801FECE0
    b lbl_fn_8054B328_00002DD0
lbl_fn_8054B328_00002C14:
    lwz r4, 0xa8(r19)
    addi r3, r27, 0x2e2
    lwz r4, 0x4(r4)
    addi r18, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80887D98
    mr r4, r3
    mr r3, r18
    bl fn_801FECE0
    lwz r4, 0xa8(r19)
    addi r3, r27, 0x2e7
    lwz r4, 0x4(r4)
    addi r18, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80887D98
    mr r4, r3
    mr r3, r18
    bl fn_801FECE0
    lwz r4, 0xa8(r19)
    addi r3, r27, 0x2ec
    lwz r4, 0x4(r4)
    addi r18, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80887DCC
    mr r4, r3
    mr r3, r18
    bl fn_801FECE0
    b lbl_fn_8054B328_00002DD0
lbl_fn_8054B328_00002C84:
    lwz r4, 0xa8(r19)
    addi r3, r27, 0x2e2
    lwz r4, 0x4(r4)
    addi r18, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80887D60
    mr r4, r3
    mr r3, r18
    bl fn_801FECE0
    lwz r4, 0xa8(r19)
    addi r3, r27, 0x2e7
    lwz r4, 0x4(r4)
    addi r18, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80887DC8
    mr r4, r3
    mr r3, r18
    bl fn_801FECE0
    lwz r4, 0xa8(r19)
    addi r3, r27, 0x2ec
    lwz r4, 0x4(r4)
    addi r18, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80887DCC
    mr r4, r3
    mr r3, r18
    bl fn_801FECE0
    b lbl_fn_8054B328_00002DD0
lbl_fn_8054B328_00002CF4:
    lwz r4, 0xa8(r19)
    addi r3, r27, 0x2e2
    lwz r4, 0x4(r4)
    addi r18, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80887D68
    mr r4, r3
    mr r3, r18
    bl fn_801FECE0
    lwz r4, 0xa8(r19)
    addi r3, r27, 0x2e7
    lwz r4, 0x4(r4)
    addi r18, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80887DD0
    mr r4, r3
    mr r3, r18
    bl fn_801FECE0
    lwz r4, 0xa8(r19)
    addi r3, r27, 0x2ec
    lwz r4, 0x4(r4)
    addi r18, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80887D68
    mr r4, r3
    mr r3, r18
    bl fn_801FECE0
    b lbl_fn_8054B328_00002DD0
lbl_fn_8054B328_00002D64:
    lwz r4, 0xa8(r19)
    addi r3, r27, 0x2e2
    lwz r4, 0x4(r4)
    addi r18, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80887D98
    mr r4, r3
    mr r3, r18
    bl fn_801FECE0
    lwz r4, 0xa8(r19)
    addi r3, r27, 0x2e7
    lwz r4, 0x4(r4)
    addi r18, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80887D98
    mr r4, r3
    mr r3, r18
    bl fn_801FECE0
    lwz r4, 0xa8(r19)
    addi r3, r27, 0x2ec
    lwz r4, 0x4(r4)
    addi r18, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80887D98
    mr r4, r3
    mr r3, r18
    bl fn_801FECE0
lbl_fn_8054B328_00002DD0:
    lwz r3, 0xa8(r19)
    lwz r3, 0x4(r3)
    bl fn_801F4484
    lwz r3, 0xa8(r19)
    li r4, 0x1
    lwz r3, 0x4(r3)
    bl fn_801F465C
    fnmsubs f17, f31, f18, f17
lbl_fn_8054B328_00002DF0:
    lwz r3, 0x90(r19)
    cmpwi r3, 0x0
    beq lbl_fn_8054B328_00002F08
    lwz r0, 0x0(r19)
    fsubs f17, f17, f30
    lwz r4, 0x4(r3)
    addi r3, r27, 0x59
    xoris r0, r0, 0x8000
    stw r0, 0xbc(r1)
    lfd f0, 0xb8(r1)
    fsubs f0, f0, f22
    stfs f0, 0x100(r4)
    lwz r4, 0x90(r19)
    lfs f15, 0x58(r1)
    lwz r4, 0x4(r4)
    addi r18, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f15
    mr r4, r3
    mr r3, r18
    li r5, 0x0
    bl fn_801FED24
    lwz r4, 0x90(r19)
    addi r3, r27, 0x59
    lwz r4, 0x4(r4)
    addi r18, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f17
    mr r4, r3
    mr r3, r18
    li r5, 0x1
    bl fn_801FED24
    lwz r4, 0x90(r19)
    addi r3, r27, 0x59
    lwz r4, 0x4(r4)
    addi r18, r4, 0x58
    bl fn_800DC6B4
    fmuls f1, f27, f18
    mr r4, r3
    mr r3, r18
    li r5, 0x2
    bl fn_801FED24
    lwz r4, 0x90(r19)
    addi r3, r27, 0x59
    lwz r4, 0x4(r4)
    addi r18, r4, 0x58
    bl fn_800DC6B4
    fmuls f1, f27, f18
    mr r4, r3
    mr r3, r18
    li r5, 0x3
    bl fn_801FED24
    lwz r4, 0x90(r19)
    addi r3, r27, 0x59
    lwz r4, 0x4(r4)
    addi r18, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f20
    mr r4, r3
    mr r3, r18
    li r5, 0x4
    bl fn_801FED24
    lwz r3, 0x90(r19)
    lwz r3, 0x4(r3)
    bl fn_801F4484
    lwz r3, 0x90(r19)
    li r4, 0x1
    lwz r3, 0x4(r3)
    bl fn_801F465C
    fnmsubs f17, f31, f18, f17
lbl_fn_8054B328_00002F08:
    lwz r3, 0x98(r19)
    cmpwi r3, 0x0
    beq lbl_fn_8054B328_00003270
    lwz r0, 0x0(r19)
    fsubs f17, f17, f30
    lwz r4, 0x4(r3)
    addi r3, r27, 0x59
    xoris r0, r0, 0x8000
    stw r0, 0xb4(r1)
    lfd f0, 0xb0(r1)
    fsubs f0, f0, f22
    stfs f0, 0x100(r4)
    lwz r4, 0x98(r19)
    lfs f15, 0x58(r1)
    lwz r4, 0x4(r4)
    addi r18, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f15
    mr r4, r3
    mr r3, r18
    li r5, 0x0
    bl fn_801FED24
    lwz r4, 0x98(r19)
    addi r3, r27, 0x59
    lwz r4, 0x4(r4)
    addi r18, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f17
    mr r4, r3
    mr r3, r18
    li r5, 0x1
    bl fn_801FED24
    lwz r4, 0x98(r19)
    addi r3, r27, 0x59
    lwz r4, 0x4(r4)
    addi r18, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f20
    mr r4, r3
    mr r3, r18
    li r5, 0x4
    bl fn_801FED24
    lwz r3, 0x98(r19)
    addi r4, r27, 0x2f1
    lwz r3, 0x4(r3)
    addi r3, r3, 0x58
    bl fn_801FEC74
    mr r4, r3
    addi r3, r1, 0x10
    li r5, 0x0
    li r6, 0x0
    bl fn_800A4450
    lwz r0, 0x10(r1)
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi r0, r0, 5
    cntlzw r0, r0
    srwi. r0, r0, 5
    bne lbl_fn_8054B328_00002FFC
    mr r4, r20
    b lbl_fn_8054B328_00003000
lbl_fn_8054B328_00002FFC:
    lwz r4, 0x18(r1)
lbl_fn_8054B328_00003000:
    lwz r3, lbl_8087EEC8
    li r5, 0x1
    lfs f1, lbl_80887D74
    li r6, 0x1
    lfs f2, lbl_80887D60
    bl fn_8006EF48
    lwz r0, 0x10(r1)
    fmr f15, f1
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi r0, r0, 5
    cntlzw r0, r0
    srwi. r0, r0, 5
    beq lbl_fn_8054B328_00003040
    lwz r3, 0x18(r1)
    bl dtor_80084684
lbl_fn_8054B328_00003040:
    lfd f0, 0x108(r1)
    addi r3, r27, 0x59
    lwz r4, 0x98(r19)
    fdivs f15, f15, f0
    lwz r4, 0x4(r4)
    addi r18, r4, 0x58
    bl fn_800DC6B4
    fmuls f1, f27, f15
    mr r4, r3
    mr r3, r18
    li r5, 0x2
    bl fn_801FED24
    lwz r4, 0x98(r19)
    addi r3, r27, 0x2fc
    lwz r4, 0x4(r4)
    addi r18, r4, 0x58
    bl fn_800DC6B4
    lfd f0, 0x110(r1)
    mr r4, r3
    mr r3, r18
    li r5, 0x2
    fdivs f1, f0, f15
    bl fn_801FED24
    lwz r4, 0x98(r19)
    addi r3, r27, 0x304
    lwz r4, 0x4(r4)
    addi r18, r4, 0x58
    bl fn_800DC6B4
    lfd f0, 0x118(r1)
    mr r4, r3
    mr r3, r18
    li r5, 0x2
    fdivs f1, f0, f15
    bl fn_801FED24
    lwz r4, 0x98(r19)
    addi r3, r27, 0x30c
    lwz r4, 0x4(r4)
    addi r18, r4, 0x58
    bl fn_800DC6B4
    lfd f0, 0x120(r1)
    mr r4, r3
    mr r3, r18
    li r5, 0x2
    fdivs f1, f0, f15
    bl fn_801FED24
    lwz r4, 0x98(r19)
    addi r3, r27, 0x314
    lwz r4, 0x4(r4)
    addi r18, r4, 0x58
    bl fn_800DC6B4
    lfd f0, 0x128(r1)
    mr r4, r3
    mr r3, r18
    li r5, 0x2
    fdivs f1, f0, f15
    bl fn_801FED24
    lwz r4, 0x98(r19)
    addi r3, r27, 0x31c
    lwz r4, 0x4(r4)
    addi r18, r4, 0x58
    bl fn_800DC6B4
    lfd f0, 0x130(r1)
    mr r4, r3
    mr r3, r18
    li r5, 0x2
    fdivs f1, f0, f15
    bl fn_801FED24
    lwz r4, 0x98(r19)
    addi r3, r27, 0x31c
    lwz r4, 0x4(r4)
    addi r18, r4, 0x58
    bl fn_800DC6B4
    lfd f0, 0x138(r1)
    mr r4, r3
    mr r3, r18
    li r5, 0x0
    fdivs f1, f0, f15
    bl fn_801FED24
    lwz r4, 0x98(r19)
    addi r3, r27, 0x324
    lwz r4, 0x4(r4)
    addi r18, r4, 0x58
    bl fn_800DC6B4
    lfd f0, 0x108(r1)
    mr r4, r3
    mr r3, r18
    li r5, 0x2
    fdivs f1, f0, f15
    bl fn_801FED24
    lwz r4, 0x98(r19)
    addi r3, r27, 0x32c
    lwz r4, 0x4(r4)
    addi r18, r4, 0x58
    bl fn_800DC6B4
    lfd f0, 0x140(r1)
    mr r4, r3
    mr r3, r18
    li r5, 0x2
    fdivs f1, f0, f15
    bl fn_801FED24
    lwz r4, 0x98(r19)
    addi r3, r27, 0x334
    lwz r4, 0x4(r4)
    addi r18, r4, 0x58
    bl fn_800DC6B4
    lfd f0, 0x148(r1)
    mr r4, r3
    mr r3, r18
    li r5, 0x2
    fdivs f1, f0, f15
    bl fn_801FED24
    lwz r4, 0x98(r19)
    addi r3, r27, 0x33c
    lwz r4, 0x4(r4)
    addi r18, r4, 0x58
    bl fn_800DC6B4
    fdivs f1, f31, f15
    mr r4, r3
    mr r3, r18
    li r5, 0x2
    bl fn_801FED24
    lwz r4, 0x98(r19)
    addi r3, r27, 0x345
    lwz r4, 0x4(r4)
    addi r18, r4, 0x58
    bl fn_800DC6B4
    lfd f0, 0x150(r1)
    mr r4, r3
    mr r3, r18
    li r5, 0x2
    fdivs f1, f0, f15
    bl fn_801FED24
    lwz r3, 0x98(r19)
    lwz r3, 0x4(r3)
    bl fn_801F4484
    lwz r3, 0x98(r19)
    li r4, 0x1
    lwz r3, 0x4(r3)
    bl fn_801F465C
    fsubs f17, f17, f31
lbl_fn_8054B328_00003270:
    lwz r3, 0xac(r19)
    cmpwi r3, 0x0
    beq lbl_fn_8054B328_00003338
    lwz r0, 0x0(r19)
    fsubs f17, f17, f30
    lwz r4, 0x4(r3)
    addi r3, r27, 0x59
    xoris r0, r0, 0x8000
    stw r0, 0xbc(r1)
    lfd f0, 0xb8(r1)
    fsubs f0, f0, f22
    stfs f0, 0x100(r4)
    lwz r4, 0xac(r19)
    lfs f15, 0x58(r1)
    lwz r4, 0x4(r4)
    addi r18, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f15
    mr r4, r3
    mr r3, r18
    li r5, 0x0
    bl fn_801FED24
    lwz r4, 0xac(r19)
    addi r3, r27, 0x59
    lwz r4, 0x4(r4)
    addi r18, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f17
    mr r4, r3
    mr r3, r18
    li r5, 0x1
    bl fn_801FED24
    lwz r4, 0xac(r19)
    addi r3, r27, 0x59
    lwz r4, 0x4(r4)
    addi r18, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f20
    mr r4, r3
    mr r3, r18
    li r5, 0x4
    bl fn_801FED24
    lwz r3, 0xac(r19)
    lwz r3, 0x4(r3)
    bl fn_801F4484
    lwz r3, 0xac(r19)
    li r4, 0x1
    lwz r3, 0x4(r3)
    bl fn_801F465C
    fsubs f17, f17, f31
lbl_fn_8054B328_00003338:
    lwz r0, 0x14(r19)
    rlwinm r0, r0, 0, 21, 21
    cmplwi r0, 0x400
    bne lbl_fn_8054B328_00003424
    lwz r3, lbl_8087F1E4
    lwz r4, 0x1ac(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8054B328_0000335C
    b lbl_fn_8054B328_00003360
lbl_fn_8054B328_0000335C:
    la r4, lbl_808813D0
lbl_fn_8054B328_00003360:
    addi r3, r1, 0x70
    bl fn_80686A64
    lfd f0, 0x158(r1)
    addi r4, r1, 0x70
    lwz r3, lbl_8087EEC8
    li r5, 0x1
    fmuls f16, f0, f19
    lfs f2, lbl_80887D60
    li r6, 0x1
    fmr f1, f16
    bl fn_8006EF48
    lfs f0, 0x58(r1)
    fnmsubs f17, f26, f16, f17
    lfs f6, lbl_80887D60
    fmr f3, f20
    fnmsubs f15, f24, f1, f0
    lwz r3, lbl_8087EEB0
    fmr f4, f16
    fmr f5, f16
    mr r5, r17
    fmr f7, f6
    fmr f8, f6
    addi r4, r1, 0x70
    fadds f1, f25, f15
    fadds f2, f25, f17
    li r6, 0x1
    li r7, 0x4
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
    lfs f6, lbl_80887D60
    oris r5, r17, 0xff
    fmr f1, f15
    lwz r3, lbl_8087EEB0
    fmr f2, f17
    addi r4, r1, 0x70
    fmr f3, f20
    ori r5, r5, 0xc040
    fmr f4, f16
    li r6, 0x1
    fmr f5, f16
    li r7, 0x4
    fmr f7, f6
    li r8, 0x0
    fmr f8, f6
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
lbl_fn_8054B328_00003424:
    lwz r4, 0x14(r19)
    clrlwi r0, r4, 31
    cmplwi r0, 0x1
    beq lbl_fn_8054B328_000036A4
    rlwinm r0, r4, 0, 28, 28
    cmplwi r0, 0x8
    beq lbl_fn_8054B328_00003468
    rlwinm r0, r4, 0, 16, 16
    cmplwi r0, 0x8000
    beq lbl_fn_8054B328_00003468
    rlwinm r3, r4, 0, 1, 1
    subis r0, r3, 0x4000
    cmplwi r0, 0x0
    beq lbl_fn_8054B328_00003468
    rlwinm r0, r4, 0, 23, 23
    cmplwi r0, 0x100
    bne lbl_fn_8054B328_000036A4
lbl_fn_8054B328_00003468:
    rlwinm r0, r4, 0, 16, 16
    cmplwi r0, 0x8000
    bne lbl_fn_8054B328_00003498
    lwz r3, lbl_8087F1E4
    lwz r4, 0x1cc(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8054B328_00003488
    b lbl_fn_8054B328_0000348C
lbl_fn_8054B328_00003488:
    la r4, lbl_808813D0
lbl_fn_8054B328_0000348C:
    addi r3, r1, 0x70
    bl fn_80686A64
    b lbl_fn_8054B328_0000351C
lbl_fn_8054B328_00003498:
    rlwinm r3, r4, 0, 1, 1
    subis r0, r3, 0x4000
    cmplwi r0, 0x0
    bne lbl_fn_8054B328_000034CC
    lwz r3, lbl_8087F1E4
    lwz r4, 0x20c(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8054B328_000034BC
    b lbl_fn_8054B328_000034C0
lbl_fn_8054B328_000034BC:
    la r4, lbl_808813D0
lbl_fn_8054B328_000034C0:
    addi r3, r1, 0x70
    bl fn_80686A64
    b lbl_fn_8054B328_0000351C
lbl_fn_8054B328_000034CC:
    rlwinm r0, r4, 0, 23, 23
    cmplwi r0, 0x100
    bne lbl_fn_8054B328_000034FC
    lwz r3, lbl_8087F1E4
    lwz r4, 0x214(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8054B328_000034EC
    b lbl_fn_8054B328_000034F0
lbl_fn_8054B328_000034EC:
    la r4, lbl_808813D0
lbl_fn_8054B328_000034F0:
    addi r3, r1, 0x70
    bl fn_80686A64
    b lbl_fn_8054B328_0000351C
lbl_fn_8054B328_000034FC:
    lwz r3, lbl_8087F1E4
    lwz r4, 0x1bc(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8054B328_00003510
    b lbl_fn_8054B328_00003514
lbl_fn_8054B328_00003510:
    la r4, lbl_808813D0
lbl_fn_8054B328_00003514:
    addi r3, r1, 0x70
    bl fn_80686A64
lbl_fn_8054B328_0000351C:
    lfd f0, 0x160(r1)
    addi r4, r1, 0x70
    lwz r3, lbl_8087EEC8
    li r5, 0x1
    fmuls f16, f0, f19
    lfs f2, lbl_80887D60
    li r6, 0x1
    fmr f1, f16
    bl fn_8006EF48
    lfs f0, 0x58(r1)
    fnmsubs f17, f26, f16, f17
    lfs f6, lbl_80887D60
    fmr f4, f16
    fnmsubs f15, f24, f1, f0
    lwz r3, lbl_8087EEB0
    fmr f2, f17
    fmr f5, f16
    mr r5, r17
    fmr f7, f6
    fmr f8, f6
    addi r4, r1, 0x70
    fadds f1, f27, f15
    fadds f3, f28, f20
    li r6, 0x1
    li r7, 0x4
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
    lfs f6, lbl_80887D60
    fmr f1, f15
    fmr f4, f16
    lwz r3, lbl_8087EEB0
    fmr f5, f16
    mr r5, r17
    fmr f7, f6
    fmr f8, f6
    fadds f2, f27, f17
    addi r4, r1, 0x70
    fadds f3, f28, f20
    li r6, 0x1
    li r7, 0x4
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
    lfs f6, lbl_80887D60
    fmr f2, f17
    fmr f4, f16
    lwz r3, lbl_8087EEB0
    fmr f5, f16
    mr r5, r17
    fmr f7, f6
    fmr f8, f6
    fsubs f1, f15, f27
    addi r4, r1, 0x70
    fadds f3, f28, f20
    li r6, 0x1
    li r7, 0x4
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
    lfs f6, lbl_80887D60
    fmr f1, f15
    fmr f4, f16
    lwz r3, lbl_8087EEB0
    fmr f5, f16
    mr r5, r17
    fmr f7, f6
    fmr f8, f6
    fsubs f2, f17, f27
    addi r4, r1, 0x70
    fadds f3, f28, f20
    li r6, 0x1
    li r7, 0x4
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
    lfs f6, lbl_80887D60
    oris r5, r17, 0xff
    fmr f1, f15
    lwz r3, lbl_8087EEB0
    fmr f2, f17
    addi r4, r1, 0x70
    fmr f3, f20
    ori r5, r5, 0xc040
    fmr f4, f16
    li r6, 0x1
    fmr f5, f16
    li r7, 0x4
    fmr f7, f6
    li r8, 0x0
    fmr f8, f6
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
lbl_fn_8054B328_000036A4:
    lwz r0, 0x14(r19)
    rlwinm r0, r0, 0, 17, 17
    cmplwi r0, 0x4000
    bne lbl_fn_8054B328_00003790
    lwz r3, lbl_8087F1E4
    lwz r4, 0x1d4(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8054B328_000036C8
    b lbl_fn_8054B328_000036CC
lbl_fn_8054B328_000036C8:
    la r4, lbl_808813D0
lbl_fn_8054B328_000036CC:
    addi r3, r1, 0x70
    bl fn_80686A64
    lfd f0, 0x158(r1)
    addi r4, r1, 0x70
    lwz r3, lbl_8087EEC8
    li r5, 0x1
    fmuls f16, f0, f19
    lfs f2, lbl_80887D60
    li r6, 0x1
    fmr f1, f16
    bl fn_8006EF48
    lfs f0, 0x58(r1)
    fnmsubs f17, f26, f16, f17
    lfs f6, lbl_80887D60
    fmr f3, f20
    fnmsubs f15, f24, f1, f0
    lwz r3, lbl_8087EEB0
    fmr f4, f16
    fmr f5, f16
    addi r4, r1, 0x70
    fmr f7, f6
    fmr f8, f6
    li r5, 0x0
    fadds f1, f25, f15
    fadds f2, f25, f17
    li r6, 0x1
    li r7, 0x4
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
    lfs f6, lbl_80887D60
    oris r5, r17, 0xff
    fmr f1, f15
    lwz r3, lbl_8087EEB0
    fmr f2, f17
    addi r4, r1, 0x70
    fmr f3, f20
    ori r5, r5, 0xc040
    fmr f4, f16
    li r6, 0x1
    fmr f5, f16
    li r7, 0x4
    fmr f7, f6
    li r8, 0x0
    fmr f8, f6
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
lbl_fn_8054B328_00003790:
    lwz r0, 0x14(r19)
    rlwinm r3, r0, 0, 10, 10
    subis r0, r3, 0x20
    cmplwi r0, 0x0
    bne lbl_fn_8054B328_00003944
    lwz r3, lbl_8087F1E4
    lwz r4, 0x1dc(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8054B328_000037B8
    b lbl_fn_8054B328_000037BC
lbl_fn_8054B328_000037B8:
    la r4, lbl_808813D0
lbl_fn_8054B328_000037BC:
    addi r3, r1, 0x70
    bl fn_80686A64
    fmr f1, f19
    lwz r3, lbl_8087EEC8
    lfs f2, lbl_80887D60
    addi r4, r1, 0x70
    li r5, 0x1
    li r6, 0x1
    bl fn_8006EF48
    lfs f0, 0x58(r1)
    fnmsubs f17, f26, f19, f17
    lfs f6, lbl_80887D60
    fmr f4, f19
    fnmsubs f15, f24, f1, f0
    lwz r3, lbl_8087EEB0
    fmr f2, f17
    fmr f5, f19
    mr r5, r17
    fmr f7, f6
    fmr f8, f6
    addi r4, r1, 0x70
    fadds f1, f27, f15
    fadds f3, f28, f20
    li r6, 0x1
    li r7, 0x4
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
    lfs f6, lbl_80887D60
    fmr f1, f15
    fmr f4, f19
    lwz r3, lbl_8087EEB0
    fmr f5, f19
    mr r5, r17
    fmr f7, f6
    fmr f8, f6
    fadds f2, f27, f17
    addi r4, r1, 0x70
    fadds f3, f28, f20
    li r6, 0x1
    li r7, 0x4
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
    lfs f6, lbl_80887D60
    fmr f2, f17
    fmr f4, f19
    lwz r3, lbl_8087EEB0
    fmr f5, f19
    mr r5, r17
    fmr f7, f6
    fmr f8, f6
    fsubs f1, f15, f27
    addi r4, r1, 0x70
    fadds f3, f28, f20
    li r6, 0x1
    li r7, 0x4
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
    lfs f6, lbl_80887D60
    fmr f1, f15
    fmr f4, f19
    lwz r3, lbl_8087EEB0
    fmr f5, f19
    mr r5, r17
    fmr f7, f6
    fmr f8, f6
    fsubs f2, f17, f27
    addi r4, r1, 0x70
    fadds f3, f28, f20
    li r6, 0x1
    li r7, 0x4
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
    lfs f6, lbl_80887D60
    oris r5, r17, 0xff
    fmr f1, f15
    lwz r3, lbl_8087EEB0
    fmr f2, f17
    addi r4, r1, 0x70
    fmr f3, f20
    ori r5, r5, 0xc040
    fmr f4, f19
    li r6, 0x1
    fmr f5, f19
    li r7, 0x4
    fmr f7, f6
    li r8, 0x0
    fmr f8, f6
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
lbl_fn_8054B328_00003944:
    addi r19, r19, 0xb4
lbl_fn_8054B328_00003948:
    lwz r0, 0x4c(r16)
    mulli r0, r0, 0xb4
    add r3, r16, r0
    addi r0, r3, 0x50
    cmplw r19, r0
    bne lbl_fn_8054B328_000017AC
    addi r11, r1, 0x1b0
    psq_l f31, 0x2c8(r1), 0, 0
    lfd f31, 0x2c0(r1)
    psq_l f30, 0x2b8(r1), 0, 0
    lfd f30, 0x2b0(r1)
    psq_l f29, 0x2a8(r1), 0, 0
    lfd f29, 0x2a0(r1)
    psq_l f28, 0x298(r1), 0, 0
    lfd f28, 0x290(r1)
    psq_l f27, 0x288(r1), 0, 0
    lfd f27, 0x280(r1)
    psq_l f26, 0x278(r1), 0, 0
    lfd f26, 0x270(r1)
    psq_l f25, 0x268(r1), 0, 0
    lfd f25, 0x260(r1)
    psq_l f24, 0x258(r1), 0, 0
    lfd f24, 0x250(r1)
    psq_l f23, 0x248(r1), 0, 0
    lfd f23, 0x240(r1)
    psq_l f22, 0x238(r1), 0, 0
    lfd f22, 0x230(r1)
    psq_l f21, 0x228(r1), 0, 0
    lfd f21, 0x220(r1)
    psq_l f20, 0x218(r1), 0, 0
    lfd f20, 0x210(r1)
    psq_l f19, 0x208(r1), 0, 0
    lfd f19, 0x200(r1)
    psq_l f18, 0x1f8(r1), 0, 0
    lfd f18, 0x1f0(r1)
    psq_l f17, 0x1e8(r1), 0, 0
    lfd f17, 0x1e0(r1)
    psq_l f16, 0x1d8(r1), 0, 0
    lfd f16, 0x1d0(r1)
    psq_l f15, 0x1c8(r1), 0, 0
    lfd f15, 0x1c0(r1)
    psq_l f14, 0x1b8(r1), 0, 0
    lfd f14, 0x1b0(r1)
    bl _restgpr_16
    lwz r0, 0x2d4(r1)
    mtlr r0
    addi r1, r1, 0x2d0
    blr
}
