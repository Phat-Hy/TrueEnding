#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_26(void);
extern void _savegpr_26(void);
extern void dtor_80084684(void);
extern void fn_8004B290(void);
extern void fn_80057A64(void);
extern void fn_8005DFC8(void);
extern void fn_8006FEBC(void);
extern void fn_80071E04(void);
extern void fn_80075DEC(void);
extern void fn_80075F58(void);
extern void fn_80076174(void);
extern void fn_800A9788(void);
extern void fn_800A9794(void);
extern void fn_800B33A8(void);
extern void fn_800B3454(void);
extern void fn_800C0508(void);
extern void fn_800C0590(void);
extern void fn_800D5738(void);
extern void fn_800D5808(void);
extern void fn_800D5B58(void);
extern void fn_80614190(void);
extern void fn_80614CC0(void);
extern void fn_80614D30(void);
extern void fn_80615190(void);
extern void fn_80615560(void);
extern void fn_80616250(void);
extern void fn_806163C0(void);
extern void fn_806163E0(void);
extern void fn_80617E00(void);
extern void fn_8068A6D8(void);
extern void fn_8068A918(void);
extern void fn_806958E0(void);

/* External data declarations */
extern u8 lbl_80732E28[];
extern u8 lbl_80732E6C[];
extern u8 lbl_80732E8C[];
extern u8 lbl_80732E98[];
extern u8 lbl_80732EB4[];
extern u8 lbl_80732ED0[];
extern u8 lbl_80732EF4[];
extern u8 lbl_807790E8[];
extern u8 lbl_80779128[];
extern u8 lbl_80779160[];
extern u8 lbl_807791A0[];
extern u8 lbl_807C74A0[];

/* Small data declarations */
extern u32 lbl_8087D8C8;
extern u32 lbl_8087D8CC;
extern u32 lbl_8087D8D0;
extern u32 lbl_8087D8D4;
extern u32 lbl_8087D8D8;
extern u32 lbl_8087D8DC;
extern u32 lbl_8087D8E0;
extern u32 lbl_8087D8E4;
extern u32 lbl_8087D8E8;
extern u32 lbl_8087D8EC;
extern u32 lbl_8087D8F0;
extern u32 lbl_8087D8F4;
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EEE0;
extern u32 lbl_8087EF8C;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087EFB4;
extern u32 lbl_80880F54;
extern u32 lbl_80880F60;
extern u32 lbl_80880F68;
extern u32 lbl_80880F6C;
extern u32 lbl_80880F70;
extern u32 lbl_80880F74;

/* Function declarations */
void fn_800B6218(void);
void fn_800B64DC(void);
void fn_800B65B4(void);
void fn_800B6684(void);
void fn_800B66A4(void);
void fn_800B66E0(void);
void fn_800B671C(void);
void fn_800B675C(void);
void fn_800B678C(void);
void fn_800B67F8(void);
void fn_800B6860(void);
void fn_800B6878(void);
void fn_800B687C(void);
void fn_800B68BC(void);
void fn_800B6994(void);
void fn_800B6A00(void);
void fn_800B6B90(void);
void fn_800B6BEC(void);
void fn_800B6C70(void);

asm void fn_800B6218(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    lis r0, 0x4330
    stfd f31, 0x60(r1)
    psq_st f31, 0x68(r1), 0, 0
    stfd f30, 0x50(r1)
    psq_st f30, 0x58(r1), 0, 0
    stw r31, 0x4c(r1)
    mr r31, r3
    addi r3, r1, 0x8
    stw r30, 0x48(r1)
    stw r29, 0x44(r1)
    stw r28, 0x40(r1)
    stw r0, 0x20(r1)
    stw r0, 0x28(r1)
    bl fn_8006FEBC
    lwz r4, lbl_8087EEE0
    lis r3, lbl_80732E28@ha
    lfd f2, lbl_80732E28@l(r3)
    lwz r3, 0x3c(r4)
    lwz r0, 0x40(r4)
    xoris r3, r3, 0x8000
    stw r3, 0x24(r1)
    xoris r0, r0, 0x8000
    lfs f4, 0x8(r1)
    stw r0, 0x2c(r1)
    lfd f1, 0x20(r1)
    lfd f0, 0x28(r1)
    lfs f3, lbl_8087D8C8
    fsubs f5, f1, f2
    fsubs f6, f0, f2
    fcmpo cr0, f4, f3
    bge lbl_fn_800B6218_0000008C
    b lbl_fn_800B6218_0000009C
lbl_fn_800B6218_0000008C:
    fcmpo cr0, f4, f5
    ble lbl_fn_800B6218_00000098
    fmr f4, f5
lbl_fn_800B6218_00000098:
    fmr f3, f4
lbl_fn_800B6218_0000009C:
    lfs f0, 0xc(r1)
    lfs f1, lbl_8087D8CC
    stfs f3, 0x8(r1)
    fcmpo cr0, f0, f1
    bge lbl_fn_800B6218_000000B4
    b lbl_fn_800B6218_000000C4
lbl_fn_800B6218_000000B4:
    fcmpo cr0, f0, f6
    ble lbl_fn_800B6218_000000C0
    fmr f0, f6
lbl_fn_800B6218_000000C0:
    fmr f1, f0
lbl_fn_800B6218_000000C4:
    lfs f0, 0x14(r1)
    lfs f2, lbl_8087D8D0
    stfs f1, 0xc(r1)
    fcmpo cr0, f0, f2
    bge lbl_fn_800B6218_000000DC
    b lbl_fn_800B6218_000000F0
lbl_fn_800B6218_000000DC:
    fcmpo cr0, f0, f5
    ble lbl_fn_800B6218_000000E8
    b lbl_fn_800B6218_000000EC
lbl_fn_800B6218_000000E8:
    fmr f5, f0
lbl_fn_800B6218_000000EC:
    fmr f2, f5
lbl_fn_800B6218_000000F0:
    lfs f0, 0x18(r1)
    lfs f1, lbl_8087D8D4
    stfs f2, 0x14(r1)
    fcmpo cr0, f0, f1
    bge lbl_fn_800B6218_00000108
    b lbl_fn_800B6218_0000011C
lbl_fn_800B6218_00000108:
    fcmpo cr0, f0, f6
    ble lbl_fn_800B6218_00000114
    b lbl_fn_800B6218_00000118
lbl_fn_800B6218_00000114:
    fmr f6, f0
lbl_fn_800B6218_00000118:
    fmr f1, f6
lbl_fn_800B6218_0000011C:
    stfs f1, 0x18(r1)
    lis r3, lbl_80732E28@ha
    lfd f4, lbl_80732E28@l(r3)
    lwz r3, 0x3c(r4)
    lwz r0, 0x40(r4)
    xoris r3, r3, 0x8000
    stw r3, 0x24(r1)
    xoris r0, r0, 0x8000
    lfs f3, lbl_80880F54
    lfd f0, 0x20(r1)
    stw r0, 0x2c(r1)
    fsubs f2, f0, f4
    lfs f0, 0x8(r1)
    lfd f1, 0x28(r1)
    fdivs f31, f3, f2
    fsubs f2, f1, f4
    fmuls f1, f0, f31
    fdivs f30, f3, f2
    bl fn_8068A918
    frsp f0, f1
    lwz r0, lbl_8087D8D8
    lwz r30, lbl_8087D8D8
    fctiwz f0, f0
    stfd f0, 0x30(r1)
    lwz r3, 0x34(r1)
    cmpw r3, r0
    bge lbl_fn_800B6218_0000018C
    b lbl_fn_800B6218_000001A4
lbl_fn_800B6218_0000018C:
    lwz r0, lbl_8087D8DC
    lwz r4, lbl_8087D8DC
    cmpw r3, r0
    ble lbl_fn_800B6218_000001A0
    mr r3, r4
lbl_fn_800B6218_000001A0:
    mr r30, r3
lbl_fn_800B6218_000001A4:
    lfs f0, 0xc(r1)
    fmuls f1, f0, f30
    bl fn_8068A918
    frsp f0, f1
    lwz r0, lbl_8087D8E0
    lwz r29, lbl_8087D8E0
    fctiwz f0, f0
    stfd f0, 0x30(r1)
    lwz r3, 0x34(r1)
    cmpw r3, r0
    bge lbl_fn_800B6218_000001D4
    b lbl_fn_800B6218_000001EC
lbl_fn_800B6218_000001D4:
    lwz r0, lbl_8087D8E4
    lwz r4, lbl_8087D8E4
    cmpw r3, r0
    ble lbl_fn_800B6218_000001E8
    mr r3, r4
lbl_fn_800B6218_000001E8:
    mr r29, r3
lbl_fn_800B6218_000001EC:
    lfs f0, 0x14(r1)
    fmuls f1, f0, f31
    bl fn_8068A6D8
    frsp f0, f1
    lwz r0, lbl_8087D8E8
    lwz r28, lbl_8087D8E8
    fctiwz f0, f0
    stfd f0, 0x30(r1)
    lwz r3, 0x34(r1)
    cmpw r3, r0
    bge lbl_fn_800B6218_0000021C
    b lbl_fn_800B6218_00000234
lbl_fn_800B6218_0000021C:
    lwz r0, lbl_8087D8EC
    lwz r4, lbl_8087D8EC
    cmpw r3, r0
    ble lbl_fn_800B6218_00000230
    mr r3, r4
lbl_fn_800B6218_00000230:
    mr r28, r3
lbl_fn_800B6218_00000234:
    lfs f0, 0x18(r1)
    fmuls f1, f0, f30
    bl fn_8068A6D8
    frsp f0, f1
    lwz r0, lbl_8087D8F0
    lwz r7, lbl_8087D8F0
    fctiwz f0, f0
    stfd f0, 0x30(r1)
    lwz r3, 0x34(r1)
    cmpw r3, r0
    bge lbl_fn_800B6218_00000264
    b lbl_fn_800B6218_0000027C
lbl_fn_800B6218_00000264:
    lwz r0, lbl_8087D8F4
    lwz r4, lbl_8087D8F4
    cmpw r3, r0
    ble lbl_fn_800B6218_00000278
    mr r3, r4
lbl_fn_800B6218_00000278:
    mr r7, r3
lbl_fn_800B6218_0000027C:
    lfs f1, 0x10(r1)
    mr r3, r31
    mr r4, r30
    mr r5, r29
    mr r6, r28
    bl fn_800B65B4
    lwz r0, 0x74(r1)
    psq_l f31, 0x68(r1), 0, 0
    lfd f31, 0x60(r1)
    psq_l f30, 0x58(r1), 0, 0
    lfd f30, 0x50(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    lwz r28, 0x40(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_800B64DC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    sraw r12, r4, r8
    slwi r10, r8, 2
    sraw r31, r6, r8
    lwz r9, lbl_8087EFA8
    sraw r30, r7, r8
    li r0, 0x20
    sraw r28, r0, r8
    add r10, r3, r10
    sraw r27, r5, r8
    lwz r29, 0x14(r10)
    mullw r11, r27, r28
    lfs f0, 0x1d8(r9)
    slwi r10, r12, 2
    b lbl_fn_800B64DC_00000378
lbl_fn_800B64DC_00000310:
    slwi r9, r11, 2
    addi r0, r31, 0x1
    add r9, r29, r9
    mr r26, r12
    subf r0, r12, r0
    add r9, r10, r9
    mtctr r0
    cmpw r12, r31
    bgt lbl_fn_800B64DC_00000370
lbl_fn_800B64DC_00000334:
    lfs f2, 0x0(r9)
    fadds f2, f2, f0
    fcmpo cr0, f1, f2
    cror eq, lt, eq
    bne lbl_fn_800B64DC_00000350
    li r3, 0x0
    b lbl_fn_800B64DC_00000384
lbl_fn_800B64DC_00000350:
    cmpwi r8, 0x0
    ble lbl_fn_800B64DC_00000364
    subi r8, r8, 0x1
    bl fn_800B64DC
    b lbl_fn_800B64DC_00000384
lbl_fn_800B64DC_00000364:
    addi r9, r9, 0x4
    addi r26, r26, 0x1
    bdnz lbl_fn_800B64DC_00000334
lbl_fn_800B64DC_00000370:
    add r11, r11, r28
    addi r27, r27, 0x1
lbl_fn_800B64DC_00000378:
    cmpw r27, r30
    ble lbl_fn_800B64DC_00000310
    li r3, 0x1
lbl_fn_800B64DC_00000384:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800B65B4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mr r12, r5
    slwi r9, r4, 2
    li r11, 0x0
    stw r31, 0x1c(r1)
    lwz r8, lbl_8087EFA8
    lwz r10, 0x14(r3)
    slwi r3, r5, 7
    lfs f0, 0x1d8(r8)
    b lbl_fn_800B65B4_0000040C
lbl_fn_800B65B4_000003C4:
    addi r0, r6, 0x1
    add r8, r10, r3
    subf r0, r4, r0
    mr r31, r4
    add r8, r9, r8
    mtctr r0
    cmpw r4, r6
    bgt lbl_fn_800B65B4_00000404
lbl_fn_800B65B4_000003E4:
    lfs f2, 0x0(r8)
    fadds f2, f2, f0
    fcmpo cr0, f1, f2
    ble lbl_fn_800B65B4_000003F8
    addi r11, r11, 0x1
lbl_fn_800B65B4_000003F8:
    addi r8, r8, 0x4
    addi r31, r31, 0x1
    bdnz lbl_fn_800B65B4_000003E4
lbl_fn_800B65B4_00000404:
    addi r3, r3, 0x80
    addi r12, r12, 0x1
lbl_fn_800B65B4_0000040C:
    cmpw r12, r7
    ble lbl_fn_800B65B4_000003C4
    subf r3, r5, r7
    subf r4, r4, r6
    addi r0, r3, 0x1
    lis r5, 0x4330
    addi r4, r4, 0x1
    xoris r3, r11, 0x8000
    mullw r0, r4, r0
    stw r3, 0xc(r1)
    lis r4, lbl_80732E28@ha
    lwz r31, 0x1c(r1)
    stw r5, 0x8(r1)
    lfd f2, lbl_80732E28@l(r4)
    xoris r0, r0, 0x8000
    lfd f0, 0x8(r1)
    stw r0, 0x14(r1)
    fsubs f1, f0, f2
    stw r5, 0x10(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f2
    fdivs f1, f1, f0
    addi r1, r1, 0x20
    blr
}

asm void fn_800B6684(void)
{
    nofralloc
    lis r3, lbl_807C74A0@ha
    lis r4, fn_80057A64@ha
    addi r3, r3, lbl_807C74A0@l
    li r5, 0x0
    addi r4, r4, fn_80057A64@l
    li r6, 0xc
    li r7, 0x10
    b fn_806958E0
}

asm void fn_800B66A4(void)
{
    nofralloc
    lis r7, lbl_80732E6C@ha
    lis r4, lbl_807790E8@ha
    li r6, 0x1
    li r5, -0x1
    addi r7, r7, lbl_80732E6C@l
    addi r4, r4, lbl_807790E8@l
    li r0, 0x0
    stw r6, 0x4(r3)
    stw r7, 0x8(r3)
    stw r5, 0xc(r3)
    stw r5, 0x10(r3)
    stw r6, 0x14(r3)
    stw r0, 0x18(r3)
    stw r4, 0x0(r3)
    blr
}

asm void fn_800B66E0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r3, lbl_8087EFB4
    bl fn_800C0508
    mr r3, r31
    bl fn_800B33A8
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800B671C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_800B671C_0000052C
    cmpwi r4, 0x0
    ble lbl_fn_800B671C_0000052C
    bl dtor_80084684
lbl_fn_800B671C_0000052C:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800B675C(void)
{
    nofralloc
    lis r6, lbl_80732E8C@ha
    lis r4, lbl_80779128@ha
    li r0, -0x1
    li r5, 0x1
    addi r6, r6, lbl_80732E8C@l
    addi r4, r4, lbl_80779128@l
    stw r5, 0x4(r3)
    stw r6, 0x8(r3)
    stw r0, 0xc(r3)
    stw r0, 0x10(r3)
    stw r4, 0x0(r3)
    blr
}

asm void fn_800B678C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r4
    lwz r31, lbl_8087EFB4
    b lbl_fn_800B678C_000005C0
lbl_fn_800B678C_00000594:
    lwz r3, lbl_8087EF8C
    bl fn_800A9788
    lwz r3, 0x0(r30)
    mr r4, r31
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    lwz r3, lbl_8087EF8C
    bl fn_800A9794
    lwz r30, 0x8(r30)
lbl_fn_800B678C_000005C0:
    cmpwi r30, 0x0
    bne lbl_fn_800B678C_00000594
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800B67F8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lfs f0, lbl_80880F60
    stw r0, 0x14(r1)
    addi r5, r1, 0x8
    lwz r4, lbl_8087EEE0
    stfs f0, 0x8(r1)
    psq_l f1, 0x58(r4), 0, 0
    psq_st f1, 0x14(r3), 0, 0
    stfs f0, 0xc(r1)
    lwz r3, lbl_8087EEE0
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x58(r3), 0, 0
    lwz r3, lbl_8087EEE0
    bl fn_80071E04
    lwz r3, lbl_8087EEE0
    li r4, 0x0
    bl fn_80076174
    lwz r3, lbl_8087EFB4
    li r4, 0x0
    li r5, 0x13
    bl fn_800C0590
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800B6860(void)
{
    nofralloc
    lwz r5, lbl_8087EEE0
    li r4, 0x1
    psq_l f1, 0x14(r3), 0, 0
    psq_st f1, 0x58(r5), 0, 0
    lwz r3, lbl_8087EEE0
    b fn_80076174
}

asm void fn_800B6878(void)
{
    nofralloc
    blr
}

asm void fn_800B687C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_800B687C_0000068C
    cmpwi r4, 0x0
    ble lbl_fn_800B687C_0000068C
    bl dtor_80084684
lbl_fn_800B687C_0000068C:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800B68BC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_80779160@ha
    li r7, 0x1
    stw r0, 0x14(r1)
    li r6, 0x3
    addi r4, r4, lbl_80779160@l
    li r5, -0x1b
    stw r31, 0xc(r1)
    lis r31, lbl_80732EB4@ha
    addi r31, r31, lbl_80732EB4@l
    li r0, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    stw r7, 0x4(r3)
    stw r31, 0x8(r3)
    stw r6, 0xc(r3)
    stw r5, 0x10(r3)
    stw r7, 0x14(r3)
    stw r0, 0x18(r3)
    stw r4, 0x0(r3)
    addi r3, r3, 0x5c
    bl fn_800D5738
    lwz r5, lbl_8087EEE0
    addi r3, r30, 0x5c
    addi r8, r31, 0x8
    li r6, 0x4
    lwz r4, 0x3c(r5)
    li r7, 0x0
    lwz r5, 0x40(r5)
    srwi r0, r4, 31
    add r4, r0, r4
    srwi r0, r5, 31
    srawi r4, r4, 1
    add r0, r0, r5
    srawi r5, r0, 1
    bl fn_800D5B58
    lfs f1, lbl_80880F68
    addi r3, r30, 0x5c
    li r4, 0x1
    li r5, 0x1
    fmr f2, f1
    li r6, 0x0
    fmr f3, f1
    li r7, 0x0
    li r8, 0x0
    bl fn_80616250
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800B6994(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r31, lbl_8087EEE0
    bl fn_800B33A8
    addi r3, r29, 0x5c
    bl fn_806163E0
    clrlwi r30, r3, 16
    addi r3, r29, 0x5c
    bl fn_806163C0
    clrlwi r6, r3, 16
    mr r3, r31
    mr r7, r30
    li r4, 0x0
    li r5, 0x0
    bl fn_80075F58
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800B6A00(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    stw r29, 0x34(r1)
    stw r28, 0x30(r1)
    mr r28, r3
    addi r3, r3, 0x5c
    lwz r31, lbl_8087EEE0
    bl fn_806163C0
    clrlwi r30, r3, 16
    addi r3, r28, 0x5c
    bl fn_806163E0
    lwz r0, 0x48(r31)
    clrlwi r31, r3, 16
    lis r4, 0x100
    stb r0, 0xa(r1)
    extrwi r3, r0, 8, 8
    extrwi r5, r0, 8, 16
    srwi r0, r0, 24
    stb r3, 0x8(r1)
    lwz r29, 0x84(r28)
    addi r3, r1, 0xc
    stb r5, 0x9(r1)
    subi r4, r4, 0x1
    stb r0, 0xb(r1)
    lwz r0, 0x8(r1)
    stw r0, 0xc(r1)
    bl fn_80615190
    li r3, 0x1
    li r4, 0x3
    li r5, 0x1
    bl fn_80617E00
    mr r5, r30
    mr r6, r31
    li r3, 0x0
    li r4, 0x0
    bl fn_80614CC0
    mr r3, r30
    mr r4, r31
    li r5, 0x4
    li r6, 0x0
    bl fn_80614D30
    mr r3, r29
    li r4, 0x1
    bl fn_80615560
    bl fn_80614190
    mr r3, r28
    bl fn_800B3454
    lwz r3, lbl_8087EEE0
    bl fn_80075DEC
    lwz r3, lbl_8087EFA8
    lwz r0, 0x308(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800B6A00_00000958
    lwz r3, lbl_8087EEE0
    lis r7, 0x4330
    lis r6, lbl_80732E98@ha
    stw r7, 0x10(r1)
    lwz r9, 0x40(r3)
    addi r5, r28, 0x5c
    lwz r3, 0x3c(r3)
    li r4, -0x1
    srawi r8, r9, 2
    xoris r0, r9, 0x8000
    addze r8, r8
    xoris r3, r3, 0x8000
    subf r8, r8, r9
    stw r3, 0x1c(r1)
    xoris r3, r8, 0x8000
    lfd f6, lbl_80732E98@l(r6)
    stw r3, 0x14(r1)
    li r6, 0x0
    lfs f2, lbl_80880F70
    stw r7, 0x18(r1)
    lfd f1, 0x10(r1)
    lfd f0, 0x18(r1)
    fsubs f3, f1, f6
    stw r0, 0x24(r1)
    fsubs f1, f0, f6
    lfs f5, lbl_80880F74
    stw r7, 0x20(r1)
    fsubs f2, f3, f2
    lfd f0, 0x20(r1)
    fmuls f4, f1, f5
    lwz r3, lbl_8087EEB0
    fsubs f0, f0, f6
    lfs f1, lbl_80880F6C
    lfs f3, lbl_80880F68
    fmuls f5, f0, f5
    bl fn_8005DFC8
lbl_fn_800B6A00_00000958:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r28, 0x30(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_800B6B90(void)
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
    beq lbl_fn_800B6B90_000009B8
    li r4, -0x1
    addi r3, r3, 0x5c
    bl fn_800D5808
    cmpwi r31, 0x0
    ble lbl_fn_800B6B90_000009B8
    mr r3, r30
    bl dtor_80084684
lbl_fn_800B6B90_000009B8:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800B6BEC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_80732EF4@ha
    lis r6, lbl_807791A0@ha
    stw r0, 0x14(r1)
    li r8, 0x1
    li r7, -0x1
    addi r5, r5, lbl_80732EF4@l
    stw r31, 0xc(r1)
    addi r6, r6, lbl_807791A0@l
    li r0, 0x0
    mr r31, r3
    stw r5, 0x8(r3)
    li r4, 0x0
    li r5, 0x0
    stw r8, 0x4(r3)
    stw r7, 0xc(r3)
    stw r7, 0x10(r3)
    stw r8, 0x14(r3)
    stw r0, 0x18(r3)
    stw r6, 0x0(r3)
    addi r3, r3, 0x74
    bl fn_8004B290
    addi r3, r31, 0x268
    li r4, 0x0
    li r5, 0x0
    bl fn_8004B290
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800B6C70(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r11, r1, 0x60
    stfd f31, 0x60(r1)
    psq_st f31, 0x68(r1), 0, 0
    bl _savegpr_26
    lfs f0, 0x0(r5)
    lis r0, 0x4330
    fmr f31, f1
    stw r0, 0x8(r1)
    fmr f1, f0
    mr r26, r3
    stw r0, 0x10(r1)
    mr r27, r5
    bl fn_8068A6D8
    frsp f0, f1
    lfs f1, 0x4(r27)
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r31, 0x1c(r1)
    bl fn_8068A6D8
    frsp f0, f1
    lfs f1, 0x8(r27)
    fctiwz f0, f0
    stfd f0, 0x20(r1)
    lwz r30, 0x24(r1)
    bl fn_8068A6D8
    frsp f0, f1
    lfs f1, 0xc(r27)
    fctiwz f0, f0
    stfd f0, 0x28(r1)
    lwz r29, 0x2c(r1)
    bl fn_8068A6D8
    frsp f0, f1
    lfs f1, 0x10(r27)
    fctiwz f0, f0
    stfd f0, 0x30(r1)
    lwz r28, 0x34(r1)
    bl fn_8068A6D8
    frsp f0, f1
    lfs f1, 0x14(r27)
    fctiwz f0, f0
    stfd f0, 0x38(r1)
    lwz r27, 0x3c(r1)
    bl fn_8068A6D8
    frsp f0, f1
    cmpwi r31, 0x0
    fctiwz f0, f0
    stfd f0, 0x40(r1)
    lwz r6, 0x44(r1)
    bge lbl_fn_800B6C70_00000B78
    fctiwz f0, f31
    neg r5, r31
    stfd f0, 0x40(r1)
    lwz r3, 0x44(r1)
    divw r0, r5, r3
    mullw r0, r0, r3
    subf. r0, r0, r5
    beq lbl_fn_800B6C70_00000B6C
    stfd f0, 0x38(r1)
    lwz r4, 0x3c(r1)
    stfd f0, 0x30(r1)
    divw r3, r5, r4
    lwz r0, 0x34(r1)
    mullw r3, r3, r4
    subf r3, r3, r5
    subf r0, r3, r0
    b lbl_fn_800B6C70_00000B70
lbl_fn_800B6C70_00000B6C:
    li r0, 0x0
lbl_fn_800B6C70_00000B70:
    subf r0, r0, r31
    b lbl_fn_800B6C70_00000B94
lbl_fn_800B6C70_00000B78:
    fctiwz f0, f31
    stfd f0, 0x40(r1)
    lwz r3, 0x44(r1)
    divw r0, r31, r3
    mullw r0, r0, r3
    subf r0, r0, r31
    subf r0, r0, r31
lbl_fn_800B6C70_00000B94:
    cmpwi r30, 0x0
    bge lbl_fn_800B6C70_00000BEC
    fctiwz f0, f31
    neg r7, r30
    stfd f0, 0x40(r1)
    lwz r4, 0x44(r1)
    divw r3, r7, r4
    mullw r3, r3, r4
    subf. r3, r3, r7
    beq lbl_fn_800B6C70_00000BE0
    stfd f0, 0x38(r1)
    lwz r5, 0x3c(r1)
    stfd f0, 0x30(r1)
    divw r4, r7, r5
    lwz r3, 0x34(r1)
    mullw r4, r4, r5
    subf r4, r4, r7
    subf r3, r4, r3
    b lbl_fn_800B6C70_00000BE4
lbl_fn_800B6C70_00000BE0:
    li r3, 0x0
lbl_fn_800B6C70_00000BE4:
    subf r3, r3, r30
    b lbl_fn_800B6C70_00000C08
lbl_fn_800B6C70_00000BEC:
    fctiwz f0, f31
    stfd f0, 0x40(r1)
    lwz r4, 0x44(r1)
    divw r3, r30, r4
    mullw r3, r3, r4
    subf r3, r3, r30
    subf r3, r3, r30
lbl_fn_800B6C70_00000C08:
    cmpwi r29, 0x0
    bge lbl_fn_800B6C70_00000C60
    fctiwz f0, f31
    neg r8, r29
    stfd f0, 0x40(r1)
    lwz r5, 0x44(r1)
    divw r4, r8, r5
    mullw r4, r4, r5
    subf. r4, r4, r8
    beq lbl_fn_800B6C70_00000C54
    stfd f0, 0x38(r1)
    lwz r7, 0x3c(r1)
    stfd f0, 0x30(r1)
    divw r5, r8, r7
    lwz r4, 0x34(r1)
    mullw r5, r5, r7
    subf r5, r5, r8
    subf r4, r5, r4
    b lbl_fn_800B6C70_00000C58
lbl_fn_800B6C70_00000C54:
    li r4, 0x0
lbl_fn_800B6C70_00000C58:
    subf r4, r4, r29
    b lbl_fn_800B6C70_00000C7C
lbl_fn_800B6C70_00000C60:
    fctiwz f0, f31
    stfd f0, 0x40(r1)
    lwz r5, 0x44(r1)
    divw r4, r29, r5
    mullw r4, r4, r5
    subf r4, r4, r29
    subf r4, r4, r29
lbl_fn_800B6C70_00000C7C:
    cmpwi r28, 0x0
    bge lbl_fn_800B6C70_00000CA8
    fctiwz f0, f31
    neg r8, r28
    stfd f0, 0x40(r1)
    lwz r7, 0x44(r1)
    divw r5, r8, r7
    mullw r5, r5, r7
    subf r5, r5, r8
    add r5, r28, r5
    b lbl_fn_800B6C70_00000CF0
lbl_fn_800B6C70_00000CA8:
    fctiwz f0, f31
    stfd f0, 0x40(r1)
    lwz r7, 0x44(r1)
    divw r5, r28, r7
    mullw r5, r5, r7
    subf. r5, r5, r28
    beq lbl_fn_800B6C70_00000CE8
    stfd f0, 0x38(r1)
    lwz r8, 0x3c(r1)
    stfd f0, 0x30(r1)
    divw r7, r28, r8
    lwz r5, 0x34(r1)
    mullw r7, r7, r8
    subf r7, r7, r28
    subf r5, r7, r5
    b lbl_fn_800B6C70_00000CEC
lbl_fn_800B6C70_00000CE8:
    li r5, 0x0
lbl_fn_800B6C70_00000CEC:
    add r5, r28, r5
lbl_fn_800B6C70_00000CF0:
    cmpwi r27, 0x0
    bge lbl_fn_800B6C70_00000D1C
    fctiwz f0, f31
    neg r9, r27
    stfd f0, 0x40(r1)
    lwz r8, 0x44(r1)
    divw r7, r9, r8
    mullw r7, r7, r8
    subf r7, r7, r9
    add r10, r27, r7
    b lbl_fn_800B6C70_00000D64
lbl_fn_800B6C70_00000D1C:
    fctiwz f0, f31
    stfd f0, 0x40(r1)
    lwz r8, 0x44(r1)
    divw r7, r27, r8
    mullw r7, r7, r8
    subf. r7, r7, r27
    beq lbl_fn_800B6C70_00000D5C
    stfd f0, 0x38(r1)
    lwz r9, 0x3c(r1)
    stfd f0, 0x30(r1)
    divw r8, r27, r9
    lwz r7, 0x34(r1)
    mullw r8, r8, r9
    subf r8, r8, r27
    subf r7, r8, r7
    b lbl_fn_800B6C70_00000D60
lbl_fn_800B6C70_00000D5C:
    li r7, 0x0
lbl_fn_800B6C70_00000D60:
    add r10, r27, r7
lbl_fn_800B6C70_00000D64:
    cmpwi r6, 0x0
    bge lbl_fn_800B6C70_00000D90
    fctiwz f0, f31
    neg r9, r6
    stfd f0, 0x40(r1)
    lwz r8, 0x44(r1)
    divw r7, r9, r8
    mullw r7, r7, r8
    subf r7, r7, r9
    add r7, r6, r7
    b lbl_fn_800B6C70_00000DD8
lbl_fn_800B6C70_00000D90:
    fctiwz f0, f31
    stfd f0, 0x40(r1)
    lwz r8, 0x44(r1)
    divw r7, r6, r8
    mullw r7, r7, r8
    subf. r7, r7, r6
    beq lbl_fn_800B6C70_00000DD0
    stfd f0, 0x38(r1)
    lwz r9, 0x3c(r1)
    stfd f0, 0x30(r1)
    divw r8, r6, r9
    lwz r7, 0x34(r1)
    mullw r8, r8, r9
    subf r8, r8, r6
    subf r7, r8, r7
    b lbl_fn_800B6C70_00000DD4
lbl_fn_800B6C70_00000DD0:
    li r7, 0x0
lbl_fn_800B6C70_00000DD4:
    add r7, r6, r7
lbl_fn_800B6C70_00000DD8:
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    xoris r0, r3, 0x8000
    lis r6, lbl_80732ED0@ha
    stw r0, 0x14(r1)
    xoris r0, r4, 0x8000
    lfd f2, 0x8(r1)
    xoris r4, r5, 0x8000
    lfd f0, 0x10(r1)
    xoris r3, r10, 0x8000
    stw r0, 0xc(r1)
    xoris r0, r7, 0x8000
    lfd f6, lbl_80732ED0@l(r6)
    lfd f1, 0x8(r1)
    fsubs f4, f0, f6
    stw r4, 0x14(r1)
    fsubs f5, f2, f6
    lfd f0, 0x10(r1)
    fsubs f3, f1, f6
    stw r3, 0xc(r1)
    fsubs f2, f0, f6
    stw r0, 0x14(r1)
    lfd f1, 0x8(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f1, f6
    stfs f5, 0x0(r26)
    fsubs f0, f0, f6
    stfs f4, 0x4(r26)
    stfs f3, 0x8(r26)
    stfs f2, 0xc(r26)
    stfs f1, 0x10(r26)
    stfs f0, 0x14(r26)
    psq_l f31, 0x68(r1), 0, 0
    lfd f31, 0x60(r1)
    addi r11, r1, 0x60
    bl _restgpr_26
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}
