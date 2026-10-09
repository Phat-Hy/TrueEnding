#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_800697D8(void);
extern void fn_80084320(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_800D1D3C(void);
extern void fn_800D1E9C(void);
extern void fn_8022B850(void);
extern void fn_8022C2A0(void);
extern void fn_8022C9C8(void);
extern void fn_80234A8C(void);
extern void fn_802371BC(void);
extern void fn_80237DA8(void);
extern void fn_805F93C0(void);
extern void fn_80695720(void);

/* External data declarations */
extern u8 lbl_80742FD8[];
extern u8 lbl_80742FE0[];
extern u8 lbl_8074308C[];
extern u8 lbl_80783A18[];
extern u8 lbl_80783BB8[];

/* Small data declarations */
extern u32 lbl_8087DC18;
extern u32 lbl_8087DC1C;
extern u32 lbl_8087EEB8;
extern u32 lbl_8087F3C0;
extern u32 lbl_80883140;
extern u32 lbl_80883144;
extern u32 lbl_80883148;
extern u32 lbl_80883150;
extern u32 lbl_80883154;
extern u32 lbl_80883158;
extern u32 lbl_8088315C;
extern u32 lbl_80883160;

/* Function declarations */
void fn_802381D8(void);
void fn_80238218(void);
void fn_802383D8(void);
void fn_80238560(void);
void fn_80238588(void);
void fn_802386FC(void);
void fn_80238808(void);
void fn_80238CA0(void);
void fn_80239030(void);
void fn_802396A0(void);
void fn_80239794(void);
void fn_80239798(void);
void fn_80239828(void);
void fn_80239AB4(void);
void fn_80239AB8(void);

asm void fn_802381D8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_802381D8_00000028
    cmpwi r4, 0x0
    ble lbl_fn_802381D8_00000028
    bl dtor_80084684
lbl_fn_802381D8_00000028:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80238218(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r3
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80238218_000001EC
    lwz r4, 0x34(r3)
    rlwinm r0, r4, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_80238218_000001EC
    lbz r0, 0x8c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80238218_00000080
    b lbl_fn_80238218_000001EC
lbl_fn_80238218_00000080:
    lfs f0, 0x10(r3)
    rlwinm r0, r4, 0, 29, 29
    cmplwi r0, 0x4
    fadds f2, f0, f1
    stfs f2, 0x10(r3)
    beq lbl_fn_80238218_000001EC
    lwz r5, 0xc(r3)
    lis r4, lbl_80742FD8@ha
    lwz r7, 0x4(r3)
    lis r0, 0x4330
    mulli r5, r5, 0x110
    lfd f1, lbl_80742FD8@l(r4)
    lwz r6, 0x14(r7)
    stw r0, 0x30(r1)
    add r4, r6, r5
    lwz r4, 0x9c(r4)
    xoris r0, r4, 0x8000
    stw r0, 0x34(r1)
    lfd f0, 0x30(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    ble lbl_fn_80238218_00000108
    cmpwi r4, 0x0
    beq lbl_fn_80238218_00000108
    lfs f0, lbl_80883140
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    stw r0, 0xc(r3)
    stfs f0, 0x10(r3)
    stb r0, 0x14(r3)
    stw r0, 0x34(r3)
    b lbl_fn_80238218_000001EC
lbl_fn_80238218_00000108:
    lfs f1, 0x10(r31)
    add r4, r6, r5
    mr r3, r7
    addi r5, r1, 0x20
    addi r6, r1, 0x8
    addi r7, r1, 0x10
    bl fn_80237DA8
    cmpwi r3, 0x0
    beq lbl_fn_80238218_000001EC
    mr r3, r31
    addi r4, r1, 0x20
    addi r5, r1, 0x8
    addi r6, r1, 0x10
    bl fn_80238588
    lbz r0, 0x14(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80238218_000001EC
    lfs f1, 0x20(r31)
    lfs f0, lbl_80883144
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_80238218_00000188
    lfs f0, lbl_80883140
    li r0, 0x0
    stw r0, 0x0(r31)
    stw r0, 0x4(r31)
    stw r0, 0x8(r31)
    stw r0, 0xc(r31)
    stfs f0, 0x10(r31)
    stb r0, 0x14(r31)
    stw r0, 0x34(r31)
    b lbl_fn_80238218_000001EC
lbl_fn_80238218_00000188:
    lwz r0, 0x18(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80238218_000001A0
    cmpwi r0, 0x1
    beq lbl_fn_80238218_000001B4
    b lbl_fn_80238218_000001DC
lbl_fn_80238218_000001A0:
    fsubs f1, f0, f1
    lfs f0, 0x8(r1)
    fmuls f0, f0, f1
    stfs f0, 0x8(r1)
    b lbl_fn_80238218_000001DC
lbl_fn_80238218_000001B4:
    fsubs f3, f0, f1
    lfs f2, 0x10(r1)
    lfs f1, 0x14(r1)
    lfs f0, 0x18(r1)
    fmuls f2, f2, f3
    fmuls f1, f1, f3
    fmuls f0, f0, f3
    stfs f2, 0x10(r1)
    stfs f1, 0x14(r1)
    stfs f0, 0x18(r1)
lbl_fn_80238218_000001DC:
    lfs f1, 0x20(r31)
    lfs f0, 0x1c(r31)
    fadds f0, f1, f0
    stfs f0, 0x20(r31)
lbl_fn_80238218_000001EC:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_802383D8(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_27
    lwz r0, 0x0(r3)
    mr r30, r3
    mr r31, r4
    cmpwi r0, 0x0
    beq lbl_fn_802383D8_00000230
    li r3, 0x0
    b lbl_fn_802383D8_00000370
lbl_fn_802383D8_00000230:
    bne lbl_fn_802383D8_0000023C
    li r3, 0x0
    b lbl_fn_802383D8_00000370
lbl_fn_802383D8_0000023C:
    lwz r9, 0xbc(r5)
    lis r0, 0x4330
    lwz r7, 0x30(r5)
    lis r8, lbl_80742FD8@ha
    stw r9, 0x4(r3)
    li r10, 0x0
    psq_l f1, 0x3c(r5), 0, 0
    mulli r9, r6, 0x110
    stw r7, 0x8(r3)
    addi r7, r1, 0x10
    psq_l f2, 0x44(r5), 0, 0
    lwz r28, 0x6c(r4)
    lwz r29, 0x8(r5)
    psq_st f1, 0x48(r3), 0, 0
    lwz r12, 0xc(r5)
    psq_st f2, 0x50(r3), 0, 0
    lwz r11, 0x10(r5)
    lwz r4, 0x14(r5)
    psq_l f3, 0x4c(r5), 0, 0
    psq_l f4, 0x54(r5), 0, 0
    psq_l f5, 0x5c(r5), 0, 0
    psq_l f6, 0x64(r5), 0, 0
    lfs f9, 0xa8(r5)
    psq_l f1, 0xd0(r5), 0, 0
    lfs f2, 0xd8(r5)
    lfs f7, lbl_80883140
    stw r6, 0xc(r3)
    addi r6, r1, 0x8
    lwz r27, 0xbc(r5)
    addi r5, r1, 0x20
    stw r28, 0x90(r3)
    lfd f8, lbl_80742FD8@l(r8)
    stw r29, 0x38(r3)
    lfs f0, lbl_80883144
    stw r12, 0x3c(r3)
    stw r11, 0x40(r3)
    stw r4, 0x44(r3)
    psq_st f3, 0x58(r3), 0, 0
    psq_st f4, 0x60(r3), 0, 0
    psq_st f5, 0x68(r3), 0, 0
    psq_st f6, 0x70(r3), 0, 0
    stfs f9, 0x84(r3)
    psq_st f1, 0x78(r3), 0, 0
    stfs f2, 0x80(r3)
    stfs f7, 0x10(r3)
    stb r10, 0x14(r3)
    stw r10, 0x34(r3)
    stb r10, 0x8c(r3)
    mr r3, r27
    lwz r4, 0x14(r27)
    stw r0, 0x30(r1)
    add r4, r4, r9
    lwz r0, 0x2c(r4)
    xoris r0, r0, 0x8000
    stw r0, 0x34(r1)
    lfd f7, 0x30(r1)
    fsubs f7, f7, f8
    fadds f1, f0, f7
    bl fn_80237DA8
    cmpwi r3, 0x0
    bne lbl_fn_802383D8_00000354
    lfs f0, lbl_80883140
    stfs f0, 0x28(r1)
    stfs f0, 0x24(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x8(r1)
    stfs f0, 0x18(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0x10(r1)
    stfs f0, 0x1c(r1)
lbl_fn_802383D8_00000354:
    mr r3, r30
    addi r4, r1, 0x20
    addi r5, r1, 0x8
    addi r6, r1, 0x10
    bl fn_80238588
    stw r31, 0x88(r30)
    li r3, 0x1
lbl_fn_802383D8_00000370:
    addi r11, r1, 0x50
    bl _restgpr_27
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80238560(void)
{
    nofralloc
    lfs f0, lbl_80883140
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    stw r0, 0xc(r3)
    stfs f0, 0x10(r3)
    stb r0, 0x14(r3)
    stw r0, 0x34(r3)
    blr
}

asm void fn_80238588(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    li r7, 0x0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    mr r31, r6
    addi r6, r1, 0x8
    stw r30, 0x58(r1)
    mr r30, r5
    addi r5, r1, 0x18
    stw r29, 0x54(r1)
    mr r29, r4
    addi r4, r3, 0x48
    stw r28, 0x50(r1)
    mr r28, r3
    addi r3, r3, 0x38
    bl fn_8022C9C8
    lfs f0, lbl_80883140
    mr r4, r29
    stfs f0, 0x50(r1)
    mr r5, r29
    addi r3, r1, 0x18
    stfs f0, 0x4c(r1)
    stfs f0, 0x48(r1)
    bl fn_805F93C0
    lfs f7, 0x0(r29)
    lis r0, 0x4330
    lfs f0, 0x8(r1)
    lis r3, lbl_80742FD8@ha
    lfs f9, 0x4(r29)
    fadds f0, f7, f0
    lfs f8, 0x8(r29)
    lfs f11, lbl_80883148
    stfs f0, 0x0(r29)
    lfd f7, lbl_80742FD8@l(r3)
    lfs f0, 0xc(r1)
    stw r0, 0x48(r1)
    fadds f0, f9, f0
    stfs f0, 0x4(r29)
    lfs f0, 0x10(r1)
    fadds f0, f8, f0
    stfs f0, 0x8(r29)
    lfs f8, 0x0(r30)
    lfs f0, 0x84(r28)
    fmuls f0, f8, f0
    stfs f0, 0x0(r30)
    lfs f0, 0xc(r31)
    lfs f9, 0x0(r31)
    fdivs f10, f0, f11
    lfs f8, 0x4(r31)
    lfs f0, 0x8(r31)
    stfs f10, 0xc(r31)
    fdivs f9, f9, f11
    stfs f9, 0x0(r31)
    fdivs f8, f8, f11
    stfs f8, 0x4(r31)
    fdivs f0, f0, f11
    stfs f0, 0x8(r31)
    lwz r3, 0x44(r28)
    lfs f8, 0x10(r28)
    xoris r0, r3, 0x8000
    stw r0, 0x4c(r1)
    lfd f0, 0x48(r1)
    fsubs f0, f0, f7
    fcmpo cr0, f8, f0
    cror eq, gt, eq
    bne lbl_fn_80238588_00000504
    cmpwi r3, 0x0
    beq lbl_fn_80238588_00000504
    li r0, 0x0
    stw r0, 0x38(r28)
    addi r3, r1, 0x18
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f6, 0x70(r28), 0, 0
    psq_st f1, 0x48(r28), 0, 0
    psq_st f2, 0x50(r28), 0, 0
    psq_st f3, 0x58(r28), 0, 0
    psq_st f4, 0x60(r28), 0, 0
    psq_st f5, 0x68(r28), 0, 0
    stw r0, 0x44(r28)
lbl_fn_80238588_00000504:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    lwz r28, 0x50(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_802386FC(void)
{
    nofralloc
    lwz r0, 0x0(r3)
    li r11, 0x0
    li r6, 0x0
    li r7, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_802386FC_00000628
lbl_fn_802386FC_00000540:
    lwz r5, 0x28(r3)
    lwzx r0, r5, r6
    cmpwi r0, 0x0
    beq lbl_fn_802386FC_0000061C
    lwz r0, 0x4(r3)
    add r10, r0, r7
    lwz r8, 0x54(r10)
    cmpwi r8, 0x0
    ble lbl_fn_802386FC_00000570
    lwz r9, 0x50(r10)
    cmpwi r9, 0x0
    bne lbl_fn_802386FC_000005B0
lbl_fn_802386FC_00000570:
    cmpwi r4, 0x0
    beq lbl_fn_802386FC_000005A8
    lwz r0, 0x50(r10)
    cmpwi r0, 0x0
    beq lbl_fn_802386FC_000005A8
    lwz r5, 0x48(r10)
    add r0, r4, r0
    add r5, r0, r5
    subi r0, r5, 0x1
    cmplw r11, r0
    ble lbl_fn_802386FC_000005A0
    mr r0, r11
lbl_fn_802386FC_000005A0:
    mr r11, r0
    b lbl_fn_802386FC_0000061C
lbl_fn_802386FC_000005A8:
    li r11, 0x0
    b lbl_fn_802386FC_00000628
lbl_fn_802386FC_000005B0:
    cmpwi r4, 0x0
    beq lbl_fn_802386FC_000005FC
    cmpw r4, r8
    mr r5, r8
    bge lbl_fn_802386FC_000005C8
    mr r5, r4
lbl_fn_802386FC_000005C8:
    lwz r0, 0x48(r10)
    add r9, r0, r9
    add r5, r9, r5
    subi r0, r5, 0x1
    cmplw r11, r0
    ble lbl_fn_802386FC_000005E4
    b lbl_fn_802386FC_0000061C
lbl_fn_802386FC_000005E4:
    cmpw r4, r8
    bge lbl_fn_802386FC_000005F0
    mr r8, r4
lbl_fn_802386FC_000005F0:
    add r11, r9, r8
    subi r11, r11, 0x1
    b lbl_fn_802386FC_0000061C
lbl_fn_802386FC_000005FC:
    lwz r5, 0x48(r10)
    add r0, r8, r9
    add r5, r0, r5
    subi r0, r5, 0x1
    cmplw r11, r0
    ble lbl_fn_802386FC_00000618
    mr r0, r11
lbl_fn_802386FC_00000618:
    mr r11, r0
lbl_fn_802386FC_0000061C:
    addi r6, r6, 0x4
    addi r7, r7, 0x26c
    bdnz lbl_fn_802386FC_00000540
lbl_fn_802386FC_00000628:
    mr r3, r11
    blr
}

asm void fn_80238808(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    li r4, 0x0
    lfs f2, lbl_80883154
    li r6, 0x0
    stw r31, 0xc(r1)
    li r7, 0x0
    lfs f0, lbl_80883150
    stw r30, 0x8(r1)
    b lbl_fn_80238808_00000AAC
lbl_fn_80238808_00000654:
    lwz r0, 0x4(r3)
    li r11, 0xf
    li r8, 0x78
    add r10, r0, r6
    lfs f1, 0xe0(r10)
    fmuls f1, f0, f1
    stfs f1, 0xe0(r10)
    lfs f1, 0xe4(r10)
    fmuls f1, f0, f1
    stfs f1, 0xe4(r10)
    lfs f1, 0xe8(r10)
    fmuls f1, f0, f1
    stfs f1, 0xe8(r10)
    lfs f1, 0x110(r10)
    fmuls f1, f0, f1
    stfs f1, 0x110(r10)
    lfs f1, 0x114(r10)
    fmuls f1, f0, f1
    stfs f1, 0x114(r10)
    lfs f1, 0x118(r10)
    fmuls f1, f0, f1
    stfs f1, 0x118(r10)
    lfs f1, 0xf8(r10)
    fmuls f1, f0, f1
    stfs f1, 0xf8(r10)
    lfs f1, 0xfc(r10)
    fmuls f1, f0, f1
    stfs f1, 0xfc(r10)
    lfs f1, 0x100(r10)
    fmuls f1, f0, f1
    stfs f1, 0x100(r10)
lbl_fn_80238808_000006D0:
    add r0, r8, r7
    lwz r5, 0x1c(r3)
    lwzux r31, r5, r0
    li r30, 0x0
    cmpwi r31, 0x0
    lwz r12, 0x4(r5)
    beq lbl_fn_80238808_000007AC
    cmplwi r31, 0x8
    subi r5, r31, 0x8
    ble lbl_fn_80238808_0000077C
    addi r0, r5, 0x7
    mr r9, r12
    srwi r0, r0, 3
    mtctr r0
    cmplwi r5, 0x0
    ble lbl_fn_80238808_0000077C
lbl_fn_80238808_00000710:
    lfs f1, 0x4(r9)
    addi r30, r30, 0x8
    fmuls f1, f0, f1
    stfs f1, 0x4(r9)
    lfs f1, 0xc(r9)
    fmuls f1, f0, f1
    stfs f1, 0xc(r9)
    lfs f1, 0x14(r9)
    fmuls f1, f0, f1
    stfs f1, 0x14(r9)
    lfs f1, 0x1c(r9)
    fmuls f1, f0, f1
    stfs f1, 0x1c(r9)
    lfs f1, 0x24(r9)
    fmuls f1, f0, f1
    stfs f1, 0x24(r9)
    lfs f1, 0x2c(r9)
    fmuls f1, f0, f1
    stfs f1, 0x2c(r9)
    lfs f1, 0x34(r9)
    fmuls f1, f0, f1
    stfs f1, 0x34(r9)
    lfs f1, 0x3c(r9)
    fmuls f1, f0, f1
    stfs f1, 0x3c(r9)
    addi r9, r9, 0x40
    bdnz lbl_fn_80238808_00000710
lbl_fn_80238808_0000077C:
    slwi r5, r30, 3
    subf r0, r30, r31
    add r5, r12, r5
    mtctr r0
    cmplw r30, r31
    bge lbl_fn_80238808_000007AC
lbl_fn_80238808_00000794:
    lfs f1, 0x4(r5)
    addi r30, r30, 0x1
    fmuls f1, f0, f1
    stfs f1, 0x4(r5)
    addi r5, r5, 0x8
    bdnz lbl_fn_80238808_00000794
lbl_fn_80238808_000007AC:
    addi r11, r11, 0x1
    addi r8, r8, 0x8
    cmplwi r11, 0x11
    ble lbl_fn_80238808_000006D0
    lfs f1, 0x1f8(r10)
    li r11, 0x13
    li r8, 0x98
    fmuls f1, f0, f1
    stfs f1, 0x1f8(r10)
    lfs f1, 0x1fc(r10)
    fmuls f1, f0, f1
    stfs f1, 0x1fc(r10)
    lfs f1, 0x200(r10)
    fmuls f1, f0, f1
    stfs f1, 0x200(r10)
    lfs f1, 0x228(r10)
    fmuls f1, f0, f1
    stfs f1, 0x228(r10)
    lfs f1, 0x22c(r10)
    fmuls f1, f0, f1
    stfs f1, 0x22c(r10)
    lfs f1, 0x230(r10)
    fmuls f1, f0, f1
    stfs f1, 0x230(r10)
    lfs f1, 0x210(r10)
    fmuls f1, f0, f1
    stfs f1, 0x210(r10)
    lfs f1, 0x214(r10)
    fmuls f1, f0, f1
    stfs f1, 0x214(r10)
    lfs f1, 0x218(r10)
    fmuls f1, f0, f1
    stfs f1, 0x218(r10)
lbl_fn_80238808_00000830:
    add r0, r8, r7
    lwz r5, 0x1c(r3)
    lwzux r30, r5, r0
    li r31, 0x0
    cmpwi r30, 0x0
    lwz r12, 0x4(r5)
    beq lbl_fn_80238808_0000090C
    cmplwi r30, 0x8
    subi r5, r30, 0x8
    ble lbl_fn_80238808_000008DC
    addi r0, r5, 0x7
    mr r9, r12
    srwi r0, r0, 3
    mtctr r0
    cmplwi r5, 0x0
    ble lbl_fn_80238808_000008DC
lbl_fn_80238808_00000870:
    lfs f1, 0x4(r9)
    addi r31, r31, 0x8
    fmuls f1, f0, f1
    stfs f1, 0x4(r9)
    lfs f1, 0xc(r9)
    fmuls f1, f0, f1
    stfs f1, 0xc(r9)
    lfs f1, 0x14(r9)
    fmuls f1, f0, f1
    stfs f1, 0x14(r9)
    lfs f1, 0x1c(r9)
    fmuls f1, f0, f1
    stfs f1, 0x1c(r9)
    lfs f1, 0x24(r9)
    fmuls f1, f0, f1
    stfs f1, 0x24(r9)
    lfs f1, 0x2c(r9)
    fmuls f1, f0, f1
    stfs f1, 0x2c(r9)
    lfs f1, 0x34(r9)
    fmuls f1, f0, f1
    stfs f1, 0x34(r9)
    lfs f1, 0x3c(r9)
    fmuls f1, f0, f1
    stfs f1, 0x3c(r9)
    addi r9, r9, 0x40
    bdnz lbl_fn_80238808_00000870
lbl_fn_80238808_000008DC:
    slwi r5, r31, 3
    subf r0, r31, r30
    add r5, r12, r5
    mtctr r0
    cmplw r31, r30
    bge lbl_fn_80238808_0000090C
lbl_fn_80238808_000008F4:
    lfs f1, 0x4(r5)
    addi r31, r31, 0x1
    fmuls f1, f0, f1
    stfs f1, 0x4(r5)
    addi r5, r5, 0x8
    bdnz lbl_fn_80238808_000008F4
lbl_fn_80238808_0000090C:
    addi r11, r11, 0x1
    addi r8, r8, 0x8
    cmplwi r11, 0x15
    ble lbl_fn_80238808_00000830
    lfs f1, 0x1a0(r10)
    li r11, 0x3
    li r8, 0x18
    fdivs f1, f1, f2
    stfs f1, 0x1a0(r10)
    lfs f1, 0x194(r10)
    fdivs f1, f1, f2
    stfs f1, 0x194(r10)
    lfs f1, 0x198(r10)
    fdivs f1, f1, f2
    stfs f1, 0x198(r10)
    lfs f1, 0x19c(r10)
    fdivs f1, f1, f2
    stfs f1, 0x19c(r10)
    lfs f1, 0x1e0(r10)
    fdivs f1, f1, f2
    stfs f1, 0x1e0(r10)
    lfs f1, 0x1d4(r10)
    fdivs f1, f1, f2
    stfs f1, 0x1d4(r10)
    lfs f1, 0x1d8(r10)
    fdivs f1, f1, f2
    stfs f1, 0x1d8(r10)
    lfs f1, 0x1dc(r10)
    fdivs f1, f1, f2
    stfs f1, 0x1dc(r10)
    lfs f1, 0x1c0(r10)
    fdivs f1, f1, f2
    stfs f1, 0x1c0(r10)
    lfs f1, 0x1b4(r10)
    fdivs f1, f1, f2
    stfs f1, 0x1b4(r10)
    lfs f1, 0x1b8(r10)
    fdivs f1, f1, f2
    stfs f1, 0x1b8(r10)
    lfs f1, 0x1bc(r10)
    fdivs f1, f1, f2
    stfs f1, 0x1bc(r10)
lbl_fn_80238808_000009B4:
    add r0, r8, r7
    lwz r5, 0x1c(r3)
    lwzux r12, r5, r0
    li r30, 0x0
    cmpwi r12, 0x0
    lwz r10, 0x4(r5)
    beq lbl_fn_80238808_00000A90
    cmplwi r12, 0x8
    subi r5, r12, 0x8
    ble lbl_fn_80238808_00000A60
    addi r0, r5, 0x7
    mr r9, r10
    srwi r0, r0, 3
    mtctr r0
    cmplwi r5, 0x0
    ble lbl_fn_80238808_00000A60
lbl_fn_80238808_000009F4:
    lfs f1, 0x4(r9)
    addi r30, r30, 0x8
    fdivs f1, f1, f2
    stfs f1, 0x4(r9)
    lfs f1, 0xc(r9)
    fdivs f1, f1, f2
    stfs f1, 0xc(r9)
    lfs f1, 0x14(r9)
    fdivs f1, f1, f2
    stfs f1, 0x14(r9)
    lfs f1, 0x1c(r9)
    fdivs f1, f1, f2
    stfs f1, 0x1c(r9)
    lfs f1, 0x24(r9)
    fdivs f1, f1, f2
    stfs f1, 0x24(r9)
    lfs f1, 0x2c(r9)
    fdivs f1, f1, f2
    stfs f1, 0x2c(r9)
    lfs f1, 0x34(r9)
    fdivs f1, f1, f2
    stfs f1, 0x34(r9)
    lfs f1, 0x3c(r9)
    fdivs f1, f1, f2
    stfs f1, 0x3c(r9)
    addi r9, r9, 0x40
    bdnz lbl_fn_80238808_000009F4
lbl_fn_80238808_00000A60:
    slwi r5, r30, 3
    subf r0, r30, r12
    add r5, r10, r5
    mtctr r0
    cmplw r30, r12
    bge lbl_fn_80238808_00000A90
lbl_fn_80238808_00000A78:
    lfs f1, 0x4(r5)
    addi r30, r30, 0x1
    fdivs f1, f1, f2
    stfs f1, 0x4(r5)
    addi r5, r5, 0x8
    bdnz lbl_fn_80238808_00000A78
lbl_fn_80238808_00000A90:
    addi r11, r11, 0x1
    addi r8, r8, 0x8
    cmplwi r11, 0x6
    ble lbl_fn_80238808_000009B4
    addi r6, r6, 0x26c
    addi r7, r7, 0xb0
    addi r4, r4, 0x1
lbl_fn_80238808_00000AAC:
    lwz r0, 0x0(r3)
    cmplw r4, r0
    blt lbl_fn_80238808_00000654
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    addi r1, r1, 0x10
    blr
}

asm void fn_80238CA0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    lwz r0, 0x4(r3)
    cmplwi r0, 0x23
    bgt lbl_fn_80238CA0_00000E3C
    lwz r0, 0x0(r4)
    lis r5, lbl_80742FE0@ha
    addi r5, r5, lbl_80742FE0@l
    li r4, 0x7
    mr r6, r5
    slwi r3, r0, 2
    li r7, 0x0
    bl fn_800846FC
    stw r3, 0x30(r31)
    li r5, 0x0
    lfs f0, lbl_8088315C
    li r3, 0x0
    lfs f1, lbl_80883158
    li r4, 0x0
    li r0, 0x0
    b lbl_fn_80238CA0_00000E2C
lbl_fn_80238CA0_00000B28:
    lwz r6, 0x4(r31)
    lwz r7, 0x30(r31)
    add r6, r6, r3
    stwx r0, r7, r4
    lwz r7, 0x18(r31)
    lwzx r7, r7, r4
    clrlwi r7, r7, 31
    cmplwi r7, 0x1
    beq lbl_fn_80238CA0_00000BA4
    lfs f2, 0xbc(r6)
    fcmpu cr0, f1, f2
    bne lbl_fn_80238CA0_00000BA4
    lfs f2, 0xc0(r6)
    fcmpu cr0, f1, f2
    bne lbl_fn_80238CA0_00000BA4
    lfs f2, 0xc4(r6)
    fcmpu cr0, f1, f2
    bne lbl_fn_80238CA0_00000BA4
    lfs f2, 0xc8(r6)
    fcmpu cr0, f0, f2
    bne lbl_fn_80238CA0_00000BA4
    lfs f2, 0xcc(r6)
    fcmpu cr0, f0, f2
    bne lbl_fn_80238CA0_00000BA4
    lfs f2, 0xd0(r6)
    fcmpu cr0, f0, f2
    bne lbl_fn_80238CA0_00000BA4
    lwz r8, 0x30(r31)
    lwzx r7, r8, r4
    ori r7, r7, 0x1
    stwx r7, r8, r4
lbl_fn_80238CA0_00000BA4:
    lwz r7, 0x18(r31)
    lwzx r7, r7, r4
    rlwinm r7, r7, 0, 30, 30
    cmplwi r7, 0x2
    beq lbl_fn_80238CA0_00000C10
    lfs f2, 0xf8(r6)
    fcmpu cr0, f1, f2
    bne lbl_fn_80238CA0_00000C10
    lfs f2, 0xfc(r6)
    fcmpu cr0, f1, f2
    bne lbl_fn_80238CA0_00000C10
    lfs f2, 0x100(r6)
    fcmpu cr0, f1, f2
    bne lbl_fn_80238CA0_00000C10
    lfs f2, 0x104(r6)
    fcmpu cr0, f0, f2
    bne lbl_fn_80238CA0_00000C10
    lfs f2, 0x108(r6)
    fcmpu cr0, f0, f2
    bne lbl_fn_80238CA0_00000C10
    lfs f2, 0x10c(r6)
    fcmpu cr0, f0, f2
    bne lbl_fn_80238CA0_00000C10
    lwz r8, 0x30(r31)
    lwzx r7, r8, r4
    ori r7, r7, 0x2
    stwx r7, r8, r4
lbl_fn_80238CA0_00000C10:
    lwz r7, 0x18(r31)
    lwzx r7, r7, r4
    rlwinm r7, r7, 0, 29, 29
    cmplwi r7, 0x4
    beq lbl_fn_80238CA0_00000C7C
    lfs f2, 0x134(r6)
    fcmpu cr0, f1, f2
    bne lbl_fn_80238CA0_00000C7C
    lfs f2, 0x138(r6)
    fcmpu cr0, f1, f2
    bne lbl_fn_80238CA0_00000C7C
    lfs f2, 0x13c(r6)
    fcmpu cr0, f1, f2
    bne lbl_fn_80238CA0_00000C7C
    lfs f2, 0x140(r6)
    fcmpu cr0, f0, f2
    bne lbl_fn_80238CA0_00000C7C
    lfs f2, 0x144(r6)
    fcmpu cr0, f0, f2
    bne lbl_fn_80238CA0_00000C7C
    lfs f2, 0x148(r6)
    fcmpu cr0, f0, f2
    bne lbl_fn_80238CA0_00000C7C
    lwz r8, 0x30(r31)
    lwzx r7, r8, r4
    ori r7, r7, 0x4
    stwx r7, r8, r4
lbl_fn_80238CA0_00000C7C:
    lwz r7, 0x18(r31)
    lwzx r7, r7, r4
    rlwinm r7, r7, 0, 28, 28
    cmplwi r7, 0x8
    beq lbl_fn_80238CA0_00000CF4
    lwz r7, 0x240(r6)
    cmpwi r7, 0x0
    bne lbl_fn_80238CA0_00000CF4
    lfs f2, 0x170(r6)
    fcmpu cr0, f1, f2
    bne lbl_fn_80238CA0_00000CF4
    lfs f2, 0x174(r6)
    fcmpu cr0, f1, f2
    bne lbl_fn_80238CA0_00000CF4
    lfs f2, 0x178(r6)
    fcmpu cr0, f1, f2
    bne lbl_fn_80238CA0_00000CF4
    lfs f2, 0x17c(r6)
    fcmpu cr0, f0, f2
    bne lbl_fn_80238CA0_00000CF4
    lfs f2, 0x180(r6)
    fcmpu cr0, f0, f2
    bne lbl_fn_80238CA0_00000CF4
    lfs f2, 0x184(r6)
    fcmpu cr0, f0, f2
    bne lbl_fn_80238CA0_00000CF4
    lwz r8, 0x30(r31)
    lwzx r7, r8, r4
    ori r7, r7, 0x8
    stwx r7, r8, r4
lbl_fn_80238CA0_00000CF4:
    lwz r7, 0x18(r31)
    lwzx r7, r7, r4
    rlwinm r7, r7, 0, 27, 27
    cmplwi r7, 0x10
    beq lbl_fn_80238CA0_00000D78
    lfs f2, 0x1b4(r6)
    fcmpu cr0, f1, f2
    bne lbl_fn_80238CA0_00000D78
    lfs f2, 0x1b8(r6)
    fcmpu cr0, f1, f2
    bne lbl_fn_80238CA0_00000D78
    lfs f2, 0x1bc(r6)
    fcmpu cr0, f1, f2
    bne lbl_fn_80238CA0_00000D78
    lfs f2, 0x1c0(r6)
    fcmpu cr0, f1, f2
    bne lbl_fn_80238CA0_00000D78
    lfs f2, 0x1c4(r6)
    fcmpu cr0, f0, f2
    bne lbl_fn_80238CA0_00000D78
    lfs f2, 0x1c8(r6)
    fcmpu cr0, f0, f2
    bne lbl_fn_80238CA0_00000D78
    lfs f2, 0x1cc(r6)
    fcmpu cr0, f0, f2
    bne lbl_fn_80238CA0_00000D78
    lfs f2, 0x1d0(r6)
    fcmpu cr0, f0, f2
    bne lbl_fn_80238CA0_00000D78
    lwz r8, 0x30(r31)
    lwzx r7, r8, r4
    ori r7, r7, 0x10
    stwx r7, r8, r4
lbl_fn_80238CA0_00000D78:
    lwz r7, 0x18(r31)
    lwzx r7, r7, r4
    rlwinm r7, r7, 0, 25, 25
    cmplwi r7, 0x40
    beq lbl_fn_80238CA0_00000DB4
    lfs f2, 0x1ec(r6)
    fcmpu cr0, f1, f2
    bne lbl_fn_80238CA0_00000DB4
    lfs f2, 0x1f0(r6)
    fcmpu cr0, f0, f2
    bne lbl_fn_80238CA0_00000DB4
    lwz r8, 0x30(r31)
    lwzx r7, r8, r4
    ori r7, r7, 0x20
    stwx r7, r8, r4
lbl_fn_80238CA0_00000DB4:
    lwz r7, 0x18(r31)
    lwzx r7, r7, r4
    rlwinm r7, r7, 0, 24, 24
    cmplwi r7, 0x80
    beq lbl_fn_80238CA0_00000E20
    lfs f2, 0x210(r6)
    fcmpu cr0, f1, f2
    bne lbl_fn_80238CA0_00000E20
    lfs f2, 0x214(r6)
    fcmpu cr0, f1, f2
    bne lbl_fn_80238CA0_00000E20
    lfs f2, 0x218(r6)
    fcmpu cr0, f1, f2
    bne lbl_fn_80238CA0_00000E20
    lfs f2, 0x21c(r6)
    fcmpu cr0, f0, f2
    bne lbl_fn_80238CA0_00000E20
    lfs f2, 0x220(r6)
    fcmpu cr0, f0, f2
    bne lbl_fn_80238CA0_00000E20
    lfs f2, 0x224(r6)
    fcmpu cr0, f0, f2
    bne lbl_fn_80238CA0_00000E20
    lwz r7, 0x30(r31)
    lwzx r6, r7, r4
    ori r6, r6, 0x40
    stwx r6, r7, r4
lbl_fn_80238CA0_00000E20:
    addi r3, r3, 0x26c
    addi r4, r4, 0x4
    addi r5, r5, 0x1
lbl_fn_80238CA0_00000E2C:
    lwz r6, 0x0(r31)
    cmplw r5, r6
    blt lbl_fn_80238CA0_00000B28
    b lbl_fn_80238CA0_00000E44
lbl_fn_80238CA0_00000E3C:
    lwz r0, 0x40(r3)
    stw r0, 0x30(r4)
lbl_fn_80238CA0_00000E44:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80239030(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stmw r20, 0x10(r1)
    lis r31, lbl_80783A18@ha
    addi r31, r31, lbl_80783A18@l
    mr r27, r4
    mr r26, r3
    addi r4, r31, 0x0
    bl fn_802371BC
    lwz r0, 0x4(r26)
    cmplwi r0, 0x22
    bge lbl_fn_80239030_00000E94
    li r3, 0x0
    b lbl_fn_80239030_000014B4
lbl_fn_80239030_00000E94:
    cmplwi r0, 0x24
    bge lbl_fn_80239030_00000EB8
    lwz r3, lbl_8087EEB8
    cmpwi r3, 0x0
    beq lbl_fn_80239030_00000EB8
    lis r4, lbl_80742FE0@ha
    addi r4, r4, lbl_80742FE0@l
    addi r4, r4, 0x1
    bl fn_800697D8
lbl_fn_80239030_00000EB8:
    lwz r0, 0x4(r26)
    stw r0, 0x3c(r27)
    lwz r4, 0x28(r26)
    lwz r3, 0x2c(r26)
    add r7, r4, r26
    lwz r0, 0x30(r26)
    add r6, r3, r26
    lwz r4, 0x34(r26)
    add r5, r0, r26
    lwz r3, 0x38(r26)
    lwz r0, 0x3c(r26)
    add r4, r4, r26
    add r3, r3, r26
    stw r7, 0x28(r26)
    add r0, r0, r26
    lwz r10, 0x14(r26)
    lwz r9, 0x18(r26)
    lwz r8, 0x20(r26)
    add r30, r10, r26
    stw r6, 0x2c(r26)
    add r7, r9, r26
    add r29, r8, r26
    stw r5, 0x30(r26)
    stw r4, 0x34(r26)
    stw r3, 0x38(r26)
    stw r0, 0x3c(r26)
    lwz r0, 0x3c(r27)
    cmplwi r0, 0x23
    ble lbl_fn_80239030_00000F64
    lwz r3, 0x40(r26)
    lwz r0, 0x44(r26)
    slwi r4, r3, 24
    rlwimi r4, r3, 8, 24, 31
    slwi r5, r0, 24
    rlwimi r5, r0, 8, 24, 31
    rlwimi r4, r3, 24, 16, 23
    rlwimi r5, r0, 24, 16, 23
    rlwimi r4, r3, 8, 8, 15
    rlwimi r5, r0, 8, 8, 15
    add r0, r4, r26
    stw r0, 0x40(r26)
    add r0, r5, r26
    stw r0, 0x44(r26)
lbl_fn_80239030_00000F64:
    stw r7, 0x4(r27)
    li r23, 0x0
    li r22, 0x0
    b lbl_fn_80239030_00000F8C
lbl_fn_80239030_00000F74:
    lwz r0, 0x4(r27)
    addi r4, r31, 0x68
    add r3, r0, r22
    bl fn_802371BC
    addi r22, r22, 0x26c
    addi r23, r23, 0x1
lbl_fn_80239030_00000F8C:
    lwz r0, 0xc(r26)
    cmplw r23, r0
    blt lbl_fn_80239030_00000F74
    stw r0, 0x0(r27)
    li r23, 0x0
    li r22, 0x0
    li r25, 0x0
    stw r30, 0xc(r27)
    b lbl_fn_80239030_00000FE0
lbl_fn_80239030_00000FB0:
    lwz r0, 0xc(r27)
    addi r4, r31, 0x100
    add r3, r0, r22
    bl fn_802371BC
    lwz r0, 0x4(r26)
    cmplwi r0, 0x22
    bgt lbl_fn_80239030_00000FD8
    lwz r0, 0xc(r27)
    add r3, r0, r22
    stb r25, 0x80(r3)
lbl_fn_80239030_00000FD8:
    addi r22, r22, 0x138
    addi r23, r23, 0x1
lbl_fn_80239030_00000FE0:
    lwz r0, 0x10(r26)
    cmplw r23, r0
    blt lbl_fn_80239030_00000FB0
    stw r0, 0x8(r27)
    li r23, 0x0
    li r22, 0x0
    stw r29, 0x14(r27)
    b lbl_fn_80239030_00001018
lbl_fn_80239030_00001000:
    lwz r0, 0x14(r27)
    addi r4, r31, 0x148
    add r3, r0, r22
    bl fn_802371BC
    addi r22, r22, 0x110
    addi r23, r23, 0x1
lbl_fn_80239030_00001018:
    lwz r0, 0x1c(r26)
    cmplw r23, r0
    blt lbl_fn_80239030_00001000
    stw r0, 0x10(r27)
    li r23, 0x0
    li r22, 0x0
    lwz r0, 0x28(r26)
    stw r0, 0x18(r27)
    b lbl_fn_80239030_00001054
lbl_fn_80239030_0000103C:
    lwz r0, 0x18(r27)
    addi r4, r31, 0x178
    add r3, r0, r22
    bl fn_802371BC
    addi r22, r22, 0x4
    addi r23, r23, 0x1
lbl_fn_80239030_00001054:
    lwz r3, 0x0(r27)
    cmplw r23, r3
    blt lbl_fn_80239030_0000103C
    lwz r0, 0x3c(r27)
    cmplwi r0, 0x23
    bgt lbl_fn_80239030_00001158
    lis r25, lbl_80742FE0@ha
    lwz r29, 0x2c(r26)
    addi r5, r25, lbl_80742FE0@l
    li r4, 0x7
    mulli r3, r3, 0xb0
    li r7, 0x0
    mr r6, r5
    bl fn_800846FC
    stw r3, 0x1c(r27)
    li r30, 0x0
    li r22, 0x0
    b lbl_fn_80239030_00001148
lbl_fn_80239030_0000109C:
    li r28, 0x0
    li r23, 0x0
lbl_fn_80239030_000010A4:
    lwz r7, 0x0(r29)
    addi r5, r25, lbl_80742FE0@l
    lwz r4, 0x1c(r27)
    add r3, r23, r22
    rlwinm r0, r7, 24, 16, 23
    mr r6, r5
    rlwimi r0, r7, 8, 24, 31
    stwbrx r7, r4, r3
    rlwimi r0, r7, 8, 8, 15
    add r21, r4, r3
    rlwimi r0, r7, 24, 0, 7
    li r4, 0x7
    slwi r3, r0, 3
    li r7, 0x0
    addi r29, r29, 0x4
    bl fn_800846FC
    stw r3, 0x4(r21)
    mr r4, r29
    lwz r0, 0x0(r21)
    slwi r5, r0, 3
    bl memcpy
    li r20, 0x0
    li r24, 0x0
    b lbl_fn_80239030_0000111C
lbl_fn_80239030_00001104:
    lwz r0, 0x4(r21)
    addi r4, r31, 0x188
    add r3, r0, r24
    bl fn_802371BC
    addi r24, r24, 0x8
    addi r20, r20, 0x1
lbl_fn_80239030_0000111C:
    lwz r0, 0x0(r21)
    cmplw r20, r0
    blt lbl_fn_80239030_00001104
    addi r28, r28, 0x1
    slwi r0, r0, 3
    cmpwi r28, 0x16
    addi r23, r23, 0x8
    add r29, r29, r0
    blt lbl_fn_80239030_000010A4
    addi r22, r22, 0xb0
    addi r30, r30, 0x1
lbl_fn_80239030_00001148:
    lwz r0, 0x0(r27)
    cmplw r30, r0
    blt lbl_fn_80239030_0000109C
    b lbl_fn_80239030_000011F8
lbl_fn_80239030_00001158:
    lwz r0, 0x2c(r26)
    li r28, 0x0
    stw r0, 0x1c(r27)
    li r22, 0x0
    b lbl_fn_80239030_000011EC
lbl_fn_80239030_0000116C:
    li r29, 0x0
    li r23, 0x0
lbl_fn_80239030_00001174:
    lwz r3, 0x1c(r27)
    add r0, r23, r22
    li r30, 0x0
    li r24, 0x0
    add r20, r3, r0
    lwzx r3, r3, r0
    stwbrx r3, r0, r20
    lwz r0, 0x4(r20)
    slwi r3, r0, 24
    rlwimi r3, r0, 8, 24, 31
    rlwimi r3, r0, 24, 16, 23
    rlwimi r3, r0, 8, 8, 15
    add r0, r3, r26
    stw r0, 0x4(r20)
    b lbl_fn_80239030_000011C8
lbl_fn_80239030_000011B0:
    lwz r0, 0x4(r20)
    addi r4, r31, 0x188
    add r3, r0, r24
    bl fn_802371BC
    addi r24, r24, 0x8
    addi r30, r30, 0x1
lbl_fn_80239030_000011C8:
    lwz r0, 0x0(r20)
    cmplw r30, r0
    blt lbl_fn_80239030_000011B0
    addi r29, r29, 0x1
    addi r23, r23, 0x8
    cmpwi r29, 0x16
    blt lbl_fn_80239030_00001174
    addi r22, r22, 0xb0
    addi r28, r28, 0x1
lbl_fn_80239030_000011EC:
    lwz r0, 0x0(r27)
    cmplw r28, r0
    blt lbl_fn_80239030_0000116C
lbl_fn_80239030_000011F8:
    lwz r0, 0x38(r26)
    li r20, 0x0
    stw r0, 0x20(r27)
    li r22, 0x0
    b lbl_fn_80239030_00001224
lbl_fn_80239030_0000120C:
    lwz r0, 0x20(r27)
    addi r4, r31, 0x178
    add r3, r0, r22
    bl fn_802371BC
    addi r22, r22, 0x4
    addi r20, r20, 0x1
lbl_fn_80239030_00001224:
    lwz r3, 0x10(r27)
    cmplw r20, r3
    blt lbl_fn_80239030_0000120C
    lwz r0, 0x3c(r27)
    cmplwi r0, 0x23
    bgt lbl_fn_80239030_00001328
    lis r25, lbl_80742FE0@ha
    lwz r28, 0x3c(r26)
    addi r5, r25, lbl_80742FE0@l
    li r4, 0x7
    mulli r3, r3, 0x68
    li r7, 0x0
    mr r6, r5
    bl fn_800846FC
    stw r3, 0x24(r27)
    li r29, 0x0
    li r23, 0x0
    b lbl_fn_80239030_00001318
lbl_fn_80239030_0000126C:
    li r30, 0x0
    li r24, 0x0
lbl_fn_80239030_00001274:
    lwz r7, 0x0(r28)
    addi r5, r25, lbl_80742FE0@l
    lwz r4, 0x24(r27)
    add r3, r24, r23
    rlwinm r0, r7, 24, 16, 23
    mr r6, r5
    rlwimi r0, r7, 8, 24, 31
    stwbrx r7, r4, r3
    rlwimi r0, r7, 8, 8, 15
    add r20, r4, r3
    rlwimi r0, r7, 24, 0, 7
    li r4, 0x7
    slwi r3, r0, 3
    li r7, 0x0
    addi r28, r28, 0x4
    bl fn_800846FC
    stw r3, 0x4(r20)
    mr r4, r28
    lwz r0, 0x0(r20)
    slwi r5, r0, 3
    bl memcpy
    li r21, 0x0
    li r22, 0x0
    b lbl_fn_80239030_000012EC
lbl_fn_80239030_000012D4:
    lwz r0, 0x4(r20)
    addi r4, r31, 0x188
    add r3, r0, r22
    bl fn_802371BC
    addi r22, r22, 0x8
    addi r21, r21, 0x1
lbl_fn_80239030_000012EC:
    lwz r0, 0x0(r20)
    cmplw r21, r0
    blt lbl_fn_80239030_000012D4
    addi r30, r30, 0x1
    slwi r0, r0, 3
    cmpwi r30, 0xd
    addi r24, r24, 0x8
    add r28, r28, r0
    blt lbl_fn_80239030_00001274
    addi r23, r23, 0x68
    addi r29, r29, 0x1
lbl_fn_80239030_00001318:
    lwz r0, 0x10(r27)
    cmplw r29, r0
    blt lbl_fn_80239030_0000126C
    b lbl_fn_80239030_000013C8
lbl_fn_80239030_00001328:
    lwz r0, 0x3c(r26)
    li r28, 0x0
    stw r0, 0x24(r27)
    li r25, 0x0
    b lbl_fn_80239030_000013BC
lbl_fn_80239030_0000133C:
    li r29, 0x0
    li r24, 0x0
lbl_fn_80239030_00001344:
    lwz r3, 0x24(r27)
    add r0, r24, r25
    li r30, 0x0
    li r23, 0x0
    add r20, r3, r0
    lwzx r3, r3, r0
    stwbrx r3, r0, r20
    lwz r0, 0x4(r20)
    slwi r3, r0, 24
    rlwimi r3, r0, 8, 24, 31
    rlwimi r3, r0, 24, 16, 23
    rlwimi r3, r0, 8, 8, 15
    add r0, r3, r26
    stw r0, 0x4(r20)
    b lbl_fn_80239030_00001398
lbl_fn_80239030_00001380:
    lwz r0, 0x4(r20)
    addi r4, r31, 0x188
    add r3, r0, r23
    bl fn_802371BC
    addi r23, r23, 0x8
    addi r30, r30, 0x1
lbl_fn_80239030_00001398:
    lwz r0, 0x0(r20)
    cmplw r30, r0
    blt lbl_fn_80239030_00001380
    addi r29, r29, 0x1
    addi r24, r24, 0x8
    cmpwi r29, 0xd
    blt lbl_fn_80239030_00001344
    addi r25, r25, 0x68
    addi r28, r28, 0x1
lbl_fn_80239030_000013BC:
    lwz r0, 0x10(r27)
    cmplw r28, r0
    blt lbl_fn_80239030_0000133C
lbl_fn_80239030_000013C8:
    lwz r0, 0x30(r26)
    li r6, 0x0
    stw r0, 0x28(r27)
    li r5, 0x0
    lwz r0, 0x34(r26)
    stw r0, 0x2c(r27)
    b lbl_fn_80239030_00001408
lbl_fn_80239030_000013E4:
    lwz r4, 0x30(r26)
    addi r6, r6, 0x1
    lwz r3, 0x28(r27)
    lwzx r4, r4, r5
    neg r0, r4
    or r0, r0, r4
    srwi r0, r0, 31
    stwx r0, r3, r5
    addi r5, r5, 0x4
lbl_fn_80239030_00001408:
    lwz r0, 0x0(r27)
    cmplw r6, r0
    blt lbl_fn_80239030_000013E4
    li r6, 0x0
    li r5, 0x0
    b lbl_fn_80239030_00001444
lbl_fn_80239030_00001420:
    lwz r4, 0x34(r26)
    addi r6, r6, 0x1
    lwz r3, 0x2c(r27)
    lwzx r4, r4, r5
    neg r0, r4
    or r0, r0, r4
    srwi r0, r0, 31
    stwx r0, r3, r5
    addi r5, r5, 0x4
lbl_fn_80239030_00001444:
    lwz r0, 0x10(r27)
    cmplw r6, r0
    blt lbl_fn_80239030_00001420
    lwz r0, 0x3c(r27)
    cmplwi r0, 0x23
    bgt lbl_fn_80239030_00001484
    lwz r0, 0x8(r27)
    lis r5, lbl_80742FE0@ha
    addi r5, r5, lbl_80742FE0@l
    li r4, 0x7
    mr r6, r5
    slwi r3, r0, 2
    li r7, 0x0
    bl fn_800846FC
    stw r3, 0x34(r27)
    b lbl_fn_80239030_0000148C
lbl_fn_80239030_00001484:
    lwz r0, 0x44(r26)
    stw r0, 0x34(r27)
lbl_fn_80239030_0000148C:
    mr r3, r27
    li r4, 0x0
    bl fn_802386FC
    stw r3, 0x38(r27)
    mr r3, r27
    bl fn_80238808
    mr r3, r26
    mr r4, r27
    bl fn_80238CA0
    li r3, 0x1
lbl_fn_80239030_000014B4:
    lmw r20, 0x10(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_802396A0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r31, r3
    lwz r0, 0x3c(r3)
    cmplwi r0, 0x23
    bgt lbl_fn_802396A0_000015A8
    li r28, 0x0
    li r29, 0x0
    b lbl_fn_802396A0_00001528
lbl_fn_802396A0_000014F4:
    li r27, 0x0
    li r30, 0x0
lbl_fn_802396A0_000014FC:
    lwz r3, 0x1c(r31)
    add r0, r30, r29
    add r3, r3, r0
    lwz r3, 0x4(r3)
    bl fn_80084C24
    addi r27, r27, 0x1
    addi r30, r30, 0x8
    cmplwi r27, 0x16
    blt lbl_fn_802396A0_000014FC
    addi r29, r29, 0xb0
    addi r28, r28, 0x1
lbl_fn_802396A0_00001528:
    lwz r0, 0x0(r31)
    cmplw r28, r0
    blt lbl_fn_802396A0_000014F4
    lwz r3, 0x1c(r31)
    bl fn_80084C24
    li r27, 0x0
    li r30, 0x0
    b lbl_fn_802396A0_0000157C
lbl_fn_802396A0_00001548:
    li r28, 0x0
    li r29, 0x0
lbl_fn_802396A0_00001550:
    lwz r3, 0x24(r31)
    add r0, r29, r30
    add r3, r3, r0
    lwz r3, 0x4(r3)
    bl fn_80084C24
    addi r28, r28, 0x1
    addi r29, r29, 0x8
    cmplwi r28, 0xd
    blt lbl_fn_802396A0_00001550
    addi r30, r30, 0x68
    addi r27, r27, 0x1
lbl_fn_802396A0_0000157C:
    lwz r0, 0x10(r31)
    cmplw r27, r0
    blt lbl_fn_802396A0_00001548
    lwz r3, 0x24(r31)
    bl fn_80084C24
    lwz r3, 0x30(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802396A0_000015A0
    bl fn_80084C24
lbl_fn_802396A0_000015A0:
    lwz r3, 0x34(r31)
    bl fn_80084C24
lbl_fn_802396A0_000015A8:
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80239794(void)
{
    nofralloc
    b fn_80234A8C
}

asm void fn_80239798(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r30, r6
    mr r31, r7
    lwz r0, lbl_8087F3C0
    cmpwi r0, 0x0
    bne lbl_fn_80239798_00001638
    cmpwi r3, 0x0
    beq lbl_fn_80239798_00001638
    lis r5, lbl_8074308C@ha
    li r3, 0xf8
    addi r5, r5, lbl_8074308C@l
    li r4, 0x7
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_80239798_00001634
    mr r4, r27
    mr r5, r28
    mr r6, r29
    mr r7, r30
    mr r8, r31
    bl fn_80239828
lbl_fn_80239798_00001634:
    stw r3, lbl_8087F3C0
lbl_fn_80239798_00001638:
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    lwz r3, lbl_8087F3C0
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80239828(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r29, r3
    mr r27, r5
    mr r28, r6
    mr r31, r7
    mr r30, r8
    bl fn_800D1D3C
    lis r5, lbl_80783BB8@ha
    li r7, 0x0
    addi r5, r5, lbl_80783BB8@l
    lfs f0, lbl_80883160
    li r0, 0x1
    stw r5, 0x0(r29)
    addi r4, r5, 0x1c
    addi r3, r29, 0x4c
    stw r4, 0x48(r29)
    mr r4, r27
    mr r5, r28
    mr r6, r31
    stw r7, 0x4c(r29)
    stw r7, 0x50(r29)
    stw r7, 0x54(r29)
    stw r7, 0x58(r29)
    stw r7, 0x5c(r29)
    stw r7, 0x60(r29)
    stw r7, 0x64(r29)
    stw r7, 0x68(r29)
    stw r7, 0x6c(r29)
    stw r7, 0x70(r29)
    stw r7, 0x74(r29)
    stw r7, 0x78(r29)
    stw r7, 0x7c(r29)
    stw r7, 0x80(r29)
    stw r7, 0x84(r29)
    stw r7, 0x88(r29)
    stw r7, 0x8c(r29)
    stw r7, 0x90(r29)
    stfs f0, 0x94(r29)
    stw r7, 0x98(r29)
    stw r7, 0x9c(r29)
    stw r7, 0xa0(r29)
    stw r7, 0xa4(r29)
    stw r7, 0xa8(r29)
    stw r7, 0xac(r29)
    stw r7, 0xb0(r29)
    stw r7, 0xb4(r29)
    stw r7, 0xb8(r29)
    stw r7, 0xbc(r29)
    stw r7, 0xc0(r29)
    stw r7, 0xc4(r29)
    stw r7, 0xc8(r29)
    stw r7, 0xcc(r29)
    stw r7, 0xd0(r29)
    stw r7, 0xd8(r29)
    stw r7, 0xdc(r29)
    stw r7, 0xe0(r29)
    stw r0, 0xe4(r29)
    stw r7, 0xe8(r29)
    stw r7, 0xec(r29)
    stw r7, 0xf0(r29)
    stw r7, 0xf4(r29)
    bl fn_8022B850
    lwz r0, 0xdc(r29)
    stw r30, 0xd4(r29)
    cmplw r0, r30
    bgt lbl_fn_80239828_000018C0
    mulli r3, r30, 0x64
    li r4, 0x7
    la r5, lbl_8087DC1C
    la r6, lbl_8087DC18
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_80239AB4@ha
    mr r7, r30
    addi r4, r4, fn_80239AB4@l
    li r5, 0x0
    li r6, 0x64
    bl fn_80695720
    lwz r0, 0xe0(r29)
    mr r31, r3
    cmpwi r0, 0x0
    beq lbl_fn_80239828_000018B8
    lwz r4, 0xd8(r29)
    mr r0, r30
    cmplw r30, r4
    ble lbl_fn_80239828_000017C0
    mr r0, r4
lbl_fn_80239828_000017C0:
    li r4, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80239828_000018A4
lbl_fn_80239828_000017D0:
    lwz r0, 0xe0(r29)
    add r7, r3, r4
    add r6, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x64
    lwz r0, 0x4(r6)
    stw r0, 0x4(r7)
    lwz r0, 0x8(r6)
    stw r0, 0x8(r7)
    lwz r0, 0xc(r6)
    stw r0, 0xc(r7)
    lwz r0, 0x10(r6)
    stw r0, 0x10(r7)
    lwz r0, 0x14(r6)
    stw r0, 0x14(r7)
    lfs f2, 0x20(r6)
    psq_l f1, 0x18(r6), 0, 0
    psq_st f1, 0x18(r7), 0, 0
    stfs f2, 0x20(r7)
    lfs f2, 0x2c(r6)
    psq_l f1, 0x24(r6), 0, 0
    psq_st f1, 0x24(r7), 0, 0
    stfs f2, 0x2c(r7)
    lfs f0, 0x30(r6)
    stfs f0, 0x30(r7)
    lfs f2, 0x3c(r6)
    psq_l f1, 0x34(r6), 0, 0
    psq_st f1, 0x34(r7), 0, 0
    stfs f2, 0x3c(r7)
    lwz r0, 0x40(r6)
    stw r0, 0x40(r7)
    lha r0, 0x44(r6)
    sth r0, 0x44(r7)
    lha r0, 0x46(r6)
    sth r0, 0x46(r7)
    lha r0, 0x48(r6)
    sth r0, 0x48(r7)
    lha r0, 0x4a(r6)
    sth r0, 0x4a(r7)
    lwz r0, 0x50(r6)
    lwz r5, 0x4c(r6)
    stw r5, 0x4c(r7)
    stw r0, 0x50(r7)
    lwz r0, 0x58(r6)
    lwz r5, 0x54(r6)
    stw r5, 0x54(r7)
    stw r0, 0x58(r7)
    lfs f0, 0x5c(r6)
    stfs f0, 0x5c(r7)
    lfs f0, 0x60(r6)
    stfs f0, 0x60(r7)
    bdnz lbl_fn_80239828_000017D0
lbl_fn_80239828_000018A4:
    lwz r3, 0xe0(r29)
    cmpwi r3, 0x0
    beq lbl_fn_80239828_000018B8
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80239828_000018B8:
    stw r31, 0xe0(r29)
    stw r30, 0xdc(r29)
lbl_fn_80239828_000018C0:
    addi r11, r1, 0x20
    mr r3, r29
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80239AB4(void)
{
    nofralloc
    blr
}

asm void fn_80239AB8(void)
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
    beq lbl_fn_80239AB8_000019D8
    lis r4, lbl_80783BB8@ha
    addi r4, r4, lbl_80783BB8@l
    stw r4, 0x0(r3)
    addi r0, r4, 0x1c
    stw r0, 0x48(r3)
    addi r3, r3, 0x4c
    bl fn_8022C2A0
    addic. r0, r29, 0xd8
    li r0, 0x0
    stw r0, lbl_8087F3C0
    beq lbl_fn_80239AB8_0000194C
    lwz r3, 0xe0(r29)
    cmpwi r3, 0x0
    beq lbl_fn_80239AB8_0000194C
    beq lbl_fn_80239AB8_0000194C
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80239AB8_0000194C:
    addic. r0, r29, 0x4c
    beq lbl_fn_80239AB8_000019BC
    addic. r31, r0, 0x2c
    beq lbl_fn_80239AB8_000019BC
    addic. r4, r31, 0x10
    beq lbl_fn_80239AB8_00001990
    beq lbl_fn_80239AB8_00001990
    beq lbl_fn_80239AB8_00001990
    beq lbl_fn_80239AB8_00001990
    beq lbl_fn_80239AB8_00001990
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_80239AB8_00001990
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_80239AB8_00001990:
    addic. r0, r31, 0x8
    beq lbl_fn_80239AB8_000019BC
    lwz r3, 0xc(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80239AB8_000019B0
    beq lbl_fn_80239AB8_000019B0
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80239AB8_000019B0:
    li r0, 0x0
    stw r0, 0xc(r31)
    stw r0, 0x8(r31)
lbl_fn_80239AB8_000019BC:
    mr r3, r29
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r30, 0x0
    ble lbl_fn_80239AB8_000019D8
    mr r3, r29
    bl dtor_80084684
lbl_fn_80239AB8_000019D8:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
