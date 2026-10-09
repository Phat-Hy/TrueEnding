#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void dtor_80084684(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_80041C0C(void);
extern void fn_8004B338(void);
extern void fn_8005B9CC(void);
extern void fn_8005BBF8(void);
extern void fn_8005BCE8(void);
extern void fn_80069BF4(void);
extern void fn_8006A950(void);
extern void fn_8006B404(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_80097A9C(void);
extern void fn_800A03A0(void);
extern void fn_800A03E4(void);
extern void fn_800A0448(void);
extern void fn_800A091C(void);
extern void fn_800DC500(void);
extern void fn_800DC6B4(void);
extern void fn_800EF73C(void);
extern void fn_802375C4(void);
extern void fn_8046C3FC(void);
extern void fn_8046D1EC(void);
extern void fn_8046F5CC(void);
extern void fn_8046F834(void);
extern void fn_80470364(void);
extern void fn_80470528(void);
extern void fn_804714A4(void);
extern void fn_804714B0(void);
extern void fn_80472FAC(void);
extern void fn_8047304C(void);
extern void fn_804730D4(void);
extern void fn_80473104(void);
extern void fn_80473130(void);
extern void fn_80473E8C(void);
extern void fn_80473F88(void);
extern void fn_80680770(void);
extern void fn_806823B0(void);
extern void fn_80682428(void);
extern void fn_806825B4(void);
extern void fn_806827C4(void);
extern void fn_80686EA4(void);
extern void fn_80695720(void);
extern void fn_80695A50(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_80755F30[];
extern u8 lbl_80755F68[];
extern u8 lbl_80756000[];
extern u8 lbl_80756030[];
extern u8 lbl_807774B8[];
extern u8 lbl_807774D8[];
extern u8 lbl_80779810[];
extern u8 lbl_8078FDD8[];
extern u8 lbl_8078FE28[];
extern u8 lbl_8078FE78[];
extern u8 lbl_8078FEC8[];
extern u8 lbl_8078FF18[];

/* Small data declarations */
extern u32 lbl_8087D710;
extern u32 lbl_8087E060;
extern u32 lbl_8087E064;
extern u32 lbl_8087EEE0;
extern u32 lbl_8087F518;

/* Function declarations */
void fn_80475DF8(void);
void fn_80475E14(void);
void fn_80475F20(void);
void fn_80476130(void);
void fn_8047614C(void);
void fn_80476170(void);
void fn_80476194(void);
void fn_804761B0(void);
void fn_804761CC(void);
void fn_804761E8(void);
void fn_80476204(void);
void fn_80476220(void);
void fn_8047656C(void);
void fn_804765C4(void);
void fn_80476664(void);
void fn_804766B0(void);
void fn_80476884(void);
void fn_804768B4(void);
void fn_804768D0(void);
void fn_804768EC(void);
void fn_804769D8(void);
void fn_80476A74(void);
void fn_80476AC8(void);
void fn_80476CE4(void);
void fn_80476D00(void);
void fn_80476D64(void);
void fn_80476DF8(void);
void fn_80476ED4(void);
void fn_80477414(void);
void fn_80477448(void);
void fn_8047749C(void);
void fn_80477694(void);
void fn_804776F4(void);
void fn_80477778(void);

asm void fn_80475DF8(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80475DF8_00000014
    lwz r3, 0x5c(r3)
    blr
lbl_fn_80475DF8_00000014:
    li r3, 0x0
    blr
}

asm void fn_80475E14(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    stw r31, 0x11c(r1)
    lis r31, lbl_80755F30@ha
    stw r30, 0x118(r1)
    stw r29, 0x114(r1)
    mr r29, r4
    addi r4, r31, lbl_80755F30@l
    stw r28, 0x110(r1)
    mr r28, r3
    mr r3, r29
    bl fn_806827C4
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_80475E14_00000098
    mr r3, r29
    bl strlen
    mr r30, r3
    mr r4, r29
    mr r5, r30
    addi r3, r1, 0x8
    bl memcpy
    addi r29, r1, 0x8
    addi r4, r31, lbl_80755F30@l
    li r0, 0x0
    stbx r0, r29, r30
    mr r3, r29
    addi r4, r4, 0x2
    bl fn_806823B0
    b lbl_fn_80475E14_000000EC
lbl_fn_80475E14_00000098:
    addi r31, r31, lbl_80755F30@l
    addi r4, r31, 0x2
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_80475E14_000000EC
    mr r3, r30
    addi r4, r31, 0x9
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_80475E14_000000EC
    subf r30, r29, r30
    mr r4, r29
    mr r5, r30
    addi r3, r1, 0x8
    bl memcpy
    addi r29, r1, 0x8
    li r0, 0x0
    stbx r0, r29, r30
    mr r3, r29
    addi r4, r31, 0x2
    bl fn_806823B0
lbl_fn_80475E14_000000EC:
    mr r3, r28
    bl fn_80473F88
    lwz r3, lbl_8087F518
    mr r4, r29
    li r5, 0x1
    bl fn_80475F20
    stw r3, 0x4(r28)
    lwz r31, 0x11c(r1)
    lwz r30, 0x118(r1)
    lwz r29, 0x114(r1)
    lwz r28, 0x110(r1)
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_80475F20(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    stw r31, 0x11c(r1)
    mr r31, r3
    addi r3, r1, 0x10
    stw r30, 0x118(r1)
    stw r29, 0x114(r1)
    stw r28, 0x110(r1)
    mr r28, r5
    bl fn_8046D1EC
    addi r3, r1, 0x10
    bl fn_8006A950
    addi r3, r1, 0x10
    bl fn_8006B404
    addi r3, r1, 0x10
    bl fn_800DC6B4
    cmpwi r28, 0x0
    mr r5, r3
    li r30, 0x0
    beq lbl_fn_80475F20_000001D4
    lwz r4, 0x3ed4(r31)
    addi r0, r31, 0x3ed0
    b lbl_fn_80475F20_0000018C
lbl_fn_80475F20_00000188:
    lwz r4, 0x4(r4)
lbl_fn_80475F20_0000018C:
    cmplw r4, r0
    beq lbl_fn_80475F20_000001A4
    lwz r6, 0x8(r4)
    lwz r6, 0x48(r6)
    cmplw r3, r6
    bne lbl_fn_80475F20_00000188
lbl_fn_80475F20_000001A4:
    addi r0, r31, 0x3ed0
    cmplw r4, r0
    beq lbl_fn_80475F20_000001C4
    lwz r30, 0x8(r4)
    lbz r0, 0x5(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80475F20_000001C4
    b lbl_fn_80475F20_000001D4
lbl_fn_80475F20_000001C4:
    mr r3, r31
    addi r4, r31, 0x48
    bl fn_8046F834
    mr r30, r3
lbl_fn_80475F20_000001D4:
    cmpwi r30, 0x0
    bne lbl_fn_80475F20_0000030C
    lis r5, lbl_80755F30@ha
    li r3, 0x8c
    addi r5, r5, lbl_80755F30@l
    li r4, 0x2
    addi r5, r5, 0x11
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_80475F20_00000250
    addi r4, r1, 0x10
    bl fn_80472FAC
    lis r3, lbl_8078FDD8@ha
    li r0, 0x0
    addi r3, r3, lbl_8078FDD8@l
    stw r3, 0x0(r30)
    stw r0, 0x5c(r30)
    stw r0, 0x60(r30)
    stw r0, 0x64(r30)
    stw r0, 0x68(r30)
    stw r0, 0x6c(r30)
    stw r0, 0x70(r30)
    stw r0, 0x74(r30)
    stw r0, 0x78(r30)
    stw r0, 0x7c(r30)
    stw r0, 0x80(r30)
    stw r0, 0x84(r30)
    stw r0, 0x88(r30)
lbl_fn_80475F20_00000250:
    mr r3, r31
    mr r4, r30
    bl fn_8046C3FC
    cmpwi r3, 0x0
    beq lbl_fn_80475F20_000002F0
    addi r28, r31, 0x3ed0
    li r3, 0xc
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_fn_80475F20_0000029C
    lis r3, __files@ha
    lis r4, lbl_80779810@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80779810@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80475F20_0000029C:
    addic. r3, r29, 0x8
    addi r0, r31, 0x3ed0
    stw r0, 0x8(r1)
    stw r29, 0xc(r1)
    beq lbl_fn_80475F20_000002B4
    stw r30, 0x0(r3)
lbl_fn_80475F20_000002B4:
    lwz r3, 0x0(r28)
    li r4, 0x0
    lwz r5, 0xc(r1)
    stw r5, 0x4(r3)
    lwz r0, 0x0(r28)
    stw r0, 0x0(r5)
    stw r5, 0x0(r28)
    stw r28, 0x4(r5)
    lwz r3, 0x3ecc(r31)
    stw r4, 0xc(r1)
    addi r0, r3, 0x1
    stw r0, 0x3ecc(r31)
    b lbl_fn_80475F20_00000314
    bl dtor_80084684
    b lbl_fn_80475F20_00000314
lbl_fn_80475F20_000002F0:
    mr r3, r30
    li r4, 0x4
    bl fn_80473104
    mr r3, r31
    mr r4, r30
    bl fn_8046F5CC
    b lbl_fn_80475F20_00000314
lbl_fn_80475F20_0000030C:
    mr r3, r30
    bl fn_804730D4
lbl_fn_80475F20_00000314:
    mr r3, r30
    lwz r31, 0x11c(r1)
    lwz r30, 0x118(r1)
    lwz r29, 0x114(r1)
    lwz r28, 0x110(r1)
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_80476130(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80476130_0000034C
    lwz r3, 0x6c(r3)
    blr
lbl_fn_80476130_0000034C:
    li r3, 0x0
    blr
}

asm void fn_8047614C(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8047614C_00000370
    mulli r0, r4, 0x144
    lwz r3, 0x88(r3)
    add r3, r3, r0
    blr
lbl_fn_8047614C_00000370:
    li r3, 0x0
    blr
}

asm void fn_80476170(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    slwi r0, r4, 2
    lwz r4, lbl_8087EEE0
    lwz r3, 0x80(r3)
    lwzx r0, r3, r0
    slwi r0, r0, 3
    add r3, r4, r0
    lwz r3, 0xe0(r3)
    blr
}

asm void fn_80476194(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80476194_000003B0
    lwz r3, 0x60(r3)
    blr
lbl_fn_80476194_000003B0:
    li r3, 0x0
    blr
}

asm void fn_804761B0(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_804761B0_000003CC
    lwz r3, 0x64(r3)
    blr
lbl_fn_804761B0_000003CC:
    li r3, 0x0
    blr
}

asm void fn_804761CC(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_804761CC_000003E8
    lwz r3, 0x74(r3)
    blr
lbl_fn_804761CC_000003E8:
    li r3, 0x0
    blr
}

asm void fn_804761E8(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_804761E8_00000404
    lwz r3, 0x70(r3)
    blr
lbl_fn_804761E8_00000404:
    li r3, 0x0
    blr
}

asm void fn_80476204(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80476204_00000420
    lwz r3, 0x78(r3)
    blr
lbl_fn_80476204_00000420:
    li r3, 0x0
    blr
}

asm void fn_80476220(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    mr r31, r4
    stw r30, 0x48(r1)
    mr r30, r3
    stw r29, 0x44(r1)
    stw r28, 0x40(r1)
    bl fn_80472FAC
    lis r3, lbl_8078FE28@ha
    li r0, 0x0
    addi r3, r3, lbl_8078FE28@l
    stw r3, 0x0(r30)
    mr r3, r31
    addi r29, r1, 0x2c
    stw r0, 0x5c(r30)
    stw r0, 0x60(r30)
    stw r0, 0x2c(r1)
    stw r0, 0x30(r1)
    stw r0, 0x34(r1)
    bl strlen
    mr r28, r3
    mr r3, r29
    mr r4, r28
    bl fn_80013DC4
    lbz r0, 0x1c(r1)
    mr r3, r29
    stb r0, 0x18(r1)
    mr r6, r31
    add r7, r31, r28
    addi r8, r1, 0x18
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    lwz r0, 0x2c(r1)
    li r4, -0x1
    srwi. r0, r0, 31
    bne lbl_fn_80476220_000004D4
    lbz r0, 0x2c(r1)
    addi r5, r1, 0x2d
    clrlwi r3, r0, 25
    b lbl_fn_80476220_000004DC
lbl_fn_80476220_000004D4:
    lwz r5, 0x34(r1)
    lwz r3, 0x30(r1)
lbl_fn_80476220_000004DC:
    cmpwi r3, 0x0
    beq lbl_fn_80476220_00000520
    subi r3, r3, 0x1
    li r0, -0x1
    cmplw r3, r0
    bge lbl_fn_80476220_000004F8
    mr r4, r3
lbl_fn_80476220_000004F8:
    add r3, r5, r4
lbl_fn_80476220_000004FC:
    lbz r0, 0x0(r3)
    cmpwi r0, 0x2f
    bne lbl_fn_80476220_00000510
    subf r5, r5, r3
    b lbl_fn_80476220_00000524
lbl_fn_80476220_00000510:
    cmplw r3, r5
    ble lbl_fn_80476220_00000520
    subi r3, r3, 0x1
    b lbl_fn_80476220_000004FC
lbl_fn_80476220_00000520:
    li r5, -0x1
lbl_fn_80476220_00000524:
    addis r0, r5, 0x1
    cmplwi r0, 0xffff
    beq lbl_fn_80476220_000005E0
    addi r3, r1, 0x20
    addi r4, r1, 0x2c
    addi r5, r5, 0x1
    li r6, -0x1
    bl fn_80069BF4
    lwz r0, 0x2c(r1)
    srwi. r3, r0, 31
    bne lbl_fn_80476220_00000574
    lwz r4, 0x20(r1)
    srwi. r0, r4, 31
    bne lbl_fn_80476220_00000574
    lwz r3, 0x24(r1)
    lwz r0, 0x28(r1)
    stw r4, 0x2c(r1)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_80476220_000005CC
lbl_fn_80476220_00000574:
    cmpwi r3, 0x0
    beq lbl_fn_80476220_00000584
    lwz r5, 0x30(r1)
    b lbl_fn_80476220_0000058C
lbl_fn_80476220_00000584:
    lbz r0, 0x2c(r1)
    clrlwi r5, r0, 25
lbl_fn_80476220_0000058C:
    lwz r0, 0x20(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80476220_000005A8
    lbz r0, 0x20(r1)
    addi r6, r1, 0x21
    clrlwi r4, r0, 25
    b lbl_fn_80476220_000005B0
lbl_fn_80476220_000005A8:
    lwz r6, 0x28(r1)
    lwz r4, 0x24(r1)
lbl_fn_80476220_000005B0:
    lbz r0, 0x14(r1)
    add r7, r6, r4
    stb r0, 0x10(r1)
    addi r3, r1, 0x2c
    addi r8, r1, 0x10
    li r4, 0x0
    bl fn_80013F78
lbl_fn_80476220_000005CC:
    lwz r0, 0x20(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80476220_000005E0
    lwz r3, 0x28(r1)
    bl dtor_80084684
lbl_fn_80476220_000005E0:
    lwz r0, 0x2c(r1)
    li r4, -0x1
    srwi. r0, r0, 31
    bne lbl_fn_80476220_00000600
    lbz r0, 0x2c(r1)
    addi r5, r1, 0x2d
    clrlwi r3, r0, 25
    b lbl_fn_80476220_00000608
lbl_fn_80476220_00000600:
    lwz r5, 0x34(r1)
    lwz r3, 0x30(r1)
lbl_fn_80476220_00000608:
    cmpwi r3, 0x0
    beq lbl_fn_80476220_0000064C
    subi r3, r3, 0x1
    li r0, -0x1
    cmplw r3, r0
    bge lbl_fn_80476220_00000624
    mr r4, r3
lbl_fn_80476220_00000624:
    add r3, r5, r4
lbl_fn_80476220_00000628:
    lbz r0, 0x0(r3)
    cmpwi r0, 0x2e
    bne lbl_fn_80476220_0000063C
    subf r4, r5, r3
    b lbl_fn_80476220_00000650
lbl_fn_80476220_0000063C:
    cmplw r3, r5
    ble lbl_fn_80476220_0000064C
    subi r3, r3, 0x1
    b lbl_fn_80476220_00000628
lbl_fn_80476220_0000064C:
    li r4, -0x1
lbl_fn_80476220_00000650:
    addis r0, r4, 0x1
    cmplwi r0, 0xffff
    beq lbl_fn_80476220_0000067C
    lbz r0, 0x8(r1)
    addi r3, r1, 0x2c
    stb r0, 0xc(r1)
    addi r8, r1, 0xc
    li r5, -0x1
    li r6, 0x0
    li r7, 0x0
    bl fn_80013F78
lbl_fn_80476220_0000067C:
    lwz r0, 0x2c(r1)
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi. r3, r0, 5
    beq lbl_fn_80476220_0000069C
    lbz r0, 0x2c(r1)
    clrlwi r4, r0, 25
    b lbl_fn_80476220_000006A0
lbl_fn_80476220_0000069C:
    lwz r4, 0x30(r1)
lbl_fn_80476220_000006A0:
    cmpwi r3, 0x0
    beq lbl_fn_80476220_000006B0
    addi r3, r1, 0x2d
    b lbl_fn_80476220_000006B4
lbl_fn_80476220_000006B0:
    lwz r3, 0x34(r1)
lbl_fn_80476220_000006B4:
    bl fn_800DC500
    stw r3, 0x5c(r30)
    mr r3, r31
    li r4, 0x5c
    bl fn_806825B4
    cmpwi r3, 0x0
    bne lbl_fn_80476220_000006F0
    mr r3, r31
    li r4, 0x2f
    bl fn_806825B4
    cmpwi r3, 0x0
    bne lbl_fn_80476220_000006E8
    b lbl_fn_80476220_000006F4
lbl_fn_80476220_000006E8:
    addi r31, r3, 0x1
    b lbl_fn_80476220_000006F4
lbl_fn_80476220_000006F0:
    addi r31, r3, 0x1
lbl_fn_80476220_000006F4:
    mr r3, r31
    bl strlen
    cmplwi r3, 0x3
    ble lbl_fn_80476220_00000734
    lbz r0, 0x0(r31)
    cmpwi r0, 0x66
    bne lbl_fn_80476220_00000734
    lbz r0, 0x1(r31)
    cmpwi r0, 0x63
    bne lbl_fn_80476220_00000734
    lbz r0, 0x2(r31)
    cmpwi r0, 0x5f
    bne lbl_fn_80476220_00000734
    li r0, 0x4
    stw r0, 0x60(r30)
    b lbl_fn_80476220_0000073C
lbl_fn_80476220_00000734:
    li r0, -0x1
    stw r0, 0x60(r30)
lbl_fn_80476220_0000073C:
    lwz r0, 0x2c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80476220_00000750
    lwz r3, 0x34(r1)
    bl dtor_80084684
lbl_fn_80476220_00000750:
    mr r3, r30
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    lwz r28, 0x40(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8047656C(void)
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
    beq lbl_fn_8047656C_000007B0
    li r4, 0x0
    bl fn_8047304C
    cmpwi r31, 0x0
    ble lbl_fn_8047656C_000007B0
    mr r3, r30
    bl dtor_80084684
lbl_fn_8047656C_000007B0:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804765C4(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    lbz r0, 0x4(r3)
    cmplwi r0, 0x2
    bne lbl_fn_804765C4_00000858
    li r4, 0x3
    bl fn_80473104
    addi r3, r1, 0x8
    bl fn_804714A4
    li r0, 0x0
    stw r0, 0xc(r1)
    addi r3, r1, 0x8
    addi r6, r1, 0xc
    lwz r4, 0x54(r31)
    li r7, 0x0
    lwz r5, 0x50(r31)
    bl fn_804714B0
    addic. r3, r1, 0xc
    beq lbl_fn_804765C4_00000858
    lwz r4, 0xc(r1)
    cmpwi r4, 0x0
    beq lbl_fn_804765C4_00000858
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_804765C4_00000850
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_804765C4_00000850:
    li r0, 0x0
    stw r0, 0xc(r1)
lbl_fn_804765C4_00000858:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80476664(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_80473F88
    lwz r3, lbl_8087F518
    mr r4, r31
    li r5, 0x1
    bl fn_804766B0
    stw r3, 0x4(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804766B0(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    stw r31, 0x11c(r1)
    mr r31, r3
    addi r3, r1, 0x10
    stw r30, 0x118(r1)
    stw r29, 0x114(r1)
    stw r28, 0x110(r1)
    mr r28, r5
    bl fn_8046D1EC
    addi r3, r1, 0x10
    bl fn_8006A950
    addi r3, r1, 0x10
    bl fn_8006B404
    addi r3, r1, 0x10
    bl fn_800DC6B4
    cmpwi r28, 0x0
    mr r5, r3
    li r29, 0x0
    beq lbl_fn_804766B0_00000964
    lwz r4, 0x3ed4(r31)
    addi r0, r31, 0x3ed0
    b lbl_fn_804766B0_0000091C
lbl_fn_804766B0_00000918:
    lwz r4, 0x4(r4)
lbl_fn_804766B0_0000091C:
    cmplw r4, r0
    beq lbl_fn_804766B0_00000934
    lwz r6, 0x8(r4)
    lwz r6, 0x48(r6)
    cmplw r3, r6
    bne lbl_fn_804766B0_00000918
lbl_fn_804766B0_00000934:
    addi r0, r31, 0x3ed0
    cmplw r4, r0
    beq lbl_fn_804766B0_00000954
    lwz r29, 0x8(r4)
    lbz r0, 0x5(r29)
    cmpwi r0, 0x0
    bne lbl_fn_804766B0_00000954
    b lbl_fn_804766B0_00000964
lbl_fn_804766B0_00000954:
    mr r3, r31
    addi r4, r31, 0x48
    bl fn_8046F834
    mr r29, r3
lbl_fn_804766B0_00000964:
    cmpwi r29, 0x0
    bne lbl_fn_804766B0_00000A60
    lis r5, lbl_80755F68@ha
    li r3, 0x64
    addi r5, r5, lbl_80755F68@l
    li r4, 0x2
    addi r5, r5, 0x1b
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    mr r29, r3
    beq lbl_fn_804766B0_000009A4
    addi r4, r1, 0x10
    bl fn_80476220
    mr r29, r3
lbl_fn_804766B0_000009A4:
    mr r3, r31
    mr r4, r29
    bl fn_8046C3FC
    cmpwi r3, 0x0
    beq lbl_fn_804766B0_00000A44
    addi r28, r31, 0x3ed0
    li r3, 0xc
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_804766B0_000009F0
    lis r3, __files@ha
    lis r4, lbl_80779810@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80779810@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_804766B0_000009F0:
    addic. r3, r30, 0x8
    addi r0, r31, 0x3ed0
    stw r0, 0x8(r1)
    stw r30, 0xc(r1)
    beq lbl_fn_804766B0_00000A08
    stw r29, 0x0(r3)
lbl_fn_804766B0_00000A08:
    lwz r3, 0x0(r28)
    li r4, 0x0
    lwz r5, 0xc(r1)
    stw r5, 0x4(r3)
    lwz r0, 0x0(r28)
    stw r0, 0x0(r5)
    stw r5, 0x0(r28)
    stw r28, 0x4(r5)
    lwz r3, 0x3ecc(r31)
    stw r4, 0xc(r1)
    addi r0, r3, 0x1
    stw r0, 0x3ecc(r31)
    b lbl_fn_804766B0_00000A68
    bl dtor_80084684
    b lbl_fn_804766B0_00000A68
lbl_fn_804766B0_00000A44:
    mr r3, r29
    li r4, 0x4
    bl fn_80473104
    mr r3, r31
    mr r4, r29
    bl fn_8046F5CC
    b lbl_fn_804766B0_00000A68
lbl_fn_804766B0_00000A60:
    mr r3, r29
    bl fn_804730D4
lbl_fn_804766B0_00000A68:
    lwz r31, 0x11c(r1)
    mr r3, r29
    lwz r30, 0x118(r1)
    lwz r29, 0x114(r1)
    lwz r28, 0x110(r1)
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_80476884(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80476884_00000AB4
    lwz r3, 0x54(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80476884_00000AAC
    addi r3, r3, 0x10
    blr
lbl_fn_80476884_00000AAC:
    li r3, 0x0
    blr
lbl_fn_80476884_00000AB4:
    li r3, 0x0
    blr
}

asm void fn_804768B4(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_804768B4_00000AD0
    lwz r3, 0x5c(r3)
    blr
lbl_fn_804768B4_00000AD0:
    li r3, 0x0
    blr
}

asm void fn_804768D0(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_804768D0_00000AEC
    lwz r3, 0x60(r3)
    blr
lbl_fn_804768D0_00000AEC:
    li r3, 0x0
    blr
}

asm void fn_804768EC(void)
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
    beq lbl_fn_804768EC_00000BC0
    addic. r31, r3, 0x68
    beq lbl_fn_804768EC_00000BA4
    addic. r0, r31, 0x24
    beq lbl_fn_804768EC_00000B44
    lwz r3, 0x2c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_804768EC_00000B44
    lis r4, fn_80041C0C@ha
    addi r4, r4, fn_80041C0C@l
    bl fn_80695A50
lbl_fn_804768EC_00000B44:
    addic. r0, r31, 0x18
    beq lbl_fn_804768EC_00000B64
    lwz r3, 0x20(r31)
    cmpwi r3, 0x0
    beq lbl_fn_804768EC_00000B64
    lis r4, fn_800EF73C@ha
    addi r4, r4, fn_800EF73C@l
    bl fn_80695A50
lbl_fn_804768EC_00000B64:
    addic. r0, r31, 0xc
    beq lbl_fn_804768EC_00000B84
    lwz r3, 0x14(r31)
    cmpwi r3, 0x0
    beq lbl_fn_804768EC_00000B84
    lis r4, fn_802375C4@ha
    addi r4, r4, fn_802375C4@l
    bl fn_80695A50
lbl_fn_804768EC_00000B84:
    cmpwi r31, 0x0
    beq lbl_fn_804768EC_00000BA4
    lwz r3, 0x8(r31)
    cmpwi r3, 0x0
    beq lbl_fn_804768EC_00000BA4
    beq lbl_fn_804768EC_00000BA4
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_804768EC_00000BA4:
    mr r3, r29
    li r4, 0x0
    bl fn_8047304C
    cmpwi r30, 0x0
    ble lbl_fn_804768EC_00000BC0
    mr r3, r29
    bl dtor_80084684
lbl_fn_804768EC_00000BC0:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804769D8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lbz r0, 0x4(r3)
    cmplwi r0, 0x2
    bne lbl_fn_804769D8_00000C68
    lwz r0, 0x5c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804769D8_00000C4C
    lwz r12, 0x60(r3)
    cmpwi r12, 0x0
    beq lbl_fn_804769D8_00000C2C
    lwz r4, 0x54(r3)
    lwz r5, 0x50(r3)
    mtctr r12
    addi r3, r3, 0x68
    bctrl
lbl_fn_804769D8_00000C2C:
    lwz r0, 0x64(r31)
    cmpwi r0, 0x0
    bne lbl_fn_804769D8_00000C40
    mr r3, r31
    bl fn_80473130
lbl_fn_804769D8_00000C40:
    li r0, 0x0
    stw r0, 0x5c(r31)
    b lbl_fn_804769D8_00000C68
lbl_fn_804769D8_00000C4C:
    addi r3, r3, 0x68
    bl fn_800A091C
    cmpwi r3, 0x0
    bne lbl_fn_804769D8_00000C68
    mr r3, r31
    li r4, 0x3
    bl fn_80473104
lbl_fn_804769D8_00000C68:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80476A74(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_80473F88
    lwz r3, lbl_8087F518
    mr r4, r31
    li r5, 0x1
    bl fn_80476AC8
    stw r3, 0x4(r30)
    lwz r0, 0x8(r30)
    stw r0, 0x60(r3)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80476AC8(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    stw r31, 0x11c(r1)
    mr r31, r3
    addi r3, r1, 0x10
    stw r30, 0x118(r1)
    stw r29, 0x114(r1)
    stw r28, 0x110(r1)
    mr r28, r5
    bl fn_8046D1EC
    addi r3, r1, 0x10
    bl fn_8006A950
    addi r3, r1, 0x10
    bl fn_8006B404
    addi r3, r1, 0x10
    bl fn_800DC6B4
    cmpwi r28, 0x0
    mr r5, r3
    li r30, 0x0
    beq lbl_fn_80476AC8_00000D7C
    lwz r4, 0x3ed4(r31)
    addi r0, r31, 0x3ed0
    b lbl_fn_80476AC8_00000D34
lbl_fn_80476AC8_00000D30:
    lwz r4, 0x4(r4)
lbl_fn_80476AC8_00000D34:
    cmplw r4, r0
    beq lbl_fn_80476AC8_00000D4C
    lwz r6, 0x8(r4)
    lwz r6, 0x48(r6)
    cmplw r3, r6
    bne lbl_fn_80476AC8_00000D30
lbl_fn_80476AC8_00000D4C:
    addi r0, r31, 0x3ed0
    cmplw r4, r0
    beq lbl_fn_80476AC8_00000D6C
    lwz r30, 0x8(r4)
    lbz r0, 0x5(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80476AC8_00000D6C
    b lbl_fn_80476AC8_00000D7C
lbl_fn_80476AC8_00000D6C:
    mr r3, r31
    addi r4, r31, 0x48
    bl fn_8046F834
    mr r30, r3
lbl_fn_80476AC8_00000D7C:
    cmpwi r30, 0x0
    bne lbl_fn_80476AC8_00000EC0
    lis r5, lbl_80756000@ha
    li r3, 0x98
    addi r5, r5, lbl_80756000@l
    li r4, 0x2
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_80476AC8_00000E04
    addi r4, r1, 0x10
    bl fn_80472FAC
    lis r4, lbl_8078FE78@ha
    li r3, 0x1
    addi r4, r4, lbl_8078FE78@l
    stw r4, 0x0(r30)
    li r0, 0x0
    stw r3, 0x5c(r30)
    stw r0, 0x60(r30)
    stw r0, 0x64(r30)
    stw r0, 0x68(r30)
    stw r0, 0x6c(r30)
    stw r0, 0x70(r30)
    stw r0, 0x74(r30)
    stw r0, 0x78(r30)
    stw r0, 0x7c(r30)
    stw r0, 0x80(r30)
    stw r0, 0x84(r30)
    stw r0, 0x88(r30)
    stw r0, 0x8c(r30)
    stw r0, 0x90(r30)
    stw r0, 0x94(r30)
lbl_fn_80476AC8_00000E04:
    mr r3, r31
    mr r4, r30
    bl fn_8046C3FC
    cmpwi r3, 0x0
    beq lbl_fn_80476AC8_00000EA4
    addi r28, r31, 0x3ed0
    li r3, 0xc
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_fn_80476AC8_00000E50
    lis r3, __files@ha
    lis r4, lbl_80779810@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80779810@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80476AC8_00000E50:
    addic. r3, r29, 0x8
    addi r0, r31, 0x3ed0
    stw r0, 0x8(r1)
    stw r29, 0xc(r1)
    beq lbl_fn_80476AC8_00000E68
    stw r30, 0x0(r3)
lbl_fn_80476AC8_00000E68:
    lwz r3, 0x0(r28)
    li r4, 0x0
    lwz r5, 0xc(r1)
    stw r5, 0x4(r3)
    lwz r0, 0x0(r28)
    stw r0, 0x0(r5)
    stw r5, 0x0(r28)
    stw r28, 0x4(r5)
    lwz r3, 0x3ecc(r31)
    stw r4, 0xc(r1)
    addi r0, r3, 0x1
    stw r0, 0x3ecc(r31)
    b lbl_fn_80476AC8_00000EC8
    bl dtor_80084684
    b lbl_fn_80476AC8_00000EC8
lbl_fn_80476AC8_00000EA4:
    mr r3, r30
    li r4, 0x4
    bl fn_80473104
    mr r3, r31
    mr r4, r30
    bl fn_8046F5CC
    b lbl_fn_80476AC8_00000EC8
lbl_fn_80476AC8_00000EC0:
    mr r3, r30
    bl fn_804730D4
lbl_fn_80476AC8_00000EC8:
    mr r3, r30
    lwz r31, 0x11c(r1)
    lwz r30, 0x118(r1)
    lwz r29, 0x114(r1)
    lwz r28, 0x110(r1)
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_80476CE4(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80476CE4_00000F00
    addi r3, r3, 0x68
    blr
lbl_fn_80476CE4_00000F00:
    li r3, 0x0
    blr
}

asm void fn_80476D00(void)
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
    beq lbl_fn_80476D00_00000F50
    addic. r3, r3, 0x4
    beq lbl_fn_80476D00_00000F40
    beq lbl_fn_80476D00_00000F40
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80476D00_00000F40:
    cmpwi r31, 0x0
    ble lbl_fn_80476D00_00000F50
    mr r3, r30
    bl dtor_80084684
lbl_fn_80476D00_00000F50:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80476D64(void)
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
    beq lbl_fn_80476D64_00000FE4
    addic. r3, r3, 0x6c
    beq lbl_fn_80476D64_00000F9C
    bl fn_80470528
lbl_fn_80476D64_00000F9C:
    addic. r0, r30, 0x5c
    beq lbl_fn_80476D64_00000FC8
    lwz r3, 0x60(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80476D64_00000FBC
    lis r4, fn_80476D00@ha
    addi r4, r4, fn_80476D00@l
    bl fn_80695A50
lbl_fn_80476D64_00000FBC:
    li r0, 0x0
    stw r0, 0x60(r30)
    stw r0, 0x5c(r30)
lbl_fn_80476D64_00000FC8:
    mr r3, r30
    li r4, 0x0
    bl fn_8047304C
    cmpwi r31, 0x0
    ble lbl_fn_80476D64_00000FE4
    mr r3, r30
    bl dtor_80084684
lbl_fn_80476D64_00000FE4:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80476DF8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    lbz r0, 0x4(r3)
    cmplwi r0, 0x2
    bne lbl_fn_80476DF8_000010BC
    lwz r0, 0x68(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80476DF8_000010B0
    lwz r0, 0x4c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80476DF8_00001050
    li r4, 0x5
    bl fn_80473104
    b lbl_fn_80476DF8_000010BC
lbl_fn_80476DF8_00001050:
    li r30, 0x1
    li r29, 0x0
    li r31, 0x0
    b lbl_fn_80476DF8_00001084
lbl_fn_80476DF8_00001060:
    lwz r0, 0x60(r28)
    add r3, r0, r31
    addi r3, r3, 0x4
    bl fn_800A0448
    cmpwi r3, 0x0
    beq lbl_fn_80476DF8_0000107C
    li r30, 0x0
lbl_fn_80476DF8_0000107C:
    addi r31, r31, 0x10
    addi r29, r29, 0x1
lbl_fn_80476DF8_00001084:
    lwz r0, 0x5c(r28)
    cmplw r29, r0
    blt lbl_fn_80476DF8_00001060
    cmpwi r30, 0x0
    beq lbl_fn_80476DF8_000010BC
    addi r3, r28, 0x6c
    bl fn_80470528
    mr r3, r28
    li r4, 0x3
    bl fn_80473104
    b lbl_fn_80476DF8_000010BC
lbl_fn_80476DF8_000010B0:
    bl fn_80476ED4
    li r0, 0x1
    stw r0, 0x68(r28)
lbl_fn_80476DF8_000010BC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80476ED4(void)
{
    nofralloc
    stwu r1, -0x7b0(r1)
    mflr r0
    lis r6, lbl_807774D8@ha
    li r4, 0x0
    stw r0, 0x7b4(r1)
    addi r6, r6, lbl_807774D8@l
    li r5, 0x400
    stmw r16, 0x770(r1)
    li r17, 0x0
    mr r30, r3
    stw r17, 0x14(r1)
    stw r17, 0x18(r1)
    stw r17, 0x1c(r1)
    lwz r16, 0x50(r3)
    lwz r18, 0x54(r3)
    addi r3, r1, 0x148
    stw r6, 0x138(r1)
    stw r17, 0x13c(r1)
    stw r17, 0x140(r1)
    stw r17, 0x144(r1)
    stw r17, 0x768(r1)
    bl memset
    addi r3, r1, 0x748
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x138(r1)
    mr r4, r18
    mr r5, r16
    addi r3, r1, 0x138
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807774B8@ha
    addi r3, r1, 0x138
    addi r4, r4, lbl_807774B8@l
    stw r4, 0x138(r1)
    la r4, lbl_8087D710
    bl fn_8005BCE8
    lis r3, __files@ha
    lis r20, lbl_80756030@ha
    addi r18, r1, 0x38
    addi r23, r1, 0x1c
    addi r21, r20, lbl_80756030@l
    addi r22, r3, __files@l
    addi r31, r1, 0x20
    li r29, 0x20
    lis r26, 0xcccd
    lis r19, 0xfc
    lis r25, 0x54
    lis r27, 0xa8
    lis r28, lbl_8078FF18@ha
lbl_fn_80476ED4_000011AC:
    addi r3, r1, 0x138
    bl fn_8005B9CC
    lbz r0, 0x0(r3)
    mr r16, r3
    cmpwi r0, 0x3b
    beq lbl_fn_80476ED4_00001504
    addi r4, r20, lbl_80756030@l
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80476ED4_000014C4
    stb r17, 0x38(r1)
    addi r3, r1, 0x138
    bl fn_8005B9CC
    cmplw r3, r18
    mr r16, r3
    beq lbl_fn_80476ED4_00001204
    bl strlen
    mr r5, r3
    mr r3, r18
    mr r4, r16
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_80476ED4_00001204:
    addi r3, r1, 0x138
    bl fn_8005B9CC
    lwz r12, 0x64(r30)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    stw r3, 0x34(r1)
    blt lbl_fn_80476ED4_00001504
    lwz r16, 0x18(r1)
    lwz r4, 0x1c(r1)
    cmplw r16, r4
    bge lbl_fn_80476ED4_00001274
    mulli r0, r16, 0x104
    lwz r4, 0x14(r1)
    add. r5, r4, r0
    beq lbl_fn_80476ED4_00001264
    stw r3, 0x0(r5)
    addi r4, r1, 0x34
    mtctr r29
lbl_fn_80476ED4_00001250:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_fn_80476ED4_00001250
lbl_fn_80476ED4_00001264:
    lwz r3, 0x18(r1)
    addi r0, r3, 0x1
    stw r0, 0x18(r1)
    b lbl_fn_80476ED4_00001504
lbl_fn_80476ED4_00001274:
    addi r0, r19, 0xfc0
    subf r0, r4, r0
    cmplwi r0, 0x1
    bge lbl_fn_80476ED4_00001298
    addi r4, r21, 0x7
    addi r3, r22, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80476ED4_00001298:
    lwz r24, 0x1c(r1)
    addi r3, r16, 0x1
    addi r0, r19, 0xfc0
    stw r17, 0x20(r1)
    subf r3, r24, r3
    subf r0, r24, r0
    stw r17, 0x24(r1)
    cmplw r3, r0
    stw r17, 0x28(r1)
    stw r23, 0x2c(r1)
    stw r17, 0x30(r1)
    stw r3, 0x10(r1)
    ble lbl_fn_80476ED4_000012E0
    addi r4, r21, 0x7
    addi r3, r22, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80476ED4_000012E0:
    addi r0, r25, 0x540
    cmplw r24, r0
    bge lbl_fn_80476ED4_00001328
    addi r4, r24, 0x1
    subi r5, r26, 0x3333
    slwi r3, r4, 2
    lwz r0, 0x10(r1)
    subf r4, r4, r3
    mulhwu r4, r5, r4
    addi r3, r1, 0x8
    srwi r4, r4, 2
    stw r4, 0x8(r1)
    cmplw r4, r0
    bge lbl_fn_80476ED4_0000131C
    addi r3, r1, 0x10
lbl_fn_80476ED4_0000131C:
    lwz r0, 0x0(r3)
    add r24, r24, r0
    b lbl_fn_80476ED4_00001364
lbl_fn_80476ED4_00001328:
    addi r0, r27, 0xa80
    cmplw r24, r0
    bge lbl_fn_80476ED4_00001360
    addi r3, r24, 0x1
    lwz r0, 0x10(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_80476ED4_00001354
    addi r3, r1, 0x10
lbl_fn_80476ED4_00001354:
    lwz r0, 0x0(r3)
    add r24, r24, r0
    b lbl_fn_80476ED4_00001364
lbl_fn_80476ED4_00001360:
    addi r24, r19, 0xfc0
lbl_fn_80476ED4_00001364:
    addi r0, r19, 0xfc0
    cmplw r24, r0
    ble lbl_fn_80476ED4_00001384
    addi r4, r21, 0x7
    addi r3, r22, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80476ED4_00001384:
    mulli r3, r24, 0x104
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r16, r3
    bne lbl_fn_80476ED4_000013AC
    addi r3, r22, 0xa0
    addi r4, r28, lbl_8078FF18@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80476ED4_000013AC:
    lwz r5, 0x18(r1)
    lwz r0, 0x24(r1)
    mulli r4, r5, 0x104
    stw r5, 0x30(r1)
    stw r16, 0x20(r1)
    mulli r3, r0, 0x104
    add r0, r16, r4
    stw r24, 0x28(r1)
    add. r5, r3, r0
    beq lbl_fn_80476ED4_000013F8
    lwz r0, 0x34(r1)
    addi r4, r1, 0x34
    stw r0, 0x0(r5)
    mtctr r29
lbl_fn_80476ED4_000013E4:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_fn_80476ED4_000013E4
lbl_fn_80476ED4_000013F8:
    lwz r0, 0x18(r1)
    lwz r4, 0x24(r1)
    mulli r6, r0, 0x104
    lwz r3, 0x30(r1)
    addi r7, r4, 0x1
    lwz r0, 0x14(r1)
    lwz r5, 0x20(r1)
    mulli r4, r3, 0x104
    stw r7, 0x24(r1)
    add r3, r0, r6
    add r8, r5, r4
    b lbl_fn_80476ED4_00001474
lbl_fn_80476ED4_00001428:
    subic. r8, r8, 0x104
    subi r3, r3, 0x104
    beq lbl_fn_80476ED4_0000145C
    lwz r4, 0x0(r3)
    mr r7, r8
    mr r6, r3
    stw r4, 0x0(r8)
    mtctr r29
lbl_fn_80476ED4_00001448:
    lwz r5, 0x4(r6)
    lwzu r4, 0x8(r6)
    stw r5, 0x4(r7)
    stwu r4, 0x8(r7)
    bdnz lbl_fn_80476ED4_00001448
lbl_fn_80476ED4_0000145C:
    lwz r5, 0x30(r1)
    lwz r4, 0x24(r1)
    subi r5, r5, 0x1
    stw r5, 0x30(r1)
    addi r4, r4, 0x1
    stw r4, 0x24(r1)
lbl_fn_80476ED4_00001474:
    cmplw r3, r0
    bgt lbl_fn_80476ED4_00001428
    lwz r0, 0x24(r1)
    cmpwi r31, 0x0
    lwz r6, 0x1c(r1)
    lwz r5, 0x28(r1)
    lwz r3, 0x14(r1)
    lwz r4, 0x20(r1)
    stw r5, 0x1c(r1)
    stw r6, 0x28(r1)
    stw r4, 0x14(r1)
    stw r3, 0x20(r1)
    stw r0, 0x18(r1)
    stw r17, 0x24(r1)
    beq lbl_fn_80476ED4_00001504
    cmpwi r3, 0x0
    beq lbl_fn_80476ED4_00001504
    stw r17, 0x24(r1)
    bl dtor_80084684
    b lbl_fn_80476ED4_00001504
lbl_fn_80476ED4_000014C4:
    mr r3, r16
    addi r4, r21, 0x1b
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80476ED4_00001504
    lwz r0, 0x70(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80476ED4_00001504
    addi r3, r1, 0x138
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r30, 0x6c
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    bl fn_80470364
lbl_fn_80476ED4_00001504:
    addi r3, r1, 0x138
    bl fn_8005BBF8
    cmpwi r3, 0x0
    bne lbl_fn_80476ED4_000011AC
    lwz r3, 0x60(r30)
    lwz r16, 0x18(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80476ED4_00001530
    lis r4, fn_80476D00@ha
    addi r4, r4, fn_80476D00@l
    bl fn_80695A50
lbl_fn_80476ED4_00001530:
    cmpwi r16, 0x0
    stw r16, 0x5c(r30)
    beq lbl_fn_80476ED4_0000157C
    slwi r3, r16, 4
    li r4, 0x6
    addi r3, r3, 0x10
    la r5, lbl_8087E064
    la r6, lbl_8087E060
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_80477414@ha
    lis r5, fn_80476D00@ha
    mr r7, r16
    li r6, 0x10
    addi r4, r4, fn_80477414@l
    addi r5, r5, fn_80476D00@l
    bl fn_80695720
    stw r3, 0x60(r30)
    b lbl_fn_80476ED4_00001584
lbl_fn_80476ED4_0000157C:
    li r0, 0x0
    stw r0, 0x60(r30)
lbl_fn_80476ED4_00001584:
    li r18, 0x0
    li r16, 0x0
    li r17, 0x0
    b lbl_fn_80476ED4_000015CC
lbl_fn_80476ED4_00001594:
    lwz r4, 0x14(r1)
    lwz r3, 0x60(r30)
    lwzx r0, r4, r16
    stwx r0, r3, r17
    lwz r3, 0x60(r30)
    lwz r0, 0x14(r1)
    add r3, r3, r17
    add r4, r0, r16
    addi r4, r4, 0x4
    addi r3, r3, 0x4
    bl fn_800A03E4
    addi r16, r16, 0x104
    addi r17, r17, 0x10
    addi r18, r18, 0x1
lbl_fn_80476ED4_000015CC:
    lwz r0, 0x5c(r30)
    cmplw r18, r0
    blt lbl_fn_80476ED4_00001594
    mr r3, r30
    bl fn_80473130
    addic. r0, r1, 0x14
    beq lbl_fn_80476ED4_00001608
    beq lbl_fn_80476ED4_00001608
    lwz r3, 0x14(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80476ED4_00001608
    lwz r0, 0x18(r1)
    subf r0, r0, r0
    stw r0, 0x18(r1)
    bl dtor_80084684
lbl_fn_80476ED4_00001608:
    lmw r16, 0x770(r1)
    lwz r0, 0x7b4(r1)
    mtlr r0
    addi r1, r1, 0x7b0
    blr
}

asm void fn_80477414(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    addi r3, r3, 0x4
    bl fn_800A03A0
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80477448(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_80473F88
    lwz r3, lbl_8087F518
    mr r4, r31
    li r5, 0x1
    bl fn_8047749C
    stw r3, 0x4(r30)
    lwz r0, 0x8(r30)
    stw r0, 0x64(r3)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8047749C(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    stw r31, 0x11c(r1)
    mr r31, r3
    addi r3, r1, 0x10
    stw r30, 0x118(r1)
    stw r29, 0x114(r1)
    stw r28, 0x110(r1)
    mr r28, r5
    bl fn_8046D1EC
    addi r3, r1, 0x10
    bl fn_8006A950
    addi r3, r1, 0x10
    bl fn_8006B404
    addi r3, r1, 0x10
    bl fn_800DC6B4
    cmpwi r28, 0x0
    mr r5, r3
    li r30, 0x0
    beq lbl_fn_8047749C_00001750
    lwz r4, 0x3ed4(r31)
    addi r0, r31, 0x3ed0
    b lbl_fn_8047749C_00001708
lbl_fn_8047749C_00001704:
    lwz r4, 0x4(r4)
lbl_fn_8047749C_00001708:
    cmplw r4, r0
    beq lbl_fn_8047749C_00001720
    lwz r6, 0x8(r4)
    lwz r6, 0x48(r6)
    cmplw r3, r6
    bne lbl_fn_8047749C_00001704
lbl_fn_8047749C_00001720:
    addi r0, r31, 0x3ed0
    cmplw r4, r0
    beq lbl_fn_8047749C_00001740
    lwz r30, 0x8(r4)
    lbz r0, 0x5(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8047749C_00001740
    b lbl_fn_8047749C_00001750
lbl_fn_8047749C_00001740:
    mr r3, r31
    addi r4, r31, 0x48
    bl fn_8046F834
    mr r30, r3
lbl_fn_8047749C_00001750:
    cmpwi r30, 0x0
    bne lbl_fn_8047749C_00001870
    lis r5, lbl_80756030@ha
    li r3, 0x74
    addi r5, r5, lbl_80756030@l
    li r4, 0x2
    addi r5, r5, 0x20
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_8047749C_000017B4
    addi r4, r1, 0x10
    bl fn_80472FAC
    lis r3, lbl_8078FEC8@ha
    li r0, 0x0
    addi r3, r3, lbl_8078FEC8@l
    stw r3, 0x0(r30)
    stw r0, 0x5c(r30)
    stw r0, 0x60(r30)
    stw r0, 0x64(r30)
    stw r0, 0x68(r30)
    stw r0, 0x6c(r30)
    stw r0, 0x70(r30)
lbl_fn_8047749C_000017B4:
    mr r3, r31
    mr r4, r30
    bl fn_8046C3FC
    cmpwi r3, 0x0
    beq lbl_fn_8047749C_00001854
    addi r28, r31, 0x3ed0
    li r3, 0xc
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_fn_8047749C_00001800
    lis r3, __files@ha
    lis r4, lbl_80779810@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80779810@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8047749C_00001800:
    addic. r3, r29, 0x8
    addi r0, r31, 0x3ed0
    stw r0, 0x8(r1)
    stw r29, 0xc(r1)
    beq lbl_fn_8047749C_00001818
    stw r30, 0x0(r3)
lbl_fn_8047749C_00001818:
    lwz r3, 0x0(r28)
    li r4, 0x0
    lwz r5, 0xc(r1)
    stw r5, 0x4(r3)
    lwz r0, 0x0(r28)
    stw r0, 0x0(r5)
    stw r5, 0x0(r28)
    stw r28, 0x4(r5)
    lwz r3, 0x3ecc(r31)
    stw r4, 0xc(r1)
    addi r0, r3, 0x1
    stw r0, 0x3ecc(r31)
    b lbl_fn_8047749C_00001878
    bl dtor_80084684
    b lbl_fn_8047749C_00001878
lbl_fn_8047749C_00001854:
    mr r3, r30
    li r4, 0x4
    bl fn_80473104
    mr r3, r31
    mr r4, r30
    bl fn_8046F5CC
    b lbl_fn_8047749C_00001878
lbl_fn_8047749C_00001870:
    mr r3, r30
    bl fn_804730D4
lbl_fn_8047749C_00001878:
    mr r3, r30
    lwz r31, 0x11c(r1)
    lwz r30, 0x118(r1)
    lwz r29, 0x114(r1)
    lwz r28, 0x110(r1)
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_80477694(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_80473F88
    lwz r3, lbl_8087F518
    mr r4, r31
    li r5, 0x0
    bl fn_8047749C
    stw r3, 0x4(r30)
    li r0, 0x1
    lwz r4, 0x8(r30)
    stw r4, 0x64(r3)
    lwz r3, 0x4(r30)
    stw r0, 0x70(r3)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804776F4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r4
    lwz r29, 0x4(r3)
    cmpwi r29, 0x0
    beq lbl_fn_804776F4_00001960
    li r31, 0x0
    li r30, 0x0
    b lbl_fn_804776F4_00001954
lbl_fn_804776F4_00001934:
    lwz r0, 0x60(r29)
    mr r3, r28
    add r5, r0, r30
    lwzx r4, r30, r0
    addi r5, r5, 0x4
    bl fn_80097A9C
    addi r30, r30, 0x10
    addi r31, r31, 0x1
lbl_fn_804776F4_00001954:
    lwz r0, 0x5c(r29)
    cmplw r31, r0
    blt lbl_fn_804776F4_00001934
lbl_fn_804776F4_00001960:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80477778(void)
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
    beq lbl_fn_80477778_00001A18
    addic. r0, r3, 0x68
    beq lbl_fn_80477778_000019D0
    lwz r3, 0x6c(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80477778_000019C4
    lis r4, fn_8004B338@ha
    addi r4, r4, fn_8004B338@l
    bl fn_80695A50
lbl_fn_80477778_000019C4:
    li r0, 0x0
    stw r0, 0x6c(r30)
    stw r0, 0x68(r30)
lbl_fn_80477778_000019D0:
    addic. r0, r30, 0x60
    beq lbl_fn_80477778_000019FC
    lwz r3, 0x64(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80477778_000019F0
    beq lbl_fn_80477778_000019F0
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80477778_000019F0:
    li r0, 0x0
    stw r0, 0x64(r30)
    stw r0, 0x60(r30)
lbl_fn_80477778_000019FC:
    mr r3, r30
    li r4, 0x0
    bl fn_8047304C
    cmpwi r31, 0x0
    ble lbl_fn_80477778_00001A18
    mr r3, r30
    bl dtor_80084684
lbl_fn_80477778_00001A18:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
