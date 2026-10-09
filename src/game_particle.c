#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void dtor_80084684(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_8006F72C(void);
extern void fn_800DBF68(void);
extern void fn_800E2778(void);
extern void fn_80680770(void);
extern void fn_80686EA4(void);
extern void fn_8068B39C(void);
extern void fn_8068B50C(void);
extern void fn_806952C4(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_80735000[];
extern u8 lbl_80779AB8[];

/* Small data declarations */

/* Function declarations */
void fn_800E0908(void);
void fn_800E0A64(void);
void fn_800E0AA8(void);
void fn_800E0AB0(void);
void dtor_800E0AC0(void);
void fn_800E0B18(void);
void fn_800E0B90(void);
void dtor_800E0C20(void);
void dtor_800E0C8C(void);
void fn_800E0CF0(void);
void fn_800E0D54(void);
void fn_800E0D70(void);
void fn_800E0F84(void);
void fn_800E114C(void);
void fn_800E1374(void);
void fn_800E14A4(void);
void fn_800E1630(void);
void fn_800E19AC(void);
void fn_800E1A48(void);
void fn_800E1D4C(void);
void fn_800E1D54(void);
void fn_800E1D5C(void);
void fn_800E1D88(void);
void fn_800E1DE4(void);
void fn_800E1E64(void);
void fn_800E2064(void);

asm void fn_800E0908(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    li r0, 0x0
    stw r31, 0x2c(r1)
    mr r31, r5
    stw r30, 0x28(r1)
    mr r30, r3
    stw r29, 0x24(r1)
    stw r28, 0x20(r1)
    mr r28, r4
    stw r6, 0x1c(r1)
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    lwz r0, 0x0(r4)
    srwi. r0, r0, 31
    bne lbl_fn_800E0908_00000054
    lbz r0, 0x0(r4)
    clrlwi r3, r0, 25
    b lbl_fn_800E0908_00000058
lbl_fn_800E0908_00000054:
    lwz r3, 0x4(r4)
lbl_fn_800E0908_00000058:
    cmplw r5, r3
    bgt lbl_fn_800E0908_00000084
    lwz r0, 0x1c(r1)
    subf r4, r5, r3
    stw r4, 0x10(r1)
    addi r3, r1, 0x1c
    cmplw r4, r0
    bge lbl_fn_800E0908_0000007C
    addi r3, r1, 0x10
lbl_fn_800E0908_0000007C:
    lwz r4, 0x0(r3)
    b lbl_fn_800E0908_00000088
lbl_fn_800E0908_00000084:
    li r4, 0x0
lbl_fn_800E0908_00000088:
    mr r3, r30
    bl fn_800DBF68
    lwz r0, 0x1c(r1)
    stw r0, 0x14(r1)
    lwz r0, 0x0(r28)
    srwi. r0, r0, 31
    bne lbl_fn_800E0908_000000B4
    lbz r0, 0x0(r28)
    addi r29, r28, 0x2
    clrlwi r28, r0, 25
    b lbl_fn_800E0908_000000BC
lbl_fn_800E0908_000000B4:
    lwz r29, 0x8(r28)
    lwz r28, 0x4(r28)
lbl_fn_800E0908_000000BC:
    cmplw r31, r28
    ble lbl_fn_800E0908_000000E8
    lis r4, lbl_80735000@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80735000@l
    addi r3, r3, __files@l
    addi r4, r4, 0x14
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_800E0908_000000E8:
    lwz r0, 0x1c(r1)
    subf r3, r31, r28
    slwi r4, r31, 1
    stw r3, 0x18(r1)
    cmplw r3, r0
    addi r3, r1, 0x14
    add r29, r29, r4
    bge lbl_fn_800E0908_0000010C
    addi r3, r1, 0x18
lbl_fn_800E0908_0000010C:
    lwz r5, 0x0(r3)
    mr r3, r30
    lbz r4, 0x8(r1)
    mr r6, r29
    slwi r0, r5, 1
    stw r5, 0x14(r1)
    add r7, r29, r0
    addi r8, r1, 0xc
    stb r4, 0xc(r1)
    li r4, 0x0
    li r5, 0x0
    bl fn_8006F72C
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_800E0A64(void)
{
    nofralloc
    lwz r0, 0x24(r3)
    lbz r5, 0x32(r3)
    cmpwi r0, 0x0
    or r0, r5, r4
    stb r0, 0x32(r3)
    bne lbl_fn_800E0A64_00000180
    clrlwi r0, r0, 24
    ori r0, r0, 0x1
    stb r0, 0x32(r3)
lbl_fn_800E0A64_00000180:
    lbz r0, 0x33(r3)
    lbz r4, 0x32(r3)
    and. r0, r4, r0
    beqlr
    lis r4, lbl_80779AB8@ha
    addi r4, r4, lbl_80779AB8@l
    b fn_8068B39C
    blr
}

asm void fn_800E0AA8(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    blr
}

asm void fn_800E0AB0(void)
{
    nofralloc
    lwz r0, 0x4(r3)
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

asm void dtor_800E0AC0(void)
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
    beq lbl_dtor_800E0AC0_000001F4
    li r4, 0x0
    bl fn_8068B50C
    cmpwi r31, 0x0
    ble lbl_dtor_800E0AC0_000001F4
    mr r3, r30
    bl dtor_80084684
lbl_dtor_800E0AC0_000001F4:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800E0B18(void)
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
    beq lbl_fn_800E0B18_0000026C
    lwz r5, 0x0(r3)
    addi r3, r3, 0x8
    cmpwi r4, 0x0
    subf r0, r5, r3
    stw r0, 0x3c(r5)
    beq lbl_fn_800E0B18_0000025C
    cmpwi r3, 0x0
    beq lbl_fn_800E0B18_0000025C
    li r4, 0x0
    bl fn_8068B50C
lbl_fn_800E0B18_0000025C:
    cmpwi r31, 0x0
    ble lbl_fn_800E0B18_0000026C
    mr r3, r30
    bl dtor_80084684
lbl_fn_800E0B18_0000026C:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800E0B90(void)
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
    beq lbl_fn_800E0B90_000002FC
    addic. r0, r3, 0x2c
    beq lbl_fn_800E0B90_000002C8
    lwz r0, 0x2c(r3)
    srwi. r0, r0, 31
    beq lbl_fn_800E0B90_000002C8
    lwz r3, 0x34(r3)
    bl dtor_80084684
lbl_fn_800E0B90_000002C8:
    cmpwi r30, 0x0
    beq lbl_fn_800E0B90_000002EC
    addic. r3, r30, 0x1c
    beq lbl_fn_800E0B90_000002EC
    beq lbl_fn_800E0B90_000002EC
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_800E0B90_000002EC
    bl fn_806952C4
lbl_fn_800E0B90_000002EC:
    cmpwi r31, 0x0
    ble lbl_fn_800E0B90_000002FC
    mr r3, r30
    bl dtor_80084684
lbl_fn_800E0B90_000002FC:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void dtor_800E0C20(void)
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
    beq lbl_dtor_800E0C20_00000368
    addic. r3, r3, 0x1c
    beq lbl_dtor_800E0C20_00000358
    beq lbl_dtor_800E0C20_00000358
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_dtor_800E0C20_00000358
    bl fn_806952C4
lbl_dtor_800E0C20_00000358:
    cmpwi r31, 0x0
    ble lbl_dtor_800E0C20_00000368
    mr r3, r30
    bl dtor_80084684
lbl_dtor_800E0C20_00000368:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void dtor_800E0C8C(void)
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
    beq lbl_dtor_800E0C8C_000003CC
    beq lbl_dtor_800E0C8C_000003BC
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_dtor_800E0C8C_000003BC
    bl fn_806952C4
lbl_dtor_800E0C8C_000003BC:
    cmpwi r31, 0x0
    ble lbl_dtor_800E0C8C_000003CC
    mr r3, r30
    bl dtor_80084684
lbl_dtor_800E0C8C_000003CC:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800E0CF0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r31, 0xc(r1)
    mr r31, r3
    stw r4, 0x0(r3)
    stw r5, 0x4(r3)
    stw r0, 0x8(r3)
    stw r0, 0xc(r3)
    stw r0, 0x10(r3)
    stw r0, 0x14(r3)
    stw r0, 0x18(r3)
    stw r0, 0x1c(r3)
    stw r0, 0x20(r3)
    stb r0, 0x24(r3)
    stw r0, 0x124(r3)
    stw r0, 0x128(r3)
    bl fn_800E1374
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800E0D54(void)
{
    nofralloc
    lwz r0, 0x8(r3)
    lwz r3, 0x4(r3)
    xor r0, r3, r0
    cntlzw r0, r0
    slw r0, r3, r0
    srwi r3, r0, 31
    blr
}

asm void fn_800E0D70(void)
{
    nofralloc
    lwz r4, 0x124(r3)
    li r0, 0x0
    stw r0, 0x128(r3)
    subi r0, r4, 0x2
    cmplwi r0, 0x1
    ble lbl_fn_800E0D70_000005B0
    cmpwi r4, 0x1
    beq lbl_fn_800E0D70_00000508
    cmpwi r4, 0x4
    beq lbl_fn_800E0D70_00000564
    b lbl_fn_800E0D70_000005C0
    b lbl_fn_800E0D70_00000508
lbl_fn_800E0D70_00000498:
    lwz r0, 0x0(r3)
    lbzux r5, r4, r0
    extsb r0, r5
    cmpwi r0, 0x3e
    bne lbl_fn_800E0D70_000004BC
    lwz r4, 0x8(r3)
    addi r0, r4, 0x1
    stw r0, 0x8(r3)
    b lbl_fn_800E0D70_000005C0
lbl_fn_800E0D70_000004BC:
    cmpwi r0, 0x2f
    bne lbl_fn_800E0D70_000004E8
    lbz r0, 0x1(r4)
    cmpwi r0, 0x3e
    bne lbl_fn_800E0D70_000004E8
    lwz r4, 0x8(r3)
    li r0, 0x1
    stw r0, 0x128(r3)
    addi r0, r4, 0x2
    stw r0, 0x8(r3)
    b lbl_fn_800E0D70_000005C0
lbl_fn_800E0D70_000004E8:
    cmplwi r5, 0x80
    blt lbl_fn_800E0D70_000004FC
    lwz r4, 0x8(r3)
    addi r0, r4, 0x1
    stw r0, 0x8(r3)
lbl_fn_800E0D70_000004FC:
    lwz r4, 0x8(r3)
    addi r0, r4, 0x1
    stw r0, 0x8(r3)
lbl_fn_800E0D70_00000508:
    lwz r4, 0x8(r3)
    lwz r0, 0x4(r3)
    cmplw r4, r0
    blt lbl_fn_800E0D70_00000498
    b lbl_fn_800E0D70_000005C0
    b lbl_fn_800E0D70_00000564
lbl_fn_800E0D70_00000520:
    lwz r4, 0x0(r3)
    lbzx r4, r4, r5
    extsb r0, r4
    cmpwi r0, 0x3e
    bne lbl_fn_800E0D70_00000544
    lwz r4, 0x8(r3)
    addi r0, r4, 0x1
    stw r0, 0x8(r3)
    b lbl_fn_800E0D70_000005C0
lbl_fn_800E0D70_00000544:
    cmplwi r4, 0x80
    blt lbl_fn_800E0D70_00000558
    lwz r4, 0x8(r3)
    addi r0, r4, 0x1
    stw r0, 0x8(r3)
lbl_fn_800E0D70_00000558:
    lwz r4, 0x8(r3)
    addi r0, r4, 0x1
    stw r0, 0x8(r3)
lbl_fn_800E0D70_00000564:
    lwz r5, 0x8(r3)
    lwz r0, 0x4(r3)
    cmplw r5, r0
    blt lbl_fn_800E0D70_00000520
    b lbl_fn_800E0D70_000005C0
    b lbl_fn_800E0D70_000005B0
lbl_fn_800E0D70_0000057C:
    lwz r4, 0x0(r3)
    lbzx r4, r4, r5
    extsb r0, r4
    cmpwi r0, 0x3c
    beq lbl_fn_800E0D70_000005C0
    cmplwi r4, 0x80
    blt lbl_fn_800E0D70_000005A4
    lwz r4, 0x8(r3)
    addi r0, r4, 0x1
    stw r0, 0x8(r3)
lbl_fn_800E0D70_000005A4:
    lwz r4, 0x8(r3)
    addi r0, r4, 0x1
    stw r0, 0x8(r3)
lbl_fn_800E0D70_000005B0:
    lwz r5, 0x8(r3)
    lwz r0, 0x4(r3)
    cmplw r5, r0
    blt lbl_fn_800E0D70_0000057C
lbl_fn_800E0D70_000005C0:
    lwz r0, 0x128(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800E0D70_000005D8
    li r0, 0x2
    stw r0, 0x124(r3)
    blr
lbl_fn_800E0D70_000005D8:
    lwz r5, 0x8(r3)
    lwz r4, 0x0(r3)
    lbzx r0, r4, r5
    extsb r0, r0
    cmpwi r0, 0x3c
    bne lbl_fn_800E0D70_00000658
    add r4, r5, r4
    lbz r0, 0x1(r4)
    extsb r0, r0
    cmpwi r0, 0x2f
    bne lbl_fn_800E0D70_00000618
    addi r0, r5, 0x2
    li r4, 0x2
    stw r4, 0x124(r3)
    stw r0, 0x8(r3)
    blr
lbl_fn_800E0D70_00000618:
    cmpwi r0, 0x2d
    bne lbl_fn_800E0D70_00000640
    lbz r0, 0x2(r4)
    cmpwi r0, 0x2d
    bne lbl_fn_800E0D70_00000640
    addi r0, r5, 0x3
    li r4, 0x4
    stw r4, 0x124(r3)
    stw r0, 0x8(r3)
    blr
lbl_fn_800E0D70_00000640:
    lwz r4, 0x8(r3)
    li r0, 0x1
    stw r0, 0x124(r3)
    addi r0, r4, 0x1
    stw r0, 0x8(r3)
    blr
lbl_fn_800E0D70_00000658:
    lwz r0, 0x124(r3)
    cmpwi r0, 0x1
    bne lbl_fn_800E0D70_00000670
    li r0, 0x3
    stw r0, 0x124(r3)
    blr
lbl_fn_800E0D70_00000670:
    li r0, 0x0
    stw r0, 0x124(r3)
    blr
}

asm void fn_800E0F84(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r26, 0x18(r1)
    mr r30, r3
    lwz r0, 0x128(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800E0F84_000006A4
    addi r3, r3, 0x18
    b lbl_fn_800E0F84_00000830
lbl_fn_800E0F84_000006A4:
    li r27, 0x0
    stb r27, 0x24(r3)
    lwz r31, 0x8(r3)
    li r28, 0x1
    lis r29, 0x80
    b lbl_fn_800E0F84_00000748
lbl_fn_800E0F84_000006BC:
    lwz r3, 0x0(r30)
    li r4, 0x0
    lbzx r26, r3, r31
    addi r3, r26, 0xf7
    clrlwi r0, r3, 24
    cmplwi r0, 0x17
    bgt lbl_fn_800E0F84_000006EC
    slw r3, r28, r3
    addi r0, r29, 0x13
    and. r0, r3, r0
    beq lbl_fn_800E0F84_000006EC
    li r4, 0x1
lbl_fn_800E0F84_000006EC:
    cmpwi r4, 0x0
    bne lbl_fn_800E0F84_00000754
    extsb r0, r26
    cmpwi r0, 0x3e
    beq lbl_fn_800E0F84_00000754
    addi r3, r30, 0x24
    bl strlen
    add r3, r30, r3
    stb r26, 0x24(r3)
    stb r27, 0x25(r3)
    lwz r4, 0x0(r30)
    lbzx r0, r4, r31
    cmplwi r0, 0x80
    blt lbl_fn_800E0F84_00000744
    addi r31, r31, 0x1
    addi r3, r30, 0x24
    lbzx r0, r4, r31
    extsb r26, r0
    bl strlen
    add r3, r30, r3
    stb r26, 0x24(r3)
    stb r27, 0x25(r3)
lbl_fn_800E0F84_00000744:
    addi r31, r31, 0x1
lbl_fn_800E0F84_00000748:
    lwz r0, 0x4(r30)
    cmplw r31, r0
    blt lbl_fn_800E0F84_000006BC
lbl_fn_800E0F84_00000754:
    lwz r0, 0xc(r30)
    addi r26, r30, 0x24
    srwi. r0, r0, 31
    bne lbl_fn_800E0F84_00000770
    lbz r0, 0xc(r30)
    clrlwi r27, r0, 25
    b lbl_fn_800E0F84_00000774
lbl_fn_800E0F84_00000770:
    lwz r27, 0x10(r30)
lbl_fn_800E0F84_00000774:
    lbz r0, 0x14(r1)
    mr r3, r26
    stb r0, 0x10(r1)
    bl strlen
    mr r0, r3
    mr r5, r27
    mr r6, r26
    addi r3, r30, 0xc
    add r7, r26, r0
    addi r8, r1, 0x10
    li r4, 0x0
    bl fn_80013F78
    lwz r0, 0x18(r30)
    srwi. r3, r0, 31
    bne lbl_fn_800E0F84_000007D4
    lwz r4, 0xc(r30)
    srwi. r0, r4, 31
    bne lbl_fn_800E0F84_000007D4
    lwz r3, 0x10(r30)
    lwz r0, 0x14(r30)
    stw r4, 0x18(r30)
    stw r3, 0x1c(r30)
    stw r0, 0x20(r30)
    b lbl_fn_800E0F84_0000082C
lbl_fn_800E0F84_000007D4:
    cmpwi r3, 0x0
    beq lbl_fn_800E0F84_000007E4
    lwz r5, 0x1c(r30)
    b lbl_fn_800E0F84_000007EC
lbl_fn_800E0F84_000007E4:
    lbz r0, 0x18(r30)
    clrlwi r5, r0, 25
lbl_fn_800E0F84_000007EC:
    lwz r0, 0xc(r30)
    srwi. r0, r0, 31
    bne lbl_fn_800E0F84_00000808
    lbz r0, 0xc(r30)
    addi r6, r30, 0xd
    clrlwi r4, r0, 25
    b lbl_fn_800E0F84_00000810
lbl_fn_800E0F84_00000808:
    lwz r6, 0x14(r30)
    lwz r4, 0x10(r30)
lbl_fn_800E0F84_00000810:
    lbz r0, 0xc(r1)
    add r7, r6, r4
    stb r0, 0x8(r1)
    addi r3, r30, 0x18
    addi r8, r1, 0x8
    li r4, 0x0
    bl fn_80013F78
lbl_fn_800E0F84_0000082C:
    addi r3, r30, 0xc
lbl_fn_800E0F84_00000830:
    lmw r26, 0x18(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_800E114C(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    li r5, 0x0
    stw r0, 0x44(r1)
    stmw r23, 0x1c(r1)
    mr r26, r3
    mr r27, r4
    lwz r0, 0x124(r3)
    stb r5, 0x24(r3)
    cmpwi r0, 0x1
    beq lbl_fn_800E114C_000008A4
    lwz r0, 0xc(r3)
    srwi. r0, r0, 31
    bne lbl_fn_800E114C_00000890
    lbz r0, 0xc(r3)
    stb r5, 0xd(r3)
    clrrwi r0, r0, 7
    stb r0, 0xc(r3)
    b lbl_fn_800E114C_0000089C
lbl_fn_800E114C_00000890:
    lwz r4, 0x14(r3)
    stb r5, 0x0(r4)
    stw r5, 0x10(r3)
lbl_fn_800E114C_0000089C:
    addi r3, r3, 0xc
    b lbl_fn_800E114C_00000A58
lbl_fn_800E114C_000008A4:
    lis r4, 0x80
    lwz r30, 0x8(r3)
    lwz r8, 0x4(r3)
    addi r4, r4, 0x13
    li r5, 0x1
    b lbl_fn_800E114C_0000090C
lbl_fn_800E114C_000008BC:
    lwz r6, 0x0(r3)
    li r7, 0x0
    lbzx r9, r6, r30
    addi r6, r9, 0xf7
    clrlwi r0, r6, 24
    cmplwi r0, 0x17
    bgt lbl_fn_800E114C_000008E8
    slw r0, r5, r6
    and. r0, r0, r4
    beq lbl_fn_800E114C_000008E8
    li r7, 0x1
lbl_fn_800E114C_000008E8:
    cmpwi r7, 0x0
    bne lbl_fn_800E114C_00000914
    extsb r0, r9
    cmpwi r0, 0x3e
    beq lbl_fn_800E114C_00000914
    cmplwi r9, 0x80
    blt lbl_fn_800E114C_00000908
    addi r30, r30, 0x1
lbl_fn_800E114C_00000908:
    addi r30, r30, 0x1
lbl_fn_800E114C_0000090C:
    cmplw r30, r8
    blt lbl_fn_800E114C_000008BC
lbl_fn_800E114C_00000914:
    li r29, 0x0
    li r28, 0x0
    li r31, 0x1
    lis r24, 0x80
    li r25, 0x0
    b lbl_fn_800E114C_000009F8
lbl_fn_800E114C_0000092C:
    lwz r3, 0x0(r26)
    lbzx r23, r3, r30
    extsb r0, r23
    cmpwi r0, 0x3e
    beq lbl_fn_800E114C_00000A04
    cmpwi r28, 0x0
    bne lbl_fn_800E114C_00000978
    addi r3, r23, 0xf7
    li r4, 0x0
    clrlwi r0, r3, 24
    cmplwi r0, 0x17
    bgt lbl_fn_800E114C_00000970
    slw r3, r31, r3
    addi r0, r24, 0x13
    and. r0, r3, r0
    beq lbl_fn_800E114C_00000970
    li r4, 0x1
lbl_fn_800E114C_00000970:
    cmpwi r4, 0x0
    bne lbl_fn_800E114C_000009F4
lbl_fn_800E114C_00000978:
    extsb r0, r23
    cmpwi r0, 0x22
    bne lbl_fn_800E114C_00000998
    cntlzw r0, r28
    srwi. r28, r0, 5
    bne lbl_fn_800E114C_000009EC
    addi r29, r29, 0x1
    b lbl_fn_800E114C_000009EC
lbl_fn_800E114C_00000998:
    cmpwi r28, 0x0
    beq lbl_fn_800E114C_000009EC
    cmpw r27, r29
    bne lbl_fn_800E114C_000009EC
    addi r3, r26, 0x24
    bl strlen
    add r3, r26, r3
    stb r23, 0x24(r3)
    stb r25, 0x25(r3)
    lwz r4, 0x0(r26)
    lbzx r0, r4, r30
    cmplwi r0, 0x80
    blt lbl_fn_800E114C_000009EC
    addi r30, r30, 0x1
    addi r3, r26, 0x24
    lbzx r0, r4, r30
    extsb r23, r0
    bl strlen
    add r3, r26, r3
    stb r23, 0x24(r3)
    stb r25, 0x25(r3)
lbl_fn_800E114C_000009EC:
    cmpw r27, r29
    blt lbl_fn_800E114C_00000A04
lbl_fn_800E114C_000009F4:
    addi r30, r30, 0x1
lbl_fn_800E114C_000009F8:
    lwz r0, 0x4(r26)
    cmplw r30, r0
    blt lbl_fn_800E114C_0000092C
lbl_fn_800E114C_00000A04:
    lwz r0, 0xc(r26)
    addi r23, r26, 0x24
    srwi. r0, r0, 31
    bne lbl_fn_800E114C_00000A20
    lbz r0, 0xc(r26)
    clrlwi r24, r0, 25
    b lbl_fn_800E114C_00000A24
lbl_fn_800E114C_00000A20:
    lwz r24, 0x10(r26)
lbl_fn_800E114C_00000A24:
    lbz r0, 0xc(r1)
    mr r3, r23
    stb r0, 0x8(r1)
    bl strlen
    mr r0, r3
    mr r5, r24
    mr r6, r23
    addi r3, r26, 0xc
    add r7, r23, r0
    addi r8, r1, 0x8
    li r4, 0x0
    bl fn_80013F78
    addi r3, r26, 0xc
lbl_fn_800E114C_00000A58:
    lmw r23, 0x1c(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_800E1374(void)
{
    nofralloc
    li r6, 0x1
    lis r5, 0x80
    b lbl_fn_800E1374_00000AD0
lbl_fn_800E1374_00000A78:
    lwz r4, 0x0(r3)
    li r7, 0x0
    lbzx r9, r4, r8
    addi r4, r9, 0xf7
    clrlwi r0, r4, 24
    cmplwi r0, 0x17
    bgt lbl_fn_800E1374_00000AA8
    slw r4, r6, r4
    addi r0, r5, 0x13
    and. r0, r4, r0
    beq lbl_fn_800E1374_00000AA8
    li r7, 0x1
lbl_fn_800E1374_00000AA8:
    cmpwi r7, 0x0
    beq lbl_fn_800E1374_00000AE0
    cmplwi r9, 0x80
    blt lbl_fn_800E1374_00000AC4
    lwz r4, 0x8(r3)
    addi r0, r4, 0x1
    stw r0, 0x8(r3)
lbl_fn_800E1374_00000AC4:
    lwz r4, 0x8(r3)
    addi r0, r4, 0x1
    stw r0, 0x8(r3)
lbl_fn_800E1374_00000AD0:
    lwz r10, 0x4(r3)
    lwz r8, 0x8(r3)
    cmplw r8, r10
    blt lbl_fn_800E1374_00000A78
lbl_fn_800E1374_00000AE0:
    cmplw r8, r10
    bgelr
    lwz r0, 0x0(r3)
    add r4, r0, r8
    lbzx r0, r8, r0
    cmpwi r0, 0x3c
    bnelr
    lbz r0, 0x1(r4)
    extsb r0, r0
    cmpwi r0, 0x3f
    beq lbl_fn_800E1374_00000B14
    cmpwi r0, 0x21
    bnelr
lbl_fn_800E1374_00000B14:
    lwz r4, 0x8(r3)
    addi r0, r4, 0x3
    stw r0, 0x8(r3)
    b lbl_fn_800E1374_00000B84
lbl_fn_800E1374_00000B24:
    lwz r0, 0x0(r3)
    add r4, r0, r4
    lbz r0, -0x1(r4)
    extsb r0, r0
    cmpwi r0, 0x3f
    beq lbl_fn_800E1374_00000B44
    cmpwi r0, 0x21
    bne lbl_fn_800E1374_00000B60
lbl_fn_800E1374_00000B44:
    lbz r0, 0x0(r4)
    cmpwi r0, 0x3e
    bne lbl_fn_800E1374_00000B60
    lwz r4, 0x8(r3)
    addi r0, r4, 0x1
    stw r0, 0x8(r3)
    b lbl_fn_800E1374_00000AD0
lbl_fn_800E1374_00000B60:
    lbz r0, 0x0(r4)
    cmplwi r0, 0x80
    blt lbl_fn_800E1374_00000B78
    lwz r4, 0x8(r3)
    addi r0, r4, 0x1
    stw r0, 0x8(r3)
lbl_fn_800E1374_00000B78:
    lwz r4, 0x8(r3)
    addi r0, r4, 0x1
    stw r0, 0x8(r3)
lbl_fn_800E1374_00000B84:
    lwz r4, 0x8(r3)
    lwz r0, 0x4(r3)
    cmplw r4, r0
    blt lbl_fn_800E1374_00000B24
    b lbl_fn_800E1374_00000AD0
    blr
}

asm void fn_800E14A4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    li r0, 0x0
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stb r0, 0x0(r3)
    stb r0, 0x1(r3)
    stw r4, 0x4(r3)
    lwz r3, 0x0(r4)
    lbz r0, 0x32(r3)
    cmpwi r0, 0x0
    bne lbl_fn_800E14A4_00000CCC
    lwz r29, 0x34(r3)
    cmpwi r29, 0x0
    beq lbl_fn_800E14A4_00000C6C
    mr r4, r29
    addi r3, r1, 0x8
    bl fn_800E14A4
    li r0, 0x1
    stb r0, 0x9(r1)
    lwz r3, 0x0(r29)
    lwz r3, 0x24(r3)
    cmpwi r3, 0x0
    beq lbl_fn_800E14A4_00000C3C
    lwz r12, 0x0(r3)
    li r30, 0x0
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    cmpwi r3, -0x1
    bne lbl_fn_800E14A4_00000C28
    li r30, 0x1
lbl_fn_800E14A4_00000C28:
    cmpwi r30, 0x0
    beq lbl_fn_800E14A4_00000C3C
    lwz r3, 0x0(r29)
    li r4, 0x1
    bl fn_800E0A64
lbl_fn_800E14A4_00000C3C:
    lwz r3, 0xc(r1)
    lwz r4, 0x0(r3)
    lbz r0, 0x32(r4)
    andi. r0, r0, 0x5
    bne lbl_fn_800E14A4_00000C6C
    lhz r0, 0x30(r4)
    rlwinm. r0, r0, 0, 18, 18
    beq lbl_fn_800E14A4_00000C6C
    lbz r0, 0x9(r1)
    cmpwi r0, 0x0
    bne lbl_fn_800E14A4_00000C6C
    bl fn_800E1A48
lbl_fn_800E14A4_00000C6C:
    lwz r3, 0x4(r31)
    lwz r3, 0x0(r3)
    lbz r0, 0x32(r3)
    cmpwi r0, 0x0
    bne lbl_fn_800E14A4_00000C8C
    li r0, 0x1
    stb r0, 0x0(r31)
    b lbl_fn_800E14A4_00000D08
lbl_fn_800E14A4_00000C8C:
    ori r0, r0, 0x4
    stb r0, 0x32(r3)
    lwz r0, 0x24(r3)
    cmpwi r0, 0x0
    bne lbl_fn_800E14A4_00000CAC
    lbz r0, 0x32(r3)
    ori r0, r0, 0x1
    stb r0, 0x32(r3)
lbl_fn_800E14A4_00000CAC:
    lbz r4, 0x33(r3)
    lbz r0, 0x32(r3)
    and. r0, r0, r4
    beq lbl_fn_800E14A4_00000D08
    lis r4, lbl_80779AB8@ha
    addi r4, r4, lbl_80779AB8@l
    bl fn_8068B39C
    b lbl_fn_800E14A4_00000D08
lbl_fn_800E14A4_00000CCC:
    ori r0, r0, 0x4
    stb r0, 0x32(r3)
    lwz r0, 0x24(r3)
    cmpwi r0, 0x0
    bne lbl_fn_800E14A4_00000CEC
    lbz r0, 0x32(r3)
    ori r0, r0, 0x1
    stb r0, 0x32(r3)
lbl_fn_800E14A4_00000CEC:
    lbz r4, 0x33(r3)
    lbz r0, 0x32(r3)
    and. r0, r0, r4
    beq lbl_fn_800E14A4_00000D08
    lis r4, lbl_80779AB8@ha
    addi r4, r4, lbl_80779AB8@l
    bl fn_8068B39C
lbl_fn_800E14A4_00000D08:
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800E1630(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x44(r1)
    stmw r27, 0x2c(r1)
    mr r29, r3
    mr r30, r4
    beq lbl_fn_800E1630_0000108C
    lwz r31, 0x4(r3)
    lwz r5, 0x0(r31)
    lbz r4, 0x32(r5)
    andi. r0, r4, 0x5
    bne lbl_fn_800E1630_0000107C
    lhz r0, 0x30(r5)
    rlwinm. r0, r0, 0, 18, 18
    beq lbl_fn_800E1630_0000107C
    lbz r0, 0x1(r3)
    cmpwi r0, 0x0
    bne lbl_fn_800E1630_0000107C
    cmpwi r4, 0x0
    li r0, 0x0
    stb r0, 0x8(r1)
    stb r0, 0x9(r1)
    stw r31, 0xc(r1)
    bne lbl_fn_800E1630_00000F04
    lwz r27, 0x34(r5)
    cmpwi r27, 0x0
    beq lbl_fn_800E1630_00000EA4
    mr r4, r27
    addi r3, r1, 0x10
    bl fn_800E14A4
    li r0, 0x1
    stb r0, 0x11(r1)
    lwz r3, 0x0(r27)
    lwz r3, 0x24(r3)
    cmpwi r3, 0x0
    beq lbl_fn_800E1630_00000DF0
    lwz r12, 0x0(r3)
    li r28, 0x0
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    cmpwi r3, -0x1
    bne lbl_fn_800E1630_00000DDC
    li r28, 0x1
lbl_fn_800E1630_00000DDC:
    cmpwi r28, 0x0
    beq lbl_fn_800E1630_00000DF0
    lwz r3, 0x0(r27)
    li r4, 0x1
    bl fn_800E0A64
lbl_fn_800E1630_00000DF0:
    lwz r27, 0x14(r1)
    lwz r3, 0x0(r27)
    lbz r0, 0x32(r3)
    andi. r0, r0, 0x5
    bne lbl_fn_800E1630_00000EA4
    lhz r0, 0x30(r3)
    rlwinm. r0, r0, 0, 18, 18
    beq lbl_fn_800E1630_00000EA4
    lbz r0, 0x11(r1)
    cmpwi r0, 0x0
    bne lbl_fn_800E1630_00000EA4
    mr r4, r27
    addi r3, r1, 0x18
    bl fn_800E14A4
    li r0, 0x1
    stb r0, 0x19(r1)
    lwz r3, 0x0(r27)
    lwz r3, 0x24(r3)
    cmpwi r3, 0x0
    beq lbl_fn_800E1630_00000E74
    lwz r12, 0x0(r3)
    li r28, 0x0
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    cmpwi r3, -0x1
    bne lbl_fn_800E1630_00000E60
    li r28, 0x1
lbl_fn_800E1630_00000E60:
    cmpwi r28, 0x0
    beq lbl_fn_800E1630_00000E74
    lwz r3, 0x0(r27)
    li r4, 0x1
    bl fn_800E0A64
lbl_fn_800E1630_00000E74:
    lwz r3, 0x1c(r1)
    lwz r4, 0x0(r3)
    lbz r0, 0x32(r4)
    andi. r0, r0, 0x5
    bne lbl_fn_800E1630_00000EA4
    lhz r0, 0x30(r4)
    rlwinm. r0, r0, 0, 18, 18
    beq lbl_fn_800E1630_00000EA4
    lbz r0, 0x19(r1)
    cmpwi r0, 0x0
    bne lbl_fn_800E1630_00000EA4
    bl fn_800E1A48
lbl_fn_800E1630_00000EA4:
    lwz r3, 0xc(r1)
    lwz r3, 0x0(r3)
    lbz r0, 0x32(r3)
    cmpwi r0, 0x0
    bne lbl_fn_800E1630_00000EC4
    li r0, 0x1
    stb r0, 0x8(r1)
    b lbl_fn_800E1630_00000F44
lbl_fn_800E1630_00000EC4:
    ori r0, r0, 0x4
    stb r0, 0x32(r3)
    lwz r0, 0x24(r3)
    cmpwi r0, 0x0
    bne lbl_fn_800E1630_00000EE4
    lbz r0, 0x32(r3)
    ori r0, r0, 0x1
    stb r0, 0x32(r3)
lbl_fn_800E1630_00000EE4:
    lbz r4, 0x33(r3)
    lbz r0, 0x32(r3)
    and. r0, r0, r4
    beq lbl_fn_800E1630_00000F44
    lis r4, lbl_80779AB8@ha
    addi r4, r4, lbl_80779AB8@l
    bl fn_8068B39C
    b lbl_fn_800E1630_00000F44
lbl_fn_800E1630_00000F04:
    ori r0, r4, 0x4
    stb r0, 0x32(r5)
    lwz r0, 0x24(r5)
    cmpwi r0, 0x0
    bne lbl_fn_800E1630_00000F24
    lbz r0, 0x32(r5)
    ori r0, r0, 0x1
    stb r0, 0x32(r5)
lbl_fn_800E1630_00000F24:
    lbz r3, 0x33(r5)
    lbz r0, 0x32(r5)
    and. r0, r0, r3
    beq lbl_fn_800E1630_00000F44
    lis r4, lbl_80779AB8@ha
    mr r3, r5
    addi r4, r4, lbl_80779AB8@l
    bl fn_8068B39C
lbl_fn_800E1630_00000F44:
    lwz r3, 0x0(r31)
    li r0, 0x1
    stb r0, 0x9(r1)
    lwz r3, 0x24(r3)
    cmpwi r3, 0x0
    beq lbl_fn_800E1630_00000FC8
    lwz r12, 0x0(r3)
    li r28, 0x0
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    cmpwi r3, -0x1
    bne lbl_fn_800E1630_00000F7C
    li r28, 0x1
lbl_fn_800E1630_00000F7C:
    cmpwi r28, 0x0
    beq lbl_fn_800E1630_00000FC8
    lwz r3, 0x0(r31)
    lbz r0, 0x32(r3)
    ori r0, r0, 0x1
    stb r0, 0x32(r3)
    lwz r0, 0x24(r3)
    cmpwi r0, 0x0
    bne lbl_fn_800E1630_00000FAC
    lbz r0, 0x32(r3)
    ori r0, r0, 0x1
    stb r0, 0x32(r3)
lbl_fn_800E1630_00000FAC:
    lbz r0, 0x33(r3)
    lbz r4, 0x32(r3)
    and. r0, r4, r0
    beq lbl_fn_800E1630_00000FC8
    lis r4, lbl_80779AB8@ha
    addi r4, r4, lbl_80779AB8@l
    bl fn_8068B39C
lbl_fn_800E1630_00000FC8:
    lwz r27, 0xc(r1)
    lwz r3, 0x0(r27)
    lbz r0, 0x32(r3)
    andi. r0, r0, 0x5
    bne lbl_fn_800E1630_0000107C
    lhz r0, 0x30(r3)
    rlwinm. r0, r0, 0, 18, 18
    beq lbl_fn_800E1630_0000107C
    lbz r0, 0x9(r1)
    cmpwi r0, 0x0
    bne lbl_fn_800E1630_0000107C
    mr r4, r27
    addi r3, r1, 0x20
    bl fn_800E14A4
    li r0, 0x1
    stb r0, 0x21(r1)
    lwz r3, 0x0(r27)
    lwz r3, 0x24(r3)
    cmpwi r3, 0x0
    beq lbl_fn_800E1630_0000104C
    lwz r12, 0x0(r3)
    li r31, 0x0
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    cmpwi r3, -0x1
    bne lbl_fn_800E1630_00001038
    li r31, 0x1
lbl_fn_800E1630_00001038:
    cmpwi r31, 0x0
    beq lbl_fn_800E1630_0000104C
    lwz r3, 0x0(r27)
    li r4, 0x1
    bl fn_800E0A64
lbl_fn_800E1630_0000104C:
    lwz r3, 0x24(r1)
    lwz r4, 0x0(r3)
    lbz r0, 0x32(r4)
    andi. r0, r0, 0x5
    bne lbl_fn_800E1630_0000107C
    lhz r0, 0x30(r4)
    rlwinm. r0, r0, 0, 18, 18
    beq lbl_fn_800E1630_0000107C
    lbz r0, 0x21(r1)
    cmpwi r0, 0x0
    bne lbl_fn_800E1630_0000107C
    bl fn_800E1A48
lbl_fn_800E1630_0000107C:
    cmpwi r30, 0x0
    ble lbl_fn_800E1630_0000108C
    mr r3, r29
    bl dtor_80084684
lbl_fn_800E1630_0000108C:
    mr r3, r29
    lmw r27, 0x2c(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_800E19AC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lwz r6, 0x0(r4)
    stw r0, 0x24(r1)
    srwi. r0, r6, 31
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    bne lbl_fn_800E19AC_000010E4
    lwz r5, 0x4(r4)
    lwz r0, 0x8(r4)
    stw r6, 0x0(r3)
    stw r5, 0x4(r3)
    stw r0, 0x8(r3)
    b lbl_fn_800E19AC_00001124
lbl_fn_800E19AC_000010E4:
    li r0, 0x0
    stw r0, 0x0(r3)
    lwz r4, 0x4(r4)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    bl fn_80013DC4
    lbz r5, 0x8(r1)
    mr r3, r30
    stb r5, 0xc(r1)
    addi r8, r1, 0xc
    lwz r6, 0x8(r31)
    li r4, 0x0
    lwz r0, 0x4(r31)
    li r5, 0x0
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_800E19AC_00001124:
    mr r3, r30
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800E1A48(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r3
    stw r30, 0x38(r1)
    stw r29, 0x34(r1)
    lwz r5, 0x0(r3)
    stb r4, 0x20(r1)
    lbz r0, 0x32(r5)
    stb r4, 0x21(r1)
    cmpwi r0, 0x0
    stw r3, 0x24(r1)
    bne lbl_fn_800E1A48_000012D0
    lwz r29, 0x34(r5)
    cmpwi r29, 0x0
    beq lbl_fn_800E1A48_00001270
    mr r4, r29
    addi r3, r1, 0x18
    bl fn_800E14A4
    li r0, 0x1
    stb r0, 0x19(r1)
    lwz r3, 0x0(r29)
    lwz r3, 0x24(r3)
    cmpwi r3, 0x0
    beq lbl_fn_800E1A48_000011E0
    lwz r12, 0x0(r3)
    li r30, 0x0
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    cmpwi r3, -0x1
    bne lbl_fn_800E1A48_000011CC
    li r30, 0x1
lbl_fn_800E1A48_000011CC:
    cmpwi r30, 0x0
    beq lbl_fn_800E1A48_000011E0
    lwz r3, 0x0(r29)
    li r4, 0x1
    bl fn_800E0A64
lbl_fn_800E1A48_000011E0:
    lwz r29, 0x1c(r1)
    lwz r3, 0x0(r29)
    lbz r0, 0x32(r3)
    andi. r0, r0, 0x5
    bne lbl_fn_800E1A48_00001270
    lhz r0, 0x30(r3)
    rlwinm. r0, r0, 0, 18, 18
    beq lbl_fn_800E1A48_00001270
    lbz r0, 0x19(r1)
    cmpwi r0, 0x0
    bne lbl_fn_800E1A48_00001270
    mr r4, r29
    addi r3, r1, 0x10
    bl fn_800E14A4
    li r0, 0x1
    stb r0, 0x11(r1)
    lwz r3, 0x0(r29)
    lwz r3, 0x24(r3)
    cmpwi r3, 0x0
    beq lbl_fn_800E1A48_00001264
    lwz r12, 0x0(r3)
    li r30, 0x0
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    cmpwi r3, -0x1
    bne lbl_fn_800E1A48_00001250
    li r30, 0x1
lbl_fn_800E1A48_00001250:
    cmpwi r30, 0x0
    beq lbl_fn_800E1A48_00001264
    lwz r3, 0x0(r29)
    li r4, 0x1
    bl fn_800E0A64
lbl_fn_800E1A48_00001264:
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800E1630
lbl_fn_800E1A48_00001270:
    lwz r3, 0x24(r1)
    lwz r3, 0x0(r3)
    lbz r0, 0x32(r3)
    cmpwi r0, 0x0
    bne lbl_fn_800E1A48_00001290
    li r0, 0x1
    stb r0, 0x20(r1)
    b lbl_fn_800E1A48_00001310
lbl_fn_800E1A48_00001290:
    ori r0, r0, 0x4
    stb r0, 0x32(r3)
    lwz r0, 0x24(r3)
    cmpwi r0, 0x0
    bne lbl_fn_800E1A48_000012B0
    lbz r0, 0x32(r3)
    ori r0, r0, 0x1
    stb r0, 0x32(r3)
lbl_fn_800E1A48_000012B0:
    lbz r0, 0x33(r3)
    lbz r4, 0x32(r3)
    and. r0, r4, r0
    beq lbl_fn_800E1A48_00001310
    lis r4, lbl_80779AB8@ha
    addi r4, r4, lbl_80779AB8@l
    bl fn_8068B39C
    b lbl_fn_800E1A48_00001310
lbl_fn_800E1A48_000012D0:
    ori r0, r0, 0x4
    stb r0, 0x32(r5)
    lwz r0, 0x24(r5)
    cmpwi r0, 0x0
    bne lbl_fn_800E1A48_000012F0
    lbz r0, 0x32(r5)
    ori r0, r0, 0x1
    stb r0, 0x32(r5)
lbl_fn_800E1A48_000012F0:
    lbz r0, 0x33(r5)
    lbz r3, 0x32(r5)
    and. r0, r3, r0
    beq lbl_fn_800E1A48_00001310
    lis r4, lbl_80779AB8@ha
    mr r3, r5
    addi r4, r4, lbl_80779AB8@l
    bl fn_8068B39C
lbl_fn_800E1A48_00001310:
    lwz r3, 0x0(r31)
    li r0, 0x1
    stb r0, 0x21(r1)
    lwz r3, 0x24(r3)
    cmpwi r3, 0x0
    beq lbl_fn_800E1A48_00001394
    lwz r12, 0x0(r3)
    li r29, 0x0
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    cmpwi r3, -0x1
    bne lbl_fn_800E1A48_00001348
    li r29, 0x1
lbl_fn_800E1A48_00001348:
    cmpwi r29, 0x0
    beq lbl_fn_800E1A48_00001394
    lwz r3, 0x0(r31)
    lbz r0, 0x32(r3)
    ori r0, r0, 0x1
    stb r0, 0x32(r3)
    lwz r0, 0x24(r3)
    cmpwi r0, 0x0
    bne lbl_fn_800E1A48_00001378
    lbz r0, 0x32(r3)
    ori r0, r0, 0x1
    stb r0, 0x32(r3)
lbl_fn_800E1A48_00001378:
    lbz r4, 0x33(r3)
    lbz r0, 0x32(r3)
    and. r0, r0, r4
    beq lbl_fn_800E1A48_00001394
    lis r4, lbl_80779AB8@ha
    addi r4, r4, lbl_80779AB8@l
    bl fn_8068B39C
lbl_fn_800E1A48_00001394:
    lwz r29, 0x24(r1)
    lwz r3, 0x0(r29)
    lbz r0, 0x32(r3)
    andi. r0, r0, 0x5
    bne lbl_fn_800E1A48_00001424
    lhz r0, 0x30(r3)
    rlwinm. r0, r0, 0, 18, 18
    beq lbl_fn_800E1A48_00001424
    lbz r0, 0x21(r1)
    cmpwi r0, 0x0
    bne lbl_fn_800E1A48_00001424
    mr r4, r29
    addi r3, r1, 0x8
    bl fn_800E14A4
    li r0, 0x1
    stb r0, 0x9(r1)
    lwz r3, 0x0(r29)
    lwz r3, 0x24(r3)
    cmpwi r3, 0x0
    beq lbl_fn_800E1A48_00001418
    lwz r12, 0x0(r3)
    li r30, 0x0
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    cmpwi r3, -0x1
    bne lbl_fn_800E1A48_00001404
    li r30, 0x1
lbl_fn_800E1A48_00001404:
    cmpwi r30, 0x0
    beq lbl_fn_800E1A48_00001418
    lwz r3, 0x0(r29)
    li r4, 0x1
    bl fn_800E0A64
lbl_fn_800E1A48_00001418:
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800E1630
lbl_fn_800E1A48_00001424:
    mr r3, r31
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_800E1D4C(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_800E1D54(void)
{
    nofralloc
    li r3, -0x1
    blr
}

asm void fn_800E1D5C(void)
{
    nofralloc
    lwz r4, 0x20(r4)
    lwz r0, 0x0(r4)
    stw r0, 0x0(r3)
    lwz r4, 0x4(r4)
    stw r4, 0x4(r3)
    cmpwi r4, 0x0
    beqlr
    lwz r3, 0x4(r4)
    addi r0, r3, 0x1
    stw r0, 0x4(r4)
    blr
}

asm void fn_800E1D88(void)
{
    nofralloc
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_800E1D88_00001494
    li r3, -0x1
    blr
lbl_fn_800E1D88_00001494:
    lwz r4, 0x14(r3)
    lwz r0, 0x28(r3)
    cmplw r0, r4
    bge lbl_fn_800E1D88_000014A8
    stw r4, 0x28(r3)
lbl_fn_800E1D88_000014A8:
    lwz r5, 0x28(r3)
    lwz r0, 0xc(r3)
    cmplw r0, r5
    bge lbl_fn_800E1D88_000014BC
    stw r5, 0xc(r3)
lbl_fn_800E1D88_000014BC:
    lwz r4, 0x8(r3)
    lwz r0, 0xc(r3)
    cmplw r4, r0
    bge lbl_fn_800E1D88_000014D4
    lbz r3, 0x0(r4)
    blr
lbl_fn_800E1D88_000014D4:
    li r3, -0x1
    blr
}

asm void fn_800E1DE4(void)
{
    nofralloc
    lwz r7, 0x8(r3)
    lwz r0, 0x4(r3)
    cmplw r0, r7
    blt lbl_fn_800E1DE4_000014F4
    li r3, -0x1
    blr
lbl_fn_800E1DE4_000014F4:
    cmpwi r4, -0x1
    bne lbl_fn_800E1DE4_0000151C
    addi r5, r4, 0x1
    subfic r0, r4, -0x1
    nor r0, r5, r0
    subi r5, r7, 0x1
    stw r5, 0x8(r3)
    srawi r0, r0, 31
    andc r3, r4, r0
    blr
lbl_fn_800E1DE4_0000151C:
    lbz r0, 0x24(r3)
    extsb r6, r4
    rlwinm. r0, r0, 0, 27, 27
    bne lbl_fn_800E1DE4_00001544
    lbz r0, -0x1(r7)
    extsb r0, r0
    cmpw r6, r0
    beq lbl_fn_800E1DE4_00001544
    li r3, -0x1
    blr
lbl_fn_800E1DE4_00001544:
    lwz r5, 0x8(r3)
    subi r5, r5, 0x1
    stw r5, 0x8(r3)
    mr r3, r4
    stb r6, 0x0(r5)
    blr
}

asm void fn_800E1E64(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r27, 0x1c(r1)
    mr r27, r3
    mr r28, r4
    lbz r0, 0x24(r3)
    rlwinm. r0, r0, 0, 27, 27
    bne lbl_fn_800E1E64_00001588
    li r3, -0x1
    b lbl_fn_800E1E64_00001748
lbl_fn_800E1E64_00001588:
    cmpwi r4, -0x1
    bne lbl_fn_800E1E64_00001598
    li r3, 0x0
    b lbl_fn_800E1E64_00001748
lbl_fn_800E1E64_00001598:
    lwz r5, 0x14(r3)
    lwz r0, 0x18(r3)
    cmplw r5, r0
    bge lbl_fn_800E1E64_000015F0
    stb r4, 0x0(r5)
    lwz r4, 0x14(r3)
    lwz r0, 0x28(r3)
    addi r4, r4, 0x1
    stw r4, 0x14(r3)
    cmplw r0, r4
    bge lbl_fn_800E1E64_000015C8
    stw r4, 0x28(r3)
lbl_fn_800E1E64_000015C8:
    lbz r0, 0x24(r3)
    rlwinm. r0, r0, 0, 28, 28
    beq lbl_fn_800E1E64_000015E8
    lwz r5, 0x28(r3)
    lwz r0, 0xc(r3)
    cmplw r0, r5
    bge lbl_fn_800E1E64_000015E8
    stw r5, 0xc(r3)
lbl_fn_800E1E64_000015E8:
    mr r3, r28
    b lbl_fn_800E1E64_00001748
lbl_fn_800E1E64_000015F0:
    lwz r7, 0x10(r3)
    lwz r0, 0x28(r3)
    subf r5, r7, r5
    lwz r6, 0x4(r3)
    subf r29, r7, r0
    lwz r0, 0x8(r3)
    addi r30, r5, 0x1
    cmpw r29, r30
    subf r31, r6, r0
    bge lbl_fn_800E1E64_0000161C
    mr r29, r30
lbl_fn_800E1E64_0000161C:
    stb r4, 0x10(r1)
    lwz r0, 0x2c(r3)
    srwi. r0, r0, 31
    bne lbl_fn_800E1E64_00001638
    lbz r0, 0x2c(r3)
    clrlwi r4, r0, 25
    b lbl_fn_800E1E64_0000163C
lbl_fn_800E1E64_00001638:
    lwz r4, 0x30(r3)
lbl_fn_800E1E64_0000163C:
    lbz r0, 0x8(r1)
    addi r6, r1, 0x10
    stb r0, 0xc(r1)
    addi r7, r1, 0x11
    addi r8, r1, 0xc
    li r5, 0x0
    addi r3, r3, 0x2c
    bl fn_80013F78
    lwz r3, 0x2c(r27)
    srwi r0, r3, 31
    cntlzw r0, r0
    srwi. r0, r0, 5
    beq lbl_fn_800E1E64_00001678
    li r3, 0xb
    b lbl_fn_800E1E64_0000167C
lbl_fn_800E1E64_00001678:
    clrlwi r3, r3, 1
lbl_fn_800E1E64_0000167C:
    cmpwi r0, 0x0
    subi r5, r3, 0x1
    beq lbl_fn_800E1E64_00001694
    lbz r0, 0x2c(r27)
    clrlwi r0, r0, 25
    b lbl_fn_800E1E64_00001698
lbl_fn_800E1E64_00001694:
    lwz r0, 0x30(r27)
lbl_fn_800E1E64_00001698:
    cmplw r5, r0
    ble lbl_fn_800E1E64_000016BC
    subf r6, r0, r5
    mr r4, r0
    addi r3, r27, 0x2c
    li r5, 0x0
    li r7, 0x0
    bl fn_800E2778
    b lbl_fn_800E1E64_000016D4
lbl_fn_800E1E64_000016BC:
    mr r4, r5
    addi r3, r27, 0x2c
    subf r5, r5, r0
    li r6, 0x0
    li r7, 0x0
    bl fn_800E2778
lbl_fn_800E1E64_000016D4:
    lwz r0, 0x2c(r27)
    srwi. r0, r0, 31
    bne lbl_fn_800E1E64_000016E8
    addi r6, r27, 0x2d
    b lbl_fn_800E1E64_000016EC
lbl_fn_800E1E64_000016E8:
    lwz r6, 0x34(r27)
lbl_fn_800E1E64_000016EC:
    lbz r0, 0x24(r27)
    rlwinm. r0, r0, 0, 28, 28
    beq lbl_fn_800E1E64_0000170C
    add r3, r6, r31
    add r0, r6, r29
    stw r6, 0x4(r27)
    stw r3, 0x8(r27)
    stw r0, 0xc(r27)
lbl_fn_800E1E64_0000170C:
    lwz r0, 0x2c(r27)
    srwi. r0, r0, 31
    bne lbl_fn_800E1E64_00001724
    lbz r0, 0x2c(r27)
    clrlwi r0, r0, 25
    b lbl_fn_800E1E64_00001728
lbl_fn_800E1E64_00001724:
    lwz r0, 0x30(r27)
lbl_fn_800E1E64_00001728:
    add r5, r6, r0
    add r4, r6, r30
    add r0, r6, r29
    stw r6, 0x10(r27)
    mr r3, r28
    stw r5, 0x18(r27)
    stw r4, 0x14(r27)
    stw r0, 0x28(r27)
lbl_fn_800E1E64_00001748:
    lmw r27, 0x1c(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_800E2064(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    rlwinm r0, r8, 0, 27, 28
    li r9, 0x18
    cmplw r9, r0
    stw r31, 0xc(r1)
    bne lbl_fn_800E2064_0000177C
    cmplwi r7, 0x2
    beq lbl_fn_800E2064_00001784
lbl_fn_800E2064_0000177C:
    cmpwi r0, 0x0
    bne lbl_fn_800E2064_0000179C
lbl_fn_800E2064_00001784:
    li r4, -0x1
    li r0, 0x0
    stw r4, 0x4(r3)
    stw r4, 0x0(r3)
    stw r0, 0x8(r3)
    b lbl_fn_800E2064_000019D4
lbl_fn_800E2064_0000179C:
    rlwinm. r0, r8, 0, 28, 28
    beq lbl_fn_800E2064_000017B0
    lbz r9, 0x24(r4)
    rlwinm. r9, r9, 0, 28, 28
    beq lbl_fn_800E2064_000017C4
lbl_fn_800E2064_000017B0:
    rlwinm. r8, r8, 0, 27, 27
    beq lbl_fn_800E2064_000017DC
    lbz r9, 0x24(r4)
    rlwinm. r9, r9, 0, 27, 27
    bne lbl_fn_800E2064_000017DC
lbl_fn_800E2064_000017C4:
    li r4, -0x1
    li r0, 0x0
    stw r4, 0x4(r3)
    stw r4, 0x0(r3)
    stw r0, 0x8(r3)
    b lbl_fn_800E2064_000019D4
lbl_fn_800E2064_000017DC:
    cmpwi r0, 0x0
    beq lbl_fn_800E2064_000017F0
    lwz r9, 0x8(r4)
    cmpwi r9, 0x0
    beq lbl_fn_800E2064_00001804
lbl_fn_800E2064_000017F0:
    cmpwi r8, 0x0
    beq lbl_fn_800E2064_0000181C
    lwz r9, 0x14(r4)
    cmpwi r9, 0x0
    bne lbl_fn_800E2064_0000181C
lbl_fn_800E2064_00001804:
    li r4, -0x1
    li r0, 0x0
    stw r4, 0x4(r3)
    stw r4, 0x0(r3)
    stw r0, 0x8(r3)
    b lbl_fn_800E2064_000019D4
lbl_fn_800E2064_0000181C:
    lwz r10, 0x14(r4)
    lwz r9, 0x28(r4)
    cmplw r9, r10
    bge lbl_fn_800E2064_00001830
    stw r10, 0x28(r4)
lbl_fn_800E2064_00001830:
    lwz r9, 0xc(r4)
    cmpwi r9, 0x0
    beq lbl_fn_800E2064_0000184C
    lwz r11, 0x28(r4)
    cmplw r9, r11
    bge lbl_fn_800E2064_0000184C
    stw r11, 0xc(r4)
lbl_fn_800E2064_0000184C:
    cmpwi r8, 0x0
    beq lbl_fn_800E2064_00001864
    lwz r10, 0x10(r4)
    lwz r9, 0x28(r4)
    subf r31, r10, r9
    b lbl_fn_800E2064_00001870
lbl_fn_800E2064_00001864:
    lwz r10, 0x4(r4)
    lwz r9, 0x28(r4)
    subf r31, r10, r9
lbl_fn_800E2064_00001870:
    cmpwi r7, 0x1
    srawi r9, r31, 31
    beq lbl_fn_800E2064_00001890
    cmpwi r7, 0x2
    beq lbl_fn_800E2064_0000189C
    cmpwi r7, 0x4
    beq lbl_fn_800E2064_000018CC
    b lbl_fn_800E2064_000018F4
lbl_fn_800E2064_00001890:
    li r10, 0x0
    li r7, 0x0
    b lbl_fn_800E2064_0000190C
lbl_fn_800E2064_0000189C:
    cmpwi r8, 0x0
    beq lbl_fn_800E2064_000018B8
    lwz r10, 0x10(r4)
    lwz r7, 0x14(r4)
    subf r10, r10, r7
    srawi r7, r10, 31
    b lbl_fn_800E2064_0000190C
lbl_fn_800E2064_000018B8:
    lwz r10, 0x4(r4)
    lwz r7, 0x8(r4)
    subf r10, r10, r7
    srawi r7, r10, 31
    b lbl_fn_800E2064_0000190C
lbl_fn_800E2064_000018CC:
    cmpwi r8, 0x0
    beq lbl_fn_800E2064_000018E0
    mr r10, r31
    mr r7, r9
    b lbl_fn_800E2064_0000190C
lbl_fn_800E2064_000018E0:
    lwz r10, 0x4(r4)
    lwz r7, 0xc(r4)
    subf r10, r10, r7
    srawi r7, r10, 31
    b lbl_fn_800E2064_0000190C
lbl_fn_800E2064_000018F4:
    li r4, -0x1
    li r0, 0x0
    stw r4, 0x4(r3)
    stw r4, 0x0(r3)
    stw r0, 0x8(r3)
    b lbl_fn_800E2064_000019D4
lbl_fn_800E2064_0000190C:
    addc r12, r10, r6
    li r10, 0x0
    adde r11, r7, r5
    xoris r7, r11, 0x8000
    xoris r6, r10, 0x8000
    subfc r5, r10, r12
    subfe r6, r6, r7
    subfe r6, r7, r7
    neg. r6, r6
    bne lbl_fn_800E2064_0000194C
    xoris r5, r9, 0x8000
    subfc r6, r12, r31
    subfe r6, r7, r5
    subfe r6, r5, r5
    neg. r6, r6
    beq lbl_fn_800E2064_00001964
lbl_fn_800E2064_0000194C:
    li r4, -0x1
    li r0, 0x0
    stw r4, 0x4(r3)
    stw r4, 0x0(r3)
    stw r0, 0x8(r3)
    b lbl_fn_800E2064_000019D4
lbl_fn_800E2064_00001964:
    lbz r5, 0x24(r4)
    clrlwi. r5, r5, 31
    beq lbl_fn_800E2064_0000199C
    cmpwi r8, 0x0
    beq lbl_fn_800E2064_0000199C
    xor r6, r12, r31
    xor r5, r11, r9
    or. r5, r6, r5
    beq lbl_fn_800E2064_0000199C
    li r0, -0x1
    stw r0, 0x4(r3)
    stw r0, 0x0(r3)
    stw r10, 0x8(r3)
    b lbl_fn_800E2064_000019D4
lbl_fn_800E2064_0000199C:
    cmpwi r0, 0x0
    beq lbl_fn_800E2064_000019B0
    lwz r6, 0x4(r4)
    add r0, r6, r12
    stw r0, 0x8(r4)
lbl_fn_800E2064_000019B0:
    cmpwi r8, 0x0
    beq lbl_fn_800E2064_000019C4
    lwz r5, 0x10(r4)
    add r0, r5, r12
    stw r0, 0x14(r4)
lbl_fn_800E2064_000019C4:
    li r0, 0x0
    stw r12, 0x4(r3)
    stw r11, 0x0(r3)
    stw r0, 0x8(r3)
lbl_fn_800E2064_000019D4:
    lwz r31, 0xc(r1)
    addi r1, r1, 0x10
    blr
}
