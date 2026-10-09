#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_8000D844(void);
extern void fn_8000E18C(void);
extern void fn_8006F72C(void);
extern void fn_800844D8(void);
extern void fn_800D1E9C(void);
extern void fn_800D94E4(void);
extern void fn_800D9880(void);
extern void fn_800D9890(void);
extern void fn_800D98B0(void);
extern void fn_800D98C0(void);
extern void fn_800D9960(void);
extern void fn_80680770(void);
extern void fn_80686EA4(void);
extern void fn_8068A918(void);
extern void memmove(void);

/* External data declarations */
extern u8 lbl_807347FC[];
extern u8 lbl_80775A88[];
extern u8 lbl_80777BF8[];
extern u8 lbl_807798A0[];
extern u8 lbl_807798BC[];

/* Small data declarations */
extern u32 lbl_8087D940;
extern u32 lbl_8087D944;
extern u32 lbl_8087F008;
extern u32 lbl_80881230;
extern u32 lbl_80881244;

/* Function declarations */
void fn_800DA9A4(void);
void fn_800DAA3C(void);
void fn_800DAB68(void);
void fn_800DAD3C(void);
void fn_800DAD48(void);
void fn_800DAD6C(void);
void fn_800DB3D4(void);
void fn_800DB3EC(void);
void fn_800DB6E0(void);
void fn_800DBC1C(void);
void fn_800DBCC8(void);
void fn_800DBD58(void);
void fn_800DBF5C(void);
void fn_800DBF64(void);
void fn_800DBF68(void);

asm void fn_800DA9A4(void)
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
    li r29, 0x0
    stw r28, 0x10(r1)
    mr r28, r3
    b lbl_fn_800DA9A4_0000006C
lbl_fn_800DA9A4_00000030:
    lwz r3, 0x84(r28)
    lwzx r0, r3, r30
    cmpwi r0, 0x0
    bne lbl_fn_800DA9A4_00000060
    lwz r4, 0x54(r28)
    mr r3, r28
    lwz r0, 0x48(r28)
    mr r6, r29
    lwzx r5, r4, r30
    add r4, r0, r31
    addi r5, r5, 0x1
    bl fn_800D9960
lbl_fn_800DA9A4_00000060:
    addi r29, r29, 0x1
    addi r31, r31, 0x48
    addi r30, r30, 0x4
lbl_fn_800DA9A4_0000006C:
    lwz r0, 0x4c(r28)
    cmpw r29, r0
    blt lbl_fn_800DA9A4_00000030
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800DAA3C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    bne lbl_fn_800DAA3C_000001A0
    lwz r29, 0x4c(r3)
    lwz r5, 0x48(r3)
    mulli r4, r29, 0x48
    subf r0, r29, r29
    stw r0, 0x4c(r3)
    add r30, r5, r4
    b lbl_fn_800DAA3C_00000100
lbl_fn_800DAA3C_000000D8:
    subic. r30, r30, 0x48
    beq lbl_fn_800DAA3C_000000FC
    addic. r0, r30, 0x8
    beq lbl_fn_800DAA3C_000000FC
    lwz r0, 0x8(r30)
    srwi. r0, r0, 31
    beq lbl_fn_800DAA3C_000000FC
    lwz r3, 0x10(r30)
    bl dtor_80084684
lbl_fn_800DAA3C_000000FC:
    subi r29, r29, 0x1
lbl_fn_800DAA3C_00000100:
    cmpwi r29, 0x0
    bne lbl_fn_800DAA3C_000000D8
    lwz r30, 0x64(r31)
    lwz r0, 0x58(r31)
    mulli r3, r30, 0xc
    lwz r4, 0x60(r31)
    subf r0, r0, r0
    stw r0, 0x58(r31)
    subf r0, r30, r30
    stw r0, 0x64(r31)
    add r29, r4, r3
    b lbl_fn_800DAA3C_00000168
lbl_fn_800DAA3C_00000130:
    subic. r29, r29, 0xc
    beq lbl_fn_800DAA3C_00000164
    beq lbl_fn_800DAA3C_00000164
    beq lbl_fn_800DAA3C_00000164
    beq lbl_fn_800DAA3C_00000164
    lwz r0, 0x0(r29)
    cmpwi r0, 0x0
    beq lbl_fn_800DAA3C_00000164
    lwz r0, 0x4(r29)
    subf r0, r0, r0
    stw r0, 0x4(r29)
    lwz r3, 0x0(r29)
    bl dtor_80084684
lbl_fn_800DAA3C_00000164:
    subi r30, r30, 0x1
lbl_fn_800DAA3C_00000168:
    cmpwi r30, 0x0
    bne lbl_fn_800DAA3C_00000130
    lwz r3, 0x70(r31)
    li r0, -0x1
    lwz r4, 0x7c(r31)
    subf r3, r3, r3
    lwz r5, 0x88(r31)
    subf r4, r4, r4
    stw r3, 0x70(r31)
    subf r3, r5, r5
    stw r4, 0x7c(r31)
    stw r3, 0x88(r31)
    stw r0, 0xa4(r31)
    b lbl_fn_800DAA3C_000001A8
lbl_fn_800DAA3C_000001A0:
    stw r4, 0xa4(r3)
    stw r4, 0xa0(r3)
lbl_fn_800DAA3C_000001A8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800DAB68(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    li r0, 0x0
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    stw r29, 0x34(r1)
    mr r29, r4
    stw r28, 0x30(r1)
    mr r28, r3
    stw r0, 0x10(r1)
    lwz r0, 0x40(r4)
    cmpwi r0, 0x0
    beq lbl_fn_800DAB68_000002A0
    li r30, 0x0
    b lbl_fn_800DAB68_00000290
lbl_fn_800DAB68_0000020C:
    mr r4, r30
    addi r3, r28, 0x48
    bl fn_800D9880
    lwz r3, 0x0(r3)
    lwz r0, 0x0(r29)
    cmplw r0, r3
    bne lbl_fn_800DAB68_0000028C
    mr r4, r30
    addi r3, r28, 0x6c
    bl fn_800D98B0
    lfs f0, 0x0(r3)
    mr r4, r30
    addi r3, r28, 0x48
    fctiwz f0, f0
    stfd f0, 0x20(r1)
    lwz r31, 0x24(r1)
    bl fn_800D9880
    addi r3, r3, 0x8
    bl fn_800D9890
    subi r0, r3, 0x1
    mr r4, r30
    mullw r31, r0, r31
    addi r3, r28, 0x78
    bl fn_800D98B0
    lfs f0, 0x0(r3)
    lwz r3, 0x10(r1)
    fctiwz f0, f0
    stfd f0, 0x28(r1)
    lwz r0, 0x2c(r1)
    add r0, r0, r31
    add r0, r3, r0
    stw r0, 0x10(r1)
lbl_fn_800DAB68_0000028C:
    addi r30, r30, 0x1
lbl_fn_800DAB68_00000290:
    addi r3, r28, 0x48
    bl fn_800D98C0
    cmpw r30, r3
    blt lbl_fn_800DAB68_0000020C
lbl_fn_800DAB68_000002A0:
    addi r3, r28, 0x84
    addi r4, r1, 0x10
    bl fn_8000E18C
    mr r4, r29
    addi r3, r28, 0x48
    bl fn_800DAD6C
    addi r3, r28, 0x48
    bl fn_800DB3D4
    bl fn_800DAD3C
    addi r3, r28, 0x54
    la r4, lbl_8087D940
    bl fn_8000E18C
    addi r3, r1, 0x14
    bl fn_800D94E4
    li r30, 0x0
    b lbl_fn_800DAB68_000002F0
lbl_fn_800DAB68_000002E0:
    addi r3, r1, 0x14
    la r4, lbl_8087D944
    bl fn_800DB3EC
    addi r30, r30, 0x1
lbl_fn_800DAB68_000002F0:
    addi r3, r29, 0x8
    bl fn_800D9890
    cmpw r30, r3
    blt lbl_fn_800DAB68_000002E0
    addi r3, r28, 0x60
    addi r4, r1, 0x14
    bl fn_800DB6E0
    lfs f2, 0x3c(r29)
    lfs f0, lbl_80881230
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_800DAB68_00000324
    lfs f2, lbl_80881244
lbl_fn_800DAB68_00000324:
    lfs f1, 0xa8(r28)
    lfs f0, 0xac(r28)
    fdivs f31, f1, f2
    fmuls f0, f1, f0
    fdivs f1, f0, f2
    bl fn_800DAD48
    stfs f1, 0xc(r1)
    addi r3, r28, 0x6c
    addi r4, r1, 0xc
    bl fn_800DB3EC
    fmr f1, f31
    bl fn_800DAD48
    stfs f1, 0x8(r1)
    addi r3, r28, 0x78
    addi r4, r1, 0x8
    bl fn_800DB3EC
    addi r3, r1, 0x14
    li r4, -0x1
    bl fn_8000D844
    lwz r0, 0x54(r1)
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r28, 0x30(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_800DAD3C(void)
{
    nofralloc
    lfs f0, lbl_80881230
    stfs f0, 0x44(r3)
    blr
}

asm void fn_800DAD48(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_8068A918
    lwz r0, 0x14(r1)
    frsp f1, f1
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800DAD6C(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r11, r1, 0x70
    bl _savegpr_27
    lwz r0, 0x4(r3)
    mr r28, r3
    lwz r27, 0x8(r3)
    mr r29, r4
    cmplw r0, r27
    bge lbl_fn_800DAD6C_00000500
    mulli r0, r0, 0x48
    lwz r3, 0x0(r3)
    add. r27, r3, r0
    beq lbl_fn_800DAD6C_000004F0
    lwz r3, 0x8(r4)
    lwz r0, 0x0(r4)
    srwi r5, r3, 31
    stw r0, 0x0(r27)
    cntlzw r0, r5
    lfs f0, 0x4(r4)
    srwi r0, r0, 5
    stfs f0, 0x4(r27)
    cntlzw r0, r0
    srwi. r0, r0, 5
    bne lbl_fn_800DAD6C_00000448
    stw r3, 0x8(r27)
    lwz r0, 0xc(r4)
    stw r0, 0xc(r27)
    lwz r0, 0x10(r4)
    stw r0, 0x10(r27)
    b lbl_fn_800DAD6C_00000490
lbl_fn_800DAD6C_00000448:
    li r0, 0x0
    stw r0, 0x8(r27)
    lwz r4, 0xc(r4)
    addi r3, r27, 0x8
    stw r0, 0xc(r27)
    stw r0, 0x10(r27)
    bl fn_800DBF68
    lwz r0, 0xc(r29)
    addi r3, r27, 0x8
    lbz r4, 0x1c(r1)
    addi r8, r1, 0x18
    stb r4, 0x18(r1)
    slwi r0, r0, 1
    lwz r6, 0x10(r29)
    li r4, 0x0
    li r5, 0x0
    add r7, r6, r0
    bl fn_8006F72C
lbl_fn_800DAD6C_00000490:
    psq_l f1, 0x14(r29), 0, 0
    psq_st f1, 0x14(r27), 0, 0
    lwz r0, 0x1c(r29)
    stw r0, 0x1c(r27)
    lwz r0, 0x20(r29)
    stw r0, 0x20(r27)
    lwz r0, 0x24(r29)
    stw r0, 0x24(r27)
    lfs f0, 0x28(r29)
    stfs f0, 0x28(r27)
    lfs f0, 0x2c(r29)
    stfs f0, 0x2c(r27)
    lfs f0, 0x30(r29)
    stfs f0, 0x30(r27)
    lfs f0, 0x34(r29)
    stfs f0, 0x34(r27)
    lfs f0, 0x38(r29)
    stfs f0, 0x38(r27)
    lfs f0, 0x3c(r29)
    stfs f0, 0x3c(r27)
    lwz r0, 0x40(r29)
    stw r0, 0x40(r27)
    lfs f0, 0x44(r29)
    stfs f0, 0x44(r27)
lbl_fn_800DAD6C_000004F0:
    lwz r3, 0x4(r28)
    addi r0, r3, 0x1
    stw r0, 0x4(r28)
    b lbl_fn_800DAD6C_00000A18
lbl_fn_800DAD6C_00000500:
    lis r3, 0x38e
    li r4, 0x1
    addi r0, r3, 0x38e3
    stw r4, 0x34(r1)
    subf r0, r27, r0
    cmplwi r0, 0x1
    bge lbl_fn_800DAD6C_00000540
    lis r4, lbl_807347FC@ha
    lis r3, __files@ha
    addi r4, r4, lbl_807347FC@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_800DAD6C_00000540:
    lis r3, 0x12f
    addi r0, r3, 0x684b
    cmplw r27, r0
    bge lbl_fn_800DAD6C_00000578
    addi r4, r27, 0x1
    lis r3, 0xcccd
    slwi r0, r4, 2
    subf r0, r4, r0
    subi r3, r3, 0x3333
    mulhwu r0, r3, r0
    srwi r0, r0, 2
    stw r0, 0x2c(r1)
    cmplwi r0, 0x1
    b lbl_fn_800DAD6C_00000598
lbl_fn_800DAD6C_00000578:
    lis r3, 0x25f
    subi r0, r3, 0x2f6a
    cmplw r27, r0
    bge lbl_fn_800DAD6C_00000598
    addi r0, r27, 0x1
    srwi r0, r0, 1
    stw r0, 0x30(r1)
    cmplwi r0, 0x1
lbl_fn_800DAD6C_00000598:
    lwz r4, 0x4(r28)
    li r5, 0x0
    lis r3, 0x38e
    lwz r31, 0x8(r28)
    addi r0, r3, 0x38e3
    addi r4, r4, 0x1
    subf r3, r31, r4
    addi r6, r28, 0x8
    subf r0, r31, r0
    stw r5, 0x38(r1)
    cmplw r3, r0
    stw r5, 0x3c(r1)
    stw r5, 0x40(r1)
    stw r6, 0x44(r1)
    stw r5, 0x48(r1)
    stw r3, 0x20(r1)
    ble lbl_fn_800DAD6C_00000600
    lis r4, lbl_807347FC@ha
    lis r3, __files@ha
    addi r4, r4, lbl_807347FC@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_800DAD6C_00000600:
    lis r3, 0x12f
    addi r0, r3, 0x684b
    cmplw r31, r0
    bge lbl_fn_800DAD6C_00000650
    addi r5, r31, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x20(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r4, r3, r4
    addi r3, r1, 0x28
    srwi r4, r4, 2
    stw r4, 0x28(r1)
    cmplw r4, r0
    bge lbl_fn_800DAD6C_00000644
    addi r3, r1, 0x20
lbl_fn_800DAD6C_00000644:
    lwz r0, 0x0(r3)
    add r30, r31, r0
    b lbl_fn_800DAD6C_00000694
lbl_fn_800DAD6C_00000650:
    lis r3, 0x25f
    subi r0, r3, 0x2f6a
    cmplw r31, r0
    bge lbl_fn_800DAD6C_0000068C
    addi r3, r31, 0x1
    lwz r0, 0x20(r1)
    srwi r3, r3, 1
    stw r3, 0x24(r1)
    cmplw r3, r0
    addi r3, r1, 0x24
    bge lbl_fn_800DAD6C_00000680
    addi r3, r1, 0x20
lbl_fn_800DAD6C_00000680:
    lwz r0, 0x0(r3)
    add r30, r31, r0
    b lbl_fn_800DAD6C_00000694
lbl_fn_800DAD6C_0000068C:
    lis r3, 0x38e
    addi r30, r3, 0x38e3
lbl_fn_800DAD6C_00000694:
    lis r3, 0x38e
    addi r0, r3, 0x38e3
    cmplw r30, r0
    ble lbl_fn_800DAD6C_000006C8
    lis r4, lbl_807347FC@ha
    lis r3, __files@ha
    addi r4, r4, lbl_807347FC@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_800DAD6C_000006C8:
    mulli r3, r30, 0x48
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_fn_800DAD6C_000006FC
    lis r3, __files@ha
    lis r4, lbl_807798A0@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_807798A0@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_800DAD6C_000006FC:
    lwz r6, 0x4(r28)
    li r0, 0x0
    lwz r3, 0x3c(r1)
    mulli r5, r6, 0x48
    stw r27, 0x38(r1)
    stw r30, 0x40(r1)
    mulli r4, r3, 0x48
    add r3, r27, r5
    stw r6, 0x48(r1)
    add. r27, r4, r3
    beq lbl_fn_800DAD6C_00000800
    lwz r4, 0x8(r29)
    lwz r5, 0x0(r29)
    stw r5, 0x0(r27)
    srwi. r3, r4, 31
    lfs f0, 0x4(r29)
    stfs f0, 0x4(r27)
    bne lbl_fn_800DAD6C_0000075C
    stw r4, 0x8(r27)
    lwz r0, 0xc(r29)
    stw r0, 0xc(r27)
    lwz r0, 0x10(r29)
    stw r0, 0x10(r27)
    b lbl_fn_800DAD6C_000007A0
lbl_fn_800DAD6C_0000075C:
    stw r0, 0x8(r27)
    addi r3, r27, 0x8
    lwz r4, 0xc(r29)
    stw r0, 0xc(r27)
    stw r0, 0x10(r27)
    bl fn_800DBF68
    lwz r0, 0xc(r29)
    addi r3, r27, 0x8
    lbz r4, 0x8(r1)
    addi r8, r1, 0xc
    stb r4, 0xc(r1)
    slwi r0, r0, 1
    lwz r6, 0x10(r29)
    li r4, 0x0
    li r5, 0x0
    add r7, r6, r0
    bl fn_8006F72C
lbl_fn_800DAD6C_000007A0:
    psq_l f1, 0x14(r29), 0, 0
    psq_st f1, 0x14(r27), 0, 0
    lwz r0, 0x1c(r29)
    stw r0, 0x1c(r27)
    lwz r0, 0x20(r29)
    stw r0, 0x20(r27)
    lwz r0, 0x24(r29)
    stw r0, 0x24(r27)
    lfs f0, 0x28(r29)
    stfs f0, 0x28(r27)
    lfs f0, 0x2c(r29)
    stfs f0, 0x2c(r27)
    lfs f0, 0x30(r29)
    stfs f0, 0x30(r27)
    lfs f0, 0x34(r29)
    stfs f0, 0x34(r27)
    lfs f0, 0x38(r29)
    stfs f0, 0x38(r27)
    lfs f0, 0x3c(r29)
    stfs f0, 0x3c(r27)
    lwz r0, 0x40(r29)
    stw r0, 0x40(r27)
    lfs f0, 0x44(r29)
    stfs f0, 0x44(r27)
lbl_fn_800DAD6C_00000800:
    lwz r3, 0x4(r28)
    li r27, 0x0
    lwz r0, 0x48(r1)
    lwz r5, 0x3c(r1)
    mulli r4, r3, 0x48
    lwz r29, 0x0(r28)
    addi r5, r5, 0x1
    lwz r3, 0x38(r1)
    mulli r0, r0, 0x48
    stw r5, 0x3c(r1)
    add r31, r29, r4
    add r30, r3, r0
    b lbl_fn_800DAD6C_00000930
lbl_fn_800DAD6C_00000834:
    subic. r30, r30, 0x48
    subi r31, r31, 0x48
    beq lbl_fn_800DAD6C_00000918
    lwz r0, 0x0(r31)
    stw r0, 0x0(r30)
    lfs f0, 0x4(r31)
    stfs f0, 0x4(r30)
    lwz r3, 0x8(r31)
    srwi. r0, r3, 31
    bne lbl_fn_800DAD6C_00000874
    lwz r0, 0xc(r31)
    stw r3, 0x8(r30)
    stw r0, 0xc(r30)
    lwz r0, 0x10(r31)
    stw r0, 0x10(r30)
    b lbl_fn_800DAD6C_000008B8
lbl_fn_800DAD6C_00000874:
    stw r27, 0x8(r30)
    addi r3, r30, 0x8
    stw r27, 0xc(r30)
    stw r27, 0x10(r30)
    lwz r4, 0xc(r31)
    bl fn_800DBF68
    lbz r0, 0x10(r1)
    addi r3, r30, 0x8
    stb r0, 0x14(r1)
    addi r8, r1, 0x14
    li r4, 0x0
    li r5, 0x0
    lwz r0, 0xc(r31)
    lwz r6, 0x10(r31)
    slwi r0, r0, 1
    add r7, r6, r0
    bl fn_8006F72C
lbl_fn_800DAD6C_000008B8:
    psq_l f1, 0x14(r31), 0, 0
    psq_st f1, 0x14(r30), 0, 0
    lwz r0, 0x1c(r31)
    stw r0, 0x1c(r30)
    lwz r0, 0x20(r31)
    stw r0, 0x20(r30)
    lwz r0, 0x24(r31)
    stw r0, 0x24(r30)
    lfs f0, 0x28(r31)
    stfs f0, 0x28(r30)
    lfs f0, 0x2c(r31)
    stfs f0, 0x2c(r30)
    lfs f0, 0x30(r31)
    stfs f0, 0x30(r30)
    lfs f0, 0x34(r31)
    stfs f0, 0x34(r30)
    lfs f0, 0x38(r31)
    stfs f0, 0x38(r30)
    lfs f0, 0x3c(r31)
    stfs f0, 0x3c(r30)
    lwz r0, 0x40(r31)
    stw r0, 0x40(r30)
    lfs f0, 0x44(r31)
    stfs f0, 0x44(r30)
lbl_fn_800DAD6C_00000918:
    lwz r4, 0x48(r1)
    lwz r3, 0x3c(r1)
    subi r0, r4, 0x1
    stw r0, 0x48(r1)
    addi r0, r3, 0x1
    stw r0, 0x3c(r1)
lbl_fn_800DAD6C_00000930:
    cmplw r29, r31
    blt lbl_fn_800DAD6C_00000834
    lwz r0, 0x48(r1)
    addi r30, r1, 0x38
    lwz r7, 0x4(r28)
    mulli r3, r0, 0x48
    lwz r4, 0x3c(r1)
    lwz r8, 0x0(r28)
    lwz r5, 0x38(r1)
    mulli r0, r7, 0x48
    lwz r9, 0x8(r28)
    lwz r6, 0x40(r1)
    add r27, r8, r3
    stw r6, 0x8(r28)
    add r29, r27, r0
    stw r9, 0x40(r1)
    stw r5, 0x0(r28)
    stw r8, 0x38(r1)
    stw r4, 0x4(r28)
    stw r7, 0x3c(r1)
    b lbl_fn_800DAD6C_000009A8
lbl_fn_800DAD6C_00000984:
    subic. r29, r29, 0x48
    beq lbl_fn_800DAD6C_000009A8
    addic. r0, r29, 0x8
    beq lbl_fn_800DAD6C_000009A8
    lwz r0, 0x8(r29)
    srwi. r0, r0, 31
    beq lbl_fn_800DAD6C_000009A8
    lwz r3, 0x10(r29)
    bl dtor_80084684
lbl_fn_800DAD6C_000009A8:
    cmplw r29, r27
    bgt lbl_fn_800DAD6C_00000984
    cmpwi r30, 0x0
    li r0, 0x0
    stw r0, 0x3c(r1)
    beq lbl_fn_800DAD6C_00000A18
    lwz r3, 0x38(r1)
    cmpwi r3, 0x0
    beq lbl_fn_800DAD6C_00000A18
    mulli r0, r0, 0x48
    li r28, 0x0
    stw r28, 0x3c(r1)
    add r27, r3, r0
    b lbl_fn_800DAD6C_00000A08
lbl_fn_800DAD6C_000009E0:
    subic. r27, r27, 0x48
    beq lbl_fn_800DAD6C_00000A04
    addic. r0, r27, 0x8
    beq lbl_fn_800DAD6C_00000A04
    lwz r0, 0x8(r27)
    srwi. r0, r0, 31
    beq lbl_fn_800DAD6C_00000A04
    lwz r3, 0x10(r27)
    bl dtor_80084684
lbl_fn_800DAD6C_00000A04:
    subi r28, r28, 0x1
lbl_fn_800DAD6C_00000A08:
    cmpwi r28, 0x0
    bne lbl_fn_800DAD6C_000009E0
    lwz r3, 0x38(r1)
    bl dtor_80084684
lbl_fn_800DAD6C_00000A18:
    addi r11, r1, 0x70
    bl _restgpr_27
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_800DB3D4(void)
{
    nofralloc
    lwz r4, 0x4(r3)
    lwz r3, 0x0(r3)
    subi r0, r4, 0x1
    mulli r0, r0, 0x48
    add r3, r3, r0
    blr
}

asm void fn_800DB3EC(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r4
    stw r29, 0x34(r1)
    mr r29, r3
    stw r28, 0x30(r1)
    lwz r6, 0x4(r3)
    lwz r5, 0x8(r3)
    cmplw r6, r5
    bge lbl_fn_800DB3EC_00000A9C
    addi r5, r6, 0x1
    stw r5, 0x4(r3)
    subi r0, r5, 0x1
    lwz r3, 0x0(r3)
    slwi r0, r0, 2
    lwz r4, 0x0(r4)
    stwx r4, r3, r0
    b lbl_fn_800DB3EC_00000D1C
lbl_fn_800DB3EC_00000A9C:
    lis r3, 0x4000
    subi r0, r3, 0x1
    subf r0, r5, r0
    cmplwi r0, 0x1
    bge lbl_fn_800DB3EC_00000AD4
    lis r4, lbl_807347FC@ha
    lis r3, __files@ha
    addi r4, r4, lbl_807347FC@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_800DB3EC_00000AD4:
    li r5, 0x0
    addi r4, r29, 0x8
    lis r3, 0x4000
    stw r5, 0x14(r1)
    subi r0, r3, 0x1
    stw r5, 0x18(r1)
    stw r5, 0x1c(r1)
    stw r4, 0x20(r1)
    stw r5, 0x24(r1)
    lwz r3, 0x4(r29)
    lwz r31, 0x8(r29)
    addi r3, r3, 0x1
    subf r3, r31, r3
    subf r0, r31, r0
    cmplw r3, r0
    stw r3, 0x10(r1)
    ble lbl_fn_800DB3EC_00000B3C
    lis r4, lbl_807347FC@ha
    lis r3, __files@ha
    addi r4, r4, lbl_807347FC@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_800DB3EC_00000B3C:
    lis r3, 0x1555
    addi r0, r3, 0x5555
    cmplw r31, r0
    bge lbl_fn_800DB3EC_00000B8C
    addi r5, r31, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x10(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r4, r3, r4
    addi r3, r1, 0x8
    srwi r4, r4, 2
    stw r4, 0x8(r1)
    cmplw r4, r0
    bge lbl_fn_800DB3EC_00000B80
    addi r3, r1, 0x10
lbl_fn_800DB3EC_00000B80:
    lwz r0, 0x0(r3)
    add r31, r31, r0
    b lbl_fn_800DB3EC_00000BD0
lbl_fn_800DB3EC_00000B8C:
    lis r3, 0x2aab
    subi r0, r3, 0x5556
    cmplw r31, r0
    bge lbl_fn_800DB3EC_00000BC8
    addi r3, r31, 0x1
    lwz r0, 0x10(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_800DB3EC_00000BBC
    addi r3, r1, 0x10
lbl_fn_800DB3EC_00000BBC:
    lwz r0, 0x0(r3)
    add r31, r31, r0
    b lbl_fn_800DB3EC_00000BD0
lbl_fn_800DB3EC_00000BC8:
    lis r3, 0x4000
    subi r31, r3, 0x1
lbl_fn_800DB3EC_00000BD0:
    lis r3, 0x4000
    subi r0, r3, 0x1
    cmplw r31, r0
    ble lbl_fn_800DB3EC_00000C04
    lis r4, lbl_807347FC@ha
    lis r3, __files@ha
    addi r4, r4, lbl_807347FC@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_800DB3EC_00000C04:
    slwi r3, r31, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r28, r3
    bne lbl_fn_800DB3EC_00000C38
    lis r3, __files@ha
    lis r4, lbl_80775A88@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_800DB3EC_00000C38:
    lwz r0, 0x18(r1)
    stw r28, 0x14(r1)
    slwi r3, r0, 2
    lwz r4, 0x0(r30)
    stw r31, 0x1c(r1)
    lwz r0, 0x4(r29)
    stw r0, 0x24(r1)
    slwi r0, r0, 2
    add r0, r28, r0
    stwx r4, r3, r0
    lwz r3, 0x18(r1)
    lwz r0, 0x24(r1)
    addi r3, r3, 0x1
    stw r3, 0x18(r1)
    lwz r3, 0x14(r1)
    lwz r4, 0x4(r29)
    lwz r30, 0x0(r29)
    slwi r4, r4, 2
    add r5, r30, r4
    subf r5, r30, r5
    mr r4, r30
    srawi r5, r5, 2
    addze r28, r5
    subf r0, r28, r0
    stw r0, 0x24(r1)
    slwi r31, r28, 2
    slwi r0, r0, 2
    mr r5, r31
    add r3, r3, r0
    bl memcpy
    mr r3, r30
    mr r5, r31
    li r4, 0x0
    bl memset
    lwz r0, 0x18(r1)
    li r4, 0x0
    addic. r3, r1, 0x14
    add r0, r0, r28
    stw r0, 0x18(r1)
    stw r4, 0x4(r29)
    lwz r3, 0x8(r29)
    lwz r0, 0x1c(r1)
    stw r0, 0x8(r29)
    stw r3, 0x1c(r1)
    lwz r0, 0x14(r1)
    lwz r3, 0x0(r29)
    stw r0, 0x0(r29)
    stw r3, 0x14(r1)
    lwz r0, 0x18(r1)
    stw r0, 0x4(r29)
    stw r4, 0x18(r1)
    beq lbl_fn_800DB3EC_00000D1C
    lwz r3, 0x14(r1)
    cmpwi r3, 0x0
    beq lbl_fn_800DB3EC_00000D1C
    stw r4, 0x18(r1)
    bl dtor_80084684
lbl_fn_800DB3EC_00000D1C:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r28, 0x30(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_800DB6E0(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stmw r23, 0x2c(r1)
    mr r28, r3
    mr r29, r4
    lwz r0, 0x4(r3)
    lwz r5, 0x8(r3)
    cmplw r0, r5
    bge lbl_fn_800DB6E0_00000E5C
    mulli r0, r0, 0xc
    lwz r3, 0x0(r3)
    add. r31, r3, r0
    beq lbl_fn_800DB6E0_00000E4C
    lwz r0, 0x4(r4)
    li r3, 0x0
    lwz r30, 0x0(r4)
    slwi r0, r0, 2
    stw r3, 0x0(r31)
    add r24, r30, r0
    subf r29, r30, r24
    stw r3, 0x4(r31)
    srawi r0, r29, 2
    addze. r26, r0
    stw r3, 0x8(r31)
    beq lbl_fn_800DB6E0_00000E4C
    lis r3, 0x4000
    subi r0, r3, 0x1
    cmplw r26, r0
    ble lbl_fn_800DB6E0_00000DD8
    lis r4, lbl_807347FC@ha
    lis r3, __files@ha
    addi r4, r4, lbl_807347FC@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_800DB6E0_00000DD8:
    slwi r3, r26, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r25, r3
    bne lbl_fn_800DB6E0_00000E0C
    lis r3, __files@ha
    lis r4, lbl_80775A88@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_800DB6E0_00000E0C:
    stw r25, 0x0(r31)
    subf r0, r30, r24
    srawi r0, r0, 2
    mr r4, r30
    stw r26, 0x8(r31)
    addze r0, r0
    slwi r5, r0, 2
    lwz r3, 0x4(r31)
    slwi r0, r3, 2
    add r3, r25, r0
    bl memmove
    srawi r0, r29, 2
    lwz r3, 0x4(r31)
    addze r0, r0
    add r0, r3, r0
    stw r0, 0x4(r31)
lbl_fn_800DB6E0_00000E4C:
    lwz r3, 0x4(r28)
    addi r0, r3, 0x1
    stw r0, 0x4(r28)
    b lbl_fn_800DB6E0_00001264
lbl_fn_800DB6E0_00000E5C:
    lis r3, 0x1555
    addi r0, r3, 0x5555
    subf r0, r5, r0
    cmplwi r0, 0x1
    bge lbl_fn_800DB6E0_00000E94
    lis r4, lbl_807347FC@ha
    lis r3, __files@ha
    addi r4, r4, lbl_807347FC@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_800DB6E0_00000E94:
    lwz r4, 0x4(r28)
    li r6, 0x0
    lis r3, 0x1555
    lwz r31, 0x8(r28)
    addi r0, r3, 0x5555
    addi r4, r4, 0x1
    subf r3, r31, r4
    addi r5, r28, 0x8
    subf r0, r31, r0
    stw r6, 0x14(r1)
    cmplw r3, r0
    stw r6, 0x18(r1)
    stw r6, 0x1c(r1)
    stw r5, 0x20(r1)
    stw r6, 0x24(r1)
    stw r3, 0x8(r1)
    ble lbl_fn_800DB6E0_00000EFC
    lis r4, lbl_807347FC@ha
    lis r3, __files@ha
    addi r4, r4, lbl_807347FC@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_800DB6E0_00000EFC:
    lis r3, 0x71c
    addi r0, r3, 0x71c7
    cmplw r31, r0
    bge lbl_fn_800DB6E0_00000F4C
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
    bge lbl_fn_800DB6E0_00000F40
    addi r3, r1, 0x8
lbl_fn_800DB6E0_00000F40:
    lwz r0, 0x0(r3)
    add r26, r31, r0
    b lbl_fn_800DB6E0_00000F90
lbl_fn_800DB6E0_00000F4C:
    lis r3, 0xe39
    subi r0, r3, 0x1c72
    cmplw r31, r0
    bge lbl_fn_800DB6E0_00000F88
    addi r3, r31, 0x1
    lwz r0, 0x8(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_800DB6E0_00000F7C
    addi r3, r1, 0x8
lbl_fn_800DB6E0_00000F7C:
    lwz r0, 0x0(r3)
    add r26, r31, r0
    b lbl_fn_800DB6E0_00000F90
lbl_fn_800DB6E0_00000F88:
    lis r3, 0x1555
    addi r26, r3, 0x5555
lbl_fn_800DB6E0_00000F90:
    lis r3, 0x1555
    addi r0, r3, 0x5555
    cmplw r26, r0
    ble lbl_fn_800DB6E0_00000FC4
    lis r4, lbl_807347FC@ha
    lis r3, __files@ha
    addi r4, r4, lbl_807347FC@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_800DB6E0_00000FC4:
    mulli r3, r26, 0xc
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r24, r3
    bne lbl_fn_800DB6E0_00000FF8
    lis r3, __files@ha
    lis r4, lbl_807798BC@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_807798BC@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_800DB6E0_00000FF8:
    lwz r6, 0x4(r28)
    lis r25, __files@ha
    lwz r0, 0x18(r1)
    lis r3, lbl_807347FC@ha
    mulli r5, r6, 0xc
    stw r24, 0x14(r1)
    addi r3, r3, lbl_807347FC@l
    stw r26, 0x1c(r1)
    addi r25, r25, __files@l
    mulli r4, r0, 0xc
    add r0, r24, r5
    stw r6, 0x24(r1)
    lis r27, lbl_80775A88@ha
    add. r31, r4, r0
    li r5, 0x0
    lis r4, 0x4000
    beq lbl_fn_800DB6E0_000010F0
    lwz r0, 0x4(r29)
    lwz r29, 0x0(r29)
    slwi r0, r0, 2
    stw r5, 0x0(r31)
    add r23, r29, r0
    subf r30, r29, r23
    stw r5, 0x4(r31)
    srawi r0, r30, 2
    addze. r24, r0
    stw r5, 0x8(r31)
    beq lbl_fn_800DB6E0_000010F0
    subi r0, r4, 0x1
    cmplw r24, r0
    ble lbl_fn_800DB6E0_00001088
    addi r4, r3, 0x1
    addi r3, r25, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_800DB6E0_00001088:
    slwi r3, r24, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r26, r3
    bne lbl_fn_800DB6E0_000010B0
    addi r3, r25, 0xa0
    addi r4, r27, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_800DB6E0_000010B0:
    stw r26, 0x0(r31)
    subf r0, r29, r23
    srawi r0, r0, 2
    mr r4, r29
    stw r24, 0x8(r31)
    addze r0, r0
    slwi r5, r0, 2
    lwz r3, 0x4(r31)
    slwi r0, r3, 2
    add r3, r26, r0
    bl memmove
    srawi r0, r30, 2
    lwz r3, 0x4(r31)
    addze r0, r0
    add r0, r3, r0
    stw r0, 0x4(r31)
lbl_fn_800DB6E0_000010F0:
    lwz r0, 0x4(r28)
    lis r3, 0x2aab
    lwz r29, 0x0(r28)
    subi r6, r3, 0x5555
    mulli r5, r0, 0xc
    lwz r3, 0x18(r1)
    lwz r0, 0x24(r1)
    mr r4, r29
    addi r7, r3, 0x1
    lwz r3, 0x14(r1)
    add r5, r29, r5
    stw r7, 0x18(r1)
    subf r5, r29, r5
    mulhw r5, r6, r5
    srawi r5, r5, 1
    srwi r6, r5, 31
    add r25, r5, r6
    subf r0, r25, r0
    stw r0, 0x24(r1)
    mulli r23, r25, 0xc
    mulli r0, r0, 0xc
    mr r5, r23
    add r3, r3, r0
    bl memcpy
    mr r3, r29
    mr r5, r23
    li r4, 0x0
    bl memset
    lwz r0, 0x24(r1)
    addi r27, r1, 0x14
    lwz r6, 0x4(r28)
    mulli r3, r0, 0xc
    lwz r0, 0x18(r1)
    lwz r7, 0x0(r28)
    add r5, r0, r25
    lwz r4, 0x14(r1)
    add r25, r7, r3
    mulli r0, r6, 0xc
    lwz r8, 0x8(r28)
    lwz r3, 0x1c(r1)
    stw r3, 0x8(r28)
    add r26, r25, r0
    stw r8, 0x1c(r1)
    stw r4, 0x0(r28)
    stw r7, 0x14(r1)
    stw r5, 0x4(r28)
    stw r6, 0x18(r1)
    b lbl_fn_800DB6E0_000011E4
lbl_fn_800DB6E0_000011B0:
    subic. r26, r26, 0xc
    beq lbl_fn_800DB6E0_000011E4
    beq lbl_fn_800DB6E0_000011E4
    beq lbl_fn_800DB6E0_000011E4
    beq lbl_fn_800DB6E0_000011E4
    lwz r0, 0x0(r26)
    cmpwi r0, 0x0
    beq lbl_fn_800DB6E0_000011E4
    lwz r0, 0x4(r26)
    subf r0, r0, r0
    stw r0, 0x4(r26)
    lwz r3, 0x0(r26)
    bl dtor_80084684
lbl_fn_800DB6E0_000011E4:
    cmplw r26, r25
    bgt lbl_fn_800DB6E0_000011B0
    cmpwi r27, 0x0
    li r0, 0x0
    stw r0, 0x18(r1)
    beq lbl_fn_800DB6E0_00001264
    lwz r3, 0x14(r1)
    cmpwi r3, 0x0
    beq lbl_fn_800DB6E0_00001264
    mulli r0, r0, 0xc
    li r26, 0x0
    stw r26, 0x18(r1)
    add r25, r3, r0
    b lbl_fn_800DB6E0_00001254
lbl_fn_800DB6E0_0000121C:
    subic. r25, r25, 0xc
    beq lbl_fn_800DB6E0_00001250
    beq lbl_fn_800DB6E0_00001250
    beq lbl_fn_800DB6E0_00001250
    beq lbl_fn_800DB6E0_00001250
    lwz r0, 0x0(r25)
    cmpwi r0, 0x0
    beq lbl_fn_800DB6E0_00001250
    lwz r0, 0x4(r25)
    subf r0, r0, r0
    stw r0, 0x4(r25)
    lwz r3, 0x0(r25)
    bl dtor_80084684
lbl_fn_800DB6E0_00001250:
    subi r26, r26, 0x1
lbl_fn_800DB6E0_00001254:
    cmpwi r26, 0x0
    bne lbl_fn_800DB6E0_0000121C
    lwz r3, 0x14(r1)
    bl dtor_80084684
lbl_fn_800DB6E0_00001264:
    lmw r23, 0x2c(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_800DBC1C(void)
{
    nofralloc
    li r11, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r10, 0x0
    b lbl_fn_800DBC1C_00001314
lbl_fn_800DBC1C_00001290:
    lwz r0, 0x48(r3)
    add r7, r0, r4
    lwz r0, 0x8(r7)
    srwi. r0, r0, 31
    bne lbl_fn_800DBC1C_000012B0
    lbz r0, 0x8(r7)
    clrlwi r7, r0, 25
    b lbl_fn_800DBC1C_000012B4
lbl_fn_800DBC1C_000012B0:
    lwz r7, 0xc(r7)
lbl_fn_800DBC1C_000012B4:
    lwz r8, 0x54(r3)
    subi r0, r7, 0x1
    li r12, 0x0
    li r7, 0x0
    stwx r0, r8, r6
    lwz r8, 0x84(r3)
    stwx r10, r8, r6
    b lbl_fn_800DBC1C_000012F0
lbl_fn_800DBC1C_000012D4:
    lwz r8, 0x60(r3)
    addi r12, r12, 0x1
    lwz r9, 0x78(r3)
    lwzx r8, r8, r5
    lfsx f0, r9, r6
    stfsx f0, r8, r7
    addi r7, r7, 0x4
lbl_fn_800DBC1C_000012F0:
    lwz r8, 0x54(r3)
    lwzx r8, r8, r6
    addi r0, r8, 0x1
    cmpw r12, r0
    blt lbl_fn_800DBC1C_000012D4
    addi r11, r11, 0x1
    addi r4, r4, 0x48
    addi r5, r5, 0xc
    addi r6, r6, 0x4
lbl_fn_800DBC1C_00001314:
    lwz r0, 0x4c(r3)
    cmpw r11, r0
    blt lbl_fn_800DBC1C_00001290
    blr
}

asm void fn_800DBCC8(void)
{
    nofralloc
    lwz r0, 0x4c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_800DBCC8_00001338
    li r3, 0x0
    blr
lbl_fn_800DBCC8_00001338:
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    mtctr r0
    ble lbl_fn_800DBCC8_000013AC
lbl_fn_800DBCC8_0000134C:
    lwz r0, 0x48(r3)
    lwz r7, 0x60(r3)
    add r9, r0, r4
    lwz r0, 0x8(r9)
    lwzx r8, r7, r5
    srwi. r0, r0, 31
    bne lbl_fn_800DBCC8_00001374
    lbz r0, 0x8(r9)
    clrlwi r7, r0, 25
    b lbl_fn_800DBCC8_00001378
lbl_fn_800DBCC8_00001374:
    lwz r7, 0xc(r9)
lbl_fn_800DBCC8_00001378:
    subi r0, r7, 0x1
    lwz r7, 0x78(r3)
    slwi r0, r0, 2
    lfsx f1, r8, r0
    lfsx f0, r7, r6
    fcmpu cr0, f1, f0
    beq lbl_fn_800DBCC8_0000139C
    li r3, 0x0
    blr
lbl_fn_800DBCC8_0000139C:
    addi r4, r4, 0x48
    addi r5, r5, 0xc
    addi r6, r6, 0x4
    bdnz lbl_fn_800DBCC8_0000134C
lbl_fn_800DBCC8_000013AC:
    li r3, 0x1
    blr
}

asm void fn_800DBD58(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r30, r3
    mr r31, r4
    beq lbl_fn_800DBD58_000015A0
    addic. r4, r3, 0x84
    li r0, 0x0
    stw r0, lbl_8087F008
    beq lbl_fn_800DBD58_0000140C
    beq lbl_fn_800DBD58_0000140C
    beq lbl_fn_800DBD58_0000140C
    beq lbl_fn_800DBD58_0000140C
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_800DBD58_0000140C
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_800DBD58_0000140C:
    addic. r4, r30, 0x78
    beq lbl_fn_800DBD58_0000143C
    beq lbl_fn_800DBD58_0000143C
    beq lbl_fn_800DBD58_0000143C
    beq lbl_fn_800DBD58_0000143C
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_800DBD58_0000143C
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_800DBD58_0000143C:
    addic. r4, r30, 0x6c
    beq lbl_fn_800DBD58_0000146C
    beq lbl_fn_800DBD58_0000146C
    beq lbl_fn_800DBD58_0000146C
    beq lbl_fn_800DBD58_0000146C
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_800DBD58_0000146C
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_800DBD58_0000146C:
    addic. r29, r30, 0x60
    beq lbl_fn_800DBD58_000014E8
    beq lbl_fn_800DBD58_000014E8
    beq lbl_fn_800DBD58_000014E8
    lwz r4, 0x0(r29)
    cmpwi r4, 0x0
    beq lbl_fn_800DBD58_000014E8
    lwz r27, 0x4(r29)
    mulli r3, r27, 0xc
    subf r0, r27, r27
    stw r0, 0x4(r29)
    add r28, r4, r3
    b lbl_fn_800DBD58_000014D8
lbl_fn_800DBD58_000014A0:
    subic. r28, r28, 0xc
    beq lbl_fn_800DBD58_000014D4
    beq lbl_fn_800DBD58_000014D4
    beq lbl_fn_800DBD58_000014D4
    beq lbl_fn_800DBD58_000014D4
    lwz r0, 0x0(r28)
    cmpwi r0, 0x0
    beq lbl_fn_800DBD58_000014D4
    lwz r0, 0x4(r28)
    subf r0, r0, r0
    stw r0, 0x4(r28)
    lwz r3, 0x0(r28)
    bl dtor_80084684
lbl_fn_800DBD58_000014D4:
    subi r27, r27, 0x1
lbl_fn_800DBD58_000014D8:
    cmpwi r27, 0x0
    bne lbl_fn_800DBD58_000014A0
    lwz r3, 0x0(r29)
    bl dtor_80084684
lbl_fn_800DBD58_000014E8:
    addic. r4, r30, 0x54
    beq lbl_fn_800DBD58_00001518
    beq lbl_fn_800DBD58_00001518
    beq lbl_fn_800DBD58_00001518
    beq lbl_fn_800DBD58_00001518
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_800DBD58_00001518
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_800DBD58_00001518:
    addic. r27, r30, 0x48
    beq lbl_fn_800DBD58_00001584
    beq lbl_fn_800DBD58_00001584
    beq lbl_fn_800DBD58_00001584
    lwz r4, 0x0(r27)
    cmpwi r4, 0x0
    beq lbl_fn_800DBD58_00001584
    lwz r29, 0x4(r27)
    mulli r3, r29, 0x48
    subf r0, r29, r29
    stw r0, 0x4(r27)
    add r28, r4, r3
    b lbl_fn_800DBD58_00001574
lbl_fn_800DBD58_0000154C:
    subic. r28, r28, 0x48
    beq lbl_fn_800DBD58_00001570
    addic. r0, r28, 0x8
    beq lbl_fn_800DBD58_00001570
    lwz r0, 0x8(r28)
    srwi. r0, r0, 31
    beq lbl_fn_800DBD58_00001570
    lwz r3, 0x10(r28)
    bl dtor_80084684
lbl_fn_800DBD58_00001570:
    subi r29, r29, 0x1
lbl_fn_800DBD58_00001574:
    cmpwi r29, 0x0
    bne lbl_fn_800DBD58_0000154C
    lwz r3, 0x0(r27)
    bl dtor_80084684
lbl_fn_800DBD58_00001584:
    mr r3, r30
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r31, 0x0
    ble lbl_fn_800DBD58_000015A0
    mr r3, r30
    bl dtor_80084684
lbl_fn_800DBD58_000015A0:
    mr r3, r30
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800DBF5C(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_800DBF64(void)
{
    nofralloc
    blr
}

asm void fn_800DBF68(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r5, 0x8000
    stw r0, 0x34(r1)
    subi r0, r5, 0x2
    cmplw r4, r0
    stmw r24, 0x10(r1)
    mr r31, r3
    mr r24, r4
    ble lbl_fn_800DBF68_00001610
    lis r4, lbl_807347FC@ha
    lis r3, __files@ha
    addi r4, r4, lbl_807347FC@l
    addi r3, r3, __files@l
    addi r4, r4, 0x15
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_800DBF68_00001610:
    lwz r0, 0x0(r31)
    srwi. r29, r0, 31
    bne lbl_fn_800DBF68_0000162C
    lbz r0, 0x0(r31)
    li r3, 0x5
    clrlwi r27, r0, 25
    b lbl_fn_800DBF68_00001634
lbl_fn_800DBF68_0000162C:
    lwz r27, 0x4(r31)
    clrlwi r3, r0, 1
lbl_fn_800DBF68_00001634:
    cmplw r24, r27
    bge lbl_fn_800DBF68_00001640
    mr r24, r27
lbl_fn_800DBF68_00001640:
    addi r0, r24, 0x1
    li r30, 0x5
    cmplwi r0, 0x5
    ble lbl_fn_800DBF68_00001658
    addi r0, r24, 0x8
    clrrwi r30, r0, 3
lbl_fn_800DBF68_00001658:
    cmplw cr1, r30, r3
    beq cr1, lbl_fn_800DBF68_00001774
    cmplwi r30, 0x5
    bne lbl_fn_800DBF68_00001678
    lwz r25, 0x8(r31)
    addi r26, r31, 0x2
    li r24, 0x0
    b lbl_fn_800DBF68_00001708
lbl_fn_800DBF68_00001678:
    ble cr1, lbl_fn_800DBF68_000016B4
    slwi r3, r30, 1
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r26, r3
    bne lbl_fn_800DBF68_000016F0
    lis r3, __files@ha
    lis r4, lbl_80777BF8@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80777BF8@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
    b lbl_fn_800DBF68_000016F0
lbl_fn_800DBF68_000016B4:
    slwi r3, r30, 1
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r26, r3
    bne lbl_fn_800DBF68_000016E8
    lis r3, __files@ha
    lis r4, lbl_80777BF8@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80777BF8@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_800DBF68_000016E8:
    cmpwi r26, 0x0
    beq lbl_fn_800DBF68_00001774
lbl_fn_800DBF68_000016F0:
    cmpwi r29, 0x0
    li r24, 0x1
    beq lbl_fn_800DBF68_00001704
    lwz r25, 0x8(r31)
    b lbl_fn_800DBF68_00001708
lbl_fn_800DBF68_00001704:
    addi r25, r31, 0x2
lbl_fn_800DBF68_00001708:
    slwi r3, r27, 1
    extrwi r0, r27, 1, 1
    add r0, r0, r3
    mr r4, r25
    clrrwi r28, r0, 1
    mr r3, r26
    mr r5, r28
    bl memmove
    cmpwi r29, 0x0
    li r0, 0x0
    sthx r0, r26, r28
    beq lbl_fn_800DBF68_00001740
    mr r3, r25
    bl dtor_80084684
lbl_fn_800DBF68_00001740:
    lwz r0, 0x0(r31)
    cmpwi r24, 0x0
    rlwimi r0, r24, 31, 0, 0
    stw r0, 0x0(r31)
    bne lbl_fn_800DBF68_00001764
    lbz r0, 0x0(r31)
    rlwimi r0, r27, 0, 25, 31
    stb r0, 0x0(r31)
    b lbl_fn_800DBF68_00001774
lbl_fn_800DBF68_00001764:
    rlwimi r0, r30, 0, 1, 31
    stw r26, 0x8(r31)
    stw r27, 0x4(r31)
    stw r0, 0x0(r31)
lbl_fn_800DBF68_00001774:
    lmw r24, 0x10(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}
