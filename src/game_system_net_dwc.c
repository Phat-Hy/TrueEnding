#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_18(void);
extern void _savegpr_18(void);
extern void dtor_80084684(void);
extern void fn_80013F78(void);
extern void fn_80014798(void);
extern void fn_800575BC(void);
extern void fn_800594DC(void);
extern void fn_80069D48(void);
extern void fn_800844D8(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_800D1E9C(void);
extern void fn_800DCA6C(void);
extern void fn_800E1D5C(void);
extern void fn_801360C4(void);
extern void fn_801360D8(void);
extern void fn_8023BA10(void);
extern void fn_80395794(void);
extern void fn_803957B0(void);
extern void fn_80395848(void);
extern void fn_8039BDB4(void);
extern void fn_803AB948(void);
extern void fn_803AD278(void);
extern void fn_803AD508(void);
extern void fn_803AD668(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473F50(void);
extern void fn_8068B50C(void);
extern void fn_8068B610(void);
extern void fn_806920C0(void);
extern void fn_806926D4(void);
extern void fn_8069293C(void);
extern void fn_806952C4(void);
extern void fn_80695720(void);
extern void fn_806959D8(void);
extern void fn_80695A50(void);

/* External data declarations */
extern u8 lbl_8074F8CC[];
extern u8 lbl_80779A08[];
extern u8 lbl_80779A58[];
extern u8 lbl_80779AA0[];
extern u8 lbl_8078A780[];
extern u8 lbl_8078B080[];
extern u8 lbl_8078B128[];
extern u8 lbl_8078B160[];
extern u8 lbl_8078B190[];
extern u8 lbl_8078B2BC[];
extern u8 lbl_8078B2E0[];

/* Small data declarations */
extern u32 lbl_8087D9E8;
extern u32 lbl_8087D9EC;
extern u32 lbl_8087DD40;
extern u32 lbl_8087DD44;
extern u32 lbl_8087DD48;
extern u32 lbl_8087DD4C;
extern u32 lbl_8087DD50;
extern u32 lbl_8087DD54;
extern u32 lbl_8087DD58;
extern u32 lbl_8087DD5C;
extern u32 lbl_8087EEB8;
extern u32 lbl_80880390;
extern u32 lbl_808803C0;
extern u32 lbl_80885B10;

/* Function declarations */
void fn_80393BEC(void);
void fn_80394068(void);
void fn_803940A8(void);
void fn_803940E8(void);
void fn_80394190(void);
void fn_80394208(void);
void fn_80394318(void);
void fn_80394320(void);
void fn_80394BA4(void);
void fn_80394C68(void);

asm void fn_80393BEC(void)
{
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    lis r6, lbl_8078B2E0@ha
    li r8, 0x0
    stw r0, 0xd4(r1)
    addi r6, r6, lbl_8078B2E0@l
    addi r7, r1, 0x7c
    addi r0, r1, 0x3c
    stw r31, 0xcc(r1)
    addi r5, r6, 0xc
    subf r0, r7, r0
    stw r30, 0xc8(r1)
    mr r30, r4
    addi r4, r1, 0x44
    stw r29, 0xc4(r1)
    mr r29, r3
    stw r28, 0xc0(r1)
    stw r7, 0x30(r1)
    lwz r28, 0x30(r1)
    stw r7, 0x3c(r1)
    mr r3, r28
    stw r6, 0x38(r1)
    stw r5, 0x7c(r1)
    stw r0, 0xb8(r1)
    stw r8, 0x34(r1)
    bl fn_8068B610
    li r0, 0x0
    stw r0, 0x34(r28)
    mr r4, r28
    addi r3, r1, 0x10
    bl fn_800E1D5C
    lwz r31, lbl_808803C0
    cmpwi r31, 0x0
    bne lbl_fn_80393BEC_00000098
    lwz r3, lbl_80880390
    addi r31, r3, 0x1
    stw r31, lbl_80880390
    stw r31, lbl_808803C0
lbl_fn_80393BEC_00000098:
    lwz r3, 0x10(r1)
    lwz r0, 0x4(r3)
    cmplw r31, r0
    bge lbl_fn_80393BEC_000000BC
    lwz r3, 0x0(r3)
    slwi r0, r31, 2
    lwzx r3, r3, r0
    cmpwi r3, 0x0
    bne lbl_fn_80393BEC_00000118
lbl_fn_80393BEC_000000BC:
    li r3, 0x18
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_80393BEC_000000E4
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8069293C
    mr r4, r3
lbl_fn_80393BEC_000000E4:
    lwz r5, lbl_808803C0
    lwz r3, 0x10(r1)
    cmpwi r5, 0x0
    bne lbl_fn_80393BEC_00000104
    lwz r5, lbl_80880390
    addi r5, r5, 0x1
    stw r5, lbl_80880390
    stw r5, lbl_808803C0
lbl_fn_80393BEC_00000104:
    bl fn_806920C0
    lwz r3, 0x10(r1)
    slwi r0, r31, 2
    lwz r3, 0x0(r3)
    lwzx r3, r3, r0
lbl_fn_80393BEC_00000118:
    lwz r12, 0x0(r3)
    li r4, 0x20
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    addic. r0, r1, 0x10
    mr r31, r3
    beq lbl_fn_80393BEC_00000148
    lwz r3, 0x14(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80393BEC_00000148
    bl fn_806952C4
lbl_fn_80393BEC_00000148:
    stb r31, 0x38(r28)
    lis r3, lbl_80779AA0@ha
    addi r3, r3, lbl_80779AA0@l
    lis r9, lbl_8078B2BC@ha
    stw r3, 0x40(r1)
    addi r9, r9, lbl_8078B2BC@l
    lwz r4, 0x3c(r1)
    addi r0, r3, 0xc
    lis r6, lbl_8078B080@ha
    lis r3, lbl_80779A58@ha
    stw r0, 0x0(r4)
    addi r6, r6, lbl_8078B080@l
    addi r31, r1, 0x44
    addi r10, r9, 0x18
    lwz r4, 0x3c(r1)
    addi r8, r9, 0xc
    addi r7, r6, 0x18
    addi r5, r6, 0xc
    subf r0, r4, r31
    stw r0, 0x3c(r4)
    addi r4, r1, 0x7c
    addi r3, r3, lbl_80779A58@l
    stw r9, 0x38(r1)
    li r0, 0x0
    lwz r9, 0x30(r1)
    stw r10, 0x0(r9)
    lwz r9, 0x30(r1)
    stw r8, 0x40(r1)
    subf r8, r9, r31
    stw r8, 0x3c(r9)
    stw r6, 0x38(r1)
    lwz r6, 0x30(r1)
    stw r7, 0x0(r6)
    lwz r6, 0x30(r1)
    stw r5, 0x40(r1)
    subf r4, r6, r4
    stw r4, 0x3c(r6)
    stw r3, 0x44(r1)
    stw r0, 0x48(r1)
    stw r0, 0x4c(r1)
    stw r0, 0x50(r1)
    stw r0, 0x54(r1)
    stw r0, 0x58(r1)
    stw r0, 0x5c(r1)
    bl fn_806926D4
    lwz r0, 0x0(r3)
    stw r0, 0x60(r1)
    lwz r4, 0x4(r3)
    stw r4, 0x64(r1)
    cmpwi r4, 0x0
    beq lbl_fn_80393BEC_00000220
    lwz r3, 0x4(r4)
    addi r0, r3, 0x1
    stw r0, 0x4(r4)
lbl_fn_80393BEC_00000220:
    lis r4, lbl_80779A08@ha
    li r0, 0x0
    li r3, 0x18
    stb r3, 0x68(r1)
    addi r4, r4, lbl_80779A08@l
    stw r4, 0x44(r1)
    addi r3, r31, 0x2d
    stw r0, 0x70(r1)
    stw r0, 0x74(r1)
    stw r0, 0x78(r1)
    lbz r0, 0x68(r1)
    stw r3, 0x6c(r1)
    rlwinm. r0, r0, 0, 27, 27
    beq lbl_fn_80393BEC_00000264
    stw r3, 0x58(r1)
    stw r3, 0x54(r1)
    stw r3, 0x5c(r1)
lbl_fn_80393BEC_00000264:
    lbz r0, 0x68(r1)
    rlwinm. r0, r0, 0, 28, 28
    beq lbl_fn_80393BEC_0000027C
    stw r3, 0x48(r1)
    stw r3, 0x4c(r1)
    stw r3, 0x50(r1)
lbl_fn_80393BEC_0000027C:
    lwz r8, 0x30(r1)
    lis r3, 0x1
    subi r5, r3, 0x1001
    li r6, 0xa
    lhz r7, 0x30(r8)
    li r0, 0x0
    lwz r4, 0x0(r30)
    addi r3, r1, 0x3c
    and r5, r7, r5
    sth r5, 0x30(r8)
    lwz r5, 0x30(r1)
    stw r6, 0x28(r5)
    stw r0, 0x0(r29)
    stw r0, 0x4(r29)
    stw r0, 0x8(r29)
    bl fn_8023BA10
    lwz r3, 0x0(r3)
    lbz r0, 0x32(r3)
    andi. r0, r0, 0x5
    bne lbl_fn_80393BEC_00000378
    addi r3, r1, 0x18
    addi r4, r1, 0x30
    bl fn_80394318
    lwz r0, 0x0(r29)
    srwi. r4, r0, 31
    bne lbl_fn_80393BEC_00000308
    lwz r3, 0x18(r1)
    srwi. r0, r3, 31
    bne lbl_fn_80393BEC_00000308
    lwz r0, 0x1c(r1)
    stw r0, 0x4(r29)
    stw r3, 0x0(r29)
    lwz r0, 0x20(r1)
    stw r0, 0x8(r29)
    b lbl_fn_80393BEC_00000360
lbl_fn_80393BEC_00000308:
    cmpwi r4, 0x0
    beq lbl_fn_80393BEC_00000318
    lwz r5, 0x4(r29)
    b lbl_fn_80393BEC_00000320
lbl_fn_80393BEC_00000318:
    lbz r0, 0x0(r29)
    clrlwi r5, r0, 25
lbl_fn_80393BEC_00000320:
    lwz r0, 0x18(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80393BEC_0000033C
    lbz r0, 0x18(r1)
    addi r6, r1, 0x19
    clrlwi r4, r0, 25
    b lbl_fn_80393BEC_00000344
lbl_fn_80393BEC_0000033C:
    lwz r6, 0x20(r1)
    lwz r4, 0x1c(r1)
lbl_fn_80393BEC_00000344:
    lbz r0, 0x8(r1)
    add r7, r6, r4
    stb r0, 0xc(r1)
    mr r3, r29
    addi r8, r1, 0xc
    li r4, 0x0
    bl fn_80013F78
lbl_fn_80393BEC_00000360:
    lwz r0, 0x18(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80393BEC_000003A4
    lwz r3, 0x20(r1)
    bl dtor_80084684
    b lbl_fn_80393BEC_000003A4
lbl_fn_80393BEC_00000378:
    lis r6, lbl_8078B160@ha
    lis r5, lbl_8078A780@ha
    lis r4, lbl_8078B190@ha
    addi r3, r1, 0x24
    addi r6, r6, lbl_8078B160@l
    addi r5, r5, lbl_8078A780@l
    addi r4, r4, lbl_8078B190@l
    stw r6, 0x24(r1)
    stw r5, 0x28(r1)
    stw r4, 0x2c(r1)
    bl fn_800DCA6C
lbl_fn_80393BEC_000003A4:
    addic. r28, r1, 0x30
    beq lbl_fn_80393BEC_0000045C
    lwz r3, 0x30(r1)
    addi r0, r28, 0x4c
    addic. r29, r28, 0x14
    subf r0, r3, r0
    stw r0, 0x3c(r3)
    beq lbl_fn_80393BEC_00000404
    addic. r0, r29, 0x2c
    beq lbl_fn_80393BEC_000003E0
    lwz r0, 0x2c(r29)
    srwi. r0, r0, 31
    beq lbl_fn_80393BEC_000003E0
    lwz r3, 0x34(r29)
    bl dtor_80084684
lbl_fn_80393BEC_000003E0:
    cmpwi r29, 0x0
    beq lbl_fn_80393BEC_00000404
    addic. r3, r29, 0x1c
    beq lbl_fn_80393BEC_00000404
    beq lbl_fn_80393BEC_00000404
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80393BEC_00000404
    bl fn_806952C4
lbl_fn_80393BEC_00000404:
    cmpwi r28, 0x0
    beq lbl_fn_80393BEC_0000044C
    lwz r3, 0x30(r1)
    addi r0, r28, 0x14
    addic. r4, r28, 0xc
    subf r0, r3, r0
    stw r0, 0x3c(r3)
    beq lbl_fn_80393BEC_00000434
    lwz r3, 0x0(r4)
    addi r0, r4, 0x8
    subf r0, r3, r0
    stw r0, 0x3c(r3)
lbl_fn_80393BEC_00000434:
    cmpwi r28, 0x0
    beq lbl_fn_80393BEC_0000044C
    lwz r3, 0x30(r1)
    addi r0, r28, 0xc
    subf r0, r3, r0
    stw r0, 0x3c(r3)
lbl_fn_80393BEC_0000044C:
    addic. r3, r28, 0x4c
    beq lbl_fn_80393BEC_0000045C
    li r4, 0x0
    bl fn_8068B50C
lbl_fn_80393BEC_0000045C:
    lwz r0, 0xd4(r1)
    lwz r31, 0xcc(r1)
    lwz r30, 0xc8(r1)
    lwz r29, 0xc4(r1)
    lwz r28, 0xc0(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}

asm void fn_80394068(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_80394068_000004A4
    cmpwi r4, 0x0
    ble lbl_fn_80394068_000004A4
    bl dtor_80084684
lbl_fn_80394068_000004A4:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803940A8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_803940A8_000004E4
    cmpwi r4, 0x0
    ble lbl_fn_803940A8_000004E4
    bl dtor_80084684
lbl_fn_803940A8_000004E4:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803940E8(void)
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
    beq lbl_fn_803940E8_00000588
    lwz r5, 0x0(r3)
    addi r0, r3, 0x14
    addic. r6, r3, 0xc
    subf r0, r5, r0
    stw r0, 0x3c(r5)
    beq lbl_fn_803940E8_00000548
    lwz r5, 0x0(r6)
    addi r0, r6, 0x8
    subf r0, r5, r0
    stw r0, 0x3c(r5)
lbl_fn_803940E8_00000548:
    cmpwi r3, 0x0
    beq lbl_fn_803940E8_00000560
    lwz r5, 0x0(r3)
    addi r0, r3, 0xc
    subf r0, r5, r0
    stw r0, 0x3c(r5)
lbl_fn_803940E8_00000560:
    cmpwi r4, 0x0
    beq lbl_fn_803940E8_00000578
    addic. r3, r3, 0x14
    beq lbl_fn_803940E8_00000578
    li r4, 0x0
    bl fn_8068B50C
lbl_fn_803940E8_00000578:
    cmpwi r31, 0x0
    ble lbl_fn_803940E8_00000588
    mr r3, r30
    bl dtor_80084684
lbl_fn_803940E8_00000588:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80394190(void)
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
    beq lbl_fn_80394190_00000600
    lwz r5, 0x0(r3)
    addi r3, r3, 0xc
    cmpwi r4, 0x0
    subf r0, r5, r3
    stw r0, 0x3c(r5)
    beq lbl_fn_80394190_000005F0
    cmpwi r3, 0x0
    beq lbl_fn_80394190_000005F0
    li r4, 0x0
    bl fn_8068B50C
lbl_fn_80394190_000005F0:
    cmpwi r31, 0x0
    ble lbl_fn_80394190_00000600
    mr r3, r30
    bl dtor_80084684
lbl_fn_80394190_00000600:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80394208(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    beq lbl_fn_80394208_0000070C
    lwz r4, 0x0(r3)
    addi r0, r3, 0x4c
    addic. r29, r3, 0x14
    subf r0, r4, r0
    stw r0, 0x3c(r4)
    beq lbl_fn_80394208_0000069C
    addic. r0, r29, 0x2c
    beq lbl_fn_80394208_00000678
    lwz r0, 0x2c(r29)
    srwi. r0, r0, 31
    beq lbl_fn_80394208_00000678
    lwz r3, 0x34(r29)
    bl dtor_80084684
lbl_fn_80394208_00000678:
    cmpwi r29, 0x0
    beq lbl_fn_80394208_0000069C
    addic. r3, r29, 0x1c
    beq lbl_fn_80394208_0000069C
    beq lbl_fn_80394208_0000069C
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80394208_0000069C
    bl fn_806952C4
lbl_fn_80394208_0000069C:
    cmpwi r30, 0x0
    beq lbl_fn_80394208_000006E4
    lwz r3, 0x0(r30)
    addi r0, r30, 0x14
    addic. r4, r30, 0xc
    subf r0, r3, r0
    stw r0, 0x3c(r3)
    beq lbl_fn_80394208_000006CC
    lwz r3, 0x0(r4)
    addi r0, r4, 0x8
    subf r0, r3, r0
    stw r0, 0x3c(r3)
lbl_fn_80394208_000006CC:
    cmpwi r30, 0x0
    beq lbl_fn_80394208_000006E4
    lwz r3, 0x0(r30)
    addi r0, r30, 0xc
    subf r0, r3, r0
    stw r0, 0x3c(r3)
lbl_fn_80394208_000006E4:
    cmpwi r31, 0x0
    beq lbl_fn_80394208_000006FC
    addic. r3, r30, 0x4c
    beq lbl_fn_80394208_000006FC
    li r4, 0x0
    bl fn_8068B50C
lbl_fn_80394208_000006FC:
    cmpwi r31, 0x0
    ble lbl_fn_80394208_0000070C
    mr r3, r30
    bl dtor_80084684
lbl_fn_80394208_0000070C:
    mr r3, r30
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80394318(void)
{
    nofralloc
    addi r4, r4, 0x14
    b fn_803AD668
}

asm void fn_80394320(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stmw r26, 0x8(r1)
    mr r30, r3
    mr r31, r4
    beq lbl_fn_80394320_00000FA0
    lwz r0, 0x37c(r3)
    lis r4, lbl_8078B128@ha
    addi r4, r4, lbl_8078B128@l
    stw r4, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80394320_00000A18
    li r0, 0x0
    stw r0, 0x37c(r3)
    lwz r3, lbl_8087EEB8
    cmpwi r3, 0x0
    beq lbl_fn_80394320_00000A18
    cmpwi r0, 0x0
    beq lbl_fn_80394320_00000A08
    lis r4, lbl_8074F8CC@ha
    addi r4, r4, lbl_8074F8CC@l
    addi r4, r4, 0x3f
    bl fn_80069D48
    lwz r0, 0x364(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80394320_00000814
    lwz r4, 0x368(r30)
    lwz r3, 0x88(r30)
    cmpwi r4, 0x0
    lwz r27, 0x80(r3)
    beq lbl_fn_80394320_000007C4
    beq lbl_fn_80394320_000007C4
    subi r3, r4, 0x10
    bl fn_80084C24
lbl_fn_80394320_000007C4:
    cmpwi r27, 0x0
    stw r27, 0x364(r30)
    beq lbl_fn_80394320_0000080C
    mulli r3, r27, 0x18
    li r4, 0x1
    la r5, lbl_8087DD44
    la r6, lbl_8087DD40
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_803AB948@ha
    mr r7, r27
    addi r4, r4, fn_803AB948@l
    li r5, 0x0
    li r6, 0x18
    bl fn_80695720
    stw r3, 0x368(r30)
    b lbl_fn_80394320_00000814
lbl_fn_80394320_0000080C:
    li r0, 0x0
    stw r0, 0x368(r30)
lbl_fn_80394320_00000814:
    lwz r0, 0x36c(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80394320_00000890
    lwz r4, 0x370(r30)
    lwz r3, 0x88(r30)
    cmpwi r4, 0x0
    lwz r27, 0x88(r3)
    beq lbl_fn_80394320_00000840
    beq lbl_fn_80394320_00000840
    subi r3, r4, 0x10
    bl fn_80084C24
lbl_fn_80394320_00000840:
    cmpwi r27, 0x0
    stw r27, 0x36c(r30)
    beq lbl_fn_80394320_00000888
    mulli r3, r27, 0x18
    li r4, 0x1
    la r5, lbl_8087DD44
    la r6, lbl_8087DD40
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_803AB948@ha
    mr r7, r27
    addi r4, r4, fn_803AB948@l
    li r5, 0x0
    li r6, 0x18
    bl fn_80695720
    stw r3, 0x370(r30)
    b lbl_fn_80394320_00000890
lbl_fn_80394320_00000888:
    li r0, 0x0
    stw r0, 0x370(r30)
lbl_fn_80394320_00000890:
    lwz r0, 0x374(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80394320_0000090C
    lwz r4, 0x378(r30)
    lwz r3, 0x88(r30)
    cmpwi r4, 0x0
    lwz r27, 0x90(r3)
    beq lbl_fn_80394320_000008BC
    beq lbl_fn_80394320_000008BC
    subi r3, r4, 0x10
    bl fn_80084C24
lbl_fn_80394320_000008BC:
    cmpwi r27, 0x0
    stw r27, 0x374(r30)
    beq lbl_fn_80394320_00000904
    mulli r3, r27, 0x18
    li r4, 0x1
    la r5, lbl_8087DD44
    la r6, lbl_8087DD40
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_803AB948@ha
    mr r7, r27
    addi r4, r4, fn_803AB948@l
    li r5, 0x0
    li r6, 0x18
    bl fn_80695720
    stw r3, 0x378(r30)
    b lbl_fn_80394320_0000090C
lbl_fn_80394320_00000904:
    li r0, 0x0
    stw r0, 0x378(r30)
lbl_fn_80394320_0000090C:
    lwz r0, 0x354(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80394320_00000988
    lwz r4, 0x358(r30)
    lwz r3, 0x88(r30)
    cmpwi r4, 0x0
    lwz r27, 0xe4(r3)
    beq lbl_fn_80394320_00000938
    beq lbl_fn_80394320_00000938
    subi r3, r4, 0x10
    bl fn_80084C24
lbl_fn_80394320_00000938:
    cmpwi r27, 0x0
    stw r27, 0x354(r30)
    beq lbl_fn_80394320_00000980
    mulli r3, r27, 0x18
    li r4, 0x1
    la r5, lbl_8087DD44
    la r6, lbl_8087DD40
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_803AB948@ha
    mr r7, r27
    addi r4, r4, fn_803AB948@l
    li r5, 0x0
    li r6, 0x18
    bl fn_80695720
    stw r3, 0x358(r30)
    b lbl_fn_80394320_00000988
lbl_fn_80394320_00000980:
    li r0, 0x0
    stw r0, 0x358(r30)
lbl_fn_80394320_00000988:
    lwz r0, 0x35c(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80394320_00000A18
    lwz r4, 0x360(r30)
    lwz r3, 0x88(r30)
    cmpwi r4, 0x0
    lwz r27, 0xec(r3)
    beq lbl_fn_80394320_000009B4
    beq lbl_fn_80394320_000009B4
    subi r3, r4, 0x10
    bl fn_80084C24
lbl_fn_80394320_000009B4:
    cmpwi r27, 0x0
    stw r27, 0x35c(r30)
    beq lbl_fn_80394320_000009FC
    mulli r3, r27, 0x18
    li r4, 0x1
    la r5, lbl_8087DD44
    la r6, lbl_8087DD40
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_803AB948@ha
    mr r7, r27
    addi r4, r4, fn_803AB948@l
    li r5, 0x0
    li r6, 0x18
    bl fn_80695720
    stw r3, 0x360(r30)
    b lbl_fn_80394320_00000A18
lbl_fn_80394320_000009FC:
    li r0, 0x0
    stw r0, 0x360(r30)
    b lbl_fn_80394320_00000A18
lbl_fn_80394320_00000A08:
    lis r4, lbl_8074F8CC@ha
    addi r4, r4, lbl_8074F8CC@l
    addi r4, r4, 0x55
    bl fn_80069D48
lbl_fn_80394320_00000A18:
    addic. r29, r30, 0x384
    beq lbl_fn_80394320_00000A7C
    beq lbl_fn_80394320_00000A7C
    beq lbl_fn_80394320_00000A7C
    lwz r4, 0x0(r29)
    cmpwi r4, 0x0
    beq lbl_fn_80394320_00000A7C
    lwz r27, 0x4(r29)
    mulli r3, r27, 0xc
    subf r0, r27, r27
    stw r0, 0x4(r29)
    add r28, r4, r3
    b lbl_fn_80394320_00000A6C
lbl_fn_80394320_00000A4C:
    subic. r28, r28, 0xc
    beq lbl_fn_80394320_00000A68
    lwz r0, 0x0(r28)
    srwi. r0, r0, 31
    beq lbl_fn_80394320_00000A68
    lwz r3, 0x8(r28)
    bl dtor_80084684
lbl_fn_80394320_00000A68:
    subi r27, r27, 0x1
lbl_fn_80394320_00000A6C:
    cmpwi r27, 0x0
    bne lbl_fn_80394320_00000A4C
    lwz r3, 0x0(r29)
    bl dtor_80084684
lbl_fn_80394320_00000A7C:
    addic. r0, r30, 0x374
    beq lbl_fn_80394320_00000AA8
    lwz r3, 0x378(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80394320_00000A9C
    beq lbl_fn_80394320_00000A9C
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80394320_00000A9C:
    li r0, 0x0
    stw r0, 0x378(r30)
    stw r0, 0x374(r30)
lbl_fn_80394320_00000AA8:
    addic. r0, r30, 0x36c
    beq lbl_fn_80394320_00000AD4
    lwz r3, 0x370(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80394320_00000AC8
    beq lbl_fn_80394320_00000AC8
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80394320_00000AC8:
    li r0, 0x0
    stw r0, 0x370(r30)
    stw r0, 0x36c(r30)
lbl_fn_80394320_00000AD4:
    addic. r0, r30, 0x364
    beq lbl_fn_80394320_00000B00
    lwz r3, 0x368(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80394320_00000AF4
    beq lbl_fn_80394320_00000AF4
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80394320_00000AF4:
    li r0, 0x0
    stw r0, 0x368(r30)
    stw r0, 0x364(r30)
lbl_fn_80394320_00000B00:
    addic. r0, r30, 0x35c
    beq lbl_fn_80394320_00000B2C
    lwz r3, 0x360(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80394320_00000B20
    beq lbl_fn_80394320_00000B20
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80394320_00000B20:
    li r0, 0x0
    stw r0, 0x360(r30)
    stw r0, 0x35c(r30)
lbl_fn_80394320_00000B2C:
    addic. r0, r30, 0x354
    beq lbl_fn_80394320_00000B58
    lwz r3, 0x358(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80394320_00000B4C
    beq lbl_fn_80394320_00000B4C
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80394320_00000B4C:
    li r0, 0x0
    stw r0, 0x358(r30)
    stw r0, 0x354(r30)
lbl_fn_80394320_00000B58:
    addic. r0, r30, 0x14c
    beq lbl_fn_80394320_00000B84
    lwz r3, 0x150(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80394320_00000B78
    lis r4, fn_801360D8@ha
    addi r4, r4, fn_801360D8@l
    bl fn_80695A50
lbl_fn_80394320_00000B78:
    li r0, 0x0
    stw r0, 0x150(r30)
    stw r0, 0x14c(r30)
lbl_fn_80394320_00000B84:
    addic. r0, r30, 0x144
    beq lbl_fn_80394320_00000BB0
    lwz r3, 0x148(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80394320_00000BA4
    lis r4, fn_801360D8@ha
    addi r4, r4, fn_801360D8@l
    bl fn_80695A50
lbl_fn_80394320_00000BA4:
    li r0, 0x0
    stw r0, 0x148(r30)
    stw r0, 0x144(r30)
lbl_fn_80394320_00000BB0:
    addic. r27, r30, 0x138
    beq lbl_fn_80394320_00000CF4
    beq lbl_fn_80394320_00000CF4
    beq lbl_fn_80394320_00000CF4
    beq lbl_fn_80394320_00000CF4
    beq lbl_fn_80394320_00000CF4
    lwz r28, 0x4(r27)
    cmpwi r28, 0x0
    beq lbl_fn_80394320_00000CF4
    lwz r29, 0x0(r28)
    cmpwi r29, 0x0
    beq lbl_fn_80394320_00000C60
    lwz r26, 0x0(r29)
    cmpwi r26, 0x0
    beq lbl_fn_80394320_00000C1C
    lwz r4, 0x0(r26)
    cmpwi r4, 0x0
    beq lbl_fn_80394320_00000C00
    mr r3, r27
    bl fn_803AD278
lbl_fn_80394320_00000C00:
    lwz r4, 0x4(r26)
    cmpwi r4, 0x0
    beq lbl_fn_80394320_00000C14
    mr r3, r27
    bl fn_803AD278
lbl_fn_80394320_00000C14:
    mr r3, r26
    bl dtor_80084684
lbl_fn_80394320_00000C1C:
    lwz r26, 0x4(r29)
    cmpwi r26, 0x0
    beq lbl_fn_80394320_00000C58
    lwz r4, 0x0(r26)
    cmpwi r4, 0x0
    beq lbl_fn_80394320_00000C3C
    mr r3, r27
    bl fn_803AD278
lbl_fn_80394320_00000C3C:
    lwz r4, 0x4(r26)
    cmpwi r4, 0x0
    beq lbl_fn_80394320_00000C50
    mr r3, r27
    bl fn_803AD278
lbl_fn_80394320_00000C50:
    mr r3, r26
    bl dtor_80084684
lbl_fn_80394320_00000C58:
    mr r3, r29
    bl dtor_80084684
lbl_fn_80394320_00000C60:
    lwz r26, 0x4(r28)
    cmpwi r26, 0x0
    beq lbl_fn_80394320_00000CEC
    lwz r29, 0x0(r26)
    cmpwi r29, 0x0
    beq lbl_fn_80394320_00000CA8
    lwz r4, 0x0(r29)
    cmpwi r4, 0x0
    beq lbl_fn_80394320_00000C8C
    mr r3, r27
    bl fn_803AD278
lbl_fn_80394320_00000C8C:
    lwz r4, 0x4(r29)
    cmpwi r4, 0x0
    beq lbl_fn_80394320_00000CA0
    mr r3, r27
    bl fn_803AD278
lbl_fn_80394320_00000CA0:
    mr r3, r29
    bl dtor_80084684
lbl_fn_80394320_00000CA8:
    lwz r29, 0x4(r26)
    cmpwi r29, 0x0
    beq lbl_fn_80394320_00000CE4
    lwz r4, 0x0(r29)
    cmpwi r4, 0x0
    beq lbl_fn_80394320_00000CC8
    mr r3, r27
    bl fn_803AD278
lbl_fn_80394320_00000CC8:
    lwz r4, 0x4(r29)
    cmpwi r4, 0x0
    beq lbl_fn_80394320_00000CDC
    mr r3, r27
    bl fn_803AD278
lbl_fn_80394320_00000CDC:
    mr r3, r29
    bl dtor_80084684
lbl_fn_80394320_00000CE4:
    mr r3, r26
    bl dtor_80084684
lbl_fn_80394320_00000CEC:
    mr r3, r28
    bl dtor_80084684
lbl_fn_80394320_00000CF4:
    addic. r4, r30, 0x12c
    beq lbl_fn_80394320_00000D20
    beq lbl_fn_80394320_00000D20
    beq lbl_fn_80394320_00000D20
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_80394320_00000D20
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_80394320_00000D20:
    addic. r0, r30, 0x124
    beq lbl_fn_80394320_00000D4C
    lwz r3, 0x128(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80394320_00000D40
    beq lbl_fn_80394320_00000D40
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80394320_00000D40:
    li r0, 0x0
    stw r0, 0x128(r30)
    stw r0, 0x124(r30)
lbl_fn_80394320_00000D4C:
    addic. r0, r30, 0x11c
    beq lbl_fn_80394320_00000D78
    lwz r3, 0x120(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80394320_00000D6C
    beq lbl_fn_80394320_00000D6C
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80394320_00000D6C:
    li r0, 0x0
    stw r0, 0x120(r30)
    stw r0, 0x11c(r30)
lbl_fn_80394320_00000D78:
    addic. r0, r30, 0x114
    beq lbl_fn_80394320_00000DA4
    lwz r3, 0x118(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80394320_00000D98
    beq lbl_fn_80394320_00000D98
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80394320_00000D98:
    li r0, 0x0
    stw r0, 0x118(r30)
    stw r0, 0x114(r30)
lbl_fn_80394320_00000DA4:
    addic. r0, r30, 0x10c
    beq lbl_fn_80394320_00000DD0
    lwz r3, 0x110(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80394320_00000DC4
    beq lbl_fn_80394320_00000DC4
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80394320_00000DC4:
    li r0, 0x0
    stw r0, 0x110(r30)
    stw r0, 0x10c(r30)
lbl_fn_80394320_00000DD0:
    addic. r0, r30, 0x104
    beq lbl_fn_80394320_00000DFC
    lwz r3, 0x108(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80394320_00000DF0
    lis r4, fn_800594DC@ha
    addi r4, r4, fn_800594DC@l
    bl fn_80695A50
lbl_fn_80394320_00000DF0:
    li r0, 0x0
    stw r0, 0x108(r30)
    stw r0, 0x104(r30)
lbl_fn_80394320_00000DFC:
    addic. r0, r30, 0xfc
    beq lbl_fn_80394320_00000E28
    lwz r3, 0x100(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80394320_00000E1C
    beq lbl_fn_80394320_00000E1C
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80394320_00000E1C:
    li r0, 0x0
    stw r0, 0x100(r30)
    stw r0, 0xfc(r30)
lbl_fn_80394320_00000E28:
    addic. r27, r30, 0x7c
    beq lbl_fn_80394320_00000F6C
    beq lbl_fn_80394320_00000F6C
    beq lbl_fn_80394320_00000F6C
    beq lbl_fn_80394320_00000F6C
    beq lbl_fn_80394320_00000F6C
    lwz r26, 0x4(r27)
    cmpwi r26, 0x0
    beq lbl_fn_80394320_00000F6C
    lwz r28, 0x0(r26)
    cmpwi r28, 0x0
    beq lbl_fn_80394320_00000ED8
    lwz r29, 0x0(r28)
    cmpwi r29, 0x0
    beq lbl_fn_80394320_00000E94
    lwz r4, 0x0(r29)
    cmpwi r4, 0x0
    beq lbl_fn_80394320_00000E78
    mr r3, r27
    bl fn_803AD508
lbl_fn_80394320_00000E78:
    lwz r4, 0x4(r29)
    cmpwi r4, 0x0
    beq lbl_fn_80394320_00000E8C
    mr r3, r27
    bl fn_803AD508
lbl_fn_80394320_00000E8C:
    mr r3, r29
    bl dtor_80084684
lbl_fn_80394320_00000E94:
    lwz r29, 0x4(r28)
    cmpwi r29, 0x0
    beq lbl_fn_80394320_00000ED0
    lwz r4, 0x0(r29)
    cmpwi r4, 0x0
    beq lbl_fn_80394320_00000EB4
    mr r3, r27
    bl fn_803AD508
lbl_fn_80394320_00000EB4:
    lwz r4, 0x4(r29)
    cmpwi r4, 0x0
    beq lbl_fn_80394320_00000EC8
    mr r3, r27
    bl fn_803AD508
lbl_fn_80394320_00000EC8:
    mr r3, r29
    bl dtor_80084684
lbl_fn_80394320_00000ED0:
    mr r3, r28
    bl dtor_80084684
lbl_fn_80394320_00000ED8:
    lwz r28, 0x4(r26)
    cmpwi r28, 0x0
    beq lbl_fn_80394320_00000F64
    lwz r29, 0x0(r28)
    cmpwi r29, 0x0
    beq lbl_fn_80394320_00000F20
    lwz r4, 0x0(r29)
    cmpwi r4, 0x0
    beq lbl_fn_80394320_00000F04
    mr r3, r27
    bl fn_803AD508
lbl_fn_80394320_00000F04:
    lwz r4, 0x4(r29)
    cmpwi r4, 0x0
    beq lbl_fn_80394320_00000F18
    mr r3, r27
    bl fn_803AD508
lbl_fn_80394320_00000F18:
    mr r3, r29
    bl dtor_80084684
lbl_fn_80394320_00000F20:
    lwz r29, 0x4(r28)
    cmpwi r29, 0x0
    beq lbl_fn_80394320_00000F5C
    lwz r4, 0x0(r29)
    cmpwi r4, 0x0
    beq lbl_fn_80394320_00000F40
    mr r3, r27
    bl fn_803AD508
lbl_fn_80394320_00000F40:
    lwz r4, 0x4(r29)
    cmpwi r4, 0x0
    beq lbl_fn_80394320_00000F54
    mr r3, r27
    bl fn_803AD508
lbl_fn_80394320_00000F54:
    mr r3, r29
    bl dtor_80084684
lbl_fn_80394320_00000F5C:
    mr r3, r28
    bl dtor_80084684
lbl_fn_80394320_00000F64:
    mr r3, r26
    bl dtor_80084684
lbl_fn_80394320_00000F6C:
    lis r4, fn_80014798@ha
    addi r3, r30, 0x48
    addi r4, r4, fn_80014798@l
    li r5, 0x8
    li r6, 0x3
    bl fn_806959D8
    mr r3, r30
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r31, 0x0
    ble lbl_fn_80394320_00000FA0
    mr r3, r30
    bl dtor_80084684
lbl_fn_80394320_00000FA0:
    mr r3, r30
    lmw r26, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80394BA4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    addi r30, r3, 0x48
    mr r31, r30
    stw r29, 0x14(r1)
    li r29, 0x0
    stw r28, 0x10(r1)
    mr r28, r3
lbl_fn_80394BA4_00000FE4:
    mr r3, r31
    bl fn_80473F50
    cmpwi r3, 0x0
    beq lbl_fn_80394BA4_00000FFC
    li r3, 0x0
    b lbl_fn_80394BA4_0000105C
lbl_fn_80394BA4_00000FFC:
    addi r29, r29, 0x1
    addi r31, r31, 0x8
    cmpwi r29, 0x3
    blt lbl_fn_80394BA4_00000FE4
    li r29, 0x0
lbl_fn_80394BA4_00001010:
    mr r3, r30
    bl fn_80470580
    cmpwi r3, 0x0
    beq lbl_fn_80394BA4_00001048
    mr r3, r30
    bl fn_8047059C
    mr r31, r3
    mr r3, r30
    bl fn_80470580
    mr r5, r3
    mr r3, r28
    mr r4, r29
    mr r6, r31
    bl fn_8039BDB4
lbl_fn_80394BA4_00001048:
    addi r29, r29, 0x1
    addi r30, r30, 0x8
    cmpwi r29, 0x3
    blt lbl_fn_80394BA4_00001010
    li r3, 0x1
lbl_fn_80394BA4_0000105C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80394C68(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r11, r1, 0x60
    stfd f31, 0x60(r1)
    psq_st f31, 0x68(r1), 0, 0
    bl _savegpr_18
    lwz r4, 0x118(r3)
    mr r25, r3
    lwz r3, 0x88(r3)
    cmpwi r4, 0x0
    lwz r18, 0x80(r3)
    beq lbl_fn_80394C68_000010BC
    beq lbl_fn_80394C68_000010BC
    subi r3, r4, 0x10
    bl fn_80084C24
lbl_fn_80394C68_000010BC:
    cmpwi r18, 0x0
    stw r18, 0x114(r25)
    beq lbl_fn_80394C68_00001104
    mulli r3, r18, 0xc
    li r4, 0x1
    la r5, lbl_8087DD5C
    la r6, lbl_8087DD58
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_80395794@ha
    mr r7, r18
    addi r4, r4, fn_80395794@l
    li r5, 0x0
    li r6, 0xc
    bl fn_80695720
    stw r3, 0x118(r25)
    b lbl_fn_80394C68_0000110C
lbl_fn_80394C68_00001104:
    li r0, 0x0
    stw r0, 0x118(r25)
lbl_fn_80394C68_0000110C:
    lwz r4, 0x120(r25)
    lwz r3, 0x88(r25)
    cmpwi r4, 0x0
    lwz r18, 0x88(r3)
    beq lbl_fn_80394C68_0000112C
    beq lbl_fn_80394C68_0000112C
    subi r3, r4, 0x10
    bl fn_80084C24
lbl_fn_80394C68_0000112C:
    cmpwi r18, 0x0
    stw r18, 0x11c(r25)
    beq lbl_fn_80394C68_00001174
    mulli r3, r18, 0xc
    li r4, 0x1
    la r5, lbl_8087DD5C
    la r6, lbl_8087DD58
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_80395794@ha
    mr r7, r18
    addi r4, r4, fn_80395794@l
    li r5, 0x0
    li r6, 0xc
    bl fn_80695720
    stw r3, 0x120(r25)
    b lbl_fn_80394C68_0000117C
lbl_fn_80394C68_00001174:
    li r0, 0x0
    stw r0, 0x120(r25)
lbl_fn_80394C68_0000117C:
    lwz r4, 0x128(r25)
    lwz r3, 0x88(r25)
    cmpwi r4, 0x0
    lwz r18, 0x90(r3)
    beq lbl_fn_80394C68_0000119C
    beq lbl_fn_80394C68_0000119C
    subi r3, r4, 0x10
    bl fn_80084C24
lbl_fn_80394C68_0000119C:
    cmpwi r18, 0x0
    stw r18, 0x124(r25)
    beq lbl_fn_80394C68_000011E4
    mulli r3, r18, 0xc
    li r4, 0x1
    la r5, lbl_8087DD5C
    la r6, lbl_8087DD58
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_80395794@ha
    mr r7, r18
    addi r4, r4, fn_80395794@l
    li r5, 0x0
    li r6, 0xc
    bl fn_80695720
    stw r3, 0x128(r25)
    b lbl_fn_80394C68_000011EC
lbl_fn_80394C68_000011E4:
    li r0, 0x0
    stw r0, 0x128(r25)
lbl_fn_80394C68_000011EC:
    lwz r4, 0x100(r25)
    lwz r3, 0x88(r25)
    cmpwi r4, 0x0
    lwz r18, 0xe4(r3)
    beq lbl_fn_80394C68_0000120C
    beq lbl_fn_80394C68_0000120C
    subi r3, r4, 0x10
    bl fn_80084C24
lbl_fn_80394C68_0000120C:
    cmpwi r18, 0x0
    stw r18, 0xfc(r25)
    beq lbl_fn_80394C68_00001254
    mulli r3, r18, 0xc
    li r4, 0x1
    la r5, lbl_8087DD5C
    la r6, lbl_8087DD58
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_80395794@ha
    mr r7, r18
    addi r4, r4, fn_80395794@l
    li r5, 0x0
    li r6, 0xc
    bl fn_80695720
    stw r3, 0x100(r25)
    b lbl_fn_80394C68_0000125C
lbl_fn_80394C68_00001254:
    li r0, 0x0
    stw r0, 0x100(r25)
lbl_fn_80394C68_0000125C:
    lwz r4, 0x110(r25)
    lwz r3, 0x88(r25)
    cmpwi r4, 0x0
    lwz r18, 0xec(r3)
    beq lbl_fn_80394C68_0000127C
    beq lbl_fn_80394C68_0000127C
    subi r3, r4, 0x10
    bl fn_80084C24
lbl_fn_80394C68_0000127C:
    cmpwi r18, 0x0
    stw r18, 0x10c(r25)
    beq lbl_fn_80394C68_000012C4
    mulli r3, r18, 0xc
    li r4, 0x1
    la r5, lbl_8087DD5C
    la r6, lbl_8087DD58
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_80395794@ha
    mr r7, r18
    addi r4, r4, fn_80395794@l
    li r5, 0x0
    li r6, 0xc
    bl fn_80695720
    stw r3, 0x110(r25)
    b lbl_fn_80394C68_000012CC
lbl_fn_80394C68_000012C4:
    li r0, 0x0
    stw r0, 0x110(r25)
lbl_fn_80394C68_000012CC:
    lwz r3, 0x108(r25)
    lwz r4, 0x88(r25)
    cmpwi r3, 0x0
    lwz r18, 0xe4(r4)
    beq lbl_fn_80394C68_000012EC
    lis r4, fn_800594DC@ha
    addi r4, r4, fn_800594DC@l
    bl fn_80695A50
lbl_fn_80394C68_000012EC:
    cmpwi r18, 0x0
    stw r18, 0x104(r25)
    beq lbl_fn_80394C68_00001338
    mulli r3, r18, 0x378
    li r4, 0x1
    la r5, lbl_8087DD54
    la r6, lbl_8087DD50
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_803957B0@ha
    lis r5, fn_800594DC@ha
    mr r7, r18
    li r6, 0x378
    addi r4, r4, fn_803957B0@l
    addi r5, r5, fn_800594DC@l
    bl fn_80695720
    stw r3, 0x108(r25)
    b lbl_fn_80394C68_00001340
lbl_fn_80394C68_00001338:
    li r0, 0x0
    stw r0, 0x108(r25)
lbl_fn_80394C68_00001340:
    lwz r3, 0x148(r25)
    lwz r4, 0x88(r25)
    cmpwi r3, 0x0
    lwz r18, 0xe4(r4)
    beq lbl_fn_80394C68_00001360
    lis r4, fn_801360D8@ha
    addi r4, r4, fn_801360D8@l
    bl fn_80695A50
lbl_fn_80394C68_00001360:
    cmpwi r18, 0x0
    stw r18, 0x144(r25)
    beq lbl_fn_80394C68_000013AC
    mulli r3, r18, 0xc
    li r4, 0x1
    la r5, lbl_8087DD4C
    la r6, lbl_8087DD48
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_801360C4@ha
    lis r5, fn_801360D8@ha
    mr r7, r18
    li r6, 0xc
    addi r4, r4, fn_801360C4@l
    addi r5, r5, fn_801360D8@l
    bl fn_80695720
    stw r3, 0x148(r25)
    b lbl_fn_80394C68_000013B4
lbl_fn_80394C68_000013AC:
    li r0, 0x0
    stw r0, 0x148(r25)
lbl_fn_80394C68_000013B4:
    lwz r3, 0x150(r25)
    lwz r4, 0x88(r25)
    cmpwi r3, 0x0
    lwz r18, 0xec(r4)
    beq lbl_fn_80394C68_000013D4
    lis r4, fn_801360D8@ha
    addi r4, r4, fn_801360D8@l
    bl fn_80695A50
lbl_fn_80394C68_000013D4:
    cmpwi r18, 0x0
    stw r18, 0x14c(r25)
    beq lbl_fn_80394C68_00001420
    mulli r3, r18, 0xc
    li r4, 0x1
    la r5, lbl_8087DD4C
    la r6, lbl_8087DD48
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_801360C4@ha
    lis r5, fn_801360D8@ha
    mr r7, r18
    li r6, 0xc
    addi r4, r4, fn_801360C4@l
    addi r5, r5, fn_801360D8@l
    bl fn_80695720
    stw r3, 0x150(r25)
    b lbl_fn_80394C68_00001428
lbl_fn_80394C68_00001420:
    li r0, 0x0
    stw r0, 0x150(r25)
lbl_fn_80394C68_00001428:
    lwz r28, 0x88(r25)
    addi r20, r1, 0x14
    lfs f31, lbl_80885B10
    li r27, 0x0
    li r24, 0x0
    li r23, 0x0
    li r22, 0x0
    li r21, 0x8
    b lbl_fn_80394C68_000017E8
lbl_fn_80394C68_0000144C:
    lwz r0, 0xe8(r28)
    mr r4, r20
    addi r5, r1, 0x8
    add r31, r0, r23
    psq_l f1, 0x4(r31), 0, 0
    addi r6, r31, 0x18
    lfs f2, 0xc(r31)
    stfs f2, 0x1c(r1)
    psq_st f1, 0x0(r20), 0, 0
    lfs f3, 0x18(r1)
    lfs f0, 0x1c(r31)
    fadds f0, f3, f0
    stfs f0, 0x18(r1)
    lfs f0, 0x14(r31)
    stfs f0, 0xc(r1)
    stfs f31, 0x8(r1)
    stfs f31, 0x10(r1)
    lwz r0, 0x108(r25)
    add r3, r0, r24
    bl fn_800575BC
    li r26, 0x0
    li r29, 0x0
    b lbl_fn_80394C68_000017CC
lbl_fn_80394C68_000014A8:
    lwz r0, 0xe8(r28)
    cmplw r27, r26
    add r3, r0, r29
    beq lbl_fn_80394C68_000014E0
    lwz r0, 0x2c(r31)
    cmplw r0, r26
    beq lbl_fn_80394C68_000014E0
    lwz r3, 0x2c(r3)
    cmplw r3, r27
    beq lbl_fn_80394C68_000014E0
    cmpwi r0, 0x0
    blt lbl_fn_80394C68_000017C4
    cmpw r0, r3
    bne lbl_fn_80394C68_000017C4
lbl_fn_80394C68_000014E0:
    lwz r0, 0x148(r25)
    add r30, r0, r22
    lwz r0, 0x8(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80394C68_00001500
    lwz r0, 0x4(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80394C68_00001650
lbl_fn_80394C68_00001500:
    lwz r0, 0x4(r30)
    cmplwi r0, 0x8
    bgt lbl_fn_80394C68_000017A8
    li r3, 0x20
    li r4, 0x0
    la r5, lbl_8087D9EC
    la r6, lbl_8087D9E8
    li r7, 0x0
    bl fn_800846FC
    lwz r0, 0x8(r30)
    mr r18, r3
    cmpwi r0, 0x0
    beq lbl_fn_80394C68_00001644
    lwz r0, 0x0(r30)
    li r4, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_80394C68_00001548
    mr r4, r0
lbl_fn_80394C68_00001548:
    cmpwi r4, 0x0
    li r5, 0x0
    beq lbl_fn_80394C68_0000163C
    cmplwi r4, 0x8
    subi r8, r4, 0x8
    ble lbl_fn_80394C68_00001608
    addi r0, r8, 0x7
    mr r7, r18
    srwi r0, r0, 3
    li r6, 0x0
    mtctr r0
    cmplwi r8, 0x0
    ble lbl_fn_80394C68_00001608
lbl_fn_80394C68_0000157C:
    lwz r8, 0x8(r30)
    addi r5, r5, 0x8
    lwzx r0, r8, r6
    stw r0, 0x0(r7)
    lwz r0, 0x8(r30)
    add r8, r0, r6
    lwz r0, 0x4(r8)
    stw r0, 0x4(r7)
    lwz r0, 0x8(r30)
    add r8, r0, r6
    lwz r0, 0x8(r8)
    stw r0, 0x8(r7)
    lwz r0, 0x8(r30)
    add r8, r0, r6
    lwz r0, 0xc(r8)
    stw r0, 0xc(r7)
    lwz r0, 0x8(r30)
    add r8, r0, r6
    lwz r0, 0x10(r8)
    stw r0, 0x10(r7)
    lwz r0, 0x8(r30)
    add r8, r0, r6
    lwz r0, 0x14(r8)
    stw r0, 0x14(r7)
    lwz r0, 0x8(r30)
    add r8, r0, r6
    lwz r0, 0x18(r8)
    stw r0, 0x18(r7)
    lwz r0, 0x8(r30)
    add r8, r0, r6
    addi r6, r6, 0x20
    lwz r0, 0x1c(r8)
    stw r0, 0x1c(r7)
    addi r7, r7, 0x20
    bdnz lbl_fn_80394C68_0000157C
lbl_fn_80394C68_00001608:
    slwi r7, r5, 2
    subf r0, r5, r4
    add r6, r3, r7
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_80394C68_0000163C
lbl_fn_80394C68_00001620:
    lwz r3, 0x8(r30)
    addi r5, r5, 0x1
    lwzx r0, r3, r7
    addi r7, r7, 0x4
    stw r0, 0x0(r6)
    addi r6, r6, 0x4
    bdnz lbl_fn_80394C68_00001620
lbl_fn_80394C68_0000163C:
    lwz r3, 0x8(r30)
    bl fn_80084C24
lbl_fn_80394C68_00001644:
    stw r18, 0x8(r30)
    stw r21, 0x4(r30)
    b lbl_fn_80394C68_000017A8
lbl_fn_80394C68_00001650:
    lwz r3, 0x0(r30)
    cmplw r3, r0
    blt lbl_fn_80394C68_000017A8
    slwi r18, r3, 1
    cmplw r0, r18
    bgt lbl_fn_80394C68_000017A8
    slwi r3, r18, 2
    li r4, 0x0
    la r5, lbl_8087D9EC
    la r6, lbl_8087D9E8
    li r7, 0x0
    bl fn_800846FC
    lwz r0, 0x8(r30)
    mr r19, r3
    cmpwi r0, 0x0
    beq lbl_fn_80394C68_000017A0
    lwz r0, 0x0(r30)
    mr r4, r18
    cmplw r18, r0
    ble lbl_fn_80394C68_000016A4
    mr r4, r0
lbl_fn_80394C68_000016A4:
    cmpwi r4, 0x0
    li r5, 0x0
    beq lbl_fn_80394C68_00001798
    cmplwi r4, 0x8
    subi r8, r4, 0x8
    ble lbl_fn_80394C68_00001764
    addi r0, r8, 0x7
    mr r7, r19
    srwi r0, r0, 3
    li r6, 0x0
    mtctr r0
    cmplwi r8, 0x0
    ble lbl_fn_80394C68_00001764
lbl_fn_80394C68_000016D8:
    lwz r8, 0x8(r30)
    addi r5, r5, 0x8
    lwzx r0, r8, r6
    stw r0, 0x0(r7)
    lwz r0, 0x8(r30)
    add r8, r0, r6
    lwz r0, 0x4(r8)
    stw r0, 0x4(r7)
    lwz r0, 0x8(r30)
    add r8, r0, r6
    lwz r0, 0x8(r8)
    stw r0, 0x8(r7)
    lwz r0, 0x8(r30)
    add r8, r0, r6
    lwz r0, 0xc(r8)
    stw r0, 0xc(r7)
    lwz r0, 0x8(r30)
    add r8, r0, r6
    lwz r0, 0x10(r8)
    stw r0, 0x10(r7)
    lwz r0, 0x8(r30)
    add r8, r0, r6
    lwz r0, 0x14(r8)
    stw r0, 0x14(r7)
    lwz r0, 0x8(r30)
    add r8, r0, r6
    lwz r0, 0x18(r8)
    stw r0, 0x18(r7)
    lwz r0, 0x8(r30)
    add r8, r0, r6
    addi r6, r6, 0x20
    lwz r0, 0x1c(r8)
    stw r0, 0x1c(r7)
    addi r7, r7, 0x20
    bdnz lbl_fn_80394C68_000016D8
lbl_fn_80394C68_00001764:
    slwi r7, r5, 2
    subf r0, r5, r4
    add r6, r3, r7
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_80394C68_00001798
lbl_fn_80394C68_0000177C:
    lwz r3, 0x8(r30)
    addi r5, r5, 0x1
    lwzx r0, r3, r7
    addi r7, r7, 0x4
    stw r0, 0x0(r6)
    addi r6, r6, 0x4
    bdnz lbl_fn_80394C68_0000177C
lbl_fn_80394C68_00001798:
    lwz r3, 0x8(r30)
    bl fn_80084C24
lbl_fn_80394C68_000017A0:
    stw r19, 0x8(r30)
    stw r18, 0x4(r30)
lbl_fn_80394C68_000017A8:
    lwz r0, 0x0(r30)
    lwz r3, 0x8(r30)
    slwi r0, r0, 2
    stwx r26, r3, r0
    lwz r3, 0x0(r30)
    addi r0, r3, 0x1
    stw r0, 0x0(r30)
lbl_fn_80394C68_000017C4:
    addi r29, r29, 0x48
    addi r26, r26, 0x1
lbl_fn_80394C68_000017CC:
    lwz r0, 0xe4(r28)
    cmplw r26, r0
    blt lbl_fn_80394C68_000014A8
    addi r27, r27, 0x1
    addi r24, r24, 0x378
    addi r23, r23, 0x48
    addi r22, r22, 0xc
lbl_fn_80394C68_000017E8:
    lwz r0, 0xe4(r28)
    cmplw r27, r0
    blt lbl_fn_80394C68_0000144C
    lwz r23, 0x88(r25)
    li r26, 0x0
    li r21, 0x0
    li r24, 0x0
    li r22, 0x8
    b lbl_fn_80394C68_00001B5C
lbl_fn_80394C68_0000180C:
    lwz r0, 0xf0(r23)
    li r28, 0x0
    li r29, 0x0
    add r27, r0, r21
    b lbl_fn_80394C68_00001B44
lbl_fn_80394C68_00001820:
    lwz r0, 0xf0(r23)
    cmplw r26, r28
    add r3, r0, r29
    beq lbl_fn_80394C68_00001858
    lwz r0, 0x20(r27)
    cmplw r0, r28
    beq lbl_fn_80394C68_00001858
    lwz r3, 0x20(r3)
    cmplw r3, r26
    beq lbl_fn_80394C68_00001858
    cmpwi r0, 0x0
    blt lbl_fn_80394C68_00001B3C
    cmpw r0, r3
    bne lbl_fn_80394C68_00001B3C
lbl_fn_80394C68_00001858:
    lwz r0, 0x150(r25)
    add r20, r0, r24
    lwz r0, 0x8(r20)
    cmpwi r0, 0x0
    beq lbl_fn_80394C68_00001878
    lwz r0, 0x4(r20)
    cmpwi r0, 0x0
    bne lbl_fn_80394C68_000019C8
lbl_fn_80394C68_00001878:
    lwz r0, 0x4(r20)
    cmplwi r0, 0x8
    bgt lbl_fn_80394C68_00001B20
    li r3, 0x20
    li r4, 0x0
    la r5, lbl_8087D9EC
    la r6, lbl_8087D9E8
    li r7, 0x0
    bl fn_800846FC
    lwz r0, 0x8(r20)
    mr r18, r3
    cmpwi r0, 0x0
    beq lbl_fn_80394C68_000019BC
    lwz r0, 0x0(r20)
    li r4, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_80394C68_000018C0
    mr r4, r0
lbl_fn_80394C68_000018C0:
    cmpwi r4, 0x0
    li r5, 0x0
    beq lbl_fn_80394C68_000019B4
    cmplwi r4, 0x8
    subi r8, r4, 0x8
    ble lbl_fn_80394C68_00001980
    addi r0, r8, 0x7
    mr r7, r18
    srwi r0, r0, 3
    li r6, 0x0
    mtctr r0
    cmplwi r8, 0x0
    ble lbl_fn_80394C68_00001980
lbl_fn_80394C68_000018F4:
    lwz r8, 0x8(r20)
    addi r5, r5, 0x8
    lwzx r0, r8, r6
    stw r0, 0x0(r7)
    lwz r0, 0x8(r20)
    add r8, r0, r6
    lwz r0, 0x4(r8)
    stw r0, 0x4(r7)
    lwz r0, 0x8(r20)
    add r8, r0, r6
    lwz r0, 0x8(r8)
    stw r0, 0x8(r7)
    lwz r0, 0x8(r20)
    add r8, r0, r6
    lwz r0, 0xc(r8)
    stw r0, 0xc(r7)
    lwz r0, 0x8(r20)
    add r8, r0, r6
    lwz r0, 0x10(r8)
    stw r0, 0x10(r7)
    lwz r0, 0x8(r20)
    add r8, r0, r6
    lwz r0, 0x14(r8)
    stw r0, 0x14(r7)
    lwz r0, 0x8(r20)
    add r8, r0, r6
    lwz r0, 0x18(r8)
    stw r0, 0x18(r7)
    lwz r0, 0x8(r20)
    add r8, r0, r6
    addi r6, r6, 0x20
    lwz r0, 0x1c(r8)
    stw r0, 0x1c(r7)
    addi r7, r7, 0x20
    bdnz lbl_fn_80394C68_000018F4
lbl_fn_80394C68_00001980:
    slwi r7, r5, 2
    subf r0, r5, r4
    add r6, r3, r7
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_80394C68_000019B4
lbl_fn_80394C68_00001998:
    lwz r3, 0x8(r20)
    addi r5, r5, 0x1
    lwzx r0, r3, r7
    addi r7, r7, 0x4
    stw r0, 0x0(r6)
    addi r6, r6, 0x4
    bdnz lbl_fn_80394C68_00001998
lbl_fn_80394C68_000019B4:
    lwz r3, 0x8(r20)
    bl fn_80084C24
lbl_fn_80394C68_000019BC:
    stw r18, 0x8(r20)
    stw r22, 0x4(r20)
    b lbl_fn_80394C68_00001B20
lbl_fn_80394C68_000019C8:
    lwz r3, 0x0(r20)
    cmplw r3, r0
    blt lbl_fn_80394C68_00001B20
    slwi r19, r3, 1
    cmplw r0, r19
    bgt lbl_fn_80394C68_00001B20
    slwi r3, r19, 2
    li r4, 0x0
    la r5, lbl_8087D9EC
    la r6, lbl_8087D9E8
    li r7, 0x0
    bl fn_800846FC
    lwz r0, 0x8(r20)
    mr r18, r3
    cmpwi r0, 0x0
    beq lbl_fn_80394C68_00001B18
    lwz r0, 0x0(r20)
    mr r4, r19
    cmplw r19, r0
    ble lbl_fn_80394C68_00001A1C
    mr r4, r0
lbl_fn_80394C68_00001A1C:
    cmpwi r4, 0x0
    li r5, 0x0
    beq lbl_fn_80394C68_00001B10
    cmplwi r4, 0x8
    subi r8, r4, 0x8
    ble lbl_fn_80394C68_00001ADC
    addi r0, r8, 0x7
    mr r7, r18
    srwi r0, r0, 3
    li r6, 0x0
    mtctr r0
    cmplwi r8, 0x0
    ble lbl_fn_80394C68_00001ADC
lbl_fn_80394C68_00001A50:
    lwz r8, 0x8(r20)
    addi r5, r5, 0x8
    lwzx r0, r8, r6
    stw r0, 0x0(r7)
    lwz r0, 0x8(r20)
    add r8, r0, r6
    lwz r0, 0x4(r8)
    stw r0, 0x4(r7)
    lwz r0, 0x8(r20)
    add r8, r0, r6
    lwz r0, 0x8(r8)
    stw r0, 0x8(r7)
    lwz r0, 0x8(r20)
    add r8, r0, r6
    lwz r0, 0xc(r8)
    stw r0, 0xc(r7)
    lwz r0, 0x8(r20)
    add r8, r0, r6
    lwz r0, 0x10(r8)
    stw r0, 0x10(r7)
    lwz r0, 0x8(r20)
    add r8, r0, r6
    lwz r0, 0x14(r8)
    stw r0, 0x14(r7)
    lwz r0, 0x8(r20)
    add r8, r0, r6
    lwz r0, 0x18(r8)
    stw r0, 0x18(r7)
    lwz r0, 0x8(r20)
    add r8, r0, r6
    addi r6, r6, 0x20
    lwz r0, 0x1c(r8)
    stw r0, 0x1c(r7)
    addi r7, r7, 0x20
    bdnz lbl_fn_80394C68_00001A50
lbl_fn_80394C68_00001ADC:
    slwi r7, r5, 2
    subf r0, r5, r4
    add r6, r3, r7
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_80394C68_00001B10
lbl_fn_80394C68_00001AF4:
    lwz r3, 0x8(r20)
    addi r5, r5, 0x1
    lwzx r0, r3, r7
    addi r7, r7, 0x4
    stw r0, 0x0(r6)
    addi r6, r6, 0x4
    bdnz lbl_fn_80394C68_00001AF4
lbl_fn_80394C68_00001B10:
    lwz r3, 0x8(r20)
    bl fn_80084C24
lbl_fn_80394C68_00001B18:
    stw r18, 0x8(r20)
    stw r19, 0x4(r20)
lbl_fn_80394C68_00001B20:
    lwz r0, 0x0(r20)
    lwz r3, 0x8(r20)
    slwi r0, r0, 2
    stwx r28, r3, r0
    lwz r3, 0x0(r20)
    addi r0, r3, 0x1
    stw r0, 0x0(r20)
lbl_fn_80394C68_00001B3C:
    addi r29, r29, 0x28
    addi r28, r28, 0x1
lbl_fn_80394C68_00001B44:
    lwz r0, 0xec(r23)
    cmplw r28, r0
    blt lbl_fn_80394C68_00001820
    addi r21, r21, 0x28
    addi r24, r24, 0xc
    addi r26, r26, 0x1
lbl_fn_80394C68_00001B5C:
    lwz r0, 0xec(r23)
    cmplw r26, r0
    blt lbl_fn_80394C68_0000180C
    mr r3, r25
    li r4, 0x1
    bl fn_80395848
    li r3, 0x0
    li r0, -0x1
    stw r3, 0xb0(r25)
    stw r0, 0xd4(r25)
    stw r3, 0xd8(r25)
    psq_l f31, 0x68(r1), 0, 0
    lfd f31, 0x60(r1)
    addi r11, r1, 0x60
    bl _restgpr_18
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}
