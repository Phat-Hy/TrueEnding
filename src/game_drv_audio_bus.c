#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_21(void);
extern void _savegpr_21(void);
extern void dtor_80084684(void);
extern void fn_80014798(void);
extern void fn_80060D58(void);
extern void fn_800616C0(void);
extern void fn_800638B0(void);
extern void fn_8006CA80(void);
extern void fn_80084320(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_80087994(void);
extern void fn_8008937C(void);
extern void fn_800897D8(void);
extern void fn_800A555C(void);
extern void fn_800D1D3C(void);
extern void fn_800D1E9C(void);
extern void fn_8011F91C(void);
extern void fn_8011FC10(void);
extern void fn_8011FE3C(void);
extern void fn_80473E74(void);
extern void fn_80473E8C(void);
extern void fn_805AE270(void);
extern void fn_805AE3C8(void);
extern void fn_805AE458(void);
extern void fn_805AE5EC(void);
extern void fn_805AE750(void);
extern void fn_805AE7B8(void);
extern void fn_805AEA74(void);
extern void fn_805AEAC4(void);
extern void fn_805B202C(void);
extern void fn_805B2564(void);
extern void fn_80695720(void);
extern void fn_806958E0(void);
extern void fn_806959D8(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 lbl_80763CD8[];
extern u8 lbl_80763D00[];
extern u8 lbl_8078FBB0[];
extern u8 lbl_80797790[];

/* Small data declarations */
extern u32 lbl_8087E6F0;
extern u32 lbl_8087E6F4;
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EF10;
extern u32 lbl_8087EF70;
extern u32 lbl_8087F408;
extern u32 lbl_8087F430;
extern u32 lbl_8087F890;
extern u32 lbl_8087F8A0;
extern u32 lbl_8087FA00;
extern u32 lbl_8087FA04;
extern u32 lbl_80888390;
extern u32 lbl_80888394;
extern u32 lbl_80888398;
extern u32 lbl_8088839C;
extern u32 lbl_808883A0;
extern u32 lbl_808883A4;
extern u32 lbl_808883A8;
extern u32 lbl_808883AC;
extern u32 lbl_808883B0;
extern u32 lbl_808883B4;
extern u32 lbl_808883B8;
extern u32 lbl_808883BC;

/* Function declarations */
void fn_805B33BC(void);
void fn_805B3424(void);
void fn_805B342C(void);
void fn_805B3518(void);
void fn_805B3658(void);
void fn_805B37FC(void);
void fn_805B3860(void);
void fn_805B38A0(void);
void fn_805B38B8(void);
void fn_805B3A6C(void);
void fn_805B3C20(void);
void fn_805B3CE0(void);
void fn_805B3E68(void);
void fn_805B3F24(void);
void fn_805B3FD4(void);
void fn_805B40F8(void);
void fn_805B41A8(void);
void fn_805B4D94(void);

asm void fn_805B33BC(void)
{
    nofralloc
    li r8, 0x0
    stw r8, 0x0(r5)
    li r0, 0x1
    addi r9, r3, 0x4
    lwz r10, 0x4(r3)
    stb r0, 0x0(r6)
    stb r0, 0x0(r7)
    b lbl_fn_805B33BC_00000058
lbl_fn_805B33BC_00000020:
    lfs f1, 0x0(r4)
    mr r9, r10
    lfs f0, 0xc(r10)
    fcmpo cr0, f1, f0
    mfcr r3
    srwi. r3, r3, 31
    beq lbl_fn_805B33BC_00000048
    lwz r10, 0x0(r10)
    stb r0, 0x0(r6)
    b lbl_fn_805B33BC_00000058
lbl_fn_805B33BC_00000048:
    stw r10, 0x0(r5)
    lwz r10, 0x4(r10)
    stb r8, 0x0(r6)
    stb r8, 0x0(r7)
lbl_fn_805B33BC_00000058:
    cmpwi r10, 0x0
    bne lbl_fn_805B33BC_00000020
    mr r3, r9
    blr
}

asm void fn_805B3424(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_805B342C(void)
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
    beq lbl_fn_805B342C_00000140
    li r0, 0x0
    lis r4, fn_80014798@ha
    stw r0, lbl_8087FA00
    addi r4, r4, fn_80014798@l
    li r5, 0x8
    li r6, 0x3
    addi r3, r3, 0x80
    bl fn_806959D8
    addic. r3, r30, 0x78
    beq lbl_fn_805B342C_000000C4
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_805B342C_000000C4:
    addic. r3, r30, 0x70
    beq lbl_fn_805B342C_000000D4
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_805B342C_000000D4:
    addic. r0, r30, 0x64
    beq lbl_fn_805B342C_000000F8
    lwz r4, 0x64(r30)
    cmpwi r4, 0x0
    beq lbl_fn_805B342C_000000F8
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_805B342C_000000F8
    bl fn_800897D8
lbl_fn_805B342C_000000F8:
    addic. r0, r30, 0x48
    beq lbl_fn_805B342C_00000124
    lwz r3, 0x4c(r30)
    cmpwi r3, 0x0
    beq lbl_fn_805B342C_00000118
    beq lbl_fn_805B342C_00000118
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_805B342C_00000118:
    li r0, 0x0
    stw r0, 0x4c(r30)
    stw r0, 0x48(r30)
lbl_fn_805B342C_00000124:
    mr r3, r30
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r31, 0x0
    ble lbl_fn_805B342C_00000140
    mr r3, r30
    bl dtor_80084684
lbl_fn_805B342C_00000140:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805B3518(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r26, 0x8(r1)
    mr r26, r3
    lwz r0, lbl_8087FA00
    cmpwi r0, 0x0
    bne lbl_fn_805B3518_00000284
    lis r29, lbl_80763D00@ha
    li r3, 0x98
    addi r29, r29, lbl_80763D00@l
    li r4, 0x3
    addi r5, r29, 0x11
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    mr r28, r3
    beq lbl_fn_805B3518_00000280
    mr r4, r26
    bl fn_800D1D3C
    lis r3, lbl_80797790@ha
    li r30, 0x0
    addi r3, r3, lbl_80797790@l
    stw r3, 0x0(r28)
    addi r26, r28, 0x70
    stw r30, 0x48(r28)
    mr r3, r26
    stw r30, 0x4c(r28)
    stw r30, 0x50(r28)
    stw r30, 0x54(r28)
    stw r30, 0x58(r28)
    stw r30, 0x5c(r28)
    stw r30, 0x60(r28)
    stw r30, 0x64(r28)
    stw r30, 0x68(r28)
    stw r30, 0x6c(r28)
    bl fn_80473E74
    lis r31, lbl_8078FBB0@ha
    addi r27, r28, 0x78
    addi r31, r31, lbl_8078FBB0@l
    stw r31, 0x0(r26)
    mr r3, r27
    bl fn_80473E74
    lis r4, fn_8006CA80@ha
    lis r5, fn_80014798@ha
    stw r31, 0x0(r27)
    addi r3, r28, 0x80
    addi r4, r4, fn_8006CA80@l
    addi r5, r5, fn_80014798@l
    li r6, 0x8
    li r7, 0x3
    bl fn_806958E0
    stw r30, lbl_8087FA04
    lwz r0, 0x64(r28)
    cmpwi r0, 0x0
    bne lbl_fn_805B3518_00000260
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_805B3518_00000260
    mr r4, r29
    addi r3, r3, 0x10
    bl fn_8008937C
    stw r3, 0x64(r28)
    b lbl_fn_805B3518_00000264
lbl_fn_805B3518_00000260:
    li r3, 0x0
lbl_fn_805B3518_00000264:
    lis r4, lbl_80763D00@ha
    addi r5, r28, 0x68
    addi r4, r4, lbl_80763D00@l
    li r6, 0x0
    addi r4, r4, 0x7
    li r7, 0x0
    bl fn_80087994
lbl_fn_805B3518_00000280:
    stw r28, lbl_8087FA00
lbl_fn_805B3518_00000284:
    lmw r26, 0x8(r1)
    lwz r0, 0x24(r1)
    lwz r3, lbl_8087FA00
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805B3658(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r26, 0x8(r1)
    mr r30, r3
    lwz r4, 0x4c(r3)
    lwz r3, lbl_8087F430
    cmpwi r4, 0x0
    lwz r31, 0x10d8(r3)
    beq lbl_fn_805B3658_000002D0
    beq lbl_fn_805B3658_000002D0
    subi r3, r4, 0x10
    bl fn_80084C24
lbl_fn_805B3658_000002D0:
    li r4, 0x0
    stw r4, 0x4c(r30)
    stw r4, 0x48(r30)
    stw r4, 0x5c(r30)
    stw r4, 0x58(r30)
    stw r4, 0x54(r30)
    stw r4, 0x50(r30)
    lwz r3, 0x148(r31)
    lwz r0, 0x150(r31)
    add. r27, r3, r0
    beq lbl_fn_805B3658_0000042C
    cmpwi r4, 0x0
    beq lbl_fn_805B3658_00000310
    beq lbl_fn_805B3658_00000310
    li r3, -0x10
    bl fn_80084C24
lbl_fn_805B3658_00000310:
    cmpwi r27, 0x0
    stw r27, 0x48(r30)
    beq lbl_fn_805B3658_00000358
    mulli r3, r27, 0x37c
    li r4, 0x3
    la r5, lbl_8087E6F4
    la r6, lbl_8087E6F0
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_805B37FC@ha
    mr r7, r27
    addi r4, r4, fn_805B37FC@l
    li r5, 0x0
    li r6, 0x37c
    bl fn_80695720
    stw r3, 0x4c(r30)
    b lbl_fn_805B3658_00000360
lbl_fn_805B3658_00000358:
    li r0, 0x0
    stw r0, 0x4c(r30)
lbl_fn_805B3658_00000360:
    addi r5, r30, 0x50
    li r7, 0x0
    li r3, 0x0
    mtctr r27
    cmpwi r27, 0x0
    ble lbl_fn_805B3658_000003AC
lbl_fn_805B3658_00000378:
    lwz r0, 0x4c(r30)
    stwx r5, r3, r0
    add r4, r0, r3
    stw r7, 0x8(r4)
    lwz r0, 0x4(r5)
    stw r0, 0xc(r4)
    lwz r6, 0x4(r5)
    cmpwi r6, 0x0
    beq lbl_fn_805B3658_000003A0
    stw r4, 0x8(r6)
lbl_fn_805B3658_000003A0:
    stw r4, 0x4(r5)
    addi r3, r3, 0x37c
    bdnz lbl_fn_805B3658_00000378
lbl_fn_805B3658_000003AC:
    li r26, 0x0
    li r29, 0x0
    li r28, 0x0
    b lbl_fn_805B3658_000003E0
lbl_fn_805B3658_000003BC:
    lwz r3, 0x4c(r30)
    li r4, 0x3
    lwz r0, 0x14c(r31)
    add r3, r3, r29
    add r5, r0, r28
    bl fn_805AE270
    addi r26, r26, 0x1
    addi r29, r29, 0x37c
    addi r28, r28, 0x90
lbl_fn_805B3658_000003E0:
    lwz r27, 0x148(r31)
    cmpw r26, r27
    blt lbl_fn_805B3658_000003BC
    li r26, 0x0
    li r29, 0x0
    b lbl_fn_805B3658_00000420
lbl_fn_805B3658_000003F8:
    add r3, r27, r26
    lwz r0, 0x154(r31)
    mulli r3, r3, 0x37c
    lwz r6, 0x4c(r30)
    add r5, r0, r29
    li r4, 0x2
    add r3, r6, r3
    bl fn_805AE270
    addi r26, r26, 0x1
    addi r29, r29, 0x90
lbl_fn_805B3658_00000420:
    lwz r0, 0x150(r31)
    cmpw r26, r0
    blt lbl_fn_805B3658_000003F8
lbl_fn_805B3658_0000042C:
    lmw r26, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805B37FC(void)
{
    nofralloc
    li r6, 0x0
    li r5, 0x1f
    li r4, 0xff
    li r0, 0x2
    stw r6, 0x0(r3)
    stw r6, 0x4(r3)
    stw r6, 0x8(r3)
    stw r6, 0xc(r3)
    stw r6, 0x210(r3)
    stw r5, 0x214(r3)
    stw r6, 0x218(r3)
    stb r6, 0x23c(r3)
    stb r4, 0x23d(r3)
    stb r6, 0x23e(r3)
    stb r6, 0x23f(r3)
    stb r6, 0x240(r3)
    stb r6, 0x241(r3)
    stb r6, 0x243(r3)
    stb r6, 0x244(r3)
    stb r0, 0x245(r3)
    stw r6, 0x248(r3)
    stb r6, 0x24c(r3)
    stw r6, 0x370(r3)
    stw r5, 0x374(r3)
    blr
}

asm void fn_805B3860(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lwz r31, 0x54(r3)
    b lbl_fn_805B3860_000004C8
lbl_fn_805B3860_000004BC:
    mr r3, r31
    bl fn_805B2564
    lwz r31, 0xc(r31)
lbl_fn_805B3860_000004C8:
    cmpwi r31, 0x0
    bne lbl_fn_805B3860_000004BC
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805B38A0(void)
{
    nofralloc
    lwz r4, 0x0(r4)
    addi r0, r3, 0x50
    subf r0, r4, r0
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

asm void fn_805B38B8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lwz r8, 0xc(r4)
    li r6, 0x0
    stw r0, 0x24(r1)
    lwz r7, 0x8(r4)
    lwz r0, 0x48(r3)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_805B38B8_00000564
lbl_fn_805B38B8_00000524:
    lwz r0, 0x4c(r3)
    add r5, r0, r6
    lbz r0, 0x23d(r5)
    cmpw r7, r0
    bne lbl_fn_805B38B8_0000055C
    lwz r9, 0x218(r5)
    cmpwi r9, 0x0
    beq lbl_fn_805B38B8_0000054C
    lwz r0, 0x4(r9)
    b lbl_fn_805B38B8_00000550
lbl_fn_805B38B8_0000054C:
    li r0, 0x0
lbl_fn_805B38B8_00000550:
    cmpw r8, r0
    bne lbl_fn_805B38B8_0000055C
    b lbl_fn_805B38B8_00000568
lbl_fn_805B38B8_0000055C:
    addi r6, r6, 0x37c
    bdnz lbl_fn_805B38B8_00000524
lbl_fn_805B38B8_00000564:
    li r5, 0x0
lbl_fn_805B38B8_00000568:
    cmpwi r5, 0x0
    beq lbl_fn_805B38B8_000006A0
    lwz r7, 0x10(r4)
    li r8, 0x1c
    lwz r6, 0x18(r4)
    lwz r3, 0x20(r4)
    cmpwi r7, 0x0
    lwz r0, 0x1c(r4)
    sth r8, 0x8(r1)
    stb r7, 0x14(r1)
    stb r6, 0x15(r1)
    stw r3, 0x10(r1)
    stb r0, 0x16(r1)
    beq lbl_fn_805B38B8_000005B4
    cmpwi r7, 0x1
    beq lbl_fn_805B38B8_00000600
    cmpwi r7, 0x2
    beq lbl_fn_805B38B8_0000064C
    b lbl_fn_805B38B8_00000694
lbl_fn_805B38B8_000005B4:
    lwz r6, lbl_8087F430
    li r3, 0x0
    lwz r7, 0x14(r4)
    lwz r6, 0x10d8(r6)
    lwz r0, 0x158(r6)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_805B38B8_000005F4
lbl_fn_805B38B8_000005D4:
    lwz r4, 0x15c(r6)
    lwzx r0, r4, r3
    cmpw r7, r0
    bne lbl_fn_805B38B8_000005EC
    add r0, r4, r3
    b lbl_fn_805B38B8_000005F8
lbl_fn_805B38B8_000005EC:
    addi r3, r3, 0x94
    bdnz lbl_fn_805B38B8_000005D4
lbl_fn_805B38B8_000005F4:
    li r0, 0x0
lbl_fn_805B38B8_000005F8:
    stw r0, 0xc(r1)
    b lbl_fn_805B38B8_00000694
lbl_fn_805B38B8_00000600:
    lwz r6, lbl_8087F430
    li r3, 0x0
    lwz r7, 0x14(r4)
    lwz r6, 0x10d8(r6)
    lwz r0, 0x160(r6)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_805B38B8_00000640
lbl_fn_805B38B8_00000620:
    lwz r4, 0x164(r6)
    lwzx r0, r4, r3
    cmpw r7, r0
    bne lbl_fn_805B38B8_00000638
    add r0, r4, r3
    b lbl_fn_805B38B8_00000644
lbl_fn_805B38B8_00000638:
    addi r3, r3, 0x94
    bdnz lbl_fn_805B38B8_00000620
lbl_fn_805B38B8_00000640:
    li r0, 0x0
lbl_fn_805B38B8_00000644:
    stw r0, 0xc(r1)
    b lbl_fn_805B38B8_00000694
lbl_fn_805B38B8_0000064C:
    lwz r6, lbl_8087F430
    li r3, 0x0
    lwz r7, 0x14(r4)
    lwz r6, 0x10d8(r6)
    lwz r0, 0x168(r6)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_805B38B8_0000068C
lbl_fn_805B38B8_0000066C:
    lwz r4, 0x16c(r6)
    lwzx r0, r4, r3
    cmpw r7, r0
    bne lbl_fn_805B38B8_00000684
    add r0, r4, r3
    b lbl_fn_805B38B8_00000690
lbl_fn_805B38B8_00000684:
    addi r3, r3, 0x94
    bdnz lbl_fn_805B38B8_0000066C
lbl_fn_805B38B8_0000068C:
    li r0, 0x0
lbl_fn_805B38B8_00000690:
    stw r0, 0xc(r1)
lbl_fn_805B38B8_00000694:
    mr r3, r5
    addi r4, r1, 0x8
    bl fn_805AEA74
lbl_fn_805B38B8_000006A0:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805B3A6C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lwz r8, 0xc(r4)
    li r6, 0x0
    stw r0, 0x24(r1)
    lwz r7, 0x8(r4)
    lwz r0, 0x48(r3)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_805B3A6C_00000718
lbl_fn_805B3A6C_000006D8:
    lwz r0, 0x4c(r3)
    add r5, r0, r6
    lbz r0, 0x23d(r5)
    cmpw r7, r0
    bne lbl_fn_805B3A6C_00000710
    lwz r9, 0x218(r5)
    cmpwi r9, 0x0
    beq lbl_fn_805B3A6C_00000700
    lwz r0, 0x4(r9)
    b lbl_fn_805B3A6C_00000704
lbl_fn_805B3A6C_00000700:
    li r0, 0x0
lbl_fn_805B3A6C_00000704:
    cmpw r8, r0
    bne lbl_fn_805B3A6C_00000710
    b lbl_fn_805B3A6C_0000071C
lbl_fn_805B3A6C_00000710:
    addi r6, r6, 0x37c
    bdnz lbl_fn_805B3A6C_000006D8
lbl_fn_805B3A6C_00000718:
    li r5, 0x0
lbl_fn_805B3A6C_0000071C:
    cmpwi r5, 0x0
    beq lbl_fn_805B3A6C_00000854
    lwz r7, 0x10(r4)
    li r8, 0x1d
    lwz r6, 0x18(r4)
    lwz r3, 0x20(r4)
    cmpwi r7, 0x0
    lwz r0, 0x1c(r4)
    sth r8, 0x8(r1)
    stb r7, 0x14(r1)
    stb r6, 0x15(r1)
    stw r3, 0x10(r1)
    stb r0, 0x16(r1)
    beq lbl_fn_805B3A6C_00000768
    cmpwi r7, 0x1
    beq lbl_fn_805B3A6C_000007B4
    cmpwi r7, 0x2
    beq lbl_fn_805B3A6C_00000800
    b lbl_fn_805B3A6C_00000848
lbl_fn_805B3A6C_00000768:
    lwz r6, lbl_8087F430
    li r3, 0x0
    lwz r7, 0x14(r4)
    lwz r6, 0x10d8(r6)
    lwz r0, 0x158(r6)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_805B3A6C_000007A8
lbl_fn_805B3A6C_00000788:
    lwz r4, 0x15c(r6)
    lwzx r0, r4, r3
    cmpw r7, r0
    bne lbl_fn_805B3A6C_000007A0
    add r0, r4, r3
    b lbl_fn_805B3A6C_000007AC
lbl_fn_805B3A6C_000007A0:
    addi r3, r3, 0x94
    bdnz lbl_fn_805B3A6C_00000788
lbl_fn_805B3A6C_000007A8:
    li r0, 0x0
lbl_fn_805B3A6C_000007AC:
    stw r0, 0xc(r1)
    b lbl_fn_805B3A6C_00000848
lbl_fn_805B3A6C_000007B4:
    lwz r6, lbl_8087F430
    li r3, 0x0
    lwz r7, 0x14(r4)
    lwz r6, 0x10d8(r6)
    lwz r0, 0x160(r6)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_805B3A6C_000007F4
lbl_fn_805B3A6C_000007D4:
    lwz r4, 0x164(r6)
    lwzx r0, r4, r3
    cmpw r7, r0
    bne lbl_fn_805B3A6C_000007EC
    add r0, r4, r3
    b lbl_fn_805B3A6C_000007F8
lbl_fn_805B3A6C_000007EC:
    addi r3, r3, 0x94
    bdnz lbl_fn_805B3A6C_000007D4
lbl_fn_805B3A6C_000007F4:
    li r0, 0x0
lbl_fn_805B3A6C_000007F8:
    stw r0, 0xc(r1)
    b lbl_fn_805B3A6C_00000848
lbl_fn_805B3A6C_00000800:
    lwz r6, lbl_8087F430
    li r3, 0x0
    lwz r7, 0x14(r4)
    lwz r6, 0x10d8(r6)
    lwz r0, 0x168(r6)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_805B3A6C_00000840
lbl_fn_805B3A6C_00000820:
    lwz r4, 0x16c(r6)
    lwzx r0, r4, r3
    cmpw r7, r0
    bne lbl_fn_805B3A6C_00000838
    add r0, r4, r3
    b lbl_fn_805B3A6C_00000844
lbl_fn_805B3A6C_00000838:
    addi r3, r3, 0x94
    bdnz lbl_fn_805B3A6C_00000820
lbl_fn_805B3A6C_00000840:
    li r0, 0x0
lbl_fn_805B3A6C_00000844:
    stw r0, 0xc(r1)
lbl_fn_805B3A6C_00000848:
    mr r3, r5
    addi r4, r1, 0x8
    bl fn_805AEA74
lbl_fn_805B3A6C_00000854:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805B3C20(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lwz r7, 0xc(r4)
    li r5, 0x0
    stw r0, 0x24(r1)
    lwz r6, 0x8(r4)
    lwz r0, 0x48(r3)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_805B3C20_000008CC
lbl_fn_805B3C20_0000088C:
    lwz r0, 0x4c(r3)
    add r10, r0, r5
    lbz r0, 0x23d(r10)
    cmpw r6, r0
    bne lbl_fn_805B3C20_000008C4
    lwz r8, 0x218(r10)
    cmpwi r8, 0x0
    beq lbl_fn_805B3C20_000008B4
    lwz r0, 0x4(r8)
    b lbl_fn_805B3C20_000008B8
lbl_fn_805B3C20_000008B4:
    li r0, 0x0
lbl_fn_805B3C20_000008B8:
    cmpw r7, r0
    bne lbl_fn_805B3C20_000008C4
    b lbl_fn_805B3C20_000008D0
lbl_fn_805B3C20_000008C4:
    addi r5, r5, 0x37c
    bdnz lbl_fn_805B3C20_0000088C
lbl_fn_805B3C20_000008CC:
    li r10, 0x0
lbl_fn_805B3C20_000008D0:
    cmpwi r10, 0x0
    beq lbl_fn_805B3C20_00000914
    lwz r8, 0x10(r4)
    li r9, 0x20
    lwz r7, 0x14(r4)
    mr r3, r10
    lwz r6, 0x18(r4)
    lwz r5, 0x1c(r4)
    lwz r0, 0x20(r4)
    addi r4, r1, 0x8
    sth r9, 0x8(r1)
    stb r8, 0x14(r1)
    stw r7, 0xc(r1)
    stb r6, 0x15(r1)
    stw r5, 0x10(r1)
    stb r0, 0x16(r1)
    bl fn_805AEA74
lbl_fn_805B3C20_00000914:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805B3CE0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lwz r7, 0xc(r4)
    li r5, 0x0
    stw r0, 0x14(r1)
    lwz r6, 0x8(r4)
    stw r31, 0xc(r1)
    lwz r10, 0x48(r3)
    mtctr r10
    cmpwi r10, 0x0
    ble lbl_fn_805B3CE0_00000990
lbl_fn_805B3CE0_00000950:
    lwz r0, 0x4c(r3)
    add r8, r0, r5
    lbz r0, 0x23d(r8)
    cmpw r6, r0
    bne lbl_fn_805B3CE0_00000988
    lwz r9, 0x218(r8)
    cmpwi r9, 0x0
    beq lbl_fn_805B3CE0_00000978
    lwz r0, 0x4(r9)
    b lbl_fn_805B3CE0_0000097C
lbl_fn_805B3CE0_00000978:
    li r0, 0x0
lbl_fn_805B3CE0_0000097C:
    cmpw r7, r0
    bne lbl_fn_805B3CE0_00000988
    b lbl_fn_805B3CE0_00000994
lbl_fn_805B3CE0_00000988:
    addi r5, r5, 0x37c
    bdnz lbl_fn_805B3CE0_00000950
lbl_fn_805B3CE0_00000990:
    li r8, 0x0
lbl_fn_805B3CE0_00000994:
    cmpwi r8, 0x0
    beq lbl_fn_805B3CE0_00000A98
    lwz r6, 0x14(r4)
    lwz r5, 0x10(r4)
    li r4, 0x0
    mtctr r10
    cmpwi r10, 0x0
    ble lbl_fn_805B3CE0_000009F4
lbl_fn_805B3CE0_000009B4:
    lwz r0, 0x4c(r3)
    add r31, r0, r4
    lbz r0, 0x23d(r31)
    cmpw r5, r0
    bne lbl_fn_805B3CE0_000009EC
    lwz r7, 0x218(r31)
    cmpwi r7, 0x0
    beq lbl_fn_805B3CE0_000009DC
    lwz r0, 0x4(r7)
    b lbl_fn_805B3CE0_000009E0
lbl_fn_805B3CE0_000009DC:
    li r0, 0x0
lbl_fn_805B3CE0_000009E0:
    cmpw r6, r0
    bne lbl_fn_805B3CE0_000009EC
    b lbl_fn_805B3CE0_000009F8
lbl_fn_805B3CE0_000009EC:
    addi r4, r4, 0x37c
    bdnz lbl_fn_805B3CE0_000009B4
lbl_fn_805B3CE0_000009F4:
    li r31, 0x0
lbl_fn_805B3CE0_000009F8:
    cmpwi r31, 0x0
    beq lbl_fn_805B3CE0_00000A98
    lwz r5, 0x0(r8)
    cmpwi r5, 0x0
    beq lbl_fn_805B3CE0_00000A28
    lwz r0, 0x4(r5)
    cmplw r0, r8
    bne lbl_fn_805B3CE0_00000A28
    lwz r4, 0xc(r8)
    li r0, 0x0
    stw r4, 0x4(r5)
    stw r0, 0x0(r8)
lbl_fn_805B3CE0_00000A28:
    lwz r4, 0x8(r8)
    cmpwi r4, 0x0
    beq lbl_fn_805B3CE0_00000A3C
    lwz r0, 0xc(r8)
    stw r0, 0xc(r4)
lbl_fn_805B3CE0_00000A3C:
    lwz r4, 0xc(r8)
    cmpwi r4, 0x0
    beq lbl_fn_805B3CE0_00000A50
    lwz r0, 0x8(r8)
    stw r0, 0x8(r4)
lbl_fn_805B3CE0_00000A50:
    cmpwi r31, 0x0
    mr r4, r31
    bne lbl_fn_805B3CE0_00000A60
    addi r4, r3, 0x50
lbl_fn_805B3CE0_00000A60:
    stw r4, 0x0(r8)
    li r0, 0x0
    stw r0, 0x8(r8)
    lwz r0, 0x4(r4)
    stw r0, 0xc(r8)
    lwz r3, 0x4(r4)
    cmpwi r3, 0x0
    beq lbl_fn_805B3CE0_00000A84
    stw r8, 0x8(r3)
lbl_fn_805B3CE0_00000A84:
    stw r8, 0x4(r4)
    mr r3, r8
    bl fn_805AE3C8
    mr r3, r31
    bl fn_805AE3C8
lbl_fn_805B3CE0_00000A98:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805B3E68(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lwz r6, 0xc(r4)
    li r5, 0x0
    stw r0, 0x14(r1)
    lwz r4, 0x8(r4)
    stw r31, 0xc(r1)
    lwz r0, 0x48(r3)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_805B3E68_00000B18
lbl_fn_805B3E68_00000AD8:
    lwz r0, 0x4c(r3)
    add r31, r0, r5
    lbz r0, 0x23d(r31)
    cmpw r4, r0
    bne lbl_fn_805B3E68_00000B10
    lwz r7, 0x218(r31)
    cmpwi r7, 0x0
    beq lbl_fn_805B3E68_00000B00
    lwz r0, 0x4(r7)
    b lbl_fn_805B3E68_00000B04
lbl_fn_805B3E68_00000B00:
    li r0, 0x0
lbl_fn_805B3E68_00000B04:
    cmpw r6, r0
    bne lbl_fn_805B3E68_00000B10
    b lbl_fn_805B3E68_00000B1C
lbl_fn_805B3E68_00000B10:
    addi r5, r5, 0x37c
    bdnz lbl_fn_805B3E68_00000AD8
lbl_fn_805B3E68_00000B18:
    li r31, 0x0
lbl_fn_805B3E68_00000B1C:
    cmpwi r31, 0x0
    beq lbl_fn_805B3E68_00000B54
    mr r3, r31
    bl fn_805AEAC4
    mr r4, r31
    li r5, 0x0
    b lbl_fn_805B3E68_00000B48
lbl_fn_805B3E68_00000B38:
    lwz r3, 0x250(r4)
    addi r4, r4, 0x4
    addi r5, r5, 0x1
    stw r31, 0xd2c(r3)
lbl_fn_805B3E68_00000B48:
    lbz r0, 0x24c(r31)
    cmpw r5, r0
    blt lbl_fn_805B3E68_00000B38
lbl_fn_805B3E68_00000B54:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805B3F24(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lwz r7, 0xc(r4)
    li r5, 0x0
    stw r0, 0x24(r1)
    lwz r6, 0x8(r4)
    lwz r0, 0x48(r3)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_805B3F24_00000BD0
lbl_fn_805B3F24_00000B90:
    lwz r0, 0x4c(r3)
    add r8, r0, r5
    lbz r0, 0x23d(r8)
    cmpw r6, r0
    bne lbl_fn_805B3F24_00000BC8
    lwz r9, 0x218(r8)
    cmpwi r9, 0x0
    beq lbl_fn_805B3F24_00000BB8
    lwz r0, 0x4(r9)
    b lbl_fn_805B3F24_00000BBC
lbl_fn_805B3F24_00000BB8:
    li r0, 0x0
lbl_fn_805B3F24_00000BBC:
    cmpw r7, r0
    bne lbl_fn_805B3F24_00000BC8
    b lbl_fn_805B3F24_00000BD4
lbl_fn_805B3F24_00000BC8:
    addi r5, r5, 0x37c
    bdnz lbl_fn_805B3F24_00000B90
lbl_fn_805B3F24_00000BD0:
    li r8, 0x0
lbl_fn_805B3F24_00000BD4:
    cmpwi r8, 0x0
    beq lbl_fn_805B3F24_00000C08
    lwz r6, 0x10(r4)
    li r7, 0x21
    lwz r5, 0x14(r4)
    mr r3, r8
    lwz r0, 0x18(r4)
    addi r4, r1, 0x8
    sth r7, 0x8(r1)
    stw r6, 0xc(r1)
    stw r5, 0x10(r1)
    stw r0, 0x14(r1)
    bl fn_805AEA74
lbl_fn_805B3F24_00000C08:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805B3FD4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lwz r7, 0xc(r4)
    li r5, 0x0
    stw r0, 0x24(r1)
    lwz r6, 0x8(r4)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    lwz r0, 0x48(r3)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_805B3FD4_00000C8C
lbl_fn_805B3FD4_00000C4C:
    lwz r0, 0x4c(r3)
    add r31, r0, r5
    lbz r0, 0x23d(r31)
    cmpw r6, r0
    bne lbl_fn_805B3FD4_00000C84
    lwz r8, 0x218(r31)
    cmpwi r8, 0x0
    beq lbl_fn_805B3FD4_00000C74
    lwz r0, 0x4(r8)
    b lbl_fn_805B3FD4_00000C78
lbl_fn_805B3FD4_00000C74:
    li r0, 0x0
lbl_fn_805B3FD4_00000C78:
    cmpw r7, r0
    bne lbl_fn_805B3FD4_00000C84
    b lbl_fn_805B3FD4_00000C90
lbl_fn_805B3FD4_00000C84:
    addi r5, r5, 0x37c
    bdnz lbl_fn_805B3FD4_00000C4C
lbl_fn_805B3FD4_00000C8C:
    li r31, 0x0
lbl_fn_805B3FD4_00000C90:
    cmpwi r31, 0x0
    beq lbl_fn_805B3FD4_00000D24
    lwz r3, 0x10(r4)
    li r0, 0x22
    sth r0, 0x8(r1)
    cmpwi r3, 0x0
    beq lbl_fn_805B3FD4_00000CC8
    cmpwi r3, 0x1
    beq lbl_fn_805B3FD4_00000CD8
    cmpwi r3, 0x2
    beq lbl_fn_805B3FD4_00000CEC
    cmpwi r3, 0x3
    beq lbl_fn_805B3FD4_00000D00
    b lbl_fn_805B3FD4_00000D10
lbl_fn_805B3FD4_00000CC8:
    lwz r3, lbl_8087F8A0
    lwz r0, 0x48(r3)
    stw r0, 0xc(r1)
    b lbl_fn_805B3FD4_00000D10
lbl_fn_805B3FD4_00000CD8:
    lwz r3, lbl_8087F890
    lwz r4, 0x14(r4)
    bl fn_8011FE3C
    stw r3, 0xc(r1)
    b lbl_fn_805B3FD4_00000D10
lbl_fn_805B3FD4_00000CEC:
    lwz r3, lbl_8087F408
    lwz r4, 0x14(r4)
    bl fn_8011FC10
    stw r3, 0xc(r1)
    b lbl_fn_805B3FD4_00000D10
lbl_fn_805B3FD4_00000D00:
    lwz r3, lbl_8087F8A0
    lwz r4, 0x14(r4)
    bl fn_8011F91C
    stw r3, 0xc(r1)
lbl_fn_805B3FD4_00000D10:
    lwz r0, 0x18(r30)
    mr r3, r31
    stb r0, 0x10(r1)
    addi r4, r1, 0x8
    bl fn_805AEA74
lbl_fn_805B3FD4_00000D24:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805B40F8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lwz r7, 0xc(r4)
    li r5, 0x0
    stw r0, 0x24(r1)
    lwz r6, 0x8(r4)
    lwz r0, 0x48(r3)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_805B40F8_00000DA4
lbl_fn_805B40F8_00000D64:
    lwz r0, 0x4c(r3)
    add r8, r0, r5
    lbz r0, 0x23d(r8)
    cmpw r6, r0
    bne lbl_fn_805B40F8_00000D9C
    lwz r9, 0x218(r8)
    cmpwi r9, 0x0
    beq lbl_fn_805B40F8_00000D8C
    lwz r0, 0x4(r9)
    b lbl_fn_805B40F8_00000D90
lbl_fn_805B40F8_00000D8C:
    li r0, 0x0
lbl_fn_805B40F8_00000D90:
    cmpw r7, r0
    bne lbl_fn_805B40F8_00000D9C
    b lbl_fn_805B40F8_00000DA8
lbl_fn_805B40F8_00000D9C:
    addi r5, r5, 0x37c
    bdnz lbl_fn_805B40F8_00000D64
lbl_fn_805B40F8_00000DA4:
    li r8, 0x0
lbl_fn_805B40F8_00000DA8:
    cmpwi r8, 0x0
    beq lbl_fn_805B40F8_00000DDC
    lwz r6, 0x10(r4)
    li r7, 0x24
    lwz r5, 0x18(r4)
    mr r3, r8
    lwz r0, 0x14(r4)
    addi r4, r1, 0xc
    sth r7, 0x8(r1)
    stb r6, 0x11(r1)
    stw r5, 0xc(r1)
    stb r0, 0x10(r1)
    bl fn_805B202C
lbl_fn_805B40F8_00000DDC:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805B41A8(void)
{
    nofralloc
    stwu r1, -0x220(r1)
    mflr r0
    stw r0, 0x224(r1)
    addi r11, r1, 0x1a0
    stfd f31, 0x210(r1)
    psq_st f31, 0x218(r1), 0, 0
    stfd f30, 0x200(r1)
    psq_st f30, 0x208(r1), 0, 0
    stfd f29, 0x1f0(r1)
    psq_st f29, 0x1f8(r1), 0, 0
    stfd f28, 0x1e0(r1)
    psq_st f28, 0x1e8(r1), 0, 0
    stfd f27, 0x1d0(r1)
    psq_st f27, 0x1d8(r1), 0, 0
    stfd f26, 0x1c0(r1)
    psq_st f26, 0x1c8(r1), 0, 0
    stfd f25, 0x1b0(r1)
    psq_st f25, 0x1b8(r1), 0, 0
    stfd f24, 0x1a0(r1)
    psq_st f24, 0x1a8(r1), 0, 0
    bl _savegpr_21
    lwz r0, 0x68(r3)
    mr r29, r3
    cmpwi r0, 0x0
    beq lbl_fn_805B41A8_00000EC0
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x2
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_805B41A8_00000E88
    lwz r3, 0x6c(r29)
    subic. r0, r3, 0x1
    stw r0, 0x6c(r29)
    bge lbl_fn_805B41A8_00000EC0
    lwz r3, 0x48(r29)
    subi r0, r3, 0x1
    stw r0, 0x6c(r29)
    b lbl_fn_805B41A8_00000EC0
lbl_fn_805B41A8_00000E88:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x3
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_805B41A8_00000EC0
    lwz r3, 0x6c(r29)
    lwz r4, 0x48(r29)
    addi r0, r3, 0x1
    stw r0, 0x6c(r29)
    cmpw r0, r4
    blt lbl_fn_805B41A8_00000EC0
    li r0, 0x0
    stw r0, 0x6c(r29)
lbl_fn_805B41A8_00000EC0:
    lwz r0, 0x68(r29)
    cmpwi r0, 0x0
    beq lbl_fn_805B41A8_00001980
    lwz r31, lbl_8087EEB0
    cmpwi r31, 0x0
    beq lbl_fn_805B41A8_00001980
    lfs f30, lbl_80888394
    mr r3, r31
    lfs f29, lbl_80888390
    lis r4, 0x3000
    lfs f31, lbl_80888398
    fmr f1, f30
    fmr f2, f30
    lfs f5, lbl_8088839C
    fmr f3, f29
    lfs f28, lbl_808883A0
    fmr f4, f31
    lfs f27, lbl_808883A4
    bl fn_80060D58
    lfs f8, lbl_808883A8
    lis r27, lbl_80763D00@ha
    lfs f0, lbl_808883AC
    addi r27, r27, lbl_80763D00@l
    lwz r0, 0x6c(r29)
    fadds f26, f8, f30
    fmadds f7, f0, f31, f30
    lfs f0, lbl_808883B0
    mulli r0, r0, 0x37c
    lwz r3, 0x4c(r29)
    fmr f1, f26
    fmr f2, f28
    add r30, r3, r0
    fmr f3, f29
    fmr f4, f27
    lfs f6, lbl_808883B4
    fmr f5, f27
    fadds f31, f8, f7
    mr r3, r31
    fadds f25, f0, f30
    fadds f24, f0, f7
    addi r4, r27, 0x2d
    li r5, -0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    fadds f30, f28, f28
    lis r26, 0xd100
    fmr f1, f26
    lfs f6, lbl_808883B4
    fmr f3, f29
    mr r3, r31
    fmr f2, f30
    addi r4, r27, 0x34
    fmr f4, f27
    subi r5, r26, 0x56
    fmr f5, f27
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    lwz r5, 0x6c(r29)
    addi r3, r1, 0x68
    addi r4, r27, 0x3a
    crclr 6
    bl sprintf
    fmr f1, f25
    lfs f6, lbl_808883B4
    fmr f2, f30
    mr r3, r31
    fmr f3, f29
    addi r4, r1, 0x68
    fmr f4, f27
    subi r5, r26, 0x1
    fmr f5, f27
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    fadds f30, f30, f28
    lfs f6, lbl_808883B4
    fmr f1, f26
    mr r3, r31
    fmr f3, f29
    addi r4, r27, 0x3d
    fmr f2, f30
    subi r5, r26, 0x56
    fmr f4, f27
    li r6, 0x1
    fmr f5, f27
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    lbz r0, 0x23d(r30)
    cmpwi r0, 0x1
    bne lbl_fn_805B41A8_00001078
    fmr f1, f25
    lfs f6, lbl_808883B4
    fmr f2, f30
    mr r3, r31
    fmr f3, f29
    addi r4, r27, 0x42
    fmr f4, f27
    subi r5, r26, 0x1
    fmr f5, f27
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    b lbl_fn_805B41A8_000010F4
lbl_fn_805B41A8_00001078:
    cmpwi r0, 0x2
    bne lbl_fn_805B41A8_000010B8
    fmr f1, f25
    lfs f6, lbl_808883B4
    fmr f2, f30
    mr r3, r31
    fmr f3, f29
    addi r4, r27, 0x46
    fmr f4, f27
    subi r5, r26, 0x1
    fmr f5, f27
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    b lbl_fn_805B41A8_000010F4
lbl_fn_805B41A8_000010B8:
    cmpwi r0, 0x3
    bne lbl_fn_805B41A8_000010F4
    fmr f1, f25
    lfs f6, lbl_808883B4
    fmr f2, f30
    mr r3, r31
    fmr f3, f29
    addi r4, r27, 0x4c
    fmr f4, f27
    subi r5, r26, 0x1
    fmr f5, f27
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
lbl_fn_805B41A8_000010F4:
    lis r4, lbl_80763D00@ha
    fmr f1, f31
    addi r4, r4, lbl_80763D00@l
    lis r5, 0xd100
    fmr f2, f30
    lfs f6, lbl_808883B4
    fmr f3, f29
    fmr f4, f27
    mr r3, r31
    fmr f5, f27
    addi r4, r4, 0x53
    subi r5, r5, 0x56
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    lwz r3, 0x218(r30)
    cmpwi r3, 0x0
    beq lbl_fn_805B41A8_00001148
    lwz r5, 0x4(r3)
    b lbl_fn_805B41A8_0000114C
lbl_fn_805B41A8_00001148:
    li r5, 0x0
lbl_fn_805B41A8_0000114C:
    lis r27, lbl_80763D00@ha
    addi r3, r1, 0x68
    addi r27, r27, lbl_80763D00@l
    addi r4, r27, 0x3a
    crclr 6
    bl sprintf
    fmr f1, f24
    lis r26, 0xd100
    fmr f2, f30
    lfs f6, lbl_808883B4
    fmr f3, f29
    mr r3, r31
    fmr f4, f27
    addi r4, r1, 0x68
    fmr f5, f27
    subi r5, r26, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    fadds f30, f30, f28
    lfs f6, lbl_808883B4
    fmr f1, f26
    mr r3, r31
    fmr f3, f29
    addi r4, r27, 0x56
    fmr f2, f30
    subi r5, r26, 0x56
    fmr f4, f27
    li r6, 0x1
    fmr f5, f27
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    lwz r0, 0x248(r30)
    lis r5, lbl_80763CD8@ha
    addi r5, r5, lbl_80763CD8@l
    addi r3, r1, 0x68
    slwi r0, r0, 2
    addi r4, r27, 0x5c
    lwzx r5, r5, r0
    crclr 6
    bl sprintf
    fmr f1, f25
    lfs f6, lbl_808883B4
    fmr f2, f30
    mr r3, r31
    fmr f3, f29
    addi r4, r1, 0x68
    fmr f4, f27
    subi r5, r26, 0x1
    fmr f5, f27
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    fadds f30, f30, f28
    lfs f6, lbl_808883B4
    fmr f1, f26
    mr r3, r31
    fmr f3, f29
    addi r4, r27, 0x5f
    fmr f2, f30
    subi r5, r26, 0x56
    fmr f4, f27
    li r6, 0x1
    fmr f5, f27
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    lbz r5, 0x23f(r30)
    addi r3, r1, 0x68
    addi r4, r27, 0x3a
    crclr 6
    bl sprintf
    fmr f1, f25
    lfs f6, lbl_808883B4
    fmr f2, f30
    mr r3, r31
    fmr f3, f29
    addi r4, r1, 0x68
    fmr f4, f27
    subi r5, r26, 0x1
    fmr f5, f27
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    fadds f30, f30, f28
    lfs f6, lbl_808883B4
    fmr f1, f26
    mr r3, r31
    fmr f3, f29
    addi r4, r27, 0x66
    fmr f2, f30
    subi r5, r26, 0x56
    fmr f4, f27
    li r6, 0x1
    fmr f5, f27
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    lbz r5, 0x24c(r30)
    addi r3, r1, 0x68
    addi r4, r27, 0x3a
    crclr 6
    bl sprintf
    fmr f1, f25
    lfs f6, lbl_808883B4
    fmr f2, f30
    mr r3, r31
    fmr f3, f29
    addi r4, r1, 0x68
    fmr f4, f27
    subi r5, r26, 0x1
    fmr f5, f27
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    fadds f30, f30, f28
    lfs f6, lbl_808883B4
    fmr f1, f26
    mr r3, r31
    fmr f3, f29
    addi r4, r27, 0x70
    fmr f2, f30
    subi r5, r26, 0x56
    fmr f4, f27
    li r6, 0x1
    fmr f5, f27
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    lbz r5, 0x240(r30)
    addi r3, r1, 0x68
    addi r4, r27, 0x3a
    crclr 6
    bl sprintf
    fmr f1, f25
    lfs f6, lbl_808883B4
    fmr f2, f30
    mr r3, r31
    fmr f3, f29
    addi r4, r1, 0x68
    fmr f4, f27
    subi r5, r26, 0x1
    fmr f5, f27
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    fmr f1, f31
    lfs f6, lbl_808883B4
    fmr f2, f30
    mr r3, r31
    fmr f3, f29
    addi r4, r27, 0x7b
    fmr f4, f27
    subi r5, r26, 0x56
    fmr f5, f27
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    lbz r5, 0x241(r30)
    addi r3, r1, 0x68
    addi r4, r27, 0x3a
    crclr 6
    bl sprintf
    fmr f1, f24
    lfs f6, lbl_808883B4
    fmr f2, f30
    mr r3, r31
    fmr f3, f29
    addi r4, r1, 0x68
    fmr f4, f27
    subi r5, r26, 0x1
    fmr f5, f27
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    fadds f30, f30, f28
    lfs f6, lbl_808883B4
    fmr f1, f26
    mr r3, r31
    fmr f3, f29
    addi r4, r27, 0x82
    fmr f2, f30
    subi r5, r26, 0x56
    fmr f4, f27
    li r6, 0x1
    fmr f5, f27
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    lwz r4, 0x370(r30)
    subic. r3, r4, 0x1
    bge lbl_fn_805B41A8_00001470
    addi r3, r3, 0x20
lbl_fn_805B41A8_00001470:
    lwz r0, 0x374(r30)
    cmpw r3, r0
    bne lbl_fn_805B41A8_00001484
    li r3, 0x0
    b lbl_fn_805B41A8_00001498
lbl_fn_805B41A8_00001484:
    subic. r3, r4, 0x1
    bge lbl_fn_805B41A8_00001490
    addi r3, r3, 0x20
lbl_fn_805B41A8_00001490:
    add r3, r30, r3
    addi r3, r3, 0x350
lbl_fn_805B41A8_00001498:
    lis r27, lbl_80763D00@ha
    lbz r5, 0x0(r3)
    addi r27, r27, lbl_80763D00@l
    addi r3, r1, 0x68
    addi r4, r27, 0x3a
    crclr 6
    bl sprintf
    fmr f1, f25
    lis r26, 0xd100
    fmr f2, f30
    lfs f6, lbl_808883B4
    fmr f3, f29
    mr r3, r31
    fmr f4, f27
    addi r4, r1, 0x68
    fmr f5, f27
    subi r5, r26, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    fadds f30, f30, f28
    lfs f6, lbl_808883B4
    fmr f1, f26
    mr r3, r31
    fmr f3, f29
    addi r4, r27, 0x8e
    fmr f2, f30
    subi r5, r26, 0x56
    fmr f4, f27
    li r6, 0x1
    fmr f5, f27
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    lbz r5, 0x243(r30)
    addi r3, r1, 0x68
    addi r4, r27, 0x3a
    crclr 6
    bl sprintf
    fmr f1, f25
    lfs f6, lbl_808883B4
    fmr f2, f30
    mr r3, r31
    fmr f3, f29
    addi r4, r1, 0x68
    fmr f4, f27
    subi r5, r26, 0x1
    fmr f5, f27
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    fmr f1, f31
    lfs f6, lbl_808883B4
    fmr f2, f30
    mr r3, r31
    fmr f3, f29
    addi r4, r27, 0x99
    fmr f4, f27
    subi r5, r26, 0x56
    fmr f5, f27
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    lbz r5, 0x244(r30)
    addi r3, r1, 0x68
    addi r4, r27, 0x3a
    crclr 6
    bl sprintf
    fmr f1, f24
    lfs f6, lbl_808883B4
    fmr f2, f30
    mr r3, r31
    fmr f3, f29
    addi r4, r1, 0x68
    fmr f4, f27
    subi r5, r26, 0x1
    fmr f5, f27
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    fadds f30, f30, f28
    lfs f0, lbl_808883A8
    fmr f1, f26
    lfs f6, lbl_808883B4
    fmr f3, f29
    mr r3, r31
    fadds f30, f30, f0
    addi r4, r27, 0xa4
    fmr f4, f27
    subi r5, r26, 0x56
    fmr f5, f27
    li r6, 0x1
    fmr f2, f30
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    mr r3, r30
    bl fn_805AE458
    addi r3, r1, 0x68
    addi r4, r27, 0xac
    crset 6
    bl sprintf
    fmr f1, f25
    lfs f6, lbl_808883B4
    fmr f2, f30
    mr r3, r31
    fmr f3, f29
    addi r4, r1, 0x68
    fmr f4, f27
    subi r5, r26, 0x1
    fmr f5, f27
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    fadds f30, f30, f28
    lfs f6, lbl_808883B4
    fmr f1, f26
    mr r3, r31
    fmr f3, f29
    addi r4, r27, 0xb1
    fmr f2, f30
    subi r5, r26, 0x56
    fmr f4, f27
    li r6, 0x1
    fmr f5, f27
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    mr r3, r30
    bl fn_805AE750
    addi r3, r1, 0x68
    addi r4, r27, 0xac
    crset 6
    bl sprintf
    fmr f1, f25
    lfs f6, lbl_808883B4
    fmr f2, f30
    mr r3, r31
    fmr f3, f29
    addi r4, r1, 0x68
    fmr f4, f27
    subi r5, r26, 0x1
    fmr f5, f27
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    fadds f30, f30, f28
    lfs f6, lbl_808883B4
    fmr f1, f26
    mr r3, r31
    fmr f3, f29
    addi r4, r27, 0xbc
    fmr f2, f30
    subi r5, r26, 0x56
    fmr f4, f27
    li r6, 0x1
    fmr f5, f27
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    mr r3, r30
    bl fn_805AE5EC
    addi r3, r1, 0x68
    addi r4, r27, 0xac
    crset 6
    bl sprintf
    fmr f1, f25
    lfs f6, lbl_808883B4
    fmr f2, f30
    mr r3, r31
    fmr f3, f29
    addi r4, r1, 0x68
    fmr f4, f27
    subi r5, r26, 0x1
    fmr f5, f27
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    lfs f30, lbl_808883B4
    addi r24, r30, 0x250
    lfs f31, lbl_808883B8
    addi r28, r1, 0x5c
    lfs f29, lbl_808883A0
    li r25, 0x0
    li r27, 0x0
    lis r26, 0xff01
    b lbl_fn_805B41A8_00001884
lbl_fn_805B41A8_000017A0:
    lwzx r4, r24, r27
    lfs f2, 0x530(r4)
    psq_l f1, 0x528(r4), 0, 0
    psq_st f1, 0x0(r28), 0, 0
    lfs f0, 0x60(r1)
    stfs f2, 0x64(r1)
    fadds f0, f0, f31
    stfs f0, 0x60(r1)
    lwz r3, 0x218(r30)
    cmpwi r3, 0x0
    beq lbl_fn_805B41A8_000017D4
    lwz r0, 0x8c(r3)
    b lbl_fn_805B41A8_000017D8
lbl_fn_805B41A8_000017D4:
    li r0, 0x0
lbl_fn_805B41A8_000017D8:
    cmplw r4, r0
    bne lbl_fn_805B41A8_00001830
    lfs f4, 0x64(r1)
    fmr f1, f30
    lfs f3, 0x60(r1)
    mr r3, r31
    lfs f0, 0x5c(r1)
    fadds f4, f4, f30
    fadds f3, f3, f29
    fadds f0, f0, f30
    stfs f30, 0x38(r1)
    lfs f2, lbl_808883BC
    addi r4, r1, 0x44
    stfs f29, 0x3c(r1)
    addi r5, r1, 0x5c
    stfs f30, 0x40(r1)
    li r6, -0x100
    stfs f0, 0x44(r1)
    stfs f3, 0x48(r1)
    stfs f4, 0x4c(r1)
    bl fn_800638B0
    b lbl_fn_805B41A8_0000187C
lbl_fn_805B41A8_00001830:
    lfs f4, 0x64(r1)
    fmr f1, f30
    lfs f3, 0x60(r1)
    mr r3, r31
    lfs f0, 0x5c(r1)
    fadds f4, f4, f30
    fadds f3, f3, f29
    fadds f0, f0, f30
    stfs f30, 0x20(r1)
    lfs f2, lbl_808883BC
    addi r4, r1, 0x2c
    stfs f29, 0x24(r1)
    addi r5, r1, 0x5c
    stfs f30, 0x28(r1)
    subi r6, r26, 0x1
    stfs f0, 0x2c(r1)
    stfs f3, 0x30(r1)
    stfs f4, 0x34(r1)
    bl fn_800638B0
lbl_fn_805B41A8_0000187C:
    addi r25, r25, 0x1
    addi r27, r27, 0x4
lbl_fn_805B41A8_00001884:
    lbz r0, 0x24c(r30)
    cmpw r25, r0
    blt lbl_fn_805B41A8_000017A0
    mr r3, r30
    bl fn_805AE7B8
    cmpwi r3, 0x0
    ble lbl_fn_805B41A8_00001980
    lfs f29, lbl_808883B4
    addi r25, r1, 0x50
    lfs f30, lbl_808883A0
    li r23, 0x0
    li r28, 0x0
    lis r26, 0xffff
    b lbl_fn_805B41A8_00001974
lbl_fn_805B41A8_000018BC:
    lwz r0, 0x4c(r29)
    lbz r3, 0x23d(r30)
    add r24, r0, r28
    lbz r0, 0x23d(r24)
    cmpw r3, r0
    beq lbl_fn_805B41A8_0000196C
    mr r3, r24
    bl fn_805AE7B8
    cmpwi r3, 0x0
    ble lbl_fn_805B41A8_0000196C
    addi r22, r24, 0x250
    li r21, 0x0
    li r27, 0x0
    b lbl_fn_805B41A8_00001960
lbl_fn_805B41A8_000018F4:
    lwzx r6, r22, r27
    mr r3, r31
    stfs f29, 0x8(r1)
    mr r5, r25
    lfs f2, 0x530(r6)
    addi r4, r1, 0x14
    psq_l f1, 0x528(r6), 0, 0
    addi r6, r26, 0xff
    psq_st f1, 0x0(r25), 0, 0
    fadds f4, f2, f29
    fmr f1, f29
    lfs f3, 0x54(r1)
    lfs f0, 0x50(r1)
    fadds f3, f3, f31
    stfs f2, 0x58(r1)
    fadds f5, f0, f29
    lfs f2, lbl_808883BC
    stfs f3, 0x54(r1)
    fadds f0, f3, f30
    stfs f30, 0xc(r1)
    stfs f29, 0x10(r1)
    stfs f5, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f4, 0x1c(r1)
    bl fn_800638B0
    addi r21, r21, 0x1
    addi r27, r27, 0x4
lbl_fn_805B41A8_00001960:
    lbz r0, 0x24c(r24)
    cmpw r21, r0
    blt lbl_fn_805B41A8_000018F4
lbl_fn_805B41A8_0000196C:
    addi r23, r23, 0x1
    addi r28, r28, 0x37c
lbl_fn_805B41A8_00001974:
    lwz r0, 0x48(r29)
    cmpw r23, r0
    blt lbl_fn_805B41A8_000018BC
lbl_fn_805B41A8_00001980:
    addi r11, r1, 0x1a0
    psq_l f31, 0x218(r1), 0, 0
    lfd f31, 0x210(r1)
    psq_l f30, 0x208(r1), 0, 0
    lfd f30, 0x200(r1)
    psq_l f29, 0x1f8(r1), 0, 0
    lfd f29, 0x1f0(r1)
    psq_l f28, 0x1e8(r1), 0, 0
    lfd f28, 0x1e0(r1)
    psq_l f27, 0x1d8(r1), 0, 0
    lfd f27, 0x1d0(r1)
    psq_l f26, 0x1c8(r1), 0, 0
    lfd f26, 0x1c0(r1)
    psq_l f25, 0x1b8(r1), 0, 0
    lfd f25, 0x1b0(r1)
    psq_l f24, 0x1a8(r1), 0, 0
    lfd f24, 0x1a0(r1)
    bl _restgpr_21
    lwz r0, 0x224(r1)
    mtlr r0
    addi r1, r1, 0x220
    blr
}

asm void fn_805B4D94(void)
{
    nofralloc
    lwz r0, 0x48(r3)
    li r6, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_805B4D94_00001A30
lbl_fn_805B4D94_000019EC:
    lwz r0, 0x4c(r3)
    add r7, r0, r6
    lbz r0, 0x23d(r7)
    cmpw r4, r0
    bne lbl_fn_805B4D94_00001A28
    lwz r8, 0x218(r7)
    cmpwi r8, 0x0
    beq lbl_fn_805B4D94_00001A14
    lwz r0, 0x4(r8)
    b lbl_fn_805B4D94_00001A18
lbl_fn_805B4D94_00001A14:
    li r0, 0x0
lbl_fn_805B4D94_00001A18:
    cmpw r5, r0
    bne lbl_fn_805B4D94_00001A28
    mr r3, r7
    blr
lbl_fn_805B4D94_00001A28:
    addi r6, r6, 0x37c
    bdnz lbl_fn_805B4D94_000019EC
lbl_fn_805B4D94_00001A30:
    li r3, 0x0
    blr
}
