#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_23(void);
extern void _restgpr_27(void);
extern void _savegpr_23(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_8005B9CC(void);
extern void fn_8005BBF8(void);
extern void fn_8005BCE8(void);
extern void fn_80063D3C(void);
extern void fn_800641CC(void);
extern void fn_80084320(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_8008771C(void);
extern void fn_80087E9C(void);
extern void fn_80097C08(void);
extern void fn_80097CCC(void);
extern void fn_800D5808(void);
extern void fn_800DC12C(void);
extern void fn_800DC288(void);
extern void fn_8047202C(void);
extern void fn_805F93C0(void);
extern void fn_805F98D0(void);
extern void fn_80615700(void);
extern void fn_80615720(void);
extern void fn_806158C0(void);
extern void fn_80615990(void);
extern void fn_806159A0(void);
extern void fn_80615AD0(void);
extern void fn_80682428(void);
extern void fn_80682544(void);
extern void fn_8068B100(void);
extern void fn_80695720(void);
extern void fn_80695D84(void);
extern void strchr(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_807318A0[];
extern u8 lbl_807318F0[];
extern u8 lbl_807318F8[];
extern u8 lbl_80731900[];
extern u8 lbl_807774B8[];
extern u8 lbl_807774D8[];
extern u8 lbl_80777D80[];

/* Small data declarations */
extern u32 lbl_8087D710;
extern u32 lbl_8087D760;
extern u32 lbl_8087D764;
extern u32 lbl_8087D77C;
extern u32 lbl_8087D780;
extern u32 lbl_8087D784;
extern u32 lbl_8087D788;
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EEF8;
extern u32 lbl_80880B00;
extern u32 lbl_80880B04;
extern u32 lbl_80880B08;
extern u32 lbl_80880B0C;
extern u32 lbl_80880B10;
extern u32 lbl_80880B14;
extern u32 lbl_80880B18;
extern u32 lbl_80880B1C;
extern u32 lbl_80880B20;
extern u32 lbl_80880B24;
extern u32 lbl_80880B28;
extern u32 lbl_80880B2C;
extern u32 lbl_80880B30;
extern u32 lbl_80880B34;
extern u32 lbl_80880B38;
extern u32 lbl_80880B3C;
extern u32 lbl_80880B40;
extern u32 lbl_80880B44;
extern u32 lbl_80880B48;
extern u32 lbl_80880B4C;
extern u32 lbl_80880B50;
extern u32 lbl_80880B54;
extern u32 lbl_80880B58;
extern u32 lbl_80880B5C;
extern u32 lbl_80880B60;
extern u32 lbl_80880B64;
extern u32 lbl_80880B68;
extern u32 lbl_80880B6C;
extern u32 lbl_80880B88;
extern u32 lbl_80880B8C;
extern u32 lbl_80880B90;
extern u32 lbl_80880B94;
extern u32 lbl_80880B98;

/* Function declarations */
void fn_80079038(void);
void fn_80079040(void);
void fn_80079044(void);
void fn_80079090(void);
void fn_800790D0(void);
void fn_800791B4(void);
void fn_80079210(void);
void fn_80079280(void);
void fn_800795DC(void);
void fn_800798D8(void);
void fn_80079994(void);
void fn_80079BC8(void);
void fn_80079ECC(void);
void fn_80079EFC(void);
void fn_8007A100(void);
void fn_8007A154(void);
void fn_8007A36C(void);
void fn_8007A41C(void);
void fn_8007A4CC(void);
void fn_8007A530(void);
void fn_8007A748(void);
void fn_8007A75C(void);
void fn_8007A7BC(void);
void fn_8007A994(void);
void fn_8007AA30(void);
void fn_8007AA64(void);
void fn_8007AB38(void);

asm void fn_80079038(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_80079040(void)
{
    nofralloc
    blr
}

asm void fn_80079044(void)
{
    nofralloc
    lfs f1, lbl_80880B00
    li r4, 0x0
    lfs f0, lbl_80880B04
    li r0, 0x4
    stw r4, 0x0(r3)
    stw r0, 0x4(r3)
    stfs f1, 0x8(r3)
    stfs f1, 0xc(r3)
    stfs f1, 0x10(r3)
    stfs f1, 0x14(r3)
    stfs f0, 0x18(r3)
    stfs f1, 0x1c(r3)
    stw r4, 0x20(r3)
    stfs f1, 0x24(r3)
    stfs f1, 0x34(r3)
    stfs f1, 0x38(r3)
    stfs f1, 0x3c(r3)
    stfs f1, 0x40(r3)
    blr
}

asm void fn_80079090(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lfs f1, lbl_80880B00
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r4, 0x0(r3)
    lwz r0, 0x14(r4)
    stw r0, 0x4(r3)
    bl fn_80079280
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800790D0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lfs f2, 0x8(r4)
    stw r0, 0x34(r1)
    li r0, 0x1
    psq_l f1, 0x0(r4), 0, 0
    stw r31, 0x2c(r1)
    addi r31, r1, 0x14
    stw r30, 0x28(r1)
    mr r30, r5
    stw r29, 0x24(r1)
    mr r29, r4
    mr r4, r31
    stw r28, 0x20(r1)
    mr r28, r3
    stw r0, 0x4(r3)
    mr r3, r31
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x1c(r1)
    bl fn_805F98D0
    lfs f5, 0x8(r29)
    addi r3, r1, 0x8
    lfs f4, lbl_80880B08
    li r0, 0x0
    lfs f3, 0x4(r29)
    fmuls f6, f5, f4
    lfs f0, 0x0(r29)
    fmuls f7, f3, f4
    psq_l f1, 0x0(r31), 0, 0
    fmuls f8, f0, f4
    lfs f2, 0x1c(r1)
    stfs f2, 0x1c(r28)
    fmr f2, f6
    lfs f5, 0x0(r30)
    lfs f4, 0x4(r30)
    lfs f3, 0x8(r30)
    lfs f0, 0xc(r30)
    stfs f8, 0x8(r1)
    stfs f7, 0xc(r1)
    psq_st f1, 0x14(r28), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x8(r28), 0, 0
    stfs f2, 0x10(r28)
    stfs f5, 0x34(r28)
    stfs f4, 0x38(r28)
    stfs f3, 0x3c(r28)
    stfs f0, 0x40(r28)
    stw r0, 0x20(r28)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    lwz r0, 0x34(r1)
    stfs f6, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_800791B4(void)
{
    nofralloc
    fmr f8, f1
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    li r4, 0x3
    lfs f7, lbl_80880B0C
    li r0, 0x2
    frsp f6, f8
    lfs f5, 0x0(r5)
    lfs f4, 0x4(r5)
    lfs f3, 0x8(r5)
    lfs f0, 0xc(r5)
    stw r4, 0x4(r3)
    psq_st f1, 0x8(r3), 0, 0
    stfs f2, 0x10(r3)
    stfs f8, 0x24(r3)
    stfs f7, 0x2c(r3)
    stfs f6, 0x28(r3)
    stfs f5, 0x34(r3)
    stfs f4, 0x38(r3)
    stfs f3, 0x3c(r3)
    stfs f0, 0x40(r3)
    stw r0, 0x20(r3)
    blr
}

asm void fn_80079210(void)
{
    nofralloc
    fmr f9, f1
    li r0, 0x2
    fmr f8, f2
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    frsp f6, f9
    psq_st f1, 0x8(r3), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0x10(r3)
    lfs f2, 0x8(r5)
    lfs f7, lbl_80880B0C
    lfs f5, 0x0(r6)
    lfs f4, 0x4(r6)
    lfs f3, 0x8(r6)
    lfs f0, 0xc(r6)
    stw r0, 0x4(r3)
    psq_st f1, 0x14(r3), 0, 0
    stfs f2, 0x1c(r3)
    stfs f9, 0x24(r3)
    stfs f7, 0x2c(r3)
    stfs f6, 0x28(r3)
    stfs f8, 0x30(r3)
    stfs f5, 0x34(r3)
    stfs f4, 0x38(r3)
    stfs f3, 0x3c(r3)
    stfs f0, 0x40(r3)
    stw r0, 0x20(r3)
    blr
}

asm void fn_80079280(void)
{
    nofralloc
    stwu r1, -0xe0(r1)
    mflr r0
    stw r0, 0xe4(r1)
    stfd f31, 0xd0(r1)
    psq_st f31, 0xd8(r1), 0, 0
    fmr f31, f1
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
    stw r31, 0x7c(r1)
    mr r31, r3
    stw r30, 0x78(r1)
    stw r29, 0x74(r1)
    lwz r4, 0x0(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80079280_00000558
    li r30, 0x0
    sth r30, 0x20(r1)
    addi r3, r4, 0x28
    addi r4, r1, 0x20
    bl fn_8047202C
    lwz r3, 0x0(r31)
    fmr f26, f1
    fmr f1, f31
    addi r4, r1, 0x1e
    sth r30, 0x1e(r1)
    addi r3, r3, 0x34
    bl fn_8047202C
    lwz r3, 0x0(r31)
    fmr f27, f1
    fmr f1, f31
    addi r4, r1, 0x1c
    sth r30, 0x1c(r1)
    addi r3, r3, 0x40
    bl fn_8047202C
    lwz r3, 0x0(r31)
    fmr f28, f1
    fmr f1, f31
    addi r4, r1, 0x1a
    sth r30, 0x1a(r1)
    addi r3, r3, 0x4c
    bl fn_8047202C
    lwz r3, 0x0(r31)
    fmr f29, f1
    fmr f1, f31
    addi r4, r1, 0x18
    sth r30, 0x18(r1)
    addi r3, r3, 0x58
    bl fn_8047202C
    lwz r3, 0x0(r31)
    fmr f30, f1
    fmr f1, f31
    addi r4, r1, 0x16
    sth r30, 0x16(r1)
    addi r3, r3, 0x64
    bl fn_8047202C
    frsp f3, f1
    addi r29, r1, 0x4c
    frsp f0, f28
    addi r5, r1, 0x40
    frsp f5, f30
    stfs f1, 0x60(r1)
    fsubs f2, f3, f0
    stfs f26, 0x64(r1)
    frsp f4, f27
    mr r3, r29
    frsp f3, f29
    stfs f27, 0x68(r1)
    frsp f0, f26
    stfs f28, 0x6c(r1)
    fsubs f4, f5, f4
    mr r4, r29
    stfs f29, 0x58(r1)
    fsubs f0, f3, f0
    stfs f4, 0x44(r1)
    stfs f0, 0x40(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f30, 0x5c(r1)
    stfs f2, 0x48(r1)
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x54(r1)
    bl fn_805F98D0
    addi r3, r1, 0x64
    frsp f2, f28
    psq_l f1, 0x0(r3), 0, 0
    addi r4, r1, 0x14
    psq_st f1, 0x8(r31), 0, 0
    lwz r3, 0x0(r31)
    stfs f2, 0x10(r31)
    addi r3, r3, 0x70
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x54(r1)
    stfs f2, 0x1c(r31)
    psq_st f1, 0x14(r31), 0, 0
    fmr f1, f31
    sth r30, 0x14(r1)
    bl fn_8047202C
    lfs f0, lbl_80880B10
    addi r4, r1, 0x12
    lwz r3, 0x0(r31)
    fdivs f26, f1, f0
    sth r30, 0x12(r1)
    addi r3, r3, 0x7c
    fmr f1, f31
    bl fn_8047202C
    lfs f0, lbl_80880B10
    addi r4, r1, 0x10
    lwz r3, 0x0(r31)
    fdivs f27, f1, f0
    sth r30, 0x10(r1)
    addi r3, r3, 0x88
    fmr f1, f31
    bl fn_8047202C
    lfs f0, lbl_80880B10
    addi r4, r1, 0xe
    lwz r3, 0x0(r31)
    fdivs f28, f1, f0
    sth r30, 0xe(r1)
    addi r3, r3, 0x94
    fmr f1, f31
    bl fn_8047202C
    lfs f0, lbl_80880B10
    lwz r0, 0x4(r31)
    fdivs f0, f1, f0
    stfs f26, 0x30(r1)
    cmpwi r0, 0x2
    stfs f27, 0x34(r1)
    stfs f28, 0x38(r1)
    stfs f26, 0x34(r31)
    stfs f0, 0x3c(r1)
    stfs f27, 0x38(r31)
    stfs f28, 0x3c(r31)
    stfs f0, 0x40(r31)
    bne lbl_fn_80079280_00000498
    lwz r3, 0x0(r31)
    fmr f1, f31
    addi r4, r1, 0xc
    sth r30, 0xc(r1)
    addi r3, r3, 0xd0
    bl fn_8047202C
    stfs f1, 0x30(r31)
lbl_fn_80079280_00000498:
    lwz r0, 0x4(r31)
    cmpwi r0, 0x2
    beq lbl_fn_80079280_000004AC
    cmpwi r0, 0x3
    bne lbl_fn_80079280_00000558
lbl_fn_80079280_000004AC:
    lwz r3, 0x0(r31)
    li r0, 0x2
    stw r0, 0x20(r31)
    fmr f1, f31
    li r30, 0x0
    addi r3, r3, 0xdc
    sth r30, 0xa(r1)
    addi r4, r1, 0xa
    bl fn_8047202C
    stfs f1, 0x28(r31)
    fmr f1, f31
    lwz r3, 0x0(r31)
    addi r4, r1, 0x8
    sth r30, 0x8(r1)
    addi r3, r3, 0xe8
    bl fn_8047202C
    stfs f1, 0x2c(r31)
    mr r3, r31
    addi r4, r1, 0x24
    addi r5, r1, 0x28
    addi r6, r1, 0x2c
    bl fn_800798D8
    lfs f5, lbl_80880B0C
    lfs f0, 0x2c(r1)
    lfs f3, 0x28(r1)
    fmuls f6, f5, f0
    lfs f4, lbl_80880B14
    fmuls f27, f5, f3
    lfs f0, lbl_80880B1C
    lfs f3, lbl_80880B18
    fmuls f4, f4, f6
    fmuls f26, f0, f6
    fmuls f5, f27, f27
    fmuls f0, f4, f3
    fsubs f1, f5, f0
    bl fn_8068B100
    frsp f3, f1
    fneg f0, f27
    fadds f0, f0, f3
    fdivs f0, f0, f26
    fabs f0, f0
    frsp f0, f0
    stfs f0, 0x24(r31)
lbl_fn_80079280_00000558:
    lwz r0, 0xe4(r1)
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
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    lwz r29, 0x74(r1)
    mtlr r0
    addi r1, r1, 0xe0
    blr
}

asm void fn_800795DC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    lwz r0, 0x4(r3)
    cmpwi r0, 0x3
    beq lbl_fn_800795DC_000005DC
    cmpwi r0, 0x2
    beq lbl_fn_800795DC_00000728
    b lbl_fn_800795DC_00000880
lbl_fn_800795DC_000005DC:
    lfs f2, 0x34(r3)
    lfs f0, lbl_80880B04
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_800795DC_000005F8
    li r30, 0xff
    b lbl_fn_800795DC_00000624
lbl_fn_800795DC_000005F8:
    lfs f0, lbl_80880B00
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_800795DC_00000610
    li r3, 0x0
    b lbl_fn_800795DC_00000620
lbl_fn_800795DC_00000610:
    lfs f1, lbl_80880B10
    lfs f0, lbl_80880B20
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_800795DC_00000620:
    mr r30, r3
lbl_fn_800795DC_00000624:
    lfs f2, 0x38(r31)
    lfs f0, lbl_80880B04
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_800795DC_00000640
    li r29, 0xff
    b lbl_fn_800795DC_0000066C
lbl_fn_800795DC_00000640:
    lfs f0, lbl_80880B00
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_800795DC_00000658
    li r3, 0x0
    b lbl_fn_800795DC_00000668
lbl_fn_800795DC_00000658:
    lfs f1, lbl_80880B10
    lfs f0, lbl_80880B20
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_800795DC_00000668:
    mr r29, r3
lbl_fn_800795DC_0000066C:
    lfs f2, 0x3c(r31)
    lfs f0, lbl_80880B04
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_800795DC_00000688
    li r28, 0xff
    b lbl_fn_800795DC_000006B4
lbl_fn_800795DC_00000688:
    lfs f0, lbl_80880B00
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_800795DC_000006A0
    li r3, 0x0
    b lbl_fn_800795DC_000006B0
lbl_fn_800795DC_000006A0:
    lfs f1, lbl_80880B10
    lfs f0, lbl_80880B20
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_800795DC_000006B0:
    mr r28, r3
lbl_fn_800795DC_000006B4:
    lfs f2, 0x40(r31)
    lfs f0, lbl_80880B04
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_800795DC_000006D0
    li r3, 0xff
    b lbl_fn_800795DC_000006F8
lbl_fn_800795DC_000006D0:
    lfs f0, lbl_80880B00
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_800795DC_000006E8
    li r3, 0x0
    b lbl_fn_800795DC_000006F8
lbl_fn_800795DC_000006E8:
    lfs f1, lbl_80880B10
    lfs f0, lbl_80880B20
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_800795DC_000006F8:
    slwi r4, r29, 8
    slwi r3, r3, 24
    slwi r0, r30, 16
    lfs f1, 0x24(r31)
    or r5, r28, r4
    lfs f2, lbl_80880B00
    or r0, r3, r0
    lwz r3, lbl_8087EEB0
    addi r4, r31, 0x8
    or r5, r5, r0
    bl fn_80063D3C
    b lbl_fn_800795DC_00000880
lbl_fn_800795DC_00000728:
    lfs f2, 0x34(r3)
    lfs f0, lbl_80880B04
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_800795DC_00000744
    li r28, 0xff
    b lbl_fn_800795DC_00000770
lbl_fn_800795DC_00000744:
    lfs f0, lbl_80880B00
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_800795DC_0000075C
    li r3, 0x0
    b lbl_fn_800795DC_0000076C
lbl_fn_800795DC_0000075C:
    lfs f1, lbl_80880B10
    lfs f0, lbl_80880B20
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_800795DC_0000076C:
    mr r28, r3
lbl_fn_800795DC_00000770:
    lfs f2, 0x38(r31)
    lfs f0, lbl_80880B04
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_800795DC_0000078C
    li r29, 0xff
    b lbl_fn_800795DC_000007B8
lbl_fn_800795DC_0000078C:
    lfs f0, lbl_80880B00
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_800795DC_000007A4
    li r3, 0x0
    b lbl_fn_800795DC_000007B4
lbl_fn_800795DC_000007A4:
    lfs f1, lbl_80880B10
    lfs f0, lbl_80880B20
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_800795DC_000007B4:
    mr r29, r3
lbl_fn_800795DC_000007B8:
    lfs f2, 0x3c(r31)
    lfs f0, lbl_80880B04
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_800795DC_000007D4
    li r30, 0xff
    b lbl_fn_800795DC_00000800
lbl_fn_800795DC_000007D4:
    lfs f0, lbl_80880B00
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_800795DC_000007EC
    li r3, 0x0
    b lbl_fn_800795DC_000007FC
lbl_fn_800795DC_000007EC:
    lfs f1, lbl_80880B10
    lfs f0, lbl_80880B20
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_800795DC_000007FC:
    mr r30, r3
lbl_fn_800795DC_00000800:
    lfs f2, 0x40(r31)
    lfs f0, lbl_80880B04
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_800795DC_0000081C
    li r3, 0xff
    b lbl_fn_800795DC_00000844
lbl_fn_800795DC_0000081C:
    lfs f0, lbl_80880B00
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_800795DC_00000834
    li r3, 0x0
    b lbl_fn_800795DC_00000844
lbl_fn_800795DC_00000834:
    lfs f1, lbl_80880B10
    lfs f0, lbl_80880B20
    fmadds f1, f1, f2, f0
    bl fn_80695D84
lbl_fn_800795DC_00000844:
    lfs f1, 0x24(r31)
    slwi r4, r29, 8
    lfs f0, lbl_80880B1C
    or r6, r30, r4
    slwi r3, r3, 24
    slwi r0, r28, 16
    or r0, r3, r0
    fmuls f1, f0, f1
    lwz r3, lbl_8087EEB0
    addi r4, r31, 0x8
    lfs f2, 0x30(r31)
    addi r5, r31, 0x14
    lfs f3, lbl_80880B00
    or r6, r6, r0
    bl fn_800641CC
lbl_fn_800795DC_00000880:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800798D8(void)
{
    nofralloc
    lwz r0, 0x20(r3)
    lfs f4, 0x28(r3)
    cmpwi r0, 0x1
    lfs f3, 0x2c(r3)
    beq lbl_fn_800798D8_000008C8
    cmpwi r0, 0x2
    beq lbl_fn_800798D8_000008EC
    cmpwi r0, 0x3
    beq lbl_fn_800798D8_0000091C
    b lbl_fn_800798D8_00000944
lbl_fn_800798D8_000008C8:
    lfs f0, lbl_80880B04
    fmuls f1, f3, f4
    stfs f0, 0x0(r4)
    fsubs f2, f0, f3
    lfs f0, lbl_80880B00
    fdivs f1, f2, f1
    stfs f1, 0x0(r5)
    stfs f0, 0x0(r6)
    blr
lbl_fn_800798D8_000008EC:
    lfs f0, lbl_80880B04
    fmuls f1, f3, f4
    lfs f2, lbl_80880B20
    fsubs f3, f0, f3
    stfs f0, 0x0(r4)
    fmuls f0, f4, f1
    fmuls f2, f2, f3
    fdivs f1, f2, f1
    stfs f1, 0x0(r5)
    fdivs f0, f2, f0
    stfs f0, 0x0(r6)
    blr
lbl_fn_800798D8_0000091C:
    fmuls f0, f3, f4
    lfs f1, lbl_80880B04
    stfs f1, 0x0(r4)
    lfs f2, lbl_80880B00
    fsubs f1, f1, f3
    fmuls f0, f4, f0
    stfs f2, 0x0(r5)
    fdivs f0, f1, f0
    stfs f0, 0x0(r6)
    blr
lbl_fn_800798D8_00000944:
    lfs f0, lbl_80880B04
    stfs f0, 0x0(r4)
    lfs f0, lbl_80880B00
    stfs f0, 0x0(r5)
    stfs f0, 0x0(r6)
    blr
}

asm void fn_80079994(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    lfs f6, lbl_80880B10
    lfs f0, 0x34(r3)
    lfs f4, 0x38(r3)
    fmuls f5, f6, f0
    lfs f3, 0x3c(r3)
    lfs f0, 0x40(r3)
    fmuls f4, f6, f4
    fmuls f3, f6, f3
    stw r0, 0x74(r1)
    fmuls f0, f6, f0
    stw r31, 0x6c(r1)
    fctiwz f5, f5
    mr r31, r5
    fctiwz f4, f4
    stw r30, 0x68(r1)
    fctiwz f3, f3
    stfd f5, 0x40(r1)
    fctiwz f0, f0
    mr r30, r4
    stfd f4, 0x48(r1)
    addi r4, r1, 0xc
    stfd f3, 0x50(r1)
    lwz r7, 0x44(r1)
    stfd f0, 0x58(r1)
    lwz r6, 0x4c(r1)
    lwz r5, 0x54(r1)
    lwz r0, 0x5c(r1)
    stw r29, 0x64(r1)
    mr r29, r3
    mr r3, r30
    stb r7, 0x8(r1)
    stb r6, 0x9(r1)
    stb r5, 0xa(r1)
    stb r0, 0xb(r1)
    lwz r0, 0x8(r1)
    stw r0, 0xc(r1)
    bl fn_80615AD0
    lwz r0, 0x4(r29)
    addi r3, r1, 0x34
    psq_l f1, 0x8(r29), 0, 0
    lfs f2, 0x10(r29)
    cmpwi r0, 0x1
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x3c(r1)
    bne lbl_fn_80079994_00000A74
    lfs f0, 0x1c(r29)
    addi r4, r1, 0x1c
    lfs f3, 0x18(r29)
    fneg f5, f0
    lfs f0, 0x14(r29)
    fneg f6, f3
    lfs f4, lbl_80880B28
    fneg f0, f0
    stfs f5, 0x18(r1)
    stfs f0, 0x10(r1)
    frsp f3, f6
    frsp f0, f0
    frsp f5, f5
    stfs f6, 0x14(r1)
    fmuls f3, f3, f4
    fmuls f0, f0, f4
    fmuls f2, f5, f4
    stfs f3, 0x20(r1)
    stfs f0, 0x1c(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0x24(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x3c(r1)
lbl_fn_80079994_00000A74:
    addi r4, r1, 0x34
    mr r3, r31
    mr r5, r4
    bl fn_805F93C0
    lfs f1, 0x34(r1)
    mr r3, r30
    lfs f2, 0x38(r1)
    lfs f3, 0x3c(r1)
    bl fn_80615990
    lwz r0, 0x4(r29)
    cmpwi r0, 0x3
    beq lbl_fn_80079994_00000AB8
    cmpwi r0, 0x2
    beq lbl_fn_80079994_00000AF0
    cmpwi r0, 0x1
    beq lbl_fn_80079994_00000B40
    b lbl_fn_80079994_00000B74
lbl_fn_80079994_00000AB8:
    lfs f2, lbl_80880B00
    mr r3, r30
    lfs f1, lbl_80880B04
    fmr f3, f2
    fmr f4, f2
    fmr f5, f2
    fmr f6, f2
    bl fn_80615700
    lfs f1, 0x24(r29)
    mr r3, r30
    lfs f2, lbl_80880B2C
    li r4, 0x2
    bl fn_806158C0
    b lbl_fn_80079994_00000B74
lbl_fn_80079994_00000AF0:
    lfs f2, 0x1c(r29)
    addi r4, r1, 0x28
    psq_l f1, 0x14(r29), 0, 0
    mr r3, r30
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x30(r1)
    lfs f1, 0x28(r1)
    lfs f2, 0x2c(r1)
    lfs f3, 0x30(r1)
    bl fn_806159A0
    lfs f1, 0x30(r29)
    mr r3, r30
    li r4, 0x2
    bl fn_80615720
    lfs f1, lbl_80880B04
    mr r3, r30
    lfs f2, lbl_80880B2C
    li r4, 0x0
    bl fn_806158C0
    b lbl_fn_80079994_00000B74
lbl_fn_80079994_00000B40:
    lfs f2, lbl_80880B00
    mr r3, r30
    lfs f1, lbl_80880B04
    fmr f3, f2
    fmr f4, f2
    fmr f5, f2
    fmr f6, f2
    bl fn_80615700
    lfs f1, lbl_80880B04
    mr r3, r30
    lfs f2, lbl_80880B2C
    li r4, 0x0
    bl fn_806158C0
lbl_fn_80079994_00000B74:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    lwz r29, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_80079BC8(void)
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
    lwz r0, 0x4(r3)
    cmpwi r0, 0x3
    beq lbl_fn_80079BC8_00000BD0
    cmpwi r0, 0x2
    beq lbl_fn_80079BC8_00000CB4
    cmpwi r0, 0x1
    beq lbl_fn_80079BC8_00000DE0
    b lbl_fn_80079BC8_00000E78
lbl_fn_80079BC8_00000BD0:
    lis r31, lbl_807318A0@ha
    lfs f1, lbl_80880B30
    lfs f2, lbl_80880B34
    mr r3, r30
    lfs f3, lbl_80880B04
    addi r4, r31, lbl_807318A0@l
    addi r5, r29, 0x8
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    addi r31, r31, lbl_807318A0@l
    lfs f1, lbl_80880B00
    lfs f2, lbl_80880B34
    mr r3, r30
    lfs f3, lbl_80880B04
    addi r4, r31, 0x9
    addi r5, r29, 0x24
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80880B00
    mr r3, r30
    lfs f2, lbl_80880B34
    addi r4, r31, 0x10
    lfs f3, lbl_80880B04
    addi r5, r29, 0x28
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80880B00
    mr r3, r30
    lfs f2, lbl_80880B04
    addi r4, r31, 0x18
    lfs f3, lbl_80880B38
    addi r5, r29, 0x34
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80880B00
    mr r3, r30
    lfs f2, lbl_80880B04
    addi r4, r31, 0x20
    lfs f3, lbl_80880B38
    addi r5, r29, 0x38
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80880B00
    mr r3, r30
    lfs f2, lbl_80880B04
    addi r4, r31, 0x28
    lfs f3, lbl_80880B38
    addi r5, r29, 0x3c
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    b lbl_fn_80079BC8_00000E78
lbl_fn_80079BC8_00000CB4:
    lis r31, lbl_807318A0@ha
    lfs f1, lbl_80880B30
    lfs f2, lbl_80880B34
    mr r3, r30
    lfs f3, lbl_80880B04
    addi r4, r31, lbl_807318A0@l
    addi r5, r29, 0x8
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    addi r31, r31, lbl_807318A0@l
    lfs f1, lbl_80880B24
    lfs f2, lbl_80880B04
    mr r3, r30
    lfs f3, lbl_80880B38
    addi r4, r31, 0x30
    addi r5, r29, 0x14
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    lfs f1, lbl_80880B00
    mr r3, r30
    lfs f2, lbl_80880B34
    addi r4, r31, 0x3a
    lfs f3, lbl_80880B04
    addi r5, r29, 0x24
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80880B00
    mr r3, r30
    lfs f2, lbl_80880B34
    addi r4, r31, 0x41
    lfs f3, lbl_80880B04
    addi r5, r29, 0x28
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80880B00
    mr r3, r30
    lfs f2, lbl_80880B3C
    addi r4, r31, 0x49
    lfs f3, lbl_80880B04
    addi r5, r29, 0x30
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80880B00
    mr r3, r30
    lfs f2, lbl_80880B04
    addi r4, r31, 0x18
    lfs f3, lbl_80880B38
    addi r5, r29, 0x34
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80880B00
    mr r3, r30
    lfs f2, lbl_80880B04
    addi r4, r31, 0x20
    lfs f3, lbl_80880B38
    addi r5, r29, 0x38
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80880B00
    mr r3, r30
    lfs f2, lbl_80880B04
    addi r4, r31, 0x28
    lfs f3, lbl_80880B38
    addi r5, r29, 0x3c
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    b lbl_fn_80079BC8_00000E78
lbl_fn_80079BC8_00000DE0:
    lis r31, lbl_807318A0@ha
    lfs f1, lbl_80880B24
    addi r31, r31, lbl_807318A0@l
    lfs f2, lbl_80880B04
    lfs f3, lbl_80880B38
    mr r3, r30
    addi r4, r31, 0x30
    addi r5, r29, 0x14
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    lfs f1, lbl_80880B00
    mr r3, r30
    lfs f2, lbl_80880B04
    addi r4, r31, 0x18
    lfs f3, lbl_80880B38
    addi r5, r29, 0x34
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80880B00
    mr r3, r30
    lfs f2, lbl_80880B04
    addi r4, r31, 0x20
    lfs f3, lbl_80880B38
    addi r5, r29, 0x38
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80880B00
    mr r3, r30
    lfs f2, lbl_80880B04
    addi r4, r31, 0x28
    lfs f3, lbl_80880B38
    addi r5, r29, 0x3c
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
lbl_fn_80079BC8_00000E78:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80079ECC(void)
{
    nofralloc
    lfs f0, lbl_80880B40
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stfs f0, 0x14(r3)
    stw r0, 0x8(r3)
    stfs f0, 0x18(r3)
    stw r0, 0xc(r3)
    stfs f0, 0x1c(r3)
    stw r0, 0x10(r3)
    stfs f0, 0x20(r3)
    blr
}

asm void fn_80079EFC(void)
{
    nofralloc
    lwz r0, 0x0(r3)
    mr r6, r3
    li r5, -0x1
    li r7, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80079EFC_00000F00
lbl_fn_80079EFC_00000EE0:
    lfs f0, 0x14(r6)
    fcmpo cr0, f1, f0
    bge lbl_fn_80079EFC_00000EF4
    mr r5, r7
    b lbl_fn_80079EFC_00000F00
lbl_fn_80079EFC_00000EF4:
    addi r6, r6, 0x4
    addi r7, r7, 0x1
    bdnz lbl_fn_80079EFC_00000EE0
lbl_fn_80079EFC_00000F00:
    cmpwi r5, -0x1
    beq lbl_fn_80079EFC_00001094
    cmpwi cr1, r5, 0x3
    li r6, 0x3
    bge cr1, lbl_fn_80079EFC_0000106C
    subfic r12, r5, 0x3
    addi r8, r5, 0x8
    cmpwi r12, 0x8
    ble lbl_fn_80079EFC_0000103C
    li r9, 0x0
    li r10, 0x0
    li r11, 0x0
    bgt cr1, lbl_fn_80079EFC_00000F48
    lis r7, 0x8000
    addi r0, r7, 0x1
    cmpw r5, r0
    blt lbl_fn_80079EFC_00000F48
    li r11, 0x1
lbl_fn_80079EFC_00000F48:
    cmpwi r11, 0x0
    beq lbl_fn_80079EFC_00000F60
    addis r0, r5, 0x8000
    cmplwi r0, 0x0
    beq lbl_fn_80079EFC_00000F60
    li r10, 0x1
lbl_fn_80079EFC_00000F60:
    cmpwi r10, 0x0
    beq lbl_fn_80079EFC_00000F90
    neg r0, r5
    li r7, 0x1
    clrrwi. r0, r0, 31
    bne lbl_fn_80079EFC_00000F84
    clrrwi. r0, r12, 31
    beq lbl_fn_80079EFC_00000F84
    li r7, 0x0
lbl_fn_80079EFC_00000F84:
    cmpwi r7, 0x0
    beq lbl_fn_80079EFC_00000F90
    li r9, 0x1
lbl_fn_80079EFC_00000F90:
    cmpwi r9, 0x0
    beq lbl_fn_80079EFC_0000103C
    subfic r0, r8, 0xa
    addi r7, r3, 0xc
    srwi r0, r0, 3
    mtctr r0
    cmpwi r8, 0x3
    bge lbl_fn_80079EFC_0000103C
lbl_fn_80079EFC_00000FB0:
    lwz r0, 0x0(r7)
    subi r6, r6, 0x8
    stw r0, 0x4(r7)
    lfs f0, 0x10(r7)
    stfs f0, 0x14(r7)
    lwz r0, -0x4(r7)
    stw r0, 0x0(r7)
    lfs f0, 0xc(r7)
    stfs f0, 0x10(r7)
    lwz r0, -0x8(r7)
    stw r0, -0x4(r7)
    lfs f0, 0x8(r7)
    stfs f0, 0xc(r7)
    lwz r0, -0xc(r7)
    stw r0, -0x8(r7)
    lfs f0, 0x4(r7)
    stfs f0, 0x8(r7)
    lwz r0, -0x10(r7)
    stw r0, -0xc(r7)
    lfs f0, 0x0(r7)
    stfs f0, 0x4(r7)
    lwz r0, -0x14(r7)
    stw r0, -0x10(r7)
    lfs f0, -0x4(r7)
    stfs f0, 0x0(r7)
    lwz r0, -0x18(r7)
    stw r0, -0x14(r7)
    lfs f0, -0x8(r7)
    stfs f0, -0x4(r7)
    lwz r0, -0x1c(r7)
    stw r0, -0x18(r7)
    lfs f0, -0xc(r7)
    stfs f0, -0x8(r7)
    subi r7, r7, 0x20
    bdnz lbl_fn_80079EFC_00000FB0
lbl_fn_80079EFC_0000103C:
    slwi r7, r6, 2
    subf r0, r5, r6
    add r7, r3, r7
    mtctr r0
    cmpw r6, r5
    ble lbl_fn_80079EFC_0000106C
lbl_fn_80079EFC_00001054:
    lwz r0, 0x0(r7)
    stw r0, 0x4(r7)
    lfs f0, 0x10(r7)
    stfs f0, 0x14(r7)
    subi r7, r7, 0x4
    bdnz lbl_fn_80079EFC_00001054
lbl_fn_80079EFC_0000106C:
    slwi r0, r5, 2
    add r5, r3, r0
    stw r4, 0x4(r5)
    stfs f1, 0x14(r5)
    lwz r4, 0x0(r3)
    cmpwi r4, 0x4
    bgelr
    addi r0, r4, 0x1
    stw r0, 0x0(r3)
    blr
lbl_fn_80079EFC_00001094:
    cmpwi r0, 0x4
    bgelr
    slwi r0, r0, 2
    add r5, r3, r0
    stw r4, 0x4(r5)
    lwz r0, 0x0(r3)
    slwi r0, r0, 2
    add r4, r3, r0
    stfs f1, 0x14(r4)
    lwz r4, 0x0(r3)
    addi r0, r4, 0x1
    stw r0, 0x0(r3)
    blr
}

asm void fn_8007A100(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_807318F0@ha
    li r3, 0xc
    addi r5, r5, lbl_807318F0@l
    stw r0, 0x14(r1)
    li r4, 0x6
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8007A100_00001108
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
lbl_fn_8007A100_00001108:
    stw r3, lbl_8087EEF8
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8007A154(void)
{
    nofralloc
    cmpwi r4, 0x0
    bltlr
    lwz r0, 0x4(r3)
    cmpw r0, r4
    bgt lbl_fn_8007A154_00001134
    blr
lbl_fn_8007A154_00001134:
    lwz r6, 0x4(r3)
    mulli r7, r4, 0x44
    lwz r8, 0x0(r3)
    lis r5, 0x7878
    mulli r4, r6, 0x44
    addi r0, r5, 0x7879
    add r7, r8, r7
    add r5, r8, r4
    subf r4, r7, r5
    mulhw r0, r0, r4
    srawi r0, r0, 5
    srwi r4, r0, 31
    add r0, r0, r4
    subic. r0, r0, 0x1
    beq lbl_fn_8007A154_00001324
    addi r6, r7, 0x44
    addi r4, r5, 0x43
    subf r4, r6, r4
    li r0, 0x44
    divwu r4, r4, r0
    cmplw r6, r5
    bge lbl_fn_8007A154_00001324
    srwi. r0, r4, 1
    mtctr r0
    beq lbl_fn_8007A154_0000129C
lbl_fn_8007A154_00001198:
    lwz r0, 0x0(r6)
    stw r0, 0x0(r7)
    lwz r0, 0x4(r6)
    stw r0, 0x4(r7)
    lfs f2, 0x10(r6)
    psq_l f1, 0x8(r6), 0, 0
    psq_st f1, 0x8(r7), 0, 0
    stfs f2, 0x10(r7)
    lfs f2, 0x1c(r6)
    psq_l f1, 0x14(r6), 0, 0
    psq_st f1, 0x14(r7), 0, 0
    stfs f2, 0x1c(r7)
    lwz r0, 0x20(r6)
    stw r0, 0x20(r7)
    lfs f0, 0x24(r6)
    stfs f0, 0x24(r7)
    lfs f0, 0x28(r6)
    stfs f0, 0x28(r7)
    lfs f0, 0x2c(r6)
    stfs f0, 0x2c(r7)
    lfs f0, 0x30(r6)
    stfs f0, 0x30(r7)
    lwz r0, 0x38(r6)
    lwz r5, 0x34(r6)
    stw r5, 0x34(r7)
    stw r0, 0x38(r7)
    lwz r0, 0x40(r6)
    lwz r5, 0x3c(r6)
    stw r5, 0x3c(r7)
    stw r0, 0x40(r7)
    lwz r0, 0x44(r6)
    stw r0, 0x44(r7)
    lwz r0, 0x48(r6)
    stw r0, 0x48(r7)
    lfs f2, 0x54(r6)
    psq_l f1, 0x4c(r6), 0, 0
    psq_st f1, 0x4c(r7), 0, 0
    stfs f2, 0x54(r7)
    lfs f2, 0x60(r6)
    psq_l f1, 0x58(r6), 0, 0
    psq_st f1, 0x58(r7), 0, 0
    stfs f2, 0x60(r7)
    lwz r0, 0x64(r6)
    stw r0, 0x64(r7)
    lfs f0, 0x68(r6)
    stfs f0, 0x68(r7)
    lfs f0, 0x6c(r6)
    stfs f0, 0x6c(r7)
    lfs f0, 0x70(r6)
    stfs f0, 0x70(r7)
    lfs f0, 0x74(r6)
    stfs f0, 0x74(r7)
    lwz r0, 0x7c(r6)
    lwz r5, 0x78(r6)
    stw r5, 0x78(r7)
    stw r0, 0x7c(r7)
    lwz r0, 0x84(r6)
    lwz r5, 0x80(r6)
    addi r6, r6, 0x88
    stw r5, 0x80(r7)
    stw r0, 0x84(r7)
    addi r7, r7, 0x88
    bdnz lbl_fn_8007A154_00001198
    andi. r4, r4, 0x1
    beq lbl_fn_8007A154_00001324
lbl_fn_8007A154_0000129C:
    mtctr r4
lbl_fn_8007A154_000012A0:
    lwz r0, 0x0(r6)
    stw r0, 0x0(r7)
    lwz r0, 0x4(r6)
    stw r0, 0x4(r7)
    lfs f2, 0x10(r6)
    psq_l f1, 0x8(r6), 0, 0
    psq_st f1, 0x8(r7), 0, 0
    stfs f2, 0x10(r7)
    lfs f2, 0x1c(r6)
    psq_l f1, 0x14(r6), 0, 0
    psq_st f1, 0x14(r7), 0, 0
    stfs f2, 0x1c(r7)
    lwz r0, 0x20(r6)
    stw r0, 0x20(r7)
    lfs f0, 0x24(r6)
    stfs f0, 0x24(r7)
    lfs f0, 0x28(r6)
    stfs f0, 0x28(r7)
    lfs f0, 0x2c(r6)
    stfs f0, 0x2c(r7)
    lfs f0, 0x30(r6)
    stfs f0, 0x30(r7)
    lwz r0, 0x38(r6)
    lwz r5, 0x34(r6)
    stw r5, 0x34(r7)
    stw r0, 0x38(r7)
    lwz r0, 0x40(r6)
    lwz r5, 0x3c(r6)
    addi r6, r6, 0x44
    stw r5, 0x3c(r7)
    stw r0, 0x40(r7)
    addi r7, r7, 0x44
    bdnz lbl_fn_8007A154_000012A0
lbl_fn_8007A154_00001324:
    lwz r4, 0x4(r3)
    subi r0, r4, 0x1
    stw r0, 0x4(r3)
    blr
}

asm void fn_8007A36C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lfs f0, lbl_80880B40
    li r0, 0x0
    stw r0, 0x0(r3)
    mr r27, r3
    mr r28, r4
    li r30, 0x4
    stw r0, 0x4(r3)
    stfs f0, 0x14(r3)
    stw r0, 0x8(r3)
    stfs f0, 0x18(r3)
    stw r0, 0xc(r3)
    stfs f0, 0x1c(r3)
    stw r0, 0x10(r3)
    stfs f0, 0x20(r3)
    lwz r0, 0x4(r4)
    cmplwi r0, 0x4
    bgt lbl_fn_8007A36C_00001390
    mr r30, r0
lbl_fn_8007A36C_00001390:
    li r29, 0x0
    li r31, 0x0
    b lbl_fn_8007A36C_000013C4
lbl_fn_8007A36C_0000139C:
    lwz r0, 0x0(r28)
    add r4, r0, r31
    lwz r0, 0x4(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8007A36C_000013BC
    lfs f1, lbl_80880B44
    mr r3, r27
    bl fn_80079EFC
lbl_fn_8007A36C_000013BC:
    addi r29, r29, 0x1
    addi r31, r31, 0x44
lbl_fn_8007A36C_000013C4:
    cmpw r29, r30
    blt lbl_fn_8007A36C_0000139C
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8007A41C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lfs f0, lbl_80880B40
    li r0, 0x0
    stw r0, 0x0(r3)
    mr r27, r3
    mr r28, r4
    li r30, 0x4
    stw r0, 0x4(r3)
    stfs f0, 0x14(r3)
    stw r0, 0x8(r3)
    stfs f0, 0x18(r3)
    stw r0, 0xc(r3)
    stfs f0, 0x1c(r3)
    stw r0, 0x10(r3)
    stfs f0, 0x20(r3)
    lwz r0, 0x4(r4)
    cmplwi r0, 0x4
    bgt lbl_fn_8007A41C_00001440
    mr r30, r0
lbl_fn_8007A41C_00001440:
    li r29, 0x0
    li r31, 0x0
    b lbl_fn_8007A41C_00001474
lbl_fn_8007A41C_0000144C:
    lwz r0, 0x0(r28)
    add r4, r0, r31
    lwz r0, 0x4(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8007A41C_0000146C
    lfs f1, lbl_80880B44
    mr r3, r27
    bl fn_80079EFC
lbl_fn_8007A41C_0000146C:
    addi r29, r29, 0x1
    addi r31, r31, 0x44
lbl_fn_8007A41C_00001474:
    cmpw r29, r30
    blt lbl_fn_8007A41C_0000144C
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8007A4CC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    mr r29, r3
    b lbl_fn_8007A4CC_000014D0
lbl_fn_8007A4CC_000014BC:
    lwz r0, 0x0(r29)
    add r3, r0, r31
    bl fn_800795DC
    addi r31, r31, 0x44
    addi r30, r30, 0x1
lbl_fn_8007A4CC_000014D0:
    lwz r0, 0x4(r29)
    cmplw r30, r0
    blt lbl_fn_8007A4CC_000014BC
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8007A530(void)
{
    nofralloc
    stwu r1, -0x660(r1)
    mflr r0
    lis r6, lbl_807774D8@ha
    stw r0, 0x664(r1)
    li r0, 0x0
    addi r6, r6, lbl_807774D8@l
    stmw r26, 0x648(r1)
    mr r31, r3
    mr r27, r4
    mr r26, r5
    addi r3, r1, 0x18
    li r4, 0x0
    li r5, 0x400
    stw r6, 0x8(r1)
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x638(r1)
    bl memset
    addi r3, r1, 0x618
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x8(r1)
    mr r4, r27
    mr r5, r26
    addi r3, r1, 0x8
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807774B8@ha
    addi r3, r1, 0x8
    addi r4, r4, lbl_807774B8@l
    stw r4, 0x8(r1)
    la r4, lbl_8087D710
    bl fn_8005BCE8
    addi r3, r1, 0x8
    bl fn_8005B9CC
    bl fn_800DC12C
    lwz r4, 0x4(r31)
    mr r28, r3
    cmpwi r4, 0x0
    beq lbl_fn_8007A530_000015B0
    beq lbl_fn_8007A530_000015B0
    subi r3, r4, 0x10
    bl fn_80084C24
lbl_fn_8007A530_000015B0:
    cmpwi r28, 0x0
    stw r28, 0x0(r31)
    beq lbl_fn_8007A530_000015F8
    slwi r3, r28, 3
    li r4, 0x4
    addi r3, r3, 0x10
    la r5, lbl_8087D764
    la r6, lbl_8087D760
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_8007A748@ha
    mr r7, r28
    addi r4, r4, fn_8007A748@l
    li r5, 0x0
    li r6, 0x8
    bl fn_80695720
    stw r3, 0x4(r31)
    b lbl_fn_8007A530_00001600
lbl_fn_8007A530_000015F8:
    li r0, 0x0
    stw r0, 0x4(r31)
lbl_fn_8007A530_00001600:
    addi r3, r1, 0x8
    bl fn_8005B9CC
    bl fn_800DC12C
    lis r28, lbl_80731900@ha
    stw r3, 0x8(r31)
    addi r29, r28, lbl_80731900@l
    li r30, 0x0
    b lbl_fn_8007A530_000016EC
lbl_fn_8007A530_00001620:
    addi r3, r1, 0x8
    bl fn_8005B9CC
    addi r4, r28, lbl_80731900@l
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_8007A530_000016FC
    lwz r0, 0x4(r31)
    addi r3, r1, 0x8
    add r26, r0, r30
    bl fn_8005B9CC
    mr r27, r3
    addi r4, r29, 0x1
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8007A530_00001664
    li r0, 0x0
    b lbl_fn_8007A530_000016D4
lbl_fn_8007A530_00001664:
    mr r3, r27
    addi r4, r29, 0x3
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8007A530_00001680
    li r0, 0x1
    b lbl_fn_8007A530_000016D4
lbl_fn_8007A530_00001680:
    mr r3, r27
    addi r4, r29, 0x5
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8007A530_0000169C
    li r0, 0x2
    b lbl_fn_8007A530_000016D4
lbl_fn_8007A530_0000169C:
    mr r3, r27
    addi r4, r29, 0x7
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8007A530_000016B8
    li r0, 0x3
    b lbl_fn_8007A530_000016D4
lbl_fn_8007A530_000016B8:
    mr r3, r27
    addi r4, r29, 0x9
    bl fn_80682428
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    addi r0, r3, 0x4
lbl_fn_8007A530_000016D4:
    stw r0, 0x0(r26)
    addi r3, r1, 0x8
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x4(r26)
    addi r30, r30, 0x8
lbl_fn_8007A530_000016EC:
    addi r3, r1, 0x8
    bl fn_8005BBF8
    cmpwi r3, 0x0
    bne lbl_fn_8007A530_00001620
lbl_fn_8007A530_000016FC:
    lmw r26, 0x648(r1)
    lwz r0, 0x664(r1)
    mtlr r0
    addi r1, r1, 0x660
    blr
}

asm void fn_8007A748(void)
{
    nofralloc
    lfs f0, lbl_80880B48
    li r0, 0x5
    stw r0, 0x0(r3)
    stfs f0, 0x4(r3)
    blr
}

asm void fn_8007A75C(void)
{
    nofralloc
    lfs f2, lbl_80880B60
    li r0, 0x0
    lfs f1, lbl_80880B64
    lfs f8, lbl_80880B48
    lfs f7, lbl_80880B4C
    lfs f6, lbl_80880B50
    lfs f5, lbl_80880B54
    lfs f4, lbl_80880B58
    lfs f3, lbl_80880B5C
    lfs f0, lbl_80880B68
    stw r0, 0x0(r3)
    stfs f8, 0x4(r3)
    stfs f7, 0x8(r3)
    stfs f6, 0xc(r3)
    stfs f5, 0x10(r3)
    stfs f4, 0x2c(r3)
    stw r0, 0x30(r3)
    stfs f3, 0x14(r3)
    stfs f2, 0x18(r3)
    stfs f1, 0x1c(r3)
    stfs f2, 0x20(r3)
    stfs f1, 0x24(r3)
    stfs f0, 0x28(r3)
    blr
}

asm void fn_8007A7BC(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    mr r30, r4
    stw r29, 0x24(r1)
    mr r29, r3
    lwz r5, 0x0(r3)
    cmpwi r5, 0x0
    beq lbl_fn_8007A7BC_000017F8
    beq lbl_fn_8007A7BC_000017EC
    lwz r4, 0x0(r5)
    lis r0, 0x4330
    stw r4, 0xc(r1)
    lis r4, lbl_807318F8@ha
    lfd f1, lbl_807318F8@l(r4)
    stw r0, 0x8(r1)
    lfs f2, 0x4(r3)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    mfcr r0
    extrwi r0, r0, 1, 2
    b lbl_fn_8007A7BC_000017F0
lbl_fn_8007A7BC_000017EC:
    li r0, 0x1
lbl_fn_8007A7BC_000017F0:
    cmpwi r0, 0x0
    beq lbl_fn_8007A7BC_0000180C
lbl_fn_8007A7BC_000017F8:
    lfs f1, lbl_80880B48
    mr r3, r30
    li r4, 0x5
    bl fn_80097CCC
    b lbl_fn_8007A7BC_00001940
lbl_fn_8007A7BC_0000180C:
    lfs f1, 0x4(r3)
    lfs f0, 0x10(r3)
    lwz r3, 0x0(r5)
    fadds f0, f1, f0
    subi r4, r3, 0x1
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r0, 0xc(r1)
    cmpw r4, r0
    bge lbl_fn_8007A7BC_00001838
    b lbl_fn_8007A7BC_00001840
lbl_fn_8007A7BC_00001838:
    stfd f0, 0x10(r1)
    lwz r4, 0x14(r1)
lbl_fn_8007A7BC_00001840:
    cmpwi r4, 0x0
    blt lbl_fn_8007A7BC_00001930
    cmpw r4, r3
    bge lbl_fn_8007A7BC_00001930
    lwz r3, 0x4(r5)
    slwi r0, r4, 3
    lwz r12, 0x30(r29)
    add r31, r3, r0
    lwzx r3, r3, r0
    mtctr r12
    bctrl
    lfs f1, lbl_80880B48
    mr r5, r3
    lfs f2, lbl_80880B6C
    mr r3, r30
    li r4, 0x5
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f2, 0x338(r30)
    lfs f1, 0x4(r31)
    lfs f0, 0xc(r29)
    lfs f3, 0x2c(r29)
    fmsubs f4, f1, f0, f2
    fcmpo cr0, f3, f4
    bge lbl_fn_8007A7BC_000018B0
    b lbl_fn_8007A7BC_000018B4
lbl_fn_8007A7BC_000018B0:
    fmr f3, f4
lbl_fn_8007A7BC_000018B4:
    lfs f1, 0x2c(r29)
    fneg f0, f1
    fcmpo cr0, f0, f3
    ble lbl_fn_8007A7BC_000018C8
    b lbl_fn_8007A7BC_000018DC
lbl_fn_8007A7BC_000018C8:
    fcmpo cr0, f1, f4
    bge lbl_fn_8007A7BC_000018D4
    b lbl_fn_8007A7BC_000018D8
lbl_fn_8007A7BC_000018D4:
    fmr f1, f4
lbl_fn_8007A7BC_000018D8:
    fmr f0, f1
lbl_fn_8007A7BC_000018DC:
    fadds f2, f2, f0
    lfs f0, lbl_80880B48
    fcmpo cr0, f0, f2
    ble lbl_fn_8007A7BC_000018F0
    b lbl_fn_8007A7BC_000018F4
lbl_fn_8007A7BC_000018F0:
    fmr f0, f2
lbl_fn_8007A7BC_000018F4:
    lfs f1, lbl_80880B4C
    fcmpo cr0, f1, f0
    bge lbl_fn_8007A7BC_00001904
    b lbl_fn_8007A7BC_00001918
lbl_fn_8007A7BC_00001904:
    lfs f1, lbl_80880B48
    fcmpo cr0, f1, f2
    ble lbl_fn_8007A7BC_00001914
    b lbl_fn_8007A7BC_00001918
lbl_fn_8007A7BC_00001914:
    fmr f1, f2
lbl_fn_8007A7BC_00001918:
    stfs f1, 0x338(r30)
    lwz r0, 0x0(r31)
    slwi r0, r0, 2
    add r3, r29, r0
    lfs f0, 0x14(r3)
    stfs f0, 0x330(r30)
lbl_fn_8007A7BC_00001930:
    lfs f1, 0x4(r29)
    lfs f0, 0x8(r29)
    fadds f0, f1, f0
    stfs f0, 0x4(r29)
lbl_fn_8007A7BC_00001940:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8007A994(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r30, r3
    mr r27, r4
    mr r28, r5
    li r31, 0x0
    b lbl_fn_8007A994_00001984
lbl_fn_8007A994_00001980:
    addi r30, r30, 0x1
lbl_fn_8007A994_00001984:
    lbz r0, 0x0(r30)
    extsb. r4, r0
    beq lbl_fn_8007A994_000019A0
    mr r3, r27
    bl strchr
    cmpwi r3, 0x0
    bne lbl_fn_8007A994_00001980
lbl_fn_8007A994_000019A0:
    mr r29, r30
    b lbl_fn_8007A994_000019B0
lbl_fn_8007A994_000019A8:
    addi r29, r29, 0x1
    addi r31, r31, 0x1
lbl_fn_8007A994_000019B0:
    lbz r0, 0x0(r29)
    extsb. r4, r0
    beq lbl_fn_8007A994_000019CC
    mr r3, r27
    bl strchr
    cmpwi r3, 0x0
    beq lbl_fn_8007A994_000019A8
lbl_fn_8007A994_000019CC:
    cmpwi r31, 0x0
    stw r31, 0x0(r28)
    bne lbl_fn_8007A994_000019E0
    li r3, 0x0
    b lbl_fn_8007A994_000019E4
lbl_fn_8007A994_000019E0:
    mr r3, r30
lbl_fn_8007A994_000019E4:
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8007AA30(void)
{
    nofralloc
    li r5, 0x0
    li r0, 0x1
    stw r5, 0x0(r3)
    stw r5, 0x4(r3)
    stw r5, 0x8(r3)
    stw r5, 0xc(r3)
    stb r4, 0x10(r3)
    stb r5, 0x11(r3)
    stb r5, 0x12(r3)
    stb r5, 0x13(r3)
    stb r0, 0x14(r3)
    stb r0, 0x15(r3)
    blr
}

asm void fn_8007AA64(void)
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
    beq lbl_fn_8007AA64_00001AE4
    lwz r3, 0x8(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8007AA64_00001A6C
    beq lbl_fn_8007AA64_00001A64
    bl dtor_80084684
lbl_fn_8007AA64_00001A64:
    li r0, 0x0
    stw r0, 0x8(r30)
lbl_fn_8007AA64_00001A6C:
    lwz r3, 0xc(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8007AA64_00001A88
    beq lbl_fn_8007AA64_00001A80
    bl dtor_80084684
lbl_fn_8007AA64_00001A80:
    li r0, 0x0
    stw r0, 0xc(r30)
lbl_fn_8007AA64_00001A88:
    lbz r0, 0x11(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8007AA64_00001AB4
    lwz r3, 0x4(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8007AA64_00001AB4
    li r4, 0x1
    bl fn_800D5808
    li r0, 0x0
    stb r0, 0x11(r30)
    stw r0, 0x4(r30)
lbl_fn_8007AA64_00001AB4:
    cmpwi r30, 0x0
    beq lbl_fn_8007AA64_00001AD4
    lwz r3, 0x0(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8007AA64_00001AD4
    bl fn_80084C24
    li r0, 0x0
    stw r0, 0x0(r30)
lbl_fn_8007AA64_00001AD4:
    cmpwi r31, 0x0
    ble lbl_fn_8007AA64_00001AE4
    mr r3, r30
    bl dtor_80084684
lbl_fn_8007AA64_00001AE4:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8007AB38(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    addi r11, r1, 0x30
    stfd f31, 0x90(r1)
    psq_st f31, 0x98(r1), 0, 0
    stfd f30, 0x80(r1)
    psq_st f30, 0x88(r1), 0, 0
    stfd f29, 0x70(r1)
    psq_st f29, 0x78(r1), 0, 0
    stfd f28, 0x60(r1)
    psq_st f28, 0x68(r1), 0, 0
    stfd f27, 0x50(r1)
    psq_st f27, 0x58(r1), 0, 0
    stfd f26, 0x40(r1)
    psq_st f26, 0x48(r1), 0, 0
    stfd f25, 0x30(r1)
    psq_st f25, 0x38(r1), 0, 0
    bl _savegpr_23
    lwz r6, 0xa4c(r4)
    slwi r29, r5, 2
    mr r25, r3
    mr r26, r4
    lwzx r28, r6, r29
    mr r27, r5
    mr r3, r28
    bl strlen
    lis r24, lbl_80777D80@ha
    mr r30, r3
    addi r24, r24, lbl_80777D80@l
    li r31, 0x0
    b lbl_fn_8007AB38_00001BB4
lbl_fn_8007AB38_00001B80:
    mr r3, r23
    bl strlen
    cmpw r3, r30
    bne lbl_fn_8007AB38_00001BAC
    mr r3, r28
    mr r4, r23
    mr r5, r30
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_8007AB38_00001BAC
    b lbl_fn_8007AB38_00001BC4
lbl_fn_8007AB38_00001BAC:
    addi r24, r24, 0x4
    addi r31, r31, 0x1
lbl_fn_8007AB38_00001BB4:
    lwz r23, 0x0(r24)
    cmpwi r23, 0x0
    bne lbl_fn_8007AB38_00001B80
    li r31, -0x1
lbl_fn_8007AB38_00001BC4:
    stb r31, 0x10(r25)
    lwz r3, 0xf8(r26)
    lwz r0, 0x8(r25)
    lwzx r3, r3, r29
    cmpwi r0, 0x0
    lfs f27, 0x1c(r3)
    bne lbl_fn_8007AB38_00001C2C
    li r3, 0x14
    li r4, 0x6
    la r5, lbl_8087D780
    la r6, lbl_8087D77C
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8007AB38_00001C28
    lfs f0, lbl_80880B88
    stfs f0, 0x0(r3)
    lfs f0, lbl_80880B8C
    stfs f0, 0x4(r3)
    lfs f0, lbl_80880B90
    stfs f0, 0x8(r3)
    lfs f0, lbl_80880B94
    stfs f0, 0xc(r3)
    lfs f0, lbl_80880B98
    stfs f0, 0x10(r3)
lbl_fn_8007AB38_00001C28:
    stw r3, 0x8(r25)
lbl_fn_8007AB38_00001C2C:
    lwz r4, 0x8(r25)
    lwz r3, 0xf8(r26)
    stfs f27, 0x0(r4)
    lwz r0, 0x8(r25)
    lwzx r3, r3, r29
    cmpwi r0, 0x0
    lfs f27, 0x20(r3)
    bne lbl_fn_8007AB38_00001C98
    li r3, 0x14
    li r4, 0x6
    la r5, lbl_8087D780
    la r6, lbl_8087D77C
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8007AB38_00001C94
    lfs f0, lbl_80880B88
    stfs f0, 0x0(r3)
    lfs f0, lbl_80880B8C
    stfs f0, 0x4(r3)
    lfs f0, lbl_80880B90
    stfs f0, 0x8(r3)
    lfs f0, lbl_80880B94
    stfs f0, 0xc(r3)
    lfs f0, lbl_80880B98
    stfs f0, 0x10(r3)
lbl_fn_8007AB38_00001C94:
    stw r3, 0x8(r25)
lbl_fn_8007AB38_00001C98:
    lwz r4, 0x8(r25)
    lwz r3, 0xf8(r26)
    stfs f27, 0x4(r4)
    lwz r0, 0x8(r25)
    lwzx r3, r3, r29
    cmpwi r0, 0x0
    lfs f27, 0x24(r3)
    bne lbl_fn_8007AB38_00001D04
    li r3, 0x14
    li r4, 0x6
    la r5, lbl_8087D780
    la r6, lbl_8087D77C
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8007AB38_00001D00
    lfs f0, lbl_80880B88
    stfs f0, 0x0(r3)
    lfs f0, lbl_80880B8C
    stfs f0, 0x4(r3)
    lfs f0, lbl_80880B90
    stfs f0, 0x8(r3)
    lfs f0, lbl_80880B94
    stfs f0, 0xc(r3)
    lfs f0, lbl_80880B98
    stfs f0, 0x10(r3)
lbl_fn_8007AB38_00001D00:
    stw r3, 0x8(r25)
lbl_fn_8007AB38_00001D04:
    lwz r4, 0x8(r25)
    lwz r3, 0xf8(r26)
    stfs f27, 0x8(r4)
    lwz r0, 0x8(r25)
    lwzx r3, r3, r29
    cmpwi r0, 0x0
    lfs f27, 0x28(r3)
    bne lbl_fn_8007AB38_00001D70
    li r3, 0x14
    li r4, 0x6
    la r5, lbl_8087D780
    la r6, lbl_8087D77C
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8007AB38_00001D6C
    lfs f0, lbl_80880B88
    stfs f0, 0x0(r3)
    lfs f0, lbl_80880B8C
    stfs f0, 0x4(r3)
    lfs f0, lbl_80880B90
    stfs f0, 0x8(r3)
    lfs f0, lbl_80880B94
    stfs f0, 0xc(r3)
    lfs f0, lbl_80880B98
    stfs f0, 0x10(r3)
lbl_fn_8007AB38_00001D6C:
    stw r3, 0x8(r25)
lbl_fn_8007AB38_00001D70:
    lwz r4, 0x8(r25)
    lwz r3, 0xf8(r26)
    stfs f27, 0xc(r4)
    lwz r0, 0x8(r25)
    lwzx r3, r3, r29
    cmpwi r0, 0x0
    lfs f28, 0x2c(r3)
    bne lbl_fn_8007AB38_00001DDC
    li r3, 0x14
    li r4, 0x6
    la r5, lbl_8087D780
    la r6, lbl_8087D77C
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8007AB38_00001DD8
    lfs f0, lbl_80880B88
    stfs f0, 0x0(r3)
    lfs f0, lbl_80880B8C
    stfs f0, 0x4(r3)
    lfs f0, lbl_80880B90
    stfs f0, 0x8(r3)
    lfs f0, lbl_80880B94
    stfs f0, 0xc(r3)
    lfs f0, lbl_80880B98
    stfs f0, 0x10(r3)
lbl_fn_8007AB38_00001DD8:
    stw r3, 0x8(r25)
lbl_fn_8007AB38_00001DDC:
    lwz r3, 0x8(r25)
    mr r31, r26
    lfs f27, lbl_80880B88
    mr r30, r26
    stfs f28, 0x10(r3)
    li r28, 0x0
    lfs f28, lbl_80880B8C
    lfs f29, lbl_80880B90
    lfs f30, lbl_80880B94
    lfs f31, lbl_80880B98
    b lbl_fn_8007AB38_00001FB0
lbl_fn_8007AB38_00001E08:
    lwz r0, 0x140(r31)
    cmpw r27, r0
    bne lbl_fn_8007AB38_00001FA4
    lwz r0, 0xc(r25)
    lfs f26, 0x100(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8007AB38_00001E5C
    li r3, 0x14
    li r4, 0x6
    la r5, lbl_8087D788
    la r6, lbl_8087D784
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8007AB38_00001E58
    stfs f27, 0x0(r3)
    stfs f28, 0x4(r3)
    stfs f29, 0x8(r3)
    stfs f30, 0xc(r3)
    stfs f31, 0x10(r3)
lbl_fn_8007AB38_00001E58:
    stw r3, 0xc(r25)
lbl_fn_8007AB38_00001E5C:
    lwz r3, 0xc(r25)
    lfs f25, 0x104(r30)
    stfs f26, 0x0(r3)
    lwz r0, 0xc(r25)
    cmpwi r0, 0x0
    bne lbl_fn_8007AB38_00001EAC
    li r3, 0x14
    li r4, 0x6
    la r5, lbl_8087D788
    la r6, lbl_8087D784
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8007AB38_00001EA8
    stfs f27, 0x0(r3)
    stfs f28, 0x4(r3)
    stfs f29, 0x8(r3)
    stfs f30, 0xc(r3)
    stfs f31, 0x10(r3)
lbl_fn_8007AB38_00001EA8:
    stw r3, 0xc(r25)
lbl_fn_8007AB38_00001EAC:
    lwz r3, 0xc(r25)
    lfs f26, 0x108(r30)
    stfs f25, 0x4(r3)
    lwz r0, 0xc(r25)
    cmpwi r0, 0x0
    bne lbl_fn_8007AB38_00001EFC
    li r3, 0x14
    li r4, 0x6
    la r5, lbl_8087D788
    la r6, lbl_8087D784
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8007AB38_00001EF8
    stfs f27, 0x0(r3)
    stfs f28, 0x4(r3)
    stfs f29, 0x8(r3)
    stfs f30, 0xc(r3)
    stfs f31, 0x10(r3)
lbl_fn_8007AB38_00001EF8:
    stw r3, 0xc(r25)
lbl_fn_8007AB38_00001EFC:
    lwz r3, 0xc(r25)
    lfs f25, 0x10c(r30)
    stfs f26, 0x8(r3)
    lwz r0, 0xc(r25)
    cmpwi r0, 0x0
    bne lbl_fn_8007AB38_00001F4C
    li r3, 0x14
    li r4, 0x6
    la r5, lbl_8087D788
    la r6, lbl_8087D784
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8007AB38_00001F48
    stfs f27, 0x0(r3)
    stfs f28, 0x4(r3)
    stfs f29, 0x8(r3)
    stfs f30, 0xc(r3)
    stfs f31, 0x10(r3)
lbl_fn_8007AB38_00001F48:
    stw r3, 0xc(r25)
lbl_fn_8007AB38_00001F4C:
    lwz r3, 0xc(r25)
    lfs f26, 0x110(r30)
    stfs f25, 0xc(r3)
    lwz r0, 0xc(r25)
    cmpwi r0, 0x0
    bne lbl_fn_8007AB38_00001F9C
    li r3, 0x14
    li r4, 0x6
    la r5, lbl_8087D788
    la r6, lbl_8087D784
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8007AB38_00001F98
    stfs f27, 0x0(r3)
    stfs f28, 0x4(r3)
    stfs f29, 0x8(r3)
    stfs f30, 0xc(r3)
    stfs f31, 0x10(r3)
lbl_fn_8007AB38_00001F98:
    stw r3, 0xc(r25)
lbl_fn_8007AB38_00001F9C:
    lwz r3, 0xc(r25)
    stfs f26, 0x10(r3)
lbl_fn_8007AB38_00001FA4:
    addi r31, r31, 0x10
    addi r30, r30, 0x14
    addi r28, r28, 0x1
lbl_fn_8007AB38_00001FB0:
    lwz r0, 0x13c(r26)
    cmpw r28, r0
    blt lbl_fn_8007AB38_00001E08
    lwz r4, 0xe8(r26)
    lwzx r3, r4, r29
    lwz r0, 0x1c(r3)
    stb r0, 0x12(r25)
    lwzx r3, r4, r29
    lwz r0, 0x20(r3)
    stb r0, 0x13(r25)
    lwzx r3, r4, r29
    lwz r0, 0x28(r3)
    stb r0, 0x14(r25)
    lwzx r3, r4, r29
    lwz r0, 0x2c(r3)
    stb r0, 0x15(r25)
    psq_l f31, 0x98(r1), 0, 0
    lfd f31, 0x90(r1)
    psq_l f30, 0x88(r1), 0, 0
    lfd f30, 0x80(r1)
    psq_l f29, 0x78(r1), 0, 0
    lfd f29, 0x70(r1)
    psq_l f28, 0x68(r1), 0, 0
    lfd f28, 0x60(r1)
    psq_l f27, 0x58(r1), 0, 0
    lfd f27, 0x50(r1)
    psq_l f26, 0x48(r1), 0, 0
    lfd f26, 0x40(r1)
    psq_l f25, 0x38(r1), 0, 0
    lfd f25, 0x30(r1)
    addi r11, r1, 0x30
    bl _restgpr_23
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}
