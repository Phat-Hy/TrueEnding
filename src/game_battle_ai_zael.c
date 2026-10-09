#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_21(void);
extern void _savegpr_21(void);
extern void dtor_80084684(void);
extern void fn_8005B9CC(void);
extern void fn_8005BBF8(void);
extern void fn_8005BCE8(void);
extern void fn_80069758(void);
extern void fn_8006AA20(void);
extern void fn_80084320(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_800874C8(void);
extern void fn_8008771C(void);
extern void fn_80087858(void);
extern void fn_80087994(void);
extern void fn_80087E9C(void);
extern void fn_80088724(void);
extern void fn_8008937C(void);
extern void fn_8008AD4C(void);
extern void fn_8008B140(void);
extern void fn_80092814(void);
extern void fn_80096E94(void);
extern void fn_800971D4(void);
extern void fn_80097A88(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800C31F4(void);
extern void fn_800CB360(void);
extern void fn_800CB3A0(void);
extern void fn_800D3FA4(void);
extern void fn_800DC288(void);
extern void fn_802180A8(void);
extern void fn_802377B8(void);
extern void fn_803EBC44(void);
extern void fn_803EBE74(void);
extern void fn_803EC0A4(void);
extern void fn_803EC0F8(void);
extern void fn_803EC568(void);
extern void fn_803EC69C(void);
extern void fn_803EC758(void);
extern void fn_803EC7A0(void);
extern void fn_803EC91C(void);
extern void fn_803ED0D4(void);
extern void fn_803ED5D0(void);
extern void fn_803ED774(void);
extern void fn_803F3334(void);
extern void fn_803F3360(void);
extern void fn_8041524C(void);
extern void fn_80431314(void);
extern void fn_80431320(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9990(void);
extern void fn_80680CF8(void);
extern void fn_80682428(void);
extern void fn_80684600(void);
extern void fn_80695720(void);
extern void fn_806958E0(void);
extern int sprintf(char* str, const char* format, ...);
extern char* strcpy(char* dest, const char* src);

/* External data declarations */
extern u8 lbl_80753FB8[];
extern u8 lbl_80753FC0[];
extern u8 lbl_80753FDC[];
extern u8 lbl_807540A0[];
extern u8 lbl_807774B8[];
extern u8 lbl_807774D8[];
extern u8 lbl_8078EDA8[];

/* Small data declarations */
extern u32 lbl_8087D710;
extern u32 lbl_8087DF40;
extern u32 lbl_8087DF44;
extern u32 lbl_8087DF48;
extern u32 lbl_8087DF4C;
extern u32 lbl_8087DFC8;
extern u32 lbl_8087DFCC;
extern u32 lbl_8087EF10;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F098;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F8A0;
extern u32 lbl_80886818;
extern u32 lbl_80886820;
extern u32 lbl_80886824;
extern u32 lbl_80886828;
extern u32 lbl_8088682C;
extern u32 lbl_80886830;
extern u32 lbl_80886834;
extern u32 lbl_80886838;
extern u32 lbl_8088683C;
extern u32 lbl_80886840;
extern u32 lbl_80886844;
extern u32 lbl_80886848;
extern u32 lbl_8088684C;
extern u32 lbl_80886850;
extern u32 lbl_80886854;
extern u32 lbl_80886858;
extern u32 lbl_8088685C;
extern u32 lbl_80886860;
extern u32 lbl_80886864;
extern u32 lbl_80886868;

/* Function declarations */
void fn_8042F97C(void);
void fn_8042FA08(void);
void fn_8042FAC4(void);
void fn_8042FDBC(void);
void fn_804302FC(void);
void fn_804303D4(void);
void fn_80430428(void);
void fn_804307B4(void);
void fn_804308F8(void);
void fn_80430B54(void);
void fn_80430BAC(void);
void fn_80430BC0(void);
void fn_80430D7C(void);
void fn_80430DE4(void);
void fn_80430FA4(void);
void fn_80430FC0(void);
void fn_804310B0(void);
void fn_8043119C(void);
void fn_80431294(void);

asm void fn_8042F97C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_803EC91C
    cmpwi r3, 0x0
    bne lbl_fn_8042F97C_00000074
    mr r3, r31
    bl fn_800D3FA4
    cmpwi r3, 0x0
    beq lbl_fn_8042F97C_00000074
    li r0, 0x1
    stw r0, 0x54(r31)
    li r5, 0x0
    li r4, 0x0
    b lbl_fn_8042F97C_00000060
lbl_fn_8042F97C_00000044:
    lwz r3, 0x8b8(r31)
    addi r5, r5, 0x1
    lwzx r3, r3, r4
    addi r4, r4, 0x4
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_8042F97C_00000060:
    lwz r0, 0x8b4(r31)
    cmplw r5, r0
    blt lbl_fn_8042F97C_00000044
    li r3, 0x1
    b lbl_fn_8042F97C_00000078
lbl_fn_8042F97C_00000074:
    li r3, 0x0
lbl_fn_8042F97C_00000078:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8042FA08(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    lwz r12, 0x0(r3)
    lwz r12, 0x2c(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8042FA08_000000F0
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    li r5, 0x1
    bl fn_803ED0D4
lbl_fn_8042FA08_000000F0:
    lfs f0, lbl_80886818
    li r0, 0x0
    li r3, 0x1
    stw r3, 0x8(r1)
    mr r3, r31
    addi r4, r1, 0x8
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    lwz r12, 0x0(r31)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8042FAC4(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stfd f31, 0x70(r1)
    psq_st f31, 0x78(r1), 0, 0
    stw r31, 0x6c(r1)
    mr r31, r3
    stw r30, 0x68(r1)
    stw r29, 0x64(r1)
    lwz r4, 0xf4(r3)
    lwz r0, 0x7c(r4)
    cmpwi r0, 0x0
    bne lbl_fn_8042FAC4_000001C8
    lwz r0, 0x8cc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8042FAC4_0000041C
    li r0, 0x0
    stw r0, 0x8cc(r3)
    li r5, 0x0
    li r6, 0x0
    b lbl_fn_8042FAC4_000001B8
lbl_fn_8042FAC4_0000019C:
    lwz r4, 0x8b8(r3)
    addi r5, r5, 0x1
    lwzx r4, r4, r6
    addi r6, r6, 0x4
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
lbl_fn_8042FAC4_000001B8:
    lwz r0, 0x8b4(r3)
    cmplw r5, r0
    blt lbl_fn_8042FAC4_0000019C
    b lbl_fn_8042FAC4_0000041C
lbl_fn_8042FAC4_000001C8:
    lwz r4, lbl_8087EFB4
    lfs f0, 0x74(r3)
    lfs f1, 0x114(r4)
    lfs f3, 0x110(r4)
    fsubs f4, f1, f0
    lfs f2, 0x70(r3)
    lfs f0, 0x6c(r3)
    addi r3, r1, 0x8
    lfs f1, 0x10c(r4)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f4, 0x10(r1)
    bl fn_805F9920
    lfs f0, 0x8d4(r31)
    fmuls f0, f0, f0
    fcmpo cr0, f1, f0
    ble lbl_fn_8042FAC4_00000238
    lwz r0, 0x54(r31)
    cmpwi r0, 0x4
    bne lbl_fn_8042FAC4_0000041C
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
    b lbl_fn_8042FAC4_0000041C
lbl_fn_8042FAC4_00000238:
    lwz r0, 0x54(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8042FAC4_00000258
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
lbl_fn_8042FAC4_00000258:
    lwz r0, 0x54(r31)
    cmpwi r0, 0x2
    bne lbl_fn_8042FAC4_000002A8
    lfs f0, lbl_80886818
    li r0, 0x0
    li r3, 0x3
    stw r3, 0x38(r1)
    mr r3, r31
    addi r4, r1, 0x38
    stw r0, 0x3c(r1)
    stw r0, 0x40(r1)
    stw r0, 0x44(r1)
    stw r0, 0x48(r1)
    stfs f0, 0x4c(r1)
    stfs f0, 0x50(r1)
    stfs f0, 0x54(r1)
    lwz r12, 0x0(r31)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
lbl_fn_8042FAC4_000002A8:
    lwz r0, 0x54(r31)
    cmpwi r0, 0x3
    bne lbl_fn_8042FAC4_0000041C
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8042FAC4_000002F0
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    bl fn_803ED5D0
lbl_fn_8042FAC4_000002F0:
    li r30, 0x0
    li r29, 0x0
    b lbl_fn_8042FAC4_00000314
lbl_fn_8042FAC4_000002FC:
    lwz r0, 0x8a8(r31)
    addi r4, r31, 0x4d4
    add r3, r0, r29
    bl fn_803EBE74
    addi r29, r29, 0x1c
    addi r30, r30, 0x1
lbl_fn_8042FAC4_00000314:
    lwz r0, 0x8a4(r31)
    cmplw r30, r0
    blt lbl_fn_8042FAC4_000002FC
    li r30, 0x0
    li r29, 0x0
    b lbl_fn_8042FAC4_00000344
lbl_fn_8042FAC4_0000032C:
    lwz r0, 0x8b0(r31)
    addi r4, r31, 0x4d4
    add r3, r0, r29
    bl fn_803EC0F8
    addi r29, r29, 0x8
    addi r30, r30, 0x1
lbl_fn_8042FAC4_00000344:
    lwz r0, 0x8ac(r31)
    cmplw r30, r0
    blt lbl_fn_8042FAC4_0000032C
    lwz r0, 0x8cc(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8042FAC4_0000037C
    lfs f1, 0x708(r31)
    lfs f0, 0x8d0(r31)
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_8042FAC4_0000037C
    mr r3, r31
    bl fn_8042FDBC
    b lbl_fn_8042FAC4_000003DC
lbl_fn_8042FAC4_0000037C:
    lfs f31, 0x708(r31)
    addi r3, r31, 0x4d4
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_8042FAC4_000003DC
    lfs f0, lbl_80886818
    li r0, 0x0
    li r3, 0x4
    stw r3, 0x18(r1)
    mr r3, r31
    addi r4, r1, 0x18
    stw r0, 0x1c(r1)
    stw r0, 0x20(r1)
    stw r0, 0x24(r1)
    stw r0, 0x28(r1)
    stfs f0, 0x2c(r1)
    stfs f0, 0x30(r1)
    stfs f0, 0x34(r1)
    lwz r12, 0x0(r31)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
lbl_fn_8042FAC4_000003DC:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8042FAC4_0000041C
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    li r5, 0x1
    bl fn_803ED0D4
lbl_fn_8042FAC4_0000041C:
    lwz r0, 0x84(r1)
    psq_l f31, 0x78(r1), 0, 0
    lfd f31, 0x70(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    lwz r29, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_8042FDBC(void)
{
    nofralloc
    stwu r1, -0x230(r1)
    mflr r0
    stw r0, 0x234(r1)
    addi r11, r1, 0x1e0
    stfd f31, 0x220(r1)
    psq_st f31, 0x228(r1), 0, 0
    stfd f30, 0x210(r1)
    psq_st f30, 0x218(r1), 0, 0
    stfd f29, 0x200(r1)
    psq_st f29, 0x208(r1), 0, 0
    stfd f28, 0x1f0(r1)
    psq_st f28, 0x1f8(r1), 0, 0
    stfd f27, 0x1e0(r1)
    psq_st f27, 0x1e8(r1), 0, 0
    bl _savegpr_21
    lwz r0, 0x8cc(r3)
    lis r4, 0x4330
    stw r4, 0x1a0(r1)
    mr r21, r3
    cmpwi r0, 0x0
    stw r4, 0x1a8(r1)
    bne lbl_fn_8042FDBC_00000940
    lis r4, lbl_80753FDC@ha
    li r0, 0x1
    stw r0, 0x8cc(r3)
    addi r4, r4, lbl_80753FDC@l
    addi r4, r4, 0x1
    li r5, 0x0
    addi r3, r3, 0x4d4
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8042FDBC_000004C8
    li r23, 0x0
    b lbl_fn_8042FDBC_000004D4
lbl_fn_8042FDBC_000004C8:
    mulli r0, r3, 0x30
    lwz r3, 0x510(r21)
    add r23, r3, r0
lbl_fn_8042FDBC_000004D4:
    cmpwi r23, 0x0
    beq lbl_fn_8042FDBC_00000940
    lis r4, lbl_80753FB8@ha
    lfs f1, lbl_80886820
    addi r4, r4, lbl_80753FB8@l
    addi r3, r1, 0x8
    lwz r4, 0x4(r4)
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    lfs f28, lbl_80886818
    lis r3, lbl_80753FC0@ha
    li r30, 0x0
    lis r4, 0x4178
    li r0, 0x2
    stw r0, 0x30(r1)
    lfd f29, lbl_80753FC0@l(r3)
    addi r31, r4, 0x749f
    stw r30, 0x34(r1)
    addi r26, r1, 0x50
    lfs f30, lbl_80886824
    addi r29, r1, 0x170
    stw r30, 0x38(r1)
    addi r27, r1, 0xb0
    lfs f31, lbl_80886828
    addi r28, r1, 0x110
    stw r30, 0x3c(r1)
    addi r25, r1, 0x24
    lfs f27, lbl_80886820
    addi r24, r1, 0xc
    stw r30, 0x40(r1)
    li r22, 0x0
    stfs f28, 0x44(r1)
    stfs f28, 0x48(r1)
    stfs f28, 0x4c(r1)
    b lbl_fn_8042FDBC_00000934
lbl_fn_8042FDBC_00000570:
    lfs f0, 0x2c(r23)
    lfs f7, 0x1c(r23)
    lfs f8, 0xc(r23)
    stfs f8, 0x24(r1)
    stfs f7, 0x28(r1)
    stfs f0, 0x2c(r1)
    bl fn_80680CF8
    mulhw r0, r31, r3
    lfs f8, 0x8bc(r21)
    lfs f0, 0x24(r1)
    fmuls f7, f8, f31
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x1a4(r1)
    lfd f9, 0x1a0(r1)
    fsubs f9, f9, f29
    fdivs f9, f9, f30
    fmsubs f7, f8, f9, f7
    fadds f0, f0, f7
    stfs f0, 0x24(r1)
    bl fn_80680CF8
    mulhw r0, r31, r3
    lfs f8, 0x8bc(r21)
    lfs f0, 0x28(r1)
    fmuls f7, f8, f31
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x1ac(r1)
    lfd f9, 0x1a8(r1)
    fsubs f9, f9, f29
    fdivs f9, f9, f30
    fmsubs f7, f8, f9, f7
    fadds f0, f0, f7
    stfs f0, 0x28(r1)
    bl fn_80680CF8
    mulhw r0, r31, r3
    lfs f8, 0x8bc(r21)
    lfs f0, 0x2c(r1)
    fmuls f7, f8, f31
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x1a4(r1)
    lfd f9, 0x1a0(r1)
    fsubs f9, f9, f29
    fdivs f9, f9, f30
    fmsubs f7, f8, f9, f7
    fadds f0, f0, f7
    stfs f0, 0x2c(r1)
    bl fn_80680CF8
    mulhw r0, r31, r3
    lfs f7, 0x8c0(r21)
    fmuls f0, f7, f31
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x1ac(r1)
    lfd f8, 0x1a8(r1)
    fsubs f8, f8, f29
    fdivs f8, f8, f30
    fmsubs f0, f7, f8, f0
    stfs f0, 0x18(r1)
    bl fn_80680CF8
    mulhw r0, r31, r3
    lfs f7, 0x8c0(r21)
    fmuls f0, f7, f31
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x1a4(r1)
    lfd f8, 0x1a0(r1)
    fsubs f8, f8, f29
    fdivs f8, f8, f30
    fmsubs f0, f7, f8, f0
    stfs f0, 0x1c(r1)
    bl fn_80680CF8
    mulhw r0, r31, r3
    lfs f7, 0x8c0(r21)
    fmuls f0, f7, f31
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x1ac(r1)
    lfd f8, 0x1a8(r1)
    fsubs f8, f8, f29
    fdivs f8, f8, f30
    fmsubs f0, f7, f8, f0
    stfs f0, 0x20(r1)
    bl fn_80680CF8
    mulhw r0, r31, r3
    lfs f1, 0x20(r1)
    lfs f10, 0x8c4(r21)
    lfs f9, 0x8c8(r21)
    fcmpu cr0, f28, f1
    lfs f8, 0x100(r21)
    srawi r0, r0, 8
    lfs f7, 0xfc(r21)
    srwi r4, r0, 31
    lfs f0, 0xf8(r21)
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    stfs f28, 0x19c(r1)
    stfs f28, 0x194(r1)
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x1a4(r1)
    lfd f11, 0x1a0(r1)
    stfs f28, 0x190(r1)
    fsubs f11, f11, f29
    stfs f28, 0x18c(r1)
    fdivs f11, f11, f30
    stfs f28, 0x188(r1)
    stfs f28, 0x180(r1)
    stfs f28, 0x17c(r1)
    stfs f28, 0x178(r1)
    stfs f28, 0x174(r1)
    fmadds f9, f10, f11, f9
    stfs f27, 0x198(r1)
    stfs f27, 0x184(r1)
    fnmsubs f9, f10, f31, f9
    stfs f27, 0x170(r1)
    fmuls f8, f8, f9
    fmuls f7, f7, f9
    fmuls f0, f0, f9
    stfs f8, 0x14(r1)
    stfs f0, 0xc(r1)
    stfs f7, 0x10(r1)
    beq lbl_fn_8042FDBC_0000080C
    addi r3, r1, 0x80
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0x80
    addi r5, r1, 0x50
    bl fn_805F89F0
    psq_l f1, 0x0(r26), 0, 0
    psq_l f2, 0x8(r26), 0, 0
    psq_l f3, 0x10(r26), 0, 0
    psq_l f4, 0x18(r26), 0, 0
    psq_l f5, 0x20(r26), 0, 0
    psq_l f6, 0x28(r26), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f6, 0x28(r29), 0, 0
lbl_fn_8042FDBC_0000080C:
    lfs f1, 0x1c(r1)
    fcmpu cr0, f28, f1
    beq lbl_fn_8042FDBC_00000864
    addi r3, r1, 0xe0
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0xe0
    addi r5, r1, 0xb0
    bl fn_805F89F0
    psq_l f1, 0x0(r27), 0, 0
    psq_l f2, 0x8(r27), 0, 0
    psq_l f3, 0x10(r27), 0, 0
    psq_l f4, 0x18(r27), 0, 0
    psq_l f5, 0x20(r27), 0, 0
    psq_l f6, 0x28(r27), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f6, 0x28(r29), 0, 0
lbl_fn_8042FDBC_00000864:
    lfs f1, 0x18(r1)
    fcmpu cr0, f28, f1
    beq lbl_fn_8042FDBC_000008BC
    addi r3, r1, 0x140
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r29
    addi r4, r1, 0x140
    addi r5, r1, 0x110
    bl fn_805F89F0
    psq_l f1, 0x0(r28), 0, 0
    psq_l f2, 0x8(r28), 0, 0
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
lbl_fn_8042FDBC_000008BC:
    addi r4, r1, 0xc
    addi r3, r1, 0x170
    mr r5, r4
    bl fn_805F93C0
    lwz r3, 0x8b8(r21)
    addi r4, r1, 0x30
    lwzx r3, r3, r30
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r3, 0x8b8(r21)
    addi r22, r22, 0x1
    psq_l f1, 0x0(r25), 0, 0
    lwzx r3, r3, r30
    lfs f2, 0x2c(r1)
    psq_st f1, 0x6c(r3), 0, 0
    stfs f2, 0x74(r3)
    lwz r3, 0x8b8(r21)
    lfs f2, 0x14(r1)
    lwzx r3, r3, r30
    psq_l f1, 0x0(r24), 0, 0
    psq_st f1, 0x17c(r3), 0, 0
    stfs f2, 0x184(r3)
    lwz r3, 0x8b8(r21)
    lwzx r3, r3, r30
    addi r30, r30, 0x4
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
lbl_fn_8042FDBC_00000934:
    lwz r0, 0x8b4(r21)
    cmplw r22, r0
    blt lbl_fn_8042FDBC_00000570
lbl_fn_8042FDBC_00000940:
    addi r11, r1, 0x1e0
    psq_l f31, 0x228(r1), 0, 0
    lfd f31, 0x220(r1)
    psq_l f30, 0x218(r1), 0, 0
    lfd f30, 0x210(r1)
    psq_l f29, 0x208(r1), 0, 0
    lfd f29, 0x200(r1)
    psq_l f28, 0x1f8(r1), 0, 0
    lfd f28, 0x1f0(r1)
    psq_l f27, 0x1e8(r1), 0, 0
    lfd f27, 0x1e0(r1)
    bl _restgpr_21
    lwz r0, 0x234(r1)
    mtlr r0
    addi r1, r1, 0x230
    blr
}

asm void fn_804302FC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    lwz r4, 0xf4(r3)
    lwz r0, 0x7c(r4)
    cmpwi r0, 0x0
    beq lbl_fn_804302FC_00000A44
    lwz r4, lbl_8087F0A8
    lwz r0, 0x18(r4)
    cmpwi r0, 0x0
    beq lbl_fn_804302FC_00000A44
    lwz r0, 0x54(r3)
    cmpwi r0, 0x5
    beq lbl_fn_804302FC_00000A44
    lwz r4, lbl_8087EFB4
    lfs f0, 0x74(r3)
    lfs f1, 0x114(r4)
    lfs f3, 0x110(r4)
    fsubs f4, f1, f0
    lfs f2, 0x70(r3)
    lfs f0, 0x6c(r3)
    addi r3, r1, 0x8
    lfs f1, 0x10c(r4)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f4, 0x10(r1)
    bl fn_805F9920
    lfs f0, lbl_8088682C
    fcmpo cr0, f1, f0
    bgt lbl_fn_804302FC_00000A44
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_804302FC_00000A44
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    bl fn_803ED774
lbl_fn_804302FC_00000A44:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804303D4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    addi r3, r3, 0x104
    bl fn_8008B140
    cmpwi r3, 0x0
    bne lbl_fn_804303D4_00000A8C
    addi r3, r31, 0x4d4
    bl fn_8008B140
    cmpwi r3, 0x0
    beq lbl_fn_804303D4_00000A94
lbl_fn_804303D4_00000A8C:
    li r3, 0x1
    b lbl_fn_804303D4_00000A98
lbl_fn_804303D4_00000A94:
    li r3, 0x0
lbl_fn_804303D4_00000A98:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80430428(void)
{
    nofralloc
    stwu r1, -0x760(r1)
    mflr r0
    stw r0, 0x764(r1)
    stmw r24, 0x740(r1)
    mr r31, r3
    addi r3, r3, 0x60
    bl fn_8047059C
    mr r30, r3
    addi r3, r31, 0x60
    bl fn_80470580
    lis r4, lbl_807774D8@ha
    li r28, 0x0
    addi r4, r4, lbl_807774D8@l
    stw r4, 0x108(r1)
    mr r29, r3
    addi r3, r1, 0x118
    stw r28, 0x10c(r1)
    li r4, 0x0
    li r5, 0x400
    stw r28, 0x110(r1)
    stw r28, 0x114(r1)
    stw r28, 0x738(r1)
    bl memset
    addi r3, r1, 0x718
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x108(r1)
    mr r4, r29
    mr r5, r30
    addi r3, r1, 0x108
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807774B8@ha
    addi r3, r1, 0x108
    addi r4, r4, lbl_807774B8@l
    stw r4, 0x108(r1)
    la r4, lbl_8087D710
    bl fn_8005BCE8
    lis r29, lbl_80753FDC@ha
    li r26, 0x0
    addi r29, r29, lbl_80753FDC@l
    li r25, 0x0
lbl_fn_80430428_00000B5C:
    addi r3, r1, 0x108
    bl fn_8005B9CC
    lbz r0, 0x0(r3)
    mr r27, r3
    cmpwi r0, 0x3b
    beq lbl_fn_80430428_00000D44
    addi r4, r29, 0x7
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80430428_00000BB0
    addi r3, r1, 0x108
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r31, 0x104
    li r5, 0x0
    bl fn_8008AD4C
    mr r3, r31
    addi r4, r31, 0x104
    addi r5, r1, 0x108
    bl fn_803EC7A0
    b lbl_fn_80430428_00000D44
lbl_fn_80430428_00000BB0:
    mr r3, r27
    addi r4, r29, 0x14
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80430428_00000BF0
    addi r3, r1, 0x108
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r31, 0x4d4
    li r5, 0x0
    bl fn_8008AD4C
    mr r3, r31
    addi r4, r31, 0x4d4
    addi r5, r1, 0x108
    bl fn_803EC7A0
    b lbl_fn_80430428_00000D44
lbl_fn_80430428_00000BF0:
    mr r3, r27
    addi r4, r29, 0x20
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80430428_00000C38
    addi r3, r1, 0x108
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r1, 0x8
    bl strcpy
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_802180A8
    mr r4, r3
    addi r3, r31, 0x4d4
    addi r5, r1, 0x8
    bl fn_80097A88
    b lbl_fn_80430428_00000D44
lbl_fn_80430428_00000C38:
    mr r3, r27
    addi r4, r29, 0x27
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_80430428_00000D44
    mr r3, r27
    addi r4, r29, 0x34
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80430428_00000C68
    addi r26, r26, 0x1
    b lbl_fn_80430428_00000D44
lbl_fn_80430428_00000C68:
    mr r3, r27
    addi r4, r29, 0x3d
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80430428_00000C84
    addi r25, r25, 0x1
    b lbl_fn_80430428_00000D44
lbl_fn_80430428_00000C84:
    mr r3, r27
    addi r4, r29, 0x45
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80430428_00000D44
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x8d0(r31)
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x8d4(r31)
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_80684600
    lwz r0, 0x8b8(r31)
    mr r30, r3
    cmpwi r0, 0x0
    beq lbl_fn_80430428_00000CDC
    mr r3, r0
    bl fn_80084C24
lbl_fn_80430428_00000CDC:
    cmpwi r30, 0x0
    stw r30, 0x8b4(r31)
    beq lbl_fn_80430428_00000D08
    slwi r3, r30, 2
    li r4, 0x0
    la r5, lbl_8087DFCC
    la r6, lbl_8087DFC8
    li r7, 0x0
    bl fn_800846FC
    stw r3, 0x8b8(r31)
    b lbl_fn_80430428_00000D0C
lbl_fn_80430428_00000D08:
    stw r28, 0x8b8(r31)
lbl_fn_80430428_00000D0C:
    li r24, 0x0
    li r27, 0x0
    b lbl_fn_80430428_00000D38
lbl_fn_80430428_00000D18:
    lwz r30, 0x8b8(r31)
    mr r3, r31
    mr r5, r24
    li r4, 0x7530
    bl fn_8041524C
    stwx r3, r30, r27
    addi r27, r27, 0x4
    addi r24, r24, 0x1
lbl_fn_80430428_00000D38:
    lwz r0, 0x8b4(r31)
    cmplw r24, r0
    blt lbl_fn_80430428_00000D18
lbl_fn_80430428_00000D44:
    addi r3, r1, 0x108
    bl fn_8005BBF8
    cmpwi r3, 0x0
    bne lbl_fn_80430428_00000B5C
    lwz r3, 0x8a8(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80430428_00000D6C
    beq lbl_fn_80430428_00000D6C
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80430428_00000D6C:
    cmpwi r26, 0x0
    stw r26, 0x8a4(r31)
    beq lbl_fn_80430428_00000DB4
    mulli r3, r26, 0x1c
    li r4, 0x0
    la r5, lbl_8087DF4C
    la r6, lbl_8087DF48
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_803F3334@ha
    mr r7, r26
    addi r4, r4, fn_803F3334@l
    li r5, 0x0
    li r6, 0x1c
    bl fn_80695720
    stw r3, 0x8a8(r31)
    b lbl_fn_80430428_00000DBC
lbl_fn_80430428_00000DB4:
    li r0, 0x0
    stw r0, 0x8a8(r31)
lbl_fn_80430428_00000DBC:
    lwz r3, 0x8b0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80430428_00000DD4
    beq lbl_fn_80430428_00000DD4
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80430428_00000DD4:
    cmpwi r25, 0x0
    stw r25, 0x8ac(r31)
    beq lbl_fn_80430428_00000E1C
    slwi r3, r25, 3
    li r4, 0x0
    addi r3, r3, 0x10
    la r5, lbl_8087DF44
    la r6, lbl_8087DF40
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_803F3360@ha
    mr r7, r25
    addi r4, r4, fn_803F3360@l
    li r5, 0x0
    li r6, 0x8
    bl fn_80695720
    stw r3, 0x8b0(r31)
    b lbl_fn_80430428_00000E24
lbl_fn_80430428_00000E1C:
    li r0, 0x0
    stw r0, 0x8b0(r31)
lbl_fn_80430428_00000E24:
    lmw r24, 0x740(r1)
    lwz r0, 0x764(r1)
    mtlr r0
    addi r1, r1, 0x760
    blr
}

asm void fn_804307B4(void)
{
    nofralloc
    stwu r1, -0x660(r1)
    mflr r0
    stw r0, 0x664(r1)
    stmw r27, 0x64c(r1)
    mr r27, r3
    addi r3, r3, 0x60
    bl fn_8047059C
    mr r30, r3
    addi r3, r27, 0x60
    bl fn_80470580
    lis r4, lbl_807774D8@ha
    li r0, 0x0
    addi r4, r4, lbl_807774D8@l
    stw r4, 0x8(r1)
    mr r31, r3
    addi r3, r1, 0x18
    stw r0, 0xc(r1)
    li r4, 0x0
    li r5, 0x400
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x638(r1)
    bl memset
    addi r3, r1, 0x618
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x8(r1)
    mr r4, r31
    mr r5, r30
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
    lis r31, lbl_80753FDC@ha
    li r30, 0x0
    addi r31, r31, lbl_80753FDC@l
    li r29, 0x0
lbl_fn_804307B4_00000EE8:
    addi r3, r1, 0x8
    bl fn_8005B9CC
    lbz r0, 0x0(r3)
    mr r28, r3
    cmpwi r0, 0x3b
    beq lbl_fn_804307B4_00000F58
    addi r4, r31, 0x34
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_804307B4_00000F2C
    lwz r0, 0x8a8(r27)
    addi r4, r1, 0x8
    addi r5, r27, 0x4d4
    add r3, r0, r30
    bl fn_803EBC44
    addi r30, r30, 0x1c
    b lbl_fn_804307B4_00000F58
lbl_fn_804307B4_00000F2C:
    mr r3, r28
    addi r4, r31, 0x3d
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_804307B4_00000F58
    lwz r0, 0x8b0(r27)
    addi r4, r1, 0x8
    addi r5, r27, 0x4d4
    add r3, r0, r29
    bl fn_803EC0A4
    addi r29, r29, 0x8
lbl_fn_804307B4_00000F58:
    addi r3, r1, 0x8
    bl fn_8005BBF8
    cmpwi r3, 0x0
    bne lbl_fn_804307B4_00000EE8
    lmw r27, 0x64c(r1)
    lwz r0, 0x664(r1)
    mtlr r0
    addi r1, r1, 0x660
    blr
}

asm void fn_804308F8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    bne lbl_fn_804308F8_00000FA0
    li r3, 0x0
    b lbl_fn_804308F8_000011C4
lbl_fn_804308F8_00000FA0:
    lwz r4, 0x0(r4)
    stw r4, 0x54(r3)
    subi r0, r4, 0x2
    cmplwi r0, 0x1
    ble lbl_fn_804308F8_0000106C
    cmpwi r4, 0x1
    beq lbl_fn_804308F8_00000FC8
    cmpwi r4, 0x4
    beq lbl_fn_804308F8_00001108
    b lbl_fn_804308F8_000011C0
lbl_fn_804308F8_00000FC8:
    lfs f1, lbl_80886820
    li r4, 0x0
    lfs f2, lbl_80886830
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    addi r3, r3, 0x4d4
    bl fn_80097C08
    mr r3, r31
    addi r4, r31, 0x4d4
    bl fn_803ED5D0
    lfs f0, lbl_80886818
    mr r3, r31
    stfs f0, 0x708(r31)
    addi r4, r31, 0x104
    li r5, 0x1
    bl fn_803ED0D4
    mr r3, r31
    addi r4, r31, 0x4d4
    li r5, 0x1
    bl fn_803ED0D4
    lwz r0, 0x8cc(r31)
    cmpwi r0, 0x0
    beq lbl_fn_804308F8_000011C0
    li r0, 0x0
    stw r0, 0x8cc(r31)
    li r4, 0x0
    li r5, 0x0
    b lbl_fn_804308F8_0000105C
lbl_fn_804308F8_00001040:
    lwz r3, 0x8b8(r31)
    addi r4, r4, 0x1
    lwzx r3, r3, r5
    addi r5, r5, 0x4
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_804308F8_0000105C:
    lwz r0, 0x8b4(r31)
    cmplw r4, r0
    blt lbl_fn_804308F8_00001040
    b lbl_fn_804308F8_000011C0
lbl_fn_804308F8_0000106C:
    lfs f1, lbl_80886820
    li r4, 0x0
    lfs f2, lbl_80886830
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    addi r3, r3, 0x4d4
    bl fn_80097C08
    lfs f1, lbl_80886820
    lis r4, lbl_80753FB8@ha
    stfs f1, 0x70c(r31)
    addi r3, r1, 0x8
    lwz r4, lbl_80753FB8@l(r4)
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    lwz r0, 0x8cc(r31)
    cmpwi r0, 0x0
    beq lbl_fn_804308F8_000011C0
    li r0, 0x0
    stw r0, 0x8cc(r31)
    li r4, 0x0
    li r5, 0x0
    b lbl_fn_804308F8_000010F8
lbl_fn_804308F8_000010DC:
    lwz r3, 0x8b8(r31)
    addi r4, r4, 0x1
    lwzx r3, r3, r5
    addi r5, r5, 0x4
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_804308F8_000010F8:
    lwz r0, 0x8b4(r31)
    cmplw r4, r0
    blt lbl_fn_804308F8_000010DC
    b lbl_fn_804308F8_000011C0
lbl_fn_804308F8_00001108:
    lfs f1, lbl_80886820
    li r4, 0x0
    lfs f2, lbl_80886830
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    addi r3, r3, 0x4d4
    bl fn_80097C08
    addi r3, r31, 0x4d4
    li r4, 0x0
    bl fn_80097D7C
    stfs f1, 0x708(r31)
    mr r3, r31
    lwz r12, 0x0(r31)
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_804308F8_00001178
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    bl fn_803ED5D0
lbl_fn_804308F8_00001178:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_804308F8_000011B8
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    li r5, 0x1
    bl fn_803ED0D4
lbl_fn_804308F8_000011B8:
    mr r3, r31
    bl fn_8042FDBC
lbl_fn_804308F8_000011C0:
    lwz r3, 0x54(r31)
lbl_fn_804308F8_000011C4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80430B54(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lfs f0, lbl_80886818
    stw r0, 0x34(r1)
    li r0, 0x0
    stw r4, 0x8(r1)
    addi r4, r1, 0x8
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80430BAC(void)
{
    nofralloc
    lwz r3, 0x54(r3)
    subi r0, r3, 0x1
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

asm void fn_80430BC0(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stfd f31, 0x70(r1)
    psq_st f31, 0x78(r1), 0, 0
    stw r31, 0x6c(r1)
    mr r31, r4
    stw r30, 0x68(r1)
    mr r30, r3
    lwz r12, 0x0(r3)
    lwz r12, 0x60(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_80430BC0_000013DC
    lfs f1, 0x70(r30)
    lfs f0, 0x4(r31)
    lfs f3, 0x74(r30)
    fsubs f4, f1, f0
    lfs f2, 0x8(r31)
    lfs f1, 0x6c(r30)
    fsubs f2, f3, f2
    lfs f0, 0x0(r31)
    fabs f3, f4
    fsubs f1, f1, f0
    lfs f0, lbl_80886834
    stfs f4, 0x24(r1)
    frsp f3, f3
    stfs f1, 0x20(r1)
    fcmpo cr0, f3, f0
    stfs f2, 0x28(r1)
    bge lbl_fn_80430BC0_000012CC
    lfs f0, lbl_80886818
    stfs f0, 0x24(r1)
lbl_fn_80430BC0_000012CC:
    addi r3, r1, 0x20
    bl fn_805F9920
    lfs f0, lbl_80886818
    fmr f31, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_80430BC0_000012F0
    addi r3, r1, 0x20
    mr r4, r3
    bl fn_805F98D0
lbl_fn_80430BC0_000012F0:
    lwz r3, lbl_8087F098
    cmpwi r3, 0x0
    beq lbl_fn_80430BC0_0000131C
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80430BC0_0000131C
    lfs f0, lbl_80886838
    fcmpo cr0, f31, f0
    bge lbl_fn_80430BC0_000013DC
    li r3, 0x1
    b lbl_fn_80430BC0_000013E0
lbl_fn_80430BC0_0000131C:
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_80430BC0_00001330
    lwz r5, 0x48(r3)
    b lbl_fn_80430BC0_00001334
lbl_fn_80430BC0_00001330:
    li r5, 0x0
lbl_fn_80430BC0_00001334:
    lfs f0, lbl_8088683C
    fcmpo cr0, f31, f0
    bge lbl_fn_80430BC0_000013DC
    cmpwi r5, 0x0
    beq lbl_fn_80430BC0_000013DC
    lfs f1, lbl_80886818
    addi r3, r1, 0x30
    lfs f0, lbl_80886820
    li r4, 0x79
    stfs f1, 0x14(r1)
    stfs f1, 0x18(r1)
    stfs f0, 0x1c(r1)
    lfs f1, 0x538(r5)
    bl fn_805F8E70
    addi r4, r1, 0x14
    addi r3, r1, 0x30
    mr r5, r4
    bl fn_805F93C0
    addi r3, r1, 0x14
    addi r4, r1, 0x20
    bl fn_805F9990
    lfs f0, lbl_80886840
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_80430BC0_000013DC
    lfs f2, 0x28(r1)
    addi r3, r30, 0xf8
    lfs f1, 0x24(r1)
    addi r4, r1, 0x8
    lfs f0, 0x20(r1)
    fneg f2, f2
    fneg f1, f1
    fneg f0, f0
    stfs f2, 0x10(r1)
    stfs f0, 0x8(r1)
    stfs f1, 0xc(r1)
    bl fn_805F9990
    lfs f0, lbl_80886844
    fcmpo cr0, f1, f0
    mfcr r3
    srwi r3, r3, 31
    b lbl_fn_80430BC0_000013E0
lbl_fn_80430BC0_000013DC:
    li r3, 0x0
lbl_fn_80430BC0_000013E0:
    lwz r0, 0x84(r1)
    psq_l f31, 0x78(r1), 0, 0
    lfd f31, 0x70(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_80430D7C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    lwz r0, 0x54(r3)
    cmpwi r0, 0x1
    bne lbl_fn_80430D7C_00001458
    lfs f0, lbl_80886818
    li r0, 0x0
    li r4, 0x3
    stw r4, 0x8(r1)
    addi r4, r1, 0x8
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
lbl_fn_80430D7C_00001458:
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80430DE4(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r4
    addi r4, r1, 0x8
    stw r29, 0x34(r1)
    mr r29, r3
    bl fn_803EC758
    lwz r0, 0xf0(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80430DE4_000014C8
    cmpwi r30, 0x0
    beq lbl_fn_80430DE4_000014C8
    lwz r0, lbl_8087EF10
    cmpwi r0, 0x0
    beq lbl_fn_80430DE4_000014C8
    mr r3, r30
    addi r4, r1, 0x8
    bl fn_8008937C
    stw r3, 0xf0(r29)
    mr r30, r3
    b lbl_fn_80430DE4_000014CC
lbl_fn_80430DE4_000014C8:
    li r30, 0x0
lbl_fn_80430DE4_000014CC:
    lis r31, lbl_80753FDC@ha
    mr r3, r30
    addi r31, r31, lbl_80753FDC@l
    addi r5, r29, 0x54
    addi r4, r31, 0x4d
    li r6, 0x0
    li r7, 0x63
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_80886848
    mr r3, r30
    lfs f2, lbl_8088684C
    addi r4, r31, 0x53
    lfs f3, lbl_80886850
    addi r5, r29, 0x6c
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    lfs f1, lbl_80886854
    mr r3, r30
    lfs f2, lbl_80886858
    addi r4, r31, 0x57
    lfs f3, lbl_8088685C
    addi r5, r29, 0x78
    li r6, 0x0
    li r7, 0x0
    bl fn_80088724
    lfs f1, lbl_80886848
    mr r3, r30
    lfs f2, lbl_8088684C
    addi r4, r31, 0x5b
    lfs f3, lbl_80886850
    addi r5, r29, 0x90
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    mr r3, r30
    addi r4, r31, 0x5f
    addi r5, r29, 0x9c
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    lfs f1, lbl_80886818
    mr r3, r30
    lfs f2, lbl_80886860
    addi r4, r31, 0x66
    lfs f3, lbl_80886828
    addi r5, r29, 0x8bc
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80886818
    mr r3, r30
    lfs f2, lbl_80886864
    addi r4, r31, 0x73
    lfs f3, lbl_80886820
    addi r5, r29, 0x8c0
    li r6, 0x0
    li r7, 0x0
    bl fn_80087858
    lfs f1, lbl_80886818
    mr r3, r30
    lfs f2, lbl_80886860
    addi r4, r31, 0x80
    lfs f3, lbl_80886828
    addi r5, r29, 0x8c4
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80886818
    mr r3, r30
    lfs f2, lbl_80886860
    addi r4, r31, 0x8a
    lfs f3, lbl_80886828
    addi r5, r29, 0x8c8
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80430FA4(void)
{
    nofralloc
    lwz r0, 0x54(r3)
    cmpwi r0, 0x1
    bne lbl_fn_80430FA4_0000163C
    addi r3, r3, 0x104
    blr
lbl_fn_80430FA4_0000163C:
    addi r3, r3, 0x4d4
    blr
}

asm void fn_80430FC0(void)
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
    beq lbl_fn_80430FC0_00001718
    addic. r0, r3, 0x8b4
    beq lbl_fn_80430FC0_0000168C
    lwz r3, 0x8b8(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80430FC0_00001680
    bl fn_80084C24
lbl_fn_80430FC0_00001680:
    li r0, 0x0
    stw r0, 0x8b8(r30)
    stw r0, 0x8b4(r30)
lbl_fn_80430FC0_0000168C:
    addic. r0, r30, 0x8ac
    beq lbl_fn_80430FC0_000016B8
    lwz r3, 0x8b0(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80430FC0_000016AC
    beq lbl_fn_80430FC0_000016AC
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80430FC0_000016AC:
    li r0, 0x0
    stw r0, 0x8b0(r30)
    stw r0, 0x8ac(r30)
lbl_fn_80430FC0_000016B8:
    addic. r0, r30, 0x8a4
    beq lbl_fn_80430FC0_000016E4
    lwz r3, 0x8a8(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80430FC0_000016D8
    beq lbl_fn_80430FC0_000016D8
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80430FC0_000016D8:
    li r0, 0x0
    stw r0, 0x8a8(r30)
    stw r0, 0x8a4(r30)
lbl_fn_80430FC0_000016E4:
    addi r3, r30, 0x4d4
    li r4, -0x1
    bl fn_800971D4
    addi r3, r30, 0x104
    li r4, -0x1
    bl fn_800971D4
    mr r3, r30
    li r4, 0x0
    bl fn_803EC69C
    cmpwi r31, 0x0
    ble lbl_fn_80430FC0_00001718
    mr r3, r30
    bl dtor_80084684
lbl_fn_80430FC0_00001718:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804310B0(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x124(r1)
    stw r31, 0x11c(r1)
    stw r30, 0x118(r1)
    mr r30, r5
    stw r29, 0x114(r1)
    mr r29, r4
    stw r28, 0x110(r1)
    mr r28, r3
    beq lbl_fn_804310B0_000017FC
    lis r31, 0x1062
    lis r4, lbl_807540A0@ha
    addi r0, r31, 0x4dd3
    addi r3, r1, 0x8
    mulhw r0, r0, r29
    addi r4, r4, lbl_807540A0@l
    srawi r0, r0, 6
    srwi r5, r0, 31
    add r0, r0, r5
    mulli r0, r0, 0x3e8
    subf r5, r0, r29
    crclr 6
    bl sprintf
    addi r3, r1, 0x8
    bl fn_8006AA20
    cmpwi r3, 0x0
    bne lbl_fn_804310B0_000017C0
    addi r0, r31, 0x4dd3
    mulhw r0, r0, r29
    srawi r0, r0, 6
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r29, r0, 0x3e8
lbl_fn_804310B0_000017C0:
    lis r5, lbl_807540A0@ha
    li r3, 0x30a8
    addi r5, r5, lbl_807540A0@l
    li r4, 0xc
    addi r5, r5, 0xf
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_804310B0_00001800
    mr r4, r28
    mr r5, r29
    mr r6, r30
    bl fn_8043119C
    b lbl_fn_804310B0_00001800
lbl_fn_804310B0_000017FC:
    li r3, 0x0
lbl_fn_804310B0_00001800:
    lwz r0, 0x124(r1)
    lwz r31, 0x11c(r1)
    lwz r30, 0x118(r1)
    lwz r29, 0x114(r1)
    lwz r28, 0x110(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_8043119C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_803EC568
    lis r4, lbl_8078EDA8@ha
    addi r3, r30, 0xf4
    addi r4, r4, lbl_8078EDA8@l
    stw r4, 0x0(r30)
    li r4, 0x8
    li r5, 0x20
    bl fn_80096E94
    addi r3, r30, 0x4c4
    bl fn_802377B8
    li r31, 0x0
    lis r4, fn_80431294@ha
    lis r5, fn_80431320@ha
    stw r31, 0x4dc(r30)
    addi r3, r30, 0x4f8
    addi r4, r4, fn_80431294@l
    stw r31, 0x4ec(r30)
    addi r5, r5, fn_80431320@l
    li r6, 0x29c
    li r7, 0x10
    stw r31, 0x4f0(r30)
    stw r31, 0x4f4(r30)
    bl fn_806958E0
    lfs f0, lbl_80886868
    addi r3, r30, 0x30a0
    stw r31, 0x2eb8(r30)
    stw r31, 0x2ebc(r30)
    stw r31, 0x2ec0(r30)
    stw r31, 0x3044(r30)
    stw r31, 0x3048(r30)
    stw r31, 0x304c(r30)
    stw r31, 0x3050(r30)
    stw r31, 0x3054(r30)
    stw r31, 0x3058(r30)
    stfs f0, 0x305c(r30)
    stfs f0, 0x3060(r30)
    stw r31, 0x3064(r30)
    stw r31, 0x3068(r30)
    stw r31, 0x306c(r30)
    stw r31, 0x3070(r30)
    stw r31, 0x3074(r30)
    stb r31, 0x3078(r30)
    stw r31, 0x3098(r30)
    stw r31, 0x309c(r30)
    bl fn_800CB360
    li r3, 0x6
    li r0, 0x2
    stw r3, 0xe8(r30)
    mr r3, r30
    stw r0, 0xec(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80431294(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, fn_80431314@ha
    lis r5, fn_80069758@ha
    stw r0, 0x14(r1)
    addi r4, r4, fn_80431314@l
    addi r5, r5, fn_80069758@l
    li r6, 0x80
    stw r31, 0xc(r1)
    li r31, 0x0
    li r7, 0x3
    stw r30, 0x8(r1)
    mr r30, r3
    stb r31, 0x0(r3)
    stb r31, 0x80(r3)
    addi r3, r3, 0x100
    bl fn_806958E0
    li r0, -0x1
    stw r0, 0x280(r30)
    mr r3, r30
    stw r31, 0x284(r30)
    stw r31, 0x288(r30)
    stw r31, 0x28c(r30)
    stw r31, 0x290(r30)
    stw r0, 0x294(r30)
    stw r0, 0x298(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
