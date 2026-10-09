#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void fn_8000D0F8(void);
extern void fn_8000D114(void);
extern void fn_8000DD04(void);
extern void fn_80011034(void);
extern void fn_80011410(void);
extern void fn_800133B0(void);
extern void fn_80013404(void);
extern void fn_80057A68(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_80092814(void);
extern void fn_80094E2C(void);
extern void fn_8010F668(void);
extern void fn_8012A288(void);
extern void fn_80139F2C(void);
extern void fn_80139F60(void);
extern void fn_8013A13C(void);
extern void fn_8013C394(void);
extern void fn_8013C43C(void);
extern void fn_8014052C(void);
extern void fn_80144ED4(void);
extern void fn_801495E8(void);
extern void fn_80149624(void);
extern void fn_8014969C(void);
extern void fn_801496A8(void);
extern void fn_80149884(void);
extern void fn_80149888(void);
extern void fn_8014989C(void);
extern void fn_801498D8(void);
extern void fn_801498F0(void);
extern void fn_80565B9C(void);
extern void fn_805F8E70(void);
extern void fn_805F9190(void);
extern void fn_805F93C0(void);
extern void fn_80682428(void);
extern void fn_80695720(void);

/* External data declarations */
extern u8 lbl_80737A9C[];

/* Small data declarations */
extern u32 lbl_8087D9E0;
extern u32 lbl_8087D9E4;
extern u32 lbl_8087F430;
extern u32 lbl_8087F610;
extern u32 lbl_80881964;
extern u32 lbl_80881968;
extern u32 lbl_8088196C;
extern u32 lbl_808819A0;
extern u32 lbl_808819A4;
extern u32 lbl_808819A8;
extern u32 lbl_808819B0;
extern u32 lbl_808819BC;
extern u32 lbl_808819F8;
extern u32 lbl_808819FC;
extern u32 lbl_80881A00;
extern u32 lbl_80881A1C;
extern u32 lbl_80881A44;
extern u32 lbl_80881AAC;
extern u32 lbl_80881AB0;
extern u32 lbl_80881AB4;
extern u32 lbl_80881AB8;
extern u32 lbl_80881ABC;
extern u32 lbl_80881AC0;
extern u32 lbl_80881AC4;
extern u32 lbl_80881AC8;
extern u32 lbl_80881ACC;
extern u32 lbl_80881AD0;
extern u32 lbl_80881AD4;

/* Function declarations */
void fn_801479D8(void);
void fn_801479E4(void);
void fn_80147A00(void);
void fn_80147A08(void);
void fn_80147A0C(void);
void fn_80147A10(void);
void fn_80147A18(void);
void fn_80147B04(void);
void fn_80148334(void);
void fn_80148340(void);
void fn_80148990(void);
void fn_801489CC(void);
void fn_80148B0C(void);
void fn_80148B38(void);
void fn_80148CC4(void);

asm void fn_801479D8(void)
{
    nofralloc
    lwz r0, 0x12a4(r3)
    extrwi r3, r0, 1, 25
    blr
}

asm void fn_801479E4(void)
{
    nofralloc
    lfs f2, 0x0(r4)
    lfs f1, 0x4(r4)
    lfs f0, 0x8(r4)
    stfs f2, 0xc(r3)
    stfs f1, 0x1c(r3)
    stfs f0, 0x2c(r3)
    blr
}

asm void fn_80147A00(void)
{
    nofralloc
    lwz r3, 0x220(r3)
    blr
}

asm void fn_80147A08(void)
{
    nofralloc
    b fn_805F9190
}

asm void fn_80147A0C(void)
{
    nofralloc
    blr
}

asm void fn_80147A10(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_80147A18(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    stw r4, 0x13f4(r3)
    addi r3, r3, 0xb0
    bl fn_80094E2C
    lwz r3, 0x648(r28)
    cmpwi r3, 0x0
    beq lbl_fn_80147A18_000000A0
    mr r4, r29
    addi r3, r3, 0x10
    bl fn_80094E2C
    lwz r3, 0x64c(r28)
    cmpwi r3, 0x0
    beq lbl_fn_80147A18_000000A0
    mr r4, r29
    addi r3, r3, 0x10
    bl fn_80094E2C
lbl_fn_80147A18_000000A0:
    addi r31, r28, 0x680
    li r30, 0x0
lbl_fn_80147A18_000000A8:
    lwz r3, 0x0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80147A18_000000C0
    mr r4, r29
    addi r3, r3, 0x24
    bl fn_80094E2C
lbl_fn_80147A18_000000C0:
    addi r30, r30, 0x1
    addi r31, r31, 0x4
    cmplwi r30, 0x8
    blt lbl_fn_80147A18_000000A8
    mr r31, r28
    li r30, 0x0
    b lbl_fn_80147A18_00000100
lbl_fn_80147A18_000000DC:
    lwz r3, 0x6a8(r31)
    lwz r0, 0x3dc(r3)
    srawi. r0, r0, 31
    beq lbl_fn_80147A18_000000F8
    mr r4, r29
    addi r3, r3, 0x4
    bl fn_80094E2C
lbl_fn_80147A18_000000F8:
    addi r31, r31, 0x4
    addi r30, r30, 0x1
lbl_fn_80147A18_00000100:
    lwz r0, 0x6a4(r28)
    cmplw r30, r0
    blt lbl_fn_80147A18_000000DC
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80147B04(void)
{
    nofralloc
    stwu r1, -0x1f0(r1)
    mflr r0
    stw r0, 0x1f4(r1)
    stfd f31, 0x1e0(r1)
    psq_st f31, 0x1e8(r1), 0, 0
    stw r31, 0x1dc(r1)
    mr r31, r3
    stw r30, 0x1d8(r1)
    stw r29, 0x1d4(r1)
    lwz r0, 0x12a4(r3)
    lfs f0, 0x5b0(r3)
    extrwi. r0, r0, 1, 18
    stfs f0, 0x620(r3)
    beq lbl_fn_80147B04_000002F0
    lwz r0, 0x648(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80147B04_000001A8
    lwz r0, 0x12a4(r3)
    srwi. r0, r0, 31
    bne lbl_fn_80147B04_000002D4
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_80147B04_00000194
    lwz r0, 0x560(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80147B04_000002D4
lbl_fn_80147B04_00000194:
    lfs f3, 0x620(r3)
    lfs f0, lbl_808819B0
    fadds f0, f3, f0
    stfs f0, 0x620(r3)
    b lbl_fn_80147B04_000002D4
lbl_fn_80147B04_000001A8:
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80147B04_0000027C
    lwz r4, lbl_8087F430
    cmpwi r4, 0x0
    beq lbl_fn_80147B04_00000238
    lwz r0, 0x48(r4)
    cmpwi r0, 0x1
    bne lbl_fn_80147B04_000001D4
    li r0, 0x1
    b lbl_fn_80147B04_0000023C
lbl_fn_80147B04_000001D4:
    cmpwi r0, 0x2
    bne lbl_fn_80147B04_00000238
    lwz r0, 0x4c(r4)
    cmpwi r0, 0x2e
    beq lbl_fn_80147B04_00000230
    bge lbl_fn_80147B04_0000020C
    cmpwi r0, 0x1b
    beq lbl_fn_80147B04_00000230
    bge lbl_fn_80147B04_00000238
    cmpwi r0, 0x11
    bge lbl_fn_80147B04_00000238
    cmpwi r0, 0xf
    bge lbl_fn_80147B04_00000230
    b lbl_fn_80147B04_00000238
lbl_fn_80147B04_0000020C:
    cmpwi r0, 0x40
    bge lbl_fn_80147B04_00000228
    cmpwi r0, 0x3c
    bge lbl_fn_80147B04_00000238
    cmpwi r0, 0x37
    bge lbl_fn_80147B04_00000230
    b lbl_fn_80147B04_00000238
lbl_fn_80147B04_00000228:
    cmpwi r0, 0x42
    bge lbl_fn_80147B04_00000238
lbl_fn_80147B04_00000230:
    li r0, 0x1
    b lbl_fn_80147B04_0000023C
lbl_fn_80147B04_00000238:
    li r0, 0x0
lbl_fn_80147B04_0000023C:
    cmpwi r0, 0x0
    bne lbl_fn_80147B04_000002D4
    lwz r0, 0x12a4(r3)
    srwi. r0, r0, 31
    bne lbl_fn_80147B04_000002D4
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_80147B04_00000268
    lwz r0, 0x560(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80147B04_000002D4
lbl_fn_80147B04_00000268:
    lfs f3, 0x620(r3)
    lfs f0, lbl_808819B0
    fadds f0, f3, f0
    stfs f0, 0x620(r3)
    b lbl_fn_80147B04_000002D4
lbl_fn_80147B04_0000027C:
    lfs f6, lbl_808819B0
    lfs f5, 0x500(r3)
    lfs f3, 0x570(r3)
    fmuls f0, f6, f5
    fcmpo cr0, f3, f0
    ble lbl_fn_80147B04_000002D4
    lfs f0, lbl_80881AAC
    lfs f4, 0x508(r3)
    fmuls f0, f0, f5
    fcmpo cr0, f4, f0
    ble lbl_fn_80147B04_000002D4
    fnmsubs f3, f6, f5, f3
    fnmsubs f0, f6, f5, f4
    fdivs f0, f3, f0
    fmuls f0, f6, f0
    fcmpo cr0, f6, f0
    bge lbl_fn_80147B04_000002C4
    b lbl_fn_80147B04_000002C8
lbl_fn_80147B04_000002C4:
    fmr f6, f0
lbl_fn_80147B04_000002C8:
    lfs f0, 0x620(r3)
    fadds f0, f0, f6
    stfs f0, 0x620(r3)
lbl_fn_80147B04_000002D4:
    lfs f3, lbl_80881A1C
    lfs f0, 0x620(r3)
    fcmpo cr0, f3, f0
    ble lbl_fn_80147B04_000002E8
    b lbl_fn_80147B04_000002EC
lbl_fn_80147B04_000002E8:
    fmr f3, f0
lbl_fn_80147B04_000002EC:
    stfs f3, 0x620(r3)
lbl_fn_80147B04_000002F0:
    lfs f4, 0x530(r3)
    addi r4, r1, 0x80
    lfs f0, 0x5ac(r3)
    lfs f3, 0x52c(r3)
    fadds f2, f4, f0
    lfs f0, 0x5a8(r3)
    lwz r0, 0x958(r3)
    fadds f4, f3, f0
    lfs f3, 0x528(r3)
    lfs f0, 0x5a4(r3)
    rlwinm r0, r0, 0, 25, 25
    stfs f4, 0x84(r1)
    fadds f0, f3, f0
    cmplwi r0, 0x40
    stfs f2, 0x88(r1)
    stfs f0, 0x80(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x614(r3), 0, 0
    stfs f2, 0x61c(r3)
    bne lbl_fn_80147B04_00000354
    lfs f3, 0x618(r3)
    lfs f0, 0x620(r3)
    fsubs f0, f3, f0
    stfs f0, 0x618(r3)
    b lbl_fn_80147B04_00000364
lbl_fn_80147B04_00000354:
    lfs f3, 0x618(r3)
    lfs f0, 0x620(r3)
    fadds f0, f3, f0
    stfs f0, 0x618(r3)
lbl_fn_80147B04_00000364:
    lfs f3, 0x52c(r3)
    lfs f0, 0x620(r3)
    lwz r4, 0x12a4(r3)
    fadds f3, f3, f0
    lfs f4, 0x530(r3)
    lfs f0, 0x528(r3)
    srwi. r0, r4, 31
    stfs f0, 0xc8(r1)
    stfs f3, 0xcc(r1)
    stfs f4, 0xd0(r1)
    beq lbl_fn_80147B04_000004F8
    lwz r0, 0xc48(r3)
    cmpwi r0, 0x1
    beq lbl_fn_80147B04_000003B0
    cmpwi r0, 0x2
    beq lbl_fn_80147B04_00000418
    cmpwi r0, 0x3
    beq lbl_fn_80147B04_00000480
    b lbl_fn_80147B04_000004F8
lbl_fn_80147B04_000003B0:
    lfs f0, lbl_8088196C
    li r4, 0x79
    lfs f3, lbl_80881AB0
    stfs f3, 0xbc(r1)
    stfs f0, 0xc0(r1)
    stfs f0, 0xc4(r1)
    lfs f1, 0x538(r3)
    addi r3, r1, 0x198
    bl fn_805F8E70
    addi r4, r1, 0xbc
    addi r3, r1, 0x198
    mr r5, r4
    bl fn_805F93C0
    lfs f3, 0xc8(r1)
    lfs f0, 0xbc(r1)
    lfs f5, 0xcc(r1)
    fadds f6, f3, f0
    lfs f4, 0xc0(r1)
    lfs f3, 0xd0(r1)
    lfs f0, 0xc4(r1)
    fadds f4, f5, f4
    stfs f6, 0xc8(r1)
    fadds f0, f3, f0
    stfs f4, 0xcc(r1)
    stfs f0, 0xd0(r1)
    b lbl_fn_80147B04_000004F8
lbl_fn_80147B04_00000418:
    lfs f0, lbl_8088196C
    li r4, 0x79
    lfs f3, lbl_808819F8
    stfs f3, 0xb0(r1)
    stfs f0, 0xb4(r1)
    stfs f0, 0xb8(r1)
    lfs f1, 0x538(r3)
    addi r3, r1, 0x168
    bl fn_805F8E70
    addi r4, r1, 0xb0
    addi r3, r1, 0x168
    mr r5, r4
    bl fn_805F93C0
    lfs f3, 0xc8(r1)
    lfs f0, 0xb0(r1)
    lfs f5, 0xcc(r1)
    fadds f6, f3, f0
    lfs f4, 0xb4(r1)
    lfs f3, 0xd0(r1)
    lfs f0, 0xb8(r1)
    fadds f4, f5, f4
    stfs f6, 0xc8(r1)
    fadds f0, f3, f0
    stfs f4, 0xcc(r1)
    stfs f0, 0xd0(r1)
    b lbl_fn_80147B04_000004F8
lbl_fn_80147B04_00000480:
    extrwi. r0, r4, 1, 2
    beq lbl_fn_80147B04_00000490
    lfs f4, lbl_808819B0
    b lbl_fn_80147B04_00000494
lbl_fn_80147B04_00000490:
    lfs f4, lbl_80881A44
lbl_fn_80147B04_00000494:
    lfs f3, lbl_8088196C
    li r4, 0x79
    lfs f0, lbl_80881968
    stfs f4, 0xa4(r1)
    stfs f3, 0xa8(r1)
    stfs f0, 0xac(r1)
    lfs f1, 0x538(r3)
    addi r3, r1, 0x138
    bl fn_805F8E70
    addi r4, r1, 0xa4
    addi r3, r1, 0x138
    mr r5, r4
    bl fn_805F93C0
    lfs f3, 0xc8(r1)
    lfs f0, 0xa4(r1)
    lfs f5, 0xcc(r1)
    fadds f6, f3, f0
    lfs f4, 0xa8(r1)
    lfs f3, 0xd0(r1)
    lfs f0, 0xac(r1)
    fadds f4, f5, f4
    stfs f6, 0xc8(r1)
    fadds f0, f3, f0
    stfs f4, 0xcc(r1)
    stfs f0, 0xd0(r1)
lbl_fn_80147B04_000004F8:
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x6
    bne lbl_fn_80147B04_0000066C
    lwz r0, 0x560(r31)
    cmpwi r0, 0x24
    bne lbl_fn_80147B04_0000066C
    lis r4, lbl_80737A9C@ha
    addi r3, r31, 0xb0
    addi r4, r4, lbl_80737A9C@l
    li r5, 0x0
    addi r4, r4, 0x32d
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80147B04_00000538
    li r30, 0x0
    b lbl_fn_80147B04_00000544
lbl_fn_80147B04_00000538:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r30, r3, r0
lbl_fn_80147B04_00000544:
    lis r4, lbl_80737A9C@ha
    addi r3, r31, 0xb0
    addi r4, r4, lbl_80737A9C@l
    li r5, 0x0
    addi r4, r4, 0x335
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80147B04_0000056C
    li r29, 0x0
    b lbl_fn_80147B04_00000578
lbl_fn_80147B04_0000056C:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r29, r3, r0
lbl_fn_80147B04_00000578:
    lis r4, lbl_80737A9C@ha
    addi r3, r31, 0xb0
    addi r4, r4, lbl_80737A9C@l
    li r5, 0x0
    addi r4, r4, 0x60
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80147B04_000005A0
    li r5, 0x0
    b lbl_fn_80147B04_000005AC
lbl_fn_80147B04_000005A0:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r5, r3, r0
lbl_fn_80147B04_000005AC:
    cmpwi r30, 0x0
    beq lbl_fn_80147B04_00000638
    cmpwi r29, 0x0
    beq lbl_fn_80147B04_00000638
    lfs f6, 0x1c(r29)
    addi r4, r1, 0x74
    lfs f3, 0x1c(r30)
    addi r3, r1, 0xc8
    lfs f7, 0xc(r29)
    lfs f4, 0xc(r30)
    fadds f9, f3, f6
    lfs f5, 0x2c(r29)
    lfs f0, 0x2c(r30)
    fadds f10, f4, f7
    lfs f11, lbl_808819A8
    fadds f8, f0, f5
    stfs f7, 0x50(r1)
    fmuls f7, f9, f11
    stfs f6, 0x54(r1)
    fmuls f6, f10, f11
    fmuls f2, f8, f11
    stfs f7, 0x78(r1)
    stfs f6, 0x74(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f5, 0x58(r1)
    stfs f4, 0x5c(r1)
    stfs f3, 0x60(r1)
    stfs f0, 0x64(r1)
    stfs f10, 0x68(r1)
    stfs f9, 0x6c(r1)
    stfs f8, 0x70(r1)
    stfs f2, 0x7c(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0xd0(r1)
    b lbl_fn_80147B04_0000066C
lbl_fn_80147B04_00000638:
    cmpwi r5, 0x0
    beq lbl_fn_80147B04_0000066C
    lfs f0, 0x1c(r5)
    addi r4, r1, 0x44
    lfs f3, 0xc(r5)
    addi r3, r1, 0xc8
    stfs f3, 0x44(r1)
    lfs f2, 0x2c(r5)
    stfs f0, 0x48(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0x4c(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0xd0(r1)
lbl_fn_80147B04_0000066C:
    lwz r0, 0x520(r31)
    lfs f31, 0x620(r31)
    cmpwi r0, 0x0
    blt lbl_fn_80147B04_0000080C
    bge lbl_fn_80147B04_00000688
    li r5, 0x0
    b lbl_fn_80147B04_00000694
lbl_fn_80147B04_00000688:
    mulli r0, r0, 0x30
    lwz r3, 0xec(r31)
    add r5, r3, r0
lbl_fn_80147B04_00000694:
    lfs f0, 0x1c(r5)
    addi r4, r1, 0x38
    lfs f3, 0xc(r5)
    addi r3, r1, 0x98
    stfs f3, 0x38(r1)
    lfs f2, 0x2c(r5)
    stfs f0, 0x3c(r1)
    lwz r0, 0x48(r31)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    cmpwi r0, 0x0
    lfs f5, lbl_80881964
    lfs f0, 0x9c(r1)
    stfs f2, 0x40(r1)
    fsubs f0, f0, f5
    stfs f2, 0xa0(r1)
    stfs f0, 0x9c(r1)
    bne lbl_fn_80147B04_0000083C
    lwz r0, 0x12a4(r31)
    srwi. r0, r0, 31
    beq lbl_fn_80147B04_0000083C
    lwz r0, 0xc48(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80147B04_0000083C
    lfs f0, lbl_8088196C
    addi r3, r1, 0x108
    lfs f3, lbl_808819A8
    li r4, 0x79
    lfs f4, 0xc8(r1)
    stfs f0, 0x20(r1)
    fsubs f31, f31, f3
    stfs f0, 0x24(r1)
    lfs f0, 0xd0(r1)
    stfs f5, 0x28(r1)
    lfs f1, 0x538(r31)
    stfs f4, 0x98(r1)
    stfs f0, 0xa0(r1)
    bl fn_805F8E70
    addi r4, r1, 0x20
    addi r3, r1, 0x108
    mr r5, r4
    bl fn_805F93C0
    lfs f0, 0x28(r1)
    addi r3, r1, 0xd8
    lfs f6, lbl_808819B0
    li r4, 0x79
    lfs f5, 0x24(r1)
    fmuls f7, f0, f6
    lfs f4, 0x20(r1)
    fmuls f8, f5, f6
    lfs f3, lbl_8088196C
    fmuls f9, f4, f6
    lfs f6, 0xc8(r1)
    lfs f5, 0xcc(r1)
    lfs f4, 0xd0(r1)
    fadds f6, f6, f9
    lfs f0, lbl_80881964
    fadds f5, f5, f8
    fadds f4, f4, f7
    stfs f3, 0x8(r1)
    stfs f3, 0xc(r1)
    stfs f0, 0x10(r1)
    lfs f1, 0x538(r31)
    stfs f9, 0x2c(r1)
    stfs f8, 0x30(r1)
    stfs f7, 0x34(r1)
    stfs f6, 0xc8(r1)
    stfs f5, 0xcc(r1)
    stfs f4, 0xd0(r1)
    bl fn_805F8E70
    addi r4, r1, 0x8
    addi r3, r1, 0xd8
    mr r5, r4
    bl fn_805F93C0
    lfs f5, 0x10(r1)
    lfs f4, lbl_808819B0
    lfs f3, 0xc(r1)
    lfs f0, 0x8(r1)
    fmuls f5, f5, f4
    fmuls f6, f3, f4
    lfs f3, 0x9c(r1)
    fmuls f7, f0, f4
    lfs f4, 0x98(r1)
    lfs f0, 0xa0(r1)
    fadds f3, f3, f6
    fadds f4, f4, f7
    stfs f7, 0x14(r1)
    fadds f0, f0, f5
    stfs f6, 0x18(r1)
    stfs f5, 0x1c(r1)
    stfs f4, 0x98(r1)
    stfs f3, 0x9c(r1)
    stfs f0, 0xa0(r1)
    b lbl_fn_80147B04_0000083C
lbl_fn_80147B04_0000080C:
    addi r4, r1, 0xc8
    lfs f2, 0xd0(r1)
    addi r3, r1, 0x98
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lfs f4, lbl_808819B0
    lfs f3, 0x5b4(r31)
    lfs f0, 0x9c(r1)
    fnmsubs f3, f4, f31, f3
    stfs f2, 0xa0(r1)
    fadds f0, f0, f3
    stfs f0, 0x9c(r1)
lbl_fn_80147B04_0000083C:
    lwz r0, 0x137c(r31)
    rlwinm r0, r0, 0, 17, 17
    cmplwi r0, 0x4000
    bne lbl_fn_80147B04_000008A0
    lis r4, lbl_80737A9C@ha
    addi r3, r31, 0xb0
    addi r4, r4, lbl_80737A9C@l
    li r5, 0x0
    addi r4, r4, 0x60
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80147B04_00000874
    li r3, 0x0
    b lbl_fn_80147B04_00000880
lbl_fn_80147B04_00000874:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r3, r3, r0
lbl_fn_80147B04_00000880:
    lfs f0, 0x2c(r3)
    lfs f4, 0xc(r3)
    lfs f3, 0x1c(r3)
    stfs f4, 0x8c(r1)
    stfs f3, 0x90(r1)
    stfs f0, 0x94(r1)
    stfs f4, 0xc8(r1)
    stfs f0, 0xd0(r1)
lbl_fn_80147B04_000008A0:
    lwz r0, 0x48(r31)
    cmpwi r0, 0x2
    bne lbl_fn_80147B04_000008F4
    lwz r3, lbl_8087F610
    li r0, 0x0
    cmpwi r3, 0x0
    beq lbl_fn_80147B04_000008CC
    lwz r3, 0x540(r3)
    cmpwi r3, 0x2
    bne lbl_fn_80147B04_000008CC
    li r0, 0x1
lbl_fn_80147B04_000008CC:
    cmpwi r0, 0x0
    beq lbl_fn_80147B04_000008F4
    lwz r0, 0x12a4(r31)
    extrwi. r3, r0, 1, 29
    beq lbl_fn_80147B04_000008F4
    extrwi r0, r0, 1, 9
    cmplwi r0, 0x1
    beq lbl_fn_80147B04_000008F4
    lfs f0, lbl_80881964
    fadds f31, f31, f0
lbl_fn_80147B04_000008F4:
    lwz r0, 0x12a4(r31)
    addi r3, r1, 0xc8
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x98
    lfs f2, 0xd0(r1)
    extrwi. r0, r0, 1, 19
    psq_st f1, 0x5f4(r31), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x5fc(r31)
    lfs f2, 0xa0(r1)
    psq_st f1, 0x600(r31), 0, 0
    stfs f2, 0x608(r31)
    stfs f31, 0x60c(r31)
    beq lbl_fn_80147B04_00000938
    lwz r0, 0x5c0(r31)
    clrrwi r0, r0, 1
    stw r0, 0x5c0(r31)
lbl_fn_80147B04_00000938:
    lwz r0, 0x1f4(r1)
    psq_l f31, 0x1e8(r1), 0, 0
    lfd f31, 0x1e0(r1)
    lwz r31, 0x1dc(r1)
    lwz r30, 0x1d8(r1)
    lwz r29, 0x1d4(r1)
    mtlr r0
    addi r1, r1, 0x1f0
    blr
}

asm void fn_80148334(void)
{
    nofralloc
    lwz r0, 0x12a4(r3)
    extrwi r3, r0, 1, 29
    blr
}

asm void fn_80148340(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    li r0, 0x0
    stw r31, 0x4c(r1)
    mr r31, r3
    stw r30, 0x48(r1)
    stw r29, 0x44(r1)
    lwz r4, 0x62c(r3)
    stw r0, 0x624(r3)
    cmpwi r4, 0x0
    stw r0, 0x628(r3)
    beq lbl_fn_80148340_000009B0
    beq lbl_fn_80148340_000009A8
    subi r3, r4, 0x10
    bl fn_80084C24
lbl_fn_80148340_000009A8:
    li r0, 0x0
    stw r0, 0x62c(r31)
lbl_fn_80148340_000009B0:
    lwz r0, 0x628(r31)
    li r30, 0x1
    cmplwi r0, 0x1
    bgt lbl_fn_80148340_00000B4C
    li r3, 0x24
    li r4, 0x3
    la r5, lbl_8087D9E4
    la r6, lbl_8087D9E0
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_80148990@ha
    li r5, 0x0
    addi r4, r4, fn_80148990@l
    li r6, 0x14
    li r7, 0x1
    bl fn_80695720
    lwz r0, 0x62c(r31)
    mr r29, r3
    cmpwi r0, 0x0
    beq lbl_fn_80148340_00000B44
    lwz r0, 0x624(r31)
    li r5, 0x1
    cmplwi r0, 0x1
    bge lbl_fn_80148340_00000A14
    mr r5, r0
lbl_fn_80148340_00000A14:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_80148340_00000B30
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_80148340_00000AF8
lbl_fn_80148340_00000A2C:
    lwz r0, 0x62c(r31)
    add r7, r3, r4
    add r6, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r6)
    psq_l f1, 0x4(r6), 0, 0
    psq_st f1, 0x4(r7), 0, 0
    stfs f2, 0xc(r7)
    lfs f0, 0x10(r6)
    stfs f0, 0x10(r7)
    add r7, r3, r4
    lwz r0, 0x62c(r31)
    add r6, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r6)
    psq_l f1, 0x4(r6), 0, 0
    psq_st f1, 0x4(r7), 0, 0
    stfs f2, 0xc(r7)
    lfs f0, 0x10(r6)
    stfs f0, 0x10(r7)
    add r7, r3, r4
    lwz r0, 0x62c(r31)
    add r6, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r6)
    psq_l f1, 0x4(r6), 0, 0
    psq_st f1, 0x4(r7), 0, 0
    stfs f2, 0xc(r7)
    lfs f0, 0x10(r6)
    stfs f0, 0x10(r7)
    add r7, r3, r4
    lwz r0, 0x62c(r31)
    add r6, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r6)
    psq_l f1, 0x4(r6), 0, 0
    psq_st f1, 0x4(r7), 0, 0
    stfs f2, 0xc(r7)
    lfs f0, 0x10(r6)
    stfs f0, 0x10(r7)
    bdnz lbl_fn_80148340_00000A2C
    andi. r5, r5, 0x3
    beq lbl_fn_80148340_00000B30
lbl_fn_80148340_00000AF8:
    mtctr r5
lbl_fn_80148340_00000AFC:
    lwz r0, 0x62c(r31)
    add r7, r3, r4
    add r6, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r6)
    psq_l f1, 0x4(r6), 0, 0
    psq_st f1, 0x4(r7), 0, 0
    stfs f2, 0xc(r7)
    lfs f0, 0x10(r6)
    stfs f0, 0x10(r7)
    bdnz lbl_fn_80148340_00000AFC
lbl_fn_80148340_00000B30:
    lwz r3, 0x62c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80148340_00000B44
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80148340_00000B44:
    stw r29, 0x62c(r31)
    stw r30, 0x628(r31)
lbl_fn_80148340_00000B4C:
    lfs f3, 0x530(r31)
    li r0, 0x0
    lfs f0, 0x5ac(r31)
    addi r3, r1, 0x8
    lfs f5, lbl_8088196C
    addi r4, r1, 0x24
    fadds f6, f3, f0
    lfs f3, 0x52c(r31)
    lfs f0, 0x5a8(r31)
    fmr f2, f5
    lwz r5, 0x958(r31)
    fadds f7, f3, f0
    lfs f3, 0x528(r31)
    rlwinm r6, r5, 0, 25, 25
    lfs f0, 0x5a4(r31)
    addi r5, r1, 0x14
    stfs f2, 0x2c(r1)
    fadds f0, f3, f0
    lfs f4, 0x5b0(r31)
    fmr f2, f6
    stfs f5, 0x8(r1)
    cmplwi r6, 0x40
    stfs f5, 0xc(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f0, 0x14(r1)
    stfs f7, 0x18(r1)
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    stw r0, 0x20(r1)
    stfs f5, 0x10(r1)
    stfs f4, 0x30(r1)
    stfs f6, 0x1c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x2c(r1)
    bne lbl_fn_80148340_00000BE8
    lfs f0, 0x28(r1)
    fsubs f0, f0, f4
    stfs f0, 0x28(r1)
    b lbl_fn_80148340_00000BF4
lbl_fn_80148340_00000BE8:
    lfs f0, 0x28(r1)
    fadds f0, f0, f4
    stfs f0, 0x28(r1)
lbl_fn_80148340_00000BF4:
    lwz r0, 0x62c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80148340_00000C0C
    lwz r0, 0x628(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80148340_00000DAC
lbl_fn_80148340_00000C0C:
    lwz r0, 0x628(r31)
    li r30, 0x8
    cmplwi r0, 0x8
    bgt lbl_fn_80148340_00000F54
    li r3, 0xb0
    li r4, 0x0
    la r5, lbl_8087D9E4
    la r6, lbl_8087D9E0
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_80148990@ha
    li r5, 0x0
    addi r4, r4, fn_80148990@l
    li r6, 0x14
    li r7, 0x8
    bl fn_80695720
    lwz r0, 0x62c(r31)
    mr r29, r3
    cmpwi r0, 0x0
    beq lbl_fn_80148340_00000DA0
    lwz r0, 0x624(r31)
    li r5, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_80148340_00000C70
    mr r5, r0
lbl_fn_80148340_00000C70:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_80148340_00000D8C
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_80148340_00000D54
lbl_fn_80148340_00000C88:
    lwz r0, 0x62c(r31)
    add r6, r3, r4
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r31)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r31)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r31)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    bdnz lbl_fn_80148340_00000C88
    andi. r5, r5, 0x3
    beq lbl_fn_80148340_00000D8C
lbl_fn_80148340_00000D54:
    mtctr r5
lbl_fn_80148340_00000D58:
    lwz r0, 0x62c(r31)
    add r6, r3, r4
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    bdnz lbl_fn_80148340_00000D58
lbl_fn_80148340_00000D8C:
    lwz r3, 0x62c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80148340_00000DA0
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80148340_00000DA0:
    stw r29, 0x62c(r31)
    stw r30, 0x628(r31)
    b lbl_fn_80148340_00000F54
lbl_fn_80148340_00000DAC:
    lwz r3, 0x624(r31)
    cmplw r3, r0
    blt lbl_fn_80148340_00000F54
    slwi r30, r3, 1
    cmplw r0, r30
    bgt lbl_fn_80148340_00000F54
    mulli r3, r30, 0x14
    li r4, 0x0
    la r5, lbl_8087D9E4
    la r6, lbl_8087D9E0
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_80148990@ha
    mr r7, r30
    addi r4, r4, fn_80148990@l
    li r5, 0x0
    li r6, 0x14
    bl fn_80695720
    lwz r0, 0x62c(r31)
    mr r29, r3
    cmpwi r0, 0x0
    beq lbl_fn_80148340_00000F4C
    lwz r0, 0x624(r31)
    mr r5, r30
    cmplw r30, r0
    ble lbl_fn_80148340_00000E1C
    mr r5, r0
lbl_fn_80148340_00000E1C:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_80148340_00000F38
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_80148340_00000F00
lbl_fn_80148340_00000E34:
    lwz r0, 0x62c(r31)
    add r6, r3, r4
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r31)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r31)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r31)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    bdnz lbl_fn_80148340_00000E34
    andi. r5, r5, 0x3
    beq lbl_fn_80148340_00000F38
lbl_fn_80148340_00000F00:
    mtctr r5
lbl_fn_80148340_00000F04:
    lwz r0, 0x62c(r31)
    add r6, r3, r4
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    bdnz lbl_fn_80148340_00000F04
lbl_fn_80148340_00000F38:
    lwz r3, 0x62c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80148340_00000F4C
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80148340_00000F4C:
    stw r29, 0x62c(r31)
    stw r30, 0x628(r31)
lbl_fn_80148340_00000F54:
    lwz r0, 0x624(r31)
    addi r5, r1, 0x24
    lwz r4, 0x62c(r31)
    mulli r3, r0, 0x14
    lwz r0, 0x20(r1)
    stwux r0, r3, r4
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x4(r3), 0, 0
    lfs f2, 0x2c(r1)
    stfs f2, 0xc(r3)
    lfs f0, 0x30(r1)
    stfs f0, 0x10(r3)
    lwz r3, 0x624(r31)
    lwz r0, 0x12a8(r31)
    addi r3, r3, 0x1
    stw r3, 0x624(r31)
    oris r0, r0, 0x2000
    stw r0, 0x12a8(r31)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80148990(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    li r0, 0x0
    lfs f2, lbl_8088196C
    stfs f2, 0x8(r1)
    addi r4, r1, 0x8
    lfs f0, lbl_808819F8
    stfs f2, 0xc(r1)
    psq_l f1, 0x0(r4), 0, 0
    stw r0, 0x0(r3)
    stfs f2, 0x10(r1)
    psq_st f1, 0x4(r3), 0, 0
    stfs f2, 0xc(r3)
    stfs f0, 0x10(r3)
    addi r1, r1, 0x20
    blr
}

asm void fn_801489CC(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    lwz r0, 0x624(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801489CC_00001120
    lwz r5, 0x62c(r3)
    addi r4, r1, 0x14
    lfs f0, 0x5b0(r3)
    stfs f0, 0x10(r5)
    lfs f5, 0x52c(r3)
    lfs f4, 0x5a8(r3)
    lfs f3, 0x528(r3)
    fadds f5, f5, f4
    lfs f0, 0x5a4(r3)
    lfs f4, 0x530(r3)
    fadds f3, f3, f0
    lfs f0, 0x5ac(r3)
    stfs f5, 0x18(r1)
    fadds f2, f4, f0
    lwz r5, 0x62c(r3)
    stfs f3, 0x14(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x4(r5), 0, 0
    stfs f2, 0xc(r5)
    lwz r0, 0x958(r3)
    stfs f2, 0x1c(r1)
    rlwinm r0, r0, 0, 25, 25
    cmplwi r0, 0x40
    bne lbl_fn_801489CC_0000108C
    lwz r4, 0x62c(r3)
    lfs f3, 0x8(r4)
    lfs f0, 0x10(r4)
    fsubs f0, f3, f0
    stfs f0, 0x8(r4)
    b lbl_fn_801489CC_000010A0
lbl_fn_801489CC_0000108C:
    lwz r4, 0x62c(r3)
    lfs f3, 0x8(r4)
    lfs f0, 0x10(r4)
    fadds f0, f3, f0
    stfs f0, 0x8(r4)
lbl_fn_801489CC_000010A0:
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_801489CC_00001120
    lwz r0, 0x560(r3)
    cmpwi r0, 0x24
    bne lbl_fn_801489CC_00001120
    lis r4, lbl_80737A9C@ha
    li r5, 0x0
    addi r4, r4, lbl_80737A9C@l
    addi r3, r3, 0xb0
    addi r4, r4, 0x60
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_801489CC_000010E0
    li r4, 0x0
    b lbl_fn_801489CC_000010EC
lbl_fn_801489CC_000010E0:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r4, r3, r0
lbl_fn_801489CC_000010EC:
    cmpwi r4, 0x0
    beq lbl_fn_801489CC_00001120
    lfs f0, 0x1c(r4)
    addi r3, r1, 0x8
    lfs f3, 0xc(r4)
    lfs f2, 0x2c(r4)
    stfs f3, 0x8(r1)
    lwz r4, 0x62c(r31)
    stfs f0, 0xc(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x4(r4), 0, 0
    stfs f2, 0x10(r1)
    stfs f2, 0xc(r4)
lbl_fn_801489CC_00001120:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80148B0C(void)
{
    nofralloc
    cmpwi r4, 0x0
    blt lbl_fn_80148B0C_00001158
    lwz r0, 0x624(r3)
    cmpw r4, r0
    bge lbl_fn_80148B0C_00001158
    mulli r0, r4, 0x14
    lwz r3, 0x62c(r3)
    add r3, r3, r0
    blr
lbl_fn_80148B0C_00001158:
    li r3, 0x0
    blr
}

asm void fn_80148B38(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    lwz r4, 0x648(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80148B38_00001268
    lwz r0, 0x4(r4)
    cmpwi r0, 0x1
    bne lbl_fn_80148B38_000011F0
    lwz r0, 0x2dc(r3)
    lis r4, lbl_80737A9C@ha
    addi r4, r4, lbl_80737A9C@l
    cmpwi r0, 0x26
    addi r4, r4, 0x34f
    beq lbl_fn_80148B38_000011B4
    cmpwi r0, 0x17e
    bne lbl_fn_80148B38_000011C0
lbl_fn_80148B38_000011B4:
    lis r4, lbl_80737A9C@ha
    addi r4, r4, lbl_80737A9C@l
    addi r4, r4, 0x35c
lbl_fn_80148B38_000011C0:
    li r5, 0x0
    addi r3, r3, 0xb0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80148B38_000011DC
    li r0, 0x0
    b lbl_fn_80148B38_000011E8
lbl_fn_80148B38_000011DC:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r0, r3, r0
lbl_fn_80148B38_000011E8:
    lwz r3, 0x648(r31)
    stw r0, 0x224(r3)
lbl_fn_80148B38_000011F0:
    lwz r3, 0x648(r31)
    lfs f0, 0xf0(r31)
    stfs f0, 0x50(r3)
    lfs f0, 0xf4(r31)
    stfs f0, 0x54(r3)
    lfs f0, 0xf8(r31)
    stfs f0, 0x58(r3)
    lfs f0, 0xfc(r31)
    stfs f0, 0x5c(r3)
    lwz r3, 0x648(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    lwz r3, 0x64c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80148B38_00001268
    lfs f0, 0xf0(r31)
    stfs f0, 0x50(r3)
    lfs f0, 0xf4(r31)
    stfs f0, 0x54(r3)
    lfs f0, 0xf8(r31)
    stfs f0, 0x58(r3)
    lfs f0, 0xfc(r31)
    stfs f0, 0x5c(r3)
    lwz r3, 0x64c(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
lbl_fn_80148B38_00001268:
    addi r30, r31, 0x680
    li r29, 0x0
lbl_fn_80148B38_00001270:
    lwz r3, 0x0(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80148B38_00001280
    bl fn_80565B9C
lbl_fn_80148B38_00001280:
    addi r29, r29, 0x1
    addi r30, r30, 0x4
    cmplwi r29, 0x8
    blt lbl_fn_80148B38_00001270
    mr r30, r31
    li r29, 0x0
    b lbl_fn_80148B38_000012C4
lbl_fn_80148B38_0000129C:
    lwz r3, 0x6a8(r30)
    lwz r0, 0x3dc(r3)
    srawi. r0, r0, 31
    beq lbl_fn_80148B38_000012BC
    lwz r12, 0x0(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80148B38_000012BC:
    addi r30, r30, 0x4
    addi r29, r29, 0x1
lbl_fn_80148B38_000012C4:
    lwz r0, 0x6a4(r31)
    cmplw r29, r0
    blt lbl_fn_80148B38_0000129C
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80148CC4(void)
{
    nofralloc
    stwu r1, -0x2f0(r1)
    mflr r0
    stw r0, 0x2f4(r1)
    addi r11, r1, 0x2d0
    stfd f31, 0x2e0(r1)
    psq_st f31, 0x2e8(r1), 0, 0
    stfd f30, 0x2d0(r1)
    psq_st f30, 0x2d8(r1), 0, 0
    bl _savegpr_27
    lwz r12, 0x0(r3)
    mr r30, r3
    mr r31, r4
    mr r27, r5
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_80148CC4_00001BE8
    mr r4, r31
    mr r5, r27
    addi r3, r30, 0x10d8
    bl fn_8012A288
    cmpwi r3, 0x0
    bne lbl_fn_80148CC4_00001BE8
    lwz r28, 0x10(r27)
    lis r29, lbl_80737A9C@ha
    addi r29, r29, lbl_80737A9C@l
    mr r3, r28
    addi r4, r29, 0x5b
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80148CC4_0000149C
    lwz r3, 0x648(r30)
    cmpwi r3, 0x0
    bne lbl_fn_80148CC4_000013C0
    mr r4, r31
    addi r3, r1, 0x184
    bl fn_8000D0F8
    mr r3, r31
    bl fn_8010F668
    lfs f2, lbl_808819FC
    addi r3, r1, 0x280
    lfs f1, 0x584(r30)
    lfs f0, 0x580(r30)
    fnmsubs f1, f2, f1, f0
    bl fn_8013A13C
    mr r3, r31
    addi r4, r1, 0x280
    bl fn_801495E8
    mr r3, r31
    addi r4, r1, 0x184
    bl fn_801479E4
    b lbl_fn_80148CC4_00001BE8
lbl_fn_80148CC4_000013C0:
    beq lbl_fn_80148CC4_00001BE8
    bl fn_8013C43C
    cmpwi r3, 0x1
    bne lbl_fn_80148CC4_00001BE8
    lwz r0, 0x12a4(r30)
    srwi. r0, r0, 31
    beq lbl_fn_80148CC4_000013E8
    lwz r0, 0xc48(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80148CC4_000013F8
lbl_fn_80148CC4_000013E8:
    mr r3, r30
    bl fn_801479D8
    cmpwi r3, 0x0
    beq lbl_fn_80148CC4_00001BE8
lbl_fn_80148CC4_000013F8:
    addi r3, r1, 0x178
    addi r4, r30, 0xfa4
    bl fn_80011034
    mr r4, r31
    addi r3, r1, 0x16c
    bl fn_8000D0F8
    lfs f1, lbl_8088196C
    addi r3, r1, 0x68
    lfs f2, lbl_80881964
    fmr f3, f1
    bl fn_8000D114
    mr r28, r3
    mr r4, r30
    addi r3, r1, 0x74
    bl fn_8014052C
    mr r5, r28
    addi r3, r1, 0x160
    addi r4, r1, 0x74
    bl fn_8013C394
    lfs f0, 0x178(r1)
    lfs f1, lbl_808819A0
    fneg f2, f0
    lfs f0, lbl_80881AB4
    fmuls f31, f1, f2
    fcmpo cr0, f31, f0
    ble lbl_fn_80148CC4_00001468
    fmr f31, f0
    b lbl_fn_80148CC4_00001478
lbl_fn_80148CC4_00001468:
    lfs f0, lbl_80881AB8
    fcmpo cr0, f31, f0
    bge lbl_fn_80148CC4_00001478
    fmr f31, f0
lbl_fn_80148CC4_00001478:
    mr r3, r31
    bl fn_8010F668
    fmr f1, f31
    mr r3, r31
    bl fn_80149624
    mr r3, r31
    addi r4, r1, 0x16c
    bl fn_801479E4
    b lbl_fn_80148CC4_00001BE8
lbl_fn_80148CC4_0000149C:
    mr r3, r28
    addi r4, r29, 0x6c
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80148CC4_000015A8
    lwz r3, 0x12a4(r30)
    srwi. r0, r3, 31
    beq lbl_fn_80148CC4_0000154C
    lwz r0, 0xc48(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80148CC4_00001BE8
    addi r3, r1, 0x154
    addi r4, r30, 0xfa4
    bl fn_80011034
    lfs f1, 0x158(r1)
    lfs f0, 0x538(r30)
    fsubs f1, f1, f0
    bl fn_800133B0
    fmr f31, f1
    bl fn_80013404
    lfs f2, lbl_80881ABC
    fcmpo cr0, f1, f2
    ble lbl_fn_80148CC4_00001510
    lfs f0, lbl_8088196C
    fcmpo cr0, f31, f0
    ble lbl_fn_80148CC4_00001508
    b lbl_fn_80148CC4_0000150C
lbl_fn_80148CC4_00001508:
    lfs f2, lbl_80881AC0
lbl_fn_80148CC4_0000150C:
    fmr f31, f2
lbl_fn_80148CC4_00001510:
    mr r4, r31
    addi r3, r1, 0x148
    bl fn_8000D0F8
    mr r3, r31
    bl fn_8010F668
    fmr f1, f31
    addi r3, r1, 0x250
    bl fn_8013A13C
    mr r3, r31
    addi r4, r1, 0x250
    bl fn_801495E8
    mr r3, r31
    addi r4, r1, 0x148
    bl fn_801479E4
    b lbl_fn_80148CC4_00001BE8
lbl_fn_80148CC4_0000154C:
    lwz r0, 0x648(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80148CC4_00001BE8
    extrwi. r0, r3, 1, 25
    bne lbl_fn_80148CC4_00001BE8
    mr r4, r31
    addi r3, r1, 0x13c
    bl fn_8000D0F8
    mr r3, r31
    bl fn_8010F668
    lfs f2, lbl_808819BC
    addi r3, r1, 0x220
    lfs f1, 0x580(r30)
    lfs f0, 0x584(r30)
    fmadds f1, f2, f1, f0
    bl fn_8013A13C
    mr r3, r31
    addi r4, r1, 0x220
    bl fn_801495E8
    mr r3, r31
    addi r4, r1, 0x13c
    bl fn_801479E4
    b lbl_fn_80148CC4_00001BE8
lbl_fn_80148CC4_000015A8:
    mr r3, r28
    addi r4, r29, 0x60
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80148CC4_000016D8
    lwz r0, 0x12a4(r30)
    srwi. r0, r0, 31
    beq lbl_fn_80148CC4_00001658
    lwz r0, 0xc48(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80148CC4_00001BE8
    addi r3, r1, 0x130
    addi r4, r30, 0xfa4
    bl fn_80011034
    lfs f1, 0x134(r1)
    lfs f0, 0x538(r30)
    fsubs f1, f1, f0
    bl fn_800133B0
    fmr f31, f1
    bl fn_80013404
    lfs f2, lbl_80881ABC
    fcmpo cr0, f1, f2
    ble lbl_fn_80148CC4_00001BE8
    lfs f0, lbl_8088196C
    fcmpo cr0, f31, f0
    ble lbl_fn_80148CC4_00001618
    fsubs f31, f31, f2
    b lbl_fn_80148CC4_0000161C
lbl_fn_80148CC4_00001618:
    fadds f31, f2, f31
lbl_fn_80148CC4_0000161C:
    mr r4, r31
    addi r3, r1, 0x124
    bl fn_8000D0F8
    mr r3, r31
    bl fn_8010F668
    fmr f1, f31
    addi r3, r1, 0x1f0
    bl fn_8013A13C
    mr r3, r31
    addi r4, r1, 0x1f0
    bl fn_801495E8
    mr r3, r31
    addi r4, r1, 0x124
    bl fn_801479E4
    b lbl_fn_80148CC4_00001BE8
lbl_fn_80148CC4_00001658:
    mr r3, r30
    bl fn_801479D8
    cmpwi r3, 0x0
    beq lbl_fn_80148CC4_00001BE8
    lwz r3, 0x50(r30)
    subis r0, r3, 0xa
    cmplwi r0, 0xae77
    bne lbl_fn_80148CC4_00001BE8
    addi r3, r1, 0x118
    addi r4, r30, 0xfa4
    bl fn_80011034
    mr r4, r31
    addi r3, r1, 0x10c
    bl fn_8000D0F8
    lfs f1, 0x118(r1)
    lfs f0, lbl_80881AC4
    fcmpo cr0, f1, f0
    ble lbl_fn_80148CC4_000016A4
    b lbl_fn_80148CC4_000016AC
lbl_fn_80148CC4_000016A4:
    lfs f0, lbl_80881AC8
    fcmpo cr0, f1, f0
lbl_fn_80148CC4_000016AC:
    mr r3, r31
    bl fn_8010F668
    lfs f1, lbl_808819A8
    mr r3, r31
    lfs f0, 0x118(r1)
    fmuls f1, f1, f0
    bl fn_80144ED4
    mr r3, r31
    addi r4, r1, 0x10c
    bl fn_801479E4
    b lbl_fn_80148CC4_00001BE8
lbl_fn_80148CC4_000016D8:
    mr r3, r28
    addi r4, r29, 0x72
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_80148CC4_00001700
    mr r3, r28
    addi r4, r29, 0x80
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80148CC4_000019B0
lbl_fn_80148CC4_00001700:
    lwz r3, 0x648(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80148CC4_00001BE8
    bl fn_8013C43C
    cmpwi r3, 0x1
    bne lbl_fn_80148CC4_00001BE8
    lwz r0, 0x12a4(r30)
    srwi. r0, r0, 31
    beq lbl_fn_80148CC4_00001800
    lwz r0, 0xc48(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80148CC4_00001800
    addi r3, r1, 0x100
    addi r4, r30, 0xfa4
    bl fn_80011034
    mr r4, r31
    addi r3, r1, 0xf4
    bl fn_8000D0F8
    lfs f31, 0x100(r1)
    lfs f0, lbl_80881AC4
    fcmpo cr0, f31, f0
    ble lbl_fn_80148CC4_00001760
    fmr f31, f0
    b lbl_fn_80148CC4_00001770
lbl_fn_80148CC4_00001760:
    lfs f0, lbl_80881AB8
    fcmpo cr0, f31, f0
    bge lbl_fn_80148CC4_00001770
    fmr f31, f0
lbl_fn_80148CC4_00001770:
    lis r4, lbl_80737A9C@ha
    lfs f30, lbl_8088196C
    addi r4, r4, lbl_80737A9C@l
    lwz r3, 0x10(r27)
    addi r4, r4, 0x80
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80148CC4_000017D4
    lfs f0, lbl_8088196C
    fcmpo cr0, f31, f0
    bge lbl_fn_80148CC4_000017D4
    mr r3, r30
    bl fn_8014969C
    cmpwi r3, 0x0
    bne lbl_fn_80148CC4_000017D4
    lwz r0, 0xc48(r30)
    cmpwi r0, 0x1
    bne lbl_fn_80148CC4_000017CC
    lfs f1, lbl_808819A4
    lfs f0, lbl_80881ACC
    fmuls f30, f1, f31
    fmuls f31, f31, f0
    b lbl_fn_80148CC4_000017D4
lbl_fn_80148CC4_000017CC:
    lfs f0, lbl_808819A8
    fmuls f30, f0, f31
lbl_fn_80148CC4_000017D4:
    mr r3, r31
    bl fn_8010F668
    fmr f1, f31
    lfs f3, lbl_8088196C
    fmr f2, f30
    mr r3, r31
    bl fn_801496A8
    mr r3, r31
    addi r4, r1, 0xf4
    bl fn_801479E4
    b lbl_fn_80148CC4_00001BE8
lbl_fn_80148CC4_00001800:
    mr r3, r30
    bl fn_801479D8
    cmpwi r3, 0x0
    beq lbl_fn_80148CC4_00001BE8
    lwz r3, 0x50(r30)
    subis r0, r3, 0xa
    cmplwi r0, 0xae76
    beq lbl_fn_80148CC4_00001BE8
    cmplwi r0, 0xae77
    beq lbl_fn_80148CC4_00001BE8
    addi r3, r30, 0xb0
    li r4, 0x0
    bl fn_80139F2C
    cmpwi r3, 0x26
    beq lbl_fn_80148CC4_00001850
    addi r3, r30, 0xb0
    li r4, 0x0
    bl fn_80139F2C
    cmpwi r3, 0x17e
    bne lbl_fn_80148CC4_000018E8
lbl_fn_80148CC4_00001850:
    lis r4, lbl_80737A9C@ha
    lwz r3, 0x10(r27)
    addi r4, r4, lbl_80737A9C@l
    addi r4, r4, 0x80
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80148CC4_00001BE8
    addi r3, r1, 0xe8
    addi r4, r30, 0xfa4
    bl fn_80011034
    mr r4, r31
    addi r3, r1, 0xdc
    bl fn_8000D0F8
    lfs f30, 0xe8(r1)
    lfs f0, lbl_80881AC4
    fcmpo cr0, f30, f0
    ble lbl_fn_80148CC4_0000189C
    fmr f30, f0
    b lbl_fn_80148CC4_000018AC
lbl_fn_80148CC4_0000189C:
    lfs f0, lbl_80881AC8
    fcmpo cr0, f30, f0
    bge lbl_fn_80148CC4_000018AC
    fmr f30, f0
lbl_fn_80148CC4_000018AC:
    mr r3, r31
    bl fn_8010F668
    fneg f4, f30
    lfs f0, lbl_80881AD4
    lfs f2, lbl_808819A4
    mr r3, r31
    lfs f1, lbl_80881AD0
    fsubs f3, f4, f0
    fmsubs f2, f2, f4, f1
    lfs f1, lbl_8088196C
    bl fn_801496A8
    mr r3, r31
    addi r4, r1, 0xdc
    bl fn_801479E4
    b lbl_fn_80148CC4_00001BE8
lbl_fn_80148CC4_000018E8:
    addi r3, r30, 0xb0
    li r4, 0x0
    bl fn_80139F2C
    cmpwi r3, 0x25
    beq lbl_fn_80148CC4_00001910
    addi r3, r30, 0xb0
    li r4, 0x0
    bl fn_80139F2C
    cmpwi r3, 0x17d
    bne lbl_fn_80148CC4_00001BE8
lbl_fn_80148CC4_00001910:
    addi r3, r1, 0xd0
    addi r4, r30, 0xfa4
    bl fn_80011034
    mr r4, r31
    addi r3, r1, 0xc4
    bl fn_8000D0F8
    lfs f2, lbl_808819A4
    lfs f1, 0xd0(r1)
    lfs f0, lbl_80881AC4
    fmuls f30, f2, f1
    fcmpo cr0, f30, f0
    ble lbl_fn_80148CC4_00001948
    fmr f30, f0
    b lbl_fn_80148CC4_00001958
lbl_fn_80148CC4_00001948:
    lfs f0, lbl_80881AB8
    fcmpo cr0, f30, f0
    bge lbl_fn_80148CC4_00001958
    fmr f30, f0
lbl_fn_80148CC4_00001958:
    lis r4, lbl_80737A9C@ha
    lfs f31, lbl_8088196C
    addi r4, r4, lbl_80737A9C@l
    lwz r3, 0x10(r27)
    addi r4, r4, 0x80
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80148CC4_00001984
    fneg f1, f30
    lfs f0, lbl_80881A00
    fmuls f31, f0, f1
lbl_fn_80148CC4_00001984:
    mr r3, r31
    bl fn_8010F668
    fmr f1, f30
    lfs f3, lbl_8088196C
    fmr f2, f31
    mr r3, r31
    bl fn_801496A8
    mr r3, r31
    addi r4, r1, 0xc4
    bl fn_801479E4
    b lbl_fn_80148CC4_00001BE8
lbl_fn_80148CC4_000019B0:
    mr r3, r28
    addi r4, r29, 0xad
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80148CC4_00001BE8
    lwz r3, 0x12a8(r30)
    extrwi. r0, r3, 1, 4
    beq lbl_fn_80148CC4_00001BE8
    extrwi. r0, r3, 1, 5
    bne lbl_fn_80148CC4_00001BE8
    addi r3, r30, 0xb0
    addi r4, r29, 0x5b
    li r5, 0x0
    bl fn_80092814
    mr r28, r3
    addi r3, r30, 0xb0
    addi r4, r29, 0x56
    li r5, 0x0
    bl fn_80092814
    cmpwi r28, 0x0
    mr r29, r3
    blt lbl_fn_80148CC4_00001BE8
    cmpwi r3, 0x0
    blt lbl_fn_80148CC4_00001BE8
    mr r4, r31
    addi r3, r1, 0xb8
    bl fn_8000D0F8
    mr r3, r31
    bl fn_8010F668
    addi r3, r1, 0xa8
    bl fn_80149884
    addi r3, r1, 0x98
    bl fn_80149884
    lfs f1, lbl_8088196C
    addi r3, r1, 0x8c
    lfs f3, lbl_80881964
    fmr f2, f1
    bl fn_8000D114
    mulli r27, r28, 0x2c
    addi r3, r30, 0xb0
    bl fn_80147A00
    lwzx r0, r3, r27
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_80148CC4_00001AE4
    addi r3, r30, 0xb0
    bl fn_80147A00
    add r4, r3, r27
    addi r3, r1, 0xa8
    addi r4, r4, 0x10
    bl fn_80149888
    addi r3, r30, 0xb0
    bl fn_8000DD04
    lwz r4, 0x48(r3)
    slwi r0, r28, 2
    addi r3, r1, 0x48
    lwzx r4, r4, r0
    addi r4, r4, 0x40
    bl fn_801498F0
    addi r3, r1, 0x58
    addi r4, r1, 0x48
    bl fn_801498D8
    addi r3, r1, 0xa8
    addi r4, r1, 0x58
    bl fn_8014989C
    addi r3, r1, 0x38
    addi r4, r1, 0xa8
    bl fn_801498D8
    addi r3, r1, 0x1c0
    addi r4, r1, 0x38
    bl fn_80147A08
    addi r3, r1, 0x8c
    addi r4, r1, 0x1c0
    bl fn_80011410
    addi r3, r1, 0x8c
    bl fn_80139F60
    b lbl_fn_80148CC4_00001AF8
lbl_fn_80148CC4_00001AE4:
    lfs f1, lbl_8088196C
    addi r3, r1, 0x8c
    fmr f2, f1
    fmr f3, f1
    bl fn_80057A68
lbl_fn_80148CC4_00001AF8:
    lfs f1, lbl_8088196C
    addi r3, r1, 0x80
    lfs f3, lbl_80881964
    fmr f2, f1
    bl fn_8000D114
    mulli r27, r29, 0x2c
    addi r3, r30, 0xb0
    bl fn_80147A00
    lwzx r0, r3, r27
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_80148CC4_00001BA8
    addi r3, r30, 0xb0
    bl fn_80147A00
    add r4, r3, r27
    addi r3, r1, 0x98
    addi r4, r4, 0x10
    bl fn_80149888
    addi r3, r30, 0xb0
    bl fn_8000DD04
    lwz r4, 0x48(r3)
    slwi r0, r29, 2
    addi r3, r1, 0x18
    lwzx r4, r4, r0
    addi r4, r4, 0x40
    bl fn_801498F0
    addi r3, r1, 0x28
    addi r4, r1, 0x18
    bl fn_801498D8
    addi r3, r1, 0x98
    addi r4, r1, 0x28
    bl fn_8014989C
    addi r3, r1, 0x8
    addi r4, r1, 0x98
    bl fn_801498D8
    addi r3, r1, 0x190
    addi r4, r1, 0x8
    bl fn_80147A08
    addi r3, r1, 0x80
    addi r4, r1, 0x190
    bl fn_80011410
    addi r3, r1, 0x80
    bl fn_80139F60
    b lbl_fn_80148CC4_00001BBC
lbl_fn_80148CC4_00001BA8:
    lfs f1, lbl_8088196C
    addi r3, r1, 0x80
    fmr f2, f1
    fmr f3, f1
    bl fn_80057A68
lbl_fn_80148CC4_00001BBC:
    lfs f2, 0x90(r1)
    mr r3, r31
    lfs f0, 0x84(r1)
    lfs f1, lbl_8088196C
    fadds f0, f2, f0
    fmr f2, f1
    fneg f3, f0
    bl fn_801496A8
    mr r3, r31
    addi r4, r1, 0xb8
    bl fn_801479E4
lbl_fn_80148CC4_00001BE8:
    addi r11, r1, 0x2d0
    psq_l f31, 0x2e8(r1), 0, 0
    lfd f31, 0x2e0(r1)
    psq_l f30, 0x2d8(r1), 0, 0
    lfd f30, 0x2d0(r1)
    bl _restgpr_27
    lwz r0, 0x2f4(r1)
    mtlr r0
    addi r1, r1, 0x2f0
    blr
}
