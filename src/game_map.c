#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_20(void);
extern void _savegpr_20(void);
extern void dtor_80084684(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_800697D8(void);
extern void fn_8006B0C8(void);
extern void fn_8006B174(void);
extern void fn_8007C144(void);
extern void fn_800804D0(void);
extern void fn_80080584(void);
extern void fn_80080B34(void);
extern void fn_80080C20(void);
extern void fn_800816B4(void);
extern void fn_80081BD0(void);
extern void fn_80084320(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_8008937C(void);
extern void fn_8008C850(void);
extern void fn_8008C950(void);
extern void fn_8009303C(void);
extern void fn_800C41D0(void);
extern void fn_800C4E38(void);
extern void fn_800C4ECC(void);
extern void fn_800C4F38(void);
extern void fn_800C5F5C(void);
extern void fn_800C5FF0(void);
extern void fn_800D59B8(void);
extern void fn_800DC6B4(void);
extern void fn_80473EFC(void);
extern void fn_80473F18(void);
extern void fn_80473F34(void);
extern void fn_80473F50(void);
extern void fn_80474860(void);
extern void fn_8047486C(void);
extern void fn_80476194(void);
extern void fn_804761B0(void);
extern void fn_80476204(void);
extern void fn_80682428(void);
extern void fn_80695B00(void);
extern int sprintf(char* str, const char* format, ...);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_80732368[];
extern u8 lbl_80778840[];
extern u8 lbl_8077884C[];
extern u8 lbl_80778880[];
extern u8 lbl_807C7268[];

/* Small data declarations */
extern u32 lbl_8087D6E8;
extern u32 lbl_8087D6EC;
extern u32 lbl_8087D7F4;
extern u32 lbl_8087D7F8;
extern u32 lbl_8087D7FC;
extern u32 lbl_8087D800;
extern u32 lbl_8087D804;
extern u32 lbl_8087D808;
extern u32 lbl_8087EEB8;
extern u32 lbl_8087EF10;
extern u32 lbl_8087EF1C;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087EFE0;
extern u32 lbl_80880BF8;

/* Function declarations */
void fn_8008B130(void);
void fn_8008B138(void);
void fn_8008B140(void);
void fn_8008B964(void);
void fn_8008B96C(void);
void fn_8008B974(void);
void fn_8008B978(void);
void fn_8008BBD8(void);
void fn_8008BC2C(void);
void fn_8008BC58(void);
void fn_8008BD10(void);
void fn_8008C62C(void);

asm void fn_8008B130(void)
{
    nofralloc
    addi r3, r3, 0x164
    b fn_80473F18
}

asm void fn_8008B138(void)
{
    nofralloc
    addi r3, r3, 0x164
    b fn_80473F34
}

asm void fn_8008B140(void)
{
    nofralloc
    stwu r1, -0x1c0(r1)
    mflr r0
    stw r0, 0x1c4(r1)
    stmw r21, 0x194(r1)
    mr r21, r3
    lwz r0, 0x20c(r3)
    srawi r0, r0, 24
    cmpwi r0, 0x1
    beq lbl_fn_8008B140_00000068
    cmpwi r0, 0x5
    beq lbl_fn_8008B140_000000B8
    cmpwi r0, 0x2
    beq lbl_fn_8008B140_00000280
    cmpwi r0, 0x3
    beq lbl_fn_8008B140_000003C4
    cmpwi r0, 0x7
    beq lbl_fn_8008B140_000004A0
    cmpwi r0, 0x4
    beq lbl_fn_8008B140_000006F8
    cmpwi r0, 0x6
    beq lbl_fn_8008B140_000007D4
    b lbl_fn_8008B140_0000081C
lbl_fn_8008B140_00000068:
    addi r3, r3, 0x164
    bl fn_80473F50
    cmpwi r3, 0x0
    beq lbl_fn_8008B140_00000080
    li r3, 0x1
    b lbl_fn_8008B140_00000820
lbl_fn_8008B140_00000080:
    addi r3, r21, 0x164
    bl fn_80473EFC
    cmpwi r3, 0x3
    bne lbl_fn_8008B140_000000A4
    lwz r0, 0x20c(r21)
    li r3, 0x5
    rlwimi r0, r3, 24, 0, 7
    stw r0, 0x20c(r21)
    b lbl_fn_8008B140_000000B8
lbl_fn_8008B140_000000A4:
    lwz r0, 0x20c(r21)
    li r3, 0x9
    rlwimi r0, r3, 24, 0, 7
    stw r0, 0x20c(r21)
    b lbl_fn_8008B140_0000081C
lbl_fn_8008B140_000000B8:
    addi r24, r21, 0x17c
    li r23, 0x0
    li r22, 0x1
    b lbl_fn_8008B140_000000E4
lbl_fn_8008B140_000000C8:
    mr r3, r24
    bl fn_80473F50
    cmpwi r3, 0x0
    beq lbl_fn_8008B140_000000DC
    li r23, 0x1
lbl_fn_8008B140_000000DC:
    addi r24, r24, 0x18
    addi r22, r22, 0x1
lbl_fn_8008B140_000000E4:
    lwz r3, 0x20c(r21)
    extlwi r0, r3, 9, 8
    srawi r0, r0, 24
    cmpw r22, r0
    blt lbl_fn_8008B140_000000C8
    extlwi r0, r3, 2, 26
    srawi. r0, r0, 31
    beq lbl_fn_8008B140_00000148
    addi r3, r21, 0x1c4
    bl fn_80473F50
    cmpwi r23, 0x0
    li r23, 0x0
    bne lbl_fn_8008B140_00000120
    cmpwi r3, 0x0
    beq lbl_fn_8008B140_00000124
lbl_fn_8008B140_00000120:
    li r23, 0x1
lbl_fn_8008B140_00000124:
    cmpwi r3, 0x0
    bne lbl_fn_8008B140_00000148
    addi r3, r21, 0x1c4
    bl fn_80473EFC
    cmpwi r3, 0x4
    bne lbl_fn_8008B140_00000148
    lwz r0, 0x20c(r21)
    rlwinm r0, r0, 0, 27, 25
    stw r0, 0x20c(r21)
lbl_fn_8008B140_00000148:
    cmpwi r23, 0x0
    beq lbl_fn_8008B140_00000158
    li r3, 0x1
    b lbl_fn_8008B140_00000820
lbl_fn_8008B140_00000158:
    mr r3, r21
    bl fn_8009303C
    lwz r0, 0x20c(r21)
    slwi r0, r0, 30
    srawi. r0, r0, 31
    beq lbl_fn_8008B140_000001B0
    li r22, 0x1
    b lbl_fn_8008B140_00000188
lbl_fn_8008B140_00000178:
    mr r3, r21
    mr r4, r22
    bl fn_8008C62C
    addi r22, r22, 0x1
lbl_fn_8008B140_00000188:
    lwz r3, 0x20c(r21)
    extlwi r0, r3, 9, 8
    srawi r0, r0, 24
    cmpw r22, r0
    blt lbl_fn_8008B140_00000178
    li r0, 0x8
    rlwimi r3, r0, 24, 0, 7
    rlwinm r0, r3, 0, 31, 29
    stw r0, 0x20c(r21)
    b lbl_fn_8008B140_0000081C
lbl_fn_8008B140_000001B0:
    mr r3, r21
    bl fn_8008C950
    lwz r0, 0x4(r21)
    li r22, 0x1
    li r23, 0x1
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_8008B140_000001E4
    addi r3, r21, 0x164
    bl fn_80476194
    cmpwi r3, 0x0
    bne lbl_fn_8008B140_000001E4
    li r23, 0x0
lbl_fn_8008B140_000001E4:
    cmpwi r23, 0x0
    bne lbl_fn_8008B140_00000200
    addi r3, r21, 0x164
    bl fn_804761B0
    cmpwi r3, 0x0
    bne lbl_fn_8008B140_00000200
    li r22, 0x0
lbl_fn_8008B140_00000200:
    cmpwi r22, 0x0
    beq lbl_fn_8008B140_00000270
    lwz r3, 0x16c(r21)
    cmpwi r3, 0x0
    beq lbl_fn_8008B140_0000025C
    lwz r3, 0x38(r3)
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    beq lbl_fn_8008B140_0000025C
    addi r3, r21, 0x164
    bl fn_80473F18
    lis r4, lbl_80732368@ha
    mr r5, r3
    addi r4, r4, lbl_80732368@l
    addi r3, r1, 0x88
    addi r4, r4, 0x14
    crclr 6
    bl sprintf
    li r0, 0x0
    stb r0, 0x187(r1)
    lwz r3, lbl_8087EEB8
    addi r4, r1, 0x88
    bl fn_800697D8
lbl_fn_8008B140_0000025C:
    lwz r0, 0x20c(r21)
    li r3, 0x8
    rlwimi r0, r3, 24, 0, 7
    stw r0, 0x20c(r21)
    b lbl_fn_8008B140_0000081C
lbl_fn_8008B140_00000270:
    lwz r0, 0x20c(r21)
    li r3, 0x2
    rlwimi r0, r3, 24, 0, 7
    stw r0, 0x20c(r21)
lbl_fn_8008B140_00000280:
    lwz r0, 0x1e4(r21)
    cmpwi r0, 0x0
    beq lbl_fn_8008B140_000003B4
    li r23, 0x0
    li r24, 0x0
    li r22, 0x0
    b lbl_fn_8008B140_000002D4
lbl_fn_8008B140_0000029C:
    lwz r3, 0x1ec(r21)
    lwzx r3, r3, r22
    lwz r3, 0x10(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8008B140_000002CC
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8008B140_000002CC
    li r23, 0x1
lbl_fn_8008B140_000002CC:
    addi r24, r24, 0x1
    addi r22, r22, 0x4
lbl_fn_8008B140_000002D4:
    lwz r0, 0x1e4(r21)
    cmplw r24, r0
    blt lbl_fn_8008B140_0000029C
    cmpwi r23, 0x0
    bne lbl_fn_8008B140_000002F8
    lwz r3, lbl_8087EFB4
    lwz r0, 0x54(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8008B140_00000300
lbl_fn_8008B140_000002F8:
    li r3, 0x1
    b lbl_fn_8008B140_00000820
lbl_fn_8008B140_00000300:
    li r24, 0x0
    li r22, 0x0
    li r23, 0x0
    b lbl_fn_8008B140_000003A8
lbl_fn_8008B140_00000310:
    lwz r3, 0x1ec(r21)
    lwzx r3, r3, r22
    lwz r3, 0x10(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8008B140_000003A0
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8008B140_00000348
    lwz r12, 0x0(r3)
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    li r3, 0x1
    b lbl_fn_8008B140_00000820
lbl_fn_8008B140_00000348:
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_8008B140_00000368
    li r3, 0x1
    b lbl_fn_8008B140_00000820
lbl_fn_8008B140_00000368:
    lwz r3, 0x1ec(r21)
    lwzx r3, r3, r22
    lwz r3, 0x10(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8008B140_000003A0
    beq lbl_fn_8008B140_00000394
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8008B140_00000394:
    lwz r3, 0x1ec(r21)
    lwzx r3, r3, r22
    stw r23, 0x10(r3)
lbl_fn_8008B140_000003A0:
    addi r24, r24, 0x1
    addi r22, r22, 0x4
lbl_fn_8008B140_000003A8:
    lwz r0, 0x1e4(r21)
    cmplw r24, r0
    blt lbl_fn_8008B140_00000310
lbl_fn_8008B140_000003B4:
    lwz r0, 0x20c(r21)
    li r3, 0x3
    rlwimi r0, r3, 24, 0, 7
    stw r0, 0x20c(r21)
lbl_fn_8008B140_000003C4:
    lwz r0, 0x1e4(r21)
    cmpwi r0, 0x0
    beq lbl_fn_8008B140_00000490
    li r23, 0x1
    li r24, 0x0
    li r22, 0x0
    b lbl_fn_8008B140_00000418
lbl_fn_8008B140_000003E0:
    lwz r3, 0x1ec(r21)
    lwzx r3, r3, r22
    lwz r3, 0x10(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8008B140_00000410
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_8008B140_00000410
    li r23, 0x0
lbl_fn_8008B140_00000410:
    addi r24, r24, 0x1
    addi r22, r22, 0x4
lbl_fn_8008B140_00000418:
    lwz r0, 0x1e4(r21)
    cmplw r24, r0
    blt lbl_fn_8008B140_000003E0
    cmpwi r23, 0x0
    bne lbl_fn_8008B140_00000434
    li r3, 0x1
    b lbl_fn_8008B140_00000820
lbl_fn_8008B140_00000434:
    li r24, 0x0
    li r22, 0x0
    li r23, 0x0
    b lbl_fn_8008B140_00000484
lbl_fn_8008B140_00000444:
    lwz r3, 0x1ec(r21)
    lwzx r3, r3, r22
    lwz r3, 0x10(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8008B140_00000470
    beq lbl_fn_8008B140_00000470
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8008B140_00000470:
    lwz r3, 0x1ec(r21)
    addi r24, r24, 0x1
    lwzx r3, r3, r22
    addi r22, r22, 0x4
    stw r23, 0x10(r3)
lbl_fn_8008B140_00000484:
    lwz r0, 0x1e4(r21)
    cmplw r24, r0
    blt lbl_fn_8008B140_00000444
lbl_fn_8008B140_00000490:
    lwz r0, 0x20c(r21)
    li r3, 0x7
    rlwimi r0, r3, 24, 0, 7
    stw r0, 0x20c(r21)
lbl_fn_8008B140_000004A0:
    addi r3, r21, 0xfc
    bl fn_80473F50
    cmpwi r3, 0x0
    beq lbl_fn_8008B140_000004B8
    li r3, 0x1
    b lbl_fn_8008B140_00000820
lbl_fn_8008B140_000004B8:
    mr r3, r21
    bl fn_8008BD10
    mr r3, r21
    addi r4, r21, 0x104
    bl fn_8008C850
    lwz r0, 0x20c(r21)
    extlwi r0, r0, 2, 28
    srawi. r0, r0, 31
    bne lbl_fn_8008B140_000006E8
    addi r3, r21, 0x164
    bl fn_80473F18
    li r0, 0x0
    stw r0, 0x1c(r1)
    mr r23, r3
    addi r22, r1, 0x1c
    stw r0, 0x20(r1)
    stw r0, 0x24(r1)
    bl strlen
    mr r24, r3
    mr r3, r22
    mr r4, r24
    bl fn_80013DC4
    lbz r0, 0x8(r1)
    mr r3, r22
    stb r0, 0xc(r1)
    mr r6, r23
    add r7, r23, r24
    addi r8, r1, 0xc
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    mr r4, r22
    addi r3, r1, 0x10
    bl fn_8006B0C8
    lwz r0, 0x1c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8008B140_00000554
    lwz r3, 0x24(r1)
    bl dtor_80084684
lbl_fn_8008B140_00000554:
    lwz r0, 0x104(r21)
    li r23, 0x0
    cmpwi r0, 0x0
    beq lbl_fn_8008B140_000006D4
    lis r27, lbl_807C7268@ha
    lis r29, fn_8008BC2C@ha
    lis r30, fn_8008BC58@ha
    lis r25, lbl_80778840@ha
    addi r24, r1, 0x70
    addi r28, r27, lbl_807C7268@l
    addi r29, r29, fn_8008BC2C@l
    addi r30, r30, fn_8008BC58@l
    addi r25, r25, lbl_80778840@l
    li r22, 0x0
    li r31, 0x1
    li r26, 0x0
    b lbl_fn_8008B140_000006C8
lbl_fn_8008B140_00000598:
    lbz r0, lbl_8087EF1C
    lwz r4, 0x0(r25)
    extsb. r0, r0
    lwz r3, 0x4(r25)
    lwz r0, 0x8(r25)
    stw r4, 0x38(r1)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
    stw r4, 0x44(r1)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    stw r4, 0x28(r1)
    stw r3, 0x2c(r1)
    stw r0, 0x30(r1)
    stw r21, 0x34(r1)
    stw r26, 0x70(r1)
    bne lbl_fn_8008B140_000005E8
    stw r29, 0x4(r28)
    stw r30, lbl_807C7268@l(r27)
    stb r31, lbl_8087EF1C
lbl_fn_8008B140_000005E8:
    lwz r6, 0x28(r1)
    addi r3, r1, 0x50
    lwz r5, 0x2c(r1)
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r6, 0x50(r1)
    stw r5, 0x54(r1)
    stw r4, 0x58(r1)
    stw r0, 0x5c(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_8008B140_0000065C
    lwz r5, 0x50(r1)
    addic. r6, r24, 0x4
    lwz r4, 0x54(r1)
    lwz r3, 0x58(r1)
    lwz r0, 0x5c(r1)
    stw r5, 0x60(r1)
    stw r4, 0x64(r1)
    stw r3, 0x68(r1)
    stw r0, 0x6c(r1)
    beq lbl_fn_8008B140_00000654
    stw r5, 0x0(r6)
    stw r4, 0x4(r6)
    stw r3, 0x8(r6)
    stw r0, 0xc(r6)
lbl_fn_8008B140_00000654:
    li r0, 0x1
    b lbl_fn_8008B140_00000660
lbl_fn_8008B140_0000065C:
    li r0, 0x0
lbl_fn_8008B140_00000660:
    cmpwi r0, 0x0
    beq lbl_fn_8008B140_00000670
    stw r28, 0x70(r1)
    b lbl_fn_8008B140_00000674
lbl_fn_8008B140_00000670:
    stw r26, 0x70(r1)
lbl_fn_8008B140_00000674:
    lwz r3, 0x108(r21)
    addi r4, r1, 0x10
    addi r5, r1, 0x70
    lwzx r3, r3, r22
    bl fn_80080C20
    cmpwi r24, 0x0
    beq lbl_fn_8008B140_000006C0
    lwz r3, 0x70(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8008B140_000006C0
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_8008B140_000006BC
    addi r3, r24, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8008B140_000006BC:
    stw r26, 0x70(r1)
lbl_fn_8008B140_000006C0:
    addi r22, r22, 0x4
    addi r23, r23, 0x1
lbl_fn_8008B140_000006C8:
    lwz r0, 0x104(r21)
    cmplw r23, r0
    blt lbl_fn_8008B140_00000598
lbl_fn_8008B140_000006D4:
    lwz r0, 0x10(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8008B140_000006E8
    lwz r3, 0x18(r1)
    bl dtor_80084684
lbl_fn_8008B140_000006E8:
    lwz r0, 0x20c(r21)
    li r3, 0x4
    rlwimi r0, r3, 24, 0, 7
    stw r0, 0x20c(r21)
lbl_fn_8008B140_000006F8:
    li r24, 0x0
    li r23, 0x0
    li r25, 0x0
    b lbl_fn_8008B140_0000075C
lbl_fn_8008B140_00000708:
    li r22, 0x0
    li r26, 0x0
    b lbl_fn_8008B140_00000740
lbl_fn_8008B140_00000714:
    lwz r0, 0xc(r3)
    add r3, r0, r26
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8008B140_00000738
    bl fn_800D59B8
    cmpwi r3, 0x0
    beq lbl_fn_8008B140_00000738
    li r24, 0x1
lbl_fn_8008B140_00000738:
    addi r26, r26, 0x18
    addi r22, r22, 0x1
lbl_fn_8008B140_00000740:
    lwz r0, 0x108(r21)
    lwzx r3, r25, r0
    lbz r0, 0x4a(r3)
    cmpw r22, r0
    blt lbl_fn_8008B140_00000714
    addi r25, r25, 0x4
    addi r23, r23, 0x1
lbl_fn_8008B140_0000075C:
    lwz r0, 0x104(r21)
    cmplw r23, r0
    blt lbl_fn_8008B140_00000708
    cmpwi r24, 0x0
    beq lbl_fn_8008B140_00000778
    li r3, 0x1
    b lbl_fn_8008B140_00000820
lbl_fn_8008B140_00000778:
    li r22, 0x0
    li r23, 0x0
    b lbl_fn_8008B140_00000798
lbl_fn_8008B140_00000784:
    lwz r3, 0x108(r21)
    lwzx r3, r3, r23
    bl fn_80081BD0
    addi r23, r23, 0x4
    addi r22, r22, 0x1
lbl_fn_8008B140_00000798:
    lwz r0, 0x104(r21)
    cmplw r22, r0
    blt lbl_fn_8008B140_00000784
    lwz r4, 0x20c(r21)
    extlwi r0, r4, 2, 29
    srawi. r0, r0, 31
    beq lbl_fn_8008B140_000007C8
    li r3, 0x8
    rlwinm r0, r4, 0, 30, 28
    rlwimi r0, r3, 24, 0, 7
    stw r0, 0x20c(r21)
    b lbl_fn_8008B140_000007D4
lbl_fn_8008B140_000007C8:
    li r0, 0x6
    rlwimi r4, r0, 24, 0, 7
    stw r4, 0x20c(r21)
lbl_fn_8008B140_000007D4:
    lwz r12, 0x0(r21)
    mr r3, r21
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8008B140_000007F8
    li r3, 0x1
    b lbl_fn_8008B140_00000820
lbl_fn_8008B140_000007F8:
    lwz r0, 0x20c(r21)
    li r3, 0x8
    rlwimi r0, r3, 24, 0, 7
    stw r0, 0x20c(r21)
    mr r3, r21
    lwz r12, 0x0(r21)
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
lbl_fn_8008B140_0000081C:
    li r3, 0x0
lbl_fn_8008B140_00000820:
    lmw r21, 0x194(r1)
    lwz r0, 0x1c4(r1)
    mtlr r0
    addi r1, r1, 0x1c0
    blr
}

asm void fn_8008B964(void)
{
    nofralloc
    lwz r3, lbl_8087EFB4
    blr
}

asm void fn_8008B96C(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_8008B974(void)
{
    nofralloc
    blr
}

asm void fn_8008B978(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    stmw r21, 0x94(r1)
    mr r21, r3
    lwz r0, 0x20c(r3)
    rlwimi r0, r4, 3, 28, 28
    stw r0, 0x20c(r3)
    extlwi r0, r0, 2, 28
    srawi. r0, r0, 31
    bne lbl_fn_8008B978_00000A94
    addi r3, r3, 0x164
    bl fn_80473F18
    li r0, 0x0
    stw r0, 0x1c(r1)
    mr r23, r3
    addi r22, r1, 0x1c
    stw r0, 0x20(r1)
    stw r0, 0x24(r1)
    bl strlen
    mr r24, r3
    mr r3, r22
    mr r4, r24
    bl fn_80013DC4
    lbz r0, 0x8(r1)
    mr r3, r22
    stb r0, 0xc(r1)
    mr r6, r23
    add r7, r23, r24
    addi r8, r1, 0xc
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    mr r4, r22
    addi r3, r1, 0x10
    bl fn_8006B0C8
    lwz r0, 0x1c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8008B978_000008EC
    lwz r3, 0x24(r1)
    bl dtor_80084684
lbl_fn_8008B978_000008EC:
    lwz r0, 0x104(r21)
    li r23, 0x0
    cmpwi r0, 0x0
    beq lbl_fn_8008B978_00000A6C
    lis r27, lbl_807C7268@ha
    lis r29, fn_8008BC2C@ha
    lis r30, fn_8008BC58@ha
    lis r25, lbl_8077884C@ha
    addi r24, r1, 0x70
    addi r28, r27, lbl_807C7268@l
    addi r29, r29, fn_8008BC2C@l
    addi r30, r30, fn_8008BC58@l
    addi r25, r25, lbl_8077884C@l
    li r22, 0x0
    li r31, 0x1
    li r26, 0x0
    b lbl_fn_8008B978_00000A60
lbl_fn_8008B978_00000930:
    lbz r0, lbl_8087EF1C
    lwz r4, 0x0(r25)
    extsb. r0, r0
    lwz r3, 0x4(r25)
    lwz r0, 0x8(r25)
    stw r4, 0x38(r1)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
    stw r4, 0x44(r1)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    stw r4, 0x28(r1)
    stw r3, 0x2c(r1)
    stw r0, 0x30(r1)
    stw r21, 0x34(r1)
    stw r26, 0x70(r1)
    bne lbl_fn_8008B978_00000980
    stw r29, 0x4(r28)
    stw r30, lbl_807C7268@l(r27)
    stb r31, lbl_8087EF1C
lbl_fn_8008B978_00000980:
    lwz r6, 0x28(r1)
    addi r3, r1, 0x50
    lwz r5, 0x2c(r1)
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r6, 0x50(r1)
    stw r5, 0x54(r1)
    stw r4, 0x58(r1)
    stw r0, 0x5c(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_8008B978_000009F4
    lwz r5, 0x50(r1)
    addic. r6, r24, 0x4
    lwz r4, 0x54(r1)
    lwz r3, 0x58(r1)
    lwz r0, 0x5c(r1)
    stw r5, 0x60(r1)
    stw r4, 0x64(r1)
    stw r3, 0x68(r1)
    stw r0, 0x6c(r1)
    beq lbl_fn_8008B978_000009EC
    stw r5, 0x0(r6)
    stw r4, 0x4(r6)
    stw r3, 0x8(r6)
    stw r0, 0xc(r6)
lbl_fn_8008B978_000009EC:
    li r0, 0x1
    b lbl_fn_8008B978_000009F8
lbl_fn_8008B978_000009F4:
    li r0, 0x0
lbl_fn_8008B978_000009F8:
    cmpwi r0, 0x0
    beq lbl_fn_8008B978_00000A08
    stw r28, 0x70(r1)
    b lbl_fn_8008B978_00000A0C
lbl_fn_8008B978_00000A08:
    stw r26, 0x70(r1)
lbl_fn_8008B978_00000A0C:
    lwz r3, 0x108(r21)
    addi r4, r1, 0x10
    addi r5, r1, 0x70
    lwzx r3, r3, r22
    bl fn_80080C20
    cmpwi r24, 0x0
    beq lbl_fn_8008B978_00000A58
    lwz r3, 0x70(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8008B978_00000A58
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_8008B978_00000A54
    addi r3, r24, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_8008B978_00000A54:
    stw r26, 0x70(r1)
lbl_fn_8008B978_00000A58:
    addi r22, r22, 0x4
    addi r23, r23, 0x1
lbl_fn_8008B978_00000A60:
    lwz r0, 0x104(r21)
    cmplw r23, r0
    blt lbl_fn_8008B978_00000930
lbl_fn_8008B978_00000A6C:
    lwz r0, 0x10(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8008B978_00000A80
    lwz r3, 0x18(r1)
    bl dtor_80084684
lbl_fn_8008B978_00000A80:
    lwz r0, 0x20c(r21)
    li r3, 0x4
    rlwimi r0, r3, 24, 0, 7
    ori r0, r0, 0x4
    stw r0, 0x20c(r21)
lbl_fn_8008B978_00000A94:
    lmw r21, 0x94(r1)
    lwz r0, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

asm void fn_8008BBD8(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    bne cr1, lbl_fn_8008BBD8_00000AD0
    stfd f1, 0x28(r1)
    stfd f2, 0x30(r1)
    stfd f3, 0x38(r1)
    stfd f4, 0x40(r1)
    stfd f5, 0x48(r1)
    stfd f6, 0x50(r1)
    stfd f7, 0x58(r1)
    stfd f8, 0x60(r1)
lbl_fn_8008BBD8_00000AD0:
    stw r3, 0x8(r1)
    li r3, 0x0
    stw r4, 0xc(r1)
    stw r5, 0x10(r1)
    stw r6, 0x14(r1)
    stw r7, 0x18(r1)
    stw r8, 0x1c(r1)
    stw r9, 0x20(r1)
    stw r10, 0x24(r1)
    addi r1, r1, 0x70
    blr
}

asm void fn_8008BC2C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    mr r12, r3
    stw r0, 0x14(r1)
    lwz r3, 0xc(r3)
    bl fn_80695B00
    nop
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8008BC58(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r5, 0x3
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bne lbl_fn_8008BC58_00000B5C
    lis r3, lbl_80778880@ha
    addi r3, r3, lbl_80778880@l
    stw r3, 0x0(r4)
    b lbl_fn_8008BC58_00000BC8
lbl_fn_8008BC58_00000B5C:
    cmpwi r5, 0x0
    bne lbl_fn_8008BC58_00000B90
    cmpwi r4, 0x0
    beq lbl_fn_8008BC58_00000BC8
    lwz r5, 0x0(r3)
    lwz r0, 0x4(r3)
    stw r0, 0x4(r4)
    stw r5, 0x0(r4)
    lwz r0, 0x8(r3)
    stw r0, 0x8(r4)
    lwz r0, 0xc(r3)
    stw r0, 0xc(r4)
    b lbl_fn_8008BC58_00000BC8
lbl_fn_8008BC58_00000B90:
    cmpwi r5, 0x1
    beq lbl_fn_8008BC58_00000BC8
    lwz r5, 0x0(r4)
    lis r3, lbl_80778880@ha
    lwz r4, lbl_80778880@l(r3)
    lwz r3, 0x0(r5)
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_8008BC58_00000BC0
    stw r30, 0x0(r31)
    b lbl_fn_8008BC58_00000BC8
lbl_fn_8008BC58_00000BC0:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_8008BC58_00000BC8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8008BD10(void)
{
    nofralloc
    stwu r1, -0x560(r1)
    mflr r0
    stw r0, 0x564(r1)
    addi r11, r1, 0x560
    bl _savegpr_20
    lwz r4, 0x16c(r3)
    mr r26, r3
    lwz r29, 0x30(r4)
    cmpwi r29, 0xfe
    ble lbl_fn_8008BD10_00000C44
    addi r3, r3, 0x164
    bl fn_80473F18
    lis r4, lbl_80732368@ha
    mr r6, r3
    addi r4, r4, lbl_80732368@l
    mr r5, r29
    addi r3, r1, 0x428
    addi r4, r4, 0x42
    crclr 6
    bl sprintf
    li r0, 0x0
    stb r0, 0x527(r1)
    lwz r3, lbl_8087EEB8
    addi r4, r1, 0x428
    bl fn_800697D8
lbl_fn_8008BD10_00000C44:
    lwz r3, 0x148(r26)
    cmpwi r3, 0x0
    beq lbl_fn_8008BD10_00000C54
    bl fn_80084C24
lbl_fn_8008BD10_00000C54:
    cmpwi r29, 0x0
    stw r29, 0x144(r26)
    beq lbl_fn_8008BD10_00000C80
    slwi r3, r29, 2
    li r4, 0x6
    la r5, lbl_8087D808
    la r6, lbl_8087D804
    li r7, 0x0
    bl fn_800846FC
    stw r3, 0x148(r26)
    b lbl_fn_8008BD10_00000C88
lbl_fn_8008BD10_00000C80:
    li r0, 0x0
    stw r0, 0x148(r26)
lbl_fn_8008BD10_00000C88:
    lwz r3, 0x108(r26)
    cmpwi r3, 0x0
    beq lbl_fn_8008BD10_00000C98
    bl fn_80084C24
lbl_fn_8008BD10_00000C98:
    cmpwi r29, 0x0
    stw r29, 0x104(r26)
    beq lbl_fn_8008BD10_00000CC4
    slwi r3, r29, 2
    li r4, 0x6
    la r5, lbl_8087D800
    la r6, lbl_8087D7FC
    li r7, 0x0
    bl fn_800846FC
    stw r3, 0x108(r26)
    b lbl_fn_8008BD10_00000CCC
lbl_fn_8008BD10_00000CC4:
    li r0, 0x0
    stw r0, 0x108(r26)
lbl_fn_8008BD10_00000CCC:
    lwz r0, 0x4(r26)
    rlwinm r3, r0, 0, 8, 8
    subis r0, r3, 0x80
    cmplwi r0, 0x0
    bne lbl_fn_8008BD10_00000D24
    lwz r3, 0xf8(r26)
    cmpwi r3, 0x0
    beq lbl_fn_8008BD10_00000CF0
    bl fn_80084C24
lbl_fn_8008BD10_00000CF0:
    cmpwi r29, 0x0
    stw r29, 0xf4(r26)
    beq lbl_fn_8008BD10_00000D1C
    mr r3, r29
    li r4, 0x6
    la r5, lbl_8087D7F8
    la r6, lbl_8087D7F4
    li r7, 0x0
    bl fn_800846FC
    stw r3, 0xf8(r26)
    b lbl_fn_8008BD10_00000D24
lbl_fn_8008BD10_00000D1C:
    li r0, 0x0
    stw r0, 0xf8(r26)
lbl_fn_8008BD10_00000D24:
    li r6, 0x0
    li r3, 0x0
    mr r5, r6
    li r0, 0x1
    mtctr r29
    cmpwi r29, 0x0
    ble lbl_fn_8008BD10_00000D70
lbl_fn_8008BD10_00000D40:
    lwz r4, 0x148(r26)
    stwx r5, r4, r3
    lwz r4, 0x108(r26)
    stwx r5, r4, r3
    lwz r4, 0xf4(r26)
    cmpwi r4, 0x0
    beq lbl_fn_8008BD10_00000D64
    lwz r4, 0xf8(r26)
    stbx r0, r4, r6
lbl_fn_8008BD10_00000D64:
    addi r6, r6, 0x1
    addi r3, r3, 0x4
    bdnz lbl_fn_8008BD10_00000D40
lbl_fn_8008BD10_00000D70:
    addi r3, r26, 0xfc
    bl fn_80473EFC
    cmpwi r3, 0x3
    bne lbl_fn_8008BD10_00001054
    addi r3, r26, 0xfc
    bl fn_8047486C
    cmpwi r3, 0xfe
    ble lbl_fn_8008BD10_00000DD8
    addi r3, r26, 0xfc
    bl fn_80473F18
    mr r22, r3
    addi r3, r26, 0xfc
    bl fn_8047486C
    lis r4, lbl_80732368@ha
    mr r5, r3
    addi r4, r4, lbl_80732368@l
    mr r6, r22
    addi r3, r1, 0x328
    addi r4, r4, 0x42
    crclr 6
    bl sprintf
    li r0, 0x0
    stb r0, 0x427(r1)
    lwz r3, lbl_8087EEB8
    addi r4, r1, 0x328
    bl fn_800697D8
lbl_fn_8008BD10_00000DD8:
    addi r3, r26, 0x164
    bl fn_80476204
    cmpwi r3, 0x0
    bne lbl_fn_8008BD10_00000E60
    li r23, 0x0
    li r24, 0x0
    li r22, 0x0
    b lbl_fn_8008BD10_00000E50
lbl_fn_8008BD10_00000DF8:
    addi r3, r26, 0xfc
    bl fn_80474860
    lwz r3, 0x0(r3)
    lwzx r3, r3, r24
    lbz r0, 0x4e(r3)
    cmpwi r0, 0x1
    bne lbl_fn_8008BD10_00000E18
    stb r22, 0x4e(r3)
lbl_fn_8008BD10_00000E18:
    lbz r0, 0x4f(r3)
    cmpwi r0, 0x1
    bne lbl_fn_8008BD10_00000E28
    stb r22, 0x4f(r3)
lbl_fn_8008BD10_00000E28:
    lbz r0, 0x50(r3)
    cmpwi r0, 0x1
    bne lbl_fn_8008BD10_00000E38
    stb r22, 0x50(r3)
lbl_fn_8008BD10_00000E38:
    lbz r0, 0x51(r3)
    cmpwi r0, 0x1
    bne lbl_fn_8008BD10_00000E48
    stb r22, 0x51(r3)
lbl_fn_8008BD10_00000E48:
    addi r23, r23, 0x1
    addi r24, r24, 0x4
lbl_fn_8008BD10_00000E50:
    addi r3, r26, 0xfc
    bl fn_8047486C
    cmpw r23, r3
    blt lbl_fn_8008BD10_00000DF8
lbl_fn_8008BD10_00000E60:
    lis r3, lbl_80732368@ha
    li r28, 0x0
    li r25, 0x0
    li r30, 0x0
    addi r23, r3, lbl_80732368@l
    li r31, 0x0
    b lbl_fn_8008BD10_00001048
lbl_fn_8008BD10_00000E7C:
    lwz r0, 0x16c(r26)
    li r27, 0x0
    add r3, r0, r30
    lwz r21, 0x50(r3)
    mr r3, r21
    bl fn_800DC6B4
    mr r22, r3
    li r20, 0x0
    li r24, 0x0
    b lbl_fn_8008BD10_00000EDC
lbl_fn_8008BD10_00000EA4:
    addi r3, r26, 0xfc
    bl fn_80474860
    lwz r3, 0x0(r3)
    lwzx r3, r3, r24
    lwz r0, 0x0(r3)
    cmplw r22, r0
    bne lbl_fn_8008BD10_00000ED4
    addi r3, r26, 0xfc
    bl fn_80474860
    lwz r3, 0x0(r3)
    lwzx r27, r3, r24
    b lbl_fn_8008BD10_00000EEC
lbl_fn_8008BD10_00000ED4:
    addi r20, r20, 0x1
    addi r24, r24, 0x4
lbl_fn_8008BD10_00000EDC:
    addi r3, r26, 0xfc
    bl fn_8047486C
    cmpw r20, r3
    blt lbl_fn_8008BD10_00000EA4
lbl_fn_8008BD10_00000EEC:
    cmpwi r27, 0x0
    bne lbl_fn_8008BD10_00000F38
    addi r3, r26, 0x164
    bl fn_80473F18
    mr r6, r3
    mr r5, r21
    addi r3, r1, 0x228
    addi r4, r23, 0x6b
    crclr 6
    bl sprintf
    stb r31, 0x327(r1)
    addi r4, r1, 0x228
    lwz r3, lbl_8087EEB8
    bl fn_800697D8
    lwz r3, lbl_8087EFE0
    addi r4, r23, 0xa0
    bl fn_800C5F5C
    mr r20, r3
    b lbl_fn_8008BD10_00000F48
lbl_fn_8008BD10_00000F38:
    lwz r3, lbl_8087EFE0
    lwz r4, 0x4(r27)
    bl fn_800C5FF0
    mr r20, r3
lbl_fn_8008BD10_00000F48:
    cmpwi r20, 0x0
    bne lbl_fn_8008BD10_00000F8C
    addi r3, r26, 0x164
    bl fn_80473F18
    mr r5, r3
    addi r3, r1, 0x128
    addi r4, r23, 0xb9
    crclr 6
    bl sprintf
    stb r31, 0x227(r1)
    addi r4, r1, 0x128
    lwz r3, lbl_8087EEB8
    bl fn_800697D8
    lwz r3, lbl_8087EFE0
    addi r4, r23, 0xe6
    bl fn_800C5F5C
    mr r20, r3
lbl_fn_8008BD10_00000F8C:
    lwz r3, 0x148(r26)
    cmpwi r27, 0x0
    stwx r20, r3, r25
    lwz r3, 0x0(r20)
    addi r0, r3, 0x1
    stw r0, 0x0(r20)
    beq lbl_fn_8008BD10_00000FF0
    addi r5, r23, 0xa
    li r3, 0x54
    mr r6, r5
    li r4, 0x6
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8008BD10_00000FD4
    lwz r4, 0x4(r20)
    lwz r4, 0x0(r4)
    bl fn_8007C144
lbl_fn_8008BD10_00000FD4:
    lwz r5, 0x108(r26)
    mr r4, r27
    stwx r3, r5, r25
    lwz r3, 0x108(r26)
    lwzx r3, r3, r25
    bl fn_80080584
    b lbl_fn_8008BD10_0000103C
lbl_fn_8008BD10_00000FF0:
    addi r5, r23, 0xa
    li r3, 0x54
    mr r6, r5
    li r4, 0x6
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8008BD10_0000101C
    lwz r4, 0x4(r20)
    lwz r4, 0x0(r4)
    bl fn_8007C144
lbl_fn_8008BD10_0000101C:
    lwz r4, 0x108(r26)
    stwx r3, r4, r25
    lwz r3, 0x4(r20)
    lwz r5, 0x108(r26)
    lwz r4, 0x0(r3)
    lwzx r3, r5, r25
    lwz r4, 0x10(r4)
    bl fn_80080B34
lbl_fn_8008BD10_0000103C:
    addi r30, r30, 0x4
    addi r28, r28, 0x1
    addi r25, r25, 0x4
lbl_fn_8008BD10_00001048:
    cmpw r28, r29
    blt lbl_fn_8008BD10_00000E7C
    b lbl_fn_8008BD10_00001238
lbl_fn_8008BD10_00001054:
    addi r3, r26, 0x164
    bl fn_80473F18
    lis r4, lbl_80732368@ha
    mr r5, r3
    addi r4, r4, lbl_80732368@l
    addi r3, r1, 0x28
    addi r4, r4, 0xfb
    crclr 6
    bl sprintf
    li r0, 0x0
    stb r0, 0x127(r1)
    lwz r3, lbl_8087EEB8
    addi r4, r1, 0x28
    bl fn_800697D8
    lwz r3, 0x140(r26)
    addi r27, r26, 0x164
    lwz r4, 0x16c(r26)
    cmpwi r3, 0x0
    lwz r22, 0x30(r4)
    beq lbl_fn_8008BD10_000010A8
    bl fn_80084C24
lbl_fn_8008BD10_000010A8:
    cmpwi r22, 0x0
    stw r22, 0x13c(r26)
    beq lbl_fn_8008BD10_000010D4
    slwi r3, r22, 2
    li r4, 0x6
    la r5, lbl_8087D808
    la r6, lbl_8087D804
    li r7, 0x0
    bl fn_800846FC
    stw r3, 0x140(r26)
    b lbl_fn_8008BD10_000010DC
lbl_fn_8008BD10_000010D4:
    li r0, 0x0
    stw r0, 0x140(r26)
lbl_fn_8008BD10_000010DC:
    lwz r3, 0x8(r27)
    lwz r0, 0x34(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8008BD10_000011E0
    lis r3, lbl_80732368@ha
    li r28, 0x0
    li r25, 0x0
    li r30, 0x0
    addi r31, r3, lbl_80732368@l
    b lbl_fn_8008BD10_000011CC
lbl_fn_8008BD10_00001104:
    addi r5, r31, 0xa
    li r3, 0x14
    mr r6, r5
    li r4, 0x6
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r22, r3
    beq lbl_fn_8008BD10_00001140
    lwz r5, 0x8(r27)
    mr r4, r27
    lwz r5, 0x34(r5)
    lwzx r5, r5, r30
    bl fn_800C41D0
    mr r22, r3
lbl_fn_8008BD10_00001140:
    addi r5, r31, 0xa
    li r3, 0x10
    mr r6, r5
    li r4, 0x6
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r23, r3
    beq lbl_fn_8008BD10_0000116C
    bl fn_800C4E38
    mr r23, r3
lbl_fn_8008BD10_0000116C:
    lfs f1, lbl_80880BF8
    mr r3, r23
    mr r4, r22
    bl fn_800C4ECC
    lwz r4, 0x140(r26)
    mr r3, r23
    stwx r23, r4, r25
    lwz r4, 0x148(r26)
    stwx r23, r4, r25
    lwz r4, 0x0(r23)
    addi r0, r4, 0x1
    stw r0, 0x0(r23)
    lwz r0, 0x108(r26)
    add r4, r0, r25
    bl fn_800C4F38
    lwz r3, 0x16c(r26)
    lwz r5, 0x108(r26)
    lwz r4, 0x34(r3)
    lwzx r3, r5, r25
    lwzx r4, r4, r30
    bl fn_80080B34
    addi r30, r30, 0x4
    addi r28, r28, 0x1
    addi r25, r25, 0x4
lbl_fn_8008BD10_000011CC:
    lwz r3, 0x8(r27)
    lwz r0, 0x30(r3)
    cmpw r28, r0
    blt lbl_fn_8008BD10_00001104
    b lbl_fn_8008BD10_00001238
lbl_fn_8008BD10_000011E0:
    lis r4, lbl_80732368@ha
    lwz r3, lbl_8087EFE0
    addi r4, r4, lbl_80732368@l
    addi r4, r4, 0x121
    bl fn_800C5F5C
    mr r20, r3
    li r21, 0x0
    li r28, 0x0
    b lbl_fn_8008BD10_00001228
lbl_fn_8008BD10_00001204:
    lwz r4, 0x0(r20)
    mr r3, r20
    addi r0, r4, 0x1
    stw r0, 0x0(r20)
    lwz r0, 0x108(r26)
    add r4, r0, r28
    bl fn_800C4F38
    addi r21, r21, 0x1
    addi r28, r28, 0x4
lbl_fn_8008BD10_00001228:
    lwz r3, 0x8(r27)
    lwz r0, 0x30(r3)
    cmpw r21, r0
    blt lbl_fn_8008BD10_00001204
lbl_fn_8008BD10_00001238:
    lwz r3, 0x110(r26)
    cmpwi r3, 0x0
    beq lbl_fn_8008BD10_00001248
    bl fn_80084C24
lbl_fn_8008BD10_00001248:
    cmpwi r29, 0x0
    stw r29, 0x10c(r26)
    beq lbl_fn_8008BD10_00001274
    slwi r3, r29, 2
    li r4, 0x6
    la r5, lbl_8087D6EC
    la r6, lbl_8087D6E8
    li r7, 0x0
    bl fn_800846FC
    stw r3, 0x110(r26)
    b lbl_fn_8008BD10_0000127C
lbl_fn_8008BD10_00001274:
    li r0, 0x0
    stw r0, 0x110(r26)
lbl_fn_8008BD10_0000127C:
    lwz r3, 0x130(r26)
    cmpwi r3, 0x0
    beq lbl_fn_8008BD10_0000128C
    bl fn_80084C24
lbl_fn_8008BD10_0000128C:
    cmpwi r29, 0x0
    stw r29, 0x12c(r26)
    beq lbl_fn_8008BD10_000012B8
    slwi r3, r29, 2
    li r4, 0x6
    la r5, lbl_8087D6EC
    la r6, lbl_8087D6E8
    li r7, 0x0
    bl fn_800846FC
    stw r3, 0x130(r26)
    b lbl_fn_8008BD10_000012C0
lbl_fn_8008BD10_000012B8:
    li r0, 0x0
    stw r0, 0x130(r26)
lbl_fn_8008BD10_000012C0:
    li r20, 0x0
    li r22, 0x0
    b lbl_fn_8008BD10_00001314
lbl_fn_8008BD10_000012CC:
    lwz r3, 0x110(r26)
    li r4, 0xb
    stwx r20, r3, r22
    lwz r3, 0x108(r26)
    lwz r24, 0x130(r26)
    lwzx r3, r3, r22
    bl fn_800804D0
    stwx r3, r24, r22
    lwz r3, 0x108(r26)
    lwzx r3, r3, r22
    lbz r0, 0x4b(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8008BD10_0000130C
    lwz r0, 0x20c(r26)
    ori r0, r0, 0x1
    stw r0, 0x20c(r26)
lbl_fn_8008BD10_0000130C:
    addi r22, r22, 0x4
    addi r20, r20, 0x1
lbl_fn_8008BD10_00001314:
    lwz r0, 0x104(r26)
    cmplw r20, r0
    blt lbl_fn_8008BD10_000012CC
    li r20, 0x1
    b lbl_fn_8008BD10_00001338
lbl_fn_8008BD10_00001328:
    mr r3, r26
    mr r4, r20
    bl fn_8008C62C
    addi r20, r20, 0x1
lbl_fn_8008BD10_00001338:
    lwz r0, 0x20c(r26)
    extlwi r0, r0, 9, 8
    srawi r0, r0, 24
    cmpw r20, r0
    blt lbl_fn_8008BD10_00001328
    lwz r0, 0x4(r26)
    rlwinm r0, r0, 0, 22, 22
    cmplwi r0, 0x200
    bne lbl_fn_8008BD10_000014E4
    addi r3, r26, 0x164
    bl fn_80473F18
    li r0, 0x0
    stw r0, 0x1c(r1)
    mr r23, r3
    addi r22, r1, 0x1c
    stw r0, 0x20(r1)
    stw r0, 0x24(r1)
    bl strlen
    mr r24, r3
    mr r3, r22
    mr r4, r24
    bl fn_80013DC4
    lbz r0, 0xc(r1)
    mr r3, r22
    stb r0, 0x8(r1)
    mr r6, r23
    add r7, r23, r24
    addi r8, r1, 0x8
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    mr r4, r22
    addi r3, r1, 0x10
    bl fn_8006B174
    lwz r0, 0x10(r1)
    srwi. r0, r0, 31
    bne lbl_fn_8008BD10_000013D4
    addi r4, r1, 0x11
    b lbl_fn_8008BD10_000013D8
lbl_fn_8008BD10_000013D4:
    lwz r4, 0x18(r1)
lbl_fn_8008BD10_000013D8:
    lwz r0, 0x210(r26)
    lwz r3, lbl_8087EFA8
    cmpwi r0, 0x0
    lwz r3, 0x4c(r3)
    bne lbl_fn_8008BD10_00001410
    cmpwi r3, 0x0
    beq lbl_fn_8008BD10_00001410
    lwz r0, lbl_8087EF10
    cmpwi r0, 0x0
    beq lbl_fn_8008BD10_00001410
    bl fn_8008937C
    stw r3, 0x210(r26)
    mr r22, r3
    b lbl_fn_8008BD10_00001414
lbl_fn_8008BD10_00001410:
    li r22, 0x0
lbl_fn_8008BD10_00001414:
    lwz r0, 0x10(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8008BD10_00001428
    lwz r3, 0x18(r1)
    bl dtor_80084684
lbl_fn_8008BD10_00001428:
    lwz r0, 0x1c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8008BD10_0000143C
    lwz r3, 0x24(r1)
    bl dtor_80084684
lbl_fn_8008BD10_0000143C:
    li r20, 0x0
    li r23, 0x0
    b lbl_fn_8008BD10_000014D8
lbl_fn_8008BD10_00001448:
    addi r3, r26, 0xfc
    li r21, 0x0
    bl fn_80473EFC
    cmpwi r3, 0x3
    bne lbl_fn_8008BD10_000014BC
    lwz r0, 0x16c(r26)
    add r3, r0, r23
    lwz r25, 0x50(r3)
    mr r3, r25
    bl fn_800DC6B4
    mr r24, r3
    li r28, 0x0
    li r27, 0x0
    b lbl_fn_8008BD10_000014AC
lbl_fn_8008BD10_00001480:
    addi r3, r26, 0xfc
    bl fn_80474860
    lwz r3, 0x0(r3)
    lwzx r3, r3, r27
    lwz r0, 0x0(r3)
    cmplw r24, r0
    bne lbl_fn_8008BD10_000014A4
    mr r21, r25
    b lbl_fn_8008BD10_000014BC
lbl_fn_8008BD10_000014A4:
    addi r28, r28, 0x1
    addi r27, r27, 0x4
lbl_fn_8008BD10_000014AC:
    addi r3, r26, 0xfc
    bl fn_8047486C
    cmpw r28, r3
    blt lbl_fn_8008BD10_00001480
lbl_fn_8008BD10_000014BC:
    lwz r3, 0x108(r26)
    mr r4, r22
    mr r5, r21
    lwzx r3, r3, r23
    bl fn_800816B4
    addi r23, r23, 0x4
    addi r20, r20, 0x1
lbl_fn_8008BD10_000014D8:
    lwz r0, 0x104(r26)
    cmplw r20, r0
    blt lbl_fn_8008BD10_00001448
lbl_fn_8008BD10_000014E4:
    addi r11, r1, 0x560
    bl _restgpr_20
    lwz r0, 0x564(r1)
    mtlr r0
    addi r1, r1, 0x560
    blr
}

asm void fn_8008C62C(void)
{
    nofralloc
    stwu r1, -0x170(r1)
    mflr r0
    stw r0, 0x174(r1)
    mulli r0, r4, 0x18
    stmw r17, 0x134(r1)
    slwi r17, r4, 3
    mr r21, r3
    add r29, r3, r17
    lwz r4, 0x16c(r3)
    add r3, r3, r0
    addi r25, r3, 0x164
    lwz r3, 0x110(r29)
    lwz r5, 0x8(r25)
    cmpwi r3, 0x0
    lwz r19, 0x30(r4)
    lwz r24, 0x30(r5)
    beq lbl_fn_8008C62C_00001544
    bl fn_80084C24
lbl_fn_8008C62C_00001544:
    add r3, r21, r17
    cmpwi r19, 0x0
    stw r19, 0x10c(r3)
    beq lbl_fn_8008C62C_00001574
    slwi r3, r19, 2
    li r4, 0x6
    la r5, lbl_8087D6EC
    la r6, lbl_8087D6E8
    li r7, 0x0
    bl fn_800846FC
    stw r3, 0x110(r29)
    b lbl_fn_8008C62C_0000157C
lbl_fn_8008C62C_00001574:
    li r0, 0x0
    stw r0, 0x110(r29)
lbl_fn_8008C62C_0000157C:
    li r23, 0x0
    lis r31, lbl_80732368@ha
    mr r30, r23
    addi r26, r1, 0x11
    mr r19, r23
    addi r28, r1, 0x1c
    addi r31, r31, lbl_80732368@l
    li r20, 0x0
    li r27, 0x0
    b lbl_fn_8008C62C_000016DC
lbl_fn_8008C62C_000015A4:
    lwz r0, 0x8(r25)
    add r3, r0, r27
    lwz r22, 0x50(r3)
    mr r3, r22
    bl fn_800DC6B4
    lwz r0, 0x104(r21)
    li r6, -0x1
    li r7, 0x0
    li r5, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8008C62C_000015FC
lbl_fn_8008C62C_000015D4:
    lwz r4, 0x108(r21)
    lwzx r4, r4, r5
    lwz r0, 0x0(r4)
    cmplw r3, r0
    bne lbl_fn_8008C62C_000015F0
    mr r6, r7
    b lbl_fn_8008C62C_000015FC
lbl_fn_8008C62C_000015F0:
    addi r5, r5, 0x4
    addi r7, r7, 0x1
    bdnz lbl_fn_8008C62C_000015D4
lbl_fn_8008C62C_000015FC:
    cmpwi r6, 0x0
    bge lbl_fn_8008C62C_000016C8
    mr r3, r25
    bl fn_80473F18
    stw r30, 0x1c(r1)
    mr r18, r3
    stw r30, 0x20(r1)
    stw r30, 0x24(r1)
    bl strlen
    mr r17, r3
    mr r3, r28
    mr r4, r17
    bl fn_80013DC4
    lbz r0, 0xc(r1)
    mr r3, r28
    stb r0, 0x8(r1)
    mr r6, r18
    add r7, r18, r17
    addi r8, r1, 0x8
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    mr r4, r28
    addi r3, r1, 0x10
    bl fn_8006B174
    lwz r0, 0x10(r1)
    addi r3, r1, 0x28
    addi r4, r31, 0x138
    srwi. r0, r0, 31
    bne lbl_fn_8008C62C_0000167C
    mr r5, r26
    b lbl_fn_8008C62C_00001680
lbl_fn_8008C62C_0000167C:
    lwz r5, 0x18(r1)
lbl_fn_8008C62C_00001680:
    mr r6, r22
    crclr 6
    bl sprintf
    lwz r0, 0x10(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8008C62C_000016A0
    lwz r3, 0x18(r1)
    bl dtor_80084684
lbl_fn_8008C62C_000016A0:
    lwz r0, 0x1c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8008C62C_000016B4
    lwz r3, 0x24(r1)
    bl dtor_80084684
lbl_fn_8008C62C_000016B4:
    stb r19, 0x127(r1)
    addi r4, r1, 0x28
    lwz r3, lbl_8087EEB8
    bl fn_800697D8
    li r6, -0x4
lbl_fn_8008C62C_000016C8:
    lwz r3, 0x110(r29)
    addi r27, r27, 0x4
    addi r23, r23, 0x1
    stwx r6, r3, r20
    addi r20, r20, 0x4
lbl_fn_8008C62C_000016DC:
    cmpw r23, r24
    blt lbl_fn_8008C62C_000015A4
    lmw r17, 0x134(r1)
    lwz r0, 0x174(r1)
    mtlr r0
    addi r1, r1, 0x170
    blr
}
