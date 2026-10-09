#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void dtor_80084684(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_800A6BD4(void);
extern void fn_801FDE94(void);
extern void fn_801FDEE4(void);
extern void fn_801FE89C(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_80695A50(void);

/* External data declarations */
extern u8 lbl_80782A80[];

/* Small data declarations */
extern u32 lbl_8087DAB0;
extern u32 lbl_8087DAB4;
extern u32 lbl_8087DAB8;
extern u32 lbl_8087DABC;
extern u32 lbl_8087DAC0;
extern u32 lbl_8087DAC4;
extern u32 lbl_8087DAC8;
extern u32 lbl_8087DACC;
extern u32 lbl_8087DAD8;
extern u32 lbl_8087DADC;
extern u32 lbl_8087DAE0;
extern u32 lbl_8087DAE4;
extern u32 lbl_80882BE0;
extern u32 lbl_80882BF0;
extern u32 lbl_80882BF8;
extern u32 lbl_80882C00;
extern u32 lbl_80882C04;
extern u32 lbl_80882C08;

/* Function declarations */
void fn_801ED90C(void);
void fn_801ED910(void);
void fn_801ED928(void);
void fn_801EDC74(void);
void fn_801EDC78(void);
void fn_801EDCB8(void);
void fn_801EDCBC(void);
void fn_801EDCC0(void);
void fn_801EDCC8(void);
void fn_801EDCCC(void);
void fn_801EEE54(void);
void fn_801EEF04(void);
void fn_801EEF74(void);
void fn_801EF15C(void);

asm void fn_801ED90C(void)
{
    nofralloc
    blr
}

asm void fn_801ED910(void)
{
    nofralloc
    cmpwi r4, 0x0
    stw r4, 0x100(r3)
    beqlr
    lhz r0, 0xa(r4)
    sth r0, 0xc(r3)
    blr
}

asm void fn_801ED928(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    lfs f0, lbl_80882BE0
    stw r0, 0xa4(r1)
    li r0, 0x0
    stw r31, 0x9c(r1)
    mr r31, r6
    stw r30, 0x98(r1)
    mr r30, r5
    stw r29, 0x94(r1)
    mr r29, r4
    stw r28, 0x90(r1)
    mr r28, r3
    stfs f0, 0x48(r1)
    stfs f0, 0x4c(r1)
    stfs f0, 0x50(r1)
    stfs f0, 0x54(r1)
    stfs f0, 0x58(r1)
    stfs f0, 0x8(r1)
    stw r0, 0xc(r1)
    lfs f0, 0x48(r3)
    stfs f0, 0x0(r4)
    lfs f0, 0x4c(r3)
    stfs f0, 0x4(r4)
    lfs f0, 0x50(r3)
    stfs f0, 0x8(r4)
    lfs f0, 0x54(r3)
    stfs f0, 0xc(r4)
    lfs f0, 0x58(r3)
    stfs f0, 0x10(r4)
    lfs f0, 0x80(r3)
    stfs f0, 0xc(r5)
    lfs f0, 0x84(r3)
    stfs f0, 0x0(r5)
    lfs f0, 0x88(r3)
    stfs f0, 0x4(r5)
    lfs f0, 0x8c(r3)
    stfs f0, 0x8(r5)
    lfs f0, 0x9c(r3)
    stfs f0, 0x0(r6)
    lwz r0, 0xac(r3)
    stw r0, 0x4(r6)
    lfs f0, 0xdc(r3)
    stfs f0, 0x14(r7)
    lfs f0, 0xe0(r3)
    stfs f0, 0x8(r7)
    lfs f0, 0xe4(r3)
    stfs f0, 0xc(r7)
    lfs f0, 0xe8(r3)
    stfs f0, 0x10(r7)
    lfs f0, 0xf8(r3)
    stfs f0, 0x0(r7)
    lfs f0, 0xf8(r3)
    stfs f0, 0x4(r7)
    lwz r3, 0x100(r3)
    cmpwi r3, 0x0
    beq lbl_fn_801ED928_000001CC
    addi r4, r1, 0x48
    addi r5, r1, 0x20
    addi r6, r1, 0x8
    addi r7, r1, 0x30
    bl fn_801ED928
    lfs f1, 0x0(r29)
    addi r3, r1, 0x60
    lfs f0, 0x50(r1)
    li r4, 0x7a
    lfs f5, 0x4(r29)
    fmuls f0, f1, f0
    lfs f4, 0x8(r29)
    lfs f3, 0xc(r29)
    stfs f0, 0x0(r29)
    lfs f0, lbl_80882BF8
    lfs f1, 0x54(r1)
    lfs f2, lbl_80882BE0
    fmuls f1, f5, f1
    stfs f1, 0x4(r29)
    lfs f1, 0x50(r1)
    fmuls f1, f4, f1
    stfs f1, 0x8(r29)
    lfs f1, 0x54(r1)
    fmuls f1, f3, f1
    stfs f1, 0xc(r29)
    lfs f3, 0xc(r30)
    lfs f1, 0x2c(r1)
    fmuls f1, f3, f1
    stfs f1, 0xc(r30)
    lfs f1, 0x8(r1)
    lfs f4, 0x4(r29)
    lfs f3, 0x0(r29)
    fmuls f1, f0, f1
    stfs f3, 0x10(r1)
    stfs f4, 0x14(r1)
    stfs f2, 0x18(r1)
    bl fn_805F8E70
    addi r4, r1, 0x10
    addi r3, r1, 0x60
    mr r5, r4
    bl fn_805F93C0
    lfs f2, 0x10(r1)
    stfs f2, 0x0(r29)
    lfs f1, 0x14(r1)
    stfs f1, 0x4(r29)
    lfs f0, 0x48(r1)
    fadds f0, f2, f0
    stfs f0, 0x0(r29)
    lfs f0, 0x4c(r1)
    fadds f0, f1, f0
    stfs f0, 0x4(r29)
lbl_fn_801ED928_000001CC:
    lwz r3, 0x104(r28)
    cmpwi r3, 0x0
    beq lbl_fn_801ED928_000001E4
    lfs f1, 0x0(r29)
    bl fn_800A6BD4
    stfs f1, 0x0(r29)
lbl_fn_801ED928_000001E4:
    lwz r3, 0x108(r28)
    cmpwi r3, 0x0
    beq lbl_fn_801ED928_000001FC
    lfs f1, 0x4(r29)
    bl fn_800A6BD4
    stfs f1, 0x4(r29)
lbl_fn_801ED928_000001FC:
    lwz r3, 0x10c(r28)
    cmpwi r3, 0x0
    beq lbl_fn_801ED928_00000214
    lfs f1, 0x8(r29)
    bl fn_800A6BD4
    stfs f1, 0x8(r29)
lbl_fn_801ED928_00000214:
    lwz r3, 0x110(r28)
    cmpwi r3, 0x0
    beq lbl_fn_801ED928_0000022C
    lfs f1, 0xc(r29)
    bl fn_800A6BD4
    stfs f1, 0xc(r29)
lbl_fn_801ED928_0000022C:
    lwz r3, 0x114(r28)
    cmpwi r3, 0x0
    beq lbl_fn_801ED928_00000244
    lfs f1, 0x10(r29)
    bl fn_800A6BD4
    stfs f1, 0x10(r29)
lbl_fn_801ED928_00000244:
    lwz r3, 0x118(r28)
    cmpwi r3, 0x0
    beq lbl_fn_801ED928_00000268
    lfs f1, 0xc(r30)
    bl fn_800A6BD4
    lfs f0, lbl_80882BF0
    fdivs f0, f1, f0
    stfs f0, 0xc(r30)
    b lbl_fn_801ED928_00000278
lbl_fn_801ED928_00000268:
    lfs f1, 0xc(r30)
    lfs f0, lbl_80882BF0
    fdivs f0, f1, f0
    stfs f0, 0xc(r30)
lbl_fn_801ED928_00000278:
    lwz r3, 0x11c(r28)
    cmpwi r3, 0x0
    beq lbl_fn_801ED928_0000029C
    lfs f1, 0x0(r30)
    bl fn_800A6BD4
    lfs f0, lbl_80882BF0
    fdivs f0, f1, f0
    stfs f0, 0x0(r30)
    b lbl_fn_801ED928_000002AC
lbl_fn_801ED928_0000029C:
    lfs f1, 0x0(r30)
    lfs f0, lbl_80882BF0
    fdivs f0, f1, f0
    stfs f0, 0x0(r30)
lbl_fn_801ED928_000002AC:
    lwz r3, 0x120(r28)
    cmpwi r3, 0x0
    beq lbl_fn_801ED928_000002D0
    lfs f1, 0x4(r30)
    bl fn_800A6BD4
    lfs f0, lbl_80882BF0
    fdivs f0, f1, f0
    stfs f0, 0x4(r30)
    b lbl_fn_801ED928_000002E0
lbl_fn_801ED928_000002D0:
    lfs f1, 0x4(r30)
    lfs f0, lbl_80882BF0
    fdivs f0, f1, f0
    stfs f0, 0x4(r30)
lbl_fn_801ED928_000002E0:
    lwz r3, 0x124(r28)
    cmpwi r3, 0x0
    beq lbl_fn_801ED928_00000304
    lfs f1, 0x8(r30)
    bl fn_800A6BD4
    lfs f0, lbl_80882BF0
    fdivs f0, f1, f0
    stfs f0, 0x8(r30)
    b lbl_fn_801ED928_00000314
lbl_fn_801ED928_00000304:
    lfs f1, 0x8(r30)
    lfs f0, lbl_80882BF0
    fdivs f0, f1, f0
    stfs f0, 0x8(r30)
lbl_fn_801ED928_00000314:
    lwz r3, 0x128(r28)
    cmpwi r3, 0x0
    beq lbl_fn_801ED928_0000032C
    lfs f1, 0x0(r31)
    bl fn_800A6BD4
    stfs f1, 0x0(r31)
lbl_fn_801ED928_0000032C:
    lwz r0, 0x100(r28)
    cmpwi r0, 0x0
    beq lbl_fn_801ED928_00000348
    lfs f1, 0x10(r29)
    lfs f0, 0x58(r1)
    fadds f0, f1, f0
    stfs f0, 0x10(r29)
lbl_fn_801ED928_00000348:
    lwz r0, 0xa4(r1)
    lwz r31, 0x9c(r1)
    lwz r30, 0x98(r1)
    lwz r29, 0x94(r1)
    lwz r28, 0x90(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_801EDC74(void)
{
    nofralloc
    blr
}

asm void fn_801EDC78(void)
{
    nofralloc
    lwz r4, 0xfc(r3)
    cmpwi r4, 0x0
    beq lbl_fn_801EDC78_000003A4
    lfs f1, 0x5c(r4)
    lfs f0, 0x14(r3)
    fcmpo cr0, f0, f1
    cror eq, lt, eq
    bne lbl_fn_801EDC78_000003A4
    lfs f0, 0x18(r3)
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_801EDC78_000003A4
    li r3, 0x1
    blr
lbl_fn_801EDC78_000003A4:
    li r3, 0x0
    blr
}

asm void fn_801EDCB8(void)
{
    nofralloc
    blr
}

asm void fn_801EDCBC(void)
{
    nofralloc
    blr
}

asm void fn_801EDCC0(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_801EDCC8(void)
{
    nofralloc
    blr
}

asm void fn_801EDCCC(void)
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
    lwz r30, 0xfc(r3)
    cmpwi r30, 0x0
    beq lbl_fn_801EDCCC_00001528
    lwz r0, 0x24(r30)
    cmpwi r0, 0x0
    beq lbl_fn_801EDCCC_00000404
    lwz r0, 0x20(r30)
    cmpwi r0, 0x0
    bne lbl_fn_801EDCCC_00000554
lbl_fn_801EDCCC_00000404:
    lwz r0, 0x20(r30)
    cmplwi r0, 0x8
    bgt lbl_fn_801EDCCC_000006A8
    li r3, 0x20
    li r4, 0x0
    la r5, lbl_8087DABC
    la r6, lbl_8087DAB8
    li r7, 0x0
    bl fn_800846FC
    lwz r0, 0x24(r30)
    mr r28, r3
    cmpwi r0, 0x0
    beq lbl_fn_801EDCCC_00000544
    lwz r0, 0x1c(r30)
    li r4, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_801EDCCC_0000044C
    mr r4, r0
lbl_fn_801EDCCC_0000044C:
    cmpwi r4, 0x0
    li r5, 0x0
    beq lbl_fn_801EDCCC_0000053C
    cmplwi r4, 0x8
    subi r8, r4, 0x8
    ble lbl_fn_801EDCCC_0000050C
    addi r0, r8, 0x7
    mr r7, r28
    srwi r0, r0, 3
    li r6, 0x0
    mtctr r0
    cmplwi r8, 0x0
    ble lbl_fn_801EDCCC_0000050C
lbl_fn_801EDCCC_00000480:
    lwz r8, 0x24(r30)
    addi r5, r5, 0x8
    lwzx r0, r8, r6
    stw r0, 0x0(r7)
    lwz r0, 0x24(r30)
    add r8, r0, r6
    lwz r0, 0x4(r8)
    stw r0, 0x4(r7)
    lwz r0, 0x24(r30)
    add r8, r0, r6
    lwz r0, 0x8(r8)
    stw r0, 0x8(r7)
    lwz r0, 0x24(r30)
    add r8, r0, r6
    lwz r0, 0xc(r8)
    stw r0, 0xc(r7)
    lwz r0, 0x24(r30)
    add r8, r0, r6
    lwz r0, 0x10(r8)
    stw r0, 0x10(r7)
    lwz r0, 0x24(r30)
    add r8, r0, r6
    lwz r0, 0x14(r8)
    stw r0, 0x14(r7)
    lwz r0, 0x24(r30)
    add r8, r0, r6
    lwz r0, 0x18(r8)
    stw r0, 0x18(r7)
    lwz r0, 0x24(r30)
    add r8, r0, r6
    addi r6, r6, 0x20
    lwz r0, 0x1c(r8)
    stw r0, 0x1c(r7)
    addi r7, r7, 0x20
    bdnz lbl_fn_801EDCCC_00000480
lbl_fn_801EDCCC_0000050C:
    slwi r7, r5, 2
    subf r0, r5, r4
    add r6, r3, r7
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_801EDCCC_0000053C
lbl_fn_801EDCCC_00000524:
    lwz r3, 0x24(r30)
    lwzx r0, r3, r7
    addi r7, r7, 0x4
    stw r0, 0x0(r6)
    addi r6, r6, 0x4
    bdnz lbl_fn_801EDCCC_00000524
lbl_fn_801EDCCC_0000053C:
    lwz r3, 0x24(r30)
    bl fn_80084C24
lbl_fn_801EDCCC_00000544:
    stw r28, 0x24(r30)
    li r0, 0x8
    stw r0, 0x20(r30)
    b lbl_fn_801EDCCC_000006A8
lbl_fn_801EDCCC_00000554:
    lwz r3, 0x1c(r30)
    cmplw r3, r0
    blt lbl_fn_801EDCCC_000006A8
    slwi r29, r3, 1
    cmplw r0, r29
    bgt lbl_fn_801EDCCC_000006A8
    slwi r3, r29, 2
    li r4, 0x0
    la r5, lbl_8087DABC
    la r6, lbl_8087DAB8
    li r7, 0x0
    bl fn_800846FC
    lwz r0, 0x24(r30)
    mr r28, r3
    cmpwi r0, 0x0
    beq lbl_fn_801EDCCC_000006A0
    lwz r0, 0x1c(r30)
    mr r4, r29
    cmplw r29, r0
    ble lbl_fn_801EDCCC_000005A8
    mr r4, r0
lbl_fn_801EDCCC_000005A8:
    cmpwi r4, 0x0
    li r5, 0x0
    beq lbl_fn_801EDCCC_00000698
    cmplwi r4, 0x8
    subi r8, r4, 0x8
    ble lbl_fn_801EDCCC_00000668
    addi r0, r8, 0x7
    mr r7, r28
    srwi r0, r0, 3
    li r6, 0x0
    mtctr r0
    cmplwi r8, 0x0
    ble lbl_fn_801EDCCC_00000668
lbl_fn_801EDCCC_000005DC:
    lwz r8, 0x24(r30)
    addi r5, r5, 0x8
    lwzx r0, r8, r6
    stw r0, 0x0(r7)
    lwz r0, 0x24(r30)
    add r8, r0, r6
    lwz r0, 0x4(r8)
    stw r0, 0x4(r7)
    lwz r0, 0x24(r30)
    add r8, r0, r6
    lwz r0, 0x8(r8)
    stw r0, 0x8(r7)
    lwz r0, 0x24(r30)
    add r8, r0, r6
    lwz r0, 0xc(r8)
    stw r0, 0xc(r7)
    lwz r0, 0x24(r30)
    add r8, r0, r6
    lwz r0, 0x10(r8)
    stw r0, 0x10(r7)
    lwz r0, 0x24(r30)
    add r8, r0, r6
    lwz r0, 0x14(r8)
    stw r0, 0x14(r7)
    lwz r0, 0x24(r30)
    add r8, r0, r6
    lwz r0, 0x18(r8)
    stw r0, 0x18(r7)
    lwz r0, 0x24(r30)
    add r8, r0, r6
    addi r6, r6, 0x20
    lwz r0, 0x1c(r8)
    stw r0, 0x1c(r7)
    addi r7, r7, 0x20
    bdnz lbl_fn_801EDCCC_000005DC
lbl_fn_801EDCCC_00000668:
    slwi r7, r5, 2
    subf r0, r5, r4
    add r6, r3, r7
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_801EDCCC_00000698
lbl_fn_801EDCCC_00000680:
    lwz r3, 0x24(r30)
    lwzx r0, r3, r7
    addi r7, r7, 0x4
    stw r0, 0x0(r6)
    addi r6, r6, 0x4
    bdnz lbl_fn_801EDCCC_00000680
lbl_fn_801EDCCC_00000698:
    lwz r3, 0x24(r30)
    bl fn_80084C24
lbl_fn_801EDCCC_000006A0:
    stw r28, 0x24(r30)
    stw r29, 0x20(r30)
lbl_fn_801EDCCC_000006A8:
    lwz r0, 0x1c(r30)
    addi r4, r31, 0x1c
    lwz r3, 0x24(r30)
    slwi r0, r0, 2
    stwx r4, r3, r0
    lwz r3, 0x1c(r30)
    addi r0, r3, 0x1
    stw r0, 0x1c(r30)
    lwz r30, 0xfc(r31)
    lwz r0, 0x3c(r30)
    cmpwi r0, 0x0
    beq lbl_fn_801EDCCC_000006E4
    lwz r0, 0x38(r30)
    cmpwi r0, 0x0
    bne lbl_fn_801EDCCC_00000834
lbl_fn_801EDCCC_000006E4:
    lwz r0, 0x38(r30)
    cmplwi r0, 0x8
    bgt lbl_fn_801EDCCC_00000988
    li r3, 0x20
    li r4, 0x0
    la r5, lbl_8087DAC4
    la r6, lbl_8087DAC0
    li r7, 0x0
    bl fn_800846FC
    lwz r0, 0x3c(r30)
    mr r28, r3
    cmpwi r0, 0x0
    beq lbl_fn_801EDCCC_00000824
    lwz r0, 0x34(r30)
    li r4, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_801EDCCC_0000072C
    mr r4, r0
lbl_fn_801EDCCC_0000072C:
    cmpwi r4, 0x0
    li r5, 0x0
    beq lbl_fn_801EDCCC_0000081C
    cmplwi r4, 0x8
    subi r8, r4, 0x8
    ble lbl_fn_801EDCCC_000007EC
    addi r0, r8, 0x7
    mr r7, r28
    srwi r0, r0, 3
    li r6, 0x0
    mtctr r0
    cmplwi r8, 0x0
    ble lbl_fn_801EDCCC_000007EC
lbl_fn_801EDCCC_00000760:
    lwz r8, 0x3c(r30)
    addi r5, r5, 0x8
    lwzx r0, r8, r6
    stw r0, 0x0(r7)
    lwz r0, 0x3c(r30)
    add r8, r0, r6
    lwz r0, 0x4(r8)
    stw r0, 0x4(r7)
    lwz r0, 0x3c(r30)
    add r8, r0, r6
    lwz r0, 0x8(r8)
    stw r0, 0x8(r7)
    lwz r0, 0x3c(r30)
    add r8, r0, r6
    lwz r0, 0xc(r8)
    stw r0, 0xc(r7)
    lwz r0, 0x3c(r30)
    add r8, r0, r6
    lwz r0, 0x10(r8)
    stw r0, 0x10(r7)
    lwz r0, 0x3c(r30)
    add r8, r0, r6
    lwz r0, 0x14(r8)
    stw r0, 0x14(r7)
    lwz r0, 0x3c(r30)
    add r8, r0, r6
    lwz r0, 0x18(r8)
    stw r0, 0x18(r7)
    lwz r0, 0x3c(r30)
    add r8, r0, r6
    addi r6, r6, 0x20
    lwz r0, 0x1c(r8)
    stw r0, 0x1c(r7)
    addi r7, r7, 0x20
    bdnz lbl_fn_801EDCCC_00000760
lbl_fn_801EDCCC_000007EC:
    slwi r7, r5, 2
    subf r0, r5, r4
    add r6, r3, r7
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_801EDCCC_0000081C
lbl_fn_801EDCCC_00000804:
    lwz r3, 0x3c(r30)
    lwzx r0, r3, r7
    addi r7, r7, 0x4
    stw r0, 0x0(r6)
    addi r6, r6, 0x4
    bdnz lbl_fn_801EDCCC_00000804
lbl_fn_801EDCCC_0000081C:
    lwz r3, 0x3c(r30)
    bl fn_80084C24
lbl_fn_801EDCCC_00000824:
    stw r28, 0x3c(r30)
    li r0, 0x8
    stw r0, 0x38(r30)
    b lbl_fn_801EDCCC_00000988
lbl_fn_801EDCCC_00000834:
    lwz r3, 0x34(r30)
    cmplw r3, r0
    blt lbl_fn_801EDCCC_00000988
    slwi r29, r3, 1
    cmplw r0, r29
    bgt lbl_fn_801EDCCC_00000988
    slwi r3, r29, 2
    li r4, 0x0
    la r5, lbl_8087DAC4
    la r6, lbl_8087DAC0
    li r7, 0x0
    bl fn_800846FC
    lwz r0, 0x3c(r30)
    mr r28, r3
    cmpwi r0, 0x0
    beq lbl_fn_801EDCCC_00000980
    lwz r0, 0x34(r30)
    mr r4, r29
    cmplw r29, r0
    ble lbl_fn_801EDCCC_00000888
    mr r4, r0
lbl_fn_801EDCCC_00000888:
    cmpwi r4, 0x0
    li r5, 0x0
    beq lbl_fn_801EDCCC_00000978
    cmplwi r4, 0x8
    subi r8, r4, 0x8
    ble lbl_fn_801EDCCC_00000948
    addi r0, r8, 0x7
    mr r7, r28
    srwi r0, r0, 3
    li r6, 0x0
    mtctr r0
    cmplwi r8, 0x0
    ble lbl_fn_801EDCCC_00000948
lbl_fn_801EDCCC_000008BC:
    lwz r8, 0x3c(r30)
    addi r5, r5, 0x8
    lwzx r0, r8, r6
    stw r0, 0x0(r7)
    lwz r0, 0x3c(r30)
    add r8, r0, r6
    lwz r0, 0x4(r8)
    stw r0, 0x4(r7)
    lwz r0, 0x3c(r30)
    add r8, r0, r6
    lwz r0, 0x8(r8)
    stw r0, 0x8(r7)
    lwz r0, 0x3c(r30)
    add r8, r0, r6
    lwz r0, 0xc(r8)
    stw r0, 0xc(r7)
    lwz r0, 0x3c(r30)
    add r8, r0, r6
    lwz r0, 0x10(r8)
    stw r0, 0x10(r7)
    lwz r0, 0x3c(r30)
    add r8, r0, r6
    lwz r0, 0x14(r8)
    stw r0, 0x14(r7)
    lwz r0, 0x3c(r30)
    add r8, r0, r6
    lwz r0, 0x18(r8)
    stw r0, 0x18(r7)
    lwz r0, 0x3c(r30)
    add r8, r0, r6
    addi r6, r6, 0x20
    lwz r0, 0x1c(r8)
    stw r0, 0x1c(r7)
    addi r7, r7, 0x20
    bdnz lbl_fn_801EDCCC_000008BC
lbl_fn_801EDCCC_00000948:
    slwi r7, r5, 2
    subf r0, r5, r4
    add r6, r3, r7
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_801EDCCC_00000978
lbl_fn_801EDCCC_00000960:
    lwz r3, 0x3c(r30)
    lwzx r0, r3, r7
    addi r7, r7, 0x4
    stw r0, 0x0(r6)
    addi r6, r6, 0x4
    bdnz lbl_fn_801EDCCC_00000960
lbl_fn_801EDCCC_00000978:
    lwz r3, 0x3c(r30)
    bl fn_80084C24
lbl_fn_801EDCCC_00000980:
    stw r28, 0x3c(r30)
    stw r29, 0x38(r30)
lbl_fn_801EDCCC_00000988:
    lwz r0, 0x34(r30)
    addi r4, r31, 0x5c
    lwz r3, 0x3c(r30)
    slwi r0, r0, 2
    stwx r4, r3, r0
    lwz r3, 0x34(r30)
    addi r0, r3, 0x1
    stw r0, 0x34(r30)
    lwz r30, 0xfc(r31)
    lwz r0, 0x18(r30)
    cmpwi r0, 0x0
    beq lbl_fn_801EDCCC_000009C4
    lwz r0, 0x14(r30)
    cmpwi r0, 0x0
    bne lbl_fn_801EDCCC_00000B14
lbl_fn_801EDCCC_000009C4:
    lwz r0, 0x14(r30)
    cmplwi r0, 0x8
    bgt lbl_fn_801EDCCC_00000C68
    li r3, 0x20
    li r4, 0x0
    la r5, lbl_8087DAB4
    la r6, lbl_8087DAB0
    li r7, 0x0
    bl fn_800846FC
    lwz r0, 0x18(r30)
    mr r28, r3
    cmpwi r0, 0x0
    beq lbl_fn_801EDCCC_00000B04
    lwz r0, 0x10(r30)
    li r4, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_801EDCCC_00000A0C
    mr r4, r0
lbl_fn_801EDCCC_00000A0C:
    cmpwi r4, 0x0
    li r5, 0x0
    beq lbl_fn_801EDCCC_00000AFC
    cmplwi r4, 0x8
    subi r8, r4, 0x8
    ble lbl_fn_801EDCCC_00000ACC
    addi r0, r8, 0x7
    mr r7, r28
    srwi r0, r0, 3
    li r6, 0x0
    mtctr r0
    cmplwi r8, 0x0
    ble lbl_fn_801EDCCC_00000ACC
lbl_fn_801EDCCC_00000A40:
    lwz r8, 0x18(r30)
    addi r5, r5, 0x8
    lwzx r0, r8, r6
    stw r0, 0x0(r7)
    lwz r0, 0x18(r30)
    add r8, r0, r6
    lwz r0, 0x4(r8)
    stw r0, 0x4(r7)
    lwz r0, 0x18(r30)
    add r8, r0, r6
    lwz r0, 0x8(r8)
    stw r0, 0x8(r7)
    lwz r0, 0x18(r30)
    add r8, r0, r6
    lwz r0, 0xc(r8)
    stw r0, 0xc(r7)
    lwz r0, 0x18(r30)
    add r8, r0, r6
    lwz r0, 0x10(r8)
    stw r0, 0x10(r7)
    lwz r0, 0x18(r30)
    add r8, r0, r6
    lwz r0, 0x14(r8)
    stw r0, 0x14(r7)
    lwz r0, 0x18(r30)
    add r8, r0, r6
    lwz r0, 0x18(r8)
    stw r0, 0x18(r7)
    lwz r0, 0x18(r30)
    add r8, r0, r6
    addi r6, r6, 0x20
    lwz r0, 0x1c(r8)
    stw r0, 0x1c(r7)
    addi r7, r7, 0x20
    bdnz lbl_fn_801EDCCC_00000A40
lbl_fn_801EDCCC_00000ACC:
    slwi r7, r5, 2
    subf r0, r5, r4
    add r6, r3, r7
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_801EDCCC_00000AFC
lbl_fn_801EDCCC_00000AE4:
    lwz r3, 0x18(r30)
    lwzx r0, r3, r7
    addi r7, r7, 0x4
    stw r0, 0x0(r6)
    addi r6, r6, 0x4
    bdnz lbl_fn_801EDCCC_00000AE4
lbl_fn_801EDCCC_00000AFC:
    lwz r3, 0x18(r30)
    bl fn_80084C24
lbl_fn_801EDCCC_00000B04:
    stw r28, 0x18(r30)
    li r0, 0x8
    stw r0, 0x14(r30)
    b lbl_fn_801EDCCC_00000C68
lbl_fn_801EDCCC_00000B14:
    lwz r3, 0x10(r30)
    cmplw r3, r0
    blt lbl_fn_801EDCCC_00000C68
    slwi r29, r3, 1
    cmplw r0, r29
    bgt lbl_fn_801EDCCC_00000C68
    slwi r3, r29, 2
    li r4, 0x0
    la r5, lbl_8087DAB4
    la r6, lbl_8087DAB0
    li r7, 0x0
    bl fn_800846FC
    lwz r0, 0x18(r30)
    mr r28, r3
    cmpwi r0, 0x0
    beq lbl_fn_801EDCCC_00000C60
    lwz r0, 0x10(r30)
    mr r4, r29
    cmplw r29, r0
    ble lbl_fn_801EDCCC_00000B68
    mr r4, r0
lbl_fn_801EDCCC_00000B68:
    cmpwi r4, 0x0
    li r5, 0x0
    beq lbl_fn_801EDCCC_00000C58
    cmplwi r4, 0x8
    subi r8, r4, 0x8
    ble lbl_fn_801EDCCC_00000C28
    addi r0, r8, 0x7
    mr r7, r28
    srwi r0, r0, 3
    li r6, 0x0
    mtctr r0
    cmplwi r8, 0x0
    ble lbl_fn_801EDCCC_00000C28
lbl_fn_801EDCCC_00000B9C:
    lwz r8, 0x18(r30)
    addi r5, r5, 0x8
    lwzx r0, r8, r6
    stw r0, 0x0(r7)
    lwz r0, 0x18(r30)
    add r8, r0, r6
    lwz r0, 0x4(r8)
    stw r0, 0x4(r7)
    lwz r0, 0x18(r30)
    add r8, r0, r6
    lwz r0, 0x8(r8)
    stw r0, 0x8(r7)
    lwz r0, 0x18(r30)
    add r8, r0, r6
    lwz r0, 0xc(r8)
    stw r0, 0xc(r7)
    lwz r0, 0x18(r30)
    add r8, r0, r6
    lwz r0, 0x10(r8)
    stw r0, 0x10(r7)
    lwz r0, 0x18(r30)
    add r8, r0, r6
    lwz r0, 0x14(r8)
    stw r0, 0x14(r7)
    lwz r0, 0x18(r30)
    add r8, r0, r6
    lwz r0, 0x18(r8)
    stw r0, 0x18(r7)
    lwz r0, 0x18(r30)
    add r8, r0, r6
    addi r6, r6, 0x20
    lwz r0, 0x1c(r8)
    stw r0, 0x1c(r7)
    addi r7, r7, 0x20
    bdnz lbl_fn_801EDCCC_00000B9C
lbl_fn_801EDCCC_00000C28:
    slwi r7, r5, 2
    subf r0, r5, r4
    add r6, r3, r7
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_801EDCCC_00000C58
lbl_fn_801EDCCC_00000C40:
    lwz r3, 0x18(r30)
    lwzx r0, r3, r7
    addi r7, r7, 0x4
    stw r0, 0x0(r6)
    addi r6, r6, 0x4
    bdnz lbl_fn_801EDCCC_00000C40
lbl_fn_801EDCCC_00000C58:
    lwz r3, 0x18(r30)
    bl fn_80084C24
lbl_fn_801EDCCC_00000C60:
    stw r28, 0x18(r30)
    stw r29, 0x14(r30)
lbl_fn_801EDCCC_00000C68:
    lwz r0, 0x10(r30)
    addi r4, r31, 0x90
    lwz r3, 0x18(r30)
    slwi r0, r0, 2
    stwx r4, r3, r0
    lwz r3, 0x10(r30)
    addi r0, r3, 0x1
    stw r0, 0x10(r30)
    lwz r30, 0xfc(r31)
    lwz r0, 0x54(r30)
    cmpwi r0, 0x0
    beq lbl_fn_801EDCCC_00000CA4
    lwz r0, 0x50(r30)
    cmpwi r0, 0x0
    bne lbl_fn_801EDCCC_00000DF4
lbl_fn_801EDCCC_00000CA4:
    lwz r0, 0x50(r30)
    cmplwi r0, 0x8
    bgt lbl_fn_801EDCCC_00000F48
    li r3, 0x20
    li r4, 0x0
    la r5, lbl_8087DACC
    la r6, lbl_8087DAC8
    li r7, 0x0
    bl fn_800846FC
    lwz r0, 0x54(r30)
    mr r28, r3
    cmpwi r0, 0x0
    beq lbl_fn_801EDCCC_00000DE4
    lwz r0, 0x4c(r30)
    li r4, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_801EDCCC_00000CEC
    mr r4, r0
lbl_fn_801EDCCC_00000CEC:
    cmpwi r4, 0x0
    li r5, 0x0
    beq lbl_fn_801EDCCC_00000DDC
    cmplwi r4, 0x8
    subi r8, r4, 0x8
    ble lbl_fn_801EDCCC_00000DAC
    addi r0, r8, 0x7
    mr r7, r28
    srwi r0, r0, 3
    li r6, 0x0
    mtctr r0
    cmplwi r8, 0x0
    ble lbl_fn_801EDCCC_00000DAC
lbl_fn_801EDCCC_00000D20:
    lwz r8, 0x54(r30)
    addi r5, r5, 0x8
    lwzx r0, r8, r6
    stw r0, 0x0(r7)
    lwz r0, 0x54(r30)
    add r8, r0, r6
    lwz r0, 0x4(r8)
    stw r0, 0x4(r7)
    lwz r0, 0x54(r30)
    add r8, r0, r6
    lwz r0, 0x8(r8)
    stw r0, 0x8(r7)
    lwz r0, 0x54(r30)
    add r8, r0, r6
    lwz r0, 0xc(r8)
    stw r0, 0xc(r7)
    lwz r0, 0x54(r30)
    add r8, r0, r6
    lwz r0, 0x10(r8)
    stw r0, 0x10(r7)
    lwz r0, 0x54(r30)
    add r8, r0, r6
    lwz r0, 0x14(r8)
    stw r0, 0x14(r7)
    lwz r0, 0x54(r30)
    add r8, r0, r6
    lwz r0, 0x18(r8)
    stw r0, 0x18(r7)
    lwz r0, 0x54(r30)
    add r8, r0, r6
    addi r6, r6, 0x20
    lwz r0, 0x1c(r8)
    stw r0, 0x1c(r7)
    addi r7, r7, 0x20
    bdnz lbl_fn_801EDCCC_00000D20
lbl_fn_801EDCCC_00000DAC:
    slwi r7, r5, 2
    subf r0, r5, r4
    add r6, r3, r7
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_801EDCCC_00000DDC
lbl_fn_801EDCCC_00000DC4:
    lwz r3, 0x54(r30)
    lwzx r0, r3, r7
    addi r7, r7, 0x4
    stw r0, 0x0(r6)
    addi r6, r6, 0x4
    bdnz lbl_fn_801EDCCC_00000DC4
lbl_fn_801EDCCC_00000DDC:
    lwz r3, 0x54(r30)
    bl fn_80084C24
lbl_fn_801EDCCC_00000DE4:
    stw r28, 0x54(r30)
    li r0, 0x8
    stw r0, 0x50(r30)
    b lbl_fn_801EDCCC_00000F48
lbl_fn_801EDCCC_00000DF4:
    lwz r3, 0x4c(r30)
    cmplw r3, r0
    blt lbl_fn_801EDCCC_00000F48
    slwi r29, r3, 1
    cmplw r0, r29
    bgt lbl_fn_801EDCCC_00000F48
    slwi r3, r29, 2
    li r4, 0x0
    la r5, lbl_8087DACC
    la r6, lbl_8087DAC8
    li r7, 0x0
    bl fn_800846FC
    lwz r0, 0x54(r30)
    mr r28, r3
    cmpwi r0, 0x0
    beq lbl_fn_801EDCCC_00000F40
    lwz r0, 0x4c(r30)
    mr r4, r29
    cmplw r29, r0
    ble lbl_fn_801EDCCC_00000E48
    mr r4, r0
lbl_fn_801EDCCC_00000E48:
    cmpwi r4, 0x0
    li r5, 0x0
    beq lbl_fn_801EDCCC_00000F38
    cmplwi r4, 0x8
    subi r8, r4, 0x8
    ble lbl_fn_801EDCCC_00000F08
    addi r0, r8, 0x7
    mr r7, r28
    srwi r0, r0, 3
    li r6, 0x0
    mtctr r0
    cmplwi r8, 0x0
    ble lbl_fn_801EDCCC_00000F08
lbl_fn_801EDCCC_00000E7C:
    lwz r8, 0x54(r30)
    addi r5, r5, 0x8
    lwzx r0, r8, r6
    stw r0, 0x0(r7)
    lwz r0, 0x54(r30)
    add r8, r0, r6
    lwz r0, 0x4(r8)
    stw r0, 0x4(r7)
    lwz r0, 0x54(r30)
    add r8, r0, r6
    lwz r0, 0x8(r8)
    stw r0, 0x8(r7)
    lwz r0, 0x54(r30)
    add r8, r0, r6
    lwz r0, 0xc(r8)
    stw r0, 0xc(r7)
    lwz r0, 0x54(r30)
    add r8, r0, r6
    lwz r0, 0x10(r8)
    stw r0, 0x10(r7)
    lwz r0, 0x54(r30)
    add r8, r0, r6
    lwz r0, 0x14(r8)
    stw r0, 0x14(r7)
    lwz r0, 0x54(r30)
    add r8, r0, r6
    lwz r0, 0x18(r8)
    stw r0, 0x18(r7)
    lwz r0, 0x54(r30)
    add r8, r0, r6
    addi r6, r6, 0x20
    lwz r0, 0x1c(r8)
    stw r0, 0x1c(r7)
    addi r7, r7, 0x20
    bdnz lbl_fn_801EDCCC_00000E7C
lbl_fn_801EDCCC_00000F08:
    slwi r7, r5, 2
    subf r0, r5, r4
    add r6, r3, r7
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_801EDCCC_00000F38
lbl_fn_801EDCCC_00000F20:
    lwz r3, 0x54(r30)
    lwzx r0, r3, r7
    addi r7, r7, 0x4
    stw r0, 0x0(r6)
    addi r6, r6, 0x4
    bdnz lbl_fn_801EDCCC_00000F20
lbl_fn_801EDCCC_00000F38:
    lwz r3, 0x54(r30)
    bl fn_80084C24
lbl_fn_801EDCCC_00000F40:
    stw r28, 0x54(r30)
    stw r29, 0x50(r30)
lbl_fn_801EDCCC_00000F48:
    lwz r0, 0x4c(r30)
    addi r4, r31, 0xa0
    lwz r3, 0x54(r30)
    slwi r0, r0, 2
    stwx r4, r3, r0
    lwz r3, 0x4c(r30)
    addi r0, r3, 0x1
    stw r0, 0x4c(r30)
    lwz r30, 0xfc(r31)
    lwz r0, 0x3c(r30)
    cmpwi r0, 0x0
    beq lbl_fn_801EDCCC_00000F84
    lwz r0, 0x38(r30)
    cmpwi r0, 0x0
    bne lbl_fn_801EDCCC_000010D4
lbl_fn_801EDCCC_00000F84:
    lwz r0, 0x38(r30)
    cmplwi r0, 0x8
    bgt lbl_fn_801EDCCC_00001228
    li r3, 0x20
    li r4, 0x0
    la r5, lbl_8087DAC4
    la r6, lbl_8087DAC0
    li r7, 0x0
    bl fn_800846FC
    lwz r0, 0x3c(r30)
    mr r28, r3
    cmpwi r0, 0x0
    beq lbl_fn_801EDCCC_000010C4
    lwz r0, 0x34(r30)
    li r4, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_801EDCCC_00000FCC
    mr r4, r0
lbl_fn_801EDCCC_00000FCC:
    cmpwi r4, 0x0
    li r5, 0x0
    beq lbl_fn_801EDCCC_000010BC
    cmplwi r4, 0x8
    subi r8, r4, 0x8
    ble lbl_fn_801EDCCC_0000108C
    addi r0, r8, 0x7
    mr r7, r28
    srwi r0, r0, 3
    li r6, 0x0
    mtctr r0
    cmplwi r8, 0x0
    ble lbl_fn_801EDCCC_0000108C
lbl_fn_801EDCCC_00001000:
    lwz r8, 0x3c(r30)
    addi r5, r5, 0x8
    lwzx r0, r8, r6
    stw r0, 0x0(r7)
    lwz r0, 0x3c(r30)
    add r8, r0, r6
    lwz r0, 0x4(r8)
    stw r0, 0x4(r7)
    lwz r0, 0x3c(r30)
    add r8, r0, r6
    lwz r0, 0x8(r8)
    stw r0, 0x8(r7)
    lwz r0, 0x3c(r30)
    add r8, r0, r6
    lwz r0, 0xc(r8)
    stw r0, 0xc(r7)
    lwz r0, 0x3c(r30)
    add r8, r0, r6
    lwz r0, 0x10(r8)
    stw r0, 0x10(r7)
    lwz r0, 0x3c(r30)
    add r8, r0, r6
    lwz r0, 0x14(r8)
    stw r0, 0x14(r7)
    lwz r0, 0x3c(r30)
    add r8, r0, r6
    lwz r0, 0x18(r8)
    stw r0, 0x18(r7)
    lwz r0, 0x3c(r30)
    add r8, r0, r6
    addi r6, r6, 0x20
    lwz r0, 0x1c(r8)
    stw r0, 0x1c(r7)
    addi r7, r7, 0x20
    bdnz lbl_fn_801EDCCC_00001000
lbl_fn_801EDCCC_0000108C:
    slwi r7, r5, 2
    subf r0, r5, r4
    add r6, r3, r7
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_801EDCCC_000010BC
lbl_fn_801EDCCC_000010A4:
    lwz r3, 0x3c(r30)
    lwzx r0, r3, r7
    addi r7, r7, 0x4
    stw r0, 0x0(r6)
    addi r6, r6, 0x4
    bdnz lbl_fn_801EDCCC_000010A4
lbl_fn_801EDCCC_000010BC:
    lwz r3, 0x3c(r30)
    bl fn_80084C24
lbl_fn_801EDCCC_000010C4:
    stw r28, 0x3c(r30)
    li r0, 0x8
    stw r0, 0x38(r30)
    b lbl_fn_801EDCCC_00001228
lbl_fn_801EDCCC_000010D4:
    lwz r3, 0x34(r30)
    cmplw r3, r0
    blt lbl_fn_801EDCCC_00001228
    slwi r29, r3, 1
    cmplw r0, r29
    bgt lbl_fn_801EDCCC_00001228
    slwi r3, r29, 2
    li r4, 0x0
    la r5, lbl_8087DAC4
    la r6, lbl_8087DAC0
    li r7, 0x0
    bl fn_800846FC
    lwz r0, 0x3c(r30)
    mr r28, r3
    cmpwi r0, 0x0
    beq lbl_fn_801EDCCC_00001220
    lwz r0, 0x34(r30)
    mr r4, r29
    cmplw r29, r0
    ble lbl_fn_801EDCCC_00001128
    mr r4, r0
lbl_fn_801EDCCC_00001128:
    cmpwi r4, 0x0
    li r5, 0x0
    beq lbl_fn_801EDCCC_00001218
    cmplwi r4, 0x8
    subi r8, r4, 0x8
    ble lbl_fn_801EDCCC_000011E8
    addi r0, r8, 0x7
    mr r7, r28
    srwi r0, r0, 3
    li r6, 0x0
    mtctr r0
    cmplwi r8, 0x0
    ble lbl_fn_801EDCCC_000011E8
lbl_fn_801EDCCC_0000115C:
    lwz r8, 0x3c(r30)
    addi r5, r5, 0x8
    lwzx r0, r8, r6
    stw r0, 0x0(r7)
    lwz r0, 0x3c(r30)
    add r8, r0, r6
    lwz r0, 0x4(r8)
    stw r0, 0x4(r7)
    lwz r0, 0x3c(r30)
    add r8, r0, r6
    lwz r0, 0x8(r8)
    stw r0, 0x8(r7)
    lwz r0, 0x3c(r30)
    add r8, r0, r6
    lwz r0, 0xc(r8)
    stw r0, 0xc(r7)
    lwz r0, 0x3c(r30)
    add r8, r0, r6
    lwz r0, 0x10(r8)
    stw r0, 0x10(r7)
    lwz r0, 0x3c(r30)
    add r8, r0, r6
    lwz r0, 0x14(r8)
    stw r0, 0x14(r7)
    lwz r0, 0x3c(r30)
    add r8, r0, r6
    lwz r0, 0x18(r8)
    stw r0, 0x18(r7)
    lwz r0, 0x3c(r30)
    add r8, r0, r6
    addi r6, r6, 0x20
    lwz r0, 0x1c(r8)
    stw r0, 0x1c(r7)
    addi r7, r7, 0x20
    bdnz lbl_fn_801EDCCC_0000115C
lbl_fn_801EDCCC_000011E8:
    slwi r7, r5, 2
    subf r0, r5, r4
    add r6, r3, r7
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_801EDCCC_00001218
lbl_fn_801EDCCC_00001200:
    lwz r3, 0x3c(r30)
    lwzx r0, r3, r7
    addi r7, r7, 0x4
    stw r0, 0x0(r6)
    addi r6, r6, 0x4
    bdnz lbl_fn_801EDCCC_00001200
lbl_fn_801EDCCC_00001218:
    lwz r3, 0x3c(r30)
    bl fn_80084C24
lbl_fn_801EDCCC_00001220:
    stw r28, 0x3c(r30)
    stw r29, 0x38(r30)
lbl_fn_801EDCCC_00001228:
    lwz r0, 0x34(r30)
    addi r4, r31, 0xb8
    lwz r3, 0x3c(r30)
    slwi r0, r0, 2
    stwx r4, r3, r0
    lwz r3, 0x34(r30)
    addi r0, r3, 0x1
    stw r0, 0x34(r30)
    lwz r30, 0xfc(r31)
    lwz r0, 0x18(r30)
    cmpwi r0, 0x0
    beq lbl_fn_801EDCCC_00001264
    lwz r0, 0x14(r30)
    cmpwi r0, 0x0
    bne lbl_fn_801EDCCC_000013B4
lbl_fn_801EDCCC_00001264:
    lwz r0, 0x14(r30)
    cmplwi r0, 0x8
    bgt lbl_fn_801EDCCC_00001508
    li r3, 0x20
    li r4, 0x0
    la r5, lbl_8087DAB4
    la r6, lbl_8087DAB0
    li r7, 0x0
    bl fn_800846FC
    lwz r0, 0x18(r30)
    mr r28, r3
    cmpwi r0, 0x0
    beq lbl_fn_801EDCCC_000013A4
    lwz r0, 0x10(r30)
    li r4, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_801EDCCC_000012AC
    mr r4, r0
lbl_fn_801EDCCC_000012AC:
    cmpwi r4, 0x0
    li r5, 0x0
    beq lbl_fn_801EDCCC_0000139C
    cmplwi r4, 0x8
    subi r8, r4, 0x8
    ble lbl_fn_801EDCCC_0000136C
    addi r0, r8, 0x7
    mr r7, r28
    srwi r0, r0, 3
    li r6, 0x0
    mtctr r0
    cmplwi r8, 0x0
    ble lbl_fn_801EDCCC_0000136C
lbl_fn_801EDCCC_000012E0:
    lwz r8, 0x18(r30)
    addi r5, r5, 0x8
    lwzx r0, r8, r6
    stw r0, 0x0(r7)
    lwz r0, 0x18(r30)
    add r8, r0, r6
    lwz r0, 0x4(r8)
    stw r0, 0x4(r7)
    lwz r0, 0x18(r30)
    add r8, r0, r6
    lwz r0, 0x8(r8)
    stw r0, 0x8(r7)
    lwz r0, 0x18(r30)
    add r8, r0, r6
    lwz r0, 0xc(r8)
    stw r0, 0xc(r7)
    lwz r0, 0x18(r30)
    add r8, r0, r6
    lwz r0, 0x10(r8)
    stw r0, 0x10(r7)
    lwz r0, 0x18(r30)
    add r8, r0, r6
    lwz r0, 0x14(r8)
    stw r0, 0x14(r7)
    lwz r0, 0x18(r30)
    add r8, r0, r6
    lwz r0, 0x18(r8)
    stw r0, 0x18(r7)
    lwz r0, 0x18(r30)
    add r8, r0, r6
    addi r6, r6, 0x20
    lwz r0, 0x1c(r8)
    stw r0, 0x1c(r7)
    addi r7, r7, 0x20
    bdnz lbl_fn_801EDCCC_000012E0
lbl_fn_801EDCCC_0000136C:
    slwi r7, r5, 2
    subf r0, r5, r4
    add r6, r3, r7
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_801EDCCC_0000139C
lbl_fn_801EDCCC_00001384:
    lwz r3, 0x18(r30)
    lwzx r0, r3, r7
    addi r7, r7, 0x4
    stw r0, 0x0(r6)
    addi r6, r6, 0x4
    bdnz lbl_fn_801EDCCC_00001384
lbl_fn_801EDCCC_0000139C:
    lwz r3, 0x18(r30)
    bl fn_80084C24
lbl_fn_801EDCCC_000013A4:
    stw r28, 0x18(r30)
    li r0, 0x8
    stw r0, 0x14(r30)
    b lbl_fn_801EDCCC_00001508
lbl_fn_801EDCCC_000013B4:
    lwz r3, 0x10(r30)
    cmplw r3, r0
    blt lbl_fn_801EDCCC_00001508
    slwi r28, r3, 1
    cmplw r0, r28
    bgt lbl_fn_801EDCCC_00001508
    slwi r3, r28, 2
    li r4, 0x0
    la r5, lbl_8087DAB4
    la r6, lbl_8087DAB0
    li r7, 0x0
    bl fn_800846FC
    lwz r0, 0x18(r30)
    mr r29, r3
    cmpwi r0, 0x0
    beq lbl_fn_801EDCCC_00001500
    lwz r0, 0x10(r30)
    mr r4, r28
    cmplw r28, r0
    ble lbl_fn_801EDCCC_00001408
    mr r4, r0
lbl_fn_801EDCCC_00001408:
    cmpwi r4, 0x0
    li r5, 0x0
    beq lbl_fn_801EDCCC_000014F8
    cmplwi r4, 0x8
    subi r8, r4, 0x8
    ble lbl_fn_801EDCCC_000014C8
    addi r0, r8, 0x7
    mr r7, r29
    srwi r0, r0, 3
    li r6, 0x0
    mtctr r0
    cmplwi r8, 0x0
    ble lbl_fn_801EDCCC_000014C8
lbl_fn_801EDCCC_0000143C:
    lwz r8, 0x18(r30)
    addi r5, r5, 0x8
    lwzx r0, r8, r6
    stw r0, 0x0(r7)
    lwz r0, 0x18(r30)
    add r8, r0, r6
    lwz r0, 0x4(r8)
    stw r0, 0x4(r7)
    lwz r0, 0x18(r30)
    add r8, r0, r6
    lwz r0, 0x8(r8)
    stw r0, 0x8(r7)
    lwz r0, 0x18(r30)
    add r8, r0, r6
    lwz r0, 0xc(r8)
    stw r0, 0xc(r7)
    lwz r0, 0x18(r30)
    add r8, r0, r6
    lwz r0, 0x10(r8)
    stw r0, 0x10(r7)
    lwz r0, 0x18(r30)
    add r8, r0, r6
    lwz r0, 0x14(r8)
    stw r0, 0x14(r7)
    lwz r0, 0x18(r30)
    add r8, r0, r6
    lwz r0, 0x18(r8)
    stw r0, 0x18(r7)
    lwz r0, 0x18(r30)
    add r8, r0, r6
    addi r6, r6, 0x20
    lwz r0, 0x1c(r8)
    stw r0, 0x1c(r7)
    addi r7, r7, 0x20
    bdnz lbl_fn_801EDCCC_0000143C
lbl_fn_801EDCCC_000014C8:
    slwi r7, r5, 2
    subf r0, r5, r4
    add r6, r3, r7
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_801EDCCC_000014F8
lbl_fn_801EDCCC_000014E0:
    lwz r3, 0x18(r30)
    lwzx r0, r3, r7
    addi r7, r7, 0x4
    stw r0, 0x0(r6)
    addi r6, r6, 0x4
    bdnz lbl_fn_801EDCCC_000014E0
lbl_fn_801EDCCC_000014F8:
    lwz r3, 0x18(r30)
    bl fn_80084C24
lbl_fn_801EDCCC_00001500:
    stw r29, 0x18(r30)
    stw r28, 0x14(r30)
lbl_fn_801EDCCC_00001508:
    lwz r0, 0x10(r30)
    addi r4, r31, 0xec
    lwz r3, 0x18(r30)
    slwi r0, r0, 2
    stwx r4, r3, r0
    lwz r3, 0x10(r30)
    addi r0, r3, 0x1
    stw r0, 0x10(r30)
lbl_fn_801EDCCC_00001528:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801EEE54(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_80782A80@ha
    stw r0, 0x14(r1)
    addi r4, r4, lbl_80782A80@l
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    stw r4, 0x0(r3)
    stw r31, 0x4(r3)
    stw r31, 0x8(r3)
    stw r31, 0xc(r3)
    addi r3, r3, 0x10
    bl fn_801FDE94
    lfs f2, lbl_80882C00
    mr r3, r30
    lfs f1, lbl_80882C04
    lfs f0, lbl_80882C08
    stfs f2, 0x58(r30)
    stfs f1, 0x60(r30)
    stfs f0, 0x64(r30)
    stw r31, 0x68(r30)
    stw r31, 0x6c(r30)
    stw r31, 0x70(r30)
    stw r31, 0x74(r30)
    stw r31, 0x78(r30)
    stw r31, 0x7c(r30)
    stw r31, 0x80(r30)
    stw r31, 0x84(r30)
    stw r31, 0x88(r30)
    stw r31, 0x8c(r30)
    stw r31, 0x90(r30)
    stw r31, 0x94(r30)
    stw r31, 0x98(r30)
    stw r31, 0x9c(r30)
    stw r31, 0xa0(r30)
    stw r31, 0xa4(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801EEF04(void)
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
    beq lbl_fn_801EEF04_0000164C
    beq lbl_fn_801EEF04_0000163C
    addic. r0, r3, 0x4
    beq lbl_fn_801EEF04_0000163C
    lwz r0, 0x4(r3)
    srwi. r0, r0, 31
    beq lbl_fn_801EEF04_0000163C
    lwz r3, 0xc(r3)
    bl dtor_80084684
lbl_fn_801EEF04_0000163C:
    cmpwi r31, 0x0
    ble lbl_fn_801EEF04_0000164C
    mr r3, r30
    bl dtor_80084684
lbl_fn_801EEF04_0000164C:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801EEF74(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    beq lbl_fn_801EEF74_0000182C
    lis r12, lbl_80782A80@ha
    addi r12, r12, lbl_80782A80@l
    stw r12, 0x0(r3)
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    li r29, 0x0
    li r28, 0x0
    b lbl_fn_801EEF74_000016D0
lbl_fn_801EEF74_000016B8:
    lwz r0, 0x8c(r30)
    addi r3, r30, 0x10
    add r4, r0, r28
    bl fn_801FE89C
    addi r28, r28, 0x10
    addi r29, r29, 0x1
lbl_fn_801EEF74_000016D0:
    lwz r0, 0x88(r30)
    cmplw r29, r0
    blt lbl_fn_801EEF74_000016B8
    lwz r3, 0x8c(r30)
    cmpwi r3, 0x0
    beq lbl_fn_801EEF74_000016F4
    beq lbl_fn_801EEF74_000016F4
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_801EEF74_000016F4:
    addic. r0, r30, 0x90
    li r0, 0x0
    stw r0, 0x8c(r30)
    stw r0, 0x88(r30)
    beq lbl_fn_801EEF74_00001724
    lwz r3, 0x94(r30)
    cmpwi r3, 0x0
    beq lbl_fn_801EEF74_00001718
    bl fn_80084C24
lbl_fn_801EEF74_00001718:
    li r0, 0x0
    stw r0, 0x94(r30)
    stw r0, 0x90(r30)
lbl_fn_801EEF74_00001724:
    addic. r0, r30, 0x88
    beq lbl_fn_801EEF74_00001750
    lwz r3, 0x8c(r30)
    cmpwi r3, 0x0
    beq lbl_fn_801EEF74_00001744
    beq lbl_fn_801EEF74_00001744
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_801EEF74_00001744:
    li r0, 0x0
    stw r0, 0x8c(r30)
    stw r0, 0x88(r30)
lbl_fn_801EEF74_00001750:
    addic. r0, r30, 0x80
    beq lbl_fn_801EEF74_00001774
    lwz r3, 0x84(r30)
    cmpwi r3, 0x0
    beq lbl_fn_801EEF74_00001768
    bl fn_80084C24
lbl_fn_801EEF74_00001768:
    li r0, 0x0
    stw r0, 0x84(r30)
    stw r0, 0x80(r30)
lbl_fn_801EEF74_00001774:
    addic. r0, r30, 0x78
    beq lbl_fn_801EEF74_000017A0
    lwz r3, 0x7c(r30)
    cmpwi r3, 0x0
    beq lbl_fn_801EEF74_00001794
    lis r4, fn_801EEF04@ha
    addi r4, r4, fn_801EEF04@l
    bl fn_80695A50
lbl_fn_801EEF74_00001794:
    li r0, 0x0
    stw r0, 0x7c(r30)
    stw r0, 0x78(r30)
lbl_fn_801EEF74_000017A0:
    addic. r0, r30, 0x70
    beq lbl_fn_801EEF74_000017CC
    lwz r3, 0x74(r30)
    cmpwi r3, 0x0
    beq lbl_fn_801EEF74_000017C0
    beq lbl_fn_801EEF74_000017C0
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_801EEF74_000017C0:
    li r0, 0x0
    stw r0, 0x74(r30)
    stw r0, 0x70(r30)
lbl_fn_801EEF74_000017CC:
    addic. r0, r30, 0x68
    beq lbl_fn_801EEF74_000017F8
    lwz r3, 0x6c(r30)
    cmpwi r3, 0x0
    beq lbl_fn_801EEF74_000017EC
    beq lbl_fn_801EEF74_000017EC
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_801EEF74_000017EC:
    li r0, 0x0
    stw r0, 0x6c(r30)
    stw r0, 0x68(r30)
lbl_fn_801EEF74_000017F8:
    addi r3, r30, 0x10
    li r4, -0x1
    bl fn_801FDEE4
    addic. r0, r30, 0x4
    beq lbl_fn_801EEF74_0000181C
    lwz r3, 0xc(r30)
    cmpwi r3, 0x0
    beq lbl_fn_801EEF74_0000181C
    bl fn_80084C24
lbl_fn_801EEF74_0000181C:
    cmpwi r31, 0x0
    ble lbl_fn_801EEF74_0000182C
    mr r3, r30
    bl dtor_80084684
lbl_fn_801EEF74_0000182C:
    mr r3, r30
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801EF15C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    add r10, r7, r5
    stw r0, 0x34(r1)
    add r0, r6, r4
    add r11, r9, r0
    add r10, r8, r10
    stmw r23, 0xc(r1)
    add r30, r11, r10
    mr r23, r3
    mr r24, r4
    mr r25, r5
    mr r26, r6
    mr r27, r7
    mr r28, r8
    mr r29, r9
    lwz r0, 0x8(r3)
    cmplw r0, r30
    bgt lbl_fn_801EF15C_000019D8
    slwi r3, r30, 2
    li r4, 0x8
    la r5, lbl_8087DAE4
    la r6, lbl_8087DAE0
    li r7, 0x0
    bl fn_800846FC
    lwz r0, 0xc(r23)
    mr r31, r3
    cmpwi r0, 0x0
    beq lbl_fn_801EF15C_000019D0
    lwz r0, 0x4(r23)
    mr r4, r30
    cmplw r30, r0
    ble lbl_fn_801EF15C_000018D8
    mr r4, r0
lbl_fn_801EF15C_000018D8:
    cmpwi r4, 0x0
    li r5, 0x0
    beq lbl_fn_801EF15C_000019C8
    cmplwi r4, 0x8
    subi r8, r4, 0x8
    ble lbl_fn_801EF15C_00001998
    addi r0, r8, 0x7
    mr r7, r31
    srwi r0, r0, 3
    li r6, 0x0
    mtctr r0
    cmplwi r8, 0x0
    ble lbl_fn_801EF15C_00001998
lbl_fn_801EF15C_0000190C:
    lwz r8, 0xc(r23)
    addi r5, r5, 0x8
    lwzx r0, r8, r6
    stw r0, 0x0(r7)
    lwz r0, 0xc(r23)
    add r8, r0, r6
    lwz r0, 0x4(r8)
    stw r0, 0x4(r7)
    lwz r0, 0xc(r23)
    add r8, r0, r6
    lwz r0, 0x8(r8)
    stw r0, 0x8(r7)
    lwz r0, 0xc(r23)
    add r8, r0, r6
    lwz r0, 0xc(r8)
    stw r0, 0xc(r7)
    lwz r0, 0xc(r23)
    add r8, r0, r6
    lwz r0, 0x10(r8)
    stw r0, 0x10(r7)
    lwz r0, 0xc(r23)
    add r8, r0, r6
    lwz r0, 0x14(r8)
    stw r0, 0x14(r7)
    lwz r0, 0xc(r23)
    add r8, r0, r6
    lwz r0, 0x18(r8)
    stw r0, 0x18(r7)
    lwz r0, 0xc(r23)
    add r8, r0, r6
    addi r6, r6, 0x20
    lwz r0, 0x1c(r8)
    stw r0, 0x1c(r7)
    addi r7, r7, 0x20
    bdnz lbl_fn_801EF15C_0000190C
lbl_fn_801EF15C_00001998:
    slwi r7, r5, 2
    subf r0, r5, r4
    add r6, r3, r7
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_801EF15C_000019C8
lbl_fn_801EF15C_000019B0:
    lwz r3, 0xc(r23)
    lwzx r0, r3, r7
    addi r7, r7, 0x4
    stw r0, 0x0(r6)
    addi r6, r6, 0x4
    bdnz lbl_fn_801EF15C_000019B0
lbl_fn_801EF15C_000019C8:
    lwz r3, 0xc(r23)
    bl fn_80084C24
lbl_fn_801EF15C_000019D0:
    stw r31, 0xc(r23)
    stw r30, 0x8(r23)
lbl_fn_801EF15C_000019D8:
    add r0, r27, r26
    lwz r3, 0x94(r23)
    mulli r5, r0, 0x12c
    cmpwi r3, 0x0
    mulli r0, r25, 0x14c
    add r5, r5, r0
    mulli r4, r24, 0x214
    mulli r0, r28, 0x134
    add r0, r4, r0
    mulli r4, r29, 0x140
    add r0, r5, r0
    add r24, r4, r0
    beq lbl_fn_801EF15C_00001A10
    bl fn_80084C24
lbl_fn_801EF15C_00001A10:
    cmpwi r24, 0x0
    stw r24, 0x90(r23)
    beq lbl_fn_801EF15C_00001A3C
    mr r3, r24
    li r4, 0x8
    la r5, lbl_8087DADC
    la r6, lbl_8087DAD8
    li r7, 0x0
    bl fn_800846FC
    stw r3, 0x94(r23)
    b lbl_fn_801EF15C_00001A44
lbl_fn_801EF15C_00001A3C:
    li r0, 0x0
    stw r0, 0x94(r23)
lbl_fn_801EF15C_00001A44:
    li r0, 0x0
    stw r0, 0x98(r23)
    lmw r23, 0xc(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}
