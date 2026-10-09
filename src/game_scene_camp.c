#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void dtor_80084684(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_8008BBD8(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_8012476C(void);
extern void fn_8012DF7C(void);
extern void fn_8013CB68(void);
extern void fn_80155DAC(void);
extern void fn_8016DA4C(void);
extern void fn_80192758(void);
extern void fn_80370174(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F99B0(void);
extern void fn_80680770(void);
extern void fn_80682428(void);
extern void fn_80686EA4(void);
extern void fn_8068AEA4(void);
extern void fn_8068B100(void);
extern void fn_80695B00(void);

/* External data declarations */
extern u8 lbl_8073A500[];
extern u8 lbl_8073A950[];
extern u8 lbl_8077F694[];
extern u8 lbl_8077F6A0[];
extern u8 lbl_8077F6AC[];
extern u8 lbl_8077F6E0[];
extern u8 lbl_8077F6E8[];
extern u8 lbl_8077F6F8[];
extern u8 lbl_8077F770[];
extern u8 lbl_8077F950[];
extern u8 lbl_8077F9C8[];
extern u8 lbl_8077FAF0[];
extern u8 lbl_8077FB0C[];
extern u8 lbl_807C7C20[];
extern u8 lbl_807C7C28[];

/* Small data declarations */
extern u32 lbl_8087F098;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F0E1;
extern u32 lbl_8087F0E2;
extern u32 lbl_8087F430;
extern u32 lbl_8087F490;
extern u32 lbl_8087F8A0;
extern u32 lbl_80882230;
extern u32 lbl_80882234;
extern u32 lbl_80882238;
extern u32 lbl_8088223C;
extern u32 lbl_80882240;
extern u32 lbl_80882250;
extern u32 lbl_80882254;
extern u32 lbl_80882258;
extern u32 lbl_8088225C;
extern u32 lbl_80882260;
extern u32 lbl_80882264;
extern u32 lbl_80882268;
extern u32 lbl_8088226C;
extern u32 lbl_80882270;
extern u32 lbl_80882274;
extern u32 lbl_80882278;
extern u32 lbl_8088227C;
extern u32 lbl_80882280;

/* Function declarations */
void fn_801A7DC8(void);
void fn_801A7E8C(void);
void fn_801A8080(void);
void fn_801A82D4(void);
void fn_801A8304(void);
void fn_801A8420(void);
void fn_801A84AC(void);
void fn_801A86C0(void);
void fn_801A86F0(void);
void fn_801A880C(void);
void fn_801A8880(void);
void fn_801A8E68(void);
void fn_801A90BC(void);
void fn_801A90E4(void);

asm void fn_801A7DC8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r9, lbl_8077F9C8@ha
    li r8, 0x0
    stw r0, 0x14(r1)
    addi r9, r9, lbl_8077F9C8@l
    li r0, 0x65
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    stw r4, 0x4(r3)
    stw r9, 0x0(r3)
    stw r5, 0x8(r3)
    stw r6, 0xc(r3)
    stw r7, 0x10(r3)
    stw r8, 0x14(r3)
    stw r8, 0x58c(r4)
    lwz r4, 0x4(r3)
    stw r0, 0x560(r4)
    lwz r3, 0x4(r3)
    bl fn_8016DA4C
    lwz r3, 0x4(r30)
    li r0, 0x1
    lfs f0, lbl_80882230
    li r4, 0x0
    stw r0, 0x3fc(r3)
    addi r31, r3, 0xb0
    lfs f1, lbl_80882234
    mr r3, r31
    lfs f2, lbl_80882238
    li r5, 0x85
    stfs f0, 0x24c(r31)
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80882230
    li r4, 0x1e
    stfs f0, 0x238(r31)
    li r0, 0x5a
    mr r3, r30
    stw r4, 0x18(r30)
    stw r0, 0x1c(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801A7E8C(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    lfs f3, lbl_80882234
    li r4, 0x79
    stw r0, 0x84(r1)
    lfs f0, lbl_80882230
    stw r31, 0x7c(r1)
    mr r31, r3
    lwz r5, 0x8(r3)
    addi r3, r1, 0x30
    stfs f3, 0x8(r1)
    stfs f3, 0xc(r1)
    stfs f0, 0x10(r1)
    lfs f1, 0x538(r5)
    bl fn_805F8E70
    addi r4, r1, 0x8
    addi r3, r1, 0x30
    mr r5, r4
    bl fn_805F93C0
    lfs f4, lbl_8088223C
    addi r3, r1, 0x20
    lfs f3, 0xc(r1)
    lfs f0, 0x8(r1)
    fmuls f6, f3, f4
    lwz r4, 0x8(r31)
    fmuls f7, f0, f4
    lfs f5, 0x10(r1)
    lfs f0, 0x528(r4)
    fmuls f4, f5, f4
    lfs f3, 0x52c(r4)
    fadds f8, f0, f7
    stfs f7, 0x14(r1)
    fadds f5, f3, f6
    lfs f3, 0x530(r4)
    stfs f8, 0x20(r1)
    fadds f0, f3, f4
    lwz r4, 0x4(r31)
    stfs f5, 0x24(r1)
    psq_l f1, 0x0(r3), 0, 0
    fmr f2, f0
    psq_st f1, 0x528(r4), 0, 0
    stfs f2, 0x530(r4)
    lwz r3, 0x8(r31)
    lwz r4, 0x4(r31)
    lfs f2, 0x53c(r3)
    psq_l f1, 0x534(r3), 0, 0
    psq_st f1, 0x534(r4), 0, 0
    stfs f2, 0x53c(r4)
    lwz r3, 0x4(r31)
    stfs f6, 0x18(r1)
    lwz r0, 0x48(r3)
    stfs f4, 0x1c(r1)
    cmpwi r0, 0x0
    stfs f0, 0x28(r1)
    beq lbl_fn_801A7E8C_000001A8
    cmpwi r0, 0x3
    bne lbl_fn_801A7E8C_000001FC
lbl_fn_801A7E8C_000001A8:
    lwz r0, 0xc(r31)
    cmpwi r0, 0x0
    ble lbl_fn_801A7E8C_000001FC
    lwz r3, lbl_8087F490
    li r0, 0x1
    li r4, 0x22
    stw r0, 0x728(r3)
    lwz r3, lbl_8087F0A8
    addi r3, r3, 0x48c
    bl fn_8012476C
    cmpwi r3, 0x0
    beq lbl_fn_801A7E8C_000001E4
    lwz r3, 0x14(r31)
    addi r0, r3, 0x1
    stw r0, 0x14(r31)
lbl_fn_801A7E8C_000001E4:
    lwz r3, 0x14(r31)
    lwz r0, 0xc(r31)
    cmpw r3, r0
    blt lbl_fn_801A7E8C_000001FC
    li r3, 0x1
    b lbl_fn_801A7E8C_000002A4
lbl_fn_801A7E8C_000001FC:
    lwz r3, 0x10(r31)
    subic. r0, r3, 0x1
    stw r0, 0x10(r31)
    bgt lbl_fn_801A7E8C_00000214
    li r3, 0x1
    b lbl_fn_801A7E8C_000002A4
lbl_fn_801A7E8C_00000214:
    lwz r3, lbl_8087F430
    li r4, 0xd4
    bl fn_80370174
    cmpwi r3, 0x0
    li r4, 0xc
    beq lbl_fn_801A7E8C_00000230
    li r4, 0x12
lbl_fn_801A7E8C_00000230:
    lwz r3, 0x10(r31)
    divw r0, r3, r4
    mullw r0, r0, r4
    subf. r0, r0, r3
    bne lbl_fn_801A7E8C_000002A0
    lwz r3, 0x4(r31)
    lwz r0, 0x48(r3)
    cmpwi r0, 0x2
    beq lbl_fn_801A7E8C_000002A0
    addi r3, r3, 0x7d4
    lis r0, 0x4330
    lwz r5, 0x16c(r3)
    lis r6, lbl_8073A500@ha
    lfd f4, lbl_8073A500@l(r6)
    li r6, 0x0
    xoris r5, r5, 0x8000
    stw r5, 0x64(r1)
    lwz r4, lbl_8087F0A8
    li r5, 0x0
    stw r0, 0x60(r1)
    lfs f0, 0x520(r4)
    lfd f3, 0x60(r1)
    fsubs f3, f3, f4
    fmuls f0, f3, f0
    fctiwz f0, f0
    stfd f0, 0x68(r1)
    lwz r4, 0x6c(r1)
    bl fn_8012DF7C
lbl_fn_801A7E8C_000002A0:
    li r3, 0x0
lbl_fn_801A7E8C_000002A4:
    lwz r0, 0x84(r1)
    lwz r31, 0x7c(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_801A8080(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    lis r5, lbl_8073A950@ha
    li r7, 0x0
    stw r0, 0x84(r1)
    addi r5, r5, lbl_8073A950@l
    mr r6, r5
    stw r31, 0x7c(r1)
    mr r31, r3
    li r3, 0x8
    stw r30, 0x78(r1)
    stw r29, 0x74(r1)
    stw r28, 0x70(r1)
    mr r28, r4
    li r4, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_801A8080_00000370
    lwz r6, 0x4(r28)
    lis r4, lbl_8077F950@ha
    stw r6, 0x4(r3)
    addi r4, r4, lbl_8077F950@l
    li r5, 0x66
    li r10, 0x0
    stw r4, 0x0(r3)
    li r0, 0x1
    lfs f0, lbl_80882230
    li r4, 0x0
    stw r5, 0x560(r6)
    li r5, 0x86
    lfs f1, lbl_80882234
    li r6, 0x0
    lwz r9, 0x4(r3)
    li r7, 0x0
    lfs f2, lbl_80882238
    li r8, 0x1
    stw r10, 0xf1c(r9)
    lwz r3, 0x4(r3)
    stw r0, 0x3fc(r3)
    addi r29, r3, 0xb0
    mr r3, r29
    stfs f0, 0x24c(r29)
    bl fn_80097C08
    lfs f0, lbl_80882230
    stfs f0, 0x238(r29)
lbl_fn_801A8080_00000370:
    lis r3, lbl_8077F694@ha
    lwzu r5, lbl_8077F694@l(r3)
    lwz r6, 0x4(r28)
    li r0, 0x0
    lwz r4, 0x4(r3)
    lwz r3, 0x8(r3)
    stw r6, 0x8(r1)
    stw r0, 0x0(r31)
    lbz r0, lbl_8087F0E1
    stw r30, 0xc(r1)
    extsb. r0, r0
    stw r5, 0x1c(r1)
    stw r4, 0x20(r1)
    stw r3, 0x24(r1)
    stw r5, 0x10(r1)
    stw r4, 0x14(r1)
    stw r3, 0x18(r1)
    stw r5, 0x50(r1)
    stw r4, 0x54(r1)
    stw r3, 0x58(r1)
    stw r6, 0x5c(r1)
    stw r30, 0x60(r1)
    bne lbl_fn_801A8080_000003F4
    lis r6, lbl_807C7C20@ha
    lis r4, fn_801A82D4@ha
    lis r3, fn_801A8304@ha
    li r0, 0x1
    addi r3, r3, fn_801A8304@l
    addi r5, r6, lbl_807C7C20@l
    addi r4, r4, fn_801A82D4@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C7C20@l(r6)
    stb r0, lbl_8087F0E1
lbl_fn_801A8080_000003F4:
    lwz r7, 0x50(r1)
    addi r3, r1, 0x3c
    lwz r6, 0x54(r1)
    lwz r5, 0x58(r1)
    lwz r4, 0x5c(r1)
    lwz r0, 0x60(r1)
    stw r7, 0x3c(r1)
    stw r6, 0x40(r1)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_801A8080_000004C8
    lwz r7, 0x3c(r1)
    li r3, 0x14
    lwz r6, 0x40(r1)
    lwz r5, 0x44(r1)
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r7, 0x28(r1)
    stw r6, 0x2c(r1)
    stw r5, 0x30(r1)
    stw r4, 0x34(r1)
    stw r0, 0x38(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_801A8080_0000048C
    lis r3, __files@ha
    lis r4, lbl_8077FB0C@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8077FB0C@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801A8080_0000048C:
    cmpwi r30, 0x0
    beq lbl_fn_801A8080_000004BC
    lwz r0, 0x28(r1)
    stw r0, 0x0(r30)
    lwz r0, 0x2c(r1)
    stw r0, 0x4(r30)
    lwz r0, 0x30(r1)
    stw r0, 0x8(r30)
    lwz r0, 0x34(r1)
    stw r0, 0xc(r30)
    lwz r0, 0x38(r1)
    stw r0, 0x10(r30)
lbl_fn_801A8080_000004BC:
    stw r30, 0x4(r31)
    li r0, 0x1
    b lbl_fn_801A8080_000004CC
lbl_fn_801A8080_000004C8:
    li r0, 0x0
lbl_fn_801A8080_000004CC:
    cmpwi r0, 0x0
    beq lbl_fn_801A8080_000004E4
    lis r3, lbl_807C7C20@ha
    addi r3, r3, lbl_807C7C20@l
    stw r3, 0x0(r31)
    b lbl_fn_801A8080_000004EC
lbl_fn_801A8080_000004E4:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_801A8080_000004EC:
    lwz r0, 0x84(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    lwz r29, 0x74(r1)
    lwz r28, 0x70(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_801A82D4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r12, 0x0(r3)
    lwz r3, 0xc(r12)
    lwz r4, 0x10(r12)
    bl fn_80695B00
    nop
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801A8304(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r5, 0x3
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    mr r29, r4
    bne lbl_fn_801A8304_00000574
    lis r3, lbl_8077F6E8@ha
    addi r3, r3, lbl_8077F6E8@l
    stw r3, 0x0(r4)
    b lbl_fn_801A8304_0000063C
lbl_fn_801A8304_00000574:
    cmpwi r5, 0x0
    bne lbl_fn_801A8304_000005EC
    lwz r31, 0x0(r3)
    li r3, 0x14
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_801A8304_000005B4
    lis r3, __files@ha
    lis r4, lbl_8077FB0C@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8077FB0C@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801A8304_000005B4:
    cmpwi r30, 0x0
    beq lbl_fn_801A8304_000005E4
    lwz r0, 0x4(r31)
    lwz r3, 0x0(r31)
    stw r3, 0x0(r30)
    stw r0, 0x4(r30)
    lwz r0, 0x8(r31)
    stw r0, 0x8(r30)
    lwz r0, 0xc(r31)
    stw r0, 0xc(r30)
    lwz r0, 0x10(r31)
    stw r0, 0x10(r30)
lbl_fn_801A8304_000005E4:
    stw r30, 0x0(r29)
    b lbl_fn_801A8304_0000063C
lbl_fn_801A8304_000005EC:
    cmpwi r5, 0x1
    bne lbl_fn_801A8304_00000608
    lwz r3, 0x0(r4)
    bl dtor_80084684
    li r0, 0x0
    stw r0, 0x0(r29)
    b lbl_fn_801A8304_0000063C
lbl_fn_801A8304_00000608:
    lwz r5, 0x0(r4)
    lis r3, lbl_8077F6E8@ha
    lwz r4, lbl_8077F6E8@l(r3)
    lwz r3, 0x0(r5)
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_801A8304_00000634
    lwz r0, 0x0(r30)
    stw r0, 0x0(r29)
    b lbl_fn_801A8304_0000063C
lbl_fn_801A8304_00000634:
    li r0, 0x0
    stw r0, 0x0(r29)
lbl_fn_801A8304_0000063C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801A8420(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    psq_st f31, 0x18(r1), 0, 0
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r5, 0x4(r3)
    lfs f31, 0x2e4(r5)
    addi r3, r5, 0xb0
    bl fn_80097D7C
    lfs f0, lbl_80882250
    fsubs f0, f1, f0
    fcmpo cr0, f31, f0
    cror eq, gt, eq
    bne lbl_fn_801A8420_000006A8
    li r31, 0x1
lbl_fn_801A8420_000006A8:
    lwz r3, 0x4(r30)
    li r5, 0x0
    lfs f1, lbl_80882234
    lfs f2, lbl_80882230
    addi r4, r3, 0x534
    bl fn_8013CB68
    psq_l f31, 0x18(r1), 0, 0
    mr r3, r31
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801A84AC(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stw r31, 0x6c(r1)
    mr r31, r3
    stw r30, 0x68(r1)
    mr r30, r4
    lwz r5, 0x4(r4)
    lwz r0, 0x48(r5)
    cmpwi r0, 0x0
    beq lbl_fn_801A84AC_000008DC
    lis r5, lbl_8073A950@ha
    li r3, 0xc
    addi r5, r5, lbl_8073A950@l
    li r4, 0x0
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_801A84AC_0000075C
    lwz r6, 0x4(r30)
    lis r5, lbl_8077F6F8@ha
    stw r6, 0x4(r3)
    addi r5, r5, lbl_8077F6F8@l
    li r4, 0x68
    li r0, 0x0
    stw r5, 0x0(r3)
    stw r4, 0x560(r6)
    lwz r4, 0x4(r3)
    stw r0, 0xf1c(r4)
lbl_fn_801A84AC_0000075C:
    lis r4, lbl_8077F6A0@ha
    lwzu r6, lbl_8077F6A0@l(r4)
    lwz r7, 0x4(r30)
    li r0, 0x0
    lwz r5, 0x4(r4)
    lwz r4, 0x8(r4)
    stw r7, 0x8(r1)
    stw r0, 0x0(r31)
    lbz r0, lbl_8087F0E2
    stw r3, 0xc(r1)
    extsb. r0, r0
    stw r6, 0x1c(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r6, 0x10(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r6, 0x50(r1)
    stw r5, 0x54(r1)
    stw r4, 0x58(r1)
    stw r7, 0x5c(r1)
    stw r3, 0x60(r1)
    bne lbl_fn_801A84AC_000007E0
    lis r6, lbl_807C7C28@ha
    lis r4, fn_801A86C0@ha
    lis r3, fn_801A86F0@ha
    li r0, 0x1
    addi r3, r3, fn_801A86F0@l
    addi r5, r6, lbl_807C7C28@l
    addi r4, r4, fn_801A86C0@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C7C28@l(r6)
    stb r0, lbl_8087F0E2
lbl_fn_801A84AC_000007E0:
    lwz r7, 0x50(r1)
    addi r3, r1, 0x3c
    lwz r6, 0x54(r1)
    lwz r5, 0x58(r1)
    lwz r4, 0x5c(r1)
    lwz r0, 0x60(r1)
    stw r7, 0x3c(r1)
    stw r6, 0x40(r1)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_801A84AC_000008B4
    lwz r7, 0x3c(r1)
    li r3, 0x14
    lwz r6, 0x40(r1)
    lwz r5, 0x44(r1)
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r7, 0x28(r1)
    stw r6, 0x2c(r1)
    stw r5, 0x30(r1)
    stw r4, 0x34(r1)
    stw r0, 0x38(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_801A84AC_00000878
    lis r3, __files@ha
    lis r4, lbl_8077FAF0@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8077FAF0@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801A84AC_00000878:
    cmpwi r30, 0x0
    beq lbl_fn_801A84AC_000008A8
    lwz r0, 0x28(r1)
    stw r0, 0x0(r30)
    lwz r0, 0x2c(r1)
    stw r0, 0x4(r30)
    lwz r0, 0x30(r1)
    stw r0, 0x8(r30)
    lwz r0, 0x34(r1)
    stw r0, 0xc(r30)
    lwz r0, 0x38(r1)
    stw r0, 0x10(r30)
lbl_fn_801A84AC_000008A8:
    stw r30, 0x4(r31)
    li r0, 0x1
    b lbl_fn_801A84AC_000008B8
lbl_fn_801A84AC_000008B4:
    li r0, 0x0
lbl_fn_801A84AC_000008B8:
    cmpwi r0, 0x0
    beq lbl_fn_801A84AC_000008D0
    lis r3, lbl_807C7C28@ha
    addi r3, r3, lbl_807C7C28@l
    stw r3, 0x0(r31)
    b lbl_fn_801A84AC_000008E0
lbl_fn_801A84AC_000008D0:
    li r0, 0x0
    stw r0, 0x0(r31)
    b lbl_fn_801A84AC_000008E0
lbl_fn_801A84AC_000008DC:
    bl fn_80192758
lbl_fn_801A84AC_000008E0:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_801A86C0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r12, 0x0(r3)
    lwz r3, 0xc(r12)
    lwz r4, 0x10(r12)
    bl fn_80695B00
    nop
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801A86F0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r5, 0x3
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    mr r29, r4
    bne lbl_fn_801A86F0_00000960
    lis r3, lbl_8077F6E0@ha
    addi r3, r3, lbl_8077F6E0@l
    stw r3, 0x0(r4)
    b lbl_fn_801A86F0_00000A28
lbl_fn_801A86F0_00000960:
    cmpwi r5, 0x0
    bne lbl_fn_801A86F0_000009D8
    lwz r31, 0x0(r3)
    li r3, 0x14
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_801A86F0_000009A0
    lis r3, __files@ha
    lis r4, lbl_8077FAF0@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8077FAF0@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801A86F0_000009A0:
    cmpwi r30, 0x0
    beq lbl_fn_801A86F0_000009D0
    lwz r0, 0x4(r31)
    lwz r3, 0x0(r31)
    stw r3, 0x0(r30)
    stw r0, 0x4(r30)
    lwz r0, 0x8(r31)
    stw r0, 0x8(r30)
    lwz r0, 0xc(r31)
    stw r0, 0xc(r30)
    lwz r0, 0x10(r31)
    stw r0, 0x10(r30)
lbl_fn_801A86F0_000009D0:
    stw r30, 0x0(r29)
    b lbl_fn_801A86F0_00000A28
lbl_fn_801A86F0_000009D8:
    cmpwi r5, 0x1
    bne lbl_fn_801A86F0_000009F4
    lwz r3, 0x0(r4)
    bl dtor_80084684
    li r0, 0x0
    stw r0, 0x0(r29)
    b lbl_fn_801A86F0_00000A28
lbl_fn_801A86F0_000009F4:
    lwz r5, 0x0(r4)
    lis r3, lbl_8077F6E0@ha
    lwz r4, lbl_8077F6E0@l(r3)
    lwz r3, 0x0(r5)
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_801A86F0_00000A20
    lwz r0, 0x0(r30)
    stw r0, 0x0(r29)
    b lbl_fn_801A86F0_00000A28
lbl_fn_801A86F0_00000A20:
    li r0, 0x0
    stw r0, 0x0(r29)
lbl_fn_801A86F0_00000A28:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801A880C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r6, lbl_8077F770@ha
    li r5, 0x0
    stw r0, 0x14(r1)
    addi r6, r6, lbl_8077F770@l
    li r0, 0x67
    stw r31, 0xc(r1)
    mr r31, r3
    stw r4, 0x4(r3)
    stw r6, 0x0(r3)
    stb r5, 0x8(r3)
    stw r5, 0xc(r3)
    stw r0, 0x560(r4)
    lwz r3, 0x4(r3)
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 25
    beq lbl_fn_801A880C_00000A94
    li r4, 0x0
    bl fn_80155DAC
lbl_fn_801A880C_00000A94:
    lwz r4, 0x4(r31)
    li r0, 0x0
    mr r3, r31
    stw r0, 0xf1c(r4)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801A8880(void)
{
    nofralloc
    stwu r1, -0x250(r1)
    mflr r0
    stw r0, 0x254(r1)
    stfd f31, 0x240(r1)
    psq_st f31, 0x248(r1), 0, 0
    stfd f30, 0x230(r1)
    psq_st f30, 0x238(r1), 0, 0
    stw r31, 0x22c(r1)
    mr r31, r3
    stw r30, 0x228(r1)
    stw r29, 0x224(r1)
    stw r28, 0x220(r1)
    lwz r4, lbl_8087F098
    lwz r0, 0x48(r4)
    lwz r29, 0xf8(r4)
    cmpwi r0, 0x2
    bne lbl_fn_801A8880_00000B04
    cmpwi r29, 0x0
    bne lbl_fn_801A8880_00000B0C
lbl_fn_801A8880_00000B04:
    li r3, 0x1
    b lbl_fn_801A8880_00001070
lbl_fn_801A8880_00000B0C:
    lbz r0, 0x8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801A8880_0000106C
    lfs f3, lbl_80882234
    addi r3, r1, 0x1e8
    lfs f0, lbl_80882230
    li r4, 0x79
    stfs f3, 0xb0(r1)
    stfs f0, 0xb4(r1)
    stfs f3, 0xb8(r1)
    stfs f3, 0xbc(r1)
    stfs f3, 0xc0(r1)
    stfs f0, 0xc4(r1)
    lfs f1, 0x538(r29)
    bl fn_805F8E70
    addi r4, r1, 0xbc
    addi r3, r1, 0x1e8
    mr r5, r4
    bl fn_805F93C0
    addi r3, r1, 0xbc
    addi r4, r1, 0xb0
    addi r5, r1, 0xc8
    bl fn_805F99B0
    lfs f5, 0xd0(r1)
    addi r3, r1, 0xec
    lfs f4, lbl_80882250
    lfs f3, 0xcc(r1)
    lfs f0, 0xc8(r1)
    fmuls f5, f5, f4
    fmuls f6, f3, f4
    lfs f3, 0x52c(r29)
    fmuls f7, f0, f4
    lfs f4, 0x530(r29)
    lfs f0, 0x528(r29)
    fadds f8, f4, f5
    lwz r4, 0x4(r31)
    fadds f9, f3, f6
    fadds f10, f0, f7
    stfs f7, 0xd4(r1)
    lfs f4, 0x530(r4)
    lfs f3, 0x52c(r4)
    lfs f0, 0x528(r4)
    fsubs f4, f8, f4
    fsubs f3, f9, f3
    stfs f6, 0xd8(r1)
    fsubs f0, f10, f0
    stfs f5, 0xdc(r1)
    stfs f10, 0xf8(r1)
    stfs f9, 0xfc(r1)
    stfs f8, 0x100(r1)
    stfs f0, 0xec(r1)
    stfs f3, 0xf0(r1)
    stfs f4, 0xf4(r1)
    bl fn_805F9920
    lfs f0, lbl_80882254
    lwz r3, 0xc(r31)
    fcmpo cr0, f1, f0
    lwz r4, 0x4(r31)
    addi r0, r3, 0x1
    stw r0, 0xc(r31)
    addi r28, r4, 0xb0
    cror eq, lt, eq
    beq lbl_fn_801A8880_00000C10
    cmpwi r0, 0x1e
    ble lbl_fn_801A8880_00000E5C
lbl_fn_801A8880_00000C10:
    li r0, 0x1
    stb r0, 0x8(r31)
    lfs f0, lbl_80882230
    mr r3, r28
    stw r0, 0x34c(r28)
    li r4, 0x0
    lfs f1, lbl_80882234
    li r5, 0x8a
    stfs f0, 0x24c(r28)
    li r6, 0x1
    lfs f2, lbl_80882238
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80882230
    addi r4, r1, 0xa4
    stfs f0, 0x238(r28)
    addi r3, r1, 0xec
    lfs f3, lbl_80882234
    addi r30, r1, 0x98
    lwz r5, 0x4(r31)
    lfs f4, 0x530(r29)
    lfs f0, 0x530(r5)
    lfs f6, 0x52c(r29)
    fsubs f7, f4, f0
    lfs f5, 0x52c(r5)
    lfs f4, 0x528(r29)
    lfs f0, 0x528(r5)
    fsubs f5, f6, f5
    fmr f2, f7
    fsubs f4, f4, f0
    stfs f5, 0xa8(r1)
    lfs f0, lbl_80882258
    stfs f2, 0xf4(r1)
    frsp f2, f2
    stfs f4, 0xa4(r1)
    fabs f4, f2
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    frsp f4, f4
    stfs f3, 0xf0(r1)
    psq_l f1, 0x0(r3), 0, 0
    fcmpo cr0, f4, f0
    stfs f7, 0xac(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0xa0(r1)
    bge lbl_fn_801A8880_00000CEC
    lfs f0, 0x98(r1)
    fcmpo cr0, f0, f3
    ble lbl_fn_801A8880_00000CE0
    lfs f0, lbl_8088225C
    b lbl_fn_801A8880_00000CE4
lbl_fn_801A8880_00000CE0:
    lfs f0, lbl_80882260
lbl_fn_801A8880_00000CE4:
    stfs f0, 0x90(r1)
    b lbl_fn_801A8880_00000D00
lbl_fn_801A8880_00000CEC:
    frsp f2, f2
    lfs f1, 0x98(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x90(r1)
lbl_fn_801A8880_00000D00:
    lfs f0, 0x90(r1)
    addi r3, r1, 0x178
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80882234
    addi r4, r1, 0x80
    lfs f30, 0x180(r1)
    mr r5, r4
    lfs f31, 0x17c(r1)
    addi r3, r1, 0x1a8
    lfs f13, 0x178(r1)
    lfs f12, 0x190(r1)
    lfs f11, 0x18c(r1)
    lfs f10, 0x188(r1)
    lfs f9, 0x1a0(r1)
    lfs f8, 0x19c(r1)
    lfs f7, 0x198(r1)
    lfs f6, 0x1a4(r1)
    lfs f5, 0x194(r1)
    lfs f4, 0x184(r1)
    lfs f0, lbl_80882230
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0xa0(r1)
    stfs f3, 0x1d8(r1)
    stfs f3, 0x1dc(r1)
    stfs f3, 0x1e0(r1)
    stfs f0, 0x1e4(r1)
    stfs f13, 0x50(r1)
    stfs f31, 0x54(r1)
    stfs f30, 0x58(r1)
    stfs f13, 0x1a8(r1)
    stfs f31, 0x1ac(r1)
    stfs f30, 0x1b0(r1)
    stfs f10, 0x5c(r1)
    stfs f11, 0x60(r1)
    stfs f12, 0x64(r1)
    stfs f10, 0x1b8(r1)
    stfs f11, 0x1bc(r1)
    stfs f12, 0x1c0(r1)
    stfs f7, 0x68(r1)
    stfs f8, 0x6c(r1)
    stfs f9, 0x70(r1)
    stfs f7, 0x1c8(r1)
    stfs f8, 0x1cc(r1)
    stfs f9, 0x1d0(r1)
    stfs f4, 0x74(r1)
    stfs f5, 0x78(r1)
    stfs f6, 0x7c(r1)
    stfs f4, 0x1b4(r1)
    stfs f5, 0x1c4(r1)
    stfs f6, 0x1d4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x88(r1)
    bl fn_805F9750
    lfs f2, 0x88(r1)
    lfs f0, lbl_80882258
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_801A8880_00000E1C
    lfs f3, 0x84(r1)
    lfs f0, lbl_80882234
    fcmpo cr0, f3, f0
    ble lbl_fn_801A8880_00000E0C
    lfs f0, lbl_8088225C
    b lbl_fn_801A8880_00000E10
lbl_fn_801A8880_00000E0C:
    lfs f0, lbl_80882260
lbl_fn_801A8880_00000E10:
    fneg f0, f0
    stfs f0, 0x8c(r1)
    b lbl_fn_801A8880_00000E30
lbl_fn_801A8880_00000E1C:
    lfs f1, 0x84(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x8c(r1)
lbl_fn_801A8880_00000E30:
    addi r3, r1, 0x8c
    lfs f2, lbl_80882234
    psq_l f1, 0x0(r3), 0, 0
    lwz r3, 0x4(r31)
    stfs f2, 0x94(r1)
    stfs f2, 0xa0(r1)
    frsp f2, f2
    psq_st f1, 0x534(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x53c(r3)
    b lbl_fn_801A8880_0000106C
lbl_fn_801A8880_00000E5C:
    lfs f2, 0xf4(r1)
    addi r3, r1, 0xec
    lfs f0, lbl_80882258
    addi r30, r1, 0xe0
    fabs f3, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0xe8(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_801A8880_00000EAC
    lfs f3, 0xe0(r1)
    lfs f0, lbl_80882234
    fcmpo cr0, f3, f0
    ble lbl_fn_801A8880_00000EA0
    lfs f0, lbl_8088225C
    b lbl_fn_801A8880_00000EA4
lbl_fn_801A8880_00000EA0:
    lfs f0, lbl_80882260
lbl_fn_801A8880_00000EA4:
    stfs f0, 0x48(r1)
    b lbl_fn_801A8880_00000EC0
lbl_fn_801A8880_00000EAC:
    frsp f2, f2
    lfs f1, 0xe0(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_801A8880_00000EC0:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x108
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80882234
    addi r4, r1, 0x38
    lfs f31, 0x110(r1)
    mr r5, r4
    lfs f30, 0x10c(r1)
    addi r3, r1, 0x138
    lfs f13, 0x108(r1)
    lfs f12, 0x120(r1)
    lfs f11, 0x11c(r1)
    lfs f10, 0x118(r1)
    lfs f9, 0x130(r1)
    lfs f8, 0x12c(r1)
    lfs f7, 0x128(r1)
    lfs f6, 0x134(r1)
    lfs f5, 0x124(r1)
    lfs f4, 0x114(r1)
    lfs f0, lbl_80882230
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0xe8(r1)
    stfs f3, 0x168(r1)
    stfs f3, 0x16c(r1)
    stfs f3, 0x170(r1)
    stfs f0, 0x174(r1)
    stfs f13, 0x8(r1)
    stfs f30, 0xc(r1)
    stfs f31, 0x10(r1)
    stfs f13, 0x138(r1)
    stfs f30, 0x13c(r1)
    stfs f31, 0x140(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0x148(r1)
    stfs f11, 0x14c(r1)
    stfs f12, 0x150(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0x158(r1)
    stfs f8, 0x15c(r1)
    stfs f9, 0x160(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0x144(r1)
    stfs f5, 0x154(r1)
    stfs f6, 0x164(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80882258
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_801A8880_00000FDC
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80882234
    fcmpo cr0, f3, f0
    ble lbl_fn_801A8880_00000FCC
    lfs f0, lbl_8088225C
    b lbl_fn_801A8880_00000FD0
lbl_fn_801A8880_00000FCC:
    lfs f0, lbl_80882260
lbl_fn_801A8880_00000FD0:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_801A8880_00000FF0
lbl_fn_801A8880_00000FDC:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_801A8880_00000FF0:
    lfs f3, lbl_80882234
    addi r3, r1, 0x44
    psq_l f1, 0x0(r3), 0, 0
    li r0, 0x1
    fmr f2, f3
    psq_st f1, 0x0(r30), 0, 0
    lfs f0, lbl_80882230
    fmr f1, f3
    stfs f2, 0xe8(r1)
    mr r3, r28
    stw r0, 0x34c(r28)
    li r4, 0x0
    lfs f2, lbl_80882238
    li r6, 0x1
    stfs f0, 0x24c(r28)
    li r7, 0x0
    li r8, 0x1
    lwz r5, 0x4(r31)
    stfs f3, 0x4c(r1)
    lwz r5, 0x490(r5)
    bl fn_80097C08
    lfs f1, lbl_80882230
    addi r4, r1, 0xe0
    stfs f1, 0x238(r28)
    li r5, 0x1
    lfs f2, lbl_80882264
    lwz r3, 0x4(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
lbl_fn_801A8880_0000106C:
    li r3, 0x0
lbl_fn_801A8880_00001070:
    lwz r0, 0x254(r1)
    psq_l f31, 0x248(r1), 0, 0
    lfd f31, 0x240(r1)
    psq_l f30, 0x238(r1), 0, 0
    lfd f30, 0x230(r1)
    lwz r31, 0x22c(r1)
    lwz r30, 0x228(r1)
    lwz r29, 0x224(r1)
    lwz r28, 0x220(r1)
    mtlr r0
    addi r1, r1, 0x250
    blr
}

asm void fn_801A8E68(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    lis r5, lbl_8073A950@ha
    li r7, 0x0
    stw r0, 0x84(r1)
    addi r5, r5, lbl_8073A950@l
    mr r6, r5
    stw r31, 0x7c(r1)
    mr r31, r3
    li r3, 0x8
    stw r30, 0x78(r1)
    stw r29, 0x74(r1)
    stw r28, 0x70(r1)
    mr r28, r4
    li r4, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_801A8E68_00001158
    lwz r6, 0x4(r28)
    lis r4, lbl_8077F950@ha
    stw r6, 0x4(r3)
    addi r4, r4, lbl_8077F950@l
    li r5, 0x66
    li r10, 0x0
    stw r4, 0x0(r3)
    li r0, 0x1
    lfs f0, lbl_80882230
    li r4, 0x0
    stw r5, 0x560(r6)
    li r5, 0x86
    lfs f1, lbl_80882234
    li r6, 0x0
    lwz r9, 0x4(r3)
    li r7, 0x0
    lfs f2, lbl_80882238
    li r8, 0x1
    stw r10, 0xf1c(r9)
    lwz r3, 0x4(r3)
    stw r0, 0x3fc(r3)
    addi r29, r3, 0xb0
    mr r3, r29
    stfs f0, 0x24c(r29)
    bl fn_80097C08
    lfs f0, lbl_80882230
    stfs f0, 0x238(r29)
lbl_fn_801A8E68_00001158:
    lis r3, lbl_8077F6AC@ha
    lwzu r5, lbl_8077F6AC@l(r3)
    lwz r6, 0x4(r28)
    li r0, 0x0
    lwz r4, 0x4(r3)
    lwz r3, 0x8(r3)
    stw r6, 0x8(r1)
    stw r0, 0x0(r31)
    lbz r0, lbl_8087F0E1
    stw r30, 0xc(r1)
    extsb. r0, r0
    stw r5, 0x1c(r1)
    stw r4, 0x20(r1)
    stw r3, 0x24(r1)
    stw r5, 0x10(r1)
    stw r4, 0x14(r1)
    stw r3, 0x18(r1)
    stw r5, 0x50(r1)
    stw r4, 0x54(r1)
    stw r3, 0x58(r1)
    stw r6, 0x5c(r1)
    stw r30, 0x60(r1)
    bne lbl_fn_801A8E68_000011DC
    lis r6, lbl_807C7C20@ha
    lis r4, fn_801A82D4@ha
    lis r3, fn_801A8304@ha
    li r0, 0x1
    addi r3, r3, fn_801A8304@l
    addi r5, r6, lbl_807C7C20@l
    addi r4, r4, fn_801A82D4@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C7C20@l(r6)
    stb r0, lbl_8087F0E1
lbl_fn_801A8E68_000011DC:
    lwz r7, 0x50(r1)
    addi r3, r1, 0x3c
    lwz r6, 0x54(r1)
    lwz r5, 0x58(r1)
    lwz r4, 0x5c(r1)
    lwz r0, 0x60(r1)
    stw r7, 0x3c(r1)
    stw r6, 0x40(r1)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_801A8E68_000012B0
    lwz r7, 0x3c(r1)
    li r3, 0x14
    lwz r6, 0x40(r1)
    lwz r5, 0x44(r1)
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r7, 0x28(r1)
    stw r6, 0x2c(r1)
    stw r5, 0x30(r1)
    stw r4, 0x34(r1)
    stw r0, 0x38(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_801A8E68_00001274
    lis r3, __files@ha
    lis r4, lbl_8077FB0C@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8077FB0C@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801A8E68_00001274:
    cmpwi r30, 0x0
    beq lbl_fn_801A8E68_000012A4
    lwz r0, 0x28(r1)
    stw r0, 0x0(r30)
    lwz r0, 0x2c(r1)
    stw r0, 0x4(r30)
    lwz r0, 0x30(r1)
    stw r0, 0x8(r30)
    lwz r0, 0x34(r1)
    stw r0, 0xc(r30)
    lwz r0, 0x38(r1)
    stw r0, 0x10(r30)
lbl_fn_801A8E68_000012A4:
    stw r30, 0x4(r31)
    li r0, 0x1
    b lbl_fn_801A8E68_000012B4
lbl_fn_801A8E68_000012B0:
    li r0, 0x0
lbl_fn_801A8E68_000012B4:
    cmpwi r0, 0x0
    beq lbl_fn_801A8E68_000012CC
    lis r3, lbl_807C7C20@ha
    addi r3, r3, lbl_807C7C20@l
    stw r3, 0x0(r31)
    b lbl_fn_801A8E68_000012D4
lbl_fn_801A8E68_000012CC:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_801A8E68_000012D4:
    lwz r0, 0x84(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    lwz r29, 0x74(r1)
    lwz r28, 0x70(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_801A90BC(void)
{
    nofralloc
    lis r6, lbl_8077F6F8@ha
    stw r4, 0x4(r3)
    addi r6, r6, lbl_8077F6F8@l
    li r5, 0x68
    stw r6, 0x0(r3)
    li r0, 0x0
    stw r5, 0x560(r4)
    lwz r4, 0x4(r3)
    stw r0, 0xf1c(r4)
    blr
}

asm void fn_801A90E4(void)
{
    nofralloc
    stwu r1, -0x3f0(r1)
    mflr r0
    stw r0, 0x3f4(r1)
    stfd f31, 0x3e0(r1)
    psq_st f31, 0x3e8(r1), 0, 0
    stfd f30, 0x3d0(r1)
    psq_st f30, 0x3d8(r1), 0, 0
    stfd f29, 0x3c0(r1)
    psq_st f29, 0x3c8(r1), 0, 0
    stw r31, 0x3bc(r1)
    mr r31, r3
    stw r30, 0x3b8(r1)
    stw r29, 0x3b4(r1)
    lwz r4, lbl_8087F098
    lwz r0, 0x48(r4)
    cmpwi r0, 0x0
    bne lbl_fn_801A90E4_00001368
    li r3, 0x1
    b lbl_fn_801A90E4_00001C98
lbl_fn_801A90E4_00001368:
    lwz r3, lbl_8087F8A0
    addi r5, r1, 0x1ac
    lfs f3, lbl_80882268
    addi r6, r1, 0x1a0
    lwz r29, 0x48(r3)
    addi r3, r1, 0x378
    li r4, 0x79
    lfs f0, 0x538(r29)
    psq_l f1, 0x528(r29), 0, 0
    fadds f0, f3, f0
    lfs f2, 0x530(r29)
    psq_st f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    fmr f1, f0
    stfs f2, 0x1b4(r1)
    stfs f2, 0x1a8(r1)
    bl fn_805F8E70
    lfs f0, lbl_80882234
    addi r4, r1, 0x194
    stfs f0, 0x14c(r1)
    addi r6, r1, 0x14c
    lfs f2, lbl_80882230
    mr r5, r4
    stfs f0, 0x150(r1)
    addi r3, r1, 0x378
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x154(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x19c(r1)
    bl fn_805F93C0
    lwz r4, 0x4(r31)
    addi r3, r1, 0x188
    lfs f3, 0x1a8(r1)
    lfs f0, 0x530(r4)
    lfs f5, 0x1a4(r1)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r4)
    lfs f0, 0x528(r4)
    lfs f3, 0x1a0(r1)
    fsubs f4, f5, f4
    stfs f6, 0x190(r1)
    fsubs f0, f3, f0
    stfs f4, 0x18c(r1)
    stfs f0, 0x188(r1)
    bl fn_805F9920
    lfs f0, lbl_8088226C
    fmr f30, f1
    lfs f3, lbl_80882270
    fcmpo cr0, f1, f0
    lfs f0, lbl_80882274
    lwz r4, 0x4(r31)
    cror eq, lt, eq
    bne lbl_fn_801A90E4_0000168C
    addi r30, r1, 0x188
    addi r3, r1, 0x128
    psq_l f1, 0x0(r30), 0, 0
    mr r4, r3
    lfs f2, 0x190(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x130(r1)
    bl fn_805F98D0
    lfs f3, 0x12c(r1)
    addi r3, r1, 0x140
    lfs f0, 0x128(r1)
    addi r29, r1, 0x17c
    fneg f8, f3
    lfs f3, 0x130(r1)
    fneg f6, f0
    lfs f5, lbl_80882240
    fneg f7, f3
    lwz r4, 0x4(r31)
    frsp f4, f8
    stfs f6, 0x134(r1)
    frsp f3, f6
    lfs f0, lbl_80882258
    frsp f6, f7
    stfs f8, 0x138(r1)
    fmuls f9, f3, f5
    stfs f7, 0x13c(r1)
    fmuls f3, f6, f5
    fmuls f4, f4, f5
    stfs f9, 0x140(r1)
    stfs f4, 0x144(r1)
    fmr f2, f3
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x6b8(r4), 0, 0
    stfs f2, 0x6c0(r4)
    lfs f2, 0x190(r1)
    stfs f3, 0x148(r1)
    fabs f4, f2
    psq_l f1, 0x0(r30), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    frsp f3, f4
    stfs f2, 0x184(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_801A90E4_0000150C
    lfs f3, 0x17c(r1)
    lfs f0, lbl_80882234
    fcmpo cr0, f3, f0
    ble lbl_fn_801A90E4_00001500
    lfs f0, lbl_8088225C
    b lbl_fn_801A90E4_00001504
lbl_fn_801A90E4_00001500:
    lfs f0, lbl_80882260
lbl_fn_801A90E4_00001504:
    stfs f0, 0x120(r1)
    b lbl_fn_801A90E4_00001520
lbl_fn_801A90E4_0000150C:
    frsp f2, f2
    lfs f1, 0x17c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x120(r1)
lbl_fn_801A90E4_00001520:
    lfs f0, 0x120(r1)
    addi r3, r1, 0x308
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80882234
    addi r4, r1, 0x110
    lfs f30, 0x310(r1)
    mr r5, r4
    lfs f31, 0x30c(r1)
    addi r3, r1, 0x338
    lfs f13, 0x308(r1)
    lfs f12, 0x320(r1)
    lfs f11, 0x31c(r1)
    lfs f10, 0x318(r1)
    lfs f9, 0x330(r1)
    lfs f8, 0x32c(r1)
    lfs f7, 0x328(r1)
    lfs f6, 0x334(r1)
    lfs f5, 0x324(r1)
    lfs f4, 0x314(r1)
    lfs f0, lbl_80882230
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x184(r1)
    stfs f3, 0x368(r1)
    stfs f3, 0x36c(r1)
    stfs f3, 0x370(r1)
    stfs f0, 0x374(r1)
    stfs f13, 0xe0(r1)
    stfs f31, 0xe4(r1)
    stfs f30, 0xe8(r1)
    stfs f13, 0x338(r1)
    stfs f31, 0x33c(r1)
    stfs f30, 0x340(r1)
    stfs f10, 0xec(r1)
    stfs f11, 0xf0(r1)
    stfs f12, 0xf4(r1)
    stfs f10, 0x348(r1)
    stfs f11, 0x34c(r1)
    stfs f12, 0x350(r1)
    stfs f7, 0xf8(r1)
    stfs f8, 0xfc(r1)
    stfs f9, 0x100(r1)
    stfs f7, 0x358(r1)
    stfs f8, 0x35c(r1)
    stfs f9, 0x360(r1)
    stfs f4, 0x104(r1)
    stfs f5, 0x108(r1)
    stfs f6, 0x10c(r1)
    stfs f4, 0x344(r1)
    stfs f5, 0x354(r1)
    stfs f6, 0x364(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x118(r1)
    bl fn_805F9750
    lfs f2, 0x118(r1)
    lfs f0, lbl_80882258
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_801A90E4_0000163C
    lfs f3, 0x114(r1)
    lfs f0, lbl_80882234
    fcmpo cr0, f3, f0
    ble lbl_fn_801A90E4_0000162C
    lfs f0, lbl_8088225C
    b lbl_fn_801A90E4_00001630
lbl_fn_801A90E4_0000162C:
    lfs f0, lbl_80882260
lbl_fn_801A90E4_00001630:
    fneg f0, f0
    stfs f0, 0x11c(r1)
    b lbl_fn_801A90E4_00001650
lbl_fn_801A90E4_0000163C:
    lfs f1, 0x114(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x11c(r1)
lbl_fn_801A90E4_00001650:
    addi r3, r1, 0x11c
    lfs f2, lbl_80882234
    psq_l f1, 0x0(r3), 0, 0
    addi r4, r1, 0x17c
    psq_st f1, 0x0(r29), 0, 0
    fmr f1, f2
    li r5, 0x0
    stfs f2, 0x184(r1)
    lwz r3, 0x4(r31)
    stfs f2, 0x124(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    b lbl_fn_801A90E4_00001C94
lbl_fn_801A90E4_0000168C:
    fcmpo cr0, f1, f3
    cror eq, lt, eq
    bne lbl_fn_801A90E4_00001870
    lfs f0, 0x570(r29)
    addi r3, r1, 0x188
    stfs f0, 0x570(r4)
    addi r29, r1, 0x170
    lfs f0, lbl_80882258
    lfs f2, 0x190(r1)
    psq_l f1, 0x0(r3), 0, 0
    fabs f3, f2
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x178(r1)
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_801A90E4_000016F0
    lfs f3, 0x170(r1)
    lfs f0, lbl_80882234
    fcmpo cr0, f3, f0
    ble lbl_fn_801A90E4_000016E4
    lfs f0, lbl_8088225C
    b lbl_fn_801A90E4_000016E8
lbl_fn_801A90E4_000016E4:
    lfs f0, lbl_80882260
lbl_fn_801A90E4_000016E8:
    stfs f0, 0xd8(r1)
    b lbl_fn_801A90E4_00001704
lbl_fn_801A90E4_000016F0:
    frsp f2, f2
    lfs f1, 0x170(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0xd8(r1)
lbl_fn_801A90E4_00001704:
    lfs f0, 0xd8(r1)
    addi r3, r1, 0x298
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80882234
    addi r4, r1, 0xc8
    lfs f31, 0x2a0(r1)
    mr r5, r4
    lfs f30, 0x29c(r1)
    addi r3, r1, 0x2c8
    lfs f13, 0x298(r1)
    lfs f12, 0x2b0(r1)
    lfs f11, 0x2ac(r1)
    lfs f10, 0x2a8(r1)
    lfs f9, 0x2c0(r1)
    lfs f8, 0x2bc(r1)
    lfs f7, 0x2b8(r1)
    lfs f6, 0x2c4(r1)
    lfs f5, 0x2b4(r1)
    lfs f4, 0x2a4(r1)
    lfs f0, lbl_80882230
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x178(r1)
    stfs f3, 0x2f8(r1)
    stfs f3, 0x2fc(r1)
    stfs f3, 0x300(r1)
    stfs f0, 0x304(r1)
    stfs f13, 0x98(r1)
    stfs f30, 0x9c(r1)
    stfs f31, 0xa0(r1)
    stfs f13, 0x2c8(r1)
    stfs f30, 0x2cc(r1)
    stfs f31, 0x2d0(r1)
    stfs f10, 0xa4(r1)
    stfs f11, 0xa8(r1)
    stfs f12, 0xac(r1)
    stfs f10, 0x2d8(r1)
    stfs f11, 0x2dc(r1)
    stfs f12, 0x2e0(r1)
    stfs f7, 0xb0(r1)
    stfs f8, 0xb4(r1)
    stfs f9, 0xb8(r1)
    stfs f7, 0x2e8(r1)
    stfs f8, 0x2ec(r1)
    stfs f9, 0x2f0(r1)
    stfs f4, 0xbc(r1)
    stfs f5, 0xc0(r1)
    stfs f6, 0xc4(r1)
    stfs f4, 0x2d4(r1)
    stfs f5, 0x2e4(r1)
    stfs f6, 0x2f4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0xd0(r1)
    bl fn_805F9750
    lfs f2, 0xd0(r1)
    lfs f0, lbl_80882258
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_801A90E4_00001820
    lfs f3, 0xcc(r1)
    lfs f0, lbl_80882234
    fcmpo cr0, f3, f0
    ble lbl_fn_801A90E4_00001810
    lfs f0, lbl_8088225C
    b lbl_fn_801A90E4_00001814
lbl_fn_801A90E4_00001810:
    lfs f0, lbl_80882260
lbl_fn_801A90E4_00001814:
    fneg f0, f0
    stfs f0, 0xd4(r1)
    b lbl_fn_801A90E4_00001834
lbl_fn_801A90E4_00001820:
    lfs f1, 0xcc(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0xd4(r1)
lbl_fn_801A90E4_00001834:
    addi r3, r1, 0xd4
    lfs f2, lbl_80882234
    psq_l f1, 0x0(r3), 0, 0
    addi r4, r1, 0x170
    psq_st f1, 0x0(r29), 0, 0
    fmr f1, f2
    li r5, 0x0
    stfs f2, 0x178(r1)
    lwz r3, 0x4(r31)
    stfs f2, 0xdc(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    b lbl_fn_801A90E4_00001C94
lbl_fn_801A90E4_00001870:
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_801A90E4_00001A88
    bl fn_8068B100
    frsp f5, f1
    lfs f0, lbl_80882278
    lfs f4, lbl_8088227C
    lfs f3, lbl_80882230
    fsubs f5, f5, f0
    lfs f0, lbl_80882280
    fdivs f4, f5, f4
    fadds f31, f3, f4
    fcmpo cr0, f31, f0
    bge lbl_fn_801A90E4_000018AC
    b lbl_fn_801A90E4_000018B0
lbl_fn_801A90E4_000018AC:
    fmr f31, f0
lbl_fn_801A90E4_000018B0:
    lfs f2, 0x190(r1)
    addi r3, r1, 0x188
    lfs f0, lbl_80882258
    addi r29, r1, 0x164
    fabs f3, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    frsp f3, f3
    stfs f2, 0x16c(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_801A90E4_00001900
    lfs f3, 0x164(r1)
    lfs f0, lbl_80882234
    fcmpo cr0, f3, f0
    ble lbl_fn_801A90E4_000018F4
    lfs f0, lbl_8088225C
    b lbl_fn_801A90E4_000018F8
lbl_fn_801A90E4_000018F4:
    lfs f0, lbl_80882260
lbl_fn_801A90E4_000018F8:
    stfs f0, 0x90(r1)
    b lbl_fn_801A90E4_00001914
lbl_fn_801A90E4_00001900:
    frsp f2, f2
    lfs f1, 0x164(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x90(r1)
lbl_fn_801A90E4_00001914:
    lfs f0, 0x90(r1)
    addi r3, r1, 0x228
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80882234
    addi r4, r1, 0x80
    lfs f29, 0x230(r1)
    mr r5, r4
    lfs f30, 0x22c(r1)
    addi r3, r1, 0x258
    lfs f13, 0x228(r1)
    lfs f12, 0x240(r1)
    lfs f11, 0x23c(r1)
    lfs f10, 0x238(r1)
    lfs f9, 0x250(r1)
    lfs f8, 0x24c(r1)
    lfs f7, 0x248(r1)
    lfs f6, 0x254(r1)
    lfs f5, 0x244(r1)
    lfs f4, 0x234(r1)
    lfs f0, lbl_80882230
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x16c(r1)
    stfs f3, 0x288(r1)
    stfs f3, 0x28c(r1)
    stfs f3, 0x290(r1)
    stfs f0, 0x294(r1)
    stfs f13, 0x50(r1)
    stfs f30, 0x54(r1)
    stfs f29, 0x58(r1)
    stfs f13, 0x258(r1)
    stfs f30, 0x25c(r1)
    stfs f29, 0x260(r1)
    stfs f10, 0x5c(r1)
    stfs f11, 0x60(r1)
    stfs f12, 0x64(r1)
    stfs f10, 0x268(r1)
    stfs f11, 0x26c(r1)
    stfs f12, 0x270(r1)
    stfs f7, 0x68(r1)
    stfs f8, 0x6c(r1)
    stfs f9, 0x70(r1)
    stfs f7, 0x278(r1)
    stfs f8, 0x27c(r1)
    stfs f9, 0x280(r1)
    stfs f4, 0x74(r1)
    stfs f5, 0x78(r1)
    stfs f6, 0x7c(r1)
    stfs f4, 0x264(r1)
    stfs f5, 0x274(r1)
    stfs f6, 0x284(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x88(r1)
    bl fn_805F9750
    lfs f2, 0x88(r1)
    lfs f0, lbl_80882258
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_801A90E4_00001A30
    lfs f3, 0x84(r1)
    lfs f0, lbl_80882234
    fcmpo cr0, f3, f0
    ble lbl_fn_801A90E4_00001A20
    lfs f0, lbl_8088225C
    b lbl_fn_801A90E4_00001A24
lbl_fn_801A90E4_00001A20:
    lfs f0, lbl_80882260
lbl_fn_801A90E4_00001A24:
    fneg f0, f0
    stfs f0, 0x8c(r1)
    b lbl_fn_801A90E4_00001A44
lbl_fn_801A90E4_00001A30:
    lfs f1, 0x84(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x8c(r1)
lbl_fn_801A90E4_00001A44:
    lfs f0, lbl_80882234
    addi r3, r1, 0x8c
    psq_l f1, 0x0(r3), 0, 0
    addi r4, r1, 0x164
    fmr f2, f0
    psq_st f1, 0x0(r29), 0, 0
    lfs f1, lbl_80882230
    li r5, 0x0
    stfs f2, 0x16c(r1)
    fmr f2, f31
    lwz r3, 0x4(r31)
    stfs f0, 0x94(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    b lbl_fn_801A90E4_00001C94
lbl_fn_801A90E4_00001A88:
    fmr f1, f0
    bl fn_8068B100
    frsp f29, f1
    fmr f1, f30
    bl fn_8068B100
    frsp f0, f1
    lfs f3, 0x570(r29)
    fdivs f4, f0, f29
    fcmpo cr0, f4, f3
    ble lbl_fn_801A90E4_00001AB4
    b lbl_fn_801A90E4_00001AB8
lbl_fn_801A90E4_00001AB4:
    fmr f4, f3
lbl_fn_801A90E4_00001AB8:
    lwz r4, 0x4(r31)
    addi r3, r1, 0x188
    lfs f0, lbl_80882258
    addi r29, r1, 0x158
    stfs f4, 0x570(r4)
    lfs f2, 0x190(r1)
    psq_l f1, 0x0(r3), 0, 0
    fabs f3, f2
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x160(r1)
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_801A90E4_00001B10
    lfs f3, 0x158(r1)
    lfs f0, lbl_80882234
    fcmpo cr0, f3, f0
    ble lbl_fn_801A90E4_00001B04
    lfs f0, lbl_8088225C
    b lbl_fn_801A90E4_00001B08
lbl_fn_801A90E4_00001B04:
    lfs f0, lbl_80882260
lbl_fn_801A90E4_00001B08:
    stfs f0, 0x48(r1)
    b lbl_fn_801A90E4_00001B24
lbl_fn_801A90E4_00001B10:
    frsp f2, f2
    lfs f1, 0x158(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_801A90E4_00001B24:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x1b8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80882234
    addi r4, r1, 0x38
    lfs f30, 0x1c0(r1)
    mr r5, r4
    lfs f29, 0x1bc(r1)
    addi r3, r1, 0x1e8
    lfs f13, 0x1b8(r1)
    lfs f12, 0x1d0(r1)
    lfs f11, 0x1cc(r1)
    lfs f10, 0x1c8(r1)
    lfs f9, 0x1e0(r1)
    lfs f8, 0x1dc(r1)
    lfs f7, 0x1d8(r1)
    lfs f6, 0x1e4(r1)
    lfs f5, 0x1d4(r1)
    lfs f4, 0x1c4(r1)
    lfs f0, lbl_80882230
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x160(r1)
    stfs f3, 0x218(r1)
    stfs f3, 0x21c(r1)
    stfs f3, 0x220(r1)
    stfs f0, 0x224(r1)
    stfs f13, 0x8(r1)
    stfs f29, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f13, 0x1e8(r1)
    stfs f29, 0x1ec(r1)
    stfs f30, 0x1f0(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0x1f8(r1)
    stfs f11, 0x1fc(r1)
    stfs f12, 0x200(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0x208(r1)
    stfs f8, 0x20c(r1)
    stfs f9, 0x210(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0x1f4(r1)
    stfs f5, 0x204(r1)
    stfs f6, 0x214(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80882258
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_801A90E4_00001C40
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80882234
    fcmpo cr0, f3, f0
    ble lbl_fn_801A90E4_00001C30
    lfs f0, lbl_8088225C
    b lbl_fn_801A90E4_00001C34
lbl_fn_801A90E4_00001C30:
    lfs f0, lbl_80882260
lbl_fn_801A90E4_00001C34:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_801A90E4_00001C54
lbl_fn_801A90E4_00001C40:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_801A90E4_00001C54:
    lfs f0, lbl_80882234
    addi r3, r1, 0x44
    psq_l f1, 0x0(r3), 0, 0
    addi r4, r1, 0x158
    fmr f2, f0
    psq_st f1, 0x0(r29), 0, 0
    fmr f1, f0
    li r5, 0x0
    stfs f2, 0x160(r1)
    lfs f2, lbl_80882230
    lwz r3, 0x4(r31)
    stfs f0, 0x4c(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
lbl_fn_801A90E4_00001C94:
    li r3, 0x0
lbl_fn_801A90E4_00001C98:
    lwz r0, 0x3f4(r1)
    psq_l f31, 0x3e8(r1), 0, 0
    lfd f31, 0x3e0(r1)
    psq_l f30, 0x3d8(r1), 0, 0
    lfd f30, 0x3d0(r1)
    psq_l f29, 0x3c8(r1), 0, 0
    lfd f29, 0x3c0(r1)
    lwz r31, 0x3bc(r1)
    lwz r30, 0x3b8(r1)
    lwz r29, 0x3b4(r1)
    mtlr r0
    addi r1, r1, 0x3f0
    blr
}
