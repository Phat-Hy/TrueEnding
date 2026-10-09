#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void DCZeroRange(void);
extern void OSDisableInterrupts(void);
extern void OSRestoreInterrupts(void);
extern void PPCMfhid2(void);
extern void _restgpr_23(void);
extern void _restgpr_24(void);
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _savegpr_23(void);
extern void _savegpr_24(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void fn_805E1300(void);
extern void fn_805E1FD0(void);
extern void fn_805E1FF0(void);
extern void fn_805E2020(void);
extern void fn_805E2250(void);
extern void fn_805E23E0(void);
extern void fn_805E2490(void);
extern void fn_805E24E0(void);
extern void fn_805E2C60(void);
extern void fn_805E2E10(void);
extern void fn_805E4960(void);
extern void fn_805E4F80(void);
extern void fn_80608020(void);
extern void fn_80695D84(void);

/* External data declarations */
extern u8 lbl_80764668[];
extern u8 lbl_8076466C[];
extern u8 lbl_80764670[];
extern u8 lbl_80764678[];
extern u8 lbl_80764680[];
extern u8 lbl_807646A8[];
extern u8 lbl_807646F8[];
extern u8 lbl_8079B858[];
extern u8 lbl_8079BC48[];
extern u8 lbl_807CA92C[];
extern u8 lbl_807CADF8[];
extern u8 lbl_807CADFC[];
extern u8 lbl_807CAE00[];

/* Small data declarations */
extern u32 lbl_8087FA40;
extern u32 lbl_8087FA44;
extern u32 lbl_8087FA48;
extern u32 lbl_808884C8;

/* Function declarations */
void fn_805E2EB0(void);
void fn_805E2FC0(void);
void fn_805E3030(void);
void fn_805E30D0(void);
void fn_805E3130(void);
void fn_805E3350(void);
void fn_805E3460(void);
void fn_805E3570(void);
void fn_805E35B0(void);
void fn_805E3660(void);
void fn_805E3670(void);
void fn_805E3760(void);
void fn_805E3880(void);
void fn_805E3910(void);
void fn_805E3940(void);
void fn_805E3960(void);
void fn_805E3DF0(void);
void fn_805E3E80(void);
void fn_805E3F20(void);
void fn_805E4070(void);
void fn_805E4080(void);
void fn_805E4090(void);
void fn_805E4360(void);
void fn_805E44A0(void);
void fn_805E45C0(void);

asm void fn_805E2EB0(void)
{
    nofralloc
    lwz r3, 0x28(r3)
    lis r7, lbl_8079B858@ha
    addi r7, r7, lbl_8079B858@l
    srawi r0, r3, 16
    addze. r3, r0
    ble lbl_fn_805E2EB0_000000A4
    lis r5, 0x1b4f
    lis r4, 0x51ec
    subi r0, r5, 0x7e4b
    addi r6, r7, 0x0
    mulhw r0, r0, r3
    subi r8, r4, 0x7ae1
    addi r5, r7, 0x190
    addi r4, r7, 0x1c0
    srawi r9, r0, 7
    srawi r0, r0, 7
    srwi r7, r0, 31
    srwi r10, r9, 31
    add r0, r0, r7
    mulli r7, r0, 0x4b0
    add r0, r9, r10
    slwi r0, r0, 2
    subf r7, r7, r3
    lfsx f1, r5, r0
    mulhw r0, r8, r7
    srawi r5, r0, 5
    mulhw r0, r8, r3
    srwi r7, r5, 31
    add r7, r5, r7
    srawi r5, r0, 5
    slwi r0, r7, 2
    lfsx f0, r4, r0
    srwi r7, r5, 31
    add r0, r5, r7
    mulli r0, r0, 0x64
    fmuls f1, f1, f0
    subf r3, r0, r3
    slwi r0, r3, 2
    lfsx f0, r6, r0
    fmuls f1, f0, f1
    blr
lbl_fn_805E2EB0_000000A4:
    bge lbl_fn_805E2EB0_00000104
    lis r4, 0x51ec
    subi r0, r4, 0x7ae1
    mulhw r0, r0, r3
    srawi r5, r0, 5
    srawi r0, r0, 5
    srwi r4, r0, 31
    srwi r6, r5, 31
    add r0, r0, r4
    mulli r0, r0, 0x64
    add r4, r5, r6
    subf. r3, r0, r3
    beq lbl_fn_805E2EB0_000000E0
    addi r3, r3, 0x64
    subi r4, r4, 0x1
lbl_fn_805E2EB0_000000E0:
    slwi r0, r4, 2
    addi r4, r7, 0x1f0
    neg r5, r0
    slwi r0, r3, 2
    addi r3, r7, 0x0
    lfsx f1, r4, r5
    lfsx f0, r3, r0
    fmuls f1, f1, f0
    blr
lbl_fn_805E2EB0_00000104:
    lis r3, lbl_80764668@ha
    lfs f1, lbl_80764668@l(r3)
    blr
}

asm void fn_805E2FC0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    lis r0, 0x4330
    lis r5, lbl_80764670@ha
    lis r4, lbl_8076466C@ha
    lwz r6, 0x18(r3)
    stw r0, 0x8(r1)
    lhz r6, 0x2(r6)
    stw r6, 0xc(r1)
    lfd f2, lbl_80764670@l(r5)
    lfd f1, 0x8(r1)
    lfs f0, lbl_8076466C@l(r4)
    fsubs f1, f1, f2
    lwz r5, 0x10(r3)
    lbz r0, 0xd(r3)
    fdivs f0, f1, f0
    stfs f0, 0x24(r3)
    lbz r4, 0x0(r5)
    subf r0, r4, r0
    mulli r4, r0, 0x64
    stw r4, 0x28(r3)
    lha r0, 0x2(r5)
    add r0, r4, r0
    slwi r0, r0, 16
    stw r0, 0x28(r3)
    addi r1, r1, 0x10
    blr
}

asm void fn_805E3030(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_805E2EB0
    lfs f2, 0x24(r31)
    lis r3, lbl_80764678@ha
    lfs f0, lbl_80764678@l(r3)
    fmuls f1, f2, f1
    fmuls f1, f0, f1
    bl fn_80695D84
    lwz r5, 0x4(r31)
    li r6, 0x1
    srwi r4, r3, 16
    li r0, 0x0
    sth r6, 0x30(r5)
    lwz r5, 0x4(r31)
    sth r4, 0xce(r5)
    sth r3, 0xd0(r5)
    sth r0, 0xd2(r5)
    sth r0, 0xd4(r5)
    sth r0, 0xd6(r5)
    sth r0, 0xd8(r5)
    sth r0, 0xda(r5)
    lwz r3, 0x4(r31)
    lwz r0, 0x1c(r3)
    rlwinm r0, r0, 0, 15, 13
    stw r0, 0x1c(r3)
    lwz r3, 0x4(r31)
    lwz r0, 0x1c(r3)
    oris r0, r0, 0x1
    ori r0, r0, 0x1
    stw r0, 0x1c(r3)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805E30D0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_805E2EB0
    lfs f2, 0x24(r31)
    lis r3, lbl_80764678@ha
    lfs f0, lbl_80764678@l(r3)
    fmuls f1, f2, f1
    fmuls f1, f0, f1
    bl fn_80695D84
    lwz r4, 0x4(r31)
    stw r3, 0xce(r4)
    lwz r3, 0x4(r31)
    lwz r0, 0x1c(r3)
    oris r0, r0, 0x2
    stw r0, 0x1c(r3)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805E3130(void)
{
    nofralloc
    lwz r6, 0x10(r3)
    lwz r4, 0x4(r3)
    lwz r5, 0x8(r6)
    lwz r0, 0xc(r6)
    add. r0, r5, r0
    beq lbl_fn_805E3130_000003C0
    li r0, 0x1
    stw r0, 0x20(r3)
    lis r5, 0x2492
    lwz r10, 0x8(r3)
    lwz r0, 0x8(r6)
    addi r5, r5, 0x4925
    lwz r7, 0xc(r6)
    lis r8, 0x1
    mulhwu r6, r5, r0
    lwz r9, 0x18(r3)
    add r7, r0, r7
    lwz r10, 0x24(r10)
    lwz r9, 0x4(r9)
    subi r11, r7, 0x1
    mulhwu r7, r5, r11
    subf r5, r6, r0
    lwz r3, 0x1c(r3)
    add r10, r10, r9
    srwi r5, r5, 1
    stw r8, 0x96(r4)
    add r8, r5, r6
    subf r6, r7, r11
    srwi r9, r8, 3
    addi r5, r10, 0x2
    srwi r6, r6, 1
    extlwi r8, r8, 28, 1
    add r6, r6, r7
    srwi r7, r6, 3
    mulli r9, r9, 0xe
    extlwi r6, r6, 28, 1
    subf r0, r9, r0
    add r0, r0, r10
    mulli r7, r7, 0xe
    add r8, r0, r8
    subf r0, r7, r11
    addi r7, r8, 0x2
    stw r7, 0x9a(r4)
    add r0, r0, r10
    add r6, r0, r6
    addi r0, r6, 0x2
    stw r0, 0x9e(r4)
    stw r5, 0xa2(r4)
    lwz r0, 0x0(r3)
    stw r0, 0xa6(r4)
    lwz r0, 0x4(r3)
    stw r0, 0xaa(r4)
    lwz r0, 0x8(r3)
    stw r0, 0xae(r4)
    lwz r0, 0xc(r3)
    stw r0, 0xb2(r4)
    lwz r0, 0x10(r3)
    stw r0, 0xb6(r4)
    lwz r0, 0x14(r3)
    stw r0, 0xba(r4)
    lwz r0, 0x18(r3)
    stw r0, 0xbe(r4)
    lwz r0, 0x1c(r3)
    stw r0, 0xc2(r4)
    lwz r0, 0x20(r3)
    stw r0, 0xc6(r4)
    lwz r0, 0x24(r3)
    stw r0, 0xca(r4)
    lhz r0, 0x28(r3)
    sth r0, 0xdc(r4)
    lhz r0, 0x2a(r3)
    sth r0, 0xde(r4)
    lhz r0, 0x2c(r3)
    sth r0, 0xe0(r4)
    lwz r0, 0x1c(r4)
    rlwinm r0, r0, 0, 21, 16
    oris r0, r0, 0x4
    ori r0, r0, 0x8400
    stw r0, 0x1c(r4)
    blr
lbl_fn_805E3130_000003C0:
    li r7, 0x0
    stw r7, 0x20(r3)
    lis r5, 0x2492
    lwz r9, 0x18(r3)
    addi r0, r5, 0x4925
    lwz r6, 0x8(r3)
    lwz r5, 0x8(r9)
    lwz r3, 0x1c(r3)
    subi r8, r5, 0x1
    lwz r5, 0x24(r6)
    mulhwu r6, r0, r8
    lwz r0, 0x4(r9)
    add r9, r5, r0
    stw r7, 0x96(r4)
    stw r9, 0x9a(r4)
    addi r0, r9, 0x2
    subf r5, r6, r8
    srwi r5, r5, 1
    add r6, r5, r6
    srwi r5, r6, 3
    mulli r7, r5, 0xe
    extlwi r5, r6, 28, 1
    subf r6, r7, r8
    add r6, r6, r9
    add r5, r6, r5
    addi r5, r5, 0x2
    stw r5, 0x9e(r4)
    stw r0, 0xa2(r4)
    lwz r0, 0x0(r3)
    stw r0, 0xa6(r4)
    lwz r0, 0x4(r3)
    stw r0, 0xaa(r4)
    lwz r0, 0x8(r3)
    stw r0, 0xae(r4)
    lwz r0, 0xc(r3)
    stw r0, 0xb2(r4)
    lwz r0, 0x10(r3)
    stw r0, 0xb6(r4)
    lwz r0, 0x14(r3)
    stw r0, 0xba(r4)
    lwz r0, 0x18(r3)
    stw r0, 0xbe(r4)
    lwz r0, 0x1c(r3)
    stw r0, 0xc2(r4)
    lwz r0, 0x20(r3)
    stw r0, 0xc6(r4)
    lwz r0, 0x24(r3)
    stw r0, 0xca(r4)
    lwz r0, 0x1c(r4)
    rlwinm r0, r0, 0, 21, 16
    ori r0, r0, 0x8400
    stw r0, 0x1c(r4)
    blr
}

asm void fn_805E3350(void)
{
    nofralloc
    lwz r10, 0x10(r3)
    lwz r4, 0x4(r3)
    lwz r5, 0x8(r10)
    lwz r0, 0xc(r10)
    add. r0, r5, r0
    beq lbl_fn_805E3350_00000534
    li r0, 0x1
    stw r0, 0x20(r3)
    lwz r7, 0x8(r3)
    lis r5, 0x1
    lwz r6, 0x18(r3)
    addi r5, r5, 0xa
    lwz r9, 0x1c(r7)
    li r3, 0x0
    lwz r8, 0x4(r6)
    lis r0, 0x800
    lwz r7, 0x8(r10)
    lwz r6, 0xc(r10)
    add r8, r9, r8
    add r7, r8, r7
    stw r5, 0x96(r4)
    add r5, r7, r6
    subi r5, r5, 0x1
    stw r7, 0x9a(r4)
    stw r5, 0x9e(r4)
    stw r8, 0xa2(r4)
    stw r3, 0xa6(r4)
    stw r3, 0xaa(r4)
    stw r3, 0xae(r4)
    stw r3, 0xb2(r4)
    stw r3, 0xb6(r4)
    stw r3, 0xba(r4)
    stw r3, 0xbe(r4)
    stw r3, 0xc2(r4)
    stw r0, 0xc6(r4)
    stw r3, 0xca(r4)
    b lbl_fn_805E3350_0000059C
lbl_fn_805E3350_00000534:
    li r8, 0x0
    stw r8, 0x20(r3)
    lwz r9, 0x18(r3)
    li r5, 0xa
    lwz r3, 0x8(r3)
    lis r0, 0x800
    lwz r6, 0x4(r9)
    lwz r7, 0x1c(r3)
    lwz r3, 0x8(r9)
    add r6, r7, r6
    stw r5, 0x96(r4)
    add r3, r6, r3
    subi r3, r3, 0x1
    stw r6, 0x9a(r4)
    stw r3, 0x9e(r4)
    stw r6, 0xa2(r4)
    stw r8, 0xa6(r4)
    stw r8, 0xaa(r4)
    stw r8, 0xae(r4)
    stw r8, 0xb2(r4)
    stw r8, 0xb6(r4)
    stw r8, 0xba(r4)
    stw r8, 0xbe(r4)
    stw r8, 0xc2(r4)
    stw r0, 0xc6(r4)
    stw r8, 0xca(r4)
lbl_fn_805E3350_0000059C:
    lwz r0, 0x1c(r4)
    rlwinm r0, r0, 0, 21, 16
    ori r0, r0, 0x8400
    stw r0, 0x1c(r4)
    blr
}

asm void fn_805E3460(void)
{
    nofralloc
    lwz r10, 0x10(r3)
    lwz r4, 0x4(r3)
    lwz r5, 0x8(r10)
    lwz r0, 0xc(r10)
    add. r0, r5, r0
    beq lbl_fn_805E3460_00000644
    li r0, 0x1
    stw r0, 0x20(r3)
    lwz r7, 0x8(r3)
    lis r5, 0x1
    lwz r6, 0x18(r3)
    addi r5, r5, 0x19
    lwz r9, 0x20(r7)
    li r3, 0x0
    lwz r8, 0x4(r6)
    lis r0, 0x100
    lwz r7, 0x8(r10)
    lwz r6, 0xc(r10)
    add r8, r9, r8
    add r7, r8, r7
    stw r5, 0x96(r4)
    add r5, r7, r6
    subi r5, r5, 0x1
    stw r7, 0x9a(r4)
    stw r5, 0x9e(r4)
    stw r8, 0xa2(r4)
    stw r3, 0xa6(r4)
    stw r3, 0xaa(r4)
    stw r3, 0xae(r4)
    stw r3, 0xb2(r4)
    stw r3, 0xb6(r4)
    stw r3, 0xba(r4)
    stw r3, 0xbe(r4)
    stw r3, 0xc2(r4)
    stw r0, 0xc6(r4)
    stw r3, 0xca(r4)
    b lbl_fn_805E3460_000006AC
lbl_fn_805E3460_00000644:
    li r8, 0x0
    stw r8, 0x20(r3)
    lwz r9, 0x18(r3)
    li r5, 0x19
    lwz r3, 0x8(r3)
    lis r0, 0x100
    lwz r6, 0x4(r9)
    lwz r7, 0x20(r3)
    lwz r3, 0x8(r9)
    add r6, r7, r6
    stw r5, 0x96(r4)
    add r3, r6, r3
    subi r3, r3, 0x1
    stw r6, 0x9a(r4)
    stw r3, 0x9e(r4)
    stw r6, 0xa2(r4)
    stw r8, 0xa6(r4)
    stw r8, 0xaa(r4)
    stw r8, 0xae(r4)
    stw r8, 0xb2(r4)
    stw r8, 0xb6(r4)
    stw r8, 0xba(r4)
    stw r8, 0xbe(r4)
    stw r8, 0xc2(r4)
    stw r0, 0xc6(r4)
    stw r8, 0xca(r4)
lbl_fn_805E3460_000006AC:
    lwz r0, 0x1c(r4)
    rlwinm r0, r0, 0, 21, 16
    ori r0, r0, 0x8400
    stw r0, 0x1c(r4)
    blr
}

asm void fn_805E3570(void)
{
    nofralloc
    lwz r4, 0x18(r3)
    lhz r0, 0x0(r4)
    cmpwi r0, 0x0
    beq lbl_fn_805E3570_000006E4
    cmpwi r0, 0x1
    beq lbl_fn_805E3570_000006E8
    cmpwi r0, 0x2
    beq lbl_fn_805E3570_000006EC
    blr
lbl_fn_805E3570_000006E4:
    b fn_805E3130
lbl_fn_805E3570_000006E8:
    b fn_805E3350
lbl_fn_805E3570_000006EC:
    b fn_805E3460
    blr
}

asm void fn_805E35B0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    lwz r30, 0x14(r3)
    lwz r3, 0x18(r3)
    bl fn_805E1FD0
    mr r29, r3
    bl fn_805E1FF0
    lis r4, lbl_807CA92C@ha
    mr r3, r31
    mulli r0, r29, 0x4c
    lwz r4, lbl_807CA92C@l(r4)
    add r31, r4, r0
    bl fn_805E1300
    lbz r3, 0xc(r31)
    lbz r0, 0xd(r31)
    slwi r3, r3, 9
    add r3, r30, r3
    slwi r0, r0, 2
    add r3, r3, r0
    lwz r0, 0x408(r3)
    cmplw r0, r31
    bne lbl_fn_805E35B0_00000774
    li r0, 0x0
    stw r0, 0x408(r3)
lbl_fn_805E35B0_00000774:
    li r0, 0x0
    stw r0, 0x8(r31)
    lwz r3, 0x404(r30)
    subi r0, r3, 0x1
    stw r0, 0x404(r30)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805E3660(void)
{
    nofralloc
    li r0, 0x3
    stw r0, 0x30(r3)
    blr
}

asm void fn_805E3670(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_807CA92C@ha
    stw r0, 0x14(r1)
    mulli r0, r3, 0x4c
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    lwz r3, lbl_807CA92C@l(r4)
    add r30, r3, r0
    lwz r31, 0x8(r30)
    cmpwi r31, 0x0
    beq lbl_fn_805E3670_00000898
    lwz r0, 0x20(r30)
    cmpwi r0, 0x0
    bne lbl_fn_805E3670_00000840
    lwz r3, 0x4(r30)
    lhz r0, 0x38(r3)
    cmpwi r0, 0x0
    bne lbl_fn_805E3670_00000840
    lbz r3, 0xc(r30)
    lbz r0, 0xd(r30)
    slwi r3, r3, 9
    add r3, r31, r3
    slwi r0, r0, 2
    add r3, r3, r0
    lwz r0, 0x408(r3)
    cmplw r0, r30
    bne lbl_fn_805E3670_00000838
    li r0, 0x0
    stw r0, 0x408(r3)
lbl_fn_805E3670_00000838:
    li r0, 0x4
    stw r0, 0x30(r30)
lbl_fn_805E3670_00000840:
    mr r3, r30
    bl fn_805E2C60
    lwz r0, 0x30(r30)
    cmplwi r0, 0x4
    bne lbl_fn_805E3670_00000888
    li r0, 0x0
    stw r0, 0x8(r30)
    lwz r3, 0x4(r30)
    bl fn_805E1300
    lwz r3, 0x4(r30)
    lwz r3, 0x18(r3)
    bl fn_805E2020
    lwz r3, 0x4(r30)
    bl fn_80608020
    lwz r3, 0x404(r31)
    subi r0, r3, 0x1
    stw r0, 0x404(r31)
    b lbl_fn_805E3670_00000898
lbl_fn_805E3670_00000888:
    mr r3, r30
    bl fn_805E2E10
    mr r3, r30
    bl fn_805E30D0
lbl_fn_805E3670_00000898:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805E3760(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r11, r1, 0x30
    stfd f31, 0x60(r1)
    psq_st f31, 0x68(r1), 0, 0
    stfd f30, 0x50(r1)
    psq_st f30, 0x58(r1), 0, 0
    stfd f29, 0x40(r1)
    psq_st f29, 0x48(r1), 0, 0
    stfd f28, 0x30(r1)
    psq_st f28, 0x38(r1), 0, 0
    bl _savegpr_25
    lis r6, lbl_80764680@ha
    mr r25, r3
    addi r6, r6, lbl_80764680@l
    mr r28, r4
    lfd f28, 0x10(r6)
    mr r26, r5
    lfs f29, 0x8(r6)
    addi r29, r3, 0x241c
    lfs f30, 0x4(r6)
    lis r30, 0x4330
    lfs f31, 0x0(r6)
    li r31, 0x0
    b lbl_fn_805E3760_0000098C
lbl_fn_805E3760_00000918:
    lwz r3, 0x0(r28)
    lwz r27, 0x4(r28)
    addi r28, r28, 0x8
    subis r0, r3, 0x4d54
    cmplwi r0, 0x726b
    bne lbl_fn_805E3760_0000097C
    stw r25, 0x0(r29)
    add r0, r28, r27
    stw r28, 0x4(r29)
    stw r0, 0x8(r29)
    stw r28, 0xc(r29)
    lha r0, 0xa(r25)
    stw r30, 0x8(r1)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f28
    fdivs f0, f29, f0
    fdivs f0, f30, f0
    fmuls f1, f31, f0
    bl fn_80695D84
    stw r3, 0x18(r29)
    add r28, r28, r27
    stw r31, 0x24(r29)
    b lbl_fn_805E3760_00000984
lbl_fn_805E3760_0000097C:
    add r28, r28, r27
    b lbl_fn_805E3760_00000918
lbl_fn_805E3760_00000984:
    subi r26, r26, 0x1
    addi r29, r29, 0x28
lbl_fn_805E3760_0000098C:
    cmpwi r26, 0x0
    bne lbl_fn_805E3760_00000918
    addi r11, r1, 0x30
    psq_l f31, 0x68(r1), 0, 0
    lfd f31, 0x60(r1)
    psq_l f30, 0x58(r1), 0, 0
    lfd f30, 0x50(r1)
    psq_l f29, 0x48(r1), 0, 0
    lfd f29, 0x40(r1)
    psq_l f28, 0x38(r1), 0, 0
    lfd f28, 0x30(r1)
    bl _restgpr_25
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_805E3880(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    addi r6, r4, 0xe
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lhz r7, 0x8(r4)
    lwz r0, 0x4(r4)
    lhz r5, 0xa(r4)
    cmpwi r7, 0x0
    sth r5, 0x8(r3)
    add r6, r0, r6
    subi r6, r6, 0x6
    lha r0, 0xc(r4)
    sth r0, 0xa(r3)
    beq lbl_fn_805E3880_00000A1C
    cmplwi r7, 0x1
    beq lbl_fn_805E3880_00000A34
    b lbl_fn_805E3880_00000A3C
lbl_fn_805E3880_00000A1C:
    li r0, 0x1
    sth r0, 0x8(r3)
    mr r4, r6
    li r5, 0x1
    bl fn_805E3760
    b lbl_fn_805E3880_00000A3C
lbl_fn_805E3880_00000A34:
    mr r4, r6
    bl fn_805E3760
lbl_fn_805E3880_00000A3C:
    lhz r0, 0x8(r31)
    stw r0, 0xc(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805E3910(void)
{
    nofralloc
    lis r5, lbl_807CADFC@ha
    lwz r0, lbl_807CADFC@l(r5)
    cmpwi r0, 0x0
    bnelr
    lis r3, lbl_807CADF8@ha
    li r4, 0x0
    li r0, 0x1
    stw r4, lbl_807CADF8@l(r3)
    stw r0, lbl_807CADFC@l(r5)
    blr
}

asm void fn_805E3940(void)
{
    nofralloc
    lis r4, lbl_807CADF8@ha
    lis r3, lbl_807CADFC@ha
    li r0, 0x0
    stw r0, lbl_807CADF8@l(r4)
    stw r0, lbl_807CADFC@l(r3)
    blr
}

asm void fn_805E3960(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    addi r11, r1, 0x40
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
    bl _savegpr_24
    lis r3, lbl_807CADFC@ha
    lis r4, lbl_807CADF8@ha
    lwz r0, lbl_807CADFC@l(r3)
    lis r3, lbl_80764680@ha
    lwz r26, lbl_807CADF8@l(r4)
    addi r3, r3, lbl_80764680@l
    cmpwi r0, 0x0
    bne lbl_fn_805E3960_00000B18
    b lbl_fn_805E3960_00000EF8
lbl_fn_805E3960_00000B18:
    lis r31, lbl_8079BC48@ha
    lfd f26, 0x20(r3)
    lfs f27, 0x18(r3)
    addi r31, r31, lbl_8079BC48@l
    lfs f28, 0x1c(r3)
    lis r30, 0x4330
    lfd f29, 0x10(r3)
    li r29, 0x1
    lfs f30, 0x4(r3)
    li r28, 0x0
    lfs f31, 0x0(r3)
    b lbl_fn_805E3960_00000EF0
lbl_fn_805E3960_00000B48:
    lwz r3, 0x4(r26)
    subi r0, r3, 0x1
    cmplwi r0, 0x1
    bgt lbl_fn_805E3960_00000EAC
    addi r27, r26, 0x241c
    li r25, 0x0
    b lbl_fn_805E3960_00000EA0
lbl_fn_805E3960_00000B64:
    lwz r3, 0x24(r27)
    subi r0, r3, 0x1
    cmplwi r0, 0x1
    bgt lbl_fn_805E3960_00000E98
    lwz r24, 0x1c(r27)
    lwz r0, 0x20(r27)
    cmplw r0, r24
    ble lbl_fn_805E3960_00000E80
    subf r0, r24, r0
    stw r0, 0x20(r27)
    b lbl_fn_805E3960_00000E98
    b lbl_fn_805E3960_00000E80
lbl_fn_805E3960_00000B94:
    lwz r3, 0xc(r27)
    subf r24, r0, r24
    lbz r0, 0x0(r3)
    cmplwi r0, 0x80
    blt lbl_fn_805E3960_00000BB8
    stb r0, 0x10(r27)
    lwz r3, 0xc(r27)
    addi r0, r3, 0x1
    stw r0, 0xc(r27)
lbl_fn_805E3960_00000BB8:
    lbz r0, 0x10(r27)
    cmpwi r0, 0xf0
    beq lbl_fn_805E3960_00000BD8
    cmpwi r0, 0xf7
    beq lbl_fn_805E3960_00000BD8
    cmpwi r0, 0xff
    beq lbl_fn_805E3960_00000C20
    b lbl_fn_805E3960_00000D80
lbl_fn_805E3960_00000BD8:
    lwz r3, 0xc(r27)
    lbz r4, 0x0(r3)
    clrlwi r5, r4, 25
    b lbl_fn_805E3960_00000C04
lbl_fn_805E3960_00000BE8:
    lwz r4, 0xc(r27)
    slwi r3, r5, 7
    addi r4, r4, 0x1
    stw r4, 0xc(r27)
    lbz r4, 0x0(r4)
    clrlwi r0, r4, 25
    add r5, r3, r0
lbl_fn_805E3960_00000C04:
    rlwinm. r0, r4, 0, 24, 24
    bne lbl_fn_805E3960_00000BE8
    lwz r3, 0xc(r27)
    addi r0, r3, 0x1
    add r0, r0, r5
    stw r0, 0xc(r27)
    b lbl_fn_805E3960_00000DF4
lbl_fn_805E3960_00000C20:
    lwz r3, 0xc(r27)
    lbz r4, 0x0(r3)
    addi r0, r3, 0x1
    cmpwi r4, 0x2f
    stw r0, 0xc(r27)
    beq lbl_fn_805E3960_00000C44
    cmpwi r4, 0x51
    beq lbl_fn_805E3960_00000C6C
    b lbl_fn_805E3960_00000D34
lbl_fn_805E3960_00000C44:
    lwz r4, 0x0(r27)
    lwz r3, 0xc(r4)
    subi r0, r3, 0x1
    stw r0, 0xc(r4)
    stw r28, 0x24(r27)
    lwz r0, 0xc(r4)
    cmpwi r0, 0x0
    bne lbl_fn_805E3960_00000DF4
    stw r29, 0x10(r4)
    b lbl_fn_805E3960_00000DF4
lbl_fn_805E3960_00000C6C:
    lwz r3, 0xc(r27)
    lbz r4, 0x0(r3)
    clrlwi r3, r4, 25
    b lbl_fn_805E3960_00000C9C
    nop
lbl_fn_805E3960_00000C80:
    lwz r4, 0xc(r27)
    slwi r3, r3, 7
    addi r4, r4, 0x1
    stw r4, 0xc(r27)
    lbz r4, 0x0(r4)
    clrlwi r0, r4, 25
    add r3, r3, r0
lbl_fn_805E3960_00000C9C:
    rlwinm. r0, r4, 0, 24, 24
    bne lbl_fn_805E3960_00000C80
    lwz r3, 0xc(r27)
    stw r30, 0x10(r1)
    addi r5, r3, 0x1
    stw r5, 0xc(r27)
    addi r4, r5, 0x1
    addi r3, r4, 0x1
    lbz r5, 0x0(r5)
    addi r0, r3, 0x1
    stw r30, 0x18(r1)
    slwi r5, r5, 8
    stw r4, 0xc(r27)
    lbz r4, 0x0(r4)
    stw r3, 0xc(r27)
    add r4, r5, r4
    slwi r4, r4, 8
    lbz r3, 0x0(r3)
    add r3, r4, r3
    stw r3, 0x14(r1)
    lfd f0, 0x10(r1)
    stw r0, 0xc(r27)
    fsubs f0, f0, f26
    lwz r3, 0x0(r27)
    fdivs f0, f27, f0
    stfs f0, 0x14(r27)
    fdivs f1, f28, f0
    lha r0, 0xa(r3)
    xoris r0, r0, 0x8000
    stw r0, 0x1c(r1)
    lfd f0, 0x18(r1)
    fsubs f0, f0, f29
    fdivs f0, f1, f0
    fdivs f0, f30, f0
    fmuls f1, f31, f0
    bl fn_80695D84
    stw r3, 0x1c(r27)
    b lbl_fn_805E3960_00000DF4
lbl_fn_805E3960_00000D34:
    lwz r3, 0xc(r27)
    lbz r4, 0x0(r3)
    clrlwi r5, r4, 25
    b lbl_fn_805E3960_00000D64
    nop
lbl_fn_805E3960_00000D48:
    lwz r4, 0xc(r27)
    slwi r3, r5, 7
    addi r4, r4, 0x1
    stw r4, 0xc(r27)
    lbz r4, 0x0(r4)
    clrlwi r0, r4, 25
    add r5, r3, r0
lbl_fn_805E3960_00000D64:
    rlwinm. r0, r4, 0, 24, 24
    bne lbl_fn_805E3960_00000D48
    lwz r3, 0xc(r27)
    addi r0, r3, 0x1
    add r0, r0, r5
    stw r0, 0xc(r27)
    b lbl_fn_805E3960_00000DF4
lbl_fn_805E3960_00000D80:
    add r3, r31, r0
    stb r0, 0x8(r1)
    lbz r0, -0x80(r3)
    cmplwi r0, 0x1
    beq lbl_fn_805E3960_00000DA0
    cmplwi r0, 0x2
    beq lbl_fn_805E3960_00000DBC
    b lbl_fn_805E3960_00000DE8
lbl_fn_805E3960_00000DA0:
    lwz r3, 0xc(r27)
    lbz r0, 0x0(r3)
    stb r0, 0x9(r1)
    lwz r3, 0xc(r27)
    addi r0, r3, 0x1
    stw r0, 0xc(r27)
    b lbl_fn_805E3960_00000DE8
lbl_fn_805E3960_00000DBC:
    lwz r3, 0xc(r27)
    lbz r0, 0x0(r3)
    stb r0, 0x9(r1)
    lwz r3, 0xc(r27)
    addi r3, r3, 0x1
    stw r3, 0xc(r27)
    lbz r0, 0x0(r3)
    stb r0, 0xa(r1)
    lwz r3, 0xc(r27)
    addi r0, r3, 0x1
    stw r0, 0xc(r27)
lbl_fn_805E3960_00000DE8:
    addi r3, r26, 0x14
    addi r4, r1, 0x8
    bl fn_805E2490
lbl_fn_805E3960_00000DF4:
    lwz r3, 0xc(r27)
    lwz r0, 0x8(r27)
    cmplw r3, r0
    blt lbl_fn_805E3960_00000E28
    lwz r4, 0x0(r27)
    lwz r3, 0xc(r4)
    subi r0, r3, 0x1
    stw r0, 0xc(r4)
    stw r28, 0x24(r27)
    lwz r0, 0xc(r4)
    cmpwi r0, 0x0
    bne lbl_fn_805E3960_00000E28
    stw r29, 0x10(r4)
lbl_fn_805E3960_00000E28:
    lwz r0, 0x24(r27)
    cmpwi r0, 0x0
    beq lbl_fn_805E3960_00000E8C
    lwz r3, 0xc(r27)
    lbz r4, 0x0(r3)
    clrlwi r5, r4, 25
    b lbl_fn_805E3960_00000E64
    nop
lbl_fn_805E3960_00000E48:
    lwz r4, 0xc(r27)
    slwi r3, r5, 7
    addi r4, r4, 0x1
    stw r4, 0xc(r27)
    lbz r4, 0x0(r4)
    clrlwi r0, r4, 25
    add r5, r3, r0
lbl_fn_805E3960_00000E64:
    rlwinm. r0, r4, 0, 24, 24
    bne lbl_fn_805E3960_00000E48
    lwz r3, 0xc(r27)
    slwi r0, r5, 16
    addi r3, r3, 0x1
    stw r3, 0xc(r27)
    stw r0, 0x20(r27)
lbl_fn_805E3960_00000E80:
    lwz r0, 0x20(r27)
    cmplw r24, r0
    bge lbl_fn_805E3960_00000B94
lbl_fn_805E3960_00000E8C:
    lwz r0, 0x20(r27)
    subf r0, r24, r0
    stw r0, 0x20(r27)
lbl_fn_805E3960_00000E98:
    addi r27, r27, 0x28
    addi r25, r25, 0x1
lbl_fn_805E3960_00000EA0:
    lhz r0, 0x8(r26)
    cmplw r25, r0
    blt lbl_fn_805E3960_00000B64
lbl_fn_805E3960_00000EAC:
    lwz r0, 0x10(r26)
    cmpwi r0, 0x0
    beq lbl_fn_805E3960_00000EEC
    lwz r0, 0x4(r26)
    cmplwi r0, 0x2
    bne lbl_fn_805E3960_00000EE0
    mr r3, r26
    li r4, 0x0
    bl fn_805E3F20
    mr r3, r26
    li r4, 0x2
    bl fn_805E3F20
    b lbl_fn_805E3960_00000EEC
lbl_fn_805E3960_00000EE0:
    mr r3, r26
    li r4, 0x0
    bl fn_805E3F20
lbl_fn_805E3960_00000EEC:
    lwz r26, 0x0(r26)
lbl_fn_805E3960_00000EF0:
    cmpwi r26, 0x0
    bne lbl_fn_805E3960_00000B48
lbl_fn_805E3960_00000EF8:
    addi r11, r1, 0x40
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
    bl _restgpr_24
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_805E3DF0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    mr r4, r5
    mr r5, r6
    stw r29, 0x14(r1)
    mr r29, r3
    mr r6, r7
    addi r3, r3, 0x14
    bl fn_805E2250
    li r31, 0x0
    stw r31, 0x4(r29)
    mr r3, r29
    mr r4, r30
    bl fn_805E3880
    bl OSDisableInterrupts
    lis r4, lbl_807CADF8@ha
    lwz r0, lbl_807CADF8@l(r4)
    cmpwi r0, 0x0
    beq lbl_fn_805E3DF0_00000FA4
    stw r0, 0x0(r29)
    b lbl_fn_805E3DF0_00000FA8
lbl_fn_805E3DF0_00000FA4:
    stw r31, 0x0(r29)
lbl_fn_805E3DF0_00000FA8:
    lis r4, lbl_807CADF8@ha
    stw r29, lbl_807CADF8@l(r4)
    bl OSRestoreInterrupts
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805E3E80(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    mr r26, r3
    bl OSDisableInterrupts
    lis r30, lbl_807CADF8@ha
    li r31, 0x0
    lwz r28, lbl_807CADF8@l(r30)
    mr r27, r3
    stw r31, lbl_807CADF8@l(r30)
    b lbl_fn_805E3E80_00001038
lbl_fn_805E3E80_00001004:
    cmplw r28, r26
    lwz r29, 0x0(r28)
    beq lbl_fn_805E3E80_00001034
    bl OSDisableInterrupts
    lwz r0, lbl_807CADF8@l(r30)
    cmpwi r0, 0x0
    beq lbl_fn_805E3E80_00001028
    stw r0, 0x0(r28)
    b lbl_fn_805E3E80_0000102C
lbl_fn_805E3E80_00001028:
    stw r31, 0x0(r28)
lbl_fn_805E3E80_0000102C:
    stw r28, lbl_807CADF8@l(r30)
    bl OSRestoreInterrupts
lbl_fn_805E3E80_00001034:
    mr r28, r29
lbl_fn_805E3E80_00001038:
    cmpwi r28, 0x0
    bne lbl_fn_805E3E80_00001004
    mr r3, r27
    bl OSRestoreInterrupts
    addi r3, r26, 0x14
    bl fn_805E23E0
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805E3F20(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    subi r0, r4, 0x1
    mr r30, r3
    cmplwi r0, 0x1
    mr r31, r4
    ble lbl_fn_805E3F20_000010AC
    cmpwi r4, 0x0
    beq lbl_fn_805E3F20_00001154
    cmplwi r4, 0x3
    beq lbl_fn_805E3F20_00001154
    b lbl_fn_805E3F20_00001198
lbl_fn_805E3F20_000010AC:
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_805E3F20_00001148
    bl OSDisableInterrupts
    addi r7, r30, 0x241c
    li r9, 0x0
    li r0, 0x1
    b lbl_fn_805E3F20_00001134
    nop
lbl_fn_805E3F20_000010D0:
    lwz r5, 0x4(r7)
    stw r5, 0xc(r7)
    lwz r4, 0x18(r7)
    stw r4, 0x1c(r7)
    lbz r8, 0x0(r5)
    clrlwi r6, r8, 25
    b lbl_fn_805E3F20_0000110C
    nop
lbl_fn_805E3F20_000010F0:
    lwz r4, 0xc(r7)
    slwi r5, r6, 7
    addi r4, r4, 0x1
    stw r4, 0xc(r7)
    lbz r8, 0x0(r4)
    clrlwi r4, r8, 25
    add r6, r5, r4
lbl_fn_805E3F20_0000110C:
    rlwinm. r4, r8, 0, 24, 24
    bne lbl_fn_805E3F20_000010F0
    lwz r5, 0xc(r7)
    slwi r4, r6, 16
    addi r9, r9, 0x1
    addi r5, r5, 0x1
    stw r5, 0xc(r7)
    stw r4, 0x20(r7)
    stw r0, 0x24(r7)
    addi r7, r7, 0x28
lbl_fn_805E3F20_00001134:
    lhz r4, 0x8(r30)
    cmpw r9, r4
    blt lbl_fn_805E3F20_000010D0
    stw r4, 0xc(r30)
    bl OSRestoreInterrupts
lbl_fn_805E3F20_00001148:
    li r0, 0x0
    stw r0, 0x10(r30)
    b lbl_fn_805E3F20_00001198
lbl_fn_805E3F20_00001154:
    li r27, 0x0
    li r28, 0x7b
    li r29, 0x0
lbl_fn_805E3F20_00001160:
    bl OSDisableInterrupts
    ori r0, r27, 0xb0
    stb r0, 0x8(r1)
    mr r26, r3
    addi r3, r30, 0x14
    stb r28, 0x9(r1)
    addi r4, r1, 0x8
    stb r29, 0xa(r1)
    bl fn_805E2490
    mr r3, r26
    bl OSRestoreInterrupts
    addi r27, r27, 0x1
    cmpwi r27, 0x10
    blt lbl_fn_805E3F20_00001160
lbl_fn_805E3F20_00001198:
    stw r31, 0x4(r30)
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_805E4070(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    blr
}

asm void fn_805E4080(void)
{
    nofralloc
    addi r3, r3, 0x14
    b fn_805E24E0
}

asm void fn_805E4090(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    cmpwi r3, 0x0
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    beq lbl_fn_805E4090_00001454
    cmpwi r4, 0x0
    beq lbl_fn_805E4090_0000145C
    cmpwi r5, 0x0
    beq lbl_fn_805E4090_0000145C
    cmpwi r6, 0x0
    beq lbl_fn_805E4090_0000145C
    cmpwi r7, 0x0
    beq lbl_fn_805E4090_00001464
    bl PPCMfhid2
    rlwinm. r0, r3, 0, 3, 3
    beq lbl_fn_805E4090_00001484
    lwz r0, lbl_8087FA40
    cmpwi r0, 0x0
    beq lbl_fn_805E4090_0000148C
    addi r0, r30, 0x1f
    li r4, 0x6bc
    clrrwi r3, r0, 5
    stw r3, lbl_8087FA44
    addi r0, r3, 0x6bc
    stw r0, lbl_8087FA48
    bl DCZeroRange
    lwz r3, lbl_8087FA44
    li r4, 0x21
    li r0, 0x0
    li r30, 0x0
    stw r4, 0x6a4(r3)
    li r31, 0x1
    lwz r3, lbl_8087FA44
    sth r0, 0x698(r3)
    lwz r3, lbl_8087FA44
    stw r26, 0x69c(r3)
lbl_fn_805E4090_0000128C:
    lwz r4, lbl_8087FA44
    lwz r3, 0x69c(r4)
    addi r0, r3, 0x1
    stw r0, 0x69c(r4)
    lbz r0, 0x0(r3)
    cmplwi r0, 0xff
    bne lbl_fn_805E4090_00001474
    b lbl_fn_805E4090_000012BC
    nop
lbl_fn_805E4090_000012B0:
    lwz r3, 0x69c(r4)
    addi r0, r3, 0x1
    stw r0, 0x69c(r4)
lbl_fn_805E4090_000012BC:
    lwz r4, lbl_8087FA44
    lwz r3, 0x69c(r4)
    lbz r0, 0x0(r3)
    cmplwi r0, 0xff
    beq lbl_fn_805E4090_000012B0
    addi r0, r3, 0x1
    stw r0, 0x69c(r4)
    lbz r0, 0x0(r3)
    cmplwi r0, 0xdb
    beq lbl_fn_805E4090_000013B4
    bge lbl_fn_805E4090_00001318
    cmplwi r0, 0xc4
    beq lbl_fn_805E4090_00001344
    bge lbl_fn_805E4090_00001300
    cmplwi r0, 0xc0
    beq lbl_fn_805E4090_00001354
    b lbl_fn_805E4090_0000146C
lbl_fn_805E4090_00001300:
    cmplwi r0, 0xd9
    beq lbl_fn_805E4090_0000146C
    bge lbl_fn_805E4090_000013C4
    cmplwi r0, 0xd8
    bge lbl_fn_805E4090_000013F4
    b lbl_fn_805E4090_0000146C
lbl_fn_805E4090_00001318:
    cmplwi r0, 0xf0
    bge lbl_fn_805E4090_00001338
    cmplwi r0, 0xdd
    beq lbl_fn_805E4090_00001364
    blt lbl_fn_805E4090_0000146C
    cmplwi r0, 0xe0
    bge lbl_fn_805E4090_000013D8
    b lbl_fn_805E4090_0000146C
lbl_fn_805E4090_00001338:
    cmplwi r0, 0xfe
    beq lbl_fn_805E4090_000013D8
    b lbl_fn_805E4090_0000146C
lbl_fn_805E4090_00001344:
    bl fn_805E4960
    clrlwi. r0, r3, 24
    bne lbl_fn_805E4090_0000147C
    b lbl_fn_805E4090_000013F4
lbl_fn_805E4090_00001354:
    bl fn_805E4360
    clrlwi. r0, r3, 24
    bne lbl_fn_805E4090_0000147C
    b lbl_fn_805E4090_000013F4
lbl_fn_805E4090_00001364:
    lwz r3, lbl_8087FA44
    stb r31, 0x6a9(r3)
    lwz r4, lbl_8087FA44
    lwz r3, 0x69c(r4)
    addi r0, r3, 0x2
    stw r0, 0x69c(r4)
    lwz r5, lbl_8087FA44
    lwz r4, 0x69c(r5)
    lbz r3, 0x0(r4)
    lbz r0, 0x1(r4)
    rlwimi r0, r3, 8, 16, 23
    sth r0, 0x6aa(r5)
    lwz r4, lbl_8087FA44
    lwz r3, 0x69c(r4)
    addi r0, r3, 0x2
    stw r0, 0x69c(r4)
    lwz r3, lbl_8087FA44
    lhz r0, 0x6aa(r3)
    sth r0, 0x6ac(r3)
    b lbl_fn_805E4090_000013F4
lbl_fn_805E4090_000013B4:
    bl fn_805E45C0
    clrlwi. r0, r3, 24
    bne lbl_fn_805E4090_0000147C
    b lbl_fn_805E4090_000013F4
lbl_fn_805E4090_000013C4:
    bl fn_805E44A0
    clrlwi. r0, r3, 24
    bne lbl_fn_805E4090_0000147C
    li r30, 0x1
    b lbl_fn_805E4090_000013F4
lbl_fn_805E4090_000013D8:
    lwz r4, lbl_8087FA44
    lwz r5, 0x69c(r4)
    lbz r3, 0x0(r5)
    lbz r0, 0x1(r5)
    rlwimi r0, r3, 8, 16, 23
    add r0, r5, r0
    stw r0, 0x69c(r4)
lbl_fn_805E4090_000013F4:
    cmpwi r30, 0x0
    beq lbl_fn_805E4090_0000128C
    lwz r4, lbl_8087FA48
    lis r5, lbl_807CAE00@ha
    addi r9, r5, lbl_807CAE00@l
    mr r3, r27
    addi r0, r4, 0x1f
    mr r4, r28
    clrrwi r11, r0, 5
    stw r11, lbl_807CAE00@l(r5)
    addi r10, r11, 0x80
    mr r5, r29
    addi r8, r11, 0x100
    addi r7, r11, 0x180
    addi r6, r11, 0x200
    addi r0, r11, 0x280
    stw r10, 0x4(r9)
    stw r8, 0x8(r9)
    stw r7, 0xc(r9)
    stw r6, 0x10(r9)
    stw r0, 0x14(r9)
    bl fn_805E4F80
    li r3, 0x0
    b lbl_fn_805E4090_00001490
lbl_fn_805E4090_00001454:
    li r3, 0x19
    b lbl_fn_805E4090_00001490
lbl_fn_805E4090_0000145C:
    li r3, 0x1b
    b lbl_fn_805E4090_00001490
lbl_fn_805E4090_00001464:
    li r3, 0x1a
    b lbl_fn_805E4090_00001490
lbl_fn_805E4090_0000146C:
    li r3, 0xb
    b lbl_fn_805E4090_00001490
lbl_fn_805E4090_00001474:
    li r3, 0x3
    b lbl_fn_805E4090_00001490
lbl_fn_805E4090_0000147C:
    clrlwi r3, r3, 24
    b lbl_fn_805E4090_00001490
lbl_fn_805E4090_00001484:
    li r3, 0x1c
    b lbl_fn_805E4090_00001490
lbl_fn_805E4090_0000148C:
    li r3, 0x1d
lbl_fn_805E4090_00001490:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805E4360(void)
{
    nofralloc
    lwz r4, lbl_8087FA44
    lwz r3, 0x69c(r4)
    addi r0, r3, 0x2
    stw r0, 0x69c(r4)
    lwz r4, lbl_8087FA44
    lwz r3, 0x69c(r4)
    addi r0, r3, 0x1
    stw r0, 0x69c(r4)
    lbz r0, 0x0(r3)
    cmplwi r0, 0x8
    beq lbl_fn_805E4360_000014E4
    li r3, 0xa
    blr
lbl_fn_805E4360_000014E4:
    lwz r5, lbl_8087FA44
    lwz r4, 0x69c(r5)
    lbz r3, 0x0(r4)
    lbz r0, 0x1(r4)
    rlwimi r0, r3, 8, 16, 23
    sth r0, 0x694(r5)
    lwz r4, lbl_8087FA44
    lwz r3, 0x69c(r4)
    addi r0, r3, 0x2
    stw r0, 0x69c(r4)
    lwz r5, lbl_8087FA44
    lwz r4, 0x69c(r5)
    lbz r3, 0x0(r4)
    lbz r0, 0x1(r4)
    rlwimi r0, r3, 8, 16, 23
    sth r0, 0x692(r5)
    lwz r4, lbl_8087FA44
    lwz r3, 0x69c(r4)
    addi r0, r3, 0x2
    stw r0, 0x69c(r4)
    lwz r4, lbl_8087FA44
    lwz r3, 0x69c(r4)
    addi r0, r3, 0x1
    stw r0, 0x69c(r4)
    lbz r0, 0x0(r3)
    cmplwi r0, 0x3
    beq lbl_fn_805E4360_00001558
    li r3, 0xc
    blr
lbl_fn_805E4360_00001558:
    li r0, 0x3
    li r6, 0x0
    mtctr r0
lbl_fn_805E4360_00001564:
    lwz r4, lbl_8087FA44
    clrlwi. r0, r6, 24
    lwz r3, 0x69c(r4)
    addi r0, r3, 0x1
    stw r0, 0x69c(r4)
    lwz r4, lbl_8087FA44
    lwz r3, 0x69c(r4)
    addi r0, r3, 0x1
    stw r0, 0x69c(r4)
    lbz r3, 0x0(r3)
    bne lbl_fn_805E4360_00001598
    cmplwi r3, 0x22
    bne lbl_fn_805E4360_000015A8
lbl_fn_805E4360_00001598:
    clrlwi. r0, r6, 24
    beq lbl_fn_805E4360_000015B0
    cmplwi r3, 0x11
    beq lbl_fn_805E4360_000015B0
lbl_fn_805E4360_000015A8:
    li r3, 0x13
    blr
lbl_fn_805E4360_000015B0:
    clrlwi r0, r6, 24
    lwz r5, lbl_8087FA44
    mulli r0, r0, 0x6
    addi r6, r6, 0x1
    lwz r4, 0x69c(r5)
    add r3, r5, r0
    lbz r0, 0x0(r4)
    stb r0, 0x680(r3)
    addi r0, r4, 0x1
    stw r0, 0x69c(r5)
    bdnz lbl_fn_805E4360_00001564
    li r3, 0x0
    blr
}

asm void fn_805E44A0(void)
{
    nofralloc
    lwz r4, lbl_8087FA44
    lwz r3, 0x69c(r4)
    addi r0, r3, 0x2
    stw r0, 0x69c(r4)
    lwz r4, lbl_8087FA44
    lwz r3, 0x69c(r4)
    addi r0, r3, 0x1
    stw r0, 0x69c(r4)
    lbz r0, 0x0(r3)
    cmplwi r0, 0x3
    beq lbl_fn_805E44A0_00001624
    li r3, 0xc
    blr
lbl_fn_805E44A0_00001624:
    li r0, 0x3
    li r8, 0x0
    li r3, 0x1
    mtctr r0
lbl_fn_805E44A0_00001634:
    lwz r5, lbl_8087FA44
    clrlwi r0, r8, 24
    mulli r6, r0, 0x6
    lwz r4, 0x69c(r5)
    addi r0, r4, 0x1
    stw r0, 0x69c(r5)
    lwz r5, lbl_8087FA44
    lwz r4, 0x69c(r5)
    addi r0, r4, 0x1
    stw r0, 0x69c(r5)
    lwz r0, lbl_8087FA44
    lbz r5, 0x0(r4)
    add r4, r0, r6
    srawi r0, r5, 4
    stb r0, 0x681(r4)
    clrlwi r7, r5, 28
    lwz r4, lbl_8087FA44
    slw r0, r3, r0
    add r4, r4, r6
    stb r7, 0x682(r4)
    lwz r5, lbl_8087FA44
    lbz r4, 0x6a8(r5)
    and. r0, r4, r0
    bne lbl_fn_805E44A0_0000169C
    li r3, 0xf
    blr
lbl_fn_805E44A0_0000169C:
    addi r0, r7, 0x1
    slw r0, r3, r0
    and. r0, r4, r0
    bne lbl_fn_805E44A0_000016B4
    li r3, 0xf
    blr
lbl_fn_805E44A0_000016B4:
    addi r8, r8, 0x1
    bdnz lbl_fn_805E44A0_00001634
    lwz r4, 0x69c(r5)
    li r0, 0x0
    li r3, 0x0
    addi r4, r4, 0x3
    stw r4, 0x69c(r5)
    lwz r5, lbl_8087FA44
    lhz r4, 0x692(r5)
    addi r4, r4, 0xf
    srawi r4, r4, 4
    addze r4, r4
    sth r4, 0x696(r5)
    lwz r4, lbl_8087FA44
    sth r0, 0x684(r4)
    lwz r4, lbl_8087FA44
    sth r0, 0x68a(r4)
    lwz r4, lbl_8087FA44
    sth r0, 0x690(r4)
    blr
}

asm void fn_805E45C0(void)
{
    nofralloc
    stwu r1, -0x160(r1)
    mflr r0
    stw r0, 0x164(r1)
    addi r11, r1, 0x140
    stfd f31, 0x150(r1)
    psq_st f31, 0x158(r1), 0, 0
    stfd f30, 0x140(r1)
    psq_st f30, 0x148(r1), 0, 0
    bl _savegpr_23
    lwz r8, lbl_8087FA44
    lis r4, lbl_807646F8@ha
    addi r3, r4, lbl_807646F8@l
    lis r10, 0x4330
    lwz r6, 0x69c(r8)
    lis r9, lbl_807646A8@ha
    stw r10, 0x108(r1)
    addi r9, r9, lbl_807646A8@l
    lbz r0, 0x0(r6)
    addi r5, r6, 0x2
    lbz r6, 0x1(r6)
    addi r7, r1, 0x8
    rlwimi r6, r0, 8, 16, 23
    stw r10, 0x110(r1)
    subi r0, r6, 0x2
    lfd f3, lbl_808884C8
    stw r5, 0x69c(r8)
    clrlwi r11, r0, 16
    lfd f1, lbl_807646F8@l(r4)
    li r29, 0x8
    lfd f0, 0x8(r3)
    li r30, 0x8
    lfd f30, 0x10(r3)
    lfd f13, 0x18(r3)
    lfd f11, 0x20(r3)
    lfd f9, 0x28(r3)
    lfd f7, 0x30(r3)
    lfd f4, 0x38(r3)
    nop
lbl_fn_805E45C0_000017A8:
    lwz r5, lbl_8087FA44
    li r31, 0x0
    lwz r4, 0x69c(r5)
    addi r0, r4, 0x1
    stw r0, 0x69c(r5)
    lbz r12, 0x0(r4)
    mtctr r30
lbl_fn_805E45C0_000017C4:
    lwz r5, lbl_8087FA44
    clrlwi r0, r31, 16
    add r10, r9, r0
    lbzx r4, r9, r0
    lwz r6, 0x69c(r5)
    addi r31, r31, 0x8
    lbz r26, 0x5(r10)
    slwi r8, r4, 2
    addi r0, r6, 0x1
    stw r0, 0x69c(r5)
    lbz r0, 0x1(r10)
    slwi r26, r26, 2
    lwz r5, lbl_8087FA44
    lbz r4, 0x0(r6)
    slwi r6, r0, 2
    lwz r23, 0x69c(r5)
    stw r4, 0x10c(r1)
    addi r4, r23, 0x1
    lbz r0, 0x2(r10)
    stw r4, 0x69c(r5)
    slwi r5, r0, 2
    lfd f2, 0x108(r1)
    lwz r24, lbl_8087FA44
    lbz r0, 0x0(r23)
    fsubs f6, f2, f3
    lwz r23, 0x69c(r24)
    stw r0, 0x114(r1)
    addi r4, r23, 0x1
    lbz r0, 0x3(r10)
    stw r4, 0x69c(r24)
    slwi r4, r0, 2
    lfd f2, 0x110(r1)
    lwz r24, lbl_8087FA44
    lbz r0, 0x0(r23)
    fsubs f8, f2, f3
    lwz r25, 0x69c(r24)
    stw r0, 0x10c(r1)
    addi r23, r25, 0x1
    lbz r0, 0x4(r10)
    stw r23, 0x69c(r24)
    lfd f2, 0x108(r1)
    slwi r0, r0, 2
    lwz r24, lbl_8087FA44
    lbz r25, 0x0(r25)
    fsubs f5, f2, f3
    stfsx f6, r7, r8
    lwz r23, 0x69c(r24)
    stw r25, 0x114(r1)
    addi r8, r23, 0x1
    stw r8, 0x69c(r24)
    lbz r8, 0x6(r10)
    lwz r24, lbl_8087FA44
    lbz r23, 0x0(r23)
    slwi r28, r8, 2
    lwz r27, 0x69c(r24)
    lbz r8, 0x7(r10)
    addi r25, r27, 0x1
    stw r25, 0x69c(r24)
    lfd f2, 0x110(r1)
    slwi r8, r8, 2
    lbz r25, 0x0(r27)
    lwz r10, lbl_8087FA44
    fsubs f6, f2, f3
    stfsx f8, r7, r6
    lwz r27, 0x69c(r10)
    stw r23, 0x10c(r1)
    addi r6, r27, 0x1
    stw r6, 0x69c(r10)
    lfd f2, 0x108(r1)
    stfsx f5, r7, r5
    lwz r10, lbl_8087FA44
    fsubs f5, f2, f3
    lbz r27, 0x0(r27)
    lwz r6, 0x69c(r10)
    stw r25, 0x114(r1)
    addi r5, r6, 0x1
    stfsx f6, r7, r4
    lfd f2, 0x110(r1)
    stw r5, 0x69c(r10)
    fsubs f6, f2, f3
    stw r27, 0x10c(r1)
    lbz r4, 0x0(r6)
    stfsx f5, r7, r0
    lfd f2, 0x108(r1)
    stw r4, 0x114(r1)
    fsubs f5, f2, f3
    stfsx f6, r7, r26
    lfd f2, 0x110(r1)
    stfsx f5, r7, r28
    fsubs f2, f2, f3
    stfsx f2, r7, r8
    bdnz lbl_fn_805E45C0_000017C4
    clrlslwi r23, r12, 16, 8
    li r4, 0x0
    li r5, 0x0
    mtctr r29
lbl_fn_805E45C0_00001944:
    clrlslwi r6, r4, 16, 2
    clrlslwi r0, r5, 16, 3
    lfsx f6, r7, r6
    addi r4, r4, 0x1
    lfdx f2, r3, r0
    clrlslwi r0, r4, 16, 2
    lfsx f5, r7, r0
    addi r4, r4, 0x1
    fmul f10, f6, f2
    clrlslwi r10, r4, 16, 2
    lfsx f6, r7, r10
    addi r4, r4, 0x1
    clrlslwi r12, r4, 16, 2
    fmul f8, f5, f2
    fmul f12, f1, f10
    lfsx f5, r7, r12
    addi r4, r4, 0x1
    lwz r8, lbl_8087FA44
    fmul f10, f0, f8
    clrlslwi r24, r4, 16, 2
    fmul f6, f6, f2
    add r6, r6, r23
    add r0, r0, r23
    addi r4, r4, 0x1
    frsp f8, f12
    add r12, r12, r23
    stfsx f8, r8, r6
    fmul f31, f30, f6
    clrlslwi r8, r4, 16, 2
    lfsx f8, r7, r24
    fmul f6, f5, f2
    lfsx f5, r7, r8
    addi r4, r4, 0x1
    clrlslwi r25, r4, 16, 2
    addi r4, r4, 0x1
    fmul f12, f13, f6
    clrlslwi r26, r4, 16, 2
    lfsx f6, r7, r25
    lwz r6, lbl_8087FA44
    frsp f10, f10
    fmul f6, f6, f2
    stfsx f10, r6, r0
    fmul f10, f8, f2
    add r0, r10, r23
    add r10, r24, r23
    fmul f8, f5, f2
    lfsx f5, r7, r26
    add r8, r8, r23
    fmul f2, f5, f2
    lwz r6, lbl_8087FA44
    addi r5, r5, 0x1
    frsp f31, f31
    addi r4, r4, 0x1
    fmul f10, f11, f10
    stfsx f31, r6, r0
    fmul f8, f9, f8
    add r6, r25, r23
    add r0, r26, r23
    fmul f2, f4, f2
    lwz r31, lbl_8087FA44
    frsp f12, f12
    frsp f5, f10
    stfsx f12, r31, r12
    fmul f6, f7, f6
    lwz r12, lbl_8087FA44
    frsp f8, f8
    frsp f2, f2
    stfsx f5, r12, r10
    frsp f5, f6
    lwz r10, lbl_8087FA44
    stfsx f8, r10, r8
    lwz r8, lbl_8087FA44
    stfsx f5, r8, r6
    lwz r6, lbl_8087FA44
    stfsx f2, r6, r0
    bdnz lbl_fn_805E45C0_00001944
    subi r0, r11, 0x41
    clrlwi. r11, r0, 16
    bne lbl_fn_805E45C0_000017A8
    psq_l f31, 0x158(r1), 0, 0
    li r3, 0x0
    lfd f31, 0x150(r1)
    psq_l f30, 0x148(r1), 0, 0
    lfd f30, 0x140(r1)
    addi r11, r1, 0x140
    bl _restgpr_23
    lwz r0, 0x164(r1)
    mtlr r0
    addi r1, r1, 0x160
    blr
}
