#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_17(void);
extern void _restgpr_25(void);
extern void _restgpr_27(void);
extern void _savegpr_17(void);
extern void _savegpr_25(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_80084320(void);
extern void fn_80092814(void);
extern void fn_800BFAC8(void);
extern void fn_800CB3A0(void);
extern void fn_800D1D3C(void);
extern void fn_800D1E9C(void);
extern void fn_800D246C(void);
extern void fn_800D3FA4(void);
extern void fn_800DC6B4(void);
extern void fn_800DD3FC(void);
extern void fn_801F3FF8(void);
extern void fn_801F4728(void);
extern void fn_801F4998(void);
extern void fn_801F4AA0(void);
extern void fn_801FECE0(void);
extern void fn_801FED24(void);
extern void fn_801FEE08(void);
extern void fn_803E9608(void);
extern void fn_804EB484(void);
extern void fn_804EB874(void);
extern void fn_805075C8(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 lbl_80757AA0[];
extern u8 lbl_80757B7C[];
extern u8 lbl_80758130[];
extern u8 lbl_80758150[];
extern u8 lbl_80790B78[];
extern u8 lbl_80790BB8[];

/* Small data declarations */
extern u32 lbl_8087EEE0;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F498;
extern u32 lbl_8087F598;
extern u32 lbl_8087F59C;
extern u32 lbl_8087F5A8;
extern u32 lbl_8087F610;
extern u32 lbl_8087F628;
extern u32 lbl_8087F86C;
extern u32 lbl_808813D0;
extern u32 lbl_80887308;
extern u32 lbl_80887318;
extern u32 lbl_80887348;
extern u32 lbl_8088734C;
extern u32 lbl_80887350;
extern u32 lbl_80887354;
extern u32 lbl_80887358;
extern u32 lbl_8088735C;
extern u32 lbl_80887360;
extern u32 lbl_80887364;
extern u32 lbl_80887368;
extern u32 lbl_8088736C;
extern u32 lbl_80887370;
extern u32 lbl_80887374;
extern u32 lbl_80887378;
extern u32 lbl_8088737C;
extern u32 lbl_80887380;
extern u32 lbl_80887384;
extern u32 lbl_80887388;
extern u32 lbl_8088738C;
extern u32 lbl_80887390;

/* Function declarations */
void fn_804B4678(void);
void fn_804B4700(void);
void fn_804B4770(void);
void fn_804B47E0(void);
void fn_804B49C0(void);
void fn_804B49E0(void);
void fn_804B4AD0(void);
void fn_804B4B38(void);
void fn_804B4B40(void);
void fn_804B4BA8(void);
void fn_804B4BB0(void);
void fn_804B4C18(void);
void fn_804B4C20(void);
void fn_804B4C50(void);
void fn_804B4CB8(void);
void fn_804B4F70(void);
void fn_804B4FE0(void);
void fn_804B50C0(void);
void fn_804B531C(void);
void fn_804B5320(void);
void fn_804B5360(void);
void fn_804B5494(void);
void fn_804B5B10(void);

asm void fn_804B4678(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x28(r1)
    fmr f31, f1
    stmw r27, 0x14(r1)
    mr r30, r3
    mr r27, r4
    mr r28, r5
    li r29, 0x0
lbl_fn_804B4678_00000028:
    cmpwi r27, -0x1
    beq lbl_fn_804B4678_00000038
    cmpw r29, r27
    bne lbl_fn_804B4678_00000060
lbl_fn_804B4678_00000038:
    lwz r31, 0xb8(r30)
    cmpwi r31, 0x0
    beq lbl_fn_804B4678_00000060
    mr r3, r31
    li r4, 0x0
    bl fn_800D246C
    stfs f31, 0x104(r31)
    lwz r0, 0xfc(r31)
    rlwimi r0, r28, 28, 3, 3
    stw r0, 0xfc(r31)
lbl_fn_804B4678_00000060:
    addi r29, r29, 0x1
    addi r30, r30, 0x4
    cmpwi r29, 0x3
    blt lbl_fn_804B4678_00000028
    lfd f31, 0x28(r1)
    lmw r27, 0x14(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_804B4700(void)
{
    nofralloc
    cmpwi r4, -0x1
    li r0, 0x0
    beq lbl_fn_804B4700_0000009C
    cmpw r0, r4
    bne lbl_fn_804B4700_000000AC
lbl_fn_804B4700_0000009C:
    lwz r5, 0xb8(r3)
    lwz r0, 0x38(r5)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r5)
lbl_fn_804B4700_000000AC:
    cmpwi r4, -0x1
    li r0, 0x1
    beq lbl_fn_804B4700_000000C0
    cmpw r0, r4
    bne lbl_fn_804B4700_000000D0
lbl_fn_804B4700_000000C0:
    lwz r5, 0xbc(r3)
    lwz r0, 0x38(r5)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r5)
lbl_fn_804B4700_000000D0:
    cmpwi r4, -0x1
    li r0, 0x2
    beq lbl_fn_804B4700_000000E4
    cmpw r0, r4
    bnelr
lbl_fn_804B4700_000000E4:
    lwz r5, 0xc0(r3)
    lwz r0, 0x38(r5)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r5)
    blr
}

asm void fn_804B4770(void)
{
    nofralloc
    cmpwi r4, -0x1
    li r0, 0x0
    beq lbl_fn_804B4770_0000010C
    cmpw r0, r4
    bne lbl_fn_804B4770_0000011C
lbl_fn_804B4770_0000010C:
    lwz r5, 0xb8(r3)
    lwz r0, 0x38(r5)
    ori r0, r0, 0x4
    stw r0, 0x38(r5)
lbl_fn_804B4770_0000011C:
    cmpwi r4, -0x1
    li r0, 0x1
    beq lbl_fn_804B4770_00000130
    cmpw r0, r4
    bne lbl_fn_804B4770_00000140
lbl_fn_804B4770_00000130:
    lwz r5, 0xbc(r3)
    lwz r0, 0x38(r5)
    ori r0, r0, 0x4
    stw r0, 0x38(r5)
lbl_fn_804B4770_00000140:
    cmpwi r4, -0x1
    li r0, 0x2
    beq lbl_fn_804B4770_00000154
    cmpw r0, r4
    bnelr
lbl_fn_804B4770_00000154:
    lwz r5, 0xc0(r3)
    lwz r0, 0x38(r5)
    ori r0, r0, 0x4
    stw r0, 0x38(r5)
    blr
}

asm void fn_804B47E0(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    addi r11, r1, 0x80
    stfd f31, 0x80(r1)
    psq_st f31, 0x88(r1), 0, 0
    bl _savegpr_25
    cmpwi r4, 0x0
    mr r30, r3
    mr r25, r5
    bge lbl_fn_804B47E0_0000019C
    lwz r3, lbl_8087F628
    lwz r4, 0xc28(r3)
lbl_fn_804B47E0_0000019C:
    lwz r3, lbl_8087F610
    addi r3, r3, 0x610
    bl fn_805075C8
    lwz r4, 0x0(r3)
    li r0, 0x0
    cmpwi r25, 0x3
    stw r0, 0x8(r1)
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stw r0, 0x1c(r1)
    stw r0, 0x20(r1)
    stw r0, 0x24(r1)
    stw r0, 0x28(r1)
    stw r0, 0x2c(r1)
    stw r0, 0x30(r1)
    stw r0, 0x34(r1)
    stw r0, 0x38(r1)
    stw r0, 0x3c(r1)
    stw r0, 0x40(r1)
    stw r0, 0x44(r1)
    ble lbl_fn_804B47E0_000001FC
    li r25, 0x3
lbl_fn_804B47E0_000001FC:
    lwz r3, 0xb0(r30)
    cmplw r4, r3
    blt lbl_fn_804B47E0_0000020C
    subi r4, r3, 0x1
lbl_fn_804B47E0_0000020C:
    lwz r0, 0xb4(r30)
    slwi r31, r4, 4
    lis r27, 0x4330
    lis r26, lbl_80757AA0@ha
    add r3, r0, r31
    slwi r4, r25, 2
    lwz r0, 0x4(r3)
    add r29, r30, r4
    stw r0, 0x4c(r1)
    lis r3, lbl_80757B7C@ha
    lwz r4, 0xb8(r29)
    addi r28, r3, lbl_80757B7C@l
    stw r27, 0x48(r1)
    addi r3, r28, 0x564
    lfd f1, lbl_80757AA0@l(r26)
    addi r25, r4, 0x58
    lfd f0, 0x48(r1)
    fsubs f31, f0, f1
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r3, r25
    bl fn_801FECE0
    lwz r0, 0xb4(r30)
    addi r3, r28, 0x571
    lwz r4, 0xb8(r29)
    add r5, r0, r31
    stw r27, 0x50(r1)
    lwz r5, 0x8(r5)
    addi r25, r4, 0x58
    lfd f1, lbl_80757AA0@l(r26)
    addi r0, r5, 0x3
    stw r0, 0x54(r1)
    lfd f0, 0x50(r1)
    fsubs f31, f0, f1
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r3, r25
    bl fn_801FECE0
    li r26, 0x0
lbl_fn_804B47E0_000002B0:
    addi r3, r1, 0x8
    addi r4, r28, 0x57c
    addi r5, r26, 0x1
    crclr 6
    bl sprintf
    lwz r0, 0xb4(r30)
    add r3, r31, r0
    lwz r0, 0xc(r3)
    cmplw r26, r0
    bge lbl_fn_804B47E0_000002FC
    lwz r4, 0xb8(r29)
    addi r3, r1, 0x8
    addi r25, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80887318
    mr r4, r3
    mr r3, r25
    bl fn_801FECE0
    b lbl_fn_804B47E0_0000031C
lbl_fn_804B47E0_000002FC:
    lwz r4, 0xb8(r29)
    addi r3, r1, 0x8
    addi r25, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80887308
    mr r4, r3
    mr r3, r25
    bl fn_801FECE0
lbl_fn_804B47E0_0000031C:
    addi r26, r26, 0x1
    cmpwi r26, 0x4
    blt lbl_fn_804B47E0_000002B0
    addi r11, r1, 0x80
    psq_l f31, 0x88(r1), 0, 0
    lfd f31, 0x80(r1)
    bl _restgpr_25
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_804B49C0(void)
{
    nofralloc
    slwi r0, r5, 2
    lis r6, lbl_80757B7C@ha
    add r3, r3, r0
    mr r5, r4
    addi r6, r6, lbl_80757B7C@l
    lwz r3, 0xb8(r3)
    addi r4, r6, 0x4b1
    b fn_801F4728
}

asm void fn_804B49E0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r5
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r6, lbl_8087F610
    addi r3, r6, 0x610
    bl fn_805075C8
    lwz r0, 0x0(r3)
    lwz r3, 0xb0(r28)
    cmplw r0, r3
    blt lbl_fn_804B49E0_000003AC
    subi r0, r3, 0x1
lbl_fn_804B49E0_000003AC:
    lwz r4, 0xb4(r28)
    slwi r3, r0, 4
    slwi r0, r29, 2
    lis r30, lbl_80757B7C@ha
    lwzx r4, r4, r3
    add r29, r28, r0
    addi r30, r30, lbl_80757B7C@l
    lwz r3, 0xb8(r29)
    mulli r31, r4, 0xc
    addi r4, r30, 0x4bc
    add r5, r28, r31
    lwz r5, 0x50(r5)
    bl fn_801F4998
    add r4, r28, r31
    lwz r3, 0xb8(r29)
    lwz r5, 0x54(r4)
    addi r4, r30, 0x4ca
    bl fn_801F4998
    add r31, r28, r31
    lwz r3, 0xb8(r29)
    lwz r5, 0x58(r31)
    addi r4, r30, 0x4d8
    bl fn_801F4998
    lwz r3, 0xb8(r29)
    addi r4, r30, 0x4dd
    lwz r5, 0x58(r31)
    bl fn_801F4998
    lwz r3, 0xb8(r29)
    addi r4, r30, 0x4e2
    lwz r5, 0x58(r31)
    bl fn_801F4998
    lwz r3, 0xb8(r29)
    addi r4, r30, 0x4e7
    lwz r5, 0x58(r31)
    bl fn_801F4998
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804B4AD0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    blt lbl_fn_804B4AD0_00000494
    lwz r12, 0x8(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    cmpw r31, r3
    blt lbl_fn_804B4AD0_0000049C
lbl_fn_804B4AD0_00000494:
    li r3, 0x0
    b lbl_fn_804B4AD0_000004A8
lbl_fn_804B4AD0_0000049C:
    mulli r0, r31, 0x50
    add r3, r30, r0
    addi r3, r3, 0xc
lbl_fn_804B4AD0_000004A8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804B4B38(void)
{
    nofralloc
    li r3, 0x41
    blr
}

asm void fn_804B4B40(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    blt lbl_fn_804B4B40_00000504
    lwz r12, 0x8(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    cmpw r31, r3
    blt lbl_fn_804B4B40_0000050C
lbl_fn_804B4B40_00000504:
    li r3, 0x0
    b lbl_fn_804B4B40_00000518
lbl_fn_804B4B40_0000050C:
    mulli r0, r31, 0x50
    add r3, r30, r0
    addi r3, r3, 0xc
lbl_fn_804B4B40_00000518:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804B4BA8(void)
{
    nofralloc
    li r3, 0x1e
    blr
}

asm void fn_804B4BB0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    blt lbl_fn_804B4BB0_00000574
    lwz r12, 0x8(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    cmpw r31, r3
    blt lbl_fn_804B4BB0_0000057C
lbl_fn_804B4BB0_00000574:
    li r3, 0x0
    b lbl_fn_804B4BB0_00000588
lbl_fn_804B4BB0_0000057C:
    mulli r0, r31, 0x50
    add r3, r30, r0
    addi r3, r3, 0xc
lbl_fn_804B4BB0_00000588:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804B4C18(void)
{
    nofralloc
    li r3, 0x1e
    blr
}

asm void fn_804B4C20(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r3, lbl_80757B7C@ha
    addi r3, r3, lbl_80757B7C@l
    stw r0, 0x14(r1)
    addi r3, r3, 0x586
    bl fn_800DC6B4
    lwz r0, 0x14(r1)
    stw r3, lbl_8087F598
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804B4C50(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, lbl_8087F5A8
    cmpwi r0, 0x0
    bne lbl_fn_804B4C50_00000628
    lis r5, lbl_80758150@ha
    li r3, 0x110
    addi r5, r5, lbl_80758150@l
    li r4, 0x1
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_804B4C50_00000624
    mr r4, r31
    bl fn_804B4CB8
lbl_fn_804B4C50_00000624:
    stw r3, lbl_8087F5A8
lbl_fn_804B4C50_00000628:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    lwz r3, lbl_8087F5A8
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804B4CB8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r29, r3
    bl fn_800D1D3C
    lis r3, lbl_80790B78@ha
    lis r4, lbl_80758150@ha
    li r0, 0x0
    stw r0, 0x9c(r29)
    addi r3, r3, lbl_80790B78@l
    addi r4, r4, lbl_80758150@l
    stw r3, 0x0(r29)
    mr r3, r29
    addi r4, r4, 0x1
    li r5, 0x0
    stw r0, 0xa0(r29)
    stw r0, 0xa4(r29)
    stw r0, 0xa8(r29)
    stw r0, 0x10c(r29)
    bl fn_801F3FF8
    lwz r0, 0xa8(r29)
    stw r3, 0x48(r29)
    cmplwi r0, 0x18
    bge lbl_fn_804B4CB8_000006C8
    lwz r0, 0xa8(r29)
    slwi r0, r0, 2
    add r0, r29, r0
    addic. r4, r0, 0xac
    beq lbl_fn_804B4CB8_000006BC
    stw r3, 0x0(r4)
lbl_fn_804B4CB8_000006BC:
    lwz r3, 0xa8(r29)
    addi r0, r3, 0x1
    stw r0, 0xa8(r29)
lbl_fn_804B4CB8_000006C8:
    lis r4, lbl_80758150@ha
    mr r3, r29
    addi r4, r4, lbl_80758150@l
    li r5, 0x0
    addi r4, r4, 0x25
    bl fn_801F3FF8
    lwz r0, 0xa8(r29)
    stw r3, 0x4c(r29)
    cmplwi r0, 0x18
    bge lbl_fn_804B4CB8_00000714
    lwz r0, 0xa8(r29)
    slwi r0, r0, 2
    add r0, r29, r0
    addic. r4, r0, 0xac
    beq lbl_fn_804B4CB8_00000708
    stw r3, 0x0(r4)
lbl_fn_804B4CB8_00000708:
    lwz r3, 0xa8(r29)
    addi r0, r3, 0x1
    stw r0, 0xa8(r29)
lbl_fn_804B4CB8_00000714:
    lis r3, lbl_80758150@ha
    li r30, 0x0
    li r31, 0x0
    addi r28, r3, lbl_80758150@l
lbl_fn_804B4CB8_00000724:
    mr r3, r29
    add r27, r29, r31
    addi r4, r28, 0x44
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x50(r27)
    lwz r0, 0xa8(r29)
    cmplwi r0, 0x18
    bge lbl_fn_804B4CB8_0000076C
    lwz r0, 0xa8(r29)
    slwi r0, r0, 2
    add r0, r29, r0
    addic. r4, r0, 0xac
    beq lbl_fn_804B4CB8_00000760
    stw r3, 0x0(r4)
lbl_fn_804B4CB8_00000760:
    lwz r3, 0xa8(r29)
    addi r0, r3, 0x1
    stw r0, 0xa8(r29)
lbl_fn_804B4CB8_0000076C:
    mr r3, r29
    add r27, r29, r31
    addi r4, r28, 0x61
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x70(r27)
    lwz r0, 0xa8(r29)
    cmplwi r0, 0x18
    bge lbl_fn_804B4CB8_000007B4
    lwz r0, 0xa8(r29)
    slwi r0, r0, 2
    add r0, r29, r0
    addic. r4, r0, 0xac
    beq lbl_fn_804B4CB8_000007A8
    stw r3, 0x0(r4)
lbl_fn_804B4CB8_000007A8:
    lwz r3, 0xa8(r29)
    addi r0, r3, 0x1
    stw r0, 0xa8(r29)
lbl_fn_804B4CB8_000007B4:
    addi r30, r30, 0x1
    addi r31, r31, 0x4
    cmpwi r30, 0x8
    blt lbl_fn_804B4CB8_00000724
    lis r4, lbl_80758150@ha
    mr r3, r29
    addi r4, r4, lbl_80758150@l
    li r5, 0x0
    addi r4, r4, 0x82
    bl fn_801F3FF8
    lwz r0, 0xa8(r29)
    stw r3, 0x90(r29)
    cmplwi r0, 0x18
    bge lbl_fn_804B4CB8_00000810
    lwz r0, 0xa8(r29)
    slwi r0, r0, 2
    add r0, r29, r0
    addic. r4, r0, 0xac
    beq lbl_fn_804B4CB8_00000804
    stw r3, 0x0(r4)
lbl_fn_804B4CB8_00000804:
    lwz r3, 0xa8(r29)
    addi r0, r3, 0x1
    stw r0, 0xa8(r29)
lbl_fn_804B4CB8_00000810:
    lis r4, lbl_80758150@ha
    mr r3, r29
    addi r4, r4, lbl_80758150@l
    li r5, 0x0
    addi r4, r4, 0xa2
    bl fn_801F3FF8
    lwz r0, 0xa8(r29)
    stw r3, 0x94(r29)
    cmplwi r0, 0x18
    bge lbl_fn_804B4CB8_0000085C
    lwz r0, 0xa8(r29)
    slwi r0, r0, 2
    add r0, r29, r0
    addic. r4, r0, 0xac
    beq lbl_fn_804B4CB8_00000850
    stw r3, 0x0(r4)
lbl_fn_804B4CB8_00000850:
    lwz r3, 0xa8(r29)
    addi r0, r3, 0x1
    stw r0, 0xa8(r29)
lbl_fn_804B4CB8_0000085C:
    lis r4, lbl_80758150@ha
    mr r3, r29
    addi r4, r4, lbl_80758150@l
    li r5, 0x0
    addi r4, r4, 0xc4
    bl fn_801F3FF8
    lwz r0, 0xa8(r29)
    stw r3, 0x98(r29)
    cmplwi r0, 0x18
    bge lbl_fn_804B4CB8_000008A8
    lwz r0, 0xa8(r29)
    slwi r0, r0, 2
    add r0, r29, r0
    addic. r4, r0, 0xac
    beq lbl_fn_804B4CB8_0000089C
    stw r3, 0x0(r4)
lbl_fn_804B4CB8_0000089C:
    lwz r3, 0xa8(r29)
    addi r0, r3, 0x1
    stw r0, 0xa8(r29)
lbl_fn_804B4CB8_000008A8:
    addi r28, r29, 0xac
    b lbl_fn_804B4CB8_000008C8
lbl_fn_804B4CB8_000008B0:
    lwz r3, 0x0(r28)
    cmpwi r3, 0x0
    beq lbl_fn_804B4CB8_000008C4
    li r4, 0x1
    bl fn_800D246C
lbl_fn_804B4CB8_000008C4:
    addi r28, r28, 0x4
lbl_fn_804B4CB8_000008C8:
    lwz r0, 0xa8(r29)
    slwi r0, r0, 2
    add r3, r29, r0
    addi r0, r3, 0xac
    cmplw r28, r0
    bne lbl_fn_804B4CB8_000008B0
    mr r3, r29
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804B4F70(void)
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
    beq lbl_fn_804B4F70_0000094C
    lwz r0, lbl_8087F5A8
    cmpwi r0, 0x0
    beq lbl_fn_804B4F70_00000930
    li r0, 0x0
    stw r0, lbl_8087F5A8
lbl_fn_804B4F70_00000930:
    mr r3, r30
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r31, 0x0
    ble lbl_fn_804B4F70_0000094C
    mr r3, r30
    bl dtor_80084684
lbl_fn_804B4F70_0000094C:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804B4FE0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_800D3FA4
    cmpwi r3, 0x0
    beq lbl_fn_804B4FE0_00000A2C
    addi r31, r30, 0xac
    b lbl_fn_804B4FE0_000009AC
lbl_fn_804B4FE0_00000994:
    lwz r3, 0x0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_804B4FE0_000009A8
    li r4, 0x0
    bl fn_800D246C
lbl_fn_804B4FE0_000009A8:
    addi r31, r31, 0x4
lbl_fn_804B4FE0_000009AC:
    lwz r0, 0xa8(r30)
    slwi r0, r0, 2
    add r3, r30, r0
    addi r0, r3, 0xac
    cmplw r31, r0
    bne lbl_fn_804B4FE0_00000994
    lwz r4, 0x90(r30)
    li r3, 0x1
    lfs f0, lbl_80887348
    lwz r0, 0xfc(r4)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r4)
    lwz r4, 0x90(r30)
    lfs f1, 0xa0(r4)
    stfs f1, 0x100(r4)
    lwz r4, 0x94(r30)
    lwz r0, 0xfc(r4)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r4)
    lwz r4, 0x94(r30)
    lfs f1, 0xa0(r4)
    stfs f1, 0x100(r4)
    lwz r4, 0x98(r30)
    lwz r0, 0xfc(r4)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r4)
    lwz r4, 0x98(r30)
    lfs f1, 0xa0(r4)
    stfs f1, 0x100(r4)
    lwz r4, 0x98(r30)
    stfs f0, 0x104(r4)
    b lbl_fn_804B4FE0_00000A30
lbl_fn_804B4FE0_00000A2C:
    li r3, 0x0
lbl_fn_804B4FE0_00000A30:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804B50C0(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x40
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    bl _savegpr_27
    lwz r5, 0x9c(r3)
    mr r31, r3
    cmpw r5, r4
    beq lbl_fn_804B50C0_00000C84
    cmpwi r4, 0x0
    blt lbl_fn_804B50C0_00000C84
    cmpwi r4, 0x1
    li r0, 0x0
    stw r0, 0xa4(r3)
    stw r5, 0xa0(r3)
    stw r4, 0x9c(r3)
    beq lbl_fn_804B50C0_00000AA0
    cmpwi r4, 0x3
    beq lbl_fn_804B50C0_00000C1C
    b lbl_fn_804B50C0_00000C84
lbl_fn_804B50C0_00000AA0:
    lwz r4, 0x48(r3)
    lfs f0, lbl_8088734C
    stfs f0, 0x100(r4)
    lwz r4, 0x4c(r3)
    stfs f0, 0x100(r4)
    lwz r28, 0x48(r3)
    cmpwi r28, 0x0
    beq lbl_fn_804B50C0_00000AE0
    mr r3, r28
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887350
    stfs f0, 0x104(r28)
    lwz r0, 0xfc(r28)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r28)
lbl_fn_804B50C0_00000AE0:
    lwz r28, 0x4c(r31)
    cmpwi r28, 0x0
    beq lbl_fn_804B50C0_00000B0C
    mr r3, r28
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887350
    stfs f0, 0x104(r28)
    lwz r0, 0xfc(r28)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r28)
lbl_fn_804B50C0_00000B0C:
    li r28, 0x0
    lis r29, lbl_80790BB8@ha
    stw r28, 0x18(r1)
    addi r3, r1, 0x18
    addi r4, r29, lbl_80790BB8@l
    li r5, 0x0
    stw r28, 0x1c(r1)
    stw r28, 0x20(r1)
    stw r28, 0x24(r1)
    crclr 6
    bl fn_800DD3FC
    lwz r4, 0x4c(r31)
    lis r30, lbl_80758150@ha
    addi r30, r30, lbl_80758150@l
    addi r3, r30, 0xe7
    addi r27, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r27
    addi r5, r1, 0x18
    bl fn_801FEE08
    stw r28, 0x8(r1)
    addi r3, r1, 0x8
    addi r4, r29, lbl_80790BB8@l
    li r5, 0x0
    stw r28, 0xc(r1)
    stw r28, 0x10(r1)
    stw r28, 0x14(r1)
    crclr 6
    bl fn_800DD3FC
    lwz r4, 0x4c(r31)
    addi r3, r30, 0xf5
    addi r27, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r27
    addi r5, r1, 0x8
    bl fn_801FEE08
    lfs f31, lbl_80887350
    mr r27, r31
    li r29, 0x0
lbl_fn_804B50C0_00000BB0:
    lwz r28, 0x50(r27)
    cmpwi r28, 0x0
    beq lbl_fn_804B50C0_00000BD8
    mr r3, r28
    li r4, 0x0
    bl fn_800D246C
    stfs f31, 0x104(r28)
    lwz r0, 0xfc(r28)
    oris r0, r0, 0x1000
    stw r0, 0xfc(r28)
lbl_fn_804B50C0_00000BD8:
    lwz r28, 0x70(r27)
    cmpwi r28, 0x0
    beq lbl_fn_804B50C0_00000C00
    mr r3, r28
    li r4, 0x0
    bl fn_800D246C
    stfs f31, 0x104(r28)
    lwz r0, 0xfc(r28)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r28)
lbl_fn_804B50C0_00000C00:
    addi r29, r29, 0x1
    addi r27, r27, 0x4
    cmpwi r29, 0x8
    blt lbl_fn_804B50C0_00000BB0
    li r0, 0x0
    stw r0, 0x10c(r31)
    b lbl_fn_804B50C0_00000C84
lbl_fn_804B50C0_00000C1C:
    lwz r12, 0x0(r3)
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
    lwz r28, 0x48(r31)
    cmpwi r28, 0x0
    beq lbl_fn_804B50C0_00000C58
    mr r3, r28
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887354
    stfs f0, 0x104(r28)
    lwz r0, 0xfc(r28)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r28)
lbl_fn_804B50C0_00000C58:
    lwz r28, 0x4c(r31)
    cmpwi r28, 0x0
    beq lbl_fn_804B50C0_00000C84
    mr r3, r28
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887354
    stfs f0, 0x104(r28)
    lwz r0, 0xfc(r28)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r28)
lbl_fn_804B50C0_00000C84:
    addi r11, r1, 0x40
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    bl _restgpr_27
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_804B531C(void)
{
    nofralloc
    blr
}

asm void fn_804B5320(void)
{
    nofralloc
    lwz r0, 0x9c(r3)
    cmpwi r0, 0x1
    beq lbl_fn_804B5320_00000CC0
    cmpwi r0, 0x3
    beq lbl_fn_804B5320_00000CC4
    blr
lbl_fn_804B5320_00000CC0:
    b fn_804B5360
lbl_fn_804B5320_00000CC4:
    lwz r4, 0x4c(r3)
    lfs f0, lbl_8088734C
    lfs f1, 0x100(r4)
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bnelr
    li r4, 0x4
    b fn_804B50C0
    blr
}

asm void fn_804B5360(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    mr r30, r3
    lwz r5, 0x10c(r3)
    cmpwi r5, 0x0
    bne lbl_fn_804B5360_00000D68
    lwz r4, 0x48(r3)
    lfs f0, lbl_80887358
    lfs f1, 0x100(r4)
    fcmpo cr0, f1, f0
    bge lbl_fn_804B5360_00000D68
    addi r0, r5, 0x1
    stw r0, 0x10c(r3)
    lwz r4, lbl_8087F498
    cmpwi r4, 0x0
    beq lbl_fn_804B5360_00000DCC
    lis r5, lbl_80758150@ha
    lfs f1, lbl_80887350
    addi r5, r5, lbl_80758150@l
    addi r3, r1, 0xc
    li r6, 0x0
    li r7, 0x1
    addi r5, r5, 0x103
    bl fn_803E9608
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_804B5360_00000DCC
lbl_fn_804B5360_00000D68:
    cmpwi r5, 0x1
    bne lbl_fn_804B5360_00000DCC
    lwz r4, 0x48(r3)
    lfs f0, lbl_80887358
    lfs f1, 0x100(r4)
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_804B5360_00000DCC
    lwz r4, 0x10c(r3)
    addi r0, r4, 0x1
    stw r0, 0x10c(r3)
    lwz r4, lbl_8087F498
    cmpwi r4, 0x0
    beq lbl_fn_804B5360_00000DCC
    lis r5, lbl_80758150@ha
    lfs f1, lbl_80887350
    addi r5, r5, lbl_80758150@l
    addi r3, r1, 0x8
    li r6, 0x0
    li r7, 0x1
    addi r5, r5, 0x110
    bl fn_803E9608
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_804B5360_00000DCC:
    lwz r3, 0x48(r30)
    lfs f1, 0xa0(r3)
    lfs f0, 0x100(r3)
    fcmpo cr0, f0, f1
    cror eq, gt, eq
    mfcr r0
    extrwi. r0, r0, 1, 2
    beq lbl_fn_804B5360_00000DF0
    li r31, 0x1
lbl_fn_804B5360_00000DF0:
    cmpwi r31, 0x0
    beq lbl_fn_804B5360_00000E04
    mr r3, r30
    li r4, 0x2
    bl fn_804B50C0
lbl_fn_804B5360_00000E04:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804B5494(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    lwz r4, 0x48(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x4c(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x50(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x70(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x54(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x74(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x58(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x78(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x5c(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x7c(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x60(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x80(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x64(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x84(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x68(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x88(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x6c(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0x8c(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r0, 0x9c(r3)
    cmpwi r0, 0x1
    beq lbl_fn_804B5494_00000F78
    cmpwi r0, 0x2
    beq lbl_fn_804B5494_00001130
    cmpwi r0, 0x3
    beq lbl_fn_804B5494_000012D8
    b lbl_fn_804B5494_0000147C
lbl_fn_804B5494_00000F78:
    lwz r4, 0x48(r3)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r3, 0x4c(r3)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, lbl_8087F59C
    lwz r0, 0xc4(r3)
    cmpwi r0, 0x1
    beq lbl_fn_804B5494_00001068
    lwz r4, 0x4c(r31)
    lis r30, lbl_80758150@ha
    addi r30, r30, lbl_80758150@l
    addi r3, r30, 0x11d
    addi r29, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_8088735C
    mr r4, r3
    mr r3, r29
    li r5, 0x0
    bl fn_801FED24
    lwz r4, 0x4c(r31)
    addi r3, r30, 0x125
    addi r29, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_8088735C
    mr r4, r3
    mr r3, r29
    li r5, 0x0
    bl fn_801FED24
    lwz r4, 0x4c(r31)
    addi r3, r30, 0x12d
    addi r29, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_8088735C
    mr r4, r3
    mr r3, r29
    li r5, 0x0
    bl fn_801FED24
    lwz r4, 0x4c(r31)
    addi r3, r30, 0x135
    addi r29, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_8088735C
    mr r4, r3
    mr r3, r29
    li r5, 0x0
    bl fn_801FED24
    lwz r4, 0x4c(r31)
    addi r3, r30, 0x13d
    addi r29, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_8088735C
    mr r4, r3
    mr r3, r29
    li r5, 0x0
    bl fn_801FED24
    b lbl_fn_804B5494_00001124
lbl_fn_804B5494_00001068:
    lwz r4, 0x4c(r31)
    lis r30, lbl_80758150@ha
    addi r30, r30, lbl_80758150@l
    addi r3, r30, 0x11d
    addi r29, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80887360
    mr r4, r3
    mr r3, r29
    li r5, 0x0
    bl fn_801FED24
    lwz r4, 0x4c(r31)
    addi r3, r30, 0x125
    addi r29, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80887364
    mr r4, r3
    mr r3, r29
    li r5, 0x0
    bl fn_801FED24
    lwz r4, 0x4c(r31)
    addi r3, r30, 0x12d
    addi r29, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80887368
    mr r4, r3
    mr r3, r29
    li r5, 0x0
    bl fn_801FED24
    lwz r4, 0x4c(r31)
    addi r3, r30, 0x135
    addi r29, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_8088736C
    mr r4, r3
    mr r3, r29
    li r5, 0x0
    bl fn_801FED24
    lwz r4, 0x4c(r31)
    addi r3, r30, 0x13d
    addi r29, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80887370
    mr r4, r3
    mr r3, r29
    li r5, 0x0
    bl fn_801FED24
lbl_fn_804B5494_00001124:
    mr r3, r31
    bl fn_804B5B10
    b lbl_fn_804B5494_0000147C
lbl_fn_804B5494_00001130:
    lwz r3, 0x4c(r3)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, lbl_8087F59C
    lwz r0, 0xc4(r3)
    cmpwi r0, 0x1
    beq lbl_fn_804B5494_00001210
    lwz r4, 0x4c(r31)
    lis r30, lbl_80758150@ha
    addi r30, r30, lbl_80758150@l
    addi r3, r30, 0x11d
    addi r29, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_8088735C
    mr r4, r3
    mr r3, r29
    li r5, 0x0
    bl fn_801FED24
    lwz r4, 0x4c(r31)
    addi r3, r30, 0x125
    addi r29, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_8088735C
    mr r4, r3
    mr r3, r29
    li r5, 0x0
    bl fn_801FED24
    lwz r4, 0x4c(r31)
    addi r3, r30, 0x12d
    addi r29, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_8088735C
    mr r4, r3
    mr r3, r29
    li r5, 0x0
    bl fn_801FED24
    lwz r4, 0x4c(r31)
    addi r3, r30, 0x135
    addi r29, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_8088735C
    mr r4, r3
    mr r3, r29
    li r5, 0x0
    bl fn_801FED24
    lwz r4, 0x4c(r31)
    addi r3, r30, 0x13d
    addi r29, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_8088735C
    mr r4, r3
    mr r3, r29
    li r5, 0x0
    bl fn_801FED24
    b lbl_fn_804B5494_000012CC
lbl_fn_804B5494_00001210:
    lwz r4, 0x4c(r31)
    lis r30, lbl_80758150@ha
    addi r30, r30, lbl_80758150@l
    addi r3, r30, 0x11d
    addi r29, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80887360
    mr r4, r3
    mr r3, r29
    li r5, 0x0
    bl fn_801FED24
    lwz r4, 0x4c(r31)
    addi r3, r30, 0x125
    addi r29, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80887364
    mr r4, r3
    mr r3, r29
    li r5, 0x0
    bl fn_801FED24
    lwz r4, 0x4c(r31)
    addi r3, r30, 0x12d
    addi r29, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80887368
    mr r4, r3
    mr r3, r29
    li r5, 0x0
    bl fn_801FED24
    lwz r4, 0x4c(r31)
    addi r3, r30, 0x135
    addi r29, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_8088736C
    mr r4, r3
    mr r3, r29
    li r5, 0x0
    bl fn_801FED24
    lwz r4, 0x4c(r31)
    addi r3, r30, 0x13d
    addi r29, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80887370
    mr r4, r3
    mr r3, r29
    li r5, 0x0
    bl fn_801FED24
lbl_fn_804B5494_000012CC:
    mr r3, r31
    bl fn_804B5B10
    b lbl_fn_804B5494_0000147C
lbl_fn_804B5494_000012D8:
    lwz r12, 0x0(r3)
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
    lwz r3, lbl_8087F59C
    lwz r0, 0xc4(r3)
    cmpwi r0, 0x1
    beq lbl_fn_804B5494_000013B8
    lwz r4, 0x4c(r31)
    lis r30, lbl_80758150@ha
    addi r30, r30, lbl_80758150@l
    addi r3, r30, 0x11d
    addi r29, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_8088735C
    mr r4, r3
    mr r3, r29
    li r5, 0x0
    bl fn_801FED24
    lwz r4, 0x4c(r31)
    addi r3, r30, 0x125
    addi r29, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_8088735C
    mr r4, r3
    mr r3, r29
    li r5, 0x0
    bl fn_801FED24
    lwz r4, 0x4c(r31)
    addi r3, r30, 0x12d
    addi r29, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_8088735C
    mr r4, r3
    mr r3, r29
    li r5, 0x0
    bl fn_801FED24
    lwz r4, 0x4c(r31)
    addi r3, r30, 0x135
    addi r29, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_8088735C
    mr r4, r3
    mr r3, r29
    li r5, 0x0
    bl fn_801FED24
    lwz r4, 0x4c(r31)
    addi r3, r30, 0x13d
    addi r29, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_8088735C
    mr r4, r3
    mr r3, r29
    li r5, 0x0
    bl fn_801FED24
    b lbl_fn_804B5494_00001474
lbl_fn_804B5494_000013B8:
    lwz r4, 0x4c(r31)
    lis r30, lbl_80758150@ha
    addi r30, r30, lbl_80758150@l
    addi r3, r30, 0x11d
    addi r29, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80887360
    mr r4, r3
    mr r3, r29
    li r5, 0x0
    bl fn_801FED24
    lwz r4, 0x4c(r31)
    addi r3, r30, 0x125
    addi r29, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80887364
    mr r4, r3
    mr r3, r29
    li r5, 0x0
    bl fn_801FED24
    lwz r4, 0x4c(r31)
    addi r3, r30, 0x12d
    addi r29, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80887368
    mr r4, r3
    mr r3, r29
    li r5, 0x0
    bl fn_801FED24
    lwz r4, 0x4c(r31)
    addi r3, r30, 0x135
    addi r29, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_8088736C
    mr r4, r3
    mr r3, r29
    li r5, 0x0
    bl fn_801FED24
    lwz r4, 0x4c(r31)
    addi r3, r30, 0x13d
    addi r29, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80887370
    mr r4, r3
    mr r3, r29
    li r5, 0x0
    bl fn_801FED24
lbl_fn_804B5494_00001474:
    mr r3, r31
    bl fn_804B5B10
lbl_fn_804B5494_0000147C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804B5B10(void)
{
    nofralloc
    stwu r1, -0x180(r1)
    mflr r0
    stw r0, 0x184(r1)
    addi r11, r1, 0xf0
    stfd f31, 0x170(r1)
    psq_st f31, 0x178(r1), 0, 0
    stfd f30, 0x160(r1)
    psq_st f30, 0x168(r1), 0, 0
    stfd f29, 0x150(r1)
    psq_st f29, 0x158(r1), 0, 0
    stfd f28, 0x140(r1)
    psq_st f28, 0x148(r1), 0, 0
    stfd f27, 0x130(r1)
    psq_st f27, 0x138(r1), 0, 0
    stfd f26, 0x120(r1)
    psq_st f26, 0x128(r1), 0, 0
    stfd f25, 0x110(r1)
    psq_st f25, 0x118(r1), 0, 0
    stfd f24, 0x100(r1)
    psq_st f24, 0x108(r1), 0, 0
    stfd f23, 0xf0(r1)
    psq_st f23, 0xf8(r1), 0, 0
    bl _savegpr_17
    lis r0, 0x4330
    mr r31, r3
    stw r0, 0x98(r1)
    lwz r3, lbl_8087F610
    stw r0, 0xa0(r1)
    bl fn_804EB874
    cmpwi r3, 0x0
    beq lbl_fn_804B5B10_00001B2C
    lwz r3, lbl_8087F610
    bl fn_804EB874
    lwz r5, lbl_8087F610
    lwz r0, 0xd0(r3)
    lwz r3, 0x540(r5)
    extrwi r24, r0, 4, 6
    cmpwi r3, 0x0
    bne lbl_fn_804B5B10_000017EC
    lwz r0, 0x50c(r5)
    cmpwi r0, 0x5
    bge lbl_fn_804B5B10_000017EC
    lis r3, lbl_80758130@ha
    lis r4, lbl_80758150@ha
    lfs f27, lbl_8088734C
    addi r23, r5, 0x2b88
    lfs f28, lbl_80887374
    addi r27, r4, lbl_80758150@l
    lfs f25, lbl_80887380
    addi r26, r1, 0x8c
    lfs f26, lbl_80887384
    li r5, 0x0
    lfd f31, lbl_80758130@l(r3)
    li r22, 0x1
    lfs f24, lbl_8088737C
    li r21, 0x0
    lfs f30, lbl_80887378
    li r19, 0x0
    lfs f29, lbl_80887350
    li r18, 0x0
    lis r29, 0xffe6
    lis r28, 0xff97
    lis r30, 0xffcd
    b lbl_fn_804B5B10_000017E0
lbl_fn_804B5B10_00001598:
    add r20, r23, r19
    lwzu r4, 0x4(r20)
    cmpwi r4, 0x0
    beq lbl_fn_804B5B10_000017D4
    cmpwi r22, 0x1
    bne lbl_fn_804B5B10_000015BC
    lwz r0, 0xdc(r20)
    cmpwi r0, 0x0
    beq lbl_fn_804B5B10_000017EC
lbl_fn_804B5B10_000015BC:
    cmpwi r22, 0x1
    bne lbl_fn_804B5B10_000015D0
    lwz r0, 0xdc(r20)
    cmpwi r0, 0x0
    beq lbl_fn_804B5B10_000017EC
lbl_fn_804B5B10_000015D0:
    cmpwi r5, 0x0
    beq lbl_fn_804B5B10_000015EC
    lwz r3, 0xdc(r5)
    lwz r0, 0xdc(r20)
    cmpw r3, r0
    ble lbl_fn_804B5B10_000015EC
    addi r22, r22, 0x1
lbl_fn_804B5B10_000015EC:
    cmpwi r22, 0x2
    bgt lbl_fn_804B5B10_000017EC
    addi r25, r4, 0xb0
    addi r4, r27, 0x145
    mr r3, r25
    li r5, 0x0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_804B5B10_00001618
    li r3, 0x0
    b lbl_fn_804B5B10_00001624
lbl_fn_804B5B10_00001618:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r25)
    add r3, r3, r0
lbl_fn_804B5B10_00001624:
    cmpwi r3, 0x0
    beq lbl_fn_804B5B10_00001670
    lfs f0, 0x2c(r3)
    addi r4, r1, 0x44
    lfs f3, 0x1c(r3)
    lfs f4, 0xc(r3)
    fadds f5, f0, f27
    fadds f6, f3, f28
    stfs f27, 0x5c(r1)
    fadds f7, f4, f27
    stfs f28, 0x60(r1)
    stfs f27, 0x64(r1)
    stfs f4, 0x50(r1)
    stfs f3, 0x54(r1)
    stfs f0, 0x58(r1)
    stfs f7, 0x44(r1)
    stfs f6, 0x48(r1)
    stfs f5, 0x4c(r1)
    b lbl_fn_804B5B10_0000168C
lbl_fn_804B5B10_00001670:
    lwz r4, 0x0(r20)
    addi r3, r1, 0x38
    lwz r12, 0x0(r4)
    lwz r12, 0x58(r12)
    mtctr r12
    bctrl
    addi r4, r1, 0x38
lbl_fn_804B5B10_0000168C:
    psq_l f1, 0x0(r4), 0, 0
    mr r5, r26
    lfs f2, 0x8(r4)
    addi r3, r1, 0x80
    stfs f2, 0x94(r1)
    lwz r4, lbl_8087EFB4
    psq_st f1, 0x0(r26), 0, 0
    bl fn_800BFAC8
    lfs f0, 0x88(r1)
    fcmpo cr0, f27, f0
    cror eq, lt, eq
    bne lbl_fn_804B5B10_000017D0
    fcmpo cr0, f0, f29
    cror eq, lt, eq
    bne lbl_fn_804B5B10_000017D0
    lfs f3, 0x80(r1)
    fcmpo cr0, f30, f3
    cror eq, lt, eq
    bne lbl_fn_804B5B10_000017D0
    lwz r3, lbl_8087EEE0
    lwz r0, 0x3c(r3)
    xoris r0, r0, 0x8000
    stw r0, 0x9c(r1)
    lfd f0, 0x98(r1)
    fsubs f0, f0, f31
    fadds f0, f24, f0
    fcmpo cr0, f3, f0
    bge lbl_fn_804B5B10_000017D0
    lfs f3, 0x84(r1)
    fcmpo cr0, f30, f3
    cror eq, lt, eq
    bne lbl_fn_804B5B10_000017D0
    lwz r0, 0x40(r3)
    xoris r0, r0, 0x8000
    stw r0, 0xa4(r1)
    lfd f0, 0xa0(r1)
    fsubs f0, f0, f31
    fadds f0, f24, f0
    fcmpo cr0, f3, f0
    bge lbl_fn_804B5B10_000017D0
    cmpwi r22, 0x1
    subi r5, r28, 0x696a
    bne lbl_fn_804B5B10_0000173C
    subi r5, r29, 0x61ca
lbl_fn_804B5B10_0000173C:
    add r25, r31, r18
    addi r4, r27, 0x14a
    lwz r3, 0x50(r25)
    bl fn_801F4998
    cmpwi r22, 0x1
    lwz r3, 0x50(r25)
    addi r4, r27, 0x155
    subi r5, r30, 0x3334
    bne lbl_fn_804B5B10_00001764
    subi r5, r29, 0x61ca
lbl_fn_804B5B10_00001764:
    bl fn_801F4998
    lwz r4, 0x50(r25)
    addi r3, r27, 0x160
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lfs f0, 0x80(r1)
    lwz r4, 0x50(r25)
    fsubs f23, f0, f25
    addi r17, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f23
    mr r4, r3
    mr r3, r17
    li r5, 0x0
    bl fn_801FED24
    lfs f0, 0x84(r1)
    addi r3, r27, 0x160
    lwz r4, 0x50(r25)
    fsubs f23, f0, f26
    addi r17, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f23
    mr r4, r3
    mr r3, r17
    li r5, 0x1
    bl fn_801FED24
lbl_fn_804B5B10_000017D0:
    mr r5, r20
lbl_fn_804B5B10_000017D4:
    addi r21, r21, 0x1
    addi r19, r19, 0xd5c
    addi r18, r18, 0x4
lbl_fn_804B5B10_000017E0:
    lwz r0, 0x0(r23)
    cmplw r21, r0
    blt lbl_fn_804B5B10_00001598
lbl_fn_804B5B10_000017EC:
    lwz r3, lbl_8087F610
    lwz r0, 0x540(r3)
    cmpwi r0, 0x1
    bne lbl_fn_804B5B10_00001B2C
    lis r3, lbl_80758130@ha
    lis r4, lbl_80758150@ha
    lfs f26, lbl_8088734C
    addi r30, r4, lbl_80758150@l
    lfs f31, lbl_80887374
    addi r26, r1, 0x74
    lfd f28, lbl_80758130@l(r3)
    li r20, 0x0
    lfs f27, lbl_8088737C
    li r22, 0x0
    lfs f29, lbl_80887378
    li r23, 0x0
    lfs f30, lbl_80887350
    li r28, 0x0
    b lbl_fn_804B5B10_00001B1C
lbl_fn_804B5B10_00001838:
    cmpwi r20, 0x0
    lwz r3, lbl_8087F610
    blt lbl_fn_804B5B10_0000185C
    lwz r0, 0x5e8(r3)
    cmpw r20, r0
    bge lbl_fn_804B5B10_0000185C
    lwz r0, 0x5e4(r3)
    add r21, r0, r22
    b lbl_fn_804B5B10_00001860
lbl_fn_804B5B10_0000185C:
    li r21, 0x0
lbl_fn_804B5B10_00001860:
    lwz r0, lbl_8087F628
    add r0, r0, r23
    addic. r27, r0, 0x274
    beq lbl_fn_804B5B10_00001B0C
    cmpwi r21, 0x0
    beq lbl_fn_804B5B10_00001B0C
    lwz r0, 0xd0(r21)
    extrwi r0, r0, 4, 6
    cmplw r24, r0
    bne lbl_fn_804B5B10_00001B0C
    lwz r3, 0x0(r21)
    addi r4, r30, 0x145
    li r5, 0x0
    addi r17, r3, 0xb0
    mr r3, r17
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_804B5B10_000018B0
    li r3, 0x0
    b lbl_fn_804B5B10_000018BC
lbl_fn_804B5B10_000018B0:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r17)
    add r3, r3, r0
lbl_fn_804B5B10_000018BC:
    cmpwi r3, 0x0
    beq lbl_fn_804B5B10_00001908
    lfs f0, 0x2c(r3)
    addi r4, r1, 0x14
    lfs f3, 0x1c(r3)
    lfs f4, 0xc(r3)
    fadds f5, f0, f26
    fadds f6, f3, f31
    stfs f26, 0x2c(r1)
    fadds f7, f4, f26
    stfs f31, 0x30(r1)
    stfs f26, 0x34(r1)
    stfs f4, 0x20(r1)
    stfs f3, 0x24(r1)
    stfs f0, 0x28(r1)
    stfs f7, 0x14(r1)
    stfs f6, 0x18(r1)
    stfs f5, 0x1c(r1)
    b lbl_fn_804B5B10_00001924
lbl_fn_804B5B10_00001908:
    lwz r4, 0x0(r21)
    addi r3, r1, 0x8
    lwz r12, 0x0(r4)
    lwz r12, 0x58(r12)
    mtctr r12
    bctrl
    addi r4, r1, 0x8
lbl_fn_804B5B10_00001924:
    psq_l f1, 0x0(r4), 0, 0
    mr r5, r26
    lfs f2, 0x8(r4)
    addi r3, r1, 0x68
    stfs f2, 0x7c(r1)
    lwz r4, lbl_8087EFB4
    psq_st f1, 0x0(r26), 0, 0
    bl fn_800BFAC8
    lfs f0, 0x70(r1)
    fcmpo cr0, f26, f0
    cror eq, lt, eq
    bne lbl_fn_804B5B10_00001B0C
    fcmpo cr0, f0, f30
    cror eq, lt, eq
    bne lbl_fn_804B5B10_00001B0C
    lfs f3, 0x68(r1)
    fcmpo cr0, f29, f3
    cror eq, lt, eq
    bne lbl_fn_804B5B10_00001B0C
    lwz r3, lbl_8087EEE0
    lwz r0, 0x3c(r3)
    xoris r0, r0, 0x8000
    stw r0, 0x9c(r1)
    lfd f0, 0x98(r1)
    fsubs f0, f0, f28
    fadds f0, f27, f0
    fcmpo cr0, f3, f0
    bge lbl_fn_804B5B10_00001B0C
    lfs f3, 0x6c(r1)
    fcmpo cr0, f29, f3
    cror eq, lt, eq
    bne lbl_fn_804B5B10_00001B0C
    lwz r0, 0x40(r3)
    xoris r0, r0, 0x8000
    stw r0, 0xa4(r1)
    lfd f0, 0xa0(r1)
    fsubs f0, f0, f28
    fadds f0, f27, f0
    fcmpo cr0, f3, f0
    bge lbl_fn_804B5B10_00001B0C
    add r25, r31, r28
    addi r3, r30, 0x168
    lwz r4, 0x70(r25)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    lwz r4, 0x70(r25)
    lfs f23, 0x68(r1)
    addi r17, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f23
    mr r4, r3
    mr r3, r17
    li r5, 0x0
    bl fn_801FED24
    lwz r4, 0x70(r25)
    addi r3, r30, 0x168
    lfs f23, 0x6c(r1)
    addi r17, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f23
    mr r4, r3
    mr r3, r17
    li r5, 0x1
    bl fn_801FED24
    lwz r3, lbl_8087F610
    mr r4, r21
    bl fn_804EB484
    cmpwi r3, 0x0
    beq lbl_fn_804B5B10_00001A58
    lwz r3, lbl_8087F86C
    lwz r17, 0x9cc(r3)
    cmpwi r17, 0x0
    beq lbl_fn_804B5B10_00001A50
    b lbl_fn_804B5B10_00001A5C
lbl_fn_804B5B10_00001A50:
    la r17, lbl_808813D0
    b lbl_fn_804B5B10_00001A5C
lbl_fn_804B5B10_00001A58:
    addi r17, r27, 0x10
lbl_fn_804B5B10_00001A5C:
    lwz r4, 0x70(r25)
    addi r3, r30, 0x172
    addi r18, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r18
    mr r5, r17
    bl fn_801FEE08
    lwz r3, lbl_8087F610
    mr r4, r21
    bl fn_804EB484
    cmpwi r3, 0x0
    beq lbl_fn_804B5B10_00001AAC
    lwz r3, lbl_8087F86C
    lwz r17, 0x9cc(r3)
    cmpwi r17, 0x0
    beq lbl_fn_804B5B10_00001AA4
    b lbl_fn_804B5B10_00001AB0
lbl_fn_804B5B10_00001AA4:
    la r17, lbl_808813D0
    b lbl_fn_804B5B10_00001AB0
lbl_fn_804B5B10_00001AAC:
    addi r17, r27, 0x10
lbl_fn_804B5B10_00001AB0:
    lwz r4, 0x70(r25)
    addi r3, r30, 0x177
    addi r18, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r18
    mr r5, r17
    bl fn_801FEE08
    cmpwi r24, 0x1
    bne lbl_fn_804B5B10_00001AF4
    lfs f2, lbl_8088738C
    addi r4, r30, 0x17f
    lwz r3, 0x70(r25)
    fmr f3, f2
    lfs f1, lbl_80887388
    bl fn_801F4AA0
    b lbl_fn_804B5B10_00001B0C
lbl_fn_804B5B10_00001AF4:
    lwz r3, 0x70(r25)
    addi r4, r30, 0x17f
    lfs f1, lbl_8088738C
    lfs f2, lbl_80887390
    lfs f3, lbl_80887388
    bl fn_801F4AA0
lbl_fn_804B5B10_00001B0C:
    addi r20, r20, 0x1
    addi r22, r22, 0xd5c
    addi r23, r23, 0x34
    addi r28, r28, 0x4
lbl_fn_804B5B10_00001B1C:
    lwz r3, lbl_8087F610
    lwz r0, 0x5e8(r3)
    cmpw r20, r0
    blt lbl_fn_804B5B10_00001838
lbl_fn_804B5B10_00001B2C:
    addi r11, r1, 0xf0
    psq_l f31, 0x178(r1), 0, 0
    lfd f31, 0x170(r1)
    psq_l f30, 0x168(r1), 0, 0
    lfd f30, 0x160(r1)
    psq_l f29, 0x158(r1), 0, 0
    lfd f29, 0x150(r1)
    psq_l f28, 0x148(r1), 0, 0
    lfd f28, 0x140(r1)
    psq_l f27, 0x138(r1), 0, 0
    lfd f27, 0x130(r1)
    psq_l f26, 0x128(r1), 0, 0
    lfd f26, 0x120(r1)
    psq_l f25, 0x118(r1), 0, 0
    lfd f25, 0x110(r1)
    psq_l f24, 0x108(r1), 0, 0
    lfd f24, 0x100(r1)
    psq_l f23, 0xf8(r1), 0, 0
    lfd f23, 0xf0(r1)
    bl _restgpr_17
    lwz r0, 0x184(r1)
    mtlr r0
    addi r1, r1, 0x180
    blr
}
