#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_8004ED34(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_8008BBD8(void);
extern void fn_80097C08(void);
extern void fn_80097CCC(void);
extern void fn_80097D7C(void);
extern void fn_800F8574(void);
extern void fn_80134168(void);
extern void fn_801539E0(void);
extern void fn_80154344(void);
extern void fn_80155DAC(void);
extern void fn_8016DA4C(void);
extern void fn_8017AC3C(void);
extern void fn_80188F08(void);
extern void fn_80188F40(void);
extern void fn_801EA0B4(void);
extern void fn_80219558(void);
extern void fn_80219E6C(void);
extern void fn_80370174(void);
extern void fn_80370320(void);
extern void fn_803EA77C(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_80680770(void);
extern void fn_80680CF8(void);
extern void fn_80682428(void);
extern void fn_80686EA4(void);
extern void fn_8068AEA4(void);
extern void fn_80695B00(void);

/* External data declarations */
extern u8 lbl_8073B8E8[];
extern u8 lbl_8073B8F8[];
extern u8 lbl_8077CF28[];
extern u8 lbl_80781ED0[];
extern u8 lbl_80781EDC[];
extern u8 lbl_80781EE8[];
extern u8 lbl_80781F68[];
extern u8 lbl_80781FE0[];
extern u8 lbl_80782000[];
extern u8 lbl_80782078[];
extern u8 lbl_807820F0[];
extern u8 lbl_807C7030[];
extern u8 lbl_807C7B58[];
extern u8 lbl_807C7C80[];

/* Small data declarations */
extern u32 lbl_8087DA48;
extern u32 lbl_8087DA4C;
extern u32 lbl_8087DA50;
extern u32 lbl_8087DA54;
extern u32 lbl_8087EE98;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0B2;
extern u32 lbl_8087F110;
extern u32 lbl_8087F120;
extern u32 lbl_8087F430;
extern u32 lbl_8087F498;
extern u32 lbl_8087F610;
extern u32 lbl_80882848;
extern u32 lbl_8088284C;
extern u32 lbl_80882850;
extern u32 lbl_80882854;
extern u32 lbl_80882858;
extern u32 lbl_8088285C;
extern u32 lbl_80882860;
extern u32 lbl_80882864;
extern u32 lbl_80882868;
extern u32 lbl_8088286C;
extern u32 lbl_80882870;
extern u32 lbl_80882878;
extern u32 lbl_8088287C;
extern u32 lbl_80882880;
extern u32 lbl_80882884;
extern u32 lbl_80882888;
extern u32 lbl_8088288C;
extern u32 lbl_80882890;
extern u32 lbl_80882894;
extern u32 lbl_80882898;
extern u32 lbl_8088289C;
extern u32 lbl_808828A0;
extern u32 lbl_808828A4;
extern u32 lbl_808828A8;
extern u32 lbl_808828AC;
extern u32 lbl_808828B0;
extern u32 lbl_808828B4;

/* Function declarations */
void fn_801C7350(void);
void fn_801C7390(void);
void fn_801C774C(void);
void fn_801C777C(void);
void fn_801C7898(void);
void fn_801C78D8(void);
void fn_801C7918(void);
void fn_801C815C(void);
void fn_801C82B8(void);
void fn_801C82F8(void);
void fn_801C87D8(void);
void fn_801C8938(void);
void fn_801C8B88(void);

asm void fn_801C7350(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r3, 0x4(r3)
    bl fn_8017AC3C
    lwz r3, 0x4(r31)
    li r0, 0x0
    stw r0, 0xf1c(r3)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801C7390(void)
{
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    lwz r5, 0xc(r4)
    stw r0, 0xd4(r1)
    cmpwi r5, 0x0
    stw r31, 0xcc(r1)
    mr r31, r3
    stw r30, 0xc8(r1)
    mr r30, r4
    beq lbl_fn_801C7390_00000214
    lwz r0, 0xd18(r5)
    cmpwi r0, 0x0
    bne lbl_fn_801C7390_00000214
    lis r7, lbl_80781ED0@ha
    lwzu r6, lbl_80781ED0@l(r7)
    li r9, 0x0
    lwz r8, 0x4(r4)
    lwz r5, 0x4(r7)
    lwz r4, 0x8(r7)
    stw r8, 0x10(r1)
    stw r9, 0x0(r3)
    lbz r0, lbl_8087F0B2
    stb r9, 0x14(r1)
    extsb. r0, r0
    stb r9, 0x15(r1)
    stb r9, 0x16(r1)
    stw r6, 0x3c(r1)
    stw r5, 0x40(r1)
    stw r4, 0x44(r1)
    stw r6, 0x30(r1)
    stw r5, 0x34(r1)
    stw r4, 0x38(r1)
    stw r6, 0xac(r1)
    stw r5, 0xb0(r1)
    stw r4, 0xb4(r1)
    stw r8, 0xb8(r1)
    stb r9, 0xbc(r1)
    stb r9, 0xbd(r1)
    stb r9, 0xbe(r1)
    bne lbl_fn_801C7390_00000108
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
lbl_fn_801C7390_00000108:
    lwz r7, 0xac(r1)
    addi r3, r1, 0x84
    lwz r6, 0xb0(r1)
    lwz r5, 0xb4(r1)
    lwz r4, 0xb8(r1)
    lwz r0, 0xbc(r1)
    stw r7, 0x84(r1)
    stw r6, 0x88(r1)
    stw r5, 0x8c(r1)
    stw r4, 0x90(r1)
    stw r0, 0x94(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_801C7390_000001EC
    lwz r7, 0x84(r1)
    li r3, 0x14
    lwz r6, 0x88(r1)
    lwz r5, 0x8c(r1)
    lwz r4, 0x90(r1)
    lwz r0, 0x94(r1)
    stw r7, 0x70(r1)
    stw r6, 0x74(r1)
    stw r5, 0x78(r1)
    stw r4, 0x7c(r1)
    stw r0, 0x80(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_801C7390_000001A0
    lis r3, __files@ha
    lis r4, lbl_8077CF28@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8077CF28@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801C7390_000001A0:
    cmpwi r30, 0x0
    beq lbl_fn_801C7390_000001E0
    lwz r0, 0x70(r1)
    stw r0, 0x0(r30)
    lwz r0, 0x74(r1)
    stw r0, 0x4(r30)
    lwz r0, 0x78(r1)
    stw r0, 0x8(r30)
    lwz r0, 0x7c(r1)
    stw r0, 0xc(r30)
    lbz r0, 0x80(r1)
    stb r0, 0x10(r30)
    lbz r0, 0x81(r1)
    stb r0, 0x11(r30)
    lbz r0, 0x82(r1)
    stb r0, 0x12(r30)
lbl_fn_801C7390_000001E0:
    stw r30, 0x4(r31)
    li r0, 0x1
    b lbl_fn_801C7390_000001F0
lbl_fn_801C7390_000001EC:
    li r0, 0x0
lbl_fn_801C7390_000001F0:
    cmpwi r0, 0x0
    beq lbl_fn_801C7390_00000208
    lis r3, lbl_807C7B58@ha
    addi r3, r3, lbl_807C7B58@l
    stw r3, 0x0(r31)
    b lbl_fn_801C7390_000003E4
lbl_fn_801C7390_00000208:
    li r0, 0x0
    stw r0, 0x0(r31)
    b lbl_fn_801C7390_000003E4
lbl_fn_801C7390_00000214:
    lis r5, lbl_8073B8E8@ha
    li r3, 0x10
    addi r5, r5, lbl_8073B8E8@l
    li r4, 0x0
    addi r5, r5, 0xa
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_801C7390_00000268
    lwz r6, 0x4(r30)
    lis r5, lbl_80781F68@ha
    stw r6, 0x4(r3)
    addi r5, r5, lbl_80781F68@l
    lwz r7, 0xc(r30)
    li r4, 0x0
    stw r5, 0x0(r3)
    li r0, 0x79
    stw r7, 0x8(r3)
    stw r4, 0xc(r3)
    stw r0, 0x560(r6)
lbl_fn_801C7390_00000268:
    lis r4, lbl_80781EDC@ha
    lwzu r6, lbl_80781EDC@l(r4)
    lwz r7, 0x4(r30)
    li r0, 0x0
    lwz r5, 0x4(r4)
    lwz r4, 0x8(r4)
    stw r7, 0x8(r1)
    stw r0, 0x0(r31)
    lbz r0, lbl_8087F110
    stw r3, 0xc(r1)
    extsb. r0, r0
    stw r6, 0x24(r1)
    stw r5, 0x28(r1)
    stw r4, 0x2c(r1)
    stw r6, 0x18(r1)
    stw r5, 0x1c(r1)
    stw r4, 0x20(r1)
    stw r6, 0x98(r1)
    stw r5, 0x9c(r1)
    stw r4, 0xa0(r1)
    stw r7, 0xa4(r1)
    stw r3, 0xa8(r1)
    bne lbl_fn_801C7390_000002EC
    lis r6, lbl_807C7C80@ha
    lis r4, fn_801C774C@ha
    lis r3, fn_801C777C@ha
    li r0, 0x1
    addi r3, r3, fn_801C777C@l
    addi r5, r6, lbl_807C7C80@l
    addi r4, r4, fn_801C774C@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C7C80@l(r6)
    stb r0, lbl_8087F110
lbl_fn_801C7390_000002EC:
    lwz r7, 0x98(r1)
    addi r3, r1, 0x5c
    lwz r6, 0x9c(r1)
    lwz r5, 0xa0(r1)
    lwz r4, 0xa4(r1)
    lwz r0, 0xa8(r1)
    stw r7, 0x5c(r1)
    stw r6, 0x60(r1)
    stw r5, 0x64(r1)
    stw r4, 0x68(r1)
    stw r0, 0x6c(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_801C7390_000003C0
    lwz r7, 0x5c(r1)
    li r3, 0x14
    lwz r6, 0x60(r1)
    lwz r5, 0x64(r1)
    lwz r4, 0x68(r1)
    lwz r0, 0x6c(r1)
    stw r7, 0x48(r1)
    stw r6, 0x4c(r1)
    stw r5, 0x50(r1)
    stw r4, 0x54(r1)
    stw r0, 0x58(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_801C7390_00000384
    lis r3, __files@ha
    lis r4, lbl_80781FE0@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80781FE0@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801C7390_00000384:
    cmpwi r30, 0x0
    beq lbl_fn_801C7390_000003B4
    lwz r0, 0x48(r1)
    stw r0, 0x0(r30)
    lwz r0, 0x4c(r1)
    stw r0, 0x4(r30)
    lwz r0, 0x50(r1)
    stw r0, 0x8(r30)
    lwz r0, 0x54(r1)
    stw r0, 0xc(r30)
    lwz r0, 0x58(r1)
    stw r0, 0x10(r30)
lbl_fn_801C7390_000003B4:
    stw r30, 0x4(r31)
    li r0, 0x1
    b lbl_fn_801C7390_000003C4
lbl_fn_801C7390_000003C0:
    li r0, 0x0
lbl_fn_801C7390_000003C4:
    cmpwi r0, 0x0
    beq lbl_fn_801C7390_000003DC
    lis r3, lbl_807C7C80@ha
    addi r3, r3, lbl_807C7C80@l
    stw r3, 0x0(r31)
    b lbl_fn_801C7390_000003E4
lbl_fn_801C7390_000003DC:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_801C7390_000003E4:
    lwz r0, 0xd4(r1)
    lwz r31, 0xcc(r1)
    lwz r30, 0xc8(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}

asm void fn_801C774C(void)
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

asm void fn_801C777C(void)
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
    bne lbl_fn_801C777C_00000464
    lis r3, lbl_80781EE8@ha
    addi r3, r3, lbl_80781EE8@l
    stw r3, 0x0(r4)
    b lbl_fn_801C777C_0000052C
lbl_fn_801C777C_00000464:
    cmpwi r5, 0x0
    bne lbl_fn_801C777C_000004DC
    lwz r31, 0x0(r3)
    li r3, 0x14
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_801C777C_000004A4
    lis r3, __files@ha
    lis r4, lbl_80781FE0@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80781FE0@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801C777C_000004A4:
    cmpwi r30, 0x0
    beq lbl_fn_801C777C_000004D4
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
lbl_fn_801C777C_000004D4:
    stw r30, 0x0(r29)
    b lbl_fn_801C777C_0000052C
lbl_fn_801C777C_000004DC:
    cmpwi r5, 0x1
    bne lbl_fn_801C777C_000004F8
    lwz r3, 0x0(r4)
    bl dtor_80084684
    li r0, 0x0
    stw r0, 0x0(r29)
    b lbl_fn_801C777C_0000052C
lbl_fn_801C777C_000004F8:
    lwz r5, 0x0(r4)
    lis r3, lbl_80781EE8@ha
    lwz r4, lbl_80781EE8@l(r3)
    lwz r3, 0x0(r5)
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_801C777C_00000524
    lwz r0, 0x0(r30)
    stw r0, 0x0(r29)
    b lbl_fn_801C777C_0000052C
lbl_fn_801C777C_00000524:
    li r0, 0x0
    stw r0, 0x0(r29)
lbl_fn_801C777C_0000052C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801C7898(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801C7898_00000570
    cmpwi r4, 0x0
    ble lbl_fn_801C7898_00000570
    bl dtor_80084684
lbl_fn_801C7898_00000570:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801C78D8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801C78D8_000005B0
    cmpwi r4, 0x0
    ble lbl_fn_801C78D8_000005B0
    bl dtor_80084684
lbl_fn_801C78D8_000005B0:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801C7918(void)
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
    bl _savegpr_27
    mr r28, r3
    lis r8, lbl_80782000@ha
    lis r0, 0x4330
    stw r0, 0xc0(r1)
    addi r8, r8, lbl_80782000@l
    mr r3, r5
    stw r0, 0xc8(r1)
    mr r29, r6
    mr r27, r7
    stw r4, 0x4(r28)
    stw r8, 0x0(r28)
    bl fn_80219E6C
    psq_l f1, 0x0(r29), 0, 0
    li r4, 0x1
    lfs f2, 0x8(r29)
    li r0, 0x62
    psq_st f1, 0xc(r28), 0, 0
    psq_l f1, 0x0(r27), 0, 0
    stfs f2, 0x14(r28)
    lfs f2, 0x8(r27)
    stw r3, 0x8(r28)
    lwz r3, 0x4(r28)
    psq_st f1, 0x18(r28), 0, 0
    stfs f2, 0x20(r28)
    stw r4, 0x28(r28)
    stw r0, 0x560(r3)
    lwz r4, 0x8(r28)
    lwz r3, 0x4(r28)
    cmpwi r4, 0x0
    addi r30, r3, 0xb0
    beq lbl_fn_801C7918_00000674
    lwz r0, 0xac(r4)
    extrwi r31, r0, 1, 26
    b lbl_fn_801C7918_00000678
lbl_fn_801C7918_00000674:
    li r31, 0x0
lbl_fn_801C7918_00000678:
    li r0, 0x1
    stw r0, 0x34c(r30)
    lfs f1, lbl_80882848
    stfs f1, 0x24c(r30)
    stfs f1, 0x238(r30)
    lwz r0, 0x22c(r30)
    stw r0, 0x24(r28)
    cmpwi r0, 0x18b
    beq lbl_fn_801C7918_000007FC
    bge lbl_fn_801C7918_000006C0
    cmpwi r0, 0x189
    beq lbl_fn_801C7918_000007B4
    bge lbl_fn_801C7918_000007D8
    cmpwi r0, 0x27
    bge lbl_fn_801C7918_00000844
    cmpwi r0, 0x25
    bge lbl_fn_801C7918_000006E4
    b lbl_fn_801C7918_00000844
lbl_fn_801C7918_000006C0:
    cmpwi r0, 0x1a9
    beq lbl_fn_801C7918_0000076C
    bge lbl_fn_801C7918_000006D8
    cmpwi r0, 0x18d
    bge lbl_fn_801C7918_00000844
    b lbl_fn_801C7918_00000820
lbl_fn_801C7918_000006D8:
    cmpwi r0, 0x1ab
    bge lbl_fn_801C7918_00000844
    b lbl_fn_801C7918_00000790
lbl_fn_801C7918_000006E4:
    mr r3, r30
    li r4, 0x0
    li r5, 0x17e
    bne lbl_fn_801C7918_000006F8
    li r5, 0x17d
lbl_fn_801C7918_000006F8:
    lfs f1, lbl_80882848
    li r6, 0x0
    lfs f2, lbl_8088284C
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    cmpwi r31, 0x0
    beq lbl_fn_801C7918_00000868
    lfs f3, lbl_80882850
    addi r3, r1, 0x90
    lfs f0, lbl_80882854
    li r4, 0x79
    stfs f3, 0x20(r1)
    stfs f3, 0x24(r1)
    stfs f0, 0x28(r1)
    lwz r5, 0x4(r28)
    lfs f1, 0x538(r5)
    bl fn_805F8E70
    addi r4, r1, 0x20
    addi r3, r1, 0x90
    mr r5, r4
    bl fn_805F93C0
    addi r3, r1, 0x20
    lwz r4, 0x4(r28)
    lfs f2, 0x28(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x6b8(r4), 0, 0
    stfs f2, 0x6c0(r4)
    b lbl_fn_801C7918_00000868
lbl_fn_801C7918_0000076C:
    lfs f2, lbl_8088284C
    mr r3, r30
    li r4, 0x0
    li r5, 0x17f
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_801C7918_00000868
lbl_fn_801C7918_00000790:
    lfs f2, lbl_8088284C
    mr r3, r30
    li r4, 0x0
    li r5, 0x180
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_801C7918_00000868
lbl_fn_801C7918_000007B4:
    lfs f2, lbl_8088284C
    mr r3, r30
    li r4, 0x0
    li r5, 0x181
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_801C7918_00000868
lbl_fn_801C7918_000007D8:
    lfs f2, lbl_8088284C
    mr r3, r30
    li r4, 0x0
    li r5, 0x182
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_801C7918_00000868
lbl_fn_801C7918_000007FC:
    lfs f2, lbl_8088284C
    mr r3, r30
    li r4, 0x0
    li r5, 0x183
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_801C7918_00000868
lbl_fn_801C7918_00000820:
    lfs f2, lbl_8088284C
    mr r3, r30
    li r4, 0x0
    li r5, 0x184
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_801C7918_00000868
lbl_fn_801C7918_00000844:
    lfs f1, lbl_80882848
    mr r3, r30
    lfs f2, lbl_8088284C
    li r4, 0x0
    li r5, 0x17d
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
lbl_fn_801C7918_00000868:
    lwz r3, 0x4(r28)
    li r29, 0x1
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 25
    beq lbl_fn_801C7918_0000090C
    lwz r3, 0x50(r3)
    subis r0, r3, 0xa
    cmplwi r0, 0xae76
    beq lbl_fn_801C7918_00000898
    cmplwi r0, 0xae77
    beq lbl_fn_801C7918_000008D4
    b lbl_fn_801C7918_0000090C
lbl_fn_801C7918_00000898:
    lfs f1, lbl_80882848
    mr r3, r30
    lfs f2, lbl_8088284C
    li r4, 0x0
    li r5, 0x25
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80882858
    li r29, 0x0
    stfs f0, 0x234(r30)
    lfs f0, lbl_80882848
    stfs f0, 0x238(r30)
    b lbl_fn_801C7918_0000090C
lbl_fn_801C7918_000008D4:
    lfs f1, lbl_80882848
    mr r3, r30
    lfs f2, lbl_8088284C
    li r4, 0x0
    li r5, 0x25
    li r6, 0x0
    li r7, 0x1
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_8088285C
    li r29, 0x0
    stfs f0, 0x234(r30)
    lfs f0, lbl_80882848
    stfs f0, 0x238(r30)
lbl_fn_801C7918_0000090C:
    lwz r5, 0x8(r28)
    lwz r3, 0x4(r5)
    subi r0, r3, 0x148
    cmplwi r0, 0x2
    bgt lbl_fn_801C7918_00000974
    lwz r3, lbl_8087F048
    addi r6, r28, 0xc
    lwz r4, 0x4(r28)
    addi r7, r28, 0x18
    lfs f1, lbl_80882850
    li r8, 0x0
    lfs f2, lbl_80882848
    lis r9, 0xa0
    li r10, 0x0
    bl fn_800F8574
    lwz r27, lbl_8087F430
    li r4, 0xcf7
    mr r3, r27
    bl fn_80370174
    mr r4, r3
    mr r3, r27
    addi r5, r4, 0x1
    li r6, 0x0
    li r4, 0xcf7
    bl fn_80370320
    b lbl_fn_801C7918_00000AC8
lbl_fn_801C7918_00000974:
    cmpwi r3, 0x144
    bne lbl_fn_801C7918_000009A8
    lwz r3, lbl_8087F048
    addi r6, r28, 0xc
    lwz r4, 0x4(r28)
    addi r7, r28, 0x18
    lfs f1, lbl_80882850
    li r8, 0x0
    lfs f2, lbl_80882848
    li r9, 0x40
    li r10, 0x0
    bl fn_800F8574
    b lbl_fn_801C7918_00000AC8
lbl_fn_801C7918_000009A8:
    lwz r4, 0x4(r28)
    lwz r3, 0x50(r4)
    subis r0, r3, 0xa
    cmplwi r0, 0xae77
    bne lbl_fn_801C7918_00000AA4
    lwz r3, lbl_8087F048
    addi r6, r28, 0xc
    lfs f1, lbl_80882850
    addi r7, r28, 0x18
    lfs f2, lbl_80882848
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_800F8574
    lfs f1, lbl_80882860
    addi r3, r1, 0x60
    li r4, 0x79
    bl fn_805F8E70
    psq_l f1, 0x18(r28), 0, 0
    addi r27, r1, 0x14
    lfs f2, 0x20(r28)
    mr r4, r27
    stfs f2, 0x1c(r1)
    mr r5, r27
    addi r3, r1, 0x60
    psq_st f1, 0x0(r27), 0, 0
    bl fn_805F93C0
    lwz r3, lbl_8087F048
    mr r7, r27
    lwz r4, 0x4(r28)
    addi r6, r28, 0xc
    lwz r5, 0x8(r28)
    li r8, 0x0
    lfs f1, lbl_80882850
    li r9, 0x0
    lfs f2, lbl_80882848
    li r10, 0x0
    bl fn_800F8574
    lfs f1, lbl_80882864
    addi r3, r1, 0x30
    li r4, 0x79
    bl fn_805F8E70
    psq_l f1, 0x18(r28), 0, 0
    addi r27, r1, 0x8
    lfs f2, 0x20(r28)
    mr r4, r27
    stfs f2, 0x10(r1)
    mr r5, r27
    addi r3, r1, 0x30
    psq_st f1, 0x0(r27), 0, 0
    bl fn_805F93C0
    lwz r3, lbl_8087F048
    mr r7, r27
    lwz r4, 0x4(r28)
    addi r6, r28, 0xc
    lwz r5, 0x8(r28)
    li r8, 0x0
    lfs f1, lbl_80882850
    li r9, 0x0
    lfs f2, lbl_80882848
    li r10, 0x0
    bl fn_800F8574
    b lbl_fn_801C7918_00000AC8
lbl_fn_801C7918_00000AA4:
    lwz r3, lbl_8087F048
    addi r6, r28, 0xc
    lfs f1, lbl_80882850
    addi r7, r28, 0x18
    lfs f2, lbl_80882848
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_800F8574
lbl_fn_801C7918_00000AC8:
    lwz r5, lbl_8087F610
    lwz r3, 0x4(r28)
    cmpwi r5, 0x0
    lwz r6, 0x950(r3)
    addi r3, r3, 0x7d4
    beq lbl_fn_801C7918_00000AE4
    subi r6, r6, 0x64
lbl_fn_801C7918_00000AE4:
    xoris r0, r6, 0x8000
    stw r0, 0xc4(r1)
    lis r4, lbl_8073B8F8@ha
    lfs f5, lbl_80882848
    lfd f4, lbl_8073B8F8@l(r4)
    lfd f0, 0xc0(r1)
    lfs f3, lbl_80882868
    fsubs f0, f0, f4
    fnmsubs f0, f3, f0, f5
    fcmpo cr0, f5, f0
    bge lbl_fn_801C7918_00000B14
    b lbl_fn_801C7918_00000B24
lbl_fn_801C7918_00000B14:
    stw r0, 0xcc(r1)
    lfd f0, 0xc8(r1)
    fsubs f0, f0, f4
    fnmsubs f5, f3, f0, f5
lbl_fn_801C7918_00000B24:
    lfs f31, lbl_80882850
    fcmpo cr0, f31, f5
    ble lbl_fn_801C7918_00000B34
    b lbl_fn_801C7918_00000B74
lbl_fn_801C7918_00000B34:
    xoris r0, r6, 0x8000
    stw r0, 0xc4(r1)
    lis r4, lbl_8073B8F8@ha
    lfs f31, lbl_80882848
    lfd f4, lbl_8073B8F8@l(r4)
    lfd f0, 0xc0(r1)
    lfs f3, lbl_80882868
    fsubs f0, f0, f4
    fnmsubs f0, f3, f0, f31
    fcmpo cr0, f31, f0
    bge lbl_fn_801C7918_00000B64
    b lbl_fn_801C7918_00000B74
lbl_fn_801C7918_00000B64:
    stw r0, 0xcc(r1)
    lfd f0, 0xc8(r1)
    fsubs f0, f0, f4
    fnmsubs f31, f3, f0, f31
lbl_fn_801C7918_00000B74:
    cmpwi r29, 0x0
    lfs f30, lbl_80882848
    beq lbl_fn_801C7918_00000BB4
    cmpwi r5, 0x0
    beq lbl_fn_801C7918_00000BA0
    lfs f0, lbl_8087DA4C
    fsubs f4, f30, f31
    lfs f3, lbl_8087DA48
    fsubs f0, f0, f3
    fmadds f30, f4, f0, f3
    b lbl_fn_801C7918_00000BB4
lbl_fn_801C7918_00000BA0:
    lfs f0, lbl_8087DA54
    fsubs f4, f30, f31
    lfs f3, lbl_8087DA50
    fsubs f0, f0, f3
    fmadds f30, f4, f0, f3
lbl_fn_801C7918_00000BB4:
    li r4, 0x43
    li r5, -0x1
    bl fn_80134168
    cmpwi r3, 0x0
    ble lbl_fn_801C7918_00000C00
    lwz r3, 0x4(r28)
    li r4, 0x43
    li r5, -0x1
    addi r3, r3, 0x7d4
    bl fn_80134168
    xoris r0, r3, 0x8000
    stw r0, 0xc4(r1)
    lis r3, lbl_8073B8F8@ha
    lfs f0, lbl_8088286C
    lfd f4, lbl_8073B8F8@l(r3)
    lfd f3, 0xc0(r1)
    fsubs f3, f3, f4
    fdivs f0, f3, f0
    fmuls f30, f30, f0
lbl_fn_801C7918_00000C00:
    stfs f30, 0x238(r30)
    lis r3, lbl_8073B8F8@ha
    lfd f4, lbl_8073B8F8@l(r3)
    lwz r3, 0x8(r28)
    lwz r4, 0x4(r28)
    lwz r3, 0x68(r3)
    lwz r0, 0x48(r4)
    xoris r3, r3, 0x8000
    stw r3, 0xcc(r1)
    cmpwi r0, 0x0
    stw r3, 0xc4(r1)
    lfd f3, 0xc8(r1)
    lfd f0, 0xc0(r1)
    fsubs f3, f3, f4
    fsubs f0, f0, f4
    fmuls f3, f3, f31
    fmuls f0, f0, f31
    fctiwz f3, f3
    fctiwz f0, f0
    stfd f3, 0xd0(r1)
    stfd f0, 0xd8(r1)
    lwz r3, 0xd4(r1)
    lwz r0, 0xdc(r1)
    srawi r3, r3, 31
    andc r27, r0, r3
    bne lbl_fn_801C7918_00000C7C
    cmpwi r27, 0x28
    li r0, 0x28
    bgt lbl_fn_801C7918_00000C78
    mr r0, r27
lbl_fn_801C7918_00000C78:
    mr r27, r0
lbl_fn_801C7918_00000C7C:
    addi r3, r4, 0x7d4
    li r4, 0x43
    li r5, -0x1
    bl fn_80134168
    cmpwi r3, 0x0
    ble lbl_fn_801C7918_00000CE8
    lwz r3, 0x4(r28)
    li r4, 0x43
    li r5, -0x1
    addi r3, r3, 0x7d4
    bl fn_80134168
    xoris r0, r3, 0x8000
    stw r0, 0xcc(r1)
    lis r3, lbl_8073B8F8@ha
    lfs f3, lbl_8088286C
    lfd f5, lbl_8073B8F8@l(r3)
    xoris r0, r27, 0x8000
    lfd f0, 0xc8(r1)
    stw r0, 0xc4(r1)
    fsubs f4, f0, f5
    lfd f0, 0xc0(r1)
    fdivs f3, f4, f3
    fsubs f0, f0, f5
    fdivs f0, f0, f3
    fctiwz f0, f0
    stfd f0, 0xd8(r1)
    lwz r27, 0xdc(r1)
lbl_fn_801C7918_00000CE8:
    lwz r3, 0x4(r28)
    stw r27, 0x644(r3)
    stw r27, 0x640(r3)
    lwz r3, 0x4(r28)
    lwz r0, 0x12a8(r3)
    rlwinm r0, r0, 0, 24, 22
    stw r0, 0x12a8(r3)
    lwz r3, 0x4(r28)
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801C7918_00000D1C
    lwz r3, lbl_8087F120
    bl fn_801EA0B4
lbl_fn_801C7918_00000D1C:
    lwz r3, 0x4(r28)
    li r4, 0x0
    stw r4, 0xfb0(r3)
    lwz r5, 0x4(r28)
    lwz r3, 0x8(r28)
    lwz r0, 0xfb4(r5)
    lwz r3, 0x48(r3)
    add r0, r3, r0
    stw r0, 0xfb4(r5)
    lwz r5, 0x4(r28)
    lwz r3, 0xfb4(r5)
    lwz r0, 0x8dc(r5)
    cmpw r3, r0
    blt lbl_fn_801C7918_00000D8C
    lwz r0, 0x8e0(r5)
    lis r3, lbl_8073B8F8@ha
    lfd f3, lbl_8073B8F8@l(r3)
    xoris r0, r0, 0x8000
    stw r0, 0xcc(r1)
    lfd f0, 0xc8(r1)
    fsubs f0, f0, f3
    fmuls f0, f31, f0
    fctiwz f0, f0
    stfd f0, 0xd8(r1)
    lwz r0, 0xdc(r1)
    stw r0, 0xfb0(r5)
    lwz r3, 0x4(r28)
    stw r4, 0xfb4(r3)
lbl_fn_801C7918_00000D8C:
    cmpwi r31, 0x0
    beq lbl_fn_801C7918_00000DE0
    lwz r3, 0x4(r28)
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801C7918_00000DE0
    lwz r5, lbl_8087F430
    cmpwi r5, 0x0
    beq lbl_fn_801C7918_00000DE0
    lwz r3, 0x96c(r5)
    li r0, 0x2
    lfs f3, lbl_80882850
    srwi r4, r3, 31
    clrlwi r3, r3, 31
    xor r3, r3, r4
    lfs f0, lbl_80882848
    subf r3, r4, r3
    stw r3, 0x96c(r5)
    stw r0, 0x970(r5)
    stfs f3, 0x974(r5)
    stfs f0, 0x978(r5)
lbl_fn_801C7918_00000DE0:
    psq_l f31, 0x118(r1), 0, 0
    mr r3, r28
    lfd f31, 0x110(r1)
    psq_l f30, 0x108(r1), 0, 0
    lfd f30, 0x100(r1)
    addi r11, r1, 0x100
    bl _restgpr_27
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_801C815C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    psq_st f31, 0x18(r1), 0, 0
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r4, 0x4(r3)
    lwz r3, 0x2dc(r4)
    addi r31, r4, 0xb0
    subi r0, r3, 0x17d
    cmplwi r0, 0x1
    bgt lbl_fn_801C815C_00000E68
    mr r3, r4
    addi r4, r4, 0x534
    lwz r12, 0x0(r3)
    li r5, 0x0
    lfs f1, lbl_80882850
    lwz r12, 0x34(r12)
    lfs f2, lbl_80882848
    mtctr r12
    bctrl
lbl_fn_801C815C_00000E68:
    lfs f31, 0x234(r31)
    mr r3, r31
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    mfcr r5
    lwz r4, 0x4(r30)
    extrwi r5, r5, 1, 2
    lwz r3, 0x50(r4)
    subis r0, r3, 0xa
    cmplwi r0, 0xae76
    bne lbl_fn_801C815C_00000EC0
    lwz r0, 0x12a4(r4)
    extrwi. r0, r0, 1, 25
    beq lbl_fn_801C815C_00000EC0
    lfs f1, 0x234(r31)
    lfs f0, lbl_80882870
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    mfcr r5
    extrwi r5, r5, 1, 2
lbl_fn_801C815C_00000EC0:
    cmpwi r5, 0x0
    beq lbl_fn_801C815C_00000F44
    lwz r5, 0x24(r30)
    mr r3, r31
    lfs f1, lbl_80882850
    li r4, 0x0
    lfs f2, lbl_8088284C
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r3, 0x4(r30)
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 25
    beq lbl_fn_801C815C_00000F3C
    lwz r3, 0x50(r3)
    subis r0, r3, 0xa
    cmplwi r0, 0xae76
    beq lbl_fn_801C815C_00000F18
    cmplwi r0, 0xae77
    beq lbl_fn_801C815C_00000F2C
    b lbl_fn_801C815C_00000F3C
lbl_fn_801C815C_00000F18:
    lfs f0, lbl_80882858
    stfs f0, 0x234(r31)
    lfs f0, lbl_80882850
    stfs f0, 0x238(r31)
    b lbl_fn_801C815C_00000F3C
lbl_fn_801C815C_00000F2C:
    lfs f0, lbl_8088285C
    stfs f0, 0x234(r31)
    lfs f0, lbl_80882850
    stfs f0, 0x238(r31)
lbl_fn_801C815C_00000F3C:
    li r3, 0x1
    b lbl_fn_801C815C_00000F48
lbl_fn_801C815C_00000F44:
    li r3, 0x0
lbl_fn_801C815C_00000F48:
    lwz r0, 0x24(r1)
    psq_l f31, 0x18(r1), 0, 0
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801C82B8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801C82B8_00000F90
    cmpwi r4, 0x0
    ble lbl_fn_801C82B8_00000F90
    bl dtor_80084684
lbl_fn_801C82B8_00000F90:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801C82F8(void)
{
    nofralloc
    stwu r1, -0x1e0(r1)
    mflr r0
    stw r0, 0x1e4(r1)
    addi r11, r1, 0x1b0
    stfd f31, 0x1d0(r1)
    psq_st f31, 0x1d8(r1), 0, 0
    stfd f30, 0x1c0(r1)
    psq_st f30, 0x1c8(r1), 0, 0
    stfd f29, 0x1b0(r1)
    psq_st f29, 0x1b8(r1), 0, 0
    bl _savegpr_27
    lfs f0, lbl_80882878
    lis r8, lbl_807820F0@ha
    addi r8, r8, lbl_807820F0@l
    stw r4, 0x4(r3)
    li r7, 0x0
    li r0, 0x55
    stw r8, 0x0(r3)
    mr r28, r3
    mr r29, r6
    stfs f0, 0xc(r3)
    stfs f0, 0x10(r3)
    stfs f0, 0x14(r3)
    stfs f0, 0x18(r3)
    stw r7, 0x58c(r4)
    lwz r4, 0x4(r3)
    stw r0, 0x560(r4)
    stw r5, 0x8(r3)
    lwz r4, 0x4(r3)
    lwz r0, 0x12a4(r4)
    rlwinm r0, r0, 0, 27, 25
    stw r0, 0x12a4(r4)
    lwz r3, 0x4(r3)
    bl fn_8016DA4C
    lwz r3, 0x4(r28)
    lwz r0, 0x12a4(r3)
    srwi. r0, r0, 31
    beq lbl_fn_801C82F8_00001044
    bl fn_801539E0
lbl_fn_801C82F8_00001044:
    lwz r3, 0x4(r28)
    li r4, 0x0
    lwz r0, 0x12a4(r3)
    srwi. r0, r0, 31
    beq lbl_fn_801C82F8_00001068
    lwz r0, 0xc48(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801C82F8_00001068
    li r4, 0x1
lbl_fn_801C82F8_00001068:
    cmpwi r4, 0x0
    beq lbl_fn_801C82F8_00001074
    bl fn_80154344
lbl_fn_801C82F8_00001074:
    lwz r3, 0x4(r28)
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 25
    beq lbl_fn_801C82F8_0000108C
    li r4, 0x0
    bl fn_80155DAC
lbl_fn_801C82F8_0000108C:
    li r0, 0x0
    stw r0, 0x174(r1)
    addi r5, r1, 0x74
    lfs f3, lbl_8088287C
    stw r0, 0x178(r1)
    addi r6, r1, 0x68
    lfs f0, lbl_80882880
    addi r3, r1, 0x110
    stw r0, 0x17c(r1)
    li r31, 0x11
    li r30, 0x1
    li r4, 0x79
    stw r0, 0x180(r1)
    lwz r7, 0x4(r28)
    lfs f2, 0x530(r7)
    psq_l f1, 0x528(r7), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    lfs f4, 0x78(r1)
    stfs f2, 0x7c(r1)
    fadds f3, f4, f3
    stfs f2, 0x70(r1)
    stfs f3, 0x78(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    lfs f3, 0x538(r7)
    fsubs f1, f3, f0
    bl fn_805F8E70
    lfs f0, lbl_80882878
    addi r4, r1, 0x5c
    stfs f0, 0x50(r1)
    addi r6, r1, 0x50
    lfs f2, lbl_80882884
    mr r5, r4
    stfs f0, 0x54(r1)
    addi r3, r1, 0x110
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x58(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x64(r1)
    bl fn_805F93C0
    lfs f3, 0x68(r1)
    lfs f0, 0x5c(r1)
    lfs f5, 0x6c(r1)
    fadds f6, f3, f0
    lfs f4, 0x60(r1)
    lfs f3, 0x70(r1)
    lfs f0, 0x64(r1)
    fadds f4, f5, f4
    stfs f6, 0x68(r1)
    fadds f0, f3, f0
    stfs f4, 0x6c(r1)
    stfs f0, 0x70(r1)
    lwz r3, 0x4(r28)
    lwz r3, 0x50(r3)
    bl fn_80219558
    cmpwi r3, 0x2
    bne lbl_fn_801C82F8_00001174
    li r29, 0x1
lbl_fn_801C82F8_00001174:
    cmpwi r29, 0x0
    bne lbl_fn_801C82F8_00001260
    lwz r3, 0x4(r28)
    lfs f0, 0x508(r3)
    lfs f29, 0x570(r3)
    lfs f31, 0x500(r3)
    fcmpo cr0, f29, f0
    lfs f30, 0x504(r3)
    ble lbl_fn_801C82F8_000011A4
    li r31, 0x48
    li r30, 0x0
    b lbl_fn_801C82F8_00001260
lbl_fn_801C82F8_000011A4:
    lwz r3, lbl_8087EE98
    addi r4, r1, 0x140
    addi r5, r1, 0x74
    addi r6, r1, 0x68
    lis r7, 0x8000
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_801C82F8_0000123C
    lwz r4, 0x4(r28)
    addi r3, r1, 0xe0
    li r31, 0x51
    li r30, 0x0
    lfs f1, 0x538(r4)
    li r4, 0x79
    bl fn_805F8E70
    lfs f0, lbl_80882878
    addi r27, r1, 0x44
    stfs f0, 0x38(r1)
    addi r6, r1, 0x38
    lfs f2, lbl_80882888
    mr r4, r27
    stfs f0, 0x3c(r1)
    mr r5, r27
    addi r3, r1, 0xe0
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x40(r1)
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0x4c(r1)
    bl fn_805F93C0
    psq_l f1, 0x0(r27), 0, 0
    lfs f2, 0x4c(r1)
    lfs f0, lbl_8088288C
    psq_st f1, 0xc(r28), 0, 0
    stfs f2, 0x14(r28)
    stfs f0, 0x18(r28)
    b lbl_fn_801C82F8_00001260
lbl_fn_801C82F8_0000123C:
    fcmpo cr0, f29, f30
    ble lbl_fn_801C82F8_00001250
    li r31, 0x46
    li r30, 0x0
    b lbl_fn_801C82F8_00001260
lbl_fn_801C82F8_00001250:
    fcmpo cr0, f29, f31
    ble lbl_fn_801C82F8_00001260
    li r31, 0x54
    li r30, 0x1
lbl_fn_801C82F8_00001260:
    cmpwi r29, 0x1
    bne lbl_fn_801C82F8_00001274
    li r31, 0x11
    li r30, 0x1
    b lbl_fn_801C82F8_000013C8
lbl_fn_801C82F8_00001274:
    cmpwi r29, 0x2
    bne lbl_fn_801C82F8_00001320
    lwz r3, lbl_8087EE98
    addi r4, r1, 0x140
    addi r5, r1, 0x74
    addi r6, r1, 0x68
    lis r7, 0x8000
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_801C82F8_00001314
    lwz r4, 0x4(r28)
    addi r3, r1, 0xb0
    li r31, 0x51
    li r30, 0x0
    lfs f1, 0x538(r4)
    li r4, 0x79
    bl fn_805F8E70
    lfs f0, lbl_80882878
    addi r27, r1, 0x2c
    stfs f0, 0x20(r1)
    addi r6, r1, 0x20
    lfs f2, lbl_80882888
    mr r4, r27
    stfs f0, 0x24(r1)
    mr r5, r27
    addi r3, r1, 0xb0
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x28(r1)
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0x34(r1)
    bl fn_805F93C0
    psq_l f1, 0x0(r27), 0, 0
    lfs f2, 0x34(r1)
    lfs f0, lbl_8088288C
    psq_st f1, 0xc(r28), 0, 0
    stfs f2, 0x14(r28)
    stfs f0, 0x18(r28)
    b lbl_fn_801C82F8_000013C8
lbl_fn_801C82F8_00001314:
    li r31, 0x46
    li r30, 0x0
    b lbl_fn_801C82F8_000013C8
lbl_fn_801C82F8_00001320:
    cmpwi r29, 0x3
    bne lbl_fn_801C82F8_000013C8
    lwz r3, lbl_8087EE98
    addi r4, r1, 0x140
    addi r5, r1, 0x74
    addi r6, r1, 0x68
    lis r7, 0x8000
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_801C82F8_000013C0
    lwz r4, 0x4(r28)
    addi r3, r1, 0x80
    li r31, 0x51
    li r30, 0x0
    lfs f1, 0x538(r4)
    li r4, 0x79
    bl fn_805F8E70
    lfs f0, lbl_80882878
    addi r27, r1, 0x14
    stfs f0, 0x8(r1)
    addi r6, r1, 0x8
    lfs f2, lbl_80882888
    mr r4, r27
    stfs f0, 0xc(r1)
    mr r5, r27
    addi r3, r1, 0x80
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x10(r1)
    psq_st f1, 0x0(r27), 0, 0
    stfs f2, 0x1c(r1)
    bl fn_805F93C0
    psq_l f1, 0x0(r27), 0, 0
    lfs f2, 0x1c(r1)
    lfs f0, lbl_8088288C
    psq_st f1, 0xc(r28), 0, 0
    stfs f2, 0x14(r28)
    stfs f0, 0x18(r28)
    b lbl_fn_801C82F8_000013C8
lbl_fn_801C82F8_000013C0:
    li r31, 0x48
    li r30, 0x0
lbl_fn_801C82F8_000013C8:
    lwz r3, 0x4(r28)
    li r0, 0x1
    lfs f0, lbl_80882888
    mr r5, r31
    stw r0, 0x3fc(r3)
    addi r27, r3, 0xb0
    lfs f1, lbl_80882878
    mr r3, r27
    lfs f2, lbl_80882890
    mr r6, r30
    stfs f0, 0x24c(r27)
    li r4, 0x0
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f1, lbl_80882888
    stfs f1, 0x238(r27)
    lwz r3, lbl_8087F498
    cmpwi r3, 0x0
    beq lbl_fn_801C82F8_00001454
    cmpwi r29, 0x2
    bne lbl_fn_801C82F8_00001438
    lwz r4, 0x4(r28)
    li r5, 0x11
    lfs f2, lbl_80882894
    li r6, 0x0
    bl fn_803EA77C
    b lbl_fn_801C82F8_00001454
lbl_fn_801C82F8_00001438:
    cmpwi r29, 0x3
    bne lbl_fn_801C82F8_00001454
    lwz r4, 0x4(r28)
    li r5, 0x10
    lfs f2, lbl_80882894
    li r6, 0x0
    bl fn_803EA77C
lbl_fn_801C82F8_00001454:
    psq_l f31, 0x1d8(r1), 0, 0
    mr r3, r28
    lfd f31, 0x1d0(r1)
    psq_l f30, 0x1c8(r1), 0, 0
    lfd f30, 0x1c0(r1)
    psq_l f29, 0x1b8(r1), 0, 0
    lfd f29, 0x1b0(r1)
    addi r11, r1, 0x1b0
    bl _restgpr_27
    lwz r0, 0x1e4(r1)
    mtlr r0
    addi r1, r1, 0x1e0
    blr
}

asm void fn_801C87D8(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r4, r1, 0x20
    stfd f31, 0x60(r1)
    psq_st f31, 0x68(r1), 0, 0
    stfd f30, 0x50(r1)
    psq_st f30, 0x58(r1), 0, 0
    lfs f30, lbl_80882878
    stfd f29, 0x40(r1)
    psq_st f29, 0x48(r1), 0, 0
    lfs f29, lbl_80882888
    stw r31, 0x3c(r1)
    mr r31, r3
    lwz r6, 0x4(r3)
    psq_l f1, 0x534(r6), 0, 0
    lfs f2, 0x53c(r6)
    stfs f2, 0x28(r1)
    psq_st f1, 0x0(r4), 0, 0
    lwz r4, 0x8(r3)
    subi r0, r4, 0x1
    stw r0, 0x8(r3)
    lbz r5, 0x2f4(r6)
    lwz r4, 0x2dc(r6)
    cmpwi r5, 0x0
    bne lbl_fn_801C87D8_00001584
    cmpwi r4, 0x51
    bne lbl_fn_801C87D8_0000155C
    addi r4, r1, 0x14
    psq_l f1, 0x528(r6), 0, 0
    lfs f5, 0x18(r3)
    lfs f3, 0x10(r3)
    lfs f0, 0xc(r3)
    fmuls f6, f3, f5
    psq_st f1, 0x0(r4), 0, 0
    fmuls f7, f0, f5
    lfs f4, 0x14(r3)
    lfs f3, 0x14(r1)
    lfs f0, 0x18(r1)
    fadds f3, f3, f7
    lfs f2, 0x530(r6)
    fmuls f4, f4, f5
    stfs f7, 0x8(r1)
    fadds f0, f0, f6
    stfs f3, 0x14(r1)
    fadds f2, f2, f4
    stfs f0, 0x18(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x528(r6), 0, 0
    stfs f6, 0xc(r1)
    stfs f4, 0x10(r1)
    stfs f2, 0x1c(r1)
    stfs f2, 0x530(r6)
lbl_fn_801C87D8_0000155C:
    lwz r3, 0x4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    lfs f31, 0x234(r3)
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_801C87D8_00001594
    li r3, 0x1
    b lbl_fn_801C87D8_000015BC
lbl_fn_801C87D8_00001584:
    cmpwi r0, 0x0
    bgt lbl_fn_801C87D8_00001594
    li r3, 0x1
    b lbl_fn_801C87D8_000015BC
lbl_fn_801C87D8_00001594:
    lwz r3, 0x4(r31)
    fmr f1, f30
    fmr f2, f29
    addi r4, r1, 0x20
    lwz r12, 0x0(r3)
    li r5, 0x0
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    li r3, 0x0
lbl_fn_801C87D8_000015BC:
    lwz r0, 0x74(r1)
    psq_l f31, 0x68(r1), 0, 0
    lfd f31, 0x60(r1)
    psq_l f30, 0x58(r1), 0, 0
    lfd f30, 0x50(r1)
    psq_l f29, 0x48(r1), 0, 0
    lfd f29, 0x40(r1)
    lwz r31, 0x3c(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_801C8938(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    lis r6, lbl_80782078@ha
    stw r0, 0x54(r1)
    addi r6, r6, lbl_80782078@l
    li r0, 0x63
    stw r31, 0x4c(r1)
    mr r31, r3
    stw r30, 0x48(r1)
    stw r4, 0x4(r3)
    stw r6, 0x0(r3)
    stw r5, 0x14(r3)
    stw r0, 0x560(r4)
    lwz r3, 0x4(r3)
    lwz r0, 0x12a4(r3)
    addi r30, r3, 0xb0
    srwi. r0, r0, 31
    beq lbl_fn_801C8938_00001634
    bl fn_801539E0
lbl_fn_801C8938_00001634:
    lwz r3, 0x4(r31)
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 25
    beq lbl_fn_801C8938_0000164C
    li r4, 0x0
    bl fn_80155DAC
lbl_fn_801C8938_0000164C:
    lwz r3, 0x4(r31)
    bl fn_8016DA4C
    lwz r7, 0x4(r31)
    li r0, 0x1
    lfs f0, lbl_80882888
    mr r3, r30
    lwz r6, 0x12a4(r7)
    li r4, 0x0
    lfs f1, lbl_80882878
    li r5, 0x8e
    rlwinm r6, r6, 0, 27, 25
    stw r6, 0x12a4(r7)
    lfs f2, lbl_80882890
    li r6, 0x0
    stw r0, 0x34c(r30)
    li r7, 0x1
    li r8, 0x1
    stfs f0, 0x24c(r30)
    bl fn_80097C08
    lfs f3, lbl_80882888
    addi r3, r1, 0x18
    stfs f3, 0x238(r30)
    li r4, 0x79
    lfs f0, lbl_80882878
    lwz r5, 0x4(r31)
    stfs f0, 0x8(r1)
    stfs f0, 0xc(r1)
    stfs f3, 0x10(r1)
    lfs f1, 0x538(r5)
    bl fn_805F8E70
    addi r4, r1, 0x8
    addi r3, r1, 0x18
    mr r5, r4
    bl fn_805F93C0
    addi r3, r1, 0x8
    lfs f2, 0x10(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x8(r31), 0, 0
    stfs f2, 0x10(r31)
    lwz r0, lbl_8087F498
    cmpwi r0, 0x0
    beq lbl_fn_801C8938_00001728
    bl fn_80680CF8
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    subf. r0, r4, r0
    bne lbl_fn_801C8938_00001728
    lwz r3, lbl_8087F498
    li r5, 0x11
    lwz r4, 0x4(r31)
    li r6, 0x0
    lfs f1, lbl_80882888
    lfs f2, lbl_80882894
    bl fn_803EA77C
lbl_fn_801C8938_00001728:
    lwz r0, lbl_8087F498
    cmpwi r0, 0x0
    beq lbl_fn_801C8938_00001768
    bl fn_80680CF8
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    subf. r0, r4, r0
    bne lbl_fn_801C8938_00001768
    lwz r3, lbl_8087F498
    li r5, 0x12
    lwz r4, 0x4(r31)
    li r6, 0x2d
    lfs f1, lbl_80882888
    lfs f2, lbl_80882894
    bl fn_803EA77C
lbl_fn_801C8938_00001768:
    lwz r3, 0x4(r31)
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801C8938_000017C0
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_801C8938_000017C0
    li r4, 0xf9
    bl fn_80370174
    addi r0, r3, 0x1
    cmpwi r0, 0x3e7
    bge lbl_fn_801C8938_000017AC
    lwz r3, lbl_8087F430
    li r4, 0xf9
    bl fn_80370174
    addi r5, r3, 0x1
    b lbl_fn_801C8938_000017B0
lbl_fn_801C8938_000017AC:
    li r5, 0x3e7
lbl_fn_801C8938_000017B0:
    lwz r3, lbl_8087F430
    li r4, 0xf9
    li r6, 0x0
    bl fn_80370320
lbl_fn_801C8938_000017C0:
    lwz r0, 0x14(r31)
    cmpwi r0, 0x0
    beq lbl_fn_801C8938_0000181C
    lwz r3, 0x4(r31)
    li r4, 0x3
    lfs f1, lbl_80882878
    stfs f1, 0x580(r3)
    stfs f1, 0x584(r3)
    lwz r30, 0x4(r31)
    addi r3, r30, 0xb0
    bl fn_80097CCC
    li r0, -0x1
    stw r0, 0x12bc(r30)
    lis r3, lbl_807C7030@ha
    lfs f0, lbl_80882878
    lwz r4, 0x4(r31)
    addi r3, r3, lbl_807C7030@l
    stfs f0, 0x570(r4)
    lwz r4, 0x4(r31)
    lfs f2, 0x8(r3)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x574(r4), 0, 0
    stfs f2, 0x57c(r4)
lbl_fn_801C8938_0000181C:
    mr r3, r31
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_801C8B88(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x124(r1)
    stfd f31, 0x110(r1)
    psq_st f31, 0x118(r1), 0, 0
    lfs f31, lbl_80882878
    stfd f30, 0x100(r1)
    psq_st f30, 0x108(r1), 0, 0
    fmr f30, f31
    stfd f29, 0xf0(r1)
    psq_st f29, 0xf8(r1), 0, 0
    stfd f28, 0xe0(r1)
    psq_st f28, 0xe8(r1), 0, 0
    stw r31, 0xdc(r1)
    stw r30, 0xd8(r1)
    mr r30, r3
    lwz r5, 0x4(r3)
    addi r31, r5, 0xb0
    lfs f28, 0x2e4(r5)
    mr r3, r31
    bl fn_80097D7C
    fcmpo cr0, f28, f1
    cror eq, gt, eq
    bne lbl_fn_801C8B88_000018A4
    li r3, 0x1
    b lbl_fn_801C8B88_00001B08
lbl_fn_801C8B88_000018A4:
    lwz r0, 0x14(r30)
    cmpwi r0, 0x0
    bne lbl_fn_801C8B88_00001904
    lfs f3, 0x234(r31)
    lfs f0, lbl_80882898
    lfs f31, lbl_80882888
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_801C8B88_000018D0
    lfs f30, lbl_8088289C
    b lbl_fn_801C8B88_00001904
lbl_fn_801C8B88_000018D0:
    lfs f0, lbl_808828A0
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_801C8B88_000018E8
    lfs f30, lbl_808828A4
    b lbl_fn_801C8B88_00001904
lbl_fn_801C8B88_000018E8:
    lfs f0, lbl_808828AC
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_801C8B88_00001900
    lfs f30, lbl_808828A8
    b lbl_fn_801C8B88_00001904
lbl_fn_801C8B88_00001900:
    lfs f30, lbl_80882890
lbl_fn_801C8B88_00001904:
    cmpwi r0, 0x0
    beq lbl_fn_801C8B88_00001934
    lwz r3, 0x4(r30)
    li r0, 0x1
    lwz r3, 0x48(r3)
    cmpwi r3, 0x1
    beq lbl_fn_801C8B88_0000192C
    cmpwi r3, 0x4
    beq lbl_fn_801C8B88_0000192C
    li r0, 0x0
lbl_fn_801C8B88_0000192C:
    cmpwi r0, 0x0
    bne lbl_fn_801C8B88_00001B04
lbl_fn_801C8B88_00001934:
    lfs f2, 0x10(r30)
    addi r31, r1, 0x50
    psq_l f1, 0x8(r30), 0, 0
    fabs f3, f2
    lfs f0, lbl_808828B0
    psq_st f1, 0x0(r31), 0, 0
    frsp f3, f3
    stfs f2, 0x58(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_801C8B88_00001980
    lfs f3, 0x50(r1)
    lfs f0, lbl_80882878
    fcmpo cr0, f3, f0
    ble lbl_fn_801C8B88_00001974
    lfs f0, lbl_80882880
    b lbl_fn_801C8B88_00001978
lbl_fn_801C8B88_00001974:
    lfs f0, lbl_808828B4
lbl_fn_801C8B88_00001978:
    stfs f0, 0x48(r1)
    b lbl_fn_801C8B88_00001994
lbl_fn_801C8B88_00001980:
    frsp f2, f2
    lfs f1, 0x50(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_801C8B88_00001994:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x60
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80882878
    addi r4, r1, 0x38
    lfs f28, 0x68(r1)
    mr r5, r4
    lfs f29, 0x64(r1)
    addi r3, r1, 0x90
    lfs f13, 0x60(r1)
    lfs f12, 0x78(r1)
    lfs f11, 0x74(r1)
    lfs f10, 0x70(r1)
    lfs f9, 0x88(r1)
    lfs f8, 0x84(r1)
    lfs f7, 0x80(r1)
    lfs f6, 0x8c(r1)
    lfs f5, 0x7c(r1)
    lfs f4, 0x6c(r1)
    lfs f0, lbl_80882888
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x58(r1)
    stfs f3, 0xc0(r1)
    stfs f3, 0xc4(r1)
    stfs f3, 0xc8(r1)
    stfs f0, 0xcc(r1)
    stfs f13, 0x8(r1)
    stfs f29, 0xc(r1)
    stfs f28, 0x10(r1)
    stfs f13, 0x90(r1)
    stfs f29, 0x94(r1)
    stfs f28, 0x98(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xa0(r1)
    stfs f11, 0xa4(r1)
    stfs f12, 0xa8(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0xb0(r1)
    stfs f8, 0xb4(r1)
    stfs f9, 0xb8(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0x9c(r1)
    stfs f5, 0xac(r1)
    stfs f6, 0xbc(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_808828B0
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_801C8B88_00001AB0
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80882878
    fcmpo cr0, f3, f0
    ble lbl_fn_801C8B88_00001AA0
    lfs f0, lbl_80882880
    b lbl_fn_801C8B88_00001AA4
lbl_fn_801C8B88_00001AA0:
    lfs f0, lbl_808828B4
lbl_fn_801C8B88_00001AA4:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_801C8B88_00001AC4
lbl_fn_801C8B88_00001AB0:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_801C8B88_00001AC4:
    lfs f0, lbl_80882878
    addi r3, r1, 0x44
    psq_l f1, 0x0(r3), 0, 0
    mr r4, r31
    fmr f2, f0
    psq_st f1, 0x0(r31), 0, 0
    fmr f1, f31
    li r5, 0x0
    stfs f2, 0x58(r1)
    fmr f2, f30
    lwz r3, 0x4(r30)
    stfs f0, 0x4c(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
lbl_fn_801C8B88_00001B04:
    li r3, 0x0
lbl_fn_801C8B88_00001B08:
    lwz r0, 0x124(r1)
    psq_l f31, 0x118(r1), 0, 0
    lfd f31, 0x110(r1)
    psq_l f30, 0x108(r1), 0, 0
    lfd f30, 0x100(r1)
    psq_l f29, 0xf8(r1), 0, 0
    lfd f29, 0xf0(r1)
    psq_l f28, 0xe8(r1), 0, 0
    lfd f28, 0xe0(r1)
    lwz r31, 0xdc(r1)
    lwz r30, 0xd8(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}
