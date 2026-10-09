#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void fn_80044E0C(void);
extern void fn_80084320(void);
extern void fn_801059F8(void);
extern void fn_80105B3C(void);
extern void fn_8011BEB8(void);
extern void fn_8014C228(void);
extern void fn_8014DEE4(void);
extern void fn_80164DCC(void);
extern void fn_8016E970(void);
extern void fn_801A2290(void);
extern void fn_801A2A48(void);
extern void fn_801A77BC(void);
extern void fn_801A880C(void);
extern void fn_801A90BC(void);
extern void fn_801A9A94(void);
extern void fn_801AD34C(void);
extern void fn_80370174(void);
extern void fn_803750E4(void);
extern void fn_80695AD0(void);

/* External data declarations */
extern u8 lbl_80737A9C[];
extern u8 lbl_80766768[];
extern u8 lbl_8077A720[];

/* Small data declarations */
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F430;
extern u32 lbl_8088196C;

/* Function declarations */
void fn_801595BC(void);
void fn_801598B4(void);
void fn_80159BA4(void);
void fn_80159E9C(void);
void fn_8015A184(void);
void fn_8015A46C(void);
void fn_8015AC48(void);

asm void fn_801595BC(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    lis r8, lbl_80737A9C@ha
    stw r0, 0x74(r1)
    addi r8, r8, lbl_80737A9C@l
    stmw r25, 0x54(r1)
    lis r31, lbl_8077A720@ha
    mr r26, r5
    mr r29, r3
    mr r25, r4
    mr r28, r7
    addi r5, r8, 0x24
    mr r27, r6
    mr r6, r5
    addi r31, r31, lbl_8077A720@l
    li r3, 0x1c
    li r4, 0x0
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_801595BC_00000074
    mr r4, r29
    mr r5, r25
    mr r6, r26
    mr r7, r27
    mr r8, r28
    bl fn_801A2290
    mr r30, r3
lbl_fn_801595BC_00000074:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_801595BC_00000104
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_801595BC_000000AC
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_801595BC_000000C8
lbl_fn_801595BC_000000AC:
    addi r3, r31, 0xb64
    lwz r5, 0xb64(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
lbl_fn_801595BC_000000C8:
    lwz r5, 0x2c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801595BC_00000104
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801595BC_00000104:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_801595BC_000002B8
    cmpwi r0, 0x8
    beq lbl_fn_801595BC_0000011C
    stw r0, 0x564(r29)
lbl_fn_801595BC_0000011C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_801595BC_000002B8
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_801595BC_00000154
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x38(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
    b lbl_fn_801595BC_00000170
lbl_fn_801595BC_00000154:
    addi r3, r31, 0xb70
    lwz r5, 0xb70(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
lbl_fn_801595BC_00000170:
    lwz r5, 0x38(r1)
    addi r3, r1, 0x20
    lwz r4, 0x3c(r1)
    lwz r0, 0x40(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801595BC_000001AC
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801595BC_000001AC:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_801595BC_00000288
    cmpwi r0, 0x8
    beq lbl_fn_801595BC_000001C4
    stw r0, 0x564(r29)
lbl_fn_801595BC_000001C4:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_801595BC_00000288
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_801595BC_000001FC
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x44(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    b lbl_fn_801595BC_00000218
lbl_fn_801595BC_000001FC:
    addi r3, r31, 0xb7c
    lwz r5, 0xb7c(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
lbl_fn_801595BC_00000218:
    lwz r5, 0x44(r1)
    addi r3, r1, 0x14
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801595BC_00000254
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801595BC_00000254:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_801595BC_00000288
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_801595BC_00000288:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_801595BC_000002B8
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_801595BC_000002B8:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_801595BC_000002E4
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_801595BC_000002E4:
    lmw r25, 0x54(r1)
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_801598B4(void)
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
    li r3, 0x14
    li r4, 0x0
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_801598B4_00000364
    mr r4, r29
    mr r5, r26
    mr r6, r27
    mr r7, r28
    bl fn_801A77BC
    mr r30, r3
lbl_fn_801598B4_00000364:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_801598B4_000003F4
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_801598B4_0000039C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_801598B4_000003B8
lbl_fn_801598B4_0000039C:
    addi r3, r31, 0xb88
    lwz r5, 0xb88(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
lbl_fn_801598B4_000003B8:
    lwz r5, 0x2c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801598B4_000003F4
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801598B4_000003F4:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_801598B4_000005A8
    cmpwi r0, 0x8
    beq lbl_fn_801598B4_0000040C
    stw r0, 0x564(r29)
lbl_fn_801598B4_0000040C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_801598B4_000005A8
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_801598B4_00000444
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x38(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
    b lbl_fn_801598B4_00000460
lbl_fn_801598B4_00000444:
    addi r3, r31, 0xb94
    lwz r5, 0xb94(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
lbl_fn_801598B4_00000460:
    lwz r5, 0x38(r1)
    addi r3, r1, 0x20
    lwz r4, 0x3c(r1)
    lwz r0, 0x40(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801598B4_0000049C
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801598B4_0000049C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_801598B4_00000578
    cmpwi r0, 0x8
    beq lbl_fn_801598B4_000004B4
    stw r0, 0x564(r29)
lbl_fn_801598B4_000004B4:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_801598B4_00000578
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_801598B4_000004EC
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x44(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    b lbl_fn_801598B4_00000508
lbl_fn_801598B4_000004EC:
    addi r3, r31, 0xba0
    lwz r5, 0xba0(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
lbl_fn_801598B4_00000508:
    lwz r5, 0x44(r1)
    addi r3, r1, 0x14
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_801598B4_00000544
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_801598B4_00000544:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_801598B4_00000578
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_801598B4_00000578:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_801598B4_000005A8
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_801598B4_000005A8:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_801598B4_000005D4
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_801598B4_000005D4:
    lmw r26, 0x58(r1)
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_80159BA4(void)
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
    li r3, 0xc
    stw r28, 0x50(r1)
    mr r28, r4
    li r4, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_80159BA4_00000650
    mr r4, r29
    mr r5, r28
    bl fn_801A9A94
    mr r30, r3
lbl_fn_80159BA4_00000650:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80159BA4_000006E0
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80159BA4_00000688
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_80159BA4_000006A4
lbl_fn_80159BA4_00000688:
    addi r3, r31, 0xbac
    lwz r5, 0xbac(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
lbl_fn_80159BA4_000006A4:
    lwz r5, 0x2c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80159BA4_000006E0
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80159BA4_000006E0:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_80159BA4_00000894
    cmpwi r0, 0x8
    beq lbl_fn_80159BA4_000006F8
    stw r0, 0x564(r29)
lbl_fn_80159BA4_000006F8:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80159BA4_00000894
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80159BA4_00000730
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x38(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
    b lbl_fn_80159BA4_0000074C
lbl_fn_80159BA4_00000730:
    addi r3, r31, 0xbb8
    lwz r5, 0xbb8(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
lbl_fn_80159BA4_0000074C:
    lwz r5, 0x38(r1)
    addi r3, r1, 0x20
    lwz r4, 0x3c(r1)
    lwz r0, 0x40(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80159BA4_00000788
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80159BA4_00000788:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_80159BA4_00000864
    cmpwi r0, 0x8
    beq lbl_fn_80159BA4_000007A0
    stw r0, 0x564(r29)
lbl_fn_80159BA4_000007A0:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80159BA4_00000864
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80159BA4_000007D8
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x44(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    b lbl_fn_80159BA4_000007F4
lbl_fn_80159BA4_000007D8:
    addi r3, r31, 0xbc4
    lwz r5, 0xbc4(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
lbl_fn_80159BA4_000007F4:
    lwz r5, 0x44(r1)
    addi r3, r1, 0x14
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80159BA4_00000830
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80159BA4_00000830:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_80159BA4_00000864
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80159BA4_00000864:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_80159BA4_00000894
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80159BA4_00000894:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_80159BA4_000008C0
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80159BA4_000008C0:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    lwz r28, 0x50(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80159E9C(void)
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
    beq lbl_fn_80159E9C_0000093C
    mr r4, r29
    bl fn_801A880C
    mr r30, r3
lbl_fn_80159E9C_0000093C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80159E9C_000009CC
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80159E9C_00000974
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_80159E9C_00000990
lbl_fn_80159E9C_00000974:
    addi r3, r31, 0xbd0
    lwz r5, 0xbd0(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
lbl_fn_80159E9C_00000990:
    lwz r5, 0x2c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80159E9C_000009CC
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80159E9C_000009CC:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_80159E9C_00000B80
    cmpwi r0, 0x8
    beq lbl_fn_80159E9C_000009E4
    stw r0, 0x564(r29)
lbl_fn_80159E9C_000009E4:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80159E9C_00000B80
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80159E9C_00000A1C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x38(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
    b lbl_fn_80159E9C_00000A38
lbl_fn_80159E9C_00000A1C:
    addi r3, r31, 0xbdc
    lwz r5, 0xbdc(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
lbl_fn_80159E9C_00000A38:
    lwz r5, 0x38(r1)
    addi r3, r1, 0x20
    lwz r4, 0x3c(r1)
    lwz r0, 0x40(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80159E9C_00000A74
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80159E9C_00000A74:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_80159E9C_00000B50
    cmpwi r0, 0x8
    beq lbl_fn_80159E9C_00000A8C
    stw r0, 0x564(r29)
lbl_fn_80159E9C_00000A8C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_80159E9C_00000B50
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80159E9C_00000AC4
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x44(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    b lbl_fn_80159E9C_00000AE0
lbl_fn_80159E9C_00000AC4:
    addi r3, r31, 0xbe8
    lwz r5, 0xbe8(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
lbl_fn_80159E9C_00000AE0:
    lwz r5, 0x44(r1)
    addi r3, r1, 0x14
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_80159E9C_00000B1C
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_80159E9C_00000B1C:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_80159E9C_00000B50
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80159E9C_00000B50:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_80159E9C_00000B80
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80159E9C_00000B80:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_80159E9C_00000BAC
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80159E9C_00000BAC:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_8015A184(void)
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
    li r3, 0xc
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_8015A184_00000C24
    mr r4, r29
    bl fn_801A90BC
    mr r30, r3
lbl_fn_8015A184_00000C24:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8015A184_00000CB4
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8015A184_00000C5C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_8015A184_00000C78
lbl_fn_8015A184_00000C5C:
    addi r3, r31, 0xbf4
    lwz r5, 0xbf4(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
lbl_fn_8015A184_00000C78:
    lwz r5, 0x2c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8015A184_00000CB4
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8015A184_00000CB4:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_8015A184_00000E68
    cmpwi r0, 0x8
    beq lbl_fn_8015A184_00000CCC
    stw r0, 0x564(r29)
lbl_fn_8015A184_00000CCC:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8015A184_00000E68
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8015A184_00000D04
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x38(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
    b lbl_fn_8015A184_00000D20
lbl_fn_8015A184_00000D04:
    addi r3, r31, 0xc00
    lwz r5, 0xc00(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
lbl_fn_8015A184_00000D20:
    lwz r5, 0x38(r1)
    addi r3, r1, 0x20
    lwz r4, 0x3c(r1)
    lwz r0, 0x40(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8015A184_00000D5C
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8015A184_00000D5C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_8015A184_00000E38
    cmpwi r0, 0x8
    beq lbl_fn_8015A184_00000D74
    stw r0, 0x564(r29)
lbl_fn_8015A184_00000D74:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8015A184_00000E38
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8015A184_00000DAC
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x44(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    b lbl_fn_8015A184_00000DC8
lbl_fn_8015A184_00000DAC:
    addi r3, r31, 0xc0c
    lwz r5, 0xc0c(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
lbl_fn_8015A184_00000DC8:
    lwz r5, 0x44(r1)
    addi r3, r1, 0x14
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8015A184_00000E04
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8015A184_00000E04:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_8015A184_00000E38
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8015A184_00000E38:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_8015A184_00000E68
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8015A184_00000E68:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_8015A184_00000E94
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8015A184_00000E94:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_8015A46C(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    stw r31, 0xbc(r1)
    lis r31, lbl_8077A720@ha
    addi r31, r31, lbl_8077A720@l
    stw r30, 0xb8(r1)
    stw r29, 0xb4(r1)
    mr r29, r4
    li r4, 0x0
    stw r28, 0xb0(r1)
    mr r28, r3
    addi r3, r3, 0xc58
    bl fn_8011BEB8
    lwz r0, 0x12a4(r28)
    srwi. r0, r0, 31
    beq lbl_fn_8015A46C_00001030
    lwz r0, 0x12a4(r28)
    clrlwi r0, r0, 2
    stw r0, 0x12a4(r28)
    lwz r3, lbl_8087F430
    lwz r4, 0x10d8(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8015A46C_00000F58
    lwz r3, 0xc38(r28)
    cmpwi r3, 0x0
    ble lbl_fn_8015A46C_00000F58
    lwz r0, 0xc3c(r28)
    cmpwi r0, 0x0
    ble lbl_fn_8015A46C_00000F58
    subi r0, r3, 0x1
    lwz r3, 0xb0(r4)
    slwi r0, r0, 6
    li r5, 0x0
    add r3, r3, r0
    stw r5, 0x3c(r3)
    lwz r3, 0xc3c(r28)
    lwz r4, 0xb0(r4)
    subi r0, r3, 0x1
    slwi r0, r0, 6
    add r3, r4, r0
    stw r5, 0x3c(r3)
lbl_fn_8015A46C_00000F58:
    lwz r4, 0x48(r28)
    cmpwi r4, 0x0
    bne lbl_fn_8015A46C_00000F8C
    lwz r3, lbl_8087F0A8
    lwz r0, 0x278(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8015A46C_00000F8C
    lwz r3, 0x5c(r28)
    lwz r0, 0x11c(r3)
    cmpwi r0, 0x1
    bne lbl_fn_8015A46C_00000F8C
    li r0, 0x1
    b lbl_fn_8015A46C_00000FAC
lbl_fn_8015A46C_00000F8C:
    cmpwi r4, 0x0
    bne lbl_fn_8015A46C_00000FA8
    lwz r0, 0x12a8(r28)
    extrwi. r0, r0, 1, 14
    beq lbl_fn_8015A46C_00000FA8
    li r0, 0x1
    b lbl_fn_8015A46C_00000FAC
lbl_fn_8015A46C_00000FA8:
    li r0, 0x0
lbl_fn_8015A46C_00000FAC:
    cmpwi r0, 0x0
    beq lbl_fn_8015A46C_00001030
    lwz r3, lbl_8087F430
    li r4, 0x25
    bl fn_80370174
    cmpwi r3, 0x1
    blt lbl_fn_8015A46C_00001010
    lwz r3, 0x648(r28)
    cmpwi r3, 0x0
    beq lbl_fn_8015A46C_00000FDC
    li r4, 0x1
    bl fn_80044E0C
lbl_fn_8015A46C_00000FDC:
    lwz r3, 0x64c(r28)
    cmpwi r3, 0x0
    beq lbl_fn_8015A46C_00000FF0
    li r4, 0x1
    bl fn_80044E0C
lbl_fn_8015A46C_00000FF0:
    li r0, 0x0
    li r3, -0x1
    stw r3, 0x674(r28)
    mr r3, r28
    stw r0, 0x648(r28)
    stw r0, 0x64c(r28)
    bl fn_8014C228
    b lbl_fn_8015A46C_00001030
lbl_fn_8015A46C_00001010:
    lwz r0, 0x674(r28)
    cmpwi r0, 0x0
    blt lbl_fn_8015A46C_00001030
    mr r3, r28
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8014DEE4
lbl_fn_8015A46C_00001030:
    lwz r0, 0x12a4(r28)
    extrwi. r0, r0, 1, 26
    beq lbl_fn_8015A46C_00001048
    lwz r0, 0x12a4(r28)
    rlwinm r0, r0, 0, 27, 25
    stw r0, 0x12a4(r28)
lbl_fn_8015A46C_00001048:
    lwz r7, 0xd1c(r28)
    cmpwi r7, 0x0
    beq lbl_fn_8015A46C_000010F0
    lwz r0, 0x12a8(r7)
    mr r5, r7
    lwz r6, 0x1028(r7)
    li r4, 0x0
    extrwi r0, r0, 1, 15
    cntlzw r0, r0
    srwi r3, r0, 5
    b lbl_fn_8015A46C_00001090
lbl_fn_8015A46C_00001074:
    lwz r0, 0xfe8(r5)
    cmplw r0, r28
    bne lbl_fn_8015A46C_00001088
    li r0, 0x1
    b lbl_fn_8015A46C_000010AC
lbl_fn_8015A46C_00001088:
    addi r5, r5, 0x4
    addi r4, r4, 0x1
lbl_fn_8015A46C_00001090:
    cmpwi r3, 0x0
    mr r0, r6
    bne lbl_fn_8015A46C_000010A0
    slwi r0, r6, 1
lbl_fn_8015A46C_000010A0:
    cmpw r4, r0
    blt lbl_fn_8015A46C_00001074
    li r0, 0x0
lbl_fn_8015A46C_000010AC:
    cmpwi r0, 0x0
    beq lbl_fn_8015A46C_000010F0
    li r0, 0x10
    mr r4, r7
    li r3, 0x0
    mtctr r0
lbl_fn_8015A46C_000010C4:
    lwz r0, 0xfe8(r4)
    cmplw r0, r28
    bne lbl_fn_8015A46C_000010E4
    slwi r0, r3, 2
    li r4, 0x0
    add r3, r7, r0
    stw r4, 0xfe8(r3)
    b lbl_fn_8015A46C_000010F0
lbl_fn_8015A46C_000010E4:
    addi r4, r4, 0x4
    addi r3, r3, 0x1
    bdnz lbl_fn_8015A46C_000010C4
lbl_fn_8015A46C_000010F0:
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_8015A46C_00001110
    mr r4, r28
    bl fn_801059F8
    lwz r3, lbl_8087F048
    mr r4, r28
    bl fn_80105B3C
lbl_fn_8015A46C_00001110:
    lwz r30, 0x564(r28)
    lwz r3, 0x55c(r28)
    lfs f0, lbl_8088196C
    lwz r0, 0x12a8(r28)
    cmpw r3, r30
    stfs f0, 0xfb8(r28)
    rlwinm r0, r0, 0, 24, 22
    stw r0, 0x12a8(r28)
    stfs f0, 0xfbc(r28)
    beq lbl_fn_8015A46C_000012E8
    cmpwi r3, 0x6
    beq lbl_fn_8015A46C_0000114C
    cmpwi r3, 0x8
    beq lbl_fn_8015A46C_0000114C
    stw r3, 0x564(r28)
lbl_fn_8015A46C_0000114C:
    lwz r0, 0x55c(r28)
    cmpwi r0, 0x6
    bne lbl_fn_8015A46C_000012E8
    lwz r0, 0xf80(r28)
    cmpwi r0, 0x0
    bne lbl_fn_8015A46C_00001184
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x68(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x6c(r1)
    stw r0, 0x70(r1)
    b lbl_fn_8015A46C_000011A0
lbl_fn_8015A46C_00001184:
    addi r3, r31, 0xc18
    lwz r5, 0xc18(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x68(r1)
    stw r4, 0x6c(r1)
    stw r0, 0x70(r1)
lbl_fn_8015A46C_000011A0:
    lwz r5, 0x68(r1)
    addi r3, r1, 0x2c
    lwz r4, 0x6c(r1)
    lwz r0, 0x70(r1)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8015A46C_000011DC
    lwz r3, 0xf80(r28)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8015A46C_000011DC:
    lwz r0, 0x55c(r28)
    cmpwi r0, 0x6
    beq lbl_fn_8015A46C_000012B8
    cmpwi r0, 0x8
    beq lbl_fn_8015A46C_000011F4
    stw r0, 0x564(r28)
lbl_fn_8015A46C_000011F4:
    lwz r0, 0x55c(r28)
    cmpwi r0, 0x6
    bne lbl_fn_8015A46C_000012B8
    lwz r0, 0xf80(r28)
    cmpwi r0, 0x0
    bne lbl_fn_8015A46C_0000122C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x74(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x78(r1)
    stw r0, 0x7c(r1)
    b lbl_fn_8015A46C_00001248
lbl_fn_8015A46C_0000122C:
    addi r3, r31, 0xc24
    lwz r5, 0xc24(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x74(r1)
    stw r4, 0x78(r1)
    stw r0, 0x7c(r1)
lbl_fn_8015A46C_00001248:
    lwz r5, 0x74(r1)
    addi r3, r1, 0x38
    lwz r4, 0x78(r1)
    lwz r0, 0x7c(r1)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8015A46C_00001284
    lwz r3, 0xf80(r28)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8015A46C_00001284:
    mr r3, r28
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r28)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r28)
    beq lbl_fn_8015A46C_000012B8
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8015A46C_000012B8:
    lwz r3, 0xf80(r28)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r28)
    cmpwi r3, 0x0
    stw r0, 0xf80(r28)
    beq lbl_fn_8015A46C_000012E8
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8015A46C_000012E8:
    lwz r0, 0x48(r28)
    li r3, 0x0
    stw r30, 0x55c(r28)
    cmpwi r0, 0x0
    stw r3, 0xf1c(r28)
    bne lbl_fn_8015A46C_00001324
    lwz r0, 0x7e0(r28)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_8015A46C_00001324
    lwz r12, 0x0(r28)
    mr r3, r28
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
lbl_fn_8015A46C_00001324:
    lis r5, lbl_80737A9C@ha
    li r3, 0x40
    addi r5, r5, lbl_80737A9C@l
    li r4, 0x0
    addi r5, r5, 0x24
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_8015A46C_00001368
    mr r4, r28
    mr r5, r29
    li r6, -0x1
    li r7, 0x0
    bl fn_801AD34C
    mr r30, r3
lbl_fn_8015A46C_00001368:
    lwz r0, 0x55c(r28)
    cmpwi r0, 0x6
    bne lbl_fn_8015A46C_000013F8
    lwz r0, 0xf80(r28)
    cmpwi r0, 0x0
    bne lbl_fn_8015A46C_000013A0
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x80(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x84(r1)
    stw r0, 0x88(r1)
    b lbl_fn_8015A46C_000013BC
lbl_fn_8015A46C_000013A0:
    addi r3, r31, 0xc30
    lwz r5, 0xc30(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x80(r1)
    stw r4, 0x84(r1)
    stw r0, 0x88(r1)
lbl_fn_8015A46C_000013BC:
    lwz r5, 0x80(r1)
    addi r3, r1, 0x20
    lwz r4, 0x84(r1)
    lwz r0, 0x88(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8015A46C_000013F8
    lwz r3, 0xf80(r28)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8015A46C_000013F8:
    lwz r0, 0x55c(r28)
    cmpwi r0, 0x6
    beq lbl_fn_8015A46C_000015AC
    cmpwi r0, 0x8
    beq lbl_fn_8015A46C_00001410
    stw r0, 0x564(r28)
lbl_fn_8015A46C_00001410:
    lwz r0, 0x55c(r28)
    cmpwi r0, 0x6
    bne lbl_fn_8015A46C_000015AC
    lwz r0, 0xf80(r28)
    cmpwi r0, 0x0
    bne lbl_fn_8015A46C_00001448
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x8c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x90(r1)
    stw r0, 0x94(r1)
    b lbl_fn_8015A46C_00001464
lbl_fn_8015A46C_00001448:
    addi r3, r31, 0xc3c
    lwz r5, 0xc3c(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x8c(r1)
    stw r4, 0x90(r1)
    stw r0, 0x94(r1)
lbl_fn_8015A46C_00001464:
    lwz r5, 0x8c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x90(r1)
    lwz r0, 0x94(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8015A46C_000014A0
    lwz r3, 0xf80(r28)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8015A46C_000014A0:
    lwz r0, 0x55c(r28)
    cmpwi r0, 0x6
    beq lbl_fn_8015A46C_0000157C
    cmpwi r0, 0x8
    beq lbl_fn_8015A46C_000014B8
    stw r0, 0x564(r28)
lbl_fn_8015A46C_000014B8:
    lwz r0, 0x55c(r28)
    cmpwi r0, 0x6
    bne lbl_fn_8015A46C_0000157C
    lwz r0, 0xf80(r28)
    cmpwi r0, 0x0
    bne lbl_fn_8015A46C_000014F0
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x98(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x9c(r1)
    stw r0, 0xa0(r1)
    b lbl_fn_8015A46C_0000150C
lbl_fn_8015A46C_000014F0:
    addi r3, r31, 0xc48
    lwz r5, 0xc48(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x98(r1)
    stw r4, 0x9c(r1)
    stw r0, 0xa0(r1)
lbl_fn_8015A46C_0000150C:
    lwz r5, 0x98(r1)
    addi r3, r1, 0x14
    lwz r4, 0x9c(r1)
    lwz r0, 0xa0(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8015A46C_00001548
    lwz r3, 0xf80(r28)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8015A46C_00001548:
    mr r3, r28
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r28)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r28)
    beq lbl_fn_8015A46C_0000157C
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8015A46C_0000157C:
    lwz r3, 0xf80(r28)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r28)
    cmpwi r3, 0x0
    stw r0, 0xf80(r28)
    beq lbl_fn_8015A46C_000015AC
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8015A46C_000015AC:
    lwz r3, 0xf80(r28)
    li r0, 0x6
    stw r0, 0x55c(r28)
    cmpwi r3, 0x0
    stw r30, 0xf80(r28)
    beq lbl_fn_8015A46C_000015D8
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8015A46C_000015D8:
    lwz r0, 0x12a4(r28)
    li r3, 0x0
    stw r3, 0x638(r28)
    extrwi. r0, r0, 1, 3
    beq lbl_fn_8015A46C_00001600
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_8015A46C_00001600
    li r4, 0xb5
    bl fn_803750E4
lbl_fn_8015A46C_00001600:
    mr r3, r28
    li r4, 0x1
    bl fn_80164DCC
    lwz r3, 0x1208(r28)
    cmpwi r3, 0x0
    beq lbl_fn_8015A46C_0000166C
    beq lbl_fn_8015A46C_0000166C
    lfs f0, lbl_8088196C
    li r29, 0x0
    li r0, 0x3
    stw r29, 0x4c(r1)
    addi r4, r1, 0x48
    stw r29, 0x50(r1)
    stw r29, 0x54(r1)
    stfs f0, 0x5c(r1)
    stfs f0, 0x60(r1)
    stfs f0, 0x64(r1)
    stw r0, 0x48(r1)
    stw r28, 0x58(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r3, 0x1208(r28)
    li r0, 0xff
    stb r0, 0x520(r3)
    stw r29, 0x1208(r28)
lbl_fn_8015A46C_0000166C:
    lwz r0, 0xc4(r1)
    lwz r31, 0xbc(r1)
    lwz r30, 0xb8(r1)
    lwz r29, 0xb4(r1)
    lwz r28, 0xb0(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

asm void fn_8015AC48(void)
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
    li r3, 0xc
    stw r28, 0x50(r1)
    mr r28, r4
    li r4, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_8015AC48_000016F4
    mr r4, r29
    mr r5, r28
    bl fn_801A2A48
    mr r30, r3
lbl_fn_8015AC48_000016F4:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8015AC48_00001784
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8015AC48_0000172C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x2c(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    b lbl_fn_8015AC48_00001748
lbl_fn_8015AC48_0000172C:
    addi r3, r31, 0xc54
    lwz r5, 0xc54(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r0, 0x34(r1)
lbl_fn_8015AC48_00001748:
    lwz r5, 0x2c(r1)
    addi r3, r1, 0x8
    lwz r4, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8015AC48_00001784
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8015AC48_00001784:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_8015AC48_00001938
    cmpwi r0, 0x8
    beq lbl_fn_8015AC48_0000179C
    stw r0, 0x564(r29)
lbl_fn_8015AC48_0000179C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8015AC48_00001938
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8015AC48_000017D4
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x38(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x3c(r1)
    stw r0, 0x40(r1)
    b lbl_fn_8015AC48_000017F0
lbl_fn_8015AC48_000017D4:
    addi r3, r31, 0xc60
    lwz r5, 0xc60(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r0, 0x40(r1)
lbl_fn_8015AC48_000017F0:
    lwz r5, 0x38(r1)
    addi r3, r1, 0x20
    lwz r4, 0x3c(r1)
    lwz r0, 0x40(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8015AC48_0000182C
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8015AC48_0000182C:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    beq lbl_fn_8015AC48_00001908
    cmpwi r0, 0x8
    beq lbl_fn_8015AC48_00001844
    stw r0, 0x564(r29)
lbl_fn_8015AC48_00001844:
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x6
    bne lbl_fn_8015AC48_00001908
    lwz r0, 0xf80(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8015AC48_0000187C
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x44(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    b lbl_fn_8015AC48_00001898
lbl_fn_8015AC48_0000187C:
    addi r3, r31, 0xc6c
    lwz r5, 0xc6c(r31)
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r0, 0x4c(r1)
lbl_fn_8015AC48_00001898:
    lwz r5, 0x44(r1)
    addi r3, r1, 0x14
    lwz r4, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8015AC48_000018D4
    lwz r3, 0xf80(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_fn_8015AC48_000018D4:
    mr r3, r29
    li r4, 0x6
    bl fn_8016E970
    lwz r3, 0xf80(r29)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_8015AC48_00001908
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8015AC48_00001908:
    lwz r3, 0xf80(r29)
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x55c(r29)
    cmpwi r3, 0x0
    stw r0, 0xf80(r29)
    beq lbl_fn_8015AC48_00001938
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8015AC48_00001938:
    lwz r3, 0xf80(r29)
    li r0, 0x6
    stw r0, 0x55c(r29)
    cmpwi r3, 0x0
    stw r30, 0xf80(r29)
    beq lbl_fn_8015AC48_00001964
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8015AC48_00001964:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    lwz r28, 0x50(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}
