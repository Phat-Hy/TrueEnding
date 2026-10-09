#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_14(void);
extern void _savegpr_14(void);
extern void dtor_80084684(void);
extern void fn_80049CDC(void);
extern void fn_800C82A0(void);
extern void fn_800CA028(void);
extern void fn_800CA098(void);
extern void fn_800CA0AC(void);
extern void fn_800CA144(void);
extern void fn_800CA1D4(void);
extern void fn_800CA2FC(void);
extern void fn_800CA3D4(void);
extern void fn_8059E380(void);
extern void fn_805F9940(void);
extern void fn_80695B00(void);
extern void fn_80709AD0(void);
extern void fn_80709F20(void);
extern void fn_8070ABE0(void);
extern void fn_8070AD70(void);
extern void fn_80714C50(void);
extern void fn_80714D00(void);
extern void fn_80714E40(void);
extern void fn_80714FA0(void);
extern void fn_807157D0(void);
extern void fn_80716000(void);
extern void fn_8071A680(void);
extern void fn_8071A720(void);
extern void fn_8071A800(void);
extern void fn_8071CD20(void);
extern void fn_8071D0E0(void);
extern void fn_8071D1E0(void);
extern void fn_80721890(void);
extern void fn_80721990(void);
extern void fn_80722440(void);
extern void fn_80722500(void);
extern void fn_80724DF0(void);

/* External data declarations */
extern u8 lbl_80734120[];
extern u8 lbl_80734128[];
extern u8 lbl_80734188[];
extern u8 lbl_807795C0[];
extern u8 lbl_80779618[];
extern u8 lbl_8077963C[];
extern u8 lbl_80779648[];
extern u8 lbl_8077966C[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087EE90;
extern u32 lbl_80881168;
extern u32 lbl_8088116C;
extern u32 lbl_80881170;
extern u32 lbl_80881178;
extern u32 lbl_8088117C;
extern u32 lbl_80881180;
extern u32 lbl_80881184;

/* Function declarations */
void fn_800CA42C(void);
void fn_800CA514(void);
void fn_800CA5E8(void);
void fn_800CA6C4(void);
void fn_800CA798(void);
void fn_800CA7D4(void);
void fn_800CA7E8(void);
void fn_800CA834(void);
void fn_800CA844(void);
void fn_800CA8B0(void);
void fn_800CA8E0(void);
void fn_800CA910(void);
void fn_800CAA88(void);
void fn_800CAC48(void);
void fn_800CACEC(void);
void fn_800CAD9C(void);
void fn_800CADE4(void);
void fn_800CAE24(void);
void fn_800CAE64(void);
void fn_800CB09C(void);
void fn_800CB0A0(void);
void fn_800CB14C(void);
void fn_800CB1F4(void);
void fn_800CB360(void);
void fn_800CB36C(void);
void fn_800CB3A0(void);
void fn_800CB404(void);
void fn_800CB440(void);
void fn_800CB480(void);
void fn_800CB4A4(void);
void fn_800CB4C4(void);
void fn_800CB4EC(void);
void fn_800CB504(void);
void fn_800CB518(void);
void fn_800CB538(void);
void fn_800CB58C(void);
void fn_800CB5B4(void);
void fn_800CB5C8(void);
void fn_800CB640(void);
void fn_800CB654(void);
void fn_800CB668(void);
void fn_800CB688(void);
void fn_800CB69C(void);
void fn_800CB6B0(void);
void fn_800CB6C4(void);
void fn_800CB6E4(void);
void fn_800CB6F8(void);
void fn_800CB714(void);
void fn_800CB718(void);
void fn_800CB788(void);
void fn_800CB7F0(void);
void fn_800CB7F4(void);
void fn_800CB7F8(void);
void fn_800CB7FC(void);

asm void fn_800CA42C(void)
{
    nofralloc
    lfs f0, lbl_80881170
    stwu r1, -0x10(r1)
    fcmpo cr0, f1, f0
    bge lbl_fn_800CA42C_00000014
    fmr f1, f0
lbl_fn_800CA42C_00000014:
    lwz r5, 0xa8(r3)
    frsp f5, f1
    stfs f1, 0xbc(r3)
    cmpwi r5, 0x0
    beq lbl_fn_800CA42C_00000030
    lfs f0, 0xc(r5)
    fmuls f5, f5, f0
lbl_fn_800CA42C_00000030:
    lwz r5, 0xac(r3)
    cmpwi r5, 0x0
    beq lbl_fn_800CA42C_00000044
    lfs f0, 0xc(r5)
    fmuls f5, f5, f0
lbl_fn_800CA42C_00000044:
    lwz r5, 0xb0(r3)
    cmpwi r5, 0x0
    beq lbl_fn_800CA42C_00000058
    lfs f0, 0xc(r5)
    fmuls f5, f5, f0
lbl_fn_800CA42C_00000058:
    xoris r0, r4, 0x8000
    lis r4, 0x4330
    stw r0, 0xc(r1)
    lis r5, lbl_80734120@ha
    lfd f3, lbl_80734120@l(r5)
    li r0, 0x1
    stw r4, 0x8(r1)
    lfs f1, 0x104(r3)
    lfd f2, 0x8(r1)
    lfs f4, lbl_80881168
    fsubs f0, f1, f1
    fsubs f3, f2, f3
    lfs f2, lbl_8088116C
    stfs f4, 0xec(r3)
    fcmpo cr0, f3, f4
    stfs f3, 0xf0(r3)
    stfs f2, 0xf4(r3)
    stb r0, 0xf8(r3)
    stfs f1, 0xfc(r3)
    stfs f5, 0x100(r3)
    stfs f0, 0x108(r3)
    cror eq, lt, eq
    bne lbl_fn_800CA42C_000000E0
    fcmpo cr0, f2, f4
    cror eq, gt, eq
    bne lbl_fn_800CA42C_000000D0
    frsp f0, f5
    stfs f3, 0xec(r3)
    stfs f0, 0x104(r3)
    b lbl_fn_800CA42C_000000D8
lbl_fn_800CA42C_000000D0:
    stfs f1, 0x104(r3)
    stfs f4, 0xec(r3)
lbl_fn_800CA42C_000000D8:
    li r0, 0x0
    stb r0, 0xf8(r3)
lbl_fn_800CA42C_000000E0:
    addi r1, r1, 0x10
    blr
}

asm void fn_800CA514(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    lwz r5, 0xa8(r3)
    lfs f5, 0xbc(r3)
    cmpwi r5, 0x0
    beq lbl_fn_800CA514_00000104
    lfs f0, 0xc(r5)
    fmuls f5, f5, f0
lbl_fn_800CA514_00000104:
    lwz r5, 0xac(r3)
    cmpwi r5, 0x0
    beq lbl_fn_800CA514_00000118
    lfs f0, 0xc(r5)
    fmuls f5, f5, f0
lbl_fn_800CA514_00000118:
    lwz r5, 0xb0(r3)
    cmpwi r5, 0x0
    beq lbl_fn_800CA514_0000012C
    lfs f0, 0xc(r5)
    fmuls f5, f5, f0
lbl_fn_800CA514_0000012C:
    xoris r0, r4, 0x8000
    lis r4, 0x4330
    stw r0, 0xc(r1)
    lis r5, lbl_80734120@ha
    lfd f3, lbl_80734120@l(r5)
    li r0, 0x1
    stw r4, 0x8(r1)
    lfs f1, 0x104(r3)
    lfd f2, 0x8(r1)
    lfs f4, lbl_80881168
    fsubs f0, f1, f1
    fsubs f3, f2, f3
    lfs f2, lbl_8088116C
    stfs f4, 0xec(r3)
    fcmpo cr0, f3, f4
    stfs f3, 0xf0(r3)
    stfs f2, 0xf4(r3)
    stb r0, 0xf8(r3)
    stfs f1, 0xfc(r3)
    stfs f5, 0x100(r3)
    stfs f0, 0x108(r3)
    cror eq, lt, eq
    bne lbl_fn_800CA514_000001B4
    fcmpo cr0, f2, f4
    cror eq, gt, eq
    bne lbl_fn_800CA514_000001A4
    frsp f0, f5
    stfs f3, 0xec(r3)
    stfs f0, 0x104(r3)
    b lbl_fn_800CA514_000001AC
lbl_fn_800CA514_000001A4:
    stfs f1, 0x104(r3)
    stfs f4, 0xec(r3)
lbl_fn_800CA514_000001AC:
    li r0, 0x0
    stb r0, 0xf8(r3)
lbl_fn_800CA514_000001B4:
    addi r1, r1, 0x10
    blr
}

asm void fn_800CA5E8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    fneg f0, f1
    lwz r5, 0xa8(r3)
    frsp f5, f0
    stfs f0, 0xc0(r3)
    cmpwi r5, 0x0
    beq lbl_fn_800CA5E8_000001E0
    lfs f0, 0x10(r5)
    fsubs f5, f5, f0
lbl_fn_800CA5E8_000001E0:
    lwz r5, 0xac(r3)
    cmpwi r5, 0x0
    beq lbl_fn_800CA5E8_000001F4
    lfs f0, 0x10(r5)
    fsubs f5, f5, f0
lbl_fn_800CA5E8_000001F4:
    lwz r5, 0xb0(r3)
    cmpwi r5, 0x0
    beq lbl_fn_800CA5E8_00000208
    lfs f0, 0x10(r5)
    fsubs f5, f5, f0
lbl_fn_800CA5E8_00000208:
    xoris r0, r4, 0x8000
    lis r4, 0x4330
    stw r0, 0xc(r1)
    lis r5, lbl_80734120@ha
    lfd f3, lbl_80734120@l(r5)
    li r0, 0x1
    stw r4, 0x8(r1)
    lfs f1, 0x124(r3)
    lfd f2, 0x8(r1)
    lfs f4, lbl_80881168
    fsubs f0, f1, f1
    fsubs f3, f2, f3
    lfs f2, lbl_8088116C
    stfs f4, 0x10c(r3)
    fcmpo cr0, f3, f4
    stfs f3, 0x110(r3)
    stfs f2, 0x114(r3)
    stb r0, 0x118(r3)
    stfs f1, 0x11c(r3)
    stfs f5, 0x120(r3)
    stfs f0, 0x128(r3)
    cror eq, lt, eq
    bne lbl_fn_800CA5E8_00000290
    fcmpo cr0, f2, f4
    cror eq, gt, eq
    bne lbl_fn_800CA5E8_00000280
    frsp f0, f5
    stfs f3, 0x10c(r3)
    stfs f0, 0x124(r3)
    b lbl_fn_800CA5E8_00000288
lbl_fn_800CA5E8_00000280:
    stfs f1, 0x124(r3)
    stfs f4, 0x10c(r3)
lbl_fn_800CA5E8_00000288:
    li r0, 0x0
    stb r0, 0x118(r3)
lbl_fn_800CA5E8_00000290:
    addi r1, r1, 0x10
    blr
}

asm void fn_800CA6C4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    lwz r5, 0xa8(r3)
    lfs f5, 0xc0(r3)
    cmpwi r5, 0x0
    beq lbl_fn_800CA6C4_000002B4
    lfs f0, 0x10(r5)
    fsubs f5, f5, f0
lbl_fn_800CA6C4_000002B4:
    lwz r5, 0xac(r3)
    cmpwi r5, 0x0
    beq lbl_fn_800CA6C4_000002C8
    lfs f0, 0x10(r5)
    fsubs f5, f5, f0
lbl_fn_800CA6C4_000002C8:
    lwz r5, 0xb0(r3)
    cmpwi r5, 0x0
    beq lbl_fn_800CA6C4_000002DC
    lfs f0, 0x10(r5)
    fsubs f5, f5, f0
lbl_fn_800CA6C4_000002DC:
    xoris r0, r4, 0x8000
    lis r4, 0x4330
    stw r0, 0xc(r1)
    lis r5, lbl_80734120@ha
    lfd f3, lbl_80734120@l(r5)
    li r0, 0x1
    stw r4, 0x8(r1)
    lfs f1, 0x124(r3)
    lfd f2, 0x8(r1)
    lfs f4, lbl_80881168
    fsubs f0, f1, f1
    fsubs f3, f2, f3
    lfs f2, lbl_8088116C
    stfs f4, 0x10c(r3)
    fcmpo cr0, f3, f4
    stfs f3, 0x110(r3)
    stfs f2, 0x114(r3)
    stb r0, 0x118(r3)
    stfs f1, 0x11c(r3)
    stfs f5, 0x120(r3)
    stfs f0, 0x128(r3)
    cror eq, lt, eq
    bne lbl_fn_800CA6C4_00000364
    fcmpo cr0, f2, f4
    cror eq, gt, eq
    bne lbl_fn_800CA6C4_00000354
    frsp f0, f5
    stfs f3, 0x10c(r3)
    stfs f0, 0x124(r3)
    b lbl_fn_800CA6C4_0000035C
lbl_fn_800CA6C4_00000354:
    stfs f1, 0x124(r3)
    stfs f4, 0x10c(r3)
lbl_fn_800CA6C4_0000035C:
    li r0, 0x0
    stb r0, 0x118(r3)
lbl_fn_800CA6C4_00000364:
    addi r1, r1, 0x10
    blr
}

asm void fn_800CA798(void)
{
    nofralloc
    fmr f0, f1
    psq_l f1, 0x70(r3), 0, 0
    lfs f2, 0x78(r3)
    cmpwi r4, 0x0
    stw r4, 0xd4(r3)
    psq_st f1, 0xd8(r3), 0, 0
    stfs f2, 0xe0(r3)
    stfs f0, 0xe4(r3)
    beq lbl_fn_800CA798_0000039C
    addi r0, r3, 0xd4
    stw r0, 0x6c(r3)
    blr
lbl_fn_800CA798_0000039C:
    li r0, 0x0
    stw r0, 0x6c(r3)
    blr
}

asm void fn_800CA7D4(void)
{
    nofralloc
    cmpwi r4, 0x0
    bge lbl_fn_800CA7D4_000003B4
    li r4, 0x0
lbl_fn_800CA7D4_000003B4:
    stw r4, 0xd0(r3)
    blr
}

asm void fn_800CA7E8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    addi r3, r3, 0xc
    bl fn_80714C50
    lwz r0, 0xd4(r31)
    cmpwi r0, 0x0
    beq lbl_fn_800CA7E8_000003F4
    psq_l f1, 0x70(r31), 0, 0
    lfs f2, 0x78(r31)
    psq_st f1, 0xd8(r31), 0, 0
    stfs f2, 0xe0(r31)
lbl_fn_800CA7E8_000003F4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800CA834(void)
{
    nofralloc
    mr r4, r3
    lwz r3, lbl_8087EE90
    lwz r4, 0x98(r4)
    b fn_80049CDC
}

asm void fn_800CA844(void)
{
    nofralloc
    lwz r4, 0xa8(r3)
    lfs f1, 0xb8(r3)
    cmpwi r4, 0x0
    beq lbl_fn_800CA844_00000430
    lfs f0, 0x8(r4)
    fmuls f1, f1, f0
lbl_fn_800CA844_00000430:
    lwz r4, 0xac(r3)
    cmpwi r4, 0x0
    beq lbl_fn_800CA844_00000444
    lfs f0, 0x8(r4)
    fmuls f1, f1, f0
lbl_fn_800CA844_00000444:
    lwz r4, 0xb0(r3)
    cmpwi r4, 0x0
    beq lbl_fn_800CA844_00000458
    lfs f0, 0x8(r4)
    fmuls f1, f1, f0
lbl_fn_800CA844_00000458:
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_800CA844_0000046C
    addi r3, r3, 0x30
    b lbl_fn_800CA844_00000470
lbl_fn_800CA844_0000046C:
    li r3, 0x0
lbl_fn_800CA844_00000470:
    cmpwi r3, 0x0
    beqlr
    lfs f0, 0x0(r3)
    fmuls f1, f1, f0
    blr
}

asm void fn_800CA8B0(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_800CA8B0_00000498
    addi r3, r3, 0x30
    b lbl_fn_800CA8B0_0000049C
lbl_fn_800CA8B0_00000498:
    li r3, 0x0
lbl_fn_800CA8B0_0000049C:
    cmpwi r3, 0x0
    beq lbl_fn_800CA8B0_000004AC
    lfs f1, 0x8(r3)
    blr
lbl_fn_800CA8B0_000004AC:
    lfs f1, lbl_80881168
    blr
}

asm void fn_800CA8E0(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_800CA8E0_000004C8
    addi r3, r3, 0x30
    b lbl_fn_800CA8E0_000004CC
lbl_fn_800CA8E0_000004C8:
    li r3, 0x0
lbl_fn_800CA8E0_000004CC:
    cmpwi r3, 0x0
    beq lbl_fn_800CA8E0_000004DC
    lfs f1, 0xc(r3)
    blr
lbl_fn_800CA8E0_000004DC:
    lfs f1, lbl_8088116C
    blr
}

asm void fn_800CA910(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    lis r0, 0x4330
    stw r31, 0x4c(r1)
    mr r31, r3
    addi r3, r1, 0xc
    stw r0, 0x30(r1)
    addi r4, r31, 0x4
    stw r0, 0x38(r1)
    bl fn_8071D0E0
    lwz r0, 0xc(r1)
    cmpwi r0, 0x0
    bne lbl_fn_800CA910_00000524
    li r3, 0x0
    b lbl_fn_800CA910_00000534
lbl_fn_800CA910_00000524:
    lwz r3, 0xc(r1)
    addi r4, r1, 0x20
    addi r3, r3, 0x110
    bl fn_8071A680
lbl_fn_800CA910_00000534:
    cmpwi r3, 0x0
    beq lbl_fn_800CA910_00000598
    lwz r5, 0x24(r1)
    lis r3, lbl_80734120@ha
    lwz r0, 0x2c(r1)
    lis r4, lbl_80734128@ha
    stw r0, 0x3c(r1)
    xoris r0, r5, 0x8000
    lfd f3, lbl_80734120@l(r3)
    addi r3, r1, 0xc
    stw r0, 0x34(r1)
    lfd f2, lbl_80734128@l(r4)
    lfd f0, 0x30(r1)
    lfd f1, 0x38(r1)
    fsubs f3, f0, f3
    lfs f0, lbl_80881178
    fsubs f1, f1, f2
    fdivs f1, f1, f3
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x40(r1)
    lwz r31, 0x44(r1)
    bl fn_8071D1E0
    mr r3, r31
    b lbl_fn_800CA910_00000648
lbl_fn_800CA910_00000598:
    addi r3, r1, 0x8
    addi r4, r31, 0x4
    bl fn_80721890
    lwz r0, 0x8(r1)
    cmpwi r0, 0x0
    bne lbl_fn_800CA910_000005B8
    li r3, 0x0
    b lbl_fn_800CA910_000005C8
lbl_fn_800CA910_000005B8:
    lwz r3, 0x8(r1)
    addi r4, r1, 0x10
    addi r3, r3, 0x110
    bl fn_80722440
lbl_fn_800CA910_000005C8:
    cmpwi r3, 0x0
    beq lbl_fn_800CA910_00000634
    lwz r5, 0x14(r1)
    lis r3, lbl_80734120@ha
    lwz r0, 0x1c(r1)
    lis r4, lbl_80734128@ha
    stw r0, 0x3c(r1)
    xoris r0, r5, 0x8000
    lfd f3, lbl_80734120@l(r3)
    addi r3, r1, 0x8
    stw r0, 0x34(r1)
    lfd f2, lbl_80734128@l(r4)
    lfd f0, 0x30(r1)
    lfd f1, 0x38(r1)
    fsubs f3, f0, f3
    lfs f0, lbl_80881178
    fsubs f1, f1, f2
    fdivs f1, f1, f3
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x40(r1)
    lwz r31, 0x44(r1)
    bl fn_80721990
    addi r3, r1, 0xc
    bl fn_8071D1E0
    mr r3, r31
    b lbl_fn_800CA910_00000648
lbl_fn_800CA910_00000634:
    addi r3, r1, 0x8
    bl fn_80721990
    addi r3, r1, 0xc
    bl fn_8071D1E0
    li r3, -0x1
lbl_fn_800CA910_00000648:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_800CAA88(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    lis r0, 0x4330
    stfd f31, 0x50(r1)
    psq_st f31, 0x58(r1), 0, 0
    stw r31, 0x4c(r1)
    mr r31, r3
    addi r3, r1, 0xc
    stw r0, 0x30(r1)
    addi r4, r31, 0x4
    stw r0, 0x38(r1)
    bl fn_8071D0E0
    lwz r0, 0xc(r1)
    cmpwi r0, 0x0
    bne lbl_fn_800CAA88_000006A4
    li r3, 0x0
    b lbl_fn_800CAA88_000006B4
lbl_fn_800CAA88_000006A4:
    lwz r3, 0xc(r1)
    addi r4, r1, 0x20
    addi r3, r3, 0x110
    bl fn_8071A680
lbl_fn_800CAA88_000006B4:
    cmpwi r3, 0x0
    beq lbl_fn_800CAA88_00000734
    lwz r3, 0x24(r1)
    lis r4, lbl_80734120@ha
    lwz r0, 0xc(r1)
    xoris r3, r3, 0x8000
    stw r3, 0x34(r1)
    lfd f1, lbl_80734120@l(r4)
    cmpwi r0, 0x0
    lfd f0, 0x30(r1)
    fsubs f31, f0, f1
    bne lbl_fn_800CAA88_000006EC
    li r3, -0x1
    b lbl_fn_800CAA88_000006F8
lbl_fn_800CAA88_000006EC:
    lwz r3, 0xc(r1)
    addi r3, r3, 0x110
    bl fn_8071A720
lbl_fn_800CAA88_000006F8:
    stw r3, 0x3c(r1)
    lis r3, lbl_80734128@ha
    lfd f2, lbl_80734128@l(r3)
    addi r3, r1, 0xc
    lfd f1, 0x38(r1)
    lfs f0, lbl_80881178
    fsubs f1, f1, f2
    fdivs f1, f1, f31
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x40(r1)
    lwz r31, 0x44(r1)
    bl fn_8071D1E0
    mr r3, r31
    b lbl_fn_800CAA88_00000800
lbl_fn_800CAA88_00000734:
    addi r3, r1, 0x8
    addi r4, r31, 0x4
    bl fn_80721890
    lwz r0, 0x8(r1)
    cmpwi r0, 0x0
    bne lbl_fn_800CAA88_00000754
    li r3, 0x0
    b lbl_fn_800CAA88_00000764
lbl_fn_800CAA88_00000754:
    lwz r3, 0x8(r1)
    addi r4, r1, 0x10
    addi r3, r3, 0x110
    bl fn_80722440
lbl_fn_800CAA88_00000764:
    cmpwi r3, 0x0
    beq lbl_fn_800CAA88_000007EC
    lwz r3, 0x14(r1)
    lis r4, lbl_80734120@ha
    lwz r0, 0x8(r1)
    xoris r3, r3, 0x8000
    stw r3, 0x34(r1)
    lfd f1, lbl_80734120@l(r4)
    cmpwi r0, 0x0
    lfd f0, 0x30(r1)
    fsubs f31, f0, f1
    bne lbl_fn_800CAA88_0000079C
    li r3, -0x1
    b lbl_fn_800CAA88_000007A8
lbl_fn_800CAA88_0000079C:
    lwz r3, 0x8(r1)
    addi r3, r3, 0x110
    bl fn_80722500
lbl_fn_800CAA88_000007A8:
    stw r3, 0x3c(r1)
    lis r3, lbl_80734128@ha
    lfd f2, lbl_80734128@l(r3)
    addi r3, r1, 0x8
    lfd f1, 0x38(r1)
    lfs f0, lbl_80881178
    fsubs f1, f1, f2
    fdivs f1, f1, f31
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x40(r1)
    lwz r31, 0x44(r1)
    bl fn_80721990
    addi r3, r1, 0xc
    bl fn_8071D1E0
    mr r3, r31
    b lbl_fn_800CAA88_00000800
lbl_fn_800CAA88_000007EC:
    addi r3, r1, 0x8
    bl fn_80721990
    addi r3, r1, 0xc
    bl fn_8071D1E0
    li r3, -0x1
lbl_fn_800CAA88_00000800:
    lwz r0, 0x64(r1)
    psq_l f31, 0x58(r1), 0, 0
    lfd f31, 0x50(r1)
    lwz r31, 0x4c(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_800CAC48(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    mr r6, r3
    stw r0, 0x34(r1)
    addi r3, r1, 0x8
    stfd f31, 0x28(r1)
    fmr f31, f1
    stw r31, 0x24(r1)
    mr r31, r5
    stw r30, 0x20(r1)
    mr r30, r4
    addi r4, r6, 0x4
    bl fn_8071D0E0
    lwz r0, 0x8(r1)
    cmpwi r0, 0x0
    bne lbl_fn_800CAC48_00000864
    li r3, 0x0
    b lbl_fn_800CAC48_00000874
lbl_fn_800CAC48_00000864:
    lwz r3, 0x8(r1)
    addi r4, r1, 0x10
    addi r3, r3, 0x110
    bl fn_8071A680
lbl_fn_800CAC48_00000874:
    cmpwi r3, 0x0
    beq lbl_fn_800CAC48_0000089C
    lwz r3, 0x8(r1)
    li r0, 0x1
    slw r4, r0, r30
    cmpwi r3, 0x0
    beq lbl_fn_800CAC48_0000089C
    fmr f1, f31
    mr r5, r31
    bl fn_8071CD20
lbl_fn_800CAC48_0000089C:
    addi r3, r1, 0x8
    bl fn_8071D1E0
    lwz r0, 0x34(r1)
    lfd f31, 0x28(r1)
    lwz r31, 0x24(r1)
    lwz r30, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_800CACEC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    psq_st f31, 0x18(r1), 0, 0
    lwz r0, 0xa4(r3)
    mr r5, r3
    li r4, 0x0
    cmpwi r0, 0x0
    bgt lbl_fn_800CACEC_000008F8
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_800CACEC_000008F8
    li r4, 0x1
lbl_fn_800CACEC_000008F8:
    cmpwi r4, 0x0
    bne lbl_fn_800CACEC_00000910
    lwz r0, 0x9c(r3)
    rlwinm r0, r0, 0, 28, 28
    cmplwi r0, 0x8
    beq lbl_fn_800CACEC_00000918
lbl_fn_800CACEC_00000910:
    lfs f1, lbl_80881168
    b lbl_fn_800CACEC_00000958
lbl_fn_800CACEC_00000918:
    addi r3, r1, 0x8
    addi r4, r5, 0x4
    bl fn_8071D0E0
    lwz r0, 0x8(r1)
    cmpwi r0, 0x0
    bne lbl_fn_800CACEC_00000938
    lfs f1, lbl_80881168
    b lbl_fn_800CACEC_00000944
lbl_fn_800CACEC_00000938:
    lwz r3, 0x8(r1)
    addi r3, r3, 0x110
    bl fn_8071A800
lbl_fn_800CACEC_00000944:
    lfs f0, lbl_8088117C
    addi r3, r1, 0x8
    fdivs f31, f1, f0
    bl fn_8071D1E0
    fmr f1, f31
lbl_fn_800CACEC_00000958:
    lwz r0, 0x24(r1)
    psq_l f31, 0x18(r1), 0, 0
    lfd f31, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800CAD9C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_807157D0
    lis r3, lbl_807795C0@ha
    li r0, 0x0
    addi r3, r3, lbl_807795C0@l
    stw r3, 0x0(r31)
    mr r3, r31
    stw r0, 0x14(r31)
    stw r0, 0x18(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800CADE4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_800CADE4_000009E0
    cmpwi r4, 0x0
    ble lbl_fn_800CADE4_000009E0
    bl dtor_80084684
lbl_fn_800CADE4_000009E0:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800CAE24(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_800CAE24_00000A20
    cmpwi r4, 0x0
    ble lbl_fn_800CAE24_00000A20
    bl dtor_80084684
lbl_fn_800CAE24_00000A20:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800CAE64(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r11, r1, 0x70
    bl _savegpr_14
    clrlwi. r0, r7, 31
    mr r15, r3
    mr r16, r4
    mr r17, r5
    mr r18, r8
    beq lbl_fn_800CAE64_00000A6C
    lfs f0, lbl_80881180
    stfs f0, 0x0(r8)
lbl_fn_800CAE64_00000A6C:
    rlwinm. r0, r7, 0, 28, 28
    beq lbl_fn_800CAE64_00000A80
    lwz r0, 0x1c(r4)
    neg r0, r0
    stw r0, 0x20(r8)
lbl_fn_800CAE64_00000A80:
    lwz r0, 0xc(r4)
    cmplwi r0, 0x1
    beq lbl_fn_800CAE64_00000A94
    li r0, -0x17
    and r7, r7, r0
lbl_fn_800CAE64_00000A94:
    andi. r27, r7, 0x9
    lis r30, lbl_80734188@ha
    lwz r31, 0x10(r4)
    addi r20, r4, 0x10
    clrlwi r26, r7, 31
    rlwinm r25, r7, 0, 28, 28
    rlwinm r24, r7, 0, 29, 30
    rlwinm r23, r7, 0, 30, 30
    rlwinm r22, r7, 0, 29, 29
    rlwinm r21, r7, 0, 27, 27
    addi r30, r30, lbl_80734188@l
    lis r28, lbl_8077963C@ha
    lis r29, lbl_80779618@ha
    lis r14, lbl_8077966C@ha
    b lbl_fn_800CAE64_00000C50
lbl_fn_800CAE64_00000AD0:
    cmpwi r31, 0x0
    bne lbl_fn_800CAE64_00000AEC
    addi r3, r28, lbl_8077963C@l
    addi r5, r29, lbl_80779618@l
    li r4, 0x242
    crclr 6
    bl fn_80724DF0
lbl_fn_800CAE64_00000AEC:
    subic. r19, r31, 0x64
    bne lbl_fn_800CAE64_00000B0C
    lis r4, lbl_80779648@ha
    addi r3, r14, lbl_8077966C@l
    addi r5, r4, lbl_80779648@l
    li r4, 0x1bf
    crclr 6
    bl fn_80724DF0
lbl_fn_800CAE64_00000B0C:
    cmpwi r31, 0x0
    stw r16, 0x14(r15)
    bne lbl_fn_800CAE64_00000B2C
    addi r3, r28, lbl_8077963C@l
    addi r5, r29, lbl_80779618@l
    li r4, 0x242
    crclr 6
    bl fn_80724DF0
lbl_fn_800CAE64_00000B2C:
    cmpwi r19, 0x0
    bne lbl_fn_800CAE64_00000B4C
    lis r4, lbl_80779648@ha
    addi r3, r14, lbl_8077966C@l
    addi r5, r4, lbl_80779648@l
    li r4, 0x1bf
    crclr 6
    bl fn_80724DF0
lbl_fn_800CAE64_00000B4C:
    cmpwi r27, 0x0
    stw r19, 0x18(r15)
    beq lbl_fn_800CAE64_00000BE4
    mr r3, r16
    mr r4, r19
    mr r5, r17
    addi r6, r1, 0x18
    addi r7, r1, 0x14
    bl fn_80714D00
    cmpwi r26, 0x0
    beq lbl_fn_800CAE64_00000BC4
    lwz r4, 0x20(r17)
    cmpwi r4, 0x0
    beq lbl_fn_800CAE64_00000BA8
    lwz r0, 0x0(r4)
    mr r3, r15
    lwz r5, 0x18(r15)
    addi r6, r1, 0x18
    mulli r0, r0, 0xc
    addi r5, r5, 0x30
    add r12, r30, r0
    bl fn_80695B00
    nop
lbl_fn_800CAE64_00000BA8:
    lfs f1, 0x18(r1)
    lfs f0, 0x0(r18)
    fcmpo cr0, f1, f0
    ble lbl_fn_800CAE64_00000BBC
    b lbl_fn_800CAE64_00000BC0
lbl_fn_800CAE64_00000BBC:
    fmr f1, f0
lbl_fn_800CAE64_00000BC0:
    stfs f1, 0x0(r18)
lbl_fn_800CAE64_00000BC4:
    cmpwi r25, 0x0
    beq lbl_fn_800CAE64_00000BE4
    lwz r0, 0x20(r18)
    lwz r3, 0x14(r1)
    cmpw r3, r0
    ble lbl_fn_800CAE64_00000BE0
    mr r0, r3
lbl_fn_800CAE64_00000BE0:
    stw r0, 0x20(r18)
lbl_fn_800CAE64_00000BE4:
    cmpwi r24, 0x0
    beq lbl_fn_800CAE64_00000C28
    mr r3, r16
    mr r4, r19
    mr r5, r17
    addi r6, r15, 0x4
    addi r7, r1, 0x10
    addi r8, r1, 0xc
    bl fn_80714E40
    cmpwi r23, 0x0
    beq lbl_fn_800CAE64_00000C18
    lfs f0, 0x10(r1)
    stfs f0, 0x8(r18)
lbl_fn_800CAE64_00000C18:
    cmpwi r22, 0x0
    beq lbl_fn_800CAE64_00000C28
    lfs f0, 0xc(r1)
    stfs f0, 0xc(r18)
lbl_fn_800CAE64_00000C28:
    cmpwi r21, 0x0
    beq lbl_fn_800CAE64_00000C4C
    mr r3, r16
    mr r4, r19
    mr r5, r17
    addi r6, r1, 0x8
    bl fn_80714FA0
    lfs f0, 0x8(r1)
    stfs f0, 0x4(r18)
lbl_fn_800CAE64_00000C4C:
    lwz r31, 0x0(r31)
lbl_fn_800CAE64_00000C50:
    cmplw r31, r20
    bne lbl_fn_800CAE64_00000AD0
    addi r11, r1, 0x70
    bl _restgpr_14
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_800CB09C(void)
{
    nofralloc
    blr
}

asm void fn_800CB0A0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lfs f1, 0x8(r5)
    stw r0, 0x24(r1)
    addi r3, r1, 0x8
    lfs f0, 0xc(r4)
    stw r31, 0x1c(r1)
    mr r31, r6
    fsubs f4, f1, f0
    lfs f3, 0x4(r5)
    stw r30, 0x18(r1)
    mr r30, r4
    lfs f2, 0x8(r4)
    lfs f1, 0x0(r5)
    lfs f0, 0x4(r4)
    fsubs f2, f3, f2
    stfs f4, 0x10(r1)
    fsubs f0, f1, f0
    stfs f2, 0xc(r1)
    stfs f0, 0x8(r1)
    bl fn_805F9940
    lfs f2, 0x10(r30)
    lfs f0, lbl_80881180
    fcmpo cr0, f2, f0
    ble lbl_fn_800CB0A0_00000D00
    fdivs f1, f1, f2
    lfs f0, lbl_80881184
    fcmpo cr0, f1, f0
    bge lbl_fn_800CB0A0_00000CEC
    b lbl_fn_800CB0A0_00000CF0
lbl_fn_800CB0A0_00000CEC:
    fmr f1, f0
lbl_fn_800CB0A0_00000CF0:
    lfs f0, lbl_80881184
    fsubs f0, f0, f1
    stfs f0, 0x0(r31)
    b lbl_fn_800CB0A0_00000D08
lbl_fn_800CB0A0_00000D00:
    lfs f0, lbl_80881184
    stfs f0, 0x0(r31)
lbl_fn_800CB0A0_00000D08:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800CB14C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lfs f1, 0x8(r5)
    stw r0, 0x24(r1)
    addi r3, r1, 0x8
    lfs f0, 0xc(r4)
    stw r31, 0x1c(r1)
    mr r31, r6
    fsubs f4, f1, f0
    lfs f3, 0x4(r5)
    stw r30, 0x18(r1)
    mr r30, r4
    lfs f2, 0x8(r4)
    lfs f1, 0x0(r5)
    lfs f0, 0x4(r4)
    fsubs f2, f3, f2
    stfs f4, 0x10(r1)
    fsubs f0, f1, f0
    stfs f2, 0xc(r1)
    stfs f0, 0x8(r1)
    bl fn_805F9940
    lfs f2, 0x10(r30)
    lfs f0, lbl_80881180
    fcmpo cr0, f2, f0
    ble lbl_fn_800CB14C_00000DB0
    fdivs f2, f1, f2
    lfs f0, lbl_80881184
    fcmpo cr0, f2, f0
    bge lbl_fn_800CB14C_00000D98
    b lbl_fn_800CB14C_00000D9C
lbl_fn_800CB14C_00000D98:
    fmr f2, f0
lbl_fn_800CB14C_00000D9C:
    lfs f1, lbl_80881184
    lfs f0, 0x0(r31)
    fsubs f1, f1, f2
    fmuls f0, f0, f1
    stfs f0, 0x0(r31)
lbl_fn_800CB14C_00000DB0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800CB1F4(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    stw r30, 0x48(r1)
    stw r29, 0x44(r1)
    mr r29, r5
    stw r28, 0x40(r1)
    mr r28, r4
    beq lbl_fn_800CB1F4_00000DFC
    cmpwi r5, 0x0
    bne lbl_fn_800CB1F4_00000E04
lbl_fn_800CB1F4_00000DFC:
    lfs f1, lbl_80881180
    b lbl_fn_800CB1F4_00000F14
lbl_fn_800CB1F4_00000E04:
    lfs f0, lbl_80881184
    stfs f0, 0xc(r1)
    lwz r0, 0x9c(r5)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_800CB1F4_00000F04
    lwz r31, 0x374(r4)
    addi r30, r4, 0x364
    cmpwi r31, 0x0
    bne lbl_fn_800CB1F4_00000E48
    lis r3, lbl_8077963C@ha
    lis r5, lbl_80779618@ha
    addi r3, r3, lbl_8077963C@l
    li r4, 0x242
    addi r5, r5, lbl_80779618@l
    crclr 6
    bl fn_80724DF0
lbl_fn_800CB1F4_00000E48:
    subic. r31, r31, 0x64
    bne lbl_fn_800CB1F4_00000E6C
    lis r3, lbl_8077966C@ha
    lis r5, lbl_80779648@ha
    addi r3, r3, lbl_8077966C@l
    li r4, 0x1bf
    addi r5, r5, lbl_80779648@l
    crclr 6
    bl fn_80724DF0
lbl_fn_800CB1F4_00000E6C:
    lwz r4, 0x98(r29)
    addi r3, r28, 0x8
    addi r5, r1, 0x10
    subi r4, r4, 0x1
    bl fn_8059E380
    cmpwi r3, 0x0
    beq lbl_fn_800CB1F4_00000F04
    addi r3, r1, 0x18
    bl fn_80716000
    lfs f0, 0x70(r29)
    li r0, 0x0
    stfs f0, 0x18(r1)
    mr r3, r30
    lwz r11, 0x10(r1)
    mr r4, r31
    lfs f0, 0x74(r29)
    addi r5, r1, 0x18
    stfs f0, 0x1c(r1)
    addi r6, r1, 0xc
    lbz r10, 0x14(r1)
    addi r7, r1, 0x8
    lfs f0, 0x78(r29)
    stfs f0, 0x20(r1)
    lbz r9, 0x15(r1)
    lfs f0, 0x7c(r29)
    stfs f0, 0x24(r1)
    lbz r8, 0x16(r1)
    lfs f0, 0x80(r29)
    stfs f0, 0x28(r1)
    lfs f0, 0x84(r29)
    stfs f0, 0x2c(r1)
    stw r11, 0x30(r1)
    stb r10, 0x34(r1)
    stb r9, 0x35(r1)
    stb r8, 0x36(r1)
    stw r0, 0x38(r1)
    stw r0, 0x3c(r1)
    bl fn_80714D00
lbl_fn_800CB1F4_00000F04:
    mr r3, r29
    bl fn_800CA844
    lfs f0, 0xc(r1)
    fmuls f1, f0, f1
lbl_fn_800CB1F4_00000F14:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    lwz r28, 0x40(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_800CB360(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    blr
}

asm void fn_800CB36C(void)
{
    nofralloc
    li r5, 0x0
    stw r5, 0x0(r3)
    b lbl_fn_800CB36C_00000F54
    stw r0, 0xa4(r5)
    stw r5, 0x0(r3)
lbl_fn_800CB36C_00000F54:
    lwz r5, 0x0(r4)
    stw r5, 0x0(r3)
    cmpwi r5, 0x0
    beqlr
    lwz r4, 0xa4(r5)
    addi r0, r4, 0x1
    stw r0, 0xa4(r5)
    blr
}

asm void fn_800CB3A0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_800CB3A0_00000FC0
    lwz r6, 0x0(r3)
    cmpwi r6, 0x0
    beq lbl_fn_800CB3A0_00000FB0
    lwz r5, 0xa4(r6)
    li r0, 0x0
    subi r5, r5, 0x1
    stw r5, 0xa4(r6)
    stw r0, 0x0(r3)
lbl_fn_800CB3A0_00000FB0:
    cmpwi r4, 0x0
    ble lbl_fn_800CB3A0_00000FC0
    mr r3, r31
    bl dtor_80084684
lbl_fn_800CB3A0_00000FC0:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800CB404(void)
{
    nofralloc
    lwz r6, 0x0(r3)
    cmpwi r6, 0x0
    beq lbl_fn_800CB404_00000FF8
    lwz r5, 0xa4(r6)
    li r0, 0x0
    subi r5, r5, 0x1
    stw r5, 0xa4(r6)
    stw r0, 0x0(r3)
lbl_fn_800CB404_00000FF8:
    cmpwi r4, 0x0
    stw r4, 0x0(r3)
    beqlr
    lwz r3, 0xa4(r4)
    addi r0, r3, 0x1
    stw r0, 0xa4(r4)
    blr
}

asm void fn_800CB440(void)
{
    nofralloc
    lwz r6, 0x0(r3)
    cmpwi r6, 0x0
    beq lbl_fn_800CB440_00001034
    lwz r5, 0xa4(r6)
    li r0, 0x0
    subi r5, r5, 0x1
    stw r5, 0xa4(r6)
    stw r0, 0x0(r3)
lbl_fn_800CB440_00001034:
    lwz r4, 0x0(r4)
    stw r4, 0x0(r3)
    cmpwi r4, 0x0
    beqlr
    lwz r3, 0xa4(r4)
    addi r0, r3, 0x1
    stw r0, 0xa4(r4)
    blr
}

asm void fn_800CB480(void)
{
    nofralloc
    lwz r5, 0x0(r3)
    cmpwi r5, 0x0
    beqlr
    lwz r4, 0xa4(r5)
    li r0, 0x0
    subi r4, r4, 0x1
    stw r4, 0xa4(r5)
    stw r0, 0x0(r3)
    blr
}

asm void fn_800CB4A4(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    cmpwi r3, 0x0
    beq lbl_fn_800CB4A4_00001090
    lwz r0, 0x9c(r3)
    extrwi r3, r0, 1, 28
    blr
lbl_fn_800CB4A4_00001090:
    li r3, 0x0
    blr
}

asm void fn_800CB4C4(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    cmpwi r3, 0x0
    beq lbl_fn_800CB4C4_000010B8
    lwz r3, 0xa0(r3)
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    blr
lbl_fn_800CB4C4_000010B8:
    li r3, 0x0
    blr
}

asm void fn_800CB4EC(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    cmpwi r3, 0x0
    beq lbl_fn_800CB4EC_000010D0
    b fn_800CA028
lbl_fn_800CB4EC_000010D0:
    li r3, 0x0
    blr
}

asm void fn_800CB504(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    cmpwi r3, 0x0
    beqlr
    b fn_800CA098
    blr
}

asm void fn_800CB518(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    cmpwi r3, 0x0
    beqlr
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beqlr
    b fn_80709F20
    blr
}

asm void fn_800CB538(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lwz r3, 0x0(r3)
    stw r0, 0x14(r1)
    cmpwi r3, 0x0
    beq lbl_fn_800CB538_0000114C
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_800CB538_00001138
    bl fn_8070ABE0
    b lbl_fn_800CB538_0000113C
lbl_fn_800CB538_00001138:
    li r3, 0x0
lbl_fn_800CB538_0000113C:
    neg r0, r3
    andc r0, r0, r3
    srwi r3, r0, 31
    b lbl_fn_800CB538_00001150
lbl_fn_800CB538_0000114C:
    li r3, 0x0
lbl_fn_800CB538_00001150:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800CB58C(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    cmpwi r3, 0x0
    beq lbl_fn_800CB58C_00001180
    lwz r3, 0x4(r3)
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    blr
lbl_fn_800CB58C_00001180:
    li r3, 0x0
    blr
}

asm void fn_800CB5B4(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    cmpwi r3, 0x0
    beqlr
    b fn_800CA0AC
    blr
}

asm void fn_800CB5C8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r5
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r6, 0x0(r3)
    cmpwi r6, 0x0
    beq lbl_fn_800CB5C8_000011D4
    lwz r3, 0x4(r6)
    cmpwi r3, 0x0
    beq lbl_fn_800CB5C8_000011D4
    bl fn_80709AD0
lbl_fn_800CB5C8_000011D4:
    cmpwi r31, 0x0
    bne lbl_fn_800CB5C8_000011FC
    lwz r4, 0x0(r30)
    cmpwi r4, 0x0
    beq lbl_fn_800CB5C8_000011FC
    lwz r3, 0xa4(r4)
    li r0, 0x0
    subi r3, r3, 0x1
    stw r3, 0xa4(r4)
    stw r0, 0x0(r30)
lbl_fn_800CB5C8_000011FC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800CB640(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    cmpwi r3, 0x0
    beqlr
    b fn_800CA1D4
    blr
}

asm void fn_800CB654(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    cmpwi r3, 0x0
    beqlr
    b fn_800CA2FC
    blr
}

asm void fn_800CB668(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    cmpwi r3, 0x0
    beqlr
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beqlr
    b fn_8070AD70
    blr
}

asm void fn_800CB688(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    cmpwi r3, 0x0
    beqlr
    b fn_800CA42C
    blr
}

asm void fn_800CB69C(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    cmpwi r3, 0x0
    beqlr
    b fn_800CA5E8
    blr
}

asm void fn_800CB6B0(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    cmpwi r3, 0x0
    beqlr
    b fn_800CA798
    blr
}

asm void fn_800CB6C4(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    cmpwi r3, 0x0
    beq lbl_fn_800CB6C4_000012AC
    addi r3, r3, 0x70
    blr
lbl_fn_800CB6C4_000012AC:
    lis r3, lbl_807C7030@ha
    addi r3, r3, lbl_807C7030@l
    blr
}

asm void fn_800CB6E4(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    cmpwi r3, 0x0
    beqlr
    b fn_800CA7E8
    blr
}

asm void fn_800CB6F8(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    cmpwi r3, 0x0
    beq lbl_fn_800CB6F8_000012E0
    lwz r3, 0x98(r3)
    blr
lbl_fn_800CB6F8_000012E0:
    li r3, 0x0
    blr
}

asm void fn_800CB714(void)
{
    nofralloc
    b fn_800CA1D4
}

asm void fn_800CB718(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_fn_800CB718_0000131C
    lwz r0, 0xa4(r3)
    cmpwi r0, 0x0
    bgt lbl_fn_800CB718_00001344
lbl_fn_800CB718_0000131C:
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_800CB718_00001330
    mr r4, r31
    bl fn_80709AD0
lbl_fn_800CB718_00001330:
    cntlzw r0, r31
    li r4, 0x1
    mr r3, r30
    rlwnm r4, r4, r0, 31, 31
    bl fn_800C82A0
lbl_fn_800CB718_00001344:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800CB788(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x9c(r3)
    rlwinm r0, r0, 0, 28, 28
    cmplwi r0, 0x8
    bne lbl_fn_800CB788_000013AC
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_800CB788_00001398
    bl fn_80709AD0
lbl_fn_800CB788_00001398:
    cntlzw r0, r31
    li r4, 0x1
    mr r3, r30
    rlwnm r4, r4, r0, 31, 31
    bl fn_800C82A0
lbl_fn_800CB788_000013AC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800CB7F0(void)
{
    nofralloc
    b fn_800CA144
}

asm void fn_800CB7F4(void)
{
    nofralloc
    b fn_800CA514
}

asm void fn_800CB7F8(void)
{
    nofralloc
    b fn_800CA6C4
}

asm void fn_800CB7FC(void)
{
    nofralloc
    b fn_800CA3D4
}
