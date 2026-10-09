#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_17(void);
extern void _savegpr_17(void);
extern void dtor_80084684(void);
extern void fn_8000D430(void);
extern void fn_80013338(void);
extern void fn_800844D8(void);
extern void fn_80092814(void);
extern void fn_80094958(void);
extern void fn_80094B6C(void);
extern void fn_80097E80(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_800F8548(void);
extern void fn_80101340(void);
extern void fn_80108C10(void);
extern void fn_801162A0(void);
extern void fn_8012DF7C(void);
extern void fn_8013C38C(void);
extern void fn_80144710(void);
extern void fn_80148B0C(void);
extern void fn_80149A30(void);
extern void fn_8014C540(void);
extern void fn_8016E970(void);
extern void fn_80232B7C(void);
extern void fn_80239DAC(void);
extern void fn_8023A680(void);
extern void fn_8023A8B4(void);
extern void fn_8029F3AC(void);
extern void fn_802A4968(void);
extern void fn_802A49BC(void);
extern void fn_80370AE4(void);
extern void fn_80455D80(void);
extern void fn_80455E20(void);
extern void fn_80455F2C(void);
extern void fn_804560A4(void);
extern void fn_8045617C(void);
extern void fn_80456194(void);
extern void fn_804562E4(void);
extern void fn_80456DB8(void);
extern void fn_80456E1C(void);
extern void fn_80456F04(void);
extern void fn_80456F94(void);
extern void fn_804570F4(void);
extern void fn_804576D4(void);
extern void fn_80457C48(void);
extern void fn_80457E98(void);
extern void fn_8054D798(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_80680770(void);
extern void fn_80680CF8(void);
extern void fn_80686EA4(void);
extern void fn_8068A918(void);
extern void fn_8068AD58(void);

/* External data declarations */
extern u8 lbl_807549B0[];
extern u8 lbl_807549B8[];
extern u8 lbl_807549D0[];
extern u8 lbl_8078F760[];
extern u8 lbl_8078F77C[];
extern u8 lbl_807C7030[];
extern u8 lbl_807C8A48[];

/* Small data declarations */
extern u32 lbl_8087EFA8;
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F8A8;
extern u32 lbl_80886B78;
extern u32 lbl_80886B7C;
extern u32 lbl_80886B80;
extern u32 lbl_80886B84;
extern u32 lbl_80886B90;
extern u32 lbl_80886B94;
extern u32 lbl_80886B9C;
extern u32 lbl_80886BA0;
extern u32 lbl_80886BA4;
extern u32 lbl_80886BA8;
extern u32 lbl_80886BAC;
extern u32 lbl_80886BB0;
extern u32 lbl_80886BB4;
extern u32 lbl_80886BB8;
extern u32 lbl_80886BBC;
extern u32 lbl_80886BC0;
extern u32 lbl_80886BC4;
extern u32 lbl_80886BC8;
extern u32 lbl_80886BCC;
extern u32 lbl_80886BD0;
extern u32 lbl_80886BD4;
extern u32 lbl_80886BD8;

/* Function declarations */
void fn_80453DB4(void);
void fn_80453DBC(void);
void fn_80453E20(void);
void fn_804541A0(void);
void fn_80454514(void);
void fn_80454538(void);
void fn_80454554(void);
void fn_80454564(void);
void fn_8045456C(void);
void fn_804549E8(void);
void fn_804549F8(void);
void fn_80454D08(void);
void fn_80454D4C(void);
void fn_80454F08(void);
void fn_8045531C(void);
void fn_80455638(void);

asm void fn_80453DB4(void)
{
    nofralloc
    addi r3, r3, 0x54
    blr
}

asm void fn_80453DBC(void)
{
    nofralloc
    psq_l f1, 0x4(r4), 0, 0
    psq_l f2, 0xc(r4), 0, 0
    psq_st f1, 0x4(r3), 0, 0
    psq_l f1, 0x14(r4), 0, 0
    psq_st f2, 0xc(r3), 0, 0
    psq_l f2, 0x1c(r4), 0, 0
    psq_st f1, 0x14(r3), 0, 0
    psq_l f1, 0x24(r4), 0, 0
    psq_st f2, 0x1c(r3), 0, 0
    psq_l f2, 0x2c(r4), 0, 0
    psq_st f1, 0x24(r3), 0, 0
    lwz r6, 0x0(r4)
    psq_st f2, 0x2c(r3), 0, 0
    psq_l f1, 0x34(r4), 0, 0
    psq_l f2, 0x3c(r4), 0, 0
    lwz r5, 0x44(r4)
    lwz r0, 0x48(r4)
    lfs f0, 0x4c(r4)
    stw r6, 0x0(r3)
    psq_st f1, 0x34(r3), 0, 0
    psq_st f2, 0x3c(r3), 0, 0
    stw r5, 0x44(r3)
    stw r0, 0x48(r3)
    stfs f0, 0x4c(r3)
    blr
}

asm void fn_80453E20(void)
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
    bge lbl_fn_80453E20_000000EC
    addi r6, r6, 0x1
    lwz r5, 0x0(r3)
    subi r0, r6, 0x1
    stw r6, 0x4(r3)
    mulli r3, r0, 0x18
    lwz r0, 0x0(r4)
    lfs f0, 0x4(r4)
    lwz r6, 0x8(r4)
    add r7, r5, r3
    lwz r5, 0xc(r4)
    stw r0, 0x0(r7)
    lwz r3, 0x10(r4)
    stfs f0, 0x4(r7)
    lwz r0, 0x14(r4)
    stw r6, 0x8(r7)
    stw r5, 0xc(r7)
    stw r3, 0x10(r7)
    stw r0, 0x14(r7)
    b lbl_fn_80453E20_000003CC
lbl_fn_80453E20_000000EC:
    lis r3, 0xaab
    subi r0, r3, 0x5556
    subf r0, r5, r0
    cmplwi r0, 0x1
    bge lbl_fn_80453E20_00000124
    lis r4, lbl_807549D0@ha
    lis r3, __files@ha
    addi r4, r4, lbl_807549D0@l
    addi r3, r3, __files@l
    addi r4, r4, 0x14f
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80453E20_00000124:
    li r5, 0x0
    addi r4, r29, 0x8
    lis r3, 0xaab
    stw r5, 0x14(r1)
    subi r0, r3, 0x5556
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
    stw r3, 0x8(r1)
    ble lbl_fn_80453E20_0000018C
    lis r4, lbl_807549D0@ha
    lis r3, __files@ha
    addi r4, r4, lbl_807549D0@l
    addi r3, r3, __files@l
    addi r4, r4, 0x14f
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80453E20_0000018C:
    lis r3, 0x38e
    addi r0, r3, 0x38e3
    cmplw r31, r0
    bge lbl_fn_80453E20_000001DC
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
    bge lbl_fn_80453E20_000001D0
    addi r3, r1, 0x8
lbl_fn_80453E20_000001D0:
    lwz r0, 0x0(r3)
    add r28, r31, r0
    b lbl_fn_80453E20_00000220
lbl_fn_80453E20_000001DC:
    lis r3, 0x71c
    addi r0, r3, 0x71c6
    cmplw r31, r0
    bge lbl_fn_80453E20_00000218
    addi r3, r31, 0x1
    lwz r0, 0x8(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_80453E20_0000020C
    addi r3, r1, 0x8
lbl_fn_80453E20_0000020C:
    lwz r0, 0x0(r3)
    add r28, r31, r0
    b lbl_fn_80453E20_00000220
lbl_fn_80453E20_00000218:
    lis r3, 0xaab
    subi r28, r3, 0x5556
lbl_fn_80453E20_00000220:
    lis r3, 0xaab
    subi r0, r3, 0x5556
    cmplw r28, r0
    ble lbl_fn_80453E20_00000254
    lis r4, lbl_807549D0@ha
    lis r3, __files@ha
    addi r4, r4, lbl_807549D0@l
    addi r3, r3, __files@l
    addi r4, r4, 0x14f
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80453E20_00000254:
    mulli r3, r28, 0x18
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_80453E20_00000288
    lis r3, __files@ha
    lis r4, lbl_8078F760@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8078F760@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80453E20_00000288:
    lwz r3, 0x18(r1)
    li r0, 0x18
    stw r31, 0x14(r1)
    mulli r8, r3, 0x18
    lwz r7, 0x0(r30)
    stw r28, 0x1c(r1)
    lfs f0, 0x4(r30)
    lwz r3, 0x4(r29)
    stw r3, 0x24(r1)
    mulli r3, r3, 0x18
    lwz r6, 0x8(r30)
    lwz r5, 0xc(r30)
    lwz r4, 0x10(r30)
    add r3, r31, r3
    add r8, r8, r3
    lwz r3, 0x14(r30)
    stw r7, 0x0(r8)
    stfs f0, 0x4(r8)
    stw r6, 0x8(r8)
    stw r5, 0xc(r8)
    stw r4, 0x10(r8)
    stw r3, 0x14(r8)
    lwz r4, 0x18(r1)
    lwz r3, 0x24(r1)
    addi r4, r4, 0x1
    stw r4, 0x18(r1)
    mulli r3, r3, 0x18
    lwz r4, 0x14(r1)
    lwz r5, 0x4(r29)
    lwz r7, 0x0(r29)
    mulli r5, r5, 0x18
    add r6, r4, r3
    add r5, r7, r5
    addi r3, r5, 0x17
    subf r3, r7, r3
    divwu r3, r3, r0
    mtctr r3
    cmplw r5, r7
    ble lbl_fn_80453E20_0000037C
lbl_fn_80453E20_00000324:
    subic. r6, r6, 0x18
    subi r5, r5, 0x18
    beq lbl_fn_80453E20_00000360
    lwz r0, 0x4(r5)
    lwz r3, 0x0(r5)
    stw r3, 0x0(r6)
    stw r0, 0x4(r6)
    lwz r0, 0xc(r5)
    lwz r3, 0x8(r5)
    stw r3, 0x8(r6)
    stw r0, 0xc(r6)
    lwz r0, 0x14(r5)
    lwz r3, 0x10(r5)
    stw r3, 0x10(r6)
    stw r0, 0x14(r6)
lbl_fn_80453E20_00000360:
    lwz r4, 0x24(r1)
    lwz r3, 0x18(r1)
    subi r0, r4, 0x1
    stw r0, 0x24(r1)
    addi r0, r3, 0x1
    stw r0, 0x18(r1)
    bdnz lbl_fn_80453E20_00000324
lbl_fn_80453E20_0000037C:
    li r4, 0x0
    stw r4, 0x4(r29)
    addic. r0, r1, 0x14
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
    beq lbl_fn_80453E20_000003CC
    lwz r3, 0x14(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80453E20_000003CC
    stw r4, 0x18(r1)
    bl dtor_80084684
lbl_fn_80453E20_000003CC:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r28, 0x30(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_804541A0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    bl fn_80455E20
    lwz r0, 0x2a44(r31)
    cmpwi r0, 0x0
    beq lbl_fn_804541A0_00000490
    bl fn_802A49BC
    li r4, 0x0
    li r5, 0x4d
    bl fn_802A4968
    cmpwi r3, 0x0
    beq lbl_fn_804541A0_0000044C
    lwz r0, 0x14e4(r31)
    cmpwi r0, 0x0
    bne lbl_fn_804541A0_0000044C
    lwz r4, 0x14b8(r31)
    mr r3, r31
    bl fn_804570F4
lbl_fn_804541A0_0000044C:
    bl fn_802A49BC
    li r4, 0x0
    li r5, 0x4b
    bl fn_802A4968
    cmpwi r3, 0x0
    beq lbl_fn_804541A0_00000470
    lwz r4, 0x14b8(r31)
    mr r3, r31
    bl fn_80456E1C
lbl_fn_804541A0_00000470:
    bl fn_802A49BC
    li r4, 0x0
    li r5, 0x4e
    bl fn_802A4968
    cmpwi r3, 0x0
    beq lbl_fn_804541A0_00000490
    mr r3, r31
    bl fn_80456F04
lbl_fn_804541A0_00000490:
    lwz r0, 0xd18(r31)
    lwz r4, 0x14c0(r31)
    cmpwi r0, 0x0
    lwz r3, 0x14e8(r31)
    addi r0, r4, 0x1
    stw r0, 0x14c0(r31)
    addi r0, r3, 0x1
    stw r0, 0x14e8(r31)
    beq lbl_fn_804541A0_000004C0
    lwz r0, 0x14b8(r31)
    cmpwi r0, 0x0
    bne lbl_fn_804541A0_000004F4
lbl_fn_804541A0_000004C0:
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lwz r0, 0xd18(r31)
    li r3, 0x0
    stw r3, 0x14e0(r31)
    cmpwi r0, 0x0
    stw r3, 0x14c0(r31)
    stw r3, 0x14e8(r31)
    bne lbl_fn_804541A0_00000718
    lfs f0, lbl_80886B78
    stfs f0, 0x7d8(r31)
    b lbl_fn_804541A0_00000718
lbl_fn_804541A0_000004F4:
    lwz r0, 0x1920(r31)
    cmpwi r0, 0x0
    bne lbl_fn_804541A0_00000514
    lwz r0, 0x1924(r31)
    cmpwi r0, 0x0
    blt lbl_fn_804541A0_00000514
    mr r3, r31
    bl fn_80455D80
lbl_fn_804541A0_00000514:
    lwz r0, 0x1980(r31)
    cmpwi r0, 0x0
    bne lbl_fn_804541A0_00000540
    addi r3, r31, 0x7d4
    bl fn_8029F3AC
    lfs f0, lbl_80886B78
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_804541A0_00000540
    mr r3, r31
    bl fn_80456F94
lbl_fn_804541A0_00000540:
    lwz r0, 0x14b8(r31)
    li r3, 0x1
    stw r3, 0x14e0(r31)
    cmpwi r0, 0x0
    beq lbl_fn_804541A0_000005B4
    lwz r0, 0x58c(r31)
    cmpwi r0, 0x6
    beq lbl_fn_804541A0_00000574
    cmpwi r0, 0x7
    beq lbl_fn_804541A0_00000580
    cmpwi r0, 0x8
    beq lbl_fn_804541A0_0000058C
    b lbl_fn_804541A0_00000598
lbl_fn_804541A0_00000574:
    mr r3, r31
    bl fn_80456194
    b lbl_fn_804541A0_000005B4
lbl_fn_804541A0_00000580:
    mr r3, r31
    bl fn_804562E4
    b lbl_fn_804541A0_000005B4
lbl_fn_804541A0_0000058C:
    mr r3, r31
    bl fn_80456DB8
    b lbl_fn_804541A0_000005B4
lbl_fn_804541A0_00000598:
    mr r3, r31
    bl fn_8045617C
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x3
    bne lbl_fn_804541A0_000005B4
    mr r3, r31
    bl fn_80455F2C
lbl_fn_804541A0_000005B4:
    lwz r0, 0x14e4(r31)
    cmpwi r0, 0x1
    beq lbl_fn_804541A0_000005D4
    cmpwi r0, 0x2
    beq lbl_fn_804541A0_000005E0
    cmpwi r0, 0x3
    beq lbl_fn_804541A0_000005EC
    b lbl_fn_804541A0_000005F8
lbl_fn_804541A0_000005D4:
    mr r3, r31
    bl fn_804576D4
    b lbl_fn_804541A0_000006D0
lbl_fn_804541A0_000005E0:
    mr r3, r31
    bl fn_80457C48
    b lbl_fn_804541A0_000006D0
lbl_fn_804541A0_000005EC:
    mr r3, r31
    bl fn_80457E98
    b lbl_fn_804541A0_000006D0
lbl_fn_804541A0_000005F8:
    lwz r0, 0x58c(r31)
    cmpwi r0, 0x8
    beq lbl_fn_804541A0_000006D0
    lwz r0, 0x1910(r31)
    cmpwi r0, 0x0
    ble lbl_fn_804541A0_00000624
    subic. r0, r0, 0x1
    stw r0, 0x1910(r31)
    bne lbl_fn_804541A0_00000624
    li r0, 0x0
    stw r0, 0x190c(r31)
lbl_fn_804541A0_00000624:
    lfs f31, lbl_80886BA0
    li r30, 0x0
    b lbl_fn_804541A0_000006C0
lbl_fn_804541A0_00000630:
    mr r4, r30
    addi r3, r31, 0x19a0
    bl fn_80454554
    lwz r3, 0x0(r3)
    bl fn_8013C38C
    mr r4, r3
    addi r3, r1, 0x8
    addi r5, r31, 0x528
    bl fn_80013338
    addi r3, r1, 0x8
    bl fn_801162A0
    fcmpo cr0, f1, f31
    bge lbl_fn_804541A0_000006BC
    mr r4, r30
    addi r3, r31, 0x19a0
    bl fn_80454554
    lwz r3, 0x0(r3)
    lwz r0, 0x190c(r31)
    cmplw r0, r3
    beq lbl_fn_804541A0_000006BC
    mr r4, r30
    addi r3, r31, 0x19a0
    bl fn_80454554
    mr r4, r3
    mr r3, r31
    lwz r4, 0x0(r4)
    bl fn_804570F4
    mr r4, r30
    addi r3, r31, 0x19a0
    bl fn_80454554
    lwz r3, 0x0(r3)
    li r0, 0x78
    stw r3, 0x190c(r31)
    stw r0, 0x1910(r31)
    b lbl_fn_804541A0_000006D0
lbl_fn_804541A0_000006BC:
    addi r30, r30, 0x1
lbl_fn_804541A0_000006C0:
    addi r3, r31, 0x19a0
    bl fn_80454564
    cmplw r30, r3
    blt lbl_fn_804541A0_00000630
lbl_fn_804541A0_000006D0:
    lwz r0, 0x58c(r31)
    cmpwi r0, 0x8
    beq lbl_fn_804541A0_00000708
    addi r3, r31, 0x7d4
    bl fn_8029F3AC
    lfs f2, lbl_80886B78
    lfs f0, lbl_80886B90
    fadds f1, f2, f1
    stfs f1, 0x14d0(r31)
    fmuls f1, f0, f1
    bl fn_80454514
    lfs f0, lbl_80886B94
    fmuls f0, f1, f0
    stfs f0, 0x14d0(r31)
lbl_fn_804541A0_00000708:
    mr r3, r31
    bl fn_80455638
    addi r3, r31, 0x2548
    bl fn_80454538
lbl_fn_804541A0_00000718:
    mr r3, r31
    bl fn_8014C540
    mr r3, r31
    bl fn_80454F08
    mr r3, r31
    bl fn_804560A4
    mr r3, r31
    bl fn_80454D4C
    mr r3, r31
    bl fn_8045531C
    lwz r0, 0x34(r1)
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80454514(void)
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

asm void fn_80454538(void)
{
    nofralloc
    lwz r4, 0x0(r3)
    lwz r0, 0x4(r3)
    cmpw r4, r0
    bgelr
    addi r0, r4, 0x1
    stw r0, 0x0(r3)
    blr
}

asm void fn_80454554(void)
{
    nofralloc
    mulli r0, r4, 0x18
    lwz r3, 0x0(r3)
    add r3, r3, r0
    blr
}

asm void fn_80454564(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    blr
}

asm void fn_8045456C(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    stfd f31, 0x110(r1)
    psq_st f31, 0x118(r1), 0, 0
    stfd f30, 0x100(r1)
    psq_st f30, 0x108(r1), 0, 0
    stfd f29, 0xf0(r1)
    psq_st f29, 0xf8(r1), 0, 0
    stfd f28, 0xe0(r1)
    psq_st f28, 0xe8(r1), 0, 0
    stfd f27, 0xd0(r1)
    psq_st f27, 0xd8(r1), 0, 0
    stw r31, 0xcc(r1)
    mr r31, r3
    bl fn_80149A30
    lwz r0, 0xd18(r31)
    cmpwi r0, 0x1
    bne lbl_fn_8045456C_00000BF8
    lwz r3, 0x2558(r31)
    li r0, 0x1
    stw r0, 0x2630(r31)
    mulli r3, r3, 0xd0
    lfs f8, 0x2674(r31)
    lfs f6, 0x2670(r31)
    lfs f4, 0x266c(r31)
    add r3, r31, r3
    lfs f0, 0x2668(r31)
    lfs f3, 0x2744(r3)
    lfs f7, 0x2740(r3)
    fsubs f9, f3, f8
    lfs f5, 0x273c(r3)
    lfs f3, 0x2738(r3)
    fsubs f7, f7, f6
    fsubs f5, f5, f4
    lfs f12, 0x255c(r31)
    fsubs f3, f3, f0
    stfs f5, 0x4c(r1)
    fmuls f10, f9, f12
    fmuls f11, f7, f12
    stfs f3, 0x48(r1)
    fmuls f5, f5, f12
    fadds f8, f10, f8
    stfs f7, 0x50(r1)
    fmuls f3, f3, f12
    fadds f6, f11, f6
    stfs f8, 0x2674(r31)
    fadds f4, f5, f4
    fadds f7, f3, f0
    stfs f6, 0x2670(r31)
    stfs f4, 0x266c(r31)
    stfs f7, 0x2668(r31)
    lwz r3, lbl_8087EFA8
    stfs f9, 0x54(r1)
    stw r0, 0x54(r3)
    lwz r4, 0x2634(r31)
    stw r4, 0x58(r3)
    lwz r4, 0x2638(r31)
    stw r4, 0x5c(r3)
    lwz r4, 0x263c(r31)
    stw r4, 0x60(r3)
    lwz r4, 0x2640(r31)
    stw r4, 0x64(r3)
    lfs f0, 0x2644(r31)
    stfs f0, 0x68(r3)
    lfs f0, 0x2648(r31)
    stfs f0, 0x6c(r3)
    lfs f0, 0x264c(r31)
    stfs f0, 0x70(r3)
    lfs f0, 0x2650(r31)
    stfs f0, 0x74(r3)
    lwz r4, 0x2658(r31)
    lwz r5, 0x2654(r31)
    stw r5, 0x78(r3)
    stw r4, 0x7c(r3)
    lwz r4, 0x2660(r31)
    lwz r5, 0x265c(r31)
    stw r5, 0x80(r3)
    stw r4, 0x84(r3)
    lwz r4, 0x2664(r31)
    stfs f3, 0x58(r1)
    stfs f5, 0x5c(r1)
    stfs f11, 0x60(r1)
    stfs f10, 0x64(r1)
    stfs f7, 0x8(r1)
    stfs f4, 0xc(r1)
    stfs f6, 0x10(r1)
    stfs f8, 0x14(r1)
    stw r4, 0x88(r3)
    lwz r4, 0x266c(r31)
    lwz r5, 0x2668(r31)
    stw r5, 0x8c(r3)
    stw r4, 0x90(r3)
    lwz r4, 0x2674(r31)
    lwz r5, 0x2670(r31)
    stw r5, 0x94(r3)
    stw r4, 0x98(r3)
    lwz r4, 0x267c(r31)
    lwz r5, 0x2678(r31)
    stw r5, 0x9c(r3)
    stw r4, 0xa0(r3)
    lwz r4, 0x2684(r31)
    lwz r5, 0x2680(r31)
    stw r5, 0xa4(r3)
    stw r4, 0xa8(r3)
    lwz r4, 0x268c(r31)
    lwz r5, 0x2688(r31)
    stw r5, 0xac(r3)
    stw r4, 0xb0(r3)
    lwz r4, 0x2694(r31)
    lwz r5, 0x2690(r31)
    stw r5, 0xb4(r3)
    stw r4, 0xb8(r3)
    lwz r4, 0x269c(r31)
    lwz r5, 0x2698(r31)
    stw r5, 0xbc(r3)
    stw r4, 0xc0(r3)
    lwz r4, 0x26a0(r31)
    stw r4, 0xc4(r3)
    lwz r4, 0x26a8(r31)
    lwz r5, 0x26a4(r31)
    stw r5, 0xc8(r3)
    stw r4, 0xcc(r3)
    lwz r4, 0x26ac(r31)
    stw r4, 0xd0(r3)
    lwz r3, 0x2558(r31)
    stw r0, 0x26b0(r31)
    mulli r3, r3, 0xd0
    lfs f6, 0x26bc(r31)
    lfs f4, 0x26b8(r31)
    lfs f0, 0x26b4(r31)
    add r3, r31, r3
    lfs f8, 0x26c0(r31)
    lfs f7, 0x278c(r3)
    lfs f5, 0x2788(r3)
    fsubs f10, f7, f6
    lfs f3, 0x2784(r3)
    fsubs f5, f5, f4
    lfs f7, 0x255c(r31)
    fsubs f11, f3, f0
    lfs f9, 0x2790(r3)
    fsubs f3, f9, f8
    stfs f11, 0x68(r1)
    fmuls f9, f10, f7
    fmuls f12, f5, f7
    stfs f5, 0x6c(r1)
    fmuls f11, f11, f7
    fmuls f5, f3, f7
    stfs f10, 0x70(r1)
    fadds f6, f9, f6
    fadds f10, f11, f0
    stfs f3, 0x74(r1)
    fadds f4, f12, f4
    fadds f0, f5, f8
    stfs f11, 0x78(r1)
    stfs f12, 0x7c(r1)
    stfs f9, 0x80(r1)
    stfs f5, 0x84(r1)
    stfs f10, 0x18(r1)
    stfs f4, 0x1c(r1)
    stfs f6, 0x20(r1)
    stfs f0, 0x24(r1)
    addi r4, r1, 0x18
    addi r5, r31, 0x26b4
    psq_l f1, 0x0(r4), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    addi r9, r1, 0x28
    psq_st f1, 0x0(r5), 0, 0
    addi r10, r31, 0x26c4
    lfs f6, 0x26d0(r31)
    addi r7, r1, 0x38
    psq_st f2, 0x8(r5), 0, 0
    addi r8, r31, 0x26d4
    lfs f11, 0x26cc(r31)
    addi r6, r31, 0x26b4
    lfs f0, 0x27a0(r3)
    addi r5, r31, 0x26c4
    lfs f4, 0x279c(r3)
    addi r4, r31, 0x26d4
    fsubs f0, f0, f6
    lfs f3, 0x2798(r3)
    fsubs f27, f4, f11
    lfs f9, 0x26c8(r31)
    lfs f5, 0x2794(r3)
    fsubs f28, f3, f9
    fmuls f3, f0, f7
    lfs f8, 0x26c4(r31)
    fmuls f4, f27, f7
    lfs f13, 0x26e0(r31)
    fsubs f29, f5, f8
    fmuls f5, f28, f7
    fadds f30, f3, f6
    lfs f12, 0x26dc(r31)
    fmuls f6, f29, f7
    lfs f10, 0x26d8(r31)
    fadds f11, f4, f11
    fadds f9, f5, f9
    fadds f31, f6, f8
    stfs f11, 0x30(r1)
    lfs f8, 0x26d4(r31)
    stfs f30, 0x34(r1)
    psq_l f2, 0x8(r9), 0, 0
    stfs f31, 0x28(r1)
    stfs f9, 0x2c(r1)
    psq_l f1, 0x0(r9), 0, 0
    psq_st f1, 0x0(r10), 0, 0
    psq_st f2, 0x8(r10), 0, 0
    lfs f11, 0x27b0(r3)
    lfs f9, 0x27ac(r3)
    fsubs f31, f11, f13
    lfs f11, 0x27a8(r3)
    fsubs f30, f9, f12
    lfs f9, 0x27a4(r3)
    fsubs f11, f11, f10
    stfs f29, 0x88(r1)
    fsubs f9, f9, f8
    stfs f28, 0x8c(r1)
    fmuls f28, f30, f7
    fmuls f29, f31, f7
    stfs f27, 0x90(r1)
    fmuls f27, f11, f7
    fmuls f7, f9, f7
    stfs f0, 0x94(r1)
    fadds f0, f29, f13
    fadds f12, f28, f12
    stfs f6, 0x98(r1)
    fadds f6, f27, f10
    fadds f8, f7, f8
    stfs f12, 0x40(r1)
    stfs f0, 0x44(r1)
    psq_l f2, 0x8(r7), 0, 0
    stfs f8, 0x38(r1)
    stfs f6, 0x3c(r1)
    psq_l f1, 0x0(r7), 0, 0
    psq_st f1, 0x0(r8), 0, 0
    psq_st f2, 0x8(r8), 0, 0
    lwz r7, lbl_8087EFA8
    stfs f5, 0x9c(r1)
    stw r0, 0x324(r7)
    psq_l f2, 0x8(r6), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x328(r7), 0, 0
    psq_st f2, 0x330(r7), 0, 0
    psq_l f2, 0x8(r5), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x338(r7), 0, 0
    psq_st f2, 0x340(r7), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x348(r7), 0, 0
    stfs f4, 0xa0(r1)
    stfs f3, 0xa4(r1)
    stfs f9, 0xa8(r1)
    stfs f11, 0xac(r1)
    stfs f30, 0xb0(r1)
    stfs f31, 0xb4(r1)
    stfs f7, 0xb8(r1)
    stfs f27, 0xbc(r1)
    stfs f28, 0xc0(r1)
    stfs f29, 0xc4(r1)
    psq_st f2, 0x350(r7), 0, 0
    addi r3, r31, 0x26e4
    psq_l f2, 0x8(r3), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x358(r7), 0, 0
    psq_st f2, 0x360(r7), 0, 0
    lwz r0, 0x26f4(r31)
    stw r0, 0x368(r7)
    lwz r0, 0x26f8(r31)
    stw r0, 0x36c(r7)
    lfs f0, 0x26fc(r31)
    stfs f0, 0x370(r7)
lbl_fn_8045456C_00000BF8:
    lwz r0, 0x124(r1)
    psq_l f31, 0x118(r1), 0, 0
    lfd f31, 0x110(r1)
    psq_l f30, 0x108(r1), 0, 0
    lfd f30, 0x100(r1)
    psq_l f29, 0xf8(r1), 0, 0
    lfd f29, 0xf0(r1)
    psq_l f28, 0xe8(r1), 0, 0
    lfd f28, 0xe0(r1)
    psq_l f27, 0xd8(r1), 0, 0
    lfd f27, 0xd0(r1)
    lwz r31, 0xcc(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_804549E8(void)
{
    nofralloc
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctr
}

asm void fn_804549F8(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    stw r31, 0x9c(r1)
    mr r31, r4
    stw r30, 0x98(r1)
    mr r30, r3
    stw r29, 0x94(r1)
    stw r28, 0x90(r1)
    lwz r0, 0x1980(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804549F8_00000C98
    lwz r0, 0x94(r4)
    li r3, 0x1
    li r5, 0x0
    stw r5, 0x68(r4)
    ori r0, r0, 0x8
    stw r3, 0x64(r4)
    stw r3, 0x90(r4)
    stw r0, 0x94(r4)
    b lbl_fn_804549F8_00000F34
lbl_fn_804549F8_00000C98:
    li r8, 0x0
    li r6, 0x0
    b lbl_fn_804549F8_00000CD0
lbl_fn_804549F8_00000CA4:
    lwz r0, 0x19a0(r3)
    lwz r5, 0x0(r4)
    add r7, r0, r6
    lwzx r0, r6, r0
    cmplw r5, r0
    bne lbl_fn_804549F8_00000CC8
    lwz r5, 0xc(r7)
    addi r0, r5, 0x1
    stw r0, 0xc(r7)
lbl_fn_804549F8_00000CC8:
    addi r6, r6, 0x18
    addi r8, r8, 0x1
lbl_fn_804549F8_00000CD0:
    lwz r0, 0x19a4(r3)
    cmplw r8, r0
    blt lbl_fn_804549F8_00000CA4
    lwz r4, 0x1924(r3)
    subic. r0, r4, 0x1
    stw r0, 0x1924(r3)
    bge lbl_fn_804549F8_00000EA8
    li r31, 0x0
    stw r31, 0x14bc(r3)
    stw r31, 0x14c0(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    li r0, 0x8
    mr r3, r30
    li r4, 0x3
    stw r0, 0x58c(r30)
    bl fn_8016E970
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3e8
    li r6, 0x0
    bl fn_80239DAC
    li r3, 0x0
    li r4, 0x0
    bl fn_80232B7C
    lfs f0, lbl_80886B80
    li r28, -0x1
    lfs f1, lbl_80886B78
    li r29, 0x1
    stfs f0, 0x54(r1)
    addi r4, r30, 0x1940
    lwz r3, lbl_8087F3C0
    addi r5, r30, 0xb0
    stfs f0, 0x58(r1)
    addi r7, r1, 0x48
    addi r8, r1, 0x54
    addi r9, r1, 0x60
    stfs f0, 0x5c(r1)
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x48(r1)
    stfs f0, 0x4c(r1)
    stfs f0, 0x50(r1)
    stfs f1, 0x60(r1)
    stfs f1, 0x64(r1)
    stfs f1, 0x68(r1)
    stfs f1, 0x6c(r1)
    stw r28, 0x8(r1)
    stw r29, 0xc(r1)
    bl fn_8023A8B4
    lwz r0, 0x2548(r30)
    li r4, 0x3
    lfs f3, lbl_80886B90
    li r5, 0x58
    srwi r3, r0, 31
    clrlwi r0, r0, 31
    xor r0, r0, r3
    lfs f6, lbl_80886BA4
    subf r6, r3, r0
    lfs f5, lbl_80886BA8
    lfs f4, lbl_80886B7C
    li r0, 0x3c
    stw r4, 0x2558(r30)
    mr r3, r30
    lfs f0, lbl_80886BAC
    li r4, 0x0
    stw r29, 0x1980(r30)
    stfs f6, 0x255c(r30)
    stfs f5, 0x14d0(r30)
    stfs f4, 0x14d4(r30)
    stw r6, 0x2548(r30)
    stw r5, 0x254c(r30)
    stfs f3, 0x2550(r30)
    stfs f3, 0x2554(r30)
    lwz r7, lbl_8087F430
    lwz r5, 0x96c(r7)
    srwi r6, r5, 31
    clrlwi r5, r5, 31
    xor r5, r5, r6
    subf r5, r6, r5
    stw r5, 0x96c(r7)
    stw r0, 0x970(r7)
    stfs f0, 0x974(r7)
    stfs f0, 0x978(r7)
    bl fn_80148B0C
    lfs f2, 0xc(r3)
    lis r5, lbl_8078F77C@ha
    addi r6, r1, 0x7c
    psq_l f1, 0x4(r3), 0, 0
    lfs f6, lbl_80886B80
    addi r5, r5, lbl_8078F77C@l
    psq_st f1, 0x0(r6), 0, 0
    li r4, 0x0
    lfs f5, lbl_80886BB0
    fadds f0, f2, f6
    lfs f4, 0x7c(r1)
    li r7, 0x0
    lfs f3, 0x80(r1)
    li r8, 0x0
    fadds f4, f4, f6
    stfs f0, 0x84(r1)
    fadds f0, f3, f5
    li r9, 0x1
    li r10, 0x0
    stfs f4, 0x7c(r1)
    stfs f0, 0x80(r1)
    stw r31, 0x8(r1)
    stw r31, 0xc(r1)
    stw r29, 0x10(r1)
    stw r28, 0x14(r1)
    stw r28, 0x18(r1)
    stfs f6, 0x70(r1)
    lwz r3, lbl_8087F8A8
    stfs f5, 0x74(r1)
    stfs f6, 0x78(r1)
    bl fn_8054D798
    b lbl_fn_804549F8_00000F34
lbl_fn_804549F8_00000EA8:
    li r3, 0x0
    li r4, 0x0
    bl fn_80232B7C
    lfs f0, lbl_80886B80
    li r0, -0x1
    lfs f1, lbl_80886B78
    li r29, 0x1
    stfs f0, 0x30(r1)
    addi r4, r30, 0x1934
    addi r5, r30, 0xb0
    addi r7, r1, 0x3c
    stfs f0, 0x34(r1)
    addi r8, r1, 0x30
    addi r9, r1, 0x20
    li r6, 0x0
    stfs f0, 0x38(r1)
    li r10, -0x1
    stfs f0, 0x3c(r1)
    stfs f0, 0x40(r1)
    stfs f0, 0x44(r1)
    stfs f1, 0x20(r1)
    stfs f1, 0x24(r1)
    stfs f1, 0x28(r1)
    stfs f1, 0x2c(r1)
    stw r0, 0x8(r1)
    stw r29, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r0, 0x94(r31)
    li r3, 0x0
    stw r3, 0x68(r31)
    ori r0, r0, 0x8
    stw r29, 0x64(r31)
    stw r29, 0x90(r31)
    stw r0, 0x94(r31)
lbl_fn_804549F8_00000F34:
    lwz r0, 0xa4(r1)
    lwz r31, 0x9c(r1)
    lwz r30, 0x98(r1)
    lwz r29, 0x94(r1)
    lwz r28, 0x90(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_80454D08(void)
{
    nofralloc
    psq_l f1, 0x528(r4), 0, 0
    cmpwi r5, 0x0
    lfs f2, 0x530(r4)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
    bne lbl_fn_80454D08_00000F80
    psq_l f1, 0x528(r4), 0, 0
    lfs f2, 0x530(r4)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
    blr
lbl_fn_80454D08_00000F80:
    lwz r4, 0x62c(r4)
    psq_l f1, 0x4(r4), 0, 0
    lfs f2, 0xc(r4)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
    blr
}

asm void fn_80454D4C(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stfd f31, 0x70(r1)
    psq_st f31, 0x78(r1), 0, 0
    stfd f30, 0x60(r1)
    psq_st f30, 0x68(r1), 0, 0
    stw r31, 0x5c(r1)
    stw r30, 0x58(r1)
    mr r30, r3
    lwz r0, 0x14e4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80454D4C_0000112C
    addi r31, r3, 0x18bc
    addi r4, r3, 0x14f4
    psq_l f1, 0x0(r31), 0, 0
    addi r3, r1, 0x14
    psq_l f2, 0x8(r31), 0, 0
    psq_l f3, 0x10(r31), 0, 0
    psq_l f4, 0x18(r31), 0, 0
    psq_l f5, 0x20(r31), 0, 0
    psq_l f6, 0x28(r31), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lfs f8, 0x28(r31)
    psq_st f2, 0x8(r4), 0, 0
    lfs f7, 0x18(r31)
    psq_st f3, 0x10(r4), 0, 0
    lfs f0, 0x8(r31)
    psq_st f4, 0x18(r4), 0, 0
    psq_st f5, 0x20(r4), 0, 0
    psq_st f6, 0x28(r4), 0, 0
    stfs f0, 0x14(r1)
    stfs f7, 0x18(r1)
    stfs f8, 0x1c(r1)
    bl fn_805F9940
    lfs f8, 0x24(r31)
    fmr f30, f1
    lfs f7, 0x14(r31)
    addi r3, r1, 0x20
    lfs f0, 0x4(r31)
    stfs f0, 0x20(r1)
    stfs f7, 0x24(r1)
    stfs f8, 0x28(r1)
    bl fn_805F9940
    lfs f8, 0x20(r31)
    fmr f31, f1
    lfs f7, 0x10(r31)
    addi r3, r1, 0x2c
    lfs f0, 0x0(r31)
    stfs f0, 0x2c(r1)
    stfs f7, 0x30(r1)
    stfs f8, 0x34(r1)
    bl fn_805F9940
    frsp f7, f31
    stfs f1, 0x8(r1)
    frsp f0, f30
    stfs f31, 0xc(r1)
    fcmpo cr0, f7, f0
    stfs f30, 0x10(r1)
    ble lbl_fn_80454D4C_0000108C
    b lbl_fn_80454D4C_00001090
lbl_fn_80454D4C_0000108C:
    fmr f7, f0
lbl_fn_80454D4C_00001090:
    lfs f8, 0x8(r1)
    fcmpo cr0, f8, f7
    ble lbl_fn_80454D4C_000010A0
    b lbl_fn_80454D4C_000010B8
lbl_fn_80454D4C_000010A0:
    lfs f8, 0xc(r1)
    lfs f0, 0x10(r1)
    fcmpo cr0, f8, f0
    ble lbl_fn_80454D4C_000010B4
    b lbl_fn_80454D4C_000010B8
lbl_fn_80454D4C_000010B4:
    fmr f8, f0
lbl_fn_80454D4C_000010B8:
    lwz r4, 0x153c(r30)
    li r31, 0x0
    lwz r0, 0x16f8(r30)
    addi r3, r30, 0x14ec
    rlwimi r0, r4, 8, 16, 23
    stfs f8, 0x1540(r30)
    li r4, 0x1
    stw r0, 0x16f8(r30)
    stw r31, 0x153c(r30)
    bl fn_80097E80
    stw r31, 0x38(r1)
    addi r3, r30, 0x14ec
    addi r4, r1, 0x38
    bl fn_8000D430
    addic. r3, r1, 0x38
    beq lbl_fn_80454D4C_0000112C
    lwz r4, 0x38(r1)
    cmpwi r4, 0x0
    beq lbl_fn_80454D4C_0000112C
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_80454D4C_00001124
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80454D4C_00001124:
    li r0, 0x0
    stw r0, 0x38(r1)
lbl_fn_80454D4C_0000112C:
    lwz r0, 0x84(r1)
    psq_l f31, 0x78(r1), 0, 0
    lfd f31, 0x70(r1)
    psq_l f30, 0x68(r1), 0, 0
    lfd f30, 0x60(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_80454F08(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    lis r4, 0x4330
    stw r0, 0xa4(r1)
    stfd f31, 0x90(r1)
    psq_st f31, 0x98(r1), 0, 0
    stw r31, 0x8c(r1)
    stw r30, 0x88(r1)
    mr r30, r3
    stw r29, 0x84(r1)
    stw r28, 0x80(r1)
    lwz r0, 0xd18(r3)
    stw r4, 0x70(r1)
    cmpwi r0, 0x0
    stw r4, 0x78(r1)
    beq lbl_fn_80454F08_000014D4
    lwz r0, 0x14cc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80454F08_000011AC
    lwz r4, 0x14c8(r3)
    addi r0, r4, 0x1
    stw r0, 0x14c8(r3)
lbl_fn_80454F08_000011AC:
    lwz r0, 0x14c8(r3)
    cmpwi r0, 0xf0
    blt lbl_fn_80454F08_000011C0
    li r0, 0x0
    stw r0, 0x14c8(r3)
lbl_fn_80454F08_000011C0:
    lwz r0, 0x14c8(r3)
    lis r3, lbl_807549B8@ha
    lfd f5, lbl_807549B8@l(r3)
    xoris r0, r0, 0x8000
    stw r0, 0x74(r1)
    lfs f3, lbl_80886BB4
    lfd f4, 0x70(r1)
    lfs f0, lbl_80886BB8
    fsubs f4, f4, f5
    fdivs f3, f4, f3
    fmuls f1, f0, f3
    bl fn_8068AD58
    lwz r3, lbl_8087F430
    frsp f3, f1
    lfs f0, lbl_80886BBC
    li r4, 0x0
    lwz r5, 0x10d8(r3)
    li r6, 0x0
    fmuls f3, f3, f0
    lwz r0, 0x78(r5)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80454F08_00001244
lbl_fn_80454F08_0000121C:
    lwz r3, 0x7c(r5)
    lwzx r0, r3, r6
    cmpwi r0, 0x259
    bne lbl_fn_80454F08_00001238
    mulli r0, r4, 0x28
    add r3, r3, r0
    b lbl_fn_80454F08_00001248
lbl_fn_80454F08_00001238:
    addi r6, r6, 0x28
    addi r4, r4, 0x1
    bdnz lbl_fn_80454F08_0000121C
lbl_fn_80454F08_00001244:
    li r3, 0x0
lbl_fn_80454F08_00001248:
    cmpwi r3, 0x0
    beq lbl_fn_80454F08_00001264
    psq_l f1, 0x4(r3), 0, 0
    lfs f2, 0xc(r3)
    stfs f2, 0x530(r30)
    psq_st f1, 0x528(r30), 0, 0
    b lbl_fn_80454F08_0000127C
lbl_fn_80454F08_00001264:
    lis r3, lbl_807C7030@ha
    addi r3, r3, lbl_807C7030@l
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x8(r3)
    stfs f2, 0x530(r30)
    psq_st f1, 0x528(r30), 0, 0
lbl_fn_80454F08_0000127C:
    lfs f0, lbl_80886BB0
    addi r31, r1, 0x44
    lwz r3, 0x2548(r30)
    lwz r0, 0x254c(r30)
    fadds f0, f0, f3
    cmpw r3, r0
    stfs f0, 0x52c(r30)
    blt lbl_fn_80454F08_000012B8
    lis r3, lbl_807C7030@ha
    addi r3, r3, lbl_807C7030@l
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x8(r3)
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x4c(r1)
    b lbl_fn_80454F08_00001420
lbl_fn_80454F08_000012B8:
    bl fn_80680CF8
    lis r28, 0x4178
    lis r29, lbl_807549B8@ha
    addi r0, r28, 0x749f
    lfd f7, lbl_807549B8@l(r29)
    mulhw r0, r0, r3
    lfs f5, lbl_80886BC0
    lfs f3, lbl_80886BA4
    lfs f4, 0x2554(r30)
    lfs f0, lbl_80886B9C
    fmuls f3, f3, f4
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x7c(r1)
    lfd f6, 0x78(r1)
    fsubs f6, f6, f7
    fdivs f5, f6, f5
    fmuls f3, f3, f5
    fmadds f31, f0, f4, f3
    bl fn_80680CF8
    addi r4, r28, 0x749f
    lfs f0, lbl_80886B80
    mulhw r5, r4, r3
    lwz r0, 0x2548(r30)
    lfd f7, lbl_807549B8@l(r29)
    srwi r4, r0, 31
    lfs f5, lbl_80886BC0
    clrlwi r0, r0, 31
    srawi r5, r5, 8
    xor r0, r0, r4
    srwi r6, r5, 31
    lfs f3, lbl_80886B90
    add r5, r5, r6
    lfs f4, 0x2550(r30)
    mulli r5, r5, 0x3e9
    subf. r0, r4, r0
    fmuls f3, f3, f4
    stfs f0, 0x24(r1)
    subf r0, r5, r3
    stfs f31, 0x28(r1)
    xoris r0, r0, 0x8000
    stw r0, 0x74(r1)
    lfd f6, 0x70(r1)
    fsubs f6, f6, f7
    fdivs f5, f6, f5
    fmsubs f5, f3, f5, f4
    stfs f5, 0x20(r1)
    bne lbl_fn_80454F08_000013B8
    fneg f4, f31
    addi r3, r1, 0x2c
    fneg f3, f0
    addi r4, r1, 0x20
    fneg f0, f5
    stfs f4, 0x34(r1)
    frsp f2, f4
    stfs f0, 0x2c(r1)
    stfs f3, 0x30(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x28(r1)
lbl_fn_80454F08_000013B8:
    lwz r3, 0x2548(r30)
    lis r4, lbl_807549B8@ha
    lwz r0, 0x254c(r30)
    addi r5, r1, 0x20
    xoris r3, r3, 0x8000
    stw r3, 0x7c(r1)
    xoris r0, r0, 0x8000
    lfd f5, lbl_807549B8@l(r4)
    stw r0, 0x74(r1)
    lfd f3, 0x78(r1)
    lfd f0, 0x70(r1)
    fsubs f6, f3, f5
    lfs f4, 0x20(r1)
    fsubs f5, f0, f5
    lfs f3, 0x24(r1)
    lfs f0, 0x28(r1)
    fdivs f5, f6, f5
    fmuls f2, f0, f5
    fmuls f4, f4, f5
    fmuls f0, f3, f5
    stfs f2, 0x28(r1)
    stfs f4, 0x20(r1)
    stfs f0, 0x24(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x4c(r1)
lbl_fn_80454F08_00001420:
    lfs f3, 0x528(r30)
    lfs f0, 0x44(r1)
    lfs f5, 0x52c(r30)
    fadds f6, f3, f0
    lfs f4, 0x48(r1)
    lwz r0, 0x2a4c(r30)
    fadds f4, f5, f4
    lfs f3, 0x530(r30)
    lfs f0, 0x4c(r1)
    cmpwi r0, 0x0
    stfs f6, 0x528(r30)
    fadds f0, f3, f0
    stfs f4, 0x52c(r30)
    stfs f0, 0x530(r30)
    beq lbl_fn_80454F08_000014D4
    lfs f5, 0x14d0(r30)
    addi r3, r1, 0x38
    lfs f4, 0x548(r30)
    lfs f3, 0x544(r30)
    lfs f0, 0x540(r30)
    fsubs f11, f5, f4
    fsubs f10, f5, f3
    lfs f6, 0x14d4(r30)
    fsubs f9, f5, f0
    stfs f5, 0x50(r1)
    fmuls f8, f11, f6
    fmuls f7, f10, f6
    fmuls f6, f9, f6
    stfs f5, 0x54(r1)
    fadds f2, f8, f4
    fadds f3, f7, f3
    stfs f5, 0x58(r1)
    fadds f0, f6, f0
    stfs f3, 0x3c(r1)
    stfs f0, 0x38(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f9, 0x14(r1)
    stfs f10, 0x18(r1)
    stfs f11, 0x1c(r1)
    stfs f6, 0x8(r1)
    stfs f7, 0xc(r1)
    stfs f8, 0x10(r1)
    stfs f2, 0x40(r1)
    psq_st f1, 0x540(r30), 0, 0
    stfs f2, 0x548(r30)
lbl_fn_80454F08_000014D4:
    mr r3, r30
    bl fn_80144710
    lwz r5, 0x100(r30)
    li r0, 0x0
    lwz r4, 0x2bc(r30)
    addi r3, r30, 0xb0
    rlwimi r4, r5, 8, 16, 23
    stw r4, 0x2bc(r30)
    addi r4, r1, 0x5c
    stw r0, 0x100(r30)
    stw r0, 0x5c(r1)
    bl fn_8000D430
    addic. r3, r1, 0x5c
    beq lbl_fn_80454F08_00001540
    lwz r4, 0x5c(r1)
    cmpwi r4, 0x0
    beq lbl_fn_80454F08_00001540
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_80454F08_00001538
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80454F08_00001538:
    li r0, 0x0
    stw r0, 0x5c(r1)
lbl_fn_80454F08_00001540:
    lwz r0, 0xa4(r1)
    psq_l f31, 0x98(r1), 0, 0
    lfd f31, 0x90(r1)
    lwz r31, 0x8c(r1)
    lwz r30, 0x88(r1)
    lwz r29, 0x84(r1)
    lwz r28, 0x80(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_8045531C(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    lis r4, lbl_807549D0@ha
    stw r0, 0xc4(r1)
    lis r0, 0x4330
    addi r4, r4, lbl_807549D0@l
    stw r31, 0xbc(r1)
    addi r4, r4, 0x163
    stw r30, 0xb8(r1)
    mr r30, r3
    addi r3, r3, 0xb0
    stw r0, 0xa8(r1)
    stw r0, 0xb0(r1)
    bl fn_80094B6C
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_8045531C_0000186C
    lfs f0, lbl_80886B80
    lfs f7, lbl_80886B78
    stfs f0, 0x98(r1)
    stfs f0, 0x9c(r1)
    stfs f0, 0xa0(r1)
    stfs f7, 0xa4(r1)
    lwz r0, 0x14e0(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8045531C_00001770
    lwz r0, 0x58c(r30)
    cmpwi r0, 0x8
    bne lbl_fn_8045531C_000016D8
    lwz r0, 0x18(r3)
    lis r3, lbl_807549B0@ha
    stw r0, 0x10(r1)
    lfd f6, lbl_807549B0@l(r3)
    lbz r3, 0x10(r1)
    stw r3, 0xac(r1)
    lbz r0, 0x11(r1)
    lfd f0, 0xa8(r1)
    stw r0, 0xb4(r1)
    lbz r3, 0x12(r1)
    fsubs f1, f0, f6
    lfd f0, 0xb0(r1)
    stw r3, 0xac(r1)
    fsubs f3, f0, f6
    lfs f5, lbl_80886BC4
    lfd f2, 0xa8(r1)
    fdivs f4, f1, f5
    lbz r0, 0x13(r1)
    stw r0, 0xb4(r1)
    lfs f0, lbl_80886B84
    lfd f1, 0xb0(r1)
    stfs f7, 0x68(r1)
    fdivs f3, f3, f5
    stfs f4, 0x88(r1)
    stfs f7, 0x6c(r1)
    stfs f7, 0x70(r1)
    stfs f7, 0x74(r1)
    stfs f3, 0x8c(r1)
    fsubs f10, f7, f4
    fsubs f2, f2, f6
    fsubs f1, f1, f6
    stfs f10, 0x28(r1)
    fsubs f8, f7, f3
    fdivs f2, f2, f5
    stfs f8, 0x2c(r1)
    stfs f2, 0x90(r1)
    fmuls f9, f10, f0
    fdivs f1, f1, f5
    stfs f9, 0x18(r1)
    stfs f1, 0x94(r1)
    fmuls f8, f8, f0
    fsubs f10, f7, f2
    stfs f8, 0x1c(r1)
    fadds f8, f8, f3
    fadds f3, f9, f4
    stfs f10, 0x30(r1)
    fmuls f4, f10, f0
    stfs f3, 0x78(r1)
    fadds f2, f4, f2
    stfs f4, 0x20(r1)
    stfs f2, 0x80(r1)
    stfs f2, 0xa0(r1)
    fsubs f2, f7, f1
    stfs f8, 0x7c(r1)
    fmuls f0, f2, f0
    stfs f3, 0x98(r1)
    stfs f0, 0x24(r1)
    fadds f0, f0, f1
    stfs f8, 0x9c(r1)
    stfs f2, 0x34(r1)
    stfs f0, 0x84(r1)
    stfs f0, 0xa4(r1)
    b lbl_fn_8045531C_00001768
lbl_fn_8045531C_000016D8:
    lfs f2, 0x14d8(r30)
    lfs f1, 0x14dc(r30)
    lfs f0, lbl_80886BC8
    fadds f1, f2, f1
    stfs f1, 0x14d8(r30)
    fcmpo cr0, f1, f0
    ble lbl_fn_8045531C_000016FC
    fsubs f0, f1, f0
    stfs f0, 0x14d8(r30)
lbl_fn_8045531C_000016FC:
    lfs f2, 0x14d8(r30)
    lfs f1, lbl_80886BC8
    lfs f0, lbl_80886BB8
    fdivs f1, f2, f1
    fmuls f1, f0, f1
    bl fn_8068AD58
    frsp f2, f1
    lfs f1, lbl_80886B94
    lis r4, lbl_807C8A48@ha
    addi r3, r4, lbl_807C8A48@l
    fmadds f4, f1, f2, f1
    lfs f0, 0xc(r3)
    lfs f2, 0x8(r3)
    lfs f1, 0x4(r3)
    fmuls f3, f0, f4
    lfs f0, lbl_807C8A48@l(r4)
    fmuls f2, f2, f4
    fmuls f1, f1, f4
    stfs f3, 0x64(r1)
    fmuls f0, f0, f4
    stfs f1, 0x5c(r1)
    stfs f0, 0x58(r1)
    stfs f2, 0x60(r1)
    stfs f0, 0x98(r1)
    stfs f1, 0x9c(r1)
    stfs f2, 0xa0(r1)
    stfs f3, 0xa4(r1)
lbl_fn_8045531C_00001768:
    lfs f0, lbl_80886B78
    stfs f0, 0xa4(r1)
lbl_fn_8045531C_00001770:
    lwz r0, 0x1c(r31)
    lis r3, lbl_807549B0@ha
    stw r0, 0x8(r1)
    lis r4, lbl_807549D0@ha
    lfd f5, lbl_807549B0@l(r3)
    addi r4, r4, lbl_807549D0@l
    lbz r5, 0x8(r1)
    addi r3, r30, 0xb0
    stw r5, 0xac(r1)
    addi r4, r4, 0x163
    lbz r0, 0x9(r1)
    addi r5, r1, 0x98
    lfd f0, 0xa8(r1)
    addi r6, r1, 0x48
    stw r0, 0xb4(r1)
    addi r7, r1, 0x38
    fsubs f3, f0, f5
    lbz r8, 0xa(r1)
    lfd f0, 0xb0(r1)
    lbz r0, 0xb(r1)
    stw r8, 0xac(r1)
    fsubs f2, f0, f5
    lfs f4, lbl_80886BC4
    stw r0, 0xb4(r1)
    lfd f1, 0xa8(r1)
    fdivs f3, f3, f4
    lfd f0, 0xb0(r1)
    stfs f3, 0x38(r1)
    fsubs f1, f1, f5
    fsubs f0, f0, f5
    fdivs f2, f2, f4
    stfs f2, 0x3c(r1)
    fdivs f1, f1, f4
    stfs f1, 0x40(r1)
    fdivs f0, f0, f4
    stfs f0, 0x44(r1)
    lwz r0, 0x20(r31)
    stw r0, 0xc(r1)
    lbz r8, 0xc(r1)
    stw r8, 0xac(r1)
    lbz r0, 0xd(r1)
    lfd f0, 0xa8(r1)
    stw r0, 0xb4(r1)
    fsubs f1, f0, f5
    lbz r8, 0xe(r1)
    lfd f0, 0xb0(r1)
    lbz r0, 0xf(r1)
    fsubs f2, f0, f5
    stw r0, 0xb4(r1)
    fdivs f3, f1, f4
    stw r8, 0xac(r1)
    lfd f0, 0xb0(r1)
    lfd f1, 0xa8(r1)
    stfs f3, 0x48(r1)
    fsubs f1, f1, f5
    fsubs f0, f0, f5
    fdivs f2, f2, f4
    stfs f2, 0x4c(r1)
    fdivs f1, f1, f4
    stfs f1, 0x50(r1)
    fdivs f0, f0, f4
    stfs f0, 0x54(r1)
    bl fn_80094958
lbl_fn_8045531C_0000186C:
    lwz r0, 0xc4(r1)
    lwz r31, 0xbc(r1)
    lwz r30, 0xb8(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

asm void fn_80455638(void)
{
    nofralloc
    stwu r1, -0x1a0(r1)
    mflr r0
    stw r0, 0x1a4(r1)
    addi r11, r1, 0x130
    stfd f31, 0x190(r1)
    psq_st f31, 0x198(r1), 0, 0
    stfd f30, 0x180(r1)
    psq_st f30, 0x188(r1), 0, 0
    stfd f29, 0x170(r1)
    psq_st f29, 0x178(r1), 0, 0
    stfd f28, 0x160(r1)
    psq_st f28, 0x168(r1), 0, 0
    stfd f27, 0x150(r1)
    psq_st f27, 0x158(r1), 0, 0
    stfd f26, 0x140(r1)
    psq_st f26, 0x148(r1), 0, 0
    stfd f25, 0x130(r1)
    psq_st f25, 0x138(r1), 0, 0
    bl _savegpr_17
    lis r5, lbl_807549B8@ha
    li r22, 0x0
    lis r4, lbl_807549D0@ha
    lfs f29, lbl_80886B78
    lfs f28, lbl_80886B80
    mr r20, r3
    lfd f31, lbl_807549B8@l(r5)
    mr r28, r22
    lfs f30, lbl_80886BCC
    mr r17, r22
    lfs f25, lbl_80886BB0
    mr r26, r22
    lfs f26, lbl_80886BD0
    addi r31, r4, lbl_807549D0@l
    addi r24, r1, 0x60
    li r18, 0x0
    lis r25, 0x4330
    li r29, -0x1
    li r30, 0x1
    lis r27, 0x6666
    li r19, 0x20
    b lbl_fn_80455638_00001CF8
lbl_fn_80455638_00001928:
    lwz r0, 0x19a0(r20)
    add r23, r0, r18
    lwzx r3, r18, r0
    lwz r0, 0x10(r23)
    lwz r3, 0x7e0(r3)
    cmpwi r0, 0x0
    extrwi r21, r3, 1, 14
    bne lbl_fn_80455638_00001960
    cmpwi r21, 0x0
    beq lbl_fn_80455638_00001960
    lwz r3, lbl_8087F430
    li r5, 0x1
    lwz r4, 0x14(r23)
    bl fn_80370AE4
lbl_fn_80455638_00001960:
    stw r21, 0x10(r23)
    li r5, 0x0
    li r3, 0x0
    li r6, 0x0
    stfs f28, 0x4(r23)
    lwz r4, 0x0(r23)
    lwz r7, 0x38(r4)
    rlwinm r0, r7, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80455638_00001998
    clrlwi r0, r7, 31
    cmplwi r0, 0x1
    beq lbl_fn_80455638_00001998
    li r6, 0x1
lbl_fn_80455638_00001998:
    cmpwi r6, 0x0
    beq lbl_fn_80455638_000019B4
    lwz r0, 0x7e0(r4)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_80455638_000019B4
    li r3, 0x1
lbl_fn_80455638_000019B4:
    cmpwi r3, 0x0
    beq lbl_fn_80455638_000019E8
    lwz r0, 0x55c(r4)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_80455638_000019DC
    lwz r0, 0x560(r4)
    cmpwi r0, 0x1c
    bne lbl_fn_80455638_000019DC
    li r3, 0x1
lbl_fn_80455638_000019DC:
    cmpwi r3, 0x0
    bne lbl_fn_80455638_000019E8
    li r5, 0x1
lbl_fn_80455638_000019E8:
    cmpwi r5, 0x0
    beq lbl_fn_80455638_00001A10
    lwz r3, lbl_8087F048
    bl fn_80101340
    xoris r0, r3, 0x8000
    stw r0, 0xec(r1)
    stw r25, 0xe8(r1)
    lfd f0, 0xe8(r1)
    fsubs f0, f0, f31
    stfs f0, 0x4(r23)
lbl_fn_80455638_00001A10:
    lfs f0, 0x4(r23)
    fcmpo cr0, f0, f28
    cror eq, lt, eq
    bne lbl_fn_80455638_00001A28
    stw r26, 0x8(r23)
    b lbl_fn_80455638_00001CF0
lbl_fn_80455638_00001A28:
    lwz r3, 0x8(r23)
    addi r0, r27, 0x6667
    addi r4, r3, 0x1
    stw r4, 0x8(r23)
    mulhw r0, r0, r4
    srawi r0, r0, 4
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r0, r0, 0x28
    subf. r0, r0, r4
    bne lbl_fn_80455638_00001CF0
    lwz r0, 0xe4(r1)
    mr r4, r20
    stw r28, 0xc8(r1)
    li r3, 0x0
    clrlwi r0, r0, 4
    stw r28, 0xcc(r1)
    stw r28, 0xd0(r1)
    stw r28, 0xd4(r1)
    stw r28, 0xd8(r1)
    stw r29, 0xdc(r1)
    stw r0, 0xe4(r1)
    stw r29, 0xe0(r1)
    mtctr r19
lbl_fn_80455638_00001A88:
    lwz r0, 0x19ac(r4)
    cmpwi r0, 0x0
    bne lbl_fn_80455638_00001AA4
    mulli r0, r3, 0x5c
    add r3, r20, r0
    addi r21, r3, 0x19ac
    b lbl_fn_80455638_00001AB4
lbl_fn_80455638_00001AA4:
    addi r4, r4, 0x5c
    addi r3, r3, 0x1
    bdnz lbl_fn_80455638_00001A88
    li r21, 0x0
lbl_fn_80455638_00001AB4:
    cmpwi r21, 0x0
    beq lbl_fn_80455638_00001CF0
    lwz r3, 0x0(r23)
    lfs f3, 0x4(r23)
    lfs f0, 0x7d8(r3)
    fmuls f27, f30, f3
    fsubs f0, f0, f29
    fcmpo cr0, f27, f0
    bge lbl_fn_80455638_00001ADC
    b lbl_fn_80455638_00001AE0
lbl_fn_80455638_00001ADC:
    fmr f27, f0
lbl_fn_80455638_00001AE0:
    fctiwz f0, f27
    stw r30, 0xc8(r1)
    li r5, 0x0
    li r6, 0x0
    stfd f0, 0xe8(r1)
    lwz r4, 0xec(r1)
    stw r4, 0xcc(r1)
    lwz r3, 0x0(r23)
    addi r3, r3, 0x7d4
    bl fn_8012DF7C
    lwz r3, 0x0(r23)
    mr r6, r20
    stfs f28, 0x6c(r1)
    addi r4, r1, 0xc8
    lfs f4, 0x530(r3)
    addi r5, r1, 0x78
    lfs f3, 0x52c(r3)
    li r8, 0x0
    lfs f0, 0x528(r3)
    fadds f4, f4, f28
    fadds f3, f3, f25
    stfs f25, 0x70(r1)
    fadds f0, f0, f28
    lwz r3, lbl_8087F048
    stfs f3, 0x7c(r1)
    li r9, 0x0
    stfs f0, 0x78(r1)
    stfs f4, 0x80(r1)
    stfs f28, 0x74(r1)
    lwz r7, 0x0(r23)
    bl fn_80108C10
    lwz r3, 0x0(r23)
    fmr f1, f29
    addi r4, r20, 0x1988
    addi r7, r1, 0x1c
    stfs f28, 0x28(r1)
    addi r5, r3, 0xb0
    addi r8, r1, 0x28
    stfs f28, 0x2c(r1)
    addi r9, r1, 0x38
    li r6, 0x0
    li r10, -0x1
    stfs f28, 0x30(r1)
    stfs f28, 0x1c(r1)
    stfs f28, 0x20(r1)
    stfs f28, 0x24(r1)
    stfs f29, 0x38(r1)
    stfs f29, 0x3c(r1)
    stfs f29, 0x40(r1)
    stfs f29, 0x44(r1)
    stw r29, 0x8(r1)
    stw r30, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r3, 0x0(r23)
    addi r4, r31, 0x169
    li r5, 0x0
    addi r23, r3, 0xb0
    mr r3, r23
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80455638_00001BE0
    li r5, 0x0
    b lbl_fn_80455638_00001BEC
lbl_fn_80455638_00001BE0:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r23)
    add r5, r3, r0
lbl_fn_80455638_00001BEC:
    lfs f0, 0x1c(r5)
    mr r3, r21
    lfs f3, 0xc(r5)
    li r4, 0x0
    lfs f4, 0x2c(r5)
    stfs f3, 0x60(r1)
    fmr f2, f4
    stfs f0, 0x64(r1)
    psq_l f1, 0x0(r24), 0, 0
    psq_st f1, 0x14(r21), 0, 0
    stfs f2, 0x1c(r21)
    lfs f2, 0x530(r20)
    psq_l f1, 0x528(r20), 0, 0
    psq_st f1, 0x20(r21), 0, 0
    stfs f2, 0x28(r21)
    lfs f3, 0x14d0(r20)
    lfs f0, 0x24(r21)
    stfs f4, 0x68(r1)
    fmadds f0, f26, f3, f0
    stfs f0, 0x24(r21)
    lfs f2, 0x1c(r21)
    psq_l f1, 0x14(r21), 0, 0
    psq_st f1, 0x4(r21), 0, 0
    frsp f0, f2
    stfs f2, 0xc(r21)
    stfs f27, 0x10(r21)
    stfs f28, 0x50(r21)
    stfs f28, 0x4c(r21)
    stfs f28, 0x44(r21)
    stfs f28, 0x3c(r21)
    stfs f28, 0x34(r21)
    stfs f28, 0x30(r21)
    stfs f29, 0x54(r21)
    stfs f29, 0x40(r21)
    stfs f29, 0x2c(r21)
    lfs f3, 0x4(r21)
    stfs f3, 0x38(r21)
    lfs f3, 0x8(r21)
    stfs f3, 0x48(r21)
    stfs f0, 0x58(r21)
    stw r30, 0x0(r21)
    bl fn_80232B7C
    stw r17, 0x8(r1)
    addi r4, r20, 0x1994
    lfs f1, lbl_80886B78
    addi r7, r21, 0x2c
    stw r29, 0xc(r1)
    li r5, -0x1
    li r6, 0x5
    li r8, 0x0
    stw r30, 0x10(r1)
    li r9, 0x0
    li r10, 0x0
    lwz r3, lbl_8087F3C0
    bl fn_8023A680
    lfs f1, lbl_80886B78
    addi r3, r1, 0x18
    addi r4, r31, 0x16f
    addi r5, r20, 0x528
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x18
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_80455638_00001CF0:
    addi r22, r22, 0x1
    addi r18, r18, 0x18
lbl_fn_80455638_00001CF8:
    lwz r0, 0x19a4(r20)
    cmplw r22, r0
    blt lbl_fn_80455638_00001928
    lfs f29, lbl_80886B80
    addi r17, r1, 0x84
    lfs f30, lbl_80886BD4
    li r24, 0x0
    lfs f31, lbl_80886BAC
    li r19, 0x0
    lfs f26, lbl_80886BD8
    li r22, 0x0
    lfs f28, lbl_80886B78
    li r21, -0x1
    lfs f27, lbl_80886BB0
    li r18, 0x1
lbl_fn_80455638_00001D34:
    add r23, r20, r19
    lwzu r0, 0x19ac(r23)
    cmpwi r0, 0x0
    beq lbl_fn_80455638_00001F6C
    lfs f5, 0x28(r23)
    addi r3, r1, 0x9c
    lfs f4, 0x1c(r23)
    mr r4, r3
    lfs f3, 0x20(r23)
    lfs f0, 0x14(r23)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0xa4(r1)
    stfs f0, 0x9c(r1)
    stfs f29, 0xa0(r1)
    bl fn_805F98D0
    lfs f5, 0x28(r23)
    addi r3, r1, 0x90
    lfs f4, 0xc(r23)
    lfs f3, 0x20(r23)
    lfs f0, 0x4(r23)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x98(r1)
    stfs f0, 0x90(r1)
    stfs f29, 0x94(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f30
    bge lbl_fn_80455638_00001DD8
    addi r3, r1, 0x90
    bl fn_805F9940
    lfs f4, 0x9c(r1)
    lfs f3, 0xa0(r1)
    lfs f0, 0xa4(r1)
    fmuls f4, f4, f1
    fmuls f3, f3, f1
    fmuls f0, f0, f1
    stfs f4, 0x9c(r1)
    stfs f3, 0xa0(r1)
    stfs f0, 0xa4(r1)
    b lbl_fn_80455638_00001DFC
lbl_fn_80455638_00001DD8:
    lfs f4, 0x9c(r1)
    lfs f3, 0xa0(r1)
    lfs f0, 0xa4(r1)
    fmuls f4, f4, f31
    fmuls f3, f3, f31
    fmuls f0, f0, f31
    stfs f4, 0x9c(r1)
    stfs f3, 0xa0(r1)
    stfs f0, 0xa4(r1)
lbl_fn_80455638_00001DFC:
    lfs f3, 0x4(r23)
    addi r3, r1, 0x54
    lfs f0, 0x9c(r1)
    fadds f6, f3, f0
    stfs f6, 0x4(r23)
    lfs f3, 0x8(r23)
    lfs f0, 0xa0(r1)
    fadds f5, f3, f0
    stfs f5, 0x8(r23)
    lfs f3, 0xc(r23)
    lfs f0, 0xa4(r1)
    fadds f4, f3, f0
    stfs f4, 0xc(r23)
    lfs f3, 0x24(r23)
    fsubs f0, f3, f5
    fmadds f0, f26, f0, f5
    stfs f0, 0x8(r23)
    fsubs f5, f0, f3
    stfs f29, 0x50(r23)
    stfs f29, 0x4c(r23)
    stfs f29, 0x44(r23)
    stfs f29, 0x3c(r23)
    stfs f29, 0x34(r23)
    stfs f29, 0x30(r23)
    stfs f28, 0x54(r23)
    stfs f28, 0x40(r23)
    stfs f28, 0x2c(r23)
    stfs f6, 0x38(r23)
    stfs f0, 0x48(r23)
    stfs f4, 0x58(r23)
    lfs f3, 0x28(r23)
    lfs f0, 0x20(r23)
    fsubs f3, f4, f3
    fsubs f0, f6, f0
    stfs f5, 0x58(r1)
    stfs f0, 0x54(r1)
    stfs f3, 0x5c(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f28
    bge lbl_fn_80455638_00001F6C
    lwz r3, lbl_8087F3C0
    mr r4, r23
    li r5, 0x0
    li r6, 0x0
    bl fn_80239DAC
    lwz r0, 0xc4(r1)
    mr r3, r20
    stw r22, 0xac(r1)
    li r4, 0x0
    clrlwi r0, r0, 4
    stw r22, 0xb0(r1)
    stw r22, 0xb4(r1)
    stw r22, 0xb8(r1)
    stw r21, 0xbc(r1)
    stw r0, 0xc4(r1)
    stw r21, 0xc0(r1)
    stw r18, 0xa8(r1)
    lfs f0, 0x10(r23)
    fneg f0, f0
    fctiwz f0, f0
    stfd f0, 0xe8(r1)
    lwz r0, 0xec(r1)
    stw r0, 0xac(r1)
    bl fn_80148B0C
    lfs f2, 0xc(r3)
    li r5, 0x0
    psq_l f1, 0x4(r3), 0, 0
    addi r3, r20, 0x7d4
    psq_st f1, 0x0(r17), 0, 0
    fadds f0, f2, f29
    lwz r4, 0xac(r1)
    li r6, 0x0
    lfs f4, 0x84(r1)
    lfs f3, 0x88(r1)
    fadds f4, f4, f29
    stfs f29, 0x48(r1)
    fadds f3, f3, f27
    stfs f27, 0x4c(r1)
    stfs f29, 0x50(r1)
    stfs f4, 0x84(r1)
    stfs f3, 0x88(r1)
    stfs f0, 0x8c(r1)
    bl fn_8012DF7C
    lwz r3, lbl_8087F048
    mr r5, r17
    mr r6, r20
    mr r7, r20
    addi r4, r1, 0xa8
    li r8, 0x0
    li r9, 0x0
    bl fn_80108C10
    stw r22, 0x0(r23)
lbl_fn_80455638_00001F6C:
    addi r24, r24, 0x1
    addi r19, r19, 0x5c
    cmpwi r24, 0x20
    blt lbl_fn_80455638_00001D34
    addi r11, r1, 0x130
    psq_l f31, 0x198(r1), 0, 0
    lfd f31, 0x190(r1)
    psq_l f30, 0x188(r1), 0, 0
    lfd f30, 0x180(r1)
    psq_l f29, 0x178(r1), 0, 0
    lfd f29, 0x170(r1)
    psq_l f28, 0x168(r1), 0, 0
    lfd f28, 0x160(r1)
    psq_l f27, 0x158(r1), 0, 0
    lfd f27, 0x150(r1)
    psq_l f26, 0x148(r1), 0, 0
    lfd f26, 0x140(r1)
    psq_l f25, 0x138(r1), 0, 0
    lfd f25, 0x130(r1)
    bl _restgpr_17
    lwz r0, 0x1a4(r1)
    mtlr r0
    addi r1, r1, 0x1a0
    blr
}
