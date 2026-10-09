#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void fn_80044E0C(void);
extern void fn_80084320(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_801059F8(void);
extern void fn_80105B3C(void);
extern void fn_80107850(void);
extern void fn_80107908(void);
extern void fn_801079B0(void);
extern void fn_80107B20(void);
extern void fn_80107E68(void);
extern void fn_80107F10(void);
extern void fn_8011BEB8(void);
extern void fn_8013322C(void);
extern void fn_8014C228(void);
extern void fn_8014DEE4(void);
extern void fn_8016E970(void);
extern void fn_8018FEBC(void);
extern void fn_8018FF6C(void);
extern void fn_801908F0(void);
extern void fn_80190E80(void);
extern void fn_80191170(void);
extern void fn_80370174(void);
extern void fn_80695AD0(void);

/* External data declarations */
extern u8 lbl_80737A9C[];
extern u8 lbl_80766768[];
extern u8 lbl_8077A720[];

/* Small data declarations */
extern u32 lbl_8087EFA8;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F430;
extern u32 lbl_80881964;
extern u32 lbl_8088196C;

/* Function declarations */
void fn_80166A54(void);
void fn_80166D3C(void);
void fn_80167038(void);
void fn_80167344(void);
void fn_80167640(void);
void fn_8016794C(void);
void fn_80167C34(void);
void fn_80167F1C(void);
void fn_80168048(void);
void fn_80168170(void);
void fn_80168190(void);
void fn_801681B0(void);

asm void fn_80166A54(void)
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
    li r3, 0x8
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_80166A54_0000005C
    mr r4, r29
    bl fn_8018FEBC
    mr r30, r3
lbl_fn_80166A54_0000005C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80166A54_000000EC
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80166A54_00000094
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_80166A54_000000B0
lbl_fn_80166A54_00000094:
    addi r3, r31, 0x1494
    lwz r5, 0x1494(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
lbl_fn_80166A54_000000B0:
    lwz r5, 0x2c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80166A54_000000EC
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80166A54_000000EC:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_80166A54_000002A0
    cmpwi r0, 0x8
    beq lbl_fn_80166A54_00000104
    stw r0, 0x564(r29)
lbl_fn_80166A54_00000104:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80166A54_000002A0
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80166A54_0000013C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x38(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
    b lbl_fn_80166A54_00000158
lbl_fn_80166A54_0000013C:
    addi r3, r31, 0x14a0
    lwz r5, 0x14a0(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
lbl_fn_80166A54_00000158:
    lwz r5, 0x38(r1)
    addi r3, r1, 0x20
    lwz r4, 0x3c(r1)
    lwz r0, 0x40(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80166A54_00000194
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80166A54_00000194:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_80166A54_00000270
    cmpwi r0, 0x8
    beq lbl_fn_80166A54_000001AC
    stw r0, 0x564(r29)
lbl_fn_80166A54_000001AC:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80166A54_00000270
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80166A54_000001E4
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x44(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    b lbl_fn_80166A54_00000200
lbl_fn_80166A54_000001E4:
    addi r3, r31, 0x14ac
    lwz r5, 0x14ac(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
lbl_fn_80166A54_00000200:
    lwz r5, 0x44(r1)
    addi r3, r1, 0x14
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80166A54_0000023C
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80166A54_0000023C:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_80166A54_00000270
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80166A54_00000270:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_80166A54_000002A0
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80166A54_000002A0:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_80166A54_000002CC
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80166A54_000002CC:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80166D3C(void)
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
    li r3, 0x10
    stw r28, 0x50(r1)
    mr r28, r4
    li r4, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_80166D3C_00000354
    mr r4, r29
    mr r5, r28
    li r6, 0x0
    bl fn_8018FF6C
    mr r30, r3
lbl_fn_80166D3C_00000354:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80166D3C_000003E4
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80166D3C_0000038C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_80166D3C_000003A8
lbl_fn_80166D3C_0000038C:
    addi r3, r31, 0x14b8
    lwz r5, 0x14b8(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
lbl_fn_80166D3C_000003A8:
    lwz r5, 0x2c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80166D3C_000003E4
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80166D3C_000003E4:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_80166D3C_00000598
    cmpwi r0, 0x8
    beq lbl_fn_80166D3C_000003FC
    stw r0, 0x564(r29)
lbl_fn_80166D3C_000003FC:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80166D3C_00000598
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80166D3C_00000434
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x38(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
    b lbl_fn_80166D3C_00000450
lbl_fn_80166D3C_00000434:
    addi r3, r31, 0x14c4
    lwz r5, 0x14c4(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
lbl_fn_80166D3C_00000450:
    lwz r5, 0x38(r1)
    addi r3, r1, 0x20
    lwz r4, 0x3c(r1)
    lwz r0, 0x40(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80166D3C_0000048C
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80166D3C_0000048C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_80166D3C_00000568
    cmpwi r0, 0x8
    beq lbl_fn_80166D3C_000004A4
    stw r0, 0x564(r29)
lbl_fn_80166D3C_000004A4:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80166D3C_00000568
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80166D3C_000004DC
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x44(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    b lbl_fn_80166D3C_000004F8
lbl_fn_80166D3C_000004DC:
    addi r3, r31, 0x14d0
    lwz r5, 0x14d0(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
lbl_fn_80166D3C_000004F8:
    lwz r5, 0x44(r1)
    addi r3, r1, 0x14
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80166D3C_00000534
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80166D3C_00000534:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_80166D3C_00000568
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80166D3C_00000568:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_80166D3C_00000598
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80166D3C_00000598:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_80166D3C_000005C4
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80166D3C_000005C4:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    lwz r28, 0x50(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80167038(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x100
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    addi r3, r3, 0x7d4
    bl fn_8013322C
    lwz r3, lbl_8087F048
    addi r4, r31, 0xb0
    bl fn_80107850
    lwz r0, 0x48(r31)
    cmpwi r0, 0x2
    beq lbl_fn_80167038_00000630
    lwz r3, 0xf14(r31)
    li r0, 0x0
    stw r3, 0xf18(r31)
    stw r0, 0xf14(r31)
    b lbl_fn_80167038_00000640
lbl_fn_80167038_00000630:
    lwz r3, 0xf14(r31)
    li r0, 0x1
    stw r3, 0xf18(r31)
    stw r0, 0xf14(r31)
lbl_fn_80167038_00000640:
    addi r3, r31, 0xc58
    li r4, 0x0
    bl fn_8011BEB8
    lwz r0, 0x12a4(r31)
    srwi. r0, r0, 31
    beq lbl_fn_80167038_00000794
    lwz r0, 0x12a4(r31)
    clrlwi r0, r0, 2
    stw r0, 0x12a4(r31)
    lwz r3, lbl_8087F430
    lwz r4, 0x10d8(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80167038_000006BC
    lwz r3, 0xc38(r31)
    cmpwi r3, 0x0
    ble lbl_fn_80167038_000006BC
    lwz r0, 0xc3c(r31)
    cmpwi r0, 0x0
    ble lbl_fn_80167038_000006BC
    subi r0, r3, 0x1
    lwz r3, 0xb0(r4)
    slwi r0, r0, 6
    li r5, 0x0
    add r3, r3, r0
    stw r5, 0x3c(r3)
    lwz r3, 0xc3c(r31)
    lwz r4, 0xb0(r4)
    subi r0, r3, 0x1
    slwi r0, r0, 6
    add r3, r4, r0
    stw r5, 0x3c(r3)
lbl_fn_80167038_000006BC:
    lwz r4, 0x48(r31)
    cmpwi r4, 0x0
    bne lbl_fn_80167038_000006F0
    lwz r3, lbl_8087F0A8
    lwz r0, 0x278(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80167038_000006F0
    lwz r3, 0x5c(r31)
    lwz r0, 0x11c(r3)
    cmpwi r0, 0x1
    bne lbl_fn_80167038_000006F0
    li r0, 0x1
    b lbl_fn_80167038_00000710
lbl_fn_80167038_000006F0:
    cmpwi r4, 0x0
    bne lbl_fn_80167038_0000070C
    lwz r0, 0x12a8(r31)
    extrwi. r0, r0, 1, 14
    beq lbl_fn_80167038_0000070C
    li r0, 0x1
    b lbl_fn_80167038_00000710
lbl_fn_80167038_0000070C:
    li r0, 0x0
lbl_fn_80167038_00000710:
    cmpwi r0, 0x0
    beq lbl_fn_80167038_00000794
    lwz r3, lbl_8087F430
    li r4, 0x25
    bl fn_80370174
    cmpwi r3, 0x1
    blt lbl_fn_80167038_00000774
    lwz r3, 0x648(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80167038_00000740
    li r4, 0x1
    bl fn_80044E0C
lbl_fn_80167038_00000740:
    lwz r3, 0x64c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80167038_00000754
    li r4, 0x1
    bl fn_80044E0C
lbl_fn_80167038_00000754:
    li r0, 0x0
    li r3, -0x1
    stw r3, 0x674(r31)
    mr r3, r31
    stw r0, 0x648(r31)
    stw r0, 0x64c(r31)
    bl fn_8014C228
    b lbl_fn_80167038_00000794
lbl_fn_80167038_00000774:
    lwz r0, 0x674(r31)
    cmpwi r0, 0x0
    blt lbl_fn_80167038_00000794
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8014DEE4
lbl_fn_80167038_00000794:
    lwz r0, 0x12a4(r31)
    extrwi. r0, r0, 1, 26
    beq lbl_fn_80167038_000007AC
    lwz r0, 0x12a4(r31)
    rlwinm r0, r0, 0, 27, 25
    stw r0, 0x12a4(r31)
lbl_fn_80167038_000007AC:
    lwz r7, 0xd1c(r31)
    cmpwi r7, 0x0
    beq lbl_fn_80167038_00000854
    lwz r0, 0x12a8(r7)
    mr r5, r7
    lwz r6, 0x1028(r7)
    li r4, 0x0
    extrwi r0, r0, 1, 15
    cntlzw r0, r0
    srwi r3, r0, 5
    b lbl_fn_80167038_000007F4
lbl_fn_80167038_000007D8:
    lwz r0, 0xfe8(r5)
    cmplw r0, r31
    bne lbl_fn_80167038_000007EC
    li r0, 0x1
    b lbl_fn_80167038_00000810
lbl_fn_80167038_000007EC:
    addi r5, r5, 0x4
    addi r4, r4, 0x1
lbl_fn_80167038_000007F4:
    cmpwi r3, 0x0
    mr r0, r6
    bne lbl_fn_80167038_00000804
    slwi r0, r6, 1
lbl_fn_80167038_00000804:
    cmpw r4, r0
    blt lbl_fn_80167038_000007D8
    li r0, 0x0
lbl_fn_80167038_00000810:
    cmpwi r0, 0x0
    beq lbl_fn_80167038_00000854
    li r0, 0x10
    mr r4, r7
    li r3, 0x0
    mtctr r0
lbl_fn_80167038_00000828:
    lwz r0, 0xfe8(r4)
    cmplw r0, r31
    bne lbl_fn_80167038_00000848
    slwi r0, r3, 2
    li r4, 0x0
    add r3, r7, r0
    stw r4, 0xfe8(r3)
    b lbl_fn_80167038_00000854
lbl_fn_80167038_00000848:
    addi r4, r4, 0x4
    addi r3, r3, 0x1
    bdnz lbl_fn_80167038_00000828
lbl_fn_80167038_00000854:
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_80167038_00000874
    mr r4, r31
    bl fn_801059F8
    lwz r3, lbl_8087F048
    mr r4, r31
    bl fn_80105B3C
lbl_fn_80167038_00000874:
    lwz r0, 0x48(r31)
    li r4, 0x0
    lwz r3, 0x12a8(r31)
    lfs f0, lbl_8088196C
    cmpwi r0, 0x0
    rlwinm r3, r3, 0, 24, 22
    stw r3, 0x12a8(r31)
    stfs f0, 0xfb8(r31)
    stfs f0, 0xfbc(r31)
    stw r4, 0xd1c(r31)
    bne lbl_fn_80167038_000008AC
    li r0, 0x1
    stw r0, 0x55c(r31)
    stw r0, 0x564(r31)
lbl_fn_80167038_000008AC:
    lis r4, lbl_80737A9C@ha
    lfs f1, lbl_80881964
    addi r4, r4, lbl_80737A9C@l
    addi r3, r1, 0x8
    addi r4, r4, 0x4f4
    addi r5, r31, 0x528
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80167344(void)
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
    li r3, 0x10
    stw r28, 0x50(r1)
    mr r28, r4
    li r4, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_80167344_0000095C
    mr r4, r29
    mr r5, r28
    li r6, 0x1
    bl fn_8018FF6C
    mr r30, r3
lbl_fn_80167344_0000095C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80167344_000009EC
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80167344_00000994
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_80167344_000009B0
lbl_fn_80167344_00000994:
    addi r3, r31, 0x14dc
    lwz r5, 0x14dc(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
lbl_fn_80167344_000009B0:
    lwz r5, 0x2c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80167344_000009EC
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80167344_000009EC:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_80167344_00000BA0
    cmpwi r0, 0x8
    beq lbl_fn_80167344_00000A04
    stw r0, 0x564(r29)
lbl_fn_80167344_00000A04:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80167344_00000BA0
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80167344_00000A3C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x38(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
    b lbl_fn_80167344_00000A58
lbl_fn_80167344_00000A3C:
    addi r3, r31, 0x14e8
    lwz r5, 0x14e8(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
lbl_fn_80167344_00000A58:
    lwz r5, 0x38(r1)
    addi r3, r1, 0x20
    lwz r4, 0x3c(r1)
    lwz r0, 0x40(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80167344_00000A94
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80167344_00000A94:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_80167344_00000B70
    cmpwi r0, 0x8
    beq lbl_fn_80167344_00000AAC
    stw r0, 0x564(r29)
lbl_fn_80167344_00000AAC:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80167344_00000B70
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80167344_00000AE4
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x44(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    b lbl_fn_80167344_00000B00
lbl_fn_80167344_00000AE4:
    addi r3, r31, 0x14f4
    lwz r5, 0x14f4(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
lbl_fn_80167344_00000B00:
    lwz r5, 0x44(r1)
    addi r3, r1, 0x14
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80167344_00000B3C
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80167344_00000B3C:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_80167344_00000B70
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80167344_00000B70:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_80167344_00000BA0
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80167344_00000BA0:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_80167344_00000BCC
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80167344_00000BCC:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    lwz r28, 0x50(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80167640(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, 0x1
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    addi r3, r3, 0x7d4
    bl fn_8013322C
    lwz r3, lbl_8087F048
    addi r4, r31, 0xb0
    bl fn_80107B20
    lwz r0, 0x48(r31)
    cmpwi r0, 0x2
    beq lbl_fn_80167640_00000C38
    lwz r3, 0xf14(r31)
    li r0, 0x0
    stw r3, 0xf18(r31)
    stw r0, 0xf14(r31)
    b lbl_fn_80167640_00000C48
lbl_fn_80167640_00000C38:
    lwz r3, 0xf14(r31)
    li r0, 0x1
    stw r3, 0xf18(r31)
    stw r0, 0xf14(r31)
lbl_fn_80167640_00000C48:
    addi r3, r31, 0xc58
    li r4, 0x0
    bl fn_8011BEB8
    lwz r0, 0x12a4(r31)
    srwi. r0, r0, 31
    beq lbl_fn_80167640_00000D9C
    lwz r0, 0x12a4(r31)
    clrlwi r0, r0, 2
    stw r0, 0x12a4(r31)
    lwz r3, lbl_8087F430
    lwz r4, 0x10d8(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80167640_00000CC4
    lwz r3, 0xc38(r31)
    cmpwi r3, 0x0
    ble lbl_fn_80167640_00000CC4
    lwz r0, 0xc3c(r31)
    cmpwi r0, 0x0
    ble lbl_fn_80167640_00000CC4
    subi r0, r3, 0x1
    lwz r3, 0xb0(r4)
    slwi r0, r0, 6
    li r5, 0x0
    add r3, r3, r0
    stw r5, 0x3c(r3)
    lwz r3, 0xc3c(r31)
    lwz r4, 0xb0(r4)
    subi r0, r3, 0x1
    slwi r0, r0, 6
    add r3, r4, r0
    stw r5, 0x3c(r3)
lbl_fn_80167640_00000CC4:
    lwz r4, 0x48(r31)
    cmpwi r4, 0x0
    bne lbl_fn_80167640_00000CF8
    lwz r3, lbl_8087F0A8
    lwz r0, 0x278(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80167640_00000CF8
    lwz r3, 0x5c(r31)
    lwz r0, 0x11c(r3)
    cmpwi r0, 0x1
    bne lbl_fn_80167640_00000CF8
    li r0, 0x1
    b lbl_fn_80167640_00000D18
lbl_fn_80167640_00000CF8:
    cmpwi r4, 0x0
    bne lbl_fn_80167640_00000D14
    lwz r0, 0x12a8(r31)
    extrwi. r0, r0, 1, 14
    beq lbl_fn_80167640_00000D14
    li r0, 0x1
    b lbl_fn_80167640_00000D18
lbl_fn_80167640_00000D14:
    li r0, 0x0
lbl_fn_80167640_00000D18:
    cmpwi r0, 0x0
    beq lbl_fn_80167640_00000D9C
    lwz r3, lbl_8087F430
    li r4, 0x25
    bl fn_80370174
    cmpwi r3, 0x1
    blt lbl_fn_80167640_00000D7C
    lwz r3, 0x648(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80167640_00000D48
    li r4, 0x1
    bl fn_80044E0C
lbl_fn_80167640_00000D48:
    lwz r3, 0x64c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80167640_00000D5C
    li r4, 0x1
    bl fn_80044E0C
lbl_fn_80167640_00000D5C:
    li r0, 0x0
    li r3, -0x1
    stw r3, 0x674(r31)
    mr r3, r31
    stw r0, 0x648(r31)
    stw r0, 0x64c(r31)
    bl fn_8014C228
    b lbl_fn_80167640_00000D9C
lbl_fn_80167640_00000D7C:
    lwz r0, 0x674(r31)
    cmpwi r0, 0x0
    blt lbl_fn_80167640_00000D9C
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8014DEE4
lbl_fn_80167640_00000D9C:
    lwz r0, 0x12a4(r31)
    extrwi. r0, r0, 1, 26
    beq lbl_fn_80167640_00000DB4
    lwz r0, 0x12a4(r31)
    rlwinm r0, r0, 0, 27, 25
    stw r0, 0x12a4(r31)
lbl_fn_80167640_00000DB4:
    lwz r7, 0xd1c(r31)
    cmpwi r7, 0x0
    beq lbl_fn_80167640_00000E5C
    lwz r0, 0x12a8(r7)
    mr r5, r7
    lwz r6, 0x1028(r7)
    li r4, 0x0
    extrwi r0, r0, 1, 15
    cntlzw r0, r0
    srwi r3, r0, 5
    b lbl_fn_80167640_00000DFC
lbl_fn_80167640_00000DE0:
    lwz r0, 0xfe8(r5)
    cmplw r0, r31
    bne lbl_fn_80167640_00000DF4
    li r0, 0x1
    b lbl_fn_80167640_00000E18
lbl_fn_80167640_00000DF4:
    addi r5, r5, 0x4
    addi r4, r4, 0x1
lbl_fn_80167640_00000DFC:
    cmpwi r3, 0x0
    mr r0, r6
    bne lbl_fn_80167640_00000E0C
    slwi r0, r6, 1
lbl_fn_80167640_00000E0C:
    cmpw r4, r0
    blt lbl_fn_80167640_00000DE0
    li r0, 0x0
lbl_fn_80167640_00000E18:
    cmpwi r0, 0x0
    beq lbl_fn_80167640_00000E5C
    li r0, 0x10
    mr r4, r7
    li r3, 0x0
    mtctr r0
lbl_fn_80167640_00000E30:
    lwz r0, 0xfe8(r4)
    cmplw r0, r31
    bne lbl_fn_80167640_00000E50
    slwi r0, r3, 2
    li r4, 0x0
    add r3, r7, r0
    stw r4, 0xfe8(r3)
    b lbl_fn_80167640_00000E5C
lbl_fn_80167640_00000E50:
    addi r4, r4, 0x4
    addi r3, r3, 0x1
    bdnz lbl_fn_80167640_00000E30
lbl_fn_80167640_00000E5C:
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_80167640_00000E7C
    mr r4, r31
    bl fn_801059F8
    lwz r3, lbl_8087F048
    mr r4, r31
    bl fn_80105B3C
lbl_fn_80167640_00000E7C:
    lwz r0, 0x48(r31)
    li r4, 0x0
    lwz r3, 0x12a8(r31)
    lfs f0, lbl_8088196C
    cmpwi r0, 0x0
    rlwinm r3, r3, 0, 24, 22
    stw r3, 0x12a8(r31)
    stfs f0, 0xfb8(r31)
    stfs f0, 0xfbc(r31)
    stw r4, 0xd1c(r31)
    bne lbl_fn_80167640_00000EB4
    li r0, 0x1
    stw r0, 0x55c(r31)
    stw r0, 0x564(r31)
lbl_fn_80167640_00000EB4:
    lis r4, lbl_80737A9C@ha
    lfs f1, lbl_80881964
    addi r4, r4, lbl_80737A9C@l
    addi r3, r1, 0x8
    addi r4, r4, 0x4f4
    addi r5, r31, 0x528
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8016794C(void)
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
    li r3, 0x10
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_8016794C_00000F54
    mr r4, r29
    bl fn_801908F0
    mr r30, r3
lbl_fn_8016794C_00000F54:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8016794C_00000FE4
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8016794C_00000F8C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_8016794C_00000FA8
lbl_fn_8016794C_00000F8C:
    addi r3, r31, 0x1500
    lwz r5, 0x1500(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
lbl_fn_8016794C_00000FA8:
    lwz r5, 0x2c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8016794C_00000FE4
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8016794C_00000FE4:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_8016794C_00001198
    cmpwi r0, 0x8
    beq lbl_fn_8016794C_00000FFC
    stw r0, 0x564(r29)
lbl_fn_8016794C_00000FFC:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8016794C_00001198
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8016794C_00001034
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x38(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
    b lbl_fn_8016794C_00001050
lbl_fn_8016794C_00001034:
    addi r3, r31, 0x150c
    lwz r5, 0x150c(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
lbl_fn_8016794C_00001050:
    lwz r5, 0x38(r1)
    addi r3, r1, 0x20
    lwz r4, 0x3c(r1)
    lwz r0, 0x40(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8016794C_0000108C
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8016794C_0000108C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_8016794C_00001168
    cmpwi r0, 0x8
    beq lbl_fn_8016794C_000010A4
    stw r0, 0x564(r29)
lbl_fn_8016794C_000010A4:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8016794C_00001168
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8016794C_000010DC
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x44(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    b lbl_fn_8016794C_000010F8
lbl_fn_8016794C_000010DC:
    addi r3, r31, 0x1518
    lwz r5, 0x1518(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
lbl_fn_8016794C_000010F8:
    lwz r5, 0x44(r1)
    addi r3, r1, 0x14
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8016794C_00001134
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8016794C_00001134:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_8016794C_00001168
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8016794C_00001168:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_8016794C_00001198
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8016794C_00001198:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_8016794C_000011C4
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8016794C_000011C4:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80167C34(void)
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
    li r3, 0x8
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_80167C34_0000123C
    mr r4, r29
    bl fn_80190E80
    mr r30, r3
lbl_fn_80167C34_0000123C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80167C34_000012CC
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80167C34_00001274
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_80167C34_00001290
lbl_fn_80167C34_00001274:
    addi r3, r31, 0x1524
    lwz r5, 0x1524(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
lbl_fn_80167C34_00001290:
    lwz r5, 0x2c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80167C34_000012CC
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80167C34_000012CC:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_80167C34_00001480
    cmpwi r0, 0x8
    beq lbl_fn_80167C34_000012E4
    stw r0, 0x564(r29)
lbl_fn_80167C34_000012E4:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80167C34_00001480
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80167C34_0000131C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x38(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
    b lbl_fn_80167C34_00001338
lbl_fn_80167C34_0000131C:
    addi r3, r31, 0x1530
    lwz r5, 0x1530(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
lbl_fn_80167C34_00001338:
    lwz r5, 0x38(r1)
    addi r3, r1, 0x20
    lwz r4, 0x3c(r1)
    lwz r0, 0x40(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80167C34_00001374
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80167C34_00001374:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_80167C34_00001450
    cmpwi r0, 0x8
    beq lbl_fn_80167C34_0000138C
    stw r0, 0x564(r29)
lbl_fn_80167C34_0000138C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80167C34_00001450
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80167C34_000013C4
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x44(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    b lbl_fn_80167C34_000013E0
lbl_fn_80167C34_000013C4:
    addi r3, r31, 0x153c
    lwz r5, 0x153c(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
lbl_fn_80167C34_000013E0:
    lwz r5, 0x44(r1)
    addi r3, r1, 0x14
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80167C34_0000141C
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80167C34_0000141C:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_80167C34_00001450
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80167C34_00001450:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_80167C34_00001480
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80167C34_00001480:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_80167C34_000014AC
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80167C34_000014AC:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80167F1C(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    mr r31, r3
    lwz r0, lbl_8087F048
    cmpwi r0, 0x0
    beq lbl_fn_80167F1C_000014F8
    addi r4, r31, 0xb0
    mr r3, r0
    mr r5, r4
    bl fn_80107908
lbl_fn_80167F1C_000014F8:
    lwz r0, 0x48(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80167F1C_000015E0
    lwz r3, 0x12a4(r31)
    li r4, 0x1
    lfs f0, lbl_8088196C
    addi r8, r1, 0xc
    oris r3, r3, 0x10
    stw r3, 0x12a4(r31)
    addi r7, r1, 0x1c
    addi r6, r1, 0x2c
    lwz r9, lbl_8087EFA8
    addi r5, r1, 0x3c
    stw r4, 0x8(r1)
    psq_l f1, 0x328(r9), 0, 0
    psq_l f2, 0x330(r9), 0, 0
    psq_st f1, 0x0(r8), 0, 0
    psq_l f1, 0x338(r9), 0, 0
    psq_st f2, 0x8(r8), 0, 0
    psq_l f2, 0x340(r9), 0, 0
    lwz r0, 0x324(r9)
    psq_st f1, 0x0(r7), 0, 0
    psq_l f1, 0x348(r9), 0, 0
    rlwimi r3, r0, 19, 12, 12
    psq_st f2, 0x8(r7), 0, 0
    psq_l f2, 0x350(r9), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    psq_l f1, 0x358(r9), 0, 0
    psq_st f2, 0x8(r6), 0, 0
    psq_l f2, 0x360(r9), 0, 0
    lwz r0, 0x368(r9)
    psq_st f1, 0x0(r5), 0, 0
    psq_l f1, 0x0(r8), 0, 0
    stw r3, 0x12a4(r31)
    lwz r3, lbl_8087EFA8
    psq_st f2, 0x8(r5), 0, 0
    psq_l f2, 0x8(r8), 0, 0
    stw r4, 0x324(r3)
    psq_st f1, 0x328(r3), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    psq_st f2, 0x330(r3), 0, 0
    psq_l f2, 0x8(r7), 0, 0
    psq_st f1, 0x338(r3), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    psq_st f2, 0x340(r3), 0, 0
    psq_l f2, 0x8(r6), 0, 0
    psq_st f1, 0x348(r3), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    psq_st f2, 0x350(r3), 0, 0
    psq_l f2, 0x8(r5), 0, 0
    psq_st f1, 0x358(r3), 0, 0
    psq_st f2, 0x360(r3), 0, 0
    stw r0, 0x368(r3)
    stw r4, 0x36c(r3)
    stw r0, 0x4c(r1)
    stw r4, 0x50(r1)
    stfs f0, 0x54(r1)
    stfs f0, 0x370(r3)
lbl_fn_80167F1C_000015E0:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80168048(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    mr r31, r3
    lwz r0, lbl_8087F048
    cmpwi r0, 0x0
    beq lbl_fn_80168048_00001620
    mr r3, r0
    addi r4, r31, 0xb0
    bl fn_801079B0
lbl_fn_80168048_00001620:
    lwz r3, 0x12a4(r31)
    extrwi. r0, r3, 1, 11
    beq lbl_fn_80168048_00001708
    lwz r0, 0x48(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80168048_00001708
    rlwinm r0, r3, 0, 12, 10
    stw r0, 0x12a4(r31)
    extrwi r0, r3, 1, 12
    li r4, 0x0
    lwz r10, lbl_8087EFA8
    addi r9, r1, 0xc
    lfs f0, lbl_8088196C
    addi r8, r1, 0x1c
    psq_l f1, 0x328(r10), 0, 0
    addi r7, r1, 0x2c
    psq_l f2, 0x330(r10), 0, 0
    addi r5, r10, 0x358
    psq_st f1, 0x0(r9), 0, 0
    addi r6, r1, 0x3c
    psq_l f1, 0x338(r10), 0, 0
    psq_st f2, 0x8(r9), 0, 0
    psq_l f2, 0x340(r10), 0, 0
    psq_st f1, 0x0(r8), 0, 0
    psq_l f1, 0x348(r10), 0, 0
    psq_st f2, 0x8(r8), 0, 0
    psq_l f2, 0x350(r10), 0, 0
    psq_st f1, 0x0(r7), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    psq_st f2, 0x8(r7), 0, 0
    psq_l f2, 0x8(r5), 0, 0
    lwz r3, 0x368(r10)
    psq_st f1, 0x0(r6), 0, 0
    psq_l f1, 0x0(r9), 0, 0
    stw r0, 0x324(r10)
    psq_st f1, 0x328(r10), 0, 0
    psq_l f1, 0x0(r8), 0, 0
    psq_st f2, 0x8(r6), 0, 0
    psq_l f2, 0x8(r9), 0, 0
    psq_st f2, 0x330(r10), 0, 0
    psq_l f2, 0x8(r8), 0, 0
    psq_st f1, 0x338(r10), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    psq_st f2, 0x340(r10), 0, 0
    psq_l f2, 0x8(r7), 0, 0
    psq_st f1, 0x348(r10), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    psq_st f2, 0x350(r10), 0, 0
    psq_l f2, 0x8(r6), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    psq_st f2, 0x8(r5), 0, 0
    stw r3, 0x368(r10)
    stw r4, 0x36c(r10)
    stw r3, 0x4c(r1)
    stw r0, 0x8(r1)
    stw r4, 0x50(r1)
    stfs f0, 0x54(r1)
    stfs f0, 0x370(r10)
lbl_fn_80168048_00001708:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80168170(void)
{
    nofralloc
    lwz r0, lbl_8087F048
    cmpwi r0, 0x0
    beqlr
    addi r4, r3, 0xb0
    mr r3, r0
    mr r5, r4
    b fn_80107E68
    blr
}

asm void fn_80168190(void)
{
    nofralloc
    lwz r0, lbl_8087F048
    mr r4, r3
    cmpwi r0, 0x0
    beqlr
    mr r3, r0
    addi r4, r4, 0xb0
    b fn_80107F10
    blr
}

asm void fn_801681B0(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    lis r7, lbl_80737A9C@ha
    stw r0, 0x74(r1)
    addi r7, r7, lbl_80737A9C@l
    stmw r26, 0x58(r1)
    lis r31, lbl_8077A720@ha
    mr r27, r5
    addi r5, r7, 0x24
    mr r29, r3
    mr r26, r4
    mr r28, r6
    mr r6, r5
    addi r31, r31, lbl_8077A720@l
    li r3, 0x2c
    li r4, 0x0
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_801681B0_000017C8
    mr r4, r29
    mr r5, r26
    mr r6, r27
    mr r7, r28
    bl fn_80191170
    mr r30, r3
lbl_fn_801681B0_000017C8:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_801681B0_00001858
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_801681B0_00001800
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_801681B0_0000181C
lbl_fn_801681B0_00001800:
    addi r3, r31, 0x1548
    lwz r5, 0x1548(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
lbl_fn_801681B0_0000181C:
    lwz r5, 0x2c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801681B0_00001858
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801681B0_00001858:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_801681B0_00001A0C
    cmpwi r0, 0x8
    beq lbl_fn_801681B0_00001870
    stw r0, 0x564(r29)
lbl_fn_801681B0_00001870:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_801681B0_00001A0C
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_801681B0_000018A8
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x38(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
    b lbl_fn_801681B0_000018C4
lbl_fn_801681B0_000018A8:
    addi r3, r31, 0x1554
    lwz r5, 0x1554(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
lbl_fn_801681B0_000018C4:
    lwz r5, 0x38(r1)
    addi r3, r1, 0x20
    lwz r4, 0x3c(r1)
    lwz r0, 0x40(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801681B0_00001900
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801681B0_00001900:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_801681B0_000019DC
    cmpwi r0, 0x8
    beq lbl_fn_801681B0_00001918
    stw r0, 0x564(r29)
lbl_fn_801681B0_00001918:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_801681B0_000019DC
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_801681B0_00001950
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x44(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    b lbl_fn_801681B0_0000196C
lbl_fn_801681B0_00001950:
    addi r3, r31, 0x1560
    lwz r5, 0x1560(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
lbl_fn_801681B0_0000196C:
    lwz r5, 0x44(r1)
    addi r3, r1, 0x14
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801681B0_000019A8
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801681B0_000019A8:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_801681B0_000019DC
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_801681B0_000019DC:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_801681B0_00001A0C
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_801681B0_00001A0C:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_801681B0_00001A38
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_801681B0_00001A38:
    lmw r26, 0x58(r1)
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}
