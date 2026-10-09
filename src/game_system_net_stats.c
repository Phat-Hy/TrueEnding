#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void fn_80043B34(void);
extern void fn_80043BDC(void);
extern void fn_80097D7C(void);
extern void fn_800DC6B4(void);
extern void fn_80109828(void);
extern void fn_8011F8F4(void);
extern void fn_8011F91C(void);
extern void fn_8011FC10(void);
extern void fn_8011FE3C(void);
extern void fn_80145334(void);
extern void fn_8015E7A0(void);
extern void fn_80171420(void);
extern void fn_80171DB0(void);
extern void fn_801765D8(void);
extern void fn_8018059C(void);
extern void fn_8018120C(void);
extern void fn_80181284(void);
extern void fn_801826E0(void);
extern void fn_80182890(void);
extern void fn_80183588(void);
extern void fn_80183618(void);
extern void fn_80183774(void);
extern void fn_801EB8C0(void);
extern void fn_80370174(void);
extern void fn_80370320(void);
extern void fn_80370A78(void);
extern void fn_80370AE4(void);
extern void fn_803748E0(void);
extern void fn_8037EF30(void);
extern void fn_8039BF04(void);
extern void fn_8039C7F0(void);
extern void fn_803B6970(void);
extern void fn_803B6C88(void);
extern void fn_803B6E04(void);
extern void fn_803B78B4(void);
extern void fn_803B78E8(void);
extern void fn_803CC6B4(void);
extern void fn_803E0D4C(void);
extern void fn_8047F268(void);
extern void fn_8047F2EC(void);
extern void fn_8049B72C(void);
extern void fn_804A06B4(void);
extern void fn_804A0E18(void);
extern void fn_804AAD68(void);
extern void fn_804AAFCC(void);
extern void fn_8054A0A0(void);
extern void fn_805B4D94(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_80680CF8(void);

/* External data declarations */
extern u8 jumptable_8078AFE0[];
extern u8 jumptable_8078B010[];
extern u8 jumptable_8078B040[];
extern u8 lbl_8074ED24[];
extern u8 lbl_8074F5E8[];

/* Small data declarations */
extern u32 lbl_8087EE78;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F048;
extern u32 lbl_8087F098;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F128;
extern u32 lbl_8087F408;
extern u32 lbl_8087F430;
extern u32 lbl_8087F490;
extern u32 lbl_8087F540;
extern u32 lbl_8087F558;
extern u32 lbl_8087F890;
extern u32 lbl_8087F8A0;
extern u32 lbl_8087FA00;
extern u32 lbl_8087FA20;
extern u32 lbl_80885B10;
extern u32 lbl_80885B14;
extern u32 lbl_80885B30;
extern u32 lbl_80885B9C;
extern u32 lbl_80885BA4;
extern u32 lbl_80885BA8;
extern u32 lbl_80885BAC;

/* Function declarations */
void fn_803A5118(void);
void fn_803A5384(void);
void fn_803A54C0(void);
void fn_803A5650(void);
void fn_803A5804(void);
void fn_803A59D4(void);
void fn_803A5A10(void);
void fn_803A5A8C(void);
void fn_803A5CDC(void);
void fn_803A5F14(void);
void fn_803A5F88(void);
void fn_803A5FF8(void);
void fn_803A61CC(void);
void fn_803A61F4(void);
void fn_803A6230(void);
void fn_803A6324(void);
void fn_803A6410(void);
void fn_803A66B0(void);
void fn_803A6744(void);
void fn_803A68B8(void);

asm void fn_803A5118(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    lwz r0, 0x8(r5)
    stw r31, 0xac(r1)
    mr r31, r5
    cmpwi r0, 0x0
    stw r30, 0xa8(r1)
    mr r30, r4
    lwz r4, 0xc(r5)
    stw r29, 0xa4(r1)
    li r29, 0x0
    beq lbl_fn_803A5118_00000050
    cmpwi r0, 0x1
    beq lbl_fn_803A5118_0000007C
    cmpwi r0, 0x2
    beq lbl_fn_803A5118_000000B4
    cmpwi r0, 0x3
    beq lbl_fn_803A5118_000000C4
    b lbl_fn_803A5118_000000D0
lbl_fn_803A5118_00000050:
    lwz r0, 0xdc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803A5118_00000068
    lwz r3, lbl_8087F8A0
    lwz r3, 0x48(r3)
    b lbl_fn_803A5118_00000074
lbl_fn_803A5118_00000068:
    lwz r3, lbl_8087F8A0
    li r4, 0x1
    bl fn_8011F8F4
lbl_fn_803A5118_00000074:
    mr r29, r3
    b lbl_fn_803A5118_000000D0
lbl_fn_803A5118_0000007C:
    lwz r3, lbl_8087F890
    bl fn_8011FE3C
    lwz r0, lbl_8087FA20
    mr r29, r3
    cmpwi r0, 0x0
    beq lbl_fn_803A5118_000000D0
    cmpwi r3, 0x0
    beq lbl_fn_803A5118_000000D0
    lwz r0, 0x38(r3)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_803A5118_000000D0
    li r29, 0x0
    b lbl_fn_803A5118_000000D0
lbl_fn_803A5118_000000B4:
    lwz r3, lbl_8087F408
    bl fn_8011FC10
    mr r29, r3
    b lbl_fn_803A5118_000000D0
lbl_fn_803A5118_000000C4:
    lwz r3, lbl_8087F8A0
    bl fn_8011F91C
    mr r29, r3
lbl_fn_803A5118_000000D0:
    cmpwi r29, 0x0
    beq lbl_fn_803A5118_0000022C
    lwz r12, 0x0(r29)
    mr r3, r29
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
    lwz r0, 0x10(r31)
    cmpwi r0, 0x0
    beq lbl_fn_803A5118_0000010C
    cmpwi r0, 0x1
    beq lbl_fn_803A5118_00000118
    cmpwi r0, 0x2
    beq lbl_fn_803A5118_000001C0
    b lbl_fn_803A5118_0000022C
lbl_fn_803A5118_0000010C:
    mr r3, r29
    bl fn_801765D8
    b lbl_fn_803A5118_0000022C
lbl_fn_803A5118_00000118:
    lwz r0, 0x38(r29)
    addi r3, r1, 0x68
    lfs f1, lbl_80885B10
    li r4, 0x79
    ori r0, r0, 0x4
    stw r0, 0x38(r29)
    lfs f0, lbl_80885B30
    stfs f1, 0x20(r1)
    stfs f1, 0x24(r1)
    stfs f0, 0x28(r1)
    lfs f1, 0x538(r29)
    bl fn_805F8E70
    addi r4, r1, 0x20
    addi r3, r1, 0x68
    mr r5, r4
    bl fn_805F93C0
    lfs f2, 0x28(r1)
    mr r3, r29
    lfs f1, 0x24(r1)
    addi r4, r1, 0x2c
    lfs f0, 0x20(r1)
    fneg f2, f2
    fneg f1, f1
    li r5, -0x1
    fneg f0, f0
    stfs f2, 0x34(r1)
    li r6, 0x0
    stfs f0, 0x2c(r1)
    stfs f1, 0x30(r1)
    bl fn_8015E7A0
    lfs f0, lbl_80885B30
    addi r3, r29, 0xb0
    stfs f0, 0x2ec(r29)
    li r4, 0x0
    bl fn_80097D7C
    stfs f1, 0x2e4(r29)
    mr r3, r29
    bl fn_80145334
    lwz r0, 0x38(r29)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r29)
    b lbl_fn_803A5118_0000022C
lbl_fn_803A5118_000001C0:
    lfs f1, lbl_80885B10
    addi r3, r1, 0x38
    lfs f0, lbl_80885B30
    li r4, 0x79
    stfs f1, 0x8(r1)
    stfs f1, 0xc(r1)
    stfs f0, 0x10(r1)
    lfs f1, 0x538(r29)
    bl fn_805F8E70
    addi r4, r1, 0x8
    addi r3, r1, 0x38
    mr r5, r4
    bl fn_805F93C0
    lfs f2, 0x10(r1)
    mr r3, r29
    lfs f1, 0xc(r1)
    addi r4, r1, 0x14
    lfs f0, 0x8(r1)
    fneg f2, f2
    fneg f1, f1
    li r5, -0x1
    fneg f0, f0
    stfs f2, 0x1c(r1)
    li r6, 0x0
    stfs f0, 0x14(r1)
    stfs f1, 0x18(r1)
    bl fn_8015E7A0
lbl_fn_803A5118_0000022C:
    lwz r4, 0x0(r31)
    lis r3, lbl_8074ED24@ha
    li r0, 0x0
    stw r0, 0x4(r30)
    slwi r0, r4, 2
    addi r3, r3, lbl_8074ED24@l
    lwzx r0, r3, r0
    add r0, r31, r0
    stw r0, 0x0(r30)
    lwz r31, 0xac(r1)
    lwz r30, 0xa8(r1)
    lwz r29, 0xa4(r1)
    lwz r0, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_803A5384(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r5
    stw r30, 0x8(r1)
    mr r30, r4
    lwz r4, 0x8(r5)
    lwz r3, lbl_8087FA00
    lwz r5, 0xc(r5)
    bl fn_805B4D94
    cmpwi r3, 0x0
    beq lbl_fn_803A5384_000002D4
    mr r5, r3
    li r6, 0x0
    li r4, 0x0
    b lbl_fn_803A5384_000002C8
lbl_fn_803A5384_000002B0:
    lwz r7, 0x250(r5)
    addi r5, r5, 0x4
    addi r6, r6, 0x1
    lwz r0, 0xf14(r7)
    stw r0, 0xf18(r7)
    stw r4, 0xf14(r7)
lbl_fn_803A5384_000002C8:
    lbz r0, 0x24c(r3)
    cmpw r6, r0
    blt lbl_fn_803A5384_000002B0
lbl_fn_803A5384_000002D4:
    lwz r3, lbl_8087FA00
    lwz r4, 0x10(r31)
    lwz r5, 0x14(r31)
    bl fn_805B4D94
    cmpwi r3, 0x0
    beq lbl_fn_803A5384_00000320
    mr r5, r3
    li r6, 0x0
    li r4, 0x1
    b lbl_fn_803A5384_00000314
lbl_fn_803A5384_000002FC:
    lwz r7, 0x250(r5)
    addi r5, r5, 0x4
    addi r6, r6, 0x1
    lwz r0, 0xf14(r7)
    stw r0, 0xf18(r7)
    stw r4, 0xf14(r7)
lbl_fn_803A5384_00000314:
    lbz r0, 0x24c(r3)
    cmpw r6, r0
    blt lbl_fn_803A5384_000002FC
lbl_fn_803A5384_00000320:
    lwz r3, lbl_8087FA00
    lwz r4, 0x18(r31)
    lwz r5, 0x1c(r31)
    bl fn_805B4D94
    cmpwi r3, 0x0
    beq lbl_fn_803A5384_0000036C
    mr r5, r3
    li r6, 0x0
    li r4, 0x2
    b lbl_fn_803A5384_00000360
lbl_fn_803A5384_00000348:
    lwz r7, 0x250(r5)
    addi r5, r5, 0x4
    addi r6, r6, 0x1
    lwz r0, 0xf14(r7)
    stw r0, 0xf18(r7)
    stw r4, 0xf14(r7)
lbl_fn_803A5384_00000360:
    lbz r0, 0x24c(r3)
    cmpw r6, r0
    blt lbl_fn_803A5384_00000348
lbl_fn_803A5384_0000036C:
    lwz r4, 0x0(r31)
    lis r3, lbl_8074ED24@ha
    li r0, 0x0
    stw r0, 0x4(r30)
    slwi r0, r4, 2
    addi r3, r3, lbl_8074ED24@l
    lwzx r0, r3, r0
    add r0, r31, r0
    stw r0, 0x0(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803A54C0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lwz r6, 0x8(r5)
    stw r0, 0x24(r1)
    cmpwi r6, 0x0
    lwz r0, 0xc(r5)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    li r29, 0x0
    stw r28, 0x10(r1)
    mr r28, r3
    beq lbl_fn_803A54C0_00000400
    cmpwi r6, 0x1
    beq lbl_fn_803A54C0_0000042C
    cmpwi r6, 0x2
    beq lbl_fn_803A54C0_00000468
    cmpwi r6, 0x3
    beq lbl_fn_803A54C0_0000047C
    b lbl_fn_803A54C0_0000048C
lbl_fn_803A54C0_00000400:
    lwz r0, 0xdc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803A54C0_00000418
    lwz r3, lbl_8087F8A0
    lwz r3, 0x48(r3)
    b lbl_fn_803A54C0_00000424
lbl_fn_803A54C0_00000418:
    lwz r3, lbl_8087F8A0
    li r4, 0x1
    bl fn_8011F8F4
lbl_fn_803A54C0_00000424:
    mr r29, r3
    b lbl_fn_803A54C0_0000048C
lbl_fn_803A54C0_0000042C:
    lwz r3, lbl_8087F890
    mr r4, r0
    bl fn_8011FE3C
    lwz r0, lbl_8087FA20
    mr r29, r3
    cmpwi r0, 0x0
    beq lbl_fn_803A54C0_0000048C
    cmpwi r3, 0x0
    beq lbl_fn_803A54C0_0000048C
    lwz r0, 0x38(r3)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_803A54C0_0000048C
    li r29, 0x0
    b lbl_fn_803A54C0_0000048C
lbl_fn_803A54C0_00000468:
    lwz r3, lbl_8087F408
    mr r4, r0
    bl fn_8011FC10
    mr r29, r3
    b lbl_fn_803A54C0_0000048C
lbl_fn_803A54C0_0000047C:
    lwz r3, lbl_8087F8A0
    mr r4, r0
    bl fn_8011F91C
    mr r29, r3
lbl_fn_803A54C0_0000048C:
    lwz r0, 0x48(r29)
    cmpwi r0, 0x0
    beq lbl_fn_803A54C0_000004A0
    cmpwi r0, 0x3
    bne lbl_fn_803A54C0_000004F4
lbl_fn_803A54C0_000004A0:
    lwz r3, lbl_8087F430
    lwz r0, 0x868(r3)
    cmpwi r0, 0x6
    bne lbl_fn_803A54C0_000004B8
    li r4, 0x0
    bl fn_803748E0
lbl_fn_803A54C0_000004B8:
    lwz r5, 0x10(r31)
    mr r4, r29
    stw r5, 0xdc(r28)
    lwz r3, lbl_8087F8A0
    bl fn_8054A0A0
    lwz r3, lbl_8087F430
    li r4, 0x1
    lfs f1, lbl_80885B14
    li r5, 0x1
    addi r3, r3, 0x6c
    bl fn_8037EF30
    lwz r3, lbl_8087F490
    cmpwi r3, 0x0
    beq lbl_fn_803A54C0_000004F4
    bl fn_803E0D4C
lbl_fn_803A54C0_000004F4:
    lwz r4, 0x0(r31)
    lis r3, lbl_8074ED24@ha
    li r0, 0x0
    stw r0, 0x4(r30)
    slwi r0, r4, 2
    addi r3, r3, lbl_8074ED24@l
    lwzx r0, r3, r0
    add r0, r31, r0
    stw r0, 0x0(r30)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803A5650(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    mr r26, r3
    mr r29, r4
    mr r30, r5
    lwz r4, 0x8(r5)
    lwz r3, lbl_8087FA00
    lwz r5, 0xc(r5)
    bl fn_805B4D94
    lwz r0, 0x10(r30)
    mr r31, r3
    lwz r4, 0x14(r30)
    li r28, 0x0
    cmpwi r0, 0x0
    beq lbl_fn_803A5650_0000059C
    cmpwi r0, 0x1
    beq lbl_fn_803A5650_000005C8
    cmpwi r0, 0x2
    beq lbl_fn_803A5650_00000600
    cmpwi r0, 0x3
    beq lbl_fn_803A5650_00000610
    b lbl_fn_803A5650_0000061C
lbl_fn_803A5650_0000059C:
    lwz r0, 0xdc(r26)
    cmpwi r0, 0x0
    beq lbl_fn_803A5650_000005B4
    lwz r3, lbl_8087F8A0
    lwz r3, 0x48(r3)
    b lbl_fn_803A5650_000005C0
lbl_fn_803A5650_000005B4:
    lwz r3, lbl_8087F8A0
    li r4, 0x1
    bl fn_8011F8F4
lbl_fn_803A5650_000005C0:
    mr r28, r3
    b lbl_fn_803A5650_0000061C
lbl_fn_803A5650_000005C8:
    lwz r3, lbl_8087F890
    bl fn_8011FE3C
    lwz r0, lbl_8087FA20
    mr r28, r3
    cmpwi r0, 0x0
    beq lbl_fn_803A5650_0000061C
    cmpwi r3, 0x0
    beq lbl_fn_803A5650_0000061C
    lwz r0, 0x38(r3)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_803A5650_0000061C
    li r28, 0x0
    b lbl_fn_803A5650_0000061C
lbl_fn_803A5650_00000600:
    lwz r3, lbl_8087F408
    bl fn_8011FC10
    mr r28, r3
    b lbl_fn_803A5650_0000061C
lbl_fn_803A5650_00000610:
    lwz r3, lbl_8087F8A0
    bl fn_8011F91C
    mr r28, r3
lbl_fn_803A5650_0000061C:
    cmpwi r31, 0x0
    beq lbl_fn_803A5650_000006B0
    cmpwi r28, 0x0
    beq lbl_fn_803A5650_000006B0
    mr r27, r31
    li r26, 0x0
    b lbl_fn_803A5650_000006A4
lbl_fn_803A5650_00000638:
    lwz r3, 0x250(r27)
    lwz r4, 0x48(r3)
    cmpwi r4, 0x0
    beq lbl_fn_803A5650_0000069C
    cmplw r3, r28
    beq lbl_fn_803A5650_0000069C
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_803A5650_0000069C
    cmpwi r4, 0x2
    bne lbl_fn_803A5650_00000678
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_803A5650_0000069C
lbl_fn_803A5650_00000678:
    lwz r0, 0x20(r30)
    cmpwi r0, 0x0
    bne lbl_fn_803A5650_00000698
    lfs f1, 0x1c(r30)
    mr r4, r28
    li r5, 0x0
    bl fn_80171420
    b lbl_fn_803A5650_0000069C
lbl_fn_803A5650_00000698:
    bl fn_80171DB0
lbl_fn_803A5650_0000069C:
    addi r27, r27, 0x4
    addi r26, r26, 0x1
lbl_fn_803A5650_000006A4:
    lbz r0, 0x24c(r31)
    cmpw r26, r0
    blt lbl_fn_803A5650_00000638
lbl_fn_803A5650_000006B0:
    lwz r4, 0x0(r30)
    lis r3, lbl_8074ED24@ha
    li r0, 0x0
    stw r0, 0x4(r29)
    slwi r0, r4, 2
    addi r3, r3, lbl_8074ED24@l
    lwzx r0, r3, r0
    addi r11, r1, 0x20
    add r0, r30, r0
    stw r0, 0x0(r29)
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803A5804(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r29, r3
    mr r30, r4
    lwz r3, 0x88(r3)
    mr r31, r5
    lwz r4, 0x10(r5)
    bl fn_803CC6B4
    lwz r0, 0x14(r31)
    mr r4, r3
    lwz r5, lbl_8087F490
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    lwz r28, 0x2640(r5)
    beq lbl_fn_803A5804_00000860
    cmpwi r28, 0x0
    beq lbl_fn_803A5804_00000854
    lwz r6, 0x50(r28)
    li r5, 0x1
    cmpwi r6, 0x0
    beq lbl_fn_803A5804_0000076C
    lfs f1, lbl_80885B9C
    lfs f0, 0x60(r28)
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    mfcr r0
    extrwi. r0, r0, 1, 2
    bne lbl_fn_803A5804_0000076C
    li r5, 0x0
lbl_fn_803A5804_0000076C:
    cmpwi r5, 0x0
    beq lbl_fn_803A5804_00000854
    cmpwi r3, 0x0
    beq lbl_fn_803A5804_00000854
    cmpwi r6, 0x2
    bne lbl_fn_803A5804_00000798
    lwz r5, 0x18(r31)
    mr r3, r28
    lfs f1, lbl_80885B9C
    bl fn_803B6E04
    b lbl_fn_803A5804_000007A8
lbl_fn_803A5804_00000798:
    lwz r5, 0x18(r31)
    mr r3, r28
    lfs f1, lbl_80885B9C
    bl fn_803B6970
lbl_fn_803A5804_000007A8:
    lwz r4, 0x10(r31)
    li r3, 0x0
    lwz r0, 0x1c(r31)
    stw r3, 0xb4(r28)
    cmpw r0, r4
    ble lbl_fn_803A5804_000007F8
    addi r27, r4, 0x1
    b lbl_fn_803A5804_000007EC
lbl_fn_803A5804_000007C8:
    lwz r3, 0x88(r29)
    mr r4, r27
    bl fn_803CC6B4
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_803A5804_000007E8
    mr r3, r28
    bl fn_803B78B4
lbl_fn_803A5804_000007E8:
    addi r27, r27, 0x1
lbl_fn_803A5804_000007EC:
    lwz r0, 0x1c(r31)
    cmpw r27, r0
    ble lbl_fn_803A5804_000007C8
lbl_fn_803A5804_000007F8:
    mr r3, r28
    bl fn_803B78E8
    lwz r0, 0x14(r31)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_803A5804_00000828
    li r0, 0x1
    stb r0, 0x71(r28)
    lwz r0, 0x8(r31)
    stw r0, 0x74(r28)
    lwz r0, 0xc(r31)
    stw r0, 0x78(r28)
lbl_fn_803A5804_00000828:
    lwz r0, 0x14(r31)
    li r3, 0x0
    stw r3, 0xb4(r29)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_fn_803A5804_0000084C
    li r0, 0x1
    stw r0, 0x4(r30)
    b lbl_fn_803A5804_00000888
lbl_fn_803A5804_0000084C:
    stw r3, 0x4(r30)
    b lbl_fn_803A5804_00000888
lbl_fn_803A5804_00000854:
    li r0, 0x0
    stw r0, 0x4(r30)
    b lbl_fn_803A5804_00000888
lbl_fn_803A5804_00000860:
    lwz r0, 0x50(r28)
    cmpwi r0, 0x0
    beq lbl_fn_803A5804_00000880
    li r0, 0x0
    stw r0, 0xb4(r28)
    mr r3, r28
    li r4, 0x0
    bl fn_803B6C88
lbl_fn_803A5804_00000880:
    li r0, 0x0
    stw r0, 0x4(r30)
lbl_fn_803A5804_00000888:
    lwz r0, 0x0(r31)
    lis r3, lbl_8074ED24@ha
    addi r3, r3, lbl_8074ED24@l
    addi r11, r1, 0x20
    slwi r0, r0, 2
    lwzx r0, r3, r0
    add r0, r31, r0
    stw r0, 0x0(r30)
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803A59D4(void)
{
    nofralloc
    lwz r0, 0x0(r5)
    lis r3, lbl_8074ED24@ha
    lwz r6, lbl_8087F490
    addi r3, r3, lbl_8074ED24@l
    slwi r0, r0, 2
    lwzx r0, r3, r0
    lwz r3, 0x2640(r6)
    add r0, r5, r0
    stw r0, 0x0(r4)
    lwz r3, 0x50(r3)
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
    stw r0, 0x4(r4)
    blr
}

asm void fn_803A5A10(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r5
    stw r30, 0x8(r1)
    mr r30, r4
    lwz r4, 0xc(r5)
    lwz r3, 0x88(r3)
    bl fn_803CC6B4
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_803A5A10_00000938
    lwz r3, lbl_8087F048
    lwz r4, 0x8(r4)
    bl fn_80109828
lbl_fn_803A5A10_00000938:
    lwz r0, 0x0(r31)
    lis r3, lbl_8074ED24@ha
    li r4, 0x0
    stw r4, 0x4(r30)
    slwi r0, r0, 2
    addi r3, r3, lbl_8074ED24@l
    lwzx r0, r3, r0
    add r0, r31, r0
    stw r0, 0x0(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803A5A8C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    lwz r0, 0x8(r5)
    mr r28, r3
    mr r29, r4
    mr r30, r5
    cmplwi r0, 0xb
    li r31, 0x0
    bgt lbl_fn_803A5A8C_00000B3C
    lis r3, jumptable_8078AFE0@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_8078AFE0@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lwz r3, lbl_8087F098
    cmpwi r3, 0x0
    beq lbl_fn_803A5A8C_000009DC
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803A5A8C_000009DC
    li r31, 0x1
    b lbl_fn_803A5A8C_00000B3C
lbl_fn_803A5A8C_000009DC:
    bl fn_8018059C
    cmpwi r3, 0x0
    beq lbl_fn_803A5A8C_00000B3C
    bl fn_8018059C
    lwz r0, 0x14b0(r3)
    cmpwi r0, 0x5
    beq lbl_fn_803A5A8C_00000B3C
    li r31, 0x1
    b lbl_fn_803A5A8C_00000B3C
    lwz r3, lbl_8087F098
    cmpwi r3, 0x0
    beq lbl_fn_803A5A8C_00000A58
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803A5A8C_00000A58
    cmpwi r0, 0x2
    bne lbl_fn_803A5A8C_00000A28
    li r31, 0x4
    b lbl_fn_803A5A8C_00000B3C
lbl_fn_803A5A8C_00000A28:
    lwz r0, 0x50(r3)
    cmpwi r0, 0x0
    ble lbl_fn_803A5A8C_00000A3C
    li r31, 0x3
    b lbl_fn_803A5A8C_00000B3C
lbl_fn_803A5A8C_00000A3C:
    lwz r0, 0x4c(r3)
    cmpwi r0, 0x0
    ble lbl_fn_803A5A8C_00000A50
    li r31, 0x2
    b lbl_fn_803A5A8C_00000B3C
lbl_fn_803A5A8C_00000A50:
    li r31, 0x1
    b lbl_fn_803A5A8C_00000B3C
lbl_fn_803A5A8C_00000A58:
    bl fn_8018059C
    cmpwi r3, 0x0
    beq lbl_fn_803A5A8C_00000B3C
    bl fn_8018059C
    lwz r31, 0x14b0(r3)
    b lbl_fn_803A5A8C_00000B3C
    lwz r3, lbl_8087F098
    cmpwi r3, 0x0
    beq lbl_fn_803A5A8C_00000A90
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803A5A8C_00000A90
    lwz r31, 0x5c(r3)
    b lbl_fn_803A5A8C_00000B3C
lbl_fn_803A5A8C_00000A90:
    bl fn_8018059C
    cmpwi r3, 0x0
    beq lbl_fn_803A5A8C_00000B3C
    bl fn_8018059C
    lwz r0, 0x14c0(r3)
    cmpwi r0, 0x0
    blt lbl_fn_803A5A8C_00000ABC
    lwz r3, 0x14b4(r3)
    slwi r0, r0, 2
    lwzx r31, r3, r0
    b lbl_fn_803A5A8C_00000B3C
lbl_fn_803A5A8C_00000ABC:
    li r31, 0x0
    b lbl_fn_803A5A8C_00000B3C
    lwz r3, lbl_8087F0A8
    lfs f0, 0x4e4(r3)
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r31, 0xc(r1)
    b lbl_fn_803A5A8C_00000B3C
    lwz r3, lbl_8087F0A8
    lfs f0, 0x4e0(r3)
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r31, 0xc(r1)
    b lbl_fn_803A5A8C_00000B3C
    lwz r3, lbl_8087F0A8
    lfs f0, lbl_80885BA4
    lfs f1, 0x4e8(r3)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r31, 0xc(r1)
    b lbl_fn_803A5A8C_00000B3C
    lwz r3, lbl_8087F0A8
    lwz r31, 0x580(r3)
    b lbl_fn_803A5A8C_00000B3C
    lwz r3, lbl_8087F0A8
    lwz r31, 0x57c(r3)
    b lbl_fn_803A5A8C_00000B3C
    lwz r3, lbl_8087F098
    cmpwi r3, 0x0
    beq lbl_fn_803A5A8C_00000B3C
    lwz r31, 0x1b8(r3)
lbl_fn_803A5A8C_00000B3C:
    lwz r3, lbl_8087F430
    lwz r4, 0x10(r30)
    cmpwi r3, 0x0
    lwz r5, 0xc(r30)
    beq lbl_fn_803A5A8C_00000B88
    lwz r27, 0x37c(r28)
    li r0, 0x0
    cmpwi r5, 0x1
    stw r0, 0x37c(r28)
    bne lbl_fn_803A5A8C_00000B74
    mr r5, r31
    li r6, 0x0
    bl fn_80370320
    b lbl_fn_803A5A8C_00000B7C
lbl_fn_803A5A8C_00000B74:
    mr r5, r31
    bl fn_80370AE4
lbl_fn_803A5A8C_00000B7C:
    li r0, 0x1
    stw r0, 0xf0(r28)
    stw r27, 0x37c(r28)
lbl_fn_803A5A8C_00000B88:
    lwz r0, 0x0(r30)
    lis r3, lbl_8074ED24@ha
    li r4, 0x0
    stw r4, 0x4(r29)
    slwi r0, r0, 2
    addi r3, r3, lbl_8074ED24@l
    lwzx r0, r3, r0
    addi r11, r1, 0x30
    add r0, r30, r0
    stw r0, 0x0(r29)
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_803A5CDC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    lwz r0, 0x10(r5)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    lwz r29, 0xc(r5)
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    bne lbl_fn_803A5CDC_00000C00
    li r29, 0x0
    b lbl_fn_803A5CDC_00000C4C
lbl_fn_803A5CDC_00000C00:
    cmpwi r0, 0x2
    bne lbl_fn_803A5CDC_00000C18
    mr r4, r29
    bl fn_80370174
    mr r29, r3
    b lbl_fn_803A5CDC_00000C4C
lbl_fn_803A5CDC_00000C18:
    cmpwi r0, 0x1
    bne lbl_fn_803A5CDC_00000C30
    mr r4, r29
    bl fn_80370A78
    mr r29, r3
    b lbl_fn_803A5CDC_00000C4C
lbl_fn_803A5CDC_00000C30:
    cmpwi r0, 0x3
    bne lbl_fn_803A5CDC_00000C4C
    bl fn_80680CF8
    divw r0, r3, r29
    mullw r0, r0, r29
    subf r3, r0, r3
    addi r29, r3, 0x1
lbl_fn_803A5CDC_00000C4C:
    lwz r0, 0x8(r31)
    cmplwi r0, 0xb
    bgt lbl_fn_803A5CDC_00000DBC
    lis r3, jumptable_8078B010@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_8078B010@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lwz r3, lbl_8087F098
    cmpwi r3, 0x0
    beq lbl_fn_803A5CDC_00000C8C
    cmpwi r29, 0x0
    beq lbl_fn_803A5CDC_00000C8C
    bl fn_801826E0
    b lbl_fn_803A5CDC_00000DBC
lbl_fn_803A5CDC_00000C8C:
    bl fn_80182890
    b lbl_fn_803A5CDC_00000DBC
    lwz r3, lbl_8087F098
    cmpwi r3, 0x0
    beq lbl_fn_803A5CDC_00000DBC
    mr r4, r29
    bl fn_80183618
    b lbl_fn_803A5CDC_00000DBC
    lwz r3, lbl_8087F098
    cmpwi r3, 0x0
    beq lbl_fn_803A5CDC_00000DBC
    mr r4, r29
    bl fn_80183588
    b lbl_fn_803A5CDC_00000DBC
    lwz r3, lbl_8087F0A8
    stw r29, 0x514(r3)
    b lbl_fn_803A5CDC_00000DBC
    xoris r3, r29, 0x8000
    lis r0, 0x4330
    stw r3, 0xc(r1)
    lis r4, lbl_8074F5E8@ha
    lfd f1, lbl_8074F5E8@l(r4)
    stw r0, 0x8(r1)
    lwz r3, lbl_8087F0A8
    lfd f0, 0x8(r1)
    fsubs f0, f0, f1
    stfs f0, 0x4e4(r3)
    b lbl_fn_803A5CDC_00000DBC
    xoris r3, r29, 0x8000
    lis r0, 0x4330
    stw r3, 0xc(r1)
    lis r4, lbl_8074F5E8@ha
    lfd f1, lbl_8074F5E8@l(r4)
    stw r0, 0x8(r1)
    lwz r3, lbl_8087F0A8
    lfd f0, 0x8(r1)
    fsubs f0, f0, f1
    stfs f0, 0x4e0(r3)
    b lbl_fn_803A5CDC_00000DBC
    xoris r3, r29, 0x8000
    lis r0, 0x4330
    stw r3, 0xc(r1)
    lis r4, lbl_8074F5E8@ha
    lfd f2, lbl_8074F5E8@l(r4)
    stw r0, 0x8(r1)
    lfs f0, lbl_80885BA8
    lfd f1, 0x8(r1)
    lwz r3, lbl_8087F0A8
    fsubs f1, f1, f2
    fmuls f0, f0, f1
    stfs f0, 0x4e8(r3)
    b lbl_fn_803A5CDC_00000DBC
    bl fn_8018059C
    cmpwi r3, 0x0
    beq lbl_fn_803A5CDC_00000DBC
    cmpwi r29, 0x1
    bne lbl_fn_803A5CDC_00000D7C
    bl fn_8018059C
    bl fn_80181284
    b lbl_fn_803A5CDC_00000DBC
lbl_fn_803A5CDC_00000D7C:
    cmpwi r29, 0x0
    bne lbl_fn_803A5CDC_00000DBC
    bl fn_8018059C
    bl fn_8018120C
    b lbl_fn_803A5CDC_00000DBC
    lwz r3, lbl_8087F0A8
    stw r29, 0x580(r3)
    b lbl_fn_803A5CDC_00000DBC
    lwz r3, lbl_8087F0A8
    stw r29, 0x57c(r3)
    b lbl_fn_803A5CDC_00000DBC
    lwz r3, lbl_8087F098
    cmpwi r3, 0x0
    beq lbl_fn_803A5CDC_00000DBC
    mr r4, r29
    bl fn_80183774
lbl_fn_803A5CDC_00000DBC:
    lwz r0, 0x0(r31)
    lis r3, lbl_8074ED24@ha
    li r4, 0x0
    stw r4, 0x4(r30)
    slwi r0, r0, 2
    addi r3, r3, lbl_8074ED24@l
    lwzx r0, r3, r0
    add r0, r31, r0
    stw r0, 0x0(r30)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803A5F14(void)
{
    nofralloc
    lwz r0, 0x8(r5)
    li r6, 0x0
    cmpwi r0, 0x0
    beq lbl_fn_803A5F14_00000E18
    cmpwi r0, 0x1
    beq lbl_fn_803A5F14_00000E24
    b lbl_fn_803A5F14_00000E38
lbl_fn_803A5F14_00000E18:
    lwz r3, lbl_8087EFB4
    lwz r6, 0x10(r3)
    b lbl_fn_803A5F14_00000E38
lbl_fn_803A5F14_00000E24:
    lwz r6, lbl_8087EFB4
    lwz r3, lbl_8087EFA8
    lwz r6, 0xc(r6)
    lwz r0, 0xc(r5)
    stw r0, 0x104(r3)
lbl_fn_803A5F14_00000E38:
    cmpwi r6, 0x0
    beq lbl_fn_803A5F14_00000E48
    lwz r0, 0xc(r5)
    stw r0, 0x4(r6)
lbl_fn_803A5F14_00000E48:
    lwz r0, 0x0(r5)
    lis r3, lbl_8074ED24@ha
    li r6, 0x0
    stw r6, 0x4(r4)
    slwi r0, r0, 2
    addi r3, r3, lbl_8074ED24@l
    lwzx r0, r3, r0
    add r0, r5, r0
    stw r0, 0x0(r4)
    blr
}

asm void fn_803A5F88(void)
{
    nofralloc
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_803A5F88_00000E84
    lwz r3, 0x48(r3)
    b lbl_fn_803A5F88_00000E88
lbl_fn_803A5F88_00000E84:
    li r3, 0x0
lbl_fn_803A5F88_00000E88:
    cmpwi r3, 0x0
    beq lbl_fn_803A5F88_00000EB8
    lwz r0, 0x8(r5)
    cmpwi r0, 0x0
    bne lbl_fn_803A5F88_00000EAC
    lwz r0, 0x54c(r3)
    ori r0, r0, 0x10
    stw r0, 0x54c(r3)
    b lbl_fn_803A5F88_00000EB8
lbl_fn_803A5F88_00000EAC:
    lwz r0, 0x54c(r3)
    rlwinm r0, r0, 0, 28, 26
    stw r0, 0x54c(r3)
lbl_fn_803A5F88_00000EB8:
    lwz r0, 0x0(r5)
    lis r3, lbl_8074ED24@ha
    li r6, 0x0
    stw r6, 0x4(r4)
    slwi r0, r0, 2
    addi r3, r3, lbl_8074ED24@l
    lwzx r0, r3, r0
    add r0, r5, r0
    stw r0, 0x0(r4)
    blr
}

asm void fn_803A5FF8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    li r0, 0x0
    stw r31, 0x1c(r1)
    mr r31, r5
    lwz r6, 0x18(r31)
    stw r30, 0x18(r1)
    mr r30, r4
    lwz r7, 0x10(r31)
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r8, 0x14(r31)
    stw r0, 0x4(r4)
    lwz r4, 0x8(r5)
    lwz r5, 0xc(r5)
    bl fn_8039C7F0
    cmpwi r3, 0x0
    beq lbl_fn_803A5FF8_00000F4C
    lwz r0, 0x0(r31)
    lis r3, lbl_8074ED24@ha
    addi r3, r3, lbl_8074ED24@l
    slwi r0, r0, 2
    lwzx r0, r3, r0
    add r0, r31, r0
    stw r0, 0x0(r30)
    b lbl_fn_803A5FF8_00001098
lbl_fn_803A5FF8_00000F4C:
    lwz r3, 0x94(r29)
    li r5, 0x0
    lwz r4, 0xcc(r3)
    addi r6, r3, 0xd0
    cmpwi r4, 0x0
    beq lbl_fn_803A5FF8_00001024
    cmplwi r4, 0x8
    subi r7, r4, 0x8
    ble lbl_fn_803A5FF8_00000FF8
    addi r0, r7, 0x7
    lis r3, lbl_8074ED24@ha
    srwi r0, r0, 3
    addi r3, r3, lbl_8074ED24@l
    mtctr r0
    cmplwi r7, 0x0
    ble lbl_fn_803A5FF8_00000FF8
lbl_fn_803A5FF8_00000F8C:
    lwz r0, 0x0(r6)
    addi r5, r5, 0x8
    slwi r0, r0, 2
    lwzx r0, r3, r0
    lwzux r0, r6, r0
    slwi r0, r0, 2
    lwzx r0, r3, r0
    lwzux r0, r6, r0
    slwi r0, r0, 2
    lwzx r0, r3, r0
    lwzux r0, r6, r0
    slwi r0, r0, 2
    lwzx r0, r3, r0
    lwzux r0, r6, r0
    slwi r0, r0, 2
    lwzx r0, r3, r0
    lwzux r0, r6, r0
    slwi r0, r0, 2
    lwzx r0, r3, r0
    lwzux r0, r6, r0
    slwi r0, r0, 2
    lwzx r0, r3, r0
    lwzux r0, r6, r0
    slwi r0, r0, 2
    lwzx r0, r3, r0
    add r6, r6, r0
    bdnz lbl_fn_803A5FF8_00000F8C
lbl_fn_803A5FF8_00000FF8:
    lis r3, lbl_8074ED24@ha
    subf r0, r5, r4
    addi r3, r3, lbl_8074ED24@l
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_803A5FF8_00001024
lbl_fn_803A5FF8_00001010:
    lwz r0, 0x0(r6)
    slwi r0, r0, 2
    lwzx r0, r3, r0
    add r6, r6, r0
    bdnz lbl_fn_803A5FF8_00001010
lbl_fn_803A5FF8_00001024:
    lwz r0, 0x0(r31)
    lis r3, lbl_8074ED24@ha
    addi r3, r3, lbl_8074ED24@l
    li r4, 0x0
    slwi r0, r0, 2
    lwzx r0, r3, r0
    add r5, r31, r0
    b lbl_fn_803A5FF8_0000108C
lbl_fn_803A5FF8_00001044:
    lwz r0, 0x4(r5)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_fn_803A5FF8_0000107C
    lwz r0, 0x0(r5)
    cmplwi r0, 0x44
    bne lbl_fn_803A5FF8_00001068
    addi r4, r4, 0x1
    b lbl_fn_803A5FF8_0000107C
lbl_fn_803A5FF8_00001068:
    cmplwi r0, 0x45
    bne lbl_fn_803A5FF8_0000107C
    cmpwi r4, 0x0
    ble lbl_fn_803A5FF8_00001094
    subi r4, r4, 0x1
lbl_fn_803A5FF8_0000107C:
    lwz r0, 0x0(r5)
    slwi r0, r0, 2
    lwzx r0, r3, r0
    add r5, r5, r0
lbl_fn_803A5FF8_0000108C:
    cmplw r5, r6
    bne lbl_fn_803A5FF8_00001044
lbl_fn_803A5FF8_00001094:
    stw r5, 0x0(r30)
lbl_fn_803A5FF8_00001098:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803A61CC(void)
{
    nofralloc
    lwz r0, 0x0(r5)
    lis r3, lbl_8074ED24@ha
    li r6, 0x0
    stw r6, 0x4(r4)
    slwi r0, r0, 2
    addi r3, r3, lbl_8074ED24@l
    lwzx r0, r3, r0
    add r0, r5, r0
    stw r0, 0x0(r4)
    blr
}

asm void fn_803A61F4(void)
{
    nofralloc
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_803A61F4_000010F0
    lwz r0, 0x8(r5)
    stw r0, 0x5664(r3)
lbl_fn_803A61F4_000010F0:
    lwz r0, 0x0(r5)
    lis r3, lbl_8074ED24@ha
    li r6, 0x0
    stw r6, 0x4(r4)
    slwi r0, r0, 2
    addi r3, r3, lbl_8074ED24@l
    lwzx r0, r3, r0
    add r0, r5, r0
    stw r0, 0x0(r4)
    blr
}

asm void fn_803A6230(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lwz r6, 0x8(r5)
    li r8, 0x0
    stw r0, 0x24(r1)
    cmpwi r6, 0x0
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bgt lbl_fn_803A6230_00001160
    lwz r3, lbl_8087F540
    lwz r3, 0x70(r3)
    cmpwi r3, 0x0
    beq lbl_fn_803A6230_00001160
    lwz r6, 0x190(r3)
lbl_fn_803A6230_00001160:
    cmpwi r6, 0x0
    ble lbl_fn_803A6230_000011B4
    lwz r0, 0xc(r5)
    cmpwi r0, 0x0
    beq lbl_fn_803A6230_00001180
    cmpwi r0, 0x1
    beq lbl_fn_803A6230_0000119C
    b lbl_fn_803A6230_000011B4
lbl_fn_803A6230_00001180:
    lwz r3, lbl_8087F540
    mr r4, r6
    bl fn_8047F268
    neg r0, r3
    or r0, r0, r3
    srwi r8, r0, 31
    b lbl_fn_803A6230_000011B4
lbl_fn_803A6230_0000119C:
    lwz r3, lbl_8087F540
    mr r4, r6
    bl fn_8047F2EC
    neg r0, r3
    or r0, r0, r3
    srwi r8, r0, 31
lbl_fn_803A6230_000011B4:
    lwz r4, 0x10(r31)
    mr r3, r29
    lwz r5, 0x14(r31)
    li r6, 0x0
    li r7, 0x0
    bl fn_8039BF04
    lwz r0, 0x0(r31)
    lis r3, lbl_8074ED24@ha
    li r4, 0x0
    stw r4, 0x4(r30)
    slwi r0, r0, 2
    addi r3, r3, lbl_8074ED24@l
    lwzx r0, r3, r0
    add r0, r31, r0
    stw r0, 0x0(r30)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803A6324(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r8, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r5
    stw r30, 0x8(r1)
    mr r30, r4
    lwz r6, lbl_8087EE78
    cmpwi r6, 0x0
    beq lbl_fn_803A6324_000012A8
    lwz r0, 0x8(r5)
    cmpwi r0, 0x0
    beq lbl_fn_803A6324_00001270
    cmpwi r0, 0x1
    beq lbl_fn_803A6324_00001284
    cmpwi r0, 0x2
    beq lbl_fn_803A6324_0000128C
    cmpwi r0, 0x3
    beq lbl_fn_803A6324_00001294
    cmpwi r0, 0x4
    beq lbl_fn_803A6324_0000129C
    cmpwi r0, 0x5
    beq lbl_fn_803A6324_000012A4
    b lbl_fn_803A6324_000012A8
lbl_fn_803A6324_00001270:
    lwz r4, 0x48(r6)
    subi r0, r4, 0x1
    cntlzw r0, r0
    srwi r8, r0, 5
    b lbl_fn_803A6324_000012A8
lbl_fn_803A6324_00001284:
    lwz r8, 0x58(r6)
    b lbl_fn_803A6324_000012A8
lbl_fn_803A6324_0000128C:
    lwz r8, 0x5c(r6)
    b lbl_fn_803A6324_000012A8
lbl_fn_803A6324_00001294:
    lwz r8, 0x2a8(r6)
    b lbl_fn_803A6324_000012A8
lbl_fn_803A6324_0000129C:
    lwz r8, 0x2ac(r6)
    b lbl_fn_803A6324_000012A8
lbl_fn_803A6324_000012A4:
    lwz r8, 0x2b4(r6)
lbl_fn_803A6324_000012A8:
    lwz r4, 0xc(r5)
    li r6, 0x0
    lwz r5, 0x10(r5)
    li r7, 0x0
    bl fn_8039BF04
    lwz r0, 0x0(r31)
    lis r3, lbl_8074ED24@ha
    li r4, 0x0
    stw r4, 0x4(r30)
    slwi r0, r0, 2
    addi r3, r3, lbl_8074ED24@l
    lwzx r0, r3, r0
    add r0, r31, r0
    stw r0, 0x0(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803A6410(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    lwz r0, 0xc(r5)
    stw r31, 0x1c(r1)
    lwz r31, 0x10(r5)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    bne lbl_fn_803A6410_00001338
    li r31, 0x0
    b lbl_fn_803A6410_00001384
lbl_fn_803A6410_00001338:
    cmpwi r0, 0x2
    bne lbl_fn_803A6410_00001350
    mr r4, r31
    bl fn_80370174
    mr r31, r3
    b lbl_fn_803A6410_00001384
lbl_fn_803A6410_00001350:
    cmpwi r0, 0x1
    bne lbl_fn_803A6410_00001368
    mr r4, r31
    bl fn_80370A78
    mr r31, r3
    b lbl_fn_803A6410_00001384
lbl_fn_803A6410_00001368:
    cmpwi r0, 0x3
    bne lbl_fn_803A6410_00001384
    bl fn_80680CF8
    divw r0, r3, r31
    mullw r0, r0, r31
    subf r3, r0, r3
    addi r31, r3, 0x1
lbl_fn_803A6410_00001384:
    lwz r3, lbl_8087F430
    lwz r28, 0x18(r30)
    cmpwi r3, 0x0
    lwz r0, 0x14(r30)
    bne lbl_fn_803A6410_000013A0
    li r3, 0x0
    b lbl_fn_803A6410_000013E8
lbl_fn_803A6410_000013A0:
    cmpwi r0, 0x2
    bne lbl_fn_803A6410_000013B4
    mr r4, r28
    bl fn_80370174
    b lbl_fn_803A6410_000013E8
lbl_fn_803A6410_000013B4:
    cmpwi r0, 0x1
    bne lbl_fn_803A6410_000013C8
    mr r4, r28
    bl fn_80370A78
    b lbl_fn_803A6410_000013E8
lbl_fn_803A6410_000013C8:
    cmpwi r0, 0x3
    bne lbl_fn_803A6410_000013E4
    bl fn_80680CF8
    divw r0, r3, r28
    mullw r0, r0, r28
    subf r3, r0, r3
    addi r28, r3, 0x1
lbl_fn_803A6410_000013E4:
    mr r3, r28
lbl_fn_803A6410_000013E8:
    lwz r4, lbl_8087EE78
    cmpwi r4, 0x0
    beq lbl_fn_803A6410_00001554
    lwz r0, 0x8(r30)
    cmplwi r0, 0xf
    bgt lbl_fn_803A6410_00001554
    lis r5, jumptable_8078B040@ha
    slwi r0, r0, 2
    addi r5, r5, jumptable_8078B040@l
    lwzx r5, r5, r0
    mtctr r5
    bctr
    cmpwi r31, 0x0
    beq lbl_fn_803A6410_0000142C
    mr r3, r4
    bl fn_80043B34
    b lbl_fn_803A6410_00001554
lbl_fn_803A6410_0000142C:
    mr r3, r4
    bl fn_80043BDC
    b lbl_fn_803A6410_00001554
    stw r31, 0x58(r4)
    b lbl_fn_803A6410_00001554
    stw r31, 0x5c(r4)
    b lbl_fn_803A6410_00001554
    stw r31, 0x2a8(r4)
    b lbl_fn_803A6410_00001554
    stw r31, 0x2ac(r4)
    b lbl_fn_803A6410_00001554
    stw r31, 0x2b4(r4)
    li r0, 0x1
    stw r0, 0x2c8(r4)
    b lbl_fn_803A6410_00001554
    stw r31, 0x3dc(r4)
    b lbl_fn_803A6410_00001554
    stw r31, 0x3e0(r4)
    b lbl_fn_803A6410_00001554
    li r0, 0x0
    stw r0, 0x2cc(r4)
    b lbl_fn_803A6410_00001554
    lwz r0, 0x2cc(r4)
    slwi r0, r0, 3
    add r0, r4, r0
    addic. r5, r0, 0x2d0
    beq lbl_fn_803A6410_000014A0
    stw r31, 0x0(r5)
    stw r3, 0x4(r5)
lbl_fn_803A6410_000014A0:
    lwz r3, 0x2cc(r4)
    addi r0, r3, 0x1
    stw r0, 0x2cc(r4)
    b lbl_fn_803A6410_00001554
    li r0, 0x0
    stw r0, 0x310(r4)
    b lbl_fn_803A6410_00001554
    lwz r0, 0x310(r4)
    slwi r0, r0, 3
    add r0, r4, r0
    addic. r5, r0, 0x314
    beq lbl_fn_803A6410_000014D8
    stw r31, 0x0(r5)
    stw r3, 0x4(r5)
lbl_fn_803A6410_000014D8:
    lwz r3, 0x310(r4)
    addi r0, r3, 0x1
    stw r0, 0x310(r4)
    b lbl_fn_803A6410_00001554
    li r0, 0x0
    stw r0, 0x354(r4)
    b lbl_fn_803A6410_00001554
    lwz r0, 0x354(r4)
    slwi r0, r0, 3
    add r0, r4, r0
    addic. r5, r0, 0x358
    beq lbl_fn_803A6410_00001510
    stw r31, 0x0(r5)
    stw r3, 0x4(r5)
lbl_fn_803A6410_00001510:
    lwz r3, 0x354(r4)
    addi r0, r3, 0x1
    stw r0, 0x354(r4)
    b lbl_fn_803A6410_00001554
    li r0, 0x0
    stw r0, 0x398(r4)
    b lbl_fn_803A6410_00001554
    lwz r0, 0x398(r4)
    slwi r0, r0, 3
    add r0, r4, r0
    addic. r5, r0, 0x39c
    beq lbl_fn_803A6410_00001548
    stw r31, 0x0(r5)
    stw r3, 0x4(r5)
lbl_fn_803A6410_00001548:
    lwz r3, 0x398(r4)
    addi r0, r3, 0x1
    stw r0, 0x398(r4)
lbl_fn_803A6410_00001554:
    lwz r0, 0x0(r30)
    lis r3, lbl_8074ED24@ha
    li r4, 0x0
    stw r4, 0x4(r29)
    slwi r0, r0, 2
    addi r3, r3, lbl_8074ED24@l
    lwzx r0, r3, r0
    add r0, r30, r0
    stw r0, 0x0(r29)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803A66B0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r5
    stw r30, 0x8(r1)
    mr r30, r4
    lwz r4, 0x10(r5)
    lwz r3, lbl_8087F128
    cmpwi r3, 0x0
    beq lbl_fn_803A66B0_000015F0
    cmpwi r4, 0x0
    beq lbl_fn_803A66B0_000015DC
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    b lbl_fn_803A66B0_000015E8
lbl_fn_803A66B0_000015DC:
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_803A66B0_000015E8:
    lwz r3, lbl_8087F128
    bl fn_801EB8C0
lbl_fn_803A66B0_000015F0:
    lwz r0, 0x0(r31)
    lis r3, lbl_8074ED24@ha
    li r4, 0x0
    stw r4, 0x4(r30)
    slwi r0, r0, 2
    addi r3, r3, lbl_8074ED24@l
    lwzx r0, r3, r0
    add r0, r31, r0
    stw r0, 0x0(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803A6744(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r4
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    mr r29, r5
    lwz r7, lbl_8087FA20
    cmpwi r7, 0x0
    beq lbl_fn_803A6744_00001760
    lwz r0, 0xc(r5)
    li r6, 0x0
    lwz r30, 0x258(r7)
    cmpwi r0, 0x0
    lwz r4, 0x10(r5)
    beq lbl_fn_803A6744_0000168C
    cmpwi r0, 0x1
    beq lbl_fn_803A6744_000016B8
    cmpwi r0, 0x2
    beq lbl_fn_803A6744_000016F0
    cmpwi r0, 0x3
    beq lbl_fn_803A6744_00001700
    b lbl_fn_803A6744_0000170C
lbl_fn_803A6744_0000168C:
    lwz r0, 0xdc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803A6744_000016A4
    lwz r3, lbl_8087F8A0
    lwz r3, 0x48(r3)
    b lbl_fn_803A6744_000016B0
lbl_fn_803A6744_000016A4:
    lwz r3, lbl_8087F8A0
    li r4, 0x1
    bl fn_8011F8F4
lbl_fn_803A6744_000016B0:
    mr r6, r3
    b lbl_fn_803A6744_0000170C
lbl_fn_803A6744_000016B8:
    lwz r3, lbl_8087F890
    bl fn_8011FE3C
    lwz r0, lbl_8087FA20
    mr r6, r3
    cmpwi r0, 0x0
    beq lbl_fn_803A6744_0000170C
    cmpwi r3, 0x0
    beq lbl_fn_803A6744_0000170C
    lwz r0, 0x38(r3)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_803A6744_0000170C
    li r6, 0x0
    b lbl_fn_803A6744_0000170C
lbl_fn_803A6744_000016F0:
    lwz r3, lbl_8087F408
    bl fn_8011FC10
    mr r6, r3
    b lbl_fn_803A6744_0000170C
lbl_fn_803A6744_00001700:
    lwz r3, lbl_8087F8A0
    bl fn_8011F91C
    mr r6, r3
lbl_fn_803A6744_0000170C:
    lwz r0, 0x8(r29)
    cmpwi r0, 0x0
    beq lbl_fn_803A6744_00001724
    cmpwi r0, 0x1
    beq lbl_fn_803A6744_00001754
    b lbl_fn_803A6744_00001760
lbl_fn_803A6744_00001724:
    lfs f1, lbl_80885B10
    mr r3, r30
    lfs f2, lbl_80885BAC
    mr r4, r6
    lfs f0, lbl_80885B30
    addi r5, r1, 0x8
    stfs f2, 0x8(r1)
    stfs f1, 0xc(r1)
    stfs f1, 0x10(r1)
    stfs f0, 0x14(r1)
    bl fn_804AAD68
    b lbl_fn_803A6744_00001760
lbl_fn_803A6744_00001754:
    mr r3, r30
    mr r4, r6
    bl fn_804AAFCC
lbl_fn_803A6744_00001760:
    lwz r0, 0x0(r29)
    lis r3, lbl_8074ED24@ha
    li r4, 0x0
    stw r4, 0x4(r31)
    slwi r0, r0, 2
    addi r3, r3, lbl_8074ED24@l
    lwzx r0, r3, r0
    add r0, r29, r0
    stw r0, 0x0(r31)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_803A68B8(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    lwz r0, 0xc(r5)
    stmw r25, 0x34(r1)
    mr r27, r3
    lwz r31, 0x10(r5)
    mr r25, r4
    mr r26, r5
    lwz r6, lbl_8087F430
    cmpwi r6, 0x0
    bne lbl_fn_803A68B8_000017D8
    li r31, 0x0
    b lbl_fn_803A68B8_0000182C
lbl_fn_803A68B8_000017D8:
    cmpwi r0, 0x2
    bne lbl_fn_803A68B8_000017F4
    mr r3, r6
    mr r4, r31
    bl fn_80370174
    mr r31, r3
    b lbl_fn_803A68B8_0000182C
lbl_fn_803A68B8_000017F4:
    cmpwi r0, 0x1
    bne lbl_fn_803A68B8_00001810
    mr r3, r6
    mr r4, r31
    bl fn_80370A78
    mr r31, r3
    b lbl_fn_803A68B8_0000182C
lbl_fn_803A68B8_00001810:
    cmpwi r0, 0x3
    bne lbl_fn_803A68B8_0000182C
    bl fn_80680CF8
    divw r0, r3, r31
    mullw r0, r0, r31
    subf r3, r0, r3
    addi r31, r3, 0x1
lbl_fn_803A68B8_0000182C:
    lwz r0, lbl_8087F558
    cmpwi r0, 0x0
    beq lbl_fn_803A68B8_00001A4C
    addi r3, r1, 0x8
    addi r4, r26, 0x14
    li r5, 0x20
    bl memcpy
    addi r3, r1, 0x8
    li r29, -0x1
    li r28, 0x0
    bl fn_800DC6B4
    li r0, 0x10
    mr r4, r27
    li r5, 0x0
    mtctr r0
lbl_fn_803A68B8_00001868:
    lwz r0, 0x154(r4)
    cmplw r3, r0
    bne lbl_fn_803A68B8_00001884
    slwi r0, r5, 3
    add r4, r27, r0
    addi r28, r4, 0x154
    b lbl_fn_803A68B8_00001940
lbl_fn_803A68B8_00001884:
    cmpwi r0, 0x0
    bne lbl_fn_803A68B8_00001898
    cmpwi r29, -0x1
    bne lbl_fn_803A68B8_00001898
    mr r29, r5
lbl_fn_803A68B8_00001898:
    lwz r0, 0x15c(r4)
    addi r5, r5, 0x1
    cmplw r3, r0
    bne lbl_fn_803A68B8_000018B8
    slwi r0, r5, 3
    add r4, r27, r0
    addi r28, r4, 0x154
    b lbl_fn_803A68B8_00001940
lbl_fn_803A68B8_000018B8:
    cmpwi r0, 0x0
    bne lbl_fn_803A68B8_000018CC
    cmpwi r29, -0x1
    bne lbl_fn_803A68B8_000018CC
    mr r29, r5
lbl_fn_803A68B8_000018CC:
    lwz r0, 0x164(r4)
    addi r5, r5, 0x1
    cmplw r3, r0
    bne lbl_fn_803A68B8_000018EC
    slwi r0, r5, 3
    add r4, r27, r0
    addi r28, r4, 0x154
    b lbl_fn_803A68B8_00001940
lbl_fn_803A68B8_000018EC:
    cmpwi r0, 0x0
    bne lbl_fn_803A68B8_00001900
    cmpwi r29, -0x1
    bne lbl_fn_803A68B8_00001900
    mr r29, r5
lbl_fn_803A68B8_00001900:
    lwz r0, 0x16c(r4)
    addi r5, r5, 0x1
    cmplw r3, r0
    bne lbl_fn_803A68B8_00001920
    slwi r0, r5, 3
    add r4, r27, r0
    addi r28, r4, 0x154
    b lbl_fn_803A68B8_00001940
lbl_fn_803A68B8_00001920:
    cmpwi r0, 0x0
    bne lbl_fn_803A68B8_00001934
    cmpwi r29, -0x1
    bne lbl_fn_803A68B8_00001934
    mr r29, r5
lbl_fn_803A68B8_00001934:
    addi r4, r4, 0x20
    addi r5, r5, 0x1
    bdnz lbl_fn_803A68B8_00001868
lbl_fn_803A68B8_00001940:
    cmpwi r28, 0x0
    bne lbl_fn_803A68B8_0000195C
    cmpwi r29, 0x0
    blt lbl_fn_803A68B8_0000195C
    slwi r0, r29, 3
    add r28, r27, r0
    stwu r3, 0x154(r28)
lbl_fn_803A68B8_0000195C:
    lwz r3, lbl_8087F558
    li r27, 0x0
    addi r30, r3, 0x48
    mr r29, r30
    b lbl_fn_803A68B8_00001A40
lbl_fn_803A68B8_00001970:
    lwz r0, 0x8(r26)
    lwz r3, 0x4(r29)
    cmpwi r0, 0x0
    beq lbl_fn_803A68B8_0000198C
    cmpwi r0, 0x1
    beq lbl_fn_803A68B8_000019D4
    b lbl_fn_803A68B8_00001A38
lbl_fn_803A68B8_0000198C:
    mr r5, r31
    addi r4, r1, 0x8
    bl fn_804A0E18
    cmpwi r28, 0x0
    beq lbl_fn_803A68B8_00001A38
    cmpwi r31, 0x0
    beq lbl_fn_803A68B8_000019B8
    lwz r0, 0x4(r28)
    ori r0, r0, 0x1
    stw r0, 0x4(r28)
    b lbl_fn_803A68B8_000019C4
lbl_fn_803A68B8_000019B8:
    lwz r0, 0x4(r28)
    clrrwi r0, r0, 1
    stw r0, 0x4(r28)
lbl_fn_803A68B8_000019C4:
    lwz r0, 0x4(r28)
    ori r0, r0, 0x2
    stw r0, 0x4(r28)
    b lbl_fn_803A68B8_00001A38
lbl_fn_803A68B8_000019D4:
    addi r5, r1, 0x8
    li r4, 0x4
    bl fn_804A06B4
    cmpwi r3, 0x0
    beq lbl_fn_803A68B8_00001A00
    lwz r0, 0x10c(r3)
    cmpwi r31, 0x0
    rlwinm r4, r0, 0, 22, 20
    beq lbl_fn_803A68B8_000019FC
    ori r4, r0, 0x400
lbl_fn_803A68B8_000019FC:
    bl fn_8049B72C
lbl_fn_803A68B8_00001A00:
    cmpwi r28, 0x0
    beq lbl_fn_803A68B8_00001A38
    cmpwi r31, 0x0
    beq lbl_fn_803A68B8_00001A20
    lwz r0, 0x4(r28)
    ori r0, r0, 0x4
    stw r0, 0x4(r28)
    b lbl_fn_803A68B8_00001A2C
lbl_fn_803A68B8_00001A20:
    lwz r0, 0x4(r28)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x4(r28)
lbl_fn_803A68B8_00001A2C:
    lwz r0, 0x4(r28)
    ori r0, r0, 0x8
    stw r0, 0x4(r28)
lbl_fn_803A68B8_00001A38:
    addi r29, r29, 0x4
    addi r27, r27, 0x1
lbl_fn_803A68B8_00001A40:
    lwz r0, 0x0(r30)
    cmplw r27, r0
    blt lbl_fn_803A68B8_00001970
lbl_fn_803A68B8_00001A4C:
    lwz r0, 0x0(r26)
    lis r3, lbl_8074ED24@ha
    li r4, 0x0
    stw r4, 0x4(r25)
    slwi r0, r0, 2
    addi r3, r3, lbl_8074ED24@l
    lwzx r0, r3, r0
    add r0, r26, r0
    stw r0, 0x0(r25)
    lmw r25, 0x34(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}
