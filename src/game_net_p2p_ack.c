#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_26(void);
extern void _savegpr_26(void);
extern void fn_80013F78(void);
extern void fn_80084320(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_80087E9C(void);
extern void fn_8008937C(void);
extern void fn_80092814(void);
extern void fn_800A55AC(void);
extern void fn_800CB3A0(void);
extern void fn_800D246C(void);
extern void fn_800DC6B4(void);
extern void fn_800EF73C(void);
extern void fn_80117228(void);
extern void fn_8012B028(void);
extern void fn_80134800(void);
extern void fn_801F4CB4(void);
extern void fn_801F6C10(void);
extern void fn_801F6C80(void);
extern void fn_801F8598(void);
extern void fn_801FECE0(void);
extern void fn_80202118(void);
extern void fn_80202D00(void);
extern void fn_8021946C(void);
extern void fn_802377B8(void);
extern void fn_8023780C(void);
extern void fn_804A4EEC(void);
extern void fn_804A5160(void);
extern void fn_804A660C(void);
extern void fn_804A71F0(void);
extern void fn_8050F940(void);
extern void fn_80512A38(void);
extern void fn_80530D8C(void);
extern void fn_805F89F0(void);
extern void fn_805F9160(void);
extern void fn_805F9940(void);
extern void fn_80695720(void);
extern void fn_806958E0(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_8075B2A8[];
extern u8 lbl_8075B2B0[];
extern u8 lbl_8075B2B8[];
extern u8 lbl_8075B510[];
extern u8 lbl_80793320[];

/* Small data declarations */
extern u32 lbl_8087EF70;
extern u32 lbl_8087F138;
extern u32 lbl_8087F580;
extern u32 lbl_808877CC;
extern u32 lbl_808877D0;
extern u32 lbl_808877D4;
extern u32 lbl_808877D8;

/* Function declarations */
void fn_80510FBC(void);
void fn_8051120C(void);
void fn_8051125C(void);
void fn_805112AC(void);
void fn_805112FC(void);
void fn_805113EC(void);
void fn_805114D8(void);
void fn_805115D4(void);
void fn_80511668(void);
void fn_8051166C(void);
void fn_80511708(void);
void fn_80511710(void);
void fn_80511718(void);
void fn_805117C0(void);
void fn_805118B8(void);
void fn_805119CC(void);
void fn_80511AE0(void);
void fn_80511DA0(void);
void fn_8051201C(void);
void fn_80512024(void);
void fn_80512028(void);
void fn_8051202C(void);
void fn_80512478(void);
void fn_805128C4(void);

asm void fn_80510FBC(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r27, 0x1c(r1)
    mr r27, r4
    mr r30, r5
    mr r29, r3
    li r4, 0x0
    li r5, 0x0
    lwz r28, lbl_8087EF70
    lwz r31, 0x80(r3)
    mr r3, r28
    bl fn_800A55AC
    cmpwi r3, 0x0
    bne lbl_fn_80510FBC_00000054
    mr r3, r28
    li r4, 0x0
    li r5, 0x1a
    bl fn_800A55AC
    cmpwi r3, 0x0
    beq lbl_fn_80510FBC_00000088
lbl_fn_80510FBC_00000054:
    lwz r3, 0x80(r29)
    subic. r0, r3, 0x1
    stw r0, 0x80(r29)
    bge lbl_fn_80510FBC_00000208
    cmpwi r27, 0x0
    beq lbl_fn_80510FBC_0000007C
    lwz r3, 0x84(r29)
    subi r0, r3, 0x1
    stw r0, 0x80(r29)
    b lbl_fn_80510FBC_00000208
lbl_fn_80510FBC_0000007C:
    li r0, 0x0
    stw r0, 0x80(r29)
    b lbl_fn_80510FBC_00000208
lbl_fn_80510FBC_00000088:
    mr r3, r28
    li r4, 0x0
    li r5, 0x1
    bl fn_800A55AC
    cmpwi r3, 0x0
    bne lbl_fn_80510FBC_000000B8
    mr r3, r28
    li r4, 0x0
    li r5, 0x19
    bl fn_800A55AC
    cmpwi r3, 0x0
    beq lbl_fn_80510FBC_000000F0
lbl_fn_80510FBC_000000B8:
    lwz r3, 0x80(r29)
    lwz r4, 0x84(r29)
    addi r0, r3, 0x1
    stw r0, 0x80(r29)
    cmpw r0, r4
    blt lbl_fn_80510FBC_00000208
    cmpwi r27, 0x0
    beq lbl_fn_80510FBC_000000E4
    li r0, 0x0
    stw r0, 0x80(r29)
    b lbl_fn_80510FBC_00000208
lbl_fn_80510FBC_000000E4:
    subi r0, r4, 0x1
    stw r0, 0x80(r29)
    b lbl_fn_80510FBC_00000208
lbl_fn_80510FBC_000000F0:
    mr r3, r28
    li r4, 0x0
    li r5, 0x2
    bl fn_800A55AC
    cmpwi r3, 0x0
    bne lbl_fn_80510FBC_00000120
    mr r3, r28
    li r4, 0x0
    li r5, 0x17
    bl fn_800A55AC
    cmpwi r3, 0x0
    beq lbl_fn_80510FBC_00000184
lbl_fn_80510FBC_00000120:
    lwz r5, 0x8c(r29)
    lwz r0, 0x80(r29)
    subf. r0, r5, r0
    stw r0, 0x80(r29)
    bge lbl_fn_80510FBC_00000208
    cmpwi r27, 0x0
    beq lbl_fn_80510FBC_00000164
    lwz r3, 0x84(r29)
    divw r4, r31, r5
    subi r0, r3, 0x1
    divw r0, r0, r5
    mullw r3, r4, r5
    mullw r0, r5, r0
    subf r3, r3, r31
    add r0, r3, r0
    stw r0, 0x80(r29)
    b lbl_fn_80510FBC_00000168
lbl_fn_80510FBC_00000164:
    stw r31, 0x80(r29)
lbl_fn_80510FBC_00000168:
    lwz r3, 0x84(r29)
    lwz r0, 0x80(r29)
    cmpw r0, r3
    blt lbl_fn_80510FBC_00000208
    subi r0, r3, 0x1
    stw r0, 0x80(r29)
    b lbl_fn_80510FBC_00000208
lbl_fn_80510FBC_00000184:
    mr r3, r28
    li r4, 0x0
    li r5, 0x3
    bl fn_800A55AC
    cmpwi r3, 0x0
    bne lbl_fn_80510FBC_000001B4
    mr r3, r28
    li r4, 0x0
    li r5, 0x18
    bl fn_800A55AC
    cmpwi r3, 0x0
    beq lbl_fn_80510FBC_00000208
lbl_fn_80510FBC_000001B4:
    lwz r3, 0x80(r29)
    lwz r4, 0x8c(r29)
    lwz r0, 0x84(r29)
    add r3, r3, r4
    stw r3, 0x80(r29)
    cmpw r3, r0
    blt lbl_fn_80510FBC_00000208
    cmpwi r27, 0x0
    beq lbl_fn_80510FBC_000001EC
    divw r0, r31, r4
    mullw r0, r0, r4
    subf r0, r0, r31
    stw r0, 0x80(r29)
    b lbl_fn_80510FBC_000001F0
lbl_fn_80510FBC_000001EC:
    stw r31, 0x80(r29)
lbl_fn_80510FBC_000001F0:
    lwz r3, 0x84(r29)
    lwz r0, 0x80(r29)
    cmpw r0, r3
    blt lbl_fn_80510FBC_00000208
    subi r0, r3, 0x1
    stw r0, 0x80(r29)
lbl_fn_80510FBC_00000208:
    lwz r0, 0x80(r29)
    lwz r3, 0x8c(r29)
    cmpw r0, r31
    divw r0, r0, r3
    mullw r0, r3, r0
    stw r0, 0x88(r29)
    beq lbl_fn_80510FBC_0000023C
    mr r4, r30
    addi r3, r1, 0x8
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_80510FBC_0000023C:
    lmw r27, 0x1c(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8051120C(void)
{
    nofralloc
    li r8, 0x0
    li r5, 0x0
    b lbl_fn_8051120C_00000290
lbl_fn_8051120C_0000025C:
    lwz r0, 0x50(r3)
    lwzx r7, r5, r0
    add r6, r0, r5
    cmpwi r7, 0x0
    beq lbl_fn_8051120C_00000288
    lbz r0, 0x3c(r6)
    cmpwi r0, 0x0
    beq lbl_fn_8051120C_00000288
    lwz r0, 0x104(r7)
    rlwimi r0, r4, 23, 8, 8
    stw r0, 0x104(r7)
lbl_fn_8051120C_00000288:
    addi r5, r5, 0x40
    addi r8, r8, 0x1
lbl_fn_8051120C_00000290:
    lwz r0, 0x4c(r3)
    cmpw r8, r0
    blt lbl_fn_8051120C_0000025C
    blr
}

asm void fn_8051125C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    mr r10, r6
    mr r9, r7
    stw r0, 0x24(r1)
    addi r6, r1, 0x14
    addi r7, r1, 0x8
    psq_l f1, 0x0(r10), 0, 0
    lfs f2, 0x8(r10)
    stfs f2, 0x1c(r1)
    psq_st f1, 0x0(r6), 0, 0
    psq_l f1, 0x0(r9), 0, 0
    lfs f2, 0x8(r9)
    stfs f2, 0x10(r1)
    psq_st f1, 0x0(r7), 0, 0
    bl fn_80512478
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805112AC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    mr r10, r6
    mr r9, r7
    stw r0, 0x24(r1)
    addi r6, r1, 0x14
    addi r7, r1, 0x8
    psq_l f1, 0x0(r10), 0, 0
    lfs f2, 0x8(r10)
    stfs f2, 0x1c(r1)
    psq_st f1, 0x0(r6), 0, 0
    psq_l f1, 0x0(r9), 0, 0
    lfs f2, 0x8(r9)
    stfs f2, 0x10(r1)
    psq_st f1, 0x0(r7), 0, 0
    bl fn_8051202C
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805112FC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    mr r3, r4
    lwz r0, 0x98(r29)
    srwi. r0, r0, 31
    bne lbl_fn_805112FC_00000374
    addi r4, r29, 0x99
    b lbl_fn_805112FC_00000378
lbl_fn_805112FC_00000374:
    lwz r4, 0xa0(r29)
lbl_fn_805112FC_00000378:
    bl fn_8008937C
    lis r31, lbl_8075B2B8@ha
    lfs f1, lbl_808877D4
    addi r31, r31, lbl_8075B2B8@l
    lfs f2, lbl_808877D8
    lfs f3, lbl_808877D0
    mr r30, r3
    addi r4, r31, 0xd
    addi r5, r29, 0xa4
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    lfs f1, lbl_808877D4
    mr r3, r30
    lfs f2, lbl_808877D8
    addi r4, r31, 0x17
    lfs f3, lbl_808877D0
    addi r5, r29, 0xb0
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    lfs f1, lbl_808877D4
    mr r3, r30
    lfs f2, lbl_808877D8
    addi r4, r31, 0x21
    lfs f3, lbl_808877D0
    addi r5, r29, 0xbc
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    lfs f1, lbl_808877D4
    mr r3, r30
    lfs f2, lbl_808877D8
    addi r4, r31, 0x2c
    lfs f3, lbl_808877D0
    addi r5, r29, 0xc8
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805113EC(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x34(r1)
    stfd f31, 0x28(r1)
    fmr f31, f2
    stfd f30, 0x20(r1)
    fmr f30, f1
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_fn_805113EC_000004F8
    li r4, 0x0
    bl fn_800D246C
    lwz r0, 0x104(r29)
    rlwimi r0, r30, 23, 8, 8
    stw r0, 0x104(r29)
    mr r3, r29
    bl fn_80202118
    cmpwi r3, 0x0
    beq lbl_fn_805113EC_000004F8
    mr r3, r29
    bl fn_80202118
    lwz r0, 0xfc(r3)
    rlwimi r0, r31, 28, 3, 3
    stw r0, 0xfc(r3)
    mr r3, r29
    bl fn_80202118
    stfs f31, 0x104(r3)
    mr r3, r29
    bl fn_80202118
    stfs f30, 0x100(r3)
    mr r3, r29
    bl fn_80202118
    lis r4, fn_8051166C@ha
    addi r4, r4, fn_8051166C@l
    stw r4, 0xe4(r3)
    mr r3, r29
    bl fn_80202118
    lis r4, fn_80511708@ha
    addi r4, r4, fn_80511708@l
    stw r4, 0xe8(r3)
    mr r3, r29
    bl fn_80202118
    lis r4, fn_80511710@ha
    addi r4, r4, fn_80511710@l
    stw r4, 0xec(r3)
lbl_fn_805113EC_000004F8:
    lwz r0, 0x34(r1)
    lfd f31, 0x28(r1)
    lfd f30, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_805114D8(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x34(r1)
    stfd f31, 0x28(r1)
    fmr f31, f2
    stfd f30, 0x20(r1)
    fmr f30, f1
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_fn_805114D8_000005F4
    li r4, 0x0
    bl fn_800D246C
    lwz r0, 0x104(r29)
    rlwimi r0, r30, 23, 8, 8
    stw r0, 0x104(r29)
    mr r3, r29
    bl fn_80202D00
    cmpwi r3, 0x0
    beq lbl_fn_805114D8_000005F4
    mr r3, r29
    bl fn_80202D00
    neg r0, r31
    or r0, r0, r31
    srwi r0, r0, 31
    stb r0, 0x4d(r3)
    mr r3, r29
    bl fn_80202D00
    stfs f31, 0x54(r3)
    mr r3, r29
    bl fn_80202D00
    stfs f30, 0x50(r3)
    mr r3, r29
    bl fn_80202D00
    bl fn_801F6C10
    lis r4, fn_8051166C@ha
    addi r4, r4, fn_8051166C@l
    stw r4, 0x9c(r3)
    mr r3, r29
    bl fn_80202D00
    bl fn_801F6C10
    lis r4, fn_80511708@ha
    addi r4, r4, fn_80511708@l
    stw r4, 0xa0(r3)
    mr r3, r29
    bl fn_80202D00
    bl fn_801F6C10
    lis r4, fn_80511710@ha
    addi r4, r4, fn_80511710@l
    stw r4, 0xa4(r3)
lbl_fn_805114D8_000005F4:
    lwz r0, 0x34(r1)
    lfd f31, 0x28(r1)
    lfd f30, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_805115D4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stfd f31, 0x18(r1)
    fmr f31, f2
    stfd f30, 0x10(r1)
    fmr f30, f1
    stw r31, 0xc(r1)
    mr r31, r5
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_fn_805115D4_0000068C
    li r4, 0x0
    bl fn_800D246C
    lwz r0, 0xfc(r30)
    lis r5, fn_8051166C@ha
    lis r4, fn_80511708@ha
    lis r3, fn_80511710@ha
    rlwimi r0, r31, 28, 3, 3
    addi r5, r5, fn_8051166C@l
    addi r4, r4, fn_80511708@l
    addi r3, r3, fn_80511710@l
    stw r0, 0xfc(r30)
    stfs f31, 0x104(r30)
    stfs f30, 0x100(r30)
    stw r5, 0xe4(r30)
    stw r4, 0xe8(r30)
    stw r3, 0xec(r30)
lbl_fn_805115D4_0000068C:
    lwz r0, 0x24(r1)
    lfd f31, 0x18(r1)
    lfd f30, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80511668(void)
{
    nofralloc
    blr
}

asm void fn_8051166C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    li r3, 0x1
    bl fn_80511668
    lwz r5, lbl_8087F138
    cmpwi r5, 0x0
    beq lbl_fn_8051166C_00000730
    lwz r3, lbl_8087F580
    cmpwi r3, 0x0
    beq lbl_fn_8051166C_00000730
    lwz r4, 0x1ac(r5)
    cmpwi r4, 0x0
    beq lbl_fn_8051166C_00000714
    mr r5, r29
    mr r6, r30
    mr r7, r31
    bl fn_804A71F0
    b lbl_fn_8051166C_00000730
lbl_fn_8051166C_00000714:
    lwz r4, 0x1a8(r5)
    cmpwi r4, 0x0
    beq lbl_fn_8051166C_00000730
    mr r5, r29
    mr r6, r30
    mr r7, r31
    bl fn_804A660C
lbl_fn_8051166C_00000730:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80511708(void)
{
    nofralloc
    li r3, 0x4
    b fn_80511668
}

asm void fn_80511710(void)
{
    nofralloc
    li r3, 0x2
    b fn_80511668
}

asm void fn_80511718(void)
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
    mr r29, r3
    b lbl_fn_80511718_000007DC
lbl_fn_80511718_00000784:
    lwz r0, 0x50(r29)
    add r3, r0, r31
    lwz r5, 0x8(r3)
    cmpwi r5, 0x0
    beq lbl_fn_80511718_000007A4
    lwz r3, 0x4(r5)
    addi r0, r3, 0x10
    b lbl_fn_80511718_000007A8
lbl_fn_80511718_000007A4:
    li r0, 0x0
lbl_fn_80511718_000007A8:
    cmpwi r0, 0x0
    beq lbl_fn_80511718_000007D4
    cmpwi r5, 0x0
    lwz r3, 0x48(r29)
    li r4, 0x0
    beq lbl_fn_80511718_000007CC
    lwz r5, 0x4(r5)
    addi r5, r5, 0x10
    b lbl_fn_80511718_000007D0
lbl_fn_80511718_000007CC:
    li r5, 0x0
lbl_fn_80511718_000007D0:
    bl fn_80530D8C
lbl_fn_80511718_000007D4:
    addi r31, r31, 0x40
    addi r30, r30, 0x1
lbl_fn_80511718_000007DC:
    lwz r0, 0x4c(r29)
    cmpw r30, r0
    blt lbl_fn_80511718_00000784
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805117C0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x20
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    bl _savegpr_26
    lis r4, lbl_8075B2B8@ha
    lfs f31, lbl_808877CC
    mr r26, r3
    li r27, 0x0
    addi r30, r4, lbl_8075B2B8@l
    li r28, 0x0
    b lbl_fn_805117C0_000008D0
lbl_fn_805117C0_0000083C:
    lwz r0, 0x50(r26)
    add r3, r0, r28
    lha r0, 0x4(r3)
    cmpwi r0, 0x1
    bne lbl_fn_805117C0_00000884
    lwz r3, 0x0(r3)
    cmpwi r3, 0x0
    beq lbl_fn_805117C0_000008C8
    bl fn_80202D00
    cmpwi r3, 0x0
    beq lbl_fn_805117C0_000008C8
    lwz r3, 0x50(r26)
    lwzx r3, r3, r28
    bl fn_80202D00
    fmr f1, f31
    addi r4, r30, 0x34
    bl fn_801F6C80
    b lbl_fn_805117C0_000008C8
lbl_fn_805117C0_00000884:
    lwz r3, 0x0(r3)
    cmpwi r3, 0x0
    beq lbl_fn_805117C0_000008C8
    bl fn_80202118
    cmpwi r3, 0x0
    beq lbl_fn_805117C0_000008C8
    lwz r3, 0x50(r26)
    addi r29, r30, 0x34
    lwzx r3, r3, r28
    bl fn_80202118
    mr r31, r3
    mr r3, r29
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    addi r3, r31, 0x58
    bl fn_801FECE0
lbl_fn_805117C0_000008C8:
    addi r28, r28, 0x40
    addi r27, r27, 0x1
lbl_fn_805117C0_000008D0:
    lwz r0, 0x4c(r26)
    cmpw r27, r0
    blt lbl_fn_805117C0_0000083C
    addi r11, r1, 0x20
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_805118B8(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_26
    lwz r3, 0x8(r6)
    mr r26, r4
    mr r27, r5
    mr r28, r6
    cmpwi r3, 0x0
    mr r29, r7
    mr r30, r8
    bne lbl_fn_805118B8_00000938
    li r31, 0x0
    b lbl_fn_805118B8_00000940
lbl_fn_805118B8_00000938:
    lwz r3, 0x4(r3)
    addi r31, r3, 0x10
lbl_fn_805118B8_00000940:
    lis r4, lbl_8075B2B8@ha
    mr r3, r31
    addi r4, r4, lbl_8075B2B8@l
    li r5, 0x0
    addi r4, r4, 0x3
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_805118B8_00000968
    li r4, 0x0
    b lbl_fn_805118B8_00000974
lbl_fn_805118B8_00000968:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r31)
    add r4, r3, r0
lbl_fn_805118B8_00000974:
    psq_l f1, 0x0(r4), 0, 0
    addi r3, r1, 0x8
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
    lwz r3, 0x8(r28)
    cmpwi r3, 0x0
    beq lbl_fn_805118B8_000009B8
    b lbl_fn_805118B8_000009BC
lbl_fn_805118B8_000009B8:
    li r3, 0x0
lbl_fn_805118B8_000009BC:
    addi r4, r1, 0x8
    addi r3, r3, 0x30
    mr r5, r4
    bl fn_805F89F0
    lwz r3, lbl_8087F580
    mr r4, r26
    lfs f1, 0x0(r29)
    mr r5, r27
    lfs f2, 0x4(r29)
    mr r7, r30
    lfs f3, 0x8(r29)
    addi r6, r1, 0x8
    lfs f4, 0xc(r29)
    lfs f5, 0x10(r29)
    bl fn_804A4EEC
    addi r11, r1, 0x50
    bl _restgpr_26
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_805119CC(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_26
    lwz r3, 0x8(r6)
    mr r26, r4
    mr r27, r5
    mr r28, r6
    cmpwi r3, 0x0
    mr r29, r7
    mr r30, r8
    bne lbl_fn_805119CC_00000A4C
    li r31, 0x0
    b lbl_fn_805119CC_00000A54
lbl_fn_805119CC_00000A4C:
    lwz r3, 0x4(r3)
    addi r31, r3, 0x10
lbl_fn_805119CC_00000A54:
    lis r4, lbl_8075B2B8@ha
    mr r3, r31
    addi r4, r4, lbl_8075B2B8@l
    li r5, 0x0
    addi r4, r4, 0x3
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_805119CC_00000A7C
    li r4, 0x0
    b lbl_fn_805119CC_00000A88
lbl_fn_805119CC_00000A7C:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r31)
    add r4, r3, r0
lbl_fn_805119CC_00000A88:
    psq_l f1, 0x0(r4), 0, 0
    addi r3, r1, 0x8
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
    lwz r3, 0x8(r28)
    cmpwi r3, 0x0
    beq lbl_fn_805119CC_00000ACC
    b lbl_fn_805119CC_00000AD0
lbl_fn_805119CC_00000ACC:
    li r3, 0x0
lbl_fn_805119CC_00000AD0:
    addi r4, r1, 0x8
    addi r3, r3, 0x30
    mr r5, r4
    bl fn_805F89F0
    lwz r3, lbl_8087F580
    mr r4, r26
    lfs f1, 0x0(r29)
    mr r5, r27
    lfs f2, 0x4(r29)
    mr r7, r30
    lfs f3, 0x8(r29)
    addi r6, r1, 0x8
    lfs f4, 0xc(r29)
    lfs f5, 0x10(r29)
    bl fn_804A5160
    addi r11, r1, 0x50
    bl _restgpr_26
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80511AE0(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    addi r11, r1, 0x100
    stfd f31, 0x110(r1)
    psq_st f31, 0x118(r1), 0, 0
    stfd f30, 0x100(r1)
    psq_st f30, 0x108(r1), 0, 0
    bl _savegpr_26
    cmpwi r3, 0x0
    lis r0, 0x4330
    stw r0, 0xd0(r1)
    mr r29, r3
    mr r30, r4
    mr r31, r5
    stw r0, 0xd8(r1)
    mr r26, r6
    beq lbl_fn_80511AE0_00000DBC
    li r0, 0x0
    stw r0, 0x8(r1)
    addi r3, r1, 0x10
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_80134800
    lwz r27, 0x1ac(r30)
    mr r3, r30
    bl fn_8012B028
    add r0, r27, r3
    lis r28, lbl_8075B2A8@ha
    xoris r0, r0, 0x8000
    stw r0, 0xd4(r1)
    lfd f1, lbl_8075B2A8@l(r28)
    lfd f0, 0xd0(r1)
    lfs f2, lbl_808877D0
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    ble lbl_fn_80511AE0_00000BC8
    b lbl_fn_80511AE0_00000BEC
lbl_fn_80511AE0_00000BC8:
    lwz r27, 0x1ac(r30)
    mr r3, r30
    bl fn_8012B028
    add r0, r27, r3
    lfd f1, lbl_8075B2A8@l(r28)
    xoris r0, r0, 0x8000
    stw r0, 0xdc(r1)
    lfd f0, 0xd8(r1)
    fsubs f2, f0, f1
lbl_fn_80511AE0_00000BEC:
    xoris r0, r27, 0x8000
    stw r0, 0xd4(r1)
    lis r3, lbl_8075B2A8@ha
    lwz r0, 0x88(r1)
    lfd f1, lbl_8075B2A8@l(r3)
    lfd f0, 0xd0(r1)
    cmpwi r0, 0x63
    fsubs f0, f0, f1
    fdivs f30, f0, f2
    blt lbl_fn_80511AE0_00000C18
    lfs f30, lbl_808877CC
lbl_fn_80511AE0_00000C18:
    cmpwi r26, 0x0
    beq lbl_fn_80511AE0_00000C58
    lis r28, lbl_8075B2B8@ha
    lwz r5, 0x94(r1)
    addi r28, r28, lbl_8075B2B8@l
    mr r3, r29
    addi r4, r28, 0x3c
    li r6, 0x0
    bl fn_801F4CB4
    addi r3, r28, 0x42
    bl fn_800DC6B4
    lfs f1, lbl_808877D0
    mr r4, r3
    addi r3, r29, 0x58
    bl fn_801FECE0
    b lbl_fn_80511AE0_00000CE0
lbl_fn_80511AE0_00000C58:
    lfs f0, 0x4(r30)
    lis r4, lbl_8075B2B8@ha
    addi r4, r4, lbl_8075B2B8@l
    mr r3, r29
    fctiwz f0, f0
    addi r4, r4, 0x3c
    li r6, 0x0
    stfd f0, 0xe0(r1)
    lwz r5, 0xe4(r1)
    bl fn_801F4CB4
    lwz r0, 0x94(r1)
    lis r3, lbl_8075B2A8@ha
    lfd f1, lbl_8075B2A8@l(r3)
    xoris r0, r0, 0x8000
    stw r0, 0xdc(r1)
    lfs f2, lbl_808877D0
    lfd f0, 0xd8(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    ble lbl_fn_80511AE0_00000CAC
    b lbl_fn_80511AE0_00000CB8
lbl_fn_80511AE0_00000CAC:
    stw r0, 0xd4(r1)
    lfd f0, 0xd0(r1)
    fsubs f2, f0, f1
lbl_fn_80511AE0_00000CB8:
    lfs f0, 0x4(r30)
    lis r3, lbl_8075B2B8@ha
    addi r3, r3, lbl_8075B2B8@l
    fdivs f31, f0, f2
    addi r3, r3, 0x42
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    addi r3, r29, 0x58
    bl fn_801FECE0
lbl_fn_80511AE0_00000CE0:
    lis r28, lbl_8075B2B8@ha
    lwz r5, 0x88(r1)
    addi r28, r28, lbl_8075B2B8@l
    mr r3, r29
    addi r4, r28, 0x49
    li r6, 0x0
    bl fn_801F4CB4
    addi r3, r28, 0x4f
    bl fn_800DC6B4
    fmr f1, f30
    mr r4, r3
    addi r3, r29, 0x58
    bl fn_801FECE0
    lfs f1, lbl_808877CC
    lfs f0, 0x228(r30)
    fcmpo cr0, f1, f0
    ble lbl_fn_80511AE0_00000D28
    b lbl_fn_80511AE0_00000D2C
lbl_fn_80511AE0_00000D28:
    fmr f1, f0
lbl_fn_80511AE0_00000D2C:
    lfs f31, lbl_808877D0
    fcmpo cr0, f31, f1
    bge lbl_fn_80511AE0_00000D3C
    b lbl_fn_80511AE0_00000D54
lbl_fn_80511AE0_00000D3C:
    lfs f31, lbl_808877CC
    lfs f0, 0x228(r30)
    fcmpo cr0, f31, f0
    ble lbl_fn_80511AE0_00000D50
    b lbl_fn_80511AE0_00000D54
lbl_fn_80511AE0_00000D50:
    fmr f31, f0
lbl_fn_80511AE0_00000D54:
    lis r28, lbl_8075B2B8@ha
    addi r28, r28, lbl_8075B2B8@l
    addi r3, r28, 0x57
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    addi r3, r29, 0x58
    bl fn_801FECE0
    lwz r4, 0xa0(r30)
    mr r3, r31
    li r5, 0x5
    bl fn_8021946C
    mr r30, r3
    addi r3, r28, 0x5e
    bl fn_800DC6B4
    neg r0, r30
    lis r5, lbl_8075B2B0@ha
    or r0, r0, r30
    mr r4, r3
    srwi r0, r0, 31
    stw r0, 0xdc(r1)
    lfd f1, lbl_8075B2B0@l(r5)
    addi r3, r29, 0x58
    lfd f0, 0xd8(r1)
    fsubs f1, f0, f1
    bl fn_801FECE0
lbl_fn_80511AE0_00000DBC:
    addi r11, r1, 0x100
    psq_l f31, 0x118(r1), 0, 0
    lfd f31, 0x110(r1)
    psq_l f30, 0x108(r1), 0, 0
    lfd f30, 0x100(r1)
    bl _restgpr_26
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_80511DA0(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    addi r11, r1, 0x100
    stfd f31, 0x100(r1)
    psq_st f31, 0x108(r1), 0, 0
    bl _savegpr_26
    cmpwi r3, 0x0
    lis r0, 0x4330
    stw r0, 0xd0(r1)
    mr r29, r3
    mr r30, r4
    mr r31, r5
    stw r0, 0xd8(r1)
    mr r26, r6
    beq lbl_fn_80511DA0_00001040
    li r0, 0x0
    stw r0, 0x8(r1)
    addi r3, r1, 0x10
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_80134800
    lwz r27, 0x1ac(r30)
    mr r3, r30
    bl fn_8012B028
    add r0, r27, r3
    lis r28, lbl_8075B2A8@ha
    xoris r0, r0, 0x8000
    stw r0, 0xd4(r1)
    lfd f1, lbl_8075B2A8@l(r28)
    lfd f0, 0xd0(r1)
    lfs f2, lbl_808877D0
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    ble lbl_fn_80511DA0_00000E80
    b lbl_fn_80511DA0_00000EA4
lbl_fn_80511DA0_00000E80:
    lwz r27, 0x1ac(r30)
    mr r3, r30
    bl fn_8012B028
    add r0, r27, r3
    lfd f1, lbl_8075B2A8@l(r28)
    xoris r0, r0, 0x8000
    stw r0, 0xdc(r1)
    lfd f0, 0xd8(r1)
    fsubs f2, f0, f1
lbl_fn_80511DA0_00000EA4:
    xoris r0, r27, 0x8000
    stw r0, 0xd4(r1)
    lis r3, lbl_8075B2A8@ha
    lwz r0, 0x88(r1)
    lfd f1, lbl_8075B2A8@l(r3)
    lfd f0, 0xd0(r1)
    cmpwi r0, 0x63
    fsubs f0, f0, f1
    fdivs f31, f0, f2
    blt lbl_fn_80511DA0_00000ED0
    lfs f31, lbl_808877CC
lbl_fn_80511DA0_00000ED0:
    cmpwi r26, 0x0
    beq lbl_fn_80511DA0_00000F08
    lis r28, lbl_8075B2B8@ha
    lwz r5, 0x94(r1)
    addi r28, r28, lbl_8075B2B8@l
    mr r3, r29
    addi r4, r28, 0x3c
    li r6, 0x0
    bl fn_801F8598
    lfs f1, lbl_808877D0
    mr r3, r29
    addi r4, r28, 0x42
    bl fn_801F6C80
    b lbl_fn_80511DA0_00000F84
lbl_fn_80511DA0_00000F08:
    lfs f0, 0x4(r30)
    lis r4, lbl_8075B2B8@ha
    addi r4, r4, lbl_8075B2B8@l
    mr r3, r29
    fctiwz f0, f0
    addi r4, r4, 0x3c
    li r6, 0x0
    stfd f0, 0xe0(r1)
    lwz r5, 0xe4(r1)
    bl fn_801F8598
    lwz r0, 0x94(r1)
    lis r3, lbl_8075B2A8@ha
    lfd f1, lbl_8075B2A8@l(r3)
    xoris r0, r0, 0x8000
    stw r0, 0xdc(r1)
    lfs f2, lbl_808877D0
    lfd f0, 0xd8(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    ble lbl_fn_80511DA0_00000F5C
    b lbl_fn_80511DA0_00000F68
lbl_fn_80511DA0_00000F5C:
    stw r0, 0xd4(r1)
    lfd f0, 0xd0(r1)
    fsubs f2, f0, f1
lbl_fn_80511DA0_00000F68:
    lfs f0, 0x4(r30)
    lis r4, lbl_8075B2B8@ha
    addi r4, r4, lbl_8075B2B8@l
    mr r3, r29
    fdivs f1, f0, f2
    addi r4, r4, 0x42
    bl fn_801F6C80
lbl_fn_80511DA0_00000F84:
    lis r28, lbl_8075B2B8@ha
    lwz r5, 0x88(r1)
    addi r28, r28, lbl_8075B2B8@l
    mr r3, r29
    addi r4, r28, 0x49
    li r6, 0x0
    bl fn_801F8598
    fmr f1, f31
    mr r3, r29
    addi r4, r28, 0x4f
    bl fn_801F6C80
    lfs f2, lbl_808877CC
    lfs f0, 0x228(r30)
    fcmpo cr0, f2, f0
    ble lbl_fn_80511DA0_00000FC4
    b lbl_fn_80511DA0_00000FC8
lbl_fn_80511DA0_00000FC4:
    fmr f2, f0
lbl_fn_80511DA0_00000FC8:
    lfs f1, lbl_808877D0
    fcmpo cr0, f1, f2
    bge lbl_fn_80511DA0_00000FD8
    b lbl_fn_80511DA0_00000FF0
lbl_fn_80511DA0_00000FD8:
    lfs f1, lbl_808877CC
    lfs f0, 0x228(r30)
    fcmpo cr0, f1, f0
    ble lbl_fn_80511DA0_00000FEC
    b lbl_fn_80511DA0_00000FF0
lbl_fn_80511DA0_00000FEC:
    fmr f1, f0
lbl_fn_80511DA0_00000FF0:
    lis r28, lbl_8075B2B8@ha
    mr r3, r29
    addi r28, r28, lbl_8075B2B8@l
    addi r4, r28, 0x57
    bl fn_801F6C80
    lwz r4, 0xa0(r30)
    mr r3, r31
    li r5, 0x5
    bl fn_8021946C
    neg r0, r3
    lis r4, lbl_8075B2B0@ha
    or r0, r0, r3
    lfd f1, lbl_8075B2B0@l(r4)
    srwi r0, r0, 31
    stw r0, 0xdc(r1)
    mr r3, r29
    addi r4, r28, 0x5e
    lfd f0, 0xd8(r1)
    fsubs f1, f0, f1
    bl fn_801F6C80
lbl_fn_80511DA0_00001040:
    addi r11, r1, 0x100
    psq_l f31, 0x108(r1), 0, 0
    lfd f31, 0x100(r1)
    bl _restgpr_26
    lwz r0, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_8051201C(void)
{
    nofralloc
    stw r4, 0x7c(r3)
    blr
}

asm void fn_80512024(void)
{
    nofralloc
    blr
}

asm void fn_80512028(void)
{
    nofralloc
    blr
}

asm void fn_8051202C(void)
{
    nofralloc
    stwu r1, -0x160(r1)
    mflr r0
    stw r0, 0x164(r1)
    addi r11, r1, 0x140
    stfd f31, 0x150(r1)
    psq_st f31, 0x158(r1), 0, 0
    stfd f30, 0x140(r1)
    psq_st f30, 0x148(r1), 0, 0
    bl _savegpr_26
    cmpwi r5, 0x0
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    mr r31, r8
    beq lbl_fn_8051202C_00001494
    lwz r4, 0x8(r4)
    cmpwi r4, 0x0
    bne lbl_fn_8051202C_000010C4
    li r0, 0x0
    b lbl_fn_8051202C_000010C8
lbl_fn_8051202C_000010C4:
    mr r0, r4
lbl_fn_8051202C_000010C8:
    cmpwi r0, 0x0
    beq lbl_fn_8051202C_00001494
    cmpwi r4, 0x0
    bne lbl_fn_8051202C_000010E0
    li r0, 0x0
    b lbl_fn_8051202C_000010E8
lbl_fn_8051202C_000010E0:
    lwz r3, 0x4(r4)
    addi r0, r3, 0x10
lbl_fn_8051202C_000010E8:
    cmpwi r0, 0x0
    beq lbl_fn_8051202C_00001494
    cmpwi r4, 0x0
    bne lbl_fn_8051202C_00001100
    li r26, 0x0
    b lbl_fn_8051202C_00001108
lbl_fn_8051202C_00001100:
    lwz r3, 0x4(r4)
    addi r26, r3, 0x10
lbl_fn_8051202C_00001108:
    mr r3, r26
    mr r4, r31
    li r5, 0x0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8051202C_00001128
    li r0, 0x0
    b lbl_fn_8051202C_00001134
lbl_fn_8051202C_00001128:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r26)
    add r0, r3, r0
lbl_fn_8051202C_00001134:
    cmpwi r0, 0x0
    beq lbl_fn_8051202C_00001494
    lwz r0, 0x8(r27)
    cmpwi r0, 0x0
    bne lbl_fn_8051202C_0000114C
    b lbl_fn_8051202C_00001494
lbl_fn_8051202C_0000114C:
    mr r3, r28
    li r4, 0x0
    bl fn_800D246C
    lwz r0, 0x38(r28)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r28)
    lwz r3, 0x8(r27)
    cmpwi r3, 0x0
    bne lbl_fn_8051202C_00001178
    li r26, 0x0
    b lbl_fn_8051202C_00001180
lbl_fn_8051202C_00001178:
    lwz r3, 0x4(r3)
    addi r26, r3, 0x10
lbl_fn_8051202C_00001180:
    mr r3, r26
    mr r4, r31
    li r5, 0x0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8051202C_000011A0
    li r3, 0x0
    b lbl_fn_8051202C_000011AC
lbl_fn_8051202C_000011A0:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r26)
    add r3, r3, r0
lbl_fn_8051202C_000011AC:
    psq_l f1, 0x0(r3), 0, 0
    addi r26, r1, 0xf0
    psq_l f2, 0x8(r3), 0, 0
    mr r4, r26
    psq_l f3, 0x10(r3), 0, 0
    mr r5, r26
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f6, 0x28(r26), 0, 0
    psq_st f1, 0x0(r26), 0, 0
    psq_st f2, 0x8(r26), 0, 0
    psq_st f3, 0x10(r26), 0, 0
    psq_st f4, 0x18(r26), 0, 0
    psq_st f5, 0x20(r26), 0, 0
    lwz r3, 0x8(r27)
    addi r3, r3, 0x30
    bl fn_805F89F0
    lfs f0, lbl_808877CC
    addi r3, r1, 0x50
    lfs f7, 0x118(r1)
    lfs f8, 0x108(r1)
    lfs f9, 0xf8(r1)
    stfs f0, 0xfc(r1)
    stfs f0, 0x10c(r1)
    stfs f0, 0x11c(r1)
    stfs f9, 0x50(r1)
    stfs f8, 0x54(r1)
    stfs f7, 0x58(r1)
    bl fn_805F9940
    lfs f0, 0x114(r1)
    fmr f31, f1
    lfs f7, 0x104(r1)
    addi r3, r1, 0x44
    lfs f8, 0xf4(r1)
    stfs f8, 0x44(r1)
    stfs f7, 0x48(r1)
    stfs f0, 0x4c(r1)
    bl fn_805F9940
    lfs f0, 0x110(r1)
    fmr f30, f1
    lfs f7, 0x100(r1)
    addi r3, r1, 0x38
    lfs f8, 0xf0(r1)
    stfs f8, 0x38(r1)
    stfs f7, 0x3c(r1)
    stfs f0, 0x40(r1)
    bl fn_805F9940
    frsp f8, f31
    lfs f9, lbl_808877D0
    frsp f7, f30
    stfs f1, 0x80(r1)
    frsp f0, f1
    addi r3, r1, 0x90
    fdivs f3, f9, f8
    stfs f30, 0x84(r1)
    stfs f31, 0x88(r1)
    stfs f3, 0x34(r1)
    fdivs f2, f9, f7
    stfs f2, 0x30(r1)
    fdivs f1, f9, f0
    stfs f1, 0x2c(r1)
    bl fn_805F9160
    mr r3, r26
    addi r4, r1, 0x90
    addi r5, r1, 0xc0
    bl fn_805F89F0
    addi r3, r1, 0xc0
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r26), 0, 0
    psq_st f2, 0x8(r26), 0, 0
    psq_st f3, 0x10(r26), 0, 0
    psq_st f4, 0x18(r26), 0, 0
    psq_st f5, 0x20(r26), 0, 0
    psq_st f6, 0x28(r26), 0, 0
    psq_st f1, 0xc8(r28), 0, 0
    psq_st f2, 0xd0(r28), 0, 0
    psq_st f3, 0xd8(r28), 0, 0
    psq_st f4, 0xe0(r28), 0, 0
    psq_st f5, 0xe8(r28), 0, 0
    psq_st f6, 0xf0(r28), 0, 0
    lwz r3, 0x8(r27)
    cmpwi r3, 0x0
    bne lbl_fn_8051202C_00001318
    li r26, 0x0
    b lbl_fn_8051202C_00001320
lbl_fn_8051202C_00001318:
    lwz r3, 0x4(r3)
    addi r26, r3, 0x10
lbl_fn_8051202C_00001320:
    mr r3, r26
    mr r4, r31
    li r5, 0x0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8051202C_00001340
    li r3, 0x0
    b lbl_fn_8051202C_0000134C
lbl_fn_8051202C_00001340:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r26)
    add r3, r3, r0
lbl_fn_8051202C_0000134C:
    psq_l f1, 0x0(r3), 0, 0
    addi r4, r1, 0xf0
    psq_l f2, 0x8(r3), 0, 0
    mr r5, r4
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f6, 0x28(r4), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    psq_st f2, 0x8(r4), 0, 0
    psq_st f3, 0x10(r4), 0, 0
    psq_st f4, 0x18(r4), 0, 0
    psq_st f5, 0x20(r4), 0, 0
    lwz r3, 0x8(r27)
    addi r3, r3, 0x30
    bl fn_805F89F0
    lfs f8, 0x11c(r1)
    addi r3, r1, 0x5c
    lfs f0, 0x8(r29)
    lfs f9, 0x10c(r1)
    fadds f2, f8, f0
    lfs f10, 0xfc(r1)
    lfs f7, 0x4(r29)
    lfs f0, 0x0(r29)
    fadds f7, f9, f7
    stfs f10, 0x74(r1)
    fadds f0, f10, f0
    stfs f7, 0x60(r1)
    stfs f0, 0x5c(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0xbc(r28), 0, 0
    stfs f2, 0xc4(r28)
    lwz r26, 0x8(r27)
    stfs f9, 0x78(r1)
    cmpwi r26, 0x0
    stfs f8, 0x7c(r1)
    stfs f2, 0x64(r1)
    bne lbl_fn_8051202C_000013EC
    li r26, 0x0
lbl_fn_8051202C_000013EC:
    lfs f0, 0x58(r26)
    addi r3, r1, 0x20
    lfs f7, 0x48(r26)
    lfs f8, 0x38(r26)
    stfs f8, 0x20(r1)
    stfs f7, 0x24(r1)
    stfs f0, 0x28(r1)
    bl fn_805F9940
    lfs f0, 0x54(r26)
    fmr f30, f1
    lfs f7, 0x44(r26)
    addi r3, r1, 0x14
    lfs f8, 0x34(r26)
    stfs f8, 0x14(r1)
    stfs f7, 0x18(r1)
    stfs f0, 0x1c(r1)
    bl fn_805F9940
    lfs f0, 0x50(r26)
    fmr f31, f1
    lfs f7, 0x40(r26)
    addi r3, r1, 0x8
    lfs f8, 0x30(r26)
    stfs f8, 0x8(r1)
    stfs f7, 0xc(r1)
    stfs f0, 0x10(r1)
    bl fn_805F9940
    frsp f11, f1
    lfs f10, 0x0(r30)
    frsp f9, f31
    lfs f8, 0x4(r30)
    frsp f7, f30
    lfs f0, 0x8(r30)
    fmuls f10, f11, f10
    addi r3, r1, 0x68
    fmuls f2, f7, f0
    fmuls f0, f9, f8
    stfs f10, 0x68(r1)
    stfs f0, 0x6c(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x70(r1)
    psq_st f1, 0xf8(r28), 0, 0
    stfs f2, 0x100(r28)
lbl_fn_8051202C_00001494:
    addi r11, r1, 0x140
    psq_l f31, 0x158(r1), 0, 0
    lfd f31, 0x150(r1)
    psq_l f30, 0x148(r1), 0, 0
    lfd f30, 0x140(r1)
    bl _restgpr_26
    lwz r0, 0x164(r1)
    mtlr r0
    addi r1, r1, 0x160
    blr
}

asm void fn_80512478(void)
{
    nofralloc
    stwu r1, -0x160(r1)
    mflr r0
    stw r0, 0x164(r1)
    addi r11, r1, 0x140
    stfd f31, 0x150(r1)
    psq_st f31, 0x158(r1), 0, 0
    stfd f30, 0x140(r1)
    psq_st f30, 0x148(r1), 0, 0
    bl _savegpr_26
    cmpwi r5, 0x0
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    mr r31, r8
    beq lbl_fn_80512478_000018E0
    lwz r4, 0x8(r4)
    cmpwi r4, 0x0
    bne lbl_fn_80512478_00001510
    li r0, 0x0
    b lbl_fn_80512478_00001514
lbl_fn_80512478_00001510:
    mr r0, r4
lbl_fn_80512478_00001514:
    cmpwi r0, 0x0
    beq lbl_fn_80512478_000018E0
    cmpwi r4, 0x0
    bne lbl_fn_80512478_0000152C
    li r0, 0x0
    b lbl_fn_80512478_00001534
lbl_fn_80512478_0000152C:
    lwz r3, 0x4(r4)
    addi r0, r3, 0x10
lbl_fn_80512478_00001534:
    cmpwi r0, 0x0
    beq lbl_fn_80512478_000018E0
    cmpwi r4, 0x0
    bne lbl_fn_80512478_0000154C
    li r26, 0x0
    b lbl_fn_80512478_00001554
lbl_fn_80512478_0000154C:
    lwz r3, 0x4(r4)
    addi r26, r3, 0x10
lbl_fn_80512478_00001554:
    mr r3, r26
    mr r4, r31
    li r5, 0x0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80512478_00001574
    li r0, 0x0
    b lbl_fn_80512478_00001580
lbl_fn_80512478_00001574:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r26)
    add r0, r3, r0
lbl_fn_80512478_00001580:
    cmpwi r0, 0x0
    beq lbl_fn_80512478_000018E0
    lwz r0, 0x8(r27)
    cmpwi r0, 0x0
    bne lbl_fn_80512478_00001598
    b lbl_fn_80512478_000018E0
lbl_fn_80512478_00001598:
    mr r3, r28
    li r4, 0x0
    bl fn_800D246C
    lwz r0, 0x38(r28)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r28)
    lwz r3, 0x8(r27)
    cmpwi r3, 0x0
    bne lbl_fn_80512478_000015C4
    li r26, 0x0
    b lbl_fn_80512478_000015CC
lbl_fn_80512478_000015C4:
    lwz r3, 0x4(r3)
    addi r26, r3, 0x10
lbl_fn_80512478_000015CC:
    mr r3, r26
    mr r4, r31
    li r5, 0x0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80512478_000015EC
    li r3, 0x0
    b lbl_fn_80512478_000015F8
lbl_fn_80512478_000015EC:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r26)
    add r3, r3, r0
lbl_fn_80512478_000015F8:
    psq_l f1, 0x0(r3), 0, 0
    addi r26, r1, 0xf0
    psq_l f2, 0x8(r3), 0, 0
    mr r4, r26
    psq_l f3, 0x10(r3), 0, 0
    mr r5, r26
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f6, 0x28(r26), 0, 0
    psq_st f1, 0x0(r26), 0, 0
    psq_st f2, 0x8(r26), 0, 0
    psq_st f3, 0x10(r26), 0, 0
    psq_st f4, 0x18(r26), 0, 0
    psq_st f5, 0x20(r26), 0, 0
    lwz r3, 0x8(r27)
    addi r3, r3, 0x30
    bl fn_805F89F0
    lfs f0, lbl_808877CC
    addi r3, r1, 0x50
    lfs f7, 0x118(r1)
    lfs f8, 0x108(r1)
    lfs f9, 0xf8(r1)
    stfs f0, 0xfc(r1)
    stfs f0, 0x10c(r1)
    stfs f0, 0x11c(r1)
    stfs f9, 0x50(r1)
    stfs f8, 0x54(r1)
    stfs f7, 0x58(r1)
    bl fn_805F9940
    lfs f0, 0x114(r1)
    fmr f31, f1
    lfs f7, 0x104(r1)
    addi r3, r1, 0x44
    lfs f8, 0xf4(r1)
    stfs f8, 0x44(r1)
    stfs f7, 0x48(r1)
    stfs f0, 0x4c(r1)
    bl fn_805F9940
    lfs f0, 0x110(r1)
    fmr f30, f1
    lfs f7, 0x100(r1)
    addi r3, r1, 0x38
    lfs f8, 0xf0(r1)
    stfs f8, 0x38(r1)
    stfs f7, 0x3c(r1)
    stfs f0, 0x40(r1)
    bl fn_805F9940
    frsp f8, f31
    lfs f9, lbl_808877D0
    frsp f7, f30
    stfs f1, 0x80(r1)
    frsp f0, f1
    addi r3, r1, 0x90
    fdivs f3, f9, f8
    stfs f30, 0x84(r1)
    stfs f31, 0x88(r1)
    stfs f3, 0x34(r1)
    fdivs f2, f9, f7
    stfs f2, 0x30(r1)
    fdivs f1, f9, f0
    stfs f1, 0x2c(r1)
    bl fn_805F9160
    mr r3, r26
    addi r4, r1, 0x90
    addi r5, r1, 0xc0
    bl fn_805F89F0
    addi r3, r1, 0xc0
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r26), 0, 0
    psq_st f2, 0x8(r26), 0, 0
    psq_st f3, 0x10(r26), 0, 0
    psq_st f4, 0x18(r26), 0, 0
    psq_st f5, 0x20(r26), 0, 0
    psq_st f6, 0x28(r26), 0, 0
    psq_st f1, 0xc8(r28), 0, 0
    psq_st f2, 0xd0(r28), 0, 0
    psq_st f3, 0xd8(r28), 0, 0
    psq_st f4, 0xe0(r28), 0, 0
    psq_st f5, 0xe8(r28), 0, 0
    psq_st f6, 0xf0(r28), 0, 0
    lwz r3, 0x8(r27)
    cmpwi r3, 0x0
    bne lbl_fn_80512478_00001764
    li r26, 0x0
    b lbl_fn_80512478_0000176C
lbl_fn_80512478_00001764:
    lwz r3, 0x4(r3)
    addi r26, r3, 0x10
lbl_fn_80512478_0000176C:
    mr r3, r26
    mr r4, r31
    li r5, 0x0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80512478_0000178C
    li r3, 0x0
    b lbl_fn_80512478_00001798
lbl_fn_80512478_0000178C:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r26)
    add r3, r3, r0
lbl_fn_80512478_00001798:
    psq_l f1, 0x0(r3), 0, 0
    addi r4, r1, 0xf0
    psq_l f2, 0x8(r3), 0, 0
    mr r5, r4
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f6, 0x28(r4), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    psq_st f2, 0x8(r4), 0, 0
    psq_st f3, 0x10(r4), 0, 0
    psq_st f4, 0x18(r4), 0, 0
    psq_st f5, 0x20(r4), 0, 0
    lwz r3, 0x8(r27)
    addi r3, r3, 0x30
    bl fn_805F89F0
    lfs f8, 0x11c(r1)
    addi r3, r1, 0x5c
    lfs f0, 0x8(r29)
    lfs f9, 0x10c(r1)
    fadds f2, f8, f0
    lfs f10, 0xfc(r1)
    lfs f7, 0x4(r29)
    lfs f0, 0x0(r29)
    fadds f7, f9, f7
    stfs f10, 0x74(r1)
    fadds f0, f10, f0
    stfs f7, 0x60(r1)
    stfs f0, 0x5c(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0xbc(r28), 0, 0
    stfs f2, 0xc4(r28)
    lwz r26, 0x8(r27)
    stfs f9, 0x78(r1)
    cmpwi r26, 0x0
    stfs f8, 0x7c(r1)
    stfs f2, 0x64(r1)
    bne lbl_fn_80512478_00001838
    li r26, 0x0
lbl_fn_80512478_00001838:
    lfs f0, 0x58(r26)
    addi r3, r1, 0x20
    lfs f7, 0x48(r26)
    lfs f8, 0x38(r26)
    stfs f8, 0x20(r1)
    stfs f7, 0x24(r1)
    stfs f0, 0x28(r1)
    bl fn_805F9940
    lfs f0, 0x54(r26)
    fmr f30, f1
    lfs f7, 0x44(r26)
    addi r3, r1, 0x14
    lfs f8, 0x34(r26)
    stfs f8, 0x14(r1)
    stfs f7, 0x18(r1)
    stfs f0, 0x1c(r1)
    bl fn_805F9940
    lfs f0, 0x50(r26)
    fmr f31, f1
    lfs f7, 0x40(r26)
    addi r3, r1, 0x8
    lfs f8, 0x30(r26)
    stfs f8, 0x8(r1)
    stfs f7, 0xc(r1)
    stfs f0, 0x10(r1)
    bl fn_805F9940
    frsp f11, f1
    lfs f10, 0x0(r30)
    frsp f9, f31
    lfs f8, 0x4(r30)
    frsp f7, f30
    lfs f0, 0x8(r30)
    fmuls f10, f11, f10
    addi r3, r1, 0x68
    fmuls f2, f7, f0
    fmuls f0, f9, f8
    stfs f10, 0x68(r1)
    stfs f0, 0x6c(r1)
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0x70(r1)
    psq_st f1, 0xf8(r28), 0, 0
    stfs f2, 0x100(r28)
lbl_fn_80512478_000018E0:
    addi r11, r1, 0x140
    psq_l f31, 0x158(r1), 0, 0
    lfd f31, 0x150(r1)
    psq_l f30, 0x148(r1), 0, 0
    lfd f30, 0x140(r1)
    bl _restgpr_26
    lwz r0, 0x164(r1)
    mtlr r0
    addi r1, r1, 0x160
    blr
}

asm void fn_805128C4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_fn_805128C4_00001A5C
    lis r31, lbl_8075B510@ha
    li r3, 0x138
    addi r5, r31, lbl_8075B510@l
    li r4, 0x1
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_805128C4_00001A54
    mr r4, r29
    bl fn_8050F940
    lis r3, lbl_80793320@ha
    lis r4, fn_802377B8@ha
    addi r3, r3, lbl_80793320@l
    stw r3, 0x0(r30)
    li r0, 0x0
    lis r5, fn_800EF73C@ha
    stw r0, 0xd4(r30)
    addi r3, r30, 0xd8
    addi r4, r4, fn_802377B8@l
    addi r5, r5, fn_800EF73C@l
    li r6, 0xc
    li r7, 0x8
    bl fn_806958E0
    lwz r0, 0x98(r30)
    addi r3, r31, lbl_8075B510@l
    addi r31, r3, 0x1
    srwi. r0, r0, 31
    bne lbl_fn_805128C4_000019B0
    lbz r0, 0x98(r30)
    clrlwi r29, r0, 25
    b lbl_fn_805128C4_000019B4
lbl_fn_805128C4_000019B0:
    lwz r29, 0x9c(r30)
lbl_fn_805128C4_000019B4:
    lbz r0, 0x8(r1)
    mr r3, r31
    stb r0, 0xc(r1)
    bl strlen
    mr r0, r3
    mr r5, r29
    mr r6, r31
    addi r3, r30, 0x98
    add r7, r31, r0
    addi r8, r1, 0xc
    li r4, 0x0
    bl fn_80013F78
    li r0, 0xd
    stw r0, 0x4c(r30)
    cmpwi r0, 0x0
    ble lbl_fn_805128C4_00001A40
    lis r5, lbl_8075B510@ha
    li r3, 0x350
    addi r5, r5, lbl_8075B510@l
    li r4, 0x1
    mr r6, r5
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_80512A38@ha
    li r5, 0x0
    addi r4, r4, fn_80512A38@l
    li r6, 0x40
    li r7, 0xd
    bl fn_80695720
    lwz r4, 0xd4(r30)
    cmpwi r4, 0x0
    stw r3, 0xd4(r30)
    beq lbl_fn_805128C4_00001A40
    subi r3, r4, 0x10
    bl fn_80084C24
lbl_fn_805128C4_00001A40:
    lis r4, lbl_8075B510@ha
    addi r3, r30, 0xd8
    addi r4, r4, lbl_8075B510@l
    addi r4, r4, 0xb
    bl fn_8023780C
lbl_fn_805128C4_00001A54:
    mr r3, r30
    b lbl_fn_805128C4_00001A60
lbl_fn_805128C4_00001A5C:
    li r3, 0x0
lbl_fn_805128C4_00001A60:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
