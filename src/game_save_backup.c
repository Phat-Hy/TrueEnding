#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void dtor_80084684(void);
extern void fn_8006F72C(void);
extern void fn_80084320(void);
extern void fn_800D1D3C(void);
extern void fn_800D1E9C(void);
extern void fn_800D2338(void);
extern void fn_800D246C(void);
extern void fn_800DBF68(void);
extern void fn_800DC6B4(void);
extern void fn_800DD3FC(void);
extern void fn_801ED928(void);
extern void fn_801EFA78(void);
extern void fn_801F3FF8(void);
extern void fn_801F45F4(void);
extern void fn_801F465C(void);
extern void fn_801F6A98(void);
extern void fn_801F9474(void);
extern void fn_801F9488(void);
extern void fn_801FECE0(void);
extern void fn_801FED24(void);
extern void fn_801FED70(void);
extern void fn_801FEDBC(void);
extern void fn_801FEE08(void);
extern void fn_801FEEFC(void);
extern void fn_80686A48(void);
extern void fn_806958E0(void);
extern void fn_806959D8(void);

/* External data declarations */
extern u8 lbl_8073E480[];
extern u8 lbl_8073E508[];
extern u8 lbl_80782C70[];
extern u8 lbl_80782D50[];

/* Small data declarations */
extern u32 lbl_8087F138;
extern u32 lbl_8087F148;
extern u32 lbl_80882C90;
extern u32 lbl_80882C94;
extern u32 lbl_80882C98;

/* Function declarations */
void fn_801F7590(void);
void fn_801F791C(void);
void fn_801F7A18(void);
void fn_801F7DF0(void);
void fn_801F80A8(void);
void fn_801F837C(void);
void fn_801F8598(void);
void fn_801F8830(void);
void fn_801F8914(void);
void fn_801F8928(void);
void fn_801F8994(void);
void fn_801F8B68(void);
void fn_801F8D00(void);
void fn_801F8D64(void);
void fn_801F8E00(void);
void fn_801F8E6C(void);

asm void fn_801F7590(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    li r6, 0x2
    stw r0, 0x64(r1)
    li r0, 0x0
    stfd f31, 0x50(r1)
    psq_st f31, 0x58(r1), 0, 0
    stw r31, 0x4c(r1)
    mr r31, r5
    stw r30, 0x48(r1)
    mr r30, r4
    stw r29, 0x44(r1)
    mr r29, r3
    mr r3, r30
    stb r6, 0x2c(r1)
    lfs f31, 0x0(r5)
    stb r0, 0x2d(r1)
    bl fn_800DC6B4
    lbz r4, 0x2d(r1)
    mr r7, r29
    lbz r0, 0x2c(r1)
    li r6, 0x0
    lwz r8, 0x58(r29)
    extsb r4, r4
    stw r3, 0x30(r1)
    extsb r5, r0
    stfs f31, 0x34(r1)
    mtctr r8
    cmplwi r8, 0x0
    ble lbl_fn_801F7590_000000C4
lbl_fn_801F7590_00000078:
    lbz r0, 0x5c(r7)
    extsb r0, r0
    cmpw r5, r0
    bne lbl_fn_801F7590_000000B8
    lbz r0, 0x5d(r7)
    extsb r0, r0
    cmpw r4, r0
    bne lbl_fn_801F7590_000000B8
    lwz r0, 0x60(r7)
    cmplw r3, r0
    bne lbl_fn_801F7590_000000B8
    mulli r0, r6, 0xc
    lwz r4, 0x34(r1)
    add r3, r29, r0
    stw r4, 0x64(r3)
    b lbl_fn_801F7590_000000FC
lbl_fn_801F7590_000000B8:
    addi r7, r7, 0xc
    addi r6, r6, 0x1
    bdnz lbl_fn_801F7590_00000078
lbl_fn_801F7590_000000C4:
    lwz r0, 0x58(r29)
    mulli r0, r0, 0xc
    add r0, r29, r0
    addic. r3, r0, 0x5c
    beq lbl_fn_801F7590_000000F0
    lwz r0, 0x2c(r1)
    stw r0, 0x0(r3)
    lwz r0, 0x30(r1)
    stw r0, 0x4(r3)
    lwz r0, 0x34(r1)
    stw r0, 0x8(r3)
lbl_fn_801F7590_000000F0:
    lwz r3, 0x58(r29)
    addi r0, r3, 0x1
    stw r0, 0x58(r29)
lbl_fn_801F7590_000000FC:
    li r3, 0x2
    li r0, 0x1
    stb r3, 0x20(r1)
    mr r3, r30
    lfs f31, 0x4(r31)
    stb r0, 0x21(r1)
    bl fn_800DC6B4
    lbz r4, 0x21(r1)
    mr r7, r29
    lbz r0, 0x20(r1)
    li r6, 0x0
    lwz r8, 0x58(r29)
    extsb r4, r4
    stw r3, 0x24(r1)
    extsb r5, r0
    stfs f31, 0x28(r1)
    mtctr r8
    cmplwi r8, 0x0
    ble lbl_fn_801F7590_00000194
lbl_fn_801F7590_00000148:
    lbz r0, 0x5c(r7)
    extsb r0, r0
    cmpw r5, r0
    bne lbl_fn_801F7590_00000188
    lbz r0, 0x5d(r7)
    extsb r0, r0
    cmpw r4, r0
    bne lbl_fn_801F7590_00000188
    lwz r0, 0x60(r7)
    cmplw r3, r0
    bne lbl_fn_801F7590_00000188
    mulli r0, r6, 0xc
    lwz r4, 0x28(r1)
    add r3, r29, r0
    stw r4, 0x64(r3)
    b lbl_fn_801F7590_000001CC
lbl_fn_801F7590_00000188:
    addi r7, r7, 0xc
    addi r6, r6, 0x1
    bdnz lbl_fn_801F7590_00000148
lbl_fn_801F7590_00000194:
    lwz r0, 0x58(r29)
    mulli r0, r0, 0xc
    add r0, r29, r0
    addic. r3, r0, 0x5c
    beq lbl_fn_801F7590_000001C0
    lwz r0, 0x20(r1)
    stw r0, 0x0(r3)
    lwz r0, 0x24(r1)
    stw r0, 0x4(r3)
    lwz r0, 0x28(r1)
    stw r0, 0x8(r3)
lbl_fn_801F7590_000001C0:
    lwz r3, 0x58(r29)
    addi r0, r3, 0x1
    stw r0, 0x58(r29)
lbl_fn_801F7590_000001CC:
    li r0, 0x2
    stb r0, 0x14(r1)
    lfs f31, 0x8(r31)
    mr r3, r30
    stb r0, 0x15(r1)
    bl fn_800DC6B4
    lbz r4, 0x15(r1)
    mr r7, r29
    lbz r0, 0x14(r1)
    li r6, 0x0
    lwz r8, 0x58(r29)
    extsb r4, r4
    stw r3, 0x18(r1)
    extsb r5, r0
    stfs f31, 0x1c(r1)
    mtctr r8
    cmplwi r8, 0x0
    ble lbl_fn_801F7590_00000260
lbl_fn_801F7590_00000214:
    lbz r0, 0x5c(r7)
    extsb r0, r0
    cmpw r5, r0
    bne lbl_fn_801F7590_00000254
    lbz r0, 0x5d(r7)
    extsb r0, r0
    cmpw r4, r0
    bne lbl_fn_801F7590_00000254
    lwz r0, 0x60(r7)
    cmplw r3, r0
    bne lbl_fn_801F7590_00000254
    mulli r0, r6, 0xc
    lwz r4, 0x1c(r1)
    add r3, r29, r0
    stw r4, 0x64(r3)
    b lbl_fn_801F7590_00000298
lbl_fn_801F7590_00000254:
    addi r7, r7, 0xc
    addi r6, r6, 0x1
    bdnz lbl_fn_801F7590_00000214
lbl_fn_801F7590_00000260:
    lwz r0, 0x58(r29)
    mulli r0, r0, 0xc
    add r0, r29, r0
    addic. r3, r0, 0x5c
    beq lbl_fn_801F7590_0000028C
    lwz r0, 0x14(r1)
    stw r0, 0x0(r3)
    lwz r0, 0x18(r1)
    stw r0, 0x4(r3)
    lwz r0, 0x1c(r1)
    stw r0, 0x8(r3)
lbl_fn_801F7590_0000028C:
    lwz r3, 0x58(r29)
    addi r0, r3, 0x1
    stw r0, 0x58(r29)
lbl_fn_801F7590_00000298:
    li r3, 0x2
    li r0, 0x3
    stb r3, 0x8(r1)
    mr r3, r30
    lfs f31, 0xc(r31)
    stb r0, 0x9(r1)
    bl fn_800DC6B4
    lbz r4, 0x9(r1)
    mr r7, r29
    lbz r0, 0x8(r1)
    li r6, 0x0
    lwz r8, 0x58(r29)
    extsb r4, r4
    stw r3, 0xc(r1)
    extsb r5, r0
    stfs f31, 0x10(r1)
    mtctr r8
    cmplwi r8, 0x0
    ble lbl_fn_801F7590_00000330
lbl_fn_801F7590_000002E4:
    lbz r0, 0x5c(r7)
    extsb r0, r0
    cmpw r5, r0
    bne lbl_fn_801F7590_00000324
    lbz r0, 0x5d(r7)
    extsb r0, r0
    cmpw r4, r0
    bne lbl_fn_801F7590_00000324
    lwz r0, 0x60(r7)
    cmplw r3, r0
    bne lbl_fn_801F7590_00000324
    mulli r0, r6, 0xc
    lwz r4, 0x10(r1)
    add r3, r29, r0
    stw r4, 0x64(r3)
    b lbl_fn_801F7590_00000368
lbl_fn_801F7590_00000324:
    addi r7, r7, 0xc
    addi r6, r6, 0x1
    bdnz lbl_fn_801F7590_000002E4
lbl_fn_801F7590_00000330:
    lwz r0, 0x58(r29)
    mulli r0, r0, 0xc
    add r0, r29, r0
    addic. r3, r0, 0x5c
    beq lbl_fn_801F7590_0000035C
    lwz r0, 0x8(r1)
    stw r0, 0x0(r3)
    lwz r0, 0xc(r1)
    stw r0, 0x4(r3)
    lwz r0, 0x10(r1)
    stw r0, 0x8(r3)
lbl_fn_801F7590_0000035C:
    lwz r3, 0x58(r29)
    addi r0, r3, 0x1
    stw r0, 0x58(r29)
lbl_fn_801F7590_00000368:
    lwz r0, 0x64(r1)
    psq_l f31, 0x58(r1), 0, 0
    lfd f31, 0x50(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_801F791C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    li r0, 0x3
    stfd f31, 0x28(r1)
    fmr f31, f1
    stw r31, 0x24(r1)
    mr r31, r3
    mr r3, r4
    stb r0, 0x8(r1)
    stb r5, 0x9(r1)
    bl fn_800DC6B4
    lbz r4, 0x9(r1)
    mr r7, r31
    lbz r0, 0x8(r1)
    li r6, 0x0
    lwz r8, 0x58(r31)
    extsb r4, r4
    stw r3, 0xc(r1)
    extsb r5, r0
    stfs f31, 0x10(r1)
    mtctr r8
    cmplwi r8, 0x0
    ble lbl_fn_801F791C_00000438
lbl_fn_801F791C_000003EC:
    lbz r0, 0x5c(r7)
    extsb r0, r0
    cmpw r5, r0
    bne lbl_fn_801F791C_0000042C
    lbz r0, 0x5d(r7)
    extsb r0, r0
    cmpw r4, r0
    bne lbl_fn_801F791C_0000042C
    lwz r0, 0x60(r7)
    cmplw r3, r0
    bne lbl_fn_801F791C_0000042C
    mulli r0, r6, 0xc
    lwz r4, 0x10(r1)
    add r3, r31, r0
    stw r4, 0x64(r3)
    b lbl_fn_801F791C_00000470
lbl_fn_801F791C_0000042C:
    addi r7, r7, 0xc
    addi r6, r6, 0x1
    bdnz lbl_fn_801F791C_000003EC
lbl_fn_801F791C_00000438:
    lwz r0, 0x58(r31)
    mulli r0, r0, 0xc
    add r0, r31, r0
    addic. r3, r0, 0x5c
    beq lbl_fn_801F791C_00000464
    lwz r0, 0x8(r1)
    stw r0, 0x0(r3)
    lwz r0, 0xc(r1)
    stw r0, 0x4(r3)
    lwz r0, 0x10(r1)
    stw r0, 0x8(r3)
lbl_fn_801F791C_00000464:
    lwz r3, 0x58(r31)
    addi r0, r3, 0x1
    stw r0, 0x58(r31)
lbl_fn_801F791C_00000470:
    lwz r0, 0x34(r1)
    lfd f31, 0x28(r1)
    lwz r31, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_801F7A18(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    lis r7, 0x4330
    li r6, 0x3
    stw r0, 0x64(r1)
    li r0, 0x0
    stw r31, 0x5c(r1)
    mr r31, r5
    stw r30, 0x58(r1)
    mr r30, r4
    stw r29, 0x54(r1)
    mr r29, r3
    mr r3, r30
    stw r7, 0x38(r1)
    stw r7, 0x40(r1)
    stb r6, 0x2c(r1)
    stb r0, 0x2d(r1)
    bl fn_800DC6B4
    srwi r0, r31, 24
    stw r0, 0x3c(r1)
    lis r4, lbl_8073E480@ha
    lbz r0, 0x2d(r1)
    lfd f1, lbl_8073E480@l(r4)
    mr r7, r29
    lfd f0, 0x38(r1)
    extsb r4, r0
    lbz r0, 0x2c(r1)
    li r6, 0x0
    fsubs f0, f0, f1
    lwz r8, 0x58(r29)
    stw r3, 0x30(r1)
    extsb r5, r0
    stfs f0, 0x34(r1)
    mtctr r8
    cmplwi r8, 0x0
    ble lbl_fn_801F7A18_00000564
lbl_fn_801F7A18_00000518:
    lbz r0, 0x5c(r7)
    extsb r0, r0
    cmpw r5, r0
    bne lbl_fn_801F7A18_00000558
    lbz r0, 0x5d(r7)
    extsb r0, r0
    cmpw r4, r0
    bne lbl_fn_801F7A18_00000558
    lwz r0, 0x60(r7)
    cmplw r3, r0
    bne lbl_fn_801F7A18_00000558
    mulli r0, r6, 0xc
    lwz r4, 0x34(r1)
    add r3, r29, r0
    stw r4, 0x64(r3)
    b lbl_fn_801F7A18_0000059C
lbl_fn_801F7A18_00000558:
    addi r7, r7, 0xc
    addi r6, r6, 0x1
    bdnz lbl_fn_801F7A18_00000518
lbl_fn_801F7A18_00000564:
    lwz r0, 0x58(r29)
    mulli r0, r0, 0xc
    add r0, r29, r0
    addic. r3, r0, 0x5c
    beq lbl_fn_801F7A18_00000590
    lwz r0, 0x2c(r1)
    stw r0, 0x0(r3)
    lwz r0, 0x30(r1)
    stw r0, 0x4(r3)
    lwz r0, 0x34(r1)
    stw r0, 0x8(r3)
lbl_fn_801F7A18_00000590:
    lwz r3, 0x58(r29)
    addi r0, r3, 0x1
    stw r0, 0x58(r29)
lbl_fn_801F7A18_0000059C:
    li r3, 0x3
    li r0, 0x1
    stb r3, 0x20(r1)
    mr r3, r30
    stb r0, 0x21(r1)
    bl fn_800DC6B4
    extrwi r0, r31, 8, 8
    stw r0, 0x44(r1)
    lis r4, lbl_8073E480@ha
    lbz r0, 0x21(r1)
    lfd f1, lbl_8073E480@l(r4)
    mr r7, r29
    lfd f0, 0x40(r1)
    extsb r4, r0
    lbz r0, 0x20(r1)
    li r6, 0x0
    fsubs f0, f0, f1
    lwz r8, 0x58(r29)
    stw r3, 0x24(r1)
    extsb r5, r0
    stfs f0, 0x28(r1)
    mtctr r8
    cmplwi r8, 0x0
    ble lbl_fn_801F7A18_00000648
lbl_fn_801F7A18_000005FC:
    lbz r0, 0x5c(r7)
    extsb r0, r0
    cmpw r5, r0
    bne lbl_fn_801F7A18_0000063C
    lbz r0, 0x5d(r7)
    extsb r0, r0
    cmpw r4, r0
    bne lbl_fn_801F7A18_0000063C
    lwz r0, 0x60(r7)
    cmplw r3, r0
    bne lbl_fn_801F7A18_0000063C
    mulli r0, r6, 0xc
    lwz r4, 0x28(r1)
    add r3, r29, r0
    stw r4, 0x64(r3)
    b lbl_fn_801F7A18_00000680
lbl_fn_801F7A18_0000063C:
    addi r7, r7, 0xc
    addi r6, r6, 0x1
    bdnz lbl_fn_801F7A18_000005FC
lbl_fn_801F7A18_00000648:
    lwz r0, 0x58(r29)
    mulli r0, r0, 0xc
    add r0, r29, r0
    addic. r3, r0, 0x5c
    beq lbl_fn_801F7A18_00000674
    lwz r0, 0x20(r1)
    stw r0, 0x0(r3)
    lwz r0, 0x24(r1)
    stw r0, 0x4(r3)
    lwz r0, 0x28(r1)
    stw r0, 0x8(r3)
lbl_fn_801F7A18_00000674:
    lwz r3, 0x58(r29)
    addi r0, r3, 0x1
    stw r0, 0x58(r29)
lbl_fn_801F7A18_00000680:
    li r3, 0x3
    li r0, 0x2
    stb r3, 0x14(r1)
    mr r3, r30
    stb r0, 0x15(r1)
    bl fn_800DC6B4
    extrwi r0, r31, 8, 16
    stw r0, 0x3c(r1)
    lis r4, lbl_8073E480@ha
    lbz r0, 0x15(r1)
    lfd f1, lbl_8073E480@l(r4)
    mr r7, r29
    lfd f0, 0x38(r1)
    extsb r4, r0
    lbz r0, 0x14(r1)
    li r6, 0x0
    fsubs f0, f0, f1
    lwz r8, 0x58(r29)
    stw r3, 0x18(r1)
    extsb r5, r0
    stfs f0, 0x1c(r1)
    mtctr r8
    cmplwi r8, 0x0
    ble lbl_fn_801F7A18_0000072C
lbl_fn_801F7A18_000006E0:
    lbz r0, 0x5c(r7)
    extsb r0, r0
    cmpw r5, r0
    bne lbl_fn_801F7A18_00000720
    lbz r0, 0x5d(r7)
    extsb r0, r0
    cmpw r4, r0
    bne lbl_fn_801F7A18_00000720
    lwz r0, 0x60(r7)
    cmplw r3, r0
    bne lbl_fn_801F7A18_00000720
    mulli r0, r6, 0xc
    lwz r4, 0x1c(r1)
    add r3, r29, r0
    stw r4, 0x64(r3)
    b lbl_fn_801F7A18_00000764
lbl_fn_801F7A18_00000720:
    addi r7, r7, 0xc
    addi r6, r6, 0x1
    bdnz lbl_fn_801F7A18_000006E0
lbl_fn_801F7A18_0000072C:
    lwz r0, 0x58(r29)
    mulli r0, r0, 0xc
    add r0, r29, r0
    addic. r3, r0, 0x5c
    beq lbl_fn_801F7A18_00000758
    lwz r0, 0x14(r1)
    stw r0, 0x0(r3)
    lwz r0, 0x18(r1)
    stw r0, 0x4(r3)
    lwz r0, 0x1c(r1)
    stw r0, 0x8(r3)
lbl_fn_801F7A18_00000758:
    lwz r3, 0x58(r29)
    addi r0, r3, 0x1
    stw r0, 0x58(r29)
lbl_fn_801F7A18_00000764:
    li r0, 0x3
    stb r0, 0x8(r1)
    mr r3, r30
    stb r0, 0x9(r1)
    bl fn_800DC6B4
    clrlwi r0, r31, 24
    stw r0, 0x44(r1)
    lis r4, lbl_8073E480@ha
    lbz r0, 0x9(r1)
    lfd f1, lbl_8073E480@l(r4)
    mr r7, r29
    lfd f0, 0x40(r1)
    extsb r4, r0
    lbz r0, 0x8(r1)
    li r6, 0x0
    fsubs f0, f0, f1
    lwz r8, 0x58(r29)
    stw r3, 0xc(r1)
    extsb r5, r0
    stfs f0, 0x10(r1)
    mtctr r8
    cmplwi r8, 0x0
    ble lbl_fn_801F7A18_0000080C
lbl_fn_801F7A18_000007C0:
    lbz r0, 0x5c(r7)
    extsb r0, r0
    cmpw r5, r0
    bne lbl_fn_801F7A18_00000800
    lbz r0, 0x5d(r7)
    extsb r0, r0
    cmpw r4, r0
    bne lbl_fn_801F7A18_00000800
    lwz r0, 0x60(r7)
    cmplw r3, r0
    bne lbl_fn_801F7A18_00000800
    mulli r0, r6, 0xc
    lwz r4, 0x10(r1)
    add r3, r29, r0
    stw r4, 0x64(r3)
    b lbl_fn_801F7A18_00000844
lbl_fn_801F7A18_00000800:
    addi r7, r7, 0xc
    addi r6, r6, 0x1
    bdnz lbl_fn_801F7A18_000007C0
lbl_fn_801F7A18_0000080C:
    lwz r0, 0x58(r29)
    mulli r0, r0, 0xc
    add r0, r29, r0
    addic. r3, r0, 0x5c
    beq lbl_fn_801F7A18_00000838
    lwz r0, 0x8(r1)
    stw r0, 0x0(r3)
    lwz r0, 0xc(r1)
    stw r0, 0x4(r3)
    lwz r0, 0x10(r1)
    stw r0, 0x8(r3)
lbl_fn_801F7A18_00000838:
    lwz r3, 0x58(r29)
    addi r0, r3, 0x1
    stw r0, 0x58(r29)
lbl_fn_801F7A18_00000844:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_801F7DF0(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    li r5, 0x3
    stw r0, 0x54(r1)
    li r0, 0x1
    stfd f31, 0x48(r1)
    fmr f31, f3
    stfd f30, 0x40(r1)
    fmr f30, f2
    stfd f29, 0x38(r1)
    fmr f29, f1
    stw r31, 0x34(r1)
    mr r31, r4
    stw r30, 0x30(r1)
    mr r30, r3
    mr r3, r31
    stb r5, 0x20(r1)
    stb r0, 0x21(r1)
    bl fn_800DC6B4
    lbz r4, 0x21(r1)
    mr r7, r30
    lbz r0, 0x20(r1)
    li r6, 0x0
    lwz r8, 0x58(r30)
    extsb r4, r4
    stw r3, 0x24(r1)
    extsb r5, r0
    stfs f29, 0x28(r1)
    mtctr r8
    cmplwi r8, 0x0
    ble lbl_fn_801F7DF0_00000928
lbl_fn_801F7DF0_000008DC:
    lbz r0, 0x5c(r7)
    extsb r0, r0
    cmpw r5, r0
    bne lbl_fn_801F7DF0_0000091C
    lbz r0, 0x5d(r7)
    extsb r0, r0
    cmpw r4, r0
    bne lbl_fn_801F7DF0_0000091C
    lwz r0, 0x60(r7)
    cmplw r3, r0
    bne lbl_fn_801F7DF0_0000091C
    mulli r0, r6, 0xc
    lwz r4, 0x28(r1)
    add r3, r30, r0
    stw r4, 0x64(r3)
    b lbl_fn_801F7DF0_00000960
lbl_fn_801F7DF0_0000091C:
    addi r7, r7, 0xc
    addi r6, r6, 0x1
    bdnz lbl_fn_801F7DF0_000008DC
lbl_fn_801F7DF0_00000928:
    lwz r0, 0x58(r30)
    mulli r0, r0, 0xc
    add r0, r30, r0
    addic. r3, r0, 0x5c
    beq lbl_fn_801F7DF0_00000954
    lwz r0, 0x20(r1)
    stw r0, 0x0(r3)
    lwz r0, 0x24(r1)
    stw r0, 0x4(r3)
    lwz r0, 0x28(r1)
    stw r0, 0x8(r3)
lbl_fn_801F7DF0_00000954:
    lwz r3, 0x58(r30)
    addi r0, r3, 0x1
    stw r0, 0x58(r30)
lbl_fn_801F7DF0_00000960:
    li r3, 0x3
    li r0, 0x2
    stb r3, 0x14(r1)
    mr r3, r31
    stb r0, 0x15(r1)
    bl fn_800DC6B4
    lbz r4, 0x15(r1)
    mr r7, r30
    lbz r0, 0x14(r1)
    li r6, 0x0
    lwz r8, 0x58(r30)
    extsb r4, r4
    stw r3, 0x18(r1)
    extsb r5, r0
    stfs f30, 0x1c(r1)
    mtctr r8
    cmplwi r8, 0x0
    ble lbl_fn_801F7DF0_000009F4
lbl_fn_801F7DF0_000009A8:
    lbz r0, 0x5c(r7)
    extsb r0, r0
    cmpw r5, r0
    bne lbl_fn_801F7DF0_000009E8
    lbz r0, 0x5d(r7)
    extsb r0, r0
    cmpw r4, r0
    bne lbl_fn_801F7DF0_000009E8
    lwz r0, 0x60(r7)
    cmplw r3, r0
    bne lbl_fn_801F7DF0_000009E8
    mulli r0, r6, 0xc
    lwz r4, 0x1c(r1)
    add r3, r30, r0
    stw r4, 0x64(r3)
    b lbl_fn_801F7DF0_00000A2C
lbl_fn_801F7DF0_000009E8:
    addi r7, r7, 0xc
    addi r6, r6, 0x1
    bdnz lbl_fn_801F7DF0_000009A8
lbl_fn_801F7DF0_000009F4:
    lwz r0, 0x58(r30)
    mulli r0, r0, 0xc
    add r0, r30, r0
    addic. r3, r0, 0x5c
    beq lbl_fn_801F7DF0_00000A20
    lwz r0, 0x14(r1)
    stw r0, 0x0(r3)
    lwz r0, 0x18(r1)
    stw r0, 0x4(r3)
    lwz r0, 0x1c(r1)
    stw r0, 0x8(r3)
lbl_fn_801F7DF0_00000A20:
    lwz r3, 0x58(r30)
    addi r0, r3, 0x1
    stw r0, 0x58(r30)
lbl_fn_801F7DF0_00000A2C:
    li r0, 0x3
    stb r0, 0x8(r1)
    mr r3, r31
    stb r0, 0x9(r1)
    bl fn_800DC6B4
    lbz r4, 0x9(r1)
    mr r7, r30
    lbz r0, 0x8(r1)
    li r6, 0x0
    lwz r8, 0x58(r30)
    extsb r4, r4
    stw r3, 0xc(r1)
    extsb r5, r0
    stfs f31, 0x10(r1)
    mtctr r8
    cmplwi r8, 0x0
    ble lbl_fn_801F7DF0_00000ABC
lbl_fn_801F7DF0_00000A70:
    lbz r0, 0x5c(r7)
    extsb r0, r0
    cmpw r5, r0
    bne lbl_fn_801F7DF0_00000AB0
    lbz r0, 0x5d(r7)
    extsb r0, r0
    cmpw r4, r0
    bne lbl_fn_801F7DF0_00000AB0
    lwz r0, 0x60(r7)
    cmplw r3, r0
    bne lbl_fn_801F7DF0_00000AB0
    mulli r0, r6, 0xc
    lwz r4, 0x10(r1)
    add r3, r30, r0
    stw r4, 0x64(r3)
    b lbl_fn_801F7DF0_00000AF4
lbl_fn_801F7DF0_00000AB0:
    addi r7, r7, 0xc
    addi r6, r6, 0x1
    bdnz lbl_fn_801F7DF0_00000A70
lbl_fn_801F7DF0_00000ABC:
    lwz r0, 0x58(r30)
    mulli r0, r0, 0xc
    add r0, r30, r0
    addic. r3, r0, 0x5c
    beq lbl_fn_801F7DF0_00000AE8
    lwz r0, 0x8(r1)
    stw r0, 0x0(r3)
    lwz r0, 0xc(r1)
    stw r0, 0x4(r3)
    lwz r0, 0x10(r1)
    stw r0, 0x8(r3)
lbl_fn_801F7DF0_00000AE8:
    lwz r3, 0x58(r30)
    addi r0, r3, 0x1
    stw r0, 0x58(r30)
lbl_fn_801F7DF0_00000AF4:
    lwz r0, 0x54(r1)
    lfd f31, 0x48(r1)
    lfd f30, 0x40(r1)
    lfd f29, 0x38(r1)
    lwz r31, 0x34(r1)
    lwz r30, 0x30(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_801F80A8(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    li r6, 0x3
    lfs f1, lbl_80882C98
    stw r0, 0x54(r1)
    li r0, 0x1
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    stw r31, 0x3c(r1)
    mr r31, r5
    stw r30, 0x38(r1)
    mr r30, r4
    stw r29, 0x34(r1)
    mr r29, r3
    mr r3, r30
    lfs f0, 0x0(r5)
    stb r6, 0x20(r1)
    fmuls f31, f1, f0
    stb r0, 0x21(r1)
    bl fn_800DC6B4
    lbz r4, 0x21(r1)
    mr r7, r29
    lbz r0, 0x20(r1)
    li r6, 0x0
    lwz r8, 0x58(r29)
    extsb r4, r4
    stw r3, 0x24(r1)
    extsb r5, r0
    stfs f31, 0x28(r1)
    mtctr r8
    cmplwi r8, 0x0
    ble lbl_fn_801F80A8_00000BE4
lbl_fn_801F80A8_00000B98:
    lbz r0, 0x5c(r7)
    extsb r0, r0
    cmpw r5, r0
    bne lbl_fn_801F80A8_00000BD8
    lbz r0, 0x5d(r7)
    extsb r0, r0
    cmpw r4, r0
    bne lbl_fn_801F80A8_00000BD8
    lwz r0, 0x60(r7)
    cmplw r3, r0
    bne lbl_fn_801F80A8_00000BD8
    mulli r0, r6, 0xc
    lwz r4, 0x28(r1)
    add r3, r29, r0
    stw r4, 0x64(r3)
    b lbl_fn_801F80A8_00000C1C
lbl_fn_801F80A8_00000BD8:
    addi r7, r7, 0xc
    addi r6, r6, 0x1
    bdnz lbl_fn_801F80A8_00000B98
lbl_fn_801F80A8_00000BE4:
    lwz r0, 0x58(r29)
    mulli r0, r0, 0xc
    add r0, r29, r0
    addic. r3, r0, 0x5c
    beq lbl_fn_801F80A8_00000C10
    lwz r0, 0x20(r1)
    stw r0, 0x0(r3)
    lwz r0, 0x24(r1)
    stw r0, 0x4(r3)
    lwz r0, 0x28(r1)
    stw r0, 0x8(r3)
lbl_fn_801F80A8_00000C10:
    lwz r3, 0x58(r29)
    addi r0, r3, 0x1
    stw r0, 0x58(r29)
lbl_fn_801F80A8_00000C1C:
    lfs f1, lbl_80882C98
    li r3, 0x3
    lfs f0, 0x4(r31)
    li r0, 0x2
    stb r3, 0x14(r1)
    mr r3, r30
    fmuls f31, f1, f0
    stb r0, 0x15(r1)
    bl fn_800DC6B4
    lbz r4, 0x15(r1)
    mr r7, r29
    lbz r0, 0x14(r1)
    li r6, 0x0
    lwz r8, 0x58(r29)
    extsb r4, r4
    stw r3, 0x18(r1)
    extsb r5, r0
    stfs f31, 0x1c(r1)
    mtctr r8
    cmplwi r8, 0x0
    ble lbl_fn_801F80A8_00000CBC
lbl_fn_801F80A8_00000C70:
    lbz r0, 0x5c(r7)
    extsb r0, r0
    cmpw r5, r0
    bne lbl_fn_801F80A8_00000CB0
    lbz r0, 0x5d(r7)
    extsb r0, r0
    cmpw r4, r0
    bne lbl_fn_801F80A8_00000CB0
    lwz r0, 0x60(r7)
    cmplw r3, r0
    bne lbl_fn_801F80A8_00000CB0
    mulli r0, r6, 0xc
    lwz r4, 0x1c(r1)
    add r3, r29, r0
    stw r4, 0x64(r3)
    b lbl_fn_801F80A8_00000CF4
lbl_fn_801F80A8_00000CB0:
    addi r7, r7, 0xc
    addi r6, r6, 0x1
    bdnz lbl_fn_801F80A8_00000C70
lbl_fn_801F80A8_00000CBC:
    lwz r0, 0x58(r29)
    mulli r0, r0, 0xc
    add r0, r29, r0
    addic. r3, r0, 0x5c
    beq lbl_fn_801F80A8_00000CE8
    lwz r0, 0x14(r1)
    stw r0, 0x0(r3)
    lwz r0, 0x18(r1)
    stw r0, 0x4(r3)
    lwz r0, 0x1c(r1)
    stw r0, 0x8(r3)
lbl_fn_801F80A8_00000CE8:
    lwz r3, 0x58(r29)
    addi r0, r3, 0x1
    stw r0, 0x58(r29)
lbl_fn_801F80A8_00000CF4:
    lfs f1, lbl_80882C98
    li r0, 0x3
    lfs f0, 0x8(r31)
    mr r3, r30
    stb r0, 0x8(r1)
    fmuls f31, f1, f0
    stb r0, 0x9(r1)
    bl fn_800DC6B4
    lbz r4, 0x9(r1)
    mr r7, r29
    lbz r0, 0x8(r1)
    li r6, 0x0
    lwz r8, 0x58(r29)
    extsb r4, r4
    stw r3, 0xc(r1)
    extsb r5, r0
    stfs f31, 0x10(r1)
    mtctr r8
    cmplwi r8, 0x0
    ble lbl_fn_801F80A8_00000D90
lbl_fn_801F80A8_00000D44:
    lbz r0, 0x5c(r7)
    extsb r0, r0
    cmpw r5, r0
    bne lbl_fn_801F80A8_00000D84
    lbz r0, 0x5d(r7)
    extsb r0, r0
    cmpw r4, r0
    bne lbl_fn_801F80A8_00000D84
    lwz r0, 0x60(r7)
    cmplw r3, r0
    bne lbl_fn_801F80A8_00000D84
    mulli r0, r6, 0xc
    lwz r4, 0x10(r1)
    add r3, r29, r0
    stw r4, 0x64(r3)
    b lbl_fn_801F80A8_00000DC8
lbl_fn_801F80A8_00000D84:
    addi r7, r7, 0xc
    addi r6, r6, 0x1
    bdnz lbl_fn_801F80A8_00000D44
lbl_fn_801F80A8_00000D90:
    lwz r0, 0x58(r29)
    mulli r0, r0, 0xc
    add r0, r29, r0
    addic. r3, r0, 0x5c
    beq lbl_fn_801F80A8_00000DBC
    lwz r0, 0x8(r1)
    stw r0, 0x0(r3)
    lwz r0, 0xc(r1)
    stw r0, 0x4(r3)
    lwz r0, 0x10(r1)
    stw r0, 0x8(r3)
lbl_fn_801F80A8_00000DBC:
    lwz r3, 0x58(r29)
    addi r0, r3, 0x1
    stw r0, 0x58(r29)
lbl_fn_801F80A8_00000DC8:
    lwz r0, 0x54(r1)
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_801F837C(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    li r0, 0x0
    stw r31, 0x3c(r1)
    mr r31, r3
    mr r3, r4
    stw r30, 0x38(r1)
    stw r29, 0x34(r1)
    mr r29, r5
    stw r0, 0x24(r1)
    stw r0, 0x28(r1)
    stw r0, 0x2c(r1)
    bl fn_800DC6B4
    lwz r0, 0x24(r1)
    stw r3, 0x20(r1)
    srwi. r0, r0, 31
    bne lbl_fn_801F837C_00000E40
    lbz r0, 0x24(r1)
    clrlwi r30, r0, 25
    b lbl_fn_801F837C_00000E44
lbl_fn_801F837C_00000E40:
    lwz r30, 0x28(r1)
lbl_fn_801F837C_00000E44:
    lbz r0, 0x1c(r1)
    mr r3, r29
    stb r0, 0x18(r1)
    bl fn_80686A48
    slwi r0, r3, 1
    mr r5, r30
    mr r6, r29
    addi r3, r1, 0x24
    addi r8, r1, 0x18
    add r7, r29, r0
    li r4, 0x0
    bl fn_8006F72C
    lwz r0, 0x1dc(r31)
    mr r4, r31
    lwz r5, 0x20(r1)
    li r3, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_801F837C_00000F3C
lbl_fn_801F837C_00000E90:
    lwz r0, 0x1e0(r4)
    cmplw r5, r0
    bne lbl_fn_801F837C_00000F30
    slwi r0, r3, 4
    add r3, r31, r0
    lwzu r0, 0x1e4(r3)
    srwi. r5, r0, 31
    bne lbl_fn_801F837C_00000ED4
    lwz r4, 0x24(r1)
    srwi. r0, r4, 31
    bne lbl_fn_801F837C_00000ED4
    lwz r0, 0x28(r1)
    stw r4, 0x0(r3)
    stw r0, 0x4(r3)
    lwz r0, 0x2c(r1)
    stw r0, 0x8(r3)
    b lbl_fn_801F837C_00000FD0
lbl_fn_801F837C_00000ED4:
    cmpwi r5, 0x0
    beq lbl_fn_801F837C_00000EE4
    lwz r5, 0x4(r3)
    b lbl_fn_801F837C_00000EEC
lbl_fn_801F837C_00000EE4:
    lbz r0, 0x0(r3)
    clrlwi r5, r0, 25
lbl_fn_801F837C_00000EEC:
    lwz r0, 0x24(r1)
    srwi. r0, r0, 31
    bne lbl_fn_801F837C_00000F08
    lbz r0, 0x24(r1)
    addi r6, r1, 0x26
    clrlwi r0, r0, 25
    b lbl_fn_801F837C_00000F10
lbl_fn_801F837C_00000F08:
    lwz r6, 0x2c(r1)
    lwz r0, 0x28(r1)
lbl_fn_801F837C_00000F10:
    lbz r4, 0x8(r1)
    slwi r0, r0, 1
    stb r4, 0xc(r1)
    add r7, r6, r0
    addi r8, r1, 0xc
    li r4, 0x0
    bl fn_8006F72C
    b lbl_fn_801F837C_00000FD0
lbl_fn_801F837C_00000F30:
    addi r4, r4, 0x10
    addi r3, r3, 0x1
    bdnz lbl_fn_801F837C_00000E90
lbl_fn_801F837C_00000F3C:
    lwz r0, 0x1dc(r31)
    slwi r0, r0, 4
    add r0, r31, r0
    addic. r30, r0, 0x1e0
    beq lbl_fn_801F837C_00000FC4
    lwz r0, 0x20(r1)
    stw r0, 0x0(r30)
    lwz r3, 0x24(r1)
    srwi. r0, r3, 31
    bne lbl_fn_801F837C_00000F7C
    lwz r0, 0x28(r1)
    stw r3, 0x4(r30)
    stw r0, 0x8(r30)
    lwz r0, 0x2c(r1)
    stw r0, 0xc(r30)
    b lbl_fn_801F837C_00000FC4
lbl_fn_801F837C_00000F7C:
    li r0, 0x0
    stw r0, 0x4(r30)
    addi r3, r30, 0x4
    stw r0, 0x8(r30)
    stw r0, 0xc(r30)
    lwz r4, 0x28(r1)
    bl fn_800DBF68
    lwz r0, 0x28(r1)
    addi r3, r30, 0x4
    lbz r4, 0x10(r1)
    addi r8, r1, 0x14
    stb r4, 0x14(r1)
    slwi r0, r0, 1
    lwz r6, 0x2c(r1)
    li r4, 0x0
    li r5, 0x0
    add r7, r6, r0
    bl fn_8006F72C
lbl_fn_801F837C_00000FC4:
    lwz r3, 0x1dc(r31)
    addi r0, r3, 0x1
    stw r0, 0x1dc(r31)
lbl_fn_801F837C_00000FD0:
    addic. r0, r1, 0x24
    beq lbl_fn_801F837C_00000FEC
    lwz r0, 0x24(r1)
    srwi. r0, r0, 31
    beq lbl_fn_801F837C_00000FEC
    lwz r3, 0x2c(r1)
    bl dtor_80084684
lbl_fn_801F837C_00000FEC:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_801F8598(void)
{
    nofralloc
    stwu r1, -0x280(r1)
    mflr r0
    cmpwi r6, 0x0
    stw r0, 0x284(r1)
    stw r31, 0x27c(r1)
    mr r31, r3
    stw r30, 0x278(r1)
    mr r30, r5
    stw r29, 0x274(r1)
    mr r29, r4
    ble lbl_fn_801F8598_00001050
    lis r4, lbl_80782D50@ha
    mr r5, r6
    addi r3, r1, 0x30
    addi r4, r4, lbl_80782D50@l
    crclr 6
    bl fn_800DD3FC
    b lbl_fn_801F8598_0000108C
lbl_fn_801F8598_00001050:
    bge lbl_fn_801F8598_00001074
    lis r4, lbl_80782D50@ha
    addi r3, r1, 0x30
    addi r4, r4, lbl_80782D50@l
    neg r5, r6
    addi r4, r4, 0xe
    crclr 6
    bl fn_800DD3FC
    b lbl_fn_801F8598_0000108C
lbl_fn_801F8598_00001074:
    lis r4, lbl_80782D50@ha
    addi r3, r1, 0x30
    addi r4, r4, lbl_80782D50@l
    addi r4, r4, 0x1e
    crclr 6
    bl fn_800DD3FC
lbl_fn_801F8598_0000108C:
    mr r5, r30
    addi r3, r1, 0x70
    addi r4, r1, 0x30
    crclr 6
    bl fn_800DD3FC
    li r0, 0x0
    stw r0, 0x24(r1)
    mr r3, r29
    stw r0, 0x28(r1)
    stw r0, 0x2c(r1)
    bl fn_800DC6B4
    lwz r0, 0x24(r1)
    stw r3, 0x20(r1)
    srwi. r0, r0, 31
    bne lbl_fn_801F8598_000010D4
    lbz r0, 0x24(r1)
    clrlwi r30, r0, 25
    b lbl_fn_801F8598_000010D8
lbl_fn_801F8598_000010D4:
    lwz r30, 0x28(r1)
lbl_fn_801F8598_000010D8:
    lbz r0, 0x8(r1)
    addi r3, r1, 0x70
    stb r0, 0xc(r1)
    bl fn_80686A48
    addi r6, r1, 0x70
    slwi r0, r3, 1
    mr r7, r6
    mr r5, r30
    addi r3, r1, 0x24
    addi r8, r1, 0xc
    add r7, r7, r0
    li r4, 0x0
    bl fn_8006F72C
    lwz r0, 0x1dc(r31)
    mr r4, r31
    lwz r5, 0x20(r1)
    li r3, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_801F8598_000011D4
lbl_fn_801F8598_00001128:
    lwz r0, 0x1e0(r4)
    cmplw r5, r0
    bne lbl_fn_801F8598_000011C8
    slwi r0, r3, 4
    add r3, r31, r0
    lwzu r0, 0x1e4(r3)
    srwi. r5, r0, 31
    bne lbl_fn_801F8598_0000116C
    lwz r4, 0x24(r1)
    srwi. r0, r4, 31
    bne lbl_fn_801F8598_0000116C
    lwz r0, 0x28(r1)
    stw r4, 0x0(r3)
    stw r0, 0x4(r3)
    lwz r0, 0x2c(r1)
    stw r0, 0x8(r3)
    b lbl_fn_801F8598_00001268
lbl_fn_801F8598_0000116C:
    cmpwi r5, 0x0
    beq lbl_fn_801F8598_0000117C
    lwz r5, 0x4(r3)
    b lbl_fn_801F8598_00001184
lbl_fn_801F8598_0000117C:
    lbz r0, 0x0(r3)
    clrlwi r5, r0, 25
lbl_fn_801F8598_00001184:
    lwz r0, 0x24(r1)
    srwi. r0, r0, 31
    bne lbl_fn_801F8598_000011A0
    lbz r0, 0x24(r1)
    addi r6, r1, 0x26
    clrlwi r0, r0, 25
    b lbl_fn_801F8598_000011A8
lbl_fn_801F8598_000011A0:
    lwz r6, 0x2c(r1)
    lwz r0, 0x28(r1)
lbl_fn_801F8598_000011A8:
    lbz r4, 0x1c(r1)
    slwi r0, r0, 1
    stb r4, 0x18(r1)
    add r7, r6, r0
    addi r8, r1, 0x18
    li r4, 0x0
    bl fn_8006F72C
    b lbl_fn_801F8598_00001268
lbl_fn_801F8598_000011C8:
    addi r4, r4, 0x10
    addi r3, r3, 0x1
    bdnz lbl_fn_801F8598_00001128
lbl_fn_801F8598_000011D4:
    lwz r0, 0x1dc(r31)
    slwi r0, r0, 4
    add r0, r31, r0
    addic. r30, r0, 0x1e0
    beq lbl_fn_801F8598_0000125C
    lwz r0, 0x20(r1)
    stw r0, 0x0(r30)
    lwz r3, 0x24(r1)
    srwi. r0, r3, 31
    bne lbl_fn_801F8598_00001214
    lwz r0, 0x28(r1)
    stw r3, 0x4(r30)
    stw r0, 0x8(r30)
    lwz r0, 0x2c(r1)
    stw r0, 0xc(r30)
    b lbl_fn_801F8598_0000125C
lbl_fn_801F8598_00001214:
    li r0, 0x0
    stw r0, 0x4(r30)
    addi r3, r30, 0x4
    stw r0, 0x8(r30)
    stw r0, 0xc(r30)
    lwz r4, 0x28(r1)
    bl fn_800DBF68
    lwz r0, 0x28(r1)
    addi r3, r30, 0x4
    lbz r4, 0x14(r1)
    addi r8, r1, 0x10
    stb r4, 0x10(r1)
    slwi r0, r0, 1
    lwz r6, 0x2c(r1)
    li r4, 0x0
    li r5, 0x0
    add r7, r6, r0
    bl fn_8006F72C
lbl_fn_801F8598_0000125C:
    lwz r3, 0x1dc(r31)
    addi r0, r3, 0x1
    stw r0, 0x1dc(r31)
lbl_fn_801F8598_00001268:
    addic. r0, r1, 0x24
    beq lbl_fn_801F8598_00001284
    lwz r0, 0x24(r1)
    srwi. r0, r0, 31
    beq lbl_fn_801F8598_00001284
    lwz r3, 0x2c(r1)
    bl dtor_80084684
lbl_fn_801F8598_00001284:
    lwz r0, 0x284(r1)
    lwz r31, 0x27c(r1)
    lwz r30, 0x278(r1)
    lwz r29, 0x274(r1)
    mtlr r0
    addi r1, r1, 0x280
    blr
}

asm void fn_801F8830(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    lfs f0, lbl_80882C90
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    mr r31, r4
    stw r30, 0x48(r1)
    mr r30, r5
    stw r29, 0x44(r1)
    mr r29, r3
    stfs f0, 0x0(r3)
    stfs f0, 0x4(r3)
    stfs f0, 0x8(r3)
    stfs f0, 0xc(r3)
    stfs f0, 0x10(r3)
    lwz r3, 0x48(r4)
    cmpwi r3, 0x0
    beq lbl_fn_801F8830_000012F0
    addi r0, r3, 0x48
    b lbl_fn_801F8830_000012F4
lbl_fn_801F8830_000012F0:
    li r0, 0x0
lbl_fn_801F8830_000012F4:
    cmpwi r0, 0x0
    bne lbl_fn_801F8830_00001300
    b lbl_fn_801F8830_00001368
lbl_fn_801F8830_00001300:
    mr r3, r31
    bl fn_801F6A98
    lwz r3, 0x48(r31)
    bl fn_801F45F4
    lwz r3, 0x48(r31)
    cmpwi r3, 0x0
    beq lbl_fn_801F8830_00001324
    addi r31, r3, 0x48
    b lbl_fn_801F8830_00001328
lbl_fn_801F8830_00001324:
    li r31, 0x0
lbl_fn_801F8830_00001328:
    mr r3, r30
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r31
    bl fn_801EFA78
    cmpwi r3, 0x0
    beq lbl_fn_801F8830_00001368
    lfs f0, lbl_80882C90
    li r0, 0x0
    stfs f0, 0x8(r1)
    mr r4, r29
    addi r5, r1, 0x10
    addi r6, r1, 0x8
    stw r0, 0xc(r1)
    addi r7, r1, 0x20
    bl fn_801ED928
lbl_fn_801F8830_00001368:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_801F8914(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    stw r0, 0xc(r3)
    blr
}

asm void fn_801F8928(void)
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
    beq lbl_fn_801F8928_000013E8
    addic. r0, r3, 0x4
    beq lbl_fn_801F8928_000013D8
    lwz r0, 0x4(r3)
    srwi. r0, r0, 31
    beq lbl_fn_801F8928_000013D8
    lwz r3, 0xc(r3)
    bl dtor_80084684
lbl_fn_801F8928_000013D8:
    cmpwi r31, 0x0
    ble lbl_fn_801F8928_000013E8
    mr r3, r30
    bl dtor_80084684
lbl_fn_801F8928_000013E8:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801F8994(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    mr r29, r4
    stw r28, 0x20(r1)
    mr r28, r3
    beq lbl_fn_801F8994_000015B4
    lis r30, lbl_8073E508@ha
    li r3, 0xe0
    addi r5, r30, lbl_8073E508@l
    li r4, 0x8
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_801F8994_000015AC
    mr r4, r28
    bl fn_800D1D3C
    lis r3, lbl_80782C70@ha
    addi r3, r3, lbl_80782C70@l
    stw r3, 0x0(r31)
    lwz r0, lbl_8087F148
    cmpwi r0, 0x0
    bne lbl_fn_801F8994_000014A4
    addi r5, r30, lbl_8073E508@l
    li r3, 0xc04
    mr r6, r5
    li r4, 0x1
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_801F8994_000014A0
    li r0, 0x0
    stw r0, 0x0(r3)
lbl_fn_801F8994_000014A0:
    stw r3, lbl_8087F148
lbl_fn_801F8994_000014A4:
    lwz r30, lbl_8087F148
    mr r3, r29
    bl fn_800DC6B4
    lwz r0, 0x0(r30)
    mr r5, r30
    li r4, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_801F8994_000014FC
lbl_fn_801F8994_000014C8:
    lwz r0, 0x4(r5)
    cmplw r3, r0
    bne lbl_fn_801F8994_000014F0
    mulli r0, r4, 0xc
    add r4, r30, r0
    lwz r3, 0xc(r4)
    addi r0, r3, 0x1
    stw r0, 0xc(r4)
    lwz r4, 0x8(r4)
    b lbl_fn_801F8994_0000155C
lbl_fn_801F8994_000014F0:
    addi r5, r5, 0xc
    addi r4, r4, 0x1
    bdnz lbl_fn_801F8994_000014C8
lbl_fn_801F8994_000014FC:
    stw r3, 0x8(r1)
    mr r4, r29
    lwz r3, 0x24(r28)
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0xc(r1)
    li r4, 0x1
    bl fn_800D246C
    lwz r0, 0x0(r30)
    li r3, 0x1
    stw r3, 0x10(r1)
    mulli r0, r0, 0xc
    add r0, r30, r0
    addic. r4, r0, 0x4
    beq lbl_fn_801F8994_0000154C
    lwz r0, 0x8(r1)
    stw r0, 0x0(r4)
    lwz r0, 0xc(r1)
    stw r0, 0x4(r4)
    stw r3, 0x8(r4)
lbl_fn_801F8994_0000154C:
    lwz r3, 0x0(r30)
    lwz r4, 0xc(r1)
    addi r0, r3, 0x1
    stw r0, 0x0(r30)
lbl_fn_801F8994_0000155C:
    stw r4, 0x48(r31)
    li r6, 0x1
    lis r4, fn_801F9474@ha
    lis r5, fn_801F9488@ha
    stb r6, 0x4c(r31)
    li r0, 0x0
    lfs f1, lbl_80882C90
    addi r3, r31, 0xc0
    stb r6, 0x4d(r31)
    addi r4, r4, fn_801F9474@l
    lfs f0, lbl_80882C94
    addi r5, r5, fn_801F9488@l
    stb r6, 0x4e(r31)
    li r6, 0x10
    li r7, 0x2
    stfs f1, 0x50(r31)
    stfs f0, 0x54(r31)
    stw r0, 0x58(r31)
    stw r0, 0xbc(r31)
    bl fn_806958E0
lbl_fn_801F8994_000015AC:
    mr r3, r31
    b lbl_fn_801F8994_000015B8
lbl_fn_801F8994_000015B4:
    li r3, 0x0
lbl_fn_801F8994_000015B8:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_801F8B68(void)
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
    stw r28, 0x10(r1)
    beq lbl_fn_801F8B68_0000174C
    lis r4, lbl_80782C70@ha
    addi r4, r4, lbl_80782C70@l
    stw r4, 0x0(r3)
    lwz r0, lbl_8087F148
    cmpwi r0, 0x0
    bne lbl_fn_801F8B68_0000164C
    lis r5, lbl_8073E508@ha
    li r3, 0xc04
    addi r5, r5, lbl_8073E508@l
    li r4, 0x1
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_801F8B68_00001648
    li r0, 0x0
    stw r0, 0x0(r3)
lbl_fn_801F8B68_00001648:
    stw r3, lbl_8087F148
lbl_fn_801F8B68_0000164C:
    lwz r31, lbl_8087F148
    li r4, 0x0
    lwz r3, 0x48(r29)
    lwz r0, 0x0(r31)
    mr r5, r31
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_801F8B68_00001704
lbl_fn_801F8B68_0000166C:
    lwz r0, 0x8(r5)
    cmplw r0, r3
    bne lbl_fn_801F8B68_000016F8
    mulli r0, r4, 0xc
    add r4, r31, r0
    addi r28, r4, 0x4
    lwz r4, 0xc(r4)
    subic. r0, r4, 0x1
    stw r0, 0x8(r28)
    bgt lbl_fn_801F8B68_00001704
    bl fn_800D2338
    addi r0, r31, 0x4
    lis r3, 0x2aab
    subf r0, r0, r28
    subi r3, r3, 0x5555
    mulhw r0, r3, r0
    srawi r0, r0, 1
    srwi r3, r0, 31
    add r4, r0, r3
    mulli r0, r4, 0xc
    add r5, r31, r0
    b lbl_fn_801F8B68_000016E0
lbl_fn_801F8B68_000016C4:
    lwz r0, 0x10(r5)
    addi r4, r4, 0x1
    stw r0, 0x4(r5)
    lwz r0, 0x14(r5)
    stw r0, 0x8(r5)
    lwz r0, 0x18(r5)
    stwu r0, 0xc(r5)
lbl_fn_801F8B68_000016E0:
    lwz r3, 0x0(r31)
    subi r0, r3, 0x1
    cmplw r4, r0
    blt lbl_fn_801F8B68_000016C4
    stw r0, 0x0(r31)
    b lbl_fn_801F8B68_00001704
lbl_fn_801F8B68_000016F8:
    addi r5, r5, 0xc
    addi r4, r4, 0x1
    bdnz lbl_fn_801F8B68_0000166C
lbl_fn_801F8B68_00001704:
    addic. r3, r29, 0xbc
    beq lbl_fn_801F8B68_00001728
    beq lbl_fn_801F8B68_00001728
    lis r4, fn_801F9488@ha
    addi r3, r3, 0x4
    addi r4, r4, fn_801F9488@l
    li r5, 0x10
    li r6, 0x2
    bl fn_806959D8
lbl_fn_801F8B68_00001728:
    cmpwi r29, 0x0
    beq lbl_fn_801F8B68_0000173C
    mr r3, r29
    li r4, 0x0
    bl fn_800D1E9C
lbl_fn_801F8B68_0000173C:
    cmpwi r30, 0x0
    ble lbl_fn_801F8B68_0000174C
    mr r3, r29
    bl dtor_80084684
lbl_fn_801F8B68_0000174C:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801F8D00(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r4, 0x48(r3)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_801F8D00_000017BC
    mr r3, r4
    li r4, 0x0
    bl fn_800D246C
    lwz r4, 0x48(r31)
    li r3, 0x1
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    b lbl_fn_801F8D00_000017C0
lbl_fn_801F8D00_000017BC:
    li r3, 0x0
lbl_fn_801F8D00_000017C0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801F8D64(void)
{
    nofralloc
    lbz r0, 0x4e(r3)
    cmpwi r0, 0x0
    beqlr
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    beqlr
    lbz r0, 0x4c(r3)
    cmpwi r0, 0x0
    beqlr
    lfs f1, 0x50(r3)
    lfs f0, 0x54(r3)
    lwz r4, 0x48(r3)
    fadds f0, f1, f0
    stfs f0, 0x50(r3)
    lfs f1, 0xa0(r4)
    fcmpo cr0, f0, f1
    cror eq, gt, eq
    bne lbl_fn_801F8D64_00001838
    lbz r0, 0x4d(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801F8D64_00001834
    fsubs f0, f0, f1
    stfs f0, 0x50(r3)
    b lbl_fn_801F8D64_00001838
lbl_fn_801F8D64_00001834:
    stfs f1, 0x50(r3)
lbl_fn_801F8D64_00001838:
    lfs f1, 0x50(r3)
    lfs f0, lbl_80882C90
    fcmpo cr0, f1, f0
    bgelr
    lbz r0, 0x4d(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801F8D64_00001868
    lwz r4, 0x48(r3)
    lfs f0, 0xa0(r4)
    fadds f0, f1, f0
    stfs f0, 0x50(r3)
    blr
lbl_fn_801F8D64_00001868:
    stfs f0, 0x50(r3)
    blr
}

asm void fn_801F8E00(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lbz r0, 0x4e(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801F8E00_000018C8
    lwz r4, lbl_8087F138
    cmpwi r4, 0x0
    beq lbl_fn_801F8E00_000018A0
    stw r3, 0x1ac(r4)
lbl_fn_801F8E00_000018A0:
    mr r3, r31
    bl fn_801F8E6C
    lwz r3, 0x48(r31)
    li r4, 0x1
    bl fn_801F465C
    lwz r3, lbl_8087F138
    cmpwi r3, 0x0
    beq lbl_fn_801F8E00_000018C8
    li r0, 0x0
    stw r0, 0x1ac(r3)
lbl_fn_801F8E00_000018C8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801F8E6C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    addi r29, r3, 0x5c
    stw r28, 0x10(r1)
    lwz r4, 0x48(r3)
    lfs f0, 0x50(r3)
    stfs f0, 0x100(r4)
    b lbl_fn_801F8E6C_000019D8
lbl_fn_801F8E6C_00001914:
    lbz r0, 0x0(r29)
    extsb. r0, r0
    beq lbl_fn_801F8E6C_00001944
    cmpwi r0, 0x1
    beq lbl_fn_801F8E6C_0000195C
    cmpwi r0, 0x2
    beq lbl_fn_801F8E6C_0000197C
    cmpwi r0, 0x3
    beq lbl_fn_801F8E6C_0000199C
    cmpwi r0, 0x5
    beq lbl_fn_801F8E6C_000019BC
    b lbl_fn_801F8E6C_000019D0
lbl_fn_801F8E6C_00001944:
    lwz r3, 0x48(r31)
    lfs f1, 0x8(r29)
    lwz r4, 0x4(r29)
    addi r3, r3, 0x58
    bl fn_801FECE0
    b lbl_fn_801F8E6C_000019D0
lbl_fn_801F8E6C_0000195C:
    lwz r3, 0x48(r31)
    lbz r5, 0x1(r29)
    lfs f1, 0x8(r29)
    addi r3, r3, 0x58
    lwz r4, 0x4(r29)
    extsb r5, r5
    bl fn_801FED24
    b lbl_fn_801F8E6C_000019D0
lbl_fn_801F8E6C_0000197C:
    lwz r3, 0x48(r31)
    lbz r5, 0x1(r29)
    lfs f1, 0x8(r29)
    addi r3, r3, 0x58
    lwz r4, 0x4(r29)
    extsb r5, r5
    bl fn_801FED70
    b lbl_fn_801F8E6C_000019D0
lbl_fn_801F8E6C_0000199C:
    lwz r3, 0x48(r31)
    lbz r5, 0x1(r29)
    lfs f1, 0x8(r29)
    addi r3, r3, 0x58
    lwz r4, 0x4(r29)
    extsb r5, r5
    bl fn_801FEDBC
    b lbl_fn_801F8E6C_000019D0
lbl_fn_801F8E6C_000019BC:
    lwz r3, 0x48(r31)
    lwz r4, 0x4(r29)
    lwz r5, 0x8(r29)
    addi r3, r3, 0x58
    bl fn_801FEEFC
lbl_fn_801F8E6C_000019D0:
    addi r29, r29, 0xc
    addi r30, r30, 0x1
lbl_fn_801F8E6C_000019D8:
    lwz r0, 0x58(r31)
    cmplw r30, r0
    blt lbl_fn_801F8E6C_00001914
    mr r29, r31
    addi r30, r31, 0xc0
    li r28, 0x0
    b lbl_fn_801F8E6C_00001A28
lbl_fn_801F8E6C_000019F4:
    lwz r0, 0x4(r30)
    lwz r3, 0x48(r31)
    srwi. r0, r0, 31
    lwz r4, 0xc0(r29)
    addi r3, r3, 0x58
    bne lbl_fn_801F8E6C_00001A14
    addi r5, r30, 0x6
    b lbl_fn_801F8E6C_00001A18
lbl_fn_801F8E6C_00001A14:
    lwz r5, 0xc(r30)
lbl_fn_801F8E6C_00001A18:
    bl fn_801FEE08
    addi r30, r30, 0x10
    addi r29, r29, 0x10
    addi r28, r28, 0x1
lbl_fn_801F8E6C_00001A28:
    lwz r0, 0xbc(r31)
    cmplw r28, r0
    blt lbl_fn_801F8E6C_000019F4
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
