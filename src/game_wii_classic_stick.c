#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void fn_800128FC(void);
extern void fn_80049B74(void);
extern void fn_8004B0E4(void);
extern void fn_8004B1EC(void);
extern void fn_800C31F4(void);
extern void fn_800C344C(void);
extern void fn_800CB360(void);
extern void fn_800CB3A0(void);
extern void fn_800CB404(void);
extern void fn_800CB440(void);
extern void fn_800CB4A4(void);
extern void fn_800CB518(void);
extern void fn_800CB5B4(void);
extern void fn_800CB5C8(void);
extern void fn_800CB654(void);
extern void fn_800CB668(void);
extern void fn_800CB688(void);
extern void fn_8022960C(void);
extern void fn_803601E4(void);
extern void fn_803606CC(void);
extern void fn_80360780(void);
extern void fn_80370A78(void);
extern void fn_80370AE4(void);
extern void fn_80370B78(void);
extern void fn_8037D4C0(void);
extern void fn_803B3B38(void);
extern void fn_803B4C24(void);
extern void fn_803B5774(void);
extern void fn_803B57B0(void);
extern void fn_803B57EC(void);
extern void fn_803B5830(void);
extern void fn_803B58D8(void);
extern void fn_803CE160(void);
extern void fn_803E3BE8(void);
extern void fn_803E9608(void);
extern void fn_803EA09C(void);
extern void fn_803EB2A4(void);
extern void fn_80488050(void);
extern void fn_804881B8(void);
extern void fn_80488A74(void);
extern void fn_80488D80(void);
extern void fn_80489A2C(void);
extern void fn_80489A50(void);
extern void fn_8048E9A4(void);
extern void fn_8048EC7C(void);
extern void fn_805381A4(void);
extern void fn_805381CC(void);
extern void fn_805384D0(void);
extern void fn_80538DC8(void);
extern void fn_805393A8(void);
extern void fn_8053A2EC(void);
extern void fn_8053E8CC(void);
extern void fn_80541370(void);
extern void fn_8054154C(void);
extern void fn_805A2FD8(void);
extern void fn_805A38F4(void);
extern void fn_8067E23C(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_8075F060[];
extern u8 lbl_8075FAF8[];
extern u8 lbl_807C8AB0[];

/* Small data declarations */
extern u32 lbl_8087EE90;
extern u32 lbl_8087EFE8;
extern u32 lbl_8087F0A0;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F418;
extern u32 lbl_8087F430;
extern u32 lbl_8087F448;
extern u32 lbl_8087F490;
extern u32 lbl_8087F498;
extern u32 lbl_8087F540;
extern u32 lbl_8087F9F0;
extern u32 lbl_80887EB4;
extern u32 lbl_80887EB8;
extern u32 lbl_80887ED0;

/* Function declarations */
void fn_8055F040(void);
void fn_8055F154(void);
void fn_8055F234(void);
void fn_8055F328(void);
void fn_8055F46C(void);
void fn_8055F474(void);
void fn_8055F690(void);
void fn_8055FD3C(void);
void fn_8055FE0C(void);
void fn_8056014C(void);
void fn_8056023C(void);
void fn_805602B0(void);
void fn_80560798(void);
void fn_80560928(void);
void fn_805609AC(void);

asm void fn_8055F040(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r5, 0x5
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r4
    beq lbl_fn_8055F040_00000028
    cmpwi r5, 0x0
    bne lbl_fn_8055F040_000000F8
lbl_fn_8055F040_00000028:
    lwz r0, lbl_8087F430
    cmpwi r0, 0x0
    bne lbl_fn_8055F040_0000003C
    li r3, 0x2
    b lbl_fn_8055F040_000000FC
lbl_fn_8055F040_0000003C:
    mr r3, r30
    bl fn_805381CC
    lwz r31, 0x1ac(r3)
    cmpwi r31, -0x1
    bne lbl_fn_8055F040_00000058
    li r3, 0x2
    b lbl_fn_8055F040_000000FC
lbl_fn_8055F040_00000058:
    lwz r3, lbl_8087F430
    mr r4, r31
    bl fn_80370A78
    lwz r0, 0x30(r30)
    mr r5, r3
    cmpwi r0, 0x0
    ble lbl_fn_8055F040_0000007C
    lwz r4, 0x2c(r30)
    b lbl_fn_8055F040_00000080
lbl_fn_8055F040_0000007C:
    li r4, 0x0
lbl_fn_8055F040_00000080:
    cmpwi r0, 0x1
    lwz r0, 0x4(r4)
    ble lbl_fn_8055F040_00000098
    lwz r4, 0x2c(r30)
    addi r4, r4, 0x8
    b lbl_fn_8055F040_0000009C
lbl_fn_8055F040_00000098:
    li r4, 0x0
lbl_fn_8055F040_0000009C:
    cmpwi r0, 0x0
    lwz r4, 0x4(r4)
    bne lbl_fn_8055F040_000000B0
    mr r5, r4
    b lbl_fn_8055F040_000000EC
lbl_fn_8055F040_000000B0:
    cmpwi r0, 0x1
    bne lbl_fn_8055F040_000000C0
    add r5, r3, r4
    b lbl_fn_8055F040_000000EC
lbl_fn_8055F040_000000C0:
    cmpwi r0, 0x2
    bne lbl_fn_8055F040_000000D0
    subf r5, r4, r3
    b lbl_fn_8055F040_000000EC
lbl_fn_8055F040_000000D0:
    cmpwi r0, 0x3
    bne lbl_fn_8055F040_000000E0
    mullw r5, r3, r4
    b lbl_fn_8055F040_000000EC
lbl_fn_8055F040_000000E0:
    cmpwi r0, 0x4
    bne lbl_fn_8055F040_000000EC
    divw r5, r3, r4
lbl_fn_8055F040_000000EC:
    lwz r3, lbl_8087F430
    mr r4, r31
    bl fn_80370AE4
lbl_fn_8055F040_000000F8:
    li r3, 0x0
lbl_fn_8055F040_000000FC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8055F154(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    subi r0, r5, 0x3
    cmplwi r0, 0x1
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r4
    ble lbl_fn_8055F154_00000198
    cmpwi r5, 0x0
    bne lbl_fn_8055F154_000001D8
    lwz r3, lbl_8087F540
    lwz r0, 0x238c(r3)
    cmpwi r0, 0x0
    bgt lbl_fn_8055F154_000001D8
    mr r3, r30
    bl fn_805381A4
    mr r3, r30
    bl fn_805381CC
    lwz r0, 0x30(r30)
    mr r31, r3
    addi r3, r3, 0x1d4
    cmpwi r0, 0x0
    ble lbl_fn_8055F154_0000017C
    lwz r4, 0x2c(r30)
    b lbl_fn_8055F154_00000180
lbl_fn_8055F154_0000017C:
    li r4, 0x0
lbl_fn_8055F154_00000180:
    lwz r4, 0x4(r4)
    bl fn_803B3B38
    mr r4, r3
    lwz r3, 0x1ec(r31)
    bl fn_803B58D8
    b lbl_fn_8055F154_000001D8
lbl_fn_8055F154_00000198:
    mr r3, r30
    bl fn_805381A4
    mr r3, r30
    bl fn_805381CC
    lwz r0, 0x30(r30)
    mr r31, r3
    cmpwi r0, 0x4
    ble lbl_fn_8055F154_000001C4
    lwz r4, 0x2c(r30)
    addi r4, r4, 0x20
    b lbl_fn_8055F154_000001C8
lbl_fn_8055F154_000001C4:
    li r4, 0x0
lbl_fn_8055F154_000001C8:
    lwz r4, 0x4(r4)
    bl fn_80541370
    lwz r3, 0x1ec(r31)
    bl fn_803B57EC
lbl_fn_8055F154_000001D8:
    lwz r31, 0xc(r1)
    li r3, 0x0
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8055F234(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    mr r29, r4
    mr r3, r29
    bl fn_805381A4
    mr r3, r29
    bl fn_805381CC
    lwz r31, 0x1ec(r3)
    mr r30, r3
    lwz r3, 0x54(r31)
    bl fn_803B4C24
    cmpwi r3, 0x0
    beq lbl_fn_8055F234_000002C8
    lwz r4, 0x30(r29)
    cmpwi r4, 0x1
    ble lbl_fn_8055F234_00000250
    lwz r3, 0x2c(r29)
    addi r3, r3, 0x8
    b lbl_fn_8055F234_00000254
lbl_fn_8055F234_00000250:
    li r3, 0x0
lbl_fn_8055F234_00000254:
    lwz r0, 0x4(r3)
    cmpwi r4, 0x2
    stw r0, 0x8(r1)
    ble lbl_fn_8055F234_00000270
    lwz r3, 0x2c(r29)
    addi r3, r3, 0x10
    b lbl_fn_8055F234_00000274
lbl_fn_8055F234_00000270:
    li r3, 0x0
lbl_fn_8055F234_00000274:
    lwz r0, 0x4(r3)
    cmpwi r4, 0x3
    stw r0, 0xc(r1)
    ble lbl_fn_8055F234_00000290
    lwz r3, 0x2c(r29)
    addi r4, r3, 0x18
    b lbl_fn_8055F234_00000294
lbl_fn_8055F234_00000290:
    li r4, 0x0
lbl_fn_8055F234_00000294:
    lwz r3, 0x54(r31)
    lwz r0, 0x4(r4)
    lwz r3, 0x7c(r3)
    stw r0, 0x10(r1)
    cmplwi r3, 0x2
    bgt lbl_fn_8055F234_000002C0
    slwi r0, r3, 2
    addi r3, r1, 0x8
    lwzx r4, r3, r0
    mr r3, r30
    bl fn_80541370
lbl_fn_8055F234_000002C0:
    mr r3, r31
    bl fn_803B57EC
lbl_fn_8055F234_000002C8:
    lwz r31, 0x2c(r1)
    li r3, 0x0
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8055F328(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    subi r0, r5, 0x3
    cmplwi r0, 0x1
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r4
    ble lbl_fn_8055F328_000003A8
    cmpwi r5, 0x0
    bne lbl_fn_8055F328_00000410
    lwz r3, lbl_8087F540
    lwz r0, 0x238c(r3)
    cmpwi r0, 0x0
    bgt lbl_fn_8055F328_00000410
    mr r3, r30
    bl fn_805381A4
    mr r3, r30
    bl fn_805381CC
    lwz r0, 0x30(r30)
    mr r31, r3
    addi r3, r3, 0x1d4
    cmpwi r0, 0x0
    ble lbl_fn_8055F328_00000350
    lwz r4, 0x2c(r30)
    b lbl_fn_8055F328_00000354
lbl_fn_8055F328_00000350:
    li r4, 0x0
lbl_fn_8055F328_00000354:
    lwz r4, 0x4(r4)
    bl fn_803B3B38
    lwz r5, 0x1ec(r31)
    mr r4, r3
    li r0, 0x1
    lwz r3, 0x50(r5)
    cmpwi r3, 0x2
    beq lbl_fn_8055F328_00000380
    cmpwi r3, 0x4
    beq lbl_fn_8055F328_00000380
    li r0, 0x0
lbl_fn_8055F328_00000380:
    cmpwi r0, 0x0
    beq lbl_fn_8055F328_00000398
    mr r3, r5
    li r5, 0x0
    bl fn_803B5830
    b lbl_fn_8055F328_00000410
lbl_fn_8055F328_00000398:
    mr r3, r5
    li r5, 0x0
    bl fn_803B5774
    b lbl_fn_8055F328_00000410
lbl_fn_8055F328_000003A8:
    mr r3, r30
    bl fn_805381A4
    mr r3, r30
    bl fn_805381CC
    lwz r0, 0x30(r30)
    lwz r3, 0x1ec(r3)
    cmpwi r0, 0x1
    ble lbl_fn_8055F328_000003D4
    lwz r4, 0x2c(r30)
    addi r4, r4, 0x8
    b lbl_fn_8055F328_000003D8
lbl_fn_8055F328_000003D4:
    li r4, 0x0
lbl_fn_8055F328_000003D8:
    lwz r0, 0x4(r4)
    cmpwi r0, 0x0
    bne lbl_fn_8055F328_00000410
    lwz r4, 0x50(r3)
    li r0, 0x1
    cmpwi r4, 0x2
    beq lbl_fn_8055F328_00000400
    cmpwi r4, 0x4
    beq lbl_fn_8055F328_00000400
    li r0, 0x0
lbl_fn_8055F328_00000400:
    cmpwi r0, 0x0
    beq lbl_fn_8055F328_00000410
    li r4, 0x0
    bl fn_803B57B0
lbl_fn_8055F328_00000410:
    lwz r31, 0xc(r1)
    li r3, 0x0
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8055F46C(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_8055F474(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x40
    stfd f31, 0x50(r1)
    psq_st f31, 0x58(r1), 0, 0
    stfd f30, 0x40(r1)
    psq_st f30, 0x48(r1), 0, 0
    bl _savegpr_25
    cmpwi r5, 0x0
    mr r26, r4
    bne lbl_fn_8055F474_00000624
    lwz r3, lbl_8087F540
    lwz r0, 0x238c(r3)
    cmpwi r0, 0x0
    bgt lbl_fn_8055F474_00000624
    mr r3, r26
    bl fn_805381A4
    mr r3, r26
    bl fn_805381CC
    lwz r0, 0x30(r26)
    mr r27, r3
    cmpwi r0, 0x0
    ble lbl_fn_8055F474_0000049C
    lwz r4, 0x2c(r26)
    b lbl_fn_8055F474_000004A0
lbl_fn_8055F474_0000049C:
    li r4, 0x0
lbl_fn_8055F474_000004A0:
    cmpwi r0, 0x1
    lwz r31, 0x4(r4)
    ble lbl_fn_8055F474_000004B8
    lwz r4, 0x2c(r26)
    addi r4, r4, 0x8
    b lbl_fn_8055F474_000004BC
lbl_fn_8055F474_000004B8:
    li r4, 0x0
lbl_fn_8055F474_000004BC:
    cmpwi r0, 0x4
    lwz r4, 0x4(r4)
    ble lbl_fn_8055F474_000004D4
    lwz r5, 0x2c(r26)
    addi r5, r5, 0x20
    b lbl_fn_8055F474_000004D8
lbl_fn_8055F474_000004D4:
    li r5, 0x0
lbl_fn_8055F474_000004D8:
    cmpwi r0, 0x5
    lwz r30, 0x4(r5)
    ble lbl_fn_8055F474_000004F0
    lwz r5, 0x2c(r26)
    addi r5, r5, 0x28
    b lbl_fn_8055F474_000004F4
lbl_fn_8055F474_000004F0:
    li r5, 0x0
lbl_fn_8055F474_000004F4:
    cmpwi r0, 0x6
    lwz r29, 0x4(r5)
    ble lbl_fn_8055F474_0000050C
    lwz r5, 0x2c(r26)
    addi r5, r5, 0x30
    b lbl_fn_8055F474_00000510
lbl_fn_8055F474_0000050C:
    li r5, 0x0
lbl_fn_8055F474_00000510:
    cmpwi r0, 0x7
    lwz r28, 0x4(r5)
    ble lbl_fn_8055F474_00000528
    lwz r5, 0x2c(r26)
    addi r5, r5, 0x38
    b lbl_fn_8055F474_0000052C
lbl_fn_8055F474_00000528:
    li r5, 0x0
lbl_fn_8055F474_0000052C:
    lfs f31, lbl_80887ED0
    cmplwi r30, 0x2
    lwz r25, 0x4(r5)
    fmr f30, f31
    bgt lbl_fn_8055F474_00000558
    lis r6, lbl_807C8AB0@ha
    slwi r0, r30, 3
    addi r6, r6, lbl_807C8AB0@l
    add r5, r6, r0
    lfsx f31, r6, r0
    lfs f30, 0x4(r5)
lbl_fn_8055F474_00000558:
    addi r3, r3, 0x1d4
    bl fn_803B3B38
    cmpwi r30, 0x0
    mr r5, r3
    bne lbl_fn_8055F474_000005B4
    cmpwi r29, 0x0
    bne lbl_fn_8055F474_000005B4
    lwz r0, 0x50(r27)
    cmpwi r0, 0x3
    bne lbl_fn_8055F474_000005B4
    lwz r3, lbl_8087F490
    cmpwi r3, 0x0
    beq lbl_fn_8055F474_000005B4
    lwz r0, 0x2640(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8055F474_000005B4
    lwz r6, 0x10(r26)
    mr r4, r5
    lwz r0, 0x14(r26)
    lfs f1, lbl_80887EB8
    subf r5, r6, r0
    bl fn_803E3BE8
    b lbl_fn_8055F474_00000624
lbl_fn_8055F474_000005B4:
    cmpwi r25, 0x0
    li r9, 0x1
    beq lbl_fn_8055F474_000005C4
    oris r9, r9, 0x100
lbl_fn_8055F474_000005C4:
    lwz r7, 0x10(r26)
    lis r6, 0x4330
    lwz r0, 0x14(r26)
    lis r4, lbl_8075F060@ha
    xoris r3, r7, 0x8000
    stw r3, 0xc(r1)
    subf r0, r7, r0
    lfd f2, lbl_8075F060@l(r4)
    stw r6, 0x8(r1)
    xoris r0, r0, 0x8000
    fmr f3, f31
    mr r3, r27
    lfd f0, 0x8(r1)
    fmr f4, f30
    stw r6, 0x10(r1)
    mr r4, r31
    stw r0, 0x14(r1)
    fsubs f1, f0, f2
    mr r6, r30
    mr r7, r29
    lfd f0, 0x10(r1)
    mr r8, r28
    fsubs f2, f0, f2
    bl fn_8054154C
lbl_fn_8055F474_00000624:
    psq_l f31, 0x58(r1), 0, 0
    li r3, 0x0
    lfd f31, 0x50(r1)
    psq_l f30, 0x48(r1), 0, 0
    lfd f30, 0x40(r1)
    addi r11, r1, 0x40
    bl _restgpr_25
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_8055F690(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    addi r11, r1, 0x70
    stfd f31, 0x90(r1)
    psq_st f31, 0x98(r1), 0, 0
    stfd f30, 0x80(r1)
    psq_st f30, 0x88(r1), 0, 0
    stfd f29, 0x70(r1)
    psq_st f29, 0x78(r1), 0, 0
    bl _savegpr_25
    cmpwi r5, 0x0
    mr r26, r4
    beq lbl_fn_8055F690_0000069C
    cmpwi r5, 0x2
    beq lbl_fn_8055F690_00000BC8
    cmpwi r5, 0x6
    beq lbl_fn_8055F690_00000C50
    b lbl_fn_8055F690_00000CC8
lbl_fn_8055F690_0000069C:
    lwz r3, lbl_8087F540
    li r27, 0x0
    lwz r0, 0xc4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8055F690_00000BC0
    mr r3, r26
    bl fn_805381A4
    mr r3, r26
    bl fn_805381CC
    lwz r6, 0x30(r26)
    cmpwi r6, 0x0
    ble lbl_fn_8055F690_000006D4
    lwz r4, 0x2c(r26)
    b lbl_fn_8055F690_000006D8
lbl_fn_8055F690_000006D4:
    mr r4, r27
lbl_fn_8055F690_000006D8:
    lwz r0, 0x118(r3)
    lwz r5, 0x4(r4)
    li r4, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8055F690_00000710
lbl_fn_8055F690_000006F0:
    lwz r0, 0x114(r3)
    add r31, r0, r4
    lwz r0, 0x14(r31)
    cmpw r5, r0
    bne lbl_fn_8055F690_00000708
    b lbl_fn_8055F690_00000714
lbl_fn_8055F690_00000708:
    addi r4, r4, 0x18
    bdnz lbl_fn_8055F690_000006F0
lbl_fn_8055F690_00000710:
    li r31, 0x0
lbl_fn_8055F690_00000714:
    cmpwi r6, 0x1
    ble lbl_fn_8055F690_00000728
    lwz r3, 0x2c(r26)
    addi r3, r3, 0x8
    b lbl_fn_8055F690_0000072C
lbl_fn_8055F690_00000728:
    li r3, 0x0
lbl_fn_8055F690_0000072C:
    lwz r30, 0x4(r3)
    mr r4, r26
    addi r3, r1, 0x38
    li r5, 0x2
    bl fn_805384D0
    lwz r0, 0x30(r26)
    cmpwi r0, 0x7
    ble lbl_fn_8055F690_00000758
    lwz r3, 0x2c(r26)
    addi r3, r3, 0x38
    b lbl_fn_8055F690_0000075C
lbl_fn_8055F690_00000758:
    li r3, 0x0
lbl_fn_8055F690_0000075C:
    cmpwi r0, 0x8
    lfs f31, 0x4(r3)
    ble lbl_fn_8055F690_00000774
    lwz r3, 0x2c(r26)
    addi r3, r3, 0x40
    b lbl_fn_8055F690_00000778
lbl_fn_8055F690_00000774:
    li r3, 0x0
lbl_fn_8055F690_00000778:
    cmpwi r0, 0x9
    lfs f30, 0x4(r3)
    ble lbl_fn_8055F690_00000790
    lwz r3, 0x2c(r26)
    addi r3, r3, 0x48
    b lbl_fn_8055F690_00000794
lbl_fn_8055F690_00000790:
    li r3, 0x0
lbl_fn_8055F690_00000794:
    cmpwi r0, 0xa
    lfs f29, 0x4(r3)
    ble lbl_fn_8055F690_000007AC
    lwz r3, 0x2c(r26)
    addi r3, r3, 0x50
    b lbl_fn_8055F690_000007B0
lbl_fn_8055F690_000007AC:
    li r3, 0x0
lbl_fn_8055F690_000007B0:
    cmpwi r0, 0xb
    lwz r29, 0x4(r3)
    ble lbl_fn_8055F690_000007C8
    lwz r3, 0x2c(r26)
    addi r3, r3, 0x58
    b lbl_fn_8055F690_000007CC
lbl_fn_8055F690_000007C8:
    li r3, 0x0
lbl_fn_8055F690_000007CC:
    cmpwi r31, 0x0
    lwz r28, 0x4(r3)
    beq lbl_fn_8055F690_00000BC0
    lis r3, lbl_8075FAF8@ha
    addi r3, r3, lbl_8075FAF8@l
    addi r25, r3, 0x19
    mr r3, r25
    bl strlen
    stw r3, 0x20(r1)
    mr r27, r3
    lwz r0, 0x8(r31)
    srwi. r0, r0, 31
    bne lbl_fn_8055F690_0000080C
    lbz r0, 0x8(r31)
    clrlwi r4, r0, 25
    b lbl_fn_8055F690_00000810
lbl_fn_8055F690_0000080C:
    lwz r4, 0xc(r31)
lbl_fn_8055F690_00000810:
    stw r4, 0x24(r1)
    lwz r0, 0x8(r31)
    srwi. r0, r0, 31
    bne lbl_fn_8055F690_00000830
    lbz r0, 0x8(r31)
    addi r3, r31, 0x9
    clrlwi r0, r0, 25
    b lbl_fn_8055F690_00000838
lbl_fn_8055F690_00000830:
    lwz r3, 0x10(r31)
    lwz r0, 0xc(r31)
lbl_fn_8055F690_00000838:
    cmplw r4, r0
    stw r0, 0x1c(r1)
    addi r4, r1, 0x1c
    bge lbl_fn_8055F690_0000084C
    addi r4, r1, 0x24
lbl_fn_8055F690_0000084C:
    lwz r0, 0x0(r4)
    mr r4, r25
    stw r0, 0x18(r1)
    addi r5, r1, 0x18
    cmplw r27, r0
    bge lbl_fn_8055F690_00000868
    addi r5, r1, 0x20
lbl_fn_8055F690_00000868:
    lwz r5, 0x0(r5)
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_8055F690_0000089C
    lwz r0, 0x18(r1)
    cmplw r0, r27
    bge lbl_fn_8055F690_0000088C
    li r3, -0x1
    b lbl_fn_8055F690_0000089C
lbl_fn_8055F690_0000088C:
    bne lbl_fn_8055F690_00000898
    li r3, 0x0
    b lbl_fn_8055F690_0000089C
lbl_fn_8055F690_00000898:
    li r3, 0x1
lbl_fn_8055F690_0000089C:
    cmpwi r3, 0x0
    bne lbl_fn_8055F690_000008D8
    lwz r3, lbl_8087F9F0
    cmpwi r3, 0x0
    beq lbl_fn_8055F690_000008D0
    lwz r0, 0x18(r26)
    li r4, 0x1
    stw r0, 0xf4(r3)
    lwz r3, lbl_8087F9F0
    bl fn_805A2FD8
    lwz r3, lbl_8087F9F0
    li r0, 0x0
    stw r0, 0xf4(r3)
lbl_fn_8055F690_000008D0:
    li r27, 0x0
    b lbl_fn_8055F690_00000BC0
lbl_fn_8055F690_000008D8:
    lis r3, lbl_8075FAF8@ha
    addi r3, r3, lbl_8075FAF8@l
    addi r25, r3, 0x23
    mr r3, r25
    bl strlen
    stw r3, 0x10(r1)
    mr r27, r3
    lwz r0, 0x8(r31)
    srwi. r0, r0, 31
    bne lbl_fn_8055F690_0000090C
    lbz r0, 0x8(r31)
    clrlwi r4, r0, 25
    b lbl_fn_8055F690_00000910
lbl_fn_8055F690_0000090C:
    lwz r4, 0xc(r31)
lbl_fn_8055F690_00000910:
    stw r4, 0x14(r1)
    lwz r0, 0x8(r31)
    srwi. r0, r0, 31
    bne lbl_fn_8055F690_00000930
    lbz r0, 0x8(r31)
    addi r3, r31, 0x9
    clrlwi r0, r0, 25
    b lbl_fn_8055F690_00000938
lbl_fn_8055F690_00000930:
    lwz r3, 0x10(r31)
    lwz r0, 0xc(r31)
lbl_fn_8055F690_00000938:
    cmplw r4, r0
    stw r0, 0xc(r1)
    addi r4, r1, 0xc
    bge lbl_fn_8055F690_0000094C
    addi r4, r1, 0x14
lbl_fn_8055F690_0000094C:
    lwz r0, 0x0(r4)
    mr r4, r25
    stw r0, 0x8(r1)
    addi r5, r1, 0x8
    cmplw r27, r0
    bge lbl_fn_8055F690_00000968
    addi r5, r1, 0x10
lbl_fn_8055F690_00000968:
    lwz r5, 0x0(r5)
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_8055F690_0000099C
    lwz r0, 0x8(r1)
    cmplw r0, r27
    bge lbl_fn_8055F690_0000098C
    li r3, -0x1
    b lbl_fn_8055F690_0000099C
lbl_fn_8055F690_0000098C:
    bne lbl_fn_8055F690_00000998
    li r3, 0x0
    b lbl_fn_8055F690_0000099C
lbl_fn_8055F690_00000998:
    li r3, 0x1
lbl_fn_8055F690_0000099C:
    cmpwi r3, 0x0
    bne lbl_fn_8055F690_000009D8
    lwz r3, lbl_8087F9F0
    cmpwi r3, 0x0
    beq lbl_fn_8055F690_000009D0
    lwz r0, 0x1c(r26)
    li r4, 0x0
    stw r0, 0xf4(r3)
    lwz r3, lbl_8087F9F0
    bl fn_805A2FD8
    lwz r3, lbl_8087F9F0
    li r0, 0x0
    stw r0, 0xf4(r3)
lbl_fn_8055F690_000009D0:
    li r27, 0x0
    b lbl_fn_8055F690_00000BC0
lbl_fn_8055F690_000009D8:
    lwz r3, lbl_8087EE90
    cmpwi r3, 0x0
    beq lbl_fn_8055F690_00000A08
    lwz r0, 0x8(r31)
    srwi. r0, r0, 31
    bne lbl_fn_8055F690_000009F8
    addi r4, r31, 0x9
    b lbl_fn_8055F690_000009FC
lbl_fn_8055F690_000009F8:
    lwz r4, 0x10(r31)
lbl_fn_8055F690_000009FC:
    bl fn_80049B74
    mr r25, r3
    b lbl_fn_8055F690_00000A0C
lbl_fn_8055F690_00000A08:
    li r25, 0x0
lbl_fn_8055F690_00000A0C:
    cmpwi r25, 0x0
    beq lbl_fn_8055F690_00000A54
    lis r27, lbl_8075FAF8@ha
    lwz r3, lbl_8087EE90
    addi r27, r27, lbl_8075FAF8@l
    addi r4, r27, 0x2d
    bl fn_80049B74
    cmplw r25, r3
    beq lbl_fn_8055F690_00000A44
    lwz r3, lbl_8087EE90
    addi r4, r27, 0x3b
    bl fn_80049B74
    cmplw r25, r3
    bne lbl_fn_8055F690_00000A54
lbl_fn_8055F690_00000A44:
    lwz r3, lbl_8087EFE8
    li r0, 0x5
    stw r0, 0x34d0(r3)
    b lbl_fn_8055F690_00000A60
lbl_fn_8055F690_00000A54:
    lwz r3, lbl_8087EFE8
    li r0, 0x3
    stw r0, 0x34d0(r3)
lbl_fn_8055F690_00000A60:
    addi r3, r1, 0x34
    bl fn_800CB360
    lwz r0, 0x8(r31)
    srwi. r0, r0, 31
    bne lbl_fn_8055F690_00000A7C
    addi r3, r31, 0x9
    b lbl_fn_8055F690_00000A80
lbl_fn_8055F690_00000A7C:
    lwz r3, 0x10(r31)
lbl_fn_8055F690_00000A80:
    li r4, 0x3
    li r5, 0x0
    bl fn_805A38F4
    cmpwi r3, 0x0
    beq lbl_fn_8055F690_00000B40
    cmpwi r30, 0x0
    beq lbl_fn_8055F690_00000AFC
    lwz r0, 0x8(r31)
    addi r3, r1, 0x2c
    srwi. r0, r0, 31
    bne lbl_fn_8055F690_00000AB4
    addi r4, r31, 0x9
    b lbl_fn_8055F690_00000AB8
lbl_fn_8055F690_00000AB4:
    lwz r4, 0x10(r31)
lbl_fn_8055F690_00000AB8:
    fmr f1, f31
    addi r5, r1, 0x38
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x34
    addi r4, r1, 0x2c
    bl fn_800CB440
    addi r3, r1, 0x2c
    li r4, -0x1
    bl fn_800CB3A0
    lfs f2, lbl_80887EB8
    fmr f1, f30
    addi r3, r1, 0x34
    fmr f3, f2
    bl fn_800CB654
    b lbl_fn_8055F690_00000B40
lbl_fn_8055F690_00000AFC:
    lwz r0, 0x8(r31)
    addi r3, r1, 0x28
    srwi. r0, r0, 31
    bne lbl_fn_8055F690_00000B14
    addi r4, r31, 0x9
    b lbl_fn_8055F690_00000B18
lbl_fn_8055F690_00000B14:
    lwz r4, 0x10(r31)
lbl_fn_8055F690_00000B18:
    fmr f1, f31
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x34
    addi r4, r1, 0x28
    bl fn_800CB440
    addi r3, r1, 0x28
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_8055F690_00000B40:
    lwz r3, lbl_8087EFE8
    li r0, 0x0
    stw r0, 0x34d0(r3)
    lwz r4, 0x18(r26)
    cmpwi r4, 0x0
    ble lbl_fn_8055F690_00000B60
    addi r3, r1, 0x34
    bl fn_800CB518
lbl_fn_8055F690_00000B60:
    cmpwi r28, 0x0
    beq lbl_fn_8055F690_00000B74
    addi r3, r1, 0x34
    li r4, 0x2
    bl fn_800CB668
lbl_fn_8055F690_00000B74:
    fmr f1, f29
    addi r3, r1, 0x34
    li r4, 0x0
    bl fn_800CB688
    cmpwi r29, 0x0
    beq lbl_fn_8055F690_00000B94
    li r27, 0x0
    b lbl_fn_8055F690_00000BB4
lbl_fn_8055F690_00000B94:
    lwz r27, 0x34(r1)
    cmpwi r27, 0x0
    beq lbl_fn_8055F690_00000BB0
    lwz r3, 0xa4(r27)
    addi r0, r3, 0x1
    stw r0, 0xa4(r27)
    b lbl_fn_8055F690_00000BB4
lbl_fn_8055F690_00000BB0:
    li r27, 0x0
lbl_fn_8055F690_00000BB4:
    addi r3, r1, 0x34
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_8055F690_00000BC0:
    stw r27, 0x38(r26)
    b lbl_fn_8055F690_00000CC8
lbl_fn_8055F690_00000BC8:
    lwz r0, 0x30(r4)
    cmpwi r0, 0xa
    ble lbl_fn_8055F690_00000BE0
    lwz r3, 0x2c(r4)
    addi r3, r3, 0x50
    b lbl_fn_8055F690_00000BE4
lbl_fn_8055F690_00000BE0:
    li r3, 0x0
lbl_fn_8055F690_00000BE4:
    lwz r0, 0x4(r3)
    li r3, 0x0
    cmpwi r0, 0x0
    bne lbl_fn_8055F690_00000C04
    lwz r0, 0x38(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8055F690_00000C04
    li r3, 0x1
lbl_fn_8055F690_00000C04:
    cmpwi r3, 0x0
    beq lbl_fn_8055F690_00000CC8
    addi r3, r1, 0x30
    bl fn_800CB360
    lwz r4, 0x38(r26)
    addi r3, r1, 0x30
    bl fn_800CB404
    lwz r6, 0x30(r1)
    addi r3, r1, 0x30
    li r5, 0x0
    lwz r4, 0xa4(r6)
    subi r0, r4, 0x1
    stw r0, 0xa4(r6)
    lwz r4, 0x1c(r26)
    bl fn_800CB5C8
    addi r3, r1, 0x30
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_8055F690_00000CC8
lbl_fn_8055F690_00000C50:
    mr r3, r26
    bl fn_805381CC
    lwz r0, 0x30(r26)
    cmpwi r0, 0x2
    ble lbl_fn_8055F690_00000C70
    lwz r4, 0x2c(r26)
    addi r4, r4, 0x10
    b lbl_fn_8055F690_00000C74
lbl_fn_8055F690_00000C70:
    li r4, 0x0
lbl_fn_8055F690_00000C74:
    lwz r0, 0x168(r3)
    lwz r6, 0x4(r4)
    li r4, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8055F690_00000CAC
lbl_fn_8055F690_00000C8C:
    lwz r0, 0x164(r3)
    add r5, r0, r4
    lwz r0, 0x14(r5)
    cmpw r6, r0
    bne lbl_fn_8055F690_00000CA4
    b lbl_fn_8055F690_00000CB0
lbl_fn_8055F690_00000CA4:
    addi r4, r4, 0x1c0
    bdnz lbl_fn_8055F690_00000C8C
lbl_fn_8055F690_00000CAC:
    li r5, 0x0
lbl_fn_8055F690_00000CB0:
    lwz r0, 0x20(r5)
    cmpwi r0, 0x6
    bne lbl_fn_8055F690_00000CC8
    mr r3, r26
    li r4, 0x4
    bl fn_80538DC8
lbl_fn_8055F690_00000CC8:
    psq_l f31, 0x98(r1), 0, 0
    li r3, 0x0
    lfd f31, 0x90(r1)
    psq_l f30, 0x88(r1), 0, 0
    lfd f30, 0x80(r1)
    psq_l f29, 0x78(r1), 0, 0
    lfd f29, 0x70(r1)
    addi r11, r1, 0x70
    bl _restgpr_25
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_8055FD3C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    stw r31, 0x1c(r1)
    mr r31, r4
    lwz r0, 0x38(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8055FD3C_00000DAC
    addi r3, r1, 0x8
    bl fn_800CB360
    lwz r4, 0x38(r31)
    addi r3, r1, 0x8
    bl fn_800CB404
    lwz r5, 0x8(r1)
    mr r3, r31
    lwz r4, 0xa4(r5)
    subi r0, r4, 0x1
    stw r0, 0xa4(r5)
    bl fn_805381CC
    lfs f0, 0x198(r3)
    lwz r0, 0x30(r31)
    fctiwz f0, f0
    cmpwi r0, 0x7
    stfd f0, 0x10(r1)
    lwz r4, 0x14(r1)
    ble lbl_fn_8055FD3C_00000D78
    lwz r3, 0x2c(r31)
    addi r3, r3, 0x38
    b lbl_fn_8055FD3C_00000D7C
lbl_fn_8055FD3C_00000D78:
    li r3, 0x0
lbl_fn_8055FD3C_00000D7C:
    lfs f31, 0x4(r3)
    mr r3, r31
    bl fn_805393A8
    mr r3, r31
    bl fn_8053A2EC
    fmuls f1, f31, f1
    addi r3, r1, 0x8
    li r4, 0x0
    bl fn_800CB5B4
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_8055FD3C_00000DAC:
    psq_l f31, 0x28(r1), 0, 0
    li r3, 0x0
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8055FE0C(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    stfd f30, 0x20(r1)
    psq_st f30, 0x28(r1), 0, 0
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    bne lbl_fn_8055FE0C_000010DC
    mr r3, r30
    bl fn_805381CC
    lwz r7, 0x30(r30)
    cmpwi r7, 0x0
    ble lbl_fn_8055FE0C_00000E1C
    lwz r4, 0x2c(r30)
    b lbl_fn_8055FE0C_00000E20
lbl_fn_8055FE0C_00000E1C:
    li r4, 0x0
lbl_fn_8055FE0C_00000E20:
    lwz r0, 0x4(r4)
    cmpwi r0, 0x0
    bne lbl_fn_8055FE0C_00000FC0
    lwz r4, lbl_8087F540
    lwz r0, 0xc4(r4)
    cmpwi r0, 0x0
    bne lbl_fn_8055FE0C_000010DC
    cmpwi r7, 0x1
    ble lbl_fn_8055FE0C_00000E50
    lwz r4, 0x2c(r30)
    addi r4, r4, 0x8
    b lbl_fn_8055FE0C_00000E54
lbl_fn_8055FE0C_00000E50:
    li r4, 0x0
lbl_fn_8055FE0C_00000E54:
    cmpwi r7, 0x2
    lwz r5, 0x4(r4)
    ble lbl_fn_8055FE0C_00000E6C
    lwz r4, 0x2c(r30)
    addi r4, r4, 0x10
    b lbl_fn_8055FE0C_00000E70
lbl_fn_8055FE0C_00000E6C:
    li r4, 0x0
lbl_fn_8055FE0C_00000E70:
    lwz r0, 0x118(r3)
    lwz r6, 0x4(r4)
    li r4, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8055FE0C_00000EA8
lbl_fn_8055FE0C_00000E88:
    lwz r0, 0x114(r3)
    add r31, r0, r4
    lwz r0, 0x14(r31)
    cmpw r6, r0
    bne lbl_fn_8055FE0C_00000EA0
    b lbl_fn_8055FE0C_00000EAC
lbl_fn_8055FE0C_00000EA0:
    addi r4, r4, 0x18
    bdnz lbl_fn_8055FE0C_00000E88
lbl_fn_8055FE0C_00000EA8:
    li r31, 0x0
lbl_fn_8055FE0C_00000EAC:
    cmpwi r7, 0x3
    ble lbl_fn_8055FE0C_00000EC0
    lwz r4, 0x2c(r30)
    addi r4, r4, 0x18
    b lbl_fn_8055FE0C_00000EC4
lbl_fn_8055FE0C_00000EC0:
    li r4, 0x0
lbl_fn_8055FE0C_00000EC4:
    cmpwi r7, 0x4
    lfs f31, 0x4(r4)
    cmpwi r7, 0x5
    ble lbl_fn_8055FE0C_00000EE0
    lwz r4, 0x2c(r30)
    addi r4, r4, 0x28
    b lbl_fn_8055FE0C_00000EE4
lbl_fn_8055FE0C_00000EE0:
    li r4, 0x0
lbl_fn_8055FE0C_00000EE4:
    cmplwi r5, 0x3
    lfs f30, 0x4(r4)
    bgt lbl_fn_8055FE0C_00000F00
    slwi r0, r5, 2
    add r3, r3, r0
    addi r29, r3, 0x174
    b lbl_fn_8055FE0C_00000F04
lbl_fn_8055FE0C_00000F00:
    li r29, 0x0
lbl_fn_8055FE0C_00000F04:
    cmpwi r31, 0x0
    beq lbl_fn_8055FE0C_000010DC
    cmpwi r29, 0x0
    beq lbl_fn_8055FE0C_000010DC
    mr r3, r29
    li r4, 0x0
    li r5, 0x0
    bl fn_800CB5C8
    lwz r4, lbl_8087EFE8
    li r5, 0x3
    li r0, 0x0
    addi r3, r1, 0x8
    stw r5, 0x34d0(r4)
    lwz r4, lbl_8087EFE8
    stw r0, 0x34c8(r4)
    lwz r0, 0x8(r31)
    srwi. r0, r0, 31
    bne lbl_fn_8055FE0C_00000F54
    addi r4, r31, 0x9
    b lbl_fn_8055FE0C_00000F58
lbl_fn_8055FE0C_00000F54:
    lwz r4, 0x10(r31)
lbl_fn_8055FE0C_00000F58:
    fmr f1, f31
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    mr r3, r29
    addi r4, r1, 0x8
    bl fn_800CB440
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    lwz r3, lbl_8087EFE8
    li r4, 0x1
    li r0, 0x0
    stw r4, 0x34c8(r3)
    lwz r3, lbl_8087EFE8
    stw r0, 0x34d0(r3)
    lwz r4, 0x18(r30)
    cmpwi r4, 0x0
    ble lbl_fn_8055FE0C_00000FAC
    mr r3, r29
    bl fn_800CB518
lbl_fn_8055FE0C_00000FAC:
    fmr f1, f30
    mr r3, r29
    li r4, 0x0
    bl fn_800CB688
    b lbl_fn_8055FE0C_000010DC
lbl_fn_8055FE0C_00000FC0:
    cmpwi r0, 0x1
    bne lbl_fn_8055FE0C_00001018
    cmpwi r7, 0x1
    ble lbl_fn_8055FE0C_00000FDC
    lwz r4, 0x2c(r30)
    addi r4, r4, 0x8
    b lbl_fn_8055FE0C_00000FE0
lbl_fn_8055FE0C_00000FDC:
    li r4, 0x0
lbl_fn_8055FE0C_00000FE0:
    lwz r0, 0x4(r4)
    cmplwi r0, 0x3
    bgt lbl_fn_8055FE0C_00000FFC
    slwi r0, r0, 2
    add r3, r3, r0
    addi r3, r3, 0x174
    b lbl_fn_8055FE0C_00001000
lbl_fn_8055FE0C_00000FFC:
    li r3, 0x0
lbl_fn_8055FE0C_00001000:
    cmpwi r3, 0x0
    beq lbl_fn_8055FE0C_000010DC
    lwz r4, 0x1c(r30)
    li r5, 0x0
    bl fn_800CB5C8
    b lbl_fn_8055FE0C_000010DC
lbl_fn_8055FE0C_00001018:
    cmpwi r0, 0x2
    bne lbl_fn_8055FE0C_00001060
    cmpwi r7, 0x1
    ble lbl_fn_8055FE0C_00001034
    lwz r3, 0x2c(r30)
    addi r4, r3, 0x8
    b lbl_fn_8055FE0C_00001038
lbl_fn_8055FE0C_00001034:
    li r4, 0x0
lbl_fn_8055FE0C_00001038:
    lwz r3, lbl_8087F418
    lwz r4, 0x4(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8055FE0C_000010DC
    lwz r6, 0x18(r30)
    li r5, 0x4
    lwz r0, 0x1c(r30)
    add r6, r6, r0
    bl fn_80360780
    b lbl_fn_8055FE0C_000010DC
lbl_fn_8055FE0C_00001060:
    cmpwi r0, 0x3
    bne lbl_fn_8055FE0C_000010A8
    cmpwi r7, 0x1
    ble lbl_fn_8055FE0C_0000107C
    lwz r3, 0x2c(r30)
    addi r4, r3, 0x8
    b lbl_fn_8055FE0C_00001080
lbl_fn_8055FE0C_0000107C:
    li r4, 0x0
lbl_fn_8055FE0C_00001080:
    lwz r3, lbl_8087F418
    lwz r4, 0x4(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8055FE0C_000010DC
    lwz r6, 0x18(r30)
    li r5, 0x4
    lwz r0, 0x1c(r30)
    add r6, r6, r0
    bl fn_803606CC
    b lbl_fn_8055FE0C_000010DC
lbl_fn_8055FE0C_000010A8:
    cmpwi r0, 0x4
    bne lbl_fn_8055FE0C_000010DC
    cmpwi r7, 0x1
    ble lbl_fn_8055FE0C_000010C4
    lwz r3, 0x2c(r30)
    addi r3, r3, 0x8
    b lbl_fn_8055FE0C_000010C8
lbl_fn_8055FE0C_000010C4:
    li r3, 0x0
lbl_fn_8055FE0C_000010C8:
    lwz r4, lbl_8087F0A0
    lwz r0, 0x4(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8055FE0C_000010DC
    stw r0, 0x48(r4)
lbl_fn_8055FE0C_000010DC:
    psq_l f31, 0x38(r1), 0, 0
    li r3, 0x0
    lfd f31, 0x30(r1)
    psq_l f30, 0x28(r1), 0, 0
    lfd f30, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8056014C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r5, 0x5
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    beq lbl_fn_8056014C_00001130
    cmpwi r5, 0x0
    bne lbl_fn_8056014C_000011E4
lbl_fn_8056014C_00001130:
    mr r3, r31
    bl fn_805381A4
    mr r3, r31
    bl fn_805381CC
    lwz r0, 0x30(r31)
    cmpwi r0, 0x0
    ble lbl_fn_8056014C_00001154
    lwz r4, 0x2c(r31)
    b lbl_fn_8056014C_00001158
lbl_fn_8056014C_00001154:
    li r4, 0x0
lbl_fn_8056014C_00001158:
    cmpwi r0, 0x1
    lwz r4, 0x4(r4)
    ble lbl_fn_8056014C_00001170
    lwz r5, 0x2c(r31)
    addi r5, r5, 0x8
    b lbl_fn_8056014C_00001174
lbl_fn_8056014C_00001170:
    li r5, 0x0
lbl_fn_8056014C_00001174:
    lwz r7, lbl_8087F448
    lfs f1, 0x4(r5)
    lwz r5, 0x18(r31)
    cmpwi r7, 0x0
    lwz r0, 0x1c(r31)
    add r5, r5, r0
    beq lbl_fn_8056014C_000011E4
    lwz r6, lbl_8087F540
    lwz r0, 0xc4(r6)
    cmpwi r0, 0x0
    beq lbl_fn_8056014C_000011D4
    lwz r0, 0x190(r3)
    cmpwi r0, 0x5e6
    bne lbl_fn_8056014C_000011BC
    srwi r0, r5, 31
    add r0, r0, r5
    srawi r5, r0, 1
    b lbl_fn_8056014C_000011D4
lbl_fn_8056014C_000011BC:
    lis r3, 0x5555
    slwi r0, r5, 1
    addi r3, r3, 0x5556
    mulhw r3, r3, r0
    srwi r0, r3, 31
    add r5, r3, r0
lbl_fn_8056014C_000011D4:
    mr r3, r7
    li r6, 0x1
    li r7, 0x0
    bl fn_8037D4C0
lbl_fn_8056014C_000011E4:
    lwz r31, 0xc(r1)
    li r3, 0x0
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8056023C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    bne lbl_fn_8056023C_00001258
    mr r3, r31
    bl fn_805381A4
    mr r3, r31
    bl fn_805381CC
    lwz r0, 0x30(r31)
    cmpwi r0, 0x0
    ble lbl_fn_8056023C_0000123C
    lwz r4, 0x2c(r31)
    b lbl_fn_8056023C_00001240
lbl_fn_8056023C_0000123C:
    li r4, 0x0
lbl_fn_8056023C_00001240:
    lwz r3, lbl_8087F418
    lwz r4, 0x4(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8056023C_00001258
    lfs f1, lbl_80887EB4
    bl fn_803601E4
lbl_fn_8056023C_00001258:
    lwz r31, 0xc(r1)
    li r3, 0x0
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805602B0(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x40
    stfd f31, 0x50(r1)
    psq_st f31, 0x58(r1), 0, 0
    stfd f30, 0x40(r1)
    psq_st f30, 0x48(r1), 0, 0
    bl _savegpr_26
    cmpwi r5, 0x0
    mr r28, r4
    beq lbl_fn_805602B0_000012B4
    cmpwi r5, 0x2
    beq lbl_fn_805602B0_0000162C
    cmpwi r5, 0x6
    beq lbl_fn_805602B0_000016B4
    b lbl_fn_805602B0_0000172C
lbl_fn_805602B0_000012B4:
    mr r3, r28
    bl fn_805381A4
    mr r3, r28
    bl fn_805381CC
    lwz r0, 0x30(r28)
    mr r31, r3
    cmpwi r0, 0x0
    ble lbl_fn_805602B0_000012DC
    lwz r4, 0x2c(r28)
    b lbl_fn_805602B0_000012E0
lbl_fn_805602B0_000012DC:
    li r4, 0x0
lbl_fn_805602B0_000012E0:
    lwz r0, 0x118(r3)
    lwz r5, 0x4(r4)
    li r4, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_805602B0_00001318
lbl_fn_805602B0_000012F8:
    lwz r0, 0x114(r3)
    add r29, r0, r4
    lwz r0, 0x14(r29)
    cmpw r5, r0
    bne lbl_fn_805602B0_00001310
    b lbl_fn_805602B0_0000131C
lbl_fn_805602B0_00001310:
    addi r4, r4, 0x18
    bdnz lbl_fn_805602B0_000012F8
lbl_fn_805602B0_00001318:
    li r29, 0x0
lbl_fn_805602B0_0000131C:
    cmpwi r29, 0x0
    beq lbl_fn_805602B0_0000172C
    lwz r0, 0x8(r29)
    srwi. r0, r0, 31
    bne lbl_fn_805602B0_0000133C
    lbz r0, 0x8(r29)
    clrlwi r0, r0, 25
    b lbl_fn_805602B0_00001340
lbl_fn_805602B0_0000133C:
    lwz r0, 0xc(r29)
lbl_fn_805602B0_00001340:
    cmpwi r0, 0x0
    beq lbl_fn_805602B0_0000172C
    lwz r3, lbl_8087EE90
    cmpwi r3, 0x0
    beq lbl_fn_805602B0_00001388
    lwz r0, 0x8(r29)
    srwi. r0, r0, 31
    bne lbl_fn_805602B0_00001368
    addi r4, r29, 0x9
    b lbl_fn_805602B0_0000136C
lbl_fn_805602B0_00001368:
    lwz r4, 0x10(r29)
lbl_fn_805602B0_0000136C:
    bl fn_80049B74
    subi r4, r3, 0x1
    subfic r3, r4, -0x1
    addi r0, r4, 0x1
    or r0, r3, r0
    srwi. r0, r0, 31
    beq lbl_fn_805602B0_0000172C
lbl_fn_805602B0_00001388:
    mr r4, r28
    addi r3, r1, 0x18
    li r5, 0x2
    bl fn_805384D0
    lwz r0, 0x30(r28)
    cmpwi r0, 0x7
    ble lbl_fn_805602B0_000013B0
    lwz r3, 0x2c(r28)
    addi r3, r3, 0x38
    b lbl_fn_805602B0_000013B4
lbl_fn_805602B0_000013B0:
    li r3, 0x0
lbl_fn_805602B0_000013B4:
    cmpwi r0, 0x8
    lfs f31, 0x4(r3)
    cmpwi r0, 0x9
    ble lbl_fn_805602B0_000013D0
    lwz r3, 0x2c(r28)
    addi r3, r3, 0x48
    b lbl_fn_805602B0_000013D4
lbl_fn_805602B0_000013D0:
    li r3, 0x0
lbl_fn_805602B0_000013D4:
    cmpwi r0, 0xa
    lfs f30, 0x4(r3)
    ble lbl_fn_805602B0_000013EC
    lwz r3, 0x2c(r28)
    addi r3, r3, 0x50
    b lbl_fn_805602B0_000013F0
lbl_fn_805602B0_000013EC:
    li r3, 0x0
lbl_fn_805602B0_000013F0:
    cmpwi r0, 0xb
    lwz r30, 0x4(r3)
    ble lbl_fn_805602B0_00001408
    lwz r3, 0x2c(r28)
    addi r3, r3, 0x58
    b lbl_fn_805602B0_0000140C
lbl_fn_805602B0_00001408:
    li r3, 0x0
lbl_fn_805602B0_0000140C:
    lwz r0, 0x8(r29)
    lwz r27, 0x4(r3)
    srwi. r0, r0, 31
    lwz r3, lbl_8087F498
    bne lbl_fn_805602B0_00001428
    addi r4, r29, 0x9
    b lbl_fn_805602B0_0000142C
lbl_fn_805602B0_00001428:
    lwz r4, 0x10(r29)
lbl_fn_805602B0_0000142C:
    bl fn_803EB2A4
    cmpwi r3, 0x0
    bne lbl_fn_805602B0_00001440
    lwz r3, lbl_8087F540
    bl fn_80489A2C
lbl_fn_805602B0_00001440:
    lwz r3, lbl_8087F0A8
    lwz r0, 0x174(r3)
    cmpwi r0, 0x3
    blt lbl_fn_805602B0_00001454
    lfs f31, lbl_80887EB8
lbl_fn_805602B0_00001454:
    addi r3, r1, 0x14
    bl fn_800CB360
    lwz r0, 0x30(r28)
    cmpwi r0, 0x2
    ble lbl_fn_805602B0_00001474
    lwz r3, 0x2c(r28)
    addi r3, r3, 0x10
    b lbl_fn_805602B0_00001478
lbl_fn_805602B0_00001474:
    li r3, 0x0
lbl_fn_805602B0_00001478:
    lwz r0, 0x168(r31)
    lwz r4, 0x4(r3)
    li r3, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_805602B0_000014B0
lbl_fn_805602B0_00001490:
    lwz r0, 0x164(r31)
    add r26, r0, r3
    lwz r0, 0x14(r26)
    cmpw r4, r0
    bne lbl_fn_805602B0_000014A8
    b lbl_fn_805602B0_000014B4
lbl_fn_805602B0_000014A8:
    addi r3, r3, 0x1c0
    bdnz lbl_fn_805602B0_00001490
lbl_fn_805602B0_000014B0:
    li r26, 0x0
lbl_fn_805602B0_000014B4:
    cmpwi r26, 0x0
    beq lbl_fn_805602B0_000014C8
    mr r3, r26
    bl fn_800128FC
    b lbl_fn_805602B0_000014CC
lbl_fn_805602B0_000014C8:
    li r3, 0x0
lbl_fn_805602B0_000014CC:
    lwz r0, 0x98(r31)
    extrwi r0, r0, 1, 8
    cmplwi r0, 0x1
    bne lbl_fn_805602B0_000014E8
    lwz r3, 0x280(r31)
    mr r4, r26
    bl fn_8022960C
lbl_fn_805602B0_000014E8:
    cmpwi r29, 0x0
    beq lbl_fn_805602B0_0000159C
    cmpwi r27, 0x0
    beq lbl_fn_805602B0_00001554
    cmpwi r3, 0x0
    beq lbl_fn_805602B0_00001554
    lwz r0, 0x8(r29)
    mr r5, r3
    lwz r4, lbl_8087F498
    addi r3, r1, 0xc
    srwi. r0, r0, 31
    bne lbl_fn_805602B0_00001520
    addi r6, r29, 0x9
    b lbl_fn_805602B0_00001524
lbl_fn_805602B0_00001520:
    lwz r6, 0x10(r29)
lbl_fn_805602B0_00001524:
    fmr f1, f31
    li r7, 0x0
    li r8, 0x1
    li r9, 0x0
    bl fn_803EA09C
    addi r3, r1, 0x14
    addi r4, r1, 0xc
    bl fn_800CB440
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_805602B0_0000159C
lbl_fn_805602B0_00001554:
    lwz r0, 0x8(r29)
    addi r3, r1, 0x8
    lwz r4, lbl_8087F498
    srwi. r0, r0, 31
    bne lbl_fn_805602B0_00001570
    addi r5, r29, 0x9
    b lbl_fn_805602B0_00001574
lbl_fn_805602B0_00001570:
    lwz r5, 0x10(r29)
lbl_fn_805602B0_00001574:
    fmr f1, f31
    li r6, 0x0
    li r7, 0x1
    bl fn_803E9608
    addi r3, r1, 0x14
    addi r4, r1, 0x8
    bl fn_800CB440
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_805602B0_0000159C:
    lwz r3, lbl_8087F540
    mr r4, r28
    li r5, 0x0
    bl fn_80489A50
    lwz r4, 0x18(r28)
    cmpwi r4, 0x0
    ble lbl_fn_805602B0_000015C0
    addi r3, r1, 0x14
    bl fn_800CB518
lbl_fn_805602B0_000015C0:
    fmr f1, f30
    addi r3, r1, 0x14
    li r4, 0x0
    bl fn_800CB688
    lwz r3, lbl_8087F540
    lwz r0, 0xc4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805602B0_000015F0
    lfs f1, lbl_80887EB8
    addi r3, r1, 0x14
    li r4, 0xa
    bl fn_800CB5B4
lbl_fn_805602B0_000015F0:
    cmpwi r30, 0x0
    li r0, 0x0
    bne lbl_fn_805602B0_00001618
    lwz r4, 0x14(r1)
    cmpwi r4, 0x0
    beq lbl_fn_805602B0_00001618
    lwz r3, 0xa4(r4)
    addi r0, r3, 0x1
    stw r0, 0xa4(r4)
    lwz r0, 0x14(r1)
lbl_fn_805602B0_00001618:
    stw r0, 0x38(r28)
    addi r3, r1, 0x14
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_805602B0_0000172C
lbl_fn_805602B0_0000162C:
    lwz r0, 0x30(r4)
    cmpwi r0, 0xa
    ble lbl_fn_805602B0_00001644
    lwz r3, 0x2c(r4)
    addi r3, r3, 0x50
    b lbl_fn_805602B0_00001648
lbl_fn_805602B0_00001644:
    li r3, 0x0
lbl_fn_805602B0_00001648:
    lwz r0, 0x4(r3)
    li r3, 0x0
    cmpwi r0, 0x0
    bne lbl_fn_805602B0_00001668
    lwz r0, 0x38(r4)
    cmpwi r0, 0x0
    beq lbl_fn_805602B0_00001668
    li r3, 0x1
lbl_fn_805602B0_00001668:
    cmpwi r3, 0x0
    beq lbl_fn_805602B0_0000172C
    addi r3, r1, 0x10
    bl fn_800CB360
    lwz r4, 0x38(r28)
    addi r3, r1, 0x10
    bl fn_800CB404
    lwz r6, 0x10(r1)
    addi r3, r1, 0x10
    li r5, 0x0
    lwz r4, 0xa4(r6)
    subi r0, r4, 0x1
    stw r0, 0xa4(r6)
    lwz r4, 0x1c(r28)
    bl fn_800CB5C8
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_805602B0_0000172C
lbl_fn_805602B0_000016B4:
    mr r3, r28
    bl fn_805381CC
    lwz r0, 0x30(r28)
    cmpwi r0, 0x2
    ble lbl_fn_805602B0_000016D4
    lwz r4, 0x2c(r28)
    addi r4, r4, 0x10
    b lbl_fn_805602B0_000016D8
lbl_fn_805602B0_000016D4:
    li r4, 0x0
lbl_fn_805602B0_000016D8:
    lwz r0, 0x168(r3)
    lwz r5, 0x4(r4)
    li r4, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_805602B0_00001710
lbl_fn_805602B0_000016F0:
    lwz r0, 0x164(r3)
    add r6, r0, r4
    lwz r0, 0x14(r6)
    cmpw r5, r0
    bne lbl_fn_805602B0_00001708
    b lbl_fn_805602B0_00001714
lbl_fn_805602B0_00001708:
    addi r4, r4, 0x1c0
    bdnz lbl_fn_805602B0_000016F0
lbl_fn_805602B0_00001710:
    li r6, 0x0
lbl_fn_805602B0_00001714:
    lwz r0, 0x20(r6)
    cmpwi r0, 0x6
    bne lbl_fn_805602B0_0000172C
    mr r3, r28
    li r4, 0x4
    bl fn_80538DC8
lbl_fn_805602B0_0000172C:
    psq_l f31, 0x58(r1), 0, 0
    li r3, 0x0
    lfd f31, 0x50(r1)
    psq_l f30, 0x48(r1), 0, 0
    lfd f30, 0x40(r1)
    addi r11, r1, 0x40
    bl _restgpr_26
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80560798(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    psq_st f31, 0x18(r1), 0, 0
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r4
    beq lbl_fn_80560798_0000178C
    cmpwi r5, 0x3
    beq lbl_fn_80560798_00001894
    b lbl_fn_80560798_000018C4
lbl_fn_80560798_0000178C:
    lwz r0, 0x30(r4)
    cmpwi r0, 0x0
    ble lbl_fn_80560798_000017A0
    lwz r3, 0x2c(r4)
    b lbl_fn_80560798_000017A4
lbl_fn_80560798_000017A0:
    li r3, 0x0
lbl_fn_80560798_000017A4:
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80560798_000018C4
    mr r3, r30
    bl fn_805381A4
    mr r3, r30
    bl fn_805381CC
    lwz r0, 0x30(r30)
    mr r4, r3
    cmpwi r0, 0x1
    ble lbl_fn_80560798_000017DC
    lwz r5, 0x2c(r30)
    addi r5, r5, 0x8
    b lbl_fn_80560798_000017E0
lbl_fn_80560798_000017DC:
    li r5, 0x0
lbl_fn_80560798_000017E0:
    cmpwi r0, 0x2
    lwz r6, 0x4(r5)
    ble lbl_fn_80560798_000017F8
    lwz r5, 0x2c(r30)
    addi r5, r5, 0x10
    b lbl_fn_80560798_000017FC
lbl_fn_80560798_000017F8:
    li r5, 0x0
lbl_fn_80560798_000017FC:
    lwz r0, 0x118(r3)
    lfs f31, 0x4(r5)
    li r5, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80560798_00001834
lbl_fn_80560798_00001814:
    lwz r0, 0x114(r3)
    add r31, r0, r5
    lwz r0, 0x14(r31)
    cmpw r6, r0
    bne lbl_fn_80560798_0000182C
    b lbl_fn_80560798_00001838
lbl_fn_80560798_0000182C:
    addi r5, r5, 0x18
    bdnz lbl_fn_80560798_00001814
lbl_fn_80560798_00001834:
    li r31, 0x0
lbl_fn_80560798_00001838:
    cmpwi r31, 0x0
    beq lbl_fn_80560798_000018C4
    lwz r3, lbl_8087F540
    mr r5, r30
    bl fn_80488050
    lwz r0, 0x18(r30)
    li r5, 0x3c
    cmpwi r0, 0x0
    ble lbl_fn_80560798_00001860
    mr r5, r0
lbl_fn_80560798_00001860:
    lwz r3, lbl_8087F540
    lwz r0, 0xc4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80560798_000018C4
    lwz r0, 0x8(r31)
    srwi. r0, r0, 31
    bne lbl_fn_80560798_00001884
    addi r4, r31, 0x9
    b lbl_fn_80560798_00001888
lbl_fn_80560798_00001884:
    lwz r4, 0x10(r31)
lbl_fn_80560798_00001888:
    fmr f1, f31
    bl fn_80488A74
    b lbl_fn_80560798_000018C4
lbl_fn_80560798_00001894:
    lwz r0, 0x30(r4)
    cmpwi r0, 0x0
    ble lbl_fn_80560798_000018A8
    lwz r3, 0x2c(r4)
    b lbl_fn_80560798_000018AC
lbl_fn_80560798_000018A8:
    li r3, 0x0
lbl_fn_80560798_000018AC:
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80560798_000018C4
    lwz r3, lbl_8087F540
    lwz r4, 0x1c(r4)
    bl fn_80488D80
lbl_fn_80560798_000018C4:
    psq_l f31, 0x18(r1), 0, 0
    li r3, 0x0
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80560928(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lwz r0, 0x30(r4)
    cmpwi r0, 0x0
    ble lbl_fn_80560928_0000190C
    lwz r3, 0x2c(r4)
    b lbl_fn_80560928_00001910
lbl_fn_80560928_0000190C:
    li r3, 0x0
lbl_fn_80560928_00001910:
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80560928_00001954
    lwz r3, lbl_8087F540
    li r31, 0x0
    lwz r0, 0x1f34(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80560928_00001944
    addi r3, r3, 0x1f20
    bl fn_8004B0E4
    cmpwi r3, 0x0
    beq lbl_fn_80560928_00001944
    li r31, 0x1
lbl_fn_80560928_00001944:
    cmpwi r31, 0x0
    beq lbl_fn_80560928_00001954
    li r3, 0x3
    b lbl_fn_80560928_00001958
lbl_fn_80560928_00001954:
    li r3, 0x0
lbl_fn_80560928_00001958:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805609AC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    subi r0, r5, 0x3
    cmplwi r0, 0x2
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    ble lbl_fn_805609AC_00001C4C
    cmpwi r5, 0x0
    beq lbl_fn_805609AC_000019A8
    cmpwi r5, 0x2
    beq lbl_fn_805609AC_00001BB0
    b lbl_fn_805609AC_00001D30
lbl_fn_805609AC_000019A8:
    mr r3, r30
    bl fn_805381CC
    lwz r0, 0x30(r30)
    mr r31, r3
    cmpwi r0, 0x0
    ble lbl_fn_805609AC_000019C8
    lwz r4, 0x2c(r30)
    b lbl_fn_805609AC_000019CC
lbl_fn_805609AC_000019C8:
    li r4, 0x0
lbl_fn_805609AC_000019CC:
    cmpwi r0, 0x2
    lwz r5, 0x4(r4)
    ble lbl_fn_805609AC_000019E4
    lwz r4, 0x2c(r30)
    addi r4, r4, 0x10
    b lbl_fn_805609AC_000019E8
lbl_fn_805609AC_000019E4:
    li r4, 0x0
lbl_fn_805609AC_000019E8:
    cmpwi r0, 0x3
    lwz r6, 0x4(r4)
    ble lbl_fn_805609AC_00001A00
    lwz r4, 0x2c(r30)
    addi r4, r4, 0x18
    b lbl_fn_805609AC_00001A04
lbl_fn_805609AC_00001A00:
    li r4, 0x0
lbl_fn_805609AC_00001A04:
    lwz r0, 0x148(r3)
    lfs f1, 0x4(r4)
    li r4, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_805609AC_00001A3C
lbl_fn_805609AC_00001A1C:
    lwz r0, 0x144(r3)
    add r7, r0, r4
    lwz r0, 0x14(r7)
    cmpw r5, r0
    bne lbl_fn_805609AC_00001A34
    b lbl_fn_805609AC_00001A40
lbl_fn_805609AC_00001A34:
    addi r4, r4, 0x1c
    bdnz lbl_fn_805609AC_00001A1C
lbl_fn_805609AC_00001A3C:
    li r7, 0x0
lbl_fn_805609AC_00001A40:
    cmpwi r7, 0x0
    beq lbl_fn_805609AC_00001A54
    lwz r3, 0x18(r7)
    lwz r29, 0x4c(r3)
    b lbl_fn_805609AC_00001A58
lbl_fn_805609AC_00001A54:
    li r29, 0x0
lbl_fn_805609AC_00001A58:
    cmpwi r29, 0x0
    beq lbl_fn_805609AC_00001B9C
    cmpwi r6, 0x0
    beq lbl_fn_805609AC_00001A74
    li r0, 0x1
    stw r0, 0xc(r29)
    b lbl_fn_805609AC_00001A7C
lbl_fn_805609AC_00001A74:
    li r0, 0x0
    stw r0, 0xc(r29)
lbl_fn_805609AC_00001A7C:
    lwz r12, 0x0(r29)
    mr r3, r29
    lwz r4, 0x18(r30)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lwz r3, lbl_8087F448
    li r30, 0x1
    cmpwi r3, 0x0
    beq lbl_fn_805609AC_00001B08
    lwz r0, 0x84(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805609AC_00001AB8
    lwz r0, 0xc4(r3)
    b lbl_fn_805609AC_00001ABC
lbl_fn_805609AC_00001AB8:
    lwz r0, 0x8c(r3)
lbl_fn_805609AC_00001ABC:
    cmpwi r0, 0x0
    ble lbl_fn_805609AC_00001B08
    lwz r3, 0x74(r3)
    cmpwi r3, 0x0
    beq lbl_fn_805609AC_00001B08
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805609AC_00001B08
    addi r3, r3, 0x8
    bl fn_800CB4A4
    cmpwi r3, 0x0
    bne lbl_fn_805609AC_00001B08
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_803CE160
    cmpwi r3, 0x0
    bne lbl_fn_805609AC_00001B08
    li r30, 0x0
lbl_fn_805609AC_00001B08:
    lwz r0, 0x190(r31)
    cmpwi r0, 0x151f
    bne lbl_fn_805609AC_00001B18
    li r30, 0x0
lbl_fn_805609AC_00001B18:
    li r0, 0x1
    stw r0, 0x8(r1)
    lis r0, 0x40
    lis r5, lbl_8075FAF8@ha
    stw r0, 0xc(r1)
    addi r5, r5, lbl_8075FAF8@l
    lfs f1, lbl_80887EB4
    mr r4, r31
    lwz r3, lbl_8087F540
    mr r7, r30
    addi r5, r5, 0x49
    li r6, 0xa
    li r8, 0x1
    li r9, 0x1
    li r10, 0x1
    bl fn_804881B8
    lwz r0, 0x190(r31)
    cmpwi r0, 0x5e6
    bne lbl_fn_805609AC_00001B9C
    lwz r3, lbl_8087F448
    cmpwi r3, 0x0
    beq lbl_fn_805609AC_00001B9C
    lwz r3, 0x74(r3)
    cmpwi r3, 0x0
    beq lbl_fn_805609AC_00001B84
    li r4, 0x0
    bl fn_8004B1EC
lbl_fn_805609AC_00001B84:
    lwz r3, lbl_8087F448
    lwz r3, 0x78(r3)
    cmpwi r3, 0x0
    beq lbl_fn_805609AC_00001B9C
    li r4, 0x0
    bl fn_8004B1EC
lbl_fn_805609AC_00001B9C:
    lwz r3, lbl_8087F540
    mr r4, r29
    li r5, 0xa
    bl fn_8048E9A4
    b lbl_fn_805609AC_00001D30
lbl_fn_805609AC_00001BB0:
    lwz r0, 0x1c(r4)
    cmpwi r0, 0x0
    ble lbl_fn_805609AC_00001D30
    mr r3, r30
    bl fn_805381CC
    lwz r0, 0x30(r30)
    cmpwi r0, 0x0
    ble lbl_fn_805609AC_00001BD8
    lwz r4, 0x2c(r30)
    b lbl_fn_805609AC_00001BDC
lbl_fn_805609AC_00001BD8:
    li r4, 0x0
lbl_fn_805609AC_00001BDC:
    lwz r0, 0x148(r3)
    lwz r5, 0x4(r4)
    li r4, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_805609AC_00001C14
lbl_fn_805609AC_00001BF4:
    lwz r0, 0x144(r3)
    add r6, r0, r4
    lwz r0, 0x14(r6)
    cmpw r5, r0
    bne lbl_fn_805609AC_00001C0C
    b lbl_fn_805609AC_00001C18
lbl_fn_805609AC_00001C0C:
    addi r4, r4, 0x1c
    bdnz lbl_fn_805609AC_00001BF4
lbl_fn_805609AC_00001C14:
    li r6, 0x0
lbl_fn_805609AC_00001C18:
    cmpwi r6, 0x0
    beq lbl_fn_805609AC_00001D30
    lwz r3, 0x18(r6)
    lwz r3, 0x4c(r3)
    cmpwi r3, 0x0
    beq lbl_fn_805609AC_00001D30
    lwz r12, 0x0(r3)
    lfs f1, lbl_80887EB8
    lwz r12, 0x3c(r12)
    lwz r4, 0x1c(r30)
    mtctr r12
    bctrl
    b lbl_fn_805609AC_00001D30
lbl_fn_805609AC_00001C4C:
    mr r3, r30
    bl fn_805381CC
    lwz r0, 0x30(r30)
    mr r29, r3
    cmpwi r0, 0x0
    ble lbl_fn_805609AC_00001C6C
    lwz r4, 0x2c(r30)
    b lbl_fn_805609AC_00001C70
lbl_fn_805609AC_00001C6C:
    li r4, 0x0
lbl_fn_805609AC_00001C70:
    lwz r0, 0x148(r3)
    lwz r5, 0x4(r4)
    li r4, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_805609AC_00001CA8
lbl_fn_805609AC_00001C88:
    lwz r0, 0x144(r3)
    add r6, r0, r4
    lwz r0, 0x14(r6)
    cmpw r5, r0
    bne lbl_fn_805609AC_00001CA0
    b lbl_fn_805609AC_00001CAC
lbl_fn_805609AC_00001CA0:
    addi r4, r4, 0x1c
    bdnz lbl_fn_805609AC_00001C88
lbl_fn_805609AC_00001CA8:
    li r6, 0x0
lbl_fn_805609AC_00001CAC:
    cmpwi r6, 0x0
    beq lbl_fn_805609AC_00001CD8
    lwz r3, 0x18(r6)
    lwz r3, 0x4c(r3)
    cmpwi r3, 0x0
    beq lbl_fn_805609AC_00001CD8
    lwz r0, 0x8(r3)
    cmpwi r0, 0x4
    bne lbl_fn_805609AC_00001CD8
    li r0, 0x1
    stw r0, 0x8(r3)
lbl_fn_805609AC_00001CD8:
    lwz r3, lbl_8087F540
    bl fn_8048EC7C
    lwz r3, lbl_8087F0A8
    lwz r0, 0x194(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805609AC_00001D24
    lwz r0, 0x190(r29)
    cmpwi r0, 0x19d
    bne lbl_fn_805609AC_00001D24
    lwz r3, lbl_8087F430
    li r4, -0x1
    lfs f1, lbl_80887EB8
    li r5, 0x0
    li r6, 0x0
    bl fn_80370B78
    mr r3, r29
    li r4, 0xb
    bl fn_8053E8CC
    b lbl_fn_805609AC_00001D30
lbl_fn_805609AC_00001D24:
    mr r3, r29
    li r4, 0xd
    bl fn_8053E8CC
lbl_fn_805609AC_00001D30:
    lwz r31, 0x1c(r1)
    li r3, 0x0
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
