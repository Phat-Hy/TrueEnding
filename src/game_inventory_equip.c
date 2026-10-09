#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void fn_800185B4(void);
extern void fn_80044E0C(void);
extern void fn_80084320(void);
extern void fn_80097C08(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_801059F8(void);
extern void fn_80105B3C(void);
extern void fn_8011BE54(void);
extern void fn_8011BEB8(void);
extern void fn_8012D180(void);
extern void fn_80134134(void);
extern void fn_80134208(void);
extern void fn_80134270(void);
extern void fn_80134290(void);
extern void fn_801342B0(void);
extern void fn_8013539C(void);
extern void fn_8014C228(void);
extern void fn_8014DEE4(void);
extern void fn_8016E970(void);
extern void fn_8017A9A8(void);
extern void fn_801B0D88(void);
extern void fn_801B11BC(void);
extern void fn_801B151C(void);
extern void fn_801B1F4C(void);
extern void fn_801C041C(void);
extern void fn_80204E04(void);
extern void fn_80208748(void);
extern void fn_80219E6C(void);
extern void fn_8021A8D0(void);
extern void fn_8023A02C(void);
extern void fn_8023A098(void);
extern void fn_80370174(void);
extern void fn_80375254(void);
extern void fn_80684600(void);
extern void fn_80695AD0(void);

/* External data declarations */
extern u8 lbl_80737490[];
extern u8 lbl_807374B8[];
extern u8 lbl_80737A9C[];
extern u8 lbl_80766768[];
extern u8 lbl_8077A720[];

/* Small data declarations */
extern u32 lbl_8087EE68;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_80881964;
extern u32 lbl_8088196C;
extern u32 lbl_80881994;
extern u32 lbl_808819D4;
extern u32 lbl_80881A74;
extern u32 lbl_80881B1C;

/* Function declarations */
void fn_801546F4(void);
void fn_8015487C(void);
void fn_8015495C(void);
void fn_80154C08(void);
void fn_80154E38(void);
void fn_80154EC4(void);
void fn_801551AC(void);
void fn_80155494(void);
void fn_80155790(void);
void fn_80155A88(void);
void fn_80155D70(void);
void fn_80155DAC(void);

asm void fn_801546F4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r29, r3
    bl fn_8015487C
    cmpwi r3, 0x6
    mr r30, r3
    beq lbl_fn_801546F4_00000174
    lwz r0, lbl_8087F430
    cmpwi r0, 0x0
    beq lbl_fn_801546F4_00000174
    lwz r3, 0x60(r29)
    cmpwi r3, 0x0
    beq lbl_fn_801546F4_0000004C
    lwz r3, 0x10(r3)
    bl fn_80208748
    mr r31, r3
    b lbl_fn_801546F4_00000050
lbl_fn_801546F4_0000004C:
    li r31, 0x0
lbl_fn_801546F4_00000050:
    lwz r3, 0x60(r29)
    cmpwi r3, 0x0
    beq lbl_fn_801546F4_0000009C
    lwz r3, 0x10(r3)
    addi r3, r3, 0x8
    bl fn_80684600
    lwz r4, 0x60(r29)
    mulli r27, r3, 0x64
    lwz r3, 0x10(r4)
    addi r3, r3, 0x2
    bl fn_80684600
    lwz r4, 0x60(r29)
    mulli r28, r3, 0x2710
    lwz r3, 0x10(r4)
    addi r3, r3, 0xb
    bl fn_80684600
    add r0, r28, r27
    add r4, r3, r0
    b lbl_fn_801546F4_000000A0
lbl_fn_801546F4_0000009C:
    li r4, 0x0
lbl_fn_801546F4_000000A0:
    cmpwi r31, 0x1
    bne lbl_fn_801546F4_000000C8
    lis r3, 0x68dc
    subi r0, r3, 0x7453
    mulhw r0, r0, r4
    srawi r0, r0, 12
    srwi r3, r0, 31
    add r0, r0, r3
    cmpwi r0, 0x35
    beq lbl_fn_801546F4_00000174
lbl_fn_801546F4_000000C8:
    cmpwi r31, 0x0
    bne lbl_fn_801546F4_000000F0
    lis r3, 0x68dc
    subi r0, r3, 0x7453
    mulhw r0, r0, r4
    srawi r0, r0, 12
    srwi r3, r0, 31
    add r0, r0, r3
    cmpwi r0, 0x8
    beq lbl_fn_801546F4_00000174
lbl_fn_801546F4_000000F0:
    lwz r3, lbl_8087F430
    bl fn_80375254
    cmpwi r3, 0x0
    beq lbl_fn_801546F4_00000174
    slwi r0, r30, 2
    lwz r27, 0xc50(r29)
    add r3, r3, r0
    lwz r4, 0x8(r3)
    mr r3, r27
    stw r4, 0xc54(r29)
    bl fn_80204E04
    stw r3, 0x68(r29)
    mr r3, r29
    bl fn_8015487C
    lis r4, lbl_807374B8@ha
    slwi r0, r3, 2
    addi r4, r4, lbl_807374B8@l
    lwzx r4, r4, r0
    cmpwi r4, 0x0
    ble lbl_fn_801546F4_0000014C
    mr r3, r27
    bl fn_80204E04
    stw r3, 0x70(r29)
lbl_fn_801546F4_0000014C:
    mr r3, r27
    li r4, 0x251d
    bl fn_80204E04
    stw r3, 0x74(r29)
    mr r3, r27
    li r4, 0x2581
    bl fn_80204E04
    stw r3, 0x78(r29)
    mr r3, r29
    bl fn_80154C08
lbl_fn_801546F4_00000174:
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8015487C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r4, 0x5c(r3)
    lbz r0, 0x122(r4)
    extsb r0, r0
    cmpwi r0, 0x4
    beq lbl_fn_8015487C_000001CC
    cmpwi r0, 0x2
    beq lbl_fn_8015487C_000001E4
    cmpwi r0, 0x3
    beq lbl_fn_8015487C_00000248
    b lbl_fn_8015487C_0000024C
lbl_fn_8015487C_000001CC:
    lwz r3, 0x50(r3)
    subis r0, r3, 0x1
    cmplwi r0, 0x8aed
    beq lbl_fn_8015487C_0000024C
    li r31, 0x1
    b lbl_fn_8015487C_0000024C
lbl_fn_8015487C_000001E4:
    lwz r0, 0xaa0(r3)
    li r31, 0x2
    cmpwi r0, 0x0
    beq lbl_fn_8015487C_0000024C
    lwz r3, 0xaa4(r3)
    cmpwi r3, 0x0
    ble lbl_fn_8015487C_00000218
    bl fn_80219E6C
    bl fn_8021A8D0
    cmpwi r3, 0x0
    beq lbl_fn_8015487C_00000218
    li r31, 0x5
    b lbl_fn_8015487C_0000024C
lbl_fn_8015487C_00000218:
    lwz r0, 0xaa0(r30)
    cmplwi r0, 0x2
    blt lbl_fn_8015487C_0000024C
    lwz r3, 0xaac(r30)
    cmpwi r3, 0x0
    ble lbl_fn_8015487C_0000024C
    bl fn_80219E6C
    bl fn_8021A8D0
    cmpwi r3, 0x0
    beq lbl_fn_8015487C_0000024C
    li r31, 0x5
    b lbl_fn_8015487C_0000024C
lbl_fn_8015487C_00000248:
    li r31, 0x3
lbl_fn_8015487C_0000024C:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8015495C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r7
    stw r30, 0x18(r1)
    mr r30, r6
    stw r29, 0x14(r1)
    mr r29, r3
    addi r3, r3, 0xc58
    stw r28, 0x10(r1)
    mr r28, r5
    bl fn_8011BEB8
    cmpwi r28, 0x0
    beq lbl_fn_8015495C_000003EC
    lwz r0, 0x12a4(r29)
    srwi. r0, r0, 31
    beq lbl_fn_8015495C_000003EC
    lwz r0, 0x12a4(r29)
    clrlwi r0, r0, 2
    stw r0, 0x12a4(r29)
    lwz r3, lbl_8087F430
    lwz r4, 0x10d8(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8015495C_00000314
    lwz r3, 0xc38(r29)
    cmpwi r3, 0x0
    ble lbl_fn_8015495C_00000314
    lwz r0, 0xc3c(r29)
    cmpwi r0, 0x0
    ble lbl_fn_8015495C_00000314
    subi r0, r3, 0x1
    lwz r3, 0xb0(r4)
    slwi r0, r0, 6
    li r5, 0x0
    add r3, r3, r0
    stw r5, 0x3c(r3)
    lwz r3, 0xc3c(r29)
    lwz r4, 0xb0(r4)
    subi r0, r3, 0x1
    slwi r0, r0, 6
    add r3, r4, r0
    stw r5, 0x3c(r3)
lbl_fn_8015495C_00000314:
    lwz r4, 0x48(r29)
    cmpwi r4, 0x0
    bne lbl_fn_8015495C_00000348
    lwz r3, lbl_8087F0A8
    lwz r0, 0x278(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8015495C_00000348
    lwz r3, 0x5c(r29)
    lwz r0, 0x11c(r3)
    cmpwi r0, 0x1
    bne lbl_fn_8015495C_00000348
    li r0, 0x1
    b lbl_fn_8015495C_00000368
lbl_fn_8015495C_00000348:
    cmpwi r4, 0x0
    bne lbl_fn_8015495C_00000364
    lwz r0, 0x12a8(r29)
    extrwi. r0, r0, 1, 14
    beq lbl_fn_8015495C_00000364
    li r0, 0x1
    b lbl_fn_8015495C_00000368
lbl_fn_8015495C_00000364:
    li r0, 0x0
lbl_fn_8015495C_00000368:
    cmpwi r0, 0x0
    beq lbl_fn_8015495C_000003EC
    lwz r3, lbl_8087F430
    li r4, 0x25
    bl fn_80370174
    cmpwi r3, 0x1
    blt lbl_fn_8015495C_000003CC
    lwz r3, 0x648(r29)
    cmpwi r3, 0x0
    beq lbl_fn_8015495C_00000398
    li r4, 0x1
    bl fn_80044E0C
lbl_fn_8015495C_00000398:
    lwz r3, 0x64c(r29)
    cmpwi r3, 0x0
    beq lbl_fn_8015495C_000003AC
    li r4, 0x1
    bl fn_80044E0C
lbl_fn_8015495C_000003AC:
    li r0, 0x0
    li r3, -0x1
    stw r3, 0x674(r29)
    mr r3, r29
    stw r0, 0x648(r29)
    stw r0, 0x64c(r29)
    bl fn_8014C228
    b lbl_fn_8015495C_000003EC
lbl_fn_8015495C_000003CC:
    lwz r0, 0x674(r29)
    cmpwi r0, 0x0
    blt lbl_fn_8015495C_000003EC
    mr r3, r29
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8014DEE4
lbl_fn_8015495C_000003EC:
    cmpwi r30, 0x0
    beq lbl_fn_8015495C_0000040C
    lwz r0, 0x12a4(r29)
    extrwi. r0, r0, 1, 26
    beq lbl_fn_8015495C_0000040C
    lwz r0, 0x12a4(r29)
    rlwinm r0, r0, 0, 27, 25
    stw r0, 0x12a4(r29)
lbl_fn_8015495C_0000040C:
    lwz r7, 0xd1c(r29)
    cmpwi r7, 0x0
    beq lbl_fn_8015495C_000004B4
    lwz r0, 0x12a8(r7)
    mr r5, r7
    lwz r6, 0x1028(r7)
    li r4, 0x0
    extrwi r0, r0, 1, 15
    cntlzw r0, r0
    srwi r3, r0, 5
    b lbl_fn_8015495C_00000454
lbl_fn_8015495C_00000438:
    lwz r0, 0xfe8(r5)
    cmplw r0, r29
    bne lbl_fn_8015495C_0000044C
    li r0, 0x1
    b lbl_fn_8015495C_00000470
lbl_fn_8015495C_0000044C:
    addi r5, r5, 0x4
    addi r4, r4, 0x1
lbl_fn_8015495C_00000454:
    cmpwi r3, 0x0
    mr r0, r6
    bne lbl_fn_8015495C_00000464
    slwi r0, r6, 1
lbl_fn_8015495C_00000464:
    cmpw r4, r0
    blt lbl_fn_8015495C_00000438
    li r0, 0x0
lbl_fn_8015495C_00000470:
    cmpwi r0, 0x0
    beq lbl_fn_8015495C_000004B4
    li r0, 0x10
    mr r4, r7
    li r3, 0x0
    mtctr r0
lbl_fn_8015495C_00000488:
    lwz r0, 0xfe8(r4)
    cmplw r0, r29
    bne lbl_fn_8015495C_000004A8
    slwi r0, r3, 2
    li r4, 0x0
    add r3, r7, r0
    stw r4, 0xfe8(r3)
    b lbl_fn_8015495C_000004B4
lbl_fn_8015495C_000004A8:
    addi r4, r4, 0x4
    addi r3, r3, 0x1
    bdnz lbl_fn_8015495C_00000488
lbl_fn_8015495C_000004B4:
    cmpwi r31, 0x0
    beq lbl_fn_8015495C_000004F4
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_8015495C_000004DC
    mr r4, r29
    bl fn_801059F8
    lwz r3, lbl_8087F048
    mr r4, r29
    bl fn_80105B3C
lbl_fn_8015495C_000004DC:
    lwz r0, 0x12a8(r29)
    lfs f0, lbl_8088196C
    rlwinm r0, r0, 0, 24, 22
    stw r0, 0x12a8(r29)
    stfs f0, 0xfb8(r29)
    stfs f0, 0xfbc(r29)
lbl_fn_8015495C_000004F4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80154C08(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x7e0(r3)
    lwz r31, 0x64(r3)
    rlwinm r0, r0, 0, 20, 20
    lwz r4, 0x68(r3)
    cmplwi r0, 0x800
    stw r4, 0x64(r3)
    bne lbl_fn_80154C08_0000055C
    bl fn_8017A9A8
    cmpwi r3, 0x0
    beq lbl_fn_80154C08_0000055C
    lwz r0, 0x70(r30)
    stw r0, 0x64(r30)
lbl_fn_80154C08_0000055C:
    lwz r0, 0x48(r30)
    cmpwi r0, 0x3
    bne lbl_fn_80154C08_00000574
    lwz r0, 0x6c(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80154C08_0000057C
lbl_fn_80154C08_00000574:
    li r0, 0x0
    b lbl_fn_80154C08_000005A8
lbl_fn_80154C08_0000057C:
    lwz r3, lbl_8087EE68
    cmpwi r3, 0x0
    beq lbl_fn_80154C08_00000598
    mr r4, r30
    li r5, 0x0
    bl fn_800185B4
    b lbl_fn_80154C08_0000059C
lbl_fn_80154C08_00000598:
    li r3, 0x0
lbl_fn_80154C08_0000059C:
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
lbl_fn_80154C08_000005A8:
    cmpwi r0, 0x0
    beq lbl_fn_80154C08_000005B8
    lwz r0, 0x6c(r30)
    stw r0, 0x64(r30)
lbl_fn_80154C08_000005B8:
    addi r3, r30, 0x7d4
    bl fn_80134208
    cmpwi r3, 0x0
    bne lbl_fn_80154C08_00000610
    addi r3, r30, 0x7d4
    bl fn_80134270
    cmpwi r3, 0x0
    bne lbl_fn_80154C08_000005F8
    addi r3, r30, 0x7d4
    bl fn_80134290
    cmpwi r3, 0x0
    bne lbl_fn_80154C08_000005F8
    addi r3, r30, 0x7d4
    bl fn_801342B0
    cmpwi r3, 0x0
    beq lbl_fn_80154C08_00000610
lbl_fn_80154C08_000005F8:
    lwz r0, 0x7e0(r30)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_80154C08_00000610
    lwz r0, 0x74(r30)
    stw r0, 0x64(r30)
lbl_fn_80154C08_00000610:
    lwz r4, 0xf10(r30)
    cmpwi r4, 0x0
    ble lbl_fn_80154C08_0000062C
    lwz r3, 0x78(r30)
    subi r0, r4, 0x1
    stw r3, 0x64(r30)
    stw r0, 0xf10(r30)
lbl_fn_80154C08_0000062C:
    lwz r0, 0x64(r30)
    cmplw r0, r31
    beq lbl_fn_80154C08_0000072C
    addi r3, r30, 0xc58
    bl fn_8011BE54
    addi r3, r30, 0xc58
    li r4, 0x0
    bl fn_8011BEB8
    lwz r7, 0xd1c(r30)
    cmpwi r7, 0x0
    beq lbl_fn_80154C08_000006F4
    lwz r0, 0x12a8(r7)
    mr r5, r7
    lwz r6, 0x1028(r7)
    li r4, 0x0
    extrwi r0, r0, 1, 15
    cntlzw r0, r0
    srwi r3, r0, 5
    b lbl_fn_80154C08_00000694
lbl_fn_80154C08_00000678:
    lwz r0, 0xfe8(r5)
    cmplw r0, r30
    bne lbl_fn_80154C08_0000068C
    li r0, 0x1
    b lbl_fn_80154C08_000006B0
lbl_fn_80154C08_0000068C:
    addi r5, r5, 0x4
    addi r4, r4, 0x1
lbl_fn_80154C08_00000694:
    cmpwi r3, 0x0
    mr r0, r6
    bne lbl_fn_80154C08_000006A4
    slwi r0, r6, 1
lbl_fn_80154C08_000006A4:
    cmpw r4, r0
    blt lbl_fn_80154C08_00000678
    li r0, 0x0
lbl_fn_80154C08_000006B0:
    cmpwi r0, 0x0
    beq lbl_fn_80154C08_000006F4
    li r0, 0x10
    mr r4, r7
    li r3, 0x0
    mtctr r0
lbl_fn_80154C08_000006C8:
    lwz r0, 0xfe8(r4)
    cmplw r0, r30
    bne lbl_fn_80154C08_000006E8
    slwi r0, r3, 2
    li r4, 0x0
    add r3, r7, r0
    stw r4, 0xfe8(r3)
    b lbl_fn_80154C08_000006F4
lbl_fn_80154C08_000006E8:
    addi r4, r4, 0x4
    addi r3, r3, 0x1
    bdnz lbl_fn_80154C08_000006C8
lbl_fn_80154C08_000006F4:
    lwz r3, 0x64(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80154C08_00000714
    lwz r0, 0x88(r3)
    stw r0, 0xd6c(r30)
    lwz r0, 0x8c(r3)
    stw r0, 0xd70(r30)
    b lbl_fn_80154C08_00000724
lbl_fn_80154C08_00000714:
    li r3, 0x1
    li r0, 0x0
    stw r3, 0xd6c(r30)
    stw r0, 0xd70(r30)
lbl_fn_80154C08_00000724:
    addi r3, r30, 0x7d4
    bl fn_8012D180
lbl_fn_80154C08_0000072C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80154E38(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_fn_80154E38_00000774
    cmplw r3, r4
    bne lbl_fn_80154E38_00000774
    li r3, 0x0
    b lbl_fn_80154E38_000007B8
lbl_fn_80154E38_00000774:
    lwz r4, lbl_8087F0A8
    li r31, 0x0
    lwz r0, 0xcc(r4)
    cmpwi r0, 0x0
    bne lbl_fn_80154E38_000007B0
    li r4, 0x6
    addi r3, r3, 0x7d4
    bl fn_80134134
    cmpwi r3, 0x0
    bne lbl_fn_80154E38_000007B0
    lwz r0, 0x7e0(r30)
    rlwinm r3, r0, 0, 10, 10
    subis r0, r3, 0x20
    cmplwi r0, 0x0
    bne lbl_fn_80154E38_000007B4
lbl_fn_80154E38_000007B0:
    li r31, 0x1
lbl_fn_80154E38_000007B4:
    mr r3, r31
lbl_fn_80154E38_000007B8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80154EC4(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    lis r6, lbl_80737A9C@ha
    li r7, 0x0
    stw r0, 0x74(r1)
    addi r6, r6, lbl_80737A9C@l
    stmw r27, 0x5c(r1)
    lis r31, lbl_8077A720@ha
    mr r28, r5
    addi r5, r6, 0x24
    mr r29, r3
    mr r27, r4
    addi r31, r31, lbl_8077A720@l
    mr r6, r5
    li r3, 0x1c
    li r4, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_80154EC4_00000834
    mr r4, r29
    mr r5, r27
    mr r6, r28
    bl fn_801B11BC
    mr r30, r3
lbl_fn_80154EC4_00000834:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80154EC4_000008C4
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80154EC4_0000086C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_80154EC4_00000888
lbl_fn_80154EC4_0000086C:
    addi r3, r31, 0x864
    lwz r5, 0x864(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
lbl_fn_80154EC4_00000888:
    lwz r5, 0x2c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80154EC4_000008C4
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80154EC4_000008C4:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_80154EC4_00000A78
    cmpwi r0, 0x8
    beq lbl_fn_80154EC4_000008DC
    stw r0, 0x564(r29)
lbl_fn_80154EC4_000008DC:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80154EC4_00000A78
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80154EC4_00000914
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x38(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
    b lbl_fn_80154EC4_00000930
lbl_fn_80154EC4_00000914:
    addi r3, r31, 0x870
    lwz r5, 0x870(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
lbl_fn_80154EC4_00000930:
    lwz r5, 0x38(r1)
    addi r3, r1, 0x20
    lwz r4, 0x3c(r1)
    lwz r0, 0x40(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80154EC4_0000096C
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80154EC4_0000096C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_80154EC4_00000A48
    cmpwi r0, 0x8
    beq lbl_fn_80154EC4_00000984
    stw r0, 0x564(r29)
lbl_fn_80154EC4_00000984:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80154EC4_00000A48
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80154EC4_000009BC
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x44(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    b lbl_fn_80154EC4_000009D8
lbl_fn_80154EC4_000009BC:
    addi r3, r31, 0x87c
    lwz r5, 0x87c(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
lbl_fn_80154EC4_000009D8:
    lwz r5, 0x44(r1)
    addi r3, r1, 0x14
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80154EC4_00000A14
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80154EC4_00000A14:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_80154EC4_00000A48
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80154EC4_00000A48:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_80154EC4_00000A78
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80154EC4_00000A78:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_80154EC4_00000AA4
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80154EC4_00000AA4:
    lmw r27, 0x5c(r1)
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_801551AC(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    lis r4, lbl_80737A9C@ha
    li r7, 0x0
    stw r0, 0x64(r1)
    addi r4, r4, lbl_80737A9C@l
    addi r5, r4, 0x24
    stw r31, 0x5c(r1)
    lis r31, lbl_8077A720@ha
    addi r31, r31, lbl_8077A720@l
    mr r6, r5
    stw r30, 0x58(r1)
    li r4, 0x0
    stw r29, 0x54(r1)
    mr r29, r3
    li r3, 0x18
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_801551AC_00000B14
    mr r4, r29
    bl fn_801B151C
    mr r30, r3
lbl_fn_801551AC_00000B14:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_801551AC_00000BA4
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_801551AC_00000B4C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_801551AC_00000B68
lbl_fn_801551AC_00000B4C:
    addi r3, r31, 0x888
    lwz r5, 0x888(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
lbl_fn_801551AC_00000B68:
    lwz r5, 0x2c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801551AC_00000BA4
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801551AC_00000BA4:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_801551AC_00000D58
    cmpwi r0, 0x8
    beq lbl_fn_801551AC_00000BBC
    stw r0, 0x564(r29)
lbl_fn_801551AC_00000BBC:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_801551AC_00000D58
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_801551AC_00000BF4
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x38(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
    b lbl_fn_801551AC_00000C10
lbl_fn_801551AC_00000BF4:
    addi r3, r31, 0x894
    lwz r5, 0x894(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
lbl_fn_801551AC_00000C10:
    lwz r5, 0x38(r1)
    addi r3, r1, 0x20
    lwz r4, 0x3c(r1)
    lwz r0, 0x40(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801551AC_00000C4C
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801551AC_00000C4C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_801551AC_00000D28
    cmpwi r0, 0x8
    beq lbl_fn_801551AC_00000C64
    stw r0, 0x564(r29)
lbl_fn_801551AC_00000C64:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_801551AC_00000D28
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_801551AC_00000C9C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x44(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    b lbl_fn_801551AC_00000CB8
lbl_fn_801551AC_00000C9C:
    addi r3, r31, 0x8a0
    lwz r5, 0x8a0(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
lbl_fn_801551AC_00000CB8:
    lwz r5, 0x44(r1)
    addi r3, r1, 0x14
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801551AC_00000CF4
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801551AC_00000CF4:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_801551AC_00000D28
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_801551AC_00000D28:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_801551AC_00000D58
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_801551AC_00000D58:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_801551AC_00000D84
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_801551AC_00000D84:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80155494(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    lis r5, lbl_80737A9C@ha
    li r7, 0x0
    stw r0, 0x64(r1)
    addi r5, r5, lbl_80737A9C@l
    addi r5, r5, 0x24
    stw r31, 0x5c(r1)
    lis r31, lbl_8077A720@ha
    mr r6, r5
    stw r30, 0x58(r1)
    addi r31, r31, lbl_8077A720@l
    stw r29, 0x54(r1)
    mr r29, r3
    li r3, 0x30
    stw r28, 0x50(r1)
    mr r28, r4
    li r4, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_80155494_00000E0C
    lfs f1, lbl_80881964
    mr r4, r29
    mr r5, r28
    bl fn_801C041C
    mr r30, r3
lbl_fn_80155494_00000E0C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80155494_00000E9C
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80155494_00000E44
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_80155494_00000E60
lbl_fn_80155494_00000E44:
    addi r3, r31, 0x8ac
    lwz r5, 0x8ac(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
lbl_fn_80155494_00000E60:
    lwz r5, 0x2c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80155494_00000E9C
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80155494_00000E9C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_80155494_00001050
    cmpwi r0, 0x8
    beq lbl_fn_80155494_00000EB4
    stw r0, 0x564(r29)
lbl_fn_80155494_00000EB4:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80155494_00001050
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80155494_00000EEC
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x38(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
    b lbl_fn_80155494_00000F08
lbl_fn_80155494_00000EEC:
    addi r3, r31, 0x8b8
    lwz r5, 0x8b8(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
lbl_fn_80155494_00000F08:
    lwz r5, 0x38(r1)
    addi r3, r1, 0x20
    lwz r4, 0x3c(r1)
    lwz r0, 0x40(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80155494_00000F44
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80155494_00000F44:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_80155494_00001020
    cmpwi r0, 0x8
    beq lbl_fn_80155494_00000F5C
    stw r0, 0x564(r29)
lbl_fn_80155494_00000F5C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80155494_00001020
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80155494_00000F94
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x44(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    b lbl_fn_80155494_00000FB0
lbl_fn_80155494_00000F94:
    addi r3, r31, 0x8c4
    lwz r5, 0x8c4(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
lbl_fn_80155494_00000FB0:
    lwz r5, 0x44(r1)
    addi r3, r1, 0x14
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80155494_00000FEC
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80155494_00000FEC:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_80155494_00001020
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80155494_00001020:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_80155494_00001050
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80155494_00001050:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_80155494_0000107C
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80155494_0000107C:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    lwz r28, 0x50(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80155790(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    lis r5, lbl_80737A9C@ha
    li r7, 0x0
    stw r0, 0x64(r1)
    addi r5, r5, lbl_80737A9C@l
    addi r5, r5, 0x24
    stw r31, 0x5c(r1)
    lis r31, lbl_8077A720@ha
    mr r6, r5
    stw r30, 0x58(r1)
    addi r31, r31, lbl_8077A720@l
    stw r29, 0x54(r1)
    mr r29, r3
    li r3, 0x20
    stw r28, 0x50(r1)
    mr r28, r4
    li r4, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_80155790_00001104
    mr r4, r29
    mr r5, r28
    bl fn_801B0D88
    mr r30, r3
lbl_fn_80155790_00001104:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80155790_00001194
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80155790_0000113C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_80155790_00001158
lbl_fn_80155790_0000113C:
    addi r3, r31, 0x8f4
    lwz r5, 0x8f4(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
lbl_fn_80155790_00001158:
    lwz r5, 0x2c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80155790_00001194
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80155790_00001194:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_80155790_00001348
    cmpwi r0, 0x8
    beq lbl_fn_80155790_000011AC
    stw r0, 0x564(r29)
lbl_fn_80155790_000011AC:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80155790_00001348
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80155790_000011E4
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x38(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
    b lbl_fn_80155790_00001200
lbl_fn_80155790_000011E4:
    addi r3, r31, 0x900
    lwz r5, 0x900(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
lbl_fn_80155790_00001200:
    lwz r5, 0x38(r1)
    addi r3, r1, 0x20
    lwz r4, 0x3c(r1)
    lwz r0, 0x40(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80155790_0000123C
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80155790_0000123C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_80155790_00001318
    cmpwi r0, 0x8
    beq lbl_fn_80155790_00001254
    stw r0, 0x564(r29)
lbl_fn_80155790_00001254:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80155790_00001318
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80155790_0000128C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x44(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    b lbl_fn_80155790_000012A8
lbl_fn_80155790_0000128C:
    addi r3, r31, 0x90c
    lwz r5, 0x90c(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
lbl_fn_80155790_000012A8:
    lwz r5, 0x44(r1)
    addi r3, r1, 0x14
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80155790_000012E4
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80155790_000012E4:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_80155790_00001318
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80155790_00001318:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_80155790_00001348
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80155790_00001348:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_80155790_00001374
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80155790_00001374:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    lwz r28, 0x50(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80155A88(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    lis r6, lbl_80737A9C@ha
    li r7, 0x0
    stw r0, 0x74(r1)
    addi r6, r6, lbl_80737A9C@l
    stmw r27, 0x5c(r1)
    lis r31, lbl_8077A720@ha
    mr r28, r5
    addi r5, r6, 0x24
    mr r29, r3
    mr r27, r4
    addi r31, r31, lbl_8077A720@l
    mr r6, r5
    li r3, 0x24
    li r4, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_80155A88_000013F8
    mr r4, r29
    mr r5, r27
    mr r6, r28
    bl fn_801B1F4C
    mr r30, r3
lbl_fn_80155A88_000013F8:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80155A88_00001488
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80155A88_00001430
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_80155A88_0000144C
lbl_fn_80155A88_00001430:
    addi r3, r31, 0x918
    lwz r5, 0x918(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
lbl_fn_80155A88_0000144C:
    lwz r5, 0x2c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80155A88_00001488
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80155A88_00001488:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_80155A88_0000163C
    cmpwi r0, 0x8
    beq lbl_fn_80155A88_000014A0
    stw r0, 0x564(r29)
lbl_fn_80155A88_000014A0:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80155A88_0000163C
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80155A88_000014D8
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x38(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
    b lbl_fn_80155A88_000014F4
lbl_fn_80155A88_000014D8:
    addi r3, r31, 0x924
    lwz r5, 0x924(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
lbl_fn_80155A88_000014F4:
    lwz r5, 0x38(r1)
    addi r3, r1, 0x20
    lwz r4, 0x3c(r1)
    lwz r0, 0x40(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80155A88_00001530
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80155A88_00001530:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_80155A88_0000160C
    cmpwi r0, 0x8
    beq lbl_fn_80155A88_00001548
    stw r0, 0x564(r29)
lbl_fn_80155A88_00001548:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80155A88_0000160C
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80155A88_00001580
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x44(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    b lbl_fn_80155A88_0000159C
lbl_fn_80155A88_00001580:
    addi r3, r31, 0x930
    lwz r5, 0x930(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
lbl_fn_80155A88_0000159C:
    lwz r5, 0x44(r1)
    addi r3, r1, 0x14
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80155A88_000015D8
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80155A88_000015D8:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_80155A88_0000160C
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80155A88_0000160C:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_80155A88_0000163C
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80155A88_0000163C:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_80155A88_00001668
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80155A88_00001668:
    lmw r27, 0x5c(r1)
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_80155D70(void)
{
    nofralloc
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_80155D70_000016B0
    lwz r0, 0x560(r3)
    cmpwi r0, 0x2
    bne lbl_fn_80155D70_000016B0
    lfs f1, 0x2e4(r3)
    lfs f0, lbl_808819D4
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_80155D70_000016B0
    li r3, 0x1
    blr
lbl_fn_80155D70_000016B0:
    li r3, 0x0
    blr
}

asm void fn_80155DAC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    lwz r5, 0x12a4(r3)
    extrwi. r0, r5, 1, 29
    beq lbl_fn_80155DAC_000016E4
    extrwi r0, r5, 1, 25
    cmplw r0, r4
    beq lbl_fn_80155DAC_00001A18
lbl_fn_80155DAC_000016E4:
    lwz r5, 0x12a8(r3)
    lwz r0, 0x12a4(r3)
    extrwi r5, r5, 1, 29
    or r4, r4, r5
    rlwimi r0, r4, 6, 25, 25
    stw r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 25
    beq lbl_fn_80155DAC_0000192C
    lwz r4, 0x50(r3)
    subis r0, r4, 0xa
    cmplwi r0, 0xae76
    bne lbl_fn_80155DAC_0000175C
    lfs f0, lbl_80881964
    li r0, 0x1
    stw r0, 0x3fc(r3)
    li r4, 0x0
    lwz r5, 0x494(r3)
    li r6, 0x0
    stfs f0, 0x2fc(r3)
    li r7, 0x0
    lfs f1, lbl_8088196C
    li r8, 0x1
    lfs f2, lbl_80881994
    addi r3, r3, 0xb0
    bl fn_80097C08
    lfs f1, lbl_8088196C
    lfs f0, lbl_80881A74
    stfs f1, 0x2e8(r31)
    stfs f0, 0x2e4(r31)
    b lbl_fn_80155DAC_00001914
lbl_fn_80155DAC_0000175C:
    cmplwi r0, 0xae77
    bne lbl_fn_80155DAC_000017AC
    lfs f0, lbl_80881964
    li r0, 0x1
    stw r0, 0x3fc(r3)
    li r4, 0x0
    lwz r5, 0x494(r3)
    li r6, 0x0
    stfs f0, 0x2fc(r3)
    li r7, 0x0
    lfs f1, lbl_8088196C
    li r8, 0x1
    lfs f2, lbl_80881994
    addi r3, r3, 0xb0
    bl fn_80097C08
    lfs f1, lbl_8088196C
    lfs f0, lbl_80881B1C
    stfs f1, 0x2e8(r31)
    stfs f0, 0x2e4(r31)
    b lbl_fn_80155DAC_00001914
lbl_fn_80155DAC_000017AC:
    lwz r5, 0x48(r3)
    cmpwi r5, 0x0
    bne lbl_fn_80155DAC_000017E0
    lwz r4, lbl_8087F0A8
    lwz r0, 0x278(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80155DAC_000017E0
    lwz r4, 0x5c(r3)
    lwz r0, 0x11c(r4)
    cmpwi r0, 0x1
    bne lbl_fn_80155DAC_000017E0
    li r0, 0x1
    b lbl_fn_80155DAC_00001800
lbl_fn_80155DAC_000017E0:
    cmpwi r5, 0x0
    bne lbl_fn_80155DAC_000017FC
    lwz r0, 0x12a8(r3)
    extrwi. r0, r0, 1, 14
    beq lbl_fn_80155DAC_000017FC
    li r0, 0x1
    b lbl_fn_80155DAC_00001800
lbl_fn_80155DAC_000017FC:
    li r0, 0x0
lbl_fn_80155DAC_00001800:
    cmpwi r0, 0x0
    beq lbl_fn_80155DAC_0000188C
    lwz r0, 0x674(r3)
    cmpwi r0, 0x0
    bge lbl_fn_80155DAC_00001848
    lwz r3, lbl_8087F430
    li r4, 0x25
    bl fn_80370174
    cmpwi r3, 0x1
    beq lbl_fn_80155DAC_00001848
    lwz r3, lbl_8087F430
    li r4, 0x25
    bl fn_80370174
    cmpwi r3, 0x2
    bne lbl_fn_80155DAC_0000188C
    bl fn_8013539C
    cmpwi r3, 0x0
    beq lbl_fn_80155DAC_0000188C
lbl_fn_80155DAC_00001848:
    mr r3, r31
    li r4, 0x1
    li r5, 0x0
    li r6, 0x0
    bl fn_8014DEE4
    lis r4, lbl_80737490@ha
    lfs f1, lbl_80881964
    addi r4, r4, lbl_80737490@l
    addi r3, r1, 0x8
    lwz r4, 0x10(r4)
    addi r5, r31, 0x528
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_80155DAC_0000188C:
    lwz r0, 0x674(r31)
    cmpwi r0, 0x0
    blt lbl_fn_80155DAC_000018D8
    lfs f0, lbl_80881964
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lwz r5, 0x494(r31)
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r6, 0x1
    lfs f1, lbl_8088196C
    li r7, 0x0
    lfs f2, lbl_80881994
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80881964
    stfs f0, 0x2e8(r31)
    b lbl_fn_80155DAC_00001914
lbl_fn_80155DAC_000018D8:
    lfs f0, lbl_80881964
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lwz r5, 0x484(r31)
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r6, 0x1
    lfs f1, lbl_8088196C
    li r7, 0x0
    lfs f2, lbl_80881994
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80881964
    stfs f0, 0x2e8(r31)
lbl_fn_80155DAC_00001914:
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x4
    li r6, 0x20
    bl fn_8023A02C
    b lbl_fn_80155DAC_00001A18
lbl_fn_80155DAC_0000192C:
    lwz r5, 0x48(r3)
    cmpwi r5, 0x0
    bne lbl_fn_80155DAC_00001960
    lwz r4, lbl_8087F0A8
    lwz r0, 0x278(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80155DAC_00001960
    lwz r4, 0x5c(r3)
    lwz r0, 0x11c(r4)
    cmpwi r0, 0x1
    bne lbl_fn_80155DAC_00001960
    li r0, 0x1
    b lbl_fn_80155DAC_00001980
lbl_fn_80155DAC_00001960:
    cmpwi r5, 0x0
    bne lbl_fn_80155DAC_0000197C
    lwz r0, 0x12a8(r3)
    extrwi. r0, r0, 1, 14
    beq lbl_fn_80155DAC_0000197C
    li r0, 0x1
    b lbl_fn_80155DAC_00001980
lbl_fn_80155DAC_0000197C:
    li r0, 0x0
lbl_fn_80155DAC_00001980:
    cmpwi r0, 0x0
    beq lbl_fn_80155DAC_00001A04
    lwz r3, lbl_8087F430
    li r4, 0x25
    bl fn_80370174
    cmpwi r3, 0x1
    blt lbl_fn_80155DAC_000019E4
    lwz r3, 0x648(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80155DAC_000019B0
    li r4, 0x1
    bl fn_80044E0C
lbl_fn_80155DAC_000019B0:
    lwz r3, 0x64c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80155DAC_000019C4
    li r4, 0x1
    bl fn_80044E0C
lbl_fn_80155DAC_000019C4:
    li r0, 0x0
    li r3, -0x1
    stw r3, 0x674(r31)
    mr r3, r31
    stw r0, 0x648(r31)
    stw r0, 0x64c(r31)
    bl fn_8014C228
    b lbl_fn_80155DAC_00001A04
lbl_fn_80155DAC_000019E4:
    lwz r0, 0x674(r31)
    cmpwi r0, 0x0
    blt lbl_fn_80155DAC_00001A04
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8014DEE4
lbl_fn_80155DAC_00001A04:
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x4
    li r6, 0x20
    bl fn_8023A098
lbl_fn_80155DAC_00001A18:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
