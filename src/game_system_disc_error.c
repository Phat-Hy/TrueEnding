#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_8000D760(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_8004ED34(void);
extern void fn_8005B3CC(void);
extern void fn_8005B5F8(void);
extern void fn_8005B6E8(void);
extern void fn_8006AF38(void);
extern void fn_800844D8(void);
extern void fn_800897D8(void);
extern void fn_80092814(void);
extern void fn_8009373C(void);
extern void fn_80097A88(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800E2DD4(void);
extern void fn_800E2FE0(void);
extern void fn_800F8548(void);
extern void fn_800F8574(void);
extern void fn_800FAB80(void);
extern void fn_8010A308(void);
extern void fn_80145334(void);
extern void fn_8014C540(void);
extern void fn_8015495C(void);
extern void fn_8015ECC4(void);
extern void fn_80161570(void);
extern void fn_8016E4C4(void);
extern void fn_8016EB48(void);
extern void fn_80179D44(void);
extern void fn_80219E6C(void);
extern void fn_80232B7C(void);
extern void fn_802375C4(void);
extern void fn_8023781C(void);
extern void fn_80239DAC(void);
extern void fn_8023A8B4(void);
extern void fn_8035B694(void);
extern void fn_8035B78C(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473E74(void);
extern void fn_80473E8C(void);
extern void fn_80473F50(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_80680770(void);
extern void fn_80682428(void);
extern void fn_806827C4(void);
extern void fn_80684600(void);
extern void fn_80686EA4(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);
extern void fn_8068B100(void);
extern void fn_806959D8(void);
extern void fn_80695B00(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_8074AA58[];
extern u8 lbl_8074AF38[];
extern u8 lbl_8074AF40[];
extern u8 lbl_8074AF58[];
extern u8 lbl_807772B0[];
extern u8 lbl_807772D0[];
extern u8 lbl_80789540[];
extern u8 lbl_80789680[];
extern u8 lbl_807896B8[];
extern u8 lbl_8078FBB0[];

/* Small data declarations */
extern u32 lbl_8087D708;
extern u32 lbl_8087EE98;
extern u32 lbl_8087EF10;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_80885378;
extern u32 lbl_8088537C;
extern u32 lbl_80885394;
extern u32 lbl_80885398;
extern u32 lbl_808853A8;
extern u32 lbl_808853B4;
extern u32 lbl_808853C4;
extern u32 lbl_808853CC;
extern u32 lbl_808853DC;
extern u32 lbl_80885418;
extern u32 lbl_80885448;
extern u32 lbl_8088544C;
extern u32 lbl_80885458;
extern u32 lbl_808854C4;
extern u32 lbl_808854C8;
extern u32 lbl_808854CC;
extern u32 lbl_808854D0;
extern u32 lbl_808854D8;
extern u32 lbl_808854DC;
extern u32 lbl_808854E0;
extern u32 lbl_808854E4;
extern u32 lbl_808854E8;
extern u32 lbl_808854EC;
extern u32 lbl_808854F0;
extern u32 lbl_808854F4;
extern u32 lbl_808854F8;
extern u32 lbl_808854FC;
extern u32 lbl_80885500;
extern u32 lbl_80885504;
extern u32 lbl_80885508;
extern u32 lbl_8088550C;
extern u32 lbl_80885510;
extern u32 lbl_80885514;
extern u32 lbl_80885518;
extern u32 lbl_8088551C;
extern u32 lbl_80885520;
extern u32 lbl_80885524;

/* Function declarations */
void fn_80353C9C(void);
void fn_80353CCC(void);
void fn_80353DE8(void);
void fn_80353EE4(void);
void fn_80353F0C(void);
void fn_80353F50(void);
void fn_803540BC(void);
void fn_80354110(void);
void fn_80354194(void);
void fn_80354270(void);
void fn_80354378(void);
void fn_80354388(void);
void fn_80354390(void);
void fn_80354398(void);
void fn_803545E0(void);
void fn_80354874(void);
void fn_80354910(void);
void fn_80354AA4(void);
void fn_80354DA4(void);
void fn_80354EE4(void);
void fn_80355390(void);

asm void fn_80353C9C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r12, 0x0(r3)
    lwz r3, 0xc(r12)
    lwz r4, 0x10(r12)
    bl fn_80695B00
    nop
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80353CCC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r5, 0x3
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    mr r29, r4
    bne lbl_fn_80353CCC_00000068
    lis r3, lbl_80789540@ha
    addi r3, r3, lbl_80789540@l
    stw r3, 0x0(r4)
    b lbl_fn_80353CCC_00000130
lbl_fn_80353CCC_00000068:
    cmpwi r5, 0x0
    bne lbl_fn_80353CCC_000000E0
    lwz r31, 0x0(r3)
    li r3, 0x14
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_80353CCC_000000A8
    lis r3, __files@ha
    lis r4, lbl_80789680@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80789680@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80353CCC_000000A8:
    cmpwi r30, 0x0
    beq lbl_fn_80353CCC_000000D8
    lwz r0, 0x4(r31)
    lwz r3, 0x0(r31)
    stw r3, 0x0(r30)
    stw r0, 0x4(r30)
    lwz r0, 0x8(r31)
    stw r0, 0x8(r30)
    lwz r0, 0xc(r31)
    stw r0, 0xc(r30)
    lwz r0, 0x10(r31)
    stw r0, 0x10(r30)
lbl_fn_80353CCC_000000D8:
    stw r30, 0x0(r29)
    b lbl_fn_80353CCC_00000130
lbl_fn_80353CCC_000000E0:
    cmpwi r5, 0x1
    bne lbl_fn_80353CCC_000000FC
    lwz r3, 0x0(r4)
    bl dtor_80084684
    li r0, 0x0
    stw r0, 0x0(r29)
    b lbl_fn_80353CCC_00000130
lbl_fn_80353CCC_000000FC:
    lwz r5, 0x0(r4)
    lis r3, lbl_80789540@ha
    lwz r4, lbl_80789540@l(r3)
    lwz r3, 0x0(r5)
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_80353CCC_00000128
    lwz r0, 0x0(r30)
    stw r0, 0x0(r29)
    b lbl_fn_80353CCC_00000130
lbl_fn_80353CCC_00000128:
    li r0, 0x0
    stw r0, 0x0(r29)
lbl_fn_80353CCC_00000130:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80353DE8(void)
{
    nofralloc
    lwz r0, 0x14b0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80353DE8_00000240
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x6
    beq lbl_fn_80353DE8_00000180
    cmpwi r0, 0x7
    beq lbl_fn_80353DE8_000001B0
    cmpwi r0, 0x9
    beq lbl_fn_80353DE8_000001E0
    cmpwi r0, 0xb
    beq lbl_fn_80353DE8_00000210
    b lbl_fn_80353DE8_00000240
lbl_fn_80353DE8_00000180:
    lfs f1, 0x2e4(r3)
    li r3, 0x0
    lfs f0, lbl_808854C4
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bnelr
    lfs f0, lbl_8088544C
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bnelr
    li r3, 0x1
    blr
lbl_fn_80353DE8_000001B0:
    lfs f1, 0x2e4(r3)
    li r3, 0x0
    lfs f0, lbl_808854C8
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bnelr
    lfs f0, lbl_808853B4
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bnelr
    li r3, 0x1
    blr
lbl_fn_80353DE8_000001E0:
    lfs f1, 0x2e4(r3)
    li r3, 0x0
    lfs f0, lbl_80885448
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bnelr
    lfs f0, lbl_808854CC
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bnelr
    li r3, 0x1
    blr
lbl_fn_80353DE8_00000210:
    lfs f1, 0x2e4(r3)
    li r3, 0x0
    lfs f0, lbl_80885418
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bnelr
    lfs f0, lbl_80885458
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bnelr
    li r3, 0x1
    blr
lbl_fn_80353DE8_00000240:
    li r3, 0x0
    blr
}

asm void fn_80353EE4(void)
{
    nofralloc
    lbz r0, 0x180b(r3)
    cmpwi r0, 0x0
    beqlr
    lwz r4, lbl_8087F430
    li r0, 0x0
    stw r0, 0x8a0(r4)
    stw r0, 0x4d8(r4)
    stb r0, 0x97c(r4)
    stb r0, 0x180b(r3)
    blr
}

asm void fn_80353F0C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x17e4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80353F0C_000002A0
    mr r3, r0
    bl fn_8015ECC4
    li r0, 0x0
    stw r0, 0x17e4(r31)
lbl_fn_80353F0C_000002A0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80353F50(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stw r31, 0x6c(r1)
    stw r30, 0x68(r1)
    stw r29, 0x64(r1)
    mr r29, r3
    lwz r0, 0x54c(r3)
    rlwinm r0, r0, 0, 28, 28
    cmplwi r0, 0x8
    beq lbl_fn_80353F50_00000404
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 13
    bne lbl_fn_80353F50_00000404
    lis r30, lbl_8074AA58@ha
    li r5, 0x0
    addi r30, r30, lbl_8074AA58@l
    addi r3, r3, 0xb0
    addi r4, r30, 0x466
    bl fn_8009373C
    addi r3, r29, 0xb0
    addi r4, r30, 0x473
    li r5, 0x0
    bl fn_8009373C
    lwz r3, lbl_8087F3C0
    li r0, 0x2
    li r4, 0x0
    stw r0, 0xb8(r3)
    lwz r3, 0x121c(r29)
    bl fn_80232B7C
    lwz r4, 0x121c(r29)
    li r30, -0x1
    lfs f0, lbl_80885378
    li r31, 0x1
    lfs f1, lbl_80885398
    addi r5, r29, 0xb0
    stfs f0, 0x44(r1)
    addi r7, r1, 0x38
    addi r8, r1, 0x44
    addi r9, r1, 0x50
    stfs f0, 0x48(r1)
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x4c(r1)
    stfs f0, 0x38(r1)
    stfs f0, 0x3c(r1)
    stfs f0, 0x40(r1)
    stfs f1, 0x50(r1)
    stfs f1, 0x54(r1)
    stfs f1, 0x58(r1)
    stfs f1, 0x5c(r1)
    stw r30, 0x8(r1)
    stw r31, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lfs f0, lbl_80885378
    addi r4, r29, 0x1618
    lfs f1, lbl_80885398
    addi r5, r29, 0xb0
    stfs f0, 0x1c(r1)
    addi r7, r1, 0x10
    addi r8, r1, 0x1c
    addi r9, r1, 0x28
    stfs f0, 0x20(r1)
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x24(r1)
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f1, 0x28(r1)
    stfs f1, 0x2c(r1)
    stfs f1, 0x30(r1)
    stfs f1, 0x34(r1)
    stw r30, 0x8(r1)
    stw r31, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r3, lbl_8087F3C0
    li r0, 0x0
    stw r0, 0xb8(r3)
    lwz r0, 0x12a4(r29)
    oris r0, r0, 0x4
    stw r0, 0x12a4(r29)
lbl_fn_80353F50_00000404:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    lwz r29, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_803540BC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 13
    beq lbl_fn_803540BC_00000460
    mr r6, r4
    lwz r3, lbl_8087F3C0
    lwz r4, 0x121c(r31)
    li r5, 0x0
    bl fn_80239DAC
    lwz r0, 0x12a4(r31)
    rlwinm r0, r0, 0, 14, 12
    stw r0, 0x12a4(r31)
lbl_fn_803540BC_00000460:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80354110(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x1
    stw r30, 0x8(r1)
    mr r30, r3
    stb r31, 0x1809(r3)
    bl fn_8016E4C4
    lwz r0, 0x54c(r30)
    addi r3, r30, 0xb0
    lfs f0, lbl_80885398
    li r4, 0x0
    ori r0, r0, 0x2000
    stw r0, 0x54c(r30)
    lfs f1, lbl_80885378
    li r5, 0x1e1
    stw r31, 0x3fc(r30)
    li r6, 0x0
    lfs f2, lbl_808853C4
    li r7, 0x1
    stfs f0, 0x2fc(r30)
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80885394
    stfs f0, 0x2e8(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80354194(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    lfs f5, lbl_80885378
    stw r0, 0x74(r1)
    lfs f0, lbl_808854D0
    stw r31, 0x6c(r1)
    mr r31, r3
    lfs f3, 0x5b4(r4)
    lfs f4, 0x530(r4)
    fmuls f6, f0, f3
    lfs f3, 0x52c(r4)
    lfs f0, 0x528(r4)
    fadds f4, f4, f5
    stfs f5, 0x20(r1)
    li r4, 0x79
    fadds f3, f3, f6
    stfs f6, 0x24(r1)
    fadds f0, f0, f5
    stfs f5, 0x28(r1)
    stfs f0, 0x0(r3)
    stfs f3, 0x4(r3)
    stfs f4, 0x8(r3)
    addi r3, r1, 0x30
    bl fn_805F8E70
    lfs f3, lbl_80885458
    addi r4, r1, 0x14
    lfs f0, lbl_8088537C
    addi r6, r1, 0x8
    stfs f3, 0x8(r1)
    mr r5, r4
    lfs f2, lbl_80885378
    addi r3, r1, 0x30
    stfs f0, 0xc(r1)
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x10(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x1c(r1)
    bl fn_805F93C0
    lfs f3, 0x0(r31)
    lfs f0, 0x14(r1)
    lfs f4, 0x4(r31)
    fadds f0, f3, f0
    lfs f3, 0x8(r31)
    stfs f0, 0x0(r31)
    lfs f0, 0x18(r1)
    fadds f0, f4, f0
    stfs f0, 0x4(r31)
    lfs f0, 0x1c(r1)
    fadds f0, f3, f0
    stfs f0, 0x8(r31)
    lwz r31, 0x6c(r1)
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_80354270(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    lis r5, lbl_8074AA58@ha
    stw r0, 0x64(r1)
    addi r5, r5, lbl_8074AA58@l
    stw r31, 0x5c(r1)
    mr r31, r4
    addi r4, r5, 0x3aa
    li r5, 0x0
    stw r30, 0x58(r1)
    mr r30, r3
    addi r3, r31, 0xb0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80354270_00000618
    li r5, 0x0
    b lbl_fn_80354270_00000624
lbl_fn_80354270_00000618:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r5, r3, r0
lbl_fn_80354270_00000624:
    lfs f1, 0x1c(r5)
    addi r3, r1, 0x20
    lfs f0, lbl_808853CC
    li r4, 0x79
    lfs f3, 0x2c(r5)
    lfs f4, 0xc(r5)
    fadds f2, f1, f0
    stfs f4, 0x0(r30)
    lfs f1, lbl_80885378
    stfs f3, 0x8(r30)
    lfs f0, lbl_80885398
    stfs f2, 0x4(r30)
    stfs f1, 0x8(r1)
    stfs f1, 0xc(r1)
    stfs f0, 0x10(r1)
    lfs f1, 0x538(r31)
    bl fn_805F8E70
    addi r4, r1, 0x8
    addi r3, r1, 0x20
    mr r5, r4
    bl fn_805F93C0
    lfs f3, 0x10(r1)
    lfs f2, lbl_808853CC
    lfs f1, 0xc(r1)
    lfs f0, 0x8(r1)
    fmuls f3, f3, f2
    fmuls f4, f1, f2
    lfs f1, 0x4(r30)
    fmuls f5, f0, f2
    lfs f2, 0x0(r30)
    lfs f0, 0x8(r30)
    fadds f1, f1, f4
    fadds f2, f2, f5
    stfs f5, 0x14(r1)
    fadds f0, f0, f3
    stfs f2, 0x0(r30)
    stfs f1, 0x4(r30)
    stfs f0, 0x8(r30)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r0, 0x64(r1)
    stfs f4, 0x18(r1)
    stfs f3, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80354378(void)
{
    nofralloc
    lfs f1, lbl_808853DC
    lfs f0, 0x538(r3)
    fadds f1, f1, f0
    blr
}

asm void fn_80354388(void)
{
    nofralloc
    lfs f1, lbl_808853A8
    blr
}

asm void fn_80354390(void)
{
    nofralloc
    lfs f1, lbl_80885398
    blr
}

asm void fn_80354398(void)
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
    beq lbl_fn_80354398_00000924
    addic. r0, r3, 0x1cc0
    beq lbl_fn_80354398_00000748
    lwz r4, 0x1cc0(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80354398_00000748
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_80354398_00000748
    bl fn_800897D8
lbl_fn_80354398_00000748:
    addic. r31, r29, 0x1cac
    beq lbl_fn_80354398_00000768
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_80354398_00000768
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80354398_00000768:
    addic. r3, r29, 0x180c
    beq lbl_fn_80354398_00000778
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80354398_00000778:
    addi r3, r29, 0x17d8
    li r4, -0x1
    bl fn_802375C4
    addic. r3, r29, 0x170c
    beq lbl_fn_80354398_00000794
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80354398_00000794:
    addic. r3, r29, 0x1704
    beq lbl_fn_80354398_000007A4
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80354398_000007A4:
    addic. r31, r29, 0x16cc
    beq lbl_fn_80354398_000007C4
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_80354398_000007C4
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80354398_000007C4:
    addic. r31, r29, 0x16c0
    beq lbl_fn_80354398_000007E4
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_80354398_000007E4
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80354398_000007E4:
    addic. r31, r29, 0x16b4
    beq lbl_fn_80354398_00000804
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_80354398_00000804
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80354398_00000804:
    addic. r31, r29, 0x16a8
    beq lbl_fn_80354398_00000824
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_80354398_00000824
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80354398_00000824:
    addic. r31, r29, 0x169c
    beq lbl_fn_80354398_00000844
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_80354398_00000844
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80354398_00000844:
    addic. r31, r29, 0x1690
    beq lbl_fn_80354398_00000864
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_80354398_00000864
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80354398_00000864:
    addi r3, r29, 0x1648
    li r4, -0x1
    bl fn_802375C4
    addic. r31, r29, 0x163c
    beq lbl_fn_80354398_00000890
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_80354398_00000890
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80354398_00000890:
    addic. r31, r29, 0x1630
    beq lbl_fn_80354398_000008B0
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_80354398_000008B0
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80354398_000008B0:
    addic. r31, r29, 0x1624
    beq lbl_fn_80354398_000008D0
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_80354398_000008D0
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80354398_000008D0:
    addic. r31, r29, 0x1618
    beq lbl_fn_80354398_000008F0
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_80354398_000008F0
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_80354398_000008F0:
    lis r4, fn_8000D760@ha
    addi r3, r29, 0x1560
    addi r4, r4, fn_8000D760@l
    li r5, 0xc
    li r6, 0x9
    bl fn_806959D8
    mr r3, r29
    li r4, 0x0
    bl fn_8035B78C
    cmpwi r30, 0x0
    ble lbl_fn_80354398_00000924
    mr r3, r29
    bl dtor_80084684
lbl_fn_80354398_00000924:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803545E0(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_27
    mr r27, r5
    lwz r5, 0x20(r5)
    mr r31, r3
    bl fn_8035B694
    lis r3, lbl_807896B8@ha
    addi r30, r31, 0x14b0
    addi r3, r3, lbl_807896B8@l
    stw r3, 0x0(r31)
    mr r3, r30
    bl fn_80473E74
    lfs f0, lbl_808854D8
    lis r5, lbl_8078FBB0@ha
    addi r5, r5, lbl_8078FBB0@l
    li r3, 0x78
    li r4, 0x0
    li r0, 0x2
    stw r5, 0x0(r30)
    lis r29, lbl_8074AF58@ha
    addi r29, r29, lbl_8074AF58@l
    addi r30, r1, 0x2c
    stw r3, 0x14bc(r31)
    mr r3, r29
    stw r0, 0x14c8(r31)
    stfs f0, 0x14d8(r31)
    stfs f0, 0x14dc(r31)
    stfs f0, 0x14e0(r31)
    stw r4, 0x14b8(r31)
    stw r4, 0x14c0(r31)
    stw r4, 0x14c4(r31)
    stw r4, 0x14cc(r31)
    stw r4, 0x14d0(r31)
    stw r4, 0x14d4(r31)
    stw r4, 0x14f0(r31)
    stw r4, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r4, 0x34(r1)
    bl strlen
    mr r28, r3
    mr r3, r30
    mr r4, r28
    bl fn_80013DC4
    lbz r0, 0x1c(r1)
    mr r3, r30
    stb r0, 0x18(r1)
    mr r6, r29
    add r7, r29, r28
    addi r8, r1, 0x18
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    addi r3, r27, 0x2c
    addi r4, r29, 0x2d
    bl fn_806827C4
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_803545E0_00000B38
    lwz r0, 0x2c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_803545E0_00000A50
    lbz r0, 0x2c(r1)
    clrlwi r28, r0, 25
    b lbl_fn_803545E0_00000A54
lbl_fn_803545E0_00000A50:
    lwz r28, 0x30(r1)
lbl_fn_803545E0_00000A54:
    lbz r0, 0x14(r1)
    addi r3, r3, 0x8
    stb r0, 0x10(r1)
    bl strlen
    add r4, r30, r3
    mr r5, r28
    addi r7, r4, 0x8
    addi r3, r1, 0x2c
    addi r6, r30, 0x8
    addi r8, r1, 0x10
    li r4, 0x0
    bl fn_80013F78
    lis r4, lbl_8074AF58@ha
    addi r3, r1, 0x20
    addi r4, r4, lbl_8074AF58@l
    addi r5, r1, 0x2c
    addi r4, r4, 0x36
    bl fn_8006AF38
    lwz r0, 0x2c(r1)
    srwi. r3, r0, 31
    bne lbl_fn_803545E0_00000ACC
    lwz r4, 0x20(r1)
    srwi. r0, r4, 31
    bne lbl_fn_803545E0_00000ACC
    lwz r3, 0x24(r1)
    lwz r0, 0x28(r1)
    stw r4, 0x2c(r1)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_803545E0_00000B24
lbl_fn_803545E0_00000ACC:
    cmpwi r3, 0x0
    beq lbl_fn_803545E0_00000ADC
    lwz r5, 0x30(r1)
    b lbl_fn_803545E0_00000AE4
lbl_fn_803545E0_00000ADC:
    lbz r0, 0x2c(r1)
    clrlwi r5, r0, 25
lbl_fn_803545E0_00000AE4:
    lwz r0, 0x20(r1)
    srwi. r0, r0, 31
    bne lbl_fn_803545E0_00000B00
    lbz r0, 0x20(r1)
    addi r6, r1, 0x21
    clrlwi r4, r0, 25
    b lbl_fn_803545E0_00000B08
lbl_fn_803545E0_00000B00:
    lwz r6, 0x28(r1)
    lwz r4, 0x24(r1)
lbl_fn_803545E0_00000B08:
    lbz r0, 0xc(r1)
    add r7, r6, r4
    stb r0, 0x8(r1)
    addi r3, r1, 0x2c
    addi r8, r1, 0x8
    li r4, 0x0
    bl fn_80013F78
lbl_fn_803545E0_00000B24:
    lwz r0, 0x20(r1)
    srwi. r0, r0, 31
    beq lbl_fn_803545E0_00000B38
    lwz r3, 0x28(r1)
    bl dtor_80084684
lbl_fn_803545E0_00000B38:
    lwz r0, 0x2c(r1)
    addi r3, r31, 0x14b0
    srwi. r0, r0, 31
    bne lbl_fn_803545E0_00000B50
    addi r4, r1, 0x2d
    b lbl_fn_803545E0_00000B54
lbl_fn_803545E0_00000B50:
    lwz r4, 0x34(r1)
lbl_fn_803545E0_00000B54:
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lis r30, lbl_8074AF58@ha
    addi r3, r31, 0xb0
    addi r30, r30, lbl_8074AF58@l
    li r4, 0x13f
    addi r5, r30, 0x4f
    bl fn_80097A88
    addi r3, r31, 0xb0
    addi r5, r30, 0x66
    li r4, 0x140
    bl fn_80097A88
    addi r3, r31, 0xb0
    addi r5, r30, 0x7d
    li r4, 0x142
    bl fn_80097A88
    lwz r0, 0x12a8(r31)
    ori r0, r0, 0x1000
    stw r0, 0x12a8(r31)
    lwz r0, 0x2c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_803545E0_00000BBC
    lwz r3, 0x34(r1)
    bl dtor_80084684
lbl_fn_803545E0_00000BBC:
    addi r11, r1, 0x50
    mr r3, r31
    bl _restgpr_27
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80354874(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    addi r3, r3, 0x14b0
    bl fn_80473F50
    cmpwi r3, 0x0
    beq lbl_fn_80354874_00000C04
    li r3, 0x0
    b lbl_fn_80354874_00000C60
lbl_fn_80354874_00000C04:
    mr r3, r31
    bl fn_800E2DD4
    cmpwi r3, 0x0
    beq lbl_fn_80354874_00000C5C
    mr r3, r31
    bl fn_80354910
    lwz r7, 0x14bc(r31)
    li r3, 0x1
    lwz r5, 0x14a8(r31)
    srwi r6, r7, 31
    lwz r4, 0x54c(r31)
    lwz r0, 0x7ec(r31)
    add r6, r6, r7
    srawi r6, r6, 1
    oris r5, r5, 0x100
    ori r4, r4, 0x400
    ori r0, r0, 0x4
    stw r6, 0x14b8(r31)
    stw r5, 0x14a8(r31)
    stw r4, 0x54c(r31)
    stw r0, 0x7ec(r31)
    b lbl_fn_80354874_00000C60
lbl_fn_80354874_00000C5C:
    li r3, 0x0
lbl_fn_80354874_00000C60:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80354910(void)
{
    nofralloc
    stwu r1, -0x650(r1)
    mflr r0
    stw r0, 0x654(r1)
    stw r31, 0x64c(r1)
    stw r30, 0x648(r1)
    stw r29, 0x644(r1)
    mr r29, r3
    addi r3, r3, 0x14b0
    bl fn_8047059C
    mr r30, r3
    addi r3, r29, 0x14b0
    bl fn_80470580
    lis r4, lbl_807772D0@ha
    li r0, 0x0
    addi r4, r4, lbl_807772D0@l
    stw r4, 0x8(r1)
    mr r31, r3
    addi r3, r1, 0x18
    stw r0, 0xc(r1)
    li r4, 0x0
    li r5, 0x400
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x638(r1)
    bl memset
    addi r3, r1, 0x618
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x8(r1)
    mr r4, r31
    mr r5, r30
    addi r3, r1, 0x8
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0x8
    addi r4, r4, lbl_807772B0@l
    stw r4, 0x8(r1)
    la r4, lbl_8087D708
    bl fn_8005B6E8
    lis r31, lbl_8074AF58@ha
    addi r31, r31, lbl_8074AF58@l
lbl_fn_80354910_00000D24:
    addi r3, r1, 0x8
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    mr r30, r3
    extsb. r0, r0
    beq lbl_fn_80354910_00000DDC
    cmpwi r0, 0x3b
    beq lbl_fn_80354910_00000DDC
    addi r4, r31, 0x93
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80354910_00000D68
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x14bc(r29)
    b lbl_fn_80354910_00000DDC
lbl_fn_80354910_00000D68:
    mr r3, r30
    addi r4, r31, 0xa1
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80354910_00000D90
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x14c8(r29)
    b lbl_fn_80354910_00000DDC
lbl_fn_80354910_00000D90:
    mr r3, r30
    addi r4, r31, 0xb1
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80354910_00000DB8
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x14d4(r29)
    b lbl_fn_80354910_00000DDC
lbl_fn_80354910_00000DB8:
    mr r3, r30
    addi r4, r31, 0xbe
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80354910_00000DDC
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x14f0(r29)
lbl_fn_80354910_00000DDC:
    addi r3, r1, 0x8
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_80354910_00000D24
    lwz r0, 0x654(r1)
    lwz r31, 0x64c(r1)
    lwz r30, 0x648(r1)
    lwz r29, 0x644(r1)
    mtlr r0
    addi r1, r1, 0x650
    blr
}

asm void fn_80354AA4(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    stw r28, 0x20(r1)
    lwz r4, 0x12a4(r3)
    extrwi. r0, r4, 1, 29
    beq lbl_fn_80354AA4_00000E44
    bl fn_800E2FE0
    b lbl_fn_80354AA4_000010E0
lbl_fn_80354AA4_00000E44:
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x6
    beq lbl_fn_80354AA4_00000E5C
    cmpwi r0, 0x7
    beq lbl_fn_80354AA4_00000F78
    b lbl_fn_80354AA4_00000F90
lbl_fn_80354AA4_00000E5C:
    rlwinm r0, r4, 0, 27, 25
    stw r0, 0x12a4(r3)
    lfs f31, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_80354AA4_00000F64
    li r0, 0x0
    stw r0, 0x58c(r31)
    mr r3, r31
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    bl fn_8015495C
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8016EB48
    lfs f1, lbl_808854DC
    mr r3, r31
    lfs f0, lbl_808854D8
    li r4, 0x140
    fmr f2, f1
    stfs f0, 0x570(r31)
    li r5, 0x0
    li r6, 0x0
    stfs f0, 0x574(r31)
    stfs f0, 0x578(r31)
    stfs f0, 0x57c(r31)
    stfs f0, 0x6b8(r31)
    stfs f0, 0x6bc(r31)
    stfs f0, 0x6c0(r31)
    bl fn_80161570
    lwz r3, 0x14f0(r31)
    bl fn_80219E6C
    lfs f2, 0x530(r31)
    addi r30, r1, 0x10
    psq_l f1, 0x528(r31), 0, 0
    mr r29, r3
    psq_st f1, 0x0(r30), 0, 0
    lwz r28, lbl_8087F048
    lfs f3, 0x14(r1)
    lfs f0, lbl_808854E0
    mr r3, r28
    stfs f2, 0x18(r1)
    fadds f0, f3, f0
    stfs f0, 0x14(r1)
    bl fn_800F8548
    li r0, -0x1
    stw r0, 0x8(r1)
    lfs f1, lbl_808854D8
    mr r6, r3
    stw r0, 0xc(r1)
    mr r3, r28
    lfs f2, lbl_808854E4
    mr r4, r31
    mr r5, r29
    mr r7, r30
    addi r8, r31, 0x534
    li r9, 0x0
    li r10, 0x1e
    bl fn_800FAB80
lbl_fn_80354AA4_00000F64:
    mr r3, r31
    bl fn_80145334
    mr r3, r31
    bl fn_8014C540
    b lbl_fn_80354AA4_000010E0
lbl_fn_80354AA4_00000F78:
    bl fn_80354EE4
    mr r3, r31
    bl fn_80145334
    mr r3, r31
    bl fn_8014C540
    b lbl_fn_80354AA4_000010E0
lbl_fn_80354AA4_00000F90:
    lwz r7, 0x38(r3)
    li r5, 0x0
    li r4, 0x0
    li r6, 0x0
    rlwinm r0, r7, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80354AA4_00000FBC
    clrlwi r0, r7, 31
    cmplwi r0, 0x1
    beq lbl_fn_80354AA4_00000FBC
    li r6, 0x1
lbl_fn_80354AA4_00000FBC:
    cmpwi r6, 0x0
    beq lbl_fn_80354AA4_00000FD8
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_80354AA4_00000FD8
    li r4, 0x1
lbl_fn_80354AA4_00000FD8:
    cmpwi r4, 0x0
    beq lbl_fn_80354AA4_0000100C
    lwz r0, 0x55c(r3)
    li r4, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_80354AA4_00001000
    lwz r0, 0x560(r3)
    cmpwi r0, 0x1c
    bne lbl_fn_80354AA4_00001000
    li r4, 0x1
lbl_fn_80354AA4_00001000:
    cmpwi r4, 0x0
    bne lbl_fn_80354AA4_0000100C
    li r5, 0x1
lbl_fn_80354AA4_0000100C:
    cmpwi r5, 0x0
    beq lbl_fn_80354AA4_00001098
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x2
    bne lbl_fn_80354AA4_00001098
    lwz r0, 0xd18(r3)
    cmpwi r0, 0x1
    bne lbl_fn_80354AA4_00001098
    lwz r0, 0xd1c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80354AA4_00001098
    lwz r4, 0x14cc(r3)
    cmpwi r4, 0x0
    ble lbl_fn_80354AA4_00001050
    subi r0, r4, 0x1
    stw r0, 0x14cc(r3)
    b lbl_fn_80354AA4_00001098
lbl_fn_80354AA4_00001050:
    lwz r4, 0x14b8(r3)
    lwz r0, 0x14bc(r3)
    addi r4, r4, 0x1
    stw r4, 0x14b8(r3)
    cmpw r4, r0
    blt lbl_fn_80354AA4_00001074
    mr r3, r31
    bl fn_80354DA4
    b lbl_fn_80354AA4_00001098
lbl_fn_80354AA4_00001074:
    lwz r4, 0x14c4(r3)
    lwz r0, 0x14c8(r3)
    cmpw r4, r0
    blt lbl_fn_80354AA4_00001098
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 28
    beq lbl_fn_80354AA4_00001098
    mr r3, r31
    bl fn_80355390
lbl_fn_80354AA4_00001098:
    lwz r0, 0x58c(r31)
    cmpwi r0, 0x6
    bge lbl_fn_80354AA4_000010D8
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x6
    bne lbl_fn_80354AA4_000010CC
    lwz r0, 0x560(r31)
    cmpwi r0, 0x3b
    bne lbl_fn_80354AA4_000010CC
    lwz r3, 0x14c8(r31)
    li r0, 0x3c
    stw r3, 0x14c4(r31)
    stw r0, 0x14cc(r31)
lbl_fn_80354AA4_000010CC:
    mr r3, r31
    bl fn_800E2FE0
    b lbl_fn_80354AA4_000010E0
lbl_fn_80354AA4_000010D8:
    mr r3, r31
    bl fn_80145334
lbl_fn_80354AA4_000010E0:
    lwz r0, 0x44(r1)
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80354DA4(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    lis r4, lbl_8074AF58@ha
    li r5, 0x0
    stw r0, 0x84(r1)
    addi r4, r4, lbl_8074AF58@l
    addi r4, r4, 0xcc
    stw r31, 0x7c(r1)
    stw r30, 0x78(r1)
    mr r30, r3
    addi r3, r3, 0xb0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80354DA4_00001148
    li r3, 0x0
    b lbl_fn_80354DA4_00001154
lbl_fn_80354DA4_00001148:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r3, r3, r0
lbl_fn_80354DA4_00001154:
    lfs f3, 0x2c(r3)
    lis r7, 0x8000
    lfs f4, 0x1c(r3)
    addi r6, r1, 0x8
    lfs f0, 0xc(r3)
    li r31, 0x0
    stfs f0, 0x14(r1)
    addi r4, r1, 0x20
    lfs f0, lbl_808854E8
    addi r5, r1, 0x14
    stfs f4, 0x18(r1)
    addi r7, r7, 0x6
    lwz r3, lbl_8087EE98
    li r8, 0x0
    stfs f3, 0x1c(r1)
    li r9, 0x0
    lwz r10, 0xd1c(r30)
    lfs f2, 0x530(r10)
    psq_l f1, 0x528(r10), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    lfs f3, 0xc(r1)
    stfs f2, 0x10(r1)
    fadds f0, f3, f0
    stw r31, 0x54(r1)
    stfs f0, 0xc(r1)
    stw r31, 0x58(r1)
    stw r31, 0x5c(r1)
    stw r31, 0x60(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_80354DA4_000011E0
    lwz r3, 0x14b8(r30)
    subi r0, r3, 0x1e
    stw r0, 0x14b8(r30)
    b lbl_fn_80354DA4_00001230
lbl_fn_80354DA4_000011E0:
    li r0, 0x7
    stw r0, 0x58c(r30)
    lfs f1, lbl_808854D8
    addi r3, r30, 0xb0
    stw r31, 0x14d0(r30)
    li r4, 0x0
    lfs f2, lbl_808854EC
    li r5, 0x142
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_808854E4
    li r3, 0x1
    lwz r0, 0xd1c(r30)
    stw r3, 0x3fc(r30)
    stfs f0, 0x2fc(r30)
    stfs f0, 0x2e8(r30)
    stw r0, 0x14c0(r30)
    stw r31, 0x14b8(r30)
lbl_fn_80354DA4_00001230:
    lwz r0, 0x84(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_80354EE4(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    stfd f31, 0x110(r1)
    psq_st f31, 0x118(r1), 0, 0
    stfd f30, 0x100(r1)
    psq_st f30, 0x108(r1), 0, 0
    stw r31, 0xfc(r1)
    mr r31, r3
    stw r30, 0xf8(r1)
    stw r29, 0xf4(r1)
    lwz r0, 0x14d0(r3)
    lwz r4, 0x12a4(r3)
    cmpwi r0, 0x0
    rlwinm r4, r4, 0, 27, 25
    stw r4, 0x12a4(r3)
    bne lbl_fn_80354EE4_00001678
    lwz r4, 0x14c0(r3)
    addi r30, r1, 0x68
    lfs f0, 0x530(r3)
    lfs f3, 0x530(r4)
    lfs f4, 0x528(r4)
    fsubs f2, f3, f0
    lfs f0, 0x528(r3)
    lfs f3, lbl_808854D8
    fsubs f1, f4, f0
    lfs f0, lbl_808854F0
    fabs f4, f2
    stfs f1, 0x68(r1)
    frsp f4, f4
    stfs f2, 0x70(r1)
    stfs f3, 0x6c(r1)
    fcmpo cr0, f4, f0
    bge lbl_fn_80354EE4_000012EC
    fcmpo cr0, f1, f3
    ble lbl_fn_80354EE4_000012E0
    lfs f0, lbl_808854F4
    b lbl_fn_80354EE4_000012E4
lbl_fn_80354EE4_000012E0:
    lfs f0, lbl_808854F8
lbl_fn_80354EE4_000012E4:
    stfs f0, 0xc(r1)
    b lbl_fn_80354EE4_000012F8
lbl_fn_80354EE4_000012EC:
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0xc(r1)
lbl_fn_80354EE4_000012F8:
    lfs f0, 0xc(r1)
    addi r3, r1, 0xb8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808854D8
    addi r4, r1, 0x14
    lfs f4, 0xc0(r1)
    mr r5, r4
    lfs f5, 0xbc(r1)
    addi r3, r1, 0x78
    lfs f6, 0xb8(r1)
    lfs f7, 0xd0(r1)
    lfs f8, 0xcc(r1)
    lfs f9, 0xc8(r1)
    lfs f10, 0xe0(r1)
    lfs f11, 0xdc(r1)
    lfs f12, 0xd8(r1)
    lfs f13, 0xe4(r1)
    lfs f31, 0xd4(r1)
    lfs f30, 0xc4(r1)
    lfs f0, lbl_808854E4
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x70(r1)
    stfs f3, 0xa8(r1)
    stfs f3, 0xac(r1)
    stfs f3, 0xb0(r1)
    stfs f0, 0xb4(r1)
    stfs f6, 0x44(r1)
    stfs f5, 0x48(r1)
    stfs f4, 0x4c(r1)
    stfs f6, 0x78(r1)
    stfs f5, 0x7c(r1)
    stfs f4, 0x80(r1)
    stfs f9, 0x38(r1)
    stfs f8, 0x3c(r1)
    stfs f7, 0x40(r1)
    stfs f9, 0x88(r1)
    stfs f8, 0x8c(r1)
    stfs f7, 0x90(r1)
    stfs f12, 0x2c(r1)
    stfs f11, 0x30(r1)
    stfs f10, 0x34(r1)
    stfs f12, 0x98(r1)
    stfs f11, 0x9c(r1)
    stfs f10, 0xa0(r1)
    stfs f30, 0x20(r1)
    stfs f31, 0x24(r1)
    stfs f13, 0x28(r1)
    stfs f30, 0x84(r1)
    stfs f31, 0x94(r1)
    stfs f13, 0xa4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x1c(r1)
    bl fn_805F9750
    lfs f2, 0x1c(r1)
    lfs f0, lbl_808854F0
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80354EE4_00001414
    lfs f3, 0x18(r1)
    lfs f0, lbl_808854D8
    fcmpo cr0, f3, f0
    ble lbl_fn_80354EE4_00001404
    lfs f0, lbl_808854F4
    b lbl_fn_80354EE4_00001408
lbl_fn_80354EE4_00001404:
    lfs f0, lbl_808854F8
lbl_fn_80354EE4_00001408:
    fneg f0, f0
    stfs f0, 0x8(r1)
    b lbl_fn_80354EE4_00001428
lbl_fn_80354EE4_00001414:
    lfs f1, 0x18(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x8(r1)
lbl_fn_80354EE4_00001428:
    addi r3, r1, 0x8
    lfs f2, lbl_808854D8
    psq_l f1, 0x0(r3), 0, 0
    lis r3, lbl_8074AF38@ha
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x70(r1)
    lfs f3, 0x6c(r1)
    lfs f0, 0x538(r31)
    stfs f2, 0x10(r1)
    fsubs f1, f3, f0
    lfd f2, lbl_8074AF38@l(r3)
    bl fn_8068AEA8
    frsp f4, f1
    lfs f0, lbl_808854FC
    fcmpo cr0, f4, f0
    ble lbl_fn_80354EE4_00001470
    lfs f0, lbl_80885500
    fsubs f4, f4, f0
lbl_fn_80354EE4_00001470:
    lfs f0, lbl_80885504
    fcmpo cr0, f4, f0
    bge lbl_fn_80354EE4_00001484
    lfs f0, lbl_80885500
    fadds f4, f4, f0
lbl_fn_80354EE4_00001484:
    lfs f3, lbl_80885508
    lis r3, lbl_8074AF38@ha
    lfs f0, 0x538(r31)
    fmuls f3, f4, f3
    lfd f2, lbl_8074AF38@l(r3)
    fadds f1, f0, f3
    bl fn_8068AEA8
    frsp f4, f1
    lfs f0, lbl_808854FC
    fcmpo cr0, f4, f0
    ble lbl_fn_80354EE4_000014B8
    lfs f0, lbl_80885500
    fsubs f4, f4, f0
lbl_fn_80354EE4_000014B8:
    lfs f0, lbl_80885504
    fcmpo cr0, f4, f0
    bge lbl_fn_80354EE4_000014CC
    lfs f0, lbl_80885500
    fadds f4, f4, f0
lbl_fn_80354EE4_000014CC:
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_8088550C
    stfs f4, 0x538(r31)
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_80354EE4_00001678
    li r0, 0x1
    stw r0, 0x14d0(r31)
    lwz r3, 0x14d4(r31)
    bl fn_80219E6C
    lis r4, lbl_8074AF58@ha
    mr r29, r3
    addi r4, r4, lbl_8074AF58@l
    addi r3, r31, 0xb0
    addi r4, r4, 0xcc
    li r5, 0x0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80354EE4_00001520
    li r4, 0x0
    b lbl_fn_80354EE4_0000152C
lbl_fn_80354EE4_00001520:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r4, r3, r0
lbl_fn_80354EE4_0000152C:
    lfs f5, 0x2c(r4)
    addi r3, r1, 0x50
    lfs f6, 0x1c(r4)
    addi r30, r1, 0x68
    lfs f7, 0xc(r4)
    stfs f7, 0x5c(r1)
    lfs f4, lbl_80885510
    stfs f6, 0x60(r1)
    stfs f5, 0x64(r1)
    lwz r4, 0x14c0(r31)
    lfs f0, 0x530(r4)
    lfs f3, 0x52c(r4)
    fsubs f2, f0, f5
    lfs f0, 0x528(r4)
    fsubs f3, f3, f6
    fsubs f0, f0, f7
    stfs f2, 0x58(r1)
    stfs f0, 0x50(r1)
    frsp f0, f2
    stfs f3, 0x54(r1)
    fmuls f3, f0, f0
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    lfs f0, 0x68(r1)
    lfs f5, 0x6c(r1)
    fmadds f1, f0, f0, f3
    stfs f2, 0x70(r1)
    fadds f0, f5, f4
    stfs f0, 0x6c(r1)
    bl fn_8068B100
    frsp f3, f1
    lfs f0, 0x4c(r29)
    lis r0, 0x4330
    lis r4, lbl_8074AF40@ha
    lfd f7, lbl_8074AF40@l(r4)
    mr r4, r30
    fdivs f8, f3, f0
    lfs f0, 0x6c(r1)
    lwz r3, lbl_8087F0A8
    stw r0, 0xe8(r1)
    lwz r0, 0x30(r3)
    mr r3, r30
    mullw r0, r0, r0
    fdivs f3, f0, f8
    lfs f0, lbl_808854D8
    lfs f4, lbl_80885518
    stfs f0, 0x6c(r1)
    lfs f5, lbl_80885514
    xoris r0, r0, 0x8000
    stw r0, 0xec(r1)
    fmuls f0, f4, f8
    lfd f6, 0xe8(r1)
    fsubs f6, f6, f7
    fdivs f4, f5, f6
    fmadds f30, f0, f4, f3
    bl fn_805F98D0
    lfs f4, 0x4c(r29)
    mr r4, r31
    lfs f3, 0x68(r1)
    mr r5, r29
    lfs f0, 0x70(r1)
    mr r7, r30
    fmuls f3, f3, f4
    stfs f30, 0x6c(r1)
    fmuls f0, f0, f4
    lfs f2, lbl_808854E4
    stfs f3, 0x68(r1)
    addi r6, r1, 0x5c
    stfs f0, 0x70(r1)
    li r8, 0x0
    lwz r3, lbl_8087F048
    li r9, 0x0
    lfs f4, 0x4c(r29)
    li r10, 0x0
    lfs f1, lbl_808854D8
    fdivs f5, f2, f4
    fmuls f4, f3, f5
    fmuls f3, f30, f5
    fmuls f0, f0, f5
    stfs f4, 0x68(r1)
    stfs f3, 0x6c(r1)
    stfs f0, 0x70(r1)
    bl fn_800F8574
lbl_fn_80354EE4_00001678:
    lfs f30, 0x2e4(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f30, f1
    cror eq, gt, eq
    bne lbl_fn_80354EE4_000016C8
    li r0, 0x0
    stw r0, 0x58c(r31)
    mr r3, r31
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    bl fn_8015495C
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8016EB48
lbl_fn_80354EE4_000016C8:
    lwz r0, 0x124(r1)
    psq_l f31, 0x118(r1), 0, 0
    lfd f31, 0x110(r1)
    psq_l f30, 0x108(r1), 0, 0
    lfd f30, 0x100(r1)
    lwz r31, 0xfc(r1)
    lwz r30, 0xf8(r1)
    lwz r29, 0xf4(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_80355390(void)
{
    nofralloc
    stwu r1, -0x1c0(r1)
    mflr r0
    stw r0, 0x1c4(r1)
    addi r11, r1, 0x1a0
    stfd f31, 0x1b0(r1)
    psq_st f31, 0x1b8(r1), 0, 0
    stfd f30, 0x1a0(r1)
    psq_st f30, 0x1a8(r1), 0, 0
    bl _savegpr_27
    li r0, 0x6
    li r31, 0x0
    stw r0, 0x58c(r3)
    mr r27, r3
    lfs f1, lbl_808854D8
    li r4, 0x0
    stw r31, 0x14d0(r3)
    li r5, 0x13f
    lfs f2, lbl_808854EC
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    addi r3, r3, 0xb0
    bl fn_80097C08
    lfs f4, lbl_808854E4
    addi r5, r27, 0x14e4
    lfs f3, lbl_8088551C
    li r0, 0x1
    psq_l f1, 0x528(r27), 0, 0
    addi r3, r1, 0x100
    lfs f2, 0x530(r27)
    li r4, 0x79
    stw r0, 0x3fc(r27)
    lwz r6, 0xd1c(r27)
    stfs f4, 0x2e8(r27)
    lfs f0, lbl_808854D8
    stfs f4, 0x2fc(r27)
    stfs f3, 0x2e4(r27)
    stw r31, 0x14c4(r27)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x14ec(r27)
    stfs f0, 0x50(r1)
    stfs f0, 0x54(r1)
    stfs f4, 0x58(r1)
    lfs f1, 0x538(r6)
    bl fn_805F8E70
    addi r4, r1, 0x50
    addi r3, r1, 0x100
    mr r5, r4
    bl fn_805F93C0
    lwz r3, 0xd1c(r27)
    addi r5, r1, 0x5c
    lfs f0, 0x58(r1)
    addi r4, r27, 0x14d8
    lfs f3, 0x530(r3)
    addi r30, r1, 0x80
    lfs f5, 0x52c(r3)
    addi r29, r1, 0x74
    fadds f6, f3, f0
    lfs f4, 0x54(r1)
    lfs f3, 0x528(r3)
    mr r3, r27
    lfs f0, 0x50(r1)
    fadds f4, f5, f4
    fadds f0, f3, f0
    stfs f4, 0x60(r1)
    fmr f2, f6
    lfs f3, lbl_808854E0
    stfs f0, 0x5c(r1)
    lfs f0, lbl_80885520
    stfs f2, 0x14e0(r27)
    frsp f2, f2
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    lwz r28, lbl_8087EE98
    lfs f4, 0x84(r1)
    stfs f2, 0x88(r1)
    fadds f3, f4, f3
    stfs f6, 0x64(r1)
    stfs f3, 0x84(r1)
    lfs f2, 0x14e0(r27)
    stfs f2, 0x7c(r1)
    psq_st f1, 0x0(r29), 0, 0
    lfs f3, 0x78(r1)
    stw r31, 0x164(r1)
    fsubs f0, f3, f0
    stw r31, 0x168(r1)
    stfs f0, 0x78(r1)
    stw r31, 0x16c(r1)
    stw r31, 0x170(r1)
    bl fn_80179D44
    oris r7, r3, 0x8000
    mr r3, r28
    mr r5, r30
    mr r6, r29
    addi r4, r1, 0x130
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_80355390_000018A0
    addi r3, r1, 0x134
    lfs f2, 0x13c(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r27, 0x14d8
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x14e0(r27)
lbl_fn_80355390_000018A0:
    lfs f4, 0x14e0(r27)
    addi r29, r1, 0x68
    lfs f0, 0x530(r27)
    lfs f3, lbl_808854D8
    fsubs f2, f4, f0
    lfs f5, 0x14d8(r27)
    lfs f4, 0x528(r27)
    lfs f0, lbl_808854F0
    fabs f6, f2
    stfs f2, 0x70(r1)
    fsubs f1, f5, f4
    stfs f3, 0x6c(r1)
    frsp f4, f6
    stfs f1, 0x68(r1)
    fcmpo cr0, f4, f0
    bge lbl_fn_80355390_000018FC
    fcmpo cr0, f1, f3
    ble lbl_fn_80355390_000018F0
    lfs f0, lbl_808854F4
    b lbl_fn_80355390_000018F4
lbl_fn_80355390_000018F0:
    lfs f0, lbl_808854F8
lbl_fn_80355390_000018F4:
    stfs f0, 0xc(r1)
    b lbl_fn_80355390_00001908
lbl_fn_80355390_000018FC:
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0xc(r1)
lbl_fn_80355390_00001908:
    lfs f0, 0xc(r1)
    addi r3, r1, 0xd0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808854D8
    addi r4, r1, 0x14
    lfs f4, 0xd8(r1)
    mr r5, r4
    lfs f5, 0xd4(r1)
    addi r3, r1, 0x90
    lfs f6, 0xd0(r1)
    lfs f7, 0xe8(r1)
    lfs f8, 0xe4(r1)
    lfs f9, 0xe0(r1)
    lfs f10, 0xf8(r1)
    lfs f11, 0xf4(r1)
    lfs f12, 0xf0(r1)
    lfs f13, 0xfc(r1)
    lfs f31, 0xec(r1)
    lfs f30, 0xdc(r1)
    lfs f0, lbl_808854E4
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x70(r1)
    stfs f3, 0xc0(r1)
    stfs f3, 0xc4(r1)
    stfs f3, 0xc8(r1)
    stfs f0, 0xcc(r1)
    stfs f6, 0x44(r1)
    stfs f5, 0x48(r1)
    stfs f4, 0x4c(r1)
    stfs f6, 0x90(r1)
    stfs f5, 0x94(r1)
    stfs f4, 0x98(r1)
    stfs f9, 0x38(r1)
    stfs f8, 0x3c(r1)
    stfs f7, 0x40(r1)
    stfs f9, 0xa0(r1)
    stfs f8, 0xa4(r1)
    stfs f7, 0xa8(r1)
    stfs f12, 0x2c(r1)
    stfs f11, 0x30(r1)
    stfs f10, 0x34(r1)
    stfs f12, 0xb0(r1)
    stfs f11, 0xb4(r1)
    stfs f10, 0xb8(r1)
    stfs f30, 0x20(r1)
    stfs f31, 0x24(r1)
    stfs f13, 0x28(r1)
    stfs f30, 0x9c(r1)
    stfs f31, 0xac(r1)
    stfs f13, 0xbc(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x1c(r1)
    bl fn_805F9750
    lfs f2, 0x1c(r1)
    lfs f0, lbl_808854F0
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80355390_00001A24
    lfs f3, 0x18(r1)
    lfs f0, lbl_808854D8
    fcmpo cr0, f3, f0
    ble lbl_fn_80355390_00001A14
    lfs f0, lbl_808854F4
    b lbl_fn_80355390_00001A18
lbl_fn_80355390_00001A14:
    lfs f0, lbl_808854F8
lbl_fn_80355390_00001A18:
    fneg f0, f0
    stfs f0, 0x8(r1)
    b lbl_fn_80355390_00001A38
lbl_fn_80355390_00001A24:
    lfs f1, 0x18(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x8(r1)
lbl_fn_80355390_00001A38:
    lfs f4, lbl_808854D8
    addi r3, r1, 0x8
    psq_l f1, 0x0(r3), 0, 0
    addi r4, r1, 0x80
    fmr f2, f4
    psq_st f1, 0x0(r29), 0, 0
    lfs f0, lbl_80885524
    addi r5, r1, 0x74
    stfs f2, 0x70(r1)
    frsp f2, f2
    psq_st f1, 0x534(r27), 0, 0
    psq_l f1, 0x528(r27), 0, 0
    stfs f2, 0x53c(r27)
    lfs f2, 0x530(r27)
    lwz r3, lbl_8087F048
    psq_st f1, 0x0(r4), 0, 0
    lfs f3, 0x84(r1)
    psq_st f1, 0x0(r5), 0, 0
    fadds f0, f3, f0
    lfs f1, lbl_808854E0
    stfs f4, 0x10(r1)
    stfs f2, 0x88(r1)
    stfs f2, 0x7c(r1)
    stfs f0, 0x84(r1)
    bl fn_8010A308
    addi r11, r1, 0x1a0
    psq_l f31, 0x1b8(r1), 0, 0
    lfd f31, 0x1b0(r1)
    psq_l f30, 0x1a8(r1), 0, 0
    lfd f30, 0x1a0(r1)
    bl _restgpr_27
    lwz r0, 0x1c4(r1)
    mtlr r0
    addi r1, r1, 0x1c0
    blr
}
