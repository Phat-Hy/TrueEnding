#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_20(void);
extern void _restgpr_22(void);
extern void _restgpr_27(void);
extern void _savegpr_20(void);
extern void _savegpr_22(void);
extern void _savegpr_27(void);
extern void fn_8003EA3C(void);
extern void fn_800697D8(void);
extern void fn_80092814(void);
extern void fn_8009373C(void);
extern void fn_80093B88(void);
extern void fn_800A555C(void);
extern void fn_800C31F4(void);
extern void fn_800CB3A0(void);
extern void fn_800CFD18(void);
extern void fn_800EFBC4(void);
extern void fn_800EFC64(void);
extern void fn_800EFDA0(void);
extern void fn_800F8548(void);
extern void fn_800FAB80(void);
extern void fn_801092C8(void);
extern void fn_8011F8F4(void);
extern void fn_8011F91C(void);
extern void fn_8011FC10(void);
extern void fn_8011FE3C(void);
extern void fn_80161570(void);
extern void fn_80162A08(void);
extern void fn_80163B88(void);
extern void fn_8016939C(void);
extern void fn_801696E0(void);
extern void fn_8016CDB8(void);
extern void fn_8016D3F8(void);
extern void fn_801781B0(void);
extern void fn_80206B9C(void);
extern void fn_80211480(void);
extern void fn_80219E6C(void);
extern void fn_80232B7C(void);
extern void fn_80239DAC(void);
extern void fn_8023A8B4(void);
extern void fn_80370174(void);
extern void fn_80370A78(void);
extern void fn_80373148(void);
extern void fn_80374710(void);
extern void fn_803748E0(void);
extern void fn_80374964(void);
extern void fn_80375194(void);
extern void fn_80376730(void);
extern void fn_803935AC(void);
extern void fn_8039BF04(void);
extern void fn_803C18DC(void);
extern void fn_803E5E64(void);
extern void fn_804439FC(void);
extern void fn_8044441C(void);
extern void fn_804444E8(void);
extern void fn_804A04AC(void);
extern void fn_8059C2AC(void);
extern void fn_805AA4E8(void);
extern void fn_805AA738(void);
extern void fn_805AE9D4(void);
extern void fn_805B4D94(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9920(void);
extern void fn_80680CF8(void);
extern void fn_80682544(void);
extern void fn_80684600(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 jumptable_8078AFAC[];
extern u8 lbl_8074ED24[];
extern u8 lbl_8074EF78[];
extern u8 lbl_8074F8CC[];
extern u8 lbl_807C6B90[];

/* Small data declarations */
extern u32 lbl_8087EEB8;
extern u32 lbl_8087EF70;
extern u32 lbl_8087EFE8;
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F408;
extern u32 lbl_8087F430;
extern u32 lbl_8087F490;
extern u32 lbl_8087F4F0;
extern u32 lbl_8087F890;
extern u32 lbl_8087F8A0;
extern u32 lbl_8087F9C0;
extern u32 lbl_8087F9E8;
extern u32 lbl_8087F9F8;
extern u32 lbl_8087FA00;
extern u32 lbl_8087FA20;
extern u32 lbl_80885B10;
extern u32 lbl_80885B14;
extern u32 lbl_80885B30;

/* Function declarations */
void fn_803A3444(void);
void fn_803A362C(void);
void fn_803A3654(void);
void fn_803A36D8(void);
void fn_803A372C(void);
void fn_803A39F8(void);
void fn_803A3AB4(void);
void fn_803A3BF4(void);
void fn_803A3CA8(void);
void fn_803A3D20(void);
void fn_803A3FFC(void);
void fn_803A4400(void);
void fn_803A4474(void);
void fn_803A450C(void);
void fn_803A4568(void);
void fn_803A47A4(void);
void fn_803A48A8(void);
void fn_803A49F4(void);
void fn_803A4A7C(void);

asm void fn_803A3444(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lfs f0, lbl_80885B30
    stw r0, 0x24(r1)
    li r0, 0x5a
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    lwz r6, lbl_8087F430
    lwz r3, 0x96c(r6)
    srwi r4, r3, 31
    clrlwi r3, r3, 31
    xor r3, r3, r4
    subf r3, r4, r3
    stw r3, 0x96c(r6)
    stw r0, 0x970(r6)
    stfs f0, 0x974(r6)
    stfs f0, 0x978(r6)
    lwz r3, lbl_8087F8A0
    lwz r29, 0x48(r3)
    b lbl_fn_803A3444_000000F4
lbl_fn_803A3444_0000005C:
    lwz r6, 0x38(r29)
    li r4, 0x0
    li r3, 0x0
    li r5, 0x0
    rlwinm r0, r6, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_803A3444_00000088
    clrlwi r0, r6, 31
    cmplwi r0, 0x1
    beq lbl_fn_803A3444_00000088
    li r5, 0x1
lbl_fn_803A3444_00000088:
    cmpwi r5, 0x0
    beq lbl_fn_803A3444_000000A4
    lwz r0, 0x7e0(r29)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_803A3444_000000A4
    li r3, 0x1
lbl_fn_803A3444_000000A4:
    cmpwi r3, 0x0
    beq lbl_fn_803A3444_000000D8
    lwz r0, 0x55c(r29)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_803A3444_000000CC
    lwz r0, 0x560(r29)
    cmpwi r0, 0x1c
    bne lbl_fn_803A3444_000000CC
    li r3, 0x1
lbl_fn_803A3444_000000CC:
    cmpwi r3, 0x0
    bne lbl_fn_803A3444_000000D8
    li r4, 0x1
lbl_fn_803A3444_000000D8:
    cmpwi r4, 0x0
    beq lbl_fn_803A3444_000000F0
    lwz r5, 0x8(r31)
    mr r3, r29
    li r4, 0x5a
    bl fn_8016CDB8
lbl_fn_803A3444_000000F0:
    lwz r29, 0x14ac(r29)
lbl_fn_803A3444_000000F4:
    cmpwi r29, 0x0
    bne lbl_fn_803A3444_0000005C
    lwz r3, lbl_8087F408
    lwz r29, 0x48(r3)
    b lbl_fn_803A3444_000001A0
lbl_fn_803A3444_00000108:
    lwz r6, 0x38(r29)
    li r4, 0x0
    li r3, 0x0
    li r5, 0x0
    rlwinm r0, r6, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_803A3444_00000134
    clrlwi r0, r6, 31
    cmplwi r0, 0x1
    beq lbl_fn_803A3444_00000134
    li r5, 0x1
lbl_fn_803A3444_00000134:
    cmpwi r5, 0x0
    beq lbl_fn_803A3444_00000150
    lwz r0, 0x7e0(r29)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_803A3444_00000150
    li r3, 0x1
lbl_fn_803A3444_00000150:
    cmpwi r3, 0x0
    beq lbl_fn_803A3444_00000184
    lwz r0, 0x55c(r29)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_803A3444_00000178
    lwz r0, 0x560(r29)
    cmpwi r0, 0x1c
    bne lbl_fn_803A3444_00000178
    li r3, 0x1
lbl_fn_803A3444_00000178:
    cmpwi r3, 0x0
    bne lbl_fn_803A3444_00000184
    li r4, 0x1
lbl_fn_803A3444_00000184:
    cmpwi r4, 0x0
    beq lbl_fn_803A3444_0000019C
    lwz r5, 0x8(r31)
    mr r3, r29
    li r4, 0x5a
    bl fn_8016CDB8
lbl_fn_803A3444_0000019C:
    lwz r29, 0x14ac(r29)
lbl_fn_803A3444_000001A0:
    cmpwi r29, 0x0
    bne lbl_fn_803A3444_00000108
    lwz r4, 0x0(r31)
    lis r3, lbl_8074ED24@ha
    li r0, 0x1
    stw r0, 0x4(r30)
    slwi r0, r4, 2
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

asm void fn_803A362C(void)
{
    nofralloc
    lwz r6, 0x0(r5)
    lis r3, lbl_8074ED24@ha
    li r0, 0x0
    stw r0, 0x4(r4)
    slwi r0, r6, 2
    addi r3, r3, lbl_8074ED24@l
    lwzx r0, r3, r0
    add r0, r5, r0
    stw r0, 0x0(r4)
    blr
}

asm void fn_803A3654(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_803A3654_00000258
    lwz r4, 0x8(r5)
    bl fn_80374964
    lwz r0, 0x8(r30)
    cmpwi r0, 0x3
    bne lbl_fn_803A3654_00000258
    li r31, 0x1
lbl_fn_803A3654_00000258:
    lwz r0, 0x0(r30)
    lis r3, lbl_8074ED24@ha
    addi r3, r3, lbl_8074ED24@l
    stw r31, 0x4(r29)
    slwi r0, r0, 2
    lwzx r0, r3, r0
    add r0, r30, r0
    stw r0, 0x0(r29)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803A36D8(void)
{
    nofralloc
    lwz r3, lbl_8087F430
    li r6, 0x0
    cmpwi r3, 0x0
    beq lbl_fn_803A36D8_000002C4
    lwz r0, 0x54e4(r3)
    cmpwi r0, 0x9
    beq lbl_fn_803A36D8_000002C0
    cmpwi r0, 0xa
    beq lbl_fn_803A36D8_000002C0
    cmpwi r0, 0xd
    bne lbl_fn_803A36D8_000002C4
lbl_fn_803A36D8_000002C0:
    li r6, 0x1
lbl_fn_803A36D8_000002C4:
    lwz r0, 0x0(r5)
    lis r3, lbl_8074ED24@ha
    addi r3, r3, lbl_8074ED24@l
    stw r6, 0x4(r4)
    slwi r0, r0, 2
    lwzx r0, r3, r0
    add r0, r5, r0
    stw r0, 0x0(r4)
    blr
}

asm void fn_803A372C(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_27
    lwz r6, lbl_8087F8A0
    mr r27, r3
    mr r29, r4
    mr r30, r5
    lwz r31, 0x48(r6)
    cmpwi r31, 0x0
    beq lbl_fn_803A372C_00000578
    lwz r8, 0x10(r5)
    clrlwi r0, r8, 31
    cmplwi r0, 0x1
    beq lbl_fn_803A372C_00000564
    lwz r0, 0x8(r5)
    cmpwi r0, 0x5
    beq lbl_fn_803A372C_00000348
    cmpwi r0, 0xa
    beq lbl_fn_803A372C_00000360
    cmpwi r0, 0xd
    beq lbl_fn_803A372C_00000480
    b lbl_fn_803A372C_00000578
lbl_fn_803A372C_00000348:
    lwz r4, 0xc(r5)
    mr r3, r31
    lfs f1, 0x14(r5)
    mr r5, r8
    bl fn_8016939C
    b lbl_fn_803A372C_00000578
lbl_fn_803A372C_00000360:
    lwz r3, 0x88(r3)
    li r6, 0x0
    lwz r5, 0xc(r5)
    li r7, 0x0
    lwz r0, 0xc4(r3)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_803A372C_000003A8
lbl_fn_803A372C_00000380:
    lwz r4, 0xc8(r3)
    lwzx r0, r4, r7
    cmpw r5, r0
    bne lbl_fn_803A372C_0000039C
    mulli r0, r6, 0x30
    add r5, r4, r0
    b lbl_fn_803A372C_000003AC
lbl_fn_803A372C_0000039C:
    addi r7, r7, 0x30
    addi r6, r6, 0x1
    bdnz lbl_fn_803A372C_00000380
lbl_fn_803A372C_000003A8:
    li r5, 0x0
lbl_fn_803A372C_000003AC:
    rlwinm r0, r8, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_803A372C_0000041C
    lwz r0, 0xcc(r3)
    li r7, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_803A372C_00000404
lbl_fn_803A372C_000003CC:
    lwz r0, 0xd0(r3)
    lwz r4, 0x10(r5)
    add r6, r0, r7
    lwzx r0, r7, r0
    subi r4, r4, 0x1
    cmpw r4, r0
    bne lbl_fn_803A372C_000003FC
    lwz r0, 0x4(r6)
    lwz r3, 0xc8(r3)
    mulli r0, r0, 0x30
    add r6, r3, r0
    b lbl_fn_803A372C_00000408
lbl_fn_803A372C_000003FC:
    addi r7, r7, 0x8
    bdnz lbl_fn_803A372C_000003CC
lbl_fn_803A372C_00000404:
    li r6, 0x0
lbl_fn_803A372C_00000408:
    addi r4, r5, 0x4
    mr r3, r31
    addi r5, r6, 0x4
    bl fn_80162A08
    b lbl_fn_803A372C_00000578
lbl_fn_803A372C_0000041C:
    lwz r0, 0xcc(r3)
    li r7, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_803A372C_00000468
lbl_fn_803A372C_00000430:
    lwz r0, 0xd0(r3)
    lwz r4, 0x10(r5)
    add r6, r0, r7
    lwz r0, 0x4(r6)
    subi r4, r4, 0x1
    cmpw r4, r0
    bne lbl_fn_803A372C_00000460
    lwz r0, 0x0(r6)
    lwz r3, 0xc8(r3)
    mulli r0, r0, 0x30
    add r6, r3, r0
    b lbl_fn_803A372C_0000046C
lbl_fn_803A372C_00000460:
    addi r7, r7, 0x8
    bdnz lbl_fn_803A372C_00000430
lbl_fn_803A372C_00000468:
    li r6, 0x0
lbl_fn_803A372C_0000046C:
    addi r4, r5, 0x4
    mr r3, r31
    addi r5, r6, 0x4
    bl fn_80162A08
    b lbl_fn_803A372C_00000578
lbl_fn_803A372C_00000480:
    lwz r3, 0x88(r3)
    li r6, 0x0
    lwz r5, 0xc(r5)
    li r7, 0x0
    lwz r0, 0xc4(r3)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_803A372C_000004C8
lbl_fn_803A372C_000004A0:
    lwz r4, 0xc8(r3)
    lwzx r0, r4, r7
    cmpw r5, r0
    bne lbl_fn_803A372C_000004BC
    mulli r0, r6, 0x30
    add r28, r4, r0
    b lbl_fn_803A372C_000004CC
lbl_fn_803A372C_000004BC:
    addi r7, r7, 0x30
    addi r6, r6, 0x1
    bdnz lbl_fn_803A372C_000004A0
lbl_fn_803A372C_000004C8:
    li r28, 0x0
lbl_fn_803A372C_000004CC:
    cmpwi r28, 0x0
    beq lbl_fn_803A372C_00000578
    lwz r5, 0x0(r28)
    li r4, 0xd
    bl fn_803C18DC
    cmpwi r3, 0x0
    beq lbl_fn_803A372C_00000578
    lwz r0, 0x4(r3)
    addi r4, r31, 0x528
    lwz r5, 0x88(r27)
    mr r3, r31
    mulli r0, r0, 0x30
    lfs f4, 0xc(r28)
    lwz r6, 0xc8(r5)
    addi r5, r1, 0x14
    lfs f2, 0x8(r28)
    add r6, r6, r0
    lfs f5, 0xc(r6)
    lfs f3, 0x8(r6)
    fsubs f4, f5, f4
    lfs f0, 0x4(r28)
    fsubs f3, f3, f2
    lfs f1, 0x4(r6)
    lfs f2, 0x530(r31)
    fsubs f5, f1, f0
    lfs f1, 0x52c(r31)
    fadds f2, f2, f4
    lfs f0, 0x528(r31)
    fadds f1, f1, f3
    stfs f5, 0x8(r1)
    fadds f0, f0, f5
    stfs f3, 0xc(r1)
    stfs f4, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f1, 0x18(r1)
    stfs f2, 0x1c(r1)
    bl fn_80163B88
    b lbl_fn_803A372C_00000578
lbl_fn_803A372C_00000564:
    lwz r0, 0x8(r5)
    cmpwi r0, 0x5
    bne lbl_fn_803A372C_00000578
    mr r3, r31
    bl fn_801696E0
lbl_fn_803A372C_00000578:
    lwz r4, 0x0(r30)
    lis r3, lbl_8074ED24@ha
    li r0, 0x0
    stw r0, 0x4(r29)
    slwi r0, r4, 2
    addi r3, r3, lbl_8074ED24@l
    lwzx r0, r3, r0
    addi r11, r1, 0x40
    add r0, r30, r0
    stw r0, 0x0(r29)
    bl _restgpr_27
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_803A39F8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_803A39F8_00000634
    lwz r4, 0x8(r5)
    cmpwi r4, 0x0
    bne lbl_fn_803A39F8_00000614
    lwz r0, 0x868(r3)
    cmpwi r0, 0x6
    bne lbl_fn_803A39F8_00000604
    li r4, 0x1
    bl fn_803748E0
lbl_fn_803A39F8_00000604:
    lwz r3, lbl_8087F430
    lwz r4, 0xc(r30)
    bl fn_80374710
    b lbl_fn_803A39F8_00000634
lbl_fn_803A39F8_00000614:
    lwz r0, 0x868(r3)
    cmpwi r0, 0x6
    bne lbl_fn_803A39F8_00000634
    cmpwi r4, 0x2
    bne lbl_fn_803A39F8_00000630
    lwz r3, lbl_8087F9F8
    bl fn_805AA4E8
lbl_fn_803A39F8_00000630:
    li r31, 0x1
lbl_fn_803A39F8_00000634:
    lwz r0, 0x0(r30)
    lis r3, lbl_8074ED24@ha
    addi r3, r3, lbl_8074ED24@l
    stw r31, 0x4(r29)
    slwi r0, r0, 2
    lwzx r0, r3, r0
    add r0, r30, r0
    stw r0, 0x0(r29)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803A3AB4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    li r4, 0x0
    lwz r0, lbl_8087F430
    cmpwi r0, 0x0
    beq lbl_fn_803A3AB4_00000778
    lwz r3, 0x8(r5)
    cmpwi r3, 0x2
    bne lbl_fn_803A3AB4_000006D8
    lwz r3, lbl_8087F9F8
    lwz r0, 0xa70(r3)
    cmpwi r0, 0x0
    bne lbl_fn_803A3AB4_000006D0
    bl fn_805AA738
    lwz r3, lbl_8087F430
    li r4, 0x1
    bl fn_803748E0
    li r4, 0x0
    b lbl_fn_803A3AB4_00000778
lbl_fn_803A3AB4_000006D0:
    li r4, 0x1
    b lbl_fn_803A3AB4_00000778
lbl_fn_803A3AB4_000006D8:
    lwz r5, lbl_8087F490
    cmpwi r5, 0x0
    beq lbl_fn_803A3AB4_0000071C
    subi r3, r3, 0x3
    li r0, 0x6
    cntlzw r3, r3
    stw r0, 0x764(r5)
    srwi r4, r3, 5
    addi r0, r4, 0xc
    stw r0, 0x768(r5)
    li r3, -0x1
    stw r3, 0x76c(r5)
    li r0, 0x0
    stw r0, 0x770(r5)
    stw r0, 0x774(r5)
    stw r0, 0x778(r5)
    stw r0, 0x77c(r5)
lbl_fn_803A3AB4_0000071C:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x4
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_803A3AB4_00000774
    lis r4, lbl_8074EF78@ha
    lfs f1, lbl_80885B30
    addi r4, r4, lbl_8074EF78@l
    addi r3, r1, 0x8
    lwz r4, 0x20(r4)
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    lwz r3, lbl_8087F430
    li r4, 0x1
    bl fn_803748E0
    li r4, 0x0
    b lbl_fn_803A3AB4_00000778
lbl_fn_803A3AB4_00000774:
    li r4, 0x1
lbl_fn_803A3AB4_00000778:
    lwz r0, 0x0(r31)
    lis r3, lbl_8074ED24@ha
    addi r3, r3, lbl_8074ED24@l
    stw r4, 0x4(r30)
    slwi r0, r0, 2
    lwzx r0, r3, r0
    add r0, r31, r0
    stw r0, 0x0(r30)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803A3BF4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_803A3BF4_000007E8
    bl fn_80373148
    mr r31, r3
    b lbl_fn_803A3BF4_000007EC
lbl_fn_803A3BF4_000007E8:
    li r31, 0x0
lbl_fn_803A3BF4_000007EC:
    cmpwi r31, 0x0
    beq lbl_fn_803A3BF4_00000824
    lwz r5, 0xc(r30)
    mr r3, r31
    lwz r4, 0x8(r30)
    li r6, -0x1
    neg r0, r5
    li r7, 0x0
    or r0, r0, r5
    srawi r0, r0, 31
    andi. r5, r0, 0xa
    bl fn_804A04AC
    lwz r0, 0x8(r30)
    stw r0, 0xe8(r31)
lbl_fn_803A3BF4_00000824:
    lwz r4, 0x0(r30)
    lis r3, lbl_8074ED24@ha
    li r0, 0x0
    stw r0, 0x4(r29)
    slwi r0, r4, 2
    addi r3, r3, lbl_8074ED24@l
    lwzx r0, r3, r0
    add r0, r30, r0
    stw r0, 0x0(r29)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803A3CA8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r5
    stw r30, 0x8(r1)
    mr r30, r4
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_803A3CA8_000008A0
    lwz r4, lbl_8087F9C0
    lwz r0, 0x10(r4)
    cmpwi r0, 0x0
    beq lbl_fn_803A3CA8_000008A0
    bl fn_80376730
lbl_fn_803A3CA8_000008A0:
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

asm void fn_803A3D20(void)
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
    li r4, 0x0
    stw r29, 0x14(r1)
    mr r29, r3
    stw r28, 0x10(r1)
    beq lbl_fn_803A3D20_00000934
    cmpwi r6, 0x1
    beq lbl_fn_803A3D20_00000960
    cmpwi r6, 0x2
    beq lbl_fn_803A3D20_0000099C
    cmpwi r6, 0x3
    beq lbl_fn_803A3D20_000009B0
    b lbl_fn_803A3D20_000009C0
lbl_fn_803A3D20_00000934:
    lwz r0, 0xdc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803A3D20_0000094C
    lwz r3, lbl_8087F8A0
    lwz r3, 0x48(r3)
    b lbl_fn_803A3D20_00000958
lbl_fn_803A3D20_0000094C:
    lwz r3, lbl_8087F8A0
    li r4, 0x1
    bl fn_8011F8F4
lbl_fn_803A3D20_00000958:
    mr r4, r3
    b lbl_fn_803A3D20_000009C0
lbl_fn_803A3D20_00000960:
    lwz r3, lbl_8087F890
    mr r4, r0
    bl fn_8011FE3C
    lwz r0, lbl_8087FA20
    mr r4, r3
    cmpwi r0, 0x0
    beq lbl_fn_803A3D20_000009C0
    cmpwi r3, 0x0
    beq lbl_fn_803A3D20_000009C0
    lwz r0, 0x38(r3)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_803A3D20_000009C0
    li r4, 0x0
    b lbl_fn_803A3D20_000009C0
lbl_fn_803A3D20_0000099C:
    lwz r3, lbl_8087F408
    mr r4, r0
    bl fn_8011FC10
    mr r4, r3
    b lbl_fn_803A3D20_000009C0
lbl_fn_803A3D20_000009B0:
    lwz r3, lbl_8087F8A0
    mr r4, r0
    bl fn_8011F91C
    mr r4, r3
lbl_fn_803A3D20_000009C0:
    cmpwi r4, 0x0
    beq lbl_fn_803A3D20_00000B74
    lwz r0, 0x10(r31)
    li r28, 0x0
    lwz r5, 0x55c(r4)
    cmplwi r0, 0xc
    lwz r6, 0x560(r4)
    bgt lbl_fn_803A3D20_00000B58
    lis r3, jumptable_8078AFAC@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_8078AFAC@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lwz r0, 0x12a4(r4)
    srwi r28, r0, 31
    b lbl_fn_803A3D20_00000B58
    lwz r0, 0x12a4(r4)
    li r28, 0x0
    srwi. r0, r0, 31
    beq lbl_fn_803A3D20_00000B58
    lwz r0, 0xc48(r4)
    cmpwi r0, 0x0
    beq lbl_fn_803A3D20_00000B58
    li r28, 0x1
    b lbl_fn_803A3D20_00000B58
    cmpwi r5, 0x6
    li r28, 0x0
    bne lbl_fn_803A3D20_00000B58
    cmpwi r6, 0x17
    bne lbl_fn_803A3D20_00000B58
    li r28, 0x1
    b lbl_fn_803A3D20_00000B58
    cmpwi r5, 0x6
    li r28, 0x0
    bne lbl_fn_803A3D20_00000B58
    cmpwi r6, 0x3b
    bne lbl_fn_803A3D20_00000B58
    li r28, 0x1
    b lbl_fn_803A3D20_00000B58
    cmpwi r5, 0x6
    li r0, 0x0
    bne lbl_fn_803A3D20_00000A80
    cmpwi r6, 0x4
    blt lbl_fn_803A3D20_00000A80
    cmpwi r6, 0xc
    bge lbl_fn_803A3D20_00000A80
    li r0, 0x1
lbl_fn_803A3D20_00000A80:
    cmpwi r0, 0x0
    beq lbl_fn_803A3D20_00000B58
    li r28, 0x1
    b lbl_fn_803A3D20_00000B58
    cmpwi r5, 0x6
    li r28, 0x0
    bne lbl_fn_803A3D20_00000B58
    cmpwi r6, 0x16
    bne lbl_fn_803A3D20_00000B58
    li r28, 0x1
    b lbl_fn_803A3D20_00000B58
    cmpwi r5, 0x6
    bne lbl_fn_803A3D20_00000B58
    subi r0, r6, 0x1d
    cmplwi r0, 0x1
    bgt lbl_fn_803A3D20_00000B58
    li r28, 0x1
    b lbl_fn_803A3D20_00000B58
    lwz r0, 0x12a4(r4)
    extrwi r28, r0, 1, 25
    b lbl_fn_803A3D20_00000B58
    cmpwi r5, 0x6
    li r28, 0x0
    bne lbl_fn_803A3D20_00000B58
    cmpwi r6, 0x62
    bne lbl_fn_803A3D20_00000B58
    li r28, 0x1
    b lbl_fn_803A3D20_00000B58
    cmpwi r5, 0x6
    li r28, 0x0
    bne lbl_fn_803A3D20_00000B58
    cmpwi r6, 0x44
    bne lbl_fn_803A3D20_00000B58
    li r28, 0x1
    b lbl_fn_803A3D20_00000B58
    mr r3, r4
    bl fn_8016D3F8
    cmpwi r3, 0x0
    beq lbl_fn_803A3D20_00000B58
    li r28, 0x1
    b lbl_fn_803A3D20_00000B58
    cmpwi r5, 0x6
    li r28, 0x0
    bne lbl_fn_803A3D20_00000B58
    cmpwi r6, 0x2a
    bne lbl_fn_803A3D20_00000B58
    li r28, 0x1
    b lbl_fn_803A3D20_00000B58
    cmpwi r5, 0x6
    li r28, 0x0
    bne lbl_fn_803A3D20_00000B58
    cmpwi r6, 0x3d
    bne lbl_fn_803A3D20_00000B58
    li r28, 0x1
lbl_fn_803A3D20_00000B58:
    lwz r4, 0x14(r31)
    mr r3, r29
    lwz r5, 0x18(r31)
    mr r8, r28
    li r6, 0x0
    li r7, 0x0
    bl fn_8039BF04
lbl_fn_803A3D20_00000B74:
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

asm void fn_803A3FFC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lwz r31, 0x8(r5)
    stw r30, 0x18(r1)
    mr r30, r5
    mr r3, r31
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    bl fn_80211480
    cmpwi r3, 0x0
    bne lbl_fn_803A3FFC_00000BF4
    li r31, 0x1
lbl_fn_803A3FFC_00000BF4:
    lwz r0, 0x14(r30)
    li r4, 0x0
    lwz r3, lbl_8087F4F0
    clrlwi r0, r0, 31
    addis r3, r3, 0x1
    cmplwi r0, 0x1
    stw r4, -0x24f4(r3)
    bne lbl_fn_803A3FFC_00000C90
    lwz r3, lbl_8087F430
    lwz r28, 0x10(r30)
    cmpwi r3, 0x0
    lwz r0, 0xc(r30)
    bne lbl_fn_803A3FFC_00000C30
    li r28, 0x0
    b lbl_fn_803A3FFC_00000C7C
lbl_fn_803A3FFC_00000C30:
    cmpwi r0, 0x2
    bne lbl_fn_803A3FFC_00000C48
    mr r4, r28
    bl fn_80370174
    mr r28, r3
    b lbl_fn_803A3FFC_00000C7C
lbl_fn_803A3FFC_00000C48:
    cmpwi r0, 0x1
    bne lbl_fn_803A3FFC_00000C60
    mr r4, r28
    bl fn_80370A78
    mr r28, r3
    b lbl_fn_803A3FFC_00000C7C
lbl_fn_803A3FFC_00000C60:
    cmpwi r0, 0x3
    bne lbl_fn_803A3FFC_00000C7C
    bl fn_80680CF8
    divw r0, r3, r28
    mullw r0, r0, r28
    subf r3, r0, r3
    addi r28, r3, 0x1
lbl_fn_803A3FFC_00000C7C:
    lwz r3, lbl_8087F4F0
    mr r4, r31
    mr r5, r28
    bl fn_8044441C
    b lbl_fn_803A3FFC_00000F68
lbl_fn_803A3FFC_00000C90:
    lwz r3, lbl_8087F430
    li r0, 0x1
    stw r0, 0xc(r1)
    cmpwi r3, 0x0
    lwz r28, 0x10(r30)
    lwz r0, 0xc(r30)
    bne lbl_fn_803A3FFC_00000CB4
    li r28, 0x0
    b lbl_fn_803A3FFC_00000D00
lbl_fn_803A3FFC_00000CB4:
    cmpwi r0, 0x2
    bne lbl_fn_803A3FFC_00000CCC
    mr r4, r28
    bl fn_80370174
    mr r28, r3
    b lbl_fn_803A3FFC_00000D00
lbl_fn_803A3FFC_00000CCC:
    cmpwi r0, 0x1
    bne lbl_fn_803A3FFC_00000CE4
    mr r4, r28
    bl fn_80370A78
    mr r28, r3
    b lbl_fn_803A3FFC_00000D00
lbl_fn_803A3FFC_00000CE4:
    cmpwi r0, 0x3
    bne lbl_fn_803A3FFC_00000D00
    bl fn_80680CF8
    divw r0, r3, r28
    mullw r0, r0, r28
    subf r3, r0, r3
    addi r28, r3, 0x1
lbl_fn_803A3FFC_00000D00:
    lwz r3, lbl_8087F4F0
    mr r4, r31
    mr r5, r28
    addi r8, r1, 0xc
    li r6, 0x0
    li r7, 0x1
    li r9, 0x1
    li r10, 0x1
    bl fn_804439FC
    lwz r3, 0x8(r30)
    bl fn_80206B9C
    cmpwi r3, 0x0
    beq lbl_fn_803A3FFC_00000E40
    lwz r0, 0xc(r1)
    cmpwi r0, 0x0
    bne lbl_fn_803A3FFC_00000E40
    lwz r3, lbl_8087F430
    lwz r28, 0x10(r30)
    cmpwi r3, 0x0
    lwz r0, 0xc(r30)
    bne lbl_fn_803A3FFC_00000D5C
    li r28, 0x0
    b lbl_fn_803A3FFC_00000DA8
lbl_fn_803A3FFC_00000D5C:
    cmpwi r0, 0x2
    bne lbl_fn_803A3FFC_00000D74
    mr r4, r28
    bl fn_80370174
    mr r28, r3
    b lbl_fn_803A3FFC_00000DA8
lbl_fn_803A3FFC_00000D74:
    cmpwi r0, 0x1
    bne lbl_fn_803A3FFC_00000D8C
    mr r4, r28
    bl fn_80370A78
    mr r28, r3
    b lbl_fn_803A3FFC_00000DA8
lbl_fn_803A3FFC_00000D8C:
    cmpwi r0, 0x3
    bne lbl_fn_803A3FFC_00000DA8
    bl fn_80680CF8
    divw r0, r3, r28
    mullw r0, r0, r28
    subf r3, r0, r3
    addi r28, r3, 0x1
lbl_fn_803A3FFC_00000DA8:
    lwz r3, lbl_8087F048
    mr r7, r28
    lwz r6, 0x8(r30)
    li r4, 0x2
    li r5, 0x0
    bl fn_801092C8
    lwz r3, lbl_8087F430
    lwz r28, 0x10(r30)
    cmpwi r3, 0x0
    lwz r0, 0xc(r30)
    bne lbl_fn_803A3FFC_00000DDC
    li r28, 0x0
    b lbl_fn_803A3FFC_00000E28
lbl_fn_803A3FFC_00000DDC:
    cmpwi r0, 0x2
    bne lbl_fn_803A3FFC_00000DF4
    mr r4, r28
    bl fn_80370174
    mr r28, r3
    b lbl_fn_803A3FFC_00000E28
lbl_fn_803A3FFC_00000DF4:
    cmpwi r0, 0x1
    bne lbl_fn_803A3FFC_00000E0C
    mr r4, r28
    bl fn_80370A78
    mr r28, r3
    b lbl_fn_803A3FFC_00000E28
lbl_fn_803A3FFC_00000E0C:
    cmpwi r0, 0x3
    bne lbl_fn_803A3FFC_00000E28
    bl fn_80680CF8
    divw r0, r3, r28
    mullw r0, r0, r28
    subf r3, r0, r3
    addi r28, r3, 0x1
lbl_fn_803A3FFC_00000E28:
    lwz r3, lbl_8087F490
    mr r4, r31
    mr r5, r28
    li r6, 0x0
    bl fn_803E5E64
    b lbl_fn_803A3FFC_00000F3C
lbl_fn_803A3FFC_00000E40:
    lwz r3, lbl_8087F430
    lwz r28, 0x10(r30)
    cmpwi r3, 0x0
    lwz r0, 0xc(r30)
    bne lbl_fn_803A3FFC_00000E5C
    li r28, 0x0
    b lbl_fn_803A3FFC_00000EA8
lbl_fn_803A3FFC_00000E5C:
    cmpwi r0, 0x2
    bne lbl_fn_803A3FFC_00000E74
    mr r4, r28
    bl fn_80370174
    mr r28, r3
    b lbl_fn_803A3FFC_00000EA8
lbl_fn_803A3FFC_00000E74:
    cmpwi r0, 0x1
    bne lbl_fn_803A3FFC_00000E8C
    mr r4, r28
    bl fn_80370A78
    mr r28, r3
    b lbl_fn_803A3FFC_00000EA8
lbl_fn_803A3FFC_00000E8C:
    cmpwi r0, 0x3
    bne lbl_fn_803A3FFC_00000EA8
    bl fn_80680CF8
    divw r0, r3, r28
    mullw r0, r0, r28
    subf r3, r0, r3
    addi r28, r3, 0x1
lbl_fn_803A3FFC_00000EA8:
    lwz r3, lbl_8087F048
    mr r6, r31
    mr r7, r28
    li r4, 0x1
    li r5, 0x0
    bl fn_801092C8
    lwz r3, lbl_8087F430
    lwz r28, 0x10(r30)
    cmpwi r3, 0x0
    lwz r0, 0xc(r30)
    bne lbl_fn_803A3FFC_00000EDC
    li r28, 0x0
    b lbl_fn_803A3FFC_00000F28
lbl_fn_803A3FFC_00000EDC:
    cmpwi r0, 0x2
    bne lbl_fn_803A3FFC_00000EF4
    mr r4, r28
    bl fn_80370174
    mr r28, r3
    b lbl_fn_803A3FFC_00000F28
lbl_fn_803A3FFC_00000EF4:
    cmpwi r0, 0x1
    bne lbl_fn_803A3FFC_00000F0C
    mr r4, r28
    bl fn_80370A78
    mr r28, r3
    b lbl_fn_803A3FFC_00000F28
lbl_fn_803A3FFC_00000F0C:
    cmpwi r0, 0x3
    bne lbl_fn_803A3FFC_00000F28
    bl fn_80680CF8
    divw r0, r3, r28
    mullw r0, r0, r28
    subf r3, r0, r3
    addi r28, r3, 0x1
lbl_fn_803A3FFC_00000F28:
    lwz r3, lbl_8087F490
    mr r4, r31
    mr r5, r28
    li r6, 0x1
    bl fn_803E5E64
lbl_fn_803A3FFC_00000F3C:
    lis r4, lbl_8074EF78@ha
    lfs f1, lbl_80885B30
    addi r4, r4, lbl_8074EF78@l
    addi r3, r1, 0x8
    lwz r4, 0x10(r4)
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_803A3FFC_00000F68:
    lwz r4, lbl_8087F4F0
    lis r3, lbl_8074ED24@ha
    lwz r0, 0x0(r30)
    addi r3, r3, lbl_8074ED24@l
    addis r4, r4, 0x1
    li r5, 0x1
    slwi r0, r0, 2
    stw r5, -0x24f4(r4)
    lwzx r3, r3, r0
    li r0, 0x0
    stw r0, 0x4(r29)
    add r0, r30, r3
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

asm void fn_803A4400(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r5
    stw r30, 0x8(r1)
    mr r30, r4
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_803A4400_00000FF4
    lwz r4, 0x1c(r5)
    lwz r5, 0x14(r5)
    lfs f1, 0x18(r31)
    bl fn_80375194
lbl_fn_803A4400_00000FF4:
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

asm void fn_803A4474(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    lwz r0, 0xc(r5)
    stw r31, 0x1c(r1)
    mr r31, r5
    cmpwi r0, 0x0
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bne lbl_fn_803A4474_00001088
    lwz r3, lbl_8087F4F0
    lwz r4, 0x8(r5)
    bl fn_804444E8
    lwz r4, 0x10(r31)
    mr r8, r3
    lwz r5, 0x14(r31)
    mr r3, r29
    li r6, 0x0
    li r7, 0x0
    bl fn_8039BF04
lbl_fn_803A4474_00001088:
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
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803A450C(void)
{
    nofralloc
    lwz r9, lbl_8087F430
    lis r3, lbl_8074ED24@ha
    lwz r6, 0x0(r5)
    addi r3, r3, lbl_8074ED24@l
    lwz r7, 0x96c(r9)
    li r0, 0x0
    slwi r6, r6, 2
    lwz r10, 0x8(r5)
    srwi r8, r7, 31
    clrlwi r7, r7, 31
    xor r7, r7, r8
    lwzx r3, r3, r6
    subf r6, r8, r7
    stw r6, 0x96c(r9)
    lfs f0, 0xc(r5)
    add r3, r5, r3
    stw r10, 0x970(r9)
    lfs f1, 0x10(r5)
    stfs f0, 0x974(r9)
    stfs f1, 0x978(r9)
    stw r3, 0x0(r4)
    stw r0, 0x4(r4)
    blr
}

asm void fn_803A4568(void)
{
    nofralloc
    stwu r1, -0x240(r1)
    mflr r0
    stw r0, 0x244(r1)
    lwz r0, 0x8(r5)
    stw r31, 0x23c(r1)
    mr r31, r5
    cmpwi r0, 0x0
    stw r30, 0x238(r1)
    mr r30, r4
    lwz r4, 0xc(r5)
    stw r29, 0x234(r1)
    li r29, 0x0
    stw r28, 0x230(r1)
    beq lbl_fn_803A4568_00001178
    cmpwi r0, 0x1
    beq lbl_fn_803A4568_000011A4
    cmpwi r0, 0x2
    beq lbl_fn_803A4568_000011DC
    cmpwi r0, 0x3
    beq lbl_fn_803A4568_000011EC
    b lbl_fn_803A4568_000011F8
lbl_fn_803A4568_00001178:
    lwz r0, 0xdc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803A4568_00001190
    lwz r3, lbl_8087F8A0
    lwz r3, 0x48(r3)
    b lbl_fn_803A4568_0000119C
lbl_fn_803A4568_00001190:
    lwz r3, lbl_8087F8A0
    li r4, 0x1
    bl fn_8011F8F4
lbl_fn_803A4568_0000119C:
    mr r29, r3
    b lbl_fn_803A4568_000011F8
lbl_fn_803A4568_000011A4:
    lwz r3, lbl_8087F890
    bl fn_8011FE3C
    lwz r0, lbl_8087FA20
    mr r29, r3
    cmpwi r0, 0x0
    beq lbl_fn_803A4568_000011F8
    cmpwi r3, 0x0
    beq lbl_fn_803A4568_000011F8
    lwz r0, 0x38(r3)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_803A4568_000011F8
    li r29, 0x0
    b lbl_fn_803A4568_000011F8
lbl_fn_803A4568_000011DC:
    lwz r3, lbl_8087F408
    bl fn_8011FC10
    mr r29, r3
    b lbl_fn_803A4568_000011F8
lbl_fn_803A4568_000011EC:
    lwz r3, lbl_8087F8A0
    bl fn_8011F91C
    mr r29, r3
lbl_fn_803A4568_000011F8:
    cmpwi r29, 0x0
    beq lbl_fn_803A4568_0000131C
    addi r28, r29, 0xb0
    addi r3, r1, 0x8
    addi r4, r31, 0x10
    li r5, 0x20
    bl memcpy
    lbz r0, 0x8(r1)
    cmpwi r0, 0x40
    bne lbl_fn_803A4568_000012B4
    lis r4, lbl_8074F8CC@ha
    addi r3, r1, 0x8
    addi r4, r4, lbl_8074F8CC@l
    li r5, 0x3
    addi r4, r4, 0x144
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_803A4568_0000131C
    addi r3, r1, 0xb
    bl fn_80684600
    lwz r0, 0x6a4(r29)
    cmpw r3, r0
    bge lbl_fn_803A4568_00001264
    slwi r0, r3, 2
    add r3, r29, r0
    lwz r4, 0x6a8(r3)
    b lbl_fn_803A4568_00001268
lbl_fn_803A4568_00001264:
    li r4, 0x0
lbl_fn_803A4568_00001268:
    cmpwi r4, 0x0
    beq lbl_fn_803A4568_00001288
    lwz r3, 0x30(r31)
    lwz r0, 0x3dc(r4)
    cntlzw r3, r3
    rlwimi r0, r3, 26, 0, 0
    stw r0, 0x3dc(r4)
    b lbl_fn_803A4568_0000131C
lbl_fn_803A4568_00001288:
    lis r4, lbl_8074F8CC@ha
    addi r3, r1, 0x128
    addi r4, r4, lbl_8074F8CC@l
    addi r5, r1, 0x8
    addi r4, r4, 0x148
    crclr 6
    bl sprintf
    lwz r3, lbl_8087EEB8
    addi r4, r1, 0x128
    bl fn_800697D8
    b lbl_fn_803A4568_0000131C
lbl_fn_803A4568_000012B4:
    mr r3, r28
    addi r4, r1, 0x8
    li r5, 0x0
    bl fn_80092814
    cmpwi r3, 0x0
    blt lbl_fn_803A4568_000012F4
    mr r3, r28
    addi r4, r1, 0x8
    bl fn_80093B88
    lwz r0, 0x30(r31)
    mr r3, r28
    addi r4, r1, 0x8
    cntlzw r0, r0
    srwi r5, r0, 5
    bl fn_8009373C
    b lbl_fn_803A4568_0000131C
lbl_fn_803A4568_000012F4:
    lis r4, lbl_8074F8CC@ha
    addi r3, r1, 0x28
    addi r4, r4, lbl_8074F8CC@l
    addi r5, r1, 0x8
    addi r4, r4, 0x148
    crclr 6
    bl sprintf
    lwz r3, lbl_8087EEB8
    addi r4, r1, 0x28
    bl fn_800697D8
lbl_fn_803A4568_0000131C:
    lwz r4, 0x0(r31)
    lis r3, lbl_8074ED24@ha
    li r0, 0x0
    stw r0, 0x4(r30)
    slwi r0, r4, 2
    addi r3, r3, lbl_8074ED24@l
    lwzx r0, r3, r0
    add r0, r31, r0
    stw r0, 0x0(r30)
    lwz r31, 0x23c(r1)
    lwz r30, 0x238(r1)
    lwz r29, 0x234(r1)
    lwz r28, 0x230(r1)
    lwz r0, 0x244(r1)
    mtlr r0
    addi r1, r1, 0x240
    blr
}

asm void fn_803A47A4(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r3, r1, 0x10
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r5
    stw r29, 0x34(r1)
    mr r29, r4
    addi r4, r5, 0x8
    li r5, 0x20
    bl memcpy
    lwz r31, lbl_8087EFE8
    cmpwi r31, 0x0
    beq lbl_fn_803A47A4_00001424
    lwz r0, 0x2c(r30)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_fn_803A47A4_00001414
    lis r4, lbl_8074F8CC@ha
    addi r3, r30, 0x8
    addi r4, r4, lbl_8074F8CC@l
    li r5, 0xc
    addi r4, r4, 0x164
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_803A47A4_000013DC
    lwz r4, lbl_8087F430
    mr r3, r31
    li r5, 0xf
    bl fn_800CFD18
lbl_fn_803A47A4_000013DC:
    lwz r5, lbl_8087EFE8
    addi r3, r1, 0x8
    lwz r0, lbl_8087F430
    addi r4, r1, 0x10
    stw r0, 0x34d8(r5)
    lfs f1, 0x28(r30)
    bl fn_803935AC
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    lwz r3, lbl_8087EFE8
    li r0, 0x0
    stw r0, 0x34d8(r3)
    b lbl_fn_803A47A4_00001424
lbl_fn_803A47A4_00001414:
    lwz r4, lbl_8087F430
    mr r3, r31
    li r5, 0xf
    bl fn_800CFD18
lbl_fn_803A47A4_00001424:
    lwz r4, 0x0(r30)
    lis r3, lbl_8074ED24@ha
    li r0, 0x0
    stw r0, 0x4(r29)
    slwi r0, r4, 2
    addi r3, r3, lbl_8074ED24@l
    lwzx r0, r3, r0
    add r0, r30, r0
    stw r0, 0x0(r29)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_803A48A8(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x40
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    bl _savegpr_22
    lwz r0, 0x8(r5)
    mr r22, r3
    mr r30, r4
    mr r31, r5
    cmpwi r0, 0x2
    li r27, 0x0
    bne lbl_fn_803A48A8_00001570
    lwz r6, lbl_8087F8A0
    mr r4, r0
    lwz r3, lbl_8087FA00
    lwz r26, 0x48(r6)
    lwz r5, 0xc(r5)
    bl fn_805B4D94
    cmpwi r3, 0x0
    mr r29, r3
    beq lbl_fn_803A48A8_00001570
    lfs f31, lbl_80885B10
    addi r28, r3, 0x250
    li r25, 0x0
    li r24, 0x0
    b lbl_fn_803A48A8_00001534
lbl_fn_803A48A8_000014D4:
    lwz r23, 0x0(r28)
    lwz r0, 0xd18(r23)
    cmpwi r0, 0x0
    ble lbl_fn_803A48A8_0000152C
    lfs f1, 0x530(r26)
    addi r3, r1, 0x8
    lfs f0, 0x530(r23)
    lfs f3, 0x52c(r26)
    fsubs f4, f1, f0
    lfs f2, 0x52c(r23)
    lfs f1, 0x528(r26)
    lfs f0, 0x528(r23)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f4, 0x10(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f31
    ble lbl_fn_803A48A8_0000152C
    fmr f31, f1
    mr r25, r23
lbl_fn_803A48A8_0000152C:
    addi r28, r28, 0x4
    addi r24, r24, 0x1
lbl_fn_803A48A8_00001534:
    lbz r0, 0x24c(r29)
    cmpw r24, r0
    blt lbl_fn_803A48A8_000014D4
    cmpwi r25, 0x0
    beq lbl_fn_803A48A8_00001570
    lfs f1, lbl_80885B14
    mr r3, r25
    li r4, 0x6a
    li r5, 0x0
    fmr f2, f1
    li r6, 0x0
    bl fn_80161570
    li r0, 0x0
    stw r0, 0xb4(r22)
    li r27, 0x1
lbl_fn_803A48A8_00001570:
    lwz r0, 0x0(r31)
    lis r3, lbl_8074ED24@ha
    addi r3, r3, lbl_8074ED24@l
    stw r27, 0x4(r30)
    slwi r0, r0, 2
    lwzx r0, r3, r0
    add r0, r31, r0
    stw r0, 0x0(r30)
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    addi r11, r1, 0x40
    bl _restgpr_22
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_803A49F4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r5
    stw r30, 0x8(r1)
    mr r30, r4
    li r4, 0x1
    lwz r6, 0xb4(r3)
    addi r0, r6, 0x1
    stw r0, 0xb4(r3)
    cmpwi r0, 0x1e
    blt lbl_fn_803A49F4_00001600
    lwz r4, 0x8(r5)
    lwz r3, lbl_8087FA00
    lwz r5, 0xc(r5)
    bl fn_805B4D94
    li r4, 0x1
    bl fn_805AE9D4
    li r4, 0x0
lbl_fn_803A49F4_00001600:
    lwz r0, 0x0(r31)
    lis r3, lbl_8074ED24@ha
    addi r3, r3, lbl_8074ED24@l
    stw r4, 0x4(r30)
    slwi r0, r0, 2
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

asm void fn_803A4A7C(void)
{
    nofralloc
    stwu r1, -0x160(r1)
    mflr r0
    stw r0, 0x164(r1)
    addi r11, r1, 0x140
    stfd f31, 0x150(r1)
    psq_st f31, 0x158(r1), 0, 0
    stfd f30, 0x140(r1)
    psq_st f30, 0x148(r1), 0, 0
    bl _savegpr_20
    mr r20, r3
    mr r25, r4
    mr r26, r5
    lwz r4, 0x10(r5)
    lwz r3, lbl_8087FA00
    lwz r5, 0x14(r5)
    bl fn_805B4D94
    mr r31, r3
    lwz r3, 0x18(r26)
    bl fn_80219E6C
    cmpwi r31, 0x0
    mr r28, r3
    beq lbl_fn_803A4A7C_00001B24
    lwz r0, 0x1c(r26)
    cmplwi r0, 0x1
    bgt lbl_fn_803A4A7C_00001954
    cmpwi r3, 0x0
    beq lbl_fn_803A4A7C_00001894
    lfs f31, lbl_80885B10
    addi r30, r31, 0x250
    lfs f30, lbl_80885B30
    li r27, 0x0
    li r21, 0x0
    li r22, -0x1
    lis r23, lbl_807C6B90@ha
    li r24, 0x1
    b lbl_fn_803A4A7C_00001884
lbl_fn_803A4A7C_000016C8:
    lwz r29, 0x0(r30)
    li r4, 0x0
    li r3, 0x0
    li r5, 0x0
    lwz r6, 0x38(r29)
    rlwinm r0, r6, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_803A4A7C_000016F8
    clrlwi r0, r6, 31
    cmplwi r0, 0x1
    beq lbl_fn_803A4A7C_000016F8
    li r5, 0x1
lbl_fn_803A4A7C_000016F8:
    cmpwi r5, 0x0
    beq lbl_fn_803A4A7C_00001714
    lwz r0, 0x7e0(r29)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_803A4A7C_00001714
    li r3, 0x1
lbl_fn_803A4A7C_00001714:
    cmpwi r3, 0x0
    beq lbl_fn_803A4A7C_00001748
    lwz r0, 0x55c(r29)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_803A4A7C_0000173C
    lwz r0, 0x560(r29)
    cmpwi r0, 0x1c
    bne lbl_fn_803A4A7C_0000173C
    li r3, 0x1
lbl_fn_803A4A7C_0000173C:
    cmpwi r3, 0x0
    bne lbl_fn_803A4A7C_00001748
    li r4, 0x1
lbl_fn_803A4A7C_00001748:
    cmpwi r4, 0x0
    beq lbl_fn_803A4A7C_0000187C
    lwz r0, 0x1c(r26)
    cmpwi r0, 0x0
    bne lbl_fn_803A4A7C_000017AC
    lwz r0, 0xdc(r1)
    mr r4, r28
    stw r21, 0xc0(r1)
    mr r5, r29
    clrlwi r0, r0, 4
    mr r6, r29
    stw r21, 0xc4(r1)
    addi r3, r1, 0xc0
    addi r8, r23, lbl_807C6B90@l
    li r7, 0x0
    stw r21, 0xc8(r1)
    li r9, 0x0
    li r10, 0x0
    stw r21, 0xcc(r1)
    stw r21, 0xd0(r1)
    stw r22, 0xd4(r1)
    stw r0, 0xdc(r1)
    stw r22, 0xd8(r1)
    bl fn_8003EA3C
    b lbl_fn_803A4A7C_0000187C
lbl_fn_803A4A7C_000017AC:
    cmpwi r0, 0x1
    bne lbl_fn_803A4A7C_0000187C
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_803A4A7C_0000187C
    addis r4, r3, 0x4
    addi r3, r1, 0xe0
    stw r24, -0x1c64(r4)
    li r4, 0x79
    stfs f31, 0x98(r1)
    stfs f31, 0x9c(r1)
    stfs f30, 0xa0(r1)
    lfs f1, 0x538(r29)
    bl fn_805F8E70
    addi r4, r1, 0x98
    addi r3, r1, 0xe0
    mr r5, r4
    bl fn_805F93C0
    mr r4, r29
    addi r3, r1, 0xa4
    bl fn_801781B0
    lfs f3, 0xac(r1)
    lfs f2, 0xa0(r1)
    lfs f1, 0xa8(r1)
    fadds f2, f3, f2
    lfs f0, 0x9c(r1)
    lwz r20, lbl_8087F048
    fadds f3, f1, f0
    lfs f1, 0xa4(r1)
    lfs f0, 0x98(r1)
    stfs f3, 0xb4(r1)
    mr r3, r20
    fadds f0, f1, f0
    stfs f2, 0xb8(r1)
    stfs f0, 0xb0(r1)
    bl fn_800F8548
    stw r22, 0x8(r1)
    mr r6, r3
    lfs f1, lbl_80885B10
    mr r3, r20
    stw r22, 0xc(r1)
    mr r4, r29
    lfs f2, lbl_80885B30
    mr r5, r28
    addi r7, r1, 0xb0
    addi r8, r29, 0x534
    li r9, 0x0
    li r10, 0x1e
    bl fn_800FAB80
    lwz r3, lbl_8087F048
    addis r3, r3, 0x4
    stw r21, -0x1c64(r3)
lbl_fn_803A4A7C_0000187C:
    addi r30, r30, 0x4
    addi r27, r27, 0x1
lbl_fn_803A4A7C_00001884:
    lbz r0, 0x24c(r31)
    cmpw r27, r0
    blt lbl_fn_803A4A7C_000016C8
    b lbl_fn_803A4A7C_00001C88
lbl_fn_803A4A7C_00001894:
    addi r21, r31, 0x250
    li r20, 0x0
    b lbl_fn_803A4A7C_00001944
lbl_fn_803A4A7C_000018A0:
    lwz r4, 0x0(r21)
    li r5, 0x0
    li r3, 0x0
    li r6, 0x0
    lwz r7, 0x38(r4)
    rlwinm r0, r7, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_803A4A7C_000018D0
    clrlwi r0, r7, 31
    cmplwi r0, 0x1
    beq lbl_fn_803A4A7C_000018D0
    li r6, 0x1
lbl_fn_803A4A7C_000018D0:
    cmpwi r6, 0x0
    beq lbl_fn_803A4A7C_000018EC
    lwz r0, 0x7e0(r4)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_803A4A7C_000018EC
    li r3, 0x1
lbl_fn_803A4A7C_000018EC:
    cmpwi r3, 0x0
    beq lbl_fn_803A4A7C_00001920
    lwz r0, 0x55c(r4)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_803A4A7C_00001914
    lwz r0, 0x560(r4)
    cmpwi r0, 0x1c
    bne lbl_fn_803A4A7C_00001914
    li r3, 0x1
lbl_fn_803A4A7C_00001914:
    cmpwi r3, 0x0
    bne lbl_fn_803A4A7C_00001920
    li r5, 0x1
lbl_fn_803A4A7C_00001920:
    cmpwi r5, 0x0
    beq lbl_fn_803A4A7C_0000193C
    lwz r3, lbl_8087F9E8
    cmpwi r3, 0x0
    beq lbl_fn_803A4A7C_0000193C
    li r5, 0x0
    bl fn_8059C2AC
lbl_fn_803A4A7C_0000193C:
    addi r21, r21, 0x4
    addi r20, r20, 0x1
lbl_fn_803A4A7C_00001944:
    lbz r0, 0x24c(r31)
    cmpw r20, r0
    blt lbl_fn_803A4A7C_000018A0
    b lbl_fn_803A4A7C_00001C88
lbl_fn_803A4A7C_00001954:
    lwz r3, 0x18(r26)
    bl fn_800EFBC4
    mr r20, r3
    lwz r3, 0x18(r26)
    bl fn_800EFC64
    mr r22, r3
    lwz r3, 0x18(r26)
    bl fn_800EFDA0
    cmpwi r20, 0x0
    mr r23, r3
    bne lbl_fn_803A4A7C_00001990
    cmpwi r22, 0x0
    bne lbl_fn_803A4A7C_00001990
    cmpwi r3, 0x0
    beq lbl_fn_803A4A7C_00001AEC
lbl_fn_803A4A7C_00001990:
    lfs f31, lbl_80885B30
    addi r21, r31, 0x250
    lfs f30, lbl_80885B10
    li r24, 0x0
    li r28, -0x1
    li r27, 0x1
    b lbl_fn_803A4A7C_00001ADC
lbl_fn_803A4A7C_000019AC:
    lwz r29, 0x0(r21)
    li r4, 0x270d
    mr r3, r29
    bl fn_80232B7C
    cmpwi r20, 0x0
    beq lbl_fn_803A4A7C_00001A1C
    stfs f30, 0x7c(r1)
    fmr f1, f31
    mr r4, r20
    addi r5, r29, 0xb0
    stfs f30, 0x80(r1)
    addi r7, r1, 0x70
    addi r8, r1, 0x7c
    stfs f30, 0x84(r1)
    addi r9, r1, 0x88
    li r6, 0x0
    li r10, -0x1
    stfs f30, 0x70(r1)
    stfs f30, 0x74(r1)
    stfs f30, 0x78(r1)
    stfs f31, 0x88(r1)
    stfs f31, 0x8c(r1)
    stfs f31, 0x90(r1)
    stfs f31, 0x94(r1)
    stw r28, 0x8(r1)
    stw r27, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
lbl_fn_803A4A7C_00001A1C:
    cmpwi r22, 0x0
    beq lbl_fn_803A4A7C_00001A7C
    stfs f30, 0x54(r1)
    fmr f1, f31
    mr r4, r22
    addi r5, r29, 0xb0
    stfs f30, 0x58(r1)
    addi r7, r1, 0x48
    addi r8, r1, 0x54
    stfs f30, 0x5c(r1)
    addi r9, r1, 0x60
    li r6, 0x0
    li r10, -0x1
    stfs f30, 0x48(r1)
    stfs f30, 0x4c(r1)
    stfs f30, 0x50(r1)
    stfs f31, 0x60(r1)
    stfs f31, 0x64(r1)
    stfs f31, 0x68(r1)
    stfs f31, 0x6c(r1)
    stw r28, 0x8(r1)
    stw r27, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
lbl_fn_803A4A7C_00001A7C:
    cmpwi r23, 0x0
    beq lbl_fn_803A4A7C_00001AD4
    lwz r12, 0x0(r29)
    mr r3, r29
    lwz r12, 0x90(r12)
    mtctr r12
    bctrl
    stfs f31, 0x38(r1)
    mr r4, r23
    addi r7, r29, 0x528
    addi r8, r29, 0x534
    stfs f31, 0x3c(r1)
    addi r9, r1, 0x38
    li r5, 0x0
    li r6, 0x0
    stfs f31, 0x40(r1)
    li r10, -0x1
    stfs f31, 0x44(r1)
    stw r28, 0x8(r1)
    stw r27, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
lbl_fn_803A4A7C_00001AD4:
    addi r21, r21, 0x4
    addi r24, r24, 0x1
lbl_fn_803A4A7C_00001ADC:
    lbz r0, 0x24c(r31)
    cmpw r24, r0
    blt lbl_fn_803A4A7C_000019AC
    b lbl_fn_803A4A7C_00001C88
lbl_fn_803A4A7C_00001AEC:
    addi r21, r31, 0x250
    li r20, 0x0
    b lbl_fn_803A4A7C_00001B14
lbl_fn_803A4A7C_00001AF8:
    lwz r3, lbl_8087F3C0
    li r5, 0x270d
    lwz r4, 0x0(r21)
    li r6, 0x1
    bl fn_80239DAC
    addi r21, r21, 0x4
    addi r20, r20, 0x1
lbl_fn_803A4A7C_00001B14:
    lbz r0, 0x24c(r31)
    cmpw r20, r0
    blt lbl_fn_803A4A7C_00001AF8
    b lbl_fn_803A4A7C_00001C88
lbl_fn_803A4A7C_00001B24:
    lwz r0, 0x1c(r26)
    cmpwi r0, 0x2
    bne lbl_fn_803A4A7C_00001C88
    lwz r0, 0x10(r26)
    cmpwi cr1, r0, 0x1
    bne cr1, lbl_fn_803A4A7C_00001C88
    cmpwi r0, 0x0
    lwz r4, 0x14(r26)
    li r21, 0x0
    beq lbl_fn_803A4A7C_00001B64
    beq cr1, lbl_fn_803A4A7C_00001B90
    cmpwi r0, 0x2
    beq lbl_fn_803A4A7C_00001BC8
    cmpwi r0, 0x3
    beq lbl_fn_803A4A7C_00001BD8
    b lbl_fn_803A4A7C_00001BE4
lbl_fn_803A4A7C_00001B64:
    lwz r0, 0xdc(r20)
    cmpwi r0, 0x0
    beq lbl_fn_803A4A7C_00001B7C
    lwz r3, lbl_8087F8A0
    lwz r3, 0x48(r3)
    b lbl_fn_803A4A7C_00001B88
lbl_fn_803A4A7C_00001B7C:
    lwz r3, lbl_8087F8A0
    li r4, 0x1
    bl fn_8011F8F4
lbl_fn_803A4A7C_00001B88:
    mr r21, r3
    b lbl_fn_803A4A7C_00001BE4
lbl_fn_803A4A7C_00001B90:
    lwz r3, lbl_8087F890
    bl fn_8011FE3C
    lwz r0, lbl_8087FA20
    mr r21, r3
    cmpwi r0, 0x0
    beq lbl_fn_803A4A7C_00001BE4
    cmpwi r3, 0x0
    beq lbl_fn_803A4A7C_00001BE4
    lwz r0, 0x38(r3)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_803A4A7C_00001BE4
    li r21, 0x0
    b lbl_fn_803A4A7C_00001BE4
lbl_fn_803A4A7C_00001BC8:
    lwz r3, lbl_8087F408
    bl fn_8011FC10
    mr r21, r3
    b lbl_fn_803A4A7C_00001BE4
lbl_fn_803A4A7C_00001BD8:
    lwz r3, lbl_8087F8A0
    bl fn_8011F91C
    mr r21, r3
lbl_fn_803A4A7C_00001BE4:
    cmpwi r21, 0x0
    beq lbl_fn_803A4A7C_00001C88
    lwz r3, 0x18(r26)
    bl fn_800EFBC4
    cmpwi r3, 0x0
    mr r20, r3
    beq lbl_fn_803A4A7C_00001C74
    mr r3, r21
    li r4, 0x3e7
    bl fn_80232B7C
    lfs f0, lbl_80885B10
    li r3, -0x1
    lfs f1, lbl_80885B30
    li r0, 0x1
    stfs f0, 0x1c(r1)
    mr r4, r20
    addi r5, r21, 0xb0
    addi r7, r1, 0x10
    stfs f0, 0x20(r1)
    addi r8, r1, 0x1c
    addi r9, r1, 0x28
    li r6, 0x0
    stfs f0, 0x24(r1)
    li r10, -0x1
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f1, 0x28(r1)
    stfs f1, 0x2c(r1)
    stfs f1, 0x30(r1)
    stfs f1, 0x34(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    b lbl_fn_803A4A7C_00001C88
lbl_fn_803A4A7C_00001C74:
    lwz r3, lbl_8087F3C0
    mr r4, r21
    li r5, 0x3e7
    li r6, 0x1
    bl fn_80239DAC
lbl_fn_803A4A7C_00001C88:
    lwz r4, 0x0(r26)
    lis r3, lbl_8074ED24@ha
    li r0, 0x0
    stw r0, 0x4(r25)
    slwi r0, r4, 2
    addi r3, r3, lbl_8074ED24@l
    lwzx r0, r3, r0
    add r0, r26, r0
    stw r0, 0x0(r25)
    psq_l f31, 0x158(r1), 0, 0
    lfd f31, 0x150(r1)
    psq_l f30, 0x148(r1), 0, 0
    lfd f30, 0x140(r1)
    addi r11, r1, 0x140
    bl _restgpr_20
    lwz r0, 0x164(r1)
    mtlr r0
    addi r1, r1, 0x160
    blr
}
