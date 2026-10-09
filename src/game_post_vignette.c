#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void dtor_80084684(void);
extern void fn_8000D430(void);
extern void fn_80056E40(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_8008771C(void);
extern void fn_80087994(void);
extern void fn_8008937C(void);
extern void fn_800897D8(void);
extern void fn_80092814(void);
extern void fn_80097C08(void);
extern void fn_80097D7C(void);
extern void fn_800BFAC8(void);
extern void fn_800D246C(void);
extern void fn_800D3FA4(void);
extern void fn_800DC6B4(void);
extern void fn_800F8548(void);
extern void fn_801031D0(void);
extern void fn_8013655C(void);
extern void fn_80144710(void);
extern void fn_80145334(void);
extern void fn_80148990(void);
extern void fn_80148B38(void);
extern void fn_80149A30(void);
extern void fn_8014C540(void);
extern void fn_80151448(void);
extern void fn_8016E970(void);
extern void fn_80170A20(void);
extern void fn_80178A6C(void);
extern void fn_801F3FF8(void);
extern void fn_801FED24(void);
extern void fn_801FEE08(void);
extern void fn_80219E6C(void);
extern void fn_802375C4(void);
extern void fn_8023781C(void);
extern void fn_802C9880(void);
extern void fn_802C9BF8(void);
extern void fn_802CA490(void);
extern void fn_802CA8C0(void);
extern void fn_802CAFB8(void);
extern void fn_802CB1CC(void);
extern void fn_802CB43C(void);
extern void fn_802CB74C(void);
extern void fn_802CB8A0(void);
extern void fn_802CC39C(void);
extern void fn_802CC708(void);
extern void fn_8035B694(void);
extern void fn_8035B78C(void);
extern void fn_80473E8C(void);
extern void fn_8059B670(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_80695720(void);

/* External data declarations */
extern u8 jumptable_80786820[];
extern u8 lbl_80746DD0[];
extern u8 lbl_80746DEC[];
extern u8 lbl_80786860[];
extern u8 lbl_807C83A8[];

/* Small data declarations */
extern u32 lbl_8087D9E0;
extern u32 lbl_8087D9E4;
extern u32 lbl_8087EF10;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F048;
extern u32 lbl_8087F1E4;
extern u32 lbl_8087F430;
extern u32 lbl_8087F8A0;
extern u32 lbl_8087F9E8;
extern u32 lbl_808813D0;
extern u32 lbl_80884330;
extern u32 lbl_808843CC;
extern u32 lbl_808843E0;
extern u32 lbl_808843E4;
extern u32 lbl_808843E8;
extern u32 lbl_808843EC;
extern u32 lbl_808843F0;
extern u32 lbl_808843F4;
extern u32 lbl_808843F8;
extern u32 lbl_808843FC;
extern u32 lbl_80884400;
extern u32 lbl_80884404;
extern u32 lbl_80884408;
extern u32 lbl_8088440C;
extern u32 lbl_80884410;
extern u32 lbl_80884414;
extern u32 lbl_80884418;
extern u32 lbl_8088441C;
extern u32 lbl_80884420;
extern u32 lbl_80884424;
extern u32 lbl_80884428;

/* Function declarations */
void fn_802C7A60(void);
void fn_802C7AA0(void);
void fn_802C7AA8(void);
void fn_802C7BC8(void);
void fn_802C7BE4(void);
void fn_802C7CBC(void);
void fn_802C7D3C(void);
void fn_802C7F10(void);
void fn_802C85B0(void);
void fn_802C881C(void);
void fn_802C8930(void);
void fn_802C8A68(void);
void fn_802C92D4(void);
void fn_802C9388(void);

asm void fn_802C7A60(void)
{
    nofralloc
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x3
    bne lbl_fn_802C7A60_00000038
    lfs f1, 0x2e4(r3)
    lfs f0, lbl_808843CC
    fcmpo cr0, f0, f1
    cror eq, lt, eq
    bne lbl_fn_802C7A60_00000038
    lfs f0, lbl_808843E0
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_802C7A60_00000038
    li r3, 0x1
    blr
lbl_fn_802C7A60_00000038:
    li r3, 0x0
    blr
}

asm void fn_802C7AA0(void)
{
    nofralloc
    lfs f1, lbl_80884330
    blr
}

asm void fn_802C7AA8(void)
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
    beq lbl_fn_802C7AA8_00000148
    addic. r0, r3, 0x170c
    beq lbl_fn_802C7AA8_00000094
    lwz r4, 0x170c(r3)
    cmpwi r4, 0x0
    beq lbl_fn_802C7AA8_00000094
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_802C7AA8_00000094
    bl fn_800897D8
lbl_fn_802C7AA8_00000094:
    addi r3, r29, 0x16f4
    li r4, -0x1
    bl fn_802375C4
    addic. r31, r29, 0x16b0
    beq lbl_fn_802C7AA8_000000C0
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_802C7AA8_000000C0
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802C7AA8_000000C0:
    addic. r31, r29, 0x16a4
    beq lbl_fn_802C7AA8_000000E0
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_802C7AA8_000000E0
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802C7AA8_000000E0:
    addic. r3, r29, 0x164c
    beq lbl_fn_802C7AA8_000000F0
    li r4, 0x0
    bl fn_80056E40
lbl_fn_802C7AA8_000000F0:
    addic. r3, r29, 0x1600
    beq lbl_fn_802C7AA8_00000100
    li r4, 0x0
    bl fn_80056E40
lbl_fn_802C7AA8_00000100:
    addic. r31, r29, 0x1578
    beq lbl_fn_802C7AA8_00000120
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_802C7AA8_00000120
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802C7AA8_00000120:
    addi r3, r29, 0x156c
    li r4, -0x1
    bl fn_802375C4
    mr r3, r29
    li r4, 0x0
    bl fn_8035B78C
    cmpwi r30, 0x0
    ble lbl_fn_802C7AA8_00000148
    mr r3, r29
    bl dtor_80084684
lbl_fn_802C7AA8_00000148:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_802C7BC8(void)
{
    nofralloc
    lis r4, lbl_807C83A8@ha
    lfs f0, lbl_808843E4
    addi r3, r4, lbl_807C83A8@l
    stfs f0, lbl_807C83A8@l(r4)
    stfs f0, 0x4(r3)
    stfs f0, 0x8(r3)
    blr
}

asm void fn_802C7BE4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_8035B694
    lwz r0, 0x12a4(r31)
    li r8, 0x0
    lfs f2, lbl_808843E8
    lis r3, lbl_80786860@ha
    li r7, 0x1
    lfs f1, lbl_808843EC
    lfs f0, lbl_808843F0
    addi r3, r3, lbl_80786860@l
    oris r0, r0, 0x40
    li r6, -0x1
    lis r4, lbl_80746DEC@ha
    stw r3, 0x0(r31)
    mr r3, r31
    li r5, 0x0
    stw r8, 0x14b8(r31)
    addi r4, r4, lbl_80746DEC@l
    stw r8, 0x14bc(r31)
    stw r7, 0x14c0(r31)
    stw r8, 0x14c4(r31)
    stw r8, 0x14c8(r31)
    stfs f2, 0x14cc(r31)
    stw r8, 0x14d0(r31)
    stw r8, 0x14d4(r31)
    stw r8, 0x14d8(r31)
    stw r8, 0x150c(r31)
    stw r6, 0x1510(r31)
    stw r8, 0x1514(r31)
    stw r8, 0x1528(r31)
    stw r7, 0x152c(r31)
    stfs f2, 0x1530(r31)
    stfs f2, 0x1534(r31)
    stfs f2, 0x1538(r31)
    stw r7, 0x153c(r31)
    stw r8, 0x1548(r31)
    stw r8, 0x154c(r31)
    stfs f1, 0x1550(r31)
    stfs f0, 0x1554(r31)
    stw r0, 0x12a4(r31)
    bl fn_801F3FF8
    stw r3, 0x1540(r31)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802C7CBC(void)
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
    beq lbl_fn_802C7CBC_000002C0
    addic. r0, r3, 0x1548
    beq lbl_fn_802C7CBC_000002A4
    lwz r4, 0x1548(r3)
    cmpwi r4, 0x0
    beq lbl_fn_802C7CBC_000002A4
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_802C7CBC_000002A4
    bl fn_800897D8
lbl_fn_802C7CBC_000002A4:
    mr r3, r30
    li r4, 0x0
    bl fn_8035B78C
    cmpwi r31, 0x0
    ble lbl_fn_802C7CBC_000002C0
    mr r3, r30
    bl dtor_80084684
lbl_fn_802C7CBC_000002C0:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802C7D3C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    li r29, 0x1
    bl fn_8013655C
    cmpwi r3, 0x0
    bne lbl_fn_802C7D3C_00000334
    lwz r3, 0x1438(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802C7D3C_00000324
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_802C7D3C_00000334
lbl_fn_802C7D3C_00000324:
    mr r3, r31
    bl fn_800D3FA4
    cmpwi r3, 0x0
    bne lbl_fn_802C7D3C_00000338
lbl_fn_802C7D3C_00000334:
    li r29, 0x0
lbl_fn_802C7D3C_00000338:
    cmpwi r29, 0x0
    beq lbl_fn_802C7D3C_00000490
    lwz r4, 0x7ec(r31)
    lis r3, lbl_80746DEC@ha
    lwz r0, 0x1548(r31)
    addi r3, r3, lbl_80746DEC@l
    ori r4, r4, 0x1c0
    oris r4, r4, 0x1
    cmpwi r0, 0x0
    ori r0, r4, 0xc21d
    oris r0, r0, 0x380
    stw r0, 0x7ec(r31)
    addi r4, r3, 0x13
    bne lbl_fn_802C7D3C_00000390
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_802C7D3C_00000390
    addi r3, r3, 0x10
    bl fn_8008937C
    stw r3, 0x1548(r31)
    mr r29, r3
    b lbl_fn_802C7D3C_00000394
lbl_fn_802C7D3C_00000390:
    li r29, 0x0
lbl_fn_802C7D3C_00000394:
    lis r30, lbl_80746DEC@ha
    mr r3, r29
    addi r30, r30, lbl_80746DEC@l
    addi r5, r31, 0x154c
    addi r4, r30, 0x19
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    lfs f1, lbl_808843E8
    mr r3, r29
    lfs f2, lbl_808843F4
    addi r4, r30, 0x23
    lfs f3, lbl_808843F8
    addi r5, r31, 0x1550
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_808843E8
    mr r3, r29
    lfs f2, lbl_808843F4
    addi r4, r30, 0x2f
    lfs f3, lbl_808843F8
    addi r5, r31, 0x1554
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_808843E8
    mr r3, r29
    lfs f2, lbl_808843F4
    addi r4, r30, 0x3d
    lfs f3, lbl_808843F8
    addi r5, r31, 0x14cc
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lwz r3, 0x1438(r31)
    li r0, 0x1
    lfs f0, lbl_808843E8
    cmpwi r3, 0x0
    stw r0, 0x14c0(r31)
    stfs f0, 0x14cc(r31)
    beq lbl_fn_802C7D3C_00000454
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x1438(r31)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_802C7D3C_00000454:
    lwz r3, 0x1540(r31)
    li r4, 0x0
    bl fn_800D246C
    lwz r5, 0x1540(r31)
    li r0, 0x1
    li r3, 0x1
    lwz r4, 0x38(r5)
    ori r4, r4, 0x4
    stw r4, 0x38(r5)
    lwz r5, 0x1540(r31)
    lwz r4, 0xfc(r5)
    rlwinm r4, r4, 0, 4, 2
    stw r4, 0xfc(r5)
    stw r0, 0x10d0(r31)
    b lbl_fn_802C7D3C_00000494
lbl_fn_802C7D3C_00000490:
    li r3, 0x0
lbl_fn_802C7D3C_00000494:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_802C7F10(void)
{
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    stw r0, 0xd4(r1)
    stfd f31, 0xc0(r1)
    psq_st f31, 0xc8(r1), 0, 0
    stw r31, 0xbc(r1)
    mr r31, r3
    stw r30, 0xb8(r1)
    lwz r0, 0x58c(r3)
    cmpwi r0, 0xf
    bne lbl_fn_802C7F10_000004E8
    lfs f0, lbl_808843FC
    stfs f0, 0x56c(r3)
    b lbl_fn_802C7F10_000004F0
lbl_fn_802C7F10_000004E8:
    lfs f0, lbl_808843F8
    stfs f0, 0x56c(r3)
lbl_fn_802C7F10_000004F0:
    lwz r0, 0xd18(r3)
    lwz r4, 0x14b0(r3)
    lwz r5, 0xd1c(r3)
    cmpwi r0, 0x0
    stw r4, 0x14b4(r3)
    stw r5, 0x14b0(r3)
    beq lbl_fn_802C7F10_00000514
    cmpwi r5, 0x0
    bne lbl_fn_802C7F10_00000524
lbl_fn_802C7F10_00000514:
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    b lbl_fn_802C7F10_00000920
lbl_fn_802C7F10_00000524:
    beq lbl_fn_802C7F10_00000920
    lwz r0, 0x58c(r3)
    cmplwi r0, 0xf
    bgt lbl_fn_802C7F10_000008AC
    lis r4, jumptable_80786820@ha
    slwi r0, r0, 2
    addi r4, r4, jumptable_80786820@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    mr r3, r31
    bl fn_802CA490
    b lbl_fn_802C7F10_00000920
    lfs f31, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_802C7F10_000005AC
    mr r3, r31
    bl fn_80178A6C
    li r0, 0x0
    stw r0, 0x14b8(r31)
    stw r0, 0x14bc(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0x6
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    b lbl_fn_802C7F10_00000920
lbl_fn_802C7F10_000005AC:
    lwz r0, 0x14bc(r31)
    cmpwi r0, 0x32
    bne lbl_fn_802C7F10_00000920
    li r3, 0x67d
    bl fn_80219E6C
    lfs f8, lbl_80884400
    li r5, 0x0
    lfs f7, lbl_808843E8
    li r7, 0x0
    lfs f0, lbl_80884404
    stfs f8, 0x8(r1)
    lwz r4, lbl_8087F430
    stfs f7, 0xc(r1)
    stfs f0, 0x10(r1)
    lwz r6, 0x10d8(r4)
    lwz r0, 0x78(r6)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_802C7F10_00000620
lbl_fn_802C7F10_000005F8:
    lwz r4, 0x7c(r6)
    lwzx r0, r4, r7
    cmpwi r0, 0x25f
    bne lbl_fn_802C7F10_00000614
    mulli r0, r5, 0x28
    add r5, r4, r0
    b lbl_fn_802C7F10_00000624
lbl_fn_802C7F10_00000614:
    addi r7, r7, 0x28
    addi r5, r5, 0x1
    bdnz lbl_fn_802C7F10_000005F8
lbl_fn_802C7F10_00000620:
    li r5, 0x0
lbl_fn_802C7F10_00000624:
    cmpwi r5, 0x0
    beq lbl_fn_802C7F10_00000640
    psq_l f1, 0x4(r5), 0, 0
    addi r4, r1, 0x8
    lfs f2, 0xc(r5)
    stfs f2, 0x10(r1)
    psq_st f1, 0x0(r4), 0, 0
lbl_fn_802C7F10_00000640:
    lfs f0, lbl_808843E8
    li r0, 0x0
    mr r4, r3
    stw r0, 0x2c(r1)
    lwz r3, lbl_8087F9E8
    mr r5, r31
    stfs f0, 0x14(r1)
    mr r6, r31
    lfs f1, lbl_808843F4
    addi r7, r1, 0x8
    stfs f0, 0x18(r1)
    addi r8, r1, 0x14
    addi r9, r1, 0x2c
    stfs f0, 0x1c(r1)
    bl fn_8059B670
    addic. r3, r1, 0x2c
    beq lbl_fn_802C7F10_00000920
    lwz r4, 0x2c(r1)
    cmpwi r4, 0x0
    beq lbl_fn_802C7F10_00000920
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_802C7F10_000006B0
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_802C7F10_000006B0:
    li r0, 0x0
    stw r0, 0x2c(r1)
    b lbl_fn_802C7F10_00000920
    mr r3, r31
    bl fn_802CA8C0
    b lbl_fn_802C7F10_00000920
    lwz r0, 0x14bc(r3)
    cmpwi r0, 0x78
    blt lbl_fn_802C7F10_00000920
    lwz r5, 0x14d0(r3)
    cmpwi r5, 0x0
    beq lbl_fn_802C7F10_000007F0
    lwz r0, 0x48(r5)
    cmpwi r0, 0x2
    beq lbl_fn_802C7F10_000007F0
    lwz r3, lbl_8087F048
    mr r4, r31
    li r6, 0x1
    bl fn_801031D0
    lwz r3, 0x14d0(r31)
    lwz r0, 0x2dc(r3)
    cmpwi r0, 0x220
    beq lbl_fn_802C7F10_0000077C
    cmpwi r0, 0x221
    beq lbl_fn_802C7F10_0000077C
    li r0, 0x0
    stw r0, 0x14b8(r31)
    stw r0, 0x14bc(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0xd
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f0, lbl_808843F4
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_808843E8
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x147
    lfs f2, lbl_808843F8
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_802C7F10_00000920
lbl_fn_802C7F10_0000077C:
    lwz r0, 0x14d4(r31)
    cmpwi r0, 0x0
    bne lbl_fn_802C7F10_00000920
    li r0, 0x0
    stw r0, 0x14b8(r31)
    stw r0, 0x14bc(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0xc
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f0, lbl_808843F4
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_808843E8
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x148
    lfs f2, lbl_808843F8
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_802C7F10_00000920
lbl_fn_802C7F10_000007F0:
    li r0, 0x0
    stw r0, 0x14b8(r3)
    stw r0, 0x14bc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0xb
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f0, lbl_808843F4
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_808843E8
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x147
    lfs f2, lbl_808843F8
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_802C7F10_00000920
    mr r3, r31
    bl fn_802CAFB8
    b lbl_fn_802C7F10_00000920
    mr r3, r31
    bl fn_802CB1CC
    b lbl_fn_802C7F10_00000920
    mr r3, r31
    bl fn_802CB43C
    b lbl_fn_802C7F10_00000920
    mr r3, r31
    bl fn_802CB74C
    b lbl_fn_802C7F10_00000920
    mr r3, r31
    bl fn_802CB8A0
    b lbl_fn_802C7F10_00000920
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0xec(r12)
    mtctr r12
    bctrl
    b lbl_fn_802C7F10_00000920
lbl_fn_802C7F10_000008AC:
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    beq lbl_fn_802C7F10_00000910
    cmpwi r0, 0x7
    bne lbl_fn_802C7F10_000008F0
    lwz r0, 0x14b4(r3)
    cmplw r0, r5
    beq lbl_fn_802C7F10_00000910
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lwz r4, 0x14b0(r31)
    mr r3, r31
    lfs f1, lbl_80884408
    li r5, 0x0
    bl fn_80170A20
    b lbl_fn_802C7F10_00000910
lbl_fn_802C7F10_000008F0:
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lwz r4, 0x14b0(r31)
    mr r3, r31
    lfs f1, lbl_80884408
    li r5, 0x0
    bl fn_80170A20
lbl_fn_802C7F10_00000910:
    mr r3, r31
    bl fn_802C9880
    mr r3, r31
    bl fn_802C9BF8
lbl_fn_802C7F10_00000920:
    mr r3, r31
    bl fn_8014C540
    mr r3, r31
    bl fn_80145334
    lwz r0, 0x58c(r31)
    cmpwi r0, 0xd
    bne lbl_fn_802C7F10_00000A30
    lfs f7, lbl_8088440C
    addi r30, r31, 0x14dc
    lfs f0, 0x538(r31)
    addi r3, r1, 0x88
    lfs f8, lbl_808843E8
    li r4, 0x79
    fadds f1, f7, f0
    lfs f0, lbl_808843F4
    stfs f8, 0x1508(r31)
    stfs f8, 0x1500(r31)
    stfs f8, 0x14fc(r31)
    stfs f8, 0x14f8(r31)
    stfs f8, 0x14f4(r31)
    stfs f8, 0x14ec(r31)
    stfs f8, 0x14e8(r31)
    stfs f8, 0x14e4(r31)
    stfs f8, 0x14e0(r31)
    stfs f0, 0x1504(r31)
    stfs f0, 0x14f0(r31)
    stfs f0, 0x14dc(r31)
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x88
    addi r5, r1, 0x58
    bl fn_805F89F0
    addi r6, r1, 0x58
    lis r3, lbl_80746DEC@ha
    psq_l f1, 0x0(r6), 0, 0
    addi r3, r3, lbl_80746DEC@l
    psq_l f2, 0x8(r6), 0, 0
    addi r4, r3, 0x4b
    psq_l f3, 0x10(r6), 0, 0
    addi r3, r31, 0xb0
    psq_l f4, 0x18(r6), 0, 0
    li r5, 0x0
    psq_l f5, 0x20(r6), 0, 0
    psq_l f6, 0x28(r6), 0, 0
    psq_st f6, 0x28(r30), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802C7F10_000009FC
    li r3, 0x0
    b lbl_fn_802C7F10_00000A08
lbl_fn_802C7F10_000009FC:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r3, r3, r0
lbl_fn_802C7F10_00000A08:
    lfs f0, 0x2c(r3)
    lfs f7, 0x1c(r3)
    lfs f8, 0xc(r3)
    stfs f8, 0x20(r1)
    stfs f7, 0x24(r1)
    stfs f0, 0x28(r1)
    stfs f8, 0x14e8(r31)
    stfs f7, 0x14f8(r31)
    stfs f0, 0x1508(r31)
    b lbl_fn_802C7F10_00000A98
lbl_fn_802C7F10_00000A30:
    lis r4, lbl_80746DEC@ha
    addi r3, r31, 0xb0
    addi r4, r4, lbl_80746DEC@l
    li r5, 0x0
    addi r4, r4, 0x4b
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802C7F10_00000A58
    li r4, 0x0
    b lbl_fn_802C7F10_00000A64
lbl_fn_802C7F10_00000A58:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r4, r3, r0
lbl_fn_802C7F10_00000A64:
    psq_l f1, 0x0(r4), 0, 0
    addi r3, r31, 0x14dc
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_st f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f4, 0x18(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
lbl_fn_802C7F10_00000A98:
    lwz r3, 0x58c(r31)
    subi r0, r3, 0xc
    cmplwi r0, 0x1
    bgt lbl_fn_802C7F10_00000B24
    lwz r0, 0x14bc(r31)
    cmpwi r0, 0x5
    blt lbl_fn_802C7F10_00000B24
    lwz r3, 0x14d0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802C7F10_00000B24
    bl fn_80144710
    li r0, 0x0
    stw r0, 0x40(r1)
    addi r4, r1, 0x40
    lwz r3, 0x14d0(r31)
    addi r3, r3, 0xb0
    bl fn_8000D430
    addic. r3, r1, 0x40
    beq lbl_fn_802C7F10_00000B18
    lwz r4, 0x40(r1)
    cmpwi r4, 0x0
    beq lbl_fn_802C7F10_00000B18
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_802C7F10_00000B10
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_802C7F10_00000B10:
    li r0, 0x0
    stw r0, 0x40(r1)
lbl_fn_802C7F10_00000B18:
    lwz r3, 0x14d0(r31)
    lfs f1, lbl_80884410
    bl fn_80148B38
lbl_fn_802C7F10_00000B24:
    lwz r3, 0x14bc(r31)
    addi r0, r3, 0x1
    stw r0, 0x14bc(r31)
    psq_l f31, 0xc8(r1), 0, 0
    lfd f31, 0xc0(r1)
    lwz r31, 0xbc(r1)
    lwz r30, 0xb8(r1)
    lwz r0, 0xd4(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}

asm void fn_802C85B0(void)
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
    bl fn_80149A30
    lwz r0, 0xd18(r31)
    cmpwi r0, 0x0
    beq lbl_fn_802C85B0_00000D8C
    lwz r0, 0x58c(r31)
    lwz r3, lbl_8087F8A0
    cmpwi r0, 0xa
    lwz r3, 0x48(r3)
    bne lbl_fn_802C85B0_00000D6C
    lwz r0, 0x14d0(r31)
    cmplw r0, r3
    beq lbl_fn_802C85B0_00000D6C
    lwz r3, 0x1540(r31)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_802C85B0_00000BE4
    lwz r0, 0x38(r3)
    lfs f0, lbl_808843E8
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, 0x1540(r31)
    stfs f0, 0x100(r3)
    lwz r3, 0x1540(r31)
    lwz r0, 0xfc(r3)
    oris r0, r0, 0x2000
    stw r0, 0xfc(r3)
lbl_fn_802C85B0_00000BE4:
    lwz r0, 0x1544(r31)
    cmpwi r0, 0x0
    bne lbl_fn_802C85B0_00000BFC
    lwz r3, 0x1540(r31)
    lfs f0, lbl_80884414
    stfs f0, 0x100(r3)
lbl_fn_802C85B0_00000BFC:
    lwz r3, 0x1540(r31)
    lfs f1, 0xa0(r3)
    lfs f0, 0x100(r3)
    fcmpo cr0, f0, f1
    cror eq, gt, eq
    mfcr r0
    extrwi. r0, r0, 1, 2
    beq lbl_fn_802C85B0_00000C24
    lfs f0, lbl_80884418
    stfs f0, 0x100(r3)
lbl_fn_802C85B0_00000C24:
    lis r4, lbl_80746DEC@ha
    addi r3, r31, 0xb0
    addi r4, r4, lbl_80746DEC@l
    li r5, 0x0
    addi r4, r4, 0x55
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802C85B0_00000C4C
    li r4, 0x0
    b lbl_fn_802C85B0_00000C58
lbl_fn_802C85B0_00000C4C:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r4, r3, r0
lbl_fn_802C85B0_00000C58:
    lfs f2, 0x1c(r4)
    addi r3, r1, 0x8
    lfs f0, lbl_80884414
    addi r5, r1, 0x14
    lfs f1, 0x2c(r4)
    lfs f3, 0xc(r4)
    fadds f0, f2, f0
    stfs f3, 0x14(r1)
    lwz r4, lbl_8087EFB4
    stfs f1, 0x1c(r1)
    stfs f0, 0x18(r1)
    bl fn_800BFAC8
    lwz r4, 0x1540(r31)
    lis r30, lbl_80746DEC@ha
    addi r30, r30, lbl_80746DEC@l
    lfs f31, 0x8(r1)
    addi r3, r30, 0x5a
    addi r29, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r3, r29
    li r5, 0x0
    bl fn_801FED24
    lwz r4, 0x1540(r31)
    addi r3, r30, 0x5a
    lfs f31, 0xc(r1)
    addi r29, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r3, r29
    li r5, 0x1
    bl fn_801FED24
    lwz r3, lbl_8087F1E4
    lwz r29, 0xb6c(r3)
    cmpwi r29, 0x0
    beq lbl_fn_802C85B0_00000CF4
    b lbl_fn_802C85B0_00000CF8
lbl_fn_802C85B0_00000CF4:
    la r29, lbl_808813D0
lbl_fn_802C85B0_00000CF8:
    cmpwi r29, 0x0
    beq lbl_fn_802C85B0_00000D8C
    lwz r4, 0x1540(r31)
    lis r30, lbl_80746DEC@ha
    addi r30, r30, lbl_80746DEC@l
    addi r3, r30, 0x65
    addi r28, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r28
    mr r5, r29
    bl fn_801FEE08
    lwz r4, 0x1540(r31)
    addi r3, r30, 0x73
    addi r28, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r28
    mr r5, r29
    bl fn_801FEE08
    lwz r4, 0x1540(r31)
    addi r3, r30, 0x81
    addi r28, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r28
    mr r5, r29
    bl fn_801FEE08
    b lbl_fn_802C85B0_00000D8C
lbl_fn_802C85B0_00000D6C:
    lwz r3, 0x1540(r31)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_802C85B0_00000D8C
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_802C85B0_00000D8C:
    li r0, 0x0
    stw r0, 0x1544(r31)
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_802C881C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x0(r4)
    cmplw r0, r3
    bne lbl_fn_802C881C_00000E08
    li r5, 0x0
    li r3, 0x2
    li r0, -0x1
    stw r5, 0x68(r4)
    stw r3, 0x84(r4)
    stw r0, 0x88(r4)
    stw r5, 0x90(r4)
    stw r5, 0x8c(r4)
    b lbl_fn_802C881C_00000EB8
lbl_fn_802C881C_00000E08:
    lfs f2, 0x10(r4)
    li r0, 0x1
    lfs f3, lbl_808843E8
    lfs f1, 0x14(r4)
    lfs f0, 0x18(r4)
    fmuls f2, f2, f3
    fmuls f1, f1, f3
    lwz r5, 0x8(r4)
    fmuls f0, f0, f3
    stfs f2, 0x10(r4)
    stfs f1, 0x14(r4)
    stfs f0, 0x18(r4)
    lwz r5, 0x4(r5)
    cmpwi r5, 0x7d0
    beq lbl_fn_802C881C_00000E50
    cmpwi r5, 0x7d9
    beq lbl_fn_802C881C_00000E50
    li r0, 0x0
lbl_fn_802C881C_00000E50:
    cmpwi r0, 0x0
    beq lbl_fn_802C881C_00000E7C
    lwz r0, 0x40(r4)
    cmpwi r0, 0x1
    bne lbl_fn_802C881C_00000E7C
    lwz r0, 0x58c(r3)
    cmpwi r0, 0xa
    bne lbl_fn_802C881C_00000E7C
    lwz r0, 0xc(r4)
    ori r0, r0, 0x880
    stw r0, 0xc(r4)
lbl_fn_802C881C_00000E7C:
    lwz r0, 0x58c(r3)
    cmpwi r0, 0xe
    bne lbl_fn_802C881C_00000E94
    lwz r0, 0xc(r4)
    ori r0, r0, 0x80
    stw r0, 0xc(r4)
lbl_fn_802C881C_00000E94:
    mr r3, r30
    mr r4, r31
    bl fn_80151448
    lwz r12, 0x0(r30)
    mr r3, r30
    mr r4, r31
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
lbl_fn_802C881C_00000EB8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802C8930(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r5, 0x4330
    lis r6, lbl_80746DD0@ha
    stw r0, 0x34(r1)
    lfd f4, lbl_80746DD0@l(r6)
    stw r31, 0x2c(r1)
    mr r31, r3
    lwz r0, 0x68(r4)
    stw r5, 0x8(r1)
    xoris r0, r0, 0x8000
    lwz r7, 0x940(r3)
    stw r0, 0xc(r1)
    xoris r0, r7, 0x8000
    lwz r7, 0x14c4(r3)
    lfd f0, 0x8(r1)
    stw r0, 0x14(r1)
    cmpwi r7, 0x0
    fsubs f1, f0, f4
    lfs f3, 0x7d8(r3)
    stw r5, 0x10(r1)
    lfd f0, 0x10(r1)
    fadds f2, f3, f1
    stw r0, 0x1c(r1)
    fsubs f1, f0, f4
    stw r5, 0x18(r1)
    lfd f0, 0x18(r1)
    fdivs f1, f2, f1
    fsubs f0, f0, f4
    fdivs f2, f3, f0
    beq lbl_fn_802C8930_00000F58
    cmpwi r7, 0x1
    beq lbl_fn_802C8930_00000F60
    b lbl_fn_802C8930_00000F68
lbl_fn_802C8930_00000F58:
    lfs f0, lbl_8088441C
    b lbl_fn_802C8930_00000F6C
lbl_fn_802C8930_00000F60:
    lfs f0, lbl_808843F0
    b lbl_fn_802C8930_00000F6C
lbl_fn_802C8930_00000F68:
    lfs f0, lbl_808843E8
lbl_fn_802C8930_00000F6C:
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    bne lbl_fn_802C8930_00000F94
    fcmpo cr0, f0, f1
    bge lbl_fn_802C8930_00000F94
    lwz r5, 0x14c4(r3)
    li r0, 0x1
    stw r0, 0x14c8(r3)
    addi r0, r5, 0x1
    stw r0, 0x14c4(r3)
lbl_fn_802C8930_00000F94:
    lwz r5, 0x8(r4)
    li r0, 0x1
    lwz r5, 0x4(r5)
    cmpwi r5, 0x7d0
    beq lbl_fn_802C8930_00000FB4
    cmpwi r5, 0x7d9
    beq lbl_fn_802C8930_00000FB4
    li r0, 0x0
lbl_fn_802C8930_00000FB4:
    cmpwi r0, 0x0
    beq lbl_fn_802C8930_00000FDC
    lwz r0, 0x40(r4)
    cmpwi r0, 0x1
    bne lbl_fn_802C8930_00000FDC
    lwz r0, 0x58c(r3)
    cmpwi r0, 0xa
    bne lbl_fn_802C8930_00000FDC
    mr r3, r31
    bl fn_802CC39C
lbl_fn_802C8930_00000FDC:
    lwz r0, 0x7e0(r31)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_802C8930_00000FF4
    mr r3, r31
    bl fn_802CC708
lbl_fn_802C8930_00000FF4:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_802C8A68(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    lfs f5, lbl_808843E8
    li r4, 0x0
    stw r0, 0x54(r1)
    addi r5, r1, 0x8
    fmr f2, f5
    addi r6, r1, 0x30
    stw r31, 0x4c(r1)
    addi r7, r1, 0x20
    mr r31, r3
    stw r30, 0x48(r1)
    stw r29, 0x44(r1)
    lfs f3, 0x52c(r3)
    lfs f0, 0x5a8(r3)
    lfs f4, 0x5b0(r3)
    fadds f6, f3, f0
    lfs f3, 0x528(r3)
    lfs f0, 0x5a4(r3)
    stfs f5, 0x8(r1)
    fadds f7, f3, f0
    lwz r0, 0x62c(r3)
    stfs f5, 0xc(r1)
    lfs f3, 0x530(r3)
    cmpwi r0, 0x0
    psq_l f1, 0x0(r5), 0, 0
    lfs f0, 0x5ac(r3)
    stfs f7, 0x20(r1)
    fadds f3, f3, f0
    stfs f2, 0x38(r1)
    fmr f2, f3
    stfs f6, 0x24(r1)
    psq_st f1, 0x0(r6), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    lfs f0, 0x34(r1)
    stw r4, 0x2c(r1)
    fadds f0, f0, f4
    stfs f5, 0x10(r1)
    stfs f4, 0x3c(r1)
    stfs f3, 0x28(r1)
    stfs f2, 0x38(r1)
    stfs f0, 0x34(r1)
    beq lbl_fn_802C8A68_000010C4
    lwz r0, 0x628(r3)
    cmpwi r0, 0x0
    bne lbl_fn_802C8A68_00001264
lbl_fn_802C8A68_000010C4:
    lwz r0, 0x628(r3)
    li r30, 0x8
    cmplwi r0, 0x8
    bgt lbl_fn_802C8A68_0000140C
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
    beq lbl_fn_802C8A68_00001258
    lwz r0, 0x624(r31)
    li r5, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_802C8A68_00001128
    mr r5, r0
lbl_fn_802C8A68_00001128:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_802C8A68_00001244
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_802C8A68_0000120C
lbl_fn_802C8A68_00001140:
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
    bdnz lbl_fn_802C8A68_00001140
    andi. r5, r5, 0x3
    beq lbl_fn_802C8A68_00001244
lbl_fn_802C8A68_0000120C:
    mtctr r5
lbl_fn_802C8A68_00001210:
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
    bdnz lbl_fn_802C8A68_00001210
lbl_fn_802C8A68_00001244:
    lwz r3, 0x62c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802C8A68_00001258
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_802C8A68_00001258:
    stw r29, 0x62c(r31)
    stw r30, 0x628(r31)
    b lbl_fn_802C8A68_0000140C
lbl_fn_802C8A68_00001264:
    lwz r3, 0x624(r3)
    cmplw r3, r0
    blt lbl_fn_802C8A68_0000140C
    slwi r30, r3, 1
    cmplw r0, r30
    bgt lbl_fn_802C8A68_0000140C
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
    beq lbl_fn_802C8A68_00001404
    lwz r0, 0x624(r31)
    mr r5, r30
    cmplw r30, r0
    ble lbl_fn_802C8A68_000012D4
    mr r5, r0
lbl_fn_802C8A68_000012D4:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_802C8A68_000013F0
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_802C8A68_000013B8
lbl_fn_802C8A68_000012EC:
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
    bdnz lbl_fn_802C8A68_000012EC
    andi. r5, r5, 0x3
    beq lbl_fn_802C8A68_000013F0
lbl_fn_802C8A68_000013B8:
    mtctr r5
lbl_fn_802C8A68_000013BC:
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
    bdnz lbl_fn_802C8A68_000013BC
lbl_fn_802C8A68_000013F0:
    lwz r3, 0x62c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802C8A68_00001404
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_802C8A68_00001404:
    stw r29, 0x62c(r31)
    stw r30, 0x628(r31)
lbl_fn_802C8A68_0000140C:
    lwz r0, 0x624(r31)
    addi r3, r1, 0x30
    psq_l f1, 0x0(r3), 0, 0
    lis r4, lbl_80746DEC@ha
    mulli r5, r0, 0x14
    lwz r6, 0x62c(r31)
    lwz r0, 0x2c(r1)
    addi r4, r4, lbl_80746DEC@l
    lfs f2, 0x38(r1)
    addi r3, r31, 0xb0
    stwux r0, r6, r5
    addi r4, r4, 0x55
    lfs f0, 0x3c(r1)
    li r5, 0x0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    stfs f0, 0x10(r6)
    lwz r6, 0x624(r31)
    addi r0, r6, 0x1
    stw r0, 0x624(r31)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802C8A68_00001470
    li r5, 0x0
    b lbl_fn_802C8A68_0000147C
lbl_fn_802C8A68_00001470:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r5, r3, r0
lbl_fn_802C8A68_0000147C:
    lfs f3, 0x1c(r5)
    addi r4, r1, 0x14
    lfs f4, 0xc(r5)
    addi r3, r1, 0x30
    lwz r0, 0x62c(r31)
    lfs f2, 0x2c(r5)
    lfs f0, lbl_80884420
    cmpwi r0, 0x0
    stfs f4, 0x14(r1)
    stfs f3, 0x18(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0x1c(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x38(r1)
    stfs f0, 0x3c(r1)
    beq lbl_fn_802C8A68_000014C8
    lwz r0, 0x628(r31)
    cmpwi r0, 0x0
    bne lbl_fn_802C8A68_00001668
lbl_fn_802C8A68_000014C8:
    lwz r0, 0x628(r31)
    li r30, 0x8
    cmplwi r0, 0x8
    bgt lbl_fn_802C8A68_00001810
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
    beq lbl_fn_802C8A68_0000165C
    lwz r0, 0x624(r31)
    li r5, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_802C8A68_0000152C
    mr r5, r0
lbl_fn_802C8A68_0000152C:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_802C8A68_00001648
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_802C8A68_00001610
lbl_fn_802C8A68_00001544:
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
    bdnz lbl_fn_802C8A68_00001544
    andi. r5, r5, 0x3
    beq lbl_fn_802C8A68_00001648
lbl_fn_802C8A68_00001610:
    mtctr r5
lbl_fn_802C8A68_00001614:
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
    bdnz lbl_fn_802C8A68_00001614
lbl_fn_802C8A68_00001648:
    lwz r3, 0x62c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802C8A68_0000165C
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_802C8A68_0000165C:
    stw r29, 0x62c(r31)
    stw r30, 0x628(r31)
    b lbl_fn_802C8A68_00001810
lbl_fn_802C8A68_00001668:
    lwz r3, 0x624(r31)
    cmplw r3, r0
    blt lbl_fn_802C8A68_00001810
    slwi r30, r3, 1
    cmplw r0, r30
    bgt lbl_fn_802C8A68_00001810
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
    beq lbl_fn_802C8A68_00001808
    lwz r0, 0x624(r31)
    mr r5, r30
    cmplw r30, r0
    ble lbl_fn_802C8A68_000016D8
    mr r5, r0
lbl_fn_802C8A68_000016D8:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_802C8A68_000017F4
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_802C8A68_000017BC
lbl_fn_802C8A68_000016F0:
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
    bdnz lbl_fn_802C8A68_000016F0
    andi. r5, r5, 0x3
    beq lbl_fn_802C8A68_000017F4
lbl_fn_802C8A68_000017BC:
    mtctr r5
lbl_fn_802C8A68_000017C0:
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
    bdnz lbl_fn_802C8A68_000017C0
lbl_fn_802C8A68_000017F4:
    lwz r3, 0x62c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802C8A68_00001808
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_802C8A68_00001808:
    stw r29, 0x62c(r31)
    stw r30, 0x628(r31)
lbl_fn_802C8A68_00001810:
    lwz r0, 0x624(r31)
    addi r5, r1, 0x30
    lwz r4, 0x62c(r31)
    mulli r3, r0, 0x14
    lwz r0, 0x2c(r1)
    stwux r0, r3, r4
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x4(r3), 0, 0
    lfs f2, 0x38(r1)
    stfs f2, 0xc(r3)
    lfs f0, 0x3c(r1)
    stfs f0, 0x10(r3)
    lwz r3, 0x624(r31)
    lwz r0, 0x12a8(r31)
    addi r3, r3, 0x1
    stw r3, 0x624(r31)
    rlwinm r0, r0, 0, 3, 1
    stw r0, 0x12a8(r31)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_802C92D4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    lwz r0, 0x624(r3)
    cmpwi r0, 0x0
    beq lbl_fn_802C92D4_00001914
    lwz r6, 0x62c(r3)
    lis r4, lbl_80746DEC@ha
    lfs f2, 0x5fc(r3)
    addi r4, r4, lbl_80746DEC@l
    psq_l f1, 0x5f4(r3), 0, 0
    addi r4, r4, 0x55
    psq_st f1, 0x4(r6), 0, 0
    li r5, 0x0
    stfs f2, 0xc(r6)
    lwz r6, 0x62c(r3)
    lfs f0, 0x60c(r3)
    addi r3, r3, 0xb0
    stfs f0, 0x10(r6)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802C92D4_000018DC
    li r4, 0x0
    b lbl_fn_802C92D4_000018E8
lbl_fn_802C92D4_000018DC:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r4, r3, r0
lbl_fn_802C92D4_000018E8:
    lfs f0, 0x1c(r4)
    addi r3, r1, 0x8
    lfs f3, 0xc(r4)
    lfs f2, 0x2c(r4)
    stfs f3, 0x8(r1)
    lwz r4, 0x62c(r31)
    stfs f0, 0xc(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x18(r4), 0, 0
    stfs f2, 0x10(r1)
    stfs f2, 0x20(r4)
lbl_fn_802C92D4_00001914:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_802C9388(void)
{
    nofralloc
    stwu r1, -0x200(r1)
    mflr r0
    lfs f8, lbl_808843E8
    stw r0, 0x204(r1)
    lfs f7, lbl_80884424
    stfd f31, 0x1f0(r1)
    psq_st f31, 0x1f8(r1), 0, 0
    stfd f30, 0x1e0(r1)
    psq_st f30, 0x1e8(r1), 0, 0
    stw r31, 0x1dc(r1)
    mr r31, r3
    stw r30, 0x1d8(r1)
    addi r30, r1, 0x1a0
    lfs f0, 0x5b0(r3)
    stfs f0, 0x620(r3)
    lfs f0, lbl_808843F4
    stfs f8, 0x74(r1)
    stfs f8, 0x78(r1)
    stfs f7, 0x7c(r1)
    stfs f8, 0x1cc(r1)
    stfs f8, 0x1c4(r1)
    stfs f8, 0x1c0(r1)
    stfs f8, 0x1bc(r1)
    stfs f8, 0x1b8(r1)
    stfs f8, 0x1b0(r1)
    stfs f8, 0x1ac(r1)
    stfs f8, 0x1a8(r1)
    stfs f8, 0x1a4(r1)
    stfs f0, 0x1c8(r1)
    stfs f0, 0x1b4(r1)
    stfs f0, 0x1a0(r1)
    lfs f1, 0x53c(r3)
    fcmpu cr0, f8, f1
    beq lbl_fn_802C9388_00001A00
    addi r3, r1, 0xb0
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0xb0
    addi r5, r1, 0x80
    bl fn_805F89F0
    addi r3, r1, 0x80
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_802C9388_00001A00:
    lfs f0, lbl_808843E8
    lfs f1, 0x538(r31)
    fcmpu cr0, f0, f1
    beq lbl_fn_802C9388_00001A60
    addi r3, r1, 0x110
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x110
    addi r5, r1, 0xe0
    bl fn_805F89F0
    addi r3, r1, 0xe0
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_802C9388_00001A60:
    lfs f0, lbl_808843E8
    lfs f1, 0x534(r31)
    fcmpu cr0, f0, f1
    beq lbl_fn_802C9388_00001AC0
    addi r3, r1, 0x170
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x170
    addi r5, r1, 0x140
    bl fn_805F89F0
    addi r3, r1, 0x140
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_802C9388_00001AC0:
    addi r4, r1, 0x74
    addi r3, r1, 0x1a0
    mr r5, r4
    bl fn_805F93C0
    lfs f9, 0x52c(r31)
    lis r3, lbl_80746DEC@ha
    lfs f7, 0x5a8(r31)
    addi r3, r3, lbl_80746DEC@l
    lfs f8, 0x528(r31)
    addi r4, r3, 0x8f
    fadds f9, f9, f7
    lfs f0, 0x5a4(r31)
    lfs f7, 0x78(r1)
    addi r6, r1, 0x50
    fadds f10, f8, f0
    lfs f0, 0x74(r1)
    fadds f11, f9, f7
    lfs f7, 0x530(r31)
    fadds f8, f10, f0
    lfs f0, 0x5ac(r31)
    stfs f11, 0x54(r1)
    addi r3, r31, 0xb0
    stfs f8, 0x50(r1)
    fadds f8, f7, f0
    lfs f7, 0x7c(r1)
    li r5, 0x0
    psq_l f1, 0x0(r6), 0, 0
    fadds f2, f8, f7
    psq_st f1, 0x614(r31), 0, 0
    lfs f0, 0x620(r31)
    lfs f7, 0x618(r31)
    stfs f10, 0x44(r1)
    fadds f0, f7, f0
    stfs f9, 0x48(r1)
    stfs f8, 0x4c(r1)
    stfs f2, 0x58(r1)
    stfs f2, 0x61c(r31)
    stfs f0, 0x618(r31)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802C9388_00001B6C
    li r30, 0x0
    b lbl_fn_802C9388_00001B78
lbl_fn_802C9388_00001B6C:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r30, r3, r0
lbl_fn_802C9388_00001B78:
    lis r4, lbl_80746DEC@ha
    addi r3, r31, 0xb0
    addi r4, r4, lbl_80746DEC@l
    li r5, 0x0
    addi r4, r4, 0x97
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802C9388_00001BA0
    li r4, 0x0
    b lbl_fn_802C9388_00001BAC
lbl_fn_802C9388_00001BA0:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r4, r3, r0
lbl_fn_802C9388_00001BAC:
    lfs f10, 0x2c(r4)
    lis r3, lbl_80746DEC@ha
    lfs f7, 0x2c(r30)
    addi r7, r1, 0x38
    lfs f11, 0x1c(r4)
    addi r6, r1, 0x68
    lfs f8, 0x1c(r30)
    fadds f13, f7, f10
    lfs f12, 0xc(r4)
    addi r3, r3, lbl_80746DEC@l
    lfs f9, 0xc(r30)
    fadds f31, f8, f11
    lfs f0, lbl_80884428
    fadds f30, f9, f12
    stfs f12, 0x14(r1)
    fmuls f2, f13, f0
    addi r4, r3, 0xa0
    fmuls f12, f31, f0
    stfs f11, 0x18(r1)
    fmuls f0, f30, f0
    stfs f12, 0x3c(r1)
    addi r3, r31, 0xb0
    li r5, 0x0
    stfs f0, 0x38(r1)
    psq_l f1, 0x0(r7), 0, 0
    stfs f10, 0x1c(r1)
    stfs f9, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f7, 0x28(r1)
    stfs f30, 0x2c(r1)
    stfs f31, 0x30(r1)
    stfs f13, 0x34(r1)
    stfs f2, 0x40(r1)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x70(r1)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802C9388_00001C4C
    li r5, 0x0
    b lbl_fn_802C9388_00001C58
lbl_fn_802C9388_00001C4C:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r5, r3, r0
lbl_fn_802C9388_00001C58:
    lfs f8, 0x2c(r5)
    addi r4, r1, 0x8
    lfs f0, 0x1c(r5)
    addi r3, r1, 0x5c
    lfs f7, 0xc(r5)
    fmr f2, f8
    stfs f7, 0x8(r1)
    addi r5, r1, 0x68
    lfs f7, lbl_80884414
    stfs f0, 0xc(r1)
    lfs f0, 0x620(r31)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    fmuls f0, f7, f0
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0x64(r1)
    lfs f2, 0x70(r1)
    lwz r0, 0x5c0(r31)
    psq_st f1, 0x5f4(r31), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    clrlwi r0, r0, 1
    stfs f2, 0x5fc(r31)
    lfs f2, 0x64(r1)
    psq_st f1, 0x600(r31), 0, 0
    stfs f2, 0x608(r31)
    stfs f0, 0x60c(r31)
    stw r0, 0x5c0(r31)
    psq_l f31, 0x1f8(r1), 0, 0
    lfd f31, 0x1f0(r1)
    psq_l f30, 0x1e8(r1), 0, 0
    lfd f30, 0x1e0(r1)
    lwz r31, 0x1dc(r1)
    lwz r30, 0x1d8(r1)
    lwz r0, 0x204(r1)
    stfs f8, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x200
    blr
}
