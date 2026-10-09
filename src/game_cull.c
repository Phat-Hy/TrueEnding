#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void __register_global_object(void);
extern void _restgpr_14(void);
extern void _restgpr_20(void);
extern void _restgpr_25(void);
extern void _restgpr_27(void);
extern void _savegpr_14(void);
extern void _savegpr_20(void);
extern void _savegpr_25(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_80061824(void);
extern void fn_8006EF48(void);
extern void fn_8006F72C(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_800D1D3C(void);
extern void fn_800D5738(void);
extern void fn_800D5808(void);
extern void fn_800D5908(void);
extern void fn_800D59B8(void);
extern void fn_800D5B58(void);
extern void fn_800D71A4(void);
extern void fn_800D71D4(void);
extern void fn_800D7254(void);
extern void fn_800D81CC(void);
extern void fn_800D82BC(void);
extern void fn_800D8448(void);
extern void fn_800D8458(void);
extern void fn_800D8568(void);
extern void fn_800DBF68(void);
extern void fn_800DC3C8(void);
extern void fn_80478198(void);
extern void fn_806163C0(void);
extern void fn_806163E0(void);
extern void fn_80680770(void);
extern void fn_80686A48(void);
extern void fn_80686A64(void);
extern void fn_80686EA4(void);
extern void fn_80695720(void);
extern void fn_806958E0(void);
extern void fn_806959D8(void);
extern void fn_80695D84(void);

/* External data declarations */
extern u8 lbl_80734758[];
extern u8 lbl_807347A0[];
extern u8 lbl_807347E0[];
extern u8 lbl_807347FC[];
extern u8 lbl_80775A88[];
extern u8 lbl_80779790[];
extern u8 lbl_807797B8[];
extern u8 lbl_807797E0[];
extern u8 lbl_80779810[];
extern u8 lbl_80779830[];
extern u8 lbl_80779868[];
extern u8 lbl_807C77F4[];
extern u8 lbl_807C7800[];

/* Small data declarations */
extern u32 lbl_8087D948;
extern u32 lbl_8087D94C;
extern u32 lbl_8087D950;
extern u32 lbl_8087D954;
extern u32 lbl_8087D958;
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EEC8;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087F000;
extern u32 lbl_8087F008;
extern u32 lbl_80881220;
extern u32 lbl_80881224;
extern u32 lbl_80881228;
extern u32 lbl_8088122C;
extern u32 lbl_80881230;
extern u32 lbl_80881234;
extern u32 lbl_80881238;
extern u32 lbl_8088123C;
extern u32 lbl_80881240;
extern u32 lbl_80881244;
extern u32 lbl_80881248;
extern u32 lbl_8088124C;
extern u32 lbl_80881250;

/* Function declarations */
void fn_800D8624(void);
void fn_800D8698(void);
void fn_800D87A4(void);
void fn_800D87B0(void);
void fn_800D87C4(void);
void fn_800D8808(void);
void fn_800D8814(void);
void fn_800D8828(void);
void fn_800D884C(void);
void fn_800D8870(void);
void fn_800D8894(void);
void fn_800D8B80(void);
void fn_800D8BB4(void);
void fn_800D8BD8(void);
void fn_800D8C0C(void);
void fn_800D8C14(void);
void fn_800D8E84(void);
void fn_800D8F5C(void);
void fn_800D8FEC(void);
void fn_800D9378(void);
void fn_800D93D4(void);
void fn_800D9400(void);
void fn_800D9410(void);
void fn_800D94E4(void);
void fn_800D94F8(void);
void fn_800D9560(void);
void fn_800D9880(void);
void fn_800D9890(void);
void fn_800D98B0(void);
void fn_800D98C0(void);
void fn_800D98C8(void);
void fn_800D98DC(void);
void fn_800D98F4(void);
void fn_800D9918(void);
void fn_800D993C(void);
void fn_800D9960(void);

asm void fn_800D8624(void)
{
    nofralloc
    stwu r1, -0x1a0(r1)
    mflr r0
    stw r0, 0x1a4(r1)
    stw r31, 0x19c(r1)
    mr r31, r3
    addi r3, r1, 0x8
    stw r30, 0x198(r1)
    bl fn_800D81CC
    lwz r30, 0x8(r31)
    addi r31, r31, 0x4
    b lbl_fn_800D8624_00000050
lbl_fn_800D8624_0000002C:
    lwz r3, 0x8(r30)
    addi r4, r1, 0x8
    addi r3, r3, 0x4
    bl fn_800D82BC
    cmpwi r3, 0x0
    beq lbl_fn_800D8624_0000004C
    lwz r3, 0x8(r30)
    b lbl_fn_800D8624_0000005C
lbl_fn_800D8624_0000004C:
    lwz r30, 0x4(r30)
lbl_fn_800D8624_00000050:
    cmplw r30, r31
    bne lbl_fn_800D8624_0000002C
    li r3, 0x0
lbl_fn_800D8624_0000005C:
    lwz r0, 0x1a4(r1)
    lwz r31, 0x19c(r1)
    lwz r30, 0x198(r1)
    mtlr r0
    addi r1, r1, 0x1a0
    blr
}

asm void fn_800D8698(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r7, lbl_80734758@ha
    stw r0, 0x34(r1)
    stmw r27, 0x1c(r1)
    mr r30, r5
    addi r5, r7, lbl_80734758@l
    mr r27, r3
    mr r28, r4
    mr r29, r6
    mr r6, r5
    li r3, 0x1bc
    li r4, 0x6
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_800D8698_000000E0
    li r0, 0x0
    stw r0, 0x0(r3)
    mr r4, r28
    mr r5, r30
    mr r6, r29
    addi r3, r3, 0x4
    bl fn_800D81CC
    addi r3, r31, 0x18c
    bl fn_800D5738
lbl_fn_800D8698_000000E0:
    addi r29, r27, 0x4
    li r3, 0xc
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_800D8698_00000118
    lis r3, __files@ha
    lis r4, lbl_80779810@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80779810@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_800D8698_00000118:
    addic. r3, r30, 0x8
    addi r0, r27, 0x4
    stw r0, 0x8(r1)
    stw r30, 0xc(r1)
    beq lbl_fn_800D8698_00000130
    stw r31, 0x0(r3)
lbl_fn_800D8698_00000130:
    lwz r3, 0x0(r29)
    li r4, 0x0
    lwz r5, 0xc(r1)
    stw r5, 0x4(r3)
    lwz r0, 0x0(r29)
    stw r0, 0x0(r5)
    stw r5, 0x0(r29)
    stw r29, 0x4(r5)
    lwz r3, 0x0(r27)
    stw r4, 0xc(r1)
    addi r0, r3, 0x1
    stw r0, 0x0(r27)
    b lbl_fn_800D8698_00000168
    bl dtor_80084684
lbl_fn_800D8698_00000168:
    mr r3, r31
    lmw r27, 0x1c(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_800D87A4(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    blr
}

asm void fn_800D87B0(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    cmpwi r3, 0x0
    beqlr
    b fn_800D8448
    blr
}

asm void fn_800D87C4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800D87C4_000001D0
    mr r3, r0
    bl fn_800D8458
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_800D87C4_000001D0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800D8808(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    addi r3, r3, 0x18c
    blr
}

asm void fn_800D8814(void)
{
    nofralloc
    stfs f1, 0x0(r3)
    stfs f2, 0x4(r3)
    stfs f3, 0x8(r3)
    stfs f4, 0xc(r3)
    blr
}

asm void fn_800D8828(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_806163C0
    lwz r0, 0x14(r1)
    clrlwi r3, r3, 16
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800D884C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_806163E0
    lwz r0, 0x14(r1)
    clrlwi r3, r3, 16
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800D8870(void)
{
    nofralloc
    lwz r0, 0x28(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800D8870_00000264
    lbz r3, 0x2f(r3)
    extsb r3, r3
    blr
lbl_fn_800D8870_00000264:
    addi r3, r3, 0x20
    b fn_80478198
    blr
}

asm void fn_800D8894(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r3
    stw r29, 0x34(r1)
    mr r29, r4
    stw r28, 0x30(r1)
    lwz r6, 0x18(r3)
    lwz r5, 0x1c(r3)
    cmplw r6, r5
    bge lbl_fn_800D8894_000002C0
    addi r5, r6, 0x1
    stw r5, 0x18(r3)
    subi r0, r5, 0x1
    lwz r3, 0x14(r3)
    slwi r0, r0, 2
    stwx r4, r3, r0
    b lbl_fn_800D8894_0000053C
lbl_fn_800D8894_000002C0:
    lis r3, 0x4000
    subi r0, r3, 0x1
    subf r0, r5, r0
    cmplwi r0, 0x1
    bge lbl_fn_800D8894_000002F8
    lis r4, lbl_807347A0@ha
    lis r3, __files@ha
    addi r4, r4, lbl_807347A0@l
    addi r3, r3, __files@l
    addi r4, r4, 0x27
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_800D8894_000002F8:
    li r5, 0x0
    addi r4, r30, 0x1c
    lis r3, 0x4000
    stw r5, 0x14(r1)
    subi r0, r3, 0x1
    stw r5, 0x18(r1)
    stw r5, 0x1c(r1)
    stw r4, 0x20(r1)
    stw r5, 0x24(r1)
    lwz r3, 0x18(r30)
    lwz r31, 0x1c(r30)
    addi r3, r3, 0x1
    subf r3, r31, r3
    subf r0, r31, r0
    cmplw r3, r0
    stw r3, 0x8(r1)
    ble lbl_fn_800D8894_00000360
    lis r4, lbl_807347A0@ha
    lis r3, __files@ha
    addi r4, r4, lbl_807347A0@l
    addi r3, r3, __files@l
    addi r4, r4, 0x27
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_800D8894_00000360:
    lis r3, 0x1555
    addi r0, r3, 0x5555
    cmplw r31, r0
    bge lbl_fn_800D8894_000003B0
    addi r5, r31, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x8(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r4, r3, r4
    addi r3, r1, 0x10
    srwi r4, r4, 2
    stw r4, 0x10(r1)
    cmplw r4, r0
    bge lbl_fn_800D8894_000003A4
    addi r3, r1, 0x8
lbl_fn_800D8894_000003A4:
    lwz r0, 0x0(r3)
    add r28, r31, r0
    b lbl_fn_800D8894_000003F4
lbl_fn_800D8894_000003B0:
    lis r3, 0x2aab
    subi r0, r3, 0x5556
    cmplw r31, r0
    bge lbl_fn_800D8894_000003EC
    addi r3, r31, 0x1
    lwz r0, 0x8(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_800D8894_000003E0
    addi r3, r1, 0x8
lbl_fn_800D8894_000003E0:
    lwz r0, 0x0(r3)
    add r28, r31, r0
    b lbl_fn_800D8894_000003F4
lbl_fn_800D8894_000003EC:
    lis r3, 0x4000
    subi r28, r3, 0x1
lbl_fn_800D8894_000003F4:
    lis r3, 0x4000
    subi r0, r3, 0x1
    cmplw r28, r0
    ble lbl_fn_800D8894_00000428
    lis r4, lbl_807347A0@ha
    lis r3, __files@ha
    addi r4, r4, lbl_807347A0@l
    addi r3, r3, __files@l
    addi r4, r4, 0x27
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_800D8894_00000428:
    slwi r3, r28, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_800D8894_0000045C
    lis r3, __files@ha
    lis r4, lbl_80775A88@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_800D8894_0000045C:
    lwz r0, 0x18(r1)
    stw r31, 0x14(r1)
    slwi r3, r0, 2
    stw r28, 0x1c(r1)
    lwz r0, 0x18(r30)
    stw r0, 0x24(r1)
    slwi r0, r0, 2
    add r0, r31, r0
    stwx r29, r3, r0
    lwz r3, 0x18(r1)
    lwz r0, 0x24(r1)
    addi r3, r3, 0x1
    stw r3, 0x18(r1)
    lwz r3, 0x14(r1)
    lwz r4, 0x18(r30)
    lwz r28, 0x14(r30)
    slwi r4, r4, 2
    add r5, r28, r4
    subf r5, r28, r5
    mr r4, r28
    srawi r5, r5, 2
    addze r29, r5
    subf r0, r29, r0
    stw r0, 0x24(r1)
    slwi r31, r29, 2
    slwi r0, r0, 2
    mr r5, r31
    add r3, r3, r0
    bl memcpy
    mr r3, r28
    mr r5, r31
    li r4, 0x0
    bl memset
    lwz r0, 0x18(r1)
    li r4, 0x0
    addic. r3, r1, 0x14
    add r0, r0, r29
    stw r0, 0x18(r1)
    stw r4, 0x18(r30)
    lwz r3, 0x1c(r30)
    lwz r0, 0x1c(r1)
    stw r0, 0x1c(r30)
    stw r3, 0x1c(r1)
    lwz r0, 0x14(r1)
    lwz r3, 0x14(r30)
    stw r0, 0x14(r30)
    stw r3, 0x14(r1)
    lwz r0, 0x18(r1)
    stw r0, 0x18(r30)
    stw r4, 0x18(r1)
    beq lbl_fn_800D8894_0000053C
    lwz r3, 0x14(r1)
    cmpwi r3, 0x0
    beq lbl_fn_800D8894_0000053C
    stw r4, 0x18(r1)
    bl dtor_80084684
lbl_fn_800D8894_0000053C:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r28, 0x30(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_800D8B80(void)
{
    nofralloc
    lis r6, lbl_807797B8@ha
    stw r4, 0x4(r3)
    addi r6, r6, lbl_807797B8@l
    stw r6, 0x0(r3)
    lfs f0, 0x0(r5)
    stfs f0, 0x8(r3)
    lfs f0, 0x4(r5)
    stfs f0, 0xc(r3)
    lfs f0, 0x8(r5)
    stfs f0, 0x10(r3)
    lfs f0, 0xc(r5)
    stfs f0, 0x14(r3)
    blr
}

asm void fn_800D8BB4(void)
{
    nofralloc
    lfs f3, 0x0(r4)
    lfs f2, 0x4(r4)
    lfs f1, 0x8(r4)
    lfs f0, 0xc(r4)
    stfs f3, 0x0(r3)
    stfs f2, 0x4(r3)
    stfs f1, 0x8(r3)
    stfs f0, 0xc(r3)
    blr
}

asm void fn_800D8BD8(void)
{
    nofralloc
    lis r6, lbl_80779790@ha
    stw r4, 0x4(r3)
    addi r6, r6, lbl_80779790@l
    stw r6, 0x0(r3)
    lfs f0, 0x0(r5)
    stfs f0, 0x8(r3)
    lfs f0, 0x4(r5)
    stfs f0, 0xc(r3)
    lfs f0, 0x8(r5)
    stfs f0, 0x10(r3)
    lfs f0, 0xc(r5)
    stfs f0, 0x14(r3)
    blr
}

asm void fn_800D8C0C(void)
{
    nofralloc
    stw r4, 0x10(r3)
    blr
}

asm void fn_800D8C14(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lis r7, lbl_80779830@ha
    li r29, 0x0
    addi r7, r7, lbl_80779830@l
    stw r29, 0x4(r3)
    mr r30, r3
    mr r28, r4
    stw r29, 0x8(r3)
    mr r31, r5
    mr r27, r6
    stw r7, 0x0(r3)
    stw r29, 0xc(r3)
    addi r3, r3, 0x10
    bl fn_800D71A4
    addi r3, r30, 0x198
    bl fn_800D5738
    lis r4, fn_800D5738@ha
    lis r5, fn_800D5808@ha
    addi r3, r30, 0x1c8
    li r6, 0x30
    addi r4, r4, fn_800D5738@l
    addi r5, r5, fn_800D5808@l
    li r7, 0x6
    bl fn_806958E0
    addi r3, r30, 0x2e8
    bl fn_800D5738
    addi r3, r30, 0x318
    bl fn_800D71A4
    addi r3, r30, 0x338
    bl fn_800D5738
    addi r3, r30, 0x368
    bl fn_800D71A4
    stw r27, 0x388(r30)
    lbz r0, lbl_8087F000
    extsb. r0, r0
    bne lbl_fn_800D8C14_000006C4
    lis r3, lbl_807C77F4@ha
    lis r4, fn_800D8568@ha
    addi r3, r3, lbl_807C77F4@l
    lis r5, lbl_807C7800@ha
    addi r6, r3, 0x4
    stw r29, 0x0(r3)
    addi r4, r4, fn_800D8568@l
    addi r5, r5, lbl_807C7800@l
    stw r6, 0x4(r6)
    stw r6, 0x0(r6)
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8087F000
lbl_fn_800D8C14_000006C4:
    lis r29, lbl_807C77F4@ha
    mr r4, r28
    mr r5, r31
    mr r6, r27
    addi r3, r29, lbl_807C77F4@l
    bl fn_800D8624
    cmpwi r3, 0x0
    bne lbl_fn_800D8C14_00000834
    lbz r0, lbl_8087F000
    extsb. r0, r0
    bne lbl_fn_800D8C14_00000724
    addi r3, r29, lbl_807C77F4@l
    li r0, 0x0
    addi r6, r3, 0x4
    lis r4, fn_800D8568@ha
    lis r5, lbl_807C7800@ha
    stw r0, 0x0(r3)
    addi r4, r4, fn_800D8568@l
    stw r6, 0x4(r6)
    addi r5, r5, lbl_807C7800@l
    stw r6, 0x0(r6)
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8087F000
lbl_fn_800D8C14_00000724:
    lis r3, lbl_807C77F4@ha
    mr r4, r28
    mr r5, r31
    mr r6, r27
    addi r3, r3, lbl_807C77F4@l
    bl fn_800D8698
    stw r3, 0x4(r30)
    bl fn_800D8448
    mr r4, r28
    addi r3, r30, 0x198
    bl fn_800D5908
    li r27, 0x0
    li r29, 0x0
    li r28, 0x0
    b lbl_fn_800D8C14_00000824
lbl_fn_800D8C14_00000760:
    add r3, r30, r29
    lfs f0, 0x4(r31)
    stfs f0, 0x30(r3)
    add r4, r30, r28
    lfs f0, 0x8(r31)
    stfs f0, 0x34(r3)
    lfs f0, 0xc(r31)
    stfs f0, 0x38(r3)
    lfs f0, 0x10(r31)
    stfs f0, 0x3c(r3)
    lwz r0, 0x34(r31)
    stw r0, 0x150(r4)
    lfs f0, 0x14(r31)
    stfs f0, 0x40(r3)
    lfs f0, 0x18(r31)
    stfs f0, 0x44(r3)
    lfs f0, 0x1c(r31)
    stfs f0, 0x48(r3)
    lfs f0, 0x20(r31)
    stfs f0, 0x4c(r3)
    lwz r0, 0x38(r31)
    stw r0, 0x154(r4)
    lfs f0, 0x24(r31)
    stfs f0, 0x50(r3)
    lfs f0, 0x28(r31)
    stfs f0, 0x54(r3)
    lfs f0, 0x2c(r31)
    stfs f0, 0x58(r3)
    lfs f0, 0x30(r31)
    stfs f0, 0x5c(r3)
    lwz r0, 0x3c(r31)
    stw r0, 0x158(r4)
    lwz r0, 0x150(r4)
    cmpwi r0, 0x0
    bne lbl_fn_800D8C14_00000804
    lwz r0, 0x154(r4)
    cmpwi r0, 0x0
    bne lbl_fn_800D8C14_00000804
    lwz r0, 0x158(r4)
    cmpwi r0, 0x0
    beq lbl_fn_800D8C14_00000814
lbl_fn_800D8C14_00000804:
    add r3, r30, r29
    lwz r4, 0x0(r31)
    addi r3, r3, 0x1c8
    bl fn_800D5908
lbl_fn_800D8C14_00000814:
    addi r31, r31, 0x40
    addi r29, r29, 0x30
    addi r28, r28, 0xc
    addi r27, r27, 0x1
lbl_fn_800D8C14_00000824:
    lwz r0, 0x388(r30)
    cmpw r27, r0
    blt lbl_fn_800D8C14_00000760
    b lbl_fn_800D8C14_00000844
lbl_fn_800D8C14_00000834:
    stw r3, 0x4(r30)
    bl fn_800D8448
    li r0, 0x1
    stw r0, 0xc(r30)
lbl_fn_800D8C14_00000844:
    addi r11, r1, 0x20
    mr r3, r30
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800D8E84(void)
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
    beq lbl_fn_800D8E84_0000091C
    lwz r0, 0x4(r3)
    lis r4, lbl_80779830@ha
    addi r4, r4, lbl_80779830@l
    stw r4, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800D8E84_000008AC
    mr r3, r0
    bl fn_800D8458
    li r0, 0x0
    stw r0, 0x4(r30)
lbl_fn_800D8E84_000008AC:
    addi r3, r30, 0x368
    li r4, -0x1
    bl fn_800D71D4
    addi r3, r30, 0x338
    li r4, -0x1
    bl fn_800D5808
    addi r3, r30, 0x318
    li r4, -0x1
    bl fn_800D71D4
    addi r3, r30, 0x2e8
    li r4, -0x1
    bl fn_800D5808
    lis r4, fn_800D5808@ha
    addi r3, r30, 0x1c8
    addi r4, r4, fn_800D5808@l
    li r5, 0x30
    li r6, 0x6
    bl fn_806959D8
    addi r3, r30, 0x198
    li r4, -0x1
    bl fn_800D5808
    addi r3, r30, 0x10
    li r4, -0x1
    bl fn_800D71D4
    cmpwi r31, 0x0
    ble lbl_fn_800D8E84_0000091C
    mr r3, r30
    bl dtor_80084684
lbl_fn_800D8E84_0000091C:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800D8F5C(void)
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
    lwz r0, 0xc(r3)
    cmpwi r0, 0x0
    bne lbl_fn_800D8F5C_000009A4
    addi r3, r3, 0x198
    bl fn_800D59B8
    mr r30, r3
    addi r31, r28, 0x1c8
    li r29, 0x0
    b lbl_fn_800D8F5C_00000990
lbl_fn_800D8F5C_0000097C:
    mr r3, r31
    bl fn_800D59B8
    or r30, r30, r3
    addi r31, r31, 0x30
    addi r29, r29, 0x1
lbl_fn_800D8F5C_00000990:
    lwz r0, 0x388(r28)
    cmpw r29, r0
    blt lbl_fn_800D8F5C_0000097C
    mr r3, r30
    b lbl_fn_800D8F5C_000009A8
lbl_fn_800D8F5C_000009A4:
    li r3, 0x0
lbl_fn_800D8F5C_000009A8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800D8FEC(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    addi r11, r1, 0xc0
    bl _savegpr_20
    lwz r0, 0xc(r3)
    li r4, 0x1
    stw r4, 0x8(r3)
    mr r31, r3
    cmpwi r0, 0x0
    bne lbl_fn_800D8FEC_00000D3C
    addi r3, r3, 0x4
    bl fn_800D8808
    mr r22, r3
    addi r3, r31, 0x198
    bl fn_800D8870
    mr r30, r3
    addi r3, r31, 0x198
    bl fn_800D884C
    mr r29, r3
    addi r3, r31, 0x198
    bl fn_800D8828
    lis r28, lbl_807347A0@ha
    mr r4, r3
    mr r3, r22
    mr r5, r29
    mr r7, r30
    addi r8, r28, lbl_807347A0@l
    li r6, 0xe
    bl fn_800D5B58
    addi r3, r31, 0x198
    bl fn_800D8870
    mr r30, r3
    addi r3, r31, 0x198
    bl fn_800D884C
    mr r29, r3
    addi r3, r31, 0x198
    bl fn_800D8828
    addi r28, r28, lbl_807347A0@l
    mr r4, r3
    mr r5, r29
    mr r7, r30
    addi r3, r31, 0x2e8
    addi r8, r28, 0x11
    li r6, 0x1
    bl fn_800D5B58
    addi r3, r31, 0x318
    addi r4, r31, 0x2e8
    li r5, 0x1
    bl fn_800D7254
    addi r5, r28, 0x26
    li r3, 0x18
    mr r6, r5
    li r4, 0x6
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r28, r3
    beq lbl_fn_800D8FEC_00000AE0
    lfs f1, lbl_80881224
    addi r3, r1, 0x48
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_800D8814
    mr r5, r3
    mr r3, r28
    addi r4, r31, 0x198
    bl fn_800D8B80
    mr r28, r3
lbl_fn_800D8FEC_00000AE0:
    mr r4, r28
    addi r3, r31, 0x318
    bl fn_800D8894
    addi r3, r31, 0x198
    bl fn_800D8870
    mr r28, r3
    addi r3, r31, 0x198
    bl fn_800D884C
    mr r30, r3
    addi r3, r31, 0x198
    bl fn_800D8828
    lis r29, lbl_807347A0@ha
    mr r4, r3
    addi r29, r29, lbl_807347A0@l
    mr r5, r30
    mr r7, r28
    addi r3, r31, 0x338
    addi r8, r29, 0x11
    li r6, 0x0
    bl fn_800D5B58
    addi r3, r31, 0x368
    addi r4, r31, 0x338
    li r5, 0x20
    bl fn_800D7254
    addi r5, r29, 0x26
    li r3, 0x18
    mr r6, r5
    li r4, 0x6
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r28, r3
    beq lbl_fn_800D8FEC_00000B90
    lfs f1, lbl_80881224
    addi r3, r1, 0x38
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_800D8814
    mr r5, r3
    mr r3, r28
    addi r4, r31, 0x198
    bl fn_800D8BD8
    mr r28, r3
lbl_fn_800D8FEC_00000B90:
    mr r4, r28
    addi r3, r31, 0x368
    bl fn_800D8894
    mr r4, r22
    addi r3, r31, 0x10
    li r5, -0x1
    bl fn_800D7254
    addi r3, r31, 0x10
    addi r4, r31, 0x338
    bl fn_800D8C0C
    lis r5, lbl_807347A0@ha
    li r3, 0x18
    addi r5, r5, lbl_807347A0@l
    li r4, 0x6
    addi r5, r5, 0x26
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    mr r28, r3
    beq lbl_fn_800D8FEC_00000C10
    lfs f1, lbl_80881224
    addi r3, r1, 0x28
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_800D8814
    mr r5, r3
    mr r3, r28
    addi r4, r31, 0x198
    bl fn_800D8B80
    mr r28, r3
lbl_fn_800D8FEC_00000C10:
    mr r4, r28
    addi r3, r31, 0x10
    bl fn_800D8894
    lfs f2, lbl_80881220
    addi r3, r1, 0x58
    lfs f1, lbl_80881224
    fmr f3, f2
    fmr f4, f2
    bl fn_800D8814
    lfs f1, lbl_80881220
    addi r3, r1, 0x68
    lfs f2, lbl_80881224
    fmr f3, f1
    fmr f4, f1
    bl fn_800D8814
    lfs f1, lbl_80881220
    addi r3, r1, 0x78
    lfs f3, lbl_80881224
    fmr f2, f1
    fmr f4, f1
    bl fn_800D8814
    lis r29, lbl_807347A0@ha
    mr r27, r31
    addi r26, r31, 0x30
    addi r25, r31, 0x1c8
    addi r29, r29, lbl_807347A0@l
    li r21, 0x0
    b lbl_fn_800D8FEC_00000D30
lbl_fn_800D8FEC_00000C80:
    mr r24, r27
    mr r22, r26
    addi r23, r1, 0x58
    li r20, 0x0
lbl_fn_800D8FEC_00000C90:
    lwz r0, 0x150(r24)
    cmpwi r0, 0x0
    beq lbl_fn_800D8FEC_00000D08
    addi r5, r29, 0x26
    li r3, 0x30
    mr r6, r5
    li r4, 0x6
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r28, r3
    beq lbl_fn_800D8FEC_00000CFC
    mr r4, r23
    addi r3, r1, 0x18
    bl fn_800D8BB4
    mr r30, r3
    mr r4, r22
    addi r3, r1, 0x8
    bl fn_800D8BB4
    mr r7, r3
    mr r3, r28
    mr r6, r25
    mr r8, r30
    addi r4, r31, 0x198
    addi r5, r31, 0x2e8
    bl fn_800D9378
    mr r28, r3
lbl_fn_800D8FEC_00000CFC:
    mr r4, r28
    addi r3, r31, 0x10
    bl fn_800D8894
lbl_fn_800D8FEC_00000D08:
    addi r20, r20, 0x1
    addi r23, r23, 0x10
    cmpwi r20, 0x3
    addi r22, r22, 0x10
    addi r24, r24, 0x4
    blt lbl_fn_800D8FEC_00000C90
    addi r27, r27, 0xc
    addi r26, r26, 0x30
    addi r25, r25, 0x30
    addi r21, r21, 0x1
lbl_fn_800D8FEC_00000D30:
    lwz r0, 0x388(r31)
    cmpw r21, r0
    blt lbl_fn_800D8FEC_00000C80
lbl_fn_800D8FEC_00000D3C:
    addi r11, r1, 0xc0
    bl _restgpr_20
    lwz r0, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

asm void fn_800D9378(void)
{
    nofralloc
    lis r9, lbl_807797E0@ha
    stw r4, 0x4(r3)
    addi r9, r9, lbl_807797E0@l
    stw r9, 0x0(r3)
    stw r6, 0x8(r3)
    stw r5, 0xc(r3)
    lfs f0, 0x0(r7)
    stfs f0, 0x10(r3)
    lfs f0, 0x4(r7)
    stfs f0, 0x14(r3)
    lfs f0, 0x8(r7)
    stfs f0, 0x18(r3)
    lfs f0, 0xc(r7)
    stfs f0, 0x1c(r3)
    lfs f0, 0x0(r8)
    stfs f0, 0x20(r3)
    lfs f0, 0x4(r8)
    stfs f0, 0x24(r3)
    lfs f0, 0x8(r8)
    stfs f0, 0x28(r3)
    lfs f0, 0xc(r8)
    stfs f0, 0x2c(r3)
    blr
}

asm void fn_800D93D4(void)
{
    nofralloc
    lwz r0, 0xc(r3)
    li r4, 0x0
    cmpwi r0, 0x0
    bne lbl_fn_800D93D4_00000DCC
    lwz r0, 0x14(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800D93D4_00000DD0
lbl_fn_800D93D4_00000DCC:
    li r4, 0x1
lbl_fn_800D93D4_00000DD0:
    stw r4, 0xc(r3)
    mr r3, r4
    blr
}

asm void fn_800D9400(void)
{
    nofralloc
    slwi r0, r4, 4
    add r3, r3, r0
    addi r3, r3, 0x30
    blr
}

asm void fn_800D9410(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_800D1D3C
    lfs f1, lbl_80881228
    lis r3, lbl_80779868@ha
    li r8, 0x0
    li r0, -0x1
    lfs f0, lbl_8088122C
    lis r7, fn_800D98C8@ha
    lis r6, fn_800D98F4@ha
    lis r5, fn_800D9918@ha
    lis r4, fn_800D993C@ha
    addi r3, r3, lbl_80779868@l
    addi r7, r7, fn_800D98C8@l
    addi r6, r6, fn_800D98F4@l
    addi r5, r5, fn_800D9918@l
    addi r4, r4, fn_800D993C@l
    stw r3, 0x0(r31)
    mr r3, r31
    stw r8, 0x48(r31)
    stw r8, 0x4c(r31)
    stw r8, 0x50(r31)
    stw r8, 0x54(r31)
    stw r8, 0x58(r31)
    stw r8, 0x5c(r31)
    stw r8, 0x60(r31)
    stw r8, 0x64(r31)
    stw r8, 0x68(r31)
    stw r8, 0x6c(r31)
    stw r8, 0x70(r31)
    stw r8, 0x74(r31)
    stw r8, 0x78(r31)
    stw r8, 0x7c(r31)
    stw r8, 0x80(r31)
    stw r8, 0x84(r31)
    stw r8, 0x88(r31)
    stw r8, 0x8c(r31)
    stw r0, 0xa0(r31)
    stw r0, 0xa4(r31)
    stfs f1, 0xa8(r31)
    stfs f0, 0xac(r31)
    stw r7, 0x90(r31)
    stw r6, 0x94(r31)
    stw r5, 0x98(r31)
    stw r4, 0x9c(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800D94E4(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    blr
}

asm void fn_800D94F8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, lbl_8087F008
    cmpwi r0, 0x0
    bne lbl_fn_800D94F8_00000F24
    lis r5, lbl_807347FC@ha
    li r3, 0xb0
    addi r5, r5, lbl_807347FC@l
    li r4, 0x1
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_800D94F8_00000F20
    mr r4, r31
    bl fn_800D9410
lbl_fn_800D94F8_00000F20:
    stw r3, lbl_8087F008
lbl_fn_800D94F8_00000F24:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    lwz r3, lbl_8087F008
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800D9560(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x40
    stfd f31, 0x50(r1)
    psq_st f31, 0x58(r1), 0, 0
    stfd f30, 0x40(r1)
    psq_st f30, 0x48(r1), 0, 0
    bl _savegpr_25
    lwz r4, lbl_8087EFA8
    mr r29, r3
    lfs f31, lbl_80881230
    addi r31, r1, 0x8
    lfs f30, 0x3a4(r4)
    li r30, 0x0
    li r28, 0x0
    li r27, 0x0
    li r26, 0x0
    li r25, 0x0
    b lbl_fn_800D9560_00001130
lbl_fn_800D9560_00000F8C:
    lwz r0, 0x48(r29)
    add r3, r0, r28
    lwz r0, 0x8(r3)
    srwi. r0, r0, 31
    bne lbl_fn_800D9560_00000FAC
    lbz r0, 0x8(r3)
    clrlwi r8, r0, 25
    b lbl_fn_800D9560_00000FB0
lbl_fn_800D9560_00000FAC:
    lwz r8, 0xc(r3)
lbl_fn_800D9560_00000FB0:
    cmpwi r8, 0x0
    ble lbl_fn_800D9560_0000113C
    li r9, 0x0
    li r3, 0x0
    b lbl_fn_800D9560_00000FF8
lbl_fn_800D9560_00000FC4:
    lwz r5, 0x60(r29)
    lwz r4, 0x78(r29)
    lwzx r5, r5, r27
    lfsx f0, r4, r26
    lfsx f1, r5, r3
    fcmpo cr0, f1, f0
    bge lbl_fn_800D9560_00000FEC
    fadds f0, f1, f30
    stfsx f0, r5, r3
    b lbl_fn_800D9560_00000FF0
lbl_fn_800D9560_00000FEC:
    stfsx f0, r5, r3
lbl_fn_800D9560_00000FF0:
    addi r9, r9, 0x1
    addi r3, r3, 0x4
lbl_fn_800D9560_00000FF8:
    lwz r7, 0x54(r29)
    lwzx r6, r7, r26
    addi r5, r6, 0x1
    cmpw r9, r5
    blt lbl_fn_800D9560_00000FC4
    lwz r4, 0x60(r29)
    slwi r0, r6, 2
    lwz r3, 0x6c(r29)
    lwzx r4, r4, r27
    lfsx f0, r3, r26
    lfsx f1, r4, r0
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_800D9560_0000104C
    stwx r5, r7, r26
    lwz r3, 0x54(r29)
    lwzx r0, r3, r26
    cmpw r0, r8
    blt lbl_fn_800D9560_0000104C
    subi r0, r8, 0x1
    stwx r0, r3, r26
lbl_fn_800D9560_0000104C:
    lwz r0, 0x48(r29)
    add r3, r0, r28
    lfs f1, 0x44(r3)
    lfs f0, 0x4(r3)
    fcmpo cr0, f1, f0
    bge lbl_fn_800D9560_00001070
    fadds f0, f1, f30
    stfs f0, 0x44(r3)
    b lbl_fn_800D9560_00001074
lbl_fn_800D9560_00001070:
    stfs f0, 0x44(r3)
lbl_fn_800D9560_00001074:
    lwz r4, 0x84(r29)
    lwzx r3, r4, r26
    cmpwi r3, 0x0
    ble lbl_fn_800D9560_00001120
    subi r0, r3, 0x1
    stwx r0, r4, r26
    lwz r3, 0x84(r29)
    lwzx r0, r3, r26
    cmpwi r0, 0x0
    bgt lbl_fn_800D9560_00001120
    lwz r0, 0x48(r29)
    li r5, 0x0
    li r3, 0x0
    add r4, r0, r28
    stfs f31, 0x44(r4)
    lwz r4, 0x54(r29)
    stwx r25, r4, r26
    stw r25, 0x8(r1)
    stw r25, 0xc(r1)
    stw r25, 0x10(r1)
    b lbl_fn_800D9560_000010D8
lbl_fn_800D9560_000010C8:
    lwz r4, 0x0(r4)
    addi r5, r5, 0x1
    stfsx f31, r4, r3
    addi r3, r3, 0x4
lbl_fn_800D9560_000010D8:
    lwz r0, 0x60(r29)
    add r4, r0, r27
    lwz r0, 0x4(r4)
    cmpw r5, r0
    blt lbl_fn_800D9560_000010C8
    lwz r3, 0x84(r29)
    cmpwi r31, 0x0
    stwx r25, r3, r26
    beq lbl_fn_800D9560_00001120
    beq lbl_fn_800D9560_00001120
    beq lbl_fn_800D9560_00001120
    lwz r3, 0x8(r1)
    cmpwi r3, 0x0
    beq lbl_fn_800D9560_00001120
    lwz r0, 0xc(r1)
    subf r0, r0, r0
    stw r0, 0xc(r1)
    bl dtor_80084684
lbl_fn_800D9560_00001120:
    addi r30, r30, 0x1
    addi r28, r28, 0x48
    addi r27, r27, 0xc
    addi r26, r26, 0x4
lbl_fn_800D9560_00001130:
    lwz r0, 0x4c(r29)
    cmpw r30, r0
    blt lbl_fn_800D9560_00000F8C
lbl_fn_800D9560_0000113C:
    lwz r0, 0xa4(r29)
    cmpwi r0, 0x0
    bne lbl_fn_800D9560_00001220
    lwz r26, 0x4c(r29)
    lwz r4, 0x48(r29)
    mulli r3, r26, 0x48
    subf r0, r26, r26
    stw r0, 0x4c(r29)
    add r25, r4, r3
    b lbl_fn_800D9560_0000118C
lbl_fn_800D9560_00001164:
    subic. r25, r25, 0x48
    beq lbl_fn_800D9560_00001188
    addic. r0, r25, 0x8
    beq lbl_fn_800D9560_00001188
    lwz r0, 0x8(r25)
    srwi. r0, r0, 31
    beq lbl_fn_800D9560_00001188
    lwz r3, 0x10(r25)
    bl dtor_80084684
lbl_fn_800D9560_00001188:
    subi r26, r26, 0x1
lbl_fn_800D9560_0000118C:
    cmpwi r26, 0x0
    bne lbl_fn_800D9560_00001164
    lwz r26, 0x64(r29)
    lwz r0, 0x58(r29)
    mulli r3, r26, 0xc
    lwz r4, 0x60(r29)
    subf r0, r0, r0
    stw r0, 0x58(r29)
    subf r0, r26, r26
    stw r0, 0x64(r29)
    add r25, r4, r3
    b lbl_fn_800D9560_000011F4
lbl_fn_800D9560_000011BC:
    subic. r25, r25, 0xc
    beq lbl_fn_800D9560_000011F0
    beq lbl_fn_800D9560_000011F0
    beq lbl_fn_800D9560_000011F0
    beq lbl_fn_800D9560_000011F0
    lwz r0, 0x0(r25)
    cmpwi r0, 0x0
    beq lbl_fn_800D9560_000011F0
    lwz r0, 0x4(r25)
    subf r0, r0, r0
    stw r0, 0x4(r25)
    lwz r3, 0x0(r25)
    bl dtor_80084684
lbl_fn_800D9560_000011F0:
    subi r26, r26, 0x1
lbl_fn_800D9560_000011F4:
    cmpwi r26, 0x0
    bne lbl_fn_800D9560_000011BC
    lwz r0, 0x70(r29)
    lwz r3, 0x7c(r29)
    subf r0, r0, r0
    lwz r4, 0x88(r29)
    subf r3, r3, r3
    stw r0, 0x70(r29)
    subf r0, r4, r4
    stw r3, 0x7c(r29)
    stw r0, 0x88(r29)
lbl_fn_800D9560_00001220:
    lwz r3, 0xa4(r29)
    cmpwi r3, 0x0
    blt lbl_fn_800D9560_00001234
    subi r0, r3, 0x1
    stw r0, 0xa4(r29)
lbl_fn_800D9560_00001234:
    addi r11, r1, 0x40
    psq_l f31, 0x58(r1), 0, 0
    lfd f31, 0x50(r1)
    psq_l f30, 0x48(r1), 0, 0
    lfd f30, 0x40(r1)
    bl _restgpr_25
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_800D9880(void)
{
    nofralloc
    mulli r0, r4, 0x48
    lwz r3, 0x0(r3)
    add r3, r3, r0
    blr
}

asm void fn_800D9890(void)
{
    nofralloc
    lwz r0, 0x0(r3)
    srwi. r0, r0, 31
    bne lbl_fn_800D9890_00001284
    lbz r0, 0x0(r3)
    clrlwi r3, r0, 25
    blr
lbl_fn_800D9890_00001284:
    lwz r3, 0x4(r3)
    blr
}

asm void fn_800D98B0(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    slwi r0, r4, 2
    add r3, r3, r0
    blr
}

asm void fn_800D98C0(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    blr
}

asm void fn_800D98C8(void)
{
    nofralloc
    lfs f0, lbl_80881230
    stfs f0, 0x0(r3)
    stfs f0, 0x4(r3)
    stfs f1, 0x8(r3)
    blr
}

asm void fn_800D98DC(void)
{
    nofralloc
    lfs f1, lbl_80881230
    lfs f0, lbl_80881234
    stfs f1, 0x0(r3)
    stfs f1, 0x4(r3)
    stfs f0, 0x8(r3)
    blr
}

asm void fn_800D98F4(void)
{
    nofralloc
    lfs f0, lbl_80881234
    lfs f3, lbl_80881230
    fsubs f2, f0, f1
    lfs f0, lbl_80881238
    stfs f3, 0x4(r3)
    fmuls f0, f0, f2
    stfs f1, 0x8(r3)
    stfs f0, 0x0(r3)
    blr
}

asm void fn_800D9918(void)
{
    nofralloc
    lfs f0, lbl_80881234
    lfs f3, lbl_80881230
    fsubs f2, f0, f1
    lfs f0, lbl_8088123C
    stfs f3, 0x4(r3)
    fmuls f0, f0, f2
    stfs f1, 0x8(r3)
    stfs f0, 0x0(r3)
    blr
}

asm void fn_800D993C(void)
{
    nofralloc
    lfs f0, lbl_80881234
    lfs f3, lbl_80881230
    fsubs f2, f0, f1
    lfs f0, lbl_8088123C
    stfs f3, 0x0(r3)
    fmuls f0, f0, f2
    stfs f1, 0x8(r3)
    stfs f0, 0x4(r3)
    blr
}

asm void fn_800D9960(void)
{
    nofralloc
    stwu r1, -0x3c0(r1)
    mflr r0
    stw r0, 0x3c4(r1)
    addi r11, r1, 0x300
    stfd f31, 0x3b0(r1)
    psq_st f31, 0x3b8(r1), 0, 0
    stfd f30, 0x3a0(r1)
    psq_st f30, 0x3a8(r1), 0, 0
    stfd f29, 0x390(r1)
    psq_st f29, 0x398(r1), 0, 0
    stfd f28, 0x380(r1)
    psq_st f28, 0x388(r1), 0, 0
    stfd f27, 0x370(r1)
    psq_st f27, 0x378(r1), 0, 0
    stfd f26, 0x360(r1)
    psq_st f26, 0x368(r1), 0, 0
    stfd f25, 0x350(r1)
    psq_st f25, 0x358(r1), 0, 0
    stfd f24, 0x340(r1)
    psq_st f24, 0x348(r1), 0, 0
    stfd f23, 0x330(r1)
    psq_st f23, 0x338(r1), 0, 0
    stfd f22, 0x320(r1)
    psq_st f22, 0x328(r1), 0, 0
    stfd f21, 0x310(r1)
    psq_st f21, 0x318(r1), 0, 0
    stfd f20, 0x300(r1)
    psq_st f20, 0x308(r1), 0, 0
    bl _savegpr_14
    lwz r0, 0x24(r4)
    lis r7, 0x4330
    stw r7, 0x280(r1)
    mr r19, r3
    rlwinm. r0, r0, 0, 29, 29
    lfs f25, lbl_80881230
    stw r7, 0x288(r1)
    mr r20, r4
    mr r21, r5
    mr r18, r6
    beq lbl_fn_800D9960_000013E8
    lfs f26, lbl_80881240
    lfs f25, lbl_80881244
    b lbl_fn_800D9960_000013EC
lbl_fn_800D9960_000013E8:
    lfs f26, lbl_80881234
lbl_fn_800D9960_000013EC:
    lwz r0, 0x8(r4)
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi r0, r0, 5
    cntlzw r0, r0
    srwi. r0, r0, 5
    bne lbl_fn_800D9960_00001414
    lbz r0, 0x8(r4)
    clrlwi r15, r0, 25
    b lbl_fn_800D9960_00001418
lbl_fn_800D9960_00001414:
    lwz r15, 0xc(r4)
lbl_fn_800D9960_00001418:
    cmpwi r15, 0x0
    beq lbl_fn_800D9960_00002308
    li r0, 0x0
    stw r0, 0x38(r1)
    stw r0, 0x3c(r1)
    stw r0, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_800D9960_00001444
    beq lbl_fn_800D9960_00001444
    li r3, -0x10
    bl fn_80084C24
lbl_fn_800D9960_00001444:
    cmpwi r21, 0x0
    stw r21, 0x38(r1)
    beq lbl_fn_800D9960_0000148C
    mulli r3, r21, 0xc
    li r4, 0x0
    la r5, lbl_8087D954
    la r6, lbl_8087D950
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_800D98DC@ha
    mr r7, r21
    addi r4, r4, fn_800D98DC@l
    li r5, 0x0
    li r6, 0xc
    bl fn_80695720
    stw r3, 0x3c(r1)
    b lbl_fn_800D9960_00001494
lbl_fn_800D9960_0000148C:
    li r0, 0x0
    stw r0, 0x3c(r1)
lbl_fn_800D9960_00001494:
    lwz r3, 0x34(r1)
    cmpwi r3, 0x0
    beq lbl_fn_800D9960_000014A4
    bl fn_80084C24
lbl_fn_800D9960_000014A4:
    cmpwi r21, 0x0
    stw r21, 0x30(r1)
    beq lbl_fn_800D9960_000014D0
    slwi r3, r21, 2
    li r4, 0x0
    la r5, lbl_8087D94C
    la r6, lbl_8087D948
    li r7, 0x0
    bl fn_800846FC
    stw r3, 0x34(r1)
    b lbl_fn_800D9960_000014D8
lbl_fn_800D9960_000014D0:
    li r0, 0x0
    stw r0, 0x34(r1)
lbl_fn_800D9960_000014D8:
    lwz r0, 0x1c(r20)
    cmpwi r0, 0x4
    bge lbl_fn_800D9960_000015F8
    slwi r0, r0, 2
    add r3, r19, r0
    lwz r0, 0x90(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800D9960_000015F8
    lis r3, lbl_807347E0@ha
    lfs f23, lbl_80881230
    mulli r16, r18, 0xc
    lfs f22, lbl_80881234
    lfd f21, lbl_807347E0@l(r3)
    addi r14, r1, 0x40
    lwz r25, 0x3c(r1)
    li r17, 0x0
    lwz r24, 0x34(r1)
    li r22, 0x0
    li r23, 0x0
    b lbl_fn_800D9960_000015F0
lbl_fn_800D9960_00001528:
    lwz r3, 0x60(r19)
    lwzx r3, r3, r16
    lfsx f2, r3, r23
    fcmpo cr0, f2, f23
    cror eq, lt, eq
    bne lbl_fn_800D9960_00001548
    fmr f1, f23
    b lbl_fn_800D9960_0000156C
lbl_fn_800D9960_00001548:
    lwz r3, 0x78(r19)
    slwi r0, r18, 2
    lfsx f0, r3, r0
    fdivs f1, f2, f0
    fcmpo cr0, f1, f22
    cror eq, lt, eq
    bne lbl_fn_800D9960_00001568
    b lbl_fn_800D9960_0000156C
lbl_fn_800D9960_00001568:
    fmr f1, f22
lbl_fn_800D9960_0000156C:
    lwz r0, 0x1c(r20)
    addi r3, r1, 0x40
    slwi r0, r0, 2
    add r4, r19, r0
    lwz r12, 0x90(r4)
    mtctr r12
    bctrl
    add r3, r25, r22
    psq_l f1, 0x0(r14), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lwz r4, 0xa4(r19)
    lfs f0, 0x48(r1)
    stfs f0, 0x8(r3)
    cmpwi r4, 0x0
    frsp f0, f0
    stfsx f0, r24, r23
    blt lbl_fn_800D9960_000015E4
    lwz r0, 0xa0(r19)
    xoris r3, r4, 0x8000
    stw r3, 0x284(r1)
    xoris r0, r0, 0x8000
    lfsx f0, r24, r23
    stw r0, 0x28c(r1)
    lfd f3, 0x280(r1)
    lfd f2, 0x288(r1)
    fsubs f3, f3, f21
    fsubs f2, f2, f21
    fdivs f2, f3, f2
    fmuls f0, f0, f2
    stfsx f0, r24, r23
lbl_fn_800D9960_000015E4:
    addi r17, r17, 0x1
    addi r22, r22, 0xc
    addi r23, r23, 0x4
lbl_fn_800D9960_000015F0:
    cmpw r17, r21
    blt lbl_fn_800D9960_00001528
lbl_fn_800D9960_000015F8:
    lwz r0, 0x8(r20)
    addi r3, r1, 0x80
    srwi. r0, r0, 31
    bne lbl_fn_800D9960_00001610
    addi r4, r20, 0xa
    b lbl_fn_800D9960_00001614
lbl_fn_800D9960_00001610:
    lwz r4, 0x10(r20)
lbl_fn_800D9960_00001614:
    bl fn_80686A64
    subic. r0, r15, 0x1
    addi r4, r1, 0x80
    li r3, 0xa
    mtctr r0
    ble lbl_fn_800D9960_00001654
lbl_fn_800D9960_0000162C:
    lhz r0, 0x0(r4)
    cmplwi r0, 0x5c
    bne lbl_fn_800D9960_0000164C
    lhz r0, 0x2(r4)
    cmplwi r0, 0x6e
    bne lbl_fn_800D9960_0000164C
    sth r3, 0x2(r4)
    sth r3, 0x0(r4)
lbl_fn_800D9960_0000164C:
    addi r4, r4, 0x2
    bdnz lbl_fn_800D9960_0000162C
lbl_fn_800D9960_00001654:
    li r0, 0x0
    stw r0, 0x298(r1)
    addi r3, r1, 0x80
    addi r5, r1, 0x28
    la r4, lbl_8087D958
    bl fn_800DC3C8
    cmpwi r3, 0x0
    lfs f24, 0x14(r20)
    mr r23, r3
    beq lbl_fn_800D9960_000022C8
    la r3, lbl_8087D958
    lis r4, lbl_807347E0@ha
    addi r0, r3, 0x4
    stw r0, 0x29c(r1)
    lbz r0, 0x24(r1)
    subi r5, r21, 0x1
    stw r0, 0x2a0(r1)
    xoris r0, r5, 0x8000
    lfs f28, lbl_80881234
    addi r24, r1, 0x4e
    stw r0, 0x2a4(r1)
    li r28, 0x0
    lbz r0, 0x1c(r1)
    li r14, 0x1
    lfs f29, lbl_80881230
    lfs f30, lbl_8088124C
    lfs f31, lbl_80881248
    lfd f27, lbl_807347E0@l(r4)
    stw r0, 0x2a8(r1)
    b lbl_fn_800D9960_000022C0
lbl_fn_800D9960_000016CC:
    stw r28, 0x74(r1)
    mr r3, r23
    stw r28, 0x78(r1)
    stw r28, 0x7c(r1)
    bl fn_80686A48
    mr r15, r3
    addi r3, r1, 0x74
    mr r4, r15
    bl fn_800DBF68
    lwz r0, 0x2a0(r1)
    slwi r4, r15, 1
    stb r0, 0x20(r1)
    add r7, r23, r4
    mr r6, r23
    addi r3, r1, 0x74
    addi r8, r1, 0x20
    li r4, 0x0
    li r5, 0x0
    bl fn_8006F72C
    lwz r0, 0x74(r1)
    lwz r3, lbl_8087EEC8
    srwi. r0, r0, 31
    lfs f1, 0x38(r20)
    bne lbl_fn_800D9960_00001734
    addi r4, r1, 0x76
    b lbl_fn_800D9960_00001738
lbl_fn_800D9960_00001734:
    lwz r4, 0x7c(r1)
lbl_fn_800D9960_00001738:
    lfs f2, lbl_80881230
    li r5, 0x1
    li r6, 0x1
    bl fn_8006EF48
    lwz r0, 0x20(r20)
    cmpwi r0, 0x0
    beq lbl_fn_800D9960_00001760
    cmpwi r0, 0x2
    beq lbl_fn_800D9960_0000176C
    b lbl_fn_800D9960_00001774
lbl_fn_800D9960_00001760:
    lfs f0, 0x14(r20)
    fnmsubs f24, f31, f1, f0
    b lbl_fn_800D9960_00001774
lbl_fn_800D9960_0000176C:
    lfs f0, 0x14(r20)
    fsubs f24, f0, f1
lbl_fn_800D9960_00001774:
    lwz r0, 0x2a4(r1)
    stw r0, 0x28c(r1)
    lwz r3, 0x29c(r1)
    lfd f0, 0x288(r1)
    stw r28, 0x68(r1)
    fsubs f0, f0, f27
    stw r28, 0x6c(r1)
    fmuls f23, f29, f0
    stw r28, 0x70(r1)
    bl fn_80686A48
    mr r15, r3
    addi r3, r1, 0x68
    mr r4, r15
    bl fn_800DBF68
    lwz r6, 0x29c(r1)
    slwi r4, r15, 1
    lwz r0, 0x2a8(r1)
    addi r3, r1, 0x68
    stb r0, 0x18(r1)
    mr r0, r6
    add r7, r0, r4
    addi r8, r1, 0x18
    li r4, 0x0
    li r5, 0x0
    bl fn_8006F72C
    cmpwi r21, 0x0
    li r22, 0x0
    li r19, 0x0
    li r18, 0x0
    ble lbl_fn_800D9960_00002278
    lwz r0, 0x298(r1)
    la r3, lbl_8087D958
    lwz r26, 0x34(r1)
    addi r25, r3, 0x4
    lwz r27, 0x3c(r1)
    xoris r30, r0, 0x8000
    lbz r29, 0x14(r1)
    lbz r31, 0x8(r1)
    b lbl_fn_800D9960_00002270
lbl_fn_800D9960_00001810:
    lfsx f2, r26, r18
    add r4, r27, r19
    lfs f5, 0x28(r20)
    mr r3, r25
    fmuls f0, f30, f2
    lfs f4, 0x2c(r20)
    lfs f3, 0x30(r20)
    lfsx f22, r27, r19
    fctiwz f0, f0
    lfs f21, 0x4(r4)
    stfs f5, 0x58(r1)
    stfd f0, 0x290(r1)
    stfs f4, 0x5c(r1)
    lwz r15, 0x294(r1)
    stfs f3, 0x60(r1)
    stfs f2, 0x64(r1)
    stw r28, 0x4c(r1)
    stw r28, 0x50(r1)
    stw r28, 0x54(r1)
    bl fn_80686A48
    mr r16, r3
    addi r3, r1, 0x4c
    mr r4, r16
    bl fn_800DBF68
    slwi r0, r16, 1
    stb r29, 0x10(r1)
    mr r6, r25
    addi r3, r1, 0x4c
    add r7, r25, r0
    addi r8, r1, 0x10
    li r4, 0x0
    li r5, 0x0
    bl fn_8006F72C
    lwz r0, 0x4c(r1)
    lhz r3, 0x0(r23)
    srwi. r0, r0, 31
    beq lbl_fn_800D9960_000018B0
    stw r14, 0x50(r1)
    lwz r4, 0x54(r1)
    b lbl_fn_800D9960_000018C0
lbl_fn_800D9960_000018B0:
    lbz r0, 0x4c(r1)
    rlwimi r0, r14, 0, 25, 31
    stb r0, 0x4c(r1)
    mr r4, r24
lbl_fn_800D9960_000018C0:
    sth r3, 0x0(r4)
    sth r28, 0x2(r4)
    lwz r0, 0x20(r20)
    cmpwi r0, 0x0
    beq lbl_fn_800D9960_000018E8
    cmpwi r0, 0x1
    beq lbl_fn_800D9960_00001928
    cmpwi r0, 0x2
    beq lbl_fn_800D9960_00001930
    b lbl_fn_800D9960_00001940
lbl_fn_800D9960_000018E8:
    lwz r0, 0x4c(r1)
    lwz r3, lbl_8087EEC8
    srwi. r0, r0, 31
    lfs f1, 0x38(r20)
    bne lbl_fn_800D9960_00001904
    mr r4, r24
    b lbl_fn_800D9960_00001908
lbl_fn_800D9960_00001904:
    lwz r4, 0x54(r1)
lbl_fn_800D9960_00001908:
    lfs f2, lbl_80881230
    li r5, 0x1
    li r6, 0x1
    bl fn_8006EF48
    fadds f0, f23, f1
    fnmsubs f0, f31, f0, f24
    fadds f20, f22, f0
    b lbl_fn_800D9960_00001940
lbl_fn_800D9960_00001928:
    fadds f20, f24, f22
    b lbl_fn_800D9960_00001940
lbl_fn_800D9960_00001930:
    lfs f0, 0x38(r20)
    fadds f0, f0, f23
    fsubs f0, f24, f0
    fadds f20, f22, f0
lbl_fn_800D9960_00001940:
    lwz r0, 0x68(r1)
    lwz r3, lbl_8087EEC8
    srwi. r0, r0, 31
    lfs f1, 0x38(r20)
    bne lbl_fn_800D9960_0000195C
    addi r4, r1, 0x6a
    b lbl_fn_800D9960_00001960
lbl_fn_800D9960_0000195C:
    lwz r4, 0x70(r1)
lbl_fn_800D9960_00001960:
    lfs f2, lbl_80881230
    li r5, 0x1
    li r6, 0x1
    bl fn_8006EF48
    stw r30, 0x28c(r1)
    xoris r3, r22, 0x8000
    lwz r0, 0x68(r1)
    fadds f20, f20, f1
    lfd f0, 0x288(r1)
    stw r3, 0x284(r1)
    srwi. r0, r0, 31
    fsubs f3, f0, f27
    lfs f2, 0x38(r20)
    lfd f4, 0x280(r1)
    lfs f0, 0x18(r20)
    fsubs f4, f4, f27
    fmadds f0, f2, f3, f0
    fmadds f20, f29, f4, f20
    fadds f21, f21, f0
    bne lbl_fn_800D9960_000019BC
    lbz r0, 0x68(r1)
    clrlwi r4, r0, 25
    b lbl_fn_800D9960_000019C0
lbl_fn_800D9960_000019BC:
    lwz r4, 0x6c(r1)
lbl_fn_800D9960_000019C0:
    lwz r0, 0x4c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_800D9960_000019DC
    lbz r0, 0x4c(r1)
    mr r6, r24
    clrlwi r0, r0, 25
    b lbl_fn_800D9960_000019E4
lbl_fn_800D9960_000019DC:
    lwz r6, 0x54(r1)
    lwz r0, 0x50(r1)
lbl_fn_800D9960_000019E4:
    slwi r0, r0, 1
    stb r31, 0xc(r1)
    addi r3, r1, 0x68
    addi r8, r1, 0xc
    add r7, r6, r0
    li r5, 0x0
    bl fn_8006F72C
    lwz r3, 0x24(r20)
    clrlwi. r0, r3, 31
    beq lbl_fn_800D9960_00001B74
    lwz r0, 0x4c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_800D9960_00001A20
    mr r4, r24
    b lbl_fn_800D9960_00001A24
lbl_fn_800D9960_00001A20:
    lwz r4, 0x54(r1)
lbl_fn_800D9960_00001A24:
    lfs f6, lbl_80881230
    slwi r15, r15, 24
    lfs f4, 0x38(r20)
    fsubs f1, f20, f26
    fmr f7, f6
    lwz r3, lbl_8087EEB0
    fmr f5, f4
    lfs f3, lbl_80881250
    fmr f8, f6
    fsubs f2, f21, f26
    mr r5, r15
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
    lwz r0, 0x4c(r1)
    fsubs f1, f20, f26
    lfs f4, 0x38(r20)
    fadds f2, f21, f26
    srwi. r0, r0, 31
    lwz r3, lbl_8087EEB0
    fmr f5, f4
    lfs f3, lbl_80881250
    bne lbl_fn_800D9960_00001A94
    mr r4, r24
    b lbl_fn_800D9960_00001A98
lbl_fn_800D9960_00001A94:
    lwz r4, 0x54(r1)
lbl_fn_800D9960_00001A98:
    lfs f6, lbl_80881230
    mr r5, r15
    li r6, 0x1
    li r7, 0x1
    fmr f7, f6
    li r8, 0x0
    fmr f8, f6
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
    lwz r0, 0x4c(r1)
    fadds f1, f20, f26
    lfs f4, 0x38(r20)
    fadds f2, f21, f26
    srwi. r0, r0, 31
    lwz r3, lbl_8087EEB0
    fmr f5, f4
    lfs f3, lbl_80881250
    bne lbl_fn_800D9960_00001AEC
    mr r4, r24
    b lbl_fn_800D9960_00001AF0
lbl_fn_800D9960_00001AEC:
    lwz r4, 0x54(r1)
lbl_fn_800D9960_00001AF0:
    lfs f6, lbl_80881230
    mr r5, r15
    li r6, 0x1
    li r7, 0x1
    fmr f7, f6
    li r8, 0x0
    fmr f8, f6
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
    lwz r0, 0x4c(r1)
    fadds f1, f20, f26
    lfs f4, 0x38(r20)
    fsubs f2, f21, f26
    srwi. r0, r0, 31
    lwz r3, lbl_8087EEB0
    fmr f5, f4
    lfs f3, lbl_80881250
    bne lbl_fn_800D9960_00001B44
    mr r4, r24
    b lbl_fn_800D9960_00001B48
lbl_fn_800D9960_00001B44:
    lwz r4, 0x54(r1)
lbl_fn_800D9960_00001B48:
    lfs f6, lbl_80881230
    mr r5, r15
    li r6, 0x1
    li r7, 0x1
    fmr f7, f6
    li r8, 0x0
    fmr f8, f6
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
    b lbl_fn_800D9960_00001BD4
lbl_fn_800D9960_00001B74:
    rlwinm. r0, r3, 0, 30, 30
    beq lbl_fn_800D9960_00001BD4
    lwz r0, 0x4c(r1)
    fadds f1, f20, f26
    lfs f4, 0x38(r20)
    fadds f2, f21, f26
    srwi. r0, r0, 31
    lwz r3, lbl_8087EEB0
    fmr f5, f4
    lfs f3, lbl_80881250
    bne lbl_fn_800D9960_00001BA8
    mr r4, r24
    b lbl_fn_800D9960_00001BAC
lbl_fn_800D9960_00001BA8:
    lwz r4, 0x54(r1)
lbl_fn_800D9960_00001BAC:
    lfs f6, lbl_80881230
    slwi r5, r15, 24
    li r6, 0x1
    li r7, 0x1
    fmr f7, f6
    li r8, 0x0
    fmr f8, f6
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
lbl_fn_800D9960_00001BD4:
    lwz r0, 0x24(r20)
    rlwinm. r0, r0, 0, 29, 29
    beq lbl_fn_800D9960_00002104
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f28
    cror eq, gt, eq
    bne lbl_fn_800D9960_00001BF8
    li r17, 0xff
    b lbl_fn_800D9960_00001C18
lbl_fn_800D9960_00001BF8:
    fcmpo cr0, f0, f29
    cror eq, lt, eq
    bne lbl_fn_800D9960_00001C0C
    li r3, 0x0
    b lbl_fn_800D9960_00001C14
lbl_fn_800D9960_00001C0C:
    fmadds f1, f30, f0, f31
    bl fn_80695D84
lbl_fn_800D9960_00001C14:
    mr r17, r3
lbl_fn_800D9960_00001C18:
    lfs f0, 0x5c(r1)
    fcmpo cr0, f0, f28
    cror eq, gt, eq
    bne lbl_fn_800D9960_00001C30
    li r16, 0xff
    b lbl_fn_800D9960_00001C50
lbl_fn_800D9960_00001C30:
    fcmpo cr0, f0, f29
    cror eq, lt, eq
    bne lbl_fn_800D9960_00001C44
    li r3, 0x0
    b lbl_fn_800D9960_00001C4C
lbl_fn_800D9960_00001C44:
    fmadds f1, f30, f0, f31
    bl fn_80695D84
lbl_fn_800D9960_00001C4C:
    mr r16, r3
lbl_fn_800D9960_00001C50:
    lfs f0, 0x60(r1)
    fcmpo cr0, f0, f28
    cror eq, gt, eq
    bne lbl_fn_800D9960_00001C68
    li r15, 0xff
    b lbl_fn_800D9960_00001C88
lbl_fn_800D9960_00001C68:
    fcmpo cr0, f0, f29
    cror eq, lt, eq
    bne lbl_fn_800D9960_00001C7C
    li r3, 0x0
    b lbl_fn_800D9960_00001C84
lbl_fn_800D9960_00001C7C:
    fmadds f1, f30, f0, f31
    bl fn_80695D84
lbl_fn_800D9960_00001C84:
    mr r15, r3
lbl_fn_800D9960_00001C88:
    lfs f0, 0x64(r1)
    fcmpo cr0, f0, f28
    cror eq, gt, eq
    bne lbl_fn_800D9960_00001CA0
    li r3, 0xff
    b lbl_fn_800D9960_00001CBC
lbl_fn_800D9960_00001CA0:
    fcmpo cr0, f0, f29
    cror eq, lt, eq
    bne lbl_fn_800D9960_00001CB4
    li r3, 0x0
    b lbl_fn_800D9960_00001CBC
lbl_fn_800D9960_00001CB4:
    fmadds f1, f30, f0, f31
    bl fn_80695D84
lbl_fn_800D9960_00001CBC:
    lwz r0, 0x4c(r1)
    slwi r4, r3, 24
    lfs f4, 0x38(r20)
    slwi r3, r17, 16
    srwi. r0, r0, 31
    fsubs f1, f20, f25
    slwi r0, r16, 8
    or r3, r4, r3
    fmr f5, f4
    lfs f3, lbl_80881250
    or r0, r0, r3
    fsubs f2, f21, f25
    lwz r3, lbl_8087EEB0
    or r5, r15, r0
    bne lbl_fn_800D9960_00001D00
    mr r4, r24
    b lbl_fn_800D9960_00001D04
lbl_fn_800D9960_00001D00:
    lwz r4, 0x54(r1)
lbl_fn_800D9960_00001D04:
    lfs f6, lbl_80881230
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    fmr f7, f6
    li r9, 0x0
    fmr f8, f6
    lis r10, 0xff00
    bl fn_80061824
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f28
    cror eq, gt, eq
    bne lbl_fn_800D9960_00001D40
    li r17, 0xff
    b lbl_fn_800D9960_00001D60
lbl_fn_800D9960_00001D40:
    fcmpo cr0, f0, f29
    cror eq, lt, eq
    bne lbl_fn_800D9960_00001D54
    li r3, 0x0
    b lbl_fn_800D9960_00001D5C
lbl_fn_800D9960_00001D54:
    fmadds f1, f30, f0, f31
    bl fn_80695D84
lbl_fn_800D9960_00001D5C:
    mr r17, r3
lbl_fn_800D9960_00001D60:
    lfs f0, 0x5c(r1)
    fcmpo cr0, f0, f28
    cror eq, gt, eq
    bne lbl_fn_800D9960_00001D78
    li r16, 0xff
    b lbl_fn_800D9960_00001D98
lbl_fn_800D9960_00001D78:
    fcmpo cr0, f0, f29
    cror eq, lt, eq
    bne lbl_fn_800D9960_00001D8C
    li r3, 0x0
    b lbl_fn_800D9960_00001D94
lbl_fn_800D9960_00001D8C:
    fmadds f1, f30, f0, f31
    bl fn_80695D84
lbl_fn_800D9960_00001D94:
    mr r16, r3
lbl_fn_800D9960_00001D98:
    lfs f0, 0x60(r1)
    fcmpo cr0, f0, f28
    cror eq, gt, eq
    bne lbl_fn_800D9960_00001DB0
    li r15, 0xff
    b lbl_fn_800D9960_00001DD0
lbl_fn_800D9960_00001DB0:
    fcmpo cr0, f0, f29
    cror eq, lt, eq
    bne lbl_fn_800D9960_00001DC4
    li r3, 0x0
    b lbl_fn_800D9960_00001DCC
lbl_fn_800D9960_00001DC4:
    fmadds f1, f30, f0, f31
    bl fn_80695D84
lbl_fn_800D9960_00001DCC:
    mr r15, r3
lbl_fn_800D9960_00001DD0:
    lfs f0, 0x64(r1)
    fcmpo cr0, f0, f28
    cror eq, gt, eq
    bne lbl_fn_800D9960_00001DE8
    li r3, 0xff
    b lbl_fn_800D9960_00001E04
lbl_fn_800D9960_00001DE8:
    fcmpo cr0, f0, f29
    cror eq, lt, eq
    bne lbl_fn_800D9960_00001DFC
    li r3, 0x0
    b lbl_fn_800D9960_00001E04
lbl_fn_800D9960_00001DFC:
    fmadds f1, f30, f0, f31
    bl fn_80695D84
lbl_fn_800D9960_00001E04:
    lwz r0, 0x4c(r1)
    slwi r4, r3, 24
    lfs f4, 0x38(r20)
    slwi r3, r17, 16
    srwi. r0, r0, 31
    fsubs f1, f20, f25
    slwi r0, r16, 8
    or r3, r4, r3
    fmr f5, f4
    lfs f3, lbl_80881250
    or r0, r0, r3
    fadds f2, f21, f25
    lwz r3, lbl_8087EEB0
    or r5, r15, r0
    bne lbl_fn_800D9960_00001E48
    mr r4, r24
    b lbl_fn_800D9960_00001E4C
lbl_fn_800D9960_00001E48:
    lwz r4, 0x54(r1)
lbl_fn_800D9960_00001E4C:
    lfs f6, lbl_80881230
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    fmr f7, f6
    li r9, 0x0
    fmr f8, f6
    lis r10, 0xff00
    bl fn_80061824
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f28
    cror eq, gt, eq
    bne lbl_fn_800D9960_00001E88
    li r17, 0xff
    b lbl_fn_800D9960_00001EA8
lbl_fn_800D9960_00001E88:
    fcmpo cr0, f0, f29
    cror eq, lt, eq
    bne lbl_fn_800D9960_00001E9C
    li r3, 0x0
    b lbl_fn_800D9960_00001EA4
lbl_fn_800D9960_00001E9C:
    fmadds f1, f30, f0, f31
    bl fn_80695D84
lbl_fn_800D9960_00001EA4:
    mr r17, r3
lbl_fn_800D9960_00001EA8:
    lfs f0, 0x5c(r1)
    fcmpo cr0, f0, f28
    cror eq, gt, eq
    bne lbl_fn_800D9960_00001EC0
    li r16, 0xff
    b lbl_fn_800D9960_00001EE0
lbl_fn_800D9960_00001EC0:
    fcmpo cr0, f0, f29
    cror eq, lt, eq
    bne lbl_fn_800D9960_00001ED4
    li r3, 0x0
    b lbl_fn_800D9960_00001EDC
lbl_fn_800D9960_00001ED4:
    fmadds f1, f30, f0, f31
    bl fn_80695D84
lbl_fn_800D9960_00001EDC:
    mr r16, r3
lbl_fn_800D9960_00001EE0:
    lfs f0, 0x60(r1)
    fcmpo cr0, f0, f28
    cror eq, gt, eq
    bne lbl_fn_800D9960_00001EF8
    li r15, 0xff
    b lbl_fn_800D9960_00001F18
lbl_fn_800D9960_00001EF8:
    fcmpo cr0, f0, f29
    cror eq, lt, eq
    bne lbl_fn_800D9960_00001F0C
    li r3, 0x0
    b lbl_fn_800D9960_00001F14
lbl_fn_800D9960_00001F0C:
    fmadds f1, f30, f0, f31
    bl fn_80695D84
lbl_fn_800D9960_00001F14:
    mr r15, r3
lbl_fn_800D9960_00001F18:
    lfs f0, 0x64(r1)
    fcmpo cr0, f0, f28
    cror eq, gt, eq
    bne lbl_fn_800D9960_00001F30
    li r3, 0xff
    b lbl_fn_800D9960_00001F4C
lbl_fn_800D9960_00001F30:
    fcmpo cr0, f0, f29
    cror eq, lt, eq
    bne lbl_fn_800D9960_00001F44
    li r3, 0x0
    b lbl_fn_800D9960_00001F4C
lbl_fn_800D9960_00001F44:
    fmadds f1, f30, f0, f31
    bl fn_80695D84
lbl_fn_800D9960_00001F4C:
    lwz r0, 0x4c(r1)
    slwi r4, r3, 24
    lfs f4, 0x38(r20)
    slwi r3, r17, 16
    srwi. r0, r0, 31
    fadds f1, f20, f25
    slwi r0, r16, 8
    or r3, r4, r3
    fmr f5, f4
    lfs f3, lbl_80881250
    or r0, r0, r3
    fadds f2, f21, f25
    lwz r3, lbl_8087EEB0
    or r5, r15, r0
    bne lbl_fn_800D9960_00001F90
    mr r4, r24
    b lbl_fn_800D9960_00001F94
lbl_fn_800D9960_00001F90:
    lwz r4, 0x54(r1)
lbl_fn_800D9960_00001F94:
    lfs f6, lbl_80881230
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    fmr f7, f6
    li r9, 0x0
    fmr f8, f6
    lis r10, 0xff00
    bl fn_80061824
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f28
    cror eq, gt, eq
    bne lbl_fn_800D9960_00001FD0
    li r17, 0xff
    b lbl_fn_800D9960_00001FF0
lbl_fn_800D9960_00001FD0:
    fcmpo cr0, f0, f29
    cror eq, lt, eq
    bne lbl_fn_800D9960_00001FE4
    li r3, 0x0
    b lbl_fn_800D9960_00001FEC
lbl_fn_800D9960_00001FE4:
    fmadds f1, f30, f0, f31
    bl fn_80695D84
lbl_fn_800D9960_00001FEC:
    mr r17, r3
lbl_fn_800D9960_00001FF0:
    lfs f0, 0x5c(r1)
    fcmpo cr0, f0, f28
    cror eq, gt, eq
    bne lbl_fn_800D9960_00002008
    li r16, 0xff
    b lbl_fn_800D9960_00002028
lbl_fn_800D9960_00002008:
    fcmpo cr0, f0, f29
    cror eq, lt, eq
    bne lbl_fn_800D9960_0000201C
    li r3, 0x0
    b lbl_fn_800D9960_00002024
lbl_fn_800D9960_0000201C:
    fmadds f1, f30, f0, f31
    bl fn_80695D84
lbl_fn_800D9960_00002024:
    mr r16, r3
lbl_fn_800D9960_00002028:
    lfs f0, 0x60(r1)
    fcmpo cr0, f0, f28
    cror eq, gt, eq
    bne lbl_fn_800D9960_00002040
    li r15, 0xff
    b lbl_fn_800D9960_00002060
lbl_fn_800D9960_00002040:
    fcmpo cr0, f0, f29
    cror eq, lt, eq
    bne lbl_fn_800D9960_00002054
    li r3, 0x0
    b lbl_fn_800D9960_0000205C
lbl_fn_800D9960_00002054:
    fmadds f1, f30, f0, f31
    bl fn_80695D84
lbl_fn_800D9960_0000205C:
    mr r15, r3
lbl_fn_800D9960_00002060:
    lfs f0, 0x64(r1)
    fcmpo cr0, f0, f28
    cror eq, gt, eq
    bne lbl_fn_800D9960_00002078
    li r3, 0xff
    b lbl_fn_800D9960_00002094
lbl_fn_800D9960_00002078:
    fcmpo cr0, f0, f29
    cror eq, lt, eq
    bne lbl_fn_800D9960_0000208C
    li r3, 0x0
    b lbl_fn_800D9960_00002094
lbl_fn_800D9960_0000208C:
    fmadds f1, f30, f0, f31
    bl fn_80695D84
lbl_fn_800D9960_00002094:
    lwz r0, 0x4c(r1)
    slwi r4, r3, 24
    lfs f4, 0x38(r20)
    slwi r3, r17, 16
    srwi. r0, r0, 31
    fadds f1, f20, f25
    slwi r0, r16, 8
    or r3, r4, r3
    fmr f5, f4
    lfs f3, lbl_80881250
    or r0, r0, r3
    fsubs f2, f21, f25
    lwz r3, lbl_8087EEB0
    or r5, r15, r0
    bne lbl_fn_800D9960_000020D8
    mr r4, r24
    b lbl_fn_800D9960_000020DC
lbl_fn_800D9960_000020D8:
    lwz r4, 0x54(r1)
lbl_fn_800D9960_000020DC:
    lfs f6, lbl_80881230
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    fmr f7, f6
    li r9, 0x0
    fmr f8, f6
    lis r10, 0xff00
    bl fn_80061824
    b lbl_fn_800D9960_0000224C
lbl_fn_800D9960_00002104:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f28
    cror eq, gt, eq
    bne lbl_fn_800D9960_0000211C
    li r15, 0xff
    b lbl_fn_800D9960_0000213C
lbl_fn_800D9960_0000211C:
    fcmpo cr0, f0, f29
    cror eq, lt, eq
    bne lbl_fn_800D9960_00002130
    li r3, 0x0
    b lbl_fn_800D9960_00002138
lbl_fn_800D9960_00002130:
    fmadds f1, f30, f0, f31
    bl fn_80695D84
lbl_fn_800D9960_00002138:
    mr r15, r3
lbl_fn_800D9960_0000213C:
    lfs f0, 0x5c(r1)
    fcmpo cr0, f0, f28
    cror eq, gt, eq
    bne lbl_fn_800D9960_00002154
    li r16, 0xff
    b lbl_fn_800D9960_00002174
lbl_fn_800D9960_00002154:
    fcmpo cr0, f0, f29
    cror eq, lt, eq
    bne lbl_fn_800D9960_00002168
    li r3, 0x0
    b lbl_fn_800D9960_00002170
lbl_fn_800D9960_00002168:
    fmadds f1, f30, f0, f31
    bl fn_80695D84
lbl_fn_800D9960_00002170:
    mr r16, r3
lbl_fn_800D9960_00002174:
    lfs f0, 0x60(r1)
    fcmpo cr0, f0, f28
    cror eq, gt, eq
    bne lbl_fn_800D9960_0000218C
    li r17, 0xff
    b lbl_fn_800D9960_000021AC
lbl_fn_800D9960_0000218C:
    fcmpo cr0, f0, f29
    cror eq, lt, eq
    bne lbl_fn_800D9960_000021A0
    li r3, 0x0
    b lbl_fn_800D9960_000021A8
lbl_fn_800D9960_000021A0:
    fmadds f1, f30, f0, f31
    bl fn_80695D84
lbl_fn_800D9960_000021A8:
    mr r17, r3
lbl_fn_800D9960_000021AC:
    lfs f0, 0x64(r1)
    fcmpo cr0, f0, f28
    cror eq, gt, eq
    bne lbl_fn_800D9960_000021C4
    li r3, 0xff
    b lbl_fn_800D9960_000021E0
lbl_fn_800D9960_000021C4:
    fcmpo cr0, f0, f29
    cror eq, lt, eq
    bne lbl_fn_800D9960_000021D8
    li r3, 0x0
    b lbl_fn_800D9960_000021E0
lbl_fn_800D9960_000021D8:
    fmadds f1, f30, f0, f31
    bl fn_80695D84
lbl_fn_800D9960_000021E0:
    lwz r0, 0x4c(r1)
    slwi r4, r3, 24
    lfs f4, 0x38(r20)
    slwi r3, r15, 16
    srwi. r0, r0, 31
    fmr f1, f20
    fmr f2, f21
    or r3, r4, r3
    slwi r0, r16, 8
    fmr f5, f4
    or r0, r0, r3
    lwz r3, lbl_8087EEB0
    lfs f3, lbl_80881250
    or r5, r17, r0
    bne lbl_fn_800D9960_00002224
    mr r4, r24
    b lbl_fn_800D9960_00002228
lbl_fn_800D9960_00002224:
    lwz r4, 0x54(r1)
lbl_fn_800D9960_00002228:
    lfs f6, lbl_80881230
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    fmr f7, f6
    li r9, 0x0
    fmr f8, f6
    lis r10, 0xff00
    bl fn_80061824
lbl_fn_800D9960_0000224C:
    lwz r0, 0x4c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_800D9960_00002260
    lwz r3, 0x54(r1)
    bl dtor_80084684
lbl_fn_800D9960_00002260:
    addi r23, r23, 0x2
    addi r22, r22, 0x1
    addi r19, r19, 0xc
    addi r18, r18, 0x4
lbl_fn_800D9960_00002270:
    cmpw r22, r21
    blt lbl_fn_800D9960_00001810
lbl_fn_800D9960_00002278:
    lwz r6, 0x298(r1)
    addi r5, r1, 0x28
    li r3, 0x0
    la r4, lbl_8087D958
    addi r6, r6, 0x1
    stw r6, 0x298(r1)
    bl fn_800DC3C8
    lwz r0, 0x68(r1)
    mr r23, r3
    srwi. r0, r0, 31
    beq lbl_fn_800D9960_000022AC
    lwz r3, 0x70(r1)
    bl dtor_80084684
lbl_fn_800D9960_000022AC:
    lwz r0, 0x74(r1)
    srwi. r0, r0, 31
    beq lbl_fn_800D9960_000022C0
    lwz r3, 0x7c(r1)
    bl dtor_80084684
lbl_fn_800D9960_000022C0:
    cmpwi r23, 0x0
    bne lbl_fn_800D9960_000016CC
lbl_fn_800D9960_000022C8:
    lwz r3, 0x34(r1)
    cmpwi r3, 0x0
    beq lbl_fn_800D9960_000022D8
    bl fn_80084C24
lbl_fn_800D9960_000022D8:
    lwz r3, 0x3c(r1)
    li r0, 0x0
    stw r0, 0x34(r1)
    cmpwi r3, 0x0
    stw r0, 0x30(r1)
    beq lbl_fn_800D9960_000022FC
    beq lbl_fn_800D9960_000022FC
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_800D9960_000022FC:
    li r0, 0x0
    stw r0, 0x3c(r1)
    stw r0, 0x38(r1)
lbl_fn_800D9960_00002308:
    addi r11, r1, 0x300
    psq_l f31, 0x3b8(r1), 0, 0
    lfd f31, 0x3b0(r1)
    psq_l f30, 0x3a8(r1), 0, 0
    lfd f30, 0x3a0(r1)
    psq_l f29, 0x398(r1), 0, 0
    lfd f29, 0x390(r1)
    psq_l f28, 0x388(r1), 0, 0
    lfd f28, 0x380(r1)
    psq_l f27, 0x378(r1), 0, 0
    lfd f27, 0x370(r1)
    psq_l f26, 0x368(r1), 0, 0
    lfd f26, 0x360(r1)
    psq_l f25, 0x358(r1), 0, 0
    lfd f25, 0x350(r1)
    psq_l f24, 0x348(r1), 0, 0
    lfd f24, 0x340(r1)
    psq_l f23, 0x338(r1), 0, 0
    lfd f23, 0x330(r1)
    psq_l f22, 0x328(r1), 0, 0
    lfd f22, 0x320(r1)
    psq_l f21, 0x318(r1), 0, 0
    lfd f21, 0x310(r1)
    psq_l f20, 0x308(r1), 0, 0
    lfd f20, 0x300(r1)
    bl _restgpr_14
    lwz r0, 0x3c4(r1)
    mtlr r0
    addi r1, r1, 0x3c0
    blr
}
