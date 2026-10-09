#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void DCInvalidateRange(void);
extern void dtor_80084684(void);
extern void fn_80013F78(void);
extern void fn_8005B9CC(void);
extern void fn_800638B0(void);
extern void fn_80063D3C(void);
extern void fn_800827E0(void);
extern void fn_800839EC(void);
extern void fn_80084320(void);
extern void fn_80084C24(void);
extern void fn_8008771C(void);
extern void fn_80087858(void);
extern void fn_80087994(void);
extern void fn_8008937C(void);
extern void fn_80092814(void);
extern void fn_800A9E54(void);
extern void fn_800AA6C4(void);
extern void fn_800AA8DC(void);
extern void fn_800AAE20(void);
extern void fn_800ABD84(void);
extern void fn_800AC5F4(void);
extern void fn_800AD0F0(void);
extern void fn_800AD340(void);
extern void fn_800AEE9C(void);
extern void fn_800AEF4C(void);
extern void fn_800AEF68(void);
extern void fn_800AFE40(void);
extern void fn_800B089C(void);
extern void fn_800B0A48(void);
extern void fn_800B1554(void);
extern void fn_800B1598(void);
extern void fn_800BDB58(void);
extern void fn_800D1D3C(void);
extern void fn_800D1E9C(void);
extern void fn_800D3FA4(void);
extern void fn_800D5808(void);
extern void fn_800DC12C(void);
extern void fn_800DC288(void);
extern void fn_805F93C0(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9990(void);
extern void fn_805F99B0(void);
extern void fn_80615E00(void);
extern void fn_806959D8(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_80732A5C[];
extern u8 lbl_80732AC0[];
extern u8 lbl_80732AF4[];
extern u8 lbl_80778BB8[];
extern u8 lbl_80778C68[];
extern u8 lbl_80778CA8[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EF88;
extern u32 lbl_8087EF8C;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087EFB4;
extern u32 lbl_80880CD4;
extern u32 lbl_80880CD8;
extern u32 lbl_80880CDC;
extern u32 lbl_80880CE0;
extern u32 lbl_80880CE4;
extern u32 lbl_80880CE8;
extern u32 lbl_80880CEC;
extern u32 lbl_80880CF0;
extern u32 lbl_80880CF4;
extern u32 lbl_80880CF8;
extern u32 lbl_80880CFC;
extern u32 lbl_80880D00;
extern u32 lbl_80880D04;
extern u32 lbl_80880D08;
extern u32 lbl_80880D0C;
extern u32 lbl_80880D10;
extern u32 lbl_80880D14;
extern u32 lbl_80880D18;
extern u32 lbl_80880D20;

/* Function declarations */
void fn_800A81F8(void);
void fn_800A8468(void);
void fn_800A85CC(void);
void fn_800A873C(void);
void fn_800A8740(void);
void fn_800A8A80(void);
void fn_800A8BE4(void);
void fn_800A8C48(void);
void fn_800A8CB8(void);
void fn_800A8FA4(void);
void fn_800A8FC4(void);
void fn_800A8FE0(void);
void fn_800A8FE8(void);
void fn_800A8FF0(void);
void fn_800A90FC(void);
void fn_800A9100(void);
void fn_800A9104(void);
void fn_800A9154(void);
void fn_800A9194(void);
void fn_800A91D4(void);
void fn_800A9214(void);
void fn_800A9254(void);
void fn_800A9294(void);
void fn_800A92F0(void);
void fn_800A9330(void);
void fn_800A93C4(void);
void fn_800A9450(void);
void fn_800A9558(void);
void fn_800A96AC(void);
void fn_800A9738(void);
void fn_800A9788(void);
void fn_800A9794(void);
void fn_800A97C4(void);
void fn_800A97FC(void);
void fn_800A9800(void);
void fn_800A9808(void);
void fn_800A9818(void);

asm void fn_800A81F8(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    stfd f31, 0xb0(r1)
    psq_st f31, 0xb8(r1), 0, 0
    stfd f30, 0xa0(r1)
    psq_st f30, 0xa8(r1), 0, 0
    stfd f29, 0x90(r1)
    psq_st f29, 0x98(r1), 0, 0
    stw r31, 0x8c(r1)
    stw r30, 0x88(r1)
    mr r30, r3
    lwz r0, 0x38(r3)
    lwz r4, 0x64(r3)
    cmpwi r0, 0x0
    bge lbl_fn_800A81F8_00000048
    li r5, 0x0
    b lbl_fn_800A81F8_00000054
lbl_fn_800A81F8_00000048:
    mulli r0, r0, 0x30
    lwz r4, 0x3c(r4)
    add r5, r4, r0
lbl_fn_800A81F8_00000054:
    lwz r0, 0x3c(r3)
    cmpwi r0, 0x0
    lfs f10, 0x2c(r5)
    addi r4, r1, 0x2c
    lfs f0, 0x10(r3)
    lfs f11, 0x1c(r5)
    fsubs f2, f0, f10
    lfs f12, 0xc(r5)
    lfs f3, 0xc(r3)
    lfs f0, 0x8(r3)
    fsubs f4, f3, f11
    lfs f3, lbl_80880CE8
    fsubs f0, f0, f12
    lfs f5, lbl_80880CDC
    stfs f4, 0x30(r1)
    frsp f7, f2
    stfs f0, 0x2c(r1)
    lfs f0, 0x60(r3)
    fmuls f13, f7, f5
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x2c(r3), 0, 0
    fmuls f6, f3, f0
    lfs f4, 0x20(r3)
    lfs f3, 0x30(r3)
    lfs f0, 0x2c(r3)
    fmuls f30, f3, f5
    lfs f3, 0x24(r3)
    fmuls f29, f0, f5
    lfs f0, 0x28(r3)
    lfs f5, lbl_80880CE4
    fadds f8, f3, f30
    fadds f9, f4, f29
    lfs f3, 0x18(r3)
    fadds f7, f0, f13
    lfs f4, 0x1c(r3)
    lfs f0, 0x14(r3)
    fmuls f6, f5, f6
    lfs f5, lbl_80880CE0
    fadds f4, f4, f7
    stfs f2, 0x34(r3)
    fadds f3, f3, f8
    fadds f0, f0, f9
    stfs f9, 0x20(r3)
    fmuls f31, f5, f6
    stfs f8, 0x24(r3)
    stfs f7, 0x28(r3)
    addi r3, r1, 0x68
    mr r4, r3
    stfs f12, 0x74(r1)
    stfs f11, 0x78(r1)
    stfs f10, 0x7c(r1)
    stfs f2, 0x34(r1)
    stfs f29, 0x20(r1)
    stfs f30, 0x24(r1)
    stfs f13, 0x28(r1)
    stfs f0, 0x68(r1)
    stfs f3, 0x6c(r1)
    stfs f4, 0x70(r1)
    bl fn_805F98D0
    lfs f3, lbl_80880CD4
    addi r3, r1, 0x68
    lfs f0, lbl_80880CEC
    addi r4, r1, 0x14
    stfs f3, 0x14(r1)
    addi r5, r1, 0x5c
    stfs f0, 0x18(r1)
    stfs f3, 0x1c(r1)
    bl fn_805F99B0
    addi r3, r1, 0x5c
    bl fn_805F9920
    lfs f0, lbl_80880CF0
    fcmpo cr0, f1, f0
    ble lbl_fn_800A81F8_00000218
    addi r3, r1, 0x5c
    addi r4, r1, 0x68
    addi r5, r1, 0x50
    bl fn_805F99B0
    addi r3, r1, 0x50
    addi r31, r1, 0x44
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r31
    lfs f2, 0x58(r1)
    mr r4, r31
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x4c(r1)
    bl fn_805F98D0
    lfs f3, lbl_80880CD4
    mr r4, r31
    lfs f0, lbl_80880CEC
    addi r3, r1, 0x8
    stfs f3, 0x8(r1)
    stfs f0, 0xc(r1)
    stfs f3, 0x10(r1)
    bl fn_805F9990
    fmuls f5, f31, f1
    lfs f0, 0x4c(r1)
    lfs f3, 0x48(r1)
    lfs f4, 0x44(r1)
    fmuls f6, f0, f5
    lfs f0, 0x28(r30)
    fmuls f7, f3, f5
    lfs f3, 0x24(r30)
    fmuls f5, f4, f5
    lfs f4, 0x20(r30)
    fadds f3, f3, f7
    stfs f5, 0x38(r1)
    fadds f4, f4, f5
    fadds f0, f0, f6
    stfs f7, 0x3c(r1)
    stfs f6, 0x40(r1)
    stfs f4, 0x20(r30)
    stfs f3, 0x24(r30)
    stfs f0, 0x28(r30)
lbl_fn_800A81F8_00000218:
    lfs f4, 0x20(r30)
    lfs f5, lbl_80880CF4
    lfs f3, 0x24(r30)
    lfs f0, 0x28(r30)
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    fmuls f0, f0, f5
    stfs f4, 0x20(r30)
    stfs f3, 0x24(r30)
    stfs f0, 0x28(r30)
    psq_l f31, 0xb8(r1), 0, 0
    lfd f31, 0xb0(r1)
    psq_l f30, 0xa8(r1), 0, 0
    lfd f30, 0xa0(r1)
    psq_l f29, 0x98(r1), 0, 0
    lfd f29, 0x90(r1)
    lwz r31, 0x8c(r1)
    lwz r30, 0x88(r1)
    lwz r0, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

asm void fn_800A8468(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    mr r31, r3
    stw r30, 0x58(r1)
    lwz r0, 0x38(r3)
    lwz r4, 0x64(r3)
    cmpwi r0, 0x0
    bge lbl_fn_800A8468_000002A0
    li r6, 0x0
    b lbl_fn_800A8468_000002AC
lbl_fn_800A8468_000002A0:
    mulli r0, r0, 0x30
    lwz r4, 0x3c(r4)
    add r6, r4, r0
lbl_fn_800A8468_000002AC:
    lfs f0, 0x1c(r6)
    addi r5, r1, 0x2c
    lfs f3, 0xc(r6)
    addi r4, r1, 0x44
    lwz r0, 0x3c(r3)
    lfs f2, 0x2c(r6)
    stfs f3, 0x2c(r1)
    cmpwi r0, 0x0
    lwz r6, 0x64(r3)
    stfs f0, 0x30(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0x34(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x4c(r1)
    bge lbl_fn_800A8468_000002F0
    li r4, 0x0
    b lbl_fn_800A8468_000002FC
lbl_fn_800A8468_000002F0:
    mulli r0, r0, 0x30
    lwz r4, 0x3c(r6)
    add r4, r4, r0
lbl_fn_800A8468_000002FC:
    lfs f5, 0x2c(r4)
    addi r6, r1, 0x20
    lfs f4, 0x1c(r4)
    addi r5, r1, 0x38
    lfs f0, 0xc(r4)
    fmr f2, f5
    stfs f0, 0x20(r1)
    addi r30, r1, 0x14
    lfs f3, 0x4c(r1)
    addi r7, r1, 0x44
    stfs f4, 0x24(r1)
    frsp f4, f2
    lfs f0, 0x48(r1)
    psq_l f1, 0x0(r6), 0, 0
    addi r8, r1, 0x8
    psq_st f1, 0x0(r5), 0, 0
    mr r4, r30
    fsubs f4, f4, f3
    lfs f3, 0x3c(r1)
    stfs f2, 0x40(r1)
    fsubs f6, f3, f0
    lfs f3, 0x38(r1)
    lfs f0, 0x44(r1)
    psq_l f1, 0x0(r7), 0, 0
    fsubs f0, f3, f0
    lfs f2, 0x4c(r1)
    stfs f2, 0x10(r3)
    fmr f2, f4
    psq_st f1, 0x8(r3), 0, 0
    mr r3, r30
    stfs f6, 0xc(r1)
    stfs f0, 0x8(r1)
    psq_l f1, 0x0(r8), 0, 0
    stfs f5, 0x28(r1)
    stfs f4, 0x10(r1)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x1c(r1)
    bl fn_805F98D0
    psq_l f1, 0x0(r30), 0, 0
    lis r3, lbl_807C7030@ha
    lfs f2, 0x1c(r1)
    addi r3, r3, lbl_807C7030@l
    stfs f2, 0x1c(r31)
    psq_st f1, 0x14(r31), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x8(r3)
    stfs f2, 0x28(r31)
    psq_st f1, 0x20(r31), 0, 0
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_800A85CC(void)
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
    stw r4, 0x64(r3)
    mr r3, r29
    bl fn_8005B9CC
    lwz r0, 0x6c(r28)
    mr r31, r3
    srwi. r0, r0, 31
    bne lbl_fn_800A85CC_00000420
    lbz r0, 0x6c(r28)
    clrlwi r30, r0, 25
    b lbl_fn_800A85CC_00000424
lbl_fn_800A85CC_00000420:
    lwz r30, 0x70(r28)
lbl_fn_800A85CC_00000424:
    lbz r0, 0xc(r1)
    mr r3, r31
    stb r0, 0x8(r1)
    bl strlen
    mr r0, r3
    mr r5, r30
    mr r6, r31
    addi r3, r28, 0x6c
    add r7, r31, r0
    addi r8, r1, 0x8
    li r4, 0x0
    bl fn_80013F78
    lwz r0, 0x6c(r28)
    lwz r3, 0x64(r28)
    srwi. r0, r0, 31
    bne lbl_fn_800A85CC_0000046C
    addi r4, r28, 0x6d
    b lbl_fn_800A85CC_00000470
lbl_fn_800A85CC_0000046C:
    lwz r4, 0x74(r28)
lbl_fn_800A85CC_00000470:
    li r5, 0x0
    bl fn_80092814
    stw r3, 0x38(r28)
    mr r3, r29
    bl fn_8005B9CC
    mr r4, r3
    lwz r3, 0x64(r28)
    li r5, 0x0
    bl fn_80092814
    stw r3, 0x3c(r28)
    mr r3, r29
    bl fn_8005B9CC
    bl fn_800DC12C
    stw r3, 0x40(r28)
    mr r3, r29
    bl fn_8005B9CC
    bl fn_800DC288
    lfs f0, lbl_80880CF8
    mr r3, r29
    fmuls f0, f0, f1
    stfs f0, 0x48(r28)
    bl fn_8005B9CC
    bl fn_800DC288
    lfs f0, lbl_80880CF8
    mr r3, r29
    fmuls f0, f0, f1
    stfs f0, 0x54(r28)
    bl fn_8005B9CC
    bl fn_800DC288
    lfs f0, lbl_80880CF8
    mr r3, r29
    fmuls f0, f0, f1
    stfs f0, 0x4c(r28)
    bl fn_8005B9CC
    bl fn_800DC288
    lfs f0, lbl_80880CF8
    mr r3, r29
    fmuls f0, f0, f1
    stfs f0, 0x58(r28)
    bl fn_8005B9CC
    bl fn_800DC288
    lfs f0, lbl_80880CD8
    li r3, 0x1
    stfs f1, 0x60(r28)
    stfs f0, 0x5c(r28)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800A873C(void)
{
    nofralloc
    blr
}

asm void fn_800A8740(void)
{
    nofralloc
    stwu r1, -0x100(r1)
    mflr r0
    stw r0, 0x104(r1)
    stw r31, 0xfc(r1)
    stw r30, 0xf8(r1)
    stw r29, 0xf4(r1)
    lwz r0, 0x68(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800A8740_0000086C
    lwz r0, 0x38(r3)
    lwz r5, 0x64(r3)
    cmpwi r0, 0x0
    bge lbl_fn_800A8740_00000584
    li r30, 0x0
    b lbl_fn_800A8740_00000590
lbl_fn_800A8740_00000584:
    mulli r0, r0, 0x30
    lwz r4, 0x3c(r5)
    add r30, r4, r0
lbl_fn_800A8740_00000590:
    lwz r0, 0x3c(r3)
    cmpwi r0, 0x0
    bge lbl_fn_800A8740_000005A4
    li r29, 0x0
    b lbl_fn_800A8740_000005B0
lbl_fn_800A8740_000005A4:
    mulli r0, r0, 0x30
    lwz r3, 0x3c(r5)
    add r29, r3, r0
lbl_fn_800A8740_000005B0:
    psq_l f1, 0x0(r30), 0, 0
    addi r31, r1, 0xc0
    psq_l f2, 0x8(r30), 0, 0
    addi r4, r1, 0xa4
    psq_l f3, 0x10(r30), 0, 0
    li r5, -0x1
    psq_l f4, 0x18(r30), 0, 0
    psq_l f5, 0x20(r30), 0, 0
    psq_l f6, 0x28(r30), 0, 0
    psq_st f6, 0x28(r31), 0, 0
    lfs f0, lbl_80880CD4
    psq_st f2, 0x8(r31), 0, 0
    fmr f2, f0
    lwz r3, lbl_8087EEB0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    lfs f1, lbl_80880CE8
    psq_st f3, 0x10(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    stfs f0, 0xcc(r1)
    stfs f0, 0xdc(r1)
    stfs f0, 0xec(r1)
    lfs f0, 0x2c(r30)
    lfs f7, 0x1c(r30)
    lfs f8, 0xc(r30)
    stfs f8, 0xa4(r1)
    stfs f7, 0xa8(r1)
    stfs f0, 0xac(r1)
    bl fn_80063D3C
    lfs f0, 0x2c(r29)
    addi r4, r1, 0x98
    lfs f7, 0x1c(r29)
    li r5, -0x1
    lfs f8, 0xc(r29)
    stfs f8, 0x98(r1)
    lwz r3, lbl_8087EEB0
    stfs f7, 0x9c(r1)
    lfs f1, lbl_80880CE8
    stfs f0, 0xa0(r1)
    lfs f2, lbl_80880CD4
    bl fn_80063D3C
    lfs f0, lbl_80880CD4
    addi r4, r1, 0xb0
    lfs f7, lbl_80880CD8
    mr r3, r31
    stfs f7, 0xb0(r1)
    mr r5, r4
    stfs f0, 0xb4(r1)
    stfs f0, 0xb8(r1)
    bl fn_805F93C0
    lfs f9, 0xb8(r1)
    addi r4, r1, 0x8c
    lfs f8, lbl_80880CFC
    addi r5, r1, 0x80
    lfs f7, 0xb4(r1)
    lis r6, 0xffff
    fmuls f12, f9, f8
    lfs f0, 0xb0(r1)
    fmuls f13, f7, f8
    lfs f9, 0x2c(r30)
    fmuls f0, f0, f8
    lfs f10, 0x1c(r30)
    lfs f11, 0xc(r30)
    fadds f7, f9, f12
    stfs f0, 0x68(r1)
    fadds f8, f10, f13
    fadds f0, f11, f0
    lwz r3, lbl_8087EEB0
    stfs f7, 0x88(r1)
    lfs f1, lbl_80880CD4
    stfs f0, 0x80(r1)
    lfs f2, lbl_80880CD8
    stfs f8, 0x84(r1)
    lfs f0, 0x2c(r30)
    lfs f7, 0x1c(r30)
    lfs f8, 0xc(r30)
    stfs f13, 0x6c(r1)
    stfs f12, 0x70(r1)
    stfs f11, 0x74(r1)
    stfs f10, 0x78(r1)
    stfs f9, 0x7c(r1)
    stfs f8, 0x8c(r1)
    stfs f7, 0x90(r1)
    stfs f0, 0x94(r1)
    bl fn_800638B0
    lfs f7, lbl_80880CD4
    addi r4, r1, 0xb0
    lfs f0, lbl_80880CD8
    mr r3, r31
    stfs f7, 0xb0(r1)
    mr r5, r4
    stfs f0, 0xb4(r1)
    stfs f7, 0xb8(r1)
    bl fn_805F93C0
    lfs f9, 0xb8(r1)
    lis r6, 0xff01
    lfs f8, lbl_80880CFC
    addi r4, r1, 0x5c
    lfs f7, 0xb4(r1)
    addi r5, r1, 0x50
    fmuls f12, f9, f8
    lfs f0, 0xb0(r1)
    fmuls f13, f7, f8
    lfs f9, 0x2c(r30)
    fmuls f0, f0, f8
    lfs f10, 0x1c(r30)
    lfs f11, 0xc(r30)
    fadds f7, f9, f12
    stfs f0, 0x38(r1)
    fadds f8, f10, f13
    fadds f0, f11, f0
    lwz r3, lbl_8087EEB0
    stfs f7, 0x58(r1)
    lfs f1, lbl_80880CD4
    subi r6, r6, 0x100
    stfs f0, 0x50(r1)
    lfs f2, lbl_80880CD8
    stfs f8, 0x54(r1)
    lfs f0, 0x2c(r30)
    lfs f7, 0x1c(r30)
    lfs f8, 0xc(r30)
    stfs f13, 0x3c(r1)
    stfs f12, 0x40(r1)
    stfs f11, 0x44(r1)
    stfs f10, 0x48(r1)
    stfs f9, 0x4c(r1)
    stfs f8, 0x5c(r1)
    stfs f7, 0x60(r1)
    stfs f0, 0x64(r1)
    bl fn_800638B0
    lfs f7, lbl_80880CD4
    addi r4, r1, 0xb0
    lfs f0, lbl_80880CD8
    mr r3, r31
    stfs f7, 0xb0(r1)
    mr r5, r4
    stfs f7, 0xb4(r1)
    stfs f0, 0xb8(r1)
    bl fn_805F93C0
    lfs f9, 0xb8(r1)
    lis r6, 0xff00
    lfs f8, lbl_80880CFC
    addi r4, r1, 0x2c
    lfs f7, 0xb4(r1)
    addi r5, r1, 0x20
    fmuls f12, f9, f8
    lfs f0, 0xb0(r1)
    fmuls f13, f7, f8
    lfs f9, 0x2c(r30)
    fmuls f0, f0, f8
    lfs f10, 0x1c(r30)
    lfs f11, 0xc(r30)
    fadds f7, f9, f12
    stfs f0, 0x8(r1)
    fadds f8, f10, f13
    fadds f0, f11, f0
    lwz r3, lbl_8087EEB0
    stfs f7, 0x28(r1)
    lfs f1, lbl_80880CD4
    addi r6, r6, 0xff
    stfs f0, 0x20(r1)
    lfs f2, lbl_80880CD8
    stfs f8, 0x24(r1)
    lfs f0, 0x2c(r30)
    lfs f7, 0x1c(r30)
    lfs f8, 0xc(r30)
    stfs f13, 0xc(r1)
    stfs f12, 0x10(r1)
    stfs f11, 0x14(r1)
    stfs f10, 0x18(r1)
    stfs f9, 0x1c(r1)
    stfs f8, 0x2c(r1)
    stfs f7, 0x30(r1)
    stfs f0, 0x34(r1)
    bl fn_800638B0
lbl_fn_800A8740_0000086C:
    lwz r0, 0x104(r1)
    lwz r31, 0xfc(r1)
    lwz r30, 0xf8(r1)
    lwz r29, 0xf4(r1)
    mtlr r0
    addi r1, r1, 0x100
    blr
}

asm void fn_800A8A80(void)
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
    mr r3, r4
    lwz r0, 0x6c(r28)
    srwi. r0, r0, 31
    bne lbl_fn_800A8A80_000008C0
    addi r4, r28, 0x6d
    b lbl_fn_800A8A80_000008C4
lbl_fn_800A8A80_000008C0:
    lwz r4, 0x74(r28)
lbl_fn_800A8A80_000008C4:
    bl fn_8008937C
    lis r31, lbl_80732A5C@ha
    mr r30, r3
    addi r4, r31, lbl_80732A5C@l
    addi r5, r28, 0x4
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    addi r31, r31, lbl_80732A5C@l
    mr r3, r30
    addi r4, r31, 0x7
    addi r5, r28, 0x68
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r30
    addi r4, r31, 0x11
    bl fn_8008937C
    lfs f1, lbl_80880D00
    mr r29, r3
    lfs f2, lbl_80880D04
    addi r4, r31, 0x19
    lfs f3, lbl_80880D08
    addi r5, r28, 0x48
    li r6, 0x0
    li r7, 0x0
    bl fn_80087858
    lfs f1, lbl_80880D00
    mr r3, r29
    lfs f2, lbl_80880D04
    addi r4, r31, 0x1d
    lfs f3, lbl_80880D08
    addi r5, r28, 0x54
    li r6, 0x0
    li r7, 0x0
    bl fn_80087858
    mr r3, r30
    addi r4, r31, 0x21
    bl fn_8008937C
    lfs f1, lbl_80880D00
    mr r29, r3
    lfs f2, lbl_80880D04
    addi r4, r31, 0x19
    lfs f3, lbl_80880D08
    addi r5, r28, 0x4c
    li r6, 0x0
    li r7, 0x0
    bl fn_80087858
    lfs f1, lbl_80880D00
    mr r3, r29
    lfs f2, lbl_80880D04
    addi r4, r31, 0x1d
    lfs f3, lbl_80880D08
    addi r5, r28, 0x58
    li r6, 0x0
    li r7, 0x0
    bl fn_80087858
    lfs f1, lbl_80880D0C
    mr r3, r30
    lfs f2, lbl_80880D10
    addi r4, r31, 0x29
    lfs f3, lbl_80880D14
    addi r5, r28, 0x60
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800A8BE4(void)
{
    nofralloc
    lfs f0, lbl_80880CD4
    lis r4, lbl_80778BB8@ha
    li r0, 0x0
    li r5, 0x1
    addi r4, r4, lbl_80778BB8@l
    stw r5, 0x4(r3)
    stfs f0, 0x8(r3)
    stfs f0, 0xc(r3)
    stfs f0, 0x10(r3)
    stfs f0, 0x14(r3)
    stfs f0, 0x18(r3)
    stfs f0, 0x1c(r3)
    stfs f0, 0x20(r3)
    stfs f0, 0x24(r3)
    stfs f0, 0x28(r3)
    stfs f0, 0x2c(r3)
    stfs f0, 0x30(r3)
    stfs f0, 0x34(r3)
    stw r0, 0x64(r3)
    stw r0, 0x68(r3)
    stw r0, 0x6c(r3)
    stw r0, 0x70(r3)
    stw r0, 0x74(r3)
    stw r4, 0x0(r3)
    blr
}

asm void fn_800A8C48(void)
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
    beq lbl_fn_800A8C48_00000AA4
    beq lbl_fn_800A8C48_00000A94
    addic. r0, r3, 0x6c
    beq lbl_fn_800A8C48_00000A94
    lwz r0, 0x6c(r3)
    srwi. r0, r0, 31
    beq lbl_fn_800A8C48_00000A94
    lwz r3, 0x74(r3)
    bl dtor_80084684
lbl_fn_800A8C48_00000A94:
    cmpwi r31, 0x0
    ble lbl_fn_800A8C48_00000AA4
    mr r3, r30
    bl dtor_80084684
lbl_fn_800A8C48_00000AA4:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800A8CB8(void)
{
    nofralloc
    stwu r1, -0xe0(r1)
    mflr r0
    stw r0, 0xe4(r1)
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
    stw r31, 0x8c(r1)
    stw r30, 0x88(r1)
    stw r29, 0x84(r1)
    stw r28, 0x80(r1)
    mr r28, r3
    lwz r0, 0x38(r3)
    lwz r5, 0x64(r3)
    cmpwi r0, 0x0
    bge lbl_fn_800A8CB8_00000B20
    li r30, 0x0
    b lbl_fn_800A8CB8_00000B2C
lbl_fn_800A8CB8_00000B20:
    mulli r0, r0, 0x30
    lwz r4, 0x3c(r5)
    add r30, r4, r0
lbl_fn_800A8CB8_00000B2C:
    lwz r0, 0x3c(r3)
    cmpwi r0, 0x0
    bge lbl_fn_800A8CB8_00000B40
    li r29, 0x0
    b lbl_fn_800A8CB8_00000B4C
lbl_fn_800A8CB8_00000B40:
    mulli r0, r0, 0x30
    lwz r4, 0x3c(r5)
    add r29, r4, r0
lbl_fn_800A8CB8_00000B4C:
    lfs f5, 0x34(r3)
    lfs f4, lbl_80880D18
    lfs f0, 0x2c(r3)
    fmuls f12, f5, f4
    lfs f3, 0x30(r3)
    fmuls f30, f0, f4
    lfs f0, 0x28(r3)
    fmuls f13, f3, f4
    lfs f4, 0x20(r3)
    fadds f6, f0, f12
    lfs f3, 0x24(r3)
    fadds f8, f4, f30
    lfs f4, 0x1c(r3)
    fadds f7, f3, f13
    lfs f3, 0x18(r3)
    fadds f29, f4, f6
    lfs f5, lbl_80880CE8
    lfs f4, 0x60(r3)
    fadds f28, f3, f7
    lfs f0, 0x14(r3)
    lfs f9, 0x2c(r30)
    lfs f10, 0x1c(r30)
    fadds f27, f0, f8
    lfs f11, 0xc(r30)
    fmuls f4, f5, f4
    lfs f3, lbl_80880CE4
    lfs f0, lbl_80880CE0
    fmuls f3, f3, f4
    stfs f8, 0x20(r3)
    stfs f7, 0x24(r3)
    fmuls f31, f0, f3
    stfs f6, 0x28(r3)
    addi r3, r1, 0x5c
    mr r4, r3
    stfs f11, 0x68(r1)
    stfs f10, 0x6c(r1)
    stfs f9, 0x70(r1)
    stfs f30, 0x38(r1)
    stfs f13, 0x3c(r1)
    stfs f12, 0x40(r1)
    stfs f27, 0x5c(r1)
    stfs f28, 0x60(r1)
    stfs f29, 0x64(r1)
    bl fn_805F98D0
    lfs f6, 0x1c(r30)
    addi r31, r1, 0x50
    lfs f3, 0x1c(r29)
    addi r5, r1, 0x2c
    lfs f7, 0xc(r30)
    mr r3, r31
    lfs f4, 0xc(r29)
    fsubs f8, f3, f6
    lfs f5, 0x2c(r30)
    mr r4, r31
    lfs f0, 0x2c(r29)
    fsubs f9, f4, f7
    stfs f8, 0x30(r1)
    fsubs f2, f0, f5
    stfs f9, 0x2c(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f7, 0x14(r1)
    stfs f6, 0x18(r1)
    stfs f5, 0x1c(r1)
    stfs f4, 0x20(r1)
    stfs f3, 0x24(r1)
    stfs f0, 0x28(r1)
    stfs f2, 0x34(r1)
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x58(r1)
    bl fn_805F98D0
    mr r3, r31
    mr r4, r31
    bl fn_805F98D0
    mr r4, r31
    addi r3, r1, 0x5c
    addi r5, r1, 0x44
    bl fn_805F99B0
    addi r3, r1, 0x44
    addi r4, r1, 0x5c
    addi r5, r1, 0x8
    bl fn_805F99B0
    addi r4, r1, 0x8
    lfs f2, 0x10(r1)
    addi r3, r1, 0x44
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    li r0, 0x0
    lfs f3, lbl_80880CD4
    lfs f0, 0x44(r1)
    stfs f2, 0x4c(r1)
    fcmpu cr0, f3, f0
    bne lbl_fn_800A8CB8_00000CD8
    lfs f0, 0x48(r1)
    fcmpu cr0, f3, f0
    bne lbl_fn_800A8CB8_00000CD8
    frsp f0, f2
    fcmpu cr0, f3, f0
    bne lbl_fn_800A8CB8_00000CD8
    li r0, 0x1
lbl_fn_800A8CB8_00000CD8:
    cmpwi r0, 0x0
    bne lbl_fn_800A8CB8_00000CEC
    addi r3, r1, 0x44
    mr r4, r3
    bl fn_805F98D0
lbl_fn_800A8CB8_00000CEC:
    addi r3, r1, 0x50
    addi r4, r1, 0x44
    bl fn_805F9990
    fmuls f5, f31, f1
    lfs f4, 0x44(r1)
    lfs f3, 0x48(r1)
    lfs f0, 0x4c(r1)
    fmuls f6, f4, f5
    lfs f4, lbl_80880CF4
    fmuls f3, f3, f5
    fmuls f0, f0, f5
    stfs f6, 0x44(r1)
    stfs f3, 0x48(r1)
    stfs f0, 0x4c(r1)
    lfs f0, 0x20(r28)
    lfs f5, 0x24(r28)
    fadds f0, f0, f6
    lfs f6, 0x28(r28)
    stfs f0, 0x20(r28)
    fmuls f3, f0, f4
    lfs f0, 0x48(r1)
    fadds f0, f5, f0
    stfs f0, 0x24(r28)
    fmuls f0, f0, f4
    lfs f5, 0x4c(r1)
    fadds f5, f6, f5
    stfs f0, 0x24(r28)
    stfs f3, 0x20(r28)
    fmuls f0, f5, f4
    stfs f0, 0x28(r28)
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
    lwz r31, 0x8c(r1)
    lwz r30, 0x88(r1)
    lwz r29, 0x84(r1)
    lwz r28, 0x80(r1)
    lwz r0, 0xe4(r1)
    mtlr r0
    addi r1, r1, 0xe0
    blr
}

asm void fn_800A8FA4(void)
{
    nofralloc
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beqlr
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    stfs f2, 0x34(r3)
    psq_st f1, 0x2c(r3), 0, 0
    blr
}

asm void fn_800A8FC4(void)
{
    nofralloc
    lwz r0, 0x6c(r3)
    srwi. r0, r0, 31
    bne lbl_fn_800A8FC4_00000DE0
    addi r3, r3, 0x6d
    blr
lbl_fn_800A8FC4_00000DE0:
    lwz r3, 0x74(r3)
    blr
}

asm void fn_800A8FE0(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    blr
}

asm void fn_800A8FE8(void)
{
    nofralloc
    stw r4, 0x4(r3)
    blr
}

asm void fn_800A8FF0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x6
    li r7, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_80732AF4@ha
    addi r5, r31, lbl_80732AF4@l
    stw r30, 0x18(r1)
    mr r6, r5
    stw r29, 0x14(r1)
    mr r29, r3
    li r3, 0x780
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_800A8FF0_00000EE0
    mr r4, r29
    bl fn_800D1D3C
    lis r3, lbl_80778C68@ha
    addi r3, r3, lbl_80778C68@l
    stw r3, 0x0(r30)
    bl fn_800827E0
    addi r7, r31, lbl_80732AF4@l
    lis r31, 0x9
    mr r8, r7
    li r5, 0x20
    subi r4, r31, 0x3600
    li r6, 0x6
    li r9, 0x0
    li r10, 0x0
    bl fn_800839EC
    lis r5, lbl_80778CA8@ha
    subi r4, r31, 0x3600
    addi r5, r5, lbl_80778CA8@l
    stw r5, 0x48(r30)
    li r0, 0x0
    stw r3, 0x4c(r30)
    addi r3, r30, 0x58
    stw r4, 0x50(r30)
    stw r0, 0x54(r30)
    bl fn_800A9E54
    addi r3, r30, 0x9c
    bl fn_800AC5F4
    addi r3, r30, 0x118
    bl fn_800AFE40
    addi r3, r30, 0x1c8
    bl fn_800AA6C4
    addi r3, r30, 0x2c4
    bl fn_800AEE9C
    addi r3, r30, 0x33c
    bl fn_800ABD84
    addi r3, r30, 0x340
    bl fn_800B089C
    addi r3, r30, 0x428
    bl fn_800AD0F0
    li r0, 0xe
    stw r0, 0x778(r30)
lbl_fn_800A8FF0_00000EE0:
    stw r30, lbl_8087EF8C
    mr r3, r30
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800A90FC(void)
{
    nofralloc
    b fn_800D3FA4
}

asm void fn_800A9100(void)
{
    nofralloc
    blr
}

asm void fn_800A9104(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    addi r3, r3, 0x2c4
    bl fn_800AEF68
    addi r3, r31, 0x1c8
    bl fn_800AA8DC
    addi r3, r31, 0x428
    bl fn_800AD340
    addi r3, r31, 0x340
    bl fn_800B1598
    mr r3, r31
    bl fn_800A9558
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800A9154(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_800A9154_00000F84
    cmpwi r4, 0x0
    ble lbl_fn_800A9154_00000F84
    bl dtor_80084684
lbl_fn_800A9154_00000F84:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800A9194(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_800A9194_00000FC4
    cmpwi r4, 0x0
    ble lbl_fn_800A9194_00000FC4
    bl dtor_80084684
lbl_fn_800A9194_00000FC4:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800A91D4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_800A91D4_00001004
    cmpwi r4, 0x0
    ble lbl_fn_800A91D4_00001004
    bl dtor_80084684
lbl_fn_800A91D4_00001004:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800A9214(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_800A9214_00001044
    cmpwi r4, 0x0
    ble lbl_fn_800A9214_00001044
    bl dtor_80084684
lbl_fn_800A9214_00001044:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800A9254(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_800A9254_00001084
    cmpwi r4, 0x0
    ble lbl_fn_800A9254_00001084
    bl dtor_80084684
lbl_fn_800A9254_00001084:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800A9294(void)
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
    beq lbl_fn_800A9294_000010DC
    li r4, -0x1
    addi r3, r3, 0x38
    bl fn_800D5808
    cmpwi r31, 0x0
    ble lbl_fn_800A9294_000010DC
    mr r3, r30
    bl dtor_80084684
lbl_fn_800A9294_000010DC:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800A92F0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_800A92F0_00001120
    cmpwi r4, 0x0
    ble lbl_fn_800A92F0_00001120
    bl dtor_80084684
lbl_fn_800A92F0_00001120:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800A9330(void)
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
    beq lbl_fn_800A9330_000011B0
    li r4, -0x1
    addi r3, r3, 0xb8
    bl fn_800D5808
    addi r3, r30, 0x88
    li r4, -0x1
    bl fn_800D5808
    addic. r0, r30, 0x80
    beq lbl_fn_800A9330_000011A0
    lwz r3, 0x84(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800A9330_00001194
    beq lbl_fn_800A9330_00001194
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_800A9330_00001194:
    li r0, 0x0
    stw r0, 0x84(r30)
    stw r0, 0x80(r30)
lbl_fn_800A9330_000011A0:
    cmpwi r31, 0x0
    ble lbl_fn_800A9330_000011B0
    mr r3, r30
    bl dtor_80084684
lbl_fn_800A9330_000011B0:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800A93C4(void)
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
    beq lbl_fn_800A93C4_0000123C
    li r4, -0x1
    addi r3, r3, 0x320
    bl fn_800D5808
    addi r3, r30, 0x2f0
    li r4, -0x1
    bl fn_800D5808
    lis r4, fn_800D5808@ha
    addi r3, r30, 0x170
    addi r4, r4, fn_800D5808@l
    li r5, 0x30
    li r6, 0x8
    bl fn_806959D8
    addi r3, r30, 0x138
    li r4, -0x1
    bl fn_800D5808
    cmpwi r31, 0x0
    ble lbl_fn_800A93C4_0000123C
    mr r3, r30
    bl dtor_80084684
lbl_fn_800A93C4_0000123C:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800A9450(void)
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
    beq lbl_fn_800A9450_00001340
    addic. r31, r3, 0x428
    beq lbl_fn_800A9450_000012C4
    addi r3, r31, 0x320
    li r4, -0x1
    bl fn_800D5808
    addi r3, r31, 0x2f0
    li r4, -0x1
    bl fn_800D5808
    lis r4, fn_800D5808@ha
    addi r3, r31, 0x170
    addi r4, r4, fn_800D5808@l
    li r5, 0x30
    li r6, 0x8
    bl fn_806959D8
    addi r3, r31, 0x138
    li r4, -0x1
    bl fn_800D5808
lbl_fn_800A9450_000012C4:
    addic. r31, r29, 0x340
    beq lbl_fn_800A9450_00001310
    addi r3, r31, 0xb8
    li r4, -0x1
    bl fn_800D5808
    addi r3, r31, 0x88
    li r4, -0x1
    bl fn_800D5808
    addic. r0, r31, 0x80
    beq lbl_fn_800A9450_00001310
    lwz r3, 0x84(r31)
    cmpwi r3, 0x0
    beq lbl_fn_800A9450_00001304
    beq lbl_fn_800A9450_00001304
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_800A9450_00001304:
    li r0, 0x0
    stw r0, 0x84(r31)
    stw r0, 0x80(r31)
lbl_fn_800A9450_00001310:
    addic. r3, r29, 0x2c4
    beq lbl_fn_800A9450_00001324
    addi r3, r3, 0x38
    li r4, -0x1
    bl fn_800D5808
lbl_fn_800A9450_00001324:
    mr r3, r29
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r30, 0x0
    ble lbl_fn_800A9450_00001340
    mr r3, r29
    bl dtor_80084684
lbl_fn_800A9450_00001340:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800A9558(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    lwz r4, lbl_8087EFA8
    lwz r0, 0x54(r4)
    cmpwi r0, 0x0
    beq lbl_fn_800A9558_00001398
    lfs f1, 0x238(r4)
    addi r4, r31, 0x58
    lwz r3, lbl_8087EFB4
    lwz r5, 0x778(r31)
    bl fn_800BDB58
lbl_fn_800A9558_00001398:
    addi r3, r31, 0x2c4
    bl fn_800AEF4C
    cmpwi r3, 0x0
    beq lbl_fn_800A9558_000013BC
    lwz r3, lbl_8087EFB4
    addi r4, r31, 0x2c4
    lfs f1, lbl_80880D20
    li r5, 0xe
    bl fn_800BDB58
lbl_fn_800A9558_000013BC:
    lwz r3, lbl_8087EFA8
    lwz r0, 0xd4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800A9558_000013E0
    lfs f1, 0x23c(r3)
    addi r4, r31, 0x9c
    lwz r3, lbl_8087EFB4
    li r5, 0xe
    bl fn_800BDB58
lbl_fn_800A9558_000013E0:
    lwz r3, lbl_8087EFB4
    addi r4, r31, 0x118
    lfs f1, lbl_80880D20
    li r5, 0xe
    bl fn_800BDB58
    lwz r3, lbl_8087EFA8
    lwz r0, 0x324(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800A9558_00001438
    lwz r4, 0x210(r31)
    lis r0, 0x4330
    stw r0, 0x8(r1)
    lis r3, lbl_80732AC0@ha
    xoris r0, r4, 0x8000
    lfd f1, lbl_80732AC0@l(r3)
    stw r0, 0xc(r1)
    addi r4, r31, 0x1c8
    lwz r3, lbl_8087EFB4
    lfd f0, 0x8(r1)
    lwz r5, 0x778(r31)
    fsubs f1, f0, f1
    bl fn_800BDB58
lbl_fn_800A9558_00001438:
    lwz r6, lbl_8087EFA8
    addi r4, r31, 0x428
    lwz r3, lbl_8087EFB4
    li r5, 0xe
    lfs f1, 0x3e4(r6)
    bl fn_800BDB58
    addi r3, r31, 0x340
    bl fn_800B0A48
    cmpwi r3, 0x0
    beq lbl_fn_800A9558_00001474
    lwz r3, lbl_8087EFB4
    addi r4, r31, 0x340
    lfs f1, lbl_80880D20
    li r5, 0xe
    bl fn_800BDB58
lbl_fn_800A9558_00001474:
    lwz r3, lbl_8087EFA8
    lwz r0, 0x374(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800A9558_00001498
    lwz r3, lbl_8087EFB4
    addi r4, r31, 0x33c
    lfs f1, lbl_80880D20
    li r5, 0xe
    bl fn_800BDB58
lbl_fn_800A9558_00001498:
    li r0, 0x0
    stw r0, 0x54(r31)
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800A96AC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r7, 0x0
    stw r0, 0x14(r1)
    mr r0, r5
    mr r5, r6
    li r6, 0x0
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    clrlwi r3, r4, 16
    clrlwi r4, r0, 16
    bl fn_80615E00
    lwz r12, 0x48(r30)
    mr r31, r3
    lis r5, lbl_80732AF4@ha
    addi r3, r30, 0x48
    lwz r12, 0xc(r12)
    addi r5, r5, lbl_80732AF4@l
    addi r7, r5, 0x1
    mr r4, r31
    li r5, 0x20
    li r6, 0x6
    mtctr r12
    bctrl
    mr r30, r3
    mr r4, r31
    bl DCInvalidateRange
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800A9738(void)
{
    nofralloc
    lwz r6, 0xc(r3)
    divwu r0, r6, r5
    mullw r0, r0, r5
    subf. r7, r0, r6
    beq lbl_fn_800A9738_00001558
    subf r7, r7, r5
lbl_fn_800A9738_00001558:
    lwz r0, 0x8(r3)
    add r5, r6, r7
    subf r0, r5, r0
    cmplw r4, r0
    ble lbl_fn_800A9738_00001574
    li r3, 0x0
    blr
lbl_fn_800A9738_00001574:
    lwz r0, 0xc(r3)
    lwz r5, 0x4(r3)
    add r6, r0, r7
    add r0, r6, r4
    stw r0, 0xc(r3)
    add r3, r5, r6
    blr
}

asm void fn_800A9788(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x54(r3)
    blr
}

asm void fn_800A9794(void)
{
    nofralloc
    lwz r4, 0x50(r3)
    lwz r0, 0x54(r3)
    lwz r5, lbl_8087EF88
    subf r0, r0, r4
    subf r0, r0, r4
    cmplw r5, r0
    ble lbl_fn_800A9794_000015BC
    mr r0, r5
lbl_fn_800A9794_000015BC:
    stw r0, lbl_8087EF88
    li r0, 0x0
    stw r0, 0x54(r3)
    blr
}

asm void fn_800A97C4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    addi r3, r3, 0x1c8
    bl fn_800AAE20
    addi r3, r31, 0x340
    bl fn_800B1554
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800A97FC(void)
{
    nofralloc
    blr
}

asm void fn_800A9800(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    blr
}

asm void fn_800A9808(void)
{
    nofralloc
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    add r3, r4, r0
    blr
}

asm void fn_800A9818(void)
{
    nofralloc
    blr
}
