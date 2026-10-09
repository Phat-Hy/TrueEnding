#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void dtor_80084684(void);
extern void fn_8006F548(void);
extern void fn_80084320(void);
extern void fn_800D1D3C(void);
extern void fn_800D1E9C(void);
extern void fn_800D2338(void);
extern void fn_800D246C(void);
extern void fn_800DC6B4(void);
extern void fn_800DD3FC(void);
extern void fn_801ED928(void);
extern void fn_801EEF74(void);
extern void fn_801EF9B4(void);
extern void fn_801EFA78(void);
extern void fn_801EFB00(void);
extern void fn_801F362C(void);
extern void fn_801F3FF8(void);
extern void fn_801F6450(void);
extern void fn_801F6464(void);
extern void fn_801FD5A0(void);
extern void fn_801FDA20(void);
extern void fn_801FECE0(void);
extern void fn_801FED24(void);
extern void fn_801FED70(void);
extern void fn_801FEDBC(void);
extern void fn_801FEE08(void);
extern void fn_801FEEFC(void);
extern void fn_801FEF40(void);
extern void fn_801FFA04(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473E8C(void);
extern void fn_80473F50(void);
extern void fn_80473F88(void);
extern void fn_806958E0(void);
extern void fn_806959D8(void);

/* External data declarations */
extern u8 lbl_8073E408[];
extern u8 lbl_8073E508[];
extern u8 lbl_80782C40[];
extern u8 lbl_80782CF0[];

/* Small data declarations */
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EEC8;
extern u32 lbl_8087F138;
extern u32 lbl_8087F148;
extern u32 lbl_80882C80;
extern u32 lbl_80882C88;
extern u32 lbl_80882C90;
extern u32 lbl_80882C94;

/* Function declarations */
void fn_801F4230(void);
void fn_801F42A8(void);
void fn_801F43E8(void);
void fn_801F4484(void);
void fn_801F4514(void);
void fn_801F45F4(void);
void fn_801F465C(void);
void fn_801F4728(void);
void fn_801F4818(void);
void fn_801F48C8(void);
void fn_801F4998(void);
void fn_801F4AA0(void);
void fn_801F4B4C(void);
void fn_801F4C14(void);
void fn_801F4CB4(void);
void fn_801F4D80(void);
void fn_801F4DDC(void);
void fn_801F4E30(void);
void fn_801F4E8C(void);
void fn_801F4F08(void);
void fn_801F4F84(void);
void fn_801F4FF4(void);
void fn_801F51C8(void);
void fn_801F5360(void);
void fn_801F53C4(void);
void fn_801F5460(void);
void fn_801F54CC(void);
void fn_801F5644(void);
void fn_801F5740(void);
void fn_801F583C(void);

asm void fn_801F4230(void)
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
    beq lbl_fn_801F4230_0000005C
    addic. r3, r3, 0xf0
    beq lbl_fn_801F4230_00000034
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_801F4230_00000034:
    addi r3, r30, 0x48
    li r4, -0x1
    bl fn_801EEF74
    mr r3, r30
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r31, 0x0
    ble lbl_fn_801F4230_0000005C
    mr r3, r30
    bl dtor_80084684
lbl_fn_801F4230_0000005C:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801F42A8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0xf8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801F42A8_000000B8
    cmpwi r0, 0x1
    beq lbl_fn_801F42A8_000000C4
    cmpwi r0, 0x2
    beq lbl_fn_801F42A8_00000174
    cmpwi r0, 0x3
    beq lbl_fn_801F42A8_00000194
    b lbl_fn_801F42A8_0000019C
lbl_fn_801F42A8_000000B8:
    li r0, 0x1
    stw r0, 0xf8(r3)
    b lbl_fn_801F42A8_0000019C
lbl_fn_801F42A8_000000C4:
    addi r3, r3, 0xf0
    bl fn_80473F50
    cmpwi r3, 0x0
    bne lbl_fn_801F42A8_0000019C
    lwz r3, lbl_8087F138
    addi r3, r3, 0x168
    bl fn_801F362C
    cmpwi r3, 0x0
    bne lbl_fn_801F42A8_0000019C
    addi r3, r30, 0xf0
    bl fn_80470580
    cmpwi r3, 0x0
    beq lbl_fn_801F42A8_00000164
    lwz r0, 0xfc(r30)
    addi r3, r30, 0xf0
    oris r0, r0, 0x800
    stw r0, 0xfc(r30)
    bl fn_8047059C
    mr r31, r3
    addi r3, r30, 0xf0
    bl fn_80470580
    lwz r6, lbl_8087F138
    mr r4, r31
    addi r5, r30, 0x48
    li r7, 0x1
    addi r6, r6, 0x168
    bl fn_801FFA04
    addi r3, r30, 0x48
    bl fn_801EFB00
    addi r3, r30, 0xf0
    bl fn_80473F88
    lwz r0, 0xfc(r30)
    srawi. r0, r0, 31
    beq lbl_fn_801F42A8_00000158
    li r0, 0x3
    stw r0, 0xf8(r30)
    b lbl_fn_801F42A8_0000019C
lbl_fn_801F42A8_00000158:
    li r0, 0x2
    stw r0, 0xf8(r30)
    b lbl_fn_801F42A8_0000019C
lbl_fn_801F42A8_00000164:
    li r0, 0x4
    stw r0, 0xf8(r30)
    li r3, 0x1
    b lbl_fn_801F42A8_000001A0
lbl_fn_801F42A8_00000174:
    addi r3, r3, 0x48
    bl fn_801EF9B4
    cmpwi r3, 0x0
    bne lbl_fn_801F42A8_0000019C
    li r0, 0x3
    stw r0, 0xf8(r30)
    li r3, 0x1
    b lbl_fn_801F42A8_000001A0
lbl_fn_801F42A8_00000194:
    li r3, 0x1
    b lbl_fn_801F42A8_000001A0
lbl_fn_801F42A8_0000019C:
    li r3, 0x0
lbl_fn_801F42A8_000001A0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801F43E8(void)
{
    nofralloc
    lwz r4, 0xfc(r3)
    extlwi r0, r4, 2, 1
    srawi. r0, r0, 31
    beqlr
    extlwi r0, r4, 2, 4
    srawi. r0, r0, 31
    beqlr
    extlwi r0, r4, 2, 2
    srawi. r0, r0, 31
    beqlr
    lfs f1, 0x100(r3)
    lfs f0, 0x104(r3)
    lfs f2, 0xa0(r3)
    fadds f0, f1, f0
    stfs f0, 0x100(r3)
    fcmpo cr0, f0, f2
    cror eq, gt, eq
    bne lbl_fn_801F43E8_0000021C
    extlwi r0, r4, 2, 3
    srawi. r0, r0, 31
    beq lbl_fn_801F43E8_00000218
    fsubs f0, f0, f2
    stfs f0, 0x100(r3)
    b lbl_fn_801F43E8_0000021C
lbl_fn_801F43E8_00000218:
    stfs f2, 0x100(r3)
lbl_fn_801F43E8_0000021C:
    lfs f1, 0x100(r3)
    lfs f0, lbl_80882C80
    fcmpo cr0, f1, f0
    bgelr
    lwz r0, 0xfc(r3)
    extlwi r0, r0, 2, 3
    srawi. r0, r0, 31
    beq lbl_fn_801F43E8_0000024C
    lfs f0, 0xa0(r3)
    fadds f0, f1, f0
    stfs f0, 0x100(r3)
    blr
lbl_fn_801F43E8_0000024C:
    stfs f0, 0x100(r3)
    blr
}

asm void fn_801F4484(void)
{
    nofralloc
    lwz r4, 0xfc(r3)
    extlwi r0, r4, 2, 4
    srawi. r0, r0, 31
    beqlr
    extlwi r0, r4, 2, 2
    srawi. r0, r0, 31
    beqlr
    lfs f1, 0x100(r3)
    lfs f0, 0x104(r3)
    lfs f2, 0xa0(r3)
    fadds f0, f1, f0
    stfs f0, 0x100(r3)
    fcmpo cr0, f0, f2
    cror eq, gt, eq
    bne lbl_fn_801F4484_000002AC
    extlwi r0, r4, 2, 3
    srawi. r0, r0, 31
    beq lbl_fn_801F4484_000002A8
    fsubs f0, f0, f2
    stfs f0, 0x100(r3)
    b lbl_fn_801F4484_000002AC
lbl_fn_801F4484_000002A8:
    stfs f2, 0x100(r3)
lbl_fn_801F4484_000002AC:
    lfs f1, 0x100(r3)
    lfs f0, lbl_80882C80
    fcmpo cr0, f1, f0
    bgelr
    lwz r0, 0xfc(r3)
    extlwi r0, r0, 2, 3
    srawi. r0, r0, 31
    beq lbl_fn_801F4484_000002DC
    lfs f0, 0xa0(r3)
    fadds f0, f1, f0
    stfs f0, 0x100(r3)
    blr
lbl_fn_801F4484_000002DC:
    stfs f0, 0x100(r3)
    blr
}

asm void fn_801F4514(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    lwz r0, 0xfc(r3)
    extlwi r0, r0, 2, 1
    srawi. r0, r0, 31
    beq lbl_fn_801F4514_000003AC
    lwz r4, lbl_8087EEB0
    lwz r0, 0x108(r3)
    lwz r31, 0xa0(r4)
    stw r0, 0xa0(r4)
    lwz r0, 0xfc(r3)
    extlwi r0, r0, 2, 4
    srawi. r0, r0, 31
    beq lbl_fn_801F4514_000003A4
    lwz r4, lbl_8087F138
    cmpwi r4, 0x0
    beq lbl_fn_801F4514_0000033C
    stw r3, 0x1a8(r4)
lbl_fn_801F4514_0000033C:
    lwz r0, 0xfc(r3)
    extlwi r0, r0, 2, 4
    srawi. r0, r0, 31
    beq lbl_fn_801F4514_0000037C
    lfs f0, 0x100(r3)
    stfs f0, 0xa4(r3)
    addi r3, r3, 0x58
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r4, 0xc(r1)
    bl fn_801FEF40
    lwz r12, 0x48(r30)
    addi r3, r30, 0x48
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
lbl_fn_801F4514_0000037C:
    lwz r12, 0x48(r30)
    addi r3, r30, 0x48
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    lwz r3, lbl_8087F138
    cmpwi r3, 0x0
    beq lbl_fn_801F4514_000003A4
    li r0, 0x0
    stw r0, 0x1a8(r3)
lbl_fn_801F4514_000003A4:
    lwz r3, lbl_8087EEB0
    stw r31, 0xa0(r3)
lbl_fn_801F4514_000003AC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801F45F4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    lwz r0, 0xfc(r3)
    extlwi r0, r0, 2, 4
    srawi. r0, r0, 31
    beq lbl_fn_801F45F4_00000418
    lfs f0, 0x100(r3)
    stfs f0, 0xa4(r3)
    addi r3, r3, 0x58
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r4, 0xc(r1)
    bl fn_801FEF40
    lwz r12, 0x48(r31)
    addi r3, r31, 0x48
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
lbl_fn_801F45F4_00000418:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801F465C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    lwz r0, 0xfc(r3)
    extlwi r0, r0, 2, 4
    srawi. r0, r0, 31
    beq lbl_fn_801F465C_000004E0
    lwz r5, lbl_8087F138
    cmpwi r5, 0x0
    beq lbl_fn_801F465C_00000470
    cmpwi r4, 0x0
    beq lbl_fn_801F465C_00000470
    stw r3, 0x1a8(r5)
lbl_fn_801F465C_00000470:
    lwz r0, 0xfc(r3)
    extlwi r0, r0, 2, 4
    srawi. r0, r0, 31
    beq lbl_fn_801F465C_000004B0
    lfs f0, 0x100(r3)
    stfs f0, 0xa4(r3)
    addi r3, r3, 0x58
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r4, 0xc(r1)
    bl fn_801FEF40
    lwz r12, 0x48(r30)
    addi r3, r30, 0x48
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
lbl_fn_801F465C_000004B0:
    lwz r12, 0x48(r30)
    addi r3, r30, 0x48
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    lwz r3, lbl_8087F138
    cmpwi r3, 0x0
    beq lbl_fn_801F465C_000004E0
    cmpwi r31, 0x0
    beq lbl_fn_801F465C_000004E0
    li r0, 0x0
    stw r0, 0x1a8(r3)
lbl_fn_801F465C_000004E0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801F4728(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    mr r3, r30
    lfs f31, 0x0(r5)
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    addi r3, r29, 0x58
    li r5, 0x0
    bl fn_801FED24
    lfs f31, 0x4(r31)
    mr r3, r30
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    addi r3, r29, 0x58
    li r5, 0x1
    bl fn_801FED24
    lfs f31, 0x8(r31)
    mr r3, r30
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    addi r3, r29, 0x58
    li r5, 0x2
    bl fn_801FED24
    lfs f31, 0xc(r31)
    mr r3, r30
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    addi r3, r29, 0x58
    li r5, 0x3
    bl fn_801FED24
    lfs f31, 0x10(r31)
    mr r3, r30
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    addi r3, r29, 0x58
    li r5, 0x4
    bl fn_801FED24
    lwz r0, 0x34(r1)
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_801F4818(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    mr r3, r30
    lfs f31, 0x0(r5)
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    addi r3, r29, 0x58
    li r5, 0x0
    bl fn_801FED24
    lfs f31, 0x4(r31)
    mr r3, r30
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    addi r3, r29, 0x58
    li r5, 0x1
    bl fn_801FED24
    lfs f31, 0x10(r31)
    mr r3, r30
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    addi r3, r29, 0x58
    li r5, 0x4
    bl fn_801FED24
    lwz r0, 0x34(r1)
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_801F48C8(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    mr r3, r30
    lfs f31, 0x0(r5)
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    addi r3, r29, 0x58
    li r5, 0x0
    bl fn_801FED70
    lfs f31, 0x4(r31)
    mr r3, r30
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    addi r3, r29, 0x58
    li r5, 0x1
    bl fn_801FED70
    lfs f31, 0x8(r31)
    mr r3, r30
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    addi r3, r29, 0x58
    li r5, 0x2
    bl fn_801FED70
    lfs f31, 0xc(r31)
    mr r3, r30
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    addi r3, r29, 0x58
    li r5, 0x3
    bl fn_801FED70
    lwz r0, 0x34(r1)
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_801F4998(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    lis r0, 0x4330
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    mr r30, r5
    stw r29, 0x24(r1)
    mr r29, r4
    stw r28, 0x20(r1)
    mr r28, r3
    mr r3, r29
    stw r0, 0x8(r1)
    stw r0, 0x10(r1)
    bl fn_800DC6B4
    srwi r0, r30, 24
    stw r0, 0xc(r1)
    lis r31, lbl_8073E408@ha
    mr r4, r3
    lfd f1, lbl_8073E408@l(r31)
    addi r3, r28, 0x58
    lfd f0, 0x8(r1)
    li r5, 0x0
    fsubs f1, f0, f1
    bl fn_801FEDBC
    mr r3, r29
    bl fn_800DC6B4
    extrwi r0, r30, 8, 8
    stw r0, 0x14(r1)
    mr r4, r3
    lfd f1, lbl_8073E408@l(r31)
    lfd f0, 0x10(r1)
    addi r3, r28, 0x58
    li r5, 0x1
    fsubs f1, f0, f1
    bl fn_801FEDBC
    mr r3, r29
    bl fn_800DC6B4
    extrwi r0, r30, 8, 16
    stw r0, 0xc(r1)
    mr r4, r3
    lfd f1, lbl_8073E408@l(r31)
    lfd f0, 0x8(r1)
    addi r3, r28, 0x58
    li r5, 0x2
    fsubs f1, f0, f1
    bl fn_801FEDBC
    mr r3, r29
    bl fn_800DC6B4
    clrlwi r0, r30, 24
    stw r0, 0x14(r1)
    mr r4, r3
    lfd f1, lbl_8073E408@l(r31)
    lfd f0, 0x10(r1)
    addi r3, r28, 0x58
    li r5, 0x3
    fsubs f1, f0, f1
    bl fn_801FEDBC
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_801F4AA0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x28(r1)
    fmr f31, f3
    stfd f30, 0x20(r1)
    fmr f30, f2
    stfd f29, 0x18(r1)
    fmr f29, f1
    stw r31, 0x14(r1)
    mr r31, r4
    stw r30, 0x10(r1)
    mr r30, r3
    mr r3, r31
    bl fn_800DC6B4
    fmr f1, f29
    mr r4, r3
    addi r3, r30, 0x58
    li r5, 0x1
    bl fn_801FEDBC
    mr r3, r31
    bl fn_800DC6B4
    fmr f1, f30
    mr r4, r3
    addi r3, r30, 0x58
    li r5, 0x2
    bl fn_801FEDBC
    mr r3, r31
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    addi r3, r30, 0x58
    li r5, 0x3
    bl fn_801FEDBC
    lwz r0, 0x34(r1)
    lfd f31, 0x28(r1)
    lfd f30, 0x20(r1)
    lfd f29, 0x18(r1)
    lwz r31, 0x14(r1)
    lwz r30, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_801F4B4C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lfs f1, lbl_80882C88
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    mr r3, r30
    lfs f0, 0x0(r5)
    fmuls f31, f1, f0
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    addi r3, r29, 0x58
    li r5, 0x1
    bl fn_801FEDBC
    lfs f1, lbl_80882C88
    mr r3, r30
    lfs f0, 0x4(r31)
    fmuls f31, f1, f0
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    addi r3, r29, 0x58
    li r5, 0x2
    bl fn_801FEDBC
    lfs f1, lbl_80882C88
    mr r3, r30
    lfs f0, 0x8(r31)
    fmuls f31, f1, f0
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    addi r3, r29, 0x58
    li r5, 0x3
    bl fn_801FEDBC
    lwz r0, 0x34(r1)
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_801F4C14(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    li r0, 0x0
    addi r6, r1, 0x8
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    mr r30, r4
    mr r4, r6
    stw r29, 0x24(r1)
    mr r29, r3
    stw r0, 0x8(r1)
    lwz r3, lbl_8087EEC8
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_8006F548
    lwz r0, 0x8(r1)
    srwi. r0, r0, 31
    bne lbl_fn_801F4C14_00000A38
    addi r31, r1, 0xa
    b lbl_fn_801F4C14_00000A3C
lbl_fn_801F4C14_00000A38:
    lwz r31, 0x10(r1)
lbl_fn_801F4C14_00000A3C:
    mr r3, r30
    bl fn_800DC6B4
    mr r4, r3
    mr r5, r31
    addi r3, r29, 0x58
    bl fn_801FEE08
    lwz r0, 0x8(r1)
    srwi. r0, r0, 31
    beq lbl_fn_801F4C14_00000A68
    lwz r3, 0x10(r1)
    bl dtor_80084684
lbl_fn_801F4C14_00000A68:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_801F4CB4(void)
{
    nofralloc
    stwu r1, -0x260(r1)
    mflr r0
    cmpwi r6, 0x0
    stw r0, 0x264(r1)
    stw r31, 0x25c(r1)
    mr r31, r5
    stw r30, 0x258(r1)
    mr r30, r4
    stw r29, 0x254(r1)
    mr r29, r3
    ble lbl_fn_801F4CB4_00000ACC
    lis r4, lbl_80782C40@ha
    mr r5, r6
    addi r3, r1, 0x8
    addi r4, r4, lbl_80782C40@l
    crclr 6
    bl fn_800DD3FC
    b lbl_fn_801F4CB4_00000B08
lbl_fn_801F4CB4_00000ACC:
    bge lbl_fn_801F4CB4_00000AF0
    lis r4, lbl_80782C40@ha
    addi r3, r1, 0x8
    addi r4, r4, lbl_80782C40@l
    neg r5, r6
    addi r4, r4, 0xe
    crclr 6
    bl fn_800DD3FC
    b lbl_fn_801F4CB4_00000B08
lbl_fn_801F4CB4_00000AF0:
    lis r4, lbl_80782C40@ha
    addi r3, r1, 0x8
    addi r4, r4, lbl_80782C40@l
    addi r4, r4, 0x1e
    crclr 6
    bl fn_800DD3FC
lbl_fn_801F4CB4_00000B08:
    mr r5, r31
    addi r3, r1, 0x48
    addi r4, r1, 0x8
    crclr 6
    bl fn_800DD3FC
    mr r3, r30
    bl fn_800DC6B4
    mr r4, r3
    addi r3, r29, 0x58
    addi r5, r1, 0x48
    bl fn_801FEE08
    lwz r0, 0x264(r1)
    lwz r31, 0x25c(r1)
    lwz r30, 0x258(r1)
    lwz r29, 0x254(r1)
    mtlr r0
    addi r1, r1, 0x260
    blr
}

asm void fn_801F4D80(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r5
    stw r30, 0x8(r1)
    mr r30, r3
    mr r3, r4
    bl fn_800DC6B4
    mr r4, r3
    addi r3, r30, 0x48
    bl fn_801EFA78
    cmpwi r3, 0x0
    beq lbl_fn_801F4D80_00000B94
    mr r4, r31
    li r5, 0x1
    bl fn_801FD5A0
lbl_fn_801F4D80_00000B94:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801F4DDC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x18(r1)
    fmr f31, f1
    stw r31, 0x14(r1)
    mr r31, r3
    mr r3, r4
    bl fn_800DC6B4
    mr r4, r3
    addi r3, r31, 0x48
    bl fn_801EFA78
    cmpwi r3, 0x0
    beq lbl_fn_801F4DDC_00000BE8
    stfs f31, 0x130(r3)
lbl_fn_801F4DDC_00000BE8:
    lwz r0, 0x24(r1)
    lfd f31, 0x18(r1)
    lwz r31, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801F4E30(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r5
    stw r30, 0x8(r1)
    mr r30, r3
    mr r3, r4
    bl fn_800DC6B4
    mr r4, r3
    addi r3, r30, 0x48
    bl fn_801EFA78
    cmpwi r3, 0x0
    beq lbl_fn_801F4E30_00000C44
    mr r4, r31
    li r5, 0x1
    bl fn_801FDA20
lbl_fn_801F4E30_00000C44:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801F4E8C(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    mr r6, r4
    lfs f0, lbl_80882C80
    stw r0, 0x44(r1)
    mr r4, r5
    stw r31, 0x3c(r1)
    mr r31, r3
    stfs f0, 0x0(r3)
    stfs f0, 0x4(r3)
    stfs f0, 0x8(r3)
    stfs f0, 0xc(r3)
    stfs f0, 0x10(r3)
    addi r3, r6, 0x48
    bl fn_801EFA78
    cmpwi r3, 0x0
    beq lbl_fn_801F4E8C_00000CC4
    lfs f0, lbl_80882C80
    li r0, 0x0
    stfs f0, 0x8(r1)
    mr r4, r31
    addi r5, r1, 0x10
    addi r6, r1, 0x8
    stw r0, 0xc(r1)
    addi r7, r1, 0x20
    bl fn_801ED928
lbl_fn_801F4E8C_00000CC4:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_801F4F08(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    mr r6, r4
    lfs f0, lbl_80882C80
    stw r0, 0x54(r1)
    mr r4, r5
    stw r31, 0x4c(r1)
    mr r31, r3
    addi r3, r6, 0x48
    stfs f0, 0x28(r1)
    stfs f0, 0x2c(r1)
    stfs f0, 0x30(r1)
    stfs f0, 0x34(r1)
    stfs f0, 0x38(r1)
    bl fn_801EFA78
    cmpwi r3, 0x0
    beq lbl_fn_801F4F08_00000D40
    lfs f0, lbl_80882C80
    li r0, 0x0
    stfs f0, 0x8(r1)
    mr r5, r31
    addi r4, r1, 0x28
    addi r6, r1, 0x8
    stw r0, 0xc(r1)
    addi r7, r1, 0x10
    bl fn_801ED928
lbl_fn_801F4F08_00000D40:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_801F4F84(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    addi r3, r3, 0x48
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r8
    stw r30, 0x18(r1)
    mr r30, r7
    stw r29, 0x14(r1)
    mr r29, r6
    stw r28, 0x10(r1)
    mr r28, r5
    bl fn_801EFA78
    cmpwi r3, 0x0
    beq lbl_fn_801F4F84_00000DA4
    mr r4, r28
    mr r5, r29
    mr r6, r30
    mr r7, r31
    bl fn_801ED928
lbl_fn_801F4F84_00000DA4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801F4FF4(void)
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
    beq lbl_fn_801F4FF4_00000F74
    lis r30, lbl_8073E508@ha
    li r3, 0x3e0
    addi r5, r30, lbl_8073E508@l
    li r4, 0x8
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_801F4FF4_00000F6C
    mr r4, r28
    bl fn_800D1D3C
    lis r3, lbl_80782CF0@ha
    addi r3, r3, lbl_80782CF0@l
    stw r3, 0x0(r31)
    lwz r0, lbl_8087F148
    cmpwi r0, 0x0
    bne lbl_fn_801F4FF4_00000E64
    addi r5, r30, lbl_8073E508@l
    li r3, 0xc04
    mr r6, r5
    li r4, 0x1
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_801F4FF4_00000E60
    li r0, 0x0
    stw r0, 0x0(r3)
lbl_fn_801F4FF4_00000E60:
    stw r3, lbl_8087F148
lbl_fn_801F4FF4_00000E64:
    lwz r30, lbl_8087F148
    mr r3, r29
    bl fn_800DC6B4
    lwz r0, 0x0(r30)
    mr r5, r30
    li r4, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_801F4FF4_00000EBC
lbl_fn_801F4FF4_00000E88:
    lwz r0, 0x4(r5)
    cmplw r3, r0
    bne lbl_fn_801F4FF4_00000EB0
    mulli r0, r4, 0xc
    add r4, r30, r0
    lwz r3, 0xc(r4)
    addi r0, r3, 0x1
    stw r0, 0xc(r4)
    lwz r4, 0x8(r4)
    b lbl_fn_801F4FF4_00000F1C
lbl_fn_801F4FF4_00000EB0:
    addi r5, r5, 0xc
    addi r4, r4, 0x1
    bdnz lbl_fn_801F4FF4_00000E88
lbl_fn_801F4FF4_00000EBC:
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
    beq lbl_fn_801F4FF4_00000F0C
    lwz r0, 0x8(r1)
    stw r0, 0x0(r4)
    lwz r0, 0xc(r1)
    stw r0, 0x4(r4)
    stw r3, 0x8(r4)
lbl_fn_801F4FF4_00000F0C:
    lwz r3, 0x0(r30)
    lwz r4, 0xc(r1)
    addi r0, r3, 0x1
    stw r0, 0x0(r30)
lbl_fn_801F4FF4_00000F1C:
    stw r4, 0x48(r31)
    li r6, 0x1
    lis r4, fn_801F6450@ha
    lis r5, fn_801F6464@ha
    stb r6, 0x4c(r31)
    li r0, 0x0
    lfs f1, lbl_80882C90
    addi r3, r31, 0x360
    stb r6, 0x4d(r31)
    addi r4, r4, fn_801F6450@l
    lfs f0, lbl_80882C94
    addi r5, r5, fn_801F6464@l
    stb r6, 0x4e(r31)
    li r6, 0x10
    li r7, 0x8
    stfs f1, 0x50(r31)
    stfs f0, 0x54(r31)
    stw r0, 0x58(r31)
    stw r0, 0x35c(r31)
    bl fn_806958E0
lbl_fn_801F4FF4_00000F6C:
    mr r3, r31
    b lbl_fn_801F4FF4_00000F78
lbl_fn_801F4FF4_00000F74:
    li r3, 0x0
lbl_fn_801F4FF4_00000F78:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_801F51C8(void)
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
    beq lbl_fn_801F51C8_0000110C
    lis r4, lbl_80782CF0@ha
    addi r4, r4, lbl_80782CF0@l
    stw r4, 0x0(r3)
    lwz r0, lbl_8087F148
    cmpwi r0, 0x0
    bne lbl_fn_801F51C8_0000100C
    lis r5, lbl_8073E508@ha
    li r3, 0xc04
    addi r5, r5, lbl_8073E508@l
    li r4, 0x1
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_801F51C8_00001008
    li r0, 0x0
    stw r0, 0x0(r3)
lbl_fn_801F51C8_00001008:
    stw r3, lbl_8087F148
lbl_fn_801F51C8_0000100C:
    lwz r31, lbl_8087F148
    li r4, 0x0
    lwz r3, 0x48(r29)
    lwz r0, 0x0(r31)
    mr r5, r31
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_801F51C8_000010C4
lbl_fn_801F51C8_0000102C:
    lwz r0, 0x8(r5)
    cmplw r0, r3
    bne lbl_fn_801F51C8_000010B8
    mulli r0, r4, 0xc
    add r4, r31, r0
    addi r28, r4, 0x4
    lwz r4, 0xc(r4)
    subic. r0, r4, 0x1
    stw r0, 0x8(r28)
    bgt lbl_fn_801F51C8_000010C4
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
    b lbl_fn_801F51C8_000010A0
lbl_fn_801F51C8_00001084:
    lwz r0, 0x10(r5)
    addi r4, r4, 0x1
    stw r0, 0x4(r5)
    lwz r0, 0x14(r5)
    stw r0, 0x8(r5)
    lwz r0, 0x18(r5)
    stwu r0, 0xc(r5)
lbl_fn_801F51C8_000010A0:
    lwz r3, 0x0(r31)
    subi r0, r3, 0x1
    cmplw r4, r0
    blt lbl_fn_801F51C8_00001084
    stw r0, 0x0(r31)
    b lbl_fn_801F51C8_000010C4
lbl_fn_801F51C8_000010B8:
    addi r5, r5, 0xc
    addi r4, r4, 0x1
    bdnz lbl_fn_801F51C8_0000102C
lbl_fn_801F51C8_000010C4:
    addic. r3, r29, 0x35c
    beq lbl_fn_801F51C8_000010E8
    beq lbl_fn_801F51C8_000010E8
    lis r4, fn_801F6464@ha
    addi r3, r3, 0x4
    addi r4, r4, fn_801F6464@l
    li r5, 0x10
    li r6, 0x8
    bl fn_806959D8
lbl_fn_801F51C8_000010E8:
    cmpwi r29, 0x0
    beq lbl_fn_801F51C8_000010FC
    mr r3, r29
    li r4, 0x0
    bl fn_800D1E9C
lbl_fn_801F51C8_000010FC:
    cmpwi r30, 0x0
    ble lbl_fn_801F51C8_0000110C
    mr r3, r29
    bl dtor_80084684
lbl_fn_801F51C8_0000110C:
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

asm void fn_801F5360(void)
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
    bne lbl_fn_801F5360_0000117C
    mr r3, r4
    li r4, 0x0
    bl fn_800D246C
    lwz r4, 0x48(r31)
    li r3, 0x1
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    b lbl_fn_801F5360_00001180
lbl_fn_801F5360_0000117C:
    li r3, 0x0
lbl_fn_801F5360_00001180:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801F53C4(void)
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
    bne lbl_fn_801F53C4_000011F8
    lbz r0, 0x4d(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801F53C4_000011F4
    fsubs f0, f0, f1
    stfs f0, 0x50(r3)
    b lbl_fn_801F53C4_000011F8
lbl_fn_801F53C4_000011F4:
    stfs f1, 0x50(r3)
lbl_fn_801F53C4_000011F8:
    lfs f1, 0x50(r3)
    lfs f0, lbl_80882C90
    fcmpo cr0, f1, f0
    bgelr
    lbz r0, 0x4d(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801F53C4_00001228
    lwz r4, 0x48(r3)
    lfs f0, 0xa0(r4)
    fadds f0, f1, f0
    stfs f0, 0x50(r3)
    blr
lbl_fn_801F53C4_00001228:
    stfs f0, 0x50(r3)
    blr
}

asm void fn_801F5460(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lbz r0, 0x4e(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801F5460_00001288
    lwz r4, lbl_8087F138
    cmpwi r4, 0x0
    beq lbl_fn_801F5460_00001260
    stw r3, 0x1ac(r4)
lbl_fn_801F5460_00001260:
    mr r3, r31
    bl fn_801F54CC
    lwz r3, 0x48(r31)
    li r4, 0x1
    bl fn_801F465C
    lwz r3, lbl_8087F138
    cmpwi r3, 0x0
    beq lbl_fn_801F5460_00001288
    li r0, 0x0
    stw r0, 0x1ac(r3)
lbl_fn_801F5460_00001288:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801F54CC(void)
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
    b lbl_fn_801F54CC_00001398
lbl_fn_801F54CC_000012D4:
    lbz r0, 0x0(r29)
    extsb. r0, r0
    beq lbl_fn_801F54CC_00001304
    cmpwi r0, 0x1
    beq lbl_fn_801F54CC_0000131C
    cmpwi r0, 0x2
    beq lbl_fn_801F54CC_0000133C
    cmpwi r0, 0x3
    beq lbl_fn_801F54CC_0000135C
    cmpwi r0, 0x5
    beq lbl_fn_801F54CC_0000137C
    b lbl_fn_801F54CC_00001390
lbl_fn_801F54CC_00001304:
    lwz r3, 0x48(r31)
    lfs f1, 0x8(r29)
    lwz r4, 0x4(r29)
    addi r3, r3, 0x58
    bl fn_801FECE0
    b lbl_fn_801F54CC_00001390
lbl_fn_801F54CC_0000131C:
    lwz r3, 0x48(r31)
    lbz r5, 0x1(r29)
    lfs f1, 0x8(r29)
    addi r3, r3, 0x58
    lwz r4, 0x4(r29)
    extsb r5, r5
    bl fn_801FED24
    b lbl_fn_801F54CC_00001390
lbl_fn_801F54CC_0000133C:
    lwz r3, 0x48(r31)
    lbz r5, 0x1(r29)
    lfs f1, 0x8(r29)
    addi r3, r3, 0x58
    lwz r4, 0x4(r29)
    extsb r5, r5
    bl fn_801FED70
    b lbl_fn_801F54CC_00001390
lbl_fn_801F54CC_0000135C:
    lwz r3, 0x48(r31)
    lbz r5, 0x1(r29)
    lfs f1, 0x8(r29)
    addi r3, r3, 0x58
    lwz r4, 0x4(r29)
    extsb r5, r5
    bl fn_801FEDBC
    b lbl_fn_801F54CC_00001390
lbl_fn_801F54CC_0000137C:
    lwz r3, 0x48(r31)
    lwz r4, 0x4(r29)
    lwz r5, 0x8(r29)
    addi r3, r3, 0x58
    bl fn_801FEEFC
lbl_fn_801F54CC_00001390:
    addi r29, r29, 0xc
    addi r30, r30, 0x1
lbl_fn_801F54CC_00001398:
    lwz r0, 0x58(r31)
    cmplw r30, r0
    blt lbl_fn_801F54CC_000012D4
    mr r29, r31
    addi r30, r31, 0x360
    li r28, 0x0
    b lbl_fn_801F54CC_000013E8
lbl_fn_801F54CC_000013B4:
    lwz r0, 0x4(r30)
    lwz r3, 0x48(r31)
    srwi. r0, r0, 31
    lwz r4, 0x360(r29)
    addi r3, r3, 0x58
    bne lbl_fn_801F54CC_000013D4
    addi r5, r30, 0x6
    b lbl_fn_801F54CC_000013D8
lbl_fn_801F54CC_000013D4:
    lwz r5, 0xc(r30)
lbl_fn_801F54CC_000013D8:
    bl fn_801FEE08
    addi r30, r30, 0x10
    addi r29, r29, 0x10
    addi r28, r28, 0x1
lbl_fn_801F54CC_000013E8:
    lwz r0, 0x35c(r31)
    cmplw r28, r0
    blt lbl_fn_801F54CC_000013B4
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801F5644(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    li r0, 0x0
    stfd f31, 0x28(r1)
    fmr f31, f1
    stw r31, 0x24(r1)
    mr r31, r3
    mr r3, r4
    stb r0, 0x8(r1)
    stb r0, 0x9(r1)
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
    ble lbl_fn_801F5644_000014C0
lbl_fn_801F5644_00001474:
    lbz r0, 0x5c(r7)
    extsb r0, r0
    cmpw r5, r0
    bne lbl_fn_801F5644_000014B4
    lbz r0, 0x5d(r7)
    extsb r0, r0
    cmpw r4, r0
    bne lbl_fn_801F5644_000014B4
    lwz r0, 0x60(r7)
    cmplw r3, r0
    bne lbl_fn_801F5644_000014B4
    mulli r0, r6, 0xc
    lwz r4, 0x10(r1)
    add r3, r31, r0
    stw r4, 0x64(r3)
    b lbl_fn_801F5644_000014F8
lbl_fn_801F5644_000014B4:
    addi r7, r7, 0xc
    addi r6, r6, 0x1
    bdnz lbl_fn_801F5644_00001474
lbl_fn_801F5644_000014C0:
    lwz r0, 0x58(r31)
    mulli r0, r0, 0xc
    add r0, r31, r0
    addic. r3, r0, 0x5c
    beq lbl_fn_801F5644_000014EC
    lwz r0, 0x8(r1)
    stw r0, 0x0(r3)
    lwz r0, 0xc(r1)
    stw r0, 0x4(r3)
    lwz r0, 0x10(r1)
    stw r0, 0x8(r3)
lbl_fn_801F5644_000014EC:
    lwz r3, 0x58(r31)
    addi r0, r3, 0x1
    stw r0, 0x58(r31)
lbl_fn_801F5644_000014F8:
    lwz r0, 0x34(r1)
    lfd f31, 0x28(r1)
    lwz r31, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_801F5740(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    li r0, 0x1
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
    ble lbl_fn_801F5740_000015BC
lbl_fn_801F5740_00001570:
    lbz r0, 0x5c(r7)
    extsb r0, r0
    cmpw r5, r0
    bne lbl_fn_801F5740_000015B0
    lbz r0, 0x5d(r7)
    extsb r0, r0
    cmpw r4, r0
    bne lbl_fn_801F5740_000015B0
    lwz r0, 0x60(r7)
    cmplw r3, r0
    bne lbl_fn_801F5740_000015B0
    mulli r0, r6, 0xc
    lwz r4, 0x10(r1)
    add r3, r31, r0
    stw r4, 0x64(r3)
    b lbl_fn_801F5740_000015F4
lbl_fn_801F5740_000015B0:
    addi r7, r7, 0xc
    addi r6, r6, 0x1
    bdnz lbl_fn_801F5740_00001570
lbl_fn_801F5740_000015BC:
    lwz r0, 0x58(r31)
    mulli r0, r0, 0xc
    add r0, r31, r0
    addic. r3, r0, 0x5c
    beq lbl_fn_801F5740_000015E8
    lwz r0, 0x8(r1)
    stw r0, 0x0(r3)
    lwz r0, 0xc(r1)
    stw r0, 0x4(r3)
    lwz r0, 0x10(r1)
    stw r0, 0x8(r3)
lbl_fn_801F5740_000015E8:
    lwz r3, 0x58(r31)
    addi r0, r3, 0x1
    stw r0, 0x58(r31)
lbl_fn_801F5740_000015F4:
    lwz r0, 0x34(r1)
    lfd f31, 0x28(r1)
    lwz r31, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_801F583C(void)
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
    ble lbl_fn_801F583C_000016D0
lbl_fn_801F583C_00001684:
    lbz r0, 0x5c(r7)
    extsb r0, r0
    cmpw r5, r0
    bne lbl_fn_801F583C_000016C4
    lbz r0, 0x5d(r7)
    extsb r0, r0
    cmpw r4, r0
    bne lbl_fn_801F583C_000016C4
    lwz r0, 0x60(r7)
    cmplw r3, r0
    bne lbl_fn_801F583C_000016C4
    mulli r0, r6, 0xc
    lwz r4, 0x34(r1)
    add r3, r29, r0
    stw r4, 0x64(r3)
    b lbl_fn_801F583C_00001708
lbl_fn_801F583C_000016C4:
    addi r7, r7, 0xc
    addi r6, r6, 0x1
    bdnz lbl_fn_801F583C_00001684
lbl_fn_801F583C_000016D0:
    lwz r0, 0x58(r29)
    mulli r0, r0, 0xc
    add r0, r29, r0
    addic. r3, r0, 0x5c
    beq lbl_fn_801F583C_000016FC
    lwz r0, 0x2c(r1)
    stw r0, 0x0(r3)
    lwz r0, 0x30(r1)
    stw r0, 0x4(r3)
    lwz r0, 0x34(r1)
    stw r0, 0x8(r3)
lbl_fn_801F583C_000016FC:
    lwz r3, 0x58(r29)
    addi r0, r3, 0x1
    stw r0, 0x58(r29)
lbl_fn_801F583C_00001708:
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
    ble lbl_fn_801F583C_000017A0
lbl_fn_801F583C_00001754:
    lbz r0, 0x5c(r7)
    extsb r0, r0
    cmpw r5, r0
    bne lbl_fn_801F583C_00001794
    lbz r0, 0x5d(r7)
    extsb r0, r0
    cmpw r4, r0
    bne lbl_fn_801F583C_00001794
    lwz r0, 0x60(r7)
    cmplw r3, r0
    bne lbl_fn_801F583C_00001794
    mulli r0, r6, 0xc
    lwz r4, 0x28(r1)
    add r3, r29, r0
    stw r4, 0x64(r3)
    b lbl_fn_801F583C_000017D8
lbl_fn_801F583C_00001794:
    addi r7, r7, 0xc
    addi r6, r6, 0x1
    bdnz lbl_fn_801F583C_00001754
lbl_fn_801F583C_000017A0:
    lwz r0, 0x58(r29)
    mulli r0, r0, 0xc
    add r0, r29, r0
    addic. r3, r0, 0x5c
    beq lbl_fn_801F583C_000017CC
    lwz r0, 0x20(r1)
    stw r0, 0x0(r3)
    lwz r0, 0x24(r1)
    stw r0, 0x4(r3)
    lwz r0, 0x28(r1)
    stw r0, 0x8(r3)
lbl_fn_801F583C_000017CC:
    lwz r3, 0x58(r29)
    addi r0, r3, 0x1
    stw r0, 0x58(r29)
lbl_fn_801F583C_000017D8:
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
    ble lbl_fn_801F583C_0000186C
lbl_fn_801F583C_00001820:
    lbz r0, 0x5c(r7)
    extsb r0, r0
    cmpw r5, r0
    bne lbl_fn_801F583C_00001860
    lbz r0, 0x5d(r7)
    extsb r0, r0
    cmpw r4, r0
    bne lbl_fn_801F583C_00001860
    lwz r0, 0x60(r7)
    cmplw r3, r0
    bne lbl_fn_801F583C_00001860
    mulli r0, r6, 0xc
    lwz r4, 0x1c(r1)
    add r3, r29, r0
    stw r4, 0x64(r3)
    b lbl_fn_801F583C_000018A4
lbl_fn_801F583C_00001860:
    addi r7, r7, 0xc
    addi r6, r6, 0x1
    bdnz lbl_fn_801F583C_00001820
lbl_fn_801F583C_0000186C:
    lwz r0, 0x58(r29)
    mulli r0, r0, 0xc
    add r0, r29, r0
    addic. r3, r0, 0x5c
    beq lbl_fn_801F583C_00001898
    lwz r0, 0x14(r1)
    stw r0, 0x0(r3)
    lwz r0, 0x18(r1)
    stw r0, 0x4(r3)
    lwz r0, 0x1c(r1)
    stw r0, 0x8(r3)
lbl_fn_801F583C_00001898:
    lwz r3, 0x58(r29)
    addi r0, r3, 0x1
    stw r0, 0x58(r29)
lbl_fn_801F583C_000018A4:
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
    ble lbl_fn_801F583C_0000193C
lbl_fn_801F583C_000018F0:
    lbz r0, 0x5c(r7)
    extsb r0, r0
    cmpw r5, r0
    bne lbl_fn_801F583C_00001930
    lbz r0, 0x5d(r7)
    extsb r0, r0
    cmpw r4, r0
    bne lbl_fn_801F583C_00001930
    lwz r0, 0x60(r7)
    cmplw r3, r0
    bne lbl_fn_801F583C_00001930
    mulli r0, r6, 0xc
    lwz r4, 0x10(r1)
    add r3, r29, r0
    stw r4, 0x64(r3)
    b lbl_fn_801F583C_00001974
lbl_fn_801F583C_00001930:
    addi r7, r7, 0xc
    addi r6, r6, 0x1
    bdnz lbl_fn_801F583C_000018F0
lbl_fn_801F583C_0000193C:
    lwz r0, 0x58(r29)
    mulli r0, r0, 0xc
    add r0, r29, r0
    addic. r3, r0, 0x5c
    beq lbl_fn_801F583C_00001968
    lwz r0, 0x8(r1)
    stw r0, 0x0(r3)
    lwz r0, 0xc(r1)
    stw r0, 0x4(r3)
    lwz r0, 0x10(r1)
    stw r0, 0x8(r3)
lbl_fn_801F583C_00001968:
    lwz r3, 0x58(r29)
    addi r0, r3, 0x1
    stw r0, 0x58(r29)
lbl_fn_801F583C_00001974:
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
