#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __register_global_object(void);
extern void dtor_80084684(void);
extern void fn_80010374(void);
extern void fn_800119C0(void);
extern void fn_800128FC(void);
extern void fn_80046EE0(void);
extern void fn_80047B54(void);
extern void fn_800499D0(void);
extern void fn_80084320(void);
extern void fn_8008A4E0(void);
extern void fn_80092814(void);
extern void fn_800A555C(void);
extern void fn_800C37FC(void);
extern void fn_800D1D3C(void);
extern void fn_800D2338(void);
extern void fn_801255C8(void);
extern void fn_80126214(void);
extern void fn_80128A30(void);
extern void fn_8013CB68(void);
extern void fn_802144A8(void);
extern void fn_803CE148(void);
extern void fn_8046EC7C(void);
extern void fn_8046ECC8(void);
extern void fn_805381A4(void);
extern void fn_805381CC(void);
extern void fn_805382C0(void);
extern void fn_80538DC8(void);
extern void fn_8057F0FC(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F9160(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_8068AEA4(void);
extern void fn_806958E0(void);

/* External data declarations */
extern u8 lbl_80736614[];
extern u8 lbl_80779E30[];
extern u8 lbl_80779E68[];
extern u8 lbl_80779EA0[];
extern u8 lbl_80779ED8[];
extern u8 lbl_807C7858[];
extern u8 lbl_807C7864[];
extern u8 lbl_807C7870[];
extern u8 lbl_807C787C[];

/* Small data declarations */
extern u32 lbl_8087EE90;
extern u32 lbl_8087EF70;
extern u32 lbl_8087EFC0;
extern u32 lbl_8087EFE8;
extern u32 lbl_8087F050;
extern u32 lbl_8087F054;
extern u32 lbl_8087F058;
extern u32 lbl_8087F05C;
extern u32 lbl_8087F060;
extern u32 lbl_8087F064;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F518;
extern u32 lbl_8087F9C0;
extern u32 lbl_808815F8;
extern u32 lbl_808815FC;
extern u32 lbl_80881600;
extern u32 lbl_80881604;
extern u32 lbl_80881608;
extern u32 lbl_8088160C;
extern u32 lbl_80881610;
extern u32 lbl_80881618;
extern u32 lbl_8088161C;
extern u32 lbl_80881620;
extern u32 lbl_80881624;
extern u32 lbl_80881628;
extern u32 lbl_8088162C;
extern u32 lbl_80881630;
extern u32 lbl_80881634;
extern u32 lbl_80881638;

/* Function declarations */
void fn_8010D770(void);
void fn_8010D7B4(void);
void fn_8010D808(void);
void fn_8010D854(void);
void fn_8010D98C(void);
void fn_8010DA94(void);
void fn_8010DAD4(void);
void fn_8010DB14(void);
void fn_8010DB54(void);
void fn_8010DB68(void);
void fn_8010DB88(void);
void fn_8010DB94(void);
void fn_8010DD34(void);
void fn_8010E3F0(void);
void fn_8010E604(void);
void fn_8010E60C(void);
void fn_8010E7B8(void);
void fn_8010EB58(void);
void fn_8010EBE0(void);
void fn_8010ECBC(void);

asm void fn_8010D770(void)
{
    nofralloc
    cmpwi r4, 0x0
    beq lbl_fn_8010D770_0000003C
    lwz r0, 0x4(r4)
    cmpwi r0, 0xcc
    beq lbl_fn_8010D770_00000034
    cmpwi r0, 0xd1
    beq lbl_fn_8010D770_00000034
    cmpwi r0, 0xd5
    beq lbl_fn_8010D770_00000034
    cmpwi r0, 0x5bc
    beq lbl_fn_8010D770_00000034
    cmpwi r0, 0x658
    bne lbl_fn_8010D770_0000003C
lbl_fn_8010D770_00000034:
    li r3, 0x1
    blr
lbl_fn_8010D770_0000003C:
    li r3, 0x0
    blr
}

asm void fn_8010D7B4(void)
{
    nofralloc
    cmpwi r4, 0x0
    bne lbl_fn_8010D7B4_00000054
    li r3, 0x0
    blr
lbl_fn_8010D7B4_00000054:
    lwz r0, 0x4(r4)
    cmpwi r0, 0x136
    beq lbl_fn_8010D7B4_00000088
    cmpwi r0, 0x139
    beq lbl_fn_8010D7B4_00000088
    cmpwi r0, 0x13c
    beq lbl_fn_8010D7B4_00000088
    cmpwi r0, 0x146
    beq lbl_fn_8010D7B4_00000088
    cmpwi r0, 0x15a
    beq lbl_fn_8010D7B4_00000088
    cmpwi r0, 0x232c
    bne lbl_fn_8010D7B4_00000090
lbl_fn_8010D7B4_00000088:
    li r3, 0x1
    blr
lbl_fn_8010D7B4_00000090:
    li r3, 0x0
    blr
}

asm void fn_8010D808(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x505
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    stw r31, 0x0(r3)
    addi r3, r3, 0x4
    bl fn_8008A4E0
    stw r31, 0x218(r30)
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8010D854(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    stfd f31, 0x90(r1)
    psq_st f31, 0x98(r1), 0, 0
    stw r31, 0x8c(r1)
    mr r31, r5
    stw r30, 0x88(r1)
    mr r30, r4
    stw r29, 0x84(r1)
    mr r29, r3
    lwz r0, 0x218(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8010D854_000001F8
    mr r3, r0
    lwz r12, 0x0(r3)
    lwz r12, 0x60(r12)
    mtctr r12
    bctrl
    lwz r3, 0x218(r29)
    fmr f31, f1
    lwz r4, 0x10(r31)
    li r5, 0x0
    addi r31, r3, 0xb0
    mr r3, r31
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8010D854_0000015C
    li r4, 0x0
    b lbl_fn_8010D854_00000168
lbl_fn_8010D854_0000015C:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r31)
    add r4, r3, r0
lbl_fn_8010D854_00000168:
    cmpwi r4, 0x0
    beq lbl_fn_8010D854_000001F8
    frsp f1, f31
    lfs f0, 0x2c(r4)
    lfs f7, 0x1c(r4)
    addi r3, r1, 0x20
    lfs f8, 0xc(r4)
    fmr f2, f1
    fmr f3, f1
    stfs f8, 0x14(r1)
    stfs f7, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f8, 0xc(r30)
    stfs f7, 0x1c(r30)
    stfs f0, 0x2c(r30)
    stfs f31, 0x8(r1)
    stfs f31, 0xc(r1)
    stfs f31, 0x10(r1)
    bl fn_805F9160
    mr r3, r30
    addi r4, r1, 0x20
    addi r5, r1, 0x50
    bl fn_805F89F0
    addi r3, r1, 0x50
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f6, 0x28(r30), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
lbl_fn_8010D854_000001F8:
    lwz r0, 0xa4(r1)
    psq_l f31, 0x98(r1), 0, 0
    lfd f31, 0x90(r1)
    lwz r31, 0x8c(r1)
    lwz r30, 0x88(r1)
    lwz r29, 0x84(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_8010D98C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r3, lbl_807C7858@ha
    li r4, 0x0
    stw r0, 0x14(r1)
    lbz r0, lbl_8087F050
    stw r4, lbl_807C7858@l(r3)
    addi r3, r3, lbl_807C7858@l
    extsb. r0, r0
    stw r4, 0x4(r3)
    stw r4, 0x8(r3)
    bne lbl_fn_8010D98C_00000278
    lis r3, lbl_80779EA0@ha
    lis r4, fn_8010DA94@ha
    addi r3, r3, lbl_80779EA0@l
    lis r5, lbl_807C7864@ha
    stw r3, lbl_8087F054
    addi r4, r4, fn_8010DA94@l
    addi r5, r5, lbl_807C7864@l
    la r3, lbl_8087F054
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8087F050
lbl_fn_8010D98C_00000278:
    lbz r0, lbl_8087F058
    lis r3, lbl_807C7858@ha
    la r4, lbl_8087F054
    stw r4, lbl_807C7858@l(r3)
    extsb. r0, r0
    bne lbl_fn_8010D98C_000002BC
    lis r3, lbl_80779E30@ha
    lis r4, fn_8010DAD4@ha
    addi r3, r3, lbl_80779E30@l
    lis r5, lbl_807C7870@ha
    stw r3, lbl_8087F05C
    addi r4, r4, fn_8010DAD4@l
    addi r5, r5, lbl_807C7870@l
    la r3, lbl_8087F05C
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8087F058
lbl_fn_8010D98C_000002BC:
    lbz r0, lbl_8087F060
    lis r3, lbl_807C7858@ha
    addi r3, r3, lbl_807C7858@l
    la r4, lbl_8087F05C
    extsb. r0, r0
    stw r4, 0x4(r3)
    bne lbl_fn_8010D98C_00000304
    lis r3, lbl_80779E68@ha
    lis r4, fn_8010DB14@ha
    addi r3, r3, lbl_80779E68@l
    lis r5, lbl_807C787C@ha
    stw r3, lbl_8087F064
    addi r4, r4, fn_8010DB14@l
    addi r5, r5, lbl_807C787C@l
    la r3, lbl_8087F064
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8087F060
lbl_fn_8010D98C_00000304:
    lis r3, lbl_807C7858@ha
    la r0, lbl_8087F064
    addi r3, r3, lbl_807C7858@l
    stw r0, 0x8(r3)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8010DA94(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_8010DA94_0000034C
    cmpwi r4, 0x0
    ble lbl_fn_8010DA94_0000034C
    bl dtor_80084684
lbl_fn_8010DA94_0000034C:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8010DAD4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_8010DAD4_0000038C
    cmpwi r4, 0x0
    ble lbl_fn_8010DAD4_0000038C
    bl dtor_80084684
lbl_fn_8010DAD4_0000038C:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8010DB14(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_8010DB14_000003CC
    cmpwi r4, 0x0
    ble lbl_fn_8010DB14_000003CC
    bl dtor_80084684
lbl_fn_8010DB14_000003CC:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8010DB54(void)
{
    nofralloc
    lis r4, lbl_807C7858@ha
    slwi r0, r3, 2
    addi r4, r4, lbl_807C7858@l
    lwzx r3, r4, r0
    blr
}

asm void fn_8010DB68(void)
{
    nofralloc
    lis r3, lbl_807C7858@ha
    lis r4, fn_8010DB88@ha
    addi r3, r3, lbl_807C7858@l
    li r5, 0x0
    addi r4, r4, fn_8010DB88@l
    li r6, 0x4
    li r7, 0x3
    b fn_806958E0
}

asm void fn_8010DB88(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    blr
}

asm void fn_8010DB94(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    beq lbl_fn_8010DB94_00000458
    cmpwi r5, 0x6
    beq lbl_fn_8010DB94_00000528
    b lbl_fn_8010DB94_000005A0
lbl_fn_8010DB94_00000458:
    mr r3, r31
    bl fn_805381A4
    mr r30, r3
    mr r3, r31
    bl fn_805381CC
    lwz r0, 0x168(r3)
    li r4, 0x0
    lwz r5, 0x10(r30)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8010DB94_000004A4
lbl_fn_8010DB94_00000484:
    lwz r0, 0x164(r3)
    add r30, r0, r4
    lwz r0, 0x14(r30)
    cmpw r5, r0
    bne lbl_fn_8010DB94_0000049C
    b lbl_fn_8010DB94_000004A8
lbl_fn_8010DB94_0000049C:
    addi r4, r4, 0x1c0
    bdnz lbl_fn_8010DB94_00000484
lbl_fn_8010DB94_000004A4:
    li r30, 0x0
lbl_fn_8010DB94_000004A8:
    mr r3, r30
    bl fn_800128FC
    cmpwi r3, 0x0
    beq lbl_fn_8010DB94_000005A0
    mr r4, r31
    addi r3, r1, 0x8
    li r5, 0x1
    bl fn_805382C0
    lwz r0, 0x30(r31)
    cmpwi r0, 0x5
    ble lbl_fn_8010DB94_000004E0
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x28
    b lbl_fn_8010DB94_000004E4
lbl_fn_8010DB94_000004E0:
    li r3, 0x0
lbl_fn_8010DB94_000004E4:
    lfs f31, 0x4(r3)
    mr r3, r30
    bl fn_800128FC
    addi r31, r3, 0xc64
    addi r4, r1, 0x8
    lfs f1, lbl_808815F8
    mr r3, r31
    mr r5, r4
    li r6, 0x8
    bl fn_80128A30
    stfs f31, 0x28(r31)
    mr r3, r31
    bl fn_801255C8
    lwz r0, 0x18(r30)
    rlwinm r0, r0, 0, 3, 1
    stw r0, 0x18(r30)
    b lbl_fn_8010DB94_000005A0
lbl_fn_8010DB94_00000528:
    mr r3, r31
    bl fn_805381CC
    lwz r0, 0x30(r31)
    cmpwi r0, 0x1
    ble lbl_fn_8010DB94_00000548
    lwz r4, 0x2c(r31)
    addi r4, r4, 0x8
    b lbl_fn_8010DB94_0000054C
lbl_fn_8010DB94_00000548:
    li r4, 0x0
lbl_fn_8010DB94_0000054C:
    lwz r0, 0x168(r3)
    lwz r6, 0x4(r4)
    li r4, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8010DB94_00000584
lbl_fn_8010DB94_00000564:
    lwz r0, 0x164(r3)
    add r5, r0, r4
    lwz r0, 0x14(r5)
    cmpw r6, r0
    bne lbl_fn_8010DB94_0000057C
    b lbl_fn_8010DB94_00000588
lbl_fn_8010DB94_0000057C:
    addi r4, r4, 0x1c0
    bdnz lbl_fn_8010DB94_00000564
lbl_fn_8010DB94_00000584:
    li r5, 0x0
lbl_fn_8010DB94_00000588:
    lwz r0, 0x20(r5)
    cmpwi r0, 0x6
    bne lbl_fn_8010DB94_000005A0
    mr r3, r31
    li r4, 0x2
    bl fn_80538DC8
lbl_fn_8010DB94_000005A0:
    psq_l f31, 0x28(r1), 0, 0
    li r3, 0x0
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8010DD34(void)
{
    nofralloc
    stwu r1, -0x240(r1)
    mflr r0
    stw r0, 0x244(r1)
    stfd f31, 0x230(r1)
    psq_st f31, 0x238(r1), 0, 0
    stfd f30, 0x220(r1)
    psq_st f30, 0x228(r1), 0, 0
    stfd f29, 0x210(r1)
    psq_st f29, 0x218(r1), 0, 0
    stw r31, 0x20c(r1)
    stw r30, 0x208(r1)
    mr r30, r4
    mr r3, r30
    stw r29, 0x204(r1)
    stw r28, 0x200(r1)
    bl fn_805381A4
    mr r31, r3
    mr r3, r30
    bl fn_805381CC
    lwz r0, 0x168(r3)
    li r4, 0x0
    lwz r5, 0x10(r31)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8010DD34_00000648
lbl_fn_8010DD34_00000628:
    lwz r0, 0x164(r3)
    add r29, r0, r4
    lwz r0, 0x14(r29)
    cmpw r5, r0
    bne lbl_fn_8010DD34_00000640
    b lbl_fn_8010DD34_0000064C
lbl_fn_8010DD34_00000640:
    addi r4, r4, 0x1c0
    bdnz lbl_fn_8010DD34_00000628
lbl_fn_8010DD34_00000648:
    li r29, 0x0
lbl_fn_8010DD34_0000064C:
    mr r3, r29
    bl fn_800128FC
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_8010DD34_00000684
    lwz r0, 0x18(r29)
    extrwi r0, r0, 1, 2
    cmplwi r0, 0x1
    beq lbl_fn_8010DD34_0000067C
    lwz r0, 0x18(r29)
    oris r0, r0, 0x2000
    stw r0, 0x18(r29)
lbl_fn_8010DD34_0000067C:
    li r3, 0x0
    b lbl_fn_8010DD34_00000C48
lbl_fn_8010DD34_00000684:
    lwz r0, 0x18(r29)
    addi r28, r3, 0xc64
    extrwi r0, r0, 1, 2
    cmplwi r0, 0x1
    bne lbl_fn_8010DD34_00000748
    mr r4, r30
    addi r3, r1, 0x110
    li r5, 0x1
    bl fn_805382C0
    lwz r0, 0x30(r30)
    cmpwi r0, 0x5
    ble lbl_fn_8010DD34_000006C0
    lwz r3, 0x2c(r30)
    addi r3, r3, 0x28
    b lbl_fn_8010DD34_000006C4
lbl_fn_8010DD34_000006C0:
    li r3, 0x0
lbl_fn_8010DD34_000006C4:
    lfs f29, 0x4(r3)
    mr r4, r29
    addi r3, r1, 0xd4
    bl fn_80010374
    lfs f3, 0x118(r1)
    addi r3, r1, 0xe0
    lfs f0, 0xdc(r1)
    lfs f5, 0x114(r1)
    fsubs f6, f3, f0
    lfs f4, 0xd8(r1)
    lfs f3, 0x110(r1)
    lfs f0, 0xd4(r1)
    fsubs f4, f5, f4
    stfs f6, 0xe8(r1)
    fsubs f0, f3, f0
    stfs f4, 0xe4(r1)
    stfs f0, 0xe0(r1)
    bl fn_805F9920
    fmuls f0, f29, f29
    fcmpo cr0, f1, f0
    ble lbl_fn_8010DD34_00000748
    addi r4, r1, 0x110
    lfs f1, lbl_808815F8
    mr r3, r28
    li r6, 0x8
    mr r5, r4
    bl fn_80128A30
    stfs f29, 0x28(r28)
    mr r3, r28
    bl fn_801255C8
    lwz r0, 0x18(r29)
    rlwinm r0, r0, 0, 3, 1
    stw r0, 0x18(r29)
lbl_fn_8010DD34_00000748:
    psq_l f1, 0x534(r31), 0, 0
    addi r3, r1, 0x104
    lfs f2, 0x53c(r31)
    stfs f2, 0x10c(r1)
    lfs f31, lbl_808815F8
    psq_st f1, 0x0(r3), 0, 0
    lwz r0, 0x18(r29)
    extrwi r0, r0, 1, 2
    cmplwi r0, 0x1
    beq lbl_fn_8010DD34_000009CC
    lwz r0, 0x2c(r28)
    cmpwi r0, 0x0
    beq lbl_fn_8010DD34_00000788
    lwz r0, 0x18(r29)
    oris r0, r0, 0x2000
    stw r0, 0x18(r29)
lbl_fn_8010DD34_00000788:
    mr r4, r30
    addi r3, r1, 0xc8
    li r5, 0x1
    bl fn_805382C0
    addi r3, r1, 0xc8
    lfs f2, 0xd0(r1)
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r28
    psq_st f1, 0x30(r28), 0, 0
    stfs f2, 0x38(r28)
    bl fn_80126214
    psq_l f1, 0x58(r28), 0, 0
    addi r3, r1, 0xf8
    lfs f2, 0x60(r28)
    stfs f2, 0x100(r1)
    psq_st f1, 0x0(r3), 0, 0
    bl fn_805F9940
    lfs f0, lbl_808815FC
    fmr f31, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_8010DD34_000007E0
    fmr f31, f0
lbl_fn_8010DD34_000007E0:
    lfs f0, lbl_80881600
    fcmpo cr0, f31, f0
    ble lbl_fn_8010DD34_00000BF4
    addi r3, r1, 0xf8
    addi r29, r1, 0xb0
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r29
    lfs f2, 0x100(r1)
    mr r4, r29
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0xb8(r1)
    bl fn_805F98D0
    lfs f2, 0xb8(r1)
    addi r28, r1, 0xbc
    psq_l f1, 0x0(r29), 0, 0
    fabs f3, f2
    lfs f0, lbl_80881604
    psq_st f1, 0x0(r28), 0, 0
    frsp f3, f3
    stfs f2, 0xc4(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_8010DD34_0000085C
    lfs f3, 0xbc(r1)
    lfs f0, lbl_808815F8
    fcmpo cr0, f3, f0
    ble lbl_fn_8010DD34_00000850
    lfs f0, lbl_80881608
    b lbl_fn_8010DD34_00000854
lbl_fn_8010DD34_00000850:
    lfs f0, lbl_8088160C
lbl_fn_8010DD34_00000854:
    stfs f0, 0x90(r1)
    b lbl_fn_8010DD34_00000870
lbl_fn_8010DD34_0000085C:
    frsp f2, f2
    lfs f1, 0xbc(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x90(r1)
lbl_fn_8010DD34_00000870:
    lfs f0, 0x90(r1)
    addi r3, r1, 0x190
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808815F8
    addi r4, r1, 0x80
    lfs f29, 0x198(r1)
    mr r5, r4
    lfs f30, 0x194(r1)
    addi r3, r1, 0x1c0
    lfs f13, 0x190(r1)
    lfs f12, 0x1a8(r1)
    lfs f11, 0x1a4(r1)
    lfs f10, 0x1a0(r1)
    lfs f9, 0x1b8(r1)
    lfs f8, 0x1b4(r1)
    lfs f7, 0x1b0(r1)
    lfs f6, 0x1bc(r1)
    lfs f5, 0x1ac(r1)
    lfs f4, 0x19c(r1)
    lfs f0, lbl_808815FC
    psq_l f1, 0x0(r28), 0, 0
    lfs f2, 0xc4(r1)
    stfs f3, 0x1f0(r1)
    stfs f3, 0x1f4(r1)
    stfs f3, 0x1f8(r1)
    stfs f0, 0x1fc(r1)
    stfs f13, 0x50(r1)
    stfs f30, 0x54(r1)
    stfs f29, 0x58(r1)
    stfs f13, 0x1c0(r1)
    stfs f30, 0x1c4(r1)
    stfs f29, 0x1c8(r1)
    stfs f10, 0x5c(r1)
    stfs f11, 0x60(r1)
    stfs f12, 0x64(r1)
    stfs f10, 0x1d0(r1)
    stfs f11, 0x1d4(r1)
    stfs f12, 0x1d8(r1)
    stfs f7, 0x68(r1)
    stfs f8, 0x6c(r1)
    stfs f9, 0x70(r1)
    stfs f7, 0x1e0(r1)
    stfs f8, 0x1e4(r1)
    stfs f9, 0x1e8(r1)
    stfs f4, 0x74(r1)
    stfs f5, 0x78(r1)
    stfs f6, 0x7c(r1)
    stfs f4, 0x1cc(r1)
    stfs f5, 0x1dc(r1)
    stfs f6, 0x1ec(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x88(r1)
    bl fn_805F9750
    lfs f2, 0x88(r1)
    lfs f0, lbl_80881604
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8010DD34_0000098C
    lfs f3, 0x84(r1)
    lfs f0, lbl_808815F8
    fcmpo cr0, f3, f0
    ble lbl_fn_8010DD34_0000097C
    lfs f0, lbl_80881608
    b lbl_fn_8010DD34_00000980
lbl_fn_8010DD34_0000097C:
    lfs f0, lbl_8088160C
lbl_fn_8010DD34_00000980:
    fneg f0, f0
    stfs f0, 0x8c(r1)
    b lbl_fn_8010DD34_000009A0
lbl_fn_8010DD34_0000098C:
    lfs f1, 0x84(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x8c(r1)
lbl_fn_8010DD34_000009A0:
    lfs f2, lbl_808815F8
    addi r3, r1, 0x8c
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x104
    stfs f2, 0x94(r1)
    stfs f2, 0xc4(r1)
    frsp f2, f2
    psq_st f1, 0x0(r28), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x10c(r1)
    b lbl_fn_8010DD34_00000BF4
lbl_fn_8010DD34_000009CC:
    lfs f3, 0x38(r28)
    addi r3, r1, 0xec
    lfs f0, 0x530(r31)
    lfs f5, 0x34(r28)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r31)
    lfs f3, 0x30(r28)
    lfs f0, 0x528(r31)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0xf0(r1)
    stfs f0, 0xec(r1)
    stfs f6, 0xf4(r1)
    bl fn_805F9920
    fabs f3, f1
    lfs f0, lbl_80881604
    frsp f3, f3
    fcmpo cr0, f3, f0
    blt lbl_fn_8010DD34_00000BF4
    addi r3, r1, 0xec
    addi r28, r1, 0x98
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r28
    lfs f2, 0xf4(r1)
    mr r4, r28
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0xa0(r1)
    bl fn_805F98D0
    lfs f2, 0xa0(r1)
    addi r29, r1, 0xa4
    psq_l f1, 0x0(r28), 0, 0
    fabs f3, f2
    lfs f0, lbl_80881604
    psq_st f1, 0x0(r29), 0, 0
    frsp f3, f3
    stfs f2, 0xac(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_8010DD34_00000A88
    lfs f3, 0xa4(r1)
    lfs f0, lbl_808815F8
    fcmpo cr0, f3, f0
    ble lbl_fn_8010DD34_00000A7C
    lfs f0, lbl_80881608
    b lbl_fn_8010DD34_00000A80
lbl_fn_8010DD34_00000A7C:
    lfs f0, lbl_8088160C
lbl_fn_8010DD34_00000A80:
    stfs f0, 0x48(r1)
    b lbl_fn_8010DD34_00000A9C
lbl_fn_8010DD34_00000A88:
    frsp f2, f2
    lfs f1, 0xa4(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_8010DD34_00000A9C:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x120
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_808815F8
    addi r4, r1, 0x38
    lfs f30, 0x128(r1)
    mr r5, r4
    lfs f29, 0x124(r1)
    addi r3, r1, 0x150
    lfs f13, 0x120(r1)
    lfs f12, 0x138(r1)
    lfs f11, 0x134(r1)
    lfs f10, 0x130(r1)
    lfs f9, 0x148(r1)
    lfs f8, 0x144(r1)
    lfs f7, 0x140(r1)
    lfs f6, 0x14c(r1)
    lfs f5, 0x13c(r1)
    lfs f4, 0x12c(r1)
    lfs f0, lbl_808815FC
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0xac(r1)
    stfs f3, 0x180(r1)
    stfs f3, 0x184(r1)
    stfs f3, 0x188(r1)
    stfs f0, 0x18c(r1)
    stfs f13, 0x8(r1)
    stfs f29, 0xc(r1)
    stfs f30, 0x10(r1)
    stfs f13, 0x150(r1)
    stfs f29, 0x154(r1)
    stfs f30, 0x158(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0x160(r1)
    stfs f11, 0x164(r1)
    stfs f12, 0x168(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0x170(r1)
    stfs f8, 0x174(r1)
    stfs f9, 0x178(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0x15c(r1)
    stfs f5, 0x16c(r1)
    stfs f6, 0x17c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_80881604
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8010DD34_00000BB8
    lfs f3, 0x3c(r1)
    lfs f0, lbl_808815F8
    fcmpo cr0, f3, f0
    ble lbl_fn_8010DD34_00000BA8
    lfs f0, lbl_80881608
    b lbl_fn_8010DD34_00000BAC
lbl_fn_8010DD34_00000BA8:
    lfs f0, lbl_8088160C
lbl_fn_8010DD34_00000BAC:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_8010DD34_00000BCC
lbl_fn_8010DD34_00000BB8:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_8010DD34_00000BCC:
    lfs f2, lbl_808815F8
    addi r3, r1, 0x44
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x104
    stfs f2, 0x4c(r1)
    stfs f2, 0xac(r1)
    frsp f2, f2
    psq_st f1, 0x0(r29), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x10c(r1)
lbl_fn_8010DD34_00000BF4:
    lwz r0, 0x30(r30)
    cmpwi r0, 0x6
    ble lbl_fn_8010DD34_00000C0C
    lwz r3, 0x2c(r30)
    addi r3, r3, 0x30
    b lbl_fn_8010DD34_00000C10
lbl_fn_8010DD34_00000C0C:
    li r3, 0x0
lbl_fn_8010DD34_00000C10:
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8010DD34_00000C24
    lfs f0, lbl_80881610
    b lbl_fn_8010DD34_00000C28
lbl_fn_8010DD34_00000C24:
    lfs f0, lbl_808815FC
lbl_fn_8010DD34_00000C28:
    fmuls f31, f31, f0
    lfs f2, lbl_808815FC
    mr r3, r31
    addi r4, r1, 0x104
    li r5, 0x0
    fmr f1, f31
    bl fn_8013CB68
    li r3, 0x0
lbl_fn_8010DD34_00000C48:
    lwz r0, 0x244(r1)
    psq_l f31, 0x238(r1), 0, 0
    lfd f31, 0x230(r1)
    psq_l f30, 0x228(r1), 0, 0
    lfd f30, 0x220(r1)
    psq_l f29, 0x218(r1), 0, 0
    lfd f29, 0x210(r1)
    lwz r31, 0x20c(r1)
    lwz r30, 0x208(r1)
    lwz r29, 0x204(r1)
    lwz r28, 0x200(r1)
    mtlr r0
    addi r1, r1, 0x240
    blr
}

asm void fn_8010E3F0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r4
    mr r3, r30
    stw r29, 0x34(r1)
    stw r28, 0x30(r1)
    bl fn_805381A4
    mr r31, r3
    mr r3, r30
    bl fn_805381CC
    lwz r0, 0x168(r3)
    li r4, 0x0
    lwz r5, 0x10(r31)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8010E3F0_00000CEC
lbl_fn_8010E3F0_00000CCC:
    lwz r0, 0x164(r3)
    add r31, r0, r4
    lwz r0, 0x14(r31)
    cmpw r5, r0
    bne lbl_fn_8010E3F0_00000CE4
    b lbl_fn_8010E3F0_00000CF0
lbl_fn_8010E3F0_00000CE4:
    addi r4, r4, 0x1c0
    bdnz lbl_fn_8010E3F0_00000CCC
lbl_fn_8010E3F0_00000CEC:
    li r31, 0x0
lbl_fn_8010E3F0_00000CF0:
    lwz r0, 0x30(r30)
    cmpwi r0, 0x0
    ble lbl_fn_8010E3F0_00000D04
    lwz r3, 0x2c(r30)
    b lbl_fn_8010E3F0_00000D08
lbl_fn_8010E3F0_00000D04:
    li r3, 0x0
lbl_fn_8010E3F0_00000D08:
    lwz r0, 0x30(r30)
    lwz r3, 0x4(r3)
    cmpwi r0, 0x1
    stw r3, 0x18(r1)
    ble lbl_fn_8010E3F0_00000D28
    lwz r3, 0x2c(r30)
    addi r3, r3, 0x8
    b lbl_fn_8010E3F0_00000D2C
lbl_fn_8010E3F0_00000D28:
    li r3, 0x0
lbl_fn_8010E3F0_00000D2C:
    lwz r0, 0x30(r30)
    lwz r3, 0x4(r3)
    cmpwi r0, 0x2
    stw r3, 0x8(r1)
    ble lbl_fn_8010E3F0_00000D4C
    lwz r3, 0x2c(r30)
    addi r3, r3, 0x10
    b lbl_fn_8010E3F0_00000D50
lbl_fn_8010E3F0_00000D4C:
    li r3, 0x0
lbl_fn_8010E3F0_00000D50:
    lwz r0, 0x30(r30)
    lwz r3, 0x4(r3)
    cmpwi r0, 0x3
    stw r3, 0x1c(r1)
    ble lbl_fn_8010E3F0_00000D70
    lwz r3, 0x2c(r30)
    addi r3, r3, 0x18
    b lbl_fn_8010E3F0_00000D74
lbl_fn_8010E3F0_00000D70:
    li r3, 0x0
lbl_fn_8010E3F0_00000D74:
    lwz r0, 0x30(r30)
    lwz r3, 0x4(r3)
    cmpwi r0, 0x4
    stw r3, 0xc(r1)
    ble lbl_fn_8010E3F0_00000D94
    lwz r3, 0x2c(r30)
    addi r3, r3, 0x20
    b lbl_fn_8010E3F0_00000D98
lbl_fn_8010E3F0_00000D94:
    li r3, 0x0
lbl_fn_8010E3F0_00000D98:
    lwz r0, 0x30(r30)
    lwz r3, 0x4(r3)
    cmpwi r0, 0x5
    stw r3, 0x20(r1)
    ble lbl_fn_8010E3F0_00000DB8
    lwz r3, 0x2c(r30)
    addi r3, r3, 0x28
    b lbl_fn_8010E3F0_00000DBC
lbl_fn_8010E3F0_00000DB8:
    li r3, 0x0
lbl_fn_8010E3F0_00000DBC:
    lwz r0, 0x30(r30)
    lwz r3, 0x4(r3)
    cmpwi r0, 0x6
    stw r3, 0x10(r1)
    ble lbl_fn_8010E3F0_00000DDC
    lwz r3, 0x2c(r30)
    addi r3, r3, 0x30
    b lbl_fn_8010E3F0_00000DE0
lbl_fn_8010E3F0_00000DDC:
    li r3, 0x0
lbl_fn_8010E3F0_00000DE0:
    lwz r0, 0x30(r30)
    lwz r3, 0x4(r3)
    cmpwi r0, 0x7
    stw r3, 0x24(r1)
    ble lbl_fn_8010E3F0_00000E00
    lwz r3, 0x2c(r30)
    addi r3, r3, 0x38
    b lbl_fn_8010E3F0_00000E04
lbl_fn_8010E3F0_00000E00:
    li r3, 0x0
lbl_fn_8010E3F0_00000E04:
    lwz r0, 0x4(r3)
    addi r30, r1, 0x18
    stw r0, 0x14(r1)
    addi r29, r1, 0x8
    li r28, 0x0
lbl_fn_8010E3F0_00000E18:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    lwz r5, 0x0(r30)
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_8010E3F0_00000E5C
    lwz r5, 0x0(r29)
    mr r3, r31
    lfs f1, lbl_80881618
    li r4, 0x0
    lfs f2, lbl_8088161C
    li r6, 0x0
    li r7, 0xa
    li r8, 0x0
    li r9, 0x0
    li r10, 0x1
    bl fn_800119C0
lbl_fn_8010E3F0_00000E5C:
    addi r28, r28, 0x1
    addi r29, r29, 0x4
    cmpwi r28, 0x4
    addi r30, r30, 0x4
    blt lbl_fn_8010E3F0_00000E18
    lwz r31, 0x3c(r1)
    li r3, 0x0
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r28, 0x30(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8010E604(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_8010E60C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    beq lbl_fn_8010E60C_00000ED0
    cmpwi r5, 0x6
    beq lbl_fn_8010E60C_00000FAC
    b lbl_fn_8010E60C_00001024
lbl_fn_8010E60C_00000ED0:
    mr r3, r31
    bl fn_805381A4
    mr r30, r3
    mr r3, r31
    bl fn_805381CC
    lwz r0, 0x168(r3)
    li r4, 0x0
    lwz r5, 0x10(r30)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8010E60C_00000F1C
lbl_fn_8010E60C_00000EFC:
    lwz r0, 0x164(r3)
    add r30, r0, r4
    lwz r0, 0x14(r30)
    cmpw r5, r0
    bne lbl_fn_8010E60C_00000F14
    b lbl_fn_8010E60C_00000F20
lbl_fn_8010E60C_00000F14:
    addi r4, r4, 0x1c0
    bdnz lbl_fn_8010E60C_00000EFC
lbl_fn_8010E60C_00000F1C:
    li r30, 0x0
lbl_fn_8010E60C_00000F20:
    mr r3, r30
    bl fn_800128FC
    cmpwi r3, 0x0
    beq lbl_fn_8010E60C_00001024
    mr r4, r31
    addi r3, r1, 0x8
    li r5, 0x1
    bl fn_805382C0
    lwz r0, 0x30(r31)
    cmpwi r0, 0x5
    ble lbl_fn_8010E60C_00000F58
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x28
    b lbl_fn_8010E60C_00000F5C
lbl_fn_8010E60C_00000F58:
    li r3, 0x0
lbl_fn_8010E60C_00000F5C:
    lfs f31, 0x4(r3)
    mr r3, r30
    bl fn_800128FC
    addi r31, r3, 0xc64
    mr r3, r30
    bl fn_800128FC
    mr r5, r3
    lfs f1, lbl_80881620
    mr r3, r31
    addi r4, r1, 0x8
    addi r5, r5, 0x528
    li r6, 0x8
    bl fn_80128A30
    stfs f31, 0x28(r31)
    mr r3, r31
    bl fn_801255C8
    lwz r0, 0x18(r30)
    rlwinm r0, r0, 0, 3, 1
    stw r0, 0x18(r30)
    b lbl_fn_8010E60C_00001024
lbl_fn_8010E60C_00000FAC:
    mr r3, r31
    bl fn_805381CC
    lwz r0, 0x30(r31)
    cmpwi r0, 0x1
    ble lbl_fn_8010E60C_00000FCC
    lwz r4, 0x2c(r31)
    addi r4, r4, 0x8
    b lbl_fn_8010E60C_00000FD0
lbl_fn_8010E60C_00000FCC:
    li r4, 0x0
lbl_fn_8010E60C_00000FD0:
    lwz r0, 0x168(r3)
    lwz r6, 0x4(r4)
    li r4, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8010E60C_00001008
lbl_fn_8010E60C_00000FE8:
    lwz r0, 0x164(r3)
    add r5, r0, r4
    lwz r0, 0x14(r5)
    cmpw r6, r0
    bne lbl_fn_8010E60C_00001000
    b lbl_fn_8010E60C_0000100C
lbl_fn_8010E60C_00001000:
    addi r4, r4, 0x1c0
    bdnz lbl_fn_8010E60C_00000FE8
lbl_fn_8010E60C_00001008:
    li r5, 0x0
lbl_fn_8010E60C_0000100C:
    lwz r0, 0x20(r5)
    cmpwi r0, 0x6
    bne lbl_fn_8010E60C_00001024
    mr r3, r31
    li r4, 0x2
    bl fn_80538DC8
lbl_fn_8010E60C_00001024:
    psq_l f31, 0x28(r1), 0, 0
    li r3, 0x0
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8010E7B8(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    stfd f31, 0x120(r1)
    psq_st f31, 0x128(r1), 0, 0
    stfd f30, 0x110(r1)
    psq_st f30, 0x118(r1), 0, 0
    stfd f29, 0x100(r1)
    psq_st f29, 0x108(r1), 0, 0
    stw r31, 0xfc(r1)
    mr r31, r4
    mr r3, r31
    stw r30, 0xf8(r1)
    stw r29, 0xf4(r1)
    stw r28, 0xf0(r1)
    bl fn_805381A4
    mr r30, r3
    mr r3, r31
    bl fn_805381CC
    lwz r0, 0x168(r3)
    li r4, 0x0
    lwz r5, 0x10(r30)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8010E7B8_000010CC
lbl_fn_8010E7B8_000010AC:
    lwz r0, 0x164(r3)
    add r30, r0, r4
    lwz r0, 0x14(r30)
    cmpw r5, r0
    bne lbl_fn_8010E7B8_000010C4
    b lbl_fn_8010E7B8_000010D0
lbl_fn_8010E7B8_000010C4:
    addi r4, r4, 0x1c0
    bdnz lbl_fn_8010E7B8_000010AC
lbl_fn_8010E7B8_000010CC:
    li r30, 0x0
lbl_fn_8010E7B8_000010D0:
    mr r3, r30
    bl fn_800128FC
    cmpwi r3, 0x0
    mr r28, r3
    bne lbl_fn_8010E7B8_000010F8
    lwz r0, 0x18(r30)
    li r3, 0x0
    oris r0, r0, 0x2000
    stw r0, 0x18(r30)
    b lbl_fn_8010E7B8_000013B0
lbl_fn_8010E7B8_000010F8:
    psq_l f1, 0x534(r3), 0, 0
    addi r4, r1, 0x74
    lfs f2, 0x53c(r3)
    addi r29, r3, 0xc64
    stfs f2, 0x7c(r1)
    lfs f31, lbl_80881620
    psq_st f1, 0x0(r4), 0, 0
    lwz r0, 0xc90(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8010E7B8_00001130
    lwz r0, 0x18(r30)
    extrwi r0, r0, 1, 2
    cmplwi r0, 0x1
    bne lbl_fn_8010E7B8_00001140
lbl_fn_8010E7B8_00001130:
    lwz r0, 0x18(r30)
    oris r0, r0, 0x2000
    stw r0, 0x18(r30)
    b lbl_fn_8010E7B8_0000135C
lbl_fn_8010E7B8_00001140:
    mr r3, r29
    bl fn_80126214
    psq_l f1, 0x58(r29), 0, 0
    addi r3, r1, 0x68
    lfs f2, 0x60(r29)
    stfs f2, 0x70(r1)
    psq_st f1, 0x0(r3), 0, 0
    bl fn_805F9940
    lfs f0, lbl_80881624
    fmr f31, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_8010E7B8_00001174
    fmr f31, f0
lbl_fn_8010E7B8_00001174:
    lfs f0, lbl_80881628
    fcmpo cr0, f31, f0
    ble lbl_fn_8010E7B8_0000135C
    addi r3, r1, 0x68
    addi r30, r1, 0x50
    psq_l f1, 0x0(r3), 0, 0
    mr r3, r30
    lfs f2, 0x70(r1)
    mr r4, r30
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x58(r1)
    bl fn_805F98D0
    lfs f2, 0x58(r1)
    addi r29, r1, 0x5c
    psq_l f1, 0x0(r30), 0, 0
    fabs f3, f2
    lfs f0, lbl_8088162C
    psq_st f1, 0x0(r29), 0, 0
    frsp f3, f3
    stfs f2, 0x64(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_8010E7B8_000011F0
    lfs f3, 0x5c(r1)
    lfs f0, lbl_80881620
    fcmpo cr0, f3, f0
    ble lbl_fn_8010E7B8_000011E4
    lfs f0, lbl_80881630
    b lbl_fn_8010E7B8_000011E8
lbl_fn_8010E7B8_000011E4:
    lfs f0, lbl_80881634
lbl_fn_8010E7B8_000011E8:
    stfs f0, 0x48(r1)
    b lbl_fn_8010E7B8_00001204
lbl_fn_8010E7B8_000011F0:
    frsp f2, f2
    lfs f1, 0x5c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_8010E7B8_00001204:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x80
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80881620
    addi r4, r1, 0x38
    lfs f29, 0x88(r1)
    mr r5, r4
    lfs f30, 0x84(r1)
    addi r3, r1, 0xb0
    lfs f13, 0x80(r1)
    lfs f12, 0x98(r1)
    lfs f11, 0x94(r1)
    lfs f10, 0x90(r1)
    lfs f9, 0xa8(r1)
    lfs f8, 0xa4(r1)
    lfs f7, 0xa0(r1)
    lfs f6, 0xac(r1)
    lfs f5, 0x9c(r1)
    lfs f4, 0x8c(r1)
    lfs f0, lbl_80881624
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x64(r1)
    stfs f3, 0xe0(r1)
    stfs f3, 0xe4(r1)
    stfs f3, 0xe8(r1)
    stfs f0, 0xec(r1)
    stfs f13, 0x8(r1)
    stfs f30, 0xc(r1)
    stfs f29, 0x10(r1)
    stfs f13, 0xb0(r1)
    stfs f30, 0xb4(r1)
    stfs f29, 0xb8(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xc0(r1)
    stfs f11, 0xc4(r1)
    stfs f12, 0xc8(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0xd0(r1)
    stfs f8, 0xd4(r1)
    stfs f9, 0xd8(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0xbc(r1)
    stfs f5, 0xcc(r1)
    stfs f6, 0xdc(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_8088162C
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8010E7B8_00001320
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80881620
    fcmpo cr0, f3, f0
    ble lbl_fn_8010E7B8_00001310
    lfs f0, lbl_80881630
    b lbl_fn_8010E7B8_00001314
lbl_fn_8010E7B8_00001310:
    lfs f0, lbl_80881634
lbl_fn_8010E7B8_00001314:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_8010E7B8_00001334
lbl_fn_8010E7B8_00001320:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_8010E7B8_00001334:
    lfs f2, lbl_80881620
    addi r3, r1, 0x44
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x74
    stfs f2, 0x4c(r1)
    stfs f2, 0x64(r1)
    frsp f2, f2
    psq_st f1, 0x0(r29), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x7c(r1)
lbl_fn_8010E7B8_0000135C:
    lwz r0, 0x30(r31)
    cmpwi r0, 0x6
    ble lbl_fn_8010E7B8_00001374
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x30
    b lbl_fn_8010E7B8_00001378
lbl_fn_8010E7B8_00001374:
    li r3, 0x0
lbl_fn_8010E7B8_00001378:
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8010E7B8_0000138C
    lfs f0, lbl_80881638
    b lbl_fn_8010E7B8_00001390
lbl_fn_8010E7B8_0000138C:
    lfs f0, lbl_80881624
lbl_fn_8010E7B8_00001390:
    fmuls f31, f31, f0
    lfs f2, lbl_80881624
    mr r3, r28
    addi r4, r1, 0x74
    li r5, 0x0
    fmr f1, f31
    bl fn_8013CB68
    li r3, 0x0
lbl_fn_8010E7B8_000013B0:
    lwz r0, 0x134(r1)
    psq_l f31, 0x128(r1), 0, 0
    lfd f31, 0x120(r1)
    psq_l f30, 0x118(r1), 0, 0
    lfd f30, 0x110(r1)
    psq_l f29, 0x108(r1), 0, 0
    lfd f29, 0x100(r1)
    lwz r31, 0xfc(r1)
    lwz r30, 0xf8(r1)
    lwz r29, 0xf4(r1)
    lwz r28, 0xf0(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

asm void fn_8010EB58(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_fn_8010EB58_00001454
    lis r5, lbl_80736614@ha
    li r3, 0x50
    addi r5, r5, lbl_80736614@l
    li r4, 0x1
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_8010EB58_0000144C
    mr r4, r30
    bl fn_800D1D3C
    lis r3, lbl_80779ED8@ha
    li r0, 0x0
    addi r3, r3, lbl_80779ED8@l
    stw r3, 0x0(r31)
    stw r0, 0x48(r31)
lbl_fn_8010EB58_0000144C:
    mr r3, r31
    b lbl_fn_8010EB58_00001458
lbl_fn_8010EB58_00001454:
    li r3, 0x0
lbl_fn_8010EB58_00001458:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8010EBE0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8010EBE0_000014A0
    cmpwi r0, 0x1
    beq lbl_fn_8010EBE0_0000150C
    b lbl_fn_8010EBE0_00001524
lbl_fn_8010EBE0_000014A0:
    lwz r3, lbl_8087F518
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_8010EBE0_00001524
    bl fn_8046EC7C
    lis r4, lbl_80736614@ha
    lwz r3, lbl_8087EE90
    addi r4, r4, lbl_80736614@l
    addi r4, r4, 0x1
    bl fn_80046EE0
    lwz r3, lbl_8087EE90
    bl fn_800499D0
    lwz r4, lbl_8087EFE8
    stw r3, 0x2a10(r4)
    lwz r3, lbl_8087F9C0
    cmpwi r3, 0x0
    beq lbl_fn_8010EBE0_000014EC
    bl fn_8057F0FC
lbl_fn_8010EBE0_000014EC:
    bl fn_802144A8
    lwz r31, lbl_8087EE90
    bl fn_803CE148
    mr r4, r3
    mr r3, r31
    bl fn_80047B54
    li r0, 0x1
    stw r0, 0x48(r30)
lbl_fn_8010EBE0_0000150C:
    lwz r3, lbl_8087F518
    bl fn_8046ECC8
    cmpwi r3, 0x0
    bne lbl_fn_8010EBE0_00001524
    li r0, 0x3
    stw r0, 0x48(r30)
lbl_fn_8010EBE0_00001524:
    lwz r3, 0x48(r30)
    lwz r31, 0xc(r1)
    subi r0, r3, 0x3
    lwz r30, 0x8(r1)
    cntlzw r0, r0
    srwi r3, r0, 5
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8010ECBC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_800D2338
    lwz r4, lbl_8087F0A8
    lwz r3, lbl_8087EFC0
    addi r4, r4, 0x1b4
    bl fn_800C37FC
    lwz r4, lbl_8087EFC0
    stw r3, 0x50(r4)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
