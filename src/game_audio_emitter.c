#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void dtor_80084684(void);
extern void fn_800616C0(void);
extern void fn_80063200(void);
extern void fn_800638B0(void);
extern void fn_80063D3C(void);
extern void fn_8007708C(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_800897D8(void);
extern void fn_80092814(void);
extern void fn_80097C08(void);
extern void fn_80097CCC(void);
extern void fn_80097D7C(void);
extern void fn_800CB3A0(void);
extern void fn_800D246C(void);
extern void fn_800DD3FC(void);
extern void fn_800EB7A0(void);
extern void fn_800EF7A0(void);
extern void fn_800F8548(void);
extern void fn_800F8C6C(void);
extern void fn_80109828(void);
extern void fn_8013655C(void);
extern void fn_80144710(void);
extern void fn_80145334(void);
extern void fn_80148990(void);
extern void fn_8014C540(void);
extern void fn_80151448(void);
extern void fn_8016E970(void);
extern void fn_80219E6C(void);
extern void fn_802375C4(void);
extern void fn_802376D0(void);
extern void fn_8023781C(void);
extern void fn_80237874(void);
extern void fn_80239DAC(void);
extern void fn_8023A8B4(void);
extern void fn_802FF6C4(void);
extern void fn_802FF800(void);
extern void fn_802FFFF8(void);
extern void fn_80300AD8(void);
extern void fn_803010BC(void);
extern void fn_80301DDC(void);
extern void fn_803026F0(void);
extern void fn_80302B84(void);
extern void fn_80302F94(void);
extern void fn_803041C8(void);
extern void fn_80304718(void);
extern void fn_80304B40(void);
extern void fn_80304FC0(void);
extern void fn_803057A8(void);
extern void fn_8035B78C(void);
extern void fn_80370320(void);
extern void fn_80370AE4(void);
extern void fn_80376254(void);
extern void fn_80473E74(void);
extern void fn_80473E8C(void);
extern void fn_80473F50(void);
extern void fn_805F8E70(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9990(void);
extern void fn_8068AEA4(void);
extern void fn_8068AEA8(void);
extern void fn_80695720(void);
extern void fn_806959D8(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 jumptable_80787BD8[];
extern u8 lbl_807489F8[];
extern u8 lbl_80748A00[];
extern u8 lbl_80748A14[];
extern u8 lbl_80790000[];

/* Small data declarations */
extern u32 lbl_8087D9E0;
extern u32 lbl_8087D9E4;
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EEF0;
extern u32 lbl_8087EF10;
extern u32 lbl_8087F048;
extern u32 lbl_8087F1E4;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F4A0;
extern u32 lbl_808813D0;
extern u32 lbl_80884A20;
extern u32 lbl_80884A2C;
extern u32 lbl_80884A30;
extern u32 lbl_80884A34;
extern u32 lbl_80884A48;
extern u32 lbl_80884A50;
extern u32 lbl_80884A54;
extern u32 lbl_80884A58;
extern u32 lbl_80884A5C;
extern u32 lbl_80884A60;
extern u32 lbl_80884A64;
extern u32 lbl_80884A68;
extern u32 lbl_80884A6C;
extern u32 lbl_80884A70;
extern u32 lbl_80884A74;
extern u32 lbl_80884A78;
extern u32 lbl_80884A7C;
extern u32 lbl_80884A80;
extern u32 lbl_80884A84;
extern u32 lbl_80884A88;
extern u32 lbl_80884A8C;
extern u32 lbl_80884A90;
extern u32 lbl_80884A98;

/* Function declarations */
void fn_802FCF14(void);
void fn_802FCF50(void);
void fn_802FD134(void);
void fn_802FD328(void);
void fn_802FDDAC(void);
void fn_802FE3E4(void);
void fn_802FE630(void);

asm void fn_802FCF14(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80473E74
    lis r4, lbl_80790000@ha
    mr r3, r31
    addi r4, r4, lbl_80790000@l
    stw r4, 0x0(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802FCF50(void)
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
    beq lbl_fn_802FCF50_00000200
    addic. r0, r3, 0x168c
    beq lbl_fn_802FCF50_00000088
    lwz r4, 0x168c(r3)
    cmpwi r4, 0x0
    beq lbl_fn_802FCF50_00000088
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_802FCF50_00000088
    bl fn_800897D8
lbl_fn_802FCF50_00000088:
    lis r4, fn_800EF7A0@ha
    addi r3, r29, 0x1674
    addi r4, r4, fn_800EF7A0@l
    li r5, 0x8
    li r6, 0x2
    bl fn_806959D8
    addi r3, r29, 0x15ac
    li r4, -0x1
    bl fn_800CB3A0
    addic. r31, r29, 0x15a0
    beq lbl_fn_802FCF50_000000CC
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_802FCF50_000000CC
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802FCF50_000000CC:
    addic. r31, r29, 0x1594
    beq lbl_fn_802FCF50_000000EC
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_802FCF50_000000EC
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802FCF50_000000EC:
    addi r3, r29, 0x1588
    li r4, -0x1
    bl fn_802375C4
    addic. r31, r29, 0x157c
    beq lbl_fn_802FCF50_00000118
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_802FCF50_00000118
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802FCF50_00000118:
    addic. r31, r29, 0x1570
    beq lbl_fn_802FCF50_00000138
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_802FCF50_00000138
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802FCF50_00000138:
    addic. r31, r29, 0x1564
    beq lbl_fn_802FCF50_00000158
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_802FCF50_00000158
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802FCF50_00000158:
    addic. r31, r29, 0x1558
    beq lbl_fn_802FCF50_00000178
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_802FCF50_00000178
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802FCF50_00000178:
    addi r3, r29, 0x154c
    li r4, -0x1
    bl fn_802375C4
    addic. r31, r29, 0x1540
    beq lbl_fn_802FCF50_000001A4
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_802FCF50_000001A4
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802FCF50_000001A4:
    addic. r31, r29, 0x1534
    beq lbl_fn_802FCF50_000001C4
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_802FCF50_000001C4
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802FCF50_000001C4:
    addic. r31, r29, 0x1528
    beq lbl_fn_802FCF50_000001E4
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_802FCF50_000001E4
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802FCF50_000001E4:
    mr r3, r29
    li r4, 0x0
    bl fn_8035B78C
    cmpwi r30, 0x0
    ble lbl_fn_802FCF50_00000200
    mr r3, r29
    bl dtor_80084684
lbl_fn_802FCF50_00000200:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_802FD134(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x1
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_8013655C
    cmpwi r3, 0x0
    beq lbl_fn_802FD134_0000024C
    li r31, 0x0
lbl_fn_802FD134_0000024C:
    addi r3, r30, 0x1528
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802FD134_000002EC
    addi r3, r30, 0x1534
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802FD134_000002EC
    addi r3, r30, 0x1588
    bl fn_802376D0
    cmpwi r3, 0x0
    bne lbl_fn_802FD134_000002EC
    addi r3, r30, 0x1540
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802FD134_000002EC
    addi r3, r30, 0x1564
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802FD134_000002EC
    addi r3, r30, 0x157c
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802FD134_000002EC
    addi r3, r30, 0x1570
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802FD134_000002EC
    addi r3, r30, 0x1558
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802FD134_000002EC
    addi r3, r30, 0x1594
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_802FD134_000002EC
    addi r3, r30, 0x15a0
    bl fn_80237874
    cmpwi r3, 0x0
    beq lbl_fn_802FD134_000002F0
lbl_fn_802FD134_000002EC:
    li r31, 0x0
lbl_fn_802FD134_000002F0:
    addi r3, r30, 0x1674
    bl fn_80473F50
    cmpwi r3, 0x0
    bne lbl_fn_802FD134_00000310
    addi r3, r30, 0x167c
    bl fn_80473F50
    cmpwi r3, 0x0
    beq lbl_fn_802FD134_00000314
lbl_fn_802FD134_00000310:
    li r31, 0x0
lbl_fn_802FD134_00000314:
    lwz r3, 0x1438(r30)
    cmpwi r3, 0x0
    beq lbl_fn_802FD134_00000334
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_802FD134_00000334
    li r31, 0x0
lbl_fn_802FD134_00000334:
    cmpwi r31, 0x0
    beq lbl_fn_802FD134_000003F8
    mr r3, r30
    bl fn_803057A8
    lwz r3, 0x1438(r30)
    cmpwi r3, 0x0
    beq lbl_fn_802FD134_00000368
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x1438(r30)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_802FD134_00000368:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_802FD134_00000388
    lwz r0, 0x10d8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_802FD134_00000388
    lwz r0, 0x150c(r30)
    stw r0, 0x1518(r30)
lbl_fn_802FD134_00000388:
    li r3, 0x1
    li r0, 0x0
    stw r3, 0x10d0(r30)
    mr r3, r30
    li r4, 0x3
    stw r0, 0x58c(r30)
    bl fn_8016E970
    lwz r3, lbl_8087F4A0
    lwz r0, 0x48(r3)
    stw r0, 0x1614(r30)
    b lbl_fn_802FD134_000003C8
lbl_fn_802FD134_000003B4:
    lwz r0, 0x48(r3)
    cmpwi r0, 0x80a
    beq lbl_fn_802FD134_000003D4
    lwz r0, 0x5c(r3)
    stw r0, 0x1614(r30)
lbl_fn_802FD134_000003C8:
    lwz r3, 0x1614(r30)
    cmpwi r3, 0x0
    bne lbl_fn_802FD134_000003B4
lbl_fn_802FD134_000003D4:
    lwz r0, 0x7ec(r30)
    lfs f0, lbl_80884A50
    ori r0, r0, 0x1c0
    stfs f0, 0x56c(r30)
    oris r0, r0, 0x1
    ori r0, r0, 0x4011
    oris r0, r0, 0x300
    ori r0, r0, 0x8004
    stw r0, 0x7ec(r30)
lbl_fn_802FD134_000003F8:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802FD328(void)
{
    nofralloc
    stwu r1, -0x540(r1)
    mflr r0
    stw r0, 0x544(r1)
    stfd f31, 0x530(r1)
    psq_st f31, 0x538(r1), 0, 0
    stfd f30, 0x520(r1)
    psq_st f30, 0x528(r1), 0, 0
    stw r31, 0x51c(r1)
    mr r31, r3
    stw r30, 0x518(r1)
    bl fn_802FF6C4
    lwz r0, 0xd18(r31)
    lwz r4, 0x14f4(r31)
    cmpwi r0, 0x0
    lwz r3, 0x15ec(r31)
    addi r0, r4, 0x1
    stw r0, 0x14f4(r31)
    addi r0, r3, 0x1
    stw r0, 0x15ec(r31)
    beq lbl_fn_802FD328_00000470
    lwz r3, 0x1520(r31)
    addi r0, r3, 0x1
    stw r0, 0x1520(r31)
lbl_fn_802FD328_00000470:
    lwz r3, lbl_8087F430
    li r30, 0x0
    stw r30, 0x8a0(r3)
    lwz r0, 0xd18(r31)
    cmpwi r0, 0x0
    beq lbl_fn_802FD328_00000760
    lwz r0, 0xd1c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_802FD328_00000760
    lwz r0, 0x58c(r31)
    cmplwi r0, 0xd
    bgt lbl_fn_802FD328_00000750
    lis r3, jumptable_80787BD8@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_80787BD8@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lfs f30, 0x2e4(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f30, f1
    cror eq, gt, eq
    bne lbl_fn_802FD328_00000514
    stw r30, 0x14f0(r31)
    stw r30, 0x14f4(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80884A20
    li r4, 0x2
    bl fn_80097CCC
    stw r30, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lwz r3, 0x15f0(r31)
    addi r0, r3, 0x1
    stw r0, 0x15f0(r31)
lbl_fn_802FD328_00000514:
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_80884A54
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_802FD328_00000570
    lfs f0, lbl_80884A58
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_802FD328_00000570
    mr r3, r31
    bl fn_80144710
    li r3, 0x64a
    bl fn_80219E6C
    mr r7, r3
    lwz r8, 0x590(r31)
    lwz r3, lbl_8087F048
    mr r6, r31
    lfs f1, lbl_80884A20
    li r4, 0x0
    li r5, 0x0
    li r9, 0x1e
    li r10, -0x1
    bl fn_800F8C6C
lbl_fn_802FD328_00000570:
    lwz r0, 0x1690(r31)
    cmpwi r0, 0x0
    beq lbl_fn_802FD328_00000760
    li r3, 0x64a
    bl fn_80219E6C
    lfs f0, 0x40(r3)
    addi r4, r31, 0x528
    lfs f3, 0x8e4(r31)
    lis r5, 0xffff
    lwz r3, lbl_8087EEB0
    fadds f1, f3, f0
    lfs f2, lbl_80884A20
    bl fn_80063D3C
    b lbl_fn_802FD328_00000760
    lfs f30, 0x2e4(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f30, f1
    cror eq, gt, eq
    bne lbl_fn_802FD328_00000604
    stw r30, 0x14f0(r31)
    stw r30, 0x14f4(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80884A20
    li r4, 0x2
    bl fn_80097CCC
    stw r30, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lwz r3, 0x15f0(r31)
    addi r0, r3, 0x1
    stw r0, 0x15f0(r31)
lbl_fn_802FD328_00000604:
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_80884A54
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_802FD328_00000660
    lfs f0, lbl_80884A58
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_802FD328_00000660
    mr r3, r31
    bl fn_80144710
    li r3, 0x64b
    bl fn_80219E6C
    mr r7, r3
    lwz r8, 0x590(r31)
    lwz r3, lbl_8087F048
    mr r6, r31
    lfs f1, lbl_80884A20
    li r4, 0x0
    li r5, 0x0
    li r9, 0x1e
    li r10, -0x1
    bl fn_800F8C6C
lbl_fn_802FD328_00000660:
    lwz r0, 0x1690(r31)
    cmpwi r0, 0x0
    beq lbl_fn_802FD328_00000760
    li r3, 0x64b
    bl fn_80219E6C
    lfs f0, 0x40(r3)
    addi r4, r31, 0x528
    lfs f3, 0x8e4(r31)
    lis r5, 0xffff
    lwz r3, lbl_8087EEB0
    fadds f1, f3, f0
    lfs f2, lbl_80884A20
    bl fn_80063D3C
    b lbl_fn_802FD328_00000760
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0xec(r12)
    mtctr r12
    bctrl
    b lbl_fn_802FD328_00000760
    mr r3, r31
    bl fn_80301DDC
    b lbl_fn_802FD328_00000760
    mr r3, r31
    bl fn_803026F0
    b lbl_fn_802FD328_00000760
    mr r3, r31
    bl fn_80302B84
    b lbl_fn_802FD328_00000760
    mr r3, r31
    bl fn_80302F94
    b lbl_fn_802FD328_00000760
    mr r3, r31
    bl fn_803041C8
    b lbl_fn_802FD328_00000760
    mr r3, r31
    bl fn_80304718
    b lbl_fn_802FD328_00000760
    lwz r3, 0x14f4(r31)
    lwz r0, 0x16d8(r31)
    cmpw r3, r0
    ble lbl_fn_802FD328_00000760
    stw r30, 0x15ec(r31)
    stw r30, 0x14f0(r31)
    stw r30, 0x14f4(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80884A20
    li r4, 0x2
    bl fn_80097CCC
    stw r30, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lwz r3, 0x15f0(r31)
    addi r0, r3, 0x1
    stw r0, 0x15f0(r31)
    b lbl_fn_802FD328_00000760
lbl_fn_802FD328_00000750:
    mr r3, r31
    bl fn_802FF800
    mr r3, r31
    bl fn_802FFFF8
lbl_fn_802FD328_00000760:
    mr r3, r31
    bl fn_8014C540
    mr r3, r31
    bl fn_80145334
    lbz r0, 0x15b8(r31)
    cmpwi r0, 0x0
    beq lbl_fn_802FD328_00000784
    mr r3, r31
    bl fn_80304FC0
lbl_fn_802FD328_00000784:
    lwz r0, 0x1690(r31)
    cmpwi r0, 0x0
    beq lbl_fn_802FD328_00000E70
    lwz r3, lbl_8087EEB0
    addi r4, r31, 0x528
    lfs f1, 0x1694(r31)
    li r5, -0x100
    lfs f2, lbl_80884A20
    bl fn_80063D3C
    lwz r3, lbl_8087EEF0
    li r30, 0x0
    lwz r0, 0xd90(r3)
    cmpwi r0, 0x0
    beq lbl_fn_802FD328_000007D4
    addi r4, r3, 0x34
    li r5, 0x50
    bl fn_8007708C
    cmpwi r3, 0x0
    beq lbl_fn_802FD328_000007D4
    li r30, 0x1
lbl_fn_802FD328_000007D4:
    cmpwi r30, 0x0
    beq lbl_fn_802FD328_000007E4
    mr r3, r31
    bl fn_803010BC
lbl_fn_802FD328_000007E4:
    lwz r3, lbl_8087EEF0
    li r30, 0x0
    lwz r0, 0xd90(r3)
    cmpwi r0, 0x0
    beq lbl_fn_802FD328_00000810
    addi r4, r3, 0x34
    li r5, 0x4d
    bl fn_8007708C
    cmpwi r3, 0x0
    beq lbl_fn_802FD328_00000810
    li r30, 0x1
lbl_fn_802FD328_00000810:
    cmpwi r30, 0x0
    beq lbl_fn_802FD328_00000A80
    li r0, 0x0
    stw r0, 0x14f0(r31)
    stw r0, 0x14f4(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80884A20
    li r4, 0x2
    bl fn_80097CCC
    li r0, 0x6
    stw r0, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lfs f0, lbl_80884A5C
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80884A20
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x145
    lfs f2, lbl_80884A60
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r4, 0x14ec(r31)
    cmpwi r4, 0x0
    beq lbl_fn_802FD328_00000A80
    lfs f3, 0x530(r4)
    addi r3, r1, 0x1c
    lfs f0, 0x530(r31)
    addi r30, r1, 0x10
    lfs f5, 0x52c(r4)
    fsubs f2, f3, f0
    lfs f4, 0x52c(r31)
    lfs f3, 0x528(r4)
    fsubs f5, f5, f4
    lfs f0, 0x528(r31)
    stfs f2, 0x24(r1)
    fsubs f4, f3, f0
    lfs f0, lbl_80884A64
    frsp f3, f2
    stfs f4, 0x1c(r1)
    fabs f4, f3
    stfs f5, 0x20(r1)
    psq_l f1, 0x0(r3), 0, 0
    frsp f4, f4
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x18(r1)
    fcmpo cr0, f4, f0
    bge lbl_fn_802FD328_00000918
    lfs f3, 0x10(r1)
    lfs f0, lbl_80884A20
    fcmpo cr0, f3, f0
    ble lbl_fn_802FD328_0000090C
    lfs f0, lbl_80884A68
    b lbl_fn_802FD328_00000910
lbl_fn_802FD328_0000090C:
    lfs f0, lbl_80884A6C
lbl_fn_802FD328_00000910:
    stfs f0, 0x2c(r1)
    b lbl_fn_802FD328_0000092C
lbl_fn_802FD328_00000918:
    fmr f2, f3
    lfs f1, 0x10(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x2c(r1)
lbl_fn_802FD328_0000092C:
    lfs f0, 0x2c(r1)
    addi r3, r1, 0xe0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80884A20
    addi r4, r1, 0x34
    lfs f4, 0xe8(r1)
    mr r5, r4
    lfs f5, 0xe4(r1)
    addi r3, r1, 0xa0
    lfs f6, 0xe0(r1)
    lfs f7, 0xf8(r1)
    lfs f8, 0xf4(r1)
    lfs f9, 0xf0(r1)
    lfs f10, 0x108(r1)
    lfs f11, 0x104(r1)
    lfs f12, 0x100(r1)
    lfs f13, 0x10c(r1)
    lfs f31, 0xfc(r1)
    lfs f30, 0xec(r1)
    lfs f0, lbl_80884A5C
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x18(r1)
    stfs f3, 0xd0(r1)
    stfs f3, 0xd4(r1)
    stfs f3, 0xd8(r1)
    stfs f0, 0xdc(r1)
    stfs f6, 0x64(r1)
    stfs f5, 0x68(r1)
    stfs f4, 0x6c(r1)
    stfs f6, 0xa0(r1)
    stfs f5, 0xa4(r1)
    stfs f4, 0xa8(r1)
    stfs f9, 0x58(r1)
    stfs f8, 0x5c(r1)
    stfs f7, 0x60(r1)
    stfs f9, 0xb0(r1)
    stfs f8, 0xb4(r1)
    stfs f7, 0xb8(r1)
    stfs f12, 0x4c(r1)
    stfs f11, 0x50(r1)
    stfs f10, 0x54(r1)
    stfs f12, 0xc0(r1)
    stfs f11, 0xc4(r1)
    stfs f10, 0xc8(r1)
    stfs f30, 0x40(r1)
    stfs f31, 0x44(r1)
    stfs f13, 0x48(r1)
    stfs f30, 0xac(r1)
    stfs f31, 0xbc(r1)
    stfs f13, 0xcc(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x3c(r1)
    bl fn_805F9750
    lfs f2, 0x3c(r1)
    lfs f0, lbl_80884A64
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802FD328_00000A48
    lfs f3, 0x38(r1)
    lfs f0, lbl_80884A20
    fcmpo cr0, f3, f0
    ble lbl_fn_802FD328_00000A38
    lfs f0, lbl_80884A68
    b lbl_fn_802FD328_00000A3C
lbl_fn_802FD328_00000A38:
    lfs f0, lbl_80884A6C
lbl_fn_802FD328_00000A3C:
    fneg f0, f0
    stfs f0, 0x28(r1)
    b lbl_fn_802FD328_00000A5C
lbl_fn_802FD328_00000A48:
    lfs f1, 0x38(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x28(r1)
lbl_fn_802FD328_00000A5C:
    lfs f2, lbl_80884A20
    addi r3, r1, 0x28
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x30(r1)
    stfs f2, 0x18(r1)
    frsp f2, f2
    psq_st f1, 0x0(r30), 0, 0
    psq_st f1, 0x534(r31), 0, 0
    stfs f2, 0x53c(r31)
lbl_fn_802FD328_00000A80:
    lwz r3, lbl_8087EEF0
    li r30, 0x0
    lwz r0, 0xd90(r3)
    cmpwi r0, 0x0
    beq lbl_fn_802FD328_00000AAC
    addi r4, r3, 0x34
    li r5, 0x4c
    bl fn_8007708C
    cmpwi r3, 0x0
    beq lbl_fn_802FD328_00000AAC
    li r30, 0x1
lbl_fn_802FD328_00000AAC:
    cmpwi r30, 0x0
    beq lbl_fn_802FD328_00000B70
    li r0, 0x0
    stw r0, 0x14f0(r31)
    stw r0, 0x14f4(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80884A20
    li r4, 0x2
    bl fn_80097CCC
    li r0, 0x7
    stw r0, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lfs f0, lbl_80884A5C
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80884A20
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x147
    lfs f2, lbl_80884A60
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    addi r3, r1, 0x310
    li r4, 0x0
    li r5, 0x200
    bl memset
    lwz r3, lbl_8087F1E4
    lwz r4, 0x50c(r3)
    cmpwi r4, 0x0
    beq lbl_fn_802FD328_00000B4C
    b lbl_fn_802FD328_00000B50
lbl_fn_802FD328_00000B4C:
    la r4, lbl_808813D0
lbl_fn_802FD328_00000B50:
    lwz r5, 0x60(r31)
    addi r3, r1, 0x310
    lwz r5, 0x4(r5)
    crclr 6
    bl fn_800DD3FC
    lwz r3, lbl_8087F048
    addi r4, r1, 0x310
    bl fn_80109828
lbl_fn_802FD328_00000B70:
    lwz r3, lbl_8087EEF0
    li r30, 0x0
    lwz r0, 0xd90(r3)
    cmpwi r0, 0x0
    beq lbl_fn_802FD328_00000B9C
    addi r4, r3, 0x34
    li r5, 0x4a
    bl fn_8007708C
    cmpwi r3, 0x0
    beq lbl_fn_802FD328_00000B9C
    li r30, 0x1
lbl_fn_802FD328_00000B9C:
    cmpwi r30, 0x0
    beq lbl_fn_802FD328_00000C60
    li r0, 0x0
    stw r0, 0x14f0(r31)
    stw r0, 0x14f4(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80884A20
    li r4, 0x2
    bl fn_80097CCC
    li r0, 0x9
    stw r0, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lfs f0, lbl_80884A5C
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80884A20
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x143
    lfs f2, lbl_80884A60
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    addi r3, r1, 0x110
    li r4, 0x0
    li r5, 0x200
    bl memset
    lwz r3, lbl_8087F1E4
    lwz r4, 0x514(r3)
    cmpwi r4, 0x0
    beq lbl_fn_802FD328_00000C3C
    b lbl_fn_802FD328_00000C40
lbl_fn_802FD328_00000C3C:
    la r4, lbl_808813D0
lbl_fn_802FD328_00000C40:
    lwz r5, 0x60(r31)
    addi r3, r1, 0x110
    lwz r5, 0x4(r5)
    crclr 6
    bl fn_800DD3FC
    lwz r3, lbl_8087F048
    addi r4, r1, 0x110
    bl fn_80109828
lbl_fn_802FD328_00000C60:
    lwz r3, lbl_8087EEF0
    li r30, 0x0
    lwz r0, 0xd90(r3)
    cmpwi r0, 0x0
    beq lbl_fn_802FD328_00000C8C
    addi r4, r3, 0x34
    li r5, 0x48
    bl fn_8007708C
    cmpwi r3, 0x0
    beq lbl_fn_802FD328_00000C8C
    li r30, 0x1
lbl_fn_802FD328_00000C8C:
    cmpwi r30, 0x0
    beq lbl_fn_802FD328_00000D00
    lwz r3, 0x150c(r31)
    li r30, 0x0
    lfs f0, lbl_80884A20
    psq_l f1, 0x4(r3), 0, 0
    lfs f2, 0xc(r3)
    stfs f2, 0x530(r31)
    psq_st f1, 0x528(r31), 0, 0
    lfs f3, 0x14(r3)
    stfs f3, 0x538(r31)
    stfs f0, 0x53c(r31)
    stfs f0, 0x534(r31)
    stw r30, 0x14f0(r31)
    stw r30, 0x14f4(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80884A20
    li r4, 0x2
    bl fn_80097CCC
    stw r30, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lwz r3, 0x15f0(r31)
    addi r0, r3, 0x1
    stw r0, 0x15f0(r31)
lbl_fn_802FD328_00000D00:
    lbz r0, 0x166a(r31)
    cmpwi r0, 0x0
    bne lbl_fn_802FD328_00000D34
    lis r4, 0xff00
    lwz r3, lbl_8087EEB0
    addi r5, r4, 0xff
    lfs f1, 0x1608(r31)
    lfs f2, 0x160c(r31)
    li r4, 0x1
    lfs f3, 0x1610(r31)
    lfs f4, lbl_80884A70
    lfs f5, lbl_80884A34
    bl fn_80063200
lbl_fn_802FD328_00000D34:
    lis r30, lbl_80748A14@ha
    lfs f1, 0x534(r31)
    addi r30, r30, lbl_80748A14@l
    lfs f2, 0x538(r31)
    lfs f3, 0x53c(r31)
    addi r3, r1, 0x80
    addi r4, r30, 0x15b
    crset 6
    bl sprintf
    lfs f1, lbl_80884A74
    lis r5, 0xff00
    lfs f4, lbl_80884A48
    addi r4, r1, 0x80
    fmr f2, f1
    lwz r3, lbl_8087EEB0
    fmr f5, f4
    lfs f3, lbl_80884A70
    lfs f6, lbl_80884A20
    addi r5, r5, 0xff
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    mr r3, r31
    bl fn_80304B40
    cmpwi r3, 0x0
    beq lbl_fn_802FD328_00000DE4
    addi r3, r1, 0x8
    addi r4, r30, 0x167
    crclr 6
    bl sprintf
    lfs f4, lbl_80884A34
    addi r4, r1, 0x8
    lwz r3, lbl_8087EEB0
    lis r5, 0xffff
    fmr f5, f4
    lfs f1, lbl_80884A2C
    lfs f2, lbl_80884A74
    li r6, 0x1
    lfs f3, lbl_80884A70
    li r7, 0x1
    lfs f6, lbl_80884A20
    li r8, 0x0
    bl fn_800616C0
lbl_fn_802FD328_00000DE4:
    lwz r3, lbl_8087EEB0
    addi r4, r31, 0x1618
    lfs f1, lbl_80884A34
    li r5, -0x1
    lfs f2, lbl_80884A70
    bl fn_80063D3C
    lfs f3, 0x1620(r31)
    addi r4, r31, 0x1618
    lfs f0, 0x15fc(r31)
    addi r5, r1, 0x70
    lfs f5, 0x161c(r31)
    li r6, -0x1
    fadds f6, f3, f0
    lfs f4, 0x15f8(r31)
    lfs f3, 0x1618(r31)
    lfs f0, 0x15f4(r31)
    fadds f4, f5, f4
    lwz r3, lbl_8087EEB0
    fadds f0, f3, f0
    stfs f4, 0x74(r1)
    lfs f1, lbl_80884A70
    stfs f0, 0x70(r1)
    lfs f2, lbl_80884A78
    stfs f6, 0x78(r1)
    bl fn_800638B0
    lbz r0, 0x1668(r31)
    cmpwi r0, 0x0
    beq lbl_fn_802FD328_00000E70
    lwz r4, 0x1518(r31)
    lis r5, 0xff00
    lwz r3, lbl_8087EEB0
    lfs f1, 0x1694(r31)
    addi r4, r4, 0x4
    lfs f2, lbl_80884A7C
    bl fn_80063D3C
lbl_fn_802FD328_00000E70:
    lwz r0, 0x544(r1)
    psq_l f31, 0x538(r1), 0, 0
    lfd f31, 0x530(r1)
    psq_l f30, 0x528(r1), 0, 0
    lfd f30, 0x520(r1)
    lwz r31, 0x51c(r1)
    lwz r30, 0x518(r1)
    mtlr r0
    addi r1, r1, 0x540
    blr
}

asm void fn_802FDDAC(void)
{
    nofralloc
    stwu r1, -0x160(r1)
    mflr r0
    stw r0, 0x164(r1)
    stfd f31, 0x150(r1)
    psq_st f31, 0x158(r1), 0, 0
    stfd f30, 0x140(r1)
    psq_st f30, 0x148(r1), 0, 0
    stw r31, 0x13c(r1)
    mr r31, r4
    stw r30, 0x138(r1)
    mr r30, r3
    lwz r6, 0x40(r4)
    cmpwi r6, 0x1
    bne lbl_fn_802FDDAC_00000EDC
    lwz r0, 0x58c(r3)
    cmpwi r0, 0xa
    bne lbl_fn_802FDDAC_00000EEC
lbl_fn_802FDDAC_00000EDC:
    lwz r5, 0x8(r4)
    lwz r0, 0x4(r5)
    cmpwi r0, 0x134
    bne lbl_fn_802FDDAC_000013C0
lbl_fn_802FDDAC_00000EEC:
    cmpwi r6, 0x1
    bne lbl_fn_802FDDAC_00000F04
    lwz r3, lbl_8087F430
    li r4, 0x3
    li r5, 0x5
    bl fn_80376254
lbl_fn_802FDDAC_00000F04:
    lwz r0, 0xc(r31)
    lwz r3, 0x8(r31)
    ori r0, r0, 0x800
    stw r0, 0xc(r31)
    lwz r0, 0x4(r3)
    cmpwi r0, 0x134
    bne lbl_fn_802FDDAC_00000F30
    lwz r3, lbl_8087F430
    li r4, 0x6
    li r5, 0x1
    bl fn_80370AE4
lbl_fn_802FDDAC_00000F30:
    lwz r3, 0x58c(r30)
    cmpwi r3, 0x1
    beq lbl_fn_802FDDAC_00000F70
    cmpwi r3, 0x6
    bne lbl_fn_802FDDAC_00000F50
    lwz r0, 0x14f0(r30)
    cmpwi r0, 0x1
    beq lbl_fn_802FDDAC_00000F70
lbl_fn_802FDDAC_00000F50:
    cmpwi r3, 0x7
    beq lbl_fn_802FDDAC_00000F70
    cmpwi r3, 0x8
    beq lbl_fn_802FDDAC_00000F70
    cmpwi r3, 0xa
    beq lbl_fn_802FDDAC_00000F70
    cmpwi r3, 0xc
    bne lbl_fn_802FDDAC_00000F98
lbl_fn_802FDDAC_00000F70:
    lfs f4, 0x10(r31)
    lfs f5, lbl_80884A20
    lfs f3, 0x14(r31)
    lfs f0, 0x18(r31)
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    fmuls f0, f0, f5
    stfs f4, 0x10(r31)
    stfs f3, 0x14(r31)
    stfs f0, 0x18(r31)
lbl_fn_802FDDAC_00000F98:
    mr r3, r30
    mr r4, r31
    bl fn_80151448
    lwz r12, 0x0(r30)
    mr r3, r30
    mr r4, r31
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r0, 0x7e0(r30)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_802FDDAC_000014A8
    lwz r3, 0x58c(r30)
    subi r0, r3, 0xa
    cmplwi r0, 0x2
    ble lbl_fn_802FDDAC_00001354
    lwz r5, 0x0(r31)
    addi r3, r1, 0xbc
    lfs f5, 0x530(r30)
    mr r4, r3
    lfs f0, 0x530(r5)
    lfs f4, 0x528(r30)
    lfs f3, 0x528(r5)
    fsubs f5, f5, f0
    lfs f0, lbl_80884A20
    fsubs f3, f4, f3
    stfs f5, 0xc4(r1)
    stfs f3, 0xbc(r1)
    stfs f0, 0xc0(r1)
    bl fn_805F98D0
    lwz r5, 0x1518(r30)
    cmpwi r5, 0x0
    beq lbl_fn_802FDDAC_00001148
    lfs f5, 0x1610(r30)
    addi r3, r1, 0xb0
    lfs f0, 0xc(r5)
    mr r4, r3
    lfs f4, 0x1608(r30)
    lfs f3, 0x4(r5)
    fsubs f5, f5, f0
    lfs f0, lbl_80884A20
    fsubs f3, f4, f3
    stfs f5, 0xb8(r1)
    stfs f3, 0xb0(r1)
    stfs f0, 0xb4(r1)
    bl fn_805F98D0
    addi r3, r1, 0xb0
    addi r4, r1, 0xbc
    bl fn_805F9990
    fabs f3, f1
    lfs f0, lbl_80884A80
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802FDDAC_00001148
    lfs f0, lbl_80884A20
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_802FDDAC_0000108C
    lfs f4, lbl_80884A5C
    b lbl_fn_802FDDAC_00001090
lbl_fn_802FDDAC_0000108C:
    lfs f4, lbl_80884A78
lbl_fn_802FDDAC_00001090:
    lfs f0, lbl_80884A20
    lfs f3, 0xb8(r1)
    fcmpo cr0, f1, f0
    fmuls f6, f3, f4
    cror eq, gt, eq
    bne lbl_fn_802FDDAC_000010B0
    lfs f4, lbl_80884A5C
    b lbl_fn_802FDDAC_000010B4
lbl_fn_802FDDAC_000010B0:
    lfs f4, lbl_80884A78
lbl_fn_802FDDAC_000010B4:
    lfs f0, lbl_80884A20
    lfs f3, 0xb4(r1)
    fcmpo cr0, f1, f0
    fmuls f7, f3, f4
    cror eq, gt, eq
    bne lbl_fn_802FDDAC_000010D4
    lfs f5, lbl_80884A5C
    b lbl_fn_802FDDAC_000010D8
lbl_fn_802FDDAC_000010D4:
    lfs f5, lbl_80884A78
lbl_fn_802FDDAC_000010D8:
    lfs f3, 0xb0(r1)
    addi r3, r1, 0xbc
    lfs f0, 0xc4(r1)
    addi r5, r1, 0xa4
    fmuls f8, f3, f5
    lfs f4, lbl_80884A84
    lfs f3, 0xc0(r1)
    mr r4, r3
    fmuls f5, f0, f4
    lfs f0, 0xbc(r1)
    fmuls f3, f3, f4
    stfs f7, 0x90(r1)
    fmuls f0, f0, f4
    fadds f2, f5, f6
    stfs f8, 0x8c(r1)
    fadds f4, f3, f7
    fadds f7, f0, f8
    stfs f6, 0x94(r1)
    stfs f4, 0xa8(r1)
    stfs f7, 0xa4(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f0, 0x98(r1)
    stfs f3, 0x9c(r1)
    stfs f5, 0xa0(r1)
    stfs f2, 0xac(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0xc4(r1)
    bl fn_805F98D0
lbl_fn_802FDDAC_00001148:
    lfs f2, 0xc4(r1)
    addi r3, r1, 0xbc
    lfs f0, lbl_80884A64
    addi r31, r1, 0x80
    fabs f3, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    frsp f3, f3
    stfs f2, 0x88(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_802FDDAC_00001198
    lfs f3, 0x80(r1)
    lfs f0, lbl_80884A20
    fcmpo cr0, f3, f0
    ble lbl_fn_802FDDAC_0000118C
    lfs f0, lbl_80884A68
    b lbl_fn_802FDDAC_00001190
lbl_fn_802FDDAC_0000118C:
    lfs f0, lbl_80884A6C
lbl_fn_802FDDAC_00001190:
    stfs f0, 0x78(r1)
    b lbl_fn_802FDDAC_000011AC
lbl_fn_802FDDAC_00001198:
    frsp f2, f2
    lfs f1, 0x80(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x78(r1)
lbl_fn_802FDDAC_000011AC:
    lfs f0, 0x78(r1)
    addi r3, r1, 0xc8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80884A20
    addi r4, r1, 0x68
    lfs f30, 0xd0(r1)
    mr r5, r4
    lfs f31, 0xcc(r1)
    addi r3, r1, 0xf8
    lfs f13, 0xc8(r1)
    lfs f12, 0xe0(r1)
    lfs f11, 0xdc(r1)
    lfs f10, 0xd8(r1)
    lfs f9, 0xf0(r1)
    lfs f8, 0xec(r1)
    lfs f7, 0xe8(r1)
    lfs f6, 0xf4(r1)
    lfs f5, 0xe4(r1)
    lfs f4, 0xd4(r1)
    lfs f0, lbl_80884A5C
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x88(r1)
    stfs f3, 0x128(r1)
    stfs f3, 0x12c(r1)
    stfs f3, 0x130(r1)
    stfs f0, 0x134(r1)
    stfs f13, 0x38(r1)
    stfs f31, 0x3c(r1)
    stfs f30, 0x40(r1)
    stfs f13, 0xf8(r1)
    stfs f31, 0xfc(r1)
    stfs f30, 0x100(r1)
    stfs f10, 0x44(r1)
    stfs f11, 0x48(r1)
    stfs f12, 0x4c(r1)
    stfs f10, 0x108(r1)
    stfs f11, 0x10c(r1)
    stfs f12, 0x110(r1)
    stfs f7, 0x50(r1)
    stfs f8, 0x54(r1)
    stfs f9, 0x58(r1)
    stfs f7, 0x118(r1)
    stfs f8, 0x11c(r1)
    stfs f9, 0x120(r1)
    stfs f4, 0x5c(r1)
    stfs f5, 0x60(r1)
    stfs f6, 0x64(r1)
    stfs f4, 0x104(r1)
    stfs f5, 0x114(r1)
    stfs f6, 0x124(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x70(r1)
    bl fn_805F9750
    lfs f2, 0x70(r1)
    lfs f0, lbl_80884A64
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_802FDDAC_000012C8
    lfs f3, 0x6c(r1)
    lfs f0, lbl_80884A20
    fcmpo cr0, f3, f0
    ble lbl_fn_802FDDAC_000012B8
    lfs f0, lbl_80884A68
    b lbl_fn_802FDDAC_000012BC
lbl_fn_802FDDAC_000012B8:
    lfs f0, lbl_80884A6C
lbl_fn_802FDDAC_000012BC:
    fneg f0, f0
    stfs f0, 0x74(r1)
    b lbl_fn_802FDDAC_000012DC
lbl_fn_802FDDAC_000012C8:
    lfs f1, 0x6c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x74(r1)
lbl_fn_802FDDAC_000012DC:
    addi r3, r1, 0x74
    lfs f0, lbl_80884A20
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r30, 0x15cc
    psq_st f1, 0x0(r3), 0, 0
    fmr f2, f0
    lis r3, lbl_807489F8@ha
    lfs f3, 0x15d0(r30)
    psq_st f1, 0x0(r31), 0, 0
    fmr f1, f3
    stfs f2, 0x88(r1)
    lfd f2, lbl_807489F8@l(r3)
    stfs f0, 0x7c(r1)
    stfs f0, 0x15cc(r30)
    stfs f0, 0x15d4(r30)
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_80884A88
    fcmpo cr0, f3, f0
    ble lbl_fn_802FDDAC_00001334
    lfs f0, lbl_80884A8C
    fsubs f3, f3, f0
lbl_fn_802FDDAC_00001334:
    lfs f0, lbl_80884A90
    fcmpo cr0, f3, f0
    bge lbl_fn_802FDDAC_00001348
    lfs f0, lbl_80884A8C
    fadds f3, f3, f0
lbl_fn_802FDDAC_00001348:
    stfs f3, 0x15d0(r30)
    mr r3, r30
    bl fn_80300AD8
lbl_fn_802FDDAC_00001354:
    lfs f0, lbl_80884A20
    li r0, -0x1
    lfs f1, lbl_80884A5C
    li r31, 0x1
    stfs f0, 0x1c(r1)
    addi r4, r30, 0x1594
    addi r5, r30, 0xb0
    addi r7, r1, 0x10
    stfs f0, 0x20(r1)
    addi r8, r1, 0x1c
    addi r9, r1, 0x28
    li r6, 0x0
    stfs f0, 0x24(r1)
    li r10, -0x1
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f1, 0x28(r1)
    stfs f1, 0x2c(r1)
    stfs f1, 0x30(r1)
    stfs f1, 0x34(r1)
    stw r0, 0x8(r1)
    stw r31, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    stw r31, 0x14f8(r30)
    b lbl_fn_802FDDAC_000014A8
lbl_fn_802FDDAC_000013C0:
    lwz r0, 0x58c(r3)
    cmpwi r0, 0xc
    bne lbl_fn_802FDDAC_0000145C
    lwz r0, 0x14f0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_802FDDAC_000013F0
    cmpwi r0, 0x1
    bne lbl_fn_802FDDAC_0000145C
    lfs f3, 0x2e4(r3)
    lfs f0, lbl_80884A30
    fcmpo cr0, f3, f0
    bge lbl_fn_802FDDAC_0000145C
lbl_fn_802FDDAC_000013F0:
    lfs f1, lbl_80884A20
    li r0, 0x2
    lfs f4, 0x10(r4)
    li r5, 0x38
    lwz r6, 0xc(r4)
    li r7, 0x1
    fmuls f5, f4, f1
    lfs f3, 0x14(r4)
    ori r6, r6, 0x80
    stw r6, 0xc(r4)
    fmuls f4, f3, f1
    lfs f0, 0x18(r4)
    fmuls f3, f0, f1
    stfs f5, 0x10(r4)
    lfs f0, lbl_80884A5C
    li r6, 0x0
    stfs f4, 0x14(r4)
    li r8, 0x1
    stfs f3, 0x18(r4)
    li r4, 0x1
    lfs f2, lbl_80884A60
    stw r0, 0x3fc(r3)
    stfs f0, 0x32c(r3)
    stfs f0, 0x318(r3)
    addi r3, r3, 0xb0
    bl fn_80097C08
    b lbl_fn_802FDDAC_00001484
lbl_fn_802FDDAC_0000145C:
    lfs f4, 0x10(r4)
    lfs f5, lbl_80884A20
    lfs f3, 0x14(r4)
    lfs f0, 0x18(r4)
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    fmuls f0, f0, f5
    stfs f4, 0x10(r4)
    stfs f3, 0x14(r4)
    stfs f0, 0x18(r4)
lbl_fn_802FDDAC_00001484:
    mr r3, r30
    mr r4, r31
    bl fn_80151448
    lwz r12, 0x0(r30)
    mr r3, r30
    mr r4, r31
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
lbl_fn_802FDDAC_000014A8:
    lwz r0, 0x164(r1)
    psq_l f31, 0x158(r1), 0, 0
    lfd f31, 0x150(r1)
    psq_l f30, 0x148(r1), 0, 0
    lfd f30, 0x140(r1)
    lwz r31, 0x13c(r1)
    lwz r30, 0x138(r1)
    mtlr r0
    addi r1, r1, 0x160
    blr
}

asm void fn_802FE3E4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r6, lbl_80748A00@ha
    stw r0, 0x24(r1)
    lfd f2, lbl_80748A00@l(r6)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    lwz r5, 0x68(r4)
    lis r4, 0x4330
    lwz r0, 0x55c(r3)
    xoris r5, r5, 0x8000
    stw r5, 0xc(r1)
    lfs f0, 0x14fc(r3)
    cmpwi r0, 0x6
    stw r4, 0x8(r1)
    lfd f1, 0x8(r1)
    fsubs f1, f1, f2
    fadds f0, f0, f1
    stfs f0, 0x14fc(r3)
    bne lbl_fn_802FE3E4_0000155C
    lwz r0, 0x560(r3)
    cmpwi r0, 0x16
    bne lbl_fn_802FE3E4_0000155C
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x1
    beq lbl_fn_802FE3E4_0000154C
    cmpwi r0, 0x6
    beq lbl_fn_802FE3E4_0000154C
    cmpwi r0, 0x8
    bne lbl_fn_802FE3E4_0000155C
lbl_fn_802FE3E4_0000154C:
    li r0, 0x0
    stw r0, 0x58c(r3)
    stw r0, 0x14f0(r3)
    stw r0, 0x14f4(r3)
lbl_fn_802FE3E4_0000155C:
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_802FE3E4_00001704
    lwz r0, 0x58c(r3)
    cmpwi r0, 0xc
    bne lbl_fn_802FE3E4_00001640
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x14f0(r30)
    stw r0, 0x14f4(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80884A20
    li r4, 0x2
    bl fn_80097CCC
    li r0, 0x2
    stw r0, 0x58c(r30)
    mr r3, r30
    li r4, 0x3
    bl fn_8016E970
    lfs f0, lbl_80884A5C
    li r31, 0x1
    stw r31, 0x3fc(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80884A20
    li r4, 0x0
    stfs f0, 0x2fc(r30)
    li r5, 0x37
    lfs f2, lbl_80884A60
    li r6, 0x0
    stfs f0, 0x2e8(r30)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80884A20
    li r4, 0xd0
    stb r31, 0x1684(r30)
    li r5, 0x1
    li r6, 0x0
    stfs f0, 0x1688(r30)
    lwz r3, lbl_8087F430
    bl fn_80370320
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x131
    li r6, 0x1
    bl fn_80239DAC
    mr r3, r30
    bl fn_800EB7A0
    b lbl_fn_802FE3E4_00001704
lbl_fn_802FE3E4_00001640:
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x190
    li r6, 0x1
    bl fn_80239DAC
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
    li r31, 0x0
    stw r31, 0x14f0(r30)
    stw r31, 0x14f4(r30)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80884A20
    li r4, 0x2
    bl fn_80097CCC
    li r0, 0x2
    stw r0, 0x58c(r30)
    mr r3, r30
    li r4, 0x3
    bl fn_8016E970
    lfs f0, lbl_80884A5C
    li r0, 0x1
    stw r0, 0x3fc(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80884A20
    li r4, 0x0
    stfs f0, 0x2fc(r30)
    li r5, 0x2e
    lfs f2, lbl_80884A60
    li r6, 0x0
    stfs f0, 0x2e8(r30)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80884A20
    li r4, 0xd0
    stb r31, 0x1684(r30)
    li r5, 0x1
    li r6, 0x0
    stfs f0, 0x1688(r30)
    lwz r3, lbl_8087F430
    bl fn_80370320
    mr r3, r30
    bl fn_800EB7A0
lbl_fn_802FE3E4_00001704:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_802FE630(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    lfs f5, lbl_80884A20
    li r4, 0x4
    stw r0, 0x64(r1)
    addi r5, r1, 0x8
    fmr f2, f5
    lfs f4, lbl_80884A34
    stw r31, 0x5c(r1)
    addi r6, r1, 0x3c
    addi r7, r1, 0x2c
    mr r31, r3
    stw r30, 0x58(r1)
    stw r29, 0x54(r1)
    lfs f3, 0x52c(r3)
    lfs f0, 0x5a8(r3)
    lwz r0, 0x62c(r3)
    fadds f6, f3, f0
    lfs f3, 0x528(r3)
    lfs f0, 0x5a4(r3)
    cmpwi r0, 0x0
    stfs f5, 0x8(r1)
    fadds f7, f3, f0
    stfs f5, 0xc(r1)
    lfs f3, 0x530(r3)
    psq_l f1, 0x0(r5), 0, 0
    lfs f0, 0x5ac(r3)
    stfs f7, 0x2c(r1)
    fadds f3, f3, f0
    stfs f2, 0x44(r1)
    fmr f2, f3
    stfs f6, 0x30(r1)
    psq_st f1, 0x0(r6), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    lfs f0, 0x40(r1)
    stfs f5, 0x10(r1)
    fadds f0, f0, f4
    stfs f4, 0x48(r1)
    stfs f3, 0x34(r1)
    stfs f2, 0x44(r1)
    stfs f0, 0x40(r1)
    stw r4, 0x38(r1)
    beq lbl_fn_802FE630_000017D8
    lwz r0, 0x628(r3)
    cmpwi r0, 0x0
    bne lbl_fn_802FE630_00001978
lbl_fn_802FE630_000017D8:
    lwz r0, 0x628(r3)
    li r30, 0x8
    cmplwi r0, 0x8
    bgt lbl_fn_802FE630_00001B20
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
    beq lbl_fn_802FE630_0000196C
    lwz r0, 0x624(r31)
    li r5, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_802FE630_0000183C
    mr r5, r0
lbl_fn_802FE630_0000183C:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_802FE630_00001958
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_802FE630_00001920
lbl_fn_802FE630_00001854:
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
    bdnz lbl_fn_802FE630_00001854
    andi. r5, r5, 0x3
    beq lbl_fn_802FE630_00001958
lbl_fn_802FE630_00001920:
    mtctr r5
lbl_fn_802FE630_00001924:
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
    bdnz lbl_fn_802FE630_00001924
lbl_fn_802FE630_00001958:
    lwz r3, 0x62c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802FE630_0000196C
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_802FE630_0000196C:
    stw r29, 0x62c(r31)
    stw r30, 0x628(r31)
    b lbl_fn_802FE630_00001B20
lbl_fn_802FE630_00001978:
    lwz r3, 0x624(r3)
    cmplw r3, r0
    blt lbl_fn_802FE630_00001B20
    slwi r30, r3, 1
    cmplw r0, r30
    bgt lbl_fn_802FE630_00001B20
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
    beq lbl_fn_802FE630_00001B18
    lwz r0, 0x624(r31)
    mr r5, r30
    cmplw r30, r0
    ble lbl_fn_802FE630_000019E8
    mr r5, r0
lbl_fn_802FE630_000019E8:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_802FE630_00001B04
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_802FE630_00001ACC
lbl_fn_802FE630_00001A00:
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
    bdnz lbl_fn_802FE630_00001A00
    andi. r5, r5, 0x3
    beq lbl_fn_802FE630_00001B04
lbl_fn_802FE630_00001ACC:
    mtctr r5
lbl_fn_802FE630_00001AD0:
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
    bdnz lbl_fn_802FE630_00001AD0
lbl_fn_802FE630_00001B04:
    lwz r3, 0x62c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802FE630_00001B18
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_802FE630_00001B18:
    stw r29, 0x62c(r31)
    stw r30, 0x628(r31)
lbl_fn_802FE630_00001B20:
    lwz r0, 0x624(r31)
    addi r3, r1, 0x3c
    psq_l f1, 0x0(r3), 0, 0
    lis r4, lbl_80748A14@ha
    mulli r5, r0, 0x14
    lwz r6, 0x62c(r31)
    lwz r0, 0x38(r1)
    addi r4, r4, lbl_80748A14@l
    lfs f2, 0x44(r1)
    addi r3, r31, 0xb0
    stwux r0, r6, r5
    addi r4, r4, 0x169
    lfs f0, 0x48(r1)
    li r5, 0x0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    stfs f0, 0x10(r6)
    lwz r6, 0x624(r31)
    lfs f0, 0x16ec(r31)
    addi r0, r6, 0x1
    stw r0, 0x624(r31)
    stfs f0, 0x48(r1)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802FE630_00001B8C
    li r6, 0x0
    b lbl_fn_802FE630_00001B98
lbl_fn_802FE630_00001B8C:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r6, r3, r0
lbl_fn_802FE630_00001B98:
    lfs f0, 0x1c(r6)
    li r0, 0x2
    lfs f3, 0xc(r6)
    ori r3, r0, 0x9
    stfs f0, 0x24(r1)
    addi r5, r1, 0x20
    addi r4, r1, 0x3c
    lfs f2, 0x2c(r6)
    stfs f3, 0x20(r1)
    lwz r0, 0x62c(r31)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    cmpwi r0, 0x0
    lfs f0, 0x16f0(r31)
    lfs f3, 0x40(r1)
    stfs f2, 0x28(r1)
    fadds f0, f3, f0
    stfs f2, 0x44(r1)
    stfs f0, 0x40(r1)
    stw r3, 0x38(r1)
    beq lbl_fn_802FE630_00001BF8
    lwz r0, 0x628(r31)
    cmpwi r0, 0x0
    bne lbl_fn_802FE630_00001D98
lbl_fn_802FE630_00001BF8:
    lwz r0, 0x628(r31)
    li r30, 0x8
    cmplwi r0, 0x8
    bgt lbl_fn_802FE630_00001F40
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
    beq lbl_fn_802FE630_00001D8C
    lwz r0, 0x624(r31)
    li r5, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_802FE630_00001C5C
    mr r5, r0
lbl_fn_802FE630_00001C5C:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_802FE630_00001D78
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_802FE630_00001D40
lbl_fn_802FE630_00001C74:
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
    bdnz lbl_fn_802FE630_00001C74
    andi. r5, r5, 0x3
    beq lbl_fn_802FE630_00001D78
lbl_fn_802FE630_00001D40:
    mtctr r5
lbl_fn_802FE630_00001D44:
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
    bdnz lbl_fn_802FE630_00001D44
lbl_fn_802FE630_00001D78:
    lwz r3, 0x62c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802FE630_00001D8C
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_802FE630_00001D8C:
    stw r29, 0x62c(r31)
    stw r30, 0x628(r31)
    b lbl_fn_802FE630_00001F40
lbl_fn_802FE630_00001D98:
    lwz r3, 0x624(r31)
    cmplw r3, r0
    blt lbl_fn_802FE630_00001F40
    slwi r30, r3, 1
    cmplw r0, r30
    bgt lbl_fn_802FE630_00001F40
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
    beq lbl_fn_802FE630_00001F38
    lwz r0, 0x624(r31)
    mr r5, r30
    cmplw r30, r0
    ble lbl_fn_802FE630_00001E08
    mr r5, r0
lbl_fn_802FE630_00001E08:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_802FE630_00001F24
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_802FE630_00001EEC
lbl_fn_802FE630_00001E20:
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
    bdnz lbl_fn_802FE630_00001E20
    andi. r5, r5, 0x3
    beq lbl_fn_802FE630_00001F24
lbl_fn_802FE630_00001EEC:
    mtctr r5
lbl_fn_802FE630_00001EF0:
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
    bdnz lbl_fn_802FE630_00001EF0
lbl_fn_802FE630_00001F24:
    lwz r3, 0x62c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802FE630_00001F38
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_802FE630_00001F38:
    stw r29, 0x62c(r31)
    stw r30, 0x628(r31)
lbl_fn_802FE630_00001F40:
    lwz r0, 0x624(r31)
    addi r3, r1, 0x3c
    psq_l f1, 0x0(r3), 0, 0
    lis r4, lbl_80748A14@ha
    mulli r5, r0, 0x14
    lwz r6, 0x62c(r31)
    lwz r0, 0x38(r1)
    addi r4, r4, lbl_80748A14@l
    lfs f2, 0x44(r1)
    addi r3, r31, 0xb0
    stwux r0, r6, r5
    addi r4, r4, 0x169
    lfs f0, 0x48(r1)
    li r5, 0x0
    psq_st f1, 0x4(r6), 0, 0
    lfs f3, lbl_80884A98
    stfs f2, 0xc(r6)
    stfs f0, 0x10(r6)
    lfs f0, 0x16ec(r31)
    lwz r6, 0x624(r31)
    fmuls f0, f3, f0
    addi r0, r6, 0x1
    stw r0, 0x624(r31)
    stfs f0, 0x48(r1)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802FE630_00001FB4
    li r6, 0x0
    b lbl_fn_802FE630_00001FC0
lbl_fn_802FE630_00001FB4:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r6, r3, r0
lbl_fn_802FE630_00001FC0:
    lfs f0, 0x1c(r6)
    li r0, 0x1
    lfs f3, 0xc(r6)
    ori r3, r0, 0xc
    stfs f3, 0x14(r1)
    addi r5, r1, 0x14
    addi r4, r1, 0x3c
    lfs f2, 0x2c(r6)
    stfs f0, 0x18(r1)
    lwz r0, 0x62c(r31)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    cmpwi r0, 0x0
    lfs f4, lbl_80884A98
    lfs f3, 0x16f0(r31)
    lfs f0, 0x40(r1)
    stfs f2, 0x1c(r1)
    fmadds f0, f4, f3, f0
    stfs f2, 0x44(r1)
    stfs f0, 0x40(r1)
    stw r3, 0x38(r1)
    beq lbl_fn_802FE630_00002024
    lwz r0, 0x628(r31)
    cmpwi r0, 0x0
    bne lbl_fn_802FE630_000021C4
lbl_fn_802FE630_00002024:
    lwz r0, 0x628(r31)
    li r30, 0x8
    cmplwi r0, 0x8
    bgt lbl_fn_802FE630_0000236C
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
    beq lbl_fn_802FE630_000021B8
    lwz r0, 0x624(r31)
    li r5, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_802FE630_00002088
    mr r5, r0
lbl_fn_802FE630_00002088:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_802FE630_000021A4
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_802FE630_0000216C
lbl_fn_802FE630_000020A0:
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
    bdnz lbl_fn_802FE630_000020A0
    andi. r5, r5, 0x3
    beq lbl_fn_802FE630_000021A4
lbl_fn_802FE630_0000216C:
    mtctr r5
lbl_fn_802FE630_00002170:
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
    bdnz lbl_fn_802FE630_00002170
lbl_fn_802FE630_000021A4:
    lwz r3, 0x62c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802FE630_000021B8
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_802FE630_000021B8:
    stw r29, 0x62c(r31)
    stw r30, 0x628(r31)
    b lbl_fn_802FE630_0000236C
lbl_fn_802FE630_000021C4:
    lwz r3, 0x624(r31)
    cmplw r3, r0
    blt lbl_fn_802FE630_0000236C
    slwi r30, r3, 1
    cmplw r0, r30
    bgt lbl_fn_802FE630_0000236C
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
    beq lbl_fn_802FE630_00002364
    lwz r0, 0x624(r31)
    mr r5, r30
    cmplw r30, r0
    ble lbl_fn_802FE630_00002234
    mr r5, r0
lbl_fn_802FE630_00002234:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_802FE630_00002350
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_802FE630_00002318
lbl_fn_802FE630_0000224C:
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
    bdnz lbl_fn_802FE630_0000224C
    andi. r5, r5, 0x3
    beq lbl_fn_802FE630_00002350
lbl_fn_802FE630_00002318:
    mtctr r5
lbl_fn_802FE630_0000231C:
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
    bdnz lbl_fn_802FE630_0000231C
lbl_fn_802FE630_00002350:
    lwz r3, 0x62c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802FE630_00002364
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_802FE630_00002364:
    stw r29, 0x62c(r31)
    stw r30, 0x628(r31)
lbl_fn_802FE630_0000236C:
    lwz r0, 0x624(r31)
    addi r5, r1, 0x3c
    lwz r4, 0x62c(r31)
    mulli r3, r0, 0x14
    lwz r0, 0x38(r1)
    stwux r0, r3, r4
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x4(r3), 0, 0
    lfs f2, 0x44(r1)
    stfs f2, 0xc(r3)
    lfs f0, 0x48(r1)
    stfs f0, 0x10(r3)
    lwz r3, 0x624(r31)
    lwz r0, 0x12a8(r31)
    addi r3, r3, 0x1
    stw r3, 0x624(r31)
    rlwinm r0, r0, 0, 3, 1
    stw r0, 0x12a8(r31)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}
