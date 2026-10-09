#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void dtor_80084684(void);
extern void fn_800827E0(void);
extern void fn_800839EC(void);
extern void fn_80083AD4(void);
extern void fn_80084320(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_800A4494(void);
extern void fn_800D1E9C(void);
extern void fn_800DC288(void);
extern void fn_800DDA70(void);
extern void fn_800DDD18(void);
extern void fn_800DEEDC(void);
extern void fn_800DEF04(void);
extern void fn_800DEF2C(void);
extern void fn_800DEF54(void);
extern void fn_800DEF7C(void);
extern void fn_800DEF94(void);
extern void fn_800DEFAC(void);
extern void fn_800DF16C(void);
extern void fn_800DF1D0(void);
extern void fn_8061E270(void);
extern void fn_8061E850(void);
extern void fn_8061E940(void);
extern void fn_8061EBE0(void);
extern void fn_8061F8D0(void);
extern void fn_8061FB70(void);
extern void fn_80621B80(void);
extern void fn_80621C50(void);
extern void fn_80621CD0(void);
extern void fn_806823B0(void);
extern void fn_80682428(void);
extern void fn_80682544(void);
extern void fn_806825B4(void);
extern char* strcpy(char* dest, const char* src);

/* External data declarations */
extern u8 jumptable_80778A40[];
extern u8 lbl_807327B4[];
extern u8 lbl_80732898[];
extern u8 lbl_807328A8[];
extern u8 lbl_80732930[];
extern u8 lbl_80732980[];
extern u8 lbl_807329E8[];
extern u8 lbl_80778B20[];
extern u8 lbl_80778B38[];
extern u8 lbl_80778B60[];
extern u8 lbl_80778B88[];

/* Small data declarations */
extern u32 lbl_8087EF70;
extern u32 lbl_8087EF78;
extern u32 lbl_8087EF7C;
extern u32 lbl_8087EF80;
extern u32 lbl_8087F018;
extern u32 lbl_80880CB0;
extern u32 lbl_80880CB4;
extern u32 lbl_80880CB8;
extern u32 lbl_80880CC0;

/* Function declarations */
void fn_800A500C(void);
void fn_800A5218(void);
void fn_800A54B0(void);
void fn_800A5508(void);
void fn_800A5554(void);
void fn_800A555C(void);
void fn_800A5584(void);
void fn_800A55AC(void);
void fn_800A55D4(void);
void fn_800A55FC(void);
void fn_800A5648(void);
void fn_800A56A8(void);
void fn_800A5870(void);
void fn_800A58D0(void);
void fn_800A58F8(void);
void fn_800A5920(void);
void fn_800A59F0(void);
void fn_800A5AA4(void);
void fn_800A5B30(void);
void fn_800A5B38(void);
void fn_800A5B40(void);
void fn_800A5D14(void);
void fn_800A5D6C(void);
void fn_800A5E00(void);
void fn_800A5F18(void);
void fn_800A6198(void);
void fn_800A67D4(void);
void fn_800A686C(void);
void fn_800A68D4(void);
void fn_800A693C(void);

asm void fn_800A500C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    subi r0, r5, 0x3
    cmplwi r0, 0x16
    stw r31, 0xc(r1)
    mr r31, r3
    stw r5, 0x15c(r3)
    bgt lbl_fn_800A500C_000001F8
    lis r5, jumptable_80778A40@ha
    slwi r0, r0, 2
    addi r5, r5, jumptable_80778A40@l
    lwzx r5, r5, r0
    mtctr r5
    bctr
    cmpwi r4, 0x0
    bne lbl_fn_800A500C_000000B4
    lwz r4, 0x164(r3)
    clrlwi r0, r4, 31
    cmplwi r0, 0x1
    bne lbl_fn_800A500C_00000060
    li r0, 0x12
    stw r0, 0x158(r3)
    b lbl_fn_800A500C_000001F8
lbl_fn_800A500C_00000060:
    rlwinm r0, r4, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_800A500C_00000078
    li r0, 0x13
    stw r0, 0x158(r3)
    b lbl_fn_800A500C_000001F8
lbl_fn_800A500C_00000078:
    rlwinm r0, r4, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_800A500C_00000090
    li r0, 0x14
    stw r0, 0x158(r3)
    b lbl_fn_800A500C_000001F8
lbl_fn_800A500C_00000090:
    rlwinm r0, r4, 0, 28, 28
    cmplwi r0, 0x8
    bne lbl_fn_800A500C_000000A8
    li r0, 0x15
    stw r0, 0x158(r3)
    b lbl_fn_800A500C_000001F8
lbl_fn_800A500C_000000A8:
    li r0, 0x0
    stw r0, 0x158(r3)
    b lbl_fn_800A500C_000001F8
lbl_fn_800A500C_000000B4:
    bl fn_800A4494
    stw r3, 0x158(r31)
    b lbl_fn_800A500C_000001F8
    cmpwi r4, 0x0
    beq lbl_fn_800A500C_000001F8
    cmpwi r4, -0x6
    bne lbl_fn_800A500C_000000DC
    lwz r0, 0x48(r3)
    cmpwi r0, 0x2
    beq lbl_fn_800A500C_000001F8
lbl_fn_800A500C_000000DC:
    mr r3, r31
    bl fn_800A4494
    stw r3, 0x158(r31)
    b lbl_fn_800A500C_000001F8
    cmpwi r4, 0x0
    beq lbl_fn_800A500C_000001F8
    bl fn_800A4494
    stw r3, 0x158(r31)
    b lbl_fn_800A500C_000001F8
    cmpwi r4, 0x0
    beq lbl_fn_800A500C_000001F8
    bl fn_800A4494
    stw r3, 0x158(r31)
    b lbl_fn_800A500C_000001F8
    cmpwi r4, 0x0
    beq lbl_fn_800A500C_000001F8
    bl fn_800A4494
    stw r3, 0x158(r31)
    b lbl_fn_800A500C_000001F8
    cmpwi r4, 0x0
    beq lbl_fn_800A500C_000001F8
    bl fn_800A4494
    stw r3, 0x158(r31)
    b lbl_fn_800A500C_000001F8
    cmpwi r4, 0x0
    bge lbl_fn_800A500C_00000150
    bl fn_800A4494
    stw r3, 0x158(r31)
    b lbl_fn_800A500C_000001F8
lbl_fn_800A500C_00000150:
    lwz r0, 0x154(r3)
    cmpw r4, r0
    beq lbl_fn_800A500C_000001F8
    li r0, 0x5
    stw r0, 0x158(r3)
    b lbl_fn_800A500C_000001F8
    cmpwi r4, 0x0
    bge lbl_fn_800A500C_0000017C
    bl fn_800A4494
    stw r3, 0x158(r31)
    b lbl_fn_800A500C_000001F8
lbl_fn_800A500C_0000017C:
    lwz r0, 0x150(r3)
    cmpw r4, r0
    beq lbl_fn_800A500C_000001F8
    li r0, 0x5
    stw r0, 0x158(r3)
    b lbl_fn_800A500C_000001F8
    cmpwi r4, 0x0
    bge lbl_fn_800A500C_000001A8
    bl fn_800A4494
    stw r3, 0x158(r31)
    b lbl_fn_800A500C_000001F8
lbl_fn_800A500C_000001A8:
    lwz r0, 0x150(r3)
    cmpw r4, r0
    beq lbl_fn_800A500C_000001F8
    li r0, 0x5
    stw r0, 0x158(r3)
    b lbl_fn_800A500C_000001F8
    cmpwi r4, 0x0
    beq lbl_fn_800A500C_000001F8
    bl fn_800A4494
    stw r3, 0x158(r31)
    b lbl_fn_800A500C_000001F8
    cmpwi r4, 0x0
    beq lbl_fn_800A500C_000001F8
    bl fn_800A4494
    stw r3, 0x158(r31)
    b lbl_fn_800A500C_000001F8
    cmpwi r4, 0x0
    beq lbl_fn_800A500C_000001F8
    bl fn_800A4494
    stw r3, 0x158(r31)
lbl_fn_800A500C_000001F8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800A5218(void)
{
    nofralloc
    stwu r1, -0x1f0(r1)
    mflr r0
    stw r0, 0x1f4(r1)
    stw r31, 0x1ec(r1)
    mr r31, r3
    addi r3, r1, 0x108
    stw r30, 0x1e8(r1)
    mr r30, r4
    stw r29, 0x1e4(r1)
    mr r29, r6
    stw r28, 0x1e0(r1)
    mr r28, r5
    bl fn_80621C50
    cmpwi r3, 0x0
    beq lbl_fn_800A5218_00000250
    li r3, 0x0
    b lbl_fn_800A5218_00000484
lbl_fn_800A5218_00000250:
    addi r3, r1, 0xc8
    bl fn_80621CD0
    cmpwi r3, 0x0
    beq lbl_fn_800A5218_00000268
    li r3, 0x0
    b lbl_fn_800A5218_00000484
lbl_fn_800A5218_00000268:
    addi r3, r1, 0xc8
    bl fn_80621B80
    cmpwi r3, 0x0
    beq lbl_fn_800A5218_00000280
    li r3, 0x0
    b lbl_fn_800A5218_00000484
lbl_fn_800A5218_00000280:
    mr r4, r31
    addi r3, r1, 0x8
    bl strcpy
    addi r3, r1, 0x8
    li r4, 0x2f
    bl fn_806825B4
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_800A5218_000002C8
    li r0, 0x0
    stb r0, 0x0(r3)
    addi r3, r1, 0x48
    addi r4, r1, 0x8
    bl strcpy
    addi r3, r1, 0x8
    addi r4, r31, 0x1
    bl strcpy
    b lbl_fn_800A5218_000002D0
lbl_fn_800A5218_000002C8:
    li r0, 0x0
    stb r0, 0x48(r1)
lbl_fn_800A5218_000002D0:
    addi r3, r1, 0x48
    bl fn_80621B80
    cmpwi r3, -0xc
    beq lbl_fn_800A5218_00000304
    cmpwi r3, -0x1
    beq lbl_fn_800A5218_0000032C
    cmpwi r3, -0x8
    beq lbl_fn_800A5218_0000032C
    cmpwi r3, -0x40
    beq lbl_fn_800A5218_0000032C
    cmpwi r3, -0x80
    beq lbl_fn_800A5218_0000032C
    b lbl_fn_800A5218_0000033C
lbl_fn_800A5218_00000304:
    addi r3, r1, 0x48
    li r4, 0x30
    li r5, 0x0
    bl fn_8061EBE0
    cmpwi r3, 0x0
    beq lbl_fn_800A5218_0000033C
    addi r3, r1, 0x108
    bl fn_80621B80
    li r3, 0x0
    b lbl_fn_800A5218_00000484
lbl_fn_800A5218_0000032C:
    addi r3, r1, 0x108
    bl fn_80621B80
    li r3, 0x0
    b lbl_fn_800A5218_00000484
lbl_fn_800A5218_0000033C:
    addi r3, r1, 0x108
    bl fn_80621B80
    addi r3, r1, 0x88
    addi r4, r1, 0xc8
    bl strcpy
    lbz r0, 0x48(r1)
    extsb. r0, r0
    beq lbl_fn_800A5218_0000037C
    lis r4, lbl_807327B4@ha
    addi r3, r1, 0x88
    addi r4, r4, lbl_807327B4@l
    addi r4, r4, 0x59
    bl fn_806823B0
    addi r3, r1, 0x88
    addi r4, r1, 0x48
    bl fn_806823B0
lbl_fn_800A5218_0000037C:
    lis r4, lbl_807327B4@ha
    addi r3, r1, 0x88
    addi r4, r4, lbl_807327B4@l
    addi r4, r4, 0x59
    bl fn_806823B0
    addi r3, r1, 0x88
    addi r4, r1, 0x8
    bl fn_806823B0
    addi r3, r1, 0x88
    addi r4, r1, 0x148
    li r5, 0x2
    bl fn_8061F8D0
    cmpwi r3, 0x0
    beq lbl_fn_800A5218_000003F4
    cmpwi r3, -0xc
    bne lbl_fn_800A5218_000003EC
    addi r3, r1, 0x88
    li r4, 0x30
    li r5, 0x0
    bl fn_8061E270
    addi r3, r1, 0x88
    addi r4, r1, 0x148
    li r5, 0x2
    bl fn_8061F8D0
    cmpwi r3, 0x0
    beq lbl_fn_800A5218_000003F4
    li r3, 0x0
    b lbl_fn_800A5218_00000484
lbl_fn_800A5218_000003EC:
    li r3, 0x0
    b lbl_fn_800A5218_00000484
lbl_fn_800A5218_000003F4:
    mr r4, r30
    addi r3, r1, 0x148
    li r5, 0x0
    bl fn_8061E940
    addi r0, r29, 0x1f
    srawi r0, r0, 5
    addze r0, r0
    slwi r31, r0, 5
    bl fn_800827E0
    lis r7, lbl_807327B4@ha
    mr r4, r31
    addi r7, r7, lbl_807327B4@l
    li r5, 0x20
    mr r8, r7
    li r6, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_800839EC
    mr r30, r3
    mr r5, r31
    li r4, 0x0
    bl memset
    mr r3, r30
    mr r4, r28
    mr r5, r29
    bl memcpy
    mr r4, r30
    mr r5, r31
    addi r3, r1, 0x148
    bl fn_8061E850
    bl fn_800827E0
    mr r4, r30
    bl fn_80083AD4
    addi r3, r1, 0x148
    bl fn_8061FB70
    li r3, 0x1
lbl_fn_800A5218_00000484:
    lwz r0, 0x1f4(r1)
    lwz r31, 0x1ec(r1)
    lwz r30, 0x1e8(r1)
    lwz r29, 0x1e4(r1)
    lwz r28, 0x1e0(r1)
    mtlr r0
    addi r1, r1, 0x1f0
    blr
}

asm void fn_800A54B0(void)
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
    beq lbl_fn_800A54B0_000004E0
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r31, 0x0
    ble lbl_fn_800A54B0_000004E0
    mr r3, r30
    bl dtor_80084684
lbl_fn_800A54B0_000004E0:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800A5508(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_800DDA70
    lwz r0, lbl_8087EF70
    cmpwi r0, 0x0
    bne lbl_fn_800A5508_00000538
    lis r5, lbl_80732980@ha
    li r3, 0x1
    addi r5, r5, lbl_80732980@l
    li r4, 0x1
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    stw r3, lbl_8087EF70
lbl_fn_800A5508_00000538:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800A5554(void)
{
    nofralloc
    lwz r3, lbl_8087F018
    b fn_800DDD18
}

asm void fn_800A555C(void)
{
    nofralloc
    lis r7, lbl_80732898@ha
    lis r6, lbl_807328A8@ha
    slwi r4, r4, 2
    slwi r0, r5, 2
    addi r7, r7, lbl_80732898@l
    addi r6, r6, lbl_807328A8@l
    lwz r3, lbl_8087F018
    lwzx r4, r7, r4
    lwzx r5, r6, r0
    b fn_800DEEDC
}

asm void fn_800A5584(void)
{
    nofralloc
    lis r7, lbl_80732898@ha
    lis r6, lbl_807328A8@ha
    slwi r4, r4, 2
    slwi r0, r5, 2
    addi r7, r7, lbl_80732898@l
    addi r6, r6, lbl_807328A8@l
    lwz r3, lbl_8087F018
    lwzx r4, r7, r4
    lwzx r5, r6, r0
    b fn_800DEF04
}

asm void fn_800A55AC(void)
{
    nofralloc
    lis r7, lbl_80732898@ha
    lis r6, lbl_807328A8@ha
    slwi r4, r4, 2
    slwi r0, r5, 2
    addi r7, r7, lbl_80732898@l
    addi r6, r6, lbl_807328A8@l
    lwz r3, lbl_8087F018
    lwzx r4, r7, r4
    lwzx r5, r6, r0
    b fn_800DEF2C
}

asm void fn_800A55D4(void)
{
    nofralloc
    lis r7, lbl_80732898@ha
    lis r6, lbl_807328A8@ha
    slwi r4, r4, 2
    slwi r0, r5, 2
    addi r7, r7, lbl_80732898@l
    addi r6, r6, lbl_807328A8@l
    lwz r3, lbl_8087F018
    lwzx r4, r7, r4
    lwzx r5, r6, r0
    b fn_800DEF54
}

asm void fn_800A55FC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r7, lbl_80732898@ha
    lis r6, lbl_807328A8@ha
    stw r0, 0x14(r1)
    slwi r4, r4, 2
    addi r7, r7, lbl_80732898@l
    slwi r0, r5, 2
    addi r6, r6, lbl_807328A8@l
    lwz r3, lbl_8087F018
    lwzx r4, r7, r4
    lwzx r5, r6, r0
    bl fn_800DEF54
    cntlzw r0, r3
    srwi r3, r0, 5
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800A5648(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    psq_st f31, 0x18(r1), 0, 0
    lis r7, lbl_80732898@ha
    lis r6, lbl_807328A8@ha
    slwi r4, r4, 2
    slwi r0, r5, 2
    addi r7, r7, lbl_80732898@l
    addi r6, r6, lbl_807328A8@l
    lfs f31, lbl_80880CB0
    lwz r3, lbl_8087F018
    lwzx r4, r7, r4
    lwzx r5, r6, r0
    bl fn_800DEF7C
    fadds f31, f31, f1
    fmr f1, f31
    psq_l f31, 0x18(r1), 0, 0
    lfd f31, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800A56A8(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    subi r0, r5, 0x4
    cmplwi r0, 0x2
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    lfs f31, lbl_80880CB0
    stw r31, 0x1c(r1)
    lis r31, lbl_80732898@ha
    addi r31, r31, lbl_80732898@l
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r5
    ble lbl_fn_800A56A8_000007F0
    cmplwi r5, 0x1
    ble lbl_fn_800A56A8_000006F0
    subi r0, r5, 0x2
    cmplwi r0, 0x1
    ble lbl_fn_800A56A8_00000770
    b lbl_fn_800A56A8_00000818
lbl_fn_800A56A8_000006F0:
    slwi r0, r4, 2
    addi r3, r31, 0x0
    lwzx r30, r3, r0
    lwz r3, lbl_8087F018
    slwi r0, r30, 2
    add r4, r3, r0
    lwz r0, 0x3c00(r4)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_800A56A8_00000734
    slwi r0, r5, 2
    addi r4, r31, 0xc0
    lwzx r5, r4, r0
    mr r4, r30
    bl fn_800DEF94
    fadds f31, f31, f1
    b lbl_fn_800A56A8_0000083C
lbl_fn_800A56A8_00000734:
    cmpwi r6, 0x0
    beq lbl_fn_800A56A8_00000750
    mr r4, r30
    li r5, 0xd
    bl fn_800DEF54
    cmpwi r3, 0x0
    bne lbl_fn_800A56A8_0000083C
lbl_fn_800A56A8_00000750:
    slwi r0, r29, 2
    addi r5, r31, 0x98
    lwz r3, lbl_8087F018
    mr r4, r30
    lwzx r5, r5, r0
    bl fn_800DEF94
    fadds f31, f31, f1
    b lbl_fn_800A56A8_0000083C
lbl_fn_800A56A8_00000770:
    slwi r0, r4, 2
    addi r3, r31, 0x0
    lwzx r30, r3, r0
    lwz r3, lbl_8087F018
    slwi r0, r30, 2
    add r4, r3, r0
    lwz r0, 0x3c00(r4)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_800A56A8_000007B4
    slwi r0, r5, 2
    addi r4, r31, 0xc0
    lwzx r5, r4, r0
    mr r4, r30
    bl fn_800DEF94
    fadds f31, f31, f1
    b lbl_fn_800A56A8_0000083C
lbl_fn_800A56A8_000007B4:
    cmpwi r6, 0x0
    beq lbl_fn_800A56A8_0000083C
    mr r4, r30
    li r5, 0xd
    bl fn_800DEF54
    cmpwi r3, 0x0
    beq lbl_fn_800A56A8_0000083C
    slwi r0, r29, 2
    addi r5, r31, 0x98
    lwz r3, lbl_8087F018
    mr r4, r30
    lwzx r5, r5, r0
    bl fn_800DEF94
    fadds f31, f31, f1
    b lbl_fn_800A56A8_0000083C
lbl_fn_800A56A8_000007F0:
    slwi r6, r4, 2
    addi r4, r31, 0x0
    slwi r0, r5, 2
    addi r5, r31, 0x98
    lwz r3, lbl_8087F018
    lwzx r4, r4, r6
    lwzx r5, r5, r0
    bl fn_800DEF94
    fadds f31, f31, f1
    b lbl_fn_800A56A8_0000083C
lbl_fn_800A56A8_00000818:
    slwi r6, r4, 2
    addi r4, r31, 0x0
    slwi r0, r5, 2
    addi r5, r31, 0x98
    lwz r3, lbl_8087F018
    lwzx r4, r4, r6
    lwzx r5, r5, r0
    bl fn_800DEF94
    fadds f31, f31, f1
lbl_fn_800A56A8_0000083C:
    fmr f1, f31
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_800A5870(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r7, lbl_80732898@ha
    lis r6, lbl_80732930@ha
    stw r0, 0x14(r1)
    slwi r4, r4, 2
    addi r7, r7, lbl_80732898@l
    slwi r0, r5, 2
    stw r31, 0xc(r1)
    addi r6, r6, lbl_80732930@l
    lwzx r4, r7, r4
    li r31, 0x0
    lwz r3, lbl_8087F018
    lwzx r5, r6, r0
    bl fn_800DEFAC
    cmpwi r3, 0x0
    beq lbl_fn_800A5870_000008AC
    li r31, 0x1
lbl_fn_800A5870_000008AC:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800A58D0(void)
{
    nofralloc
    lis r5, lbl_80732898@ha
    slwi r0, r4, 2
    addi r5, r5, lbl_80732898@l
    lwz r3, lbl_8087F018
    lwzx r0, r5, r0
    slwi r0, r0, 2
    add r3, r3, r0
    lwz r0, 0x3c00(r3)
    clrlwi r3, r0, 31
    blr
}

asm void fn_800A58F8(void)
{
    nofralloc
    lis r5, lbl_80732898@ha
    slwi r0, r4, 2
    addi r5, r5, lbl_80732898@l
    lwz r3, lbl_8087F018
    lwzx r0, r5, r0
    slwi r0, r0, 2
    add r3, r3, r0
    lwz r0, 0x3c00(r3)
    extrwi r3, r0, 1, 30
    blr
}

asm void fn_800A5920(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    lis r30, lbl_807328A8@ha
    lis r31, lbl_80732898@ha
    mr r27, r5
    slwi r29, r4, 2
    addi r30, r30, lbl_807328A8@l
    addi r31, r31, lbl_80732898@l
    li r28, 0x0
lbl_fn_800A5920_00000940:
    cmpwi r27, 0x0
    bne lbl_fn_800A5920_00000958
    cmpwi r28, 0x11
    beq lbl_fn_800A5920_00000978
    cmpwi r28, 0x10
    beq lbl_fn_800A5920_00000978
lbl_fn_800A5920_00000958:
    lwz r3, lbl_8087F018
    lwzx r4, r31, r29
    lwz r5, 0x0(r30)
    bl fn_800DEEDC
    cmpwi r3, 0x0
    beq lbl_fn_800A5920_00000978
    li r3, 0x1
    b lbl_fn_800A5920_000009D0
lbl_fn_800A5920_00000978:
    addi r28, r28, 0x1
    addi r30, r30, 0x4
    cmpwi r28, 0x17
    blt lbl_fn_800A5920_00000940
    lis r4, lbl_80732898@ha
    lwz r3, lbl_8087F018
    addi r4, r4, lbl_80732898@l
    li r5, 0x12
    lwzx r29, r4, r29
    mr r4, r29
    bl fn_800DEEDC
    cmpwi r3, 0x0
    beq lbl_fn_800A5920_000009B4
    li r3, 0x1
    b lbl_fn_800A5920_000009D0
lbl_fn_800A5920_000009B4:
    lwz r3, lbl_8087F018
    mr r4, r29
    li r5, 0x13
    bl fn_800DEEDC
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
lbl_fn_800A5920_000009D0:
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800A59F0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    lfs f31, lbl_80880CB4
    stfd f30, 0x20(r1)
    psq_st f30, 0x28(r1), 0, 0
    stw r31, 0x1c(r1)
    lis r31, lbl_80732898@ha
    addi r31, r31, lbl_80732898@l
    stw r30, 0x18(r1)
    slwi r30, r4, 2
    stw r29, 0x14(r1)
    lis r29, lbl_80732930@ha
    addi r29, r29, lbl_80732930@l
    stw r28, 0x10(r1)
    li r28, 0x0
lbl_fn_800A59F0_00000A2C:
    lfs f30, lbl_80880CB0
    lwz r3, lbl_8087F018
    lwzx r4, r31, r30
    lwz r5, 0x0(r29)
    bl fn_800DEF94
    fadds f30, f30, f1
    fcmpo cr0, f30, f31
    ble lbl_fn_800A59F0_00000A54
    li r3, 0x1
    b lbl_fn_800A59F0_00000A68
lbl_fn_800A59F0_00000A54:
    addi r28, r28, 0x1
    addi r29, r29, 0x4
    cmpwi r28, 0x4
    blt lbl_fn_800A59F0_00000A2C
    li r3, 0x0
lbl_fn_800A59F0_00000A68:
    lwz r0, 0x44(r1)
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    psq_l f30, 0x28(r1), 0, 0
    lfd f30, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_800A5AA4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_80732898@ha
    addi r31, r31, lbl_80732898@l
    stw r30, 0x18(r1)
    slwi r30, r4, 2
    stw r29, 0x14(r1)
    lis r29, lbl_80732930@ha
    addi r29, r29, lbl_80732930@l
    stw r28, 0x10(r1)
    li r28, 0x0
lbl_fn_800A5AA4_00000ACC:
    lwz r3, lbl_8087F018
    lwzx r4, r31, r30
    lwz r5, 0x0(r29)
    lfs f1, lbl_80880CB8
    bl fn_800DEFAC
    cmpwi r3, 0x0
    beq lbl_fn_800A5AA4_00000AF0
    li r3, 0x1
    b lbl_fn_800A5AA4_00000B04
lbl_fn_800A5AA4_00000AF0:
    addi r28, r28, 0x1
    addi r29, r29, 0x4
    cmpwi r28, 0x4
    blt lbl_fn_800A5AA4_00000ACC
    li r3, 0x0
lbl_fn_800A5AA4_00000B04:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800A5B30(void)
{
    nofralloc
    lwz r3, lbl_8087F018
    b fn_800DF16C
}

asm void fn_800A5B38(void)
{
    nofralloc
    lwz r3, lbl_8087F018
    b fn_800DF1D0
}

asm void fn_800A5B40(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r5, 0x3
    stw r0, 0x24(r1)
    lbz r0, 0x0(r4)
    stw r31, 0x1c(r1)
    mr r31, r4
    addi r31, r31, 0x1
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    lis r29, lbl_807329E8@ha
    addi r4, r29, lbl_807329E8@l
    stb r0, 0x0(r3)
    bl fn_80682544
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_800A5B40_00000B84
    mr r3, r31
    b lbl_fn_800A5B40_00000CEC
lbl_fn_800A5B40_00000B84:
    addi r29, r29, lbl_807329E8@l
    mr r3, r30
    addi r4, r29, 0x4
    li r5, 0x3
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_800A5B40_00000BA8
    li r0, 0x1
    b lbl_fn_800A5B40_00000C00
lbl_fn_800A5B40_00000BA8:
    mr r3, r30
    addi r4, r29, 0x8
    li r5, 0x3
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_800A5B40_00000BC8
    li r0, 0x1
    b lbl_fn_800A5B40_00000C00
lbl_fn_800A5B40_00000BC8:
    mr r3, r30
    addi r4, r29, 0xc
    li r5, 0x3
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_800A5B40_00000BE8
    li r0, 0x1
    b lbl_fn_800A5B40_00000C00
lbl_fn_800A5B40_00000BE8:
    mr r3, r30
    addi r4, r29, 0x10
    li r5, 0x3
    bl fn_80682544
    cntlzw r0, r3
    srwi r0, r0, 5
lbl_fn_800A5B40_00000C00:
    cmpwi r0, 0x0
    beq lbl_fn_800A5B40_00000C10
    mr r3, r31
    b lbl_fn_800A5B40_00000CEC
lbl_fn_800A5B40_00000C10:
    lbz r5, 0x0(r30)
    li r3, 0x0
    addi r4, r5, 0xdb
    clrlwi r0, r4, 24
    cmplwi r0, 0xa
    bgt lbl_fn_800A5B40_00000C3C
    li r0, 0x1
    slw r0, r0, r4
    andi. r0, r0, 0x561
    beq lbl_fn_800A5B40_00000C3C
    li r3, 0x1
lbl_fn_800A5B40_00000C3C:
    cmpwi r3, 0x0
    beq lbl_fn_800A5B40_00000C4C
    mr r3, r31
    b lbl_fn_800A5B40_00000CEC
lbl_fn_800A5B40_00000C4C:
    extsb r0, r5
    cmpwi r0, 0x2c
    bne lbl_fn_800A5B40_00000C60
    mr r3, r31
    b lbl_fn_800A5B40_00000CEC
lbl_fn_800A5B40_00000C60:
    cmpwi r0, 0x28
    bne lbl_fn_800A5B40_00000C70
    mr r3, r31
    b lbl_fn_800A5B40_00000CEC
lbl_fn_800A5B40_00000C70:
    cmpwi r0, 0x29
    bne lbl_fn_800A5B40_00000C80
    mr r3, r31
    b lbl_fn_800A5B40_00000CEC
lbl_fn_800A5B40_00000C80:
    addi r30, r30, 0x1
    b lbl_fn_800A5B40_00000CDC
lbl_fn_800A5B40_00000C88:
    extsb r3, r3
    li r0, 0x0
    cmpwi r3, 0x41
    blt lbl_fn_800A5B40_00000CA0
    cmpwi r3, 0x7a
    ble lbl_fn_800A5B40_00000CC0
lbl_fn_800A5B40_00000CA0:
    cmpwi r3, 0x30
    blt lbl_fn_800A5B40_00000CB0
    cmpwi r3, 0x39
    ble lbl_fn_800A5B40_00000CC0
lbl_fn_800A5B40_00000CB0:
    cmpwi r3, 0x2e
    beq lbl_fn_800A5B40_00000CC0
    cmpwi r3, 0x5f
    bne lbl_fn_800A5B40_00000CC4
lbl_fn_800A5B40_00000CC0:
    li r0, 0x1
lbl_fn_800A5B40_00000CC4:
    cmpwi r0, 0x0
    beq lbl_fn_800A5B40_00000CE8
    lbz r0, 0x0(r31)
    addi r31, r31, 0x1
    stb r0, 0x0(r30)
    addi r30, r30, 0x1
lbl_fn_800A5B40_00000CDC:
    lbz r3, 0x0(r31)
    extsb. r0, r3
    bne lbl_fn_800A5B40_00000C88
lbl_fn_800A5B40_00000CE8:
    mr r3, r31
lbl_fn_800A5B40_00000CEC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800A5D14(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_80778B20@ha
    li r5, 0x8
    stw r0, 0x14(r1)
    li r0, 0x0
    addi r4, r4, lbl_80778B20@l
    stw r31, 0xc(r1)
    mr r31, r3
    stw r4, 0x0(r3)
    li r4, 0x0
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    stw r0, 0x14(r3)
    addi r3, r3, 0xc
    bl memset
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800A5D6C(void)
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
    beq lbl_fn_800A5D6C_00000DD8
    lwz r0, 0x8(r3)
    lis r4, lbl_80778B20@ha
    addi r4, r4, lbl_80778B20@l
    stw r4, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800A5D6C_00000DAC
    mr r3, r0
    bl fn_80084C24
    li r0, 0x0
    stw r0, 0x8(r30)
lbl_fn_800A5D6C_00000DAC:
    addi r3, r30, 0xc
    li r4, 0x0
    li r5, 0x8
    bl memset
    cmpwi r31, 0x0
    li r0, 0x0
    stw r0, 0x14(r30)
    stw r0, 0x4(r30)
    ble lbl_fn_800A5D6C_00000DD8
    mr r3, r30
    bl dtor_80084684
lbl_fn_800A5D6C_00000DD8:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800A5E00(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800A5E00_00000E30
    mr r3, r0
    bl fn_80084C24
    li r0, 0x0
    stw r0, 0x8(r29)
lbl_fn_800A5E00_00000E30:
    addi r3, r29, 0xc
    li r4, 0x0
    li r5, 0x8
    bl memset
    li r0, 0x0
    stw r0, 0x14(r29)
    mr r3, r29
    mr r4, r30
    stw r0, 0x4(r29)
    addi r5, r1, 0x8
    addi r6, r29, 0x14
    stw r0, 0x8(r1)
    bl fn_800A5F18
    cmpwi r3, 0x0
    beq lbl_fn_800A5E00_00000ED8
    lwz r0, 0x14(r29)
    cmpwi r0, 0x0
    ble lbl_fn_800A5E00_00000EB4
    lis r3, lbl_807329E8@ha
    slwi r5, r0, 3
    slwi r0, r0, 4
    li r4, 0x8
    addi r3, r3, lbl_807329E8@l
    li r7, 0x0
    add r31, r5, r0
    addi r5, r3, 0x14
    mr r3, r31
    mr r6, r5
    bl fn_800846FC
    stw r3, 0x8(r29)
    mr r5, r31
    li r4, 0x0
    bl memset
lbl_fn_800A5E00_00000EB4:
    li r3, 0x0
    li r0, 0x1
    stw r3, lbl_8087EF78
    mr r3, r29
    mr r4, r30
    li r5, -0x1
    stw r0, lbl_8087EF7C
    bl fn_800A6198
    stw r3, 0x4(r29)
lbl_fn_800A5E00_00000ED8:
    lwz r0, 0x4(r29)
    cmpwi r0, 0x0
    bne lbl_fn_800A5E00_00000EEC
    li r3, 0x0
    b lbl_fn_800A5E00_00000EF0
lbl_fn_800A5E00_00000EEC:
    li r3, 0x1
lbl_fn_800A5E00_00000EF0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800A5F18(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stmw r22, 0x48(r1)
    lis r29, lbl_807329E8@ha
    mr r28, r4
    mr r22, r5
    mr r23, r6
    addi r30, r29, lbl_807329E8@l
    li r27, 0x0
    li r26, 0x0
    li r25, 0x0
    li r24, 0x0
    li r31, 0x1
    b lbl_fn_800A5F18_00001110
lbl_fn_800A5F18_00000F48:
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x40
    bl memset
    mr r4, r28
    addi r3, r1, 0x8
    bl fn_800A5B40
    mr r28, r3
    addi r3, r1, 0x8
    addi r4, r29, lbl_807329E8@l
    li r5, 0x3
    bl fn_80682544
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_800A5F18_00000F8C
    addi r24, r24, 0x1
    b lbl_fn_800A5F18_00001110
lbl_fn_800A5F18_00000F8C:
    addi r3, r1, 0x8
    addi r4, r30, 0x4
    li r5, 0x3
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_800A5F18_00000FAC
    li r0, 0x1
    b lbl_fn_800A5F18_00001004
lbl_fn_800A5F18_00000FAC:
    addi r3, r1, 0x8
    addi r4, r30, 0x8
    li r5, 0x3
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_800A5F18_00000FCC
    li r0, 0x1
    b lbl_fn_800A5F18_00001004
lbl_fn_800A5F18_00000FCC:
    addi r3, r1, 0x8
    addi r4, r30, 0xc
    li r5, 0x3
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_800A5F18_00000FEC
    li r0, 0x1
    b lbl_fn_800A5F18_00001004
lbl_fn_800A5F18_00000FEC:
    addi r3, r1, 0x8
    addi r4, r30, 0x10
    li r5, 0x3
    bl fn_80682544
    cntlzw r0, r3
    srwi r0, r0, 5
lbl_fn_800A5F18_00001004:
    cmpwi r0, 0x0
    beq lbl_fn_800A5F18_00001018
    addi r24, r24, 0x1
    addi r25, r25, 0x1
    b lbl_fn_800A5F18_00001110
lbl_fn_800A5F18_00001018:
    lbz r3, 0x8(r1)
    li r4, 0x0
    addi r3, r3, 0xdb
    clrlwi r0, r3, 24
    cmplwi r0, 0xa
    bgt lbl_fn_800A5F18_00001040
    slw r0, r31, r3
    andi. r0, r0, 0x561
    beq lbl_fn_800A5F18_00001040
    li r4, 0x1
lbl_fn_800A5F18_00001040:
    cmpwi r4, 0x0
    beq lbl_fn_800A5F18_00001054
    li r27, 0x0
    addi r24, r24, 0x1
    b lbl_fn_800A5F18_00001110
lbl_fn_800A5F18_00001054:
    lbz r4, 0x8(r1)
    li r3, 0x0
    extsb r0, r4
    cmpwi r0, 0x41
    blt lbl_fn_800A5F18_00001070
    cmpwi r0, 0x7a
    ble lbl_fn_800A5F18_00001098
lbl_fn_800A5F18_00001070:
    extsb r0, r4
    cmpwi r0, 0x30
    blt lbl_fn_800A5F18_00001084
    cmpwi r0, 0x39
    ble lbl_fn_800A5F18_00001098
lbl_fn_800A5F18_00001084:
    extsb r0, r4
    cmpwi r0, 0x2e
    beq lbl_fn_800A5F18_00001098
    cmpwi r0, 0x5f
    bne lbl_fn_800A5F18_0000109C
lbl_fn_800A5F18_00001098:
    li r3, 0x1
lbl_fn_800A5F18_0000109C:
    cmpwi r3, 0x0
    beq lbl_fn_800A5F18_000010AC
    li r27, 0x1
    b lbl_fn_800A5F18_00001110
lbl_fn_800A5F18_000010AC:
    addi r3, r1, 0x8
    addi r4, r30, 0x15
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_800A5F18_000010C8
    subi r25, r25, 0x1
    b lbl_fn_800A5F18_00001110
lbl_fn_800A5F18_000010C8:
    addi r3, r1, 0x8
    addi r4, r30, 0x17
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_800A5F18_000010E8
    li r27, 0x0
    addi r26, r26, 0x1
    b lbl_fn_800A5F18_00001110
lbl_fn_800A5F18_000010E8:
    addi r3, r1, 0x8
    addi r4, r30, 0x19
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_800A5F18_00001108
    li r27, 0x0
    subi r26, r26, 0x1
    b lbl_fn_800A5F18_00001110
lbl_fn_800A5F18_00001108:
    li r3, 0x0
    b lbl_fn_800A5F18_00001178
lbl_fn_800A5F18_00001110:
    lbz r0, 0x0(r28)
    extsb. r0, r0
    bne lbl_fn_800A5F18_00000F48
    cmpwi r27, 0x0
    bne lbl_fn_800A5F18_00001148
    lis r4, lbl_807329E8@ha
    addi r3, r1, 0x8
    addi r4, r4, lbl_807329E8@l
    addi r4, r4, 0x19
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_800A5F18_00001148
    li r3, 0x0
    b lbl_fn_800A5F18_00001178
lbl_fn_800A5F18_00001148:
    cmpwi r26, 0x0
    beq lbl_fn_800A5F18_00001158
    li r3, 0x0
    b lbl_fn_800A5F18_00001178
lbl_fn_800A5F18_00001158:
    cmpwi r25, 0x0
    beq lbl_fn_800A5F18_00001168
    li r3, 0x0
    b lbl_fn_800A5F18_00001178
lbl_fn_800A5F18_00001168:
    addi r0, r24, 0x1
    stw r0, 0x0(r22)
    li r3, 0x1
    stw r24, 0x0(r23)
lbl_fn_800A5F18_00001178:
    lmw r22, 0x48(r1)
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_800A6198(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    lis r6, lbl_80778B38@ha
    stw r0, 0x94(r1)
    stmw r16, 0x50(r1)
    lis r25, lbl_807329E8@ha
    mr r16, r3
    mr r20, r4
    mr r17, r5
    addi r22, r6, lbl_80778B38@l
    addi r26, r25, lbl_807329E8@l
    li r19, 0x0
    li r18, 0x0
    li r23, 0x0
    li r24, 0x69
    li r30, 0x6d
    li r29, 0x70
    li r28, 0x6e
    li r27, 0x78
    li r31, 0x1
    b lbl_fn_800A6198_000017A4
lbl_fn_800A6198_000011E0:
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x40
    bl memset
    mr r3, r20
    addi r4, r25, lbl_807329E8@l
    li r5, 0x3
    bl fn_80682544
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_800A6198_00001334
    mr r4, r20
    addi r3, r1, 0x8
    bl fn_800A5B40
    mr r20, r3
    addi r3, r1, 0x8
    addi r4, r25, lbl_807329E8@l
    li r5, 0x3
    bl fn_80682544
    lwz r4, 0x8(r16)
    neg r5, r3
    lwz r0, lbl_8087EF78
    or r3, r5, r3
    srwi r3, r3, 31
    add. r21, r4, r0
    neg r5, r3
    beq lbl_fn_800A6198_0000125C
    stw r22, 0x0(r21)
    stb r23, 0x4(r21)
    stw r23, 0x8(r21)
    stw r23, 0xc(r21)
lbl_fn_800A6198_0000125C:
    lwz r3, lbl_8087EF78
    cmpwi r5, 0x0
    addi r0, r3, 0x10
    stw r0, lbl_8087EF78
    bne lbl_fn_800A6198_00001274
    stb r24, 0x4(r21)
lbl_fn_800A6198_00001274:
    lbz r0, 0x0(r20)
    cmpwi r0, 0x28
    bne lbl_fn_800A6198_000017A4
    addi r3, r1, 0x8
    addi r4, r20, 0x1
    li r6, 0x1
    b lbl_fn_800A6198_000012CC
lbl_fn_800A6198_00001290:
    extsb r0, r7
    cmpwi r0, 0x28
    bne lbl_fn_800A6198_000012A4
    addi r6, r6, 0x1
    b lbl_fn_800A6198_000012BC
lbl_fn_800A6198_000012A4:
    cmpwi r0, 0x29
    bne lbl_fn_800A6198_000012BC
    subic. r6, r6, 0x1
    bne lbl_fn_800A6198_000012BC
    addi r20, r4, 0x1
    b lbl_fn_800A6198_000012DC
lbl_fn_800A6198_000012BC:
    lbz r0, 0x0(r4)
    addi r4, r4, 0x1
    stb r0, 0x0(r3)
    addi r3, r3, 0x1
lbl_fn_800A6198_000012CC:
    lbz r7, 0x0(r4)
    extsb. r0, r7
    bne lbl_fn_800A6198_00001290
    li r20, 0x0
lbl_fn_800A6198_000012DC:
    mr r3, r16
    addi r4, r1, 0x8
    bl fn_800A6198
    stw r3, 0x8(r21)
    mr r3, r16
    addi r4, r26, 0x1b
    lwz r12, 0x0(r16)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    cmpwi r18, 0x0
    stw r3, 0xc(r21)
    beq lbl_fn_800A6198_00001324
    lwz r0, 0xc(r18)
    cmpwi r0, 0x0
    bne lbl_fn_800A6198_00001324
    stw r21, 0xc(r18)
    b lbl_fn_800A6198_000017A4
lbl_fn_800A6198_00001324:
    cmpwi r19, 0x0
    bne lbl_fn_800A6198_000017A4
    mr r19, r21
    b lbl_fn_800A6198_000017A4
lbl_fn_800A6198_00001334:
    mr r3, r20
    addi r4, r26, 0x4
    li r5, 0x3
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_800A6198_00001354
    li r0, 0x1
    b lbl_fn_800A6198_000013AC
lbl_fn_800A6198_00001354:
    mr r3, r20
    addi r4, r26, 0x8
    li r5, 0x3
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_800A6198_00001374
    li r0, 0x1
    b lbl_fn_800A6198_000013AC
lbl_fn_800A6198_00001374:
    mr r3, r20
    addi r4, r26, 0xc
    li r5, 0x3
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_800A6198_00001394
    li r0, 0x1
    b lbl_fn_800A6198_000013AC
lbl_fn_800A6198_00001394:
    mr r3, r20
    addi r4, r26, 0x10
    li r5, 0x3
    bl fn_80682544
    cntlzw r0, r3
    srwi r0, r0, 5
lbl_fn_800A6198_000013AC:
    cmpwi r0, 0x0
    beq lbl_fn_800A6198_000014E4
    mr r4, r20
    addi r3, r1, 0x8
    bl fn_800A5B40
    mr r20, r3
    addi r3, r1, 0x8
    addi r4, r26, 0x4
    li r5, 0x3
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_800A6198_000013E4
    li r5, 0x0
    b lbl_fn_800A6198_00001444
lbl_fn_800A6198_000013E4:
    addi r3, r1, 0x8
    addi r4, r26, 0x8
    li r5, 0x3
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_800A6198_00001404
    li r5, 0x1
    b lbl_fn_800A6198_00001444
lbl_fn_800A6198_00001404:
    addi r3, r1, 0x8
    addi r4, r26, 0xc
    li r5, 0x3
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_800A6198_00001424
    li r5, 0x2
    b lbl_fn_800A6198_00001444
lbl_fn_800A6198_00001424:
    addi r3, r1, 0x8
    addi r4, r26, 0x10
    li r5, 0x3
    bl fn_80682544
    cmpwi r3, 0x0
    li r5, 0x3
    beq lbl_fn_800A6198_00001444
    li r5, -0x1
lbl_fn_800A6198_00001444:
    lbz r0, 0x0(r20)
    cmpwi r0, 0x28
    bne lbl_fn_800A6198_000017A4
    addi r3, r1, 0x8
    addi r4, r20, 0x1
    li r6, 0x1
    b lbl_fn_800A6198_0000149C
lbl_fn_800A6198_00001460:
    extsb r0, r7
    cmpwi r0, 0x28
    bne lbl_fn_800A6198_00001474
    addi r6, r6, 0x1
    b lbl_fn_800A6198_0000148C
lbl_fn_800A6198_00001474:
    cmpwi r0, 0x29
    bne lbl_fn_800A6198_0000148C
    subic. r6, r6, 0x1
    bne lbl_fn_800A6198_0000148C
    addi r20, r4, 0x1
    b lbl_fn_800A6198_000014AC
lbl_fn_800A6198_0000148C:
    lbz r0, 0x0(r4)
    addi r4, r4, 0x1
    stb r0, 0x0(r3)
    addi r3, r3, 0x1
lbl_fn_800A6198_0000149C:
    lbz r7, 0x0(r4)
    extsb. r0, r7
    bne lbl_fn_800A6198_00001460
    li r20, 0x0
lbl_fn_800A6198_000014AC:
    mr r3, r16
    addi r4, r1, 0x8
    bl fn_800A6198
    cmpwi r18, 0x0
    beq lbl_fn_800A6198_000014D4
    lwz r0, 0xc(r18)
    cmpwi r0, 0x0
    bne lbl_fn_800A6198_000014D4
    stw r3, 0xc(r18)
    b lbl_fn_800A6198_000017A4
lbl_fn_800A6198_000014D4:
    cmpwi r19, 0x0
    bne lbl_fn_800A6198_000017A4
    mr r19, r3
    b lbl_fn_800A6198_000017A4
lbl_fn_800A6198_000014E4:
    lbz r4, 0x0(r20)
    li r0, 0x0
    extsb r3, r4
    cmpwi r3, 0x41
    blt lbl_fn_800A6198_00001500
    cmpwi r3, 0x7a
    ble lbl_fn_800A6198_00001520
lbl_fn_800A6198_00001500:
    cmpwi r3, 0x30
    blt lbl_fn_800A6198_00001510
    cmpwi r3, 0x39
    ble lbl_fn_800A6198_00001520
lbl_fn_800A6198_00001510:
    cmpwi r3, 0x2e
    beq lbl_fn_800A6198_00001520
    cmpwi r3, 0x5f
    bne lbl_fn_800A6198_00001524
lbl_fn_800A6198_00001520:
    li r0, 0x1
lbl_fn_800A6198_00001524:
    cmpwi r0, 0x0
    beq lbl_fn_800A6198_00001580
    mr r4, r20
    addi r3, r1, 0x8
    bl fn_800A5B40
    lwz r12, 0x0(r16)
    mr r20, r3
    mr r3, r16
    addi r4, r1, 0x8
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    cmpwi r18, 0x0
    beq lbl_fn_800A6198_00001570
    lwz r0, 0xc(r18)
    cmpwi r0, 0x0
    bne lbl_fn_800A6198_00001570
    stw r3, 0xc(r18)
    b lbl_fn_800A6198_000017A4
lbl_fn_800A6198_00001570:
    cmpwi r19, 0x0
    bne lbl_fn_800A6198_000017A4
    mr r19, r3
    b lbl_fn_800A6198_000017A4
lbl_fn_800A6198_00001580:
    extsb r0, r4
    cmpwi r0, 0x28
    bne lbl_fn_800A6198_00001624
    addi r3, r1, 0x8
    addi r4, r20, 0x1
    li r5, 0x1
    b lbl_fn_800A6198_000015D8
lbl_fn_800A6198_0000159C:
    extsb r0, r6
    cmpwi r0, 0x28
    bne lbl_fn_800A6198_000015B0
    addi r5, r5, 0x1
    b lbl_fn_800A6198_000015C8
lbl_fn_800A6198_000015B0:
    cmpwi r0, 0x29
    bne lbl_fn_800A6198_000015C8
    subic. r5, r5, 0x1
    bne lbl_fn_800A6198_000015C8
    addi r20, r4, 0x1
    b lbl_fn_800A6198_000015E8
lbl_fn_800A6198_000015C8:
    lbz r0, 0x0(r4)
    addi r4, r4, 0x1
    stb r0, 0x0(r3)
    addi r3, r3, 0x1
lbl_fn_800A6198_000015D8:
    lbz r6, 0x0(r4)
    extsb. r0, r6
    bne lbl_fn_800A6198_0000159C
    li r20, 0x0
lbl_fn_800A6198_000015E8:
    mr r3, r16
    addi r4, r1, 0x8
    li r5, -0x1
    bl fn_800A6198
    cmpwi r18, 0x0
    beq lbl_fn_800A6198_00001614
    lwz r0, 0xc(r18)
    cmpwi r0, 0x0
    bne lbl_fn_800A6198_00001614
    stw r3, 0xc(r18)
    b lbl_fn_800A6198_000017A4
lbl_fn_800A6198_00001614:
    cmpwi r19, 0x0
    bne lbl_fn_800A6198_000017A4
    mr r19, r3
    b lbl_fn_800A6198_000017A4
lbl_fn_800A6198_00001624:
    cmpwi r0, 0x2c
    bne lbl_fn_800A6198_000016BC
    cmpwi r17, 0x0
    blt lbl_fn_800A6198_000016BC
    mr r4, r20
    addi r3, r1, 0x8
    bl fn_800A5B40
    lwz r4, 0x8(r16)
    mr r20, r3
    lwz r0, lbl_8087EF78
    add. r18, r4, r0
    beq lbl_fn_800A6198_00001664
    stw r22, 0x0(r18)
    stb r23, 0x4(r18)
    stw r23, 0x8(r18)
    stw r23, 0xc(r18)
lbl_fn_800A6198_00001664:
    lwz r3, lbl_8087EF78
    cmpwi r17, 0x0
    addi r0, r3, 0x10
    stw r0, lbl_8087EF78
    beq lbl_fn_800A6198_00001694
    cmpwi r17, 0x1
    beq lbl_fn_800A6198_0000169C
    cmpwi r17, 0x2
    beq lbl_fn_800A6198_000016A4
    cmpwi r17, 0x3
    beq lbl_fn_800A6198_000016AC
    b lbl_fn_800A6198_000016B0
lbl_fn_800A6198_00001694:
    stb r27, 0x4(r18)
    b lbl_fn_800A6198_000016B0
lbl_fn_800A6198_0000169C:
    stb r28, 0x4(r18)
    b lbl_fn_800A6198_000016B0
lbl_fn_800A6198_000016A4:
    stb r29, 0x4(r18)
    b lbl_fn_800A6198_000016B0
lbl_fn_800A6198_000016AC:
    stb r30, 0x4(r18)
lbl_fn_800A6198_000016B0:
    stw r19, 0x8(r18)
    mr r19, r18
    b lbl_fn_800A6198_000017A4
lbl_fn_800A6198_000016BC:
    addi r4, r4, 0xdb
    li r3, 0x0
    clrlwi r0, r4, 24
    cmplwi r0, 0xa
    bgt lbl_fn_800A6198_000016E0
    slw r0, r31, r4
    andi. r0, r0, 0x561
    beq lbl_fn_800A6198_000016E0
    li r3, 0x1
lbl_fn_800A6198_000016E0:
    cmpwi r3, 0x0
    beq lbl_fn_800A6198_000017A0
    lwz r3, 0x8(r16)
    lwz r0, lbl_8087EF78
    add. r4, r3, r0
    beq lbl_fn_800A6198_00001708
    stw r22, 0x0(r4)
    stb r23, 0x4(r4)
    stw r23, 0x8(r4)
    stw r23, 0xc(r4)
lbl_fn_800A6198_00001708:
    lwz r3, lbl_8087EF78
    cmpwi r18, 0x0
    addi r0, r3, 0x10
    stw r0, lbl_8087EF78
    lbz r0, 0x0(r20)
    addi r20, r20, 0x1
    stb r0, 0x4(r4)
    bne lbl_fn_800A6198_00001738
    stw r19, 0x8(r4)
    mr r19, r4
    mr r18, r4
    b lbl_fn_800A6198_000017A4
lbl_fn_800A6198_00001738:
    lbz r0, 0x4(r4)
    extsb r0, r0
    cmpwi r0, 0x2a
    beq lbl_fn_800A6198_00001750
    cmpwi r0, 0x2f
    bne lbl_fn_800A6198_00001790
lbl_fn_800A6198_00001750:
    lbz r0, 0x4(r18)
    extsb r0, r0
    cmpwi r0, 0x2a
    beq lbl_fn_800A6198_00001768
    cmpwi r0, 0x2f
    bne lbl_fn_800A6198_0000177C
lbl_fn_800A6198_00001768:
    lwz r0, 0x8(r18)
    stw r0, 0x8(r4)
    stw r4, 0x8(r18)
    mr r18, r4
    b lbl_fn_800A6198_000017A4
lbl_fn_800A6198_0000177C:
    lwz r0, 0xc(r18)
    stw r0, 0x8(r4)
    stw r4, 0xc(r18)
    mr r18, r4
    b lbl_fn_800A6198_000017A4
lbl_fn_800A6198_00001790:
    stw r19, 0x8(r4)
    mr r19, r4
    mr r18, r4
    b lbl_fn_800A6198_000017A4
lbl_fn_800A6198_000017A0:
    addi r20, r20, 0x1
lbl_fn_800A6198_000017A4:
    lbz r0, 0x0(r20)
    extsb. r0, r0
    bne lbl_fn_800A6198_000011E0
    mr r3, r19
    lmw r16, 0x50(r1)
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_800A67D4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lwz r0, lbl_8087EF7C
    cmpwi r0, 0x0
    beq lbl_fn_800A67D4_0000180C
    addic. r31, r3, 0xc
    beq lbl_fn_800A67D4_00001800
    lfs f0, lbl_80880CC0
    lis r3, lbl_80778B88@ha
    addi r3, r3, lbl_80778B88@l
    stw r3, 0x0(r31)
    stfs f0, 0x4(r31)
lbl_fn_800A67D4_00001800:
    li r0, 0x0
    stw r0, lbl_8087EF7C
    b lbl_fn_800A67D4_0000183C
lbl_fn_800A67D4_0000180C:
    lwz r3, 0x8(r3)
    lwz r0, lbl_8087EF78
    add. r31, r3, r0
    beq lbl_fn_800A67D4_00001830
    lis r3, lbl_80778B88@ha
    lfs f0, lbl_80880CC0
    addi r3, r3, lbl_80778B88@l
    stw r3, 0x0(r31)
    stfs f0, 0x4(r31)
lbl_fn_800A67D4_00001830:
    lwz r3, lbl_8087EF78
    addi r0, r3, 0x8
    stw r0, lbl_8087EF78
lbl_fn_800A67D4_0000183C:
    mr r3, r4
    bl fn_800DC288
    stfs f1, 0x4(r31)
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800A686C(void)
{
    nofralloc
    lwz r0, lbl_8087EF7C
    cmpwi r0, 0x0
    beq lbl_fn_800A686C_00001894
    addic. r3, r3, 0xc
    beq lbl_fn_800A686C_00001888
    lfs f0, lbl_80880CC0
    lis r4, lbl_80778B88@ha
    addi r4, r4, lbl_80778B88@l
    stw r4, 0x0(r3)
    stfs f0, 0x4(r3)
lbl_fn_800A686C_00001888:
    li r0, 0x0
    stw r0, lbl_8087EF7C
    blr
lbl_fn_800A686C_00001894:
    lwz r3, 0x8(r3)
    lwz r0, lbl_8087EF78
    add. r3, r3, r0
    beq lbl_fn_800A686C_000018B8
    lis r4, lbl_80778B88@ha
    lfs f0, lbl_80880CC0
    addi r4, r4, lbl_80778B88@l
    stw r4, 0x0(r3)
    stfs f0, 0x4(r3)
lbl_fn_800A686C_000018B8:
    lwz r4, lbl_8087EF78
    addi r0, r4, 0x8
    stw r0, lbl_8087EF78
    blr
}

asm void fn_800A68D4(void)
{
    nofralloc
    lwz r0, lbl_8087EF7C
    cmpwi r0, 0x0
    beq lbl_fn_800A68D4_000018FC
    addic. r3, r3, 0xc
    beq lbl_fn_800A68D4_000018F0
    lis r4, lbl_80778B60@ha
    li r0, 0x0
    addi r4, r4, lbl_80778B60@l
    stw r4, 0x0(r3)
    stw r0, 0x4(r3)
lbl_fn_800A68D4_000018F0:
    li r0, 0x0
    stw r0, lbl_8087EF7C
    blr
lbl_fn_800A68D4_000018FC:
    lwz r3, 0x8(r3)
    lwz r0, lbl_8087EF78
    add. r3, r3, r0
    beq lbl_fn_800A68D4_00001920
    lis r4, lbl_80778B60@ha
    li r0, 0x0
    addi r4, r4, lbl_80778B60@l
    stw r4, 0x0(r3)
    stw r0, 0x4(r3)
lbl_fn_800A68D4_00001920:
    lwz r4, lbl_8087EF78
    addi r0, r4, 0x8
    stw r0, lbl_8087EF78
    blr
}

asm void fn_800A693C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    mr r29, r4
    beq lbl_fn_800A693C_00001BAC
    lwz r12, 0x0(r29)
    mr r3, r29
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x1
    bne lbl_fn_800A693C_000019AC
    lwz r3, 0x0(r31)
    li r0, 0x0
    addi r4, r29, 0x4
    li r5, 0x4
    stbx r0, r30, r3
    addi r0, r3, 0x1
    add r3, r30, r0
    stw r0, 0x0(r31)
    bl memcpy
    lwz r3, 0x0(r31)
    addi r0, r3, 0x4
    stw r0, 0x0(r31)
    b lbl_fn_800A693C_00001BAC
lbl_fn_800A693C_000019AC:
    cmpwi r3, 0x2
    bne lbl_fn_800A693C_000019F8
    lwz r3, 0x0(r31)
    li r0, 0x1
    stbx r0, r30, r3
    addi r3, r3, 0x1
    stw r3, 0x0(r31)
    lwz r4, 0x4(r29)
    addis r0, r4, 0x1
    cmplwi r0, 0xffff
    bne lbl_fn_800A693C_000019E4
    la r0, lbl_8087EF80
    stwx r0, r30, r3
    b lbl_fn_800A693C_000019E8
lbl_fn_800A693C_000019E4:
    stwx r4, r30, r3
lbl_fn_800A693C_000019E8:
    lwz r3, 0x0(r31)
    addi r0, r3, 0x4
    stw r0, 0x0(r31)
    b lbl_fn_800A693C_00001BAC
lbl_fn_800A693C_000019F8:
    cmpwi r3, 0x3
    bne lbl_fn_800A693C_00001BAC
    lwz r4, 0x8(r29)
    cmpwi r4, 0x0
    bne lbl_fn_800A693C_00001A48
    lwz r3, 0x0(r31)
    li r0, 0x0
    lfs f0, lbl_80880CC0
    addi r4, r1, 0x8
    stbx r0, r30, r3
    addi r0, r3, 0x1
    add r3, r30, r0
    li r5, 0x4
    stw r0, 0x0(r31)
    stfs f0, 0x8(r1)
    bl memcpy
    lwz r3, 0x0(r31)
    addi r0, r3, 0x4
    stw r0, 0x0(r31)
    b lbl_fn_800A693C_00001A54
lbl_fn_800A693C_00001A48:
    mr r3, r30
    mr r5, r31
    bl fn_800A693C
lbl_fn_800A693C_00001A54:
    lwz r4, 0xc(r29)
    mr r3, r30
    mr r5, r31
    bl fn_800A693C
    lbz r0, 0x4(r29)
    extsb r0, r0
    cmpwi r0, 0x69
    beq lbl_fn_800A693C_00001B98
    bge lbl_fn_800A693C_00001AA8
    cmpwi r0, 0x2d
    beq lbl_fn_800A693C_00001AF0
    bge lbl_fn_800A693C_00001A9C
    cmpwi r0, 0x2b
    beq lbl_fn_800A693C_00001AD8
    bge lbl_fn_800A693C_00001BAC
    cmpwi r0, 0x2a
    bge lbl_fn_800A693C_00001B08
    b lbl_fn_800A693C_00001BAC
lbl_fn_800A693C_00001A9C:
    cmpwi r0, 0x2f
    beq lbl_fn_800A693C_00001B20
    b lbl_fn_800A693C_00001BAC
lbl_fn_800A693C_00001AA8:
    cmpwi r0, 0x70
    beq lbl_fn_800A693C_00001B80
    bge lbl_fn_800A693C_00001ACC
    cmpwi r0, 0x6e
    beq lbl_fn_800A693C_00001B68
    bge lbl_fn_800A693C_00001BAC
    cmpwi r0, 0x6d
    bge lbl_fn_800A693C_00001B38
    b lbl_fn_800A693C_00001BAC
lbl_fn_800A693C_00001ACC:
    cmpwi r0, 0x78
    beq lbl_fn_800A693C_00001B50
    b lbl_fn_800A693C_00001BAC
lbl_fn_800A693C_00001AD8:
    lwz r3, 0x0(r31)
    li r0, 0x2
    stbx r0, r30, r3
    addi r0, r3, 0x1
    stw r0, 0x0(r31)
    b lbl_fn_800A693C_00001BAC
lbl_fn_800A693C_00001AF0:
    lwz r3, 0x0(r31)
    li r0, 0x3
    stbx r0, r30, r3
    addi r0, r3, 0x1
    stw r0, 0x0(r31)
    b lbl_fn_800A693C_00001BAC
lbl_fn_800A693C_00001B08:
    lwz r3, 0x0(r31)
    li r0, 0x4
    stbx r0, r30, r3
    addi r0, r3, 0x1
    stw r0, 0x0(r31)
    b lbl_fn_800A693C_00001BAC
lbl_fn_800A693C_00001B20:
    lwz r3, 0x0(r31)
    li r0, 0x5
    stbx r0, r30, r3
    addi r0, r3, 0x1
    stw r0, 0x0(r31)
    b lbl_fn_800A693C_00001BAC
lbl_fn_800A693C_00001B38:
    lwz r3, 0x0(r31)
    li r0, 0x9
    stbx r0, r30, r3
    addi r0, r3, 0x1
    stw r0, 0x0(r31)
    b lbl_fn_800A693C_00001BAC
lbl_fn_800A693C_00001B50:
    lwz r3, 0x0(r31)
    li r0, 0x6
    stbx r0, r30, r3
    addi r0, r3, 0x1
    stw r0, 0x0(r31)
    b lbl_fn_800A693C_00001BAC
lbl_fn_800A693C_00001B68:
    lwz r3, 0x0(r31)
    li r0, 0x7
    stbx r0, r30, r3
    addi r0, r3, 0x1
    stw r0, 0x0(r31)
    b lbl_fn_800A693C_00001BAC
lbl_fn_800A693C_00001B80:
    lwz r3, 0x0(r31)
    li r0, 0x8
    stbx r0, r30, r3
    addi r0, r3, 0x1
    stw r0, 0x0(r31)
    b lbl_fn_800A693C_00001BAC
lbl_fn_800A693C_00001B98:
    lwz r3, 0x0(r31)
    li r0, 0x10
    stbx r0, r30, r3
    addi r0, r3, 0x1
    stw r0, 0x0(r31)
lbl_fn_800A693C_00001BAC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
