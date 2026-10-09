#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_21(void);
extern void _restgpr_27(void);
extern void _savegpr_21(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_80084320(void);
extern void fn_800846FC(void);
extern void fn_8008AD4C(void);
extern void fn_8008B140(void);
extern void fn_80097A88(void);
extern void fn_80097C08(void);
extern void fn_800C344C(void);
extern void fn_800CB360(void);
extern void fn_800CB3A0(void);
extern void fn_800CB440(void);
extern void fn_800CB518(void);
extern void fn_800CB5C8(void);
extern void fn_800CB6B0(void);
extern void fn_803EC568(void);
extern void fn_803EC69C(void);
extern void fn_803EC91C(void);
extern void fn_8040B560(void);
extern void fn_8040B60C(void);
extern void fn_8040B668(void);
extern void fn_8040BC38(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_80680CF8(void);
extern void fn_8068A850(void);
extern void fn_8068AD58(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);
extern void fn_80695720(void);
extern void fn_80695A50(void);

/* External data declarations */
extern u8 lbl_80752AC8[];
extern u8 lbl_80752AD0[];
extern u8 lbl_80752AD8[];
extern u8 lbl_80752AE0[];
extern u8 lbl_80752AFC[];
extern u8 lbl_8078D500[];

/* Small data declarations */
extern u32 lbl_8087DF78;
extern u32 lbl_8087DF7C;
extern u32 lbl_8087F8A0;
extern u32 lbl_80886318;
extern u32 lbl_8088631C;
extern u32 lbl_80886320;
extern u32 lbl_8088632C;
extern u32 lbl_80886330;
extern u32 lbl_8088633C;
extern u32 lbl_80886340;
extern u32 lbl_80886344;
extern u32 lbl_80886348;
extern u32 lbl_8088634C;
extern u32 lbl_80886350;
extern u32 lbl_80886354;
extern u32 lbl_80886358;
extern u32 lbl_8088635C;
extern u32 lbl_80886360;
extern u32 lbl_80886364;
extern u32 lbl_80886368;
extern u32 lbl_8088636C;
extern u32 lbl_80886370;
extern u32 lbl_80886374;
extern u32 lbl_80886378;
extern u32 lbl_8088637C;
extern u32 lbl_80886380;

/* Function declarations */
void fn_8040BE88(void);
void fn_8040C058(void);
void fn_8040C610(void);
void fn_8040CD2C(void);
void fn_8040D1D0(void);
void fn_8040D244(void);
void fn_8040D3A0(void);
void fn_8040D434(void);
void fn_8040D6F8(void);

asm void fn_8040BE88(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    lbz r0, 0x430(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8040BE88_00000058
    lfs f1, lbl_80886318
    li r4, 0x0
    lfs f2, lbl_80886320
    li r5, 0x1
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    addi r3, r3, 0x4
    bl fn_80097C08
    lfs f0, lbl_80886340
    li r0, 0x1
    stfs f0, 0x23c(r30)
    stb r0, 0x430(r30)
lbl_fn_8040BE88_00000058:
    lwz r4, lbl_8087F8A0
    mr r3, r30
    lwz r4, 0x48(r4)
    bl fn_8040CD2C
    lwz r0, 0x41c(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8040BE88_000001AC
    li r31, 0x0
    stb r31, 0x430(r30)
    bl fn_80680CF8
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    subf. r0, r4, r0
    bne lbl_fn_8040BE88_00000100
    lfs f0, lbl_80886320
    stfs f0, 0x414(r30)
    bl fn_80680CF8
    lis r4, 0x8889
    li r0, 0x2
    subi r4, r4, 0x7777
    stw r0, 0x424(r30)
    mulhw r0, r4, r3
    add r0, r0, r3
    srawi r0, r0, 5
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3c
    subf r3, r0, r3
    addi r0, r3, 0x1e
    stw r0, 0x41c(r30)
    bl fn_80680CF8
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    subf. r0, r4, r0
    bne lbl_fn_8040BE88_000000F4
    stw r31, 0x420(r30)
    b lbl_fn_8040BE88_00000130
lbl_fn_8040BE88_000000F4:
    li r0, 0x1
    stw r0, 0x420(r30)
    b lbl_fn_8040BE88_00000130
lbl_fn_8040BE88_00000100:
    bl fn_80680CF8
    lis r4, 0x8889
    subi r0, r4, 0x7777
    mulhw r0, r0, r3
    add r0, r0, r3
    srawi r0, r0, 5
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3c
    subf r3, r0, r3
    addi r0, r3, 0x1e
    stw r0, 0x41c(r30)
lbl_fn_8040BE88_00000130:
    bl fn_80680CF8
    lis r4, 0x6666
    lis r0, 0x4330
    addi r5, r4, 0x6667
    stw r0, 0x8(r1)
    mulhw r5, r5, r3
    lis r4, lbl_80752AD0@ha
    lfd f3, lbl_80752AD0@l(r4)
    lfs f1, lbl_8088633C
    lfs f0, 0x3e4(r30)
    srawi r0, r5, 2
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0xa
    subf r3, r0, r3
    subi r0, r3, 0x5
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f2, 0x8(r1)
    fsubs f2, f2, f3
    fmuls f1, f1, f2
    fadds f1, f0, f1
    stfs f1, 0x3e4(r30)
    bl fn_8068AD58
    lfs f0, 0x3e4(r30)
    frsp f2, f1
    fneg f1, f0
    stfs f2, 0x3ec(r30)
    bl fn_8068A850
    frsp f0, f1
    stfs f0, 0x3f4(r30)
lbl_fn_8040BE88_000001AC:
    lwz r3, 0x41c(r30)
    subi r0, r3, 0x1
    stw r0, 0x41c(r30)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8040C058(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    addi r11, r1, 0x90
    stfd f31, 0xa0(r1)
    psq_st f31, 0xa8(r1), 0, 0
    stfd f30, 0x90(r1)
    psq_st f30, 0x98(r1), 0, 0
    bl _savegpr_27
    psq_l f1, 0x3d4(r3), 0, 0
    addi r30, r1, 0x5c
    psq_st f1, 0x0(r30), 0, 0
    lis r0, 0x4330
    lfs f2, 0x3dc(r3)
    mr r31, r3
    lfs f5, 0x3ec(r3)
    lfs f4, 0x414(r3)
    lfs f0, 0x5c(r1)
    lfs f3, 0x3f4(r3)
    fmadds f7, f5, f4, f0
    lfs f0, 0x404(r3)
    fmadds f6, f3, f4, f2
    lfs f5, 0x40c(r3)
    lfs f4, 0x60(r1)
    lfs f3, 0x408(r3)
    psq_st f1, 0x3f8(r3), 0, 0
    fsubs f5, f6, f5
    fsubs f3, f4, f3
    stfs f2, 0x400(r3)
    fsubs f0, f7, f0
    addi r3, r1, 0x2c
    stw r0, 0x68(r1)
    stw r0, 0x70(r1)
    stfs f7, 0x5c(r1)
    stfs f6, 0x64(r1)
    stfs f0, 0x2c(r1)
    stfs f3, 0x30(r1)
    stfs f5, 0x34(r1)
    bl fn_805F9940
    lfs f0, 0x410(r31)
    fcmpo cr0, f1, f0
    ble lbl_fn_8040C058_00000358
    lwz r0, 0x420(r31)
    cmpwi r0, 0x1
    bne lbl_fn_8040C058_000002E0
    bl fn_80680CF8
    lis r5, 0x6666
    lis r4, lbl_80752AD0@ha
    addi r0, r5, 0x6667
    lfd f6, lbl_80752AD0@l(r4)
    mulhw r0, r0, r3
    lfs f4, lbl_80886344
    lfs f3, lbl_8088633C
    lfs f0, 0x3e4(r31)
    srawi r0, r0, 1
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x5
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x6c(r1)
    lfd f5, 0x68(r1)
    fsubs f5, f5, f6
    fmuls f4, f4, f5
    fmuls f3, f3, f4
    fadds f0, f0, f3
    stfs f0, 0x3e4(r31)
    b lbl_fn_8040C058_00000330
lbl_fn_8040C058_000002E0:
    bl fn_80680CF8
    lis r5, 0x6666
    lis r4, lbl_80752AD0@ha
    addi r0, r5, 0x6667
    lfd f5, lbl_80752AD0@l(r4)
    mulhw r0, r0, r3
    lfs f3, lbl_8088633C
    lfs f0, 0x3e4(r31)
    srawi r0, r0, 1
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x5
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x74(r1)
    lfd f4, 0x70(r1)
    fsubs f4, f4, f5
    fmuls f3, f3, f4
    fadds f0, f0, f3
    stfs f0, 0x3e4(r31)
lbl_fn_8040C058_00000330:
    lfs f1, 0x3e4(r31)
    bl fn_8068AD58
    lfs f0, 0x3e4(r31)
    frsp f3, f1
    fneg f1, f0
    stfs f3, 0x3ec(r31)
    bl fn_8068A850
    frsp f0, f1
    stfs f0, 0x3f4(r31)
    b lbl_fn_8040C058_00000368
lbl_fn_8040C058_00000358:
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x64(r1)
    psq_st f1, 0x3d4(r31), 0, 0
    stfs f2, 0x3dc(r31)
lbl_fn_8040C058_00000368:
    addi r3, r1, 0x8
    psq_l f1, 0x3d4(r31), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    addi r28, r1, 0x14
    lfs f2, 0x3dc(r31)
    li r27, 0x0
    stfs f2, 0x10(r1)
    li r30, 0x0
    lwz r29, 0x0(r31)
    lfs f30, 0x8(r1)
    lfs f31, lbl_8088631C
    b lbl_fn_8040C058_0000044C
lbl_fn_8040C058_00000398:
    lwz r3, 0x60c(r29)
    li r0, 0x0
    add r3, r3, r30
    lfs f2, 0x3dc(r3)
    psq_l f1, 0x3d4(r3), 0, 0
    psq_st f1, 0x614(r29), 0, 0
    stfs f2, 0x61c(r29)
    lfs f0, 0x614(r29)
    psq_st f1, 0x0(r28), 0, 0
    fcmpu cr0, f30, f0
    stfs f2, 0x1c(r1)
    bne lbl_fn_8040C058_000003EC
    lfs f3, 0xc(r1)
    lfs f0, 0x618(r29)
    fcmpu cr0, f3, f0
    bne lbl_fn_8040C058_000003EC
    lfs f3, 0x10(r1)
    lfs f0, 0x61c(r29)
    fcmpu cr0, f3, f0
    bne lbl_fn_8040C058_000003EC
    li r0, 0x1
lbl_fn_8040C058_000003EC:
    cmpwi r0, 0x0
    bne lbl_fn_8040C058_00000444
    lfs f3, 0x61c(r29)
    addi r3, r1, 0x20
    lfs f0, 0x10(r1)
    lfs f5, 0x618(r29)
    fsubs f6, f3, f0
    lfs f4, 0xc(r1)
    lfs f3, 0x614(r29)
    lfs f0, 0x8(r1)
    fsubs f4, f5, f4
    stfs f6, 0x28(r1)
    fsubs f0, f3, f0
    stfs f4, 0x24(r1)
    stfs f0, 0x20(r1)
    bl fn_805F9940
    fcmpo cr0, f1, f31
    bge lbl_fn_8040C058_00000444
    mulli r0, r27, 0x434
    lwz r3, 0x60c(r29)
    add r4, r3, r0
    b lbl_fn_8040C058_0000045C
lbl_fn_8040C058_00000444:
    addi r27, r27, 0x1
    addi r30, r30, 0x434
lbl_fn_8040C058_0000044C:
    lwz r0, 0x610(r29)
    cmpw r27, r0
    blt lbl_fn_8040C058_00000398
    li r4, 0x0
lbl_fn_8040C058_0000045C:
    cmpwi r4, 0x0
    beq lbl_fn_8040C058_000005C4
    addi r3, r1, 0x38
    psq_l f1, 0x3d4(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    addi r5, r1, 0x44
    lfs f2, 0x3dc(r4)
    addi r3, r1, 0x50
    lfs f3, 0x3c(r1)
    mr r4, r3
    lfs f0, 0x3d8(r31)
    lfs f4, 0x3dc(r31)
    fsubs f5, f3, f0
    lfs f3, 0x38(r1)
    lfs f0, 0x3d4(r31)
    fsubs f4, f2, f4
    stfs f2, 0x40(r1)
    fsubs f3, f3, f0
    stfs f5, 0x48(r1)
    fmr f2, f4
    lfs f0, lbl_80886318
    stfs f3, 0x44(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f4, 0x4c(r1)
    stfs f2, 0x58(r1)
    stfs f0, 0x54(r1)
    bl fn_805F98D0
    lfs f4, 0x3f4(r31)
    lis r3, lbl_80752AD8@ha
    lfs f0, 0x58(r1)
    lfs f3, 0x3ec(r31)
    fmuls f4, f4, f0
    lfs f0, 0x50(r1)
    lfd f1, lbl_80752AD8@l(r3)
    fmadds f30, f3, f0, f4
    bl fn_8068A850
    frsp f0, f1
    fcmpo cr0, f30, f0
    ble lbl_fn_8040C058_000005C4
    lwz r0, 0x420(r31)
    cmpwi r0, 0x1
    bne lbl_fn_8040C058_00000564
    bl fn_80680CF8
    lis r5, 0x6666
    lis r4, lbl_80752AD0@ha
    addi r0, r5, 0x6667
    lfd f6, lbl_80752AD0@l(r4)
    mulhw r0, r0, r3
    lfs f4, lbl_80886344
    lfs f3, lbl_8088633C
    lfs f0, 0x3e4(r31)
    srawi r0, r0, 1
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x5
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x6c(r1)
    lfd f5, 0x68(r1)
    fsubs f5, f5, f6
    fmuls f4, f4, f5
    fmuls f3, f3, f4
    fadds f0, f0, f3
    stfs f0, 0x3e4(r31)
    b lbl_fn_8040C058_000005B4
lbl_fn_8040C058_00000564:
    bl fn_80680CF8
    lis r5, 0x6666
    lis r4, lbl_80752AD0@ha
    addi r0, r5, 0x6667
    lfd f5, lbl_80752AD0@l(r4)
    mulhw r0, r0, r3
    lfs f3, lbl_8088633C
    lfs f0, 0x3e4(r31)
    srawi r0, r0, 1
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x5
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x74(r1)
    lfd f4, 0x70(r1)
    fsubs f4, f4, f5
    fmuls f3, f3, f4
    fadds f0, f0, f3
    stfs f0, 0x3e4(r31)
lbl_fn_8040C058_000005B4:
    psq_l f1, 0x3f8(r31), 0, 0
    lfs f2, 0x400(r31)
    psq_st f1, 0x3d4(r31), 0, 0
    stfs f2, 0x3dc(r31)
lbl_fn_8040C058_000005C4:
    lwz r4, lbl_8087F8A0
    mr r3, r31
    lwz r4, 0x48(r4)
    bl fn_8040CD2C
    lwz r0, 0x41c(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8040C058_00000754
    li r0, 0x0
    stb r0, 0x430(r31)
    bl fn_80680CF8
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    subf. r0, r4, r0
    bne lbl_fn_8040C058_0000063C
    bl fn_80680CF8
    lis r4, 0x8889
    li r0, 0x1
    subi r4, r4, 0x7777
    stw r0, 0x424(r31)
    mulhw r0, r4, r3
    add r0, r0, r3
    srawi r0, r0, 5
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3c
    subf r3, r0, r3
    addi r0, r3, 0x1e
    stw r0, 0x41c(r31)
    b lbl_fn_8040C058_00000674
lbl_fn_8040C058_0000063C:
    lfs f0, lbl_80886320
    stfs f0, 0x414(r31)
    bl fn_80680CF8
    lis r4, 0x8889
    subi r0, r4, 0x7777
    mulhw r0, r0, r3
    add r0, r0, r3
    srawi r0, r0, 5
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3c
    subf r3, r0, r3
    addi r0, r3, 0x1e
    stw r0, 0x41c(r31)
lbl_fn_8040C058_00000674:
    lwz r0, 0x420(r31)
    cmpwi r0, 0x1
    bne lbl_fn_8040C058_000006DC
    bl fn_80680CF8
    lis r5, 0x8889
    lis r4, lbl_80752AD0@ha
    subi r0, r5, 0x7777
    lfd f5, lbl_80752AD0@l(r4)
    mulhw r0, r0, r3
    lfs f3, lbl_8088633C
    lfs f0, 0x3e4(r31)
    add r0, r0, r3
    srawi r0, r0, 3
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0xf
    subf r3, r0, r3
    subi r0, r3, 0xf
    xoris r0, r0, 0x8000
    stw r0, 0x6c(r1)
    lfd f4, 0x68(r1)
    fsubs f4, f4, f5
    fmuls f3, f3, f4
    fadds f0, f0, f3
    stfs f0, 0x3e4(r31)
    b lbl_fn_8040C058_00000730
lbl_fn_8040C058_000006DC:
    bl fn_80680CF8
    lis r5, 0x8889
    lis r4, lbl_80752AD0@ha
    subi r0, r5, 0x7777
    lfd f5, lbl_80752AD0@l(r4)
    mulhw r0, r0, r3
    lfs f3, lbl_8088633C
    lfs f0, 0x3e4(r31)
    add r0, r0, r3
    srawi r0, r0, 3
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0xf
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x74(r1)
    lfd f4, 0x70(r1)
    fsubs f4, f4, f5
    fmuls f3, f3, f4
    fadds f0, f0, f3
    stfs f0, 0x3e4(r31)
lbl_fn_8040C058_00000730:
    lfs f1, 0x3e4(r31)
    bl fn_8068AD58
    lfs f0, 0x3e4(r31)
    frsp f3, f1
    fneg f1, f0
    stfs f3, 0x3ec(r31)
    bl fn_8068A850
    frsp f0, f1
    stfs f0, 0x3f4(r31)
lbl_fn_8040C058_00000754:
    lwz r3, 0x41c(r31)
    subi r0, r3, 0x1
    stw r0, 0x41c(r31)
    psq_l f31, 0xa8(r1), 0, 0
    lfd f31, 0xa0(r1)
    psq_l f30, 0x98(r1), 0, 0
    lfd f30, 0x90(r1)
    addi r11, r1, 0x90
    bl _restgpr_27
    lwz r0, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_8040C610(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    addi r11, r1, 0xa0
    stfd f31, 0xb0(r1)
    psq_st f31, 0xb8(r1), 0, 0
    stfd f30, 0xa0(r1)
    psq_st f30, 0xa8(r1), 0, 0
    bl _savegpr_27
    psq_l f1, 0x3d4(r3), 0, 0
    addi r31, r1, 0x68
    psq_st f1, 0x0(r31), 0, 0
    lis r0, 0x4330
    lfs f2, 0x3dc(r3)
    mr r30, r3
    lfs f5, 0x3ec(r3)
    lfs f4, 0x414(r3)
    lfs f0, 0x68(r1)
    lfs f3, 0x3f4(r3)
    fmadds f7, f5, f4, f0
    lfs f0, 0x404(r3)
    fmadds f6, f3, f4, f2
    lfs f5, 0x40c(r3)
    lfs f4, 0x6c(r1)
    lfs f3, 0x408(r3)
    psq_st f1, 0x3f8(r3), 0, 0
    fsubs f5, f6, f5
    fsubs f3, f4, f3
    stfs f2, 0x400(r3)
    fsubs f0, f7, f0
    addi r3, r1, 0x2c
    stw r0, 0x78(r1)
    stw r0, 0x80(r1)
    stfs f7, 0x68(r1)
    stfs f6, 0x70(r1)
    stfs f0, 0x2c(r1)
    stfs f3, 0x30(r1)
    stfs f5, 0x34(r1)
    bl fn_805F9940
    lfs f0, 0x410(r30)
    fcmpo cr0, f1, f0
    ble lbl_fn_8040C610_00000910
    lwz r0, 0x420(r30)
    cmpwi r0, 0x1
    bne lbl_fn_8040C610_00000898
    bl fn_80680CF8
    lis r5, 0x6666
    lis r4, lbl_80752AD0@ha
    addi r0, r5, 0x6667
    lfd f6, lbl_80752AD0@l(r4)
    mulhw r0, r0, r3
    lfs f4, lbl_80886344
    lfs f3, lbl_8088633C
    lfs f0, 0x3e4(r30)
    srawi r0, r0, 1
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x5
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x7c(r1)
    lfd f5, 0x78(r1)
    fsubs f5, f5, f6
    fmuls f4, f4, f5
    fmuls f3, f3, f4
    fadds f0, f0, f3
    stfs f0, 0x3e4(r30)
    b lbl_fn_8040C610_000008E8
lbl_fn_8040C610_00000898:
    bl fn_80680CF8
    lis r5, 0x6666
    lis r4, lbl_80752AD0@ha
    addi r0, r5, 0x6667
    lfd f5, lbl_80752AD0@l(r4)
    mulhw r0, r0, r3
    lfs f3, lbl_8088633C
    lfs f0, 0x3e4(r30)
    srawi r0, r0, 1
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x5
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x84(r1)
    lfd f4, 0x80(r1)
    fsubs f4, f4, f5
    fmuls f3, f3, f4
    fadds f0, f0, f3
    stfs f0, 0x3e4(r30)
lbl_fn_8040C610_000008E8:
    lfs f1, 0x3e4(r30)
    bl fn_8068AD58
    lfs f0, 0x3e4(r30)
    frsp f3, f1
    fneg f1, f0
    stfs f3, 0x3ec(r30)
    bl fn_8068A850
    frsp f0, f1
    stfs f0, 0x3f4(r30)
    b lbl_fn_8040C610_00000920
lbl_fn_8040C610_00000910:
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x70(r1)
    psq_st f1, 0x3d4(r30), 0, 0
    stfs f2, 0x3dc(r30)
lbl_fn_8040C610_00000920:
    addi r3, r1, 0x8
    psq_l f1, 0x3d4(r30), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    addi r28, r1, 0x14
    lfs f2, 0x3dc(r30)
    li r27, 0x0
    stfs f2, 0x10(r1)
    li r31, 0x0
    lwz r29, 0x0(r30)
    lfs f30, 0x8(r1)
    lfs f31, lbl_8088631C
    b lbl_fn_8040C610_00000A04
lbl_fn_8040C610_00000950:
    lwz r3, 0x60c(r29)
    li r0, 0x0
    add r3, r3, r31
    lfs f2, 0x3dc(r3)
    psq_l f1, 0x3d4(r3), 0, 0
    psq_st f1, 0x614(r29), 0, 0
    stfs f2, 0x61c(r29)
    lfs f0, 0x614(r29)
    psq_st f1, 0x0(r28), 0, 0
    fcmpu cr0, f30, f0
    stfs f2, 0x1c(r1)
    bne lbl_fn_8040C610_000009A4
    lfs f3, 0xc(r1)
    lfs f0, 0x618(r29)
    fcmpu cr0, f3, f0
    bne lbl_fn_8040C610_000009A4
    lfs f3, 0x10(r1)
    lfs f0, 0x61c(r29)
    fcmpu cr0, f3, f0
    bne lbl_fn_8040C610_000009A4
    li r0, 0x1
lbl_fn_8040C610_000009A4:
    cmpwi r0, 0x0
    bne lbl_fn_8040C610_000009FC
    lfs f3, 0x61c(r29)
    addi r3, r1, 0x20
    lfs f0, 0x10(r1)
    lfs f5, 0x618(r29)
    fsubs f6, f3, f0
    lfs f4, 0xc(r1)
    lfs f3, 0x614(r29)
    lfs f0, 0x8(r1)
    fsubs f4, f5, f4
    stfs f6, 0x28(r1)
    fsubs f0, f3, f0
    stfs f4, 0x24(r1)
    stfs f0, 0x20(r1)
    bl fn_805F9940
    fcmpo cr0, f1, f31
    bge lbl_fn_8040C610_000009FC
    mulli r0, r27, 0x434
    lwz r3, 0x60c(r29)
    add r4, r3, r0
    b lbl_fn_8040C610_00000A14
lbl_fn_8040C610_000009FC:
    addi r27, r27, 0x1
    addi r31, r31, 0x434
lbl_fn_8040C610_00000A04:
    lwz r0, 0x610(r29)
    cmpw r27, r0
    blt lbl_fn_8040C610_00000950
    li r4, 0x0
lbl_fn_8040C610_00000A14:
    cmpwi r4, 0x0
    beq lbl_fn_8040C610_00000B7C
    addi r3, r1, 0x38
    psq_l f1, 0x3d4(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    addi r5, r1, 0x44
    lfs f2, 0x3dc(r4)
    addi r3, r1, 0x5c
    lfs f3, 0x3c(r1)
    mr r4, r3
    lfs f0, 0x3d8(r30)
    lfs f4, 0x3dc(r30)
    fsubs f5, f3, f0
    lfs f3, 0x38(r1)
    lfs f0, 0x3d4(r30)
    fsubs f4, f2, f4
    stfs f2, 0x40(r1)
    fsubs f3, f3, f0
    stfs f5, 0x48(r1)
    fmr f2, f4
    lfs f0, lbl_80886318
    stfs f3, 0x44(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f4, 0x4c(r1)
    stfs f2, 0x64(r1)
    stfs f0, 0x60(r1)
    bl fn_805F98D0
    lfs f4, 0x3f4(r30)
    lis r3, lbl_80752AD8@ha
    lfs f0, 0x64(r1)
    lfs f3, 0x3ec(r30)
    fmuls f4, f4, f0
    lfs f0, 0x5c(r1)
    lfd f1, lbl_80752AD8@l(r3)
    fmadds f30, f3, f0, f4
    bl fn_8068A850
    frsp f0, f1
    fcmpo cr0, f30, f0
    ble lbl_fn_8040C610_00000B7C
    lwz r0, 0x420(r30)
    cmpwi r0, 0x1
    bne lbl_fn_8040C610_00000B1C
    bl fn_80680CF8
    lis r5, 0x6666
    lis r4, lbl_80752AD0@ha
    addi r0, r5, 0x6667
    lfd f6, lbl_80752AD0@l(r4)
    mulhw r0, r0, r3
    lfs f4, lbl_80886344
    lfs f3, lbl_8088633C
    lfs f0, 0x3e4(r30)
    srawi r0, r0, 1
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x5
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x7c(r1)
    lfd f5, 0x78(r1)
    fsubs f5, f5, f6
    fmuls f4, f4, f5
    fmuls f3, f3, f4
    fadds f0, f0, f3
    stfs f0, 0x3e4(r30)
    b lbl_fn_8040C610_00000B6C
lbl_fn_8040C610_00000B1C:
    bl fn_80680CF8
    lis r5, 0x6666
    lis r4, lbl_80752AD0@ha
    addi r0, r5, 0x6667
    lfd f5, lbl_80752AD0@l(r4)
    mulhw r0, r0, r3
    lfs f3, lbl_8088633C
    lfs f0, 0x3e4(r30)
    srawi r0, r0, 1
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x5
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x84(r1)
    lfd f4, 0x80(r1)
    fsubs f4, f4, f5
    fmuls f3, f3, f4
    fadds f0, f0, f3
    stfs f0, 0x3e4(r30)
lbl_fn_8040C610_00000B6C:
    psq_l f1, 0x3f8(r30), 0, 0
    lfs f2, 0x400(r30)
    psq_st f1, 0x3d4(r30), 0, 0
    stfs f2, 0x3dc(r30)
lbl_fn_8040C610_00000B7C:
    lwz r4, lbl_8087F8A0
    mr r3, r30
    lwz r27, 0x48(r4)
    mr r4, r27
    bl fn_8040CD2C
    lfs f5, 0x530(r27)
    addi r3, r1, 0x50
    lfs f0, 0x3dc(r30)
    mr r4, r3
    lfs f4, 0x528(r27)
    lfs f3, 0x3d4(r30)
    fsubs f5, f5, f0
    lfs f0, lbl_80886318
    fsubs f3, f4, f3
    stfs f5, 0x58(r1)
    stfs f3, 0x50(r1)
    stfs f0, 0x54(r1)
    bl fn_805F98D0
    lfs f4, 0x3f4(r30)
    lis r3, lbl_80752AD8@ha
    lfs f0, 0x58(r1)
    lfs f3, 0x3ec(r30)
    fmuls f4, f4, f0
    lfs f0, 0x50(r1)
    lfd f1, lbl_80752AD8@l(r3)
    fmadds f30, f3, f0, f4
    bl fn_8068A850
    frsp f0, f1
    fcmpo cr0, f30, f0
    ble lbl_fn_8040C610_00000CBC
    lwz r0, 0x420(r30)
    cmpwi r0, 0x1
    bne lbl_fn_8040C610_00000C5C
    bl fn_80680CF8
    lis r5, 0x6666
    lis r4, lbl_80752AD0@ha
    addi r0, r5, 0x6667
    lfd f6, lbl_80752AD0@l(r4)
    mulhw r0, r0, r3
    lfs f4, lbl_80886344
    lfs f3, lbl_8088633C
    lfs f0, 0x3e4(r30)
    srawi r0, r0, 2
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0xa
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x7c(r1)
    lfd f5, 0x78(r1)
    fsubs f5, f5, f6
    fmuls f4, f4, f5
    fmuls f3, f3, f4
    fadds f0, f0, f3
    stfs f0, 0x3e4(r30)
    b lbl_fn_8040C610_00000CAC
lbl_fn_8040C610_00000C5C:
    bl fn_80680CF8
    lis r5, 0x6666
    lis r4, lbl_80752AD0@ha
    addi r0, r5, 0x6667
    lfd f5, lbl_80752AD0@l(r4)
    mulhw r0, r0, r3
    lfs f3, lbl_8088633C
    lfs f0, 0x3e4(r30)
    srawi r0, r0, 2
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0xa
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x84(r1)
    lfd f4, 0x80(r1)
    fsubs f4, f4, f5
    fmuls f3, f3, f4
    fadds f0, f0, f3
    stfs f0, 0x3e4(r30)
lbl_fn_8040C610_00000CAC:
    psq_l f1, 0x3f8(r30), 0, 0
    lfs f2, 0x400(r30)
    psq_st f1, 0x3d4(r30), 0, 0
    stfs f2, 0x3dc(r30)
lbl_fn_8040C610_00000CBC:
    lwz r0, 0x41c(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8040C610_00000E70
    li r31, 0x0
    stw r31, 0x42c(r30)
    stb r31, 0x430(r30)
    bl fn_80680CF8
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    subf. r0, r4, r0
    bne lbl_fn_8040C610_00000D28
    bl fn_80680CF8
    lis r4, 0x8889
    li r0, 0x1
    subi r4, r4, 0x7777
    stw r0, 0x424(r30)
    mulhw r0, r4, r3
    add r0, r0, r3
    srawi r0, r0, 5
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3c
    subf r3, r0, r3
    addi r0, r3, 0x1e
    stw r0, 0x41c(r30)
    b lbl_fn_8040C610_00000D90
lbl_fn_8040C610_00000D28:
    lfs f0, lbl_80886320
    stfs f0, 0x414(r30)
    bl fn_80680CF8
    lis r4, 0x8889
    li r0, 0x2
    subi r4, r4, 0x7777
    stw r0, 0x424(r30)
    mulhw r0, r4, r3
    add r0, r0, r3
    srawi r0, r0, 5
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3c
    subf r3, r0, r3
    addi r0, r3, 0x1e
    stw r0, 0x41c(r30)
    bl fn_80680CF8
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    subf. r0, r4, r0
    bne lbl_fn_8040C610_00000D88
    stw r31, 0x420(r30)
    b lbl_fn_8040C610_00000D90
lbl_fn_8040C610_00000D88:
    li r0, 0x1
    stw r0, 0x420(r30)
lbl_fn_8040C610_00000D90:
    lwz r0, 0x420(r30)
    cmpwi r0, 0x1
    bne lbl_fn_8040C610_00000DF8
    bl fn_80680CF8
    lis r5, 0x8889
    lis r4, lbl_80752AD0@ha
    subi r0, r5, 0x7777
    lfd f5, lbl_80752AD0@l(r4)
    mulhw r0, r0, r3
    lfs f3, lbl_8088633C
    lfs f0, 0x3e4(r30)
    add r0, r0, r3
    srawi r0, r0, 3
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0xf
    subf r3, r0, r3
    subi r0, r3, 0xf
    xoris r0, r0, 0x8000
    stw r0, 0x7c(r1)
    lfd f4, 0x78(r1)
    fsubs f4, f4, f5
    fmuls f3, f3, f4
    fadds f0, f0, f3
    stfs f0, 0x3e4(r30)
    b lbl_fn_8040C610_00000E4C
lbl_fn_8040C610_00000DF8:
    bl fn_80680CF8
    lis r5, 0x8889
    lis r4, lbl_80752AD0@ha
    subi r0, r5, 0x7777
    lfd f5, lbl_80752AD0@l(r4)
    mulhw r0, r0, r3
    lfs f3, lbl_8088633C
    lfs f0, 0x3e4(r30)
    add r0, r0, r3
    srawi r0, r0, 3
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0xf
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x84(r1)
    lfd f4, 0x80(r1)
    fsubs f4, f4, f5
    fmuls f3, f3, f4
    fadds f0, f0, f3
    stfs f0, 0x3e4(r30)
lbl_fn_8040C610_00000E4C:
    lfs f1, 0x3e4(r30)
    bl fn_8068AD58
    lfs f0, 0x3e4(r30)
    frsp f3, f1
    fneg f1, f0
    stfs f3, 0x3ec(r30)
    bl fn_8068A850
    frsp f0, f1
    stfs f0, 0x3f4(r30)
lbl_fn_8040C610_00000E70:
    lwz r3, 0x41c(r30)
    subi r0, r3, 0x1
    stw r0, 0x41c(r30)
    psq_l f31, 0xb8(r1), 0, 0
    lfd f31, 0xb0(r1)
    psq_l f30, 0xa8(r1), 0, 0
    lfd f30, 0xa0(r1)
    addi r11, r1, 0xa0
    bl _restgpr_27
    lwz r0, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

asm void fn_8040CD2C(void)
{
    nofralloc
    stwu r1, -0x140(r1)
    mflr r0
    stw r0, 0x144(r1)
    stfd f31, 0x130(r1)
    psq_st f31, 0x138(r1), 0, 0
    stfd f30, 0x120(r1)
    psq_st f30, 0x128(r1), 0, 0
    stw r31, 0x11c(r1)
    mr r31, r3
    stw r30, 0x118(r1)
    lfs f3, 0x3dc(r3)
    lfs f0, 0x530(r4)
    lfs f5, 0x3d8(r3)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r4)
    lfs f3, 0x3d4(r3)
    lfs f0, 0x528(r4)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x60(r1)
    stfs f0, 0x5c(r1)
    stfs f6, 0x64(r1)
    lwz r0, 0x42c(r3)
    cmpwi r0, 0x96
    bgt lbl_fn_8040CD2C_00000F1C
    addi r3, r1, 0x5c
    bl fn_805F9920
    lfs f0, lbl_80886348
    fcmpo cr0, f1, f0
    bge lbl_fn_8040CD2C_00001030
lbl_fn_8040CD2C_00000F1C:
    lwz r0, 0x424(r31)
    cmpwi r0, 0x4
    beq lbl_fn_8040CD2C_00000F30
    li r0, 0x21
    stw r0, 0x41c(r31)
lbl_fn_8040CD2C_00000F30:
    lwz r0, 0x420(r31)
    li r3, 0x4
    lfs f0, lbl_8088632C
    cmpwi r0, 0x1
    stfs f0, 0x414(r31)
    stw r3, 0x424(r31)
    bne lbl_fn_8040CD2C_00000FB0
    bl fn_80680CF8
    lis r4, 0x6666
    lis r0, 0x4330
    addi r5, r4, 0x6667
    stw r0, 0x108(r1)
    mulhw r5, r5, r3
    lis r4, lbl_80752AD0@ha
    lfd f6, lbl_80752AD0@l(r4)
    lfs f4, lbl_80886344
    lfs f3, lbl_8088633C
    lfs f0, 0x3e4(r31)
    srawi r0, r5, 2
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0xa
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x10c(r1)
    lfd f5, 0x108(r1)
    fsubs f5, f5, f6
    fmuls f4, f4, f5
    fmuls f3, f3, f4
    fadds f0, f0, f3
    stfs f0, 0x3e4(r31)
    b lbl_fn_8040CD2C_00001008
lbl_fn_8040CD2C_00000FB0:
    bl fn_80680CF8
    lis r4, 0x6666
    lis r0, 0x4330
    addi r5, r4, 0x6667
    stw r0, 0x108(r1)
    mulhw r5, r5, r3
    lis r4, lbl_80752AD0@ha
    lfd f5, lbl_80752AD0@l(r4)
    lfs f3, lbl_8088633C
    lfs f0, 0x3e4(r31)
    srawi r0, r5, 2
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0xa
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x10c(r1)
    lfd f4, 0x108(r1)
    fsubs f4, f4, f5
    fmuls f3, f3, f4
    fadds f0, f0, f3
    stfs f0, 0x3e4(r31)
lbl_fn_8040CD2C_00001008:
    lfs f1, 0x3e4(r31)
    bl fn_8068AD58
    lfs f0, 0x3e4(r31)
    frsp f3, f1
    fneg f1, f0
    stfs f3, 0x3ec(r31)
    bl fn_8068A850
    frsp f0, f1
    stfs f0, 0x3f4(r31)
    b lbl_fn_8040CD2C_00001320
lbl_fn_8040CD2C_00001030:
    addi r3, r1, 0x5c
    bl fn_805F9920
    lfs f0, lbl_8088634C
    fcmpo cr0, f1, f0
    bge lbl_fn_8040CD2C_00001070
    lwz r0, 0x424(r31)
    cmpwi r0, 0x4
    beq lbl_fn_8040CD2C_00001070
    lwz r3, 0x42c(r31)
    li r4, 0x3
    lfs f0, lbl_80886330
    addi r0, r3, 0x1
    stfs f0, 0x414(r31)
    stw r4, 0x424(r31)
    stw r0, 0x42c(r31)
    b lbl_fn_8040CD2C_00001320
lbl_fn_8040CD2C_00001070:
    addi r3, r1, 0x5c
    bl fn_805F9920
    lfs f0, lbl_80886350
    fcmpo cr0, f1, f0
    bge lbl_fn_8040CD2C_00001320
    lwz r0, 0x424(r31)
    cmpwi r0, 0x4
    beq lbl_fn_8040CD2C_00001320
    lfs f0, lbl_80886354
    li r0, 0x3
    stfs f0, 0x414(r31)
    addi r3, r1, 0x5c
    lfs f0, lbl_80886318
    mr r4, r3
    stw r0, 0x424(r31)
    stfs f0, 0x60(r1)
    bl fn_805F98D0
    lfs f2, 0x64(r1)
    addi r3, r1, 0x5c
    lfs f0, lbl_80886358
    addi r30, r1, 0x50
    fabs f3, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    frsp f3, f3
    stfs f2, 0x58(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_8040CD2C_00001104
    lfs f3, 0x50(r1)
    lfs f0, lbl_80886318
    fcmpo cr0, f3, f0
    ble lbl_fn_8040CD2C_000010F8
    lfs f0, lbl_8088635C
    b lbl_fn_8040CD2C_000010FC
lbl_fn_8040CD2C_000010F8:
    lfs f0, lbl_80886360
lbl_fn_8040CD2C_000010FC:
    stfs f0, 0x48(r1)
    b lbl_fn_8040CD2C_00001118
lbl_fn_8040CD2C_00001104:
    frsp f2, f2
    lfs f1, 0x50(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_8040CD2C_00001118:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x68
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80886318
    addi r4, r1, 0x38
    lfs f30, 0x70(r1)
    mr r5, r4
    lfs f31, 0x6c(r1)
    addi r3, r1, 0x98
    lfs f13, 0x68(r1)
    lfs f12, 0x80(r1)
    lfs f11, 0x7c(r1)
    lfs f10, 0x78(r1)
    lfs f9, 0x90(r1)
    lfs f8, 0x8c(r1)
    lfs f7, 0x88(r1)
    lfs f6, 0x94(r1)
    lfs f5, 0x84(r1)
    lfs f4, 0x74(r1)
    lfs f0, lbl_8088632C
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x58(r1)
    stfs f3, 0xc8(r1)
    stfs f3, 0xcc(r1)
    stfs f3, 0xd0(r1)
    stfs f0, 0xd4(r1)
    stfs f13, 0x8(r1)
    stfs f31, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f13, 0x98(r1)
    stfs f31, 0x9c(r1)
    stfs f30, 0xa0(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xa8(r1)
    stfs f11, 0xac(r1)
    stfs f12, 0xb0(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0xb8(r1)
    stfs f8, 0xbc(r1)
    stfs f9, 0xc0(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0xa4(r1)
    stfs f5, 0xb4(r1)
    stfs f6, 0xc4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80886358
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8040CD2C_00001234
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80886318
    fcmpo cr0, f3, f0
    ble lbl_fn_8040CD2C_00001224
    lfs f0, lbl_8088635C
    b lbl_fn_8040CD2C_00001228
lbl_fn_8040CD2C_00001224:
    lfs f0, lbl_80886360
lbl_fn_8040CD2C_00001228:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_8040CD2C_00001248
lbl_fn_8040CD2C_00001234:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_8040CD2C_00001248:
    addi r3, r1, 0x44
    lfs f4, lbl_80886318
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_80752AE0@ha
    psq_st f1, 0x0(r30), 0, 0
    fmr f2, f4
    lfs f0, 0x3e4(r31)
    lfs f3, 0x54(r1)
    stfs f2, 0x58(r1)
    fsubs f1, f3, f0
    lfd f2, lbl_80752AE0@l(r3)
    stfs f4, 0x4c(r1)
    bl fn_8068AEA8
    frsp f1, f1
    lfs f0, lbl_80886364
    fcmpo cr0, f1, f0
    ble lbl_fn_8040CD2C_00001294
    lfs f0, lbl_80886368
    fsubs f1, f1, f0
lbl_fn_8040CD2C_00001294:
    lfs f0, lbl_8088636C
    fcmpo cr0, f1, f0
    bge lbl_fn_8040CD2C_000012A8
    lfs f0, lbl_80886368
    fadds f1, f1, f0
lbl_fn_8040CD2C_000012A8:
    fabs f0, f1
    lfs f3, lbl_80886370
    frsp f0, f0
    fcmpo cr0, f0, f3
    ble lbl_fn_8040CD2C_000012E4
    lfs f0, lbl_80886318
    fcmpo cr0, f1, f0
    ble lbl_fn_8040CD2C_000012D8
    fmr f1, f3
    li r0, 0x1
    stw r0, 0x420(r31)
    b lbl_fn_8040CD2C_000012E4
lbl_fn_8040CD2C_000012D8:
    li r0, 0x0
    stw r0, 0x420(r31)
    lfs f1, lbl_80886374
lbl_fn_8040CD2C_000012E4:
    addi r3, r1, 0xd8
    li r4, 0x79
    bl fn_805F8E70
    addi r4, r31, 0x3ec
    addi r3, r1, 0xd8
    mr r5, r4
    bl fn_805F93C0
    lfs f2, 0x3f4(r31)
    lfs f1, 0x3ec(r31)
    bl fn_8068AEA4
    frsp f0, f1
    lwz r3, 0x42c(r31)
    addi r0, r3, 0x1
    stfs f0, 0x3e4(r31)
    stw r0, 0x42c(r31)
lbl_fn_8040CD2C_00001320:
    lwz r0, 0x144(r1)
    psq_l f31, 0x138(r1), 0, 0
    lfd f31, 0x130(r1)
    psq_l f30, 0x128(r1), 0, 0
    lfd f30, 0x120(r1)
    lwz r31, 0x11c(r1)
    lwz r30, 0x118(r1)
    mtlr r0
    addi r1, r1, 0x140
    blr
}

asm void fn_8040D1D0(void)
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
    beq lbl_fn_8040D1D0_000013A0
    lis r5, lbl_80752AFC@ha
    li r3, 0x648
    addi r5, r5, lbl_80752AFC@l
    li r4, 0xc
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8040D1D0_000013A4
    mr r4, r30
    mr r5, r31
    bl fn_8040D244
    b lbl_fn_8040D1D0_000013A4
lbl_fn_8040D1D0_000013A0:
    li r3, 0x0
lbl_fn_8040D1D0_000013A4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8040D244(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    mr r30, r5
    stw r29, 0x24(r1)
    mr r29, r3
    lwz r5, 0x18(r5)
    lwz r6, 0x1c(r30)
    bl fn_803EC568
    lis r3, lbl_8078D500@ha
    li r31, 0x0
    addi r3, r3, lbl_8078D500@l
    stw r3, 0x0(r29)
    addi r3, r29, 0x638
    stw r31, 0x608(r29)
    stw r31, 0x60c(r29)
    stw r30, 0x630(r29)
    stw r31, 0x634(r29)
    bl fn_800CB360
    lfs f0, lbl_80886318
    lwz r3, 0x60c(r29)
    stfs f0, 0x63c(r29)
    lwz r4, 0x630(r29)
    cmpwi r3, 0x0
    stw r31, 0x640(r29)
    stw r31, 0x644(r29)
    lwz r31, 0x20(r4)
    stw r31, 0x610(r29)
    beq lbl_fn_8040D244_00001444
    lis r4, fn_8040B60C@ha
    addi r4, r4, fn_8040B60C@l
    bl fn_80695A50
lbl_fn_8040D244_00001444:
    cmpwi r31, 0x0
    stw r31, 0x608(r29)
    beq lbl_fn_8040D244_00001490
    mulli r3, r31, 0x434
    li r4, 0x0
    la r5, lbl_8087DF7C
    la r6, lbl_8087DF78
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_8040B560@ha
    lis r5, fn_8040B60C@ha
    mr r7, r31
    li r6, 0x434
    addi r4, r4, fn_8040B560@l
    addi r5, r5, fn_8040B60C@l
    bl fn_80695720
    stw r3, 0x60c(r29)
    b lbl_fn_8040D244_00001498
lbl_fn_8040D244_00001490:
    li r0, 0x0
    stw r0, 0x60c(r29)
lbl_fn_8040D244_00001498:
    lwz r4, 0x630(r29)
    addi r5, r1, 0x8
    lfs f4, lbl_80886318
    li r0, 0x0
    lfs f3, 0x14(r4)
    mr r3, r29
    stfs f4, 0x8(r1)
    fmr f2, f4
    lfs f0, lbl_80886378
    stfs f3, 0xc(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x78(r29), 0, 0
    stfs f2, 0x80(r29)
    psq_l f1, 0x4(r4), 0, 0
    lfs f2, 0xc(r4)
    stfs f2, 0x74(r29)
    psq_st f1, 0x6c(r29), 0, 0
    psq_st f1, 0x620(r29), 0, 0
    stfs f2, 0x628(r29)
    lfs f3, 0x40(r4)
    stfs f3, 0x62c(r29)
    fadds f0, f0, f3
    stb r0, 0xf4(r29)
    stfs f0, 0x63c(r29)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r0, 0x34(r1)
    stfs f4, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8040D3A0(void)
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
    beq lbl_fn_8040D3A0_00001590
    li r4, -0x1
    addi r3, r3, 0x638
    bl fn_800CB3A0
    addic. r0, r30, 0x608
    beq lbl_fn_8040D3A0_00001574
    lwz r3, 0x60c(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8040D3A0_00001568
    lis r4, fn_8040B60C@ha
    addi r4, r4, fn_8040B60C@l
    bl fn_80695A50
lbl_fn_8040D3A0_00001568:
    li r0, 0x0
    stw r0, 0x60c(r30)
    stw r0, 0x608(r30)
lbl_fn_8040D3A0_00001574:
    mr r3, r30
    li r4, 0x0
    bl fn_803EC69C
    cmpwi r31, 0x0
    ble lbl_fn_8040D3A0_00001590
    mr r3, r30
    bl dtor_80084684
lbl_fn_8040D3A0_00001590:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8040D434(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    addi r11, r1, 0x70
    stfd f31, 0x80(r1)
    psq_st f31, 0x88(r1), 0, 0
    stfd f30, 0x70(r1)
    psq_st f30, 0x78(r1), 0, 0
    bl _savegpr_21
    mr r26, r3
    bl fn_803EC91C
    cmpwi r3, 0x0
    bne lbl_fn_8040D434_00001844
    lbz r0, 0xf4(r26)
    cmpwi r0, 0x0
    bne lbl_fn_8040D434_00001698
    addi r23, r1, 0x2c
    li r25, 0x0
    li r24, 0x0
    b lbl_fn_8040D434_00001684
lbl_fn_8040D434_000015FC:
    lwz r3, 0x60c(r26)
    addi r4, r26, 0xf5
    li r5, 0x0
    stwx r26, r3, r24
    lwz r0, 0x60c(r26)
    add r3, r0, r24
    addi r3, r3, 0x4
    bl fn_8008AD4C
    mr r22, r26
    addi r21, r26, 0x1f5
    li r27, 0x0
lbl_fn_8040D434_00001628:
    lwz r0, 0x60c(r26)
    mr r5, r21
    lwz r4, 0x5f8(r22)
    add r3, r0, r24
    addi r3, r3, 0x4
    bl fn_80097A88
    addi r27, r27, 0x1
    addi r22, r22, 0x4
    cmpwi r27, 0x3
    addi r21, r21, 0x100
    blt lbl_fn_8040D434_00001628
    lwz r0, 0x60c(r26)
    addi r25, r25, 0x1
    lfs f2, 0x628(r26)
    add r3, r0, r24
    psq_l f1, 0x620(r26), 0, 0
    lfs f0, 0x62c(r26)
    addi r24, r24, 0x434
    psq_st f1, 0x0(r23), 0, 0
    psq_st f1, 0x404(r3), 0, 0
    stfs f2, 0x40c(r3)
    stfs f2, 0x34(r1)
    stfs f0, 0x410(r3)
lbl_fn_8040D434_00001684:
    lwz r0, 0x610(r26)
    cmpw r25, r0
    blt lbl_fn_8040D434_000015FC
    li r0, 0x1
    stb r0, 0xf4(r26)
lbl_fn_8040D434_00001698:
    lbz r0, 0xf4(r26)
    cmpwi r0, 0x0
    beq lbl_fn_8040D434_00001844
    lfs f31, lbl_8088631C
    addi r30, r1, 0x14
    addi r31, r1, 0x20
    li r28, 0x1
    li r27, 0x0
    li r25, 0x0
    li r23, 0x1
    b lbl_fn_8040D434_00001828
lbl_fn_8040D434_000016C4:
    lwz r0, 0x60c(r26)
    add r29, r0, r25
    lbz r0, 0x431(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8040D434_00001810
    addi r3, r29, 0x4
    bl fn_8008B140
    cmpwi r3, 0x0
    bne lbl_fn_8040D434_00001808
    mr r3, r29
    bl fn_8040BC38
    psq_l f1, 0x3d4(r29), 0, 0
    li r22, 0x0
    psq_st f1, 0x0(r31), 0, 0
    li r24, 0x0
    lfs f2, 0x3dc(r29)
    stfs f2, 0x28(r1)
    lwz r21, 0x0(r29)
    lfs f30, 0x20(r1)
    b lbl_fn_8040D434_000017C8
lbl_fn_8040D434_00001714:
    lwz r3, 0x60c(r21)
    li r0, 0x0
    add r3, r3, r24
    lfs f2, 0x3dc(r3)
    psq_l f1, 0x3d4(r3), 0, 0
    psq_st f1, 0x614(r21), 0, 0
    stfs f2, 0x61c(r21)
    lfs f0, 0x614(r21)
    psq_st f1, 0x0(r30), 0, 0
    fcmpu cr0, f30, f0
    stfs f2, 0x1c(r1)
    bne lbl_fn_8040D434_00001768
    lfs f3, 0x24(r1)
    lfs f0, 0x618(r21)
    fcmpu cr0, f3, f0
    bne lbl_fn_8040D434_00001768
    lfs f3, 0x28(r1)
    lfs f0, 0x61c(r21)
    fcmpu cr0, f3, f0
    bne lbl_fn_8040D434_00001768
    li r0, 0x1
lbl_fn_8040D434_00001768:
    cmpwi r0, 0x0
    bne lbl_fn_8040D434_000017C0
    lfs f3, 0x61c(r21)
    addi r3, r1, 0x8
    lfs f0, 0x28(r1)
    lfs f5, 0x618(r21)
    fsubs f6, f3, f0
    lfs f4, 0x24(r1)
    lfs f3, 0x614(r21)
    lfs f0, 0x20(r1)
    fsubs f4, f5, f4
    stfs f6, 0x10(r1)
    fsubs f0, f3, f0
    stfs f4, 0xc(r1)
    stfs f0, 0x8(r1)
    bl fn_805F9940
    fcmpo cr0, f1, f31
    bge lbl_fn_8040D434_000017C0
    mulli r0, r22, 0x434
    lwz r3, 0x60c(r21)
    add r0, r3, r0
    b lbl_fn_8040D434_000017D8
lbl_fn_8040D434_000017C0:
    addi r22, r22, 0x1
    addi r24, r24, 0x434
lbl_fn_8040D434_000017C8:
    lwz r0, 0x610(r21)
    cmpw r22, r0
    blt lbl_fn_8040D434_00001714
    li r0, 0x0
lbl_fn_8040D434_000017D8:
    cmpwi r0, 0x0
    beq lbl_fn_8040D434_000017FC
    lwz r3, 0x428(r29)
    cmpwi r3, 0x0
    ble lbl_fn_8040D434_000017FC
    subi r0, r3, 0x1
    stw r0, 0x428(r29)
    li r0, 0x0
    b lbl_fn_8040D434_00001814
lbl_fn_8040D434_000017FC:
    stb r23, 0x431(r29)
    li r0, 0x1
    b lbl_fn_8040D434_00001814
lbl_fn_8040D434_00001808:
    li r0, 0x0
    b lbl_fn_8040D434_00001814
lbl_fn_8040D434_00001810:
    li r0, 0x1
lbl_fn_8040D434_00001814:
    cmpwi r0, 0x0
    bne lbl_fn_8040D434_00001820
    li r28, 0x0
lbl_fn_8040D434_00001820:
    addi r27, r27, 0x1
    addi r25, r25, 0x434
lbl_fn_8040D434_00001828:
    lwz r0, 0x610(r26)
    cmpw r27, r0
    blt lbl_fn_8040D434_000016C4
    cmpwi r28, 0x0
    beq lbl_fn_8040D434_00001844
    li r3, 0x1
    b lbl_fn_8040D434_00001848
lbl_fn_8040D434_00001844:
    li r3, 0x0
lbl_fn_8040D434_00001848:
    addi r11, r1, 0x70
    psq_l f31, 0x88(r1), 0, 0
    lfd f31, 0x80(r1)
    psq_l f30, 0x78(r1), 0, 0
    lfd f30, 0x70(r1)
    bl _restgpr_21
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_8040D6F8(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    stw r28, 0x20(r1)
    lwz r4, 0x630(r3)
    lwz r0, 0x7c(r4)
    cmpwi r0, 0x0
    bne lbl_fn_8040D6F8_000018C0
    lwz r0, 0x638(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8040D6F8_00001BA0
    li r4, 0x0
    li r5, 0x0
    addi r3, r3, 0x638
    bl fn_800CB5C8
    b lbl_fn_8040D6F8_00001BA0
lbl_fn_8040D6F8_000018C0:
    lwz r0, 0x634(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8040D6F8_00001AB4
    li r29, 0x0
    li r28, 0x0
    li r30, 0x0
    b lbl_fn_8040D6F8_00001910
lbl_fn_8040D6F8_000018DC:
    lwz r0, 0x60c(r31)
    add r3, r0, r30
    bl fn_8040B668
    lwz r0, 0x60c(r31)
    add r3, r0, r30
    lwz r0, 0x424(r3)
    cmpwi r0, 0x3
    beq lbl_fn_8040D6F8_00001904
    cmpwi r0, 0x4
    bne lbl_fn_8040D6F8_00001908
lbl_fn_8040D6F8_00001904:
    addi r29, r29, 0x1
lbl_fn_8040D6F8_00001908:
    addi r28, r28, 0x1
    addi r30, r30, 0x434
lbl_fn_8040D6F8_00001910:
    lwz r3, 0x610(r31)
    cmpw r28, r3
    blt lbl_fn_8040D6F8_000018DC
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    cmpw r29, r0
    ble lbl_fn_8040D6F8_000019B8
    lwz r0, 0x640(r31)
    li r3, 0x1e
    stw r3, 0x644(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8040D6F8_00001A50
    addi r3, r31, 0x638
    li r4, 0xf
    li r5, 0x0
    bl fn_800CB5C8
    lis r4, lbl_80752AC8@ha
    lfs f1, lbl_8088632C
    addi r4, r4, lbl_80752AC8@l
    addi r3, r1, 0x10
    lwz r4, 0x4(r4)
    addi r5, r31, 0x6c
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r31, 0x638
    addi r4, r1, 0x10
    bl fn_800CB440
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    addi r3, r31, 0x638
    li r4, 0xf
    bl fn_800CB518
    lfs f1, 0x63c(r31)
    addi r3, r31, 0x638
    li r4, 0x1
    bl fn_800CB6B0
    li r0, 0x1
    stw r0, 0x640(r31)
    b lbl_fn_8040D6F8_00001A50
lbl_fn_8040D6F8_000019B8:
    lwz r3, 0x644(r31)
    cmpwi r3, 0x0
    ble lbl_fn_8040D6F8_000019CC
    subi r0, r3, 0x1
    stw r0, 0x644(r31)
lbl_fn_8040D6F8_000019CC:
    lwz r0, 0x644(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8040D6F8_00001A50
    lwz r0, 0x640(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8040D6F8_00001A50
    addi r3, r31, 0x638
    li r4, 0xf
    li r5, 0x0
    bl fn_800CB5C8
    lis r3, lbl_80752AC8@ha
    lfs f1, lbl_8088632C
    lwz r4, lbl_80752AC8@l(r3)
    addi r3, r1, 0xc
    addi r5, r31, 0x6c
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r31, 0x638
    addi r4, r1, 0xc
    bl fn_800CB440
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    addi r3, r31, 0x638
    li r4, 0xf
    bl fn_800CB518
    lfs f1, 0x63c(r31)
    addi r3, r31, 0x638
    li r4, 0x1
    bl fn_800CB6B0
    li r0, 0x0
    stw r0, 0x640(r31)
lbl_fn_8040D6F8_00001A50:
    lwz r0, 0x638(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8040D6F8_00001B18
    lis r3, lbl_80752AC8@ha
    lfs f1, lbl_8088632C
    lwz r4, lbl_80752AC8@l(r3)
    addi r3, r1, 0x8
    addi r5, r31, 0x6c
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r31, 0x638
    addi r4, r1, 0x8
    bl fn_800CB440
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    addi r3, r31, 0x638
    li r4, 0xf
    bl fn_800CB518
    lfs f1, 0x63c(r31)
    addi r3, r31, 0x638
    li r4, 0x1
    bl fn_800CB6B0
    b lbl_fn_8040D6F8_00001B18
lbl_fn_8040D6F8_00001AB4:
    cmpwi r0, 0x1
    bne lbl_fn_8040D6F8_00001ADC
    lwz r0, 0x638(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8040D6F8_00001B18
    li r4, 0x0
    li r5, 0x0
    addi r3, r3, 0x638
    bl fn_800CB5C8
    b lbl_fn_8040D6F8_00001B18
lbl_fn_8040D6F8_00001ADC:
    cmpwi r0, 0x2
    bne lbl_fn_8040D6F8_00001B18
    li r29, 0x0
    li r30, 0x0
    b lbl_fn_8040D6F8_00001B04
lbl_fn_8040D6F8_00001AF0:
    lwz r0, 0x60c(r31)
    add r3, r0, r30
    bl fn_8040BC38
    addi r29, r29, 0x1
    addi r30, r30, 0x434
lbl_fn_8040D6F8_00001B04:
    lwz r0, 0x610(r31)
    cmpw r29, r0
    blt lbl_fn_8040D6F8_00001AF0
    li r0, 0x0
    stw r0, 0x634(r31)
lbl_fn_8040D6F8_00001B18:
    lwz r4, lbl_8087F8A0
    addi r3, r1, 0x14
    lfs f0, 0x628(r31)
    lwz r4, 0x48(r4)
    lfs f2, 0x624(r31)
    lfs f4, 0x530(r4)
    lfs f3, 0x52c(r4)
    fsubs f4, f4, f0
    lfs f1, 0x528(r4)
    lfs f0, 0x620(r31)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0x18(r1)
    stfs f0, 0x14(r1)
    stfs f4, 0x1c(r1)
    bl fn_805F9940
    lwz r0, 0x634(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8040D6F8_00001B70
    cmpwi r0, 0x1
    beq lbl_fn_8040D6F8_00001B88
    b lbl_fn_8040D6F8_00001BA0
lbl_fn_8040D6F8_00001B70:
    lfs f0, lbl_8088637C
    fcmpo cr0, f1, f0
    ble lbl_fn_8040D6F8_00001BA0
    li r0, 0x1
    stw r0, 0x634(r31)
    b lbl_fn_8040D6F8_00001BA0
lbl_fn_8040D6F8_00001B88:
    lfs f0, lbl_80886380
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_8040D6F8_00001BA0
    li r0, 0x2
    stw r0, 0x634(r31)
lbl_fn_8040D6F8_00001BA0:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}
