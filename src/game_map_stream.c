#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_800844D8(void);
extern void fn_8008BBD8(void);
extern void fn_80092814(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_8012476C(void);
extern void fn_8013310C(void);
extern void fn_8013322C(void);
extern void fn_801446F0(void);
extern void fn_801539E0(void);
extern void fn_80155DAC(void);
extern void fn_8016DA4C(void);
extern void fn_80188A70(void);
extern void fn_80188AA0(void);
extern void fn_80188F08(void);
extern void fn_80188F40(void);
extern void fn_801905AC(void);
extern void fn_801905DC(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F99B0(void);
extern void fn_80680770(void);
extern void fn_80682428(void);
extern void fn_80686EA4(void);
extern void fn_8068AEA4(void);
extern void fn_80695B00(void);

/* External data declarations */
extern u8 lbl_80739F34[];
extern u8 lbl_8077CF28[];
extern u8 lbl_8077CF44[];
extern u8 lbl_8077D650[];
extern u8 lbl_8077D65C[];
extern u8 lbl_8077D668[];
extern u8 lbl_8077D678[];
extern u8 lbl_8077D6B0[];
extern u8 lbl_8077D728[];
extern u8 lbl_8077D7A0[];
extern u8 lbl_8077DC10[];
extern u8 lbl_8077DC80[];
extern u8 lbl_8077DCF0[];
extern u8 lbl_8077DCFC[];
extern u8 lbl_8077ED00[];
extern u8 lbl_807C7B50[];
extern u8 lbl_807C7B58[];
extern u8 lbl_807C7B78[];
extern u8 lbl_807C7B90[];

/* Small data declarations */
extern u32 lbl_8087EFA8;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F0B1;
extern u32 lbl_8087F0B2;
extern u32 lbl_8087F0BB;
extern u32 lbl_8087F0BE;
extern u32 lbl_8087F490;
extern u32 lbl_80881F70;
extern u32 lbl_80881F7C;
extern u32 lbl_80881F90;
extern u32 lbl_80881FA4;
extern u32 lbl_80881FA8;
extern u32 lbl_80881FB0;
extern u32 lbl_80881FB4;
extern u32 lbl_80881FB8;
extern u32 lbl_80881FBC;
extern u32 lbl_80881FC0;
extern u32 lbl_80881FC4;
extern u32 lbl_80881FC8;
extern u32 lbl_80881FCC;
extern u32 lbl_80881FD0;
extern u32 lbl_80881FD4;
extern u32 lbl_80881FD8;
extern u32 lbl_80881FDC;
extern u32 lbl_80881FE0;
extern u32 lbl_80881FE4;

/* Function declarations */
void fn_80191960(void);
void fn_8019198C(void);
void fn_80191A44(void);
void fn_80191AF0(void);
void fn_80191B50(void);
void fn_80191D30(void);
void fn_80191E38(void);
void fn_80191EA4(void);
void fn_80191FF8(void);
void fn_80192130(void);
void fn_80192190(void);
void fn_80192198(void);
void fn_80192378(void);
void fn_801923B8(void);
void fn_801923F8(void);
void fn_80192438(void);
void fn_80192478(void);
void fn_801924B8(void);
void fn_801924F8(void);
void fn_80192538(void);
void fn_80192578(void);
void fn_80192590(void);
void fn_80192758(void);
void fn_80192908(void);
void fn_80192948(void);
void fn_80192FB4(void);
void fn_80193074(void);

asm void fn_80191960(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    mr r12, r3
    stw r0, 0x14(r1)
    lwz r3, 0xc(r3)
    bl fn_80695B00
    nop
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8019198C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r5, 0x3
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bne lbl_fn_8019198C_00000060
    lis r3, lbl_8077D678@ha
    addi r3, r3, lbl_8077D678@l
    stw r3, 0x0(r4)
    b lbl_fn_8019198C_000000CC
lbl_fn_8019198C_00000060:
    cmpwi r5, 0x0
    bne lbl_fn_8019198C_00000094
    cmpwi r4, 0x0
    beq lbl_fn_8019198C_000000CC
    lwz r5, 0x0(r3)
    lwz r0, 0x4(r3)
    stw r0, 0x4(r4)
    stw r5, 0x0(r4)
    lwz r0, 0x8(r3)
    stw r0, 0x8(r4)
    lwz r0, 0xc(r3)
    stw r0, 0xc(r4)
    b lbl_fn_8019198C_000000CC
lbl_fn_8019198C_00000094:
    cmpwi r5, 0x1
    beq lbl_fn_8019198C_000000CC
    lwz r5, 0x0(r4)
    lis r3, lbl_8077D678@ha
    lwz r4, lbl_8077D678@l(r3)
    lwz r3, 0x0(r5)
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_8019198C_000000C4
    stw r30, 0x0(r31)
    b lbl_fn_8019198C_000000CC
lbl_fn_8019198C_000000C4:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_8019198C_000000CC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80191A44(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r6, lbl_8077D7A0@ha
    li r5, 0x0
    stw r0, 0x14(r1)
    addi r6, r6, lbl_8077D7A0@l
    li r0, 0x37
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    stw r4, 0x4(r3)
    stw r6, 0x0(r3)
    stw r5, 0x58c(r4)
    li r4, 0x4000
    lwz r5, 0x4(r3)
    stw r0, 0x560(r5)
    lwz r3, 0x4(r3)
    addi r3, r3, 0x7d4
    bl fn_8013322C
    lwz r3, 0x4(r30)
    li r0, 0x1
    lfs f0, lbl_80881F7C
    li r4, 0x0
    stw r0, 0x3fc(r3)
    addi r31, r3, 0xb0
    lfs f1, lbl_80881F70
    mr r3, r31
    lfs f2, lbl_80881F90
    li r5, 0x1e3
    stfs f0, 0x24c(r31)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80881F7C
    mr r3, r30
    stfs f0, 0x238(r31)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80191AF0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    psq_st f31, 0x18(r1), 0, 0
    stw r31, 0xc(r1)
    li r31, 0x0
    lwz r3, 0x4(r3)
    addi r3, r3, 0xb0
    lfs f31, 0x234(r3)
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_80191AF0_000001D0
    li r31, 0x1
lbl_fn_80191AF0_000001D0:
    psq_l f31, 0x18(r1), 0, 0
    mr r3, r31
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80191B50(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stw r31, 0x6c(r1)
    mr r31, r3
    stw r30, 0x68(r1)
    lwz r8, 0x4(r4)
    lwz r0, 0x564(r8)
    cmpwi r0, 0x7
    bne lbl_fn_80191B50_00000220
    bl fn_80192758
    b lbl_fn_80191B50_000003B8
lbl_fn_80191B50_00000220:
    lis r4, lbl_8077D650@ha
    lwzu r6, lbl_8077D650@l(r4)
    li r7, 0x0
    stw r8, 0x8(r1)
    lwz r5, 0x4(r4)
    lwz r4, 0x8(r4)
    stb r7, 0xc(r1)
    stw r7, 0x0(r3)
    lbz r0, lbl_8087F0B2
    stb r7, 0xd(r1)
    extsb. r0, r0
    stb r7, 0xe(r1)
    stw r6, 0x1c(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r6, 0x10(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r6, 0x50(r1)
    stw r5, 0x54(r1)
    stw r4, 0x58(r1)
    stw r8, 0x5c(r1)
    stb r7, 0x60(r1)
    stb r7, 0x61(r1)
    stb r7, 0x62(r1)
    bne lbl_fn_80191B50_000002B0
    lis r6, lbl_807C7B58@ha
    lis r4, fn_80188F08@ha
    lis r3, fn_80188F40@ha
    li r0, 0x1
    addi r3, r3, fn_80188F40@l
    addi r5, r6, lbl_807C7B58@l
    addi r4, r4, fn_80188F08@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C7B58@l(r6)
    stb r0, lbl_8087F0B2
lbl_fn_80191B50_000002B0:
    lwz r7, 0x50(r1)
    addi r3, r1, 0x3c
    lwz r6, 0x54(r1)
    lwz r5, 0x58(r1)
    lwz r4, 0x5c(r1)
    lwz r0, 0x60(r1)
    stw r7, 0x3c(r1)
    stw r6, 0x40(r1)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_80191B50_00000394
    lwz r7, 0x3c(r1)
    li r3, 0x14
    lwz r6, 0x40(r1)
    lwz r5, 0x44(r1)
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r7, 0x28(r1)
    stw r6, 0x2c(r1)
    stw r5, 0x30(r1)
    stw r4, 0x34(r1)
    stw r0, 0x38(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_80191B50_00000348
    lis r3, __files@ha
    lis r4, lbl_8077CF28@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8077CF28@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80191B50_00000348:
    cmpwi r30, 0x0
    beq lbl_fn_80191B50_00000388
    lwz r0, 0x28(r1)
    stw r0, 0x0(r30)
    lwz r0, 0x2c(r1)
    stw r0, 0x4(r30)
    lwz r0, 0x30(r1)
    stw r0, 0x8(r30)
    lwz r0, 0x34(r1)
    stw r0, 0xc(r30)
    lbz r0, 0x38(r1)
    stb r0, 0x10(r30)
    lbz r0, 0x39(r1)
    stb r0, 0x11(r30)
    lbz r0, 0x3a(r1)
    stb r0, 0x12(r30)
lbl_fn_80191B50_00000388:
    stw r30, 0x4(r31)
    li r0, 0x1
    b lbl_fn_80191B50_00000398
lbl_fn_80191B50_00000394:
    li r0, 0x0
lbl_fn_80191B50_00000398:
    cmpwi r0, 0x0
    beq lbl_fn_80191B50_000003B0
    lis r3, lbl_807C7B58@ha
    addi r3, r3, lbl_807C7B58@l
    stw r3, 0x0(r31)
    b lbl_fn_80191B50_000003B8
lbl_fn_80191B50_000003B0:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_80191B50_000003B8:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_80191D30(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r7, lbl_8077D728@ha
    lfs f0, lbl_80881FA4
    stw r0, 0x14(r1)
    addi r7, r7, lbl_8077D728@l
    li r6, 0x0
    li r0, 0x38
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    stw r5, 0x10(r3)
    li r5, 0x0
    stw r4, 0x4(r3)
    stw r7, 0x0(r3)
    stw r6, 0x8(r3)
    stfs f0, 0xc(r3)
    stw r0, 0x560(r4)
    lis r4, 0x2
    lwz r3, 0x4(r3)
    addi r3, r3, 0x7d4
    bl fn_8013310C
    lwz r3, 0x4(r30)
    lwz r0, 0x12a4(r3)
    rlwinm r0, r0, 0, 27, 25
    stw r0, 0x12a4(r3)
    lwz r3, 0x4(r30)
    bl fn_8016DA4C
    lwz r3, 0x4(r30)
    lwz r0, 0x12a4(r3)
    srwi. r0, r0, 31
    beq lbl_fn_80191D30_00000454
    bl fn_801539E0
lbl_fn_80191D30_00000454:
    lwz r3, 0x4(r30)
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 25
    beq lbl_fn_80191D30_0000046C
    li r4, 0x0
    bl fn_80155DAC
lbl_fn_80191D30_0000046C:
    lwz r3, 0x4(r30)
    li r0, 0x1
    lfs f0, lbl_80881F7C
    li r4, 0x0
    stw r0, 0x3fc(r3)
    addi r31, r3, 0xb0
    lfs f1, lbl_80881F70
    mr r3, r31
    stfs f0, 0x24c(r31)
    li r5, 0x1e4
    lfs f2, lbl_80881F90
    li r6, 0x1
    stw r0, 0x8(r30)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80881F7C
    stfs f0, 0x238(r31)
    lwz r3, 0x4(r30)
    bl fn_801446F0
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80191E38(void)
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
    beq lbl_fn_80191E38_00000528
    lis r5, lbl_8077D728@ha
    lwz r4, 0x4(r3)
    addi r5, r5, lbl_8077D728@l
    stw r5, 0x0(r3)
    addi r3, r4, 0x7d4
    lis r4, 0x2
    bl fn_8013322C
    cmpwi r31, 0x0
    ble lbl_fn_80191E38_00000528
    mr r3, r30
    bl dtor_80084684
lbl_fn_80191E38_00000528:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80191EA4(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    li r30, 0x0
    stw r29, 0x24(r1)
    mr r29, r3
    lwz r4, lbl_8087EFA8
    lfs f0, 0xc(r3)
    lfs f3, 0x3a4(r4)
    lwz r5, 0x4(r3)
    fsubs f0, f0, f3
    addi r31, r5, 0xb0
    stfs f0, 0xc(r3)
    lwz r0, 0x48(r5)
    cmpwi r0, 0x0
    bne lbl_fn_80191EA4_000005C4
    lwz r3, lbl_8087F0A8
    li r4, 0x22
    addi r3, r3, 0x48c
    bl fn_8012476C
    cmpwi r3, 0x0
    beq lbl_fn_80191EA4_000005C4
    lwz r3, lbl_8087EFA8
    lfs f3, lbl_80881FA8
    lfs f4, 0x3a4(r3)
    lfs f0, 0xc(r29)
    fnmsubs f0, f3, f4, f0
    stfs f0, 0xc(r29)
lbl_fn_80191EA4_000005C4:
    lwz r0, 0x8(r29)
    cmpwi r0, 0x0
    beq lbl_fn_80191EA4_000005DC
    cmpwi r0, 0x1
    beq lbl_fn_80191EA4_0000063C
    b lbl_fn_80191EA4_00000670
lbl_fn_80191EA4_000005DC:
    lfs f31, 0x234(r31)
    mr r3, r31
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_80191EA4_00000670
    li r0, 0x1
    stw r0, 0x8(r29)
    lfs f0, lbl_80881F7C
    mr r3, r31
    stw r0, 0x34c(r31)
    li r4, 0x0
    lfs f1, lbl_80881F70
    li r5, 0x1e2
    stfs f0, 0x24c(r31)
    li r6, 0x1
    lfs f2, lbl_80881F90
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80881F7C
    stfs f0, 0x238(r31)
    b lbl_fn_80191EA4_00000670
lbl_fn_80191EA4_0000063C:
    lfs f2, lbl_80881F70
    addi r3, r1, 0x8
    stfs f2, 0x8(r1)
    lwz r4, 0x4(r29)
    stfs f2, 0xc(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x6b8(r4), 0, 0
    stfs f2, 0x6c0(r4)
    lfs f0, 0xc(r29)
    stfs f2, 0x10(r1)
    fcmpo cr0, f0, f2
    bge lbl_fn_80191EA4_00000670
    li r30, 0x1
lbl_fn_80191EA4_00000670:
    psq_l f31, 0x38(r1), 0, 0
    mr r3, r30
    lfd f31, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80191FF8(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    lwz r8, 0x4(r4)
    lis r7, lbl_8077D65C@ha
    stw r0, 0x64(r1)
    li r0, 0x0
    stw r31, 0x5c(r1)
    mr r31, r3
    lwzu r6, lbl_8077D65C@l(r7)
    stw r6, 0x34(r1)
    lwz r5, 0x4(r7)
    lwz r4, 0x8(r7)
    stw r5, 0x38(r1)
    stw r0, 0x0(r3)
    lbz r0, lbl_8087F0BE
    stw r4, 0x3c(r1)
    extsb. r0, r0
    stw r6, 0x28(r1)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r6, 0x40(r1)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r8, 0x4c(r1)
    bne lbl_fn_80191FF8_00000724
    lis r6, lbl_807C7B90@ha
    lis r4, fn_80191960@ha
    lis r3, fn_8019198C@ha
    li r0, 0x1
    addi r3, r3, fn_8019198C@l
    addi r5, r6, lbl_807C7B90@l
    addi r4, r4, fn_80191960@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C7B90@l(r6)
    stb r0, lbl_8087F0BE
lbl_fn_80191FF8_00000724:
    lwz r6, 0x40(r1)
    addi r3, r1, 0x18
    lwz r5, 0x44(r1)
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r6, 0x18(r1)
    stw r5, 0x1c(r1)
    stw r4, 0x20(r1)
    stw r0, 0x24(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_80191FF8_00000798
    lwz r5, 0x18(r1)
    addic. r6, r31, 0x4
    lwz r4, 0x1c(r1)
    lwz r3, 0x20(r1)
    lwz r0, 0x24(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r3, 0x10(r1)
    stw r0, 0x14(r1)
    beq lbl_fn_80191FF8_00000790
    stw r5, 0x0(r6)
    stw r4, 0x4(r6)
    stw r3, 0x8(r6)
    stw r0, 0xc(r6)
lbl_fn_80191FF8_00000790:
    li r0, 0x1
    b lbl_fn_80191FF8_0000079C
lbl_fn_80191FF8_00000798:
    li r0, 0x0
lbl_fn_80191FF8_0000079C:
    cmpwi r0, 0x0
    beq lbl_fn_80191FF8_000007B4
    lis r3, lbl_807C7B90@ha
    addi r3, r3, lbl_807C7B90@l
    stw r3, 0x0(r31)
    b lbl_fn_80191FF8_000007BC
lbl_fn_80191FF8_000007B4:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_80191FF8_000007BC:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80192130(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r6, lbl_8077D6B0@ha
    li r5, 0x0
    stw r0, 0x14(r1)
    addi r6, r6, lbl_8077D6B0@l
    li r0, 0x39
    stw r31, 0xc(r1)
    mr r31, r3
    stw r4, 0x4(r3)
    stw r6, 0x0(r3)
    stw r5, 0x58c(r4)
    lis r4, 0x2
    lwz r5, 0x4(r3)
    stw r0, 0x560(r5)
    lwz r3, 0x4(r3)
    addi r3, r3, 0x7d4
    bl fn_8013322C
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80192190(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_80192198(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stw r31, 0x6c(r1)
    mr r31, r3
    stw r30, 0x68(r1)
    lwz r8, 0x4(r4)
    lwz r0, 0x564(r8)
    cmpwi r0, 0x7
    bne lbl_fn_80192198_00000868
    bl fn_80192758
    b lbl_fn_80192198_00000A00
lbl_fn_80192198_00000868:
    lis r4, lbl_8077D668@ha
    lwzu r6, lbl_8077D668@l(r4)
    li r7, 0x0
    stw r8, 0x8(r1)
    lwz r5, 0x4(r4)
    lwz r4, 0x8(r4)
    stb r7, 0xc(r1)
    stw r7, 0x0(r3)
    lbz r0, lbl_8087F0B2
    stb r7, 0xd(r1)
    extsb. r0, r0
    stb r7, 0xe(r1)
    stw r6, 0x1c(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r6, 0x10(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r6, 0x50(r1)
    stw r5, 0x54(r1)
    stw r4, 0x58(r1)
    stw r8, 0x5c(r1)
    stb r7, 0x60(r1)
    stb r7, 0x61(r1)
    stb r7, 0x62(r1)
    bne lbl_fn_80192198_000008F8
    lis r6, lbl_807C7B58@ha
    lis r4, fn_80188F08@ha
    lis r3, fn_80188F40@ha
    li r0, 0x1
    addi r3, r3, fn_80188F40@l
    addi r5, r6, lbl_807C7B58@l
    addi r4, r4, fn_80188F08@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C7B58@l(r6)
    stb r0, lbl_8087F0B2
lbl_fn_80192198_000008F8:
    lwz r7, 0x50(r1)
    addi r3, r1, 0x3c
    lwz r6, 0x54(r1)
    lwz r5, 0x58(r1)
    lwz r4, 0x5c(r1)
    lwz r0, 0x60(r1)
    stw r7, 0x3c(r1)
    stw r6, 0x40(r1)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_80192198_000009DC
    lwz r7, 0x3c(r1)
    li r3, 0x14
    lwz r6, 0x40(r1)
    lwz r5, 0x44(r1)
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r7, 0x28(r1)
    stw r6, 0x2c(r1)
    stw r5, 0x30(r1)
    stw r4, 0x34(r1)
    stw r0, 0x38(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_80192198_00000990
    lis r3, __files@ha
    lis r4, lbl_8077CF28@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8077CF28@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80192198_00000990:
    cmpwi r30, 0x0
    beq lbl_fn_80192198_000009D0
    lwz r0, 0x28(r1)
    stw r0, 0x0(r30)
    lwz r0, 0x2c(r1)
    stw r0, 0x4(r30)
    lwz r0, 0x30(r1)
    stw r0, 0x8(r30)
    lwz r0, 0x34(r1)
    stw r0, 0xc(r30)
    lbz r0, 0x38(r1)
    stb r0, 0x10(r30)
    lbz r0, 0x39(r1)
    stb r0, 0x11(r30)
    lbz r0, 0x3a(r1)
    stb r0, 0x12(r30)
lbl_fn_80192198_000009D0:
    stw r30, 0x4(r31)
    li r0, 0x1
    b lbl_fn_80192198_000009E0
lbl_fn_80192198_000009DC:
    li r0, 0x0
lbl_fn_80192198_000009E0:
    cmpwi r0, 0x0
    beq lbl_fn_80192198_000009F8
    lis r3, lbl_807C7B58@ha
    addi r3, r3, lbl_807C7B58@l
    stw r3, 0x0(r31)
    b lbl_fn_80192198_00000A00
lbl_fn_80192198_000009F8:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_80192198_00000A00:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_80192378(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_80192378_00000A40
    cmpwi r4, 0x0
    ble lbl_fn_80192378_00000A40
    bl dtor_80084684
lbl_fn_80192378_00000A40:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801923B8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801923B8_00000A80
    cmpwi r4, 0x0
    ble lbl_fn_801923B8_00000A80
    bl dtor_80084684
lbl_fn_801923B8_00000A80:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801923F8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801923F8_00000AC0
    cmpwi r4, 0x0
    ble lbl_fn_801923F8_00000AC0
    bl dtor_80084684
lbl_fn_801923F8_00000AC0:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80192438(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_80192438_00000B00
    cmpwi r4, 0x0
    ble lbl_fn_80192438_00000B00
    bl dtor_80084684
lbl_fn_80192438_00000B00:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80192478(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_80192478_00000B40
    cmpwi r4, 0x0
    ble lbl_fn_80192478_00000B40
    bl dtor_80084684
lbl_fn_80192478_00000B40:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801924B8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801924B8_00000B80
    cmpwi r4, 0x0
    ble lbl_fn_801924B8_00000B80
    bl dtor_80084684
lbl_fn_801924B8_00000B80:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801924F8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801924F8_00000BC0
    cmpwi r4, 0x0
    ble lbl_fn_801924F8_00000BC0
    bl dtor_80084684
lbl_fn_801924F8_00000BC0:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80192538(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_80192538_00000C00
    cmpwi r4, 0x0
    ble lbl_fn_80192538_00000C00
    bl dtor_80084684
lbl_fn_80192538_00000C00:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80192578(void)
{
    nofralloc
    lwz r4, 0x4(r4)
    psq_l f1, 0x528(r4), 0, 0
    lfs f2, 0x530(r4)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
    blr
}

asm void fn_80192590(void)
{
    nofralloc
    stwu r1, -0x180(r1)
    mflr r0
    lfs f7, lbl_80881FB0
    stw r0, 0x184(r1)
    lfs f0, lbl_80881FB4
    stw r31, 0x17c(r1)
    addi r31, r1, 0x138
    stw r30, 0x178(r1)
    lwz r30, 0x4(r4)
    stw r29, 0x174(r1)
    mr r29, r3
    stfs f7, 0x164(r1)
    stfs f7, 0x15c(r1)
    stfs f7, 0x158(r1)
    stfs f7, 0x154(r1)
    stfs f7, 0x150(r1)
    stfs f7, 0x148(r1)
    stfs f7, 0x144(r1)
    stfs f7, 0x140(r1)
    stfs f7, 0x13c(r1)
    stfs f0, 0x160(r1)
    stfs f0, 0x14c(r1)
    stfs f0, 0x138(r1)
    lfs f1, 0x53c(r30)
    fcmpu cr0, f7, f1
    beq lbl_fn_80192590_00000CE8
    addi r3, r1, 0x48
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0x48
    addi r5, r1, 0x18
    bl fn_805F89F0
    addi r3, r1, 0x18
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_80192590_00000CE8:
    lfs f0, lbl_80881FB0
    lfs f1, 0x538(r30)
    fcmpu cr0, f0, f1
    beq lbl_fn_80192590_00000D48
    addi r3, r1, 0xa8
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0xa8
    addi r5, r1, 0x78
    bl fn_805F89F0
    addi r3, r1, 0x78
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_80192590_00000D48:
    lfs f0, lbl_80881FB0
    lfs f1, 0x534(r30)
    fcmpu cr0, f0, f1
    beq lbl_fn_80192590_00000DA8
    addi r3, r1, 0x108
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0x108
    addi r5, r1, 0xd8
    bl fn_805F89F0
    addi r3, r1, 0xd8
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_80192590_00000DA8:
    lfs f0, lbl_80881FB0
    addi r6, r1, 0x8
    stfs f0, 0x8(r1)
    mr r3, r31
    lfs f2, lbl_80881FB4
    mr r4, r29
    stfs f0, 0xc(r1)
    mr r5, r29
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x10(r1)
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0x8(r29)
    bl fn_805F93C0
    lwz r0, 0x184(r1)
    lwz r31, 0x17c(r1)
    lwz r30, 0x178(r1)
    lwz r29, 0x174(r1)
    mtlr r0
    addi r1, r1, 0x180
    blr
}

asm void fn_80192758(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    lwz r8, 0x4(r4)
    lis r4, lbl_8077DC80@ha
    stw r0, 0x74(r1)
    li r0, 0x0
    stw r31, 0x6c(r1)
    mr r31, r3
    stw r30, 0x68(r1)
    lwzu r6, lbl_8077DC80@l(r4)
    lwz r7, 0x564(r8)
    lwz r5, 0x4(r4)
    lwz r4, 0x8(r4)
    stw r8, 0x8(r1)
    stw r0, 0x0(r3)
    lbz r0, lbl_8087F0BB
    stw r7, 0xc(r1)
    extsb. r0, r0
    stw r6, 0x1c(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r6, 0x10(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r6, 0x50(r1)
    stw r5, 0x54(r1)
    stw r4, 0x58(r1)
    stw r8, 0x5c(r1)
    stw r7, 0x60(r1)
    bne lbl_fn_80192758_00000E98
    lis r6, lbl_807C7B78@ha
    lis r4, fn_801905AC@ha
    lis r3, fn_801905DC@ha
    li r0, 0x1
    addi r3, r3, fn_801905DC@l
    addi r5, r6, lbl_807C7B78@l
    addi r4, r4, fn_801905AC@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C7B78@l(r6)
    stb r0, lbl_8087F0BB
lbl_fn_80192758_00000E98:
    lwz r7, 0x50(r1)
    addi r3, r1, 0x3c
    lwz r6, 0x54(r1)
    lwz r5, 0x58(r1)
    lwz r4, 0x5c(r1)
    lwz r0, 0x60(r1)
    stw r7, 0x3c(r1)
    stw r6, 0x40(r1)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_80192758_00000F6C
    lwz r7, 0x3c(r1)
    li r3, 0x14
    lwz r6, 0x40(r1)
    lwz r5, 0x44(r1)
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r7, 0x28(r1)
    stw r6, 0x2c(r1)
    stw r5, 0x30(r1)
    stw r4, 0x34(r1)
    stw r0, 0x38(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_80192758_00000F30
    lis r3, __files@ha
    lis r4, lbl_8077DC10@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8077DC10@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80192758_00000F30:
    cmpwi r30, 0x0
    beq lbl_fn_80192758_00000F60
    lwz r0, 0x28(r1)
    stw r0, 0x0(r30)
    lwz r0, 0x2c(r1)
    stw r0, 0x4(r30)
    lwz r0, 0x30(r1)
    stw r0, 0x8(r30)
    lwz r0, 0x34(r1)
    stw r0, 0xc(r30)
    lwz r0, 0x38(r1)
    stw r0, 0x10(r30)
lbl_fn_80192758_00000F60:
    stw r30, 0x4(r31)
    li r0, 0x1
    b lbl_fn_80192758_00000F70
lbl_fn_80192758_00000F6C:
    li r0, 0x0
lbl_fn_80192758_00000F70:
    cmpwi r0, 0x0
    beq lbl_fn_80192758_00000F88
    lis r3, lbl_807C7B78@ha
    addi r3, r3, lbl_807C7B78@l
    stw r3, 0x0(r31)
    b lbl_fn_80192758_00000F90
lbl_fn_80192758_00000F88:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_80192758_00000F90:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_80192908(void)
{
    nofralloc
    lis r8, lbl_8077ED00@ha
    li r7, 0x0
    addi r8, r8, lbl_8077ED00@l
    li r6, 0x1e
    stw r4, 0x4(r3)
    li r0, 0x53
    stw r8, 0x0(r3)
    stw r5, 0x8(r3)
    stw r6, 0x10(r3)
    stb r7, 0xc(r3)
    stb r7, 0xd(r3)
    stb r7, 0xe(r3)
    stw r7, 0x58c(r4)
    lwz r4, 0x4(r3)
    stw r0, 0x560(r4)
    blr
}

asm void fn_80192948(void)
{
    nofralloc
    stwu r1, -0x280(r1)
    mflr r0
    stw r0, 0x284(r1)
    addi r11, r1, 0x260
    stfd f31, 0x270(r1)
    psq_st f31, 0x278(r1), 0, 0
    stfd f30, 0x260(r1)
    psq_st f30, 0x268(r1), 0, 0
    bl _savegpr_27
    lbz r0, 0xd(r3)
    mr r29, r3
    lwz r4, 0x4(r3)
    li r30, 0x0
    cmpwi r0, 0x0
    lwz r31, 0x8(r3)
    addi r27, r4, 0xb0
    beq lbl_fn_80192948_0000136C
    lfs f3, 0x234(r27)
    lfs f0, lbl_80881FC0
    fcmpo cr0, f3, f0
    bge lbl_fn_80192948_00001044
    lfs f0, lbl_80881FB8
    b lbl_fn_80192948_00001048
lbl_fn_80192948_00001044:
    lfs f0, lbl_80881FBC
lbl_fn_80192948_00001048:
    stfs f0, 0x238(r27)
    lbz r0, 0xe(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80192948_0000107C
    lfs f30, 0x234(r27)
    mr r3, r27
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f30, f1
    cror eq, gt, eq
    bne lbl_fn_80192948_0000136C
    li r30, 0x1
    b lbl_fn_80192948_0000136C
lbl_fn_80192948_0000107C:
    lwz r3, 0x4(r3)
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80192948_000010C4
    lwz r3, lbl_8087F490
    li r28, 0x1
    li r4, 0x22
    stw r28, 0x728(r3)
    lwz r3, lbl_8087F0A8
    addi r3, r3, 0x48c
    bl fn_8012476C
    cmpwi r3, 0x0
    beq lbl_fn_80192948_000010C4
    lwz r3, 0x10(r29)
    subic. r0, r3, 0x1
    stw r0, 0x10(r29)
    bgt lbl_fn_80192948_000010C4
    stb r28, 0xc(r29)
lbl_fn_80192948_000010C4:
    lbz r0, 0xc(r29)
    cmpwi r0, 0x0
    beq lbl_fn_80192948_000010F0
    lfs f3, 0x234(r27)
    lfs f0, lbl_80881FC4
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_80192948_000010F0
    li r0, 0x1
    stb r0, 0x17ec(r31)
    li r30, 0x1
lbl_fn_80192948_000010F0:
    lbz r0, 0xc(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80192948_0000136C
    lfs f3, 0x234(r27)
    lfs f0, lbl_80881FC8
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_80192948_0000136C
    li r0, 0x1
    stb r0, 0xe(r29)
    lwz r7, 0x4(r29)
    addi r5, r1, 0xf8
    lfs f3, lbl_80881FCC
    addi r3, r1, 0x218
    lwz r6, 0xf1c(r7)
    li r4, 0x79
    lfs f0, lbl_80881FBC
    lfs f4, 0x1c(r6)
    lfs f5, 0xc(r6)
    lfs f2, 0x2c(r6)
    stfs f5, 0xf8(r1)
    stfs f4, 0xfc(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x528(r7), 0, 0
    stfs f2, 0x530(r7)
    lwz r5, 0x8(r29)
    stfs f2, 0x100(r1)
    stfs f3, 0xd4(r1)
    stfs f3, 0xd8(r1)
    stfs f0, 0xdc(r1)
    lfs f1, 0x538(r5)
    bl fn_805F8E70
    addi r4, r1, 0xd4
    addi r3, r1, 0x218
    mr r5, r4
    bl fn_805F93C0
    lfs f3, 0xdc(r1)
    addi r3, r1, 0xe0
    lfs f0, 0xd8(r1)
    addi r28, r1, 0xec
    fneg f4, f3
    lfs f3, 0xd4(r1)
    fneg f5, f0
    lfs f0, lbl_80881FD0
    fneg f3, f3
    stfs f4, 0xe8(r1)
    frsp f2, f4
    stfs f3, 0xe0(r1)
    stfs f5, 0xe4(r1)
    fabs f3, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    frsp f3, f3
    stfs f2, 0xf4(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_80192948_000011F4
    lfs f3, 0xec(r1)
    lfs f0, lbl_80881FCC
    fcmpo cr0, f3, f0
    ble lbl_fn_80192948_000011E8
    lfs f0, lbl_80881FD4
    b lbl_fn_80192948_000011EC
lbl_fn_80192948_000011E8:
    lfs f0, lbl_80881FD8
lbl_fn_80192948_000011EC:
    stfs f0, 0x90(r1)
    b lbl_fn_80192948_00001208
lbl_fn_80192948_000011F4:
    frsp f2, f2
    lfs f1, 0xec(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x90(r1)
lbl_fn_80192948_00001208:
    lfs f0, 0x90(r1)
    addi r3, r1, 0x1a8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80881FCC
    addi r4, r1, 0x80
    lfs f30, 0x1b0(r1)
    mr r5, r4
    lfs f31, 0x1ac(r1)
    addi r3, r1, 0x1d8
    lfs f13, 0x1a8(r1)
    lfs f12, 0x1c0(r1)
    lfs f11, 0x1bc(r1)
    lfs f10, 0x1b8(r1)
    lfs f9, 0x1d0(r1)
    lfs f8, 0x1cc(r1)
    lfs f7, 0x1c8(r1)
    lfs f6, 0x1d4(r1)
    lfs f5, 0x1c4(r1)
    lfs f4, 0x1b4(r1)
    lfs f0, lbl_80881FBC
    psq_l f1, 0x0(r28), 0, 0
    lfs f2, 0xf4(r1)
    stfs f3, 0x208(r1)
    stfs f3, 0x20c(r1)
    stfs f3, 0x210(r1)
    stfs f0, 0x214(r1)
    stfs f13, 0x50(r1)
    stfs f31, 0x54(r1)
    stfs f30, 0x58(r1)
    stfs f13, 0x1d8(r1)
    stfs f31, 0x1dc(r1)
    stfs f30, 0x1e0(r1)
    stfs f10, 0x5c(r1)
    stfs f11, 0x60(r1)
    stfs f12, 0x64(r1)
    stfs f10, 0x1e8(r1)
    stfs f11, 0x1ec(r1)
    stfs f12, 0x1f0(r1)
    stfs f7, 0x68(r1)
    stfs f8, 0x6c(r1)
    stfs f9, 0x70(r1)
    stfs f7, 0x1f8(r1)
    stfs f8, 0x1fc(r1)
    stfs f9, 0x200(r1)
    stfs f4, 0x74(r1)
    stfs f5, 0x78(r1)
    stfs f6, 0x7c(r1)
    stfs f4, 0x1e4(r1)
    stfs f5, 0x1f4(r1)
    stfs f6, 0x204(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x88(r1)
    bl fn_805F9750
    lfs f2, 0x88(r1)
    lfs f0, lbl_80881FD0
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80192948_00001324
    lfs f3, 0x84(r1)
    lfs f0, lbl_80881FCC
    fcmpo cr0, f3, f0
    ble lbl_fn_80192948_00001314
    lfs f0, lbl_80881FD4
    b lbl_fn_80192948_00001318
lbl_fn_80192948_00001314:
    lfs f0, lbl_80881FD8
lbl_fn_80192948_00001318:
    fneg f0, f0
    stfs f0, 0x8c(r1)
    b lbl_fn_80192948_00001338
lbl_fn_80192948_00001324:
    lfs f1, 0x84(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x8c(r1)
lbl_fn_80192948_00001338:
    addi r3, r1, 0x8c
    lfs f2, lbl_80881FCC
    psq_l f1, 0x0(r3), 0, 0
    li r0, 0x0
    lwz r3, 0x4(r29)
    stfs f2, 0x94(r1)
    stfs f2, 0xf4(r1)
    frsp f2, f2
    psq_st f1, 0x534(r3), 0, 0
    stfs f2, 0x53c(r3)
    lwz r3, 0x4(r29)
    psq_st f1, 0x0(r28), 0, 0
    stw r0, 0xf1c(r3)
lbl_fn_80192948_0000136C:
    lwz r0, 0x58c(r31)
    cmpwi r0, 0xe
    beq lbl_fn_80192948_00001388
    cmpwi r0, 0xf
    beq lbl_fn_80192948_00001388
    cmpwi r0, 0x10
    bne lbl_fn_80192948_0000138C
lbl_fn_80192948_00001388:
    li r30, 0x1
lbl_fn_80192948_0000138C:
    lwz r5, 0x4(r29)
    lwz r4, 0xf1c(r5)
    cmpwi r4, 0x0
    beq lbl_fn_80192948_000013C4
    lfs f0, 0x1c(r4)
    addi r3, r1, 0xc8
    lfs f3, 0xc(r4)
    lfs f2, 0x2c(r4)
    stfs f3, 0xc8(r1)
    stfs f0, 0xcc(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x528(r5), 0, 0
    stfs f2, 0xd0(r1)
    stfs f2, 0x530(r5)
lbl_fn_80192948_000013C4:
    cmpwi r30, 0x0
    beq lbl_fn_80192948_00001628
    lwz r6, 0x4(r29)
    lwz r4, 0xf1c(r6)
    cmpwi r4, 0x0
    beq lbl_fn_80192948_00001628
    lfs f0, 0x1c(r4)
    addi r5, r1, 0xbc
    lfs f3, 0xc(r4)
    addi r3, r1, 0x178
    lfs f2, 0x2c(r4)
    li r4, 0x79
    stfs f3, 0xbc(r1)
    lfs f3, lbl_80881FCC
    stfs f0, 0xc0(r1)
    lfs f0, lbl_80881FBC
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x528(r6), 0, 0
    stfs f2, 0x530(r6)
    lwz r5, 0x8(r29)
    stfs f2, 0xc4(r1)
    stfs f3, 0x98(r1)
    stfs f3, 0x9c(r1)
    stfs f0, 0xa0(r1)
    lfs f1, 0x538(r5)
    bl fn_805F8E70
    addi r4, r1, 0x98
    addi r3, r1, 0x178
    mr r5, r4
    bl fn_805F93C0
    lfs f3, 0xa0(r1)
    addi r3, r1, 0xa4
    lfs f0, 0x9c(r1)
    addi r28, r1, 0xb0
    fneg f4, f3
    lfs f3, 0x98(r1)
    fneg f5, f0
    lfs f0, lbl_80881FD0
    fneg f3, f3
    stfs f4, 0xac(r1)
    frsp f2, f4
    stfs f3, 0xa4(r1)
    stfs f5, 0xa8(r1)
    fabs f3, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    frsp f3, f3
    stfs f2, 0xb8(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_80192948_000014B0
    lfs f3, 0xb0(r1)
    lfs f0, lbl_80881FCC
    fcmpo cr0, f3, f0
    ble lbl_fn_80192948_000014A4
    lfs f0, lbl_80881FD4
    b lbl_fn_80192948_000014A8
lbl_fn_80192948_000014A4:
    lfs f0, lbl_80881FD8
lbl_fn_80192948_000014A8:
    stfs f0, 0x48(r1)
    b lbl_fn_80192948_000014C4
lbl_fn_80192948_000014B0:
    frsp f2, f2
    lfs f1, 0xb0(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_80192948_000014C4:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x108
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80881FCC
    addi r4, r1, 0x38
    lfs f31, 0x110(r1)
    mr r5, r4
    lfs f30, 0x10c(r1)
    addi r3, r1, 0x138
    lfs f13, 0x108(r1)
    lfs f12, 0x120(r1)
    lfs f11, 0x11c(r1)
    lfs f10, 0x118(r1)
    lfs f9, 0x130(r1)
    lfs f8, 0x12c(r1)
    lfs f7, 0x128(r1)
    lfs f6, 0x134(r1)
    lfs f5, 0x124(r1)
    lfs f4, 0x114(r1)
    lfs f0, lbl_80881FBC
    psq_l f1, 0x0(r28), 0, 0
    lfs f2, 0xb8(r1)
    stfs f3, 0x168(r1)
    stfs f3, 0x16c(r1)
    stfs f3, 0x170(r1)
    stfs f0, 0x174(r1)
    stfs f13, 0x8(r1)
    stfs f30, 0xc(r1)
    stfs f31, 0x10(r1)
    stfs f13, 0x138(r1)
    stfs f30, 0x13c(r1)
    stfs f31, 0x140(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0x148(r1)
    stfs f11, 0x14c(r1)
    stfs f12, 0x150(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0x158(r1)
    stfs f8, 0x15c(r1)
    stfs f9, 0x160(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0x144(r1)
    stfs f5, 0x154(r1)
    stfs f6, 0x164(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80881FD0
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80192948_000015E0
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80881FCC
    fcmpo cr0, f3, f0
    ble lbl_fn_80192948_000015D0
    lfs f0, lbl_80881FD4
    b lbl_fn_80192948_000015D4
lbl_fn_80192948_000015D0:
    lfs f0, lbl_80881FD8
lbl_fn_80192948_000015D4:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_80192948_000015F4
lbl_fn_80192948_000015E0:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_80192948_000015F4:
    addi r3, r1, 0x44
    lfs f2, lbl_80881FCC
    psq_l f1, 0x0(r3), 0, 0
    li r0, 0x0
    lwz r3, 0x4(r29)
    stfs f2, 0x4c(r1)
    stfs f2, 0xb8(r1)
    frsp f2, f2
    psq_st f1, 0x534(r3), 0, 0
    stfs f2, 0x53c(r3)
    lwz r3, 0x4(r29)
    psq_st f1, 0x0(r28), 0, 0
    stw r0, 0xf1c(r3)
lbl_fn_80192948_00001628:
    psq_l f31, 0x278(r1), 0, 0
    mr r3, r30
    lfd f31, 0x270(r1)
    psq_l f30, 0x268(r1), 0, 0
    lfd f30, 0x260(r1)
    addi r11, r1, 0x260
    bl _restgpr_27
    lwz r0, 0x284(r1)
    mtlr r0
    addi r1, r1, 0x280
    blr
}

asm void fn_80192FB4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lfs f0, lbl_80881FBC
    li r5, 0x217
    stw r0, 0x14(r1)
    li r0, 0x1
    lfs f1, lbl_80881FCC
    li r6, 0x0
    stw r31, 0xc(r1)
    li r7, 0x0
    lfs f2, lbl_80881FDC
    li r8, 0x1
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r4, 0x4(r3)
    stb r0, 0xd(r3)
    addi r31, r4, 0xb0
    stw r0, 0x3fc(r4)
    mr r3, r31
    li r4, 0x0
    stfs f0, 0x24c(r31)
    bl fn_80097C08
    lfs f0, lbl_80881FBC
    lis r4, lbl_80739F34@ha
    stfs f0, 0x238(r31)
    addi r4, r4, lbl_80739F34@l
    lfs f0, lbl_80881FE0
    li r5, 0x0
    stfs f0, 0x234(r31)
    lwz r3, 0x8(r30)
    addi r31, r3, 0xb0
    mr r3, r31
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80192FB4_000016E8
    li r0, 0x0
    b lbl_fn_80192FB4_000016F4
lbl_fn_80192FB4_000016E8:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r31)
    add r0, r3, r0
lbl_fn_80192FB4_000016F4:
    lwz r3, 0x4(r30)
    stw r0, 0xf1c(r3)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80193074(void)
{
    nofralloc
    stwu r1, -0x210(r1)
    mflr r0
    stw r0, 0x214(r1)
    lbz r0, 0xc(r4)
    stw r31, 0x20c(r1)
    mr r31, r4
    cmpwi r0, 0x0
    stw r30, 0x208(r1)
    mr r30, r3
    stw r29, 0x204(r1)
    beq lbl_fn_80193074_00001AD0
    lwz r29, 0x8(r4)
    addi r3, r1, 0xf8
    lwz r5, 0x4(r4)
    mr r4, r3
    lfs f5, 0x530(r29)
    lfs f0, 0x530(r5)
    lfs f4, 0x528(r29)
    lfs f3, 0x528(r5)
    fsubs f5, f5, f0
    lfs f0, lbl_80881FCC
    fsubs f3, f4, f3
    stfs f5, 0x100(r1)
    stfs f3, 0xf8(r1)
    stfs f0, 0xfc(r1)
    bl fn_805F98D0
    lwz r0, 0x17f0(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80193074_000017C8
    lfs f3, lbl_80881FCC
    addi r3, r1, 0xf8
    lfs f0, lbl_80881FE4
    addi r4, r1, 0xe0
    stfs f3, 0xe0(r1)
    addi r5, r1, 0xec
    stfs f0, 0xe4(r1)
    stfs f3, 0xe8(r1)
    bl fn_805F99B0
    addi r4, r1, 0xec
    lfs f2, 0xf4(r1)
    addi r3, r1, 0xf8
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x100(r1)
    b lbl_fn_80193074_00001804
lbl_fn_80193074_000017C8:
    lfs f3, lbl_80881FCC
    addi r3, r1, 0xf8
    lfs f0, lbl_80881FBC
    addi r4, r1, 0xc8
    stfs f3, 0xc8(r1)
    addi r5, r1, 0xd4
    stfs f0, 0xcc(r1)
    stfs f3, 0xd0(r1)
    bl fn_805F99B0
    addi r4, r1, 0xd4
    lfs f2, 0xdc(r1)
    addi r3, r1, 0xf8
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x100(r1)
lbl_fn_80193074_00001804:
    lfs f2, 0x100(r1)
    lis r3, lbl_8077DCF0@ha
    lwzu r7, lbl_8077DCF0@l(r3)
    addi r8, r1, 0xf8
    stfs f2, 0xb8(r1)
    li r0, 0x0
    lwz r6, 0x4(r3)
    addi r4, r1, 0xb0
    lwz r5, 0x8(r3)
    addi r11, r1, 0x88
    psq_l f1, 0x0(r8), 0, 0
    addi r9, r1, 0x94
    stfs f2, 0x90(r1)
    frsp f2, f2
    lwz r8, 0x4(r31)
    addi r10, r1, 0x7c
    stw r0, 0x0(r30)
    addi r3, r1, 0x1f4
    addi r31, r1, 0x114
    lbz r0, lbl_8087F0B1
    addi r12, r1, 0x1d8
    stfs f2, 0x9c(r1)
    extsb. r0, r0
    stfs f2, 0x84(r1)
    frsp f2, f2
    stfs f2, 0x1fc(r1)
    stfs f2, 0x11c(r1)
    frsp f2, f2
    psq_st f1, 0x0(r4), 0, 0
    stw r7, 0xbc(r1)
    stw r6, 0xc0(r1)
    stw r5, 0xc4(r1)
    psq_st f1, 0x0(r11), 0, 0
    psq_st f1, 0x0(r9), 0, 0
    stw r8, 0x78(r1)
    psq_st f1, 0x0(r10), 0, 0
    stw r7, 0x8(r1)
    stw r6, 0xc(r1)
    stw r5, 0x10(r1)
    stw r7, 0x68(r1)
    stw r6, 0x6c(r1)
    stw r5, 0x70(r1)
    stw r7, 0x5c(r1)
    stw r6, 0x60(r1)
    stw r5, 0x64(r1)
    stw r7, 0x50(r1)
    stw r6, 0x54(r1)
    stw r5, 0x58(r1)
    stw r7, 0x1e4(r1)
    stw r6, 0x1e8(r1)
    stw r5, 0x1ec(r1)
    stw r8, 0x1f0(r1)
    psq_st f1, 0x0(r3), 0, 0
    stw r7, 0x104(r1)
    stw r6, 0x108(r1)
    stw r5, 0x10c(r1)
    stw r8, 0x110(r1)
    psq_st f1, 0x0(r31), 0, 0
    stw r7, 0x1c8(r1)
    stw r6, 0x1cc(r1)
    stw r5, 0x1d0(r1)
    stw r8, 0x1d4(r1)
    psq_st f1, 0x0(r12), 0, 0
    stfs f2, 0x1e0(r1)
    bne lbl_fn_80193074_0000198C
    frsp f2, f2
    lis r11, lbl_807C7B50@ha
    addi r12, r1, 0x130
    addi r9, r1, 0x184
    addi r10, r1, 0x168
    lis r4, fn_80188A70@ha
    lis r3, fn_80188AA0@ha
    stfs f2, 0x138(r1)
    li r0, 0x1
    addi r11, r11, lbl_807C7B50@l
    stfs f2, 0x18c(r1)
    frsp f2, f2
    addi r4, r4, fn_80188A70@l
    addi r3, r3, fn_80188AA0@l
    stw r7, 0x120(r1)
    stw r6, 0x124(r1)
    stw r5, 0x128(r1)
    stw r8, 0x12c(r1)
    psq_st f1, 0x0(r12), 0, 0
    stw r7, 0x174(r1)
    stw r6, 0x178(r1)
    stw r5, 0x17c(r1)
    stw r8, 0x180(r1)
    psq_st f1, 0x0(r9), 0, 0
    stw r7, 0x158(r1)
    stw r6, 0x15c(r1)
    stw r5, 0x160(r1)
    stw r8, 0x164(r1)
    psq_st f1, 0x0(r10), 0, 0
    stfs f2, 0x170(r1)
    stw r4, 0x4(r11)
    stw r3, 0x0(r11)
    stb r0, lbl_8087F0B1
lbl_fn_80193074_0000198C:
    addi r3, r1, 0x1d8
    lwz r6, 0x1c8(r1)
    lwz r5, 0x1cc(r1)
    addi r8, r1, 0x14c
    lwz r4, 0x1d0(r1)
    addi r7, r1, 0x1bc
    lwz r0, 0x1d4(r1)
    addi r31, r1, 0x1ac
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r31
    lfs f2, 0x1e0(r1)
    stw r6, 0x13c(r1)
    stw r5, 0x140(r1)
    stw r4, 0x144(r1)
    stw r0, 0x148(r1)
    psq_st f1, 0x0(r8), 0, 0
    stfs f2, 0x154(r1)
    stw r6, 0x1ac(r1)
    stw r5, 0x1b0(r1)
    stw r4, 0x1b4(r1)
    stw r0, 0x1b8(r1)
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0x1c4(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_80193074_00001AA8
    lwz r6, 0x1ac(r1)
    addi r7, r1, 0x1a0
    lwz r5, 0x1b0(r1)
    li r3, 0x1c
    lwz r4, 0x1b4(r1)
    lwz r0, 0x1b8(r1)
    psq_l f1, 0x10(r31), 0, 0
    lfs f2, 0x1c4(r1)
    stw r6, 0x190(r1)
    stw r5, 0x194(r1)
    stw r4, 0x198(r1)
    stw r0, 0x19c(r1)
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0x1a8(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_80193074_00001A60
    lis r3, __files@ha
    lis r4, lbl_8077CF44@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8077CF44@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80193074_00001A60:
    cmpwi r31, 0x0
    beq lbl_fn_80193074_00001A9C
    lwz r0, 0x190(r1)
    addi r3, r1, 0x1a0
    stw r0, 0x0(r31)
    lwz r0, 0x194(r1)
    stw r0, 0x4(r31)
    lwz r0, 0x198(r1)
    stw r0, 0x8(r31)
    lwz r0, 0x19c(r1)
    stw r0, 0xc(r31)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x10(r31), 0, 0
    lfs f2, 0x1a8(r1)
    stfs f2, 0x18(r31)
lbl_fn_80193074_00001A9C:
    stw r31, 0x4(r30)
    li r0, 0x1
    b lbl_fn_80193074_00001AAC
lbl_fn_80193074_00001AA8:
    li r0, 0x0
lbl_fn_80193074_00001AAC:
    cmpwi r0, 0x0
    beq lbl_fn_80193074_00001AC4
    lis r3, lbl_807C7B50@ha
    addi r3, r3, lbl_807C7B50@l
    stw r3, 0x0(r30)
    b lbl_fn_80193074_00001BE0
lbl_fn_80193074_00001AC4:
    li r0, 0x0
    stw r0, 0x0(r30)
    b lbl_fn_80193074_00001BE0
lbl_fn_80193074_00001AD0:
    lis r7, lbl_8077DCFC@ha
    lwzu r6, lbl_8077DCFC@l(r7)
    lwz r8, 0x4(r4)
    li r0, 0x0
    lwz r5, 0x4(r7)
    lwz r4, 0x8(r7)
    stw r6, 0x44(r1)
    stw r0, 0x0(r3)
    lbz r0, lbl_8087F0BE
    stw r5, 0x48(r1)
    extsb. r0, r0
    stw r4, 0x4c(r1)
    stw r6, 0x38(r1)
    stw r5, 0x3c(r1)
    stw r4, 0x40(r1)
    stw r6, 0xa0(r1)
    stw r5, 0xa4(r1)
    stw r4, 0xa8(r1)
    stw r8, 0xac(r1)
    bne lbl_fn_80193074_00001B48
    lis r6, lbl_807C7B90@ha
    lis r4, fn_80191960@ha
    lis r3, fn_8019198C@ha
    li r0, 0x1
    addi r3, r3, fn_8019198C@l
    addi r5, r6, lbl_807C7B90@l
    addi r4, r4, fn_80191960@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C7B90@l(r6)
    stb r0, lbl_8087F0BE
lbl_fn_80193074_00001B48:
    lwz r6, 0xa0(r1)
    addi r3, r1, 0x28
    lwz r5, 0xa4(r1)
    lwz r4, 0xa8(r1)
    lwz r0, 0xac(r1)
    stw r6, 0x28(r1)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_80193074_00001BBC
    lwz r5, 0x28(r1)
    addic. r6, r30, 0x4
    lwz r4, 0x2c(r1)
    lwz r3, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r5, 0x18(r1)
    stw r4, 0x1c(r1)
    stw r3, 0x20(r1)
    stw r0, 0x24(r1)
    beq lbl_fn_80193074_00001BB4
    stw r5, 0x0(r6)
    stw r4, 0x4(r6)
    stw r3, 0x8(r6)
    stw r0, 0xc(r6)
lbl_fn_80193074_00001BB4:
    li r0, 0x1
    b lbl_fn_80193074_00001BC0
lbl_fn_80193074_00001BBC:
    li r0, 0x0
lbl_fn_80193074_00001BC0:
    cmpwi r0, 0x0
    beq lbl_fn_80193074_00001BD8
    lis r3, lbl_807C7B90@ha
    addi r3, r3, lbl_807C7B90@l
    stw r3, 0x0(r30)
    b lbl_fn_80193074_00001BE0
lbl_fn_80193074_00001BD8:
    li r0, 0x0
    stw r0, 0x0(r30)
lbl_fn_80193074_00001BE0:
    lwz r0, 0x214(r1)
    lwz r31, 0x20c(r1)
    lwz r30, 0x208(r1)
    lwz r29, 0x204(r1)
    mtlr r0
    addi r1, r1, 0x210
    blr
}
