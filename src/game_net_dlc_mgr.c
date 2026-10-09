#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_14(void);
extern void _restgpr_27(void);
extern void _savegpr_14(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_8000D844(void);
extern void fn_8004ECC0(void);
extern void fn_80051CD8(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_8008937C(void);
extern void fn_800897D8(void);
extern void fn_80097A20(void);
extern void fn_800C31F4(void);
extern void fn_800CB3A0(void);
extern void fn_800D1D3C(void);
extern void fn_800D1E9C(void);
extern void fn_800D2338(void);
extern void fn_800D246C(void);
extern void fn_800D3FA4(void);
extern void fn_800DC880(void);
extern void fn_80102890(void);
extern void fn_8011CD84(void);
extern void fn_8011D1FC(void);
extern void fn_8011D21C(void);
extern void fn_8011FC38(void);
extern void fn_8011FD5C(void);
extern void fn_8011FD84(void);
extern void fn_801354B4(void);
extern void fn_80136138(void);
extern void fn_8013655C(void);
extern void fn_80139560(void);
extern void fn_80145334(void);
extern void fn_80149A30(void);
extern void fn_8016F3D0(void);
extern void fn_80232B7C(void);
extern void fn_8023A8B4(void);
extern void fn_8032B314(void);
extern void fn_8032B6F8(void);
extern void fn_8032B7F0(void);
extern void fn_8032BE88(void);
extern void fn_8032C1EC(void);
extern void fn_80370174(void);
extern void fn_80473F88(void);
extern void fn_80541BDC(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9990(void);
extern void fn_80680770(void);
extern void fn_80686EA4(void);

/* External data declarations */
extern u8 lbl_8075E324[];
extern u8 lbl_8075E38C[];
extern u8 lbl_8075E3A0[];
extern u8 lbl_8075E3C8[];
extern u8 lbl_8075E438[];
extern u8 lbl_8075E454[];
extern u8 lbl_80788D00[];
extern u8 lbl_80794738[];
extern u8 lbl_80794780[];
extern u8 lbl_80794888[];
extern u8 lbl_807948E8[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087EF10;
extern u32 lbl_8087F048;
extern u32 lbl_8087F098;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F890;
extern u32 lbl_8087F898;
extern u32 lbl_8087F8A0;
extern u32 lbl_80887CE4;
extern u32 lbl_80887D38;
extern u32 lbl_80887D3C;
extern u32 lbl_80887D40;
extern u32 lbl_80887D44;
extern u32 lbl_80887D48;
extern u32 lbl_80887D4C;
extern u32 lbl_80887D50;
extern u32 lbl_80887D54;

/* Function declarations */
void fn_8054770C(void);
void fn_805477CC(void);
void fn_80547878(void);
void fn_80547908(void);
void fn_80547984(void);
void fn_80547A24(void);
void fn_80547A88(void);
void fn_80547B58(void);
void fn_80547C2C(void);
void fn_80547D20(void);
void fn_80547D9C(void);
void fn_80547DC4(void);
void fn_80547DF8(void);
void fn_80547DFC(void);
void fn_80547E18(void);
void fn_80547E48(void);
void fn_80547EA4(void);
void fn_80548570(void);
void fn_80548760(void);
void fn_80548C9C(void);
void fn_80548D58(void);
void fn_80548DE8(void);
void fn_80548E48(void);
void fn_80548E74(void);

asm void fn_8054770C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r4
    stw r30, 0x28(r1)
    mr r30, r3
    beq lbl_fn_8054770C_000000A8
    lfs f0, lbl_80887CE4
    li r3, 0x0
    stfs f0, 0x18(r1)
    li r4, 0x0
    stfs f0, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    bl fn_80232B7C
    li r0, -0x1
    stw r0, 0x8(r1)
    li r0, 0x1
    lfs f1, lbl_80887CE4
    stw r0, 0xc(r1)
    addi r4, r30, 0x14d0
    addi r7, r31, 0x6c
    addi r8, r31, 0x78
    lwz r3, lbl_8087F3C0
    addi r9, r1, 0x18
    li r5, 0x0
    li r6, 0x0
    li r10, -0x1
    bl fn_8023A8B4
    lis r4, lbl_8075E324@ha
    lfs f1, lbl_80887CE4
    addi r4, r4, lbl_8075E324@l
    addi r3, r1, 0x10
    addi r4, r4, 0x4d
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_8054770C_000000A8:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_805477CC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_fn_805477CC_00000150
    lwz r0, lbl_8087F890
    cmpwi r0, 0x0
    bne lbl_fn_805477CC_00000150
    lis r5, lbl_8075E38C@ha
    li r3, 0x78
    addi r5, r5, lbl_8075E38C@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_805477CC_0000014C
    mr r4, r30
    bl fn_8011FC38
    lis r3, lbl_80794738@ha
    li r0, 0x0
    addi r3, r3, lbl_80794738@l
    stw r3, 0x0(r31)
    stw r0, 0x54(r31)
    stw r0, 0x58(r31)
    stw r0, 0x5c(r31)
    stw r0, 0x60(r31)
    stw r0, 0x64(r31)
    stw r0, 0x68(r31)
    stw r0, 0x6c(r31)
    stw r0, 0x70(r31)
lbl_fn_805477CC_0000014C:
    stw r31, lbl_8087F890
lbl_fn_805477CC_00000150:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    lwz r3, lbl_8087F890
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80547878(void)
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
    beq lbl_fn_80547878_000001E0
    addic. r0, r3, 0x54
    li r0, 0x0
    stw r0, lbl_8087F890
    beq lbl_fn_80547878_000001BC
    lwz r4, 0x54(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80547878_000001BC
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_80547878_000001BC
    bl fn_800897D8
lbl_fn_80547878_000001BC:
    cmpwi r30, 0x0
    beq lbl_fn_80547878_000001D0
    mr r3, r30
    li r4, 0x0
    bl fn_800D1E9C
lbl_fn_80547878_000001D0:
    cmpwi r31, 0x0
    ble lbl_fn_80547878_000001E0
    mr r3, r30
    bl dtor_80084684
lbl_fn_80547878_000001E0:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80547908(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_800D3FA4
    cmpwi r3, 0x0
    beq lbl_fn_80547908_00000260
    lwz r0, 0x54(r31)
    lis r3, lbl_8075E38C@ha
    addi r3, r3, lbl_8075E38C@l
    cmpwi r0, 0x0
    addi r4, r3, 0x1
    bne lbl_fn_80547908_00000250
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_80547908_00000250
    addi r3, r3, 0x10
    bl fn_8008937C
    stw r3, 0x54(r31)
    b lbl_fn_80547908_00000254
lbl_fn_80547908_00000250:
    li r3, 0x0
lbl_fn_80547908_00000254:
    stw r3, 0x58(r31)
    li r3, 0x1
    b lbl_fn_80547908_00000264
lbl_fn_80547908_00000260:
    li r3, 0x0
lbl_fn_80547908_00000264:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80547984(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, 0x2
    stw r0, 0x24(r1)
    stmw r26, 0x8(r1)
    mr r26, r3
    subi r29, r4, 0x78fb
    li r28, 0x1
    li r31, 0x1
lbl_fn_80547984_0000029C:
    subi r0, r28, 0x1
    slwi r0, r0, 2
    add r30, r26, r0
    lwz r0, 0x5c(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80547984_000002F4
    cmpwi r28, 0x4
    beq lbl_fn_80547984_000002F4
    mr r3, r26
    mr r4, r29
    bl fn_80547C2C
    mr r27, r3
    li r4, 0x1
    bl fn_800D246C
    neg r0, r28
    stw r31, 0x1428(r27)
    mulli r0, r0, 0x64
    stw r0, 0x58(r27)
    lhz r0, 0xd38(r27)
    ori r0, r0, 0x8000
    sth r0, 0xd38(r27)
    stw r27, 0x5c(r30)
lbl_fn_80547984_000002F4:
    addi r28, r28, 0x1
    addi r29, r29, 0x64
    cmpwi r28, 0x7
    blt lbl_fn_80547984_0000029C
    lmw r26, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80547A24(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    addi r30, r3, 0x5c
    stw r29, 0x14(r1)
    li r29, 0x0
lbl_fn_80547A24_0000033C:
    lwz r3, 0x0(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80547A24_0000034C
    bl fn_800D2338
lbl_fn_80547A24_0000034C:
    addi r29, r29, 0x1
    stw r31, 0x0(r30)
    cmplwi r29, 0x6
    addi r30, r30, 0x4
    blt lbl_fn_80547A24_0000033C
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80547A88(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r31, 0x48(r3)
    b lbl_fn_80547A88_0000042C
lbl_fn_80547A88_0000039C:
    lwz r0, 0x5c(r30)
    li r4, 0x0
    cmplw r0, r31
    bne lbl_fn_80547A88_000003B4
    li r4, 0x1
    b lbl_fn_80547A88_00000418
lbl_fn_80547A88_000003B4:
    lwz r0, 0x60(r30)
    addi r3, r30, 0x60
    cmplw r0, r31
    bne lbl_fn_80547A88_000003CC
    li r4, 0x1
    b lbl_fn_80547A88_00000418
lbl_fn_80547A88_000003CC:
    lwz r0, 0x4(r3)
    cmplw r0, r31
    bne lbl_fn_80547A88_000003E0
    li r4, 0x1
    b lbl_fn_80547A88_00000418
lbl_fn_80547A88_000003E0:
    lwz r0, 0x8(r3)
    cmplw r0, r31
    bne lbl_fn_80547A88_000003F4
    li r4, 0x1
    b lbl_fn_80547A88_00000418
lbl_fn_80547A88_000003F4:
    lwz r0, 0xc(r3)
    cmplw r0, r31
    bne lbl_fn_80547A88_00000408
    li r4, 0x1
    b lbl_fn_80547A88_00000418
lbl_fn_80547A88_00000408:
    lwz r0, 0x10(r3)
    cmplw r0, r31
    bne lbl_fn_80547A88_00000418
    li r4, 0x1
lbl_fn_80547A88_00000418:
    cmpwi r4, 0x0
    bne lbl_fn_80547A88_00000428
    mr r3, r31
    bl fn_800D2338
lbl_fn_80547A88_00000428:
    lwz r31, 0x1424(r31)
lbl_fn_80547A88_0000042C:
    cmpwi r31, 0x0
    bne lbl_fn_80547A88_0000039C
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80547B58(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    addi r31, r3, 0x5c
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    li r29, 0x0
    stw r28, 0x10(r1)
lbl_fn_80547B58_00000474:
    lwz r3, 0x0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80547B58_000004EC
    lwz r4, 0x38(r3)
    rlwinm r0, r4, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80547B58_000004EC
    rlwinm r0, r4, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_80547B58_000004E8
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x0(r31)
    li r28, 0x0
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    b lbl_fn_80547B58_000004C8
lbl_fn_80547B58_000004BC:
    mr r4, r28
    bl fn_80097A20
    addi r28, r28, 0x1
lbl_fn_80547B58_000004C8:
    lwz r4, 0x0(r31)
    lwz r0, 0x2d4(r4)
    addi r3, r4, 0xb0
    cmplw r28, r0
    blt lbl_fn_80547B58_000004BC
    addi r3, r4, 0x8c
    bl fn_80473F88
    b lbl_fn_80547B58_000004EC
lbl_fn_80547B58_000004E8:
    li r30, 0x1
lbl_fn_80547B58_000004EC:
    addi r29, r29, 0x1
    addi r31, r31, 0x4
    cmplwi r29, 0x6
    blt lbl_fn_80547B58_00000474
    mr r3, r30
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80547C2C(void)
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
    beq lbl_fn_80547C2C_000005F4
    lis r5, lbl_8075E3A0@ha
    li r3, 0x1438
    addi r5, r5, lbl_8075E3A0@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_80547C2C_000005EC
    mr r4, r29
    mr r6, r30
    li r5, 0x1
    bl fn_801354B4
    lis r4, lbl_80794780@ha
    li r3, 0x0
    addi r4, r4, lbl_80794780@l
    stw r4, 0x0(r31)
    li r0, -0x1
    stw r3, 0x1424(r31)
    stw r3, 0x1428(r31)
    stw r0, 0x142c(r31)
    lwz r5, lbl_8087F890
    cmpwi r5, 0x0
    beq lbl_fn_80547C2C_000005EC
    lwz r4, 0x50(r5)
    lis r3, 0x2
    subi r0, r3, 0x7960
    addi r3, r4, 0x1
    stw r3, 0x50(r5)
    cmpw r3, r0
    ble lbl_fn_80547C2C_000005D8
    lwz r3, 0x50(r5)
    subis r3, r3, 0x2
    addi r0, r3, 0x7960
    stw r0, 0x50(r5)
lbl_fn_80547C2C_000005D8:
    lwz r0, 0x50(r5)
    mr r4, r31
    stw r0, 0x80(r31)
    lwz r3, lbl_8087F890
    bl fn_8011FD5C
lbl_fn_80547C2C_000005EC:
    mr r3, r31
    b lbl_fn_80547C2C_000005F8
lbl_fn_80547C2C_000005F4:
    li r3, 0x0
lbl_fn_80547C2C_000005F8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80547D20(void)
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
    beq lbl_fn_80547D20_00000674
    lis r4, lbl_80794780@ha
    addi r4, r4, lbl_80794780@l
    stw r4, 0x0(r3)
    lwz r3, lbl_8087F890
    cmpwi r3, 0x0
    beq lbl_fn_80547D20_00000658
    mr r4, r30
    bl fn_8011FD84
lbl_fn_80547D20_00000658:
    mr r3, r30
    li r4, 0x0
    bl fn_80136138
    cmpwi r31, 0x0
    ble lbl_fn_80547D20_00000674
    mr r3, r30
    bl dtor_80084684
lbl_fn_80547D20_00000674:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80547D9C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_8013655C
    cntlzw r0, r3
    srwi r3, r0, 5
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80547DC4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80139560
    mr r3, r31
    bl fn_80145334
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80547DF8(void)
{
    nofralloc
    b fn_80149A30
}

asm void fn_80547DFC(void)
{
    nofralloc
    b lbl_fn_80547DFC_000006F8
lbl_fn_80547DFC_000006F4:
    mr r3, r0
lbl_fn_80547DFC_000006F8:
    lwz r0, 0x1424(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80547DFC_000006F4
    stw r4, 0x1424(r3)
    blr
}

asm void fn_80547E18(void)
{
    nofralloc
    li r5, 0x0
    b lbl_fn_80547E18_0000071C
lbl_fn_80547E18_00000714:
    mr r5, r3
    lwz r3, 0x1424(r3)
lbl_fn_80547E18_0000071C:
    cmplw r3, r4
    bne lbl_fn_80547E18_00000714
    bnelr
    cmpwi r5, 0x0
    beqlr
    lwz r0, 0x1424(r3)
    stw r0, 0x1424(r5)
    blr
}

asm void fn_80547E48(void)
{
    nofralloc
    lwz r4, lbl_8087F890
    cmpwi r4, 0x0
    beq lbl_fn_80547E48_00000790
    lwz r4, 0x48(r4)
    cmpwi r4, 0x0
    beq lbl_fn_80547E48_00000790
    cmplw r3, r4
    bne lbl_fn_80547E48_0000077C
    b lbl_fn_80547E48_00000764
lbl_fn_80547E48_00000760:
    mr r4, r0
lbl_fn_80547E48_00000764:
    lwz r0, 0x1424(r4)
    cmpwi r0, 0x0
    bne lbl_fn_80547E48_00000760
    b lbl_fn_80547E48_00000788
    b lbl_fn_80547E48_0000077C
lbl_fn_80547E48_00000778:
    mr r4, r0
lbl_fn_80547E48_0000077C:
    lwz r0, 0x1424(r4)
    cmplw r0, r3
    bne lbl_fn_80547E48_00000778
lbl_fn_80547E48_00000788:
    mr r3, r4
    blr
lbl_fn_80547E48_00000790:
    li r3, 0x0
    blr
}

asm void fn_80547EA4(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_27
    lwz r0, 0x2c(r3)
    mr r29, r3
    li r6, 0x0
    li r5, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80547EA4_000007E8
lbl_fn_80547EA4_000007C8:
    lwz r0, 0x28(r3)
    add r0, r0, r5
    cmplw r0, r4
    bne lbl_fn_80547EA4_000007DC
    b lbl_fn_80547EA4_000007EC
lbl_fn_80547EA4_000007DC:
    addi r6, r6, 0x1
    addi r5, r5, 0x10
    bdnz lbl_fn_80547EA4_000007C8
lbl_fn_80547EA4_000007E8:
    li r6, -0x1
lbl_fn_80547EA4_000007EC:
    lwz r0, 0x2c(r3)
    slwi r4, r6, 4
    lwz r5, 0x28(r3)
    slwi r0, r0, 4
    add r6, r5, r4
    add r7, r5, r0
    subf r0, r6, r7
    srawi r0, r0, 4
    addze r0, r0
    subic. r0, r0, 0x1
    beq lbl_fn_80547EA4_00000938
    addi r5, r6, 0x10
    addi r4, r7, 0xf
    cmplw r5, r7
    subf r4, r5, r4
    srwi r4, r4, 4
    bge lbl_fn_80547EA4_00000938
    srwi. r0, r4, 3
    mtctr r0
    beq lbl_fn_80547EA4_00000910
lbl_fn_80547EA4_0000083C:
    lfs f2, 0x8(r5)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x8(r6)
    lfs f0, 0xc(r5)
    stfs f0, 0xc(r6)
    lfs f2, 0x18(r5)
    psq_l f1, 0x10(r5), 0, 0
    psq_st f1, 0x10(r6), 0, 0
    stfs f2, 0x18(r6)
    lfs f0, 0x1c(r5)
    stfs f0, 0x1c(r6)
    lfs f2, 0x28(r5)
    psq_l f1, 0x20(r5), 0, 0
    psq_st f1, 0x20(r6), 0, 0
    stfs f2, 0x28(r6)
    lfs f0, 0x2c(r5)
    stfs f0, 0x2c(r6)
    lfs f2, 0x38(r5)
    psq_l f1, 0x30(r5), 0, 0
    psq_st f1, 0x30(r6), 0, 0
    stfs f2, 0x38(r6)
    lfs f0, 0x3c(r5)
    stfs f0, 0x3c(r6)
    lfs f2, 0x48(r5)
    psq_l f1, 0x40(r5), 0, 0
    psq_st f1, 0x40(r6), 0, 0
    stfs f2, 0x48(r6)
    lfs f0, 0x4c(r5)
    stfs f0, 0x4c(r6)
    lfs f2, 0x58(r5)
    psq_l f1, 0x50(r5), 0, 0
    psq_st f1, 0x50(r6), 0, 0
    stfs f2, 0x58(r6)
    lfs f0, 0x5c(r5)
    stfs f0, 0x5c(r6)
    lfs f2, 0x68(r5)
    psq_l f1, 0x60(r5), 0, 0
    psq_st f1, 0x60(r6), 0, 0
    stfs f2, 0x68(r6)
    lfs f0, 0x6c(r5)
    stfs f0, 0x6c(r6)
    lfs f2, 0x78(r5)
    psq_l f1, 0x70(r5), 0, 0
    psq_st f1, 0x70(r6), 0, 0
    stfs f2, 0x78(r6)
    lfs f0, 0x7c(r5)
    addi r5, r5, 0x80
    stfs f0, 0x7c(r6)
    addi r6, r6, 0x80
    bdnz lbl_fn_80547EA4_0000083C
    andi. r4, r4, 0x7
    beq lbl_fn_80547EA4_00000938
lbl_fn_80547EA4_00000910:
    mtctr r4
lbl_fn_80547EA4_00000914:
    lfs f2, 0x8(r5)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x8(r6)
    lfs f0, 0xc(r5)
    addi r5, r5, 0x10
    stfs f0, 0xc(r6)
    addi r6, r6, 0x10
    bdnz lbl_fn_80547EA4_00000914
lbl_fn_80547EA4_00000938:
    lwz r4, 0x2c(r3)
    subi r28, r4, 0x1
    stw r28, 0x2c(r3)
    cmplwi r28, 0x2
    blt lbl_fn_80547EA4_00000DE4
    cmpwi r28, 0x0
    li r0, 0x0
    stw r0, 0x8(r1)
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    beq lbl_fn_80547EA4_00000A18
    lis r3, 0x1555
    addi r0, r3, 0x5555
    cmplw r28, r0
    ble lbl_fn_80547EA4_00000994
    lis r3, __files@ha
    lis r4, lbl_8075E3C8@ha
    addi r3, r3, __files@l
    addi r4, r4, lbl_8075E3C8@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80547EA4_00000994:
    mulli r3, r28, 0xc
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_fn_80547EA4_000009C8
    lis r3, __files@ha
    lis r4, lbl_80788D00@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80788D00@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80547EA4_000009C8:
    lwz r0, 0xc(r1)
    addi r5, r1, 0x14
    stw r27, 0x8(r1)
    mulli r0, r0, 0xc
    stw r28, 0x10(r1)
    add r4, r27, r0
    mtctr r28
    cmpwi r28, 0x0
    beq lbl_fn_80547EA4_00000A18
lbl_fn_80547EA4_000009EC:
    cmpwi r4, 0x0
    beq lbl_fn_80547EA4_00000A04
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lfs f2, 0x1c(r1)
    stfs f2, 0x8(r4)
lbl_fn_80547EA4_00000A04:
    lwz r3, 0xc(r1)
    addi r4, r4, 0xc
    addi r0, r3, 0x1
    stw r0, 0xc(r1)
    bdnz lbl_fn_80547EA4_000009EC
lbl_fn_80547EA4_00000A18:
    li r7, 0x0
    li r3, 0x0
    li r4, 0x0
    b lbl_fn_80547EA4_00000A54
lbl_fn_80547EA4_00000A28:
    lwz r0, 0x28(r29)
    addi r7, r7, 0x1
    lwz r5, 0x8(r1)
    add r6, r0, r3
    addi r3, r3, 0x10
    lfs f2, 0x8(r6)
    add r5, r5, r4
    psq_l f1, 0x0(r6), 0, 0
    addi r4, r4, 0xc
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x8(r5)
lbl_fn_80547EA4_00000A54:
    lwz r0, 0x2c(r29)
    cmpw r7, r0
    blt lbl_fn_80547EA4_00000A28
    lwz r30, 0x8(r1)
    addi r29, r29, 0x34
    lwz r31, 0xc(r1)
    addi r3, r29, 0x20
    stw r31, 0x0(r29)
    subi r4, r31, 0x1
    bl fn_8032B314
    addi r3, r29, 0x2c
    subi r4, r31, 0x1
    bl fn_8032B314
    addi r3, r29, 0x38
    subi r4, r31, 0x1
    bl fn_8032B314
    mr r4, r31
    addi r3, r1, 0x20
    bl fn_8032B6F8
    mr r4, r31
    addi r3, r1, 0x2c
    bl fn_8032B6F8
    mr r4, r31
    addi r3, r1, 0x38
    bl fn_8032B6F8
    cmpwi cr1, r31, 0x0
    li r3, 0x0
    li r5, 0x0
    ble cr1, lbl_fn_80547EA4_00000CE0
    cmpwi r31, 0x8
    subi r6, r31, 0x8
    ble lbl_fn_80547EA4_00000C94
    li r7, 0x0
    blt cr1, lbl_fn_80547EA4_00000AF0
    lis r4, 0x8000
    subi r0, r4, 0x2
    cmpw r31, r0
    bgt lbl_fn_80547EA4_00000AF0
    li r7, 0x1
lbl_fn_80547EA4_00000AF0:
    cmpwi r7, 0x0
    beq lbl_fn_80547EA4_00000C94
    addi r0, r6, 0x7
    mr r4, r30
    srwi r0, r0, 3
    mtctr r0
    cmpwi r6, 0x0
    ble lbl_fn_80547EA4_00000C94
lbl_fn_80547EA4_00000B10:
    lwz r6, 0x20(r1)
    addi r3, r3, 0x8
    lfs f0, 0x0(r4)
    stfsx f0, r6, r5
    lwz r6, 0x2c(r1)
    lfs f0, 0x4(r4)
    stfsx f0, r6, r5
    lwz r6, 0x38(r1)
    lfs f0, 0x8(r4)
    stfsx f0, r6, r5
    lwz r0, 0x20(r1)
    lfs f0, 0xc(r4)
    add r6, r0, r5
    stfs f0, 0x4(r6)
    lwz r0, 0x2c(r1)
    lfs f0, 0x10(r4)
    add r6, r0, r5
    stfs f0, 0x4(r6)
    lwz r0, 0x38(r1)
    lfs f0, 0x14(r4)
    add r6, r0, r5
    stfs f0, 0x4(r6)
    lwz r0, 0x20(r1)
    lfs f0, 0x18(r4)
    add r6, r0, r5
    stfs f0, 0x8(r6)
    lwz r0, 0x2c(r1)
    lfs f0, 0x1c(r4)
    add r6, r0, r5
    stfs f0, 0x8(r6)
    lwz r0, 0x38(r1)
    lfs f0, 0x20(r4)
    add r6, r0, r5
    stfs f0, 0x8(r6)
    lwz r0, 0x20(r1)
    lfs f0, 0x24(r4)
    add r6, r0, r5
    stfs f0, 0xc(r6)
    lwz r0, 0x2c(r1)
    lfs f0, 0x28(r4)
    add r6, r0, r5
    stfs f0, 0xc(r6)
    lwz r0, 0x38(r1)
    lfs f0, 0x2c(r4)
    add r6, r0, r5
    stfs f0, 0xc(r6)
    lwz r0, 0x20(r1)
    lfs f0, 0x30(r4)
    add r6, r0, r5
    stfs f0, 0x10(r6)
    lwz r0, 0x2c(r1)
    lfs f0, 0x34(r4)
    add r6, r0, r5
    stfs f0, 0x10(r6)
    lwz r0, 0x38(r1)
    lfs f0, 0x38(r4)
    add r6, r0, r5
    stfs f0, 0x10(r6)
    lwz r0, 0x20(r1)
    lfs f0, 0x3c(r4)
    add r6, r0, r5
    stfs f0, 0x14(r6)
    lwz r0, 0x2c(r1)
    lfs f0, 0x40(r4)
    add r6, r0, r5
    stfs f0, 0x14(r6)
    lwz r0, 0x38(r1)
    lfs f0, 0x44(r4)
    add r6, r0, r5
    stfs f0, 0x14(r6)
    lwz r0, 0x20(r1)
    lfs f0, 0x48(r4)
    add r6, r0, r5
    stfs f0, 0x18(r6)
    lwz r0, 0x2c(r1)
    lfs f0, 0x4c(r4)
    add r6, r0, r5
    stfs f0, 0x18(r6)
    lwz r0, 0x38(r1)
    lfs f0, 0x50(r4)
    add r6, r0, r5
    stfs f0, 0x18(r6)
    lwz r0, 0x20(r1)
    lfs f0, 0x54(r4)
    add r6, r0, r5
    stfs f0, 0x1c(r6)
    lwz r0, 0x2c(r1)
    lfs f0, 0x58(r4)
    add r6, r0, r5
    stfs f0, 0x1c(r6)
    lwz r0, 0x38(r1)
    lfs f0, 0x5c(r4)
    addi r4, r4, 0x60
    add r6, r0, r5
    addi r5, r5, 0x20
    stfs f0, 0x1c(r6)
    bdnz lbl_fn_80547EA4_00000B10
lbl_fn_80547EA4_00000C94:
    mulli r5, r3, 0xc
    subf r0, r3, r31
    slwi r4, r3, 2
    add r5, r30, r5
    mtctr r0
    cmpw r3, r31
    bge lbl_fn_80547EA4_00000CE0
lbl_fn_80547EA4_00000CB0:
    lwz r3, 0x20(r1)
    lfs f0, 0x0(r5)
    stfsx f0, r3, r4
    lwz r3, 0x2c(r1)
    lfs f0, 0x4(r5)
    stfsx f0, r3, r4
    lwz r3, 0x38(r1)
    lfs f0, 0x8(r5)
    addi r5, r5, 0xc
    stfsx f0, r3, r4
    addi r4, r4, 0x4
    bdnz lbl_fn_80547EA4_00000CB0
lbl_fn_80547EA4_00000CE0:
    lwz r5, 0x20(r29)
    mr r3, r29
    lwz r4, 0x20(r1)
    bl fn_8032B7F0
    lwz r5, 0x2c(r29)
    mr r3, r29
    lwz r4, 0x2c(r1)
    bl fn_8032B7F0
    lwz r5, 0x38(r29)
    mr r3, r29
    lwz r4, 0x38(r1)
    bl fn_8032B7F0
    subi r4, r31, 0x1
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x8(r30)
    mulli r0, r4, 0xc
    stfs f2, 0x10(r29)
    addi r3, r29, 0x44
    lfs f0, lbl_80887D38
    psq_st f1, 0x8(r29), 0, 0
    add r5, r30, r0
    psq_l f1, 0x0(r5), 0, 0
    lfs f2, 0x8(r5)
    stfs f2, 0x1c(r29)
    psq_st f1, 0x14(r29), 0, 0
    stfs f0, 0x4(r29)
    bl fn_8032BE88
    subi r31, r31, 0x1
    li r27, 0x0
    li r30, 0x0
    b lbl_fn_80547EA4_00000D8C
lbl_fn_80547EA4_00000D5C:
    lwz r28, 0x44(r29)
    mr r3, r29
    mr r4, r27
    bl fn_8032C1EC
    stfsx f1, r28, r30
    addi r27, r27, 0x1
    lwz r3, 0x44(r29)
    lfs f3, 0x4(r29)
    lfsx f0, r3, r30
    addi r30, r30, 0x4
    fadds f0, f3, f0
    stfs f0, 0x4(r29)
lbl_fn_80547EA4_00000D8C:
    cmpw r27, r31
    blt lbl_fn_80547EA4_00000D5C
    addi r3, r1, 0x38
    li r4, -0x1
    bl fn_8000D844
    addi r3, r1, 0x2c
    li r4, -0x1
    bl fn_8000D844
    addi r3, r1, 0x20
    li r4, -0x1
    bl fn_8000D844
    addic. r0, r1, 0x8
    beq lbl_fn_80547EA4_00000E4C
    beq lbl_fn_80547EA4_00000E4C
    lwz r3, 0x8(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80547EA4_00000E4C
    lwz r0, 0xc(r1)
    subf r0, r0, r0
    stw r0, 0xc(r1)
    bl dtor_80084684
    b lbl_fn_80547EA4_00000E4C
lbl_fn_80547EA4_00000DE4:
    lfs f0, lbl_80887D38
    li r0, 0x0
    lis r7, lbl_807C7030@ha
    stw r0, 0x34(r3)
    addi r7, r7, lbl_807C7030@l
    lwz r0, 0x58(r3)
    stfs f0, 0x38(r3)
    lwz r4, 0x64(r3)
    subf r6, r0, r0
    psq_l f1, 0x0(r7), 0, 0
    lfs f2, 0x8(r7)
    subf r5, r4, r4
    lwz r0, 0x70(r3)
    psq_st f1, 0x3c(r3), 0, 0
    lwz r8, 0x7c(r3)
    subf r4, r0, r0
    stfs f2, 0x44(r3)
    subf r0, r8, r8
    psq_l f1, 0x0(r7), 0, 0
    lfs f2, 0x8(r7)
    stfs f2, 0x50(r3)
    psq_st f1, 0x48(r3), 0, 0
    stw r6, 0x58(r3)
    stw r5, 0x64(r3)
    stw r4, 0x70(r3)
    stw r0, 0x7c(r3)
lbl_fn_80547EA4_00000E4C:
    addi r11, r1, 0x60
    bl _restgpr_27
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80548570(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    lwz r0, 0x2c(r4)
    cmplwi r0, 0x2
    bge lbl_fn_80548570_00000E98
    lis r4, lbl_807C7030@ha
    addi r4, r4, lbl_807C7030@l
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    stfs f2, 0x8(r3)
    psq_st f1, 0x0(r3), 0, 0
    b lbl_fn_80548570_00001044
lbl_fn_80548570_00000E98:
    lfs f0, lbl_80887D38
    addi r5, r1, 0x14
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_80548570_00000EC0
    psq_l f1, 0x3c(r4), 0, 0
    lfs f2, 0x44(r4)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x1c(r1)
    b lbl_fn_80548570_0000103C
lbl_fn_80548570_00000EC0:
    lfs f0, lbl_80887D3C
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_80548570_00000EE4
    psq_l f1, 0x48(r4), 0, 0
    lfs f2, 0x50(r4)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x1c(r1)
    b lbl_fn_80548570_0000103C
lbl_fn_80548570_00000EE4:
    lwz r9, 0x34(r4)
    li r8, 0x0
    lfs f0, 0x38(r4)
    li r6, 0x0
    subic. r0, r9, 0x1
    fmuls f3, f0, f1
    mtctr r0
    ble lbl_fn_80548570_0000102C
lbl_fn_80548570_00000F04:
    lwz r7, 0x78(r4)
    lfsx f0, r7, r6
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_80548570_0000101C
    lfs f8, lbl_80887D38
    fcmpu cr0, f8, f3
    bne lbl_fn_80548570_00000F28
    b lbl_fn_80548570_00000F2C
lbl_fn_80548570_00000F28:
    fdivs f8, f3, f0
lbl_fn_80548570_00000F2C:
    cmpwi r8, 0x0
    bge lbl_fn_80548570_00000F48
    psq_l f1, 0x3c(r4), 0, 0
    lfs f2, 0x44(r4)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x1c(r1)
    b lbl_fn_80548570_0000103C
lbl_fn_80548570_00000F48:
    subi r0, r9, 0x1
    cmpw r8, r0
    blt lbl_fn_80548570_00000F68
    psq_l f1, 0x48(r4), 0, 0
    lfs f2, 0x50(r4)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x1c(r1)
    b lbl_fn_80548570_0000103C
lbl_fn_80548570_00000F68:
    cmpwi r9, 0x2
    bge lbl_fn_80548570_00000F8C
    lis r6, lbl_807C7030@ha
    addi r6, r6, lbl_807C7030@l
    psq_l f1, 0x0(r6), 0, 0
    lfs f2, 0x8(r6)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x1c(r1)
    b lbl_fn_80548570_0000103C
lbl_fn_80548570_00000F8C:
    lwz r0, 0x54(r4)
    slwi r9, r8, 4
    lwz r6, 0x60(r4)
    addi r7, r1, 0x8
    add r8, r0, r9
    lwz r0, 0x6c(r4)
    add r6, r6, r9
    lfs f5, 0xc(r8)
    lfs f3, 0x8(r8)
    add r9, r0, r9
    lfs f4, 0xc(r6)
    fmadds f7, f5, f8, f3
    lfs f0, 0x8(r6)
    lfs f6, 0x4(r8)
    fmadds f5, f4, f8, f0
    lfs f4, 0x4(r6)
    fmadds f7, f8, f7, f6
    lfs f6, 0x0(r8)
    fmadds f5, f8, f5, f4
    lfs f4, 0x0(r6)
    fmadds f6, f8, f7, f6
    lfs f3, 0xc(r9)
    lfs f0, 0x8(r9)
    fmadds f4, f8, f5, f4
    fmadds f3, f3, f8, f0
    lfs f0, 0x4(r9)
    stfs f6, 0x8(r1)
    fmadds f3, f8, f3, f0
    lfs f0, 0x0(r9)
    stfs f4, 0xc(r1)
    fmadds f2, f8, f3, f0
    psq_l f1, 0x0(r7), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x10(r1)
    stfs f2, 0x1c(r1)
    b lbl_fn_80548570_0000103C
lbl_fn_80548570_0000101C:
    fsubs f3, f3, f0
    addi r8, r8, 0x1
    addi r6, r6, 0x4
    bdnz lbl_fn_80548570_00000F04
lbl_fn_80548570_0000102C:
    psq_l f1, 0x3c(r4), 0, 0
    lfs f2, 0x44(r4)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x1c(r1)
lbl_fn_80548570_0000103C:
    lwz r4, 0x4(r4)
    bl fn_80541BDC
lbl_fn_80548570_00001044:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80548760(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_27
    lwz r27, 0x2c(r3)
    mr r29, r3
    cmplwi r27, 0x2
    blt lbl_fn_80548760_00001510
    cmpwi r27, 0x0
    li r0, 0x0
    stw r0, 0x38(r1)
    stw r0, 0x3c(r1)
    stw r0, 0x40(r1)
    beq lbl_fn_80548760_00001144
    lis r3, 0x1555
    addi r0, r3, 0x5555
    cmplw r27, r0
    ble lbl_fn_80548760_000010C0
    lis r3, __files@ha
    lis r4, lbl_8075E3C8@ha
    addi r3, r3, __files@l
    addi r4, r4, lbl_8075E3C8@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80548760_000010C0:
    mulli r3, r27, 0xc
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r28, r3
    bne lbl_fn_80548760_000010F4
    lis r3, __files@ha
    lis r4, lbl_80788D00@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80788D00@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80548760_000010F4:
    lwz r0, 0x3c(r1)
    addi r4, r1, 0x2c
    stw r28, 0x38(r1)
    mulli r0, r0, 0xc
    stw r27, 0x40(r1)
    add r5, r28, r0
    mtctr r27
    cmpwi r27, 0x0
    beq lbl_fn_80548760_00001144
lbl_fn_80548760_00001118:
    cmpwi r5, 0x0
    beq lbl_fn_80548760_00001130
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    lfs f2, 0x34(r1)
    stfs f2, 0x8(r5)
lbl_fn_80548760_00001130:
    lwz r3, 0x3c(r1)
    addi r5, r5, 0xc
    addi r0, r3, 0x1
    stw r0, 0x3c(r1)
    bdnz lbl_fn_80548760_00001118
lbl_fn_80548760_00001144:
    li r7, 0x0
    li r3, 0x0
    li r4, 0x0
    b lbl_fn_80548760_00001180
lbl_fn_80548760_00001154:
    lwz r0, 0x28(r29)
    addi r7, r7, 0x1
    lwz r5, 0x38(r1)
    add r6, r0, r3
    addi r3, r3, 0x10
    lfs f2, 0x8(r6)
    add r5, r5, r4
    psq_l f1, 0x0(r6), 0, 0
    addi r4, r4, 0xc
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x8(r5)
lbl_fn_80548760_00001180:
    lwz r0, 0x2c(r29)
    cmpw r7, r0
    blt lbl_fn_80548760_00001154
    lwz r30, 0x38(r1)
    addi r31, r29, 0x34
    lwz r29, 0x3c(r1)
    addi r3, r31, 0x20
    stw r29, 0x0(r31)
    subi r4, r29, 0x1
    bl fn_8032B314
    addi r3, r31, 0x2c
    subi r4, r29, 0x1
    bl fn_8032B314
    addi r3, r31, 0x38
    subi r4, r29, 0x1
    bl fn_8032B314
    mr r4, r29
    addi r3, r1, 0x20
    bl fn_8032B6F8
    mr r4, r29
    addi r3, r1, 0x14
    bl fn_8032B6F8
    mr r4, r29
    addi r3, r1, 0x8
    bl fn_8032B6F8
    cmpwi cr1, r29, 0x0
    li r3, 0x0
    li r5, 0x0
    ble cr1, lbl_fn_80548760_0000140C
    cmpwi r29, 0x8
    subi r6, r29, 0x8
    ble lbl_fn_80548760_000013C0
    li r7, 0x0
    blt cr1, lbl_fn_80548760_0000121C
    lis r4, 0x8000
    subi r0, r4, 0x2
    cmpw r29, r0
    bgt lbl_fn_80548760_0000121C
    li r7, 0x1
lbl_fn_80548760_0000121C:
    cmpwi r7, 0x0
    beq lbl_fn_80548760_000013C0
    addi r0, r6, 0x7
    mr r4, r30
    srwi r0, r0, 3
    mtctr r0
    cmpwi r6, 0x0
    ble lbl_fn_80548760_000013C0
lbl_fn_80548760_0000123C:
    lwz r6, 0x20(r1)
    addi r3, r3, 0x8
    lfs f0, 0x0(r4)
    stfsx f0, r6, r5
    lwz r6, 0x14(r1)
    lfs f0, 0x4(r4)
    stfsx f0, r6, r5
    lwz r6, 0x8(r1)
    lfs f0, 0x8(r4)
    stfsx f0, r6, r5
    lwz r0, 0x20(r1)
    lfs f0, 0xc(r4)
    add r6, r0, r5
    stfs f0, 0x4(r6)
    lwz r0, 0x14(r1)
    lfs f0, 0x10(r4)
    add r6, r0, r5
    stfs f0, 0x4(r6)
    lwz r0, 0x8(r1)
    lfs f0, 0x14(r4)
    add r6, r0, r5
    stfs f0, 0x4(r6)
    lwz r0, 0x20(r1)
    lfs f0, 0x18(r4)
    add r6, r0, r5
    stfs f0, 0x8(r6)
    lwz r0, 0x14(r1)
    lfs f0, 0x1c(r4)
    add r6, r0, r5
    stfs f0, 0x8(r6)
    lwz r0, 0x8(r1)
    lfs f0, 0x20(r4)
    add r6, r0, r5
    stfs f0, 0x8(r6)
    lwz r0, 0x20(r1)
    lfs f0, 0x24(r4)
    add r6, r0, r5
    stfs f0, 0xc(r6)
    lwz r0, 0x14(r1)
    lfs f0, 0x28(r4)
    add r6, r0, r5
    stfs f0, 0xc(r6)
    lwz r0, 0x8(r1)
    lfs f0, 0x2c(r4)
    add r6, r0, r5
    stfs f0, 0xc(r6)
    lwz r0, 0x20(r1)
    lfs f0, 0x30(r4)
    add r6, r0, r5
    stfs f0, 0x10(r6)
    lwz r0, 0x14(r1)
    lfs f0, 0x34(r4)
    add r6, r0, r5
    stfs f0, 0x10(r6)
    lwz r0, 0x8(r1)
    lfs f0, 0x38(r4)
    add r6, r0, r5
    stfs f0, 0x10(r6)
    lwz r0, 0x20(r1)
    lfs f0, 0x3c(r4)
    add r6, r0, r5
    stfs f0, 0x14(r6)
    lwz r0, 0x14(r1)
    lfs f0, 0x40(r4)
    add r6, r0, r5
    stfs f0, 0x14(r6)
    lwz r0, 0x8(r1)
    lfs f0, 0x44(r4)
    add r6, r0, r5
    stfs f0, 0x14(r6)
    lwz r0, 0x20(r1)
    lfs f0, 0x48(r4)
    add r6, r0, r5
    stfs f0, 0x18(r6)
    lwz r0, 0x14(r1)
    lfs f0, 0x4c(r4)
    add r6, r0, r5
    stfs f0, 0x18(r6)
    lwz r0, 0x8(r1)
    lfs f0, 0x50(r4)
    add r6, r0, r5
    stfs f0, 0x18(r6)
    lwz r0, 0x20(r1)
    lfs f0, 0x54(r4)
    add r6, r0, r5
    stfs f0, 0x1c(r6)
    lwz r0, 0x14(r1)
    lfs f0, 0x58(r4)
    add r6, r0, r5
    stfs f0, 0x1c(r6)
    lwz r0, 0x8(r1)
    lfs f0, 0x5c(r4)
    addi r4, r4, 0x60
    add r6, r0, r5
    addi r5, r5, 0x20
    stfs f0, 0x1c(r6)
    bdnz lbl_fn_80548760_0000123C
lbl_fn_80548760_000013C0:
    mulli r5, r3, 0xc
    subf r0, r3, r29
    slwi r4, r3, 2
    add r5, r30, r5
    mtctr r0
    cmpw r3, r29
    bge lbl_fn_80548760_0000140C
lbl_fn_80548760_000013DC:
    lwz r3, 0x20(r1)
    lfs f0, 0x0(r5)
    stfsx f0, r3, r4
    lwz r3, 0x14(r1)
    lfs f0, 0x4(r5)
    stfsx f0, r3, r4
    lwz r3, 0x8(r1)
    lfs f0, 0x8(r5)
    addi r5, r5, 0xc
    stfsx f0, r3, r4
    addi r4, r4, 0x4
    bdnz lbl_fn_80548760_000013DC
lbl_fn_80548760_0000140C:
    lwz r5, 0x20(r31)
    mr r3, r31
    lwz r4, 0x20(r1)
    bl fn_8032B7F0
    lwz r5, 0x2c(r31)
    mr r3, r31
    lwz r4, 0x14(r1)
    bl fn_8032B7F0
    lwz r5, 0x38(r31)
    mr r3, r31
    lwz r4, 0x8(r1)
    bl fn_8032B7F0
    subi r4, r29, 0x1
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x8(r30)
    mulli r0, r4, 0xc
    stfs f2, 0x10(r31)
    addi r3, r31, 0x44
    lfs f0, lbl_80887D38
    psq_st f1, 0x8(r31), 0, 0
    add r5, r30, r0
    psq_l f1, 0x0(r5), 0, 0
    lfs f2, 0x8(r5)
    stfs f2, 0x1c(r31)
    psq_st f1, 0x14(r31), 0, 0
    stfs f0, 0x4(r31)
    bl fn_8032BE88
    subi r30, r29, 0x1
    li r27, 0x0
    li r29, 0x0
    b lbl_fn_80548760_000014B8
lbl_fn_80548760_00001488:
    lwz r28, 0x44(r31)
    mr r3, r31
    mr r4, r27
    bl fn_8032C1EC
    stfsx f1, r28, r29
    addi r27, r27, 0x1
    lwz r3, 0x44(r31)
    lfs f3, 0x4(r31)
    lfsx f0, r3, r29
    addi r29, r29, 0x4
    fadds f0, f3, f0
    stfs f0, 0x4(r31)
lbl_fn_80548760_000014B8:
    cmpw r27, r30
    blt lbl_fn_80548760_00001488
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_8000D844
    addi r3, r1, 0x14
    li r4, -0x1
    bl fn_8000D844
    addi r3, r1, 0x20
    li r4, -0x1
    bl fn_8000D844
    addic. r0, r1, 0x38
    beq lbl_fn_80548760_00001578
    beq lbl_fn_80548760_00001578
    lwz r3, 0x38(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80548760_00001578
    lwz r0, 0x3c(r1)
    subf r0, r0, r0
    stw r0, 0x3c(r1)
    bl dtor_80084684
    b lbl_fn_80548760_00001578
lbl_fn_80548760_00001510:
    lfs f0, lbl_80887D38
    li r0, 0x0
    lis r7, lbl_807C7030@ha
    stw r0, 0x34(r3)
    addi r7, r7, lbl_807C7030@l
    lwz r4, 0x58(r3)
    stfs f0, 0x38(r3)
    lwz r0, 0x64(r3)
    subf r6, r4, r4
    psq_l f1, 0x0(r7), 0, 0
    lfs f2, 0x8(r7)
    subf r5, r0, r0
    lwz r4, 0x70(r3)
    lwz r0, 0x7c(r3)
    psq_st f1, 0x3c(r3), 0, 0
    subf r4, r4, r4
    subf r0, r0, r0
    stfs f2, 0x44(r3)
    psq_l f1, 0x0(r7), 0, 0
    lfs f2, 0x8(r7)
    stfs f2, 0x50(r3)
    psq_st f1, 0x48(r3), 0, 0
    stw r6, 0x58(r3)
    stw r5, 0x64(r3)
    stw r4, 0x70(r3)
    stw r0, 0x7c(r3)
lbl_fn_80548760_00001578:
    addi r11, r1, 0x60
    bl _restgpr_27
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80548C9C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    lis r30, lbl_8075E3C8@ha
    addi r30, r30, lbl_8075E3C8@l
    addi r3, r30, 0x14
    bl fn_800DC880
    lfs f0, lbl_80887D38
    lis r31, lbl_80794888@ha
    stfs f0, 0x14(r1)
    addi r31, r31, lbl_80794888@l
    li r4, 0x0
    lwz r0, 0x14(r1)
    stw r3, 0x4(r31)
    addi r3, r30, 0x1a
    stw r0, 0xc(r31)
    bl fn_800DC880
    lfs f0, lbl_80887D38
    li r4, 0x0
    stfs f0, 0x10(r1)
    lwz r0, 0x10(r1)
    stw r3, 0x1c(r31)
    addi r3, r30, 0x20
    stw r0, 0x24(r31)
    bl fn_800DC880
    lfs f0, lbl_80887D38
    li r4, 0x0
    stfs f0, 0xc(r1)
    lwz r0, 0xc(r1)
    stw r3, 0x34(r31)
    addi r3, r30, 0x26
    stw r0, 0x3c(r31)
    bl fn_800DC880
    lfs f0, lbl_80887D38
    stfs f0, 0x8(r1)
    lwz r0, 0x8(r1)
    stw r3, 0x4c(r31)
    stw r0, 0x54(r31)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80548D58(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, lbl_8087F898
    cmpwi r0, 0x0
    bne lbl_fn_80548D58_000016C0
    lis r5, lbl_8075E454@ha
    li r3, 0x5150
    addi r5, r5, lbl_8075E454@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_80548D58_000016BC
    mr r4, r30
    bl fn_800D1D3C
    lis r4, lbl_807948E8@ha
    addi r3, r31, 0x4c
    addi r4, r4, lbl_807948E8@l
    stw r4, 0x0(r31)
    li r4, 0x0
    li r5, 0x5100
    bl memset
lbl_fn_80548D58_000016BC:
    stw r31, lbl_8087F898
lbl_fn_80548D58_000016C0:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    lwz r3, lbl_8087F898
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80548DE8(void)
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
    beq lbl_fn_80548DE8_00001720
    li r0, 0x0
    stw r0, lbl_8087F898
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r31, 0x0
    ble lbl_fn_80548DE8_00001720
    mr r3, r30
    bl dtor_80084684
lbl_fn_80548DE8_00001720:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80548E48(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_800D3FA4
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80548E74(void)
{
    nofralloc
    stwu r1, -0x250(r1)
    mflr r0
    stw r0, 0x254(r1)
    addi r11, r1, 0x1e0
    stfd f31, 0x240(r1)
    psq_st f31, 0x248(r1), 0, 0
    stfd f30, 0x230(r1)
    psq_st f30, 0x238(r1), 0, 0
    stfd f29, 0x220(r1)
    psq_st f29, 0x228(r1), 0, 0
    stfd f28, 0x210(r1)
    psq_st f28, 0x218(r1), 0, 0
    stfd f27, 0x200(r1)
    psq_st f27, 0x208(r1), 0, 0
    stfd f26, 0x1f0(r1)
    psq_st f26, 0x1f8(r1), 0, 0
    stfd f25, 0x1e0(r1)
    psq_st f25, 0x1e8(r1), 0, 0
    bl _savegpr_14
    lwz r4, lbl_8087F430
    stw r3, 0x8(r1)
    cmpwi r4, 0x0
    beq lbl_fn_80548E74_000017D0
    lwz r0, 0x54e4(r4)
    cmpwi r0, 0x0
    bne lbl_fn_80548E74_00002634
lbl_fn_80548E74_000017D0:
    lwz r3, lbl_8087F098
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80548E74_00002634
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_80548E74_000017F4
    lwz r27, 0x48(r3)
    b lbl_fn_80548E74_000017F8
lbl_fn_80548E74_000017F4:
    li r27, 0x0
lbl_fn_80548E74_000017F8:
    cmpwi r27, 0x0
    beq lbl_fn_80548E74_00002634
    lwz r3, lbl_8087F048
    mr r4, r27
    bl fn_80102890
    cmpwi r3, 0x0
    stw r3, 0x17c(r1)
    blt lbl_fn_80548E74_00002634
    lwz r0, 0x12a4(r27)
    li r4, 0x0
    lwz r3, 0x8(r1)
    li r5, 0x5100
    srwi r6, r0, 31
    subi r0, r6, 0x1
    addi r3, r3, 0x4c
    cntlzw r0, r0
    srwi r0, r0, 5
    stb r0, 0x178(r1)
    bl memset
    lwz r3, lbl_8087F048
    addis r3, r3, 0x3
    lwz r23, 0x63b0(r3)
    cmpwi r23, 0x48
    bge lbl_fn_80548E74_0000185C
    b lbl_fn_80548E74_00001860
lbl_fn_80548E74_0000185C:
    li r23, 0x48
lbl_fn_80548E74_00001860:
    li r0, 0x0
    lfs f28, lbl_80887D40
    lwz r15, 0x8(r1)
    li r20, 0x0
    lfs f27, lbl_80887D44
    li r14, 0x0
    stw r0, 0x174(r1)
    lfs f26, lbl_80887D48
    b lbl_fn_80548E74_00001BC4
lbl_fn_80548E74_00001884:
    lwz r3, lbl_8087F048
    addis r3, r3, 0x1
    subi r3, r3, 0x3410
    lwzx r18, r3, r14
    cmpwi r18, 0x0
    beq lbl_fn_80548E74_00001BB8
    lwz r0, 0x48(r18)
    cmpwi r0, 0x2
    bne lbl_fn_80548E74_00001BB8
    lwz r6, 0x38(r18)
    li r4, 0x0
    li r3, 0x0
    li r5, 0x0
    rlwinm r0, r6, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80548E74_000018D4
    clrlwi r0, r6, 31
    cmplwi r0, 0x1
    beq lbl_fn_80548E74_000018D4
    li r5, 0x1
lbl_fn_80548E74_000018D4:
    cmpwi r5, 0x0
    beq lbl_fn_80548E74_000018F0
    lwz r0, 0x7e0(r18)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_80548E74_000018F0
    li r3, 0x1
lbl_fn_80548E74_000018F0:
    cmpwi r3, 0x0
    beq lbl_fn_80548E74_00001924
    lwz r0, 0x55c(r18)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_80548E74_00001918
    lwz r0, 0x560(r18)
    cmpwi r0, 0x1c
    bne lbl_fn_80548E74_00001918
    li r3, 0x1
lbl_fn_80548E74_00001918:
    cmpwi r3, 0x0
    bne lbl_fn_80548E74_00001924
    li r4, 0x1
lbl_fn_80548E74_00001924:
    cmpwi r4, 0x0
    beq lbl_fn_80548E74_00001BB8
    lwz r0, 0x54c(r18)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    beq lbl_fn_80548E74_00001BB8
    lwz r0, 0xd18(r18)
    cmpwi r0, 0x0
    ble lbl_fn_80548E74_00001BB8
    addi r3, r18, 0xd74
    bl fn_8011D1FC
    cmpwi r3, 0x0
    beq lbl_fn_80548E74_00001BB8
    lfs f29, 0xd8c(r18)
    mr r17, r15
    lfs f30, 0xd90(r18)
    li r21, 0x0
    li r16, 0x0
    b lbl_fn_80548E74_00001BA4
lbl_fn_80548E74_00001970:
    cmpw r20, r21
    beq lbl_fn_80548E74_00001B98
    lwz r3, lbl_8087F048
    addis r3, r3, 0x1
    subi r3, r3, 0x3410
    lwzx r19, r3, r16
    cmpwi r19, 0x0
    beq lbl_fn_80548E74_00001B98
    lwz r0, 0x48(r19)
    cmpwi r0, 0x2
    beq lbl_fn_80548E74_000019A4
    cmpwi r0, 0x0
    bne lbl_fn_80548E74_00001B98
lbl_fn_80548E74_000019A4:
    lwz r6, 0x38(r19)
    li r4, 0x0
    li r3, 0x0
    li r5, 0x0
    rlwinm r0, r6, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80548E74_000019D0
    clrlwi r0, r6, 31
    cmplwi r0, 0x1
    beq lbl_fn_80548E74_000019D0
    li r5, 0x1
lbl_fn_80548E74_000019D0:
    cmpwi r5, 0x0
    beq lbl_fn_80548E74_000019EC
    lwz r0, 0x7e0(r19)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_80548E74_000019EC
    li r3, 0x1
lbl_fn_80548E74_000019EC:
    cmpwi r3, 0x0
    beq lbl_fn_80548E74_00001A20
    lwz r0, 0x55c(r19)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_80548E74_00001A14
    lwz r0, 0x560(r19)
    cmpwi r0, 0x1c
    bne lbl_fn_80548E74_00001A14
    li r3, 0x1
lbl_fn_80548E74_00001A14:
    cmpwi r3, 0x0
    bne lbl_fn_80548E74_00001A20
    li r4, 0x1
lbl_fn_80548E74_00001A20:
    cmpwi r4, 0x0
    beq lbl_fn_80548E74_00001B98
    lwz r0, 0x54c(r19)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    beq lbl_fn_80548E74_00001B98
    lwz r0, 0xd18(r19)
    cmpwi r0, 0x0
    ble lbl_fn_80548E74_00001B98
    addi r3, r19, 0xd74
    bl fn_8011D1FC
    cmpwi r3, 0x0
    bne lbl_fn_80548E74_00001A60
    lwz r0, 0x48(r19)
    cmpwi r0, 0x0
    bne lbl_fn_80548E74_00001B98
lbl_fn_80548E74_00001A60:
    lfs f7, 0x530(r19)
    addi r3, r1, 0x60
    lfs f0, 0x530(r18)
    lfs f9, 0x52c(r19)
    fsubs f10, f7, f0
    lfs f8, 0x52c(r18)
    lfs f7, 0x528(r19)
    lfs f0, 0x528(r18)
    fsubs f8, f9, f8
    fsubs f0, f7, f0
    stfs f8, 0x64(r1)
    stfs f0, 0x60(r1)
    stfs f10, 0x68(r1)
    bl fn_805F9920
    fmr f31, f1
    fcmpo cr0, f1, f28
    ble lbl_fn_80548E74_00001AB0
    addi r3, r1, 0x60
    mr r4, r3
    bl fn_805F98D0
lbl_fn_80548E74_00001AB0:
    fmuls f0, f30, f30
    fcmpo cr0, f31, f0
    bge lbl_fn_80548E74_00001B80
    stfs f28, 0x48(r1)
    addi r3, r1, 0x100
    li r4, 0x79
    stfs f28, 0x4c(r1)
    stfs f27, 0x50(r1)
    lfs f1, 0x538(r18)
    bl fn_805F8E70
    addi r4, r1, 0x48
    addi r3, r1, 0x100
    mr r5, r4
    bl fn_805F93C0
    addi r3, r1, 0x60
    addi r4, r1, 0x48
    bl fn_805F9990
    fcmpo cr0, f1, f26
    cror eq, gt, eq
    bne lbl_fn_80548E74_00001B80
    lwz r0, 0x12a4(r19)
    srwi. r0, r0, 31
    beq lbl_fn_80548E74_00001B4C
    stfs f28, 0x3c(r1)
    addi r3, r1, 0xd0
    li r4, 0x79
    stfs f28, 0x40(r1)
    stfs f27, 0x44(r1)
    lfs f1, 0x538(r19)
    bl fn_805F8E70
    addi r4, r1, 0x3c
    addi r3, r1, 0xd0
    mr r5, r4
    bl fn_805F93C0
    addi r3, r1, 0x60
    addi r4, r1, 0x3c
    bl fn_805F9990
    fcmpo cr0, f1, f28
    ble lbl_fn_80548E74_00001B80
lbl_fn_80548E74_00001B4C:
    lwz r3, lbl_8087EE98
    addi r5, r18, 0x600
    addi r6, r19, 0x600
    li r4, 0x0
    lis r7, 0x8000
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ECC0
    cmpwi r3, 0x0
    bne lbl_fn_80548E74_00001B80
    lwz r0, 0x4c(r17)
    ori r0, r0, 0x1
    stw r0, 0x4c(r17)
lbl_fn_80548E74_00001B80:
    fmuls f0, f29, f29
    fcmpo cr0, f31, f0
    bge lbl_fn_80548E74_00001B98
    lwz r0, 0x4c(r17)
    ori r0, r0, 0x2
    stw r0, 0x4c(r17)
lbl_fn_80548E74_00001B98:
    addi r16, r16, 0x934
    addi r17, r17, 0x4
    addi r21, r21, 0x1
lbl_fn_80548E74_00001BA4:
    cmpw r21, r23
    blt lbl_fn_80548E74_00001970
    lwz r3, 0x174(r1)
    addi r3, r3, 0x1
    stw r3, 0x174(r1)
lbl_fn_80548E74_00001BB8:
    addi r14, r14, 0x934
    addi r15, r15, 0x120
    addi r20, r20, 0x1
lbl_fn_80548E74_00001BC4:
    cmpw r20, r23
    blt lbl_fn_80548E74_00001884
    li r0, 0x0
    stw r0, 0x170(r1)
    li r0, 0x0
    lfs f28, lbl_80887D40
    stw r0, 0x188(r1)
    li r0, 0x0
    lfs f29, lbl_80887D44
    addi r30, r1, 0x13c
    lfs f30, lbl_80887D4C
    addi r29, r1, 0x70
    lfs f31, lbl_80887D50
    addi r28, r1, 0x130
    lfs f27, lbl_80887D54
    lis r31, lbl_8075E438@ha
    stw r0, 0x184(r1)
    li r14, 0x0
    b lbl_fn_80548E74_00002628
lbl_fn_80548E74_00001C10:
    lwz r3, lbl_8087F048
    li r4, 0x0
    lwz r0, 0x188(r1)
    li r5, 0x0
    addis r3, r3, 0x1
    li r6, 0x0
    subi r3, r3, 0x3410
    lwzx r22, r3, r0
    lwz r3, 0x38(r22)
    addi r21, r22, 0xd74
    rlwinm r0, r3, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80548E74_00001C54
    clrlwi r0, r3, 31
    cmplwi r0, 0x1
    beq lbl_fn_80548E74_00001C54
    li r6, 0x1
lbl_fn_80548E74_00001C54:
    cmpwi r6, 0x0
    beq lbl_fn_80548E74_00001C70
    lwz r0, 0x7e0(r22)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_80548E74_00001C70
    li r5, 0x1
lbl_fn_80548E74_00001C70:
    cmpwi r5, 0x0
    beq lbl_fn_80548E74_00001CA4
    lwz r0, 0x55c(r22)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_80548E74_00001C98
    lwz r0, 0x560(r22)
    cmpwi r0, 0x1c
    bne lbl_fn_80548E74_00001C98
    li r3, 0x1
lbl_fn_80548E74_00001C98:
    cmpwi r3, 0x0
    bne lbl_fn_80548E74_00001CA4
    li r4, 0x1
lbl_fn_80548E74_00001CA4:
    cmpwi r4, 0x0
    beq lbl_fn_80548E74_00001CC4
    lwz r0, 0x48(r22)
    cmpwi r0, 0x2
    bne lbl_fn_80548E74_00001CC4
    lwz r0, 0xd18(r22)
    cmpwi r0, 0x0
    bgt lbl_fn_80548E74_00001CD0
lbl_fn_80548E74_00001CC4:
    li r0, 0x0
    stb r0, 0x1(r21)
    b lbl_fn_80548E74_00002600
lbl_fn_80548E74_00001CD0:
    lwz r3, 0x7e0(r22)
    rlwinm r0, r3, 0, 27, 27
    cmplwi r0, 0x10
    beq lbl_fn_80548E74_00001CEC
    rlwinm r0, r3, 0, 25, 25
    cmplwi r0, 0x40
    bne lbl_fn_80548E74_00001CF8
lbl_fn_80548E74_00001CEC:
    li r0, 0x0
    stb r0, 0x1(r21)
    b lbl_fn_80548E74_00002600
lbl_fn_80548E74_00001CF8:
    lbz r3, 0x0(r21)
    extsb. r0, r3
    beq lbl_fn_80548E74_00002600
    lbz r18, 0x1(r21)
    li r19, 0x0
    lwz r0, 0x20(r21)
    extsb r18, r18
    stb r3, 0x1(r21)
    rlwinm r3, r0, 0, 30, 30
    subi r0, r3, 0x2
    lfs f0, 0x1c(r21)
    cntlzw r0, r0
    srwi r0, r0, 5
    stw r0, 0x180(r1)
    fcmpo cr0, f0, f28
    ble lbl_fn_80548E74_00001D70
    lwz r3, 0x184(r1)
    li r19, 0x1
    lwz r0, 0x8(r1)
    add r3, r0, r3
    mtctr r23
    cmpwi r23, 0x0
    ble lbl_fn_80548E74_00001D70
lbl_fn_80548E74_00001D54:
    lwz r0, 0x4c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80548E74_00001D68
    li r19, 0x0
    b lbl_fn_80548E74_00001D70
lbl_fn_80548E74_00001D68:
    addi r3, r3, 0x120
    bdnz lbl_fn_80548E74_00001D54
lbl_fn_80548E74_00001D70:
    lwz r0, 0xc(r21)
    cmpwi r0, 0x0
    bgt lbl_fn_80548E74_00001D88
    lwz r0, 0x10(r21)
    cmpwi r0, 0x0
    ble lbl_fn_80548E74_00001F20
lbl_fn_80548E74_00001D88:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80548E74_00001D9C
    lwz r16, 0x10d8(r3)
    b lbl_fn_80548E74_00001DA0
lbl_fn_80548E74_00001D9C:
    li r16, 0x0
lbl_fn_80548E74_00001DA0:
    cmpwi r16, 0x0
    beq lbl_fn_80548E74_00001F20
    li r26, 0x0
    li r20, 0x0
    li r24, 0x0
    li r15, 0x0
    b lbl_fn_80548E74_00001EF8
lbl_fn_80548E74_00001DBC:
    lwz r3, 0xf8(r16)
    lwz r0, 0xc(r21)
    add r17, r3, r15
    lwz r3, 0x24(r17)
    cmpw r3, r0
    beq lbl_fn_80548E74_00001DE0
    lwz r0, 0x10(r21)
    cmpw r3, r0
    bne lbl_fn_80548E74_00001EF0
lbl_fn_80548E74_00001DE0:
    stfs f28, 0x168(r1)
    addi r25, r22, 0x614
    addi r3, r1, 0xa0
    li r4, 0x79
    stfs f28, 0x160(r1)
    stfs f28, 0x15c(r1)
    stfs f28, 0x158(r1)
    stfs f28, 0x154(r1)
    stfs f28, 0x14c(r1)
    stfs f28, 0x148(r1)
    stfs f28, 0x144(r1)
    stfs f28, 0x140(r1)
    stfs f29, 0x164(r1)
    stfs f29, 0x150(r1)
    stfs f29, 0x13c(r1)
    lfs f1, 0x14(r17)
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0xa0
    addi r5, r1, 0x70
    bl fn_805F89F0
    psq_l f1, 0x0(r29), 0, 0
    mr r3, r25
    psq_l f2, 0x8(r29), 0, 0
    mr r4, r28
    psq_l f3, 0x10(r29), 0, 0
    psq_l f4, 0x18(r29), 0, 0
    psq_l f5, 0x20(r29), 0, 0
    psq_l f6, 0x28(r29), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
    lfs f9, 0x1c(r17)
    lfs f8, 0xc(r17)
    lfs f7, 0x8(r17)
    lfs f0, 0x4(r17)
    fadds f8, f8, f28
    fadds f7, f7, f9
    stfs f28, 0x24(r1)
    fadds f10, f0, f28
    stfs f7, 0x158(r1)
    stfs f10, 0x148(r1)
    stfs f8, 0x168(r1)
    lfs f2, 0x20(r17)
    psq_l f1, 0x18(r17), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    lfs f0, 0x134(r1)
    stfs f9, 0x28(r1)
    fadds f0, f0, f30
    stfs f28, 0x2c(r1)
    stfs f10, 0x30(r1)
    stfs f7, 0x34(r1)
    stfs f8, 0x38(r1)
    stfs f2, 0x138(r1)
    stfs f0, 0x134(r1)
    bl fn_80051CD8
    cmpwi r3, 0x0
    beq lbl_fn_80548E74_00001EF0
    lwz r3, 0x24(r17)
    lwz r0, 0xc(r21)
    cmpw r3, r0
    bne lbl_fn_80548E74_00001EEC
    li r26, 0x1
    b lbl_fn_80548E74_00001F04
lbl_fn_80548E74_00001EEC:
    li r20, 0x1
lbl_fn_80548E74_00001EF0:
    addi r24, r24, 0x1
    addi r15, r15, 0x30
lbl_fn_80548E74_00001EF8:
    lwz r0, 0xf4(r16)
    cmplw r24, r0
    blt lbl_fn_80548E74_00001DBC
lbl_fn_80548E74_00001F04:
    cmpwi r26, 0x0
    beq lbl_fn_80548E74_00001F14
    li r19, 0x1
    b lbl_fn_80548E74_00001F20
lbl_fn_80548E74_00001F14:
    cmpwi r20, 0x0
    beq lbl_fn_80548E74_00001F20
    li r19, 0x0
lbl_fn_80548E74_00001F20:
    cmpwi r19, 0x0
    bne lbl_fn_80548E74_00001F94
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80548E74_00001F94
    li r4, 0xd8
    bl fn_80370174
    cmpwi r3, 0x1
    bne lbl_fn_80548E74_00001F94
    lwz r0, 0x174(r1)
    cmpwi r0, 0x1
    bne lbl_fn_80548E74_00001F94
    lfs f7, 0x530(r27)
    addi r3, r1, 0x18
    lfs f0, 0x530(r22)
    lfs f9, 0x52c(r27)
    fsubs f10, f7, f0
    lfs f8, 0x52c(r22)
    lfs f7, 0x528(r27)
    lfs f0, 0x528(r22)
    fsubs f8, f9, f8
    fsubs f0, f7, f0
    stfs f8, 0x1c(r1)
    stfs f0, 0x18(r1)
    stfs f10, 0x20(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f31
    bge lbl_fn_80548E74_00001F94
    li r19, 0x1
lbl_fn_80548E74_00001F94:
    cmpwi r19, 0x0
    beq lbl_fn_80548E74_00001FAC
    lwz r0, 0x20(r21)
    ori r0, r0, 0x2
    stw r0, 0x20(r21)
    b lbl_fn_80548E74_00001FB8
lbl_fn_80548E74_00001FAC:
    lwz r0, 0x20(r21)
    rlwinm r0, r0, 0, 31, 29
    stw r0, 0x20(r21)
lbl_fn_80548E74_00001FB8:
    lbz r0, 0x1(r21)
    extsb r3, r0
    cmpw r18, r3
    beq lbl_fn_80548E74_00002050
    subi r0, r3, 0x3
    cmplwi r0, 0x3
    ble lbl_fn_80548E74_00001FE0
    cmpwi r3, 0x1
    beq lbl_fn_80548E74_00002018
    b lbl_fn_80548E74_00002050
lbl_fn_80548E74_00001FE0:
    subi r0, r18, 0x3
    cmplwi r0, 0x3
    ble lbl_fn_80548E74_00002050
    lis r3, lbl_8075E438@ha
    lfs f1, lbl_80887D44
    lwz r4, lbl_8075E438@l(r3)
    addi r3, r1, 0x14
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x14
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_80548E74_00002050
lbl_fn_80548E74_00002018:
    lwz r0, 0x20(r21)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80548E74_00002050
    addi r3, r31, lbl_8075E438@l
    lfs f1, lbl_80887D44
    lwz r4, 0x4(r3)
    addi r3, r1, 0x10
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_80548E74_00002050:
    lbz r0, 0x1(r21)
    extsb r0, r0
    cmpwi r0, 0x1
    beq lbl_fn_80548E74_000020AC
    cmpwi r0, 0x2
    beq lbl_fn_80548E74_000020AC
    lwz r0, 0x180(r1)
    cmpwi r0, 0x0
    bne lbl_fn_80548E74_000020AC
    lwz r0, 0x20(r21)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_80548E74_000020AC
    addi r3, r31, lbl_8075E438@l
    lfs f1, lbl_80887D44
    lwz r4, 0x8(r3)
    addi r3, r1, 0xc
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_80548E74_000020AC:
    lfs f7, 0x530(r27)
    addi r3, r1, 0x54
    lfs f0, 0x530(r22)
    lfs f9, 0x52c(r27)
    fsubs f10, f7, f0
    lfs f8, 0x52c(r22)
    lfs f7, 0x528(r27)
    lfs f0, 0x528(r22)
    fsubs f8, f9, f8
    fsubs f0, f7, f0
    stfs f8, 0x58(r1)
    stfs f0, 0x54(r1)
    stfs f10, 0x5c(r1)
    bl fn_805F9920
    fmr f26, f1
    fcmpo cr0, f1, f28
    ble lbl_fn_80548E74_000020FC
    addi r3, r1, 0x54
    mr r4, r3
    bl fn_805F98D0
lbl_fn_80548E74_000020FC:
    lfs f0, 0x5b0(r27)
    mr r3, r21
    lfs f7, 0x5b0(r22)
    fadds f0, f7, f0
    fadds f25, f27, f0
    bl fn_8011D21C
    lbz r4, 0x0(r21)
    subi r0, r3, 0x1
    cntlzw r0, r0
    li r26, 0x0
    extsb r3, r4
    cmpwi r3, 0x4
    srwi r0, r0, 5
    blt lbl_fn_80548E74_00002140
    cmpwi r3, 0x6
    bgt lbl_fn_80548E74_00002140
    li r26, 0x1
lbl_fn_80548E74_00002140:
    extsb r3, r4
    li r5, 0x0
    cmpwi r3, 0x4
    blt lbl_fn_80548E74_0000215C
    cmpwi r3, 0x5
    bgt lbl_fn_80548E74_0000215C
    li r5, 0x1
lbl_fn_80548E74_0000215C:
    fmuls f0, f25, f25
    fcmpo cr0, f26, f0
    mfcr r3
    lfs f0, 0x14(r21)
    srwi r3, r3, 31
    stb r3, 0x16d(r1)
    fmuls f0, f0, f0
    fcmpo cr0, f26, f0
    mfcr r3
    lwz r6, 0x55c(r27)
    srwi r3, r3, 31
    stb r3, 0x16c(r1)
    lwz r3, 0x8(r1)
    cmpwi r6, 0x6
    li r19, 0x0
    li r18, 0x0
    add r4, r3, r14
    lwz r3, 0x17c(r1)
    addi r4, r4, 0x4c
    slwi r3, r3, 2
    lwzx r3, r4, r3
    clrlwi r20, r3, 31
    bne lbl_fn_80548E74_000021E8
    lwz r3, 0x560(r27)
    cmpwi r3, 0x6
    beq lbl_fn_80548E74_000021CC
    cmpwi r3, 0x7
    bne lbl_fn_80548E74_000021E8
lbl_fn_80548E74_000021CC:
    li r3, 0x1
    stb r3, 0x178(r1)
    li r3, 0x0
    li r20, 0x0
    stb r3, 0x16d(r1)
    li r3, 0x0
    stb r3, 0x16c(r1)
lbl_fn_80548E74_000021E8:
    cmpwi r0, 0x0
    bne lbl_fn_80548E74_000023D0
    lwz r0, 0x14a8(r22)
    rlwinm r0, r0, 0, 6, 4
    stw r0, 0x14a8(r22)
    lwz r0, 0x12a4(r27)
    extrwi. r0, r0, 1, 3
    beq lbl_fn_80548E74_00002218
    cmpwi r20, 0x0
    beq lbl_fn_80548E74_00002218
    li r18, 0x1
    b lbl_fn_80548E74_000023D0
lbl_fn_80548E74_00002218:
    cmpwi r5, 0x0
    bne lbl_fn_80548E74_000023D0
    lwz r0, 0x8(r1)
    li r17, 0x0
    li r25, 0x0
    add r24, r0, r14
    b lbl_fn_80548E74_000023C8
lbl_fn_80548E74_00002234:
    lwz r3, lbl_8087F048
    addis r3, r3, 0x1
    subi r3, r3, 0x3410
    lwzx r16, r3, r25
    lbz r15, 0xd74(r16)
    cmplw r22, r16
    extsb r15, r15
    beq lbl_fn_80548E74_000023BC
    lwz r6, 0x38(r16)
    li r4, 0x0
    li r0, 0x0
    li r3, 0x0
    rlwinm r5, r6, 0, 29, 29
    cmplwi r5, 0x4
    beq lbl_fn_80548E74_00002280
    clrlwi r5, r6, 31
    cmplwi r5, 0x1
    beq lbl_fn_80548E74_00002280
    li r3, 0x1
lbl_fn_80548E74_00002280:
    cmpwi r3, 0x0
    beq lbl_fn_80548E74_0000229C
    lwz r3, 0x7e0(r16)
    rlwinm r3, r3, 0, 26, 26
    cmplwi r3, 0x20
    beq lbl_fn_80548E74_0000229C
    li r0, 0x1
lbl_fn_80548E74_0000229C:
    cmpwi r0, 0x0
    beq lbl_fn_80548E74_000022D0
    lwz r0, 0x55c(r16)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_80548E74_000022C4
    lwz r0, 0x560(r16)
    cmpwi r0, 0x1c
    bne lbl_fn_80548E74_000022C4
    li r3, 0x1
lbl_fn_80548E74_000022C4:
    cmpwi r3, 0x0
    bne lbl_fn_80548E74_000022D0
    li r4, 0x1
lbl_fn_80548E74_000022D0:
    cmpwi r4, 0x0
    beq lbl_fn_80548E74_000023BC
    lwz r0, 0x54c(r16)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    beq lbl_fn_80548E74_000023BC
    mr r3, r16
    mr r4, r22
    li r5, 0x1
    bl fn_8016F3D0
    cmpwi r3, 0x0
    beq lbl_fn_80548E74_000023BC
    lwz r0, 0xd18(r16)
    cmpwi r0, 0x0
    ble lbl_fn_80548E74_000023BC
    lfs f0, 0x1c(r21)
    fcmpo cr0, f0, f28
    ble lbl_fn_80548E74_00002384
    addi r3, r16, 0xd74
    bl fn_8011D1FC
    cmpwi r3, 0x0
    beq lbl_fn_80548E74_000023BC
    cmpwi r15, 0x2
    beq lbl_fn_80548E74_000023BC
    cmpwi r15, 0x3
    beq lbl_fn_80548E74_000023BC
    cmpwi r15, 0x1
    bne lbl_fn_80548E74_00002354
    lwz r0, 0x4c(r24)
    cmpwi r0, 0x0
    beq lbl_fn_80548E74_00002354
    li r19, 0x1
    b lbl_fn_80548E74_000023D0
lbl_fn_80548E74_00002354:
    cmpwi r26, 0x0
    bne lbl_fn_80548E74_000023BC
    cmpwi r15, 0x4
    blt lbl_fn_80548E74_000023BC
    cmpwi r15, 0x5
    bgt lbl_fn_80548E74_000023BC
    lwz r0, 0x4c(r24)
    clrlwi r0, r0, 31
    cmpwi r0, 0x1
    bne lbl_fn_80548E74_000023BC
    li r19, 0x1
    b lbl_fn_80548E74_000023D0
lbl_fn_80548E74_00002384:
    addi r3, r16, 0xd74
    bl fn_8011D1FC
    cmpwi r3, 0x0
    beq lbl_fn_80548E74_000023BC
    cmpwi r15, 0x1
    bne lbl_fn_80548E74_000023BC
    cmpwi r26, 0x0
    bne lbl_fn_80548E74_000023BC
    lwz r0, 0x4c(r24)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x2
    bne lbl_fn_80548E74_000023BC
    li r19, 0x1
    b lbl_fn_80548E74_000023D0
lbl_fn_80548E74_000023BC:
    addi r25, r25, 0x934
    addi r24, r24, 0x4
    addi r17, r17, 0x1
lbl_fn_80548E74_000023C8:
    cmpw r17, r23
    blt lbl_fn_80548E74_00002234
lbl_fn_80548E74_000023D0:
    lbz r0, 0x16c(r1)
    cmpwi r0, 0x0
    beq lbl_fn_80548E74_000023E8
    lbz r0, 0x178(r1)
    cmpwi r0, 0x0
    beq lbl_fn_80548E74_000023F4
lbl_fn_80548E74_000023E8:
    lbz r0, 0x16d(r1)
    cmpwi r0, 0x0
    beq lbl_fn_80548E74_000023F8
lbl_fn_80548E74_000023F4:
    li r18, 0x1
lbl_fn_80548E74_000023F8:
    lbz r0, 0x0(r21)
    extsb r0, r0
    cmpwi r0, 0x2
    beq lbl_fn_80548E74_00002434
    cmpwi r0, 0x3
    beq lbl_fn_80548E74_00002458
    cmpwi r0, 0x4
    beq lbl_fn_80548E74_000024B0
    cmpwi r0, 0x5
    beq lbl_fn_80548E74_0000252C
    cmpwi r0, 0x6
    beq lbl_fn_80548E74_0000255C
    cmpwi r0, 0x1
    beq lbl_fn_80548E74_000025A8
    b lbl_fn_80548E74_000025B4
lbl_fn_80548E74_00002434:
    cmpwi r20, 0x0
    bne lbl_fn_80548E74_00002444
    cmpwi r19, 0x0
    beq lbl_fn_80548E74_000025B4
lbl_fn_80548E74_00002444:
    mr r3, r21
    mr r4, r22
    li r5, 0x3
    bl fn_8011CD84
    b lbl_fn_80548E74_000025B4
lbl_fn_80548E74_00002458:
    cmpwi r19, 0x0
    beq lbl_fn_80548E74_00002474
    mr r3, r21
    mr r4, r22
    li r5, 0x4
    bl fn_8011CD84
    b lbl_fn_80548E74_000025B4
lbl_fn_80548E74_00002474:
    cmpwi r20, 0x0
    bne lbl_fn_80548E74_00002490
    mr r3, r21
    mr r4, r22
    li r5, 0x2
    bl fn_8011CD84
    b lbl_fn_80548E74_000025B4
lbl_fn_80548E74_00002490:
    lha r3, 0x2(r21)
    addi r0, r3, 0x1
    sth r0, 0x2(r21)
    extsh r0, r0
    cmpwi r0, 0x96
    ble lbl_fn_80548E74_000025B4
    li r18, 0x1
    b lbl_fn_80548E74_000025B4
lbl_fn_80548E74_000024B0:
    cmpwi cr1, r20, 0x0
    beq cr1, lbl_fn_80548E74_000024C0
    li r18, 0x1
    b lbl_fn_80548E74_000025B4
lbl_fn_80548E74_000024C0:
    lwz r0, 0x105c(r22)
    cmpwi r0, 0x0
    beq lbl_fn_80548E74_000024E0
    mr r3, r21
    mr r4, r22
    li r5, 0x5
    bl fn_8011CD84
    b lbl_fn_80548E74_000025B4
lbl_fn_80548E74_000024E0:
    beq cr1, lbl_fn_80548E74_000024F4
    lha r3, 0x2(r21)
    addi r0, r3, 0x1
    sth r0, 0x2(r21)
    b lbl_fn_80548E74_00002518
lbl_fn_80548E74_000024F4:
    lha r3, 0x2(r21)
    cmpwi r3, 0x0
    ble lbl_fn_80548E74_00002518
    subi r3, r3, 0x3
    neg r0, r3
    andc r0, r0, r3
    srawi r0, r0, 31
    and r0, r3, r0
    sth r0, 0x2(r21)
lbl_fn_80548E74_00002518:
    lha r0, 0x2(r21)
    cmpwi r0, 0x96
    ble lbl_fn_80548E74_000025B4
    li r18, 0x1
    b lbl_fn_80548E74_000025B4
lbl_fn_80548E74_0000252C:
    cmpwi r20, 0x0
    beq lbl_fn_80548E74_0000253C
    li r18, 0x1
    b lbl_fn_80548E74_000025B4
lbl_fn_80548E74_0000253C:
    lwz r0, 0x55c(r22)
    cmpwi r0, 0x6
    beq lbl_fn_80548E74_000025B4
    mr r3, r21
    mr r4, r22
    li r5, 0x6
    bl fn_8011CD84
    b lbl_fn_80548E74_000025B4
lbl_fn_80548E74_0000255C:
    cmpwi r19, 0x0
    beq lbl_fn_80548E74_00002578
    mr r3, r21
    mr r4, r22
    li r5, 0x4
    bl fn_8011CD84
    b lbl_fn_80548E74_000025B4
lbl_fn_80548E74_00002578:
    cmpwi r20, 0x0
    beq lbl_fn_80548E74_00002588
    li r18, 0x1
    b lbl_fn_80548E74_000025B4
lbl_fn_80548E74_00002588:
    lwz r0, 0x105c(r22)
    cmpwi r0, 0x0
    beq lbl_fn_80548E74_000025B4
    mr r3, r21
    mr r4, r22
    li r5, 0x2
    bl fn_8011CD84
    b lbl_fn_80548E74_000025B4
lbl_fn_80548E74_000025A8:
    lha r3, 0x4(r21)
    addi r0, r3, 0x1
    sth r0, 0x4(r21)
lbl_fn_80548E74_000025B4:
    lbz r0, 0x0(r21)
    cmpwi r0, 0x1
    beq lbl_fn_80548E74_00002600
    cmpwi r18, 0x0
    beq lbl_fn_80548E74_00002600
    lha r3, 0x4(r21)
    addi r0, r3, 0x1
    sth r0, 0x4(r21)
    extsh r0, r0
    cmpwi r0, 0x2d
    bge lbl_fn_80548E74_000025F0
    lbz r0, 0x16d(r1)
    cmpwi r0, 0x0
    bne lbl_fn_80548E74_000025F0
    b lbl_fn_80548E74_00002600
lbl_fn_80548E74_000025F0:
    mr r3, r21
    mr r4, r22
    li r5, 0x1
    bl fn_8011CD84
lbl_fn_80548E74_00002600:
    lwz r3, 0x170(r1)
    addi r14, r14, 0x120
    addi r3, r3, 0x1
    stw r3, 0x170(r1)
    lwz r3, 0x188(r1)
    addi r3, r3, 0x934
    stw r3, 0x188(r1)
    lwz r3, 0x184(r1)
    addi r3, r3, 0x4
    stw r3, 0x184(r1)
lbl_fn_80548E74_00002628:
    lwz r0, 0x170(r1)
    cmpw r0, r23
    blt lbl_fn_80548E74_00001C10
lbl_fn_80548E74_00002634:
    addi r11, r1, 0x1e0
    psq_l f31, 0x248(r1), 0, 0
    lfd f31, 0x240(r1)
    psq_l f30, 0x238(r1), 0, 0
    lfd f30, 0x230(r1)
    psq_l f29, 0x228(r1), 0, 0
    lfd f29, 0x220(r1)
    psq_l f28, 0x218(r1), 0, 0
    lfd f28, 0x210(r1)
    psq_l f27, 0x208(r1), 0, 0
    lfd f27, 0x200(r1)
    psq_l f26, 0x1f8(r1), 0, 0
    lfd f26, 0x1f0(r1)
    psq_l f25, 0x1e8(r1), 0, 0
    lfd f25, 0x1e0(r1)
    bl _restgpr_14
    lwz r0, 0x254(r1)
    mtlr r0
    addi r1, r1, 0x250
    blr
}
