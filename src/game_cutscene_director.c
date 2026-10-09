#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_22(void);
extern void _savegpr_22(void);
extern void fn_8000D124(void);
extern void fn_8000D3A4(void);
extern void fn_8001047C(void);
extern void fn_80011034(void);
extern void fn_80011220(void);
extern void fn_80013338(void);
extern void fn_80013410(void);
extern void fn_80013484(void);
extern void fn_8004ECC0(void);
extern void fn_8004ED34(void);
extern void fn_80057A64(void);
extern void fn_80057A68(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_80092814(void);
extern void fn_80097C08(void);
extern void fn_80097D40(void);
extern void fn_800A08D4(void);
extern void fn_800F72CC(void);
extern void fn_800F7FD8(void);
extern void fn_800F8548(void);
extern void fn_80121F00(void);
extern void fn_8012A1B8(void);
extern void fn_8012A288(void);
extern void fn_8013A194(void);
extern void fn_8013C38C(void);
extern void fn_801404F8(void);
extern void fn_80140500(void);
extern void fn_80148990(void);
extern void fn_802A7910(void);
extern void fn_802A7964(void);
extern void fn_80323C18(void);
extern void fn_80326E60(void);
extern void fn_80326F0C(void);
extern void fn_80327018(void);
extern void fn_80327118(void);
extern void fn_803271A4(void);
extern void fn_803272A8(void);
extern void fn_803278B4(void);
extern void fn_803279D4(void);
extern void fn_80327A64(void);
extern void fn_8032A3D4(void);
extern void fn_8032A894(void);
extern void fn_8032A9F4(void);
extern void fn_80370AE4(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9920(void);
extern void fn_805F99F0(void);
extern void fn_805F9AB0(void);
extern void fn_80680CF8(void);
extern void fn_80682428(void);
extern void fn_80695720(void);
extern void fn_80695AD0(void);

/* External data declarations */
extern u8 lbl_80749D10[];
extern u8 lbl_80766768[];
extern u8 lbl_80788BB0[];

/* Small data declarations */
extern u32 lbl_8087D9E0;
extern u32 lbl_8087D9E4;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087EFB4;
extern u32 lbl_80884F10;
extern u32 lbl_80884F1C;
extern u32 lbl_80884F30;
extern u32 lbl_80884F50;
extern u32 lbl_80884F60;
extern u32 lbl_80884F8C;
extern u32 lbl_80884F90;
extern u32 lbl_80884F94;
extern u32 lbl_80884F9C;
extern u32 lbl_80884FB4;
extern u32 lbl_80884FB8;
extern u32 lbl_80884FBC;
extern u32 lbl_80884FC0;
extern u32 lbl_80884FC4;
extern u32 lbl_80884FC8;
extern u32 lbl_80884FCC;
extern u32 lbl_80884FD0;
extern u32 lbl_80884FD4;
extern u32 lbl_80884FD8;

/* Function declarations */
void fn_803252E0(void);
void fn_803256F8(void);
void fn_803258D4(void);
void fn_80325BA0(void);
void fn_80325F2C(void);
void fn_80326798(void);
void fn_803267E8(void);

asm void fn_803252E0(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stfd f31, 0x70(r1)
    psq_st f31, 0x78(r1), 0, 0
    stfd f30, 0x60(r1)
    psq_st f30, 0x68(r1), 0, 0
    stfd f29, 0x50(r1)
    psq_st f29, 0x58(r1), 0, 0
    stfd f28, 0x40(r1)
    psq_st f28, 0x48(r1), 0, 0
    stw r31, 0x3c(r1)
    mr r31, r3
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 25
    bne lbl_fn_803252E0_000003E4
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_803252E0_000000D8
    lwz r0, 0xf80(r3)
    cmpwi r0, 0x0
    bne lbl_fn_803252E0_00000078
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x20(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x24(r1)
    stw r0, 0x28(r1)
    b lbl_fn_803252E0_00000094
lbl_fn_803252E0_00000078:
    lis r5, lbl_80788BB0@ha
    lwzu r4, lbl_80788BB0@l(r5)
    stw r4, 0x20(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x24(r1)
    stw r0, 0x28(r1)
lbl_fn_803252E0_00000094:
    lwz r5, 0x20(r1)
    addi r3, r1, 0x14
    lwz r4, 0x24(r1)
    lwz r0, 0x28(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_803252E0_000000D8
    lwz r3, 0xf80(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_803252E0_000003E4
lbl_fn_803252E0_000000D8:
    lwz r3, 0x55c(r31)
    cmpwi r3, 0x9
    beq lbl_fn_803252E0_000003E4
    lwz r0, 0x12a4(r31)
    extrwi. r0, r0, 1, 29
    beq lbl_fn_803252E0_000000F4
    b lbl_fn_803252E0_000003E4
lbl_fn_803252E0_000000F4:
    cmpwi r3, 0x2
    bne lbl_fn_803252E0_0000011C
    lha r3, 0xd3a(r31)
    subi r0, r3, 0x14
    clrlwi r0, r0, 16
    cmplwi r0, 0x2
    bgt lbl_fn_803252E0_0000011C
    lhz r0, 0xd38(r31)
    extrwi. r0, r0, 1, 17
    beq lbl_fn_803252E0_000003E4
lbl_fn_803252E0_0000011C:
    lwz r5, lbl_8087EFA8
    addi r3, r31, 0xb0
    lwz r4, 0x488(r31)
    lfs f29, 0x3a4(r5)
    bl fn_80097D40
    cmpwi r3, 0x0
    beq lbl_fn_803252E0_00000140
    bl fn_800A08D4
    b lbl_fn_803252E0_00000144
lbl_fn_803252E0_00000140:
    lfs f1, lbl_80884FB8
lbl_fn_803252E0_00000144:
    lfs f0, lbl_80884F10
    fcmpu cr0, f0, f1
    lwz r4, 0x490(r31)
    addi r3, r31, 0xb0
    bl fn_80097D40
    cmpwi r3, 0x0
    beq lbl_fn_803252E0_00000168
    bl fn_800A08D4
    b lbl_fn_803252E0_0000016C
lbl_fn_803252E0_00000168:
    lfs f1, lbl_80884FB8
lbl_fn_803252E0_0000016C:
    lfs f0, lbl_80884F10
    fcmpu cr0, f0, f1
    lfs f0, 0x570(r31)
    lfs f2, 0x500(r31)
    fdivs f1, f0, f29
    lfs f0, 0x508(r31)
    fcmpo cr0, f1, f2
    bge lbl_fn_803252E0_0000019C
    fdivs f31, f1, f2
    lfs f30, lbl_80884F1C
    lfs f29, lbl_80884F10
    b lbl_fn_803252E0_000001DC
lbl_fn_803252E0_0000019C:
    fcmpo cr0, f1, f0
    bge lbl_fn_803252E0_000001C0
    fsubs f1, f1, f2
    lfs f31, lbl_80884F1C
    fsubs f0, f0, f2
    lfs f29, lbl_80884F10
    fdivs f0, f1, f0
    fadds f30, f31, f0
    b lbl_fn_803252E0_000001DC
lbl_fn_803252E0_000001C0:
    fdivs f1, f1, f0
    lfs f2, lbl_80884F1C
    lfs f0, lbl_80884F50
    lfs f31, lbl_80884F9C
    lfs f30, lbl_80884F10
    fsubs f1, f1, f2
    fmadds f29, f0, f1, f2
lbl_fn_803252E0_000001DC:
    lwz r4, lbl_8087EFB4
    addi r3, r1, 0x8
    lfs f0, 0x530(r31)
    lfs f1, 0x114(r4)
    lfs f3, 0x110(r4)
    fsubs f4, f1, f0
    lfs f2, 0x52c(r31)
    lfs f1, 0x10c(r4)
    lfs f0, 0x528(r31)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f4, 0x10(r1)
    bl fn_805F9920
    lfs f0, lbl_80884FBC
    fcmpo cr0, f1, f0
    ble lbl_fn_803252E0_000002D4
    lfs f0, lbl_80884F8C
    li r0, 0x1
    lfs f1, lbl_80884F1C
    fcmpo cr0, f31, f0
    stw r0, 0x3fc(r31)
    stfs f1, 0x2fc(r31)
    bge lbl_fn_803252E0_00000270
    lwz r5, 0x484(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80884F10
    li r4, 0x0
    lfs f2, lbl_80884F50
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f0, lbl_80884F1C
    stfs f0, 0x2e8(r31)
    b lbl_fn_803252E0_000003E4
lbl_fn_803252E0_00000270:
    lfs f0, lbl_80884F90
    fcmpo cr0, f31, f0
    bge lbl_fn_803252E0_000002A8
    lwz r5, 0x488(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80884F10
    li r4, 0x0
    lfs f2, lbl_80884F50
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    stfs f30, 0x2e8(r31)
    b lbl_fn_803252E0_000003E4
lbl_fn_803252E0_000002A8:
    lwz r5, 0x490(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80884F10
    li r4, 0x0
    lfs f2, lbl_80884F50
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    stfs f29, 0x2e8(r31)
    b lbl_fn_803252E0_000003E4
lbl_fn_803252E0_000002D4:
    lfs f1, lbl_80884F1C
    li r0, 0x3
    lfs f0, lbl_80884F10
    fsubs f28, f1, f31
    stw r0, 0x3fc(r31)
    fcmpo cr0, f28, f0
    bge lbl_fn_803252E0_000002F8
    fmr f28, f0
    b lbl_fn_803252E0_00000304
lbl_fn_803252E0_000002F8:
    fcmpo cr0, f28, f1
    ble lbl_fn_803252E0_00000304
    fmr f28, f1
lbl_fn_803252E0_00000304:
    lwz r5, 0x484(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80884F10
    li r4, 0x0
    lfs f2, lbl_80884F50
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f2, lbl_80884F1C
    stfs f28, 0x2fc(r31)
    fsubs f1, f2, f31
    lfs f0, lbl_80884F10
    stfs f2, 0x2e8(r31)
    fabs f1, f1
    frsp f1, f1
    fsubs f28, f2, f1
    fcmpo cr0, f28, f0
    bge lbl_fn_803252E0_00000358
    fmr f28, f0
    b lbl_fn_803252E0_00000364
lbl_fn_803252E0_00000358:
    fcmpo cr0, f28, f2
    ble lbl_fn_803252E0_00000364
    fmr f28, f2
lbl_fn_803252E0_00000364:
    lwz r5, 0x488(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80884F10
    li r4, 0x1
    lfs f2, lbl_80884F50
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lfs f1, lbl_80884F1C
    lfs f0, lbl_80884F10
    fsubs f31, f31, f1
    stfs f30, 0x318(r31)
    stfs f28, 0x32c(r31)
    fcmpo cr0, f31, f0
    bge lbl_fn_803252E0_000003AC
    fmr f31, f0
    b lbl_fn_803252E0_000003B8
lbl_fn_803252E0_000003AC:
    fcmpo cr0, f31, f1
    ble lbl_fn_803252E0_000003B8
    fmr f31, f1
lbl_fn_803252E0_000003B8:
    lwz r5, 0x490(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_80884F10
    li r4, 0x2
    lfs f2, lbl_80884F50
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    stfs f29, 0x348(r31)
    stfs f31, 0x35c(r31)
lbl_fn_803252E0_000003E4:
    lwz r0, 0x84(r1)
    psq_l f31, 0x78(r1), 0, 0
    lfd f31, 0x70(r1)
    psq_l f30, 0x68(r1), 0, 0
    lfd f30, 0x60(r1)
    psq_l f29, 0x58(r1), 0, 0
    lfd f29, 0x50(r1)
    psq_l f28, 0x48(r1), 0, 0
    lfd f28, 0x40(r1)
    lwz r31, 0x3c(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_803256F8(void)
{
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    stw r0, 0xd4(r1)
    addi r11, r1, 0x90
    stfd f31, 0xc0(r1)
    psq_st f31, 0xc8(r1), 0, 0
    stfd f30, 0xb0(r1)
    psq_st f30, 0xb8(r1), 0, 0
    stfd f29, 0xa0(r1)
    psq_st f29, 0xa8(r1), 0, 0
    stfd f28, 0x90(r1)
    psq_st f28, 0x98(r1), 0, 0
    bl _savegpr_22
    lis r24, lbl_80749D10@ha
    lfs f28, lbl_80884F94
    lfs f29, lbl_80884F1C
    mr r27, r3
    lfs f30, lbl_80884F10
    mr r28, r4
    lfs f31, lbl_80884FB4
    mr r29, r5
    addi r23, r1, 0x50
    addi r24, r24, lbl_80749D10@l
    addi r31, r1, 0x40
    li r30, 0x0
    li r26, 0x0
    li r25, 0x0
    b lbl_fn_803256F8_000005B4
lbl_fn_803256F8_00000488:
    lwz r3, 0x21c(r27)
    addi r4, r24, 0x16
    lwz r3, 0x48(r3)
    lwzx r3, r3, r25
    lwz r22, 0x10(r3)
    mr r3, r22
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803256F8_00000518
    lwz r0, 0x648(r27)
    cmpwi r0, 0x0
    bne lbl_fn_803256F8_000005A8
    add r5, r28, r26
    addi r3, r1, 0x30
    psq_l f1, 0x10(r5), 0, 0
    addi r4, r1, 0x14
    psq_l f2, 0x18(r5), 0, 0
    psq_st f2, 0x8(r23), 0, 0
    psq_st f1, 0x0(r23), 0, 0
    lfs f3, 0x584(r27)
    lfs f0, 0x580(r27)
    fnmsubs f1, f28, f3, f0
    stfs f29, 0x14(r1)
    stfs f30, 0x18(r1)
    stfs f30, 0x1c(r1)
    bl fn_805F9AB0
    mr r4, r23
    mr r5, r23
    addi r3, r1, 0x30
    bl fn_805F99F0
    psq_l f2, 0x8(r23), 0, 0
    add r3, r28, r26
    psq_l f1, 0x0(r23), 0, 0
    psq_st f1, 0x10(r3), 0, 0
    psq_st f2, 0x18(r3), 0, 0
    b lbl_fn_803256F8_000005A8
lbl_fn_803256F8_00000518:
    mr r3, r22
    addi r4, r24, 0x3a
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803256F8_000005A8
    lwz r0, 0x648(r27)
    cmpwi r0, 0x0
    bne lbl_fn_803256F8_000005A8
    lwz r3, 0x12a4(r27)
    srwi. r0, r3, 31
    bne lbl_fn_803256F8_000005A8
    extrwi. r0, r3, 1, 25
    bne lbl_fn_803256F8_000005A8
    add r5, r28, r26
    addi r3, r1, 0x20
    psq_l f1, 0x10(r5), 0, 0
    addi r4, r1, 0x8
    psq_l f2, 0x18(r5), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    lfs f3, 0x580(r27)
    lfs f0, 0x584(r27)
    fmadds f1, f31, f3, f0
    stfs f29, 0x8(r1)
    stfs f30, 0xc(r1)
    stfs f30, 0x10(r1)
    bl fn_805F9AB0
    mr r4, r31
    mr r5, r31
    addi r3, r1, 0x20
    bl fn_805F99F0
    psq_l f2, 0x8(r31), 0, 0
    add r3, r28, r26
    psq_l f1, 0x0(r31), 0, 0
    psq_st f1, 0x10(r3), 0, 0
    psq_st f2, 0x18(r3), 0, 0
lbl_fn_803256F8_000005A8:
    addi r30, r30, 0x1
    addi r26, r26, 0x2c
    addi r25, r25, 0x4
lbl_fn_803256F8_000005B4:
    cmpw r30, r29
    blt lbl_fn_803256F8_00000488
    addi r11, r1, 0x90
    psq_l f31, 0xc8(r1), 0, 0
    lfd f31, 0xc0(r1)
    psq_l f30, 0xb8(r1), 0, 0
    lfd f30, 0xb0(r1)
    psq_l f29, 0xa8(r1), 0, 0
    lfd f29, 0xa0(r1)
    psq_l f28, 0x98(r1), 0, 0
    lfd f28, 0x90(r1)
    bl _restgpr_22
    lwz r0, 0xd4(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}

asm void fn_803258D4(void)
{
    nofralloc
    stwu r1, -0x1c0(r1)
    mflr r0
    stw r0, 0x1c4(r1)
    stw r31, 0x1bc(r1)
    stw r30, 0x1b8(r1)
    mr r30, r5
    stw r29, 0x1b4(r1)
    mr r29, r4
    stw r28, 0x1b0(r1)
    mr r28, r3
    addi r3, r3, 0x10d8
    bl fn_8012A288
    cmpwi r3, 0x0
    bne lbl_fn_803258D4_000008A0
    lwz r30, 0x10(r30)
    lis r31, lbl_80749D10@ha
    addi r31, r31, lbl_80749D10@l
    mr r3, r30
    addi r4, r31, 0x16
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803258D4_000006C8
    lwz r0, 0x648(r28)
    cmpwi r0, 0x0
    bne lbl_fn_803258D4_000008A0
    lfs f9, 0x2c(r29)
    addi r3, r1, 0x180
    lfs f10, 0x1c(r29)
    li r4, 0x79
    lfs f0, lbl_80884F10
    lfs f11, 0xc(r29)
    stfs f0, 0x1c(r29)
    lfs f8, lbl_80884F94
    stfs f0, 0xc(r29)
    stfs f0, 0x2c(r29)
    lfs f7, 0x584(r28)
    lfs f0, 0x580(r28)
    stfs f11, 0x20(r1)
    fnmsubs f1, f8, f7, f0
    stfs f10, 0x24(r1)
    stfs f9, 0x28(r1)
    bl fn_805F8E70
    mr r4, r29
    mr r5, r29
    addi r3, r1, 0x180
    bl fn_805F89F0
    lfs f8, 0x20(r1)
    lfs f7, 0x24(r1)
    lfs f0, 0x28(r1)
    stfs f8, 0xc(r29)
    stfs f7, 0x1c(r29)
    stfs f0, 0x2c(r29)
    b lbl_fn_803258D4_000008A0
lbl_fn_803258D4_000006C8:
    mr r3, r30
    addi r4, r31, 0x1b
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803258D4_000008A0
    lwz r0, 0x55c(r28)
    cmpwi r0, 0x8
    beq lbl_fn_803258D4_000008A0
    lfs f10, 0x2c(r29)
    addi r31, r1, 0x150
    lfs f9, lbl_80884F10
    lfs f11, 0x1c(r29)
    lfs f12, 0xc(r29)
    stfs f9, 0x1c(r29)
    lfs f8, lbl_80884F50
    stfs f9, 0xc(r29)
    lfs f0, lbl_80884F1C
    stfs f9, 0x2c(r29)
    lfs f7, 0x14b4(r28)
    stfs f12, 0x14(r1)
    fmuls f1, f8, f7
    stfs f11, 0x18(r1)
    fcmpu cr0, f9, f1
    stfs f10, 0x1c(r1)
    stfs f9, 0x8(r1)
    stfs f7, 0xc(r1)
    stfs f1, 0x10(r1)
    stfs f9, 0x17c(r1)
    stfs f9, 0x174(r1)
    stfs f9, 0x170(r1)
    stfs f9, 0x16c(r1)
    stfs f9, 0x168(r1)
    stfs f9, 0x160(r1)
    stfs f9, 0x15c(r1)
    stfs f9, 0x158(r1)
    stfs f9, 0x154(r1)
    stfs f0, 0x178(r1)
    stfs f0, 0x164(r1)
    stfs f0, 0x150(r1)
    beq lbl_fn_803258D4_000007B8
    addi r3, r1, 0xf0
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0xf0
    addi r5, r1, 0x120
    bl fn_805F89F0
    addi r3, r1, 0x120
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_803258D4_000007B8:
    lfs f0, lbl_80884F10
    lfs f1, 0xc(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_803258D4_00000818
    addi r3, r1, 0x90
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0x90
    addi r5, r1, 0xc0
    bl fn_805F89F0
    addi r3, r1, 0xc0
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_803258D4_00000818:
    lfs f0, lbl_80884F10
    lfs f1, 0x8(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_803258D4_00000878
    addi r3, r1, 0x30
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0x30
    addi r5, r1, 0x60
    bl fn_805F89F0
    addi r3, r1, 0x60
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_803258D4_00000878:
    mr r4, r29
    mr r5, r29
    addi r3, r1, 0x150
    bl fn_805F89F0
    lfs f8, 0x14(r1)
    lfs f7, 0x18(r1)
    lfs f0, 0x1c(r1)
    stfs f8, 0xc(r29)
    stfs f7, 0x1c(r29)
    stfs f0, 0x2c(r29)
lbl_fn_803258D4_000008A0:
    lwz r0, 0x1c4(r1)
    lwz r31, 0x1bc(r1)
    lwz r30, 0x1b8(r1)
    lwz r29, 0x1b4(r1)
    lwz r28, 0x1b0(r1)
    mtlr r0
    addi r1, r1, 0x1c0
    blr
}

asm void fn_80325BA0(void)
{
    nofralloc
    stwu r1, -0x1c0(r1)
    mflr r0
    lfs f0, lbl_80884F9C
    stw r0, 0x1c4(r1)
    lfs f8, lbl_80884F10
    stw r31, 0x1bc(r1)
    mr r31, r3
    stw r30, 0x1b8(r1)
    addi r30, r1, 0x180
    lfs f7, 0x5b0(r3)
    fmuls f9, f7, f0
    lfs f7, lbl_80884FC0
    lfs f0, lbl_80884F1C
    stfs f9, 0x620(r3)
    stfs f8, 0x50(r1)
    stfs f8, 0x54(r1)
    stfs f7, 0x58(r1)
    stfs f8, 0x1ac(r1)
    stfs f8, 0x1a4(r1)
    stfs f8, 0x1a0(r1)
    stfs f8, 0x19c(r1)
    stfs f8, 0x198(r1)
    stfs f8, 0x190(r1)
    stfs f8, 0x18c(r1)
    stfs f8, 0x188(r1)
    stfs f8, 0x184(r1)
    stfs f0, 0x1a8(r1)
    stfs f0, 0x194(r1)
    stfs f0, 0x180(r1)
    lfs f1, 0x53c(r3)
    fcmpu cr0, f8, f1
    beq lbl_fn_80325BA0_00000990
    addi r3, r1, 0x90
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x90
    addi r5, r1, 0x60
    bl fn_805F89F0
    addi r3, r1, 0x60
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_80325BA0_00000990:
    lfs f0, lbl_80884F10
    lfs f1, 0x538(r31)
    fcmpu cr0, f0, f1
    beq lbl_fn_80325BA0_000009F0
    addi r3, r1, 0xf0
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0xf0
    addi r5, r1, 0xc0
    bl fn_805F89F0
    addi r3, r1, 0xc0
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_80325BA0_000009F0:
    lfs f0, lbl_80884F10
    lfs f1, 0x534(r31)
    fcmpu cr0, f0, f1
    beq lbl_fn_80325BA0_00000A50
    addi r3, r1, 0x150
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x150
    addi r5, r1, 0x120
    bl fn_805F89F0
    addi r3, r1, 0x120
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_80325BA0_00000A50:
    addi r4, r1, 0x50
    addi r3, r1, 0x180
    mr r5, r4
    bl fn_805F93C0
    lfs f9, 0x52c(r31)
    lis r4, lbl_80749D10@ha
    lfs f7, 0x5a8(r31)
    addi r4, r4, lbl_80749D10@l
    lfs f8, 0x528(r31)
    addi r6, r1, 0x2c
    fadds f10, f9, f7
    lfs f0, 0x5a4(r31)
    lfs f7, 0x54(r1)
    addi r3, r31, 0xb0
    fadds f11, f8, f0
    lfs f0, 0x50(r1)
    fadds f8, f10, f7
    lfs f7, 0x530(r31)
    fadds f9, f11, f0
    lfs f0, 0x5ac(r31)
    stfs f8, 0x30(r1)
    addi r4, r4, 0x40
    stfs f9, 0x2c(r1)
    fadds f9, f7, f0
    lfs f0, 0x58(r1)
    li r5, 0x0
    psq_l f1, 0x0(r6), 0, 0
    fadds f2, f9, f0
    psq_st f1, 0x614(r31), 0, 0
    lfs f13, 0x530(r31)
    lfs f7, 0x620(r31)
    lfs f0, 0x52c(r31)
    lfs f8, 0x618(r31)
    fadds f12, f0, f7
    stfs f11, 0x20(r1)
    fadds f0, f8, f7
    lfs f7, 0x528(r31)
    stfs f10, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f2, 0x34(r1)
    stfs f2, 0x61c(r31)
    stfs f0, 0x618(r31)
    stfs f7, 0x44(r1)
    stfs f12, 0x48(r1)
    stfs f13, 0x4c(r1)
    bl fn_80092814
    cmpwi r3, -0x1
    ble lbl_fn_80325BA0_00000B5C
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    addi r5, r1, 0x14
    lfs f0, lbl_80884F1C
    addi r4, r1, 0x38
    add r3, r3, r0
    lfs f7, 0x1c(r3)
    lfs f8, 0xc(r3)
    stfs f8, 0x14(r1)
    lfs f2, 0x2c(r3)
    stfs f7, 0x18(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lfs f7, 0x3c(r1)
    stfs f2, 0x1c(r1)
    fsubs f0, f7, f0
    stfs f2, 0x40(r1)
    stfs f0, 0x3c(r1)
    b lbl_fn_80325BA0_00000B90
lbl_fn_80325BA0_00000B5C:
    addi r4, r1, 0x44
    lfs f2, 0x4c(r1)
    addi r3, r1, 0x38
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lfs f9, lbl_80884F9C
    lfs f8, 0x620(r31)
    lfs f7, 0x5b4(r31)
    lfs f0, 0x3c(r1)
    fnmsubs f7, f9, f8, f7
    stfs f2, 0x40(r1)
    fadds f0, f0, f7
    stfs f0, 0x3c(r1)
lbl_fn_80325BA0_00000B90:
    addi r3, r1, 0x44
    lfs f2, 0x4c(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r5, r1, 0x38
    lwz r0, 0x5c0(r31)
    lis r3, lbl_80749D10@ha
    psq_st f1, 0x5f4(r31), 0, 0
    addi r3, r3, lbl_80749D10@l
    psq_l f1, 0x0(r5), 0, 0
    clrlwi r0, r0, 1
    lfs f0, 0x620(r31)
    addi r4, r3, 0x16
    stfs f2, 0x5fc(r31)
    addi r3, r31, 0xb0
    lfs f2, 0x40(r1)
    li r5, 0x0
    psq_st f1, 0x600(r31), 0, 0
    stfs f2, 0x608(r31)
    stfs f0, 0x60c(r31)
    stw r0, 0x5c0(r31)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80325BA0_00000BF4
    li r5, 0x0
    b lbl_fn_80325BA0_00000C00
lbl_fn_80325BA0_00000BF4:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r5, r3, r0
lbl_fn_80325BA0_00000C00:
    lfs f7, 0x1c(r5)
    addi r4, r1, 0x8
    lfs f8, 0xc(r5)
    addi r3, r31, 0x148c
    lfs f2, 0x2c(r5)
    lfs f0, lbl_80884FC4
    stfs f8, 0x8(r1)
    stfs f7, 0xc(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x1494(r31)
    stfs f0, 0x1498(r31)
    lwz r31, 0x1bc(r1)
    lwz r30, 0x1b8(r1)
    lwz r0, 0x1c4(r1)
    stfs f2, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x1c0
    blr
}

asm void fn_80325F2C(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    lfs f5, lbl_80884F10
    li r4, 0x0
    stw r0, 0x54(r1)
    addi r5, r1, 0x8
    fmr f2, f5
    lfs f4, lbl_80884FC4
    stw r31, 0x4c(r1)
    addi r6, r1, 0x30
    addi r7, r1, 0x20
    mr r31, r3
    stw r30, 0x48(r1)
    stw r29, 0x44(r1)
    lfs f3, 0x52c(r3)
    lfs f0, 0x5a8(r3)
    lwz r0, 0x62c(r3)
    fadds f6, f3, f0
    lfs f3, 0x528(r3)
    lfs f0, 0x5a4(r3)
    cmpwi r0, 0x0
    stfs f5, 0x8(r1)
    fadds f7, f3, f0
    stfs f5, 0xc(r1)
    lfs f3, 0x530(r3)
    psq_l f1, 0x0(r5), 0, 0
    lfs f0, 0x5ac(r3)
    stfs f7, 0x20(r1)
    fadds f3, f3, f0
    stfs f2, 0x38(r1)
    fmr f2, f3
    stfs f6, 0x24(r1)
    psq_st f1, 0x0(r6), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    lfs f0, 0x34(r1)
    stw r4, 0x2c(r1)
    fadds f0, f0, f4
    stfs f5, 0x10(r1)
    stfs f4, 0x3c(r1)
    stfs f3, 0x28(r1)
    stfs f2, 0x38(r1)
    stfs f0, 0x34(r1)
    beq lbl_fn_80325F2C_00000D08
    lwz r0, 0x628(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80325F2C_00000EA8
lbl_fn_80325F2C_00000D08:
    lwz r0, 0x628(r3)
    li r30, 0x8
    cmplwi r0, 0x8
    bgt lbl_fn_80325F2C_00001050
    li r3, 0xb0
    li r4, 0x0
    la r5, lbl_8087D9E4
    la r6, lbl_8087D9E0
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_80148990@ha
    li r5, 0x0
    addi r4, r4, fn_80148990@l
    li r6, 0x14
    li r7, 0x8
    bl fn_80695720
    lwz r0, 0x62c(r31)
    mr r29, r3
    cmpwi r0, 0x0
    beq lbl_fn_80325F2C_00000E9C
    lwz r0, 0x624(r31)
    li r5, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_80325F2C_00000D6C
    mr r5, r0
lbl_fn_80325F2C_00000D6C:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_80325F2C_00000E88
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_80325F2C_00000E50
lbl_fn_80325F2C_00000D84:
    lwz r0, 0x62c(r31)
    add r6, r3, r4
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r31)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r31)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r31)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    bdnz lbl_fn_80325F2C_00000D84
    andi. r5, r5, 0x3
    beq lbl_fn_80325F2C_00000E88
lbl_fn_80325F2C_00000E50:
    mtctr r5
lbl_fn_80325F2C_00000E54:
    lwz r0, 0x62c(r31)
    add r6, r3, r4
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    bdnz lbl_fn_80325F2C_00000E54
lbl_fn_80325F2C_00000E88:
    lwz r3, 0x62c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80325F2C_00000E9C
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80325F2C_00000E9C:
    stw r29, 0x62c(r31)
    stw r30, 0x628(r31)
    b lbl_fn_80325F2C_00001050
lbl_fn_80325F2C_00000EA8:
    lwz r3, 0x624(r3)
    cmplw r3, r0
    blt lbl_fn_80325F2C_00001050
    slwi r30, r3, 1
    cmplw r0, r30
    bgt lbl_fn_80325F2C_00001050
    mulli r3, r30, 0x14
    li r4, 0x0
    la r5, lbl_8087D9E4
    la r6, lbl_8087D9E0
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_80148990@ha
    mr r7, r30
    addi r4, r4, fn_80148990@l
    li r5, 0x0
    li r6, 0x14
    bl fn_80695720
    lwz r0, 0x62c(r31)
    mr r29, r3
    cmpwi r0, 0x0
    beq lbl_fn_80325F2C_00001048
    lwz r0, 0x624(r31)
    mr r5, r30
    cmplw r30, r0
    ble lbl_fn_80325F2C_00000F18
    mr r5, r0
lbl_fn_80325F2C_00000F18:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_80325F2C_00001034
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_80325F2C_00000FFC
lbl_fn_80325F2C_00000F30:
    lwz r0, 0x62c(r31)
    add r6, r3, r4
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r31)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r31)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r31)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    bdnz lbl_fn_80325F2C_00000F30
    andi. r5, r5, 0x3
    beq lbl_fn_80325F2C_00001034
lbl_fn_80325F2C_00000FFC:
    mtctr r5
lbl_fn_80325F2C_00001000:
    lwz r0, 0x62c(r31)
    add r6, r3, r4
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    bdnz lbl_fn_80325F2C_00001000
lbl_fn_80325F2C_00001034:
    lwz r3, 0x62c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80325F2C_00001048
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80325F2C_00001048:
    stw r29, 0x62c(r31)
    stw r30, 0x628(r31)
lbl_fn_80325F2C_00001050:
    lwz r0, 0x624(r31)
    addi r3, r1, 0x30
    psq_l f1, 0x0(r3), 0, 0
    lis r4, lbl_80749D10@ha
    mulli r5, r0, 0x14
    lwz r6, 0x62c(r31)
    lwz r0, 0x2c(r1)
    addi r4, r4, lbl_80749D10@l
    lfs f2, 0x38(r1)
    addi r3, r31, 0xb0
    stwux r0, r6, r5
    addi r4, r4, 0x40
    lfs f3, 0x3c(r1)
    li r5, 0x0
    psq_st f1, 0x4(r6), 0, 0
    lfs f0, lbl_80884FC4
    stfs f2, 0xc(r6)
    stfs f3, 0x10(r6)
    lwz r6, 0x624(r31)
    stfs f0, 0x3c(r1)
    addi r0, r6, 0x1
    stw r0, 0x624(r31)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_80325F2C_000010BC
    li r5, 0x0
    b lbl_fn_80325F2C_000010C8
lbl_fn_80325F2C_000010BC:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r5, r3, r0
lbl_fn_80325F2C_000010C8:
    lfs f0, 0x1c(r5)
    addi r4, r1, 0x14
    lfs f3, 0xc(r5)
    addi r3, r1, 0x30
    lwz r0, 0x62c(r31)
    lfs f2, 0x2c(r5)
    stfs f3, 0x14(r1)
    cmpwi r0, 0x0
    stfs f0, 0x18(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0x1c(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x38(r1)
    beq lbl_fn_80325F2C_0000110C
    lwz r0, 0x628(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80325F2C_000012AC
lbl_fn_80325F2C_0000110C:
    lwz r0, 0x628(r31)
    li r30, 0x8
    cmplwi r0, 0x8
    bgt lbl_fn_80325F2C_00001454
    li r3, 0xb0
    li r4, 0x0
    la r5, lbl_8087D9E4
    la r6, lbl_8087D9E0
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_80148990@ha
    li r5, 0x0
    addi r4, r4, fn_80148990@l
    li r6, 0x14
    li r7, 0x8
    bl fn_80695720
    lwz r0, 0x62c(r31)
    mr r29, r3
    cmpwi r0, 0x0
    beq lbl_fn_80325F2C_000012A0
    lwz r0, 0x624(r31)
    li r5, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_80325F2C_00001170
    mr r5, r0
lbl_fn_80325F2C_00001170:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_80325F2C_0000128C
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_80325F2C_00001254
lbl_fn_80325F2C_00001188:
    lwz r0, 0x62c(r31)
    add r6, r3, r4
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r31)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r31)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r31)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    bdnz lbl_fn_80325F2C_00001188
    andi. r5, r5, 0x3
    beq lbl_fn_80325F2C_0000128C
lbl_fn_80325F2C_00001254:
    mtctr r5
lbl_fn_80325F2C_00001258:
    lwz r0, 0x62c(r31)
    add r6, r3, r4
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    bdnz lbl_fn_80325F2C_00001258
lbl_fn_80325F2C_0000128C:
    lwz r3, 0x62c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80325F2C_000012A0
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80325F2C_000012A0:
    stw r29, 0x62c(r31)
    stw r30, 0x628(r31)
    b lbl_fn_80325F2C_00001454
lbl_fn_80325F2C_000012AC:
    lwz r3, 0x624(r31)
    cmplw r3, r0
    blt lbl_fn_80325F2C_00001454
    slwi r30, r3, 1
    cmplw r0, r30
    bgt lbl_fn_80325F2C_00001454
    mulli r3, r30, 0x14
    li r4, 0x0
    la r5, lbl_8087D9E4
    la r6, lbl_8087D9E0
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_80148990@ha
    mr r7, r30
    addi r4, r4, fn_80148990@l
    li r5, 0x0
    li r6, 0x14
    bl fn_80695720
    lwz r0, 0x62c(r31)
    mr r29, r3
    cmpwi r0, 0x0
    beq lbl_fn_80325F2C_0000144C
    lwz r0, 0x624(r31)
    mr r5, r30
    cmplw r30, r0
    ble lbl_fn_80325F2C_0000131C
    mr r5, r0
lbl_fn_80325F2C_0000131C:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_80325F2C_00001438
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_80325F2C_00001400
lbl_fn_80325F2C_00001334:
    lwz r0, 0x62c(r31)
    add r6, r3, r4
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r31)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r31)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r31)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    bdnz lbl_fn_80325F2C_00001334
    andi. r5, r5, 0x3
    beq lbl_fn_80325F2C_00001438
lbl_fn_80325F2C_00001400:
    mtctr r5
lbl_fn_80325F2C_00001404:
    lwz r0, 0x62c(r31)
    add r6, r3, r4
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    bdnz lbl_fn_80325F2C_00001404
lbl_fn_80325F2C_00001438:
    lwz r3, 0x62c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80325F2C_0000144C
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80325F2C_0000144C:
    stw r29, 0x62c(r31)
    stw r30, 0x628(r31)
lbl_fn_80325F2C_00001454:
    lwz r0, 0x624(r31)
    addi r5, r1, 0x30
    lwz r4, 0x62c(r31)
    mulli r3, r0, 0x14
    lwz r0, 0x2c(r1)
    stwux r0, r3, r4
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x4(r3), 0, 0
    lfs f2, 0x38(r1)
    stfs f2, 0xc(r3)
    lfs f0, 0x3c(r1)
    stfs f0, 0x10(r3)
    lwz r3, 0x624(r31)
    lwz r0, 0x12a8(r31)
    addi r3, r3, 0x1
    stw r3, 0x624(r31)
    rlwinm r0, r0, 0, 3, 1
    stw r0, 0x12a8(r31)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80326798(void)
{
    nofralloc
    lwz r0, 0x624(r3)
    cmpwi r0, 0x0
    beqlr
    lwz r4, 0x62c(r3)
    lfs f0, 0x60c(r3)
    stfs f0, 0x10(r4)
    lwz r4, 0x62c(r3)
    lfs f2, 0x5fc(r3)
    psq_l f1, 0x5f4(r3), 0, 0
    psq_st f1, 0x4(r4), 0, 0
    stfs f2, 0xc(r4)
    lwz r4, 0x62c(r3)
    lfs f0, 0x60c(r3)
    stfs f0, 0x24(r4)
    lwz r4, 0x62c(r3)
    lfs f2, 0x608(r3)
    psq_l f1, 0x600(r3), 0, 0
    psq_st f1, 0x18(r4), 0, 0
    stfs f2, 0x20(r4)
    blr
}

asm void fn_803267E8(void)
{
    nofralloc
    stwu r1, -0x230(r1)
    mflr r0
    stw r0, 0x234(r1)
    stfd f31, 0x220(r1)
    psq_st f31, 0x228(r1), 0, 0
    stfd f30, 0x210(r1)
    psq_st f30, 0x218(r1), 0, 0
    stw r31, 0x20c(r1)
    mr r31, r3
    stw r30, 0x208(r1)
    lwz r0, 0x15d4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803267E8_0000154C
    bl fn_80326F0C
    li r0, 0x0
    stw r0, 0x15d4(r31)
    b lbl_fn_803267E8_00001B58
lbl_fn_803267E8_0000154C:
    lwz r0, 0x15d8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803267E8_00001568
    bl fn_80327018
    li r0, 0x0
    stw r0, 0x15d8(r31)
    b lbl_fn_803267E8_00001B58
lbl_fn_803267E8_00001568:
    lwz r0, 0x15dc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803267E8_00001584
    bl fn_80327118
    li r0, 0x0
    stw r0, 0x15dc(r31)
    b lbl_fn_803267E8_00001B58
lbl_fn_803267E8_00001584:
    lwz r3, 0x14bc(r3)
    cmpwi r3, 0x0
    beq lbl_fn_803267E8_00001B58
    bl fn_8013C38C
    mr r4, r3
    addi r3, r1, 0x15c
    bl fn_8001047C
    addi r3, r1, 0x150
    addi r4, r1, 0x15c
    addi r5, r31, 0x528
    bl fn_80013338
    addi r3, r1, 0x150
    bl fn_8000D3A4
    lwz r0, 0x14cc(r31)
    fmr f30, f1
    cmpwi r0, 0x0
    bne lbl_fn_803267E8_00001924
    mr r3, r31
    bl fn_80323C18
    cmpwi r3, 0x0
    li r3, 0xb4
    beq lbl_fn_803267E8_000015E0
    li r3, 0x1e
lbl_fn_803267E8_000015E0:
    lwz r0, 0x14c8(r31)
    cmpw r0, r3
    ble lbl_fn_803267E8_00001B58
    lfs f0, lbl_80884F60
    fcmpo cr0, f30, f0
    bge lbl_fn_803267E8_00001788
    mr r3, r31
    bl fn_80323C18
    cmpwi r3, 0x0
    beq lbl_fn_803267E8_0000163C
    bl fn_80680CF8
    lis r4, 0x51ec
    subi r0, r4, 0x7ae1
    mulhw r0, r0, r3
    srawi r0, r0, 4
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x32
    subf r0, r0, r3
    cmpwi r0, 0x1e
    bge lbl_fn_803267E8_0000163C
    li r0, 0x1
    stw r0, 0x15dc(r31)
lbl_fn_803267E8_0000163C:
    li r30, 0x0
    bl fn_80680CF8
    lis r4, 0x51ec
    subi r0, r4, 0x7ae1
    mulhw r0, r0, r3
    srawi r0, r0, 4
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x32
    subf r0, r0, r3
    cmpwi r0, 0xa
    bge lbl_fn_803267E8_00001770
    addi r3, r1, 0x1b8
    bl fn_80140500
    addi r3, r1, 0x144
    addi r4, r31, 0x528
    bl fn_8001047C
    lfs f1, 0x148(r1)
    addi r3, r1, 0xe4
    lfs f0, lbl_80884F30
    addi r4, r1, 0x150
    fadds f0, f1, f0
    stfs f0, 0x148(r1)
    bl fn_800F7FD8
    lfs f1, lbl_80884FC8
    addi r3, r1, 0xf0
    addi r4, r1, 0xe4
    bl fn_800F72CC
    addi r3, r1, 0x138
    addi r4, r1, 0x144
    addi r5, r1, 0xf0
    bl fn_80013410
    bl fn_801404F8
    addi r4, r1, 0x1b8
    addi r5, r1, 0x144
    addi r6, r1, 0x138
    lis r7, 0x8000
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_803267E8_00001770
    addi r3, r1, 0xcc
    addi r4, r1, 0x150
    bl fn_800F7FD8
    lfs f1, 0x620(r31)
    addi r3, r1, 0xd8
    addi r4, r1, 0xcc
    bl fn_800F72CC
    addi r3, r1, 0x1bc
    addi r4, r1, 0xd8
    bl fn_80013484
    addi r3, r1, 0xc0
    addi r4, r1, 0x1bc
    addi r5, r1, 0x144
    bl fn_80013338
    addi r3, r1, 0xc0
    bl fn_8000D3A4
    lfs f0, lbl_80884FCC
    fcmpo cr0, f1, f0
    ble lbl_fn_803267E8_00001770
    addi r3, r31, 0x1500
    addi r4, r1, 0x1bc
    bl fn_8000D124
    lfs f0, 0x52c(r31)
    addi r3, r1, 0xb4
    stfs f0, 0x1504(r31)
    addi r4, r1, 0x150
    bl fn_80011034
    lfs f1, lbl_80884F10
    addi r3, r31, 0x1518
    lfs f2, 0xb8(r1)
    fmr f3, f1
    bl fn_80057A68
    mr r3, r31
    bl fn_803279D4
    li r30, 0x1
lbl_fn_803267E8_00001770:
    cmpwi r30, 0x0
    bne lbl_fn_803267E8_00001B58
    mr r3, r31
    li r4, 0x0
    bl fn_80326E60
    b lbl_fn_803267E8_00001B58
lbl_fn_803267E8_00001788:
    mr r3, r31
    bl fn_80323C18
    cmpwi r3, 0x0
    beq lbl_fn_803267E8_000018CC
    bl fn_80680CF8
    lis r4, 0x5555
    addi r0, r4, 0x5556
    mulhw r4, r0, r3
    srwi r0, r4, 31
    add r0, r4, r0
    mulli r0, r0, 0x3
    subf. r0, r0, r3
    beq lbl_fn_803267E8_000018C0
    addi r3, r1, 0x168
    bl fn_80140500
    addi r3, r1, 0x12c
    addi r4, r31, 0x528
    bl fn_8001047C
    lfs f1, 0x130(r1)
    addi r3, r1, 0x9c
    lfs f0, lbl_80884F30
    addi r4, r1, 0x150
    fadds f0, f1, f0
    stfs f0, 0x130(r1)
    bl fn_800F7FD8
    lfs f1, lbl_80884FC8
    addi r3, r1, 0xa8
    addi r4, r1, 0x9c
    bl fn_800F72CC
    addi r3, r1, 0x120
    addi r4, r1, 0x12c
    addi r5, r1, 0xa8
    bl fn_80013410
    bl fn_801404F8
    addi r4, r1, 0x168
    addi r5, r1, 0x12c
    addi r6, r1, 0x120
    lis r7, 0x8000
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_803267E8_00001B58
    addi r3, r1, 0x84
    addi r4, r1, 0x150
    bl fn_800F7FD8
    lfs f1, 0x620(r31)
    addi r3, r1, 0x90
    addi r4, r1, 0x84
    bl fn_800F72CC
    addi r3, r1, 0x16c
    addi r4, r1, 0x90
    bl fn_80013484
    addi r3, r1, 0x78
    addi r4, r1, 0x16c
    addi r5, r1, 0x12c
    bl fn_80013338
    addi r3, r1, 0x78
    bl fn_8000D3A4
    lfs f0, lbl_80884FD0
    fcmpo cr0, f1, f0
    ble lbl_fn_803267E8_00001B58
    addi r3, r31, 0x1500
    addi r4, r1, 0x16c
    bl fn_8000D124
    lfs f0, 0x52c(r31)
    addi r3, r1, 0x6c
    stfs f0, 0x1504(r31)
    addi r4, r1, 0x150
    bl fn_80011034
    lfs f1, lbl_80884F10
    addi r3, r31, 0x1518
    lfs f2, 0x70(r1)
    fmr f3, f1
    bl fn_80057A68
    mr r3, r31
    bl fn_803279D4
    b lbl_fn_803267E8_00001B58
lbl_fn_803267E8_000018C0:
    mr r3, r31
    bl fn_80327118
    b lbl_fn_803267E8_00001B58
lbl_fn_803267E8_000018CC:
    addi r3, r1, 0x114
    bl fn_80057A64
    lwz r3, 0x14bc(r31)
    bl fn_8012A1B8
    lfs f1, 0x4(r3)
    mr r3, r31
    lfs f2, lbl_80884FD4
    addi r4, r1, 0x114
    addi r5, r1, 0x8
    addi r6, r1, 0x15c
    bl fn_8032A3D4
    addi r3, r31, 0x14dc
    addi r4, r1, 0x114
    bl fn_8000D124
    lfs f1, lbl_80884F10
    addi r3, r31, 0x14e8
    lfs f2, 0x8(r1)
    fmr f3, f1
    bl fn_80057A68
    mr r3, r31
    bl fn_803271A4
    b lbl_fn_803267E8_00001B58
lbl_fn_803267E8_00001924:
    cmpwi r0, 0x1
    bne lbl_fn_803267E8_00001A10
    lwz r0, 0x15e4(r31)
    cmpwi r0, 0x0
    bne lbl_fn_803267E8_00001950
    li r0, 0x1
    stw r0, 0x15e4(r31)
    bl fn_80121F00
    li r4, 0x5a
    li r5, 0x3
    bl fn_80370AE4
lbl_fn_803267E8_00001950:
    lwz r3, 0x14f8(r31)
    cmpwi r3, 0x0
    bgt lbl_fn_803267E8_000019B8
    li r0, 0x0
    stw r0, 0x14cc(r31)
    lwz r5, 0x14fc(r31)
    mr r4, r31
    addi r3, r1, 0x60
    addi r6, r31, 0x14fc
    bl fn_8032A894
    addi r3, r31, 0x1500
    addi r4, r1, 0x60
    bl fn_8000D124
    addi r3, r1, 0x48
    addi r4, r31, 0x1500
    addi r5, r31, 0x528
    bl fn_80013338
    addi r3, r1, 0x54
    addi r4, r1, 0x48
    bl fn_80011034
    addi r3, r31, 0x1518
    addi r4, r1, 0x54
    bl fn_8000D124
    mr r3, r31
    bl fn_803278B4
    b lbl_fn_803267E8_00001B58
lbl_fn_803267E8_000019B8:
    subi r0, r3, 0x1
    stw r0, 0x14f8(r31)
    lwz r5, 0x14fc(r31)
    mr r3, r31
    addi r4, r31, 0x1524
    addi r6, r31, 0x14fc
    bl fn_8032A9F4
    lis r3, 0x5555
    lwz r4, 0x14f8(r31)
    addi r0, r3, 0x5556
    mulhw r3, r0, r4
    srwi r0, r3, 31
    add r0, r3, r0
    mulli r0, r0, 0x3
    subf. r0, r0, r4
    bne lbl_fn_803267E8_00001A04
    bl fn_8013A194
    bl fn_800F8548
    stw r3, 0x15f8(r31)
lbl_fn_803267E8_00001A04:
    mr r3, r31
    bl fn_803272A8
    b lbl_fn_803267E8_00001B58
lbl_fn_803267E8_00001A10:
    cmpwi r0, 0x2
    bne lbl_fn_803267E8_00001A74
    li r0, 0x3
    stw r0, 0x14cc(r31)
    lwz r5, 0x14fc(r31)
    mr r4, r31
    addi r3, r1, 0x3c
    addi r6, r31, 0x14fc
    bl fn_8032A894
    addi r3, r31, 0x1500
    addi r4, r1, 0x3c
    bl fn_8000D124
    addi r3, r1, 0x24
    addi r4, r31, 0x1500
    addi r5, r31, 0x528
    bl fn_80013338
    addi r3, r1, 0x30
    addi r4, r1, 0x24
    bl fn_80011034
    addi r3, r31, 0x1518
    addi r4, r1, 0x30
    bl fn_8000D124
    mr r3, r31
    bl fn_803278B4
    b lbl_fn_803267E8_00001B58
lbl_fn_803267E8_00001A74:
    cmpwi r0, 0x3
    bne lbl_fn_803267E8_00001B44
    mr r3, r31
    bl fn_8012A1B8
    lfs f31, 0x4(r3)
    addi r3, r1, 0xc
    addi r4, r1, 0x150
    bl fn_800F7FD8
    addi r3, r1, 0x18
    addi r4, r1, 0xc
    bl fn_80011034
    lfs f0, 0x1c(r1)
    fsubs f1, f0, f31
    bl fn_802A7964
    bl fn_802A7910
    bl fn_80011220
    lfs f0, lbl_80884FD0
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_803267E8_00001B58
    lfs f0, lbl_80884FD8
    fcmpo cr0, f30, f0
    bge lbl_fn_803267E8_00001B58
    addi r3, r1, 0x108
    addi r4, r31, 0x528
    bl fn_8001047C
    lfs f1, 0x10c(r1)
    addi r3, r1, 0xfc
    lfs f0, lbl_80884F30
    addi r4, r1, 0x15c
    fadds f0, f1, f0
    stfs f0, 0x10c(r1)
    bl fn_8001047C
    lfs f1, 0x100(r1)
    lfs f0, lbl_80884F30
    fadds f0, f1, f0
    stfs f0, 0x100(r1)
    bl fn_801404F8
    addi r5, r1, 0x108
    addi r6, r1, 0xfc
    addi r8, r31, 0x5b8
    li r4, 0x0
    lis r7, 0x8000
    li r9, 0x0
    bl fn_8004ECC0
    cmpwi r3, 0x0
    bne lbl_fn_803267E8_00001B58
    li r0, 0x4
    stw r0, 0x14cc(r31)
    mr r3, r31
    bl fn_80327A64
    b lbl_fn_803267E8_00001B58
lbl_fn_803267E8_00001B44:
    cmpwi r0, 0x4
    bne lbl_fn_803267E8_00001B58
    li r0, 0x0
    stw r0, 0x14cc(r31)
    stw r0, 0x1598(r31)
lbl_fn_803267E8_00001B58:
    lwz r0, 0x234(r1)
    psq_l f31, 0x228(r1), 0, 0
    lfd f31, 0x220(r1)
    psq_l f30, 0x218(r1), 0, 0
    lfd f30, 0x210(r1)
    lwz r31, 0x20c(r1)
    lwz r30, 0x208(r1)
    mtlr r0
    addi r1, r1, 0x230
    blr
}
